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
typedef struct R1888 R1888;
typedef struct R1888 *P1887;
struct R118 { int dummy_; rt_int kind_; P140 name_; P122 t_; P178 c_; P140 access_path_; P140 cname_; int ro_; rt_int mvalue_; int hasmv_; P174 decl_; P1887 params_; P122 result_; rt_int depth_; rt_int level_; int byref_; int vrp_; int hidden_; int from_use_; P117 members_; P117 mnext_; P117 chain_; P117 stack_; rt_int flags_; };
typedef struct R1906 R1906;
typedef struct R1906 *P1905;
struct R123 { int dummy_; rt_int kind_; P140 name_; P174 lits_; P122 elem_; P122 idx_; P178 elemcons_; P178 tcons_; P1905 fields_; P122 target_; P174 decl_; P140 cname_; int forward_; int defined_; int priv_; P122 next_; P122 idx2_; P140 littab_; P122 parent_; rt_int ndigits_; P140 fdelta_; P140 fsmall_; rt_int dims_; int is_restricted_; };
typedef struct R1910 R1910;
typedef struct R1910 *P1909;
struct R179 { int dummy_; P140 lo_; P140 hi_; P140 slen_; rt_int mlo_; rt_int mhi_; int hasm_; P140 lo2_; P140 hi2_; P140 acc_; P178 inner_; P1909 dv_; };
struct R1910 { int dummy_; P140 name_; P140 v_; P1909 next_; };
struct R1888 { int dummy_; P140 name_; rt_int mode_; P122 t_; P178 c_; P140 cfield_; P174 dflt_; P1887 next_; P117 dsym_; };
typedef struct R2031 R2031;
typedef struct R2031 *P2030;
struct R2031 { int dummy_; P140 disc_; P174 arm_; P174 variant_; P2030 next_; };
struct R1906 { int dummy_; P140 name_; P122 t_; P178 c_; P1905 next_; P174 dflt_; int is_const_; int is_discr_; P117 dsym_; P2030 guard_; P140 cond_; int dyn_; };
struct R199 { int dummy_; rt_int limit_; rt_int keep_; P140 allowed_; P198 next_; };
struct R190 { int dummy_; P140 name_; P140 cname_; P140 path_; rt_int frames_; rt_int line_; P189 next_; };
typedef struct A2343 A2343;
struct A2343 { rt_int lo, hi, lo2, hi2; rt_int *p; };
struct R144 { int dummy_; P140 match_; P140 label_; rt_int depth_; int is_loop_; P143 next_; };
typedef struct A2668 A2668;
struct A2668 { rt_int lo, hi, lo2, hi2; int *p; };
typedef struct A2673 A2673;
struct A2673 { rt_int lo, hi, lo2, hi2; rt_int *p; };
typedef struct A2676 A2676;
struct A2676 { rt_int lo, hi, lo2, hi2; rt_int *p; };
struct R147 { int dummy_; P174 body_node_; P117 visible_; P146 next_; };
struct f_mk_236fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_235;
 P140 result_;
 rt_gstr r_1345;
};
struct f_new_name_239fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_237;
 P140 *res_238;
};
struct f_is_letter_241fr { int dummy;
 struct f_greenc_1fr *up;
 int c_240;
 int result_;
};
struct f_is_digit_243fr { int dummy;
 struct f_greenc_1fr *up;
 int c_242;
 int result_;
};
struct f_upper_245fr { int dummy;
 struct f_greenc_1fr *up;
 int c_244;
 int result_;
};
struct f_lower_s_247fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_246;
 rt_gstr result_;
 rt_gstr r_1349;
 rt_int i_1352;
};
struct f_upper_s_249fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_248;
 rt_gstr result_;
 rt_gstr r_1360;
 rt_int i_1363;
};
struct f_is_operator_251fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_250;
 int result_;
};
struct f_c_field_253fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_252;
 rt_gstr result_;
};
struct f_q_254fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr result_;
};
struct f_fail_257fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int line_255;
 rt_gstr msg_256;
};
struct f_new_buffer_258fr { int dummy;
 struct f_greenc_1fr *up;
 P126 result_;
};
struct f_put_to_261fr { int dummy;
 struct f_greenc_1fr *up;
 P126 b_259;
 rt_gstr s_260;
 P151 l_1372;
};
struct f_emit_263fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_262;
};
struct f_print_buffer_265fr { int dummy;
 struct f_greenc_1fr *up;
 P126 b_264;
 P151 l_1375;
};
struct f_splice_268fr { int dummy;
 struct f_greenc_1fr *up;
 P126 a_266;
 P126 b_267;
};
struct f_is_reserved_270fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_269;
 int result_;
};
struct f_add_token_274fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_271;
 rt_gstr s_272;
 rt_int ival_273;
};
struct f_digit_value_276fr { int dummy;
 struct f_greenc_1fr *up;
 int c_275;
 rt_int result_;
};
struct f_digit_in_279fr { int dummy;
 struct f_greenc_1fr *up;
 int c_277;
 rt_int base_278;
 rt_int result_;
 rt_int d_1383;
};
struct f_accumulate_283fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int *v_280;
 rt_int base_281;
 rt_int d_282;
};
struct f_lex_line_285fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr line_284;
 rt_int i_1384;
 rt_int j_1385;
 rt_int n_1386;
 int c_1388;
 int quote_1389;
 rt_int v_1390;
 rt_int d_1391;
 rt_gstr buf_1392;
 rt_int bl_1394;
 rt_int base_1436;
 rt_gstr two_1480;
};
struct f_exponent_ahead_288fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr line_286;
 rt_int j_287;
 int result_;
};
struct f_exponent_293fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr line_289;
 rt_int *j_290;
 rt_gstr *buf_291;
 rt_int *bl_292;
};
struct f_include_open_296fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_294;
 rt_int *length_295;
};
struct f_include_char_299fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int i_297;
 int *c_298;
};
struct f_check_include_300fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int n_1527;
};
struct f_include_text_302fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int n_301;
 rt_gstr t_1538;
 rt_int saved_line_1540;
 rt_int from_1541;
 rt_int k_1543;
 rt_int k_1550;
};
struct f_include_line_306fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr t_303;
 rt_int from_304;
 rt_int to_305;
 rt_gstr l_1555;
 rt_int k_1558;
};
struct f_read_source_307fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr buf_1566;
 rt_int bl_1568;
 int c_1569;
};
struct f_nn_310fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_308;
 rt_int line_309;
 P174 result_;
};
struct f_append_314fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *head_311;
 P174 *tail_312;
 P174 x_313;
};
struct f_list_len_316fr { int dummy;
 struct f_greenc_1fr *up;
 P174 l_315;
 rt_int result_;
 rt_int n_1585;
 P174 p_1586;
};
struct f_cur_line_317fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int result_;
};
struct f_at_kw_319fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_318;
 int result_;
};
struct f_at_op_321fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_320;
 int result_;
};
struct f_at_kind_323fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_322;
 int result_;
};
struct f_kind_at_325fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_324;
 rt_int result_;
};
struct f_text_at_327fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_326;
 rt_gstr result_;
};
struct f_perror_329fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr msg_328;
};
struct f_skip_330fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_expect_kw_332fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_331;
};
struct f_expect_op_334fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_333;
};
struct f_expect_id_336fr { int dummy;
 struct f_greenc_1fr *up;
 P140 *res_335;
};
struct f_name_node_338fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_337;
 P174 x_1601;
};
struct f_id_list_340fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_339;
 P174 head_1602;
 P174 tail_1603;
 P174 x_1604;
};
struct f_binop_345fr { int dummy;
 struct f_greenc_1fr *up;
 P140 op_341;
 P174 l_342;
 P174 r_343;
 rt_int line_344;
 P174 result_;
 P174 x_1606;
};
struct f_expr_347fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_346;
 P174 l_1607;
 P174 r_1608;
 P140 op_1609;
 P140 first_op_1610;
 rt_int line_1611;
 int short_1612;
 int first_short_1613;
};
struct f_is_rel_349fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_348;
 int result_;
};
struct f_relation_351fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_350;
 P174 l_1616;
 P174 r_1617;
 P174 lo_1618;
 P174 hi_1619;
 P174 t_1620;
 P140 op_1621;
 rt_int line_1622;
 int neg_1623;
};
struct f_path_of_353fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_352;
 rt_gstr result_;
};
struct f_simple_expr_355fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_354;
 P174 l_1627;
 P174 r_1628;
 P140 op_1629;
 rt_int line_1630;
};
struct f_term_357fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_356;
 P174 l_1634;
 P174 r_1635;
 P140 op_1636;
 rt_int line_1637;
};
struct f_factor_359fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_358;
 P174 l_1640;
 P174 r_1641;
 P140 op_1642;
 rt_int line_1643;
};
struct f_primary_361fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_360;
 P174 x_1645;
 rt_int line_1646;
};
struct f_agg_or_paren_363fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_362;
 rt_int line_1651;
 P174 items_1652;
 P174 itail_1653;
 P174 it_1654;
 P174 first_1655;
 P174 keys_1656;
 P174 ktail_1657;
 P174 lab_1658;
 P174 x_1659;
 int more_1660;
};
struct f_choice_token_365fr { int dummy;
 struct f_greenc_1fr *up;
 P110 t_364;
 int result_;
};
struct f_aggregate_ahead_366fr { int dummy;
 struct f_greenc_1fr *up;
 int result_;
 rt_int d_1663;
 rt_int k_1664;
 P110 t_1667;
};
struct f_name_p_368fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_367;
 P174 p_1669;
 P174 x_1670;
 P174 args_1671;
 P174 atail_1672;
 P174 lo_1673;
 P174 r_1674;
 rt_int line_1675;
 int more_1676;
 P140 formal_1680;
 rt_int mark_1681;
};
struct f_component_list_370fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_369;
 P174 comps_1684;
 P174 ctail_1685;
 P174 names_1686;
 P174 st_1687;
 P174 def_1688;
 P174 cm_1689;
 P174 v_1690;
 P174 arm_1691;
 P174 atail_1692;
 P174 labs_1693;
 P174 ltail_1694;
 P174 l_1695;
 int is_c_1696;
};
struct f_discrete_range_p_372fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_371;
 P174 lo_1701;
 P174 r_1702;
 rt_int line_1703;
};
struct f_subtype_ind_374fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_373;
 P140 f_1704;
 P174 x_1705;
 P174 r_1706;
 P174 args_1707;
 P174 atail_1708;
 P174 lo_1709;
 rt_int line_1710;
 int more_1711;
};
struct f_type_spec_376fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_375;
 P174 x_1714;
};
struct f_type_def_378fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_377;
 P174 x_1715;
 P174 lits_1716;
 P174 ltail_1717;
 P174 l_1718;
 P174 idx_1719;
 P174 itail_1720;
 P174 r_1721;
 P174 comps_1722;
 P174 ctail_1723;
 P174 names_1724;
 P174 st_1725;
 P174 def_1726;
 P174 cm_1727;
 rt_int line_1728;
 int more_1729;
};
struct f_pragma_p_380fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_379;
 P174 x_1733;
 P174 a_1734;
 P174 head_1735;
 P174 tail_1736;
};
struct f_check_pragma_382fr { int dummy;
 struct f_greenc_1fr *up;
 P174 x_381;
 rt_gstr p_1738;
 rt_int n_1739;
 P174 a_1740;
};
struct f_visibility_p_384fr { int dummy;
 struct f_greenc_1fr *up;
 P140 *res_383;
 P174 names_1742;
 P140 v_1743;
};
struct f_unit_p_386fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_385;
 P140 v_1745;
 P174 x_1746;
};
struct f_skip_representation_387fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_decl_part_389fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_388;
 P174 head_1751;
 P174 tail_1752;
 P174 x_1753;
 P174 names_1754;
};
struct f_object_decl_391fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_390;
 P174 head_1756;
 P174 tail_1757;
 P174 names_1758;
 P174 st_1759;
 P174 init_1760;
 P174 x_1761;
 rt_int line_1762;
 int is_const_1763;
};
struct f_type_decl_393fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_392;
 P174 x_1766;
 rt_int line_1767;
};
struct f_formal_part_395fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_394;
 P174 head_1768;
 P174 tail_1769;
 P174 names_1770;
 P174 st_1771;
 P174 def_1772;
 P174 p_1773;
 rt_int mode_1774;
 int more_1775;
};
struct f_designator_397fr { int dummy;
 struct f_greenc_1fr *up;
 P140 *res_396;
};
struct f_subprogram_399fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_398;
 P174 x_1782;
 rt_int line_1783;
 int is_proc_1784;
};
struct f_body_part_401fr { int dummy;
 struct f_greenc_1fr *up;
 P174 x_400;
};
struct f_parse_handlers_403fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_402;
 P174 head_1786;
 P174 tail_1787;
 P174 h_1788;
 P174 names_1789;
 P174 ntail_1790;
 P174 n_1791;
};
struct f_package_p_405fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_404;
 P174 x_1795;
 rt_int line_1796;
};
struct f_at_statements_end_406fr { int dummy;
 struct f_greenc_1fr *up;
 int result_;
};
struct f_statements_408fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_407;
 P174 head_1797;
 P174 tail_1798;
 P174 x_1799;
};
struct f_statement_410fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_409;
 P174 l_1801;
 P174 x_1802;
 P140 label_1803;
};
struct f_labelled_statement_413fr { int dummy;
 struct f_greenc_1fr *up;
 P140 label_411;
 P174 *res_412;
 P174 x_1804;
 P174 t_1805;
 rt_int line_1806;
};
struct f_task_statement_415fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_414;
};
struct f_if_stmt_417fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_416;
 P174 x_1810;
 P174 arm_1811;
 P174 head_1812;
 P174 tail_1813;
 int go_1814;
};
struct f_case_stmt_419fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_418;
 P174 x_1816;
 P174 arm_1817;
 P174 head_1818;
 P174 tail_1819;
 P174 labs_1820;
 P174 ltail_1821;
 P174 l_1822;
 int others_arm_1823;
};
struct f_loop_stmt_421fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_420;
 P174 x_1826;
 P174 r_1827;
 rt_int line_1828;
};
struct f_compilation_423fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_422;
 rt_int first_1829;
 P174 head_1830;
 P174 tail_1831;
 P174 x_1832;
};
struct f_hash_425fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_424;
 rt_int result_;
 rt_int h_1839;
 rt_int i_1842;
};
struct f_listed_428fr { int dummy;
 struct f_greenc_1fr *up;
 P140 list_426;
 rt_gstr name_427;
 int result_;
 rt_gstr l_1847;
 rt_int n_1848;
 rt_int i_1853;
};
struct f_visible_sym_430fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_429;
 int result_;
 P198 b_1860;
};
struct f_lookup_432fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_431;
 P117 result_;
 P117 y_1862;
};
struct f_same_task_435fr { int dummy;
 struct f_greenc_1fr *up;
 P117 a_433;
 P117 b_434;
 int result_;
};
struct f_lookup_entry_438fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_436;
 P117 owner_437;
 P117 result_;
 P117 y_1865;
};
struct f_lookup_at_441fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_439;
 rt_int d_440;
 P117 result_;
 P117 y_1868;
};
struct f_enclosing_depth_443fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_442;
 rt_int result_;
 rt_int i_1872;
};
struct f_push_unit_445fr { int dummy;
 struct f_greenc_1fr *up;
 P140 name_444;
};
struct f_lookup_decl_447fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_446;
 P117 result_;
 P117 y_1880;
};
struct f_overloadable_449fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_448;
 int result_;
};
struct f_same_452fr { int dummy;
 struct f_greenc_1fr *up;
 P122 a_450;
 P122 b_451;
 int result_;
};
struct f_root_454fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_453;
 P122 result_;
 P122 r_1883;
};
struct f_derived_from_457fr { int dummy;
 struct f_greenc_1fr *up;
 P122 a_455;
 P122 b_456;
 int result_;
 P122 r_1885;
};
struct f_is_numeric_459fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_458;
 int result_;
};
struct f_is_discrete_461fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_460;
 int result_;
};
struct f_same_types_464fr { int dummy;
 struct f_greenc_1fr *up;
 P1887 a_462;
 P1887 b_463;
 int result_;
 P1887 x_1889;
 P1887 y_1890;
};
struct f_same_signature_467fr { int dummy;
 struct f_greenc_1fr *up;
 P1887 a_465;
 P1887 b_466;
 int result_;
 P1887 x_1892;
 P1887 y_1893;
};
struct f_distinct_overload_470fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_468;
 P117 z_469;
 int result_;
};
struct f_define_473fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_471;
 rt_int line_472;
 rt_int h_1895;
 P117 z_1896;
};
struct f_open_scope_474fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_close_scope_475fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_new_sym_478fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_476;
 P140 name_477;
 P117 result_;
};
struct f_new_typ_480fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_479;
 P122 result_;
};
struct f_new_cons_481fr { int dummy;
 struct f_greenc_1fr *up;
 P178 result_;
};
struct f_bounded_483fr { int dummy;
 struct f_greenc_1fr *up;
 P178 c_482;
 int result_;
};
struct f_bounded_hi_485fr { int dummy;
 struct f_greenc_1fr *up;
 P178 c_484;
 int result_;
};
struct f_static_bounds_487fr { int dummy;
 struct f_greenc_1fr *up;
 P178 c_486;
 int result_;
};
struct f_discriminated_489fr { int dummy;
 struct f_greenc_1fr *up;
 P178 c_488;
 int result_;
};
struct f_kind_name_491fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_490;
 rt_gstr result_;
};
struct f_check_type_495fr { int dummy;
 struct f_greenc_1fr *up;
 P122 got_492;
 P122 want_493;
 rt_int line_494;
};
struct f_field_count_497fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_496;
 rt_int result_;
 rt_int n_1914;
 P1905 f_1915;
};
struct f_ctype_500fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_498;
 P140 *r_499;
 P140 s_1917;
};
struct f_field_decls_503fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_501;
 P140 *r_502;
 P1905 f_1919;
 P140 s_1920;
 P140 ct_1921;
};
struct f_declare_ctype_505fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_504;
 P140 ct_1923;
 P140 s_1924;
 P122 target_1925;
};
struct f_lit_index_508fr { int dummy;
 struct f_greenc_1fr *up;
 P174 lits_506;
 rt_gstr name_507;
 rt_int result_;
 rt_int i_1926;
 P174 l_1927;
};
struct f_manifest_512fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_509;
 rt_int *v_510;
 int *ok_511;
 rt_int a_1929;
 rt_int b_1930;
 int ok2_1931;
 P117 y_1932;
};
struct f_resolve_516fr { int dummy;
 struct f_greenc_1fr *up;
 P174 st_513;
 P122 *t_514;
 P178 *c_515;
 P117 y_1933;
 P122 dummy_1934;
 P140 code_1935;
 int ok_1936;
 P174 r_1937;
};
struct f_constraint_list_520fr { int dummy;
 struct f_greenc_1fr *up;
 P174 st_517;
 P122 t_518;
 P178 c_519;
 P174 r_1938;
 P122 arrt_1939;
 P178 cc_1940;
 P122 it_1941;
};
struct f_discriminant_constraint_524fr { int dummy;
 struct f_greenc_1fr *up;
 P174 st_521;
 P122 t_522;
 P178 c_523;
 P174 a_1943;
 P1905 f_1944;
 P122 vt_1945;
 P140 v_1946;
 P1909 d_1947;
 P1909 tail_1948;
};
struct f_discrete_bounds_530fr { int dummy;
 struct f_greenc_1fr *up;
 P174 r_525;
 P122 want_526;
 P122 *t_527;
 P140 *lo_528;
 P140 *hi_529;
 P178 c_1956;
 P117 y_1957;
};
struct f_range_of_534fr { int dummy;
 struct f_greenc_1fr *up;
 P174 r_531;
 P122 t_532;
 P178 c_533;
 P122 dummy_1958;
 int ok_1959;
};
struct f_fresh_typ_538fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_535;
 P140 name_536;
 P122 *t_537;
 P122 ph_1960;
};
struct f_inherit_542fr { int dummy;
 struct f_greenc_1fr *up;
 P122 parent_539;
 P122 t_540;
 rt_int line_541;
 P117 s_1961;
 P117 z_1962;
 P1887 p_1963;
 P1887 q_1964;
 P1887 tail_1965;
 int uses_1966;
 P117 news_1967;
};
struct f_derive_literals_545fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_543;
 rt_int line_544;
 P174 l_1974;
 rt_int n_1975;
 P117 y_1976;
};
struct f_type_definition_550fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_546;
 P140 name_547;
 P122 *t_548;
 P178 *c_549;
 P122 dummy_1978;
 P122 it_1979;
 P178 ic_1980;
 P174 l_1981;
 P174 comp_1982;
 P1905 f_1983;
 P1905 tail_1984;
 int ok_1985;
 rt_int n_1986;
 P117 y_1987;
};
struct f_array_type_557fr { int dummy;
 struct f_greenc_1fr *up;
 P174 idx_551;
 P174 comp_552;
 P140 name_553;
 rt_int line_554;
 P122 *t_555;
 P178 *c_556;
 P174 l_1991;
 P178 rowc_1992;
 P178 ic_1993;
 P122 it_1994;
};
struct f_static_range_561fr { int dummy;
 struct f_greenc_1fr *up;
 P174 l_558;
 P174 h_559;
 P178 c_560;
 int ok_1995;
 int ok2_1996;
};
struct f_component_place_567fr { int dummy;
 struct f_greenc_1fr *up;
 P122 rt_562;
 P1905 f_563;
 rt_gstr a_564;
 rt_gstr ct_565;
 P140 *r_566;
 P140 bits_1999;
};
struct f_no_value_569fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_568;
 rt_gstr result_;
};
struct f_restricted_here_571fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_570;
 int result_;
};
struct f_elem_ctype_574fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_572;
 P140 *r_573;
};
struct f_first_index_577fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_575;
 P140 *r_576;
};
struct f_is_string_579fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_578;
 int result_;
};
struct f_subst_582fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_580;
 rt_gstr r_581;
 rt_gstr result_;
 rt_int i_2003;
};
struct f_mentions_record_584fr { int dummy;
 struct f_greenc_1fr *up;
 P140 s_583;
 int result_;
 rt_int i_2017;
};
struct f_subst_cons_588fr { int dummy;
 struct f_greenc_1fr *up;
 P178 c_585;
 rt_gstr r_586;
 P178 *res_587;
};
struct f_remove_sym_590fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_589;
 rt_int h_2023;
 P117 p_2024;
};
struct f_record_components_595fr { int dummy;
 struct f_greenc_1fr *up;
 P174 list_591;
 P122 t_592;
 P2030 g_593;
 rt_int line_594;
 P174 comp_2032;
 P1905 f_2033;
 P1905 tail_2034;
 P1905 df_2035;
 P174 prev_2036;
 P122 pt_2037;
 P122 vt_2038;
 P178 pc_2039;
 P117 y_2040;
 P140 acc_2041;
 P140 v_2042;
 P140 x_2043;
 P174 arm_2044;
 P2030 g2_2045;
};
struct f_guard_cond_599fr { int dummy;
 struct f_greenc_1fr *up;
 P2030 g_596;
 P122 t_597;
 P140 *r_598;
 P174 a_2055;
 P174 l_2056;
 P1905 df_2057;
 P140 x_2058;
 P140 d_2059;
 P122 dt_2060;
 P122 vt_2061;
 P140 lo_2062;
 P140 hi_2063;
};
struct f_arm_test_604fr { int dummy;
 struct f_greenc_1fr *up;
 P174 arm_600;
 P140 dname_601;
 rt_gstr d_602;
 P140 *x_603;
 P174 l_2065;
 P117 y_2066;
 P122 dt_2067;
 P122 vt_2068;
 P140 lo_2069;
 P140 hi_2070;
};
struct f_derived_type_609fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_605;
 P140 name_606;
 P122 *t_607;
 P178 *c_608;
 P122 pt_2072;
 P140 ct_2073;
 P122 ph_2074;
};
struct f_real_type_614fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_610;
 P140 name_611;
 P122 *t_612;
 P178 *c_613;
 P122 dt_2075;
 P140 dv_2076;
 rt_int n_2077;
 int ok_2078;
};
struct f_finish_ptr_616fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_615;
 P178 c_2079;
};
struct f_init_storage_620fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lval_617;
 P122 t_618;
 P178 c_619;
 P178 ec_2080;
 P178 fc_2081;
 P1909 d_2082;
 P140 ct_2083;
 P140 i_2084;
 P140 v_2085;
 P140 x_2086;
 P122 vt_2087;
 P1905 f_2088;
};
struct f_composite_622fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_621;
 int result_;
};
struct f_assign_code_628fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lval_623;
 P122 t_624;
 rt_gstr v_625;
 P178 c_626;
 P140 *r_627;
 P140 ct_2092;
 P140 x_2093;
 P1909 d_2094;
};
struct f_copy_code_632fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_629;
 rt_gstr v_630;
 P140 *r_631;
 P140 ct_2096;
};
struct f_eq_code_637fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_633;
 rt_gstr a_634;
 rt_gstr b_635;
 P140 *r_636;
 P140 ct_2097;
};
struct f_seen_name_640fr { int dummy;
 struct f_greenc_1fr *up;
 P151 l_638;
 rt_gstr s_639;
 int result_;
 P151 p_2098;
};
struct f_emit_helpers_641fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_2100;
 P140 et_2101;
 P151 done_2102;
 P151 l_2103;
};
struct f_helper_bodies_643fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_642;
 P140 c_2107;
 P126 b_2108;
 P140 ct_2109;
 P140 et_2110;
 P140 x_2111;
 P140 y_2112;
 P140 conds_2113;
 P1905 f_2114;
};
struct f_storage_647fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_644;
 P122 t_645;
 P140 *access_code_646;
 P140 ct_2117;
 P140 g_2118;
};
struct f_bind_650fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_648;
 P140 access_code_649;
};
struct f_declare_subprograms_652fr { int dummy;
 struct f_greenc_1fr *up;
 P174 from_651;
 P174 e_2119;
};
struct f_declare_one_654fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_653;
 P117 y_2121;
 P117 z_2122;
};
struct f_elaborate_defaults_656fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_655;
 P1887 pm_2126;
 P122 vt_2127;
 P140 v_2128;
 P140 acc_2129;
 P140 x_2130;
 P117 z_2131;
};
struct f_build_subprogram_659fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_657;
 P117 *y_658;
 P174 p_2133;
 P1887 pm_2134;
 P1887 tail_2135;
 P178 rc_2136;
 rt_int k_2137;
};
struct f_decl_elements_661fr { int dummy;
 struct f_greenc_1fr *up;
 P174 decls_660;
 P174 e_2141;
 int declared_2142;
};
struct f_decl_element_663fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_662;
 P198 saved_2144;
};
struct f_decl_element_1_665fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_664;
 P174 pd_2145;
 P117 y_2146;
 P117 z_2147;
 P122 t_2148;
 P122 vt_2149;
 P178 c_2150;
 P140 acc_2151;
 P140 v_2152;
 P140 x_2153;
 int ok_2154;
};
struct f_pragma_decl_667fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_666;
};
struct f_resolve_object_type_671fr { int dummy;
 struct f_greenc_1fr *up;
 P174 st_668;
 P122 *t_669;
 P178 *c_670;
};
struct f_find_subunit_674fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_672;
 P174 *r_673;
 P174 u_2156;
 rt_int k_2157;
};
struct f_stub_676fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_675;
 P174 sub_2160;
 P198 saved_2161;
 rt_int k_2162;
 rt_int d_2163;
 P140 first_name_2164;
 P140 list_2165;
 P117 y_2166;
 rt_int i_2168;
};
struct f_rename_subprogram_678fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_677;
 P117 newy_2185;
 P117 y_2186;
 P117 z_2187;
 P117 cand_2188;
 P174 ix_2189;
 P1887 p_2190;
 P1887 q_2191;
 P1887 tail_2192;
};
struct f_rename_module_681fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_679;
 P174 target_680;
 P117 y_2201;
 P117 z_2202;
};
struct f_push_barrier_684fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_682;
 rt_int limit_683;
 P198 b_2203;
 P140 first_name_2204;
 rt_int k_2205;
};
struct f_other_decl_686fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_685;
};
struct f_scan_labels_689fr { int dummy;
 struct f_greenc_1fr *up;
 P174 stmts_687;
 rt_gstr path_688;
 P174 s_2213;
 P174 a_2214;
 P189 l_2215;
 P140 c_2216;
};
struct f_scan_guarded_693fr { int dummy;
 struct f_greenc_1fr *up;
 P174 stmts_690;
 P174 hs_691;
 rt_gstr path_692;
 P174 h_2226;
};
struct f_count_g_695fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_694;
 rt_int result_;
 rt_int n_2228;
 rt_int i_2232;
};
struct f_label_body_698fr { int dummy;
 struct f_greenc_1fr *up;
 P174 stmts_696;
 P174 hs_697;
 P189 l_2237;
 P189 g_2238;
 P140 gp_2239;
 P140 lp_2240;
 rt_int i_2251;
};
struct f_gen_label_701fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_699;
 int goto_it_700;
 P189 l_2257;
};
struct f_is_foreign_703fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_702;
 int result_;
};
struct f_subprogram_body_706fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_704;
 P117 y_705;
 P126 saved_code_2259;
 P126 saved_fields_2260;
 int saved_in_2261;
 P117 saved_sym_2262;
 P143 saved_exits_2263;
 rt_int saved_frames_2264;
 P151 saved_handlers_2265;
 P151 saved_cleanups_2266;
 P189 saved_labels_2267;
 P143 saved_hx_2268;
 rt_int saved_hd_2269;
 P117 saved_pure_2270;
 P140 aw_2271;
 rt_int saved_pdepth_2272;
 P140 args_2273;
 P140 head_2274;
 P140 frame_2275;
 P140 parent_2276;
 P140 ct_2277;
 P140 x_2278;
 P1887 pm_2279;
 P117 p_2280;
};
struct f_gen_statements_708fr { int dummy;
 struct f_greenc_1fr *up;
 P174 stmts_707;
 P174 s_2286;
};
struct f_pop_frames_710fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int upto_709;
 rt_int i_2288;
 P151 c_2289;
};
struct f_push_cleanup_712fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_711;
};
struct f_pop_cleanup_713fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_guarded_718fr { int dummy;
 struct f_greenc_1fr *up;
 P174 decls_714;
 P174 stmts_715;
 P174 hs_716;
 rt_int line_717;
 P143 saved_hx_2293;
 P140 f_2294;
 P140 x_2295;
 P174 h_2296;
 P174 n_2297;
 int first_2298;
 int has_others_2299;
 P140 conds_2300;
};
struct f_exc_id_722fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_719;
 rt_int line_720;
 P140 *r_721;
 P117 y_2305;
};
struct f_gen_statement_724fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_723;
 P122 t_2306;
 P122 vt_2307;
 P178 c_2308;
 P140 lv_2309;
 P140 v_2310;
 P140 x_2311;
 int ro_2312;
};
struct f_slice_assign_726fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_725;
 P140 lv_2314;
 P140 v_2315;
 P140 sl_2316;
 P140 x_2317;
 P122 t_2318;
 P122 st_2319;
 P122 vt_2320;
 P178 c_2321;
 int ro_2322;
};
struct f_gen_call_728fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_727;
 P174 c_2323;
 P122 t_2324;
 P140 v_2325;
};
struct f_gen_if_730fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_729;
 P174 a_2326;
 int first_2327;
 P122 t_2328;
 P140 v_2329;
};
struct f_gen_case_732fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_731;
 P122 st_2331;
 P122 vt_2332;
 int first_2333;
 P174 a_2334;
 P174 lab_2335;
 P140 sel_2336;
 P140 tmp_2337;
 P140 ct_2338;
 P140 conds_2339;
 P140 v_2340;
 P140 lo_2341;
 P140 hi_2342;
 A2343 clo_2344;
 A2343 chi_2346;
 rt_int nc_2348;
 rt_int vlo_2349;
 rt_int vhi_2350;
 rt_int total_2351;
 int ok_2352;
 int ok2_2353;
 P117 y_2354;
 rt_int k_2358;
 rt_int k_2367;
};
struct f_selector_range_738fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_733;
 P122 t_734;
 rt_int *lo_735;
 rt_int *hi_736;
 int *ok_737;
 P117 y_2375;
};
struct f_push_exit_742fr { int dummy;
 struct f_greenc_1fr *up;
 P140 match_739;
 int is_loop_740;
 P140 *label_741;
};
struct f_gen_loop_744fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_743;
 P122 t_2378;
 P122 vt_2379;
 P178 c_2380;
 P140 label_2381;
 P140 cond_2382;
 P140 acc_2383;
 P140 lov_2384;
 P140 hiv_2385;
 P140 it_2386;
 P117 y_2387;
 P174 r_2388;
};
struct f_gen_block_746fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_745;
 P140 label_2389;
 P140 aw_2390;
};
struct f_exit_matches_749fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_747;
 P143 x_748;
 int result_;
};
struct f_gen_exit_751fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_750;
 P143 x_2391;
 P122 t_2392;
 P140 v_2393;
};
struct f_gen_return_753fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_752;
 P122 vt_2395;
 P140 v_2396;
 P140 x_2397;
};
struct f_access_of_756fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_754;
 P140 *r_755;
 P140 p_2398;
 rt_int i_2400;
};
struct f_link_to_759fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int l_757;
 P140 *r_758;
 rt_int i_2405;
};
struct f_c_ident_761fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_760;
 rt_gstr result_;
};
struct f_deref_765fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_762;
 P122 t_763;
 P140 *r_764;
 P140 ct_2409;
};
struct f_is_object_767fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_766;
 int result_;
 P117 y_2410;
};
struct f_is_const_access_769fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_768;
 int result_;
 P117 y_2411;
};
struct f_lvalue_775fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_770;
 P140 *code_out_771;
 P122 *t_772;
 P178 *c_773;
 int *ro_774;
 int cp_2412;
 P174 ex_2413;
 P117 y_2414;
 P140 base_2415;
 P122 bt_2416;
 P178 bc_2417;
};
struct f_select_on_784fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_776;
 P122 bt_777;
 P174 e_778;
 int *ro_779;
 int lv_780;
 P140 *code_out_781;
 P122 *t_782;
 P178 *c_783;
 P1905 f_2418;
 P140 d_2419;
 P140 ct_2420;
 P140 tmp_2421;
};
struct f_index_on_793fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_785;
 P122 bt_786;
 P174 e_787;
 int *ro_788;
 int lv_789;
 P140 *code_out_790;
 P122 *t_791;
 P178 *c_792;
 P174 a_2423;
 P122 arrt_2424;
 P140 acc_2425;
 P122 it_2426;
 P140 i_2427;
 P140 lo_2428;
 P140 hi_2429;
 P140 d_2430;
 P140 ct_2431;
 P140 tmp_2432;
};
struct f_type_attribute_796fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_794;
 rt_gstr name_795;
 int result_;
 P117 y_2434;
 P1887 p_2436;
};
struct f_is_type_name_798fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_797;
 int result_;
 P117 y_2439;
};
struct f_is_char_lit_800fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_799;
 int result_;
};
struct f_is_enum_lit_802fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_801;
 int result_;
 P117 y_2441;
};
struct f_c_string_804fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_803;
 rt_gstr result_;
 rt_int n_2442;
 rt_int i_2445;
 rt_gstr r_2454;
 rt_int j_2456;
 rt_int i_2460;
};
struct f_is_literal_806fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_805;
 int result_;
};
struct f_range_bounds_814fr { int dummy;
 struct f_greenc_1fr *up;
 P174 l_807;
 P174 h_808;
 P122 want_809;
 rt_int line_810;
 P122 *t_811;
 P140 *lo_812;
 P140 *hi_813;
 P122 w_2471;
 P122 t2_2472;
};
struct f_gexpr_819fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_815;
 P122 want_816;
 P122 *t_817;
 P140 *r_818;
 P117 y_2473;
 P122 bt_2474;
 P178 c_2475;
 int ro_2476;
 P140 base_2477;
 P140 a_2478;
 P174 nm_2479;
 int saved_lv_2480;
};
struct f_gexpr_1_824fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_820;
 P122 want_821;
 P122 *t_822;
 P140 *r_823;
 P117 y_2481;
 P122 bt_2482;
 P178 c_2483;
 int ro_2484;
 P140 base_2485;
 P140 a_2486;
 P174 nm_2487;
 P174 c2_2488;
};
struct f_string_aggregate_829fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_825;
 P122 want_826;
 P122 *t_827;
 P140 *r_828;
 P174 ag_2492;
 P174 it_2493;
 P174 tail_2494;
 P174 l_2495;
 rt_int k_2498;
};
struct f_char_literal_834fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_830;
 P122 want_831;
 P122 *t_832;
 P140 *r_833;
 rt_int i_2504;
};
struct f_expanded_837fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_835;
 P174 *r_836;
 P117 y_2507;
 rt_int d_2508;
};
struct f_gen_name_842fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_838;
 P122 want_839;
 P122 *t_840;
 P140 *r_841;
 P117 y_2509;
 P117 z_2510;
 P174 call_2511;
};
struct f_gen_unop_847fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_843;
 P122 want_844;
 P122 *t_845;
 P140 *r_846;
 P140 a_2514;
 P140 x_2515;
 int done_2516;
};
struct f_short_int_849fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_848;
 int result_;
};
struct f_float_kind_851fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_850;
 rt_gstr result_;
};
struct f_membership_854fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_852;
 P140 *r_853;
 P122 ta_2517;
 P122 tb_2518;
 P122 tt_2519;
 P140 a_2520;
 P140 lo_2521;
 P140 hi_2522;
 P140 ct_2523;
 P178 c_2524;
 P1909 d_2525;
};
struct f_condition_859fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_855;
 P122 want_856;
 P122 *t_857;
 P140 *r_858;
 P140 a_2527;
 P140 b_2528;
 P122 tb_2529;
};
struct f_catenation_864fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_860;
 P122 want_861;
 P122 *t_862;
 P140 *r_863;
 P122 arrt_2530;
 P122 ta_2531;
 P122 tb_2532;
 P140 a_2533;
 P140 b_2534;
 P140 ct_2535;
};
struct f_cat_operand_869fr { int dummy;
 struct f_greenc_1fr *up;
 P174 x_865;
 P122 arrt_866;
 rt_int line_867;
 P140 *r_868;
 P122 tx_2536;
 P140 ct_2537;
};
struct f_arithmetic_874fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_870;
 P122 want_871;
 P122 *t_872;
 P140 *r_873;
 rt_gstr op_2538;
 P122 ta_2539;
 P122 tb_2540;
 P122 hint_2541;
 P140 a_2542;
 P140 b_2543;
};
struct f_fixed_operation_882fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_875;
 P122 ta_876;
 P122 tb_877;
 rt_gstr a_878;
 rt_gstr b_879;
 P122 *t_880;
 P140 *r_881;
 rt_gstr op_2544;
};
struct f_gen_binop_887fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_883;
 P122 want_884;
 P122 *t_885;
 P140 *r_886;
 rt_gstr op_2545;
 P122 ta_2546;
 P122 tb_2547;
 P122 hint_2548;
 P122 ct_2549;
 P140 a_2550;
 P140 b_2551;
 P140 x_2552;
 P140 dummy_2553;
 int done_2554;
};
struct f_conversion_892fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_888;
 P117 y_889;
 P122 *t_890;
 P140 *r_891;
 P122 aty_2555;
 P140 a_2556;
 P174 ag_2557;
 P174 it_2558;
 P174 tail_2559;
 P174 arg_2560;
};
struct f_constrain_896fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_893;
 P122 t_894;
 P140 *r_895;
 P140 ct_2562;
 P140 tmp_2563;
};
struct f_array_conversion_903fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_897;
 P122 t_898;
 P122 aty_899;
 P178 c_900;
 rt_gstr a_901;
 P140 *r_902;
 P122 x_2564;
 P122 y_2565;
 P140 ct_2566;
 P140 act_2567;
 P140 et_2568;
 P140 tmp_2569;
 P140 s_2570;
 rt_int k_2572;
};
struct f_gen_attr_908fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_904;
 P122 want_905;
 P122 *t_906;
 P140 *r_907;
 rt_gstr a_2576;
 P117 y_2577;
 P122 tt_2578;
 P122 aty_2579;
 P140 v_2580;
 P140 d_2581;
 P178 c_2582;
 rt_int n_2583;
 int ro_2584;
};
struct f_type_bits_912fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_909;
 P178 c_910;
 P140 *r_911;
 P140 ct_2585;
};
struct f_object_bits_916fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_913;
 rt_gstr v_914;
 P140 *r_915;
 P140 ct_2586;
 P140 et_2587;
};
struct f_numeric_attr_922fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_917;
 P122 tt_918;
 P178 c_919;
 P122 *t_920;
 P140 *r_921;
 rt_gstr a_2588;
 int short_2589;
};
struct f_component_attr_926fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_923;
 P122 *t_924;
 P140 *r_925;
 P122 bt_2590;
 P140 v_2591;
 P140 ct_2592;
 P1905 f_2593;
};
struct f_config_attr_930fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_927;
 P122 *t_928;
 P140 *r_929;
 rt_gstr a_2595;
 rt_gstr p_2596;
 P140 nm_2597;
};
struct f_attr_dim_934fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_931;
 P122 arrt_932;
 rt_int *n_933;
 int ok_2600;
};
struct f_object_array_attr_940fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_935;
 P122 arrt_936;
 rt_gstr v_937;
 P122 *t_938;
 P140 *r_939;
 rt_int n_2601;
 P122 it_2602;
 P140 ct_2603;
 P140 tmp_2604;
 P140 p_2605;
 P140 lo_2606;
 P140 hi_2607;
 rt_int k_2609;
 rt_int k_2614;
};
struct f_type_array_attr_946fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_941;
 P122 arrt_942;
 P178 c_943;
 P122 *t_944;
 P140 *r_945;
 rt_int n_2618;
 P122 it_2619;
 P178 cc_2620;
 rt_int k_2622;
};
struct f_lit_table_949fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_947;
 P140 *r_948;
 P174 l_2626;
 P140 s_2627;
};
struct f_val_rep_955fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_950;
 P122 tt_951;
 P178 c_952;
 P122 *t_953;
 P140 *r_954;
 P122 aty_2630;
 P140 v_2631;
 P140 lt_2632;
 rt_int n_2633;
};
struct f_allocator_960fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_956;
 P122 want_957;
 P122 *t_958;
 P140 *r_959;
 P117 y_2634;
 P122 target_2635;
 P122 vt_2636;
 P140 ct_2637;
 P140 pt_2638;
 P140 cell_2639;
 P140 v_2640;
 P140 x_2641;
};
struct f_aggregate_965fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_961;
 P122 want_962;
 P122 *t_963;
 P140 *r_964;
 P140 b_2642;
};
struct f_captured_968fr { int dummy;
 struct f_greenc_1fr *up;
 P126 b_966;
 P140 *r_967;
 P151 l_2643;
};
struct f_field_at_971fr { int dummy;
 struct f_greenc_1fr *up;
 P122 rt_969;
 rt_int k_970;
 P1905 result_;
 P1905 f_2645;
 rt_int i_2647;
};
struct f_names_field_974fr { int dummy;
 struct f_greenc_1fr *up;
 P174 x_972;
 P1905 f_973;
 int result_;
};
struct f_item_for_979fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_975;
 P122 rt_976;
 rt_int k_977;
 rt_int p_978;
 P174 result_;
 P174 it_2651;
 P174 lab_2652;
 rt_int n_2653;
};
struct f_arm_holds_983fr { int dummy;
 struct f_greenc_1fr *up;
 P174 arm_980;
 rt_int v_981;
 int *res_982;
 P174 l_2656;
 rt_int lo_2657;
 rt_int hi_2658;
 int ok_2659;
};
struct f_record_aggregate_987fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_984;
 P122 rt_985;
 P140 *r_986;
 P174 it_2661;
 P174 lab_2662;
 P174 vn_2663;
 P174 a_2664;
 P1905 f_2665;
 P2030 g_2666;
 rt_int n_2667;
 A2668 done_2669;
 A2668 active_2671;
 A2673 dvs_2674;
 A2676 order_2677;
 rt_int norder_2679;
 rt_int nung_2680;
 rt_int k_2681;
 rt_int d_2682;
 rt_int npos_2683;
 P126 saved_2684;
 P140 ct_2685;
 P140 tmp_2686;
 P140 parts_2687;
 int named_2688;
 int ok_2689;
 int holds_2690;
 rt_int i_2692;
 rt_int p_2701;
 rt_int i_2720;
 rt_int i_2737;
 rt_int i_2748;
};
struct f_field_index_990fr { int dummy;
 struct f_greenc_1fr *up;
 P122 rt_988;
 rt_gstr name_989;
 rt_int result_;
 P1905 f_2754;
 rt_int k_2755;
};
struct f_agg_component_996fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr tmp_991;
 P122 rt_992;
 rt_int k_993;
 P174 v_994;
 rt_int line_995;
 P1905 f_2757;
 P122 vt_2758;
 P140 x_2759;
 P140 y_2760;
 rt_int i_2762;
};
struct f_static_choice_1000fr { int dummy;
 struct f_greenc_1fr *up;
 P174 x_997;
 rt_int *v_998;
 int *ok_999;
};
struct f_array_aggregate_1005fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1001;
 P122 arrt_1002;
 P140 bounds_1003;
 P140 *r_1004;
 P174 it_2767;
 P174 lab_2768;
 P174 others_it_2769;
 rt_int np_2770;
 rt_int nnamed_2771;
 rt_int clo_2772;
 rt_int chi_2773;
 rt_int v1_2774;
 rt_int v2_2775;
 int all_static_2776;
 int ok_2777;
 int ok2_2778;
 int first_choice_2779;
 P122 vt_2780;
 P140 ct_2781;
 P140 et_2782;
 P140 tmp_2783;
 P140 lo_2784;
 P140 hi_2785;
 P140 v_2786;
 P140 x_2787;
 P140 parts_2788;
 P140 fill_2789;
 P140 rowb_2790;
 P140 key_2791;
 P140 khi_2792;
 P126 saved_2793;
};
struct f_element_store_1009fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lv_1006;
 P122 arrt_1007;
 rt_gstr v_1008;
 P140 x_2798;
};
struct f_check_choices_1013fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1010;
 P122 arrt_1011;
 int has_others_1012;
 P174 a_2799;
 P174 b_2800;
 P174 lab_2801;
 P174 lab2_2802;
 rt_int lo1_2803;
 rt_int hi1_2804;
 rt_int lo2_2805;
 rt_int hi2_2806;
 rt_int count_2807;
 int ok_2808;
};
struct f_actual_for_1017fr { int dummy;
 struct f_greenc_1fr *up;
 P174 args_1014;
 P1887 pm_1015;
 P1887 first_1016;
 P174 result_;
 P174 a_2813;
 P1887 p_2814;
};
struct f_gcall_1022fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1018;
 int is_stmt_1019;
 P122 *t_1020;
 P140 *r_1021;
 P174 fn_2817;
 P174 nm_2818;
 P117 y_2819;
 P140 args_2820;
 P140 lv_2821;
 P140 v_2822;
 P140 ct_2823;
 P140 x_2824;
 P174 a_2825;
 P1887 pm_2826;
 P122 lt_2827;
 P122 vt_2828;
 P178 lc_2829;
 int ro_2830;
};
struct f_out_check_1026fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lv_1023;
 P122 t_1024;
 P178 c_1025;
};
struct f_var_path_1029fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1027;
 P140 *r_1028;
 P122 pt_2831;
 P140 v_2832;
 P126 saved_2833;
};
struct f_paths_overlap_1032fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_1030;
 rt_gstr r_1031;
 int result_;
 rt_int i_2837;
 rt_int j_2839;
};
struct f_mentions_1035fr { int dummy;
 struct f_greenc_1fr *up;
 P174 n_1033;
 rt_gstr name_1034;
 int result_;
 P174 p_2861;
};
struct f_mentions_one_1038fr { int dummy;
 struct f_greenc_1fr *up;
 P174 n_1036;
 rt_gstr name_1037;
 int result_;
};
struct f_check_aliasing_1042fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1039;
 P117 y_1040;
 P174 a_1041;
 P174 b_2863;
 P140 p_2864;
 P140 q_2865;
 P174 r_2866;
 P117 v_2867;
};
struct f_gcall_with_1047fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1043;
 P117 y_1044;
 P122 *t_1045;
 P140 *r_1046;
 P140 args_2869;
 P140 lv_2870;
 P140 v_2871;
 P140 x1_2872;
 P140 x2_2873;
 P174 a_2874;
 P1887 pm_2875;
 P122 lt_2876;
 P122 vt_2877;
 P178 lc_2878;
 int ro_2879;
};
struct f_builtin_1054fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1048;
 P174 args_1049;
 rt_int line_1050;
 int is_stmt_1051;
 P122 *t_1052;
 P140 *r_1053;
 P122 aty_2882;
 P122 lt_2883;
 P140 a_2884;
 P140 w_2885;
 P140 lv_2886;
 P178 lc_2887;
 int ro_2888;
};
struct f_lookup_path_1056fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_1055;
 P117 result_;
 P117 y_2889;
 P117 m_2890;
 rt_int i_2894;
};
struct f_is_package_1058fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1057;
 int result_;
 P117 y_2906;
};
struct f_member_of_1062fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_1059;
 rt_gstr name_1060;
 rt_int line_1061;
 P117 result_;
 P117 y_2907;
 P117 m_2908;
};
struct f_inside_package_1064fr { int dummy;
 struct f_greenc_1fr *up;
 P174 p_1063;
 int result_;
 P151 l_2910;
};
struct f_copy_sym_1067fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1065;
 P117 *z_1066;
};
struct f_complete_private_1070fr { int dummy;
 struct f_greenc_1fr *up;
 P122 ph_1068;
 P122 full_1069;
 P140 n_2914;
 P174 p_2915;
};
struct f_package_spec_1072fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1071;
 P117 y_2916;
 P117 m_2917;
 P117 z_2918;
 P174 saved_2919;
 P117 first_private_2920;
};
struct f_hidden_from_1075fr { int dummy;
 struct f_greenc_1fr *up;
 P117 m_1073;
 P117 first_private_1074;
 int result_;
 P117 p_2924;
};
struct f_package_body_1077fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1076;
 P189 saved_labels_2926;
 P117 y_2927;
 P117 m_2928;
 P117 z_2929;
 P174 saved_2930;
};
struct f_use_visible_1079fr { int dummy;
 struct f_greenc_1fr *up;
 P117 old_1078;
 int result_;
};
struct f_use_clause_1081fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1080;
 P174 n_2937;
 P117 y_2938;
 P117 m_2939;
 P117 z_2940;
 P117 old_2941;
 int clash_2942;
};
struct f_usable_over_1083fr { int dummy;
 struct f_greenc_1fr *up;
 P117 old_1082;
 int result_;
};
struct f_same_entity_1086fr { int dummy;
 struct f_greenc_1fr *up;
 P117 a_1084;
 P117 b_1085;
 int result_;
};
struct f_fits_1091fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1087;
 P174 args_1088;
 P122 want_1089;
 int *ok_1090;
 P1887 pm_2947;
 P174 a_2948;
 P122 t_2949;
 P178 c_2950;
 P140 v_2951;
 int ro_2952;
 P126 saved_2953;
 rt_int used_2954;
};
struct f_is_builtin_1093fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_1092;
 int result_;
};
struct f_resolve_overload_1100fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1094;
 P174 args_1095;
 int is_stmt_1096;
 P122 want_1097;
 rt_int line_1098;
 P117 *y_1099;
 P117 z_2959;
 P117 w_2960;
 P117 first_2961;
 P117 found_2962;
 rt_int n_2963;
 int ok_2964;
 int hidden_2965;
 rt_int pass_2967;
};
struct f_same_profile_1103fr { int dummy;
 struct f_greenc_1fr *up;
 P117 a_1101;
 P117 b_1102;
 int result_;
};
struct f_resolve_member_overload_1111fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_1104;
 rt_gstr name_1105;
 P174 args_1106;
 int is_stmt_1107;
 P122 want_1108;
 rt_int line_1109;
 P117 *y_1110;
 P117 pk_2977;
 P117 z_2978;
 P117 found_2979;
 rt_int n_2980;
 int ok_2981;
 rt_int pass_2983;
};
struct f_user_operator_1117fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1112;
 P122 want_1113;
 P122 *t_1114;
 P140 *r_1115;
 int *done_1116;
 P140 op_2988;
 int negate_2989;
 P117 y_2990;
 P174 call_2991;
 P174 fname_2992;
 P174 l_2993;
 P174 rt_2994;
 int ok_2995;
};
struct f_task_p_1119fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_1118;
 P174 x_2998;
 P174 r_2999;
 rt_int line_3000;
};
struct f_entry_p_1121fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_1120;
 P174 x_3001;
};
struct f_accept_p_1123fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_1122;
 P174 x_3002;
};
struct f_delay_p_1125fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_1124;
 P174 x_3003;
};
struct f_designators_1127fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_1126;
 P174 head_3004;
 P174 tail_3005;
 P174 n_3006;
};
struct f_parse_task_statement_1129fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_1128;
 P174 x_3008;
 P174 alt_3009;
 P174 head_3010;
 P174 tail_3011;
 rt_int line_3012;
};
struct f_path_at_1133fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int level_1130;
 rt_gstr field_1131;
 P140 *r_1132;
 rt_int i_3015;
};
struct f_is_task_name_1135fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_1134;
 int result_;
 P117 y_3019;
};
struct f_task_of_1139fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1136;
 P117 *y_1137;
 P174 *ix_1138;
 P174 n_3020;
 P117 a_3021;
};
struct f_own_index_1142fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_1140;
 P140 *r_1141;
 P117 y_3022;
};
struct f_member_1147fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1143;
 rt_gstr arr_1144;
 rt_gstr i_1145;
 P140 *r_1146;
 P140 lo_3023;
 P140 hi_3024;
};
struct f_act_path_1150fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1148;
 P140 *r_1149;
 P140 i_3025;
};
struct f_act_path_i_1154fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1151;
 rt_gstr i_1152;
 P140 *r_1153;
};
struct f_entry_path_1158fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1155;
 rt_gstr i_1156;
 P140 *r_1157;
 P140 own_3026;
};
struct f_declare_slot_1161fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr ctype_name_1159;
 rt_gstr field_1160;
};
struct f_task_decl_1163fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1162;
};
struct f_family_arg_struct_1164fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_family_bounds_1169fr { int dummy;
 struct f_greenc_1fr *up;
 P174 b_1165;
 P117 y_1166;
 P140 x_1167;
 int per_member_1168;
 P140 lo_3028;
 P140 hi_3029;
 P140 v_3030;
 P140 d_3031;
 P140 mlo_3032;
 P140 mhi_3033;
 P122 vt_3034;
 P178 c_3035;
};
struct f_entry_family_slot_1174fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1170;
 rt_gstr base_1171;
 rt_gstr i_1172;
 P140 *r_1173;
 P140 lo_3036;
 P140 hi_3037;
};
struct f_task_spec_1176fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1175;
 int has_procs_3038;
 int saved_defer_3039;
 P140 fields_3040;
 P140 ct_3041;
 P1887 pm_3042;
 P140 fp_3043;
 P140 flo_3044;
 P140 fhi_3045;
 P117 y_3046;
 P117 m_3047;
 P117 z_3048;
 P117 saved_3049;
 P140 d_3050;
 P140 v_3051;
 P140 p_3052;
 P140 p2_3053;
 P122 vt_3054;
 P174 r_3055;
};
struct f_entry_decl_1178fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1177;
 P117 y_3060;
 P174 p_3061;
 P1887 pm_3062;
 P1887 tail_3063;
 P140 fields_3064;
 P140 ct_3065;
 P140 x_3066;
 P140 lo_3067;
 P140 hi_3068;
};
struct f_task_body_1180fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1179;
 P117 y_3072;
 P117 b_3073;
 P117 m_3074;
 P117 z_3075;
 P140 upp_3076;
 P117 saved_3077;
};
struct f_task_awaits_1183fr { int dummy;
 struct f_greenc_1fr *up;
 P174 decls_1181;
 P140 *aw_1182;
 P174 e_3081;
 P117 y_3082;
 P140 p_3083;
};
struct f_task_failure_1185fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_1184;
 P117 y_3085;
 P140 a_3086;
 P140 i_3087;
 P122 it_3088;
};
struct f_entry_sym_1189fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1186;
 P117 *y_1187;
 P174 *ix_1188;
 P174 alias_3089;
 P117 t_3090;
};
struct f_entry_overload_1194fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1190;
 P174 args_1191;
 rt_int line_1192;
 P117 *r_1193;
 P117 z_3091;
 P117 found_3092;
 int ok_3093;
};
struct f_other_call_1199fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1195;
 int is_stmt_1196;
 P122 *t_1197;
 P140 *r_1198;
 P117 y_3095;
 P117 oy_3096;
 P1887 pm_3097;
 P174 a_3098;
 P140 parts_3099;
 P140 v_3100;
 P140 lv_3101;
 P140 ent_3102;
 P140 act_3103;
 P140 i_3104;
 P122 vt_3105;
 P122 lt_3106;
 P178 lc_3107;
 int ro_3108;
 P174 ix_3109;
 P174 fix_3110;
 P174 args_node_3111;
};
struct f_other_attr_1204fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1200;
 P117 y_1201;
 P122 *t_1202;
 P140 *r_1203;
 rt_gstr a_3113;
 P140 p_3114;
};
struct f_member_attr_1208fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1205;
 P122 *t_1206;
 P140 *r_1207;
 P117 y_3115;
 P174 ix_3116;
 P140 i_3117;
 P140 p_3118;
 P122 vt_3119;
};
struct f_task_builtin_1214fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1209;
 P174 args_1210;
 rt_int line_1211;
 P122 *t_1212;
 P140 *r_1213;
 P122 vt_3120;
 P140 v_3121;
};
struct f_accept_entry_1217fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_1215;
 P117 *r_1216;
 P117 z_3122;
 P117 found_3123;
 P117 any_3124;
 int ok_3125;
};
struct f_accept_conforms_1221fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_1218;
 P117 y_1219;
 int *ok_1220;
 P174 f_3129;
 P1887 pm_3130;
 P122 t_3131;
 P178 c_3132;
};
struct f_gen_accept_1223fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_1222;
 P117 y_3134;
 P143 saved_ax_3135;
 P140 ent_3136;
 P140 ep_3137;
 P140 xf_3138;
 P140 x_3139;
 P1887 pm_3140;
 P174 f_3141;
 P117 p_3142;
};
struct f_member_slot_1227fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1224;
 P174 s_1225;
 P140 *ent_1226;
 P122 vt_3144;
 P140 v_3145;
};
struct f_gen_delay_ticks_1230fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1228;
 P140 *r_1229;
 P122 vt_3146;
 P140 v_3147;
};
struct f_gen_select_1232fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_1231;
 P174 alt_3148;
 rt_int n_3149;
 rt_int i_3150;
 int has_delay_3151;
 int has_accept_3152;
 P140 al_3153;
 P140 w_3154;
 P140 g_3155;
 P140 ent_3156;
 P140 ticks_3157;
 P122 vt_3158;
 P117 y_3159;
};
struct f_family_range_1237fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1233;
 P174 ix_1234;
 P140 *lo_1235;
 P140 *hi_1236;
 P122 vt_3163;
};
struct f_task_statement_gen_1239fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_1238;
 P174 n_3164;
 P174 ix_3165;
 P117 y_3166;
 P140 a_3167;
 P140 d_3168;
 P140 l_3169;
 P140 ticks_3170;
 P140 lo_3171;
 P140 hi_3172;
};
struct f_root_name_1241fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1240;
 P174 result_;
};
struct f_check_pure_target_1244fr { int dummy;
 struct f_greenc_1fr *up;
 P174 target_1242;
 rt_int line_1243;
 P174 n_3176;
 P117 y_3177;
};
struct f_assigns_nonlocal_1247fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_1245;
 rt_gstr name_1246;
 int result_;
};
struct f_declares_1250fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_1248;
 rt_gstr name_1249;
 int result_;
 P174 p_3178;
 P174 e_3179;
};
struct f_scan_handlers_1254fr { int dummy;
 struct f_greenc_1fr *up;
 P174 h_1251;
 P174 d_1252;
 rt_gstr name_1253;
 int result_;
 P174 p_3182;
};
struct f_scan_assigns_1258fr { int dummy;
 struct f_greenc_1fr *up;
 P174 stmts_1255;
 P174 d_1256;
 rt_gstr name_1257;
 int result_;
 P174 s_3184;
 P174 a_3185;
 P174 r_3186;
};
struct f_check_call_rules_1261fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1259;
 P117 y_1260;
 P117 z_3190;
 P117 s_3191;
};
struct f_generic_p_1263fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_1262;
 P174 x_3193;
 P174 p_3194;
 P174 head_3195;
 P174 tail_3196;
 P174 names_3197;
 P174 st_3198;
 P174 def_3199;
 P174 sub_3200;
 P140 def_name_text_3201;
 int more_3202;
};
struct f_instantiation_1266fr { int dummy;
 struct f_greenc_1fr *up;
 P174 x_1264;
 P174 *res_1265;
 P174 i_3205;
 P174 head_3206;
 P174 tail_3207;
 P174 a_3208;
 P140 formal_3209;
 rt_int mark_3210;
 int more_3211;
};
struct f_generic_decl_1268fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1267;
 P117 y_3213;
};
struct f_is_generic_name_1270fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_1269;
 int result_;
 P117 y_3214;
};
struct f_attach_generic_body_1272fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1271;
 P117 y_3215;
};
struct f_restore_generic_context_1275fr { int dummy;
 struct f_greenc_1fr *up;
 P174 body_node_1273;
 rt_int line_1274;
 P146 ctx_3218;
 P117 m_3219;
 P117 z_3220;
 int seen_3221;
};
struct f_gactual_1279fr { int dummy;
 struct f_greenc_1fr *up;
 P174 args_1276;
 rt_int nth_1277;
 rt_gstr name_1278;
 P174 result_;
 P174 a_3226;
 rt_int i_3227;
};
struct f_copy_node_1283fr { int dummy;
 struct f_greenc_1fr *up;
 P174 n_1280;
 P140 name_1281;
 P174 *r_1282;
};
struct f_matches_formal_1287fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1284;
 rt_gstr name_1285;
 P117 fs_1286;
 int result_;
};
struct f_instantiate_1289fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1288;
 P117 g_3229;
 P174 gd_3230;
 P174 pat_3231;
 P174 f_3232;
 P174 a_3233;
 P174 cn_3234;
 P117 y_3235;
 P117 z_3236;
 P117 fs_3237;
 rt_int nth_3238;
 P122 t_3239;
 P122 vt_3240;
 P178 c_3241;
 P140 v_3242;
 P140 acc_3243;
 P140 x_3244;
 int ok_3245;
};
struct f_predef_type_1294fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1290;
 P122 t_1291;
 rt_gstr lo_1292;
 rt_gstr hi_1293;
 P117 y_3249;
};
struct f_predef_const_1298fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1295;
 P122 t_1296;
 rt_gstr code_text_1297;
 P117 y_3256;
};
struct f_predef_exc_1300fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1299;
 P117 y_3257;
};
struct f_predef_lit_1304fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1301;
 P122 t_1302;
 rt_int v_1303;
 P117 y_3258;
};
struct f_predefine_1305fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_3259;
 rt_gstr control_3260;
 rt_int start_3261;
 rt_int code_no_3262;
 rt_int i_3265;
 rt_int i_3273;
};
struct f_lib_open_1308fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr key_1306;
 rt_int *length_1307;
};
struct f_lib_store_1311fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr key_1309;
 rt_gstr contents_1310;
};
struct f_unit_key_1314fr { int dummy;
 struct f_greenc_1fr *up;
 P174 u_1312;
 P140 *r_1313;
 rt_int k_3277;
};
struct f_lib_enabled_1316fr { int dummy;
 struct f_greenc_1fr *up;
 int *yes_1315;
};
struct f_store_units_1317fr { int dummy;
 struct f_greenc_1fr *up;
 P204 s_3285;
 P140 k_3286;
 int yes_3287;
};
struct f_store_span_1320fr { int dummy;
 struct f_greenc_1fr *up;
 P204 s_1318;
 rt_gstr key_1319;
 rt_int n_3289;
 P140 head_3290;
 rt_int l_3298;
 rt_gstr t_3305;
 rt_int k_3307;
 rt_int l_3311;
};
struct f_lib_load_1323fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr key_1321;
 P174 *r_1322;
 rt_int n_3322;
 rt_int saved_line_3323;
 rt_int saved_pos_3324;
 rt_int from_3325;
};
struct f_defined_unit_1326fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1324;
 P174 before_1325;
 int result_;
 P174 u_3326;
};
struct f_library_units_1327fr { int dummy;
 struct f_greenc_1fr *up;
 P174 p_3329;
 P174 prev_3330;
 P174 l_3331;
 P174 ltail_3332;
 rt_int i_3333;
 rt_int j_3334;
 P140 n_3335;
 P140 f_3336;
 int changed_3337;
};
struct f_load_unit_1330fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1328;
 P174 *r_1329;
 P174 s_3350;
 P174 b_3351;
 P174 t_3352;
};
struct f_prelude_1331fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_used_units_1334fr { int dummy;
 struct f_greenc_1fr *up;
 P174 u_1332;
 P140 *r_1333;
 P174 p_3354;
 P174 main_3355;
 int changed_3356;
};
struct f_add_names_1338fr { int dummy;
 struct f_greenc_1fr *up;
 P140 *r_1335;
 rt_gstr list_1336;
 int *changed_1337;
 rt_int i_3368;
 rt_int j_3370;
};
struct f_translate_1340fr { int dummy;
 struct f_greenc_1fr *up;
 P174 u_1339;
 P174 p_3381;
 P140 used_3382;
 P117 y_3383;
};
struct f_last_unit_1342fr { int dummy;
 struct f_greenc_1fr *up;
 P174 p_1341;
 int result_;
 P174 q_3390;
};
struct f_print_program_1343fr { int dummy;
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
 P117 cur_task_210;
 rt_int accept_depth_211;
 int famarg_done_212;
 P174 fam_ix_213;
 P174 call_task_ix_214;
 int saw_interface_215;
 int defer_entry_structs_216;
 P126 out_awaits_217;
 P178 no_cons_218;
 P174 units_219;
 P174 prelude_units_220;
 P151 pkg_stack_221;
 P174 cur_pkg_222;
 P140 prefix_hint_223;
 P122 call_want_224;
 P117 pure_sym_225;
 rt_int pure_depth_226;
 int vrp_ok_227;
 int in_lv_path_228;
 int last_deref_229;
 P140 main_name_230;
 P140 conf_system_231;
 rt_int conf_storage_unit_232;
 rt_int conf_memory_size_233;
 P140 conf_optimize_234;
};
static void as_A2676(A2676 *d, A2676 s);
static A2676 cp_A2676(A2676 s);
static int eq_A2676(A2676 a, A2676 b);
static A2676 cat_A2676(A2676 a, A2676 b);
static A2676 one_A2676(rt_int e);
static void as_A2673(A2673 *d, A2673 s);
static A2673 cp_A2673(A2673 s);
static int eq_A2673(A2673 a, A2673 b);
static A2673 cat_A2673(A2673 a, A2673 b);
static A2673 one_A2673(rt_int e);
static void as_A2668(A2668 *d, A2668 s);
static A2668 cp_A2668(A2668 s);
static int eq_A2668(A2668 a, A2668 b);
static A2668 cat_A2668(A2668 a, A2668 b);
static A2668 one_A2668(int e);
static A2668 and_A2668(A2668 a, A2668 b);
static A2668 or_A2668(A2668 a, A2668 b);
static A2668 xor_A2668(A2668 a, A2668 b);
static A2668 not_A2668(A2668 a);
static void as_A2343(A2343 *d, A2343 s);
static A2343 cp_A2343(A2343 s);
static int eq_A2343(A2343 a, A2343 b);
static A2343 cat_A2343(A2343 a, A2343 b);
static A2343 one_A2343(rt_int e);
static void as_R2031(R2031 *d, R2031 s);
static R2031 cp_R2031(R2031 s);
static int eq_R2031(R2031 a, R2031 b);
static void as_R1910(R1910 *d, R1910 s);
static R1910 cp_R1910(R1910 s);
static int eq_R1910(R1910 a, R1910 b);
static void as_R1906(R1906 *d, R1906 s);
static R1906 cp_R1906(R1906 s);
static int eq_R1906(R1906 a, R1906 b);
static void as_R1888(R1888 *d, R1888 s);
static R1888 cp_R1888(R1888 s);
static int eq_R1888(R1888 a, R1888 b);
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
static P140 f_mk_236(struct f_greenc_1fr *up_, rt_gstr s_235);
static void f_new_name_239(struct f_greenc_1fr *up_, rt_gstr base_237, P140 *res_238);
static int f_is_letter_241(struct f_greenc_1fr *up_, int c_240);
static int f_is_digit_243(struct f_greenc_1fr *up_, int c_242);
static int f_upper_245(struct f_greenc_1fr *up_, int c_244);
static rt_gstr f_lower_s_247(struct f_greenc_1fr *up_, rt_gstr s_246);
static rt_gstr f_upper_s_249(struct f_greenc_1fr *up_, rt_gstr s_248);
static int f_is_operator_251(struct f_greenc_1fr *up_, rt_gstr s_250);
static rt_gstr f_c_field_253(struct f_greenc_1fr *up_, rt_gstr s_252);
static rt_gstr f_q_254(struct f_greenc_1fr *up_);
static void f_fail_257(struct f_greenc_1fr *up_, rt_int line_255, rt_gstr msg_256);
static P126 f_new_buffer_258(struct f_greenc_1fr *up_);
static void f_put_to_261(struct f_greenc_1fr *up_, P126 b_259, rt_gstr s_260);
static void f_emit_263(struct f_greenc_1fr *up_, rt_gstr s_262);
static void f_print_buffer_265(struct f_greenc_1fr *up_, P126 b_264);
static void f_splice_268(struct f_greenc_1fr *up_, P126 a_266, P126 b_267);
static int f_is_reserved_270(struct f_greenc_1fr *up_, rt_gstr w_269);
static void f_add_token_274(struct f_greenc_1fr *up_, rt_int kind_271, rt_gstr s_272, rt_int ival_273);
static rt_int f_digit_value_276(struct f_greenc_1fr *up_, int c_275);
static rt_int f_digit_in_279(struct f_greenc_1fr *up_, int c_277, rt_int base_278);
static void f_accumulate_283(struct f_greenc_1fr *up_, rt_int *v_280, rt_int base_281, rt_int d_282);
static void f_lex_line_285(struct f_greenc_1fr *up_, rt_gstr line_284);
static int f_exponent_ahead_288(struct f_greenc_1fr *up_, rt_gstr line_286, rt_int j_287);
static void f_exponent_293(struct f_greenc_1fr *up_, rt_gstr line_289, rt_int *j_290, rt_gstr *buf_291, rt_int *bl_292);
static void f_include_open_296(struct f_greenc_1fr *up_, rt_gstr name_294, rt_int *length_295);
static void f_include_char_299(struct f_greenc_1fr *up_, rt_int i_297, int *c_298);
static void f_check_include_300(struct f_greenc_1fr *up_);
static void f_include_text_302(struct f_greenc_1fr *up_, rt_int n_301);
static void f_include_line_306(struct f_greenc_1fr *up_, rt_gstr t_303, rt_int from_304, rt_int to_305);
static void f_read_source_307(struct f_greenc_1fr *up_);
static P174 f_nn_310(struct f_greenc_1fr *up_, rt_int kind_308, rt_int line_309);
static void f_append_314(struct f_greenc_1fr *up_, P174 *head_311, P174 *tail_312, P174 x_313);
static rt_int f_list_len_316(struct f_greenc_1fr *up_, P174 l_315);
static rt_int f_cur_line_317(struct f_greenc_1fr *up_);
static int f_at_kw_319(struct f_greenc_1fr *up_, rt_gstr w_318);
static int f_at_op_321(struct f_greenc_1fr *up_, rt_gstr w_320);
static int f_at_kind_323(struct f_greenc_1fr *up_, rt_int k_322);
static rt_int f_kind_at_325(struct f_greenc_1fr *up_, rt_int k_324);
static rt_gstr f_text_at_327(struct f_greenc_1fr *up_, rt_int k_326);
static void f_perror_329(struct f_greenc_1fr *up_, rt_gstr msg_328);
static void f_skip_330(struct f_greenc_1fr *up_);
static void f_expect_kw_332(struct f_greenc_1fr *up_, rt_gstr w_331);
static void f_expect_op_334(struct f_greenc_1fr *up_, rt_gstr w_333);
static void f_expect_id_336(struct f_greenc_1fr *up_, P140 *res_335);
static void f_name_node_338(struct f_greenc_1fr *up_, P174 *res_337);
static void f_id_list_340(struct f_greenc_1fr *up_, P174 *res_339);
static P174 f_binop_345(struct f_greenc_1fr *up_, P140 op_341, P174 l_342, P174 r_343, rt_int line_344);
static void f_expr_347(struct f_greenc_1fr *up_, P174 *res_346);
static int f_is_rel_349(struct f_greenc_1fr *up_, rt_gstr s_348);
static void f_relation_351(struct f_greenc_1fr *up_, P174 *res_350);
static rt_gstr f_path_of_353(struct f_greenc_1fr *up_, P174 e_352);
static void f_simple_expr_355(struct f_greenc_1fr *up_, P174 *res_354);
static void f_term_357(struct f_greenc_1fr *up_, P174 *res_356);
static void f_factor_359(struct f_greenc_1fr *up_, P174 *res_358);
static void f_primary_361(struct f_greenc_1fr *up_, P174 *res_360);
static void f_agg_or_paren_363(struct f_greenc_1fr *up_, P174 *res_362);
static int f_choice_token_365(struct f_greenc_1fr *up_, P110 t_364);
static int f_aggregate_ahead_366(struct f_greenc_1fr *up_);
static void f_name_p_368(struct f_greenc_1fr *up_, P174 *res_367);
static void f_component_list_370(struct f_greenc_1fr *up_, P174 *res_369);
static void f_discrete_range_p_372(struct f_greenc_1fr *up_, P174 *res_371);
static void f_subtype_ind_374(struct f_greenc_1fr *up_, P174 *res_373);
static void f_type_spec_376(struct f_greenc_1fr *up_, P174 *res_375);
static void f_type_def_378(struct f_greenc_1fr *up_, P174 *res_377);
static void f_pragma_p_380(struct f_greenc_1fr *up_, P174 *res_379);
static void f_check_pragma_382(struct f_greenc_1fr *up_, P174 x_381);
static void f_visibility_p_384(struct f_greenc_1fr *up_, P140 *res_383);
static void f_unit_p_386(struct f_greenc_1fr *up_, P174 *res_385);
static void f_skip_representation_387(struct f_greenc_1fr *up_);
static void f_decl_part_389(struct f_greenc_1fr *up_, P174 *res_388);
static void f_object_decl_391(struct f_greenc_1fr *up_, P174 *res_390);
static void f_type_decl_393(struct f_greenc_1fr *up_, P174 *res_392);
static void f_formal_part_395(struct f_greenc_1fr *up_, P174 *res_394);
static void f_designator_397(struct f_greenc_1fr *up_, P140 *res_396);
static void f_subprogram_399(struct f_greenc_1fr *up_, P174 *res_398);
static void f_body_part_401(struct f_greenc_1fr *up_, P174 x_400);
static void f_parse_handlers_403(struct f_greenc_1fr *up_, P174 *res_402);
static void f_package_p_405(struct f_greenc_1fr *up_, P174 *res_404);
static int f_at_statements_end_406(struct f_greenc_1fr *up_);
static void f_statements_408(struct f_greenc_1fr *up_, P174 *res_407);
static void f_statement_410(struct f_greenc_1fr *up_, P174 *res_409);
static void f_labelled_statement_413(struct f_greenc_1fr *up_, P140 label_411, P174 *res_412);
static void f_task_statement_415(struct f_greenc_1fr *up_, P174 *res_414);
static void f_if_stmt_417(struct f_greenc_1fr *up_, P174 *res_416);
static void f_case_stmt_419(struct f_greenc_1fr *up_, P174 *res_418);
static void f_loop_stmt_421(struct f_greenc_1fr *up_, P174 *res_420);
static void f_compilation_423(struct f_greenc_1fr *up_, P174 *res_422);
static rt_int f_hash_425(struct f_greenc_1fr *up_, rt_gstr s_424);
static int f_listed_428(struct f_greenc_1fr *up_, P140 list_426, rt_gstr name_427);
static int f_visible_sym_430(struct f_greenc_1fr *up_, P117 y_429);
static P117 f_lookup_432(struct f_greenc_1fr *up_, rt_gstr name_431);
static int f_same_task_435(struct f_greenc_1fr *up_, P117 a_433, P117 b_434);
static P117 f_lookup_entry_438(struct f_greenc_1fr *up_, rt_gstr name_436, P117 owner_437);
static P117 f_lookup_at_441(struct f_greenc_1fr *up_, rt_gstr name_439, rt_int d_440);
static rt_int f_enclosing_depth_443(struct f_greenc_1fr *up_, rt_gstr name_442);
static void f_push_unit_445(struct f_greenc_1fr *up_, P140 name_444);
static P117 f_lookup_decl_447(struct f_greenc_1fr *up_, P174 d_446);
static int f_overloadable_449(struct f_greenc_1fr *up_, P117 y_448);
static int f_same_452(struct f_greenc_1fr *up_, P122 a_450, P122 b_451);
static P122 f_root_454(struct f_greenc_1fr *up_, P122 t_453);
static int f_derived_from_457(struct f_greenc_1fr *up_, P122 a_455, P122 b_456);
static int f_is_numeric_459(struct f_greenc_1fr *up_, P122 t_458);
static int f_is_discrete_461(struct f_greenc_1fr *up_, P122 t_460);
static int f_same_types_464(struct f_greenc_1fr *up_, P1887 a_462, P1887 b_463);
static int f_same_signature_467(struct f_greenc_1fr *up_, P1887 a_465, P1887 b_466);
static int f_distinct_overload_470(struct f_greenc_1fr *up_, P117 y_468, P117 z_469);
static void f_define_473(struct f_greenc_1fr *up_, P117 y_471, rt_int line_472);
static void f_open_scope_474(struct f_greenc_1fr *up_);
static void f_close_scope_475(struct f_greenc_1fr *up_);
static P117 f_new_sym_478(struct f_greenc_1fr *up_, rt_int kind_476, P140 name_477);
static P122 f_new_typ_480(struct f_greenc_1fr *up_, rt_int kind_479);
static P178 f_new_cons_481(struct f_greenc_1fr *up_);
static int f_bounded_483(struct f_greenc_1fr *up_, P178 c_482);
static int f_bounded_hi_485(struct f_greenc_1fr *up_, P178 c_484);
static int f_static_bounds_487(struct f_greenc_1fr *up_, P178 c_486);
static int f_discriminated_489(struct f_greenc_1fr *up_, P178 c_488);
static rt_gstr f_kind_name_491(struct f_greenc_1fr *up_, P122 t_490);
static void f_check_type_495(struct f_greenc_1fr *up_, P122 got_492, P122 want_493, rt_int line_494);
static rt_int f_field_count_497(struct f_greenc_1fr *up_, P122 t_496);
static void f_ctype_500(struct f_greenc_1fr *up_, P122 t_498, P140 *r_499);
static void f_field_decls_503(struct f_greenc_1fr *up_, P122 t_501, P140 *r_502);
static void f_declare_ctype_505(struct f_greenc_1fr *up_, P122 t_504);
static rt_int f_lit_index_508(struct f_greenc_1fr *up_, P174 lits_506, rt_gstr name_507);
static void f_manifest_512(struct f_greenc_1fr *up_, P174 e_509, rt_int *v_510, int *ok_511);
static void f_resolve_516(struct f_greenc_1fr *up_, P174 st_513, P122 *t_514, P178 *c_515);
static void f_constraint_list_520(struct f_greenc_1fr *up_, P174 st_517, P122 t_518, P178 c_519);
static void f_discriminant_constraint_524(struct f_greenc_1fr *up_, P174 st_521, P122 t_522, P178 c_523);
static void f_discrete_bounds_530(struct f_greenc_1fr *up_, P174 r_525, P122 want_526, P122 *t_527, P140 *lo_528, P140 *hi_529);
static void f_range_of_534(struct f_greenc_1fr *up_, P174 r_531, P122 t_532, P178 c_533);
static void f_fresh_typ_538(struct f_greenc_1fr *up_, rt_int kind_535, P140 name_536, P122 *t_537);
static void f_inherit_542(struct f_greenc_1fr *up_, P122 parent_539, P122 t_540, rt_int line_541);
static void f_derive_literals_545(struct f_greenc_1fr *up_, P122 t_543, rt_int line_544);
static void f_type_definition_550(struct f_greenc_1fr *up_, P174 d_546, P140 name_547, P122 *t_548, P178 *c_549);
static void f_array_type_557(struct f_greenc_1fr *up_, P174 idx_551, P174 comp_552, P140 name_553, rt_int line_554, P122 *t_555, P178 *c_556);
static void f_static_range_561(struct f_greenc_1fr *up_, P174 l_558, P174 h_559, P178 c_560);
static void f_component_place_567(struct f_greenc_1fr *up_, P122 rt_562, P1905 f_563, rt_gstr a_564, rt_gstr ct_565, P140 *r_566);
static rt_gstr f_no_value_569(struct f_greenc_1fr *up_, P122 t_568);
static int f_restricted_here_571(struct f_greenc_1fr *up_, P122 t_570);
static void f_elem_ctype_574(struct f_greenc_1fr *up_, P122 t_572, P140 *r_573);
static void f_first_index_577(struct f_greenc_1fr *up_, P122 t_575, P140 *r_576);
static int f_is_string_579(struct f_greenc_1fr *up_, P122 t_578);
static rt_gstr f_subst_582(struct f_greenc_1fr *up_, rt_gstr s_580, rt_gstr r_581);
static int f_mentions_record_584(struct f_greenc_1fr *up_, P140 s_583);
static void f_subst_cons_588(struct f_greenc_1fr *up_, P178 c_585, rt_gstr r_586, P178 *res_587);
static void f_remove_sym_590(struct f_greenc_1fr *up_, P117 y_589);
static void f_record_components_595(struct f_greenc_1fr *up_, P174 list_591, P122 t_592, P2030 g_593, rt_int line_594);
static void f_guard_cond_599(struct f_greenc_1fr *up_, P2030 g_596, P122 t_597, P140 *r_598);
static void f_arm_test_604(struct f_greenc_1fr *up_, P174 arm_600, P140 dname_601, rt_gstr d_602, P140 *x_603);
static void f_derived_type_609(struct f_greenc_1fr *up_, P174 d_605, P140 name_606, P122 *t_607, P178 *c_608);
static void f_real_type_614(struct f_greenc_1fr *up_, P174 d_610, P140 name_611, P122 *t_612, P178 *c_613);
static void f_finish_ptr_616(struct f_greenc_1fr *up_, P122 t_615);
static void f_init_storage_620(struct f_greenc_1fr *up_, rt_gstr lval_617, P122 t_618, P178 c_619);
static int f_composite_622(struct f_greenc_1fr *up_, P122 t_621);
static void f_assign_code_628(struct f_greenc_1fr *up_, rt_gstr lval_623, P122 t_624, rt_gstr v_625, P178 c_626, P140 *r_627);
static void f_copy_code_632(struct f_greenc_1fr *up_, P122 t_629, rt_gstr v_630, P140 *r_631);
static void f_eq_code_637(struct f_greenc_1fr *up_, P122 t_633, rt_gstr a_634, rt_gstr b_635, P140 *r_636);
static int f_seen_name_640(struct f_greenc_1fr *up_, P151 l_638, rt_gstr s_639);
static void f_emit_helpers_641(struct f_greenc_1fr *up_);
static void f_helper_bodies_643(struct f_greenc_1fr *up_, P122 t_642);
static void f_storage_647(struct f_greenc_1fr *up_, rt_gstr name_644, P122 t_645, P140 *access_code_646);
static void f_bind_650(struct f_greenc_1fr *up_, P117 y_648, P140 access_code_649);
static void f_declare_subprograms_652(struct f_greenc_1fr *up_, P174 from_651);
static void f_declare_one_654(struct f_greenc_1fr *up_, P174 e_653);
static void f_elaborate_defaults_656(struct f_greenc_1fr *up_, P117 y_655);
static void f_build_subprogram_659(struct f_greenc_1fr *up_, P174 d_657, P117 *y_658);
static void f_decl_elements_661(struct f_greenc_1fr *up_, P174 decls_660);
static void f_decl_element_663(struct f_greenc_1fr *up_, P174 e_662);
static void f_decl_element_1_665(struct f_greenc_1fr *up_, P174 e_664);
static void f_pragma_decl_667(struct f_greenc_1fr *up_, P174 e_666);
static void f_resolve_object_type_671(struct f_greenc_1fr *up_, P174 st_668, P122 *t_669, P178 *c_670);
static void f_find_subunit_674(struct f_greenc_1fr *up_, P174 e_672, P174 *r_673);
static void f_stub_676(struct f_greenc_1fr *up_, P174 e_675);
static void f_rename_subprogram_678(struct f_greenc_1fr *up_, P174 e_677);
static void f_rename_module_681(struct f_greenc_1fr *up_, P174 e_679, P174 target_680);
static void f_push_barrier_684(struct f_greenc_1fr *up_, P174 e_682, rt_int limit_683);
static void f_other_decl_686(struct f_greenc_1fr *up_, P174 e_685);
static void f_scan_labels_689(struct f_greenc_1fr *up_, P174 stmts_687, rt_gstr path_688);
static void f_scan_guarded_693(struct f_greenc_1fr *up_, P174 stmts_690, P174 hs_691, rt_gstr path_692);
static rt_int f_count_g_695(struct f_greenc_1fr *up_, rt_gstr p_694);
static void f_label_body_698(struct f_greenc_1fr *up_, P174 stmts_696, P174 hs_697);
static void f_gen_label_701(struct f_greenc_1fr *up_, P174 s_699, int goto_it_700);
static int f_is_foreign_703(struct f_greenc_1fr *up_, P174 d_702);
static void f_subprogram_body_706(struct f_greenc_1fr *up_, P174 d_704, P117 y_705);
static void f_gen_statements_708(struct f_greenc_1fr *up_, P174 stmts_707);
static void f_pop_frames_710(struct f_greenc_1fr *up_, rt_int upto_709);
static void f_push_cleanup_712(struct f_greenc_1fr *up_, rt_gstr s_711);
static void f_pop_cleanup_713(struct f_greenc_1fr *up_);
static void f_guarded_718(struct f_greenc_1fr *up_, P174 decls_714, P174 stmts_715, P174 hs_716, rt_int line_717);
static void f_exc_id_722(struct f_greenc_1fr *up_, rt_gstr name_719, rt_int line_720, P140 *r_721);
static void f_gen_statement_724(struct f_greenc_1fr *up_, P174 s_723);
static void f_slice_assign_726(struct f_greenc_1fr *up_, P174 s_725);
static void f_gen_call_728(struct f_greenc_1fr *up_, P174 s_727);
static void f_gen_if_730(struct f_greenc_1fr *up_, P174 s_729);
static void f_gen_case_732(struct f_greenc_1fr *up_, P174 s_731);
static void f_selector_range_738(struct f_greenc_1fr *up_, P174 e_733, P122 t_734, rt_int *lo_735, rt_int *hi_736, int *ok_737);
static void f_push_exit_742(struct f_greenc_1fr *up_, P140 match_739, int is_loop_740, P140 *label_741);
static void f_gen_loop_744(struct f_greenc_1fr *up_, P174 s_743);
static void f_gen_block_746(struct f_greenc_1fr *up_, P174 s_745);
static int f_exit_matches_749(struct f_greenc_1fr *up_, P174 s_747, P143 x_748);
static void f_gen_exit_751(struct f_greenc_1fr *up_, P174 s_750);
static void f_gen_return_753(struct f_greenc_1fr *up_, P174 s_752);
static void f_access_of_756(struct f_greenc_1fr *up_, P117 y_754, P140 *r_755);
static void f_link_to_759(struct f_greenc_1fr *up_, rt_int l_757, P140 *r_758);
static rt_gstr f_c_ident_761(struct f_greenc_1fr *up_, rt_gstr s_760);
static void f_deref_765(struct f_greenc_1fr *up_, rt_gstr base_762, P122 t_763, P140 *r_764);
static int f_is_object_767(struct f_greenc_1fr *up_, P174 e_766);
static int f_is_const_access_769(struct f_greenc_1fr *up_, P174 e_768);
static void f_lvalue_775(struct f_greenc_1fr *up_, P174 e_770, P140 *code_out_771, P122 *t_772, P178 *c_773, int *ro_774);
static void f_select_on_784(struct f_greenc_1fr *up_, rt_gstr base_776, P122 bt_777, P174 e_778, int *ro_779, int lv_780, P140 *code_out_781, P122 *t_782, P178 *c_783);
static void f_index_on_793(struct f_greenc_1fr *up_, rt_gstr base_785, P122 bt_786, P174 e_787, int *ro_788, int lv_789, P140 *code_out_790, P122 *t_791, P178 *c_792);
static int f_type_attribute_796(struct f_greenc_1fr *up_, P122 t_794, rt_gstr name_795);
static int f_is_type_name_798(struct f_greenc_1fr *up_, rt_gstr n_797);
static int f_is_char_lit_800(struct f_greenc_1fr *up_, P174 e_799);
static int f_is_enum_lit_802(struct f_greenc_1fr *up_, P174 e_801);
static rt_gstr f_c_string_804(struct f_greenc_1fr *up_, rt_gstr s_803);
static int f_is_literal_806(struct f_greenc_1fr *up_, P174 e_805);
static void f_range_bounds_814(struct f_greenc_1fr *up_, P174 l_807, P174 h_808, P122 want_809, rt_int line_810, P122 *t_811, P140 *lo_812, P140 *hi_813);
static void f_gexpr_819(struct f_greenc_1fr *up_, P174 e_815, P122 want_816, P122 *t_817, P140 *r_818);
static void f_gexpr_1_824(struct f_greenc_1fr *up_, P174 e_820, P122 want_821, P122 *t_822, P140 *r_823);
static void f_string_aggregate_829(struct f_greenc_1fr *up_, P174 e_825, P122 want_826, P122 *t_827, P140 *r_828);
static void f_char_literal_834(struct f_greenc_1fr *up_, P174 e_830, P122 want_831, P122 *t_832, P140 *r_833);
static void f_expanded_837(struct f_greenc_1fr *up_, P174 e_835, P174 *r_836);
static void f_gen_name_842(struct f_greenc_1fr *up_, P174 e_838, P122 want_839, P122 *t_840, P140 *r_841);
static void f_gen_unop_847(struct f_greenc_1fr *up_, P174 e_843, P122 want_844, P122 *t_845, P140 *r_846);
static int f_short_int_849(struct f_greenc_1fr *up_, P122 t_848);
static rt_gstr f_float_kind_851(struct f_greenc_1fr *up_, P122 t_850);
static void f_membership_854(struct f_greenc_1fr *up_, P174 e_852, P140 *r_853);
static void f_condition_859(struct f_greenc_1fr *up_, P174 e_855, P122 want_856, P122 *t_857, P140 *r_858);
static void f_catenation_864(struct f_greenc_1fr *up_, P174 e_860, P122 want_861, P122 *t_862, P140 *r_863);
static void f_cat_operand_869(struct f_greenc_1fr *up_, P174 x_865, P122 arrt_866, rt_int line_867, P140 *r_868);
static void f_arithmetic_874(struct f_greenc_1fr *up_, P174 e_870, P122 want_871, P122 *t_872, P140 *r_873);
static void f_fixed_operation_882(struct f_greenc_1fr *up_, P174 e_875, P122 ta_876, P122 tb_877, rt_gstr a_878, rt_gstr b_879, P122 *t_880, P140 *r_881);
static void f_gen_binop_887(struct f_greenc_1fr *up_, P174 e_883, P122 want_884, P122 *t_885, P140 *r_886);
static void f_conversion_892(struct f_greenc_1fr *up_, P174 e_888, P117 y_889, P122 *t_890, P140 *r_891);
static void f_constrain_896(struct f_greenc_1fr *up_, P117 y_893, P122 t_894, P140 *r_895);
static void f_array_conversion_903(struct f_greenc_1fr *up_, P174 e_897, P122 t_898, P122 aty_899, P178 c_900, rt_gstr a_901, P140 *r_902);
static void f_gen_attr_908(struct f_greenc_1fr *up_, P174 e_904, P122 want_905, P122 *t_906, P140 *r_907);
static void f_type_bits_912(struct f_greenc_1fr *up_, P122 t_909, P178 c_910, P140 *r_911);
static void f_object_bits_916(struct f_greenc_1fr *up_, P122 t_913, rt_gstr v_914, P140 *r_915);
static void f_numeric_attr_922(struct f_greenc_1fr *up_, P174 e_917, P122 tt_918, P178 c_919, P122 *t_920, P140 *r_921);
static void f_component_attr_926(struct f_greenc_1fr *up_, P174 e_923, P122 *t_924, P140 *r_925);
static void f_config_attr_930(struct f_greenc_1fr *up_, P174 e_927, P122 *t_928, P140 *r_929);
static void f_attr_dim_934(struct f_greenc_1fr *up_, P174 e_931, P122 arrt_932, rt_int *n_933);
static void f_object_array_attr_940(struct f_greenc_1fr *up_, P174 e_935, P122 arrt_936, rt_gstr v_937, P122 *t_938, P140 *r_939);
static void f_type_array_attr_946(struct f_greenc_1fr *up_, P174 e_941, P122 arrt_942, P178 c_943, P122 *t_944, P140 *r_945);
static void f_lit_table_949(struct f_greenc_1fr *up_, P122 t_947, P140 *r_948);
static void f_val_rep_955(struct f_greenc_1fr *up_, P174 e_950, P122 tt_951, P178 c_952, P122 *t_953, P140 *r_954);
static void f_allocator_960(struct f_greenc_1fr *up_, P174 e_956, P122 want_957, P122 *t_958, P140 *r_959);
static void f_aggregate_965(struct f_greenc_1fr *up_, P174 e_961, P122 want_962, P122 *t_963, P140 *r_964);
static void f_captured_968(struct f_greenc_1fr *up_, P126 b_966, P140 *r_967);
static P1905 f_field_at_971(struct f_greenc_1fr *up_, P122 rt_969, rt_int k_970);
static int f_names_field_974(struct f_greenc_1fr *up_, P174 x_972, P1905 f_973);
static P174 f_item_for_979(struct f_greenc_1fr *up_, P174 e_975, P122 rt_976, rt_int k_977, rt_int p_978);
static void f_arm_holds_983(struct f_greenc_1fr *up_, P174 arm_980, rt_int v_981, int *res_982);
static void f_record_aggregate_987(struct f_greenc_1fr *up_, P174 e_984, P122 rt_985, P140 *r_986);
static rt_int f_field_index_990(struct f_greenc_1fr *up_, P122 rt_988, rt_gstr name_989);
static void f_agg_component_996(struct f_greenc_1fr *up_, rt_gstr tmp_991, P122 rt_992, rt_int k_993, P174 v_994, rt_int line_995);
static void f_static_choice_1000(struct f_greenc_1fr *up_, P174 x_997, rt_int *v_998, int *ok_999);
static void f_array_aggregate_1005(struct f_greenc_1fr *up_, P174 e_1001, P122 arrt_1002, P140 bounds_1003, P140 *r_1004);
static void f_element_store_1009(struct f_greenc_1fr *up_, rt_gstr lv_1006, P122 arrt_1007, rt_gstr v_1008);
static void f_check_choices_1013(struct f_greenc_1fr *up_, P174 e_1010, P122 arrt_1011, int has_others_1012);
static P174 f_actual_for_1017(struct f_greenc_1fr *up_, P174 args_1014, P1887 pm_1015, P1887 first_1016);
static void f_gcall_1022(struct f_greenc_1fr *up_, P174 e_1018, int is_stmt_1019, P122 *t_1020, P140 *r_1021);
static void f_out_check_1026(struct f_greenc_1fr *up_, rt_gstr lv_1023, P122 t_1024, P178 c_1025);
static void f_var_path_1029(struct f_greenc_1fr *up_, P174 e_1027, P140 *r_1028);
static int f_paths_overlap_1032(struct f_greenc_1fr *up_, rt_gstr p_1030, rt_gstr r_1031);
static int f_mentions_1035(struct f_greenc_1fr *up_, P174 n_1033, rt_gstr name_1034);
static int f_mentions_one_1038(struct f_greenc_1fr *up_, P174 n_1036, rt_gstr name_1037);
static void f_check_aliasing_1042(struct f_greenc_1fr *up_, P174 e_1039, P117 y_1040, P174 a_1041);
static void f_gcall_with_1047(struct f_greenc_1fr *up_, P174 e_1043, P117 y_1044, P122 *t_1045, P140 *r_1046);
static void f_builtin_1054(struct f_greenc_1fr *up_, rt_gstr name_1048, P174 args_1049, rt_int line_1050, int is_stmt_1051, P122 *t_1052, P140 *r_1053);
static P117 f_lookup_path_1056(struct f_greenc_1fr *up_, rt_gstr p_1055);
static int f_is_package_1058(struct f_greenc_1fr *up_, P174 e_1057);
static P117 f_member_of_1062(struct f_greenc_1fr *up_, rt_gstr p_1059, rt_gstr name_1060, rt_int line_1061);
static int f_inside_package_1064(struct f_greenc_1fr *up_, P174 p_1063);
static void f_copy_sym_1067(struct f_greenc_1fr *up_, P117 y_1065, P117 *z_1066);
static void f_complete_private_1070(struct f_greenc_1fr *up_, P122 ph_1068, P122 full_1069);
static void f_package_spec_1072(struct f_greenc_1fr *up_, P174 e_1071);
static int f_hidden_from_1075(struct f_greenc_1fr *up_, P117 m_1073, P117 first_private_1074);
static void f_package_body_1077(struct f_greenc_1fr *up_, P174 e_1076);
static int f_use_visible_1079(struct f_greenc_1fr *up_, P117 old_1078);
static void f_use_clause_1081(struct f_greenc_1fr *up_, P174 e_1080);
static int f_usable_over_1083(struct f_greenc_1fr *up_, P117 old_1082);
static int f_same_entity_1086(struct f_greenc_1fr *up_, P117 a_1084, P117 b_1085);
static void f_fits_1091(struct f_greenc_1fr *up_, P117 y_1087, P174 args_1088, P122 want_1089, int *ok_1090);
static int f_is_builtin_1093(struct f_greenc_1fr *up_, rt_gstr n_1092);
static void f_resolve_overload_1100(struct f_greenc_1fr *up_, rt_gstr name_1094, P174 args_1095, int is_stmt_1096, P122 want_1097, rt_int line_1098, P117 *y_1099);
static int f_same_profile_1103(struct f_greenc_1fr *up_, P117 a_1101, P117 b_1102);
static void f_resolve_member_overload_1111(struct f_greenc_1fr *up_, rt_gstr p_1104, rt_gstr name_1105, P174 args_1106, int is_stmt_1107, P122 want_1108, rt_int line_1109, P117 *y_1110);
static void f_user_operator_1117(struct f_greenc_1fr *up_, P174 e_1112, P122 want_1113, P122 *t_1114, P140 *r_1115, int *done_1116);
static void f_task_p_1119(struct f_greenc_1fr *up_, P174 *res_1118);
static void f_entry_p_1121(struct f_greenc_1fr *up_, P174 *res_1120);
static void f_accept_p_1123(struct f_greenc_1fr *up_, P174 *res_1122);
static void f_delay_p_1125(struct f_greenc_1fr *up_, P174 *res_1124);
static void f_designators_1127(struct f_greenc_1fr *up_, P174 *res_1126);
static void f_parse_task_statement_1129(struct f_greenc_1fr *up_, P174 *res_1128);
static void f_path_at_1133(struct f_greenc_1fr *up_, rt_int level_1130, rt_gstr field_1131, P140 *r_1132);
static int f_is_task_name_1135(struct f_greenc_1fr *up_, rt_gstr n_1134);
static void f_task_of_1139(struct f_greenc_1fr *up_, P174 e_1136, P117 *y_1137, P174 *ix_1138);
static void f_own_index_1142(struct f_greenc_1fr *up_, P117 t_1140, P140 *r_1141);
static void f_member_1147(struct f_greenc_1fr *up_, P117 y_1143, rt_gstr arr_1144, rt_gstr i_1145, P140 *r_1146);
static void f_act_path_1150(struct f_greenc_1fr *up_, P117 y_1148, P140 *r_1149);
static void f_act_path_i_1154(struct f_greenc_1fr *up_, P117 y_1151, rt_gstr i_1152, P140 *r_1153);
static void f_entry_path_1158(struct f_greenc_1fr *up_, P117 y_1155, rt_gstr i_1156, P140 *r_1157);
static void f_declare_slot_1161(struct f_greenc_1fr *up_, rt_gstr ctype_name_1159, rt_gstr field_1160);
static void f_task_decl_1163(struct f_greenc_1fr *up_, P174 e_1162);
static void f_family_arg_struct_1164(struct f_greenc_1fr *up_);
static void f_family_bounds_1169(struct f_greenc_1fr *up_, P174 b_1165, P117 y_1166, P140 x_1167, int per_member_1168);
static void f_entry_family_slot_1174(struct f_greenc_1fr *up_, P117 y_1170, rt_gstr base_1171, rt_gstr i_1172, P140 *r_1173);
static void f_task_spec_1176(struct f_greenc_1fr *up_, P174 e_1175);
static void f_entry_decl_1178(struct f_greenc_1fr *up_, P174 e_1177);
static void f_task_body_1180(struct f_greenc_1fr *up_, P174 e_1179);
static void f_task_awaits_1183(struct f_greenc_1fr *up_, P174 decls_1181, P140 *aw_1182);
static void f_task_failure_1185(struct f_greenc_1fr *up_, P174 s_1184);
static void f_entry_sym_1189(struct f_greenc_1fr *up_, P174 e_1186, P117 *y_1187, P174 *ix_1188);
static void f_entry_overload_1194(struct f_greenc_1fr *up_, P117 y_1190, P174 args_1191, rt_int line_1192, P117 *r_1193);
static void f_other_call_1199(struct f_greenc_1fr *up_, P174 e_1195, int is_stmt_1196, P122 *t_1197, P140 *r_1198);
static void f_other_attr_1204(struct f_greenc_1fr *up_, P174 e_1200, P117 y_1201, P122 *t_1202, P140 *r_1203);
static void f_member_attr_1208(struct f_greenc_1fr *up_, P174 e_1205, P122 *t_1206, P140 *r_1207);
static void f_task_builtin_1214(struct f_greenc_1fr *up_, rt_gstr name_1209, P174 args_1210, rt_int line_1211, P122 *t_1212, P140 *r_1213);
static void f_accept_entry_1217(struct f_greenc_1fr *up_, P174 s_1215, P117 *r_1216);
static void f_accept_conforms_1221(struct f_greenc_1fr *up_, P174 s_1218, P117 y_1219, int *ok_1220);
static void f_gen_accept_1223(struct f_greenc_1fr *up_, P174 s_1222);
static void f_member_slot_1227(struct f_greenc_1fr *up_, P117 y_1224, P174 s_1225, P140 *ent_1226);
static void f_gen_delay_ticks_1230(struct f_greenc_1fr *up_, P174 e_1228, P140 *r_1229);
static void f_gen_select_1232(struct f_greenc_1fr *up_, P174 s_1231);
static void f_family_range_1237(struct f_greenc_1fr *up_, P117 y_1233, P174 ix_1234, P140 *lo_1235, P140 *hi_1236);
static void f_task_statement_gen_1239(struct f_greenc_1fr *up_, P174 s_1238);
static P174 f_root_name_1241(struct f_greenc_1fr *up_, P174 e_1240);
static void f_check_pure_target_1244(struct f_greenc_1fr *up_, P174 target_1242, rt_int line_1243);
static int f_assigns_nonlocal_1247(struct f_greenc_1fr *up_, P174 d_1245, rt_gstr name_1246);
static int f_declares_1250(struct f_greenc_1fr *up_, P174 d_1248, rt_gstr name_1249);
static int f_scan_handlers_1254(struct f_greenc_1fr *up_, P174 h_1251, P174 d_1252, rt_gstr name_1253);
static int f_scan_assigns_1258(struct f_greenc_1fr *up_, P174 stmts_1255, P174 d_1256, rt_gstr name_1257);
static void f_check_call_rules_1261(struct f_greenc_1fr *up_, P174 e_1259, P117 y_1260);
static void f_generic_p_1263(struct f_greenc_1fr *up_, P174 *res_1262);
static void f_instantiation_1266(struct f_greenc_1fr *up_, P174 x_1264, P174 *res_1265);
static void f_generic_decl_1268(struct f_greenc_1fr *up_, P174 e_1267);
static int f_is_generic_name_1270(struct f_greenc_1fr *up_, rt_gstr n_1269);
static void f_attach_generic_body_1272(struct f_greenc_1fr *up_, P174 e_1271);
static void f_restore_generic_context_1275(struct f_greenc_1fr *up_, P174 body_node_1273, rt_int line_1274);
static P174 f_gactual_1279(struct f_greenc_1fr *up_, P174 args_1276, rt_int nth_1277, rt_gstr name_1278);
static void f_copy_node_1283(struct f_greenc_1fr *up_, P174 n_1280, P140 name_1281, P174 *r_1282);
static int f_matches_formal_1287(struct f_greenc_1fr *up_, P117 y_1284, rt_gstr name_1285, P117 fs_1286);
static void f_instantiate_1289(struct f_greenc_1fr *up_, P174 e_1288);
static void f_predef_type_1294(struct f_greenc_1fr *up_, rt_gstr name_1290, P122 t_1291, rt_gstr lo_1292, rt_gstr hi_1293);
static void f_predef_const_1298(struct f_greenc_1fr *up_, rt_gstr name_1295, P122 t_1296, rt_gstr code_text_1297);
static void f_predef_exc_1300(struct f_greenc_1fr *up_, rt_gstr name_1299);
static void f_predef_lit_1304(struct f_greenc_1fr *up_, rt_gstr name_1301, P122 t_1302, rt_int v_1303);
static void f_predefine_1305(struct f_greenc_1fr *up_);
static void f_lib_open_1308(struct f_greenc_1fr *up_, rt_gstr key_1306, rt_int *length_1307);
static void f_lib_store_1311(struct f_greenc_1fr *up_, rt_gstr key_1309, rt_gstr contents_1310);
static void f_unit_key_1314(struct f_greenc_1fr *up_, P174 u_1312, P140 *r_1313);
static void f_lib_enabled_1316(struct f_greenc_1fr *up_, int *yes_1315);
static void f_store_units_1317(struct f_greenc_1fr *up_);
static void f_store_span_1320(struct f_greenc_1fr *up_, P204 s_1318, rt_gstr key_1319);
static void f_lib_load_1323(struct f_greenc_1fr *up_, rt_gstr key_1321, P174 *r_1322);
static int f_defined_unit_1326(struct f_greenc_1fr *up_, rt_gstr name_1324, P174 before_1325);
static void f_library_units_1327(struct f_greenc_1fr *up_);
static void f_load_unit_1330(struct f_greenc_1fr *up_, rt_gstr name_1328, P174 *r_1329);
static void f_prelude_1331(struct f_greenc_1fr *up_);
static void f_used_units_1334(struct f_greenc_1fr *up_, P174 u_1332, P140 *r_1333);
static void f_add_names_1338(struct f_greenc_1fr *up_, P140 *r_1335, rt_gstr list_1336, int *changed_1337);
static void f_translate_1340(struct f_greenc_1fr *up_, P174 u_1339);
static int f_last_unit_1342(struct f_greenc_1fr *up_, P174 p_1341);
static void f_print_program_1343(struct f_greenc_1fr *up_);
static void f_greenc_1(void);
static int ex_compile_error_108;
static P140 f_mk_236(struct f_greenc_1fr *up_, rt_gstr s_235) {
  struct f_mk_236fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_235 = cp_rt_gstr(s_235);
F->r_1345.lo = ((rt_int)1LL); F->r_1345.hi = ({ rt_gstr at1344 = F->s_235; at1344.hi >= at1344.lo ? at1344.hi - at1344.lo + 1 : (rt_int)0; });
F->r_1345.lo2 = 1; F->r_1345.hi2 = 1;
F->r_1345.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->r_1345));
memset(F->r_1345.p, 0xFF, (size_t)G_CNT(F->r_1345));
as_rt_gstr(&F->r_1345, F->s_235);
F->result_ = ({ rt_gstr *cell1347 = rt_alloc(sizeof(rt_gstr)); *cell1347 = cp_rt_gstr(F->r_1345); (P140)cell1347; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_new_name_239(struct f_greenc_1fr *up_, rt_gstr base_237, P140 *res_238) {
  struct f_new_name_239fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_237 = cp_rt_gstr(base_237);
F->res_238 = res_238;
F->up->serial_125 = rt_add(G_NV(F->up->serial_125), ((rt_int)1LL));
(*F->res_238) = ({ rt_gstr *cell1348 = rt_alloc(sizeof(rt_gstr)); *cell1348 = cp_rt_gstr(cat_rt_gstr(F->base_237, rt_g_s2g(rt_str_of_int(G_NV(F->up->serial_125))))); (P140)cell1348; });
goto ret_;
ret_:

  return;
}

static int f_is_letter_241(struct f_greenc_1fr *up_, int c_240) {
  struct f_is_letter_241fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_240 = c_240;
F->result_ = (((F->c_240 >= 65) && (F->c_240 <= 90)) || ((F->c_240 >= 97) && (F->c_240 <= 122)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_digit_243(struct f_greenc_1fr *up_, int c_242) {
  struct f_is_digit_243fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_242 = c_242;
F->result_ = ((F->c_242 >= 48) && (F->c_242 <= 57));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_upper_245(struct f_greenc_1fr *up_, int c_244) {
  struct f_upper_245fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_244 = c_244;
if (((F->c_244 >= 97) && (F->c_244 <= 122))) {
F->result_ = rt_range(rt_range((rt_sub(((rt_int)(F->c_244) + 1), ((rt_int)32LL)) - 1), 0, 127), 0, 127);
goto ret_;
}
F->result_ = rt_range(F->c_244, 0, 127);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_lower_s_247(struct f_greenc_1fr *up_, rt_gstr s_246) {
  struct f_lower_s_247fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_246 = cp_rt_gstr(s_246);
F->r_1349 = cp_rt_gstr(F->s_246);
{ rt_int lo1353 = ((rt_int)1LL), hi1354 = ({ rt_gstr at1351 = F->s_246; at1351.hi >= at1351.lo ? at1351.hi - at1351.lo + 1 : (rt_int)0; });
for (rt_int it1355 = lo1353; it1355 <= hi1354; it1355++) {
F->i_1352 = it1355;
if (((G_NV(({ rt_gstr ix1356 = F->r_1349; ix1356.p[rt_index(F->i_1352, ix1356.lo, ix1356.hi) - ix1356.lo]; })) >= 65) && (G_NV(({ rt_gstr ix1357 = F->r_1349; ix1357.p[rt_index(F->i_1352, ix1357.lo, ix1357.hi) - ix1357.lo]; })) <= 90))) {
(*({ rt_gstr *ix1358 = &(F->r_1349); &ix1358->p[rt_index(F->i_1352, ix1358->lo, ix1358->hi) - ix1358->lo]; })) = rt_range((rt_add(((rt_int)(G_NV(({ rt_gstr ix1359 = F->r_1349; ix1359.p[rt_index(F->i_1352, ix1359.lo, ix1359.hi) - ix1359.lo]; }))) + 1), ((rt_int)32LL)) - 1), 0, 127);
}
}
}
L_end_1350: ;
F->result_ = F->r_1349;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_upper_s_249(struct f_greenc_1fr *up_, rt_gstr s_248) {
  struct f_upper_s_249fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_248 = cp_rt_gstr(s_248);
F->r_1360 = cp_rt_gstr(F->s_248);
{ rt_int lo1364 = ((rt_int)1LL), hi1365 = ({ rt_gstr at1362 = F->s_248; at1362.hi >= at1362.lo ? at1362.hi - at1362.lo + 1 : (rt_int)0; });
for (rt_int it1366 = lo1364; it1366 <= hi1365; it1366++) {
F->i_1363 = it1366;
(*({ rt_gstr *ix1367 = &(F->r_1360); &ix1367->p[rt_index(F->i_1363, ix1367->lo, ix1367->hi) - ix1367->lo]; })) = f_upper_245(F->up, G_NV(({ rt_gstr ix1369 = F->r_1360; ix1369.p[rt_index(F->i_1363, ix1369.lo, ix1369.hi) - ix1369.lo]; })));
}
}
L_end_1361: ;
F->result_ = F->r_1360;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_operator_251(struct f_greenc_1fr *up_, rt_gstr s_250) {
  struct f_is_operator_251fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_250 = cp_rt_gstr(s_250);
F->result_ = (((((((((((((((eq_rt_gstr(F->s_250, rt_g_lit("+", 1)) || eq_rt_gstr(F->s_250, rt_g_lit("-", 1))) || eq_rt_gstr(F->s_250, rt_g_lit("*", 1))) || eq_rt_gstr(F->s_250, rt_g_lit("/", 1))) || eq_rt_gstr(F->s_250, rt_g_lit("**", 2))) || eq_rt_gstr(F->s_250, rt_g_lit("&", 1))) || eq_rt_gstr(F->s_250, rt_g_lit("=", 1))) || eq_rt_gstr(F->s_250, rt_g_lit("<", 1))) || eq_rt_gstr(F->s_250, rt_g_lit("<=", 2))) || eq_rt_gstr(F->s_250, rt_g_lit(">", 1))) || eq_rt_gstr(F->s_250, rt_g_lit(">=", 2))) || eq_rt_gstr(F->s_250, rt_g_lit("MOD", 3))) || eq_rt_gstr(F->s_250, rt_g_lit("AND", 3))) || eq_rt_gstr(F->s_250, rt_g_lit("OR", 2))) || eq_rt_gstr(F->s_250, rt_g_lit("XOR", 3))) || eq_rt_gstr(F->s_250, rt_g_lit("NOT", 3)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_c_field_253(struct f_greenc_1fr *up_, rt_gstr s_252) {
  struct f_c_field_253fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_252 = cp_rt_gstr(s_252);
F->result_ = cat_rt_gstr(f_lower_s_247(F->up, F->s_252), one_rt_gstr(95));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_q_254(struct f_greenc_1fr *up_) {
  struct f_q_254fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = rt_g_lit("\"", 1);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_fail_257(struct f_greenc_1fr *up_, rt_int line_255, rt_gstr msg_256) {
  struct f_fail_257fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_255 = line_255;
F->msg_256 = cp_rt_gstr(msg_256);
if ((G_NV(F->up->trial_155) == ((rt_int)0LL))) {
rt_g_put(rt_g_g2s(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("greenc: line ", 13), rt_g_s2g(rt_str_of_int(F->line_255))), rt_g_lit(": ", 2)), F->msg_256)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
}
rt_raise(ex_compile_error_108);
ret_:

  return;
}

static P126 f_new_buffer_258(struct f_greenc_1fr *up_) {
  struct f_new_buffer_258fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ({ R127 *cell1370 = rt_alloc(sizeof(R127)); *cell1370 = cp_R127(({ R127 ag1371; ag1371.head_ = NULL; ag1371.tail_ = NULL; ag1371; })); (P126)cell1370; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_put_to_261(struct f_greenc_1fr *up_, P126 b_259, rt_gstr s_260) {
  struct f_put_to_261fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_259 = b_259;
F->s_260 = cp_rt_gstr(s_260);
F->l_1372 = NULL;
F->l_1372 = ({ R152 *cell1373 = rt_alloc(sizeof(R152)); *cell1373 = cp_R152(({ R152 ag1374; ag1374.s_ = NULL; ag1374.next_ = NULL; ag1374; })); (P151)cell1373; });
(*(P151)rt_nil_check(F->l_1372)).s_ = f_mk_236(F->up, F->s_260);
if (((*(P126)rt_nil_check(F->b_259)).tail_ == NULL)) {
(*(P126)rt_nil_check(F->b_259)).head_ = F->l_1372;
} else {
(*(P151)rt_nil_check((*(P126)rt_nil_check(F->b_259)).tail_)).next_ = F->l_1372;
}
(*(P126)rt_nil_check(F->b_259)).tail_ = F->l_1372;
ret_:

  return;
}

static void f_emit_263(struct f_greenc_1fr *up_, rt_gstr s_262) {
  struct f_emit_263fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_262 = cp_rt_gstr(s_262);
f_put_to_261(F->up, F->up->code_136, F->s_262);
ret_:

  return;
}

static void f_print_buffer_265(struct f_greenc_1fr *up_, P126 b_264) {
  struct f_print_buffer_265fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_264 = b_264;
F->l_1375 = NULL;
F->l_1375 = (*(P126)rt_nil_check(F->b_264)).head_;
while ((F->l_1375 != NULL)) {
rt_g_put(rt_g_g2s((*(P140)rt_nil_check((*(P151)rt_nil_check(F->l_1375)).s_))));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
F->l_1375 = (*(P151)rt_nil_check(F->l_1375)).next_;
}
L_end_1376: ;
ret_:

  return;
}

static void f_splice_268(struct f_greenc_1fr *up_, P126 a_266, P126 b_267) {
  struct f_splice_268fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_266 = a_266;
F->b_267 = b_267;
if (((*(P126)rt_nil_check(F->b_267)).head_ == NULL)) {
goto ret_;
}
if (((*(P126)rt_nil_check(F->a_266)).tail_ == NULL)) {
(*(P126)rt_nil_check(F->a_266)).head_ = (*(P126)rt_nil_check(F->b_267)).head_;
} else {
(*(P151)rt_nil_check((*(P126)rt_nil_check(F->a_266)).tail_)).next_ = (*(P126)rt_nil_check(F->b_267)).head_;
}
(*(P126)rt_nil_check(F->a_266)).tail_ = (*(P126)rt_nil_check(F->b_267)).tail_;
(*(P126)rt_nil_check(F->b_267)).head_ = NULL;
(*(P126)rt_nil_check(F->b_267)).tail_ = NULL;
ret_:

  return;
}

static int f_is_reserved_270(struct f_greenc_1fr *up_, rt_gstr w_269) {
  struct f_is_reserved_270fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_269 = cp_rt_gstr(w_269);
{ rt_int sel1378 = ({ rt_gstr at1377 = F->w_269; at1377.hi >= at1377.lo ? at1377.hi - at1377.lo + 1 : (rt_int)0; });
if (0 || sel1378 == ((rt_int)2LL)) {
F->result_ = ((((((eq_rt_gstr(F->w_269, rt_g_lit("AT", 2)) || eq_rt_gstr(F->w_269, rt_g_lit("DO", 2))) || eq_rt_gstr(F->w_269, rt_g_lit("IF", 2))) || eq_rt_gstr(F->w_269, rt_g_lit("IN", 2))) || eq_rt_gstr(F->w_269, rt_g_lit("IS", 2))) || eq_rt_gstr(F->w_269, rt_g_lit("OF", 2))) || eq_rt_gstr(F->w_269, rt_g_lit("OR", 2)));
goto ret_;
} else if (0 || sel1378 == ((rt_int)3LL)) {
F->result_ = (((((((((eq_rt_gstr(F->w_269, rt_g_lit("ALL", 3)) || eq_rt_gstr(F->w_269, rt_g_lit("AND", 3))) || eq_rt_gstr(F->w_269, rt_g_lit("END", 3))) || eq_rt_gstr(F->w_269, rt_g_lit("FOR", 3))) || eq_rt_gstr(F->w_269, rt_g_lit("MOD", 3))) || eq_rt_gstr(F->w_269, rt_g_lit("NEW", 3))) || eq_rt_gstr(F->w_269, rt_g_lit("NOT", 3))) || eq_rt_gstr(F->w_269, rt_g_lit("OUT", 3))) || eq_rt_gstr(F->w_269, rt_g_lit("USE", 3))) || eq_rt_gstr(F->w_269, rt_g_lit("XOR", 3)));
goto ret_;
} else if (0 || sel1378 == ((rt_int)4LL)) {
F->result_ = ((((((((((eq_rt_gstr(F->w_269, rt_g_lit("BODY", 4)) || eq_rt_gstr(F->w_269, rt_g_lit("CASE", 4))) || eq_rt_gstr(F->w_269, rt_g_lit("ELSE", 4))) || eq_rt_gstr(F->w_269, rt_g_lit("EXIT", 4))) || eq_rt_gstr(F->w_269, rt_g_lit("GOTO", 4))) || eq_rt_gstr(F->w_269, rt_g_lit("LOOP", 4))) || eq_rt_gstr(F->w_269, rt_g_lit("NULL", 4))) || eq_rt_gstr(F->w_269, rt_g_lit("TASK", 4))) || eq_rt_gstr(F->w_269, rt_g_lit("THEN", 4))) || eq_rt_gstr(F->w_269, rt_g_lit("TYPE", 4))) || eq_rt_gstr(F->w_269, rt_g_lit("WHEN", 4)));
goto ret_;
} else if (0 || sel1378 == ((rt_int)5LL)) {
F->result_ = (((((((((eq_rt_gstr(F->w_269, rt_g_lit("ABORT", 5)) || eq_rt_gstr(F->w_269, rt_g_lit("ARRAY", 5))) || eq_rt_gstr(F->w_269, rt_g_lit("BEGIN", 5))) || eq_rt_gstr(F->w_269, rt_g_lit("DELAY", 5))) || eq_rt_gstr(F->w_269, rt_g_lit("DELTA", 5))) || eq_rt_gstr(F->w_269, rt_g_lit("ELSIF", 5))) || eq_rt_gstr(F->w_269, rt_g_lit("ENTRY", 5))) || eq_rt_gstr(F->w_269, rt_g_lit("RAISE", 5))) || eq_rt_gstr(F->w_269, rt_g_lit("RANGE", 5))) || eq_rt_gstr(F->w_269, rt_g_lit("WHILE", 5)));
goto ret_;
} else if (0 || sel1378 == ((rt_int)6LL)) {
F->result_ = ((((((((eq_rt_gstr(F->w_269, rt_g_lit("ACCEPT", 6)) || eq_rt_gstr(F->w_269, rt_g_lit("ACCESS", 6))) || eq_rt_gstr(F->w_269, rt_g_lit("ASSERT", 6))) || eq_rt_gstr(F->w_269, rt_g_lit("DIGITS", 6))) || eq_rt_gstr(F->w_269, rt_g_lit("OTHERS", 6))) || eq_rt_gstr(F->w_269, rt_g_lit("PRAGMA", 6))) || eq_rt_gstr(F->w_269, rt_g_lit("RECORD", 6))) || eq_rt_gstr(F->w_269, rt_g_lit("RETURN", 6))) || eq_rt_gstr(F->w_269, rt_g_lit("SELECT", 6)));
goto ret_;
} else if (0 || sel1378 == ((rt_int)7LL)) {
F->result_ = (((((((eq_rt_gstr(F->w_269, rt_g_lit("DECLARE", 7)) || eq_rt_gstr(F->w_269, rt_g_lit("GENERIC", 7))) || eq_rt_gstr(F->w_269, rt_g_lit("PACKAGE", 7))) || eq_rt_gstr(F->w_269, rt_g_lit("PACKING", 7))) || eq_rt_gstr(F->w_269, rt_g_lit("PRIVATE", 7))) || eq_rt_gstr(F->w_269, rt_g_lit("RENAMES", 7))) || eq_rt_gstr(F->w_269, rt_g_lit("REVERSE", 7))) || eq_rt_gstr(F->w_269, rt_g_lit("SUBTYPE", 7)));
goto ret_;
} else if (0 || sel1378 == ((rt_int)8LL)) {
F->result_ = (((eq_rt_gstr(F->w_269, rt_g_lit("CONSTANT", 8)) || eq_rt_gstr(F->w_269, rt_g_lit("FUNCTION", 8))) || eq_rt_gstr(F->w_269, rt_g_lit("INITIATE", 8))) || eq_rt_gstr(F->w_269, rt_g_lit("SEPARATE", 8)));
goto ret_;
} else if (0 || sel1378 == ((rt_int)9LL)) {
F->result_ = (eq_rt_gstr(F->w_269, rt_g_lit("EXCEPTION", 9)) || eq_rt_gstr(F->w_269, rt_g_lit("PROCEDURE", 9)));
goto ret_;
} else if (0 || sel1378 == ((rt_int)10LL)) {
F->result_ = eq_rt_gstr(F->w_269, rt_g_lit("RESTRICTED", 10));
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

static void f_add_token_274(struct f_greenc_1fr *up_, rt_int kind_271, rt_gstr s_272, rt_int ival_273) {
  struct f_add_token_274fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_271 = kind_271;
F->s_272 = cp_rt_gstr(s_272);
F->ival_273 = ival_273;
F->up->ntoks_113 = rt_add(G_NV(F->up->ntoks_113), ((rt_int)1LL));
(*({ A109 *ix1379 = &(F->up->toks_112); &ix1379->p[rt_index(G_NV(F->up->ntoks_113), ix1379->lo, ix1379->hi) - ix1379->lo]; })) = ({ R111 *cell1380 = rt_alloc(sizeof(R111)); *cell1380 = cp_R111(({ R111 ag1381; ag1381.kind_ = F->kind_271; ag1381.line_ = G_NV(F->up->src_line_115); ag1381.ival_ = F->ival_273; ag1381.s_ = NULL; ag1381; })); (P110)cell1380; });
(*(P110)rt_nil_check((*({ A109 *ix1382 = &(F->up->toks_112); &ix1382->p[rt_index(G_NV(F->up->ntoks_113), ix1382->lo, ix1382->hi) - ix1382->lo]; })))).s_ = f_mk_236(F->up, F->s_272);
ret_:

  return;
}

static rt_int f_digit_value_276(struct f_greenc_1fr *up_, int c_275) {
  struct f_digit_value_276fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_275 = c_275;
if (f_is_digit_243(F->up, F->c_275)) {
F->result_ = rt_sub(((rt_int)(F->c_275) + 1), ((rt_int)(48) + 1));
goto ret_;
}
F->result_ = rt_add(rt_sub(((rt_int)(f_upper_245(F->up, F->c_275)) + 1), ((rt_int)(65) + 1)), ((rt_int)10LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_digit_in_279(struct f_greenc_1fr *up_, int c_277, rt_int base_278) {
  struct f_digit_in_279fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_277 = c_277;
F->base_278 = base_278;
F->d_1383 = INT64_MIN;
if (f_is_digit_243(F->up, F->c_277)) {
F->d_1383 = rt_sub(((rt_int)(F->c_277) + 1), ((rt_int)(48) + 1));
} else if (((f_upper_245(F->up, F->c_277) >= 65) && (f_upper_245(F->up, F->c_277) <= 70))) {
F->d_1383 = rt_add(rt_sub(((rt_int)(f_upper_245(F->up, F->c_277)) + 1), ((rt_int)(65) + 1)), ((rt_int)10LL));
} else {
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
}
if ((G_NV(F->d_1383) >= F->base_278)) {
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
}
F->result_ = G_NV(F->d_1383);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_accumulate_283(struct f_greenc_1fr *up_, rt_int *v_280, rt_int base_281, rt_int d_282) {
  struct f_accumulate_283fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->v_280 = v_280;
F->base_281 = base_281;
F->d_282 = d_282;
if ((G_NV((*F->v_280)) > rt_quot(rt_sub(INT64_MAX, F->d_282), F->base_281))) {
f_fail_257(F->up, G_NV(F->up->src_line_115), rt_g_lit("this integer literal is too large (RM79 2.4)", 44));
}
(*F->v_280) = rt_add(rt_mul(G_NV((*F->v_280)), F->base_281), F->d_282);
ret_:

  return;
}

static void f_lex_line_285(struct f_greenc_1fr *up_, rt_gstr line_284) {
  struct f_lex_line_285fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_284 = cp_rt_gstr(line_284);
F->i_1384 = INT64_MIN;
F->i_1384 = ((rt_int)1LL);
F->j_1385 = INT64_MIN;
F->j_1385 = ((rt_int)0LL);
F->n_1386 = INT64_MIN;
F->n_1386 = ({ rt_gstr at1387 = F->line_284; at1387.hi >= at1387.lo ? at1387.hi - at1387.lo + 1 : (rt_int)0; });
F->c_1388 = INT_MIN;
F->quote_1389 = INT_MIN;
F->v_1390 = INT64_MIN;
F->d_1391 = INT64_MIN;
F->buf_1392.lo = ((rt_int)1LL); F->buf_1392.hi = ((rt_int)1000LL);
F->buf_1392.lo2 = 1; F->buf_1392.hi2 = 1;
F->buf_1392.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->buf_1392));
memset(F->buf_1392.p, 0xFF, (size_t)G_CNT(F->buf_1392));
F->bl_1394 = INT64_MIN;
while ((G_NV(F->i_1384) <= G_NV(F->n_1386))) {
F->c_1388 = rt_range(G_NV(({ rt_gstr ix1396 = F->line_284; ix1396.p[rt_index(G_NV(F->i_1384), ix1396.lo, ix1396.hi) - ix1396.lo]; })), 0, 127);
if (((((G_NV(F->c_1388) == 32) || (G_NV(F->c_1388) == 9)) || (G_NV(F->c_1388) == 13)) || (G_NV(F->c_1388) == 12))) {
F->i_1384 = rt_add(G_NV(F->i_1384), ((rt_int)1LL));
} else if ((((G_NV(F->c_1388) == 45) && (G_NV(F->i_1384) < G_NV(F->n_1386))) && (G_NV(({ rt_gstr ix1397 = F->line_284; ix1397.p[rt_index(rt_add(G_NV(F->i_1384), ((rt_int)1LL)), ix1397.lo, ix1397.hi) - ix1397.lo]; })) == 45))) {
F->i_1384 = rt_add(G_NV(F->n_1386), ((rt_int)1LL));
} else if (f_is_letter_241(F->up, G_NV(F->c_1388))) {
F->j_1385 = G_NV(F->i_1384);
F->bl_1394 = ((rt_int)0LL);
while (((G_NV(F->j_1385) <= G_NV(F->n_1386)) && ((f_is_letter_241(F->up, G_NV(({ rt_gstr ix1400 = F->line_284; ix1400.p[rt_index(G_NV(F->j_1385), ix1400.lo, ix1400.hi) - ix1400.lo]; }))) || f_is_digit_243(F->up, G_NV(({ rt_gstr ix1402 = F->line_284; ix1402.p[rt_index(G_NV(F->j_1385), ix1402.lo, ix1402.hi) - ix1402.lo]; })))) || (G_NV(({ rt_gstr ix1403 = F->line_284; ix1403.p[rt_index(G_NV(F->j_1385), ix1403.lo, ix1403.hi) - ix1403.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1404 = F->line_284; ix1404.p[rt_index(G_NV(F->j_1385), ix1404.lo, ix1404.hi) - ix1404.lo]; })) == 95)) {
if (((G_NV(F->j_1385) == G_NV(F->n_1386)) || (!(f_is_letter_241(F->up, G_NV(({ rt_gstr ix1406 = F->line_284; ix1406.p[rt_index(rt_add(G_NV(F->j_1385), ((rt_int)1LL)), ix1406.lo, ix1406.hi) - ix1406.lo]; }))) || f_is_digit_243(F->up, G_NV(({ rt_gstr ix1408 = F->line_284; ix1408.p[rt_index(rt_add(G_NV(F->j_1385), ((rt_int)1LL)), ix1408.lo, ix1408.hi) - ix1408.lo]; }))))))) {
f_fail_257(F->up, G_NV(F->up->src_line_115), rt_g_lit("an underscore in an identifier stands between two letters or digits (RM79 2.3)", 78));
}
}
F->bl_1394 = rt_add(G_NV(F->bl_1394), ((rt_int)1LL));
(*({ rt_gstr *ix1409 = &(F->buf_1392); &ix1409->p[rt_index(G_NV(F->bl_1394), ix1409->lo, ix1409->hi) - ix1409->lo]; })) = f_upper_245(F->up, G_NV(({ rt_gstr ix1411 = F->line_284; ix1411.p[rt_index(G_NV(F->j_1385), ix1411.lo, ix1411.hi) - ix1411.lo]; })));
F->j_1385 = rt_add(G_NV(F->j_1385), ((rt_int)1LL));
}
L_end_1398: ;
if (f_is_reserved_270(F->up, ({ rt_gstr sl1413 = F->buf_1392; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1394); if (l_ <= h_) { rt_index(l_, sl1413.lo, sl1413.hi); rt_index(h_, sl1413.lo, sl1413.hi); } sl1413.p += l_ - sl1413.lo; sl1413.lo = l_; sl1413.hi = h_; sl1413; }))) {
f_add_token_274(F->up, ((rt_int)2LL), ({ rt_gstr sl1415 = F->buf_1392; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1394); if (l_ <= h_) { rt_index(l_, sl1415.lo, sl1415.hi); rt_index(h_, sl1415.lo, sl1415.hi); } sl1415.p += l_ - sl1415.lo; sl1415.lo = l_; sl1415.hi = h_; sl1415; }), ((rt_int)0LL));
} else {
f_add_token_274(F->up, ((rt_int)1LL), ({ rt_gstr sl1417 = F->buf_1392; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1394); if (l_ <= h_) { rt_index(l_, sl1417.lo, sl1417.hi); rt_index(h_, sl1417.lo, sl1417.hi); } sl1417.p += l_ - sl1417.lo; sl1417.lo = l_; sl1417.hi = h_; sl1417; }), ((rt_int)0LL));
}
F->i_1384 = G_NV(F->j_1385);
} else if (f_is_digit_243(F->up, G_NV(F->c_1388))) {
F->j_1385 = G_NV(F->i_1384);
F->v_1390 = ((rt_int)0LL);
F->bl_1394 = ((rt_int)0LL);
while (((G_NV(F->j_1385) <= G_NV(F->n_1386)) && (f_is_digit_243(F->up, G_NV(({ rt_gstr ix1420 = F->line_284; ix1420.p[rt_index(G_NV(F->j_1385), ix1420.lo, ix1420.hi) - ix1420.lo]; }))) || (G_NV(({ rt_gstr ix1421 = F->line_284; ix1421.p[rt_index(G_NV(F->j_1385), ix1421.lo, ix1421.hi) - ix1421.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1422 = F->line_284; ix1422.p[rt_index(G_NV(F->j_1385), ix1422.lo, ix1422.hi) - ix1422.lo]; })) == 95)) {
if (((G_NV(F->j_1385) == G_NV(F->n_1386)) || (!f_is_digit_243(F->up, G_NV(({ rt_gstr ix1424 = F->line_284; ix1424.p[rt_index(rt_add(G_NV(F->j_1385), ((rt_int)1LL)), ix1424.lo, ix1424.hi) - ix1424.lo]; })))))) {
f_fail_257(F->up, G_NV(F->up->src_line_115), rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
} else {
f_accumulate_283(F->up, &F->v_1390, ((rt_int)10LL), rt_sub(((rt_int)(G_NV(({ rt_gstr ix1426 = F->line_284; ix1426.p[rt_index(G_NV(F->j_1385), ix1426.lo, ix1426.hi) - ix1426.lo]; }))) + 1), ((rt_int)(48) + 1)));
F->bl_1394 = rt_add(G_NV(F->bl_1394), ((rt_int)1LL));
(*({ rt_gstr *ix1427 = &(F->buf_1392); &ix1427->p[rt_index(G_NV(F->bl_1394), ix1427->lo, ix1427->hi) - ix1427->lo]; })) = G_NV(({ rt_gstr ix1428 = F->line_284; ix1428.p[rt_index(G_NV(F->j_1385), ix1428.lo, ix1428.hi) - ix1428.lo]; }));
}
F->j_1385 = rt_add(G_NV(F->j_1385), ((rt_int)1LL));
}
L_end_1418: ;
if (((G_NV(F->j_1385) < G_NV(F->n_1386)) && ((G_NV(({ rt_gstr ix1429 = F->line_284; ix1429.p[rt_index(G_NV(F->j_1385), ix1429.lo, ix1429.hi) - ix1429.lo]; })) == 35) || ((G_NV(({ rt_gstr ix1430 = F->line_284; ix1430.p[rt_index(G_NV(F->j_1385), ix1430.lo, ix1430.hi) - ix1430.lo]; })) == 58) && (f_is_digit_243(F->up, G_NV(({ rt_gstr ix1432 = F->line_284; ix1432.p[rt_index(rt_add(G_NV(F->j_1385), ((rt_int)1LL)), ix1432.lo, ix1432.hi) - ix1432.lo]; }))) || f_is_letter_241(F->up, G_NV(({ rt_gstr ix1434 = F->line_284; ix1434.p[rt_index(rt_add(G_NV(F->j_1385), ((rt_int)1LL)), ix1434.lo, ix1434.hi) - ix1434.lo]; })))))))) {
{
F->base_1436 = INT64_MIN;
F->base_1436 = G_NV(F->v_1390);
if (((G_NV(F->base_1436) < ((rt_int)2LL)) || (G_NV(F->base_1436) > ((rt_int)16LL)))) {
f_fail_257(F->up, G_NV(F->up->src_line_115), rt_g_lit("the base of a number is between 2 and 16 (RM79 2.4)", 51));
}
F->v_1390 = ((rt_int)0LL);
F->j_1385 = rt_add(G_NV(F->j_1385), ((rt_int)1LL));
if (((G_NV(F->j_1385) > G_NV(F->n_1386)) || (f_digit_in_279(F->up, G_NV(({ rt_gstr ix1438 = F->line_284; ix1438.p[rt_index(G_NV(F->j_1385), ix1438.lo, ix1438.hi) - ix1438.lo]; })), ((rt_int)16LL)) < ((rt_int)0LL)))) {
f_fail_257(F->up, G_NV(F->up->src_line_115), rt_g_lit("a based number needs digits (RM79 2.4)", 38));
}
while (((G_NV(F->j_1385) <= G_NV(F->n_1386)) && ((f_is_letter_241(F->up, G_NV(({ rt_gstr ix1441 = F->line_284; ix1441.p[rt_index(G_NV(F->j_1385), ix1441.lo, ix1441.hi) - ix1441.lo]; }))) || f_is_digit_243(F->up, G_NV(({ rt_gstr ix1443 = F->line_284; ix1443.p[rt_index(G_NV(F->j_1385), ix1443.lo, ix1443.hi) - ix1443.lo]; })))) || (G_NV(({ rt_gstr ix1444 = F->line_284; ix1444.p[rt_index(G_NV(F->j_1385), ix1444.lo, ix1444.hi) - ix1444.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1445 = F->line_284; ix1445.p[rt_index(G_NV(F->j_1385), ix1445.lo, ix1445.hi) - ix1445.lo]; })) == 95)) {
if (((G_NV(F->j_1385) == G_NV(F->n_1386)) || (f_digit_in_279(F->up, G_NV(({ rt_gstr ix1447 = F->line_284; ix1447.p[rt_index(rt_add(G_NV(F->j_1385), ((rt_int)1LL)), ix1447.lo, ix1447.hi) - ix1447.lo]; })), ((rt_int)16LL)) < ((rt_int)0LL)))) {
f_fail_257(F->up, G_NV(F->up->src_line_115), rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
} else {
F->d_1391 = f_digit_in_279(F->up, G_NV(({ rt_gstr ix1449 = F->line_284; ix1449.p[rt_index(G_NV(F->j_1385), ix1449.lo, ix1449.hi) - ix1449.lo]; })), G_NV(F->base_1436));
if ((G_NV(F->d_1391) < ((rt_int)0LL))) {
f_fail_257(F->up, G_NV(F->up->src_line_115), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("digit ", 6), one_rt_gstr(G_NV(({ rt_gstr ix1451 = F->line_284; ix1451.p[rt_index(G_NV(F->j_1385), ix1451.lo, ix1451.hi) - ix1451.lo]; })))), rt_g_lit(" is not valid in base ", 22)), rt_g_s2g(rt_str_of_int(G_NV(F->base_1436)))), rt_g_lit(" (RM79 2.4)", 11)));
}
f_accumulate_283(F->up, &F->v_1390, G_NV(F->base_1436), G_NV(F->d_1391));
}
F->j_1385 = rt_add(G_NV(F->j_1385), ((rt_int)1LL));
}
L_end_1439: ;

}
L_end_1435: ;
f_add_token_274(F->up, ((rt_int)4LL), rt_g_s2g(rt_str_of_int(G_NV(F->v_1390))), G_NV(F->v_1390));
} else if (((G_NV(F->j_1385) < G_NV(F->n_1386)) && ((G_NV(({ rt_gstr ix1452 = F->line_284; ix1452.p[rt_index(G_NV(F->j_1385), ix1452.lo, ix1452.hi) - ix1452.lo]; })) == 46) && f_is_digit_243(F->up, G_NV(({ rt_gstr ix1454 = F->line_284; ix1454.p[rt_index(rt_add(G_NV(F->j_1385), ((rt_int)1LL)), ix1454.lo, ix1454.hi) - ix1454.lo]; })))))) {
F->bl_1394 = rt_add(G_NV(F->bl_1394), ((rt_int)1LL));
(*({ rt_gstr *ix1455 = &(F->buf_1392); &ix1455->p[rt_index(G_NV(F->bl_1394), ix1455->lo, ix1455->hi) - ix1455->lo]; })) = 46;
F->j_1385 = rt_add(G_NV(F->j_1385), ((rt_int)1LL));
while (((G_NV(F->j_1385) <= G_NV(F->n_1386)) && (f_is_digit_243(F->up, G_NV(({ rt_gstr ix1458 = F->line_284; ix1458.p[rt_index(G_NV(F->j_1385), ix1458.lo, ix1458.hi) - ix1458.lo]; }))) || (G_NV(({ rt_gstr ix1459 = F->line_284; ix1459.p[rt_index(G_NV(F->j_1385), ix1459.lo, ix1459.hi) - ix1459.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1460 = F->line_284; ix1460.p[rt_index(G_NV(F->j_1385), ix1460.lo, ix1460.hi) - ix1460.lo]; })) != 95)) {
F->bl_1394 = rt_add(G_NV(F->bl_1394), ((rt_int)1LL));
(*({ rt_gstr *ix1461 = &(F->buf_1392); &ix1461->p[rt_index(G_NV(F->bl_1394), ix1461->lo, ix1461->hi) - ix1461->lo]; })) = G_NV(({ rt_gstr ix1462 = F->line_284; ix1462.p[rt_index(G_NV(F->j_1385), ix1462.lo, ix1462.hi) - ix1462.lo]; }));
} else if (((G_NV(F->j_1385) == G_NV(F->n_1386)) || (!f_is_digit_243(F->up, G_NV(({ rt_gstr ix1464 = F->line_284; ix1464.p[rt_index(rt_add(G_NV(F->j_1385), ((rt_int)1LL)), ix1464.lo, ix1464.hi) - ix1464.lo]; })))))) {
f_fail_257(F->up, G_NV(F->up->src_line_115), rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
F->j_1385 = rt_add(G_NV(F->j_1385), ((rt_int)1LL));
}
L_end_1456: ;
if (f_exponent_ahead_288(F->up, F->line_284, G_NV(F->j_1385))) {
f_exponent_293(F->up, F->line_284, &F->j_1385, &F->buf_1392, &F->bl_1394);

}
f_add_token_274(F->up, ((rt_int)5LL), ({ rt_gstr sl1466 = F->buf_1392; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1394); if (l_ <= h_) { rt_index(l_, sl1466.lo, sl1466.hi); rt_index(h_, sl1466.lo, sl1466.hi); } sl1466.p += l_ - sl1466.lo; sl1466.lo = l_; sl1466.hi = h_; sl1466; }), ((rt_int)0LL));
} else if (f_exponent_ahead_288(F->up, F->line_284, G_NV(F->j_1385))) {
f_exponent_293(F->up, F->line_284, &F->j_1385, &F->buf_1392, &F->bl_1394);

f_add_token_274(F->up, ((rt_int)5LL), ({ rt_gstr sl1468 = F->buf_1392; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1394); if (l_ <= h_) { rt_index(l_, sl1468.lo, sl1468.hi); rt_index(h_, sl1468.lo, sl1468.hi); } sl1468.p += l_ - sl1468.lo; sl1468.lo = l_; sl1468.hi = h_; sl1468; }), ((rt_int)0LL));
} else {
f_add_token_274(F->up, ((rt_int)4LL), ({ rt_gstr sl1470 = F->buf_1392; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1394); if (l_ <= h_) { rt_index(l_, sl1470.lo, sl1470.hi); rt_index(h_, sl1470.lo, sl1470.hi); } sl1470.p += l_ - sl1470.lo; sl1470.lo = l_; sl1470.hi = h_; sl1470; }), G_NV(F->v_1390));
}
F->i_1384 = G_NV(F->j_1385);
} else if (((G_NV(F->c_1388) == 34) || (G_NV(F->c_1388) == 37))) {
F->quote_1389 = rt_range(G_NV(F->c_1388), 0, 127);
F->j_1385 = rt_add(G_NV(F->i_1384), ((rt_int)1LL));
F->bl_1394 = ((rt_int)0LL);
for (;;) {
if ((G_NV(F->j_1385) > G_NV(F->n_1386))) {
f_fail_257(F->up, G_NV(F->up->src_line_115), rt_g_lit("unterminated string", 19));
}
if ((G_NV(({ rt_gstr ix1472 = F->line_284; ix1472.p[rt_index(G_NV(F->j_1385), ix1472.lo, ix1472.hi) - ix1472.lo]; })) == G_NV(F->quote_1389))) {
if (((G_NV(F->j_1385) == G_NV(F->n_1386)) || (G_NV(({ rt_gstr ix1473 = F->line_284; ix1473.p[rt_index(rt_add(G_NV(F->j_1385), ((rt_int)1LL)), ix1473.lo, ix1473.hi) - ix1473.lo]; })) != G_NV(F->quote_1389)))) {
goto L_end_1471;
}
F->j_1385 = rt_add(G_NV(F->j_1385), ((rt_int)1LL));
} else if (((G_NV(F->quote_1389) == 37) && (G_NV(({ rt_gstr ix1474 = F->line_284; ix1474.p[rt_index(G_NV(F->j_1385), ix1474.lo, ix1474.hi) - ix1474.lo]; })) == 34))) {
f_fail_257(F->up, G_NV(F->up->src_line_115), rt_g_lit("a string bracketed by % cannot contain a quote (RM79 2.1)", 57));
}
F->bl_1394 = rt_add(G_NV(F->bl_1394), ((rt_int)1LL));
(*({ rt_gstr *ix1475 = &(F->buf_1392); &ix1475->p[rt_index(G_NV(F->bl_1394), ix1475->lo, ix1475->hi) - ix1475->lo]; })) = G_NV(({ rt_gstr ix1476 = F->line_284; ix1476.p[rt_index(G_NV(F->j_1385), ix1476.lo, ix1476.hi) - ix1476.lo]; }));
F->j_1385 = rt_add(G_NV(F->j_1385), ((rt_int)1LL));
}
L_end_1471: ;
f_add_token_274(F->up, ((rt_int)6LL), ({ rt_gstr sl1478 = F->buf_1392; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1394); if (l_ <= h_) { rt_index(l_, sl1478.lo, sl1478.hi); rt_index(h_, sl1478.lo, sl1478.hi); } sl1478.p += l_ - sl1478.lo; sl1478.lo = l_; sl1478.hi = h_; sl1478; }), ((rt_int)0LL));
F->i_1384 = rt_add(G_NV(F->j_1385), ((rt_int)1LL));
} else {
{
F->two_1480.lo = ((rt_int)1LL); F->two_1480.hi = ((rt_int)3LL);
F->two_1480.lo2 = 1; F->two_1480.hi2 = 1;
F->two_1480.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->two_1480));
memset(F->two_1480.p, 0xFF, (size_t)G_CNT(F->two_1480));
as_rt_gstr(&F->two_1480, rt_g_lit("   ", 3));
(*({ rt_gstr *ix1482 = &(F->two_1480); &ix1482->p[rt_index(((rt_int)1LL), ix1482->lo, ix1482->hi) - ix1482->lo]; })) = G_NV(F->c_1388);
if ((G_NV(F->i_1384) < G_NV(F->n_1386))) {
(*({ rt_gstr *ix1483 = &(F->two_1480); &ix1483->p[rt_index(((rt_int)2LL), ix1483->lo, ix1483->hi) - ix1483->lo]; })) = G_NV(({ rt_gstr ix1484 = F->line_284; ix1484.p[rt_index(rt_add(G_NV(F->i_1384), ((rt_int)1LL)), ix1484.lo, ix1484.hi) - ix1484.lo]; }));
}
if ((rt_add(G_NV(F->i_1384), ((rt_int)1LL)) < G_NV(F->n_1386))) {
(*({ rt_gstr *ix1485 = &(F->two_1480); &ix1485->p[rt_index(((rt_int)3LL), ix1485->lo, ix1485->hi) - ix1485->lo]; })) = G_NV(({ rt_gstr ix1486 = F->line_284; ix1486.p[rt_index(rt_add(G_NV(F->i_1384), ((rt_int)2LL)), ix1486.lo, ix1486.hi) - ix1486.lo]; }));
}
if (eq_rt_gstr(F->two_1480, rt_g_lit(":=:", 3))) {
f_add_token_274(F->up, ((rt_int)3LL), rt_g_lit(":=:", 3), ((rt_int)0LL));
F->i_1384 = rt_add(G_NV(F->i_1384), ((rt_int)3LL));
} else if ((((((((((eq_rt_gstr(({ rt_gstr sl1487 = F->two_1480; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1487.lo, sl1487.hi); rt_index(h_, sl1487.lo, sl1487.hi); } sl1487.p += l_ - sl1487.lo; sl1487.lo = l_; sl1487.hi = h_; sl1487; }), rt_g_lit(":=", 2)) || eq_rt_gstr(({ rt_gstr sl1488 = F->two_1480; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1488.lo, sl1488.hi); rt_index(h_, sl1488.lo, sl1488.hi); } sl1488.p += l_ - sl1488.lo; sl1488.lo = l_; sl1488.hi = h_; sl1488; }), rt_g_lit("=:", 2))) || eq_rt_gstr(({ rt_gstr sl1489 = F->two_1480; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1489.lo, sl1489.hi); rt_index(h_, sl1489.lo, sl1489.hi); } sl1489.p += l_ - sl1489.lo; sl1489.lo = l_; sl1489.hi = h_; sl1489; }), rt_g_lit("=>", 2))) || eq_rt_gstr(({ rt_gstr sl1490 = F->two_1480; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1490.lo, sl1490.hi); rt_index(h_, sl1490.lo, sl1490.hi); } sl1490.p += l_ - sl1490.lo; sl1490.lo = l_; sl1490.hi = h_; sl1490; }), rt_g_lit("..", 2))) || eq_rt_gstr(({ rt_gstr sl1491 = F->two_1480; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1491.lo, sl1491.hi); rt_index(h_, sl1491.lo, sl1491.hi); } sl1491.p += l_ - sl1491.lo; sl1491.lo = l_; sl1491.hi = h_; sl1491; }), rt_g_lit("**", 2))) || eq_rt_gstr(({ rt_gstr sl1492 = F->two_1480; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1492.lo, sl1492.hi); rt_index(h_, sl1492.lo, sl1492.hi); } sl1492.p += l_ - sl1492.lo; sl1492.lo = l_; sl1492.hi = h_; sl1492; }), rt_g_lit("/=", 2))) || eq_rt_gstr(({ rt_gstr sl1493 = F->two_1480; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1493.lo, sl1493.hi); rt_index(h_, sl1493.lo, sl1493.hi); } sl1493.p += l_ - sl1493.lo; sl1493.lo = l_; sl1493.hi = h_; sl1493; }), rt_g_lit("<=", 2))) || eq_rt_gstr(({ rt_gstr sl1494 = F->two_1480; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1494.lo, sl1494.hi); rt_index(h_, sl1494.lo, sl1494.hi); } sl1494.p += l_ - sl1494.lo; sl1494.lo = l_; sl1494.hi = h_; sl1494; }), rt_g_lit(">=", 2))) || eq_rt_gstr(({ rt_gstr sl1495 = F->two_1480; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1495.lo, sl1495.hi); rt_index(h_, sl1495.lo, sl1495.hi); } sl1495.p += l_ - sl1495.lo; sl1495.lo = l_; sl1495.hi = h_; sl1495; }), rt_g_lit("<<", 2))) || eq_rt_gstr(({ rt_gstr sl1496 = F->two_1480; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1496.lo, sl1496.hi); rt_index(h_, sl1496.lo, sl1496.hi); } sl1496.p += l_ - sl1496.lo; sl1496.lo = l_; sl1496.hi = h_; sl1496; }), rt_g_lit(">>", 2)))) {
f_add_token_274(F->up, ((rt_int)3LL), ({ rt_gstr sl1498 = F->two_1480; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1498.lo, sl1498.hi); rt_index(h_, sl1498.lo, sl1498.hi); } sl1498.p += l_ - sl1498.lo; sl1498.lo = l_; sl1498.hi = h_; sl1498; }), ((rt_int)0LL));
F->i_1384 = rt_add(G_NV(F->i_1384), ((rt_int)2LL));
} else if ((G_NV(F->c_1388) == 33)) {
f_add_token_274(F->up, ((rt_int)3LL), rt_g_lit("|", 1), ((rt_int)0LL));
F->i_1384 = rt_add(G_NV(F->i_1384), ((rt_int)1LL));
} else if (((((((((((((((((G_NV(F->c_1388) == 38) || (G_NV(F->c_1388) == 39)) || (G_NV(F->c_1388) == 40)) || (G_NV(F->c_1388) == 41)) || (G_NV(F->c_1388) == 42)) || (G_NV(F->c_1388) == 43)) || (G_NV(F->c_1388) == 44)) || (G_NV(F->c_1388) == 45)) || (G_NV(F->c_1388) == 46)) || (G_NV(F->c_1388) == 47)) || (G_NV(F->c_1388) == 58)) || (G_NV(F->c_1388) == 59)) || (G_NV(F->c_1388) == 60)) || (G_NV(F->c_1388) == 61)) || (G_NV(F->c_1388) == 62)) || (G_NV(F->c_1388) == 124))) {
f_add_token_274(F->up, ((rt_int)3LL), ({ rt_gstr sl1500 = F->two_1480; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)1LL); if (l_ <= h_) { rt_index(l_, sl1500.lo, sl1500.hi); rt_index(h_, sl1500.lo, sl1500.hi); } sl1500.p += l_ - sl1500.lo; sl1500.lo = l_; sl1500.hi = h_; sl1500; }), ((rt_int)0LL));
F->i_1384 = rt_add(G_NV(F->i_1384), ((rt_int)1LL));
if ((G_NV(F->c_1388) == 59)) {
f_check_include_300(F->up);
}
} else {
f_fail_257(F->up, G_NV(F->up->src_line_115), rt_g_lit("unexpected character", 20));
}

}
L_end_1479: ;
}
}
L_end_1395: ;
ret_:

  return;
}

static int f_exponent_ahead_288(struct f_greenc_1fr *up_, rt_gstr line_286, rt_int j_287) {
  struct f_exponent_ahead_288fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_286 = cp_rt_gstr(line_286);
F->j_287 = j_287;
if ((F->j_287 >= ({ rt_gstr at1501 = F->line_286; at1501.hi >= at1501.lo ? at1501.hi - at1501.lo + 1 : (rt_int)0; }))) {
F->result_ = 0;
goto ret_;
} else if (((G_NV(({ rt_gstr ix1502 = F->line_286; ix1502.p[rt_index(F->j_287, ix1502.lo, ix1502.hi) - ix1502.lo]; })) != 69) && (G_NV(({ rt_gstr ix1503 = F->line_286; ix1503.p[rt_index(F->j_287, ix1503.lo, ix1503.hi) - ix1503.lo]; })) != 101))) {
F->result_ = 0;
goto ret_;
} else if (f_is_digit_243(F->up, G_NV(({ rt_gstr ix1505 = F->line_286; ix1505.p[rt_index(rt_add(F->j_287, ((rt_int)1LL)), ix1505.lo, ix1505.hi) - ix1505.lo]; })))) {
F->result_ = 1;
goto ret_;
} else if ((rt_add(F->j_287, ((rt_int)1LL)) >= ({ rt_gstr at1506 = F->line_286; at1506.hi >= at1506.lo ? at1506.hi - at1506.lo + 1 : (rt_int)0; }))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (((G_NV(({ rt_gstr ix1507 = F->line_286; ix1507.p[rt_index(rt_add(F->j_287, ((rt_int)1LL)), ix1507.lo, ix1507.hi) - ix1507.lo]; })) == 43) || (G_NV(({ rt_gstr ix1508 = F->line_286; ix1508.p[rt_index(rt_add(F->j_287, ((rt_int)1LL)), ix1508.lo, ix1508.hi) - ix1508.lo]; })) == 45)) && f_is_digit_243(F->up, G_NV(({ rt_gstr ix1510 = F->line_286; ix1510.p[rt_index(rt_add(F->j_287, ((rt_int)2LL)), ix1510.lo, ix1510.hi) - ix1510.lo]; }))));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_exponent_293(struct f_greenc_1fr *up_, rt_gstr line_289, rt_int *j_290, rt_gstr *buf_291, rt_int *bl_292) {
  struct f_exponent_293fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_289 = cp_rt_gstr(line_289);
F->j_290 = j_290;
F->buf_291 = buf_291;
F->bl_292 = bl_292;
(*F->bl_292) = rt_add(G_NV((*F->bl_292)), ((rt_int)1LL));
(*({ rt_gstr *ix1511 = &((*F->buf_291)); &ix1511->p[rt_index(G_NV((*F->bl_292)), ix1511->lo, ix1511->hi) - ix1511->lo]; })) = 69;
(*F->j_290) = rt_add(G_NV((*F->j_290)), ((rt_int)1LL));
if (((G_NV(({ rt_gstr ix1512 = F->line_289; ix1512.p[rt_index(G_NV((*F->j_290)), ix1512.lo, ix1512.hi) - ix1512.lo]; })) == 43) || (G_NV(({ rt_gstr ix1513 = F->line_289; ix1513.p[rt_index(G_NV((*F->j_290)), ix1513.lo, ix1513.hi) - ix1513.lo]; })) == 45))) {
(*F->bl_292) = rt_add(G_NV((*F->bl_292)), ((rt_int)1LL));
(*({ rt_gstr *ix1514 = &((*F->buf_291)); &ix1514->p[rt_index(G_NV((*F->bl_292)), ix1514->lo, ix1514->hi) - ix1514->lo]; })) = G_NV(({ rt_gstr ix1515 = F->line_289; ix1515.p[rt_index(G_NV((*F->j_290)), ix1515.lo, ix1515.hi) - ix1515.lo]; }));
(*F->j_290) = rt_add(G_NV((*F->j_290)), ((rt_int)1LL));
}
while (((G_NV((*F->j_290)) <= ({ rt_gstr at1517 = F->line_289; at1517.hi >= at1517.lo ? at1517.hi - at1517.lo + 1 : (rt_int)0; })) && (f_is_digit_243(F->up, G_NV(({ rt_gstr ix1519 = F->line_289; ix1519.p[rt_index(G_NV((*F->j_290)), ix1519.lo, ix1519.hi) - ix1519.lo]; }))) || (G_NV(({ rt_gstr ix1520 = F->line_289; ix1520.p[rt_index(G_NV((*F->j_290)), ix1520.lo, ix1520.hi) - ix1520.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1521 = F->line_289; ix1521.p[rt_index(G_NV((*F->j_290)), ix1521.lo, ix1521.hi) - ix1521.lo]; })) != 95)) {
(*F->bl_292) = rt_add(G_NV((*F->bl_292)), ((rt_int)1LL));
(*({ rt_gstr *ix1522 = &((*F->buf_291)); &ix1522->p[rt_index(G_NV((*F->bl_292)), ix1522->lo, ix1522->hi) - ix1522->lo]; })) = G_NV(({ rt_gstr ix1523 = F->line_289; ix1523.p[rt_index(G_NV((*F->j_290)), ix1523.lo, ix1523.hi) - ix1523.lo]; }));
} else if (((G_NV((*F->j_290)) == ({ rt_gstr at1524 = F->line_289; at1524.hi >= at1524.lo ? at1524.hi - at1524.lo + 1 : (rt_int)0; })) || (!f_is_digit_243(F->up, G_NV(({ rt_gstr ix1526 = F->line_289; ix1526.p[rt_index(rt_add(G_NV((*F->j_290)), ((rt_int)1LL)), ix1526.lo, ix1526.hi) - ix1526.lo]; })))))) {
f_fail_257(F->up, G_NV(F->up->src_line_115), rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
(*F->j_290) = rt_add(G_NV((*F->j_290)), ((rt_int)1LL));
}
L_end_1516: ;
ret_:

  return;
}

static void f_include_open_296(struct f_greenc_1fr *up_, rt_gstr name_294, rt_int *length_295) {
  struct f_include_open_296fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_294 = cp_rt_gstr(name_294);
F->length_295 = length_295;
rt_g_include_open(rt_g_g2s(F->name_294), F->length_295);
ret_:

  return;
}

static void f_include_char_299(struct f_greenc_1fr *up_, rt_int i_297, int *c_298) {
  struct f_include_char_299fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->i_297 = i_297;
F->c_298 = c_298;
rt_g_include_char(F->i_297, F->c_298);
ret_:

  return;
}

static void f_check_include_300(struct f_greenc_1fr *up_) {
  struct f_check_include_300fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1527 = INT64_MIN;
if ((G_NV(F->up->ntoks_113) < ((rt_int)6LL))) {
goto ret_;
}
if (((G_NV((*(P110)rt_nil_check(({ A109 ix1528 = F->up->toks_112; ix1528.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)5LL)), ix1528.lo, ix1528.hi) - ix1528.lo]; }))).kind_) != ((rt_int)2LL)) || (G_NV((*(P110)rt_nil_check(({ A109 ix1529 = F->up->toks_112; ix1529.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)2LL)), ix1529.lo, ix1529.hi) - ix1529.lo]; }))).kind_) != ((rt_int)6LL)))) {
goto ret_;
} else if (((((!eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1530 = F->up->toks_112; ix1530.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)5LL)), ix1530.lo, ix1530.hi) - ix1530.lo]; }))).s_)), rt_g_lit("PRAGMA", 6))) || (!eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1531 = F->up->toks_112; ix1531.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)4LL)), ix1531.lo, ix1531.hi) - ix1531.lo]; }))).s_)), rt_g_lit("INCLUDE", 7)))) || (!eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1532 = F->up->toks_112; ix1532.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)3LL)), ix1532.lo, ix1532.hi) - ix1532.lo]; }))).s_)), rt_g_lit("(", 1)))) || (!eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1533 = F->up->toks_112; ix1533.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)1LL)), ix1533.lo, ix1533.hi) - ix1533.lo]; }))).s_)), rt_g_lit(")", 1))))) {
goto ret_;
}
f_include_open_296(F->up, (*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1535 = F->up->toks_112; ix1535.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)2LL)), ix1535.lo, ix1535.hi) - ix1535.lo]; }))).s_)), &F->n_1527);
if ((G_NV(F->n_1527) < ((rt_int)0LL))) {
f_fail_257(F->up, G_NV(F->up->src_line_115), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma INCLUDE: the file ", 25), (*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1537 = F->up->toks_112; ix1537.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)2LL)), ix1537.lo, ix1537.hi) - ix1537.lo]; }))).s_))), rt_g_lit(" cannot be read", 15)));
}
F->up->ntoks_113 = rt_sub(G_NV(F->up->ntoks_113), ((rt_int)6LL));
f_include_text_302(F->up, G_NV(F->n_1527));
ret_:

  return;
}

static void f_include_text_302(struct f_greenc_1fr *up_, rt_int n_301) {
  struct f_include_text_302fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_301 = n_301;
F->t_1538.lo = ((rt_int)1LL); F->t_1538.hi = rt_add(F->n_301, ((rt_int)1LL));
F->t_1538.lo2 = 1; F->t_1538.hi2 = 1;
F->t_1538.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->t_1538));
memset(F->t_1538.p, 0xFF, (size_t)G_CNT(F->t_1538));
F->saved_line_1540 = INT64_MIN;
F->saved_line_1540 = G_NV(F->up->src_line_115);
F->from_1541 = INT64_MIN;
F->from_1541 = ((rt_int)1LL);
{ rt_int lo1544 = ((rt_int)1LL), hi1545 = F->n_301;
for (rt_int it1546 = lo1544; it1546 <= hi1545; it1546++) {
F->k_1543 = it1546;
f_include_char_299(F->up, F->k_1543, &(*({ rt_gstr *ix1548 = &(F->t_1538); &ix1548->p[rt_index(F->k_1543, ix1548->lo, ix1548->hi) - ix1548->lo]; })));
}
}
L_end_1542: ;
F->up->src_line_115 = ((rt_int)0LL);
{ rt_int lo1551 = ((rt_int)1LL), hi1552 = F->n_301;
for (rt_int it1553 = lo1551; it1553 <= hi1552; it1553++) {
F->k_1550 = it1553;
if ((G_NV(({ rt_gstr ix1554 = F->t_1538; ix1554.p[rt_index(F->k_1550, ix1554.lo, ix1554.hi) - ix1554.lo]; })) == 10)) {
F->up->src_line_115 = rt_add(G_NV(F->up->src_line_115), ((rt_int)1LL));
f_include_line_306(F->up, F->t_1538, G_NV(F->from_1541), rt_sub(F->k_1550, ((rt_int)1LL)));
F->from_1541 = rt_add(F->k_1550, ((rt_int)1LL));
}
}
}
L_end_1549: ;
if ((G_NV(F->from_1541) <= F->n_301)) {
F->up->src_line_115 = rt_add(G_NV(F->up->src_line_115), ((rt_int)1LL));
f_include_line_306(F->up, F->t_1538, G_NV(F->from_1541), F->n_301);
}
F->up->src_line_115 = G_NV(F->saved_line_1540);
ret_:

  return;
}

static void f_include_line_306(struct f_greenc_1fr *up_, rt_gstr t_303, rt_int from_304, rt_int to_305) {
  struct f_include_line_306fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_303 = cp_rt_gstr(t_303);
F->from_304 = from_304;
F->to_305 = to_305;
F->l_1555.lo = ((rt_int)1LL); F->l_1555.hi = rt_add(rt_sub(F->to_305, F->from_304), ((rt_int)1LL));
F->l_1555.lo2 = 1; F->l_1555.hi2 = 1;
F->l_1555.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->l_1555));
memset(F->l_1555.p, 0xFF, (size_t)G_CNT(F->l_1555));
{ rt_int lo1559 = F->from_304, hi1560 = F->to_305;
for (rt_int it1561 = lo1559; it1561 <= hi1560; it1561++) {
F->k_1558 = it1561;
(*({ rt_gstr *ix1562 = &(F->l_1555); &ix1562->p[rt_index(rt_add(rt_sub(F->k_1558, F->from_304), ((rt_int)1LL)), ix1562->lo, ix1562->hi) - ix1562->lo]; })) = G_NV(({ rt_gstr ix1563 = F->t_303; ix1563.p[rt_index(F->k_1558, ix1563.lo, ix1563.hi) - ix1563.lo]; }));
}
}
L_end_1557: ;
f_lex_line_285(F->up, F->l_1555);
ret_:

  return;
}

static void f_read_source_307(struct f_greenc_1fr *up_) {
  struct f_read_source_307fr *F = rt_alloc(sizeof *F);
F->up = up_;
{ rt_frame xf1564;
if (RT_TRY(xf1564)) {
F->buf_1566.lo = ((rt_int)1LL); F->buf_1566.hi = ((rt_int)10000LL);
F->buf_1566.lo2 = 1; F->buf_1566.hi2 = 1;
F->buf_1566.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->buf_1566));
memset(F->buf_1566.p, 0xFF, (size_t)G_CNT(F->buf_1566));
F->bl_1568 = INT64_MIN;
F->bl_1568 = ((rt_int)0LL);
F->c_1569 = INT_MIN;
for (;;) {
(F->c_1569 = rt_g_getc());
if ((G_NV(F->c_1569) == 10)) {
F->up->src_line_115 = rt_add(G_NV(F->up->src_line_115), ((rt_int)1LL));
if ((G_NV(F->up->src_line_115) <= ((rt_int)300000LL))) {
(*({ A202 *ix1571 = &(F->up->src_lines_203); &ix1571->p[rt_index(G_NV(F->up->src_line_115), ix1571->lo, ix1571->hi) - ix1571->lo]; })) = f_mk_236(F->up, ({ rt_gstr sl1573 = F->buf_1566; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1568); if (l_ <= h_) { rt_index(l_, sl1573.lo, sl1573.hi); rt_index(h_, sl1573.lo, sl1573.hi); } sl1573.p += l_ - sl1573.lo; sl1573.lo = l_; sl1573.hi = h_; sl1573; }));
}
f_lex_line_285(F->up, ({ rt_gstr sl1575 = F->buf_1566; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1568); if (l_ <= h_) { rt_index(l_, sl1575.lo, sl1575.hi); rt_index(h_, sl1575.lo, sl1575.hi); } sl1575.p += l_ - sl1575.lo; sl1575.lo = l_; sl1575.hi = h_; sl1575; }));
F->bl_1568 = ((rt_int)0LL);
} else {
F->bl_1568 = rt_add(G_NV(F->bl_1568), ((rt_int)1LL));
(*({ rt_gstr *ix1576 = &(F->buf_1566); &ix1576->p[rt_index(G_NV(F->bl_1568), ix1576->lo, ix1576->hi) - ix1576->lo]; })) = G_NV(F->c_1569);
}
}
L_end_1570: ;
RT_POP(xf1564);
} else {
RT_POP(xf1564);
int x1565 = rt_xcur;
if (rt_g_aborted()) rt_raise(x1565);
if (0 || x1565 == rt_exc("END_OF_FILE")) {
if ((G_NV(F->bl_1568) > ((rt_int)0LL))) {
F->up->src_line_115 = rt_add(G_NV(F->up->src_line_115), ((rt_int)1LL));
if ((G_NV(F->up->src_line_115) <= ((rt_int)300000LL))) {
(*({ A202 *ix1577 = &(F->up->src_lines_203); &ix1577->p[rt_index(G_NV(F->up->src_line_115), ix1577->lo, ix1577->hi) - ix1577->lo]; })) = f_mk_236(F->up, ({ rt_gstr sl1579 = F->buf_1566; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1568); if (l_ <= h_) { rt_index(l_, sl1579.lo, sl1579.hi); rt_index(h_, sl1579.lo, sl1579.hi); } sl1579.p += l_ - sl1579.lo; sl1579.lo = l_; sl1579.hi = h_; sl1579; }));
}
f_lex_line_285(F->up, ({ rt_gstr sl1581 = F->buf_1566; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1568); if (l_ <= h_) { rt_index(l_, sl1581.lo, sl1581.hi); rt_index(h_, sl1581.lo, sl1581.hi); } sl1581.p += l_ - sl1581.lo; sl1581.lo = l_; sl1581.hi = h_; sl1581; }));
}
f_add_token_274(F->up, ((rt_int)0LL), rt_g_lit("<end>", 5), ((rt_int)0LL));
} else {
rt_raise(x1565);
}
}
}
ret_:

  return;
}

static P174 f_nn_310(struct f_greenc_1fr *up_, rt_int kind_308, rt_int line_309) {
  struct f_nn_310fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_308 = kind_308;
F->line_309 = line_309;
F->result_ = ({ R175 *cell1582 = rt_alloc(sizeof(R175)); *cell1582 = cp_R175(({ R175 ag1583; ag1583.kind_ = F->kind_308; ag1583.line_ = F->line_309; ag1583.ival_ = ((rt_int)0LL); ag1583.flag_ = ((rt_int)0LL); ag1583.name_ = NULL; ag1583.tag_ = NULL; ag1583.a_ = NULL; ag1583.b_ = NULL; ag1583.c_ = NULL; ag1583.d_ = NULL; ag1583.e_ = NULL; ag1583.next_ = NULL; ag1583.formal_ = NULL; ag1583; })); (P174)cell1582; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_append_314(struct f_greenc_1fr *up_, P174 *head_311, P174 *tail_312, P174 x_313) {
  struct f_append_314fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->head_311 = head_311;
F->tail_312 = tail_312;
F->x_313 = x_313;
if ((F->x_313 == NULL)) {
goto ret_;
}
if (((*F->head_311) == NULL)) {
(*F->head_311) = F->x_313;
} else {
(*(P174)rt_nil_check((*F->tail_312))).next_ = F->x_313;
}
(*F->tail_312) = F->x_313;
while (((*(P174)rt_nil_check((*F->tail_312))).next_ != NULL)) {
(*F->tail_312) = (*(P174)rt_nil_check((*F->tail_312))).next_;
}
L_end_1584: ;
ret_:

  return;
}

static rt_int f_list_len_316(struct f_greenc_1fr *up_, P174 l_315) {
  struct f_list_len_316fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_315 = l_315;
F->n_1585 = INT64_MIN;
F->n_1585 = ((rt_int)0LL);
F->p_1586 = NULL;
F->p_1586 = F->l_315;
while ((F->p_1586 != NULL)) {
F->n_1585 = rt_add(G_NV(F->n_1585), ((rt_int)1LL));
F->p_1586 = (*(P174)rt_nil_check(F->p_1586)).next_;
}
L_end_1587: ;
F->result_ = G_NV(F->n_1585);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_cur_line_317(struct f_greenc_1fr *up_) {
  struct f_cur_line_317fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = G_NV((*(P110)rt_nil_check(({ A109 ix1588 = F->up->toks_112; ix1588.p[rt_index(G_NV(F->up->tpos_114), ix1588.lo, ix1588.hi) - ix1588.lo]; }))).line_);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_kw_319(struct f_greenc_1fr *up_, rt_gstr w_318) {
  struct f_at_kw_319fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_318 = cp_rt_gstr(w_318);
if ((!(G_NV((*(P110)rt_nil_check(({ A109 ix1589 = F->up->toks_112; ix1589.p[rt_index(G_NV(F->up->tpos_114), ix1589.lo, ix1589.hi) - ix1589.lo]; }))).kind_) == ((rt_int)2LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1590 = F->up->toks_112; ix1590.p[rt_index(G_NV(F->up->tpos_114), ix1590.lo, ix1590.hi) - ix1590.lo]; }))).s_)), F->w_318);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_op_321(struct f_greenc_1fr *up_, rt_gstr w_320) {
  struct f_at_op_321fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_320 = cp_rt_gstr(w_320);
if ((!(G_NV((*(P110)rt_nil_check(({ A109 ix1591 = F->up->toks_112; ix1591.p[rt_index(G_NV(F->up->tpos_114), ix1591.lo, ix1591.hi) - ix1591.lo]; }))).kind_) == ((rt_int)3LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1592 = F->up->toks_112; ix1592.p[rt_index(G_NV(F->up->tpos_114), ix1592.lo, ix1592.hi) - ix1592.lo]; }))).s_)), F->w_320);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_kind_323(struct f_greenc_1fr *up_, rt_int k_322) {
  struct f_at_kind_323fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_322 = k_322;
F->result_ = (G_NV((*(P110)rt_nil_check(({ A109 ix1593 = F->up->toks_112; ix1593.p[rt_index(G_NV(F->up->tpos_114), ix1593.lo, ix1593.hi) - ix1593.lo]; }))).kind_) == F->k_322);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_kind_at_325(struct f_greenc_1fr *up_, rt_int k_324) {
  struct f_kind_at_325fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_324 = k_324;
if ((rt_add(G_NV(F->up->tpos_114), F->k_324) > G_NV(F->up->ntoks_113))) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
F->result_ = G_NV((*(P110)rt_nil_check(({ A109 ix1594 = F->up->toks_112; ix1594.p[rt_index(rt_add(G_NV(F->up->tpos_114), F->k_324), ix1594.lo, ix1594.hi) - ix1594.lo]; }))).kind_);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_text_at_327(struct f_greenc_1fr *up_, rt_int k_326) {
  struct f_text_at_327fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_326 = k_326;
if ((rt_add(G_NV(F->up->tpos_114), F->k_326) > G_NV(F->up->ntoks_113))) {
F->result_ = rt_g_lit("", 0);
goto ret_;
}
F->result_ = (*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1595 = F->up->toks_112; ix1595.p[rt_index(rt_add(G_NV(F->up->tpos_114), F->k_326), ix1595.lo, ix1595.hi) - ix1595.lo]; }))).s_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_perror_329(struct f_greenc_1fr *up_, rt_gstr msg_328) {
  struct f_perror_329fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->msg_328 = cp_rt_gstr(msg_328);
f_fail_257(F->up, G_NV((*(P110)rt_nil_check(({ A109 ix1598 = F->up->toks_112; ix1598.p[rt_index(G_NV(F->up->tpos_114), ix1598.lo, ix1598.hi) - ix1598.lo]; }))).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->msg_328, rt_g_lit(" (at ", 5)), (*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1599 = F->up->toks_112; ix1599.p[rt_index(G_NV(F->up->tpos_114), ix1599.lo, ix1599.hi) - ix1599.lo]; }))).s_))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_skip_330(struct f_greenc_1fr *up_) {
  struct f_skip_330fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->tpos_114 = rt_add(G_NV(F->up->tpos_114), ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_kw_332(struct f_greenc_1fr *up_, rt_gstr w_331) {
  struct f_expect_kw_332fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_331 = cp_rt_gstr(w_331);
if ((!f_at_kw_319(F->up, F->w_331))) {
f_perror_329(F->up, cat_rt_gstr(rt_g_lit("expected ", 9), F->w_331));
}
F->up->tpos_114 = rt_add(G_NV(F->up->tpos_114), ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_op_334(struct f_greenc_1fr *up_, rt_gstr w_333) {
  struct f_expect_op_334fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_333 = cp_rt_gstr(w_333);
if ((!f_at_op_321(F->up, F->w_333))) {
f_perror_329(F->up, cat_rt_gstr(rt_g_lit("expected ", 9), F->w_333));
}
F->up->tpos_114 = rt_add(G_NV(F->up->tpos_114), ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_id_336(struct f_greenc_1fr *up_, P140 *res_335) {
  struct f_expect_id_336fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_335 = res_335;
if ((!f_at_kind_323(F->up, ((rt_int)1LL)))) {
f_perror_329(F->up, rt_g_lit("expected an identifier", 22));
}
F->up->tpos_114 = rt_add(G_NV(F->up->tpos_114), ((rt_int)1LL));
(*F->res_335) = (*(P110)rt_nil_check(({ A109 ix1600 = F->up->toks_112; ix1600.p[rt_index(rt_sub(G_NV(F->up->tpos_114), ((rt_int)1LL)), ix1600.lo, ix1600.hi) - ix1600.lo]; }))).s_;
goto ret_;
ret_:

  return;
}

static void f_name_node_338(struct f_greenc_1fr *up_, P174 *res_337) {
  struct f_name_node_338fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_337 = res_337;
F->x_1601 = NULL;
F->x_1601 = f_nn_310(F->up, ((rt_int)5LL), f_cur_line_317(F->up));
f_expect_id_336(F->up, &(*(P174)rt_nil_check(F->x_1601)).name_);
(*F->res_337) = F->x_1601;
goto ret_;
ret_:

  return;
}

static void f_id_list_340(struct f_greenc_1fr *up_, P174 *res_339) {
  struct f_id_list_340fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_339 = res_339;
F->head_1602 = NULL;
F->tail_1603 = NULL;
F->x_1604 = NULL;
f_name_node_338(F->up, &F->x_1604);
f_append_314(F->up, &F->head_1602, &F->tail_1603, F->x_1604);
while (f_at_op_321(F->up, rt_g_lit(",", 1))) {
f_skip_330(F->up);
f_name_node_338(F->up, &F->x_1604);
f_append_314(F->up, &F->head_1602, &F->tail_1603, F->x_1604);
}
L_end_1605: ;
(*F->res_339) = F->head_1602;
goto ret_;
ret_:

  return;
}

static P174 f_binop_345(struct f_greenc_1fr *up_, P140 op_341, P174 l_342, P174 r_343, rt_int line_344) {
  struct f_binop_345fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->op_341 = op_341;
F->l_342 = l_342;
F->r_343 = r_343;
F->line_344 = line_344;
F->x_1606 = NULL;
F->x_1606 = f_nn_310(F->up, ((rt_int)7LL), F->line_344);
(*(P174)rt_nil_check(F->x_1606)).name_ = F->op_341;
(*(P174)rt_nil_check(F->x_1606)).a_ = F->l_342;
(*(P174)rt_nil_check(F->x_1606)).b_ = F->r_343;
F->result_ = F->x_1606;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_expr_347(struct f_greenc_1fr *up_, P174 *res_346) {
  struct f_expr_347fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_346 = res_346;
F->l_1607 = NULL;
F->r_1608 = NULL;
F->op_1609 = NULL;
F->first_op_1610 = NULL;
F->line_1611 = INT64_MIN;
F->short_1612 = INT_MIN;
F->short_1612 = 0;
F->first_short_1613 = INT_MIN;
F->first_short_1613 = 0;
f_relation_351(F->up, &F->l_1607);
while (((f_at_kw_319(F->up, rt_g_lit("AND", 3)) || f_at_kw_319(F->up, rt_g_lit("OR", 2))) || f_at_kw_319(F->up, rt_g_lit("XOR", 3)))) {
F->op_1609 = (*(P110)rt_nil_check(({ A109 ix1615 = F->up->toks_112; ix1615.p[rt_index(G_NV(F->up->tpos_114), ix1615.lo, ix1615.hi) - ix1615.lo]; }))).s_;
F->line_1611 = f_cur_line_317(F->up);
f_skip_330(F->up);
F->short_1612 = 0;
if ((eq_rt_gstr((*(P140)rt_nil_check(F->op_1609)), rt_g_lit("AND", 3)) && f_at_kw_319(F->up, rt_g_lit("THEN", 4)))) {
f_skip_330(F->up);
F->short_1612 = 1;
} else if ((eq_rt_gstr((*(P140)rt_nil_check(F->op_1609)), rt_g_lit("OR", 2)) && f_at_kw_319(F->up, rt_g_lit("ELSE", 4)))) {
f_skip_330(F->up);
F->short_1612 = 1;
}
if ((F->first_op_1610 == NULL)) {
F->first_op_1610 = F->op_1609;
F->first_short_1613 = G_NV(F->short_1612);
} else if (((!eq_rt_gstr((*(P140)rt_nil_check(F->first_op_1610)), (*(P140)rt_nil_check(F->op_1609)))) || (G_NV(F->first_short_1613) != G_NV(F->short_1612)))) {
f_fail_257(F->up, G_NV(F->line_1611), rt_g_lit("logical operators of different kinds are not mixed without parentheses (RM79 4.4)", 81));
}
f_relation_351(F->up, &F->r_1608);
F->l_1607 = f_binop_345(F->up, F->op_1609, F->l_1607, F->r_1608, G_NV(F->line_1611));
if (G_NV(F->short_1612)) {
(*(P174)rt_nil_check(F->l_1607)).ival_ = ((rt_int)1LL);
}
}
L_end_1614: ;
(*F->res_346) = F->l_1607;
goto ret_;
ret_:

  return;
}

static int f_is_rel_349(struct f_greenc_1fr *up_, rt_gstr s_348) {
  struct f_is_rel_349fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_348 = cp_rt_gstr(s_348);
F->result_ = (((((eq_rt_gstr(F->s_348, rt_g_lit("=", 1)) || eq_rt_gstr(F->s_348, rt_g_lit("/=", 2))) || eq_rt_gstr(F->s_348, rt_g_lit("<", 1))) || eq_rt_gstr(F->s_348, rt_g_lit("<=", 2))) || eq_rt_gstr(F->s_348, rt_g_lit(">", 1))) || eq_rt_gstr(F->s_348, rt_g_lit(">=", 2)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_relation_351(struct f_greenc_1fr *up_, P174 *res_350) {
  struct f_relation_351fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_350 = res_350;
F->l_1616 = NULL;
F->r_1617 = NULL;
F->lo_1618 = NULL;
F->hi_1619 = NULL;
F->t_1620 = NULL;
F->op_1621 = NULL;
F->line_1622 = INT64_MIN;
F->line_1622 = f_cur_line_317(F->up);
F->neg_1623 = INT_MIN;
F->neg_1623 = 0;
f_simple_expr_355(F->up, &F->l_1616);
if ((f_at_kind_323(F->up, ((rt_int)3LL)) && f_is_rel_349(F->up, (*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1625 = F->up->toks_112; ix1625.p[rt_index(G_NV(F->up->tpos_114), ix1625.lo, ix1625.hi) - ix1625.lo]; }))).s_))))) {
F->op_1621 = (*(P110)rt_nil_check(({ A109 ix1626 = F->up->toks_112; ix1626.p[rt_index(G_NV(F->up->tpos_114), ix1626.lo, ix1626.hi) - ix1626.lo]; }))).s_;
f_skip_330(F->up);
f_simple_expr_355(F->up, &F->r_1617);
F->l_1616 = f_binop_345(F->up, F->op_1621, F->l_1616, F->r_1617, G_NV(F->line_1622));
(*F->res_350) = F->l_1616;
goto ret_;
}
if (((f_at_kw_319(F->up, rt_g_lit("NOT", 3)) && (f_kind_at_325(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_327(F->up, ((rt_int)1LL)), rt_g_lit("IN", 2)))) {
f_skip_330(F->up);
F->neg_1623 = 1;
}
if (f_at_kw_319(F->up, rt_g_lit("IN", 2))) {
f_skip_330(F->up);
f_simple_expr_355(F->up, &F->lo_1618);
if (f_at_op_321(F->up, rt_g_lit("..", 2))) {
f_skip_330(F->up);
f_simple_expr_355(F->up, &F->hi_1619);
F->t_1620 = f_nn_310(F->up, ((rt_int)14LL), G_NV(F->line_1622));
(*(P174)rt_nil_check(F->t_1620)).a_ = F->lo_1618;
(*(P174)rt_nil_check(F->t_1620)).b_ = F->hi_1619;
} else if (((G_NV((*(P174)rt_nil_check(F->lo_1618)).kind_) == ((rt_int)5LL)) || (G_NV((*(P174)rt_nil_check(F->lo_1618)).kind_) == ((rt_int)9LL)))) {
F->t_1620 = f_nn_310(F->up, ((rt_int)80LL), G_NV(F->line_1622));
(*(P174)rt_nil_check(F->t_1620)).name_ = (*(P174)rt_nil_check(F->lo_1618)).name_;
if ((G_NV((*(P174)rt_nil_check(F->lo_1618)).kind_) == ((rt_int)9LL))) {
(*(P174)rt_nil_check(F->t_1620)).tag_ = f_mk_236(F->up, f_path_of_353(F->up, (*(P174)rt_nil_check(F->lo_1618)).a_));
}
if (f_at_kw_319(F->up, rt_g_lit("RANGE", 5))) {
f_skip_330(F->up);
F->r_1617 = f_nn_310(F->up, ((rt_int)14LL), G_NV(F->line_1622));
f_simple_expr_355(F->up, &(*(P174)rt_nil_check(F->r_1617)).a_);
f_expect_op_334(F->up, rt_g_lit("..", 2));
f_simple_expr_355(F->up, &(*(P174)rt_nil_check(F->r_1617)).b_);
(*(P174)rt_nil_check(F->t_1620)).a_ = F->r_1617;
(*(P174)rt_nil_check(F->t_1620)).flag_ = ((rt_int)1LL);
} else if ((f_at_kw_319(F->up, rt_g_lit("DIGITS", 6)) || f_at_kw_319(F->up, rt_g_lit("DELTA", 5)))) {
f_skip_330(F->up);
f_simple_expr_355(F->up, &(*(P174)rt_nil_check(F->t_1620)).b_);
(*(P174)rt_nil_check(F->t_1620)).flag_ = ((rt_int)3LL);
}
} else {
f_perror_329(F->up, rt_g_lit("membership is in a range or a type mark (RM79 4.5.2)", 52));
}
F->op_1621 = f_mk_236(F->up, rt_g_lit("IN", 2));
F->l_1616 = f_binop_345(F->up, F->op_1621, F->l_1616, F->t_1620, G_NV(F->line_1622));
if (G_NV(F->neg_1623)) {
F->t_1620 = f_nn_310(F->up, ((rt_int)6LL), G_NV(F->line_1622));
(*(P174)rt_nil_check(F->t_1620)).name_ = f_mk_236(F->up, rt_g_lit("NOT", 3));
(*(P174)rt_nil_check(F->t_1620)).a_ = F->l_1616;
(*F->res_350) = F->t_1620;
goto ret_;
}
}
(*F->res_350) = F->l_1616;
goto ret_;
ret_:

  return;
}

static rt_gstr f_path_of_353(struct f_greenc_1fr *up_, P174 e_352) {
  struct f_path_of_353fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_352 = e_352;
if ((G_NV((*(P174)rt_nil_check(F->e_352)).kind_) == ((rt_int)9LL))) {
F->result_ = cat_rt_gstr(cat_rt_gstr(f_path_of_353(F->up, (*(P174)rt_nil_check(F->e_352)).a_), one_rt_gstr(46)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_352)).name_)));
goto ret_;
}
F->result_ = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_352)).name_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_simple_expr_355(struct f_greenc_1fr *up_, P174 *res_354) {
  struct f_simple_expr_355fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_354 = res_354;
F->l_1627 = NULL;
F->r_1628 = NULL;
F->op_1629 = NULL;
F->line_1630 = INT64_MIN;
F->line_1630 = f_cur_line_317(F->up);
if (((f_at_op_321(F->up, rt_g_lit("+", 1)) || f_at_op_321(F->up, rt_g_lit("-", 1))) || f_at_kw_319(F->up, rt_g_lit("NOT", 3)))) {
F->op_1629 = (*(P110)rt_nil_check(({ A109 ix1631 = F->up->toks_112; ix1631.p[rt_index(G_NV(F->up->tpos_114), ix1631.lo, ix1631.hi) - ix1631.lo]; }))).s_;
f_skip_330(F->up);
f_term_357(F->up, &F->r_1628);
F->l_1627 = f_nn_310(F->up, ((rt_int)6LL), G_NV(F->line_1630));
(*(P174)rt_nil_check(F->l_1627)).name_ = F->op_1629;
(*(P174)rt_nil_check(F->l_1627)).a_ = F->r_1628;
} else {
f_term_357(F->up, &F->l_1627);
}
while (((f_at_op_321(F->up, rt_g_lit("+", 1)) || f_at_op_321(F->up, rt_g_lit("-", 1))) || f_at_op_321(F->up, rt_g_lit("&", 1)))) {
F->op_1629 = (*(P110)rt_nil_check(({ A109 ix1633 = F->up->toks_112; ix1633.p[rt_index(G_NV(F->up->tpos_114), ix1633.lo, ix1633.hi) - ix1633.lo]; }))).s_;
f_skip_330(F->up);
f_term_357(F->up, &F->r_1628);
F->l_1627 = f_binop_345(F->up, F->op_1629, F->l_1627, F->r_1628, G_NV(F->line_1630));
}
L_end_1632: ;
(*F->res_354) = F->l_1627;
goto ret_;
ret_:

  return;
}

static void f_term_357(struct f_greenc_1fr *up_, P174 *res_356) {
  struct f_term_357fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_356 = res_356;
F->l_1634 = NULL;
F->r_1635 = NULL;
F->op_1636 = NULL;
F->line_1637 = INT64_MIN;
F->line_1637 = f_cur_line_317(F->up);
f_factor_359(F->up, &F->l_1634);
while (((f_at_op_321(F->up, rt_g_lit("*", 1)) || f_at_op_321(F->up, rt_g_lit("/", 1))) || f_at_kw_319(F->up, rt_g_lit("MOD", 3)))) {
F->op_1636 = (*(P110)rt_nil_check(({ A109 ix1639 = F->up->toks_112; ix1639.p[rt_index(G_NV(F->up->tpos_114), ix1639.lo, ix1639.hi) - ix1639.lo]; }))).s_;
f_skip_330(F->up);
f_factor_359(F->up, &F->r_1635);
F->l_1634 = f_binop_345(F->up, F->op_1636, F->l_1634, F->r_1635, G_NV(F->line_1637));
}
L_end_1638: ;
(*F->res_356) = F->l_1634;
goto ret_;
ret_:

  return;
}

static void f_factor_359(struct f_greenc_1fr *up_, P174 *res_358) {
  struct f_factor_359fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_358 = res_358;
F->l_1640 = NULL;
F->r_1641 = NULL;
F->op_1642 = NULL;
F->line_1643 = INT64_MIN;
F->line_1643 = f_cur_line_317(F->up);
f_primary_361(F->up, &F->l_1640);
if (f_at_op_321(F->up, rt_g_lit("**", 2))) {
F->op_1642 = (*(P110)rt_nil_check(({ A109 ix1644 = F->up->toks_112; ix1644.p[rt_index(G_NV(F->up->tpos_114), ix1644.lo, ix1644.hi) - ix1644.lo]; }))).s_;
f_skip_330(F->up);
f_primary_361(F->up, &F->r_1641);
F->l_1640 = f_binop_345(F->up, F->op_1642, F->l_1640, F->r_1641, G_NV(F->line_1643));
}
(*F->res_358) = F->l_1640;
goto ret_;
ret_:

  return;
}

static void f_primary_361(struct f_greenc_1fr *up_, P174 *res_360) {
  struct f_primary_361fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_360 = res_360;
F->x_1645 = NULL;
F->line_1646 = INT64_MIN;
F->line_1646 = f_cur_line_317(F->up);
if (f_at_kind_323(F->up, ((rt_int)4LL))) {
F->x_1645 = f_nn_310(F->up, ((rt_int)1LL), G_NV(F->line_1646));
(*(P174)rt_nil_check(F->x_1645)).ival_ = G_NV((*(P110)rt_nil_check(({ A109 ix1647 = F->up->toks_112; ix1647.p[rt_index(G_NV(F->up->tpos_114), ix1647.lo, ix1647.hi) - ix1647.lo]; }))).ival_);
(*(P174)rt_nil_check(F->x_1645)).name_ = (*(P110)rt_nil_check(({ A109 ix1648 = F->up->toks_112; ix1648.p[rt_index(G_NV(F->up->tpos_114), ix1648.lo, ix1648.hi) - ix1648.lo]; }))).s_;
f_skip_330(F->up);
(*F->res_360) = F->x_1645;
goto ret_;
}
if (f_at_kind_323(F->up, ((rt_int)5LL))) {
F->x_1645 = f_nn_310(F->up, ((rt_int)2LL), G_NV(F->line_1646));
(*(P174)rt_nil_check(F->x_1645)).name_ = (*(P110)rt_nil_check(({ A109 ix1649 = F->up->toks_112; ix1649.p[rt_index(G_NV(F->up->tpos_114), ix1649.lo, ix1649.hi) - ix1649.lo]; }))).s_;
f_skip_330(F->up);
(*F->res_360) = F->x_1645;
goto ret_;
}
if (f_at_kind_323(F->up, ((rt_int)6LL))) {
F->x_1645 = f_nn_310(F->up, ((rt_int)3LL), G_NV(F->line_1646));
(*(P174)rt_nil_check(F->x_1645)).name_ = (*(P110)rt_nil_check(({ A109 ix1650 = F->up->toks_112; ix1650.p[rt_index(G_NV(F->up->tpos_114), ix1650.lo, ix1650.hi) - ix1650.lo]; }))).s_;
f_skip_330(F->up);
(*F->res_360) = F->x_1645;
goto ret_;
}
if (f_at_kw_319(F->up, rt_g_lit("NULL", 4))) {
f_skip_330(F->up);
F->x_1645 = f_nn_310(F->up, ((rt_int)4LL), G_NV(F->line_1646));
(*F->res_360) = F->x_1645;
goto ret_;
}
if (f_at_kw_319(F->up, rt_g_lit("NEW", 3))) {
f_skip_330(F->up);
F->x_1645 = f_nn_310(F->up, ((rt_int)11LL), G_NV(F->line_1646));
f_expect_id_336(F->up, &(*(P174)rt_nil_check(F->x_1645)).name_);
if (f_at_op_321(F->up, rt_g_lit("(", 1))) {
f_agg_or_paren_363(F->up, &(*(P174)rt_nil_check(F->x_1645)).a_);
}
(*F->res_360) = F->x_1645;
goto ret_;
}
if (f_at_op_321(F->up, rt_g_lit("(", 1))) {
f_agg_or_paren_363(F->up, &F->x_1645);
(*F->res_360) = F->x_1645;
goto ret_;
}
if (f_at_kind_323(F->up, ((rt_int)1LL))) {
f_name_p_368(F->up, &F->x_1645);
(*F->res_360) = F->x_1645;
goto ret_;
}
f_perror_329(F->up, rt_g_lit("expected an expression", 22));
(*F->res_360) = NULL;
goto ret_;
ret_:

  return;
}

static void f_agg_or_paren_363(struct f_greenc_1fr *up_, P174 *res_362) {
  struct f_agg_or_paren_363fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_362 = res_362;
F->line_1651 = INT64_MIN;
F->line_1651 = f_cur_line_317(F->up);
F->items_1652 = NULL;
F->itail_1653 = NULL;
F->it_1654 = NULL;
F->first_1655 = NULL;
F->keys_1656 = NULL;
F->ktail_1657 = NULL;
F->lab_1658 = NULL;
F->x_1659 = NULL;
F->more_1660 = INT_MIN;
F->more_1660 = 1;
f_expect_op_334(F->up, rt_g_lit("(", 1));
while (G_NV(F->more_1660)) {
F->it_1654 = f_nn_310(F->up, ((rt_int)13LL), G_NV(F->line_1651));
if (f_at_kw_319(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_330(F->up);
f_expect_op_334(F->up, rt_g_lit("=>", 2));
F->lab_1658 = f_nn_310(F->up, ((rt_int)61LL), G_NV(F->line_1651));
(*(P174)rt_nil_check(F->lab_1658)).flag_ = ((rt_int)1LL);
(*(P174)rt_nil_check(F->it_1654)).a_ = F->lab_1658;
f_expr_347(F->up, &(*(P174)rt_nil_check(F->it_1654)).b_);
} else {
f_expr_347(F->up, &F->first_1655);
if (((f_at_op_321(F->up, rt_g_lit("..", 2)) || f_at_op_321(F->up, rt_g_lit("|", 1))) || f_at_op_321(F->up, rt_g_lit("=>", 2)))) {
F->keys_1656 = NULL;
F->ktail_1657 = NULL;
for (;;) {
F->lab_1658 = f_nn_310(F->up, ((rt_int)61LL), G_NV(F->line_1651));
(*(P174)rt_nil_check(F->lab_1658)).a_ = F->first_1655;
if (f_at_op_321(F->up, rt_g_lit("..", 2))) {
f_skip_330(F->up);
f_simple_expr_355(F->up, &(*(P174)rt_nil_check(F->lab_1658)).b_);
}
f_append_314(F->up, &F->keys_1656, &F->ktail_1657, F->lab_1658);
if ((!f_at_op_321(F->up, rt_g_lit("|", 1)))) {
goto L_end_1662;
}
f_skip_330(F->up);
f_simple_expr_355(F->up, &F->first_1655);
}
L_end_1662: ;
f_expect_op_334(F->up, rt_g_lit("=>", 2));
(*(P174)rt_nil_check(F->it_1654)).a_ = F->keys_1656;
f_expr_347(F->up, &(*(P174)rt_nil_check(F->it_1654)).b_);
} else {
(*(P174)rt_nil_check(F->it_1654)).b_ = F->first_1655;
}
}
f_append_314(F->up, &F->items_1652, &F->itail_1653, F->it_1654);
F->more_1660 = f_at_op_321(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1660)) {
f_skip_330(F->up);
}
}
L_end_1661: ;
f_expect_op_334(F->up, rt_g_lit(")", 1));
if ((((*(P174)rt_nil_check(F->items_1652)).next_ == NULL) && ((*(P174)rt_nil_check(F->items_1652)).a_ == NULL))) {
F->x_1659 = f_nn_310(F->up, ((rt_int)15LL), G_NV(F->line_1651));
(*(P174)rt_nil_check(F->x_1659)).a_ = (*(P174)rt_nil_check(F->items_1652)).b_;
(*F->res_362) = F->x_1659;
goto ret_;
}
F->x_1659 = f_nn_310(F->up, ((rt_int)12LL), G_NV(F->line_1651));
(*(P174)rt_nil_check(F->x_1659)).a_ = F->items_1652;
(*F->res_362) = F->x_1659;
goto ret_;
ret_:

  return;
}

static int f_choice_token_365(struct f_greenc_1fr *up_, P110 t_364) {
  struct f_choice_token_365fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_364 = t_364;
if ((G_NV((*(P110)rt_nil_check(F->t_364)).kind_) == ((rt_int)3LL))) {
F->result_ = (eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(F->t_364)).s_)), rt_g_lit("=>", 2)) || eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(F->t_364)).s_)), rt_g_lit("|", 1)));
goto ret_;
}
F->result_ = ((G_NV((*(P110)rt_nil_check(F->t_364)).kind_) == ((rt_int)2LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(F->t_364)).s_)), rt_g_lit("OTHERS", 6)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_aggregate_ahead_366(struct f_greenc_1fr *up_) {
  struct f_aggregate_ahead_366fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_1663 = INT64_MIN;
F->d_1663 = ((rt_int)0LL);
F->k_1664 = INT64_MIN;
F->k_1664 = ((rt_int)0LL);
for (;;) {
if ((rt_add(G_NV(F->up->tpos_114), G_NV(F->k_1664)) > G_NV(F->up->ntoks_113))) {
F->result_ = 0;
goto ret_;
}
{
F->t_1667 = NULL;
F->t_1667 = ({ A109 ix1668 = F->up->toks_112; ix1668.p[rt_index(rt_add(G_NV(F->up->tpos_114), G_NV(F->k_1664)), ix1668.lo, ix1668.hi) - ix1668.lo]; });
if (((G_NV((*(P110)rt_nil_check(F->t_1667)).kind_) == ((rt_int)3LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(F->t_1667)).s_)), rt_g_lit("(", 1)))) {
F->d_1663 = rt_add(G_NV(F->d_1663), ((rt_int)1LL));
} else if (((G_NV((*(P110)rt_nil_check(F->t_1667)).kind_) == ((rt_int)3LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(F->t_1667)).s_)), rt_g_lit(")", 1)))) {
F->d_1663 = rt_sub(G_NV(F->d_1663), ((rt_int)1LL));
if ((G_NV(F->d_1663) == ((rt_int)0LL))) {
F->result_ = 0;
goto ret_;
}
} else if (((G_NV(F->d_1663) == ((rt_int)1LL)) && f_choice_token_365(F->up, F->t_1667))) {
F->result_ = 1;
goto ret_;
} else if (((G_NV((*(P110)rt_nil_check(F->t_1667)).kind_) == ((rt_int)3LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(F->t_1667)).s_)), rt_g_lit(";", 1)))) {
F->result_ = 0;
goto ret_;
}

}
L_end_1666: ;
F->k_1664 = rt_add(G_NV(F->k_1664), ((rt_int)1LL));
}
L_end_1665: ;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_name_p_368(struct f_greenc_1fr *up_, P174 *res_367) {
  struct f_name_p_368fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_367 = res_367;
F->p_1669 = NULL;
F->x_1670 = NULL;
F->args_1671 = NULL;
F->atail_1672 = NULL;
F->lo_1673 = NULL;
F->r_1674 = NULL;
F->line_1675 = INT64_MIN;
F->line_1675 = f_cur_line_317(F->up);
F->more_1676 = INT_MIN;
f_name_node_338(F->up, &F->p_1669);
for (;;) {
if ((f_at_op_321(F->up, rt_g_lit("(", 1)) && f_aggregate_ahead_366(F->up))) {
F->x_1670 = f_nn_310(F->up, ((rt_int)8LL), G_NV(F->line_1675));
(*(P174)rt_nil_check(F->x_1670)).a_ = F->p_1669;
f_agg_or_paren_363(F->up, &(*(P174)rt_nil_check(F->x_1670)).b_);
(*(P174)rt_nil_check(F->x_1670)).flag_ = ((rt_int)9LL);
F->p_1669 = F->x_1670;
} else if (f_at_op_321(F->up, rt_g_lit("(", 1))) {
f_skip_330(F->up);
F->args_1671 = NULL;
F->atail_1672 = NULL;
if ((!f_at_op_321(F->up, rt_g_lit(")", 1)))) {
F->more_1676 = 1;
while (G_NV(F->more_1676)) {
{
F->formal_1680 = NULL;
F->mark_1681 = INT64_MIN;
F->mark_1681 = ((rt_int)0LL);
if (((f_at_kind_323(F->up, ((rt_int)1LL)) && (f_kind_at_325(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (((eq_rt_gstr(f_text_at_327(F->up, ((rt_int)1LL)), rt_g_lit(":=", 2)) || eq_rt_gstr(f_text_at_327(F->up, ((rt_int)1LL)), rt_g_lit("=:", 2))) || eq_rt_gstr(f_text_at_327(F->up, ((rt_int)1LL)), rt_g_lit(":=:", 3))) || eq_rt_gstr(f_text_at_327(F->up, ((rt_int)1LL)), rt_g_lit("=>", 2))))) {
F->formal_1680 = (*(P110)rt_nil_check(({ A109 ix1682 = F->up->toks_112; ix1682.p[rt_index(G_NV(F->up->tpos_114), ix1682.lo, ix1682.hi) - ix1682.lo]; }))).s_;
if (eq_rt_gstr(f_text_at_327(F->up, ((rt_int)1LL)), rt_g_lit(":=", 2))) {
F->mark_1681 = ((rt_int)1LL);
} else if (eq_rt_gstr(f_text_at_327(F->up, ((rt_int)1LL)), rt_g_lit("=:", 2))) {
F->mark_1681 = ((rt_int)3LL);
} else if (eq_rt_gstr(f_text_at_327(F->up, ((rt_int)1LL)), rt_g_lit(":=:", 3))) {
F->mark_1681 = ((rt_int)2LL);
} else {
F->mark_1681 = ((rt_int)4LL);
}
f_skip_330(F->up);
f_skip_330(F->up);
}
f_expr_347(F->up, &F->lo_1673);
if (f_at_op_321(F->up, rt_g_lit("..", 2))) {
f_skip_330(F->up);
F->r_1674 = f_nn_310(F->up, ((rt_int)14LL), G_NV(F->line_1675));
(*(P174)rt_nil_check(F->r_1674)).a_ = F->lo_1673;
f_simple_expr_355(F->up, &(*(P174)rt_nil_check(F->r_1674)).b_);
F->lo_1673 = F->r_1674;
}
(*(P174)rt_nil_check(F->lo_1673)).formal_ = F->formal_1680;
(*(P174)rt_nil_check(F->lo_1673)).flag_ = G_NV(F->mark_1681);
f_append_314(F->up, &F->args_1671, &F->atail_1672, F->lo_1673);

}
L_end_1679: ;
F->more_1676 = f_at_op_321(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1676)) {
f_skip_330(F->up);
}
}
L_end_1678: ;
}
f_expect_op_334(F->up, rt_g_lit(")", 1));
F->x_1670 = f_nn_310(F->up, ((rt_int)8LL), G_NV(F->line_1675));
(*(P174)rt_nil_check(F->x_1670)).a_ = F->p_1669;
(*(P174)rt_nil_check(F->x_1670)).b_ = F->args_1671;
F->p_1669 = F->x_1670;
} else if (f_at_op_321(F->up, rt_g_lit(".", 1))) {
f_skip_330(F->up);
F->x_1670 = f_nn_310(F->up, ((rt_int)9LL), G_NV(F->line_1675));
(*(P174)rt_nil_check(F->x_1670)).a_ = F->p_1669;
if (f_at_kw_319(F->up, rt_g_lit("ALL", 3))) {
f_skip_330(F->up);
(*(P174)rt_nil_check(F->x_1670)).name_ = f_mk_236(F->up, rt_g_lit("ALL", 3));
} else {
f_expect_id_336(F->up, &(*(P174)rt_nil_check(F->x_1670)).name_);
}
F->p_1669 = F->x_1670;
} else if (f_at_op_321(F->up, rt_g_lit("'", 1))) {
f_skip_330(F->up);
F->x_1670 = f_nn_310(F->up, ((rt_int)10LL), G_NV(F->line_1675));
(*(P174)rt_nil_check(F->x_1670)).a_ = F->p_1669;
(*(P174)rt_nil_check(F->x_1670)).name_ = (*(P110)rt_nil_check(({ A109 ix1683 = F->up->toks_112; ix1683.p[rt_index(G_NV(F->up->tpos_114), ix1683.lo, ix1683.hi) - ix1683.lo]; }))).s_;
f_skip_330(F->up);
if (f_at_op_321(F->up, rt_g_lit("(", 1))) {
f_skip_330(F->up);
f_expr_347(F->up, &(*(P174)rt_nil_check(F->x_1670)).b_);
f_expect_op_334(F->up, rt_g_lit(")", 1));
}
F->p_1669 = F->x_1670;
} else {
(*F->res_367) = F->p_1669;
goto ret_;
}
}
L_end_1677: ;
ret_:

  return;
}

static void f_component_list_370(struct f_greenc_1fr *up_, P174 *res_369) {
  struct f_component_list_370fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_369 = res_369;
F->comps_1684 = NULL;
F->ctail_1685 = NULL;
F->names_1686 = NULL;
F->st_1687 = NULL;
F->def_1688 = NULL;
F->cm_1689 = NULL;
F->v_1690 = NULL;
F->arm_1691 = NULL;
F->atail_1692 = NULL;
F->labs_1693 = NULL;
F->ltail_1694 = NULL;
F->l_1695 = NULL;
F->is_c_1696 = INT_MIN;
for (;;) {
if (f_at_kw_319(F->up, rt_g_lit("NULL", 4))) {
f_skip_330(F->up);
f_expect_op_334(F->up, rt_g_lit(";", 1));
} else if (f_at_kw_319(F->up, rt_g_lit("CASE", 4))) {
F->v_1690 = f_nn_310(F->up, ((rt_int)23LL), f_cur_line_317(F->up));
f_skip_330(F->up);
f_name_node_338(F->up, &(*(P174)rt_nil_check(F->v_1690)).a_);
f_expect_kw_332(F->up, rt_g_lit("OF", 2));
F->atail_1692 = NULL;
while (f_at_kw_319(F->up, rt_g_lit("WHEN", 4))) {
f_skip_330(F->up);
F->arm_1691 = f_nn_310(F->up, ((rt_int)60LL), f_cur_line_317(F->up));
F->labs_1693 = NULL;
F->ltail_1694 = NULL;
for (;;) {
if (f_at_kw_319(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_330(F->up);
(*(P174)rt_nil_check(F->arm_1691)).flag_ = ((rt_int)1LL);
} else {
F->l_1695 = f_nn_310(F->up, ((rt_int)61LL), f_cur_line_317(F->up));
f_simple_expr_355(F->up, &(*(P174)rt_nil_check(F->l_1695)).a_);
if (f_at_op_321(F->up, rt_g_lit("..", 2))) {
f_skip_330(F->up);
f_simple_expr_355(F->up, &(*(P174)rt_nil_check(F->l_1695)).b_);
}
f_append_314(F->up, &F->labs_1693, &F->ltail_1694, F->l_1695);
}
if ((!f_at_op_321(F->up, rt_g_lit("|", 1)))) {
goto L_end_1699;
}
f_skip_330(F->up);
}
L_end_1699: ;
f_expect_op_334(F->up, rt_g_lit("=>", 2));
(*(P174)rt_nil_check(F->arm_1691)).a_ = F->labs_1693;
f_component_list_370(F->up, &(*(P174)rt_nil_check(F->arm_1691)).b_);
f_append_314(F->up, &(*(P174)rt_nil_check(F->v_1690)).b_, &F->atail_1692, F->arm_1691);
}
L_end_1698: ;
f_expect_kw_332(F->up, rt_g_lit("END", 3));
f_expect_kw_332(F->up, rt_g_lit("CASE", 4));
f_expect_op_334(F->up, rt_g_lit(";", 1));
f_append_314(F->up, &F->comps_1684, &F->ctail_1685, F->v_1690);
} else if (f_at_kind_323(F->up, ((rt_int)1LL))) {
f_id_list_340(F->up, &F->names_1686);
f_expect_op_334(F->up, rt_g_lit(":", 1));
F->is_c_1696 = 0;
if (f_at_kw_319(F->up, rt_g_lit("CONSTANT", 8))) {
f_skip_330(F->up);
F->is_c_1696 = 1;
}
f_type_spec_376(F->up, &F->st_1687);
F->def_1688 = NULL;
if (f_at_op_321(F->up, rt_g_lit(":=", 2))) {
f_skip_330(F->up);
f_expr_347(F->up, &F->def_1688);
}
f_expect_op_334(F->up, rt_g_lit(";", 1));
while ((F->names_1686 != NULL)) {
F->cm_1689 = f_nn_310(F->up, ((rt_int)63LL), G_NV((*(P174)rt_nil_check(F->names_1686)).line_));
(*(P174)rt_nil_check(F->cm_1689)).name_ = (*(P174)rt_nil_check(F->names_1686)).name_;
(*(P174)rt_nil_check(F->cm_1689)).a_ = F->st_1687;
(*(P174)rt_nil_check(F->cm_1689)).b_ = F->def_1688;
if (G_NV(F->is_c_1696)) {
(*(P174)rt_nil_check(F->cm_1689)).flag_ = ((rt_int)1LL);
}
f_append_314(F->up, &F->comps_1684, &F->ctail_1685, F->cm_1689);
F->names_1686 = (*(P174)rt_nil_check(F->names_1686)).next_;
}
L_end_1700: ;
} else {
(*F->res_369) = F->comps_1684;
goto ret_;
}
}
L_end_1697: ;
ret_:

  return;
}

static void f_discrete_range_p_372(struct f_greenc_1fr *up_, P174 *res_371) {
  struct f_discrete_range_p_372fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_371 = res_371;
F->lo_1701 = NULL;
F->r_1702 = NULL;
F->line_1703 = INT64_MIN;
F->line_1703 = f_cur_line_317(F->up);
if (((f_at_kind_323(F->up, ((rt_int)1LL)) && (f_kind_at_325(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_327(F->up, ((rt_int)1LL)), rt_g_lit("RANGE", 5)))) {
f_subtype_ind_374(F->up, &(*F->res_371));
goto ret_;
}
if ((((((f_at_kind_323(F->up, ((rt_int)1LL)) && (f_kind_at_325(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && eq_rt_gstr(f_text_at_327(F->up, ((rt_int)1LL)), rt_g_lit(".", 1))) && (f_kind_at_325(F->up, ((rt_int)2LL)) == ((rt_int)1LL))) && (f_kind_at_325(F->up, ((rt_int)3LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_327(F->up, ((rt_int)3LL)), rt_g_lit("RANGE", 5)))) {
f_subtype_ind_374(F->up, &(*F->res_371));
goto ret_;
}
f_simple_expr_355(F->up, &F->lo_1701);
if (f_at_op_321(F->up, rt_g_lit("..", 2))) {
f_skip_330(F->up);
F->r_1702 = f_nn_310(F->up, ((rt_int)14LL), G_NV(F->line_1703));
(*(P174)rt_nil_check(F->r_1702)).a_ = F->lo_1701;
f_simple_expr_355(F->up, &(*(P174)rt_nil_check(F->r_1702)).b_);
(*F->res_371) = F->r_1702;
goto ret_;
}
(*F->res_371) = F->lo_1701;
goto ret_;
ret_:

  return;
}

static void f_subtype_ind_374(struct f_greenc_1fr *up_, P174 *res_373) {
  struct f_subtype_ind_374fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_373 = res_373;
F->f_1704 = NULL;
F->x_1705 = NULL;
F->r_1706 = NULL;
F->args_1707 = NULL;
F->atail_1708 = NULL;
F->lo_1709 = NULL;
F->line_1710 = INT64_MIN;
F->line_1710 = f_cur_line_317(F->up);
F->more_1711 = INT_MIN;
F->more_1711 = 1;
F->x_1705 = f_nn_310(F->up, ((rt_int)80LL), G_NV(F->line_1710));
f_expect_id_336(F->up, &(*(P174)rt_nil_check(F->x_1705)).name_);
while (f_at_op_321(F->up, rt_g_lit(".", 1))) {
f_skip_330(F->up);
if (((*(P174)rt_nil_check(F->x_1705)).tag_ == NULL)) {
(*(P174)rt_nil_check(F->x_1705)).tag_ = (*(P174)rt_nil_check(F->x_1705)).name_;
} else {
(*(P174)rt_nil_check(F->x_1705)).tag_ = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1705)).tag_)), one_rt_gstr(46)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1705)).name_))));
}
f_expect_id_336(F->up, &(*(P174)rt_nil_check(F->x_1705)).name_);
}
L_end_1712: ;
if (f_at_kw_319(F->up, rt_g_lit("RANGE", 5))) {
f_skip_330(F->up);
F->r_1706 = f_nn_310(F->up, ((rt_int)14LL), G_NV(F->line_1710));
f_simple_expr_355(F->up, &(*(P174)rt_nil_check(F->r_1706)).a_);
f_expect_op_334(F->up, rt_g_lit("..", 2));
f_simple_expr_355(F->up, &(*(P174)rt_nil_check(F->r_1706)).b_);
(*(P174)rt_nil_check(F->x_1705)).a_ = F->r_1706;
(*(P174)rt_nil_check(F->x_1705)).flag_ = ((rt_int)1LL);
} else if (f_at_op_321(F->up, rt_g_lit("(", 1))) {
f_skip_330(F->up);
while (G_NV(F->more_1711)) {
if (((f_at_kind_323(F->up, ((rt_int)1LL)) && (f_kind_at_325(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && eq_rt_gstr(f_text_at_327(F->up, ((rt_int)1LL)), rt_g_lit("=>", 2)))) {
f_expect_id_336(F->up, &F->f_1704);
f_skip_330(F->up);
f_expr_347(F->up, &F->lo_1709);
(*(P174)rt_nil_check(F->lo_1709)).formal_ = F->f_1704;
} else {
f_discrete_range_p_372(F->up, &F->lo_1709);
}
f_append_314(F->up, &F->args_1707, &F->atail_1708, F->lo_1709);
F->more_1711 = f_at_op_321(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1711)) {
f_skip_330(F->up);
}
}
L_end_1713: ;
f_expect_op_334(F->up, rt_g_lit(")", 1));
(*(P174)rt_nil_check(F->x_1705)).a_ = F->args_1707;
(*(P174)rt_nil_check(F->x_1705)).flag_ = ((rt_int)2LL);
} else if ((f_at_kw_319(F->up, rt_g_lit("DIGITS", 6)) || f_at_kw_319(F->up, rt_g_lit("DELTA", 5)))) {
f_skip_330(F->up);
f_simple_expr_355(F->up, &(*(P174)rt_nil_check(F->x_1705)).b_);
(*(P174)rt_nil_check(F->x_1705)).flag_ = ((rt_int)3LL);
if (f_at_kw_319(F->up, rt_g_lit("RANGE", 5))) {
f_skip_330(F->up);
F->r_1706 = f_nn_310(F->up, ((rt_int)14LL), G_NV(F->line_1710));
f_simple_expr_355(F->up, &(*(P174)rt_nil_check(F->r_1706)).a_);
f_expect_op_334(F->up, rt_g_lit("..", 2));
f_simple_expr_355(F->up, &(*(P174)rt_nil_check(F->r_1706)).b_);
(*(P174)rt_nil_check(F->x_1705)).a_ = F->r_1706;
}
}
(*F->res_373) = F->x_1705;
goto ret_;
ret_:

  return;
}

static void f_type_spec_376(struct f_greenc_1fr *up_, P174 *res_375) {
  struct f_type_spec_376fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_375 = res_375;
F->x_1714 = NULL;
if ((((((((f_at_op_321(F->up, rt_g_lit("(", 1)) || f_at_kw_319(F->up, rt_g_lit("ARRAY", 5))) || f_at_kw_319(F->up, rt_g_lit("RECORD", 6))) || f_at_kw_319(F->up, rt_g_lit("ACCESS", 6))) || f_at_kw_319(F->up, rt_g_lit("RANGE", 5))) || f_at_kw_319(F->up, rt_g_lit("DIGITS", 6))) || f_at_kw_319(F->up, rt_g_lit("DELTA", 5))) || f_at_kw_319(F->up, rt_g_lit("NEW", 3)))) {
f_type_def_378(F->up, &F->x_1714);
} else {
f_subtype_ind_374(F->up, &F->x_1714);
}
(*F->res_375) = F->x_1714;
goto ret_;
ret_:

  return;
}

static void f_type_def_378(struct f_greenc_1fr *up_, P174 *res_377) {
  struct f_type_def_378fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_377 = res_377;
F->x_1715 = NULL;
F->lits_1716 = NULL;
F->ltail_1717 = NULL;
F->l_1718 = NULL;
F->idx_1719 = NULL;
F->itail_1720 = NULL;
F->r_1721 = NULL;
F->comps_1722 = NULL;
F->ctail_1723 = NULL;
F->names_1724 = NULL;
F->st_1725 = NULL;
F->def_1726 = NULL;
F->cm_1727 = NULL;
F->line_1728 = INT64_MIN;
F->line_1728 = f_cur_line_317(F->up);
F->more_1729 = INT_MIN;
F->more_1729 = 1;
if (f_at_op_321(F->up, rt_g_lit("(", 1))) {
f_skip_330(F->up);
F->x_1715 = f_nn_310(F->up, ((rt_int)70LL), G_NV(F->line_1728));
while (G_NV(F->more_1729)) {
if (f_at_kind_323(F->up, ((rt_int)6LL))) {
F->l_1718 = f_nn_310(F->up, ((rt_int)3LL), G_NV(F->line_1728));
(*(P174)rt_nil_check(F->l_1718)).name_ = (*(P110)rt_nil_check(({ A109 ix1731 = F->up->toks_112; ix1731.p[rt_index(G_NV(F->up->tpos_114), ix1731.lo, ix1731.hi) - ix1731.lo]; }))).s_;
f_skip_330(F->up);
} else {
f_name_node_338(F->up, &F->l_1718);
}
f_append_314(F->up, &F->lits_1716, &F->ltail_1717, F->l_1718);
F->more_1729 = f_at_op_321(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1729)) {
f_skip_330(F->up);
}
}
L_end_1730: ;
f_expect_op_334(F->up, rt_g_lit(")", 1));
(*(P174)rt_nil_check(F->x_1715)).a_ = F->lits_1716;
(*F->res_377) = F->x_1715;
goto ret_;
}
if (f_at_kw_319(F->up, rt_g_lit("RANGE", 5))) {
f_skip_330(F->up);
F->x_1715 = f_nn_310(F->up, ((rt_int)71LL), G_NV(F->line_1728));
f_simple_expr_355(F->up, &(*(P174)rt_nil_check(F->x_1715)).a_);
f_expect_op_334(F->up, rt_g_lit("..", 2));
f_simple_expr_355(F->up, &(*(P174)rt_nil_check(F->x_1715)).b_);
(*F->res_377) = F->x_1715;
goto ret_;
}
if ((f_at_kw_319(F->up, rt_g_lit("DIGITS", 6)) || f_at_kw_319(F->up, rt_g_lit("DELTA", 5)))) {
F->x_1715 = f_nn_310(F->up, ((rt_int)72LL), G_NV(F->line_1728));
(*(P174)rt_nil_check(F->x_1715)).flag_ = ((rt_int)1LL);
if (f_at_kw_319(F->up, rt_g_lit("DELTA", 5))) {
(*(P174)rt_nil_check(F->x_1715)).flag_ = ((rt_int)2LL);
}
f_skip_330(F->up);
f_simple_expr_355(F->up, &(*(P174)rt_nil_check(F->x_1715)).a_);
if (f_at_kw_319(F->up, rt_g_lit("RANGE", 5))) {
f_skip_330(F->up);
F->r_1721 = f_nn_310(F->up, ((rt_int)14LL), G_NV(F->line_1728));
f_simple_expr_355(F->up, &(*(P174)rt_nil_check(F->r_1721)).a_);
f_expect_op_334(F->up, rt_g_lit("..", 2));
f_simple_expr_355(F->up, &(*(P174)rt_nil_check(F->r_1721)).b_);
(*(P174)rt_nil_check(F->x_1715)).b_ = F->r_1721;
}
(*F->res_377) = F->x_1715;
goto ret_;
}
if (f_at_kw_319(F->up, rt_g_lit("ARRAY", 5))) {
f_skip_330(F->up);
F->x_1715 = f_nn_310(F->up, ((rt_int)73LL), G_NV(F->line_1728));
f_expect_op_334(F->up, rt_g_lit("(", 1));
while (G_NV(F->more_1729)) {
if (((f_at_kind_323(F->up, ((rt_int)1LL)) && (f_kind_at_325(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (eq_rt_gstr(f_text_at_327(F->up, ((rt_int)1LL)), rt_g_lit(",", 1)) || eq_rt_gstr(f_text_at_327(F->up, ((rt_int)1LL)), rt_g_lit(")", 1))))) {
F->l_1718 = f_nn_310(F->up, ((rt_int)80LL), G_NV(F->line_1728));
f_expect_id_336(F->up, &(*(P174)rt_nil_check(F->l_1718)).name_);
(*(P174)rt_nil_check(F->x_1715)).flag_ = ((rt_int)1LL);
} else {
f_discrete_range_p_372(F->up, &F->l_1718);
if (((G_NV((*(P174)rt_nil_check(F->l_1718)).kind_) != ((rt_int)14LL)) && (G_NV((*(P174)rt_nil_check(F->l_1718)).kind_) != ((rt_int)80LL)))) {
f_perror_329(F->up, rt_g_lit("an index is a discrete range or a type mark (RM79 3.6)", 54));
}
}
f_append_314(F->up, &F->idx_1719, &F->itail_1720, F->l_1718);
F->more_1729 = f_at_op_321(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1729)) {
f_skip_330(F->up);
}
}
L_end_1732: ;
f_expect_op_334(F->up, rt_g_lit(")", 1));
f_expect_kw_332(F->up, rt_g_lit("OF", 2));
(*(P174)rt_nil_check(F->x_1715)).a_ = F->idx_1719;
f_type_spec_376(F->up, &(*(P174)rt_nil_check(F->x_1715)).b_);
(*F->res_377) = F->x_1715;
goto ret_;
}
if (f_at_kw_319(F->up, rt_g_lit("RECORD", 6))) {
f_skip_330(F->up);
F->x_1715 = f_nn_310(F->up, ((rt_int)74LL), G_NV(F->line_1728));
f_component_list_370(F->up, &(*(P174)rt_nil_check(F->x_1715)).a_);
f_expect_kw_332(F->up, rt_g_lit("END", 3));
f_expect_kw_332(F->up, rt_g_lit("RECORD", 6));
(*F->res_377) = F->x_1715;
goto ret_;
}
if (f_at_kw_319(F->up, rt_g_lit("ACCESS", 6))) {
f_skip_330(F->up);
F->x_1715 = f_nn_310(F->up, ((rt_int)75LL), G_NV(F->line_1728));
f_type_spec_376(F->up, &(*(P174)rt_nil_check(F->x_1715)).a_);
(*F->res_377) = F->x_1715;
goto ret_;
}
if (f_at_kw_319(F->up, rt_g_lit("NEW", 3))) {
f_skip_330(F->up);
F->x_1715 = f_nn_310(F->up, ((rt_int)76LL), G_NV(F->line_1728));
f_subtype_ind_374(F->up, &(*(P174)rt_nil_check(F->x_1715)).a_);
(*F->res_377) = F->x_1715;
goto ret_;
}
f_perror_329(F->up, rt_g_lit("expected a type definition", 26));
(*F->res_377) = NULL;
goto ret_;
ret_:

  return;
}

static void f_pragma_p_380(struct f_greenc_1fr *up_, P174 *res_379) {
  struct f_pragma_p_380fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_379 = res_379;
F->x_1733 = NULL;
F->a_1734 = NULL;
F->head_1735 = NULL;
F->tail_1736 = NULL;
F->x_1733 = f_nn_310(F->up, ((rt_int)56LL), f_cur_line_317(F->up));
f_expect_kw_332(F->up, rt_g_lit("PRAGMA", 6));
f_expect_id_336(F->up, &(*(P174)rt_nil_check(F->x_1733)).name_);
if (f_at_op_321(F->up, rt_g_lit("(", 1))) {
f_skip_330(F->up);
for (;;) {
if (f_at_kind_323(F->up, ((rt_int)1LL))) {
f_name_node_338(F->up, &F->a_1734);
} else if (((f_at_kind_323(F->up, ((rt_int)6LL)) || f_at_kind_323(F->up, ((rt_int)4LL))) || f_at_kind_323(F->up, ((rt_int)5LL)))) {
f_primary_361(F->up, &F->a_1734);
} else {
f_perror_329(F->up, rt_g_lit("a pragma argument is an identifier, a string or a number (RM79 2.7)", 67));
}
f_append_314(F->up, &F->head_1735, &F->tail_1736, F->a_1734);
if ((!f_at_op_321(F->up, rt_g_lit(",", 1)))) {
goto L_end_1737;
}
f_skip_330(F->up);
}
L_end_1737: ;
f_expect_op_334(F->up, rt_g_lit(")", 1));
}
f_expect_op_334(F->up, rt_g_lit(";", 1));
(*(P174)rt_nil_check(F->x_1733)).a_ = F->head_1735;
f_check_pragma_382(F->up, F->x_1733);
(*F->res_379) = F->x_1733;
ret_:

  return;
}

static void f_check_pragma_382(struct f_greenc_1fr *up_, P174 x_381) {
  struct f_check_pragma_382fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_381 = x_381;
F->p_1738 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_381)).name_)));
F->n_1739 = INT64_MIN;
F->n_1739 = f_list_len_316(F->up, (*(P174)rt_nil_check(F->x_381)).a_);
F->a_1740 = NULL;
F->a_1740 = (*(P174)rt_nil_check(F->x_381)).a_;
if ((eq_rt_gstr(F->p_1738, rt_g_lit("PAGE", 4)) || eq_rt_gstr(F->p_1738, rt_g_lit("INLINE", 6)))) {
if ((G_NV(F->n_1739) != ((rt_int)0LL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->x_381)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1738), rt_g_lit(" takes no argument (RM79 App. B)", 32)));
}
} else if (((((eq_rt_gstr(F->p_1738, rt_g_lit("LIST", 4)) || eq_rt_gstr(F->p_1738, rt_g_lit("OPTIMIZE", 8))) || eq_rt_gstr(F->p_1738, rt_g_lit("CREATION", 8))) || eq_rt_gstr(F->p_1738, rt_g_lit("INTERFACE", 9))) || eq_rt_gstr(F->p_1738, rt_g_lit("SYSTEM", 6)))) {
if (((G_NV(F->n_1739) != ((rt_int)1LL)) || (G_NV((*(P174)rt_nil_check(F->a_1740)).kind_) != ((rt_int)5LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->x_381)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1738), rt_g_lit(" takes one identifier (RM79 App. B)", 35)));
}
if (((eq_rt_gstr(F->p_1738, rt_g_lit("LIST", 4)) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1740)).name_)), rt_g_lit("ON", 2)))) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1740)).name_)), rt_g_lit("OFF", 3))))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->x_381)).line_), rt_g_lit("pragma LIST(ON) or LIST(OFF) (RM79 App. B)", 42));
} else if (((eq_rt_gstr(F->p_1738, rt_g_lit("OPTIMIZE", 8)) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1740)).name_)), rt_g_lit("TIME", 4)))) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1740)).name_)), rt_g_lit("SPACE", 5))))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->x_381)).line_), rt_g_lit("pragma OPTIMIZE(TIME) or OPTIMIZE(SPACE) (RM79 App. B)", 54));
} else if (((eq_rt_gstr(F->p_1738, rt_g_lit("CREATION", 8)) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1740)).name_)), rt_g_lit("STATIC", 6)))) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1740)).name_)), rt_g_lit("DYNAMIC", 7))))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->x_381)).line_), rt_g_lit("pragma CREATION(STATIC) or CREATION(DYNAMIC) (RM79 9.2)", 55));
}
if (eq_rt_gstr(F->p_1738, rt_g_lit("OPTIMIZE", 8))) {
F->up->conf_optimize_234 = (*(P174)rt_nil_check(F->a_1740)).name_;
} else if (eq_rt_gstr(F->p_1738, rt_g_lit("SYSTEM", 6))) {
F->up->conf_system_231 = (*(P174)rt_nil_check(F->a_1740)).name_;
}
} else if ((eq_rt_gstr(F->p_1738, rt_g_lit("STORAGE_UNIT", 12)) || eq_rt_gstr(F->p_1738, rt_g_lit("MEMORY_SIZE", 11)))) {
if (((G_NV(F->n_1739) != ((rt_int)1LL)) || (G_NV((*(P174)rt_nil_check(F->a_1740)).kind_) != ((rt_int)1LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->x_381)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1738), rt_g_lit(" takes a number (RM79 13.7)", 27)));
}
if (eq_rt_gstr(F->p_1738, rt_g_lit("STORAGE_UNIT", 12))) {
F->up->conf_storage_unit_232 = G_NV((*(P174)rt_nil_check(F->a_1740)).ival_);
} else {
F->up->conf_memory_size_233 = G_NV((*(P174)rt_nil_check(F->a_1740)).ival_);
}
} else if ((eq_rt_gstr(F->p_1738, rt_g_lit("SUPPRESS", 8)) || eq_rt_gstr(F->p_1738, rt_g_lit("ENVIRONMENT", 11)))) {
if ((G_NV(F->n_1739) == ((rt_int)0LL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->x_381)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1738), rt_g_lit(" names at least one ", 20)), rt_g_lit("unit or exception (RM79 App. B)", 31)));
}
while ((F->a_1740 != NULL)) {
if ((G_NV((*(P174)rt_nil_check(F->a_1740)).kind_) != ((rt_int)5LL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->x_381)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1738), rt_g_lit(" takes names (RM79 App. B)", 26)));
}
F->a_1740 = (*(P174)rt_nil_check(F->a_1740)).next_;
}
L_end_1741: ;
} else if (eq_rt_gstr(F->p_1738, rt_g_lit("INCLUDE", 7))) {
if (((G_NV(F->n_1739) != ((rt_int)1LL)) || (G_NV((*(P174)rt_nil_check(F->a_1740)).kind_) != ((rt_int)3LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->x_381)).line_), rt_g_lit("pragma INCLUDE takes the name of a file (RM79 App. B)", 53));
}
}
ret_:

  return;
}

static void f_visibility_p_384(struct f_greenc_1fr *up_, P140 *res_383) {
  struct f_visibility_p_384fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_383 = res_383;
F->names_1742 = NULL;
F->v_1743 = NULL;
F->v_1743 = f_mk_236(F->up, rt_g_lit(",", 1));
f_expect_kw_332(F->up, rt_g_lit("RESTRICTED", 10));
if (f_at_op_321(F->up, rt_g_lit("(", 1))) {
f_skip_330(F->up);
f_id_list_340(F->up, &F->names_1742);
f_expect_op_334(F->up, rt_g_lit(")", 1));
while ((F->names_1742 != NULL)) {
F->v_1743 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->v_1743)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->names_1742)).name_))), one_rt_gstr(44)));
F->names_1742 = (*(P174)rt_nil_check(F->names_1742)).next_;
}
L_end_1744: ;
}
(*F->res_383) = F->v_1743;
ret_:

  return;
}

static void f_unit_p_386(struct f_greenc_1fr *up_, P174 *res_385) {
  struct f_unit_p_386fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_385 = res_385;
F->v_1745 = NULL;
F->x_1746 = NULL;
if (f_at_kw_319(F->up, rt_g_lit("RESTRICTED", 10))) {
f_visibility_p_384(F->up, &F->v_1745);
}
if (f_at_kw_319(F->up, rt_g_lit("SEPARATE", 8))) {
f_skip_330(F->up);
if (((F->v_1745 == NULL) || (({ rt_gstr at1747 = (*(P140)rt_nil_check(F->v_1745)); at1747.hi >= at1747.lo ? at1747.hi - at1747.lo + 1 : (rt_int)0; }) < ((rt_int)2LL)))) {
f_perror_329(F->up, rt_g_lit("a subunit names its enclosing unit first in its visibility list (RM79 10.2)", 75));
}
f_unit_p_386(F->up, &F->x_1746);
if (((((G_NV((*(P174)rt_nil_check(F->x_1746)).kind_) != ((rt_int)44LL)) && (G_NV((*(P174)rt_nil_check(F->x_1746)).kind_) != ((rt_int)45LL))) && (G_NV((*(P174)rt_nil_check(F->x_1746)).kind_) != ((rt_int)49LL))) && (G_NV((*(P174)rt_nil_check(F->x_1746)).kind_) != ((rt_int)51LL)))) {
f_perror_329(F->up, rt_g_lit("a subunit is a subprogram body or a module body (RM79 10.2)", 59));
}
(*(P174)rt_nil_check(F->x_1746)).formal_ = f_mk_236(F->up, cat_rt_gstr(one_rt_gstr(33), (*(P140)rt_nil_check(F->v_1745))));
(*F->res_385) = F->x_1746;
goto ret_;
}
if ((f_at_kw_319(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_319(F->up, rt_g_lit("FUNCTION", 8)))) {
f_subprogram_399(F->up, &F->x_1746);
} else if (f_at_kw_319(F->up, rt_g_lit("PACKAGE", 7))) {
f_package_p_405(F->up, &F->x_1746);
} else if (f_at_kw_319(F->up, rt_g_lit("TASK", 4))) {
f_task_p_1119(F->up, &F->x_1746);
} else if (f_at_kw_319(F->up, rt_g_lit("GENERIC", 7))) {
f_generic_p_1263(F->up, &F->x_1746);
} else {
f_perror_329(F->up, rt_g_lit("a restricted unit is a subprogram, a package or a task (RM79 8.3)", 65));
}
if ((F->x_1746 != NULL)) {
(*(P174)rt_nil_check(F->x_1746)).formal_ = F->v_1745;
}
(*F->res_385) = F->x_1746;
ret_:

  return;
}

static void f_skip_representation_387(struct f_greenc_1fr *up_) {
  struct f_skip_representation_387fr *F = rt_alloc(sizeof *F);
F->up = up_;
while ((!f_at_kw_319(F->up, rt_g_lit("USE", 3)))) {
f_skip_330(F->up);
}
L_end_1748: ;
f_skip_330(F->up);
if (f_at_kw_319(F->up, rt_g_lit("RECORD", 6))) {
while ((!((f_at_kw_319(F->up, rt_g_lit("END", 3)) && (f_kind_at_325(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_327(F->up, ((rt_int)1LL)), rt_g_lit("RECORD", 6))))) {
f_skip_330(F->up);
}
L_end_1749: ;
f_skip_330(F->up);
f_skip_330(F->up);
}
while ((!f_at_op_321(F->up, rt_g_lit(";", 1)))) {
f_skip_330(F->up);
}
L_end_1750: ;
f_skip_330(F->up);
ret_:

  return;
}

static void f_decl_part_389(struct f_greenc_1fr *up_, P174 *res_388) {
  struct f_decl_part_389fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_388 = res_388;
F->head_1751 = NULL;
F->tail_1752 = NULL;
F->x_1753 = NULL;
F->names_1754 = NULL;
for (;;) {
if (f_at_kw_319(F->up, rt_g_lit("PRAGMA", 6))) {
f_pragma_p_380(F->up, &F->x_1753);
f_append_314(F->up, &F->head_1751, &F->tail_1752, F->x_1753);
} else if (f_at_kw_319(F->up, rt_g_lit("USE", 3))) {
f_skip_330(F->up);
F->x_1753 = f_nn_310(F->up, ((rt_int)55LL), f_cur_line_317(F->up));
f_id_list_340(F->up, &(*(P174)rt_nil_check(F->x_1753)).a_);
f_expect_op_334(F->up, rt_g_lit(";", 1));
f_append_314(F->up, &F->head_1751, &F->tail_1752, F->x_1753);
} else if (((f_at_kw_319(F->up, rt_g_lit("RESTRICTED", 10)) && (f_kind_at_325(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_327(F->up, ((rt_int)1LL)), rt_g_lit("TYPE", 4)))) {
f_skip_330(F->up);
f_type_decl_393(F->up, &F->x_1753);
if (((F->x_1753 == NULL) || (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->x_1753)).a_)).kind_) != ((rt_int)77LL)))) {
f_perror_329(F->up, rt_g_lit("only a private type is restricted (RM79 7.4)", 44));
}
(*(P174)rt_nil_check(F->x_1753)).flag_ = ((rt_int)9LL);
f_append_314(F->up, &F->head_1751, &F->tail_1752, F->x_1753);
} else if (f_at_kw_319(F->up, rt_g_lit("RESTRICTED", 10))) {
f_unit_p_386(F->up, &F->x_1753);
f_append_314(F->up, &F->head_1751, &F->tail_1752, F->x_1753);
} else if (f_at_kw_319(F->up, rt_g_lit("FOR", 3))) {
f_skip_representation_387(F->up);
} else if ((f_at_kw_319(F->up, rt_g_lit("TYPE", 4)) || f_at_kw_319(F->up, rt_g_lit("SUBTYPE", 7)))) {
f_type_decl_393(F->up, &F->x_1753);
f_append_314(F->up, &F->head_1751, &F->tail_1752, F->x_1753);
} else if ((f_at_kw_319(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_319(F->up, rt_g_lit("FUNCTION", 8)))) {
f_subprogram_399(F->up, &F->x_1753);
f_append_314(F->up, &F->head_1751, &F->tail_1752, F->x_1753);
} else if (f_at_kw_319(F->up, rt_g_lit("PACKAGE", 7))) {
f_package_p_405(F->up, &F->x_1753);
f_append_314(F->up, &F->head_1751, &F->tail_1752, F->x_1753);
} else if (f_at_kw_319(F->up, rt_g_lit("TASK", 4))) {
f_task_p_1119(F->up, &F->x_1753);
f_append_314(F->up, &F->head_1751, &F->tail_1752, F->x_1753);
} else if (f_at_kw_319(F->up, rt_g_lit("GENERIC", 7))) {
f_generic_p_1263(F->up, &F->x_1753);
f_append_314(F->up, &F->head_1751, &F->tail_1752, F->x_1753);
} else if (f_at_kw_319(F->up, rt_g_lit("ENTRY", 5))) {
f_entry_p_1121(F->up, &F->x_1753);
f_append_314(F->up, &F->head_1751, &F->tail_1752, F->x_1753);
} else if (((f_at_kind_323(F->up, ((rt_int)1LL)) && (f_kind_at_325(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (eq_rt_gstr(f_text_at_327(F->up, ((rt_int)1LL)), rt_g_lit(":", 1)) || eq_rt_gstr(f_text_at_327(F->up, ((rt_int)1LL)), rt_g_lit(",", 1))))) {
f_object_decl_391(F->up, &F->x_1753);
f_append_314(F->up, &F->head_1751, &F->tail_1752, F->x_1753);
} else {
(*F->res_388) = F->head_1751;
goto ret_;
}
}
L_end_1755: ;
ret_:

  return;
}

static void f_object_decl_391(struct f_greenc_1fr *up_, P174 *res_390) {
  struct f_object_decl_391fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_390 = res_390;
F->head_1756 = NULL;
F->tail_1757 = NULL;
F->names_1758 = NULL;
F->st_1759 = NULL;
F->init_1760 = NULL;
F->x_1761 = NULL;
F->line_1762 = INT64_MIN;
F->line_1762 = f_cur_line_317(F->up);
F->is_const_1763 = INT_MIN;
F->is_const_1763 = 0;
f_id_list_340(F->up, &F->names_1758);
f_expect_op_334(F->up, rt_g_lit(":", 1));
if (f_at_kw_319(F->up, rt_g_lit("EXCEPTION", 9))) {
f_skip_330(F->up);
if (f_at_kw_319(F->up, rt_g_lit("RENAMES", 7))) {
f_skip_330(F->up);
F->x_1761 = f_nn_310(F->up, ((rt_int)46LL), G_NV(F->line_1762));
(*(P174)rt_nil_check(F->x_1761)).name_ = (*(P174)rt_nil_check(F->names_1758)).name_;
f_name_p_368(F->up, &(*(P174)rt_nil_check(F->x_1761)).a_);
f_expect_op_334(F->up, rt_g_lit(";", 1));
(*F->res_390) = F->x_1761;
goto ret_;
}
f_expect_op_334(F->up, rt_g_lit(";", 1));
while ((F->names_1758 != NULL)) {
F->x_1761 = f_nn_310(F->up, ((rt_int)46LL), G_NV(F->line_1762));
(*(P174)rt_nil_check(F->x_1761)).name_ = (*(P174)rt_nil_check(F->names_1758)).name_;
f_append_314(F->up, &F->head_1756, &F->tail_1757, F->x_1761);
F->names_1758 = (*(P174)rt_nil_check(F->names_1758)).next_;
}
L_end_1764: ;
(*F->res_390) = F->head_1756;
goto ret_;
}
if (f_at_kw_319(F->up, rt_g_lit("CONSTANT", 8))) {
f_skip_330(F->up);
F->is_const_1763 = 1;
}
f_type_spec_376(F->up, &F->st_1759);
if ((f_at_kw_319(F->up, rt_g_lit("RENAMES", 7)) && (!G_NV(F->is_const_1763)))) {
f_skip_330(F->up);
F->x_1761 = f_nn_310(F->up, ((rt_int)40LL), G_NV(F->line_1762));
(*(P174)rt_nil_check(F->x_1761)).name_ = (*(P174)rt_nil_check(F->names_1758)).name_;
(*(P174)rt_nil_check(F->x_1761)).a_ = F->st_1759;
(*(P174)rt_nil_check(F->x_1761)).flag_ = ((rt_int)2LL);
f_expr_347(F->up, &(*(P174)rt_nil_check(F->x_1761)).b_);
f_expect_op_334(F->up, rt_g_lit(";", 1));
(*F->res_390) = F->x_1761;
goto ret_;
}
if (f_at_op_321(F->up, rt_g_lit(":=", 2))) {
f_skip_330(F->up);
f_expr_347(F->up, &F->init_1760);
}
f_expect_op_334(F->up, rt_g_lit(";", 1));
while ((F->names_1758 != NULL)) {
if (G_NV(F->is_const_1763)) {
F->x_1761 = f_nn_310(F->up, ((rt_int)41LL), G_NV(F->line_1762));
} else {
F->x_1761 = f_nn_310(F->up, ((rt_int)40LL), G_NV(F->line_1762));
}
(*(P174)rt_nil_check(F->x_1761)).name_ = (*(P174)rt_nil_check(F->names_1758)).name_;
(*(P174)rt_nil_check(F->x_1761)).a_ = F->st_1759;
(*(P174)rt_nil_check(F->x_1761)).b_ = F->init_1760;
f_append_314(F->up, &F->head_1756, &F->tail_1757, F->x_1761);
F->names_1758 = (*(P174)rt_nil_check(F->names_1758)).next_;
}
L_end_1765: ;
(*F->res_390) = F->head_1756;
goto ret_;
ret_:

  return;
}

static void f_type_decl_393(struct f_greenc_1fr *up_, P174 *res_392) {
  struct f_type_decl_393fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_392 = res_392;
F->x_1766 = NULL;
F->line_1767 = INT64_MIN;
F->line_1767 = f_cur_line_317(F->up);
if (f_at_kw_319(F->up, rt_g_lit("SUBTYPE", 7))) {
f_skip_330(F->up);
F->x_1766 = f_nn_310(F->up, ((rt_int)43LL), G_NV(F->line_1767));
f_expect_id_336(F->up, &(*(P174)rt_nil_check(F->x_1766)).name_);
f_expect_kw_332(F->up, rt_g_lit("IS", 2));
f_subtype_ind_374(F->up, &(*(P174)rt_nil_check(F->x_1766)).a_);
f_expect_op_334(F->up, rt_g_lit(";", 1));
(*F->res_392) = F->x_1766;
goto ret_;
}
f_expect_kw_332(F->up, rt_g_lit("TYPE", 4));
F->x_1766 = f_nn_310(F->up, ((rt_int)42LL), G_NV(F->line_1767));
f_expect_id_336(F->up, &(*(P174)rt_nil_check(F->x_1766)).name_);
if (f_at_op_321(F->up, rt_g_lit(";", 1))) {
f_skip_330(F->up);
(*F->res_392) = NULL;
goto ret_;
}
f_expect_kw_332(F->up, rt_g_lit("IS", 2));
if (f_at_kw_319(F->up, rt_g_lit("PRIVATE", 7))) {
f_skip_330(F->up);
(*(P174)rt_nil_check(F->x_1766)).a_ = f_nn_310(F->up, ((rt_int)77LL), G_NV(F->line_1767));
} else {
f_type_def_378(F->up, &(*(P174)rt_nil_check(F->x_1766)).a_);
}
f_expect_op_334(F->up, rt_g_lit(";", 1));
(*F->res_392) = F->x_1766;
goto ret_;
ret_:

  return;
}

static void f_formal_part_395(struct f_greenc_1fr *up_, P174 *res_394) {
  struct f_formal_part_395fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_394 = res_394;
F->head_1768 = NULL;
F->tail_1769 = NULL;
F->names_1770 = NULL;
F->st_1771 = NULL;
F->def_1772 = NULL;
F->p_1773 = NULL;
F->mode_1774 = INT64_MIN;
F->more_1775 = INT_MIN;
F->more_1775 = 1;
f_expect_op_334(F->up, rt_g_lit("(", 1));
while (G_NV(F->more_1775)) {
f_id_list_340(F->up, &F->names_1770);
f_expect_op_334(F->up, rt_g_lit(":", 1));
F->mode_1774 = ((rt_int)1LL);
if (f_at_kw_319(F->up, rt_g_lit("IN", 2))) {
f_skip_330(F->up);
if (f_at_kw_319(F->up, rt_g_lit("OUT", 3))) {
f_skip_330(F->up);
F->mode_1774 = ((rt_int)2LL);
}
} else if (f_at_kw_319(F->up, rt_g_lit("OUT", 3))) {
f_skip_330(F->up);
F->mode_1774 = ((rt_int)3LL);
}
f_subtype_ind_374(F->up, &F->st_1771);
F->def_1772 = NULL;
if (f_at_op_321(F->up, rt_g_lit(":=", 2))) {
f_skip_330(F->up);
f_expr_347(F->up, &F->def_1772);
}
while ((F->names_1770 != NULL)) {
F->p_1773 = f_nn_310(F->up, ((rt_int)47LL), G_NV((*(P174)rt_nil_check(F->names_1770)).line_));
(*(P174)rt_nil_check(F->p_1773)).name_ = (*(P174)rt_nil_check(F->names_1770)).name_;
(*(P174)rt_nil_check(F->p_1773)).ival_ = G_NV(F->mode_1774);
(*(P174)rt_nil_check(F->p_1773)).a_ = F->st_1771;
(*(P174)rt_nil_check(F->p_1773)).b_ = F->def_1772;
f_append_314(F->up, &F->head_1768, &F->tail_1769, F->p_1773);
F->names_1770 = (*(P174)rt_nil_check(F->names_1770)).next_;
}
L_end_1777: ;
F->more_1775 = f_at_op_321(F->up, rt_g_lit(";", 1));
if (G_NV(F->more_1775)) {
f_skip_330(F->up);
}
}
L_end_1776: ;
f_expect_op_334(F->up, rt_g_lit(")", 1));
(*F->res_394) = F->head_1768;
goto ret_;
ret_:

  return;
}

static void f_designator_397(struct f_greenc_1fr *up_, P140 *res_396) {
  struct f_designator_397fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_396 = res_396;
if (f_at_kind_323(F->up, ((rt_int)6LL))) {
f_skip_330(F->up);
(*F->res_396) = f_mk_236(F->up, f_upper_s_249(F->up, (*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1781 = F->up->toks_112; ix1781.p[rt_index(rt_sub(G_NV(F->up->tpos_114), ((rt_int)1LL)), ix1781.lo, ix1781.hi) - ix1781.lo]; }))).s_))));
if (eq_rt_gstr((*(P140)rt_nil_check((*F->res_396))), rt_g_lit("/=", 2))) {
f_perror_329(F->up, rt_g_lit("\"/=\" cannot be declared: it follows the declaration of \"=\" (RM79 6.6.1)", 71));
}
if ((!f_is_operator_251(F->up, (*(P140)rt_nil_check((*F->res_396)))))) {
f_perror_329(F->up, cat_rt_gstr((*(P140)rt_nil_check((*F->res_396))), rt_g_lit(" is not an operator symbol (RM79 6.6.1)", 39)));
}
goto ret_;
}
f_expect_id_336(F->up, &(*F->res_396));
goto ret_;
ret_:

  return;
}

static void f_subprogram_399(struct f_greenc_1fr *up_, P174 *res_398) {
  struct f_subprogram_399fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_398 = res_398;
F->x_1782 = NULL;
F->line_1783 = INT64_MIN;
F->line_1783 = f_cur_line_317(F->up);
F->is_proc_1784 = INT_MIN;
F->is_proc_1784 = f_at_kw_319(F->up, rt_g_lit("PROCEDURE", 9));
f_skip_330(F->up);
if (G_NV(F->is_proc_1784)) {
F->x_1782 = f_nn_310(F->up, ((rt_int)44LL), G_NV(F->line_1783));
} else {
F->x_1782 = f_nn_310(F->up, ((rt_int)45LL), G_NV(F->line_1783));
}
f_designator_397(F->up, &(*(P174)rt_nil_check(F->x_1782)).name_);
if (((f_at_kw_319(F->up, rt_g_lit("IS", 2)) && (f_kind_at_325(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_327(F->up, ((rt_int)1LL)), rt_g_lit("NEW", 3)))) {
f_instantiation_1266(F->up, F->x_1782, &(*F->res_398));
goto ret_;
}
if (f_at_op_321(F->up, rt_g_lit("(", 1))) {
f_formal_part_395(F->up, &(*(P174)rt_nil_check(F->x_1782)).a_);
}
if (f_at_kw_319(F->up, rt_g_lit("RETURN", 6))) {
f_skip_330(F->up);
f_subtype_ind_374(F->up, &(*(P174)rt_nil_check(F->x_1782)).b_);
if (G_NV(F->is_proc_1784)) {
(*(P174)rt_nil_check(F->x_1782)).flag_ = ((rt_int)1LL);
}
} else if ((!G_NV(F->is_proc_1784))) {
f_perror_329(F->up, rt_g_lit("a function needs a RETURN clause", 32));
}
if (f_at_kw_319(F->up, rt_g_lit("RENAMES", 7))) {
f_skip_330(F->up);
(*(P174)rt_nil_check(F->x_1782)).ival_ = ((rt_int)2LL);
f_name_p_368(F->up, &(*(P174)rt_nil_check(F->x_1782)).c_);
f_expect_op_334(F->up, rt_g_lit(";", 1));
(*F->res_398) = F->x_1782;
goto ret_;
}
if (f_at_op_321(F->up, rt_g_lit(";", 1))) {
f_skip_330(F->up);
(*(P174)rt_nil_check(F->x_1782)).ival_ = ((rt_int)1LL);
(*F->res_398) = F->x_1782;
goto ret_;
}
f_expect_kw_332(F->up, rt_g_lit("IS", 2));
if (f_at_kw_319(F->up, rt_g_lit("SEPARATE", 8))) {
f_skip_330(F->up);
f_expect_op_334(F->up, rt_g_lit(";", 1));
(*(P174)rt_nil_check(F->x_1782)).ival_ = ((rt_int)3LL);
(*F->res_398) = F->x_1782;
goto ret_;
}
f_body_part_401(F->up, F->x_1782);
if ((f_at_kind_323(F->up, ((rt_int)1LL)) || f_at_kind_323(F->up, ((rt_int)6LL)))) {
if ((!eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1785 = F->up->toks_112; ix1785.p[rt_index(G_NV(F->up->tpos_114), ix1785.lo, ix1785.hi) - ix1785.lo]; }))).s_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1782)).name_))))) {
f_perror_329(F->up, cat_rt_gstr(rt_g_lit("the name after END does not match ", 34), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1782)).name_))));
}
f_skip_330(F->up);
}
f_expect_op_334(F->up, rt_g_lit(";", 1));
(*F->res_398) = F->x_1782;
goto ret_;
ret_:

  return;
}

static void f_body_part_401(struct f_greenc_1fr *up_, P174 x_400) {
  struct f_body_part_401fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_400 = x_400;
f_decl_part_389(F->up, &(*(P174)rt_nil_check(F->x_400)).c_);
if (f_at_kw_319(F->up, rt_g_lit("BEGIN", 5))) {
f_skip_330(F->up);
F->up->saw_interface_215 = 0;
f_statements_408(F->up, &(*(P174)rt_nil_check(F->x_400)).d_);
if ((G_NV(F->up->saw_interface_215) && ((*(P174)rt_nil_check(F->x_400)).d_ == NULL))) {
(*(P174)rt_nil_check(F->x_400)).tag_ = f_mk_236(F->up, rt_g_lit("INTERFACE", 9));
}
F->up->saw_interface_215 = 0;
}
if (f_at_kw_319(F->up, rt_g_lit("EXCEPTION", 9))) {
f_parse_handlers_403(F->up, &(*(P174)rt_nil_check(F->x_400)).e_);
}
f_expect_kw_332(F->up, rt_g_lit("END", 3));
ret_:

  return;
}

static void f_parse_handlers_403(struct f_greenc_1fr *up_, P174 *res_402) {
  struct f_parse_handlers_403fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_402 = res_402;
F->head_1786 = NULL;
F->tail_1787 = NULL;
F->h_1788 = NULL;
F->names_1789 = NULL;
F->ntail_1790 = NULL;
F->n_1791 = NULL;
f_expect_kw_332(F->up, rt_g_lit("EXCEPTION", 9));
while (f_at_kw_319(F->up, rt_g_lit("WHEN", 4))) {
f_skip_330(F->up);
F->h_1788 = f_nn_310(F->up, ((rt_int)62LL), f_cur_line_317(F->up));
F->names_1789 = NULL;
F->ntail_1790 = NULL;
for (;;) {
if (f_at_kw_319(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_330(F->up);
F->n_1791 = f_nn_310(F->up, ((rt_int)5LL), f_cur_line_317(F->up));
(*(P174)rt_nil_check(F->n_1791)).name_ = f_mk_236(F->up, rt_g_lit("OTHERS", 6));
} else {
f_name_node_338(F->up, &F->n_1791);
while (f_at_op_321(F->up, rt_g_lit(".", 1))) {
f_skip_330(F->up);
if (((*(P174)rt_nil_check(F->n_1791)).tag_ == NULL)) {
(*(P174)rt_nil_check(F->n_1791)).tag_ = (*(P174)rt_nil_check(F->n_1791)).name_;
} else {
(*(P174)rt_nil_check(F->n_1791)).tag_ = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_1791)).tag_)), one_rt_gstr(46)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_1791)).name_))));
}
f_expect_id_336(F->up, &(*(P174)rt_nil_check(F->n_1791)).name_);
}
L_end_1794: ;
}
f_append_314(F->up, &F->names_1789, &F->ntail_1790, F->n_1791);
if ((!f_at_op_321(F->up, rt_g_lit("|", 1)))) {
goto L_end_1793;
}
f_skip_330(F->up);
}
L_end_1793: ;
f_expect_op_334(F->up, rt_g_lit("=>", 2));
(*(P174)rt_nil_check(F->h_1788)).a_ = F->names_1789;
f_statements_408(F->up, &(*(P174)rt_nil_check(F->h_1788)).b_);
f_append_314(F->up, &F->head_1786, &F->tail_1787, F->h_1788);
}
L_end_1792: ;
(*F->res_402) = F->head_1786;
goto ret_;
ret_:

  return;
}

static void f_package_p_405(struct f_greenc_1fr *up_, P174 *res_404) {
  struct f_package_p_405fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_404 = res_404;
F->x_1795 = NULL;
F->line_1796 = INT64_MIN;
F->line_1796 = f_cur_line_317(F->up);
f_expect_kw_332(F->up, rt_g_lit("PACKAGE", 7));
if (f_at_kw_319(F->up, rt_g_lit("BODY", 4))) {
f_skip_330(F->up);
F->x_1795 = f_nn_310(F->up, ((rt_int)49LL), G_NV(F->line_1796));
f_expect_id_336(F->up, &(*(P174)rt_nil_check(F->x_1795)).name_);
f_expect_kw_332(F->up, rt_g_lit("IS", 2));
if (f_at_kw_319(F->up, rt_g_lit("SEPARATE", 8))) {
f_skip_330(F->up);
f_expect_op_334(F->up, rt_g_lit(";", 1));
(*(P174)rt_nil_check(F->x_1795)).flag_ = ((rt_int)4LL);
(*F->res_404) = F->x_1795;
goto ret_;
}
f_body_part_401(F->up, F->x_1795);
} else {
F->x_1795 = f_nn_310(F->up, ((rt_int)48LL), G_NV(F->line_1796));
f_expect_id_336(F->up, &(*(P174)rt_nil_check(F->x_1795)).name_);
if (((f_at_kw_319(F->up, rt_g_lit("IS", 2)) && (f_kind_at_325(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_327(F->up, ((rt_int)1LL)), rt_g_lit("NEW", 3)))) {
f_instantiation_1266(F->up, F->x_1795, &(*F->res_404));
goto ret_;
}
if (f_at_kw_319(F->up, rt_g_lit("RENAMES", 7))) {
f_skip_330(F->up);
(*(P174)rt_nil_check(F->x_1795)).flag_ = ((rt_int)3LL);
f_name_p_368(F->up, &(*(P174)rt_nil_check(F->x_1795)).a_);
f_expect_op_334(F->up, rt_g_lit(";", 1));
(*F->res_404) = F->x_1795;
goto ret_;
}
f_expect_kw_332(F->up, rt_g_lit("IS", 2));
f_decl_part_389(F->up, &(*(P174)rt_nil_check(F->x_1795)).c_);
if (f_at_kw_319(F->up, rt_g_lit("PRIVATE", 7))) {
f_skip_330(F->up);
f_decl_part_389(F->up, &(*(P174)rt_nil_check(F->x_1795)).d_);
}
f_expect_kw_332(F->up, rt_g_lit("END", 3));
}
if (f_at_kind_323(F->up, ((rt_int)1LL))) {
f_skip_330(F->up);
}
f_expect_op_334(F->up, rt_g_lit(";", 1));
(*F->res_404) = F->x_1795;
goto ret_;
ret_:

  return;
}

static int f_at_statements_end_406(struct f_greenc_1fr *up_) {
  struct f_at_statements_end_406fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ((((((f_at_kw_319(F->up, rt_g_lit("END", 3)) || f_at_kw_319(F->up, rt_g_lit("ELSE", 4))) || f_at_kw_319(F->up, rt_g_lit("ELSIF", 5))) || f_at_kw_319(F->up, rt_g_lit("WHEN", 4))) || f_at_kw_319(F->up, rt_g_lit("EXCEPTION", 9))) || f_at_kw_319(F->up, rt_g_lit("OR", 2))) || f_at_kind_323(F->up, ((rt_int)0LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_statements_408(struct f_greenc_1fr *up_, P174 *res_407) {
  struct f_statements_408fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_407 = res_407;
F->head_1797 = NULL;
F->tail_1798 = NULL;
F->x_1799 = NULL;
while ((!f_at_statements_end_406(F->up))) {
if (f_at_kw_319(F->up, rt_g_lit("PRAGMA", 6))) {
f_pragma_p_380(F->up, &F->x_1799);
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1799)).name_)), rt_g_lit("INTERFACE", 9))) {
F->up->saw_interface_215 = 1;
}
} else {
f_statement_410(F->up, &F->x_1799);
f_append_314(F->up, &F->head_1797, &F->tail_1798, F->x_1799);
}
}
L_end_1800: ;
(*F->res_407) = F->head_1797;
goto ret_;
ret_:

  return;
}

static void f_statement_410(struct f_greenc_1fr *up_, P174 *res_409) {
  struct f_statement_410fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_409 = res_409;
F->l_1801 = NULL;
F->x_1802 = NULL;
F->label_1803 = NULL;
if (f_at_op_321(F->up, rt_g_lit("<<", 2))) {
F->l_1801 = f_nn_310(F->up, ((rt_int)57LL), f_cur_line_317(F->up));
f_skip_330(F->up);
f_expect_id_336(F->up, &F->label_1803);
f_expect_op_334(F->up, rt_g_lit(">>", 2));
(*(P174)rt_nil_check(F->l_1801)).name_ = F->label_1803;
if (f_at_op_321(F->up, rt_g_lit("<<", 2))) {
f_statement_410(F->up, &F->x_1802);
} else {
f_labelled_statement_413(F->up, F->label_1803, &F->x_1802);
}
(*(P174)rt_nil_check(F->l_1801)).next_ = F->x_1802;
(*F->res_409) = F->l_1801;
goto ret_;
}
f_labelled_statement_413(F->up, NULL, &(*F->res_409));
ret_:

  return;
}

static void f_labelled_statement_413(struct f_greenc_1fr *up_, P140 label_411, P174 *res_412) {
  struct f_labelled_statement_413fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->label_411 = label_411;
F->res_412 = res_412;
F->x_1804 = NULL;
F->t_1805 = NULL;
F->line_1806 = INT64_MIN;
F->line_1806 = f_cur_line_317(F->up);
if (f_at_kw_319(F->up, rt_g_lit("NULL", 4))) {
f_skip_330(F->up);
f_expect_op_334(F->up, rt_g_lit(";", 1));
F->x_1804 = f_nn_310(F->up, ((rt_int)31LL), G_NV(F->line_1806));
(*F->res_412) = F->x_1804;
goto ret_;
} else if (f_at_kw_319(F->up, rt_g_lit("IF", 2))) {
f_if_stmt_417(F->up, &F->x_1804);
(*F->res_412) = F->x_1804;
goto ret_;
} else if (f_at_kw_319(F->up, rt_g_lit("CASE", 4))) {
f_case_stmt_419(F->up, &F->x_1804);
(*F->res_412) = F->x_1804;
goto ret_;
} else if (((f_at_kw_319(F->up, rt_g_lit("FOR", 3)) || f_at_kw_319(F->up, rt_g_lit("WHILE", 5))) || f_at_kw_319(F->up, rt_g_lit("LOOP", 4)))) {
f_loop_stmt_421(F->up, &F->x_1804);
(*(P174)rt_nil_check(F->x_1804)).tag_ = F->label_411;
if (f_at_kind_323(F->up, ((rt_int)1LL))) {
if (((F->label_411 == NULL) || (!eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1807 = F->up->toks_112; ix1807.p[rt_index(G_NV(F->up->tpos_114), ix1807.lo, ix1807.hi) - ix1807.lo]; }))).s_)), (*(P140)rt_nil_check(F->label_411)))))) {
f_perror_329(F->up, rt_g_lit("the name after END LOOP does not match the label", 48));
}
f_skip_330(F->up);
} else if ((F->label_411 != NULL)) {
f_perror_329(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the loop labelled ", 18), (*(P140)rt_nil_check(F->label_411))), rt_g_lit(" ends with end loop ", 20)), (*(P140)rt_nil_check(F->label_411))), rt_g_lit(" (RM79 5.6)", 11)));
}
f_expect_op_334(F->up, rt_g_lit(";", 1));
(*F->res_412) = F->x_1804;
goto ret_;
} else if ((f_at_kw_319(F->up, rt_g_lit("DECLARE", 7)) || f_at_kw_319(F->up, rt_g_lit("BEGIN", 5)))) {
F->x_1804 = f_nn_310(F->up, ((rt_int)25LL), G_NV(F->line_1806));
(*(P174)rt_nil_check(F->x_1804)).tag_ = F->label_411;
if (f_at_kw_319(F->up, rt_g_lit("DECLARE", 7))) {
f_skip_330(F->up);
f_decl_part_389(F->up, &(*(P174)rt_nil_check(F->x_1804)).a_);
}
f_expect_kw_332(F->up, rt_g_lit("BEGIN", 5));
f_statements_408(F->up, &(*(P174)rt_nil_check(F->x_1804)).b_);
if (f_at_kw_319(F->up, rt_g_lit("EXCEPTION", 9))) {
f_parse_handlers_403(F->up, &(*(P174)rt_nil_check(F->x_1804)).c_);
}
f_expect_kw_332(F->up, rt_g_lit("END", 3));
if (f_at_kind_323(F->up, ((rt_int)1LL))) {
if (((F->label_411 == NULL) || (!eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1808 = F->up->toks_112; ix1808.p[rt_index(G_NV(F->up->tpos_114), ix1808.lo, ix1808.hi) - ix1808.lo]; }))).s_)), (*(P140)rt_nil_check(F->label_411)))))) {
f_perror_329(F->up, rt_g_lit("the name after END does not match the label of the block (RM79 6.7)", 67));
}
f_skip_330(F->up);
} else if ((F->label_411 != NULL)) {
f_perror_329(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the block labelled ", 19), (*(P140)rt_nil_check(F->label_411))), rt_g_lit(" ends with end ", 15)), (*(P140)rt_nil_check(F->label_411))), rt_g_lit(" (RM79 6.7)", 11)));
}
f_expect_op_334(F->up, rt_g_lit(";", 1));
(*F->res_412) = F->x_1804;
goto ret_;
} else if (f_at_kw_319(F->up, rt_g_lit("EXIT", 4))) {
f_skip_330(F->up);
F->x_1804 = f_nn_310(F->up, ((rt_int)26LL), G_NV(F->line_1806));
if (f_at_kind_323(F->up, ((rt_int)1LL))) {
f_expect_id_336(F->up, &(*(P174)rt_nil_check(F->x_1804)).name_);
}
if (f_at_kw_319(F->up, rt_g_lit("WHEN", 4))) {
f_skip_330(F->up);
f_expr_347(F->up, &(*(P174)rt_nil_check(F->x_1804)).a_);
}
f_expect_op_334(F->up, rt_g_lit(";", 1));
(*F->res_412) = F->x_1804;
goto ret_;
} else if (f_at_kw_319(F->up, rt_g_lit("RETURN", 6))) {
f_skip_330(F->up);
F->x_1804 = f_nn_310(F->up, ((rt_int)27LL), G_NV(F->line_1806));
if ((!f_at_op_321(F->up, rt_g_lit(";", 1)))) {
f_expr_347(F->up, &(*(P174)rt_nil_check(F->x_1804)).a_);
}
f_expect_op_334(F->up, rt_g_lit(";", 1));
(*F->res_412) = F->x_1804;
goto ret_;
} else if (f_at_kw_319(F->up, rt_g_lit("RAISE", 5))) {
f_skip_330(F->up);
if (f_at_op_321(F->up, rt_g_lit(";", 1))) {
f_skip_330(F->up);
F->x_1804 = f_nn_310(F->up, ((rt_int)29LL), G_NV(F->line_1806));
(*F->res_412) = F->x_1804;
goto ret_;
}
F->x_1804 = f_nn_310(F->up, ((rt_int)28LL), G_NV(F->line_1806));
f_expect_id_336(F->up, &(*(P174)rt_nil_check(F->x_1804)).name_);
if (f_at_op_321(F->up, rt_g_lit("(", 1))) {
f_skip_330(F->up);
f_expr_347(F->up, &(*(P174)rt_nil_check(F->x_1804)).a_);
f_expect_op_334(F->up, rt_g_lit(")", 1));
}
while (f_at_op_321(F->up, rt_g_lit(".", 1))) {
f_skip_330(F->up);
(*(P174)rt_nil_check(F->x_1804)).tag_ = (*(P174)rt_nil_check(F->x_1804)).name_;
f_expect_id_336(F->up, &(*(P174)rt_nil_check(F->x_1804)).name_);
}
L_end_1809: ;
f_expect_op_334(F->up, rt_g_lit(";", 1));
(*F->res_412) = F->x_1804;
goto ret_;
} else if (f_at_kw_319(F->up, rt_g_lit("ASSERT", 6))) {
f_skip_330(F->up);
F->x_1804 = f_nn_310(F->up, ((rt_int)30LL), G_NV(F->line_1806));
f_expr_347(F->up, &(*(P174)rt_nil_check(F->x_1804)).a_);
f_expect_op_334(F->up, rt_g_lit(";", 1));
(*F->res_412) = F->x_1804;
goto ret_;
} else if (f_at_kw_319(F->up, rt_g_lit("GOTO", 4))) {
f_skip_330(F->up);
F->x_1804 = f_nn_310(F->up, ((rt_int)58LL), G_NV(F->line_1806));
f_expect_id_336(F->up, &(*(P174)rt_nil_check(F->x_1804)).name_);
f_expect_op_334(F->up, rt_g_lit(";", 1));
(*F->res_412) = F->x_1804;
goto ret_;
}
f_task_statement_415(F->up, &F->x_1804);
if ((F->x_1804 != NULL)) {
(*F->res_412) = F->x_1804;
goto ret_;
}
f_name_p_368(F->up, &F->t_1805);
if (f_at_op_321(F->up, rt_g_lit(":=", 2))) {
f_skip_330(F->up);
F->x_1804 = f_nn_310(F->up, ((rt_int)20LL), G_NV(F->line_1806));
(*(P174)rt_nil_check(F->x_1804)).a_ = F->t_1805;
f_expr_347(F->up, &(*(P174)rt_nil_check(F->x_1804)).b_);
} else {
F->x_1804 = f_nn_310(F->up, ((rt_int)21LL), G_NV(F->line_1806));
(*(P174)rt_nil_check(F->x_1804)).a_ = F->t_1805;
}
f_expect_op_334(F->up, rt_g_lit(";", 1));
(*F->res_412) = F->x_1804;
goto ret_;
ret_:

  return;
}

static void f_task_statement_415(struct f_greenc_1fr *up_, P174 *res_414) {
  struct f_task_statement_415fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_414 = res_414;
f_parse_task_statement_1129(F->up, &(*F->res_414));
ret_:

  return;
}

static void f_if_stmt_417(struct f_greenc_1fr *up_, P174 *res_416) {
  struct f_if_stmt_417fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_416 = res_416;
F->x_1810 = NULL;
F->arm_1811 = NULL;
F->head_1812 = NULL;
F->tail_1813 = NULL;
F->go_1814 = INT_MIN;
F->go_1814 = 1;
F->x_1810 = f_nn_310(F->up, ((rt_int)22LL), f_cur_line_317(F->up));
f_skip_330(F->up);
F->arm_1811 = f_nn_310(F->up, ((rt_int)60LL), f_cur_line_317(F->up));
f_expr_347(F->up, &(*(P174)rt_nil_check(F->arm_1811)).a_);
f_expect_kw_332(F->up, rt_g_lit("THEN", 4));
f_statements_408(F->up, &(*(P174)rt_nil_check(F->arm_1811)).b_);
f_append_314(F->up, &F->head_1812, &F->tail_1813, F->arm_1811);
while (G_NV(F->go_1814)) {
if (f_at_kw_319(F->up, rt_g_lit("ELSIF", 5))) {
f_skip_330(F->up);
F->arm_1811 = f_nn_310(F->up, ((rt_int)60LL), f_cur_line_317(F->up));
f_expr_347(F->up, &(*(P174)rt_nil_check(F->arm_1811)).a_);
f_expect_kw_332(F->up, rt_g_lit("THEN", 4));
f_statements_408(F->up, &(*(P174)rt_nil_check(F->arm_1811)).b_);
f_append_314(F->up, &F->head_1812, &F->tail_1813, F->arm_1811);
} else if (f_at_kw_319(F->up, rt_g_lit("ELSE", 4))) {
f_skip_330(F->up);
(*(P174)rt_nil_check(F->x_1810)).flag_ = ((rt_int)1LL);
f_statements_408(F->up, &(*(P174)rt_nil_check(F->x_1810)).b_);
} else {
F->go_1814 = 0;
}
}
L_end_1815: ;
f_expect_kw_332(F->up, rt_g_lit("END", 3));
f_expect_kw_332(F->up, rt_g_lit("IF", 2));
f_expect_op_334(F->up, rt_g_lit(";", 1));
(*(P174)rt_nil_check(F->x_1810)).a_ = F->head_1812;
(*F->res_416) = F->x_1810;
goto ret_;
ret_:

  return;
}

static void f_case_stmt_419(struct f_greenc_1fr *up_, P174 *res_418) {
  struct f_case_stmt_419fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_418 = res_418;
F->x_1816 = NULL;
F->arm_1817 = NULL;
F->head_1818 = NULL;
F->tail_1819 = NULL;
F->labs_1820 = NULL;
F->ltail_1821 = NULL;
F->l_1822 = NULL;
F->others_arm_1823 = INT_MIN;
F->x_1816 = f_nn_310(F->up, ((rt_int)23LL), f_cur_line_317(F->up));
f_skip_330(F->up);
f_expr_347(F->up, &(*(P174)rt_nil_check(F->x_1816)).a_);
f_expect_kw_332(F->up, rt_g_lit("OF", 2));
while (f_at_kw_319(F->up, rt_g_lit("WHEN", 4))) {
f_skip_330(F->up);
F->labs_1820 = NULL;
F->ltail_1821 = NULL;
F->others_arm_1823 = 0;
for (;;) {
if (f_at_kw_319(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_330(F->up);
F->others_arm_1823 = 1;
} else {
F->l_1822 = f_nn_310(F->up, ((rt_int)61LL), f_cur_line_317(F->up));
f_simple_expr_355(F->up, &(*(P174)rt_nil_check(F->l_1822)).a_);
if (f_at_op_321(F->up, rt_g_lit("..", 2))) {
f_skip_330(F->up);
f_simple_expr_355(F->up, &(*(P174)rt_nil_check(F->l_1822)).b_);
}
f_append_314(F->up, &F->labs_1820, &F->ltail_1821, F->l_1822);
}
if ((!f_at_op_321(F->up, rt_g_lit("|", 1)))) {
goto L_end_1825;
}
f_skip_330(F->up);
}
L_end_1825: ;
f_expect_op_334(F->up, rt_g_lit("=>", 2));
if (G_NV(F->others_arm_1823)) {
(*(P174)rt_nil_check(F->x_1816)).flag_ = ((rt_int)1LL);
f_statements_408(F->up, &(*(P174)rt_nil_check(F->x_1816)).c_);
if ((!f_at_kw_319(F->up, rt_g_lit("END", 3)))) {
f_perror_329(F->up, rt_g_lit("others is the last choice of a case statement (RM79 5.5)", 56));
}
} else {
F->arm_1817 = f_nn_310(F->up, ((rt_int)60LL), f_cur_line_317(F->up));
(*(P174)rt_nil_check(F->arm_1817)).a_ = F->labs_1820;
f_statements_408(F->up, &(*(P174)rt_nil_check(F->arm_1817)).b_);
f_append_314(F->up, &F->head_1818, &F->tail_1819, F->arm_1817);
}
}
L_end_1824: ;
f_expect_kw_332(F->up, rt_g_lit("END", 3));
f_expect_kw_332(F->up, rt_g_lit("CASE", 4));
f_expect_op_334(F->up, rt_g_lit(";", 1));
(*(P174)rt_nil_check(F->x_1816)).b_ = F->head_1818;
(*F->res_418) = F->x_1816;
goto ret_;
ret_:

  return;
}

static void f_loop_stmt_421(struct f_greenc_1fr *up_, P174 *res_420) {
  struct f_loop_stmt_421fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_420 = res_420;
F->x_1826 = NULL;
F->r_1827 = NULL;
F->line_1828 = INT64_MIN;
F->line_1828 = f_cur_line_317(F->up);
F->x_1826 = f_nn_310(F->up, ((rt_int)24LL), G_NV(F->line_1828));
if (f_at_kw_319(F->up, rt_g_lit("FOR", 3))) {
f_skip_330(F->up);
(*(P174)rt_nil_check(F->x_1826)).flag_ = ((rt_int)2LL);
f_expect_id_336(F->up, &(*(P174)rt_nil_check(F->x_1826)).name_);
f_expect_kw_332(F->up, rt_g_lit("IN", 2));
if (f_at_kw_319(F->up, rt_g_lit("REVERSE", 7))) {
f_skip_330(F->up);
(*(P174)rt_nil_check(F->x_1826)).ival_ = ((rt_int)1LL);
}
if (((f_at_kind_323(F->up, ((rt_int)1LL)) && (f_kind_at_325(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_327(F->up, ((rt_int)1LL)), rt_g_lit("LOOP", 4)))) {
f_subtype_ind_374(F->up, &(*(P174)rt_nil_check(F->x_1826)).a_);
} else {
f_discrete_range_p_372(F->up, &(*(P174)rt_nil_check(F->x_1826)).a_);
}
} else if (f_at_kw_319(F->up, rt_g_lit("WHILE", 5))) {
f_skip_330(F->up);
(*(P174)rt_nil_check(F->x_1826)).flag_ = ((rt_int)1LL);
f_expr_347(F->up, &(*(P174)rt_nil_check(F->x_1826)).a_);
}
f_expect_kw_332(F->up, rt_g_lit("LOOP", 4));
f_statements_408(F->up, &(*(P174)rt_nil_check(F->x_1826)).b_);
f_expect_kw_332(F->up, rt_g_lit("END", 3));
f_expect_kw_332(F->up, rt_g_lit("LOOP", 4));
(*F->res_420) = F->x_1826;
goto ret_;
ret_:

  return;
}

static void f_compilation_423(struct f_greenc_1fr *up_, P174 *res_422) {
  struct f_compilation_423fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_422 = res_422;
F->first_1829 = INT64_MIN;
F->head_1830 = NULL;
F->tail_1831 = NULL;
F->x_1832 = NULL;
while ((!f_at_kind_323(F->up, ((rt_int)0LL)))) {
if (f_at_kw_319(F->up, rt_g_lit("PRAGMA", 6))) {
f_pragma_p_380(F->up, &F->x_1832);
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1832)).name_)), rt_g_lit("ENVIRONMENT", 11))) {
F->x_1832 = (*(P174)rt_nil_check(F->x_1832)).a_;
while ((F->x_1832 != NULL)) {
F->up->env_names_197 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->up->env_names_197)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1832)).name_))), one_rt_gstr(44)));
F->x_1832 = (*(P174)rt_nil_check(F->x_1832)).next_;
}
L_end_1834: ;
}
} else {
if ((!(((((f_at_kw_319(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_319(F->up, rt_g_lit("FUNCTION", 8))) || f_at_kw_319(F->up, rt_g_lit("PACKAGE", 7))) || f_at_kw_319(F->up, rt_g_lit("TASK", 4))) || f_at_kw_319(F->up, rt_g_lit("GENERIC", 7))) || f_at_kw_319(F->up, rt_g_lit("RESTRICTED", 10))))) {
f_perror_329(F->up, rt_g_lit("a compilation unit is a subprogram, a package or a task", 55));
}
F->first_1829 = G_NV((*(P110)rt_nil_check(({ A109 ix1835 = F->up->toks_112; ix1835.p[rt_index(G_NV(F->up->tpos_114), ix1835.lo, ix1835.hi) - ix1835.lo]; }))).line_);
f_unit_p_386(F->up, &F->x_1832);
if (((*(P174)rt_nil_check(F->x_1832)).formal_ == NULL)) {
(*(P174)rt_nil_check(F->x_1832)).formal_ = f_mk_236(F->up, rt_g_lit(",", 1));
}
if (G_NV(F->up->compiling_source_207)) {
F->up->spans_206 = ({ R205 *cell1836 = rt_alloc(sizeof(R205)); *cell1836 = cp_R205(({ R205 ag1837; ag1837.u_ = F->x_1832; ag1837.first_ = G_NV(F->first_1829); ag1837.last_ = G_NV((*(P110)rt_nil_check(({ A109 ix1838 = F->up->toks_112; ix1838.p[rt_index(rt_sub(G_NV(F->up->tpos_114), ((rt_int)1LL)), ix1838.lo, ix1838.hi) - ix1838.lo]; }))).line_); ag1837.env_ = F->up->env_names_197; ag1837.next_ = F->up->spans_206; ag1837; })); (P204)cell1836; });
}
(*(P174)rt_nil_check(F->x_1832)).formal_ = f_mk_236(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1832)).formal_)), (*(P140)rt_nil_check(F->up->env_names_197))));
f_append_314(F->up, &F->head_1830, &F->tail_1831, F->x_1832);
}
}
L_end_1833: ;
(*F->res_422) = F->head_1830;
goto ret_;
ret_:

  return;
}

static rt_int f_hash_425(struct f_greenc_1fr *up_, rt_gstr s_424) {
  struct f_hash_425fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_424 = cp_rt_gstr(s_424);
F->h_1839 = INT64_MIN;
F->h_1839 = ((rt_int)0LL);
{ rt_int lo1843 = ((rt_int)1LL), hi1844 = ({ rt_gstr at1841 = F->s_424; at1841.hi >= at1841.lo ? at1841.hi - at1841.lo + 1 : (rt_int)0; });
for (rt_int it1845 = lo1843; it1845 <= hi1844; it1845++) {
F->i_1842 = it1845;
F->h_1839 = rt_rem(rt_add(rt_mul(G_NV(F->h_1839), ((rt_int)31LL)), ((rt_int)(G_NV(({ rt_gstr ix1846 = F->s_424; ix1846.p[rt_index(F->i_1842, ix1846.lo, ix1846.hi) - ix1846.lo]; }))) + 1)), ((rt_int)4093LL));
}
}
L_end_1840: ;
F->result_ = G_NV(F->h_1839);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_listed_428(struct f_greenc_1fr *up_, P140 list_426, rt_gstr name_427) {
  struct f_listed_428fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->list_426 = list_426;
F->name_427 = cp_rt_gstr(name_427);
F->l_1847 = cp_rt_gstr((*(P140)rt_nil_check(F->list_426)));
F->n_1848 = INT64_MIN;
F->n_1848 = ({ rt_gstr at1849 = F->name_427; at1849.hi >= at1849.lo ? at1849.hi - at1849.lo + 1 : (rt_int)0; });
{ rt_int lo1854 = ({ rt_gstr at1851 = F->l_1847; at1851.lo; }), hi1855 = rt_sub(rt_sub(({ rt_gstr at1852 = F->l_1847; at1852.hi; }), G_NV(F->n_1848)), ((rt_int)1LL));
for (rt_int it1856 = lo1854; it1856 <= hi1855; it1856++) {
F->i_1853 = it1856;
if (((G_NV(({ rt_gstr ix1857 = F->l_1847; ix1857.p[rt_index(F->i_1853, ix1857.lo, ix1857.hi) - ix1857.lo]; })) == 44) && (G_NV(({ rt_gstr ix1858 = F->l_1847; ix1858.p[rt_index(rt_add(rt_add(F->i_1853, G_NV(F->n_1848)), ((rt_int)1LL)), ix1858.lo, ix1858.hi) - ix1858.lo]; })) == 44))) {
if (eq_rt_gstr(({ rt_gstr sl1859 = F->l_1847; rt_int l_ = rt_add(F->i_1853, ((rt_int)1LL)), h_ = rt_add(F->i_1853, G_NV(F->n_1848)); if (l_ <= h_) { rt_index(l_, sl1859.lo, sl1859.hi); rt_index(h_, sl1859.lo, sl1859.hi); } sl1859.p += l_ - sl1859.lo; sl1859.lo = l_; sl1859.hi = h_; sl1859; }), F->name_427)) {
F->result_ = 1;
goto ret_;
}
}
}
}
L_end_1850: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_visible_sym_430(struct f_greenc_1fr *up_, P117 y_429) {
  struct f_visible_sym_430fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_429 = y_429;
F->b_1860 = NULL;
F->b_1860 = F->up->barriers_200;
if ((G_NV((*(P117)rt_nil_check(F->y_429)).depth_) == ((rt_int)0LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->b_1860 != NULL)) {
if (((G_NV((*(P117)rt_nil_check(F->y_429)).depth_) <= G_NV((*(P198)rt_nil_check(F->b_1860)).limit_)) && (G_NV((*(P117)rt_nil_check(F->y_429)).depth_) != G_NV((*(P198)rt_nil_check(F->b_1860)).keep_)))) {
if ((!f_listed_428(F->up, (*(P198)rt_nil_check(F->b_1860)).allowed_, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_429)).name_))))) {
F->result_ = 0;
goto ret_;
}
}
F->b_1860 = (*(P198)rt_nil_check(F->b_1860)).next_;
}
L_end_1861: ;
F->result_ = 1;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P117 f_lookup_432(struct f_greenc_1fr *up_, rt_gstr name_431) {
  struct f_lookup_432fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_431 = cp_rt_gstr(name_431);
F->y_1862 = NULL;
F->y_1862 = ({ A116 ix1863 = F->up->table_119; ix1863.p[rt_index(f_hash_425(F->up, F->name_431), ix1863.lo, ix1863.hi) - ix1863.lo]; });
while ((F->y_1862 != NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1862)).name_)), F->name_431) && f_visible_sym_430(F->up, F->y_1862))) {
F->result_ = F->y_1862;
goto ret_;
}
F->y_1862 = (*(P117)rt_nil_check(F->y_1862)).chain_;
}
L_end_1864: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_task_435(struct f_greenc_1fr *up_, P117 a_433, P117 b_434) {
  struct f_same_task_435fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_433 = a_433;
F->b_434 = b_434;
if ((F->a_433 == F->b_434)) {
F->result_ = 1;
goto ret_;
} else if (((F->a_433 == NULL) || (F->b_434 == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->a_433)).cname_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_434)).cname_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P117 f_lookup_entry_438(struct f_greenc_1fr *up_, rt_gstr name_436, P117 owner_437) {
  struct f_lookup_entry_438fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_436 = cp_rt_gstr(name_436);
F->owner_437 = owner_437;
F->y_1865 = NULL;
F->y_1865 = ({ A116 ix1866 = F->up->table_119; ix1866.p[rt_index(f_hash_425(F->up, F->name_436), ix1866.lo, ix1866.hi) - ix1866.lo]; });
while ((F->y_1865 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1865)).name_)), F->name_436) && (G_NV((*(P117)rt_nil_check(F->y_1865)).kind_) == ((rt_int)10LL))) && f_same_task_435(F->up, (*(P117)rt_nil_check(F->y_1865)).members_, F->owner_437))) {
F->result_ = F->y_1865;
goto ret_;
}
F->y_1865 = (*(P117)rt_nil_check(F->y_1865)).chain_;
}
L_end_1867: ;
F->result_ = f_lookup_432(F->up, F->name_436);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P117 f_lookup_at_441(struct f_greenc_1fr *up_, rt_gstr name_439, rt_int d_440) {
  struct f_lookup_at_441fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_439 = cp_rt_gstr(name_439);
F->d_440 = d_440;
F->y_1868 = NULL;
F->y_1868 = ({ A116 ix1869 = F->up->table_119; ix1869.p[rt_index(f_hash_425(F->up, F->name_439), ix1869.lo, ix1869.hi) - ix1869.lo]; });
while ((F->y_1868 != NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1868)).name_)), F->name_439) && (G_NV((*(P117)rt_nil_check(F->y_1868)).depth_) == F->d_440))) {
F->result_ = F->y_1868;
goto ret_;
}
F->y_1868 = (*(P117)rt_nil_check(F->y_1868)).chain_;
}
L_end_1870: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_enclosing_depth_443(struct f_greenc_1fr *up_, rt_gstr name_442) {
  struct f_enclosing_depth_443fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_442 = cp_rt_gstr(name_442);
{ rt_int lo1873 = ((rt_int)1LL), hi1874 = G_NV(F->up->nunits_188);
for (rt_int it1875 = hi1874; it1875 >= lo1873; it1875--) {
F->i_1872 = it1875;
if (eq_rt_gstr((*(P140)rt_nil_check(({ A183 ix1876 = F->up->unit_names_184; ix1876.p[rt_index(F->i_1872, ix1876.lo, ix1876.hi) - ix1876.lo]; }))), F->name_442)) {
F->result_ = G_NV(({ A185 ix1877 = F->up->unit_depths_186; ix1877.p[rt_index(F->i_1872, ix1877.lo, ix1877.hi) - ix1877.lo]; }));
goto ret_;
}
}
}
L_end_1871: ;
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_push_unit_445(struct f_greenc_1fr *up_, P140 name_444) {
  struct f_push_unit_445fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_444 = name_444;
F->up->nunits_188 = rt_add(G_NV(F->up->nunits_188), ((rt_int)1LL));
(*({ A183 *ix1878 = &(F->up->unit_names_184); &ix1878->p[rt_index(G_NV(F->up->nunits_188), ix1878->lo, ix1878->hi) - ix1878->lo]; })) = F->name_444;
(*({ A185 *ix1879 = &(F->up->unit_depths_186); &ix1879->p[rt_index(G_NV(F->up->nunits_188), ix1879->lo, ix1879->hi) - ix1879->lo]; })) = G_NV(F->up->depth_120);
ret_:

  return;
}

static P117 f_lookup_decl_447(struct f_greenc_1fr *up_, P174 d_446) {
  struct f_lookup_decl_447fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_446 = d_446;
F->y_1880 = NULL;
F->y_1880 = ({ A116 ix1881 = F->up->table_119; ix1881.p[rt_index(f_hash_425(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->d_446)).name_))), ix1881.lo, ix1881.hi) - ix1881.lo]; });
while ((F->y_1880 != NULL)) {
if (((*(P117)rt_nil_check(F->y_1880)).decl_ == F->d_446)) {
F->result_ = F->y_1880;
goto ret_;
}
F->y_1880 = (*(P117)rt_nil_check(F->y_1880)).chain_;
}
L_end_1882: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_overloadable_449(struct f_greenc_1fr *up_, P117 y_448) {
  struct f_overloadable_449fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_448 = y_448;
F->result_ = ((((G_NV((*(P117)rt_nil_check(F->y_448)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_448)).kind_) == ((rt_int)4LL))) || (G_NV((*(P117)rt_nil_check(F->y_448)).kind_) == ((rt_int)7LL))) || (G_NV((*(P117)rt_nil_check(F->y_448)).kind_) == ((rt_int)10LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_452(struct f_greenc_1fr *up_, P122 a_450, P122 b_451) {
  struct f_same_452fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_450 = a_450;
F->b_451 = b_451;
F->result_ = (F->a_450 == F->b_451);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P122 f_root_454(struct f_greenc_1fr *up_, P122 t_453) {
  struct f_root_454fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_453 = t_453;
F->r_1883 = NULL;
F->r_1883 = F->t_453;
while (((*(P122)rt_nil_check(F->r_1883)).parent_ != NULL)) {
F->r_1883 = (*(P122)rt_nil_check(F->r_1883)).parent_;
}
L_end_1884: ;
F->result_ = F->r_1883;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_derived_from_457(struct f_greenc_1fr *up_, P122 a_455, P122 b_456) {
  struct f_derived_from_457fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_455 = a_455;
F->b_456 = b_456;
F->r_1885 = NULL;
F->r_1885 = F->a_455;
while ((F->r_1885 != NULL)) {
if ((F->r_1885 == F->b_456)) {
F->result_ = 1;
goto ret_;
}
F->r_1885 = (*(P122)rt_nil_check(F->r_1885)).parent_;
}
L_end_1886: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_numeric_459(struct f_greenc_1fr *up_, P122 t_458) {
  struct f_is_numeric_459fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_458 = t_458;
F->result_ = (((G_NV((*(P122)rt_nil_check(F->t_458)).kind_) == ((rt_int)1LL)) || (G_NV((*(P122)rt_nil_check(F->t_458)).kind_) == ((rt_int)3LL))) || (G_NV((*(P122)rt_nil_check(F->t_458)).kind_) == ((rt_int)16LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_discrete_461(struct f_greenc_1fr *up_, P122 t_460) {
  struct f_is_discrete_461fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_460 = t_460;
F->result_ = ((((G_NV((*(P122)rt_nil_check(F->t_460)).kind_) == ((rt_int)1LL)) || (G_NV((*(P122)rt_nil_check(F->t_460)).kind_) == ((rt_int)4LL))) || (G_NV((*(P122)rt_nil_check(F->t_460)).kind_) == ((rt_int)11LL))) || (G_NV((*(P122)rt_nil_check(F->t_460)).kind_) == ((rt_int)2LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_types_464(struct f_greenc_1fr *up_, P1887 a_462, P1887 b_463) {
  struct f_same_types_464fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_462 = a_462;
F->b_463 = b_463;
F->x_1889 = NULL;
F->x_1889 = F->a_462;
F->y_1890 = NULL;
F->y_1890 = F->b_463;
while (((F->x_1889 != NULL) && (F->y_1890 != NULL))) {
if (((!f_same_452(F->up, (*(P1887)rt_nil_check(F->x_1889)).t_, (*(P1887)rt_nil_check(F->y_1890)).t_)) || (G_NV((*(P1887)rt_nil_check(F->x_1889)).mode_) != G_NV((*(P1887)rt_nil_check(F->y_1890)).mode_)))) {
F->result_ = 0;
goto ret_;
}
F->x_1889 = (*(P1887)rt_nil_check(F->x_1889)).next_;
F->y_1890 = (*(P1887)rt_nil_check(F->y_1890)).next_;
}
L_end_1891: ;
F->result_ = ((F->x_1889 == NULL) && (F->y_1890 == NULL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_signature_467(struct f_greenc_1fr *up_, P1887 a_465, P1887 b_466) {
  struct f_same_signature_467fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_465 = a_465;
F->b_466 = b_466;
F->x_1892 = NULL;
F->x_1892 = F->a_465;
F->y_1893 = NULL;
F->y_1893 = F->b_466;
while (((F->x_1892 != NULL) && (F->y_1893 != NULL))) {
if ((((!f_same_452(F->up, (*(P1887)rt_nil_check(F->x_1892)).t_, (*(P1887)rt_nil_check(F->y_1893)).t_)) || (G_NV((*(P1887)rt_nil_check(F->x_1892)).mode_) != G_NV((*(P1887)rt_nil_check(F->y_1893)).mode_))) || (!eq_rt_gstr((*(P140)rt_nil_check((*(P1887)rt_nil_check(F->x_1892)).name_)), (*(P140)rt_nil_check((*(P1887)rt_nil_check(F->y_1893)).name_)))))) {
F->result_ = 0;
goto ret_;
}
F->x_1892 = (*(P1887)rt_nil_check(F->x_1892)).next_;
F->y_1893 = (*(P1887)rt_nil_check(F->y_1893)).next_;
}
L_end_1894: ;
F->result_ = ((F->x_1892 == NULL) && (F->y_1893 == NULL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_distinct_overload_470(struct f_greenc_1fr *up_, P117 y_468, P117 z_469) {
  struct f_distinct_overload_470fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_468 = y_468;
F->z_469 = z_469;
if ((!(f_overloadable_449(F->up, F->y_468) && f_overloadable_449(F->up, F->z_469)))) {
F->result_ = 0;
goto ret_;
} else if ((G_NV((*(P117)rt_nil_check(F->y_468)).kind_) != G_NV((*(P117)rt_nil_check(F->z_469)).kind_))) {
F->result_ = 1;
goto ret_;
}
F->result_ = ((!f_same_signature_467(F->up, (*(P117)rt_nil_check(F->y_468)).params_, (*(P117)rt_nil_check(F->z_469)).params_)) || (!f_same_452(F->up, (*(P117)rt_nil_check(F->y_468)).result_, (*(P117)rt_nil_check(F->z_469)).result_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_define_473(struct f_greenc_1fr *up_, P117 y_471, rt_int line_472) {
  struct f_define_473fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_471 = y_471;
F->line_472 = line_472;
F->h_1895 = INT64_MIN;
F->h_1895 = f_hash_425(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_471)).name_)));
F->z_1896 = NULL;
F->z_1896 = ({ A116 ix1897 = F->up->table_119; ix1897.p[rt_index(G_NV(F->h_1895), ix1897.lo, ix1897.hi) - ix1897.lo]; });
while ((F->z_1896 != NULL)) {
if ((((G_NV((*(P117)rt_nil_check(F->z_1896)).depth_) == G_NV(F->up->depth_120)) && eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_1896)).name_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_471)).name_)))) && (!f_distinct_overload_470(F->up, F->y_471, F->z_1896)))) {
f_fail_257(F->up, F->line_472, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_471)).name_)), rt_g_lit(" is already declared in this declarative part", 45)));
}
F->z_1896 = (*(P117)rt_nil_check(F->z_1896)).chain_;
}
L_end_1898: ;
(*(P117)rt_nil_check(F->y_471)).depth_ = G_NV(F->up->depth_120);
(*(P117)rt_nil_check(F->y_471)).chain_ = ({ A116 ix1899 = F->up->table_119; ix1899.p[rt_index(G_NV(F->h_1895), ix1899.lo, ix1899.hi) - ix1899.lo]; });
(*({ A116 *ix1900 = &(F->up->table_119); &ix1900->p[rt_index(G_NV(F->h_1895), ix1900->lo, ix1900->hi) - ix1900->lo]; })) = F->y_471;
(*(P117)rt_nil_check(F->y_471)).stack_ = F->up->scope_stack_121;
F->up->scope_stack_121 = F->y_471;
ret_:

  return;
}

static void f_open_scope_474(struct f_greenc_1fr *up_) {
  struct f_open_scope_474fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->depth_120 = rt_add(G_NV(F->up->depth_120), ((rt_int)1LL));
ret_:

  return;
}

static void f_close_scope_475(struct f_greenc_1fr *up_) {
  struct f_close_scope_475fr *F = rt_alloc(sizeof *F);
F->up = up_;
while (((F->up->scope_stack_121 != NULL) && (G_NV((*(P117)rt_nil_check(F->up->scope_stack_121)).depth_) == G_NV(F->up->depth_120)))) {
(*({ A116 *ix1902 = &(F->up->table_119); &ix1902->p[rt_index(f_hash_425(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->scope_stack_121)).name_))), ix1902->lo, ix1902->hi) - ix1902->lo]; })) = (*(P117)rt_nil_check(F->up->scope_stack_121)).chain_;
F->up->scope_stack_121 = (*(P117)rt_nil_check(F->up->scope_stack_121)).stack_;
}
L_end_1901: ;
F->up->depth_120 = rt_sub(G_NV(F->up->depth_120), ((rt_int)1LL));
ret_:

  return;
}

static P117 f_new_sym_478(struct f_greenc_1fr *up_, rt_int kind_476, P140 name_477) {
  struct f_new_sym_478fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_476 = kind_476;
F->name_477 = name_477;
F->result_ = ({ R118 *cell1903 = rt_alloc(sizeof(R118)); *cell1903 = cp_R118(({ R118 ag1904; ag1904.kind_ = F->kind_476; ag1904.name_ = F->name_477; ag1904.t_ = NULL; ag1904.c_ = NULL; ag1904.access_path_ = NULL; ag1904.cname_ = NULL; ag1904.ro_ = 0; ag1904.mvalue_ = ((rt_int)0LL); ag1904.hasmv_ = 0; ag1904.decl_ = NULL; ag1904.params_ = NULL; ag1904.result_ = NULL; ag1904.depth_ = ((rt_int)0LL); ag1904.level_ = ((rt_int)0LL); ag1904.byref_ = 0; ag1904.vrp_ = 0; ag1904.hidden_ = 0; ag1904.from_use_ = 0; ag1904.members_ = NULL; ag1904.mnext_ = NULL; ag1904.chain_ = NULL; ag1904.stack_ = NULL; ag1904.flags_ = ((rt_int)0LL); ag1904; })); (P117)cell1903; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P122 f_new_typ_480(struct f_greenc_1fr *up_, rt_int kind_479) {
  struct f_new_typ_480fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_479 = kind_479;
F->result_ = ({ R123 *cell1907 = rt_alloc(sizeof(R123)); *cell1907 = cp_R123(({ R123 ag1908; ag1908.kind_ = F->kind_479; ag1908.name_ = NULL; ag1908.lits_ = NULL; ag1908.elem_ = NULL; ag1908.idx_ = NULL; ag1908.elemcons_ = NULL; ag1908.tcons_ = NULL; ag1908.fields_ = NULL; ag1908.target_ = NULL; ag1908.decl_ = NULL; ag1908.cname_ = NULL; ag1908.forward_ = 0; ag1908.defined_ = 0; ag1908.priv_ = 0; ag1908.next_ = NULL; ag1908.idx2_ = NULL; ag1908.littab_ = NULL; ag1908.parent_ = NULL; ag1908.ndigits_ = ((rt_int)0LL); ag1908.fdelta_ = NULL; ag1908.fsmall_ = NULL; ag1908.dims_ = ((rt_int)0LL); ag1908.is_restricted_ = 0; ag1908; })); (P122)cell1907; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P178 f_new_cons_481(struct f_greenc_1fr *up_) {
  struct f_new_cons_481fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ({ R179 *cell1911 = rt_alloc(sizeof(R179)); *cell1911 = cp_R179(({ R179 ag1912; ag1912.lo_ = NULL; ag1912.hi_ = NULL; ag1912.slen_ = NULL; ag1912.mlo_ = ((rt_int)0LL); ag1912.mhi_ = ((rt_int)0LL); ag1912.hasm_ = 0; ag1912.lo2_ = NULL; ag1912.hi2_ = NULL; ag1912.acc_ = NULL; ag1912.inner_ = NULL; ag1912.dv_ = NULL; ag1912; })); (P178)cell1911; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_bounded_483(struct f_greenc_1fr *up_, P178 c_482) {
  struct f_bounded_483fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_482 = c_482;
if ((F->c_482 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((*(P178)rt_nil_check(F->c_482)).lo_ != NULL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_bounded_hi_485(struct f_greenc_1fr *up_, P178 c_484) {
  struct f_bounded_hi_485fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_484 = c_484;
if ((F->c_484 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((*(P178)rt_nil_check(F->c_484)).hi_ != NULL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_static_bounds_487(struct f_greenc_1fr *up_, P178 c_486) {
  struct f_static_bounds_487fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_486 = c_486;
if ((F->c_486 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = G_NV((*(P178)rt_nil_check(F->c_486)).hasm_);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_discriminated_489(struct f_greenc_1fr *up_, P178 c_488) {
  struct f_discriminated_489fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_488 = c_488;
if ((F->c_488 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((*(P178)rt_nil_check(F->c_488)).dv_ != NULL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_kind_name_491(struct f_greenc_1fr *up_, P122 t_490) {
  struct f_kind_name_491fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_490 = t_490;
if (((*(P122)rt_nil_check(F->t_490)).name_ != NULL)) {
F->result_ = (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_490)).name_));
goto ret_;
}
{ rt_int sel1913 = G_NV((*(P122)rt_nil_check(F->t_490)).kind_);
if (0 || sel1913 == ((rt_int)1LL)) {
F->result_ = rt_g_lit("INTEGER", 7);
goto ret_;
} else if (0 || sel1913 == ((rt_int)2LL)) {
F->result_ = rt_g_lit("BOOLEAN", 7);
goto ret_;
} else if (0 || sel1913 == ((rt_int)3LL)) {
F->result_ = rt_g_lit("FLOAT", 5);
goto ret_;
} else if (0 || sel1913 == ((rt_int)5LL)) {
F->result_ = rt_g_lit("STRING", 6);
goto ret_;
} else if (0 || sel1913 == ((rt_int)10LL)) {
F->result_ = rt_g_lit("null", 4);
goto ret_;
} else if (0 || sel1913 == ((rt_int)11LL)) {
F->result_ = rt_g_lit("CHARACTER", 9);
goto ret_;
} else if (0 || sel1913 == ((rt_int)16LL)) {
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

static void f_check_type_495(struct f_greenc_1fr *up_, P122 got_492, P122 want_493, rt_int line_494) {
  struct f_check_type_495fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->got_492 = got_492;
F->want_493 = want_493;
F->line_494 = line_494;
if ((F->want_493 == NULL)) {
goto ret_;
}
if (((G_NV((*(P122)rt_nil_check(F->got_492)).kind_) == ((rt_int)10LL)) && (G_NV((*(P122)rt_nil_check(F->want_493)).kind_) == ((rt_int)8LL)))) {
goto ret_;
}
if ((!f_same_452(F->up, F->got_492, F->want_493))) {
f_fail_257(F->up, F->line_494, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("type mismatch: ", 15), f_kind_name_491(F->up, F->got_492)), rt_g_lit(" where ", 7)), f_kind_name_491(F->up, F->want_493)), rt_g_lit(" is required", 12)));
}
ret_:

  return;
}

static rt_int f_field_count_497(struct f_greenc_1fr *up_, P122 t_496) {
  struct f_field_count_497fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_496 = t_496;
F->n_1914 = INT64_MIN;
F->n_1914 = ((rt_int)0LL);
F->f_1915 = NULL;
F->f_1915 = (*(P122)rt_nil_check(F->t_496)).fields_;
while ((F->f_1915 != NULL)) {
F->n_1914 = rt_add(G_NV(F->n_1914), ((rt_int)1LL));
F->f_1915 = (*(P1905)rt_nil_check(F->f_1915)).next_;
}
L_end_1916: ;
F->result_ = G_NV(F->n_1914);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_ctype_500(struct f_greenc_1fr *up_, P122 t_498, P140 *r_499) {
  struct f_ctype_500fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_498 = t_498;
F->r_499 = r_499;
F->s_1917 = NULL;
{ rt_int sel1918 = G_NV((*(P122)rt_nil_check(F->t_498)).kind_);
if (0 || sel1918 == ((rt_int)1LL)) {
(*F->r_499) = f_mk_236(F->up, rt_g_lit("rt_int", 6));
} else if (0 || sel1918 == ((rt_int)2LL) || sel1918 == ((rt_int)4LL) || sel1918 == ((rt_int)11LL)) {
(*F->r_499) = f_mk_236(F->up, rt_g_lit("int", 3));
} else if (0 || sel1918 == ((rt_int)3LL) || sel1918 == ((rt_int)16LL)) {
(*F->r_499) = f_mk_236(F->up, rt_g_lit("double", 6));
} else if (0 || sel1918 == ((rt_int)5LL)) {
(*F->r_499) = f_mk_236(F->up, rt_g_lit("rstr", 4));
} else if (0 || sel1918 == ((rt_int)9LL)) {
(*F->r_499) = f_mk_236(F->up, rt_g_lit("void", 4));
} else if (0 || sel1918 == ((rt_int)13LL)) {
(*F->r_499) = f_mk_236(F->up, rt_g_lit("rt_act", 6));
} else if (0 || sel1918 == ((rt_int)14LL)) {
(*F->r_499) = f_mk_236(F->up, rt_g_lit("rt_taskdecl", 11));
} else if (0 || sel1918 == ((rt_int)15LL)) {
(*F->r_499) = f_mk_236(F->up, rt_g_lit("rt_entry", 8));
} else {
if (((*(P122)rt_nil_check(F->t_498)).cname_ == NULL)) {
f_declare_ctype_505(F->up, F->t_498);
} else if ((((G_NV((*(P122)rt_nil_check(F->t_498)).kind_) == ((rt_int)7LL)) && G_NV((*(P122)rt_nil_check(F->t_498)).forward_)) && (!G_NV((*(P122)rt_nil_check(F->t_498)).defined_)))) {
(*(P122)rt_nil_check(F->t_498)).defined_ = 1;
f_field_decls_503(F->up, F->t_498, &F->s_1917);
f_put_to_261(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_498)).cname_))), rt_g_lit(" {", 2)), (*(P140)rt_nil_check(F->s_1917))), rt_g_lit(" };", 3)));
}
(*F->r_499) = (*(P122)rt_nil_check(F->t_498)).cname_;
}
}
ret_:

  return;
}

static void f_field_decls_503(struct f_greenc_1fr *up_, P122 t_501, P140 *r_502) {
  struct f_field_decls_503fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_501 = t_501;
F->r_502 = r_502;
F->f_1919 = NULL;
F->f_1919 = (*(P122)rt_nil_check(F->t_501)).fields_;
F->s_1920 = NULL;
F->ct_1921 = NULL;
F->s_1920 = f_mk_236(F->up, rt_g_lit(" int dummy_;", 12));
while ((F->f_1919 != NULL)) {
f_ctype_500(F->up, (*(P1905)rt_nil_check(F->f_1919)).t_, &F->ct_1921);
F->s_1920 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->s_1920)), one_rt_gstr(32)), (*(P140)rt_nil_check(F->ct_1921))), one_rt_gstr(32)), f_c_field_253(F->up, (*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_1919)).name_)))), one_rt_gstr(59)));
F->f_1919 = (*(P1905)rt_nil_check(F->f_1919)).next_;
}
L_end_1922: ;
(*F->r_502) = F->s_1920;
ret_:

  return;
}

static void f_declare_ctype_505(struct f_greenc_1fr *up_, P122 t_504) {
  struct f_declare_ctype_505fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_504 = t_504;
F->ct_1923 = NULL;
F->s_1924 = NULL;
F->target_1925 = NULL;
if ((G_NV((*(P122)rt_nil_check(F->t_504)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_616(F->up, F->t_504);
}
if ((G_NV((*(P122)rt_nil_check(F->t_504)).kind_) == ((rt_int)6LL))) {
f_new_name_239(F->up, rt_g_lit("A", 1), &(*(P122)rt_nil_check(F->t_504)).cname_);
} else if ((G_NV((*(P122)rt_nil_check(F->t_504)).kind_) == ((rt_int)7LL))) {
f_new_name_239(F->up, rt_g_lit("R", 1), &(*(P122)rt_nil_check(F->t_504)).cname_);
} else {
f_new_name_239(F->up, rt_g_lit("P", 1), &(*(P122)rt_nil_check(F->t_504)).cname_);
}
(*(P122)rt_nil_check(F->t_504)).next_ = F->up->all_types_124;
F->up->all_types_124 = F->t_504;
if ((G_NV((*(P122)rt_nil_check(F->t_504)).kind_) == ((rt_int)8LL))) {
F->target_1925 = (*(P122)rt_nil_check(F->t_504)).target_;
if ((F->target_1925 == NULL)) {
f_fail_257(F->up, ((rt_int)0LL), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the designated type of ", 23), f_kind_name_491(F->up, F->t_504)), rt_g_lit(" is never declared", 18)));
}
if ((G_NV((*(P122)rt_nil_check(F->target_1925)).kind_) == ((rt_int)7LL))) {
if (((*(P122)rt_nil_check(F->target_1925)).cname_ == NULL)) {
f_new_name_239(F->up, rt_g_lit("R", 1), &(*(P122)rt_nil_check(F->target_1925)).cname_);
(*(P122)rt_nil_check(F->target_1925)).next_ = F->up->all_types_124;
F->up->all_types_124 = F->target_1925;
f_put_to_261(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->target_1925)).cname_))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->target_1925)).cname_))), one_rt_gstr(59)));
(*(P122)rt_nil_check(F->target_1925)).forward_ = 1;
}
f_put_to_261(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->target_1925)).cname_))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_504)).cname_))), one_rt_gstr(59)));
} else {
f_ctype_500(F->up, F->target_1925, &F->ct_1923);
f_put_to_261(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef ", 8), (*(P140)rt_nil_check(F->ct_1923))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_504)).cname_))), one_rt_gstr(59)));
}
} else if ((G_NV((*(P122)rt_nil_check(F->t_504)).kind_) == ((rt_int)6LL))) {
f_elem_ctype_574(F->up, (*(P122)rt_nil_check(F->t_504)).elem_, &F->ct_1923);
f_put_to_261(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_504)).cname_))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_504)).cname_))), one_rt_gstr(59)));
f_put_to_261(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_504)).cname_))), rt_g_lit(" { rt_int lo, hi, lo2, hi2; ", 28)), (*(P140)rt_nil_check(F->ct_1923))), rt_g_lit(" *p; };", 7)));
} else {
f_put_to_261(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_504)).cname_))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_504)).cname_))), one_rt_gstr(59)));
(*(P122)rt_nil_check(F->t_504)).defined_ = 1;
f_field_decls_503(F->up, F->t_504, &F->s_1924);
f_put_to_261(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_504)).cname_))), rt_g_lit(" {", 2)), (*(P140)rt_nil_check(F->s_1924))), rt_g_lit(" };", 3)));
}
ret_:

  return;
}

static rt_int f_lit_index_508(struct f_greenc_1fr *up_, P174 lits_506, rt_gstr name_507) {
  struct f_lit_index_508fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lits_506 = lits_506;
F->name_507 = cp_rt_gstr(name_507);
F->i_1926 = INT64_MIN;
F->i_1926 = ((rt_int)0LL);
F->l_1927 = NULL;
F->l_1927 = F->lits_506;
while ((F->l_1927 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->l_1927)).name_)), F->name_507)) {
F->result_ = G_NV(F->i_1926);
goto ret_;
}
F->i_1926 = rt_add(G_NV(F->i_1926), ((rt_int)1LL));
F->l_1927 = (*(P174)rt_nil_check(F->l_1927)).next_;
}
L_end_1928: ;
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_manifest_512(struct f_greenc_1fr *up_, P174 e_509, rt_int *v_510, int *ok_511) {
  struct f_manifest_512fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_509 = e_509;
F->v_510 = v_510;
F->ok_511 = ok_511;
F->a_1929 = INT64_MIN;
F->b_1930 = INT64_MIN;
F->ok2_1931 = INT_MIN;
F->y_1932 = NULL;
(*F->ok_511) = 0;
(*F->v_510) = ((rt_int)0LL);
if ((G_NV((*(P174)rt_nil_check(F->e_509)).kind_) == ((rt_int)1LL))) {
(*F->ok_511) = 1;
(*F->v_510) = G_NV((*(P174)rt_nil_check(F->e_509)).ival_);
} else if ((G_NV((*(P174)rt_nil_check(F->e_509)).kind_) == ((rt_int)15LL))) {
f_manifest_512(F->up, (*(P174)rt_nil_check(F->e_509)).a_, &(*F->v_510), &(*F->ok_511));
 (void)rt_range((*F->ok_511), 0, 1);
} else if (((G_NV((*(P174)rt_nil_check(F->e_509)).kind_) == ((rt_int)6LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_509)).name_)), rt_g_lit("-", 1)))) {
f_manifest_512(F->up, (*(P174)rt_nil_check(F->e_509)).a_, &F->a_1929, &(*F->ok_511));
 (void)rt_range((*F->ok_511), 0, 1);
(*F->v_510) = rt_neg(G_NV(F->a_1929));
} else if (((G_NV((*(P174)rt_nil_check(F->e_509)).kind_) == ((rt_int)7LL)) && ((eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_509)).name_)), rt_g_lit("+", 1)) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_509)).name_)), rt_g_lit("-", 1))) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_509)).name_)), rt_g_lit("*", 1))))) {
f_manifest_512(F->up, (*(P174)rt_nil_check(F->e_509)).a_, &F->a_1929, &(*F->ok_511));
 (void)rt_range((*F->ok_511), 0, 1);
f_manifest_512(F->up, (*(P174)rt_nil_check(F->e_509)).b_, &F->b_1930, &F->ok2_1931);
 (void)rt_range(F->ok2_1931, 0, 1);
(*F->ok_511) = (G_NV((*F->ok_511)) && G_NV(F->ok2_1931));
if (G_NV((*F->ok_511))) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_509)).name_)), rt_g_lit("+", 1))) {
(*F->v_510) = rt_add(G_NV(F->a_1929), G_NV(F->b_1930));
} else if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_509)).name_)), rt_g_lit("-", 1))) {
(*F->v_510) = rt_sub(G_NV(F->a_1929), G_NV(F->b_1930));
} else {
(*F->v_510) = rt_mul(G_NV(F->a_1929), G_NV(F->b_1930));
}
}
} else if ((G_NV((*(P174)rt_nil_check(F->e_509)).kind_) == ((rt_int)5LL))) {
F->y_1932 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_509)).name_)));
if ((((F->y_1932 != NULL) && ((G_NV((*(P117)rt_nil_check(F->y_1932)).kind_) == ((rt_int)2LL)) || (G_NV((*(P117)rt_nil_check(F->y_1932)).kind_) == ((rt_int)7LL)))) && G_NV((*(P117)rt_nil_check(F->y_1932)).hasmv_))) {
(*F->ok_511) = 1;
(*F->v_510) = G_NV((*(P117)rt_nil_check(F->y_1932)).mvalue_);
}
} else if (((G_NV((*(P174)rt_nil_check(F->e_509)).kind_) == ((rt_int)9LL)) && f_is_package_1058(F->up, (*(P174)rt_nil_check(F->e_509)).a_))) {
F->y_1932 = f_member_of_1062(F->up, f_path_of_353(F->up, (*(P174)rt_nil_check(F->e_509)).a_), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_509)).name_)), G_NV((*(P174)rt_nil_check(F->e_509)).line_));
if ((((F->y_1932 != NULL) && ((G_NV((*(P117)rt_nil_check(F->y_1932)).kind_) == ((rt_int)2LL)) || (G_NV((*(P117)rt_nil_check(F->y_1932)).kind_) == ((rt_int)7LL)))) && G_NV((*(P117)rt_nil_check(F->y_1932)).hasmv_))) {
(*F->ok_511) = 1;
(*F->v_510) = G_NV((*(P117)rt_nil_check(F->y_1932)).mvalue_);
}
} else if ((((G_NV((*(P174)rt_nil_check(F->e_509)).kind_) == ((rt_int)10LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_509)).a_)).kind_) == ((rt_int)5LL))) && (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_509)).name_)), rt_g_lit("FIRST", 5)) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_509)).name_)), rt_g_lit("LAST", 4))))) {
F->y_1932 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_509)).a_)).name_)));
if (((((F->y_1932 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_1932)).kind_) == ((rt_int)5LL))) && ((*(P117)rt_nil_check(F->y_1932)).c_ != NULL)) && G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1932)).c_)).hasm_))) {
(*F->ok_511) = 1;
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_509)).name_)), rt_g_lit("FIRST", 5))) {
(*F->v_510) = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1932)).c_)).mlo_);
} else {
(*F->v_510) = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1932)).c_)).mhi_);
}
}
} else if ((((G_NV((*(P174)rt_nil_check(F->e_509)).kind_) == ((rt_int)8LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_509)).a_)).kind_) == ((rt_int)5LL))) && (f_list_len_316(F->up, (*(P174)rt_nil_check(F->e_509)).b_) == ((rt_int)1LL)))) {
F->y_1932 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_509)).a_)).name_)));
if (((((F->y_1932 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_1932)).kind_) == ((rt_int)5LL))) && ((*(P117)rt_nil_check(F->y_1932)).t_ != NULL)) && (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_1932)).t_)).kind_) == ((rt_int)1LL)))) {
f_manifest_512(F->up, (*(P174)rt_nil_check(F->e_509)).b_, &(*F->v_510), &(*F->ok_511));
 (void)rt_range((*F->ok_511), 0, 1);
}
}
ret_:

  return;
}

static void f_resolve_516(struct f_greenc_1fr *up_, P174 st_513, P122 *t_514, P178 *c_515) {
  struct f_resolve_516fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_513 = st_513;
F->t_514 = t_514;
F->c_515 = c_515;
F->y_1933 = NULL;
F->dummy_1934 = NULL;
F->code_1935 = NULL;
F->ok_1936 = INT_MIN;
F->r_1937 = NULL;
(*F->c_515) = f_new_cons_481(F->up);
if ((G_NV((*(P174)rt_nil_check(F->st_513)).kind_) != ((rt_int)80LL))) {
f_type_definition_550(F->up, F->st_513, NULL, &(*F->t_514), &(*F->c_515));
goto ret_;
}
if (((*(P174)rt_nil_check(F->st_513)).tag_ != NULL)) {
F->y_1933 = f_member_of_1062(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->st_513)).tag_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->st_513)).name_)), G_NV((*(P174)rt_nil_check(F->st_513)).line_));
} else {
F->y_1933 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->st_513)).name_)));
}
if (((F->y_1933 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_1933)).kind_) != ((rt_int)5LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->st_513)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->st_513)).name_)), rt_g_lit(" is not a type", 14)));
}
(*F->t_514) = (*(P117)rt_nil_check(F->y_1933)).t_;
if (((*(P117)rt_nil_check(F->y_1933)).c_ != NULL)) {
(*(P178)rt_nil_check((*F->c_515))).lo_ = (*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1933)).c_)).lo_;
(*(P178)rt_nil_check((*F->c_515))).hi_ = (*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1933)).c_)).hi_;
(*(P178)rt_nil_check((*F->c_515))).slen_ = (*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1933)).c_)).slen_;
(*(P178)rt_nil_check((*F->c_515))).mlo_ = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1933)).c_)).mlo_);
(*(P178)rt_nil_check((*F->c_515))).mhi_ = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1933)).c_)).mhi_);
(*(P178)rt_nil_check((*F->c_515))).hasm_ = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1933)).c_)).hasm_);
(*(P178)rt_nil_check((*F->c_515))).acc_ = (*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1933)).c_)).acc_;
(*(P178)rt_nil_check((*F->c_515))).inner_ = (*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1933)).c_)).inner_;
(*(P178)rt_nil_check((*F->c_515))).dv_ = (*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1933)).c_)).dv_;
}
if (((*F->t_514) == NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->st_513)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the type ", 9), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->st_513)).name_))), rt_g_lit(" is used before its full declaration", 36)));
}
if ((G_NV((*(P174)rt_nil_check(F->st_513)).flag_) == ((rt_int)3LL))) {
if (((G_NV((*(P122)rt_nil_check((*F->t_514))).kind_) != ((rt_int)3LL)) && (G_NV((*(P122)rt_nil_check((*F->t_514))).kind_) != ((rt_int)16LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->st_513)).line_), rt_g_lit("an accuracy constraint applies to a real type (RM79 3.5.5)", 58));
}
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->st_513)).b_, NULL, &F->dummy_1934, &(*(P178)rt_nil_check((*F->c_515))).acc_);
}
if (((G_NV((*(P174)rt_nil_check(F->st_513)).flag_) == ((rt_int)1LL)) || ((G_NV((*(P174)rt_nil_check(F->st_513)).flag_) == ((rt_int)3LL)) && ((*(P174)rt_nil_check(F->st_513)).a_ != NULL)))) {
F->r_1937 = (*(P174)rt_nil_check(F->st_513)).a_;
if (((!f_is_numeric_459(F->up, (*F->t_514))) && (!f_is_discrete_461(F->up, (*F->t_514))))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->st_513)).line_), rt_g_lit("a range constraint applies to a scalar type (RM79 3.5)", 54));
}
f_range_of_534(F->up, F->r_1937, (*F->t_514), (*F->c_515));
} else if ((G_NV((*(P174)rt_nil_check(F->st_513)).flag_) == ((rt_int)2LL))) {
f_constraint_list_520(F->up, F->st_513, (*F->t_514), (*F->c_515));
}
ret_:

  return;
}

static void f_constraint_list_520(struct f_greenc_1fr *up_, P174 st_517, P122 t_518, P178 c_519) {
  struct f_constraint_list_520fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_517 = st_517;
F->t_518 = t_518;
F->c_519 = c_519;
F->r_1938 = NULL;
F->r_1938 = (*(P174)rt_nil_check(F->st_517)).a_;
F->arrt_1939 = NULL;
F->arrt_1939 = F->t_518;
F->cc_1940 = NULL;
F->cc_1940 = F->c_519;
F->it_1941 = NULL;
if ((G_NV((*(P122)rt_nil_check(F->t_518)).kind_) == ((rt_int)7LL))) {
f_discriminant_constraint_524(F->up, F->st_517, F->t_518, F->c_519);
goto ret_;
}
if ((G_NV((*(P122)rt_nil_check(F->t_518)).kind_) != ((rt_int)6LL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->st_517)).line_), rt_g_lit("this type takes no index constraint", 35));
}
if ((f_list_len_316(F->up, F->r_1938) != G_NV((*(P122)rt_nil_check(F->t_518)).dims_))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->st_517)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("an index constraint gives a range for each of the ", 50), rt_g_s2g(rt_str_of_int(G_NV((*(P122)rt_nil_check(F->t_518)).dims_)))), rt_g_lit(" indexes (RM79 3.6)", 19)));
}
while ((F->r_1938 != NULL)) {
if (((*(P174)rt_nil_check(F->r_1938)).formal_ != NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->st_517)).line_), rt_g_lit("an index constraint is a list of discrete ranges (RM79 3.6)", 59));
}
f_discrete_bounds_530(F->up, F->r_1938, (*(P122)rt_nil_check(F->arrt_1939)).idx_, &F->it_1941, &(*(P178)rt_nil_check(F->cc_1940)).lo_, &(*(P178)rt_nil_check(F->cc_1940)).hi_);
f_check_type_495(F->up, F->it_1941, (*(P122)rt_nil_check(F->arrt_1939)).idx_, G_NV((*(P174)rt_nil_check(F->st_517)).line_));
(*(P178)rt_nil_check(F->cc_1940)).mlo_ = ((rt_int)0LL);
(*(P178)rt_nil_check(F->cc_1940)).mhi_ = ((rt_int)0LL);
(*(P178)rt_nil_check(F->cc_1940)).hasm_ = 0;
F->r_1938 = (*(P174)rt_nil_check(F->r_1938)).next_;
if ((F->r_1938 != NULL)) {
(*(P178)rt_nil_check(F->cc_1940)).inner_ = f_new_cons_481(F->up);
F->cc_1940 = (*(P178)rt_nil_check(F->cc_1940)).inner_;
F->arrt_1939 = (*(P122)rt_nil_check(F->arrt_1939)).elem_;
}
}
L_end_1942: ;
ret_:

  return;
}

static void f_discriminant_constraint_524(struct f_greenc_1fr *up_, P174 st_521, P122 t_522, P178 c_523) {
  struct f_discriminant_constraint_524fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_521 = st_521;
F->t_522 = t_522;
F->c_523 = c_523;
F->a_1943 = NULL;
F->a_1943 = (*(P174)rt_nil_check(F->st_521)).a_;
F->f_1944 = NULL;
F->f_1944 = (*(P122)rt_nil_check(F->t_522)).fields_;
F->vt_1945 = NULL;
F->v_1946 = NULL;
F->d_1947 = NULL;
F->tail_1948 = NULL;
(*(P178)rt_nil_check(F->c_523)).dv_ = NULL;
while ((F->a_1943 != NULL)) {
if (((*(P174)rt_nil_check(F->a_1943)).formal_ != NULL)) {
F->f_1944 = (*(P122)rt_nil_check(F->t_522)).fields_;
while (((F->f_1944 != NULL) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_1944)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1943)).formal_)))))) {
F->f_1944 = (*(P1905)rt_nil_check(F->f_1944)).next_;
}
L_end_1950: ;
} else {
while (((F->f_1944 != NULL) && (!G_NV((*(P1905)rt_nil_check(F->f_1944)).is_discr_)))) {
F->f_1944 = (*(P1905)rt_nil_check(F->f_1944)).next_;
}
L_end_1951: ;
}
if (((F->f_1944 == NULL) || (!G_NV((*(P1905)rt_nil_check(F->f_1944)).is_discr_)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->st_521)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("a discriminant constraint gives the values of discriminants of ", 63), f_kind_name_491(F->up, F->t_522)), rt_g_lit(" (RM79 3.7.3)", 13)));
}
f_gexpr_819(F->up, F->a_1943, (*(P1905)rt_nil_check(F->f_1944)).t_, &F->vt_1945, &F->v_1946);
f_check_type_495(F->up, F->vt_1945, (*(P1905)rt_nil_check(F->f_1944)).t_, G_NV((*(P174)rt_nil_check(F->st_521)).line_));
F->d_1947 = ({ R1910 *cell1952 = rt_alloc(sizeof(R1910)); *cell1952 = cp_R1910(({ R1910 ag1953; ag1953.name_ = (*(P1905)rt_nil_check(F->f_1944)).name_; ag1953.v_ = F->v_1946; ag1953.next_ = NULL; ag1953; })); (P1909)cell1952; });
if ((F->tail_1948 == NULL)) {
(*(P178)rt_nil_check(F->c_523)).dv_ = F->d_1947;
} else {
(*(P1909)rt_nil_check(F->tail_1948)).next_ = F->d_1947;
}
F->tail_1948 = F->d_1947;
if (((*(P174)rt_nil_check(F->a_1943)).formal_ == NULL)) {
F->f_1944 = (*(P1905)rt_nil_check(F->f_1944)).next_;
}
F->a_1943 = (*(P174)rt_nil_check(F->a_1943)).next_;
}
L_end_1949: ;
F->f_1944 = (*(P122)rt_nil_check(F->t_522)).fields_;
while ((F->f_1944 != NULL)) {
if (G_NV((*(P1905)rt_nil_check(F->f_1944)).is_discr_)) {
F->d_1947 = (*(P178)rt_nil_check(F->c_523)).dv_;
while (((F->d_1947 != NULL) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P1909)rt_nil_check(F->d_1947)).name_)), (*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_1944)).name_)))))) {
F->d_1947 = (*(P1909)rt_nil_check(F->d_1947)).next_;
}
L_end_1955: ;
if ((F->d_1947 == NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->st_521)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("no value for discriminant ", 26), (*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_1944)).name_))), rt_g_lit(" (RM79 3.7.3)", 13)));
}
}
F->f_1944 = (*(P1905)rt_nil_check(F->f_1944)).next_;
}
L_end_1954: ;
ret_:

  return;
}

static void f_discrete_bounds_530(struct f_greenc_1fr *up_, P174 r_525, P122 want_526, P122 *t_527, P140 *lo_528, P140 *hi_529) {
  struct f_discrete_bounds_530fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_525 = r_525;
F->want_526 = want_526;
F->t_527 = t_527;
F->lo_528 = lo_528;
F->hi_529 = hi_529;
F->c_1956 = NULL;
F->y_1957 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->r_525)).kind_) == ((rt_int)14LL))) {
f_range_bounds_814(F->up, (*(P174)rt_nil_check(F->r_525)).a_, (*(P174)rt_nil_check(F->r_525)).b_, F->want_526, G_NV((*(P174)rt_nil_check(F->r_525)).line_), &(*F->t_527), &(*F->lo_528), &(*F->hi_529));
goto ret_;
}
if ((G_NV((*(P174)rt_nil_check(F->r_525)).kind_) == ((rt_int)5LL))) {
F->y_1957 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_525)).name_)));
if (((F->y_1957 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_1957)).kind_) != ((rt_int)5LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->r_525)).line_), rt_g_lit("a discrete range is L .. H, T range L .. H or a type mark (RM79 3.6)", 68));
}
} else if ((G_NV((*(P174)rt_nil_check(F->r_525)).kind_) != ((rt_int)80LL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->r_525)).line_), rt_g_lit("a discrete range is L .. H, T range L .. H or a type mark (RM79 3.6)", 68));
}
if ((G_NV((*(P174)rt_nil_check(F->r_525)).kind_) == ((rt_int)5LL))) {
(*F->t_527) = (*(P117)rt_nil_check(F->y_1957)).t_;
F->c_1956 = (*(P117)rt_nil_check(F->y_1957)).c_;
} else {
f_resolve_516(F->up, F->r_525, &(*F->t_527), &F->c_1956);
}
if (((F->c_1956 == NULL) || ((*(P178)rt_nil_check(F->c_1956)).lo_ == NULL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->r_525)).line_), rt_g_lit("this type mark has no bounds to give a discrete range", 53));
}
(*F->lo_528) = (*(P178)rt_nil_check(F->c_1956)).lo_;
(*F->hi_529) = (*(P178)rt_nil_check(F->c_1956)).hi_;
ret_:

  return;
}

static void f_range_of_534(struct f_greenc_1fr *up_, P174 r_531, P122 t_532, P178 c_533) {
  struct f_range_of_534fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_531 = r_531;
F->t_532 = t_532;
F->c_533 = c_533;
F->dummy_1958 = NULL;
F->ok_1959 = INT_MIN;
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->r_531)).a_, F->t_532, &F->dummy_1958, &(*(P178)rt_nil_check(F->c_533)).lo_);
f_check_type_495(F->up, F->dummy_1958, F->t_532, G_NV((*(P174)rt_nil_check(F->r_531)).line_));
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->r_531)).b_, F->t_532, &F->dummy_1958, &(*(P178)rt_nil_check(F->c_533)).hi_);
f_check_type_495(F->up, F->dummy_1958, F->t_532, G_NV((*(P174)rt_nil_check(F->r_531)).line_));
if ((G_NV((*(P122)rt_nil_check(F->t_532)).kind_) == ((rt_int)16LL))) {
(*(P178)rt_nil_check(F->c_533)).lo_ = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_533)).lo_))), one_rt_gstr(41)));
(*(P178)rt_nil_check(F->c_533)).hi_ = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_533)).hi_))), one_rt_gstr(41)));
}
f_manifest_512(F->up, (*(P174)rt_nil_check(F->r_531)).a_, &(*(P178)rt_nil_check(F->c_533)).mlo_, &F->ok_1959);
 (void)rt_range(F->ok_1959, 0, 1);
(*(P178)rt_nil_check(F->c_533)).hasm_ = G_NV(F->ok_1959);
f_manifest_512(F->up, (*(P174)rt_nil_check(F->r_531)).b_, &(*(P178)rt_nil_check(F->c_533)).mhi_, &F->ok_1959);
 (void)rt_range(F->ok_1959, 0, 1);
(*(P178)rt_nil_check(F->c_533)).hasm_ = (G_NV((*(P178)rt_nil_check(F->c_533)).hasm_) && G_NV(F->ok_1959));
ret_:

  return;
}

static void f_fresh_typ_538(struct f_greenc_1fr *up_, rt_int kind_535, P140 name_536, P122 *t_537) {
  struct f_fresh_typ_538fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_535 = kind_535;
F->name_536 = name_536;
F->t_537 = t_537;
F->ph_1960 = NULL;
F->ph_1960 = F->up->completing_173;
F->up->completing_173 = NULL;
if ((F->ph_1960 == NULL)) {
(*F->t_537) = f_new_typ_480(F->up, F->kind_535);
(*(P122)rt_nil_check((*F->t_537))).name_ = F->name_536;
goto ret_;
}
as_R123(&(*(P122)rt_nil_check(F->ph_1960)), (*(P122)rt_nil_check(f_new_typ_480(F->up, F->kind_535))));
(*(P122)rt_nil_check(F->ph_1960)).name_ = F->name_536;
(*F->t_537) = F->ph_1960;
ret_:

  return;
}

static void f_inherit_542(struct f_greenc_1fr *up_, P122 parent_539, P122 t_540, rt_int line_541) {
  struct f_inherit_542fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->parent_539 = parent_539;
F->t_540 = t_540;
F->line_541 = line_541;
F->s_1961 = NULL;
F->s_1961 = F->up->scope_stack_121;
F->z_1962 = NULL;
F->p_1963 = NULL;
F->q_1964 = NULL;
F->tail_1965 = NULL;
F->uses_1966 = INT_MIN;
F->news_1967 = NULL;
while ((F->s_1961 != NULL)) {
if (((((G_NV((*(P117)rt_nil_check(F->s_1961)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->s_1961)).kind_) == ((rt_int)4LL))) && (!G_NV((*(P117)rt_nil_check(F->s_1961)).hidden_))) && ((*(P117)rt_nil_check(F->s_1961)).members_ == NULL))) {
F->uses_1966 = f_same_452(F->up, (*(P117)rt_nil_check(F->s_1961)).result_, F->parent_539);
F->p_1963 = (*(P117)rt_nil_check(F->s_1961)).params_;
while ((F->p_1963 != NULL)) {
F->uses_1966 = (G_NV(F->uses_1966) || f_same_452(F->up, (*(P1887)rt_nil_check(F->p_1963)).t_, F->parent_539));
F->p_1963 = (*(P1887)rt_nil_check(F->p_1963)).next_;
}
L_end_1969: ;
if (G_NV(F->uses_1966)) {
f_copy_sym_1067(F->up, F->s_1961, &F->z_1962);
(*(P117)rt_nil_check(F->z_1962)).params_ = NULL;
F->tail_1965 = NULL;
F->p_1963 = (*(P117)rt_nil_check(F->s_1961)).params_;
while ((F->p_1963 != NULL)) {
F->q_1964 = ({ R1888 *cell1971 = rt_alloc(sizeof(R1888)); *cell1971 = cp_R1888(({ R1888 ag1972; ag1972.name_ = (*(P1887)rt_nil_check(F->p_1963)).name_; ag1972.mode_ = G_NV((*(P1887)rt_nil_check(F->p_1963)).mode_); ag1972.t_ = (*(P1887)rt_nil_check(F->p_1963)).t_; ag1972.c_ = (*(P1887)rt_nil_check(F->p_1963)).c_; ag1972.cfield_ = (*(P1887)rt_nil_check(F->p_1963)).cfield_; ag1972.dflt_ = (*(P1887)rt_nil_check(F->p_1963)).dflt_; ag1972.next_ = NULL; ag1972.dsym_ = (*(P1887)rt_nil_check(F->p_1963)).dsym_; ag1972; })); (P1887)cell1971; });
if (f_same_452(F->up, (*(P1887)rt_nil_check(F->q_1964)).t_, F->parent_539)) {
(*(P1887)rt_nil_check(F->q_1964)).t_ = F->t_540;
}
if ((F->tail_1965 == NULL)) {
(*(P117)rt_nil_check(F->z_1962)).params_ = F->q_1964;
} else {
(*(P1887)rt_nil_check(F->tail_1965)).next_ = F->q_1964;
}
F->tail_1965 = F->q_1964;
F->p_1963 = (*(P1887)rt_nil_check(F->p_1963)).next_;
}
L_end_1970: ;
if (f_same_452(F->up, (*(P117)rt_nil_check(F->z_1962)).result_, F->parent_539)) {
(*(P117)rt_nil_check(F->z_1962)).result_ = F->t_540;
}
(*(P117)rt_nil_check(F->z_1962)).chain_ = F->news_1967;
F->news_1967 = F->z_1962;
}
}
F->s_1961 = (*(P117)rt_nil_check(F->s_1961)).stack_;
}
L_end_1968: ;
while ((F->news_1967 != NULL)) {
F->z_1962 = F->news_1967;
F->news_1967 = (*(P117)rt_nil_check(F->news_1967)).chain_;
(*(P117)rt_nil_check(F->z_1962)).chain_ = NULL;
f_define_473(F->up, F->z_1962, F->line_541);
}
L_end_1973: ;
ret_:

  return;
}

static void f_derive_literals_545(struct f_greenc_1fr *up_, P122 t_543, rt_int line_544) {
  struct f_derive_literals_545fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_543 = t_543;
F->line_544 = line_544;
F->l_1974 = NULL;
F->l_1974 = (*(P122)rt_nil_check(F->t_543)).lits_;
F->n_1975 = INT64_MIN;
F->n_1975 = ((rt_int)0LL);
F->y_1976 = NULL;
while ((F->l_1974 != NULL)) {
if ((G_NV((*(P174)rt_nil_check(F->l_1974)).kind_) == ((rt_int)5LL))) {
F->y_1976 = f_new_sym_478(F->up, ((rt_int)7LL), (*(P174)rt_nil_check(F->l_1974)).name_);
(*(P117)rt_nil_check(F->y_1976)).t_ = F->t_543;
(*(P117)rt_nil_check(F->y_1976)).result_ = F->t_543;
(*(P117)rt_nil_check(F->y_1976)).mvalue_ = G_NV(F->n_1975);
(*(P117)rt_nil_check(F->y_1976)).hasmv_ = 1;
f_define_473(F->up, F->y_1976, F->line_544);
}
F->n_1975 = rt_add(G_NV(F->n_1975), ((rt_int)1LL));
F->l_1974 = (*(P174)rt_nil_check(F->l_1974)).next_;
}
L_end_1977: ;
ret_:

  return;
}

static void f_type_definition_550(struct f_greenc_1fr *up_, P174 d_546, P140 name_547, P122 *t_548, P178 *c_549) {
  struct f_type_definition_550fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_546 = d_546;
F->name_547 = name_547;
F->t_548 = t_548;
F->c_549 = c_549;
F->dummy_1978 = NULL;
F->it_1979 = NULL;
F->ic_1980 = NULL;
F->l_1981 = NULL;
F->comp_1982 = NULL;
F->f_1983 = NULL;
F->tail_1984 = NULL;
F->ok_1985 = INT_MIN;
F->n_1986 = INT64_MIN;
F->y_1987 = NULL;
(*F->c_549) = f_new_cons_481(F->up);
{ rt_int sel1988 = G_NV((*(P174)rt_nil_check(F->d_546)).kind_);
if (0 || sel1988 == ((rt_int)70LL)) {
f_fresh_typ_538(F->up, ((rt_int)4LL), F->name_547, &(*F->t_548));
(*(P122)rt_nil_check((*F->t_548))).lits_ = (*(P174)rt_nil_check(F->d_546)).a_;
F->l_1981 = (*(P174)rt_nil_check(F->d_546)).a_;
F->n_1986 = ((rt_int)0LL);
while ((F->l_1981 != NULL)) {
if ((G_NV((*(P174)rt_nil_check(F->l_1981)).kind_) == ((rt_int)5LL))) {
F->y_1987 = f_new_sym_478(F->up, ((rt_int)7LL), (*(P174)rt_nil_check(F->l_1981)).name_);
(*(P117)rt_nil_check(F->y_1987)).t_ = (*F->t_548);
(*(P117)rt_nil_check(F->y_1987)).result_ = (*F->t_548);
(*(P117)rt_nil_check(F->y_1987)).mvalue_ = G_NV(F->n_1986);
(*(P117)rt_nil_check(F->y_1987)).hasmv_ = 1;
f_define_473(F->up, F->y_1987, G_NV((*(P174)rt_nil_check(F->l_1981)).line_));
}
F->n_1986 = rt_add(G_NV(F->n_1986), ((rt_int)1LL));
F->l_1981 = (*(P174)rt_nil_check(F->l_1981)).next_;
}
L_end_1989: ;
(*(P178)rt_nil_check((*F->c_549))).lo_ = f_mk_236(F->up, rt_g_lit("0", 1));
(*(P178)rt_nil_check((*F->c_549))).hi_ = f_mk_236(F->up, rt_g_s2g(rt_str_of_int(rt_sub(G_NV(F->n_1986), ((rt_int)1LL)))));
(*(P178)rt_nil_check((*F->c_549))).mlo_ = ((rt_int)0LL);
(*(P178)rt_nil_check((*F->c_549))).mhi_ = rt_sub(G_NV(F->n_1986), ((rt_int)1LL));
(*(P178)rt_nil_check((*F->c_549))).hasm_ = 1;
} else if (0 || sel1988 == ((rt_int)71LL)) {
f_fresh_typ_538(F->up, ((rt_int)1LL), F->name_547, &(*F->t_548));
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->d_546)).a_, F->up->ty_int_156, &F->dummy_1978, &(*(P178)rt_nil_check((*F->c_549))).lo_);
if ((G_NV((*(P122)rt_nil_check(F->dummy_1978)).kind_) != ((rt_int)1LL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->d_546)).line_), rt_g_lit("the bounds of an integer type are integers (RM79 3.5.4)", 55));
}
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->d_546)).b_, F->up->ty_int_156, &F->dummy_1978, &(*(P178)rt_nil_check((*F->c_549))).hi_);
if ((G_NV((*(P122)rt_nil_check(F->dummy_1978)).kind_) != ((rt_int)1LL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->d_546)).line_), rt_g_lit("the bounds of an integer type are integers (RM79 3.5.4)", 55));
}
f_manifest_512(F->up, (*(P174)rt_nil_check(F->d_546)).a_, &(*(P178)rt_nil_check((*F->c_549))).mlo_, &F->ok_1985);
 (void)rt_range(F->ok_1985, 0, 1);
(*(P178)rt_nil_check((*F->c_549))).hasm_ = G_NV(F->ok_1985);
f_manifest_512(F->up, (*(P174)rt_nil_check(F->d_546)).b_, &(*(P178)rt_nil_check((*F->c_549))).mhi_, &F->ok_1985);
 (void)rt_range(F->ok_1985, 0, 1);
(*(P178)rt_nil_check((*F->c_549))).hasm_ = (G_NV((*(P178)rt_nil_check((*F->c_549))).hasm_) && G_NV(F->ok_1985));
(*(P122)rt_nil_check((*F->t_548))).parent_ = F->up->ty_int_156;
(*(P122)rt_nil_check((*F->t_548))).tcons_ = (*F->c_549);
if ((G_NV((*(P178)rt_nil_check((*F->c_549))).hasm_) && ((G_NV((*(P178)rt_nil_check((*F->c_549))).mlo_) >= rt_neg(((rt_int)2147483648LL))) && (G_NV((*(P178)rt_nil_check((*F->c_549))).mhi_) <= ((rt_int)2147483647LL))))) {
(*(P122)rt_nil_check((*F->t_548))).parent_ = F->up->ty_short_167;
}
f_inherit_542(F->up, (*(P122)rt_nil_check((*F->t_548))).parent_, (*F->t_548), G_NV((*(P174)rt_nil_check(F->d_546)).line_));
} else if (0 || sel1988 == ((rt_int)72LL)) {
f_real_type_614(F->up, F->d_546, F->name_547, &(*F->t_548), &(*F->c_549));
} else if (0 || sel1988 == ((rt_int)73LL)) {
f_array_type_557(F->up, (*(P174)rt_nil_check(F->d_546)).a_, (*(P174)rt_nil_check(F->d_546)).b_, F->name_547, G_NV((*(P174)rt_nil_check(F->d_546)).line_), &(*F->t_548), &(*F->c_549));
} else if (0 || sel1988 == ((rt_int)74LL)) {
f_fresh_typ_538(F->up, ((rt_int)7LL), F->name_547, &(*F->t_548));
F->up->disc_syms_182 = NULL;
f_record_components_595(F->up, (*(P174)rt_nil_check(F->d_546)).a_, (*F->t_548), NULL, G_NV((*(P174)rt_nil_check(F->d_546)).line_));
while ((F->up->disc_syms_182 != NULL)) {
f_remove_sym_590(F->up, F->up->disc_syms_182);
F->up->disc_syms_182 = (*(P117)rt_nil_check(F->up->disc_syms_182)).mnext_;
}
L_end_1990: ;
} else if (0 || sel1988 == ((rt_int)75LL)) {
f_fresh_typ_538(F->up, ((rt_int)8LL), F->name_547, &(*F->t_548));
(*(P122)rt_nil_check((*F->t_548))).decl_ = (*(P174)rt_nil_check(F->d_546)).a_;
if (((((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->d_546)).a_)).kind_) == ((rt_int)80LL)) && (f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->d_546)).a_)).name_))) != NULL)) && (G_NV((*(P117)rt_nil_check(f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->d_546)).a_)).name_))))).kind_) == ((rt_int)5LL))) && ((*(P117)rt_nil_check(f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->d_546)).a_)).name_))))).t_ != NULL))) {
f_finish_ptr_616(F->up, (*F->t_548));
}
} else if (0 || sel1988 == ((rt_int)76LL)) {
f_derived_type_609(F->up, F->d_546, F->name_547, &(*F->t_548), &(*F->c_549));
} else {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->d_546)).line_), rt_g_lit("this type definition is not handled", 35));
}
}
ret_:

  return;
}

static void f_array_type_557(struct f_greenc_1fr *up_, P174 idx_551, P174 comp_552, P140 name_553, rt_int line_554, P122 *t_555, P178 *c_556) {
  struct f_array_type_557fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->idx_551 = idx_551;
F->comp_552 = comp_552;
F->name_553 = name_553;
F->line_554 = line_554;
F->t_555 = t_555;
F->c_556 = c_556;
F->l_1991 = NULL;
F->l_1991 = F->idx_551;
F->rowc_1992 = NULL;
F->ic_1993 = NULL;
F->it_1994 = NULL;
(*F->c_556) = f_new_cons_481(F->up);
f_fresh_typ_538(F->up, ((rt_int)6LL), F->name_553, &(*F->t_555));
(*(P122)rt_nil_check((*F->t_555))).dims_ = f_list_len_316(F->up, F->idx_551);
if (((*(P174)rt_nil_check(F->idx_551)).next_ == NULL)) {
f_resolve_516(F->up, F->comp_552, &(*(P122)rt_nil_check((*F->t_555))).elem_, &(*(P122)rt_nil_check((*F->t_555))).elemcons_);
} else {
if (((G_NV((*(P174)rt_nil_check(F->idx_551)).kind_) == ((rt_int)14LL)) != (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->idx_551)).next_)).kind_) == ((rt_int)14LL)))) {
f_fail_257(F->up, F->line_554, rt_g_lit("the indexes of an array are all discrete ranges or all type marks (RM79 3.6)", 76));
}
f_array_type_557(F->up, (*(P174)rt_nil_check(F->idx_551)).next_, F->comp_552, NULL, F->line_554, &(*(P122)rt_nil_check((*F->t_555))).elem_, &F->rowc_1992);
if (((*(P178)rt_nil_check(F->rowc_1992)).lo_ != NULL)) {
(*(P122)rt_nil_check((*F->t_555))).elemcons_ = F->rowc_1992;
}
}
if ((G_NV((*(P174)rt_nil_check(F->l_1991)).kind_) == ((rt_int)14LL))) {
f_discrete_bounds_530(F->up, F->l_1991, NULL, &(*(P122)rt_nil_check((*F->t_555))).idx_, &(*(P178)rt_nil_check((*F->c_556))).lo_, &(*(P178)rt_nil_check((*F->c_556))).hi_);
f_static_range_561(F->up, (*(P174)rt_nil_check(F->l_1991)).a_, (*(P174)rt_nil_check(F->l_1991)).b_, (*F->c_556));
} else if (((G_NV((*(P174)rt_nil_check(F->l_1991)).kind_) == ((rt_int)80LL)) && (G_NV((*(P174)rt_nil_check(F->l_1991)).flag_) == ((rt_int)1LL)))) {
f_discrete_bounds_530(F->up, F->l_1991, NULL, &(*(P122)rt_nil_check((*F->t_555))).idx_, &(*(P178)rt_nil_check((*F->c_556))).lo_, &(*(P178)rt_nil_check((*F->c_556))).hi_);
} else {
f_resolve_516(F->up, F->l_1991, &(*(P122)rt_nil_check((*F->t_555))).idx_, &F->ic_1993);
if (((((G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check((*F->t_555))).idx_)).kind_) == ((rt_int)4LL)) || (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check((*F->t_555))).idx_)).kind_) == ((rt_int)11LL))) || (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check((*F->t_555))).idx_)).kind_) == ((rt_int)2LL))) || (G_NV((*(P178)rt_nil_check(F->ic_1993)).hasm_) && ((rt_sub(G_NV((*(P178)rt_nil_check(F->ic_1993)).mhi_), G_NV((*(P178)rt_nil_check(F->ic_1993)).mlo_)) >= ((rt_int)0LL)) && (rt_sub(G_NV((*(P178)rt_nil_check(F->ic_1993)).mhi_), G_NV((*(P178)rt_nil_check(F->ic_1993)).mlo_)) < ((rt_int)1000000LL)))))) {
(*(P178)rt_nil_check((*F->c_556))).lo_ = (*(P178)rt_nil_check(F->ic_1993)).lo_;
(*(P178)rt_nil_check((*F->c_556))).hi_ = (*(P178)rt_nil_check(F->ic_1993)).hi_;
(*(P178)rt_nil_check((*F->c_556))).mlo_ = G_NV((*(P178)rt_nil_check(F->ic_1993)).mlo_);
(*(P178)rt_nil_check((*F->c_556))).mhi_ = G_NV((*(P178)rt_nil_check(F->ic_1993)).mhi_);
(*(P178)rt_nil_check((*F->c_556))).hasm_ = G_NV((*(P178)rt_nil_check(F->ic_1993)).hasm_);
} else if (((*(P178)rt_nil_check(F->ic_1993)).lo_ != NULL)) {
(*(P122)rt_nil_check((*F->t_555))).tcons_ = f_new_cons_481(F->up);
(*(P178)rt_nil_check((*(P122)rt_nil_check((*F->t_555))).tcons_)).lo_ = (*(P178)rt_nil_check(F->ic_1993)).lo_;
}
}
if ((!f_is_discrete_461(F->up, (*(P122)rt_nil_check((*F->t_555))).idx_))) {
f_fail_257(F->up, F->line_554, rt_g_lit("an index is of a discrete type (RM79 3.6)", 41));
}
if ((G_NV((*(P122)rt_nil_check((*F->t_555))).dims_) > ((rt_int)1LL))) {
(*(P178)rt_nil_check((*F->c_556))).inner_ = F->rowc_1992;
if ((((*(P178)rt_nil_check((*F->c_556))).lo_ == NULL) != ((*(P178)rt_nil_check(F->rowc_1992)).lo_ == NULL))) {
(*(P178)rt_nil_check((*F->c_556))).lo_ = NULL;
(*(P178)rt_nil_check((*F->c_556))).hi_ = NULL;
(*(P178)rt_nil_check((*F->c_556))).inner_ = NULL;
(*(P122)rt_nil_check((*F->t_555))).elemcons_ = NULL;
}
}
if (((*(P178)rt_nil_check((*F->c_556))).lo_ != NULL)) {
(*(P122)rt_nil_check((*F->t_555))).tcons_ = (*F->c_556);
}
ret_:

  return;
}

static void f_static_range_561(struct f_greenc_1fr *up_, P174 l_558, P174 h_559, P178 c_560) {
  struct f_static_range_561fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_558 = l_558;
F->h_559 = h_559;
F->c_560 = c_560;
F->ok_1995 = INT_MIN;
F->ok2_1996 = INT_MIN;
f_manifest_512(F->up, F->l_558, &(*(P178)rt_nil_check(F->c_560)).mlo_, &F->ok_1995);
 (void)rt_range(F->ok_1995, 0, 1);
f_manifest_512(F->up, F->h_559, &(*(P178)rt_nil_check(F->c_560)).mhi_, &F->ok2_1996);
 (void)rt_range(F->ok2_1996, 0, 1);
if ((f_is_char_lit_800(F->up, F->l_558) && f_is_char_lit_800(F->up, F->h_559))) {
(*(P178)rt_nil_check(F->c_560)).mlo_ = rt_sub(((rt_int)(G_NV(({ rt_gstr ix1997 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->l_558)).name_)); ix1997.p[rt_index(((rt_int)1LL), ix1997.lo, ix1997.hi) - ix1997.lo]; }))) + 1), ((rt_int)1LL));
(*(P178)rt_nil_check(F->c_560)).mhi_ = rt_sub(((rt_int)(G_NV(({ rt_gstr ix1998 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->h_559)).name_)); ix1998.p[rt_index(((rt_int)1LL), ix1998.lo, ix1998.hi) - ix1998.lo]; }))) + 1), ((rt_int)1LL));
F->ok_1995 = 1;
F->ok2_1996 = 1;
}
(*(P178)rt_nil_check(F->c_560)).hasm_ = (G_NV(F->ok_1995) && G_NV(F->ok2_1996));
ret_:

  return;
}

static void f_component_place_567(struct f_greenc_1fr *up_, P122 rt_562, P1905 f_563, rt_gstr a_564, rt_gstr ct_565, P140 *r_566) {
  struct f_component_place_567fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->rt_562 = rt_562;
F->f_563 = f_563;
F->a_564 = cp_rt_gstr(a_564);
F->ct_565 = cp_rt_gstr(ct_565);
F->r_566 = r_566;
F->bits_1999 = NULL;
if (eq_rt_gstr(F->a_564, rt_g_lit("POSITION", 8))) {
(*F->r_566) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)offsetof(", 18), F->ct_565), rt_g_lit(", ", 2)), f_c_field_253(F->up, (*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_563)).name_)))), rt_g_lit("))", 2)));
} else if (eq_rt_gstr(F->a_564, rt_g_lit("FIRST_BIT", 9))) {
(*F->r_566) = f_mk_236(F->up, rt_g_lit("((rt_int)0)", 11));
} else {
(*F->r_566) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(sizeof(((", 19), F->ct_565), rt_g_lit(" *)0)->", 7)), f_c_field_253(F->up, (*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_563)).name_)))), rt_g_lit(") * 8 - 1))", 11)));
}
ret_:

  return;
}

static rt_gstr f_no_value_569(struct f_greenc_1fr *up_, P122 t_568) {
  struct f_no_value_569fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_568 = t_568;
if (((G_NV((*(P122)rt_nil_check(F->t_568)).kind_) == ((rt_int)3LL)) || (G_NV((*(P122)rt_nil_check(F->t_568)).kind_) == ((rt_int)16LL)))) {
F->result_ = rt_g_lit("RT_G_NOVALUE_F", 14);
goto ret_;
} else if ((G_NV((*(P122)rt_nil_check(F->t_568)).kind_) == ((rt_int)1LL))) {
F->result_ = rt_g_lit("INT64_MIN", 9);
goto ret_;
}
F->result_ = rt_g_lit("INT_MIN", 7);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_restricted_here_571(struct f_greenc_1fr *up_, P122 t_570) {
  struct f_restricted_here_571fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_570 = t_570;
if ((!G_NV((*(P122)rt_nil_check(F->t_570)).is_restricted_))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (!f_inside_package_1064(F->up, (*(P122)rt_nil_check(F->t_570)).decl_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_elem_ctype_574(struct f_greenc_1fr *up_, P122 t_572, P140 *r_573) {
  struct f_elem_ctype_574fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_572 = t_572;
F->r_573 = r_573;
if ((G_NV((*(P122)rt_nil_check(F->t_572)).kind_) == ((rt_int)11LL))) {
(*F->r_573) = f_mk_236(F->up, rt_g_lit("unsigned char", 13));
} else {
f_ctype_500(F->up, F->t_572, &(*F->r_573));
}
ret_:

  return;
}

static void f_first_index_577(struct f_greenc_1fr *up_, P122 t_575, P140 *r_576) {
  struct f_first_index_577fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_575 = t_575;
F->r_576 = r_576;
if ((((*(P122)rt_nil_check(F->t_575)).tcons_ != NULL) && ((*(P178)rt_nil_check((*(P122)rt_nil_check(F->t_575)).tcons_)).lo_ != NULL))) {
(*F->r_576) = (*(P178)rt_nil_check((*(P122)rt_nil_check(F->t_575)).tcons_)).lo_;
} else if ((((*(P122)rt_nil_check(F->t_575)).idx_ != NULL) && (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->t_575)).idx_)).kind_) == ((rt_int)1LL)))) {
(*F->r_576) = f_mk_236(F->up, rt_g_lit("1", 1));
} else {
(*F->r_576) = f_mk_236(F->up, rt_g_lit("0", 1));
}
ret_:

  return;
}

static int f_is_string_579(struct f_greenc_1fr *up_, P122 t_578) {
  struct f_is_string_579fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_578 = t_578;
if ((!(F->t_578 != NULL))) {
F->result_ = 0;
goto ret_;
}
if ((!(G_NV((*(P122)rt_nil_check(F->t_578)).kind_) == ((rt_int)6LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_derived_from_457(F->up, F->t_578, F->up->ty_string_160);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_subst_582(struct f_greenc_1fr *up_, rt_gstr s_580, rt_gstr r_581) {
  struct f_subst_582fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_580 = cp_rt_gstr(s_580);
F->r_581 = cp_rt_gstr(r_581);
{ rt_int lo2004 = ({ rt_gstr at2001 = F->s_580; at2001.lo; }), hi2005 = rt_sub(({ rt_gstr at2002 = F->s_580; at2002.hi; }), ((rt_int)1LL));
for (rt_int it2006 = lo2004; it2006 <= hi2005; it2006++) {
F->i_2003 = it2006;
if (((G_NV(({ rt_gstr ix2007 = F->s_580; ix2007.p[rt_index(F->i_2003, ix2007.lo, ix2007.hi) - ix2007.lo]; })) == 64) && (G_NV(({ rt_gstr ix2008 = F->s_580; ix2008.p[rt_index(rt_add(F->i_2003, ((rt_int)1LL)), ix2008.lo, ix2008.hi) - ix2008.lo]; })) == 64))) {
F->result_ = cat_rt_gstr(cat_rt_gstr(({ rt_gstr sl2010 = F->s_580; rt_int l_ = ({ rt_gstr at2009 = F->s_580; at2009.lo; }), h_ = rt_sub(F->i_2003, ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl2010.lo, sl2010.hi); rt_index(h_, sl2010.lo, sl2010.hi); } sl2010.p += l_ - sl2010.lo; sl2010.lo = l_; sl2010.hi = h_; sl2010; }), F->r_581), f_subst_582(F->up, ({ rt_gstr sl2014 = F->s_580; rt_int l_ = rt_add(F->i_2003, ((rt_int)2LL)), h_ = ({ rt_gstr at2013 = F->s_580; at2013.hi; }); if (l_ <= h_) { rt_index(l_, sl2014.lo, sl2014.hi); rt_index(h_, sl2014.lo, sl2014.hi); } sl2014.p += l_ - sl2014.lo; sl2014.lo = l_; sl2014.hi = h_; sl2014; }), F->r_581));
goto ret_;
}
}
}
L_end_2000: ;
F->result_ = F->s_580;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_mentions_record_584(struct f_greenc_1fr *up_, P140 s_583) {
  struct f_mentions_record_584fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_583 = s_583;
if ((F->s_583 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo2018 = ((rt_int)1LL), hi2019 = rt_sub(({ rt_gstr at2016 = (*(P140)rt_nil_check(F->s_583)); at2016.hi >= at2016.lo ? at2016.hi - at2016.lo + 1 : (rt_int)0; }), ((rt_int)1LL));
for (rt_int it2020 = lo2018; it2020 <= hi2019; it2020++) {
F->i_2017 = it2020;
if (((G_NV(({ rt_gstr ix2021 = (*(P140)rt_nil_check(F->s_583)); ix2021.p[rt_index(F->i_2017, ix2021.lo, ix2021.hi) - ix2021.lo]; })) == 64) && (G_NV(({ rt_gstr ix2022 = (*(P140)rt_nil_check(F->s_583)); ix2022.p[rt_index(rt_add(F->i_2017, ((rt_int)1LL)), ix2022.lo, ix2022.hi) - ix2022.lo]; })) == 64))) {
F->result_ = 1;
goto ret_;
}
}
}
L_end_2015: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_subst_cons_588(struct f_greenc_1fr *up_, P178 c_585, rt_gstr r_586, P178 *res_587) {
  struct f_subst_cons_588fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_585 = c_585;
F->r_586 = cp_rt_gstr(r_586);
F->res_587 = res_587;
if (((F->c_585 == NULL) || (!(f_mentions_record_584(F->up, (*(P178)rt_nil_check(F->c_585)).lo_) || f_mentions_record_584(F->up, (*(P178)rt_nil_check(F->c_585)).hi_))))) {
(*F->res_587) = F->c_585;
goto ret_;
}
(*F->res_587) = f_new_cons_481(F->up);
as_R179(&(*(P178)rt_nil_check((*F->res_587))), (*(P178)rt_nil_check(F->c_585)));
(*(P178)rt_nil_check((*F->res_587))).lo_ = f_mk_236(F->up, f_subst_582(F->up, (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_585)).lo_)), F->r_586));
(*(P178)rt_nil_check((*F->res_587))).hi_ = f_mk_236(F->up, f_subst_582(F->up, (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_585)).hi_)), F->r_586));
ret_:

  return;
}

static void f_remove_sym_590(struct f_greenc_1fr *up_, P117 y_589) {
  struct f_remove_sym_590fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_589 = y_589;
F->h_2023 = INT64_MIN;
F->h_2023 = f_hash_425(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_589)).name_)));
F->p_2024 = NULL;
if ((({ A116 ix2025 = F->up->table_119; ix2025.p[rt_index(G_NV(F->h_2023), ix2025.lo, ix2025.hi) - ix2025.lo]; }) == F->y_589)) {
(*({ A116 *ix2026 = &(F->up->table_119); &ix2026->p[rt_index(G_NV(F->h_2023), ix2026->lo, ix2026->hi) - ix2026->lo]; })) = (*(P117)rt_nil_check(F->y_589)).chain_;
} else {
F->p_2024 = ({ A116 ix2027 = F->up->table_119; ix2027.p[rt_index(G_NV(F->h_2023), ix2027.lo, ix2027.hi) - ix2027.lo]; });
while (((F->p_2024 != NULL) && ((*(P117)rt_nil_check(F->p_2024)).chain_ != F->y_589))) {
F->p_2024 = (*(P117)rt_nil_check(F->p_2024)).chain_;
}
L_end_2028: ;
if ((F->p_2024 != NULL)) {
(*(P117)rt_nil_check(F->p_2024)).chain_ = (*(P117)rt_nil_check(F->y_589)).chain_;
}
}
if ((F->up->scope_stack_121 == F->y_589)) {
F->up->scope_stack_121 = (*(P117)rt_nil_check(F->y_589)).stack_;
} else {
F->p_2024 = F->up->scope_stack_121;
while (((F->p_2024 != NULL) && ((*(P117)rt_nil_check(F->p_2024)).stack_ != F->y_589))) {
F->p_2024 = (*(P117)rt_nil_check(F->p_2024)).stack_;
}
L_end_2029: ;
if ((F->p_2024 != NULL)) {
(*(P117)rt_nil_check(F->p_2024)).stack_ = (*(P117)rt_nil_check(F->y_589)).stack_;
}
}
ret_:

  return;
}

static void f_record_components_595(struct f_greenc_1fr *up_, P174 list_591, P122 t_592, P2030 g_593, rt_int line_594) {
  struct f_record_components_595fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->list_591 = list_591;
F->t_592 = t_592;
F->g_593 = g_593;
F->line_594 = line_594;
F->comp_2032 = NULL;
F->comp_2032 = F->list_591;
F->f_2033 = NULL;
F->tail_2034 = NULL;
F->df_2035 = NULL;
F->prev_2036 = NULL;
F->pt_2037 = NULL;
F->vt_2038 = NULL;
F->pc_2039 = NULL;
F->y_2040 = NULL;
F->acc_2041 = NULL;
F->v_2042 = NULL;
F->x_2043 = NULL;
F->arm_2044 = NULL;
F->g2_2045 = NULL;
F->tail_2034 = (*(P122)rt_nil_check(F->t_592)).fields_;
while (((F->tail_2034 != NULL) && ((*(P1905)rt_nil_check(F->tail_2034)).next_ != NULL))) {
F->tail_2034 = (*(P1905)rt_nil_check(F->tail_2034)).next_;
}
L_end_2046: ;
while ((F->comp_2032 != NULL)) {
if ((G_NV((*(P174)rt_nil_check(F->comp_2032)).kind_) == ((rt_int)23LL))) {
F->df_2035 = (*(P122)rt_nil_check(F->t_592)).fields_;
while (((F->df_2035 != NULL) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P1905)rt_nil_check(F->df_2035)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->comp_2032)).a_)).name_)))))) {
F->df_2035 = (*(P1905)rt_nil_check(F->df_2035)).next_;
}
L_end_2048: ;
if (((F->df_2035 == NULL) || (!G_NV((*(P1905)rt_nil_check(F->df_2035)).is_discr_)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->comp_2032)).line_), cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->comp_2032)).a_)).name_)), rt_g_lit(" is not a discriminant: a constant component ", 45)), rt_g_lit("without a value (RM79 3.7.1)", 28)));
}
if ((!f_is_discrete_461(F->up, (*(P1905)rt_nil_check(F->df_2035)).t_))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->comp_2032)).line_), rt_g_lit("the discriminant of a variant part is of a discrete type (RM79 3.7.2)", 69));
}
F->arm_2044 = (*(P174)rt_nil_check(F->comp_2032)).b_;
while ((F->arm_2044 != NULL)) {
F->g2_2045 = ({ R2031 *cell2050 = rt_alloc(sizeof(R2031)); *cell2050 = cp_R2031(({ R2031 ag2051; ag2051.disc_ = (*(P1905)rt_nil_check(F->df_2035)).name_; ag2051.arm_ = F->arm_2044; ag2051.variant_ = F->comp_2032; ag2051.next_ = F->g_593; ag2051; })); (P2030)cell2050; });
f_record_components_595(F->up, (*(P174)rt_nil_check(F->arm_2044)).b_, F->t_592, F->g2_2045, F->line_594);
F->arm_2044 = (*(P174)rt_nil_check(F->arm_2044)).next_;
}
L_end_2049: ;
F->tail_2034 = (*(P122)rt_nil_check(F->t_592)).fields_;
while (((F->tail_2034 != NULL) && ((*(P1905)rt_nil_check(F->tail_2034)).next_ != NULL))) {
F->tail_2034 = (*(P1905)rt_nil_check(F->tail_2034)).next_;
}
L_end_2052: ;
} else {
if ((f_field_index_990(F->up, F->t_592, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->comp_2032)).name_))) != ((rt_int)0LL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->comp_2032)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("component ", 10), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->comp_2032)).name_))), rt_g_lit(" is declared twice (RM79 3.7)", 29)));
}
F->f_2033 = ({ R1906 *cell2053 = rt_alloc(sizeof(R1906)); *cell2053 = cp_R1906(({ R1906 ag2054; ag2054.name_ = (*(P174)rt_nil_check(F->comp_2032)).name_; ag2054.t_ = NULL; ag2054.c_ = NULL; ag2054.next_ = NULL; ag2054.dflt_ = (*(P174)rt_nil_check(F->comp_2032)).b_; ag2054.is_const_ = (G_NV((*(P174)rt_nil_check(F->comp_2032)).flag_) == ((rt_int)1LL)); ag2054.is_discr_ = 0; ag2054.dsym_ = NULL; ag2054.guard_ = F->g_593; ag2054.cond_ = NULL; ag2054.dyn_ = 0; ag2054; })); (P1905)cell2053; });
if ((((*(P174)rt_nil_check(F->comp_2032)).a_ == F->prev_2036) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->comp_2032)).a_)).kind_) != ((rt_int)80LL)))) {
(*(P1905)rt_nil_check(F->f_2033)).t_ = F->pt_2037;
(*(P1905)rt_nil_check(F->f_2033)).c_ = F->pc_2039;
} else {
f_resolve_516(F->up, (*(P174)rt_nil_check(F->comp_2032)).a_, &(*(P1905)rt_nil_check(F->f_2033)).t_, &(*(P1905)rt_nil_check(F->f_2033)).c_);
}
F->prev_2036 = (*(P174)rt_nil_check(F->comp_2032)).a_;
F->pt_2037 = (*(P1905)rt_nil_check(F->f_2033)).t_;
F->pc_2039 = (*(P1905)rt_nil_check(F->f_2033)).c_;
if ((((*(P1905)rt_nil_check(F->f_2033)).c_ != NULL) && (f_mentions_record_584(F->up, (*(P178)rt_nil_check((*(P1905)rt_nil_check(F->f_2033)).c_)).lo_) || f_mentions_record_584(F->up, (*(P178)rt_nil_check((*(P1905)rt_nil_check(F->f_2033)).c_)).hi_)))) {
(*(P1905)rt_nil_check(F->f_2033)).dyn_ = 1;
if ((G_NV((*(P122)rt_nil_check((*(P1905)rt_nil_check(F->f_2033)).t_)).kind_) != ((rt_int)6LL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->comp_2032)).line_), rt_g_lit("a discriminant is used only as an array bound or a variant selector (RM79 3.7.1)", 80));
}
if (((*(P122)rt_nil_check((*(P1905)rt_nil_check(F->f_2033)).t_)).tcons_ == (*(P1905)rt_nil_check(F->f_2033)).c_)) {
(*(P122)rt_nil_check((*(P1905)rt_nil_check(F->f_2033)).t_)).tcons_ = NULL;
}
}
if ((F->g_593 != NULL)) {
f_guard_cond_599(F->up, F->g_593, (*(P1905)rt_nil_check(F->f_2033)).t_, &F->x_2043);
(*(P1905)rt_nil_check(F->f_2033)).cond_ = F->x_2043;
}
if (((*(P174)rt_nil_check(F->comp_2032)).b_ != NULL)) {
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->comp_2032)).b_, (*(P1905)rt_nil_check(F->f_2033)).t_, &F->vt_2038, &F->v_2042);
f_check_type_495(F->up, F->vt_2038, (*(P1905)rt_nil_check(F->f_2033)).t_, G_NV((*(P174)rt_nil_check(F->comp_2032)).line_));
F->y_2040 = f_new_sym_478(F->up, ((rt_int)2LL), f_mk_236(F->up, rt_g_lit("dflt", 4)));
f_storage_647(F->up, rt_g_lit("dflt", 4), (*(P1905)rt_nil_check(F->f_2033)).t_, &F->acc_2041);
(*(P117)rt_nil_check(F->y_2040)).t_ = (*(P1905)rt_nil_check(F->f_2033)).t_;
(*(P117)rt_nil_check(F->y_2040)).c_ = (*(P1905)rt_nil_check(F->f_2033)).c_;
f_bind_650(F->up, F->y_2040, F->acc_2041);
if ((f_composite_622(F->up, (*(P1905)rt_nil_check(F->f_2033)).t_) && (!f_bounded_483(F->up, (*(P1905)rt_nil_check(F->f_2033)).c_)))) {
f_copy_code_632(F->up, (*(P1905)rt_nil_check(F->f_2033)).t_, (*(P140)rt_nil_check(F->v_2042)), &F->x_2043);
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->acc_2041)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2043))), one_rt_gstr(59)));
} else {
f_init_storage_620(F->up, (*(P140)rt_nil_check(F->acc_2041)), (*(P1905)rt_nil_check(F->f_2033)).t_, (*(P1905)rt_nil_check(F->f_2033)).c_);
f_assign_code_628(F->up, (*(P140)rt_nil_check(F->acc_2041)), (*(P1905)rt_nil_check(F->f_2033)).t_, (*(P140)rt_nil_check(F->v_2042)), (*(P1905)rt_nil_check(F->f_2033)).c_, &F->x_2043);
f_emit_263(F->up, (*(P140)rt_nil_check(F->x_2043)));
}
(*(P1905)rt_nil_check(F->f_2033)).dsym_ = F->y_2040;
} else if (G_NV((*(P1905)rt_nil_check(F->f_2033)).is_const_)) {
(*(P1905)rt_nil_check(F->f_2033)).is_discr_ = 1;
F->y_2040 = f_new_sym_478(F->up, ((rt_int)2LL), (*(P1905)rt_nil_check(F->f_2033)).name_);
(*(P117)rt_nil_check(F->y_2040)).t_ = (*(P1905)rt_nil_check(F->f_2033)).t_;
(*(P117)rt_nil_check(F->y_2040)).c_ = (*(P1905)rt_nil_check(F->f_2033)).c_;
(*(P117)rt_nil_check(F->y_2040)).ro_ = 1;
(*(P117)rt_nil_check(F->y_2040)).access_path_ = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(@@.", 4), f_c_field_253(F->up, (*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_2033)).name_)))), one_rt_gstr(41)));
F->up->depth_120 = rt_add(G_NV(F->up->depth_120), ((rt_int)1LL));
f_define_473(F->up, F->y_2040, G_NV((*(P174)rt_nil_check(F->comp_2032)).line_));
F->up->depth_120 = rt_sub(G_NV(F->up->depth_120), ((rt_int)1LL));
(*(P117)rt_nil_check(F->y_2040)).mnext_ = F->up->disc_syms_182;
F->up->disc_syms_182 = F->y_2040;
}
if ((F->tail_2034 == NULL)) {
(*(P122)rt_nil_check(F->t_592)).fields_ = F->f_2033;
} else {
(*(P1905)rt_nil_check(F->tail_2034)).next_ = F->f_2033;
}
F->tail_2034 = F->f_2033;
}
F->comp_2032 = (*(P174)rt_nil_check(F->comp_2032)).next_;
}
L_end_2047: ;
ret_:

  return;
}

static void f_guard_cond_599(struct f_greenc_1fr *up_, P2030 g_596, P122 t_597, P140 *r_598) {
  struct f_guard_cond_599fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->g_596 = g_596;
F->t_597 = t_597;
F->r_598 = r_598;
F->a_2055 = NULL;
F->l_2056 = NULL;
F->df_2057 = NULL;
F->x_2058 = NULL;
F->d_2059 = NULL;
F->dt_2060 = NULL;
F->vt_2061 = NULL;
F->lo_2062 = NULL;
F->hi_2063 = NULL;
(*F->r_598) = f_mk_236(F->up, rt_g_lit("1", 1));
if ((F->g_596 == NULL)) {
goto ret_;
}
F->d_2059 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(@@.", 4), f_c_field_253(F->up, (*(P140)rt_nil_check((*(P2030)rt_nil_check(F->g_596)).disc_)))), one_rt_gstr(41)));
F->df_2057 = NULL;
if ((G_NV((*(P174)rt_nil_check((*(P2030)rt_nil_check(F->g_596)).arm_)).flag_) == ((rt_int)1LL))) {
F->x_2058 = f_mk_236(F->up, rt_g_lit("0", 1));
F->a_2055 = (*(P174)rt_nil_check((*(P2030)rt_nil_check(F->g_596)).variant_)).b_;
while ((F->a_2055 != NULL)) {
if ((F->a_2055 != (*(P2030)rt_nil_check(F->g_596)).arm_)) {
f_arm_test_604(F->up, F->a_2055, (*(P2030)rt_nil_check(F->g_596)).disc_, (*(P140)rt_nil_check(F->d_2059)), &F->x_2058);
}
F->a_2055 = (*(P174)rt_nil_check(F->a_2055)).next_;
}
L_end_2064: ;
F->x_2058 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("!(", 2), (*(P140)rt_nil_check(F->x_2058))), one_rt_gstr(41)));
} else {
F->x_2058 = f_mk_236(F->up, rt_g_lit("0", 1));
f_arm_test_604(F->up, (*(P2030)rt_nil_check(F->g_596)).arm_, (*(P2030)rt_nil_check(F->g_596)).disc_, (*(P140)rt_nil_check(F->d_2059)), &F->x_2058);
}
f_guard_cond_599(F->up, (*(P2030)rt_nil_check(F->g_596)).next_, F->t_597, &(*F->r_598));
(*F->r_598) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check((*F->r_598)))), rt_g_lit(" && (", 5)), (*(P140)rt_nil_check(F->x_2058))), rt_g_lit("))", 2)));
ret_:

  return;
}

static void f_arm_test_604(struct f_greenc_1fr *up_, P174 arm_600, P140 dname_601, rt_gstr d_602, P140 *x_603) {
  struct f_arm_test_604fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->arm_600 = arm_600;
F->dname_601 = dname_601;
F->d_602 = cp_rt_gstr(d_602);
F->x_603 = x_603;
F->l_2065 = NULL;
F->l_2065 = (*(P174)rt_nil_check(F->arm_600)).a_;
F->y_2066 = NULL;
F->y_2066 = f_lookup_432(F->up, (*(P140)rt_nil_check(F->dname_601)));
F->dt_2067 = NULL;
F->vt_2068 = NULL;
F->lo_2069 = NULL;
F->hi_2070 = NULL;
F->dt_2067 = (*(P117)rt_nil_check(F->y_2066)).t_;
while ((F->l_2065 != NULL)) {
if (((*(P174)rt_nil_check(F->l_2065)).b_ == NULL)) {
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->l_2065)).a_, F->dt_2067, &F->vt_2068, &F->lo_2069);
f_check_type_495(F->up, F->vt_2068, F->dt_2067, G_NV((*(P174)rt_nil_check(F->l_2065)).line_));
(*F->x_603) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->x_603))), rt_g_lit(" || ", 4)), F->d_602), rt_g_lit(" == ", 4)), (*(P140)rt_nil_check(F->lo_2069))));
} else {
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->l_2065)).a_, F->dt_2067, &F->vt_2068, &F->lo_2069);
f_check_type_495(F->up, F->vt_2068, F->dt_2067, G_NV((*(P174)rt_nil_check(F->l_2065)).line_));
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->l_2065)).b_, F->dt_2067, &F->vt_2068, &F->hi_2070);
f_check_type_495(F->up, F->vt_2068, F->dt_2067, G_NV((*(P174)rt_nil_check(F->l_2065)).line_));
(*F->x_603) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->x_603))), rt_g_lit(" || (", 5)), F->d_602), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->lo_2069))), rt_g_lit(" && ", 4)), F->d_602), rt_g_lit(" <= ", 4)), (*(P140)rt_nil_check(F->hi_2070))), one_rt_gstr(41)));
}
F->l_2065 = (*(P174)rt_nil_check(F->l_2065)).next_;
}
L_end_2071: ;
ret_:

  return;
}

static void f_derived_type_609(struct f_greenc_1fr *up_, P174 d_605, P140 name_606, P122 *t_607, P178 *c_608) {
  struct f_derived_type_609fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_605 = d_605;
F->name_606 = name_606;
F->t_607 = t_607;
F->c_608 = c_608;
F->pt_2072 = NULL;
F->ct_2073 = NULL;
F->ph_2074 = NULL;
F->ph_2074 = F->up->completing_173;
F->up->completing_173 = NULL;
f_resolve_516(F->up, (*(P174)rt_nil_check(F->d_605)).a_, &F->pt_2072, &(*F->c_608));
if (((G_NV((*(P122)rt_nil_check(F->pt_2072)).kind_) == ((rt_int)9LL)) && G_NV((*(P122)rt_nil_check(F->pt_2072)).priv_))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->d_605)).line_), rt_g_lit("a type cannot be derived from a private type before its full declaration", 72));
}
if ((f_composite_622(F->up, F->pt_2072) || (G_NV((*(P122)rt_nil_check(F->pt_2072)).kind_) == ((rt_int)8LL)))) {
f_ctype_500(F->up, F->pt_2072, &F->ct_2073);
}
if ((F->ph_2074 == NULL)) {
(*F->t_607) = f_new_typ_480(F->up, G_NV((*(P122)rt_nil_check(F->pt_2072)).kind_));
} else {
(*F->t_607) = F->ph_2074;
}
as_R123(&(*(P122)rt_nil_check((*F->t_607))), (*(P122)rt_nil_check(F->pt_2072)));
(*(P122)rt_nil_check((*F->t_607))).name_ = F->name_606;
(*(P122)rt_nil_check((*F->t_607))).parent_ = F->pt_2072;
(*(P122)rt_nil_check((*F->t_607))).next_ = NULL;
if ((G_NV((*(P122)rt_nil_check((*F->t_607))).kind_) == ((rt_int)4LL))) {
f_derive_literals_545(F->up, (*F->t_607), G_NV((*(P174)rt_nil_check(F->d_605)).line_));
}
f_inherit_542(F->up, F->pt_2072, (*F->t_607), G_NV((*(P174)rt_nil_check(F->d_605)).line_));
ret_:

  return;
}

static void f_real_type_614(struct f_greenc_1fr *up_, P174 d_610, P140 name_611, P122 *t_612, P178 *c_613) {
  struct f_real_type_614fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_610 = d_610;
F->name_611 = name_611;
F->t_612 = t_612;
F->c_613 = c_613;
F->dt_2075 = NULL;
F->dv_2076 = NULL;
F->n_2077 = INT64_MIN;
F->ok_2078 = INT_MIN;
(*F->c_613) = f_new_cons_481(F->up);
if ((G_NV((*(P174)rt_nil_check(F->d_610)).flag_) == ((rt_int)1LL))) {
f_manifest_512(F->up, (*(P174)rt_nil_check(F->d_610)).a_, &F->n_2077, &F->ok_2078);
 (void)rt_range(F->ok_2078, 0, 1);
if ((!G_NV(F->ok_2078))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->d_610)).line_), rt_g_lit("the digits of a floating point type are static (RM79 3.5.5)", 59));
}
if (((G_NV(F->n_2077) < ((rt_int)1LL)) || (G_NV(F->n_2077) > ((rt_int)15LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->d_610)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("no predefined floating point type has ", 38), rt_g_s2g(rt_str_of_int(G_NV(F->n_2077)))), rt_g_lit(" digits", 7)));
}
f_fresh_typ_538(F->up, ((rt_int)3LL), F->name_611, &(*F->t_612));
(*(P122)rt_nil_check((*F->t_612))).ndigits_ = G_NV(F->n_2077);
if ((G_NV(F->n_2077) <= ((rt_int)6LL))) {
(*(P122)rt_nil_check((*F->t_612))).parent_ = F->up->ty_sfloat_169;
} else {
(*(P122)rt_nil_check((*F->t_612))).parent_ = F->up->ty_float_158;
}
} else {
if (((*(P174)rt_nil_check(F->d_610)).b_ == NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->d_610)).line_), rt_g_lit("a fixed point type needs a range (RM79 3.5.5)", 45));
}
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->d_610)).a_, F->up->ty_float_158, &F->dt_2075, &F->dv_2076);
if ((G_NV((*(P122)rt_nil_check(F->dt_2075)).kind_) != ((rt_int)3LL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->d_610)).line_), rt_g_lit("the delta of a fixed point type is a real number (RM79 3.5.5)", 61));
}
f_fresh_typ_538(F->up, ((rt_int)16LL), F->name_611, &(*F->t_612));
(*(P122)rt_nil_check((*F->t_612))).fdelta_ = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->dv_2076))), one_rt_gstr(41)));
(*(P122)rt_nil_check((*F->t_612))).fsmall_ = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_small(", 11), (*(P140)rt_nil_check(F->dv_2076))), one_rt_gstr(41)));
}
if (((*(P174)rt_nil_check(F->d_610)).b_ != NULL)) {
f_range_of_534(F->up, (*(P174)rt_nil_check(F->d_610)).b_, (*F->t_612), (*F->c_613));
}
if (((*(P122)rt_nil_check((*F->t_612))).parent_ != NULL)) {
f_inherit_542(F->up, (*(P122)rt_nil_check((*F->t_612))).parent_, (*F->t_612), G_NV((*(P174)rt_nil_check(F->d_610)).line_));
}
ret_:

  return;
}

static void f_finish_ptr_616(struct f_greenc_1fr *up_, P122 t_615) {
  struct f_finish_ptr_616fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_615 = t_615;
F->c_2079 = NULL;
if ((((*(P122)rt_nil_check(F->t_615)).target_ == NULL) && ((*(P122)rt_nil_check(F->t_615)).decl_ != NULL))) {
f_resolve_516(F->up, (*(P122)rt_nil_check(F->t_615)).decl_, &(*(P122)rt_nil_check(F->t_615)).target_, &F->c_2079);
if ((((*(P122)rt_nil_check(F->t_615)).target_ != NULL) && (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->t_615)).target_)).kind_) == ((rt_int)8LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check((*(P122)rt_nil_check(F->t_615)).decl_)).line_), rt_g_lit("an access type cannot designate another access type (RM79 3.8)", 62));
}
}
ret_:

  return;
}

static void f_init_storage_620(struct f_greenc_1fr *up_, rt_gstr lval_617, P122 t_618, P178 c_619) {
  struct f_init_storage_620fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lval_617 = cp_rt_gstr(lval_617);
F->t_618 = t_618;
F->c_619 = c_619;
F->ec_2080 = NULL;
F->fc_2081 = NULL;
F->d_2082 = NULL;
F->ct_2083 = NULL;
F->i_2084 = NULL;
F->v_2085 = NULL;
F->x_2086 = NULL;
F->vt_2087 = NULL;
F->f_2088 = NULL;
if ((G_NV((*(P122)rt_nil_check(F->t_618)).kind_) == ((rt_int)8LL))) {
f_emit_263(F->up, cat_rt_gstr(F->lval_617, rt_g_lit(" = NULL;", 8)));
} else if ((f_is_numeric_459(F->up, F->t_618) || f_is_discrete_461(F->up, F->t_618))) {
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_617, rt_g_lit(" = ", 3)), f_no_value_569(F->up, F->t_618)), one_rt_gstr(59)));
} else if ((G_NV((*(P122)rt_nil_check(F->t_618)).kind_) == ((rt_int)6LL))) {
if (((F->c_619 == NULL) || ((*(P178)rt_nil_check(F->c_619)).lo_ == NULL))) {
f_fail_257(F->up, ((rt_int)0LL), rt_g_lit("an array object needs an index constraint (RM79 3.6)", 52));
}
f_elem_ctype_574(F->up, (*(P122)rt_nil_check(F->t_618)).elem_, &F->ct_2083);
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_617, rt_g_lit(".lo = ", 6)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_619)).lo_))), rt_g_lit("; ", 2)), F->lval_617), rt_g_lit(".hi = ", 6)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_619)).hi_))), one_rt_gstr(59)));
F->ec_2080 = (*(P122)rt_nil_check(F->t_618)).elemcons_;
if (((G_NV((*(P122)rt_nil_check(F->t_618)).dims_) > ((rt_int)1LL)) && f_bounded_483(F->up, (*(P178)rt_nil_check(F->c_619)).inner_))) {
F->ec_2080 = (*(P178)rt_nil_check(F->c_619)).inner_;
}
if (((G_NV((*(P122)rt_nil_check(F->t_618)).dims_) > ((rt_int)1LL)) && f_bounded_483(F->up, F->ec_2080))) {
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_617, rt_g_lit(".lo2 = ", 7)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->ec_2080)).lo_))), rt_g_lit("; ", 2)), F->lval_617), rt_g_lit(".hi2 = ", 7)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->ec_2080)).hi_))), one_rt_gstr(59)));
} else {
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_617, rt_g_lit(".lo2 = 1; ", 10)), F->lval_617), rt_g_lit(".hi2 = 1;", 9)));
}
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_617, rt_g_lit(".p = rt_alloc(sizeof(", 21)), (*(P140)rt_nil_check(F->ct_2083))), rt_g_lit(") * (size_t)G_CNT(", 18)), F->lval_617), rt_g_lit("));", 3)));
if ((f_is_numeric_459(F->up, (*(P122)rt_nil_check(F->t_618)).elem_) || f_is_discrete_461(F->up, (*(P122)rt_nil_check(F->t_618)).elem_))) {
f_new_name_239(F->up, rt_g_lit("i", 1), &F->i_2084);
if ((G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->t_618)).elem_)).kind_) == ((rt_int)11LL))) {
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("memset(", 7), F->lval_617), rt_g_lit(".p, 0xFF, (size_t)G_CNT(", 24)), F->lval_617), rt_g_lit("));", 3)));
} else {
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P140)rt_nil_check(F->i_2084))), rt_g_lit(" = 0; ", 6)), (*(P140)rt_nil_check(F->i_2084))), rt_g_lit(" < G_CNT(", 9)), F->lval_617), rt_g_lit("); ", 3)), (*(P140)rt_nil_check(F->i_2084))), rt_g_lit("++) ", 4)), F->lval_617), rt_g_lit(".p[", 3)), (*(P140)rt_nil_check(F->i_2084))), rt_g_lit("] = ", 4)), f_no_value_569(F->up, (*(P122)rt_nil_check(F->t_618)).elem_)), one_rt_gstr(59)));
}
} else if (((G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->t_618)).elem_)).kind_) == ((rt_int)6LL)) || (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->t_618)).elem_)).kind_) == ((rt_int)7LL)))) {
f_new_name_239(F->up, rt_g_lit("i", 1), &F->i_2084);
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P140)rt_nil_check(F->i_2084))), rt_g_lit(" = 0; ", 6)), (*(P140)rt_nil_check(F->i_2084))), rt_g_lit(" < G_CNT(", 9)), F->lval_617), rt_g_lit("); ", 3)), (*(P140)rt_nil_check(F->i_2084))), rt_g_lit("++) {", 5)));
f_init_storage_620(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_617, rt_g_lit(".p[", 3)), (*(P140)rt_nil_check(F->i_2084))), one_rt_gstr(93)), (*(P122)rt_nil_check(F->t_618)).elem_, F->ec_2080);
f_emit_263(F->up, rt_g_lit("}", 1));
}
} else if ((G_NV((*(P122)rt_nil_check(F->t_618)).kind_) == ((rt_int)7LL))) {
if ((F->c_619 != NULL)) {
F->d_2082 = (*(P178)rt_nil_check(F->c_619)).dv_;
while ((F->d_2082 != NULL)) {
F->f_2088 = (*(P122)rt_nil_check(F->t_618)).fields_;
while ((!eq_rt_gstr((*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_2088)).name_)), (*(P140)rt_nil_check((*(P1909)rt_nil_check(F->d_2082)).name_))))) {
F->f_2088 = (*(P1905)rt_nil_check(F->f_2088)).next_;
}
L_end_2090: ;
f_assign_code_628(F->up, cat_rt_gstr(cat_rt_gstr(F->lval_617, one_rt_gstr(46)), f_c_field_253(F->up, (*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_2088)).name_)))), (*(P1905)rt_nil_check(F->f_2088)).t_, (*(P140)rt_nil_check((*(P1909)rt_nil_check(F->d_2082)).v_)), (*(P1905)rt_nil_check(F->f_2088)).c_, &F->x_2086);
f_emit_263(F->up, (*(P140)rt_nil_check(F->x_2086)));
F->d_2082 = (*(P1909)rt_nil_check(F->d_2082)).next_;
}
L_end_2089: ;
}
F->f_2088 = (*(P122)rt_nil_check(F->t_618)).fields_;
while ((F->f_2088 != NULL)) {
f_subst_cons_588(F->up, (*(P1905)rt_nil_check(F->f_2088)).c_, F->lval_617, &F->fc_2081);
if ((G_NV((*(P1905)rt_nil_check(F->f_2088)).dyn_) && (!f_discriminated_489(F->up, F->c_619)))) {
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_617, one_rt_gstr(46)), f_c_field_253(F->up, (*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_2088)).name_)))), rt_g_lit(".lo = 1; ", 9)), F->lval_617), one_rt_gstr(46)), f_c_field_253(F->up, (*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_2088)).name_)))), rt_g_lit(".hi = 0; ", 9)), F->lval_617), one_rt_gstr(46)), f_c_field_253(F->up, (*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_2088)).name_)))), rt_g_lit(".lo2 = ", 7)), F->lval_617), one_rt_gstr(46)), f_c_field_253(F->up, (*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_2088)).name_)))), rt_g_lit(".hi2 = 1; ", 10)), F->lval_617), one_rt_gstr(46)), f_c_field_253(F->up, (*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_2088)).name_)))), rt_g_lit(".p = NULL;", 10)));
} else if ((!G_NV((*(P1905)rt_nil_check(F->f_2088)).is_discr_))) {
f_init_storage_620(F->up, cat_rt_gstr(cat_rt_gstr(F->lval_617, one_rt_gstr(46)), f_c_field_253(F->up, (*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_2088)).name_)))), (*(P1905)rt_nil_check(F->f_2088)).t_, F->fc_2081);
}
if (((*(P1905)rt_nil_check(F->f_2088)).dsym_ != NULL)) {
f_access_of_756(F->up, (*(P1905)rt_nil_check(F->f_2088)).dsym_, &F->v_2085);
f_assign_code_628(F->up, cat_rt_gstr(cat_rt_gstr(F->lval_617, one_rt_gstr(46)), f_c_field_253(F->up, (*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_2088)).name_)))), (*(P1905)rt_nil_check(F->f_2088)).t_, (*(P140)rt_nil_check(F->v_2085)), F->fc_2081, &F->x_2086);
f_emit_263(F->up, (*(P140)rt_nil_check(F->x_2086)));
}
F->f_2088 = (*(P1905)rt_nil_check(F->f_2088)).next_;
}
L_end_2091: ;
}
ret_:

  return;
}

static int f_composite_622(struct f_greenc_1fr *up_, P122 t_621) {
  struct f_composite_622fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_621 = t_621;
F->result_ = ((G_NV((*(P122)rt_nil_check(F->t_621)).kind_) == ((rt_int)6LL)) || (G_NV((*(P122)rt_nil_check(F->t_621)).kind_) == ((rt_int)7LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_assign_code_628(struct f_greenc_1fr *up_, rt_gstr lval_623, P122 t_624, rt_gstr v_625, P178 c_626, P140 *r_627) {
  struct f_assign_code_628fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lval_623 = cp_rt_gstr(lval_623);
F->t_624 = t_624;
F->v_625 = cp_rt_gstr(v_625);
F->c_626 = c_626;
F->r_627 = r_627;
F->ct_2092 = NULL;
F->x_2093 = NULL;
F->d_2094 = NULL;
if (((G_NV((*(P122)rt_nil_check(F->t_624)).kind_) == ((rt_int)7LL)) && f_discriminated_489(F->up, F->c_626))) {
f_ctype_500(F->up, F->t_624, &F->ct_2092);
F->x_2093 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P140)rt_nil_check(F->ct_2092))), rt_g_lit(" dv_ = ", 7)), F->v_625), one_rt_gstr(59)));
F->d_2094 = (*(P178)rt_nil_check(F->c_626)).dv_;
while ((F->d_2094 != NULL)) {
F->x_2093 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->x_2093)), rt_g_lit(" if (dv_.", 9)), f_c_field_253(F->up, (*(P140)rt_nil_check((*(P1909)rt_nil_check(F->d_2094)).name_)))), rt_g_lit(" != (", 5)), (*(P140)rt_nil_check((*(P1909)rt_nil_check(F->d_2094)).v_))), rt_g_lit(")) rt_raise(RT_X_TAG);", 22)));
F->d_2094 = (*(P1909)rt_nil_check(F->d_2094)).next_;
}
L_end_2095: ;
(*F->r_627) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->x_2093)), rt_g_lit(" as_", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_624)).cname_))), rt_g_lit("(&", 2)), F->lval_623), rt_g_lit(", dv_); }", 9)));
} else if (f_composite_622(F->up, F->t_624)) {
f_ctype_500(F->up, F->t_624, &F->ct_2092);
(*F->r_627) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("as_", 3), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_624)).cname_))), rt_g_lit("(&", 2)), F->lval_623), rt_g_lit(", ", 2)), F->v_625), rt_g_lit(");", 2)));
} else if (((((G_NV((*(P122)rt_nil_check(F->t_624)).kind_) == ((rt_int)1LL)) || (G_NV((*(P122)rt_nil_check(F->t_624)).kind_) == ((rt_int)4LL))) || (G_NV((*(P122)rt_nil_check(F->t_624)).kind_) == ((rt_int)11LL))) && f_bounded_483(F->up, F->c_626))) {
(*F->r_627) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_623, rt_g_lit(" = rt_range(", 12)), F->v_625), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_626)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_626)).hi_))), rt_g_lit(");", 2)));
} else if ((((G_NV((*(P122)rt_nil_check(F->t_624)).kind_) == ((rt_int)3LL)) || (G_NV((*(P122)rt_nil_check(F->t_624)).kind_) == ((rt_int)16LL))) && f_bounded_483(F->up, F->c_626))) {
(*F->r_627) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_623, rt_g_lit(" = rt_frange(", 13)), F->v_625), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_626)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_626)).hi_))), rt_g_lit(");", 2)));
} else {
(*F->r_627) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_623, rt_g_lit(" = ", 3)), F->v_625), one_rt_gstr(59)));
}
ret_:

  return;
}

static void f_copy_code_632(struct f_greenc_1fr *up_, P122 t_629, rt_gstr v_630, P140 *r_631) {
  struct f_copy_code_632fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_629 = t_629;
F->v_630 = cp_rt_gstr(v_630);
F->r_631 = r_631;
F->ct_2096 = NULL;
if (f_composite_622(F->up, F->t_629)) {
f_ctype_500(F->up, F->t_629, &F->ct_2096);
(*F->r_631) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("cp_", 3), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_629)).cname_))), one_rt_gstr(40)), F->v_630), one_rt_gstr(41)));
} else {
(*F->r_631) = f_mk_236(F->up, F->v_630);
}
ret_:

  return;
}

static void f_eq_code_637(struct f_greenc_1fr *up_, P122 t_633, rt_gstr a_634, rt_gstr b_635, P140 *r_636) {
  struct f_eq_code_637fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_633 = t_633;
F->a_634 = cp_rt_gstr(a_634);
F->b_635 = cp_rt_gstr(b_635);
F->r_636 = r_636;
F->ct_2097 = NULL;
if (f_composite_622(F->up, F->t_633)) {
f_ctype_500(F->up, F->t_633, &F->ct_2097);
(*F->r_636) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("eq_", 3), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_633)).cname_))), one_rt_gstr(40)), F->a_634), rt_g_lit(", ", 2)), F->b_635), one_rt_gstr(41)));
} else {
(*F->r_636) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_634), rt_g_lit(" == ", 4)), F->b_635), one_rt_gstr(41)));
}
ret_:

  return;
}

static int f_seen_name_640(struct f_greenc_1fr *up_, P151 l_638, rt_gstr s_639) {
  struct f_seen_name_640fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_638 = l_638;
F->s_639 = cp_rt_gstr(s_639);
F->p_2098 = NULL;
F->p_2098 = F->l_638;
while ((F->p_2098 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P151)rt_nil_check(F->p_2098)).s_)), F->s_639)) {
F->result_ = 1;
goto ret_;
}
F->p_2098 = (*(P151)rt_nil_check(F->p_2098)).next_;
}
L_end_2099: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_emit_helpers_641(struct f_greenc_1fr *up_) {
  struct f_emit_helpers_641fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_2100 = NULL;
F->t_2100 = F->up->all_types_124;
F->et_2101 = NULL;
F->done_2102 = NULL;
F->l_2103 = NULL;
while ((F->t_2100 != NULL)) {
if ((f_composite_622(F->up, F->t_2100) && (!f_seen_name_640(F->up, F->done_2102, (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2100)).cname_)))))) {
F->l_2103 = ({ R152 *cell2105 = rt_alloc(sizeof(R152)); *cell2105 = cp_R152(({ R152 ag2106; ag2106.s_ = (*(P122)rt_nil_check(F->t_2100)).cname_; ag2106.next_ = F->done_2102; ag2106; })); (P151)cell2105; });
F->done_2102 = F->l_2103;
f_put_to_261(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void as_", 15), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2100)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2100)).cname_))), rt_g_lit(" *d, ", 5)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2100)).cname_))), rt_g_lit(" s);", 4)));
f_put_to_261(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2100)).cname_))), rt_g_lit(" cp_", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2100)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2100)).cname_))), rt_g_lit(" s);", 4)));
f_put_to_261(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int eq_", 14), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2100)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2100)).cname_))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2100)).cname_))), rt_g_lit(" b);", 4)));
if (((G_NV((*(P122)rt_nil_check(F->t_2100)).kind_) == ((rt_int)6LL)) && (G_NV((*(P122)rt_nil_check(F->t_2100)).dims_) == ((rt_int)1LL)))) {
f_ctype_500(F->up, (*(P122)rt_nil_check(F->t_2100)).elem_, &F->et_2101);
f_put_to_261(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2100)).cname_))), rt_g_lit(" cat_", 5)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2100)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2100)).cname_))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2100)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_261(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2100)).cname_))), rt_g_lit(" one_", 5)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2100)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->et_2101))), rt_g_lit(" e);", 4)));
if ((G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->t_2100)).elem_)).kind_) == ((rt_int)2LL))) {
f_put_to_261(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2100)).cname_))), rt_g_lit(" and_", 5)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2100)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2100)).cname_))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2100)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_261(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2100)).cname_))), rt_g_lit(" or_", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2100)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2100)).cname_))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2100)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_261(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2100)).cname_))), rt_g_lit(" xor_", 5)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2100)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2100)).cname_))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2100)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_261(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2100)).cname_))), rt_g_lit(" not_", 5)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2100)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2100)).cname_))), rt_g_lit(" a);", 4)));
}
}
f_helper_bodies_643(F->up, F->t_2100);
}
F->t_2100 = (*(P122)rt_nil_check(F->t_2100)).next_;
}
L_end_2104: ;
ret_:

  return;
}

static void f_helper_bodies_643(struct f_greenc_1fr *up_, P122 t_642) {
  struct f_helper_bodies_643fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_642 = t_642;
F->c_2107 = NULL;
F->c_2107 = (*(P122)rt_nil_check(F->t_642)).cname_;
F->b_2108 = NULL;
F->b_2108 = F->up->out_funcs_133;
F->ct_2109 = NULL;
F->et_2110 = NULL;
F->x_2111 = NULL;
F->y_2112 = NULL;
F->conds_2113 = NULL;
F->f_2114 = NULL;
if ((G_NV((*(P122)rt_nil_check(F->t_642)).kind_) == ((rt_int)6LL))) {
f_elem_ctype_574(F->up, (*(P122)rt_nil_check(F->t_642)).elem_, &F->ct_2109);
f_assign_code_628(F->up, rt_g_lit("d->p[i]", 7), (*(P122)rt_nil_check(F->t_642)).elem_, rt_g_lit("s.p[i]", 6), NULL, &F->x_2111);
f_put_to_261(F->up, F->b_2108, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void as_", 15), (*(P140)rt_nil_check(F->c_2107))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit(" *d, ", 5)), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit(" s) {", 5)));
f_put_to_261(F->up, F->b_2108, rt_g_lit("  rt_int n = G_CNT(s);", 22));
f_put_to_261(F->up, F->b_2108, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, ", 49), f_q_254(F->up)), rt_g_lit("array length", 12)), f_q_254(F->up)), rt_g_lit(");", 2)));
f_put_to_261(F->up, F->b_2108, rt_g_lit("  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();", 79));
f_put_to_261(F->up, F->b_2108, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < n; i++) { ", 35), (*(P140)rt_nil_check(F->x_2111))), rt_g_lit(" }", 2)));
f_put_to_261(F->up, F->b_2108, rt_g_lit("}", 1));
f_copy_code_632(F->up, (*(P122)rt_nil_check(F->t_642)).elem_, rt_g_lit("s.p[i]", 6), &F->x_2111);
f_put_to_261(F->up, F->b_2108, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit(" cp_", 4)), (*(P140)rt_nil_check(F->c_2107))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit(" s) {", 5)));
f_put_to_261(F->up, F->b_2108, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit(" d = s; d.p = rt_alloc(sizeof(", 30)), (*(P140)rt_nil_check(F->ct_2109))), rt_g_lit(") * (size_t)G_CNT(s));", 22)));
f_put_to_261(F->up, F->b_2108, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = ", 49), (*(P140)rt_nil_check(F->x_2111))), one_rt_gstr(59)));
f_put_to_261(F->up, F->b_2108, rt_g_lit("  return d;", 11));
f_put_to_261(F->up, F->b_2108, rt_g_lit("}", 1));
f_eq_code_637(F->up, (*(P122)rt_nil_check(F->t_642)).elem_, rt_g_lit("a.p[i]", 6), rt_g_lit("b.p[i]", 6), &F->x_2111);
f_put_to_261(F->up, F->b_2108, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int eq_", 14), (*(P140)rt_nil_check(F->c_2107))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit(" b) {", 5)));
f_put_to_261(F->up, F->b_2108, rt_g_lit("  if (G_CNT(a) != G_CNT(b)) return 0;", 37));
f_put_to_261(F->up, F->b_2108, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < G_CNT(a); i++) if (!(", 46), (*(P140)rt_nil_check(F->x_2111))), rt_g_lit(")) return 0;", 12)));
f_put_to_261(F->up, F->b_2108, rt_g_lit("  return 1;", 11));
f_put_to_261(F->up, F->b_2108, rt_g_lit("}", 1));
if (((G_NV((*(P122)rt_nil_check(F->t_642)).dims_) == ((rt_int)1LL)) && (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->t_642)).elem_)).kind_) == ((rt_int)2LL)))) {
f_put_to_261(F->up, F->b_2108, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit(" and_", 5)), (*(P140)rt_nil_check(F->c_2107))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit(" b) { ", 6)), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit(" r = cp_", 8)), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit("(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, ", 58)), f_q_254(F->up)), rt_g_lit("array length", 12)), f_q_254(F->up)), rt_g_lit("); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] && b.p[i]; return r; }", 79)));
f_put_to_261(F->up, F->b_2108, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit(" or_", 4)), (*(P140)rt_nil_check(F->c_2107))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit(" b) { ", 6)), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit(" r = cp_", 8)), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit("(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, ", 58)), f_q_254(F->up)), rt_g_lit("array length", 12)), f_q_254(F->up)), rt_g_lit("); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] || b.p[i]; return r; }", 79)));
f_put_to_261(F->up, F->b_2108, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit(" xor_", 5)), (*(P140)rt_nil_check(F->c_2107))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit(" b) { ", 6)), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit(" r = cp_", 8)), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit("(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, ", 58)), f_q_254(F->up)), rt_g_lit("array length", 12)), f_q_254(F->up)), rt_g_lit("); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] != b.p[i]; return r; }", 79)));
f_put_to_261(F->up, F->b_2108, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit(" not_", 5)), (*(P140)rt_nil_check(F->c_2107))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit(" a) { ", 6)), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit(" r = cp_", 8)), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit("(a); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = !a.p[i]; return r; }", 72)));
}
if ((G_NV((*(P122)rt_nil_check(F->t_642)).dims_) == ((rt_int)1LL))) {
f_ctype_500(F->up, (*(P122)rt_nil_check(F->t_642)).elem_, &F->et_2110);
f_copy_code_632(F->up, (*(P122)rt_nil_check(F->t_642)).elem_, rt_g_lit("a.p[i]", 6), &F->x_2111);
f_copy_code_632(F->up, (*(P122)rt_nil_check(F->t_642)).elem_, rt_g_lit("b.p[i]", 6), &F->y_2112);
f_put_to_261(F->up, F->b_2108, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit(" cat_", 5)), (*(P140)rt_nil_check(F->c_2107))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit(" b) {", 5)));
f_put_to_261(F->up, F->b_2108, rt_g_lit("  rt_int na = G_CNT(a), nb = G_CNT(b);", 38));
f_put_to_261(F->up, F->b_2108, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit(" r = na > 0 \? a : b;", 20)));
f_put_to_261(F->up, F->b_2108, rt_g_lit("  if (na == 0 && nb == 0) return a;", 35));
f_put_to_261(F->up, F->b_2108, rt_g_lit("  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;", 47));
f_put_to_261(F->up, F->b_2108, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  r.p = rt_alloc(sizeof(", 24), (*(P140)rt_nil_check(F->ct_2109))), rt_g_lit(") * (size_t)(na + nb));", 23)));
f_put_to_261(F->up, F->b_2108, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < na; i++) r.p[i] = ", 43), (*(P140)rt_nil_check(F->x_2111))), one_rt_gstr(59)));
f_put_to_261(F->up, F->b_2108, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < nb; i++) r.p[na + i] = ", 48), (*(P140)rt_nil_check(F->y_2112))), one_rt_gstr(59)));
f_put_to_261(F->up, F->b_2108, rt_g_lit("  return r;", 11));
f_put_to_261(F->up, F->b_2108, rt_g_lit("}", 1));
f_copy_code_632(F->up, (*(P122)rt_nil_check(F->t_642)).elem_, rt_g_lit("e", 1), &F->x_2111);
f_first_index_577(F->up, F->t_642, &F->y_2112);
f_put_to_261(F->up, F->b_2108, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit(" one_", 5)), (*(P140)rt_nil_check(F->c_2107))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->et_2110))), rt_g_lit(" e) {", 5)));
f_put_to_261(F->up, F->b_2108, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit(" r; r.lo = r.hi = ", 18)), (*(P140)rt_nil_check(F->y_2112))), rt_g_lit("; r.lo2 = r.hi2 = 1;", 20)));
f_put_to_261(F->up, F->b_2108, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  r.p = rt_alloc(sizeof(", 24), (*(P140)rt_nil_check(F->ct_2109))), rt_g_lit(")); r.p[0] = ", 13)), (*(P140)rt_nil_check(F->x_2111))), one_rt_gstr(59)));
f_put_to_261(F->up, F->b_2108, rt_g_lit("  return r;", 11));
f_put_to_261(F->up, F->b_2108, rt_g_lit("}", 1));
}
} else {
f_put_to_261(F->up, F->b_2108, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void as_", 15), (*(P140)rt_nil_check(F->c_2107))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit(" *d, ", 5)), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit(" s) {", 5)));
F->f_2114 = (*(P122)rt_nil_check(F->t_642)).fields_;
while ((F->f_2114 != NULL)) {
if ((G_NV((*(P1905)rt_nil_check(F->f_2114)).dyn_) || ((*(P1905)rt_nil_check(F->f_2114)).cond_ != NULL))) {
f_copy_code_632(F->up, (*(P1905)rt_nil_check(F->f_2114)).t_, cat_rt_gstr(rt_g_lit("s.", 2), f_c_field_253(F->up, (*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_2114)).name_)))), &F->x_2111);
F->x_2111 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("d->", 3), f_c_field_253(F->up, (*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_2114)).name_)))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2111))), one_rt_gstr(59)));
if (((*(P1905)rt_nil_check(F->f_2114)).cond_ != NULL)) {
F->x_2111 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), f_subst_582(F->up, (*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_2114)).cond_)), rt_g_lit("s", 1))), rt_g_lit(") ", 2)), (*(P140)rt_nil_check(F->x_2111))));
}
} else {
f_assign_code_628(F->up, cat_rt_gstr(rt_g_lit("d->", 3), f_c_field_253(F->up, (*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_2114)).name_)))), (*(P1905)rt_nil_check(F->f_2114)).t_, cat_rt_gstr(rt_g_lit("s.", 2), f_c_field_253(F->up, (*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_2114)).name_)))), NULL, &F->x_2111);
}
f_put_to_261(F->up, F->b_2108, cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check(F->x_2111))));
F->f_2114 = (*(P1905)rt_nil_check(F->f_2114)).next_;
}
L_end_2115: ;
f_put_to_261(F->up, F->b_2108, rt_g_lit("}", 1));
f_put_to_261(F->up, F->b_2108, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit(" cp_", 4)), (*(P140)rt_nil_check(F->c_2107))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit(" s) {", 5)));
f_put_to_261(F->up, F->b_2108, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit(" d = s;", 7)));
F->conds_2113 = f_mk_236(F->up, rt_g_lit("1", 1));
F->f_2114 = (*(P122)rt_nil_check(F->t_642)).fields_;
while ((F->f_2114 != NULL)) {
f_copy_code_632(F->up, (*(P1905)rt_nil_check(F->f_2114)).t_, cat_rt_gstr(rt_g_lit("s.", 2), f_c_field_253(F->up, (*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_2114)).name_)))), &F->x_2111);
F->x_2111 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("d.", 2), f_c_field_253(F->up, (*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_2114)).name_)))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2111))), one_rt_gstr(59)));
f_eq_code_637(F->up, (*(P1905)rt_nil_check(F->f_2114)).t_, cat_rt_gstr(rt_g_lit("a.", 2), f_c_field_253(F->up, (*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_2114)).name_)))), cat_rt_gstr(rt_g_lit("b.", 2), f_c_field_253(F->up, (*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_2114)).name_)))), &F->y_2112);
if (((*(P1905)rt_nil_check(F->f_2114)).cond_ != NULL)) {
F->x_2111 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), f_subst_582(F->up, (*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_2114)).cond_)), rt_g_lit("s", 1))), rt_g_lit(") ", 2)), (*(P140)rt_nil_check(F->x_2111))));
F->y_2112 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!(", 3), f_subst_582(F->up, (*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_2114)).cond_)), rt_g_lit("a", 1))), rt_g_lit(") || ", 5)), (*(P140)rt_nil_check(F->y_2112))), one_rt_gstr(41)));
}
f_put_to_261(F->up, F->b_2108, cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check(F->x_2111))));
F->conds_2113 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->conds_2113)), rt_g_lit(" && ", 4)), (*(P140)rt_nil_check(F->y_2112))));
F->f_2114 = (*(P1905)rt_nil_check(F->f_2114)).next_;
}
L_end_2116: ;
f_put_to_261(F->up, F->b_2108, rt_g_lit("  return d;", 11));
f_put_to_261(F->up, F->b_2108, rt_g_lit("}", 1));
f_put_to_261(F->up, F->b_2108, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int eq_", 14), (*(P140)rt_nil_check(F->c_2107))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check(F->c_2107))), rt_g_lit(" b) {", 5)));
f_put_to_261(F->up, F->b_2108, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  return ", 9), (*(P140)rt_nil_check(F->conds_2113))), one_rt_gstr(59)));
f_put_to_261(F->up, F->b_2108, rt_g_lit("}", 1));
}
ret_:

  return;
}

static void f_storage_647(struct f_greenc_1fr *up_, rt_gstr name_644, P122 t_645, P140 *access_code_646) {
  struct f_storage_647fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_644 = cp_rt_gstr(name_644);
F->t_645 = t_645;
F->access_code_646 = access_code_646;
F->ct_2117 = NULL;
F->g_2118 = NULL;
f_ctype_500(F->up, F->t_645, &F->ct_2117);
if ((!G_NV(F->up->in_func_138))) {
f_new_name_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("g_", 2), f_lower_s_247(F->up, F->name_644)), one_rt_gstr(95)), &F->g_2118);
f_put_to_261(F->up, F->up->out_globals_132, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->ct_2117))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->g_2118))), one_rt_gstr(59)));
F->up->st_field_141 = F->g_2118;
(*F->access_code_646) = F->g_2118;
} else {
f_new_name_239(F->up, cat_rt_gstr(f_lower_s_247(F->up, F->name_644), one_rt_gstr(95)), &F->g_2118);
f_put_to_261(F->up, F->up->fields_buf_137, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P140)rt_nil_check(F->ct_2117))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->g_2118))), one_rt_gstr(59)));
F->up->st_field_141 = F->g_2118;
(*F->access_code_646) = f_mk_236(F->up, cat_rt_gstr(rt_g_lit("F->", 3), (*(P140)rt_nil_check(F->g_2118))));
}
ret_:

  return;
}

static void f_bind_650(struct f_greenc_1fr *up_, P117 y_648, P140 access_code_649) {
  struct f_bind_650fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_648 = y_648;
F->access_code_649 = access_code_649;
if (G_NV(F->up->in_func_138)) {
(*(P117)rt_nil_check(F->y_648)).level_ = G_NV(F->up->cur_level_139);
(*(P117)rt_nil_check(F->y_648)).access_path_ = F->up->st_field_141;
} else {
(*(P117)rt_nil_check(F->y_648)).level_ = ((rt_int)0LL);
(*(P117)rt_nil_check(F->y_648)).access_path_ = F->access_code_649;
}
ret_:

  return;
}

static void f_declare_subprograms_652(struct f_greenc_1fr *up_, P174 from_651) {
  struct f_declare_subprograms_652fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->from_651 = from_651;
F->e_2119 = NULL;
F->e_2119 = F->from_651;
while ((F->e_2119 != NULL)) {
if ((((G_NV((*(P174)rt_nil_check(F->e_2119)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check(F->e_2119)).kind_) == ((rt_int)45LL))) && ((G_NV((*(P174)rt_nil_check(F->e_2119)).ival_) == ((rt_int)0LL)) || (G_NV((*(P174)rt_nil_check(F->e_2119)).ival_) == ((rt_int)3LL))))) {
f_declare_one_654(F->up, F->e_2119);
}
F->e_2119 = (*(P174)rt_nil_check(F->e_2119)).next_;
}
L_end_2120: ;
ret_:

  return;
}

static void f_declare_one_654(struct f_greenc_1fr *up_, P174 e_653) {
  struct f_declare_one_654fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_653 = e_653;
F->y_2121 = NULL;
F->z_2122 = NULL;
if (f_is_generic_name_1270(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_653)).name_)))) {
goto ret_;
}
f_build_subprogram_659(F->up, F->e_653, &F->y_2121);
F->z_2122 = ({ A116 ix2123 = F->up->table_119; ix2123.p[rt_index(f_hash_425(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2121)).name_))), ix2123.lo, ix2123.hi) - ix2123.lo]; });
while ((F->z_2122 != NULL)) {
if (((((((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_2122)).name_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2121)).name_))) && ((G_NV((*(P117)rt_nil_check(F->z_2122)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->z_2122)).kind_) == ((rt_int)4LL)))) && ((*(P117)rt_nil_check(F->z_2122)).decl_ != NULL)) && (G_NV((*(P174)rt_nil_check((*(P117)rt_nil_check(F->z_2122)).decl_)).ival_) == ((rt_int)1LL))) && (G_NV((*(P117)rt_nil_check(F->z_2122)).depth_) == G_NV(F->up->depth_120))) && f_same_signature_467(F->up, (*(P117)rt_nil_check(F->z_2122)).params_, (*(P117)rt_nil_check(F->y_2121)).params_)) && f_same_452(F->up, (*(P117)rt_nil_check(F->z_2122)).result_, (*(P117)rt_nil_check(F->y_2121)).result_))) {
(*(P117)rt_nil_check(F->z_2122)).decl_ = F->e_653;
goto ret_;
}
F->z_2122 = (*(P117)rt_nil_check(F->z_2122)).chain_;
}
L_end_2124: ;
if ((F->up->cur_task_210 != NULL)) {
F->z_2122 = (*(P117)rt_nil_check(F->up->cur_task_210)).members_;
while ((F->z_2122 != NULL)) {
if ((((((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_2122)).name_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2121)).name_))) && ((G_NV((*(P117)rt_nil_check(F->z_2122)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->z_2122)).kind_) == ((rt_int)4LL)))) && ((*(P117)rt_nil_check(F->z_2122)).decl_ != NULL)) && (G_NV((*(P174)rt_nil_check((*(P117)rt_nil_check(F->z_2122)).decl_)).ival_) == ((rt_int)1LL))) && f_same_signature_467(F->up, (*(P117)rt_nil_check(F->z_2122)).params_, (*(P117)rt_nil_check(F->y_2121)).params_)) && f_same_452(F->up, (*(P117)rt_nil_check(F->z_2122)).result_, (*(P117)rt_nil_check(F->y_2121)).result_))) {
(*(P117)rt_nil_check(F->y_2121)).cname_ = (*(P117)rt_nil_check(F->z_2122)).cname_;
(*(P117)rt_nil_check(F->z_2122)).decl_ = F->e_653;
goto L_end_2125;
}
F->z_2122 = (*(P117)rt_nil_check(F->z_2122)).mnext_;
}
L_end_2125: ;
}
f_define_473(F->up, F->y_2121, G_NV((*(P174)rt_nil_check(F->e_653)).line_));
f_elaborate_defaults_656(F->up, F->y_2121);
ret_:

  return;
}

static void f_elaborate_defaults_656(struct f_greenc_1fr *up_, P117 y_655) {
  struct f_elaborate_defaults_656fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_655 = y_655;
F->pm_2126 = NULL;
F->pm_2126 = (*(P117)rt_nil_check(F->y_655)).params_;
F->vt_2127 = NULL;
F->v_2128 = NULL;
F->acc_2129 = NULL;
F->x_2130 = NULL;
F->z_2131 = NULL;
while ((F->pm_2126 != NULL)) {
if (((*(P1887)rt_nil_check(F->pm_2126)).dflt_ != NULL)) {
if ((G_NV((*(P1887)rt_nil_check(F->pm_2126)).mode_) != ((rt_int)1LL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check((*(P1887)rt_nil_check(F->pm_2126)).dflt_)).line_), rt_g_lit("only an in parameter takes a default (RM79 6.3)", 47));
}
f_gexpr_819(F->up, (*(P1887)rt_nil_check(F->pm_2126)).dflt_, (*(P1887)rt_nil_check(F->pm_2126)).t_, &F->vt_2127, &F->v_2128);
f_check_type_495(F->up, F->vt_2127, (*(P1887)rt_nil_check(F->pm_2126)).t_, G_NV((*(P174)rt_nil_check((*(P1887)rt_nil_check(F->pm_2126)).dflt_)).line_));
F->z_2131 = f_new_sym_478(F->up, ((rt_int)2LL), f_mk_236(F->up, rt_g_lit("dflt", 4)));
f_storage_647(F->up, rt_g_lit("dflt", 4), (*(P1887)rt_nil_check(F->pm_2126)).t_, &F->acc_2129);
(*(P117)rt_nil_check(F->z_2131)).t_ = (*(P1887)rt_nil_check(F->pm_2126)).t_;
(*(P117)rt_nil_check(F->z_2131)).c_ = (*(P1887)rt_nil_check(F->pm_2126)).c_;
f_bind_650(F->up, F->z_2131, F->acc_2129);
f_copy_code_632(F->up, (*(P1887)rt_nil_check(F->pm_2126)).t_, (*(P140)rt_nil_check(F->v_2128)), &F->x_2130);
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->acc_2129)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2130))), one_rt_gstr(59)));
(*(P1887)rt_nil_check(F->pm_2126)).dsym_ = F->z_2131;
}
F->pm_2126 = (*(P1887)rt_nil_check(F->pm_2126)).next_;
}
L_end_2132: ;
ret_:

  return;
}

static void f_build_subprogram_659(struct f_greenc_1fr *up_, P174 d_657, P117 *y_658) {
  struct f_build_subprogram_659fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_657 = d_657;
F->y_658 = y_658;
F->p_2133 = NULL;
F->p_2133 = (*(P174)rt_nil_check(F->d_657)).a_;
F->pm_2134 = NULL;
F->tail_2135 = NULL;
F->rc_2136 = NULL;
F->k_2137 = INT64_MIN;
F->k_2137 = ((rt_int)4LL);
if ((G_NV((*(P174)rt_nil_check(F->d_657)).kind_) == ((rt_int)45LL))) {
F->k_2137 = ((rt_int)3LL);
}
(*F->y_658) = f_new_sym_478(F->up, G_NV(F->k_2137), (*(P174)rt_nil_check(F->d_657)).name_);
while ((F->p_2133 != NULL)) {
F->pm_2134 = ({ R1888 *cell2139 = rt_alloc(sizeof(R1888)); *cell2139 = cp_R1888(({ R1888 ag2140; ag2140.name_ = (*(P174)rt_nil_check(F->p_2133)).name_; ag2140.mode_ = G_NV((*(P174)rt_nil_check(F->p_2133)).ival_); ag2140.t_ = NULL; ag2140.c_ = NULL; ag2140.cfield_ = NULL; ag2140.dflt_ = (*(P174)rt_nil_check(F->p_2133)).b_; ag2140.next_ = NULL; ag2140.dsym_ = NULL; ag2140; })); (P1887)cell2139; });
f_resolve_516(F->up, (*(P174)rt_nil_check(F->p_2133)).a_, &(*(P1887)rt_nil_check(F->pm_2134)).t_, &(*(P1887)rt_nil_check(F->pm_2134)).c_);
f_new_name_239(F->up, cat_rt_gstr(f_lower_s_247(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_2133)).name_))), one_rt_gstr(95)), &(*(P1887)rt_nil_check(F->pm_2134)).cfield_);
if (((G_NV((*(P174)rt_nil_check(F->d_657)).kind_) == ((rt_int)45LL)) && (G_NV((*(P1887)rt_nil_check(F->pm_2134)).mode_) != ((rt_int)1LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->p_2133)).line_), rt_g_lit("a function can only have in parameters (RM79 6.5)", 49));
}
if (((G_NV((*(P174)rt_nil_check(F->d_657)).flag_) == ((rt_int)1LL)) && (G_NV((*(P1887)rt_nil_check(F->pm_2134)).mode_) != ((rt_int)1LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->p_2133)).line_), rt_g_lit("a value-returning procedure can only have in parameters (RM79 6.5)", 66));
}
if ((F->tail_2135 == NULL)) {
(*(P117)rt_nil_check((*F->y_658))).params_ = F->pm_2134;
} else {
(*(P1887)rt_nil_check(F->tail_2135)).next_ = F->pm_2134;
}
F->tail_2135 = F->pm_2134;
F->p_2133 = (*(P174)rt_nil_check(F->p_2133)).next_;
}
L_end_2138: ;
(*(P117)rt_nil_check((*F->y_658))).result_ = F->up->ty_void_161;
if (((*(P174)rt_nil_check(F->d_657)).b_ != NULL)) {
f_resolve_516(F->up, (*(P174)rt_nil_check(F->d_657)).b_, &(*(P117)rt_nil_check((*F->y_658))).result_, &F->rc_2136);
(*(P117)rt_nil_check((*F->y_658))).c_ = F->rc_2136;
}
if ((f_is_rel_349(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->d_657)).name_))) && ((*(P117)rt_nil_check((*F->y_658))).result_ != F->up->ty_bool_157))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->d_657)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the relational operator ", 24), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->d_657)).name_))), rt_g_lit(" returns BOOLEAN (RM79 6.6.1)", 29)));
}
(*(P117)rt_nil_check((*F->y_658))).vrp_ = (G_NV((*(P174)rt_nil_check(F->d_657)).flag_) == ((rt_int)1LL));
f_new_name_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("f_", 2), f_c_ident_761(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->d_657)).name_)))), one_rt_gstr(95)), &(*(P117)rt_nil_check((*F->y_658))).cname_);
(*(P117)rt_nil_check((*F->y_658))).decl_ = F->d_657;
(*(P117)rt_nil_check((*F->y_658))).level_ = G_NV(F->up->cur_level_139);
ret_:

  return;
}

static void f_decl_elements_661(struct f_greenc_1fr *up_, P174 decls_660) {
  struct f_decl_elements_661fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_660 = decls_660;
F->e_2141 = NULL;
F->e_2141 = F->decls_660;
F->declared_2142 = INT_MIN;
F->declared_2142 = 0;
F->up->anon_node_176 = NULL;
while ((F->e_2141 != NULL)) {
if ((((G_NV((*(P174)rt_nil_check(F->e_2141)).kind_) != ((rt_int)40LL)) && (G_NV((*(P174)rt_nil_check(F->e_2141)).kind_) != ((rt_int)41LL))) || ((*(P174)rt_nil_check(F->e_2141)).a_ != F->up->anon_node_176))) {
F->up->anon_node_176 = NULL;
}
if (((((G_NV((*(P174)rt_nil_check(F->e_2141)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check(F->e_2141)).kind_) == ((rt_int)45LL))) && (G_NV((*(P174)rt_nil_check(F->e_2141)).ival_) != ((rt_int)1LL))) && (!G_NV(F->declared_2142)))) {
f_declare_subprograms_652(F->up, F->e_2141);
F->declared_2142 = 1;
}
f_decl_element_663(F->up, F->e_2141);
F->e_2141 = (*(P174)rt_nil_check(F->e_2141)).next_;
}
L_end_2143: ;
ret_:

  return;
}

static void f_decl_element_663(struct f_greenc_1fr *up_, P174 e_662) {
  struct f_decl_element_663fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_662 = e_662;
F->saved_2144 = NULL;
F->saved_2144 = F->up->barriers_200;
if ((((*(P174)rt_nil_check(F->e_662)).formal_ != NULL) && (((((((G_NV((*(P174)rt_nil_check(F->e_662)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check(F->e_662)).kind_) == ((rt_int)45LL))) || (G_NV((*(P174)rt_nil_check(F->e_662)).kind_) == ((rt_int)48LL))) || (G_NV((*(P174)rt_nil_check(F->e_662)).kind_) == ((rt_int)49LL))) || (G_NV((*(P174)rt_nil_check(F->e_662)).kind_) == ((rt_int)50LL))) || (G_NV((*(P174)rt_nil_check(F->e_662)).kind_) == ((rt_int)51LL))) || (G_NV((*(P174)rt_nil_check(F->e_662)).kind_) == ((rt_int)54LL))))) {
f_push_barrier_684(F->up, F->e_662, G_NV(F->up->depth_120));
f_decl_element_1_665(F->up, F->e_662);
F->up->barriers_200 = F->saved_2144;
goto ret_;
}
f_decl_element_1_665(F->up, F->e_662);
ret_:

  return;
}

static void f_decl_element_1_665(struct f_greenc_1fr *up_, P174 e_664) {
  struct f_decl_element_1_665fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_664 = e_664;
F->pd_2145 = NULL;
F->y_2146 = NULL;
F->z_2147 = NULL;
F->t_2148 = NULL;
F->vt_2149 = NULL;
F->c_2150 = NULL;
F->acc_2151 = NULL;
F->v_2152 = NULL;
F->x_2153 = NULL;
F->ok_2154 = INT_MIN;
{ rt_int sel2155 = G_NV((*(P174)rt_nil_check(F->e_664)).kind_);
if (0 || sel2155 == ((rt_int)42LL)) {
F->y_2146 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_664)).name_)));
if ((((((((F->y_2146 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_2146)).kind_) == ((rt_int)5LL))) && (G_NV((*(P117)rt_nil_check(F->y_2146)).depth_) == G_NV(F->up->depth_120))) && ((*(P117)rt_nil_check(F->y_2146)).t_ != NULL)) && G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2146)).t_)).priv_)) && (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2146)).t_)).kind_) == ((rt_int)9LL))) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_664)).a_)).kind_) != ((rt_int)77LL)))) {
F->up->completing_173 = (*(P117)rt_nil_check(F->y_2146)).t_;
F->x_2153 = (*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2146)).t_)).name_;
F->pd_2145 = (*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2146)).t_)).decl_;
F->ok_2154 = G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2146)).t_)).is_restricted_);
f_type_definition_550(F->up, (*(P174)rt_nil_check(F->e_664)).a_, (*(P174)rt_nil_check(F->e_664)).name_, &F->t_2148, &F->c_2150);
F->up->completing_173 = NULL;
if ((F->t_2148 != (*(P117)rt_nil_check(F->y_2146)).t_)) {
as_R123(&(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2146)).t_)), (*(P122)rt_nil_check(F->t_2148)));
}
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2146)).t_)).name_ = F->x_2153;
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2146)).t_)).priv_ = 1;
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2146)).t_)).decl_ = F->pd_2145;
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2146)).t_)).is_restricted_ = G_NV(F->ok_2154);
(*(P117)rt_nil_check(F->y_2146)).c_ = F->c_2150;
} else {
F->y_2146 = f_new_sym_478(F->up, ((rt_int)5LL), (*(P174)rt_nil_check(F->e_664)).name_);
(*(P117)rt_nil_check(F->y_2146)).decl_ = F->e_664;
f_define_473(F->up, F->y_2146, G_NV((*(P174)rt_nil_check(F->e_664)).line_));
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_664)).a_)).kind_) == ((rt_int)77LL))) {
(*(P117)rt_nil_check(F->y_2146)).t_ = f_new_typ_480(F->up, ((rt_int)9LL));
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2146)).t_)).name_ = (*(P174)rt_nil_check(F->e_664)).name_;
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2146)).t_)).priv_ = 1;
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2146)).t_)).decl_ = F->up->cur_pkg_222;
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2146)).t_)).is_restricted_ = (G_NV((*(P174)rt_nil_check(F->e_664)).flag_) == ((rt_int)9LL));
} else {
f_type_definition_550(F->up, (*(P174)rt_nil_check(F->e_664)).a_, (*(P174)rt_nil_check(F->e_664)).name_, &(*(P117)rt_nil_check(F->y_2146)).t_, &(*(P117)rt_nil_check(F->y_2146)).c_);
}
}
} else if (0 || sel2155 == ((rt_int)43LL)) {
F->y_2146 = f_new_sym_478(F->up, ((rt_int)5LL), (*(P174)rt_nil_check(F->e_664)).name_);
f_resolve_516(F->up, (*(P174)rt_nil_check(F->e_664)).a_, &(*(P117)rt_nil_check(F->y_2146)).t_, &(*(P117)rt_nil_check(F->y_2146)).c_);
f_define_473(F->up, F->y_2146, G_NV((*(P174)rt_nil_check(F->e_664)).line_));
} else if (0 || sel2155 == ((rt_int)40LL)) {
f_resolve_object_type_671(F->up, (*(P174)rt_nil_check(F->e_664)).a_, &F->t_2148, &F->c_2150);
F->y_2146 = f_new_sym_478(F->up, ((rt_int)1LL), (*(P174)rt_nil_check(F->e_664)).name_);
if ((G_NV((*(P174)rt_nil_check(F->e_664)).flag_) == ((rt_int)2LL))) {
f_lvalue_775(F->up, (*(P174)rt_nil_check(F->e_664)).b_, &F->v_2152, &F->vt_2149, &F->c_2150, &(*(P117)rt_nil_check(F->y_2146)).ro_);
 (void)rt_range((*(P117)rt_nil_check(F->y_2146)).ro_, 0, 1);
f_check_type_495(F->up, F->vt_2149, F->t_2148, G_NV((*(P174)rt_nil_check(F->e_664)).line_));
f_ctype_500(F->up, F->t_2148, &F->acc_2151);
f_new_name_239(F->up, cat_rt_gstr(f_lower_s_247(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_664)).name_))), one_rt_gstr(95)), &F->x_2153);
if (G_NV(F->up->in_func_138)) {
f_put_to_261(F->up, F->up->fields_buf_137, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P140)rt_nil_check(F->acc_2151))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check(F->x_2153))), one_rt_gstr(59)));
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->", 3), (*(P140)rt_nil_check(F->x_2153))), rt_g_lit(" = &(", 5)), (*(P140)rt_nil_check(F->v_2152))), rt_g_lit(");", 2)));
(*(P117)rt_nil_check(F->y_2146)).byref_ = 1;
(*(P117)rt_nil_check(F->y_2146)).level_ = G_NV(F->up->cur_level_139);
(*(P117)rt_nil_check(F->y_2146)).access_path_ = F->x_2153;
} else {
f_put_to_261(F->up, F->up->out_globals_132, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->acc_2151))), rt_g_lit(" *g_", 4)), (*(P140)rt_nil_check(F->x_2153))), one_rt_gstr(59)));
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("g_", 2), (*(P140)rt_nil_check(F->x_2153))), rt_g_lit(" = &(", 5)), (*(P140)rt_nil_check(F->v_2152))), rt_g_lit(");", 2)));
(*(P117)rt_nil_check(F->y_2146)).level_ = ((rt_int)0LL);
(*(P117)rt_nil_check(F->y_2146)).access_path_ = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*g_", 4), (*(P140)rt_nil_check(F->x_2153))), one_rt_gstr(41)));
}
(*(P117)rt_nil_check(F->y_2146)).t_ = F->vt_2149;
(*(P117)rt_nil_check(F->y_2146)).c_ = F->c_2150;
f_define_473(F->up, F->y_2146, G_NV((*(P174)rt_nil_check(F->e_664)).line_));
goto ret_;
}
if ((((G_NV((*(P122)rt_nil_check(F->t_2148)).kind_) == ((rt_int)6LL)) && (!f_bounded_483(F->up, F->c_2150))) && ((*(P174)rt_nil_check(F->e_664)).b_ != NULL))) {
F->up->vrp_ok_227 = 1;
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->e_664)).b_, F->t_2148, &F->vt_2149, &F->v_2152);
F->up->vrp_ok_227 = 0;
f_check_type_495(F->up, F->vt_2149, F->t_2148, G_NV((*(P174)rt_nil_check(F->e_664)).line_));
f_storage_647(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_664)).name_)), F->t_2148, &F->acc_2151);
f_copy_code_632(F->up, F->t_2148, (*(P140)rt_nil_check(F->v_2152)), &F->x_2153);
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->acc_2151)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2153))), one_rt_gstr(59)));
} else {
f_storage_647(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_664)).name_)), F->t_2148, &F->acc_2151);
f_init_storage_620(F->up, (*(P140)rt_nil_check(F->acc_2151)), F->t_2148, F->c_2150);
if (((*(P174)rt_nil_check(F->e_664)).b_ != NULL)) {
if (f_restricted_here_571(F->up, F->t_2148)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_664)).line_), rt_g_lit("a restricted type has no assignment: no initial value (RM79 7.4)", 64));
}
if (f_is_const_access_769(F->up, (*(P174)rt_nil_check(F->e_664)).b_)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_664)).line_), rt_g_lit("a constant of an access type cannot be assigned to a variable (RM79 3.8)", 72));
}
F->up->vrp_ok_227 = 1;
if (((G_NV((*(P122)rt_nil_check(F->t_2148)).kind_) == ((rt_int)6LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_664)).b_)).kind_) == ((rt_int)12LL)))) {
F->up->agg_bounds_181 = F->acc_2151;
}
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->e_664)).b_, F->t_2148, &F->vt_2149, &F->v_2152);
F->up->agg_bounds_181 = NULL;
F->up->vrp_ok_227 = 0;
f_check_type_495(F->up, F->vt_2149, F->t_2148, G_NV((*(P174)rt_nil_check(F->e_664)).line_));
f_assign_code_628(F->up, (*(P140)rt_nil_check(F->acc_2151)), F->t_2148, (*(P140)rt_nil_check(F->v_2152)), F->c_2150, &F->x_2153);
f_emit_263(F->up, (*(P140)rt_nil_check(F->x_2153)));
}
}
(*(P117)rt_nil_check(F->y_2146)).t_ = F->t_2148;
(*(P117)rt_nil_check(F->y_2146)).c_ = F->c_2150;
f_bind_650(F->up, F->y_2146, F->acc_2151);
f_define_473(F->up, F->y_2146, G_NV((*(P174)rt_nil_check(F->e_664)).line_));
} else if (0 || sel2155 == ((rt_int)41LL)) {
f_resolve_object_type_671(F->up, (*(P174)rt_nil_check(F->e_664)).a_, &F->t_2148, &F->c_2150);
F->z_2147 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_664)).name_)));
if (((*(P174)rt_nil_check(F->e_664)).b_ == NULL)) {
if (((F->up->cur_pkg_222 == NULL) || (!(G_NV((*(P122)rt_nil_check(F->t_2148)).priv_) && (G_NV((*(P122)rt_nil_check(F->t_2148)).kind_) == ((rt_int)9LL)))))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_664)).line_), rt_g_lit("a constant needs a value; only a constant of a private type is deferred (RM79 7.4)", 82));
}
F->y_2146 = f_new_sym_478(F->up, ((rt_int)2LL), (*(P174)rt_nil_check(F->e_664)).name_);
(*(P117)rt_nil_check(F->y_2146)).t_ = F->t_2148;
(*(P117)rt_nil_check(F->y_2146)).c_ = F->c_2150;
(*(P117)rt_nil_check(F->y_2146)).ro_ = 1;
(*(P117)rt_nil_check(F->y_2146)).flags_ = rt_add(((rt_int)1LL), ((rt_int)2LL));
f_define_473(F->up, F->y_2146, G_NV((*(P174)rt_nil_check(F->e_664)).line_));
goto ret_;
}
if (((((F->z_2147 != NULL) && (G_NV((*(P117)rt_nil_check(F->z_2147)).depth_) == G_NV(F->up->depth_120))) && (G_NV((*(P117)rt_nil_check(F->z_2147)).kind_) == ((rt_int)2LL))) && (G_NV((*(P117)rt_nil_check(F->z_2147)).flags_) == rt_add(((rt_int)1LL), ((rt_int)2LL))))) {
f_check_type_495(F->up, F->t_2148, (*(P117)rt_nil_check(F->z_2147)).t_, G_NV((*(P174)rt_nil_check(F->e_664)).line_));
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->e_664)).b_, F->t_2148, &F->vt_2149, &F->v_2152);
f_check_type_495(F->up, F->vt_2149, F->t_2148, G_NV((*(P174)rt_nil_check(F->e_664)).line_));
f_storage_647(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_664)).name_)), F->t_2148, &F->acc_2151);
f_bind_650(F->up, F->z_2147, F->acc_2151);
f_copy_code_632(F->up, F->t_2148, (*(P140)rt_nil_check(F->v_2152)), &F->x_2153);
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->acc_2151)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2153))), one_rt_gstr(59)));
(*(P117)rt_nil_check(F->z_2147)).flags_ = ((rt_int)1LL);
goto ret_;
}
F->y_2146 = f_new_sym_478(F->up, ((rt_int)2LL), (*(P174)rt_nil_check(F->e_664)).name_);
(*(P117)rt_nil_check(F->y_2146)).flags_ = ((rt_int)1LL);
F->up->vrp_ok_227 = 1;
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->e_664)).b_, F->t_2148, &F->vt_2149, &F->v_2152);
F->up->vrp_ok_227 = 0;
f_check_type_495(F->up, F->vt_2149, F->t_2148, G_NV((*(P174)rt_nil_check(F->e_664)).line_));
if ((G_NV((*(P122)rt_nil_check(F->t_2148)).kind_) == ((rt_int)1LL))) {
f_manifest_512(F->up, (*(P174)rt_nil_check(F->e_664)).b_, &(*(P117)rt_nil_check(F->y_2146)).mvalue_, &F->ok_2154);
 (void)rt_range(F->ok_2154, 0, 1);
(*(P117)rt_nil_check(F->y_2146)).hasmv_ = G_NV(F->ok_2154);
}
f_storage_647(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_664)).name_)), F->t_2148, &F->acc_2151);
f_copy_code_632(F->up, F->t_2148, (*(P140)rt_nil_check(F->v_2152)), &F->x_2153);
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->acc_2151)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2153))), one_rt_gstr(59)));
(*(P117)rt_nil_check(F->y_2146)).t_ = F->t_2148;
(*(P117)rt_nil_check(F->y_2146)).c_ = F->c_2150;
(*(P117)rt_nil_check(F->y_2146)).ro_ = 1;
f_bind_650(F->up, F->y_2146, F->acc_2151);
f_define_473(F->up, F->y_2146, G_NV((*(P174)rt_nil_check(F->e_664)).line_));
} else if (0 || sel2155 == ((rt_int)46LL)) {
if (((*(P174)rt_nil_check(F->e_664)).a_ != NULL)) {
if (((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_664)).a_)).kind_) == ((rt_int)9LL)) && f_is_package_1058(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_664)).a_)).a_))) {
F->y_2146 = f_member_of_1062(F->up, f_path_of_353(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_664)).a_)).a_), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_664)).a_)).name_)), G_NV((*(P174)rt_nil_check(F->e_664)).line_));
} else if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_664)).a_)).kind_) == ((rt_int)5LL))) {
F->y_2146 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_664)).a_)).name_)));
} else {
F->y_2146 = NULL;
}
if (((F->y_2146 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_2146)).kind_) != ((rt_int)6LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_664)).line_), rt_g_lit("an exception is renamed only as an exception", 44));
}
f_copy_sym_1067(F->up, F->y_2146, &F->z_2147);
(*(P117)rt_nil_check(F->z_2147)).name_ = (*(P174)rt_nil_check(F->e_664)).name_;
f_define_473(F->up, F->z_2147, G_NV((*(P174)rt_nil_check(F->e_664)).line_));
goto ret_;
}
F->y_2146 = f_new_sym_478(F->up, ((rt_int)6LL), (*(P174)rt_nil_check(F->e_664)).name_);
f_new_name_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("ex_", 3), f_lower_s_247(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_664)).name_)))), one_rt_gstr(95)), &(*(P117)rt_nil_check(F->y_2146)).cname_);
f_put_to_261(F->up, F->up->out_globals_132, cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int ", 11), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2146)).cname_))), one_rt_gstr(59)));
f_put_to_261(F->up, F->up->out_excs_135, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2146)).cname_))), rt_g_lit(" = rt_exc(", 10)), f_q_254(F->up)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_664)).name_))), f_q_254(F->up)), rt_g_lit(");", 2)));
f_define_473(F->up, F->y_2146, G_NV((*(P174)rt_nil_check(F->e_664)).line_));
} else if (0 || sel2155 == ((rt_int)44LL) || sel2155 == ((rt_int)45LL)) {
if (((G_NV((*(P174)rt_nil_check(F->e_664)).ival_) == ((rt_int)0LL)) && f_is_generic_name_1270(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_664)).name_))))) {
f_attach_generic_body_1272(F->up, F->e_664);
} else if ((G_NV((*(P174)rt_nil_check(F->e_664)).ival_) == ((rt_int)2LL))) {
f_rename_subprogram_678(F->up, F->e_664);
} else if ((G_NV((*(P174)rt_nil_check(F->e_664)).ival_) == ((rt_int)3LL))) {
f_stub_676(F->up, F->e_664);
} else if ((G_NV((*(P174)rt_nil_check(F->e_664)).ival_) == ((rt_int)1LL))) {
f_build_subprogram_659(F->up, F->e_664, &F->y_2146);
f_define_473(F->up, F->y_2146, G_NV((*(P174)rt_nil_check(F->e_664)).line_));
f_elaborate_defaults_656(F->up, F->y_2146);
} else {
f_subprogram_body_706(F->up, F->e_664, f_lookup_decl_447(F->up, F->e_664));
}
} else if (0 || sel2155 == ((rt_int)55LL)) {
f_use_clause_1081(F->up, F->e_664);
} else if (0 || sel2155 == ((rt_int)56LL)) {
f_pragma_decl_667(F->up, F->e_664);
} else {
f_other_decl_686(F->up, F->e_664);
}
}
ret_:

  return;
}

static void f_pragma_decl_667(struct f_greenc_1fr *up_, P174 e_666) {
  struct f_pragma_decl_667fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_666 = e_666;
ret_:

  return;
}

static void f_resolve_object_type_671(struct f_greenc_1fr *up_, P174 st_668, P122 *t_669, P178 *c_670) {
  struct f_resolve_object_type_671fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_668 = st_668;
F->t_669 = t_669;
F->c_670 = c_670;
if (((G_NV((*(P174)rt_nil_check(F->st_668)).kind_) != ((rt_int)80LL)) && (F->st_668 == F->up->anon_node_176))) {
(*F->t_669) = F->up->anon_typ_177;
(*F->c_670) = F->up->anon_cons_180;
goto ret_;
}
f_resolve_516(F->up, F->st_668, &(*F->t_669), &(*F->c_670));
if ((G_NV((*(P174)rt_nil_check(F->st_668)).kind_) != ((rt_int)80LL))) {
F->up->anon_node_176 = F->st_668;
F->up->anon_typ_177 = (*F->t_669);
F->up->anon_cons_180 = (*F->c_670);
}
ret_:

  return;
}

static void f_find_subunit_674(struct f_greenc_1fr *up_, P174 e_672, P174 *r_673) {
  struct f_find_subunit_674fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_672 = e_672;
F->r_673 = r_673;
F->u_2156 = NULL;
F->u_2156 = F->up->units_219;
F->k_2157 = INT64_MIN;
(*F->r_673) = NULL;
while ((F->u_2156 != NULL)) {
if (((((*(P174)rt_nil_check(F->u_2156)).formal_ != NULL) && (G_NV(({ rt_gstr ix2159 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->u_2156)).formal_)); ix2159.p[rt_index(((rt_int)1LL), ix2159.lo, ix2159.hi) - ix2159.lo]; })) == 33)) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->u_2156)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_672)).name_))))) {
if (((G_NV((*(P174)rt_nil_check(F->u_2156)).kind_) == G_NV((*(P174)rt_nil_check(F->e_672)).kind_)) || (((G_NV((*(P174)rt_nil_check(F->u_2156)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check(F->u_2156)).kind_) == ((rt_int)45LL))) && ((G_NV((*(P174)rt_nil_check(F->e_672)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check(F->e_672)).kind_) == ((rt_int)45LL)))))) {
(*F->r_673) = F->u_2156;
goto ret_;
}
}
F->u_2156 = (*(P174)rt_nil_check(F->u_2156)).next_;
}
L_end_2158: ;
ret_:

  return;
}

static void f_stub_676(struct f_greenc_1fr *up_, P174 e_675) {
  struct f_stub_676fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_675 = e_675;
F->sub_2160 = NULL;
F->saved_2161 = NULL;
F->saved_2161 = F->up->barriers_200;
F->k_2162 = INT64_MIN;
F->d_2163 = INT64_MIN;
F->first_name_2164 = NULL;
F->list_2165 = NULL;
F->y_2166 = NULL;
f_find_subunit_674(F->up, F->e_675, &F->sub_2160);
if ((F->sub_2160 == NULL)) {
{ rt_int lo2169 = ((rt_int)1LL), hi2170 = G_NV(F->up->nunits_188);
for (rt_int it2171 = hi2170; it2171 >= lo2169; it2171--) {
F->i_2168 = it2171;
if ((F->sub_2160 == NULL)) {
f_lib_load_1323(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(({ A183 ix2173 = F->up->unit_names_184; ix2173.p[rt_index(F->i_2168, ix2173.lo, ix2173.hi) - ix2173.lo]; }))), one_rt_gstr(46)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_675)).name_))), rt_g_lit(".sub", 4)), &F->sub_2160);
}
}
}
L_end_2167: ;
if ((F->sub_2160 == NULL)) {
f_lib_load_1323(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->up->cur_comp_unit_209)), one_rt_gstr(46)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_675)).name_))), rt_g_lit(".sub", 4)), &F->sub_2160);
}
if ((F->sub_2160 != NULL)) {
(*(P174)rt_nil_check(F->sub_2160)).next_ = F->up->units_219;
F->up->units_219 = F->sub_2160;
}
}
if ((F->sub_2160 == NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_675)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the subunit of ", 15), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_675)).name_))), rt_g_lit(" is neither in this compilation nor in the ", 43)), rt_g_lit("program library (RM79 10.2)", 27)));
}
F->list_2165 = f_mk_236(F->up, ({ rt_gstr sl2177 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->sub_2160)).formal_)); rt_int l_ = ((rt_int)2LL), h_ = ({ rt_gstr at2176 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->sub_2160)).formal_)); at2176.hi >= at2176.lo ? at2176.hi - at2176.lo + 1 : (rt_int)0; }); if (l_ <= h_) { rt_index(l_, sl2177.lo, sl2177.hi); rt_index(h_, sl2177.lo, sl2177.hi); } sl2177.p += l_ - sl2177.lo; sl2177.lo = l_; sl2177.hi = h_; sl2177; }));
(*(P174)rt_nil_check(F->sub_2160)).formal_ = f_mk_236(F->up, cat_rt_gstr(one_rt_gstr(35), (*(P140)rt_nil_check(F->list_2165))));
F->k_2162 = ((rt_int)2LL);
while (((G_NV(F->k_2162) <= ({ rt_gstr at2179 = (*(P140)rt_nil_check(F->list_2165)); at2179.hi >= at2179.lo ? at2179.hi - at2179.lo + 1 : (rt_int)0; })) && (G_NV(({ rt_gstr ix2180 = (*(P140)rt_nil_check(F->list_2165)); ix2180.p[rt_index(G_NV(F->k_2162), ix2180.lo, ix2180.hi) - ix2180.lo]; })) != 44))) {
F->k_2162 = rt_add(G_NV(F->k_2162), ((rt_int)1LL));
}
L_end_2178: ;
F->first_name_2164 = f_mk_236(F->up, ({ rt_gstr sl2182 = (*(P140)rt_nil_check(F->list_2165)); rt_int l_ = ((rt_int)2LL), h_ = rt_sub(G_NV(F->k_2162), ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl2182.lo, sl2182.hi); rt_index(h_, sl2182.lo, sl2182.hi); } sl2182.p += l_ - sl2182.lo; sl2182.lo = l_; sl2182.hi = h_; sl2182; }));
F->d_2163 = f_enclosing_depth_443(F->up, (*(P140)rt_nil_check(F->first_name_2164)));
if ((G_NV(F->d_2163) < ((rt_int)0LL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->sub_2160)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the first name in the visibility list of subunit ", 49), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->sub_2160)).name_))), rt_g_lit(" is an enclosing unit (RM79 10.2)", 33)));
}
F->up->barriers_200 = ({ R199 *cell2183 = rt_alloc(sizeof(R199)); *cell2183 = cp_R199(({ R199 ag2184; ag2184.limit_ = rt_sub(G_NV(F->d_2163), ((rt_int)1LL)); ag2184.keep_ = rt_neg(((rt_int)1LL)); ag2184.allowed_ = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->list_2165)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->sub_2160)).name_))), one_rt_gstr(44))); ag2184.next_ = NULL; ag2184; })); (P198)cell2183; });
if (((G_NV((*(P174)rt_nil_check(F->e_675)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check(F->e_675)).kind_) == ((rt_int)45LL)))) {
F->y_2166 = f_lookup_decl_447(F->up, F->e_675);
f_subprogram_body_706(F->up, F->sub_2160, F->y_2166);
} else if ((G_NV((*(P174)rt_nil_check(F->e_675)).kind_) == ((rt_int)49LL))) {
f_package_body_1077(F->up, F->sub_2160);
} else {
f_task_body_1180(F->up, F->sub_2160);
}
F->up->barriers_200 = F->saved_2161;
ret_:

  return;
}

static void f_rename_subprogram_678(struct f_greenc_1fr *up_, P174 e_677) {
  struct f_rename_subprogram_678fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_677 = e_677;
F->newy_2185 = NULL;
F->y_2186 = NULL;
F->z_2187 = NULL;
F->cand_2188 = NULL;
F->ix_2189 = NULL;
F->p_2190 = NULL;
F->q_2191 = NULL;
F->tail_2192 = NULL;
f_build_subprogram_659(F->up, F->e_677, &F->newy_2185);
F->y_2186 = NULL;
if (((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_677)).c_)).kind_) == ((rt_int)5LL)) || ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_677)).c_)).kind_) == ((rt_int)9LL)) && f_is_package_1058(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_677)).c_)).a_)))) {
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_677)).c_)).kind_) == ((rt_int)5LL))) {
F->cand_2188 = ({ A116 ix2193 = F->up->table_119; ix2193.p[rt_index(f_hash_425(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_677)).c_)).name_))), ix2193.lo, ix2193.hi) - ix2193.lo]; });
while ((F->cand_2188 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->cand_2188)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_677)).c_)).name_))) && (((G_NV((*(P117)rt_nil_check(F->cand_2188)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->cand_2188)).kind_) == ((rt_int)4LL))) || (G_NV((*(P117)rt_nil_check(F->cand_2188)).kind_) == ((rt_int)10LL)))) && f_visible_sym_430(F->up, F->cand_2188))) {
if (((f_same_types_464(F->up, (*(P117)rt_nil_check(F->cand_2188)).params_, (*(P117)rt_nil_check(F->newy_2185)).params_) && f_same_452(F->up, (*(P117)rt_nil_check(F->cand_2188)).result_, (*(P117)rt_nil_check(F->newy_2185)).result_)) && (F->y_2186 == NULL))) {
F->y_2186 = F->cand_2188;
}
}
F->cand_2188 = (*(P117)rt_nil_check(F->cand_2188)).chain_;
}
L_end_2194: ;
} else {
F->cand_2188 = (*(P117)rt_nil_check(f_lookup_path_1056(F->up, f_path_of_353(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_677)).c_)).a_)))).members_;
while ((F->cand_2188 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->cand_2188)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_677)).c_)).name_))) && (((G_NV((*(P117)rt_nil_check(F->cand_2188)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->cand_2188)).kind_) == ((rt_int)4LL))) || (G_NV((*(P117)rt_nil_check(F->cand_2188)).kind_) == ((rt_int)10LL)))) && (!G_NV((*(P117)rt_nil_check(F->cand_2188)).hidden_)))) {
if (((f_same_types_464(F->up, (*(P117)rt_nil_check(F->cand_2188)).params_, (*(P117)rt_nil_check(F->newy_2185)).params_) && f_same_452(F->up, (*(P117)rt_nil_check(F->cand_2188)).result_, (*(P117)rt_nil_check(F->newy_2185)).result_)) && (F->y_2186 == NULL))) {
F->y_2186 = F->cand_2188;
}
}
F->cand_2188 = (*(P117)rt_nil_check(F->cand_2188)).mnext_;
}
L_end_2195: ;
}
}
if (((F->y_2186 == NULL) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_677)).c_)).kind_) == ((rt_int)9LL)))) {
f_entry_sym_1189(F->up, (*(P174)rt_nil_check(F->e_677)).c_, &F->y_2186, &F->ix_2189);
if (((F->ix_2189 != NULL) || ((*(P117)rt_nil_check(F->y_2186)).c_ != NULL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_677)).line_), rt_g_lit("a renamed entry is an entry of a single task (RM79 8.5)", 55));
}
if (((!f_same_types_464(F->up, (*(P117)rt_nil_check(F->y_2186)).params_, (*(P117)rt_nil_check(F->newy_2185)).params_)) || (G_NV((*(P174)rt_nil_check(F->e_677)).kind_) != ((rt_int)44LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_677)).line_), rt_g_lit("an entry is renamed as a procedure with the same parameters (RM79 8.5)", 70));
}
}
if ((F->y_2186 == NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_677)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("no subprogram ", 14), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_677)).c_)).name_))), rt_g_lit(" with this profile to rename (RM79 8.5)", 39)));
}
f_copy_sym_1067(F->up, F->y_2186, &F->z_2187);
(*(P117)rt_nil_check(F->z_2187)).name_ = (*(P174)rt_nil_check(F->e_677)).name_;
(*(P117)rt_nil_check(F->z_2187)).decl_ = (*(P117)rt_nil_check(F->y_2186)).decl_;
(*(P117)rt_nil_check(F->z_2187)).params_ = NULL;
F->p_2190 = (*(P117)rt_nil_check(F->y_2186)).params_;
F->q_2191 = (*(P117)rt_nil_check(F->newy_2185)).params_;
while ((F->p_2190 != NULL)) {
if ((F->tail_2192 == NULL)) {
(*(P117)rt_nil_check(F->z_2187)).params_ = ({ R1888 *cell2197 = rt_alloc(sizeof(R1888)); *cell2197 = cp_R1888(({ R1888 ag2198; ag2198.name_ = (*(P1887)rt_nil_check(F->q_2191)).name_; ag2198.mode_ = G_NV((*(P1887)rt_nil_check(F->p_2190)).mode_); ag2198.t_ = (*(P1887)rt_nil_check(F->p_2190)).t_; ag2198.c_ = (*(P1887)rt_nil_check(F->p_2190)).c_; ag2198.cfield_ = (*(P1887)rt_nil_check(F->p_2190)).cfield_; ag2198.dflt_ = (*(P1887)rt_nil_check(F->q_2191)).dflt_; ag2198.next_ = NULL; ag2198.dsym_ = NULL; ag2198; })); (P1887)cell2197; });
F->tail_2192 = (*(P117)rt_nil_check(F->z_2187)).params_;
} else {
(*(P1887)rt_nil_check(F->tail_2192)).next_ = ({ R1888 *cell2199 = rt_alloc(sizeof(R1888)); *cell2199 = cp_R1888(({ R1888 ag2200; ag2200.name_ = (*(P1887)rt_nil_check(F->q_2191)).name_; ag2200.mode_ = G_NV((*(P1887)rt_nil_check(F->p_2190)).mode_); ag2200.t_ = (*(P1887)rt_nil_check(F->p_2190)).t_; ag2200.c_ = (*(P1887)rt_nil_check(F->p_2190)).c_; ag2200.cfield_ = (*(P1887)rt_nil_check(F->p_2190)).cfield_; ag2200.dflt_ = (*(P1887)rt_nil_check(F->q_2191)).dflt_; ag2200.next_ = NULL; ag2200.dsym_ = NULL; ag2200; })); (P1887)cell2199; });
F->tail_2192 = (*(P1887)rt_nil_check(F->tail_2192)).next_;
}
F->p_2190 = (*(P1887)rt_nil_check(F->p_2190)).next_;
F->q_2191 = (*(P1887)rt_nil_check(F->q_2191)).next_;
}
L_end_2196: ;
f_define_473(F->up, F->z_2187, G_NV((*(P174)rt_nil_check(F->e_677)).line_));
f_elaborate_defaults_656(F->up, F->z_2187);
ret_:

  return;
}

static void f_rename_module_681(struct f_greenc_1fr *up_, P174 e_679, P174 target_680) {
  struct f_rename_module_681fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_679 = e_679;
F->target_680 = target_680;
F->y_2201 = NULL;
F->z_2202 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->target_680)).kind_) == ((rt_int)8LL))) {
F->y_2201 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->target_680)).a_)).name_)));
if ((((F->y_2201 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_2201)).kind_) != ((rt_int)9LL))) || ((*(P117)rt_nil_check(F->y_2201)).c_ == NULL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_679)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->target_680)).a_)).name_)), rt_g_lit(" is not a task family (RM79 8.5)", 32)));
}
f_copy_sym_1067(F->up, F->y_2201, &F->z_2202);
(*(P117)rt_nil_check(F->z_2202)).name_ = (*(P174)rt_nil_check(F->e_679)).name_;
(*(P117)rt_nil_check(F->z_2202)).flags_ = ((rt_int)4LL);
(*(P117)rt_nil_check(F->z_2202)).decl_ = F->target_680;
f_define_473(F->up, F->z_2202, G_NV((*(P174)rt_nil_check(F->e_679)).line_));
goto ret_;
}
if ((G_NV((*(P174)rt_nil_check(F->target_680)).kind_) == ((rt_int)5LL))) {
F->y_2201 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->target_680)).name_)));
} else if ((G_NV((*(P174)rt_nil_check(F->target_680)).kind_) == ((rt_int)9LL))) {
F->y_2201 = f_lookup_path_1056(F->up, f_path_of_353(F->up, F->target_680));
}
if (((F->y_2201 == NULL) || ((G_NV((*(P117)rt_nil_check(F->y_2201)).kind_) != ((rt_int)8LL)) && (G_NV((*(P117)rt_nil_check(F->y_2201)).kind_) != ((rt_int)9LL))))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_679)).line_), rt_g_lit("a module is renamed as a module of the same kind (RM79 8.5)", 59));
}
if (((G_NV((*(P117)rt_nil_check(F->y_2201)).kind_) == ((rt_int)9LL)) != (G_NV((*(P174)rt_nil_check(F->e_679)).kind_) == ((rt_int)50LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_679)).line_), rt_g_lit("a package is renamed as a package, a task as a task (RM79 8.5)", 62));
}
f_copy_sym_1067(F->up, F->y_2201, &F->z_2202);
(*(P117)rt_nil_check(F->z_2202)).name_ = (*(P174)rt_nil_check(F->e_679)).name_;
f_define_473(F->up, F->z_2202, G_NV((*(P174)rt_nil_check(F->e_679)).line_));
ret_:

  return;
}

static void f_push_barrier_684(struct f_greenc_1fr *up_, P174 e_682, rt_int limit_683) {
  struct f_push_barrier_684fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_682 = e_682;
F->limit_683 = limit_683;
F->b_2203 = NULL;
F->first_name_2204 = NULL;
F->k_2205 = INT64_MIN;
F->b_2203 = ({ R199 *cell2206 = rt_alloc(sizeof(R199)); *cell2206 = cp_R199(({ R199 ag2207; ag2207.limit_ = F->limit_683; ag2207.keep_ = rt_neg(((rt_int)1LL)); ag2207.allowed_ = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_682)).formal_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_682)).name_))), one_rt_gstr(44))); ag2207.next_ = F->up->barriers_200; ag2207; })); (P198)cell2206; });
F->k_2205 = ((rt_int)2LL);
while (((G_NV(F->k_2205) <= ({ rt_gstr at2209 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_682)).formal_)); at2209.hi >= at2209.lo ? at2209.hi - at2209.lo + 1 : (rt_int)0; })) && (G_NV(({ rt_gstr ix2210 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_682)).formal_)); ix2210.p[rt_index(G_NV(F->k_2205), ix2210.lo, ix2210.hi) - ix2210.lo]; })) != 44))) {
F->k_2205 = rt_add(G_NV(F->k_2205), ((rt_int)1LL));
}
L_end_2208: ;
if ((G_NV(F->k_2205) > ((rt_int)2LL))) {
F->first_name_2204 = f_mk_236(F->up, ({ rt_gstr sl2212 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_682)).formal_)); rt_int l_ = ((rt_int)2LL), h_ = rt_sub(G_NV(F->k_2205), ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl2212.lo, sl2212.hi); rt_index(h_, sl2212.lo, sl2212.hi); } sl2212.p += l_ - sl2212.lo; sl2212.lo = l_; sl2212.hi = h_; sl2212; }));
(*(P198)rt_nil_check(F->b_2203)).keep_ = f_enclosing_depth_443(F->up, (*(P140)rt_nil_check(F->first_name_2204)));
}
F->up->barriers_200 = F->b_2203;
ret_:

  return;
}

static void f_other_decl_686(struct f_greenc_1fr *up_, P174 e_685) {
  struct f_other_decl_686fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_685 = e_685;
if (((G_NV((*(P174)rt_nil_check(F->e_685)).kind_) == ((rt_int)48LL)) && (G_NV((*(P174)rt_nil_check(F->e_685)).flag_) == ((rt_int)3LL)))) {
f_rename_module_681(F->up, F->e_685, (*(P174)rt_nil_check(F->e_685)).a_);
} else if (((G_NV((*(P174)rt_nil_check(F->e_685)).kind_) == ((rt_int)50LL)) && (G_NV((*(P174)rt_nil_check(F->e_685)).flag_) == ((rt_int)3LL)))) {
f_rename_module_681(F->up, F->e_685, (*(P174)rt_nil_check(F->e_685)).b_);
} else if ((G_NV((*(P174)rt_nil_check(F->e_685)).kind_) == ((rt_int)48LL))) {
f_package_spec_1072(F->up, F->e_685);
} else if ((G_NV((*(P174)rt_nil_check(F->e_685)).kind_) == ((rt_int)49LL))) {
f_package_body_1077(F->up, F->e_685);
} else {
f_task_decl_1163(F->up, F->e_685);
}
ret_:

  return;
}

static void f_scan_labels_689(struct f_greenc_1fr *up_, P174 stmts_687, rt_gstr path_688) {
  struct f_scan_labels_689fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_687 = stmts_687;
F->path_688 = cp_rt_gstr(path_688);
F->s_2213 = NULL;
F->s_2213 = F->stmts_687;
F->a_2214 = NULL;
F->l_2215 = NULL;
F->c_2216 = NULL;
while ((F->s_2213 != NULL)) {
if ((G_NV((*(P174)rt_nil_check(F->s_2213)).kind_) == ((rt_int)57LL))) {
F->l_2215 = F->up->body_labels_191;
while ((F->l_2215 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P189)rt_nil_check(F->l_2215)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_2213)).name_)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_2213)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("label ", 6), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_2213)).name_))), rt_g_lit(" is already used in this body (RM79 5)", 38)));
}
F->l_2215 = (*(P189)rt_nil_check(F->l_2215)).next_;
}
L_end_2218: ;
f_new_name_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("lbl_", 4), f_lower_s_247(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_2213)).name_)))), one_rt_gstr(95)), &F->c_2216);
F->up->body_labels_191 = ({ R190 *cell2219 = rt_alloc(sizeof(R190)); *cell2219 = cp_R190(({ R190 ag2220; ag2220.name_ = (*(P174)rt_nil_check(F->s_2213)).name_; ag2220.cname_ = F->c_2216; ag2220.path_ = f_mk_236(F->up, F->path_688); ag2220.frames_ = ((rt_int)0LL); ag2220.line_ = G_NV((*(P174)rt_nil_check(F->s_2213)).line_); ag2220.next_ = F->up->body_labels_191; ag2220; })); (P189)cell2219; });
} else if ((G_NV((*(P174)rt_nil_check(F->s_2213)).kind_) == ((rt_int)58LL))) {
F->up->body_gotos_192 = ({ R190 *cell2221 = rt_alloc(sizeof(R190)); *cell2221 = cp_R190(({ R190 ag2222; ag2222.name_ = (*(P174)rt_nil_check(F->s_2213)).name_; ag2222.cname_ = NULL; ag2222.path_ = f_mk_236(F->up, F->path_688); ag2222.frames_ = ((rt_int)0LL); ag2222.line_ = G_NV((*(P174)rt_nil_check(F->s_2213)).line_); ag2222.next_ = F->up->body_gotos_192; ag2222; })); (P189)cell2221; });
} else if ((G_NV((*(P174)rt_nil_check(F->s_2213)).kind_) == ((rt_int)22LL))) {
F->a_2214 = (*(P174)rt_nil_check(F->s_2213)).a_;
while ((F->a_2214 != NULL)) {
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_689(F->up, (*(P174)rt_nil_check(F->a_2214)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_688, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
F->a_2214 = (*(P174)rt_nil_check(F->a_2214)).next_;
}
L_end_2223: ;
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_689(F->up, (*(P174)rt_nil_check(F->s_2213)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_688, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
} else if ((G_NV((*(P174)rt_nil_check(F->s_2213)).kind_) == ((rt_int)23LL))) {
F->a_2214 = (*(P174)rt_nil_check(F->s_2213)).b_;
while ((F->a_2214 != NULL)) {
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_689(F->up, (*(P174)rt_nil_check(F->a_2214)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_688, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
F->a_2214 = (*(P174)rt_nil_check(F->a_2214)).next_;
}
L_end_2224: ;
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_689(F->up, (*(P174)rt_nil_check(F->s_2213)).c_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_688, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
} else if ((G_NV((*(P174)rt_nil_check(F->s_2213)).kind_) == ((rt_int)24LL))) {
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_689(F->up, (*(P174)rt_nil_check(F->s_2213)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_688, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
} else if ((G_NV((*(P174)rt_nil_check(F->s_2213)).kind_) == ((rt_int)25LL))) {
f_scan_guarded_693(F->up, (*(P174)rt_nil_check(F->s_2213)).b_, (*(P174)rt_nil_check(F->s_2213)).c_, F->path_688);
} else if ((G_NV((*(P174)rt_nil_check(F->s_2213)).kind_) == ((rt_int)34LL))) {
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_689(F->up, (*(P174)rt_nil_check(F->s_2213)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_688, one_rt_gstr(97)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
} else if ((G_NV((*(P174)rt_nil_check(F->s_2213)).kind_) == ((rt_int)35LL))) {
F->a_2214 = (*(P174)rt_nil_check(F->s_2213)).a_;
while ((F->a_2214 != NULL)) {
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->a_2214)).b_)).kind_) == ((rt_int)34LL))) {
f_scan_labels_689(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->a_2214)).b_)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_688, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), rt_g_lit("/a", 2)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
}
f_scan_labels_689(F->up, (*(P174)rt_nil_check(F->a_2214)).c_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_688, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
F->a_2214 = (*(P174)rt_nil_check(F->a_2214)).next_;
}
L_end_2225: ;
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_689(F->up, (*(P174)rt_nil_check(F->s_2213)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_688, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
}
F->s_2213 = (*(P174)rt_nil_check(F->s_2213)).next_;
}
L_end_2217: ;
ret_:

  return;
}

static void f_scan_guarded_693(struct f_greenc_1fr *up_, P174 stmts_690, P174 hs_691, rt_gstr path_692) {
  struct f_scan_guarded_693fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_690 = stmts_690;
F->hs_691 = hs_691;
F->path_692 = cp_rt_gstr(path_692);
F->h_2226 = NULL;
F->h_2226 = F->hs_691;
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
if ((F->hs_691 == NULL)) {
f_scan_labels_689(F->up, F->stmts_690, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_692, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
} else {
f_scan_labels_689(F->up, F->stmts_690, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_692, one_rt_gstr(103)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
}
while ((F->h_2226 != NULL)) {
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_689(F->up, (*(P174)rt_nil_check(F->h_2226)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_692, one_rt_gstr(104)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
F->h_2226 = (*(P174)rt_nil_check(F->h_2226)).next_;
}
L_end_2227: ;
ret_:

  return;
}

static rt_int f_count_g_695(struct f_greenc_1fr *up_, rt_gstr p_694) {
  struct f_count_g_695fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_694 = cp_rt_gstr(p_694);
F->n_2228 = INT64_MIN;
F->n_2228 = ((rt_int)0LL);
{ rt_int lo2233 = ({ rt_gstr at2230 = F->p_694; at2230.lo; }), hi2234 = ({ rt_gstr at2231 = F->p_694; at2231.hi; });
for (rt_int it2235 = lo2233; it2235 <= hi2234; it2235++) {
F->i_2232 = it2235;
if ((G_NV(({ rt_gstr ix2236 = F->p_694; ix2236.p[rt_index(F->i_2232, ix2236.lo, ix2236.hi) - ix2236.lo]; })) == 103)) {
F->n_2228 = rt_add(G_NV(F->n_2228), ((rt_int)1LL));
}
}
}
L_end_2229: ;
F->result_ = G_NV(F->n_2228);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_label_body_698(struct f_greenc_1fr *up_, P174 stmts_696, P174 hs_697) {
  struct f_label_body_698fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_696 = stmts_696;
F->hs_697 = hs_697;
F->l_2237 = NULL;
F->g_2238 = NULL;
F->gp_2239 = NULL;
F->lp_2240 = NULL;
F->up->body_labels_191 = NULL;
F->up->body_gotos_192 = NULL;
F->up->segments_193 = ((rt_int)0LL);
f_scan_guarded_693(F->up, F->stmts_696, F->hs_697, rt_g_lit("/", 1));
F->l_2237 = F->up->body_labels_191;
while ((F->l_2237 != NULL)) {
(*(P189)rt_nil_check(F->l_2237)).frames_ = rt_add(G_NV(F->up->frames_150), f_count_g_695(F->up, (*(P140)rt_nil_check((*(P189)rt_nil_check(F->l_2237)).path_))));
F->l_2237 = (*(P189)rt_nil_check(F->l_2237)).next_;
}
L_end_2241: ;
F->g_2238 = F->up->body_gotos_192;
while ((F->g_2238 != NULL)) {
F->l_2237 = F->up->body_labels_191;
while (((F->l_2237 != NULL) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P189)rt_nil_check(F->l_2237)).name_)), (*(P140)rt_nil_check((*(P189)rt_nil_check(F->g_2238)).name_)))))) {
F->l_2237 = (*(P189)rt_nil_check(F->l_2237)).next_;
}
L_end_2243: ;
if ((F->l_2237 == NULL)) {
f_fail_257(F->up, G_NV((*(P189)rt_nil_check(F->g_2238)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("goto ", 5), (*(P140)rt_nil_check((*(P189)rt_nil_check(F->g_2238)).name_))), rt_g_lit(": no such label in this body (RM79 5.8)", 39)));
}
F->gp_2239 = (*(P189)rt_nil_check(F->g_2238)).path_;
F->lp_2240 = (*(P189)rt_nil_check(F->l_2237)).path_;
if ((({ rt_gstr at2244 = (*(P140)rt_nil_check(F->lp_2240)); at2244.hi >= at2244.lo ? at2244.hi - at2244.lo + 1 : (rt_int)0; }) > ({ rt_gstr at2245 = (*(P140)rt_nil_check(F->gp_2239)); at2245.hi >= at2245.lo ? at2245.hi - at2245.lo + 1 : (rt_int)0; }))) {
f_fail_257(F->up, G_NV((*(P189)rt_nil_check(F->g_2238)).line_), rt_g_lit("a goto cannot transfer control into a compound statement (RM79 5.8)", 67));
} else if ((!eq_rt_gstr(({ rt_gstr sl2247 = (*(P140)rt_nil_check(F->gp_2239)); rt_int l_ = ((rt_int)1LL), h_ = ({ rt_gstr at2246 = (*(P140)rt_nil_check(F->lp_2240)); at2246.hi >= at2246.lo ? at2246.hi - at2246.lo + 1 : (rt_int)0; }); if (l_ <= h_) { rt_index(l_, sl2247.lo, sl2247.hi); rt_index(h_, sl2247.lo, sl2247.hi); } sl2247.p += l_ - sl2247.lo; sl2247.lo = l_; sl2247.hi = h_; sl2247; }), (*(P140)rt_nil_check(F->lp_2240))))) {
f_fail_257(F->up, G_NV((*(P189)rt_nil_check(F->g_2238)).line_), rt_g_lit("a goto cannot transfer control into a compound statement (RM79 5.8)", 67));
}
{ rt_int lo2252 = rt_add(({ rt_gstr at2249 = (*(P140)rt_nil_check(F->lp_2240)); at2249.hi >= at2249.lo ? at2249.hi - at2249.lo + 1 : (rt_int)0; }), ((rt_int)1LL)), hi2253 = ({ rt_gstr at2250 = (*(P140)rt_nil_check(F->gp_2239)); at2250.hi >= at2250.lo ? at2250.hi - at2250.lo + 1 : (rt_int)0; });
for (rt_int it2254 = lo2252; it2254 <= hi2253; it2254++) {
F->i_2251 = it2254;
if (((G_NV(({ rt_gstr ix2255 = (*(P140)rt_nil_check(F->gp_2239)); ix2255.p[rt_index(F->i_2251, ix2255.lo, ix2255.hi) - ix2255.lo]; })) == 104) || (G_NV(({ rt_gstr ix2256 = (*(P140)rt_nil_check(F->gp_2239)); ix2256.p[rt_index(F->i_2251, ix2256.lo, ix2256.hi) - ix2256.lo]; })) == 97))) {
f_fail_257(F->up, G_NV((*(P189)rt_nil_check(F->g_2238)).line_), rt_g_lit("a goto cannot leave an exception handler or an accept statement (RM79 5.8)", 74));
}
}
}
L_end_2248: ;
F->g_2238 = (*(P189)rt_nil_check(F->g_2238)).next_;
}
L_end_2242: ;
ret_:

  return;
}

static void f_gen_label_701(struct f_greenc_1fr *up_, P174 s_699, int goto_it_700) {
  struct f_gen_label_701fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_699 = s_699;
F->goto_it_700 = goto_it_700;
F->l_2257 = NULL;
F->l_2257 = F->up->body_labels_191;
while (((F->l_2257 != NULL) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P189)rt_nil_check(F->l_2257)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_699)).name_)))))) {
F->l_2257 = (*(P189)rt_nil_check(F->l_2257)).next_;
}
L_end_2258: ;
if ((F->l_2257 == NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_699)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("label ", 6), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_699)).name_))), rt_g_lit(" is not in this body (RM79 5.8)", 31)));
}
if (F->goto_it_700) {
f_pop_frames_710(F->up, G_NV((*(P189)rt_nil_check(F->l_2257)).frames_));
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("goto ", 5), (*(P140)rt_nil_check((*(P189)rt_nil_check(F->l_2257)).cname_))), one_rt_gstr(59)));
} else {
f_emit_263(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P189)rt_nil_check(F->l_2257)).cname_)), rt_g_lit(": ;", 3)));
}
ret_:

  return;
}

static int f_is_foreign_703(struct f_greenc_1fr *up_, P174 d_702) {
  struct f_is_foreign_703fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_702 = d_702;
if (((*(P174)rt_nil_check(F->d_702)).tag_ == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->d_702)).tag_)), rt_g_lit("INTERFACE", 9));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_subprogram_body_706(struct f_greenc_1fr *up_, P174 d_704, P117 y_705) {
  struct f_subprogram_body_706fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_704 = d_704;
F->y_705 = y_705;
F->saved_code_2259 = NULL;
F->saved_code_2259 = F->up->code_136;
F->saved_fields_2260 = NULL;
F->saved_fields_2260 = F->up->fields_buf_137;
F->saved_in_2261 = INT_MIN;
F->saved_in_2261 = G_NV(F->up->in_func_138);
F->saved_sym_2262 = NULL;
F->saved_sym_2262 = F->up->func_sym_142;
F->saved_exits_2263 = NULL;
F->saved_exits_2263 = F->up->exits_145;
F->saved_frames_2264 = INT64_MIN;
F->saved_frames_2264 = G_NV(F->up->frames_150);
F->saved_handlers_2265 = NULL;
F->saved_handlers_2265 = F->up->handlers_153;
F->saved_cleanups_2266 = NULL;
F->saved_cleanups_2266 = F->up->cleanups_154;
F->saved_labels_2267 = NULL;
F->saved_labels_2267 = F->up->body_labels_191;
F->saved_hx_2268 = NULL;
F->saved_hx_2268 = F->up->handler_exits_194;
F->saved_hd_2269 = INT64_MIN;
F->saved_hd_2269 = G_NV(F->up->handler_depth_195);
F->saved_pure_2270 = NULL;
F->saved_pure_2270 = F->up->pure_sym_225;
F->aw_2271 = NULL;
F->saved_pdepth_2272 = INT64_MIN;
F->saved_pdepth_2272 = G_NV(F->up->pure_depth_226);
F->args_2273 = NULL;
F->head_2274 = NULL;
F->frame_2275 = NULL;
F->parent_2276 = NULL;
F->ct_2277 = NULL;
F->x_2278 = NULL;
F->pm_2279 = NULL;
F->pm_2279 = (*(P117)rt_nil_check(F->y_705)).params_;
F->p_2280 = NULL;
F->frame_2275 = f_mk_236(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_705)).cname_)), rt_g_lit("fr", 2)));
if (G_NV(F->up->in_func_138)) {
F->parent_2276 = f_mk_236(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->func_sym_142)).cname_)), rt_g_lit("fr", 2)));
}
F->up->code_136 = f_new_buffer_258(F->up);
F->up->fields_buf_137 = f_new_buffer_258(F->up);
F->up->in_func_138 = 1;
F->up->func_sym_142 = F->y_705;
F->up->exits_145 = NULL;
F->up->frames_150 = ((rt_int)0LL);
F->up->handlers_153 = NULL;
F->up->cleanups_154 = NULL;
F->up->handler_exits_194 = NULL;
F->up->handler_depth_195 = ((rt_int)0LL);
F->up->cur_level_139 = rt_add(G_NV(F->up->cur_level_139), ((rt_int)1LL));
F->args_2273 = f_mk_236(F->up, rt_g_lit("", 0));
f_open_scope_474(F->up);
f_push_unit_445(F->up, (*(P174)rt_nil_check(F->d_704)).name_);
if (((G_NV((*(P117)rt_nil_check(F->y_705)).kind_) == ((rt_int)3LL)) && (!G_NV((*(P117)rt_nil_check(F->y_705)).vrp_)))) {
F->up->pure_sym_225 = F->y_705;
F->up->pure_depth_226 = G_NV(F->up->depth_120);
}
if ((F->parent_2276 != NULL)) {
f_put_to_261(F->up, F->up->fields_buf_137, cat_rt_gstr(cat_rt_gstr(rt_g_lit(" struct ", 8), (*(P140)rt_nil_check(F->parent_2276))), rt_g_lit(" *up;", 5)));
F->args_2273 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P140)rt_nil_check(F->parent_2276))), rt_g_lit(" *up_", 5)));
f_emit_263(F->up, rt_g_lit("F->up = up_;", 12));
}
while ((F->pm_2279 != NULL)) {
f_ctype_500(F->up, (*(P1887)rt_nil_check(F->pm_2279)).t_, &F->ct_2277);
if ((({ rt_gstr at2282 = (*(P140)rt_nil_check(F->args_2273)); at2282.hi >= at2282.lo ? at2282.hi - at2282.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->args_2273 = f_mk_236(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->args_2273)), rt_g_lit(", ", 2)));
}
if ((G_NV((*(P1887)rt_nil_check(F->pm_2279)).mode_) == ((rt_int)1LL))) {
F->p_2280 = f_new_sym_478(F->up, ((rt_int)2LL), (*(P1887)rt_nil_check(F->pm_2279)).name_);
(*(P117)rt_nil_check(F->p_2280)).ro_ = 1;
f_put_to_261(F->up, F->up->fields_buf_137, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P140)rt_nil_check(F->ct_2277))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P1887)rt_nil_check(F->pm_2279)).cfield_))), one_rt_gstr(59)));
F->args_2273 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->args_2273)), (*(P140)rt_nil_check(F->ct_2277))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P1887)rt_nil_check(F->pm_2279)).cfield_))));
f_copy_code_632(F->up, (*(P1887)rt_nil_check(F->pm_2279)).t_, (*(P140)rt_nil_check((*(P1887)rt_nil_check(F->pm_2279)).cfield_)), &F->x_2278);
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->", 3), (*(P140)rt_nil_check((*(P1887)rt_nil_check(F->pm_2279)).cfield_))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2278))), one_rt_gstr(59)));
} else {
F->p_2280 = f_new_sym_478(F->up, ((rt_int)1LL), (*(P1887)rt_nil_check(F->pm_2279)).name_);
(*(P117)rt_nil_check(F->p_2280)).byref_ = 1;
f_put_to_261(F->up, F->up->fields_buf_137, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P140)rt_nil_check(F->ct_2277))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check((*(P1887)rt_nil_check(F->pm_2279)).cfield_))), one_rt_gstr(59)));
F->args_2273 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->args_2273)), (*(P140)rt_nil_check(F->ct_2277))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check((*(P1887)rt_nil_check(F->pm_2279)).cfield_))));
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->", 3), (*(P140)rt_nil_check((*(P1887)rt_nil_check(F->pm_2279)).cfield_))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check((*(P1887)rt_nil_check(F->pm_2279)).cfield_))), one_rt_gstr(59)));
}
(*(P117)rt_nil_check(F->p_2280)).access_path_ = (*(P1887)rt_nil_check(F->pm_2279)).cfield_;
(*(P117)rt_nil_check(F->p_2280)).t_ = (*(P1887)rt_nil_check(F->pm_2279)).t_;
(*(P117)rt_nil_check(F->p_2280)).c_ = (*(P1887)rt_nil_check(F->pm_2279)).c_;
(*(P117)rt_nil_check(F->p_2280)).level_ = G_NV(F->up->cur_level_139);
f_define_473(F->up, F->p_2280, G_NV((*(P174)rt_nil_check(F->d_704)).line_));
F->pm_2279 = (*(P1887)rt_nil_check(F->pm_2279)).next_;
}
L_end_2281: ;
if ((G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_705)).result_)).kind_) != ((rt_int)9LL))) {
f_ctype_500(F->up, (*(P117)rt_nil_check(F->y_705)).result_, &F->ct_2277);
f_put_to_261(F->up, F->up->fields_buf_137, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P140)rt_nil_check(F->ct_2277))), rt_g_lit(" result_;", 9)));
}
if ((f_is_foreign_703(F->up, F->d_704) && (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_705)).result_)).kind_) == ((rt_int)9LL)))) {
f_decl_elements_661(F->up, (*(P174)rt_nil_check(F->d_704)).c_);
F->x_2278 = f_mk_236(F->up, rt_g_lit("", 0));
F->pm_2279 = (*(P117)rt_nil_check(F->y_705)).params_;
while ((F->pm_2279 != NULL)) {
if ((({ rt_gstr at2284 = (*(P140)rt_nil_check(F->x_2278)); at2284.hi >= at2284.lo ? at2284.hi - at2284.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->x_2278 = f_mk_236(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->x_2278)), rt_g_lit(", ", 2)));
}
if ((f_is_string_579(F->up, (*(P1887)rt_nil_check(F->pm_2279)).t_) && (G_NV((*(P1887)rt_nil_check(F->pm_2279)).mode_) == ((rt_int)1LL)))) {
F->x_2278 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->x_2278)), rt_g_lit("rt_g_g2s(F->", 12)), (*(P140)rt_nil_check((*(P1887)rt_nil_check(F->pm_2279)).cfield_))), one_rt_gstr(41)));
} else {
F->x_2278 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->x_2278)), rt_g_lit("F->", 3)), (*(P140)rt_nil_check((*(P1887)rt_nil_check(F->pm_2279)).cfield_))));
}
F->pm_2279 = (*(P1887)rt_nil_check(F->pm_2279)).next_;
}
L_end_2283: ;
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_", 5), f_lower_s_247(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->d_704)).name_)))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->x_2278))), rt_g_lit(");", 2)));
} else {
f_label_body_698(F->up, (*(P174)rt_nil_check(F->d_704)).d_, (*(P174)rt_nil_check(F->d_704)).e_);
f_guarded_718(F->up, (*(P174)rt_nil_check(F->d_704)).c_, (*(P174)rt_nil_check(F->d_704)).d_, (*(P174)rt_nil_check(F->d_704)).e_, G_NV((*(P174)rt_nil_check(F->d_704)).line_));
}
f_task_awaits_1183(F->up, (*(P174)rt_nil_check(F->d_704)).c_, &F->aw_2271);
F->up->nunits_188 = rt_sub(G_NV(F->up->nunits_188), ((rt_int)1LL));
f_close_scope_475(F->up);
F->up->cur_level_139 = rt_sub(G_NV(F->up->cur_level_139), ((rt_int)1LL));
if ((({ rt_gstr at2285 = (*(P140)rt_nil_check(F->args_2273)); at2285.hi >= at2285.lo ? at2285.hi - at2285.lo + 1 : (rt_int)0; }) == ((rt_int)0LL))) {
F->args_2273 = f_mk_236(F->up, rt_g_lit("void", 4));
}
f_ctype_500(F->up, (*(P117)rt_nil_check(F->y_705)).result_, &F->ct_2277);
F->head_2274 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->ct_2277))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_705)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->args_2273))), one_rt_gstr(41)));
f_put_to_261(F->up, F->up->out_protos_131, cat_rt_gstr((*(P140)rt_nil_check(F->head_2274)), one_rt_gstr(59)));
f_put_to_261(F->up, F->up->out_frames_129, cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P140)rt_nil_check(F->frame_2275))), rt_g_lit(" { int dummy;", 13)));
f_splice_268(F->up, F->up->out_frames_129, F->up->fields_buf_137);
f_put_to_261(F->up, F->up->out_frames_129, rt_g_lit("};", 2));
f_put_to_261(F->up, F->up->out_funcs_133, cat_rt_gstr((*(P140)rt_nil_check(F->head_2274)), rt_g_lit(" {", 2)));
f_put_to_261(F->up, F->up->out_funcs_133, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  struct ", 9), (*(P140)rt_nil_check(F->frame_2275))), rt_g_lit(" *F = rt_alloc(sizeof *F);", 26)));
if (((G_NV((*(P117)rt_nil_check(F->y_705)).kind_) == ((rt_int)4LL)) && ((*(P117)rt_nil_check(F->y_705)).access_path_ != NULL))) {
f_put_to_261(F->up, F->up->out_funcs_133, cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_705)).access_path_))));
}
f_splice_268(F->up, F->up->out_funcs_133, F->up->code_136);
if ((G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_705)).result_)).kind_) != ((rt_int)9LL))) {
f_put_to_261(F->up, F->up->out_funcs_133, rt_g_lit("  rt_raise(RT_X_INIT);", 22));
f_put_to_261(F->up, F->up->out_funcs_133, rt_g_lit("ret_:", 5));
f_put_to_261(F->up, F->up->out_funcs_133, (*(P140)rt_nil_check(F->aw_2271)));
f_put_to_261(F->up, F->up->out_funcs_133, rt_g_lit("  return F->result_;", 20));
} else {
f_put_to_261(F->up, F->up->out_funcs_133, rt_g_lit("ret_:", 5));
f_put_to_261(F->up, F->up->out_funcs_133, (*(P140)rt_nil_check(F->aw_2271)));
f_put_to_261(F->up, F->up->out_funcs_133, rt_g_lit("  return;", 9));
}
f_put_to_261(F->up, F->up->out_funcs_133, rt_g_lit("}", 1));
f_put_to_261(F->up, F->up->out_funcs_133, rt_g_lit("", 0));
F->up->code_136 = F->saved_code_2259;
F->up->fields_buf_137 = F->saved_fields_2260;
F->up->in_func_138 = G_NV(F->saved_in_2261);
F->up->func_sym_142 = F->saved_sym_2262;
F->up->exits_145 = F->saved_exits_2263;
F->up->frames_150 = G_NV(F->saved_frames_2264);
F->up->handlers_153 = F->saved_handlers_2265;
F->up->cleanups_154 = F->saved_cleanups_2266;
F->up->pure_sym_225 = F->saved_pure_2270;
F->up->pure_depth_226 = G_NV(F->saved_pdepth_2272);
F->up->body_labels_191 = F->saved_labels_2267;
F->up->handler_exits_194 = F->saved_hx_2268;
F->up->handler_depth_195 = G_NV(F->saved_hd_2269);
ret_:

  return;
}

static void f_gen_statements_708(struct f_greenc_1fr *up_, P174 stmts_707) {
  struct f_gen_statements_708fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_707 = stmts_707;
F->s_2286 = NULL;
F->s_2286 = F->stmts_707;
while ((F->s_2286 != NULL)) {
f_gen_statement_724(F->up, F->s_2286);
F->s_2286 = (*(P174)rt_nil_check(F->s_2286)).next_;
}
L_end_2287: ;
ret_:

  return;
}

static void f_pop_frames_710(struct f_greenc_1fr *up_, rt_int upto_709) {
  struct f_pop_frames_710fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->upto_709 = upto_709;
F->i_2288 = INT64_MIN;
F->i_2288 = G_NV(F->up->frames_150);
F->c_2289 = NULL;
F->c_2289 = F->up->cleanups_154;
while ((G_NV(F->i_2288) > F->upto_709)) {
f_emit_263(F->up, (*(P140)rt_nil_check((*(P151)rt_nil_check(F->c_2289)).s_)));
F->c_2289 = (*(P151)rt_nil_check(F->c_2289)).next_;
F->i_2288 = rt_sub(G_NV(F->i_2288), ((rt_int)1LL));
}
L_end_2290: ;
ret_:

  return;
}

static void f_push_cleanup_712(struct f_greenc_1fr *up_, rt_gstr s_711) {
  struct f_push_cleanup_712fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_711 = cp_rt_gstr(s_711);
F->up->cleanups_154 = ({ R152 *cell2291 = rt_alloc(sizeof(R152)); *cell2291 = cp_R152(({ R152 ag2292; ag2292.s_ = NULL; ag2292.next_ = F->up->cleanups_154; ag2292; })); (P151)cell2291; });
(*(P151)rt_nil_check(F->up->cleanups_154)).s_ = f_mk_236(F->up, F->s_711);
F->up->frames_150 = rt_add(G_NV(F->up->frames_150), ((rt_int)1LL));
ret_:

  return;
}

static void f_pop_cleanup_713(struct f_greenc_1fr *up_) {
  struct f_pop_cleanup_713fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->cleanups_154 = (*(P151)rt_nil_check(F->up->cleanups_154)).next_;
F->up->frames_150 = rt_sub(G_NV(F->up->frames_150), ((rt_int)1LL));
ret_:

  return;
}

static void f_guarded_718(struct f_greenc_1fr *up_, P174 decls_714, P174 stmts_715, P174 hs_716, rt_int line_717) {
  struct f_guarded_718fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_714 = decls_714;
F->stmts_715 = stmts_715;
F->hs_716 = hs_716;
F->line_717 = line_717;
F->saved_hx_2293 = NULL;
F->f_2294 = NULL;
F->x_2295 = NULL;
F->h_2296 = NULL;
F->n_2297 = NULL;
F->first_2298 = INT_MIN;
F->first_2298 = 1;
F->has_others_2299 = INT_MIN;
F->has_others_2299 = 0;
F->conds_2300 = NULL;
if ((F->hs_716 == NULL)) {
f_decl_elements_661(F->up, F->decls_714);
f_gen_statements_708(F->up, F->stmts_715);
goto ret_;
}
f_new_name_239(F->up, rt_g_lit("xf", 2), &F->f_2294);
f_new_name_239(F->up, rt_g_lit("x", 1), &F->x_2295);
f_push_cleanup_712(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P140)rt_nil_check(F->f_2294))), rt_g_lit(");", 2)));
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_frame ", 11), (*(P140)rt_nil_check(F->f_2294))), one_rt_gstr(59)));
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (RT_TRY(", 11), (*(P140)rt_nil_check(F->f_2294))), rt_g_lit(")) {", 4)));
f_decl_elements_661(F->up, F->decls_714);
f_gen_statements_708(F->up, F->stmts_715);
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P140)rt_nil_check(F->f_2294))), rt_g_lit(");", 2)));
f_emit_263(F->up, rt_g_lit("} else {", 8));
f_pop_cleanup_713(F->up);
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P140)rt_nil_check(F->f_2294))), rt_g_lit(");", 2)));
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("int ", 4), (*(P140)rt_nil_check(F->x_2295))), rt_g_lit(" = rt_xcur;", 11)));
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (rt_g_aborted()) rt_raise(", 29), (*(P140)rt_nil_check(F->x_2295))), rt_g_lit(");", 2)));
F->up->handlers_153 = ({ R152 *cell2301 = rt_alloc(sizeof(R152)); *cell2301 = cp_R152(({ R152 ag2302; ag2302.s_ = F->x_2295; ag2302.next_ = F->up->handlers_153; ag2302; })); (P151)cell2301; });
F->h_2296 = F->hs_716;
while ((F->h_2296 != NULL)) {
F->n_2297 = (*(P174)rt_nil_check(F->h_2296)).a_;
F->conds_2300 = f_mk_236(F->up, rt_g_lit("0", 1));
while ((F->n_2297 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_2297)).name_)), rt_g_lit("OTHERS", 6))) {
F->has_others_2299 = 1;
F->conds_2300 = f_mk_236(F->up, rt_g_lit("1", 1));
} else {
F->up->prefix_hint_223 = (*(P174)rt_nil_check(F->n_2297)).tag_;
f_exc_id_722(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_2297)).name_)), G_NV((*(P174)rt_nil_check(F->h_2296)).line_), &F->f_2294);
F->conds_2300 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->conds_2300)), rt_g_lit(" || ", 4)), (*(P140)rt_nil_check(F->x_2295))), rt_g_lit(" == ", 4)), (*(P140)rt_nil_check(F->f_2294))));
}
F->n_2297 = (*(P174)rt_nil_check(F->n_2297)).next_;
}
L_end_2304: ;
if (G_NV(F->first_2298)) {
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P140)rt_nil_check(F->conds_2300))), rt_g_lit(") {", 3)));
} else {
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P140)rt_nil_check(F->conds_2300))), rt_g_lit(") {", 3)));
}
F->first_2298 = 0;
F->saved_hx_2293 = F->up->handler_exits_194;
F->up->handler_exits_194 = F->up->exits_145;
F->up->handler_depth_195 = rt_add(G_NV(F->up->handler_depth_195), ((rt_int)1LL));
f_gen_statements_708(F->up, (*(P174)rt_nil_check(F->h_2296)).b_);
F->up->handler_depth_195 = rt_sub(G_NV(F->up->handler_depth_195), ((rt_int)1LL));
F->up->handler_exits_194 = F->saved_hx_2293;
F->h_2296 = (*(P174)rt_nil_check(F->h_2296)).next_;
}
L_end_2303: ;
if ((!G_NV(F->has_others_2299))) {
f_emit_263(F->up, rt_g_lit("} else {", 8));
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_raise(", 9), (*(P140)rt_nil_check(F->x_2295))), rt_g_lit(");", 2)));
}
f_emit_263(F->up, rt_g_lit("}", 1));
F->up->handlers_153 = (*(P151)rt_nil_check(F->up->handlers_153)).next_;
f_emit_263(F->up, rt_g_lit("}", 1));
f_emit_263(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_exc_id_722(struct f_greenc_1fr *up_, rt_gstr name_719, rt_int line_720, P140 *r_721) {
  struct f_exc_id_722fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_719 = cp_rt_gstr(name_719);
F->line_720 = line_720;
F->r_721 = r_721;
F->y_2305 = NULL;
F->y_2305 = f_lookup_432(F->up, F->name_719);
if ((F->up->prefix_hint_223 != NULL)) {
F->y_2305 = f_member_of_1062(F->up, (*(P140)rt_nil_check(F->up->prefix_hint_223)), F->name_719, F->line_720);
F->up->prefix_hint_223 = NULL;
}
if (((F->y_2305 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_2305)).kind_) != ((rt_int)6LL)))) {
f_fail_257(F->up, F->line_720, cat_rt_gstr(F->name_719, rt_g_lit(" is not an exception", 20)));
}
(*F->r_721) = (*(P117)rt_nil_check(F->y_2305)).cname_;
ret_:

  return;
}

static void f_gen_statement_724(struct f_greenc_1fr *up_, P174 s_723) {
  struct f_gen_statement_724fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_723 = s_723;
F->t_2306 = NULL;
F->vt_2307 = NULL;
F->c_2308 = NULL;
F->lv_2309 = NULL;
F->v_2310 = NULL;
F->x_2311 = NULL;
F->ro_2312 = INT_MIN;
{ rt_int sel2313 = G_NV((*(P174)rt_nil_check(F->s_723)).kind_);
if (0 || sel2313 == ((rt_int)20LL)) {
if ((((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->s_723)).a_)).kind_) == ((rt_int)8LL)) && ((*(P174)rt_nil_check((*(P174)rt_nil_check(F->s_723)).a_)).b_ != NULL)) && ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->s_723)).a_)).b_)).kind_) == ((rt_int)14LL)) || (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->s_723)).a_)).b_)).kind_) == ((rt_int)80LL))))) {
f_slice_assign_726(F->up, F->s_723);
goto ret_;
}
F->up->in_lv_path_228 = 1;
F->up->last_deref_229 = 0;
f_lvalue_775(F->up, (*(P174)rt_nil_check(F->s_723)).a_, &F->lv_2309, &F->t_2306, &F->c_2308, &F->ro_2312);
 (void)rt_range(F->ro_2312, 0, 1);
F->up->in_lv_path_228 = 0;
if (G_NV(F->ro_2312)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_723)).line_), rt_g_lit("assignment to a constant or an in parameter", 43));
}
f_check_pure_target_1244(F->up, (*(P174)rt_nil_check(F->s_723)).a_, G_NV((*(P174)rt_nil_check(F->s_723)).line_));
if (f_restricted_here_571(F->up, F->t_2306)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_723)).line_), rt_g_lit("a restricted type has no assignment (RM79 7.4)", 46));
}
if (f_is_const_access_769(F->up, (*(P174)rt_nil_check(F->s_723)).b_)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_723)).line_), rt_g_lit("a constant of an access type cannot be assigned to a variable (RM79 3.8)", 72));
}
F->up->vrp_ok_227 = 1;
if (((G_NV((*(P122)rt_nil_check(F->t_2306)).kind_) == ((rt_int)6LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->s_723)).b_)).kind_) == ((rt_int)12LL)))) {
F->up->agg_bounds_181 = F->lv_2309;
}
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->s_723)).b_, F->t_2306, &F->vt_2307, &F->v_2310);
F->up->agg_bounds_181 = NULL;
F->up->vrp_ok_227 = 0;
f_check_type_495(F->up, F->vt_2307, F->t_2306, G_NV((*(P174)rt_nil_check(F->s_723)).line_));
f_assign_code_628(F->up, (*(P140)rt_nil_check(F->lv_2309)), F->t_2306, (*(P140)rt_nil_check(F->v_2310)), F->c_2308, &F->x_2311);
f_emit_263(F->up, (*(P140)rt_nil_check(F->x_2311)));
} else if (0 || sel2313 == ((rt_int)21LL)) {
F->up->vrp_ok_227 = 1;
f_gen_call_728(F->up, F->s_723);
F->up->vrp_ok_227 = 0;
} else if (0 || sel2313 == ((rt_int)22LL)) {
f_gen_if_730(F->up, F->s_723);
} else if (0 || sel2313 == ((rt_int)23LL)) {
f_gen_case_732(F->up, F->s_723);
} else if (0 || sel2313 == ((rt_int)24LL)) {
f_gen_loop_744(F->up, F->s_723);
} else if (0 || sel2313 == ((rt_int)25LL)) {
f_gen_block_746(F->up, F->s_723);
} else if (0 || sel2313 == ((rt_int)26LL)) {
f_gen_exit_751(F->up, F->s_723);
} else if (0 || sel2313 == ((rt_int)27LL)) {
f_gen_return_753(F->up, F->s_723);
} else if (0 || sel2313 == ((rt_int)28LL)) {
if (((((*(P174)rt_nil_check(F->s_723)).tag_ != NULL) && f_is_task_name_1135(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_723)).tag_)))) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_723)).name_)), rt_g_lit("FAILURE", 7)))) {
f_task_failure_1185(F->up, F->s_723);
} else {
F->up->prefix_hint_223 = (*(P174)rt_nil_check(F->s_723)).tag_;
f_exc_id_722(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_723)).name_)), G_NV((*(P174)rt_nil_check(F->s_723)).line_), &F->x_2311);
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_raise(", 9), (*(P140)rt_nil_check(F->x_2311))), rt_g_lit(");", 2)));
}
} else if (0 || sel2313 == ((rt_int)29LL)) {
if ((F->up->handlers_153 == NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_723)).line_), rt_g_lit("raise; outside an exception handler", 35));
}
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_raise(", 9), (*(P140)rt_nil_check((*(P151)rt_nil_check(F->up->handlers_153)).s_))), rt_g_lit(");", 2)));
} else if (0 || sel2313 == ((rt_int)30LL)) {
f_condition_859(F->up, (*(P174)rt_nil_check(F->s_723)).a_, F->up->ty_bool_157, &F->vt_2307, &F->v_2310);
f_check_type_495(F->up, F->vt_2307, F->up->ty_bool_157, G_NV((*(P174)rt_nil_check(F->s_723)).line_));
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (!(", 6), (*(P140)rt_nil_check(F->v_2310))), rt_g_lit(")) rt_raise(RT_X_ASSERT);", 25)));
} else if (0 || sel2313 == ((rt_int)31LL)) {
} else if (0 || sel2313 == ((rt_int)57LL)) {
f_gen_label_701(F->up, F->s_723, 0);
} else if (0 || sel2313 == ((rt_int)58LL)) {
f_gen_label_701(F->up, F->s_723, 1);
} else {
f_task_statement_gen_1239(F->up, F->s_723);
}
}
ret_:

  return;
}

static void f_slice_assign_726(struct f_greenc_1fr *up_, P174 s_725) {
  struct f_slice_assign_726fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_725 = s_725;
F->lv_2314 = NULL;
F->v_2315 = NULL;
F->sl_2316 = NULL;
F->x_2317 = NULL;
F->t_2318 = NULL;
F->st_2319 = NULL;
F->vt_2320 = NULL;
F->c_2321 = NULL;
F->ro_2322 = INT_MIN;
F->up->in_lv_path_228 = 1;
F->up->last_deref_229 = 0;
f_lvalue_775(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->s_725)).a_)).a_, &F->lv_2314, &F->t_2318, &F->c_2321, &F->ro_2322);
 (void)rt_range(F->ro_2322, 0, 1);
F->up->in_lv_path_228 = 0;
if (G_NV(F->ro_2322)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_725)).line_), rt_g_lit("assignment to a constant or an in parameter", 43));
}
f_check_pure_target_1244(F->up, (*(P174)rt_nil_check(F->s_725)).a_, G_NV((*(P174)rt_nil_check(F->s_725)).line_));
F->ro_2322 = 0;
f_index_on_793(F->up, (*(P140)rt_nil_check(F->lv_2314)), F->t_2318, (*(P174)rt_nil_check(F->s_725)).a_, &F->ro_2322, 0, &F->sl_2316, &F->st_2319, &F->c_2321);
 (void)rt_range(F->ro_2322, 0, 1);
F->up->vrp_ok_227 = 1;
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->s_725)).b_, F->st_2319, &F->vt_2320, &F->v_2315);
F->up->vrp_ok_227 = 0;
f_check_type_495(F->up, F->vt_2320, F->st_2319, G_NV((*(P174)rt_nil_check(F->s_725)).line_));
f_ctype_500(F->up, F->st_2319, &F->x_2317);
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P140)rt_nil_check(F->x_2317))), rt_g_lit(" sl_ = ", 7)), (*(P140)rt_nil_check(F->sl_2316))), rt_g_lit("; as_", 5)), (*(P140)rt_nil_check(F->x_2317))), rt_g_lit("(&sl_, ", 7)), (*(P140)rt_nil_check(F->v_2315))), rt_g_lit("); }", 4)));
ret_:

  return;
}

static void f_gen_call_728(struct f_greenc_1fr *up_, P174 s_727) {
  struct f_gen_call_728fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_727 = s_727;
F->c_2323 = NULL;
F->c_2323 = (*(P174)rt_nil_check(F->s_727)).a_;
F->t_2324 = NULL;
F->v_2325 = NULL;
if (((G_NV((*(P174)rt_nil_check(F->c_2323)).kind_) == ((rt_int)5LL)) || (G_NV((*(P174)rt_nil_check(F->c_2323)).kind_) == ((rt_int)9LL)))) {
F->c_2323 = f_nn_310(F->up, ((rt_int)8LL), G_NV((*(P174)rt_nil_check(F->s_727)).line_));
(*(P174)rt_nil_check(F->c_2323)).a_ = (*(P174)rt_nil_check(F->s_727)).a_;
}
if ((G_NV((*(P174)rt_nil_check(F->c_2323)).kind_) != ((rt_int)8LL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_727)).line_), rt_g_lit("not a procedure call", 20));
}
F->up->post_checks_196 = NULL;
f_gcall_1022(F->up, F->c_2323, 1, &F->t_2324, &F->v_2325);
f_emit_263(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->v_2325)), one_rt_gstr(59)));
if ((F->up->post_checks_196 != NULL)) {
f_emit_263(F->up, (*(P140)rt_nil_check(F->up->post_checks_196)));
F->up->post_checks_196 = NULL;
}
ret_:

  return;
}

static void f_gen_if_730(struct f_greenc_1fr *up_, P174 s_729) {
  struct f_gen_if_730fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_729 = s_729;
F->a_2326 = NULL;
F->a_2326 = (*(P174)rt_nil_check(F->s_729)).a_;
F->first_2327 = INT_MIN;
F->first_2327 = 1;
F->t_2328 = NULL;
F->v_2329 = NULL;
while ((F->a_2326 != NULL)) {
f_condition_859(F->up, (*(P174)rt_nil_check(F->a_2326)).a_, F->up->ty_bool_157, &F->t_2328, &F->v_2329);
f_check_type_495(F->up, F->t_2328, F->up->ty_bool_157, G_NV((*(P174)rt_nil_check(F->s_729)).line_));
if (G_NV(F->first_2327)) {
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P140)rt_nil_check(F->v_2329))), rt_g_lit(") {", 3)));
} else {
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P140)rt_nil_check(F->v_2329))), rt_g_lit(") {", 3)));
}
F->first_2327 = 0;
f_gen_statements_708(F->up, (*(P174)rt_nil_check(F->a_2326)).b_);
F->a_2326 = (*(P174)rt_nil_check(F->a_2326)).next_;
}
L_end_2330: ;
if ((G_NV((*(P174)rt_nil_check(F->s_729)).flag_) == ((rt_int)1LL))) {
f_emit_263(F->up, rt_g_lit("} else {", 8));
f_gen_statements_708(F->up, (*(P174)rt_nil_check(F->s_729)).b_);
}
f_emit_263(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_gen_case_732(struct f_greenc_1fr *up_, P174 s_731) {
  struct f_gen_case_732fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_731 = s_731;
F->st_2331 = NULL;
F->vt_2332 = NULL;
F->first_2333 = INT_MIN;
F->first_2333 = 1;
F->a_2334 = NULL;
F->a_2334 = (*(P174)rt_nil_check(F->s_731)).b_;
F->lab_2335 = NULL;
F->sel_2336 = NULL;
F->tmp_2337 = NULL;
F->ct_2338 = NULL;
F->conds_2339 = NULL;
F->v_2340 = NULL;
F->lo_2341 = NULL;
F->hi_2342 = NULL;
F->clo_2344.lo = ((rt_int)1LL); F->clo_2344.hi = ((rt_int)2000LL);
F->clo_2344.lo2 = 1; F->clo_2344.hi2 = 1;
F->clo_2344.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->clo_2344));
for (rt_int i2345 = 0; i2345 < G_CNT(F->clo_2344); i2345++) F->clo_2344.p[i2345] = INT64_MIN;
F->chi_2346.lo = ((rt_int)1LL); F->chi_2346.hi = ((rt_int)2000LL);
F->chi_2346.lo2 = 1; F->chi_2346.hi2 = 1;
F->chi_2346.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->chi_2346));
for (rt_int i2347 = 0; i2347 < G_CNT(F->chi_2346); i2347++) F->chi_2346.p[i2347] = INT64_MIN;
F->nc_2348 = INT64_MIN;
F->nc_2348 = ((rt_int)0LL);
F->vlo_2349 = INT64_MIN;
F->vhi_2350 = INT64_MIN;
F->total_2351 = INT64_MIN;
F->ok_2352 = INT_MIN;
F->ok2_2353 = INT_MIN;
F->y_2354 = NULL;
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->s_731)).a_, NULL, &F->st_2331, &F->sel_2336);
if ((!f_is_discrete_461(F->up, F->st_2331))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_731)).line_), rt_g_lit("the expression of a case statement is of a discrete type (RM79 5.5)", 67));
}
f_new_name_239(F->up, rt_g_lit("sel", 3), &F->tmp_2337);
f_ctype_500(F->up, F->st_2331, &F->ct_2338);
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P140)rt_nil_check(F->ct_2338))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2337))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->sel_2336))), one_rt_gstr(59)));
while ((F->a_2334 != NULL)) {
F->lab_2335 = (*(P174)rt_nil_check(F->a_2334)).a_;
F->conds_2339 = f_mk_236(F->up, rt_g_lit("0", 1));
while ((F->lab_2335 != NULL)) {
F->y_2354 = NULL;
if ((((*(P174)rt_nil_check(F->lab_2335)).b_ == NULL) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2335)).a_)).kind_) == ((rt_int)5LL)))) {
F->y_2354 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2335)).a_)).name_)));
if (((F->y_2354 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_2354)).kind_) != ((rt_int)5LL)))) {
F->y_2354 = NULL;
}
}
if ((F->y_2354 != NULL)) {
f_check_type_495(F->up, (*(P117)rt_nil_check(F->y_2354)).t_, F->st_2331, G_NV((*(P174)rt_nil_check(F->s_731)).line_));
if ((!f_static_bounds_487(F->up, (*(P117)rt_nil_check(F->y_2354)).c_))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_731)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("a choice is static: ", 20), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2335)).a_)).name_))), rt_g_lit(" has no static range (RM79 5.5)", 31)));
}
F->vlo_2349 = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_2354)).c_)).mlo_);
F->vhi_2350 = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_2354)).c_)).mhi_);
F->conds_2339 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->conds_2339)), rt_g_lit(" || (", 5)), (*(P140)rt_nil_check(F->tmp_2337))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_2354)).c_)).lo_))), rt_g_lit(" && ", 4)), (*(P140)rt_nil_check(F->tmp_2337))), rt_g_lit(" <= ", 4)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_2354)).c_)).hi_))), one_rt_gstr(41)));
} else if (((*(P174)rt_nil_check(F->lab_2335)).b_ == NULL)) {
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->lab_2335)).a_, F->st_2331, &F->vt_2332, &F->v_2340);
f_check_type_495(F->up, F->vt_2332, F->st_2331, G_NV((*(P174)rt_nil_check(F->s_731)).line_));
f_static_choice_1000(F->up, (*(P174)rt_nil_check(F->lab_2335)).a_, &F->vlo_2349, &F->ok_2352);
 (void)rt_range(F->ok_2352, 0, 1);
if ((!G_NV(F->ok_2352))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_731)).line_), rt_g_lit("a choice of a case statement is static (RM79 5.5)", 49));
}
F->vhi_2350 = G_NV(F->vlo_2349);
F->conds_2339 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->conds_2339)), rt_g_lit(" || ", 4)), (*(P140)rt_nil_check(F->tmp_2337))), rt_g_lit(" == ", 4)), (*(P140)rt_nil_check(F->v_2340))));
} else {
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->lab_2335)).a_, F->st_2331, &F->vt_2332, &F->lo_2341);
f_check_type_495(F->up, F->vt_2332, F->st_2331, G_NV((*(P174)rt_nil_check(F->s_731)).line_));
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->lab_2335)).b_, F->st_2331, &F->vt_2332, &F->hi_2342);
f_check_type_495(F->up, F->vt_2332, F->st_2331, G_NV((*(P174)rt_nil_check(F->s_731)).line_));
f_static_choice_1000(F->up, (*(P174)rt_nil_check(F->lab_2335)).a_, &F->vlo_2349, &F->ok_2352);
 (void)rt_range(F->ok_2352, 0, 1);
f_static_choice_1000(F->up, (*(P174)rt_nil_check(F->lab_2335)).b_, &F->vhi_2350, &F->ok2_2353);
 (void)rt_range(F->ok2_2353, 0, 1);
if ((!(G_NV(F->ok_2352) && G_NV(F->ok2_2353)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_731)).line_), rt_g_lit("a choice of a case statement is static (RM79 5.5)", 49));
}
F->conds_2339 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->conds_2339)), rt_g_lit(" || (", 5)), (*(P140)rt_nil_check(F->tmp_2337))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->lo_2341))), rt_g_lit(" && ", 4)), (*(P140)rt_nil_check(F->tmp_2337))), rt_g_lit(" <= ", 4)), (*(P140)rt_nil_check(F->hi_2342))), one_rt_gstr(41)));
}
if ((G_NV(F->vlo_2349) <= G_NV(F->vhi_2350))) {
{ rt_int lo2359 = ((rt_int)1LL), hi2360 = G_NV(F->nc_2348);
for (rt_int it2361 = lo2359; it2361 <= hi2360; it2361++) {
F->k_2358 = it2361;
if (((G_NV(F->vlo_2349) <= G_NV(({ A2343 ix2362 = F->chi_2346; ix2362.p[rt_index(F->k_2358, ix2362.lo, ix2362.hi) - ix2362.lo]; }))) && (G_NV(({ A2343 ix2363 = F->clo_2344; ix2363.p[rt_index(F->k_2358, ix2363.lo, ix2363.hi) - ix2363.lo]; })) <= G_NV(F->vhi_2350)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_731)).line_), rt_g_lit("a value is covered by two choices of a case statement (RM79 5.5)", 64));
}
}
}
L_end_2357: ;
if ((G_NV(F->nc_2348) < ((rt_int)2000LL))) {
F->nc_2348 = rt_add(G_NV(F->nc_2348), ((rt_int)1LL));
(*({ A2343 *ix2364 = &(F->clo_2344); &ix2364->p[rt_index(G_NV(F->nc_2348), ix2364->lo, ix2364->hi) - ix2364->lo]; })) = G_NV(F->vlo_2349);
(*({ A2343 *ix2365 = &(F->chi_2346); &ix2365->p[rt_index(G_NV(F->nc_2348), ix2365->lo, ix2365->hi) - ix2365->lo]; })) = G_NV(F->vhi_2350);
}
}
F->lab_2335 = (*(P174)rt_nil_check(F->lab_2335)).next_;
}
L_end_2356: ;
if (G_NV(F->first_2333)) {
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P140)rt_nil_check(F->conds_2339))), rt_g_lit(") {", 3)));
} else {
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P140)rt_nil_check(F->conds_2339))), rt_g_lit(") {", 3)));
}
F->first_2333 = 0;
f_gen_statements_708(F->up, (*(P174)rt_nil_check(F->a_2334)).b_);
F->a_2334 = (*(P174)rt_nil_check(F->a_2334)).next_;
}
L_end_2355: ;
if ((G_NV((*(P174)rt_nil_check(F->s_731)).flag_) != ((rt_int)1LL))) {
f_selector_range_738(F->up, (*(P174)rt_nil_check(F->s_731)).a_, F->st_2331, &F->vlo_2349, &F->vhi_2350, &F->ok_2352);
 (void)rt_range(F->ok_2352, 0, 1);
if ((!G_NV(F->ok_2352))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_731)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("a case statement on ", 20), f_kind_name_491(F->up, F->st_2331)), rt_g_lit(" needs others: its values are not static ", 41)), rt_g_lit("(RM79 5.5)", 10)));
}
F->total_2351 = ((rt_int)0LL);
{ rt_int lo2368 = ((rt_int)1LL), hi2369 = G_NV(F->nc_2348);
for (rt_int it2370 = lo2368; it2370 <= hi2369; it2370++) {
F->k_2367 = it2370;
if (((G_NV(({ A2343 ix2371 = F->clo_2344; ix2371.p[rt_index(F->k_2367, ix2371.lo, ix2371.hi) - ix2371.lo]; })) < G_NV(F->vlo_2349)) || (G_NV(({ A2343 ix2372 = F->chi_2346; ix2372.p[rt_index(F->k_2367, ix2372.lo, ix2372.hi) - ix2372.lo]; })) > G_NV(F->vhi_2350)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_731)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("a choice of the case statement is outside the values of ", 56), f_kind_name_491(F->up, F->st_2331)), rt_g_lit(" (RM79 5.5)", 11)));
}
F->total_2351 = rt_add(G_NV(F->total_2351), rt_add(rt_sub(G_NV(({ A2343 ix2373 = F->chi_2346; ix2373.p[rt_index(F->k_2367, ix2373.lo, ix2373.hi) - ix2373.lo]; })), G_NV(({ A2343 ix2374 = F->clo_2344; ix2374.p[rt_index(F->k_2367, ix2374.lo, ix2374.hi) - ix2374.lo]; }))), ((rt_int)1LL)));
}
}
L_end_2366: ;
if ((G_NV(F->total_2351) != rt_add(rt_sub(G_NV(F->vhi_2350), G_NV(F->vlo_2349)), ((rt_int)1LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_731)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the choices of the case statement do not cover every value of ", 62), f_kind_name_491(F->up, F->st_2331)), rt_g_lit(" (RM79 5.5)", 11)));
}
}
if (G_NV(F->first_2333)) {
f_emit_263(F->up, rt_g_lit("{", 1));
} else {
f_emit_263(F->up, rt_g_lit("} else {", 8));
}
if ((G_NV((*(P174)rt_nil_check(F->s_731)).flag_) == ((rt_int)1LL))) {
f_gen_statements_708(F->up, (*(P174)rt_nil_check(F->s_731)).c_);
} else {
f_emit_263(F->up, rt_g_lit("rt_raise(RT_X_CASE);", 20));
}
f_emit_263(F->up, rt_g_lit("}", 1));
f_emit_263(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_selector_range_738(struct f_greenc_1fr *up_, P174 e_733, P122 t_734, rt_int *lo_735, rt_int *hi_736, int *ok_737) {
  struct f_selector_range_738fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_733 = e_733;
F->t_734 = t_734;
F->lo_735 = lo_735;
F->hi_736 = hi_736;
F->ok_737 = ok_737;
F->y_2375 = NULL;
(*F->ok_737) = 0;
(*F->lo_735) = ((rt_int)0LL);
(*F->hi_736) = ((rt_int)0LL);
if ((G_NV((*(P174)rt_nil_check(F->e_733)).kind_) == ((rt_int)5LL))) {
F->y_2375 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_733)).name_)));
if ((((F->y_2375 != NULL) && ((G_NV((*(P117)rt_nil_check(F->y_2375)).kind_) == ((rt_int)1LL)) || (G_NV((*(P117)rt_nil_check(F->y_2375)).kind_) == ((rt_int)2LL)))) && f_static_bounds_487(F->up, (*(P117)rt_nil_check(F->y_2375)).c_))) {
(*F->lo_735) = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_2375)).c_)).mlo_);
(*F->hi_736) = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_2375)).c_)).mhi_);
(*F->ok_737) = 1;
goto ret_;
}
}
if ((G_NV((*(P122)rt_nil_check(F->t_734)).kind_) == ((rt_int)2LL))) {
(*F->hi_736) = ((rt_int)1LL);
(*F->ok_737) = 1;
} else if (((G_NV((*(P122)rt_nil_check(F->t_734)).kind_) == ((rt_int)11LL)) && ((*(P122)rt_nil_check(F->t_734)).tcons_ == NULL))) {
(*F->hi_736) = ((rt_int)127LL);
(*F->ok_737) = 1;
} else if ((G_NV((*(P122)rt_nil_check(F->t_734)).kind_) == ((rt_int)4LL))) {
(*F->hi_736) = rt_sub(f_list_len_316(F->up, (*(P122)rt_nil_check(F->t_734)).lits_), ((rt_int)1LL));
(*F->ok_737) = 1;
} else if (f_static_bounds_487(F->up, (*(P122)rt_nil_check(F->t_734)).tcons_)) {
(*F->lo_735) = G_NV((*(P178)rt_nil_check((*(P122)rt_nil_check(F->t_734)).tcons_)).mlo_);
(*F->hi_736) = G_NV((*(P178)rt_nil_check((*(P122)rt_nil_check(F->t_734)).tcons_)).mhi_);
(*F->ok_737) = 1;
}
ret_:

  return;
}

static void f_push_exit_742(struct f_greenc_1fr *up_, P140 match_739, int is_loop_740, P140 *label_741) {
  struct f_push_exit_742fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->match_739 = match_739;
F->is_loop_740 = is_loop_740;
F->label_741 = label_741;
f_new_name_239(F->up, rt_g_lit("L_end_", 6), &(*F->label_741));
F->up->exits_145 = ({ R144 *cell2376 = rt_alloc(sizeof(R144)); *cell2376 = cp_R144(({ R144 ag2377; ag2377.match_ = F->match_739; ag2377.label_ = (*F->label_741); ag2377.depth_ = G_NV(F->up->frames_150); ag2377.is_loop_ = F->is_loop_740; ag2377.next_ = F->up->exits_145; ag2377; })); (P143)cell2376; });
ret_:

  return;
}

static void f_gen_loop_744(struct f_greenc_1fr *up_, P174 s_743) {
  struct f_gen_loop_744fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_743 = s_743;
F->t_2378 = NULL;
F->vt_2379 = NULL;
F->c_2380 = NULL;
F->label_2381 = NULL;
F->cond_2382 = NULL;
F->acc_2383 = NULL;
F->lov_2384 = NULL;
F->hiv_2385 = NULL;
F->it_2386 = NULL;
F->y_2387 = NULL;
F->r_2388 = NULL;
f_push_exit_742(F->up, (*(P174)rt_nil_check(F->s_743)).tag_, 1, &F->label_2381);
if ((G_NV((*(P174)rt_nil_check(F->s_743)).flag_) == ((rt_int)0LL))) {
f_emit_263(F->up, rt_g_lit("for (;;) {", 10));
f_gen_statements_708(F->up, (*(P174)rt_nil_check(F->s_743)).b_);
f_emit_263(F->up, rt_g_lit("}", 1));
} else if ((G_NV((*(P174)rt_nil_check(F->s_743)).flag_) == ((rt_int)1LL))) {
f_condition_859(F->up, (*(P174)rt_nil_check(F->s_743)).a_, F->up->ty_bool_157, &F->vt_2379, &F->cond_2382);
f_check_type_495(F->up, F->vt_2379, F->up->ty_bool_157, G_NV((*(P174)rt_nil_check(F->s_743)).line_));
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("while (", 7), (*(P140)rt_nil_check(F->cond_2382))), rt_g_lit(") {", 3)));
f_gen_statements_708(F->up, (*(P174)rt_nil_check(F->s_743)).b_);
f_emit_263(F->up, rt_g_lit("}", 1));
} else {
F->r_2388 = (*(P174)rt_nil_check(F->s_743)).a_;
F->c_2380 = f_new_cons_481(F->up);
if ((G_NV((*(P174)rt_nil_check(F->r_2388)).kind_) == ((rt_int)14LL))) {
f_range_bounds_814(F->up, (*(P174)rt_nil_check(F->r_2388)).a_, (*(P174)rt_nil_check(F->r_2388)).b_, NULL, G_NV((*(P174)rt_nil_check(F->s_743)).line_), &F->t_2378, &(*(P178)rt_nil_check(F->c_2380)).lo_, &(*(P178)rt_nil_check(F->c_2380)).hi_);
} else {
f_resolve_516(F->up, F->r_2388, &F->t_2378, &F->c_2380);
if (((*(P178)rt_nil_check(F->c_2380)).lo_ == NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_743)).line_), rt_g_lit("a FOR loop needs a discrete range", 33));
}
}
if (((((G_NV((*(P122)rt_nil_check(F->t_2378)).kind_) != ((rt_int)1LL)) && (G_NV((*(P122)rt_nil_check(F->t_2378)).kind_) != ((rt_int)4LL))) && (G_NV((*(P122)rt_nil_check(F->t_2378)).kind_) != ((rt_int)11LL))) && (G_NV((*(P122)rt_nil_check(F->t_2378)).kind_) != ((rt_int)2LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_743)).line_), rt_g_lit("a FOR loop needs a discrete range (RM79 5.6)", 44));
}
f_storage_647(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_743)).name_)), F->t_2378, &F->acc_2383);
f_new_name_239(F->up, rt_g_lit("lo", 2), &F->lov_2384);
f_new_name_239(F->up, rt_g_lit("hi", 2), &F->hiv_2385);
f_new_name_239(F->up, rt_g_lit("it", 2), &F->it_2386);
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_int ", 9), (*(P140)rt_nil_check(F->lov_2384))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2380)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->hiv_2385))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2380)).hi_))), one_rt_gstr(59)));
if ((G_NV((*(P174)rt_nil_check(F->s_743)).ival_) == ((rt_int)1LL))) {
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P140)rt_nil_check(F->it_2386))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->hiv_2385))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->it_2386))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->lov_2384))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->it_2386))), rt_g_lit("--) {", 5)));
} else {
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P140)rt_nil_check(F->it_2386))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->lov_2384))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->it_2386))), rt_g_lit(" <= ", 4)), (*(P140)rt_nil_check(F->hiv_2385))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->it_2386))), rt_g_lit("++) {", 5)));
}
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->acc_2383)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->it_2386))), one_rt_gstr(59)));
f_open_scope_474(F->up);
F->y_2387 = f_new_sym_478(F->up, ((rt_int)2LL), (*(P174)rt_nil_check(F->s_743)).name_);
(*(P117)rt_nil_check(F->y_2387)).t_ = F->t_2378;
(*(P117)rt_nil_check(F->y_2387)).ro_ = 1;
f_bind_650(F->up, F->y_2387, F->acc_2383);
f_define_473(F->up, F->y_2387, G_NV((*(P174)rt_nil_check(F->s_743)).line_));
f_gen_statements_708(F->up, (*(P174)rt_nil_check(F->s_743)).b_);
f_close_scope_475(F->up);
f_emit_263(F->up, rt_g_lit("}", 1));
f_emit_263(F->up, rt_g_lit("}", 1));
}
F->up->exits_145 = (*(P143)rt_nil_check(F->up->exits_145)).next_;
f_emit_263(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->label_2381)), rt_g_lit(": ;", 3)));
ret_:

  return;
}

static void f_gen_block_746(struct f_greenc_1fr *up_, P174 s_745) {
  struct f_gen_block_746fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_745 = s_745;
F->label_2389 = NULL;
F->aw_2390 = NULL;
f_push_exit_742(F->up, (*(P174)rt_nil_check(F->s_745)).tag_, 0, &F->label_2389);
f_emit_263(F->up, rt_g_lit("{", 1));
f_open_scope_474(F->up);
if (((*(P174)rt_nil_check(F->s_745)).tag_ != NULL)) {
f_push_unit_445(F->up, (*(P174)rt_nil_check(F->s_745)).tag_);
}
f_guarded_718(F->up, (*(P174)rt_nil_check(F->s_745)).a_, (*(P174)rt_nil_check(F->s_745)).b_, (*(P174)rt_nil_check(F->s_745)).c_, G_NV((*(P174)rt_nil_check(F->s_745)).line_));
f_task_awaits_1183(F->up, (*(P174)rt_nil_check(F->s_745)).a_, &F->aw_2390);
f_emit_263(F->up, (*(P140)rt_nil_check(F->aw_2390)));
if (((*(P174)rt_nil_check(F->s_745)).tag_ != NULL)) {
F->up->nunits_188 = rt_sub(G_NV(F->up->nunits_188), ((rt_int)1LL));
}
f_close_scope_475(F->up);
f_emit_263(F->up, rt_g_lit("}", 1));
F->up->exits_145 = (*(P143)rt_nil_check(F->up->exits_145)).next_;
f_emit_263(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->label_2389)), rt_g_lit(": ;", 3)));
ret_:

  return;
}

static int f_exit_matches_749(struct f_greenc_1fr *up_, P174 s_747, P143 x_748) {
  struct f_exit_matches_749fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_747 = s_747;
F->x_748 = x_748;
if (((*(P174)rt_nil_check(F->s_747)).name_ == NULL)) {
F->result_ = G_NV((*(P143)rt_nil_check(F->x_748)).is_loop_);
goto ret_;
} else if (((*(P143)rt_nil_check(F->x_748)).match_ == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P143)rt_nil_check(F->x_748)).match_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_747)).name_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_gen_exit_751(struct f_greenc_1fr *up_, P174 s_750) {
  struct f_gen_exit_751fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_750 = s_750;
F->x_2391 = NULL;
F->x_2391 = F->up->exits_145;
F->t_2392 = NULL;
F->v_2393 = NULL;
while ((F->x_2391 != NULL)) {
if (((G_NV(F->up->accept_depth_211) > ((rt_int)0LL)) && (F->x_2391 == F->up->accept_exits_149))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_750)).line_), rt_g_lit("an exit statement cannot leave an accept statement (RM79 5.7)", 61));
}
if (((G_NV(F->up->handler_depth_195) > ((rt_int)0LL)) && (F->x_2391 == F->up->handler_exits_194))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_750)).line_), rt_g_lit("an exit statement cannot leave an exception handler (RM79 5.7)", 62));
}
if (f_exit_matches_749(F->up, F->s_750, F->x_2391)) {
if ((!G_NV((*(P143)rt_nil_check(F->x_2391)).is_loop_))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_750)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("exit ", 5), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_750)).name_))), rt_g_lit(": an exit names a loop, not a block (RM79 5.7)", 46)));
}
if (((*(P174)rt_nil_check(F->s_750)).a_ != NULL)) {
f_condition_859(F->up, (*(P174)rt_nil_check(F->s_750)).a_, F->up->ty_bool_157, &F->t_2392, &F->v_2393);
f_check_type_495(F->up, F->t_2392, F->up->ty_bool_157, G_NV((*(P174)rt_nil_check(F->s_750)).line_));
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P140)rt_nil_check(F->v_2393))), rt_g_lit(") {", 3)));
}
f_pop_frames_710(F->up, G_NV((*(P143)rt_nil_check(F->x_2391)).depth_));
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("goto ", 5), (*(P140)rt_nil_check((*(P143)rt_nil_check(F->x_2391)).label_))), one_rt_gstr(59)));
if (((*(P174)rt_nil_check(F->s_750)).a_ != NULL)) {
f_emit_263(F->up, rt_g_lit("}", 1));
}
goto ret_;
}
F->x_2391 = (*(P143)rt_nil_check(F->x_2391)).next_;
}
L_end_2394: ;
if (((*(P174)rt_nil_check(F->s_750)).name_ == NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_750)).line_), rt_g_lit("exit outside a loop", 19));
}
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_750)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("exit ", 5), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_750)).name_))), rt_g_lit(" names no enclosing loop", 24)));
ret_:

  return;
}

static void f_gen_return_753(struct f_greenc_1fr *up_, P174 s_752) {
  struct f_gen_return_753fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_752 = s_752;
F->vt_2395 = NULL;
F->v_2396 = NULL;
F->x_2397 = NULL;
if ((!G_NV(F->up->in_func_138))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_752)).line_), rt_g_lit("return outside a subprogram", 27));
}
if ((G_NV(F->up->accept_depth_211) > ((rt_int)0LL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_752)).line_), rt_g_lit("a return statement cannot appear in an accept statement (RM79 5.3)", 66));
}
if ((G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->up->func_sym_142)).result_)).kind_) == ((rt_int)9LL))) {
if (((*(P174)rt_nil_check(F->s_752)).a_ != NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_752)).line_), rt_g_lit("a procedure returns no value", 28));
}
f_pop_frames_710(F->up, ((rt_int)0LL));
f_emit_263(F->up, rt_g_lit("goto ret_;", 10));
goto ret_;
}
if (((*(P174)rt_nil_check(F->s_752)).a_ == NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_752)).line_), rt_g_lit("return needs a value here", 25));
}
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->s_752)).a_, (*(P117)rt_nil_check(F->up->func_sym_142)).result_, &F->vt_2395, &F->v_2396);
f_check_type_495(F->up, F->vt_2395, (*(P117)rt_nil_check(F->up->func_sym_142)).result_, G_NV((*(P174)rt_nil_check(F->s_752)).line_));
if (((f_is_numeric_459(F->up, F->vt_2395) || f_is_discrete_461(F->up, F->vt_2395)) && f_bounded_483(F->up, (*(P117)rt_nil_check(F->up->func_sym_142)).c_))) {
f_assign_code_628(F->up, rt_g_lit("F->result_", 10), F->vt_2395, (*(P140)rt_nil_check(F->v_2396)), (*(P117)rt_nil_check(F->up->func_sym_142)).c_, &F->x_2397);
f_emit_263(F->up, (*(P140)rt_nil_check(F->x_2397)));
} else {
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->result_ = ", 13), (*(P140)rt_nil_check(F->v_2396))), one_rt_gstr(59)));
}
f_pop_frames_710(F->up, ((rt_int)0LL));
f_emit_263(F->up, rt_g_lit("goto ret_;", 10));
ret_:

  return;
}

static void f_access_of_756(struct f_greenc_1fr *up_, P117 y_754, P140 *r_755) {
  struct f_access_of_756fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_754 = y_754;
F->r_755 = r_755;
F->p_2398 = NULL;
if ((G_NV((*(P117)rt_nil_check(F->y_754)).level_) <= ((rt_int)0LL))) {
(*F->r_755) = (*(P117)rt_nil_check(F->y_754)).access_path_;
goto ret_;
}
F->p_2398 = f_mk_236(F->up, rt_g_lit("F", 1));
{ rt_int lo2401 = ((rt_int)1LL), hi2402 = rt_sub(G_NV(F->up->cur_level_139), G_NV((*(P117)rt_nil_check(F->y_754)).level_));
for (rt_int it2403 = lo2401; it2403 <= hi2402; it2403++) {
F->i_2400 = it2403;
F->p_2398 = f_mk_236(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->p_2398)), rt_g_lit("->up", 4)));
}
}
L_end_2399: ;
if (G_NV((*(P117)rt_nil_check(F->y_754)).byref_)) {
(*F->r_755) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*", 2), (*(P140)rt_nil_check(F->p_2398))), rt_g_lit("->", 2)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_754)).access_path_))), one_rt_gstr(41)));
} else {
(*F->r_755) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->p_2398)), rt_g_lit("->", 2)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_754)).access_path_))));
}
ret_:

  return;
}

static void f_link_to_759(struct f_greenc_1fr *up_, rt_int l_757, P140 *r_758) {
  struct f_link_to_759fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_757 = l_757;
F->r_758 = r_758;
(*F->r_758) = f_mk_236(F->up, rt_g_lit("F", 1));
{ rt_int lo2406 = ((rt_int)1LL), hi2407 = rt_sub(G_NV(F->up->cur_level_139), F->l_757);
for (rt_int it2408 = lo2406; it2408 <= hi2407; it2408++) {
F->i_2405 = it2408;
(*F->r_758) = f_mk_236(F->up, cat_rt_gstr((*(P140)rt_nil_check((*F->r_758))), rt_g_lit("->up", 4)));
}
}
L_end_2404: ;
ret_:

  return;
}

static rt_gstr f_c_ident_761(struct f_greenc_1fr *up_, rt_gstr s_760) {
  struct f_c_ident_761fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_760 = cp_rt_gstr(s_760);
if (eq_rt_gstr(F->s_760, rt_g_lit("+", 1))) {
F->result_ = rt_g_lit("op_plus", 7);
goto ret_;
} else if (eq_rt_gstr(F->s_760, rt_g_lit("-", 1))) {
F->result_ = rt_g_lit("op_minus", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_760, rt_g_lit("*", 1))) {
F->result_ = rt_g_lit("op_times", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_760, rt_g_lit("/", 1))) {
F->result_ = rt_g_lit("op_slash", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_760, rt_g_lit("**", 2))) {
F->result_ = rt_g_lit("op_power", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_760, rt_g_lit("&", 1))) {
F->result_ = rt_g_lit("op_cat", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_760, rt_g_lit("=", 1))) {
F->result_ = rt_g_lit("op_eq", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_760, rt_g_lit("<", 1))) {
F->result_ = rt_g_lit("op_lt", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_760, rt_g_lit("<=", 2))) {
F->result_ = rt_g_lit("op_le", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_760, rt_g_lit(">", 1))) {
F->result_ = rt_g_lit("op_gt", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_760, rt_g_lit(">=", 2))) {
F->result_ = rt_g_lit("op_ge", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_760, rt_g_lit("MOD", 3))) {
F->result_ = rt_g_lit("op_mod", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_760, rt_g_lit("AND", 3))) {
F->result_ = rt_g_lit("op_and", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_760, rt_g_lit("OR", 2))) {
F->result_ = rt_g_lit("op_or", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_760, rt_g_lit("XOR", 3))) {
F->result_ = rt_g_lit("op_xor", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_760, rt_g_lit("NOT", 3))) {
F->result_ = rt_g_lit("op_not", 6);
goto ret_;
}
F->result_ = f_lower_s_247(F->up, F->s_760);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_deref_765(struct f_greenc_1fr *up_, rt_gstr base_762, P122 t_763, P140 *r_764) {
  struct f_deref_765fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_762 = cp_rt_gstr(base_762);
F->t_763 = t_763;
F->r_764 = r_764;
F->ct_2409 = NULL;
if (G_NV(F->up->in_lv_path_228)) {
F->up->last_deref_229 = 1;
}
f_ctype_500(F->up, F->t_763, &F->ct_2409);
(*F->r_764) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*(", 3), (*(P140)rt_nil_check(F->ct_2409))), rt_g_lit(")rt_nil_check(", 14)), F->base_762), rt_g_lit("))", 2)));
ret_:

  return;
}

static int f_is_object_767(struct f_greenc_1fr *up_, P174 e_766) {
  struct f_is_object_767fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_766 = e_766;
F->y_2410 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->e_766)).kind_) == ((rt_int)5LL))) {
F->y_2410 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_766)).name_)));
if ((!(F->y_2410 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((G_NV((*(P117)rt_nil_check(F->y_2410)).kind_) == ((rt_int)1LL)) || (G_NV((*(P117)rt_nil_check(F->y_2410)).kind_) == ((rt_int)2LL)));
goto ret_;
} else if ((G_NV((*(P174)rt_nil_check(F->e_766)).kind_) == ((rt_int)9LL))) {
F->result_ = f_is_object_767(F->up, (*(P174)rt_nil_check(F->e_766)).a_);
goto ret_;
} else if ((G_NV((*(P174)rt_nil_check(F->e_766)).kind_) == ((rt_int)8LL))) {
if ((((*(P174)rt_nil_check(F->e_766)).b_ != NULL) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_766)).b_)).kind_) == ((rt_int)14LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_object_767(F->up, (*(P174)rt_nil_check(F->e_766)).a_);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_const_access_769(struct f_greenc_1fr *up_, P174 e_768) {
  struct f_is_const_access_769fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_768 = e_768;
F->y_2411 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->e_768)).kind_) != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->y_2411 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_768)).name_)));
if ((F->y_2411 == NULL)) {
F->result_ = 0;
goto ret_;
} else if ((((G_NV((*(P117)rt_nil_check(F->y_2411)).kind_) != ((rt_int)2LL)) || (rt_rem(G_NV((*(P117)rt_nil_check(F->y_2411)).flags_), ((rt_int)2LL)) != ((rt_int)1LL))) || ((*(P117)rt_nil_check(F->y_2411)).t_ == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2411)).t_)).kind_) == ((rt_int)8LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_lvalue_775(struct f_greenc_1fr *up_, P174 e_770, P140 *code_out_771, P122 *t_772, P178 *c_773, int *ro_774) {
  struct f_lvalue_775fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_770 = e_770;
F->code_out_771 = code_out_771;
F->t_772 = t_772;
F->c_773 = c_773;
F->ro_774 = ro_774;
F->cp_2412 = INT_MIN;
F->ex_2413 = NULL;
F->y_2414 = NULL;
F->base_2415 = NULL;
F->bt_2416 = NULL;
F->bc_2417 = NULL;
f_expanded_837(F->up, F->e_770, &F->ex_2413);
if ((F->ex_2413 != NULL)) {
f_lvalue_775(F->up, F->ex_2413, &(*F->code_out_771), &(*F->t_772), &(*F->c_773), &(*F->ro_774));
 (void)rt_range((*F->ro_774), 0, 1);
goto ret_;
}
if (((G_NV((*(P174)rt_nil_check(F->e_770)).kind_) == ((rt_int)5LL)) || ((G_NV((*(P174)rt_nil_check(F->e_770)).kind_) == ((rt_int)9LL)) && f_is_package_1058(F->up, (*(P174)rt_nil_check(F->e_770)).a_)))) {
if ((G_NV((*(P174)rt_nil_check(F->e_770)).ival_) > ((rt_int)0LL))) {
F->y_2414 = f_lookup_at_441(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_770)).name_)), rt_sub(G_NV((*(P174)rt_nil_check(F->e_770)).ival_), ((rt_int)1LL)));
} else if ((G_NV((*(P174)rt_nil_check(F->e_770)).kind_) == ((rt_int)9LL))) {
F->y_2414 = f_member_of_1062(F->up, f_path_of_353(F->up, (*(P174)rt_nil_check(F->e_770)).a_), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_770)).name_)), G_NV((*(P174)rt_nil_check(F->e_770)).line_));
} else {
F->y_2414 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_770)).name_)));
}
if ((F->y_2414 == NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_770)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_770)).name_)), rt_g_lit(" is not declared", 16)));
}
if ((G_NV((*(P117)rt_nil_check(F->y_2414)).kind_) == ((rt_int)12LL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_770)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_770)).name_)), rt_g_lit(" is declared in two used modules: name it P.", 44)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_770)).name_))), rt_g_lit(" (RM79 8.4)", 11)));
}
if (((G_NV((*(P117)rt_nil_check(F->y_2414)).kind_) != ((rt_int)1LL)) && (G_NV((*(P117)rt_nil_check(F->y_2414)).kind_) != ((rt_int)2LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_770)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_770)).name_)), rt_g_lit(" is not an object", 17)));
}
f_access_of_756(F->up, F->y_2414, &(*F->code_out_771));
(*F->t_772) = (*(P117)rt_nil_check(F->y_2414)).t_;
(*F->c_773) = (*(P117)rt_nil_check(F->y_2414)).c_;
(*F->ro_774) = G_NV((*(P117)rt_nil_check(F->y_2414)).ro_);
} else if ((G_NV((*(P174)rt_nil_check(F->e_770)).kind_) == ((rt_int)15LL))) {
f_lvalue_775(F->up, (*(P174)rt_nil_check(F->e_770)).a_, &(*F->code_out_771), &(*F->t_772), &(*F->c_773), &(*F->ro_774));
 (void)rt_range((*F->ro_774), 0, 1);
} else if ((G_NV((*(P174)rt_nil_check(F->e_770)).kind_) == ((rt_int)9LL))) {
f_lvalue_775(F->up, (*(P174)rt_nil_check(F->e_770)).a_, &F->base_2415, &F->bt_2416, &F->bc_2417, &(*F->ro_774));
 (void)rt_range((*F->ro_774), 0, 1);
F->cp_2412 = ((G_NV((*(P122)rt_nil_check(F->bt_2416)).kind_) == ((rt_int)8LL)) && f_is_const_access_769(F->up, (*(P174)rt_nil_check(F->e_770)).a_));
f_select_on_784(F->up, (*(P140)rt_nil_check(F->base_2415)), F->bt_2416, F->e_770, &(*F->ro_774), 1, &(*F->code_out_771), &(*F->t_772), &(*F->c_773));
 (void)rt_range((*F->ro_774), 0, 1);
(*F->ro_774) = (G_NV((*F->ro_774)) || G_NV(F->cp_2412));
} else if ((G_NV((*(P174)rt_nil_check(F->e_770)).kind_) == ((rt_int)8LL))) {
f_lvalue_775(F->up, (*(P174)rt_nil_check(F->e_770)).a_, &F->base_2415, &F->bt_2416, &F->bc_2417, &(*F->ro_774));
 (void)rt_range((*F->ro_774), 0, 1);
F->cp_2412 = ((G_NV((*(P122)rt_nil_check(F->bt_2416)).kind_) == ((rt_int)8LL)) && f_is_const_access_769(F->up, (*(P174)rt_nil_check(F->e_770)).a_));
f_index_on_793(F->up, (*(P140)rt_nil_check(F->base_2415)), F->bt_2416, F->e_770, &(*F->ro_774), 1, &(*F->code_out_771), &(*F->t_772), &(*F->c_773));
 (void)rt_range((*F->ro_774), 0, 1);
(*F->ro_774) = (G_NV((*F->ro_774)) || G_NV(F->cp_2412));
} else {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_770)).line_), rt_g_lit("not an object", 13));
}
ret_:

  return;
}

static void f_select_on_784(struct f_greenc_1fr *up_, rt_gstr base_776, P122 bt_777, P174 e_778, int *ro_779, int lv_780, P140 *code_out_781, P122 *t_782, P178 *c_783) {
  struct f_select_on_784fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_776 = cp_rt_gstr(base_776);
F->bt_777 = bt_777;
F->e_778 = e_778;
F->ro_779 = ro_779;
F->lv_780 = lv_780;
F->code_out_781 = code_out_781;
F->t_782 = t_782;
F->c_783 = c_783;
F->f_2418 = NULL;
F->d_2419 = NULL;
F->ct_2420 = NULL;
F->tmp_2421 = NULL;
(*F->c_783) = F->up->no_cons_218;
if ((G_NV((*(P122)rt_nil_check(F->bt_777)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_616(F->up, F->bt_777);
f_deref_765(F->up, F->base_776, F->bt_777, &F->d_2419);
(*F->ro_779) = 0;
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_778)).name_)), rt_g_lit("ALL", 3))) {
(*F->code_out_781) = F->d_2419;
(*F->t_782) = (*(P122)rt_nil_check(F->bt_777)).target_;
goto ret_;
}
f_select_on_784(F->up, (*(P140)rt_nil_check(F->d_2419)), (*(P122)rt_nil_check(F->bt_777)).target_, F->e_778, &(*F->ro_779), 1, &(*F->code_out_781), &(*F->t_782), &(*F->c_783));
 (void)rt_range((*F->ro_779), 0, 1);
goto ret_;
}
if ((G_NV((*(P122)rt_nil_check(F->bt_777)).kind_) == ((rt_int)7LL))) {
if ((G_NV((*(P122)rt_nil_check(F->bt_777)).priv_) && (!f_inside_package_1064(F->up, (*(P122)rt_nil_check(F->bt_777)).decl_)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_778)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the components of private type ", 31), f_kind_name_491(F->up, F->bt_777)), rt_g_lit(" are not visible here (RM79 7.4)", 32)));
}
F->f_2418 = (*(P122)rt_nil_check(F->bt_777)).fields_;
while ((F->f_2418 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_2418)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_778)).name_)))) {
f_subst_cons_588(F->up, (*(P1905)rt_nil_check(F->f_2418)).c_, F->base_776, &(*F->c_783));
(*F->code_out_781) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(F->base_776, one_rt_gstr(46)), f_c_field_253(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_778)).name_)))));
(*F->t_782) = (*(P1905)rt_nil_check(F->f_2418)).t_;
if (G_NV((*(P1905)rt_nil_check(F->f_2418)).is_const_)) {
(*F->ro_779) = 1;
}
if (((*(P1905)rt_nil_check(F->f_2418)).cond_ != NULL)) {
f_ctype_500(F->up, F->bt_777, &F->ct_2420);
f_new_name_239(F->up, rt_g_lit("vr", 2), &F->tmp_2421);
if (F->lv_780) {
(*F->code_out_781) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*({ ", 5), (*(P140)rt_nil_check(F->ct_2420))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check(F->tmp_2421))), rt_g_lit(" = &(", 5)), F->base_776), rt_g_lit("); if (!(", 9)), f_subst_582(F->up, (*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_2418)).cond_)), cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*", 2), (*(P140)rt_nil_check(F->tmp_2421))), one_rt_gstr(41)))), rt_g_lit(")) rt_raise(RT_X_TAG); &", 24)), (*(P140)rt_nil_check(F->tmp_2421))), rt_g_lit("->", 2)), f_c_field_253(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_778)).name_)))), rt_g_lit("; }))", 5)));
} else {
(*F->code_out_781) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2420))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2421))), rt_g_lit(" = ", 3)), F->base_776), rt_g_lit("; if (!(", 8)), f_subst_582(F->up, (*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_2418)).cond_)), (*(P140)rt_nil_check(F->tmp_2421)))), rt_g_lit(")) rt_raise(RT_X_TAG); ", 23)), (*(P140)rt_nil_check(F->tmp_2421))), one_rt_gstr(46)), f_c_field_253(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_778)).name_)))), rt_g_lit("; })", 4)));
}
}
goto ret_;
}
F->f_2418 = (*(P1905)rt_nil_check(F->f_2418)).next_;
}
L_end_2422: ;
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_778)).line_), cat_rt_gstr(cat_rt_gstr(f_kind_name_491(F->up, F->bt_777), rt_g_lit(" has no component ", 18)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_778)).name_))));
}
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_778)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("cannot select ", 14), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_778)).name_))), rt_g_lit(" here", 5)));
ret_:

  return;
}

static void f_index_on_793(struct f_greenc_1fr *up_, rt_gstr base_785, P122 bt_786, P174 e_787, int *ro_788, int lv_789, P140 *code_out_790, P122 *t_791, P178 *c_792) {
  struct f_index_on_793fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_785 = cp_rt_gstr(base_785);
F->bt_786 = bt_786;
F->e_787 = e_787;
F->ro_788 = ro_788;
F->lv_789 = lv_789;
F->code_out_790 = code_out_790;
F->t_791 = t_791;
F->c_792 = c_792;
F->a_2423 = NULL;
F->a_2423 = (*(P174)rt_nil_check(F->e_787)).b_;
F->arrt_2424 = NULL;
F->arrt_2424 = F->bt_786;
F->acc_2425 = NULL;
F->acc_2425 = f_mk_236(F->up, F->base_785);
F->it_2426 = NULL;
F->i_2427 = NULL;
F->lo_2428 = NULL;
F->hi_2429 = NULL;
F->d_2430 = NULL;
F->ct_2431 = NULL;
F->tmp_2432 = NULL;
(*F->c_792) = F->up->no_cons_218;
if ((G_NV((*(P122)rt_nil_check(F->bt_786)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_616(F->up, F->bt_786);
f_deref_765(F->up, F->base_785, F->bt_786, &F->d_2430);
(*F->ro_788) = 0;
f_index_on_793(F->up, (*(P140)rt_nil_check(F->d_2430)), (*(P122)rt_nil_check(F->bt_786)).target_, F->e_787, &(*F->ro_788), F->lv_789, &(*F->code_out_790), &(*F->t_791), &(*F->c_792));
 (void)rt_range((*F->ro_788), 0, 1);
goto ret_;
}
if ((G_NV((*(P122)rt_nil_check(F->bt_786)).kind_) != ((rt_int)6LL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_787)).line_), rt_g_lit("cannot index this", 17));
}
if ((F->a_2423 == NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_787)).line_), rt_g_lit("an index is required", 20));
}
if ((((G_NV((*(P174)rt_nil_check(F->a_2423)).kind_) == ((rt_int)14LL)) || (G_NV((*(P174)rt_nil_check(F->a_2423)).kind_) == ((rt_int)80LL))) || ((G_NV((*(P174)rt_nil_check(F->a_2423)).kind_) == ((rt_int)5LL)) && f_is_type_name_798(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_2423)).name_)))))) {
if ((((*(P174)rt_nil_check(F->a_2423)).next_ != NULL) || (G_NV((*(P122)rt_nil_check(F->bt_786)).dims_) != ((rt_int)1LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_787)).line_), rt_g_lit("a slice is taken of a one-dimensional array (RM79 4.3)", 54));
}
f_discrete_bounds_530(F->up, F->a_2423, (*(P122)rt_nil_check(F->bt_786)).idx_, &F->it_2426, &F->lo_2428, &F->hi_2429);
f_check_type_495(F->up, F->it_2426, (*(P122)rt_nil_check(F->bt_786)).idx_, G_NV((*(P174)rt_nil_check(F->e_787)).line_));
f_ctype_500(F->up, F->bt_786, &F->d_2430);
f_new_name_239(F->up, rt_g_lit("sl", 2), &F->tmp_2432);
(*F->code_out_790) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->d_2430))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2432))), rt_g_lit(" = ", 3)), F->base_785), rt_g_lit("; rt_int l_ = ", 14)), (*(P140)rt_nil_check(F->lo_2428))), rt_g_lit(", h_ = ", 7)), (*(P140)rt_nil_check(F->hi_2429))), rt_g_lit("; if (l_ <= h_) { rt_index(l_, ", 31)), (*(P140)rt_nil_check(F->tmp_2432))), rt_g_lit(".lo, ", 5)), (*(P140)rt_nil_check(F->tmp_2432))), rt_g_lit(".hi); ", 6)), rt_g_lit("rt_index(h_, ", 13)), (*(P140)rt_nil_check(F->tmp_2432))), rt_g_lit(".lo, ", 5)), (*(P140)rt_nil_check(F->tmp_2432))), rt_g_lit(".hi); } ", 8)), (*(P140)rt_nil_check(F->tmp_2432))), rt_g_lit(".p += l_ - ", 11)), (*(P140)rt_nil_check(F->tmp_2432))), rt_g_lit(".lo; ", 5)), (*(P140)rt_nil_check(F->tmp_2432))), rt_g_lit(".lo = l_; ", 10)), (*(P140)rt_nil_check(F->tmp_2432))), rt_g_lit(".hi = h_; ", 10)), (*(P140)rt_nil_check(F->tmp_2432))), rt_g_lit("; })", 4)));
(*F->t_791) = F->bt_786;
(*F->ro_788) = 1;
goto ret_;
}
if ((f_list_len_316(F->up, F->a_2423) > G_NV((*(P122)rt_nil_check(F->bt_786)).dims_))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_787)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("too many indexes for ", 21), f_kind_name_491(F->up, F->bt_786)), rt_g_lit(" (RM79 4.1.1)", 13)));
}
while ((F->a_2423 != NULL)) {
f_gexpr_819(F->up, F->a_2423, (*(P122)rt_nil_check(F->arrt_2424)).idx_, &F->it_2426, &F->i_2427);
f_check_type_495(F->up, F->it_2426, (*(P122)rt_nil_check(F->arrt_2424)).idx_, G_NV((*(P174)rt_nil_check(F->e_787)).line_));
f_ctype_500(F->up, F->arrt_2424, &F->ct_2431);
f_new_name_239(F->up, rt_g_lit("ix", 2), &F->tmp_2432);
if (F->lv_789) {
F->acc_2425 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*({ ", 5), (*(P140)rt_nil_check(F->ct_2431))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check(F->tmp_2432))), rt_g_lit(" = &(", 5)), (*(P140)rt_nil_check(F->acc_2425))), rt_g_lit("); &", 4)), (*(P140)rt_nil_check(F->tmp_2432))), rt_g_lit("->p[rt_index(", 13)), (*(P140)rt_nil_check(F->i_2427))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->tmp_2432))), rt_g_lit("->lo, ", 6)), (*(P140)rt_nil_check(F->tmp_2432))), rt_g_lit("->hi) - ", 8)), (*(P140)rt_nil_check(F->tmp_2432))), rt_g_lit("->lo]; }))", 10)));
} else {
F->acc_2425 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2431))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2432))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->acc_2425))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->tmp_2432))), rt_g_lit(".p[rt_index(", 12)), (*(P140)rt_nil_check(F->i_2427))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->tmp_2432))), rt_g_lit(".lo, ", 5)), (*(P140)rt_nil_check(F->tmp_2432))), rt_g_lit(".hi) - ", 7)), (*(P140)rt_nil_check(F->tmp_2432))), rt_g_lit(".lo]; })", 8)));
}
(*F->c_792) = (*(P122)rt_nil_check(F->arrt_2424)).elemcons_;
F->arrt_2424 = (*(P122)rt_nil_check(F->arrt_2424)).elem_;
F->a_2423 = (*(P174)rt_nil_check(F->a_2423)).next_;
}
L_end_2433: ;
(*F->code_out_790) = F->acc_2425;
(*F->t_791) = F->arrt_2424;
if ((!F->lv_789)) {
(*F->ro_788) = 1;
}
ret_:

  return;
}

static int f_type_attribute_796(struct f_greenc_1fr *up_, P122 t_794, rt_gstr name_795) {
  struct f_type_attribute_796fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_794 = t_794;
F->name_795 = cp_rt_gstr(name_795);
F->y_2434 = NULL;
F->y_2434 = ({ A116 ix2435 = F->up->table_119; ix2435.p[rt_index(f_hash_425(F->up, F->name_795), ix2435.lo, ix2435.hi) - ix2435.lo]; });
F->p_2436 = NULL;
while ((F->y_2434 != NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2434)).name_)), F->name_795) && ((G_NV((*(P117)rt_nil_check(F->y_2434)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_2434)).kind_) == ((rt_int)4LL))))) {
if (f_same_452(F->up, (*(P117)rt_nil_check(F->y_2434)).result_, F->t_794)) {
F->result_ = 1;
goto ret_;
}
F->p_2436 = (*(P117)rt_nil_check(F->y_2434)).params_;
while ((F->p_2436 != NULL)) {
if (f_same_452(F->up, (*(P1887)rt_nil_check(F->p_2436)).t_, F->t_794)) {
F->result_ = 1;
goto ret_;
}
F->p_2436 = (*(P1887)rt_nil_check(F->p_2436)).next_;
}
L_end_2438: ;
}
F->y_2434 = (*(P117)rt_nil_check(F->y_2434)).chain_;
}
L_end_2437: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_type_name_798(struct f_greenc_1fr *up_, rt_gstr n_797) {
  struct f_is_type_name_798fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_797 = cp_rt_gstr(n_797);
F->y_2439 = NULL;
F->y_2439 = f_lookup_432(F->up, F->n_797);
if ((!(F->y_2439 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P117)rt_nil_check(F->y_2439)).kind_) == ((rt_int)5LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_char_lit_800(struct f_greenc_1fr *up_, P174 e_799) {
  struct f_is_char_lit_800fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_799 = e_799;
if ((!(G_NV((*(P174)rt_nil_check(F->e_799)).kind_) == ((rt_int)3LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (({ rt_gstr at2440 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_799)).name_)); at2440.hi >= at2440.lo ? at2440.hi - at2440.lo + 1 : (rt_int)0; }) == ((rt_int)1LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_enum_lit_802(struct f_greenc_1fr *up_, P174 e_801) {
  struct f_is_enum_lit_802fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_801 = e_801;
F->y_2441 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->e_801)).kind_) != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->y_2441 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_801)).name_)));
if ((!(F->y_2441 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P117)rt_nil_check(F->y_2441)).kind_) == ((rt_int)7LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_c_string_804(struct f_greenc_1fr *up_, rt_gstr s_803) {
  struct f_c_string_804fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_803 = cp_rt_gstr(s_803);
F->n_2442 = INT64_MIN;
F->n_2442 = ((rt_int)0LL);
{ rt_int lo2446 = ((rt_int)1LL), hi2447 = ({ rt_gstr at2444 = F->s_803; at2444.hi >= at2444.lo ? at2444.hi - at2444.lo + 1 : (rt_int)0; });
for (rt_int it2448 = lo2446; it2448 <= hi2447; it2448++) {
F->i_2445 = it2448;
if ((((G_NV(({ rt_gstr ix2449 = F->s_803; ix2449.p[rt_index(F->i_2445, ix2449.lo, ix2449.hi) - ix2449.lo]; })) == 34) || (G_NV(({ rt_gstr ix2450 = F->s_803; ix2450.p[rt_index(F->i_2445, ix2450.lo, ix2450.hi) - ix2450.lo]; })) == 92)) || (G_NV(({ rt_gstr ix2451 = F->s_803; ix2451.p[rt_index(F->i_2445, ix2451.lo, ix2451.hi) - ix2451.lo]; })) == 63))) {
F->n_2442 = rt_add(G_NV(F->n_2442), ((rt_int)1LL));
}
}
}
L_end_2443: ;
{
F->r_2454.lo = ((rt_int)1LL); F->r_2454.hi = rt_add(rt_add(({ rt_gstr at2453 = F->s_803; at2453.hi >= at2453.lo ? at2453.hi - at2453.lo + 1 : (rt_int)0; }), G_NV(F->n_2442)), ((rt_int)2LL));
F->r_2454.lo2 = 1; F->r_2454.hi2 = 1;
F->r_2454.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->r_2454));
memset(F->r_2454.p, 0xFF, (size_t)G_CNT(F->r_2454));
F->j_2456 = INT64_MIN;
F->j_2456 = ((rt_int)1LL);
(*({ rt_gstr *ix2457 = &(F->r_2454); &ix2457->p[rt_index(((rt_int)1LL), ix2457->lo, ix2457->hi) - ix2457->lo]; })) = 34;
{ rt_int lo2461 = ((rt_int)1LL), hi2462 = ({ rt_gstr at2459 = F->s_803; at2459.hi >= at2459.lo ? at2459.hi - at2459.lo + 1 : (rt_int)0; });
for (rt_int it2463 = lo2461; it2463 <= hi2462; it2463++) {
F->i_2460 = it2463;
F->j_2456 = rt_add(G_NV(F->j_2456), ((rt_int)1LL));
if ((((G_NV(({ rt_gstr ix2464 = F->s_803; ix2464.p[rt_index(F->i_2460, ix2464.lo, ix2464.hi) - ix2464.lo]; })) == 34) || (G_NV(({ rt_gstr ix2465 = F->s_803; ix2465.p[rt_index(F->i_2460, ix2465.lo, ix2465.hi) - ix2465.lo]; })) == 92)) || (G_NV(({ rt_gstr ix2466 = F->s_803; ix2466.p[rt_index(F->i_2460, ix2466.lo, ix2466.hi) - ix2466.lo]; })) == 63))) {
(*({ rt_gstr *ix2467 = &(F->r_2454); &ix2467->p[rt_index(G_NV(F->j_2456), ix2467->lo, ix2467->hi) - ix2467->lo]; })) = 92;
F->j_2456 = rt_add(G_NV(F->j_2456), ((rt_int)1LL));
}
(*({ rt_gstr *ix2468 = &(F->r_2454); &ix2468->p[rt_index(G_NV(F->j_2456), ix2468->lo, ix2468->hi) - ix2468->lo]; })) = G_NV(({ rt_gstr ix2469 = F->s_803; ix2469.p[rt_index(F->i_2460, ix2469.lo, ix2469.hi) - ix2469.lo]; }));
}
}
L_end_2458: ;
(*({ rt_gstr *ix2470 = &(F->r_2454); &ix2470->p[rt_index(rt_add(G_NV(F->j_2456), ((rt_int)1LL)), ix2470->lo, ix2470->hi) - ix2470->lo]; })) = 34;
F->result_ = F->r_2454;
goto ret_;

}
L_end_2452: ;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_literal_806(struct f_greenc_1fr *up_, P174 e_805) {
  struct f_is_literal_806fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_805 = e_805;
if ((((G_NV((*(P174)rt_nil_check(F->e_805)).kind_) == ((rt_int)1LL)) || (G_NV((*(P174)rt_nil_check(F->e_805)).kind_) == ((rt_int)2LL))) || f_is_char_lit_800(F->up, F->e_805))) {
F->result_ = 1;
goto ret_;
} else if (((G_NV((*(P174)rt_nil_check(F->e_805)).kind_) == ((rt_int)15LL)) || ((G_NV((*(P174)rt_nil_check(F->e_805)).kind_) == ((rt_int)6LL)) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_805)).name_)), rt_g_lit("NOT", 3)))))) {
F->result_ = f_is_literal_806(F->up, (*(P174)rt_nil_check(F->e_805)).a_);
goto ret_;
} else if (((G_NV((*(P174)rt_nil_check(F->e_805)).kind_) == ((rt_int)7LL)) && (((((eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_805)).name_)), rt_g_lit("+", 1)) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_805)).name_)), rt_g_lit("-", 1))) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_805)).name_)), rt_g_lit("*", 1))) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_805)).name_)), rt_g_lit("/", 1))) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_805)).name_)), rt_g_lit("**", 2))) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_805)).name_)), rt_g_lit("MOD", 3))))) {
F->result_ = (f_is_literal_806(F->up, (*(P174)rt_nil_check(F->e_805)).a_) && f_is_literal_806(F->up, (*(P174)rt_nil_check(F->e_805)).b_));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_range_bounds_814(struct f_greenc_1fr *up_, P174 l_807, P174 h_808, P122 want_809, rt_int line_810, P122 *t_811, P140 *lo_812, P140 *hi_813) {
  struct f_range_bounds_814fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_807 = l_807;
F->h_808 = h_808;
F->want_809 = want_809;
F->line_810 = line_810;
F->t_811 = t_811;
F->lo_812 = lo_812;
F->hi_813 = hi_813;
F->w_2471 = NULL;
F->w_2471 = F->want_809;
F->t2_2472 = NULL;
if ((((F->w_2471 == NULL) && f_is_char_lit_800(F->up, F->l_807)) && f_is_char_lit_800(F->up, F->h_808))) {
F->w_2471 = F->up->ty_char_159;
}
if ((((F->w_2471 == NULL) && f_is_literal_806(F->up, F->l_807)) && (!f_is_literal_806(F->up, F->h_808)))) {
f_gexpr_819(F->up, F->h_808, NULL, &(*F->t_811), &(*F->hi_813));
f_gexpr_819(F->up, F->l_807, (*F->t_811), &F->t2_2472, &(*F->lo_812));
f_check_type_495(F->up, F->t2_2472, (*F->t_811), F->line_810);
} else {
f_gexpr_819(F->up, F->l_807, F->w_2471, &(*F->t_811), &(*F->lo_812));
f_gexpr_819(F->up, F->h_808, (*F->t_811), &F->t2_2472, &(*F->hi_813));
f_check_type_495(F->up, F->t2_2472, (*F->t_811), F->line_810);
}
ret_:

  return;
}

static void f_gexpr_819(struct f_greenc_1fr *up_, P174 e_815, P122 want_816, P122 *t_817, P140 *r_818) {
  struct f_gexpr_819fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_815 = e_815;
F->want_816 = want_816;
F->t_817 = t_817;
F->r_818 = r_818;
F->y_2473 = NULL;
F->bt_2474 = NULL;
F->c_2475 = NULL;
F->ro_2476 = INT_MIN;
F->base_2477 = NULL;
F->a_2478 = NULL;
F->nm_2479 = NULL;
F->saved_lv_2480 = INT_MIN;
F->saved_lv_2480 = G_NV(F->up->in_lv_path_228);
F->up->in_lv_path_228 = 0;
f_gexpr_1_824(F->up, F->e_815, F->want_816, &(*F->t_817), &(*F->r_818));
F->up->in_lv_path_228 = G_NV(F->saved_lv_2480);
ret_:

  return;
}

static void f_gexpr_1_824(struct f_greenc_1fr *up_, P174 e_820, P122 want_821, P122 *t_822, P140 *r_823) {
  struct f_gexpr_1_824fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_820 = e_820;
F->want_821 = want_821;
F->t_822 = t_822;
F->r_823 = r_823;
F->y_2481 = NULL;
F->bt_2482 = NULL;
F->c_2483 = NULL;
F->ro_2484 = INT_MIN;
F->base_2485 = NULL;
F->a_2486 = NULL;
F->nm_2487 = NULL;
F->c2_2488 = NULL;
(*F->t_822) = F->up->ty_int_156;
{ rt_int sel2489 = G_NV((*(P174)rt_nil_check(F->e_820)).kind_);
if (0 || sel2489 == ((rt_int)1LL)) {
if (((F->want_821 != NULL) && (G_NV((*(P122)rt_nil_check(F->want_821)).kind_) == ((rt_int)1LL)))) {
(*F->t_822) = F->want_821;
}
(*F->r_823) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV((*(P174)rt_nil_check(F->e_820)).ival_)))), rt_g_lit("LL)", 3)));
} else if (0 || sel2489 == ((rt_int)2LL)) {
(*F->t_822) = F->up->ty_float_158;
(*F->r_823) = (*(P174)rt_nil_check(F->e_820)).name_;
if (((F->want_821 != NULL) && (G_NV((*(P122)rt_nil_check(F->want_821)).kind_) == ((rt_int)3LL)))) {
(*F->t_822) = F->want_821;
} else if ((((F->want_821 != NULL) && (G_NV((*(P122)rt_nil_check(F->want_821)).kind_) == ((rt_int)16LL))) && ((*(P122)rt_nil_check(F->want_821)).fsmall_ != NULL))) {
(*F->t_822) = F->want_821;
(*F->r_823) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix(", 9), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_820)).name_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->want_821)).fsmall_))), one_rt_gstr(41)));
}
} else if (0 || sel2489 == ((rt_int)3LL)) {
if (((f_is_char_lit_800(F->up, F->e_820) && (F->want_821 != NULL)) && ((G_NV((*(P122)rt_nil_check(F->want_821)).kind_) == ((rt_int)11LL)) || (G_NV((*(P122)rt_nil_check(F->want_821)).kind_) == ((rt_int)4LL))))) {
f_char_literal_834(F->up, F->e_820, F->want_821, &(*F->t_822), &(*F->r_823));
} else if ((((((F->want_821 != NULL) && (G_NV((*(P122)rt_nil_check(F->want_821)).kind_) == ((rt_int)6LL))) && (G_NV((*(P122)rt_nil_check(F->want_821)).dims_) == ((rt_int)1LL))) && ((G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->want_821)).elem_)).kind_) == ((rt_int)11LL)) || (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->want_821)).elem_)).kind_) == ((rt_int)4LL)))) && (!f_is_string_579(F->up, F->want_821)))) {
f_string_aggregate_829(F->up, F->e_820, F->want_821, &(*F->t_822), &(*F->r_823));
} else {
(*F->t_822) = F->up->ty_string_160;
if (((F->want_821 != NULL) && f_is_string_579(F->up, F->want_821))) {
(*F->t_822) = F->want_821;
}
(*F->r_823) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_lit(", 9), f_c_string_804(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_820)).name_)))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(({ rt_gstr at2491 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_820)).name_)); at2491.hi >= at2491.lo ? at2491.hi - at2491.lo + 1 : (rt_int)0; })))), one_rt_gstr(41)));
}
} else if (0 || sel2489 == ((rt_int)4LL)) {
(*F->t_822) = F->up->ty_nil_162;
(*F->r_823) = f_mk_236(F->up, rt_g_lit("NULL", 4));
} else if (0 || sel2489 == ((rt_int)15LL)) {
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->e_820)).a_, F->want_821, &(*F->t_822), &(*F->r_823));
} else if (0 || sel2489 == ((rt_int)5LL)) {
f_gen_name_842(F->up, F->e_820, F->want_821, &(*F->t_822), &(*F->r_823));
} else if (0 || sel2489 == ((rt_int)6LL)) {
f_gen_unop_847(F->up, F->e_820, F->want_821, &(*F->t_822), &(*F->r_823));
} else if (0 || sel2489 == ((rt_int)7LL)) {
f_gen_binop_887(F->up, F->e_820, F->want_821, &(*F->t_822), &(*F->r_823));
} else if (0 || sel2489 == ((rt_int)8LL)) {
f_expanded_837(F->up, (*(P174)rt_nil_check(F->e_820)).a_, &F->nm_2487);
if ((F->nm_2487 != NULL)) {
F->c2_2488 = f_nn_310(F->up, ((rt_int)8LL), G_NV((*(P174)rt_nil_check(F->e_820)).line_));
as_R175(&(*(P174)rt_nil_check(F->c2_2488)), (*(P174)rt_nil_check(F->e_820)));
(*(P174)rt_nil_check(F->c2_2488)).a_ = F->nm_2487;
f_gexpr_819(F->up, F->c2_2488, F->want_821, &(*F->t_822), &(*F->r_823));
goto ret_;
}
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_820)).a_)).kind_) == ((rt_int)5LL))) {
F->y_2481 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_820)).a_)).name_)));
if (((F->y_2481 == NULL) || (((G_NV((*(P117)rt_nil_check(F->y_2481)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_2481)).kind_) == ((rt_int)4LL))) || (G_NV((*(P117)rt_nil_check(F->y_2481)).kind_) == ((rt_int)10LL))))) {
F->up->call_want_224 = F->want_821;
f_gcall_1022(F->up, F->e_820, 0, &(*F->t_822), &(*F->r_823));
goto ret_;
}
if ((G_NV((*(P117)rt_nil_check(F->y_2481)).kind_) == ((rt_int)5LL))) {
f_conversion_892(F->up, F->e_820, F->y_2481, &(*F->t_822), &(*F->r_823));
goto ret_;
}
} else if (((((((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_820)).a_)).kind_) == ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_820)).a_)).a_)).kind_) == ((rt_int)8LL))) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_820)).a_)).a_)).a_)).kind_) == ((rt_int)5LL))) && f_is_task_name_1135(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_820)).a_)).a_)).a_)).name_)))) && (f_member_of_1062(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_820)).a_)).a_)).a_)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_820)).a_)).name_)), G_NV((*(P174)rt_nil_check(F->e_820)).line_)) != NULL)) && (G_NV((*(P117)rt_nil_check(f_member_of_1062(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_820)).a_)).a_)).a_)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_820)).a_)).name_)), G_NV((*(P174)rt_nil_check(F->e_820)).line_)))).kind_) == ((rt_int)3LL)))) {
F->up->call_want_224 = F->want_821;
f_gcall_1022(F->up, F->e_820, 0, &(*F->t_822), &(*F->r_823));
goto ret_;
} else if ((((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_820)).a_)).kind_) == ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_820)).a_)).a_)).kind_) == ((rt_int)5LL))) && f_is_type_name_798(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_820)).a_)).a_)).name_))))) {
F->up->call_want_224 = F->want_821;
f_gcall_1022(F->up, F->e_820, 0, &(*F->t_822), &(*F->r_823));
goto ret_;
} else if (((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_820)).a_)).kind_) == ((rt_int)9LL)) && f_is_package_1058(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_820)).a_)).a_))) {
F->y_2481 = f_member_of_1062(F->up, f_path_of_353(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_820)).a_)).a_), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_820)).a_)).name_)), G_NV((*(P174)rt_nil_check(F->e_820)).line_));
if (((F->y_2481 != NULL) && (((G_NV((*(P117)rt_nil_check(F->y_2481)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_2481)).kind_) == ((rt_int)4LL))) || (G_NV((*(P117)rt_nil_check(F->y_2481)).kind_) == ((rt_int)10LL))))) {
F->up->call_want_224 = F->want_821;
f_gcall_1022(F->up, F->e_820, 0, &(*F->t_822), &(*F->r_823));
goto ret_;
}
}
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->e_820)).a_, NULL, &F->bt_2482, &F->base_2485);
F->ro_2484 = 1;
f_index_on_793(F->up, (*(P140)rt_nil_check(F->base_2485)), F->bt_2482, F->e_820, &F->ro_2484, 0, &(*F->r_823), &(*F->t_822), &F->c_2483);
 (void)rt_range(F->ro_2484, 0, 1);
if ((f_is_numeric_459(F->up, (*F->t_822)) || f_is_discrete_461(F->up, (*F->t_822)))) {
(*F->r_823) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("G_NV(", 5), (*(P140)rt_nil_check((*F->r_823)))), one_rt_gstr(41)));
}
} else if (0 || sel2489 == ((rt_int)9LL)) {
f_expanded_837(F->up, F->e_820, &F->nm_2487);
if ((F->nm_2487 != NULL)) {
f_gen_name_842(F->up, F->nm_2487, F->want_821, &(*F->t_822), &(*F->r_823));
goto ret_;
}
if (((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_820)).a_)).kind_) == ((rt_int)5LL)) && f_is_type_name_798(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_820)).a_)).name_))))) {
F->nm_2487 = f_nn_310(F->up, ((rt_int)8LL), G_NV((*(P174)rt_nil_check(F->e_820)).line_));
(*(P174)rt_nil_check(F->nm_2487)).a_ = F->e_820;
F->up->call_want_224 = F->want_821;
f_gcall_1022(F->up, F->nm_2487, 0, &(*F->t_822), &(*F->r_823));
goto ret_;
}
if (f_is_package_1058(F->up, (*(P174)rt_nil_check(F->e_820)).a_)) {
F->nm_2487 = f_nn_310(F->up, ((rt_int)5LL), G_NV((*(P174)rt_nil_check(F->e_820)).line_));
(*(P174)rt_nil_check(F->nm_2487)).name_ = (*(P174)rt_nil_check(F->e_820)).name_;
(*(P174)rt_nil_check(F->nm_2487)).tag_ = f_mk_236(F->up, f_path_of_353(F->up, (*(P174)rt_nil_check(F->e_820)).a_));
f_gen_name_842(F->up, F->nm_2487, F->want_821, &(*F->t_822), &(*F->r_823));
goto ret_;
}
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->e_820)).a_, NULL, &F->bt_2482, &F->base_2485);
F->ro_2484 = 1;
f_select_on_784(F->up, (*(P140)rt_nil_check(F->base_2485)), F->bt_2482, F->e_820, &F->ro_2484, 0, &(*F->r_823), &(*F->t_822), &F->c_2483);
 (void)rt_range(F->ro_2484, 0, 1);
if ((f_is_numeric_459(F->up, (*F->t_822)) || f_is_discrete_461(F->up, (*F->t_822)))) {
(*F->r_823) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("G_NV(", 5), (*(P140)rt_nil_check((*F->r_823)))), one_rt_gstr(41)));
}
} else if (0 || sel2489 == ((rt_int)10LL)) {
f_gen_attr_908(F->up, F->e_820, F->want_821, &(*F->t_822), &(*F->r_823));
} else if (0 || sel2489 == ((rt_int)11LL)) {
f_allocator_960(F->up, F->e_820, F->want_821, &(*F->t_822), &(*F->r_823));
} else if (0 || sel2489 == ((rt_int)12LL)) {
f_aggregate_965(F->up, F->e_820, F->want_821, &(*F->t_822), &(*F->r_823));
} else {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_820)).line_), rt_g_lit("this expression is not handled", 30));
}
}
ret_:

  return;
}

static void f_string_aggregate_829(struct f_greenc_1fr *up_, P174 e_825, P122 want_826, P122 *t_827, P140 *r_828) {
  struct f_string_aggregate_829fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_825 = e_825;
F->want_826 = want_826;
F->t_827 = t_827;
F->r_828 = r_828;
F->ag_2492 = NULL;
F->it_2493 = NULL;
F->tail_2494 = NULL;
F->l_2495 = NULL;
F->ag_2492 = f_nn_310(F->up, ((rt_int)12LL), G_NV((*(P174)rt_nil_check(F->e_825)).line_));
{ rt_int lo2499 = ((rt_int)1LL), hi2500 = ({ rt_gstr at2497 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_825)).name_)); at2497.hi >= at2497.lo ? at2497.hi - at2497.lo + 1 : (rt_int)0; });
for (rt_int it2501 = lo2499; it2501 <= hi2500; it2501++) {
F->k_2498 = it2501;
F->l_2495 = f_nn_310(F->up, ((rt_int)3LL), G_NV((*(P174)rt_nil_check(F->e_825)).line_));
(*(P174)rt_nil_check(F->l_2495)).name_ = f_mk_236(F->up, ({ rt_gstr sl2503 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_825)).name_)); rt_int l_ = F->k_2498, h_ = F->k_2498; if (l_ <= h_) { rt_index(l_, sl2503.lo, sl2503.hi); rt_index(h_, sl2503.lo, sl2503.hi); } sl2503.p += l_ - sl2503.lo; sl2503.lo = l_; sl2503.hi = h_; sl2503; }));
F->it_2493 = f_nn_310(F->up, ((rt_int)13LL), G_NV((*(P174)rt_nil_check(F->e_825)).line_));
(*(P174)rt_nil_check(F->it_2493)).b_ = F->l_2495;
if ((F->tail_2494 == NULL)) {
(*(P174)rt_nil_check(F->ag_2492)).a_ = F->it_2493;
} else {
(*(P174)rt_nil_check(F->tail_2494)).next_ = F->it_2493;
}
F->tail_2494 = F->it_2493;
}
}
L_end_2496: ;
if (((*(P174)rt_nil_check(F->ag_2492)).a_ == NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_825)).line_), cat_rt_gstr(rt_g_lit("an empty string is not an aggregate of ", 39), f_kind_name_491(F->up, F->want_826)));
}
f_aggregate_965(F->up, F->ag_2492, F->want_826, &(*F->t_827), &(*F->r_828));
ret_:

  return;
}

static void f_char_literal_834(struct f_greenc_1fr *up_, P174 e_830, P122 want_831, P122 *t_832, P140 *r_833) {
  struct f_char_literal_834fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_830 = e_830;
F->want_831 = want_831;
F->t_832 = t_832;
F->r_833 = r_833;
F->i_2504 = INT64_MIN;
if ((G_NV((*(P122)rt_nil_check(F->want_831)).kind_) == ((rt_int)11LL))) {
(*F->t_832) = F->want_831;
(*F->r_833) = f_mk_236(F->up, rt_g_s2g(rt_str_of_int(rt_sub(((rt_int)(G_NV(({ rt_gstr ix2506 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_830)).name_)); ix2506.p[rt_index(((rt_int)1LL), ix2506.lo, ix2506.hi) - ix2506.lo]; }))) + 1), ((rt_int)1LL)))));
goto ret_;
}
F->i_2504 = f_lit_index_508(F->up, (*(P122)rt_nil_check(F->want_831)).lits_, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_830)).name_)));
if ((G_NV(F->i_2504) < ((rt_int)0LL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_830)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(34), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_830)).name_))), rt_g_lit("\" is not a literal of ", 22)), f_kind_name_491(F->up, F->want_831)));
}
(*F->t_832) = F->want_831;
(*F->r_833) = f_mk_236(F->up, rt_g_s2g(rt_str_of_int(G_NV(F->i_2504))));
ret_:

  return;
}

static void f_expanded_837(struct f_greenc_1fr *up_, P174 e_835, P174 *r_836) {
  struct f_expanded_837fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_835 = e_835;
F->r_836 = r_836;
F->y_2507 = NULL;
F->d_2508 = INT64_MIN;
(*F->r_836) = NULL;
if (((G_NV((*(P174)rt_nil_check(F->e_835)).kind_) != ((rt_int)9LL)) || (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_835)).a_)).kind_) != ((rt_int)5LL)))) {
goto ret_;
}
F->d_2508 = f_enclosing_depth_443(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_835)).a_)).name_)));
if ((G_NV(F->d_2508) < ((rt_int)0LL))) {
goto ret_;
}
F->y_2507 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_835)).a_)).name_)));
if (((F->y_2507 != NULL) && ((((G_NV((*(P117)rt_nil_check(F->y_2507)).kind_) == ((rt_int)1LL)) || (G_NV((*(P117)rt_nil_check(F->y_2507)).kind_) == ((rt_int)2LL))) || (G_NV((*(P117)rt_nil_check(F->y_2507)).kind_) == ((rt_int)8LL))) || (G_NV((*(P117)rt_nil_check(F->y_2507)).kind_) == ((rt_int)9LL))))) {
goto ret_;
}
if ((f_lookup_at_441(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_835)).name_)), G_NV(F->d_2508)) == NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_835)).line_), cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_835)).name_)), rt_g_lit(" is not declared in ", 20)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_835)).a_)).name_))));
}
(*F->r_836) = f_nn_310(F->up, ((rt_int)5LL), G_NV((*(P174)rt_nil_check(F->e_835)).line_));
(*(P174)rt_nil_check((*F->r_836))).name_ = (*(P174)rt_nil_check(F->e_835)).name_;
(*(P174)rt_nil_check((*F->r_836))).ival_ = rt_add(G_NV(F->d_2508), ((rt_int)1LL));
ret_:

  return;
}

static void f_gen_name_842(struct f_greenc_1fr *up_, P174 e_838, P122 want_839, P122 *t_840, P140 *r_841) {
  struct f_gen_name_842fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_838 = e_838;
F->want_839 = want_839;
F->t_840 = t_840;
F->r_841 = r_841;
F->y_2509 = NULL;
F->y_2509 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_838)).name_)));
F->z_2510 = NULL;
F->call_2511 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->e_838)).ival_) > ((rt_int)0LL))) {
F->y_2509 = f_lookup_at_441(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_838)).name_)), rt_sub(G_NV((*(P174)rt_nil_check(F->e_838)).ival_), ((rt_int)1LL)));
}
if (((*(P174)rt_nil_check(F->e_838)).tag_ != NULL)) {
F->y_2509 = f_member_of_1062(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_838)).tag_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_838)).name_)), G_NV((*(P174)rt_nil_check(F->e_838)).line_));
}
if ((F->y_2509 == NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_838)).name_)), rt_g_lit("PUT", 3)) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_838)).name_)), rt_g_lit("GET", 3)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_838)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_838)).name_)), rt_g_lit(" needs an item", 14)));
}
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_838)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_838)).name_)), rt_g_lit(" is not declared", 16)));
}
if ((G_NV((*(P117)rt_nil_check(F->y_2509)).kind_) == ((rt_int)12LL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_838)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_838)).name_)), rt_g_lit(" is declared in two used modules: name it P.", 44)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_838)).name_))), rt_g_lit(" (RM79 8.4)", 11)));
}
if (((G_NV((*(P117)rt_nil_check(F->y_2509)).kind_) == ((rt_int)2LL)) && G_NV((*(P117)rt_nil_check(F->y_2509)).hasmv_))) {
(*F->t_840) = (*(P117)rt_nil_check(F->y_2509)).t_;
(*F->r_841) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV((*(P117)rt_nil_check(F->y_2509)).mvalue_)))), rt_g_lit("LL)", 3)));
goto ret_;
}
if (((G_NV((*(P117)rt_nil_check(F->y_2509)).kind_) == ((rt_int)2LL)) && (G_NV((*(P117)rt_nil_check(F->y_2509)).flags_) == rt_add(((rt_int)1LL), ((rt_int)2LL))))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_838)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("deferred constant ", 18), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2509)).name_))), rt_g_lit(" is used before its full declaration (RM79 7.4)", 47)));
}
if (((G_NV((*(P117)rt_nil_check(F->y_2509)).kind_) == ((rt_int)1LL)) || (G_NV((*(P117)rt_nil_check(F->y_2509)).kind_) == ((rt_int)2LL)))) {
(*F->t_840) = (*(P117)rt_nil_check(F->y_2509)).t_;
f_access_of_756(F->up, F->y_2509, &(*F->r_841));
if (((G_NV((*(P117)rt_nil_check(F->y_2509)).kind_) == ((rt_int)1LL)) && (f_is_numeric_459(F->up, (*F->t_840)) || f_is_discrete_461(F->up, (*F->t_840))))) {
(*F->r_841) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("G_NV(", 5), (*(P140)rt_nil_check((*F->r_841)))), one_rt_gstr(41)));
}
goto ret_;
}
if ((G_NV((*(P117)rt_nil_check(F->y_2509)).kind_) == ((rt_int)7LL))) {
F->z_2510 = F->y_2509;
if ((F->want_839 != NULL)) {
while ((F->z_2510 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_2510)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_838)).name_))) && (G_NV((*(P117)rt_nil_check(F->z_2510)).kind_) == ((rt_int)7LL))) && f_same_452(F->up, (*(P117)rt_nil_check(F->z_2510)).t_, F->want_839))) {
goto L_end_2512;
}
F->z_2510 = (*(P117)rt_nil_check(F->z_2510)).chain_;
}
L_end_2512: ;
if ((F->z_2510 == NULL)) {
F->z_2510 = F->y_2509;
}
} else {
F->z_2510 = (*(P117)rt_nil_check(F->y_2509)).chain_;
while ((F->z_2510 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_2510)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_838)).name_))) && (G_NV((*(P117)rt_nil_check(F->z_2510)).kind_) == ((rt_int)7LL))) && (!f_same_452(F->up, (*(P117)rt_nil_check(F->z_2510)).t_, (*(P117)rt_nil_check(F->y_2509)).t_)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_838)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the literal ", 12), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_838)).name_))), rt_g_lit(" is ambiguous: qualify it, T(", 29)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_838)).name_))), rt_g_lit(") (RM79 3.5.1, 4.6)", 19)));
}
F->z_2510 = (*(P117)rt_nil_check(F->z_2510)).chain_;
}
L_end_2513: ;
F->z_2510 = F->y_2509;
}
(*F->t_840) = (*(P117)rt_nil_check(F->z_2510)).t_;
(*F->r_841) = f_mk_236(F->up, rt_g_s2g(rt_str_of_int(G_NV((*(P117)rt_nil_check(F->z_2510)).mvalue_))));
goto ret_;
}
if ((((G_NV((*(P117)rt_nil_check(F->y_2509)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_2509)).kind_) == ((rt_int)4LL))) || (G_NV((*(P117)rt_nil_check(F->y_2509)).kind_) == ((rt_int)10LL)))) {
F->call_2511 = f_nn_310(F->up, ((rt_int)8LL), G_NV((*(P174)rt_nil_check(F->e_838)).line_));
(*(P174)rt_nil_check(F->call_2511)).a_ = F->e_838;
F->up->call_want_224 = F->want_839;
f_gcall_1022(F->up, F->call_2511, 0, &(*F->t_840), &(*F->r_841));
goto ret_;
}
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_838)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_838)).name_)), rt_g_lit(" cannot be used as a value", 26)));
ret_:

  return;
}

static void f_gen_unop_847(struct f_greenc_1fr *up_, P174 e_843, P122 want_844, P122 *t_845, P140 *r_846) {
  struct f_gen_unop_847fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_843 = e_843;
F->want_844 = want_844;
F->t_845 = t_845;
F->r_846 = r_846;
F->a_2514 = NULL;
F->x_2515 = NULL;
F->done_2516 = INT_MIN;
f_user_operator_1117(F->up, F->e_843, F->want_844, &(*F->t_845), &(*F->r_846), &F->done_2516);
 (void)rt_range(F->done_2516, 0, 1);
if (G_NV(F->done_2516)) {
goto ret_;
}
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_843)).name_)), rt_g_lit("NOT", 3))) {
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->e_843)).a_, F->want_844, &(*F->t_845), &F->a_2514);
if (((G_NV((*(P122)rt_nil_check((*F->t_845))).kind_) == ((rt_int)6LL)) && ((G_NV((*(P122)rt_nil_check((*F->t_845))).dims_) == ((rt_int)1LL)) && (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check((*F->t_845))).elem_)).kind_) == ((rt_int)2LL))))) {
f_ctype_500(F->up, (*F->t_845), &F->x_2515);
(*F->r_846) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("not_", 4), (*(P140)rt_nil_check(F->x_2515))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->a_2514))), one_rt_gstr(41)));
goto ret_;
}
if ((G_NV((*(P122)rt_nil_check((*F->t_845))).kind_) != ((rt_int)2LL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_843)).line_), rt_g_lit("operator not applies to boolean values and arrays (RM79 4.5.1)", 62));
}
(*F->r_846) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!", 2), (*(P140)rt_nil_check(F->a_2514))), one_rt_gstr(41)));
goto ret_;
}
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->e_843)).a_, F->want_844, &(*F->t_845), &F->a_2514);
if ((!f_is_numeric_459(F->up, (*F->t_845)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_843)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("unary ", 6), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_843)).name_))), rt_g_lit(" applies to numeric values (RM79 4.5.4)", 39)));
}
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_843)).name_)), rt_g_lit("+", 1))) {
(*F->r_846) = F->a_2514;
} else if (((G_NV((*(P122)rt_nil_check((*F->t_845))).kind_) == ((rt_int)3LL)) || (G_NV((*(P122)rt_nil_check((*F->t_845))).kind_) == ((rt_int)16LL)))) {
(*F->r_846) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(-", 2), (*(P140)rt_nil_check(F->a_2514))), one_rt_gstr(41)));
} else {
(*F->r_846) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_neg(", 7), (*(P140)rt_nil_check(F->a_2514))), one_rt_gstr(41)));
}
ret_:

  return;
}

static int f_short_int_849(struct f_greenc_1fr *up_, P122 t_848) {
  struct f_short_int_849fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_848 = t_848;
if ((!(G_NV((*(P122)rt_nil_check(F->t_848)).kind_) == ((rt_int)1LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (f_root_454(F->up, F->t_848) == F->up->ty_short_167);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_float_kind_851(struct f_greenc_1fr *up_, P122 t_850) {
  struct f_float_kind_851fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_850 = t_850;
if ((f_root_454(F->up, F->t_850) == F->up->ty_sfloat_169)) {
F->result_ = rt_g_lit("1", 1);
goto ret_;
}
F->result_ = rt_g_lit("0", 1);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_membership_854(struct f_greenc_1fr *up_, P174 e_852, P140 *r_853) {
  struct f_membership_854fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_852 = e_852;
F->r_853 = r_853;
F->ta_2517 = NULL;
F->tb_2518 = NULL;
F->tt_2519 = NULL;
F->a_2520 = NULL;
F->lo_2521 = NULL;
F->hi_2522 = NULL;
F->ct_2523 = NULL;
F->c_2524 = NULL;
F->d_2525 = NULL;
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_852)).b_)).kind_) == ((rt_int)14LL))) {
if (f_is_literal_806(F->up, (*(P174)rt_nil_check(F->e_852)).a_)) {
f_range_bounds_814(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_852)).b_)).a_, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_852)).b_)).b_, NULL, G_NV((*(P174)rt_nil_check(F->e_852)).line_), &F->tt_2519, &F->lo_2521, &F->hi_2522);
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->e_852)).a_, F->tt_2519, &F->ta_2517, &F->a_2520);
} else {
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->e_852)).a_, NULL, &F->ta_2517, &F->a_2520);
f_range_bounds_814(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_852)).b_)).a_, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_852)).b_)).b_, F->ta_2517, G_NV((*(P174)rt_nil_check(F->e_852)).line_), &F->tt_2519, &F->lo_2521, &F->hi_2522);
}
f_check_type_495(F->up, F->tt_2519, F->ta_2517, G_NV((*(P174)rt_nil_check(F->e_852)).line_));
if (((!f_is_numeric_459(F->up, F->ta_2517)) && (!f_is_discrete_461(F->up, F->ta_2517)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_852)).line_), rt_g_lit("a range applies to scalar values (RM79 4.5.2)", 45));
}
f_ctype_500(F->up, F->ta_2517, &F->ct_2523);
(*F->r_853) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2523))), rt_g_lit(" m_ = ", 6)), (*(P140)rt_nil_check(F->a_2520))), rt_g_lit("; m_ >= ", 8)), (*(P140)rt_nil_check(F->lo_2521))), rt_g_lit(" && m_ <= ", 10)), (*(P140)rt_nil_check(F->hi_2522))), rt_g_lit("; })", 4)));
goto ret_;
}
f_resolve_516(F->up, (*(P174)rt_nil_check(F->e_852)).b_, &F->tt_2519, &F->c_2524);
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->e_852)).a_, F->tt_2519, &F->ta_2517, &F->a_2520);
f_check_type_495(F->up, F->ta_2517, F->tt_2519, G_NV((*(P174)rt_nil_check(F->e_852)).line_));
f_ctype_500(F->up, F->ta_2517, &F->ct_2523);
if (((f_is_numeric_459(F->up, F->ta_2517) || f_is_discrete_461(F->up, F->ta_2517)) && ((*(P178)rt_nil_check(F->c_2524)).lo_ != NULL))) {
(*F->r_853) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2523))), rt_g_lit(" m_ = ", 6)), (*(P140)rt_nil_check(F->a_2520))), rt_g_lit("; m_ >= ", 8)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2524)).lo_))), rt_g_lit(" && m_ <= ", 10)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2524)).hi_))), rt_g_lit("; })", 4)));
} else if (((G_NV((*(P122)rt_nil_check(F->ta_2517)).kind_) == ((rt_int)6LL)) && ((*(P178)rt_nil_check(F->c_2524)).lo_ != NULL))) {
(*F->r_853) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2523))), rt_g_lit(" m_ = ", 6)), (*(P140)rt_nil_check(F->a_2520))), rt_g_lit("; m_.lo == ", 11)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2524)).lo_))), rt_g_lit(" && m_.hi == ", 13)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2524)).hi_))), rt_g_lit("; })", 4)));
} else if (((G_NV((*(P122)rt_nil_check(F->ta_2517)).kind_) == ((rt_int)7LL)) && f_discriminated_489(F->up, F->c_2524))) {
(*F->r_853) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2523))), rt_g_lit(" m_ = ", 6)), (*(P140)rt_nil_check(F->a_2520))), rt_g_lit("; 1", 3)));
F->d_2525 = (*(P178)rt_nil_check(F->c_2524)).dv_;
while ((F->d_2525 != NULL)) {
(*F->r_853) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->r_853))), rt_g_lit(" && m_.", 7)), f_c_field_253(F->up, (*(P140)rt_nil_check((*(P1909)rt_nil_check(F->d_2525)).name_)))), rt_g_lit(" == (", 5)), (*(P140)rt_nil_check((*(P1909)rt_nil_check(F->d_2525)).v_))), one_rt_gstr(41)));
F->d_2525 = (*(P1909)rt_nil_check(F->d_2525)).next_;
}
L_end_2526: ;
(*F->r_853) = f_mk_236(F->up, cat_rt_gstr((*(P140)rt_nil_check((*F->r_853))), rt_g_lit("; })", 4)));
} else {
(*F->r_853) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ (void)(", 10), (*(P140)rt_nil_check(F->a_2520))), rt_g_lit("); 1; })", 8)));
}
ret_:

  return;
}

static void f_condition_859(struct f_greenc_1fr *up_, P174 e_855, P122 want_856, P122 *t_857, P140 *r_858) {
  struct f_condition_859fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_855 = e_855;
F->want_856 = want_856;
F->t_857 = t_857;
F->r_858 = r_858;
F->a_2527 = NULL;
F->b_2528 = NULL;
F->tb_2529 = NULL;
if (((G_NV((*(P174)rt_nil_check(F->e_855)).kind_) == ((rt_int)7LL)) && (G_NV((*(P174)rt_nil_check(F->e_855)).ival_) == ((rt_int)1LL)))) {
f_condition_859(F->up, (*(P174)rt_nil_check(F->e_855)).a_, F->up->ty_bool_157, &(*F->t_857), &F->a_2527);
f_check_type_495(F->up, (*F->t_857), F->up->ty_bool_157, G_NV((*(P174)rt_nil_check(F->e_855)).line_));
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->e_855)).b_, F->up->ty_bool_157, &F->tb_2529, &F->b_2528);
f_check_type_495(F->up, F->tb_2529, F->up->ty_bool_157, G_NV((*(P174)rt_nil_check(F->e_855)).line_));
(*F->t_857) = F->up->ty_bool_157;
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_855)).name_)), rt_g_lit("AND", 3))) {
(*F->r_858) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2527))), rt_g_lit(" && ", 4)), (*(P140)rt_nil_check(F->b_2528))), one_rt_gstr(41)));
} else {
(*F->r_858) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2527))), rt_g_lit(" || ", 4)), (*(P140)rt_nil_check(F->b_2528))), one_rt_gstr(41)));
}
goto ret_;
}
f_gexpr_819(F->up, F->e_855, F->up->ty_bool_157, &(*F->t_857), &(*F->r_858));
ret_:

  return;
}

static void f_catenation_864(struct f_greenc_1fr *up_, P174 e_860, P122 want_861, P122 *t_862, P140 *r_863) {
  struct f_catenation_864fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_860 = e_860;
F->want_861 = want_861;
F->t_862 = t_862;
F->r_863 = r_863;
F->arrt_2530 = NULL;
F->ta_2531 = NULL;
F->tb_2532 = NULL;
F->a_2533 = NULL;
F->b_2534 = NULL;
F->ct_2535 = NULL;
if ((((F->want_861 != NULL) && (G_NV((*(P122)rt_nil_check(F->want_861)).kind_) == ((rt_int)6LL))) && (G_NV((*(P122)rt_nil_check(F->want_861)).dims_) == ((rt_int)1LL)))) {
F->arrt_2530 = F->want_861;
} else {
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->e_860)).a_, NULL, &F->ta_2531, &F->a_2533);
if (((G_NV((*(P122)rt_nil_check(F->ta_2531)).kind_) == ((rt_int)6LL)) && (G_NV((*(P122)rt_nil_check(F->ta_2531)).dims_) == ((rt_int)1LL)))) {
F->arrt_2530 = F->ta_2531;
} else {
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->e_860)).b_, NULL, &F->tb_2532, &F->b_2534);
if (((G_NV((*(P122)rt_nil_check(F->tb_2532)).kind_) == ((rt_int)6LL)) && (G_NV((*(P122)rt_nil_check(F->tb_2532)).dims_) == ((rt_int)1LL)))) {
F->arrt_2530 = F->tb_2532;
} else if (((G_NV((*(P122)rt_nil_check(F->ta_2531)).kind_) == ((rt_int)11LL)) && (G_NV((*(P122)rt_nil_check(F->tb_2532)).kind_) == ((rt_int)11LL)))) {
F->arrt_2530 = F->up->ty_string_160;
} else {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_860)).line_), rt_g_lit("& catenates one-dimensional arrays and their components (RM79 4.5.3)", 68));
}
}
}
f_ctype_500(F->up, F->arrt_2530, &F->ct_2535);
f_cat_operand_869(F->up, (*(P174)rt_nil_check(F->e_860)).a_, F->arrt_2530, G_NV((*(P174)rt_nil_check(F->e_860)).line_), &F->a_2533);
f_cat_operand_869(F->up, (*(P174)rt_nil_check(F->e_860)).b_, F->arrt_2530, G_NV((*(P174)rt_nil_check(F->e_860)).line_), &F->b_2534);
(*F->t_862) = F->arrt_2530;
(*F->r_863) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("cat_", 4), (*(P140)rt_nil_check(F->ct_2535))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->a_2533))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2534))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_cat_operand_869(struct f_greenc_1fr *up_, P174 x_865, P122 arrt_866, rt_int line_867, P140 *r_868) {
  struct f_cat_operand_869fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_865 = x_865;
F->arrt_866 = arrt_866;
F->line_867 = line_867;
F->r_868 = r_868;
F->tx_2536 = NULL;
F->ct_2537 = NULL;
if ((f_is_char_lit_800(F->up, F->x_865) && (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->arrt_866)).elem_)).kind_) == ((rt_int)11LL)))) {
f_gexpr_819(F->up, F->x_865, (*(P122)rt_nil_check(F->arrt_866)).elem_, &F->tx_2536, &(*F->r_868));
} else {
f_gexpr_819(F->up, F->x_865, F->arrt_866, &F->tx_2536, &(*F->r_868));
}
if (f_same_452(F->up, F->tx_2536, F->arrt_866)) {
goto ret_;
}
if (f_same_452(F->up, F->tx_2536, (*(P122)rt_nil_check(F->arrt_866)).elem_)) {
f_ctype_500(F->up, F->arrt_866, &F->ct_2537);
(*F->r_868) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("one_", 4), (*(P140)rt_nil_check(F->ct_2537))), one_rt_gstr(40)), (*(P140)rt_nil_check((*F->r_868)))), one_rt_gstr(41)));
goto ret_;
}
f_fail_257(F->up, F->line_867, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("type mismatch: ", 15), f_kind_name_491(F->up, F->tx_2536)), rt_g_lit(" in a catenation of ", 20)), f_kind_name_491(F->up, F->arrt_866)), rt_g_lit(" (RM79 4.5.3)", 13)));
ret_:

  return;
}

static void f_arithmetic_874(struct f_greenc_1fr *up_, P174 e_870, P122 want_871, P122 *t_872, P140 *r_873) {
  struct f_arithmetic_874fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_870 = e_870;
F->want_871 = want_871;
F->t_872 = t_872;
F->r_873 = r_873;
F->op_2538 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_870)).name_)));
F->ta_2539 = NULL;
F->tb_2540 = NULL;
F->hint_2541 = NULL;
F->a_2542 = NULL;
F->b_2543 = NULL;
if (eq_rt_gstr(F->op_2538, rt_g_lit("**", 2))) {
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->e_870)).a_, F->want_871, &F->ta_2539, &F->a_2542);
F->hint_2541 = F->up->ty_int_156;
if ((G_NV((*(P122)rt_nil_check(F->ta_2539)).kind_) == ((rt_int)1LL))) {
F->hint_2541 = F->ta_2539;
}
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->e_870)).b_, F->hint_2541, &F->tb_2540, &F->b_2543);
if ((G_NV((*(P122)rt_nil_check(F->tb_2540)).kind_) != ((rt_int)1LL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_870)).line_), rt_g_lit("the exponent of ** is an integer (RM79 4.5.6)", 45));
}
(*F->t_872) = F->ta_2539;
if ((G_NV((*(P122)rt_nil_check(F->ta_2539)).kind_) == ((rt_int)1LL))) {
(*F->r_873) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_pow(", 7), (*(P140)rt_nil_check(F->a_2542))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2543))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->ta_2539)).kind_) == ((rt_int)3LL))) {
(*F->r_873) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fpow(", 10), (*(P140)rt_nil_check(F->a_2542))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2543))), rt_g_lit(", ", 2)), f_float_kind_851(F->up, F->ta_2539)), one_rt_gstr(41)));
} else {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_870)).line_), rt_g_lit("operator ** is defined for integer and floating point values (RM79 4.5.6)", 73));
}
} else {
if ((f_is_literal_806(F->up, (*(P174)rt_nil_check(F->e_870)).a_) && (!f_is_literal_806(F->up, (*(P174)rt_nil_check(F->e_870)).b_)))) {
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->e_870)).b_, F->want_871, &F->tb_2540, &F->b_2543);
F->hint_2541 = F->tb_2540;
if (((G_NV((*(P122)rt_nil_check(F->tb_2540)).kind_) == ((rt_int)16LL)) && (eq_rt_gstr(F->op_2538, rt_g_lit("*", 1)) || eq_rt_gstr(F->op_2538, rt_g_lit("/", 1))))) {
F->hint_2541 = F->up->ty_int_156;
}
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->e_870)).a_, F->hint_2541, &F->ta_2539, &F->a_2542);
} else {
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->e_870)).a_, F->want_871, &F->ta_2539, &F->a_2542);
F->hint_2541 = F->ta_2539;
if (((((G_NV((*(P122)rt_nil_check(F->ta_2539)).kind_) == ((rt_int)16LL)) && (eq_rt_gstr(F->op_2538, rt_g_lit("*", 1)) || eq_rt_gstr(F->op_2538, rt_g_lit("/", 1)))) && f_is_literal_806(F->up, (*(P174)rt_nil_check(F->e_870)).b_)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_870)).b_)).kind_) == ((rt_int)1LL)))) {
F->hint_2541 = F->up->ty_int_156;
}
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->e_870)).b_, F->hint_2541, &F->tb_2540, &F->b_2543);
}
if (((!f_is_numeric_459(F->up, F->ta_2539)) || (!f_is_numeric_459(F->up, F->tb_2540)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_870)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2538), rt_g_lit(" needs numeric operands, not ", 29)), f_kind_name_491(F->up, F->ta_2539)), rt_g_lit(" and ", 5)), f_kind_name_491(F->up, F->tb_2540)));
}
if (((G_NV((*(P122)rt_nil_check(F->ta_2539)).kind_) == ((rt_int)16LL)) || (G_NV((*(P122)rt_nil_check(F->tb_2540)).kind_) == ((rt_int)16LL)))) {
f_fixed_operation_882(F->up, F->e_870, F->ta_2539, F->tb_2540, (*(P140)rt_nil_check(F->a_2542)), (*(P140)rt_nil_check(F->b_2543)), &(*F->t_872), &(*F->r_873));
goto ret_;
}
f_check_type_495(F->up, F->tb_2540, F->ta_2539, G_NV((*(P174)rt_nil_check(F->e_870)).line_));
(*F->t_872) = F->ta_2539;
if ((G_NV((*(P122)rt_nil_check(F->ta_2539)).kind_) == ((rt_int)3LL))) {
if (eq_rt_gstr(F->op_2538, rt_g_lit("+", 1))) {
(*F->r_873) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fadd(", 10), (*(P140)rt_nil_check(F->a_2542))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2543))), rt_g_lit(", ", 2)), f_float_kind_851(F->up, F->ta_2539)), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2538, rt_g_lit("-", 1))) {
(*F->r_873) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fsub(", 10), (*(P140)rt_nil_check(F->a_2542))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2543))), rt_g_lit(", ", 2)), f_float_kind_851(F->up, F->ta_2539)), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2538, rt_g_lit("*", 1))) {
(*F->r_873) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fmul(", 10), (*(P140)rt_nil_check(F->a_2542))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2543))), rt_g_lit(", ", 2)), f_float_kind_851(F->up, F->ta_2539)), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2538, rt_g_lit("/", 1))) {
(*F->r_873) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fdiv(", 10), (*(P140)rt_nil_check(F->a_2542))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2543))), rt_g_lit(", ", 2)), f_float_kind_851(F->up, F->ta_2539)), one_rt_gstr(41)));
} else {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_870)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2538), rt_g_lit(" is not defined for real values (RM79 4.5.5)", 44)));
}
goto ret_;
}
if (eq_rt_gstr(F->op_2538, rt_g_lit("+", 1))) {
(*F->r_873) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_add(", 7), (*(P140)rt_nil_check(F->a_2542))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2543))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2538, rt_g_lit("-", 1))) {
(*F->r_873) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_sub(", 7), (*(P140)rt_nil_check(F->a_2542))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2543))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2538, rt_g_lit("*", 1))) {
(*F->r_873) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_mul(", 7), (*(P140)rt_nil_check(F->a_2542))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2543))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2538, rt_g_lit("/", 1))) {
(*F->r_873) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_quot(", 8), (*(P140)rt_nil_check(F->a_2542))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2543))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2538, rt_g_lit("MOD", 3))) {
(*F->r_873) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_rem(", 7), (*(P140)rt_nil_check(F->a_2542))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2543))), one_rt_gstr(41)));
} else {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_870)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2538), rt_g_lit(" is not defined for integers", 28)));
}
}
if (f_short_int_849(F->up, (*F->t_872))) {
(*F->r_873) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_short(", 11), (*(P140)rt_nil_check((*F->r_873)))), one_rt_gstr(41)));
}
ret_:

  return;
}

static void f_fixed_operation_882(struct f_greenc_1fr *up_, P174 e_875, P122 ta_876, P122 tb_877, rt_gstr a_878, rt_gstr b_879, P122 *t_880, P140 *r_881) {
  struct f_fixed_operation_882fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_875 = e_875;
F->ta_876 = ta_876;
F->tb_877 = tb_877;
F->a_878 = cp_rt_gstr(a_878);
F->b_879 = cp_rt_gstr(b_879);
F->t_880 = t_880;
F->r_881 = r_881;
F->op_2544 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_875)).name_)));
if ((eq_rt_gstr(F->op_2544, rt_g_lit("+", 1)) || eq_rt_gstr(F->op_2544, rt_g_lit("-", 1)))) {
f_check_type_495(F->up, F->tb_877, F->ta_876, G_NV((*(P174)rt_nil_check(F->e_875)).line_));
(*F->t_880) = F->ta_876;
(*F->r_881) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_878), one_rt_gstr(32)), F->op_2544), one_rt_gstr(32)), F->b_879), one_rt_gstr(41)));
} else if (((eq_rt_gstr(F->op_2544, rt_g_lit("*", 1)) && (G_NV((*(P122)rt_nil_check(F->ta_876)).kind_) == ((rt_int)16LL))) && (G_NV((*(P122)rt_nil_check(F->tb_877)).kind_) == ((rt_int)16LL)))) {
(*F->t_880) = F->up->ty_ufixed_172;
(*F->r_881) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_878), rt_g_lit(" * ", 3)), F->b_879), one_rt_gstr(41)));
} else if (((eq_rt_gstr(F->op_2544, rt_g_lit("/", 1)) && (G_NV((*(P122)rt_nil_check(F->ta_876)).kind_) == ((rt_int)16LL))) && (G_NV((*(P122)rt_nil_check(F->tb_877)).kind_) == ((rt_int)16LL)))) {
(*F->t_880) = F->up->ty_ufixed_172;
(*F->r_881) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fdiv(", 10), F->a_878), rt_g_lit(", ", 2)), F->b_879), rt_g_lit(", 0)", 4)));
} else if (((eq_rt_gstr(F->op_2544, rt_g_lit("*", 1)) && (G_NV((*(P122)rt_nil_check(F->ta_876)).kind_) == ((rt_int)16LL))) && (G_NV((*(P122)rt_nil_check(F->tb_877)).kind_) == ((rt_int)1LL)))) {
(*F->t_880) = F->ta_876;
(*F->r_881) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_878), rt_g_lit(" * (double)(", 12)), F->b_879), rt_g_lit("))", 2)));
} else if (((eq_rt_gstr(F->op_2544, rt_g_lit("*", 1)) && (G_NV((*(P122)rt_nil_check(F->ta_876)).kind_) == ((rt_int)1LL))) && (G_NV((*(P122)rt_nil_check(F->tb_877)).kind_) == ((rt_int)16LL)))) {
(*F->t_880) = F->tb_877;
(*F->r_881) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((double)(", 10), F->a_878), rt_g_lit(") * ", 4)), F->b_879), one_rt_gstr(41)));
} else if (((eq_rt_gstr(F->op_2544, rt_g_lit("/", 1)) && (G_NV((*(P122)rt_nil_check(F->ta_876)).kind_) == ((rt_int)16LL))) && (G_NV((*(P122)rt_nil_check(F->tb_877)).kind_) == ((rt_int)1LL)))) {
(*F->t_880) = F->ta_876;
(*F->r_881) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix(rt_g_fdiv(", 19), F->a_878), rt_g_lit(", (double)(", 11)), F->b_879), rt_g_lit("), 0), ", 7)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->ta_876)).fsmall_))), one_rt_gstr(41)));
} else {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_875)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2544), rt_g_lit(" is not defined for these fixed point operands (RM79 4.5.5)", 59)));
}
ret_:

  return;
}

static void f_gen_binop_887(struct f_greenc_1fr *up_, P174 e_883, P122 want_884, P122 *t_885, P140 *r_886) {
  struct f_gen_binop_887fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_883 = e_883;
F->want_884 = want_884;
F->t_885 = t_885;
F->r_886 = r_886;
F->op_2545 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_883)).name_)));
F->ta_2546 = NULL;
F->tb_2547 = NULL;
F->hint_2548 = NULL;
F->ct_2549 = NULL;
F->a_2550 = NULL;
F->b_2551 = NULL;
F->x_2552 = NULL;
F->dummy_2553 = NULL;
F->done_2554 = INT_MIN;
(*F->t_885) = F->up->ty_bool_157;
f_user_operator_1117(F->up, F->e_883, F->want_884, &(*F->t_885), &(*F->r_886), &F->done_2554);
 (void)rt_range(F->done_2554, 0, 1);
if (G_NV(F->done_2554)) {
goto ret_;
}
if ((G_NV((*(P174)rt_nil_check(F->e_883)).ival_) == ((rt_int)1LL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_883)).line_), rt_g_lit("and then and or else are allowed only in conditions (RM79 5.4.1)", 64));
}
if (((eq_rt_gstr(F->op_2545, rt_g_lit("AND", 3)) || eq_rt_gstr(F->op_2545, rt_g_lit("OR", 2))) || eq_rt_gstr(F->op_2545, rt_g_lit("XOR", 3)))) {
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->e_883)).a_, F->want_884, &F->ta_2546, &F->a_2550);
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->e_883)).b_, F->ta_2546, &F->tb_2547, &F->b_2551);
f_check_type_495(F->up, F->tb_2547, F->ta_2546, G_NV((*(P174)rt_nil_check(F->e_883)).line_));
(*F->t_885) = F->ta_2546;
if (((G_NV((*(P122)rt_nil_check(F->ta_2546)).kind_) == ((rt_int)6LL)) && ((G_NV((*(P122)rt_nil_check(F->ta_2546)).dims_) == ((rt_int)1LL)) && (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->ta_2546)).elem_)).kind_) == ((rt_int)2LL))))) {
f_ctype_500(F->up, F->ta_2546, &F->x_2552);
(*F->r_886) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(f_lower_s_247(F->up, F->op_2545), one_rt_gstr(95)), (*(P140)rt_nil_check(F->x_2552))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->a_2550))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2551))), one_rt_gstr(41)));
goto ret_;
}
if ((G_NV((*(P122)rt_nil_check(F->ta_2546)).kind_) != ((rt_int)2LL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_883)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2545), rt_g_lit(" applies to boolean values and arrays (RM79 4.5.1)", 50)));
}
if (eq_rt_gstr(F->op_2545, rt_g_lit("AND", 3))) {
(*F->r_886) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2550))), rt_g_lit(" && ", 4)), (*(P140)rt_nil_check(F->b_2551))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2545, rt_g_lit("OR", 2))) {
(*F->r_886) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2550))), rt_g_lit(" || ", 4)), (*(P140)rt_nil_check(F->b_2551))), one_rt_gstr(41)));
} else {
(*F->r_886) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2550))), rt_g_lit(" != ", 4)), (*(P140)rt_nil_check(F->b_2551))), one_rt_gstr(41)));
}
goto ret_;
}
if (eq_rt_gstr(F->op_2545, rt_g_lit("IN", 2))) {
f_membership_854(F->up, F->e_883, &(*F->r_886));
goto ret_;
}
if (eq_rt_gstr(F->op_2545, rt_g_lit("&", 1))) {
f_catenation_864(F->up, F->e_883, F->want_884, &(*F->t_885), &(*F->r_886));
goto ret_;
}
if (f_is_rel_349(F->up, F->op_2545)) {
if (((((f_is_literal_806(F->up, (*(P174)rt_nil_check(F->e_883)).a_) || f_is_enum_lit_802(F->up, (*(P174)rt_nil_check(F->e_883)).a_)) || (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_883)).a_)).kind_) == ((rt_int)4LL))) || (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_883)).a_)).kind_) == ((rt_int)3LL))) || (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_883)).a_)).kind_) == ((rt_int)12LL)))) {
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->e_883)).b_, NULL, &F->hint_2548, &F->dummy_2553);
}
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->e_883)).a_, F->hint_2548, &F->ta_2546, &F->a_2550);
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->e_883)).b_, F->ta_2546, &F->tb_2547, &F->b_2551);
F->ct_2549 = F->ta_2546;
if (((G_NV((*(P122)rt_nil_check(F->ta_2546)).kind_) != ((rt_int)10LL)) && (G_NV((*(P122)rt_nil_check(F->tb_2547)).kind_) != ((rt_int)10LL)))) {
f_check_type_495(F->up, F->tb_2547, F->ta_2546, G_NV((*(P174)rt_nil_check(F->e_883)).line_));
}
if ((G_NV((*(P122)rt_nil_check(F->ta_2546)).kind_) == ((rt_int)10LL))) {
F->ct_2549 = F->tb_2547;
}
if (((eq_rt_gstr(F->op_2545, rt_g_lit("=", 1)) || eq_rt_gstr(F->op_2545, rt_g_lit("/=", 2))) && f_restricted_here_571(F->up, F->ct_2549))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_883)).line_), rt_g_lit("a restricted type has no predefined equality (RM79 7.4)", 55));
}
if (((((!eq_rt_gstr(F->op_2545, rt_g_lit("=", 1))) && (!eq_rt_gstr(F->op_2545, rt_g_lit("/=", 2)))) && (!f_is_numeric_459(F->up, F->ct_2549))) && (!f_is_discrete_461(F->up, F->ct_2549)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_883)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2545), rt_g_lit(" is defined for scalar types, not for ", 38)), f_kind_name_491(F->up, F->ct_2549)), rt_g_lit(" (RM79 4.5.2)", 13)));
}
if (f_composite_622(F->up, F->ct_2549)) {
f_eq_code_637(F->up, F->ct_2549, (*(P140)rt_nil_check(F->a_2550)), (*(P140)rt_nil_check(F->b_2551)), &F->x_2552);
if (eq_rt_gstr(F->op_2545, rt_g_lit("=", 1))) {
(*F->r_886) = F->x_2552;
} else if (eq_rt_gstr(F->op_2545, rt_g_lit("/=", 2))) {
(*F->r_886) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!", 2), (*(P140)rt_nil_check(F->x_2552))), one_rt_gstr(41)));
} else {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_883)).line_), rt_g_lit("no ordering is defined for composite values", 43));
}
goto ret_;
}
if (eq_rt_gstr(F->op_2545, rt_g_lit("=", 1))) {
(*F->r_886) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2550))), rt_g_lit(" == ", 4)), (*(P140)rt_nil_check(F->b_2551))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2545, rt_g_lit("/=", 2))) {
(*F->r_886) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2550))), rt_g_lit(" != ", 4)), (*(P140)rt_nil_check(F->b_2551))), one_rt_gstr(41)));
} else {
(*F->r_886) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2550))), one_rt_gstr(32)), F->op_2545), one_rt_gstr(32)), (*(P140)rt_nil_check(F->b_2551))), one_rt_gstr(41)));
}
goto ret_;
}
f_arithmetic_874(F->up, F->e_883, F->want_884, &(*F->t_885), &(*F->r_886));
ret_:

  return;
}

static void f_conversion_892(struct f_greenc_1fr *up_, P174 e_888, P117 y_889, P122 *t_890, P140 *r_891) {
  struct f_conversion_892fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_888 = e_888;
F->y_889 = y_889;
F->t_890 = t_890;
F->r_891 = r_891;
F->aty_2555 = NULL;
F->a_2556 = NULL;
F->ag_2557 = NULL;
F->it_2558 = NULL;
F->tail_2559 = NULL;
F->arg_2560 = NULL;
(*F->t_890) = (*(P117)rt_nil_check(F->y_889)).t_;
if (((G_NV((*(P174)rt_nil_check(F->e_888)).flag_) == ((rt_int)9LL)) || (f_list_len_316(F->up, (*(P174)rt_nil_check(F->e_888)).b_) > ((rt_int)1LL)))) {
if ((G_NV((*(P174)rt_nil_check(F->e_888)).flag_) == ((rt_int)9LL))) {
F->ag_2557 = (*(P174)rt_nil_check(F->e_888)).b_;
} else {
F->ag_2557 = f_nn_310(F->up, ((rt_int)12LL), G_NV((*(P174)rt_nil_check(F->e_888)).line_));
F->arg_2560 = (*(P174)rt_nil_check(F->e_888)).b_;
while ((F->arg_2560 != NULL)) {
F->it_2558 = f_nn_310(F->up, ((rt_int)13LL), G_NV((*(P174)rt_nil_check(F->e_888)).line_));
(*(P174)rt_nil_check(F->it_2558)).b_ = F->arg_2560;
if (((*(P174)rt_nil_check(F->arg_2560)).formal_ != NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_888)).line_), rt_g_lit("a named component of an aggregate is given with => (RM79 3.6.2)", 63));
}
if ((F->tail_2559 == NULL)) {
(*(P174)rt_nil_check(F->ag_2557)).a_ = F->it_2558;
} else {
(*(P174)rt_nil_check(F->tail_2559)).next_ = F->it_2558;
}
F->tail_2559 = F->it_2558;
F->arg_2560 = (*(P174)rt_nil_check(F->arg_2560)).next_;
}
L_end_2561: ;
}
if ((G_NV((*(P174)rt_nil_check(F->ag_2557)).kind_) != ((rt_int)12LL))) {
f_gexpr_819(F->up, F->ag_2557, (*F->t_890), &F->aty_2555, &(*F->r_891));
f_check_type_495(F->up, F->aty_2555, (*F->t_890), G_NV((*(P174)rt_nil_check(F->e_888)).line_));
} else {
f_aggregate_965(F->up, F->ag_2557, (*F->t_890), &F->aty_2555, &(*F->r_891));
}
f_constrain_896(F->up, F->y_889, (*F->t_890), &(*F->r_891));
goto ret_;
}
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->e_888)).b_, (*F->t_890), &F->aty_2555, &F->a_2556);
if ((((G_NV((*(P122)rt_nil_check((*F->t_890))).kind_) == ((rt_int)6LL)) && (G_NV((*(P122)rt_nil_check(F->aty_2555)).kind_) == ((rt_int)6LL))) && (!f_same_452(F->up, (*F->t_890), F->aty_2555)))) {
f_array_conversion_903(F->up, F->e_888, (*F->t_890), F->aty_2555, (*(P117)rt_nil_check(F->y_889)).c_, (*(P140)rt_nil_check(F->a_2556)), &(*F->r_891));
goto ret_;
}
if ((f_is_numeric_459(F->up, (*F->t_890)) && f_is_numeric_459(F->up, F->aty_2555))) {
if (((G_NV((*(P122)rt_nil_check((*F->t_890))).kind_) == ((rt_int)1LL)) && (G_NV((*(P122)rt_nil_check(F->aty_2555)).kind_) != ((rt_int)1LL)))) {
(*F->r_891) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_round(", 11), (*(P140)rt_nil_check(F->a_2556))), one_rt_gstr(41)));
} else if (((G_NV((*(P122)rt_nil_check((*F->t_890))).kind_) == ((rt_int)3LL)) && (G_NV((*(P122)rt_nil_check(F->aty_2555)).kind_) == ((rt_int)1LL)))) {
(*F->r_891) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((double)(", 10), (*(P140)rt_nil_check(F->a_2556))), rt_g_lit("))", 2)));
} else if (((G_NV((*(P122)rt_nil_check((*F->t_890))).kind_) == ((rt_int)16LL)) && ((*(P122)rt_nil_check((*F->t_890))).fsmall_ != NULL))) {
if ((G_NV((*(P122)rt_nil_check(F->aty_2555)).kind_) == ((rt_int)1LL))) {
(*F->r_891) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix((double)(", 18), (*(P140)rt_nil_check(F->a_2556))), rt_g_lit("), ", 3)), (*(P140)rt_nil_check((*(P122)rt_nil_check((*F->t_890))).fsmall_))), one_rt_gstr(41)));
} else {
(*F->r_891) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix(", 9), (*(P140)rt_nil_check(F->a_2556))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P122)rt_nil_check((*F->t_890))).fsmall_))), one_rt_gstr(41)));
}
} else {
(*F->r_891) = F->a_2556;
}
} else if (((f_same_452(F->up, F->aty_2555, (*F->t_890)) || f_derived_from_457(F->up, F->aty_2555, (*F->t_890))) || f_derived_from_457(F->up, (*F->t_890), F->aty_2555))) {
(*F->r_891) = F->a_2556;
} else {
f_check_type_495(F->up, F->aty_2555, (*F->t_890), G_NV((*(P174)rt_nil_check(F->e_888)).line_));
(*F->r_891) = F->a_2556;
}
if (((((G_NV((*(P122)rt_nil_check((*F->t_890))).kind_) == ((rt_int)1LL)) || (G_NV((*(P122)rt_nil_check((*F->t_890))).kind_) == ((rt_int)4LL))) || (G_NV((*(P122)rt_nil_check((*F->t_890))).kind_) == ((rt_int)11LL))) && f_bounded_483(F->up, (*(P117)rt_nil_check(F->y_889)).c_))) {
(*F->r_891) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P140)rt_nil_check((*F->r_891)))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_889)).c_)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_889)).c_)).hi_))), one_rt_gstr(41)));
} else if ((((G_NV((*(P122)rt_nil_check((*F->t_890))).kind_) == ((rt_int)3LL)) || (G_NV((*(P122)rt_nil_check((*F->t_890))).kind_) == ((rt_int)16LL))) && f_bounded_483(F->up, (*(P117)rt_nil_check(F->y_889)).c_))) {
(*F->r_891) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_frange(", 10), (*(P140)rt_nil_check((*F->r_891)))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_889)).c_)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_889)).c_)).hi_))), one_rt_gstr(41)));
} else if (f_short_int_849(F->up, (*F->t_890))) {
(*F->r_891) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_short(", 11), (*(P140)rt_nil_check((*F->r_891)))), one_rt_gstr(41)));
}
ret_:

  return;
}

static void f_constrain_896(struct f_greenc_1fr *up_, P117 y_893, P122 t_894, P140 *r_895) {
  struct f_constrain_896fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_893 = y_893;
F->t_894 = t_894;
F->r_895 = r_895;
F->ct_2562 = NULL;
F->tmp_2563 = NULL;
if ((((*(P117)rt_nil_check(F->y_893)).c_ == NULL) || ((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_893)).c_)).lo_ == NULL))) {
goto ret_;
}
if (((G_NV((*(P122)rt_nil_check(F->t_894)).kind_) == ((rt_int)6LL)) && (!f_bounded_hi_485(F->up, (*(P122)rt_nil_check(F->t_894)).tcons_)))) {
f_ctype_500(F->up, F->t_894, &F->ct_2562);
f_new_name_239(F->up, rt_g_lit("q", 1), &F->tmp_2563);
(*F->r_895) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2562))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2563))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check((*F->r_895)))), rt_g_lit("; rt_int l_ = ", 14)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_893)).c_)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_893)).c_)).hi_))), rt_g_lit("; if (G_CNT(", 12)), (*(P140)rt_nil_check(F->tmp_2563))), rt_g_lit(") != (h_ >= l_ \? h_ - l_ + 1 : 0)) ", 35)), rt_g_lit("rt_raise_msg(RT_X_SUBTYPE, ", 27)), f_q_254(F->up)), rt_g_lit("array length", 12)), f_q_254(F->up)), rt_g_lit("); ", 3)), (*(P140)rt_nil_check(F->tmp_2563))), rt_g_lit(".lo = l_; ", 10)), (*(P140)rt_nil_check(F->tmp_2563))), rt_g_lit(".hi = h_; ", 10)), (*(P140)rt_nil_check(F->tmp_2563))), rt_g_lit("; })", 4)));
}
ret_:

  return;
}

static void f_array_conversion_903(struct f_greenc_1fr *up_, P174 e_897, P122 t_898, P122 aty_899, P178 c_900, rt_gstr a_901, P140 *r_902) {
  struct f_array_conversion_903fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_897 = e_897;
F->t_898 = t_898;
F->aty_899 = aty_899;
F->c_900 = c_900;
F->a_901 = cp_rt_gstr(a_901);
F->r_902 = r_902;
F->x_2564 = NULL;
F->y_2565 = NULL;
F->ct_2566 = NULL;
F->act_2567 = NULL;
F->et_2568 = NULL;
F->tmp_2569 = NULL;
F->s_2570 = NULL;
F->x_2564 = F->t_898;
F->y_2565 = F->aty_899;
if ((G_NV((*(P122)rt_nil_check(F->t_898)).dims_) != G_NV((*(P122)rt_nil_check(F->aty_899)).dims_))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_897)).line_), rt_g_lit("no conversion between arrays of different dimensions (RM79 4.6)", 63));
}
{ rt_int lo2573 = ((rt_int)1LL), hi2574 = G_NV((*(P122)rt_nil_check(F->t_898)).dims_);
for (rt_int it2575 = lo2573; it2575 <= hi2574; it2575++) {
F->k_2572 = it2575;
if ((!((f_same_452(F->up, (*(P122)rt_nil_check(F->x_2564)).idx_, (*(P122)rt_nil_check(F->y_2565)).idx_) || f_derived_from_457(F->up, (*(P122)rt_nil_check(F->x_2564)).idx_, (*(P122)rt_nil_check(F->y_2565)).idx_)) || f_derived_from_457(F->up, (*(P122)rt_nil_check(F->y_2565)).idx_, (*(P122)rt_nil_check(F->x_2564)).idx_)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_897)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no conversion from ", 19), f_kind_name_491(F->up, F->aty_899)), rt_g_lit(" to ", 4)), f_kind_name_491(F->up, F->t_898)), rt_g_lit(": the index types differ (RM79 4.6)", 35)));
}
F->x_2564 = (*(P122)rt_nil_check(F->x_2564)).elem_;
F->y_2565 = (*(P122)rt_nil_check(F->y_2565)).elem_;
}
}
L_end_2571: ;
if ((!((f_same_452(F->up, F->x_2564, F->y_2565) || f_derived_from_457(F->up, F->x_2564, F->y_2565)) || f_derived_from_457(F->up, F->y_2565, F->x_2564)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_897)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no conversion from ", 19), f_kind_name_491(F->up, F->aty_899)), rt_g_lit(" to ", 4)), f_kind_name_491(F->up, F->t_898)), rt_g_lit(": the component types differ (RM79 4.6)", 39)));
}
f_ctype_500(F->up, F->t_898, &F->ct_2566);
f_ctype_500(F->up, F->aty_899, &F->act_2567);
f_elem_ctype_574(F->up, (*(P122)rt_nil_check(F->t_898)).elem_, &F->et_2568);
f_new_name_239(F->up, rt_g_lit("cv", 2), &F->tmp_2569);
(*F->r_902) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->act_2567))), rt_g_lit(" s_ = ", 6)), F->a_901), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->ct_2566))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2569))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->tmp_2569))), rt_g_lit(".lo = s_.lo; ", 13)), (*(P140)rt_nil_check(F->tmp_2569))), rt_g_lit(".hi = s_.hi; ", 13)), (*(P140)rt_nil_check(F->tmp_2569))), rt_g_lit(".lo2 = s_.lo2; ", 15)), (*(P140)rt_nil_check(F->tmp_2569))), rt_g_lit(".hi2 = s_.hi2; ", 15)), (*(P140)rt_nil_check(F->tmp_2569))), rt_g_lit(".p = (", 6)), (*(P140)rt_nil_check(F->et_2568))), rt_g_lit(" *)s_.p; ", 9)), (*(P140)rt_nil_check(F->tmp_2569))), rt_g_lit("; })", 4)));
if ((((*(P122)rt_nil_check(F->t_898)).tcons_ != NULL) && ((*(P178)rt_nil_check((*(P122)rt_nil_check(F->t_898)).tcons_)).hi_ != NULL))) {
(*F->r_902) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2566))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2569))), rt_g_lit("x = ", 4)), (*(P140)rt_nil_check((*F->r_902)))), rt_g_lit("; rt_int l_ = ", 14)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P122)rt_nil_check(F->t_898)).tcons_)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P122)rt_nil_check(F->t_898)).tcons_)).hi_))), rt_g_lit("; if (G_CNT(", 12)), (*(P140)rt_nil_check(F->tmp_2569))), rt_g_lit("x) != (h_ >= l_ \? h_ - l_ + 1 : 0)) ", 36)), rt_g_lit("rt_raise_msg(RT_X_SUBTYPE, ", 27)), f_q_254(F->up)), rt_g_lit("array length", 12)), f_q_254(F->up)), rt_g_lit("); ", 3)), (*(P140)rt_nil_check(F->tmp_2569))), rt_g_lit("x.lo = l_; ", 11)), (*(P140)rt_nil_check(F->tmp_2569))), rt_g_lit("x.hi = h_; ", 11)), (*(P140)rt_nil_check(F->tmp_2569))), rt_g_lit("x; })", 5)));
}
ret_:

  return;
}

static void f_gen_attr_908(struct f_greenc_1fr *up_, P174 e_904, P122 want_905, P122 *t_906, P140 *r_907) {
  struct f_gen_attr_908fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_904 = e_904;
F->want_905 = want_905;
F->t_906 = t_906;
F->r_907 = r_907;
F->a_2576 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_904)).name_)));
F->y_2577 = NULL;
F->tt_2578 = NULL;
F->aty_2579 = NULL;
F->v_2580 = NULL;
F->d_2581 = NULL;
F->c_2582 = NULL;
F->n_2583 = INT64_MIN;
F->ro_2584 = INT_MIN;
if ((((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_904)).a_)).kind_) == ((rt_int)8LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_904)).a_)).a_)).kind_) == ((rt_int)5LL))) && f_is_task_name_1135(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_904)).a_)).a_)).name_))))) {
f_member_attr_1208(F->up, F->e_904, &(*F->t_906), &(*F->r_907));
goto ret_;
}
if ((eq_rt_gstr(F->a_2576, rt_g_lit("ADDRESS", 7)) && f_is_object_767(F->up, (*(P174)rt_nil_check(F->e_904)).a_))) {
f_lvalue_775(F->up, (*(P174)rt_nil_check(F->e_904)).a_, &F->v_2580, &F->aty_2579, &F->c_2582, &F->ro_2584);
 (void)rt_range(F->ro_2584, 0, 1);
(*F->t_906) = F->up->ty_int_156;
(*F->r_907) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(intptr_t)&(", 21), (*(P140)rt_nil_check(F->v_2580))), rt_g_lit("))", 2)));
goto ret_;
}
if (((eq_rt_gstr(F->a_2576, rt_g_lit("COUNT", 5)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_904)).a_)).kind_) == ((rt_int)8LL))) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_904)).a_)).a_)).kind_) == ((rt_int)5LL)))) {
F->y_2577 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_904)).a_)).a_)).name_)));
if ((((F->y_2577 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_2577)).kind_) == ((rt_int)10LL))) && ((*(P117)rt_nil_check(F->y_2577)).c_ != NULL))) {
if ((!f_same_task_435(F->up, (*(P117)rt_nil_check(F->y_2577)).members_, F->up->cur_task_210))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_904)).line_), rt_g_lit("E'COUNT is allowed only in the body of the task (RM79 9.9)", 58));
}
f_entry_path_1158(F->up, F->y_2577, rt_g_lit("", 0), &F->v_2580);
f_gexpr_819(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_904)).a_)).b_, NULL, &F->aty_2579, &F->d_2581);
f_entry_family_slot_1174(F->up, F->y_2577, (*(P140)rt_nil_check(F->v_2580)), (*(P140)rt_nil_check(F->d_2581)), &F->v_2580);
(*F->t_906) = F->up->ty_int_156;
(*F->r_907) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_entry_count(&", 16), (*(P140)rt_nil_check(F->v_2580))), one_rt_gstr(41)));
goto ret_;
}
}
if (((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_904)).a_)).kind_) == ((rt_int)9LL)) && f_is_package_1058(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_904)).a_)).a_))) {
F->y_2577 = f_member_of_1062(F->up, f_path_of_353(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_904)).a_)).a_), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_904)).a_)).name_)), G_NV((*(P174)rt_nil_check(F->e_904)).line_));
}
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_904)).a_)).kind_) == ((rt_int)5LL))) {
F->y_2577 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_904)).a_)).name_)));
if (((F->y_2577 == NULL) && (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_904)).a_)).name_)), rt_g_lit("SYSTEM", 6)) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_904)).a_)).name_)), rt_g_lit("OPTION", 6))))) {
f_config_attr_930(F->up, F->e_904, &(*F->t_906), &(*F->r_907));
goto ret_;
}
if (((eq_rt_gstr(F->a_2576, rt_g_lit("ADDRESS", 7)) && (F->y_2577 != NULL)) && ((((G_NV((*(P117)rt_nil_check(F->y_2577)).kind_) == ((rt_int)4LL)) || (G_NV((*(P117)rt_nil_check(F->y_2577)).kind_) == ((rt_int)3LL))) || (G_NV((*(P117)rt_nil_check(F->y_2577)).kind_) == ((rt_int)8LL))) || (G_NV((*(P117)rt_nil_check(F->y_2577)).kind_) == ((rt_int)9LL))))) {
(*F->t_906) = F->up->ty_int_156;
(*F->r_907) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(rt_add(((rt_int)65536LL), rt_mul(((rt_int)16LL), f_hash_425(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2577)).name_)), rt_g_s2g(rt_str_of_int(G_NV((*(P117)rt_nil_check(F->y_2577)).depth_)))))))))), one_rt_gstr(41)));
goto ret_;
}
if ((((F->y_2577 == NULL) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_904)).a_)).name_)), rt_g_lit("SYSTEM", 6))) && eq_rt_gstr(F->a_2576, rt_g_lit("CLOCK", 5)))) {
(*F->t_906) = F->up->ty_time_171;
(*F->r_907) = f_mk_236(F->up, rt_g_lit("((double)rt_time())", 19));
goto ret_;
}
if ((((F->y_2577 == NULL) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_904)).a_)).name_)), rt_g_lit("SYSTEM", 6))) && (eq_rt_gstr(F->a_2576, rt_g_lit("MAX_PRIORITY", 12)) || eq_rt_gstr(F->a_2576, rt_g_lit("MIN_PRIORITY", 12))))) {
(*F->t_906) = F->up->ty_int_156;
if (eq_rt_gstr(F->a_2576, rt_g_lit("MAX_PRIORITY", 12))) {
(*F->r_907) = f_mk_236(F->up, rt_g_lit("((rt_int)255)", 13));
} else {
(*F->r_907) = f_mk_236(F->up, rt_g_lit("((rt_int)0)", 11));
}
goto ret_;
}
}
if (((F->y_2577 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_2577)).kind_) == ((rt_int)5LL)))) {
F->tt_2578 = (*(P117)rt_nil_check(F->y_2577)).t_;
F->c_2582 = (*(P117)rt_nil_check(F->y_2577)).c_;
if (eq_rt_gstr(F->a_2576, rt_g_lit("SIZE", 4))) {
(*F->t_906) = F->up->ty_int_156;
f_type_bits_912(F->up, F->tt_2578, F->c_2582, &(*F->r_907));
goto ret_;
}
if (((((((((eq_rt_gstr(F->a_2576, rt_g_lit("DIGITS", 6)) || eq_rt_gstr(F->a_2576, rt_g_lit("SMALL", 5))) || eq_rt_gstr(F->a_2576, rt_g_lit("LARGE", 5))) || eq_rt_gstr(F->a_2576, rt_g_lit("EXPONENT_MIN", 12))) || eq_rt_gstr(F->a_2576, rt_g_lit("EXPONENT_MAX", 12))) || eq_rt_gstr(F->a_2576, rt_g_lit("BITS", 4))) || eq_rt_gstr(F->a_2576, rt_g_lit("RADIX", 5))) || eq_rt_gstr(F->a_2576, rt_g_lit("DELTA", 5))) || eq_rt_gstr(F->a_2576, rt_g_lit("ACCESS_SIZE", 11)))) {
f_numeric_attr_922(F->up, F->e_904, F->tt_2578, F->c_2582, &(*F->t_906), &(*F->r_907));
goto ret_;
}
if (eq_rt_gstr(F->a_2576, rt_g_lit("ORD", 3))) {
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->e_904)).b_, F->tt_2578, &F->aty_2579, &F->v_2580);
f_check_type_495(F->up, F->aty_2579, F->tt_2578, G_NV((*(P174)rt_nil_check(F->e_904)).line_));
(*F->t_906) = F->up->ty_int_156;
(*F->r_907) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(", 10), (*(P140)rt_nil_check(F->v_2580))), rt_g_lit(") + 1)", 6)));
goto ret_;
} else if ((eq_rt_gstr(F->a_2576, rt_g_lit("VAL", 3)) || eq_rt_gstr(F->a_2576, rt_g_lit("REP", 3)))) {
f_val_rep_955(F->up, F->e_904, F->tt_2578, F->c_2582, &(*F->t_906), &(*F->r_907));
goto ret_;
} else if ((eq_rt_gstr(F->a_2576, rt_g_lit("SUCC", 4)) || eq_rt_gstr(F->a_2576, rt_g_lit("PRED", 4)))) {
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->e_904)).b_, F->tt_2578, &F->aty_2579, &F->v_2580);
(*F->t_906) = F->tt_2578;
if ((G_NV((*(P122)rt_nil_check(F->tt_2578)).kind_) == ((rt_int)1LL))) {
if (eq_rt_gstr(F->a_2576, rt_g_lit("SUCC", 4))) {
(*F->r_907) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_add(", 7), (*(P140)rt_nil_check(F->v_2580))), rt_g_lit(", 1)", 4)));
} else {
(*F->r_907) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_sub(", 7), (*(P140)rt_nil_check(F->v_2580))), rt_g_lit(", 1)", 4)));
}
} else if (eq_rt_gstr(F->a_2576, rt_g_lit("SUCC", 4))) {
(*F->r_907) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P140)rt_nil_check(F->v_2580))), rt_g_lit(" + 1, ", 6)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2582)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2582)).hi_))), one_rt_gstr(41)));
} else {
(*F->r_907) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P140)rt_nil_check(F->v_2580))), rt_g_lit(" - 1, ", 6)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2582)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2582)).hi_))), one_rt_gstr(41)));
}
goto ret_;
} else if (((G_NV((*(P122)rt_nil_check(F->tt_2578)).kind_) == ((rt_int)6LL)) && ((eq_rt_gstr(F->a_2576, rt_g_lit("FIRST", 5)) || eq_rt_gstr(F->a_2576, rt_g_lit("LAST", 4))) || eq_rt_gstr(F->a_2576, rt_g_lit("LENGTH", 6))))) {
f_type_array_attr_946(F->up, F->e_904, F->tt_2578, F->c_2582, &(*F->t_906), &(*F->r_907));
goto ret_;
} else if ((eq_rt_gstr(F->a_2576, rt_g_lit("FIRST", 5)) || eq_rt_gstr(F->a_2576, rt_g_lit("LAST", 4)))) {
(*F->t_906) = F->tt_2578;
if (f_bounded_483(F->up, F->c_2582)) {
if (eq_rt_gstr(F->a_2576, rt_g_lit("FIRST", 5))) {
(*F->r_907) = (*(P178)rt_nil_check(F->c_2582)).lo_;
} else {
(*F->r_907) = (*(P178)rt_nil_check(F->c_2582)).hi_;
}
} else if ((G_NV((*(P122)rt_nil_check(F->tt_2578)).kind_) == ((rt_int)1LL))) {
if (eq_rt_gstr(F->a_2576, rt_g_lit("FIRST", 5))) {
(*F->r_907) = f_mk_236(F->up, rt_g_lit("(-INT64_MAX)", 12));
} else {
(*F->r_907) = f_mk_236(F->up, rt_g_lit("INT64_MAX", 9));
}
} else if (((G_NV((*(P122)rt_nil_check(F->tt_2578)).kind_) == ((rt_int)3LL)) && (f_root_454(F->up, F->tt_2578) == F->up->ty_sfloat_169))) {
if (eq_rt_gstr(F->a_2576, rt_g_lit("FIRST", 5))) {
(*F->r_907) = f_mk_236(F->up, rt_g_lit("(-3.40282347e+38)", 17));
} else {
(*F->r_907) = f_mk_236(F->up, rt_g_lit("3.40282347e+38", 14));
}
} else if ((G_NV((*(P122)rt_nil_check(F->tt_2578)).kind_) == ((rt_int)3LL))) {
if (eq_rt_gstr(F->a_2576, rt_g_lit("FIRST", 5))) {
(*F->r_907) = f_mk_236(F->up, rt_g_lit("(-1.7976931348623157e+308)", 26));
} else {
(*F->r_907) = f_mk_236(F->up, rt_g_lit("1.7976931348623157e+308", 23));
}
} else {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_904)).line_), cat_rt_gstr(rt_g_lit("this type has no ", 17), F->a_2576));
}
goto ret_;
}
f_other_attr_1204(F->up, F->e_904, F->y_2577, &(*F->t_906), &(*F->r_907));
goto ret_;
}
if (((F->y_2577 != NULL) && ((G_NV((*(P117)rt_nil_check(F->y_2577)).kind_) != ((rt_int)1LL)) && (G_NV((*(P117)rt_nil_check(F->y_2577)).kind_) != ((rt_int)2LL))))) {
f_other_attr_1204(F->up, F->e_904, F->y_2577, &(*F->t_906), &(*F->r_907));
goto ret_;
}
if (((eq_rt_gstr(F->a_2576, rt_g_lit("POSITION", 8)) || eq_rt_gstr(F->a_2576, rt_g_lit("FIRST_BIT", 9))) || eq_rt_gstr(F->a_2576, rt_g_lit("LAST_BIT", 8)))) {
f_component_attr_926(F->up, F->e_904, &(*F->t_906), &(*F->r_907));
goto ret_;
}
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->e_904)).a_, NULL, &F->tt_2578, &F->v_2580);
if (eq_rt_gstr(F->a_2576, rt_g_lit("ACCESS_SIZE", 11))) {
if ((G_NV((*(P122)rt_nil_check(F->tt_2578)).kind_) != ((rt_int)8LL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_904)).line_), rt_g_lit("ACCESS_SIZE is an attribute of access types and objects (RM79 App. A)", 69));
}
(*F->t_906) = F->up->ty_int_156;
(*F->r_907) = f_mk_236(F->up, rt_g_lit("((rt_int)(sizeof(void *) * 8))", 30));
goto ret_;
}
if (eq_rt_gstr(F->a_2576, rt_g_lit("SIZE", 4))) {
(*F->t_906) = F->up->ty_int_156;
f_object_bits_916(F->up, F->tt_2578, (*(P140)rt_nil_check(F->v_2580)), &(*F->r_907));
goto ret_;
}
if ((G_NV((*(P122)rt_nil_check(F->tt_2578)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_616(F->up, F->tt_2578);
f_deref_765(F->up, (*(P140)rt_nil_check(F->v_2580)), F->tt_2578, &F->d_2581);
F->v_2580 = F->d_2581;
F->tt_2578 = (*(P122)rt_nil_check(F->tt_2578)).target_;
}
(*F->t_906) = F->up->ty_int_156;
if (((G_NV((*(P122)rt_nil_check(F->tt_2578)).kind_) == ((rt_int)6LL)) && ((eq_rt_gstr(F->a_2576, rt_g_lit("FIRST", 5)) || eq_rt_gstr(F->a_2576, rt_g_lit("LAST", 4))) || eq_rt_gstr(F->a_2576, rt_g_lit("LENGTH", 6))))) {
f_object_array_attr_940(F->up, F->e_904, F->tt_2578, (*(P140)rt_nil_check(F->v_2580)), &(*F->t_906), &(*F->r_907));
goto ret_;
}
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_904)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), F->a_2576), rt_g_lit(" is not handled here", 20)));
ret_:

  return;
}

static void f_type_bits_912(struct f_greenc_1fr *up_, P122 t_909, P178 c_910, P140 *r_911) {
  struct f_type_bits_912fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_909 = t_909;
F->c_910 = c_910;
F->r_911 = r_911;
F->ct_2585 = NULL;
if ((G_NV((*(P122)rt_nil_check(F->t_909)).kind_) == ((rt_int)6LL))) {
if ((!f_bounded_483(F->up, F->c_910))) {
f_fail_257(F->up, ((rt_int)0LL), rt_g_lit("SIZE of an array type needs its bounds (RM79 App. A)", 52));
}
f_elem_ctype_574(F->up, (*(P122)rt_nil_check(F->t_909)).elem_, &F->ct_2585);
(*F->r_911) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ rt_int l_ = ", 15), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_910)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_910)).hi_))), rt_g_lit("; (h_ >= l_ \? h_ - l_ + 1 : 0) * (rt_int)sizeof(", 48)), (*(P140)rt_nil_check(F->ct_2585))), rt_g_lit(") * 8; })", 9)));
} else if (((G_NV((*(P122)rt_nil_check(F->t_909)).kind_) == ((rt_int)11LL)) || (G_NV((*(P122)rt_nil_check(F->t_909)).kind_) == ((rt_int)2LL)))) {
(*F->r_911) = f_mk_236(F->up, rt_g_lit("((rt_int)8)", 11));
} else if ((G_NV((*(P122)rt_nil_check(F->t_909)).kind_) == ((rt_int)4LL))) {
if ((f_list_len_316(F->up, (*(P122)rt_nil_check(F->t_909)).lits_) <= ((rt_int)256LL))) {
(*F->r_911) = f_mk_236(F->up, rt_g_lit("((rt_int)8)", 11));
} else {
(*F->r_911) = f_mk_236(F->up, rt_g_lit("((rt_int)16)", 12));
}
} else if (((G_NV((*(P122)rt_nil_check(F->t_909)).kind_) == ((rt_int)1LL)) && (f_root_454(F->up, F->t_909) == F->up->ty_short_167))) {
(*F->r_911) = f_mk_236(F->up, rt_g_lit("((rt_int)32)", 12));
} else if (((G_NV((*(P122)rt_nil_check(F->t_909)).kind_) == ((rt_int)3LL)) && (f_root_454(F->up, F->t_909) == F->up->ty_sfloat_169))) {
(*F->r_911) = f_mk_236(F->up, rt_g_lit("((rt_int)32)", 12));
} else {
f_ctype_500(F->up, F->t_909, &F->ct_2585);
(*F->r_911) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(sizeof(", 17), (*(P140)rt_nil_check(F->ct_2585))), rt_g_lit(") * 8))", 7)));
}
ret_:

  return;
}

static void f_object_bits_916(struct f_greenc_1fr *up_, P122 t_913, rt_gstr v_914, P140 *r_915) {
  struct f_object_bits_916fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_913 = t_913;
F->v_914 = cp_rt_gstr(v_914);
F->r_915 = r_915;
F->ct_2586 = NULL;
F->et_2587 = NULL;
if ((G_NV((*(P122)rt_nil_check(F->t_913)).kind_) == ((rt_int)6LL))) {
f_ctype_500(F->up, F->t_913, &F->ct_2586);
f_elem_ctype_574(F->up, (*(P122)rt_nil_check(F->t_913)).elem_, &F->et_2587);
(*F->r_915) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2586))), rt_g_lit(" sz_ = ", 7)), F->v_914), rt_g_lit("; G_CNT(sz_) * (rt_int)sizeof(", 30)), (*(P140)rt_nil_check(F->et_2587))), rt_g_lit(") * 8; })", 9)));
} else {
f_type_bits_912(F->up, F->t_913, NULL, &(*F->r_915));
(*F->r_915) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ (void)(", 10), F->v_914), rt_g_lit("); ", 3)), (*(P140)rt_nil_check((*F->r_915)))), rt_g_lit("; })", 4)));
}
ret_:

  return;
}

static void f_numeric_attr_922(struct f_greenc_1fr *up_, P174 e_917, P122 tt_918, P178 c_919, P122 *t_920, P140 *r_921) {
  struct f_numeric_attr_922fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_917 = e_917;
F->tt_918 = tt_918;
F->c_919 = c_919;
F->t_920 = t_920;
F->r_921 = r_921;
F->a_2588 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_917)).name_)));
F->short_2589 = INT_MIN;
F->short_2589 = (f_root_454(F->up, F->tt_918) == F->up->ty_sfloat_169);
(*F->t_920) = F->up->ty_int_156;
if (eq_rt_gstr(F->a_2588, rt_g_lit("ACCESS_SIZE", 11))) {
if ((G_NV((*(P122)rt_nil_check(F->tt_918)).kind_) != ((rt_int)8LL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_917)).line_), rt_g_lit("ACCESS_SIZE is an attribute of access types (RM79 App. A)", 57));
}
(*F->r_921) = f_mk_236(F->up, rt_g_lit("((rt_int)(sizeof(void *) * 8))", 30));
} else if (eq_rt_gstr(F->a_2588, rt_g_lit("RADIX", 5))) {
if ((!f_is_numeric_459(F->up, F->tt_918))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_917)).line_), rt_g_lit("RADIX is an attribute of numeric types (RM79 App. A)", 52));
}
(*F->r_921) = f_mk_236(F->up, rt_g_lit("((rt_int)2)", 11));
} else if ((G_NV((*(P122)rt_nil_check(F->tt_918)).kind_) == ((rt_int)3LL))) {
if (eq_rt_gstr(F->a_2588, rt_g_lit("DIGITS", 6))) {
if (((F->c_919 != NULL) && ((*(P178)rt_nil_check(F->c_919)).acc_ != NULL))) {
(*F->r_921) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(", 10), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_919)).acc_))), rt_g_lit("))", 2)));
} else {
(*F->r_921) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV((*(P122)rt_nil_check(F->tt_918)).ndigits_)))), one_rt_gstr(41)));
}
} else if (eq_rt_gstr(F->a_2588, rt_g_lit("BITS", 4))) {
if (G_NV(F->short_2589)) {
(*F->r_921) = f_mk_236(F->up, rt_g_lit("((rt_int)24)", 12));
} else {
(*F->r_921) = f_mk_236(F->up, rt_g_lit("((rt_int)53)", 12));
}
} else if (eq_rt_gstr(F->a_2588, rt_g_lit("EXPONENT_MIN", 12))) {
if (G_NV(F->short_2589)) {
(*F->r_921) = f_mk_236(F->up, rt_g_lit("((rt_int)-125)", 14));
} else {
(*F->r_921) = f_mk_236(F->up, rt_g_lit("((rt_int)-1021)", 15));
}
} else if (eq_rt_gstr(F->a_2588, rt_g_lit("EXPONENT_MAX", 12))) {
if (G_NV(F->short_2589)) {
(*F->r_921) = f_mk_236(F->up, rt_g_lit("((rt_int)128)", 13));
} else {
(*F->r_921) = f_mk_236(F->up, rt_g_lit("((rt_int)1024)", 14));
}
} else if (eq_rt_gstr(F->a_2588, rt_g_lit("SMALL", 5))) {
(*F->t_920) = F->tt_918;
if (G_NV(F->short_2589)) {
(*F->r_921) = f_mk_236(F->up, rt_g_lit("1.17549435e-38", 14));
} else {
(*F->r_921) = f_mk_236(F->up, rt_g_lit("2.2250738585072014e-308", 23));
}
} else if (eq_rt_gstr(F->a_2588, rt_g_lit("LARGE", 5))) {
(*F->t_920) = F->tt_918;
if (G_NV(F->short_2589)) {
(*F->r_921) = f_mk_236(F->up, rt_g_lit("3.40282347e+38", 14));
} else {
(*F->r_921) = f_mk_236(F->up, rt_g_lit("1.7976931348623157e+308", 23));
}
} else {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_917)).line_), rt_g_lit("DELTA is an attribute of fixed point types (RM79 App. A)", 56));
}
} else if (((G_NV((*(P122)rt_nil_check(F->tt_918)).kind_) == ((rt_int)16LL)) && ((*(P122)rt_nil_check(F->tt_918)).fsmall_ != NULL))) {
if (eq_rt_gstr(F->a_2588, rt_g_lit("DELTA", 5))) {
(*F->t_920) = F->tt_918;
if (((F->c_919 != NULL) && ((*(P178)rt_nil_check(F->c_919)).acc_ != NULL))) {
(*F->r_921) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_919)).acc_))), one_rt_gstr(41)));
} else {
(*F->r_921) = (*(P122)rt_nil_check(F->tt_918)).fdelta_;
}
} else if (eq_rt_gstr(F->a_2588, rt_g_lit("SMALL", 5))) {
(*F->t_920) = F->tt_918;
(*F->r_921) = (*(P122)rt_nil_check(F->tt_918)).fsmall_;
} else if (eq_rt_gstr(F->a_2588, rt_g_lit("LARGE", 5))) {
(*F->t_920) = F->tt_918;
(*F->r_921) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix_large(", 15), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->tt_918)).fsmall_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_919)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_919)).hi_))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_2588, rt_g_lit("BITS", 4))) {
(*F->r_921) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix_bits(", 14), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->tt_918)).fsmall_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_919)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_919)).hi_))), one_rt_gstr(41)));
} else {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_917)).line_), cat_rt_gstr(F->a_2588, rt_g_lit(" is not an attribute of fixed point types (RM79 App. A)", 55)));
}
} else {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_917)).line_), cat_rt_gstr(F->a_2588, rt_g_lit(" is an attribute of real types (RM79 App. A)", 44)));
}
ret_:

  return;
}

static void f_component_attr_926(struct f_greenc_1fr *up_, P174 e_923, P122 *t_924, P140 *r_925) {
  struct f_component_attr_926fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_923 = e_923;
F->t_924 = t_924;
F->r_925 = r_925;
F->bt_2590 = NULL;
F->v_2591 = NULL;
F->ct_2592 = NULL;
F->f_2593 = NULL;
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_923)).a_)).kind_) != ((rt_int)9LL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_923)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_923)).name_)), rt_g_lit(" is an attribute of a record component, X.C'", 44)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_923)).name_))), rt_g_lit(" (RM79 13.7)", 12)));
}
f_gexpr_819(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_923)).a_)).a_, NULL, &F->bt_2590, &F->v_2591);
if ((G_NV((*(P122)rt_nil_check(F->bt_2590)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_616(F->up, F->bt_2590);
F->bt_2590 = (*(P122)rt_nil_check(F->bt_2590)).target_;
}
if ((G_NV((*(P122)rt_nil_check(F->bt_2590)).kind_) != ((rt_int)7LL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_923)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_923)).name_)), rt_g_lit(" is an attribute of a record component (RM79 13.7)", 50)));
}
F->f_2593 = (*(P122)rt_nil_check(F->bt_2590)).fields_;
while (((F->f_2593 != NULL) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_2593)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_923)).a_)).name_)))))) {
F->f_2593 = (*(P1905)rt_nil_check(F->f_2593)).next_;
}
L_end_2594: ;
if ((F->f_2593 == NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_923)).line_), cat_rt_gstr(cat_rt_gstr(f_kind_name_491(F->up, F->bt_2590), rt_g_lit(" has no component ", 18)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_923)).a_)).name_))));
}
f_ctype_500(F->up, F->bt_2590, &F->ct_2592);
(*F->t_924) = F->up->ty_int_156;
f_component_place_567(F->up, F->bt_2590, F->f_2593, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_923)).name_)), (*(P140)rt_nil_check(F->ct_2592)), &(*F->r_925));
ret_:

  return;
}

static void f_config_attr_930(struct f_greenc_1fr *up_, P174 e_927, P122 *t_928, P140 *r_929) {
  struct f_config_attr_930fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_927 = e_927;
F->t_928 = t_928;
F->r_929 = r_929;
F->a_2595 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_927)).name_)));
F->p_2596 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_927)).a_)).name_)));
F->nm_2597 = NULL;
F->nm_2597 = F->up->conf_system_231;
(*F->t_928) = F->up->ty_int_156;
if (eq_rt_gstr(F->p_2596, rt_g_lit("OPTION", 6))) {
(*F->t_928) = F->up->ty_bool_157;
if (eq_rt_gstr(F->a_2595, rt_g_lit("TIME", 4))) {
if (((F->up->conf_optimize_234 != NULL) && eq_rt_gstr((*(P140)rt_nil_check(F->up->conf_optimize_234)), rt_g_lit("TIME", 4)))) {
(*F->r_929) = f_mk_236(F->up, rt_g_lit("1", 1));
} else {
(*F->r_929) = f_mk_236(F->up, rt_g_lit("0", 1));
}
} else if (eq_rt_gstr(F->a_2595, rt_g_lit("SPACE", 5))) {
if (((F->up->conf_optimize_234 != NULL) && eq_rt_gstr((*(P140)rt_nil_check(F->up->conf_optimize_234)), rt_g_lit("SPACE", 5)))) {
(*F->r_929) = f_mk_236(F->up, rt_g_lit("1", 1));
} else {
(*F->r_929) = f_mk_236(F->up, rt_g_lit("0", 1));
}
} else {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_927)).line_), rt_g_lit("OPTION has the attributes TIME and SPACE (RM79 13.7)", 52));
}
} else if (eq_rt_gstr(F->a_2595, rt_g_lit("CLOCK", 5))) {
(*F->t_928) = F->up->ty_time_171;
(*F->r_929) = f_mk_236(F->up, rt_g_lit("((double)rt_time())", 19));
} else if (eq_rt_gstr(F->a_2595, rt_g_lit("MAX_PRIORITY", 12))) {
(*F->r_929) = f_mk_236(F->up, rt_g_lit("((rt_int)255)", 13));
} else if (eq_rt_gstr(F->a_2595, rt_g_lit("MIN_PRIORITY", 12))) {
(*F->r_929) = f_mk_236(F->up, rt_g_lit("((rt_int)0)", 11));
} else if (eq_rt_gstr(F->a_2595, rt_g_lit("NAME", 4))) {
if ((F->nm_2597 == NULL)) {
F->nm_2597 = f_mk_236(F->up, rt_g_lit("PALEO", 5));
}
(*F->t_928) = F->up->ty_string_160;
(*F->r_929) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_lit(", 9), f_c_string_804(F->up, (*(P140)rt_nil_check(F->nm_2597)))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(({ rt_gstr at2599 = (*(P140)rt_nil_check(F->nm_2597)); at2599.hi >= at2599.lo ? at2599.hi - at2599.lo + 1 : (rt_int)0; })))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_2595, rt_g_lit("STORAGE_UNIT", 12))) {
(*F->r_929) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->up->conf_storage_unit_232)))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_2595, rt_g_lit("MEMORY_SIZE", 11))) {
(*F->r_929) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->up->conf_memory_size_233)))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_2595, rt_g_lit("MAX_INT", 7))) {
(*F->r_929) = f_mk_236(F->up, rt_g_lit("INT64_MAX", 9));
} else if (eq_rt_gstr(F->a_2595, rt_g_lit("MIN_INT", 7))) {
(*F->r_929) = f_mk_236(F->up, rt_g_lit("(-INT64_MAX)", 12));
} else {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_927)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("SYSTEM has no attribute ", 24), F->a_2595), rt_g_lit(" (RM79 13.7)", 12)));
}
ret_:

  return;
}

static void f_attr_dim_934(struct f_greenc_1fr *up_, P174 e_931, P122 arrt_932, rt_int *n_933) {
  struct f_attr_dim_934fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_931 = e_931;
F->arrt_932 = arrt_932;
F->n_933 = n_933;
F->ok_2600 = INT_MIN;
(*F->n_933) = ((rt_int)1LL);
if (((*(P174)rt_nil_check(F->e_931)).b_ != NULL)) {
f_manifest_512(F->up, (*(P174)rt_nil_check(F->e_931)).b_, &(*F->n_933), &F->ok_2600);
 (void)rt_range(F->ok_2600, 0, 1);
if ((!G_NV(F->ok_2600))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_931)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the index number of ", 20), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_931)).name_))), rt_g_lit("(N) is static (RM79 App. A)", 27)));
}
}
if (((G_NV((*F->n_933)) < ((rt_int)1LL)) || (G_NV((*F->n_933)) > G_NV((*(P122)rt_nil_check(F->arrt_932)).dims_)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_931)).line_), cat_rt_gstr(cat_rt_gstr(f_kind_name_491(F->up, F->arrt_932), rt_g_lit(" has no index ", 14)), rt_g_s2g(rt_str_of_int(G_NV((*F->n_933))))));
}
ret_:

  return;
}

static void f_object_array_attr_940(struct f_greenc_1fr *up_, P174 e_935, P122 arrt_936, rt_gstr v_937, P122 *t_938, P140 *r_939) {
  struct f_object_array_attr_940fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_935 = e_935;
F->arrt_936 = arrt_936;
F->v_937 = cp_rt_gstr(v_937);
F->t_938 = t_938;
F->r_939 = r_939;
F->n_2601 = INT64_MIN;
F->it_2602 = NULL;
F->it_2602 = F->arrt_936;
F->ct_2603 = NULL;
F->tmp_2604 = NULL;
F->p_2605 = NULL;
F->lo_2606 = NULL;
F->hi_2607 = NULL;
f_attr_dim_934(F->up, F->e_935, F->arrt_936, &F->n_2601);
f_ctype_500(F->up, F->arrt_936, &F->ct_2603);
f_new_name_239(F->up, rt_g_lit("at", 2), &F->tmp_2604);
F->p_2605 = F->tmp_2604;
{ rt_int lo2610 = ((rt_int)2LL), hi2611 = G_NV(F->n_2601);
for (rt_int it2612 = lo2610; it2612 <= hi2611; it2612++) {
F->k_2609 = it2612;
F->it_2602 = (*(P122)rt_nil_check(F->it_2602)).elem_;
}
}
L_end_2608: ;
if ((G_NV(F->n_2601) == ((rt_int)1LL))) {
F->lo_2606 = f_mk_236(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->p_2605)), rt_g_lit(".lo", 3)));
F->hi_2607 = f_mk_236(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->p_2605)), rt_g_lit(".hi", 3)));
} else {
{ rt_int lo2615 = ((rt_int)3LL), hi2616 = G_NV(F->n_2601);
for (rt_int it2617 = lo2615; it2617 <= hi2616; it2617++) {
F->k_2614 = it2617;
F->p_2605 = f_mk_236(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->p_2605)), rt_g_lit(".p[0]", 5)));
}
}
L_end_2613: ;
F->lo_2606 = f_mk_236(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->p_2605)), rt_g_lit(".lo2", 4)));
F->hi_2607 = f_mk_236(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->p_2605)), rt_g_lit(".hi2", 4)));
}
(*F->t_938) = (*(P122)rt_nil_check(F->it_2602)).idx_;
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_935)).name_)), rt_g_lit("FIRST", 5))) {
(*F->r_939) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2603))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2604))), rt_g_lit(" = ", 3)), F->v_937), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->lo_2606))), rt_g_lit("; })", 4)));
} else if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_935)).name_)), rt_g_lit("LAST", 4))) {
(*F->r_939) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2603))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2604))), rt_g_lit(" = ", 3)), F->v_937), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->hi_2607))), rt_g_lit("; })", 4)));
} else {
(*F->t_938) = F->up->ty_int_156;
(*F->r_939) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2603))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2604))), rt_g_lit(" = ", 3)), F->v_937), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->hi_2607))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->lo_2606))), rt_g_lit(" \? ", 3)), (*(P140)rt_nil_check(F->hi_2607))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->lo_2606))), rt_g_lit(" + 1 : (rt_int)0; })", 20)));
}
ret_:

  return;
}

static void f_type_array_attr_946(struct f_greenc_1fr *up_, P174 e_941, P122 arrt_942, P178 c_943, P122 *t_944, P140 *r_945) {
  struct f_type_array_attr_946fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_941 = e_941;
F->arrt_942 = arrt_942;
F->c_943 = c_943;
F->t_944 = t_944;
F->r_945 = r_945;
F->n_2618 = INT64_MIN;
F->it_2619 = NULL;
F->it_2619 = F->arrt_942;
F->cc_2620 = NULL;
F->cc_2620 = F->c_943;
f_attr_dim_934(F->up, F->e_941, F->arrt_942, &F->n_2618);
{ rt_int lo2623 = ((rt_int)2LL), hi2624 = G_NV(F->n_2618);
for (rt_int it2625 = lo2623; it2625 <= hi2624; it2625++) {
F->k_2622 = it2625;
F->it_2619 = (*(P122)rt_nil_check(F->it_2619)).elem_;
if ((F->cc_2620 != NULL)) {
F->cc_2620 = (*(P178)rt_nil_check(F->cc_2620)).inner_;
}
}
}
L_end_2621: ;
if (((F->cc_2620 == NULL) || ((*(P178)rt_nil_check(F->cc_2620)).lo_ == NULL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_941)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the bounds of ", 14), f_kind_name_491(F->up, F->arrt_942)), rt_g_lit(" are not known here: ", 21)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_941)).name_))), rt_g_lit(" applies to an array type with bounds (RM79 3.6)", 48)));
}
(*F->t_944) = (*(P122)rt_nil_check(F->it_2619)).idx_;
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_941)).name_)), rt_g_lit("FIRST", 5))) {
(*F->r_945) = (*(P178)rt_nil_check(F->cc_2620)).lo_;
} else if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_941)).name_)), rt_g_lit("LAST", 4))) {
(*F->r_945) = (*(P178)rt_nil_check(F->cc_2620)).hi_;
} else {
(*F->t_944) = F->up->ty_int_156;
(*F->r_945) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ rt_int l_ = ", 15), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->cc_2620)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->cc_2620)).hi_))), rt_g_lit("; h_ >= l_ \? h_ - l_ + 1 : (rt_int)0; })", 40)));
}
ret_:

  return;
}

static void f_lit_table_949(struct f_greenc_1fr *up_, P122 t_947, P140 *r_948) {
  struct f_lit_table_949fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_947 = t_947;
F->r_948 = r_948;
F->l_2626 = NULL;
F->l_2626 = (*(P122)rt_nil_check(F->t_947)).lits_;
F->s_2627 = NULL;
F->s_2627 = f_mk_236(F->up, rt_g_lit("", 0));
if (((*(P122)rt_nil_check(F->t_947)).littab_ == NULL)) {
f_new_name_239(F->up, rt_g_lit("lits", 4), &(*(P122)rt_nil_check(F->t_947)).littab_);
while ((F->l_2626 != NULL)) {
if ((({ rt_gstr at2629 = (*(P140)rt_nil_check(F->s_2627)); at2629.hi >= at2629.lo ? at2629.hi - at2629.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->s_2627 = f_mk_236(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->s_2627)), rt_g_lit(", ", 2)));
}
if ((G_NV((*(P174)rt_nil_check(F->l_2626)).kind_) == ((rt_int)3LL))) {
F->s_2627 = f_mk_236(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->s_2627)), f_c_string_804(F->up, cat_rt_gstr(cat_rt_gstr(f_q_254(F->up), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->l_2626)).name_))), f_q_254(F->up)))));
} else {
F->s_2627 = f_mk_236(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->s_2627)), f_c_string_804(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->l_2626)).name_)))));
}
F->l_2626 = (*(P174)rt_nil_check(F->l_2626)).next_;
}
L_end_2628: ;
f_put_to_261(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static const char *const ", 25), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_947)).littab_))), rt_g_lit("[] = {", 6)), (*(P140)rt_nil_check(F->s_2627))), rt_g_lit("};", 2)));
}
(*F->r_948) = (*(P122)rt_nil_check(F->t_947)).littab_;
ret_:

  return;
}

static void f_val_rep_955(struct f_greenc_1fr *up_, P174 e_950, P122 tt_951, P178 c_952, P122 *t_953, P140 *r_954) {
  struct f_val_rep_955fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_950 = e_950;
F->tt_951 = tt_951;
F->c_952 = c_952;
F->t_953 = t_953;
F->r_954 = r_954;
F->aty_2630 = NULL;
F->v_2631 = NULL;
F->lt_2632 = NULL;
F->n_2633 = INT64_MIN;
if (((*(P174)rt_nil_check(F->e_950)).b_ == NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_950)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_950)).name_))), rt_g_lit(" takes an argument", 18)));
}
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_950)).name_)), rt_g_lit("REP", 3))) {
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->e_950)).b_, F->tt_951, &F->aty_2630, &F->v_2631);
f_check_type_495(F->up, F->aty_2630, F->tt_951, G_NV((*(P174)rt_nil_check(F->e_950)).line_));
(*F->t_953) = F->up->ty_string_160;
if ((G_NV((*(P122)rt_nil_check(F->tt_951)).kind_) == ((rt_int)1LL))) {
(*F->r_954) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_str_of_int(", 14), (*(P140)rt_nil_check(F->v_2631))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->tt_951)).kind_) == ((rt_int)3LL))) {
(*F->r_954) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_image_float(", 17), (*(P140)rt_nil_check(F->v_2631))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->tt_951)).kind_) == ((rt_int)2LL))) {
(*F->r_954) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_bool_rep(", 14), (*(P140)rt_nil_check(F->v_2631))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->tt_951)).kind_) == ((rt_int)11LL))) {
(*F->r_954) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_char_rep(", 14), (*(P140)rt_nil_check(F->v_2631))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->tt_951)).kind_) == ((rt_int)4LL))) {
f_lit_table_949(F->up, F->tt_951, &F->lt_2632);
(*F->r_954) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_enum_rep(", 14), (*(P140)rt_nil_check(F->v_2631))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->lt_2632))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(f_list_len_316(F->up, (*(P122)rt_nil_check(F->tt_951)).lits_)))), one_rt_gstr(41)));
} else {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_950)).line_), rt_g_lit("REP is an attribute of scalar types", 35));
}
(*F->r_954) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_s2g(", 9), (*(P140)rt_nil_check((*F->r_954)))), one_rt_gstr(41)));
goto ret_;
}
(*F->t_953) = F->tt_951;
if ((G_NV((*(P122)rt_nil_check(F->tt_951)).kind_) == ((rt_int)1LL))) {
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->e_950)).b_, F->up->ty_string_160, &F->aty_2630, &F->v_2631);
f_check_type_495(F->up, F->aty_2630, F->up->ty_string_160, G_NV((*(P174)rt_nil_check(F->e_950)).line_));
(*F->r_954) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_int_of_str(rt_g_g2s(", 23), (*(P140)rt_nil_check(F->v_2631))), rt_g_lit("))", 2)));
if (f_bounded_483(F->up, F->c_952)) {
(*F->r_954) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P140)rt_nil_check((*F->r_954)))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_952)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_952)).hi_))), one_rt_gstr(41)));
}
} else if ((G_NV((*(P122)rt_nil_check(F->tt_951)).kind_) == ((rt_int)3LL))) {
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->e_950)).b_, F->up->ty_string_160, &F->aty_2630, &F->v_2631);
f_check_type_495(F->up, F->aty_2630, F->up->ty_string_160, G_NV((*(P174)rt_nil_check(F->e_950)).line_));
(*F->r_954) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_float_val(rt_g_g2s(", 24), (*(P140)rt_nil_check(F->v_2631))), rt_g_lit("))", 2)));
} else if ((((G_NV((*(P122)rt_nil_check(F->tt_951)).kind_) == ((rt_int)2LL)) || (G_NV((*(P122)rt_nil_check(F->tt_951)).kind_) == ((rt_int)11LL))) || (G_NV((*(P122)rt_nil_check(F->tt_951)).kind_) == ((rt_int)4LL)))) {
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->e_950)).b_, NULL, &F->aty_2630, &F->v_2631);
if (f_is_string_579(F->up, F->aty_2630)) {
F->v_2631 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_g2s(", 9), (*(P140)rt_nil_check(F->v_2631))), one_rt_gstr(41)));
if ((G_NV((*(P122)rt_nil_check(F->tt_951)).kind_) == ((rt_int)2LL))) {
F->v_2631 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_bool_val(", 14), (*(P140)rt_nil_check(F->v_2631))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->tt_951)).kind_) == ((rt_int)11LL))) {
F->v_2631 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_char_val(", 14), (*(P140)rt_nil_check(F->v_2631))), one_rt_gstr(41)));
} else {
f_lit_table_949(F->up, F->tt_951, &F->lt_2632);
F->v_2631 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_enum_val(", 14), (*(P140)rt_nil_check(F->v_2631))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->lt_2632))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(f_list_len_316(F->up, (*(P122)rt_nil_check(F->tt_951)).lits_)))), one_rt_gstr(41)));
}
} else {
f_check_type_495(F->up, F->aty_2630, F->up->ty_int_156, G_NV((*(P174)rt_nil_check(F->e_950)).line_));
F->v_2631 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->v_2631))), rt_g_lit(" - 1)", 5)));
}
(*F->r_954) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P140)rt_nil_check(F->v_2631))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_952)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_952)).hi_))), one_rt_gstr(41)));
} else {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_950)).line_), rt_g_lit("VAL is an attribute of scalar types", 35));
}
ret_:

  return;
}

static void f_allocator_960(struct f_greenc_1fr *up_, P174 e_956, P122 want_957, P122 *t_958, P140 *r_959) {
  struct f_allocator_960fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_956 = e_956;
F->want_957 = want_957;
F->t_958 = t_958;
F->r_959 = r_959;
F->y_2634 = NULL;
F->y_2634 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_956)).name_)));
F->target_2635 = NULL;
F->vt_2636 = NULL;
F->ct_2637 = NULL;
F->pt_2638 = NULL;
F->cell_2639 = NULL;
F->v_2640 = NULL;
F->x_2641 = NULL;
if (((F->want_957 == NULL) || (G_NV((*(P122)rt_nil_check(F->want_957)).kind_) != ((rt_int)8LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_956)).line_), rt_g_lit("the access type of this allocator is not known here", 51));
}
if (((F->y_2634 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_2634)).kind_) != ((rt_int)5LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_956)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_956)).name_)), rt_g_lit(" is not a type", 14)));
}
f_finish_ptr_616(F->up, F->want_957);
F->target_2635 = (*(P122)rt_nil_check(F->want_957)).target_;
if ((!f_same_452(F->up, (*(P117)rt_nil_check(F->y_2634)).t_, F->want_957))) {
f_check_type_495(F->up, (*(P117)rt_nil_check(F->y_2634)).t_, F->target_2635, G_NV((*(P174)rt_nil_check(F->e_956)).line_));
}
f_ctype_500(F->up, F->target_2635, &F->ct_2637);
f_ctype_500(F->up, F->want_957, &F->pt_2638);
f_new_name_239(F->up, rt_g_lit("cell", 4), &F->cell_2639);
if (((*(P174)rt_nil_check(F->e_956)).a_ == NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_956)).line_), rt_g_lit("an allocator gives the initial value: new T(...) (RM79 4.7)", 59));
}
if ((F->up->pure_sym_225 != NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_956)).line_), rt_g_lit("an allocator cannot appear in a function body (RM79 6.5)", 56));
}
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_956)).a_)).kind_) == ((rt_int)12LL))) {
f_aggregate_965(F->up, (*(P174)rt_nil_check(F->e_956)).a_, F->target_2635, &F->vt_2636, &F->v_2640);
} else {
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->e_956)).a_, F->target_2635, &F->vt_2636, &F->v_2640);
}
f_check_type_495(F->up, F->vt_2636, F->target_2635, G_NV((*(P174)rt_nil_check(F->e_956)).line_));
f_copy_code_632(F->up, F->target_2635, (*(P140)rt_nil_check(F->v_2640)), &F->x_2641);
(*F->t_958) = F->want_957;
(*F->r_959) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2637))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check(F->cell_2639))), rt_g_lit(" = rt_alloc(sizeof(", 19)), (*(P140)rt_nil_check(F->ct_2637))), rt_g_lit(")); *", 5)), (*(P140)rt_nil_check(F->cell_2639))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2641))), rt_g_lit("; (", 3)), (*(P140)rt_nil_check(F->pt_2638))), one_rt_gstr(41)), (*(P140)rt_nil_check(F->cell_2639))), rt_g_lit("; })", 4)));
ret_:

  return;
}

static void f_aggregate_965(struct f_greenc_1fr *up_, P174 e_961, P122 want_962, P122 *t_963, P140 *r_964) {
  struct f_aggregate_965fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_961 = e_961;
F->want_962 = want_962;
F->t_963 = t_963;
F->r_964 = r_964;
F->b_2642 = NULL;
F->b_2642 = F->up->agg_bounds_181;
F->up->agg_bounds_181 = NULL;
if ((F->want_962 == NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_961)).line_), rt_g_lit("the type of this aggregate is not known here: qualify it, T(...) (RM79 4.6)", 75));
}
(*F->t_963) = F->want_962;
if ((G_NV((*(P122)rt_nil_check(F->want_962)).kind_) == ((rt_int)7LL))) {
f_record_aggregate_987(F->up, F->e_961, F->want_962, &(*F->r_964));
} else if ((G_NV((*(P122)rt_nil_check(F->want_962)).kind_) == ((rt_int)6LL))) {
f_array_aggregate_1005(F->up, F->e_961, F->want_962, F->b_2642, &(*F->r_964));
} else {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_961)).line_), cat_rt_gstr(rt_g_lit("an aggregate builds a record or an array, not ", 46), f_kind_name_491(F->up, F->want_962)));
}
ret_:

  return;
}

static void f_captured_968(struct f_greenc_1fr *up_, P126 b_966, P140 *r_967) {
  struct f_captured_968fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_966 = b_966;
F->r_967 = r_967;
F->l_2643 = NULL;
F->l_2643 = (*(P126)rt_nil_check(F->b_966)).head_;
(*F->r_967) = f_mk_236(F->up, rt_g_lit("", 0));
while ((F->l_2643 != NULL)) {
(*F->r_967) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->r_967))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P151)rt_nil_check(F->l_2643)).s_))));
F->l_2643 = (*(P151)rt_nil_check(F->l_2643)).next_;
}
L_end_2644: ;
ret_:

  return;
}

static P1905 f_field_at_971(struct f_greenc_1fr *up_, P122 rt_969, rt_int k_970) {
  struct f_field_at_971fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->rt_969 = rt_969;
F->k_970 = k_970;
F->f_2645 = NULL;
F->f_2645 = (*(P122)rt_nil_check(F->rt_969)).fields_;
{ rt_int lo2648 = ((rt_int)2LL), hi2649 = F->k_970;
for (rt_int it2650 = lo2648; it2650 <= hi2649; it2650++) {
F->i_2647 = it2650;
F->f_2645 = (*(P1905)rt_nil_check(F->f_2645)).next_;
}
}
L_end_2646: ;
F->result_ = F->f_2645;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_names_field_974(struct f_greenc_1fr *up_, P174 x_972, P1905 f_973) {
  struct f_names_field_974fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_972 = x_972;
F->f_973 = f_973;
if ((G_NV((*(P174)rt_nil_check(F->x_972)).kind_) != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_972)).name_)), (*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_973)).name_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P174 f_item_for_979(struct f_greenc_1fr *up_, P174 e_975, P122 rt_976, rt_int k_977, rt_int p_978) {
  struct f_item_for_979fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_975 = e_975;
F->rt_976 = rt_976;
F->k_977 = k_977;
F->p_978 = p_978;
F->it_2651 = NULL;
F->it_2651 = (*(P174)rt_nil_check(F->e_975)).a_;
F->lab_2652 = NULL;
F->n_2653 = INT64_MIN;
F->n_2653 = ((rt_int)0LL);
while ((F->it_2651 != NULL)) {
if (((*(P174)rt_nil_check(F->it_2651)).a_ == NULL)) {
F->n_2653 = rt_add(G_NV(F->n_2653), ((rt_int)1LL));
if ((G_NV(F->n_2653) == F->p_978)) {
F->result_ = (*(P174)rt_nil_check(F->it_2651)).b_;
goto ret_;
}
} else {
F->lab_2652 = (*(P174)rt_nil_check(F->it_2651)).a_;
while ((F->lab_2652 != NULL)) {
if (((G_NV((*(P174)rt_nil_check(F->lab_2652)).flag_) == ((rt_int)1LL)) || f_names_field_974(F->up, (*(P174)rt_nil_check(F->lab_2652)).a_, f_field_at_971(F->up, F->rt_976, F->k_977)))) {
F->result_ = (*(P174)rt_nil_check(F->it_2651)).b_;
goto ret_;
}
F->lab_2652 = (*(P174)rt_nil_check(F->lab_2652)).next_;
}
L_end_2655: ;
}
F->it_2651 = (*(P174)rt_nil_check(F->it_2651)).next_;
}
L_end_2654: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_arm_holds_983(struct f_greenc_1fr *up_, P174 arm_980, rt_int v_981, int *res_982) {
  struct f_arm_holds_983fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->arm_980 = arm_980;
F->v_981 = v_981;
F->res_982 = res_982;
F->l_2656 = NULL;
F->l_2656 = (*(P174)rt_nil_check(F->arm_980)).a_;
F->lo_2657 = INT64_MIN;
F->hi_2658 = INT64_MIN;
F->ok_2659 = INT_MIN;
(*F->res_982) = 0;
while ((F->l_2656 != NULL)) {
f_static_choice_1000(F->up, (*(P174)rt_nil_check(F->l_2656)).a_, &F->lo_2657, &F->ok_2659);
 (void)rt_range(F->ok_2659, 0, 1);
F->hi_2658 = G_NV(F->lo_2657);
if (((*(P174)rt_nil_check(F->l_2656)).b_ != NULL)) {
f_static_choice_1000(F->up, (*(P174)rt_nil_check(F->l_2656)).b_, &F->hi_2658, &F->ok_2659);
 (void)rt_range(F->ok_2659, 0, 1);
}
if (((F->v_981 >= G_NV(F->lo_2657)) && (F->v_981 <= G_NV(F->hi_2658)))) {
(*F->res_982) = 1;
}
F->l_2656 = (*(P174)rt_nil_check(F->l_2656)).next_;
}
L_end_2660: ;
ret_:

  return;
}

static void f_record_aggregate_987(struct f_greenc_1fr *up_, P174 e_984, P122 rt_985, P140 *r_986) {
  struct f_record_aggregate_987fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_984 = e_984;
F->rt_985 = rt_985;
F->r_986 = r_986;
F->it_2661 = NULL;
F->it_2661 = (*(P174)rt_nil_check(F->e_984)).a_;
F->lab_2662 = NULL;
F->vn_2663 = NULL;
F->a_2664 = NULL;
F->f_2665 = NULL;
F->g_2666 = NULL;
F->n_2667 = INT64_MIN;
F->n_2667 = f_field_count_497(F->up, F->rt_985);
F->done_2669.lo = ((rt_int)1LL); F->done_2669.hi = ((rt_int)200LL);
F->done_2669.lo2 = 1; F->done_2669.hi2 = 1;
F->done_2669.p = rt_alloc(sizeof(int) * (size_t)G_CNT(F->done_2669));
for (rt_int i2670 = 0; i2670 < G_CNT(F->done_2669); i2670++) F->done_2669.p[i2670] = INT_MIN;
F->active_2671.lo = ((rt_int)1LL); F->active_2671.hi = ((rt_int)200LL);
F->active_2671.lo2 = 1; F->active_2671.hi2 = 1;
F->active_2671.p = rt_alloc(sizeof(int) * (size_t)G_CNT(F->active_2671));
for (rt_int i2672 = 0; i2672 < G_CNT(F->active_2671); i2672++) F->active_2671.p[i2672] = INT_MIN;
F->dvs_2674.lo = ((rt_int)1LL); F->dvs_2674.hi = ((rt_int)200LL);
F->dvs_2674.lo2 = 1; F->dvs_2674.hi2 = 1;
F->dvs_2674.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->dvs_2674));
for (rt_int i2675 = 0; i2675 < G_CNT(F->dvs_2674); i2675++) F->dvs_2674.p[i2675] = INT64_MIN;
F->order_2677.lo = ((rt_int)1LL); F->order_2677.hi = ((rt_int)200LL);
F->order_2677.lo2 = 1; F->order_2677.hi2 = 1;
F->order_2677.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->order_2677));
for (rt_int i2678 = 0; i2678 < G_CNT(F->order_2677); i2678++) F->order_2677.p[i2678] = INT64_MIN;
F->norder_2679 = INT64_MIN;
F->norder_2679 = ((rt_int)0LL);
F->nung_2680 = INT64_MIN;
F->nung_2680 = ((rt_int)0LL);
F->k_2681 = INT64_MIN;
F->k_2681 = ((rt_int)0LL);
F->d_2682 = INT64_MIN;
F->d_2682 = ((rt_int)0LL);
F->npos_2683 = INT64_MIN;
F->npos_2683 = ((rt_int)0LL);
F->saved_2684 = NULL;
F->saved_2684 = F->up->code_136;
F->ct_2685 = NULL;
F->tmp_2686 = NULL;
F->parts_2687 = NULL;
F->named_2688 = INT_MIN;
F->named_2688 = 0;
F->ok_2689 = INT_MIN;
F->ok_2689 = 0;
F->holds_2690 = INT_MIN;
F->holds_2690 = 0;
if ((G_NV((*(P122)rt_nil_check(F->rt_985)).priv_) && (!f_inside_package_1064(F->up, (*(P122)rt_nil_check(F->rt_985)).decl_)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_984)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("an aggregate of private type ", 29), f_kind_name_491(F->up, F->rt_985)), rt_g_lit(" is not allowed here (RM79 7.4)", 31)));
}
if ((G_NV(F->n_2667) > ((rt_int)200LL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_984)).line_), rt_g_lit("a record of more than 200 components", 36));
}
F->f_2665 = (*(P122)rt_nil_check(F->rt_985)).fields_;
{ rt_int lo2693 = ((rt_int)1LL), hi2694 = G_NV(F->n_2667);
for (rt_int it2695 = lo2693; it2695 <= hi2694; it2695++) {
F->i_2692 = it2695;
(*({ A2668 *ix2696 = &(F->done_2669); &ix2696->p[rt_index(F->i_2692, ix2696->lo, ix2696->hi) - ix2696->lo]; })) = 0;
(*({ A2668 *ix2697 = &(F->active_2671); &ix2697->p[rt_index(F->i_2692, ix2697->lo, ix2697->hi) - ix2697->lo]; })) = ((*(P1905)rt_nil_check(F->f_2665)).guard_ == NULL);
if (G_NV(({ A2668 ix2698 = F->active_2671; ix2698.p[rt_index(F->i_2692, ix2698.lo, ix2698.hi) - ix2698.lo]; }))) {
F->norder_2679 = rt_add(G_NV(F->norder_2679), ((rt_int)1LL));
(*({ A2676 *ix2699 = &(F->order_2677); &ix2699->p[rt_index(G_NV(F->norder_2679), ix2699->lo, ix2699->hi) - ix2699->lo]; })) = F->i_2692;
}
F->f_2665 = (*(P1905)rt_nil_check(F->f_2665)).next_;
}
}
L_end_2691: ;
F->nung_2680 = G_NV(F->norder_2679);
{ rt_int lo2702 = ((rt_int)1LL), hi2703 = G_NV(F->nung_2680);
for (rt_int it2704 = lo2702; it2704 <= hi2703; it2704++) {
F->p_2701 = it2704;
F->f_2665 = f_field_at_971(F->up, F->rt_985, G_NV(({ A2676 ix2706 = F->order_2677; ix2706.p[rt_index(F->p_2701, ix2706.lo, ix2706.hi) - ix2706.lo]; })));
if (G_NV((*(P1905)rt_nil_check(F->f_2665)).is_discr_)) {
F->vn_2663 = f_item_for_979(F->up, F->e_984, F->rt_985, G_NV(({ A2676 ix2708 = F->order_2677; ix2708.p[rt_index(F->p_2701, ix2708.lo, ix2708.hi) - ix2708.lo]; })), F->p_2701);
if ((F->vn_2663 == NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_984)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("no value for discriminant ", 26), (*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_2665)).name_))), rt_g_lit(" (RM79 3.7.3)", 13)));
}
f_static_choice_1000(F->up, F->vn_2663, &(*({ A2673 *ix2712 = &(F->dvs_2674); &ix2712->p[rt_index(G_NV(({ A2676 ix2711 = F->order_2677; ix2711.p[rt_index(F->p_2701, ix2711.lo, ix2711.hi) - ix2711.lo]; })), ix2712->lo, ix2712->hi) - ix2712->lo]; })), &F->ok_2689);
 (void)rt_range(F->ok_2689, 0, 1);
if (((!G_NV(F->ok_2689)) && f_is_enum_lit_802(F->up, F->vn_2663))) {
F->ok_2689 = 1;
(*({ A2673 *ix2714 = &(F->dvs_2674); &ix2714->p[rt_index(G_NV(({ A2676 ix2713 = F->order_2677; ix2713.p[rt_index(F->p_2701, ix2713.lo, ix2713.hi) - ix2713.lo]; })), ix2714->lo, ix2714->hi) - ix2714->lo]; })) = G_NV((*(P117)rt_nil_check(f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->vn_2663)).name_))))).mvalue_);
}
if (((!G_NV(F->ok_2689)) && ((*(P122)rt_nil_check(F->rt_985)).fields_ != NULL))) {
F->g_2666 = NULL;
F->d_2682 = ((rt_int)0LL);
F->a_2664 = NULL;
F->f_2665 = (*(P122)rt_nil_check(F->rt_985)).fields_;
while ((F->f_2665 != NULL)) {
F->g_2666 = (*(P1905)rt_nil_check(F->f_2665)).guard_;
while ((F->g_2666 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P2030)rt_nil_check(F->g_2666)).disc_)), (*(P140)rt_nil_check((*(P1905)rt_nil_check(f_field_at_971(F->up, F->rt_985, G_NV(({ A2676 ix2718 = F->order_2677; ix2718.p[rt_index(F->p_2701, ix2718.lo, ix2718.hi) - ix2718.lo]; }))))).name_)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_984)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the value of discriminant ", 26), (*(P140)rt_nil_check((*(P2030)rt_nil_check(F->g_2666)).disc_))), rt_g_lit(" in an aggregate is static (RM79 3.7.3)", 39)));
}
F->g_2666 = (*(P2030)rt_nil_check(F->g_2666)).next_;
}
L_end_2716: ;
F->f_2665 = (*(P1905)rt_nil_check(F->f_2665)).next_;
}
L_end_2715: ;
}
}
}
}
L_end_2700: ;
F->f_2665 = (*(P122)rt_nil_check(F->rt_985)).fields_;
{ rt_int lo2721 = ((rt_int)1LL), hi2722 = G_NV(F->n_2667);
for (rt_int it2723 = lo2721; it2723 <= hi2722; it2723++) {
F->i_2720 = it2723;
if (((*(P1905)rt_nil_check(F->f_2665)).guard_ != NULL)) {
F->holds_2690 = 1;
F->g_2666 = (*(P1905)rt_nil_check(F->f_2665)).guard_;
while ((F->g_2666 != NULL)) {
F->d_2682 = f_field_index_990(F->up, F->rt_985, (*(P140)rt_nil_check((*(P2030)rt_nil_check(F->g_2666)).disc_)));
if ((G_NV((*(P174)rt_nil_check((*(P2030)rt_nil_check(F->g_2666)).arm_)).flag_) == ((rt_int)1LL))) {
F->a_2664 = (*(P174)rt_nil_check((*(P2030)rt_nil_check(F->g_2666)).variant_)).b_;
while ((F->a_2664 != NULL)) {
if ((F->a_2664 != (*(P2030)rt_nil_check(F->g_2666)).arm_)) {
f_arm_holds_983(F->up, F->a_2664, G_NV(({ A2673 ix2727 = F->dvs_2674; ix2727.p[rt_index(G_NV(F->d_2682), ix2727.lo, ix2727.hi) - ix2727.lo]; })), &F->ok_2689);
 (void)rt_range(F->ok_2689, 0, 1);
if (G_NV(F->ok_2689)) {
F->holds_2690 = 0;
}
}
F->a_2664 = (*(P174)rt_nil_check(F->a_2664)).next_;
}
L_end_2725: ;
} else {
f_arm_holds_983(F->up, (*(P2030)rt_nil_check(F->g_2666)).arm_, G_NV(({ A2673 ix2729 = F->dvs_2674; ix2729.p[rt_index(G_NV(F->d_2682), ix2729.lo, ix2729.hi) - ix2729.lo]; })), &F->ok_2689);
 (void)rt_range(F->ok_2689, 0, 1);
if ((!G_NV(F->ok_2689))) {
F->holds_2690 = 0;
}
}
F->g_2666 = (*(P2030)rt_nil_check(F->g_2666)).next_;
}
L_end_2724: ;
if (G_NV(F->holds_2690)) {
(*({ A2668 *ix2730 = &(F->active_2671); &ix2730->p[rt_index(F->i_2720, ix2730->lo, ix2730->hi) - ix2730->lo]; })) = 1;
F->norder_2679 = rt_add(G_NV(F->norder_2679), ((rt_int)1LL));
(*({ A2676 *ix2731 = &(F->order_2677); &ix2731->p[rt_index(G_NV(F->norder_2679), ix2731->lo, ix2731->hi) - ix2731->lo]; })) = F->i_2720;
}
}
F->f_2665 = (*(P1905)rt_nil_check(F->f_2665)).next_;
}
}
L_end_2719: ;
f_ctype_500(F->up, F->rt_985, &F->ct_2685);
f_new_name_239(F->up, rt_g_lit("ag", 2), &F->tmp_2686);
F->up->code_136 = f_new_buffer_258(F->up);
while ((F->it_2661 != NULL)) {
if (((*(P174)rt_nil_check(F->it_2661)).a_ == NULL)) {
if (G_NV(F->named_2688)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_984)).line_), rt_g_lit("positional associations come before named ones (RM79 3.6.2)", 59));
}
F->npos_2683 = rt_add(G_NV(F->npos_2683), ((rt_int)1LL));
if ((G_NV(F->npos_2683) > G_NV(F->norder_2679))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_984)).line_), cat_rt_gstr(rt_g_lit("too many components in an aggregate of ", 39), f_kind_name_491(F->up, F->rt_985)));
}
F->k_2681 = G_NV(({ A2676 ix2733 = F->order_2677; ix2733.p[rt_index(G_NV(F->npos_2683), ix2733.lo, ix2733.hi) - ix2733.lo]; }));
f_agg_component_996(F->up, (*(P140)rt_nil_check(F->tmp_2686)), F->rt_985, G_NV(F->k_2681), (*(P174)rt_nil_check(F->it_2661)).b_, G_NV((*(P174)rt_nil_check(F->e_984)).line_));
(*({ A2668 *ix2734 = &(F->done_2669); &ix2734->p[rt_index(G_NV(F->k_2681), ix2734->lo, ix2734->hi) - ix2734->lo]; })) = 1;
} else {
F->named_2688 = 1;
F->lab_2662 = (*(P174)rt_nil_check(F->it_2661)).a_;
while ((F->lab_2662 != NULL)) {
if ((G_NV((*(P174)rt_nil_check(F->lab_2662)).flag_) == ((rt_int)1LL))) {
if (((*(P174)rt_nil_check(F->it_2661)).next_ != NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_984)).line_), rt_g_lit("others comes last in an aggregate (RM79 3.6.2)", 46));
}
{ rt_int lo2738 = ((rt_int)1LL), hi2739 = G_NV(F->n_2667);
for (rt_int it2740 = lo2738; it2740 <= hi2739; it2740++) {
F->i_2737 = it2740;
if ((G_NV(({ A2668 ix2741 = F->active_2671; ix2741.p[rt_index(F->i_2737, ix2741.lo, ix2741.hi) - ix2741.lo]; })) && (!G_NV(({ A2668 ix2742 = F->done_2669; ix2742.p[rt_index(F->i_2737, ix2742.lo, ix2742.hi) - ix2742.lo]; }))))) {
f_agg_component_996(F->up, (*(P140)rt_nil_check(F->tmp_2686)), F->rt_985, F->i_2737, (*(P174)rt_nil_check(F->it_2661)).b_, G_NV((*(P174)rt_nil_check(F->e_984)).line_));
(*({ A2668 *ix2743 = &(F->done_2669); &ix2743->p[rt_index(F->i_2737, ix2743->lo, ix2743->hi) - ix2743->lo]; })) = 1;
}
}
}
L_end_2736: ;
} else {
if (((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2662)).a_)).kind_) != ((rt_int)5LL)) || ((*(P174)rt_nil_check(F->lab_2662)).b_ != NULL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_984)).line_), rt_g_lit("a choice in a record aggregate names a component (RM79 3.6.2)", 61));
}
F->k_2681 = f_field_index_990(F->up, F->rt_985, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2662)).a_)).name_)));
if ((G_NV(F->k_2681) == ((rt_int)0LL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_984)).line_), cat_rt_gstr(cat_rt_gstr(f_kind_name_491(F->up, F->rt_985), rt_g_lit(" has no component ", 18)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2662)).a_)).name_))));
}
if ((!G_NV(({ A2668 ix2744 = F->active_2671; ix2744.p[rt_index(G_NV(F->k_2681), ix2744.lo, ix2744.hi) - ix2744.lo]; })))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_984)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("component ", 10), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2662)).a_)).name_))), rt_g_lit(" is not in the variant selected (RM79 3.7.3)", 44)));
}
if (G_NV(({ A2668 ix2745 = F->done_2669; ix2745.p[rt_index(G_NV(F->k_2681), ix2745.lo, ix2745.hi) - ix2745.lo]; }))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_984)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("component ", 10), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2662)).a_)).name_))), rt_g_lit(" is given twice in an aggregate (RM79 3.6.2)", 44)));
}
f_agg_component_996(F->up, (*(P140)rt_nil_check(F->tmp_2686)), F->rt_985, G_NV(F->k_2681), (*(P174)rt_nil_check(F->it_2661)).b_, G_NV((*(P174)rt_nil_check(F->e_984)).line_));
(*({ A2668 *ix2746 = &(F->done_2669); &ix2746->p[rt_index(G_NV(F->k_2681), ix2746->lo, ix2746->hi) - ix2746->lo]; })) = 1;
}
F->lab_2662 = (*(P174)rt_nil_check(F->lab_2662)).next_;
}
L_end_2735: ;
}
F->it_2661 = (*(P174)rt_nil_check(F->it_2661)).next_;
}
L_end_2732: ;
F->f_2665 = (*(P122)rt_nil_check(F->rt_985)).fields_;
{ rt_int lo2749 = ((rt_int)1LL), hi2750 = G_NV(F->n_2667);
for (rt_int it2751 = lo2749; it2751 <= hi2750; it2751++) {
F->i_2748 = it2751;
if ((G_NV(({ A2668 ix2752 = F->active_2671; ix2752.p[rt_index(F->i_2748, ix2752.lo, ix2752.hi) - ix2752.lo]; })) && (!G_NV(({ A2668 ix2753 = F->done_2669; ix2753.p[rt_index(F->i_2748, ix2753.lo, ix2753.hi) - ix2753.lo]; }))))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_984)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("an aggregate gives every component of ", 38), f_kind_name_491(F->up, F->rt_985)), rt_g_lit(": ", 2)), (*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_2665)).name_))), rt_g_lit(" is missing (RM79 3.6.2)", 24)));
}
F->f_2665 = (*(P1905)rt_nil_check(F->f_2665)).next_;
}
}
L_end_2747: ;
f_captured_968(F->up, F->up->code_136, &F->parts_2687);
F->up->code_136 = F->saved_2684;
(*F->r_986) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2685))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2686))), one_rt_gstr(59)), (*(P140)rt_nil_check(F->parts_2687))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2686))), rt_g_lit("; })", 4)));
ret_:

  return;
}

static rt_int f_field_index_990(struct f_greenc_1fr *up_, P122 rt_988, rt_gstr name_989) {
  struct f_field_index_990fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->rt_988 = rt_988;
F->name_989 = cp_rt_gstr(name_989);
F->f_2754 = NULL;
F->f_2754 = (*(P122)rt_nil_check(F->rt_988)).fields_;
F->k_2755 = INT64_MIN;
F->k_2755 = ((rt_int)1LL);
while ((F->f_2754 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_2754)).name_)), F->name_989)) {
F->result_ = G_NV(F->k_2755);
goto ret_;
}
F->k_2755 = rt_add(G_NV(F->k_2755), ((rt_int)1LL));
F->f_2754 = (*(P1905)rt_nil_check(F->f_2754)).next_;
}
L_end_2756: ;
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_agg_component_996(struct f_greenc_1fr *up_, rt_gstr tmp_991, P122 rt_992, rt_int k_993, P174 v_994, rt_int line_995) {
  struct f_agg_component_996fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->tmp_991 = cp_rt_gstr(tmp_991);
F->rt_992 = rt_992;
F->k_993 = k_993;
F->v_994 = v_994;
F->line_995 = line_995;
F->f_2757 = NULL;
F->f_2757 = (*(P122)rt_nil_check(F->rt_992)).fields_;
F->vt_2758 = NULL;
F->x_2759 = NULL;
F->y_2760 = NULL;
{ rt_int lo2763 = ((rt_int)2LL), hi2764 = F->k_993;
for (rt_int it2765 = lo2763; it2765 <= hi2764; it2765++) {
F->i_2762 = it2765;
F->f_2757 = (*(P1905)rt_nil_check(F->f_2757)).next_;
}
}
L_end_2761: ;
f_gexpr_819(F->up, F->v_994, (*(P1905)rt_nil_check(F->f_2757)).t_, &F->vt_2758, &F->x_2759);
f_check_type_495(F->up, F->vt_2758, (*(P1905)rt_nil_check(F->f_2757)).t_, F->line_995);
if (((G_NV((*(P122)rt_nil_check((*(P1905)rt_nil_check(F->f_2757)).t_)).kind_) == ((rt_int)6LL)) && (!f_bounded_483(F->up, (*(P1905)rt_nil_check(F->f_2757)).c_)))) {
f_copy_code_632(F->up, (*(P1905)rt_nil_check(F->f_2757)).t_, (*(P140)rt_nil_check(F->x_2759)), &F->y_2760);
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->tmp_991, one_rt_gstr(46)), f_c_field_253(F->up, (*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_2757)).name_)))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->y_2760))), one_rt_gstr(59)));
} else {
if (f_composite_622(F->up, (*(P1905)rt_nil_check(F->f_2757)).t_)) {
f_init_storage_620(F->up, cat_rt_gstr(cat_rt_gstr(F->tmp_991, one_rt_gstr(46)), f_c_field_253(F->up, (*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_2757)).name_)))), (*(P1905)rt_nil_check(F->f_2757)).t_, (*(P1905)rt_nil_check(F->f_2757)).c_);
}
f_assign_code_628(F->up, cat_rt_gstr(cat_rt_gstr(F->tmp_991, one_rt_gstr(46)), f_c_field_253(F->up, (*(P140)rt_nil_check((*(P1905)rt_nil_check(F->f_2757)).name_)))), (*(P1905)rt_nil_check(F->f_2757)).t_, (*(P140)rt_nil_check(F->x_2759)), (*(P1905)rt_nil_check(F->f_2757)).c_, &F->y_2760);
f_emit_263(F->up, (*(P140)rt_nil_check(F->y_2760)));
}
ret_:

  return;
}

static void f_static_choice_1000(struct f_greenc_1fr *up_, P174 x_997, rt_int *v_998, int *ok_999) {
  struct f_static_choice_1000fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_997 = x_997;
F->v_998 = v_998;
F->ok_999 = ok_999;
if (f_is_char_lit_800(F->up, F->x_997)) {
(*F->ok_999) = 1;
(*F->v_998) = rt_sub(((rt_int)(G_NV(({ rt_gstr ix2766 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_997)).name_)); ix2766.p[rt_index(((rt_int)1LL), ix2766.lo, ix2766.hi) - ix2766.lo]; }))) + 1), ((rt_int)1LL));
goto ret_;
}
f_manifest_512(F->up, F->x_997, &(*F->v_998), &(*F->ok_999));
 (void)rt_range((*F->ok_999), 0, 1);
ret_:

  return;
}

static void f_array_aggregate_1005(struct f_greenc_1fr *up_, P174 e_1001, P122 arrt_1002, P140 bounds_1003, P140 *r_1004) {
  struct f_array_aggregate_1005fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1001 = e_1001;
F->arrt_1002 = arrt_1002;
F->bounds_1003 = bounds_1003;
F->r_1004 = r_1004;
F->it_2767 = NULL;
F->it_2767 = (*(P174)rt_nil_check(F->e_1001)).a_;
F->lab_2768 = NULL;
F->others_it_2769 = NULL;
F->np_2770 = INT64_MIN;
F->np_2770 = ((rt_int)0LL);
F->nnamed_2771 = INT64_MIN;
F->nnamed_2771 = ((rt_int)0LL);
F->clo_2772 = INT64_MIN;
F->clo_2772 = ((rt_int)0LL);
F->chi_2773 = INT64_MIN;
F->chi_2773 = ((rt_int)0LL);
F->v1_2774 = INT64_MIN;
F->v1_2774 = ((rt_int)0LL);
F->v2_2775 = INT64_MIN;
F->v2_2775 = ((rt_int)0LL);
F->all_static_2776 = INT_MIN;
F->all_static_2776 = 1;
F->ok_2777 = INT_MIN;
F->ok_2777 = 1;
F->ok2_2778 = INT_MIN;
F->ok2_2778 = 1;
F->first_choice_2779 = INT_MIN;
F->first_choice_2779 = 1;
F->vt_2780 = NULL;
F->ct_2781 = NULL;
F->et_2782 = NULL;
F->tmp_2783 = NULL;
F->lo_2784 = NULL;
F->hi_2785 = NULL;
F->v_2786 = NULL;
F->x_2787 = NULL;
F->parts_2788 = NULL;
F->fill_2789 = NULL;
F->rowb_2790 = NULL;
F->key_2791 = NULL;
F->khi_2792 = NULL;
F->saved_2793 = NULL;
F->saved_2793 = F->up->code_136;
f_ctype_500(F->up, F->arrt_1002, &F->ct_2781);
f_elem_ctype_574(F->up, (*(P122)rt_nil_check(F->arrt_1002)).elem_, &F->et_2782);
f_new_name_239(F->up, rt_g_lit("ag", 2), &F->tmp_2783);
while ((F->it_2767 != NULL)) {
if (((*(P174)rt_nil_check(F->it_2767)).a_ == NULL)) {
if (((G_NV(F->nnamed_2771) > ((rt_int)0LL)) || (F->others_it_2769 != NULL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1001)).line_), rt_g_lit("positional associations come before named ones (RM79 3.6.2)", 59));
}
F->np_2770 = rt_add(G_NV(F->np_2770), ((rt_int)1LL));
} else if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->it_2767)).a_)).flag_) == ((rt_int)1LL))) {
if ((((*(P174)rt_nil_check(F->it_2767)).next_ != NULL) || ((*(P174)rt_nil_check((*(P174)rt_nil_check(F->it_2767)).a_)).next_ != NULL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1001)).line_), rt_g_lit("others comes last in an aggregate (RM79 3.6.2)", 46));
}
F->others_it_2769 = F->it_2767;
} else {
F->nnamed_2771 = rt_add(G_NV(F->nnamed_2771), ((rt_int)1LL));
F->lab_2768 = (*(P174)rt_nil_check(F->it_2767)).a_;
while ((F->lab_2768 != NULL)) {
f_static_choice_1000(F->up, (*(P174)rt_nil_check(F->lab_2768)).a_, &F->v1_2774, &F->ok_2777);
 (void)rt_range(F->ok_2777, 0, 1);
F->v2_2775 = G_NV(F->v1_2774);
if (((*(P174)rt_nil_check(F->lab_2768)).b_ != NULL)) {
f_static_choice_1000(F->up, (*(P174)rt_nil_check(F->lab_2768)).b_, &F->v2_2775, &F->ok2_2778);
 (void)rt_range(F->ok2_2778, 0, 1);
F->ok_2777 = (G_NV(F->ok_2777) && G_NV(F->ok2_2778));
}
if ((!G_NV(F->ok_2777))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1001)).line_), rt_g_lit("a choice in an array aggregate is static (RM79 3.6.2)", 53));
}
if ((G_NV(F->first_choice_2779) || (G_NV(F->v1_2774) < G_NV(F->clo_2772)))) {
F->clo_2772 = G_NV(F->v1_2774);
}
if ((G_NV(F->first_choice_2779) || (G_NV(F->v2_2775) > G_NV(F->chi_2773)))) {
F->chi_2773 = G_NV(F->v2_2775);
}
F->first_choice_2779 = 0;
F->lab_2768 = (*(P174)rt_nil_check(F->lab_2768)).next_;
}
L_end_2795: ;
}
F->it_2767 = (*(P174)rt_nil_check(F->it_2767)).next_;
}
L_end_2794: ;
if (((G_NV(F->np_2770) > ((rt_int)0LL)) && (G_NV(F->nnamed_2771) > ((rt_int)0LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1001)).line_), rt_g_lit("an array aggregate is positional or named, with others last (RM79 3.6.2)", 72));
}
if ((G_NV(F->nnamed_2771) > ((rt_int)0LL))) {
f_check_choices_1013(F->up, F->e_1001, F->arrt_1002, (F->others_it_2769 != NULL));
}
if (((F->others_it_2769 == NULL) && (G_NV(F->np_2770) > ((rt_int)0LL)))) {
f_first_index_577(F->up, F->arrt_1002, &F->lo_2784);
F->hi_2785 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->lo_2784))), rt_g_lit(" + ", 3)), rt_g_s2g(rt_str_of_int(rt_sub(G_NV(F->np_2770), ((rt_int)1LL))))), one_rt_gstr(41)));
} else if (((F->others_it_2769 == NULL) && (G_NV(F->nnamed_2771) > ((rt_int)0LL)))) {
F->lo_2784 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->clo_2772)))), rt_g_lit("LL)", 3)));
F->hi_2785 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->chi_2773)))), rt_g_lit("LL)", 3)));
} else if ((((*(P122)rt_nil_check(F->arrt_1002)).tcons_ != NULL) && ((*(P178)rt_nil_check((*(P122)rt_nil_check(F->arrt_1002)).tcons_)).hi_ != NULL))) {
F->lo_2784 = (*(P178)rt_nil_check((*(P122)rt_nil_check(F->arrt_1002)).tcons_)).lo_;
F->hi_2785 = (*(P178)rt_nil_check((*(P122)rt_nil_check(F->arrt_1002)).tcons_)).hi_;
} else if ((F->bounds_1003 != NULL)) {
F->lo_2784 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->bounds_1003))), rt_g_lit(").lo", 4)));
F->hi_2785 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->bounds_1003))), rt_g_lit(").hi", 4)));
} else {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1001)).line_), rt_g_lit("an aggregate with others needs bounds from its context (RM79 3.6.2)", 67));
}
if (((G_NV((*(P122)rt_nil_check(F->arrt_1002)).dims_) > ((rt_int)1LL)) && (F->bounds_1003 != NULL))) {
F->rowb_2790 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((struct { rt_int lo, hi; }){ (", 31), (*(P140)rt_nil_check(F->bounds_1003))), rt_g_lit(").lo2, (", 8)), (*(P140)rt_nil_check(F->bounds_1003))), rt_g_lit(").hi2 })", 8)));
}
F->up->code_136 = f_new_buffer_258(F->up);
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->tmp_2783)), rt_g_lit(".lo = ", 6)), (*(P140)rt_nil_check(F->lo_2784))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->tmp_2783))), rt_g_lit(".hi = ", 6)), (*(P140)rt_nil_check(F->hi_2785))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->tmp_2783))), rt_g_lit(".lo2 = ", 7)), (*(P140)rt_nil_check(F->tmp_2783))), rt_g_lit(".hi2 = 1;", 9)));
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->tmp_2783)), rt_g_lit(".p = rt_alloc(sizeof(", 21)), (*(P140)rt_nil_check(F->et_2782))), rt_g_lit(") * (size_t)(G_CNT(", 19)), (*(P140)rt_nil_check(F->tmp_2783))), rt_g_lit(") + 1));", 8)));
if (((G_NV(F->np_2770) > ((rt_int)0LL)) && (F->others_it_2769 == NULL))) {
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (G_CNT(", 10), (*(P140)rt_nil_check(F->tmp_2783))), rt_g_lit(") != ", 5)), rt_g_s2g(rt_str_of_int(G_NV(F->np_2770)))), rt_g_lit(") rt_raise(RT_X_SUBSCRIPT);", 27)));
} else if ((G_NV(F->np_2770) > ((rt_int)0LL))) {
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (G_CNT(", 10), (*(P140)rt_nil_check(F->tmp_2783))), rt_g_lit(") < ", 4)), rt_g_s2g(rt_str_of_int(G_NV(F->np_2770)))), rt_g_lit(") rt_raise(RT_X_SUBSCRIPT);", 27)));
}
if ((F->others_it_2769 != NULL)) {
F->up->agg_bounds_181 = F->rowb_2790;
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->others_it_2769)).b_, (*(P122)rt_nil_check(F->arrt_1002)).elem_, &F->vt_2780, &F->v_2786);
F->up->agg_bounds_181 = NULL;
f_check_type_495(F->up, F->vt_2780, (*(P122)rt_nil_check(F->arrt_1002)).elem_, G_NV((*(P174)rt_nil_check(F->e_1001)).line_));
f_ctype_500(F->up, (*(P122)rt_nil_check(F->arrt_1002)).elem_, &F->x_2787);
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P140)rt_nil_check(F->x_2787))), rt_g_lit(" o_ = ", 6)), (*(P140)rt_nil_check(F->v_2786))), rt_g_lit("; for (rt_int k_ = 0; k_ < G_CNT(", 33)), (*(P140)rt_nil_check(F->tmp_2783))), rt_g_lit("); k_++) {", 10)));
f_copy_code_632(F->up, (*(P122)rt_nil_check(F->arrt_1002)).elem_, rt_g_lit("o_", 2), &F->x_2787);
f_element_store_1009(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->tmp_2783)), rt_g_lit(".p[k_]", 6)), F->arrt_1002, (*(P140)rt_nil_check(F->x_2787)));
f_emit_263(F->up, rt_g_lit("} }", 3));
}
F->it_2767 = (*(P174)rt_nil_check(F->e_1001)).a_;
F->np_2770 = ((rt_int)0LL);
while (((F->it_2767 != NULL) && (F->it_2767 != F->others_it_2769))) {
F->up->agg_bounds_181 = F->rowb_2790;
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->it_2767)).b_, (*(P122)rt_nil_check(F->arrt_1002)).elem_, &F->vt_2780, &F->v_2786);
F->up->agg_bounds_181 = NULL;
f_check_type_495(F->up, F->vt_2780, (*(P122)rt_nil_check(F->arrt_1002)).elem_, G_NV((*(P174)rt_nil_check(F->e_1001)).line_));
f_copy_code_632(F->up, (*(P122)rt_nil_check(F->arrt_1002)).elem_, (*(P140)rt_nil_check(F->v_2786)), &F->x_2787);
if (((*(P174)rt_nil_check(F->it_2767)).a_ == NULL)) {
f_element_store_1009(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->tmp_2783)), rt_g_lit(".p[", 3)), rt_g_s2g(rt_str_of_int(G_NV(F->np_2770)))), one_rt_gstr(93)), F->arrt_1002, (*(P140)rt_nil_check(F->x_2787)));
F->np_2770 = rt_add(G_NV(F->np_2770), ((rt_int)1LL));
} else {
f_new_name_239(F->up, rt_g_lit("av", 2), &F->v_2786);
f_ctype_500(F->up, (*(P122)rt_nil_check(F->arrt_1002)).elem_, &F->parts_2788);
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P140)rt_nil_check(F->parts_2788))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->v_2786))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2787))), one_rt_gstr(59)));
F->lab_2768 = (*(P174)rt_nil_check(F->it_2767)).a_;
while ((F->lab_2768 != NULL)) {
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->lab_2768)).a_, (*(P122)rt_nil_check(F->arrt_1002)).idx_, &F->vt_2780, &F->key_2791);
f_check_type_495(F->up, F->vt_2780, (*(P122)rt_nil_check(F->arrt_1002)).idx_, G_NV((*(P174)rt_nil_check(F->e_1001)).line_));
F->khi_2792 = F->key_2791;
if (((*(P174)rt_nil_check(F->lab_2768)).b_ != NULL)) {
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->lab_2768)).b_, (*(P122)rt_nil_check(F->arrt_1002)).idx_, &F->vt_2780, &F->khi_2792);
f_check_type_495(F->up, F->vt_2780, (*(P122)rt_nil_check(F->arrt_1002)).idx_, G_NV((*(P174)rt_nil_check(F->e_1001)).line_));
}
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = ", 17), (*(P140)rt_nil_check(F->key_2791))), rt_g_lit("; k_ <= ", 8)), (*(P140)rt_nil_check(F->khi_2792))), rt_g_lit("; k_++) {", 9)));
f_copy_code_632(F->up, (*(P122)rt_nil_check(F->arrt_1002)).elem_, (*(P140)rt_nil_check(F->v_2786)), &F->x_2787);
f_element_store_1009(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->tmp_2783)), rt_g_lit(".p[rt_index(k_, ", 16)), (*(P140)rt_nil_check(F->tmp_2783))), rt_g_lit(".lo, ", 5)), (*(P140)rt_nil_check(F->tmp_2783))), rt_g_lit(".hi) - ", 7)), (*(P140)rt_nil_check(F->tmp_2783))), rt_g_lit(".lo]", 4)), F->arrt_1002, (*(P140)rt_nil_check(F->x_2787)));
f_emit_263(F->up, rt_g_lit("}", 1));
F->lab_2768 = (*(P174)rt_nil_check(F->lab_2768)).next_;
}
L_end_2797: ;
f_emit_263(F->up, rt_g_lit("}", 1));
}
F->it_2767 = (*(P174)rt_nil_check(F->it_2767)).next_;
}
L_end_2796: ;
if ((G_NV((*(P122)rt_nil_check(F->arrt_1002)).dims_) > ((rt_int)1LL))) {
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (G_CNT(", 10), (*(P140)rt_nil_check(F->tmp_2783))), rt_g_lit(") > 0) { ", 9)), (*(P140)rt_nil_check(F->tmp_2783))), rt_g_lit(".lo2 = ", 7)), (*(P140)rt_nil_check(F->tmp_2783))), rt_g_lit(".p[0].lo; ", 10)), (*(P140)rt_nil_check(F->tmp_2783))), rt_g_lit(".hi2 = ", 7)), (*(P140)rt_nil_check(F->tmp_2783))), rt_g_lit(".p[0].hi; }", 11)));
}
f_captured_968(F->up, F->up->code_136, &F->parts_2788);
F->up->code_136 = F->saved_2793;
(*F->r_1004) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2781))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2783))), one_rt_gstr(59)), (*(P140)rt_nil_check(F->parts_2788))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2783))), rt_g_lit("; })", 4)));
ret_:

  return;
}

static void f_element_store_1009(struct f_greenc_1fr *up_, rt_gstr lv_1006, P122 arrt_1007, rt_gstr v_1008) {
  struct f_element_store_1009fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lv_1006 = cp_rt_gstr(lv_1006);
F->arrt_1007 = arrt_1007;
F->v_1008 = cp_rt_gstr(v_1008);
F->x_2798 = NULL;
if (((((*(P122)rt_nil_check(F->arrt_1007)).elemcons_ != NULL) && ((*(P178)rt_nil_check((*(P122)rt_nil_check(F->arrt_1007)).elemcons_)).lo_ != NULL)) && (!f_composite_622(F->up, (*(P122)rt_nil_check(F->arrt_1007)).elem_)))) {
f_assign_code_628(F->up, F->lv_1006, (*(P122)rt_nil_check(F->arrt_1007)).elem_, F->v_1008, (*(P122)rt_nil_check(F->arrt_1007)).elemcons_, &F->x_2798);
f_emit_263(F->up, (*(P140)rt_nil_check(F->x_2798)));
} else {
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lv_1006, rt_g_lit(" = ", 3)), F->v_1008), one_rt_gstr(59)));
}
ret_:

  return;
}

static void f_check_choices_1013(struct f_greenc_1fr *up_, P174 e_1010, P122 arrt_1011, int has_others_1012) {
  struct f_check_choices_1013fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1010 = e_1010;
F->arrt_1011 = arrt_1011;
F->has_others_1012 = has_others_1012;
F->a_2799 = NULL;
F->b_2800 = NULL;
F->lab_2801 = NULL;
F->lab2_2802 = NULL;
F->lo1_2803 = INT64_MIN;
F->lo1_2803 = ((rt_int)0LL);
F->hi1_2804 = INT64_MIN;
F->hi1_2804 = ((rt_int)0LL);
F->lo2_2805 = INT64_MIN;
F->lo2_2805 = ((rt_int)0LL);
F->hi2_2806 = INT64_MIN;
F->hi2_2806 = ((rt_int)0LL);
F->count_2807 = INT64_MIN;
F->count_2807 = ((rt_int)0LL);
F->ok_2808 = INT_MIN;
F->a_2799 = (*(P174)rt_nil_check(F->e_1010)).a_;
while ((F->a_2799 != NULL)) {
if ((((*(P174)rt_nil_check(F->a_2799)).a_ != NULL) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->a_2799)).a_)).flag_) != ((rt_int)1LL)))) {
F->lab_2801 = (*(P174)rt_nil_check(F->a_2799)).a_;
while ((F->lab_2801 != NULL)) {
f_static_choice_1000(F->up, (*(P174)rt_nil_check(F->lab_2801)).a_, &F->lo1_2803, &F->ok_2808);
 (void)rt_range(F->ok_2808, 0, 1);
F->hi1_2804 = G_NV(F->lo1_2803);
if (((*(P174)rt_nil_check(F->lab_2801)).b_ != NULL)) {
f_static_choice_1000(F->up, (*(P174)rt_nil_check(F->lab_2801)).b_, &F->hi1_2804, &F->ok_2808);
 (void)rt_range(F->ok_2808, 0, 1);
}
if ((G_NV(F->hi1_2804) >= G_NV(F->lo1_2803))) {
F->count_2807 = rt_add(G_NV(F->count_2807), rt_add(rt_sub(G_NV(F->hi1_2804), G_NV(F->lo1_2803)), ((rt_int)1LL)));
}
F->b_2800 = F->a_2799;
F->lab2_2802 = (*(P174)rt_nil_check(F->lab_2801)).next_;
while ((F->b_2800 != NULL)) {
if ((((*(P174)rt_nil_check(F->b_2800)).a_ != NULL) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->b_2800)).a_)).flag_) != ((rt_int)1LL)))) {
if ((F->b_2800 != F->a_2799)) {
F->lab2_2802 = (*(P174)rt_nil_check(F->b_2800)).a_;
}
while ((F->lab2_2802 != NULL)) {
f_static_choice_1000(F->up, (*(P174)rt_nil_check(F->lab2_2802)).a_, &F->lo2_2805, &F->ok_2808);
 (void)rt_range(F->ok_2808, 0, 1);
F->hi2_2806 = G_NV(F->lo2_2805);
if (((*(P174)rt_nil_check(F->lab2_2802)).b_ != NULL)) {
f_static_choice_1000(F->up, (*(P174)rt_nil_check(F->lab2_2802)).b_, &F->hi2_2806, &F->ok_2808);
 (void)rt_range(F->ok_2808, 0, 1);
}
if (((((G_NV(F->lo1_2803) <= G_NV(F->hi1_2804)) && (G_NV(F->lo2_2805) <= G_NV(F->hi2_2806))) && (G_NV(F->lo1_2803) <= G_NV(F->hi2_2806))) && (G_NV(F->lo2_2805) <= G_NV(F->hi1_2804)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1010)).line_), rt_g_lit("an index is given twice in an aggregate (RM79 3.6.2)", 52));
}
F->lab2_2802 = (*(P174)rt_nil_check(F->lab2_2802)).next_;
}
L_end_2812: ;
}
F->b_2800 = (*(P174)rt_nil_check(F->b_2800)).next_;
F->lab2_2802 = NULL;
}
L_end_2811: ;
F->lab_2801 = (*(P174)rt_nil_check(F->lab_2801)).next_;
}
L_end_2810: ;
}
F->a_2799 = (*(P174)rt_nil_check(F->a_2799)).next_;
}
L_end_2809: ;
if (((!F->has_others_1012) && f_static_bounds_487(F->up, (*(P122)rt_nil_check(F->arrt_1011)).tcons_))) {
if ((G_NV(F->count_2807) != rt_add(rt_sub(G_NV((*(P178)rt_nil_check((*(P122)rt_nil_check(F->arrt_1011)).tcons_)).mhi_), G_NV((*(P178)rt_nil_check((*(P122)rt_nil_check(F->arrt_1011)).tcons_)).mlo_)), ((rt_int)1LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1010)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the choices of an aggregate cover every index of ", 49), f_kind_name_491(F->up, F->arrt_1011)), rt_g_lit(" once, or others is given (RM79 3.6.2)", 38)));
}
}
ret_:

  return;
}

static P174 f_actual_for_1017(struct f_greenc_1fr *up_, P174 args_1014, P1887 pm_1015, P1887 first_1016) {
  struct f_actual_for_1017fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->args_1014 = args_1014;
F->pm_1015 = pm_1015;
F->first_1016 = first_1016;
F->a_2813 = NULL;
F->a_2813 = F->args_1014;
F->p_2814 = NULL;
F->p_2814 = F->first_1016;
while (((F->a_2813 != NULL) && ((*(P174)rt_nil_check(F->a_2813)).formal_ == NULL))) {
if ((F->p_2814 == F->pm_1015)) {
F->result_ = F->a_2813;
goto ret_;
}
F->p_2814 = (*(P1887)rt_nil_check(F->p_2814)).next_;
F->a_2813 = (*(P174)rt_nil_check(F->a_2813)).next_;
}
L_end_2815: ;
while ((F->a_2813 != NULL)) {
if ((((*(P174)rt_nil_check(F->a_2813)).formal_ != NULL) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_2813)).formal_)), (*(P140)rt_nil_check((*(P1887)rt_nil_check(F->pm_1015)).name_))))) {
F->result_ = F->a_2813;
goto ret_;
}
F->a_2813 = (*(P174)rt_nil_check(F->a_2813)).next_;
}
L_end_2816: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_gcall_1022(struct f_greenc_1fr *up_, P174 e_1018, int is_stmt_1019, P122 *t_1020, P140 *r_1021) {
  struct f_gcall_1022fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1018 = e_1018;
F->is_stmt_1019 = is_stmt_1019;
F->t_1020 = t_1020;
F->r_1021 = r_1021;
F->fn_2817 = NULL;
F->fn_2817 = (*(P174)rt_nil_check(F->e_1018)).a_;
F->nm_2818 = NULL;
F->y_2819 = NULL;
F->args_2820 = NULL;
F->lv_2821 = NULL;
F->v_2822 = NULL;
F->ct_2823 = NULL;
F->x_2824 = NULL;
F->a_2825 = NULL;
F->pm_2826 = NULL;
F->lt_2827 = NULL;
F->vt_2828 = NULL;
F->lc_2829 = NULL;
F->ro_2830 = INT_MIN;
f_expanded_837(F->up, F->fn_2817, &F->nm_2818);
if ((F->nm_2818 != NULL)) {
F->fn_2817 = F->nm_2818;
} else if ((((G_NV((*(P174)rt_nil_check(F->fn_2817)).kind_) == ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2817)).a_)).kind_) == ((rt_int)5LL))) && f_is_type_name_798(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2817)).a_)).name_))))) {
if ((!f_type_attribute_796(F->up, (*(P117)rt_nil_check(f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2817)).a_)).name_))))).t_, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2817)).name_))))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1018)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2817)).name_)), rt_g_lit(" is not a subprogram attribute of ", 34)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2817)).a_)).name_))), rt_g_lit(" (RM79 3.3)", 11)));
}
F->nm_2818 = f_nn_310(F->up, ((rt_int)5LL), G_NV((*(P174)rt_nil_check(F->fn_2817)).line_));
(*(P174)rt_nil_check(F->nm_2818)).name_ = (*(P174)rt_nil_check(F->fn_2817)).name_;
F->fn_2817 = F->nm_2818;
} else if (((G_NV((*(P174)rt_nil_check(F->fn_2817)).kind_) == ((rt_int)9LL)) && f_is_package_1058(F->up, (*(P174)rt_nil_check(F->fn_2817)).a_))) {
F->nm_2818 = f_nn_310(F->up, ((rt_int)5LL), G_NV((*(P174)rt_nil_check(F->fn_2817)).line_));
(*(P174)rt_nil_check(F->nm_2818)).name_ = (*(P174)rt_nil_check(F->fn_2817)).name_;
(*(P174)rt_nil_check(F->nm_2818)).tag_ = f_mk_236(F->up, f_path_of_353(F->up, (*(P174)rt_nil_check(F->fn_2817)).a_));
F->fn_2817 = F->nm_2818;
} else if (((((G_NV((*(P174)rt_nil_check(F->fn_2817)).kind_) == ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2817)).a_)).kind_) == ((rt_int)8LL))) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2817)).a_)).a_)).kind_) == ((rt_int)5LL))) && f_is_task_name_1135(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2817)).a_)).a_)).name_))))) {
F->y_2819 = f_member_of_1062(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2817)).a_)).a_)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2817)).name_)), G_NV((*(P174)rt_nil_check(F->fn_2817)).line_));
if (((F->y_2819 != NULL) && ((G_NV((*(P117)rt_nil_check(F->y_2819)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_2819)).kind_) == ((rt_int)4LL))))) {
f_resolve_member_overload_1111(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2817)).a_)).a_)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2817)).name_)), (*(P174)rt_nil_check(F->e_1018)).b_, F->is_stmt_1019, F->up->call_want_224, G_NV((*(P174)rt_nil_check(F->e_1018)).line_), &F->y_2819);
F->up->call_task_ix_214 = (*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2817)).a_)).b_;
if ((F->is_stmt_1019 && (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2819)).result_)).kind_) != ((rt_int)9LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1018)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2817)).name_)), rt_g_lit(" returns a value; it is not a procedure call", 44)));
}
f_gcall_with_1047(F->up, F->e_1018, F->y_2819, &(*F->t_1020), &(*F->r_1021));
goto ret_;
}
}
if ((G_NV((*(P174)rt_nil_check(F->fn_2817)).kind_) != ((rt_int)5LL))) {
f_other_call_1199(F->up, F->e_1018, F->is_stmt_1019, &(*F->t_1020), &(*F->r_1021));
goto ret_;
}
F->y_2819 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2817)).name_)));
if (((*(P174)rt_nil_check(F->fn_2817)).tag_ != NULL)) {
F->y_2819 = f_member_of_1062(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2817)).tag_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2817)).name_)), G_NV((*(P174)rt_nil_check(F->fn_2817)).line_));
}
if ((F->y_2819 == NULL)) {
if (((*(P174)rt_nil_check(F->fn_2817)).tag_ != NULL)) {
F->up->text_io_qualified_201 = eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2817)).tag_)), rt_g_lit("TEXT_IO", 7));
}
f_builtin_1054(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2817)).name_)), (*(P174)rt_nil_check(F->e_1018)).b_, G_NV((*(P174)rt_nil_check(F->e_1018)).line_), F->is_stmt_1019, &(*F->t_1020), &(*F->r_1021));
F->up->text_io_qualified_201 = 0;
goto ret_;
}
if ((((G_NV((*(P117)rt_nil_check(F->y_2819)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_2819)).kind_) == ((rt_int)4LL))) && ((*(P174)rt_nil_check(F->fn_2817)).tag_ == NULL))) {
f_resolve_overload_1100(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2817)).name_)), (*(P174)rt_nil_check(F->e_1018)).b_, F->is_stmt_1019, F->up->call_want_224, G_NV((*(P174)rt_nil_check(F->e_1018)).line_), &F->y_2819);
if ((F->y_2819 == NULL)) {
f_builtin_1054(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2817)).name_)), (*(P174)rt_nil_check(F->e_1018)).b_, G_NV((*(P174)rt_nil_check(F->e_1018)).line_), F->is_stmt_1019, &(*F->t_1020), &(*F->r_1021));
goto ret_;
}
} else if (((G_NV((*(P117)rt_nil_check(F->y_2819)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_2819)).kind_) == ((rt_int)4LL)))) {
f_resolve_member_overload_1111(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2817)).tag_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2817)).name_)), (*(P174)rt_nil_check(F->e_1018)).b_, F->is_stmt_1019, F->up->call_want_224, G_NV((*(P174)rt_nil_check(F->e_1018)).line_), &F->y_2819);
}
if ((G_NV((*(P117)rt_nil_check(F->y_2819)).kind_) == ((rt_int)10LL))) {
f_other_call_1199(F->up, F->e_1018, F->is_stmt_1019, &(*F->t_1020), &(*F->r_1021));
goto ret_;
}
if (((G_NV((*(P117)rt_nil_check(F->y_2819)).kind_) != ((rt_int)3LL)) && (G_NV((*(P117)rt_nil_check(F->y_2819)).kind_) != ((rt_int)4LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1018)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2817)).name_)), rt_g_lit(" cannot be called", 17)));
}
if ((F->is_stmt_1019 && (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2819)).result_)).kind_) != ((rt_int)9LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1018)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2817)).name_)), rt_g_lit(" returns a value; it is not a procedure call", 44)));
}
if (((!F->is_stmt_1019) && (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2819)).result_)).kind_) == ((rt_int)9LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1018)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2817)).name_)), rt_g_lit(" is a procedure, not a function", 31)));
}
f_gcall_with_1047(F->up, F->e_1018, F->y_2819, &(*F->t_1020), &(*F->r_1021));
ret_:

  return;
}

static void f_out_check_1026(struct f_greenc_1fr *up_, rt_gstr lv_1023, P122 t_1024, P178 c_1025) {
  struct f_out_check_1026fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lv_1023 = cp_rt_gstr(lv_1023);
F->t_1024 = t_1024;
F->c_1025 = c_1025;
if ((!f_bounded_483(F->up, F->c_1025))) {
goto ret_;
}
if ((F->up->post_checks_196 == NULL)) {
F->up->post_checks_196 = f_mk_236(F->up, rt_g_lit("", 0));
}
if (((G_NV((*(P122)rt_nil_check(F->t_1024)).kind_) == ((rt_int)3LL)) || (G_NV((*(P122)rt_nil_check(F->t_1024)).kind_) == ((rt_int)16LL)))) {
F->up->post_checks_196 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->up->post_checks_196)), rt_g_lit(" (void)rt_frange(", 17)), F->lv_1023), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_1025)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_1025)).hi_))), rt_g_lit(");", 2)));
} else if (f_is_discrete_461(F->up, F->t_1024)) {
F->up->post_checks_196 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->up->post_checks_196)), rt_g_lit(" (void)rt_range(", 16)), F->lv_1023), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_1025)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_1025)).hi_))), rt_g_lit(");", 2)));
}
ret_:

  return;
}

static void f_var_path_1029(struct f_greenc_1fr *up_, P174 e_1027, P140 *r_1028) {
  struct f_var_path_1029fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1027 = e_1027;
F->r_1028 = r_1028;
F->pt_2831 = NULL;
F->v_2832 = NULL;
F->saved_2833 = NULL;
F->saved_2833 = F->up->code_136;
if ((G_NV((*(P174)rt_nil_check(F->e_1027)).kind_) == ((rt_int)5LL))) {
(*F->r_1028) = (*(P174)rt_nil_check(F->e_1027)).name_;
goto ret_;
} else if ((G_NV((*(P174)rt_nil_check(F->e_1027)).kind_) == ((rt_int)15LL))) {
f_var_path_1029(F->up, (*(P174)rt_nil_check(F->e_1027)).a_, &(*F->r_1028));
goto ret_;
} else if ((((G_NV((*(P174)rt_nil_check(F->e_1027)).kind_) != ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check(F->e_1027)).kind_) != ((rt_int)8LL))) || ((G_NV((*(P174)rt_nil_check(F->e_1027)).kind_) == ((rt_int)9LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1027)).name_)), rt_g_lit("ALL", 3))))) {
(*F->r_1028) = f_mk_236(F->up, rt_g_lit("\?", 1));
goto ret_;
}
F->pt_2831 = NULL;
F->up->trial_155 = rt_add(G_NV(F->up->trial_155), ((rt_int)1LL));
F->up->code_136 = f_new_buffer_258(F->up);
{
{ rt_frame xf2835;
if (RT_TRY(xf2835)) {
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->e_1027)).a_, NULL, &F->pt_2831, &F->v_2832);
RT_POP(xf2835);
} else {
RT_POP(xf2835);
int x2836 = rt_xcur;
if (rt_g_aborted()) rt_raise(x2836);
if (0 || x2836 == ex_compile_error_108) {
F->pt_2831 = NULL;
} else {
rt_raise(x2836);
}
}
}

}
L_end_2834: ;
F->up->trial_155 = rt_sub(G_NV(F->up->trial_155), ((rt_int)1LL));
F->up->code_136 = F->saved_2833;
if (((F->pt_2831 == NULL) || (G_NV((*(P122)rt_nil_check(F->pt_2831)).kind_) == ((rt_int)8LL)))) {
(*F->r_1028) = f_mk_236(F->up, rt_g_lit("\?", 1));
goto ret_;
}
f_var_path_1029(F->up, (*(P174)rt_nil_check(F->e_1027)).a_, &(*F->r_1028));
if (eq_rt_gstr((*(P140)rt_nil_check((*F->r_1028))), rt_g_lit("\?", 1))) {
goto ret_;
} else if ((G_NV((*(P174)rt_nil_check(F->e_1027)).kind_) == ((rt_int)9LL))) {
(*F->r_1028) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->r_1028))), one_rt_gstr(46)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1027)).name_))));
} else if (((f_list_len_316(F->up, (*(P174)rt_nil_check(F->e_1027)).b_) == ((rt_int)1LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1027)).b_)).kind_) == ((rt_int)1LL)))) {
(*F->r_1028) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->r_1028))), one_rt_gstr(40)), rt_g_s2g(rt_str_of_int(G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1027)).b_)).ival_)))), one_rt_gstr(41)));
} else {
(*F->r_1028) = f_mk_236(F->up, cat_rt_gstr((*(P140)rt_nil_check((*F->r_1028))), rt_g_lit("(*)", 3)));
}
ret_:

  return;
}

static int f_paths_overlap_1032(struct f_greenc_1fr *up_, rt_gstr p_1030, rt_gstr r_1031) {
  struct f_paths_overlap_1032fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1030 = cp_rt_gstr(p_1030);
F->r_1031 = cp_rt_gstr(r_1031);
F->i_2837 = INT64_MIN;
F->i_2837 = ({ rt_gstr at2838 = F->p_1030; at2838.lo; });
F->j_2839 = INT64_MIN;
F->j_2839 = ({ rt_gstr at2840 = F->r_1031; at2840.lo; });
for (;;) {
if (((G_NV(F->i_2837) > ({ rt_gstr at2842 = F->p_1030; at2842.hi; })) || (G_NV(F->j_2839) > ({ rt_gstr at2843 = F->r_1031; at2843.hi; })))) {
if (((G_NV(F->i_2837) > ({ rt_gstr at2844 = F->p_1030; at2844.hi; })) && (G_NV(F->j_2839) > ({ rt_gstr at2845 = F->r_1031; at2845.hi; })))) {
F->result_ = 1;
goto ret_;
} else if ((G_NV(F->i_2837) > ({ rt_gstr at2846 = F->p_1030; at2846.hi; }))) {
F->result_ = ((G_NV(({ rt_gstr ix2847 = F->r_1031; ix2847.p[rt_index(G_NV(F->j_2839), ix2847.lo, ix2847.hi) - ix2847.lo]; })) == 46) || (G_NV(({ rt_gstr ix2848 = F->r_1031; ix2848.p[rt_index(G_NV(F->j_2839), ix2848.lo, ix2848.hi) - ix2848.lo]; })) == 40));
goto ret_;
}
F->result_ = ((G_NV(({ rt_gstr ix2849 = F->p_1030; ix2849.p[rt_index(G_NV(F->i_2837), ix2849.lo, ix2849.hi) - ix2849.lo]; })) == 46) || (G_NV(({ rt_gstr ix2850 = F->p_1030; ix2850.p[rt_index(G_NV(F->i_2837), ix2850.lo, ix2850.hi) - ix2850.lo]; })) == 40));
goto ret_;
}
if ((((G_NV(({ rt_gstr ix2851 = F->p_1030; ix2851.p[rt_index(G_NV(F->i_2837), ix2851.lo, ix2851.hi) - ix2851.lo]; })) == 40) && (G_NV(({ rt_gstr ix2852 = F->r_1031; ix2852.p[rt_index(G_NV(F->j_2839), ix2852.lo, ix2852.hi) - ix2852.lo]; })) == 40)) && ((G_NV(({ rt_gstr ix2853 = F->p_1030; ix2853.p[rt_index(rt_add(G_NV(F->i_2837), ((rt_int)1LL)), ix2853.lo, ix2853.hi) - ix2853.lo]; })) == 42) || (G_NV(({ rt_gstr ix2854 = F->r_1031; ix2854.p[rt_index(rt_add(G_NV(F->j_2839), ((rt_int)1LL)), ix2854.lo, ix2854.hi) - ix2854.lo]; })) == 42)))) {
while ((G_NV(({ rt_gstr ix2856 = F->p_1030; ix2856.p[rt_index(G_NV(F->i_2837), ix2856.lo, ix2856.hi) - ix2856.lo]; })) != 41)) {
F->i_2837 = rt_add(G_NV(F->i_2837), ((rt_int)1LL));
}
L_end_2855: ;
while ((G_NV(({ rt_gstr ix2858 = F->r_1031; ix2858.p[rt_index(G_NV(F->j_2839), ix2858.lo, ix2858.hi) - ix2858.lo]; })) != 41)) {
F->j_2839 = rt_add(G_NV(F->j_2839), ((rt_int)1LL));
}
L_end_2857: ;
} else if ((G_NV(({ rt_gstr ix2859 = F->p_1030; ix2859.p[rt_index(G_NV(F->i_2837), ix2859.lo, ix2859.hi) - ix2859.lo]; })) != G_NV(({ rt_gstr ix2860 = F->r_1031; ix2860.p[rt_index(G_NV(F->j_2839), ix2860.lo, ix2860.hi) - ix2860.lo]; })))) {
F->result_ = 0;
goto ret_;
}
F->i_2837 = rt_add(G_NV(F->i_2837), ((rt_int)1LL));
F->j_2839 = rt_add(G_NV(F->j_2839), ((rt_int)1LL));
}
L_end_2841: ;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_mentions_1035(struct f_greenc_1fr *up_, P174 n_1033, rt_gstr name_1034) {
  struct f_mentions_1035fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1033 = n_1033;
F->name_1034 = cp_rt_gstr(name_1034);
F->p_2861 = NULL;
F->p_2861 = F->n_1033;
while ((F->p_2861 != NULL)) {
if (((G_NV((*(P174)rt_nil_check(F->p_2861)).kind_) == ((rt_int)5LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_2861)).name_)), F->name_1034))) {
F->result_ = 1;
goto ret_;
}
if ((f_mentions_1035(F->up, (*(P174)rt_nil_check(F->p_2861)).a_, F->name_1034) || f_mentions_1035(F->up, (*(P174)rt_nil_check(F->p_2861)).b_, F->name_1034))) {
F->result_ = 1;
goto ret_;
} else if ((f_mentions_1035(F->up, (*(P174)rt_nil_check(F->p_2861)).c_, F->name_1034) || f_mentions_1035(F->up, (*(P174)rt_nil_check(F->p_2861)).d_, F->name_1034))) {
F->result_ = 1;
goto ret_;
} else if (f_mentions_1035(F->up, (*(P174)rt_nil_check(F->p_2861)).e_, F->name_1034)) {
F->result_ = 1;
goto ret_;
}
F->p_2861 = (*(P174)rt_nil_check(F->p_2861)).next_;
}
L_end_2862: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_mentions_one_1038(struct f_greenc_1fr *up_, P174 n_1036, rt_gstr name_1037) {
  struct f_mentions_one_1038fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1036 = n_1036;
F->name_1037 = cp_rt_gstr(name_1037);
if (((G_NV((*(P174)rt_nil_check(F->n_1036)).kind_) == ((rt_int)5LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_1036)).name_)), F->name_1037))) {
F->result_ = 1;
goto ret_;
} else if ((f_mentions_1035(F->up, (*(P174)rt_nil_check(F->n_1036)).a_, F->name_1037) || f_mentions_1035(F->up, (*(P174)rt_nil_check(F->n_1036)).b_, F->name_1037))) {
F->result_ = 1;
goto ret_;
}
F->result_ = ((f_mentions_1035(F->up, (*(P174)rt_nil_check(F->n_1036)).c_, F->name_1037) || f_mentions_1035(F->up, (*(P174)rt_nil_check(F->n_1036)).d_, F->name_1037)) || f_mentions_1035(F->up, (*(P174)rt_nil_check(F->n_1036)).e_, F->name_1037));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_aliasing_1042(struct f_greenc_1fr *up_, P174 e_1039, P117 y_1040, P174 a_1041) {
  struct f_check_aliasing_1042fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1039 = e_1039;
F->y_1040 = y_1040;
F->a_1041 = a_1041;
F->b_2863 = NULL;
F->b_2863 = (*(P174)rt_nil_check(F->e_1039)).b_;
F->p_2864 = NULL;
F->q_2865 = NULL;
F->r_2866 = NULL;
F->r_2866 = f_root_name_1241(F->up, F->a_1041);
F->v_2867 = NULL;
if ((F->r_2866 == NULL)) {
goto ret_;
}
f_var_path_1029(F->up, F->a_1041, &F->p_2864);
while ((F->b_2863 != NULL)) {
if (((F->b_2863 != F->a_1041) && (!eq_rt_gstr((*(P140)rt_nil_check(F->p_2864)), rt_g_lit("\?", 1))))) {
f_var_path_1029(F->up, F->b_2863, &F->q_2865);
if (((!eq_rt_gstr((*(P140)rt_nil_check(F->q_2865)), rt_g_lit("\?", 1))) && f_paths_overlap_1032(F->up, (*(P140)rt_nil_check(F->p_2864)), (*(P140)rt_nil_check(F->q_2865))))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1039)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_2866)).name_)), rt_g_lit(" is an out or in out actual and another actual of the same call (RM79 5.2.3)", 76)));
}
}
F->b_2863 = (*(P174)rt_nil_check(F->b_2863)).next_;
}
L_end_2868: ;
F->v_2867 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_2866)).name_)));
if (((((F->v_2867 != NULL) && (G_NV((*(P117)rt_nil_check(F->v_2867)).kind_) == ((rt_int)1LL))) && ((*(P117)rt_nil_check(F->y_1040)).decl_ != NULL)) && ((G_NV((*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_1040)).decl_)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_1040)).decl_)).kind_) == ((rt_int)45LL))))) {
if (((G_NV((*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_1040)).decl_)).ival_) == ((rt_int)0LL)) && (!f_declares_1250(F->up, (*(P117)rt_nil_check(F->y_1040)).decl_, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_2866)).name_)))))) {
if (((f_mentions_1035(F->up, (*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_1040)).decl_)).c_, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_2866)).name_))) || f_mentions_1035(F->up, (*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_1040)).decl_)).d_, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_2866)).name_)))) || f_mentions_1035(F->up, (*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_1040)).decl_)).e_, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_2866)).name_))))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1039)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_2866)).name_)), rt_g_lit(" is an out or in out actual of ", 31)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1040)).name_))), rt_g_lit(", which also uses it as a global variable (RM79 5.2.3)", 54)));
}
}
}
ret_:

  return;
}

static void f_gcall_with_1047(struct f_greenc_1fr *up_, P174 e_1043, P117 y_1044, P122 *t_1045, P140 *r_1046) {
  struct f_gcall_with_1047fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1043 = e_1043;
F->y_1044 = y_1044;
F->t_1045 = t_1045;
F->r_1046 = r_1046;
F->args_2869 = NULL;
F->lv_2870 = NULL;
F->v_2871 = NULL;
F->x1_2872 = NULL;
F->x2_2873 = NULL;
F->a_2874 = NULL;
F->pm_2875 = NULL;
F->lt_2876 = NULL;
F->vt_2877 = NULL;
F->lc_2878 = NULL;
F->ro_2879 = INT_MIN;
f_check_call_rules_1261(F->up, F->e_1043, F->y_1044);
F->args_2869 = f_mk_236(F->up, rt_g_lit("", 0));
if ((((((G_NV((*(P117)rt_nil_check(F->y_1044)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_1044)).kind_) == ((rt_int)4LL))) && ((*(P117)rt_nil_check(F->y_1044)).access_path_ != NULL)) && ((*(P117)rt_nil_check(F->y_1044)).members_ != NULL)) && ((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1044)).members_)).c_ != NULL))) {
if ((F->up->call_task_ix_214 == NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1043)).line_), cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1044)).name_)), rt_g_lit(" needs the member of the family: F(I).", 38)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1044)).name_))));
}
f_gexpr_819(F->up, F->up->call_task_ix_214, (*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1044)).members_)).t_, &F->vt_2877, &F->v_2871);
F->up->call_task_ix_214 = NULL;
f_path_at_1133(F->up, G_NV((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1044)).members_)).level_), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1044)).access_path_)), &F->lv_2870);
f_path_at_1133(F->up, G_NV((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1044)).members_)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1044)).members_)).cname_)), rt_g_lit("lo", 2)), &F->x1_2872);
f_path_at_1133(F->up, G_NV((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1044)).members_)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1044)).members_)).cname_)), rt_g_lit("hi", 2)), &F->x2_2873);
F->lv_2870 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->lv_2870)), rt_g_lit("[rt_index(", 10)), (*(P140)rt_nil_check(F->v_2871))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->x1_2872))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->x2_2873))), rt_g_lit(") - ", 4)), (*(P140)rt_nil_check(F->x1_2872))), one_rt_gstr(93)));
f_act_path_i_1154(F->up, (*(P117)rt_nil_check(F->y_1044)).members_, (*(P140)rt_nil_check(F->v_2871)), &F->x1_2872);
F->args_2869 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_task_frame((void **)&", 26), (*(P140)rt_nil_check(F->lv_2870))), rt_g_lit(", &", 3)), (*(P140)rt_nil_check(F->x1_2872))), one_rt_gstr(41)));
} else if ((((G_NV((*(P117)rt_nil_check(F->y_1044)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_1044)).kind_) == ((rt_int)4LL))) && ((*(P117)rt_nil_check(F->y_1044)).access_path_ != NULL))) {
f_path_at_1133(F->up, G_NV((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1044)).members_)).level_), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1044)).access_path_)), &F->lv_2870);
if (f_same_task_435(F->up, (*(P117)rt_nil_check(F->y_1044)).members_, F->up->cur_task_210)) {
F->args_2869 = F->lv_2870;
} else {
f_act_path_1150(F->up, (*(P117)rt_nil_check(F->y_1044)).members_, &F->x1_2872);
F->args_2869 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_task_frame((void **)&", 26), (*(P140)rt_nil_check(F->lv_2870))), rt_g_lit(", &", 3)), (*(P140)rt_nil_check(F->x1_2872))), one_rt_gstr(41)));
}
} else if ((G_NV((*(P117)rt_nil_check(F->y_1044)).level_) > ((rt_int)0LL))) {
f_link_to_759(F->up, G_NV((*(P117)rt_nil_check(F->y_1044)).level_), &F->args_2869);
}
F->pm_2875 = (*(P117)rt_nil_check(F->y_1044)).params_;
while ((F->pm_2875 != NULL)) {
F->a_2874 = f_actual_for_1017(F->up, (*(P174)rt_nil_check(F->e_1043)).b_, F->pm_2875, (*(P117)rt_nil_check(F->y_1044)).params_);
if ((({ rt_gstr at2881 = (*(P140)rt_nil_check(F->args_2869)); at2881.hi >= at2881.lo ? at2881.hi - at2881.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->args_2869 = f_mk_236(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->args_2869)), rt_g_lit(", ", 2)));
}
if ((F->a_2874 == NULL)) {
if ((((*(P1887)rt_nil_check(F->pm_2875)).dflt_ == NULL) || (G_NV((*(P1887)rt_nil_check(F->pm_2875)).mode_) != ((rt_int)1LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1043)).line_), cat_rt_gstr(rt_g_lit("no actual parameter for ", 24), (*(P140)rt_nil_check((*(P1887)rt_nil_check(F->pm_2875)).name_))));
}
if (((*(P1887)rt_nil_check(F->pm_2875)).dsym_ != NULL)) {
f_access_of_756(F->up, (*(P1887)rt_nil_check(F->pm_2875)).dsym_, &F->v_2871);
f_copy_code_632(F->up, (*(P1887)rt_nil_check(F->pm_2875)).t_, (*(P140)rt_nil_check(F->v_2871)), &F->x1_2872);
F->v_2871 = F->x1_2872;
} else {
f_gexpr_819(F->up, (*(P1887)rt_nil_check(F->pm_2875)).dflt_, (*(P1887)rt_nil_check(F->pm_2875)).t_, &F->vt_2877, &F->v_2871);
}
F->args_2869 = f_mk_236(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->args_2869)), (*(P140)rt_nil_check(F->v_2871))));
} else {
if ((((G_NV((*(P174)rt_nil_check(F->a_2874)).flag_) != ((rt_int)0LL)) && (G_NV((*(P174)rt_nil_check(F->a_2874)).flag_) != ((rt_int)4LL))) && (G_NV((*(P174)rt_nil_check(F->a_2874)).flag_) != G_NV((*(P1887)rt_nil_check(F->pm_2875)).mode_)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1043)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the association of ", 19), (*(P140)rt_nil_check((*(P1887)rt_nil_check(F->pm_2875)).name_))), rt_g_lit(" does not match its mode", 24)));
}
if ((G_NV((*(P1887)rt_nil_check(F->pm_2875)).mode_) == ((rt_int)1LL))) {
f_gexpr_819(F->up, F->a_2874, (*(P1887)rt_nil_check(F->pm_2875)).t_, &F->vt_2877, &F->v_2871);
f_check_type_495(F->up, F->vt_2877, (*(P1887)rt_nil_check(F->pm_2875)).t_, G_NV((*(P174)rt_nil_check(F->e_1043)).line_));
if (((((*(P1887)rt_nil_check(F->pm_2875)).c_ != NULL) && ((*(P178)rt_nil_check((*(P1887)rt_nil_check(F->pm_2875)).c_)).lo_ != NULL)) && ((G_NV((*(P122)rt_nil_check((*(P1887)rt_nil_check(F->pm_2875)).t_)).kind_) == ((rt_int)1LL)) || (G_NV((*(P122)rt_nil_check((*(P1887)rt_nil_check(F->pm_2875)).t_)).kind_) == ((rt_int)4LL))))) {
F->v_2871 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P140)rt_nil_check(F->v_2871))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P1887)rt_nil_check(F->pm_2875)).c_)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P1887)rt_nil_check(F->pm_2875)).c_)).hi_))), one_rt_gstr(41)));
}
F->args_2869 = f_mk_236(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->args_2869)), (*(P140)rt_nil_check(F->v_2871))));
} else {
f_lvalue_775(F->up, F->a_2874, &F->lv_2870, &F->lt_2876, &F->lc_2878, &F->ro_2879);
 (void)rt_range(F->ro_2879, 0, 1);
if (G_NV(F->ro_2879)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1043)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P1887)rt_nil_check(F->pm_2875)).name_)), rt_g_lit(" needs a variable", 17)));
}
f_check_pure_target_1244(F->up, F->a_2874, G_NV((*(P174)rt_nil_check(F->e_1043)).line_));
f_check_type_495(F->up, F->lt_2876, (*(P1887)rt_nil_check(F->pm_2875)).t_, G_NV((*(P174)rt_nil_check(F->e_1043)).line_));
F->args_2869 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->args_2869)), one_rt_gstr(38)), (*(P140)rt_nil_check(F->lv_2870))));
f_check_aliasing_1042(F->up, F->e_1043, F->y_1044, F->a_2874);
f_out_check_1026(F->up, (*(P140)rt_nil_check(F->lv_2870)), F->lt_2876, F->lc_2878);
}
}
F->pm_2875 = (*(P1887)rt_nil_check(F->pm_2875)).next_;
}
L_end_2880: ;
if (((f_list_len_316(F->up, (*(P174)rt_nil_check(F->e_1043)).b_) > ((rt_int)0LL)) && ((*(P117)rt_nil_check(F->y_1044)).params_ == NULL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1043)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1044)).name_)), rt_g_lit(" takes no parameters", 20)));
}
(*F->t_1045) = (*(P117)rt_nil_check(F->y_1044)).result_;
(*F->r_1046) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1044)).cname_)), one_rt_gstr(40)), (*(P140)rt_nil_check(F->args_2869))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_builtin_1054(struct f_greenc_1fr *up_, rt_gstr name_1048, P174 args_1049, rt_int line_1050, int is_stmt_1051, P122 *t_1052, P140 *r_1053) {
  struct f_builtin_1054fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1048 = cp_rt_gstr(name_1048);
F->args_1049 = args_1049;
F->line_1050 = line_1050;
F->is_stmt_1051 = is_stmt_1051;
F->t_1052 = t_1052;
F->r_1053 = r_1053;
F->aty_2882 = NULL;
F->lt_2883 = NULL;
F->a_2884 = NULL;
F->w_2885 = NULL;
F->lv_2886 = NULL;
F->lc_2887 = NULL;
F->ro_2888 = INT_MIN;
(*F->t_1052) = F->up->ty_void_161;
if ((((eq_rt_gstr(F->name_1048, rt_g_lit("PUT", 3)) || eq_rt_gstr(F->name_1048, rt_g_lit("GET", 3))) && (!G_NV(F->up->text_io_qualified_201))) && (f_lookup_432(F->up, rt_g_lit("$TEXT_IO", 8)) == NULL))) {
f_fail_257(F->up, F->line_1050, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->name_1048, rt_g_lit(" is an operation of TEXT_IO: use TEXT_IO or name TEXT_IO.", 57)), F->name_1048), rt_g_lit(" (RM79 8.4, 14.3)", 17)));
}
if (((F->up->pure_sym_225 != NULL) && (eq_rt_gstr(F->name_1048, rt_g_lit("PUT", 3)) || eq_rt_gstr(F->name_1048, rt_g_lit("GET", 3))))) {
f_fail_257(F->up, F->line_1050, cat_rt_gstr(cat_rt_gstr(rt_g_lit("a function cannot do input-output: ", 35), F->name_1048), rt_g_lit(" has side effects (RM79 6.5)", 28)));
}
if (eq_rt_gstr(F->name_1048, rt_g_lit("PUT", 3))) {
if ((F->args_1049 == NULL)) {
f_fail_257(F->up, F->line_1050, rt_g_lit("PUT needs an item", 17));
}
f_gexpr_819(F->up, F->args_1049, NULL, &F->aty_2882, &F->a_2884);
F->w_2885 = f_mk_236(F->up, rt_g_lit("0", 1));
if (((*(P174)rt_nil_check(F->args_1049)).next_ != NULL)) {
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->args_1049)).next_, F->up->ty_int_156, &F->lt_2883, &F->w_2885);
}
if (f_is_string_579(F->up, F->aty_2882)) {
(*F->r_1053) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put(rt_g_g2s(", 18), (*(P140)rt_nil_check(F->a_2884))), rt_g_lit("))", 2)));
} else if ((G_NV((*(P122)rt_nil_check(F->aty_2882)).kind_) == ((rt_int)11LL))) {
(*F->r_1053) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_putc(", 10), (*(P140)rt_nil_check(F->a_2884))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->aty_2882)).kind_) == ((rt_int)1LL))) {
(*F->r_1053) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put_int(", 13), (*(P140)rt_nil_check(F->a_2884))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->w_2885))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->aty_2882)).kind_) == ((rt_int)2LL))) {
(*F->r_1053) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put_bool(", 14), (*(P140)rt_nil_check(F->a_2884))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->w_2885))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->aty_2882)).kind_) == ((rt_int)16LL))) {
f_fail_257(F->up, F->line_1050, rt_g_lit("TEXT_IO has no PUT for a fixed point type: instantiate FIXED_IO (RM79 14.4)", 75));
} else if ((G_NV((*(P122)rt_nil_check(F->aty_2882)).kind_) == ((rt_int)3LL))) {
(*F->r_1053) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put_float(", 15), (*(P140)rt_nil_check(F->a_2884))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->w_2885))), rt_g_lit(", 0)", 4)));
} else {
f_fail_257(F->up, F->line_1050, rt_g_lit("PUT of this type is not handled", 31));
}
} else if (eq_rt_gstr(F->name_1048, rt_g_lit("GET", 3))) {
f_lvalue_775(F->up, F->args_1049, &F->lv_2886, &F->lt_2883, &F->lc_2887, &F->ro_2888);
 (void)rt_range(F->ro_2888, 0, 1);
if ((G_NV((*(P122)rt_nil_check(F->lt_2883)).kind_) == ((rt_int)11LL))) {
(*F->r_1053) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->lv_2886))), rt_g_lit(" = rt_g_getc())", 15)));
} else if ((G_NV((*(P122)rt_nil_check(F->lt_2883)).kind_) == ((rt_int)1LL))) {
(*F->r_1053) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->lv_2886))), rt_g_lit(" = rt_g_get_int())", 18)));
} else if ((G_NV((*(P122)rt_nil_check(F->lt_2883)).kind_) == ((rt_int)3LL))) {
(*F->r_1053) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->lv_2886))), rt_g_lit(" = rt_g_get_float())", 20)));
} else {
f_fail_257(F->up, F->line_1050, rt_g_lit("GET of this type is not handled", 31));
}
} else if (eq_rt_gstr(F->name_1048, rt_g_lit("ABS", 3))) {
f_gexpr_819(F->up, F->args_1049, NULL, &(*F->t_1052), &F->a_2884);
if ((G_NV((*(P122)rt_nil_check((*F->t_1052))).kind_) == ((rt_int)1LL))) {
(*F->r_1053) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_abs(", 7), (*(P140)rt_nil_check(F->a_2884))), one_rt_gstr(41)));
} else if (((G_NV((*(P122)rt_nil_check((*F->t_1052))).kind_) == ((rt_int)3LL)) || (G_NV((*(P122)rt_nil_check((*F->t_1052))).kind_) == ((rt_int)16LL)))) {
(*F->r_1053) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("fabs(", 5), (*(P140)rt_nil_check(F->a_2884))), one_rt_gstr(41)));
} else {
f_fail_257(F->up, F->line_1050, rt_g_lit("ABS applies to numeric values (RM79 App. C)", 43));
}
} else {
f_task_builtin_1214(F->up, F->name_1048, F->args_1049, F->line_1050, &(*F->t_1052), &(*F->r_1053));
}
ret_:

  return;
}

static P117 f_lookup_path_1056(struct f_greenc_1fr *up_, rt_gstr p_1055) {
  struct f_lookup_path_1056fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1055 = cp_rt_gstr(p_1055);
F->y_2889 = NULL;
F->m_2890 = NULL;
{ rt_int lo2895 = ({ rt_gstr at2892 = F->p_1055; at2892.lo; }), hi2896 = ({ rt_gstr at2893 = F->p_1055; at2893.hi; });
for (rt_int it2897 = hi2896; it2897 >= lo2895; it2897--) {
F->i_2894 = it2897;
if ((G_NV(({ rt_gstr ix2898 = F->p_1055; ix2898.p[rt_index(F->i_2894, ix2898.lo, ix2898.hi) - ix2898.lo]; })) == 46)) {
F->y_2889 = f_lookup_path_1056(F->up, ({ rt_gstr sl2902 = F->p_1055; rt_int l_ = ({ rt_gstr at2901 = F->p_1055; at2901.lo; }), h_ = rt_sub(F->i_2894, ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl2902.lo, sl2902.hi); rt_index(h_, sl2902.lo, sl2902.hi); } sl2902.p += l_ - sl2902.lo; sl2902.lo = l_; sl2902.hi = h_; sl2902; }));
if ((F->y_2889 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if (((G_NV((*(P117)rt_nil_check(F->y_2889)).kind_) != ((rt_int)8LL)) && (G_NV((*(P117)rt_nil_check(F->y_2889)).kind_) != ((rt_int)9LL)))) {
F->result_ = NULL;
goto ret_;
}
F->m_2890 = (*(P117)rt_nil_check(F->y_2889)).members_;
while ((F->m_2890 != NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2890)).name_)), ({ rt_gstr sl2905 = F->p_1055; rt_int l_ = rt_add(F->i_2894, ((rt_int)1LL)), h_ = ({ rt_gstr at2904 = F->p_1055; at2904.hi; }); if (l_ <= h_) { rt_index(l_, sl2905.lo, sl2905.hi); rt_index(h_, sl2905.lo, sl2905.hi); } sl2905.p += l_ - sl2905.lo; sl2905.lo = l_; sl2905.hi = h_; sl2905; })) && (!G_NV((*(P117)rt_nil_check(F->m_2890)).hidden_)))) {
F->result_ = F->m_2890;
goto ret_;
}
F->m_2890 = (*(P117)rt_nil_check(F->m_2890)).mnext_;
}
L_end_2903: ;
F->result_ = NULL;
goto ret_;
}
}
}
L_end_2891: ;
F->result_ = f_lookup_432(F->up, F->p_1055);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_package_1058(struct f_greenc_1fr *up_, P174 e_1057) {
  struct f_is_package_1058fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1057 = e_1057;
F->y_2906 = NULL;
if (((G_NV((*(P174)rt_nil_check(F->e_1057)).kind_) != ((rt_int)5LL)) && (G_NV((*(P174)rt_nil_check(F->e_1057)).kind_) != ((rt_int)9LL)))) {
F->result_ = 0;
goto ret_;
} else if ((G_NV((*(P174)rt_nil_check(F->e_1057)).kind_) == ((rt_int)9LL))) {
if (((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1057)).a_)).kind_) != ((rt_int)5LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1057)).a_)).kind_) != ((rt_int)9LL)))) {
F->result_ = 0;
goto ret_;
}
}
F->y_2906 = f_lookup_path_1056(F->up, f_path_of_353(F->up, F->e_1057));
if ((!(F->y_2906 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((G_NV((*(P117)rt_nil_check(F->y_2906)).kind_) == ((rt_int)8LL)) || (G_NV((*(P117)rt_nil_check(F->y_2906)).kind_) == ((rt_int)9LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P117 f_member_of_1062(struct f_greenc_1fr *up_, rt_gstr p_1059, rt_gstr name_1060, rt_int line_1061) {
  struct f_member_of_1062fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1059 = cp_rt_gstr(p_1059);
F->name_1060 = cp_rt_gstr(name_1060);
F->line_1061 = line_1061;
F->y_2907 = NULL;
F->y_2907 = f_lookup_path_1056(F->up, F->p_1059);
F->m_2908 = NULL;
if (((F->y_2907 == NULL) || ((G_NV((*(P117)rt_nil_check(F->y_2907)).kind_) != ((rt_int)8LL)) && (G_NV((*(P117)rt_nil_check(F->y_2907)).kind_) != ((rt_int)9LL))))) {
F->result_ = NULL;
goto ret_;
}
F->m_2908 = (*(P117)rt_nil_check(F->y_2907)).members_;
while ((F->m_2908 != NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2908)).name_)), F->name_1060) && (!G_NV((*(P117)rt_nil_check(F->m_2908)).hidden_)))) {
F->result_ = F->m_2908;
goto ret_;
}
F->m_2908 = (*(P117)rt_nil_check(F->m_2908)).mnext_;
}
L_end_2909: ;
if ((G_NV((*(P117)rt_nil_check(F->y_2907)).kind_) == ((rt_int)9LL))) {
F->m_2908 = f_lookup_entry_438(F->up, F->name_1060, F->y_2907);
if ((((F->m_2908 != NULL) && (G_NV((*(P117)rt_nil_check(F->m_2908)).kind_) == ((rt_int)10LL))) && f_same_task_435(F->up, (*(P117)rt_nil_check(F->m_2908)).members_, F->y_2907))) {
F->result_ = F->m_2908;
goto ret_;
}
}
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_inside_package_1064(struct f_greenc_1fr *up_, P174 p_1063) {
  struct f_inside_package_1064fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1063 = p_1063;
F->l_2910 = NULL;
F->l_2910 = F->up->pkg_stack_221;
if ((F->p_1063 == NULL)) {
F->result_ = 1;
goto ret_;
}
while ((F->l_2910 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P151)rt_nil_check(F->l_2910)).s_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_1063)).name_)))) {
F->result_ = 1;
goto ret_;
}
F->l_2910 = (*(P151)rt_nil_check(F->l_2910)).next_;
}
L_end_2911: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_copy_sym_1067(struct f_greenc_1fr *up_, P117 y_1065, P117 *z_1066) {
  struct f_copy_sym_1067fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1065 = y_1065;
F->z_1066 = z_1066;
(*F->z_1066) = ({ R118 *cell2912 = rt_alloc(sizeof(R118)); *cell2912 = cp_R118(({ R118 ag2913; ag2913.kind_ = G_NV((*(P117)rt_nil_check(F->y_1065)).kind_); ag2913.name_ = (*(P117)rt_nil_check(F->y_1065)).name_; ag2913.t_ = (*(P117)rt_nil_check(F->y_1065)).t_; ag2913.c_ = (*(P117)rt_nil_check(F->y_1065)).c_; ag2913.access_path_ = (*(P117)rt_nil_check(F->y_1065)).access_path_; ag2913.cname_ = (*(P117)rt_nil_check(F->y_1065)).cname_; ag2913.ro_ = G_NV((*(P117)rt_nil_check(F->y_1065)).ro_); ag2913.mvalue_ = G_NV((*(P117)rt_nil_check(F->y_1065)).mvalue_); ag2913.hasmv_ = G_NV((*(P117)rt_nil_check(F->y_1065)).hasmv_); ag2913.decl_ = (*(P117)rt_nil_check(F->y_1065)).decl_; ag2913.params_ = (*(P117)rt_nil_check(F->y_1065)).params_; ag2913.result_ = (*(P117)rt_nil_check(F->y_1065)).result_; ag2913.depth_ = ((rt_int)0LL); ag2913.level_ = G_NV((*(P117)rt_nil_check(F->y_1065)).level_); ag2913.byref_ = G_NV((*(P117)rt_nil_check(F->y_1065)).byref_); ag2913.vrp_ = G_NV((*(P117)rt_nil_check(F->y_1065)).vrp_); ag2913.hidden_ = G_NV((*(P117)rt_nil_check(F->y_1065)).hidden_); ag2913.from_use_ = 0; ag2913.members_ = (*(P117)rt_nil_check(F->y_1065)).members_; ag2913.mnext_ = NULL; ag2913.chain_ = NULL; ag2913.stack_ = NULL; ag2913.flags_ = G_NV((*(P117)rt_nil_check(F->y_1065)).flags_); ag2913; })); (P117)cell2912; });
ret_:

  return;
}

static void f_complete_private_1070(struct f_greenc_1fr *up_, P122 ph_1068, P122 full_1069) {
  struct f_complete_private_1070fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->ph_1068 = ph_1068;
F->full_1069 = full_1069;
F->n_2914 = NULL;
F->n_2914 = (*(P122)rt_nil_check(F->ph_1068)).name_;
F->p_2915 = NULL;
F->p_2915 = (*(P122)rt_nil_check(F->ph_1068)).decl_;
as_R123(&(*(P122)rt_nil_check(F->ph_1068)), (*(P122)rt_nil_check(F->full_1069)));
(*(P122)rt_nil_check(F->ph_1068)).name_ = F->n_2914;
(*(P122)rt_nil_check(F->ph_1068)).priv_ = 1;
(*(P122)rt_nil_check(F->ph_1068)).decl_ = F->p_2915;
ret_:

  return;
}

static void f_package_spec_1072(struct f_greenc_1fr *up_, P174 e_1071) {
  struct f_package_spec_1072fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1071 = e_1071;
F->y_2916 = NULL;
F->m_2917 = NULL;
F->z_2918 = NULL;
F->saved_2919 = NULL;
F->saved_2919 = F->up->cur_pkg_222;
F->first_private_2920 = NULL;
F->y_2916 = f_new_sym_478(F->up, ((rt_int)8LL), (*(P174)rt_nil_check(F->e_1071)).name_);
(*(P117)rt_nil_check(F->y_2916)).decl_ = F->e_1071;
F->up->pkg_stack_221 = ({ R152 *cell2921 = rt_alloc(sizeof(R152)); *cell2921 = cp_R152(({ R152 ag2922; ag2922.s_ = (*(P174)rt_nil_check(F->e_1071)).name_; ag2922.next_ = F->up->pkg_stack_221; ag2922; })); (P151)cell2921; });
F->up->cur_pkg_222 = F->e_1071;
f_open_scope_474(F->up);
f_decl_elements_661(F->up, (*(P174)rt_nil_check(F->e_1071)).c_);
F->first_private_2920 = F->up->scope_stack_121;
f_decl_elements_661(F->up, (*(P174)rt_nil_check(F->e_1071)).d_);
F->m_2917 = F->up->scope_stack_121;
while (((F->m_2917 != NULL) && (G_NV((*(P117)rt_nil_check(F->m_2917)).depth_) == G_NV(F->up->depth_120)))) {
if (((G_NV((*(P117)rt_nil_check(F->m_2917)).kind_) == ((rt_int)2LL)) && (G_NV((*(P117)rt_nil_check(F->m_2917)).flags_) == rt_add(((rt_int)1LL), ((rt_int)2LL))))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1071)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("deferred constant ", 18), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2917)).name_))), rt_g_lit(" has no full declaration in the private part (RM79 7.4)", 55)));
}
f_copy_sym_1067(F->up, F->m_2917, &F->z_2918);
(*(P117)rt_nil_check(F->z_2918)).hidden_ = (f_hidden_from_1075(F->up, F->m_2917, F->first_private_2920) || G_NV((*(P117)rt_nil_check(F->m_2917)).from_use_));
(*(P117)rt_nil_check(F->z_2918)).mnext_ = (*(P117)rt_nil_check(F->y_2916)).members_;
(*(P117)rt_nil_check(F->y_2916)).members_ = F->z_2918;
F->m_2917 = (*(P117)rt_nil_check(F->m_2917)).stack_;
}
L_end_2923: ;
f_close_scope_475(F->up);
F->up->pkg_stack_221 = (*(P151)rt_nil_check(F->up->pkg_stack_221)).next_;
F->up->cur_pkg_222 = F->saved_2919;
f_define_473(F->up, F->y_2916, G_NV((*(P174)rt_nil_check(F->e_1071)).line_));
ret_:

  return;
}

static int f_hidden_from_1075(struct f_greenc_1fr *up_, P117 m_1073, P117 first_private_1074) {
  struct f_hidden_from_1075fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->m_1073 = m_1073;
F->first_private_1074 = first_private_1074;
F->p_2924 = NULL;
F->p_2924 = F->up->scope_stack_121;
while ((F->p_2924 != NULL)) {
if ((F->p_2924 == F->first_private_1074)) {
F->result_ = 0;
goto ret_;
}
if ((F->p_2924 == F->m_1073)) {
F->result_ = 1;
goto ret_;
}
F->p_2924 = (*(P117)rt_nil_check(F->p_2924)).stack_;
}
L_end_2925: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_package_body_1077(struct f_greenc_1fr *up_, P174 e_1076) {
  struct f_package_body_1077fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1076 = e_1076;
F->saved_labels_2926 = NULL;
F->y_2927 = NULL;
F->y_2927 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1076)).name_)));
F->m_2928 = NULL;
F->z_2929 = NULL;
F->saved_2930 = NULL;
F->saved_2930 = F->up->cur_pkg_222;
if ((G_NV((*(P174)rt_nil_check(F->e_1076)).flag_) == ((rt_int)4LL))) {
f_stub_676(F->up, F->e_1076);
goto ret_;
}
if (f_is_generic_name_1270(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1076)).name_)))) {
f_attach_generic_body_1272(F->up, F->e_1076);
goto ret_;
}
if (((F->y_2927 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_2927)).kind_) != ((rt_int)8LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1076)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("package body ", 13), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1076)).name_))), rt_g_lit(" has no specification", 21)));
}
F->up->pkg_stack_221 = ({ R152 *cell2931 = rt_alloc(sizeof(R152)); *cell2931 = cp_R152(({ R152 ag2932; ag2932.s_ = (*(P174)rt_nil_check(F->e_1076)).name_; ag2932.next_ = F->up->pkg_stack_221; ag2932; })); (P151)cell2931; });
F->up->cur_pkg_222 = (*(P117)rt_nil_check(F->y_2927)).decl_;
f_open_scope_474(F->up);
f_push_unit_445(F->up, (*(P174)rt_nil_check(F->e_1076)).name_);
F->m_2928 = (*(P117)rt_nil_check(F->y_2927)).members_;
while ((F->m_2928 != NULL)) {
f_copy_sym_1067(F->up, F->m_2928, &F->z_2929);
(*(P117)rt_nil_check(F->z_2929)).hidden_ = 0;
f_define_473(F->up, F->z_2929, G_NV((*(P174)rt_nil_check(F->e_1076)).line_));
F->m_2928 = (*(P117)rt_nil_check(F->m_2928)).mnext_;
}
L_end_2933: ;
f_decl_elements_661(F->up, (*(P174)rt_nil_check(F->e_1076)).c_);
F->m_2928 = (*(P117)rt_nil_check(F->y_2927)).members_;
while ((F->m_2928 != NULL)) {
if ((((G_NV((*(P117)rt_nil_check(F->m_2928)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->m_2928)).kind_) == ((rt_int)4LL))) && (G_NV((*(P174)rt_nil_check((*(P117)rt_nil_check(F->m_2928)).decl_)).ival_) == ((rt_int)1LL)))) {
F->z_2929 = ({ A116 ix2935 = F->up->table_119; ix2935.p[rt_index(f_hash_425(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2928)).name_))), ix2935.lo, ix2935.hi) - ix2935.lo]; });
while ((F->z_2929 != NULL)) {
if (((*(P117)rt_nil_check(F->z_2929)).cname_ == (*(P117)rt_nil_check(F->m_2928)).cname_)) {
(*(P117)rt_nil_check(F->m_2928)).decl_ = (*(P117)rt_nil_check(F->z_2929)).decl_;
}
F->z_2929 = (*(P117)rt_nil_check(F->z_2929)).chain_;
}
L_end_2936: ;
if ((G_NV((*(P174)rt_nil_check((*(P117)rt_nil_check(F->m_2928)).decl_)).ival_) == ((rt_int)1LL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1076)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no body for ", 12), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2928)).name_))), rt_g_lit(" in package body ", 17)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1076)).name_))));
}
}
F->m_2928 = (*(P117)rt_nil_check(F->m_2928)).mnext_;
}
L_end_2934: ;
F->saved_labels_2926 = F->up->body_labels_191;
f_label_body_698(F->up, (*(P174)rt_nil_check(F->e_1076)).d_, (*(P174)rt_nil_check(F->e_1076)).e_);
f_guarded_718(F->up, NULL, (*(P174)rt_nil_check(F->e_1076)).d_, (*(P174)rt_nil_check(F->e_1076)).e_, G_NV((*(P174)rt_nil_check(F->e_1076)).line_));
F->up->body_labels_191 = F->saved_labels_2926;
F->up->nunits_188 = rt_sub(G_NV(F->up->nunits_188), ((rt_int)1LL));
f_close_scope_475(F->up);
F->up->pkg_stack_221 = (*(P151)rt_nil_check(F->up->pkg_stack_221)).next_;
F->up->cur_pkg_222 = F->saved_2930;
ret_:

  return;
}

static int f_use_visible_1079(struct f_greenc_1fr *up_, P117 old_1078) {
  struct f_use_visible_1079fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->old_1078 = old_1078;
if ((F->old_1078 == NULL)) {
F->result_ = 1;
goto ret_;
}
F->result_ = (((G_NV((*(P117)rt_nil_check(F->old_1078)).depth_) < G_NV(F->up->depth_120)) && (G_NV((*(P117)rt_nil_check(F->old_1078)).kind_) != ((rt_int)1LL))) && (G_NV((*(P117)rt_nil_check(F->old_1078)).kind_) != ((rt_int)2LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_use_clause_1081(struct f_greenc_1fr *up_, P174 e_1080) {
  struct f_use_clause_1081fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1080 = e_1080;
F->n_2937 = NULL;
F->n_2937 = (*(P174)rt_nil_check(F->e_1080)).a_;
F->y_2938 = NULL;
F->m_2939 = NULL;
F->z_2940 = NULL;
F->old_2941 = NULL;
F->clash_2942 = INT_MIN;
while ((F->n_2937 != NULL)) {
F->y_2938 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_2937)).name_)));
if ((F->y_2938 == NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->n_2937)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_2937)).name_)), rt_g_lit(" is not a visible module (RM79 8.3, 8.4)", 40)));
} else if (((G_NV((*(P117)rt_nil_check(F->y_2938)).kind_) != ((rt_int)8LL)) && (G_NV((*(P117)rt_nil_check(F->y_2938)).kind_) != ((rt_int)9LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->n_2937)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_2937)).name_)), rt_g_lit(" is not a package or a task", 27)));
} else if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2938)).name_)), rt_g_lit("TEXT_IO", 7)) && ((*(P117)rt_nil_check(F->y_2938)).members_ == NULL))) {
F->z_2940 = f_new_sym_478(F->up, ((rt_int)2LL), f_mk_236(F->up, rt_g_lit("$TEXT_IO", 8)));
(*(P117)rt_nil_check(F->z_2940)).t_ = F->up->ty_void_161;
f_define_473(F->up, F->z_2940, G_NV((*(P174)rt_nil_check(F->n_2937)).line_));
} else {
F->m_2939 = (*(P117)rt_nil_check(F->y_2938)).members_;
while ((F->m_2939 != NULL)) {
if ((!G_NV((*(P117)rt_nil_check(F->m_2939)).hidden_))) {
F->old_2941 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2939)).name_)));
if ((!f_overloadable_449(F->up, F->m_2939))) {
if ((F->old_2941 == NULL)) {
f_copy_sym_1067(F->up, F->m_2939, &F->z_2940);
(*(P117)rt_nil_check(F->z_2940)).from_use_ = 1;
f_define_473(F->up, F->z_2940, G_NV((*(P174)rt_nil_check(F->n_2937)).line_));
} else if (((G_NV((*(P117)rt_nil_check(F->old_2941)).from_use_) && (G_NV((*(P117)rt_nil_check(F->old_2941)).depth_) == G_NV(F->up->depth_120))) && (!f_same_entity_1086(F->up, F->old_2941, F->m_2939)))) {
(*(P117)rt_nil_check(F->old_2941)).kind_ = ((rt_int)12LL);
}
} else {
F->clash_2942 = 0;
F->z_2940 = ({ A116 ix2945 = F->up->table_119; ix2945.p[rt_index(f_hash_425(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2939)).name_))), ix2945.lo, ix2945.hi) - ix2945.lo]; });
while ((F->z_2940 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_2940)).name_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2939)).name_))) && f_overloadable_449(F->up, F->z_2940)) && f_visible_sym_430(F->up, F->z_2940))) {
if (f_same_entity_1086(F->up, F->z_2940, F->m_2939)) {
F->clash_2942 = 1;
} else if (((((!G_NV((*(P117)rt_nil_check(F->z_2940)).from_use_)) && f_same_types_464(F->up, (*(P117)rt_nil_check(F->z_2940)).params_, (*(P117)rt_nil_check(F->m_2939)).params_)) && f_same_452(F->up, (*(P117)rt_nil_check(F->z_2940)).result_, (*(P117)rt_nil_check(F->m_2939)).result_)) && ((G_NV((*(P117)rt_nil_check(F->z_2940)).kind_) != ((rt_int)7LL)) || f_same_452(F->up, (*(P117)rt_nil_check(F->z_2940)).t_, (*(P117)rt_nil_check(F->m_2939)).t_)))) {
F->clash_2942 = 1;
}
}
F->z_2940 = (*(P117)rt_nil_check(F->z_2940)).chain_;
}
L_end_2946: ;
if (((!G_NV(F->clash_2942)) && f_usable_over_1083(F->up, F->old_2941))) {
f_copy_sym_1067(F->up, F->m_2939, &F->z_2940);
(*(P117)rt_nil_check(F->z_2940)).from_use_ = 1;
f_define_473(F->up, F->z_2940, G_NV((*(P174)rt_nil_check(F->n_2937)).line_));
}
}
}
F->m_2939 = (*(P117)rt_nil_check(F->m_2939)).mnext_;
}
L_end_2944: ;
}
F->n_2937 = (*(P174)rt_nil_check(F->n_2937)).next_;
}
L_end_2943: ;
ret_:

  return;
}

static int f_usable_over_1083(struct f_greenc_1fr *up_, P117 old_1082) {
  struct f_usable_over_1083fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->old_1082 = old_1082;
if ((F->old_1082 == NULL)) {
F->result_ = 1;
goto ret_;
}
F->result_ = (f_overloadable_449(F->up, F->old_1082) || G_NV((*(P117)rt_nil_check(F->old_1082)).from_use_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_entity_1086(struct f_greenc_1fr *up_, P117 a_1084, P117 b_1085) {
  struct f_same_entity_1086fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_1084 = a_1084;
F->b_1085 = b_1085;
if ((G_NV((*(P117)rt_nil_check(F->a_1084)).kind_) != G_NV((*(P117)rt_nil_check(F->b_1085)).kind_))) {
F->result_ = 0;
goto ret_;
} else if ((((*(P117)rt_nil_check(F->a_1084)).cname_ != NULL) && ((*(P117)rt_nil_check(F->b_1085)).cname_ != NULL))) {
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->a_1084)).cname_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_1085)).cname_)));
goto ret_;
} else if ((((*(P117)rt_nil_check(F->a_1084)).access_path_ != NULL) && ((*(P117)rt_nil_check(F->b_1085)).access_path_ != NULL))) {
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->a_1084)).access_path_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_1085)).access_path_)));
goto ret_;
}
F->result_ = (((*(P117)rt_nil_check(F->a_1084)).t_ == (*(P117)rt_nil_check(F->b_1085)).t_) && ((*(P117)rt_nil_check(F->a_1084)).decl_ == (*(P117)rt_nil_check(F->b_1085)).decl_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_fits_1091(struct f_greenc_1fr *up_, P117 y_1087, P174 args_1088, P122 want_1089, int *ok_1090) {
  struct f_fits_1091fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1087 = y_1087;
F->args_1088 = args_1088;
F->want_1089 = want_1089;
F->ok_1090 = ok_1090;
F->pm_2947 = NULL;
F->pm_2947 = (*(P117)rt_nil_check(F->y_1087)).params_;
F->a_2948 = NULL;
F->t_2949 = NULL;
F->c_2950 = NULL;
F->v_2951 = NULL;
F->ro_2952 = INT_MIN;
F->saved_2953 = NULL;
F->saved_2953 = F->up->code_136;
F->used_2954 = INT64_MIN;
F->used_2954 = ((rt_int)0LL);
(*F->ok_1090) = 1;
F->up->trial_155 = rt_add(G_NV(F->up->trial_155), ((rt_int)1LL));
F->up->code_136 = f_new_buffer_258(F->up);
{
{ rt_frame xf2956;
if (RT_TRY(xf2956)) {
while ((G_NV((*F->ok_1090)) && (F->pm_2947 != NULL))) {
F->a_2948 = f_actual_for_1017(F->up, F->args_1088, F->pm_2947, (*(P117)rt_nil_check(F->y_1087)).params_);
if ((F->a_2948 == NULL)) {
(*F->ok_1090) = ((*(P1887)rt_nil_check(F->pm_2947)).dflt_ != NULL);
} else {
F->used_2954 = rt_add(G_NV(F->used_2954), ((rt_int)1LL));
if ((((G_NV((*(P174)rt_nil_check(F->a_2948)).flag_) != ((rt_int)0LL)) && (G_NV((*(P174)rt_nil_check(F->a_2948)).flag_) != ((rt_int)4LL))) && (G_NV((*(P174)rt_nil_check(F->a_2948)).flag_) != G_NV((*(P1887)rt_nil_check(F->pm_2947)).mode_)))) {
(*F->ok_1090) = 0;
} else if ((G_NV((*(P1887)rt_nil_check(F->pm_2947)).mode_) == ((rt_int)1LL))) {
f_gexpr_819(F->up, F->a_2948, (*(P1887)rt_nil_check(F->pm_2947)).t_, &F->t_2949, &F->v_2951);
(*F->ok_1090) = (f_same_452(F->up, F->t_2949, (*(P1887)rt_nil_check(F->pm_2947)).t_) || ((G_NV((*(P122)rt_nil_check(F->t_2949)).kind_) == ((rt_int)10LL)) && (G_NV((*(P122)rt_nil_check((*(P1887)rt_nil_check(F->pm_2947)).t_)).kind_) == ((rt_int)8LL))));
} else {
f_lvalue_775(F->up, F->a_2948, &F->v_2951, &F->t_2949, &F->c_2950, &F->ro_2952);
 (void)rt_range(F->ro_2952, 0, 1);
(*F->ok_1090) = f_same_452(F->up, F->t_2949, (*(P1887)rt_nil_check(F->pm_2947)).t_);
}
}
F->pm_2947 = (*(P1887)rt_nil_check(F->pm_2947)).next_;
}
L_end_2958: ;
if ((G_NV(F->used_2954) != f_list_len_316(F->up, F->args_1088))) {
(*F->ok_1090) = 0;
}
if (((G_NV((*F->ok_1090)) && (F->want_1089 != NULL)) && (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_1087)).result_)).kind_) != ((rt_int)9LL)))) {
(*F->ok_1090) = (f_same_452(F->up, (*(P117)rt_nil_check(F->y_1087)).result_, F->want_1089) || (G_NV((*(P122)rt_nil_check(F->want_1089)).kind_) == ((rt_int)9LL)));
}
RT_POP(xf2956);
} else {
RT_POP(xf2956);
int x2957 = rt_xcur;
if (rt_g_aborted()) rt_raise(x2957);
if (0 || x2957 == ex_compile_error_108) {
(*F->ok_1090) = 0;
} else {
rt_raise(x2957);
}
}
}

}
L_end_2955: ;
F->up->trial_155 = rt_sub(G_NV(F->up->trial_155), ((rt_int)1LL));
F->up->code_136 = F->saved_2953;
ret_:

  return;
}

static int f_is_builtin_1093(struct f_greenc_1fr *up_, rt_gstr n_1092) {
  struct f_is_builtin_1093fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1092 = cp_rt_gstr(n_1092);
F->result_ = (((eq_rt_gstr(F->n_1092, rt_g_lit("PUT", 3)) || eq_rt_gstr(F->n_1092, rt_g_lit("GET", 3))) || eq_rt_gstr(F->n_1092, rt_g_lit("ABS", 3))) || eq_rt_gstr(F->n_1092, rt_g_lit("SET_PRIORITY", 12)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_resolve_overload_1100(struct f_greenc_1fr *up_, rt_gstr name_1094, P174 args_1095, int is_stmt_1096, P122 want_1097, rt_int line_1098, P117 *y_1099) {
  struct f_resolve_overload_1100fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1094 = cp_rt_gstr(name_1094);
F->args_1095 = args_1095;
F->is_stmt_1096 = is_stmt_1096;
F->want_1097 = want_1097;
F->line_1098 = line_1098;
F->y_1099 = y_1099;
F->z_2959 = NULL;
F->w_2960 = NULL;
F->first_2961 = NULL;
F->found_2962 = NULL;
F->n_2963 = INT64_MIN;
F->n_2963 = ((rt_int)0LL);
F->ok_2964 = INT_MIN;
F->hidden_2965 = INT_MIN;
{ rt_int lo2968 = ((rt_int)1LL), hi2969 = ((rt_int)2LL);
for (rt_int it2970 = lo2968; it2970 <= hi2969; it2970++) {
F->pass_2967 = it2970;
F->z_2959 = ({ A116 ix2971 = F->up->table_119; ix2971.p[rt_index(f_hash_425(F->up, F->name_1094), ix2971.lo, ix2971.hi) - ix2971.lo]; });
F->n_2963 = ((rt_int)0LL);
F->found_2962 = NULL;
while ((F->z_2959 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_2959)).name_)), F->name_1094) && ((G_NV((*(P117)rt_nil_check(F->z_2959)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->z_2959)).kind_) == ((rt_int)4LL)))) && f_visible_sym_430(F->up, F->z_2959))) {
if ((F->first_2961 == NULL)) {
F->first_2961 = F->z_2959;
}
F->hidden_2965 = 0;
F->w_2960 = ({ A116 ix2973 = F->up->table_119; ix2973.p[rt_index(f_hash_425(F->up, F->name_1094), ix2973.lo, ix2973.hi) - ix2973.lo]; });
while ((F->w_2960 != F->z_2959)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->w_2960)).name_)), F->name_1094) && ((G_NV((*(P117)rt_nil_check(F->w_2960)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->w_2960)).kind_) == ((rt_int)4LL))))) {
if (f_same_profile_1103(F->up, F->w_2960, F->z_2959)) {
F->hidden_2965 = 1;
}
}
F->w_2960 = (*(P117)rt_nil_check(F->w_2960)).chain_;
}
L_end_2974: ;
if (((!G_NV(F->hidden_2965)) && ((G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->z_2959)).result_)).kind_) == ((rt_int)9LL)) == F->is_stmt_1096))) {
if ((F->pass_2967 == ((rt_int)1LL))) {
f_fits_1091(F->up, F->z_2959, F->args_1095, F->want_1097, &F->ok_2964);
 (void)rt_range(F->ok_2964, 0, 1);
} else {
f_fits_1091(F->up, F->z_2959, F->args_1095, NULL, &F->ok_2964);
 (void)rt_range(F->ok_2964, 0, 1);
}
if (G_NV(F->ok_2964)) {
if ((F->found_2962 != NULL)) {
f_fail_257(F->up, F->line_1098, cat_rt_gstr(cat_rt_gstr(rt_g_lit("the call of ", 12), F->name_1094), rt_g_lit(" is ambiguous: several declarations fit (RM79 6.6)", 50)));
}
F->found_2962 = F->z_2959;
}
}
}
F->z_2959 = (*(P117)rt_nil_check(F->z_2959)).chain_;
}
L_end_2972: ;
if ((F->found_2962 != NULL)) {
(*F->y_1099) = F->found_2962;
goto ret_;
}
}
}
L_end_2966: ;
if (f_is_builtin_1093(F->up, F->name_1094)) {
(*F->y_1099) = NULL;
goto ret_;
}
F->z_2959 = ({ A116 ix2975 = F->up->table_119; ix2975.p[rt_index(f_hash_425(F->up, F->name_1094), ix2975.lo, ix2975.hi) - ix2975.lo]; });
while ((F->z_2959 != NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_2959)).name_)), F->name_1094) && ((G_NV((*(P117)rt_nil_check(F->z_2959)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->z_2959)).kind_) == ((rt_int)4LL))))) {
F->n_2963 = rt_add(G_NV(F->n_2963), ((rt_int)1LL));
}
F->z_2959 = (*(P117)rt_nil_check(F->z_2959)).chain_;
}
L_end_2976: ;
if ((G_NV(F->n_2963) > ((rt_int)1LL))) {
f_fail_257(F->up, F->line_1098, cat_rt_gstr(cat_rt_gstr(rt_g_lit("no declaration of ", 18), F->name_1094), rt_g_lit(" fits these actual parameters", 29)));
}
(*F->y_1099) = F->first_2961;
ret_:

  return;
}

static int f_same_profile_1103(struct f_greenc_1fr *up_, P117 a_1101, P117 b_1102) {
  struct f_same_profile_1103fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_1101 = a_1101;
F->b_1102 = b_1102;
if (((!f_same_types_464(F->up, (*(P117)rt_nil_check(F->a_1101)).params_, (*(P117)rt_nil_check(F->b_1102)).params_)) || (!f_same_452(F->up, (*(P117)rt_nil_check(F->a_1101)).result_, (*(P117)rt_nil_check(F->b_1102)).result_)))) {
F->result_ = 0;
goto ret_;
} else if ((((*(P117)rt_nil_check(F->a_1101)).cname_ != NULL) && ((*(P117)rt_nil_check(F->b_1102)).cname_ != NULL))) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->a_1101)).cname_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_1102)).cname_)))) {
F->result_ = 1;
goto ret_;
}
}
F->result_ = f_same_signature_467(F->up, (*(P117)rt_nil_check(F->a_1101)).params_, (*(P117)rt_nil_check(F->b_1102)).params_);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_resolve_member_overload_1111(struct f_greenc_1fr *up_, rt_gstr p_1104, rt_gstr name_1105, P174 args_1106, int is_stmt_1107, P122 want_1108, rt_int line_1109, P117 *y_1110) {
  struct f_resolve_member_overload_1111fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1104 = cp_rt_gstr(p_1104);
F->name_1105 = cp_rt_gstr(name_1105);
F->args_1106 = args_1106;
F->is_stmt_1107 = is_stmt_1107;
F->want_1108 = want_1108;
F->line_1109 = line_1109;
F->y_1110 = y_1110;
F->pk_2977 = NULL;
F->pk_2977 = f_lookup_path_1056(F->up, F->p_1104);
F->z_2978 = NULL;
F->found_2979 = NULL;
F->n_2980 = INT64_MIN;
F->n_2980 = ((rt_int)0LL);
F->ok_2981 = INT_MIN;
if ((F->pk_2977 == NULL)) {
goto ret_;
}
{ rt_int lo2984 = ((rt_int)1LL), hi2985 = ((rt_int)2LL);
for (rt_int it2986 = lo2984; it2986 <= hi2985; it2986++) {
F->pass_2983 = it2986;
F->z_2978 = (*(P117)rt_nil_check(F->pk_2977)).members_;
F->n_2980 = ((rt_int)0LL);
F->found_2979 = NULL;
while ((F->z_2978 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_2978)).name_)), F->name_1105) && ((G_NV((*(P117)rt_nil_check(F->z_2978)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->z_2978)).kind_) == ((rt_int)4LL)))) && (!G_NV((*(P117)rt_nil_check(F->z_2978)).hidden_)))) {
F->n_2980 = rt_add(G_NV(F->n_2980), ((rt_int)1LL));
if (((G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->z_2978)).result_)).kind_) == ((rt_int)9LL)) == F->is_stmt_1107)) {
if ((F->pass_2983 == ((rt_int)1LL))) {
f_fits_1091(F->up, F->z_2978, F->args_1106, F->want_1108, &F->ok_2981);
 (void)rt_range(F->ok_2981, 0, 1);
} else {
f_fits_1091(F->up, F->z_2978, F->args_1106, NULL, &F->ok_2981);
 (void)rt_range(F->ok_2981, 0, 1);
}
if (G_NV(F->ok_2981)) {
if (((F->found_2979 != NULL) && (!f_same_profile_1103(F->up, F->found_2979, F->z_2978)))) {
f_fail_257(F->up, F->line_1109, cat_rt_gstr(cat_rt_gstr(rt_g_lit("the call of ", 12), F->name_1105), rt_g_lit(" is ambiguous: several declarations fit (RM79 6.6)", 50)));
}
F->found_2979 = F->z_2978;
}
}
}
F->z_2978 = (*(P117)rt_nil_check(F->z_2978)).mnext_;
}
L_end_2987: ;
if ((F->found_2979 != NULL)) {
(*F->y_1110) = F->found_2979;
goto ret_;
}
}
}
L_end_2982: ;
if ((G_NV(F->n_2980) > ((rt_int)1LL))) {
f_fail_257(F->up, F->line_1109, cat_rt_gstr(cat_rt_gstr(rt_g_lit("no declaration of ", 18), F->name_1105), rt_g_lit(" fits these actual parameters", 29)));
}
ret_:

  return;
}

static void f_user_operator_1117(struct f_greenc_1fr *up_, P174 e_1112, P122 want_1113, P122 *t_1114, P140 *r_1115, int *done_1116) {
  struct f_user_operator_1117fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1112 = e_1112;
F->want_1113 = want_1113;
F->t_1114 = t_1114;
F->r_1115 = r_1115;
F->done_1116 = done_1116;
F->op_2988 = NULL;
F->op_2988 = (*(P174)rt_nil_check(F->e_1112)).name_;
F->negate_2989 = INT_MIN;
F->negate_2989 = 0;
F->y_2990 = NULL;
F->call_2991 = NULL;
F->fname_2992 = NULL;
F->l_2993 = NULL;
F->rt_2994 = NULL;
F->ok_2995 = INT_MIN;
(*F->done_1116) = 0;
if (eq_rt_gstr((*(P140)rt_nil_check(F->op_2988)), rt_g_lit("/=", 2))) {
F->op_2988 = f_mk_236(F->up, rt_g_lit("=", 1));
F->negate_2989 = 1;
}
if ((f_lookup_432(F->up, (*(P140)rt_nil_check(F->op_2988))) == NULL)) {
goto ret_;
}
F->l_2993 = f_nn_310(F->up, G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1112)).a_)).kind_), G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1112)).a_)).line_));
as_R175(&(*(P174)rt_nil_check(F->l_2993)), (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1112)).a_)));
(*(P174)rt_nil_check(F->l_2993)).next_ = NULL;
(*(P174)rt_nil_check(F->l_2993)).formal_ = NULL;
(*(P174)rt_nil_check(F->l_2993)).flag_ = ((rt_int)0LL);
if ((G_NV((*(P174)rt_nil_check(F->e_1112)).kind_) == ((rt_int)7LL))) {
F->rt_2994 = f_nn_310(F->up, G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1112)).b_)).kind_), G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1112)).b_)).line_));
as_R175(&(*(P174)rt_nil_check(F->rt_2994)), (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1112)).b_)));
(*(P174)rt_nil_check(F->rt_2994)).next_ = NULL;
(*(P174)rt_nil_check(F->rt_2994)).formal_ = NULL;
(*(P174)rt_nil_check(F->rt_2994)).flag_ = ((rt_int)0LL);
(*(P174)rt_nil_check(F->l_2993)).next_ = F->rt_2994;
}
F->y_2990 = ({ A116 ix2996 = F->up->table_119; ix2996.p[rt_index(f_hash_425(F->up, (*(P140)rt_nil_check(F->op_2988))), ix2996.lo, ix2996.hi) - ix2996.lo]; });
while ((F->y_2990 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2990)).name_)), (*(P140)rt_nil_check(F->op_2988))) && (G_NV((*(P117)rt_nil_check(F->y_2990)).kind_) == ((rt_int)3LL))) && f_visible_sym_430(F->up, F->y_2990))) {
f_fits_1091(F->up, F->y_2990, F->l_2993, NULL, &F->ok_2995);
 (void)rt_range(F->ok_2995, 0, 1);
if (G_NV(F->ok_2995)) {
F->fname_2992 = f_nn_310(F->up, ((rt_int)5LL), G_NV((*(P174)rt_nil_check(F->e_1112)).line_));
(*(P174)rt_nil_check(F->fname_2992)).name_ = F->op_2988;
F->call_2991 = f_nn_310(F->up, ((rt_int)8LL), G_NV((*(P174)rt_nil_check(F->e_1112)).line_));
(*(P174)rt_nil_check(F->call_2991)).a_ = F->fname_2992;
(*(P174)rt_nil_check(F->call_2991)).b_ = F->l_2993;
F->up->call_want_224 = NULL;
f_gcall_with_1047(F->up, F->call_2991, F->y_2990, &(*F->t_1114), &(*F->r_1115));
if (G_NV(F->negate_2989)) {
(*F->r_1115) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!", 2), (*(P140)rt_nil_check((*F->r_1115)))), one_rt_gstr(41)));
}
(*F->done_1116) = 1;
goto ret_;
}
}
F->y_2990 = (*(P117)rt_nil_check(F->y_2990)).chain_;
}
L_end_2997: ;
ret_:

  return;
}

static void f_task_p_1119(struct f_greenc_1fr *up_, P174 *res_1118) {
  struct f_task_p_1119fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1118 = res_1118;
F->x_2998 = NULL;
F->r_2999 = NULL;
F->line_3000 = INT64_MIN;
F->line_3000 = f_cur_line_317(F->up);
f_expect_kw_332(F->up, rt_g_lit("TASK", 4));
if (f_at_kw_319(F->up, rt_g_lit("BODY", 4))) {
f_skip_330(F->up);
F->x_2998 = f_nn_310(F->up, ((rt_int)51LL), G_NV(F->line_3000));
f_expect_id_336(F->up, &(*(P174)rt_nil_check(F->x_2998)).name_);
f_expect_kw_332(F->up, rt_g_lit("IS", 2));
if (f_at_kw_319(F->up, rt_g_lit("SEPARATE", 8))) {
f_skip_330(F->up);
f_expect_op_334(F->up, rt_g_lit(";", 1));
(*(P174)rt_nil_check(F->x_2998)).flag_ = ((rt_int)4LL);
(*F->res_1118) = F->x_2998;
goto ret_;
}
f_body_part_401(F->up, F->x_2998);
} else {
F->x_2998 = f_nn_310(F->up, ((rt_int)50LL), G_NV(F->line_3000));
f_expect_id_336(F->up, &(*(P174)rt_nil_check(F->x_2998)).name_);
if (((f_at_kw_319(F->up, rt_g_lit("IS", 2)) && (f_kind_at_325(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_327(F->up, ((rt_int)1LL)), rt_g_lit("NEW", 3)))) {
f_instantiation_1266(F->up, F->x_2998, &(*F->res_1118));
goto ret_;
}
if (f_at_kw_319(F->up, rt_g_lit("RENAMES", 7))) {
f_skip_330(F->up);
(*(P174)rt_nil_check(F->x_2998)).flag_ = ((rt_int)3LL);
f_name_p_368(F->up, &(*(P174)rt_nil_check(F->x_2998)).b_);
f_expect_op_334(F->up, rt_g_lit(";", 1));
(*F->res_1118) = F->x_2998;
goto ret_;
}
if (f_at_op_321(F->up, rt_g_lit("(", 1))) {
f_skip_330(F->up);
f_discrete_range_p_372(F->up, &(*(P174)rt_nil_check(F->x_2998)).a_);
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->x_2998)).a_)).kind_) == ((rt_int)5LL))) {
F->r_2999 = f_nn_310(F->up, ((rt_int)80LL), G_NV(F->line_3000));
(*(P174)rt_nil_check(F->r_2999)).name_ = (*(P174)rt_nil_check((*(P174)rt_nil_check(F->x_2998)).a_)).name_;
(*(P174)rt_nil_check(F->x_2998)).a_ = F->r_2999;
}
f_expect_op_334(F->up, rt_g_lit(")", 1));
}
if (f_at_kw_319(F->up, rt_g_lit("IS", 2))) {
f_skip_330(F->up);
f_decl_part_389(F->up, &(*(P174)rt_nil_check(F->x_2998)).c_);
if (f_at_kw_319(F->up, rt_g_lit("PRIVATE", 7))) {
f_skip_330(F->up);
f_decl_part_389(F->up, &(*(P174)rt_nil_check(F->x_2998)).d_);
}
f_expect_kw_332(F->up, rt_g_lit("END", 3));
}
}
if (f_at_kind_323(F->up, ((rt_int)1LL))) {
f_skip_330(F->up);
}
f_expect_op_334(F->up, rt_g_lit(";", 1));
(*F->res_1118) = F->x_2998;
ret_:

  return;
}

static void f_entry_p_1121(struct f_greenc_1fr *up_, P174 *res_1120) {
  struct f_entry_p_1121fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1120 = res_1120;
F->x_3001 = NULL;
f_expect_kw_332(F->up, rt_g_lit("ENTRY", 5));
F->x_3001 = f_nn_310(F->up, ((rt_int)52LL), f_cur_line_317(F->up));
f_expect_id_336(F->up, &(*(P174)rt_nil_check(F->x_3001)).name_);
if ((f_at_op_321(F->up, rt_g_lit("(", 1)) && (!((f_kind_at_325(F->up, ((rt_int)1LL)) == ((rt_int)1LL)) && (eq_rt_gstr(f_text_at_327(F->up, ((rt_int)2LL)), rt_g_lit(":", 1)) || eq_rt_gstr(f_text_at_327(F->up, ((rt_int)2LL)), rt_g_lit(",", 1))))))) {
f_skip_330(F->up);
if (((f_at_kind_323(F->up, ((rt_int)1LL)) && (f_kind_at_325(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && eq_rt_gstr(f_text_at_327(F->up, ((rt_int)1LL)), rt_g_lit(")", 1)))) {
f_subtype_ind_374(F->up, &(*(P174)rt_nil_check(F->x_3001)).b_);
} else {
f_discrete_range_p_372(F->up, &(*(P174)rt_nil_check(F->x_3001)).b_);
}
f_expect_op_334(F->up, rt_g_lit(")", 1));
}
if (f_at_op_321(F->up, rt_g_lit("(", 1))) {
f_formal_part_395(F->up, &(*(P174)rt_nil_check(F->x_3001)).a_);
}
f_expect_op_334(F->up, rt_g_lit(";", 1));
(*F->res_1120) = F->x_3001;
ret_:

  return;
}

static void f_accept_p_1123(struct f_greenc_1fr *up_, P174 *res_1122) {
  struct f_accept_p_1123fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1122 = res_1122;
F->x_3002 = NULL;
f_expect_kw_332(F->up, rt_g_lit("ACCEPT", 6));
F->x_3002 = f_nn_310(F->up, ((rt_int)34LL), f_cur_line_317(F->up));
f_expect_id_336(F->up, &(*(P174)rt_nil_check(F->x_3002)).name_);
if ((f_at_op_321(F->up, rt_g_lit("(", 1)) && (!((f_kind_at_325(F->up, ((rt_int)1LL)) == ((rt_int)1LL)) && (eq_rt_gstr(f_text_at_327(F->up, ((rt_int)2LL)), rt_g_lit(":", 1)) || eq_rt_gstr(f_text_at_327(F->up, ((rt_int)2LL)), rt_g_lit(",", 1))))))) {
f_skip_330(F->up);
f_expr_347(F->up, &(*(P174)rt_nil_check(F->x_3002)).c_);
f_expect_op_334(F->up, rt_g_lit(")", 1));
}
if (f_at_op_321(F->up, rt_g_lit("(", 1))) {
f_formal_part_395(F->up, &(*(P174)rt_nil_check(F->x_3002)).a_);
}
if (f_at_kw_319(F->up, rt_g_lit("DO", 2))) {
f_skip_330(F->up);
(*(P174)rt_nil_check(F->x_3002)).flag_ = ((rt_int)1LL);
f_statements_408(F->up, &(*(P174)rt_nil_check(F->x_3002)).b_);
f_expect_kw_332(F->up, rt_g_lit("END", 3));
if (f_at_kind_323(F->up, ((rt_int)1LL))) {
f_skip_330(F->up);
}
}
f_expect_op_334(F->up, rt_g_lit(";", 1));
(*F->res_1122) = F->x_3002;
ret_:

  return;
}

static void f_delay_p_1125(struct f_greenc_1fr *up_, P174 *res_1124) {
  struct f_delay_p_1125fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1124 = res_1124;
F->x_3003 = NULL;
f_expect_kw_332(F->up, rt_g_lit("DELAY", 5));
F->x_3003 = f_nn_310(F->up, ((rt_int)32LL), f_cur_line_317(F->up));
f_simple_expr_355(F->up, &(*(P174)rt_nil_check(F->x_3003)).a_);
f_expect_op_334(F->up, rt_g_lit(";", 1));
(*F->res_1124) = F->x_3003;
ret_:

  return;
}

static void f_designators_1127(struct f_greenc_1fr *up_, P174 *res_1126) {
  struct f_designators_1127fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1126 = res_1126;
F->head_3004 = NULL;
F->tail_3005 = NULL;
F->n_3006 = NULL;
for (;;) {
f_name_p_368(F->up, &F->n_3006);
f_append_314(F->up, &F->head_3004, &F->tail_3005, F->n_3006);
if ((!f_at_op_321(F->up, rt_g_lit(",", 1)))) {
goto L_end_3007;
}
f_skip_330(F->up);
}
L_end_3007: ;
f_expect_op_334(F->up, rt_g_lit(";", 1));
(*F->res_1126) = F->head_3004;
ret_:

  return;
}

static void f_parse_task_statement_1129(struct f_greenc_1fr *up_, P174 *res_1128) {
  struct f_parse_task_statement_1129fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1128 = res_1128;
F->x_3008 = NULL;
F->alt_3009 = NULL;
F->head_3010 = NULL;
F->tail_3011 = NULL;
F->line_3012 = INT64_MIN;
F->line_3012 = f_cur_line_317(F->up);
(*F->res_1128) = NULL;
if (f_at_kw_319(F->up, rt_g_lit("INITIATE", 8))) {
f_skip_330(F->up);
F->x_3008 = f_nn_310(F->up, ((rt_int)33LL), G_NV(F->line_3012));
f_designators_1127(F->up, &(*(P174)rt_nil_check(F->x_3008)).a_);
(*F->res_1128) = F->x_3008;
} else if (f_at_kw_319(F->up, rt_g_lit("ABORT", 5))) {
f_skip_330(F->up);
F->x_3008 = f_nn_310(F->up, ((rt_int)36LL), G_NV(F->line_3012));
f_designators_1127(F->up, &(*(P174)rt_nil_check(F->x_3008)).a_);
(*F->res_1128) = F->x_3008;
} else if (f_at_kw_319(F->up, rt_g_lit("DELAY", 5))) {
f_delay_p_1125(F->up, &(*F->res_1128));
} else if (f_at_kw_319(F->up, rt_g_lit("ACCEPT", 6))) {
f_accept_p_1123(F->up, &(*F->res_1128));
} else if (f_at_kw_319(F->up, rt_g_lit("SELECT", 6))) {
f_skip_330(F->up);
F->x_3008 = f_nn_310(F->up, ((rt_int)35LL), G_NV(F->line_3012));
for (;;) {
F->alt_3009 = f_nn_310(F->up, ((rt_int)64LL), f_cur_line_317(F->up));
if (f_at_kw_319(F->up, rt_g_lit("WHEN", 4))) {
f_skip_330(F->up);
f_expr_347(F->up, &(*(P174)rt_nil_check(F->alt_3009)).a_);
f_expect_op_334(F->up, rt_g_lit("=>", 2));
}
if (f_at_kw_319(F->up, rt_g_lit("ACCEPT", 6))) {
f_accept_p_1123(F->up, &(*(P174)rt_nil_check(F->alt_3009)).b_);
} else if (f_at_kw_319(F->up, rt_g_lit("DELAY", 5))) {
f_delay_p_1125(F->up, &(*(P174)rt_nil_check(F->alt_3009)).b_);
} else {
f_perror_329(F->up, rt_g_lit("a select alternative starts with accept or delay", 48));
}
f_statements_408(F->up, &(*(P174)rt_nil_check(F->alt_3009)).c_);
f_append_314(F->up, &F->head_3010, &F->tail_3011, F->alt_3009);
if ((!f_at_kw_319(F->up, rt_g_lit("OR", 2)))) {
goto L_end_3013;
}
f_skip_330(F->up);
}
L_end_3013: ;
if (f_at_kw_319(F->up, rt_g_lit("ELSE", 4))) {
f_skip_330(F->up);
(*(P174)rt_nil_check(F->x_3008)).flag_ = ((rt_int)1LL);
f_statements_408(F->up, &(*(P174)rt_nil_check(F->x_3008)).b_);
}
f_expect_kw_332(F->up, rt_g_lit("END", 3));
f_expect_kw_332(F->up, rt_g_lit("SELECT", 6));
f_expect_op_334(F->up, rt_g_lit(";", 1));
(*(P174)rt_nil_check(F->x_3008)).a_ = F->head_3010;
(*F->res_1128) = F->x_3008;
}
ret_:

  return;
}

static void f_path_at_1133(struct f_greenc_1fr *up_, rt_int level_1130, rt_gstr field_1131, P140 *r_1132) {
  struct f_path_at_1133fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->level_1130 = level_1130;
F->field_1131 = cp_rt_gstr(field_1131);
F->r_1132 = r_1132;
if ((F->level_1130 <= ((rt_int)0LL))) {
(*F->r_1132) = f_mk_236(F->up, F->field_1131);
goto ret_;
}
(*F->r_1132) = f_mk_236(F->up, rt_g_lit("F", 1));
{ rt_int lo3016 = ((rt_int)1LL), hi3017 = rt_sub(G_NV(F->up->cur_level_139), F->level_1130);
for (rt_int it3018 = lo3016; it3018 <= hi3017; it3018++) {
F->i_3015 = it3018;
(*F->r_1132) = f_mk_236(F->up, cat_rt_gstr((*(P140)rt_nil_check((*F->r_1132))), rt_g_lit("->up", 4)));
}
}
L_end_3014: ;
(*F->r_1132) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->r_1132))), rt_g_lit("->", 2)), F->field_1131));
ret_:

  return;
}

static int f_is_task_name_1135(struct f_greenc_1fr *up_, rt_gstr n_1134) {
  struct f_is_task_name_1135fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1134 = cp_rt_gstr(n_1134);
F->y_3019 = NULL;
F->y_3019 = f_lookup_432(F->up, F->n_1134);
if ((!(F->y_3019 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P117)rt_nil_check(F->y_3019)).kind_) == ((rt_int)9LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_task_of_1139(struct f_greenc_1fr *up_, P174 e_1136, P117 *y_1137, P174 *ix_1138) {
  struct f_task_of_1139fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1136 = e_1136;
F->y_1137 = y_1137;
F->ix_1138 = ix_1138;
F->n_3020 = NULL;
F->n_3020 = F->e_1136;
F->a_3021 = NULL;
(*F->ix_1138) = NULL;
if ((G_NV((*(P174)rt_nil_check(F->e_1136)).kind_) == ((rt_int)5LL))) {
F->a_3021 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1136)).name_)));
if (((F->a_3021 != NULL) && ((G_NV((*(P117)rt_nil_check(F->a_3021)).kind_) == ((rt_int)9LL)) && (G_NV((*(P117)rt_nil_check(F->a_3021)).flags_) == ((rt_int)4LL))))) {
f_task_of_1139(F->up, (*(P117)rt_nil_check(F->a_3021)).decl_, &(*F->y_1137), &(*F->ix_1138));
goto ret_;
}
}
if ((G_NV((*(P174)rt_nil_check(F->e_1136)).kind_) == ((rt_int)8LL))) {
F->n_3020 = (*(P174)rt_nil_check(F->e_1136)).a_;
(*F->ix_1138) = (*(P174)rt_nil_check(F->e_1136)).b_;
}
if ((G_NV((*(P174)rt_nil_check(F->n_3020)).kind_) != ((rt_int)5LL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1136)).line_), rt_g_lit("a task name is required", 23));
}
(*F->y_1137) = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_3020)).name_)));
if ((((*F->y_1137) == NULL) || (G_NV((*(P117)rt_nil_check((*F->y_1137))).kind_) != ((rt_int)9LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1136)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_3020)).name_)), rt_g_lit(" is not a task", 14)));
}
if ((((*F->ix_1138) != NULL) && ((*(P117)rt_nil_check((*F->y_1137))).c_ == NULL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1136)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_3020)).name_)), rt_g_lit(" is not a task family", 21)));
}
ret_:

  return;
}

static void f_own_index_1142(struct f_greenc_1fr *up_, P117 t_1140, P140 *r_1141) {
  struct f_own_index_1142fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_1140 = t_1140;
F->r_1141 = r_1141;
F->y_3022 = NULL;
F->y_3022 = f_lookup_432(F->up, cat_rt_gstr(rt_g_lit("INDEX_", 6), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->t_1140)).cname_))));
if ((F->y_3022 == NULL)) {
f_fail_257(F->up, ((rt_int)0LL), rt_g_lit("not inside the body of a task family", 36));
}
f_access_of_756(F->up, F->y_3022, &(*F->r_1141));
ret_:

  return;
}

static void f_member_1147(struct f_greenc_1fr *up_, P117 y_1143, rt_gstr arr_1144, rt_gstr i_1145, P140 *r_1146) {
  struct f_member_1147fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1143 = y_1143;
F->arr_1144 = cp_rt_gstr(arr_1144);
F->i_1145 = cp_rt_gstr(i_1145);
F->r_1146 = r_1146;
F->lo_3023 = NULL;
F->hi_3024 = NULL;
f_path_at_1133(F->up, G_NV((*(P117)rt_nil_check(F->y_1143)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1143)).cname_)), rt_g_lit("lo", 2)), &F->lo_3023);
f_path_at_1133(F->up, G_NV((*(P117)rt_nil_check(F->y_1143)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1143)).cname_)), rt_g_lit("hi", 2)), &F->hi_3024);
(*F->r_1146) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->arr_1144, rt_g_lit("[rt_index(", 10)), F->i_1145), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->lo_3023))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->hi_3024))), rt_g_lit(") - ", 4)), (*(P140)rt_nil_check(F->lo_3023))), one_rt_gstr(93)));
ret_:

  return;
}

static void f_act_path_1150(struct f_greenc_1fr *up_, P117 y_1148, P140 *r_1149) {
  struct f_act_path_1150fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1148 = y_1148;
F->r_1149 = r_1149;
F->i_3025 = NULL;
f_path_at_1133(F->up, G_NV((*(P117)rt_nil_check(F->y_1148)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1148)).cname_)), rt_g_lit("act", 3)), &(*F->r_1149));
if (((*(P117)rt_nil_check(F->y_1148)).c_ != NULL)) {
f_own_index_1142(F->up, F->y_1148, &F->i_3025);
f_member_1147(F->up, F->y_1148, (*(P140)rt_nil_check((*F->r_1149))), (*(P140)rt_nil_check(F->i_3025)), &(*F->r_1149));
}
ret_:

  return;
}

static void f_act_path_i_1154(struct f_greenc_1fr *up_, P117 y_1151, rt_gstr i_1152, P140 *r_1153) {
  struct f_act_path_i_1154fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1151 = y_1151;
F->i_1152 = cp_rt_gstr(i_1152);
F->r_1153 = r_1153;
f_path_at_1133(F->up, G_NV((*(P117)rt_nil_check(F->y_1151)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1151)).cname_)), rt_g_lit("act", 3)), &(*F->r_1153));
f_member_1147(F->up, F->y_1151, (*(P140)rt_nil_check((*F->r_1153))), F->i_1152, &(*F->r_1153));
ret_:

  return;
}

static void f_entry_path_1158(struct f_greenc_1fr *up_, P117 y_1155, rt_gstr i_1156, P140 *r_1157) {
  struct f_entry_path_1158fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1155 = y_1155;
F->i_1156 = cp_rt_gstr(i_1156);
F->r_1157 = r_1157;
F->own_3026 = NULL;
f_path_at_1133(F->up, G_NV((*(P117)rt_nil_check(F->y_1155)).level_), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1155)).access_path_)), &(*F->r_1157));
if (((((*(P117)rt_nil_check(F->y_1155)).members_ != NULL) && ((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1155)).members_)).c_ != NULL)) && (!G_NV((*(P117)rt_nil_check(F->y_1155)).ro_)))) {
if ((({ rt_gstr at3027 = F->i_1156; at3027.hi >= at3027.lo ? at3027.hi - at3027.lo + 1 : (rt_int)0; }) == ((rt_int)0LL))) {
f_own_index_1142(F->up, (*(P117)rt_nil_check(F->y_1155)).members_, &F->own_3026);
f_member_1147(F->up, (*(P117)rt_nil_check(F->y_1155)).members_, (*(P140)rt_nil_check((*F->r_1157))), (*(P140)rt_nil_check(F->own_3026)), &(*F->r_1157));
} else {
f_member_1147(F->up, (*(P117)rt_nil_check(F->y_1155)).members_, (*(P140)rt_nil_check((*F->r_1157))), F->i_1156, &(*F->r_1157));
}
}
ret_:

  return;
}

static void f_declare_slot_1161(struct f_greenc_1fr *up_, rt_gstr ctype_name_1159, rt_gstr field_1160) {
  struct f_declare_slot_1161fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->ctype_name_1159 = cp_rt_gstr(ctype_name_1159);
F->field_1160 = cp_rt_gstr(field_1160);
if (G_NV(F->up->in_func_138)) {
f_put_to_261(F->up, F->up->fields_buf_137, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), F->ctype_name_1159), one_rt_gstr(32)), F->field_1160), one_rt_gstr(59)));
} else {
f_put_to_261(F->up, F->up->out_globals_132, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), F->ctype_name_1159), one_rt_gstr(32)), F->field_1160), one_rt_gstr(59)));
}
ret_:

  return;
}

static void f_task_decl_1163(struct f_greenc_1fr *up_, P174 e_1162) {
  struct f_task_decl_1163fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1162 = e_1162;
if ((G_NV((*(P174)rt_nil_check(F->e_1162)).kind_) == ((rt_int)50LL))) {
f_task_spec_1176(F->up, F->e_1162);
} else if ((G_NV((*(P174)rt_nil_check(F->e_1162)).kind_) == ((rt_int)51LL))) {
f_task_body_1180(F->up, F->e_1162);
} else if ((G_NV((*(P174)rt_nil_check(F->e_1162)).kind_) == ((rt_int)52LL))) {
f_entry_decl_1178(F->up, F->e_1162);
} else {
f_generic_decl_1268(F->up, F->e_1162);
}
ret_:

  return;
}

static void f_family_arg_struct_1164(struct f_greenc_1fr *up_) {
  struct f_family_arg_struct_1164fr *F = rt_alloc(sizeof *F);
F->up = up_;
if ((!G_NV(F->up->famarg_done_212))) {
F->up->famarg_done_212 = 1;
f_put_to_261(F->up, F->up->out_types_128, rt_g_lit("struct rt_famarg { void *up; rt_int i; };", 41));
}
ret_:

  return;
}

static void f_family_bounds_1169(struct f_greenc_1fr *up_, P174 b_1165, P117 y_1166, P140 x_1167, int per_member_1168) {
  struct f_family_bounds_1169fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_1165 = b_1165;
F->y_1166 = y_1166;
F->x_1167 = x_1167;
F->per_member_1168 = per_member_1168;
F->lo_3028 = NULL;
F->hi_3029 = NULL;
F->v_3030 = NULL;
F->d_3031 = NULL;
F->mlo_3032 = NULL;
F->mhi_3033 = NULL;
F->vt_3034 = NULL;
F->c_3035 = NULL;
(*(P117)rt_nil_check(F->y_1166)).c_ = f_new_cons_481(F->up);
if (F->per_member_1168) {
f_declare_slot_1161(F->up, rt_g_lit("rt_entry **", 11), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1166)).access_path_)));
} else {
f_declare_slot_1161(F->up, rt_g_lit("rt_entry *", 10), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1166)).access_path_)));
}
f_declare_slot_1161(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1166)).cname_)), rt_g_lit("flo", 3)));
f_declare_slot_1161(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1166)).cname_)), rt_g_lit("fhi", 3)));
f_path_at_1133(F->up, G_NV((*(P117)rt_nil_check(F->y_1166)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1166)).cname_)), rt_g_lit("flo", 3)), &F->lo_3028);
f_path_at_1133(F->up, G_NV((*(P117)rt_nil_check(F->y_1166)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1166)).cname_)), rt_g_lit("fhi", 3)), &F->hi_3029);
f_discrete_bounds_530(F->up, F->b_1165, NULL, &F->vt_3034, &F->v_3030, &F->d_3031);
(*(P117)rt_nil_check(F->y_1166)).t_ = F->vt_3034;
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->lo_3028)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->v_3030))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->hi_3029))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->d_3031))), one_rt_gstr(59)));
if (F->per_member_1168) {
f_path_at_1133(F->up, G_NV((*(P117)rt_nil_check(F->up->cur_task_210)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->cur_task_210)).cname_)), rt_g_lit("lo", 2)), &F->mlo_3032);
f_path_at_1133(F->up, G_NV((*(P117)rt_nil_check(F->up->cur_task_210)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->cur_task_210)).cname_)), rt_g_lit("hi", 2)), &F->mhi_3033);
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->x_1167)), rt_g_lit(" = rt_alloc(sizeof(rt_entry *) * (size_t)(", 42)), (*(P140)rt_nil_check(F->mhi_3033))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->mlo_3032))), rt_g_lit(" \? ", 3)), (*(P140)rt_nil_check(F->mhi_3033))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->mlo_3032))), rt_g_lit(" + 1 : 1));", 11)));
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int m_ = 0; m_ <= ", 26), (*(P140)rt_nil_check(F->mhi_3033))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->mlo_3032))), rt_g_lit("; m_++) { ", 10)), (*(P140)rt_nil_check(F->x_1167))), rt_g_lit("[m_] = rt_alloc(sizeof(rt_entry) * (size_t)(", 44)), (*(P140)rt_nil_check(F->hi_3029))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->lo_3028))), rt_g_lit(" \? ", 3)), (*(P140)rt_nil_check(F->hi_3029))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->lo_3028))), rt_g_lit(" + 1 : 1)); for (rt_int k_ = 0; k_ <= ", 38)), (*(P140)rt_nil_check(F->hi_3029))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->lo_3028))), rt_g_lit("; k_++) rt_entry_init(&", 23)), (*(P140)rt_nil_check(F->x_1167))), rt_g_lit("[m_][k_]); }", 12)));
goto ret_;
}
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->x_1167)), rt_g_lit(" = rt_alloc(sizeof(rt_entry) * (size_t)(", 40)), (*(P140)rt_nil_check(F->hi_3029))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->lo_3028))), rt_g_lit(" \? ", 3)), (*(P140)rt_nil_check(F->hi_3029))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->lo_3028))), rt_g_lit(" + 1 : 1));", 11)));
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = 0; k_ <= ", 26), (*(P140)rt_nil_check(F->hi_3029))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->lo_3028))), rt_g_lit("; k_++) rt_entry_init(&", 23)), (*(P140)rt_nil_check(F->x_1167))), rt_g_lit("[k_]);", 6)));
ret_:

  return;
}

static void f_entry_family_slot_1174(struct f_greenc_1fr *up_, P117 y_1170, rt_gstr base_1171, rt_gstr i_1172, P140 *r_1173) {
  struct f_entry_family_slot_1174fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1170 = y_1170;
F->base_1171 = cp_rt_gstr(base_1171);
F->i_1172 = cp_rt_gstr(i_1172);
F->r_1173 = r_1173;
F->lo_3036 = NULL;
F->hi_3037 = NULL;
f_path_at_1133(F->up, G_NV((*(P117)rt_nil_check(F->y_1170)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1170)).cname_)), rt_g_lit("flo", 3)), &F->lo_3036);
f_path_at_1133(F->up, G_NV((*(P117)rt_nil_check(F->y_1170)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1170)).cname_)), rt_g_lit("fhi", 3)), &F->hi_3037);
(*F->r_1173) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->base_1171, rt_g_lit("[rt_index(", 10)), F->i_1172), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->lo_3036))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->hi_3037))), rt_g_lit(") - ", 4)), (*(P140)rt_nil_check(F->lo_3036))), one_rt_gstr(93)));
ret_:

  return;
}

static void f_task_spec_1176(struct f_greenc_1fr *up_, P174 e_1175) {
  struct f_task_spec_1176fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1175 = e_1175;
F->has_procs_3038 = INT_MIN;
F->has_procs_3038 = 0;
F->saved_defer_3039 = INT_MIN;
F->fields_3040 = NULL;
F->ct_3041 = NULL;
F->pm_3042 = NULL;
F->fp_3043 = NULL;
F->flo_3044 = NULL;
F->fhi_3045 = NULL;
F->y_3046 = NULL;
F->m_3047 = NULL;
F->z_3048 = NULL;
F->saved_3049 = NULL;
F->saved_3049 = F->up->cur_task_210;
F->d_3050 = NULL;
F->v_3051 = NULL;
F->p_3052 = NULL;
F->p2_3053 = NULL;
F->vt_3054 = NULL;
F->r_3055 = NULL;
F->y_3046 = f_new_sym_478(F->up, ((rt_int)9LL), (*(P174)rt_nil_check(F->e_1175)).name_);
f_new_name_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("t_", 2), f_lower_s_247(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1175)).name_)))), one_rt_gstr(95)), &(*(P117)rt_nil_check(F->y_3046)).cname_);
(*(P117)rt_nil_check(F->y_3046)).decl_ = F->e_1175;
if (G_NV(F->up->in_func_138)) {
(*(P117)rt_nil_check(F->y_3046)).level_ = G_NV(F->up->cur_level_139);
}
(*(P117)rt_nil_check(F->y_3046)).access_path_ = (*(P117)rt_nil_check(F->y_3046)).cname_;
f_declare_slot_1161(F->up, rt_g_lit("rt_taskdecl", 11), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3046)).cname_)), rt_g_lit("decl", 4)));
if (((*(P174)rt_nil_check(F->e_1175)).a_ != NULL)) {
(*(P117)rt_nil_check(F->y_3046)).c_ = f_new_cons_481(F->up);
f_declare_slot_1161(F->up, rt_g_lit("rt_act *", 8), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3046)).cname_)), rt_g_lit("act", 3)));
f_declare_slot_1161(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3046)).cname_)), rt_g_lit("lo", 2)));
f_declare_slot_1161(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3046)).cname_)), rt_g_lit("hi", 2)));
f_discrete_bounds_530(F->up, (*(P174)rt_nil_check(F->e_1175)).a_, NULL, &F->vt_3054, &F->v_3051, &F->d_3050);
(*(P117)rt_nil_check(F->y_3046)).t_ = F->vt_3054;
f_path_at_1133(F->up, G_NV((*(P117)rt_nil_check(F->y_3046)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3046)).cname_)), rt_g_lit("lo", 2)), &F->p_3052);
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->p_3052)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->v_3051))), one_rt_gstr(59)));
f_path_at_1133(F->up, G_NV((*(P117)rt_nil_check(F->y_3046)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3046)).cname_)), rt_g_lit("hi", 2)), &F->p2_3053);
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->p2_3053)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->d_3050))), one_rt_gstr(59)));
f_path_at_1133(F->up, G_NV((*(P117)rt_nil_check(F->y_3046)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3046)).cname_)), rt_g_lit("act", 3)), &F->v_3051);
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->v_3051)), rt_g_lit(" = rt_alloc(sizeof(rt_act) * (size_t)(", 38)), (*(P140)rt_nil_check(F->p2_3053))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->p_3052))), rt_g_lit(" \? ", 3)), (*(P140)rt_nil_check(F->p2_3053))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->p_3052))), rt_g_lit(" + 1 : 1));", 11)));
f_family_arg_struct_1164(F->up);
} else {
f_declare_slot_1161(F->up, rt_g_lit("rt_act", 6), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3046)).cname_)), rt_g_lit("act", 3)));
}
f_put_to_261(F->up, F->up->out_protos_131, cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3046)).cname_))), rt_g_lit("run(void *a);", 13)));
if ((!G_NV(F->up->in_func_138))) {
f_put_to_261(F->up, F->up->out_awaits_217, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  rt_await_decl(&", 17), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3046)).cname_))), rt_g_lit("decl);", 6)));
}
F->r_3055 = (*(P174)rt_nil_check(F->e_1175)).c_;
while ((F->r_3055 != NULL)) {
if (((((G_NV((*(P174)rt_nil_check(F->r_3055)).kind_) == ((rt_int)40LL)) || (G_NV((*(P174)rt_nil_check(F->r_3055)).kind_) == ((rt_int)48LL))) || (G_NV((*(P174)rt_nil_check(F->r_3055)).kind_) == ((rt_int)49LL))) || (G_NV((*(P174)rt_nil_check(F->r_3055)).kind_) == ((rt_int)50LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->r_3055)).line_), cat_rt_gstr(rt_g_lit("the visible part of a task holds entries, subprograms, types, constants and ", 76), rt_g_lit("exceptions, not variables or modules (RM79 9.1)", 47)));
}
F->r_3055 = (*(P174)rt_nil_check(F->r_3055)).next_;
}
L_end_3056: ;
f_open_scope_474(F->up);
F->up->cur_task_210 = F->y_3046;
F->saved_defer_3039 = G_NV(F->up->defer_entry_structs_216);
F->up->defer_entry_structs_216 = 1;
f_decl_elements_661(F->up, (*(P174)rt_nil_check(F->e_1175)).c_);
f_decl_elements_661(F->up, (*(P174)rt_nil_check(F->e_1175)).d_);
F->up->defer_entry_structs_216 = G_NV(F->saved_defer_3039);
F->m_3047 = F->up->scope_stack_121;
while (((F->m_3047 != NULL) && (G_NV((*(P117)rt_nil_check(F->m_3047)).depth_) == G_NV(F->up->depth_120)))) {
if (((G_NV((*(P117)rt_nil_check(F->m_3047)).kind_) == ((rt_int)10LL)) && (!G_NV((*(P117)rt_nil_check(F->m_3047)).from_use_)))) {
F->fields_3040 = f_mk_236(F->up, rt_g_lit(" int dummy_;", 12));
F->pm_3042 = (*(P117)rt_nil_check(F->m_3047)).params_;
while ((F->pm_3042 != NULL)) {
f_ctype_500(F->up, (*(P1887)rt_nil_check(F->pm_3042)).t_, &F->ct_3041);
if ((G_NV((*(P1887)rt_nil_check(F->pm_3042)).mode_) == ((rt_int)1LL))) {
F->fields_3040 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->fields_3040)), one_rt_gstr(32)), (*(P140)rt_nil_check(F->ct_3041))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P1887)rt_nil_check(F->pm_3042)).cfield_))), one_rt_gstr(59)));
} else {
F->fields_3040 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->fields_3040)), one_rt_gstr(32)), (*(P140)rt_nil_check(F->ct_3041))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check((*(P1887)rt_nil_check(F->pm_3042)).cfield_))), one_rt_gstr(59)));
}
F->pm_3042 = (*(P1887)rt_nil_check(F->pm_3042)).next_;
}
L_end_3058: ;
f_put_to_261(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_3047)).cname_))), rt_g_lit("p {", 3)), (*(P140)rt_nil_check(F->fields_3040))), rt_g_lit(" };", 3)));
}
F->m_3047 = (*(P117)rt_nil_check(F->m_3047)).stack_;
}
L_end_3057: ;
F->m_3047 = F->up->scope_stack_121;
while (((F->m_3047 != NULL) && (G_NV((*(P117)rt_nil_check(F->m_3047)).depth_) == G_NV(F->up->depth_120)))) {
if ((((G_NV((*(P117)rt_nil_check(F->m_3047)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->m_3047)).kind_) == ((rt_int)4LL))) && (!G_NV((*(P117)rt_nil_check(F->m_3047)).from_use_)))) {
if (((!G_NV(F->has_procs_3038)) && ((*(P117)rt_nil_check(F->y_3046)).c_ != NULL))) {
f_declare_slot_1161(F->up, rt_g_lit("void **", 7), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3046)).cname_)), rt_g_lit("frames", 6)));
f_path_at_1133(F->up, G_NV((*(P117)rt_nil_check(F->y_3046)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3046)).cname_)), rt_g_lit("frames", 6)), &F->fp_3043);
f_path_at_1133(F->up, G_NV((*(P117)rt_nil_check(F->y_3046)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3046)).cname_)), rt_g_lit("lo", 2)), &F->flo_3044);
f_path_at_1133(F->up, G_NV((*(P117)rt_nil_check(F->y_3046)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3046)).cname_)), rt_g_lit("hi", 2)), &F->fhi_3045);
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->fp_3043)), rt_g_lit(" = rt_alloc(sizeof(void *) * (size_t)(", 38)), (*(P140)rt_nil_check(F->fhi_3045))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->flo_3044))), rt_g_lit(" \? ", 3)), (*(P140)rt_nil_check(F->fhi_3045))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->flo_3044))), rt_g_lit(" + 1 : 1));", 11)));
F->has_procs_3038 = 1;
} else if ((!G_NV(F->has_procs_3038))) {
f_declare_slot_1161(F->up, rt_g_lit("void *", 6), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3046)).cname_)), rt_g_lit("frame", 5)));
f_path_at_1133(F->up, G_NV((*(P117)rt_nil_check(F->y_3046)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3046)).cname_)), rt_g_lit("frame", 5)), &F->fp_3043);
f_emit_263(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->fp_3043)), rt_g_lit(" = NULL;", 8)));
F->has_procs_3038 = 1;
}
if (((*(P117)rt_nil_check(F->y_3046)).c_ != NULL)) {
(*(P117)rt_nil_check(F->m_3047)).access_path_ = f_mk_236(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3046)).cname_)), rt_g_lit("frames", 6)));
} else {
(*(P117)rt_nil_check(F->m_3047)).access_path_ = f_mk_236(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3046)).cname_)), rt_g_lit("frame", 5)));
}
(*(P117)rt_nil_check(F->m_3047)).members_ = F->y_3046;
}
f_copy_sym_1067(F->up, F->m_3047, &F->z_3048);
(*(P117)rt_nil_check(F->z_3048)).hidden_ = G_NV((*(P117)rt_nil_check(F->m_3047)).from_use_);
(*(P117)rt_nil_check(F->z_3048)).mnext_ = (*(P117)rt_nil_check(F->y_3046)).members_;
(*(P117)rt_nil_check(F->y_3046)).members_ = F->z_3048;
F->m_3047 = (*(P117)rt_nil_check(F->m_3047)).stack_;
}
L_end_3059: ;
f_close_scope_475(F->up);
F->up->cur_task_210 = F->saved_3049;
f_define_473(F->up, F->y_3046, G_NV((*(P174)rt_nil_check(F->e_1175)).line_));
ret_:

  return;
}

static void f_entry_decl_1178(struct f_greenc_1fr *up_, P174 e_1177) {
  struct f_entry_decl_1178fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1177 = e_1177;
F->y_3060 = NULL;
F->p_3061 = NULL;
F->p_3061 = (*(P174)rt_nil_check(F->e_1177)).a_;
F->pm_3062 = NULL;
F->tail_3063 = NULL;
F->fields_3064 = NULL;
F->ct_3065 = NULL;
F->x_3066 = NULL;
F->lo_3067 = NULL;
F->hi_3068 = NULL;
if ((F->up->cur_task_210 == NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1177)).line_), rt_g_lit("an entry is declared in a task (RM79 9.5)", 41));
}
F->y_3060 = f_new_sym_478(F->up, ((rt_int)10LL), (*(P174)rt_nil_check(F->e_1177)).name_);
f_new_name_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("e_", 2), f_lower_s_247(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1177)).name_)))), one_rt_gstr(95)), &(*(P117)rt_nil_check(F->y_3060)).cname_);
F->fields_3064 = f_mk_236(F->up, rt_g_lit(" int dummy_;", 12));
while ((F->p_3061 != NULL)) {
F->pm_3062 = ({ R1888 *cell3070 = rt_alloc(sizeof(R1888)); *cell3070 = cp_R1888(({ R1888 ag3071; ag3071.name_ = (*(P174)rt_nil_check(F->p_3061)).name_; ag3071.mode_ = G_NV((*(P174)rt_nil_check(F->p_3061)).ival_); ag3071.t_ = NULL; ag3071.c_ = NULL; ag3071.cfield_ = NULL; ag3071.dflt_ = (*(P174)rt_nil_check(F->p_3061)).b_; ag3071.next_ = NULL; ag3071.dsym_ = NULL; ag3071; })); (P1887)cell3070; });
f_resolve_516(F->up, (*(P174)rt_nil_check(F->p_3061)).a_, &(*(P1887)rt_nil_check(F->pm_3062)).t_, &(*(P1887)rt_nil_check(F->pm_3062)).c_);
(*(P1887)rt_nil_check(F->pm_3062)).cfield_ = f_mk_236(F->up, f_c_field_253(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3061)).name_))));
f_ctype_500(F->up, (*(P1887)rt_nil_check(F->pm_3062)).t_, &F->ct_3065);
if ((G_NV((*(P1887)rt_nil_check(F->pm_3062)).mode_) == ((rt_int)1LL))) {
F->fields_3064 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->fields_3064)), one_rt_gstr(32)), (*(P140)rt_nil_check(F->ct_3065))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P1887)rt_nil_check(F->pm_3062)).cfield_))), one_rt_gstr(59)));
} else {
F->fields_3064 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->fields_3064)), one_rt_gstr(32)), (*(P140)rt_nil_check(F->ct_3065))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check((*(P1887)rt_nil_check(F->pm_3062)).cfield_))), one_rt_gstr(59)));
}
if ((F->tail_3063 == NULL)) {
(*(P117)rt_nil_check(F->y_3060)).params_ = F->pm_3062;
} else {
(*(P1887)rt_nil_check(F->tail_3063)).next_ = F->pm_3062;
}
F->tail_3063 = F->pm_3062;
F->p_3061 = (*(P174)rt_nil_check(F->p_3061)).next_;
}
L_end_3069: ;
if ((!G_NV(F->up->defer_entry_structs_216))) {
f_put_to_261(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3060)).cname_))), rt_g_lit("p {", 3)), (*(P140)rt_nil_check(F->fields_3064))), rt_g_lit(" };", 3)));
}
(*(P117)rt_nil_check(F->y_3060)).result_ = F->up->ty_void_161;
(*(P117)rt_nil_check(F->y_3060)).decl_ = F->e_1177;
(*(P117)rt_nil_check(F->y_3060)).members_ = F->up->cur_task_210;
f_elaborate_defaults_656(F->up, F->y_3060);
if (G_NV(F->up->in_func_138)) {
(*(P117)rt_nil_check(F->y_3060)).level_ = G_NV(F->up->cur_level_139);
}
(*(P117)rt_nil_check(F->y_3060)).access_path_ = f_mk_236(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3060)).cname_)), rt_g_lit("ent", 3)));
f_path_at_1133(F->up, G_NV((*(P117)rt_nil_check(F->y_3060)).level_), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3060)).access_path_)), &F->x_3066);
(*(P117)rt_nil_check(F->y_3060)).ro_ = ((((*(P117)rt_nil_check(F->up->cur_task_210)).c_ != NULL) && G_NV(F->up->in_func_138)) && (G_NV(F->up->cur_level_139) > G_NV((*(P117)rt_nil_check(F->up->cur_task_210)).level_)));
if (((*(P174)rt_nil_check(F->e_1177)).b_ != NULL)) {
f_family_bounds_1169(F->up, (*(P174)rt_nil_check(F->e_1177)).b_, F->y_3060, F->x_3066, (((*(P117)rt_nil_check(F->up->cur_task_210)).c_ != NULL) && (!G_NV((*(P117)rt_nil_check(F->y_3060)).ro_))));
} else if ((((*(P117)rt_nil_check(F->up->cur_task_210)).c_ != NULL) && (!G_NV((*(P117)rt_nil_check(F->y_3060)).ro_)))) {
f_declare_slot_1161(F->up, rt_g_lit("rt_entry *", 10), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3060)).access_path_)));
f_path_at_1133(F->up, G_NV((*(P117)rt_nil_check(F->up->cur_task_210)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->cur_task_210)).cname_)), rt_g_lit("lo", 2)), &F->lo_3067);
f_path_at_1133(F->up, G_NV((*(P117)rt_nil_check(F->up->cur_task_210)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->cur_task_210)).cname_)), rt_g_lit("hi", 2)), &F->hi_3068);
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->x_3066)), rt_g_lit(" = rt_alloc(sizeof(rt_entry) * (size_t)(", 40)), (*(P140)rt_nil_check(F->hi_3068))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->lo_3067))), rt_g_lit(" \? ", 3)), (*(P140)rt_nil_check(F->hi_3068))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->lo_3067))), rt_g_lit(" + 1 : 1));", 11)));
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = 0; k_ <= ", 26), (*(P140)rt_nil_check(F->hi_3068))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->lo_3067))), rt_g_lit("; k_++) rt_entry_init(&", 23)), (*(P140)rt_nil_check(F->x_3066))), rt_g_lit("[k_]);", 6)));
} else {
f_declare_slot_1161(F->up, rt_g_lit("rt_entry", 8), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3060)).access_path_)));
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_entry_init(&", 15), (*(P140)rt_nil_check(F->x_3066))), rt_g_lit(");", 2)));
}
f_define_473(F->up, F->y_3060, G_NV((*(P174)rt_nil_check(F->e_1177)).line_));
ret_:

  return;
}

static void f_task_body_1180(struct f_greenc_1fr *up_, P174 e_1179) {
  struct f_task_body_1180fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1179 = e_1179;
F->y_3072 = NULL;
F->y_3072 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1179)).name_)));
F->b_3073 = NULL;
F->m_3074 = NULL;
F->z_3075 = NULL;
F->upp_3076 = NULL;
F->saved_3077 = NULL;
F->saved_3077 = F->up->cur_task_210;
if ((G_NV((*(P174)rt_nil_check(F->e_1179)).flag_) == ((rt_int)4LL))) {
f_stub_676(F->up, F->e_1179);
goto ret_;
}
if (f_is_generic_name_1270(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1179)).name_)))) {
f_attach_generic_body_1272(F->up, F->e_1179);
goto ret_;
}
if (((F->y_3072 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_3072)).kind_) != ((rt_int)9LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1179)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("task body ", 10), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1179)).name_))), rt_g_lit(" has no task specification", 26)));
}
F->b_3073 = f_new_sym_478(F->up, ((rt_int)4LL), (*(P174)rt_nil_check(F->e_1179)).name_);
(*(P117)rt_nil_check(F->b_3073)).cname_ = f_mk_236(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3072)).cname_)), rt_g_lit("body", 4)));
(*(P117)rt_nil_check(F->b_3073)).result_ = F->up->ty_void_161;
(*(P117)rt_nil_check(F->b_3073)).level_ = G_NV(F->up->cur_level_139);
(*(P117)rt_nil_check(F->b_3073)).decl_ = F->e_1179;
if (((*(P117)rt_nil_check(F->y_3072)).c_ != NULL)) {
(*(P117)rt_nil_check(F->b_3073)).params_ = ({ R1888 *cell3078 = rt_alloc(sizeof(R1888)); *cell3078 = cp_R1888(({ R1888 ag3079; ag3079.name_ = f_mk_236(F->up, cat_rt_gstr(rt_g_lit("INDEX_", 6), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3072)).cname_)))); ag3079.mode_ = ((rt_int)1LL); ag3079.t_ = F->up->ty_int_156; ag3079.c_ = NULL; ag3079.cfield_ = f_mk_236(F->up, rt_g_lit("index_", 6)); ag3079.dflt_ = NULL; ag3079.next_ = NULL; ag3079.dsym_ = NULL; ag3079; })); (P1887)cell3078; });
}
f_open_scope_474(F->up);
F->m_3074 = (*(P117)rt_nil_check(F->y_3072)).members_;
while ((F->m_3074 != NULL)) {
f_copy_sym_1067(F->up, F->m_3074, &F->z_3075);
f_define_473(F->up, F->z_3075, G_NV((*(P174)rt_nil_check(F->e_1179)).line_));
if (((((G_NV((*(P117)rt_nil_check(F->m_3074)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->m_3074)).kind_) == ((rt_int)4LL))) && ((*(P117)rt_nil_check(F->m_3074)).access_path_ != NULL)) && f_same_task_435(F->up, (*(P117)rt_nil_check(F->m_3074)).members_, F->y_3072))) {
if ((G_NV((*(P117)rt_nil_check(F->y_3072)).level_) > ((rt_int)0LL))) {
F->upp_3076 = f_mk_236(F->up, rt_g_lit("up_->", 5));
} else {
F->upp_3076 = f_mk_236(F->up, rt_g_lit("", 0));
}
if (((*(P117)rt_nil_check(F->y_3072)).c_ != NULL)) {
(*(P117)rt_nil_check(F->b_3073)).access_path_ = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->upp_3076)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_3074)).access_path_))), rt_g_lit("[index_ - ", 10)), (*(P140)rt_nil_check(F->upp_3076))), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3072)).cname_))), rt_g_lit("lo] = F;", 8)));
} else {
(*(P117)rt_nil_check(F->b_3073)).access_path_ = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->upp_3076)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_3074)).access_path_))), rt_g_lit(" = F;", 5)));
}
}
F->m_3074 = (*(P117)rt_nil_check(F->m_3074)).mnext_;
}
L_end_3080: ;
F->up->cur_task_210 = F->y_3072;
f_subprogram_body_706(F->up, F->e_1179, F->b_3073);
F->up->cur_task_210 = F->saved_3077;
f_close_scope_475(F->up);
if ((((*(P117)rt_nil_check(F->y_3072)).c_ != NULL) && (G_NV((*(P117)rt_nil_check(F->b_3073)).level_) > ((rt_int)0LL)))) {
f_put_to_261(F->up, F->up->out_funcs_133, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3072)).cname_))), rt_g_lit("run(void *a) { struct rt_famarg *g = a; ", 40)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_3073)).cname_))), rt_g_lit("(g->up, g->i); }", 16)));
} else if (((*(P117)rt_nil_check(F->y_3072)).c_ != NULL)) {
f_put_to_261(F->up, F->up->out_funcs_133, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3072)).cname_))), rt_g_lit("run(void *a) { struct rt_famarg *g = a; ", 40)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_3073)).cname_))), rt_g_lit("(g->i); }", 9)));
} else if ((G_NV((*(P117)rt_nil_check(F->b_3073)).level_) > ((rt_int)0LL))) {
f_put_to_261(F->up, F->up->out_funcs_133, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3072)).cname_))), rt_g_lit("run(void *a) { ", 15)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_3073)).cname_))), rt_g_lit("(a); }", 6)));
} else {
f_put_to_261(F->up, F->up->out_funcs_133, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3072)).cname_))), rt_g_lit("run(void *a) { (void)a; ", 24)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_3073)).cname_))), rt_g_lit("(); }", 5)));
}
ret_:

  return;
}

static void f_task_awaits_1183(struct f_greenc_1fr *up_, P174 decls_1181, P140 *aw_1182) {
  struct f_task_awaits_1183fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_1181 = decls_1181;
F->aw_1182 = aw_1182;
F->e_3081 = NULL;
F->e_3081 = F->decls_1181;
F->y_3082 = NULL;
F->p_3083 = NULL;
(*F->aw_1182) = f_mk_236(F->up, rt_g_lit("", 0));
while ((F->e_3081 != NULL)) {
if (((G_NV((*(P174)rt_nil_check(F->e_3081)).kind_) == ((rt_int)50LL)) || ((G_NV((*(P174)rt_nil_check(F->e_3081)).kind_) == ((rt_int)53LL)) && (G_NV((*(P174)rt_nil_check(F->e_3081)).ival_) == ((rt_int)50LL))))) {
F->y_3082 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_3081)).name_)));
f_path_at_1133(F->up, G_NV((*(P117)rt_nil_check(F->y_3082)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3082)).cname_)), rt_g_lit("decl", 4)), &F->p_3083);
(*F->aw_1182) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->aw_1182))), rt_g_lit(" rt_await_decl(&", 16)), (*(P140)rt_nil_check(F->p_3083))), rt_g_lit(");", 2)));
}
F->e_3081 = (*(P174)rt_nil_check(F->e_3081)).next_;
}
L_end_3084: ;
ret_:

  return;
}

static void f_task_failure_1185(struct f_greenc_1fr *up_, P174 s_1184) {
  struct f_task_failure_1185fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1184 = s_1184;
F->y_3085 = NULL;
F->y_3085 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_1184)).tag_)));
F->a_3086 = NULL;
F->i_3087 = NULL;
F->it_3088 = NULL;
if (((*(P174)rt_nil_check(F->s_1184)).a_ != NULL)) {
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->s_1184)).a_, (*(P117)rt_nil_check(F->y_3085)).t_, &F->it_3088, &F->i_3087);
f_act_path_i_1154(F->up, F->y_3085, (*(P140)rt_nil_check(F->i_3087)), &F->a_3086);
} else {
f_act_path_1150(F->up, F->y_3085, &F->a_3086);
}
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_exterminate(&", 16), (*(P140)rt_nil_check(F->a_3086))), rt_g_lit(");", 2)));
ret_:

  return;
}

static void f_entry_sym_1189(struct f_greenc_1fr *up_, P174 e_1186, P117 *y_1187, P174 *ix_1188) {
  struct f_entry_sym_1189fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1186 = e_1186;
F->y_1187 = y_1187;
F->ix_1188 = ix_1188;
F->alias_3089 = NULL;
F->t_3090 = NULL;
(*F->ix_1188) = NULL;
F->up->fam_ix_213 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->e_1186)).kind_) == ((rt_int)8LL))) {
f_entry_sym_1189(F->up, (*(P174)rt_nil_check(F->e_1186)).a_, &(*F->y_1187), &(*F->ix_1188));
if (((*(P117)rt_nil_check((*F->y_1187))).c_ == NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1186)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check((*F->y_1187))).name_)), rt_g_lit(" is not an entry family", 23)));
}
F->up->fam_ix_213 = (*(P174)rt_nil_check(F->e_1186)).b_;
goto ret_;
}
if (((G_NV((*(P174)rt_nil_check(F->e_1186)).kind_) == ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1186)).a_)).kind_) == ((rt_int)5LL)))) {
F->t_3090 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1186)).a_)).name_)));
if (((F->t_3090 != NULL) && ((G_NV((*(P117)rt_nil_check(F->t_3090)).kind_) == ((rt_int)9LL)) && (G_NV((*(P117)rt_nil_check(F->t_3090)).flags_) == ((rt_int)4LL))))) {
F->alias_3089 = f_nn_310(F->up, ((rt_int)9LL), G_NV((*(P174)rt_nil_check(F->e_1186)).line_));
as_R175(&(*(P174)rt_nil_check(F->alias_3089)), (*(P174)rt_nil_check(F->e_1186)));
(*(P174)rt_nil_check(F->alias_3089)).a_ = (*(P117)rt_nil_check(F->t_3090)).decl_;
f_entry_sym_1189(F->up, F->alias_3089, &(*F->y_1187), &(*F->ix_1188));
goto ret_;
}
}
if ((((G_NV((*(P174)rt_nil_check(F->e_1186)).kind_) == ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1186)).a_)).kind_) == ((rt_int)8LL))) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1186)).a_)).a_)).kind_) == ((rt_int)5LL)))) {
F->t_3090 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1186)).a_)).a_)).name_)));
if ((((F->t_3090 == NULL) || (G_NV((*(P117)rt_nil_check(F->t_3090)).kind_) != ((rt_int)9LL))) || ((*(P117)rt_nil_check(F->t_3090)).c_ == NULL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1186)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1186)).a_)).a_)).name_)), rt_g_lit(" is not a task family", 21)));
}
(*F->y_1187) = f_member_of_1062(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1186)).a_)).a_)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1186)).name_)), G_NV((*(P174)rt_nil_check(F->e_1186)).line_));
(*F->ix_1188) = (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1186)).a_)).b_;
if ((((*F->y_1187) == NULL) || (G_NV((*(P117)rt_nil_check((*F->y_1187))).kind_) != ((rt_int)10LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1186)).line_), rt_g_lit("not an entry", 12));
}
goto ret_;
}
if ((G_NV((*(P174)rt_nil_check(F->e_1186)).kind_) == ((rt_int)5LL))) {
(*F->y_1187) = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1186)).name_)));
if (((*(P174)rt_nil_check(F->e_1186)).tag_ != NULL)) {
(*F->y_1187) = f_member_of_1062(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1186)).tag_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1186)).name_)), G_NV((*(P174)rt_nil_check(F->e_1186)).line_));
}
} else if (((G_NV((*(P174)rt_nil_check(F->e_1186)).kind_) == ((rt_int)9LL)) && f_is_package_1058(F->up, (*(P174)rt_nil_check(F->e_1186)).a_))) {
(*F->y_1187) = f_member_of_1062(F->up, f_path_of_353(F->up, (*(P174)rt_nil_check(F->e_1186)).a_), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1186)).name_)), G_NV((*(P174)rt_nil_check(F->e_1186)).line_));
} else {
(*F->y_1187) = NULL;
}
if ((((*F->y_1187) == NULL) || (G_NV((*(P117)rt_nil_check((*F->y_1187))).kind_) != ((rt_int)10LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1186)).line_), rt_g_lit("not an entry", 12));
}
ret_:

  return;
}

static void f_entry_overload_1194(struct f_greenc_1fr *up_, P117 y_1190, P174 args_1191, rt_int line_1192, P117 *r_1193) {
  struct f_entry_overload_1194fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1190 = y_1190;
F->args_1191 = args_1191;
F->line_1192 = line_1192;
F->r_1193 = r_1193;
F->z_3091 = NULL;
F->found_3092 = NULL;
F->ok_3093 = INT_MIN;
(*F->r_1193) = F->y_1190;
if (((*(P117)rt_nil_check(F->y_1190)).members_ == NULL)) {
goto ret_;
}
F->z_3091 = (*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1190)).members_)).members_;
while ((F->z_3091 != NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_3091)).name_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1190)).name_))) && (G_NV((*(P117)rt_nil_check(F->z_3091)).kind_) == ((rt_int)10LL)))) {
f_fits_1091(F->up, F->z_3091, F->args_1191, NULL, &F->ok_3093);
 (void)rt_range(F->ok_3093, 0, 1);
if ((G_NV(F->ok_3093) && (F->found_3092 == NULL))) {
F->found_3092 = F->z_3091;
} else if ((G_NV(F->ok_3093) && (!f_same_entity_1086(F->up, F->found_3092, F->z_3091)))) {
f_fail_257(F->up, F->line_1192, cat_rt_gstr(cat_rt_gstr(rt_g_lit("the entry call of ", 18), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1190)).name_))), rt_g_lit(" is ambiguous (RM79 9.5, 6.6)", 29)));
}
}
F->z_3091 = (*(P117)rt_nil_check(F->z_3091)).mnext_;
}
L_end_3094: ;
if ((F->found_3092 != NULL)) {
(*F->r_1193) = F->found_3092;
}
ret_:

  return;
}

static void f_other_call_1199(struct f_greenc_1fr *up_, P174 e_1195, int is_stmt_1196, P122 *t_1197, P140 *r_1198) {
  struct f_other_call_1199fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1195 = e_1195;
F->is_stmt_1196 = is_stmt_1196;
F->t_1197 = t_1197;
F->r_1198 = r_1198;
F->y_3095 = NULL;
F->oy_3096 = NULL;
F->pm_3097 = NULL;
F->a_3098 = NULL;
F->parts_3099 = NULL;
F->v_3100 = NULL;
F->lv_3101 = NULL;
F->ent_3102 = NULL;
F->act_3103 = NULL;
F->i_3104 = NULL;
F->vt_3105 = NULL;
F->lt_3106 = NULL;
F->lc_3107 = NULL;
F->ro_3108 = INT_MIN;
F->ix_3109 = NULL;
F->fix_3110 = NULL;
F->args_node_3111 = NULL;
f_entry_sym_1189(F->up, (*(P174)rt_nil_check(F->e_1195)).a_, &F->y_3095, &F->ix_3109);
F->fix_3110 = F->up->fam_ix_213;
F->args_node_3111 = (*(P174)rt_nil_check(F->e_1195)).b_;
if (((*(P117)rt_nil_check(F->y_3095)).c_ == NULL)) {
f_entry_overload_1194(F->up, F->y_3095, F->args_node_3111, G_NV((*(P174)rt_nil_check(F->e_1195)).line_), &F->oy_3096);
F->y_3095 = F->oy_3096;
}
if ((((*(P117)rt_nil_check(F->y_3095)).c_ != NULL) && (F->fix_3110 == NULL))) {
F->fix_3110 = (*(P174)rt_nil_check(F->e_1195)).b_;
F->args_node_3111 = NULL;
}
F->i_3104 = f_mk_236(F->up, rt_g_lit("", 0));
if ((F->ix_3109 != NULL)) {
f_gexpr_819(F->up, F->ix_3109, F->up->ty_int_156, &F->vt_3105, &F->i_3104);
} else if (((((*(P117)rt_nil_check(F->y_3095)).members_ != NULL) && ((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_3095)).members_)).c_ != NULL)) && ((*(P117)rt_nil_check(F->y_3095)).members_ != F->up->cur_task_210))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1195)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("a member of family ", 19), (*(P140)rt_nil_check((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_3095)).members_)).name_))), rt_g_lit(" must be named: F(I).", 21)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3095)).name_))));
}
if ((!F->is_stmt_1196)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1195)).line_), rt_g_lit("an entry call is a statement", 28));
}
if ((F->up->pure_sym_225 != NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1195)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->pure_sym_225)).name_))), rt_g_lit(" may not call an entry (RM79 6.5)", 33)));
}
f_entry_path_1158(F->up, F->y_3095, (*(P140)rt_nil_check(F->i_3104)), &F->ent_3102);
if (((*(P117)rt_nil_check(F->y_3095)).c_ != NULL)) {
if ((F->fix_3110 == NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1195)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3095)).name_)), rt_g_lit(" is an entry family: name a member, ", 36)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3095)).name_))), rt_g_lit("(I)", 3)));
}
f_gexpr_819(F->up, F->fix_3110, NULL, &F->vt_3105, &F->v_3100);
f_entry_family_slot_1174(F->up, F->y_3095, (*(P140)rt_nil_check(F->ent_3102)), (*(P140)rt_nil_check(F->v_3100)), &F->ent_3102);
}
F->parts_3099 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ struct ", 10), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3095)).cname_))), rt_g_lit("p p_;", 5)));
F->pm_3097 = (*(P117)rt_nil_check(F->y_3095)).params_;
while ((F->pm_3097 != NULL)) {
F->a_3098 = f_actual_for_1017(F->up, F->args_node_3111, F->pm_3097, (*(P117)rt_nil_check(F->y_3095)).params_);
if (((F->a_3098 == NULL) && ((*(P1887)rt_nil_check(F->pm_3097)).dsym_ != NULL))) {
f_access_of_756(F->up, (*(P1887)rt_nil_check(F->pm_3097)).dsym_, &F->v_3100);
f_copy_code_632(F->up, (*(P1887)rt_nil_check(F->pm_3097)).t_, (*(P140)rt_nil_check(F->v_3100)), &F->lv_3101);
F->parts_3099 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->parts_3099)), rt_g_lit(" p_.", 4)), (*(P140)rt_nil_check((*(P1887)rt_nil_check(F->pm_3097)).cfield_))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->lv_3101))), one_rt_gstr(59)));
} else if ((F->a_3098 == NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1195)).line_), cat_rt_gstr(rt_g_lit("no actual parameter for ", 24), (*(P140)rt_nil_check((*(P1887)rt_nil_check(F->pm_3097)).name_))));
} else if ((G_NV((*(P1887)rt_nil_check(F->pm_3097)).mode_) == ((rt_int)1LL))) {
f_gexpr_819(F->up, F->a_3098, (*(P1887)rt_nil_check(F->pm_3097)).t_, &F->vt_3105, &F->v_3100);
f_check_type_495(F->up, F->vt_3105, (*(P1887)rt_nil_check(F->pm_3097)).t_, G_NV((*(P174)rt_nil_check(F->e_1195)).line_));
F->parts_3099 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->parts_3099)), rt_g_lit(" p_.", 4)), (*(P140)rt_nil_check((*(P1887)rt_nil_check(F->pm_3097)).cfield_))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->v_3100))), one_rt_gstr(59)));
} else {
f_lvalue_775(F->up, F->a_3098, &F->lv_3101, &F->lt_3106, &F->lc_3107, &F->ro_3108);
 (void)rt_range(F->ro_3108, 0, 1);
if (G_NV(F->ro_3108)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1195)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P1887)rt_nil_check(F->pm_3097)).name_)), rt_g_lit(" needs a variable", 17)));
}
f_check_type_495(F->up, F->lt_3106, (*(P1887)rt_nil_check(F->pm_3097)).t_, G_NV((*(P174)rt_nil_check(F->e_1195)).line_));
F->parts_3099 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->parts_3099)), rt_g_lit(" p_.", 4)), (*(P140)rt_nil_check((*(P1887)rt_nil_check(F->pm_3097)).cfield_))), rt_g_lit(" = &", 4)), (*(P140)rt_nil_check(F->lv_3101))), one_rt_gstr(59)));
}
F->pm_3097 = (*(P1887)rt_nil_check(F->pm_3097)).next_;
}
L_end_3112: ;
if ((((*(P117)rt_nil_check(F->y_3095)).members_ != NULL) && ((*(P117)rt_nil_check(F->y_3095)).members_ != F->up->cur_task_210))) {
if ((F->ix_3109 != NULL)) {
f_act_path_i_1154(F->up, (*(P117)rt_nil_check(F->y_3095)).members_, (*(P140)rt_nil_check(F->i_3104)), &F->act_3103);
} else {
f_act_path_1150(F->up, (*(P117)rt_nil_check(F->y_3095)).members_, &F->act_3103);
}
F->parts_3099 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->parts_3099)), rt_g_lit(" if (!rt_is_active(&", 20)), (*(P140)rt_nil_check(F->act_3103))), rt_g_lit(")) rt_raise(RT_X_TASKING);", 26)));
}
(*F->t_1197) = F->up->ty_void_161;
(*F->r_1198) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->parts_3099)), rt_g_lit(" rt_entry_call(&", 16)), (*(P140)rt_nil_check(F->ent_3102))), rt_g_lit(", &p_); })", 10)));
ret_:

  return;
}

static void f_other_attr_1204(struct f_greenc_1fr *up_, P174 e_1200, P117 y_1201, P122 *t_1202, P140 *r_1203) {
  struct f_other_attr_1204fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1200 = e_1200;
F->y_1201 = y_1201;
F->t_1202 = t_1202;
F->r_1203 = r_1203;
F->a_3113 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1200)).name_)));
F->p_3114 = NULL;
if (((G_NV((*(P117)rt_nil_check(F->y_1201)).kind_) == ((rt_int)9LL)) && eq_rt_gstr(F->a_3113, rt_g_lit("INDEX", 5)))) {
if (((*(P117)rt_nil_check(F->y_1201)).c_ == NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1200)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1201)).name_)), rt_g_lit(" is not a task family", 21)));
}
f_own_index_1142(F->up, F->y_1201, &F->p_3114);
(*F->t_1202) = F->up->ty_int_156;
if (((*(P117)rt_nil_check(F->y_1201)).t_ != NULL)) {
(*F->t_1202) = (*(P117)rt_nil_check(F->y_1201)).t_;
}
(*F->r_1203) = F->p_3114;
} else if (((G_NV((*(P117)rt_nil_check(F->y_1201)).kind_) == ((rt_int)9LL)) && eq_rt_gstr(F->a_3113, rt_g_lit("ACTIVE", 6)))) {
f_act_path_1150(F->up, F->y_1201, &F->p_3114);
(*F->t_1202) = F->up->ty_bool_157;
(*F->r_1203) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_is_active(&", 14), (*(P140)rt_nil_check(F->p_3114))), one_rt_gstr(41)));
} else if (((G_NV((*(P117)rt_nil_check(F->y_1201)).kind_) == ((rt_int)9LL)) && eq_rt_gstr(F->a_3113, rt_g_lit("PRIORITY", 8)))) {
f_act_path_1150(F->up, F->y_1201, &F->p_3114);
(*F->t_1202) = F->up->ty_int_156;
(*F->r_1203) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_priority(&", 13), (*(P140)rt_nil_check(F->p_3114))), one_rt_gstr(41)));
} else if (((G_NV((*(P117)rt_nil_check(F->y_1201)).kind_) == ((rt_int)9LL)) && eq_rt_gstr(F->a_3113, rt_g_lit("CLOCK", 5)))) {
f_act_path_1150(F->up, F->y_1201, &F->p_3114);
(*F->t_1202) = F->up->ty_time_171;
(*F->r_1203) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_task_clock(&", 17), (*(P140)rt_nil_check(F->p_3114))), one_rt_gstr(41)));
} else if (((G_NV((*(P117)rt_nil_check(F->y_1201)).kind_) == ((rt_int)10LL)) && eq_rt_gstr(F->a_3113, rt_g_lit("COUNT", 5)))) {
if (((*(P117)rt_nil_check(F->y_1201)).members_ != F->up->cur_task_210)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1200)).line_), rt_g_lit("E'COUNT is allowed only in the body of the task (RM79 9.9)", 58));
}
f_entry_path_1158(F->up, F->y_1201, rt_g_lit("", 0), &F->p_3114);
(*F->t_1202) = F->up->ty_int_156;
(*F->r_1203) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_entry_count(&", 16), (*(P140)rt_nil_check(F->p_3114))), one_rt_gstr(41)));
} else {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1200)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), F->a_3113), rt_g_lit(" is not handled here", 20)));
(*F->t_1202) = F->up->ty_int_156;
(*F->r_1203) = NULL;
}
ret_:

  return;
}

static void f_member_attr_1208(struct f_greenc_1fr *up_, P174 e_1205, P122 *t_1206, P140 *r_1207) {
  struct f_member_attr_1208fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1205 = e_1205;
F->t_1206 = t_1206;
F->r_1207 = r_1207;
F->y_3115 = NULL;
F->ix_3116 = NULL;
F->i_3117 = NULL;
F->p_3118 = NULL;
F->vt_3119 = NULL;
f_task_of_1139(F->up, (*(P174)rt_nil_check(F->e_1205)).a_, &F->y_3115, &F->ix_3116);
f_gexpr_819(F->up, F->ix_3116, F->up->ty_int_156, &F->vt_3119, &F->i_3117);
f_act_path_i_1154(F->up, F->y_3115, (*(P140)rt_nil_check(F->i_3117)), &F->p_3118);
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1205)).name_)), rt_g_lit("ACTIVE", 6))) {
(*F->t_1206) = F->up->ty_bool_157;
(*F->r_1207) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_is_active(&", 14), (*(P140)rt_nil_check(F->p_3118))), one_rt_gstr(41)));
} else if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1205)).name_)), rt_g_lit("PRIORITY", 8))) {
(*F->t_1206) = F->up->ty_int_156;
(*F->r_1207) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_priority(&", 13), (*(P140)rt_nil_check(F->p_3118))), one_rt_gstr(41)));
} else if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1205)).name_)), rt_g_lit("CLOCK", 5))) {
(*F->t_1206) = F->up->ty_time_171;
(*F->r_1207) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_task_clock(&", 17), (*(P140)rt_nil_check(F->p_3118))), one_rt_gstr(41)));
} else {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1205)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1205)).name_))), rt_g_lit(" is not handled for a family member", 35)));
(*F->t_1206) = F->up->ty_int_156;
(*F->r_1207) = NULL;
}
ret_:

  return;
}

static void f_task_builtin_1214(struct f_greenc_1fr *up_, rt_gstr name_1209, P174 args_1210, rt_int line_1211, P122 *t_1212, P140 *r_1213) {
  struct f_task_builtin_1214fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1209 = cp_rt_gstr(name_1209);
F->args_1210 = args_1210;
F->line_1211 = line_1211;
F->t_1212 = t_1212;
F->r_1213 = r_1213;
F->vt_3120 = NULL;
F->v_3121 = NULL;
(*F->t_1212) = F->up->ty_void_161;
if (eq_rt_gstr(F->name_1209, rt_g_lit("SET_PRIORITY", 12))) {
f_gexpr_819(F->up, F->args_1210, F->up->ty_int_156, &F->vt_3120, &F->v_3121);
(*F->r_1213) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_set_priority(rt_me(), ", 25), (*(P140)rt_nil_check(F->v_3121))), one_rt_gstr(41)));
} else {
f_fail_257(F->up, F->line_1211, cat_rt_gstr(F->name_1209, rt_g_lit(" is not declared", 16)));
(*F->r_1213) = NULL;
}
ret_:

  return;
}

static void f_accept_entry_1217(struct f_greenc_1fr *up_, P174 s_1215, P117 *r_1216) {
  struct f_accept_entry_1217fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1215 = s_1215;
F->r_1216 = r_1216;
F->z_3122 = NULL;
F->found_3123 = NULL;
F->any_3124 = NULL;
F->ok_3125 = INT_MIN;
if (((F->up->func_sym_142 != NULL) && (F->up->cur_task_210 != NULL))) {
F->z_3122 = (*(P117)rt_nil_check(F->up->cur_task_210)).members_;
while ((F->z_3122 != NULL)) {
if ((((G_NV((*(P117)rt_nil_check(F->z_3122)).kind_) == ((rt_int)4LL)) || (G_NV((*(P117)rt_nil_check(F->z_3122)).kind_) == ((rt_int)3LL))) && eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_3122)).cname_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->func_sym_142)).cname_))))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_1215)).line_), rt_g_lit("an accept statement cannot be in a visible subprogram of the task (RM79 9.5)", 76));
}
F->z_3122 = (*(P117)rt_nil_check(F->z_3122)).mnext_;
}
L_end_3126: ;
}
F->z_3122 = ({ A116 ix3127 = F->up->table_119; ix3127.p[rt_index(f_hash_425(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_1215)).name_))), ix3127.lo, ix3127.hi) - ix3127.lo]; });
while ((F->z_3122 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_3122)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_1215)).name_))) && (G_NV((*(P117)rt_nil_check(F->z_3122)).kind_) == ((rt_int)10LL))) && f_same_task_435(F->up, (*(P117)rt_nil_check(F->z_3122)).members_, F->up->cur_task_210))) {
F->any_3124 = F->z_3122;
f_accept_conforms_1221(F->up, F->s_1215, F->z_3122, &F->ok_3125);
 (void)rt_range(F->ok_3125, 0, 1);
if ((G_NV(F->ok_3125) && (F->found_3123 == NULL))) {
F->found_3123 = F->z_3122;
}
}
F->z_3122 = (*(P117)rt_nil_check(F->z_3122)).chain_;
}
L_end_3128: ;
if (((F->found_3123 == NULL) && (F->any_3124 != NULL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_1215)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the formal part of accept ", 26), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_1215)).name_))), rt_g_lit(" does not repeat that of the entry (RM79 9.5)", 45)));
}
(*F->r_1216) = F->found_3123;
ret_:

  return;
}

static void f_accept_conforms_1221(struct f_greenc_1fr *up_, P174 s_1218, P117 y_1219, int *ok_1220) {
  struct f_accept_conforms_1221fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1218 = s_1218;
F->y_1219 = y_1219;
F->ok_1220 = ok_1220;
F->f_3129 = NULL;
F->f_3129 = (*(P174)rt_nil_check(F->s_1218)).a_;
F->pm_3130 = NULL;
F->pm_3130 = (*(P117)rt_nil_check(F->y_1219)).params_;
F->t_3131 = NULL;
F->c_3132 = NULL;
(*F->ok_1220) = 1;
if ((F->f_3129 == NULL)) {
goto ret_;
}
while (((F->f_3129 != NULL) && (F->pm_3130 != NULL))) {
f_resolve_516(F->up, (*(P174)rt_nil_check(F->f_3129)).a_, &F->t_3131, &F->c_3132);
if (((!f_same_452(F->up, F->t_3131, (*(P1887)rt_nil_check(F->pm_3130)).t_)) || (G_NV((*(P174)rt_nil_check(F->f_3129)).ival_) != G_NV((*(P1887)rt_nil_check(F->pm_3130)).mode_)))) {
(*F->ok_1220) = 0;
goto ret_;
}
F->f_3129 = (*(P174)rt_nil_check(F->f_3129)).next_;
F->pm_3130 = (*(P1887)rt_nil_check(F->pm_3130)).next_;
}
L_end_3133: ;
(*F->ok_1220) = ((F->f_3129 == NULL) && (F->pm_3130 == NULL));
ret_:

  return;
}

static void f_gen_accept_1223(struct f_greenc_1fr *up_, P174 s_1222) {
  struct f_gen_accept_1223fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1222 = s_1222;
F->y_3134 = NULL;
F->saved_ax_3135 = NULL;
F->ent_3136 = NULL;
F->ep_3137 = NULL;
F->xf_3138 = NULL;
F->x_3139 = NULL;
F->pm_3140 = NULL;
F->f_3141 = NULL;
F->f_3141 = (*(P174)rt_nil_check(F->s_1222)).a_;
F->p_3142 = NULL;
f_accept_entry_1217(F->up, F->s_1222, &F->y_3134);
if ((F->y_3134 == NULL)) {
F->y_3134 = f_lookup_entry_438(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_1222)).name_)), F->up->cur_task_210);
}
if (((F->y_3134 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_3134)).kind_) != ((rt_int)10LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_1222)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_1222)).name_)), rt_g_lit(" is not an entry", 16)));
}
if ((!f_same_task_435(F->up, (*(P117)rt_nil_check(F->y_3134)).members_, F->up->cur_task_210))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_1222)).line_), rt_g_lit("a task accepts only its own entries (RM79 9.5)", 46));
}
f_entry_path_1158(F->up, F->y_3134, rt_g_lit("", 0), &F->ent_3136);
f_member_slot_1227(F->up, F->y_3134, F->s_1222, &F->ent_3136);
if ((G_NV((*(P174)rt_nil_check(F->s_1222)).flag_) == ((rt_int)0LL))) {
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_accept_begin(&", 19), (*(P140)rt_nil_check(F->ent_3136))), rt_g_lit("); rt_accept_end(&", 18)), (*(P140)rt_nil_check(F->ent_3136))), rt_g_lit(", 0, 0); }", 10)));
goto ret_;
}
f_new_name_239(F->up, rt_g_lit("ep", 2), &F->ep_3137);
f_new_name_239(F->up, rt_g_lit("xf", 2), &F->xf_3138);
f_new_name_239(F->up, rt_g_lit("x", 1), &F->x_3139);
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ struct ", 9), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3134)).cname_))), rt_g_lit("p *", 3)), (*(P140)rt_nil_check(F->ep_3137))), rt_g_lit(" = rt_accept_begin(&", 20)), (*(P140)rt_nil_check(F->ent_3136))), rt_g_lit(");", 2)));
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_frame ", 9), (*(P140)rt_nil_check(F->xf_3138))), one_rt_gstr(59)));
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (RT_TRY(", 11), (*(P140)rt_nil_check(F->xf_3138))), rt_g_lit(")) {", 4)));
f_push_cleanup_712(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P140)rt_nil_check(F->xf_3138))), rt_g_lit("); rt_accept_end(&", 18)), (*(P140)rt_nil_check(F->ent_3136))), rt_g_lit(", 0, 0);", 8)));
f_open_scope_474(F->up);
F->pm_3140 = (*(P117)rt_nil_check(F->y_3134)).params_;
while ((F->pm_3140 != NULL)) {
if ((G_NV((*(P1887)rt_nil_check(F->pm_3140)).mode_) == ((rt_int)1LL))) {
F->p_3142 = f_new_sym_478(F->up, ((rt_int)2LL), (*(P1887)rt_nil_check(F->pm_3140)).name_);
(*(P117)rt_nil_check(F->p_3142)).ro_ = 1;
(*(P117)rt_nil_check(F->p_3142)).access_path_ = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->ep_3137))), rt_g_lit("->", 2)), (*(P140)rt_nil_check((*(P1887)rt_nil_check(F->pm_3140)).cfield_))), one_rt_gstr(41)));
} else {
F->p_3142 = f_new_sym_478(F->up, ((rt_int)1LL), (*(P1887)rt_nil_check(F->pm_3140)).name_);
(*(P117)rt_nil_check(F->p_3142)).access_path_ = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*", 2), (*(P140)rt_nil_check(F->ep_3137))), rt_g_lit("->", 2)), (*(P140)rt_nil_check((*(P1887)rt_nil_check(F->pm_3140)).cfield_))), one_rt_gstr(41)));
}
if ((F->f_3141 != NULL)) {
(*(P117)rt_nil_check(F->p_3142)).name_ = (*(P174)rt_nil_check(F->f_3141)).name_;
F->f_3141 = (*(P174)rt_nil_check(F->f_3141)).next_;
}
(*(P117)rt_nil_check(F->p_3142)).t_ = (*(P1887)rt_nil_check(F->pm_3140)).t_;
(*(P117)rt_nil_check(F->p_3142)).c_ = (*(P1887)rt_nil_check(F->pm_3140)).c_;
f_define_473(F->up, F->p_3142, G_NV((*(P174)rt_nil_check(F->s_1222)).line_));
F->pm_3140 = (*(P1887)rt_nil_check(F->pm_3140)).next_;
}
L_end_3143: ;
F->up->accept_depth_211 = rt_add(G_NV(F->up->accept_depth_211), ((rt_int)1LL));
F->saved_ax_3135 = F->up->accept_exits_149;
F->up->accept_exits_149 = F->up->exits_145;
f_gen_statements_708(F->up, (*(P174)rt_nil_check(F->s_1222)).b_);
F->up->accept_exits_149 = F->saved_ax_3135;
F->up->accept_depth_211 = rt_sub(G_NV(F->up->accept_depth_211), ((rt_int)1LL));
f_close_scope_475(F->up);
f_pop_cleanup_713(F->up);
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P140)rt_nil_check(F->xf_3138))), rt_g_lit("); rt_accept_end(&", 18)), (*(P140)rt_nil_check(F->ent_3136))), rt_g_lit(", 0, 0);", 8)));
f_emit_263(F->up, rt_g_lit("} else {", 8));
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P140)rt_nil_check(F->xf_3138))), rt_g_lit("); int ", 7)), (*(P140)rt_nil_check(F->x_3139))), rt_g_lit(" = rt_xcur; rt_accept_end(&", 27)), (*(P140)rt_nil_check(F->ent_3136))), rt_g_lit(", 1, ", 5)), rt_g_lit("rt_g_partner_exc(", 17)), (*(P140)rt_nil_check(F->x_3139))), rt_g_lit(")); rt_raise(", 13)), (*(P140)rt_nil_check(F->x_3139))), rt_g_lit(");", 2)));
f_emit_263(F->up, rt_g_lit("}", 1));
f_emit_263(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_member_slot_1227(struct f_greenc_1fr *up_, P117 y_1224, P174 s_1225, P140 *ent_1226) {
  struct f_member_slot_1227fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1224 = y_1224;
F->s_1225 = s_1225;
F->ent_1226 = ent_1226;
F->vt_3144 = NULL;
F->v_3145 = NULL;
if (((*(P117)rt_nil_check(F->y_1224)).c_ != NULL)) {
if (((*(P174)rt_nil_check(F->s_1225)).c_ == NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_1225)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1224)).name_)), rt_g_lit(" is an entry family: accept ", 28)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1224)).name_))), rt_g_lit("(I)", 3)));
}
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->s_1225)).c_, NULL, &F->vt_3144, &F->v_3145);
f_entry_family_slot_1174(F->up, F->y_1224, (*(P140)rt_nil_check((*F->ent_1226))), (*(P140)rt_nil_check(F->v_3145)), &(*F->ent_1226));
} else if (((*(P174)rt_nil_check(F->s_1225)).c_ != NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_1225)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1224)).name_)), rt_g_lit(" is not an entry family", 23)));
}
ret_:

  return;
}

static void f_gen_delay_ticks_1230(struct f_greenc_1fr *up_, P174 e_1228, P140 *r_1229) {
  struct f_gen_delay_ticks_1230fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1228 = e_1228;
F->r_1229 = r_1229;
F->vt_3146 = NULL;
F->v_3147 = NULL;
f_gexpr_819(F->up, F->e_1228, F->up->ty_time_171, &F->vt_3146, &F->v_3147);
f_check_type_495(F->up, F->vt_3146, F->up->ty_time_171, G_NV((*(P174)rt_nil_check(F->e_1228)).line_));
(*F->r_1229) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(rt_int)llround(", 16), (*(P140)rt_nil_check(F->v_3147))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_gen_select_1232(struct f_greenc_1fr *up_, P174 s_1231) {
  struct f_gen_select_1232fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1231 = s_1231;
F->alt_3148 = NULL;
F->alt_3148 = (*(P174)rt_nil_check(F->s_1231)).a_;
F->n_3149 = INT64_MIN;
F->n_3149 = ((rt_int)0LL);
F->i_3150 = INT64_MIN;
F->has_delay_3151 = INT_MIN;
F->has_delay_3151 = 0;
F->has_accept_3152 = INT_MIN;
F->has_accept_3152 = 0;
F->al_3153 = NULL;
F->w_3154 = NULL;
F->g_3155 = NULL;
F->ent_3156 = NULL;
F->ticks_3157 = NULL;
F->vt_3158 = NULL;
F->y_3159 = NULL;
f_new_name_239(F->up, rt_g_lit("al", 2), &F->al_3153);
f_new_name_239(F->up, rt_g_lit("w", 1), &F->w_3154);
while ((F->alt_3148 != NULL)) {
F->n_3149 = rt_add(G_NV(F->n_3149), ((rt_int)1LL));
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->alt_3148)).b_)).kind_) == ((rt_int)32LL))) {
F->has_delay_3151 = 1;
} else {
F->has_accept_3152 = 1;
}
F->alt_3148 = (*(P174)rt_nil_check(F->alt_3148)).next_;
}
L_end_3160: ;
if (((G_NV((*(P174)rt_nil_check(F->s_1231)).flag_) == ((rt_int)1LL)) && G_NV(F->has_delay_3151))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_1231)).line_), rt_g_lit("a select cannot have both delay alternatives and an else part (RM79 9.7)", 72));
}
if ((!G_NV(F->has_accept_3152))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_1231)).line_), rt_g_lit("a select needs at least one accept alternative (RM79 9.7)", 57));
}
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_alt ", 9), (*(P140)rt_nil_check(F->al_3153))), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(rt_add(G_NV(F->n_3149), ((rt_int)1LL))))), rt_g_lit("]; int open_ = 0;", 17)));
F->alt_3148 = (*(P174)rt_nil_check(F->s_1231)).a_;
F->i_3150 = ((rt_int)0LL);
while ((F->alt_3148 != NULL)) {
F->g_3155 = f_mk_236(F->up, rt_g_lit("1", 1));
if (((*(P174)rt_nil_check(F->alt_3148)).a_ != NULL)) {
f_condition_859(F->up, (*(P174)rt_nil_check(F->alt_3148)).a_, F->up->ty_bool_157, &F->vt_3158, &F->g_3155);
f_check_type_495(F->up, F->vt_3158, F->up->ty_bool_157, G_NV((*(P174)rt_nil_check(F->alt_3148)).line_));
}
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->alt_3148)).b_)).kind_) == ((rt_int)34LL))) {
f_accept_entry_1217(F->up, (*(P174)rt_nil_check(F->alt_3148)).b_, &F->y_3159);
if ((F->y_3159 == NULL)) {
F->y_3159 = f_lookup_entry_438(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->alt_3148)).b_)).name_)), F->up->cur_task_210);
}
if (((F->y_3159 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_3159)).kind_) != ((rt_int)10LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->alt_3148)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->alt_3148)).b_)).name_)), rt_g_lit(" is not an entry", 16)));
}
f_entry_path_1158(F->up, F->y_3159, rt_g_lit("", 0), &F->ent_3156);
f_member_slot_1227(F->up, F->y_3159, (*(P174)rt_nil_check(F->alt_3148)).b_, &F->ent_3156);
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->al_3153)), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(G_NV(F->i_3150)))), rt_g_lit("] = (rt_alt){RT_ALT_ACCEPT, (", 29)), (*(P140)rt_nil_check(F->g_3155))), rt_g_lit("), &", 4)), (*(P140)rt_nil_check(F->ent_3156))), rt_g_lit(", NULL, 0};", 11)));
} else {
f_gen_delay_ticks_1230(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->alt_3148)).b_)).a_, &F->ticks_3157);
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->al_3153)), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(G_NV(F->i_3150)))), rt_g_lit("] = (rt_alt){RT_ALT_DELAY, (", 28)), (*(P140)rt_nil_check(F->g_3155))), rt_g_lit("), NULL, NULL, ", 15)), (*(P140)rt_nil_check(F->ticks_3157))), rt_g_lit("};", 2)));
}
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("open_ |= ", 9), (*(P140)rt_nil_check(F->al_3153))), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(G_NV(F->i_3150)))), rt_g_lit("].open;", 7)));
F->i_3150 = rt_add(G_NV(F->i_3150), ((rt_int)1LL));
F->alt_3148 = (*(P174)rt_nil_check(F->alt_3148)).next_;
}
L_end_3161: ;
if ((G_NV((*(P174)rt_nil_check(F->s_1231)).flag_) == ((rt_int)1LL))) {
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->al_3153)), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(G_NV(F->n_3149)))), rt_g_lit("] = (rt_alt){RT_ALT_ELSE, 1, NULL, NULL, 0};", 44)));
F->n_3149 = rt_add(G_NV(F->n_3149), ((rt_int)1LL));
} else {
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (!open_) rt_raise(rt_exc(", 28), f_q_254(F->up)), rt_g_lit("SELECT_ERROR", 12)), f_q_254(F->up)), rt_g_lit("));", 3)));
}
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("int ", 4), (*(P140)rt_nil_check(F->w_3154))), rt_g_lit(" = rt_wait(", 11)), rt_g_s2g(rt_str_of_int(G_NV(F->n_3149)))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->al_3153))), rt_g_lit(");", 2)));
F->alt_3148 = (*(P174)rt_nil_check(F->s_1231)).a_;
F->i_3150 = ((rt_int)0LL);
while ((F->alt_3148 != NULL)) {
if ((G_NV(F->i_3150) == ((rt_int)0LL))) {
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P140)rt_nil_check(F->w_3154))), rt_g_lit(" == 0) {", 8)));
} else {
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P140)rt_nil_check(F->w_3154))), rt_g_lit(" == ", 4)), rt_g_s2g(rt_str_of_int(G_NV(F->i_3150)))), rt_g_lit(") {", 3)));
}
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->alt_3148)).b_)).kind_) == ((rt_int)34LL))) {
f_gen_accept_1223(F->up, (*(P174)rt_nil_check(F->alt_3148)).b_);
}
f_gen_statements_708(F->up, (*(P174)rt_nil_check(F->alt_3148)).c_);
F->i_3150 = rt_add(G_NV(F->i_3150), ((rt_int)1LL));
F->alt_3148 = (*(P174)rt_nil_check(F->alt_3148)).next_;
}
L_end_3162: ;
if ((G_NV((*(P174)rt_nil_check(F->s_1231)).flag_) == ((rt_int)1LL))) {
f_emit_263(F->up, rt_g_lit("} else {", 8));
f_gen_statements_708(F->up, (*(P174)rt_nil_check(F->s_1231)).b_);
}
f_emit_263(F->up, rt_g_lit("}", 1));
f_emit_263(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_family_range_1237(struct f_greenc_1fr *up_, P117 y_1233, P174 ix_1234, P140 *lo_1235, P140 *hi_1236) {
  struct f_family_range_1237fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1233 = y_1233;
F->ix_1234 = ix_1234;
F->lo_1235 = lo_1235;
F->hi_1236 = hi_1236;
F->vt_3163 = NULL;
if ((F->ix_1234 == NULL)) {
f_path_at_1133(F->up, G_NV((*(P117)rt_nil_check(F->y_1233)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1233)).cname_)), rt_g_lit("lo", 2)), &(*F->lo_1235));
f_path_at_1133(F->up, G_NV((*(P117)rt_nil_check(F->y_1233)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1233)).cname_)), rt_g_lit("hi", 2)), &(*F->hi_1236));
} else if ((G_NV((*(P174)rt_nil_check(F->ix_1234)).kind_) == ((rt_int)14LL))) {
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->ix_1234)).a_, F->up->ty_int_156, &F->vt_3163, &(*F->lo_1235));
f_gexpr_819(F->up, (*(P174)rt_nil_check(F->ix_1234)).b_, F->up->ty_int_156, &F->vt_3163, &(*F->hi_1236));
} else {
f_gexpr_819(F->up, F->ix_1234, F->up->ty_int_156, &F->vt_3163, &(*F->lo_1235));
(*F->hi_1236) = (*F->lo_1235);
}
ret_:

  return;
}

static void f_task_statement_gen_1239(struct f_greenc_1fr *up_, P174 s_1238) {
  struct f_task_statement_gen_1239fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1238 = s_1238;
F->n_3164 = NULL;
F->ix_3165 = NULL;
F->y_3166 = NULL;
F->a_3167 = NULL;
F->d_3168 = NULL;
F->l_3169 = NULL;
F->ticks_3170 = NULL;
F->lo_3171 = NULL;
F->hi_3172 = NULL;
{ rt_int sel3173 = G_NV((*(P174)rt_nil_check(F->s_1238)).kind_);
if (0 || sel3173 == ((rt_int)32LL)) {
f_gen_delay_ticks_1230(F->up, (*(P174)rt_nil_check(F->s_1238)).a_, &F->ticks_3170);
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_delay(", 9), (*(P140)rt_nil_check(F->ticks_3170))), rt_g_lit(");", 2)));
} else if (0 || sel3173 == ((rt_int)33LL)) {
if ((G_NV(F->up->accept_depth_211) > ((rt_int)0LL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_1238)).line_), rt_g_lit("an accept body cannot initiate a task (RM79 9.5)", 48));
}
F->n_3164 = (*(P174)rt_nil_check(F->s_1238)).a_;
while ((F->n_3164 != NULL)) {
f_task_of_1139(F->up, F->n_3164, &F->y_3166, &F->ix_3165);
f_path_at_1133(F->up, G_NV((*(P117)rt_nil_check(F->y_3166)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3166)).cname_)), rt_g_lit("decl", 4)), &F->d_3168);
if ((G_NV((*(P117)rt_nil_check(F->y_3166)).level_) > ((rt_int)0LL))) {
f_link_to_759(F->up, G_NV((*(P117)rt_nil_check(F->y_3166)).level_), &F->l_3169);
} else {
F->l_3169 = f_mk_236(F->up, rt_g_lit("NULL", 4));
}
if (((*(P117)rt_nil_check(F->y_3166)).c_ == NULL)) {
f_act_path_1150(F->up, F->y_3166, &F->a_3167);
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_create(&", 11), (*(P140)rt_nil_check(F->a_3167))), rt_g_lit(", &", 3)), (*(P140)rt_nil_check(F->d_3168))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3166)).cname_))), rt_g_lit("run, ", 5)), (*(P140)rt_nil_check(F->l_3169))), rt_g_lit(");", 2)));
} else {
f_family_range_1237(F->up, F->y_3166, F->ix_3165, &F->lo_3171, &F->hi_3172);
f_act_path_i_1154(F->up, F->y_3166, rt_g_lit("k_", 2), &F->a_3167);
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = ", 17), (*(P140)rt_nil_check(F->lo_3171))), rt_g_lit("; k_ <= ", 8)), (*(P140)rt_nil_check(F->hi_3172))), rt_g_lit("; k_++) { struct rt_famarg *g_ = rt_alloc(sizeof *g_); g_->up = ", 64)), (*(P140)rt_nil_check(F->l_3169))), rt_g_lit("; g_->i = k_; rt_create(&", 25)), (*(P140)rt_nil_check(F->a_3167))), rt_g_lit(", &", 3)), (*(P140)rt_nil_check(F->d_3168))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3166)).cname_))), rt_g_lit("run, g_); }", 11)));
}
F->n_3164 = (*(P174)rt_nil_check(F->n_3164)).next_;
}
L_end_3174: ;
} else if (0 || sel3173 == ((rt_int)34LL)) {
f_gen_accept_1223(F->up, F->s_1238);
} else if (0 || sel3173 == ((rt_int)35LL)) {
f_gen_select_1232(F->up, F->s_1238);
} else if (0 || sel3173 == ((rt_int)36LL)) {
F->n_3164 = (*(P174)rt_nil_check(F->s_1238)).a_;
while ((F->n_3164 != NULL)) {
f_task_of_1139(F->up, F->n_3164, &F->y_3166, &F->ix_3165);
if (((*(P117)rt_nil_check(F->y_3166)).c_ == NULL)) {
f_act_path_1150(F->up, F->y_3166, &F->a_3167);
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_abort(&", 12), (*(P140)rt_nil_check(F->a_3167))), rt_g_lit(");", 2)));
} else {
f_family_range_1237(F->up, F->y_3166, F->ix_3165, &F->lo_3171, &F->hi_3172);
f_act_path_i_1154(F->up, F->y_3166, rt_g_lit("k_", 2), &F->a_3167);
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = ", 17), (*(P140)rt_nil_check(F->lo_3171))), rt_g_lit("; k_ <= ", 8)), (*(P140)rt_nil_check(F->hi_3172))), rt_g_lit("; k_++) rt_g_abort(&", 20)), (*(P140)rt_nil_check(F->a_3167))), rt_g_lit(");", 2)));
}
F->n_3164 = (*(P174)rt_nil_check(F->n_3164)).next_;
}
L_end_3175: ;
} else {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->s_1238)).line_), rt_g_lit("this statement is not handled", 29));
}
}
ret_:

  return;
}

static P174 f_root_name_1241(struct f_greenc_1fr *up_, P174 e_1240) {
  struct f_root_name_1241fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1240 = e_1240;
if ((G_NV((*(P174)rt_nil_check(F->e_1240)).kind_) == ((rt_int)5LL))) {
F->result_ = F->e_1240;
goto ret_;
} else if ((((G_NV((*(P174)rt_nil_check(F->e_1240)).kind_) == ((rt_int)9LL)) || (G_NV((*(P174)rt_nil_check(F->e_1240)).kind_) == ((rt_int)8LL))) || (G_NV((*(P174)rt_nil_check(F->e_1240)).kind_) == ((rt_int)15LL)))) {
F->result_ = f_root_name_1241(F->up, (*(P174)rt_nil_check(F->e_1240)).a_);
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_pure_target_1244(struct f_greenc_1fr *up_, P174 target_1242, rt_int line_1243) {
  struct f_check_pure_target_1244fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->target_1242 = target_1242;
F->line_1243 = line_1243;
F->n_3176 = NULL;
F->y_3177 = NULL;
if ((F->up->pure_sym_225 == NULL)) {
goto ret_;
}
if (G_NV(F->up->last_deref_229)) {
f_fail_257(F->up, F->line_1243, cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->pure_sym_225)).name_))), rt_g_lit(" may not change an object designated by an access value (RM79 6.5)", 66)));
}
F->n_3176 = f_root_name_1241(F->up, F->target_1242);
if ((F->n_3176 != NULL)) {
F->y_3177 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_3176)).name_)));
if ((((F->y_3177 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_3177)).kind_) == ((rt_int)1LL))) && (G_NV((*(P117)rt_nil_check(F->y_3177)).depth_) < G_NV(F->up->pure_depth_226)))) {
f_fail_257(F->up, F->line_1243, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->pure_sym_225)).name_))), rt_g_lit(" may not assign to ", 19)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_3176)).name_))), rt_g_lit(", which is not local to it (RM79 6.5)", 37)));
}
}
ret_:

  return;
}

static int f_assigns_nonlocal_1247(struct f_greenc_1fr *up_, P174 d_1245, rt_gstr name_1246) {
  struct f_assigns_nonlocal_1247fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_1245 = d_1245;
F->name_1246 = cp_rt_gstr(name_1246);
if (f_scan_assigns_1258(F->up, (*(P174)rt_nil_check(F->d_1245)).d_, F->d_1245, F->name_1246)) {
F->result_ = 1;
goto ret_;
}
F->result_ = f_scan_handlers_1254(F->up, (*(P174)rt_nil_check(F->d_1245)).e_, F->d_1245, F->name_1246);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_declares_1250(struct f_greenc_1fr *up_, P174 d_1248, rt_gstr name_1249) {
  struct f_declares_1250fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_1248 = d_1248;
F->name_1249 = cp_rt_gstr(name_1249);
F->p_3178 = NULL;
F->p_3178 = (*(P174)rt_nil_check(F->d_1248)).a_;
F->e_3179 = NULL;
F->e_3179 = (*(P174)rt_nil_check(F->d_1248)).c_;
while ((F->p_3178 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3178)).name_)), F->name_1249)) {
F->result_ = 1;
goto ret_;
}
F->p_3178 = (*(P174)rt_nil_check(F->p_3178)).next_;
}
L_end_3180: ;
while ((F->e_3179 != NULL)) {
if ((((*(P174)rt_nil_check(F->e_3179)).name_ != NULL) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_3179)).name_)), F->name_1249))) {
F->result_ = 1;
goto ret_;
}
F->e_3179 = (*(P174)rt_nil_check(F->e_3179)).next_;
}
L_end_3181: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_scan_handlers_1254(struct f_greenc_1fr *up_, P174 h_1251, P174 d_1252, rt_gstr name_1253) {
  struct f_scan_handlers_1254fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->h_1251 = h_1251;
F->d_1252 = d_1252;
F->name_1253 = cp_rt_gstr(name_1253);
F->p_3182 = NULL;
F->p_3182 = F->h_1251;
while ((F->p_3182 != NULL)) {
if (f_scan_assigns_1258(F->up, (*(P174)rt_nil_check(F->p_3182)).b_, F->d_1252, F->name_1253)) {
F->result_ = 1;
goto ret_;
}
F->p_3182 = (*(P174)rt_nil_check(F->p_3182)).next_;
}
L_end_3183: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_scan_assigns_1258(struct f_greenc_1fr *up_, P174 stmts_1255, P174 d_1256, rt_gstr name_1257) {
  struct f_scan_assigns_1258fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_1255 = stmts_1255;
F->d_1256 = d_1256;
F->name_1257 = cp_rt_gstr(name_1257);
F->s_3184 = NULL;
F->s_3184 = F->stmts_1255;
F->a_3185 = NULL;
F->r_3186 = NULL;
while ((F->s_3184 != NULL)) {
if ((G_NV((*(P174)rt_nil_check(F->s_3184)).kind_) == ((rt_int)20LL))) {
F->r_3186 = f_root_name_1241(F->up, (*(P174)rt_nil_check(F->s_3184)).a_);
if ((((F->r_3186 != NULL) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_3186)).name_)), F->name_1257)) && (!f_declares_1250(F->up, F->d_1256, F->name_1257)))) {
F->result_ = 1;
goto ret_;
}
} else if ((G_NV((*(P174)rt_nil_check(F->s_3184)).kind_) == ((rt_int)22LL))) {
F->a_3185 = (*(P174)rt_nil_check(F->s_3184)).a_;
while ((F->a_3185 != NULL)) {
if (f_scan_assigns_1258(F->up, (*(P174)rt_nil_check(F->a_3185)).b_, F->d_1256, F->name_1257)) {
F->result_ = 1;
goto ret_;
}
F->a_3185 = (*(P174)rt_nil_check(F->a_3185)).next_;
}
L_end_3188: ;
if (f_scan_assigns_1258(F->up, (*(P174)rt_nil_check(F->s_3184)).b_, F->d_1256, F->name_1257)) {
F->result_ = 1;
goto ret_;
}
} else if ((G_NV((*(P174)rt_nil_check(F->s_3184)).kind_) == ((rt_int)23LL))) {
F->a_3185 = (*(P174)rt_nil_check(F->s_3184)).b_;
while ((F->a_3185 != NULL)) {
if (f_scan_assigns_1258(F->up, (*(P174)rt_nil_check(F->a_3185)).b_, F->d_1256, F->name_1257)) {
F->result_ = 1;
goto ret_;
}
F->a_3185 = (*(P174)rt_nil_check(F->a_3185)).next_;
}
L_end_3189: ;
if (f_scan_assigns_1258(F->up, (*(P174)rt_nil_check(F->s_3184)).c_, F->d_1256, F->name_1257)) {
F->result_ = 1;
goto ret_;
}
} else if ((G_NV((*(P174)rt_nil_check(F->s_3184)).kind_) == ((rt_int)24LL))) {
if (f_scan_assigns_1258(F->up, (*(P174)rt_nil_check(F->s_3184)).b_, F->d_1256, F->name_1257)) {
F->result_ = 1;
goto ret_;
}
} else if ((G_NV((*(P174)rt_nil_check(F->s_3184)).kind_) == ((rt_int)25LL))) {
if ((f_scan_assigns_1258(F->up, (*(P174)rt_nil_check(F->s_3184)).b_, F->d_1256, F->name_1257) || f_scan_handlers_1254(F->up, (*(P174)rt_nil_check(F->s_3184)).c_, F->d_1256, F->name_1257))) {
F->result_ = 1;
goto ret_;
}
}
F->s_3184 = (*(P174)rt_nil_check(F->s_3184)).next_;
}
L_end_3187: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_call_rules_1261(struct f_greenc_1fr *up_, P174 e_1259, P117 y_1260) {
  struct f_check_call_rules_1261fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1259 = e_1259;
F->y_1260 = y_1260;
F->z_3190 = NULL;
F->s_3191 = NULL;
if ((((F->up->pure_sym_225 != NULL) && ((G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_1260)).result_)).kind_) == ((rt_int)9LL)) || G_NV((*(P117)rt_nil_check(F->y_1260)).vrp_))) && (G_NV((*(P117)rt_nil_check(F->y_1260)).depth_) < G_NV(F->up->pure_depth_226)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1259)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->pure_sym_225)).name_))), rt_g_lit(" may not call procedure ", 24)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1260)).name_))), rt_g_lit(": it could have side effects (RM79 6.5)", 39)));
}
if (((!G_NV((*(P117)rt_nil_check(F->y_1260)).vrp_)) || (G_NV(F->up->trial_155) > ((rt_int)0LL)))) {
goto ret_;
}
if ((!G_NV(F->up->vrp_ok_227))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1259)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("value-returning procedure ", 26), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1260)).name_))), rt_g_lit(" can be called only in an assignment, an initialization or a procedure call (RM79 6.5)", 86)));
}
F->s_3191 = F->up->scope_stack_121;
while ((F->s_3191 != NULL)) {
if (((((G_NV((*(P117)rt_nil_check(F->s_3191)).kind_) == ((rt_int)1LL)) && (G_NV((*(P117)rt_nil_check(F->s_3191)).depth_) <= G_NV((*(P117)rt_nil_check(F->y_1260)).depth_))) && (f_lookup_432(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->s_3191)).name_))) == F->s_3191)) && f_assigns_nonlocal_1247(F->up, (*(P117)rt_nil_check(F->y_1260)).decl_, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->s_3191)).name_))))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1259)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("value-returning procedure ", 26), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1260)).name_))), rt_g_lit(" assigns ", 9)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->s_3191)).name_))), rt_g_lit(", which is visible here; it can be called only outside its scope (RM79 6.5)", 75)));
}
F->s_3191 = (*(P117)rt_nil_check(F->s_3191)).stack_;
}
L_end_3192: ;
ret_:

  return;
}

static void f_generic_p_1263(struct f_greenc_1fr *up_, P174 *res_1262) {
  struct f_generic_p_1263fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1262 = res_1262;
F->x_3193 = NULL;
F->p_3194 = NULL;
F->head_3195 = NULL;
F->tail_3196 = NULL;
F->names_3197 = NULL;
F->st_3198 = NULL;
F->def_3199 = NULL;
F->sub_3200 = NULL;
F->def_name_text_3201 = NULL;
F->more_3202 = INT_MIN;
F->more_3202 = 1;
f_expect_kw_332(F->up, rt_g_lit("GENERIC", 7));
F->x_3193 = f_nn_310(F->up, ((rt_int)54LL), f_cur_line_317(F->up));
if (f_at_op_321(F->up, rt_g_lit("(", 1))) {
f_skip_330(F->up);
while (G_NV(F->more_3202)) {
if (f_at_kw_319(F->up, rt_g_lit("RESTRICTED", 10))) {
f_skip_330(F->up);
}
if (f_at_kw_319(F->up, rt_g_lit("TYPE", 4))) {
f_skip_330(F->up);
F->p_3194 = f_nn_310(F->up, ((rt_int)47LL), f_cur_line_317(F->up));
(*(P174)rt_nil_check(F->p_3194)).ival_ = ((rt_int)10LL);
f_expect_id_336(F->up, &(*(P174)rt_nil_check(F->p_3194)).name_);
f_append_314(F->up, &F->head_3195, &F->tail_3196, F->p_3194);
} else if ((f_at_kw_319(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_319(F->up, rt_g_lit("FUNCTION", 8)))) {
F->p_3194 = f_nn_310(F->up, ((rt_int)47LL), f_cur_line_317(F->up));
(*(P174)rt_nil_check(F->p_3194)).ival_ = ((rt_int)11LL);
if (f_at_kw_319(F->up, rt_g_lit("PROCEDURE", 9))) {
F->sub_3200 = f_nn_310(F->up, ((rt_int)44LL), f_cur_line_317(F->up));
} else {
F->sub_3200 = f_nn_310(F->up, ((rt_int)45LL), f_cur_line_317(F->up));
}
f_skip_330(F->up);
f_designator_397(F->up, &(*(P174)rt_nil_check(F->sub_3200)).name_);
if (f_at_op_321(F->up, rt_g_lit("(", 1))) {
f_formal_part_395(F->up, &(*(P174)rt_nil_check(F->sub_3200)).a_);
}
if (f_at_kw_319(F->up, rt_g_lit("RETURN", 6))) {
f_skip_330(F->up);
f_subtype_ind_374(F->up, &(*(P174)rt_nil_check(F->sub_3200)).b_);
}
(*(P174)rt_nil_check(F->sub_3200)).ival_ = ((rt_int)1LL);
(*(P174)rt_nil_check(F->p_3194)).name_ = (*(P174)rt_nil_check(F->sub_3200)).name_;
(*(P174)rt_nil_check(F->p_3194)).a_ = F->sub_3200;
if (f_at_kw_319(F->up, rt_g_lit("IS", 2))) {
f_skip_330(F->up);
if (f_at_kind_323(F->up, ((rt_int)6LL))) {
f_designator_397(F->up, &F->def_name_text_3201);
(*(P174)rt_nil_check(F->p_3194)).b_ = f_nn_310(F->up, ((rt_int)5LL), f_cur_line_317(F->up));
(*(P174)rt_nil_check((*(P174)rt_nil_check(F->p_3194)).b_)).name_ = F->def_name_text_3201;
} else {
f_name_p_368(F->up, &(*(P174)rt_nil_check(F->p_3194)).b_);
}
}
f_append_314(F->up, &F->head_3195, &F->tail_3196, F->p_3194);
} else {
f_id_list_340(F->up, &F->names_3197);
f_expect_op_334(F->up, rt_g_lit(":", 1));
if (f_at_kw_319(F->up, rt_g_lit("IN", 2))) {
f_skip_330(F->up);
}
f_subtype_ind_374(F->up, &F->st_3198);
F->def_3199 = NULL;
if (f_at_op_321(F->up, rt_g_lit(":=", 2))) {
f_skip_330(F->up);
f_expr_347(F->up, &F->def_3199);
}
while ((F->names_3197 != NULL)) {
F->p_3194 = f_nn_310(F->up, ((rt_int)47LL), G_NV((*(P174)rt_nil_check(F->names_3197)).line_));
(*(P174)rt_nil_check(F->p_3194)).ival_ = ((rt_int)1LL);
(*(P174)rt_nil_check(F->p_3194)).name_ = (*(P174)rt_nil_check(F->names_3197)).name_;
(*(P174)rt_nil_check(F->p_3194)).a_ = F->st_3198;
(*(P174)rt_nil_check(F->p_3194)).b_ = F->def_3199;
f_append_314(F->up, &F->head_3195, &F->tail_3196, F->p_3194);
F->names_3197 = (*(P174)rt_nil_check(F->names_3197)).next_;
}
L_end_3204: ;
}
F->more_3202 = f_at_op_321(F->up, rt_g_lit(";", 1));
if (G_NV(F->more_3202)) {
f_skip_330(F->up);
}
}
L_end_3203: ;
f_expect_op_334(F->up, rt_g_lit(")", 1));
}
if ((f_at_kw_319(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_319(F->up, rt_g_lit("FUNCTION", 8)))) {
f_subprogram_399(F->up, &(*(P174)rt_nil_check(F->x_3193)).b_);
} else if (f_at_kw_319(F->up, rt_g_lit("PACKAGE", 7))) {
f_package_p_405(F->up, &(*(P174)rt_nil_check(F->x_3193)).b_);
} else if (f_at_kw_319(F->up, rt_g_lit("TASK", 4))) {
f_task_p_1119(F->up, &(*(P174)rt_nil_check(F->x_3193)).b_);
} else {
f_perror_329(F->up, rt_g_lit("a generic unit is a subprogram, a package or a task", 51));
}
(*(P174)rt_nil_check(F->x_3193)).a_ = F->head_3195;
(*(P174)rt_nil_check(F->x_3193)).name_ = (*(P174)rt_nil_check((*(P174)rt_nil_check(F->x_3193)).b_)).name_;
(*F->res_1262) = F->x_3193;
ret_:

  return;
}

static void f_instantiation_1266(struct f_greenc_1fr *up_, P174 x_1264, P174 *res_1265) {
  struct f_instantiation_1266fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_1264 = x_1264;
F->res_1265 = res_1265;
F->i_3205 = NULL;
F->head_3206 = NULL;
F->tail_3207 = NULL;
F->a_3208 = NULL;
F->formal_3209 = NULL;
F->mark_3210 = INT64_MIN;
F->more_3211 = INT_MIN;
F->more_3211 = 1;
f_expect_kw_332(F->up, rt_g_lit("IS", 2));
f_expect_kw_332(F->up, rt_g_lit("NEW", 3));
F->i_3205 = f_nn_310(F->up, ((rt_int)53LL), G_NV((*(P174)rt_nil_check(F->x_1264)).line_));
(*(P174)rt_nil_check(F->i_3205)).name_ = (*(P174)rt_nil_check(F->x_1264)).name_;
(*(P174)rt_nil_check(F->i_3205)).ival_ = G_NV((*(P174)rt_nil_check(F->x_1264)).kind_);
f_expect_id_336(F->up, &(*(P174)rt_nil_check(F->i_3205)).tag_);
if (f_at_op_321(F->up, rt_g_lit("(", 1))) {
f_skip_330(F->up);
while (G_NV(F->more_3211)) {
F->formal_3209 = NULL;
F->mark_3210 = ((rt_int)0LL);
if (((f_at_kind_323(F->up, ((rt_int)1LL)) && (f_kind_at_325(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_327(F->up, ((rt_int)1LL)), rt_g_lit("IS", 2)))) {
f_expect_id_336(F->up, &F->formal_3209);
f_skip_330(F->up);
F->mark_3210 = ((rt_int)5LL);
} else if (((f_at_kind_323(F->up, ((rt_int)1LL)) && (f_kind_at_325(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && ((eq_rt_gstr(f_text_at_327(F->up, ((rt_int)1LL)), rt_g_lit(":=", 2)) || eq_rt_gstr(f_text_at_327(F->up, ((rt_int)1LL)), rt_g_lit("=:", 2))) || eq_rt_gstr(f_text_at_327(F->up, ((rt_int)1LL)), rt_g_lit(":=:", 3))))) {
f_expect_id_336(F->up, &F->formal_3209);
f_skip_330(F->up);
F->mark_3210 = ((rt_int)1LL);
}
if ((f_at_kind_323(F->up, ((rt_int)6LL)) && (G_NV(F->mark_3210) == ((rt_int)5LL)))) {
F->a_3208 = f_nn_310(F->up, ((rt_int)5LL), f_cur_line_317(F->up));
f_designator_397(F->up, &(*(P174)rt_nil_check(F->a_3208)).name_);
} else {
f_expr_347(F->up, &F->a_3208);
}
(*(P174)rt_nil_check(F->a_3208)).formal_ = F->formal_3209;
(*(P174)rt_nil_check(F->a_3208)).flag_ = G_NV(F->mark_3210);
f_append_314(F->up, &F->head_3206, &F->tail_3207, F->a_3208);
F->more_3211 = f_at_op_321(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_3211)) {
f_skip_330(F->up);
}
}
L_end_3212: ;
f_expect_op_334(F->up, rt_g_lit(")", 1));
}
f_expect_op_334(F->up, rt_g_lit(";", 1));
(*(P174)rt_nil_check(F->i_3205)).a_ = F->head_3206;
(*F->res_1265) = F->i_3205;
ret_:

  return;
}

static void f_generic_decl_1268(struct f_greenc_1fr *up_, P174 e_1267) {
  struct f_generic_decl_1268fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1267 = e_1267;
F->y_3213 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->e_1267)).kind_) == ((rt_int)54LL))) {
F->y_3213 = f_new_sym_478(F->up, ((rt_int)11LL), (*(P174)rt_nil_check(F->e_1267)).name_);
(*(P117)rt_nil_check(F->y_3213)).decl_ = F->e_1267;
f_define_473(F->up, F->y_3213, G_NV((*(P174)rt_nil_check(F->e_1267)).line_));
} else if ((G_NV((*(P174)rt_nil_check(F->e_1267)).kind_) == ((rt_int)53LL))) {
f_instantiate_1289(F->up, F->e_1267);
} else {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1267)).line_), rt_g_lit("this declaration is not handled", 31));
}
ret_:

  return;
}

static int f_is_generic_name_1270(struct f_greenc_1fr *up_, rt_gstr n_1269) {
  struct f_is_generic_name_1270fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1269 = cp_rt_gstr(n_1269);
F->y_3214 = NULL;
F->y_3214 = f_lookup_432(F->up, F->n_1269);
if ((F->y_3214 == NULL)) {
F->result_ = 0;
goto ret_;
} else if ((G_NV((*(P117)rt_nil_check(F->y_3214)).depth_) != G_NV(F->up->depth_120))) {
F->result_ = 0;
goto ret_;
}
if ((!(F->y_3214 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P117)rt_nil_check(F->y_3214)).kind_) == ((rt_int)11LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_attach_generic_body_1272(struct f_greenc_1fr *up_, P174 e_1271) {
  struct f_attach_generic_body_1272fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1271 = e_1271;
F->y_3215 = NULL;
F->y_3215 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1271)).name_)));
(*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_3215)).decl_)).c_ = F->e_1271;
F->up->generic_contexts_148 = ({ R147 *cell3216 = rt_alloc(sizeof(R147)); *cell3216 = cp_R147(({ R147 ag3217; ag3217.body_node_ = F->e_1271; ag3217.visible_ = F->up->scope_stack_121; ag3217.next_ = F->up->generic_contexts_148; ag3217; })); (P146)cell3216; });
ret_:

  return;
}

static void f_restore_generic_context_1275(struct f_greenc_1fr *up_, P174 body_node_1273, rt_int line_1274) {
  struct f_restore_generic_context_1275fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->body_node_1273 = body_node_1273;
F->line_1274 = line_1274;
F->ctx_3218 = NULL;
F->ctx_3218 = F->up->generic_contexts_148;
F->m_3219 = NULL;
F->z_3220 = NULL;
F->seen_3221 = INT_MIN;
while (((F->ctx_3218 != NULL) && ((*(P146)rt_nil_check(F->ctx_3218)).body_node_ != F->body_node_1273))) {
F->ctx_3218 = (*(P146)rt_nil_check(F->ctx_3218)).next_;
}
L_end_3222: ;
if ((F->ctx_3218 == NULL)) {
goto ret_;
}
F->m_3219 = (*(P146)rt_nil_check(F->ctx_3218)).visible_;
while ((F->m_3219 != NULL)) {
if (((G_NV((*(P117)rt_nil_check(F->m_3219)).level_) <= ((rt_int)0LL)) && (G_NV((*(P117)rt_nil_check(F->m_3219)).kind_) != ((rt_int)11LL)))) {
F->z_3220 = ({ A116 ix3224 = F->up->table_119; ix3224.p[rt_index(f_hash_425(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_3219)).name_))), ix3224.lo, ix3224.hi) - ix3224.lo]; });
F->seen_3221 = 0;
while ((F->z_3220 != NULL)) {
if (((G_NV((*(P117)rt_nil_check(F->z_3220)).depth_) == G_NV(F->up->depth_120)) && eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_3220)).name_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_3219)).name_))))) {
F->seen_3221 = 1;
}
F->z_3220 = (*(P117)rt_nil_check(F->z_3220)).chain_;
}
L_end_3225: ;
if ((!G_NV(F->seen_3221))) {
f_copy_sym_1067(F->up, F->m_3219, &F->z_3220);
f_define_473(F->up, F->z_3220, F->line_1274);
}
}
F->m_3219 = (*(P117)rt_nil_check(F->m_3219)).stack_;
}
L_end_3223: ;
ret_:

  return;
}

static P174 f_gactual_1279(struct f_greenc_1fr *up_, P174 args_1276, rt_int nth_1277, rt_gstr name_1278) {
  struct f_gactual_1279fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->args_1276 = args_1276;
F->nth_1277 = nth_1277;
F->name_1278 = cp_rt_gstr(name_1278);
F->a_3226 = NULL;
F->a_3226 = F->args_1276;
F->i_3227 = INT64_MIN;
F->i_3227 = ((rt_int)1LL);
while ((F->a_3226 != NULL)) {
if ((((*(P174)rt_nil_check(F->a_3226)).formal_ == NULL) && (G_NV(F->i_3227) == F->nth_1277))) {
F->result_ = F->a_3226;
goto ret_;
}
if ((((*(P174)rt_nil_check(F->a_3226)).formal_ != NULL) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_3226)).formal_)), F->name_1278))) {
F->result_ = F->a_3226;
goto ret_;
}
if (((*(P174)rt_nil_check(F->a_3226)).formal_ == NULL)) {
F->i_3227 = rt_add(G_NV(F->i_3227), ((rt_int)1LL));
}
F->a_3226 = (*(P174)rt_nil_check(F->a_3226)).next_;
}
L_end_3228: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_copy_node_1283(struct f_greenc_1fr *up_, P174 n_1280, P140 name_1281, P174 *r_1282) {
  struct f_copy_node_1283fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1280 = n_1280;
F->name_1281 = name_1281;
F->r_1282 = r_1282;
(*F->r_1282) = f_nn_310(F->up, G_NV((*(P174)rt_nil_check(F->n_1280)).kind_), G_NV((*(P174)rt_nil_check(F->n_1280)).line_));
as_R175(&(*(P174)rt_nil_check((*F->r_1282))), (*(P174)rt_nil_check(F->n_1280)));
(*(P174)rt_nil_check((*F->r_1282))).name_ = F->name_1281;
(*(P174)rt_nil_check((*F->r_1282))).next_ = NULL;
ret_:

  return;
}

static int f_matches_formal_1287(struct f_greenc_1fr *up_, P117 y_1284, rt_gstr name_1285, P117 fs_1286) {
  struct f_matches_formal_1287fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1284 = y_1284;
F->name_1285 = cp_rt_gstr(name_1285);
F->fs_1286 = fs_1286;
if (((!eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1284)).name_)), F->name_1285)) || ((G_NV((*(P117)rt_nil_check(F->y_1284)).kind_) != ((rt_int)3LL)) && (G_NV((*(P117)rt_nil_check(F->y_1284)).kind_) != ((rt_int)4LL))))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (f_same_types_464(F->up, (*(P117)rt_nil_check(F->y_1284)).params_, (*(P117)rt_nil_check(F->fs_1286)).params_) && f_same_452(F->up, (*(P117)rt_nil_check(F->y_1284)).result_, (*(P117)rt_nil_check(F->fs_1286)).result_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_instantiate_1289(struct f_greenc_1fr *up_, P174 e_1288) {
  struct f_instantiate_1289fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1288 = e_1288;
F->g_3229 = NULL;
F->g_3229 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1288)).tag_)));
F->gd_3230 = NULL;
F->pat_3231 = NULL;
F->f_3232 = NULL;
F->a_3233 = NULL;
F->cn_3234 = NULL;
F->y_3235 = NULL;
F->z_3236 = NULL;
F->fs_3237 = NULL;
F->nth_3238 = INT64_MIN;
F->nth_3238 = ((rt_int)1LL);
F->t_3239 = NULL;
F->vt_3240 = NULL;
F->c_3241 = NULL;
F->v_3242 = NULL;
F->acc_3243 = NULL;
F->x_3244 = NULL;
F->ok_3245 = INT_MIN;
if (((F->g_3229 == NULL) || (G_NV((*(P117)rt_nil_check(F->g_3229)).kind_) != ((rt_int)11LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1288)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1288)).tag_)), rt_g_lit(" is not a generic unit", 22)));
}
F->gd_3230 = (*(P117)rt_nil_check(F->g_3229)).decl_;
F->pat_3231 = (*(P174)rt_nil_check(F->gd_3230)).b_;
f_open_scope_474(F->up);
F->f_3232 = (*(P174)rt_nil_check(F->gd_3230)).a_;
while ((F->f_3232 != NULL)) {
F->a_3233 = f_gactual_1279(F->up, (*(P174)rt_nil_check(F->e_1288)).a_, G_NV(F->nth_3238), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3232)).name_)));
F->nth_3238 = rt_add(G_NV(F->nth_3238), ((rt_int)1LL));
if ((G_NV((*(P174)rt_nil_check(F->f_3232)).ival_) == ((rt_int)10LL))) {
if (((F->a_3233 == NULL) || (G_NV((*(P174)rt_nil_check(F->a_3233)).kind_) != ((rt_int)5LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1288)).line_), cat_rt_gstr(rt_g_lit("a type is required for generic parameter ", 41), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3232)).name_))));
}
F->y_3235 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_3233)).name_)));
if (((F->y_3235 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_3235)).kind_) != ((rt_int)5LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1288)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_3233)).name_)), rt_g_lit(" is not a type", 14)));
}
f_copy_sym_1067(F->up, F->y_3235, &F->z_3236);
(*(P117)rt_nil_check(F->z_3236)).name_ = (*(P174)rt_nil_check(F->f_3232)).name_;
f_define_473(F->up, F->z_3236, G_NV((*(P174)rt_nil_check(F->e_1288)).line_));
} else if ((G_NV((*(P174)rt_nil_check(F->f_3232)).ival_) == ((rt_int)11LL))) {
if ((F->a_3233 == NULL)) {
F->a_3233 = (*(P174)rt_nil_check(F->f_3232)).b_;
}
if (((F->a_3233 == NULL) || (G_NV((*(P174)rt_nil_check(F->a_3233)).kind_) != ((rt_int)5LL)))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1288)).line_), cat_rt_gstr(rt_g_lit("a subprogram is required for generic parameter ", 47), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3232)).name_))));
}
f_build_subprogram_659(F->up, (*(P174)rt_nil_check(F->f_3232)).a_, &F->fs_3237);
F->y_3235 = ({ A116 ix3247 = F->up->table_119; ix3247.p[rt_index(f_hash_425(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_3233)).name_))), ix3247.lo, ix3247.hi) - ix3247.lo]; });
while (((F->y_3235 != NULL) && (!f_matches_formal_1287(F->up, F->y_3235, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_3233)).name_)), F->fs_3237)))) {
F->y_3235 = (*(P117)rt_nil_check(F->y_3235)).chain_;
}
L_end_3248: ;
if ((F->y_3235 == NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1288)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no subprogram ", 14), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_3233)).name_))), rt_g_lit(" matches generic parameter ", 27)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3232)).name_))));
}
f_copy_sym_1067(F->up, F->y_3235, &F->z_3236);
(*(P117)rt_nil_check(F->z_3236)).name_ = (*(P174)rt_nil_check(F->f_3232)).name_;
f_define_473(F->up, F->z_3236, G_NV((*(P174)rt_nil_check(F->e_1288)).line_));
} else {
if ((F->a_3233 == NULL)) {
F->a_3233 = (*(P174)rt_nil_check(F->f_3232)).b_;
}
if ((F->a_3233 == NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1288)).line_), cat_rt_gstr(rt_g_lit("no actual for generic parameter ", 32), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3232)).name_))));
}
f_resolve_516(F->up, (*(P174)rt_nil_check(F->f_3232)).a_, &F->t_3239, &F->c_3241);
f_gexpr_819(F->up, F->a_3233, F->t_3239, &F->vt_3240, &F->v_3242);
f_check_type_495(F->up, F->vt_3240, F->t_3239, G_NV((*(P174)rt_nil_check(F->e_1288)).line_));
F->z_3236 = f_new_sym_478(F->up, ((rt_int)2LL), (*(P174)rt_nil_check(F->f_3232)).name_);
f_storage_647(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3232)).name_)), F->t_3239, &F->acc_3243);
f_copy_code_632(F->up, F->t_3239, (*(P140)rt_nil_check(F->v_3242)), &F->x_3244);
f_emit_263(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->acc_3243)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_3244))), one_rt_gstr(59)));
(*(P117)rt_nil_check(F->z_3236)).t_ = F->t_3239;
(*(P117)rt_nil_check(F->z_3236)).c_ = F->c_3241;
(*(P117)rt_nil_check(F->z_3236)).ro_ = 1;
if ((G_NV((*(P122)rt_nil_check(F->t_3239)).kind_) == ((rt_int)1LL))) {
f_manifest_512(F->up, F->a_3233, &(*(P117)rt_nil_check(F->z_3236)).mvalue_, &F->ok_3245);
 (void)rt_range(F->ok_3245, 0, 1);
(*(P117)rt_nil_check(F->z_3236)).hasmv_ = G_NV(F->ok_3245);
}
f_bind_650(F->up, F->z_3236, F->acc_3243);
f_define_473(F->up, F->z_3236, G_NV((*(P174)rt_nil_check(F->e_1288)).line_));
}
F->f_3232 = (*(P174)rt_nil_check(F->f_3232)).next_;
}
L_end_3246: ;
if (((*(P174)rt_nil_check(F->gd_3230)).c_ != NULL)) {
f_restore_generic_context_1275(F->up, (*(P174)rt_nil_check(F->gd_3230)).c_, G_NV((*(P174)rt_nil_check(F->e_1288)).line_));
}
if (((G_NV((*(P174)rt_nil_check(F->pat_3231)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check(F->pat_3231)).kind_) == ((rt_int)45LL)))) {
if ((G_NV((*(P174)rt_nil_check(F->pat_3231)).ival_) == ((rt_int)1LL))) {
if (((*(P174)rt_nil_check(F->gd_3230)).c_ == NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1288)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the body of generic ", 20), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1288)).tag_))), rt_g_lit(" is not given before this instantiation", 39)));
}
F->pat_3231 = (*(P174)rt_nil_check(F->gd_3230)).c_;
}
f_copy_node_1283(F->up, F->pat_3231, (*(P174)rt_nil_check(F->e_1288)).name_, &F->cn_3234);
f_build_subprogram_659(F->up, F->cn_3234, &F->y_3235);
f_define_473(F->up, F->y_3235, G_NV((*(P174)rt_nil_check(F->e_1288)).line_));
f_subprogram_body_706(F->up, F->cn_3234, F->y_3235);
} else if ((G_NV((*(P174)rt_nil_check(F->pat_3231)).kind_) == ((rt_int)48LL))) {
f_copy_node_1283(F->up, F->pat_3231, (*(P174)rt_nil_check(F->e_1288)).name_, &F->cn_3234);
f_package_spec_1072(F->up, F->cn_3234);
F->y_3235 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1288)).name_)));
if (((*(P174)rt_nil_check(F->gd_3230)).c_ != NULL)) {
f_copy_node_1283(F->up, (*(P174)rt_nil_check(F->gd_3230)).c_, (*(P174)rt_nil_check(F->e_1288)).name_, &F->cn_3234);
f_package_body_1077(F->up, F->cn_3234);
}
} else {
f_copy_node_1283(F->up, F->pat_3231, (*(P174)rt_nil_check(F->e_1288)).name_, &F->cn_3234);
f_task_spec_1176(F->up, F->cn_3234);
F->y_3235 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1288)).name_)));
if (((*(P174)rt_nil_check(F->gd_3230)).c_ == NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->e_1288)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the body of generic task ", 25), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1288)).tag_))), rt_g_lit(" is not given before this instantiation", 39)));
}
f_copy_node_1283(F->up, (*(P174)rt_nil_check(F->gd_3230)).c_, (*(P174)rt_nil_check(F->e_1288)).name_, &F->cn_3234);
f_task_body_1180(F->up, F->cn_3234);
}
f_close_scope_475(F->up);
f_define_473(F->up, F->y_3235, G_NV((*(P174)rt_nil_check(F->e_1288)).line_));
ret_:

  return;
}

static void f_predef_type_1294(struct f_greenc_1fr *up_, rt_gstr name_1290, P122 t_1291, rt_gstr lo_1292, rt_gstr hi_1293) {
  struct f_predef_type_1294fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1290 = cp_rt_gstr(name_1290);
F->t_1291 = t_1291;
F->lo_1292 = cp_rt_gstr(lo_1292);
F->hi_1293 = cp_rt_gstr(hi_1293);
F->y_3249 = NULL;
F->y_3249 = f_new_sym_478(F->up, ((rt_int)5LL), f_mk_236(F->up, F->name_1290));
(*(P117)rt_nil_check(F->y_3249)).t_ = F->t_1291;
if ((({ rt_gstr at3250 = F->lo_1292; at3250.hi >= at3250.lo ? at3250.hi - at3250.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
(*(P117)rt_nil_check(F->y_3249)).c_ = f_new_cons_481(F->up);
(*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_3249)).c_)).lo_ = f_mk_236(F->up, F->lo_1292);
(*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_3249)).c_)).hi_ = f_mk_236(F->up, F->hi_1293);
if (((({ rt_gstr at3251 = F->hi_1293; at3251.hi >= at3251.lo ? at3251.hi - at3251.lo + 1 : (rt_int)0; }) < ((rt_int)12LL)) && f_is_digit_243(F->up, G_NV(({ rt_gstr ix3255 = F->hi_1293; ix3255.p[rt_index(({ rt_gstr at3254 = F->hi_1293; at3254.lo; }), ix3255.lo, ix3255.hi) - ix3255.lo]; }))))) {
(*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_3249)).c_)).mlo_ = rt_int_of_str(rt_g_g2s(F->lo_1292));
(*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_3249)).c_)).mhi_ = rt_int_of_str(rt_g_g2s(F->hi_1293));
(*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_3249)).c_)).hasm_ = 1;
}
}
f_define_473(F->up, F->y_3249, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_const_1298(struct f_greenc_1fr *up_, rt_gstr name_1295, P122 t_1296, rt_gstr code_text_1297) {
  struct f_predef_const_1298fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1295 = cp_rt_gstr(name_1295);
F->t_1296 = t_1296;
F->code_text_1297 = cp_rt_gstr(code_text_1297);
F->y_3256 = NULL;
F->y_3256 = f_new_sym_478(F->up, ((rt_int)2LL), f_mk_236(F->up, F->name_1295));
(*(P117)rt_nil_check(F->y_3256)).t_ = F->t_1296;
(*(P117)rt_nil_check(F->y_3256)).ro_ = 1;
(*(P117)rt_nil_check(F->y_3256)).access_path_ = f_mk_236(F->up, F->code_text_1297);
f_define_473(F->up, F->y_3256, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_exc_1300(struct f_greenc_1fr *up_, rt_gstr name_1299) {
  struct f_predef_exc_1300fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1299 = cp_rt_gstr(name_1299);
F->y_3257 = NULL;
F->y_3257 = f_new_sym_478(F->up, ((rt_int)6LL), f_mk_236(F->up, F->name_1299));
(*(P117)rt_nil_check(F->y_3257)).cname_ = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_exc(", 7), f_q_254(F->up)), F->name_1299), f_q_254(F->up)), one_rt_gstr(41)));
f_define_473(F->up, F->y_3257, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_lit_1304(struct f_greenc_1fr *up_, rt_gstr name_1301, P122 t_1302, rt_int v_1303) {
  struct f_predef_lit_1304fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1301 = cp_rt_gstr(name_1301);
F->t_1302 = t_1302;
F->v_1303 = v_1303;
F->y_3258 = NULL;
F->y_3258 = f_new_sym_478(F->up, ((rt_int)7LL), f_mk_236(F->up, F->name_1301));
(*(P117)rt_nil_check(F->y_3258)).t_ = F->t_1302;
(*(P117)rt_nil_check(F->y_3258)).result_ = F->t_1302;
(*(P117)rt_nil_check(F->y_3258)).mvalue_ = F->v_1303;
(*(P117)rt_nil_check(F->y_3258)).hasmv_ = 1;
f_define_473(F->up, F->y_3258, ((rt_int)0LL));
ret_:

  return;
}

static void f_predefine_1305(struct f_greenc_1fr *up_) {
  struct f_predefine_1305fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_3259 = NULL;
F->control_3260 = cp_rt_gstr(cat_rt_gstr(rt_g_lit("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE ", 60), rt_g_lit("DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US ", 55)));
F->start_3261 = INT64_MIN;
F->start_3261 = ((rt_int)1LL);
F->code_no_3262 = INT64_MIN;
F->code_no_3262 = ((rt_int)0LL);
f_predef_type_1294(F->up, rt_g_lit("INTEGER", 7), F->up->ty_int_156, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1294(F->up, rt_g_lit("SHORT_INTEGER", 13), F->up->ty_short_167, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1294(F->up, rt_g_lit("LONG_INTEGER", 12), F->up->ty_long_168, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1294(F->up, rt_g_lit("NATURAL", 7), F->up->ty_int_156, rt_g_lit("1", 1), rt_g_lit("INT64_MAX", 9));
f_predef_type_1294(F->up, rt_g_lit("PRIORITY", 8), F->up->ty_int_156, rt_g_lit("0", 1), rt_g_lit("255", 3));
f_predef_type_1294(F->up, rt_g_lit("BOOLEAN", 7), F->up->ty_bool_157, rt_g_lit("0", 1), rt_g_lit("1", 1));
f_predef_type_1294(F->up, rt_g_lit("CHARACTER", 9), F->up->ty_char_159, rt_g_lit("0", 1), rt_g_lit("127", 3));
f_predef_type_1294(F->up, rt_g_lit("STRING", 6), F->up->ty_string_160, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1294(F->up, rt_g_lit("FLOAT", 5), F->up->ty_float_158, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1294(F->up, rt_g_lit("SHORT_FLOAT", 11), F->up->ty_sfloat_169, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1294(F->up, rt_g_lit("LONG_FLOAT", 10), F->up->ty_lfloat_170, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1294(F->up, rt_g_lit("TIME", 4), F->up->ty_time_171, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_lit_1304(F->up, rt_g_lit("FALSE", 5), F->up->ty_bool_157, ((rt_int)0LL));
f_predef_lit_1304(F->up, rt_g_lit("TRUE", 4), F->up->ty_bool_157, ((rt_int)1LL));
{ rt_int lo3266 = ((rt_int)1LL), hi3267 = ({ rt_gstr at3264 = F->control_3260; at3264.hi >= at3264.lo ? at3264.hi - at3264.lo + 1 : (rt_int)0; });
for (rt_int it3268 = lo3266; it3268 <= hi3267; it3268++) {
F->i_3265 = it3268;
if ((G_NV(({ rt_gstr ix3269 = F->control_3260; ix3269.p[rt_index(F->i_3265, ix3269.lo, ix3269.hi) - ix3269.lo]; })) == 32)) {
f_predef_const_1298(F->up, ({ rt_gstr sl3271 = F->control_3260; rt_int l_ = G_NV(F->start_3261), h_ = rt_sub(F->i_3265, ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl3271.lo, sl3271.hi); rt_index(h_, sl3271.lo, sl3271.hi); } sl3271.p += l_ - sl3271.lo; sl3271.lo = l_; sl3271.hi = h_; sl3271; }), F->up->ty_char_159, rt_g_s2g(rt_str_of_int(G_NV(F->code_no_3262))));
F->code_no_3262 = rt_add(G_NV(F->code_no_3262), ((rt_int)1LL));
F->start_3261 = rt_add(F->i_3265, ((rt_int)1LL));
}
}
}
L_end_3263: ;
f_predef_const_1298(F->up, rt_g_lit("DEL", 3), F->up->ty_char_159, rt_g_lit("127", 3));
f_predef_const_1298(F->up, rt_g_lit("EXCLAM", 6), F->up->ty_char_159, rt_g_lit("33", 2));
f_predef_const_1298(F->up, rt_g_lit("DOLLAR", 6), F->up->ty_char_159, rt_g_lit("36", 2));
f_predef_const_1298(F->up, rt_g_lit("QUESTION", 8), F->up->ty_char_159, rt_g_lit("63", 2));
f_predef_const_1298(F->up, rt_g_lit("AT_SIGN", 7), F->up->ty_char_159, rt_g_lit("64", 2));
f_predef_const_1298(F->up, rt_g_lit("L_BRACKET", 9), F->up->ty_char_159, rt_g_lit("91", 2));
f_predef_const_1298(F->up, rt_g_lit("BACK_SLASH", 10), F->up->ty_char_159, rt_g_lit("92", 2));
f_predef_const_1298(F->up, rt_g_lit("R_BRACKET", 9), F->up->ty_char_159, rt_g_lit("93", 2));
f_predef_const_1298(F->up, rt_g_lit("CIRCUMFLEX", 10), F->up->ty_char_159, rt_g_lit("94", 2));
f_predef_const_1298(F->up, rt_g_lit("GRAVE", 5), F->up->ty_char_159, rt_g_lit("96", 2));
f_predef_const_1298(F->up, rt_g_lit("L_BRACE", 7), F->up->ty_char_159, rt_g_lit("123", 3));
f_predef_const_1298(F->up, rt_g_lit("R_BRACE", 7), F->up->ty_char_159, rt_g_lit("125", 3));
f_predef_const_1298(F->up, rt_g_lit("TILDE", 5), F->up->ty_char_159, rt_g_lit("126", 3));
{ rt_int lo3274 = ((rt_int)0LL), hi3275 = ((rt_int)25LL);
for (rt_int it3276 = lo3274; it3276 <= hi3275; it3276++) {
F->i_3273 = it3276;
f_predef_const_1298(F->up, cat_rt_gstr(rt_g_lit("LC_", 3), one_rt_gstr(rt_range((rt_add(((rt_int)66LL), F->i_3273) - 1), 0, 127))), F->up->ty_char_159, rt_g_s2g(rt_str_of_int(rt_add(((rt_int)97LL), F->i_3273))));
}
}
L_end_3272: ;
f_predef_const_1298(F->up, rt_g_lit("NEWLINE", 7), F->up->ty_string_160, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_lit(", 9), f_q_254(F->up)), rt_g_lit("\\n", 2)), f_q_254(F->up)), rt_g_lit(", 1)", 4)));
f_predef_const_1298(F->up, rt_g_lit("SECONDS", 7), F->up->ty_time_171, rt_g_lit("((double)RT_SECONDS)", 20));
f_predef_exc_1300(F->up, rt_g_lit("ACCESS_ERROR", 12));
f_predef_exc_1300(F->up, rt_g_lit("ASSERT_ERROR", 12));
f_predef_exc_1300(F->up, rt_g_lit("DISCRIMINANT_ERROR", 18));
f_predef_exc_1300(F->up, rt_g_lit("DIVIDE_ERROR", 12));
f_predef_exc_1300(F->up, rt_g_lit("FAILURE", 7));
f_predef_exc_1300(F->up, rt_g_lit("INDEX_ERROR", 11));
f_predef_exc_1300(F->up, rt_g_lit("INITIATE_ERROR", 14));
f_predef_exc_1300(F->up, rt_g_lit("NO_VALUE_ERROR", 14));
f_predef_exc_1300(F->up, rt_g_lit("OVERFLOW", 8));
f_predef_exc_1300(F->up, rt_g_lit("OVERLAP_ERROR", 13));
f_predef_exc_1300(F->up, rt_g_lit("RANGE_ERROR", 11));
f_predef_exc_1300(F->up, rt_g_lit("SELECT_ERROR", 12));
f_predef_exc_1300(F->up, rt_g_lit("STORAGE_OVERFLOW", 16));
f_predef_exc_1300(F->up, rt_g_lit("TASKING_ERROR", 13));
f_predef_exc_1300(F->up, rt_g_lit("UNDERFLOW", 9));
f_predef_exc_1300(F->up, rt_g_lit("END_OF_FILE", 11));
F->y_3259 = f_new_sym_478(F->up, ((rt_int)8LL), f_mk_236(F->up, rt_g_lit("TEXT_IO", 7)));
f_define_473(F->up, F->y_3259, ((rt_int)0LL));
(*(P117)rt_nil_check(F->y_3259)).depth_ = ((rt_int)1LL);
ret_:

  return;
}

static void f_lib_open_1308(struct f_greenc_1fr *up_, rt_gstr key_1306, rt_int *length_1307) {
  struct f_lib_open_1308fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->key_1306 = cp_rt_gstr(key_1306);
F->length_1307 = length_1307;
rt_g_lib_open(rt_g_g2s(F->key_1306), F->length_1307);
ret_:

  return;
}

static void f_lib_store_1311(struct f_greenc_1fr *up_, rt_gstr key_1309, rt_gstr contents_1310) {
  struct f_lib_store_1311fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->key_1309 = cp_rt_gstr(key_1309);
F->contents_1310 = cp_rt_gstr(contents_1310);
rt_g_lib_store(rt_g_g2s(F->key_1309), rt_g_g2s(F->contents_1310));
ret_:

  return;
}

static void f_unit_key_1314(struct f_greenc_1fr *up_, P174 u_1312, P140 *r_1313) {
  struct f_unit_key_1314fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->u_1312 = u_1312;
F->r_1313 = r_1313;
F->k_3277 = INT64_MIN;
F->k_3277 = ((rt_int)2LL);
if ((((*(P174)rt_nil_check(F->u_1312)).formal_ != NULL) && ((G_NV(({ rt_gstr ix3278 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->u_1312)).formal_)); ix3278.p[rt_index(((rt_int)1LL), ix3278.lo, ix3278.hi) - ix3278.lo]; })) == 33) || (G_NV(({ rt_gstr ix3279 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->u_1312)).formal_)); ix3279.p[rt_index(((rt_int)1LL), ix3279.lo, ix3279.hi) - ix3279.lo]; })) == 35)))) {
while (((G_NV(F->k_3277) < ({ rt_gstr at3281 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->u_1312)).formal_)); at3281.hi >= at3281.lo ? at3281.hi - at3281.lo + 1 : (rt_int)0; })) && (G_NV(({ rt_gstr ix3282 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->u_1312)).formal_)); ix3282.p[rt_index(rt_add(G_NV(F->k_3277), ((rt_int)1LL)), ix3282.lo, ix3282.hi) - ix3282.lo]; })) != 44))) {
F->k_3277 = rt_add(G_NV(F->k_3277), ((rt_int)1LL));
}
L_end_3280: ;
(*F->r_1313) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(({ rt_gstr sl3284 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->u_1312)).formal_)); rt_int l_ = ((rt_int)3LL), h_ = G_NV(F->k_3277); if (l_ <= h_) { rt_index(l_, sl3284.lo, sl3284.hi); rt_index(h_, sl3284.lo, sl3284.hi); } sl3284.p += l_ - sl3284.lo; sl3284.lo = l_; sl3284.hi = h_; sl3284; }), one_rt_gstr(46)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->u_1312)).name_))), rt_g_lit(".sub", 4)));
} else if ((((((G_NV((*(P174)rt_nil_check(F->u_1312)).kind_) == ((rt_int)48LL)) || (G_NV((*(P174)rt_nil_check(F->u_1312)).kind_) == ((rt_int)50LL))) || (G_NV((*(P174)rt_nil_check(F->u_1312)).kind_) == ((rt_int)54LL))) || (G_NV((*(P174)rt_nil_check(F->u_1312)).kind_) == ((rt_int)53LL))) || (((G_NV((*(P174)rt_nil_check(F->u_1312)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check(F->u_1312)).kind_) == ((rt_int)45LL))) && (G_NV((*(P174)rt_nil_check(F->u_1312)).ival_) == ((rt_int)1LL))))) {
(*F->r_1313) = f_mk_236(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->u_1312)).name_)), rt_g_lit(".spec", 5)));
} else {
(*F->r_1313) = f_mk_236(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->u_1312)).name_)), rt_g_lit(".body", 5)));
}
ret_:

  return;
}

static void f_lib_enabled_1316(struct f_greenc_1fr *up_, int *yes_1315) {
  struct f_lib_enabled_1316fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->yes_1315 = yes_1315;
rt_g_lib_enabled(F->yes_1315);
ret_:

  return;
}

static void f_store_units_1317(struct f_greenc_1fr *up_) {
  struct f_store_units_1317fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_3285 = NULL;
F->s_3285 = F->up->spans_206;
F->k_3286 = NULL;
F->yes_3287 = INT_MIN;
f_lib_enabled_1316(F->up, &F->yes_3287);
 (void)rt_range(F->yes_3287, 0, 1);
if ((!G_NV(F->yes_3287))) {
goto ret_;
}
while ((F->s_3285 != NULL)) {
f_unit_key_1314(F->up, (*(P204)rt_nil_check(F->s_3285)).u_, &F->k_3286);
f_store_span_1320(F->up, F->s_3285, (*(P140)rt_nil_check(F->k_3286)));
F->s_3285 = (*(P204)rt_nil_check(F->s_3285)).next_;
}
L_end_3288: ;
ret_:

  return;
}

static void f_store_span_1320(struct f_greenc_1fr *up_, P204 s_1318, rt_gstr key_1319) {
  struct f_store_span_1320fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1318 = s_1318;
F->key_1319 = cp_rt_gstr(key_1319);
F->n_3289 = INT64_MIN;
F->n_3289 = ((rt_int)0LL);
F->head_3290 = NULL;
F->head_3290 = f_mk_236(F->up, rt_g_lit("", 0));
if ((({ rt_gstr at3291 = (*(P140)rt_nil_check((*(P204)rt_nil_check(F->s_1318)).env_)); at3291.hi >= at3291.lo ? at3291.hi - at3291.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->head_3290 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ENVIRONMENT(", 19), ({ rt_gstr sl3295 = (*(P140)rt_nil_check((*(P204)rt_nil_check(F->s_1318)).env_)); rt_int l_ = ((rt_int)1LL), h_ = rt_sub(({ rt_gstr at3294 = (*(P140)rt_nil_check((*(P204)rt_nil_check(F->s_1318)).env_)); at3294.hi >= at3294.lo ? at3294.hi - at3294.lo + 1 : (rt_int)0; }), ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl3295.lo, sl3295.hi); rt_index(h_, sl3295.lo, sl3295.hi); } sl3295.p += l_ - sl3295.lo; sl3295.lo = l_; sl3295.hi = h_; sl3295; })), rt_g_lit(");", 2)), one_rt_gstr(10)));
}
F->n_3289 = ({ rt_gstr at3296 = (*(P140)rt_nil_check(F->head_3290)); at3296.hi >= at3296.lo ? at3296.hi - at3296.lo + 1 : (rt_int)0; });
{ rt_int lo3299 = G_NV((*(P204)rt_nil_check(F->s_1318)).first_), hi3300 = G_NV((*(P204)rt_nil_check(F->s_1318)).last_);
for (rt_int it3301 = lo3299; it3301 <= hi3300; it3301++) {
F->l_3298 = it3301;
F->n_3289 = rt_add(rt_add(G_NV(F->n_3289), ({ rt_gstr at3303 = (*(P140)rt_nil_check(({ A202 ix3302 = F->up->src_lines_203; ix3302.p[rt_index(F->l_3298, ix3302.lo, ix3302.hi) - ix3302.lo]; }))); at3303.hi >= at3303.lo ? at3303.hi - at3303.lo + 1 : (rt_int)0; })), ((rt_int)1LL));
}
}
L_end_3297: ;
{
F->t_3305.lo = ((rt_int)1LL); F->t_3305.hi = G_NV(F->n_3289);
F->t_3305.lo2 = 1; F->t_3305.hi2 = 1;
F->t_3305.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->t_3305));
memset(F->t_3305.p, 0xFF, (size_t)G_CNT(F->t_3305));
F->k_3307 = INT64_MIN;
F->k_3307 = ({ rt_gstr at3308 = (*(P140)rt_nil_check(F->head_3290)); at3308.hi >= at3308.lo ? at3308.hi - at3308.lo + 1 : (rt_int)0; });
{ rt_gstr sl_ = ({ rt_gstr sl3309 = F->t_3305; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->k_3307); if (l_ <= h_) { rt_index(l_, sl3309.lo, sl3309.hi); rt_index(h_, sl3309.lo, sl3309.hi); } sl3309.p += l_ - sl3309.lo; sl3309.lo = l_; sl3309.hi = h_; sl3309; }); as_rt_gstr(&sl_, (*(P140)rt_nil_check(F->head_3290))); }
{ rt_int lo3312 = G_NV((*(P204)rt_nil_check(F->s_1318)).first_), hi3313 = G_NV((*(P204)rt_nil_check(F->s_1318)).last_);
for (rt_int it3314 = lo3312; it3314 <= hi3313; it3314++) {
F->l_3311 = it3314;
{ rt_gstr sl_ = ({ rt_gstr sl3317 = F->t_3305; rt_int l_ = rt_add(G_NV(F->k_3307), ((rt_int)1LL)), h_ = rt_add(G_NV(F->k_3307), ({ rt_gstr at3316 = (*(P140)rt_nil_check(({ A202 ix3315 = F->up->src_lines_203; ix3315.p[rt_index(F->l_3311, ix3315.lo, ix3315.hi) - ix3315.lo]; }))); at3316.hi >= at3316.lo ? at3316.hi - at3316.lo + 1 : (rt_int)0; })); if (l_ <= h_) { rt_index(l_, sl3317.lo, sl3317.hi); rt_index(h_, sl3317.lo, sl3317.hi); } sl3317.p += l_ - sl3317.lo; sl3317.lo = l_; sl3317.hi = h_; sl3317; }); as_rt_gstr(&sl_, (*(P140)rt_nil_check(({ A202 ix3318 = F->up->src_lines_203; ix3318.p[rt_index(F->l_3311, ix3318.lo, ix3318.hi) - ix3318.lo]; })))); }
F->k_3307 = rt_add(rt_add(G_NV(F->k_3307), ({ rt_gstr at3320 = (*(P140)rt_nil_check(({ A202 ix3319 = F->up->src_lines_203; ix3319.p[rt_index(F->l_3311, ix3319.lo, ix3319.hi) - ix3319.lo]; }))); at3320.hi >= at3320.lo ? at3320.hi - at3320.lo + 1 : (rt_int)0; })), ((rt_int)1LL));
(*({ rt_gstr *ix3321 = &(F->t_3305); &ix3321->p[rt_index(G_NV(F->k_3307), ix3321->lo, ix3321->hi) - ix3321->lo]; })) = 10;
}
}
L_end_3310: ;
f_lib_store_1311(F->up, F->key_1319, F->t_3305);

}
L_end_3304: ;
ret_:

  return;
}

static void f_lib_load_1323(struct f_greenc_1fr *up_, rt_gstr key_1321, P174 *r_1322) {
  struct f_lib_load_1323fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->key_1321 = cp_rt_gstr(key_1321);
F->r_1322 = r_1322;
F->n_3322 = INT64_MIN;
F->saved_line_3323 = INT64_MIN;
F->saved_line_3323 = G_NV(F->up->src_line_115);
F->saved_pos_3324 = INT64_MIN;
F->saved_pos_3324 = G_NV(F->up->tpos_114);
F->from_3325 = INT64_MIN;
(*F->r_1322) = NULL;
f_lib_open_1308(F->up, F->key_1321, &F->n_3322);
if ((G_NV(F->n_3322) < ((rt_int)0LL))) {
goto ret_;
}
F->from_3325 = rt_add(G_NV(F->up->ntoks_113), ((rt_int)1LL));
f_include_text_302(F->up, G_NV(F->n_3322));
f_add_token_274(F->up, ((rt_int)0LL), rt_g_lit("<end>", 5), ((rt_int)0LL));
F->up->tpos_114 = G_NV(F->from_3325);
f_compilation_423(F->up, &(*F->r_1322));
F->up->tpos_114 = G_NV(F->saved_pos_3324);
F->up->src_line_115 = G_NV(F->saved_line_3323);
ret_:

  return;
}

static int f_defined_unit_1326(struct f_greenc_1fr *up_, rt_gstr name_1324, P174 before_1325) {
  struct f_defined_unit_1326fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1324 = cp_rt_gstr(name_1324);
F->before_1325 = before_1325;
F->u_3326 = NULL;
F->u_3326 = F->up->units_219;
if (f_listed_428(F->up, F->up->loaded_208, F->name_1324)) {
F->result_ = 1;
goto ret_;
}
while (((F->u_3326 != NULL) && (F->u_3326 != F->before_1325))) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->u_3326)).name_)), F->name_1324) && (G_NV(({ rt_gstr ix3328 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->u_3326)).formal_)); ix3328.p[rt_index(((rt_int)1LL), ix3328.lo, ix3328.hi) - ix3328.lo]; })) != 33))) {
F->result_ = 1;
goto ret_;
}
F->u_3326 = (*(P174)rt_nil_check(F->u_3326)).next_;
}
L_end_3327: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_library_units_1327(struct f_greenc_1fr *up_) {
  struct f_library_units_1327fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_3329 = NULL;
F->prev_3330 = NULL;
F->l_3331 = NULL;
F->ltail_3332 = NULL;
F->i_3333 = INT64_MIN;
F->j_3334 = INT64_MIN;
F->n_3335 = NULL;
F->f_3336 = NULL;
F->changed_3337 = INT_MIN;
F->changed_3337 = 1;
while (G_NV(F->changed_3337)) {
F->changed_3337 = 0;
F->p_3329 = F->up->units_219;
F->prev_3330 = NULL;
while (((F->p_3329 != NULL) && (!G_NV(F->changed_3337)))) {
F->f_3336 = (*(P174)rt_nil_check(F->p_3329)).formal_;
F->i_3333 = ((rt_int)1LL);
if (((G_NV(({ rt_gstr ix3340 = (*(P140)rt_nil_check(F->f_3336)); ix3340.p[rt_index(((rt_int)1LL), ix3340.lo, ix3340.hi) - ix3340.lo]; })) == 33) || (G_NV(({ rt_gstr ix3341 = (*(P140)rt_nil_check(F->f_3336)); ix3341.p[rt_index(((rt_int)1LL), ix3341.lo, ix3341.hi) - ix3341.lo]; })) == 35))) {
F->i_3333 = ((rt_int)2LL);
}
while (((G_NV(F->i_3333) < ({ rt_gstr at3343 = (*(P140)rt_nil_check(F->f_3336)); at3343.hi >= at3343.lo ? at3343.hi - at3343.lo + 1 : (rt_int)0; })) && (!G_NV(F->changed_3337)))) {
F->j_3334 = rt_add(G_NV(F->i_3333), ((rt_int)1LL));
while (((G_NV(F->j_3334) <= ({ rt_gstr at3345 = (*(P140)rt_nil_check(F->f_3336)); at3345.hi >= at3345.lo ? at3345.hi - at3345.lo + 1 : (rt_int)0; })) && (G_NV(({ rt_gstr ix3346 = (*(P140)rt_nil_check(F->f_3336)); ix3346.p[rt_index(G_NV(F->j_3334), ix3346.lo, ix3346.hi) - ix3346.lo]; })) != 44))) {
F->j_3334 = rt_add(G_NV(F->j_3334), ((rt_int)1LL));
}
L_end_3344: ;
if ((G_NV(F->j_3334) > rt_add(G_NV(F->i_3333), ((rt_int)1LL)))) {
F->n_3335 = f_mk_236(F->up, ({ rt_gstr sl3348 = (*(P140)rt_nil_check(F->f_3336)); rt_int l_ = rt_add(G_NV(F->i_3333), ((rt_int)1LL)), h_ = rt_sub(G_NV(F->j_3334), ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl3348.lo, sl3348.hi); rt_index(h_, sl3348.lo, sl3348.hi); } sl3348.p += l_ - sl3348.lo; sl3348.lo = l_; sl3348.hi = h_; sl3348; }));
if (((f_lookup_432(F->up, (*(P140)rt_nil_check(F->n_3335))) == NULL) && (!f_defined_unit_1326(F->up, (*(P140)rt_nil_check(F->n_3335)), F->p_3329)))) {
f_load_unit_1330(F->up, (*(P140)rt_nil_check(F->n_3335)), &F->l_3331);
if ((F->l_3331 == NULL)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->p_3329)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->n_3335)), rt_g_lit(", named by ", 11)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3329)).name_))), rt_g_lit(", is neither compiled before it nor in ", 39)), rt_g_lit("the program library (RM79 10.3)", 31)));
}
F->up->loaded_208 = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->up->loaded_208)), (*(P140)rt_nil_check(F->n_3335))), one_rt_gstr(44)));
F->ltail_3332 = F->l_3331;
while (((*(P174)rt_nil_check(F->ltail_3332)).next_ != NULL)) {
F->ltail_3332 = (*(P174)rt_nil_check(F->ltail_3332)).next_;
}
L_end_3349: ;
(*(P174)rt_nil_check(F->ltail_3332)).next_ = F->p_3329;
if ((F->prev_3330 == NULL)) {
F->up->units_219 = F->l_3331;
} else {
(*(P174)rt_nil_check(F->prev_3330)).next_ = F->l_3331;
}
F->changed_3337 = 1;
}
}
F->i_3333 = G_NV(F->j_3334);
}
L_end_3342: ;
F->prev_3330 = F->p_3329;
F->p_3329 = (*(P174)rt_nil_check(F->p_3329)).next_;
}
L_end_3339: ;
}
L_end_3338: ;
ret_:

  return;
}

static void f_load_unit_1330(struct f_greenc_1fr *up_, rt_gstr name_1328, P174 *r_1329) {
  struct f_load_unit_1330fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1328 = cp_rt_gstr(name_1328);
F->r_1329 = r_1329;
F->s_3350 = NULL;
F->b_3351 = NULL;
F->t_3352 = NULL;
f_lib_load_1323(F->up, cat_rt_gstr(F->name_1328, rt_g_lit(".spec", 5)), &F->s_3350);
f_lib_load_1323(F->up, cat_rt_gstr(F->name_1328, rt_g_lit(".body", 5)), &F->b_3351);
if ((F->s_3350 == NULL)) {
(*F->r_1329) = F->b_3351;
goto ret_;
}
F->t_3352 = F->s_3350;
while (((*(P174)rt_nil_check(F->t_3352)).next_ != NULL)) {
F->t_3352 = (*(P174)rt_nil_check(F->t_3352)).next_;
}
L_end_3353: ;
(*(P174)rt_nil_check(F->t_3352)).next_ = F->b_3351;
(*F->r_1329) = F->s_3350;
ret_:

  return;
}

static void f_prelude_1331(struct f_greenc_1fr *up_) {
  struct f_prelude_1331fr *F = rt_alloc(sizeof *F);
F->up = up_;
f_lex_line_285(F->up, rt_g_lit("generic task SIGNAL is entry SEND; entry WAIT; end SIGNAL;", 58));
f_lex_line_285(F->up, rt_g_lit("task body SIGNAL is RECEIVED : BOOLEAN := FALSE; begin loop select accept SEND;", 79));
f_lex_line_285(F->up, rt_g_lit("RECEIVED := TRUE; or when RECEIVED => accept WAIT; RECEIVED := FALSE; end select;", 81));
f_lex_line_285(F->up, rt_g_lit("end loop; end SIGNAL;", 21));
f_lex_line_285(F->up, rt_g_lit("generic task SEMAPHORE is entry P; entry V; end SEMAPHORE;", 58));
f_lex_line_285(F->up, rt_g_lit("task body SEMAPHORE is begin loop accept P; accept V; end loop; end SEMAPHORE;", 78));
ret_:

  return;
}

static void f_used_units_1334(struct f_greenc_1fr *up_, P174 u_1332, P140 *r_1333) {
  struct f_used_units_1334fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->u_1332 = u_1332;
F->r_1333 = r_1333;
F->p_3354 = NULL;
F->p_3354 = F->u_1332;
F->main_3355 = NULL;
F->changed_3356 = INT_MIN;
F->changed_3356 = 1;
while ((F->p_3354 != NULL)) {
if ((G_NV(({ rt_gstr ix3358 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3354)).formal_)); ix3358.p[rt_index(((rt_int)1LL), ix3358.lo, ix3358.hi) - ix3358.lo]; })) != 33)) {
F->main_3355 = F->p_3354;
}
F->p_3354 = (*(P174)rt_nil_check(F->p_3354)).next_;
}
L_end_3357: ;
(*F->r_1333) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(44), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->main_3355)).name_))), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->main_3355)).formal_))));
F->p_3354 = F->u_1332;
while ((F->p_3354 != NULL)) {
if ((G_NV(({ rt_gstr ix3360 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3354)).formal_)); ix3360.p[rt_index(((rt_int)1LL), ix3360.lo, ix3360.hi) - ix3360.lo]; })) == 33)) {
(*F->r_1333) = f_mk_236(F->up, cat_rt_gstr((*(P140)rt_nil_check((*F->r_1333))), ({ rt_gstr sl3364 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3354)).formal_)); rt_int l_ = ((rt_int)2LL), h_ = ({ rt_gstr at3363 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3354)).formal_)); at3363.hi >= at3363.lo ? at3363.hi - at3363.lo + 1 : (rt_int)0; }); if (l_ <= h_) { rt_index(l_, sl3364.lo, sl3364.hi); rt_index(h_, sl3364.lo, sl3364.hi); } sl3364.p += l_ - sl3364.lo; sl3364.lo = l_; sl3364.hi = h_; sl3364; })));
}
F->p_3354 = (*(P174)rt_nil_check(F->p_3354)).next_;
}
L_end_3359: ;
while (G_NV(F->changed_3356)) {
F->changed_3356 = 0;
F->p_3354 = F->u_1332;
while ((F->p_3354 != NULL)) {
if (((G_NV(({ rt_gstr ix3367 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3354)).formal_)); ix3367.p[rt_index(((rt_int)1LL), ix3367.lo, ix3367.hi) - ix3367.lo]; })) != 33) && f_listed_428(F->up, (*F->r_1333), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3354)).name_))))) {
f_add_names_1338(F->up, &(*F->r_1333), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3354)).formal_)), &F->changed_3356);
 (void)rt_range(F->changed_3356, 0, 1);
}
F->p_3354 = (*(P174)rt_nil_check(F->p_3354)).next_;
}
L_end_3366: ;
}
L_end_3365: ;
ret_:

  return;
}

static void f_add_names_1338(struct f_greenc_1fr *up_, P140 *r_1335, rt_gstr list_1336, int *changed_1337) {
  struct f_add_names_1338fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_1335 = r_1335;
F->list_1336 = cp_rt_gstr(list_1336);
F->changed_1337 = changed_1337;
F->i_3368 = INT64_MIN;
F->i_3368 = ({ rt_gstr at3369 = F->list_1336; at3369.lo; });
F->j_3370 = INT64_MIN;
F->j_3370 = ({ rt_gstr at3371 = F->list_1336; at3371.lo; });
while ((G_NV(F->i_3368) < ({ rt_gstr at3373 = F->list_1336; at3373.hi; }))) {
F->j_3370 = rt_add(G_NV(F->i_3368), ((rt_int)1LL));
while (((G_NV(F->j_3370) <= ({ rt_gstr at3375 = F->list_1336; at3375.hi; })) && (G_NV(({ rt_gstr ix3376 = F->list_1336; ix3376.p[rt_index(G_NV(F->j_3370), ix3376.lo, ix3376.hi) - ix3376.lo]; })) != 44))) {
F->j_3370 = rt_add(G_NV(F->j_3370), ((rt_int)1LL));
}
L_end_3374: ;
if ((G_NV(F->j_3370) > rt_add(G_NV(F->i_3368), ((rt_int)1LL)))) {
if ((!f_listed_428(F->up, (*F->r_1335), ({ rt_gstr sl3378 = F->list_1336; rt_int l_ = rt_add(G_NV(F->i_3368), ((rt_int)1LL)), h_ = rt_sub(G_NV(F->j_3370), ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl3378.lo, sl3378.hi); rt_index(h_, sl3378.lo, sl3378.hi); } sl3378.p += l_ - sl3378.lo; sl3378.lo = l_; sl3378.hi = h_; sl3378; })))) {
(*F->r_1335) = f_mk_236(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->r_1335))), ({ rt_gstr sl3380 = F->list_1336; rt_int l_ = rt_add(G_NV(F->i_3368), ((rt_int)1LL)), h_ = rt_sub(G_NV(F->j_3370), ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl3380.lo, sl3380.hi); rt_index(h_, sl3380.lo, sl3380.hi); } sl3380.p += l_ - sl3380.lo; sl3380.lo = l_; sl3380.hi = h_; sl3380; })), one_rt_gstr(44)));
(*F->changed_1337) = 1;
}
}
F->i_3368 = G_NV(F->j_3370);
}
L_end_3372: ;
ret_:

  return;
}

static void f_translate_1340(struct f_greenc_1fr *up_, P174 u_1339) {
  struct f_translate_1340fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->u_1339 = u_1339;
F->p_3381 = NULL;
F->p_3381 = F->up->prelude_units_220;
F->used_3382 = NULL;
F->y_3383 = NULL;
while ((F->p_3381 != NULL)) {
f_decl_element_663(F->up, F->p_3381);
F->p_3381 = (*(P174)rt_nil_check(F->p_3381)).next_;
}
L_end_3384: ;
f_used_units_1334(F->up, F->u_1339, &F->used_3382);
F->p_3381 = F->u_1339;
f_open_scope_474(F->up);
while ((F->p_3381 != NULL)) {
F->up->barriers_200 = NULL;
F->up->cur_comp_unit_209 = (*(P174)rt_nil_check(F->p_3381)).name_;
F->y_3383 = f_lookup_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3381)).name_)));
if ((((((G_NV((*(P174)rt_nil_check(F->p_3381)).kind_) == ((rt_int)49LL)) || (G_NV((*(P174)rt_nil_check(F->p_3381)).kind_) == ((rt_int)51LL))) || (G_NV((*(P174)rt_nil_check(F->p_3381)).kind_) == ((rt_int)44LL))) || (G_NV((*(P174)rt_nil_check(F->p_3381)).kind_) == ((rt_int)45LL))) && (F->y_3383 != NULL))) {
if ((((*(P117)rt_nil_check(F->y_3383)).decl_ != NULL) && ((*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_3383)).decl_)).formal_ != NULL))) {
(*(P174)rt_nil_check(F->p_3381)).formal_ = f_mk_236(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3381)).formal_)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_3383)).decl_)).formal_))));
}
}
f_push_barrier_684(F->up, F->p_3381, ((rt_int)1LL));
if (((G_NV(({ rt_gstr ix3386 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3381)).formal_)); ix3386.p[rt_index(((rt_int)1LL), ix3386.lo, ix3386.hi) - ix3386.lo]; })) == 33) || (G_NV(({ rt_gstr ix3387 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3381)).formal_)); ix3387.p[rt_index(((rt_int)1LL), ix3387.lo, ix3387.hi) - ix3387.lo]; })) == 35))) {
} else if (f_last_unit_1342(F->up, F->p_3381)) {
if (((G_NV((*(P174)rt_nil_check(F->p_3381)).kind_) != ((rt_int)44LL)) || ((*(P174)rt_nil_check(F->p_3381)).a_ != NULL))) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->p_3381)).line_), rt_g_lit("the main program is a procedure without parameters", 50));
}
f_build_subprogram_659(F->up, F->p_3381, &F->y_3383);
f_define_473(F->up, F->y_3383, G_NV((*(P174)rt_nil_check(F->p_3381)).line_));
f_subprogram_body_706(F->up, F->p_3381, F->y_3383);
F->up->main_name_230 = (*(P117)rt_nil_check(F->y_3383)).cname_;
} else if (f_listed_428(F->up, F->used_3382, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3381)).name_)))) {
f_decl_element_663(F->up, F->p_3381);
} else {
F->up->code_136 = f_new_buffer_258(F->up);
f_decl_element_663(F->up, F->p_3381);
F->up->code_136 = F->up->out_init_134;
}
F->p_3381 = (*(P174)rt_nil_check(F->p_3381)).next_;
}
L_end_3385: ;
F->p_3381 = F->u_1339;
while ((F->p_3381 != NULL)) {
if ((G_NV(({ rt_gstr ix3389 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3381)).formal_)); ix3389.p[rt_index(((rt_int)1LL), ix3389.lo, ix3389.hi) - ix3389.lo]; })) == 33)) {
f_fail_257(F->up, G_NV((*(P174)rt_nil_check(F->p_3381)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("subunit ", 8), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3381)).name_))), rt_g_lit(" has no body stub in an enclosing unit (RM79 10.2)", 50)));
}
F->p_3381 = (*(P174)rt_nil_check(F->p_3381)).next_;
}
L_end_3388: ;
ret_:

  return;
}

static int f_last_unit_1342(struct f_greenc_1fr *up_, P174 p_1341) {
  struct f_last_unit_1342fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1341 = p_1341;
F->q_3390 = NULL;
F->q_3390 = (*(P174)rt_nil_check(F->p_1341)).next_;
while ((F->q_3390 != NULL)) {
if ((G_NV(({ rt_gstr ix3392 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->q_3390)).formal_)); ix3392.p[rt_index(((rt_int)1LL), ix3392.lo, ix3392.hi) - ix3392.lo]; })) != 33)) {
F->result_ = 0;
goto ret_;
}
F->q_3390 = (*(P174)rt_nil_check(F->q_3390)).next_;
}
L_end_3391: ;
F->result_ = 1;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_print_program_1343(struct f_greenc_1fr *up_) {
  struct f_print_program_1343fr *F = rt_alloc(sizeof *F);
F->up = up_;
f_emit_helpers_641(F->up);
rt_g_put(rt_g_g2s(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("#include ", 9), f_q_254(F->up)), rt_g_lit("paleo.h", 7)), f_q_254(F->up))));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
rt_g_put(rt_g_g2s(rt_g_lit("#include <math.h>", 17)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
f_print_buffer_265(F->up, F->up->out_types_128);
f_print_buffer_265(F->up, F->up->out_frames_129);
f_print_buffer_265(F->up, F->up->out_helpers_130);
f_print_buffer_265(F->up, F->up->out_protos_131);
f_print_buffer_265(F->up, F->up->out_globals_132);
f_print_buffer_265(F->up, F->up->out_funcs_133);
rt_g_put(rt_g_g2s(rt_g_lit("int main(int argc, char **argv) {", 33)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
rt_g_put(rt_g_g2s(rt_g_lit("  rt_init(argc, argv);", 22)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
rt_g_put(rt_g_g2s(rt_g_lit("  rt_set_lang(1);", 17)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
f_print_buffer_265(F->up, F->up->out_excs_135);
f_print_buffer_265(F->up, F->up->out_init_134);
rt_g_put(rt_g_g2s(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check(F->up->main_name_230))), rt_g_lit("();", 3))));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
f_print_buffer_265(F->up, F->up->out_awaits_217);
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
F->cur_task_210 = NULL;
F->accept_depth_211 = INT64_MIN;
F->accept_depth_211 = ((rt_int)0LL);
F->famarg_done_212 = INT_MIN;
F->famarg_done_212 = 0;
F->fam_ix_213 = NULL;
F->call_task_ix_214 = NULL;
F->saw_interface_215 = INT_MIN;
F->saw_interface_215 = 0;
F->defer_entry_structs_216 = INT_MIN;
F->defer_entry_structs_216 = 0;
F->out_awaits_217 = NULL;
F->no_cons_218 = NULL;
F->units_219 = NULL;
F->prelude_units_220 = NULL;
F->pkg_stack_221 = NULL;
F->cur_pkg_222 = NULL;
F->prefix_hint_223 = NULL;
F->call_want_224 = NULL;
F->pure_sym_225 = NULL;
F->pure_depth_226 = INT64_MIN;
F->pure_depth_226 = ((rt_int)0LL);
F->vrp_ok_227 = INT_MIN;
F->vrp_ok_227 = 0;
F->in_lv_path_228 = INT_MIN;
F->in_lv_path_228 = 0;
F->last_deref_229 = INT_MIN;
F->last_deref_229 = 0;
F->main_name_230 = NULL;
F->conf_system_231 = NULL;
F->conf_storage_unit_232 = INT64_MIN;
F->conf_storage_unit_232 = ((rt_int)8LL);
F->conf_memory_size_233 = INT64_MIN;
F->conf_memory_size_233 = ((rt_int)1048576LL);
F->conf_optimize_234 = NULL;
F->env_names_197 = f_mk_236(F, rt_g_lit("", 0));
F->out_types_128 = f_new_buffer_258(F);
F->out_frames_129 = f_new_buffer_258(F);
F->out_helpers_130 = f_new_buffer_258(F);
F->out_protos_131 = f_new_buffer_258(F);
F->out_globals_132 = f_new_buffer_258(F);
F->out_funcs_133 = f_new_buffer_258(F);
F->out_init_134 = f_new_buffer_258(F);
F->out_excs_135 = f_new_buffer_258(F);
F->code_136 = F->out_init_134;
F->no_cons_218 = f_new_cons_481(F);
F->ty_int_156 = f_new_typ_480(F, ((rt_int)1LL));
F->ty_bool_157 = f_new_typ_480(F, ((rt_int)2LL));
F->ty_float_158 = f_new_typ_480(F, ((rt_int)3LL));
F->ty_char_159 = f_new_typ_480(F, ((rt_int)11LL));
F->ty_string_160 = f_new_typ_480(F, ((rt_int)6LL));
(*(P122)rt_nil_check(F->ty_string_160)).name_ = f_mk_236(F, rt_g_lit("STRING", 6));
(*(P122)rt_nil_check(F->ty_string_160)).cname_ = f_mk_236(F, rt_g_lit("rt_gstr", 7));
(*(P122)rt_nil_check(F->ty_string_160)).dims_ = ((rt_int)1LL);
(*(P122)rt_nil_check(F->ty_string_160)).elem_ = F->ty_char_159;
(*(P122)rt_nil_check(F->ty_string_160)).tcons_ = f_new_cons_481(F);
(*(P178)rt_nil_check((*(P122)rt_nil_check(F->ty_string_160)).tcons_)).lo_ = f_mk_236(F, rt_g_lit("1", 1));
F->ty_void_161 = f_new_typ_480(F, ((rt_int)9LL));
F->ty_nil_162 = f_new_typ_480(F, ((rt_int)10LL));
F->ty_act_164 = f_new_typ_480(F, ((rt_int)13LL));
F->ty_tdecl_165 = f_new_typ_480(F, ((rt_int)14LL));
F->ty_entry_166 = f_new_typ_480(F, ((rt_int)15LL));
(*(P122)rt_nil_check(F->ty_int_156)).name_ = f_mk_236(F, rt_g_lit("INTEGER", 7));
(*(P122)rt_nil_check(F->ty_string_160)).idx_ = F->ty_int_156;
(*(P122)rt_nil_check(F->ty_string_160)).next_ = F->all_types_124;
F->all_types_124 = F->ty_string_160;
(*(P122)rt_nil_check(F->ty_float_158)).name_ = f_mk_236(F, rt_g_lit("FLOAT", 5));
(*(P122)rt_nil_check(F->ty_float_158)).ndigits_ = ((rt_int)15LL);
F->ty_short_167 = f_new_typ_480(F, ((rt_int)1LL));
(*(P122)rt_nil_check(F->ty_short_167)).name_ = f_mk_236(F, rt_g_lit("SHORT_INTEGER", 13));
F->ty_long_168 = f_new_typ_480(F, ((rt_int)1LL));
(*(P122)rt_nil_check(F->ty_long_168)).name_ = f_mk_236(F, rt_g_lit("LONG_INTEGER", 12));
F->ty_sfloat_169 = f_new_typ_480(F, ((rt_int)3LL));
(*(P122)rt_nil_check(F->ty_sfloat_169)).name_ = f_mk_236(F, rt_g_lit("SHORT_FLOAT", 11));
(*(P122)rt_nil_check(F->ty_sfloat_169)).ndigits_ = ((rt_int)6LL);
F->ty_lfloat_170 = f_new_typ_480(F, ((rt_int)3LL));
(*(P122)rt_nil_check(F->ty_lfloat_170)).name_ = f_mk_236(F, rt_g_lit("LONG_FLOAT", 10));
(*(P122)rt_nil_check(F->ty_lfloat_170)).ndigits_ = ((rt_int)15LL);
F->ty_time_171 = f_new_typ_480(F, ((rt_int)3LL));
(*(P122)rt_nil_check(F->ty_time_171)).name_ = f_mk_236(F, rt_g_lit("TIME", 4));
(*(P122)rt_nil_check(F->ty_time_171)).ndigits_ = ((rt_int)15LL);
F->ty_ufixed_172 = f_new_typ_480(F, ((rt_int)16LL));
(*(P122)rt_nil_check(F->ty_ufixed_172)).name_ = f_mk_236(F, rt_g_lit("universal fixed", 15));
F->out_awaits_217 = f_new_buffer_258(F);
f_predefine_1305(F);
f_prelude_1331(F);
f_add_token_274(F, ((rt_int)0LL), rt_g_lit("<end>", 5), ((rt_int)0LL));
f_compilation_423(F, &F->prelude_units_220);
F->ntoks_113 = ((rt_int)0LL);
F->tpos_114 = ((rt_int)1LL);
F->src_line_115 = ((rt_int)0LL);
f_read_source_307(F);
F->compiling_source_207 = 1;
f_compilation_423(F, &F->units_219);
F->compiling_source_207 = 0;
F->loaded_208 = f_mk_236(F, rt_g_lit(",", 1));
f_library_units_1327(F);
if ((F->units_219 == NULL)) {
f_fail_257(F, ((rt_int)1LL), rt_g_lit("the compilation is empty", 24));
}
f_translate_1340(F, F->units_219);
f_store_units_1317(F);
f_print_program_1343(F);
ret_:

  return;
}

static void as_A2676(A2676 *d, A2676 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2676 cp_A2676(A2676 s) {
  A2676 d = s; d.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2676(A2676 a, A2676 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2676 cat_A2676(A2676 a, A2676 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2676 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2676 one_A2676(rt_int e) {
  A2676 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int)); r.p[0] = e;
  return r;
}
static void as_A2673(A2673 *d, A2673 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2673 cp_A2673(A2673 s) {
  A2673 d = s; d.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2673(A2673 a, A2673 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2673 cat_A2673(A2673 a, A2673 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2673 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2673 one_A2673(rt_int e) {
  A2673 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int)); r.p[0] = e;
  return r;
}
static void as_A2668(A2668 *d, A2668 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2668 cp_A2668(A2668 s) {
  A2668 d = s; d.p = rt_alloc(sizeof(int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2668(A2668 a, A2668 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2668 and_A2668(A2668 a, A2668 b) { A2668 r = cp_A2668(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, "array length"); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] && b.p[i]; return r; }
static A2668 or_A2668(A2668 a, A2668 b) { A2668 r = cp_A2668(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, "array length"); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] || b.p[i]; return r; }
static A2668 xor_A2668(A2668 a, A2668 b) { A2668 r = cp_A2668(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, "array length"); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] != b.p[i]; return r; }
static A2668 not_A2668(A2668 a) { A2668 r = cp_A2668(a); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = !a.p[i]; return r; }
static A2668 cat_A2668(A2668 a, A2668 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2668 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2668 one_A2668(int e) {
  A2668 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(int)); r.p[0] = e;
  return r;
}
static void as_A2343(A2343 *d, A2343 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2343 cp_A2343(A2343 s) {
  A2343 d = s; d.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2343(A2343 a, A2343 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2343 cat_A2343(A2343 a, A2343 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2343 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2343 one_A2343(rt_int e) {
  A2343 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int)); r.p[0] = e;
  return r;
}
static void as_R2031(R2031 *d, R2031 s) {
  d->disc_ = s.disc_;
  d->arm_ = s.arm_;
  d->variant_ = s.variant_;
  d->next_ = s.next_;
}
static R2031 cp_R2031(R2031 s) {
  R2031 d = s;
  d.disc_ = s.disc_;
  d.arm_ = s.arm_;
  d.variant_ = s.variant_;
  d.next_ = s.next_;
  return d;
}
static int eq_R2031(R2031 a, R2031 b) {
  return 1 && (a.disc_ == b.disc_) && (a.arm_ == b.arm_) && (a.variant_ == b.variant_) && (a.next_ == b.next_);
}
static void as_R1910(R1910 *d, R1910 s) {
  d->name_ = s.name_;
  d->v_ = s.v_;
  d->next_ = s.next_;
}
static R1910 cp_R1910(R1910 s) {
  R1910 d = s;
  d.name_ = s.name_;
  d.v_ = s.v_;
  d.next_ = s.next_;
  return d;
}
static int eq_R1910(R1910 a, R1910 b) {
  return 1 && (a.name_ == b.name_) && (a.v_ == b.v_) && (a.next_ == b.next_);
}
static void as_R1906(R1906 *d, R1906 s) {
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
static R1906 cp_R1906(R1906 s) {
  R1906 d = s;
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
static int eq_R1906(R1906 a, R1906 b) {
  return 1 && (a.name_ == b.name_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.next_ == b.next_) && (a.dflt_ == b.dflt_) && (a.is_const_ == b.is_const_) && (a.is_discr_ == b.is_discr_) && (a.dsym_ == b.dsym_) && (a.guard_ == b.guard_) && (a.cond_ == b.cond_) && (a.dyn_ == b.dyn_);
}
static void as_R1888(R1888 *d, R1888 s) {
  d->name_ = s.name_;
  d->mode_ = s.mode_;
  d->t_ = s.t_;
  d->c_ = s.c_;
  d->cfield_ = s.cfield_;
  d->dflt_ = s.dflt_;
  d->next_ = s.next_;
  d->dsym_ = s.dsym_;
}
static R1888 cp_R1888(R1888 s) {
  R1888 d = s;
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
static int eq_R1888(R1888 a, R1888 b) {
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
