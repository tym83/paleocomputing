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
typedef struct R1813 R1813;
typedef struct R1813 *P1812;
struct R118 { int dummy_; rt_int kind_; P140 name_; P122 t_; P178 c_; P140 access_path_; P140 cname_; int ro_; rt_int mvalue_; int hasmv_; P174 decl_; P1812 params_; P122 result_; rt_int depth_; rt_int level_; int byref_; int vrp_; int hidden_; int from_use_; P117 members_; P117 mnext_; P117 chain_; P117 stack_; rt_int flags_; };
typedef struct R1831 R1831;
typedef struct R1831 *P1830;
struct R123 { int dummy_; rt_int kind_; P140 name_; P174 lits_; P122 elem_; P122 idx_; P178 elemcons_; P178 tcons_; P1830 fields_; P122 target_; P174 decl_; P140 cname_; int forward_; int defined_; int priv_; P122 next_; P122 idx2_; P140 littab_; P122 parent_; rt_int ndigits_; P140 fdelta_; P140 fsmall_; rt_int dims_; int is_restricted_; };
typedef struct R1835 R1835;
typedef struct R1835 *P1834;
struct R179 { int dummy_; P140 lo_; P140 hi_; P140 slen_; rt_int mlo_; rt_int mhi_; int hasm_; P140 lo2_; P140 hi2_; P140 acc_; P178 inner_; P1834 dv_; };
struct R1835 { int dummy_; P140 name_; P140 v_; P1834 next_; };
struct R1813 { int dummy_; P140 name_; rt_int mode_; P122 t_; P178 c_; P140 cfield_; P174 dflt_; P1812 next_; P117 dsym_; };
typedef struct R1956 R1956;
typedef struct R1956 *P1955;
struct R1956 { int dummy_; P140 disc_; P174 arm_; P174 variant_; P1955 next_; };
struct R1831 { int dummy_; P140 name_; P122 t_; P178 c_; P1830 next_; P174 dflt_; int is_const_; int is_discr_; P117 dsym_; P1955 guard_; P140 cond_; int dyn_; };
struct R199 { int dummy_; rt_int limit_; rt_int keep_; P140 allowed_; P198 next_; };
struct R190 { int dummy_; P140 name_; P140 cname_; P140 path_; rt_int frames_; rt_int line_; P189 next_; };
typedef struct A2239 A2239;
struct A2239 { rt_int lo, hi, lo2, hi2; rt_int *p; };
struct R144 { int dummy_; P140 match_; P140 label_; rt_int depth_; int is_loop_; P143 next_; };
typedef struct A2564 A2564;
struct A2564 { rt_int lo, hi, lo2, hi2; int *p; };
typedef struct A2569 A2569;
struct A2569 { rt_int lo, hi, lo2, hi2; rt_int *p; };
typedef struct A2572 A2572;
struct A2572 { rt_int lo, hi, lo2, hi2; rt_int *p; };
struct R147 { int dummy_; P174 body_node_; P117 visible_; P146 next_; };
struct f_mk_227fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_226;
 P140 result_;
 rt_gstr r_1282;
};
struct f_new_name_230fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_228;
 P140 *res_229;
};
struct f_is_letter_232fr { int dummy;
 struct f_greenc_1fr *up;
 int c_231;
 int result_;
};
struct f_is_digit_234fr { int dummy;
 struct f_greenc_1fr *up;
 int c_233;
 int result_;
};
struct f_upper_236fr { int dummy;
 struct f_greenc_1fr *up;
 int c_235;
 int result_;
};
struct f_lower_s_238fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_237;
 rt_gstr result_;
 rt_gstr r_1286;
 rt_int i_1289;
};
struct f_upper_s_240fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_239;
 rt_gstr result_;
 rt_gstr r_1297;
 rt_int i_1300;
};
struct f_is_operator_242fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_241;
 int result_;
};
struct f_c_field_244fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_243;
 rt_gstr result_;
};
struct f_q_245fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr result_;
};
struct f_fail_248fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int line_246;
 rt_gstr msg_247;
};
struct f_new_buffer_249fr { int dummy;
 struct f_greenc_1fr *up;
 P126 result_;
};
struct f_put_to_252fr { int dummy;
 struct f_greenc_1fr *up;
 P126 b_250;
 rt_gstr s_251;
 P151 l_1309;
};
struct f_emit_254fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_253;
};
struct f_print_buffer_256fr { int dummy;
 struct f_greenc_1fr *up;
 P126 b_255;
 P151 l_1312;
};
struct f_splice_259fr { int dummy;
 struct f_greenc_1fr *up;
 P126 a_257;
 P126 b_258;
};
struct f_is_reserved_261fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_260;
 int result_;
};
struct f_add_token_265fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_262;
 rt_gstr s_263;
 rt_int ival_264;
};
struct f_digit_value_267fr { int dummy;
 struct f_greenc_1fr *up;
 int c_266;
 rt_int result_;
};
struct f_digit_in_270fr { int dummy;
 struct f_greenc_1fr *up;
 int c_268;
 rt_int base_269;
 rt_int result_;
 rt_int d_1320;
};
struct f_accumulate_274fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int *v_271;
 rt_int base_272;
 rt_int d_273;
};
struct f_lex_line_276fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr line_275;
 rt_int i_1321;
 rt_int j_1322;
 rt_int n_1323;
 int c_1325;
 int quote_1326;
 rt_int v_1327;
 rt_int d_1328;
 rt_gstr buf_1329;
 rt_int bl_1331;
 rt_int base_1373;
 rt_gstr two_1417;
};
struct f_exponent_ahead_279fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr line_277;
 rt_int j_278;
 int result_;
};
struct f_exponent_284fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr line_280;
 rt_int *j_281;
 rt_gstr *buf_282;
 rt_int *bl_283;
};
struct f_include_open_287fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_285;
 rt_int *length_286;
};
struct f_include_char_290fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int i_288;
 int *c_289;
};
struct f_check_include_291fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int n_1464;
};
struct f_include_text_293fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int n_292;
 rt_gstr t_1475;
 rt_int saved_line_1477;
 rt_int from_1478;
 rt_int k_1480;
 rt_int k_1487;
};
struct f_include_line_297fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr t_294;
 rt_int from_295;
 rt_int to_296;
 rt_gstr l_1492;
 rt_int k_1495;
};
struct f_read_source_298fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr buf_1503;
 rt_int bl_1505;
 int c_1506;
};
struct f_nn_301fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_299;
 rt_int line_300;
 P174 result_;
};
struct f_append_305fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *head_302;
 P174 *tail_303;
 P174 x_304;
};
struct f_list_len_307fr { int dummy;
 struct f_greenc_1fr *up;
 P174 l_306;
 rt_int result_;
 rt_int n_1516;
 P174 p_1517;
};
struct f_cur_line_308fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int result_;
};
struct f_at_kw_310fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_309;
 int result_;
};
struct f_at_op_312fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_311;
 int result_;
};
struct f_at_kind_314fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_313;
 int result_;
};
struct f_kind_at_316fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_315;
 rt_int result_;
};
struct f_text_at_318fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_317;
 rt_gstr result_;
};
struct f_perror_320fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr msg_319;
};
struct f_skip_321fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_expect_kw_323fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_322;
};
struct f_expect_op_325fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_324;
};
struct f_expect_id_327fr { int dummy;
 struct f_greenc_1fr *up;
 P140 *res_326;
};
struct f_name_node_329fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_328;
 P174 x_1532;
};
struct f_id_list_331fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_330;
 P174 head_1533;
 P174 tail_1534;
 P174 x_1535;
};
struct f_binop_336fr { int dummy;
 struct f_greenc_1fr *up;
 P140 op_332;
 P174 l_333;
 P174 r_334;
 rt_int line_335;
 P174 result_;
 P174 x_1537;
};
struct f_expr_338fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_337;
 P174 l_1538;
 P174 r_1539;
 P140 op_1540;
 P140 first_op_1541;
 rt_int line_1542;
 int short_1543;
 int first_short_1544;
};
struct f_is_rel_340fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_339;
 int result_;
};
struct f_relation_342fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_341;
 P174 l_1547;
 P174 r_1548;
 P174 lo_1549;
 P174 hi_1550;
 P174 t_1551;
 P140 op_1552;
 rt_int line_1553;
 int neg_1554;
};
struct f_path_of_344fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_343;
 rt_gstr result_;
};
struct f_simple_expr_346fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_345;
 P174 l_1558;
 P174 r_1559;
 P140 op_1560;
 rt_int line_1561;
};
struct f_term_348fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_347;
 P174 l_1565;
 P174 r_1566;
 P140 op_1567;
 rt_int line_1568;
};
struct f_factor_350fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_349;
 P174 l_1571;
 P174 r_1572;
 P140 op_1573;
 rt_int line_1574;
};
struct f_primary_352fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_351;
 P174 x_1576;
 rt_int line_1577;
};
struct f_agg_or_paren_354fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_353;
 rt_int line_1582;
 P174 items_1583;
 P174 itail_1584;
 P174 it_1585;
 P174 first_1586;
 P174 keys_1587;
 P174 ktail_1588;
 P174 lab_1589;
 P174 x_1590;
 int more_1591;
};
struct f_choice_token_356fr { int dummy;
 struct f_greenc_1fr *up;
 P110 t_355;
 int result_;
};
struct f_aggregate_ahead_357fr { int dummy;
 struct f_greenc_1fr *up;
 int result_;
 rt_int d_1594;
 rt_int k_1595;
 P110 t_1598;
};
struct f_name_p_359fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_358;
 P174 p_1600;
 P174 x_1601;
 P174 args_1602;
 P174 atail_1603;
 P174 lo_1604;
 P174 r_1605;
 rt_int line_1606;
 int more_1607;
 P140 formal_1611;
 rt_int mark_1612;
};
struct f_component_list_361fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_360;
 P174 comps_1615;
 P174 ctail_1616;
 P174 names_1617;
 P174 st_1618;
 P174 def_1619;
 P174 cm_1620;
 P174 v_1621;
 P174 arm_1622;
 P174 atail_1623;
 P174 labs_1624;
 P174 ltail_1625;
 P174 l_1626;
 int is_c_1627;
};
struct f_discrete_range_p_363fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_362;
 P174 lo_1632;
 P174 r_1633;
 rt_int line_1634;
};
struct f_subtype_ind_365fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_364;
 P140 f_1635;
 P174 x_1636;
 P174 r_1637;
 P174 args_1638;
 P174 atail_1639;
 P174 lo_1640;
 rt_int line_1641;
 int more_1642;
};
struct f_type_spec_367fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_366;
 P174 x_1645;
};
struct f_type_def_369fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_368;
 P174 x_1646;
 P174 lits_1647;
 P174 ltail_1648;
 P174 l_1649;
 P174 idx_1650;
 P174 itail_1651;
 P174 r_1652;
 P174 comps_1653;
 P174 ctail_1654;
 P174 names_1655;
 P174 st_1656;
 P174 def_1657;
 P174 cm_1658;
 rt_int line_1659;
 int more_1660;
};
struct f_pragma_p_371fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_370;
 P174 x_1664;
 P174 a_1665;
 P174 head_1666;
 P174 tail_1667;
};
struct f_check_pragma_373fr { int dummy;
 struct f_greenc_1fr *up;
 P174 x_372;
 rt_gstr p_1669;
 rt_int n_1670;
 P174 a_1671;
};
struct f_visibility_p_375fr { int dummy;
 struct f_greenc_1fr *up;
 P140 *res_374;
 P174 names_1673;
 P140 v_1674;
};
struct f_unit_p_377fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_376;
 P140 v_1676;
 P174 x_1677;
};
struct f_skip_representation_378fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_decl_part_380fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_379;
 P174 head_1681;
 P174 tail_1682;
 P174 x_1683;
 P174 names_1684;
};
struct f_object_decl_382fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_381;
 P174 head_1686;
 P174 tail_1687;
 P174 names_1688;
 P174 st_1689;
 P174 init_1690;
 P174 x_1691;
 rt_int line_1692;
 int is_const_1693;
};
struct f_type_decl_384fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_383;
 P174 x_1696;
 rt_int line_1697;
};
struct f_formal_part_386fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_385;
 P174 head_1698;
 P174 tail_1699;
 P174 names_1700;
 P174 st_1701;
 P174 def_1702;
 P174 p_1703;
 rt_int mode_1704;
 int more_1705;
};
struct f_designator_388fr { int dummy;
 struct f_greenc_1fr *up;
 P140 *res_387;
};
struct f_subprogram_390fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_389;
 P174 x_1712;
 rt_int line_1713;
 int is_proc_1714;
};
struct f_body_part_392fr { int dummy;
 struct f_greenc_1fr *up;
 P174 x_391;
};
struct f_parse_handlers_394fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_393;
 P174 head_1716;
 P174 tail_1717;
 P174 h_1718;
 P174 names_1719;
 P174 ntail_1720;
 P174 n_1721;
};
struct f_package_p_396fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_395;
 P174 x_1725;
 rt_int line_1726;
};
struct f_at_statements_end_397fr { int dummy;
 struct f_greenc_1fr *up;
 int result_;
};
struct f_statements_399fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_398;
 P174 head_1727;
 P174 tail_1728;
 P174 x_1729;
};
struct f_statement_401fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_400;
 P174 l_1731;
 P174 x_1732;
 P140 label_1733;
};
struct f_labelled_statement_404fr { int dummy;
 struct f_greenc_1fr *up;
 P140 label_402;
 P174 *res_403;
 P174 x_1734;
 P174 t_1735;
 rt_int line_1736;
};
struct f_task_statement_406fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_405;
};
struct f_if_stmt_408fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_407;
 P174 x_1740;
 P174 arm_1741;
 P174 head_1742;
 P174 tail_1743;
 int go_1744;
};
struct f_case_stmt_410fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_409;
 P174 x_1746;
 P174 arm_1747;
 P174 head_1748;
 P174 tail_1749;
 P174 labs_1750;
 P174 ltail_1751;
 P174 l_1752;
 int others_arm_1753;
};
struct f_loop_stmt_412fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_411;
 P174 x_1756;
 P174 r_1757;
 rt_int line_1758;
};
struct f_compilation_414fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_413;
 P174 head_1759;
 P174 tail_1760;
 P174 x_1761;
};
struct f_hash_416fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_415;
 rt_int result_;
 rt_int h_1764;
 rt_int i_1767;
};
struct f_listed_419fr { int dummy;
 struct f_greenc_1fr *up;
 P140 list_417;
 rt_gstr name_418;
 int result_;
 rt_gstr l_1772;
 rt_int n_1773;
 rt_int i_1778;
};
struct f_visible_sym_421fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_420;
 int result_;
 P198 b_1785;
};
struct f_lookup_423fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_422;
 P117 result_;
 P117 y_1787;
};
struct f_same_task_426fr { int dummy;
 struct f_greenc_1fr *up;
 P117 a_424;
 P117 b_425;
 int result_;
};
struct f_lookup_entry_429fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_427;
 P117 owner_428;
 P117 result_;
 P117 y_1790;
};
struct f_lookup_at_432fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_430;
 rt_int d_431;
 P117 result_;
 P117 y_1793;
};
struct f_enclosing_depth_434fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_433;
 rt_int result_;
 rt_int i_1797;
};
struct f_push_unit_436fr { int dummy;
 struct f_greenc_1fr *up;
 P140 name_435;
};
struct f_lookup_decl_438fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_437;
 P117 result_;
 P117 y_1805;
};
struct f_overloadable_440fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_439;
 int result_;
};
struct f_same_443fr { int dummy;
 struct f_greenc_1fr *up;
 P122 a_441;
 P122 b_442;
 int result_;
};
struct f_root_445fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_444;
 P122 result_;
 P122 r_1808;
};
struct f_derived_from_448fr { int dummy;
 struct f_greenc_1fr *up;
 P122 a_446;
 P122 b_447;
 int result_;
 P122 r_1810;
};
struct f_is_numeric_450fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_449;
 int result_;
};
struct f_is_discrete_452fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_451;
 int result_;
};
struct f_same_types_455fr { int dummy;
 struct f_greenc_1fr *up;
 P1812 a_453;
 P1812 b_454;
 int result_;
 P1812 x_1814;
 P1812 y_1815;
};
struct f_same_signature_458fr { int dummy;
 struct f_greenc_1fr *up;
 P1812 a_456;
 P1812 b_457;
 int result_;
 P1812 x_1817;
 P1812 y_1818;
};
struct f_distinct_overload_461fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_459;
 P117 z_460;
 int result_;
};
struct f_define_464fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_462;
 rt_int line_463;
 rt_int h_1820;
 P117 z_1821;
};
struct f_open_scope_465fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_close_scope_466fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_new_sym_469fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_467;
 P140 name_468;
 P117 result_;
};
struct f_new_typ_471fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_470;
 P122 result_;
};
struct f_new_cons_472fr { int dummy;
 struct f_greenc_1fr *up;
 P178 result_;
};
struct f_bounded_474fr { int dummy;
 struct f_greenc_1fr *up;
 P178 c_473;
 int result_;
};
struct f_bounded_hi_476fr { int dummy;
 struct f_greenc_1fr *up;
 P178 c_475;
 int result_;
};
struct f_static_bounds_478fr { int dummy;
 struct f_greenc_1fr *up;
 P178 c_477;
 int result_;
};
struct f_discriminated_480fr { int dummy;
 struct f_greenc_1fr *up;
 P178 c_479;
 int result_;
};
struct f_kind_name_482fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_481;
 rt_gstr result_;
};
struct f_check_type_486fr { int dummy;
 struct f_greenc_1fr *up;
 P122 got_483;
 P122 want_484;
 rt_int line_485;
};
struct f_field_count_488fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_487;
 rt_int result_;
 rt_int n_1839;
 P1830 f_1840;
};
struct f_ctype_491fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_489;
 P140 *r_490;
 P140 s_1842;
};
struct f_field_decls_494fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_492;
 P140 *r_493;
 P1830 f_1844;
 P140 s_1845;
 P140 ct_1846;
};
struct f_declare_ctype_496fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_495;
 P140 ct_1848;
 P140 s_1849;
 P122 target_1850;
};
struct f_lit_index_499fr { int dummy;
 struct f_greenc_1fr *up;
 P174 lits_497;
 rt_gstr name_498;
 rt_int result_;
 rt_int i_1851;
 P174 l_1852;
};
struct f_manifest_503fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_500;
 rt_int *v_501;
 int *ok_502;
 rt_int a_1854;
 rt_int b_1855;
 int ok2_1856;
 P117 y_1857;
};
struct f_resolve_507fr { int dummy;
 struct f_greenc_1fr *up;
 P174 st_504;
 P122 *t_505;
 P178 *c_506;
 P117 y_1858;
 P122 dummy_1859;
 P140 code_1860;
 int ok_1861;
 P174 r_1862;
};
struct f_constraint_list_511fr { int dummy;
 struct f_greenc_1fr *up;
 P174 st_508;
 P122 t_509;
 P178 c_510;
 P174 r_1863;
 P122 arrt_1864;
 P178 cc_1865;
 P122 it_1866;
};
struct f_discriminant_constraint_515fr { int dummy;
 struct f_greenc_1fr *up;
 P174 st_512;
 P122 t_513;
 P178 c_514;
 P174 a_1868;
 P1830 f_1869;
 P122 vt_1870;
 P140 v_1871;
 P1834 d_1872;
 P1834 tail_1873;
};
struct f_discrete_bounds_521fr { int dummy;
 struct f_greenc_1fr *up;
 P174 r_516;
 P122 want_517;
 P122 *t_518;
 P140 *lo_519;
 P140 *hi_520;
 P178 c_1881;
 P117 y_1882;
};
struct f_range_of_525fr { int dummy;
 struct f_greenc_1fr *up;
 P174 r_522;
 P122 t_523;
 P178 c_524;
 P122 dummy_1883;
 int ok_1884;
};
struct f_fresh_typ_529fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_526;
 P140 name_527;
 P122 *t_528;
 P122 ph_1885;
};
struct f_inherit_533fr { int dummy;
 struct f_greenc_1fr *up;
 P122 parent_530;
 P122 t_531;
 rt_int line_532;
 P117 s_1886;
 P117 z_1887;
 P1812 p_1888;
 P1812 q_1889;
 P1812 tail_1890;
 int uses_1891;
 P117 news_1892;
};
struct f_derive_literals_536fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_534;
 rt_int line_535;
 P174 l_1899;
 rt_int n_1900;
 P117 y_1901;
};
struct f_type_definition_541fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_537;
 P140 name_538;
 P122 *t_539;
 P178 *c_540;
 P122 dummy_1903;
 P122 it_1904;
 P178 ic_1905;
 P174 l_1906;
 P174 comp_1907;
 P1830 f_1908;
 P1830 tail_1909;
 int ok_1910;
 rt_int n_1911;
 P117 y_1912;
};
struct f_array_type_548fr { int dummy;
 struct f_greenc_1fr *up;
 P174 idx_542;
 P174 comp_543;
 P140 name_544;
 rt_int line_545;
 P122 *t_546;
 P178 *c_547;
 P174 l_1916;
 P178 rowc_1917;
 P178 ic_1918;
 P122 it_1919;
};
struct f_static_range_552fr { int dummy;
 struct f_greenc_1fr *up;
 P174 l_549;
 P174 h_550;
 P178 c_551;
 int ok_1920;
 int ok2_1921;
};
struct f_component_place_558fr { int dummy;
 struct f_greenc_1fr *up;
 P122 rt_553;
 P1830 f_554;
 rt_gstr a_555;
 rt_gstr ct_556;
 P140 *r_557;
 P140 bits_1924;
};
struct f_no_value_560fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_559;
 rt_gstr result_;
};
struct f_restricted_here_562fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_561;
 int result_;
};
struct f_elem_ctype_565fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_563;
 P140 *r_564;
};
struct f_first_index_568fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_566;
 P140 *r_567;
};
struct f_is_string_570fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_569;
 int result_;
};
struct f_subst_573fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_571;
 rt_gstr r_572;
 rt_gstr result_;
 rt_int i_1928;
};
struct f_mentions_record_575fr { int dummy;
 struct f_greenc_1fr *up;
 P140 s_574;
 int result_;
 rt_int i_1942;
};
struct f_subst_cons_579fr { int dummy;
 struct f_greenc_1fr *up;
 P178 c_576;
 rt_gstr r_577;
 P178 *res_578;
};
struct f_remove_sym_581fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_580;
 rt_int h_1948;
 P117 p_1949;
};
struct f_record_components_586fr { int dummy;
 struct f_greenc_1fr *up;
 P174 list_582;
 P122 t_583;
 P1955 g_584;
 rt_int line_585;
 P174 comp_1957;
 P1830 f_1958;
 P1830 tail_1959;
 P1830 df_1960;
 P174 prev_1961;
 P122 pt_1962;
 P122 vt_1963;
 P178 pc_1964;
 P117 y_1965;
 P140 acc_1966;
 P140 v_1967;
 P140 x_1968;
 P174 arm_1969;
 P1955 g2_1970;
};
struct f_guard_cond_590fr { int dummy;
 struct f_greenc_1fr *up;
 P1955 g_587;
 P122 t_588;
 P140 *r_589;
 P174 a_1980;
 P174 l_1981;
 P1830 df_1982;
 P140 x_1983;
 P140 d_1984;
 P122 dt_1985;
 P122 vt_1986;
 P140 lo_1987;
 P140 hi_1988;
};
struct f_arm_test_595fr { int dummy;
 struct f_greenc_1fr *up;
 P174 arm_591;
 P140 dname_592;
 rt_gstr d_593;
 P140 *x_594;
 P174 l_1990;
 P117 y_1991;
 P122 dt_1992;
 P122 vt_1993;
 P140 lo_1994;
 P140 hi_1995;
};
struct f_derived_type_600fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_596;
 P140 name_597;
 P122 *t_598;
 P178 *c_599;
 P122 pt_1997;
 P140 ct_1998;
 P122 ph_1999;
};
struct f_real_type_605fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_601;
 P140 name_602;
 P122 *t_603;
 P178 *c_604;
 P122 dt_2000;
 P140 dv_2001;
 rt_int n_2002;
 int ok_2003;
};
struct f_finish_ptr_607fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_606;
 P178 c_2004;
};
struct f_init_storage_611fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lval_608;
 P122 t_609;
 P178 c_610;
 P178 ec_2005;
 P178 fc_2006;
 P1834 d_2007;
 P140 ct_2008;
 P140 i_2009;
 P140 v_2010;
 P140 x_2011;
 P122 vt_2012;
 P1830 f_2013;
};
struct f_composite_613fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_612;
 int result_;
};
struct f_assign_code_619fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lval_614;
 P122 t_615;
 rt_gstr v_616;
 P178 c_617;
 P140 *r_618;
 P140 ct_2017;
 P140 x_2018;
 P1834 d_2019;
};
struct f_copy_code_623fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_620;
 rt_gstr v_621;
 P140 *r_622;
 P140 ct_2021;
};
struct f_eq_code_628fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_624;
 rt_gstr a_625;
 rt_gstr b_626;
 P140 *r_627;
 P140 ct_2022;
};
struct f_seen_name_631fr { int dummy;
 struct f_greenc_1fr *up;
 P151 l_629;
 rt_gstr s_630;
 int result_;
 P151 p_2023;
};
struct f_emit_helpers_632fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_2025;
 P140 et_2026;
 P151 done_2027;
 P151 l_2028;
};
struct f_helper_bodies_634fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_633;
 P140 c_2032;
 P126 b_2033;
 P140 ct_2034;
 P140 et_2035;
 P140 x_2036;
 P140 y_2037;
 P140 conds_2038;
 P1830 f_2039;
};
struct f_storage_638fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_635;
 P122 t_636;
 P140 *access_code_637;
 P140 ct_2042;
 P140 g_2043;
};
struct f_bind_641fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_639;
 P140 access_code_640;
};
struct f_declare_subprograms_643fr { int dummy;
 struct f_greenc_1fr *up;
 P174 from_642;
 P174 e_2044;
};
struct f_declare_one_645fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_644;
 P117 y_2046;
 P117 z_2047;
};
struct f_elaborate_defaults_647fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_646;
 P1812 pm_2051;
 P122 vt_2052;
 P140 v_2053;
 P140 acc_2054;
 P140 x_2055;
 P117 z_2056;
};
struct f_build_subprogram_650fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_648;
 P117 *y_649;
 P174 p_2058;
 P1812 pm_2059;
 P1812 tail_2060;
 P178 rc_2061;
 rt_int k_2062;
};
struct f_decl_elements_652fr { int dummy;
 struct f_greenc_1fr *up;
 P174 decls_651;
 P174 e_2066;
 int declared_2067;
};
struct f_decl_element_654fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_653;
 P198 saved_2069;
};
struct f_decl_element_1_656fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_655;
 P174 pd_2070;
 P117 y_2071;
 P117 z_2072;
 P122 t_2073;
 P122 vt_2074;
 P178 c_2075;
 P140 acc_2076;
 P140 v_2077;
 P140 x_2078;
 int ok_2079;
};
struct f_pragma_decl_658fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_657;
};
struct f_resolve_object_type_662fr { int dummy;
 struct f_greenc_1fr *up;
 P174 st_659;
 P122 *t_660;
 P178 *c_661;
};
struct f_rename_subprogram_664fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_663;
 P117 newy_2081;
 P117 y_2082;
 P117 z_2083;
 P117 cand_2084;
 P174 ix_2085;
 P1812 p_2086;
 P1812 q_2087;
 P1812 tail_2088;
};
struct f_rename_module_667fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_665;
 P174 target_666;
 P117 y_2097;
 P117 z_2098;
};
struct f_push_barrier_670fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_668;
 rt_int limit_669;
 P198 b_2099;
 P140 first_name_2100;
 rt_int k_2101;
};
struct f_other_decl_672fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_671;
};
struct f_scan_labels_675fr { int dummy;
 struct f_greenc_1fr *up;
 P174 stmts_673;
 rt_gstr path_674;
 P174 s_2109;
 P174 a_2110;
 P189 l_2111;
 P140 c_2112;
};
struct f_scan_guarded_679fr { int dummy;
 struct f_greenc_1fr *up;
 P174 stmts_676;
 P174 hs_677;
 rt_gstr path_678;
 P174 h_2122;
};
struct f_count_g_681fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_680;
 rt_int result_;
 rt_int n_2124;
 rt_int i_2128;
};
struct f_label_body_684fr { int dummy;
 struct f_greenc_1fr *up;
 P174 stmts_682;
 P174 hs_683;
 P189 l_2133;
 P189 g_2134;
 P140 gp_2135;
 P140 lp_2136;
 rt_int i_2147;
};
struct f_gen_label_687fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_685;
 int goto_it_686;
 P189 l_2153;
};
struct f_is_foreign_689fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_688;
 int result_;
};
struct f_subprogram_body_692fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_690;
 P117 y_691;
 P126 saved_code_2155;
 P126 saved_fields_2156;
 int saved_in_2157;
 P117 saved_sym_2158;
 P143 saved_exits_2159;
 rt_int saved_frames_2160;
 P151 saved_handlers_2161;
 P151 saved_cleanups_2162;
 P189 saved_labels_2163;
 P143 saved_hx_2164;
 rt_int saved_hd_2165;
 P117 saved_pure_2166;
 P140 aw_2167;
 rt_int saved_pdepth_2168;
 P140 args_2169;
 P140 head_2170;
 P140 frame_2171;
 P140 parent_2172;
 P140 ct_2173;
 P140 x_2174;
 P1812 pm_2175;
 P117 p_2176;
};
struct f_gen_statements_694fr { int dummy;
 struct f_greenc_1fr *up;
 P174 stmts_693;
 P174 s_2182;
};
struct f_pop_frames_696fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int upto_695;
 rt_int i_2184;
 P151 c_2185;
};
struct f_push_cleanup_698fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_697;
};
struct f_pop_cleanup_699fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_guarded_704fr { int dummy;
 struct f_greenc_1fr *up;
 P174 decls_700;
 P174 stmts_701;
 P174 hs_702;
 rt_int line_703;
 P143 saved_hx_2189;
 P140 f_2190;
 P140 x_2191;
 P174 h_2192;
 P174 n_2193;
 int first_2194;
 int has_others_2195;
 P140 conds_2196;
};
struct f_exc_id_708fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_705;
 rt_int line_706;
 P140 *r_707;
 P117 y_2201;
};
struct f_gen_statement_710fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_709;
 P122 t_2202;
 P122 vt_2203;
 P178 c_2204;
 P140 lv_2205;
 P140 v_2206;
 P140 x_2207;
 int ro_2208;
};
struct f_slice_assign_712fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_711;
 P140 lv_2210;
 P140 v_2211;
 P140 sl_2212;
 P140 x_2213;
 P122 t_2214;
 P122 st_2215;
 P122 vt_2216;
 P178 c_2217;
 int ro_2218;
};
struct f_gen_call_714fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_713;
 P174 c_2219;
 P122 t_2220;
 P140 v_2221;
};
struct f_gen_if_716fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_715;
 P174 a_2222;
 int first_2223;
 P122 t_2224;
 P140 v_2225;
};
struct f_gen_case_718fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_717;
 P122 st_2227;
 P122 vt_2228;
 int first_2229;
 P174 a_2230;
 P174 lab_2231;
 P140 sel_2232;
 P140 tmp_2233;
 P140 ct_2234;
 P140 conds_2235;
 P140 v_2236;
 P140 lo_2237;
 P140 hi_2238;
 A2239 clo_2240;
 A2239 chi_2242;
 rt_int nc_2244;
 rt_int vlo_2245;
 rt_int vhi_2246;
 rt_int total_2247;
 int ok_2248;
 int ok2_2249;
 P117 y_2250;
 rt_int k_2254;
 rt_int k_2263;
};
struct f_selector_range_724fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_719;
 P122 t_720;
 rt_int *lo_721;
 rt_int *hi_722;
 int *ok_723;
 P117 y_2271;
};
struct f_push_exit_728fr { int dummy;
 struct f_greenc_1fr *up;
 P140 match_725;
 int is_loop_726;
 P140 *label_727;
};
struct f_gen_loop_730fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_729;
 P122 t_2274;
 P122 vt_2275;
 P178 c_2276;
 P140 label_2277;
 P140 cond_2278;
 P140 acc_2279;
 P140 lov_2280;
 P140 hiv_2281;
 P140 it_2282;
 P117 y_2283;
 P174 r_2284;
};
struct f_gen_block_732fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_731;
 P140 label_2285;
 P140 aw_2286;
};
struct f_exit_matches_735fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_733;
 P143 x_734;
 int result_;
};
struct f_gen_exit_737fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_736;
 P143 x_2287;
 P122 t_2288;
 P140 v_2289;
};
struct f_gen_return_739fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_738;
 P122 vt_2291;
 P140 v_2292;
 P140 x_2293;
};
struct f_access_of_742fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_740;
 P140 *r_741;
 P140 p_2294;
 rt_int i_2296;
};
struct f_link_to_745fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int l_743;
 P140 *r_744;
 rt_int i_2301;
};
struct f_c_ident_747fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_746;
 rt_gstr result_;
};
struct f_deref_751fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_748;
 P122 t_749;
 P140 *r_750;
 P140 ct_2305;
};
struct f_is_object_753fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_752;
 int result_;
 P117 y_2306;
};
struct f_is_const_access_755fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_754;
 int result_;
 P117 y_2307;
};
struct f_lvalue_761fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_756;
 P140 *code_out_757;
 P122 *t_758;
 P178 *c_759;
 int *ro_760;
 int cp_2308;
 P174 ex_2309;
 P117 y_2310;
 P140 base_2311;
 P122 bt_2312;
 P178 bc_2313;
};
struct f_select_on_770fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_762;
 P122 bt_763;
 P174 e_764;
 int *ro_765;
 int lv_766;
 P140 *code_out_767;
 P122 *t_768;
 P178 *c_769;
 P1830 f_2314;
 P140 d_2315;
 P140 ct_2316;
 P140 tmp_2317;
};
struct f_index_on_779fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_771;
 P122 bt_772;
 P174 e_773;
 int *ro_774;
 int lv_775;
 P140 *code_out_776;
 P122 *t_777;
 P178 *c_778;
 P174 a_2319;
 P122 arrt_2320;
 P140 acc_2321;
 P122 it_2322;
 P140 i_2323;
 P140 lo_2324;
 P140 hi_2325;
 P140 d_2326;
 P140 ct_2327;
 P140 tmp_2328;
};
struct f_type_attribute_782fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_780;
 rt_gstr name_781;
 int result_;
 P117 y_2330;
 P1812 p_2332;
};
struct f_is_type_name_784fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_783;
 int result_;
 P117 y_2335;
};
struct f_is_char_lit_786fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_785;
 int result_;
};
struct f_is_enum_lit_788fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_787;
 int result_;
 P117 y_2337;
};
struct f_c_string_790fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_789;
 rt_gstr result_;
 rt_int n_2338;
 rt_int i_2341;
 rt_gstr r_2350;
 rt_int j_2352;
 rt_int i_2356;
};
struct f_is_literal_792fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_791;
 int result_;
};
struct f_range_bounds_800fr { int dummy;
 struct f_greenc_1fr *up;
 P174 l_793;
 P174 h_794;
 P122 want_795;
 rt_int line_796;
 P122 *t_797;
 P140 *lo_798;
 P140 *hi_799;
 P122 w_2367;
 P122 t2_2368;
};
struct f_gexpr_805fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_801;
 P122 want_802;
 P122 *t_803;
 P140 *r_804;
 P117 y_2369;
 P122 bt_2370;
 P178 c_2371;
 int ro_2372;
 P140 base_2373;
 P140 a_2374;
 P174 nm_2375;
 int saved_lv_2376;
};
struct f_gexpr_1_810fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_806;
 P122 want_807;
 P122 *t_808;
 P140 *r_809;
 P117 y_2377;
 P122 bt_2378;
 P178 c_2379;
 int ro_2380;
 P140 base_2381;
 P140 a_2382;
 P174 nm_2383;
 P174 c2_2384;
};
struct f_string_aggregate_815fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_811;
 P122 want_812;
 P122 *t_813;
 P140 *r_814;
 P174 ag_2388;
 P174 it_2389;
 P174 tail_2390;
 P174 l_2391;
 rt_int k_2394;
};
struct f_char_literal_820fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_816;
 P122 want_817;
 P122 *t_818;
 P140 *r_819;
 rt_int i_2400;
};
struct f_expanded_823fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_821;
 P174 *r_822;
 P117 y_2403;
 rt_int d_2404;
};
struct f_gen_name_828fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_824;
 P122 want_825;
 P122 *t_826;
 P140 *r_827;
 P117 y_2405;
 P117 z_2406;
 P174 call_2407;
};
struct f_gen_unop_833fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_829;
 P122 want_830;
 P122 *t_831;
 P140 *r_832;
 P140 a_2410;
 P140 x_2411;
 int done_2412;
};
struct f_short_int_835fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_834;
 int result_;
};
struct f_float_kind_837fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_836;
 rt_gstr result_;
};
struct f_membership_840fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_838;
 P140 *r_839;
 P122 ta_2413;
 P122 tb_2414;
 P122 tt_2415;
 P140 a_2416;
 P140 lo_2417;
 P140 hi_2418;
 P140 ct_2419;
 P178 c_2420;
 P1834 d_2421;
};
struct f_condition_845fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_841;
 P122 want_842;
 P122 *t_843;
 P140 *r_844;
 P140 a_2423;
 P140 b_2424;
 P122 tb_2425;
};
struct f_catenation_850fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_846;
 P122 want_847;
 P122 *t_848;
 P140 *r_849;
 P122 arrt_2426;
 P122 ta_2427;
 P122 tb_2428;
 P140 a_2429;
 P140 b_2430;
 P140 ct_2431;
};
struct f_cat_operand_855fr { int dummy;
 struct f_greenc_1fr *up;
 P174 x_851;
 P122 arrt_852;
 rt_int line_853;
 P140 *r_854;
 P122 tx_2432;
 P140 ct_2433;
};
struct f_arithmetic_860fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_856;
 P122 want_857;
 P122 *t_858;
 P140 *r_859;
 rt_gstr op_2434;
 P122 ta_2435;
 P122 tb_2436;
 P122 hint_2437;
 P140 a_2438;
 P140 b_2439;
};
struct f_fixed_operation_868fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_861;
 P122 ta_862;
 P122 tb_863;
 rt_gstr a_864;
 rt_gstr b_865;
 P122 *t_866;
 P140 *r_867;
 rt_gstr op_2440;
};
struct f_gen_binop_873fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_869;
 P122 want_870;
 P122 *t_871;
 P140 *r_872;
 rt_gstr op_2441;
 P122 ta_2442;
 P122 tb_2443;
 P122 hint_2444;
 P122 ct_2445;
 P140 a_2446;
 P140 b_2447;
 P140 x_2448;
 P140 dummy_2449;
 int done_2450;
};
struct f_conversion_878fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_874;
 P117 y_875;
 P122 *t_876;
 P140 *r_877;
 P122 aty_2451;
 P140 a_2452;
 P174 ag_2453;
 P174 it_2454;
 P174 tail_2455;
 P174 arg_2456;
};
struct f_constrain_882fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_879;
 P122 t_880;
 P140 *r_881;
 P140 ct_2458;
 P140 tmp_2459;
};
struct f_array_conversion_889fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_883;
 P122 t_884;
 P122 aty_885;
 P178 c_886;
 rt_gstr a_887;
 P140 *r_888;
 P122 x_2460;
 P122 y_2461;
 P140 ct_2462;
 P140 act_2463;
 P140 et_2464;
 P140 tmp_2465;
 P140 s_2466;
 rt_int k_2468;
};
struct f_gen_attr_894fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_890;
 P122 want_891;
 P122 *t_892;
 P140 *r_893;
 rt_gstr a_2472;
 P117 y_2473;
 P122 tt_2474;
 P122 aty_2475;
 P140 v_2476;
 P140 d_2477;
 P178 c_2478;
 rt_int n_2479;
 int ro_2480;
};
struct f_type_bits_898fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_895;
 P178 c_896;
 P140 *r_897;
 P140 ct_2481;
};
struct f_object_bits_902fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_899;
 rt_gstr v_900;
 P140 *r_901;
 P140 ct_2482;
 P140 et_2483;
};
struct f_numeric_attr_908fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_903;
 P122 tt_904;
 P178 c_905;
 P122 *t_906;
 P140 *r_907;
 rt_gstr a_2484;
 int short_2485;
};
struct f_component_attr_912fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_909;
 P122 *t_910;
 P140 *r_911;
 P122 bt_2486;
 P140 v_2487;
 P140 ct_2488;
 P1830 f_2489;
};
struct f_config_attr_916fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_913;
 P122 *t_914;
 P140 *r_915;
 rt_gstr a_2491;
 rt_gstr p_2492;
 P140 nm_2493;
};
struct f_attr_dim_920fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_917;
 P122 arrt_918;
 rt_int *n_919;
 int ok_2496;
};
struct f_object_array_attr_926fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_921;
 P122 arrt_922;
 rt_gstr v_923;
 P122 *t_924;
 P140 *r_925;
 rt_int n_2497;
 P122 it_2498;
 P140 ct_2499;
 P140 tmp_2500;
 P140 p_2501;
 P140 lo_2502;
 P140 hi_2503;
 rt_int k_2505;
 rt_int k_2510;
};
struct f_type_array_attr_932fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_927;
 P122 arrt_928;
 P178 c_929;
 P122 *t_930;
 P140 *r_931;
 rt_int n_2514;
 P122 it_2515;
 P178 cc_2516;
 rt_int k_2518;
};
struct f_lit_table_935fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_933;
 P140 *r_934;
 P174 l_2522;
 P140 s_2523;
};
struct f_val_rep_941fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_936;
 P122 tt_937;
 P178 c_938;
 P122 *t_939;
 P140 *r_940;
 P122 aty_2526;
 P140 v_2527;
 P140 lt_2528;
 rt_int n_2529;
};
struct f_allocator_946fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_942;
 P122 want_943;
 P122 *t_944;
 P140 *r_945;
 P117 y_2530;
 P122 target_2531;
 P122 vt_2532;
 P140 ct_2533;
 P140 pt_2534;
 P140 cell_2535;
 P140 v_2536;
 P140 x_2537;
};
struct f_aggregate_951fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_947;
 P122 want_948;
 P122 *t_949;
 P140 *r_950;
 P140 b_2538;
};
struct f_captured_954fr { int dummy;
 struct f_greenc_1fr *up;
 P126 b_952;
 P140 *r_953;
 P151 l_2539;
};
struct f_field_at_957fr { int dummy;
 struct f_greenc_1fr *up;
 P122 rt_955;
 rt_int k_956;
 P1830 result_;
 P1830 f_2541;
 rt_int i_2543;
};
struct f_names_field_960fr { int dummy;
 struct f_greenc_1fr *up;
 P174 x_958;
 P1830 f_959;
 int result_;
};
struct f_item_for_965fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_961;
 P122 rt_962;
 rt_int k_963;
 rt_int p_964;
 P174 result_;
 P174 it_2547;
 P174 lab_2548;
 rt_int n_2549;
};
struct f_arm_holds_969fr { int dummy;
 struct f_greenc_1fr *up;
 P174 arm_966;
 rt_int v_967;
 int *res_968;
 P174 l_2552;
 rt_int lo_2553;
 rt_int hi_2554;
 int ok_2555;
};
struct f_record_aggregate_973fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_970;
 P122 rt_971;
 P140 *r_972;
 P174 it_2557;
 P174 lab_2558;
 P174 vn_2559;
 P174 a_2560;
 P1830 f_2561;
 P1955 g_2562;
 rt_int n_2563;
 A2564 done_2565;
 A2564 active_2567;
 A2569 dvs_2570;
 A2572 order_2573;
 rt_int norder_2575;
 rt_int nung_2576;
 rt_int k_2577;
 rt_int d_2578;
 rt_int npos_2579;
 P126 saved_2580;
 P140 ct_2581;
 P140 tmp_2582;
 P140 parts_2583;
 int named_2584;
 int ok_2585;
 int holds_2586;
 rt_int i_2588;
 rt_int p_2597;
 rt_int i_2616;
 rt_int i_2633;
 rt_int i_2644;
};
struct f_field_index_976fr { int dummy;
 struct f_greenc_1fr *up;
 P122 rt_974;
 rt_gstr name_975;
 rt_int result_;
 P1830 f_2650;
 rt_int k_2651;
};
struct f_agg_component_982fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr tmp_977;
 P122 rt_978;
 rt_int k_979;
 P174 v_980;
 rt_int line_981;
 P1830 f_2653;
 P122 vt_2654;
 P140 x_2655;
 P140 y_2656;
 rt_int i_2658;
};
struct f_static_choice_986fr { int dummy;
 struct f_greenc_1fr *up;
 P174 x_983;
 rt_int *v_984;
 int *ok_985;
};
struct f_array_aggregate_991fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_987;
 P122 arrt_988;
 P140 bounds_989;
 P140 *r_990;
 P174 it_2663;
 P174 lab_2664;
 P174 others_it_2665;
 rt_int np_2666;
 rt_int nnamed_2667;
 rt_int clo_2668;
 rt_int chi_2669;
 rt_int v1_2670;
 rt_int v2_2671;
 int all_static_2672;
 int ok_2673;
 int ok2_2674;
 int first_choice_2675;
 P122 vt_2676;
 P140 ct_2677;
 P140 et_2678;
 P140 tmp_2679;
 P140 lo_2680;
 P140 hi_2681;
 P140 v_2682;
 P140 x_2683;
 P140 parts_2684;
 P140 fill_2685;
 P140 rowb_2686;
 P140 key_2687;
 P140 khi_2688;
 P126 saved_2689;
};
struct f_element_store_995fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lv_992;
 P122 arrt_993;
 rt_gstr v_994;
 P140 x_2694;
};
struct f_check_choices_999fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_996;
 P122 arrt_997;
 int has_others_998;
 P174 a_2695;
 P174 b_2696;
 P174 lab_2697;
 P174 lab2_2698;
 rt_int lo1_2699;
 rt_int hi1_2700;
 rt_int lo2_2701;
 rt_int hi2_2702;
 rt_int count_2703;
 int ok_2704;
};
struct f_actual_for_1003fr { int dummy;
 struct f_greenc_1fr *up;
 P174 args_1000;
 P1812 pm_1001;
 P1812 first_1002;
 P174 result_;
 P174 a_2709;
 P1812 p_2710;
};
struct f_gcall_1008fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1004;
 int is_stmt_1005;
 P122 *t_1006;
 P140 *r_1007;
 P174 fn_2713;
 P174 nm_2714;
 P117 y_2715;
 P140 args_2716;
 P140 lv_2717;
 P140 v_2718;
 P140 ct_2719;
 P140 x_2720;
 P174 a_2721;
 P1812 pm_2722;
 P122 lt_2723;
 P122 vt_2724;
 P178 lc_2725;
 int ro_2726;
};
struct f_out_check_1012fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lv_1009;
 P122 t_1010;
 P178 c_1011;
};
struct f_var_path_1015fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1013;
 P140 *r_1014;
 P122 pt_2727;
 P140 v_2728;
 P126 saved_2729;
};
struct f_paths_overlap_1018fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_1016;
 rt_gstr r_1017;
 int result_;
 rt_int i_2733;
 rt_int j_2735;
};
struct f_mentions_1021fr { int dummy;
 struct f_greenc_1fr *up;
 P174 n_1019;
 rt_gstr name_1020;
 int result_;
 P174 p_2757;
};
struct f_mentions_one_1024fr { int dummy;
 struct f_greenc_1fr *up;
 P174 n_1022;
 rt_gstr name_1023;
 int result_;
};
struct f_check_aliasing_1028fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1025;
 P117 y_1026;
 P174 a_1027;
 P174 b_2759;
 P140 p_2760;
 P140 q_2761;
 P174 r_2762;
 P117 v_2763;
};
struct f_gcall_with_1033fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1029;
 P117 y_1030;
 P122 *t_1031;
 P140 *r_1032;
 P140 args_2765;
 P140 lv_2766;
 P140 v_2767;
 P140 x1_2768;
 P140 x2_2769;
 P174 a_2770;
 P1812 pm_2771;
 P122 lt_2772;
 P122 vt_2773;
 P178 lc_2774;
 int ro_2775;
};
struct f_builtin_1040fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1034;
 P174 args_1035;
 rt_int line_1036;
 int is_stmt_1037;
 P122 *t_1038;
 P140 *r_1039;
 P122 aty_2778;
 P122 lt_2779;
 P140 a_2780;
 P140 w_2781;
 P140 lv_2782;
 P178 lc_2783;
 int ro_2784;
};
struct f_lookup_path_1042fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_1041;
 P117 result_;
 P117 y_2785;
 P117 m_2786;
 rt_int i_2790;
};
struct f_is_package_1044fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1043;
 int result_;
 P117 y_2802;
};
struct f_member_of_1048fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_1045;
 rt_gstr name_1046;
 rt_int line_1047;
 P117 result_;
 P117 y_2803;
 P117 m_2804;
};
struct f_inside_package_1050fr { int dummy;
 struct f_greenc_1fr *up;
 P174 p_1049;
 int result_;
 P151 l_2806;
};
struct f_copy_sym_1053fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1051;
 P117 *z_1052;
};
struct f_complete_private_1056fr { int dummy;
 struct f_greenc_1fr *up;
 P122 ph_1054;
 P122 full_1055;
 P140 n_2810;
 P174 p_2811;
};
struct f_package_spec_1058fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1057;
 P117 y_2812;
 P117 m_2813;
 P117 z_2814;
 P174 saved_2815;
 P117 first_private_2816;
};
struct f_hidden_from_1061fr { int dummy;
 struct f_greenc_1fr *up;
 P117 m_1059;
 P117 first_private_1060;
 int result_;
 P117 p_2820;
};
struct f_package_body_1063fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1062;
 P189 saved_labels_2822;
 P117 y_2823;
 P117 m_2824;
 P117 z_2825;
 P174 saved_2826;
};
struct f_use_visible_1065fr { int dummy;
 struct f_greenc_1fr *up;
 P117 old_1064;
 int result_;
};
struct f_use_clause_1067fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1066;
 P174 n_2833;
 P117 y_2834;
 P117 m_2835;
 P117 z_2836;
 P117 old_2837;
 int clash_2838;
};
struct f_usable_over_1069fr { int dummy;
 struct f_greenc_1fr *up;
 P117 old_1068;
 int result_;
};
struct f_same_entity_1072fr { int dummy;
 struct f_greenc_1fr *up;
 P117 a_1070;
 P117 b_1071;
 int result_;
};
struct f_fits_1077fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1073;
 P174 args_1074;
 P122 want_1075;
 int *ok_1076;
 P1812 pm_2843;
 P174 a_2844;
 P122 t_2845;
 P178 c_2846;
 P140 v_2847;
 int ro_2848;
 P126 saved_2849;
 rt_int used_2850;
};
struct f_is_builtin_1079fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_1078;
 int result_;
};
struct f_resolve_overload_1086fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1080;
 P174 args_1081;
 int is_stmt_1082;
 P122 want_1083;
 rt_int line_1084;
 P117 *y_1085;
 P117 z_2855;
 P117 w_2856;
 P117 first_2857;
 P117 found_2858;
 rt_int n_2859;
 int ok_2860;
 int hidden_2861;
 rt_int pass_2863;
};
struct f_same_profile_1089fr { int dummy;
 struct f_greenc_1fr *up;
 P117 a_1087;
 P117 b_1088;
 int result_;
};
struct f_resolve_member_overload_1097fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_1090;
 rt_gstr name_1091;
 P174 args_1092;
 int is_stmt_1093;
 P122 want_1094;
 rt_int line_1095;
 P117 *y_1096;
 P117 pk_2873;
 P117 z_2874;
 P117 found_2875;
 rt_int n_2876;
 int ok_2877;
 rt_int pass_2879;
};
struct f_user_operator_1103fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1098;
 P122 want_1099;
 P122 *t_1100;
 P140 *r_1101;
 int *done_1102;
 P140 op_2884;
 int negate_2885;
 P117 y_2886;
 P174 call_2887;
 P174 fname_2888;
 P174 l_2889;
 P174 rt_2890;
 int ok_2891;
};
struct f_task_p_1105fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_1104;
 P174 x_2894;
 P174 r_2895;
 rt_int line_2896;
};
struct f_entry_p_1107fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_1106;
 P174 x_2897;
};
struct f_accept_p_1109fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_1108;
 P174 x_2898;
};
struct f_delay_p_1111fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_1110;
 P174 x_2899;
};
struct f_designators_1113fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_1112;
 P174 head_2900;
 P174 tail_2901;
 P174 n_2902;
};
struct f_parse_task_statement_1115fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_1114;
 P174 x_2904;
 P174 alt_2905;
 P174 head_2906;
 P174 tail_2907;
 rt_int line_2908;
};
struct f_path_at_1119fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int level_1116;
 rt_gstr field_1117;
 P140 *r_1118;
 rt_int i_2911;
};
struct f_is_task_name_1121fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_1120;
 int result_;
 P117 y_2915;
};
struct f_task_of_1125fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1122;
 P117 *y_1123;
 P174 *ix_1124;
 P174 n_2916;
 P117 a_2917;
};
struct f_own_index_1127fr { int dummy;
 struct f_greenc_1fr *up;
 P140 *r_1126;
 P117 y_2918;
};
struct f_member_1132fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1128;
 rt_gstr arr_1129;
 rt_gstr i_1130;
 P140 *r_1131;
 P140 lo_2919;
 P140 hi_2920;
};
struct f_act_path_1135fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1133;
 P140 *r_1134;
 P140 i_2921;
};
struct f_act_path_i_1139fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1136;
 rt_gstr i_1137;
 P140 *r_1138;
};
struct f_entry_path_1143fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1140;
 rt_gstr i_1141;
 P140 *r_1142;
 P140 own_2922;
};
struct f_declare_slot_1146fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr ctype_name_1144;
 rt_gstr field_1145;
};
struct f_task_decl_1148fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1147;
};
struct f_family_arg_struct_1149fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_family_bounds_1153fr { int dummy;
 struct f_greenc_1fr *up;
 P174 b_1150;
 P117 y_1151;
 P140 x_1152;
 P140 lo_2924;
 P140 hi_2925;
 P140 v_2926;
 P140 d_2927;
 P122 vt_2928;
 P178 c_2929;
};
struct f_entry_family_slot_1158fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1154;
 rt_gstr base_1155;
 rt_gstr i_1156;
 P140 *r_1157;
 P140 lo_2930;
 P140 hi_2931;
};
struct f_task_spec_1160fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1159;
 int has_procs_2932;
 int saved_defer_2933;
 P140 fields_2934;
 P140 ct_2935;
 P1812 pm_2936;
 P140 fp_2937;
 P140 flo_2938;
 P140 fhi_2939;
 P117 y_2940;
 P117 m_2941;
 P117 z_2942;
 P117 saved_2943;
 P140 d_2944;
 P140 v_2945;
 P140 p_2946;
 P140 p2_2947;
 P122 vt_2948;
 P174 r_2949;
};
struct f_entry_decl_1162fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1161;
 P117 y_2953;
 P174 p_2954;
 P1812 pm_2955;
 P1812 tail_2956;
 P140 fields_2957;
 P140 ct_2958;
 P140 x_2959;
 P140 lo_2960;
 P140 hi_2961;
};
struct f_task_body_1164fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1163;
 P117 y_2965;
 P117 b_2966;
 P117 m_2967;
 P117 z_2968;
 P140 upp_2969;
 P117 saved_2970;
};
struct f_task_awaits_1167fr { int dummy;
 struct f_greenc_1fr *up;
 P174 decls_1165;
 P140 *aw_1166;
 P174 e_2974;
 P117 y_2975;
 P140 p_2976;
};
struct f_task_failure_1169fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_1168;
 P117 y_2978;
 P140 a_2979;
 P140 i_2980;
 P122 it_2981;
};
struct f_entry_sym_1173fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1170;
 P117 *y_1171;
 P174 *ix_1172;
 P174 alias_2982;
 P117 t_2983;
};
struct f_other_call_1178fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1174;
 int is_stmt_1175;
 P122 *t_1176;
 P140 *r_1177;
 P117 y_2984;
 P1812 pm_2985;
 P174 a_2986;
 P140 parts_2987;
 P140 v_2988;
 P140 lv_2989;
 P140 ent_2990;
 P140 act_2991;
 P140 i_2992;
 P122 vt_2993;
 P122 lt_2994;
 P178 lc_2995;
 int ro_2996;
 P174 ix_2997;
 P174 fix_2998;
 P174 args_node_2999;
};
struct f_other_attr_1183fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1179;
 P117 y_1180;
 P122 *t_1181;
 P140 *r_1182;
 rt_gstr a_3001;
 P140 p_3002;
};
struct f_member_attr_1187fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1184;
 P122 *t_1185;
 P140 *r_1186;
 P117 y_3003;
 P174 ix_3004;
 P140 i_3005;
 P140 p_3006;
 P122 vt_3007;
};
struct f_task_builtin_1193fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1188;
 P174 args_1189;
 rt_int line_1190;
 P122 *t_1191;
 P140 *r_1192;
 P122 vt_3008;
 P140 v_3009;
};
struct f_gen_accept_1195fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_1194;
 P117 y_3010;
 P143 saved_ax_3011;
 P140 ent_3012;
 P140 ep_3013;
 P140 xf_3014;
 P140 x_3015;
 P1812 pm_3016;
 P174 f_3017;
 P117 p_3018;
};
struct f_member_slot_1199fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1196;
 P174 s_1197;
 P140 *ent_1198;
 P122 vt_3020;
 P140 v_3021;
};
struct f_gen_delay_ticks_1202fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1200;
 P140 *r_1201;
 P122 vt_3022;
 P140 v_3023;
};
struct f_gen_select_1204fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_1203;
 P174 alt_3024;
 rt_int n_3025;
 rt_int i_3026;
 int has_delay_3027;
 int has_accept_3028;
 P140 al_3029;
 P140 w_3030;
 P140 g_3031;
 P140 ent_3032;
 P140 ticks_3033;
 P122 vt_3034;
 P117 y_3035;
};
struct f_family_range_1209fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1205;
 P174 ix_1206;
 P140 *lo_1207;
 P140 *hi_1208;
 P122 vt_3039;
};
struct f_task_statement_gen_1211fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_1210;
 P174 n_3040;
 P174 ix_3041;
 P117 y_3042;
 P140 a_3043;
 P140 d_3044;
 P140 l_3045;
 P140 ticks_3046;
 P140 lo_3047;
 P140 hi_3048;
};
struct f_root_name_1213fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1212;
 P174 result_;
};
struct f_check_pure_target_1216fr { int dummy;
 struct f_greenc_1fr *up;
 P174 target_1214;
 rt_int line_1215;
 P174 n_3052;
 P117 y_3053;
};
struct f_assigns_nonlocal_1219fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_1217;
 rt_gstr name_1218;
 int result_;
};
struct f_declares_1222fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_1220;
 rt_gstr name_1221;
 int result_;
 P174 p_3054;
 P174 e_3055;
};
struct f_scan_handlers_1226fr { int dummy;
 struct f_greenc_1fr *up;
 P174 h_1223;
 P174 d_1224;
 rt_gstr name_1225;
 int result_;
 P174 p_3058;
};
struct f_scan_assigns_1230fr { int dummy;
 struct f_greenc_1fr *up;
 P174 stmts_1227;
 P174 d_1228;
 rt_gstr name_1229;
 int result_;
 P174 s_3060;
 P174 a_3061;
 P174 r_3062;
};
struct f_check_call_rules_1233fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1231;
 P117 y_1232;
 P117 z_3066;
 P117 s_3067;
};
struct f_generic_p_1235fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_1234;
 P174 x_3069;
 P174 p_3070;
 P174 head_3071;
 P174 tail_3072;
 P174 names_3073;
 P174 st_3074;
 P174 def_3075;
 P174 sub_3076;
 P140 def_name_text_3077;
 int more_3078;
};
struct f_instantiation_1238fr { int dummy;
 struct f_greenc_1fr *up;
 P174 x_1236;
 P174 *res_1237;
 P174 i_3081;
 P174 head_3082;
 P174 tail_3083;
 P174 a_3084;
 P140 formal_3085;
 rt_int mark_3086;
 int more_3087;
};
struct f_generic_decl_1240fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1239;
 P117 y_3089;
};
struct f_is_generic_name_1242fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_1241;
 int result_;
 P117 y_3090;
};
struct f_attach_generic_body_1244fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1243;
 P117 y_3091;
};
struct f_restore_generic_context_1247fr { int dummy;
 struct f_greenc_1fr *up;
 P174 body_node_1245;
 rt_int line_1246;
 P146 ctx_3094;
 P117 m_3095;
 P117 z_3096;
 int seen_3097;
};
struct f_gactual_1251fr { int dummy;
 struct f_greenc_1fr *up;
 P174 args_1248;
 rt_int nth_1249;
 rt_gstr name_1250;
 P174 result_;
 P174 a_3102;
 rt_int i_3103;
};
struct f_copy_node_1255fr { int dummy;
 struct f_greenc_1fr *up;
 P174 n_1252;
 P140 name_1253;
 P174 *r_1254;
};
struct f_matches_formal_1259fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1256;
 rt_gstr name_1257;
 P117 fs_1258;
 int result_;
};
struct f_instantiate_1261fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1260;
 P117 g_3105;
 P174 gd_3106;
 P174 pat_3107;
 P174 f_3108;
 P174 a_3109;
 P174 cn_3110;
 P117 y_3111;
 P117 z_3112;
 P117 fs_3113;
 rt_int nth_3114;
 P122 t_3115;
 P122 vt_3116;
 P178 c_3117;
 P140 v_3118;
 P140 acc_3119;
 P140 x_3120;
 int ok_3121;
};
struct f_predef_type_1266fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1262;
 P122 t_1263;
 rt_gstr lo_1264;
 rt_gstr hi_1265;
 P117 y_3125;
};
struct f_predef_const_1270fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1267;
 P122 t_1268;
 rt_gstr code_text_1269;
 P117 y_3132;
};
struct f_predef_exc_1272fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1271;
 P117 y_3133;
};
struct f_predef_lit_1276fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1273;
 P122 t_1274;
 rt_int v_1275;
 P117 y_3134;
};
struct f_predefine_1277fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_3135;
 rt_gstr control_3136;
 rt_int start_3137;
 rt_int code_no_3138;
 rt_int i_3141;
 rt_int i_3149;
};
struct f_translate_1279fr { int dummy;
 struct f_greenc_1fr *up;
 P174 u_1278;
 P174 p_3153;
 P117 y_3154;
};
struct f_print_program_1280fr { int dummy;
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
 P151 pkg_stack_212;
 P174 cur_pkg_213;
 P140 prefix_hint_214;
 P122 call_want_215;
 P117 pure_sym_216;
 rt_int pure_depth_217;
 int vrp_ok_218;
 int in_lv_path_219;
 int last_deref_220;
 P140 main_name_221;
 P140 conf_system_222;
 rt_int conf_storage_unit_223;
 rt_int conf_memory_size_224;
 P140 conf_optimize_225;
};
static void as_A2572(A2572 *d, A2572 s);
static A2572 cp_A2572(A2572 s);
static int eq_A2572(A2572 a, A2572 b);
static A2572 cat_A2572(A2572 a, A2572 b);
static A2572 one_A2572(rt_int e);
static void as_A2569(A2569 *d, A2569 s);
static A2569 cp_A2569(A2569 s);
static int eq_A2569(A2569 a, A2569 b);
static A2569 cat_A2569(A2569 a, A2569 b);
static A2569 one_A2569(rt_int e);
static void as_A2564(A2564 *d, A2564 s);
static A2564 cp_A2564(A2564 s);
static int eq_A2564(A2564 a, A2564 b);
static A2564 cat_A2564(A2564 a, A2564 b);
static A2564 one_A2564(int e);
static A2564 and_A2564(A2564 a, A2564 b);
static A2564 or_A2564(A2564 a, A2564 b);
static A2564 xor_A2564(A2564 a, A2564 b);
static A2564 not_A2564(A2564 a);
static void as_A2239(A2239 *d, A2239 s);
static A2239 cp_A2239(A2239 s);
static int eq_A2239(A2239 a, A2239 b);
static A2239 cat_A2239(A2239 a, A2239 b);
static A2239 one_A2239(rt_int e);
static void as_R1956(R1956 *d, R1956 s);
static R1956 cp_R1956(R1956 s);
static int eq_R1956(R1956 a, R1956 b);
static void as_R1835(R1835 *d, R1835 s);
static R1835 cp_R1835(R1835 s);
static int eq_R1835(R1835 a, R1835 b);
static void as_R1831(R1831 *d, R1831 s);
static R1831 cp_R1831(R1831 s);
static int eq_R1831(R1831 a, R1831 b);
static void as_R1813(R1813 *d, R1813 s);
static R1813 cp_R1813(R1813 s);
static int eq_R1813(R1813 a, R1813 b);
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
static P140 f_mk_227(struct f_greenc_1fr *up_, rt_gstr s_226);
static void f_new_name_230(struct f_greenc_1fr *up_, rt_gstr base_228, P140 *res_229);
static int f_is_letter_232(struct f_greenc_1fr *up_, int c_231);
static int f_is_digit_234(struct f_greenc_1fr *up_, int c_233);
static int f_upper_236(struct f_greenc_1fr *up_, int c_235);
static rt_gstr f_lower_s_238(struct f_greenc_1fr *up_, rt_gstr s_237);
static rt_gstr f_upper_s_240(struct f_greenc_1fr *up_, rt_gstr s_239);
static int f_is_operator_242(struct f_greenc_1fr *up_, rt_gstr s_241);
static rt_gstr f_c_field_244(struct f_greenc_1fr *up_, rt_gstr s_243);
static rt_gstr f_q_245(struct f_greenc_1fr *up_);
static void f_fail_248(struct f_greenc_1fr *up_, rt_int line_246, rt_gstr msg_247);
static P126 f_new_buffer_249(struct f_greenc_1fr *up_);
static void f_put_to_252(struct f_greenc_1fr *up_, P126 b_250, rt_gstr s_251);
static void f_emit_254(struct f_greenc_1fr *up_, rt_gstr s_253);
static void f_print_buffer_256(struct f_greenc_1fr *up_, P126 b_255);
static void f_splice_259(struct f_greenc_1fr *up_, P126 a_257, P126 b_258);
static int f_is_reserved_261(struct f_greenc_1fr *up_, rt_gstr w_260);
static void f_add_token_265(struct f_greenc_1fr *up_, rt_int kind_262, rt_gstr s_263, rt_int ival_264);
static rt_int f_digit_value_267(struct f_greenc_1fr *up_, int c_266);
static rt_int f_digit_in_270(struct f_greenc_1fr *up_, int c_268, rt_int base_269);
static void f_accumulate_274(struct f_greenc_1fr *up_, rt_int *v_271, rt_int base_272, rt_int d_273);
static void f_lex_line_276(struct f_greenc_1fr *up_, rt_gstr line_275);
static int f_exponent_ahead_279(struct f_greenc_1fr *up_, rt_gstr line_277, rt_int j_278);
static void f_exponent_284(struct f_greenc_1fr *up_, rt_gstr line_280, rt_int *j_281, rt_gstr *buf_282, rt_int *bl_283);
static void f_include_open_287(struct f_greenc_1fr *up_, rt_gstr name_285, rt_int *length_286);
static void f_include_char_290(struct f_greenc_1fr *up_, rt_int i_288, int *c_289);
static void f_check_include_291(struct f_greenc_1fr *up_);
static void f_include_text_293(struct f_greenc_1fr *up_, rt_int n_292);
static void f_include_line_297(struct f_greenc_1fr *up_, rt_gstr t_294, rt_int from_295, rt_int to_296);
static void f_read_source_298(struct f_greenc_1fr *up_);
static P174 f_nn_301(struct f_greenc_1fr *up_, rt_int kind_299, rt_int line_300);
static void f_append_305(struct f_greenc_1fr *up_, P174 *head_302, P174 *tail_303, P174 x_304);
static rt_int f_list_len_307(struct f_greenc_1fr *up_, P174 l_306);
static rt_int f_cur_line_308(struct f_greenc_1fr *up_);
static int f_at_kw_310(struct f_greenc_1fr *up_, rt_gstr w_309);
static int f_at_op_312(struct f_greenc_1fr *up_, rt_gstr w_311);
static int f_at_kind_314(struct f_greenc_1fr *up_, rt_int k_313);
static rt_int f_kind_at_316(struct f_greenc_1fr *up_, rt_int k_315);
static rt_gstr f_text_at_318(struct f_greenc_1fr *up_, rt_int k_317);
static void f_perror_320(struct f_greenc_1fr *up_, rt_gstr msg_319);
static void f_skip_321(struct f_greenc_1fr *up_);
static void f_expect_kw_323(struct f_greenc_1fr *up_, rt_gstr w_322);
static void f_expect_op_325(struct f_greenc_1fr *up_, rt_gstr w_324);
static void f_expect_id_327(struct f_greenc_1fr *up_, P140 *res_326);
static void f_name_node_329(struct f_greenc_1fr *up_, P174 *res_328);
static void f_id_list_331(struct f_greenc_1fr *up_, P174 *res_330);
static P174 f_binop_336(struct f_greenc_1fr *up_, P140 op_332, P174 l_333, P174 r_334, rt_int line_335);
static void f_expr_338(struct f_greenc_1fr *up_, P174 *res_337);
static int f_is_rel_340(struct f_greenc_1fr *up_, rt_gstr s_339);
static void f_relation_342(struct f_greenc_1fr *up_, P174 *res_341);
static rt_gstr f_path_of_344(struct f_greenc_1fr *up_, P174 e_343);
static void f_simple_expr_346(struct f_greenc_1fr *up_, P174 *res_345);
static void f_term_348(struct f_greenc_1fr *up_, P174 *res_347);
static void f_factor_350(struct f_greenc_1fr *up_, P174 *res_349);
static void f_primary_352(struct f_greenc_1fr *up_, P174 *res_351);
static void f_agg_or_paren_354(struct f_greenc_1fr *up_, P174 *res_353);
static int f_choice_token_356(struct f_greenc_1fr *up_, P110 t_355);
static int f_aggregate_ahead_357(struct f_greenc_1fr *up_);
static void f_name_p_359(struct f_greenc_1fr *up_, P174 *res_358);
static void f_component_list_361(struct f_greenc_1fr *up_, P174 *res_360);
static void f_discrete_range_p_363(struct f_greenc_1fr *up_, P174 *res_362);
static void f_subtype_ind_365(struct f_greenc_1fr *up_, P174 *res_364);
static void f_type_spec_367(struct f_greenc_1fr *up_, P174 *res_366);
static void f_type_def_369(struct f_greenc_1fr *up_, P174 *res_368);
static void f_pragma_p_371(struct f_greenc_1fr *up_, P174 *res_370);
static void f_check_pragma_373(struct f_greenc_1fr *up_, P174 x_372);
static void f_visibility_p_375(struct f_greenc_1fr *up_, P140 *res_374);
static void f_unit_p_377(struct f_greenc_1fr *up_, P174 *res_376);
static void f_skip_representation_378(struct f_greenc_1fr *up_);
static void f_decl_part_380(struct f_greenc_1fr *up_, P174 *res_379);
static void f_object_decl_382(struct f_greenc_1fr *up_, P174 *res_381);
static void f_type_decl_384(struct f_greenc_1fr *up_, P174 *res_383);
static void f_formal_part_386(struct f_greenc_1fr *up_, P174 *res_385);
static void f_designator_388(struct f_greenc_1fr *up_, P140 *res_387);
static void f_subprogram_390(struct f_greenc_1fr *up_, P174 *res_389);
static void f_body_part_392(struct f_greenc_1fr *up_, P174 x_391);
static void f_parse_handlers_394(struct f_greenc_1fr *up_, P174 *res_393);
static void f_package_p_396(struct f_greenc_1fr *up_, P174 *res_395);
static int f_at_statements_end_397(struct f_greenc_1fr *up_);
static void f_statements_399(struct f_greenc_1fr *up_, P174 *res_398);
static void f_statement_401(struct f_greenc_1fr *up_, P174 *res_400);
static void f_labelled_statement_404(struct f_greenc_1fr *up_, P140 label_402, P174 *res_403);
static void f_task_statement_406(struct f_greenc_1fr *up_, P174 *res_405);
static void f_if_stmt_408(struct f_greenc_1fr *up_, P174 *res_407);
static void f_case_stmt_410(struct f_greenc_1fr *up_, P174 *res_409);
static void f_loop_stmt_412(struct f_greenc_1fr *up_, P174 *res_411);
static void f_compilation_414(struct f_greenc_1fr *up_, P174 *res_413);
static rt_int f_hash_416(struct f_greenc_1fr *up_, rt_gstr s_415);
static int f_listed_419(struct f_greenc_1fr *up_, P140 list_417, rt_gstr name_418);
static int f_visible_sym_421(struct f_greenc_1fr *up_, P117 y_420);
static P117 f_lookup_423(struct f_greenc_1fr *up_, rt_gstr name_422);
static int f_same_task_426(struct f_greenc_1fr *up_, P117 a_424, P117 b_425);
static P117 f_lookup_entry_429(struct f_greenc_1fr *up_, rt_gstr name_427, P117 owner_428);
static P117 f_lookup_at_432(struct f_greenc_1fr *up_, rt_gstr name_430, rt_int d_431);
static rt_int f_enclosing_depth_434(struct f_greenc_1fr *up_, rt_gstr name_433);
static void f_push_unit_436(struct f_greenc_1fr *up_, P140 name_435);
static P117 f_lookup_decl_438(struct f_greenc_1fr *up_, P174 d_437);
static int f_overloadable_440(struct f_greenc_1fr *up_, P117 y_439);
static int f_same_443(struct f_greenc_1fr *up_, P122 a_441, P122 b_442);
static P122 f_root_445(struct f_greenc_1fr *up_, P122 t_444);
static int f_derived_from_448(struct f_greenc_1fr *up_, P122 a_446, P122 b_447);
static int f_is_numeric_450(struct f_greenc_1fr *up_, P122 t_449);
static int f_is_discrete_452(struct f_greenc_1fr *up_, P122 t_451);
static int f_same_types_455(struct f_greenc_1fr *up_, P1812 a_453, P1812 b_454);
static int f_same_signature_458(struct f_greenc_1fr *up_, P1812 a_456, P1812 b_457);
static int f_distinct_overload_461(struct f_greenc_1fr *up_, P117 y_459, P117 z_460);
static void f_define_464(struct f_greenc_1fr *up_, P117 y_462, rt_int line_463);
static void f_open_scope_465(struct f_greenc_1fr *up_);
static void f_close_scope_466(struct f_greenc_1fr *up_);
static P117 f_new_sym_469(struct f_greenc_1fr *up_, rt_int kind_467, P140 name_468);
static P122 f_new_typ_471(struct f_greenc_1fr *up_, rt_int kind_470);
static P178 f_new_cons_472(struct f_greenc_1fr *up_);
static int f_bounded_474(struct f_greenc_1fr *up_, P178 c_473);
static int f_bounded_hi_476(struct f_greenc_1fr *up_, P178 c_475);
static int f_static_bounds_478(struct f_greenc_1fr *up_, P178 c_477);
static int f_discriminated_480(struct f_greenc_1fr *up_, P178 c_479);
static rt_gstr f_kind_name_482(struct f_greenc_1fr *up_, P122 t_481);
static void f_check_type_486(struct f_greenc_1fr *up_, P122 got_483, P122 want_484, rt_int line_485);
static rt_int f_field_count_488(struct f_greenc_1fr *up_, P122 t_487);
static void f_ctype_491(struct f_greenc_1fr *up_, P122 t_489, P140 *r_490);
static void f_field_decls_494(struct f_greenc_1fr *up_, P122 t_492, P140 *r_493);
static void f_declare_ctype_496(struct f_greenc_1fr *up_, P122 t_495);
static rt_int f_lit_index_499(struct f_greenc_1fr *up_, P174 lits_497, rt_gstr name_498);
static void f_manifest_503(struct f_greenc_1fr *up_, P174 e_500, rt_int *v_501, int *ok_502);
static void f_resolve_507(struct f_greenc_1fr *up_, P174 st_504, P122 *t_505, P178 *c_506);
static void f_constraint_list_511(struct f_greenc_1fr *up_, P174 st_508, P122 t_509, P178 c_510);
static void f_discriminant_constraint_515(struct f_greenc_1fr *up_, P174 st_512, P122 t_513, P178 c_514);
static void f_discrete_bounds_521(struct f_greenc_1fr *up_, P174 r_516, P122 want_517, P122 *t_518, P140 *lo_519, P140 *hi_520);
static void f_range_of_525(struct f_greenc_1fr *up_, P174 r_522, P122 t_523, P178 c_524);
static void f_fresh_typ_529(struct f_greenc_1fr *up_, rt_int kind_526, P140 name_527, P122 *t_528);
static void f_inherit_533(struct f_greenc_1fr *up_, P122 parent_530, P122 t_531, rt_int line_532);
static void f_derive_literals_536(struct f_greenc_1fr *up_, P122 t_534, rt_int line_535);
static void f_type_definition_541(struct f_greenc_1fr *up_, P174 d_537, P140 name_538, P122 *t_539, P178 *c_540);
static void f_array_type_548(struct f_greenc_1fr *up_, P174 idx_542, P174 comp_543, P140 name_544, rt_int line_545, P122 *t_546, P178 *c_547);
static void f_static_range_552(struct f_greenc_1fr *up_, P174 l_549, P174 h_550, P178 c_551);
static void f_component_place_558(struct f_greenc_1fr *up_, P122 rt_553, P1830 f_554, rt_gstr a_555, rt_gstr ct_556, P140 *r_557);
static rt_gstr f_no_value_560(struct f_greenc_1fr *up_, P122 t_559);
static int f_restricted_here_562(struct f_greenc_1fr *up_, P122 t_561);
static void f_elem_ctype_565(struct f_greenc_1fr *up_, P122 t_563, P140 *r_564);
static void f_first_index_568(struct f_greenc_1fr *up_, P122 t_566, P140 *r_567);
static int f_is_string_570(struct f_greenc_1fr *up_, P122 t_569);
static rt_gstr f_subst_573(struct f_greenc_1fr *up_, rt_gstr s_571, rt_gstr r_572);
static int f_mentions_record_575(struct f_greenc_1fr *up_, P140 s_574);
static void f_subst_cons_579(struct f_greenc_1fr *up_, P178 c_576, rt_gstr r_577, P178 *res_578);
static void f_remove_sym_581(struct f_greenc_1fr *up_, P117 y_580);
static void f_record_components_586(struct f_greenc_1fr *up_, P174 list_582, P122 t_583, P1955 g_584, rt_int line_585);
static void f_guard_cond_590(struct f_greenc_1fr *up_, P1955 g_587, P122 t_588, P140 *r_589);
static void f_arm_test_595(struct f_greenc_1fr *up_, P174 arm_591, P140 dname_592, rt_gstr d_593, P140 *x_594);
static void f_derived_type_600(struct f_greenc_1fr *up_, P174 d_596, P140 name_597, P122 *t_598, P178 *c_599);
static void f_real_type_605(struct f_greenc_1fr *up_, P174 d_601, P140 name_602, P122 *t_603, P178 *c_604);
static void f_finish_ptr_607(struct f_greenc_1fr *up_, P122 t_606);
static void f_init_storage_611(struct f_greenc_1fr *up_, rt_gstr lval_608, P122 t_609, P178 c_610);
static int f_composite_613(struct f_greenc_1fr *up_, P122 t_612);
static void f_assign_code_619(struct f_greenc_1fr *up_, rt_gstr lval_614, P122 t_615, rt_gstr v_616, P178 c_617, P140 *r_618);
static void f_copy_code_623(struct f_greenc_1fr *up_, P122 t_620, rt_gstr v_621, P140 *r_622);
static void f_eq_code_628(struct f_greenc_1fr *up_, P122 t_624, rt_gstr a_625, rt_gstr b_626, P140 *r_627);
static int f_seen_name_631(struct f_greenc_1fr *up_, P151 l_629, rt_gstr s_630);
static void f_emit_helpers_632(struct f_greenc_1fr *up_);
static void f_helper_bodies_634(struct f_greenc_1fr *up_, P122 t_633);
static void f_storage_638(struct f_greenc_1fr *up_, rt_gstr name_635, P122 t_636, P140 *access_code_637);
static void f_bind_641(struct f_greenc_1fr *up_, P117 y_639, P140 access_code_640);
static void f_declare_subprograms_643(struct f_greenc_1fr *up_, P174 from_642);
static void f_declare_one_645(struct f_greenc_1fr *up_, P174 e_644);
static void f_elaborate_defaults_647(struct f_greenc_1fr *up_, P117 y_646);
static void f_build_subprogram_650(struct f_greenc_1fr *up_, P174 d_648, P117 *y_649);
static void f_decl_elements_652(struct f_greenc_1fr *up_, P174 decls_651);
static void f_decl_element_654(struct f_greenc_1fr *up_, P174 e_653);
static void f_decl_element_1_656(struct f_greenc_1fr *up_, P174 e_655);
static void f_pragma_decl_658(struct f_greenc_1fr *up_, P174 e_657);
static void f_resolve_object_type_662(struct f_greenc_1fr *up_, P174 st_659, P122 *t_660, P178 *c_661);
static void f_rename_subprogram_664(struct f_greenc_1fr *up_, P174 e_663);
static void f_rename_module_667(struct f_greenc_1fr *up_, P174 e_665, P174 target_666);
static void f_push_barrier_670(struct f_greenc_1fr *up_, P174 e_668, rt_int limit_669);
static void f_other_decl_672(struct f_greenc_1fr *up_, P174 e_671);
static void f_scan_labels_675(struct f_greenc_1fr *up_, P174 stmts_673, rt_gstr path_674);
static void f_scan_guarded_679(struct f_greenc_1fr *up_, P174 stmts_676, P174 hs_677, rt_gstr path_678);
static rt_int f_count_g_681(struct f_greenc_1fr *up_, rt_gstr p_680);
static void f_label_body_684(struct f_greenc_1fr *up_, P174 stmts_682, P174 hs_683);
static void f_gen_label_687(struct f_greenc_1fr *up_, P174 s_685, int goto_it_686);
static int f_is_foreign_689(struct f_greenc_1fr *up_, P174 d_688);
static void f_subprogram_body_692(struct f_greenc_1fr *up_, P174 d_690, P117 y_691);
static void f_gen_statements_694(struct f_greenc_1fr *up_, P174 stmts_693);
static void f_pop_frames_696(struct f_greenc_1fr *up_, rt_int upto_695);
static void f_push_cleanup_698(struct f_greenc_1fr *up_, rt_gstr s_697);
static void f_pop_cleanup_699(struct f_greenc_1fr *up_);
static void f_guarded_704(struct f_greenc_1fr *up_, P174 decls_700, P174 stmts_701, P174 hs_702, rt_int line_703);
static void f_exc_id_708(struct f_greenc_1fr *up_, rt_gstr name_705, rt_int line_706, P140 *r_707);
static void f_gen_statement_710(struct f_greenc_1fr *up_, P174 s_709);
static void f_slice_assign_712(struct f_greenc_1fr *up_, P174 s_711);
static void f_gen_call_714(struct f_greenc_1fr *up_, P174 s_713);
static void f_gen_if_716(struct f_greenc_1fr *up_, P174 s_715);
static void f_gen_case_718(struct f_greenc_1fr *up_, P174 s_717);
static void f_selector_range_724(struct f_greenc_1fr *up_, P174 e_719, P122 t_720, rt_int *lo_721, rt_int *hi_722, int *ok_723);
static void f_push_exit_728(struct f_greenc_1fr *up_, P140 match_725, int is_loop_726, P140 *label_727);
static void f_gen_loop_730(struct f_greenc_1fr *up_, P174 s_729);
static void f_gen_block_732(struct f_greenc_1fr *up_, P174 s_731);
static int f_exit_matches_735(struct f_greenc_1fr *up_, P174 s_733, P143 x_734);
static void f_gen_exit_737(struct f_greenc_1fr *up_, P174 s_736);
static void f_gen_return_739(struct f_greenc_1fr *up_, P174 s_738);
static void f_access_of_742(struct f_greenc_1fr *up_, P117 y_740, P140 *r_741);
static void f_link_to_745(struct f_greenc_1fr *up_, rt_int l_743, P140 *r_744);
static rt_gstr f_c_ident_747(struct f_greenc_1fr *up_, rt_gstr s_746);
static void f_deref_751(struct f_greenc_1fr *up_, rt_gstr base_748, P122 t_749, P140 *r_750);
static int f_is_object_753(struct f_greenc_1fr *up_, P174 e_752);
static int f_is_const_access_755(struct f_greenc_1fr *up_, P174 e_754);
static void f_lvalue_761(struct f_greenc_1fr *up_, P174 e_756, P140 *code_out_757, P122 *t_758, P178 *c_759, int *ro_760);
static void f_select_on_770(struct f_greenc_1fr *up_, rt_gstr base_762, P122 bt_763, P174 e_764, int *ro_765, int lv_766, P140 *code_out_767, P122 *t_768, P178 *c_769);
static void f_index_on_779(struct f_greenc_1fr *up_, rt_gstr base_771, P122 bt_772, P174 e_773, int *ro_774, int lv_775, P140 *code_out_776, P122 *t_777, P178 *c_778);
static int f_type_attribute_782(struct f_greenc_1fr *up_, P122 t_780, rt_gstr name_781);
static int f_is_type_name_784(struct f_greenc_1fr *up_, rt_gstr n_783);
static int f_is_char_lit_786(struct f_greenc_1fr *up_, P174 e_785);
static int f_is_enum_lit_788(struct f_greenc_1fr *up_, P174 e_787);
static rt_gstr f_c_string_790(struct f_greenc_1fr *up_, rt_gstr s_789);
static int f_is_literal_792(struct f_greenc_1fr *up_, P174 e_791);
static void f_range_bounds_800(struct f_greenc_1fr *up_, P174 l_793, P174 h_794, P122 want_795, rt_int line_796, P122 *t_797, P140 *lo_798, P140 *hi_799);
static void f_gexpr_805(struct f_greenc_1fr *up_, P174 e_801, P122 want_802, P122 *t_803, P140 *r_804);
static void f_gexpr_1_810(struct f_greenc_1fr *up_, P174 e_806, P122 want_807, P122 *t_808, P140 *r_809);
static void f_string_aggregate_815(struct f_greenc_1fr *up_, P174 e_811, P122 want_812, P122 *t_813, P140 *r_814);
static void f_char_literal_820(struct f_greenc_1fr *up_, P174 e_816, P122 want_817, P122 *t_818, P140 *r_819);
static void f_expanded_823(struct f_greenc_1fr *up_, P174 e_821, P174 *r_822);
static void f_gen_name_828(struct f_greenc_1fr *up_, P174 e_824, P122 want_825, P122 *t_826, P140 *r_827);
static void f_gen_unop_833(struct f_greenc_1fr *up_, P174 e_829, P122 want_830, P122 *t_831, P140 *r_832);
static int f_short_int_835(struct f_greenc_1fr *up_, P122 t_834);
static rt_gstr f_float_kind_837(struct f_greenc_1fr *up_, P122 t_836);
static void f_membership_840(struct f_greenc_1fr *up_, P174 e_838, P140 *r_839);
static void f_condition_845(struct f_greenc_1fr *up_, P174 e_841, P122 want_842, P122 *t_843, P140 *r_844);
static void f_catenation_850(struct f_greenc_1fr *up_, P174 e_846, P122 want_847, P122 *t_848, P140 *r_849);
static void f_cat_operand_855(struct f_greenc_1fr *up_, P174 x_851, P122 arrt_852, rt_int line_853, P140 *r_854);
static void f_arithmetic_860(struct f_greenc_1fr *up_, P174 e_856, P122 want_857, P122 *t_858, P140 *r_859);
static void f_fixed_operation_868(struct f_greenc_1fr *up_, P174 e_861, P122 ta_862, P122 tb_863, rt_gstr a_864, rt_gstr b_865, P122 *t_866, P140 *r_867);
static void f_gen_binop_873(struct f_greenc_1fr *up_, P174 e_869, P122 want_870, P122 *t_871, P140 *r_872);
static void f_conversion_878(struct f_greenc_1fr *up_, P174 e_874, P117 y_875, P122 *t_876, P140 *r_877);
static void f_constrain_882(struct f_greenc_1fr *up_, P117 y_879, P122 t_880, P140 *r_881);
static void f_array_conversion_889(struct f_greenc_1fr *up_, P174 e_883, P122 t_884, P122 aty_885, P178 c_886, rt_gstr a_887, P140 *r_888);
static void f_gen_attr_894(struct f_greenc_1fr *up_, P174 e_890, P122 want_891, P122 *t_892, P140 *r_893);
static void f_type_bits_898(struct f_greenc_1fr *up_, P122 t_895, P178 c_896, P140 *r_897);
static void f_object_bits_902(struct f_greenc_1fr *up_, P122 t_899, rt_gstr v_900, P140 *r_901);
static void f_numeric_attr_908(struct f_greenc_1fr *up_, P174 e_903, P122 tt_904, P178 c_905, P122 *t_906, P140 *r_907);
static void f_component_attr_912(struct f_greenc_1fr *up_, P174 e_909, P122 *t_910, P140 *r_911);
static void f_config_attr_916(struct f_greenc_1fr *up_, P174 e_913, P122 *t_914, P140 *r_915);
static void f_attr_dim_920(struct f_greenc_1fr *up_, P174 e_917, P122 arrt_918, rt_int *n_919);
static void f_object_array_attr_926(struct f_greenc_1fr *up_, P174 e_921, P122 arrt_922, rt_gstr v_923, P122 *t_924, P140 *r_925);
static void f_type_array_attr_932(struct f_greenc_1fr *up_, P174 e_927, P122 arrt_928, P178 c_929, P122 *t_930, P140 *r_931);
static void f_lit_table_935(struct f_greenc_1fr *up_, P122 t_933, P140 *r_934);
static void f_val_rep_941(struct f_greenc_1fr *up_, P174 e_936, P122 tt_937, P178 c_938, P122 *t_939, P140 *r_940);
static void f_allocator_946(struct f_greenc_1fr *up_, P174 e_942, P122 want_943, P122 *t_944, P140 *r_945);
static void f_aggregate_951(struct f_greenc_1fr *up_, P174 e_947, P122 want_948, P122 *t_949, P140 *r_950);
static void f_captured_954(struct f_greenc_1fr *up_, P126 b_952, P140 *r_953);
static P1830 f_field_at_957(struct f_greenc_1fr *up_, P122 rt_955, rt_int k_956);
static int f_names_field_960(struct f_greenc_1fr *up_, P174 x_958, P1830 f_959);
static P174 f_item_for_965(struct f_greenc_1fr *up_, P174 e_961, P122 rt_962, rt_int k_963, rt_int p_964);
static void f_arm_holds_969(struct f_greenc_1fr *up_, P174 arm_966, rt_int v_967, int *res_968);
static void f_record_aggregate_973(struct f_greenc_1fr *up_, P174 e_970, P122 rt_971, P140 *r_972);
static rt_int f_field_index_976(struct f_greenc_1fr *up_, P122 rt_974, rt_gstr name_975);
static void f_agg_component_982(struct f_greenc_1fr *up_, rt_gstr tmp_977, P122 rt_978, rt_int k_979, P174 v_980, rt_int line_981);
static void f_static_choice_986(struct f_greenc_1fr *up_, P174 x_983, rt_int *v_984, int *ok_985);
static void f_array_aggregate_991(struct f_greenc_1fr *up_, P174 e_987, P122 arrt_988, P140 bounds_989, P140 *r_990);
static void f_element_store_995(struct f_greenc_1fr *up_, rt_gstr lv_992, P122 arrt_993, rt_gstr v_994);
static void f_check_choices_999(struct f_greenc_1fr *up_, P174 e_996, P122 arrt_997, int has_others_998);
static P174 f_actual_for_1003(struct f_greenc_1fr *up_, P174 args_1000, P1812 pm_1001, P1812 first_1002);
static void f_gcall_1008(struct f_greenc_1fr *up_, P174 e_1004, int is_stmt_1005, P122 *t_1006, P140 *r_1007);
static void f_out_check_1012(struct f_greenc_1fr *up_, rt_gstr lv_1009, P122 t_1010, P178 c_1011);
static void f_var_path_1015(struct f_greenc_1fr *up_, P174 e_1013, P140 *r_1014);
static int f_paths_overlap_1018(struct f_greenc_1fr *up_, rt_gstr p_1016, rt_gstr r_1017);
static int f_mentions_1021(struct f_greenc_1fr *up_, P174 n_1019, rt_gstr name_1020);
static int f_mentions_one_1024(struct f_greenc_1fr *up_, P174 n_1022, rt_gstr name_1023);
static void f_check_aliasing_1028(struct f_greenc_1fr *up_, P174 e_1025, P117 y_1026, P174 a_1027);
static void f_gcall_with_1033(struct f_greenc_1fr *up_, P174 e_1029, P117 y_1030, P122 *t_1031, P140 *r_1032);
static void f_builtin_1040(struct f_greenc_1fr *up_, rt_gstr name_1034, P174 args_1035, rt_int line_1036, int is_stmt_1037, P122 *t_1038, P140 *r_1039);
static P117 f_lookup_path_1042(struct f_greenc_1fr *up_, rt_gstr p_1041);
static int f_is_package_1044(struct f_greenc_1fr *up_, P174 e_1043);
static P117 f_member_of_1048(struct f_greenc_1fr *up_, rt_gstr p_1045, rt_gstr name_1046, rt_int line_1047);
static int f_inside_package_1050(struct f_greenc_1fr *up_, P174 p_1049);
static void f_copy_sym_1053(struct f_greenc_1fr *up_, P117 y_1051, P117 *z_1052);
static void f_complete_private_1056(struct f_greenc_1fr *up_, P122 ph_1054, P122 full_1055);
static void f_package_spec_1058(struct f_greenc_1fr *up_, P174 e_1057);
static int f_hidden_from_1061(struct f_greenc_1fr *up_, P117 m_1059, P117 first_private_1060);
static void f_package_body_1063(struct f_greenc_1fr *up_, P174 e_1062);
static int f_use_visible_1065(struct f_greenc_1fr *up_, P117 old_1064);
static void f_use_clause_1067(struct f_greenc_1fr *up_, P174 e_1066);
static int f_usable_over_1069(struct f_greenc_1fr *up_, P117 old_1068);
static int f_same_entity_1072(struct f_greenc_1fr *up_, P117 a_1070, P117 b_1071);
static void f_fits_1077(struct f_greenc_1fr *up_, P117 y_1073, P174 args_1074, P122 want_1075, int *ok_1076);
static int f_is_builtin_1079(struct f_greenc_1fr *up_, rt_gstr n_1078);
static void f_resolve_overload_1086(struct f_greenc_1fr *up_, rt_gstr name_1080, P174 args_1081, int is_stmt_1082, P122 want_1083, rt_int line_1084, P117 *y_1085);
static int f_same_profile_1089(struct f_greenc_1fr *up_, P117 a_1087, P117 b_1088);
static void f_resolve_member_overload_1097(struct f_greenc_1fr *up_, rt_gstr p_1090, rt_gstr name_1091, P174 args_1092, int is_stmt_1093, P122 want_1094, rt_int line_1095, P117 *y_1096);
static void f_user_operator_1103(struct f_greenc_1fr *up_, P174 e_1098, P122 want_1099, P122 *t_1100, P140 *r_1101, int *done_1102);
static void f_task_p_1105(struct f_greenc_1fr *up_, P174 *res_1104);
static void f_entry_p_1107(struct f_greenc_1fr *up_, P174 *res_1106);
static void f_accept_p_1109(struct f_greenc_1fr *up_, P174 *res_1108);
static void f_delay_p_1111(struct f_greenc_1fr *up_, P174 *res_1110);
static void f_designators_1113(struct f_greenc_1fr *up_, P174 *res_1112);
static void f_parse_task_statement_1115(struct f_greenc_1fr *up_, P174 *res_1114);
static void f_path_at_1119(struct f_greenc_1fr *up_, rt_int level_1116, rt_gstr field_1117, P140 *r_1118);
static int f_is_task_name_1121(struct f_greenc_1fr *up_, rt_gstr n_1120);
static void f_task_of_1125(struct f_greenc_1fr *up_, P174 e_1122, P117 *y_1123, P174 *ix_1124);
static void f_own_index_1127(struct f_greenc_1fr *up_, P140 *r_1126);
static void f_member_1132(struct f_greenc_1fr *up_, P117 y_1128, rt_gstr arr_1129, rt_gstr i_1130, P140 *r_1131);
static void f_act_path_1135(struct f_greenc_1fr *up_, P117 y_1133, P140 *r_1134);
static void f_act_path_i_1139(struct f_greenc_1fr *up_, P117 y_1136, rt_gstr i_1137, P140 *r_1138);
static void f_entry_path_1143(struct f_greenc_1fr *up_, P117 y_1140, rt_gstr i_1141, P140 *r_1142);
static void f_declare_slot_1146(struct f_greenc_1fr *up_, rt_gstr ctype_name_1144, rt_gstr field_1145);
static void f_task_decl_1148(struct f_greenc_1fr *up_, P174 e_1147);
static void f_family_arg_struct_1149(struct f_greenc_1fr *up_);
static void f_family_bounds_1153(struct f_greenc_1fr *up_, P174 b_1150, P117 y_1151, P140 x_1152);
static void f_entry_family_slot_1158(struct f_greenc_1fr *up_, P117 y_1154, rt_gstr base_1155, rt_gstr i_1156, P140 *r_1157);
static void f_task_spec_1160(struct f_greenc_1fr *up_, P174 e_1159);
static void f_entry_decl_1162(struct f_greenc_1fr *up_, P174 e_1161);
static void f_task_body_1164(struct f_greenc_1fr *up_, P174 e_1163);
static void f_task_awaits_1167(struct f_greenc_1fr *up_, P174 decls_1165, P140 *aw_1166);
static void f_task_failure_1169(struct f_greenc_1fr *up_, P174 s_1168);
static void f_entry_sym_1173(struct f_greenc_1fr *up_, P174 e_1170, P117 *y_1171, P174 *ix_1172);
static void f_other_call_1178(struct f_greenc_1fr *up_, P174 e_1174, int is_stmt_1175, P122 *t_1176, P140 *r_1177);
static void f_other_attr_1183(struct f_greenc_1fr *up_, P174 e_1179, P117 y_1180, P122 *t_1181, P140 *r_1182);
static void f_member_attr_1187(struct f_greenc_1fr *up_, P174 e_1184, P122 *t_1185, P140 *r_1186);
static void f_task_builtin_1193(struct f_greenc_1fr *up_, rt_gstr name_1188, P174 args_1189, rt_int line_1190, P122 *t_1191, P140 *r_1192);
static void f_gen_accept_1195(struct f_greenc_1fr *up_, P174 s_1194);
static void f_member_slot_1199(struct f_greenc_1fr *up_, P117 y_1196, P174 s_1197, P140 *ent_1198);
static void f_gen_delay_ticks_1202(struct f_greenc_1fr *up_, P174 e_1200, P140 *r_1201);
static void f_gen_select_1204(struct f_greenc_1fr *up_, P174 s_1203);
static void f_family_range_1209(struct f_greenc_1fr *up_, P117 y_1205, P174 ix_1206, P140 *lo_1207, P140 *hi_1208);
static void f_task_statement_gen_1211(struct f_greenc_1fr *up_, P174 s_1210);
static P174 f_root_name_1213(struct f_greenc_1fr *up_, P174 e_1212);
static void f_check_pure_target_1216(struct f_greenc_1fr *up_, P174 target_1214, rt_int line_1215);
static int f_assigns_nonlocal_1219(struct f_greenc_1fr *up_, P174 d_1217, rt_gstr name_1218);
static int f_declares_1222(struct f_greenc_1fr *up_, P174 d_1220, rt_gstr name_1221);
static int f_scan_handlers_1226(struct f_greenc_1fr *up_, P174 h_1223, P174 d_1224, rt_gstr name_1225);
static int f_scan_assigns_1230(struct f_greenc_1fr *up_, P174 stmts_1227, P174 d_1228, rt_gstr name_1229);
static void f_check_call_rules_1233(struct f_greenc_1fr *up_, P174 e_1231, P117 y_1232);
static void f_generic_p_1235(struct f_greenc_1fr *up_, P174 *res_1234);
static void f_instantiation_1238(struct f_greenc_1fr *up_, P174 x_1236, P174 *res_1237);
static void f_generic_decl_1240(struct f_greenc_1fr *up_, P174 e_1239);
static int f_is_generic_name_1242(struct f_greenc_1fr *up_, rt_gstr n_1241);
static void f_attach_generic_body_1244(struct f_greenc_1fr *up_, P174 e_1243);
static void f_restore_generic_context_1247(struct f_greenc_1fr *up_, P174 body_node_1245, rt_int line_1246);
static P174 f_gactual_1251(struct f_greenc_1fr *up_, P174 args_1248, rt_int nth_1249, rt_gstr name_1250);
static void f_copy_node_1255(struct f_greenc_1fr *up_, P174 n_1252, P140 name_1253, P174 *r_1254);
static int f_matches_formal_1259(struct f_greenc_1fr *up_, P117 y_1256, rt_gstr name_1257, P117 fs_1258);
static void f_instantiate_1261(struct f_greenc_1fr *up_, P174 e_1260);
static void f_predef_type_1266(struct f_greenc_1fr *up_, rt_gstr name_1262, P122 t_1263, rt_gstr lo_1264, rt_gstr hi_1265);
static void f_predef_const_1270(struct f_greenc_1fr *up_, rt_gstr name_1267, P122 t_1268, rt_gstr code_text_1269);
static void f_predef_exc_1272(struct f_greenc_1fr *up_, rt_gstr name_1271);
static void f_predef_lit_1276(struct f_greenc_1fr *up_, rt_gstr name_1273, P122 t_1274, rt_int v_1275);
static void f_predefine_1277(struct f_greenc_1fr *up_);
static void f_translate_1279(struct f_greenc_1fr *up_, P174 u_1278);
static void f_print_program_1280(struct f_greenc_1fr *up_);
static void f_greenc_1(void);
static int ex_compile_error_108;
static P140 f_mk_227(struct f_greenc_1fr *up_, rt_gstr s_226) {
  struct f_mk_227fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_226 = cp_rt_gstr(s_226);
F->r_1282.lo = ((rt_int)1LL); F->r_1282.hi = ({ rt_gstr at1281 = F->s_226; at1281.hi >= at1281.lo ? at1281.hi - at1281.lo + 1 : (rt_int)0; });
F->r_1282.lo2 = 1; F->r_1282.hi2 = 1;
F->r_1282.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->r_1282));
memset(F->r_1282.p, 0xFF, (size_t)G_CNT(F->r_1282));
as_rt_gstr(&F->r_1282, F->s_226);
F->result_ = ({ rt_gstr *cell1284 = rt_alloc(sizeof(rt_gstr)); *cell1284 = cp_rt_gstr(F->r_1282); (P140)cell1284; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_new_name_230(struct f_greenc_1fr *up_, rt_gstr base_228, P140 *res_229) {
  struct f_new_name_230fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_228 = cp_rt_gstr(base_228);
F->res_229 = res_229;
F->up->serial_125 = rt_add(G_NV(F->up->serial_125), ((rt_int)1LL));
(*F->res_229) = ({ rt_gstr *cell1285 = rt_alloc(sizeof(rt_gstr)); *cell1285 = cp_rt_gstr(cat_rt_gstr(F->base_228, rt_g_s2g(rt_str_of_int(G_NV(F->up->serial_125))))); (P140)cell1285; });
goto ret_;
ret_:

  return;
}

static int f_is_letter_232(struct f_greenc_1fr *up_, int c_231) {
  struct f_is_letter_232fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_231 = c_231;
F->result_ = (((F->c_231 >= 65) && (F->c_231 <= 90)) || ((F->c_231 >= 97) && (F->c_231 <= 122)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_digit_234(struct f_greenc_1fr *up_, int c_233) {
  struct f_is_digit_234fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_233 = c_233;
F->result_ = ((F->c_233 >= 48) && (F->c_233 <= 57));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_upper_236(struct f_greenc_1fr *up_, int c_235) {
  struct f_upper_236fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_235 = c_235;
if (((F->c_235 >= 97) && (F->c_235 <= 122))) {
F->result_ = rt_range(rt_range((rt_sub(((rt_int)(F->c_235) + 1), ((rt_int)32LL)) - 1), 0, 127), 0, 127);
goto ret_;
}
F->result_ = rt_range(F->c_235, 0, 127);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_lower_s_238(struct f_greenc_1fr *up_, rt_gstr s_237) {
  struct f_lower_s_238fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_237 = cp_rt_gstr(s_237);
F->r_1286 = cp_rt_gstr(F->s_237);
{ rt_int lo1290 = ((rt_int)1LL), hi1291 = ({ rt_gstr at1288 = F->s_237; at1288.hi >= at1288.lo ? at1288.hi - at1288.lo + 1 : (rt_int)0; });
for (rt_int it1292 = lo1290; it1292 <= hi1291; it1292++) {
F->i_1289 = it1292;
if (((G_NV(({ rt_gstr ix1293 = F->r_1286; ix1293.p[rt_index(F->i_1289, ix1293.lo, ix1293.hi) - ix1293.lo]; })) >= 65) && (G_NV(({ rt_gstr ix1294 = F->r_1286; ix1294.p[rt_index(F->i_1289, ix1294.lo, ix1294.hi) - ix1294.lo]; })) <= 90))) {
(*({ rt_gstr *ix1295 = &(F->r_1286); &ix1295->p[rt_index(F->i_1289, ix1295->lo, ix1295->hi) - ix1295->lo]; })) = rt_range((rt_add(((rt_int)(G_NV(({ rt_gstr ix1296 = F->r_1286; ix1296.p[rt_index(F->i_1289, ix1296.lo, ix1296.hi) - ix1296.lo]; }))) + 1), ((rt_int)32LL)) - 1), 0, 127);
}
}
}
L_end_1287: ;
F->result_ = F->r_1286;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_upper_s_240(struct f_greenc_1fr *up_, rt_gstr s_239) {
  struct f_upper_s_240fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_239 = cp_rt_gstr(s_239);
F->r_1297 = cp_rt_gstr(F->s_239);
{ rt_int lo1301 = ((rt_int)1LL), hi1302 = ({ rt_gstr at1299 = F->s_239; at1299.hi >= at1299.lo ? at1299.hi - at1299.lo + 1 : (rt_int)0; });
for (rt_int it1303 = lo1301; it1303 <= hi1302; it1303++) {
F->i_1300 = it1303;
(*({ rt_gstr *ix1304 = &(F->r_1297); &ix1304->p[rt_index(F->i_1300, ix1304->lo, ix1304->hi) - ix1304->lo]; })) = f_upper_236(F->up, G_NV(({ rt_gstr ix1306 = F->r_1297; ix1306.p[rt_index(F->i_1300, ix1306.lo, ix1306.hi) - ix1306.lo]; })));
}
}
L_end_1298: ;
F->result_ = F->r_1297;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_operator_242(struct f_greenc_1fr *up_, rt_gstr s_241) {
  struct f_is_operator_242fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_241 = cp_rt_gstr(s_241);
F->result_ = (((((((((((((((eq_rt_gstr(F->s_241, rt_g_lit("+", 1)) || eq_rt_gstr(F->s_241, rt_g_lit("-", 1))) || eq_rt_gstr(F->s_241, rt_g_lit("*", 1))) || eq_rt_gstr(F->s_241, rt_g_lit("/", 1))) || eq_rt_gstr(F->s_241, rt_g_lit("**", 2))) || eq_rt_gstr(F->s_241, rt_g_lit("&", 1))) || eq_rt_gstr(F->s_241, rt_g_lit("=", 1))) || eq_rt_gstr(F->s_241, rt_g_lit("<", 1))) || eq_rt_gstr(F->s_241, rt_g_lit("<=", 2))) || eq_rt_gstr(F->s_241, rt_g_lit(">", 1))) || eq_rt_gstr(F->s_241, rt_g_lit(">=", 2))) || eq_rt_gstr(F->s_241, rt_g_lit("MOD", 3))) || eq_rt_gstr(F->s_241, rt_g_lit("AND", 3))) || eq_rt_gstr(F->s_241, rt_g_lit("OR", 2))) || eq_rt_gstr(F->s_241, rt_g_lit("XOR", 3))) || eq_rt_gstr(F->s_241, rt_g_lit("NOT", 3)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_c_field_244(struct f_greenc_1fr *up_, rt_gstr s_243) {
  struct f_c_field_244fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_243 = cp_rt_gstr(s_243);
F->result_ = cat_rt_gstr(f_lower_s_238(F->up, F->s_243), one_rt_gstr(95));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_q_245(struct f_greenc_1fr *up_) {
  struct f_q_245fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = rt_g_lit("\"", 1);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_fail_248(struct f_greenc_1fr *up_, rt_int line_246, rt_gstr msg_247) {
  struct f_fail_248fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_246 = line_246;
F->msg_247 = cp_rt_gstr(msg_247);
if ((G_NV(F->up->trial_155) == ((rt_int)0LL))) {
rt_g_put(rt_g_g2s(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("greenc: line ", 13), rt_g_s2g(rt_str_of_int(F->line_246))), rt_g_lit(": ", 2)), F->msg_247)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
}
rt_raise(ex_compile_error_108);
ret_:

  return;
}

static P126 f_new_buffer_249(struct f_greenc_1fr *up_) {
  struct f_new_buffer_249fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ({ R127 *cell1307 = rt_alloc(sizeof(R127)); *cell1307 = cp_R127(({ R127 ag1308; ag1308.head_ = NULL; ag1308.tail_ = NULL; ag1308; })); (P126)cell1307; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_put_to_252(struct f_greenc_1fr *up_, P126 b_250, rt_gstr s_251) {
  struct f_put_to_252fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_250 = b_250;
F->s_251 = cp_rt_gstr(s_251);
F->l_1309 = NULL;
F->l_1309 = ({ R152 *cell1310 = rt_alloc(sizeof(R152)); *cell1310 = cp_R152(({ R152 ag1311; ag1311.s_ = NULL; ag1311.next_ = NULL; ag1311; })); (P151)cell1310; });
(*(P151)rt_nil_check(F->l_1309)).s_ = f_mk_227(F->up, F->s_251);
if (((*(P126)rt_nil_check(F->b_250)).tail_ == NULL)) {
(*(P126)rt_nil_check(F->b_250)).head_ = F->l_1309;
} else {
(*(P151)rt_nil_check((*(P126)rt_nil_check(F->b_250)).tail_)).next_ = F->l_1309;
}
(*(P126)rt_nil_check(F->b_250)).tail_ = F->l_1309;
ret_:

  return;
}

static void f_emit_254(struct f_greenc_1fr *up_, rt_gstr s_253) {
  struct f_emit_254fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_253 = cp_rt_gstr(s_253);
f_put_to_252(F->up, F->up->code_136, F->s_253);
ret_:

  return;
}

static void f_print_buffer_256(struct f_greenc_1fr *up_, P126 b_255) {
  struct f_print_buffer_256fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_255 = b_255;
F->l_1312 = NULL;
F->l_1312 = (*(P126)rt_nil_check(F->b_255)).head_;
while ((F->l_1312 != NULL)) {
rt_g_put(rt_g_g2s((*(P140)rt_nil_check((*(P151)rt_nil_check(F->l_1312)).s_))));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
F->l_1312 = (*(P151)rt_nil_check(F->l_1312)).next_;
}
L_end_1313: ;
ret_:

  return;
}

static void f_splice_259(struct f_greenc_1fr *up_, P126 a_257, P126 b_258) {
  struct f_splice_259fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_257 = a_257;
F->b_258 = b_258;
if (((*(P126)rt_nil_check(F->b_258)).head_ == NULL)) {
goto ret_;
}
if (((*(P126)rt_nil_check(F->a_257)).tail_ == NULL)) {
(*(P126)rt_nil_check(F->a_257)).head_ = (*(P126)rt_nil_check(F->b_258)).head_;
} else {
(*(P151)rt_nil_check((*(P126)rt_nil_check(F->a_257)).tail_)).next_ = (*(P126)rt_nil_check(F->b_258)).head_;
}
(*(P126)rt_nil_check(F->a_257)).tail_ = (*(P126)rt_nil_check(F->b_258)).tail_;
(*(P126)rt_nil_check(F->b_258)).head_ = NULL;
(*(P126)rt_nil_check(F->b_258)).tail_ = NULL;
ret_:

  return;
}

static int f_is_reserved_261(struct f_greenc_1fr *up_, rt_gstr w_260) {
  struct f_is_reserved_261fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_260 = cp_rt_gstr(w_260);
{ rt_int sel1315 = ({ rt_gstr at1314 = F->w_260; at1314.hi >= at1314.lo ? at1314.hi - at1314.lo + 1 : (rt_int)0; });
if (0 || sel1315 == ((rt_int)2LL)) {
F->result_ = ((((((eq_rt_gstr(F->w_260, rt_g_lit("AT", 2)) || eq_rt_gstr(F->w_260, rt_g_lit("DO", 2))) || eq_rt_gstr(F->w_260, rt_g_lit("IF", 2))) || eq_rt_gstr(F->w_260, rt_g_lit("IN", 2))) || eq_rt_gstr(F->w_260, rt_g_lit("IS", 2))) || eq_rt_gstr(F->w_260, rt_g_lit("OF", 2))) || eq_rt_gstr(F->w_260, rt_g_lit("OR", 2)));
goto ret_;
} else if (0 || sel1315 == ((rt_int)3LL)) {
F->result_ = (((((((((eq_rt_gstr(F->w_260, rt_g_lit("ALL", 3)) || eq_rt_gstr(F->w_260, rt_g_lit("AND", 3))) || eq_rt_gstr(F->w_260, rt_g_lit("END", 3))) || eq_rt_gstr(F->w_260, rt_g_lit("FOR", 3))) || eq_rt_gstr(F->w_260, rt_g_lit("MOD", 3))) || eq_rt_gstr(F->w_260, rt_g_lit("NEW", 3))) || eq_rt_gstr(F->w_260, rt_g_lit("NOT", 3))) || eq_rt_gstr(F->w_260, rt_g_lit("OUT", 3))) || eq_rt_gstr(F->w_260, rt_g_lit("USE", 3))) || eq_rt_gstr(F->w_260, rt_g_lit("XOR", 3)));
goto ret_;
} else if (0 || sel1315 == ((rt_int)4LL)) {
F->result_ = ((((((((((eq_rt_gstr(F->w_260, rt_g_lit("BODY", 4)) || eq_rt_gstr(F->w_260, rt_g_lit("CASE", 4))) || eq_rt_gstr(F->w_260, rt_g_lit("ELSE", 4))) || eq_rt_gstr(F->w_260, rt_g_lit("EXIT", 4))) || eq_rt_gstr(F->w_260, rt_g_lit("GOTO", 4))) || eq_rt_gstr(F->w_260, rt_g_lit("LOOP", 4))) || eq_rt_gstr(F->w_260, rt_g_lit("NULL", 4))) || eq_rt_gstr(F->w_260, rt_g_lit("TASK", 4))) || eq_rt_gstr(F->w_260, rt_g_lit("THEN", 4))) || eq_rt_gstr(F->w_260, rt_g_lit("TYPE", 4))) || eq_rt_gstr(F->w_260, rt_g_lit("WHEN", 4)));
goto ret_;
} else if (0 || sel1315 == ((rt_int)5LL)) {
F->result_ = (((((((((eq_rt_gstr(F->w_260, rt_g_lit("ABORT", 5)) || eq_rt_gstr(F->w_260, rt_g_lit("ARRAY", 5))) || eq_rt_gstr(F->w_260, rt_g_lit("BEGIN", 5))) || eq_rt_gstr(F->w_260, rt_g_lit("DELAY", 5))) || eq_rt_gstr(F->w_260, rt_g_lit("DELTA", 5))) || eq_rt_gstr(F->w_260, rt_g_lit("ELSIF", 5))) || eq_rt_gstr(F->w_260, rt_g_lit("ENTRY", 5))) || eq_rt_gstr(F->w_260, rt_g_lit("RAISE", 5))) || eq_rt_gstr(F->w_260, rt_g_lit("RANGE", 5))) || eq_rt_gstr(F->w_260, rt_g_lit("WHILE", 5)));
goto ret_;
} else if (0 || sel1315 == ((rt_int)6LL)) {
F->result_ = ((((((((eq_rt_gstr(F->w_260, rt_g_lit("ACCEPT", 6)) || eq_rt_gstr(F->w_260, rt_g_lit("ACCESS", 6))) || eq_rt_gstr(F->w_260, rt_g_lit("ASSERT", 6))) || eq_rt_gstr(F->w_260, rt_g_lit("DIGITS", 6))) || eq_rt_gstr(F->w_260, rt_g_lit("OTHERS", 6))) || eq_rt_gstr(F->w_260, rt_g_lit("PRAGMA", 6))) || eq_rt_gstr(F->w_260, rt_g_lit("RECORD", 6))) || eq_rt_gstr(F->w_260, rt_g_lit("RETURN", 6))) || eq_rt_gstr(F->w_260, rt_g_lit("SELECT", 6)));
goto ret_;
} else if (0 || sel1315 == ((rt_int)7LL)) {
F->result_ = (((((((eq_rt_gstr(F->w_260, rt_g_lit("DECLARE", 7)) || eq_rt_gstr(F->w_260, rt_g_lit("GENERIC", 7))) || eq_rt_gstr(F->w_260, rt_g_lit("PACKAGE", 7))) || eq_rt_gstr(F->w_260, rt_g_lit("PACKING", 7))) || eq_rt_gstr(F->w_260, rt_g_lit("PRIVATE", 7))) || eq_rt_gstr(F->w_260, rt_g_lit("RENAMES", 7))) || eq_rt_gstr(F->w_260, rt_g_lit("REVERSE", 7))) || eq_rt_gstr(F->w_260, rt_g_lit("SUBTYPE", 7)));
goto ret_;
} else if (0 || sel1315 == ((rt_int)8LL)) {
F->result_ = (((eq_rt_gstr(F->w_260, rt_g_lit("CONSTANT", 8)) || eq_rt_gstr(F->w_260, rt_g_lit("FUNCTION", 8))) || eq_rt_gstr(F->w_260, rt_g_lit("INITIATE", 8))) || eq_rt_gstr(F->w_260, rt_g_lit("SEPARATE", 8)));
goto ret_;
} else if (0 || sel1315 == ((rt_int)9LL)) {
F->result_ = (eq_rt_gstr(F->w_260, rt_g_lit("EXCEPTION", 9)) || eq_rt_gstr(F->w_260, rt_g_lit("PROCEDURE", 9)));
goto ret_;
} else if (0 || sel1315 == ((rt_int)10LL)) {
F->result_ = eq_rt_gstr(F->w_260, rt_g_lit("RESTRICTED", 10));
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

static void f_add_token_265(struct f_greenc_1fr *up_, rt_int kind_262, rt_gstr s_263, rt_int ival_264) {
  struct f_add_token_265fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_262 = kind_262;
F->s_263 = cp_rt_gstr(s_263);
F->ival_264 = ival_264;
F->up->ntoks_113 = rt_add(G_NV(F->up->ntoks_113), ((rt_int)1LL));
(*({ A109 *ix1316 = &(F->up->toks_112); &ix1316->p[rt_index(G_NV(F->up->ntoks_113), ix1316->lo, ix1316->hi) - ix1316->lo]; })) = ({ R111 *cell1317 = rt_alloc(sizeof(R111)); *cell1317 = cp_R111(({ R111 ag1318; ag1318.kind_ = F->kind_262; ag1318.line_ = G_NV(F->up->src_line_115); ag1318.ival_ = F->ival_264; ag1318.s_ = NULL; ag1318; })); (P110)cell1317; });
(*(P110)rt_nil_check((*({ A109 *ix1319 = &(F->up->toks_112); &ix1319->p[rt_index(G_NV(F->up->ntoks_113), ix1319->lo, ix1319->hi) - ix1319->lo]; })))).s_ = f_mk_227(F->up, F->s_263);
ret_:

  return;
}

static rt_int f_digit_value_267(struct f_greenc_1fr *up_, int c_266) {
  struct f_digit_value_267fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_266 = c_266;
if (f_is_digit_234(F->up, F->c_266)) {
F->result_ = rt_sub(((rt_int)(F->c_266) + 1), ((rt_int)(48) + 1));
goto ret_;
}
F->result_ = rt_add(rt_sub(((rt_int)(f_upper_236(F->up, F->c_266)) + 1), ((rt_int)(65) + 1)), ((rt_int)10LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_digit_in_270(struct f_greenc_1fr *up_, int c_268, rt_int base_269) {
  struct f_digit_in_270fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_268 = c_268;
F->base_269 = base_269;
F->d_1320 = INT64_MIN;
if (f_is_digit_234(F->up, F->c_268)) {
F->d_1320 = rt_sub(((rt_int)(F->c_268) + 1), ((rt_int)(48) + 1));
} else if (((f_upper_236(F->up, F->c_268) >= 65) && (f_upper_236(F->up, F->c_268) <= 70))) {
F->d_1320 = rt_add(rt_sub(((rt_int)(f_upper_236(F->up, F->c_268)) + 1), ((rt_int)(65) + 1)), ((rt_int)10LL));
} else {
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
}
if ((G_NV(F->d_1320) >= F->base_269)) {
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
}
F->result_ = G_NV(F->d_1320);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_accumulate_274(struct f_greenc_1fr *up_, rt_int *v_271, rt_int base_272, rt_int d_273) {
  struct f_accumulate_274fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->v_271 = v_271;
F->base_272 = base_272;
F->d_273 = d_273;
if ((G_NV((*F->v_271)) > rt_quot(rt_sub(INT64_MAX, F->d_273), F->base_272))) {
f_fail_248(F->up, G_NV(F->up->src_line_115), rt_g_lit("this integer literal is too large (RM79 2.4)", 44));
}
(*F->v_271) = rt_add(rt_mul(G_NV((*F->v_271)), F->base_272), F->d_273);
ret_:

  return;
}

static void f_lex_line_276(struct f_greenc_1fr *up_, rt_gstr line_275) {
  struct f_lex_line_276fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_275 = cp_rt_gstr(line_275);
F->i_1321 = INT64_MIN;
F->i_1321 = ((rt_int)1LL);
F->j_1322 = INT64_MIN;
F->j_1322 = ((rt_int)0LL);
F->n_1323 = INT64_MIN;
F->n_1323 = ({ rt_gstr at1324 = F->line_275; at1324.hi >= at1324.lo ? at1324.hi - at1324.lo + 1 : (rt_int)0; });
F->c_1325 = INT_MIN;
F->quote_1326 = INT_MIN;
F->v_1327 = INT64_MIN;
F->d_1328 = INT64_MIN;
F->buf_1329.lo = ((rt_int)1LL); F->buf_1329.hi = ((rt_int)1000LL);
F->buf_1329.lo2 = 1; F->buf_1329.hi2 = 1;
F->buf_1329.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->buf_1329));
memset(F->buf_1329.p, 0xFF, (size_t)G_CNT(F->buf_1329));
F->bl_1331 = INT64_MIN;
while ((G_NV(F->i_1321) <= G_NV(F->n_1323))) {
F->c_1325 = rt_range(G_NV(({ rt_gstr ix1333 = F->line_275; ix1333.p[rt_index(G_NV(F->i_1321), ix1333.lo, ix1333.hi) - ix1333.lo]; })), 0, 127);
if (((((G_NV(F->c_1325) == 32) || (G_NV(F->c_1325) == 9)) || (G_NV(F->c_1325) == 13)) || (G_NV(F->c_1325) == 12))) {
F->i_1321 = rt_add(G_NV(F->i_1321), ((rt_int)1LL));
} else if ((((G_NV(F->c_1325) == 45) && (G_NV(F->i_1321) < G_NV(F->n_1323))) && (G_NV(({ rt_gstr ix1334 = F->line_275; ix1334.p[rt_index(rt_add(G_NV(F->i_1321), ((rt_int)1LL)), ix1334.lo, ix1334.hi) - ix1334.lo]; })) == 45))) {
F->i_1321 = rt_add(G_NV(F->n_1323), ((rt_int)1LL));
} else if (f_is_letter_232(F->up, G_NV(F->c_1325))) {
F->j_1322 = G_NV(F->i_1321);
F->bl_1331 = ((rt_int)0LL);
while (((G_NV(F->j_1322) <= G_NV(F->n_1323)) && ((f_is_letter_232(F->up, G_NV(({ rt_gstr ix1337 = F->line_275; ix1337.p[rt_index(G_NV(F->j_1322), ix1337.lo, ix1337.hi) - ix1337.lo]; }))) || f_is_digit_234(F->up, G_NV(({ rt_gstr ix1339 = F->line_275; ix1339.p[rt_index(G_NV(F->j_1322), ix1339.lo, ix1339.hi) - ix1339.lo]; })))) || (G_NV(({ rt_gstr ix1340 = F->line_275; ix1340.p[rt_index(G_NV(F->j_1322), ix1340.lo, ix1340.hi) - ix1340.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1341 = F->line_275; ix1341.p[rt_index(G_NV(F->j_1322), ix1341.lo, ix1341.hi) - ix1341.lo]; })) == 95)) {
if (((G_NV(F->j_1322) == G_NV(F->n_1323)) || (!(f_is_letter_232(F->up, G_NV(({ rt_gstr ix1343 = F->line_275; ix1343.p[rt_index(rt_add(G_NV(F->j_1322), ((rt_int)1LL)), ix1343.lo, ix1343.hi) - ix1343.lo]; }))) || f_is_digit_234(F->up, G_NV(({ rt_gstr ix1345 = F->line_275; ix1345.p[rt_index(rt_add(G_NV(F->j_1322), ((rt_int)1LL)), ix1345.lo, ix1345.hi) - ix1345.lo]; }))))))) {
f_fail_248(F->up, G_NV(F->up->src_line_115), rt_g_lit("an underscore in an identifier stands between two letters or digits (RM79 2.3)", 78));
}
}
F->bl_1331 = rt_add(G_NV(F->bl_1331), ((rt_int)1LL));
(*({ rt_gstr *ix1346 = &(F->buf_1329); &ix1346->p[rt_index(G_NV(F->bl_1331), ix1346->lo, ix1346->hi) - ix1346->lo]; })) = f_upper_236(F->up, G_NV(({ rt_gstr ix1348 = F->line_275; ix1348.p[rt_index(G_NV(F->j_1322), ix1348.lo, ix1348.hi) - ix1348.lo]; })));
F->j_1322 = rt_add(G_NV(F->j_1322), ((rt_int)1LL));
}
L_end_1335: ;
if (f_is_reserved_261(F->up, ({ rt_gstr sl1350 = F->buf_1329; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1331); if (l_ <= h_) { rt_index(l_, sl1350.lo, sl1350.hi); rt_index(h_, sl1350.lo, sl1350.hi); } sl1350.p += l_ - sl1350.lo; sl1350.lo = l_; sl1350.hi = h_; sl1350; }))) {
f_add_token_265(F->up, ((rt_int)2LL), ({ rt_gstr sl1352 = F->buf_1329; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1331); if (l_ <= h_) { rt_index(l_, sl1352.lo, sl1352.hi); rt_index(h_, sl1352.lo, sl1352.hi); } sl1352.p += l_ - sl1352.lo; sl1352.lo = l_; sl1352.hi = h_; sl1352; }), ((rt_int)0LL));
} else {
f_add_token_265(F->up, ((rt_int)1LL), ({ rt_gstr sl1354 = F->buf_1329; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1331); if (l_ <= h_) { rt_index(l_, sl1354.lo, sl1354.hi); rt_index(h_, sl1354.lo, sl1354.hi); } sl1354.p += l_ - sl1354.lo; sl1354.lo = l_; sl1354.hi = h_; sl1354; }), ((rt_int)0LL));
}
F->i_1321 = G_NV(F->j_1322);
} else if (f_is_digit_234(F->up, G_NV(F->c_1325))) {
F->j_1322 = G_NV(F->i_1321);
F->v_1327 = ((rt_int)0LL);
F->bl_1331 = ((rt_int)0LL);
while (((G_NV(F->j_1322) <= G_NV(F->n_1323)) && (f_is_digit_234(F->up, G_NV(({ rt_gstr ix1357 = F->line_275; ix1357.p[rt_index(G_NV(F->j_1322), ix1357.lo, ix1357.hi) - ix1357.lo]; }))) || (G_NV(({ rt_gstr ix1358 = F->line_275; ix1358.p[rt_index(G_NV(F->j_1322), ix1358.lo, ix1358.hi) - ix1358.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1359 = F->line_275; ix1359.p[rt_index(G_NV(F->j_1322), ix1359.lo, ix1359.hi) - ix1359.lo]; })) == 95)) {
if (((G_NV(F->j_1322) == G_NV(F->n_1323)) || (!f_is_digit_234(F->up, G_NV(({ rt_gstr ix1361 = F->line_275; ix1361.p[rt_index(rt_add(G_NV(F->j_1322), ((rt_int)1LL)), ix1361.lo, ix1361.hi) - ix1361.lo]; })))))) {
f_fail_248(F->up, G_NV(F->up->src_line_115), rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
} else {
f_accumulate_274(F->up, &F->v_1327, ((rt_int)10LL), rt_sub(((rt_int)(G_NV(({ rt_gstr ix1363 = F->line_275; ix1363.p[rt_index(G_NV(F->j_1322), ix1363.lo, ix1363.hi) - ix1363.lo]; }))) + 1), ((rt_int)(48) + 1)));
F->bl_1331 = rt_add(G_NV(F->bl_1331), ((rt_int)1LL));
(*({ rt_gstr *ix1364 = &(F->buf_1329); &ix1364->p[rt_index(G_NV(F->bl_1331), ix1364->lo, ix1364->hi) - ix1364->lo]; })) = G_NV(({ rt_gstr ix1365 = F->line_275; ix1365.p[rt_index(G_NV(F->j_1322), ix1365.lo, ix1365.hi) - ix1365.lo]; }));
}
F->j_1322 = rt_add(G_NV(F->j_1322), ((rt_int)1LL));
}
L_end_1355: ;
if (((G_NV(F->j_1322) < G_NV(F->n_1323)) && ((G_NV(({ rt_gstr ix1366 = F->line_275; ix1366.p[rt_index(G_NV(F->j_1322), ix1366.lo, ix1366.hi) - ix1366.lo]; })) == 35) || ((G_NV(({ rt_gstr ix1367 = F->line_275; ix1367.p[rt_index(G_NV(F->j_1322), ix1367.lo, ix1367.hi) - ix1367.lo]; })) == 58) && (f_is_digit_234(F->up, G_NV(({ rt_gstr ix1369 = F->line_275; ix1369.p[rt_index(rt_add(G_NV(F->j_1322), ((rt_int)1LL)), ix1369.lo, ix1369.hi) - ix1369.lo]; }))) || f_is_letter_232(F->up, G_NV(({ rt_gstr ix1371 = F->line_275; ix1371.p[rt_index(rt_add(G_NV(F->j_1322), ((rt_int)1LL)), ix1371.lo, ix1371.hi) - ix1371.lo]; })))))))) {
{
F->base_1373 = INT64_MIN;
F->base_1373 = G_NV(F->v_1327);
if (((G_NV(F->base_1373) < ((rt_int)2LL)) || (G_NV(F->base_1373) > ((rt_int)16LL)))) {
f_fail_248(F->up, G_NV(F->up->src_line_115), rt_g_lit("the base of a number is between 2 and 16 (RM79 2.4)", 51));
}
F->v_1327 = ((rt_int)0LL);
F->j_1322 = rt_add(G_NV(F->j_1322), ((rt_int)1LL));
if (((G_NV(F->j_1322) > G_NV(F->n_1323)) || (f_digit_in_270(F->up, G_NV(({ rt_gstr ix1375 = F->line_275; ix1375.p[rt_index(G_NV(F->j_1322), ix1375.lo, ix1375.hi) - ix1375.lo]; })), ((rt_int)16LL)) < ((rt_int)0LL)))) {
f_fail_248(F->up, G_NV(F->up->src_line_115), rt_g_lit("a based number needs digits (RM79 2.4)", 38));
}
while (((G_NV(F->j_1322) <= G_NV(F->n_1323)) && ((f_is_letter_232(F->up, G_NV(({ rt_gstr ix1378 = F->line_275; ix1378.p[rt_index(G_NV(F->j_1322), ix1378.lo, ix1378.hi) - ix1378.lo]; }))) || f_is_digit_234(F->up, G_NV(({ rt_gstr ix1380 = F->line_275; ix1380.p[rt_index(G_NV(F->j_1322), ix1380.lo, ix1380.hi) - ix1380.lo]; })))) || (G_NV(({ rt_gstr ix1381 = F->line_275; ix1381.p[rt_index(G_NV(F->j_1322), ix1381.lo, ix1381.hi) - ix1381.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1382 = F->line_275; ix1382.p[rt_index(G_NV(F->j_1322), ix1382.lo, ix1382.hi) - ix1382.lo]; })) == 95)) {
if (((G_NV(F->j_1322) == G_NV(F->n_1323)) || (f_digit_in_270(F->up, G_NV(({ rt_gstr ix1384 = F->line_275; ix1384.p[rt_index(rt_add(G_NV(F->j_1322), ((rt_int)1LL)), ix1384.lo, ix1384.hi) - ix1384.lo]; })), ((rt_int)16LL)) < ((rt_int)0LL)))) {
f_fail_248(F->up, G_NV(F->up->src_line_115), rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
} else {
F->d_1328 = f_digit_in_270(F->up, G_NV(({ rt_gstr ix1386 = F->line_275; ix1386.p[rt_index(G_NV(F->j_1322), ix1386.lo, ix1386.hi) - ix1386.lo]; })), G_NV(F->base_1373));
if ((G_NV(F->d_1328) < ((rt_int)0LL))) {
f_fail_248(F->up, G_NV(F->up->src_line_115), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("digit ", 6), one_rt_gstr(G_NV(({ rt_gstr ix1388 = F->line_275; ix1388.p[rt_index(G_NV(F->j_1322), ix1388.lo, ix1388.hi) - ix1388.lo]; })))), rt_g_lit(" is not valid in base ", 22)), rt_g_s2g(rt_str_of_int(G_NV(F->base_1373)))), rt_g_lit(" (RM79 2.4)", 11)));
}
f_accumulate_274(F->up, &F->v_1327, G_NV(F->base_1373), G_NV(F->d_1328));
}
F->j_1322 = rt_add(G_NV(F->j_1322), ((rt_int)1LL));
}
L_end_1376: ;

}
L_end_1372: ;
f_add_token_265(F->up, ((rt_int)4LL), rt_g_s2g(rt_str_of_int(G_NV(F->v_1327))), G_NV(F->v_1327));
} else if (((G_NV(F->j_1322) < G_NV(F->n_1323)) && ((G_NV(({ rt_gstr ix1389 = F->line_275; ix1389.p[rt_index(G_NV(F->j_1322), ix1389.lo, ix1389.hi) - ix1389.lo]; })) == 46) && f_is_digit_234(F->up, G_NV(({ rt_gstr ix1391 = F->line_275; ix1391.p[rt_index(rt_add(G_NV(F->j_1322), ((rt_int)1LL)), ix1391.lo, ix1391.hi) - ix1391.lo]; })))))) {
F->bl_1331 = rt_add(G_NV(F->bl_1331), ((rt_int)1LL));
(*({ rt_gstr *ix1392 = &(F->buf_1329); &ix1392->p[rt_index(G_NV(F->bl_1331), ix1392->lo, ix1392->hi) - ix1392->lo]; })) = 46;
F->j_1322 = rt_add(G_NV(F->j_1322), ((rt_int)1LL));
while (((G_NV(F->j_1322) <= G_NV(F->n_1323)) && (f_is_digit_234(F->up, G_NV(({ rt_gstr ix1395 = F->line_275; ix1395.p[rt_index(G_NV(F->j_1322), ix1395.lo, ix1395.hi) - ix1395.lo]; }))) || (G_NV(({ rt_gstr ix1396 = F->line_275; ix1396.p[rt_index(G_NV(F->j_1322), ix1396.lo, ix1396.hi) - ix1396.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1397 = F->line_275; ix1397.p[rt_index(G_NV(F->j_1322), ix1397.lo, ix1397.hi) - ix1397.lo]; })) != 95)) {
F->bl_1331 = rt_add(G_NV(F->bl_1331), ((rt_int)1LL));
(*({ rt_gstr *ix1398 = &(F->buf_1329); &ix1398->p[rt_index(G_NV(F->bl_1331), ix1398->lo, ix1398->hi) - ix1398->lo]; })) = G_NV(({ rt_gstr ix1399 = F->line_275; ix1399.p[rt_index(G_NV(F->j_1322), ix1399.lo, ix1399.hi) - ix1399.lo]; }));
} else if (((G_NV(F->j_1322) == G_NV(F->n_1323)) || (!f_is_digit_234(F->up, G_NV(({ rt_gstr ix1401 = F->line_275; ix1401.p[rt_index(rt_add(G_NV(F->j_1322), ((rt_int)1LL)), ix1401.lo, ix1401.hi) - ix1401.lo]; })))))) {
f_fail_248(F->up, G_NV(F->up->src_line_115), rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
F->j_1322 = rt_add(G_NV(F->j_1322), ((rt_int)1LL));
}
L_end_1393: ;
if (f_exponent_ahead_279(F->up, F->line_275, G_NV(F->j_1322))) {
f_exponent_284(F->up, F->line_275, &F->j_1322, &F->buf_1329, &F->bl_1331);

}
f_add_token_265(F->up, ((rt_int)5LL), ({ rt_gstr sl1403 = F->buf_1329; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1331); if (l_ <= h_) { rt_index(l_, sl1403.lo, sl1403.hi); rt_index(h_, sl1403.lo, sl1403.hi); } sl1403.p += l_ - sl1403.lo; sl1403.lo = l_; sl1403.hi = h_; sl1403; }), ((rt_int)0LL));
} else if (f_exponent_ahead_279(F->up, F->line_275, G_NV(F->j_1322))) {
f_exponent_284(F->up, F->line_275, &F->j_1322, &F->buf_1329, &F->bl_1331);

f_add_token_265(F->up, ((rt_int)5LL), ({ rt_gstr sl1405 = F->buf_1329; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1331); if (l_ <= h_) { rt_index(l_, sl1405.lo, sl1405.hi); rt_index(h_, sl1405.lo, sl1405.hi); } sl1405.p += l_ - sl1405.lo; sl1405.lo = l_; sl1405.hi = h_; sl1405; }), ((rt_int)0LL));
} else {
f_add_token_265(F->up, ((rt_int)4LL), ({ rt_gstr sl1407 = F->buf_1329; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1331); if (l_ <= h_) { rt_index(l_, sl1407.lo, sl1407.hi); rt_index(h_, sl1407.lo, sl1407.hi); } sl1407.p += l_ - sl1407.lo; sl1407.lo = l_; sl1407.hi = h_; sl1407; }), G_NV(F->v_1327));
}
F->i_1321 = G_NV(F->j_1322);
} else if (((G_NV(F->c_1325) == 34) || (G_NV(F->c_1325) == 37))) {
F->quote_1326 = rt_range(G_NV(F->c_1325), 0, 127);
F->j_1322 = rt_add(G_NV(F->i_1321), ((rt_int)1LL));
F->bl_1331 = ((rt_int)0LL);
for (;;) {
if ((G_NV(F->j_1322) > G_NV(F->n_1323))) {
f_fail_248(F->up, G_NV(F->up->src_line_115), rt_g_lit("unterminated string", 19));
}
if ((G_NV(({ rt_gstr ix1409 = F->line_275; ix1409.p[rt_index(G_NV(F->j_1322), ix1409.lo, ix1409.hi) - ix1409.lo]; })) == G_NV(F->quote_1326))) {
if (((G_NV(F->j_1322) == G_NV(F->n_1323)) || (G_NV(({ rt_gstr ix1410 = F->line_275; ix1410.p[rt_index(rt_add(G_NV(F->j_1322), ((rt_int)1LL)), ix1410.lo, ix1410.hi) - ix1410.lo]; })) != G_NV(F->quote_1326)))) {
goto L_end_1408;
}
F->j_1322 = rt_add(G_NV(F->j_1322), ((rt_int)1LL));
} else if (((G_NV(F->quote_1326) == 37) && (G_NV(({ rt_gstr ix1411 = F->line_275; ix1411.p[rt_index(G_NV(F->j_1322), ix1411.lo, ix1411.hi) - ix1411.lo]; })) == 34))) {
f_fail_248(F->up, G_NV(F->up->src_line_115), rt_g_lit("a string bracketed by % cannot contain a quote (RM79 2.1)", 57));
}
F->bl_1331 = rt_add(G_NV(F->bl_1331), ((rt_int)1LL));
(*({ rt_gstr *ix1412 = &(F->buf_1329); &ix1412->p[rt_index(G_NV(F->bl_1331), ix1412->lo, ix1412->hi) - ix1412->lo]; })) = G_NV(({ rt_gstr ix1413 = F->line_275; ix1413.p[rt_index(G_NV(F->j_1322), ix1413.lo, ix1413.hi) - ix1413.lo]; }));
F->j_1322 = rt_add(G_NV(F->j_1322), ((rt_int)1LL));
}
L_end_1408: ;
f_add_token_265(F->up, ((rt_int)6LL), ({ rt_gstr sl1415 = F->buf_1329; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1331); if (l_ <= h_) { rt_index(l_, sl1415.lo, sl1415.hi); rt_index(h_, sl1415.lo, sl1415.hi); } sl1415.p += l_ - sl1415.lo; sl1415.lo = l_; sl1415.hi = h_; sl1415; }), ((rt_int)0LL));
F->i_1321 = rt_add(G_NV(F->j_1322), ((rt_int)1LL));
} else {
{
F->two_1417.lo = ((rt_int)1LL); F->two_1417.hi = ((rt_int)3LL);
F->two_1417.lo2 = 1; F->two_1417.hi2 = 1;
F->two_1417.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->two_1417));
memset(F->two_1417.p, 0xFF, (size_t)G_CNT(F->two_1417));
as_rt_gstr(&F->two_1417, rt_g_lit("   ", 3));
(*({ rt_gstr *ix1419 = &(F->two_1417); &ix1419->p[rt_index(((rt_int)1LL), ix1419->lo, ix1419->hi) - ix1419->lo]; })) = G_NV(F->c_1325);
if ((G_NV(F->i_1321) < G_NV(F->n_1323))) {
(*({ rt_gstr *ix1420 = &(F->two_1417); &ix1420->p[rt_index(((rt_int)2LL), ix1420->lo, ix1420->hi) - ix1420->lo]; })) = G_NV(({ rt_gstr ix1421 = F->line_275; ix1421.p[rt_index(rt_add(G_NV(F->i_1321), ((rt_int)1LL)), ix1421.lo, ix1421.hi) - ix1421.lo]; }));
}
if ((rt_add(G_NV(F->i_1321), ((rt_int)1LL)) < G_NV(F->n_1323))) {
(*({ rt_gstr *ix1422 = &(F->two_1417); &ix1422->p[rt_index(((rt_int)3LL), ix1422->lo, ix1422->hi) - ix1422->lo]; })) = G_NV(({ rt_gstr ix1423 = F->line_275; ix1423.p[rt_index(rt_add(G_NV(F->i_1321), ((rt_int)2LL)), ix1423.lo, ix1423.hi) - ix1423.lo]; }));
}
if (eq_rt_gstr(F->two_1417, rt_g_lit(":=:", 3))) {
f_add_token_265(F->up, ((rt_int)3LL), rt_g_lit(":=:", 3), ((rt_int)0LL));
F->i_1321 = rt_add(G_NV(F->i_1321), ((rt_int)3LL));
} else if ((((((((((eq_rt_gstr(({ rt_gstr sl1424 = F->two_1417; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1424.lo, sl1424.hi); rt_index(h_, sl1424.lo, sl1424.hi); } sl1424.p += l_ - sl1424.lo; sl1424.lo = l_; sl1424.hi = h_; sl1424; }), rt_g_lit(":=", 2)) || eq_rt_gstr(({ rt_gstr sl1425 = F->two_1417; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1425.lo, sl1425.hi); rt_index(h_, sl1425.lo, sl1425.hi); } sl1425.p += l_ - sl1425.lo; sl1425.lo = l_; sl1425.hi = h_; sl1425; }), rt_g_lit("=:", 2))) || eq_rt_gstr(({ rt_gstr sl1426 = F->two_1417; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1426.lo, sl1426.hi); rt_index(h_, sl1426.lo, sl1426.hi); } sl1426.p += l_ - sl1426.lo; sl1426.lo = l_; sl1426.hi = h_; sl1426; }), rt_g_lit("=>", 2))) || eq_rt_gstr(({ rt_gstr sl1427 = F->two_1417; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1427.lo, sl1427.hi); rt_index(h_, sl1427.lo, sl1427.hi); } sl1427.p += l_ - sl1427.lo; sl1427.lo = l_; sl1427.hi = h_; sl1427; }), rt_g_lit("..", 2))) || eq_rt_gstr(({ rt_gstr sl1428 = F->two_1417; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1428.lo, sl1428.hi); rt_index(h_, sl1428.lo, sl1428.hi); } sl1428.p += l_ - sl1428.lo; sl1428.lo = l_; sl1428.hi = h_; sl1428; }), rt_g_lit("**", 2))) || eq_rt_gstr(({ rt_gstr sl1429 = F->two_1417; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1429.lo, sl1429.hi); rt_index(h_, sl1429.lo, sl1429.hi); } sl1429.p += l_ - sl1429.lo; sl1429.lo = l_; sl1429.hi = h_; sl1429; }), rt_g_lit("/=", 2))) || eq_rt_gstr(({ rt_gstr sl1430 = F->two_1417; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1430.lo, sl1430.hi); rt_index(h_, sl1430.lo, sl1430.hi); } sl1430.p += l_ - sl1430.lo; sl1430.lo = l_; sl1430.hi = h_; sl1430; }), rt_g_lit("<=", 2))) || eq_rt_gstr(({ rt_gstr sl1431 = F->two_1417; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1431.lo, sl1431.hi); rt_index(h_, sl1431.lo, sl1431.hi); } sl1431.p += l_ - sl1431.lo; sl1431.lo = l_; sl1431.hi = h_; sl1431; }), rt_g_lit(">=", 2))) || eq_rt_gstr(({ rt_gstr sl1432 = F->two_1417; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1432.lo, sl1432.hi); rt_index(h_, sl1432.lo, sl1432.hi); } sl1432.p += l_ - sl1432.lo; sl1432.lo = l_; sl1432.hi = h_; sl1432; }), rt_g_lit("<<", 2))) || eq_rt_gstr(({ rt_gstr sl1433 = F->two_1417; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1433.lo, sl1433.hi); rt_index(h_, sl1433.lo, sl1433.hi); } sl1433.p += l_ - sl1433.lo; sl1433.lo = l_; sl1433.hi = h_; sl1433; }), rt_g_lit(">>", 2)))) {
f_add_token_265(F->up, ((rt_int)3LL), ({ rt_gstr sl1435 = F->two_1417; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1435.lo, sl1435.hi); rt_index(h_, sl1435.lo, sl1435.hi); } sl1435.p += l_ - sl1435.lo; sl1435.lo = l_; sl1435.hi = h_; sl1435; }), ((rt_int)0LL));
F->i_1321 = rt_add(G_NV(F->i_1321), ((rt_int)2LL));
} else if ((G_NV(F->c_1325) == 33)) {
f_add_token_265(F->up, ((rt_int)3LL), rt_g_lit("|", 1), ((rt_int)0LL));
F->i_1321 = rt_add(G_NV(F->i_1321), ((rt_int)1LL));
} else if (((((((((((((((((G_NV(F->c_1325) == 38) || (G_NV(F->c_1325) == 39)) || (G_NV(F->c_1325) == 40)) || (G_NV(F->c_1325) == 41)) || (G_NV(F->c_1325) == 42)) || (G_NV(F->c_1325) == 43)) || (G_NV(F->c_1325) == 44)) || (G_NV(F->c_1325) == 45)) || (G_NV(F->c_1325) == 46)) || (G_NV(F->c_1325) == 47)) || (G_NV(F->c_1325) == 58)) || (G_NV(F->c_1325) == 59)) || (G_NV(F->c_1325) == 60)) || (G_NV(F->c_1325) == 61)) || (G_NV(F->c_1325) == 62)) || (G_NV(F->c_1325) == 124))) {
f_add_token_265(F->up, ((rt_int)3LL), ({ rt_gstr sl1437 = F->two_1417; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)1LL); if (l_ <= h_) { rt_index(l_, sl1437.lo, sl1437.hi); rt_index(h_, sl1437.lo, sl1437.hi); } sl1437.p += l_ - sl1437.lo; sl1437.lo = l_; sl1437.hi = h_; sl1437; }), ((rt_int)0LL));
F->i_1321 = rt_add(G_NV(F->i_1321), ((rt_int)1LL));
if ((G_NV(F->c_1325) == 59)) {
f_check_include_291(F->up);
}
} else {
f_fail_248(F->up, G_NV(F->up->src_line_115), rt_g_lit("unexpected character", 20));
}

}
L_end_1416: ;
}
}
L_end_1332: ;
ret_:

  return;
}

static int f_exponent_ahead_279(struct f_greenc_1fr *up_, rt_gstr line_277, rt_int j_278) {
  struct f_exponent_ahead_279fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_277 = cp_rt_gstr(line_277);
F->j_278 = j_278;
if ((F->j_278 >= ({ rt_gstr at1438 = F->line_277; at1438.hi >= at1438.lo ? at1438.hi - at1438.lo + 1 : (rt_int)0; }))) {
F->result_ = 0;
goto ret_;
} else if (((G_NV(({ rt_gstr ix1439 = F->line_277; ix1439.p[rt_index(F->j_278, ix1439.lo, ix1439.hi) - ix1439.lo]; })) != 69) && (G_NV(({ rt_gstr ix1440 = F->line_277; ix1440.p[rt_index(F->j_278, ix1440.lo, ix1440.hi) - ix1440.lo]; })) != 101))) {
F->result_ = 0;
goto ret_;
} else if (f_is_digit_234(F->up, G_NV(({ rt_gstr ix1442 = F->line_277; ix1442.p[rt_index(rt_add(F->j_278, ((rt_int)1LL)), ix1442.lo, ix1442.hi) - ix1442.lo]; })))) {
F->result_ = 1;
goto ret_;
} else if ((rt_add(F->j_278, ((rt_int)1LL)) >= ({ rt_gstr at1443 = F->line_277; at1443.hi >= at1443.lo ? at1443.hi - at1443.lo + 1 : (rt_int)0; }))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (((G_NV(({ rt_gstr ix1444 = F->line_277; ix1444.p[rt_index(rt_add(F->j_278, ((rt_int)1LL)), ix1444.lo, ix1444.hi) - ix1444.lo]; })) == 43) || (G_NV(({ rt_gstr ix1445 = F->line_277; ix1445.p[rt_index(rt_add(F->j_278, ((rt_int)1LL)), ix1445.lo, ix1445.hi) - ix1445.lo]; })) == 45)) && f_is_digit_234(F->up, G_NV(({ rt_gstr ix1447 = F->line_277; ix1447.p[rt_index(rt_add(F->j_278, ((rt_int)2LL)), ix1447.lo, ix1447.hi) - ix1447.lo]; }))));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_exponent_284(struct f_greenc_1fr *up_, rt_gstr line_280, rt_int *j_281, rt_gstr *buf_282, rt_int *bl_283) {
  struct f_exponent_284fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_280 = cp_rt_gstr(line_280);
F->j_281 = j_281;
F->buf_282 = buf_282;
F->bl_283 = bl_283;
(*F->bl_283) = rt_add(G_NV((*F->bl_283)), ((rt_int)1LL));
(*({ rt_gstr *ix1448 = &((*F->buf_282)); &ix1448->p[rt_index(G_NV((*F->bl_283)), ix1448->lo, ix1448->hi) - ix1448->lo]; })) = 69;
(*F->j_281) = rt_add(G_NV((*F->j_281)), ((rt_int)1LL));
if (((G_NV(({ rt_gstr ix1449 = F->line_280; ix1449.p[rt_index(G_NV((*F->j_281)), ix1449.lo, ix1449.hi) - ix1449.lo]; })) == 43) || (G_NV(({ rt_gstr ix1450 = F->line_280; ix1450.p[rt_index(G_NV((*F->j_281)), ix1450.lo, ix1450.hi) - ix1450.lo]; })) == 45))) {
(*F->bl_283) = rt_add(G_NV((*F->bl_283)), ((rt_int)1LL));
(*({ rt_gstr *ix1451 = &((*F->buf_282)); &ix1451->p[rt_index(G_NV((*F->bl_283)), ix1451->lo, ix1451->hi) - ix1451->lo]; })) = G_NV(({ rt_gstr ix1452 = F->line_280; ix1452.p[rt_index(G_NV((*F->j_281)), ix1452.lo, ix1452.hi) - ix1452.lo]; }));
(*F->j_281) = rt_add(G_NV((*F->j_281)), ((rt_int)1LL));
}
while (((G_NV((*F->j_281)) <= ({ rt_gstr at1454 = F->line_280; at1454.hi >= at1454.lo ? at1454.hi - at1454.lo + 1 : (rt_int)0; })) && (f_is_digit_234(F->up, G_NV(({ rt_gstr ix1456 = F->line_280; ix1456.p[rt_index(G_NV((*F->j_281)), ix1456.lo, ix1456.hi) - ix1456.lo]; }))) || (G_NV(({ rt_gstr ix1457 = F->line_280; ix1457.p[rt_index(G_NV((*F->j_281)), ix1457.lo, ix1457.hi) - ix1457.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1458 = F->line_280; ix1458.p[rt_index(G_NV((*F->j_281)), ix1458.lo, ix1458.hi) - ix1458.lo]; })) != 95)) {
(*F->bl_283) = rt_add(G_NV((*F->bl_283)), ((rt_int)1LL));
(*({ rt_gstr *ix1459 = &((*F->buf_282)); &ix1459->p[rt_index(G_NV((*F->bl_283)), ix1459->lo, ix1459->hi) - ix1459->lo]; })) = G_NV(({ rt_gstr ix1460 = F->line_280; ix1460.p[rt_index(G_NV((*F->j_281)), ix1460.lo, ix1460.hi) - ix1460.lo]; }));
} else if (((G_NV((*F->j_281)) == ({ rt_gstr at1461 = F->line_280; at1461.hi >= at1461.lo ? at1461.hi - at1461.lo + 1 : (rt_int)0; })) || (!f_is_digit_234(F->up, G_NV(({ rt_gstr ix1463 = F->line_280; ix1463.p[rt_index(rt_add(G_NV((*F->j_281)), ((rt_int)1LL)), ix1463.lo, ix1463.hi) - ix1463.lo]; })))))) {
f_fail_248(F->up, G_NV(F->up->src_line_115), rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
(*F->j_281) = rt_add(G_NV((*F->j_281)), ((rt_int)1LL));
}
L_end_1453: ;
ret_:

  return;
}

static void f_include_open_287(struct f_greenc_1fr *up_, rt_gstr name_285, rt_int *length_286) {
  struct f_include_open_287fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_285 = cp_rt_gstr(name_285);
F->length_286 = length_286;
rt_g_include_open(rt_g_g2s(F->name_285), F->length_286);
ret_:

  return;
}

static void f_include_char_290(struct f_greenc_1fr *up_, rt_int i_288, int *c_289) {
  struct f_include_char_290fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->i_288 = i_288;
F->c_289 = c_289;
rt_g_include_char(F->i_288, F->c_289);
ret_:

  return;
}

static void f_check_include_291(struct f_greenc_1fr *up_) {
  struct f_check_include_291fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1464 = INT64_MIN;
if ((G_NV(F->up->ntoks_113) < ((rt_int)6LL))) {
goto ret_;
}
if (((G_NV((*(P110)rt_nil_check(({ A109 ix1465 = F->up->toks_112; ix1465.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)5LL)), ix1465.lo, ix1465.hi) - ix1465.lo]; }))).kind_) != ((rt_int)2LL)) || (G_NV((*(P110)rt_nil_check(({ A109 ix1466 = F->up->toks_112; ix1466.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)2LL)), ix1466.lo, ix1466.hi) - ix1466.lo]; }))).kind_) != ((rt_int)6LL)))) {
goto ret_;
} else if (((((!eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1467 = F->up->toks_112; ix1467.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)5LL)), ix1467.lo, ix1467.hi) - ix1467.lo]; }))).s_)), rt_g_lit("PRAGMA", 6))) || (!eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1468 = F->up->toks_112; ix1468.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)4LL)), ix1468.lo, ix1468.hi) - ix1468.lo]; }))).s_)), rt_g_lit("INCLUDE", 7)))) || (!eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1469 = F->up->toks_112; ix1469.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)3LL)), ix1469.lo, ix1469.hi) - ix1469.lo]; }))).s_)), rt_g_lit("(", 1)))) || (!eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1470 = F->up->toks_112; ix1470.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)1LL)), ix1470.lo, ix1470.hi) - ix1470.lo]; }))).s_)), rt_g_lit(")", 1))))) {
goto ret_;
}
f_include_open_287(F->up, (*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1472 = F->up->toks_112; ix1472.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)2LL)), ix1472.lo, ix1472.hi) - ix1472.lo]; }))).s_)), &F->n_1464);
if ((G_NV(F->n_1464) < ((rt_int)0LL))) {
f_fail_248(F->up, G_NV(F->up->src_line_115), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma INCLUDE: the file ", 25), (*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1474 = F->up->toks_112; ix1474.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)2LL)), ix1474.lo, ix1474.hi) - ix1474.lo]; }))).s_))), rt_g_lit(" cannot be read", 15)));
}
F->up->ntoks_113 = rt_sub(G_NV(F->up->ntoks_113), ((rt_int)6LL));
f_include_text_293(F->up, G_NV(F->n_1464));
ret_:

  return;
}

static void f_include_text_293(struct f_greenc_1fr *up_, rt_int n_292) {
  struct f_include_text_293fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_292 = n_292;
F->t_1475.lo = ((rt_int)1LL); F->t_1475.hi = rt_add(F->n_292, ((rt_int)1LL));
F->t_1475.lo2 = 1; F->t_1475.hi2 = 1;
F->t_1475.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->t_1475));
memset(F->t_1475.p, 0xFF, (size_t)G_CNT(F->t_1475));
F->saved_line_1477 = INT64_MIN;
F->saved_line_1477 = G_NV(F->up->src_line_115);
F->from_1478 = INT64_MIN;
F->from_1478 = ((rt_int)1LL);
{ rt_int lo1481 = ((rt_int)1LL), hi1482 = F->n_292;
for (rt_int it1483 = lo1481; it1483 <= hi1482; it1483++) {
F->k_1480 = it1483;
f_include_char_290(F->up, F->k_1480, &(*({ rt_gstr *ix1485 = &(F->t_1475); &ix1485->p[rt_index(F->k_1480, ix1485->lo, ix1485->hi) - ix1485->lo]; })));
}
}
L_end_1479: ;
F->up->src_line_115 = ((rt_int)0LL);
{ rt_int lo1488 = ((rt_int)1LL), hi1489 = F->n_292;
for (rt_int it1490 = lo1488; it1490 <= hi1489; it1490++) {
F->k_1487 = it1490;
if ((G_NV(({ rt_gstr ix1491 = F->t_1475; ix1491.p[rt_index(F->k_1487, ix1491.lo, ix1491.hi) - ix1491.lo]; })) == 10)) {
F->up->src_line_115 = rt_add(G_NV(F->up->src_line_115), ((rt_int)1LL));
f_include_line_297(F->up, F->t_1475, G_NV(F->from_1478), rt_sub(F->k_1487, ((rt_int)1LL)));
F->from_1478 = rt_add(F->k_1487, ((rt_int)1LL));
}
}
}
L_end_1486: ;
if ((G_NV(F->from_1478) <= F->n_292)) {
F->up->src_line_115 = rt_add(G_NV(F->up->src_line_115), ((rt_int)1LL));
f_include_line_297(F->up, F->t_1475, G_NV(F->from_1478), F->n_292);
}
F->up->src_line_115 = G_NV(F->saved_line_1477);
ret_:

  return;
}

static void f_include_line_297(struct f_greenc_1fr *up_, rt_gstr t_294, rt_int from_295, rt_int to_296) {
  struct f_include_line_297fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_294 = cp_rt_gstr(t_294);
F->from_295 = from_295;
F->to_296 = to_296;
F->l_1492.lo = ((rt_int)1LL); F->l_1492.hi = rt_add(rt_sub(F->to_296, F->from_295), ((rt_int)1LL));
F->l_1492.lo2 = 1; F->l_1492.hi2 = 1;
F->l_1492.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->l_1492));
memset(F->l_1492.p, 0xFF, (size_t)G_CNT(F->l_1492));
{ rt_int lo1496 = F->from_295, hi1497 = F->to_296;
for (rt_int it1498 = lo1496; it1498 <= hi1497; it1498++) {
F->k_1495 = it1498;
(*({ rt_gstr *ix1499 = &(F->l_1492); &ix1499->p[rt_index(rt_add(rt_sub(F->k_1495, F->from_295), ((rt_int)1LL)), ix1499->lo, ix1499->hi) - ix1499->lo]; })) = G_NV(({ rt_gstr ix1500 = F->t_294; ix1500.p[rt_index(F->k_1495, ix1500.lo, ix1500.hi) - ix1500.lo]; }));
}
}
L_end_1494: ;
f_lex_line_276(F->up, F->l_1492);
ret_:

  return;
}

static void f_read_source_298(struct f_greenc_1fr *up_) {
  struct f_read_source_298fr *F = rt_alloc(sizeof *F);
F->up = up_;
{ rt_frame xf1501;
if (RT_TRY(xf1501)) {
F->buf_1503.lo = ((rt_int)1LL); F->buf_1503.hi = ((rt_int)10000LL);
F->buf_1503.lo2 = 1; F->buf_1503.hi2 = 1;
F->buf_1503.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->buf_1503));
memset(F->buf_1503.p, 0xFF, (size_t)G_CNT(F->buf_1503));
F->bl_1505 = INT64_MIN;
F->bl_1505 = ((rt_int)0LL);
F->c_1506 = INT_MIN;
for (;;) {
(F->c_1506 = rt_g_getc());
if ((G_NV(F->c_1506) == 10)) {
F->up->src_line_115 = rt_add(G_NV(F->up->src_line_115), ((rt_int)1LL));
f_lex_line_276(F->up, ({ rt_gstr sl1509 = F->buf_1503; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1505); if (l_ <= h_) { rt_index(l_, sl1509.lo, sl1509.hi); rt_index(h_, sl1509.lo, sl1509.hi); } sl1509.p += l_ - sl1509.lo; sl1509.lo = l_; sl1509.hi = h_; sl1509; }));
F->bl_1505 = ((rt_int)0LL);
} else {
F->bl_1505 = rt_add(G_NV(F->bl_1505), ((rt_int)1LL));
(*({ rt_gstr *ix1510 = &(F->buf_1503); &ix1510->p[rt_index(G_NV(F->bl_1505), ix1510->lo, ix1510->hi) - ix1510->lo]; })) = G_NV(F->c_1506);
}
}
L_end_1507: ;
RT_POP(xf1501);
} else {
RT_POP(xf1501);
int x1502 = rt_xcur;
if (rt_g_aborted()) rt_raise(x1502);
if (0 || x1502 == rt_exc("END_OF_FILE")) {
if ((G_NV(F->bl_1505) > ((rt_int)0LL))) {
F->up->src_line_115 = rt_add(G_NV(F->up->src_line_115), ((rt_int)1LL));
f_lex_line_276(F->up, ({ rt_gstr sl1512 = F->buf_1503; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1505); if (l_ <= h_) { rt_index(l_, sl1512.lo, sl1512.hi); rt_index(h_, sl1512.lo, sl1512.hi); } sl1512.p += l_ - sl1512.lo; sl1512.lo = l_; sl1512.hi = h_; sl1512; }));
}
f_add_token_265(F->up, ((rt_int)0LL), rt_g_lit("<end>", 5), ((rt_int)0LL));
} else {
rt_raise(x1502);
}
}
}
ret_:

  return;
}

static P174 f_nn_301(struct f_greenc_1fr *up_, rt_int kind_299, rt_int line_300) {
  struct f_nn_301fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_299 = kind_299;
F->line_300 = line_300;
F->result_ = ({ R175 *cell1513 = rt_alloc(sizeof(R175)); *cell1513 = cp_R175(({ R175 ag1514; ag1514.kind_ = F->kind_299; ag1514.line_ = F->line_300; ag1514.ival_ = ((rt_int)0LL); ag1514.flag_ = ((rt_int)0LL); ag1514.name_ = NULL; ag1514.tag_ = NULL; ag1514.a_ = NULL; ag1514.b_ = NULL; ag1514.c_ = NULL; ag1514.d_ = NULL; ag1514.e_ = NULL; ag1514.next_ = NULL; ag1514.formal_ = NULL; ag1514; })); (P174)cell1513; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_append_305(struct f_greenc_1fr *up_, P174 *head_302, P174 *tail_303, P174 x_304) {
  struct f_append_305fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->head_302 = head_302;
F->tail_303 = tail_303;
F->x_304 = x_304;
if ((F->x_304 == NULL)) {
goto ret_;
}
if (((*F->head_302) == NULL)) {
(*F->head_302) = F->x_304;
} else {
(*(P174)rt_nil_check((*F->tail_303))).next_ = F->x_304;
}
(*F->tail_303) = F->x_304;
while (((*(P174)rt_nil_check((*F->tail_303))).next_ != NULL)) {
(*F->tail_303) = (*(P174)rt_nil_check((*F->tail_303))).next_;
}
L_end_1515: ;
ret_:

  return;
}

static rt_int f_list_len_307(struct f_greenc_1fr *up_, P174 l_306) {
  struct f_list_len_307fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_306 = l_306;
F->n_1516 = INT64_MIN;
F->n_1516 = ((rt_int)0LL);
F->p_1517 = NULL;
F->p_1517 = F->l_306;
while ((F->p_1517 != NULL)) {
F->n_1516 = rt_add(G_NV(F->n_1516), ((rt_int)1LL));
F->p_1517 = (*(P174)rt_nil_check(F->p_1517)).next_;
}
L_end_1518: ;
F->result_ = G_NV(F->n_1516);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_cur_line_308(struct f_greenc_1fr *up_) {
  struct f_cur_line_308fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = G_NV((*(P110)rt_nil_check(({ A109 ix1519 = F->up->toks_112; ix1519.p[rt_index(G_NV(F->up->tpos_114), ix1519.lo, ix1519.hi) - ix1519.lo]; }))).line_);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_kw_310(struct f_greenc_1fr *up_, rt_gstr w_309) {
  struct f_at_kw_310fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_309 = cp_rt_gstr(w_309);
if ((!(G_NV((*(P110)rt_nil_check(({ A109 ix1520 = F->up->toks_112; ix1520.p[rt_index(G_NV(F->up->tpos_114), ix1520.lo, ix1520.hi) - ix1520.lo]; }))).kind_) == ((rt_int)2LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1521 = F->up->toks_112; ix1521.p[rt_index(G_NV(F->up->tpos_114), ix1521.lo, ix1521.hi) - ix1521.lo]; }))).s_)), F->w_309);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_op_312(struct f_greenc_1fr *up_, rt_gstr w_311) {
  struct f_at_op_312fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_311 = cp_rt_gstr(w_311);
if ((!(G_NV((*(P110)rt_nil_check(({ A109 ix1522 = F->up->toks_112; ix1522.p[rt_index(G_NV(F->up->tpos_114), ix1522.lo, ix1522.hi) - ix1522.lo]; }))).kind_) == ((rt_int)3LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1523 = F->up->toks_112; ix1523.p[rt_index(G_NV(F->up->tpos_114), ix1523.lo, ix1523.hi) - ix1523.lo]; }))).s_)), F->w_311);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_kind_314(struct f_greenc_1fr *up_, rt_int k_313) {
  struct f_at_kind_314fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_313 = k_313;
F->result_ = (G_NV((*(P110)rt_nil_check(({ A109 ix1524 = F->up->toks_112; ix1524.p[rt_index(G_NV(F->up->tpos_114), ix1524.lo, ix1524.hi) - ix1524.lo]; }))).kind_) == F->k_313);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_kind_at_316(struct f_greenc_1fr *up_, rt_int k_315) {
  struct f_kind_at_316fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_315 = k_315;
if ((rt_add(G_NV(F->up->tpos_114), F->k_315) > G_NV(F->up->ntoks_113))) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
F->result_ = G_NV((*(P110)rt_nil_check(({ A109 ix1525 = F->up->toks_112; ix1525.p[rt_index(rt_add(G_NV(F->up->tpos_114), F->k_315), ix1525.lo, ix1525.hi) - ix1525.lo]; }))).kind_);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_text_at_318(struct f_greenc_1fr *up_, rt_int k_317) {
  struct f_text_at_318fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_317 = k_317;
if ((rt_add(G_NV(F->up->tpos_114), F->k_317) > G_NV(F->up->ntoks_113))) {
F->result_ = rt_g_lit("", 0);
goto ret_;
}
F->result_ = (*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1526 = F->up->toks_112; ix1526.p[rt_index(rt_add(G_NV(F->up->tpos_114), F->k_317), ix1526.lo, ix1526.hi) - ix1526.lo]; }))).s_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_perror_320(struct f_greenc_1fr *up_, rt_gstr msg_319) {
  struct f_perror_320fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->msg_319 = cp_rt_gstr(msg_319);
f_fail_248(F->up, G_NV((*(P110)rt_nil_check(({ A109 ix1529 = F->up->toks_112; ix1529.p[rt_index(G_NV(F->up->tpos_114), ix1529.lo, ix1529.hi) - ix1529.lo]; }))).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->msg_319, rt_g_lit(" (at ", 5)), (*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1530 = F->up->toks_112; ix1530.p[rt_index(G_NV(F->up->tpos_114), ix1530.lo, ix1530.hi) - ix1530.lo]; }))).s_))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_skip_321(struct f_greenc_1fr *up_) {
  struct f_skip_321fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->tpos_114 = rt_add(G_NV(F->up->tpos_114), ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_kw_323(struct f_greenc_1fr *up_, rt_gstr w_322) {
  struct f_expect_kw_323fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_322 = cp_rt_gstr(w_322);
if ((!f_at_kw_310(F->up, F->w_322))) {
f_perror_320(F->up, cat_rt_gstr(rt_g_lit("expected ", 9), F->w_322));
}
F->up->tpos_114 = rt_add(G_NV(F->up->tpos_114), ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_op_325(struct f_greenc_1fr *up_, rt_gstr w_324) {
  struct f_expect_op_325fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_324 = cp_rt_gstr(w_324);
if ((!f_at_op_312(F->up, F->w_324))) {
f_perror_320(F->up, cat_rt_gstr(rt_g_lit("expected ", 9), F->w_324));
}
F->up->tpos_114 = rt_add(G_NV(F->up->tpos_114), ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_id_327(struct f_greenc_1fr *up_, P140 *res_326) {
  struct f_expect_id_327fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_326 = res_326;
if ((!f_at_kind_314(F->up, ((rt_int)1LL)))) {
f_perror_320(F->up, rt_g_lit("expected an identifier", 22));
}
F->up->tpos_114 = rt_add(G_NV(F->up->tpos_114), ((rt_int)1LL));
(*F->res_326) = (*(P110)rt_nil_check(({ A109 ix1531 = F->up->toks_112; ix1531.p[rt_index(rt_sub(G_NV(F->up->tpos_114), ((rt_int)1LL)), ix1531.lo, ix1531.hi) - ix1531.lo]; }))).s_;
goto ret_;
ret_:

  return;
}

static void f_name_node_329(struct f_greenc_1fr *up_, P174 *res_328) {
  struct f_name_node_329fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_328 = res_328;
F->x_1532 = NULL;
F->x_1532 = f_nn_301(F->up, ((rt_int)5LL), f_cur_line_308(F->up));
f_expect_id_327(F->up, &(*(P174)rt_nil_check(F->x_1532)).name_);
(*F->res_328) = F->x_1532;
goto ret_;
ret_:

  return;
}

static void f_id_list_331(struct f_greenc_1fr *up_, P174 *res_330) {
  struct f_id_list_331fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_330 = res_330;
F->head_1533 = NULL;
F->tail_1534 = NULL;
F->x_1535 = NULL;
f_name_node_329(F->up, &F->x_1535);
f_append_305(F->up, &F->head_1533, &F->tail_1534, F->x_1535);
while (f_at_op_312(F->up, rt_g_lit(",", 1))) {
f_skip_321(F->up);
f_name_node_329(F->up, &F->x_1535);
f_append_305(F->up, &F->head_1533, &F->tail_1534, F->x_1535);
}
L_end_1536: ;
(*F->res_330) = F->head_1533;
goto ret_;
ret_:

  return;
}

static P174 f_binop_336(struct f_greenc_1fr *up_, P140 op_332, P174 l_333, P174 r_334, rt_int line_335) {
  struct f_binop_336fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->op_332 = op_332;
F->l_333 = l_333;
F->r_334 = r_334;
F->line_335 = line_335;
F->x_1537 = NULL;
F->x_1537 = f_nn_301(F->up, ((rt_int)7LL), F->line_335);
(*(P174)rt_nil_check(F->x_1537)).name_ = F->op_332;
(*(P174)rt_nil_check(F->x_1537)).a_ = F->l_333;
(*(P174)rt_nil_check(F->x_1537)).b_ = F->r_334;
F->result_ = F->x_1537;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_expr_338(struct f_greenc_1fr *up_, P174 *res_337) {
  struct f_expr_338fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_337 = res_337;
F->l_1538 = NULL;
F->r_1539 = NULL;
F->op_1540 = NULL;
F->first_op_1541 = NULL;
F->line_1542 = INT64_MIN;
F->short_1543 = INT_MIN;
F->short_1543 = 0;
F->first_short_1544 = INT_MIN;
F->first_short_1544 = 0;
f_relation_342(F->up, &F->l_1538);
while (((f_at_kw_310(F->up, rt_g_lit("AND", 3)) || f_at_kw_310(F->up, rt_g_lit("OR", 2))) || f_at_kw_310(F->up, rt_g_lit("XOR", 3)))) {
F->op_1540 = (*(P110)rt_nil_check(({ A109 ix1546 = F->up->toks_112; ix1546.p[rt_index(G_NV(F->up->tpos_114), ix1546.lo, ix1546.hi) - ix1546.lo]; }))).s_;
F->line_1542 = f_cur_line_308(F->up);
f_skip_321(F->up);
F->short_1543 = 0;
if ((eq_rt_gstr((*(P140)rt_nil_check(F->op_1540)), rt_g_lit("AND", 3)) && f_at_kw_310(F->up, rt_g_lit("THEN", 4)))) {
f_skip_321(F->up);
F->short_1543 = 1;
} else if ((eq_rt_gstr((*(P140)rt_nil_check(F->op_1540)), rt_g_lit("OR", 2)) && f_at_kw_310(F->up, rt_g_lit("ELSE", 4)))) {
f_skip_321(F->up);
F->short_1543 = 1;
}
if ((F->first_op_1541 == NULL)) {
F->first_op_1541 = F->op_1540;
F->first_short_1544 = G_NV(F->short_1543);
} else if (((!eq_rt_gstr((*(P140)rt_nil_check(F->first_op_1541)), (*(P140)rt_nil_check(F->op_1540)))) || (G_NV(F->first_short_1544) != G_NV(F->short_1543)))) {
f_fail_248(F->up, G_NV(F->line_1542), rt_g_lit("logical operators of different kinds are not mixed without parentheses (RM79 4.4)", 81));
}
f_relation_342(F->up, &F->r_1539);
F->l_1538 = f_binop_336(F->up, F->op_1540, F->l_1538, F->r_1539, G_NV(F->line_1542));
if (G_NV(F->short_1543)) {
(*(P174)rt_nil_check(F->l_1538)).ival_ = ((rt_int)1LL);
}
}
L_end_1545: ;
(*F->res_337) = F->l_1538;
goto ret_;
ret_:

  return;
}

static int f_is_rel_340(struct f_greenc_1fr *up_, rt_gstr s_339) {
  struct f_is_rel_340fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_339 = cp_rt_gstr(s_339);
F->result_ = (((((eq_rt_gstr(F->s_339, rt_g_lit("=", 1)) || eq_rt_gstr(F->s_339, rt_g_lit("/=", 2))) || eq_rt_gstr(F->s_339, rt_g_lit("<", 1))) || eq_rt_gstr(F->s_339, rt_g_lit("<=", 2))) || eq_rt_gstr(F->s_339, rt_g_lit(">", 1))) || eq_rt_gstr(F->s_339, rt_g_lit(">=", 2)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_relation_342(struct f_greenc_1fr *up_, P174 *res_341) {
  struct f_relation_342fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_341 = res_341;
F->l_1547 = NULL;
F->r_1548 = NULL;
F->lo_1549 = NULL;
F->hi_1550 = NULL;
F->t_1551 = NULL;
F->op_1552 = NULL;
F->line_1553 = INT64_MIN;
F->line_1553 = f_cur_line_308(F->up);
F->neg_1554 = INT_MIN;
F->neg_1554 = 0;
f_simple_expr_346(F->up, &F->l_1547);
if ((f_at_kind_314(F->up, ((rt_int)3LL)) && f_is_rel_340(F->up, (*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1556 = F->up->toks_112; ix1556.p[rt_index(G_NV(F->up->tpos_114), ix1556.lo, ix1556.hi) - ix1556.lo]; }))).s_))))) {
F->op_1552 = (*(P110)rt_nil_check(({ A109 ix1557 = F->up->toks_112; ix1557.p[rt_index(G_NV(F->up->tpos_114), ix1557.lo, ix1557.hi) - ix1557.lo]; }))).s_;
f_skip_321(F->up);
f_simple_expr_346(F->up, &F->r_1548);
F->l_1547 = f_binop_336(F->up, F->op_1552, F->l_1547, F->r_1548, G_NV(F->line_1553));
(*F->res_341) = F->l_1547;
goto ret_;
}
if (((f_at_kw_310(F->up, rt_g_lit("NOT", 3)) && (f_kind_at_316(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_318(F->up, ((rt_int)1LL)), rt_g_lit("IN", 2)))) {
f_skip_321(F->up);
F->neg_1554 = 1;
}
if (f_at_kw_310(F->up, rt_g_lit("IN", 2))) {
f_skip_321(F->up);
f_simple_expr_346(F->up, &F->lo_1549);
if (f_at_op_312(F->up, rt_g_lit("..", 2))) {
f_skip_321(F->up);
f_simple_expr_346(F->up, &F->hi_1550);
F->t_1551 = f_nn_301(F->up, ((rt_int)14LL), G_NV(F->line_1553));
(*(P174)rt_nil_check(F->t_1551)).a_ = F->lo_1549;
(*(P174)rt_nil_check(F->t_1551)).b_ = F->hi_1550;
} else if (((G_NV((*(P174)rt_nil_check(F->lo_1549)).kind_) == ((rt_int)5LL)) || (G_NV((*(P174)rt_nil_check(F->lo_1549)).kind_) == ((rt_int)9LL)))) {
F->t_1551 = f_nn_301(F->up, ((rt_int)80LL), G_NV(F->line_1553));
(*(P174)rt_nil_check(F->t_1551)).name_ = (*(P174)rt_nil_check(F->lo_1549)).name_;
if ((G_NV((*(P174)rt_nil_check(F->lo_1549)).kind_) == ((rt_int)9LL))) {
(*(P174)rt_nil_check(F->t_1551)).tag_ = f_mk_227(F->up, f_path_of_344(F->up, (*(P174)rt_nil_check(F->lo_1549)).a_));
}
if (f_at_kw_310(F->up, rt_g_lit("RANGE", 5))) {
f_skip_321(F->up);
F->r_1548 = f_nn_301(F->up, ((rt_int)14LL), G_NV(F->line_1553));
f_simple_expr_346(F->up, &(*(P174)rt_nil_check(F->r_1548)).a_);
f_expect_op_325(F->up, rt_g_lit("..", 2));
f_simple_expr_346(F->up, &(*(P174)rt_nil_check(F->r_1548)).b_);
(*(P174)rt_nil_check(F->t_1551)).a_ = F->r_1548;
(*(P174)rt_nil_check(F->t_1551)).flag_ = ((rt_int)1LL);
} else if ((f_at_kw_310(F->up, rt_g_lit("DIGITS", 6)) || f_at_kw_310(F->up, rt_g_lit("DELTA", 5)))) {
f_skip_321(F->up);
f_simple_expr_346(F->up, &(*(P174)rt_nil_check(F->t_1551)).b_);
(*(P174)rt_nil_check(F->t_1551)).flag_ = ((rt_int)3LL);
}
} else {
f_perror_320(F->up, rt_g_lit("membership is in a range or a type mark (RM79 4.5.2)", 52));
}
F->op_1552 = f_mk_227(F->up, rt_g_lit("IN", 2));
F->l_1547 = f_binop_336(F->up, F->op_1552, F->l_1547, F->t_1551, G_NV(F->line_1553));
if (G_NV(F->neg_1554)) {
F->t_1551 = f_nn_301(F->up, ((rt_int)6LL), G_NV(F->line_1553));
(*(P174)rt_nil_check(F->t_1551)).name_ = f_mk_227(F->up, rt_g_lit("NOT", 3));
(*(P174)rt_nil_check(F->t_1551)).a_ = F->l_1547;
(*F->res_341) = F->t_1551;
goto ret_;
}
}
(*F->res_341) = F->l_1547;
goto ret_;
ret_:

  return;
}

static rt_gstr f_path_of_344(struct f_greenc_1fr *up_, P174 e_343) {
  struct f_path_of_344fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_343 = e_343;
if ((G_NV((*(P174)rt_nil_check(F->e_343)).kind_) == ((rt_int)9LL))) {
F->result_ = cat_rt_gstr(cat_rt_gstr(f_path_of_344(F->up, (*(P174)rt_nil_check(F->e_343)).a_), one_rt_gstr(46)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_343)).name_)));
goto ret_;
}
F->result_ = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_343)).name_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_simple_expr_346(struct f_greenc_1fr *up_, P174 *res_345) {
  struct f_simple_expr_346fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_345 = res_345;
F->l_1558 = NULL;
F->r_1559 = NULL;
F->op_1560 = NULL;
F->line_1561 = INT64_MIN;
F->line_1561 = f_cur_line_308(F->up);
if (((f_at_op_312(F->up, rt_g_lit("+", 1)) || f_at_op_312(F->up, rt_g_lit("-", 1))) || f_at_kw_310(F->up, rt_g_lit("NOT", 3)))) {
F->op_1560 = (*(P110)rt_nil_check(({ A109 ix1562 = F->up->toks_112; ix1562.p[rt_index(G_NV(F->up->tpos_114), ix1562.lo, ix1562.hi) - ix1562.lo]; }))).s_;
f_skip_321(F->up);
f_term_348(F->up, &F->r_1559);
F->l_1558 = f_nn_301(F->up, ((rt_int)6LL), G_NV(F->line_1561));
(*(P174)rt_nil_check(F->l_1558)).name_ = F->op_1560;
(*(P174)rt_nil_check(F->l_1558)).a_ = F->r_1559;
} else {
f_term_348(F->up, &F->l_1558);
}
while (((f_at_op_312(F->up, rt_g_lit("+", 1)) || f_at_op_312(F->up, rt_g_lit("-", 1))) || f_at_op_312(F->up, rt_g_lit("&", 1)))) {
F->op_1560 = (*(P110)rt_nil_check(({ A109 ix1564 = F->up->toks_112; ix1564.p[rt_index(G_NV(F->up->tpos_114), ix1564.lo, ix1564.hi) - ix1564.lo]; }))).s_;
f_skip_321(F->up);
f_term_348(F->up, &F->r_1559);
F->l_1558 = f_binop_336(F->up, F->op_1560, F->l_1558, F->r_1559, G_NV(F->line_1561));
}
L_end_1563: ;
(*F->res_345) = F->l_1558;
goto ret_;
ret_:

  return;
}

static void f_term_348(struct f_greenc_1fr *up_, P174 *res_347) {
  struct f_term_348fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_347 = res_347;
F->l_1565 = NULL;
F->r_1566 = NULL;
F->op_1567 = NULL;
F->line_1568 = INT64_MIN;
F->line_1568 = f_cur_line_308(F->up);
f_factor_350(F->up, &F->l_1565);
while (((f_at_op_312(F->up, rt_g_lit("*", 1)) || f_at_op_312(F->up, rt_g_lit("/", 1))) || f_at_kw_310(F->up, rt_g_lit("MOD", 3)))) {
F->op_1567 = (*(P110)rt_nil_check(({ A109 ix1570 = F->up->toks_112; ix1570.p[rt_index(G_NV(F->up->tpos_114), ix1570.lo, ix1570.hi) - ix1570.lo]; }))).s_;
f_skip_321(F->up);
f_factor_350(F->up, &F->r_1566);
F->l_1565 = f_binop_336(F->up, F->op_1567, F->l_1565, F->r_1566, G_NV(F->line_1568));
}
L_end_1569: ;
(*F->res_347) = F->l_1565;
goto ret_;
ret_:

  return;
}

static void f_factor_350(struct f_greenc_1fr *up_, P174 *res_349) {
  struct f_factor_350fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_349 = res_349;
F->l_1571 = NULL;
F->r_1572 = NULL;
F->op_1573 = NULL;
F->line_1574 = INT64_MIN;
F->line_1574 = f_cur_line_308(F->up);
f_primary_352(F->up, &F->l_1571);
if (f_at_op_312(F->up, rt_g_lit("**", 2))) {
F->op_1573 = (*(P110)rt_nil_check(({ A109 ix1575 = F->up->toks_112; ix1575.p[rt_index(G_NV(F->up->tpos_114), ix1575.lo, ix1575.hi) - ix1575.lo]; }))).s_;
f_skip_321(F->up);
f_primary_352(F->up, &F->r_1572);
F->l_1571 = f_binop_336(F->up, F->op_1573, F->l_1571, F->r_1572, G_NV(F->line_1574));
}
(*F->res_349) = F->l_1571;
goto ret_;
ret_:

  return;
}

static void f_primary_352(struct f_greenc_1fr *up_, P174 *res_351) {
  struct f_primary_352fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_351 = res_351;
F->x_1576 = NULL;
F->line_1577 = INT64_MIN;
F->line_1577 = f_cur_line_308(F->up);
if (f_at_kind_314(F->up, ((rt_int)4LL))) {
F->x_1576 = f_nn_301(F->up, ((rt_int)1LL), G_NV(F->line_1577));
(*(P174)rt_nil_check(F->x_1576)).ival_ = G_NV((*(P110)rt_nil_check(({ A109 ix1578 = F->up->toks_112; ix1578.p[rt_index(G_NV(F->up->tpos_114), ix1578.lo, ix1578.hi) - ix1578.lo]; }))).ival_);
(*(P174)rt_nil_check(F->x_1576)).name_ = (*(P110)rt_nil_check(({ A109 ix1579 = F->up->toks_112; ix1579.p[rt_index(G_NV(F->up->tpos_114), ix1579.lo, ix1579.hi) - ix1579.lo]; }))).s_;
f_skip_321(F->up);
(*F->res_351) = F->x_1576;
goto ret_;
}
if (f_at_kind_314(F->up, ((rt_int)5LL))) {
F->x_1576 = f_nn_301(F->up, ((rt_int)2LL), G_NV(F->line_1577));
(*(P174)rt_nil_check(F->x_1576)).name_ = (*(P110)rt_nil_check(({ A109 ix1580 = F->up->toks_112; ix1580.p[rt_index(G_NV(F->up->tpos_114), ix1580.lo, ix1580.hi) - ix1580.lo]; }))).s_;
f_skip_321(F->up);
(*F->res_351) = F->x_1576;
goto ret_;
}
if (f_at_kind_314(F->up, ((rt_int)6LL))) {
F->x_1576 = f_nn_301(F->up, ((rt_int)3LL), G_NV(F->line_1577));
(*(P174)rt_nil_check(F->x_1576)).name_ = (*(P110)rt_nil_check(({ A109 ix1581 = F->up->toks_112; ix1581.p[rt_index(G_NV(F->up->tpos_114), ix1581.lo, ix1581.hi) - ix1581.lo]; }))).s_;
f_skip_321(F->up);
(*F->res_351) = F->x_1576;
goto ret_;
}
if (f_at_kw_310(F->up, rt_g_lit("NULL", 4))) {
f_skip_321(F->up);
F->x_1576 = f_nn_301(F->up, ((rt_int)4LL), G_NV(F->line_1577));
(*F->res_351) = F->x_1576;
goto ret_;
}
if (f_at_kw_310(F->up, rt_g_lit("NEW", 3))) {
f_skip_321(F->up);
F->x_1576 = f_nn_301(F->up, ((rt_int)11LL), G_NV(F->line_1577));
f_expect_id_327(F->up, &(*(P174)rt_nil_check(F->x_1576)).name_);
if (f_at_op_312(F->up, rt_g_lit("(", 1))) {
f_agg_or_paren_354(F->up, &(*(P174)rt_nil_check(F->x_1576)).a_);
}
(*F->res_351) = F->x_1576;
goto ret_;
}
if (f_at_op_312(F->up, rt_g_lit("(", 1))) {
f_agg_or_paren_354(F->up, &F->x_1576);
(*F->res_351) = F->x_1576;
goto ret_;
}
if (f_at_kind_314(F->up, ((rt_int)1LL))) {
f_name_p_359(F->up, &F->x_1576);
(*F->res_351) = F->x_1576;
goto ret_;
}
f_perror_320(F->up, rt_g_lit("expected an expression", 22));
(*F->res_351) = NULL;
goto ret_;
ret_:

  return;
}

static void f_agg_or_paren_354(struct f_greenc_1fr *up_, P174 *res_353) {
  struct f_agg_or_paren_354fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_353 = res_353;
F->line_1582 = INT64_MIN;
F->line_1582 = f_cur_line_308(F->up);
F->items_1583 = NULL;
F->itail_1584 = NULL;
F->it_1585 = NULL;
F->first_1586 = NULL;
F->keys_1587 = NULL;
F->ktail_1588 = NULL;
F->lab_1589 = NULL;
F->x_1590 = NULL;
F->more_1591 = INT_MIN;
F->more_1591 = 1;
f_expect_op_325(F->up, rt_g_lit("(", 1));
while (G_NV(F->more_1591)) {
F->it_1585 = f_nn_301(F->up, ((rt_int)13LL), G_NV(F->line_1582));
if (f_at_kw_310(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_321(F->up);
f_expect_op_325(F->up, rt_g_lit("=>", 2));
F->lab_1589 = f_nn_301(F->up, ((rt_int)61LL), G_NV(F->line_1582));
(*(P174)rt_nil_check(F->lab_1589)).flag_ = ((rt_int)1LL);
(*(P174)rt_nil_check(F->it_1585)).a_ = F->lab_1589;
f_expr_338(F->up, &(*(P174)rt_nil_check(F->it_1585)).b_);
} else {
f_expr_338(F->up, &F->first_1586);
if (((f_at_op_312(F->up, rt_g_lit("..", 2)) || f_at_op_312(F->up, rt_g_lit("|", 1))) || f_at_op_312(F->up, rt_g_lit("=>", 2)))) {
F->keys_1587 = NULL;
F->ktail_1588 = NULL;
for (;;) {
F->lab_1589 = f_nn_301(F->up, ((rt_int)61LL), G_NV(F->line_1582));
(*(P174)rt_nil_check(F->lab_1589)).a_ = F->first_1586;
if (f_at_op_312(F->up, rt_g_lit("..", 2))) {
f_skip_321(F->up);
f_simple_expr_346(F->up, &(*(P174)rt_nil_check(F->lab_1589)).b_);
}
f_append_305(F->up, &F->keys_1587, &F->ktail_1588, F->lab_1589);
if ((!f_at_op_312(F->up, rt_g_lit("|", 1)))) {
goto L_end_1593;
}
f_skip_321(F->up);
f_simple_expr_346(F->up, &F->first_1586);
}
L_end_1593: ;
f_expect_op_325(F->up, rt_g_lit("=>", 2));
(*(P174)rt_nil_check(F->it_1585)).a_ = F->keys_1587;
f_expr_338(F->up, &(*(P174)rt_nil_check(F->it_1585)).b_);
} else {
(*(P174)rt_nil_check(F->it_1585)).b_ = F->first_1586;
}
}
f_append_305(F->up, &F->items_1583, &F->itail_1584, F->it_1585);
F->more_1591 = f_at_op_312(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1591)) {
f_skip_321(F->up);
}
}
L_end_1592: ;
f_expect_op_325(F->up, rt_g_lit(")", 1));
if ((((*(P174)rt_nil_check(F->items_1583)).next_ == NULL) && ((*(P174)rt_nil_check(F->items_1583)).a_ == NULL))) {
F->x_1590 = f_nn_301(F->up, ((rt_int)15LL), G_NV(F->line_1582));
(*(P174)rt_nil_check(F->x_1590)).a_ = (*(P174)rt_nil_check(F->items_1583)).b_;
(*F->res_353) = F->x_1590;
goto ret_;
}
F->x_1590 = f_nn_301(F->up, ((rt_int)12LL), G_NV(F->line_1582));
(*(P174)rt_nil_check(F->x_1590)).a_ = F->items_1583;
(*F->res_353) = F->x_1590;
goto ret_;
ret_:

  return;
}

static int f_choice_token_356(struct f_greenc_1fr *up_, P110 t_355) {
  struct f_choice_token_356fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_355 = t_355;
if ((G_NV((*(P110)rt_nil_check(F->t_355)).kind_) == ((rt_int)3LL))) {
F->result_ = (eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(F->t_355)).s_)), rt_g_lit("=>", 2)) || eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(F->t_355)).s_)), rt_g_lit("|", 1)));
goto ret_;
}
F->result_ = ((G_NV((*(P110)rt_nil_check(F->t_355)).kind_) == ((rt_int)2LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(F->t_355)).s_)), rt_g_lit("OTHERS", 6)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_aggregate_ahead_357(struct f_greenc_1fr *up_) {
  struct f_aggregate_ahead_357fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_1594 = INT64_MIN;
F->d_1594 = ((rt_int)0LL);
F->k_1595 = INT64_MIN;
F->k_1595 = ((rt_int)0LL);
for (;;) {
if ((rt_add(G_NV(F->up->tpos_114), G_NV(F->k_1595)) > G_NV(F->up->ntoks_113))) {
F->result_ = 0;
goto ret_;
}
{
F->t_1598 = NULL;
F->t_1598 = ({ A109 ix1599 = F->up->toks_112; ix1599.p[rt_index(rt_add(G_NV(F->up->tpos_114), G_NV(F->k_1595)), ix1599.lo, ix1599.hi) - ix1599.lo]; });
if (((G_NV((*(P110)rt_nil_check(F->t_1598)).kind_) == ((rt_int)3LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(F->t_1598)).s_)), rt_g_lit("(", 1)))) {
F->d_1594 = rt_add(G_NV(F->d_1594), ((rt_int)1LL));
} else if (((G_NV((*(P110)rt_nil_check(F->t_1598)).kind_) == ((rt_int)3LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(F->t_1598)).s_)), rt_g_lit(")", 1)))) {
F->d_1594 = rt_sub(G_NV(F->d_1594), ((rt_int)1LL));
if ((G_NV(F->d_1594) == ((rt_int)0LL))) {
F->result_ = 0;
goto ret_;
}
} else if (((G_NV(F->d_1594) == ((rt_int)1LL)) && f_choice_token_356(F->up, F->t_1598))) {
F->result_ = 1;
goto ret_;
} else if (((G_NV((*(P110)rt_nil_check(F->t_1598)).kind_) == ((rt_int)3LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(F->t_1598)).s_)), rt_g_lit(";", 1)))) {
F->result_ = 0;
goto ret_;
}

}
L_end_1597: ;
F->k_1595 = rt_add(G_NV(F->k_1595), ((rt_int)1LL));
}
L_end_1596: ;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_name_p_359(struct f_greenc_1fr *up_, P174 *res_358) {
  struct f_name_p_359fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_358 = res_358;
F->p_1600 = NULL;
F->x_1601 = NULL;
F->args_1602 = NULL;
F->atail_1603 = NULL;
F->lo_1604 = NULL;
F->r_1605 = NULL;
F->line_1606 = INT64_MIN;
F->line_1606 = f_cur_line_308(F->up);
F->more_1607 = INT_MIN;
f_name_node_329(F->up, &F->p_1600);
for (;;) {
if ((f_at_op_312(F->up, rt_g_lit("(", 1)) && f_aggregate_ahead_357(F->up))) {
F->x_1601 = f_nn_301(F->up, ((rt_int)8LL), G_NV(F->line_1606));
(*(P174)rt_nil_check(F->x_1601)).a_ = F->p_1600;
f_agg_or_paren_354(F->up, &(*(P174)rt_nil_check(F->x_1601)).b_);
(*(P174)rt_nil_check(F->x_1601)).flag_ = ((rt_int)9LL);
F->p_1600 = F->x_1601;
} else if (f_at_op_312(F->up, rt_g_lit("(", 1))) {
f_skip_321(F->up);
F->args_1602 = NULL;
F->atail_1603 = NULL;
if ((!f_at_op_312(F->up, rt_g_lit(")", 1)))) {
F->more_1607 = 1;
while (G_NV(F->more_1607)) {
{
F->formal_1611 = NULL;
F->mark_1612 = INT64_MIN;
F->mark_1612 = ((rt_int)0LL);
if (((f_at_kind_314(F->up, ((rt_int)1LL)) && (f_kind_at_316(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (((eq_rt_gstr(f_text_at_318(F->up, ((rt_int)1LL)), rt_g_lit(":=", 2)) || eq_rt_gstr(f_text_at_318(F->up, ((rt_int)1LL)), rt_g_lit("=:", 2))) || eq_rt_gstr(f_text_at_318(F->up, ((rt_int)1LL)), rt_g_lit(":=:", 3))) || eq_rt_gstr(f_text_at_318(F->up, ((rt_int)1LL)), rt_g_lit("=>", 2))))) {
F->formal_1611 = (*(P110)rt_nil_check(({ A109 ix1613 = F->up->toks_112; ix1613.p[rt_index(G_NV(F->up->tpos_114), ix1613.lo, ix1613.hi) - ix1613.lo]; }))).s_;
if (eq_rt_gstr(f_text_at_318(F->up, ((rt_int)1LL)), rt_g_lit(":=", 2))) {
F->mark_1612 = ((rt_int)1LL);
} else if (eq_rt_gstr(f_text_at_318(F->up, ((rt_int)1LL)), rt_g_lit("=:", 2))) {
F->mark_1612 = ((rt_int)3LL);
} else if (eq_rt_gstr(f_text_at_318(F->up, ((rt_int)1LL)), rt_g_lit(":=:", 3))) {
F->mark_1612 = ((rt_int)2LL);
} else {
F->mark_1612 = ((rt_int)4LL);
}
f_skip_321(F->up);
f_skip_321(F->up);
}
f_expr_338(F->up, &F->lo_1604);
if (f_at_op_312(F->up, rt_g_lit("..", 2))) {
f_skip_321(F->up);
F->r_1605 = f_nn_301(F->up, ((rt_int)14LL), G_NV(F->line_1606));
(*(P174)rt_nil_check(F->r_1605)).a_ = F->lo_1604;
f_simple_expr_346(F->up, &(*(P174)rt_nil_check(F->r_1605)).b_);
F->lo_1604 = F->r_1605;
}
(*(P174)rt_nil_check(F->lo_1604)).formal_ = F->formal_1611;
(*(P174)rt_nil_check(F->lo_1604)).flag_ = G_NV(F->mark_1612);
f_append_305(F->up, &F->args_1602, &F->atail_1603, F->lo_1604);

}
L_end_1610: ;
F->more_1607 = f_at_op_312(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1607)) {
f_skip_321(F->up);
}
}
L_end_1609: ;
}
f_expect_op_325(F->up, rt_g_lit(")", 1));
F->x_1601 = f_nn_301(F->up, ((rt_int)8LL), G_NV(F->line_1606));
(*(P174)rt_nil_check(F->x_1601)).a_ = F->p_1600;
(*(P174)rt_nil_check(F->x_1601)).b_ = F->args_1602;
F->p_1600 = F->x_1601;
} else if (f_at_op_312(F->up, rt_g_lit(".", 1))) {
f_skip_321(F->up);
F->x_1601 = f_nn_301(F->up, ((rt_int)9LL), G_NV(F->line_1606));
(*(P174)rt_nil_check(F->x_1601)).a_ = F->p_1600;
if (f_at_kw_310(F->up, rt_g_lit("ALL", 3))) {
f_skip_321(F->up);
(*(P174)rt_nil_check(F->x_1601)).name_ = f_mk_227(F->up, rt_g_lit("ALL", 3));
} else {
f_expect_id_327(F->up, &(*(P174)rt_nil_check(F->x_1601)).name_);
}
F->p_1600 = F->x_1601;
} else if (f_at_op_312(F->up, rt_g_lit("'", 1))) {
f_skip_321(F->up);
F->x_1601 = f_nn_301(F->up, ((rt_int)10LL), G_NV(F->line_1606));
(*(P174)rt_nil_check(F->x_1601)).a_ = F->p_1600;
(*(P174)rt_nil_check(F->x_1601)).name_ = (*(P110)rt_nil_check(({ A109 ix1614 = F->up->toks_112; ix1614.p[rt_index(G_NV(F->up->tpos_114), ix1614.lo, ix1614.hi) - ix1614.lo]; }))).s_;
f_skip_321(F->up);
if (f_at_op_312(F->up, rt_g_lit("(", 1))) {
f_skip_321(F->up);
f_expr_338(F->up, &(*(P174)rt_nil_check(F->x_1601)).b_);
f_expect_op_325(F->up, rt_g_lit(")", 1));
}
F->p_1600 = F->x_1601;
} else {
(*F->res_358) = F->p_1600;
goto ret_;
}
}
L_end_1608: ;
ret_:

  return;
}

static void f_component_list_361(struct f_greenc_1fr *up_, P174 *res_360) {
  struct f_component_list_361fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_360 = res_360;
F->comps_1615 = NULL;
F->ctail_1616 = NULL;
F->names_1617 = NULL;
F->st_1618 = NULL;
F->def_1619 = NULL;
F->cm_1620 = NULL;
F->v_1621 = NULL;
F->arm_1622 = NULL;
F->atail_1623 = NULL;
F->labs_1624 = NULL;
F->ltail_1625 = NULL;
F->l_1626 = NULL;
F->is_c_1627 = INT_MIN;
for (;;) {
if (f_at_kw_310(F->up, rt_g_lit("NULL", 4))) {
f_skip_321(F->up);
f_expect_op_325(F->up, rt_g_lit(";", 1));
} else if (f_at_kw_310(F->up, rt_g_lit("CASE", 4))) {
F->v_1621 = f_nn_301(F->up, ((rt_int)23LL), f_cur_line_308(F->up));
f_skip_321(F->up);
f_name_node_329(F->up, &(*(P174)rt_nil_check(F->v_1621)).a_);
f_expect_kw_323(F->up, rt_g_lit("OF", 2));
F->atail_1623 = NULL;
while (f_at_kw_310(F->up, rt_g_lit("WHEN", 4))) {
f_skip_321(F->up);
F->arm_1622 = f_nn_301(F->up, ((rt_int)60LL), f_cur_line_308(F->up));
F->labs_1624 = NULL;
F->ltail_1625 = NULL;
for (;;) {
if (f_at_kw_310(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_321(F->up);
(*(P174)rt_nil_check(F->arm_1622)).flag_ = ((rt_int)1LL);
} else {
F->l_1626 = f_nn_301(F->up, ((rt_int)61LL), f_cur_line_308(F->up));
f_simple_expr_346(F->up, &(*(P174)rt_nil_check(F->l_1626)).a_);
if (f_at_op_312(F->up, rt_g_lit("..", 2))) {
f_skip_321(F->up);
f_simple_expr_346(F->up, &(*(P174)rt_nil_check(F->l_1626)).b_);
}
f_append_305(F->up, &F->labs_1624, &F->ltail_1625, F->l_1626);
}
if ((!f_at_op_312(F->up, rt_g_lit("|", 1)))) {
goto L_end_1630;
}
f_skip_321(F->up);
}
L_end_1630: ;
f_expect_op_325(F->up, rt_g_lit("=>", 2));
(*(P174)rt_nil_check(F->arm_1622)).a_ = F->labs_1624;
f_component_list_361(F->up, &(*(P174)rt_nil_check(F->arm_1622)).b_);
f_append_305(F->up, &(*(P174)rt_nil_check(F->v_1621)).b_, &F->atail_1623, F->arm_1622);
}
L_end_1629: ;
f_expect_kw_323(F->up, rt_g_lit("END", 3));
f_expect_kw_323(F->up, rt_g_lit("CASE", 4));
f_expect_op_325(F->up, rt_g_lit(";", 1));
f_append_305(F->up, &F->comps_1615, &F->ctail_1616, F->v_1621);
} else if (f_at_kind_314(F->up, ((rt_int)1LL))) {
f_id_list_331(F->up, &F->names_1617);
f_expect_op_325(F->up, rt_g_lit(":", 1));
F->is_c_1627 = 0;
if (f_at_kw_310(F->up, rt_g_lit("CONSTANT", 8))) {
f_skip_321(F->up);
F->is_c_1627 = 1;
}
f_type_spec_367(F->up, &F->st_1618);
F->def_1619 = NULL;
if (f_at_op_312(F->up, rt_g_lit(":=", 2))) {
f_skip_321(F->up);
f_expr_338(F->up, &F->def_1619);
}
f_expect_op_325(F->up, rt_g_lit(";", 1));
while ((F->names_1617 != NULL)) {
F->cm_1620 = f_nn_301(F->up, ((rt_int)63LL), G_NV((*(P174)rt_nil_check(F->names_1617)).line_));
(*(P174)rt_nil_check(F->cm_1620)).name_ = (*(P174)rt_nil_check(F->names_1617)).name_;
(*(P174)rt_nil_check(F->cm_1620)).a_ = F->st_1618;
(*(P174)rt_nil_check(F->cm_1620)).b_ = F->def_1619;
if (G_NV(F->is_c_1627)) {
(*(P174)rt_nil_check(F->cm_1620)).flag_ = ((rt_int)1LL);
}
f_append_305(F->up, &F->comps_1615, &F->ctail_1616, F->cm_1620);
F->names_1617 = (*(P174)rt_nil_check(F->names_1617)).next_;
}
L_end_1631: ;
} else {
(*F->res_360) = F->comps_1615;
goto ret_;
}
}
L_end_1628: ;
ret_:

  return;
}

static void f_discrete_range_p_363(struct f_greenc_1fr *up_, P174 *res_362) {
  struct f_discrete_range_p_363fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_362 = res_362;
F->lo_1632 = NULL;
F->r_1633 = NULL;
F->line_1634 = INT64_MIN;
F->line_1634 = f_cur_line_308(F->up);
if (((f_at_kind_314(F->up, ((rt_int)1LL)) && (f_kind_at_316(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_318(F->up, ((rt_int)1LL)), rt_g_lit("RANGE", 5)))) {
f_subtype_ind_365(F->up, &(*F->res_362));
goto ret_;
}
if ((((((f_at_kind_314(F->up, ((rt_int)1LL)) && (f_kind_at_316(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && eq_rt_gstr(f_text_at_318(F->up, ((rt_int)1LL)), rt_g_lit(".", 1))) && (f_kind_at_316(F->up, ((rt_int)2LL)) == ((rt_int)1LL))) && (f_kind_at_316(F->up, ((rt_int)3LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_318(F->up, ((rt_int)3LL)), rt_g_lit("RANGE", 5)))) {
f_subtype_ind_365(F->up, &(*F->res_362));
goto ret_;
}
f_simple_expr_346(F->up, &F->lo_1632);
if (f_at_op_312(F->up, rt_g_lit("..", 2))) {
f_skip_321(F->up);
F->r_1633 = f_nn_301(F->up, ((rt_int)14LL), G_NV(F->line_1634));
(*(P174)rt_nil_check(F->r_1633)).a_ = F->lo_1632;
f_simple_expr_346(F->up, &(*(P174)rt_nil_check(F->r_1633)).b_);
(*F->res_362) = F->r_1633;
goto ret_;
}
(*F->res_362) = F->lo_1632;
goto ret_;
ret_:

  return;
}

static void f_subtype_ind_365(struct f_greenc_1fr *up_, P174 *res_364) {
  struct f_subtype_ind_365fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_364 = res_364;
F->f_1635 = NULL;
F->x_1636 = NULL;
F->r_1637 = NULL;
F->args_1638 = NULL;
F->atail_1639 = NULL;
F->lo_1640 = NULL;
F->line_1641 = INT64_MIN;
F->line_1641 = f_cur_line_308(F->up);
F->more_1642 = INT_MIN;
F->more_1642 = 1;
F->x_1636 = f_nn_301(F->up, ((rt_int)80LL), G_NV(F->line_1641));
f_expect_id_327(F->up, &(*(P174)rt_nil_check(F->x_1636)).name_);
while (f_at_op_312(F->up, rt_g_lit(".", 1))) {
f_skip_321(F->up);
if (((*(P174)rt_nil_check(F->x_1636)).tag_ == NULL)) {
(*(P174)rt_nil_check(F->x_1636)).tag_ = (*(P174)rt_nil_check(F->x_1636)).name_;
} else {
(*(P174)rt_nil_check(F->x_1636)).tag_ = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1636)).tag_)), one_rt_gstr(46)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1636)).name_))));
}
f_expect_id_327(F->up, &(*(P174)rt_nil_check(F->x_1636)).name_);
}
L_end_1643: ;
if (f_at_kw_310(F->up, rt_g_lit("RANGE", 5))) {
f_skip_321(F->up);
F->r_1637 = f_nn_301(F->up, ((rt_int)14LL), G_NV(F->line_1641));
f_simple_expr_346(F->up, &(*(P174)rt_nil_check(F->r_1637)).a_);
f_expect_op_325(F->up, rt_g_lit("..", 2));
f_simple_expr_346(F->up, &(*(P174)rt_nil_check(F->r_1637)).b_);
(*(P174)rt_nil_check(F->x_1636)).a_ = F->r_1637;
(*(P174)rt_nil_check(F->x_1636)).flag_ = ((rt_int)1LL);
} else if (f_at_op_312(F->up, rt_g_lit("(", 1))) {
f_skip_321(F->up);
while (G_NV(F->more_1642)) {
if (((f_at_kind_314(F->up, ((rt_int)1LL)) && (f_kind_at_316(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && eq_rt_gstr(f_text_at_318(F->up, ((rt_int)1LL)), rt_g_lit("=>", 2)))) {
f_expect_id_327(F->up, &F->f_1635);
f_skip_321(F->up);
f_expr_338(F->up, &F->lo_1640);
(*(P174)rt_nil_check(F->lo_1640)).formal_ = F->f_1635;
} else {
f_discrete_range_p_363(F->up, &F->lo_1640);
}
f_append_305(F->up, &F->args_1638, &F->atail_1639, F->lo_1640);
F->more_1642 = f_at_op_312(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1642)) {
f_skip_321(F->up);
}
}
L_end_1644: ;
f_expect_op_325(F->up, rt_g_lit(")", 1));
(*(P174)rt_nil_check(F->x_1636)).a_ = F->args_1638;
(*(P174)rt_nil_check(F->x_1636)).flag_ = ((rt_int)2LL);
} else if ((f_at_kw_310(F->up, rt_g_lit("DIGITS", 6)) || f_at_kw_310(F->up, rt_g_lit("DELTA", 5)))) {
f_skip_321(F->up);
f_simple_expr_346(F->up, &(*(P174)rt_nil_check(F->x_1636)).b_);
(*(P174)rt_nil_check(F->x_1636)).flag_ = ((rt_int)3LL);
if (f_at_kw_310(F->up, rt_g_lit("RANGE", 5))) {
f_skip_321(F->up);
F->r_1637 = f_nn_301(F->up, ((rt_int)14LL), G_NV(F->line_1641));
f_simple_expr_346(F->up, &(*(P174)rt_nil_check(F->r_1637)).a_);
f_expect_op_325(F->up, rt_g_lit("..", 2));
f_simple_expr_346(F->up, &(*(P174)rt_nil_check(F->r_1637)).b_);
(*(P174)rt_nil_check(F->x_1636)).a_ = F->r_1637;
}
}
(*F->res_364) = F->x_1636;
goto ret_;
ret_:

  return;
}

static void f_type_spec_367(struct f_greenc_1fr *up_, P174 *res_366) {
  struct f_type_spec_367fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_366 = res_366;
F->x_1645 = NULL;
if ((((((((f_at_op_312(F->up, rt_g_lit("(", 1)) || f_at_kw_310(F->up, rt_g_lit("ARRAY", 5))) || f_at_kw_310(F->up, rt_g_lit("RECORD", 6))) || f_at_kw_310(F->up, rt_g_lit("ACCESS", 6))) || f_at_kw_310(F->up, rt_g_lit("RANGE", 5))) || f_at_kw_310(F->up, rt_g_lit("DIGITS", 6))) || f_at_kw_310(F->up, rt_g_lit("DELTA", 5))) || f_at_kw_310(F->up, rt_g_lit("NEW", 3)))) {
f_type_def_369(F->up, &F->x_1645);
} else {
f_subtype_ind_365(F->up, &F->x_1645);
}
(*F->res_366) = F->x_1645;
goto ret_;
ret_:

  return;
}

static void f_type_def_369(struct f_greenc_1fr *up_, P174 *res_368) {
  struct f_type_def_369fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_368 = res_368;
F->x_1646 = NULL;
F->lits_1647 = NULL;
F->ltail_1648 = NULL;
F->l_1649 = NULL;
F->idx_1650 = NULL;
F->itail_1651 = NULL;
F->r_1652 = NULL;
F->comps_1653 = NULL;
F->ctail_1654 = NULL;
F->names_1655 = NULL;
F->st_1656 = NULL;
F->def_1657 = NULL;
F->cm_1658 = NULL;
F->line_1659 = INT64_MIN;
F->line_1659 = f_cur_line_308(F->up);
F->more_1660 = INT_MIN;
F->more_1660 = 1;
if (f_at_op_312(F->up, rt_g_lit("(", 1))) {
f_skip_321(F->up);
F->x_1646 = f_nn_301(F->up, ((rt_int)70LL), G_NV(F->line_1659));
while (G_NV(F->more_1660)) {
if (f_at_kind_314(F->up, ((rt_int)6LL))) {
F->l_1649 = f_nn_301(F->up, ((rt_int)3LL), G_NV(F->line_1659));
(*(P174)rt_nil_check(F->l_1649)).name_ = (*(P110)rt_nil_check(({ A109 ix1662 = F->up->toks_112; ix1662.p[rt_index(G_NV(F->up->tpos_114), ix1662.lo, ix1662.hi) - ix1662.lo]; }))).s_;
f_skip_321(F->up);
} else {
f_name_node_329(F->up, &F->l_1649);
}
f_append_305(F->up, &F->lits_1647, &F->ltail_1648, F->l_1649);
F->more_1660 = f_at_op_312(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1660)) {
f_skip_321(F->up);
}
}
L_end_1661: ;
f_expect_op_325(F->up, rt_g_lit(")", 1));
(*(P174)rt_nil_check(F->x_1646)).a_ = F->lits_1647;
(*F->res_368) = F->x_1646;
goto ret_;
}
if (f_at_kw_310(F->up, rt_g_lit("RANGE", 5))) {
f_skip_321(F->up);
F->x_1646 = f_nn_301(F->up, ((rt_int)71LL), G_NV(F->line_1659));
f_simple_expr_346(F->up, &(*(P174)rt_nil_check(F->x_1646)).a_);
f_expect_op_325(F->up, rt_g_lit("..", 2));
f_simple_expr_346(F->up, &(*(P174)rt_nil_check(F->x_1646)).b_);
(*F->res_368) = F->x_1646;
goto ret_;
}
if ((f_at_kw_310(F->up, rt_g_lit("DIGITS", 6)) || f_at_kw_310(F->up, rt_g_lit("DELTA", 5)))) {
F->x_1646 = f_nn_301(F->up, ((rt_int)72LL), G_NV(F->line_1659));
(*(P174)rt_nil_check(F->x_1646)).flag_ = ((rt_int)1LL);
if (f_at_kw_310(F->up, rt_g_lit("DELTA", 5))) {
(*(P174)rt_nil_check(F->x_1646)).flag_ = ((rt_int)2LL);
}
f_skip_321(F->up);
f_simple_expr_346(F->up, &(*(P174)rt_nil_check(F->x_1646)).a_);
if (f_at_kw_310(F->up, rt_g_lit("RANGE", 5))) {
f_skip_321(F->up);
F->r_1652 = f_nn_301(F->up, ((rt_int)14LL), G_NV(F->line_1659));
f_simple_expr_346(F->up, &(*(P174)rt_nil_check(F->r_1652)).a_);
f_expect_op_325(F->up, rt_g_lit("..", 2));
f_simple_expr_346(F->up, &(*(P174)rt_nil_check(F->r_1652)).b_);
(*(P174)rt_nil_check(F->x_1646)).b_ = F->r_1652;
}
(*F->res_368) = F->x_1646;
goto ret_;
}
if (f_at_kw_310(F->up, rt_g_lit("ARRAY", 5))) {
f_skip_321(F->up);
F->x_1646 = f_nn_301(F->up, ((rt_int)73LL), G_NV(F->line_1659));
f_expect_op_325(F->up, rt_g_lit("(", 1));
while (G_NV(F->more_1660)) {
if (((f_at_kind_314(F->up, ((rt_int)1LL)) && (f_kind_at_316(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (eq_rt_gstr(f_text_at_318(F->up, ((rt_int)1LL)), rt_g_lit(",", 1)) || eq_rt_gstr(f_text_at_318(F->up, ((rt_int)1LL)), rt_g_lit(")", 1))))) {
F->l_1649 = f_nn_301(F->up, ((rt_int)80LL), G_NV(F->line_1659));
f_expect_id_327(F->up, &(*(P174)rt_nil_check(F->l_1649)).name_);
(*(P174)rt_nil_check(F->x_1646)).flag_ = ((rt_int)1LL);
} else {
f_discrete_range_p_363(F->up, &F->l_1649);
if (((G_NV((*(P174)rt_nil_check(F->l_1649)).kind_) != ((rt_int)14LL)) && (G_NV((*(P174)rt_nil_check(F->l_1649)).kind_) != ((rt_int)80LL)))) {
f_perror_320(F->up, rt_g_lit("an index is a discrete range or a type mark (RM79 3.6)", 54));
}
}
f_append_305(F->up, &F->idx_1650, &F->itail_1651, F->l_1649);
F->more_1660 = f_at_op_312(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1660)) {
f_skip_321(F->up);
}
}
L_end_1663: ;
f_expect_op_325(F->up, rt_g_lit(")", 1));
f_expect_kw_323(F->up, rt_g_lit("OF", 2));
(*(P174)rt_nil_check(F->x_1646)).a_ = F->idx_1650;
f_type_spec_367(F->up, &(*(P174)rt_nil_check(F->x_1646)).b_);
(*F->res_368) = F->x_1646;
goto ret_;
}
if (f_at_kw_310(F->up, rt_g_lit("RECORD", 6))) {
f_skip_321(F->up);
F->x_1646 = f_nn_301(F->up, ((rt_int)74LL), G_NV(F->line_1659));
f_component_list_361(F->up, &(*(P174)rt_nil_check(F->x_1646)).a_);
f_expect_kw_323(F->up, rt_g_lit("END", 3));
f_expect_kw_323(F->up, rt_g_lit("RECORD", 6));
(*F->res_368) = F->x_1646;
goto ret_;
}
if (f_at_kw_310(F->up, rt_g_lit("ACCESS", 6))) {
f_skip_321(F->up);
F->x_1646 = f_nn_301(F->up, ((rt_int)75LL), G_NV(F->line_1659));
f_type_spec_367(F->up, &(*(P174)rt_nil_check(F->x_1646)).a_);
(*F->res_368) = F->x_1646;
goto ret_;
}
if (f_at_kw_310(F->up, rt_g_lit("NEW", 3))) {
f_skip_321(F->up);
F->x_1646 = f_nn_301(F->up, ((rt_int)76LL), G_NV(F->line_1659));
f_subtype_ind_365(F->up, &(*(P174)rt_nil_check(F->x_1646)).a_);
(*F->res_368) = F->x_1646;
goto ret_;
}
f_perror_320(F->up, rt_g_lit("expected a type definition", 26));
(*F->res_368) = NULL;
goto ret_;
ret_:

  return;
}

static void f_pragma_p_371(struct f_greenc_1fr *up_, P174 *res_370) {
  struct f_pragma_p_371fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_370 = res_370;
F->x_1664 = NULL;
F->a_1665 = NULL;
F->head_1666 = NULL;
F->tail_1667 = NULL;
F->x_1664 = f_nn_301(F->up, ((rt_int)56LL), f_cur_line_308(F->up));
f_expect_kw_323(F->up, rt_g_lit("PRAGMA", 6));
f_expect_id_327(F->up, &(*(P174)rt_nil_check(F->x_1664)).name_);
if (f_at_op_312(F->up, rt_g_lit("(", 1))) {
f_skip_321(F->up);
for (;;) {
if (f_at_kind_314(F->up, ((rt_int)1LL))) {
f_name_node_329(F->up, &F->a_1665);
} else if (((f_at_kind_314(F->up, ((rt_int)6LL)) || f_at_kind_314(F->up, ((rt_int)4LL))) || f_at_kind_314(F->up, ((rt_int)5LL)))) {
f_primary_352(F->up, &F->a_1665);
} else {
f_perror_320(F->up, rt_g_lit("a pragma argument is an identifier, a string or a number (RM79 2.7)", 67));
}
f_append_305(F->up, &F->head_1666, &F->tail_1667, F->a_1665);
if ((!f_at_op_312(F->up, rt_g_lit(",", 1)))) {
goto L_end_1668;
}
f_skip_321(F->up);
}
L_end_1668: ;
f_expect_op_325(F->up, rt_g_lit(")", 1));
}
f_expect_op_325(F->up, rt_g_lit(";", 1));
(*(P174)rt_nil_check(F->x_1664)).a_ = F->head_1666;
f_check_pragma_373(F->up, F->x_1664);
(*F->res_370) = F->x_1664;
ret_:

  return;
}

static void f_check_pragma_373(struct f_greenc_1fr *up_, P174 x_372) {
  struct f_check_pragma_373fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_372 = x_372;
F->p_1669 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_372)).name_)));
F->n_1670 = INT64_MIN;
F->n_1670 = f_list_len_307(F->up, (*(P174)rt_nil_check(F->x_372)).a_);
F->a_1671 = NULL;
F->a_1671 = (*(P174)rt_nil_check(F->x_372)).a_;
if ((eq_rt_gstr(F->p_1669, rt_g_lit("PAGE", 4)) || eq_rt_gstr(F->p_1669, rt_g_lit("INLINE", 6)))) {
if ((G_NV(F->n_1670) != ((rt_int)0LL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->x_372)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1669), rt_g_lit(" takes no argument (RM79 App. B)", 32)));
}
} else if (((((eq_rt_gstr(F->p_1669, rt_g_lit("LIST", 4)) || eq_rt_gstr(F->p_1669, rt_g_lit("OPTIMIZE", 8))) || eq_rt_gstr(F->p_1669, rt_g_lit("CREATION", 8))) || eq_rt_gstr(F->p_1669, rt_g_lit("INTERFACE", 9))) || eq_rt_gstr(F->p_1669, rt_g_lit("SYSTEM", 6)))) {
if (((G_NV(F->n_1670) != ((rt_int)1LL)) || (G_NV((*(P174)rt_nil_check(F->a_1671)).kind_) != ((rt_int)5LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->x_372)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1669), rt_g_lit(" takes one identifier (RM79 App. B)", 35)));
}
if (((eq_rt_gstr(F->p_1669, rt_g_lit("LIST", 4)) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1671)).name_)), rt_g_lit("ON", 2)))) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1671)).name_)), rt_g_lit("OFF", 3))))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->x_372)).line_), rt_g_lit("pragma LIST(ON) or LIST(OFF) (RM79 App. B)", 42));
} else if (((eq_rt_gstr(F->p_1669, rt_g_lit("OPTIMIZE", 8)) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1671)).name_)), rt_g_lit("TIME", 4)))) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1671)).name_)), rt_g_lit("SPACE", 5))))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->x_372)).line_), rt_g_lit("pragma OPTIMIZE(TIME) or OPTIMIZE(SPACE) (RM79 App. B)", 54));
} else if (((eq_rt_gstr(F->p_1669, rt_g_lit("CREATION", 8)) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1671)).name_)), rt_g_lit("STATIC", 6)))) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1671)).name_)), rt_g_lit("DYNAMIC", 7))))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->x_372)).line_), rt_g_lit("pragma CREATION(STATIC) or CREATION(DYNAMIC) (RM79 9.2)", 55));
}
if (eq_rt_gstr(F->p_1669, rt_g_lit("OPTIMIZE", 8))) {
F->up->conf_optimize_225 = (*(P174)rt_nil_check(F->a_1671)).name_;
} else if (eq_rt_gstr(F->p_1669, rt_g_lit("SYSTEM", 6))) {
F->up->conf_system_222 = (*(P174)rt_nil_check(F->a_1671)).name_;
}
} else if ((eq_rt_gstr(F->p_1669, rt_g_lit("STORAGE_UNIT", 12)) || eq_rt_gstr(F->p_1669, rt_g_lit("MEMORY_SIZE", 11)))) {
if (((G_NV(F->n_1670) != ((rt_int)1LL)) || (G_NV((*(P174)rt_nil_check(F->a_1671)).kind_) != ((rt_int)1LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->x_372)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1669), rt_g_lit(" takes a number (RM79 13.7)", 27)));
}
if (eq_rt_gstr(F->p_1669, rt_g_lit("STORAGE_UNIT", 12))) {
F->up->conf_storage_unit_223 = G_NV((*(P174)rt_nil_check(F->a_1671)).ival_);
} else {
F->up->conf_memory_size_224 = G_NV((*(P174)rt_nil_check(F->a_1671)).ival_);
}
} else if ((eq_rt_gstr(F->p_1669, rt_g_lit("SUPPRESS", 8)) || eq_rt_gstr(F->p_1669, rt_g_lit("ENVIRONMENT", 11)))) {
if ((G_NV(F->n_1670) == ((rt_int)0LL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->x_372)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1669), rt_g_lit(" names at least one ", 20)), rt_g_lit("unit or exception (RM79 App. B)", 31)));
}
while ((F->a_1671 != NULL)) {
if ((G_NV((*(P174)rt_nil_check(F->a_1671)).kind_) != ((rt_int)5LL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->x_372)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1669), rt_g_lit(" takes names (RM79 App. B)", 26)));
}
F->a_1671 = (*(P174)rt_nil_check(F->a_1671)).next_;
}
L_end_1672: ;
} else if (eq_rt_gstr(F->p_1669, rt_g_lit("INCLUDE", 7))) {
if (((G_NV(F->n_1670) != ((rt_int)1LL)) || (G_NV((*(P174)rt_nil_check(F->a_1671)).kind_) != ((rt_int)3LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->x_372)).line_), rt_g_lit("pragma INCLUDE takes the name of a file (RM79 App. B)", 53));
}
}
ret_:

  return;
}

static void f_visibility_p_375(struct f_greenc_1fr *up_, P140 *res_374) {
  struct f_visibility_p_375fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_374 = res_374;
F->names_1673 = NULL;
F->v_1674 = NULL;
F->v_1674 = f_mk_227(F->up, rt_g_lit(",", 1));
f_expect_kw_323(F->up, rt_g_lit("RESTRICTED", 10));
if (f_at_op_312(F->up, rt_g_lit("(", 1))) {
f_skip_321(F->up);
f_id_list_331(F->up, &F->names_1673);
f_expect_op_325(F->up, rt_g_lit(")", 1));
while ((F->names_1673 != NULL)) {
F->v_1674 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->v_1674)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->names_1673)).name_))), one_rt_gstr(44)));
F->names_1673 = (*(P174)rt_nil_check(F->names_1673)).next_;
}
L_end_1675: ;
}
(*F->res_374) = F->v_1674;
ret_:

  return;
}

static void f_unit_p_377(struct f_greenc_1fr *up_, P174 *res_376) {
  struct f_unit_p_377fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_376 = res_376;
F->v_1676 = NULL;
F->x_1677 = NULL;
if (f_at_kw_310(F->up, rt_g_lit("RESTRICTED", 10))) {
f_visibility_p_375(F->up, &F->v_1676);
}
if ((f_at_kw_310(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_310(F->up, rt_g_lit("FUNCTION", 8)))) {
f_subprogram_390(F->up, &F->x_1677);
} else if (f_at_kw_310(F->up, rt_g_lit("PACKAGE", 7))) {
f_package_p_396(F->up, &F->x_1677);
} else if (f_at_kw_310(F->up, rt_g_lit("TASK", 4))) {
f_task_p_1105(F->up, &F->x_1677);
} else if (f_at_kw_310(F->up, rt_g_lit("GENERIC", 7))) {
f_generic_p_1235(F->up, &F->x_1677);
} else {
f_perror_320(F->up, rt_g_lit("a restricted unit is a subprogram, a package or a task (RM79 8.3)", 65));
}
if ((F->x_1677 != NULL)) {
(*(P174)rt_nil_check(F->x_1677)).formal_ = F->v_1676;
}
(*F->res_376) = F->x_1677;
ret_:

  return;
}

static void f_skip_representation_378(struct f_greenc_1fr *up_) {
  struct f_skip_representation_378fr *F = rt_alloc(sizeof *F);
F->up = up_;
while ((!f_at_kw_310(F->up, rt_g_lit("USE", 3)))) {
f_skip_321(F->up);
}
L_end_1678: ;
f_skip_321(F->up);
if (f_at_kw_310(F->up, rt_g_lit("RECORD", 6))) {
while ((!((f_at_kw_310(F->up, rt_g_lit("END", 3)) && (f_kind_at_316(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_318(F->up, ((rt_int)1LL)), rt_g_lit("RECORD", 6))))) {
f_skip_321(F->up);
}
L_end_1679: ;
f_skip_321(F->up);
f_skip_321(F->up);
}
while ((!f_at_op_312(F->up, rt_g_lit(";", 1)))) {
f_skip_321(F->up);
}
L_end_1680: ;
f_skip_321(F->up);
ret_:

  return;
}

static void f_decl_part_380(struct f_greenc_1fr *up_, P174 *res_379) {
  struct f_decl_part_380fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_379 = res_379;
F->head_1681 = NULL;
F->tail_1682 = NULL;
F->x_1683 = NULL;
F->names_1684 = NULL;
for (;;) {
if (f_at_kw_310(F->up, rt_g_lit("PRAGMA", 6))) {
f_pragma_p_371(F->up, &F->x_1683);
f_append_305(F->up, &F->head_1681, &F->tail_1682, F->x_1683);
} else if (f_at_kw_310(F->up, rt_g_lit("USE", 3))) {
f_skip_321(F->up);
F->x_1683 = f_nn_301(F->up, ((rt_int)55LL), f_cur_line_308(F->up));
f_id_list_331(F->up, &(*(P174)rt_nil_check(F->x_1683)).a_);
f_expect_op_325(F->up, rt_g_lit(";", 1));
f_append_305(F->up, &F->head_1681, &F->tail_1682, F->x_1683);
} else if (((f_at_kw_310(F->up, rt_g_lit("RESTRICTED", 10)) && (f_kind_at_316(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_318(F->up, ((rt_int)1LL)), rt_g_lit("TYPE", 4)))) {
f_skip_321(F->up);
f_type_decl_384(F->up, &F->x_1683);
if (((F->x_1683 == NULL) || (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->x_1683)).a_)).kind_) != ((rt_int)77LL)))) {
f_perror_320(F->up, rt_g_lit("only a private type is restricted (RM79 7.4)", 44));
}
(*(P174)rt_nil_check(F->x_1683)).flag_ = ((rt_int)9LL);
f_append_305(F->up, &F->head_1681, &F->tail_1682, F->x_1683);
} else if (f_at_kw_310(F->up, rt_g_lit("RESTRICTED", 10))) {
f_unit_p_377(F->up, &F->x_1683);
f_append_305(F->up, &F->head_1681, &F->tail_1682, F->x_1683);
} else if (f_at_kw_310(F->up, rt_g_lit("FOR", 3))) {
f_skip_representation_378(F->up);
} else if ((f_at_kw_310(F->up, rt_g_lit("TYPE", 4)) || f_at_kw_310(F->up, rt_g_lit("SUBTYPE", 7)))) {
f_type_decl_384(F->up, &F->x_1683);
f_append_305(F->up, &F->head_1681, &F->tail_1682, F->x_1683);
} else if ((f_at_kw_310(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_310(F->up, rt_g_lit("FUNCTION", 8)))) {
f_subprogram_390(F->up, &F->x_1683);
f_append_305(F->up, &F->head_1681, &F->tail_1682, F->x_1683);
} else if (f_at_kw_310(F->up, rt_g_lit("PACKAGE", 7))) {
f_package_p_396(F->up, &F->x_1683);
f_append_305(F->up, &F->head_1681, &F->tail_1682, F->x_1683);
} else if (f_at_kw_310(F->up, rt_g_lit("TASK", 4))) {
f_task_p_1105(F->up, &F->x_1683);
f_append_305(F->up, &F->head_1681, &F->tail_1682, F->x_1683);
} else if (f_at_kw_310(F->up, rt_g_lit("GENERIC", 7))) {
f_generic_p_1235(F->up, &F->x_1683);
f_append_305(F->up, &F->head_1681, &F->tail_1682, F->x_1683);
} else if (f_at_kw_310(F->up, rt_g_lit("ENTRY", 5))) {
f_entry_p_1107(F->up, &F->x_1683);
f_append_305(F->up, &F->head_1681, &F->tail_1682, F->x_1683);
} else if (((f_at_kind_314(F->up, ((rt_int)1LL)) && (f_kind_at_316(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (eq_rt_gstr(f_text_at_318(F->up, ((rt_int)1LL)), rt_g_lit(":", 1)) || eq_rt_gstr(f_text_at_318(F->up, ((rt_int)1LL)), rt_g_lit(",", 1))))) {
f_object_decl_382(F->up, &F->x_1683);
f_append_305(F->up, &F->head_1681, &F->tail_1682, F->x_1683);
} else {
(*F->res_379) = F->head_1681;
goto ret_;
}
}
L_end_1685: ;
ret_:

  return;
}

static void f_object_decl_382(struct f_greenc_1fr *up_, P174 *res_381) {
  struct f_object_decl_382fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_381 = res_381;
F->head_1686 = NULL;
F->tail_1687 = NULL;
F->names_1688 = NULL;
F->st_1689 = NULL;
F->init_1690 = NULL;
F->x_1691 = NULL;
F->line_1692 = INT64_MIN;
F->line_1692 = f_cur_line_308(F->up);
F->is_const_1693 = INT_MIN;
F->is_const_1693 = 0;
f_id_list_331(F->up, &F->names_1688);
f_expect_op_325(F->up, rt_g_lit(":", 1));
if (f_at_kw_310(F->up, rt_g_lit("EXCEPTION", 9))) {
f_skip_321(F->up);
if (f_at_kw_310(F->up, rt_g_lit("RENAMES", 7))) {
f_skip_321(F->up);
F->x_1691 = f_nn_301(F->up, ((rt_int)46LL), G_NV(F->line_1692));
(*(P174)rt_nil_check(F->x_1691)).name_ = (*(P174)rt_nil_check(F->names_1688)).name_;
f_name_p_359(F->up, &(*(P174)rt_nil_check(F->x_1691)).a_);
f_expect_op_325(F->up, rt_g_lit(";", 1));
(*F->res_381) = F->x_1691;
goto ret_;
}
f_expect_op_325(F->up, rt_g_lit(";", 1));
while ((F->names_1688 != NULL)) {
F->x_1691 = f_nn_301(F->up, ((rt_int)46LL), G_NV(F->line_1692));
(*(P174)rt_nil_check(F->x_1691)).name_ = (*(P174)rt_nil_check(F->names_1688)).name_;
f_append_305(F->up, &F->head_1686, &F->tail_1687, F->x_1691);
F->names_1688 = (*(P174)rt_nil_check(F->names_1688)).next_;
}
L_end_1694: ;
(*F->res_381) = F->head_1686;
goto ret_;
}
if (f_at_kw_310(F->up, rt_g_lit("CONSTANT", 8))) {
f_skip_321(F->up);
F->is_const_1693 = 1;
}
f_type_spec_367(F->up, &F->st_1689);
if ((f_at_kw_310(F->up, rt_g_lit("RENAMES", 7)) && (!G_NV(F->is_const_1693)))) {
f_skip_321(F->up);
F->x_1691 = f_nn_301(F->up, ((rt_int)40LL), G_NV(F->line_1692));
(*(P174)rt_nil_check(F->x_1691)).name_ = (*(P174)rt_nil_check(F->names_1688)).name_;
(*(P174)rt_nil_check(F->x_1691)).a_ = F->st_1689;
(*(P174)rt_nil_check(F->x_1691)).flag_ = ((rt_int)2LL);
f_expr_338(F->up, &(*(P174)rt_nil_check(F->x_1691)).b_);
f_expect_op_325(F->up, rt_g_lit(";", 1));
(*F->res_381) = F->x_1691;
goto ret_;
}
if (f_at_op_312(F->up, rt_g_lit(":=", 2))) {
f_skip_321(F->up);
f_expr_338(F->up, &F->init_1690);
}
f_expect_op_325(F->up, rt_g_lit(";", 1));
while ((F->names_1688 != NULL)) {
if (G_NV(F->is_const_1693)) {
F->x_1691 = f_nn_301(F->up, ((rt_int)41LL), G_NV(F->line_1692));
} else {
F->x_1691 = f_nn_301(F->up, ((rt_int)40LL), G_NV(F->line_1692));
}
(*(P174)rt_nil_check(F->x_1691)).name_ = (*(P174)rt_nil_check(F->names_1688)).name_;
(*(P174)rt_nil_check(F->x_1691)).a_ = F->st_1689;
(*(P174)rt_nil_check(F->x_1691)).b_ = F->init_1690;
f_append_305(F->up, &F->head_1686, &F->tail_1687, F->x_1691);
F->names_1688 = (*(P174)rt_nil_check(F->names_1688)).next_;
}
L_end_1695: ;
(*F->res_381) = F->head_1686;
goto ret_;
ret_:

  return;
}

static void f_type_decl_384(struct f_greenc_1fr *up_, P174 *res_383) {
  struct f_type_decl_384fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_383 = res_383;
F->x_1696 = NULL;
F->line_1697 = INT64_MIN;
F->line_1697 = f_cur_line_308(F->up);
if (f_at_kw_310(F->up, rt_g_lit("SUBTYPE", 7))) {
f_skip_321(F->up);
F->x_1696 = f_nn_301(F->up, ((rt_int)43LL), G_NV(F->line_1697));
f_expect_id_327(F->up, &(*(P174)rt_nil_check(F->x_1696)).name_);
f_expect_kw_323(F->up, rt_g_lit("IS", 2));
f_subtype_ind_365(F->up, &(*(P174)rt_nil_check(F->x_1696)).a_);
f_expect_op_325(F->up, rt_g_lit(";", 1));
(*F->res_383) = F->x_1696;
goto ret_;
}
f_expect_kw_323(F->up, rt_g_lit("TYPE", 4));
F->x_1696 = f_nn_301(F->up, ((rt_int)42LL), G_NV(F->line_1697));
f_expect_id_327(F->up, &(*(P174)rt_nil_check(F->x_1696)).name_);
if (f_at_op_312(F->up, rt_g_lit(";", 1))) {
f_skip_321(F->up);
(*F->res_383) = NULL;
goto ret_;
}
f_expect_kw_323(F->up, rt_g_lit("IS", 2));
if (f_at_kw_310(F->up, rt_g_lit("PRIVATE", 7))) {
f_skip_321(F->up);
(*(P174)rt_nil_check(F->x_1696)).a_ = f_nn_301(F->up, ((rt_int)77LL), G_NV(F->line_1697));
} else {
f_type_def_369(F->up, &(*(P174)rt_nil_check(F->x_1696)).a_);
}
f_expect_op_325(F->up, rt_g_lit(";", 1));
(*F->res_383) = F->x_1696;
goto ret_;
ret_:

  return;
}

static void f_formal_part_386(struct f_greenc_1fr *up_, P174 *res_385) {
  struct f_formal_part_386fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_385 = res_385;
F->head_1698 = NULL;
F->tail_1699 = NULL;
F->names_1700 = NULL;
F->st_1701 = NULL;
F->def_1702 = NULL;
F->p_1703 = NULL;
F->mode_1704 = INT64_MIN;
F->more_1705 = INT_MIN;
F->more_1705 = 1;
f_expect_op_325(F->up, rt_g_lit("(", 1));
while (G_NV(F->more_1705)) {
f_id_list_331(F->up, &F->names_1700);
f_expect_op_325(F->up, rt_g_lit(":", 1));
F->mode_1704 = ((rt_int)1LL);
if (f_at_kw_310(F->up, rt_g_lit("IN", 2))) {
f_skip_321(F->up);
if (f_at_kw_310(F->up, rt_g_lit("OUT", 3))) {
f_skip_321(F->up);
F->mode_1704 = ((rt_int)2LL);
}
} else if (f_at_kw_310(F->up, rt_g_lit("OUT", 3))) {
f_skip_321(F->up);
F->mode_1704 = ((rt_int)3LL);
}
f_subtype_ind_365(F->up, &F->st_1701);
F->def_1702 = NULL;
if (f_at_op_312(F->up, rt_g_lit(":=", 2))) {
f_skip_321(F->up);
f_expr_338(F->up, &F->def_1702);
}
while ((F->names_1700 != NULL)) {
F->p_1703 = f_nn_301(F->up, ((rt_int)47LL), G_NV((*(P174)rt_nil_check(F->names_1700)).line_));
(*(P174)rt_nil_check(F->p_1703)).name_ = (*(P174)rt_nil_check(F->names_1700)).name_;
(*(P174)rt_nil_check(F->p_1703)).ival_ = G_NV(F->mode_1704);
(*(P174)rt_nil_check(F->p_1703)).a_ = F->st_1701;
(*(P174)rt_nil_check(F->p_1703)).b_ = F->def_1702;
f_append_305(F->up, &F->head_1698, &F->tail_1699, F->p_1703);
F->names_1700 = (*(P174)rt_nil_check(F->names_1700)).next_;
}
L_end_1707: ;
F->more_1705 = f_at_op_312(F->up, rt_g_lit(";", 1));
if (G_NV(F->more_1705)) {
f_skip_321(F->up);
}
}
L_end_1706: ;
f_expect_op_325(F->up, rt_g_lit(")", 1));
(*F->res_385) = F->head_1698;
goto ret_;
ret_:

  return;
}

static void f_designator_388(struct f_greenc_1fr *up_, P140 *res_387) {
  struct f_designator_388fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_387 = res_387;
if (f_at_kind_314(F->up, ((rt_int)6LL))) {
f_skip_321(F->up);
(*F->res_387) = f_mk_227(F->up, f_upper_s_240(F->up, (*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1711 = F->up->toks_112; ix1711.p[rt_index(rt_sub(G_NV(F->up->tpos_114), ((rt_int)1LL)), ix1711.lo, ix1711.hi) - ix1711.lo]; }))).s_))));
if (eq_rt_gstr((*(P140)rt_nil_check((*F->res_387))), rt_g_lit("/=", 2))) {
f_perror_320(F->up, rt_g_lit("\"/=\" cannot be declared: it follows the declaration of \"=\" (RM79 6.6.1)", 71));
}
if ((!f_is_operator_242(F->up, (*(P140)rt_nil_check((*F->res_387)))))) {
f_perror_320(F->up, cat_rt_gstr((*(P140)rt_nil_check((*F->res_387))), rt_g_lit(" is not an operator symbol (RM79 6.6.1)", 39)));
}
goto ret_;
}
f_expect_id_327(F->up, &(*F->res_387));
goto ret_;
ret_:

  return;
}

static void f_subprogram_390(struct f_greenc_1fr *up_, P174 *res_389) {
  struct f_subprogram_390fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_389 = res_389;
F->x_1712 = NULL;
F->line_1713 = INT64_MIN;
F->line_1713 = f_cur_line_308(F->up);
F->is_proc_1714 = INT_MIN;
F->is_proc_1714 = f_at_kw_310(F->up, rt_g_lit("PROCEDURE", 9));
f_skip_321(F->up);
if (G_NV(F->is_proc_1714)) {
F->x_1712 = f_nn_301(F->up, ((rt_int)44LL), G_NV(F->line_1713));
} else {
F->x_1712 = f_nn_301(F->up, ((rt_int)45LL), G_NV(F->line_1713));
}
f_designator_388(F->up, &(*(P174)rt_nil_check(F->x_1712)).name_);
if (((f_at_kw_310(F->up, rt_g_lit("IS", 2)) && (f_kind_at_316(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_318(F->up, ((rt_int)1LL)), rt_g_lit("NEW", 3)))) {
f_instantiation_1238(F->up, F->x_1712, &(*F->res_389));
goto ret_;
}
if (f_at_op_312(F->up, rt_g_lit("(", 1))) {
f_formal_part_386(F->up, &(*(P174)rt_nil_check(F->x_1712)).a_);
}
if (f_at_kw_310(F->up, rt_g_lit("RETURN", 6))) {
f_skip_321(F->up);
f_subtype_ind_365(F->up, &(*(P174)rt_nil_check(F->x_1712)).b_);
if (G_NV(F->is_proc_1714)) {
(*(P174)rt_nil_check(F->x_1712)).flag_ = ((rt_int)1LL);
}
} else if ((!G_NV(F->is_proc_1714))) {
f_perror_320(F->up, rt_g_lit("a function needs a RETURN clause", 32));
}
if (f_at_kw_310(F->up, rt_g_lit("RENAMES", 7))) {
f_skip_321(F->up);
(*(P174)rt_nil_check(F->x_1712)).ival_ = ((rt_int)2LL);
f_name_p_359(F->up, &(*(P174)rt_nil_check(F->x_1712)).c_);
f_expect_op_325(F->up, rt_g_lit(";", 1));
(*F->res_389) = F->x_1712;
goto ret_;
}
if (f_at_op_312(F->up, rt_g_lit(";", 1))) {
f_skip_321(F->up);
(*(P174)rt_nil_check(F->x_1712)).ival_ = ((rt_int)1LL);
(*F->res_389) = F->x_1712;
goto ret_;
}
f_expect_kw_323(F->up, rt_g_lit("IS", 2));
if (f_at_kw_310(F->up, rt_g_lit("SEPARATE", 8))) {
f_perror_320(F->up, rt_g_lit("separate bodies are not handled", 31));
}
f_body_part_392(F->up, F->x_1712);
if ((f_at_kind_314(F->up, ((rt_int)1LL)) || f_at_kind_314(F->up, ((rt_int)6LL)))) {
if ((!eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1715 = F->up->toks_112; ix1715.p[rt_index(G_NV(F->up->tpos_114), ix1715.lo, ix1715.hi) - ix1715.lo]; }))).s_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1712)).name_))))) {
f_perror_320(F->up, cat_rt_gstr(rt_g_lit("the name after END does not match ", 34), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1712)).name_))));
}
f_skip_321(F->up);
}
f_expect_op_325(F->up, rt_g_lit(";", 1));
(*F->res_389) = F->x_1712;
goto ret_;
ret_:

  return;
}

static void f_body_part_392(struct f_greenc_1fr *up_, P174 x_391) {
  struct f_body_part_392fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_391 = x_391;
f_decl_part_380(F->up, &(*(P174)rt_nil_check(F->x_391)).c_);
if (f_at_kw_310(F->up, rt_g_lit("BEGIN", 5))) {
f_skip_321(F->up);
F->up->saw_interface_207 = 0;
f_statements_399(F->up, &(*(P174)rt_nil_check(F->x_391)).d_);
if ((G_NV(F->up->saw_interface_207) && ((*(P174)rt_nil_check(F->x_391)).d_ == NULL))) {
(*(P174)rt_nil_check(F->x_391)).tag_ = f_mk_227(F->up, rt_g_lit("INTERFACE", 9));
}
F->up->saw_interface_207 = 0;
}
if (f_at_kw_310(F->up, rt_g_lit("EXCEPTION", 9))) {
f_parse_handlers_394(F->up, &(*(P174)rt_nil_check(F->x_391)).e_);
}
f_expect_kw_323(F->up, rt_g_lit("END", 3));
ret_:

  return;
}

static void f_parse_handlers_394(struct f_greenc_1fr *up_, P174 *res_393) {
  struct f_parse_handlers_394fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_393 = res_393;
F->head_1716 = NULL;
F->tail_1717 = NULL;
F->h_1718 = NULL;
F->names_1719 = NULL;
F->ntail_1720 = NULL;
F->n_1721 = NULL;
f_expect_kw_323(F->up, rt_g_lit("EXCEPTION", 9));
while (f_at_kw_310(F->up, rt_g_lit("WHEN", 4))) {
f_skip_321(F->up);
F->h_1718 = f_nn_301(F->up, ((rt_int)62LL), f_cur_line_308(F->up));
F->names_1719 = NULL;
F->ntail_1720 = NULL;
for (;;) {
if (f_at_kw_310(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_321(F->up);
F->n_1721 = f_nn_301(F->up, ((rt_int)5LL), f_cur_line_308(F->up));
(*(P174)rt_nil_check(F->n_1721)).name_ = f_mk_227(F->up, rt_g_lit("OTHERS", 6));
} else {
f_name_node_329(F->up, &F->n_1721);
while (f_at_op_312(F->up, rt_g_lit(".", 1))) {
f_skip_321(F->up);
if (((*(P174)rt_nil_check(F->n_1721)).tag_ == NULL)) {
(*(P174)rt_nil_check(F->n_1721)).tag_ = (*(P174)rt_nil_check(F->n_1721)).name_;
} else {
(*(P174)rt_nil_check(F->n_1721)).tag_ = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_1721)).tag_)), one_rt_gstr(46)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_1721)).name_))));
}
f_expect_id_327(F->up, &(*(P174)rt_nil_check(F->n_1721)).name_);
}
L_end_1724: ;
}
f_append_305(F->up, &F->names_1719, &F->ntail_1720, F->n_1721);
if ((!f_at_op_312(F->up, rt_g_lit("|", 1)))) {
goto L_end_1723;
}
f_skip_321(F->up);
}
L_end_1723: ;
f_expect_op_325(F->up, rt_g_lit("=>", 2));
(*(P174)rt_nil_check(F->h_1718)).a_ = F->names_1719;
f_statements_399(F->up, &(*(P174)rt_nil_check(F->h_1718)).b_);
f_append_305(F->up, &F->head_1716, &F->tail_1717, F->h_1718);
}
L_end_1722: ;
(*F->res_393) = F->head_1716;
goto ret_;
ret_:

  return;
}

static void f_package_p_396(struct f_greenc_1fr *up_, P174 *res_395) {
  struct f_package_p_396fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_395 = res_395;
F->x_1725 = NULL;
F->line_1726 = INT64_MIN;
F->line_1726 = f_cur_line_308(F->up);
f_expect_kw_323(F->up, rt_g_lit("PACKAGE", 7));
if (f_at_kw_310(F->up, rt_g_lit("BODY", 4))) {
f_skip_321(F->up);
F->x_1725 = f_nn_301(F->up, ((rt_int)49LL), G_NV(F->line_1726));
f_expect_id_327(F->up, &(*(P174)rt_nil_check(F->x_1725)).name_);
f_expect_kw_323(F->up, rt_g_lit("IS", 2));
f_body_part_392(F->up, F->x_1725);
} else {
F->x_1725 = f_nn_301(F->up, ((rt_int)48LL), G_NV(F->line_1726));
f_expect_id_327(F->up, &(*(P174)rt_nil_check(F->x_1725)).name_);
if (((f_at_kw_310(F->up, rt_g_lit("IS", 2)) && (f_kind_at_316(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_318(F->up, ((rt_int)1LL)), rt_g_lit("NEW", 3)))) {
f_instantiation_1238(F->up, F->x_1725, &(*F->res_395));
goto ret_;
}
if (f_at_kw_310(F->up, rt_g_lit("RENAMES", 7))) {
f_skip_321(F->up);
(*(P174)rt_nil_check(F->x_1725)).flag_ = ((rt_int)3LL);
f_name_p_359(F->up, &(*(P174)rt_nil_check(F->x_1725)).a_);
f_expect_op_325(F->up, rt_g_lit(";", 1));
(*F->res_395) = F->x_1725;
goto ret_;
}
f_expect_kw_323(F->up, rt_g_lit("IS", 2));
f_decl_part_380(F->up, &(*(P174)rt_nil_check(F->x_1725)).c_);
if (f_at_kw_310(F->up, rt_g_lit("PRIVATE", 7))) {
f_skip_321(F->up);
f_decl_part_380(F->up, &(*(P174)rt_nil_check(F->x_1725)).d_);
}
f_expect_kw_323(F->up, rt_g_lit("END", 3));
}
if (f_at_kind_314(F->up, ((rt_int)1LL))) {
f_skip_321(F->up);
}
f_expect_op_325(F->up, rt_g_lit(";", 1));
(*F->res_395) = F->x_1725;
goto ret_;
ret_:

  return;
}

static int f_at_statements_end_397(struct f_greenc_1fr *up_) {
  struct f_at_statements_end_397fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ((((((f_at_kw_310(F->up, rt_g_lit("END", 3)) || f_at_kw_310(F->up, rt_g_lit("ELSE", 4))) || f_at_kw_310(F->up, rt_g_lit("ELSIF", 5))) || f_at_kw_310(F->up, rt_g_lit("WHEN", 4))) || f_at_kw_310(F->up, rt_g_lit("EXCEPTION", 9))) || f_at_kw_310(F->up, rt_g_lit("OR", 2))) || f_at_kind_314(F->up, ((rt_int)0LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_statements_399(struct f_greenc_1fr *up_, P174 *res_398) {
  struct f_statements_399fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_398 = res_398;
F->head_1727 = NULL;
F->tail_1728 = NULL;
F->x_1729 = NULL;
while ((!f_at_statements_end_397(F->up))) {
if (f_at_kw_310(F->up, rt_g_lit("PRAGMA", 6))) {
f_pragma_p_371(F->up, &F->x_1729);
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1729)).name_)), rt_g_lit("INTERFACE", 9))) {
F->up->saw_interface_207 = 1;
}
} else {
f_statement_401(F->up, &F->x_1729);
f_append_305(F->up, &F->head_1727, &F->tail_1728, F->x_1729);
}
}
L_end_1730: ;
(*F->res_398) = F->head_1727;
goto ret_;
ret_:

  return;
}

static void f_statement_401(struct f_greenc_1fr *up_, P174 *res_400) {
  struct f_statement_401fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_400 = res_400;
F->l_1731 = NULL;
F->x_1732 = NULL;
F->label_1733 = NULL;
if (f_at_op_312(F->up, rt_g_lit("<<", 2))) {
F->l_1731 = f_nn_301(F->up, ((rt_int)57LL), f_cur_line_308(F->up));
f_skip_321(F->up);
f_expect_id_327(F->up, &F->label_1733);
f_expect_op_325(F->up, rt_g_lit(">>", 2));
(*(P174)rt_nil_check(F->l_1731)).name_ = F->label_1733;
if (f_at_op_312(F->up, rt_g_lit("<<", 2))) {
f_statement_401(F->up, &F->x_1732);
} else {
f_labelled_statement_404(F->up, F->label_1733, &F->x_1732);
}
(*(P174)rt_nil_check(F->l_1731)).next_ = F->x_1732;
(*F->res_400) = F->l_1731;
goto ret_;
}
f_labelled_statement_404(F->up, NULL, &(*F->res_400));
ret_:

  return;
}

static void f_labelled_statement_404(struct f_greenc_1fr *up_, P140 label_402, P174 *res_403) {
  struct f_labelled_statement_404fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->label_402 = label_402;
F->res_403 = res_403;
F->x_1734 = NULL;
F->t_1735 = NULL;
F->line_1736 = INT64_MIN;
F->line_1736 = f_cur_line_308(F->up);
if (f_at_kw_310(F->up, rt_g_lit("NULL", 4))) {
f_skip_321(F->up);
f_expect_op_325(F->up, rt_g_lit(";", 1));
F->x_1734 = f_nn_301(F->up, ((rt_int)31LL), G_NV(F->line_1736));
(*F->res_403) = F->x_1734;
goto ret_;
} else if (f_at_kw_310(F->up, rt_g_lit("IF", 2))) {
f_if_stmt_408(F->up, &F->x_1734);
(*F->res_403) = F->x_1734;
goto ret_;
} else if (f_at_kw_310(F->up, rt_g_lit("CASE", 4))) {
f_case_stmt_410(F->up, &F->x_1734);
(*F->res_403) = F->x_1734;
goto ret_;
} else if (((f_at_kw_310(F->up, rt_g_lit("FOR", 3)) || f_at_kw_310(F->up, rt_g_lit("WHILE", 5))) || f_at_kw_310(F->up, rt_g_lit("LOOP", 4)))) {
f_loop_stmt_412(F->up, &F->x_1734);
(*(P174)rt_nil_check(F->x_1734)).tag_ = F->label_402;
if (f_at_kind_314(F->up, ((rt_int)1LL))) {
if (((F->label_402 == NULL) || (!eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1737 = F->up->toks_112; ix1737.p[rt_index(G_NV(F->up->tpos_114), ix1737.lo, ix1737.hi) - ix1737.lo]; }))).s_)), (*(P140)rt_nil_check(F->label_402)))))) {
f_perror_320(F->up, rt_g_lit("the name after END LOOP does not match the label", 48));
}
f_skip_321(F->up);
} else if ((F->label_402 != NULL)) {
f_perror_320(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the loop labelled ", 18), (*(P140)rt_nil_check(F->label_402))), rt_g_lit(" ends with end loop ", 20)), (*(P140)rt_nil_check(F->label_402))), rt_g_lit(" (RM79 5.6)", 11)));
}
f_expect_op_325(F->up, rt_g_lit(";", 1));
(*F->res_403) = F->x_1734;
goto ret_;
} else if ((f_at_kw_310(F->up, rt_g_lit("DECLARE", 7)) || f_at_kw_310(F->up, rt_g_lit("BEGIN", 5)))) {
F->x_1734 = f_nn_301(F->up, ((rt_int)25LL), G_NV(F->line_1736));
(*(P174)rt_nil_check(F->x_1734)).tag_ = F->label_402;
if (f_at_kw_310(F->up, rt_g_lit("DECLARE", 7))) {
f_skip_321(F->up);
f_decl_part_380(F->up, &(*(P174)rt_nil_check(F->x_1734)).a_);
}
f_expect_kw_323(F->up, rt_g_lit("BEGIN", 5));
f_statements_399(F->up, &(*(P174)rt_nil_check(F->x_1734)).b_);
if (f_at_kw_310(F->up, rt_g_lit("EXCEPTION", 9))) {
f_parse_handlers_394(F->up, &(*(P174)rt_nil_check(F->x_1734)).c_);
}
f_expect_kw_323(F->up, rt_g_lit("END", 3));
if (f_at_kind_314(F->up, ((rt_int)1LL))) {
if (((F->label_402 == NULL) || (!eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1738 = F->up->toks_112; ix1738.p[rt_index(G_NV(F->up->tpos_114), ix1738.lo, ix1738.hi) - ix1738.lo]; }))).s_)), (*(P140)rt_nil_check(F->label_402)))))) {
f_perror_320(F->up, rt_g_lit("the name after END does not match the label of the block (RM79 6.7)", 67));
}
f_skip_321(F->up);
} else if ((F->label_402 != NULL)) {
f_perror_320(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the block labelled ", 19), (*(P140)rt_nil_check(F->label_402))), rt_g_lit(" ends with end ", 15)), (*(P140)rt_nil_check(F->label_402))), rt_g_lit(" (RM79 6.7)", 11)));
}
f_expect_op_325(F->up, rt_g_lit(";", 1));
(*F->res_403) = F->x_1734;
goto ret_;
} else if (f_at_kw_310(F->up, rt_g_lit("EXIT", 4))) {
f_skip_321(F->up);
F->x_1734 = f_nn_301(F->up, ((rt_int)26LL), G_NV(F->line_1736));
if (f_at_kind_314(F->up, ((rt_int)1LL))) {
f_expect_id_327(F->up, &(*(P174)rt_nil_check(F->x_1734)).name_);
}
if (f_at_kw_310(F->up, rt_g_lit("WHEN", 4))) {
f_skip_321(F->up);
f_expr_338(F->up, &(*(P174)rt_nil_check(F->x_1734)).a_);
}
f_expect_op_325(F->up, rt_g_lit(";", 1));
(*F->res_403) = F->x_1734;
goto ret_;
} else if (f_at_kw_310(F->up, rt_g_lit("RETURN", 6))) {
f_skip_321(F->up);
F->x_1734 = f_nn_301(F->up, ((rt_int)27LL), G_NV(F->line_1736));
if ((!f_at_op_312(F->up, rt_g_lit(";", 1)))) {
f_expr_338(F->up, &(*(P174)rt_nil_check(F->x_1734)).a_);
}
f_expect_op_325(F->up, rt_g_lit(";", 1));
(*F->res_403) = F->x_1734;
goto ret_;
} else if (f_at_kw_310(F->up, rt_g_lit("RAISE", 5))) {
f_skip_321(F->up);
if (f_at_op_312(F->up, rt_g_lit(";", 1))) {
f_skip_321(F->up);
F->x_1734 = f_nn_301(F->up, ((rt_int)29LL), G_NV(F->line_1736));
(*F->res_403) = F->x_1734;
goto ret_;
}
F->x_1734 = f_nn_301(F->up, ((rt_int)28LL), G_NV(F->line_1736));
f_expect_id_327(F->up, &(*(P174)rt_nil_check(F->x_1734)).name_);
if (f_at_op_312(F->up, rt_g_lit("(", 1))) {
f_skip_321(F->up);
f_expr_338(F->up, &(*(P174)rt_nil_check(F->x_1734)).a_);
f_expect_op_325(F->up, rt_g_lit(")", 1));
}
while (f_at_op_312(F->up, rt_g_lit(".", 1))) {
f_skip_321(F->up);
(*(P174)rt_nil_check(F->x_1734)).tag_ = (*(P174)rt_nil_check(F->x_1734)).name_;
f_expect_id_327(F->up, &(*(P174)rt_nil_check(F->x_1734)).name_);
}
L_end_1739: ;
f_expect_op_325(F->up, rt_g_lit(";", 1));
(*F->res_403) = F->x_1734;
goto ret_;
} else if (f_at_kw_310(F->up, rt_g_lit("ASSERT", 6))) {
f_skip_321(F->up);
F->x_1734 = f_nn_301(F->up, ((rt_int)30LL), G_NV(F->line_1736));
f_expr_338(F->up, &(*(P174)rt_nil_check(F->x_1734)).a_);
f_expect_op_325(F->up, rt_g_lit(";", 1));
(*F->res_403) = F->x_1734;
goto ret_;
} else if (f_at_kw_310(F->up, rt_g_lit("GOTO", 4))) {
f_skip_321(F->up);
F->x_1734 = f_nn_301(F->up, ((rt_int)58LL), G_NV(F->line_1736));
f_expect_id_327(F->up, &(*(P174)rt_nil_check(F->x_1734)).name_);
f_expect_op_325(F->up, rt_g_lit(";", 1));
(*F->res_403) = F->x_1734;
goto ret_;
}
f_task_statement_406(F->up, &F->x_1734);
if ((F->x_1734 != NULL)) {
(*F->res_403) = F->x_1734;
goto ret_;
}
f_name_p_359(F->up, &F->t_1735);
if (f_at_op_312(F->up, rt_g_lit(":=", 2))) {
f_skip_321(F->up);
F->x_1734 = f_nn_301(F->up, ((rt_int)20LL), G_NV(F->line_1736));
(*(P174)rt_nil_check(F->x_1734)).a_ = F->t_1735;
f_expr_338(F->up, &(*(P174)rt_nil_check(F->x_1734)).b_);
} else {
F->x_1734 = f_nn_301(F->up, ((rt_int)21LL), G_NV(F->line_1736));
(*(P174)rt_nil_check(F->x_1734)).a_ = F->t_1735;
}
f_expect_op_325(F->up, rt_g_lit(";", 1));
(*F->res_403) = F->x_1734;
goto ret_;
ret_:

  return;
}

static void f_task_statement_406(struct f_greenc_1fr *up_, P174 *res_405) {
  struct f_task_statement_406fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_405 = res_405;
f_parse_task_statement_1115(F->up, &(*F->res_405));
ret_:

  return;
}

static void f_if_stmt_408(struct f_greenc_1fr *up_, P174 *res_407) {
  struct f_if_stmt_408fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_407 = res_407;
F->x_1740 = NULL;
F->arm_1741 = NULL;
F->head_1742 = NULL;
F->tail_1743 = NULL;
F->go_1744 = INT_MIN;
F->go_1744 = 1;
F->x_1740 = f_nn_301(F->up, ((rt_int)22LL), f_cur_line_308(F->up));
f_skip_321(F->up);
F->arm_1741 = f_nn_301(F->up, ((rt_int)60LL), f_cur_line_308(F->up));
f_expr_338(F->up, &(*(P174)rt_nil_check(F->arm_1741)).a_);
f_expect_kw_323(F->up, rt_g_lit("THEN", 4));
f_statements_399(F->up, &(*(P174)rt_nil_check(F->arm_1741)).b_);
f_append_305(F->up, &F->head_1742, &F->tail_1743, F->arm_1741);
while (G_NV(F->go_1744)) {
if (f_at_kw_310(F->up, rt_g_lit("ELSIF", 5))) {
f_skip_321(F->up);
F->arm_1741 = f_nn_301(F->up, ((rt_int)60LL), f_cur_line_308(F->up));
f_expr_338(F->up, &(*(P174)rt_nil_check(F->arm_1741)).a_);
f_expect_kw_323(F->up, rt_g_lit("THEN", 4));
f_statements_399(F->up, &(*(P174)rt_nil_check(F->arm_1741)).b_);
f_append_305(F->up, &F->head_1742, &F->tail_1743, F->arm_1741);
} else if (f_at_kw_310(F->up, rt_g_lit("ELSE", 4))) {
f_skip_321(F->up);
(*(P174)rt_nil_check(F->x_1740)).flag_ = ((rt_int)1LL);
f_statements_399(F->up, &(*(P174)rt_nil_check(F->x_1740)).b_);
} else {
F->go_1744 = 0;
}
}
L_end_1745: ;
f_expect_kw_323(F->up, rt_g_lit("END", 3));
f_expect_kw_323(F->up, rt_g_lit("IF", 2));
f_expect_op_325(F->up, rt_g_lit(";", 1));
(*(P174)rt_nil_check(F->x_1740)).a_ = F->head_1742;
(*F->res_407) = F->x_1740;
goto ret_;
ret_:

  return;
}

static void f_case_stmt_410(struct f_greenc_1fr *up_, P174 *res_409) {
  struct f_case_stmt_410fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_409 = res_409;
F->x_1746 = NULL;
F->arm_1747 = NULL;
F->head_1748 = NULL;
F->tail_1749 = NULL;
F->labs_1750 = NULL;
F->ltail_1751 = NULL;
F->l_1752 = NULL;
F->others_arm_1753 = INT_MIN;
F->x_1746 = f_nn_301(F->up, ((rt_int)23LL), f_cur_line_308(F->up));
f_skip_321(F->up);
f_expr_338(F->up, &(*(P174)rt_nil_check(F->x_1746)).a_);
f_expect_kw_323(F->up, rt_g_lit("OF", 2));
while (f_at_kw_310(F->up, rt_g_lit("WHEN", 4))) {
f_skip_321(F->up);
F->labs_1750 = NULL;
F->ltail_1751 = NULL;
F->others_arm_1753 = 0;
for (;;) {
if (f_at_kw_310(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_321(F->up);
F->others_arm_1753 = 1;
} else {
F->l_1752 = f_nn_301(F->up, ((rt_int)61LL), f_cur_line_308(F->up));
f_simple_expr_346(F->up, &(*(P174)rt_nil_check(F->l_1752)).a_);
if (f_at_op_312(F->up, rt_g_lit("..", 2))) {
f_skip_321(F->up);
f_simple_expr_346(F->up, &(*(P174)rt_nil_check(F->l_1752)).b_);
}
f_append_305(F->up, &F->labs_1750, &F->ltail_1751, F->l_1752);
}
if ((!f_at_op_312(F->up, rt_g_lit("|", 1)))) {
goto L_end_1755;
}
f_skip_321(F->up);
}
L_end_1755: ;
f_expect_op_325(F->up, rt_g_lit("=>", 2));
if (G_NV(F->others_arm_1753)) {
(*(P174)rt_nil_check(F->x_1746)).flag_ = ((rt_int)1LL);
f_statements_399(F->up, &(*(P174)rt_nil_check(F->x_1746)).c_);
if ((!f_at_kw_310(F->up, rt_g_lit("END", 3)))) {
f_perror_320(F->up, rt_g_lit("others is the last choice of a case statement (RM79 5.5)", 56));
}
} else {
F->arm_1747 = f_nn_301(F->up, ((rt_int)60LL), f_cur_line_308(F->up));
(*(P174)rt_nil_check(F->arm_1747)).a_ = F->labs_1750;
f_statements_399(F->up, &(*(P174)rt_nil_check(F->arm_1747)).b_);
f_append_305(F->up, &F->head_1748, &F->tail_1749, F->arm_1747);
}
}
L_end_1754: ;
f_expect_kw_323(F->up, rt_g_lit("END", 3));
f_expect_kw_323(F->up, rt_g_lit("CASE", 4));
f_expect_op_325(F->up, rt_g_lit(";", 1));
(*(P174)rt_nil_check(F->x_1746)).b_ = F->head_1748;
(*F->res_409) = F->x_1746;
goto ret_;
ret_:

  return;
}

static void f_loop_stmt_412(struct f_greenc_1fr *up_, P174 *res_411) {
  struct f_loop_stmt_412fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_411 = res_411;
F->x_1756 = NULL;
F->r_1757 = NULL;
F->line_1758 = INT64_MIN;
F->line_1758 = f_cur_line_308(F->up);
F->x_1756 = f_nn_301(F->up, ((rt_int)24LL), G_NV(F->line_1758));
if (f_at_kw_310(F->up, rt_g_lit("FOR", 3))) {
f_skip_321(F->up);
(*(P174)rt_nil_check(F->x_1756)).flag_ = ((rt_int)2LL);
f_expect_id_327(F->up, &(*(P174)rt_nil_check(F->x_1756)).name_);
f_expect_kw_323(F->up, rt_g_lit("IN", 2));
if (f_at_kw_310(F->up, rt_g_lit("REVERSE", 7))) {
f_skip_321(F->up);
(*(P174)rt_nil_check(F->x_1756)).ival_ = ((rt_int)1LL);
}
if (((f_at_kind_314(F->up, ((rt_int)1LL)) && (f_kind_at_316(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_318(F->up, ((rt_int)1LL)), rt_g_lit("LOOP", 4)))) {
f_subtype_ind_365(F->up, &(*(P174)rt_nil_check(F->x_1756)).a_);
} else {
f_discrete_range_p_363(F->up, &(*(P174)rt_nil_check(F->x_1756)).a_);
}
} else if (f_at_kw_310(F->up, rt_g_lit("WHILE", 5))) {
f_skip_321(F->up);
(*(P174)rt_nil_check(F->x_1756)).flag_ = ((rt_int)1LL);
f_expr_338(F->up, &(*(P174)rt_nil_check(F->x_1756)).a_);
}
f_expect_kw_323(F->up, rt_g_lit("LOOP", 4));
f_statements_399(F->up, &(*(P174)rt_nil_check(F->x_1756)).b_);
f_expect_kw_323(F->up, rt_g_lit("END", 3));
f_expect_kw_323(F->up, rt_g_lit("LOOP", 4));
(*F->res_411) = F->x_1756;
goto ret_;
ret_:

  return;
}

static void f_compilation_414(struct f_greenc_1fr *up_, P174 *res_413) {
  struct f_compilation_414fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_413 = res_413;
F->head_1759 = NULL;
F->tail_1760 = NULL;
F->x_1761 = NULL;
while ((!f_at_kind_314(F->up, ((rt_int)0LL)))) {
if (f_at_kw_310(F->up, rt_g_lit("PRAGMA", 6))) {
f_pragma_p_371(F->up, &F->x_1761);
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1761)).name_)), rt_g_lit("ENVIRONMENT", 11))) {
F->x_1761 = (*(P174)rt_nil_check(F->x_1761)).a_;
while ((F->x_1761 != NULL)) {
F->up->env_names_197 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->up->env_names_197)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1761)).name_))), one_rt_gstr(44)));
F->x_1761 = (*(P174)rt_nil_check(F->x_1761)).next_;
}
L_end_1763: ;
}
} else {
if ((!(((((f_at_kw_310(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_310(F->up, rt_g_lit("FUNCTION", 8))) || f_at_kw_310(F->up, rt_g_lit("PACKAGE", 7))) || f_at_kw_310(F->up, rt_g_lit("TASK", 4))) || f_at_kw_310(F->up, rt_g_lit("GENERIC", 7))) || f_at_kw_310(F->up, rt_g_lit("RESTRICTED", 10))))) {
f_perror_320(F->up, rt_g_lit("a compilation unit is a subprogram, a package or a task", 55));
}
f_unit_p_377(F->up, &F->x_1761);
if (((*(P174)rt_nil_check(F->x_1761)).formal_ == NULL)) {
(*(P174)rt_nil_check(F->x_1761)).formal_ = f_mk_227(F->up, rt_g_lit(",", 1));
}
(*(P174)rt_nil_check(F->x_1761)).formal_ = f_mk_227(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1761)).formal_)), (*(P140)rt_nil_check(F->up->env_names_197))));
f_append_305(F->up, &F->head_1759, &F->tail_1760, F->x_1761);
}
}
L_end_1762: ;
(*F->res_413) = F->head_1759;
goto ret_;
ret_:

  return;
}

static rt_int f_hash_416(struct f_greenc_1fr *up_, rt_gstr s_415) {
  struct f_hash_416fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_415 = cp_rt_gstr(s_415);
F->h_1764 = INT64_MIN;
F->h_1764 = ((rt_int)0LL);
{ rt_int lo1768 = ((rt_int)1LL), hi1769 = ({ rt_gstr at1766 = F->s_415; at1766.hi >= at1766.lo ? at1766.hi - at1766.lo + 1 : (rt_int)0; });
for (rt_int it1770 = lo1768; it1770 <= hi1769; it1770++) {
F->i_1767 = it1770;
F->h_1764 = rt_rem(rt_add(rt_mul(G_NV(F->h_1764), ((rt_int)31LL)), ((rt_int)(G_NV(({ rt_gstr ix1771 = F->s_415; ix1771.p[rt_index(F->i_1767, ix1771.lo, ix1771.hi) - ix1771.lo]; }))) + 1)), ((rt_int)4093LL));
}
}
L_end_1765: ;
F->result_ = G_NV(F->h_1764);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_listed_419(struct f_greenc_1fr *up_, P140 list_417, rt_gstr name_418) {
  struct f_listed_419fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->list_417 = list_417;
F->name_418 = cp_rt_gstr(name_418);
F->l_1772 = cp_rt_gstr((*(P140)rt_nil_check(F->list_417)));
F->n_1773 = INT64_MIN;
F->n_1773 = ({ rt_gstr at1774 = F->name_418; at1774.hi >= at1774.lo ? at1774.hi - at1774.lo + 1 : (rt_int)0; });
{ rt_int lo1779 = ({ rt_gstr at1776 = F->l_1772; at1776.lo; }), hi1780 = rt_sub(rt_sub(({ rt_gstr at1777 = F->l_1772; at1777.hi; }), G_NV(F->n_1773)), ((rt_int)1LL));
for (rt_int it1781 = lo1779; it1781 <= hi1780; it1781++) {
F->i_1778 = it1781;
if (((G_NV(({ rt_gstr ix1782 = F->l_1772; ix1782.p[rt_index(F->i_1778, ix1782.lo, ix1782.hi) - ix1782.lo]; })) == 44) && (G_NV(({ rt_gstr ix1783 = F->l_1772; ix1783.p[rt_index(rt_add(rt_add(F->i_1778, G_NV(F->n_1773)), ((rt_int)1LL)), ix1783.lo, ix1783.hi) - ix1783.lo]; })) == 44))) {
if (eq_rt_gstr(({ rt_gstr sl1784 = F->l_1772; rt_int l_ = rt_add(F->i_1778, ((rt_int)1LL)), h_ = rt_add(F->i_1778, G_NV(F->n_1773)); if (l_ <= h_) { rt_index(l_, sl1784.lo, sl1784.hi); rt_index(h_, sl1784.lo, sl1784.hi); } sl1784.p += l_ - sl1784.lo; sl1784.lo = l_; sl1784.hi = h_; sl1784; }), F->name_418)) {
F->result_ = 1;
goto ret_;
}
}
}
}
L_end_1775: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_visible_sym_421(struct f_greenc_1fr *up_, P117 y_420) {
  struct f_visible_sym_421fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_420 = y_420;
F->b_1785 = NULL;
F->b_1785 = F->up->barriers_200;
if ((G_NV((*(P117)rt_nil_check(F->y_420)).depth_) == ((rt_int)0LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->b_1785 != NULL)) {
if (((G_NV((*(P117)rt_nil_check(F->y_420)).depth_) <= G_NV((*(P198)rt_nil_check(F->b_1785)).limit_)) && (G_NV((*(P117)rt_nil_check(F->y_420)).depth_) != G_NV((*(P198)rt_nil_check(F->b_1785)).keep_)))) {
if ((!f_listed_419(F->up, (*(P198)rt_nil_check(F->b_1785)).allowed_, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_420)).name_))))) {
F->result_ = 0;
goto ret_;
}
}
F->b_1785 = (*(P198)rt_nil_check(F->b_1785)).next_;
}
L_end_1786: ;
F->result_ = 1;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P117 f_lookup_423(struct f_greenc_1fr *up_, rt_gstr name_422) {
  struct f_lookup_423fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_422 = cp_rt_gstr(name_422);
F->y_1787 = NULL;
F->y_1787 = ({ A116 ix1788 = F->up->table_119; ix1788.p[rt_index(f_hash_416(F->up, F->name_422), ix1788.lo, ix1788.hi) - ix1788.lo]; });
while ((F->y_1787 != NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1787)).name_)), F->name_422) && f_visible_sym_421(F->up, F->y_1787))) {
F->result_ = F->y_1787;
goto ret_;
}
F->y_1787 = (*(P117)rt_nil_check(F->y_1787)).chain_;
}
L_end_1789: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_task_426(struct f_greenc_1fr *up_, P117 a_424, P117 b_425) {
  struct f_same_task_426fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_424 = a_424;
F->b_425 = b_425;
if ((F->a_424 == F->b_425)) {
F->result_ = 1;
goto ret_;
} else if (((F->a_424 == NULL) || (F->b_425 == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->a_424)).cname_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_425)).cname_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P117 f_lookup_entry_429(struct f_greenc_1fr *up_, rt_gstr name_427, P117 owner_428) {
  struct f_lookup_entry_429fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_427 = cp_rt_gstr(name_427);
F->owner_428 = owner_428;
F->y_1790 = NULL;
F->y_1790 = ({ A116 ix1791 = F->up->table_119; ix1791.p[rt_index(f_hash_416(F->up, F->name_427), ix1791.lo, ix1791.hi) - ix1791.lo]; });
while ((F->y_1790 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1790)).name_)), F->name_427) && (G_NV((*(P117)rt_nil_check(F->y_1790)).kind_) == ((rt_int)10LL))) && f_same_task_426(F->up, (*(P117)rt_nil_check(F->y_1790)).members_, F->owner_428))) {
F->result_ = F->y_1790;
goto ret_;
}
F->y_1790 = (*(P117)rt_nil_check(F->y_1790)).chain_;
}
L_end_1792: ;
F->result_ = f_lookup_423(F->up, F->name_427);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P117 f_lookup_at_432(struct f_greenc_1fr *up_, rt_gstr name_430, rt_int d_431) {
  struct f_lookup_at_432fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_430 = cp_rt_gstr(name_430);
F->d_431 = d_431;
F->y_1793 = NULL;
F->y_1793 = ({ A116 ix1794 = F->up->table_119; ix1794.p[rt_index(f_hash_416(F->up, F->name_430), ix1794.lo, ix1794.hi) - ix1794.lo]; });
while ((F->y_1793 != NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1793)).name_)), F->name_430) && (G_NV((*(P117)rt_nil_check(F->y_1793)).depth_) == F->d_431))) {
F->result_ = F->y_1793;
goto ret_;
}
F->y_1793 = (*(P117)rt_nil_check(F->y_1793)).chain_;
}
L_end_1795: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_enclosing_depth_434(struct f_greenc_1fr *up_, rt_gstr name_433) {
  struct f_enclosing_depth_434fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_433 = cp_rt_gstr(name_433);
{ rt_int lo1798 = ((rt_int)1LL), hi1799 = G_NV(F->up->nunits_188);
for (rt_int it1800 = hi1799; it1800 >= lo1798; it1800--) {
F->i_1797 = it1800;
if (eq_rt_gstr((*(P140)rt_nil_check(({ A183 ix1801 = F->up->unit_names_184; ix1801.p[rt_index(F->i_1797, ix1801.lo, ix1801.hi) - ix1801.lo]; }))), F->name_433)) {
F->result_ = G_NV(({ A185 ix1802 = F->up->unit_depths_186; ix1802.p[rt_index(F->i_1797, ix1802.lo, ix1802.hi) - ix1802.lo]; }));
goto ret_;
}
}
}
L_end_1796: ;
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_push_unit_436(struct f_greenc_1fr *up_, P140 name_435) {
  struct f_push_unit_436fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_435 = name_435;
F->up->nunits_188 = rt_add(G_NV(F->up->nunits_188), ((rt_int)1LL));
(*({ A183 *ix1803 = &(F->up->unit_names_184); &ix1803->p[rt_index(G_NV(F->up->nunits_188), ix1803->lo, ix1803->hi) - ix1803->lo]; })) = F->name_435;
(*({ A185 *ix1804 = &(F->up->unit_depths_186); &ix1804->p[rt_index(G_NV(F->up->nunits_188), ix1804->lo, ix1804->hi) - ix1804->lo]; })) = G_NV(F->up->depth_120);
ret_:

  return;
}

static P117 f_lookup_decl_438(struct f_greenc_1fr *up_, P174 d_437) {
  struct f_lookup_decl_438fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_437 = d_437;
F->y_1805 = NULL;
F->y_1805 = ({ A116 ix1806 = F->up->table_119; ix1806.p[rt_index(f_hash_416(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->d_437)).name_))), ix1806.lo, ix1806.hi) - ix1806.lo]; });
while ((F->y_1805 != NULL)) {
if (((*(P117)rt_nil_check(F->y_1805)).decl_ == F->d_437)) {
F->result_ = F->y_1805;
goto ret_;
}
F->y_1805 = (*(P117)rt_nil_check(F->y_1805)).chain_;
}
L_end_1807: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_overloadable_440(struct f_greenc_1fr *up_, P117 y_439) {
  struct f_overloadable_440fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_439 = y_439;
F->result_ = ((((G_NV((*(P117)rt_nil_check(F->y_439)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_439)).kind_) == ((rt_int)4LL))) || (G_NV((*(P117)rt_nil_check(F->y_439)).kind_) == ((rt_int)7LL))) || (G_NV((*(P117)rt_nil_check(F->y_439)).kind_) == ((rt_int)10LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_443(struct f_greenc_1fr *up_, P122 a_441, P122 b_442) {
  struct f_same_443fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_441 = a_441;
F->b_442 = b_442;
F->result_ = (F->a_441 == F->b_442);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P122 f_root_445(struct f_greenc_1fr *up_, P122 t_444) {
  struct f_root_445fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_444 = t_444;
F->r_1808 = NULL;
F->r_1808 = F->t_444;
while (((*(P122)rt_nil_check(F->r_1808)).parent_ != NULL)) {
F->r_1808 = (*(P122)rt_nil_check(F->r_1808)).parent_;
}
L_end_1809: ;
F->result_ = F->r_1808;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_derived_from_448(struct f_greenc_1fr *up_, P122 a_446, P122 b_447) {
  struct f_derived_from_448fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_446 = a_446;
F->b_447 = b_447;
F->r_1810 = NULL;
F->r_1810 = F->a_446;
while ((F->r_1810 != NULL)) {
if ((F->r_1810 == F->b_447)) {
F->result_ = 1;
goto ret_;
}
F->r_1810 = (*(P122)rt_nil_check(F->r_1810)).parent_;
}
L_end_1811: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_numeric_450(struct f_greenc_1fr *up_, P122 t_449) {
  struct f_is_numeric_450fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_449 = t_449;
F->result_ = (((G_NV((*(P122)rt_nil_check(F->t_449)).kind_) == ((rt_int)1LL)) || (G_NV((*(P122)rt_nil_check(F->t_449)).kind_) == ((rt_int)3LL))) || (G_NV((*(P122)rt_nil_check(F->t_449)).kind_) == ((rt_int)16LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_discrete_452(struct f_greenc_1fr *up_, P122 t_451) {
  struct f_is_discrete_452fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_451 = t_451;
F->result_ = ((((G_NV((*(P122)rt_nil_check(F->t_451)).kind_) == ((rt_int)1LL)) || (G_NV((*(P122)rt_nil_check(F->t_451)).kind_) == ((rt_int)4LL))) || (G_NV((*(P122)rt_nil_check(F->t_451)).kind_) == ((rt_int)11LL))) || (G_NV((*(P122)rt_nil_check(F->t_451)).kind_) == ((rt_int)2LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_types_455(struct f_greenc_1fr *up_, P1812 a_453, P1812 b_454) {
  struct f_same_types_455fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_453 = a_453;
F->b_454 = b_454;
F->x_1814 = NULL;
F->x_1814 = F->a_453;
F->y_1815 = NULL;
F->y_1815 = F->b_454;
while (((F->x_1814 != NULL) && (F->y_1815 != NULL))) {
if (((!f_same_443(F->up, (*(P1812)rt_nil_check(F->x_1814)).t_, (*(P1812)rt_nil_check(F->y_1815)).t_)) || (G_NV((*(P1812)rt_nil_check(F->x_1814)).mode_) != G_NV((*(P1812)rt_nil_check(F->y_1815)).mode_)))) {
F->result_ = 0;
goto ret_;
}
F->x_1814 = (*(P1812)rt_nil_check(F->x_1814)).next_;
F->y_1815 = (*(P1812)rt_nil_check(F->y_1815)).next_;
}
L_end_1816: ;
F->result_ = ((F->x_1814 == NULL) && (F->y_1815 == NULL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_signature_458(struct f_greenc_1fr *up_, P1812 a_456, P1812 b_457) {
  struct f_same_signature_458fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_456 = a_456;
F->b_457 = b_457;
F->x_1817 = NULL;
F->x_1817 = F->a_456;
F->y_1818 = NULL;
F->y_1818 = F->b_457;
while (((F->x_1817 != NULL) && (F->y_1818 != NULL))) {
if ((((!f_same_443(F->up, (*(P1812)rt_nil_check(F->x_1817)).t_, (*(P1812)rt_nil_check(F->y_1818)).t_)) || (G_NV((*(P1812)rt_nil_check(F->x_1817)).mode_) != G_NV((*(P1812)rt_nil_check(F->y_1818)).mode_))) || (!eq_rt_gstr((*(P140)rt_nil_check((*(P1812)rt_nil_check(F->x_1817)).name_)), (*(P140)rt_nil_check((*(P1812)rt_nil_check(F->y_1818)).name_)))))) {
F->result_ = 0;
goto ret_;
}
F->x_1817 = (*(P1812)rt_nil_check(F->x_1817)).next_;
F->y_1818 = (*(P1812)rt_nil_check(F->y_1818)).next_;
}
L_end_1819: ;
F->result_ = ((F->x_1817 == NULL) && (F->y_1818 == NULL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_distinct_overload_461(struct f_greenc_1fr *up_, P117 y_459, P117 z_460) {
  struct f_distinct_overload_461fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_459 = y_459;
F->z_460 = z_460;
if ((!(f_overloadable_440(F->up, F->y_459) && f_overloadable_440(F->up, F->z_460)))) {
F->result_ = 0;
goto ret_;
} else if ((G_NV((*(P117)rt_nil_check(F->y_459)).kind_) != G_NV((*(P117)rt_nil_check(F->z_460)).kind_))) {
F->result_ = 1;
goto ret_;
}
F->result_ = ((!f_same_signature_458(F->up, (*(P117)rt_nil_check(F->y_459)).params_, (*(P117)rt_nil_check(F->z_460)).params_)) || (!f_same_443(F->up, (*(P117)rt_nil_check(F->y_459)).result_, (*(P117)rt_nil_check(F->z_460)).result_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_define_464(struct f_greenc_1fr *up_, P117 y_462, rt_int line_463) {
  struct f_define_464fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_462 = y_462;
F->line_463 = line_463;
F->h_1820 = INT64_MIN;
F->h_1820 = f_hash_416(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_462)).name_)));
F->z_1821 = NULL;
F->z_1821 = ({ A116 ix1822 = F->up->table_119; ix1822.p[rt_index(G_NV(F->h_1820), ix1822.lo, ix1822.hi) - ix1822.lo]; });
while ((F->z_1821 != NULL)) {
if ((((G_NV((*(P117)rt_nil_check(F->z_1821)).depth_) == G_NV(F->up->depth_120)) && eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_1821)).name_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_462)).name_)))) && (!f_distinct_overload_461(F->up, F->y_462, F->z_1821)))) {
f_fail_248(F->up, F->line_463, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_462)).name_)), rt_g_lit(" is already declared in this declarative part", 45)));
}
F->z_1821 = (*(P117)rt_nil_check(F->z_1821)).chain_;
}
L_end_1823: ;
(*(P117)rt_nil_check(F->y_462)).depth_ = G_NV(F->up->depth_120);
(*(P117)rt_nil_check(F->y_462)).chain_ = ({ A116 ix1824 = F->up->table_119; ix1824.p[rt_index(G_NV(F->h_1820), ix1824.lo, ix1824.hi) - ix1824.lo]; });
(*({ A116 *ix1825 = &(F->up->table_119); &ix1825->p[rt_index(G_NV(F->h_1820), ix1825->lo, ix1825->hi) - ix1825->lo]; })) = F->y_462;
(*(P117)rt_nil_check(F->y_462)).stack_ = F->up->scope_stack_121;
F->up->scope_stack_121 = F->y_462;
ret_:

  return;
}

static void f_open_scope_465(struct f_greenc_1fr *up_) {
  struct f_open_scope_465fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->depth_120 = rt_add(G_NV(F->up->depth_120), ((rt_int)1LL));
ret_:

  return;
}

static void f_close_scope_466(struct f_greenc_1fr *up_) {
  struct f_close_scope_466fr *F = rt_alloc(sizeof *F);
F->up = up_;
while (((F->up->scope_stack_121 != NULL) && (G_NV((*(P117)rt_nil_check(F->up->scope_stack_121)).depth_) == G_NV(F->up->depth_120)))) {
(*({ A116 *ix1827 = &(F->up->table_119); &ix1827->p[rt_index(f_hash_416(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->scope_stack_121)).name_))), ix1827->lo, ix1827->hi) - ix1827->lo]; })) = (*(P117)rt_nil_check(F->up->scope_stack_121)).chain_;
F->up->scope_stack_121 = (*(P117)rt_nil_check(F->up->scope_stack_121)).stack_;
}
L_end_1826: ;
F->up->depth_120 = rt_sub(G_NV(F->up->depth_120), ((rt_int)1LL));
ret_:

  return;
}

static P117 f_new_sym_469(struct f_greenc_1fr *up_, rt_int kind_467, P140 name_468) {
  struct f_new_sym_469fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_467 = kind_467;
F->name_468 = name_468;
F->result_ = ({ R118 *cell1828 = rt_alloc(sizeof(R118)); *cell1828 = cp_R118(({ R118 ag1829; ag1829.kind_ = F->kind_467; ag1829.name_ = F->name_468; ag1829.t_ = NULL; ag1829.c_ = NULL; ag1829.access_path_ = NULL; ag1829.cname_ = NULL; ag1829.ro_ = 0; ag1829.mvalue_ = ((rt_int)0LL); ag1829.hasmv_ = 0; ag1829.decl_ = NULL; ag1829.params_ = NULL; ag1829.result_ = NULL; ag1829.depth_ = ((rt_int)0LL); ag1829.level_ = ((rt_int)0LL); ag1829.byref_ = 0; ag1829.vrp_ = 0; ag1829.hidden_ = 0; ag1829.from_use_ = 0; ag1829.members_ = NULL; ag1829.mnext_ = NULL; ag1829.chain_ = NULL; ag1829.stack_ = NULL; ag1829.flags_ = ((rt_int)0LL); ag1829; })); (P117)cell1828; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P122 f_new_typ_471(struct f_greenc_1fr *up_, rt_int kind_470) {
  struct f_new_typ_471fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_470 = kind_470;
F->result_ = ({ R123 *cell1832 = rt_alloc(sizeof(R123)); *cell1832 = cp_R123(({ R123 ag1833; ag1833.kind_ = F->kind_470; ag1833.name_ = NULL; ag1833.lits_ = NULL; ag1833.elem_ = NULL; ag1833.idx_ = NULL; ag1833.elemcons_ = NULL; ag1833.tcons_ = NULL; ag1833.fields_ = NULL; ag1833.target_ = NULL; ag1833.decl_ = NULL; ag1833.cname_ = NULL; ag1833.forward_ = 0; ag1833.defined_ = 0; ag1833.priv_ = 0; ag1833.next_ = NULL; ag1833.idx2_ = NULL; ag1833.littab_ = NULL; ag1833.parent_ = NULL; ag1833.ndigits_ = ((rt_int)0LL); ag1833.fdelta_ = NULL; ag1833.fsmall_ = NULL; ag1833.dims_ = ((rt_int)0LL); ag1833.is_restricted_ = 0; ag1833; })); (P122)cell1832; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P178 f_new_cons_472(struct f_greenc_1fr *up_) {
  struct f_new_cons_472fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ({ R179 *cell1836 = rt_alloc(sizeof(R179)); *cell1836 = cp_R179(({ R179 ag1837; ag1837.lo_ = NULL; ag1837.hi_ = NULL; ag1837.slen_ = NULL; ag1837.mlo_ = ((rt_int)0LL); ag1837.mhi_ = ((rt_int)0LL); ag1837.hasm_ = 0; ag1837.lo2_ = NULL; ag1837.hi2_ = NULL; ag1837.acc_ = NULL; ag1837.inner_ = NULL; ag1837.dv_ = NULL; ag1837; })); (P178)cell1836; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_bounded_474(struct f_greenc_1fr *up_, P178 c_473) {
  struct f_bounded_474fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_473 = c_473;
if ((F->c_473 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((*(P178)rt_nil_check(F->c_473)).lo_ != NULL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_bounded_hi_476(struct f_greenc_1fr *up_, P178 c_475) {
  struct f_bounded_hi_476fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_475 = c_475;
if ((F->c_475 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((*(P178)rt_nil_check(F->c_475)).hi_ != NULL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_static_bounds_478(struct f_greenc_1fr *up_, P178 c_477) {
  struct f_static_bounds_478fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_477 = c_477;
if ((F->c_477 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = G_NV((*(P178)rt_nil_check(F->c_477)).hasm_);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_discriminated_480(struct f_greenc_1fr *up_, P178 c_479) {
  struct f_discriminated_480fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_479 = c_479;
if ((F->c_479 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((*(P178)rt_nil_check(F->c_479)).dv_ != NULL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_kind_name_482(struct f_greenc_1fr *up_, P122 t_481) {
  struct f_kind_name_482fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_481 = t_481;
if (((*(P122)rt_nil_check(F->t_481)).name_ != NULL)) {
F->result_ = (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_481)).name_));
goto ret_;
}
{ rt_int sel1838 = G_NV((*(P122)rt_nil_check(F->t_481)).kind_);
if (0 || sel1838 == ((rt_int)1LL)) {
F->result_ = rt_g_lit("INTEGER", 7);
goto ret_;
} else if (0 || sel1838 == ((rt_int)2LL)) {
F->result_ = rt_g_lit("BOOLEAN", 7);
goto ret_;
} else if (0 || sel1838 == ((rt_int)3LL)) {
F->result_ = rt_g_lit("FLOAT", 5);
goto ret_;
} else if (0 || sel1838 == ((rt_int)5LL)) {
F->result_ = rt_g_lit("STRING", 6);
goto ret_;
} else if (0 || sel1838 == ((rt_int)10LL)) {
F->result_ = rt_g_lit("null", 4);
goto ret_;
} else if (0 || sel1838 == ((rt_int)11LL)) {
F->result_ = rt_g_lit("CHARACTER", 9);
goto ret_;
} else if (0 || sel1838 == ((rt_int)16LL)) {
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

static void f_check_type_486(struct f_greenc_1fr *up_, P122 got_483, P122 want_484, rt_int line_485) {
  struct f_check_type_486fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->got_483 = got_483;
F->want_484 = want_484;
F->line_485 = line_485;
if ((F->want_484 == NULL)) {
goto ret_;
}
if (((G_NV((*(P122)rt_nil_check(F->got_483)).kind_) == ((rt_int)10LL)) && (G_NV((*(P122)rt_nil_check(F->want_484)).kind_) == ((rt_int)8LL)))) {
goto ret_;
}
if ((!f_same_443(F->up, F->got_483, F->want_484))) {
f_fail_248(F->up, F->line_485, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("type mismatch: ", 15), f_kind_name_482(F->up, F->got_483)), rt_g_lit(" where ", 7)), f_kind_name_482(F->up, F->want_484)), rt_g_lit(" is required", 12)));
}
ret_:

  return;
}

static rt_int f_field_count_488(struct f_greenc_1fr *up_, P122 t_487) {
  struct f_field_count_488fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_487 = t_487;
F->n_1839 = INT64_MIN;
F->n_1839 = ((rt_int)0LL);
F->f_1840 = NULL;
F->f_1840 = (*(P122)rt_nil_check(F->t_487)).fields_;
while ((F->f_1840 != NULL)) {
F->n_1839 = rt_add(G_NV(F->n_1839), ((rt_int)1LL));
F->f_1840 = (*(P1830)rt_nil_check(F->f_1840)).next_;
}
L_end_1841: ;
F->result_ = G_NV(F->n_1839);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_ctype_491(struct f_greenc_1fr *up_, P122 t_489, P140 *r_490) {
  struct f_ctype_491fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_489 = t_489;
F->r_490 = r_490;
F->s_1842 = NULL;
{ rt_int sel1843 = G_NV((*(P122)rt_nil_check(F->t_489)).kind_);
if (0 || sel1843 == ((rt_int)1LL)) {
(*F->r_490) = f_mk_227(F->up, rt_g_lit("rt_int", 6));
} else if (0 || sel1843 == ((rt_int)2LL) || sel1843 == ((rt_int)4LL) || sel1843 == ((rt_int)11LL)) {
(*F->r_490) = f_mk_227(F->up, rt_g_lit("int", 3));
} else if (0 || sel1843 == ((rt_int)3LL) || sel1843 == ((rt_int)16LL)) {
(*F->r_490) = f_mk_227(F->up, rt_g_lit("double", 6));
} else if (0 || sel1843 == ((rt_int)5LL)) {
(*F->r_490) = f_mk_227(F->up, rt_g_lit("rstr", 4));
} else if (0 || sel1843 == ((rt_int)9LL)) {
(*F->r_490) = f_mk_227(F->up, rt_g_lit("void", 4));
} else if (0 || sel1843 == ((rt_int)13LL)) {
(*F->r_490) = f_mk_227(F->up, rt_g_lit("rt_act", 6));
} else if (0 || sel1843 == ((rt_int)14LL)) {
(*F->r_490) = f_mk_227(F->up, rt_g_lit("rt_taskdecl", 11));
} else if (0 || sel1843 == ((rt_int)15LL)) {
(*F->r_490) = f_mk_227(F->up, rt_g_lit("rt_entry", 8));
} else {
if (((*(P122)rt_nil_check(F->t_489)).cname_ == NULL)) {
f_declare_ctype_496(F->up, F->t_489);
} else if ((((G_NV((*(P122)rt_nil_check(F->t_489)).kind_) == ((rt_int)7LL)) && G_NV((*(P122)rt_nil_check(F->t_489)).forward_)) && (!G_NV((*(P122)rt_nil_check(F->t_489)).defined_)))) {
(*(P122)rt_nil_check(F->t_489)).defined_ = 1;
f_field_decls_494(F->up, F->t_489, &F->s_1842);
f_put_to_252(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_489)).cname_))), rt_g_lit(" {", 2)), (*(P140)rt_nil_check(F->s_1842))), rt_g_lit(" };", 3)));
}
(*F->r_490) = (*(P122)rt_nil_check(F->t_489)).cname_;
}
}
ret_:

  return;
}

static void f_field_decls_494(struct f_greenc_1fr *up_, P122 t_492, P140 *r_493) {
  struct f_field_decls_494fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_492 = t_492;
F->r_493 = r_493;
F->f_1844 = NULL;
F->f_1844 = (*(P122)rt_nil_check(F->t_492)).fields_;
F->s_1845 = NULL;
F->ct_1846 = NULL;
F->s_1845 = f_mk_227(F->up, rt_g_lit(" int dummy_;", 12));
while ((F->f_1844 != NULL)) {
f_ctype_491(F->up, (*(P1830)rt_nil_check(F->f_1844)).t_, &F->ct_1846);
F->s_1845 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->s_1845)), one_rt_gstr(32)), (*(P140)rt_nil_check(F->ct_1846))), one_rt_gstr(32)), f_c_field_244(F->up, (*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_1844)).name_)))), one_rt_gstr(59)));
F->f_1844 = (*(P1830)rt_nil_check(F->f_1844)).next_;
}
L_end_1847: ;
(*F->r_493) = F->s_1845;
ret_:

  return;
}

static void f_declare_ctype_496(struct f_greenc_1fr *up_, P122 t_495) {
  struct f_declare_ctype_496fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_495 = t_495;
F->ct_1848 = NULL;
F->s_1849 = NULL;
F->target_1850 = NULL;
if ((G_NV((*(P122)rt_nil_check(F->t_495)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_607(F->up, F->t_495);
}
if ((G_NV((*(P122)rt_nil_check(F->t_495)).kind_) == ((rt_int)6LL))) {
f_new_name_230(F->up, rt_g_lit("A", 1), &(*(P122)rt_nil_check(F->t_495)).cname_);
} else if ((G_NV((*(P122)rt_nil_check(F->t_495)).kind_) == ((rt_int)7LL))) {
f_new_name_230(F->up, rt_g_lit("R", 1), &(*(P122)rt_nil_check(F->t_495)).cname_);
} else {
f_new_name_230(F->up, rt_g_lit("P", 1), &(*(P122)rt_nil_check(F->t_495)).cname_);
}
(*(P122)rt_nil_check(F->t_495)).next_ = F->up->all_types_124;
F->up->all_types_124 = F->t_495;
if ((G_NV((*(P122)rt_nil_check(F->t_495)).kind_) == ((rt_int)8LL))) {
F->target_1850 = (*(P122)rt_nil_check(F->t_495)).target_;
if ((F->target_1850 == NULL)) {
f_fail_248(F->up, ((rt_int)0LL), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the designated type of ", 23), f_kind_name_482(F->up, F->t_495)), rt_g_lit(" is never declared", 18)));
}
if ((G_NV((*(P122)rt_nil_check(F->target_1850)).kind_) == ((rt_int)7LL))) {
if (((*(P122)rt_nil_check(F->target_1850)).cname_ == NULL)) {
f_new_name_230(F->up, rt_g_lit("R", 1), &(*(P122)rt_nil_check(F->target_1850)).cname_);
(*(P122)rt_nil_check(F->target_1850)).next_ = F->up->all_types_124;
F->up->all_types_124 = F->target_1850;
f_put_to_252(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->target_1850)).cname_))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->target_1850)).cname_))), one_rt_gstr(59)));
(*(P122)rt_nil_check(F->target_1850)).forward_ = 1;
}
f_put_to_252(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->target_1850)).cname_))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_495)).cname_))), one_rt_gstr(59)));
} else {
f_ctype_491(F->up, F->target_1850, &F->ct_1848);
f_put_to_252(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef ", 8), (*(P140)rt_nil_check(F->ct_1848))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_495)).cname_))), one_rt_gstr(59)));
}
} else if ((G_NV((*(P122)rt_nil_check(F->t_495)).kind_) == ((rt_int)6LL))) {
f_elem_ctype_565(F->up, (*(P122)rt_nil_check(F->t_495)).elem_, &F->ct_1848);
f_put_to_252(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_495)).cname_))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_495)).cname_))), one_rt_gstr(59)));
f_put_to_252(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_495)).cname_))), rt_g_lit(" { rt_int lo, hi, lo2, hi2; ", 28)), (*(P140)rt_nil_check(F->ct_1848))), rt_g_lit(" *p; };", 7)));
} else {
f_put_to_252(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_495)).cname_))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_495)).cname_))), one_rt_gstr(59)));
(*(P122)rt_nil_check(F->t_495)).defined_ = 1;
f_field_decls_494(F->up, F->t_495, &F->s_1849);
f_put_to_252(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_495)).cname_))), rt_g_lit(" {", 2)), (*(P140)rt_nil_check(F->s_1849))), rt_g_lit(" };", 3)));
}
ret_:

  return;
}

static rt_int f_lit_index_499(struct f_greenc_1fr *up_, P174 lits_497, rt_gstr name_498) {
  struct f_lit_index_499fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lits_497 = lits_497;
F->name_498 = cp_rt_gstr(name_498);
F->i_1851 = INT64_MIN;
F->i_1851 = ((rt_int)0LL);
F->l_1852 = NULL;
F->l_1852 = F->lits_497;
while ((F->l_1852 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->l_1852)).name_)), F->name_498)) {
F->result_ = G_NV(F->i_1851);
goto ret_;
}
F->i_1851 = rt_add(G_NV(F->i_1851), ((rt_int)1LL));
F->l_1852 = (*(P174)rt_nil_check(F->l_1852)).next_;
}
L_end_1853: ;
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_manifest_503(struct f_greenc_1fr *up_, P174 e_500, rt_int *v_501, int *ok_502) {
  struct f_manifest_503fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_500 = e_500;
F->v_501 = v_501;
F->ok_502 = ok_502;
F->a_1854 = INT64_MIN;
F->b_1855 = INT64_MIN;
F->ok2_1856 = INT_MIN;
F->y_1857 = NULL;
(*F->ok_502) = 0;
(*F->v_501) = ((rt_int)0LL);
if ((G_NV((*(P174)rt_nil_check(F->e_500)).kind_) == ((rt_int)1LL))) {
(*F->ok_502) = 1;
(*F->v_501) = G_NV((*(P174)rt_nil_check(F->e_500)).ival_);
} else if ((G_NV((*(P174)rt_nil_check(F->e_500)).kind_) == ((rt_int)15LL))) {
f_manifest_503(F->up, (*(P174)rt_nil_check(F->e_500)).a_, &(*F->v_501), &(*F->ok_502));
 (void)rt_range((*F->ok_502), 0, 1);
} else if (((G_NV((*(P174)rt_nil_check(F->e_500)).kind_) == ((rt_int)6LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_500)).name_)), rt_g_lit("-", 1)))) {
f_manifest_503(F->up, (*(P174)rt_nil_check(F->e_500)).a_, &F->a_1854, &(*F->ok_502));
 (void)rt_range((*F->ok_502), 0, 1);
(*F->v_501) = rt_neg(G_NV(F->a_1854));
} else if (((G_NV((*(P174)rt_nil_check(F->e_500)).kind_) == ((rt_int)7LL)) && ((eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_500)).name_)), rt_g_lit("+", 1)) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_500)).name_)), rt_g_lit("-", 1))) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_500)).name_)), rt_g_lit("*", 1))))) {
f_manifest_503(F->up, (*(P174)rt_nil_check(F->e_500)).a_, &F->a_1854, &(*F->ok_502));
 (void)rt_range((*F->ok_502), 0, 1);
f_manifest_503(F->up, (*(P174)rt_nil_check(F->e_500)).b_, &F->b_1855, &F->ok2_1856);
 (void)rt_range(F->ok2_1856, 0, 1);
(*F->ok_502) = (G_NV((*F->ok_502)) && G_NV(F->ok2_1856));
if (G_NV((*F->ok_502))) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_500)).name_)), rt_g_lit("+", 1))) {
(*F->v_501) = rt_add(G_NV(F->a_1854), G_NV(F->b_1855));
} else if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_500)).name_)), rt_g_lit("-", 1))) {
(*F->v_501) = rt_sub(G_NV(F->a_1854), G_NV(F->b_1855));
} else {
(*F->v_501) = rt_mul(G_NV(F->a_1854), G_NV(F->b_1855));
}
}
} else if ((G_NV((*(P174)rt_nil_check(F->e_500)).kind_) == ((rt_int)5LL))) {
F->y_1857 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_500)).name_)));
if ((((F->y_1857 != NULL) && ((G_NV((*(P117)rt_nil_check(F->y_1857)).kind_) == ((rt_int)2LL)) || (G_NV((*(P117)rt_nil_check(F->y_1857)).kind_) == ((rt_int)7LL)))) && G_NV((*(P117)rt_nil_check(F->y_1857)).hasmv_))) {
(*F->ok_502) = 1;
(*F->v_501) = G_NV((*(P117)rt_nil_check(F->y_1857)).mvalue_);
}
} else if (((G_NV((*(P174)rt_nil_check(F->e_500)).kind_) == ((rt_int)9LL)) && f_is_package_1044(F->up, (*(P174)rt_nil_check(F->e_500)).a_))) {
F->y_1857 = f_member_of_1048(F->up, f_path_of_344(F->up, (*(P174)rt_nil_check(F->e_500)).a_), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_500)).name_)), G_NV((*(P174)rt_nil_check(F->e_500)).line_));
if ((((F->y_1857 != NULL) && ((G_NV((*(P117)rt_nil_check(F->y_1857)).kind_) == ((rt_int)2LL)) || (G_NV((*(P117)rt_nil_check(F->y_1857)).kind_) == ((rt_int)7LL)))) && G_NV((*(P117)rt_nil_check(F->y_1857)).hasmv_))) {
(*F->ok_502) = 1;
(*F->v_501) = G_NV((*(P117)rt_nil_check(F->y_1857)).mvalue_);
}
} else if ((((G_NV((*(P174)rt_nil_check(F->e_500)).kind_) == ((rt_int)10LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_500)).a_)).kind_) == ((rt_int)5LL))) && (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_500)).name_)), rt_g_lit("FIRST", 5)) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_500)).name_)), rt_g_lit("LAST", 4))))) {
F->y_1857 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_500)).a_)).name_)));
if (((((F->y_1857 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_1857)).kind_) == ((rt_int)5LL))) && ((*(P117)rt_nil_check(F->y_1857)).c_ != NULL)) && G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1857)).c_)).hasm_))) {
(*F->ok_502) = 1;
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_500)).name_)), rt_g_lit("FIRST", 5))) {
(*F->v_501) = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1857)).c_)).mlo_);
} else {
(*F->v_501) = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1857)).c_)).mhi_);
}
}
} else if ((((G_NV((*(P174)rt_nil_check(F->e_500)).kind_) == ((rt_int)8LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_500)).a_)).kind_) == ((rt_int)5LL))) && (f_list_len_307(F->up, (*(P174)rt_nil_check(F->e_500)).b_) == ((rt_int)1LL)))) {
F->y_1857 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_500)).a_)).name_)));
if (((((F->y_1857 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_1857)).kind_) == ((rt_int)5LL))) && ((*(P117)rt_nil_check(F->y_1857)).t_ != NULL)) && (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_1857)).t_)).kind_) == ((rt_int)1LL)))) {
f_manifest_503(F->up, (*(P174)rt_nil_check(F->e_500)).b_, &(*F->v_501), &(*F->ok_502));
 (void)rt_range((*F->ok_502), 0, 1);
}
}
ret_:

  return;
}

static void f_resolve_507(struct f_greenc_1fr *up_, P174 st_504, P122 *t_505, P178 *c_506) {
  struct f_resolve_507fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_504 = st_504;
F->t_505 = t_505;
F->c_506 = c_506;
F->y_1858 = NULL;
F->dummy_1859 = NULL;
F->code_1860 = NULL;
F->ok_1861 = INT_MIN;
F->r_1862 = NULL;
(*F->c_506) = f_new_cons_472(F->up);
if ((G_NV((*(P174)rt_nil_check(F->st_504)).kind_) != ((rt_int)80LL))) {
f_type_definition_541(F->up, F->st_504, NULL, &(*F->t_505), &(*F->c_506));
goto ret_;
}
if (((*(P174)rt_nil_check(F->st_504)).tag_ != NULL)) {
F->y_1858 = f_member_of_1048(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->st_504)).tag_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->st_504)).name_)), G_NV((*(P174)rt_nil_check(F->st_504)).line_));
} else {
F->y_1858 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->st_504)).name_)));
}
if (((F->y_1858 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_1858)).kind_) != ((rt_int)5LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->st_504)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->st_504)).name_)), rt_g_lit(" is not a type", 14)));
}
(*F->t_505) = (*(P117)rt_nil_check(F->y_1858)).t_;
if (((*(P117)rt_nil_check(F->y_1858)).c_ != NULL)) {
(*(P178)rt_nil_check((*F->c_506))).lo_ = (*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1858)).c_)).lo_;
(*(P178)rt_nil_check((*F->c_506))).hi_ = (*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1858)).c_)).hi_;
(*(P178)rt_nil_check((*F->c_506))).slen_ = (*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1858)).c_)).slen_;
(*(P178)rt_nil_check((*F->c_506))).mlo_ = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1858)).c_)).mlo_);
(*(P178)rt_nil_check((*F->c_506))).mhi_ = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1858)).c_)).mhi_);
(*(P178)rt_nil_check((*F->c_506))).hasm_ = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1858)).c_)).hasm_);
(*(P178)rt_nil_check((*F->c_506))).acc_ = (*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1858)).c_)).acc_;
(*(P178)rt_nil_check((*F->c_506))).inner_ = (*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1858)).c_)).inner_;
(*(P178)rt_nil_check((*F->c_506))).dv_ = (*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1858)).c_)).dv_;
}
if (((*F->t_505) == NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->st_504)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the type ", 9), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->st_504)).name_))), rt_g_lit(" is used before its full declaration", 36)));
}
if ((G_NV((*(P174)rt_nil_check(F->st_504)).flag_) == ((rt_int)3LL))) {
if (((G_NV((*(P122)rt_nil_check((*F->t_505))).kind_) != ((rt_int)3LL)) && (G_NV((*(P122)rt_nil_check((*F->t_505))).kind_) != ((rt_int)16LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->st_504)).line_), rt_g_lit("an accuracy constraint applies to a real type (RM79 3.5.5)", 58));
}
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->st_504)).b_, NULL, &F->dummy_1859, &(*(P178)rt_nil_check((*F->c_506))).acc_);
}
if (((G_NV((*(P174)rt_nil_check(F->st_504)).flag_) == ((rt_int)1LL)) || ((G_NV((*(P174)rt_nil_check(F->st_504)).flag_) == ((rt_int)3LL)) && ((*(P174)rt_nil_check(F->st_504)).a_ != NULL)))) {
F->r_1862 = (*(P174)rt_nil_check(F->st_504)).a_;
if (((!f_is_numeric_450(F->up, (*F->t_505))) && (!f_is_discrete_452(F->up, (*F->t_505))))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->st_504)).line_), rt_g_lit("a range constraint applies to a scalar type (RM79 3.5)", 54));
}
f_range_of_525(F->up, F->r_1862, (*F->t_505), (*F->c_506));
} else if ((G_NV((*(P174)rt_nil_check(F->st_504)).flag_) == ((rt_int)2LL))) {
f_constraint_list_511(F->up, F->st_504, (*F->t_505), (*F->c_506));
}
ret_:

  return;
}

static void f_constraint_list_511(struct f_greenc_1fr *up_, P174 st_508, P122 t_509, P178 c_510) {
  struct f_constraint_list_511fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_508 = st_508;
F->t_509 = t_509;
F->c_510 = c_510;
F->r_1863 = NULL;
F->r_1863 = (*(P174)rt_nil_check(F->st_508)).a_;
F->arrt_1864 = NULL;
F->arrt_1864 = F->t_509;
F->cc_1865 = NULL;
F->cc_1865 = F->c_510;
F->it_1866 = NULL;
if ((G_NV((*(P122)rt_nil_check(F->t_509)).kind_) == ((rt_int)7LL))) {
f_discriminant_constraint_515(F->up, F->st_508, F->t_509, F->c_510);
goto ret_;
}
if ((G_NV((*(P122)rt_nil_check(F->t_509)).kind_) != ((rt_int)6LL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->st_508)).line_), rt_g_lit("this type takes no index constraint", 35));
}
if ((f_list_len_307(F->up, F->r_1863) != G_NV((*(P122)rt_nil_check(F->t_509)).dims_))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->st_508)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("an index constraint gives a range for each of the ", 50), rt_g_s2g(rt_str_of_int(G_NV((*(P122)rt_nil_check(F->t_509)).dims_)))), rt_g_lit(" indexes (RM79 3.6)", 19)));
}
while ((F->r_1863 != NULL)) {
if (((*(P174)rt_nil_check(F->r_1863)).formal_ != NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->st_508)).line_), rt_g_lit("an index constraint is a list of discrete ranges (RM79 3.6)", 59));
}
f_discrete_bounds_521(F->up, F->r_1863, (*(P122)rt_nil_check(F->arrt_1864)).idx_, &F->it_1866, &(*(P178)rt_nil_check(F->cc_1865)).lo_, &(*(P178)rt_nil_check(F->cc_1865)).hi_);
f_check_type_486(F->up, F->it_1866, (*(P122)rt_nil_check(F->arrt_1864)).idx_, G_NV((*(P174)rt_nil_check(F->st_508)).line_));
(*(P178)rt_nil_check(F->cc_1865)).mlo_ = ((rt_int)0LL);
(*(P178)rt_nil_check(F->cc_1865)).mhi_ = ((rt_int)0LL);
(*(P178)rt_nil_check(F->cc_1865)).hasm_ = 0;
F->r_1863 = (*(P174)rt_nil_check(F->r_1863)).next_;
if ((F->r_1863 != NULL)) {
(*(P178)rt_nil_check(F->cc_1865)).inner_ = f_new_cons_472(F->up);
F->cc_1865 = (*(P178)rt_nil_check(F->cc_1865)).inner_;
F->arrt_1864 = (*(P122)rt_nil_check(F->arrt_1864)).elem_;
}
}
L_end_1867: ;
ret_:

  return;
}

static void f_discriminant_constraint_515(struct f_greenc_1fr *up_, P174 st_512, P122 t_513, P178 c_514) {
  struct f_discriminant_constraint_515fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_512 = st_512;
F->t_513 = t_513;
F->c_514 = c_514;
F->a_1868 = NULL;
F->a_1868 = (*(P174)rt_nil_check(F->st_512)).a_;
F->f_1869 = NULL;
F->f_1869 = (*(P122)rt_nil_check(F->t_513)).fields_;
F->vt_1870 = NULL;
F->v_1871 = NULL;
F->d_1872 = NULL;
F->tail_1873 = NULL;
(*(P178)rt_nil_check(F->c_514)).dv_ = NULL;
while ((F->a_1868 != NULL)) {
if (((*(P174)rt_nil_check(F->a_1868)).formal_ != NULL)) {
F->f_1869 = (*(P122)rt_nil_check(F->t_513)).fields_;
while (((F->f_1869 != NULL) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_1869)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1868)).formal_)))))) {
F->f_1869 = (*(P1830)rt_nil_check(F->f_1869)).next_;
}
L_end_1875: ;
} else {
while (((F->f_1869 != NULL) && (!G_NV((*(P1830)rt_nil_check(F->f_1869)).is_discr_)))) {
F->f_1869 = (*(P1830)rt_nil_check(F->f_1869)).next_;
}
L_end_1876: ;
}
if (((F->f_1869 == NULL) || (!G_NV((*(P1830)rt_nil_check(F->f_1869)).is_discr_)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->st_512)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("a discriminant constraint gives the values of discriminants of ", 63), f_kind_name_482(F->up, F->t_513)), rt_g_lit(" (RM79 3.7.3)", 13)));
}
f_gexpr_805(F->up, F->a_1868, (*(P1830)rt_nil_check(F->f_1869)).t_, &F->vt_1870, &F->v_1871);
f_check_type_486(F->up, F->vt_1870, (*(P1830)rt_nil_check(F->f_1869)).t_, G_NV((*(P174)rt_nil_check(F->st_512)).line_));
F->d_1872 = ({ R1835 *cell1877 = rt_alloc(sizeof(R1835)); *cell1877 = cp_R1835(({ R1835 ag1878; ag1878.name_ = (*(P1830)rt_nil_check(F->f_1869)).name_; ag1878.v_ = F->v_1871; ag1878.next_ = NULL; ag1878; })); (P1834)cell1877; });
if ((F->tail_1873 == NULL)) {
(*(P178)rt_nil_check(F->c_514)).dv_ = F->d_1872;
} else {
(*(P1834)rt_nil_check(F->tail_1873)).next_ = F->d_1872;
}
F->tail_1873 = F->d_1872;
if (((*(P174)rt_nil_check(F->a_1868)).formal_ == NULL)) {
F->f_1869 = (*(P1830)rt_nil_check(F->f_1869)).next_;
}
F->a_1868 = (*(P174)rt_nil_check(F->a_1868)).next_;
}
L_end_1874: ;
F->f_1869 = (*(P122)rt_nil_check(F->t_513)).fields_;
while ((F->f_1869 != NULL)) {
if (G_NV((*(P1830)rt_nil_check(F->f_1869)).is_discr_)) {
F->d_1872 = (*(P178)rt_nil_check(F->c_514)).dv_;
while (((F->d_1872 != NULL) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P1834)rt_nil_check(F->d_1872)).name_)), (*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_1869)).name_)))))) {
F->d_1872 = (*(P1834)rt_nil_check(F->d_1872)).next_;
}
L_end_1880: ;
if ((F->d_1872 == NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->st_512)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("no value for discriminant ", 26), (*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_1869)).name_))), rt_g_lit(" (RM79 3.7.3)", 13)));
}
}
F->f_1869 = (*(P1830)rt_nil_check(F->f_1869)).next_;
}
L_end_1879: ;
ret_:

  return;
}

static void f_discrete_bounds_521(struct f_greenc_1fr *up_, P174 r_516, P122 want_517, P122 *t_518, P140 *lo_519, P140 *hi_520) {
  struct f_discrete_bounds_521fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_516 = r_516;
F->want_517 = want_517;
F->t_518 = t_518;
F->lo_519 = lo_519;
F->hi_520 = hi_520;
F->c_1881 = NULL;
F->y_1882 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->r_516)).kind_) == ((rt_int)14LL))) {
f_range_bounds_800(F->up, (*(P174)rt_nil_check(F->r_516)).a_, (*(P174)rt_nil_check(F->r_516)).b_, F->want_517, G_NV((*(P174)rt_nil_check(F->r_516)).line_), &(*F->t_518), &(*F->lo_519), &(*F->hi_520));
goto ret_;
}
if ((G_NV((*(P174)rt_nil_check(F->r_516)).kind_) == ((rt_int)5LL))) {
F->y_1882 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_516)).name_)));
if (((F->y_1882 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_1882)).kind_) != ((rt_int)5LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->r_516)).line_), rt_g_lit("a discrete range is L .. H, T range L .. H or a type mark (RM79 3.6)", 68));
}
} else if ((G_NV((*(P174)rt_nil_check(F->r_516)).kind_) != ((rt_int)80LL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->r_516)).line_), rt_g_lit("a discrete range is L .. H, T range L .. H or a type mark (RM79 3.6)", 68));
}
if ((G_NV((*(P174)rt_nil_check(F->r_516)).kind_) == ((rt_int)5LL))) {
(*F->t_518) = (*(P117)rt_nil_check(F->y_1882)).t_;
F->c_1881 = (*(P117)rt_nil_check(F->y_1882)).c_;
} else {
f_resolve_507(F->up, F->r_516, &(*F->t_518), &F->c_1881);
}
if (((F->c_1881 == NULL) || ((*(P178)rt_nil_check(F->c_1881)).lo_ == NULL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->r_516)).line_), rt_g_lit("this type mark has no bounds to give a discrete range", 53));
}
(*F->lo_519) = (*(P178)rt_nil_check(F->c_1881)).lo_;
(*F->hi_520) = (*(P178)rt_nil_check(F->c_1881)).hi_;
ret_:

  return;
}

static void f_range_of_525(struct f_greenc_1fr *up_, P174 r_522, P122 t_523, P178 c_524) {
  struct f_range_of_525fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_522 = r_522;
F->t_523 = t_523;
F->c_524 = c_524;
F->dummy_1883 = NULL;
F->ok_1884 = INT_MIN;
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->r_522)).a_, F->t_523, &F->dummy_1883, &(*(P178)rt_nil_check(F->c_524)).lo_);
f_check_type_486(F->up, F->dummy_1883, F->t_523, G_NV((*(P174)rt_nil_check(F->r_522)).line_));
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->r_522)).b_, F->t_523, &F->dummy_1883, &(*(P178)rt_nil_check(F->c_524)).hi_);
f_check_type_486(F->up, F->dummy_1883, F->t_523, G_NV((*(P174)rt_nil_check(F->r_522)).line_));
if ((G_NV((*(P122)rt_nil_check(F->t_523)).kind_) == ((rt_int)16LL))) {
(*(P178)rt_nil_check(F->c_524)).lo_ = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_524)).lo_))), one_rt_gstr(41)));
(*(P178)rt_nil_check(F->c_524)).hi_ = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_524)).hi_))), one_rt_gstr(41)));
}
f_manifest_503(F->up, (*(P174)rt_nil_check(F->r_522)).a_, &(*(P178)rt_nil_check(F->c_524)).mlo_, &F->ok_1884);
 (void)rt_range(F->ok_1884, 0, 1);
(*(P178)rt_nil_check(F->c_524)).hasm_ = G_NV(F->ok_1884);
f_manifest_503(F->up, (*(P174)rt_nil_check(F->r_522)).b_, &(*(P178)rt_nil_check(F->c_524)).mhi_, &F->ok_1884);
 (void)rt_range(F->ok_1884, 0, 1);
(*(P178)rt_nil_check(F->c_524)).hasm_ = (G_NV((*(P178)rt_nil_check(F->c_524)).hasm_) && G_NV(F->ok_1884));
ret_:

  return;
}

static void f_fresh_typ_529(struct f_greenc_1fr *up_, rt_int kind_526, P140 name_527, P122 *t_528) {
  struct f_fresh_typ_529fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_526 = kind_526;
F->name_527 = name_527;
F->t_528 = t_528;
F->ph_1885 = NULL;
F->ph_1885 = F->up->completing_173;
F->up->completing_173 = NULL;
if ((F->ph_1885 == NULL)) {
(*F->t_528) = f_new_typ_471(F->up, F->kind_526);
(*(P122)rt_nil_check((*F->t_528))).name_ = F->name_527;
goto ret_;
}
as_R123(&(*(P122)rt_nil_check(F->ph_1885)), (*(P122)rt_nil_check(f_new_typ_471(F->up, F->kind_526))));
(*(P122)rt_nil_check(F->ph_1885)).name_ = F->name_527;
(*F->t_528) = F->ph_1885;
ret_:

  return;
}

static void f_inherit_533(struct f_greenc_1fr *up_, P122 parent_530, P122 t_531, rt_int line_532) {
  struct f_inherit_533fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->parent_530 = parent_530;
F->t_531 = t_531;
F->line_532 = line_532;
F->s_1886 = NULL;
F->s_1886 = F->up->scope_stack_121;
F->z_1887 = NULL;
F->p_1888 = NULL;
F->q_1889 = NULL;
F->tail_1890 = NULL;
F->uses_1891 = INT_MIN;
F->news_1892 = NULL;
while ((F->s_1886 != NULL)) {
if (((((G_NV((*(P117)rt_nil_check(F->s_1886)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->s_1886)).kind_) == ((rt_int)4LL))) && (!G_NV((*(P117)rt_nil_check(F->s_1886)).hidden_))) && ((*(P117)rt_nil_check(F->s_1886)).members_ == NULL))) {
F->uses_1891 = f_same_443(F->up, (*(P117)rt_nil_check(F->s_1886)).result_, F->parent_530);
F->p_1888 = (*(P117)rt_nil_check(F->s_1886)).params_;
while ((F->p_1888 != NULL)) {
F->uses_1891 = (G_NV(F->uses_1891) || f_same_443(F->up, (*(P1812)rt_nil_check(F->p_1888)).t_, F->parent_530));
F->p_1888 = (*(P1812)rt_nil_check(F->p_1888)).next_;
}
L_end_1894: ;
if (G_NV(F->uses_1891)) {
f_copy_sym_1053(F->up, F->s_1886, &F->z_1887);
(*(P117)rt_nil_check(F->z_1887)).params_ = NULL;
F->tail_1890 = NULL;
F->p_1888 = (*(P117)rt_nil_check(F->s_1886)).params_;
while ((F->p_1888 != NULL)) {
F->q_1889 = ({ R1813 *cell1896 = rt_alloc(sizeof(R1813)); *cell1896 = cp_R1813(({ R1813 ag1897; ag1897.name_ = (*(P1812)rt_nil_check(F->p_1888)).name_; ag1897.mode_ = G_NV((*(P1812)rt_nil_check(F->p_1888)).mode_); ag1897.t_ = (*(P1812)rt_nil_check(F->p_1888)).t_; ag1897.c_ = (*(P1812)rt_nil_check(F->p_1888)).c_; ag1897.cfield_ = (*(P1812)rt_nil_check(F->p_1888)).cfield_; ag1897.dflt_ = (*(P1812)rt_nil_check(F->p_1888)).dflt_; ag1897.next_ = NULL; ag1897.dsym_ = (*(P1812)rt_nil_check(F->p_1888)).dsym_; ag1897; })); (P1812)cell1896; });
if (f_same_443(F->up, (*(P1812)rt_nil_check(F->q_1889)).t_, F->parent_530)) {
(*(P1812)rt_nil_check(F->q_1889)).t_ = F->t_531;
}
if ((F->tail_1890 == NULL)) {
(*(P117)rt_nil_check(F->z_1887)).params_ = F->q_1889;
} else {
(*(P1812)rt_nil_check(F->tail_1890)).next_ = F->q_1889;
}
F->tail_1890 = F->q_1889;
F->p_1888 = (*(P1812)rt_nil_check(F->p_1888)).next_;
}
L_end_1895: ;
if (f_same_443(F->up, (*(P117)rt_nil_check(F->z_1887)).result_, F->parent_530)) {
(*(P117)rt_nil_check(F->z_1887)).result_ = F->t_531;
}
(*(P117)rt_nil_check(F->z_1887)).chain_ = F->news_1892;
F->news_1892 = F->z_1887;
}
}
F->s_1886 = (*(P117)rt_nil_check(F->s_1886)).stack_;
}
L_end_1893: ;
while ((F->news_1892 != NULL)) {
F->z_1887 = F->news_1892;
F->news_1892 = (*(P117)rt_nil_check(F->news_1892)).chain_;
(*(P117)rt_nil_check(F->z_1887)).chain_ = NULL;
f_define_464(F->up, F->z_1887, F->line_532);
}
L_end_1898: ;
ret_:

  return;
}

static void f_derive_literals_536(struct f_greenc_1fr *up_, P122 t_534, rt_int line_535) {
  struct f_derive_literals_536fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_534 = t_534;
F->line_535 = line_535;
F->l_1899 = NULL;
F->l_1899 = (*(P122)rt_nil_check(F->t_534)).lits_;
F->n_1900 = INT64_MIN;
F->n_1900 = ((rt_int)0LL);
F->y_1901 = NULL;
while ((F->l_1899 != NULL)) {
if ((G_NV((*(P174)rt_nil_check(F->l_1899)).kind_) == ((rt_int)5LL))) {
F->y_1901 = f_new_sym_469(F->up, ((rt_int)7LL), (*(P174)rt_nil_check(F->l_1899)).name_);
(*(P117)rt_nil_check(F->y_1901)).t_ = F->t_534;
(*(P117)rt_nil_check(F->y_1901)).result_ = F->t_534;
(*(P117)rt_nil_check(F->y_1901)).mvalue_ = G_NV(F->n_1900);
(*(P117)rt_nil_check(F->y_1901)).hasmv_ = 1;
f_define_464(F->up, F->y_1901, F->line_535);
}
F->n_1900 = rt_add(G_NV(F->n_1900), ((rt_int)1LL));
F->l_1899 = (*(P174)rt_nil_check(F->l_1899)).next_;
}
L_end_1902: ;
ret_:

  return;
}

static void f_type_definition_541(struct f_greenc_1fr *up_, P174 d_537, P140 name_538, P122 *t_539, P178 *c_540) {
  struct f_type_definition_541fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_537 = d_537;
F->name_538 = name_538;
F->t_539 = t_539;
F->c_540 = c_540;
F->dummy_1903 = NULL;
F->it_1904 = NULL;
F->ic_1905 = NULL;
F->l_1906 = NULL;
F->comp_1907 = NULL;
F->f_1908 = NULL;
F->tail_1909 = NULL;
F->ok_1910 = INT_MIN;
F->n_1911 = INT64_MIN;
F->y_1912 = NULL;
(*F->c_540) = f_new_cons_472(F->up);
{ rt_int sel1913 = G_NV((*(P174)rt_nil_check(F->d_537)).kind_);
if (0 || sel1913 == ((rt_int)70LL)) {
f_fresh_typ_529(F->up, ((rt_int)4LL), F->name_538, &(*F->t_539));
(*(P122)rt_nil_check((*F->t_539))).lits_ = (*(P174)rt_nil_check(F->d_537)).a_;
F->l_1906 = (*(P174)rt_nil_check(F->d_537)).a_;
F->n_1911 = ((rt_int)0LL);
while ((F->l_1906 != NULL)) {
if ((G_NV((*(P174)rt_nil_check(F->l_1906)).kind_) == ((rt_int)5LL))) {
F->y_1912 = f_new_sym_469(F->up, ((rt_int)7LL), (*(P174)rt_nil_check(F->l_1906)).name_);
(*(P117)rt_nil_check(F->y_1912)).t_ = (*F->t_539);
(*(P117)rt_nil_check(F->y_1912)).result_ = (*F->t_539);
(*(P117)rt_nil_check(F->y_1912)).mvalue_ = G_NV(F->n_1911);
(*(P117)rt_nil_check(F->y_1912)).hasmv_ = 1;
f_define_464(F->up, F->y_1912, G_NV((*(P174)rt_nil_check(F->l_1906)).line_));
}
F->n_1911 = rt_add(G_NV(F->n_1911), ((rt_int)1LL));
F->l_1906 = (*(P174)rt_nil_check(F->l_1906)).next_;
}
L_end_1914: ;
(*(P178)rt_nil_check((*F->c_540))).lo_ = f_mk_227(F->up, rt_g_lit("0", 1));
(*(P178)rt_nil_check((*F->c_540))).hi_ = f_mk_227(F->up, rt_g_s2g(rt_str_of_int(rt_sub(G_NV(F->n_1911), ((rt_int)1LL)))));
(*(P178)rt_nil_check((*F->c_540))).mlo_ = ((rt_int)0LL);
(*(P178)rt_nil_check((*F->c_540))).mhi_ = rt_sub(G_NV(F->n_1911), ((rt_int)1LL));
(*(P178)rt_nil_check((*F->c_540))).hasm_ = 1;
} else if (0 || sel1913 == ((rt_int)71LL)) {
f_fresh_typ_529(F->up, ((rt_int)1LL), F->name_538, &(*F->t_539));
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->d_537)).a_, F->up->ty_int_156, &F->dummy_1903, &(*(P178)rt_nil_check((*F->c_540))).lo_);
if ((G_NV((*(P122)rt_nil_check(F->dummy_1903)).kind_) != ((rt_int)1LL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->d_537)).line_), rt_g_lit("the bounds of an integer type are integers (RM79 3.5.4)", 55));
}
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->d_537)).b_, F->up->ty_int_156, &F->dummy_1903, &(*(P178)rt_nil_check((*F->c_540))).hi_);
if ((G_NV((*(P122)rt_nil_check(F->dummy_1903)).kind_) != ((rt_int)1LL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->d_537)).line_), rt_g_lit("the bounds of an integer type are integers (RM79 3.5.4)", 55));
}
f_manifest_503(F->up, (*(P174)rt_nil_check(F->d_537)).a_, &(*(P178)rt_nil_check((*F->c_540))).mlo_, &F->ok_1910);
 (void)rt_range(F->ok_1910, 0, 1);
(*(P178)rt_nil_check((*F->c_540))).hasm_ = G_NV(F->ok_1910);
f_manifest_503(F->up, (*(P174)rt_nil_check(F->d_537)).b_, &(*(P178)rt_nil_check((*F->c_540))).mhi_, &F->ok_1910);
 (void)rt_range(F->ok_1910, 0, 1);
(*(P178)rt_nil_check((*F->c_540))).hasm_ = (G_NV((*(P178)rt_nil_check((*F->c_540))).hasm_) && G_NV(F->ok_1910));
(*(P122)rt_nil_check((*F->t_539))).parent_ = F->up->ty_int_156;
(*(P122)rt_nil_check((*F->t_539))).tcons_ = (*F->c_540);
if ((G_NV((*(P178)rt_nil_check((*F->c_540))).hasm_) && ((G_NV((*(P178)rt_nil_check((*F->c_540))).mlo_) >= rt_neg(((rt_int)2147483648LL))) && (G_NV((*(P178)rt_nil_check((*F->c_540))).mhi_) <= ((rt_int)2147483647LL))))) {
(*(P122)rt_nil_check((*F->t_539))).parent_ = F->up->ty_short_167;
}
f_inherit_533(F->up, (*(P122)rt_nil_check((*F->t_539))).parent_, (*F->t_539), G_NV((*(P174)rt_nil_check(F->d_537)).line_));
} else if (0 || sel1913 == ((rt_int)72LL)) {
f_real_type_605(F->up, F->d_537, F->name_538, &(*F->t_539), &(*F->c_540));
} else if (0 || sel1913 == ((rt_int)73LL)) {
f_array_type_548(F->up, (*(P174)rt_nil_check(F->d_537)).a_, (*(P174)rt_nil_check(F->d_537)).b_, F->name_538, G_NV((*(P174)rt_nil_check(F->d_537)).line_), &(*F->t_539), &(*F->c_540));
} else if (0 || sel1913 == ((rt_int)74LL)) {
f_fresh_typ_529(F->up, ((rt_int)7LL), F->name_538, &(*F->t_539));
F->up->disc_syms_182 = NULL;
f_record_components_586(F->up, (*(P174)rt_nil_check(F->d_537)).a_, (*F->t_539), NULL, G_NV((*(P174)rt_nil_check(F->d_537)).line_));
while ((F->up->disc_syms_182 != NULL)) {
f_remove_sym_581(F->up, F->up->disc_syms_182);
F->up->disc_syms_182 = (*(P117)rt_nil_check(F->up->disc_syms_182)).mnext_;
}
L_end_1915: ;
} else if (0 || sel1913 == ((rt_int)75LL)) {
f_fresh_typ_529(F->up, ((rt_int)8LL), F->name_538, &(*F->t_539));
(*(P122)rt_nil_check((*F->t_539))).decl_ = (*(P174)rt_nil_check(F->d_537)).a_;
if (((((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->d_537)).a_)).kind_) == ((rt_int)80LL)) && (f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->d_537)).a_)).name_))) != NULL)) && (G_NV((*(P117)rt_nil_check(f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->d_537)).a_)).name_))))).kind_) == ((rt_int)5LL))) && ((*(P117)rt_nil_check(f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->d_537)).a_)).name_))))).t_ != NULL))) {
f_finish_ptr_607(F->up, (*F->t_539));
}
} else if (0 || sel1913 == ((rt_int)76LL)) {
f_derived_type_600(F->up, F->d_537, F->name_538, &(*F->t_539), &(*F->c_540));
} else {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->d_537)).line_), rt_g_lit("this type definition is not handled", 35));
}
}
ret_:

  return;
}

static void f_array_type_548(struct f_greenc_1fr *up_, P174 idx_542, P174 comp_543, P140 name_544, rt_int line_545, P122 *t_546, P178 *c_547) {
  struct f_array_type_548fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->idx_542 = idx_542;
F->comp_543 = comp_543;
F->name_544 = name_544;
F->line_545 = line_545;
F->t_546 = t_546;
F->c_547 = c_547;
F->l_1916 = NULL;
F->l_1916 = F->idx_542;
F->rowc_1917 = NULL;
F->ic_1918 = NULL;
F->it_1919 = NULL;
(*F->c_547) = f_new_cons_472(F->up);
f_fresh_typ_529(F->up, ((rt_int)6LL), F->name_544, &(*F->t_546));
(*(P122)rt_nil_check((*F->t_546))).dims_ = f_list_len_307(F->up, F->idx_542);
if (((*(P174)rt_nil_check(F->idx_542)).next_ == NULL)) {
f_resolve_507(F->up, F->comp_543, &(*(P122)rt_nil_check((*F->t_546))).elem_, &(*(P122)rt_nil_check((*F->t_546))).elemcons_);
} else {
if (((G_NV((*(P174)rt_nil_check(F->idx_542)).kind_) == ((rt_int)14LL)) != (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->idx_542)).next_)).kind_) == ((rt_int)14LL)))) {
f_fail_248(F->up, F->line_545, rt_g_lit("the indexes of an array are all discrete ranges or all type marks (RM79 3.6)", 76));
}
f_array_type_548(F->up, (*(P174)rt_nil_check(F->idx_542)).next_, F->comp_543, NULL, F->line_545, &(*(P122)rt_nil_check((*F->t_546))).elem_, &F->rowc_1917);
if (((*(P178)rt_nil_check(F->rowc_1917)).lo_ != NULL)) {
(*(P122)rt_nil_check((*F->t_546))).elemcons_ = F->rowc_1917;
}
}
if ((G_NV((*(P174)rt_nil_check(F->l_1916)).kind_) == ((rt_int)14LL))) {
f_discrete_bounds_521(F->up, F->l_1916, NULL, &(*(P122)rt_nil_check((*F->t_546))).idx_, &(*(P178)rt_nil_check((*F->c_547))).lo_, &(*(P178)rt_nil_check((*F->c_547))).hi_);
f_static_range_552(F->up, (*(P174)rt_nil_check(F->l_1916)).a_, (*(P174)rt_nil_check(F->l_1916)).b_, (*F->c_547));
} else if (((G_NV((*(P174)rt_nil_check(F->l_1916)).kind_) == ((rt_int)80LL)) && (G_NV((*(P174)rt_nil_check(F->l_1916)).flag_) == ((rt_int)1LL)))) {
f_discrete_bounds_521(F->up, F->l_1916, NULL, &(*(P122)rt_nil_check((*F->t_546))).idx_, &(*(P178)rt_nil_check((*F->c_547))).lo_, &(*(P178)rt_nil_check((*F->c_547))).hi_);
} else {
f_resolve_507(F->up, F->l_1916, &(*(P122)rt_nil_check((*F->t_546))).idx_, &F->ic_1918);
if (((((G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check((*F->t_546))).idx_)).kind_) == ((rt_int)4LL)) || (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check((*F->t_546))).idx_)).kind_) == ((rt_int)11LL))) || (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check((*F->t_546))).idx_)).kind_) == ((rt_int)2LL))) || (G_NV((*(P178)rt_nil_check(F->ic_1918)).hasm_) && ((rt_sub(G_NV((*(P178)rt_nil_check(F->ic_1918)).mhi_), G_NV((*(P178)rt_nil_check(F->ic_1918)).mlo_)) >= ((rt_int)0LL)) && (rt_sub(G_NV((*(P178)rt_nil_check(F->ic_1918)).mhi_), G_NV((*(P178)rt_nil_check(F->ic_1918)).mlo_)) < ((rt_int)1000000LL)))))) {
(*(P178)rt_nil_check((*F->c_547))).lo_ = (*(P178)rt_nil_check(F->ic_1918)).lo_;
(*(P178)rt_nil_check((*F->c_547))).hi_ = (*(P178)rt_nil_check(F->ic_1918)).hi_;
(*(P178)rt_nil_check((*F->c_547))).mlo_ = G_NV((*(P178)rt_nil_check(F->ic_1918)).mlo_);
(*(P178)rt_nil_check((*F->c_547))).mhi_ = G_NV((*(P178)rt_nil_check(F->ic_1918)).mhi_);
(*(P178)rt_nil_check((*F->c_547))).hasm_ = G_NV((*(P178)rt_nil_check(F->ic_1918)).hasm_);
} else if (((*(P178)rt_nil_check(F->ic_1918)).lo_ != NULL)) {
(*(P122)rt_nil_check((*F->t_546))).tcons_ = f_new_cons_472(F->up);
(*(P178)rt_nil_check((*(P122)rt_nil_check((*F->t_546))).tcons_)).lo_ = (*(P178)rt_nil_check(F->ic_1918)).lo_;
}
}
if ((!f_is_discrete_452(F->up, (*(P122)rt_nil_check((*F->t_546))).idx_))) {
f_fail_248(F->up, F->line_545, rt_g_lit("an index is of a discrete type (RM79 3.6)", 41));
}
if ((G_NV((*(P122)rt_nil_check((*F->t_546))).dims_) > ((rt_int)1LL))) {
(*(P178)rt_nil_check((*F->c_547))).inner_ = F->rowc_1917;
if ((((*(P178)rt_nil_check((*F->c_547))).lo_ == NULL) != ((*(P178)rt_nil_check(F->rowc_1917)).lo_ == NULL))) {
(*(P178)rt_nil_check((*F->c_547))).lo_ = NULL;
(*(P178)rt_nil_check((*F->c_547))).hi_ = NULL;
(*(P178)rt_nil_check((*F->c_547))).inner_ = NULL;
(*(P122)rt_nil_check((*F->t_546))).elemcons_ = NULL;
}
}
if (((*(P178)rt_nil_check((*F->c_547))).lo_ != NULL)) {
(*(P122)rt_nil_check((*F->t_546))).tcons_ = (*F->c_547);
}
ret_:

  return;
}

static void f_static_range_552(struct f_greenc_1fr *up_, P174 l_549, P174 h_550, P178 c_551) {
  struct f_static_range_552fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_549 = l_549;
F->h_550 = h_550;
F->c_551 = c_551;
F->ok_1920 = INT_MIN;
F->ok2_1921 = INT_MIN;
f_manifest_503(F->up, F->l_549, &(*(P178)rt_nil_check(F->c_551)).mlo_, &F->ok_1920);
 (void)rt_range(F->ok_1920, 0, 1);
f_manifest_503(F->up, F->h_550, &(*(P178)rt_nil_check(F->c_551)).mhi_, &F->ok2_1921);
 (void)rt_range(F->ok2_1921, 0, 1);
if ((f_is_char_lit_786(F->up, F->l_549) && f_is_char_lit_786(F->up, F->h_550))) {
(*(P178)rt_nil_check(F->c_551)).mlo_ = rt_sub(((rt_int)(G_NV(({ rt_gstr ix1922 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->l_549)).name_)); ix1922.p[rt_index(((rt_int)1LL), ix1922.lo, ix1922.hi) - ix1922.lo]; }))) + 1), ((rt_int)1LL));
(*(P178)rt_nil_check(F->c_551)).mhi_ = rt_sub(((rt_int)(G_NV(({ rt_gstr ix1923 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->h_550)).name_)); ix1923.p[rt_index(((rt_int)1LL), ix1923.lo, ix1923.hi) - ix1923.lo]; }))) + 1), ((rt_int)1LL));
F->ok_1920 = 1;
F->ok2_1921 = 1;
}
(*(P178)rt_nil_check(F->c_551)).hasm_ = (G_NV(F->ok_1920) && G_NV(F->ok2_1921));
ret_:

  return;
}

static void f_component_place_558(struct f_greenc_1fr *up_, P122 rt_553, P1830 f_554, rt_gstr a_555, rt_gstr ct_556, P140 *r_557) {
  struct f_component_place_558fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->rt_553 = rt_553;
F->f_554 = f_554;
F->a_555 = cp_rt_gstr(a_555);
F->ct_556 = cp_rt_gstr(ct_556);
F->r_557 = r_557;
F->bits_1924 = NULL;
if (eq_rt_gstr(F->a_555, rt_g_lit("POSITION", 8))) {
(*F->r_557) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)offsetof(", 18), F->ct_556), rt_g_lit(", ", 2)), f_c_field_244(F->up, (*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_554)).name_)))), rt_g_lit("))", 2)));
} else if (eq_rt_gstr(F->a_555, rt_g_lit("FIRST_BIT", 9))) {
(*F->r_557) = f_mk_227(F->up, rt_g_lit("((rt_int)0)", 11));
} else {
(*F->r_557) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(sizeof(((", 19), F->ct_556), rt_g_lit(" *)0)->", 7)), f_c_field_244(F->up, (*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_554)).name_)))), rt_g_lit(") * 8 - 1))", 11)));
}
ret_:

  return;
}

static rt_gstr f_no_value_560(struct f_greenc_1fr *up_, P122 t_559) {
  struct f_no_value_560fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_559 = t_559;
if (((G_NV((*(P122)rt_nil_check(F->t_559)).kind_) == ((rt_int)3LL)) || (G_NV((*(P122)rt_nil_check(F->t_559)).kind_) == ((rt_int)16LL)))) {
F->result_ = rt_g_lit("RT_G_NOVALUE_F", 14);
goto ret_;
} else if ((G_NV((*(P122)rt_nil_check(F->t_559)).kind_) == ((rt_int)1LL))) {
F->result_ = rt_g_lit("INT64_MIN", 9);
goto ret_;
}
F->result_ = rt_g_lit("INT_MIN", 7);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_restricted_here_562(struct f_greenc_1fr *up_, P122 t_561) {
  struct f_restricted_here_562fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_561 = t_561;
if ((!G_NV((*(P122)rt_nil_check(F->t_561)).is_restricted_))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (!f_inside_package_1050(F->up, (*(P122)rt_nil_check(F->t_561)).decl_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_elem_ctype_565(struct f_greenc_1fr *up_, P122 t_563, P140 *r_564) {
  struct f_elem_ctype_565fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_563 = t_563;
F->r_564 = r_564;
if ((G_NV((*(P122)rt_nil_check(F->t_563)).kind_) == ((rt_int)11LL))) {
(*F->r_564) = f_mk_227(F->up, rt_g_lit("unsigned char", 13));
} else {
f_ctype_491(F->up, F->t_563, &(*F->r_564));
}
ret_:

  return;
}

static void f_first_index_568(struct f_greenc_1fr *up_, P122 t_566, P140 *r_567) {
  struct f_first_index_568fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_566 = t_566;
F->r_567 = r_567;
if ((((*(P122)rt_nil_check(F->t_566)).tcons_ != NULL) && ((*(P178)rt_nil_check((*(P122)rt_nil_check(F->t_566)).tcons_)).lo_ != NULL))) {
(*F->r_567) = (*(P178)rt_nil_check((*(P122)rt_nil_check(F->t_566)).tcons_)).lo_;
} else if ((((*(P122)rt_nil_check(F->t_566)).idx_ != NULL) && (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->t_566)).idx_)).kind_) == ((rt_int)1LL)))) {
(*F->r_567) = f_mk_227(F->up, rt_g_lit("1", 1));
} else {
(*F->r_567) = f_mk_227(F->up, rt_g_lit("0", 1));
}
ret_:

  return;
}

static int f_is_string_570(struct f_greenc_1fr *up_, P122 t_569) {
  struct f_is_string_570fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_569 = t_569;
if ((!(F->t_569 != NULL))) {
F->result_ = 0;
goto ret_;
}
if ((!(G_NV((*(P122)rt_nil_check(F->t_569)).kind_) == ((rt_int)6LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_derived_from_448(F->up, F->t_569, F->up->ty_string_160);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_subst_573(struct f_greenc_1fr *up_, rt_gstr s_571, rt_gstr r_572) {
  struct f_subst_573fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_571 = cp_rt_gstr(s_571);
F->r_572 = cp_rt_gstr(r_572);
{ rt_int lo1929 = ({ rt_gstr at1926 = F->s_571; at1926.lo; }), hi1930 = rt_sub(({ rt_gstr at1927 = F->s_571; at1927.hi; }), ((rt_int)1LL));
for (rt_int it1931 = lo1929; it1931 <= hi1930; it1931++) {
F->i_1928 = it1931;
if (((G_NV(({ rt_gstr ix1932 = F->s_571; ix1932.p[rt_index(F->i_1928, ix1932.lo, ix1932.hi) - ix1932.lo]; })) == 64) && (G_NV(({ rt_gstr ix1933 = F->s_571; ix1933.p[rt_index(rt_add(F->i_1928, ((rt_int)1LL)), ix1933.lo, ix1933.hi) - ix1933.lo]; })) == 64))) {
F->result_ = cat_rt_gstr(cat_rt_gstr(({ rt_gstr sl1935 = F->s_571; rt_int l_ = ({ rt_gstr at1934 = F->s_571; at1934.lo; }), h_ = rt_sub(F->i_1928, ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl1935.lo, sl1935.hi); rt_index(h_, sl1935.lo, sl1935.hi); } sl1935.p += l_ - sl1935.lo; sl1935.lo = l_; sl1935.hi = h_; sl1935; }), F->r_572), f_subst_573(F->up, ({ rt_gstr sl1939 = F->s_571; rt_int l_ = rt_add(F->i_1928, ((rt_int)2LL)), h_ = ({ rt_gstr at1938 = F->s_571; at1938.hi; }); if (l_ <= h_) { rt_index(l_, sl1939.lo, sl1939.hi); rt_index(h_, sl1939.lo, sl1939.hi); } sl1939.p += l_ - sl1939.lo; sl1939.lo = l_; sl1939.hi = h_; sl1939; }), F->r_572));
goto ret_;
}
}
}
L_end_1925: ;
F->result_ = F->s_571;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_mentions_record_575(struct f_greenc_1fr *up_, P140 s_574) {
  struct f_mentions_record_575fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_574 = s_574;
if ((F->s_574 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1943 = ((rt_int)1LL), hi1944 = rt_sub(({ rt_gstr at1941 = (*(P140)rt_nil_check(F->s_574)); at1941.hi >= at1941.lo ? at1941.hi - at1941.lo + 1 : (rt_int)0; }), ((rt_int)1LL));
for (rt_int it1945 = lo1943; it1945 <= hi1944; it1945++) {
F->i_1942 = it1945;
if (((G_NV(({ rt_gstr ix1946 = (*(P140)rt_nil_check(F->s_574)); ix1946.p[rt_index(F->i_1942, ix1946.lo, ix1946.hi) - ix1946.lo]; })) == 64) && (G_NV(({ rt_gstr ix1947 = (*(P140)rt_nil_check(F->s_574)); ix1947.p[rt_index(rt_add(F->i_1942, ((rt_int)1LL)), ix1947.lo, ix1947.hi) - ix1947.lo]; })) == 64))) {
F->result_ = 1;
goto ret_;
}
}
}
L_end_1940: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_subst_cons_579(struct f_greenc_1fr *up_, P178 c_576, rt_gstr r_577, P178 *res_578) {
  struct f_subst_cons_579fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_576 = c_576;
F->r_577 = cp_rt_gstr(r_577);
F->res_578 = res_578;
if (((F->c_576 == NULL) || (!(f_mentions_record_575(F->up, (*(P178)rt_nil_check(F->c_576)).lo_) || f_mentions_record_575(F->up, (*(P178)rt_nil_check(F->c_576)).hi_))))) {
(*F->res_578) = F->c_576;
goto ret_;
}
(*F->res_578) = f_new_cons_472(F->up);
as_R179(&(*(P178)rt_nil_check((*F->res_578))), (*(P178)rt_nil_check(F->c_576)));
(*(P178)rt_nil_check((*F->res_578))).lo_ = f_mk_227(F->up, f_subst_573(F->up, (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_576)).lo_)), F->r_577));
(*(P178)rt_nil_check((*F->res_578))).hi_ = f_mk_227(F->up, f_subst_573(F->up, (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_576)).hi_)), F->r_577));
ret_:

  return;
}

static void f_remove_sym_581(struct f_greenc_1fr *up_, P117 y_580) {
  struct f_remove_sym_581fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_580 = y_580;
F->h_1948 = INT64_MIN;
F->h_1948 = f_hash_416(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_580)).name_)));
F->p_1949 = NULL;
if ((({ A116 ix1950 = F->up->table_119; ix1950.p[rt_index(G_NV(F->h_1948), ix1950.lo, ix1950.hi) - ix1950.lo]; }) == F->y_580)) {
(*({ A116 *ix1951 = &(F->up->table_119); &ix1951->p[rt_index(G_NV(F->h_1948), ix1951->lo, ix1951->hi) - ix1951->lo]; })) = (*(P117)rt_nil_check(F->y_580)).chain_;
} else {
F->p_1949 = ({ A116 ix1952 = F->up->table_119; ix1952.p[rt_index(G_NV(F->h_1948), ix1952.lo, ix1952.hi) - ix1952.lo]; });
while (((F->p_1949 != NULL) && ((*(P117)rt_nil_check(F->p_1949)).chain_ != F->y_580))) {
F->p_1949 = (*(P117)rt_nil_check(F->p_1949)).chain_;
}
L_end_1953: ;
if ((F->p_1949 != NULL)) {
(*(P117)rt_nil_check(F->p_1949)).chain_ = (*(P117)rt_nil_check(F->y_580)).chain_;
}
}
if ((F->up->scope_stack_121 == F->y_580)) {
F->up->scope_stack_121 = (*(P117)rt_nil_check(F->y_580)).stack_;
} else {
F->p_1949 = F->up->scope_stack_121;
while (((F->p_1949 != NULL) && ((*(P117)rt_nil_check(F->p_1949)).stack_ != F->y_580))) {
F->p_1949 = (*(P117)rt_nil_check(F->p_1949)).stack_;
}
L_end_1954: ;
if ((F->p_1949 != NULL)) {
(*(P117)rt_nil_check(F->p_1949)).stack_ = (*(P117)rt_nil_check(F->y_580)).stack_;
}
}
ret_:

  return;
}

static void f_record_components_586(struct f_greenc_1fr *up_, P174 list_582, P122 t_583, P1955 g_584, rt_int line_585) {
  struct f_record_components_586fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->list_582 = list_582;
F->t_583 = t_583;
F->g_584 = g_584;
F->line_585 = line_585;
F->comp_1957 = NULL;
F->comp_1957 = F->list_582;
F->f_1958 = NULL;
F->tail_1959 = NULL;
F->df_1960 = NULL;
F->prev_1961 = NULL;
F->pt_1962 = NULL;
F->vt_1963 = NULL;
F->pc_1964 = NULL;
F->y_1965 = NULL;
F->acc_1966 = NULL;
F->v_1967 = NULL;
F->x_1968 = NULL;
F->arm_1969 = NULL;
F->g2_1970 = NULL;
F->tail_1959 = (*(P122)rt_nil_check(F->t_583)).fields_;
while (((F->tail_1959 != NULL) && ((*(P1830)rt_nil_check(F->tail_1959)).next_ != NULL))) {
F->tail_1959 = (*(P1830)rt_nil_check(F->tail_1959)).next_;
}
L_end_1971: ;
while ((F->comp_1957 != NULL)) {
if ((G_NV((*(P174)rt_nil_check(F->comp_1957)).kind_) == ((rt_int)23LL))) {
F->df_1960 = (*(P122)rt_nil_check(F->t_583)).fields_;
while (((F->df_1960 != NULL) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P1830)rt_nil_check(F->df_1960)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->comp_1957)).a_)).name_)))))) {
F->df_1960 = (*(P1830)rt_nil_check(F->df_1960)).next_;
}
L_end_1973: ;
if (((F->df_1960 == NULL) || (!G_NV((*(P1830)rt_nil_check(F->df_1960)).is_discr_)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->comp_1957)).line_), cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->comp_1957)).a_)).name_)), rt_g_lit(" is not a discriminant: a constant component ", 45)), rt_g_lit("without a value (RM79 3.7.1)", 28)));
}
if ((!f_is_discrete_452(F->up, (*(P1830)rt_nil_check(F->df_1960)).t_))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->comp_1957)).line_), rt_g_lit("the discriminant of a variant part is of a discrete type (RM79 3.7.2)", 69));
}
F->arm_1969 = (*(P174)rt_nil_check(F->comp_1957)).b_;
while ((F->arm_1969 != NULL)) {
F->g2_1970 = ({ R1956 *cell1975 = rt_alloc(sizeof(R1956)); *cell1975 = cp_R1956(({ R1956 ag1976; ag1976.disc_ = (*(P1830)rt_nil_check(F->df_1960)).name_; ag1976.arm_ = F->arm_1969; ag1976.variant_ = F->comp_1957; ag1976.next_ = F->g_584; ag1976; })); (P1955)cell1975; });
f_record_components_586(F->up, (*(P174)rt_nil_check(F->arm_1969)).b_, F->t_583, F->g2_1970, F->line_585);
F->arm_1969 = (*(P174)rt_nil_check(F->arm_1969)).next_;
}
L_end_1974: ;
F->tail_1959 = (*(P122)rt_nil_check(F->t_583)).fields_;
while (((F->tail_1959 != NULL) && ((*(P1830)rt_nil_check(F->tail_1959)).next_ != NULL))) {
F->tail_1959 = (*(P1830)rt_nil_check(F->tail_1959)).next_;
}
L_end_1977: ;
} else {
if ((f_field_index_976(F->up, F->t_583, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->comp_1957)).name_))) != ((rt_int)0LL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->comp_1957)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("component ", 10), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->comp_1957)).name_))), rt_g_lit(" is declared twice (RM79 3.7)", 29)));
}
F->f_1958 = ({ R1831 *cell1978 = rt_alloc(sizeof(R1831)); *cell1978 = cp_R1831(({ R1831 ag1979; ag1979.name_ = (*(P174)rt_nil_check(F->comp_1957)).name_; ag1979.t_ = NULL; ag1979.c_ = NULL; ag1979.next_ = NULL; ag1979.dflt_ = (*(P174)rt_nil_check(F->comp_1957)).b_; ag1979.is_const_ = (G_NV((*(P174)rt_nil_check(F->comp_1957)).flag_) == ((rt_int)1LL)); ag1979.is_discr_ = 0; ag1979.dsym_ = NULL; ag1979.guard_ = F->g_584; ag1979.cond_ = NULL; ag1979.dyn_ = 0; ag1979; })); (P1830)cell1978; });
if ((((*(P174)rt_nil_check(F->comp_1957)).a_ == F->prev_1961) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->comp_1957)).a_)).kind_) != ((rt_int)80LL)))) {
(*(P1830)rt_nil_check(F->f_1958)).t_ = F->pt_1962;
(*(P1830)rt_nil_check(F->f_1958)).c_ = F->pc_1964;
} else {
f_resolve_507(F->up, (*(P174)rt_nil_check(F->comp_1957)).a_, &(*(P1830)rt_nil_check(F->f_1958)).t_, &(*(P1830)rt_nil_check(F->f_1958)).c_);
}
F->prev_1961 = (*(P174)rt_nil_check(F->comp_1957)).a_;
F->pt_1962 = (*(P1830)rt_nil_check(F->f_1958)).t_;
F->pc_1964 = (*(P1830)rt_nil_check(F->f_1958)).c_;
if ((((*(P1830)rt_nil_check(F->f_1958)).c_ != NULL) && (f_mentions_record_575(F->up, (*(P178)rt_nil_check((*(P1830)rt_nil_check(F->f_1958)).c_)).lo_) || f_mentions_record_575(F->up, (*(P178)rt_nil_check((*(P1830)rt_nil_check(F->f_1958)).c_)).hi_)))) {
(*(P1830)rt_nil_check(F->f_1958)).dyn_ = 1;
if ((G_NV((*(P122)rt_nil_check((*(P1830)rt_nil_check(F->f_1958)).t_)).kind_) != ((rt_int)6LL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->comp_1957)).line_), rt_g_lit("a discriminant is used only as an array bound or a variant selector (RM79 3.7.1)", 80));
}
if (((*(P122)rt_nil_check((*(P1830)rt_nil_check(F->f_1958)).t_)).tcons_ == (*(P1830)rt_nil_check(F->f_1958)).c_)) {
(*(P122)rt_nil_check((*(P1830)rt_nil_check(F->f_1958)).t_)).tcons_ = NULL;
}
}
if ((F->g_584 != NULL)) {
f_guard_cond_590(F->up, F->g_584, (*(P1830)rt_nil_check(F->f_1958)).t_, &F->x_1968);
(*(P1830)rt_nil_check(F->f_1958)).cond_ = F->x_1968;
}
if (((*(P174)rt_nil_check(F->comp_1957)).b_ != NULL)) {
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->comp_1957)).b_, (*(P1830)rt_nil_check(F->f_1958)).t_, &F->vt_1963, &F->v_1967);
f_check_type_486(F->up, F->vt_1963, (*(P1830)rt_nil_check(F->f_1958)).t_, G_NV((*(P174)rt_nil_check(F->comp_1957)).line_));
F->y_1965 = f_new_sym_469(F->up, ((rt_int)2LL), f_mk_227(F->up, rt_g_lit("dflt", 4)));
f_storage_638(F->up, rt_g_lit("dflt", 4), (*(P1830)rt_nil_check(F->f_1958)).t_, &F->acc_1966);
(*(P117)rt_nil_check(F->y_1965)).t_ = (*(P1830)rt_nil_check(F->f_1958)).t_;
(*(P117)rt_nil_check(F->y_1965)).c_ = (*(P1830)rt_nil_check(F->f_1958)).c_;
f_bind_641(F->up, F->y_1965, F->acc_1966);
if ((f_composite_613(F->up, (*(P1830)rt_nil_check(F->f_1958)).t_) && (!f_bounded_474(F->up, (*(P1830)rt_nil_check(F->f_1958)).c_)))) {
f_copy_code_623(F->up, (*(P1830)rt_nil_check(F->f_1958)).t_, (*(P140)rt_nil_check(F->v_1967)), &F->x_1968);
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->acc_1966)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_1968))), one_rt_gstr(59)));
} else {
f_init_storage_611(F->up, (*(P140)rt_nil_check(F->acc_1966)), (*(P1830)rt_nil_check(F->f_1958)).t_, (*(P1830)rt_nil_check(F->f_1958)).c_);
f_assign_code_619(F->up, (*(P140)rt_nil_check(F->acc_1966)), (*(P1830)rt_nil_check(F->f_1958)).t_, (*(P140)rt_nil_check(F->v_1967)), (*(P1830)rt_nil_check(F->f_1958)).c_, &F->x_1968);
f_emit_254(F->up, (*(P140)rt_nil_check(F->x_1968)));
}
(*(P1830)rt_nil_check(F->f_1958)).dsym_ = F->y_1965;
} else if (G_NV((*(P1830)rt_nil_check(F->f_1958)).is_const_)) {
(*(P1830)rt_nil_check(F->f_1958)).is_discr_ = 1;
F->y_1965 = f_new_sym_469(F->up, ((rt_int)2LL), (*(P1830)rt_nil_check(F->f_1958)).name_);
(*(P117)rt_nil_check(F->y_1965)).t_ = (*(P1830)rt_nil_check(F->f_1958)).t_;
(*(P117)rt_nil_check(F->y_1965)).c_ = (*(P1830)rt_nil_check(F->f_1958)).c_;
(*(P117)rt_nil_check(F->y_1965)).ro_ = 1;
(*(P117)rt_nil_check(F->y_1965)).access_path_ = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(@@.", 4), f_c_field_244(F->up, (*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_1958)).name_)))), one_rt_gstr(41)));
F->up->depth_120 = rt_add(G_NV(F->up->depth_120), ((rt_int)1LL));
f_define_464(F->up, F->y_1965, G_NV((*(P174)rt_nil_check(F->comp_1957)).line_));
F->up->depth_120 = rt_sub(G_NV(F->up->depth_120), ((rt_int)1LL));
(*(P117)rt_nil_check(F->y_1965)).mnext_ = F->up->disc_syms_182;
F->up->disc_syms_182 = F->y_1965;
}
if ((F->tail_1959 == NULL)) {
(*(P122)rt_nil_check(F->t_583)).fields_ = F->f_1958;
} else {
(*(P1830)rt_nil_check(F->tail_1959)).next_ = F->f_1958;
}
F->tail_1959 = F->f_1958;
}
F->comp_1957 = (*(P174)rt_nil_check(F->comp_1957)).next_;
}
L_end_1972: ;
ret_:

  return;
}

static void f_guard_cond_590(struct f_greenc_1fr *up_, P1955 g_587, P122 t_588, P140 *r_589) {
  struct f_guard_cond_590fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->g_587 = g_587;
F->t_588 = t_588;
F->r_589 = r_589;
F->a_1980 = NULL;
F->l_1981 = NULL;
F->df_1982 = NULL;
F->x_1983 = NULL;
F->d_1984 = NULL;
F->dt_1985 = NULL;
F->vt_1986 = NULL;
F->lo_1987 = NULL;
F->hi_1988 = NULL;
(*F->r_589) = f_mk_227(F->up, rt_g_lit("1", 1));
if ((F->g_587 == NULL)) {
goto ret_;
}
F->d_1984 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(@@.", 4), f_c_field_244(F->up, (*(P140)rt_nil_check((*(P1955)rt_nil_check(F->g_587)).disc_)))), one_rt_gstr(41)));
F->df_1982 = NULL;
if ((G_NV((*(P174)rt_nil_check((*(P1955)rt_nil_check(F->g_587)).arm_)).flag_) == ((rt_int)1LL))) {
F->x_1983 = f_mk_227(F->up, rt_g_lit("0", 1));
F->a_1980 = (*(P174)rt_nil_check((*(P1955)rt_nil_check(F->g_587)).variant_)).b_;
while ((F->a_1980 != NULL)) {
if ((F->a_1980 != (*(P1955)rt_nil_check(F->g_587)).arm_)) {
f_arm_test_595(F->up, F->a_1980, (*(P1955)rt_nil_check(F->g_587)).disc_, (*(P140)rt_nil_check(F->d_1984)), &F->x_1983);
}
F->a_1980 = (*(P174)rt_nil_check(F->a_1980)).next_;
}
L_end_1989: ;
F->x_1983 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("!(", 2), (*(P140)rt_nil_check(F->x_1983))), one_rt_gstr(41)));
} else {
F->x_1983 = f_mk_227(F->up, rt_g_lit("0", 1));
f_arm_test_595(F->up, (*(P1955)rt_nil_check(F->g_587)).arm_, (*(P1955)rt_nil_check(F->g_587)).disc_, (*(P140)rt_nil_check(F->d_1984)), &F->x_1983);
}
f_guard_cond_590(F->up, (*(P1955)rt_nil_check(F->g_587)).next_, F->t_588, &(*F->r_589));
(*F->r_589) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check((*F->r_589)))), rt_g_lit(" && (", 5)), (*(P140)rt_nil_check(F->x_1983))), rt_g_lit("))", 2)));
ret_:

  return;
}

static void f_arm_test_595(struct f_greenc_1fr *up_, P174 arm_591, P140 dname_592, rt_gstr d_593, P140 *x_594) {
  struct f_arm_test_595fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->arm_591 = arm_591;
F->dname_592 = dname_592;
F->d_593 = cp_rt_gstr(d_593);
F->x_594 = x_594;
F->l_1990 = NULL;
F->l_1990 = (*(P174)rt_nil_check(F->arm_591)).a_;
F->y_1991 = NULL;
F->y_1991 = f_lookup_423(F->up, (*(P140)rt_nil_check(F->dname_592)));
F->dt_1992 = NULL;
F->vt_1993 = NULL;
F->lo_1994 = NULL;
F->hi_1995 = NULL;
F->dt_1992 = (*(P117)rt_nil_check(F->y_1991)).t_;
while ((F->l_1990 != NULL)) {
if (((*(P174)rt_nil_check(F->l_1990)).b_ == NULL)) {
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->l_1990)).a_, F->dt_1992, &F->vt_1993, &F->lo_1994);
f_check_type_486(F->up, F->vt_1993, F->dt_1992, G_NV((*(P174)rt_nil_check(F->l_1990)).line_));
(*F->x_594) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->x_594))), rt_g_lit(" || ", 4)), F->d_593), rt_g_lit(" == ", 4)), (*(P140)rt_nil_check(F->lo_1994))));
} else {
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->l_1990)).a_, F->dt_1992, &F->vt_1993, &F->lo_1994);
f_check_type_486(F->up, F->vt_1993, F->dt_1992, G_NV((*(P174)rt_nil_check(F->l_1990)).line_));
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->l_1990)).b_, F->dt_1992, &F->vt_1993, &F->hi_1995);
f_check_type_486(F->up, F->vt_1993, F->dt_1992, G_NV((*(P174)rt_nil_check(F->l_1990)).line_));
(*F->x_594) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->x_594))), rt_g_lit(" || (", 5)), F->d_593), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->lo_1994))), rt_g_lit(" && ", 4)), F->d_593), rt_g_lit(" <= ", 4)), (*(P140)rt_nil_check(F->hi_1995))), one_rt_gstr(41)));
}
F->l_1990 = (*(P174)rt_nil_check(F->l_1990)).next_;
}
L_end_1996: ;
ret_:

  return;
}

static void f_derived_type_600(struct f_greenc_1fr *up_, P174 d_596, P140 name_597, P122 *t_598, P178 *c_599) {
  struct f_derived_type_600fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_596 = d_596;
F->name_597 = name_597;
F->t_598 = t_598;
F->c_599 = c_599;
F->pt_1997 = NULL;
F->ct_1998 = NULL;
F->ph_1999 = NULL;
F->ph_1999 = F->up->completing_173;
F->up->completing_173 = NULL;
f_resolve_507(F->up, (*(P174)rt_nil_check(F->d_596)).a_, &F->pt_1997, &(*F->c_599));
if (((G_NV((*(P122)rt_nil_check(F->pt_1997)).kind_) == ((rt_int)9LL)) && G_NV((*(P122)rt_nil_check(F->pt_1997)).priv_))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->d_596)).line_), rt_g_lit("a type cannot be derived from a private type before its full declaration", 72));
}
if ((f_composite_613(F->up, F->pt_1997) || (G_NV((*(P122)rt_nil_check(F->pt_1997)).kind_) == ((rt_int)8LL)))) {
f_ctype_491(F->up, F->pt_1997, &F->ct_1998);
}
if ((F->ph_1999 == NULL)) {
(*F->t_598) = f_new_typ_471(F->up, G_NV((*(P122)rt_nil_check(F->pt_1997)).kind_));
} else {
(*F->t_598) = F->ph_1999;
}
as_R123(&(*(P122)rt_nil_check((*F->t_598))), (*(P122)rt_nil_check(F->pt_1997)));
(*(P122)rt_nil_check((*F->t_598))).name_ = F->name_597;
(*(P122)rt_nil_check((*F->t_598))).parent_ = F->pt_1997;
(*(P122)rt_nil_check((*F->t_598))).next_ = NULL;
if ((G_NV((*(P122)rt_nil_check((*F->t_598))).kind_) == ((rt_int)4LL))) {
f_derive_literals_536(F->up, (*F->t_598), G_NV((*(P174)rt_nil_check(F->d_596)).line_));
}
f_inherit_533(F->up, F->pt_1997, (*F->t_598), G_NV((*(P174)rt_nil_check(F->d_596)).line_));
ret_:

  return;
}

static void f_real_type_605(struct f_greenc_1fr *up_, P174 d_601, P140 name_602, P122 *t_603, P178 *c_604) {
  struct f_real_type_605fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_601 = d_601;
F->name_602 = name_602;
F->t_603 = t_603;
F->c_604 = c_604;
F->dt_2000 = NULL;
F->dv_2001 = NULL;
F->n_2002 = INT64_MIN;
F->ok_2003 = INT_MIN;
(*F->c_604) = f_new_cons_472(F->up);
if ((G_NV((*(P174)rt_nil_check(F->d_601)).flag_) == ((rt_int)1LL))) {
f_manifest_503(F->up, (*(P174)rt_nil_check(F->d_601)).a_, &F->n_2002, &F->ok_2003);
 (void)rt_range(F->ok_2003, 0, 1);
if ((!G_NV(F->ok_2003))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->d_601)).line_), rt_g_lit("the digits of a floating point type are static (RM79 3.5.5)", 59));
}
if (((G_NV(F->n_2002) < ((rt_int)1LL)) || (G_NV(F->n_2002) > ((rt_int)15LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->d_601)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("no predefined floating point type has ", 38), rt_g_s2g(rt_str_of_int(G_NV(F->n_2002)))), rt_g_lit(" digits", 7)));
}
f_fresh_typ_529(F->up, ((rt_int)3LL), F->name_602, &(*F->t_603));
(*(P122)rt_nil_check((*F->t_603))).ndigits_ = G_NV(F->n_2002);
if ((G_NV(F->n_2002) <= ((rt_int)6LL))) {
(*(P122)rt_nil_check((*F->t_603))).parent_ = F->up->ty_sfloat_169;
} else {
(*(P122)rt_nil_check((*F->t_603))).parent_ = F->up->ty_float_158;
}
} else {
if (((*(P174)rt_nil_check(F->d_601)).b_ == NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->d_601)).line_), rt_g_lit("a fixed point type needs a range (RM79 3.5.5)", 45));
}
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->d_601)).a_, F->up->ty_float_158, &F->dt_2000, &F->dv_2001);
if ((G_NV((*(P122)rt_nil_check(F->dt_2000)).kind_) != ((rt_int)3LL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->d_601)).line_), rt_g_lit("the delta of a fixed point type is a real number (RM79 3.5.5)", 61));
}
f_fresh_typ_529(F->up, ((rt_int)16LL), F->name_602, &(*F->t_603));
(*(P122)rt_nil_check((*F->t_603))).fdelta_ = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->dv_2001))), one_rt_gstr(41)));
(*(P122)rt_nil_check((*F->t_603))).fsmall_ = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_small(", 11), (*(P140)rt_nil_check(F->dv_2001))), one_rt_gstr(41)));
}
if (((*(P174)rt_nil_check(F->d_601)).b_ != NULL)) {
f_range_of_525(F->up, (*(P174)rt_nil_check(F->d_601)).b_, (*F->t_603), (*F->c_604));
}
if (((*(P122)rt_nil_check((*F->t_603))).parent_ != NULL)) {
f_inherit_533(F->up, (*(P122)rt_nil_check((*F->t_603))).parent_, (*F->t_603), G_NV((*(P174)rt_nil_check(F->d_601)).line_));
}
ret_:

  return;
}

static void f_finish_ptr_607(struct f_greenc_1fr *up_, P122 t_606) {
  struct f_finish_ptr_607fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_606 = t_606;
F->c_2004 = NULL;
if ((((*(P122)rt_nil_check(F->t_606)).target_ == NULL) && ((*(P122)rt_nil_check(F->t_606)).decl_ != NULL))) {
f_resolve_507(F->up, (*(P122)rt_nil_check(F->t_606)).decl_, &(*(P122)rt_nil_check(F->t_606)).target_, &F->c_2004);
if ((((*(P122)rt_nil_check(F->t_606)).target_ != NULL) && (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->t_606)).target_)).kind_) == ((rt_int)8LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check((*(P122)rt_nil_check(F->t_606)).decl_)).line_), rt_g_lit("an access type cannot designate another access type (RM79 3.8)", 62));
}
}
ret_:

  return;
}

static void f_init_storage_611(struct f_greenc_1fr *up_, rt_gstr lval_608, P122 t_609, P178 c_610) {
  struct f_init_storage_611fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lval_608 = cp_rt_gstr(lval_608);
F->t_609 = t_609;
F->c_610 = c_610;
F->ec_2005 = NULL;
F->fc_2006 = NULL;
F->d_2007 = NULL;
F->ct_2008 = NULL;
F->i_2009 = NULL;
F->v_2010 = NULL;
F->x_2011 = NULL;
F->vt_2012 = NULL;
F->f_2013 = NULL;
if ((G_NV((*(P122)rt_nil_check(F->t_609)).kind_) == ((rt_int)8LL))) {
f_emit_254(F->up, cat_rt_gstr(F->lval_608, rt_g_lit(" = NULL;", 8)));
} else if ((f_is_numeric_450(F->up, F->t_609) || f_is_discrete_452(F->up, F->t_609))) {
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_608, rt_g_lit(" = ", 3)), f_no_value_560(F->up, F->t_609)), one_rt_gstr(59)));
} else if ((G_NV((*(P122)rt_nil_check(F->t_609)).kind_) == ((rt_int)6LL))) {
if (((F->c_610 == NULL) || ((*(P178)rt_nil_check(F->c_610)).lo_ == NULL))) {
f_fail_248(F->up, ((rt_int)0LL), rt_g_lit("an array object needs an index constraint (RM79 3.6)", 52));
}
f_elem_ctype_565(F->up, (*(P122)rt_nil_check(F->t_609)).elem_, &F->ct_2008);
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_608, rt_g_lit(".lo = ", 6)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_610)).lo_))), rt_g_lit("; ", 2)), F->lval_608), rt_g_lit(".hi = ", 6)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_610)).hi_))), one_rt_gstr(59)));
F->ec_2005 = (*(P122)rt_nil_check(F->t_609)).elemcons_;
if (((G_NV((*(P122)rt_nil_check(F->t_609)).dims_) > ((rt_int)1LL)) && f_bounded_474(F->up, (*(P178)rt_nil_check(F->c_610)).inner_))) {
F->ec_2005 = (*(P178)rt_nil_check(F->c_610)).inner_;
}
if (((G_NV((*(P122)rt_nil_check(F->t_609)).dims_) > ((rt_int)1LL)) && f_bounded_474(F->up, F->ec_2005))) {
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_608, rt_g_lit(".lo2 = ", 7)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->ec_2005)).lo_))), rt_g_lit("; ", 2)), F->lval_608), rt_g_lit(".hi2 = ", 7)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->ec_2005)).hi_))), one_rt_gstr(59)));
} else {
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_608, rt_g_lit(".lo2 = 1; ", 10)), F->lval_608), rt_g_lit(".hi2 = 1;", 9)));
}
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_608, rt_g_lit(".p = rt_alloc(sizeof(", 21)), (*(P140)rt_nil_check(F->ct_2008))), rt_g_lit(") * (size_t)G_CNT(", 18)), F->lval_608), rt_g_lit("));", 3)));
if ((f_is_numeric_450(F->up, (*(P122)rt_nil_check(F->t_609)).elem_) || f_is_discrete_452(F->up, (*(P122)rt_nil_check(F->t_609)).elem_))) {
f_new_name_230(F->up, rt_g_lit("i", 1), &F->i_2009);
if ((G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->t_609)).elem_)).kind_) == ((rt_int)11LL))) {
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("memset(", 7), F->lval_608), rt_g_lit(".p, 0xFF, (size_t)G_CNT(", 24)), F->lval_608), rt_g_lit("));", 3)));
} else {
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P140)rt_nil_check(F->i_2009))), rt_g_lit(" = 0; ", 6)), (*(P140)rt_nil_check(F->i_2009))), rt_g_lit(" < G_CNT(", 9)), F->lval_608), rt_g_lit("); ", 3)), (*(P140)rt_nil_check(F->i_2009))), rt_g_lit("++) ", 4)), F->lval_608), rt_g_lit(".p[", 3)), (*(P140)rt_nil_check(F->i_2009))), rt_g_lit("] = ", 4)), f_no_value_560(F->up, (*(P122)rt_nil_check(F->t_609)).elem_)), one_rt_gstr(59)));
}
} else if (((G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->t_609)).elem_)).kind_) == ((rt_int)6LL)) || (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->t_609)).elem_)).kind_) == ((rt_int)7LL)))) {
f_new_name_230(F->up, rt_g_lit("i", 1), &F->i_2009);
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P140)rt_nil_check(F->i_2009))), rt_g_lit(" = 0; ", 6)), (*(P140)rt_nil_check(F->i_2009))), rt_g_lit(" < G_CNT(", 9)), F->lval_608), rt_g_lit("); ", 3)), (*(P140)rt_nil_check(F->i_2009))), rt_g_lit("++) {", 5)));
f_init_storage_611(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_608, rt_g_lit(".p[", 3)), (*(P140)rt_nil_check(F->i_2009))), one_rt_gstr(93)), (*(P122)rt_nil_check(F->t_609)).elem_, F->ec_2005);
f_emit_254(F->up, rt_g_lit("}", 1));
}
} else if ((G_NV((*(P122)rt_nil_check(F->t_609)).kind_) == ((rt_int)7LL))) {
if ((F->c_610 != NULL)) {
F->d_2007 = (*(P178)rt_nil_check(F->c_610)).dv_;
while ((F->d_2007 != NULL)) {
F->f_2013 = (*(P122)rt_nil_check(F->t_609)).fields_;
while ((!eq_rt_gstr((*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_2013)).name_)), (*(P140)rt_nil_check((*(P1834)rt_nil_check(F->d_2007)).name_))))) {
F->f_2013 = (*(P1830)rt_nil_check(F->f_2013)).next_;
}
L_end_2015: ;
f_assign_code_619(F->up, cat_rt_gstr(cat_rt_gstr(F->lval_608, one_rt_gstr(46)), f_c_field_244(F->up, (*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_2013)).name_)))), (*(P1830)rt_nil_check(F->f_2013)).t_, (*(P140)rt_nil_check((*(P1834)rt_nil_check(F->d_2007)).v_)), (*(P1830)rt_nil_check(F->f_2013)).c_, &F->x_2011);
f_emit_254(F->up, (*(P140)rt_nil_check(F->x_2011)));
F->d_2007 = (*(P1834)rt_nil_check(F->d_2007)).next_;
}
L_end_2014: ;
}
F->f_2013 = (*(P122)rt_nil_check(F->t_609)).fields_;
while ((F->f_2013 != NULL)) {
f_subst_cons_579(F->up, (*(P1830)rt_nil_check(F->f_2013)).c_, F->lval_608, &F->fc_2006);
if ((G_NV((*(P1830)rt_nil_check(F->f_2013)).dyn_) && (!f_discriminated_480(F->up, F->c_610)))) {
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_608, one_rt_gstr(46)), f_c_field_244(F->up, (*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_2013)).name_)))), rt_g_lit(".lo = 1; ", 9)), F->lval_608), one_rt_gstr(46)), f_c_field_244(F->up, (*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_2013)).name_)))), rt_g_lit(".hi = 0; ", 9)), F->lval_608), one_rt_gstr(46)), f_c_field_244(F->up, (*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_2013)).name_)))), rt_g_lit(".lo2 = ", 7)), F->lval_608), one_rt_gstr(46)), f_c_field_244(F->up, (*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_2013)).name_)))), rt_g_lit(".hi2 = 1; ", 10)), F->lval_608), one_rt_gstr(46)), f_c_field_244(F->up, (*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_2013)).name_)))), rt_g_lit(".p = NULL;", 10)));
} else if ((!G_NV((*(P1830)rt_nil_check(F->f_2013)).is_discr_))) {
f_init_storage_611(F->up, cat_rt_gstr(cat_rt_gstr(F->lval_608, one_rt_gstr(46)), f_c_field_244(F->up, (*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_2013)).name_)))), (*(P1830)rt_nil_check(F->f_2013)).t_, F->fc_2006);
}
if (((*(P1830)rt_nil_check(F->f_2013)).dsym_ != NULL)) {
f_access_of_742(F->up, (*(P1830)rt_nil_check(F->f_2013)).dsym_, &F->v_2010);
f_assign_code_619(F->up, cat_rt_gstr(cat_rt_gstr(F->lval_608, one_rt_gstr(46)), f_c_field_244(F->up, (*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_2013)).name_)))), (*(P1830)rt_nil_check(F->f_2013)).t_, (*(P140)rt_nil_check(F->v_2010)), F->fc_2006, &F->x_2011);
f_emit_254(F->up, (*(P140)rt_nil_check(F->x_2011)));
}
F->f_2013 = (*(P1830)rt_nil_check(F->f_2013)).next_;
}
L_end_2016: ;
}
ret_:

  return;
}

static int f_composite_613(struct f_greenc_1fr *up_, P122 t_612) {
  struct f_composite_613fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_612 = t_612;
F->result_ = ((G_NV((*(P122)rt_nil_check(F->t_612)).kind_) == ((rt_int)6LL)) || (G_NV((*(P122)rt_nil_check(F->t_612)).kind_) == ((rt_int)7LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_assign_code_619(struct f_greenc_1fr *up_, rt_gstr lval_614, P122 t_615, rt_gstr v_616, P178 c_617, P140 *r_618) {
  struct f_assign_code_619fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lval_614 = cp_rt_gstr(lval_614);
F->t_615 = t_615;
F->v_616 = cp_rt_gstr(v_616);
F->c_617 = c_617;
F->r_618 = r_618;
F->ct_2017 = NULL;
F->x_2018 = NULL;
F->d_2019 = NULL;
if (((G_NV((*(P122)rt_nil_check(F->t_615)).kind_) == ((rt_int)7LL)) && f_discriminated_480(F->up, F->c_617))) {
f_ctype_491(F->up, F->t_615, &F->ct_2017);
F->x_2018 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P140)rt_nil_check(F->ct_2017))), rt_g_lit(" dv_ = ", 7)), F->v_616), one_rt_gstr(59)));
F->d_2019 = (*(P178)rt_nil_check(F->c_617)).dv_;
while ((F->d_2019 != NULL)) {
F->x_2018 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->x_2018)), rt_g_lit(" if (dv_.", 9)), f_c_field_244(F->up, (*(P140)rt_nil_check((*(P1834)rt_nil_check(F->d_2019)).name_)))), rt_g_lit(" != (", 5)), (*(P140)rt_nil_check((*(P1834)rt_nil_check(F->d_2019)).v_))), rt_g_lit(")) rt_raise(RT_X_TAG);", 22)));
F->d_2019 = (*(P1834)rt_nil_check(F->d_2019)).next_;
}
L_end_2020: ;
(*F->r_618) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->x_2018)), rt_g_lit(" as_", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_615)).cname_))), rt_g_lit("(&", 2)), F->lval_614), rt_g_lit(", dv_); }", 9)));
} else if (f_composite_613(F->up, F->t_615)) {
f_ctype_491(F->up, F->t_615, &F->ct_2017);
(*F->r_618) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("as_", 3), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_615)).cname_))), rt_g_lit("(&", 2)), F->lval_614), rt_g_lit(", ", 2)), F->v_616), rt_g_lit(");", 2)));
} else if (((((G_NV((*(P122)rt_nil_check(F->t_615)).kind_) == ((rt_int)1LL)) || (G_NV((*(P122)rt_nil_check(F->t_615)).kind_) == ((rt_int)4LL))) || (G_NV((*(P122)rt_nil_check(F->t_615)).kind_) == ((rt_int)11LL))) && f_bounded_474(F->up, F->c_617))) {
(*F->r_618) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_614, rt_g_lit(" = rt_range(", 12)), F->v_616), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_617)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_617)).hi_))), rt_g_lit(");", 2)));
} else if ((((G_NV((*(P122)rt_nil_check(F->t_615)).kind_) == ((rt_int)3LL)) || (G_NV((*(P122)rt_nil_check(F->t_615)).kind_) == ((rt_int)16LL))) && f_bounded_474(F->up, F->c_617))) {
(*F->r_618) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_614, rt_g_lit(" = rt_frange(", 13)), F->v_616), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_617)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_617)).hi_))), rt_g_lit(");", 2)));
} else {
(*F->r_618) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_614, rt_g_lit(" = ", 3)), F->v_616), one_rt_gstr(59)));
}
ret_:

  return;
}

static void f_copy_code_623(struct f_greenc_1fr *up_, P122 t_620, rt_gstr v_621, P140 *r_622) {
  struct f_copy_code_623fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_620 = t_620;
F->v_621 = cp_rt_gstr(v_621);
F->r_622 = r_622;
F->ct_2021 = NULL;
if (f_composite_613(F->up, F->t_620)) {
f_ctype_491(F->up, F->t_620, &F->ct_2021);
(*F->r_622) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("cp_", 3), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_620)).cname_))), one_rt_gstr(40)), F->v_621), one_rt_gstr(41)));
} else {
(*F->r_622) = f_mk_227(F->up, F->v_621);
}
ret_:

  return;
}

static void f_eq_code_628(struct f_greenc_1fr *up_, P122 t_624, rt_gstr a_625, rt_gstr b_626, P140 *r_627) {
  struct f_eq_code_628fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_624 = t_624;
F->a_625 = cp_rt_gstr(a_625);
F->b_626 = cp_rt_gstr(b_626);
F->r_627 = r_627;
F->ct_2022 = NULL;
if (f_composite_613(F->up, F->t_624)) {
f_ctype_491(F->up, F->t_624, &F->ct_2022);
(*F->r_627) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("eq_", 3), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_624)).cname_))), one_rt_gstr(40)), F->a_625), rt_g_lit(", ", 2)), F->b_626), one_rt_gstr(41)));
} else {
(*F->r_627) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_625), rt_g_lit(" == ", 4)), F->b_626), one_rt_gstr(41)));
}
ret_:

  return;
}

static int f_seen_name_631(struct f_greenc_1fr *up_, P151 l_629, rt_gstr s_630) {
  struct f_seen_name_631fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_629 = l_629;
F->s_630 = cp_rt_gstr(s_630);
F->p_2023 = NULL;
F->p_2023 = F->l_629;
while ((F->p_2023 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P151)rt_nil_check(F->p_2023)).s_)), F->s_630)) {
F->result_ = 1;
goto ret_;
}
F->p_2023 = (*(P151)rt_nil_check(F->p_2023)).next_;
}
L_end_2024: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_emit_helpers_632(struct f_greenc_1fr *up_) {
  struct f_emit_helpers_632fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_2025 = NULL;
F->t_2025 = F->up->all_types_124;
F->et_2026 = NULL;
F->done_2027 = NULL;
F->l_2028 = NULL;
while ((F->t_2025 != NULL)) {
if ((f_composite_613(F->up, F->t_2025) && (!f_seen_name_631(F->up, F->done_2027, (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2025)).cname_)))))) {
F->l_2028 = ({ R152 *cell2030 = rt_alloc(sizeof(R152)); *cell2030 = cp_R152(({ R152 ag2031; ag2031.s_ = (*(P122)rt_nil_check(F->t_2025)).cname_; ag2031.next_ = F->done_2027; ag2031; })); (P151)cell2030; });
F->done_2027 = F->l_2028;
f_put_to_252(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void as_", 15), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2025)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2025)).cname_))), rt_g_lit(" *d, ", 5)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2025)).cname_))), rt_g_lit(" s);", 4)));
f_put_to_252(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2025)).cname_))), rt_g_lit(" cp_", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2025)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2025)).cname_))), rt_g_lit(" s);", 4)));
f_put_to_252(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int eq_", 14), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2025)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2025)).cname_))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2025)).cname_))), rt_g_lit(" b);", 4)));
if (((G_NV((*(P122)rt_nil_check(F->t_2025)).kind_) == ((rt_int)6LL)) && (G_NV((*(P122)rt_nil_check(F->t_2025)).dims_) == ((rt_int)1LL)))) {
f_ctype_491(F->up, (*(P122)rt_nil_check(F->t_2025)).elem_, &F->et_2026);
f_put_to_252(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2025)).cname_))), rt_g_lit(" cat_", 5)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2025)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2025)).cname_))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2025)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_252(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2025)).cname_))), rt_g_lit(" one_", 5)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2025)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->et_2026))), rt_g_lit(" e);", 4)));
if ((G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->t_2025)).elem_)).kind_) == ((rt_int)2LL))) {
f_put_to_252(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2025)).cname_))), rt_g_lit(" and_", 5)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2025)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2025)).cname_))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2025)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_252(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2025)).cname_))), rt_g_lit(" or_", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2025)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2025)).cname_))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2025)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_252(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2025)).cname_))), rt_g_lit(" xor_", 5)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2025)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2025)).cname_))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2025)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_252(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2025)).cname_))), rt_g_lit(" not_", 5)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2025)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2025)).cname_))), rt_g_lit(" a);", 4)));
}
}
f_helper_bodies_634(F->up, F->t_2025);
}
F->t_2025 = (*(P122)rt_nil_check(F->t_2025)).next_;
}
L_end_2029: ;
ret_:

  return;
}

static void f_helper_bodies_634(struct f_greenc_1fr *up_, P122 t_633) {
  struct f_helper_bodies_634fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_633 = t_633;
F->c_2032 = NULL;
F->c_2032 = (*(P122)rt_nil_check(F->t_633)).cname_;
F->b_2033 = NULL;
F->b_2033 = F->up->out_funcs_133;
F->ct_2034 = NULL;
F->et_2035 = NULL;
F->x_2036 = NULL;
F->y_2037 = NULL;
F->conds_2038 = NULL;
F->f_2039 = NULL;
if ((G_NV((*(P122)rt_nil_check(F->t_633)).kind_) == ((rt_int)6LL))) {
f_elem_ctype_565(F->up, (*(P122)rt_nil_check(F->t_633)).elem_, &F->ct_2034);
f_assign_code_619(F->up, rt_g_lit("d->p[i]", 7), (*(P122)rt_nil_check(F->t_633)).elem_, rt_g_lit("s.p[i]", 6), NULL, &F->x_2036);
f_put_to_252(F->up, F->b_2033, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void as_", 15), (*(P140)rt_nil_check(F->c_2032))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit(" *d, ", 5)), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit(" s) {", 5)));
f_put_to_252(F->up, F->b_2033, rt_g_lit("  rt_int n = G_CNT(s);", 22));
f_put_to_252(F->up, F->b_2033, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, ", 49), f_q_245(F->up)), rt_g_lit("array length", 12)), f_q_245(F->up)), rt_g_lit(");", 2)));
f_put_to_252(F->up, F->b_2033, rt_g_lit("  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();", 79));
f_put_to_252(F->up, F->b_2033, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < n; i++) { ", 35), (*(P140)rt_nil_check(F->x_2036))), rt_g_lit(" }", 2)));
f_put_to_252(F->up, F->b_2033, rt_g_lit("}", 1));
f_copy_code_623(F->up, (*(P122)rt_nil_check(F->t_633)).elem_, rt_g_lit("s.p[i]", 6), &F->x_2036);
f_put_to_252(F->up, F->b_2033, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit(" cp_", 4)), (*(P140)rt_nil_check(F->c_2032))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit(" s) {", 5)));
f_put_to_252(F->up, F->b_2033, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit(" d = s; d.p = rt_alloc(sizeof(", 30)), (*(P140)rt_nil_check(F->ct_2034))), rt_g_lit(") * (size_t)G_CNT(s));", 22)));
f_put_to_252(F->up, F->b_2033, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = ", 49), (*(P140)rt_nil_check(F->x_2036))), one_rt_gstr(59)));
f_put_to_252(F->up, F->b_2033, rt_g_lit("  return d;", 11));
f_put_to_252(F->up, F->b_2033, rt_g_lit("}", 1));
f_eq_code_628(F->up, (*(P122)rt_nil_check(F->t_633)).elem_, rt_g_lit("a.p[i]", 6), rt_g_lit("b.p[i]", 6), &F->x_2036);
f_put_to_252(F->up, F->b_2033, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int eq_", 14), (*(P140)rt_nil_check(F->c_2032))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit(" b) {", 5)));
f_put_to_252(F->up, F->b_2033, rt_g_lit("  if (G_CNT(a) != G_CNT(b)) return 0;", 37));
f_put_to_252(F->up, F->b_2033, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < G_CNT(a); i++) if (!(", 46), (*(P140)rt_nil_check(F->x_2036))), rt_g_lit(")) return 0;", 12)));
f_put_to_252(F->up, F->b_2033, rt_g_lit("  return 1;", 11));
f_put_to_252(F->up, F->b_2033, rt_g_lit("}", 1));
if (((G_NV((*(P122)rt_nil_check(F->t_633)).dims_) == ((rt_int)1LL)) && (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->t_633)).elem_)).kind_) == ((rt_int)2LL)))) {
f_put_to_252(F->up, F->b_2033, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit(" and_", 5)), (*(P140)rt_nil_check(F->c_2032))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit(" b) { ", 6)), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit(" r = cp_", 8)), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit("(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, ", 58)), f_q_245(F->up)), rt_g_lit("array length", 12)), f_q_245(F->up)), rt_g_lit("); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] && b.p[i]; return r; }", 79)));
f_put_to_252(F->up, F->b_2033, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit(" or_", 4)), (*(P140)rt_nil_check(F->c_2032))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit(" b) { ", 6)), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit(" r = cp_", 8)), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit("(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, ", 58)), f_q_245(F->up)), rt_g_lit("array length", 12)), f_q_245(F->up)), rt_g_lit("); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] || b.p[i]; return r; }", 79)));
f_put_to_252(F->up, F->b_2033, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit(" xor_", 5)), (*(P140)rt_nil_check(F->c_2032))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit(" b) { ", 6)), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit(" r = cp_", 8)), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit("(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, ", 58)), f_q_245(F->up)), rt_g_lit("array length", 12)), f_q_245(F->up)), rt_g_lit("); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] != b.p[i]; return r; }", 79)));
f_put_to_252(F->up, F->b_2033, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit(" not_", 5)), (*(P140)rt_nil_check(F->c_2032))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit(" a) { ", 6)), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit(" r = cp_", 8)), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit("(a); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = !a.p[i]; return r; }", 72)));
}
if ((G_NV((*(P122)rt_nil_check(F->t_633)).dims_) == ((rt_int)1LL))) {
f_ctype_491(F->up, (*(P122)rt_nil_check(F->t_633)).elem_, &F->et_2035);
f_copy_code_623(F->up, (*(P122)rt_nil_check(F->t_633)).elem_, rt_g_lit("a.p[i]", 6), &F->x_2036);
f_copy_code_623(F->up, (*(P122)rt_nil_check(F->t_633)).elem_, rt_g_lit("b.p[i]", 6), &F->y_2037);
f_put_to_252(F->up, F->b_2033, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit(" cat_", 5)), (*(P140)rt_nil_check(F->c_2032))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit(" b) {", 5)));
f_put_to_252(F->up, F->b_2033, rt_g_lit("  rt_int na = G_CNT(a), nb = G_CNT(b);", 38));
f_put_to_252(F->up, F->b_2033, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit(" r = na > 0 \? a : b;", 20)));
f_put_to_252(F->up, F->b_2033, rt_g_lit("  if (na == 0 && nb == 0) return a;", 35));
f_put_to_252(F->up, F->b_2033, rt_g_lit("  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;", 47));
f_put_to_252(F->up, F->b_2033, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  r.p = rt_alloc(sizeof(", 24), (*(P140)rt_nil_check(F->ct_2034))), rt_g_lit(") * (size_t)(na + nb));", 23)));
f_put_to_252(F->up, F->b_2033, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < na; i++) r.p[i] = ", 43), (*(P140)rt_nil_check(F->x_2036))), one_rt_gstr(59)));
f_put_to_252(F->up, F->b_2033, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < nb; i++) r.p[na + i] = ", 48), (*(P140)rt_nil_check(F->y_2037))), one_rt_gstr(59)));
f_put_to_252(F->up, F->b_2033, rt_g_lit("  return r;", 11));
f_put_to_252(F->up, F->b_2033, rt_g_lit("}", 1));
f_copy_code_623(F->up, (*(P122)rt_nil_check(F->t_633)).elem_, rt_g_lit("e", 1), &F->x_2036);
f_first_index_568(F->up, F->t_633, &F->y_2037);
f_put_to_252(F->up, F->b_2033, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit(" one_", 5)), (*(P140)rt_nil_check(F->c_2032))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->et_2035))), rt_g_lit(" e) {", 5)));
f_put_to_252(F->up, F->b_2033, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit(" r; r.lo = r.hi = ", 18)), (*(P140)rt_nil_check(F->y_2037))), rt_g_lit("; r.lo2 = r.hi2 = 1;", 20)));
f_put_to_252(F->up, F->b_2033, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  r.p = rt_alloc(sizeof(", 24), (*(P140)rt_nil_check(F->ct_2034))), rt_g_lit(")); r.p[0] = ", 13)), (*(P140)rt_nil_check(F->x_2036))), one_rt_gstr(59)));
f_put_to_252(F->up, F->b_2033, rt_g_lit("  return r;", 11));
f_put_to_252(F->up, F->b_2033, rt_g_lit("}", 1));
}
} else {
f_put_to_252(F->up, F->b_2033, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void as_", 15), (*(P140)rt_nil_check(F->c_2032))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit(" *d, ", 5)), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit(" s) {", 5)));
F->f_2039 = (*(P122)rt_nil_check(F->t_633)).fields_;
while ((F->f_2039 != NULL)) {
if ((G_NV((*(P1830)rt_nil_check(F->f_2039)).dyn_) || ((*(P1830)rt_nil_check(F->f_2039)).cond_ != NULL))) {
f_copy_code_623(F->up, (*(P1830)rt_nil_check(F->f_2039)).t_, cat_rt_gstr(rt_g_lit("s.", 2), f_c_field_244(F->up, (*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_2039)).name_)))), &F->x_2036);
F->x_2036 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("d->", 3), f_c_field_244(F->up, (*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_2039)).name_)))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2036))), one_rt_gstr(59)));
if (((*(P1830)rt_nil_check(F->f_2039)).cond_ != NULL)) {
F->x_2036 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), f_subst_573(F->up, (*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_2039)).cond_)), rt_g_lit("s", 1))), rt_g_lit(") ", 2)), (*(P140)rt_nil_check(F->x_2036))));
}
} else {
f_assign_code_619(F->up, cat_rt_gstr(rt_g_lit("d->", 3), f_c_field_244(F->up, (*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_2039)).name_)))), (*(P1830)rt_nil_check(F->f_2039)).t_, cat_rt_gstr(rt_g_lit("s.", 2), f_c_field_244(F->up, (*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_2039)).name_)))), NULL, &F->x_2036);
}
f_put_to_252(F->up, F->b_2033, cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check(F->x_2036))));
F->f_2039 = (*(P1830)rt_nil_check(F->f_2039)).next_;
}
L_end_2040: ;
f_put_to_252(F->up, F->b_2033, rt_g_lit("}", 1));
f_put_to_252(F->up, F->b_2033, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit(" cp_", 4)), (*(P140)rt_nil_check(F->c_2032))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit(" s) {", 5)));
f_put_to_252(F->up, F->b_2033, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit(" d = s;", 7)));
F->conds_2038 = f_mk_227(F->up, rt_g_lit("1", 1));
F->f_2039 = (*(P122)rt_nil_check(F->t_633)).fields_;
while ((F->f_2039 != NULL)) {
f_copy_code_623(F->up, (*(P1830)rt_nil_check(F->f_2039)).t_, cat_rt_gstr(rt_g_lit("s.", 2), f_c_field_244(F->up, (*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_2039)).name_)))), &F->x_2036);
F->x_2036 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("d.", 2), f_c_field_244(F->up, (*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_2039)).name_)))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2036))), one_rt_gstr(59)));
f_eq_code_628(F->up, (*(P1830)rt_nil_check(F->f_2039)).t_, cat_rt_gstr(rt_g_lit("a.", 2), f_c_field_244(F->up, (*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_2039)).name_)))), cat_rt_gstr(rt_g_lit("b.", 2), f_c_field_244(F->up, (*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_2039)).name_)))), &F->y_2037);
if (((*(P1830)rt_nil_check(F->f_2039)).cond_ != NULL)) {
F->x_2036 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), f_subst_573(F->up, (*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_2039)).cond_)), rt_g_lit("s", 1))), rt_g_lit(") ", 2)), (*(P140)rt_nil_check(F->x_2036))));
F->y_2037 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!(", 3), f_subst_573(F->up, (*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_2039)).cond_)), rt_g_lit("a", 1))), rt_g_lit(") || ", 5)), (*(P140)rt_nil_check(F->y_2037))), one_rt_gstr(41)));
}
f_put_to_252(F->up, F->b_2033, cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check(F->x_2036))));
F->conds_2038 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->conds_2038)), rt_g_lit(" && ", 4)), (*(P140)rt_nil_check(F->y_2037))));
F->f_2039 = (*(P1830)rt_nil_check(F->f_2039)).next_;
}
L_end_2041: ;
f_put_to_252(F->up, F->b_2033, rt_g_lit("  return d;", 11));
f_put_to_252(F->up, F->b_2033, rt_g_lit("}", 1));
f_put_to_252(F->up, F->b_2033, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int eq_", 14), (*(P140)rt_nil_check(F->c_2032))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check(F->c_2032))), rt_g_lit(" b) {", 5)));
f_put_to_252(F->up, F->b_2033, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  return ", 9), (*(P140)rt_nil_check(F->conds_2038))), one_rt_gstr(59)));
f_put_to_252(F->up, F->b_2033, rt_g_lit("}", 1));
}
ret_:

  return;
}

static void f_storage_638(struct f_greenc_1fr *up_, rt_gstr name_635, P122 t_636, P140 *access_code_637) {
  struct f_storage_638fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_635 = cp_rt_gstr(name_635);
F->t_636 = t_636;
F->access_code_637 = access_code_637;
F->ct_2042 = NULL;
F->g_2043 = NULL;
f_ctype_491(F->up, F->t_636, &F->ct_2042);
if ((!G_NV(F->up->in_func_138))) {
f_new_name_230(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("g_", 2), f_lower_s_238(F->up, F->name_635)), one_rt_gstr(95)), &F->g_2043);
f_put_to_252(F->up, F->up->out_globals_132, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->ct_2042))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->g_2043))), one_rt_gstr(59)));
F->up->st_field_141 = F->g_2043;
(*F->access_code_637) = F->g_2043;
} else {
f_new_name_230(F->up, cat_rt_gstr(f_lower_s_238(F->up, F->name_635), one_rt_gstr(95)), &F->g_2043);
f_put_to_252(F->up, F->up->fields_buf_137, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P140)rt_nil_check(F->ct_2042))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->g_2043))), one_rt_gstr(59)));
F->up->st_field_141 = F->g_2043;
(*F->access_code_637) = f_mk_227(F->up, cat_rt_gstr(rt_g_lit("F->", 3), (*(P140)rt_nil_check(F->g_2043))));
}
ret_:

  return;
}

static void f_bind_641(struct f_greenc_1fr *up_, P117 y_639, P140 access_code_640) {
  struct f_bind_641fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_639 = y_639;
F->access_code_640 = access_code_640;
if (G_NV(F->up->in_func_138)) {
(*(P117)rt_nil_check(F->y_639)).level_ = G_NV(F->up->cur_level_139);
(*(P117)rt_nil_check(F->y_639)).access_path_ = F->up->st_field_141;
} else {
(*(P117)rt_nil_check(F->y_639)).level_ = ((rt_int)0LL);
(*(P117)rt_nil_check(F->y_639)).access_path_ = F->access_code_640;
}
ret_:

  return;
}

static void f_declare_subprograms_643(struct f_greenc_1fr *up_, P174 from_642) {
  struct f_declare_subprograms_643fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->from_642 = from_642;
F->e_2044 = NULL;
F->e_2044 = F->from_642;
while ((F->e_2044 != NULL)) {
if ((((G_NV((*(P174)rt_nil_check(F->e_2044)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check(F->e_2044)).kind_) == ((rt_int)45LL))) && (G_NV((*(P174)rt_nil_check(F->e_2044)).ival_) == ((rt_int)0LL)))) {
f_declare_one_645(F->up, F->e_2044);
}
F->e_2044 = (*(P174)rt_nil_check(F->e_2044)).next_;
}
L_end_2045: ;
ret_:

  return;
}

static void f_declare_one_645(struct f_greenc_1fr *up_, P174 e_644) {
  struct f_declare_one_645fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_644 = e_644;
F->y_2046 = NULL;
F->z_2047 = NULL;
if (f_is_generic_name_1242(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_644)).name_)))) {
goto ret_;
}
f_build_subprogram_650(F->up, F->e_644, &F->y_2046);
F->z_2047 = ({ A116 ix2048 = F->up->table_119; ix2048.p[rt_index(f_hash_416(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2046)).name_))), ix2048.lo, ix2048.hi) - ix2048.lo]; });
while ((F->z_2047 != NULL)) {
if (((((((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_2047)).name_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2046)).name_))) && ((G_NV((*(P117)rt_nil_check(F->z_2047)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->z_2047)).kind_) == ((rt_int)4LL)))) && ((*(P117)rt_nil_check(F->z_2047)).decl_ != NULL)) && (G_NV((*(P174)rt_nil_check((*(P117)rt_nil_check(F->z_2047)).decl_)).ival_) == ((rt_int)1LL))) && (G_NV((*(P117)rt_nil_check(F->z_2047)).depth_) == G_NV(F->up->depth_120))) && f_same_signature_458(F->up, (*(P117)rt_nil_check(F->z_2047)).params_, (*(P117)rt_nil_check(F->y_2046)).params_)) && f_same_443(F->up, (*(P117)rt_nil_check(F->z_2047)).result_, (*(P117)rt_nil_check(F->y_2046)).result_))) {
(*(P117)rt_nil_check(F->z_2047)).decl_ = F->e_644;
goto ret_;
}
F->z_2047 = (*(P117)rt_nil_check(F->z_2047)).chain_;
}
L_end_2049: ;
if ((F->up->cur_task_202 != NULL)) {
F->z_2047 = (*(P117)rt_nil_check(F->up->cur_task_202)).members_;
while ((F->z_2047 != NULL)) {
if ((((((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_2047)).name_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2046)).name_))) && ((G_NV((*(P117)rt_nil_check(F->z_2047)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->z_2047)).kind_) == ((rt_int)4LL)))) && ((*(P117)rt_nil_check(F->z_2047)).decl_ != NULL)) && (G_NV((*(P174)rt_nil_check((*(P117)rt_nil_check(F->z_2047)).decl_)).ival_) == ((rt_int)1LL))) && f_same_signature_458(F->up, (*(P117)rt_nil_check(F->z_2047)).params_, (*(P117)rt_nil_check(F->y_2046)).params_)) && f_same_443(F->up, (*(P117)rt_nil_check(F->z_2047)).result_, (*(P117)rt_nil_check(F->y_2046)).result_))) {
(*(P117)rt_nil_check(F->y_2046)).cname_ = (*(P117)rt_nil_check(F->z_2047)).cname_;
(*(P117)rt_nil_check(F->z_2047)).decl_ = F->e_644;
goto L_end_2050;
}
F->z_2047 = (*(P117)rt_nil_check(F->z_2047)).mnext_;
}
L_end_2050: ;
}
f_define_464(F->up, F->y_2046, G_NV((*(P174)rt_nil_check(F->e_644)).line_));
f_elaborate_defaults_647(F->up, F->y_2046);
ret_:

  return;
}

static void f_elaborate_defaults_647(struct f_greenc_1fr *up_, P117 y_646) {
  struct f_elaborate_defaults_647fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_646 = y_646;
F->pm_2051 = NULL;
F->pm_2051 = (*(P117)rt_nil_check(F->y_646)).params_;
F->vt_2052 = NULL;
F->v_2053 = NULL;
F->acc_2054 = NULL;
F->x_2055 = NULL;
F->z_2056 = NULL;
while ((F->pm_2051 != NULL)) {
if (((*(P1812)rt_nil_check(F->pm_2051)).dflt_ != NULL)) {
if ((G_NV((*(P1812)rt_nil_check(F->pm_2051)).mode_) != ((rt_int)1LL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check((*(P1812)rt_nil_check(F->pm_2051)).dflt_)).line_), rt_g_lit("only an in parameter takes a default (RM79 6.3)", 47));
}
f_gexpr_805(F->up, (*(P1812)rt_nil_check(F->pm_2051)).dflt_, (*(P1812)rt_nil_check(F->pm_2051)).t_, &F->vt_2052, &F->v_2053);
f_check_type_486(F->up, F->vt_2052, (*(P1812)rt_nil_check(F->pm_2051)).t_, G_NV((*(P174)rt_nil_check((*(P1812)rt_nil_check(F->pm_2051)).dflt_)).line_));
F->z_2056 = f_new_sym_469(F->up, ((rt_int)2LL), f_mk_227(F->up, rt_g_lit("dflt", 4)));
f_storage_638(F->up, rt_g_lit("dflt", 4), (*(P1812)rt_nil_check(F->pm_2051)).t_, &F->acc_2054);
(*(P117)rt_nil_check(F->z_2056)).t_ = (*(P1812)rt_nil_check(F->pm_2051)).t_;
(*(P117)rt_nil_check(F->z_2056)).c_ = (*(P1812)rt_nil_check(F->pm_2051)).c_;
f_bind_641(F->up, F->z_2056, F->acc_2054);
f_copy_code_623(F->up, (*(P1812)rt_nil_check(F->pm_2051)).t_, (*(P140)rt_nil_check(F->v_2053)), &F->x_2055);
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->acc_2054)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2055))), one_rt_gstr(59)));
(*(P1812)rt_nil_check(F->pm_2051)).dsym_ = F->z_2056;
}
F->pm_2051 = (*(P1812)rt_nil_check(F->pm_2051)).next_;
}
L_end_2057: ;
ret_:

  return;
}

static void f_build_subprogram_650(struct f_greenc_1fr *up_, P174 d_648, P117 *y_649) {
  struct f_build_subprogram_650fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_648 = d_648;
F->y_649 = y_649;
F->p_2058 = NULL;
F->p_2058 = (*(P174)rt_nil_check(F->d_648)).a_;
F->pm_2059 = NULL;
F->tail_2060 = NULL;
F->rc_2061 = NULL;
F->k_2062 = INT64_MIN;
F->k_2062 = ((rt_int)4LL);
if ((G_NV((*(P174)rt_nil_check(F->d_648)).kind_) == ((rt_int)45LL))) {
F->k_2062 = ((rt_int)3LL);
}
(*F->y_649) = f_new_sym_469(F->up, G_NV(F->k_2062), (*(P174)rt_nil_check(F->d_648)).name_);
while ((F->p_2058 != NULL)) {
F->pm_2059 = ({ R1813 *cell2064 = rt_alloc(sizeof(R1813)); *cell2064 = cp_R1813(({ R1813 ag2065; ag2065.name_ = (*(P174)rt_nil_check(F->p_2058)).name_; ag2065.mode_ = G_NV((*(P174)rt_nil_check(F->p_2058)).ival_); ag2065.t_ = NULL; ag2065.c_ = NULL; ag2065.cfield_ = NULL; ag2065.dflt_ = (*(P174)rt_nil_check(F->p_2058)).b_; ag2065.next_ = NULL; ag2065.dsym_ = NULL; ag2065; })); (P1812)cell2064; });
f_resolve_507(F->up, (*(P174)rt_nil_check(F->p_2058)).a_, &(*(P1812)rt_nil_check(F->pm_2059)).t_, &(*(P1812)rt_nil_check(F->pm_2059)).c_);
f_new_name_230(F->up, cat_rt_gstr(f_lower_s_238(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_2058)).name_))), one_rt_gstr(95)), &(*(P1812)rt_nil_check(F->pm_2059)).cfield_);
if (((G_NV((*(P174)rt_nil_check(F->d_648)).kind_) == ((rt_int)45LL)) && (G_NV((*(P1812)rt_nil_check(F->pm_2059)).mode_) != ((rt_int)1LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->p_2058)).line_), rt_g_lit("a function can only have in parameters (RM79 6.5)", 49));
}
if (((G_NV((*(P174)rt_nil_check(F->d_648)).flag_) == ((rt_int)1LL)) && (G_NV((*(P1812)rt_nil_check(F->pm_2059)).mode_) != ((rt_int)1LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->p_2058)).line_), rt_g_lit("a value-returning procedure can only have in parameters (RM79 6.5)", 66));
}
if ((F->tail_2060 == NULL)) {
(*(P117)rt_nil_check((*F->y_649))).params_ = F->pm_2059;
} else {
(*(P1812)rt_nil_check(F->tail_2060)).next_ = F->pm_2059;
}
F->tail_2060 = F->pm_2059;
F->p_2058 = (*(P174)rt_nil_check(F->p_2058)).next_;
}
L_end_2063: ;
(*(P117)rt_nil_check((*F->y_649))).result_ = F->up->ty_void_161;
if (((*(P174)rt_nil_check(F->d_648)).b_ != NULL)) {
f_resolve_507(F->up, (*(P174)rt_nil_check(F->d_648)).b_, &(*(P117)rt_nil_check((*F->y_649))).result_, &F->rc_2061);
(*(P117)rt_nil_check((*F->y_649))).c_ = F->rc_2061;
}
if ((f_is_rel_340(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->d_648)).name_))) && ((*(P117)rt_nil_check((*F->y_649))).result_ != F->up->ty_bool_157))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->d_648)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the relational operator ", 24), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->d_648)).name_))), rt_g_lit(" returns BOOLEAN (RM79 6.6.1)", 29)));
}
(*(P117)rt_nil_check((*F->y_649))).vrp_ = (G_NV((*(P174)rt_nil_check(F->d_648)).flag_) == ((rt_int)1LL));
f_new_name_230(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("f_", 2), f_c_ident_747(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->d_648)).name_)))), one_rt_gstr(95)), &(*(P117)rt_nil_check((*F->y_649))).cname_);
(*(P117)rt_nil_check((*F->y_649))).decl_ = F->d_648;
(*(P117)rt_nil_check((*F->y_649))).level_ = G_NV(F->up->cur_level_139);
ret_:

  return;
}

static void f_decl_elements_652(struct f_greenc_1fr *up_, P174 decls_651) {
  struct f_decl_elements_652fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_651 = decls_651;
F->e_2066 = NULL;
F->e_2066 = F->decls_651;
F->declared_2067 = INT_MIN;
F->declared_2067 = 0;
F->up->anon_node_176 = NULL;
while ((F->e_2066 != NULL)) {
if ((((G_NV((*(P174)rt_nil_check(F->e_2066)).kind_) != ((rt_int)40LL)) && (G_NV((*(P174)rt_nil_check(F->e_2066)).kind_) != ((rt_int)41LL))) || ((*(P174)rt_nil_check(F->e_2066)).a_ != F->up->anon_node_176))) {
F->up->anon_node_176 = NULL;
}
if (((((G_NV((*(P174)rt_nil_check(F->e_2066)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check(F->e_2066)).kind_) == ((rt_int)45LL))) && (G_NV((*(P174)rt_nil_check(F->e_2066)).ival_) != ((rt_int)1LL))) && (!G_NV(F->declared_2067)))) {
f_declare_subprograms_643(F->up, F->e_2066);
F->declared_2067 = 1;
}
f_decl_element_654(F->up, F->e_2066);
F->e_2066 = (*(P174)rt_nil_check(F->e_2066)).next_;
}
L_end_2068: ;
ret_:

  return;
}

static void f_decl_element_654(struct f_greenc_1fr *up_, P174 e_653) {
  struct f_decl_element_654fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_653 = e_653;
F->saved_2069 = NULL;
F->saved_2069 = F->up->barriers_200;
if ((((*(P174)rt_nil_check(F->e_653)).formal_ != NULL) && (((((((G_NV((*(P174)rt_nil_check(F->e_653)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check(F->e_653)).kind_) == ((rt_int)45LL))) || (G_NV((*(P174)rt_nil_check(F->e_653)).kind_) == ((rt_int)48LL))) || (G_NV((*(P174)rt_nil_check(F->e_653)).kind_) == ((rt_int)49LL))) || (G_NV((*(P174)rt_nil_check(F->e_653)).kind_) == ((rt_int)50LL))) || (G_NV((*(P174)rt_nil_check(F->e_653)).kind_) == ((rt_int)51LL))) || (G_NV((*(P174)rt_nil_check(F->e_653)).kind_) == ((rt_int)54LL))))) {
f_push_barrier_670(F->up, F->e_653, G_NV(F->up->depth_120));
f_decl_element_1_656(F->up, F->e_653);
F->up->barriers_200 = F->saved_2069;
goto ret_;
}
f_decl_element_1_656(F->up, F->e_653);
ret_:

  return;
}

static void f_decl_element_1_656(struct f_greenc_1fr *up_, P174 e_655) {
  struct f_decl_element_1_656fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_655 = e_655;
F->pd_2070 = NULL;
F->y_2071 = NULL;
F->z_2072 = NULL;
F->t_2073 = NULL;
F->vt_2074 = NULL;
F->c_2075 = NULL;
F->acc_2076 = NULL;
F->v_2077 = NULL;
F->x_2078 = NULL;
F->ok_2079 = INT_MIN;
{ rt_int sel2080 = G_NV((*(P174)rt_nil_check(F->e_655)).kind_);
if (0 || sel2080 == ((rt_int)42LL)) {
F->y_2071 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_655)).name_)));
if ((((((((F->y_2071 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_2071)).kind_) == ((rt_int)5LL))) && (G_NV((*(P117)rt_nil_check(F->y_2071)).depth_) == G_NV(F->up->depth_120))) && ((*(P117)rt_nil_check(F->y_2071)).t_ != NULL)) && G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2071)).t_)).priv_)) && (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2071)).t_)).kind_) == ((rt_int)9LL))) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_655)).a_)).kind_) != ((rt_int)77LL)))) {
F->up->completing_173 = (*(P117)rt_nil_check(F->y_2071)).t_;
F->x_2078 = (*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2071)).t_)).name_;
F->pd_2070 = (*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2071)).t_)).decl_;
F->ok_2079 = G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2071)).t_)).is_restricted_);
f_type_definition_541(F->up, (*(P174)rt_nil_check(F->e_655)).a_, (*(P174)rt_nil_check(F->e_655)).name_, &F->t_2073, &F->c_2075);
F->up->completing_173 = NULL;
if ((F->t_2073 != (*(P117)rt_nil_check(F->y_2071)).t_)) {
as_R123(&(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2071)).t_)), (*(P122)rt_nil_check(F->t_2073)));
}
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2071)).t_)).name_ = F->x_2078;
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2071)).t_)).priv_ = 1;
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2071)).t_)).decl_ = F->pd_2070;
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2071)).t_)).is_restricted_ = G_NV(F->ok_2079);
(*(P117)rt_nil_check(F->y_2071)).c_ = F->c_2075;
} else {
F->y_2071 = f_new_sym_469(F->up, ((rt_int)5LL), (*(P174)rt_nil_check(F->e_655)).name_);
(*(P117)rt_nil_check(F->y_2071)).decl_ = F->e_655;
f_define_464(F->up, F->y_2071, G_NV((*(P174)rt_nil_check(F->e_655)).line_));
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_655)).a_)).kind_) == ((rt_int)77LL))) {
(*(P117)rt_nil_check(F->y_2071)).t_ = f_new_typ_471(F->up, ((rt_int)9LL));
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2071)).t_)).name_ = (*(P174)rt_nil_check(F->e_655)).name_;
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2071)).t_)).priv_ = 1;
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2071)).t_)).decl_ = F->up->cur_pkg_213;
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2071)).t_)).is_restricted_ = (G_NV((*(P174)rt_nil_check(F->e_655)).flag_) == ((rt_int)9LL));
} else {
f_type_definition_541(F->up, (*(P174)rt_nil_check(F->e_655)).a_, (*(P174)rt_nil_check(F->e_655)).name_, &(*(P117)rt_nil_check(F->y_2071)).t_, &(*(P117)rt_nil_check(F->y_2071)).c_);
}
}
} else if (0 || sel2080 == ((rt_int)43LL)) {
F->y_2071 = f_new_sym_469(F->up, ((rt_int)5LL), (*(P174)rt_nil_check(F->e_655)).name_);
f_resolve_507(F->up, (*(P174)rt_nil_check(F->e_655)).a_, &(*(P117)rt_nil_check(F->y_2071)).t_, &(*(P117)rt_nil_check(F->y_2071)).c_);
f_define_464(F->up, F->y_2071, G_NV((*(P174)rt_nil_check(F->e_655)).line_));
} else if (0 || sel2080 == ((rt_int)40LL)) {
f_resolve_object_type_662(F->up, (*(P174)rt_nil_check(F->e_655)).a_, &F->t_2073, &F->c_2075);
F->y_2071 = f_new_sym_469(F->up, ((rt_int)1LL), (*(P174)rt_nil_check(F->e_655)).name_);
if ((G_NV((*(P174)rt_nil_check(F->e_655)).flag_) == ((rt_int)2LL))) {
f_lvalue_761(F->up, (*(P174)rt_nil_check(F->e_655)).b_, &F->v_2077, &F->vt_2074, &F->c_2075, &(*(P117)rt_nil_check(F->y_2071)).ro_);
 (void)rt_range((*(P117)rt_nil_check(F->y_2071)).ro_, 0, 1);
f_check_type_486(F->up, F->vt_2074, F->t_2073, G_NV((*(P174)rt_nil_check(F->e_655)).line_));
f_ctype_491(F->up, F->t_2073, &F->acc_2076);
f_new_name_230(F->up, cat_rt_gstr(f_lower_s_238(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_655)).name_))), one_rt_gstr(95)), &F->x_2078);
if (G_NV(F->up->in_func_138)) {
f_put_to_252(F->up, F->up->fields_buf_137, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P140)rt_nil_check(F->acc_2076))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check(F->x_2078))), one_rt_gstr(59)));
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->", 3), (*(P140)rt_nil_check(F->x_2078))), rt_g_lit(" = &(", 5)), (*(P140)rt_nil_check(F->v_2077))), rt_g_lit(");", 2)));
(*(P117)rt_nil_check(F->y_2071)).byref_ = 1;
(*(P117)rt_nil_check(F->y_2071)).level_ = G_NV(F->up->cur_level_139);
(*(P117)rt_nil_check(F->y_2071)).access_path_ = F->x_2078;
} else {
f_put_to_252(F->up, F->up->out_globals_132, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->acc_2076))), rt_g_lit(" *g_", 4)), (*(P140)rt_nil_check(F->x_2078))), one_rt_gstr(59)));
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("g_", 2), (*(P140)rt_nil_check(F->x_2078))), rt_g_lit(" = &(", 5)), (*(P140)rt_nil_check(F->v_2077))), rt_g_lit(");", 2)));
(*(P117)rt_nil_check(F->y_2071)).level_ = ((rt_int)0LL);
(*(P117)rt_nil_check(F->y_2071)).access_path_ = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*g_", 4), (*(P140)rt_nil_check(F->x_2078))), one_rt_gstr(41)));
}
(*(P117)rt_nil_check(F->y_2071)).t_ = F->vt_2074;
(*(P117)rt_nil_check(F->y_2071)).c_ = F->c_2075;
f_define_464(F->up, F->y_2071, G_NV((*(P174)rt_nil_check(F->e_655)).line_));
goto ret_;
}
if ((((G_NV((*(P122)rt_nil_check(F->t_2073)).kind_) == ((rt_int)6LL)) && (!f_bounded_474(F->up, F->c_2075))) && ((*(P174)rt_nil_check(F->e_655)).b_ != NULL))) {
F->up->vrp_ok_218 = 1;
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->e_655)).b_, F->t_2073, &F->vt_2074, &F->v_2077);
F->up->vrp_ok_218 = 0;
f_check_type_486(F->up, F->vt_2074, F->t_2073, G_NV((*(P174)rt_nil_check(F->e_655)).line_));
f_storage_638(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_655)).name_)), F->t_2073, &F->acc_2076);
f_copy_code_623(F->up, F->t_2073, (*(P140)rt_nil_check(F->v_2077)), &F->x_2078);
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->acc_2076)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2078))), one_rt_gstr(59)));
} else {
f_storage_638(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_655)).name_)), F->t_2073, &F->acc_2076);
f_init_storage_611(F->up, (*(P140)rt_nil_check(F->acc_2076)), F->t_2073, F->c_2075);
if (((*(P174)rt_nil_check(F->e_655)).b_ != NULL)) {
if (f_restricted_here_562(F->up, F->t_2073)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_655)).line_), rt_g_lit("a restricted type has no assignment: no initial value (RM79 7.4)", 64));
}
if (f_is_const_access_755(F->up, (*(P174)rt_nil_check(F->e_655)).b_)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_655)).line_), rt_g_lit("a constant of an access type cannot be assigned to a variable (RM79 3.8)", 72));
}
F->up->vrp_ok_218 = 1;
if (((G_NV((*(P122)rt_nil_check(F->t_2073)).kind_) == ((rt_int)6LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_655)).b_)).kind_) == ((rt_int)12LL)))) {
F->up->agg_bounds_181 = F->acc_2076;
}
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->e_655)).b_, F->t_2073, &F->vt_2074, &F->v_2077);
F->up->agg_bounds_181 = NULL;
F->up->vrp_ok_218 = 0;
f_check_type_486(F->up, F->vt_2074, F->t_2073, G_NV((*(P174)rt_nil_check(F->e_655)).line_));
f_assign_code_619(F->up, (*(P140)rt_nil_check(F->acc_2076)), F->t_2073, (*(P140)rt_nil_check(F->v_2077)), F->c_2075, &F->x_2078);
f_emit_254(F->up, (*(P140)rt_nil_check(F->x_2078)));
}
}
(*(P117)rt_nil_check(F->y_2071)).t_ = F->t_2073;
(*(P117)rt_nil_check(F->y_2071)).c_ = F->c_2075;
f_bind_641(F->up, F->y_2071, F->acc_2076);
f_define_464(F->up, F->y_2071, G_NV((*(P174)rt_nil_check(F->e_655)).line_));
} else if (0 || sel2080 == ((rt_int)41LL)) {
f_resolve_object_type_662(F->up, (*(P174)rt_nil_check(F->e_655)).a_, &F->t_2073, &F->c_2075);
F->z_2072 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_655)).name_)));
if (((*(P174)rt_nil_check(F->e_655)).b_ == NULL)) {
if (((F->up->cur_pkg_213 == NULL) || (!(G_NV((*(P122)rt_nil_check(F->t_2073)).priv_) && (G_NV((*(P122)rt_nil_check(F->t_2073)).kind_) == ((rt_int)9LL)))))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_655)).line_), rt_g_lit("a constant needs a value; only a constant of a private type is deferred (RM79 7.4)", 82));
}
F->y_2071 = f_new_sym_469(F->up, ((rt_int)2LL), (*(P174)rt_nil_check(F->e_655)).name_);
(*(P117)rt_nil_check(F->y_2071)).t_ = F->t_2073;
(*(P117)rt_nil_check(F->y_2071)).c_ = F->c_2075;
(*(P117)rt_nil_check(F->y_2071)).ro_ = 1;
(*(P117)rt_nil_check(F->y_2071)).flags_ = rt_add(((rt_int)1LL), ((rt_int)2LL));
f_define_464(F->up, F->y_2071, G_NV((*(P174)rt_nil_check(F->e_655)).line_));
goto ret_;
}
if (((((F->z_2072 != NULL) && (G_NV((*(P117)rt_nil_check(F->z_2072)).depth_) == G_NV(F->up->depth_120))) && (G_NV((*(P117)rt_nil_check(F->z_2072)).kind_) == ((rt_int)2LL))) && (G_NV((*(P117)rt_nil_check(F->z_2072)).flags_) == rt_add(((rt_int)1LL), ((rt_int)2LL))))) {
f_check_type_486(F->up, F->t_2073, (*(P117)rt_nil_check(F->z_2072)).t_, G_NV((*(P174)rt_nil_check(F->e_655)).line_));
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->e_655)).b_, F->t_2073, &F->vt_2074, &F->v_2077);
f_check_type_486(F->up, F->vt_2074, F->t_2073, G_NV((*(P174)rt_nil_check(F->e_655)).line_));
f_storage_638(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_655)).name_)), F->t_2073, &F->acc_2076);
f_bind_641(F->up, F->z_2072, F->acc_2076);
f_copy_code_623(F->up, F->t_2073, (*(P140)rt_nil_check(F->v_2077)), &F->x_2078);
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->acc_2076)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2078))), one_rt_gstr(59)));
(*(P117)rt_nil_check(F->z_2072)).flags_ = ((rt_int)1LL);
goto ret_;
}
F->y_2071 = f_new_sym_469(F->up, ((rt_int)2LL), (*(P174)rt_nil_check(F->e_655)).name_);
(*(P117)rt_nil_check(F->y_2071)).flags_ = ((rt_int)1LL);
F->up->vrp_ok_218 = 1;
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->e_655)).b_, F->t_2073, &F->vt_2074, &F->v_2077);
F->up->vrp_ok_218 = 0;
f_check_type_486(F->up, F->vt_2074, F->t_2073, G_NV((*(P174)rt_nil_check(F->e_655)).line_));
if ((G_NV((*(P122)rt_nil_check(F->t_2073)).kind_) == ((rt_int)1LL))) {
f_manifest_503(F->up, (*(P174)rt_nil_check(F->e_655)).b_, &(*(P117)rt_nil_check(F->y_2071)).mvalue_, &F->ok_2079);
 (void)rt_range(F->ok_2079, 0, 1);
(*(P117)rt_nil_check(F->y_2071)).hasmv_ = G_NV(F->ok_2079);
}
f_storage_638(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_655)).name_)), F->t_2073, &F->acc_2076);
f_copy_code_623(F->up, F->t_2073, (*(P140)rt_nil_check(F->v_2077)), &F->x_2078);
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->acc_2076)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2078))), one_rt_gstr(59)));
(*(P117)rt_nil_check(F->y_2071)).t_ = F->t_2073;
(*(P117)rt_nil_check(F->y_2071)).c_ = F->c_2075;
(*(P117)rt_nil_check(F->y_2071)).ro_ = 1;
f_bind_641(F->up, F->y_2071, F->acc_2076);
f_define_464(F->up, F->y_2071, G_NV((*(P174)rt_nil_check(F->e_655)).line_));
} else if (0 || sel2080 == ((rt_int)46LL)) {
if (((*(P174)rt_nil_check(F->e_655)).a_ != NULL)) {
if (((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_655)).a_)).kind_) == ((rt_int)9LL)) && f_is_package_1044(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_655)).a_)).a_))) {
F->y_2071 = f_member_of_1048(F->up, f_path_of_344(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_655)).a_)).a_), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_655)).a_)).name_)), G_NV((*(P174)rt_nil_check(F->e_655)).line_));
} else if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_655)).a_)).kind_) == ((rt_int)5LL))) {
F->y_2071 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_655)).a_)).name_)));
} else {
F->y_2071 = NULL;
}
if (((F->y_2071 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_2071)).kind_) != ((rt_int)6LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_655)).line_), rt_g_lit("an exception is renamed only as an exception", 44));
}
f_copy_sym_1053(F->up, F->y_2071, &F->z_2072);
(*(P117)rt_nil_check(F->z_2072)).name_ = (*(P174)rt_nil_check(F->e_655)).name_;
f_define_464(F->up, F->z_2072, G_NV((*(P174)rt_nil_check(F->e_655)).line_));
goto ret_;
}
F->y_2071 = f_new_sym_469(F->up, ((rt_int)6LL), (*(P174)rt_nil_check(F->e_655)).name_);
f_new_name_230(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("ex_", 3), f_lower_s_238(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_655)).name_)))), one_rt_gstr(95)), &(*(P117)rt_nil_check(F->y_2071)).cname_);
f_put_to_252(F->up, F->up->out_globals_132, cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int ", 11), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2071)).cname_))), one_rt_gstr(59)));
f_put_to_252(F->up, F->up->out_excs_135, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2071)).cname_))), rt_g_lit(" = rt_exc(", 10)), f_q_245(F->up)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_655)).name_))), f_q_245(F->up)), rt_g_lit(");", 2)));
f_define_464(F->up, F->y_2071, G_NV((*(P174)rt_nil_check(F->e_655)).line_));
} else if (0 || sel2080 == ((rt_int)44LL) || sel2080 == ((rt_int)45LL)) {
if (f_is_generic_name_1242(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_655)).name_)))) {
f_attach_generic_body_1244(F->up, F->e_655);
} else if ((G_NV((*(P174)rt_nil_check(F->e_655)).ival_) == ((rt_int)2LL))) {
f_rename_subprogram_664(F->up, F->e_655);
} else if ((G_NV((*(P174)rt_nil_check(F->e_655)).ival_) == ((rt_int)1LL))) {
f_build_subprogram_650(F->up, F->e_655, &F->y_2071);
f_define_464(F->up, F->y_2071, G_NV((*(P174)rt_nil_check(F->e_655)).line_));
f_elaborate_defaults_647(F->up, F->y_2071);
} else {
f_subprogram_body_692(F->up, F->e_655, f_lookup_decl_438(F->up, F->e_655));
}
} else if (0 || sel2080 == ((rt_int)55LL)) {
f_use_clause_1067(F->up, F->e_655);
} else if (0 || sel2080 == ((rt_int)56LL)) {
f_pragma_decl_658(F->up, F->e_655);
} else {
f_other_decl_672(F->up, F->e_655);
}
}
ret_:

  return;
}

static void f_pragma_decl_658(struct f_greenc_1fr *up_, P174 e_657) {
  struct f_pragma_decl_658fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_657 = e_657;
ret_:

  return;
}

static void f_resolve_object_type_662(struct f_greenc_1fr *up_, P174 st_659, P122 *t_660, P178 *c_661) {
  struct f_resolve_object_type_662fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_659 = st_659;
F->t_660 = t_660;
F->c_661 = c_661;
if (((G_NV((*(P174)rt_nil_check(F->st_659)).kind_) != ((rt_int)80LL)) && (F->st_659 == F->up->anon_node_176))) {
(*F->t_660) = F->up->anon_typ_177;
(*F->c_661) = F->up->anon_cons_180;
goto ret_;
}
f_resolve_507(F->up, F->st_659, &(*F->t_660), &(*F->c_661));
if ((G_NV((*(P174)rt_nil_check(F->st_659)).kind_) != ((rt_int)80LL))) {
F->up->anon_node_176 = F->st_659;
F->up->anon_typ_177 = (*F->t_660);
F->up->anon_cons_180 = (*F->c_661);
}
ret_:

  return;
}

static void f_rename_subprogram_664(struct f_greenc_1fr *up_, P174 e_663) {
  struct f_rename_subprogram_664fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_663 = e_663;
F->newy_2081 = NULL;
F->y_2082 = NULL;
F->z_2083 = NULL;
F->cand_2084 = NULL;
F->ix_2085 = NULL;
F->p_2086 = NULL;
F->q_2087 = NULL;
F->tail_2088 = NULL;
f_build_subprogram_650(F->up, F->e_663, &F->newy_2081);
F->y_2082 = NULL;
if (((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_663)).c_)).kind_) == ((rt_int)5LL)) || ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_663)).c_)).kind_) == ((rt_int)9LL)) && f_is_package_1044(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_663)).c_)).a_)))) {
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_663)).c_)).kind_) == ((rt_int)5LL))) {
F->cand_2084 = ({ A116 ix2089 = F->up->table_119; ix2089.p[rt_index(f_hash_416(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_663)).c_)).name_))), ix2089.lo, ix2089.hi) - ix2089.lo]; });
while ((F->cand_2084 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->cand_2084)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_663)).c_)).name_))) && (((G_NV((*(P117)rt_nil_check(F->cand_2084)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->cand_2084)).kind_) == ((rt_int)4LL))) || (G_NV((*(P117)rt_nil_check(F->cand_2084)).kind_) == ((rt_int)10LL)))) && f_visible_sym_421(F->up, F->cand_2084))) {
if (((f_same_types_455(F->up, (*(P117)rt_nil_check(F->cand_2084)).params_, (*(P117)rt_nil_check(F->newy_2081)).params_) && f_same_443(F->up, (*(P117)rt_nil_check(F->cand_2084)).result_, (*(P117)rt_nil_check(F->newy_2081)).result_)) && (F->y_2082 == NULL))) {
F->y_2082 = F->cand_2084;
}
}
F->cand_2084 = (*(P117)rt_nil_check(F->cand_2084)).chain_;
}
L_end_2090: ;
} else {
F->cand_2084 = (*(P117)rt_nil_check(f_lookup_path_1042(F->up, f_path_of_344(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_663)).c_)).a_)))).members_;
while ((F->cand_2084 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->cand_2084)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_663)).c_)).name_))) && (((G_NV((*(P117)rt_nil_check(F->cand_2084)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->cand_2084)).kind_) == ((rt_int)4LL))) || (G_NV((*(P117)rt_nil_check(F->cand_2084)).kind_) == ((rt_int)10LL)))) && (!G_NV((*(P117)rt_nil_check(F->cand_2084)).hidden_)))) {
if (((f_same_types_455(F->up, (*(P117)rt_nil_check(F->cand_2084)).params_, (*(P117)rt_nil_check(F->newy_2081)).params_) && f_same_443(F->up, (*(P117)rt_nil_check(F->cand_2084)).result_, (*(P117)rt_nil_check(F->newy_2081)).result_)) && (F->y_2082 == NULL))) {
F->y_2082 = F->cand_2084;
}
}
F->cand_2084 = (*(P117)rt_nil_check(F->cand_2084)).mnext_;
}
L_end_2091: ;
}
}
if (((F->y_2082 == NULL) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_663)).c_)).kind_) == ((rt_int)9LL)))) {
f_entry_sym_1173(F->up, (*(P174)rt_nil_check(F->e_663)).c_, &F->y_2082, &F->ix_2085);
if (((F->ix_2085 != NULL) || ((*(P117)rt_nil_check(F->y_2082)).c_ != NULL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_663)).line_), rt_g_lit("a renamed entry is an entry of a single task (RM79 8.5)", 55));
}
if (((!f_same_types_455(F->up, (*(P117)rt_nil_check(F->y_2082)).params_, (*(P117)rt_nil_check(F->newy_2081)).params_)) || (G_NV((*(P174)rt_nil_check(F->e_663)).kind_) != ((rt_int)44LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_663)).line_), rt_g_lit("an entry is renamed as a procedure with the same parameters (RM79 8.5)", 70));
}
}
if ((F->y_2082 == NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_663)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("no subprogram ", 14), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_663)).c_)).name_))), rt_g_lit(" with this profile to rename (RM79 8.5)", 39)));
}
f_copy_sym_1053(F->up, F->y_2082, &F->z_2083);
(*(P117)rt_nil_check(F->z_2083)).name_ = (*(P174)rt_nil_check(F->e_663)).name_;
(*(P117)rt_nil_check(F->z_2083)).decl_ = (*(P117)rt_nil_check(F->y_2082)).decl_;
(*(P117)rt_nil_check(F->z_2083)).params_ = NULL;
F->p_2086 = (*(P117)rt_nil_check(F->y_2082)).params_;
F->q_2087 = (*(P117)rt_nil_check(F->newy_2081)).params_;
while ((F->p_2086 != NULL)) {
if ((F->tail_2088 == NULL)) {
(*(P117)rt_nil_check(F->z_2083)).params_ = ({ R1813 *cell2093 = rt_alloc(sizeof(R1813)); *cell2093 = cp_R1813(({ R1813 ag2094; ag2094.name_ = (*(P1812)rt_nil_check(F->q_2087)).name_; ag2094.mode_ = G_NV((*(P1812)rt_nil_check(F->p_2086)).mode_); ag2094.t_ = (*(P1812)rt_nil_check(F->p_2086)).t_; ag2094.c_ = (*(P1812)rt_nil_check(F->p_2086)).c_; ag2094.cfield_ = (*(P1812)rt_nil_check(F->p_2086)).cfield_; ag2094.dflt_ = (*(P1812)rt_nil_check(F->q_2087)).dflt_; ag2094.next_ = NULL; ag2094.dsym_ = NULL; ag2094; })); (P1812)cell2093; });
F->tail_2088 = (*(P117)rt_nil_check(F->z_2083)).params_;
} else {
(*(P1812)rt_nil_check(F->tail_2088)).next_ = ({ R1813 *cell2095 = rt_alloc(sizeof(R1813)); *cell2095 = cp_R1813(({ R1813 ag2096; ag2096.name_ = (*(P1812)rt_nil_check(F->q_2087)).name_; ag2096.mode_ = G_NV((*(P1812)rt_nil_check(F->p_2086)).mode_); ag2096.t_ = (*(P1812)rt_nil_check(F->p_2086)).t_; ag2096.c_ = (*(P1812)rt_nil_check(F->p_2086)).c_; ag2096.cfield_ = (*(P1812)rt_nil_check(F->p_2086)).cfield_; ag2096.dflt_ = (*(P1812)rt_nil_check(F->q_2087)).dflt_; ag2096.next_ = NULL; ag2096.dsym_ = NULL; ag2096; })); (P1812)cell2095; });
F->tail_2088 = (*(P1812)rt_nil_check(F->tail_2088)).next_;
}
F->p_2086 = (*(P1812)rt_nil_check(F->p_2086)).next_;
F->q_2087 = (*(P1812)rt_nil_check(F->q_2087)).next_;
}
L_end_2092: ;
f_define_464(F->up, F->z_2083, G_NV((*(P174)rt_nil_check(F->e_663)).line_));
f_elaborate_defaults_647(F->up, F->z_2083);
ret_:

  return;
}

static void f_rename_module_667(struct f_greenc_1fr *up_, P174 e_665, P174 target_666) {
  struct f_rename_module_667fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_665 = e_665;
F->target_666 = target_666;
F->y_2097 = NULL;
F->z_2098 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->target_666)).kind_) == ((rt_int)8LL))) {
F->y_2097 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->target_666)).a_)).name_)));
if ((((F->y_2097 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_2097)).kind_) != ((rt_int)9LL))) || ((*(P117)rt_nil_check(F->y_2097)).c_ == NULL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_665)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->target_666)).a_)).name_)), rt_g_lit(" is not a task family (RM79 8.5)", 32)));
}
f_copy_sym_1053(F->up, F->y_2097, &F->z_2098);
(*(P117)rt_nil_check(F->z_2098)).name_ = (*(P174)rt_nil_check(F->e_665)).name_;
(*(P117)rt_nil_check(F->z_2098)).flags_ = ((rt_int)4LL);
(*(P117)rt_nil_check(F->z_2098)).decl_ = F->target_666;
f_define_464(F->up, F->z_2098, G_NV((*(P174)rt_nil_check(F->e_665)).line_));
goto ret_;
}
if ((G_NV((*(P174)rt_nil_check(F->target_666)).kind_) == ((rt_int)5LL))) {
F->y_2097 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->target_666)).name_)));
} else if ((G_NV((*(P174)rt_nil_check(F->target_666)).kind_) == ((rt_int)9LL))) {
F->y_2097 = f_lookup_path_1042(F->up, f_path_of_344(F->up, F->target_666));
}
if (((F->y_2097 == NULL) || ((G_NV((*(P117)rt_nil_check(F->y_2097)).kind_) != ((rt_int)8LL)) && (G_NV((*(P117)rt_nil_check(F->y_2097)).kind_) != ((rt_int)9LL))))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_665)).line_), rt_g_lit("a module is renamed as a module of the same kind (RM79 8.5)", 59));
}
if (((G_NV((*(P117)rt_nil_check(F->y_2097)).kind_) == ((rt_int)9LL)) != (G_NV((*(P174)rt_nil_check(F->e_665)).kind_) == ((rt_int)50LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_665)).line_), rt_g_lit("a package is renamed as a package, a task as a task (RM79 8.5)", 62));
}
f_copy_sym_1053(F->up, F->y_2097, &F->z_2098);
(*(P117)rt_nil_check(F->z_2098)).name_ = (*(P174)rt_nil_check(F->e_665)).name_;
f_define_464(F->up, F->z_2098, G_NV((*(P174)rt_nil_check(F->e_665)).line_));
ret_:

  return;
}

static void f_push_barrier_670(struct f_greenc_1fr *up_, P174 e_668, rt_int limit_669) {
  struct f_push_barrier_670fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_668 = e_668;
F->limit_669 = limit_669;
F->b_2099 = NULL;
F->first_name_2100 = NULL;
F->k_2101 = INT64_MIN;
F->b_2099 = ({ R199 *cell2102 = rt_alloc(sizeof(R199)); *cell2102 = cp_R199(({ R199 ag2103; ag2103.limit_ = F->limit_669; ag2103.keep_ = rt_neg(((rt_int)1LL)); ag2103.allowed_ = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_668)).formal_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_668)).name_))), one_rt_gstr(44))); ag2103.next_ = F->up->barriers_200; ag2103; })); (P198)cell2102; });
F->k_2101 = ((rt_int)2LL);
while (((G_NV(F->k_2101) <= ({ rt_gstr at2105 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_668)).formal_)); at2105.hi >= at2105.lo ? at2105.hi - at2105.lo + 1 : (rt_int)0; })) && (G_NV(({ rt_gstr ix2106 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_668)).formal_)); ix2106.p[rt_index(G_NV(F->k_2101), ix2106.lo, ix2106.hi) - ix2106.lo]; })) != 44))) {
F->k_2101 = rt_add(G_NV(F->k_2101), ((rt_int)1LL));
}
L_end_2104: ;
if ((G_NV(F->k_2101) > ((rt_int)2LL))) {
F->first_name_2100 = f_mk_227(F->up, ({ rt_gstr sl2108 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_668)).formal_)); rt_int l_ = ((rt_int)2LL), h_ = rt_sub(G_NV(F->k_2101), ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl2108.lo, sl2108.hi); rt_index(h_, sl2108.lo, sl2108.hi); } sl2108.p += l_ - sl2108.lo; sl2108.lo = l_; sl2108.hi = h_; sl2108; }));
(*(P198)rt_nil_check(F->b_2099)).keep_ = f_enclosing_depth_434(F->up, (*(P140)rt_nil_check(F->first_name_2100)));
}
F->up->barriers_200 = F->b_2099;
ret_:

  return;
}

static void f_other_decl_672(struct f_greenc_1fr *up_, P174 e_671) {
  struct f_other_decl_672fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_671 = e_671;
if (((G_NV((*(P174)rt_nil_check(F->e_671)).kind_) == ((rt_int)48LL)) && (G_NV((*(P174)rt_nil_check(F->e_671)).flag_) == ((rt_int)3LL)))) {
f_rename_module_667(F->up, F->e_671, (*(P174)rt_nil_check(F->e_671)).a_);
} else if (((G_NV((*(P174)rt_nil_check(F->e_671)).kind_) == ((rt_int)50LL)) && (G_NV((*(P174)rt_nil_check(F->e_671)).flag_) == ((rt_int)3LL)))) {
f_rename_module_667(F->up, F->e_671, (*(P174)rt_nil_check(F->e_671)).b_);
} else if ((G_NV((*(P174)rt_nil_check(F->e_671)).kind_) == ((rt_int)48LL))) {
f_package_spec_1058(F->up, F->e_671);
} else if ((G_NV((*(P174)rt_nil_check(F->e_671)).kind_) == ((rt_int)49LL))) {
f_package_body_1063(F->up, F->e_671);
} else {
f_task_decl_1148(F->up, F->e_671);
}
ret_:

  return;
}

static void f_scan_labels_675(struct f_greenc_1fr *up_, P174 stmts_673, rt_gstr path_674) {
  struct f_scan_labels_675fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_673 = stmts_673;
F->path_674 = cp_rt_gstr(path_674);
F->s_2109 = NULL;
F->s_2109 = F->stmts_673;
F->a_2110 = NULL;
F->l_2111 = NULL;
F->c_2112 = NULL;
while ((F->s_2109 != NULL)) {
if ((G_NV((*(P174)rt_nil_check(F->s_2109)).kind_) == ((rt_int)57LL))) {
F->l_2111 = F->up->body_labels_191;
while ((F->l_2111 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P189)rt_nil_check(F->l_2111)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_2109)).name_)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->s_2109)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("label ", 6), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_2109)).name_))), rt_g_lit(" is already used in this body (RM79 5)", 38)));
}
F->l_2111 = (*(P189)rt_nil_check(F->l_2111)).next_;
}
L_end_2114: ;
f_new_name_230(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("lbl_", 4), f_lower_s_238(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_2109)).name_)))), one_rt_gstr(95)), &F->c_2112);
F->up->body_labels_191 = ({ R190 *cell2115 = rt_alloc(sizeof(R190)); *cell2115 = cp_R190(({ R190 ag2116; ag2116.name_ = (*(P174)rt_nil_check(F->s_2109)).name_; ag2116.cname_ = F->c_2112; ag2116.path_ = f_mk_227(F->up, F->path_674); ag2116.frames_ = ((rt_int)0LL); ag2116.line_ = G_NV((*(P174)rt_nil_check(F->s_2109)).line_); ag2116.next_ = F->up->body_labels_191; ag2116; })); (P189)cell2115; });
} else if ((G_NV((*(P174)rt_nil_check(F->s_2109)).kind_) == ((rt_int)58LL))) {
F->up->body_gotos_192 = ({ R190 *cell2117 = rt_alloc(sizeof(R190)); *cell2117 = cp_R190(({ R190 ag2118; ag2118.name_ = (*(P174)rt_nil_check(F->s_2109)).name_; ag2118.cname_ = NULL; ag2118.path_ = f_mk_227(F->up, F->path_674); ag2118.frames_ = ((rt_int)0LL); ag2118.line_ = G_NV((*(P174)rt_nil_check(F->s_2109)).line_); ag2118.next_ = F->up->body_gotos_192; ag2118; })); (P189)cell2117; });
} else if ((G_NV((*(P174)rt_nil_check(F->s_2109)).kind_) == ((rt_int)22LL))) {
F->a_2110 = (*(P174)rt_nil_check(F->s_2109)).a_;
while ((F->a_2110 != NULL)) {
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_675(F->up, (*(P174)rt_nil_check(F->a_2110)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_674, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
F->a_2110 = (*(P174)rt_nil_check(F->a_2110)).next_;
}
L_end_2119: ;
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_675(F->up, (*(P174)rt_nil_check(F->s_2109)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_674, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
} else if ((G_NV((*(P174)rt_nil_check(F->s_2109)).kind_) == ((rt_int)23LL))) {
F->a_2110 = (*(P174)rt_nil_check(F->s_2109)).b_;
while ((F->a_2110 != NULL)) {
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_675(F->up, (*(P174)rt_nil_check(F->a_2110)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_674, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
F->a_2110 = (*(P174)rt_nil_check(F->a_2110)).next_;
}
L_end_2120: ;
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_675(F->up, (*(P174)rt_nil_check(F->s_2109)).c_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_674, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
} else if ((G_NV((*(P174)rt_nil_check(F->s_2109)).kind_) == ((rt_int)24LL))) {
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_675(F->up, (*(P174)rt_nil_check(F->s_2109)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_674, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
} else if ((G_NV((*(P174)rt_nil_check(F->s_2109)).kind_) == ((rt_int)25LL))) {
f_scan_guarded_679(F->up, (*(P174)rt_nil_check(F->s_2109)).b_, (*(P174)rt_nil_check(F->s_2109)).c_, F->path_674);
} else if ((G_NV((*(P174)rt_nil_check(F->s_2109)).kind_) == ((rt_int)34LL))) {
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_675(F->up, (*(P174)rt_nil_check(F->s_2109)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_674, one_rt_gstr(97)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
} else if ((G_NV((*(P174)rt_nil_check(F->s_2109)).kind_) == ((rt_int)35LL))) {
F->a_2110 = (*(P174)rt_nil_check(F->s_2109)).a_;
while ((F->a_2110 != NULL)) {
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->a_2110)).b_)).kind_) == ((rt_int)34LL))) {
f_scan_labels_675(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->a_2110)).b_)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_674, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), rt_g_lit("/a", 2)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
}
f_scan_labels_675(F->up, (*(P174)rt_nil_check(F->a_2110)).c_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_674, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
F->a_2110 = (*(P174)rt_nil_check(F->a_2110)).next_;
}
L_end_2121: ;
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_675(F->up, (*(P174)rt_nil_check(F->s_2109)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_674, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
}
F->s_2109 = (*(P174)rt_nil_check(F->s_2109)).next_;
}
L_end_2113: ;
ret_:

  return;
}

static void f_scan_guarded_679(struct f_greenc_1fr *up_, P174 stmts_676, P174 hs_677, rt_gstr path_678) {
  struct f_scan_guarded_679fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_676 = stmts_676;
F->hs_677 = hs_677;
F->path_678 = cp_rt_gstr(path_678);
F->h_2122 = NULL;
F->h_2122 = F->hs_677;
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
if ((F->hs_677 == NULL)) {
f_scan_labels_675(F->up, F->stmts_676, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_678, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
} else {
f_scan_labels_675(F->up, F->stmts_676, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_678, one_rt_gstr(103)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
}
while ((F->h_2122 != NULL)) {
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_675(F->up, (*(P174)rt_nil_check(F->h_2122)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_678, one_rt_gstr(104)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
F->h_2122 = (*(P174)rt_nil_check(F->h_2122)).next_;
}
L_end_2123: ;
ret_:

  return;
}

static rt_int f_count_g_681(struct f_greenc_1fr *up_, rt_gstr p_680) {
  struct f_count_g_681fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_680 = cp_rt_gstr(p_680);
F->n_2124 = INT64_MIN;
F->n_2124 = ((rt_int)0LL);
{ rt_int lo2129 = ({ rt_gstr at2126 = F->p_680; at2126.lo; }), hi2130 = ({ rt_gstr at2127 = F->p_680; at2127.hi; });
for (rt_int it2131 = lo2129; it2131 <= hi2130; it2131++) {
F->i_2128 = it2131;
if ((G_NV(({ rt_gstr ix2132 = F->p_680; ix2132.p[rt_index(F->i_2128, ix2132.lo, ix2132.hi) - ix2132.lo]; })) == 103)) {
F->n_2124 = rt_add(G_NV(F->n_2124), ((rt_int)1LL));
}
}
}
L_end_2125: ;
F->result_ = G_NV(F->n_2124);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_label_body_684(struct f_greenc_1fr *up_, P174 stmts_682, P174 hs_683) {
  struct f_label_body_684fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_682 = stmts_682;
F->hs_683 = hs_683;
F->l_2133 = NULL;
F->g_2134 = NULL;
F->gp_2135 = NULL;
F->lp_2136 = NULL;
F->up->body_labels_191 = NULL;
F->up->body_gotos_192 = NULL;
F->up->segments_193 = ((rt_int)0LL);
f_scan_guarded_679(F->up, F->stmts_682, F->hs_683, rt_g_lit("/", 1));
F->l_2133 = F->up->body_labels_191;
while ((F->l_2133 != NULL)) {
(*(P189)rt_nil_check(F->l_2133)).frames_ = rt_add(G_NV(F->up->frames_150), f_count_g_681(F->up, (*(P140)rt_nil_check((*(P189)rt_nil_check(F->l_2133)).path_))));
F->l_2133 = (*(P189)rt_nil_check(F->l_2133)).next_;
}
L_end_2137: ;
F->g_2134 = F->up->body_gotos_192;
while ((F->g_2134 != NULL)) {
F->l_2133 = F->up->body_labels_191;
while (((F->l_2133 != NULL) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P189)rt_nil_check(F->l_2133)).name_)), (*(P140)rt_nil_check((*(P189)rt_nil_check(F->g_2134)).name_)))))) {
F->l_2133 = (*(P189)rt_nil_check(F->l_2133)).next_;
}
L_end_2139: ;
if ((F->l_2133 == NULL)) {
f_fail_248(F->up, G_NV((*(P189)rt_nil_check(F->g_2134)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("goto ", 5), (*(P140)rt_nil_check((*(P189)rt_nil_check(F->g_2134)).name_))), rt_g_lit(": no such label in this body (RM79 5.8)", 39)));
}
F->gp_2135 = (*(P189)rt_nil_check(F->g_2134)).path_;
F->lp_2136 = (*(P189)rt_nil_check(F->l_2133)).path_;
if ((({ rt_gstr at2140 = (*(P140)rt_nil_check(F->lp_2136)); at2140.hi >= at2140.lo ? at2140.hi - at2140.lo + 1 : (rt_int)0; }) > ({ rt_gstr at2141 = (*(P140)rt_nil_check(F->gp_2135)); at2141.hi >= at2141.lo ? at2141.hi - at2141.lo + 1 : (rt_int)0; }))) {
f_fail_248(F->up, G_NV((*(P189)rt_nil_check(F->g_2134)).line_), rt_g_lit("a goto cannot transfer control into a compound statement (RM79 5.8)", 67));
} else if ((!eq_rt_gstr(({ rt_gstr sl2143 = (*(P140)rt_nil_check(F->gp_2135)); rt_int l_ = ((rt_int)1LL), h_ = ({ rt_gstr at2142 = (*(P140)rt_nil_check(F->lp_2136)); at2142.hi >= at2142.lo ? at2142.hi - at2142.lo + 1 : (rt_int)0; }); if (l_ <= h_) { rt_index(l_, sl2143.lo, sl2143.hi); rt_index(h_, sl2143.lo, sl2143.hi); } sl2143.p += l_ - sl2143.lo; sl2143.lo = l_; sl2143.hi = h_; sl2143; }), (*(P140)rt_nil_check(F->lp_2136))))) {
f_fail_248(F->up, G_NV((*(P189)rt_nil_check(F->g_2134)).line_), rt_g_lit("a goto cannot transfer control into a compound statement (RM79 5.8)", 67));
}
{ rt_int lo2148 = rt_add(({ rt_gstr at2145 = (*(P140)rt_nil_check(F->lp_2136)); at2145.hi >= at2145.lo ? at2145.hi - at2145.lo + 1 : (rt_int)0; }), ((rt_int)1LL)), hi2149 = ({ rt_gstr at2146 = (*(P140)rt_nil_check(F->gp_2135)); at2146.hi >= at2146.lo ? at2146.hi - at2146.lo + 1 : (rt_int)0; });
for (rt_int it2150 = lo2148; it2150 <= hi2149; it2150++) {
F->i_2147 = it2150;
if (((G_NV(({ rt_gstr ix2151 = (*(P140)rt_nil_check(F->gp_2135)); ix2151.p[rt_index(F->i_2147, ix2151.lo, ix2151.hi) - ix2151.lo]; })) == 104) || (G_NV(({ rt_gstr ix2152 = (*(P140)rt_nil_check(F->gp_2135)); ix2152.p[rt_index(F->i_2147, ix2152.lo, ix2152.hi) - ix2152.lo]; })) == 97))) {
f_fail_248(F->up, G_NV((*(P189)rt_nil_check(F->g_2134)).line_), rt_g_lit("a goto cannot leave an exception handler or an accept statement (RM79 5.8)", 74));
}
}
}
L_end_2144: ;
F->g_2134 = (*(P189)rt_nil_check(F->g_2134)).next_;
}
L_end_2138: ;
ret_:

  return;
}

static void f_gen_label_687(struct f_greenc_1fr *up_, P174 s_685, int goto_it_686) {
  struct f_gen_label_687fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_685 = s_685;
F->goto_it_686 = goto_it_686;
F->l_2153 = NULL;
F->l_2153 = F->up->body_labels_191;
while (((F->l_2153 != NULL) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P189)rt_nil_check(F->l_2153)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_685)).name_)))))) {
F->l_2153 = (*(P189)rt_nil_check(F->l_2153)).next_;
}
L_end_2154: ;
if ((F->l_2153 == NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->s_685)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("label ", 6), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_685)).name_))), rt_g_lit(" is not in this body (RM79 5.8)", 31)));
}
if (F->goto_it_686) {
f_pop_frames_696(F->up, G_NV((*(P189)rt_nil_check(F->l_2153)).frames_));
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("goto ", 5), (*(P140)rt_nil_check((*(P189)rt_nil_check(F->l_2153)).cname_))), one_rt_gstr(59)));
} else {
f_emit_254(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P189)rt_nil_check(F->l_2153)).cname_)), rt_g_lit(": ;", 3)));
}
ret_:

  return;
}

static int f_is_foreign_689(struct f_greenc_1fr *up_, P174 d_688) {
  struct f_is_foreign_689fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_688 = d_688;
if (((*(P174)rt_nil_check(F->d_688)).tag_ == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->d_688)).tag_)), rt_g_lit("INTERFACE", 9));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_subprogram_body_692(struct f_greenc_1fr *up_, P174 d_690, P117 y_691) {
  struct f_subprogram_body_692fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_690 = d_690;
F->y_691 = y_691;
F->saved_code_2155 = NULL;
F->saved_code_2155 = F->up->code_136;
F->saved_fields_2156 = NULL;
F->saved_fields_2156 = F->up->fields_buf_137;
F->saved_in_2157 = INT_MIN;
F->saved_in_2157 = G_NV(F->up->in_func_138);
F->saved_sym_2158 = NULL;
F->saved_sym_2158 = F->up->func_sym_142;
F->saved_exits_2159 = NULL;
F->saved_exits_2159 = F->up->exits_145;
F->saved_frames_2160 = INT64_MIN;
F->saved_frames_2160 = G_NV(F->up->frames_150);
F->saved_handlers_2161 = NULL;
F->saved_handlers_2161 = F->up->handlers_153;
F->saved_cleanups_2162 = NULL;
F->saved_cleanups_2162 = F->up->cleanups_154;
F->saved_labels_2163 = NULL;
F->saved_labels_2163 = F->up->body_labels_191;
F->saved_hx_2164 = NULL;
F->saved_hx_2164 = F->up->handler_exits_194;
F->saved_hd_2165 = INT64_MIN;
F->saved_hd_2165 = G_NV(F->up->handler_depth_195);
F->saved_pure_2166 = NULL;
F->saved_pure_2166 = F->up->pure_sym_216;
F->aw_2167 = NULL;
F->saved_pdepth_2168 = INT64_MIN;
F->saved_pdepth_2168 = G_NV(F->up->pure_depth_217);
F->args_2169 = NULL;
F->head_2170 = NULL;
F->frame_2171 = NULL;
F->parent_2172 = NULL;
F->ct_2173 = NULL;
F->x_2174 = NULL;
F->pm_2175 = NULL;
F->pm_2175 = (*(P117)rt_nil_check(F->y_691)).params_;
F->p_2176 = NULL;
F->frame_2171 = f_mk_227(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_691)).cname_)), rt_g_lit("fr", 2)));
if (G_NV(F->up->in_func_138)) {
F->parent_2172 = f_mk_227(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->func_sym_142)).cname_)), rt_g_lit("fr", 2)));
}
F->up->code_136 = f_new_buffer_249(F->up);
F->up->fields_buf_137 = f_new_buffer_249(F->up);
F->up->in_func_138 = 1;
F->up->func_sym_142 = F->y_691;
F->up->exits_145 = NULL;
F->up->frames_150 = ((rt_int)0LL);
F->up->handlers_153 = NULL;
F->up->cleanups_154 = NULL;
F->up->handler_exits_194 = NULL;
F->up->handler_depth_195 = ((rt_int)0LL);
F->up->cur_level_139 = rt_add(G_NV(F->up->cur_level_139), ((rt_int)1LL));
F->args_2169 = f_mk_227(F->up, rt_g_lit("", 0));
f_open_scope_465(F->up);
f_push_unit_436(F->up, (*(P174)rt_nil_check(F->d_690)).name_);
if (((G_NV((*(P117)rt_nil_check(F->y_691)).kind_) == ((rt_int)3LL)) && (!G_NV((*(P117)rt_nil_check(F->y_691)).vrp_)))) {
F->up->pure_sym_216 = F->y_691;
F->up->pure_depth_217 = G_NV(F->up->depth_120);
}
if ((F->parent_2172 != NULL)) {
f_put_to_252(F->up, F->up->fields_buf_137, cat_rt_gstr(cat_rt_gstr(rt_g_lit(" struct ", 8), (*(P140)rt_nil_check(F->parent_2172))), rt_g_lit(" *up;", 5)));
F->args_2169 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P140)rt_nil_check(F->parent_2172))), rt_g_lit(" *up_", 5)));
f_emit_254(F->up, rt_g_lit("F->up = up_;", 12));
}
while ((F->pm_2175 != NULL)) {
f_ctype_491(F->up, (*(P1812)rt_nil_check(F->pm_2175)).t_, &F->ct_2173);
if ((({ rt_gstr at2178 = (*(P140)rt_nil_check(F->args_2169)); at2178.hi >= at2178.lo ? at2178.hi - at2178.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->args_2169 = f_mk_227(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->args_2169)), rt_g_lit(", ", 2)));
}
if ((G_NV((*(P1812)rt_nil_check(F->pm_2175)).mode_) == ((rt_int)1LL))) {
F->p_2176 = f_new_sym_469(F->up, ((rt_int)2LL), (*(P1812)rt_nil_check(F->pm_2175)).name_);
(*(P117)rt_nil_check(F->p_2176)).ro_ = 1;
f_put_to_252(F->up, F->up->fields_buf_137, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P140)rt_nil_check(F->ct_2173))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P1812)rt_nil_check(F->pm_2175)).cfield_))), one_rt_gstr(59)));
F->args_2169 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->args_2169)), (*(P140)rt_nil_check(F->ct_2173))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P1812)rt_nil_check(F->pm_2175)).cfield_))));
f_copy_code_623(F->up, (*(P1812)rt_nil_check(F->pm_2175)).t_, (*(P140)rt_nil_check((*(P1812)rt_nil_check(F->pm_2175)).cfield_)), &F->x_2174);
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->", 3), (*(P140)rt_nil_check((*(P1812)rt_nil_check(F->pm_2175)).cfield_))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2174))), one_rt_gstr(59)));
} else {
F->p_2176 = f_new_sym_469(F->up, ((rt_int)1LL), (*(P1812)rt_nil_check(F->pm_2175)).name_);
(*(P117)rt_nil_check(F->p_2176)).byref_ = 1;
f_put_to_252(F->up, F->up->fields_buf_137, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P140)rt_nil_check(F->ct_2173))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check((*(P1812)rt_nil_check(F->pm_2175)).cfield_))), one_rt_gstr(59)));
F->args_2169 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->args_2169)), (*(P140)rt_nil_check(F->ct_2173))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check((*(P1812)rt_nil_check(F->pm_2175)).cfield_))));
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->", 3), (*(P140)rt_nil_check((*(P1812)rt_nil_check(F->pm_2175)).cfield_))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check((*(P1812)rt_nil_check(F->pm_2175)).cfield_))), one_rt_gstr(59)));
}
(*(P117)rt_nil_check(F->p_2176)).access_path_ = (*(P1812)rt_nil_check(F->pm_2175)).cfield_;
(*(P117)rt_nil_check(F->p_2176)).t_ = (*(P1812)rt_nil_check(F->pm_2175)).t_;
(*(P117)rt_nil_check(F->p_2176)).c_ = (*(P1812)rt_nil_check(F->pm_2175)).c_;
(*(P117)rt_nil_check(F->p_2176)).level_ = G_NV(F->up->cur_level_139);
f_define_464(F->up, F->p_2176, G_NV((*(P174)rt_nil_check(F->d_690)).line_));
F->pm_2175 = (*(P1812)rt_nil_check(F->pm_2175)).next_;
}
L_end_2177: ;
if ((G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_691)).result_)).kind_) != ((rt_int)9LL))) {
f_ctype_491(F->up, (*(P117)rt_nil_check(F->y_691)).result_, &F->ct_2173);
f_put_to_252(F->up, F->up->fields_buf_137, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P140)rt_nil_check(F->ct_2173))), rt_g_lit(" result_;", 9)));
}
if ((f_is_foreign_689(F->up, F->d_690) && (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_691)).result_)).kind_) == ((rt_int)9LL)))) {
f_decl_elements_652(F->up, (*(P174)rt_nil_check(F->d_690)).c_);
F->x_2174 = f_mk_227(F->up, rt_g_lit("", 0));
F->pm_2175 = (*(P117)rt_nil_check(F->y_691)).params_;
while ((F->pm_2175 != NULL)) {
if ((({ rt_gstr at2180 = (*(P140)rt_nil_check(F->x_2174)); at2180.hi >= at2180.lo ? at2180.hi - at2180.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->x_2174 = f_mk_227(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->x_2174)), rt_g_lit(", ", 2)));
}
if ((f_is_string_570(F->up, (*(P1812)rt_nil_check(F->pm_2175)).t_) && (G_NV((*(P1812)rt_nil_check(F->pm_2175)).mode_) == ((rt_int)1LL)))) {
F->x_2174 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->x_2174)), rt_g_lit("rt_g_g2s(F->", 12)), (*(P140)rt_nil_check((*(P1812)rt_nil_check(F->pm_2175)).cfield_))), one_rt_gstr(41)));
} else {
F->x_2174 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->x_2174)), rt_g_lit("F->", 3)), (*(P140)rt_nil_check((*(P1812)rt_nil_check(F->pm_2175)).cfield_))));
}
F->pm_2175 = (*(P1812)rt_nil_check(F->pm_2175)).next_;
}
L_end_2179: ;
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_", 5), f_lower_s_238(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->d_690)).name_)))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->x_2174))), rt_g_lit(");", 2)));
} else {
f_label_body_684(F->up, (*(P174)rt_nil_check(F->d_690)).d_, (*(P174)rt_nil_check(F->d_690)).e_);
f_guarded_704(F->up, (*(P174)rt_nil_check(F->d_690)).c_, (*(P174)rt_nil_check(F->d_690)).d_, (*(P174)rt_nil_check(F->d_690)).e_, G_NV((*(P174)rt_nil_check(F->d_690)).line_));
}
f_task_awaits_1167(F->up, (*(P174)rt_nil_check(F->d_690)).c_, &F->aw_2167);
F->up->nunits_188 = rt_sub(G_NV(F->up->nunits_188), ((rt_int)1LL));
f_close_scope_466(F->up);
F->up->cur_level_139 = rt_sub(G_NV(F->up->cur_level_139), ((rt_int)1LL));
if ((({ rt_gstr at2181 = (*(P140)rt_nil_check(F->args_2169)); at2181.hi >= at2181.lo ? at2181.hi - at2181.lo + 1 : (rt_int)0; }) == ((rt_int)0LL))) {
F->args_2169 = f_mk_227(F->up, rt_g_lit("void", 4));
}
f_ctype_491(F->up, (*(P117)rt_nil_check(F->y_691)).result_, &F->ct_2173);
F->head_2170 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->ct_2173))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_691)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->args_2169))), one_rt_gstr(41)));
f_put_to_252(F->up, F->up->out_protos_131, cat_rt_gstr((*(P140)rt_nil_check(F->head_2170)), one_rt_gstr(59)));
f_put_to_252(F->up, F->up->out_frames_129, cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P140)rt_nil_check(F->frame_2171))), rt_g_lit(" { int dummy;", 13)));
f_splice_259(F->up, F->up->out_frames_129, F->up->fields_buf_137);
f_put_to_252(F->up, F->up->out_frames_129, rt_g_lit("};", 2));
f_put_to_252(F->up, F->up->out_funcs_133, cat_rt_gstr((*(P140)rt_nil_check(F->head_2170)), rt_g_lit(" {", 2)));
f_put_to_252(F->up, F->up->out_funcs_133, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  struct ", 9), (*(P140)rt_nil_check(F->frame_2171))), rt_g_lit(" *F = rt_alloc(sizeof *F);", 26)));
if (((G_NV((*(P117)rt_nil_check(F->y_691)).kind_) == ((rt_int)4LL)) && ((*(P117)rt_nil_check(F->y_691)).access_path_ != NULL))) {
f_put_to_252(F->up, F->up->out_funcs_133, cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_691)).access_path_))));
}
f_splice_259(F->up, F->up->out_funcs_133, F->up->code_136);
if ((G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_691)).result_)).kind_) != ((rt_int)9LL))) {
f_put_to_252(F->up, F->up->out_funcs_133, rt_g_lit("  rt_raise(RT_X_INIT);", 22));
f_put_to_252(F->up, F->up->out_funcs_133, rt_g_lit("ret_:", 5));
f_put_to_252(F->up, F->up->out_funcs_133, (*(P140)rt_nil_check(F->aw_2167)));
f_put_to_252(F->up, F->up->out_funcs_133, rt_g_lit("  return F->result_;", 20));
} else {
f_put_to_252(F->up, F->up->out_funcs_133, rt_g_lit("ret_:", 5));
f_put_to_252(F->up, F->up->out_funcs_133, (*(P140)rt_nil_check(F->aw_2167)));
f_put_to_252(F->up, F->up->out_funcs_133, rt_g_lit("  return;", 9));
}
f_put_to_252(F->up, F->up->out_funcs_133, rt_g_lit("}", 1));
f_put_to_252(F->up, F->up->out_funcs_133, rt_g_lit("", 0));
F->up->code_136 = F->saved_code_2155;
F->up->fields_buf_137 = F->saved_fields_2156;
F->up->in_func_138 = G_NV(F->saved_in_2157);
F->up->func_sym_142 = F->saved_sym_2158;
F->up->exits_145 = F->saved_exits_2159;
F->up->frames_150 = G_NV(F->saved_frames_2160);
F->up->handlers_153 = F->saved_handlers_2161;
F->up->cleanups_154 = F->saved_cleanups_2162;
F->up->pure_sym_216 = F->saved_pure_2166;
F->up->pure_depth_217 = G_NV(F->saved_pdepth_2168);
F->up->body_labels_191 = F->saved_labels_2163;
F->up->handler_exits_194 = F->saved_hx_2164;
F->up->handler_depth_195 = G_NV(F->saved_hd_2165);
ret_:

  return;
}

static void f_gen_statements_694(struct f_greenc_1fr *up_, P174 stmts_693) {
  struct f_gen_statements_694fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_693 = stmts_693;
F->s_2182 = NULL;
F->s_2182 = F->stmts_693;
while ((F->s_2182 != NULL)) {
f_gen_statement_710(F->up, F->s_2182);
F->s_2182 = (*(P174)rt_nil_check(F->s_2182)).next_;
}
L_end_2183: ;
ret_:

  return;
}

static void f_pop_frames_696(struct f_greenc_1fr *up_, rt_int upto_695) {
  struct f_pop_frames_696fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->upto_695 = upto_695;
F->i_2184 = INT64_MIN;
F->i_2184 = G_NV(F->up->frames_150);
F->c_2185 = NULL;
F->c_2185 = F->up->cleanups_154;
while ((G_NV(F->i_2184) > F->upto_695)) {
f_emit_254(F->up, (*(P140)rt_nil_check((*(P151)rt_nil_check(F->c_2185)).s_)));
F->c_2185 = (*(P151)rt_nil_check(F->c_2185)).next_;
F->i_2184 = rt_sub(G_NV(F->i_2184), ((rt_int)1LL));
}
L_end_2186: ;
ret_:

  return;
}

static void f_push_cleanup_698(struct f_greenc_1fr *up_, rt_gstr s_697) {
  struct f_push_cleanup_698fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_697 = cp_rt_gstr(s_697);
F->up->cleanups_154 = ({ R152 *cell2187 = rt_alloc(sizeof(R152)); *cell2187 = cp_R152(({ R152 ag2188; ag2188.s_ = NULL; ag2188.next_ = F->up->cleanups_154; ag2188; })); (P151)cell2187; });
(*(P151)rt_nil_check(F->up->cleanups_154)).s_ = f_mk_227(F->up, F->s_697);
F->up->frames_150 = rt_add(G_NV(F->up->frames_150), ((rt_int)1LL));
ret_:

  return;
}

static void f_pop_cleanup_699(struct f_greenc_1fr *up_) {
  struct f_pop_cleanup_699fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->cleanups_154 = (*(P151)rt_nil_check(F->up->cleanups_154)).next_;
F->up->frames_150 = rt_sub(G_NV(F->up->frames_150), ((rt_int)1LL));
ret_:

  return;
}

static void f_guarded_704(struct f_greenc_1fr *up_, P174 decls_700, P174 stmts_701, P174 hs_702, rt_int line_703) {
  struct f_guarded_704fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_700 = decls_700;
F->stmts_701 = stmts_701;
F->hs_702 = hs_702;
F->line_703 = line_703;
F->saved_hx_2189 = NULL;
F->f_2190 = NULL;
F->x_2191 = NULL;
F->h_2192 = NULL;
F->n_2193 = NULL;
F->first_2194 = INT_MIN;
F->first_2194 = 1;
F->has_others_2195 = INT_MIN;
F->has_others_2195 = 0;
F->conds_2196 = NULL;
if ((F->hs_702 == NULL)) {
f_decl_elements_652(F->up, F->decls_700);
f_gen_statements_694(F->up, F->stmts_701);
goto ret_;
}
f_new_name_230(F->up, rt_g_lit("xf", 2), &F->f_2190);
f_new_name_230(F->up, rt_g_lit("x", 1), &F->x_2191);
f_push_cleanup_698(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P140)rt_nil_check(F->f_2190))), rt_g_lit(");", 2)));
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_frame ", 11), (*(P140)rt_nil_check(F->f_2190))), one_rt_gstr(59)));
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (RT_TRY(", 11), (*(P140)rt_nil_check(F->f_2190))), rt_g_lit(")) {", 4)));
f_decl_elements_652(F->up, F->decls_700);
f_gen_statements_694(F->up, F->stmts_701);
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P140)rt_nil_check(F->f_2190))), rt_g_lit(");", 2)));
f_emit_254(F->up, rt_g_lit("} else {", 8));
f_pop_cleanup_699(F->up);
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P140)rt_nil_check(F->f_2190))), rt_g_lit(");", 2)));
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("int ", 4), (*(P140)rt_nil_check(F->x_2191))), rt_g_lit(" = rt_xcur;", 11)));
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (rt_g_aborted()) rt_raise(", 29), (*(P140)rt_nil_check(F->x_2191))), rt_g_lit(");", 2)));
F->up->handlers_153 = ({ R152 *cell2197 = rt_alloc(sizeof(R152)); *cell2197 = cp_R152(({ R152 ag2198; ag2198.s_ = F->x_2191; ag2198.next_ = F->up->handlers_153; ag2198; })); (P151)cell2197; });
F->h_2192 = F->hs_702;
while ((F->h_2192 != NULL)) {
F->n_2193 = (*(P174)rt_nil_check(F->h_2192)).a_;
F->conds_2196 = f_mk_227(F->up, rt_g_lit("0", 1));
while ((F->n_2193 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_2193)).name_)), rt_g_lit("OTHERS", 6))) {
F->has_others_2195 = 1;
F->conds_2196 = f_mk_227(F->up, rt_g_lit("1", 1));
} else {
F->up->prefix_hint_214 = (*(P174)rt_nil_check(F->n_2193)).tag_;
f_exc_id_708(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_2193)).name_)), G_NV((*(P174)rt_nil_check(F->h_2192)).line_), &F->f_2190);
F->conds_2196 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->conds_2196)), rt_g_lit(" || ", 4)), (*(P140)rt_nil_check(F->x_2191))), rt_g_lit(" == ", 4)), (*(P140)rt_nil_check(F->f_2190))));
}
F->n_2193 = (*(P174)rt_nil_check(F->n_2193)).next_;
}
L_end_2200: ;
if (G_NV(F->first_2194)) {
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P140)rt_nil_check(F->conds_2196))), rt_g_lit(") {", 3)));
} else {
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P140)rt_nil_check(F->conds_2196))), rt_g_lit(") {", 3)));
}
F->first_2194 = 0;
F->saved_hx_2189 = F->up->handler_exits_194;
F->up->handler_exits_194 = F->up->exits_145;
F->up->handler_depth_195 = rt_add(G_NV(F->up->handler_depth_195), ((rt_int)1LL));
f_gen_statements_694(F->up, (*(P174)rt_nil_check(F->h_2192)).b_);
F->up->handler_depth_195 = rt_sub(G_NV(F->up->handler_depth_195), ((rt_int)1LL));
F->up->handler_exits_194 = F->saved_hx_2189;
F->h_2192 = (*(P174)rt_nil_check(F->h_2192)).next_;
}
L_end_2199: ;
if ((!G_NV(F->has_others_2195))) {
f_emit_254(F->up, rt_g_lit("} else {", 8));
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_raise(", 9), (*(P140)rt_nil_check(F->x_2191))), rt_g_lit(");", 2)));
}
f_emit_254(F->up, rt_g_lit("}", 1));
F->up->handlers_153 = (*(P151)rt_nil_check(F->up->handlers_153)).next_;
f_emit_254(F->up, rt_g_lit("}", 1));
f_emit_254(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_exc_id_708(struct f_greenc_1fr *up_, rt_gstr name_705, rt_int line_706, P140 *r_707) {
  struct f_exc_id_708fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_705 = cp_rt_gstr(name_705);
F->line_706 = line_706;
F->r_707 = r_707;
F->y_2201 = NULL;
F->y_2201 = f_lookup_423(F->up, F->name_705);
if ((F->up->prefix_hint_214 != NULL)) {
F->y_2201 = f_member_of_1048(F->up, (*(P140)rt_nil_check(F->up->prefix_hint_214)), F->name_705, F->line_706);
F->up->prefix_hint_214 = NULL;
}
if (((F->y_2201 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_2201)).kind_) != ((rt_int)6LL)))) {
f_fail_248(F->up, F->line_706, cat_rt_gstr(F->name_705, rt_g_lit(" is not an exception", 20)));
}
(*F->r_707) = (*(P117)rt_nil_check(F->y_2201)).cname_;
ret_:

  return;
}

static void f_gen_statement_710(struct f_greenc_1fr *up_, P174 s_709) {
  struct f_gen_statement_710fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_709 = s_709;
F->t_2202 = NULL;
F->vt_2203 = NULL;
F->c_2204 = NULL;
F->lv_2205 = NULL;
F->v_2206 = NULL;
F->x_2207 = NULL;
F->ro_2208 = INT_MIN;
{ rt_int sel2209 = G_NV((*(P174)rt_nil_check(F->s_709)).kind_);
if (0 || sel2209 == ((rt_int)20LL)) {
if ((((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->s_709)).a_)).kind_) == ((rt_int)8LL)) && ((*(P174)rt_nil_check((*(P174)rt_nil_check(F->s_709)).a_)).b_ != NULL)) && ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->s_709)).a_)).b_)).kind_) == ((rt_int)14LL)) || (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->s_709)).a_)).b_)).kind_) == ((rt_int)80LL))))) {
f_slice_assign_712(F->up, F->s_709);
goto ret_;
}
F->up->in_lv_path_219 = 1;
F->up->last_deref_220 = 0;
f_lvalue_761(F->up, (*(P174)rt_nil_check(F->s_709)).a_, &F->lv_2205, &F->t_2202, &F->c_2204, &F->ro_2208);
 (void)rt_range(F->ro_2208, 0, 1);
F->up->in_lv_path_219 = 0;
if (G_NV(F->ro_2208)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->s_709)).line_), rt_g_lit("assignment to a constant or an in parameter", 43));
}
f_check_pure_target_1216(F->up, (*(P174)rt_nil_check(F->s_709)).a_, G_NV((*(P174)rt_nil_check(F->s_709)).line_));
if (f_restricted_here_562(F->up, F->t_2202)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->s_709)).line_), rt_g_lit("a restricted type has no assignment (RM79 7.4)", 46));
}
if (f_is_const_access_755(F->up, (*(P174)rt_nil_check(F->s_709)).b_)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->s_709)).line_), rt_g_lit("a constant of an access type cannot be assigned to a variable (RM79 3.8)", 72));
}
F->up->vrp_ok_218 = 1;
if (((G_NV((*(P122)rt_nil_check(F->t_2202)).kind_) == ((rt_int)6LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->s_709)).b_)).kind_) == ((rt_int)12LL)))) {
F->up->agg_bounds_181 = F->lv_2205;
}
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->s_709)).b_, F->t_2202, &F->vt_2203, &F->v_2206);
F->up->agg_bounds_181 = NULL;
F->up->vrp_ok_218 = 0;
f_check_type_486(F->up, F->vt_2203, F->t_2202, G_NV((*(P174)rt_nil_check(F->s_709)).line_));
f_assign_code_619(F->up, (*(P140)rt_nil_check(F->lv_2205)), F->t_2202, (*(P140)rt_nil_check(F->v_2206)), F->c_2204, &F->x_2207);
f_emit_254(F->up, (*(P140)rt_nil_check(F->x_2207)));
} else if (0 || sel2209 == ((rt_int)21LL)) {
F->up->vrp_ok_218 = 1;
f_gen_call_714(F->up, F->s_709);
F->up->vrp_ok_218 = 0;
} else if (0 || sel2209 == ((rt_int)22LL)) {
f_gen_if_716(F->up, F->s_709);
} else if (0 || sel2209 == ((rt_int)23LL)) {
f_gen_case_718(F->up, F->s_709);
} else if (0 || sel2209 == ((rt_int)24LL)) {
f_gen_loop_730(F->up, F->s_709);
} else if (0 || sel2209 == ((rt_int)25LL)) {
f_gen_block_732(F->up, F->s_709);
} else if (0 || sel2209 == ((rt_int)26LL)) {
f_gen_exit_737(F->up, F->s_709);
} else if (0 || sel2209 == ((rt_int)27LL)) {
f_gen_return_739(F->up, F->s_709);
} else if (0 || sel2209 == ((rt_int)28LL)) {
if (((((*(P174)rt_nil_check(F->s_709)).tag_ != NULL) && f_is_task_name_1121(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_709)).tag_)))) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_709)).name_)), rt_g_lit("FAILURE", 7)))) {
f_task_failure_1169(F->up, F->s_709);
} else {
F->up->prefix_hint_214 = (*(P174)rt_nil_check(F->s_709)).tag_;
f_exc_id_708(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_709)).name_)), G_NV((*(P174)rt_nil_check(F->s_709)).line_), &F->x_2207);
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_raise(", 9), (*(P140)rt_nil_check(F->x_2207))), rt_g_lit(");", 2)));
}
} else if (0 || sel2209 == ((rt_int)29LL)) {
if ((F->up->handlers_153 == NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->s_709)).line_), rt_g_lit("raise; outside an exception handler", 35));
}
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_raise(", 9), (*(P140)rt_nil_check((*(P151)rt_nil_check(F->up->handlers_153)).s_))), rt_g_lit(");", 2)));
} else if (0 || sel2209 == ((rt_int)30LL)) {
f_condition_845(F->up, (*(P174)rt_nil_check(F->s_709)).a_, F->up->ty_bool_157, &F->vt_2203, &F->v_2206);
f_check_type_486(F->up, F->vt_2203, F->up->ty_bool_157, G_NV((*(P174)rt_nil_check(F->s_709)).line_));
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (!(", 6), (*(P140)rt_nil_check(F->v_2206))), rt_g_lit(")) rt_raise(RT_X_ASSERT);", 25)));
} else if (0 || sel2209 == ((rt_int)31LL)) {
} else if (0 || sel2209 == ((rt_int)57LL)) {
f_gen_label_687(F->up, F->s_709, 0);
} else if (0 || sel2209 == ((rt_int)58LL)) {
f_gen_label_687(F->up, F->s_709, 1);
} else {
f_task_statement_gen_1211(F->up, F->s_709);
}
}
ret_:

  return;
}

static void f_slice_assign_712(struct f_greenc_1fr *up_, P174 s_711) {
  struct f_slice_assign_712fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_711 = s_711;
F->lv_2210 = NULL;
F->v_2211 = NULL;
F->sl_2212 = NULL;
F->x_2213 = NULL;
F->t_2214 = NULL;
F->st_2215 = NULL;
F->vt_2216 = NULL;
F->c_2217 = NULL;
F->ro_2218 = INT_MIN;
F->up->in_lv_path_219 = 1;
F->up->last_deref_220 = 0;
f_lvalue_761(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->s_711)).a_)).a_, &F->lv_2210, &F->t_2214, &F->c_2217, &F->ro_2218);
 (void)rt_range(F->ro_2218, 0, 1);
F->up->in_lv_path_219 = 0;
if (G_NV(F->ro_2218)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->s_711)).line_), rt_g_lit("assignment to a constant or an in parameter", 43));
}
f_check_pure_target_1216(F->up, (*(P174)rt_nil_check(F->s_711)).a_, G_NV((*(P174)rt_nil_check(F->s_711)).line_));
F->ro_2218 = 0;
f_index_on_779(F->up, (*(P140)rt_nil_check(F->lv_2210)), F->t_2214, (*(P174)rt_nil_check(F->s_711)).a_, &F->ro_2218, 0, &F->sl_2212, &F->st_2215, &F->c_2217);
 (void)rt_range(F->ro_2218, 0, 1);
F->up->vrp_ok_218 = 1;
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->s_711)).b_, F->st_2215, &F->vt_2216, &F->v_2211);
F->up->vrp_ok_218 = 0;
f_check_type_486(F->up, F->vt_2216, F->st_2215, G_NV((*(P174)rt_nil_check(F->s_711)).line_));
f_ctype_491(F->up, F->st_2215, &F->x_2213);
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P140)rt_nil_check(F->x_2213))), rt_g_lit(" sl_ = ", 7)), (*(P140)rt_nil_check(F->sl_2212))), rt_g_lit("; as_", 5)), (*(P140)rt_nil_check(F->x_2213))), rt_g_lit("(&sl_, ", 7)), (*(P140)rt_nil_check(F->v_2211))), rt_g_lit("); }", 4)));
ret_:

  return;
}

static void f_gen_call_714(struct f_greenc_1fr *up_, P174 s_713) {
  struct f_gen_call_714fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_713 = s_713;
F->c_2219 = NULL;
F->c_2219 = (*(P174)rt_nil_check(F->s_713)).a_;
F->t_2220 = NULL;
F->v_2221 = NULL;
if (((G_NV((*(P174)rt_nil_check(F->c_2219)).kind_) == ((rt_int)5LL)) || (G_NV((*(P174)rt_nil_check(F->c_2219)).kind_) == ((rt_int)9LL)))) {
F->c_2219 = f_nn_301(F->up, ((rt_int)8LL), G_NV((*(P174)rt_nil_check(F->s_713)).line_));
(*(P174)rt_nil_check(F->c_2219)).a_ = (*(P174)rt_nil_check(F->s_713)).a_;
}
if ((G_NV((*(P174)rt_nil_check(F->c_2219)).kind_) != ((rt_int)8LL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->s_713)).line_), rt_g_lit("not a procedure call", 20));
}
F->up->post_checks_196 = NULL;
f_gcall_1008(F->up, F->c_2219, 1, &F->t_2220, &F->v_2221);
f_emit_254(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->v_2221)), one_rt_gstr(59)));
if ((F->up->post_checks_196 != NULL)) {
f_emit_254(F->up, (*(P140)rt_nil_check(F->up->post_checks_196)));
F->up->post_checks_196 = NULL;
}
ret_:

  return;
}

static void f_gen_if_716(struct f_greenc_1fr *up_, P174 s_715) {
  struct f_gen_if_716fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_715 = s_715;
F->a_2222 = NULL;
F->a_2222 = (*(P174)rt_nil_check(F->s_715)).a_;
F->first_2223 = INT_MIN;
F->first_2223 = 1;
F->t_2224 = NULL;
F->v_2225 = NULL;
while ((F->a_2222 != NULL)) {
f_condition_845(F->up, (*(P174)rt_nil_check(F->a_2222)).a_, F->up->ty_bool_157, &F->t_2224, &F->v_2225);
f_check_type_486(F->up, F->t_2224, F->up->ty_bool_157, G_NV((*(P174)rt_nil_check(F->s_715)).line_));
if (G_NV(F->first_2223)) {
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P140)rt_nil_check(F->v_2225))), rt_g_lit(") {", 3)));
} else {
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P140)rt_nil_check(F->v_2225))), rt_g_lit(") {", 3)));
}
F->first_2223 = 0;
f_gen_statements_694(F->up, (*(P174)rt_nil_check(F->a_2222)).b_);
F->a_2222 = (*(P174)rt_nil_check(F->a_2222)).next_;
}
L_end_2226: ;
if ((G_NV((*(P174)rt_nil_check(F->s_715)).flag_) == ((rt_int)1LL))) {
f_emit_254(F->up, rt_g_lit("} else {", 8));
f_gen_statements_694(F->up, (*(P174)rt_nil_check(F->s_715)).b_);
}
f_emit_254(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_gen_case_718(struct f_greenc_1fr *up_, P174 s_717) {
  struct f_gen_case_718fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_717 = s_717;
F->st_2227 = NULL;
F->vt_2228 = NULL;
F->first_2229 = INT_MIN;
F->first_2229 = 1;
F->a_2230 = NULL;
F->a_2230 = (*(P174)rt_nil_check(F->s_717)).b_;
F->lab_2231 = NULL;
F->sel_2232 = NULL;
F->tmp_2233 = NULL;
F->ct_2234 = NULL;
F->conds_2235 = NULL;
F->v_2236 = NULL;
F->lo_2237 = NULL;
F->hi_2238 = NULL;
F->clo_2240.lo = ((rt_int)1LL); F->clo_2240.hi = ((rt_int)2000LL);
F->clo_2240.lo2 = 1; F->clo_2240.hi2 = 1;
F->clo_2240.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->clo_2240));
for (rt_int i2241 = 0; i2241 < G_CNT(F->clo_2240); i2241++) F->clo_2240.p[i2241] = INT64_MIN;
F->chi_2242.lo = ((rt_int)1LL); F->chi_2242.hi = ((rt_int)2000LL);
F->chi_2242.lo2 = 1; F->chi_2242.hi2 = 1;
F->chi_2242.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->chi_2242));
for (rt_int i2243 = 0; i2243 < G_CNT(F->chi_2242); i2243++) F->chi_2242.p[i2243] = INT64_MIN;
F->nc_2244 = INT64_MIN;
F->nc_2244 = ((rt_int)0LL);
F->vlo_2245 = INT64_MIN;
F->vhi_2246 = INT64_MIN;
F->total_2247 = INT64_MIN;
F->ok_2248 = INT_MIN;
F->ok2_2249 = INT_MIN;
F->y_2250 = NULL;
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->s_717)).a_, NULL, &F->st_2227, &F->sel_2232);
if ((!f_is_discrete_452(F->up, F->st_2227))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->s_717)).line_), rt_g_lit("the expression of a case statement is of a discrete type (RM79 5.5)", 67));
}
f_new_name_230(F->up, rt_g_lit("sel", 3), &F->tmp_2233);
f_ctype_491(F->up, F->st_2227, &F->ct_2234);
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P140)rt_nil_check(F->ct_2234))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2233))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->sel_2232))), one_rt_gstr(59)));
while ((F->a_2230 != NULL)) {
F->lab_2231 = (*(P174)rt_nil_check(F->a_2230)).a_;
F->conds_2235 = f_mk_227(F->up, rt_g_lit("0", 1));
while ((F->lab_2231 != NULL)) {
F->y_2250 = NULL;
if ((((*(P174)rt_nil_check(F->lab_2231)).b_ == NULL) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2231)).a_)).kind_) == ((rt_int)5LL)))) {
F->y_2250 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2231)).a_)).name_)));
if (((F->y_2250 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_2250)).kind_) != ((rt_int)5LL)))) {
F->y_2250 = NULL;
}
}
if ((F->y_2250 != NULL)) {
f_check_type_486(F->up, (*(P117)rt_nil_check(F->y_2250)).t_, F->st_2227, G_NV((*(P174)rt_nil_check(F->s_717)).line_));
if ((!f_static_bounds_478(F->up, (*(P117)rt_nil_check(F->y_2250)).c_))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->s_717)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("a choice is static: ", 20), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2231)).a_)).name_))), rt_g_lit(" has no static range (RM79 5.5)", 31)));
}
F->vlo_2245 = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_2250)).c_)).mlo_);
F->vhi_2246 = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_2250)).c_)).mhi_);
F->conds_2235 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->conds_2235)), rt_g_lit(" || (", 5)), (*(P140)rt_nil_check(F->tmp_2233))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_2250)).c_)).lo_))), rt_g_lit(" && ", 4)), (*(P140)rt_nil_check(F->tmp_2233))), rt_g_lit(" <= ", 4)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_2250)).c_)).hi_))), one_rt_gstr(41)));
} else if (((*(P174)rt_nil_check(F->lab_2231)).b_ == NULL)) {
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->lab_2231)).a_, F->st_2227, &F->vt_2228, &F->v_2236);
f_check_type_486(F->up, F->vt_2228, F->st_2227, G_NV((*(P174)rt_nil_check(F->s_717)).line_));
f_static_choice_986(F->up, (*(P174)rt_nil_check(F->lab_2231)).a_, &F->vlo_2245, &F->ok_2248);
 (void)rt_range(F->ok_2248, 0, 1);
if ((!G_NV(F->ok_2248))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->s_717)).line_), rt_g_lit("a choice of a case statement is static (RM79 5.5)", 49));
}
F->vhi_2246 = G_NV(F->vlo_2245);
F->conds_2235 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->conds_2235)), rt_g_lit(" || ", 4)), (*(P140)rt_nil_check(F->tmp_2233))), rt_g_lit(" == ", 4)), (*(P140)rt_nil_check(F->v_2236))));
} else {
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->lab_2231)).a_, F->st_2227, &F->vt_2228, &F->lo_2237);
f_check_type_486(F->up, F->vt_2228, F->st_2227, G_NV((*(P174)rt_nil_check(F->s_717)).line_));
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->lab_2231)).b_, F->st_2227, &F->vt_2228, &F->hi_2238);
f_check_type_486(F->up, F->vt_2228, F->st_2227, G_NV((*(P174)rt_nil_check(F->s_717)).line_));
f_static_choice_986(F->up, (*(P174)rt_nil_check(F->lab_2231)).a_, &F->vlo_2245, &F->ok_2248);
 (void)rt_range(F->ok_2248, 0, 1);
f_static_choice_986(F->up, (*(P174)rt_nil_check(F->lab_2231)).b_, &F->vhi_2246, &F->ok2_2249);
 (void)rt_range(F->ok2_2249, 0, 1);
if ((!(G_NV(F->ok_2248) && G_NV(F->ok2_2249)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->s_717)).line_), rt_g_lit("a choice of a case statement is static (RM79 5.5)", 49));
}
F->conds_2235 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->conds_2235)), rt_g_lit(" || (", 5)), (*(P140)rt_nil_check(F->tmp_2233))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->lo_2237))), rt_g_lit(" && ", 4)), (*(P140)rt_nil_check(F->tmp_2233))), rt_g_lit(" <= ", 4)), (*(P140)rt_nil_check(F->hi_2238))), one_rt_gstr(41)));
}
if ((G_NV(F->vlo_2245) <= G_NV(F->vhi_2246))) {
{ rt_int lo2255 = ((rt_int)1LL), hi2256 = G_NV(F->nc_2244);
for (rt_int it2257 = lo2255; it2257 <= hi2256; it2257++) {
F->k_2254 = it2257;
if (((G_NV(F->vlo_2245) <= G_NV(({ A2239 ix2258 = F->chi_2242; ix2258.p[rt_index(F->k_2254, ix2258.lo, ix2258.hi) - ix2258.lo]; }))) && (G_NV(({ A2239 ix2259 = F->clo_2240; ix2259.p[rt_index(F->k_2254, ix2259.lo, ix2259.hi) - ix2259.lo]; })) <= G_NV(F->vhi_2246)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->s_717)).line_), rt_g_lit("a value is covered by two choices of a case statement (RM79 5.5)", 64));
}
}
}
L_end_2253: ;
if ((G_NV(F->nc_2244) < ((rt_int)2000LL))) {
F->nc_2244 = rt_add(G_NV(F->nc_2244), ((rt_int)1LL));
(*({ A2239 *ix2260 = &(F->clo_2240); &ix2260->p[rt_index(G_NV(F->nc_2244), ix2260->lo, ix2260->hi) - ix2260->lo]; })) = G_NV(F->vlo_2245);
(*({ A2239 *ix2261 = &(F->chi_2242); &ix2261->p[rt_index(G_NV(F->nc_2244), ix2261->lo, ix2261->hi) - ix2261->lo]; })) = G_NV(F->vhi_2246);
}
}
F->lab_2231 = (*(P174)rt_nil_check(F->lab_2231)).next_;
}
L_end_2252: ;
if (G_NV(F->first_2229)) {
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P140)rt_nil_check(F->conds_2235))), rt_g_lit(") {", 3)));
} else {
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P140)rt_nil_check(F->conds_2235))), rt_g_lit(") {", 3)));
}
F->first_2229 = 0;
f_gen_statements_694(F->up, (*(P174)rt_nil_check(F->a_2230)).b_);
F->a_2230 = (*(P174)rt_nil_check(F->a_2230)).next_;
}
L_end_2251: ;
if ((G_NV((*(P174)rt_nil_check(F->s_717)).flag_) != ((rt_int)1LL))) {
f_selector_range_724(F->up, (*(P174)rt_nil_check(F->s_717)).a_, F->st_2227, &F->vlo_2245, &F->vhi_2246, &F->ok_2248);
 (void)rt_range(F->ok_2248, 0, 1);
if ((!G_NV(F->ok_2248))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->s_717)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("a case statement on ", 20), f_kind_name_482(F->up, F->st_2227)), rt_g_lit(" needs others: its values are not static ", 41)), rt_g_lit("(RM79 5.5)", 10)));
}
F->total_2247 = ((rt_int)0LL);
{ rt_int lo2264 = ((rt_int)1LL), hi2265 = G_NV(F->nc_2244);
for (rt_int it2266 = lo2264; it2266 <= hi2265; it2266++) {
F->k_2263 = it2266;
if (((G_NV(({ A2239 ix2267 = F->clo_2240; ix2267.p[rt_index(F->k_2263, ix2267.lo, ix2267.hi) - ix2267.lo]; })) < G_NV(F->vlo_2245)) || (G_NV(({ A2239 ix2268 = F->chi_2242; ix2268.p[rt_index(F->k_2263, ix2268.lo, ix2268.hi) - ix2268.lo]; })) > G_NV(F->vhi_2246)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->s_717)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("a choice of the case statement is outside the values of ", 56), f_kind_name_482(F->up, F->st_2227)), rt_g_lit(" (RM79 5.5)", 11)));
}
F->total_2247 = rt_add(G_NV(F->total_2247), rt_add(rt_sub(G_NV(({ A2239 ix2269 = F->chi_2242; ix2269.p[rt_index(F->k_2263, ix2269.lo, ix2269.hi) - ix2269.lo]; })), G_NV(({ A2239 ix2270 = F->clo_2240; ix2270.p[rt_index(F->k_2263, ix2270.lo, ix2270.hi) - ix2270.lo]; }))), ((rt_int)1LL)));
}
}
L_end_2262: ;
if ((G_NV(F->total_2247) != rt_add(rt_sub(G_NV(F->vhi_2246), G_NV(F->vlo_2245)), ((rt_int)1LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->s_717)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the choices of the case statement do not cover every value of ", 62), f_kind_name_482(F->up, F->st_2227)), rt_g_lit(" (RM79 5.5)", 11)));
}
}
if (G_NV(F->first_2229)) {
f_emit_254(F->up, rt_g_lit("{", 1));
} else {
f_emit_254(F->up, rt_g_lit("} else {", 8));
}
if ((G_NV((*(P174)rt_nil_check(F->s_717)).flag_) == ((rt_int)1LL))) {
f_gen_statements_694(F->up, (*(P174)rt_nil_check(F->s_717)).c_);
} else {
f_emit_254(F->up, rt_g_lit("rt_raise(RT_X_CASE);", 20));
}
f_emit_254(F->up, rt_g_lit("}", 1));
f_emit_254(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_selector_range_724(struct f_greenc_1fr *up_, P174 e_719, P122 t_720, rt_int *lo_721, rt_int *hi_722, int *ok_723) {
  struct f_selector_range_724fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_719 = e_719;
F->t_720 = t_720;
F->lo_721 = lo_721;
F->hi_722 = hi_722;
F->ok_723 = ok_723;
F->y_2271 = NULL;
(*F->ok_723) = 0;
(*F->lo_721) = ((rt_int)0LL);
(*F->hi_722) = ((rt_int)0LL);
if ((G_NV((*(P174)rt_nil_check(F->e_719)).kind_) == ((rt_int)5LL))) {
F->y_2271 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_719)).name_)));
if ((((F->y_2271 != NULL) && ((G_NV((*(P117)rt_nil_check(F->y_2271)).kind_) == ((rt_int)1LL)) || (G_NV((*(P117)rt_nil_check(F->y_2271)).kind_) == ((rt_int)2LL)))) && f_static_bounds_478(F->up, (*(P117)rt_nil_check(F->y_2271)).c_))) {
(*F->lo_721) = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_2271)).c_)).mlo_);
(*F->hi_722) = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_2271)).c_)).mhi_);
(*F->ok_723) = 1;
goto ret_;
}
}
if ((G_NV((*(P122)rt_nil_check(F->t_720)).kind_) == ((rt_int)2LL))) {
(*F->hi_722) = ((rt_int)1LL);
(*F->ok_723) = 1;
} else if (((G_NV((*(P122)rt_nil_check(F->t_720)).kind_) == ((rt_int)11LL)) && ((*(P122)rt_nil_check(F->t_720)).tcons_ == NULL))) {
(*F->hi_722) = ((rt_int)127LL);
(*F->ok_723) = 1;
} else if ((G_NV((*(P122)rt_nil_check(F->t_720)).kind_) == ((rt_int)4LL))) {
(*F->hi_722) = rt_sub(f_list_len_307(F->up, (*(P122)rt_nil_check(F->t_720)).lits_), ((rt_int)1LL));
(*F->ok_723) = 1;
} else if (f_static_bounds_478(F->up, (*(P122)rt_nil_check(F->t_720)).tcons_)) {
(*F->lo_721) = G_NV((*(P178)rt_nil_check((*(P122)rt_nil_check(F->t_720)).tcons_)).mlo_);
(*F->hi_722) = G_NV((*(P178)rt_nil_check((*(P122)rt_nil_check(F->t_720)).tcons_)).mhi_);
(*F->ok_723) = 1;
}
ret_:

  return;
}

static void f_push_exit_728(struct f_greenc_1fr *up_, P140 match_725, int is_loop_726, P140 *label_727) {
  struct f_push_exit_728fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->match_725 = match_725;
F->is_loop_726 = is_loop_726;
F->label_727 = label_727;
f_new_name_230(F->up, rt_g_lit("L_end_", 6), &(*F->label_727));
F->up->exits_145 = ({ R144 *cell2272 = rt_alloc(sizeof(R144)); *cell2272 = cp_R144(({ R144 ag2273; ag2273.match_ = F->match_725; ag2273.label_ = (*F->label_727); ag2273.depth_ = G_NV(F->up->frames_150); ag2273.is_loop_ = F->is_loop_726; ag2273.next_ = F->up->exits_145; ag2273; })); (P143)cell2272; });
ret_:

  return;
}

static void f_gen_loop_730(struct f_greenc_1fr *up_, P174 s_729) {
  struct f_gen_loop_730fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_729 = s_729;
F->t_2274 = NULL;
F->vt_2275 = NULL;
F->c_2276 = NULL;
F->label_2277 = NULL;
F->cond_2278 = NULL;
F->acc_2279 = NULL;
F->lov_2280 = NULL;
F->hiv_2281 = NULL;
F->it_2282 = NULL;
F->y_2283 = NULL;
F->r_2284 = NULL;
f_push_exit_728(F->up, (*(P174)rt_nil_check(F->s_729)).tag_, 1, &F->label_2277);
if ((G_NV((*(P174)rt_nil_check(F->s_729)).flag_) == ((rt_int)0LL))) {
f_emit_254(F->up, rt_g_lit("for (;;) {", 10));
f_gen_statements_694(F->up, (*(P174)rt_nil_check(F->s_729)).b_);
f_emit_254(F->up, rt_g_lit("}", 1));
} else if ((G_NV((*(P174)rt_nil_check(F->s_729)).flag_) == ((rt_int)1LL))) {
f_condition_845(F->up, (*(P174)rt_nil_check(F->s_729)).a_, F->up->ty_bool_157, &F->vt_2275, &F->cond_2278);
f_check_type_486(F->up, F->vt_2275, F->up->ty_bool_157, G_NV((*(P174)rt_nil_check(F->s_729)).line_));
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("while (", 7), (*(P140)rt_nil_check(F->cond_2278))), rt_g_lit(") {", 3)));
f_gen_statements_694(F->up, (*(P174)rt_nil_check(F->s_729)).b_);
f_emit_254(F->up, rt_g_lit("}", 1));
} else {
F->r_2284 = (*(P174)rt_nil_check(F->s_729)).a_;
F->c_2276 = f_new_cons_472(F->up);
if ((G_NV((*(P174)rt_nil_check(F->r_2284)).kind_) == ((rt_int)14LL))) {
f_range_bounds_800(F->up, (*(P174)rt_nil_check(F->r_2284)).a_, (*(P174)rt_nil_check(F->r_2284)).b_, NULL, G_NV((*(P174)rt_nil_check(F->s_729)).line_), &F->t_2274, &(*(P178)rt_nil_check(F->c_2276)).lo_, &(*(P178)rt_nil_check(F->c_2276)).hi_);
} else {
f_resolve_507(F->up, F->r_2284, &F->t_2274, &F->c_2276);
if (((*(P178)rt_nil_check(F->c_2276)).lo_ == NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->s_729)).line_), rt_g_lit("a FOR loop needs a discrete range", 33));
}
}
if (((((G_NV((*(P122)rt_nil_check(F->t_2274)).kind_) != ((rt_int)1LL)) && (G_NV((*(P122)rt_nil_check(F->t_2274)).kind_) != ((rt_int)4LL))) && (G_NV((*(P122)rt_nil_check(F->t_2274)).kind_) != ((rt_int)11LL))) && (G_NV((*(P122)rt_nil_check(F->t_2274)).kind_) != ((rt_int)2LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->s_729)).line_), rt_g_lit("a FOR loop needs a discrete range (RM79 5.6)", 44));
}
f_storage_638(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_729)).name_)), F->t_2274, &F->acc_2279);
f_new_name_230(F->up, rt_g_lit("lo", 2), &F->lov_2280);
f_new_name_230(F->up, rt_g_lit("hi", 2), &F->hiv_2281);
f_new_name_230(F->up, rt_g_lit("it", 2), &F->it_2282);
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_int ", 9), (*(P140)rt_nil_check(F->lov_2280))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2276)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->hiv_2281))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2276)).hi_))), one_rt_gstr(59)));
if ((G_NV((*(P174)rt_nil_check(F->s_729)).ival_) == ((rt_int)1LL))) {
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P140)rt_nil_check(F->it_2282))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->hiv_2281))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->it_2282))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->lov_2280))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->it_2282))), rt_g_lit("--) {", 5)));
} else {
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P140)rt_nil_check(F->it_2282))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->lov_2280))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->it_2282))), rt_g_lit(" <= ", 4)), (*(P140)rt_nil_check(F->hiv_2281))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->it_2282))), rt_g_lit("++) {", 5)));
}
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->acc_2279)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->it_2282))), one_rt_gstr(59)));
f_open_scope_465(F->up);
F->y_2283 = f_new_sym_469(F->up, ((rt_int)2LL), (*(P174)rt_nil_check(F->s_729)).name_);
(*(P117)rt_nil_check(F->y_2283)).t_ = F->t_2274;
(*(P117)rt_nil_check(F->y_2283)).ro_ = 1;
f_bind_641(F->up, F->y_2283, F->acc_2279);
f_define_464(F->up, F->y_2283, G_NV((*(P174)rt_nil_check(F->s_729)).line_));
f_gen_statements_694(F->up, (*(P174)rt_nil_check(F->s_729)).b_);
f_close_scope_466(F->up);
f_emit_254(F->up, rt_g_lit("}", 1));
f_emit_254(F->up, rt_g_lit("}", 1));
}
F->up->exits_145 = (*(P143)rt_nil_check(F->up->exits_145)).next_;
f_emit_254(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->label_2277)), rt_g_lit(": ;", 3)));
ret_:

  return;
}

static void f_gen_block_732(struct f_greenc_1fr *up_, P174 s_731) {
  struct f_gen_block_732fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_731 = s_731;
F->label_2285 = NULL;
F->aw_2286 = NULL;
f_push_exit_728(F->up, (*(P174)rt_nil_check(F->s_731)).tag_, 0, &F->label_2285);
f_emit_254(F->up, rt_g_lit("{", 1));
f_open_scope_465(F->up);
if (((*(P174)rt_nil_check(F->s_731)).tag_ != NULL)) {
f_push_unit_436(F->up, (*(P174)rt_nil_check(F->s_731)).tag_);
}
f_guarded_704(F->up, (*(P174)rt_nil_check(F->s_731)).a_, (*(P174)rt_nil_check(F->s_731)).b_, (*(P174)rt_nil_check(F->s_731)).c_, G_NV((*(P174)rt_nil_check(F->s_731)).line_));
f_task_awaits_1167(F->up, (*(P174)rt_nil_check(F->s_731)).a_, &F->aw_2286);
f_emit_254(F->up, (*(P140)rt_nil_check(F->aw_2286)));
if (((*(P174)rt_nil_check(F->s_731)).tag_ != NULL)) {
F->up->nunits_188 = rt_sub(G_NV(F->up->nunits_188), ((rt_int)1LL));
}
f_close_scope_466(F->up);
f_emit_254(F->up, rt_g_lit("}", 1));
F->up->exits_145 = (*(P143)rt_nil_check(F->up->exits_145)).next_;
f_emit_254(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->label_2285)), rt_g_lit(": ;", 3)));
ret_:

  return;
}

static int f_exit_matches_735(struct f_greenc_1fr *up_, P174 s_733, P143 x_734) {
  struct f_exit_matches_735fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_733 = s_733;
F->x_734 = x_734;
if (((*(P174)rt_nil_check(F->s_733)).name_ == NULL)) {
F->result_ = G_NV((*(P143)rt_nil_check(F->x_734)).is_loop_);
goto ret_;
} else if (((*(P143)rt_nil_check(F->x_734)).match_ == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P143)rt_nil_check(F->x_734)).match_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_733)).name_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_gen_exit_737(struct f_greenc_1fr *up_, P174 s_736) {
  struct f_gen_exit_737fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_736 = s_736;
F->x_2287 = NULL;
F->x_2287 = F->up->exits_145;
F->t_2288 = NULL;
F->v_2289 = NULL;
while ((F->x_2287 != NULL)) {
if (((G_NV(F->up->accept_depth_203) > ((rt_int)0LL)) && (F->x_2287 == F->up->accept_exits_149))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->s_736)).line_), rt_g_lit("an exit statement cannot leave an accept statement (RM79 5.7)", 61));
}
if (((G_NV(F->up->handler_depth_195) > ((rt_int)0LL)) && (F->x_2287 == F->up->handler_exits_194))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->s_736)).line_), rt_g_lit("an exit statement cannot leave an exception handler (RM79 5.7)", 62));
}
if (f_exit_matches_735(F->up, F->s_736, F->x_2287)) {
if ((!G_NV((*(P143)rt_nil_check(F->x_2287)).is_loop_))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->s_736)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("exit ", 5), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_736)).name_))), rt_g_lit(": an exit names a loop, not a block (RM79 5.7)", 46)));
}
if (((*(P174)rt_nil_check(F->s_736)).a_ != NULL)) {
f_condition_845(F->up, (*(P174)rt_nil_check(F->s_736)).a_, F->up->ty_bool_157, &F->t_2288, &F->v_2289);
f_check_type_486(F->up, F->t_2288, F->up->ty_bool_157, G_NV((*(P174)rt_nil_check(F->s_736)).line_));
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P140)rt_nil_check(F->v_2289))), rt_g_lit(") {", 3)));
}
f_pop_frames_696(F->up, G_NV((*(P143)rt_nil_check(F->x_2287)).depth_));
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("goto ", 5), (*(P140)rt_nil_check((*(P143)rt_nil_check(F->x_2287)).label_))), one_rt_gstr(59)));
if (((*(P174)rt_nil_check(F->s_736)).a_ != NULL)) {
f_emit_254(F->up, rt_g_lit("}", 1));
}
goto ret_;
}
F->x_2287 = (*(P143)rt_nil_check(F->x_2287)).next_;
}
L_end_2290: ;
if (((*(P174)rt_nil_check(F->s_736)).name_ == NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->s_736)).line_), rt_g_lit("exit outside a loop", 19));
}
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->s_736)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("exit ", 5), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_736)).name_))), rt_g_lit(" names no enclosing loop", 24)));
ret_:

  return;
}

static void f_gen_return_739(struct f_greenc_1fr *up_, P174 s_738) {
  struct f_gen_return_739fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_738 = s_738;
F->vt_2291 = NULL;
F->v_2292 = NULL;
F->x_2293 = NULL;
if ((!G_NV(F->up->in_func_138))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->s_738)).line_), rt_g_lit("return outside a subprogram", 27));
}
if ((G_NV(F->up->accept_depth_203) > ((rt_int)0LL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->s_738)).line_), rt_g_lit("a return statement cannot appear in an accept statement (RM79 5.3)", 66));
}
if ((G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->up->func_sym_142)).result_)).kind_) == ((rt_int)9LL))) {
if (((*(P174)rt_nil_check(F->s_738)).a_ != NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->s_738)).line_), rt_g_lit("a procedure returns no value", 28));
}
f_pop_frames_696(F->up, ((rt_int)0LL));
f_emit_254(F->up, rt_g_lit("goto ret_;", 10));
goto ret_;
}
if (((*(P174)rt_nil_check(F->s_738)).a_ == NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->s_738)).line_), rt_g_lit("return needs a value here", 25));
}
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->s_738)).a_, (*(P117)rt_nil_check(F->up->func_sym_142)).result_, &F->vt_2291, &F->v_2292);
f_check_type_486(F->up, F->vt_2291, (*(P117)rt_nil_check(F->up->func_sym_142)).result_, G_NV((*(P174)rt_nil_check(F->s_738)).line_));
if (((f_is_numeric_450(F->up, F->vt_2291) || f_is_discrete_452(F->up, F->vt_2291)) && f_bounded_474(F->up, (*(P117)rt_nil_check(F->up->func_sym_142)).c_))) {
f_assign_code_619(F->up, rt_g_lit("F->result_", 10), F->vt_2291, (*(P140)rt_nil_check(F->v_2292)), (*(P117)rt_nil_check(F->up->func_sym_142)).c_, &F->x_2293);
f_emit_254(F->up, (*(P140)rt_nil_check(F->x_2293)));
} else {
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->result_ = ", 13), (*(P140)rt_nil_check(F->v_2292))), one_rt_gstr(59)));
}
f_pop_frames_696(F->up, ((rt_int)0LL));
f_emit_254(F->up, rt_g_lit("goto ret_;", 10));
ret_:

  return;
}

static void f_access_of_742(struct f_greenc_1fr *up_, P117 y_740, P140 *r_741) {
  struct f_access_of_742fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_740 = y_740;
F->r_741 = r_741;
F->p_2294 = NULL;
if ((G_NV((*(P117)rt_nil_check(F->y_740)).level_) <= ((rt_int)0LL))) {
(*F->r_741) = (*(P117)rt_nil_check(F->y_740)).access_path_;
goto ret_;
}
F->p_2294 = f_mk_227(F->up, rt_g_lit("F", 1));
{ rt_int lo2297 = ((rt_int)1LL), hi2298 = rt_sub(G_NV(F->up->cur_level_139), G_NV((*(P117)rt_nil_check(F->y_740)).level_));
for (rt_int it2299 = lo2297; it2299 <= hi2298; it2299++) {
F->i_2296 = it2299;
F->p_2294 = f_mk_227(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->p_2294)), rt_g_lit("->up", 4)));
}
}
L_end_2295: ;
if (G_NV((*(P117)rt_nil_check(F->y_740)).byref_)) {
(*F->r_741) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*", 2), (*(P140)rt_nil_check(F->p_2294))), rt_g_lit("->", 2)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_740)).access_path_))), one_rt_gstr(41)));
} else {
(*F->r_741) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->p_2294)), rt_g_lit("->", 2)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_740)).access_path_))));
}
ret_:

  return;
}

static void f_link_to_745(struct f_greenc_1fr *up_, rt_int l_743, P140 *r_744) {
  struct f_link_to_745fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_743 = l_743;
F->r_744 = r_744;
(*F->r_744) = f_mk_227(F->up, rt_g_lit("F", 1));
{ rt_int lo2302 = ((rt_int)1LL), hi2303 = rt_sub(G_NV(F->up->cur_level_139), F->l_743);
for (rt_int it2304 = lo2302; it2304 <= hi2303; it2304++) {
F->i_2301 = it2304;
(*F->r_744) = f_mk_227(F->up, cat_rt_gstr((*(P140)rt_nil_check((*F->r_744))), rt_g_lit("->up", 4)));
}
}
L_end_2300: ;
ret_:

  return;
}

static rt_gstr f_c_ident_747(struct f_greenc_1fr *up_, rt_gstr s_746) {
  struct f_c_ident_747fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_746 = cp_rt_gstr(s_746);
if (eq_rt_gstr(F->s_746, rt_g_lit("+", 1))) {
F->result_ = rt_g_lit("op_plus", 7);
goto ret_;
} else if (eq_rt_gstr(F->s_746, rt_g_lit("-", 1))) {
F->result_ = rt_g_lit("op_minus", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_746, rt_g_lit("*", 1))) {
F->result_ = rt_g_lit("op_times", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_746, rt_g_lit("/", 1))) {
F->result_ = rt_g_lit("op_slash", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_746, rt_g_lit("**", 2))) {
F->result_ = rt_g_lit("op_power", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_746, rt_g_lit("&", 1))) {
F->result_ = rt_g_lit("op_cat", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_746, rt_g_lit("=", 1))) {
F->result_ = rt_g_lit("op_eq", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_746, rt_g_lit("<", 1))) {
F->result_ = rt_g_lit("op_lt", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_746, rt_g_lit("<=", 2))) {
F->result_ = rt_g_lit("op_le", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_746, rt_g_lit(">", 1))) {
F->result_ = rt_g_lit("op_gt", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_746, rt_g_lit(">=", 2))) {
F->result_ = rt_g_lit("op_ge", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_746, rt_g_lit("MOD", 3))) {
F->result_ = rt_g_lit("op_mod", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_746, rt_g_lit("AND", 3))) {
F->result_ = rt_g_lit("op_and", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_746, rt_g_lit("OR", 2))) {
F->result_ = rt_g_lit("op_or", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_746, rt_g_lit("XOR", 3))) {
F->result_ = rt_g_lit("op_xor", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_746, rt_g_lit("NOT", 3))) {
F->result_ = rt_g_lit("op_not", 6);
goto ret_;
}
F->result_ = f_lower_s_238(F->up, F->s_746);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_deref_751(struct f_greenc_1fr *up_, rt_gstr base_748, P122 t_749, P140 *r_750) {
  struct f_deref_751fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_748 = cp_rt_gstr(base_748);
F->t_749 = t_749;
F->r_750 = r_750;
F->ct_2305 = NULL;
if (G_NV(F->up->in_lv_path_219)) {
F->up->last_deref_220 = 1;
}
f_ctype_491(F->up, F->t_749, &F->ct_2305);
(*F->r_750) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*(", 3), (*(P140)rt_nil_check(F->ct_2305))), rt_g_lit(")rt_nil_check(", 14)), F->base_748), rt_g_lit("))", 2)));
ret_:

  return;
}

static int f_is_object_753(struct f_greenc_1fr *up_, P174 e_752) {
  struct f_is_object_753fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_752 = e_752;
F->y_2306 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->e_752)).kind_) == ((rt_int)5LL))) {
F->y_2306 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_752)).name_)));
if ((!(F->y_2306 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((G_NV((*(P117)rt_nil_check(F->y_2306)).kind_) == ((rt_int)1LL)) || (G_NV((*(P117)rt_nil_check(F->y_2306)).kind_) == ((rt_int)2LL)));
goto ret_;
} else if ((G_NV((*(P174)rt_nil_check(F->e_752)).kind_) == ((rt_int)9LL))) {
F->result_ = f_is_object_753(F->up, (*(P174)rt_nil_check(F->e_752)).a_);
goto ret_;
} else if ((G_NV((*(P174)rt_nil_check(F->e_752)).kind_) == ((rt_int)8LL))) {
if ((((*(P174)rt_nil_check(F->e_752)).b_ != NULL) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_752)).b_)).kind_) == ((rt_int)14LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_object_753(F->up, (*(P174)rt_nil_check(F->e_752)).a_);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_const_access_755(struct f_greenc_1fr *up_, P174 e_754) {
  struct f_is_const_access_755fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_754 = e_754;
F->y_2307 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->e_754)).kind_) != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->y_2307 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_754)).name_)));
if ((F->y_2307 == NULL)) {
F->result_ = 0;
goto ret_;
} else if ((((G_NV((*(P117)rt_nil_check(F->y_2307)).kind_) != ((rt_int)2LL)) || (rt_rem(G_NV((*(P117)rt_nil_check(F->y_2307)).flags_), ((rt_int)2LL)) != ((rt_int)1LL))) || ((*(P117)rt_nil_check(F->y_2307)).t_ == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2307)).t_)).kind_) == ((rt_int)8LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_lvalue_761(struct f_greenc_1fr *up_, P174 e_756, P140 *code_out_757, P122 *t_758, P178 *c_759, int *ro_760) {
  struct f_lvalue_761fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_756 = e_756;
F->code_out_757 = code_out_757;
F->t_758 = t_758;
F->c_759 = c_759;
F->ro_760 = ro_760;
F->cp_2308 = INT_MIN;
F->ex_2309 = NULL;
F->y_2310 = NULL;
F->base_2311 = NULL;
F->bt_2312 = NULL;
F->bc_2313 = NULL;
f_expanded_823(F->up, F->e_756, &F->ex_2309);
if ((F->ex_2309 != NULL)) {
f_lvalue_761(F->up, F->ex_2309, &(*F->code_out_757), &(*F->t_758), &(*F->c_759), &(*F->ro_760));
 (void)rt_range((*F->ro_760), 0, 1);
goto ret_;
}
if (((G_NV((*(P174)rt_nil_check(F->e_756)).kind_) == ((rt_int)5LL)) || ((G_NV((*(P174)rt_nil_check(F->e_756)).kind_) == ((rt_int)9LL)) && f_is_package_1044(F->up, (*(P174)rt_nil_check(F->e_756)).a_)))) {
if ((G_NV((*(P174)rt_nil_check(F->e_756)).ival_) > ((rt_int)0LL))) {
F->y_2310 = f_lookup_at_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_756)).name_)), rt_sub(G_NV((*(P174)rt_nil_check(F->e_756)).ival_), ((rt_int)1LL)));
} else if ((G_NV((*(P174)rt_nil_check(F->e_756)).kind_) == ((rt_int)9LL))) {
F->y_2310 = f_member_of_1048(F->up, f_path_of_344(F->up, (*(P174)rt_nil_check(F->e_756)).a_), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_756)).name_)), G_NV((*(P174)rt_nil_check(F->e_756)).line_));
} else {
F->y_2310 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_756)).name_)));
}
if ((F->y_2310 == NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_756)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_756)).name_)), rt_g_lit(" is not declared", 16)));
}
if ((G_NV((*(P117)rt_nil_check(F->y_2310)).kind_) == ((rt_int)12LL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_756)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_756)).name_)), rt_g_lit(" is declared in two used modules: name it P.", 44)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_756)).name_))), rt_g_lit(" (RM79 8.4)", 11)));
}
if (((G_NV((*(P117)rt_nil_check(F->y_2310)).kind_) != ((rt_int)1LL)) && (G_NV((*(P117)rt_nil_check(F->y_2310)).kind_) != ((rt_int)2LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_756)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_756)).name_)), rt_g_lit(" is not an object", 17)));
}
f_access_of_742(F->up, F->y_2310, &(*F->code_out_757));
(*F->t_758) = (*(P117)rt_nil_check(F->y_2310)).t_;
(*F->c_759) = (*(P117)rt_nil_check(F->y_2310)).c_;
(*F->ro_760) = G_NV((*(P117)rt_nil_check(F->y_2310)).ro_);
} else if ((G_NV((*(P174)rt_nil_check(F->e_756)).kind_) == ((rt_int)15LL))) {
f_lvalue_761(F->up, (*(P174)rt_nil_check(F->e_756)).a_, &(*F->code_out_757), &(*F->t_758), &(*F->c_759), &(*F->ro_760));
 (void)rt_range((*F->ro_760), 0, 1);
} else if ((G_NV((*(P174)rt_nil_check(F->e_756)).kind_) == ((rt_int)9LL))) {
f_lvalue_761(F->up, (*(P174)rt_nil_check(F->e_756)).a_, &F->base_2311, &F->bt_2312, &F->bc_2313, &(*F->ro_760));
 (void)rt_range((*F->ro_760), 0, 1);
F->cp_2308 = ((G_NV((*(P122)rt_nil_check(F->bt_2312)).kind_) == ((rt_int)8LL)) && f_is_const_access_755(F->up, (*(P174)rt_nil_check(F->e_756)).a_));
f_select_on_770(F->up, (*(P140)rt_nil_check(F->base_2311)), F->bt_2312, F->e_756, &(*F->ro_760), 1, &(*F->code_out_757), &(*F->t_758), &(*F->c_759));
 (void)rt_range((*F->ro_760), 0, 1);
(*F->ro_760) = (G_NV((*F->ro_760)) || G_NV(F->cp_2308));
} else if ((G_NV((*(P174)rt_nil_check(F->e_756)).kind_) == ((rt_int)8LL))) {
f_lvalue_761(F->up, (*(P174)rt_nil_check(F->e_756)).a_, &F->base_2311, &F->bt_2312, &F->bc_2313, &(*F->ro_760));
 (void)rt_range((*F->ro_760), 0, 1);
F->cp_2308 = ((G_NV((*(P122)rt_nil_check(F->bt_2312)).kind_) == ((rt_int)8LL)) && f_is_const_access_755(F->up, (*(P174)rt_nil_check(F->e_756)).a_));
f_index_on_779(F->up, (*(P140)rt_nil_check(F->base_2311)), F->bt_2312, F->e_756, &(*F->ro_760), 1, &(*F->code_out_757), &(*F->t_758), &(*F->c_759));
 (void)rt_range((*F->ro_760), 0, 1);
(*F->ro_760) = (G_NV((*F->ro_760)) || G_NV(F->cp_2308));
} else {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_756)).line_), rt_g_lit("not an object", 13));
}
ret_:

  return;
}

static void f_select_on_770(struct f_greenc_1fr *up_, rt_gstr base_762, P122 bt_763, P174 e_764, int *ro_765, int lv_766, P140 *code_out_767, P122 *t_768, P178 *c_769) {
  struct f_select_on_770fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_762 = cp_rt_gstr(base_762);
F->bt_763 = bt_763;
F->e_764 = e_764;
F->ro_765 = ro_765;
F->lv_766 = lv_766;
F->code_out_767 = code_out_767;
F->t_768 = t_768;
F->c_769 = c_769;
F->f_2314 = NULL;
F->d_2315 = NULL;
F->ct_2316 = NULL;
F->tmp_2317 = NULL;
(*F->c_769) = F->up->no_cons_210;
if ((G_NV((*(P122)rt_nil_check(F->bt_763)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_607(F->up, F->bt_763);
f_deref_751(F->up, F->base_762, F->bt_763, &F->d_2315);
(*F->ro_765) = 0;
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_764)).name_)), rt_g_lit("ALL", 3))) {
(*F->code_out_767) = F->d_2315;
(*F->t_768) = (*(P122)rt_nil_check(F->bt_763)).target_;
goto ret_;
}
f_select_on_770(F->up, (*(P140)rt_nil_check(F->d_2315)), (*(P122)rt_nil_check(F->bt_763)).target_, F->e_764, &(*F->ro_765), 1, &(*F->code_out_767), &(*F->t_768), &(*F->c_769));
 (void)rt_range((*F->ro_765), 0, 1);
goto ret_;
}
if ((G_NV((*(P122)rt_nil_check(F->bt_763)).kind_) == ((rt_int)7LL))) {
if ((G_NV((*(P122)rt_nil_check(F->bt_763)).priv_) && (!f_inside_package_1050(F->up, (*(P122)rt_nil_check(F->bt_763)).decl_)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_764)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the components of private type ", 31), f_kind_name_482(F->up, F->bt_763)), rt_g_lit(" are not visible here (RM79 7.4)", 32)));
}
F->f_2314 = (*(P122)rt_nil_check(F->bt_763)).fields_;
while ((F->f_2314 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_2314)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_764)).name_)))) {
f_subst_cons_579(F->up, (*(P1830)rt_nil_check(F->f_2314)).c_, F->base_762, &(*F->c_769));
(*F->code_out_767) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(F->base_762, one_rt_gstr(46)), f_c_field_244(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_764)).name_)))));
(*F->t_768) = (*(P1830)rt_nil_check(F->f_2314)).t_;
if (G_NV((*(P1830)rt_nil_check(F->f_2314)).is_const_)) {
(*F->ro_765) = 1;
}
if (((*(P1830)rt_nil_check(F->f_2314)).cond_ != NULL)) {
f_ctype_491(F->up, F->bt_763, &F->ct_2316);
f_new_name_230(F->up, rt_g_lit("vr", 2), &F->tmp_2317);
if (F->lv_766) {
(*F->code_out_767) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*({ ", 5), (*(P140)rt_nil_check(F->ct_2316))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check(F->tmp_2317))), rt_g_lit(" = &(", 5)), F->base_762), rt_g_lit("); if (!(", 9)), f_subst_573(F->up, (*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_2314)).cond_)), cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*", 2), (*(P140)rt_nil_check(F->tmp_2317))), one_rt_gstr(41)))), rt_g_lit(")) rt_raise(RT_X_TAG); &", 24)), (*(P140)rt_nil_check(F->tmp_2317))), rt_g_lit("->", 2)), f_c_field_244(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_764)).name_)))), rt_g_lit("; }))", 5)));
} else {
(*F->code_out_767) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2316))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2317))), rt_g_lit(" = ", 3)), F->base_762), rt_g_lit("; if (!(", 8)), f_subst_573(F->up, (*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_2314)).cond_)), (*(P140)rt_nil_check(F->tmp_2317)))), rt_g_lit(")) rt_raise(RT_X_TAG); ", 23)), (*(P140)rt_nil_check(F->tmp_2317))), one_rt_gstr(46)), f_c_field_244(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_764)).name_)))), rt_g_lit("; })", 4)));
}
}
goto ret_;
}
F->f_2314 = (*(P1830)rt_nil_check(F->f_2314)).next_;
}
L_end_2318: ;
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_764)).line_), cat_rt_gstr(cat_rt_gstr(f_kind_name_482(F->up, F->bt_763), rt_g_lit(" has no component ", 18)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_764)).name_))));
}
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_764)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("cannot select ", 14), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_764)).name_))), rt_g_lit(" here", 5)));
ret_:

  return;
}

static void f_index_on_779(struct f_greenc_1fr *up_, rt_gstr base_771, P122 bt_772, P174 e_773, int *ro_774, int lv_775, P140 *code_out_776, P122 *t_777, P178 *c_778) {
  struct f_index_on_779fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_771 = cp_rt_gstr(base_771);
F->bt_772 = bt_772;
F->e_773 = e_773;
F->ro_774 = ro_774;
F->lv_775 = lv_775;
F->code_out_776 = code_out_776;
F->t_777 = t_777;
F->c_778 = c_778;
F->a_2319 = NULL;
F->a_2319 = (*(P174)rt_nil_check(F->e_773)).b_;
F->arrt_2320 = NULL;
F->arrt_2320 = F->bt_772;
F->acc_2321 = NULL;
F->acc_2321 = f_mk_227(F->up, F->base_771);
F->it_2322 = NULL;
F->i_2323 = NULL;
F->lo_2324 = NULL;
F->hi_2325 = NULL;
F->d_2326 = NULL;
F->ct_2327 = NULL;
F->tmp_2328 = NULL;
(*F->c_778) = F->up->no_cons_210;
if ((G_NV((*(P122)rt_nil_check(F->bt_772)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_607(F->up, F->bt_772);
f_deref_751(F->up, F->base_771, F->bt_772, &F->d_2326);
(*F->ro_774) = 0;
f_index_on_779(F->up, (*(P140)rt_nil_check(F->d_2326)), (*(P122)rt_nil_check(F->bt_772)).target_, F->e_773, &(*F->ro_774), F->lv_775, &(*F->code_out_776), &(*F->t_777), &(*F->c_778));
 (void)rt_range((*F->ro_774), 0, 1);
goto ret_;
}
if ((G_NV((*(P122)rt_nil_check(F->bt_772)).kind_) != ((rt_int)6LL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_773)).line_), rt_g_lit("cannot index this", 17));
}
if ((F->a_2319 == NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_773)).line_), rt_g_lit("an index is required", 20));
}
if ((((G_NV((*(P174)rt_nil_check(F->a_2319)).kind_) == ((rt_int)14LL)) || (G_NV((*(P174)rt_nil_check(F->a_2319)).kind_) == ((rt_int)80LL))) || ((G_NV((*(P174)rt_nil_check(F->a_2319)).kind_) == ((rt_int)5LL)) && f_is_type_name_784(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_2319)).name_)))))) {
if ((((*(P174)rt_nil_check(F->a_2319)).next_ != NULL) || (G_NV((*(P122)rt_nil_check(F->bt_772)).dims_) != ((rt_int)1LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_773)).line_), rt_g_lit("a slice is taken of a one-dimensional array (RM79 4.3)", 54));
}
f_discrete_bounds_521(F->up, F->a_2319, (*(P122)rt_nil_check(F->bt_772)).idx_, &F->it_2322, &F->lo_2324, &F->hi_2325);
f_check_type_486(F->up, F->it_2322, (*(P122)rt_nil_check(F->bt_772)).idx_, G_NV((*(P174)rt_nil_check(F->e_773)).line_));
f_ctype_491(F->up, F->bt_772, &F->d_2326);
f_new_name_230(F->up, rt_g_lit("sl", 2), &F->tmp_2328);
(*F->code_out_776) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->d_2326))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2328))), rt_g_lit(" = ", 3)), F->base_771), rt_g_lit("; rt_int l_ = ", 14)), (*(P140)rt_nil_check(F->lo_2324))), rt_g_lit(", h_ = ", 7)), (*(P140)rt_nil_check(F->hi_2325))), rt_g_lit("; if (l_ <= h_) { rt_index(l_, ", 31)), (*(P140)rt_nil_check(F->tmp_2328))), rt_g_lit(".lo, ", 5)), (*(P140)rt_nil_check(F->tmp_2328))), rt_g_lit(".hi); ", 6)), rt_g_lit("rt_index(h_, ", 13)), (*(P140)rt_nil_check(F->tmp_2328))), rt_g_lit(".lo, ", 5)), (*(P140)rt_nil_check(F->tmp_2328))), rt_g_lit(".hi); } ", 8)), (*(P140)rt_nil_check(F->tmp_2328))), rt_g_lit(".p += l_ - ", 11)), (*(P140)rt_nil_check(F->tmp_2328))), rt_g_lit(".lo; ", 5)), (*(P140)rt_nil_check(F->tmp_2328))), rt_g_lit(".lo = l_; ", 10)), (*(P140)rt_nil_check(F->tmp_2328))), rt_g_lit(".hi = h_; ", 10)), (*(P140)rt_nil_check(F->tmp_2328))), rt_g_lit("; })", 4)));
(*F->t_777) = F->bt_772;
(*F->ro_774) = 1;
goto ret_;
}
if ((f_list_len_307(F->up, F->a_2319) > G_NV((*(P122)rt_nil_check(F->bt_772)).dims_))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_773)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("too many indexes for ", 21), f_kind_name_482(F->up, F->bt_772)), rt_g_lit(" (RM79 4.1.1)", 13)));
}
while ((F->a_2319 != NULL)) {
f_gexpr_805(F->up, F->a_2319, (*(P122)rt_nil_check(F->arrt_2320)).idx_, &F->it_2322, &F->i_2323);
f_check_type_486(F->up, F->it_2322, (*(P122)rt_nil_check(F->arrt_2320)).idx_, G_NV((*(P174)rt_nil_check(F->e_773)).line_));
f_ctype_491(F->up, F->arrt_2320, &F->ct_2327);
f_new_name_230(F->up, rt_g_lit("ix", 2), &F->tmp_2328);
if (F->lv_775) {
F->acc_2321 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*({ ", 5), (*(P140)rt_nil_check(F->ct_2327))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check(F->tmp_2328))), rt_g_lit(" = &(", 5)), (*(P140)rt_nil_check(F->acc_2321))), rt_g_lit("); &", 4)), (*(P140)rt_nil_check(F->tmp_2328))), rt_g_lit("->p[rt_index(", 13)), (*(P140)rt_nil_check(F->i_2323))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->tmp_2328))), rt_g_lit("->lo, ", 6)), (*(P140)rt_nil_check(F->tmp_2328))), rt_g_lit("->hi) - ", 8)), (*(P140)rt_nil_check(F->tmp_2328))), rt_g_lit("->lo]; }))", 10)));
} else {
F->acc_2321 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2327))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2328))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->acc_2321))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->tmp_2328))), rt_g_lit(".p[rt_index(", 12)), (*(P140)rt_nil_check(F->i_2323))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->tmp_2328))), rt_g_lit(".lo, ", 5)), (*(P140)rt_nil_check(F->tmp_2328))), rt_g_lit(".hi) - ", 7)), (*(P140)rt_nil_check(F->tmp_2328))), rt_g_lit(".lo]; })", 8)));
}
(*F->c_778) = (*(P122)rt_nil_check(F->arrt_2320)).elemcons_;
F->arrt_2320 = (*(P122)rt_nil_check(F->arrt_2320)).elem_;
F->a_2319 = (*(P174)rt_nil_check(F->a_2319)).next_;
}
L_end_2329: ;
(*F->code_out_776) = F->acc_2321;
(*F->t_777) = F->arrt_2320;
if ((!F->lv_775)) {
(*F->ro_774) = 1;
}
ret_:

  return;
}

static int f_type_attribute_782(struct f_greenc_1fr *up_, P122 t_780, rt_gstr name_781) {
  struct f_type_attribute_782fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_780 = t_780;
F->name_781 = cp_rt_gstr(name_781);
F->y_2330 = NULL;
F->y_2330 = ({ A116 ix2331 = F->up->table_119; ix2331.p[rt_index(f_hash_416(F->up, F->name_781), ix2331.lo, ix2331.hi) - ix2331.lo]; });
F->p_2332 = NULL;
while ((F->y_2330 != NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2330)).name_)), F->name_781) && ((G_NV((*(P117)rt_nil_check(F->y_2330)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_2330)).kind_) == ((rt_int)4LL))))) {
if (f_same_443(F->up, (*(P117)rt_nil_check(F->y_2330)).result_, F->t_780)) {
F->result_ = 1;
goto ret_;
}
F->p_2332 = (*(P117)rt_nil_check(F->y_2330)).params_;
while ((F->p_2332 != NULL)) {
if (f_same_443(F->up, (*(P1812)rt_nil_check(F->p_2332)).t_, F->t_780)) {
F->result_ = 1;
goto ret_;
}
F->p_2332 = (*(P1812)rt_nil_check(F->p_2332)).next_;
}
L_end_2334: ;
}
F->y_2330 = (*(P117)rt_nil_check(F->y_2330)).chain_;
}
L_end_2333: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_type_name_784(struct f_greenc_1fr *up_, rt_gstr n_783) {
  struct f_is_type_name_784fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_783 = cp_rt_gstr(n_783);
F->y_2335 = NULL;
F->y_2335 = f_lookup_423(F->up, F->n_783);
if ((!(F->y_2335 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P117)rt_nil_check(F->y_2335)).kind_) == ((rt_int)5LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_char_lit_786(struct f_greenc_1fr *up_, P174 e_785) {
  struct f_is_char_lit_786fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_785 = e_785;
if ((!(G_NV((*(P174)rt_nil_check(F->e_785)).kind_) == ((rt_int)3LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (({ rt_gstr at2336 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_785)).name_)); at2336.hi >= at2336.lo ? at2336.hi - at2336.lo + 1 : (rt_int)0; }) == ((rt_int)1LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_enum_lit_788(struct f_greenc_1fr *up_, P174 e_787) {
  struct f_is_enum_lit_788fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_787 = e_787;
F->y_2337 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->e_787)).kind_) != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->y_2337 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_787)).name_)));
if ((!(F->y_2337 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P117)rt_nil_check(F->y_2337)).kind_) == ((rt_int)7LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_c_string_790(struct f_greenc_1fr *up_, rt_gstr s_789) {
  struct f_c_string_790fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_789 = cp_rt_gstr(s_789);
F->n_2338 = INT64_MIN;
F->n_2338 = ((rt_int)0LL);
{ rt_int lo2342 = ((rt_int)1LL), hi2343 = ({ rt_gstr at2340 = F->s_789; at2340.hi >= at2340.lo ? at2340.hi - at2340.lo + 1 : (rt_int)0; });
for (rt_int it2344 = lo2342; it2344 <= hi2343; it2344++) {
F->i_2341 = it2344;
if ((((G_NV(({ rt_gstr ix2345 = F->s_789; ix2345.p[rt_index(F->i_2341, ix2345.lo, ix2345.hi) - ix2345.lo]; })) == 34) || (G_NV(({ rt_gstr ix2346 = F->s_789; ix2346.p[rt_index(F->i_2341, ix2346.lo, ix2346.hi) - ix2346.lo]; })) == 92)) || (G_NV(({ rt_gstr ix2347 = F->s_789; ix2347.p[rt_index(F->i_2341, ix2347.lo, ix2347.hi) - ix2347.lo]; })) == 63))) {
F->n_2338 = rt_add(G_NV(F->n_2338), ((rt_int)1LL));
}
}
}
L_end_2339: ;
{
F->r_2350.lo = ((rt_int)1LL); F->r_2350.hi = rt_add(rt_add(({ rt_gstr at2349 = F->s_789; at2349.hi >= at2349.lo ? at2349.hi - at2349.lo + 1 : (rt_int)0; }), G_NV(F->n_2338)), ((rt_int)2LL));
F->r_2350.lo2 = 1; F->r_2350.hi2 = 1;
F->r_2350.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->r_2350));
memset(F->r_2350.p, 0xFF, (size_t)G_CNT(F->r_2350));
F->j_2352 = INT64_MIN;
F->j_2352 = ((rt_int)1LL);
(*({ rt_gstr *ix2353 = &(F->r_2350); &ix2353->p[rt_index(((rt_int)1LL), ix2353->lo, ix2353->hi) - ix2353->lo]; })) = 34;
{ rt_int lo2357 = ((rt_int)1LL), hi2358 = ({ rt_gstr at2355 = F->s_789; at2355.hi >= at2355.lo ? at2355.hi - at2355.lo + 1 : (rt_int)0; });
for (rt_int it2359 = lo2357; it2359 <= hi2358; it2359++) {
F->i_2356 = it2359;
F->j_2352 = rt_add(G_NV(F->j_2352), ((rt_int)1LL));
if ((((G_NV(({ rt_gstr ix2360 = F->s_789; ix2360.p[rt_index(F->i_2356, ix2360.lo, ix2360.hi) - ix2360.lo]; })) == 34) || (G_NV(({ rt_gstr ix2361 = F->s_789; ix2361.p[rt_index(F->i_2356, ix2361.lo, ix2361.hi) - ix2361.lo]; })) == 92)) || (G_NV(({ rt_gstr ix2362 = F->s_789; ix2362.p[rt_index(F->i_2356, ix2362.lo, ix2362.hi) - ix2362.lo]; })) == 63))) {
(*({ rt_gstr *ix2363 = &(F->r_2350); &ix2363->p[rt_index(G_NV(F->j_2352), ix2363->lo, ix2363->hi) - ix2363->lo]; })) = 92;
F->j_2352 = rt_add(G_NV(F->j_2352), ((rt_int)1LL));
}
(*({ rt_gstr *ix2364 = &(F->r_2350); &ix2364->p[rt_index(G_NV(F->j_2352), ix2364->lo, ix2364->hi) - ix2364->lo]; })) = G_NV(({ rt_gstr ix2365 = F->s_789; ix2365.p[rt_index(F->i_2356, ix2365.lo, ix2365.hi) - ix2365.lo]; }));
}
}
L_end_2354: ;
(*({ rt_gstr *ix2366 = &(F->r_2350); &ix2366->p[rt_index(rt_add(G_NV(F->j_2352), ((rt_int)1LL)), ix2366->lo, ix2366->hi) - ix2366->lo]; })) = 34;
F->result_ = F->r_2350;
goto ret_;

}
L_end_2348: ;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_literal_792(struct f_greenc_1fr *up_, P174 e_791) {
  struct f_is_literal_792fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_791 = e_791;
if ((((G_NV((*(P174)rt_nil_check(F->e_791)).kind_) == ((rt_int)1LL)) || (G_NV((*(P174)rt_nil_check(F->e_791)).kind_) == ((rt_int)2LL))) || f_is_char_lit_786(F->up, F->e_791))) {
F->result_ = 1;
goto ret_;
} else if (((G_NV((*(P174)rt_nil_check(F->e_791)).kind_) == ((rt_int)15LL)) || ((G_NV((*(P174)rt_nil_check(F->e_791)).kind_) == ((rt_int)6LL)) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_791)).name_)), rt_g_lit("NOT", 3)))))) {
F->result_ = f_is_literal_792(F->up, (*(P174)rt_nil_check(F->e_791)).a_);
goto ret_;
} else if (((G_NV((*(P174)rt_nil_check(F->e_791)).kind_) == ((rt_int)7LL)) && (((((eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_791)).name_)), rt_g_lit("+", 1)) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_791)).name_)), rt_g_lit("-", 1))) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_791)).name_)), rt_g_lit("*", 1))) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_791)).name_)), rt_g_lit("/", 1))) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_791)).name_)), rt_g_lit("**", 2))) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_791)).name_)), rt_g_lit("MOD", 3))))) {
F->result_ = (f_is_literal_792(F->up, (*(P174)rt_nil_check(F->e_791)).a_) && f_is_literal_792(F->up, (*(P174)rt_nil_check(F->e_791)).b_));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_range_bounds_800(struct f_greenc_1fr *up_, P174 l_793, P174 h_794, P122 want_795, rt_int line_796, P122 *t_797, P140 *lo_798, P140 *hi_799) {
  struct f_range_bounds_800fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_793 = l_793;
F->h_794 = h_794;
F->want_795 = want_795;
F->line_796 = line_796;
F->t_797 = t_797;
F->lo_798 = lo_798;
F->hi_799 = hi_799;
F->w_2367 = NULL;
F->w_2367 = F->want_795;
F->t2_2368 = NULL;
if ((((F->w_2367 == NULL) && f_is_char_lit_786(F->up, F->l_793)) && f_is_char_lit_786(F->up, F->h_794))) {
F->w_2367 = F->up->ty_char_159;
}
if ((((F->w_2367 == NULL) && f_is_literal_792(F->up, F->l_793)) && (!f_is_literal_792(F->up, F->h_794)))) {
f_gexpr_805(F->up, F->h_794, NULL, &(*F->t_797), &(*F->hi_799));
f_gexpr_805(F->up, F->l_793, (*F->t_797), &F->t2_2368, &(*F->lo_798));
f_check_type_486(F->up, F->t2_2368, (*F->t_797), F->line_796);
} else {
f_gexpr_805(F->up, F->l_793, F->w_2367, &(*F->t_797), &(*F->lo_798));
f_gexpr_805(F->up, F->h_794, (*F->t_797), &F->t2_2368, &(*F->hi_799));
f_check_type_486(F->up, F->t2_2368, (*F->t_797), F->line_796);
}
ret_:

  return;
}

static void f_gexpr_805(struct f_greenc_1fr *up_, P174 e_801, P122 want_802, P122 *t_803, P140 *r_804) {
  struct f_gexpr_805fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_801 = e_801;
F->want_802 = want_802;
F->t_803 = t_803;
F->r_804 = r_804;
F->y_2369 = NULL;
F->bt_2370 = NULL;
F->c_2371 = NULL;
F->ro_2372 = INT_MIN;
F->base_2373 = NULL;
F->a_2374 = NULL;
F->nm_2375 = NULL;
F->saved_lv_2376 = INT_MIN;
F->saved_lv_2376 = G_NV(F->up->in_lv_path_219);
F->up->in_lv_path_219 = 0;
f_gexpr_1_810(F->up, F->e_801, F->want_802, &(*F->t_803), &(*F->r_804));
F->up->in_lv_path_219 = G_NV(F->saved_lv_2376);
ret_:

  return;
}

static void f_gexpr_1_810(struct f_greenc_1fr *up_, P174 e_806, P122 want_807, P122 *t_808, P140 *r_809) {
  struct f_gexpr_1_810fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_806 = e_806;
F->want_807 = want_807;
F->t_808 = t_808;
F->r_809 = r_809;
F->y_2377 = NULL;
F->bt_2378 = NULL;
F->c_2379 = NULL;
F->ro_2380 = INT_MIN;
F->base_2381 = NULL;
F->a_2382 = NULL;
F->nm_2383 = NULL;
F->c2_2384 = NULL;
(*F->t_808) = F->up->ty_int_156;
{ rt_int sel2385 = G_NV((*(P174)rt_nil_check(F->e_806)).kind_);
if (0 || sel2385 == ((rt_int)1LL)) {
if (((F->want_807 != NULL) && (G_NV((*(P122)rt_nil_check(F->want_807)).kind_) == ((rt_int)1LL)))) {
(*F->t_808) = F->want_807;
}
(*F->r_809) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV((*(P174)rt_nil_check(F->e_806)).ival_)))), rt_g_lit("LL)", 3)));
} else if (0 || sel2385 == ((rt_int)2LL)) {
(*F->t_808) = F->up->ty_float_158;
(*F->r_809) = (*(P174)rt_nil_check(F->e_806)).name_;
if (((F->want_807 != NULL) && (G_NV((*(P122)rt_nil_check(F->want_807)).kind_) == ((rt_int)3LL)))) {
(*F->t_808) = F->want_807;
} else if ((((F->want_807 != NULL) && (G_NV((*(P122)rt_nil_check(F->want_807)).kind_) == ((rt_int)16LL))) && ((*(P122)rt_nil_check(F->want_807)).fsmall_ != NULL))) {
(*F->t_808) = F->want_807;
(*F->r_809) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix(", 9), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_806)).name_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->want_807)).fsmall_))), one_rt_gstr(41)));
}
} else if (0 || sel2385 == ((rt_int)3LL)) {
if (((f_is_char_lit_786(F->up, F->e_806) && (F->want_807 != NULL)) && ((G_NV((*(P122)rt_nil_check(F->want_807)).kind_) == ((rt_int)11LL)) || (G_NV((*(P122)rt_nil_check(F->want_807)).kind_) == ((rt_int)4LL))))) {
f_char_literal_820(F->up, F->e_806, F->want_807, &(*F->t_808), &(*F->r_809));
} else if ((((((F->want_807 != NULL) && (G_NV((*(P122)rt_nil_check(F->want_807)).kind_) == ((rt_int)6LL))) && (G_NV((*(P122)rt_nil_check(F->want_807)).dims_) == ((rt_int)1LL))) && ((G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->want_807)).elem_)).kind_) == ((rt_int)11LL)) || (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->want_807)).elem_)).kind_) == ((rt_int)4LL)))) && (!f_is_string_570(F->up, F->want_807)))) {
f_string_aggregate_815(F->up, F->e_806, F->want_807, &(*F->t_808), &(*F->r_809));
} else {
(*F->t_808) = F->up->ty_string_160;
if (((F->want_807 != NULL) && f_is_string_570(F->up, F->want_807))) {
(*F->t_808) = F->want_807;
}
(*F->r_809) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_lit(", 9), f_c_string_790(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_806)).name_)))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(({ rt_gstr at2387 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_806)).name_)); at2387.hi >= at2387.lo ? at2387.hi - at2387.lo + 1 : (rt_int)0; })))), one_rt_gstr(41)));
}
} else if (0 || sel2385 == ((rt_int)4LL)) {
(*F->t_808) = F->up->ty_nil_162;
(*F->r_809) = f_mk_227(F->up, rt_g_lit("NULL", 4));
} else if (0 || sel2385 == ((rt_int)15LL)) {
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->e_806)).a_, F->want_807, &(*F->t_808), &(*F->r_809));
} else if (0 || sel2385 == ((rt_int)5LL)) {
f_gen_name_828(F->up, F->e_806, F->want_807, &(*F->t_808), &(*F->r_809));
} else if (0 || sel2385 == ((rt_int)6LL)) {
f_gen_unop_833(F->up, F->e_806, F->want_807, &(*F->t_808), &(*F->r_809));
} else if (0 || sel2385 == ((rt_int)7LL)) {
f_gen_binop_873(F->up, F->e_806, F->want_807, &(*F->t_808), &(*F->r_809));
} else if (0 || sel2385 == ((rt_int)8LL)) {
f_expanded_823(F->up, (*(P174)rt_nil_check(F->e_806)).a_, &F->nm_2383);
if ((F->nm_2383 != NULL)) {
F->c2_2384 = f_nn_301(F->up, ((rt_int)8LL), G_NV((*(P174)rt_nil_check(F->e_806)).line_));
as_R175(&(*(P174)rt_nil_check(F->c2_2384)), (*(P174)rt_nil_check(F->e_806)));
(*(P174)rt_nil_check(F->c2_2384)).a_ = F->nm_2383;
f_gexpr_805(F->up, F->c2_2384, F->want_807, &(*F->t_808), &(*F->r_809));
goto ret_;
}
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_806)).a_)).kind_) == ((rt_int)5LL))) {
F->y_2377 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_806)).a_)).name_)));
if (((F->y_2377 == NULL) || (((G_NV((*(P117)rt_nil_check(F->y_2377)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_2377)).kind_) == ((rt_int)4LL))) || (G_NV((*(P117)rt_nil_check(F->y_2377)).kind_) == ((rt_int)10LL))))) {
F->up->call_want_215 = F->want_807;
f_gcall_1008(F->up, F->e_806, 0, &(*F->t_808), &(*F->r_809));
goto ret_;
}
if ((G_NV((*(P117)rt_nil_check(F->y_2377)).kind_) == ((rt_int)5LL))) {
f_conversion_878(F->up, F->e_806, F->y_2377, &(*F->t_808), &(*F->r_809));
goto ret_;
}
} else if (((((((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_806)).a_)).kind_) == ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_806)).a_)).a_)).kind_) == ((rt_int)8LL))) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_806)).a_)).a_)).a_)).kind_) == ((rt_int)5LL))) && f_is_task_name_1121(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_806)).a_)).a_)).a_)).name_)))) && (f_member_of_1048(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_806)).a_)).a_)).a_)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_806)).a_)).name_)), G_NV((*(P174)rt_nil_check(F->e_806)).line_)) != NULL)) && (G_NV((*(P117)rt_nil_check(f_member_of_1048(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_806)).a_)).a_)).a_)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_806)).a_)).name_)), G_NV((*(P174)rt_nil_check(F->e_806)).line_)))).kind_) == ((rt_int)3LL)))) {
F->up->call_want_215 = F->want_807;
f_gcall_1008(F->up, F->e_806, 0, &(*F->t_808), &(*F->r_809));
goto ret_;
} else if ((((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_806)).a_)).kind_) == ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_806)).a_)).a_)).kind_) == ((rt_int)5LL))) && f_is_type_name_784(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_806)).a_)).a_)).name_))))) {
F->up->call_want_215 = F->want_807;
f_gcall_1008(F->up, F->e_806, 0, &(*F->t_808), &(*F->r_809));
goto ret_;
} else if (((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_806)).a_)).kind_) == ((rt_int)9LL)) && f_is_package_1044(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_806)).a_)).a_))) {
F->y_2377 = f_member_of_1048(F->up, f_path_of_344(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_806)).a_)).a_), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_806)).a_)).name_)), G_NV((*(P174)rt_nil_check(F->e_806)).line_));
if (((F->y_2377 != NULL) && (((G_NV((*(P117)rt_nil_check(F->y_2377)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_2377)).kind_) == ((rt_int)4LL))) || (G_NV((*(P117)rt_nil_check(F->y_2377)).kind_) == ((rt_int)10LL))))) {
F->up->call_want_215 = F->want_807;
f_gcall_1008(F->up, F->e_806, 0, &(*F->t_808), &(*F->r_809));
goto ret_;
}
}
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->e_806)).a_, NULL, &F->bt_2378, &F->base_2381);
F->ro_2380 = 1;
f_index_on_779(F->up, (*(P140)rt_nil_check(F->base_2381)), F->bt_2378, F->e_806, &F->ro_2380, 0, &(*F->r_809), &(*F->t_808), &F->c_2379);
 (void)rt_range(F->ro_2380, 0, 1);
if ((f_is_numeric_450(F->up, (*F->t_808)) || f_is_discrete_452(F->up, (*F->t_808)))) {
(*F->r_809) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("G_NV(", 5), (*(P140)rt_nil_check((*F->r_809)))), one_rt_gstr(41)));
}
} else if (0 || sel2385 == ((rt_int)9LL)) {
f_expanded_823(F->up, F->e_806, &F->nm_2383);
if ((F->nm_2383 != NULL)) {
f_gen_name_828(F->up, F->nm_2383, F->want_807, &(*F->t_808), &(*F->r_809));
goto ret_;
}
if (((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_806)).a_)).kind_) == ((rt_int)5LL)) && f_is_type_name_784(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_806)).a_)).name_))))) {
F->nm_2383 = f_nn_301(F->up, ((rt_int)8LL), G_NV((*(P174)rt_nil_check(F->e_806)).line_));
(*(P174)rt_nil_check(F->nm_2383)).a_ = F->e_806;
F->up->call_want_215 = F->want_807;
f_gcall_1008(F->up, F->nm_2383, 0, &(*F->t_808), &(*F->r_809));
goto ret_;
}
if (f_is_package_1044(F->up, (*(P174)rt_nil_check(F->e_806)).a_)) {
F->nm_2383 = f_nn_301(F->up, ((rt_int)5LL), G_NV((*(P174)rt_nil_check(F->e_806)).line_));
(*(P174)rt_nil_check(F->nm_2383)).name_ = (*(P174)rt_nil_check(F->e_806)).name_;
(*(P174)rt_nil_check(F->nm_2383)).tag_ = f_mk_227(F->up, f_path_of_344(F->up, (*(P174)rt_nil_check(F->e_806)).a_));
f_gen_name_828(F->up, F->nm_2383, F->want_807, &(*F->t_808), &(*F->r_809));
goto ret_;
}
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->e_806)).a_, NULL, &F->bt_2378, &F->base_2381);
F->ro_2380 = 1;
f_select_on_770(F->up, (*(P140)rt_nil_check(F->base_2381)), F->bt_2378, F->e_806, &F->ro_2380, 0, &(*F->r_809), &(*F->t_808), &F->c_2379);
 (void)rt_range(F->ro_2380, 0, 1);
if ((f_is_numeric_450(F->up, (*F->t_808)) || f_is_discrete_452(F->up, (*F->t_808)))) {
(*F->r_809) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("G_NV(", 5), (*(P140)rt_nil_check((*F->r_809)))), one_rt_gstr(41)));
}
} else if (0 || sel2385 == ((rt_int)10LL)) {
f_gen_attr_894(F->up, F->e_806, F->want_807, &(*F->t_808), &(*F->r_809));
} else if (0 || sel2385 == ((rt_int)11LL)) {
f_allocator_946(F->up, F->e_806, F->want_807, &(*F->t_808), &(*F->r_809));
} else if (0 || sel2385 == ((rt_int)12LL)) {
f_aggregate_951(F->up, F->e_806, F->want_807, &(*F->t_808), &(*F->r_809));
} else {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_806)).line_), rt_g_lit("this expression is not handled", 30));
}
}
ret_:

  return;
}

static void f_string_aggregate_815(struct f_greenc_1fr *up_, P174 e_811, P122 want_812, P122 *t_813, P140 *r_814) {
  struct f_string_aggregate_815fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_811 = e_811;
F->want_812 = want_812;
F->t_813 = t_813;
F->r_814 = r_814;
F->ag_2388 = NULL;
F->it_2389 = NULL;
F->tail_2390 = NULL;
F->l_2391 = NULL;
F->ag_2388 = f_nn_301(F->up, ((rt_int)12LL), G_NV((*(P174)rt_nil_check(F->e_811)).line_));
{ rt_int lo2395 = ((rt_int)1LL), hi2396 = ({ rt_gstr at2393 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_811)).name_)); at2393.hi >= at2393.lo ? at2393.hi - at2393.lo + 1 : (rt_int)0; });
for (rt_int it2397 = lo2395; it2397 <= hi2396; it2397++) {
F->k_2394 = it2397;
F->l_2391 = f_nn_301(F->up, ((rt_int)3LL), G_NV((*(P174)rt_nil_check(F->e_811)).line_));
(*(P174)rt_nil_check(F->l_2391)).name_ = f_mk_227(F->up, ({ rt_gstr sl2399 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_811)).name_)); rt_int l_ = F->k_2394, h_ = F->k_2394; if (l_ <= h_) { rt_index(l_, sl2399.lo, sl2399.hi); rt_index(h_, sl2399.lo, sl2399.hi); } sl2399.p += l_ - sl2399.lo; sl2399.lo = l_; sl2399.hi = h_; sl2399; }));
F->it_2389 = f_nn_301(F->up, ((rt_int)13LL), G_NV((*(P174)rt_nil_check(F->e_811)).line_));
(*(P174)rt_nil_check(F->it_2389)).b_ = F->l_2391;
if ((F->tail_2390 == NULL)) {
(*(P174)rt_nil_check(F->ag_2388)).a_ = F->it_2389;
} else {
(*(P174)rt_nil_check(F->tail_2390)).next_ = F->it_2389;
}
F->tail_2390 = F->it_2389;
}
}
L_end_2392: ;
if (((*(P174)rt_nil_check(F->ag_2388)).a_ == NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_811)).line_), cat_rt_gstr(rt_g_lit("an empty string is not an aggregate of ", 39), f_kind_name_482(F->up, F->want_812)));
}
f_aggregate_951(F->up, F->ag_2388, F->want_812, &(*F->t_813), &(*F->r_814));
ret_:

  return;
}

static void f_char_literal_820(struct f_greenc_1fr *up_, P174 e_816, P122 want_817, P122 *t_818, P140 *r_819) {
  struct f_char_literal_820fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_816 = e_816;
F->want_817 = want_817;
F->t_818 = t_818;
F->r_819 = r_819;
F->i_2400 = INT64_MIN;
if ((G_NV((*(P122)rt_nil_check(F->want_817)).kind_) == ((rt_int)11LL))) {
(*F->t_818) = F->want_817;
(*F->r_819) = f_mk_227(F->up, rt_g_s2g(rt_str_of_int(rt_sub(((rt_int)(G_NV(({ rt_gstr ix2402 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_816)).name_)); ix2402.p[rt_index(((rt_int)1LL), ix2402.lo, ix2402.hi) - ix2402.lo]; }))) + 1), ((rt_int)1LL)))));
goto ret_;
}
F->i_2400 = f_lit_index_499(F->up, (*(P122)rt_nil_check(F->want_817)).lits_, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_816)).name_)));
if ((G_NV(F->i_2400) < ((rt_int)0LL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_816)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(34), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_816)).name_))), rt_g_lit("\" is not a literal of ", 22)), f_kind_name_482(F->up, F->want_817)));
}
(*F->t_818) = F->want_817;
(*F->r_819) = f_mk_227(F->up, rt_g_s2g(rt_str_of_int(G_NV(F->i_2400))));
ret_:

  return;
}

static void f_expanded_823(struct f_greenc_1fr *up_, P174 e_821, P174 *r_822) {
  struct f_expanded_823fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_821 = e_821;
F->r_822 = r_822;
F->y_2403 = NULL;
F->d_2404 = INT64_MIN;
(*F->r_822) = NULL;
if (((G_NV((*(P174)rt_nil_check(F->e_821)).kind_) != ((rt_int)9LL)) || (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_821)).a_)).kind_) != ((rt_int)5LL)))) {
goto ret_;
}
F->d_2404 = f_enclosing_depth_434(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_821)).a_)).name_)));
if ((G_NV(F->d_2404) < ((rt_int)0LL))) {
goto ret_;
}
F->y_2403 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_821)).a_)).name_)));
if (((F->y_2403 != NULL) && ((((G_NV((*(P117)rt_nil_check(F->y_2403)).kind_) == ((rt_int)1LL)) || (G_NV((*(P117)rt_nil_check(F->y_2403)).kind_) == ((rt_int)2LL))) || (G_NV((*(P117)rt_nil_check(F->y_2403)).kind_) == ((rt_int)8LL))) || (G_NV((*(P117)rt_nil_check(F->y_2403)).kind_) == ((rt_int)9LL))))) {
goto ret_;
}
if ((f_lookup_at_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_821)).name_)), G_NV(F->d_2404)) == NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_821)).line_), cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_821)).name_)), rt_g_lit(" is not declared in ", 20)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_821)).a_)).name_))));
}
(*F->r_822) = f_nn_301(F->up, ((rt_int)5LL), G_NV((*(P174)rt_nil_check(F->e_821)).line_));
(*(P174)rt_nil_check((*F->r_822))).name_ = (*(P174)rt_nil_check(F->e_821)).name_;
(*(P174)rt_nil_check((*F->r_822))).ival_ = rt_add(G_NV(F->d_2404), ((rt_int)1LL));
ret_:

  return;
}

static void f_gen_name_828(struct f_greenc_1fr *up_, P174 e_824, P122 want_825, P122 *t_826, P140 *r_827) {
  struct f_gen_name_828fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_824 = e_824;
F->want_825 = want_825;
F->t_826 = t_826;
F->r_827 = r_827;
F->y_2405 = NULL;
F->y_2405 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_824)).name_)));
F->z_2406 = NULL;
F->call_2407 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->e_824)).ival_) > ((rt_int)0LL))) {
F->y_2405 = f_lookup_at_432(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_824)).name_)), rt_sub(G_NV((*(P174)rt_nil_check(F->e_824)).ival_), ((rt_int)1LL)));
}
if (((*(P174)rt_nil_check(F->e_824)).tag_ != NULL)) {
F->y_2405 = f_member_of_1048(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_824)).tag_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_824)).name_)), G_NV((*(P174)rt_nil_check(F->e_824)).line_));
}
if ((F->y_2405 == NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_824)).name_)), rt_g_lit("PUT", 3)) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_824)).name_)), rt_g_lit("GET", 3)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_824)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_824)).name_)), rt_g_lit(" needs an item", 14)));
}
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_824)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_824)).name_)), rt_g_lit(" is not declared", 16)));
}
if ((G_NV((*(P117)rt_nil_check(F->y_2405)).kind_) == ((rt_int)12LL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_824)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_824)).name_)), rt_g_lit(" is declared in two used modules: name it P.", 44)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_824)).name_))), rt_g_lit(" (RM79 8.4)", 11)));
}
if (((G_NV((*(P117)rt_nil_check(F->y_2405)).kind_) == ((rt_int)2LL)) && G_NV((*(P117)rt_nil_check(F->y_2405)).hasmv_))) {
(*F->t_826) = (*(P117)rt_nil_check(F->y_2405)).t_;
(*F->r_827) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV((*(P117)rt_nil_check(F->y_2405)).mvalue_)))), rt_g_lit("LL)", 3)));
goto ret_;
}
if (((G_NV((*(P117)rt_nil_check(F->y_2405)).kind_) == ((rt_int)2LL)) && (G_NV((*(P117)rt_nil_check(F->y_2405)).flags_) == rt_add(((rt_int)1LL), ((rt_int)2LL))))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_824)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("deferred constant ", 18), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2405)).name_))), rt_g_lit(" is used before its full declaration (RM79 7.4)", 47)));
}
if (((G_NV((*(P117)rt_nil_check(F->y_2405)).kind_) == ((rt_int)1LL)) || (G_NV((*(P117)rt_nil_check(F->y_2405)).kind_) == ((rt_int)2LL)))) {
(*F->t_826) = (*(P117)rt_nil_check(F->y_2405)).t_;
f_access_of_742(F->up, F->y_2405, &(*F->r_827));
if (((G_NV((*(P117)rt_nil_check(F->y_2405)).kind_) == ((rt_int)1LL)) && (f_is_numeric_450(F->up, (*F->t_826)) || f_is_discrete_452(F->up, (*F->t_826))))) {
(*F->r_827) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("G_NV(", 5), (*(P140)rt_nil_check((*F->r_827)))), one_rt_gstr(41)));
}
goto ret_;
}
if ((G_NV((*(P117)rt_nil_check(F->y_2405)).kind_) == ((rt_int)7LL))) {
F->z_2406 = F->y_2405;
if ((F->want_825 != NULL)) {
while ((F->z_2406 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_2406)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_824)).name_))) && (G_NV((*(P117)rt_nil_check(F->z_2406)).kind_) == ((rt_int)7LL))) && f_same_443(F->up, (*(P117)rt_nil_check(F->z_2406)).t_, F->want_825))) {
goto L_end_2408;
}
F->z_2406 = (*(P117)rt_nil_check(F->z_2406)).chain_;
}
L_end_2408: ;
if ((F->z_2406 == NULL)) {
F->z_2406 = F->y_2405;
}
} else {
F->z_2406 = (*(P117)rt_nil_check(F->y_2405)).chain_;
while ((F->z_2406 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_2406)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_824)).name_))) && (G_NV((*(P117)rt_nil_check(F->z_2406)).kind_) == ((rt_int)7LL))) && (!f_same_443(F->up, (*(P117)rt_nil_check(F->z_2406)).t_, (*(P117)rt_nil_check(F->y_2405)).t_)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_824)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the literal ", 12), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_824)).name_))), rt_g_lit(" is ambiguous: qualify it, T(", 29)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_824)).name_))), rt_g_lit(") (RM79 3.5.1, 4.6)", 19)));
}
F->z_2406 = (*(P117)rt_nil_check(F->z_2406)).chain_;
}
L_end_2409: ;
F->z_2406 = F->y_2405;
}
(*F->t_826) = (*(P117)rt_nil_check(F->z_2406)).t_;
(*F->r_827) = f_mk_227(F->up, rt_g_s2g(rt_str_of_int(G_NV((*(P117)rt_nil_check(F->z_2406)).mvalue_))));
goto ret_;
}
if ((((G_NV((*(P117)rt_nil_check(F->y_2405)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_2405)).kind_) == ((rt_int)4LL))) || (G_NV((*(P117)rt_nil_check(F->y_2405)).kind_) == ((rt_int)10LL)))) {
F->call_2407 = f_nn_301(F->up, ((rt_int)8LL), G_NV((*(P174)rt_nil_check(F->e_824)).line_));
(*(P174)rt_nil_check(F->call_2407)).a_ = F->e_824;
F->up->call_want_215 = F->want_825;
f_gcall_1008(F->up, F->call_2407, 0, &(*F->t_826), &(*F->r_827));
goto ret_;
}
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_824)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_824)).name_)), rt_g_lit(" cannot be used as a value", 26)));
ret_:

  return;
}

static void f_gen_unop_833(struct f_greenc_1fr *up_, P174 e_829, P122 want_830, P122 *t_831, P140 *r_832) {
  struct f_gen_unop_833fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_829 = e_829;
F->want_830 = want_830;
F->t_831 = t_831;
F->r_832 = r_832;
F->a_2410 = NULL;
F->x_2411 = NULL;
F->done_2412 = INT_MIN;
f_user_operator_1103(F->up, F->e_829, F->want_830, &(*F->t_831), &(*F->r_832), &F->done_2412);
 (void)rt_range(F->done_2412, 0, 1);
if (G_NV(F->done_2412)) {
goto ret_;
}
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_829)).name_)), rt_g_lit("NOT", 3))) {
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->e_829)).a_, F->want_830, &(*F->t_831), &F->a_2410);
if (((G_NV((*(P122)rt_nil_check((*F->t_831))).kind_) == ((rt_int)6LL)) && ((G_NV((*(P122)rt_nil_check((*F->t_831))).dims_) == ((rt_int)1LL)) && (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check((*F->t_831))).elem_)).kind_) == ((rt_int)2LL))))) {
f_ctype_491(F->up, (*F->t_831), &F->x_2411);
(*F->r_832) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("not_", 4), (*(P140)rt_nil_check(F->x_2411))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->a_2410))), one_rt_gstr(41)));
goto ret_;
}
if ((G_NV((*(P122)rt_nil_check((*F->t_831))).kind_) != ((rt_int)2LL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_829)).line_), rt_g_lit("operator not applies to boolean values and arrays (RM79 4.5.1)", 62));
}
(*F->r_832) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!", 2), (*(P140)rt_nil_check(F->a_2410))), one_rt_gstr(41)));
goto ret_;
}
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->e_829)).a_, F->want_830, &(*F->t_831), &F->a_2410);
if ((!f_is_numeric_450(F->up, (*F->t_831)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_829)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("unary ", 6), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_829)).name_))), rt_g_lit(" applies to numeric values (RM79 4.5.4)", 39)));
}
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_829)).name_)), rt_g_lit("+", 1))) {
(*F->r_832) = F->a_2410;
} else if (((G_NV((*(P122)rt_nil_check((*F->t_831))).kind_) == ((rt_int)3LL)) || (G_NV((*(P122)rt_nil_check((*F->t_831))).kind_) == ((rt_int)16LL)))) {
(*F->r_832) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(-", 2), (*(P140)rt_nil_check(F->a_2410))), one_rt_gstr(41)));
} else {
(*F->r_832) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_neg(", 7), (*(P140)rt_nil_check(F->a_2410))), one_rt_gstr(41)));
}
ret_:

  return;
}

static int f_short_int_835(struct f_greenc_1fr *up_, P122 t_834) {
  struct f_short_int_835fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_834 = t_834;
if ((!(G_NV((*(P122)rt_nil_check(F->t_834)).kind_) == ((rt_int)1LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (f_root_445(F->up, F->t_834) == F->up->ty_short_167);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_float_kind_837(struct f_greenc_1fr *up_, P122 t_836) {
  struct f_float_kind_837fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_836 = t_836;
if ((f_root_445(F->up, F->t_836) == F->up->ty_sfloat_169)) {
F->result_ = rt_g_lit("1", 1);
goto ret_;
}
F->result_ = rt_g_lit("0", 1);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_membership_840(struct f_greenc_1fr *up_, P174 e_838, P140 *r_839) {
  struct f_membership_840fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_838 = e_838;
F->r_839 = r_839;
F->ta_2413 = NULL;
F->tb_2414 = NULL;
F->tt_2415 = NULL;
F->a_2416 = NULL;
F->lo_2417 = NULL;
F->hi_2418 = NULL;
F->ct_2419 = NULL;
F->c_2420 = NULL;
F->d_2421 = NULL;
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_838)).b_)).kind_) == ((rt_int)14LL))) {
if (f_is_literal_792(F->up, (*(P174)rt_nil_check(F->e_838)).a_)) {
f_range_bounds_800(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_838)).b_)).a_, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_838)).b_)).b_, NULL, G_NV((*(P174)rt_nil_check(F->e_838)).line_), &F->tt_2415, &F->lo_2417, &F->hi_2418);
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->e_838)).a_, F->tt_2415, &F->ta_2413, &F->a_2416);
} else {
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->e_838)).a_, NULL, &F->ta_2413, &F->a_2416);
f_range_bounds_800(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_838)).b_)).a_, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_838)).b_)).b_, F->ta_2413, G_NV((*(P174)rt_nil_check(F->e_838)).line_), &F->tt_2415, &F->lo_2417, &F->hi_2418);
}
f_check_type_486(F->up, F->tt_2415, F->ta_2413, G_NV((*(P174)rt_nil_check(F->e_838)).line_));
if (((!f_is_numeric_450(F->up, F->ta_2413)) && (!f_is_discrete_452(F->up, F->ta_2413)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_838)).line_), rt_g_lit("a range applies to scalar values (RM79 4.5.2)", 45));
}
f_ctype_491(F->up, F->ta_2413, &F->ct_2419);
(*F->r_839) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2419))), rt_g_lit(" m_ = ", 6)), (*(P140)rt_nil_check(F->a_2416))), rt_g_lit("; m_ >= ", 8)), (*(P140)rt_nil_check(F->lo_2417))), rt_g_lit(" && m_ <= ", 10)), (*(P140)rt_nil_check(F->hi_2418))), rt_g_lit("; })", 4)));
goto ret_;
}
f_resolve_507(F->up, (*(P174)rt_nil_check(F->e_838)).b_, &F->tt_2415, &F->c_2420);
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->e_838)).a_, F->tt_2415, &F->ta_2413, &F->a_2416);
f_check_type_486(F->up, F->ta_2413, F->tt_2415, G_NV((*(P174)rt_nil_check(F->e_838)).line_));
f_ctype_491(F->up, F->ta_2413, &F->ct_2419);
if (((f_is_numeric_450(F->up, F->ta_2413) || f_is_discrete_452(F->up, F->ta_2413)) && ((*(P178)rt_nil_check(F->c_2420)).lo_ != NULL))) {
(*F->r_839) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2419))), rt_g_lit(" m_ = ", 6)), (*(P140)rt_nil_check(F->a_2416))), rt_g_lit("; m_ >= ", 8)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2420)).lo_))), rt_g_lit(" && m_ <= ", 10)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2420)).hi_))), rt_g_lit("; })", 4)));
} else if (((G_NV((*(P122)rt_nil_check(F->ta_2413)).kind_) == ((rt_int)6LL)) && ((*(P178)rt_nil_check(F->c_2420)).lo_ != NULL))) {
(*F->r_839) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2419))), rt_g_lit(" m_ = ", 6)), (*(P140)rt_nil_check(F->a_2416))), rt_g_lit("; m_.lo == ", 11)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2420)).lo_))), rt_g_lit(" && m_.hi == ", 13)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2420)).hi_))), rt_g_lit("; })", 4)));
} else if (((G_NV((*(P122)rt_nil_check(F->ta_2413)).kind_) == ((rt_int)7LL)) && f_discriminated_480(F->up, F->c_2420))) {
(*F->r_839) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2419))), rt_g_lit(" m_ = ", 6)), (*(P140)rt_nil_check(F->a_2416))), rt_g_lit("; 1", 3)));
F->d_2421 = (*(P178)rt_nil_check(F->c_2420)).dv_;
while ((F->d_2421 != NULL)) {
(*F->r_839) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->r_839))), rt_g_lit(" && m_.", 7)), f_c_field_244(F->up, (*(P140)rt_nil_check((*(P1834)rt_nil_check(F->d_2421)).name_)))), rt_g_lit(" == (", 5)), (*(P140)rt_nil_check((*(P1834)rt_nil_check(F->d_2421)).v_))), one_rt_gstr(41)));
F->d_2421 = (*(P1834)rt_nil_check(F->d_2421)).next_;
}
L_end_2422: ;
(*F->r_839) = f_mk_227(F->up, cat_rt_gstr((*(P140)rt_nil_check((*F->r_839))), rt_g_lit("; })", 4)));
} else {
(*F->r_839) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ (void)(", 10), (*(P140)rt_nil_check(F->a_2416))), rt_g_lit("); 1; })", 8)));
}
ret_:

  return;
}

static void f_condition_845(struct f_greenc_1fr *up_, P174 e_841, P122 want_842, P122 *t_843, P140 *r_844) {
  struct f_condition_845fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_841 = e_841;
F->want_842 = want_842;
F->t_843 = t_843;
F->r_844 = r_844;
F->a_2423 = NULL;
F->b_2424 = NULL;
F->tb_2425 = NULL;
if (((G_NV((*(P174)rt_nil_check(F->e_841)).kind_) == ((rt_int)7LL)) && (G_NV((*(P174)rt_nil_check(F->e_841)).ival_) == ((rt_int)1LL)))) {
f_condition_845(F->up, (*(P174)rt_nil_check(F->e_841)).a_, F->up->ty_bool_157, &(*F->t_843), &F->a_2423);
f_check_type_486(F->up, (*F->t_843), F->up->ty_bool_157, G_NV((*(P174)rt_nil_check(F->e_841)).line_));
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->e_841)).b_, F->up->ty_bool_157, &F->tb_2425, &F->b_2424);
f_check_type_486(F->up, F->tb_2425, F->up->ty_bool_157, G_NV((*(P174)rt_nil_check(F->e_841)).line_));
(*F->t_843) = F->up->ty_bool_157;
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_841)).name_)), rt_g_lit("AND", 3))) {
(*F->r_844) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2423))), rt_g_lit(" && ", 4)), (*(P140)rt_nil_check(F->b_2424))), one_rt_gstr(41)));
} else {
(*F->r_844) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2423))), rt_g_lit(" || ", 4)), (*(P140)rt_nil_check(F->b_2424))), one_rt_gstr(41)));
}
goto ret_;
}
f_gexpr_805(F->up, F->e_841, F->up->ty_bool_157, &(*F->t_843), &(*F->r_844));
ret_:

  return;
}

static void f_catenation_850(struct f_greenc_1fr *up_, P174 e_846, P122 want_847, P122 *t_848, P140 *r_849) {
  struct f_catenation_850fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_846 = e_846;
F->want_847 = want_847;
F->t_848 = t_848;
F->r_849 = r_849;
F->arrt_2426 = NULL;
F->ta_2427 = NULL;
F->tb_2428 = NULL;
F->a_2429 = NULL;
F->b_2430 = NULL;
F->ct_2431 = NULL;
if ((((F->want_847 != NULL) && (G_NV((*(P122)rt_nil_check(F->want_847)).kind_) == ((rt_int)6LL))) && (G_NV((*(P122)rt_nil_check(F->want_847)).dims_) == ((rt_int)1LL)))) {
F->arrt_2426 = F->want_847;
} else {
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->e_846)).a_, NULL, &F->ta_2427, &F->a_2429);
if (((G_NV((*(P122)rt_nil_check(F->ta_2427)).kind_) == ((rt_int)6LL)) && (G_NV((*(P122)rt_nil_check(F->ta_2427)).dims_) == ((rt_int)1LL)))) {
F->arrt_2426 = F->ta_2427;
} else {
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->e_846)).b_, NULL, &F->tb_2428, &F->b_2430);
if (((G_NV((*(P122)rt_nil_check(F->tb_2428)).kind_) == ((rt_int)6LL)) && (G_NV((*(P122)rt_nil_check(F->tb_2428)).dims_) == ((rt_int)1LL)))) {
F->arrt_2426 = F->tb_2428;
} else if (((G_NV((*(P122)rt_nil_check(F->ta_2427)).kind_) == ((rt_int)11LL)) && (G_NV((*(P122)rt_nil_check(F->tb_2428)).kind_) == ((rt_int)11LL)))) {
F->arrt_2426 = F->up->ty_string_160;
} else {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_846)).line_), rt_g_lit("& catenates one-dimensional arrays and their components (RM79 4.5.3)", 68));
}
}
}
f_ctype_491(F->up, F->arrt_2426, &F->ct_2431);
f_cat_operand_855(F->up, (*(P174)rt_nil_check(F->e_846)).a_, F->arrt_2426, G_NV((*(P174)rt_nil_check(F->e_846)).line_), &F->a_2429);
f_cat_operand_855(F->up, (*(P174)rt_nil_check(F->e_846)).b_, F->arrt_2426, G_NV((*(P174)rt_nil_check(F->e_846)).line_), &F->b_2430);
(*F->t_848) = F->arrt_2426;
(*F->r_849) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("cat_", 4), (*(P140)rt_nil_check(F->ct_2431))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->a_2429))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2430))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_cat_operand_855(struct f_greenc_1fr *up_, P174 x_851, P122 arrt_852, rt_int line_853, P140 *r_854) {
  struct f_cat_operand_855fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_851 = x_851;
F->arrt_852 = arrt_852;
F->line_853 = line_853;
F->r_854 = r_854;
F->tx_2432 = NULL;
F->ct_2433 = NULL;
if ((f_is_char_lit_786(F->up, F->x_851) && (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->arrt_852)).elem_)).kind_) == ((rt_int)11LL)))) {
f_gexpr_805(F->up, F->x_851, (*(P122)rt_nil_check(F->arrt_852)).elem_, &F->tx_2432, &(*F->r_854));
} else {
f_gexpr_805(F->up, F->x_851, F->arrt_852, &F->tx_2432, &(*F->r_854));
}
if (f_same_443(F->up, F->tx_2432, F->arrt_852)) {
goto ret_;
}
if (f_same_443(F->up, F->tx_2432, (*(P122)rt_nil_check(F->arrt_852)).elem_)) {
f_ctype_491(F->up, F->arrt_852, &F->ct_2433);
(*F->r_854) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("one_", 4), (*(P140)rt_nil_check(F->ct_2433))), one_rt_gstr(40)), (*(P140)rt_nil_check((*F->r_854)))), one_rt_gstr(41)));
goto ret_;
}
f_fail_248(F->up, F->line_853, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("type mismatch: ", 15), f_kind_name_482(F->up, F->tx_2432)), rt_g_lit(" in a catenation of ", 20)), f_kind_name_482(F->up, F->arrt_852)), rt_g_lit(" (RM79 4.5.3)", 13)));
ret_:

  return;
}

static void f_arithmetic_860(struct f_greenc_1fr *up_, P174 e_856, P122 want_857, P122 *t_858, P140 *r_859) {
  struct f_arithmetic_860fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_856 = e_856;
F->want_857 = want_857;
F->t_858 = t_858;
F->r_859 = r_859;
F->op_2434 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_856)).name_)));
F->ta_2435 = NULL;
F->tb_2436 = NULL;
F->hint_2437 = NULL;
F->a_2438 = NULL;
F->b_2439 = NULL;
if (eq_rt_gstr(F->op_2434, rt_g_lit("**", 2))) {
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->e_856)).a_, F->want_857, &F->ta_2435, &F->a_2438);
F->hint_2437 = F->up->ty_int_156;
if ((G_NV((*(P122)rt_nil_check(F->ta_2435)).kind_) == ((rt_int)1LL))) {
F->hint_2437 = F->ta_2435;
}
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->e_856)).b_, F->hint_2437, &F->tb_2436, &F->b_2439);
if ((G_NV((*(P122)rt_nil_check(F->tb_2436)).kind_) != ((rt_int)1LL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_856)).line_), rt_g_lit("the exponent of ** is an integer (RM79 4.5.6)", 45));
}
(*F->t_858) = F->ta_2435;
if ((G_NV((*(P122)rt_nil_check(F->ta_2435)).kind_) == ((rt_int)1LL))) {
(*F->r_859) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_pow(", 7), (*(P140)rt_nil_check(F->a_2438))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2439))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->ta_2435)).kind_) == ((rt_int)3LL))) {
(*F->r_859) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fpow(", 10), (*(P140)rt_nil_check(F->a_2438))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2439))), rt_g_lit(", ", 2)), f_float_kind_837(F->up, F->ta_2435)), one_rt_gstr(41)));
} else {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_856)).line_), rt_g_lit("operator ** is defined for integer and floating point values (RM79 4.5.6)", 73));
}
} else {
if ((f_is_literal_792(F->up, (*(P174)rt_nil_check(F->e_856)).a_) && (!f_is_literal_792(F->up, (*(P174)rt_nil_check(F->e_856)).b_)))) {
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->e_856)).b_, F->want_857, &F->tb_2436, &F->b_2439);
F->hint_2437 = F->tb_2436;
if (((G_NV((*(P122)rt_nil_check(F->tb_2436)).kind_) == ((rt_int)16LL)) && (eq_rt_gstr(F->op_2434, rt_g_lit("*", 1)) || eq_rt_gstr(F->op_2434, rt_g_lit("/", 1))))) {
F->hint_2437 = F->up->ty_int_156;
}
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->e_856)).a_, F->hint_2437, &F->ta_2435, &F->a_2438);
} else {
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->e_856)).a_, F->want_857, &F->ta_2435, &F->a_2438);
F->hint_2437 = F->ta_2435;
if (((((G_NV((*(P122)rt_nil_check(F->ta_2435)).kind_) == ((rt_int)16LL)) && (eq_rt_gstr(F->op_2434, rt_g_lit("*", 1)) || eq_rt_gstr(F->op_2434, rt_g_lit("/", 1)))) && f_is_literal_792(F->up, (*(P174)rt_nil_check(F->e_856)).b_)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_856)).b_)).kind_) == ((rt_int)1LL)))) {
F->hint_2437 = F->up->ty_int_156;
}
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->e_856)).b_, F->hint_2437, &F->tb_2436, &F->b_2439);
}
if (((!f_is_numeric_450(F->up, F->ta_2435)) || (!f_is_numeric_450(F->up, F->tb_2436)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_856)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2434), rt_g_lit(" needs numeric operands, not ", 29)), f_kind_name_482(F->up, F->ta_2435)), rt_g_lit(" and ", 5)), f_kind_name_482(F->up, F->tb_2436)));
}
if (((G_NV((*(P122)rt_nil_check(F->ta_2435)).kind_) == ((rt_int)16LL)) || (G_NV((*(P122)rt_nil_check(F->tb_2436)).kind_) == ((rt_int)16LL)))) {
f_fixed_operation_868(F->up, F->e_856, F->ta_2435, F->tb_2436, (*(P140)rt_nil_check(F->a_2438)), (*(P140)rt_nil_check(F->b_2439)), &(*F->t_858), &(*F->r_859));
goto ret_;
}
f_check_type_486(F->up, F->tb_2436, F->ta_2435, G_NV((*(P174)rt_nil_check(F->e_856)).line_));
(*F->t_858) = F->ta_2435;
if ((G_NV((*(P122)rt_nil_check(F->ta_2435)).kind_) == ((rt_int)3LL))) {
if (eq_rt_gstr(F->op_2434, rt_g_lit("+", 1))) {
(*F->r_859) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fadd(", 10), (*(P140)rt_nil_check(F->a_2438))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2439))), rt_g_lit(", ", 2)), f_float_kind_837(F->up, F->ta_2435)), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2434, rt_g_lit("-", 1))) {
(*F->r_859) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fsub(", 10), (*(P140)rt_nil_check(F->a_2438))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2439))), rt_g_lit(", ", 2)), f_float_kind_837(F->up, F->ta_2435)), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2434, rt_g_lit("*", 1))) {
(*F->r_859) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fmul(", 10), (*(P140)rt_nil_check(F->a_2438))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2439))), rt_g_lit(", ", 2)), f_float_kind_837(F->up, F->ta_2435)), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2434, rt_g_lit("/", 1))) {
(*F->r_859) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fdiv(", 10), (*(P140)rt_nil_check(F->a_2438))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2439))), rt_g_lit(", ", 2)), f_float_kind_837(F->up, F->ta_2435)), one_rt_gstr(41)));
} else {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_856)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2434), rt_g_lit(" is not defined for real values (RM79 4.5.5)", 44)));
}
goto ret_;
}
if (eq_rt_gstr(F->op_2434, rt_g_lit("+", 1))) {
(*F->r_859) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_add(", 7), (*(P140)rt_nil_check(F->a_2438))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2439))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2434, rt_g_lit("-", 1))) {
(*F->r_859) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_sub(", 7), (*(P140)rt_nil_check(F->a_2438))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2439))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2434, rt_g_lit("*", 1))) {
(*F->r_859) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_mul(", 7), (*(P140)rt_nil_check(F->a_2438))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2439))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2434, rt_g_lit("/", 1))) {
(*F->r_859) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_quot(", 8), (*(P140)rt_nil_check(F->a_2438))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2439))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2434, rt_g_lit("MOD", 3))) {
(*F->r_859) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_rem(", 7), (*(P140)rt_nil_check(F->a_2438))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2439))), one_rt_gstr(41)));
} else {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_856)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2434), rt_g_lit(" is not defined for integers", 28)));
}
}
if (f_short_int_835(F->up, (*F->t_858))) {
(*F->r_859) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_short(", 11), (*(P140)rt_nil_check((*F->r_859)))), one_rt_gstr(41)));
}
ret_:

  return;
}

static void f_fixed_operation_868(struct f_greenc_1fr *up_, P174 e_861, P122 ta_862, P122 tb_863, rt_gstr a_864, rt_gstr b_865, P122 *t_866, P140 *r_867) {
  struct f_fixed_operation_868fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_861 = e_861;
F->ta_862 = ta_862;
F->tb_863 = tb_863;
F->a_864 = cp_rt_gstr(a_864);
F->b_865 = cp_rt_gstr(b_865);
F->t_866 = t_866;
F->r_867 = r_867;
F->op_2440 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_861)).name_)));
if ((eq_rt_gstr(F->op_2440, rt_g_lit("+", 1)) || eq_rt_gstr(F->op_2440, rt_g_lit("-", 1)))) {
f_check_type_486(F->up, F->tb_863, F->ta_862, G_NV((*(P174)rt_nil_check(F->e_861)).line_));
(*F->t_866) = F->ta_862;
(*F->r_867) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_864), one_rt_gstr(32)), F->op_2440), one_rt_gstr(32)), F->b_865), one_rt_gstr(41)));
} else if (((eq_rt_gstr(F->op_2440, rt_g_lit("*", 1)) && (G_NV((*(P122)rt_nil_check(F->ta_862)).kind_) == ((rt_int)16LL))) && (G_NV((*(P122)rt_nil_check(F->tb_863)).kind_) == ((rt_int)16LL)))) {
(*F->t_866) = F->up->ty_ufixed_172;
(*F->r_867) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_864), rt_g_lit(" * ", 3)), F->b_865), one_rt_gstr(41)));
} else if (((eq_rt_gstr(F->op_2440, rt_g_lit("/", 1)) && (G_NV((*(P122)rt_nil_check(F->ta_862)).kind_) == ((rt_int)16LL))) && (G_NV((*(P122)rt_nil_check(F->tb_863)).kind_) == ((rt_int)16LL)))) {
(*F->t_866) = F->up->ty_ufixed_172;
(*F->r_867) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fdiv(", 10), F->a_864), rt_g_lit(", ", 2)), F->b_865), rt_g_lit(", 0)", 4)));
} else if (((eq_rt_gstr(F->op_2440, rt_g_lit("*", 1)) && (G_NV((*(P122)rt_nil_check(F->ta_862)).kind_) == ((rt_int)16LL))) && (G_NV((*(P122)rt_nil_check(F->tb_863)).kind_) == ((rt_int)1LL)))) {
(*F->t_866) = F->ta_862;
(*F->r_867) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_864), rt_g_lit(" * (double)(", 12)), F->b_865), rt_g_lit("))", 2)));
} else if (((eq_rt_gstr(F->op_2440, rt_g_lit("*", 1)) && (G_NV((*(P122)rt_nil_check(F->ta_862)).kind_) == ((rt_int)1LL))) && (G_NV((*(P122)rt_nil_check(F->tb_863)).kind_) == ((rt_int)16LL)))) {
(*F->t_866) = F->tb_863;
(*F->r_867) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((double)(", 10), F->a_864), rt_g_lit(") * ", 4)), F->b_865), one_rt_gstr(41)));
} else if (((eq_rt_gstr(F->op_2440, rt_g_lit("/", 1)) && (G_NV((*(P122)rt_nil_check(F->ta_862)).kind_) == ((rt_int)16LL))) && (G_NV((*(P122)rt_nil_check(F->tb_863)).kind_) == ((rt_int)1LL)))) {
(*F->t_866) = F->ta_862;
(*F->r_867) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix(rt_g_fdiv(", 19), F->a_864), rt_g_lit(", (double)(", 11)), F->b_865), rt_g_lit("), 0), ", 7)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->ta_862)).fsmall_))), one_rt_gstr(41)));
} else {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_861)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2440), rt_g_lit(" is not defined for these fixed point operands (RM79 4.5.5)", 59)));
}
ret_:

  return;
}

static void f_gen_binop_873(struct f_greenc_1fr *up_, P174 e_869, P122 want_870, P122 *t_871, P140 *r_872) {
  struct f_gen_binop_873fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_869 = e_869;
F->want_870 = want_870;
F->t_871 = t_871;
F->r_872 = r_872;
F->op_2441 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_869)).name_)));
F->ta_2442 = NULL;
F->tb_2443 = NULL;
F->hint_2444 = NULL;
F->ct_2445 = NULL;
F->a_2446 = NULL;
F->b_2447 = NULL;
F->x_2448 = NULL;
F->dummy_2449 = NULL;
F->done_2450 = INT_MIN;
(*F->t_871) = F->up->ty_bool_157;
f_user_operator_1103(F->up, F->e_869, F->want_870, &(*F->t_871), &(*F->r_872), &F->done_2450);
 (void)rt_range(F->done_2450, 0, 1);
if (G_NV(F->done_2450)) {
goto ret_;
}
if ((G_NV((*(P174)rt_nil_check(F->e_869)).ival_) == ((rt_int)1LL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_869)).line_), rt_g_lit("and then and or else are allowed only in conditions (RM79 5.4.1)", 64));
}
if (((eq_rt_gstr(F->op_2441, rt_g_lit("AND", 3)) || eq_rt_gstr(F->op_2441, rt_g_lit("OR", 2))) || eq_rt_gstr(F->op_2441, rt_g_lit("XOR", 3)))) {
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->e_869)).a_, F->want_870, &F->ta_2442, &F->a_2446);
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->e_869)).b_, F->ta_2442, &F->tb_2443, &F->b_2447);
f_check_type_486(F->up, F->tb_2443, F->ta_2442, G_NV((*(P174)rt_nil_check(F->e_869)).line_));
(*F->t_871) = F->ta_2442;
if (((G_NV((*(P122)rt_nil_check(F->ta_2442)).kind_) == ((rt_int)6LL)) && ((G_NV((*(P122)rt_nil_check(F->ta_2442)).dims_) == ((rt_int)1LL)) && (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->ta_2442)).elem_)).kind_) == ((rt_int)2LL))))) {
f_ctype_491(F->up, F->ta_2442, &F->x_2448);
(*F->r_872) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(f_lower_s_238(F->up, F->op_2441), one_rt_gstr(95)), (*(P140)rt_nil_check(F->x_2448))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->a_2446))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2447))), one_rt_gstr(41)));
goto ret_;
}
if ((G_NV((*(P122)rt_nil_check(F->ta_2442)).kind_) != ((rt_int)2LL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_869)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2441), rt_g_lit(" applies to boolean values and arrays (RM79 4.5.1)", 50)));
}
if (eq_rt_gstr(F->op_2441, rt_g_lit("AND", 3))) {
(*F->r_872) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2446))), rt_g_lit(" && ", 4)), (*(P140)rt_nil_check(F->b_2447))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2441, rt_g_lit("OR", 2))) {
(*F->r_872) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2446))), rt_g_lit(" || ", 4)), (*(P140)rt_nil_check(F->b_2447))), one_rt_gstr(41)));
} else {
(*F->r_872) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2446))), rt_g_lit(" != ", 4)), (*(P140)rt_nil_check(F->b_2447))), one_rt_gstr(41)));
}
goto ret_;
}
if (eq_rt_gstr(F->op_2441, rt_g_lit("IN", 2))) {
f_membership_840(F->up, F->e_869, &(*F->r_872));
goto ret_;
}
if (eq_rt_gstr(F->op_2441, rt_g_lit("&", 1))) {
f_catenation_850(F->up, F->e_869, F->want_870, &(*F->t_871), &(*F->r_872));
goto ret_;
}
if (f_is_rel_340(F->up, F->op_2441)) {
if (((((f_is_literal_792(F->up, (*(P174)rt_nil_check(F->e_869)).a_) || f_is_enum_lit_788(F->up, (*(P174)rt_nil_check(F->e_869)).a_)) || (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_869)).a_)).kind_) == ((rt_int)4LL))) || (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_869)).a_)).kind_) == ((rt_int)3LL))) || (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_869)).a_)).kind_) == ((rt_int)12LL)))) {
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->e_869)).b_, NULL, &F->hint_2444, &F->dummy_2449);
}
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->e_869)).a_, F->hint_2444, &F->ta_2442, &F->a_2446);
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->e_869)).b_, F->ta_2442, &F->tb_2443, &F->b_2447);
F->ct_2445 = F->ta_2442;
if (((G_NV((*(P122)rt_nil_check(F->ta_2442)).kind_) != ((rt_int)10LL)) && (G_NV((*(P122)rt_nil_check(F->tb_2443)).kind_) != ((rt_int)10LL)))) {
f_check_type_486(F->up, F->tb_2443, F->ta_2442, G_NV((*(P174)rt_nil_check(F->e_869)).line_));
}
if ((G_NV((*(P122)rt_nil_check(F->ta_2442)).kind_) == ((rt_int)10LL))) {
F->ct_2445 = F->tb_2443;
}
if (((eq_rt_gstr(F->op_2441, rt_g_lit("=", 1)) || eq_rt_gstr(F->op_2441, rt_g_lit("/=", 2))) && f_restricted_here_562(F->up, F->ct_2445))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_869)).line_), rt_g_lit("a restricted type has no predefined equality (RM79 7.4)", 55));
}
if (((((!eq_rt_gstr(F->op_2441, rt_g_lit("=", 1))) && (!eq_rt_gstr(F->op_2441, rt_g_lit("/=", 2)))) && (!f_is_numeric_450(F->up, F->ct_2445))) && (!f_is_discrete_452(F->up, F->ct_2445)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_869)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2441), rt_g_lit(" is defined for scalar types, not for ", 38)), f_kind_name_482(F->up, F->ct_2445)), rt_g_lit(" (RM79 4.5.2)", 13)));
}
if (f_composite_613(F->up, F->ct_2445)) {
f_eq_code_628(F->up, F->ct_2445, (*(P140)rt_nil_check(F->a_2446)), (*(P140)rt_nil_check(F->b_2447)), &F->x_2448);
if (eq_rt_gstr(F->op_2441, rt_g_lit("=", 1))) {
(*F->r_872) = F->x_2448;
} else if (eq_rt_gstr(F->op_2441, rt_g_lit("/=", 2))) {
(*F->r_872) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!", 2), (*(P140)rt_nil_check(F->x_2448))), one_rt_gstr(41)));
} else {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_869)).line_), rt_g_lit("no ordering is defined for composite values", 43));
}
goto ret_;
}
if (eq_rt_gstr(F->op_2441, rt_g_lit("=", 1))) {
(*F->r_872) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2446))), rt_g_lit(" == ", 4)), (*(P140)rt_nil_check(F->b_2447))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2441, rt_g_lit("/=", 2))) {
(*F->r_872) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2446))), rt_g_lit(" != ", 4)), (*(P140)rt_nil_check(F->b_2447))), one_rt_gstr(41)));
} else {
(*F->r_872) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2446))), one_rt_gstr(32)), F->op_2441), one_rt_gstr(32)), (*(P140)rt_nil_check(F->b_2447))), one_rt_gstr(41)));
}
goto ret_;
}
f_arithmetic_860(F->up, F->e_869, F->want_870, &(*F->t_871), &(*F->r_872));
ret_:

  return;
}

static void f_conversion_878(struct f_greenc_1fr *up_, P174 e_874, P117 y_875, P122 *t_876, P140 *r_877) {
  struct f_conversion_878fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_874 = e_874;
F->y_875 = y_875;
F->t_876 = t_876;
F->r_877 = r_877;
F->aty_2451 = NULL;
F->a_2452 = NULL;
F->ag_2453 = NULL;
F->it_2454 = NULL;
F->tail_2455 = NULL;
F->arg_2456 = NULL;
(*F->t_876) = (*(P117)rt_nil_check(F->y_875)).t_;
if (((G_NV((*(P174)rt_nil_check(F->e_874)).flag_) == ((rt_int)9LL)) || (f_list_len_307(F->up, (*(P174)rt_nil_check(F->e_874)).b_) > ((rt_int)1LL)))) {
if ((G_NV((*(P174)rt_nil_check(F->e_874)).flag_) == ((rt_int)9LL))) {
F->ag_2453 = (*(P174)rt_nil_check(F->e_874)).b_;
} else {
F->ag_2453 = f_nn_301(F->up, ((rt_int)12LL), G_NV((*(P174)rt_nil_check(F->e_874)).line_));
F->arg_2456 = (*(P174)rt_nil_check(F->e_874)).b_;
while ((F->arg_2456 != NULL)) {
F->it_2454 = f_nn_301(F->up, ((rt_int)13LL), G_NV((*(P174)rt_nil_check(F->e_874)).line_));
(*(P174)rt_nil_check(F->it_2454)).b_ = F->arg_2456;
if (((*(P174)rt_nil_check(F->arg_2456)).formal_ != NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_874)).line_), rt_g_lit("a named component of an aggregate is given with => (RM79 3.6.2)", 63));
}
if ((F->tail_2455 == NULL)) {
(*(P174)rt_nil_check(F->ag_2453)).a_ = F->it_2454;
} else {
(*(P174)rt_nil_check(F->tail_2455)).next_ = F->it_2454;
}
F->tail_2455 = F->it_2454;
F->arg_2456 = (*(P174)rt_nil_check(F->arg_2456)).next_;
}
L_end_2457: ;
}
if ((G_NV((*(P174)rt_nil_check(F->ag_2453)).kind_) != ((rt_int)12LL))) {
f_gexpr_805(F->up, F->ag_2453, (*F->t_876), &F->aty_2451, &(*F->r_877));
f_check_type_486(F->up, F->aty_2451, (*F->t_876), G_NV((*(P174)rt_nil_check(F->e_874)).line_));
} else {
f_aggregate_951(F->up, F->ag_2453, (*F->t_876), &F->aty_2451, &(*F->r_877));
}
f_constrain_882(F->up, F->y_875, (*F->t_876), &(*F->r_877));
goto ret_;
}
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->e_874)).b_, (*F->t_876), &F->aty_2451, &F->a_2452);
if ((((G_NV((*(P122)rt_nil_check((*F->t_876))).kind_) == ((rt_int)6LL)) && (G_NV((*(P122)rt_nil_check(F->aty_2451)).kind_) == ((rt_int)6LL))) && (!f_same_443(F->up, (*F->t_876), F->aty_2451)))) {
f_array_conversion_889(F->up, F->e_874, (*F->t_876), F->aty_2451, (*(P117)rt_nil_check(F->y_875)).c_, (*(P140)rt_nil_check(F->a_2452)), &(*F->r_877));
goto ret_;
}
if ((f_is_numeric_450(F->up, (*F->t_876)) && f_is_numeric_450(F->up, F->aty_2451))) {
if (((G_NV((*(P122)rt_nil_check((*F->t_876))).kind_) == ((rt_int)1LL)) && (G_NV((*(P122)rt_nil_check(F->aty_2451)).kind_) != ((rt_int)1LL)))) {
(*F->r_877) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_round(", 11), (*(P140)rt_nil_check(F->a_2452))), one_rt_gstr(41)));
} else if (((G_NV((*(P122)rt_nil_check((*F->t_876))).kind_) == ((rt_int)3LL)) && (G_NV((*(P122)rt_nil_check(F->aty_2451)).kind_) == ((rt_int)1LL)))) {
(*F->r_877) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((double)(", 10), (*(P140)rt_nil_check(F->a_2452))), rt_g_lit("))", 2)));
} else if (((G_NV((*(P122)rt_nil_check((*F->t_876))).kind_) == ((rt_int)16LL)) && ((*(P122)rt_nil_check((*F->t_876))).fsmall_ != NULL))) {
if ((G_NV((*(P122)rt_nil_check(F->aty_2451)).kind_) == ((rt_int)1LL))) {
(*F->r_877) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix((double)(", 18), (*(P140)rt_nil_check(F->a_2452))), rt_g_lit("), ", 3)), (*(P140)rt_nil_check((*(P122)rt_nil_check((*F->t_876))).fsmall_))), one_rt_gstr(41)));
} else {
(*F->r_877) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix(", 9), (*(P140)rt_nil_check(F->a_2452))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P122)rt_nil_check((*F->t_876))).fsmall_))), one_rt_gstr(41)));
}
} else {
(*F->r_877) = F->a_2452;
}
} else if (((f_same_443(F->up, F->aty_2451, (*F->t_876)) || f_derived_from_448(F->up, F->aty_2451, (*F->t_876))) || f_derived_from_448(F->up, (*F->t_876), F->aty_2451))) {
(*F->r_877) = F->a_2452;
} else {
f_check_type_486(F->up, F->aty_2451, (*F->t_876), G_NV((*(P174)rt_nil_check(F->e_874)).line_));
(*F->r_877) = F->a_2452;
}
if (((((G_NV((*(P122)rt_nil_check((*F->t_876))).kind_) == ((rt_int)1LL)) || (G_NV((*(P122)rt_nil_check((*F->t_876))).kind_) == ((rt_int)4LL))) || (G_NV((*(P122)rt_nil_check((*F->t_876))).kind_) == ((rt_int)11LL))) && f_bounded_474(F->up, (*(P117)rt_nil_check(F->y_875)).c_))) {
(*F->r_877) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P140)rt_nil_check((*F->r_877)))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_875)).c_)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_875)).c_)).hi_))), one_rt_gstr(41)));
} else if ((((G_NV((*(P122)rt_nil_check((*F->t_876))).kind_) == ((rt_int)3LL)) || (G_NV((*(P122)rt_nil_check((*F->t_876))).kind_) == ((rt_int)16LL))) && f_bounded_474(F->up, (*(P117)rt_nil_check(F->y_875)).c_))) {
(*F->r_877) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_frange(", 10), (*(P140)rt_nil_check((*F->r_877)))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_875)).c_)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_875)).c_)).hi_))), one_rt_gstr(41)));
} else if (f_short_int_835(F->up, (*F->t_876))) {
(*F->r_877) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_short(", 11), (*(P140)rt_nil_check((*F->r_877)))), one_rt_gstr(41)));
}
ret_:

  return;
}

static void f_constrain_882(struct f_greenc_1fr *up_, P117 y_879, P122 t_880, P140 *r_881) {
  struct f_constrain_882fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_879 = y_879;
F->t_880 = t_880;
F->r_881 = r_881;
F->ct_2458 = NULL;
F->tmp_2459 = NULL;
if ((((*(P117)rt_nil_check(F->y_879)).c_ == NULL) || ((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_879)).c_)).lo_ == NULL))) {
goto ret_;
}
if (((G_NV((*(P122)rt_nil_check(F->t_880)).kind_) == ((rt_int)6LL)) && (!f_bounded_hi_476(F->up, (*(P122)rt_nil_check(F->t_880)).tcons_)))) {
f_ctype_491(F->up, F->t_880, &F->ct_2458);
f_new_name_230(F->up, rt_g_lit("q", 1), &F->tmp_2459);
(*F->r_881) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2458))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2459))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check((*F->r_881)))), rt_g_lit("; rt_int l_ = ", 14)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_879)).c_)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_879)).c_)).hi_))), rt_g_lit("; if (G_CNT(", 12)), (*(P140)rt_nil_check(F->tmp_2459))), rt_g_lit(") != (h_ >= l_ \? h_ - l_ + 1 : 0)) ", 35)), rt_g_lit("rt_raise_msg(RT_X_SUBTYPE, ", 27)), f_q_245(F->up)), rt_g_lit("array length", 12)), f_q_245(F->up)), rt_g_lit("); ", 3)), (*(P140)rt_nil_check(F->tmp_2459))), rt_g_lit(".lo = l_; ", 10)), (*(P140)rt_nil_check(F->tmp_2459))), rt_g_lit(".hi = h_; ", 10)), (*(P140)rt_nil_check(F->tmp_2459))), rt_g_lit("; })", 4)));
}
ret_:

  return;
}

static void f_array_conversion_889(struct f_greenc_1fr *up_, P174 e_883, P122 t_884, P122 aty_885, P178 c_886, rt_gstr a_887, P140 *r_888) {
  struct f_array_conversion_889fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_883 = e_883;
F->t_884 = t_884;
F->aty_885 = aty_885;
F->c_886 = c_886;
F->a_887 = cp_rt_gstr(a_887);
F->r_888 = r_888;
F->x_2460 = NULL;
F->y_2461 = NULL;
F->ct_2462 = NULL;
F->act_2463 = NULL;
F->et_2464 = NULL;
F->tmp_2465 = NULL;
F->s_2466 = NULL;
F->x_2460 = F->t_884;
F->y_2461 = F->aty_885;
if ((G_NV((*(P122)rt_nil_check(F->t_884)).dims_) != G_NV((*(P122)rt_nil_check(F->aty_885)).dims_))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_883)).line_), rt_g_lit("no conversion between arrays of different dimensions (RM79 4.6)", 63));
}
{ rt_int lo2469 = ((rt_int)1LL), hi2470 = G_NV((*(P122)rt_nil_check(F->t_884)).dims_);
for (rt_int it2471 = lo2469; it2471 <= hi2470; it2471++) {
F->k_2468 = it2471;
if ((!((f_same_443(F->up, (*(P122)rt_nil_check(F->x_2460)).idx_, (*(P122)rt_nil_check(F->y_2461)).idx_) || f_derived_from_448(F->up, (*(P122)rt_nil_check(F->x_2460)).idx_, (*(P122)rt_nil_check(F->y_2461)).idx_)) || f_derived_from_448(F->up, (*(P122)rt_nil_check(F->y_2461)).idx_, (*(P122)rt_nil_check(F->x_2460)).idx_)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_883)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no conversion from ", 19), f_kind_name_482(F->up, F->aty_885)), rt_g_lit(" to ", 4)), f_kind_name_482(F->up, F->t_884)), rt_g_lit(": the index types differ (RM79 4.6)", 35)));
}
F->x_2460 = (*(P122)rt_nil_check(F->x_2460)).elem_;
F->y_2461 = (*(P122)rt_nil_check(F->y_2461)).elem_;
}
}
L_end_2467: ;
if ((!((f_same_443(F->up, F->x_2460, F->y_2461) || f_derived_from_448(F->up, F->x_2460, F->y_2461)) || f_derived_from_448(F->up, F->y_2461, F->x_2460)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_883)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no conversion from ", 19), f_kind_name_482(F->up, F->aty_885)), rt_g_lit(" to ", 4)), f_kind_name_482(F->up, F->t_884)), rt_g_lit(": the component types differ (RM79 4.6)", 39)));
}
f_ctype_491(F->up, F->t_884, &F->ct_2462);
f_ctype_491(F->up, F->aty_885, &F->act_2463);
f_elem_ctype_565(F->up, (*(P122)rt_nil_check(F->t_884)).elem_, &F->et_2464);
f_new_name_230(F->up, rt_g_lit("cv", 2), &F->tmp_2465);
(*F->r_888) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->act_2463))), rt_g_lit(" s_ = ", 6)), F->a_887), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->ct_2462))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2465))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->tmp_2465))), rt_g_lit(".lo = s_.lo; ", 13)), (*(P140)rt_nil_check(F->tmp_2465))), rt_g_lit(".hi = s_.hi; ", 13)), (*(P140)rt_nil_check(F->tmp_2465))), rt_g_lit(".lo2 = s_.lo2; ", 15)), (*(P140)rt_nil_check(F->tmp_2465))), rt_g_lit(".hi2 = s_.hi2; ", 15)), (*(P140)rt_nil_check(F->tmp_2465))), rt_g_lit(".p = (", 6)), (*(P140)rt_nil_check(F->et_2464))), rt_g_lit(" *)s_.p; ", 9)), (*(P140)rt_nil_check(F->tmp_2465))), rt_g_lit("; })", 4)));
if ((((*(P122)rt_nil_check(F->t_884)).tcons_ != NULL) && ((*(P178)rt_nil_check((*(P122)rt_nil_check(F->t_884)).tcons_)).hi_ != NULL))) {
(*F->r_888) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2462))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2465))), rt_g_lit("x = ", 4)), (*(P140)rt_nil_check((*F->r_888)))), rt_g_lit("; rt_int l_ = ", 14)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P122)rt_nil_check(F->t_884)).tcons_)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P122)rt_nil_check(F->t_884)).tcons_)).hi_))), rt_g_lit("; if (G_CNT(", 12)), (*(P140)rt_nil_check(F->tmp_2465))), rt_g_lit("x) != (h_ >= l_ \? h_ - l_ + 1 : 0)) ", 36)), rt_g_lit("rt_raise_msg(RT_X_SUBTYPE, ", 27)), f_q_245(F->up)), rt_g_lit("array length", 12)), f_q_245(F->up)), rt_g_lit("); ", 3)), (*(P140)rt_nil_check(F->tmp_2465))), rt_g_lit("x.lo = l_; ", 11)), (*(P140)rt_nil_check(F->tmp_2465))), rt_g_lit("x.hi = h_; ", 11)), (*(P140)rt_nil_check(F->tmp_2465))), rt_g_lit("x; })", 5)));
}
ret_:

  return;
}

static void f_gen_attr_894(struct f_greenc_1fr *up_, P174 e_890, P122 want_891, P122 *t_892, P140 *r_893) {
  struct f_gen_attr_894fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_890 = e_890;
F->want_891 = want_891;
F->t_892 = t_892;
F->r_893 = r_893;
F->a_2472 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_890)).name_)));
F->y_2473 = NULL;
F->tt_2474 = NULL;
F->aty_2475 = NULL;
F->v_2476 = NULL;
F->d_2477 = NULL;
F->c_2478 = NULL;
F->n_2479 = INT64_MIN;
F->ro_2480 = INT_MIN;
if ((((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_890)).a_)).kind_) == ((rt_int)8LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_890)).a_)).a_)).kind_) == ((rt_int)5LL))) && f_is_task_name_1121(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_890)).a_)).a_)).name_))))) {
f_member_attr_1187(F->up, F->e_890, &(*F->t_892), &(*F->r_893));
goto ret_;
}
if ((eq_rt_gstr(F->a_2472, rt_g_lit("ADDRESS", 7)) && f_is_object_753(F->up, (*(P174)rt_nil_check(F->e_890)).a_))) {
f_lvalue_761(F->up, (*(P174)rt_nil_check(F->e_890)).a_, &F->v_2476, &F->aty_2475, &F->c_2478, &F->ro_2480);
 (void)rt_range(F->ro_2480, 0, 1);
(*F->t_892) = F->up->ty_int_156;
(*F->r_893) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(intptr_t)&(", 21), (*(P140)rt_nil_check(F->v_2476))), rt_g_lit("))", 2)));
goto ret_;
}
if (((eq_rt_gstr(F->a_2472, rt_g_lit("COUNT", 5)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_890)).a_)).kind_) == ((rt_int)8LL))) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_890)).a_)).a_)).kind_) == ((rt_int)5LL)))) {
F->y_2473 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_890)).a_)).a_)).name_)));
if ((((F->y_2473 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_2473)).kind_) == ((rt_int)10LL))) && ((*(P117)rt_nil_check(F->y_2473)).c_ != NULL))) {
if ((!f_same_task_426(F->up, (*(P117)rt_nil_check(F->y_2473)).members_, F->up->cur_task_202))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_890)).line_), rt_g_lit("E'COUNT is allowed only in the body of the task (RM79 9.9)", 58));
}
f_entry_path_1143(F->up, F->y_2473, rt_g_lit("", 0), &F->v_2476);
f_gexpr_805(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_890)).a_)).b_, NULL, &F->aty_2475, &F->d_2477);
f_entry_family_slot_1158(F->up, F->y_2473, (*(P140)rt_nil_check(F->v_2476)), (*(P140)rt_nil_check(F->d_2477)), &F->v_2476);
(*F->t_892) = F->up->ty_int_156;
(*F->r_893) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_entry_count(&", 16), (*(P140)rt_nil_check(F->v_2476))), one_rt_gstr(41)));
goto ret_;
}
}
if (((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_890)).a_)).kind_) == ((rt_int)9LL)) && f_is_package_1044(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_890)).a_)).a_))) {
F->y_2473 = f_member_of_1048(F->up, f_path_of_344(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_890)).a_)).a_), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_890)).a_)).name_)), G_NV((*(P174)rt_nil_check(F->e_890)).line_));
}
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_890)).a_)).kind_) == ((rt_int)5LL))) {
F->y_2473 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_890)).a_)).name_)));
if (((F->y_2473 == NULL) && (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_890)).a_)).name_)), rt_g_lit("SYSTEM", 6)) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_890)).a_)).name_)), rt_g_lit("OPTION", 6))))) {
f_config_attr_916(F->up, F->e_890, &(*F->t_892), &(*F->r_893));
goto ret_;
}
if (((eq_rt_gstr(F->a_2472, rt_g_lit("ADDRESS", 7)) && (F->y_2473 != NULL)) && ((((G_NV((*(P117)rt_nil_check(F->y_2473)).kind_) == ((rt_int)4LL)) || (G_NV((*(P117)rt_nil_check(F->y_2473)).kind_) == ((rt_int)3LL))) || (G_NV((*(P117)rt_nil_check(F->y_2473)).kind_) == ((rt_int)8LL))) || (G_NV((*(P117)rt_nil_check(F->y_2473)).kind_) == ((rt_int)9LL))))) {
(*F->t_892) = F->up->ty_int_156;
(*F->r_893) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(rt_add(((rt_int)65536LL), rt_mul(((rt_int)16LL), f_hash_416(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2473)).name_)), rt_g_s2g(rt_str_of_int(G_NV((*(P117)rt_nil_check(F->y_2473)).depth_)))))))))), one_rt_gstr(41)));
goto ret_;
}
if ((((F->y_2473 == NULL) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_890)).a_)).name_)), rt_g_lit("SYSTEM", 6))) && eq_rt_gstr(F->a_2472, rt_g_lit("CLOCK", 5)))) {
(*F->t_892) = F->up->ty_time_171;
(*F->r_893) = f_mk_227(F->up, rt_g_lit("((double)rt_time())", 19));
goto ret_;
}
if ((((F->y_2473 == NULL) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_890)).a_)).name_)), rt_g_lit("SYSTEM", 6))) && (eq_rt_gstr(F->a_2472, rt_g_lit("MAX_PRIORITY", 12)) || eq_rt_gstr(F->a_2472, rt_g_lit("MIN_PRIORITY", 12))))) {
(*F->t_892) = F->up->ty_int_156;
if (eq_rt_gstr(F->a_2472, rt_g_lit("MAX_PRIORITY", 12))) {
(*F->r_893) = f_mk_227(F->up, rt_g_lit("((rt_int)255)", 13));
} else {
(*F->r_893) = f_mk_227(F->up, rt_g_lit("((rt_int)0)", 11));
}
goto ret_;
}
}
if (((F->y_2473 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_2473)).kind_) == ((rt_int)5LL)))) {
F->tt_2474 = (*(P117)rt_nil_check(F->y_2473)).t_;
F->c_2478 = (*(P117)rt_nil_check(F->y_2473)).c_;
if (eq_rt_gstr(F->a_2472, rt_g_lit("SIZE", 4))) {
(*F->t_892) = F->up->ty_int_156;
f_type_bits_898(F->up, F->tt_2474, F->c_2478, &(*F->r_893));
goto ret_;
}
if (((((((((eq_rt_gstr(F->a_2472, rt_g_lit("DIGITS", 6)) || eq_rt_gstr(F->a_2472, rt_g_lit("SMALL", 5))) || eq_rt_gstr(F->a_2472, rt_g_lit("LARGE", 5))) || eq_rt_gstr(F->a_2472, rt_g_lit("EXPONENT_MIN", 12))) || eq_rt_gstr(F->a_2472, rt_g_lit("EXPONENT_MAX", 12))) || eq_rt_gstr(F->a_2472, rt_g_lit("BITS", 4))) || eq_rt_gstr(F->a_2472, rt_g_lit("RADIX", 5))) || eq_rt_gstr(F->a_2472, rt_g_lit("DELTA", 5))) || eq_rt_gstr(F->a_2472, rt_g_lit("ACCESS_SIZE", 11)))) {
f_numeric_attr_908(F->up, F->e_890, F->tt_2474, F->c_2478, &(*F->t_892), &(*F->r_893));
goto ret_;
}
if (eq_rt_gstr(F->a_2472, rt_g_lit("ORD", 3))) {
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->e_890)).b_, F->tt_2474, &F->aty_2475, &F->v_2476);
f_check_type_486(F->up, F->aty_2475, F->tt_2474, G_NV((*(P174)rt_nil_check(F->e_890)).line_));
(*F->t_892) = F->up->ty_int_156;
(*F->r_893) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(", 10), (*(P140)rt_nil_check(F->v_2476))), rt_g_lit(") + 1)", 6)));
goto ret_;
} else if ((eq_rt_gstr(F->a_2472, rt_g_lit("VAL", 3)) || eq_rt_gstr(F->a_2472, rt_g_lit("REP", 3)))) {
f_val_rep_941(F->up, F->e_890, F->tt_2474, F->c_2478, &(*F->t_892), &(*F->r_893));
goto ret_;
} else if ((eq_rt_gstr(F->a_2472, rt_g_lit("SUCC", 4)) || eq_rt_gstr(F->a_2472, rt_g_lit("PRED", 4)))) {
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->e_890)).b_, F->tt_2474, &F->aty_2475, &F->v_2476);
(*F->t_892) = F->tt_2474;
if ((G_NV((*(P122)rt_nil_check(F->tt_2474)).kind_) == ((rt_int)1LL))) {
if (eq_rt_gstr(F->a_2472, rt_g_lit("SUCC", 4))) {
(*F->r_893) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_add(", 7), (*(P140)rt_nil_check(F->v_2476))), rt_g_lit(", 1)", 4)));
} else {
(*F->r_893) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_sub(", 7), (*(P140)rt_nil_check(F->v_2476))), rt_g_lit(", 1)", 4)));
}
} else if (eq_rt_gstr(F->a_2472, rt_g_lit("SUCC", 4))) {
(*F->r_893) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P140)rt_nil_check(F->v_2476))), rt_g_lit(" + 1, ", 6)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2478)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2478)).hi_))), one_rt_gstr(41)));
} else {
(*F->r_893) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P140)rt_nil_check(F->v_2476))), rt_g_lit(" - 1, ", 6)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2478)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2478)).hi_))), one_rt_gstr(41)));
}
goto ret_;
} else if (((G_NV((*(P122)rt_nil_check(F->tt_2474)).kind_) == ((rt_int)6LL)) && ((eq_rt_gstr(F->a_2472, rt_g_lit("FIRST", 5)) || eq_rt_gstr(F->a_2472, rt_g_lit("LAST", 4))) || eq_rt_gstr(F->a_2472, rt_g_lit("LENGTH", 6))))) {
f_type_array_attr_932(F->up, F->e_890, F->tt_2474, F->c_2478, &(*F->t_892), &(*F->r_893));
goto ret_;
} else if ((eq_rt_gstr(F->a_2472, rt_g_lit("FIRST", 5)) || eq_rt_gstr(F->a_2472, rt_g_lit("LAST", 4)))) {
(*F->t_892) = F->tt_2474;
if (f_bounded_474(F->up, F->c_2478)) {
if (eq_rt_gstr(F->a_2472, rt_g_lit("FIRST", 5))) {
(*F->r_893) = (*(P178)rt_nil_check(F->c_2478)).lo_;
} else {
(*F->r_893) = (*(P178)rt_nil_check(F->c_2478)).hi_;
}
} else if ((G_NV((*(P122)rt_nil_check(F->tt_2474)).kind_) == ((rt_int)1LL))) {
if (eq_rt_gstr(F->a_2472, rt_g_lit("FIRST", 5))) {
(*F->r_893) = f_mk_227(F->up, rt_g_lit("(-INT64_MAX)", 12));
} else {
(*F->r_893) = f_mk_227(F->up, rt_g_lit("INT64_MAX", 9));
}
} else if (((G_NV((*(P122)rt_nil_check(F->tt_2474)).kind_) == ((rt_int)3LL)) && (f_root_445(F->up, F->tt_2474) == F->up->ty_sfloat_169))) {
if (eq_rt_gstr(F->a_2472, rt_g_lit("FIRST", 5))) {
(*F->r_893) = f_mk_227(F->up, rt_g_lit("(-3.40282347e+38)", 17));
} else {
(*F->r_893) = f_mk_227(F->up, rt_g_lit("3.40282347e+38", 14));
}
} else if ((G_NV((*(P122)rt_nil_check(F->tt_2474)).kind_) == ((rt_int)3LL))) {
if (eq_rt_gstr(F->a_2472, rt_g_lit("FIRST", 5))) {
(*F->r_893) = f_mk_227(F->up, rt_g_lit("(-1.7976931348623157e+308)", 26));
} else {
(*F->r_893) = f_mk_227(F->up, rt_g_lit("1.7976931348623157e+308", 23));
}
} else {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_890)).line_), cat_rt_gstr(rt_g_lit("this type has no ", 17), F->a_2472));
}
goto ret_;
}
f_other_attr_1183(F->up, F->e_890, F->y_2473, &(*F->t_892), &(*F->r_893));
goto ret_;
}
if (((F->y_2473 != NULL) && ((G_NV((*(P117)rt_nil_check(F->y_2473)).kind_) != ((rt_int)1LL)) && (G_NV((*(P117)rt_nil_check(F->y_2473)).kind_) != ((rt_int)2LL))))) {
f_other_attr_1183(F->up, F->e_890, F->y_2473, &(*F->t_892), &(*F->r_893));
goto ret_;
}
if (((eq_rt_gstr(F->a_2472, rt_g_lit("POSITION", 8)) || eq_rt_gstr(F->a_2472, rt_g_lit("FIRST_BIT", 9))) || eq_rt_gstr(F->a_2472, rt_g_lit("LAST_BIT", 8)))) {
f_component_attr_912(F->up, F->e_890, &(*F->t_892), &(*F->r_893));
goto ret_;
}
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->e_890)).a_, NULL, &F->tt_2474, &F->v_2476);
if (eq_rt_gstr(F->a_2472, rt_g_lit("ACCESS_SIZE", 11))) {
if ((G_NV((*(P122)rt_nil_check(F->tt_2474)).kind_) != ((rt_int)8LL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_890)).line_), rt_g_lit("ACCESS_SIZE is an attribute of access types and objects (RM79 App. A)", 69));
}
(*F->t_892) = F->up->ty_int_156;
(*F->r_893) = f_mk_227(F->up, rt_g_lit("((rt_int)(sizeof(void *) * 8))", 30));
goto ret_;
}
if (eq_rt_gstr(F->a_2472, rt_g_lit("SIZE", 4))) {
(*F->t_892) = F->up->ty_int_156;
f_object_bits_902(F->up, F->tt_2474, (*(P140)rt_nil_check(F->v_2476)), &(*F->r_893));
goto ret_;
}
if ((G_NV((*(P122)rt_nil_check(F->tt_2474)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_607(F->up, F->tt_2474);
f_deref_751(F->up, (*(P140)rt_nil_check(F->v_2476)), F->tt_2474, &F->d_2477);
F->v_2476 = F->d_2477;
F->tt_2474 = (*(P122)rt_nil_check(F->tt_2474)).target_;
}
(*F->t_892) = F->up->ty_int_156;
if (((G_NV((*(P122)rt_nil_check(F->tt_2474)).kind_) == ((rt_int)6LL)) && ((eq_rt_gstr(F->a_2472, rt_g_lit("FIRST", 5)) || eq_rt_gstr(F->a_2472, rt_g_lit("LAST", 4))) || eq_rt_gstr(F->a_2472, rt_g_lit("LENGTH", 6))))) {
f_object_array_attr_926(F->up, F->e_890, F->tt_2474, (*(P140)rt_nil_check(F->v_2476)), &(*F->t_892), &(*F->r_893));
goto ret_;
}
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_890)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), F->a_2472), rt_g_lit(" is not handled here", 20)));
ret_:

  return;
}

static void f_type_bits_898(struct f_greenc_1fr *up_, P122 t_895, P178 c_896, P140 *r_897) {
  struct f_type_bits_898fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_895 = t_895;
F->c_896 = c_896;
F->r_897 = r_897;
F->ct_2481 = NULL;
if ((G_NV((*(P122)rt_nil_check(F->t_895)).kind_) == ((rt_int)6LL))) {
if ((!f_bounded_474(F->up, F->c_896))) {
f_fail_248(F->up, ((rt_int)0LL), rt_g_lit("SIZE of an array type needs its bounds (RM79 App. A)", 52));
}
f_elem_ctype_565(F->up, (*(P122)rt_nil_check(F->t_895)).elem_, &F->ct_2481);
(*F->r_897) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ rt_int l_ = ", 15), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_896)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_896)).hi_))), rt_g_lit("; (h_ >= l_ \? h_ - l_ + 1 : 0) * (rt_int)sizeof(", 48)), (*(P140)rt_nil_check(F->ct_2481))), rt_g_lit(") * 8; })", 9)));
} else if (((G_NV((*(P122)rt_nil_check(F->t_895)).kind_) == ((rt_int)11LL)) || (G_NV((*(P122)rt_nil_check(F->t_895)).kind_) == ((rt_int)2LL)))) {
(*F->r_897) = f_mk_227(F->up, rt_g_lit("((rt_int)8)", 11));
} else if ((G_NV((*(P122)rt_nil_check(F->t_895)).kind_) == ((rt_int)4LL))) {
if ((f_list_len_307(F->up, (*(P122)rt_nil_check(F->t_895)).lits_) <= ((rt_int)256LL))) {
(*F->r_897) = f_mk_227(F->up, rt_g_lit("((rt_int)8)", 11));
} else {
(*F->r_897) = f_mk_227(F->up, rt_g_lit("((rt_int)16)", 12));
}
} else if (((G_NV((*(P122)rt_nil_check(F->t_895)).kind_) == ((rt_int)1LL)) && (f_root_445(F->up, F->t_895) == F->up->ty_short_167))) {
(*F->r_897) = f_mk_227(F->up, rt_g_lit("((rt_int)32)", 12));
} else if (((G_NV((*(P122)rt_nil_check(F->t_895)).kind_) == ((rt_int)3LL)) && (f_root_445(F->up, F->t_895) == F->up->ty_sfloat_169))) {
(*F->r_897) = f_mk_227(F->up, rt_g_lit("((rt_int)32)", 12));
} else {
f_ctype_491(F->up, F->t_895, &F->ct_2481);
(*F->r_897) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(sizeof(", 17), (*(P140)rt_nil_check(F->ct_2481))), rt_g_lit(") * 8))", 7)));
}
ret_:

  return;
}

static void f_object_bits_902(struct f_greenc_1fr *up_, P122 t_899, rt_gstr v_900, P140 *r_901) {
  struct f_object_bits_902fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_899 = t_899;
F->v_900 = cp_rt_gstr(v_900);
F->r_901 = r_901;
F->ct_2482 = NULL;
F->et_2483 = NULL;
if ((G_NV((*(P122)rt_nil_check(F->t_899)).kind_) == ((rt_int)6LL))) {
f_ctype_491(F->up, F->t_899, &F->ct_2482);
f_elem_ctype_565(F->up, (*(P122)rt_nil_check(F->t_899)).elem_, &F->et_2483);
(*F->r_901) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2482))), rt_g_lit(" sz_ = ", 7)), F->v_900), rt_g_lit("; G_CNT(sz_) * (rt_int)sizeof(", 30)), (*(P140)rt_nil_check(F->et_2483))), rt_g_lit(") * 8; })", 9)));
} else {
f_type_bits_898(F->up, F->t_899, NULL, &(*F->r_901));
(*F->r_901) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ (void)(", 10), F->v_900), rt_g_lit("); ", 3)), (*(P140)rt_nil_check((*F->r_901)))), rt_g_lit("; })", 4)));
}
ret_:

  return;
}

static void f_numeric_attr_908(struct f_greenc_1fr *up_, P174 e_903, P122 tt_904, P178 c_905, P122 *t_906, P140 *r_907) {
  struct f_numeric_attr_908fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_903 = e_903;
F->tt_904 = tt_904;
F->c_905 = c_905;
F->t_906 = t_906;
F->r_907 = r_907;
F->a_2484 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_903)).name_)));
F->short_2485 = INT_MIN;
F->short_2485 = (f_root_445(F->up, F->tt_904) == F->up->ty_sfloat_169);
(*F->t_906) = F->up->ty_int_156;
if (eq_rt_gstr(F->a_2484, rt_g_lit("ACCESS_SIZE", 11))) {
if ((G_NV((*(P122)rt_nil_check(F->tt_904)).kind_) != ((rt_int)8LL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_903)).line_), rt_g_lit("ACCESS_SIZE is an attribute of access types (RM79 App. A)", 57));
}
(*F->r_907) = f_mk_227(F->up, rt_g_lit("((rt_int)(sizeof(void *) * 8))", 30));
} else if (eq_rt_gstr(F->a_2484, rt_g_lit("RADIX", 5))) {
if ((!f_is_numeric_450(F->up, F->tt_904))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_903)).line_), rt_g_lit("RADIX is an attribute of numeric types (RM79 App. A)", 52));
}
(*F->r_907) = f_mk_227(F->up, rt_g_lit("((rt_int)2)", 11));
} else if ((G_NV((*(P122)rt_nil_check(F->tt_904)).kind_) == ((rt_int)3LL))) {
if (eq_rt_gstr(F->a_2484, rt_g_lit("DIGITS", 6))) {
if (((F->c_905 != NULL) && ((*(P178)rt_nil_check(F->c_905)).acc_ != NULL))) {
(*F->r_907) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(", 10), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_905)).acc_))), rt_g_lit("))", 2)));
} else {
(*F->r_907) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV((*(P122)rt_nil_check(F->tt_904)).ndigits_)))), one_rt_gstr(41)));
}
} else if (eq_rt_gstr(F->a_2484, rt_g_lit("BITS", 4))) {
if (G_NV(F->short_2485)) {
(*F->r_907) = f_mk_227(F->up, rt_g_lit("((rt_int)24)", 12));
} else {
(*F->r_907) = f_mk_227(F->up, rt_g_lit("((rt_int)53)", 12));
}
} else if (eq_rt_gstr(F->a_2484, rt_g_lit("EXPONENT_MIN", 12))) {
if (G_NV(F->short_2485)) {
(*F->r_907) = f_mk_227(F->up, rt_g_lit("((rt_int)-125)", 14));
} else {
(*F->r_907) = f_mk_227(F->up, rt_g_lit("((rt_int)-1021)", 15));
}
} else if (eq_rt_gstr(F->a_2484, rt_g_lit("EXPONENT_MAX", 12))) {
if (G_NV(F->short_2485)) {
(*F->r_907) = f_mk_227(F->up, rt_g_lit("((rt_int)128)", 13));
} else {
(*F->r_907) = f_mk_227(F->up, rt_g_lit("((rt_int)1024)", 14));
}
} else if (eq_rt_gstr(F->a_2484, rt_g_lit("SMALL", 5))) {
(*F->t_906) = F->tt_904;
if (G_NV(F->short_2485)) {
(*F->r_907) = f_mk_227(F->up, rt_g_lit("1.17549435e-38", 14));
} else {
(*F->r_907) = f_mk_227(F->up, rt_g_lit("2.2250738585072014e-308", 23));
}
} else if (eq_rt_gstr(F->a_2484, rt_g_lit("LARGE", 5))) {
(*F->t_906) = F->tt_904;
if (G_NV(F->short_2485)) {
(*F->r_907) = f_mk_227(F->up, rt_g_lit("3.40282347e+38", 14));
} else {
(*F->r_907) = f_mk_227(F->up, rt_g_lit("1.7976931348623157e+308", 23));
}
} else {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_903)).line_), rt_g_lit("DELTA is an attribute of fixed point types (RM79 App. A)", 56));
}
} else if (((G_NV((*(P122)rt_nil_check(F->tt_904)).kind_) == ((rt_int)16LL)) && ((*(P122)rt_nil_check(F->tt_904)).fsmall_ != NULL))) {
if (eq_rt_gstr(F->a_2484, rt_g_lit("DELTA", 5))) {
(*F->t_906) = F->tt_904;
if (((F->c_905 != NULL) && ((*(P178)rt_nil_check(F->c_905)).acc_ != NULL))) {
(*F->r_907) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_905)).acc_))), one_rt_gstr(41)));
} else {
(*F->r_907) = (*(P122)rt_nil_check(F->tt_904)).fdelta_;
}
} else if (eq_rt_gstr(F->a_2484, rt_g_lit("SMALL", 5))) {
(*F->t_906) = F->tt_904;
(*F->r_907) = (*(P122)rt_nil_check(F->tt_904)).fsmall_;
} else if (eq_rt_gstr(F->a_2484, rt_g_lit("LARGE", 5))) {
(*F->t_906) = F->tt_904;
(*F->r_907) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix_large(", 15), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->tt_904)).fsmall_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_905)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_905)).hi_))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_2484, rt_g_lit("BITS", 4))) {
(*F->r_907) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix_bits(", 14), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->tt_904)).fsmall_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_905)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_905)).hi_))), one_rt_gstr(41)));
} else {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_903)).line_), cat_rt_gstr(F->a_2484, rt_g_lit(" is not an attribute of fixed point types (RM79 App. A)", 55)));
}
} else {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_903)).line_), cat_rt_gstr(F->a_2484, rt_g_lit(" is an attribute of real types (RM79 App. A)", 44)));
}
ret_:

  return;
}

static void f_component_attr_912(struct f_greenc_1fr *up_, P174 e_909, P122 *t_910, P140 *r_911) {
  struct f_component_attr_912fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_909 = e_909;
F->t_910 = t_910;
F->r_911 = r_911;
F->bt_2486 = NULL;
F->v_2487 = NULL;
F->ct_2488 = NULL;
F->f_2489 = NULL;
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_909)).a_)).kind_) != ((rt_int)9LL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_909)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_909)).name_)), rt_g_lit(" is an attribute of a record component, X.C'", 44)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_909)).name_))), rt_g_lit(" (RM79 13.7)", 12)));
}
f_gexpr_805(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_909)).a_)).a_, NULL, &F->bt_2486, &F->v_2487);
if ((G_NV((*(P122)rt_nil_check(F->bt_2486)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_607(F->up, F->bt_2486);
F->bt_2486 = (*(P122)rt_nil_check(F->bt_2486)).target_;
}
if ((G_NV((*(P122)rt_nil_check(F->bt_2486)).kind_) != ((rt_int)7LL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_909)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_909)).name_)), rt_g_lit(" is an attribute of a record component (RM79 13.7)", 50)));
}
F->f_2489 = (*(P122)rt_nil_check(F->bt_2486)).fields_;
while (((F->f_2489 != NULL) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_2489)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_909)).a_)).name_)))))) {
F->f_2489 = (*(P1830)rt_nil_check(F->f_2489)).next_;
}
L_end_2490: ;
if ((F->f_2489 == NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_909)).line_), cat_rt_gstr(cat_rt_gstr(f_kind_name_482(F->up, F->bt_2486), rt_g_lit(" has no component ", 18)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_909)).a_)).name_))));
}
f_ctype_491(F->up, F->bt_2486, &F->ct_2488);
(*F->t_910) = F->up->ty_int_156;
f_component_place_558(F->up, F->bt_2486, F->f_2489, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_909)).name_)), (*(P140)rt_nil_check(F->ct_2488)), &(*F->r_911));
ret_:

  return;
}

static void f_config_attr_916(struct f_greenc_1fr *up_, P174 e_913, P122 *t_914, P140 *r_915) {
  struct f_config_attr_916fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_913 = e_913;
F->t_914 = t_914;
F->r_915 = r_915;
F->a_2491 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_913)).name_)));
F->p_2492 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_913)).a_)).name_)));
F->nm_2493 = NULL;
F->nm_2493 = F->up->conf_system_222;
(*F->t_914) = F->up->ty_int_156;
if (eq_rt_gstr(F->p_2492, rt_g_lit("OPTION", 6))) {
(*F->t_914) = F->up->ty_bool_157;
if (eq_rt_gstr(F->a_2491, rt_g_lit("TIME", 4))) {
if (((F->up->conf_optimize_225 != NULL) && eq_rt_gstr((*(P140)rt_nil_check(F->up->conf_optimize_225)), rt_g_lit("TIME", 4)))) {
(*F->r_915) = f_mk_227(F->up, rt_g_lit("1", 1));
} else {
(*F->r_915) = f_mk_227(F->up, rt_g_lit("0", 1));
}
} else if (eq_rt_gstr(F->a_2491, rt_g_lit("SPACE", 5))) {
if (((F->up->conf_optimize_225 != NULL) && eq_rt_gstr((*(P140)rt_nil_check(F->up->conf_optimize_225)), rt_g_lit("SPACE", 5)))) {
(*F->r_915) = f_mk_227(F->up, rt_g_lit("1", 1));
} else {
(*F->r_915) = f_mk_227(F->up, rt_g_lit("0", 1));
}
} else {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_913)).line_), rt_g_lit("OPTION has the attributes TIME and SPACE (RM79 13.7)", 52));
}
} else if (eq_rt_gstr(F->a_2491, rt_g_lit("CLOCK", 5))) {
(*F->t_914) = F->up->ty_time_171;
(*F->r_915) = f_mk_227(F->up, rt_g_lit("((double)rt_time())", 19));
} else if (eq_rt_gstr(F->a_2491, rt_g_lit("MAX_PRIORITY", 12))) {
(*F->r_915) = f_mk_227(F->up, rt_g_lit("((rt_int)255)", 13));
} else if (eq_rt_gstr(F->a_2491, rt_g_lit("MIN_PRIORITY", 12))) {
(*F->r_915) = f_mk_227(F->up, rt_g_lit("((rt_int)0)", 11));
} else if (eq_rt_gstr(F->a_2491, rt_g_lit("NAME", 4))) {
if ((F->nm_2493 == NULL)) {
F->nm_2493 = f_mk_227(F->up, rt_g_lit("PALEO", 5));
}
(*F->t_914) = F->up->ty_string_160;
(*F->r_915) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_lit(", 9), f_c_string_790(F->up, (*(P140)rt_nil_check(F->nm_2493)))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(({ rt_gstr at2495 = (*(P140)rt_nil_check(F->nm_2493)); at2495.hi >= at2495.lo ? at2495.hi - at2495.lo + 1 : (rt_int)0; })))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_2491, rt_g_lit("STORAGE_UNIT", 12))) {
(*F->r_915) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->up->conf_storage_unit_223)))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_2491, rt_g_lit("MEMORY_SIZE", 11))) {
(*F->r_915) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->up->conf_memory_size_224)))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_2491, rt_g_lit("MAX_INT", 7))) {
(*F->r_915) = f_mk_227(F->up, rt_g_lit("INT64_MAX", 9));
} else if (eq_rt_gstr(F->a_2491, rt_g_lit("MIN_INT", 7))) {
(*F->r_915) = f_mk_227(F->up, rt_g_lit("(-INT64_MAX)", 12));
} else {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_913)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("SYSTEM has no attribute ", 24), F->a_2491), rt_g_lit(" (RM79 13.7)", 12)));
}
ret_:

  return;
}

static void f_attr_dim_920(struct f_greenc_1fr *up_, P174 e_917, P122 arrt_918, rt_int *n_919) {
  struct f_attr_dim_920fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_917 = e_917;
F->arrt_918 = arrt_918;
F->n_919 = n_919;
F->ok_2496 = INT_MIN;
(*F->n_919) = ((rt_int)1LL);
if (((*(P174)rt_nil_check(F->e_917)).b_ != NULL)) {
f_manifest_503(F->up, (*(P174)rt_nil_check(F->e_917)).b_, &(*F->n_919), &F->ok_2496);
 (void)rt_range(F->ok_2496, 0, 1);
if ((!G_NV(F->ok_2496))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_917)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the index number of ", 20), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_917)).name_))), rt_g_lit("(N) is static (RM79 App. A)", 27)));
}
}
if (((G_NV((*F->n_919)) < ((rt_int)1LL)) || (G_NV((*F->n_919)) > G_NV((*(P122)rt_nil_check(F->arrt_918)).dims_)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_917)).line_), cat_rt_gstr(cat_rt_gstr(f_kind_name_482(F->up, F->arrt_918), rt_g_lit(" has no index ", 14)), rt_g_s2g(rt_str_of_int(G_NV((*F->n_919))))));
}
ret_:

  return;
}

static void f_object_array_attr_926(struct f_greenc_1fr *up_, P174 e_921, P122 arrt_922, rt_gstr v_923, P122 *t_924, P140 *r_925) {
  struct f_object_array_attr_926fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_921 = e_921;
F->arrt_922 = arrt_922;
F->v_923 = cp_rt_gstr(v_923);
F->t_924 = t_924;
F->r_925 = r_925;
F->n_2497 = INT64_MIN;
F->it_2498 = NULL;
F->it_2498 = F->arrt_922;
F->ct_2499 = NULL;
F->tmp_2500 = NULL;
F->p_2501 = NULL;
F->lo_2502 = NULL;
F->hi_2503 = NULL;
f_attr_dim_920(F->up, F->e_921, F->arrt_922, &F->n_2497);
f_ctype_491(F->up, F->arrt_922, &F->ct_2499);
f_new_name_230(F->up, rt_g_lit("at", 2), &F->tmp_2500);
F->p_2501 = F->tmp_2500;
{ rt_int lo2506 = ((rt_int)2LL), hi2507 = G_NV(F->n_2497);
for (rt_int it2508 = lo2506; it2508 <= hi2507; it2508++) {
F->k_2505 = it2508;
F->it_2498 = (*(P122)rt_nil_check(F->it_2498)).elem_;
}
}
L_end_2504: ;
if ((G_NV(F->n_2497) == ((rt_int)1LL))) {
F->lo_2502 = f_mk_227(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->p_2501)), rt_g_lit(".lo", 3)));
F->hi_2503 = f_mk_227(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->p_2501)), rt_g_lit(".hi", 3)));
} else {
{ rt_int lo2511 = ((rt_int)3LL), hi2512 = G_NV(F->n_2497);
for (rt_int it2513 = lo2511; it2513 <= hi2512; it2513++) {
F->k_2510 = it2513;
F->p_2501 = f_mk_227(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->p_2501)), rt_g_lit(".p[0]", 5)));
}
}
L_end_2509: ;
F->lo_2502 = f_mk_227(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->p_2501)), rt_g_lit(".lo2", 4)));
F->hi_2503 = f_mk_227(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->p_2501)), rt_g_lit(".hi2", 4)));
}
(*F->t_924) = (*(P122)rt_nil_check(F->it_2498)).idx_;
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_921)).name_)), rt_g_lit("FIRST", 5))) {
(*F->r_925) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2499))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2500))), rt_g_lit(" = ", 3)), F->v_923), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->lo_2502))), rt_g_lit("; })", 4)));
} else if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_921)).name_)), rt_g_lit("LAST", 4))) {
(*F->r_925) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2499))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2500))), rt_g_lit(" = ", 3)), F->v_923), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->hi_2503))), rt_g_lit("; })", 4)));
} else {
(*F->t_924) = F->up->ty_int_156;
(*F->r_925) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2499))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2500))), rt_g_lit(" = ", 3)), F->v_923), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->hi_2503))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->lo_2502))), rt_g_lit(" \? ", 3)), (*(P140)rt_nil_check(F->hi_2503))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->lo_2502))), rt_g_lit(" + 1 : (rt_int)0; })", 20)));
}
ret_:

  return;
}

static void f_type_array_attr_932(struct f_greenc_1fr *up_, P174 e_927, P122 arrt_928, P178 c_929, P122 *t_930, P140 *r_931) {
  struct f_type_array_attr_932fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_927 = e_927;
F->arrt_928 = arrt_928;
F->c_929 = c_929;
F->t_930 = t_930;
F->r_931 = r_931;
F->n_2514 = INT64_MIN;
F->it_2515 = NULL;
F->it_2515 = F->arrt_928;
F->cc_2516 = NULL;
F->cc_2516 = F->c_929;
f_attr_dim_920(F->up, F->e_927, F->arrt_928, &F->n_2514);
{ rt_int lo2519 = ((rt_int)2LL), hi2520 = G_NV(F->n_2514);
for (rt_int it2521 = lo2519; it2521 <= hi2520; it2521++) {
F->k_2518 = it2521;
F->it_2515 = (*(P122)rt_nil_check(F->it_2515)).elem_;
if ((F->cc_2516 != NULL)) {
F->cc_2516 = (*(P178)rt_nil_check(F->cc_2516)).inner_;
}
}
}
L_end_2517: ;
if (((F->cc_2516 == NULL) || ((*(P178)rt_nil_check(F->cc_2516)).lo_ == NULL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_927)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the bounds of ", 14), f_kind_name_482(F->up, F->arrt_928)), rt_g_lit(" are not known here: ", 21)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_927)).name_))), rt_g_lit(" applies to an array type with bounds (RM79 3.6)", 48)));
}
(*F->t_930) = (*(P122)rt_nil_check(F->it_2515)).idx_;
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_927)).name_)), rt_g_lit("FIRST", 5))) {
(*F->r_931) = (*(P178)rt_nil_check(F->cc_2516)).lo_;
} else if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_927)).name_)), rt_g_lit("LAST", 4))) {
(*F->r_931) = (*(P178)rt_nil_check(F->cc_2516)).hi_;
} else {
(*F->t_930) = F->up->ty_int_156;
(*F->r_931) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ rt_int l_ = ", 15), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->cc_2516)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->cc_2516)).hi_))), rt_g_lit("; h_ >= l_ \? h_ - l_ + 1 : (rt_int)0; })", 40)));
}
ret_:

  return;
}

static void f_lit_table_935(struct f_greenc_1fr *up_, P122 t_933, P140 *r_934) {
  struct f_lit_table_935fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_933 = t_933;
F->r_934 = r_934;
F->l_2522 = NULL;
F->l_2522 = (*(P122)rt_nil_check(F->t_933)).lits_;
F->s_2523 = NULL;
F->s_2523 = f_mk_227(F->up, rt_g_lit("", 0));
if (((*(P122)rt_nil_check(F->t_933)).littab_ == NULL)) {
f_new_name_230(F->up, rt_g_lit("lits", 4), &(*(P122)rt_nil_check(F->t_933)).littab_);
while ((F->l_2522 != NULL)) {
if ((({ rt_gstr at2525 = (*(P140)rt_nil_check(F->s_2523)); at2525.hi >= at2525.lo ? at2525.hi - at2525.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->s_2523 = f_mk_227(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->s_2523)), rt_g_lit(", ", 2)));
}
if ((G_NV((*(P174)rt_nil_check(F->l_2522)).kind_) == ((rt_int)3LL))) {
F->s_2523 = f_mk_227(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->s_2523)), f_c_string_790(F->up, cat_rt_gstr(cat_rt_gstr(f_q_245(F->up), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->l_2522)).name_))), f_q_245(F->up)))));
} else {
F->s_2523 = f_mk_227(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->s_2523)), f_c_string_790(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->l_2522)).name_)))));
}
F->l_2522 = (*(P174)rt_nil_check(F->l_2522)).next_;
}
L_end_2524: ;
f_put_to_252(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static const char *const ", 25), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_933)).littab_))), rt_g_lit("[] = {", 6)), (*(P140)rt_nil_check(F->s_2523))), rt_g_lit("};", 2)));
}
(*F->r_934) = (*(P122)rt_nil_check(F->t_933)).littab_;
ret_:

  return;
}

static void f_val_rep_941(struct f_greenc_1fr *up_, P174 e_936, P122 tt_937, P178 c_938, P122 *t_939, P140 *r_940) {
  struct f_val_rep_941fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_936 = e_936;
F->tt_937 = tt_937;
F->c_938 = c_938;
F->t_939 = t_939;
F->r_940 = r_940;
F->aty_2526 = NULL;
F->v_2527 = NULL;
F->lt_2528 = NULL;
F->n_2529 = INT64_MIN;
if (((*(P174)rt_nil_check(F->e_936)).b_ == NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_936)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_936)).name_))), rt_g_lit(" takes an argument", 18)));
}
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_936)).name_)), rt_g_lit("REP", 3))) {
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->e_936)).b_, F->tt_937, &F->aty_2526, &F->v_2527);
f_check_type_486(F->up, F->aty_2526, F->tt_937, G_NV((*(P174)rt_nil_check(F->e_936)).line_));
(*F->t_939) = F->up->ty_string_160;
if ((G_NV((*(P122)rt_nil_check(F->tt_937)).kind_) == ((rt_int)1LL))) {
(*F->r_940) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_str_of_int(", 14), (*(P140)rt_nil_check(F->v_2527))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->tt_937)).kind_) == ((rt_int)3LL))) {
(*F->r_940) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_image_float(", 17), (*(P140)rt_nil_check(F->v_2527))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->tt_937)).kind_) == ((rt_int)2LL))) {
(*F->r_940) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_bool_rep(", 14), (*(P140)rt_nil_check(F->v_2527))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->tt_937)).kind_) == ((rt_int)11LL))) {
(*F->r_940) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_char_rep(", 14), (*(P140)rt_nil_check(F->v_2527))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->tt_937)).kind_) == ((rt_int)4LL))) {
f_lit_table_935(F->up, F->tt_937, &F->lt_2528);
(*F->r_940) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_enum_rep(", 14), (*(P140)rt_nil_check(F->v_2527))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->lt_2528))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(f_list_len_307(F->up, (*(P122)rt_nil_check(F->tt_937)).lits_)))), one_rt_gstr(41)));
} else {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_936)).line_), rt_g_lit("REP is an attribute of scalar types", 35));
}
(*F->r_940) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_s2g(", 9), (*(P140)rt_nil_check((*F->r_940)))), one_rt_gstr(41)));
goto ret_;
}
(*F->t_939) = F->tt_937;
if ((G_NV((*(P122)rt_nil_check(F->tt_937)).kind_) == ((rt_int)1LL))) {
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->e_936)).b_, F->up->ty_string_160, &F->aty_2526, &F->v_2527);
f_check_type_486(F->up, F->aty_2526, F->up->ty_string_160, G_NV((*(P174)rt_nil_check(F->e_936)).line_));
(*F->r_940) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_int_of_str(rt_g_g2s(", 23), (*(P140)rt_nil_check(F->v_2527))), rt_g_lit("))", 2)));
if (f_bounded_474(F->up, F->c_938)) {
(*F->r_940) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P140)rt_nil_check((*F->r_940)))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_938)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_938)).hi_))), one_rt_gstr(41)));
}
} else if ((G_NV((*(P122)rt_nil_check(F->tt_937)).kind_) == ((rt_int)3LL))) {
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->e_936)).b_, F->up->ty_string_160, &F->aty_2526, &F->v_2527);
f_check_type_486(F->up, F->aty_2526, F->up->ty_string_160, G_NV((*(P174)rt_nil_check(F->e_936)).line_));
(*F->r_940) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_float_val(rt_g_g2s(", 24), (*(P140)rt_nil_check(F->v_2527))), rt_g_lit("))", 2)));
} else if ((((G_NV((*(P122)rt_nil_check(F->tt_937)).kind_) == ((rt_int)2LL)) || (G_NV((*(P122)rt_nil_check(F->tt_937)).kind_) == ((rt_int)11LL))) || (G_NV((*(P122)rt_nil_check(F->tt_937)).kind_) == ((rt_int)4LL)))) {
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->e_936)).b_, NULL, &F->aty_2526, &F->v_2527);
if (f_is_string_570(F->up, F->aty_2526)) {
F->v_2527 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_g2s(", 9), (*(P140)rt_nil_check(F->v_2527))), one_rt_gstr(41)));
if ((G_NV((*(P122)rt_nil_check(F->tt_937)).kind_) == ((rt_int)2LL))) {
F->v_2527 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_bool_val(", 14), (*(P140)rt_nil_check(F->v_2527))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->tt_937)).kind_) == ((rt_int)11LL))) {
F->v_2527 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_char_val(", 14), (*(P140)rt_nil_check(F->v_2527))), one_rt_gstr(41)));
} else {
f_lit_table_935(F->up, F->tt_937, &F->lt_2528);
F->v_2527 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_enum_val(", 14), (*(P140)rt_nil_check(F->v_2527))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->lt_2528))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(f_list_len_307(F->up, (*(P122)rt_nil_check(F->tt_937)).lits_)))), one_rt_gstr(41)));
}
} else {
f_check_type_486(F->up, F->aty_2526, F->up->ty_int_156, G_NV((*(P174)rt_nil_check(F->e_936)).line_));
F->v_2527 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->v_2527))), rt_g_lit(" - 1)", 5)));
}
(*F->r_940) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P140)rt_nil_check(F->v_2527))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_938)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_938)).hi_))), one_rt_gstr(41)));
} else {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_936)).line_), rt_g_lit("VAL is an attribute of scalar types", 35));
}
ret_:

  return;
}

static void f_allocator_946(struct f_greenc_1fr *up_, P174 e_942, P122 want_943, P122 *t_944, P140 *r_945) {
  struct f_allocator_946fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_942 = e_942;
F->want_943 = want_943;
F->t_944 = t_944;
F->r_945 = r_945;
F->y_2530 = NULL;
F->y_2530 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_942)).name_)));
F->target_2531 = NULL;
F->vt_2532 = NULL;
F->ct_2533 = NULL;
F->pt_2534 = NULL;
F->cell_2535 = NULL;
F->v_2536 = NULL;
F->x_2537 = NULL;
if (((F->want_943 == NULL) || (G_NV((*(P122)rt_nil_check(F->want_943)).kind_) != ((rt_int)8LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_942)).line_), rt_g_lit("the access type of this allocator is not known here", 51));
}
if (((F->y_2530 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_2530)).kind_) != ((rt_int)5LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_942)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_942)).name_)), rt_g_lit(" is not a type", 14)));
}
f_finish_ptr_607(F->up, F->want_943);
F->target_2531 = (*(P122)rt_nil_check(F->want_943)).target_;
if ((!f_same_443(F->up, (*(P117)rt_nil_check(F->y_2530)).t_, F->want_943))) {
f_check_type_486(F->up, (*(P117)rt_nil_check(F->y_2530)).t_, F->target_2531, G_NV((*(P174)rt_nil_check(F->e_942)).line_));
}
f_ctype_491(F->up, F->target_2531, &F->ct_2533);
f_ctype_491(F->up, F->want_943, &F->pt_2534);
f_new_name_230(F->up, rt_g_lit("cell", 4), &F->cell_2535);
if (((*(P174)rt_nil_check(F->e_942)).a_ == NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_942)).line_), rt_g_lit("an allocator gives the initial value: new T(...) (RM79 4.7)", 59));
}
if ((F->up->pure_sym_216 != NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_942)).line_), rt_g_lit("an allocator cannot appear in a function body (RM79 6.5)", 56));
}
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_942)).a_)).kind_) == ((rt_int)12LL))) {
f_aggregate_951(F->up, (*(P174)rt_nil_check(F->e_942)).a_, F->target_2531, &F->vt_2532, &F->v_2536);
} else {
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->e_942)).a_, F->target_2531, &F->vt_2532, &F->v_2536);
}
f_check_type_486(F->up, F->vt_2532, F->target_2531, G_NV((*(P174)rt_nil_check(F->e_942)).line_));
f_copy_code_623(F->up, F->target_2531, (*(P140)rt_nil_check(F->v_2536)), &F->x_2537);
(*F->t_944) = F->want_943;
(*F->r_945) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2533))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check(F->cell_2535))), rt_g_lit(" = rt_alloc(sizeof(", 19)), (*(P140)rt_nil_check(F->ct_2533))), rt_g_lit(")); *", 5)), (*(P140)rt_nil_check(F->cell_2535))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2537))), rt_g_lit("; (", 3)), (*(P140)rt_nil_check(F->pt_2534))), one_rt_gstr(41)), (*(P140)rt_nil_check(F->cell_2535))), rt_g_lit("; })", 4)));
ret_:

  return;
}

static void f_aggregate_951(struct f_greenc_1fr *up_, P174 e_947, P122 want_948, P122 *t_949, P140 *r_950) {
  struct f_aggregate_951fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_947 = e_947;
F->want_948 = want_948;
F->t_949 = t_949;
F->r_950 = r_950;
F->b_2538 = NULL;
F->b_2538 = F->up->agg_bounds_181;
F->up->agg_bounds_181 = NULL;
if ((F->want_948 == NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_947)).line_), rt_g_lit("the type of this aggregate is not known here: qualify it, T(...) (RM79 4.6)", 75));
}
(*F->t_949) = F->want_948;
if ((G_NV((*(P122)rt_nil_check(F->want_948)).kind_) == ((rt_int)7LL))) {
f_record_aggregate_973(F->up, F->e_947, F->want_948, &(*F->r_950));
} else if ((G_NV((*(P122)rt_nil_check(F->want_948)).kind_) == ((rt_int)6LL))) {
f_array_aggregate_991(F->up, F->e_947, F->want_948, F->b_2538, &(*F->r_950));
} else {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_947)).line_), cat_rt_gstr(rt_g_lit("an aggregate builds a record or an array, not ", 46), f_kind_name_482(F->up, F->want_948)));
}
ret_:

  return;
}

static void f_captured_954(struct f_greenc_1fr *up_, P126 b_952, P140 *r_953) {
  struct f_captured_954fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_952 = b_952;
F->r_953 = r_953;
F->l_2539 = NULL;
F->l_2539 = (*(P126)rt_nil_check(F->b_952)).head_;
(*F->r_953) = f_mk_227(F->up, rt_g_lit("", 0));
while ((F->l_2539 != NULL)) {
(*F->r_953) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->r_953))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P151)rt_nil_check(F->l_2539)).s_))));
F->l_2539 = (*(P151)rt_nil_check(F->l_2539)).next_;
}
L_end_2540: ;
ret_:

  return;
}

static P1830 f_field_at_957(struct f_greenc_1fr *up_, P122 rt_955, rt_int k_956) {
  struct f_field_at_957fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->rt_955 = rt_955;
F->k_956 = k_956;
F->f_2541 = NULL;
F->f_2541 = (*(P122)rt_nil_check(F->rt_955)).fields_;
{ rt_int lo2544 = ((rt_int)2LL), hi2545 = F->k_956;
for (rt_int it2546 = lo2544; it2546 <= hi2545; it2546++) {
F->i_2543 = it2546;
F->f_2541 = (*(P1830)rt_nil_check(F->f_2541)).next_;
}
}
L_end_2542: ;
F->result_ = F->f_2541;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_names_field_960(struct f_greenc_1fr *up_, P174 x_958, P1830 f_959) {
  struct f_names_field_960fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_958 = x_958;
F->f_959 = f_959;
if ((G_NV((*(P174)rt_nil_check(F->x_958)).kind_) != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_958)).name_)), (*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_959)).name_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P174 f_item_for_965(struct f_greenc_1fr *up_, P174 e_961, P122 rt_962, rt_int k_963, rt_int p_964) {
  struct f_item_for_965fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_961 = e_961;
F->rt_962 = rt_962;
F->k_963 = k_963;
F->p_964 = p_964;
F->it_2547 = NULL;
F->it_2547 = (*(P174)rt_nil_check(F->e_961)).a_;
F->lab_2548 = NULL;
F->n_2549 = INT64_MIN;
F->n_2549 = ((rt_int)0LL);
while ((F->it_2547 != NULL)) {
if (((*(P174)rt_nil_check(F->it_2547)).a_ == NULL)) {
F->n_2549 = rt_add(G_NV(F->n_2549), ((rt_int)1LL));
if ((G_NV(F->n_2549) == F->p_964)) {
F->result_ = (*(P174)rt_nil_check(F->it_2547)).b_;
goto ret_;
}
} else {
F->lab_2548 = (*(P174)rt_nil_check(F->it_2547)).a_;
while ((F->lab_2548 != NULL)) {
if (((G_NV((*(P174)rt_nil_check(F->lab_2548)).flag_) == ((rt_int)1LL)) || f_names_field_960(F->up, (*(P174)rt_nil_check(F->lab_2548)).a_, f_field_at_957(F->up, F->rt_962, F->k_963)))) {
F->result_ = (*(P174)rt_nil_check(F->it_2547)).b_;
goto ret_;
}
F->lab_2548 = (*(P174)rt_nil_check(F->lab_2548)).next_;
}
L_end_2551: ;
}
F->it_2547 = (*(P174)rt_nil_check(F->it_2547)).next_;
}
L_end_2550: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_arm_holds_969(struct f_greenc_1fr *up_, P174 arm_966, rt_int v_967, int *res_968) {
  struct f_arm_holds_969fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->arm_966 = arm_966;
F->v_967 = v_967;
F->res_968 = res_968;
F->l_2552 = NULL;
F->l_2552 = (*(P174)rt_nil_check(F->arm_966)).a_;
F->lo_2553 = INT64_MIN;
F->hi_2554 = INT64_MIN;
F->ok_2555 = INT_MIN;
(*F->res_968) = 0;
while ((F->l_2552 != NULL)) {
f_static_choice_986(F->up, (*(P174)rt_nil_check(F->l_2552)).a_, &F->lo_2553, &F->ok_2555);
 (void)rt_range(F->ok_2555, 0, 1);
F->hi_2554 = G_NV(F->lo_2553);
if (((*(P174)rt_nil_check(F->l_2552)).b_ != NULL)) {
f_static_choice_986(F->up, (*(P174)rt_nil_check(F->l_2552)).b_, &F->hi_2554, &F->ok_2555);
 (void)rt_range(F->ok_2555, 0, 1);
}
if (((F->v_967 >= G_NV(F->lo_2553)) && (F->v_967 <= G_NV(F->hi_2554)))) {
(*F->res_968) = 1;
}
F->l_2552 = (*(P174)rt_nil_check(F->l_2552)).next_;
}
L_end_2556: ;
ret_:

  return;
}

static void f_record_aggregate_973(struct f_greenc_1fr *up_, P174 e_970, P122 rt_971, P140 *r_972) {
  struct f_record_aggregate_973fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_970 = e_970;
F->rt_971 = rt_971;
F->r_972 = r_972;
F->it_2557 = NULL;
F->it_2557 = (*(P174)rt_nil_check(F->e_970)).a_;
F->lab_2558 = NULL;
F->vn_2559 = NULL;
F->a_2560 = NULL;
F->f_2561 = NULL;
F->g_2562 = NULL;
F->n_2563 = INT64_MIN;
F->n_2563 = f_field_count_488(F->up, F->rt_971);
F->done_2565.lo = ((rt_int)1LL); F->done_2565.hi = ((rt_int)200LL);
F->done_2565.lo2 = 1; F->done_2565.hi2 = 1;
F->done_2565.p = rt_alloc(sizeof(int) * (size_t)G_CNT(F->done_2565));
for (rt_int i2566 = 0; i2566 < G_CNT(F->done_2565); i2566++) F->done_2565.p[i2566] = INT_MIN;
F->active_2567.lo = ((rt_int)1LL); F->active_2567.hi = ((rt_int)200LL);
F->active_2567.lo2 = 1; F->active_2567.hi2 = 1;
F->active_2567.p = rt_alloc(sizeof(int) * (size_t)G_CNT(F->active_2567));
for (rt_int i2568 = 0; i2568 < G_CNT(F->active_2567); i2568++) F->active_2567.p[i2568] = INT_MIN;
F->dvs_2570.lo = ((rt_int)1LL); F->dvs_2570.hi = ((rt_int)200LL);
F->dvs_2570.lo2 = 1; F->dvs_2570.hi2 = 1;
F->dvs_2570.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->dvs_2570));
for (rt_int i2571 = 0; i2571 < G_CNT(F->dvs_2570); i2571++) F->dvs_2570.p[i2571] = INT64_MIN;
F->order_2573.lo = ((rt_int)1LL); F->order_2573.hi = ((rt_int)200LL);
F->order_2573.lo2 = 1; F->order_2573.hi2 = 1;
F->order_2573.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->order_2573));
for (rt_int i2574 = 0; i2574 < G_CNT(F->order_2573); i2574++) F->order_2573.p[i2574] = INT64_MIN;
F->norder_2575 = INT64_MIN;
F->norder_2575 = ((rt_int)0LL);
F->nung_2576 = INT64_MIN;
F->nung_2576 = ((rt_int)0LL);
F->k_2577 = INT64_MIN;
F->k_2577 = ((rt_int)0LL);
F->d_2578 = INT64_MIN;
F->d_2578 = ((rt_int)0LL);
F->npos_2579 = INT64_MIN;
F->npos_2579 = ((rt_int)0LL);
F->saved_2580 = NULL;
F->saved_2580 = F->up->code_136;
F->ct_2581 = NULL;
F->tmp_2582 = NULL;
F->parts_2583 = NULL;
F->named_2584 = INT_MIN;
F->named_2584 = 0;
F->ok_2585 = INT_MIN;
F->ok_2585 = 0;
F->holds_2586 = INT_MIN;
F->holds_2586 = 0;
if ((G_NV((*(P122)rt_nil_check(F->rt_971)).priv_) && (!f_inside_package_1050(F->up, (*(P122)rt_nil_check(F->rt_971)).decl_)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_970)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("an aggregate of private type ", 29), f_kind_name_482(F->up, F->rt_971)), rt_g_lit(" is not allowed here (RM79 7.4)", 31)));
}
if ((G_NV(F->n_2563) > ((rt_int)200LL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_970)).line_), rt_g_lit("a record of more than 200 components", 36));
}
F->f_2561 = (*(P122)rt_nil_check(F->rt_971)).fields_;
{ rt_int lo2589 = ((rt_int)1LL), hi2590 = G_NV(F->n_2563);
for (rt_int it2591 = lo2589; it2591 <= hi2590; it2591++) {
F->i_2588 = it2591;
(*({ A2564 *ix2592 = &(F->done_2565); &ix2592->p[rt_index(F->i_2588, ix2592->lo, ix2592->hi) - ix2592->lo]; })) = 0;
(*({ A2564 *ix2593 = &(F->active_2567); &ix2593->p[rt_index(F->i_2588, ix2593->lo, ix2593->hi) - ix2593->lo]; })) = ((*(P1830)rt_nil_check(F->f_2561)).guard_ == NULL);
if (G_NV(({ A2564 ix2594 = F->active_2567; ix2594.p[rt_index(F->i_2588, ix2594.lo, ix2594.hi) - ix2594.lo]; }))) {
F->norder_2575 = rt_add(G_NV(F->norder_2575), ((rt_int)1LL));
(*({ A2572 *ix2595 = &(F->order_2573); &ix2595->p[rt_index(G_NV(F->norder_2575), ix2595->lo, ix2595->hi) - ix2595->lo]; })) = F->i_2588;
}
F->f_2561 = (*(P1830)rt_nil_check(F->f_2561)).next_;
}
}
L_end_2587: ;
F->nung_2576 = G_NV(F->norder_2575);
{ rt_int lo2598 = ((rt_int)1LL), hi2599 = G_NV(F->nung_2576);
for (rt_int it2600 = lo2598; it2600 <= hi2599; it2600++) {
F->p_2597 = it2600;
F->f_2561 = f_field_at_957(F->up, F->rt_971, G_NV(({ A2572 ix2602 = F->order_2573; ix2602.p[rt_index(F->p_2597, ix2602.lo, ix2602.hi) - ix2602.lo]; })));
if (G_NV((*(P1830)rt_nil_check(F->f_2561)).is_discr_)) {
F->vn_2559 = f_item_for_965(F->up, F->e_970, F->rt_971, G_NV(({ A2572 ix2604 = F->order_2573; ix2604.p[rt_index(F->p_2597, ix2604.lo, ix2604.hi) - ix2604.lo]; })), F->p_2597);
if ((F->vn_2559 == NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_970)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("no value for discriminant ", 26), (*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_2561)).name_))), rt_g_lit(" (RM79 3.7.3)", 13)));
}
f_static_choice_986(F->up, F->vn_2559, &(*({ A2569 *ix2608 = &(F->dvs_2570); &ix2608->p[rt_index(G_NV(({ A2572 ix2607 = F->order_2573; ix2607.p[rt_index(F->p_2597, ix2607.lo, ix2607.hi) - ix2607.lo]; })), ix2608->lo, ix2608->hi) - ix2608->lo]; })), &F->ok_2585);
 (void)rt_range(F->ok_2585, 0, 1);
if (((!G_NV(F->ok_2585)) && f_is_enum_lit_788(F->up, F->vn_2559))) {
F->ok_2585 = 1;
(*({ A2569 *ix2610 = &(F->dvs_2570); &ix2610->p[rt_index(G_NV(({ A2572 ix2609 = F->order_2573; ix2609.p[rt_index(F->p_2597, ix2609.lo, ix2609.hi) - ix2609.lo]; })), ix2610->lo, ix2610->hi) - ix2610->lo]; })) = G_NV((*(P117)rt_nil_check(f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->vn_2559)).name_))))).mvalue_);
}
if (((!G_NV(F->ok_2585)) && ((*(P122)rt_nil_check(F->rt_971)).fields_ != NULL))) {
F->g_2562 = NULL;
F->d_2578 = ((rt_int)0LL);
F->a_2560 = NULL;
F->f_2561 = (*(P122)rt_nil_check(F->rt_971)).fields_;
while ((F->f_2561 != NULL)) {
F->g_2562 = (*(P1830)rt_nil_check(F->f_2561)).guard_;
while ((F->g_2562 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P1955)rt_nil_check(F->g_2562)).disc_)), (*(P140)rt_nil_check((*(P1830)rt_nil_check(f_field_at_957(F->up, F->rt_971, G_NV(({ A2572 ix2614 = F->order_2573; ix2614.p[rt_index(F->p_2597, ix2614.lo, ix2614.hi) - ix2614.lo]; }))))).name_)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_970)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the value of discriminant ", 26), (*(P140)rt_nil_check((*(P1955)rt_nil_check(F->g_2562)).disc_))), rt_g_lit(" in an aggregate is static (RM79 3.7.3)", 39)));
}
F->g_2562 = (*(P1955)rt_nil_check(F->g_2562)).next_;
}
L_end_2612: ;
F->f_2561 = (*(P1830)rt_nil_check(F->f_2561)).next_;
}
L_end_2611: ;
}
}
}
}
L_end_2596: ;
F->f_2561 = (*(P122)rt_nil_check(F->rt_971)).fields_;
{ rt_int lo2617 = ((rt_int)1LL), hi2618 = G_NV(F->n_2563);
for (rt_int it2619 = lo2617; it2619 <= hi2618; it2619++) {
F->i_2616 = it2619;
if (((*(P1830)rt_nil_check(F->f_2561)).guard_ != NULL)) {
F->holds_2586 = 1;
F->g_2562 = (*(P1830)rt_nil_check(F->f_2561)).guard_;
while ((F->g_2562 != NULL)) {
F->d_2578 = f_field_index_976(F->up, F->rt_971, (*(P140)rt_nil_check((*(P1955)rt_nil_check(F->g_2562)).disc_)));
if ((G_NV((*(P174)rt_nil_check((*(P1955)rt_nil_check(F->g_2562)).arm_)).flag_) == ((rt_int)1LL))) {
F->a_2560 = (*(P174)rt_nil_check((*(P1955)rt_nil_check(F->g_2562)).variant_)).b_;
while ((F->a_2560 != NULL)) {
if ((F->a_2560 != (*(P1955)rt_nil_check(F->g_2562)).arm_)) {
f_arm_holds_969(F->up, F->a_2560, G_NV(({ A2569 ix2623 = F->dvs_2570; ix2623.p[rt_index(G_NV(F->d_2578), ix2623.lo, ix2623.hi) - ix2623.lo]; })), &F->ok_2585);
 (void)rt_range(F->ok_2585, 0, 1);
if (G_NV(F->ok_2585)) {
F->holds_2586 = 0;
}
}
F->a_2560 = (*(P174)rt_nil_check(F->a_2560)).next_;
}
L_end_2621: ;
} else {
f_arm_holds_969(F->up, (*(P1955)rt_nil_check(F->g_2562)).arm_, G_NV(({ A2569 ix2625 = F->dvs_2570; ix2625.p[rt_index(G_NV(F->d_2578), ix2625.lo, ix2625.hi) - ix2625.lo]; })), &F->ok_2585);
 (void)rt_range(F->ok_2585, 0, 1);
if ((!G_NV(F->ok_2585))) {
F->holds_2586 = 0;
}
}
F->g_2562 = (*(P1955)rt_nil_check(F->g_2562)).next_;
}
L_end_2620: ;
if (G_NV(F->holds_2586)) {
(*({ A2564 *ix2626 = &(F->active_2567); &ix2626->p[rt_index(F->i_2616, ix2626->lo, ix2626->hi) - ix2626->lo]; })) = 1;
F->norder_2575 = rt_add(G_NV(F->norder_2575), ((rt_int)1LL));
(*({ A2572 *ix2627 = &(F->order_2573); &ix2627->p[rt_index(G_NV(F->norder_2575), ix2627->lo, ix2627->hi) - ix2627->lo]; })) = F->i_2616;
}
}
F->f_2561 = (*(P1830)rt_nil_check(F->f_2561)).next_;
}
}
L_end_2615: ;
f_ctype_491(F->up, F->rt_971, &F->ct_2581);
f_new_name_230(F->up, rt_g_lit("ag", 2), &F->tmp_2582);
F->up->code_136 = f_new_buffer_249(F->up);
while ((F->it_2557 != NULL)) {
if (((*(P174)rt_nil_check(F->it_2557)).a_ == NULL)) {
if (G_NV(F->named_2584)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_970)).line_), rt_g_lit("positional associations come before named ones (RM79 3.6.2)", 59));
}
F->npos_2579 = rt_add(G_NV(F->npos_2579), ((rt_int)1LL));
if ((G_NV(F->npos_2579) > G_NV(F->norder_2575))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_970)).line_), cat_rt_gstr(rt_g_lit("too many components in an aggregate of ", 39), f_kind_name_482(F->up, F->rt_971)));
}
F->k_2577 = G_NV(({ A2572 ix2629 = F->order_2573; ix2629.p[rt_index(G_NV(F->npos_2579), ix2629.lo, ix2629.hi) - ix2629.lo]; }));
f_agg_component_982(F->up, (*(P140)rt_nil_check(F->tmp_2582)), F->rt_971, G_NV(F->k_2577), (*(P174)rt_nil_check(F->it_2557)).b_, G_NV((*(P174)rt_nil_check(F->e_970)).line_));
(*({ A2564 *ix2630 = &(F->done_2565); &ix2630->p[rt_index(G_NV(F->k_2577), ix2630->lo, ix2630->hi) - ix2630->lo]; })) = 1;
} else {
F->named_2584 = 1;
F->lab_2558 = (*(P174)rt_nil_check(F->it_2557)).a_;
while ((F->lab_2558 != NULL)) {
if ((G_NV((*(P174)rt_nil_check(F->lab_2558)).flag_) == ((rt_int)1LL))) {
if (((*(P174)rt_nil_check(F->it_2557)).next_ != NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_970)).line_), rt_g_lit("others comes last in an aggregate (RM79 3.6.2)", 46));
}
{ rt_int lo2634 = ((rt_int)1LL), hi2635 = G_NV(F->n_2563);
for (rt_int it2636 = lo2634; it2636 <= hi2635; it2636++) {
F->i_2633 = it2636;
if ((G_NV(({ A2564 ix2637 = F->active_2567; ix2637.p[rt_index(F->i_2633, ix2637.lo, ix2637.hi) - ix2637.lo]; })) && (!G_NV(({ A2564 ix2638 = F->done_2565; ix2638.p[rt_index(F->i_2633, ix2638.lo, ix2638.hi) - ix2638.lo]; }))))) {
f_agg_component_982(F->up, (*(P140)rt_nil_check(F->tmp_2582)), F->rt_971, F->i_2633, (*(P174)rt_nil_check(F->it_2557)).b_, G_NV((*(P174)rt_nil_check(F->e_970)).line_));
(*({ A2564 *ix2639 = &(F->done_2565); &ix2639->p[rt_index(F->i_2633, ix2639->lo, ix2639->hi) - ix2639->lo]; })) = 1;
}
}
}
L_end_2632: ;
} else {
if (((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2558)).a_)).kind_) != ((rt_int)5LL)) || ((*(P174)rt_nil_check(F->lab_2558)).b_ != NULL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_970)).line_), rt_g_lit("a choice in a record aggregate names a component (RM79 3.6.2)", 61));
}
F->k_2577 = f_field_index_976(F->up, F->rt_971, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2558)).a_)).name_)));
if ((G_NV(F->k_2577) == ((rt_int)0LL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_970)).line_), cat_rt_gstr(cat_rt_gstr(f_kind_name_482(F->up, F->rt_971), rt_g_lit(" has no component ", 18)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2558)).a_)).name_))));
}
if ((!G_NV(({ A2564 ix2640 = F->active_2567; ix2640.p[rt_index(G_NV(F->k_2577), ix2640.lo, ix2640.hi) - ix2640.lo]; })))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_970)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("component ", 10), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2558)).a_)).name_))), rt_g_lit(" is not in the variant selected (RM79 3.7.3)", 44)));
}
if (G_NV(({ A2564 ix2641 = F->done_2565; ix2641.p[rt_index(G_NV(F->k_2577), ix2641.lo, ix2641.hi) - ix2641.lo]; }))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_970)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("component ", 10), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2558)).a_)).name_))), rt_g_lit(" is given twice in an aggregate (RM79 3.6.2)", 44)));
}
f_agg_component_982(F->up, (*(P140)rt_nil_check(F->tmp_2582)), F->rt_971, G_NV(F->k_2577), (*(P174)rt_nil_check(F->it_2557)).b_, G_NV((*(P174)rt_nil_check(F->e_970)).line_));
(*({ A2564 *ix2642 = &(F->done_2565); &ix2642->p[rt_index(G_NV(F->k_2577), ix2642->lo, ix2642->hi) - ix2642->lo]; })) = 1;
}
F->lab_2558 = (*(P174)rt_nil_check(F->lab_2558)).next_;
}
L_end_2631: ;
}
F->it_2557 = (*(P174)rt_nil_check(F->it_2557)).next_;
}
L_end_2628: ;
F->f_2561 = (*(P122)rt_nil_check(F->rt_971)).fields_;
{ rt_int lo2645 = ((rt_int)1LL), hi2646 = G_NV(F->n_2563);
for (rt_int it2647 = lo2645; it2647 <= hi2646; it2647++) {
F->i_2644 = it2647;
if ((G_NV(({ A2564 ix2648 = F->active_2567; ix2648.p[rt_index(F->i_2644, ix2648.lo, ix2648.hi) - ix2648.lo]; })) && (!G_NV(({ A2564 ix2649 = F->done_2565; ix2649.p[rt_index(F->i_2644, ix2649.lo, ix2649.hi) - ix2649.lo]; }))))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_970)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("an aggregate gives every component of ", 38), f_kind_name_482(F->up, F->rt_971)), rt_g_lit(": ", 2)), (*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_2561)).name_))), rt_g_lit(" is missing (RM79 3.6.2)", 24)));
}
F->f_2561 = (*(P1830)rt_nil_check(F->f_2561)).next_;
}
}
L_end_2643: ;
f_captured_954(F->up, F->up->code_136, &F->parts_2583);
F->up->code_136 = F->saved_2580;
(*F->r_972) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2581))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2582))), one_rt_gstr(59)), (*(P140)rt_nil_check(F->parts_2583))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2582))), rt_g_lit("; })", 4)));
ret_:

  return;
}

static rt_int f_field_index_976(struct f_greenc_1fr *up_, P122 rt_974, rt_gstr name_975) {
  struct f_field_index_976fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->rt_974 = rt_974;
F->name_975 = cp_rt_gstr(name_975);
F->f_2650 = NULL;
F->f_2650 = (*(P122)rt_nil_check(F->rt_974)).fields_;
F->k_2651 = INT64_MIN;
F->k_2651 = ((rt_int)1LL);
while ((F->f_2650 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_2650)).name_)), F->name_975)) {
F->result_ = G_NV(F->k_2651);
goto ret_;
}
F->k_2651 = rt_add(G_NV(F->k_2651), ((rt_int)1LL));
F->f_2650 = (*(P1830)rt_nil_check(F->f_2650)).next_;
}
L_end_2652: ;
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_agg_component_982(struct f_greenc_1fr *up_, rt_gstr tmp_977, P122 rt_978, rt_int k_979, P174 v_980, rt_int line_981) {
  struct f_agg_component_982fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->tmp_977 = cp_rt_gstr(tmp_977);
F->rt_978 = rt_978;
F->k_979 = k_979;
F->v_980 = v_980;
F->line_981 = line_981;
F->f_2653 = NULL;
F->f_2653 = (*(P122)rt_nil_check(F->rt_978)).fields_;
F->vt_2654 = NULL;
F->x_2655 = NULL;
F->y_2656 = NULL;
{ rt_int lo2659 = ((rt_int)2LL), hi2660 = F->k_979;
for (rt_int it2661 = lo2659; it2661 <= hi2660; it2661++) {
F->i_2658 = it2661;
F->f_2653 = (*(P1830)rt_nil_check(F->f_2653)).next_;
}
}
L_end_2657: ;
f_gexpr_805(F->up, F->v_980, (*(P1830)rt_nil_check(F->f_2653)).t_, &F->vt_2654, &F->x_2655);
f_check_type_486(F->up, F->vt_2654, (*(P1830)rt_nil_check(F->f_2653)).t_, F->line_981);
if (((G_NV((*(P122)rt_nil_check((*(P1830)rt_nil_check(F->f_2653)).t_)).kind_) == ((rt_int)6LL)) && (!f_bounded_474(F->up, (*(P1830)rt_nil_check(F->f_2653)).c_)))) {
f_copy_code_623(F->up, (*(P1830)rt_nil_check(F->f_2653)).t_, (*(P140)rt_nil_check(F->x_2655)), &F->y_2656);
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->tmp_977, one_rt_gstr(46)), f_c_field_244(F->up, (*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_2653)).name_)))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->y_2656))), one_rt_gstr(59)));
} else {
if (f_composite_613(F->up, (*(P1830)rt_nil_check(F->f_2653)).t_)) {
f_init_storage_611(F->up, cat_rt_gstr(cat_rt_gstr(F->tmp_977, one_rt_gstr(46)), f_c_field_244(F->up, (*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_2653)).name_)))), (*(P1830)rt_nil_check(F->f_2653)).t_, (*(P1830)rt_nil_check(F->f_2653)).c_);
}
f_assign_code_619(F->up, cat_rt_gstr(cat_rt_gstr(F->tmp_977, one_rt_gstr(46)), f_c_field_244(F->up, (*(P140)rt_nil_check((*(P1830)rt_nil_check(F->f_2653)).name_)))), (*(P1830)rt_nil_check(F->f_2653)).t_, (*(P140)rt_nil_check(F->x_2655)), (*(P1830)rt_nil_check(F->f_2653)).c_, &F->y_2656);
f_emit_254(F->up, (*(P140)rt_nil_check(F->y_2656)));
}
ret_:

  return;
}

static void f_static_choice_986(struct f_greenc_1fr *up_, P174 x_983, rt_int *v_984, int *ok_985) {
  struct f_static_choice_986fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_983 = x_983;
F->v_984 = v_984;
F->ok_985 = ok_985;
if (f_is_char_lit_786(F->up, F->x_983)) {
(*F->ok_985) = 1;
(*F->v_984) = rt_sub(((rt_int)(G_NV(({ rt_gstr ix2662 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_983)).name_)); ix2662.p[rt_index(((rt_int)1LL), ix2662.lo, ix2662.hi) - ix2662.lo]; }))) + 1), ((rt_int)1LL));
goto ret_;
}
f_manifest_503(F->up, F->x_983, &(*F->v_984), &(*F->ok_985));
 (void)rt_range((*F->ok_985), 0, 1);
ret_:

  return;
}

static void f_array_aggregate_991(struct f_greenc_1fr *up_, P174 e_987, P122 arrt_988, P140 bounds_989, P140 *r_990) {
  struct f_array_aggregate_991fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_987 = e_987;
F->arrt_988 = arrt_988;
F->bounds_989 = bounds_989;
F->r_990 = r_990;
F->it_2663 = NULL;
F->it_2663 = (*(P174)rt_nil_check(F->e_987)).a_;
F->lab_2664 = NULL;
F->others_it_2665 = NULL;
F->np_2666 = INT64_MIN;
F->np_2666 = ((rt_int)0LL);
F->nnamed_2667 = INT64_MIN;
F->nnamed_2667 = ((rt_int)0LL);
F->clo_2668 = INT64_MIN;
F->clo_2668 = ((rt_int)0LL);
F->chi_2669 = INT64_MIN;
F->chi_2669 = ((rt_int)0LL);
F->v1_2670 = INT64_MIN;
F->v1_2670 = ((rt_int)0LL);
F->v2_2671 = INT64_MIN;
F->v2_2671 = ((rt_int)0LL);
F->all_static_2672 = INT_MIN;
F->all_static_2672 = 1;
F->ok_2673 = INT_MIN;
F->ok_2673 = 1;
F->ok2_2674 = INT_MIN;
F->ok2_2674 = 1;
F->first_choice_2675 = INT_MIN;
F->first_choice_2675 = 1;
F->vt_2676 = NULL;
F->ct_2677 = NULL;
F->et_2678 = NULL;
F->tmp_2679 = NULL;
F->lo_2680 = NULL;
F->hi_2681 = NULL;
F->v_2682 = NULL;
F->x_2683 = NULL;
F->parts_2684 = NULL;
F->fill_2685 = NULL;
F->rowb_2686 = NULL;
F->key_2687 = NULL;
F->khi_2688 = NULL;
F->saved_2689 = NULL;
F->saved_2689 = F->up->code_136;
f_ctype_491(F->up, F->arrt_988, &F->ct_2677);
f_elem_ctype_565(F->up, (*(P122)rt_nil_check(F->arrt_988)).elem_, &F->et_2678);
f_new_name_230(F->up, rt_g_lit("ag", 2), &F->tmp_2679);
while ((F->it_2663 != NULL)) {
if (((*(P174)rt_nil_check(F->it_2663)).a_ == NULL)) {
if (((G_NV(F->nnamed_2667) > ((rt_int)0LL)) || (F->others_it_2665 != NULL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_987)).line_), rt_g_lit("positional associations come before named ones (RM79 3.6.2)", 59));
}
F->np_2666 = rt_add(G_NV(F->np_2666), ((rt_int)1LL));
} else if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->it_2663)).a_)).flag_) == ((rt_int)1LL))) {
if ((((*(P174)rt_nil_check(F->it_2663)).next_ != NULL) || ((*(P174)rt_nil_check((*(P174)rt_nil_check(F->it_2663)).a_)).next_ != NULL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_987)).line_), rt_g_lit("others comes last in an aggregate (RM79 3.6.2)", 46));
}
F->others_it_2665 = F->it_2663;
} else {
F->nnamed_2667 = rt_add(G_NV(F->nnamed_2667), ((rt_int)1LL));
F->lab_2664 = (*(P174)rt_nil_check(F->it_2663)).a_;
while ((F->lab_2664 != NULL)) {
f_static_choice_986(F->up, (*(P174)rt_nil_check(F->lab_2664)).a_, &F->v1_2670, &F->ok_2673);
 (void)rt_range(F->ok_2673, 0, 1);
F->v2_2671 = G_NV(F->v1_2670);
if (((*(P174)rt_nil_check(F->lab_2664)).b_ != NULL)) {
f_static_choice_986(F->up, (*(P174)rt_nil_check(F->lab_2664)).b_, &F->v2_2671, &F->ok2_2674);
 (void)rt_range(F->ok2_2674, 0, 1);
F->ok_2673 = (G_NV(F->ok_2673) && G_NV(F->ok2_2674));
}
if ((!G_NV(F->ok_2673))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_987)).line_), rt_g_lit("a choice in an array aggregate is static (RM79 3.6.2)", 53));
}
if ((G_NV(F->first_choice_2675) || (G_NV(F->v1_2670) < G_NV(F->clo_2668)))) {
F->clo_2668 = G_NV(F->v1_2670);
}
if ((G_NV(F->first_choice_2675) || (G_NV(F->v2_2671) > G_NV(F->chi_2669)))) {
F->chi_2669 = G_NV(F->v2_2671);
}
F->first_choice_2675 = 0;
F->lab_2664 = (*(P174)rt_nil_check(F->lab_2664)).next_;
}
L_end_2691: ;
}
F->it_2663 = (*(P174)rt_nil_check(F->it_2663)).next_;
}
L_end_2690: ;
if (((G_NV(F->np_2666) > ((rt_int)0LL)) && (G_NV(F->nnamed_2667) > ((rt_int)0LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_987)).line_), rt_g_lit("an array aggregate is positional or named, with others last (RM79 3.6.2)", 72));
}
if ((G_NV(F->nnamed_2667) > ((rt_int)0LL))) {
f_check_choices_999(F->up, F->e_987, F->arrt_988, (F->others_it_2665 != NULL));
}
if (((F->others_it_2665 == NULL) && (G_NV(F->np_2666) > ((rt_int)0LL)))) {
f_first_index_568(F->up, F->arrt_988, &F->lo_2680);
F->hi_2681 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->lo_2680))), rt_g_lit(" + ", 3)), rt_g_s2g(rt_str_of_int(rt_sub(G_NV(F->np_2666), ((rt_int)1LL))))), one_rt_gstr(41)));
} else if (((F->others_it_2665 == NULL) && (G_NV(F->nnamed_2667) > ((rt_int)0LL)))) {
F->lo_2680 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->clo_2668)))), rt_g_lit("LL)", 3)));
F->hi_2681 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->chi_2669)))), rt_g_lit("LL)", 3)));
} else if ((((*(P122)rt_nil_check(F->arrt_988)).tcons_ != NULL) && ((*(P178)rt_nil_check((*(P122)rt_nil_check(F->arrt_988)).tcons_)).hi_ != NULL))) {
F->lo_2680 = (*(P178)rt_nil_check((*(P122)rt_nil_check(F->arrt_988)).tcons_)).lo_;
F->hi_2681 = (*(P178)rt_nil_check((*(P122)rt_nil_check(F->arrt_988)).tcons_)).hi_;
} else if ((F->bounds_989 != NULL)) {
F->lo_2680 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->bounds_989))), rt_g_lit(").lo", 4)));
F->hi_2681 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->bounds_989))), rt_g_lit(").hi", 4)));
} else {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_987)).line_), rt_g_lit("an aggregate with others needs bounds from its context (RM79 3.6.2)", 67));
}
if (((G_NV((*(P122)rt_nil_check(F->arrt_988)).dims_) > ((rt_int)1LL)) && (F->bounds_989 != NULL))) {
F->rowb_2686 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((struct { rt_int lo, hi; }){ (", 31), (*(P140)rt_nil_check(F->bounds_989))), rt_g_lit(").lo2, (", 8)), (*(P140)rt_nil_check(F->bounds_989))), rt_g_lit(").hi2 })", 8)));
}
F->up->code_136 = f_new_buffer_249(F->up);
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->tmp_2679)), rt_g_lit(".lo = ", 6)), (*(P140)rt_nil_check(F->lo_2680))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->tmp_2679))), rt_g_lit(".hi = ", 6)), (*(P140)rt_nil_check(F->hi_2681))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->tmp_2679))), rt_g_lit(".lo2 = ", 7)), (*(P140)rt_nil_check(F->tmp_2679))), rt_g_lit(".hi2 = 1;", 9)));
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->tmp_2679)), rt_g_lit(".p = rt_alloc(sizeof(", 21)), (*(P140)rt_nil_check(F->et_2678))), rt_g_lit(") * (size_t)(G_CNT(", 19)), (*(P140)rt_nil_check(F->tmp_2679))), rt_g_lit(") + 1));", 8)));
if (((G_NV(F->np_2666) > ((rt_int)0LL)) && (F->others_it_2665 == NULL))) {
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (G_CNT(", 10), (*(P140)rt_nil_check(F->tmp_2679))), rt_g_lit(") != ", 5)), rt_g_s2g(rt_str_of_int(G_NV(F->np_2666)))), rt_g_lit(") rt_raise(RT_X_SUBSCRIPT);", 27)));
} else if ((G_NV(F->np_2666) > ((rt_int)0LL))) {
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (G_CNT(", 10), (*(P140)rt_nil_check(F->tmp_2679))), rt_g_lit(") < ", 4)), rt_g_s2g(rt_str_of_int(G_NV(F->np_2666)))), rt_g_lit(") rt_raise(RT_X_SUBSCRIPT);", 27)));
}
if ((F->others_it_2665 != NULL)) {
F->up->agg_bounds_181 = F->rowb_2686;
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->others_it_2665)).b_, (*(P122)rt_nil_check(F->arrt_988)).elem_, &F->vt_2676, &F->v_2682);
F->up->agg_bounds_181 = NULL;
f_check_type_486(F->up, F->vt_2676, (*(P122)rt_nil_check(F->arrt_988)).elem_, G_NV((*(P174)rt_nil_check(F->e_987)).line_));
f_ctype_491(F->up, (*(P122)rt_nil_check(F->arrt_988)).elem_, &F->x_2683);
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P140)rt_nil_check(F->x_2683))), rt_g_lit(" o_ = ", 6)), (*(P140)rt_nil_check(F->v_2682))), rt_g_lit("; for (rt_int k_ = 0; k_ < G_CNT(", 33)), (*(P140)rt_nil_check(F->tmp_2679))), rt_g_lit("); k_++) {", 10)));
f_copy_code_623(F->up, (*(P122)rt_nil_check(F->arrt_988)).elem_, rt_g_lit("o_", 2), &F->x_2683);
f_element_store_995(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->tmp_2679)), rt_g_lit(".p[k_]", 6)), F->arrt_988, (*(P140)rt_nil_check(F->x_2683)));
f_emit_254(F->up, rt_g_lit("} }", 3));
}
F->it_2663 = (*(P174)rt_nil_check(F->e_987)).a_;
F->np_2666 = ((rt_int)0LL);
while (((F->it_2663 != NULL) && (F->it_2663 != F->others_it_2665))) {
F->up->agg_bounds_181 = F->rowb_2686;
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->it_2663)).b_, (*(P122)rt_nil_check(F->arrt_988)).elem_, &F->vt_2676, &F->v_2682);
F->up->agg_bounds_181 = NULL;
f_check_type_486(F->up, F->vt_2676, (*(P122)rt_nil_check(F->arrt_988)).elem_, G_NV((*(P174)rt_nil_check(F->e_987)).line_));
f_copy_code_623(F->up, (*(P122)rt_nil_check(F->arrt_988)).elem_, (*(P140)rt_nil_check(F->v_2682)), &F->x_2683);
if (((*(P174)rt_nil_check(F->it_2663)).a_ == NULL)) {
f_element_store_995(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->tmp_2679)), rt_g_lit(".p[", 3)), rt_g_s2g(rt_str_of_int(G_NV(F->np_2666)))), one_rt_gstr(93)), F->arrt_988, (*(P140)rt_nil_check(F->x_2683)));
F->np_2666 = rt_add(G_NV(F->np_2666), ((rt_int)1LL));
} else {
f_new_name_230(F->up, rt_g_lit("av", 2), &F->v_2682);
f_ctype_491(F->up, (*(P122)rt_nil_check(F->arrt_988)).elem_, &F->parts_2684);
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P140)rt_nil_check(F->parts_2684))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->v_2682))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2683))), one_rt_gstr(59)));
F->lab_2664 = (*(P174)rt_nil_check(F->it_2663)).a_;
while ((F->lab_2664 != NULL)) {
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->lab_2664)).a_, (*(P122)rt_nil_check(F->arrt_988)).idx_, &F->vt_2676, &F->key_2687);
f_check_type_486(F->up, F->vt_2676, (*(P122)rt_nil_check(F->arrt_988)).idx_, G_NV((*(P174)rt_nil_check(F->e_987)).line_));
F->khi_2688 = F->key_2687;
if (((*(P174)rt_nil_check(F->lab_2664)).b_ != NULL)) {
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->lab_2664)).b_, (*(P122)rt_nil_check(F->arrt_988)).idx_, &F->vt_2676, &F->khi_2688);
f_check_type_486(F->up, F->vt_2676, (*(P122)rt_nil_check(F->arrt_988)).idx_, G_NV((*(P174)rt_nil_check(F->e_987)).line_));
}
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = ", 17), (*(P140)rt_nil_check(F->key_2687))), rt_g_lit("; k_ <= ", 8)), (*(P140)rt_nil_check(F->khi_2688))), rt_g_lit("; k_++) {", 9)));
f_copy_code_623(F->up, (*(P122)rt_nil_check(F->arrt_988)).elem_, (*(P140)rt_nil_check(F->v_2682)), &F->x_2683);
f_element_store_995(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->tmp_2679)), rt_g_lit(".p[rt_index(k_, ", 16)), (*(P140)rt_nil_check(F->tmp_2679))), rt_g_lit(".lo, ", 5)), (*(P140)rt_nil_check(F->tmp_2679))), rt_g_lit(".hi) - ", 7)), (*(P140)rt_nil_check(F->tmp_2679))), rt_g_lit(".lo]", 4)), F->arrt_988, (*(P140)rt_nil_check(F->x_2683)));
f_emit_254(F->up, rt_g_lit("}", 1));
F->lab_2664 = (*(P174)rt_nil_check(F->lab_2664)).next_;
}
L_end_2693: ;
f_emit_254(F->up, rt_g_lit("}", 1));
}
F->it_2663 = (*(P174)rt_nil_check(F->it_2663)).next_;
}
L_end_2692: ;
if ((G_NV((*(P122)rt_nil_check(F->arrt_988)).dims_) > ((rt_int)1LL))) {
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (G_CNT(", 10), (*(P140)rt_nil_check(F->tmp_2679))), rt_g_lit(") > 0) { ", 9)), (*(P140)rt_nil_check(F->tmp_2679))), rt_g_lit(".lo2 = ", 7)), (*(P140)rt_nil_check(F->tmp_2679))), rt_g_lit(".p[0].lo; ", 10)), (*(P140)rt_nil_check(F->tmp_2679))), rt_g_lit(".hi2 = ", 7)), (*(P140)rt_nil_check(F->tmp_2679))), rt_g_lit(".p[0].hi; }", 11)));
}
f_captured_954(F->up, F->up->code_136, &F->parts_2684);
F->up->code_136 = F->saved_2689;
(*F->r_990) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2677))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2679))), one_rt_gstr(59)), (*(P140)rt_nil_check(F->parts_2684))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2679))), rt_g_lit("; })", 4)));
ret_:

  return;
}

static void f_element_store_995(struct f_greenc_1fr *up_, rt_gstr lv_992, P122 arrt_993, rt_gstr v_994) {
  struct f_element_store_995fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lv_992 = cp_rt_gstr(lv_992);
F->arrt_993 = arrt_993;
F->v_994 = cp_rt_gstr(v_994);
F->x_2694 = NULL;
if (((((*(P122)rt_nil_check(F->arrt_993)).elemcons_ != NULL) && ((*(P178)rt_nil_check((*(P122)rt_nil_check(F->arrt_993)).elemcons_)).lo_ != NULL)) && (!f_composite_613(F->up, (*(P122)rt_nil_check(F->arrt_993)).elem_)))) {
f_assign_code_619(F->up, F->lv_992, (*(P122)rt_nil_check(F->arrt_993)).elem_, F->v_994, (*(P122)rt_nil_check(F->arrt_993)).elemcons_, &F->x_2694);
f_emit_254(F->up, (*(P140)rt_nil_check(F->x_2694)));
} else {
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lv_992, rt_g_lit(" = ", 3)), F->v_994), one_rt_gstr(59)));
}
ret_:

  return;
}

static void f_check_choices_999(struct f_greenc_1fr *up_, P174 e_996, P122 arrt_997, int has_others_998) {
  struct f_check_choices_999fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_996 = e_996;
F->arrt_997 = arrt_997;
F->has_others_998 = has_others_998;
F->a_2695 = NULL;
F->b_2696 = NULL;
F->lab_2697 = NULL;
F->lab2_2698 = NULL;
F->lo1_2699 = INT64_MIN;
F->lo1_2699 = ((rt_int)0LL);
F->hi1_2700 = INT64_MIN;
F->hi1_2700 = ((rt_int)0LL);
F->lo2_2701 = INT64_MIN;
F->lo2_2701 = ((rt_int)0LL);
F->hi2_2702 = INT64_MIN;
F->hi2_2702 = ((rt_int)0LL);
F->count_2703 = INT64_MIN;
F->count_2703 = ((rt_int)0LL);
F->ok_2704 = INT_MIN;
F->a_2695 = (*(P174)rt_nil_check(F->e_996)).a_;
while ((F->a_2695 != NULL)) {
if ((((*(P174)rt_nil_check(F->a_2695)).a_ != NULL) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->a_2695)).a_)).flag_) != ((rt_int)1LL)))) {
F->lab_2697 = (*(P174)rt_nil_check(F->a_2695)).a_;
while ((F->lab_2697 != NULL)) {
f_static_choice_986(F->up, (*(P174)rt_nil_check(F->lab_2697)).a_, &F->lo1_2699, &F->ok_2704);
 (void)rt_range(F->ok_2704, 0, 1);
F->hi1_2700 = G_NV(F->lo1_2699);
if (((*(P174)rt_nil_check(F->lab_2697)).b_ != NULL)) {
f_static_choice_986(F->up, (*(P174)rt_nil_check(F->lab_2697)).b_, &F->hi1_2700, &F->ok_2704);
 (void)rt_range(F->ok_2704, 0, 1);
}
if ((G_NV(F->hi1_2700) >= G_NV(F->lo1_2699))) {
F->count_2703 = rt_add(G_NV(F->count_2703), rt_add(rt_sub(G_NV(F->hi1_2700), G_NV(F->lo1_2699)), ((rt_int)1LL)));
}
F->b_2696 = F->a_2695;
F->lab2_2698 = (*(P174)rt_nil_check(F->lab_2697)).next_;
while ((F->b_2696 != NULL)) {
if ((((*(P174)rt_nil_check(F->b_2696)).a_ != NULL) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->b_2696)).a_)).flag_) != ((rt_int)1LL)))) {
if ((F->b_2696 != F->a_2695)) {
F->lab2_2698 = (*(P174)rt_nil_check(F->b_2696)).a_;
}
while ((F->lab2_2698 != NULL)) {
f_static_choice_986(F->up, (*(P174)rt_nil_check(F->lab2_2698)).a_, &F->lo2_2701, &F->ok_2704);
 (void)rt_range(F->ok_2704, 0, 1);
F->hi2_2702 = G_NV(F->lo2_2701);
if (((*(P174)rt_nil_check(F->lab2_2698)).b_ != NULL)) {
f_static_choice_986(F->up, (*(P174)rt_nil_check(F->lab2_2698)).b_, &F->hi2_2702, &F->ok_2704);
 (void)rt_range(F->ok_2704, 0, 1);
}
if (((((G_NV(F->lo1_2699) <= G_NV(F->hi1_2700)) && (G_NV(F->lo2_2701) <= G_NV(F->hi2_2702))) && (G_NV(F->lo1_2699) <= G_NV(F->hi2_2702))) && (G_NV(F->lo2_2701) <= G_NV(F->hi1_2700)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_996)).line_), rt_g_lit("an index is given twice in an aggregate (RM79 3.6.2)", 52));
}
F->lab2_2698 = (*(P174)rt_nil_check(F->lab2_2698)).next_;
}
L_end_2708: ;
}
F->b_2696 = (*(P174)rt_nil_check(F->b_2696)).next_;
F->lab2_2698 = NULL;
}
L_end_2707: ;
F->lab_2697 = (*(P174)rt_nil_check(F->lab_2697)).next_;
}
L_end_2706: ;
}
F->a_2695 = (*(P174)rt_nil_check(F->a_2695)).next_;
}
L_end_2705: ;
if (((!F->has_others_998) && f_static_bounds_478(F->up, (*(P122)rt_nil_check(F->arrt_997)).tcons_))) {
if ((G_NV(F->count_2703) != rt_add(rt_sub(G_NV((*(P178)rt_nil_check((*(P122)rt_nil_check(F->arrt_997)).tcons_)).mhi_), G_NV((*(P178)rt_nil_check((*(P122)rt_nil_check(F->arrt_997)).tcons_)).mlo_)), ((rt_int)1LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_996)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the choices of an aggregate cover every index of ", 49), f_kind_name_482(F->up, F->arrt_997)), rt_g_lit(" once, or others is given (RM79 3.6.2)", 38)));
}
}
ret_:

  return;
}

static P174 f_actual_for_1003(struct f_greenc_1fr *up_, P174 args_1000, P1812 pm_1001, P1812 first_1002) {
  struct f_actual_for_1003fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->args_1000 = args_1000;
F->pm_1001 = pm_1001;
F->first_1002 = first_1002;
F->a_2709 = NULL;
F->a_2709 = F->args_1000;
F->p_2710 = NULL;
F->p_2710 = F->first_1002;
while (((F->a_2709 != NULL) && ((*(P174)rt_nil_check(F->a_2709)).formal_ == NULL))) {
if ((F->p_2710 == F->pm_1001)) {
F->result_ = F->a_2709;
goto ret_;
}
F->p_2710 = (*(P1812)rt_nil_check(F->p_2710)).next_;
F->a_2709 = (*(P174)rt_nil_check(F->a_2709)).next_;
}
L_end_2711: ;
while ((F->a_2709 != NULL)) {
if ((((*(P174)rt_nil_check(F->a_2709)).formal_ != NULL) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_2709)).formal_)), (*(P140)rt_nil_check((*(P1812)rt_nil_check(F->pm_1001)).name_))))) {
F->result_ = F->a_2709;
goto ret_;
}
F->a_2709 = (*(P174)rt_nil_check(F->a_2709)).next_;
}
L_end_2712: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_gcall_1008(struct f_greenc_1fr *up_, P174 e_1004, int is_stmt_1005, P122 *t_1006, P140 *r_1007) {
  struct f_gcall_1008fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1004 = e_1004;
F->is_stmt_1005 = is_stmt_1005;
F->t_1006 = t_1006;
F->r_1007 = r_1007;
F->fn_2713 = NULL;
F->fn_2713 = (*(P174)rt_nil_check(F->e_1004)).a_;
F->nm_2714 = NULL;
F->y_2715 = NULL;
F->args_2716 = NULL;
F->lv_2717 = NULL;
F->v_2718 = NULL;
F->ct_2719 = NULL;
F->x_2720 = NULL;
F->a_2721 = NULL;
F->pm_2722 = NULL;
F->lt_2723 = NULL;
F->vt_2724 = NULL;
F->lc_2725 = NULL;
F->ro_2726 = INT_MIN;
f_expanded_823(F->up, F->fn_2713, &F->nm_2714);
if ((F->nm_2714 != NULL)) {
F->fn_2713 = F->nm_2714;
} else if ((((G_NV((*(P174)rt_nil_check(F->fn_2713)).kind_) == ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2713)).a_)).kind_) == ((rt_int)5LL))) && f_is_type_name_784(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2713)).a_)).name_))))) {
if ((!f_type_attribute_782(F->up, (*(P117)rt_nil_check(f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2713)).a_)).name_))))).t_, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2713)).name_))))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1004)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2713)).name_)), rt_g_lit(" is not a subprogram attribute of ", 34)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2713)).a_)).name_))), rt_g_lit(" (RM79 3.3)", 11)));
}
F->nm_2714 = f_nn_301(F->up, ((rt_int)5LL), G_NV((*(P174)rt_nil_check(F->fn_2713)).line_));
(*(P174)rt_nil_check(F->nm_2714)).name_ = (*(P174)rt_nil_check(F->fn_2713)).name_;
F->fn_2713 = F->nm_2714;
} else if (((G_NV((*(P174)rt_nil_check(F->fn_2713)).kind_) == ((rt_int)9LL)) && f_is_package_1044(F->up, (*(P174)rt_nil_check(F->fn_2713)).a_))) {
F->nm_2714 = f_nn_301(F->up, ((rt_int)5LL), G_NV((*(P174)rt_nil_check(F->fn_2713)).line_));
(*(P174)rt_nil_check(F->nm_2714)).name_ = (*(P174)rt_nil_check(F->fn_2713)).name_;
(*(P174)rt_nil_check(F->nm_2714)).tag_ = f_mk_227(F->up, f_path_of_344(F->up, (*(P174)rt_nil_check(F->fn_2713)).a_));
F->fn_2713 = F->nm_2714;
} else if (((((G_NV((*(P174)rt_nil_check(F->fn_2713)).kind_) == ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2713)).a_)).kind_) == ((rt_int)8LL))) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2713)).a_)).a_)).kind_) == ((rt_int)5LL))) && f_is_task_name_1121(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2713)).a_)).a_)).name_))))) {
F->y_2715 = f_member_of_1048(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2713)).a_)).a_)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2713)).name_)), G_NV((*(P174)rt_nil_check(F->fn_2713)).line_));
if (((F->y_2715 != NULL) && ((G_NV((*(P117)rt_nil_check(F->y_2715)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_2715)).kind_) == ((rt_int)4LL))))) {
f_resolve_member_overload_1097(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2713)).a_)).a_)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2713)).name_)), (*(P174)rt_nil_check(F->e_1004)).b_, F->is_stmt_1005, F->up->call_want_215, G_NV((*(P174)rt_nil_check(F->e_1004)).line_), &F->y_2715);
F->up->call_task_ix_206 = (*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2713)).a_)).b_;
if ((F->is_stmt_1005 && (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2715)).result_)).kind_) != ((rt_int)9LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1004)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2713)).name_)), rt_g_lit(" returns a value; it is not a procedure call", 44)));
}
f_gcall_with_1033(F->up, F->e_1004, F->y_2715, &(*F->t_1006), &(*F->r_1007));
goto ret_;
}
}
if ((G_NV((*(P174)rt_nil_check(F->fn_2713)).kind_) != ((rt_int)5LL))) {
f_other_call_1178(F->up, F->e_1004, F->is_stmt_1005, &(*F->t_1006), &(*F->r_1007));
goto ret_;
}
F->y_2715 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2713)).name_)));
if (((*(P174)rt_nil_check(F->fn_2713)).tag_ != NULL)) {
F->y_2715 = f_member_of_1048(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2713)).tag_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2713)).name_)), G_NV((*(P174)rt_nil_check(F->fn_2713)).line_));
}
if ((F->y_2715 == NULL)) {
if (((*(P174)rt_nil_check(F->fn_2713)).tag_ != NULL)) {
F->up->text_io_qualified_201 = eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2713)).tag_)), rt_g_lit("TEXT_IO", 7));
}
f_builtin_1040(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2713)).name_)), (*(P174)rt_nil_check(F->e_1004)).b_, G_NV((*(P174)rt_nil_check(F->e_1004)).line_), F->is_stmt_1005, &(*F->t_1006), &(*F->r_1007));
F->up->text_io_qualified_201 = 0;
goto ret_;
}
if ((((G_NV((*(P117)rt_nil_check(F->y_2715)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_2715)).kind_) == ((rt_int)4LL))) && ((*(P174)rt_nil_check(F->fn_2713)).tag_ == NULL))) {
f_resolve_overload_1086(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2713)).name_)), (*(P174)rt_nil_check(F->e_1004)).b_, F->is_stmt_1005, F->up->call_want_215, G_NV((*(P174)rt_nil_check(F->e_1004)).line_), &F->y_2715);
if ((F->y_2715 == NULL)) {
f_builtin_1040(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2713)).name_)), (*(P174)rt_nil_check(F->e_1004)).b_, G_NV((*(P174)rt_nil_check(F->e_1004)).line_), F->is_stmt_1005, &(*F->t_1006), &(*F->r_1007));
goto ret_;
}
} else if (((G_NV((*(P117)rt_nil_check(F->y_2715)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_2715)).kind_) == ((rt_int)4LL)))) {
f_resolve_member_overload_1097(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2713)).tag_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2713)).name_)), (*(P174)rt_nil_check(F->e_1004)).b_, F->is_stmt_1005, F->up->call_want_215, G_NV((*(P174)rt_nil_check(F->e_1004)).line_), &F->y_2715);
}
if ((G_NV((*(P117)rt_nil_check(F->y_2715)).kind_) == ((rt_int)10LL))) {
f_other_call_1178(F->up, F->e_1004, F->is_stmt_1005, &(*F->t_1006), &(*F->r_1007));
goto ret_;
}
if (((G_NV((*(P117)rt_nil_check(F->y_2715)).kind_) != ((rt_int)3LL)) && (G_NV((*(P117)rt_nil_check(F->y_2715)).kind_) != ((rt_int)4LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1004)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2713)).name_)), rt_g_lit(" cannot be called", 17)));
}
if ((F->is_stmt_1005 && (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2715)).result_)).kind_) != ((rt_int)9LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1004)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2713)).name_)), rt_g_lit(" returns a value; it is not a procedure call", 44)));
}
if (((!F->is_stmt_1005) && (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2715)).result_)).kind_) == ((rt_int)9LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1004)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2713)).name_)), rt_g_lit(" is a procedure, not a function", 31)));
}
f_gcall_with_1033(F->up, F->e_1004, F->y_2715, &(*F->t_1006), &(*F->r_1007));
ret_:

  return;
}

static void f_out_check_1012(struct f_greenc_1fr *up_, rt_gstr lv_1009, P122 t_1010, P178 c_1011) {
  struct f_out_check_1012fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lv_1009 = cp_rt_gstr(lv_1009);
F->t_1010 = t_1010;
F->c_1011 = c_1011;
if ((!f_bounded_474(F->up, F->c_1011))) {
goto ret_;
}
if ((F->up->post_checks_196 == NULL)) {
F->up->post_checks_196 = f_mk_227(F->up, rt_g_lit("", 0));
}
if (((G_NV((*(P122)rt_nil_check(F->t_1010)).kind_) == ((rt_int)3LL)) || (G_NV((*(P122)rt_nil_check(F->t_1010)).kind_) == ((rt_int)16LL)))) {
F->up->post_checks_196 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->up->post_checks_196)), rt_g_lit(" (void)rt_frange(", 17)), F->lv_1009), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_1011)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_1011)).hi_))), rt_g_lit(");", 2)));
} else if (f_is_discrete_452(F->up, F->t_1010)) {
F->up->post_checks_196 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->up->post_checks_196)), rt_g_lit(" (void)rt_range(", 16)), F->lv_1009), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_1011)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_1011)).hi_))), rt_g_lit(");", 2)));
}
ret_:

  return;
}

static void f_var_path_1015(struct f_greenc_1fr *up_, P174 e_1013, P140 *r_1014) {
  struct f_var_path_1015fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1013 = e_1013;
F->r_1014 = r_1014;
F->pt_2727 = NULL;
F->v_2728 = NULL;
F->saved_2729 = NULL;
F->saved_2729 = F->up->code_136;
if ((G_NV((*(P174)rt_nil_check(F->e_1013)).kind_) == ((rt_int)5LL))) {
(*F->r_1014) = (*(P174)rt_nil_check(F->e_1013)).name_;
goto ret_;
} else if ((G_NV((*(P174)rt_nil_check(F->e_1013)).kind_) == ((rt_int)15LL))) {
f_var_path_1015(F->up, (*(P174)rt_nil_check(F->e_1013)).a_, &(*F->r_1014));
goto ret_;
} else if ((((G_NV((*(P174)rt_nil_check(F->e_1013)).kind_) != ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check(F->e_1013)).kind_) != ((rt_int)8LL))) || ((G_NV((*(P174)rt_nil_check(F->e_1013)).kind_) == ((rt_int)9LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1013)).name_)), rt_g_lit("ALL", 3))))) {
(*F->r_1014) = f_mk_227(F->up, rt_g_lit("\?", 1));
goto ret_;
}
F->pt_2727 = NULL;
F->up->trial_155 = rt_add(G_NV(F->up->trial_155), ((rt_int)1LL));
F->up->code_136 = f_new_buffer_249(F->up);
{
{ rt_frame xf2731;
if (RT_TRY(xf2731)) {
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->e_1013)).a_, NULL, &F->pt_2727, &F->v_2728);
RT_POP(xf2731);
} else {
RT_POP(xf2731);
int x2732 = rt_xcur;
if (rt_g_aborted()) rt_raise(x2732);
if (0 || x2732 == ex_compile_error_108) {
F->pt_2727 = NULL;
} else {
rt_raise(x2732);
}
}
}

}
L_end_2730: ;
F->up->trial_155 = rt_sub(G_NV(F->up->trial_155), ((rt_int)1LL));
F->up->code_136 = F->saved_2729;
if (((F->pt_2727 == NULL) || (G_NV((*(P122)rt_nil_check(F->pt_2727)).kind_) == ((rt_int)8LL)))) {
(*F->r_1014) = f_mk_227(F->up, rt_g_lit("\?", 1));
goto ret_;
}
f_var_path_1015(F->up, (*(P174)rt_nil_check(F->e_1013)).a_, &(*F->r_1014));
if (eq_rt_gstr((*(P140)rt_nil_check((*F->r_1014))), rt_g_lit("\?", 1))) {
goto ret_;
} else if ((G_NV((*(P174)rt_nil_check(F->e_1013)).kind_) == ((rt_int)9LL))) {
(*F->r_1014) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->r_1014))), one_rt_gstr(46)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1013)).name_))));
} else if (((f_list_len_307(F->up, (*(P174)rt_nil_check(F->e_1013)).b_) == ((rt_int)1LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1013)).b_)).kind_) == ((rt_int)1LL)))) {
(*F->r_1014) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->r_1014))), one_rt_gstr(40)), rt_g_s2g(rt_str_of_int(G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1013)).b_)).ival_)))), one_rt_gstr(41)));
} else {
(*F->r_1014) = f_mk_227(F->up, cat_rt_gstr((*(P140)rt_nil_check((*F->r_1014))), rt_g_lit("(*)", 3)));
}
ret_:

  return;
}

static int f_paths_overlap_1018(struct f_greenc_1fr *up_, rt_gstr p_1016, rt_gstr r_1017) {
  struct f_paths_overlap_1018fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1016 = cp_rt_gstr(p_1016);
F->r_1017 = cp_rt_gstr(r_1017);
F->i_2733 = INT64_MIN;
F->i_2733 = ({ rt_gstr at2734 = F->p_1016; at2734.lo; });
F->j_2735 = INT64_MIN;
F->j_2735 = ({ rt_gstr at2736 = F->r_1017; at2736.lo; });
for (;;) {
if (((G_NV(F->i_2733) > ({ rt_gstr at2738 = F->p_1016; at2738.hi; })) || (G_NV(F->j_2735) > ({ rt_gstr at2739 = F->r_1017; at2739.hi; })))) {
if (((G_NV(F->i_2733) > ({ rt_gstr at2740 = F->p_1016; at2740.hi; })) && (G_NV(F->j_2735) > ({ rt_gstr at2741 = F->r_1017; at2741.hi; })))) {
F->result_ = 1;
goto ret_;
} else if ((G_NV(F->i_2733) > ({ rt_gstr at2742 = F->p_1016; at2742.hi; }))) {
F->result_ = ((G_NV(({ rt_gstr ix2743 = F->r_1017; ix2743.p[rt_index(G_NV(F->j_2735), ix2743.lo, ix2743.hi) - ix2743.lo]; })) == 46) || (G_NV(({ rt_gstr ix2744 = F->r_1017; ix2744.p[rt_index(G_NV(F->j_2735), ix2744.lo, ix2744.hi) - ix2744.lo]; })) == 40));
goto ret_;
}
F->result_ = ((G_NV(({ rt_gstr ix2745 = F->p_1016; ix2745.p[rt_index(G_NV(F->i_2733), ix2745.lo, ix2745.hi) - ix2745.lo]; })) == 46) || (G_NV(({ rt_gstr ix2746 = F->p_1016; ix2746.p[rt_index(G_NV(F->i_2733), ix2746.lo, ix2746.hi) - ix2746.lo]; })) == 40));
goto ret_;
}
if ((((G_NV(({ rt_gstr ix2747 = F->p_1016; ix2747.p[rt_index(G_NV(F->i_2733), ix2747.lo, ix2747.hi) - ix2747.lo]; })) == 40) && (G_NV(({ rt_gstr ix2748 = F->r_1017; ix2748.p[rt_index(G_NV(F->j_2735), ix2748.lo, ix2748.hi) - ix2748.lo]; })) == 40)) && ((G_NV(({ rt_gstr ix2749 = F->p_1016; ix2749.p[rt_index(rt_add(G_NV(F->i_2733), ((rt_int)1LL)), ix2749.lo, ix2749.hi) - ix2749.lo]; })) == 42) || (G_NV(({ rt_gstr ix2750 = F->r_1017; ix2750.p[rt_index(rt_add(G_NV(F->j_2735), ((rt_int)1LL)), ix2750.lo, ix2750.hi) - ix2750.lo]; })) == 42)))) {
while ((G_NV(({ rt_gstr ix2752 = F->p_1016; ix2752.p[rt_index(G_NV(F->i_2733), ix2752.lo, ix2752.hi) - ix2752.lo]; })) != 41)) {
F->i_2733 = rt_add(G_NV(F->i_2733), ((rt_int)1LL));
}
L_end_2751: ;
while ((G_NV(({ rt_gstr ix2754 = F->r_1017; ix2754.p[rt_index(G_NV(F->j_2735), ix2754.lo, ix2754.hi) - ix2754.lo]; })) != 41)) {
F->j_2735 = rt_add(G_NV(F->j_2735), ((rt_int)1LL));
}
L_end_2753: ;
} else if ((G_NV(({ rt_gstr ix2755 = F->p_1016; ix2755.p[rt_index(G_NV(F->i_2733), ix2755.lo, ix2755.hi) - ix2755.lo]; })) != G_NV(({ rt_gstr ix2756 = F->r_1017; ix2756.p[rt_index(G_NV(F->j_2735), ix2756.lo, ix2756.hi) - ix2756.lo]; })))) {
F->result_ = 0;
goto ret_;
}
F->i_2733 = rt_add(G_NV(F->i_2733), ((rt_int)1LL));
F->j_2735 = rt_add(G_NV(F->j_2735), ((rt_int)1LL));
}
L_end_2737: ;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_mentions_1021(struct f_greenc_1fr *up_, P174 n_1019, rt_gstr name_1020) {
  struct f_mentions_1021fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1019 = n_1019;
F->name_1020 = cp_rt_gstr(name_1020);
F->p_2757 = NULL;
F->p_2757 = F->n_1019;
while ((F->p_2757 != NULL)) {
if (((G_NV((*(P174)rt_nil_check(F->p_2757)).kind_) == ((rt_int)5LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_2757)).name_)), F->name_1020))) {
F->result_ = 1;
goto ret_;
}
if ((f_mentions_1021(F->up, (*(P174)rt_nil_check(F->p_2757)).a_, F->name_1020) || f_mentions_1021(F->up, (*(P174)rt_nil_check(F->p_2757)).b_, F->name_1020))) {
F->result_ = 1;
goto ret_;
} else if ((f_mentions_1021(F->up, (*(P174)rt_nil_check(F->p_2757)).c_, F->name_1020) || f_mentions_1021(F->up, (*(P174)rt_nil_check(F->p_2757)).d_, F->name_1020))) {
F->result_ = 1;
goto ret_;
} else if (f_mentions_1021(F->up, (*(P174)rt_nil_check(F->p_2757)).e_, F->name_1020)) {
F->result_ = 1;
goto ret_;
}
F->p_2757 = (*(P174)rt_nil_check(F->p_2757)).next_;
}
L_end_2758: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_mentions_one_1024(struct f_greenc_1fr *up_, P174 n_1022, rt_gstr name_1023) {
  struct f_mentions_one_1024fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1022 = n_1022;
F->name_1023 = cp_rt_gstr(name_1023);
if (((G_NV((*(P174)rt_nil_check(F->n_1022)).kind_) == ((rt_int)5LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_1022)).name_)), F->name_1023))) {
F->result_ = 1;
goto ret_;
} else if ((f_mentions_1021(F->up, (*(P174)rt_nil_check(F->n_1022)).a_, F->name_1023) || f_mentions_1021(F->up, (*(P174)rt_nil_check(F->n_1022)).b_, F->name_1023))) {
F->result_ = 1;
goto ret_;
}
F->result_ = ((f_mentions_1021(F->up, (*(P174)rt_nil_check(F->n_1022)).c_, F->name_1023) || f_mentions_1021(F->up, (*(P174)rt_nil_check(F->n_1022)).d_, F->name_1023)) || f_mentions_1021(F->up, (*(P174)rt_nil_check(F->n_1022)).e_, F->name_1023));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_aliasing_1028(struct f_greenc_1fr *up_, P174 e_1025, P117 y_1026, P174 a_1027) {
  struct f_check_aliasing_1028fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1025 = e_1025;
F->y_1026 = y_1026;
F->a_1027 = a_1027;
F->b_2759 = NULL;
F->b_2759 = (*(P174)rt_nil_check(F->e_1025)).b_;
F->p_2760 = NULL;
F->q_2761 = NULL;
F->r_2762 = NULL;
F->r_2762 = f_root_name_1213(F->up, F->a_1027);
F->v_2763 = NULL;
if ((F->r_2762 == NULL)) {
goto ret_;
}
f_var_path_1015(F->up, F->a_1027, &F->p_2760);
while ((F->b_2759 != NULL)) {
if (((F->b_2759 != F->a_1027) && (!eq_rt_gstr((*(P140)rt_nil_check(F->p_2760)), rt_g_lit("\?", 1))))) {
f_var_path_1015(F->up, F->b_2759, &F->q_2761);
if (((!eq_rt_gstr((*(P140)rt_nil_check(F->q_2761)), rt_g_lit("\?", 1))) && f_paths_overlap_1018(F->up, (*(P140)rt_nil_check(F->p_2760)), (*(P140)rt_nil_check(F->q_2761))))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1025)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_2762)).name_)), rt_g_lit(" is an out or in out actual and another actual of the same call (RM79 5.2.3)", 76)));
}
}
F->b_2759 = (*(P174)rt_nil_check(F->b_2759)).next_;
}
L_end_2764: ;
F->v_2763 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_2762)).name_)));
if (((((F->v_2763 != NULL) && (G_NV((*(P117)rt_nil_check(F->v_2763)).kind_) == ((rt_int)1LL))) && ((*(P117)rt_nil_check(F->y_1026)).decl_ != NULL)) && ((G_NV((*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_1026)).decl_)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_1026)).decl_)).kind_) == ((rt_int)45LL))))) {
if (((G_NV((*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_1026)).decl_)).ival_) == ((rt_int)0LL)) && (!f_declares_1222(F->up, (*(P117)rt_nil_check(F->y_1026)).decl_, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_2762)).name_)))))) {
if (((f_mentions_1021(F->up, (*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_1026)).decl_)).c_, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_2762)).name_))) || f_mentions_1021(F->up, (*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_1026)).decl_)).d_, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_2762)).name_)))) || f_mentions_1021(F->up, (*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_1026)).decl_)).e_, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_2762)).name_))))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1025)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_2762)).name_)), rt_g_lit(" is an out or in out actual of ", 31)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1026)).name_))), rt_g_lit(", which also uses it as a global variable (RM79 5.2.3)", 54)));
}
}
}
ret_:

  return;
}

static void f_gcall_with_1033(struct f_greenc_1fr *up_, P174 e_1029, P117 y_1030, P122 *t_1031, P140 *r_1032) {
  struct f_gcall_with_1033fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1029 = e_1029;
F->y_1030 = y_1030;
F->t_1031 = t_1031;
F->r_1032 = r_1032;
F->args_2765 = NULL;
F->lv_2766 = NULL;
F->v_2767 = NULL;
F->x1_2768 = NULL;
F->x2_2769 = NULL;
F->a_2770 = NULL;
F->pm_2771 = NULL;
F->lt_2772 = NULL;
F->vt_2773 = NULL;
F->lc_2774 = NULL;
F->ro_2775 = INT_MIN;
f_check_call_rules_1233(F->up, F->e_1029, F->y_1030);
F->args_2765 = f_mk_227(F->up, rt_g_lit("", 0));
if ((((((G_NV((*(P117)rt_nil_check(F->y_1030)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_1030)).kind_) == ((rt_int)4LL))) && ((*(P117)rt_nil_check(F->y_1030)).access_path_ != NULL)) && ((*(P117)rt_nil_check(F->y_1030)).members_ != NULL)) && ((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1030)).members_)).c_ != NULL))) {
if ((F->up->call_task_ix_206 == NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1029)).line_), cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1030)).name_)), rt_g_lit(" needs the member of the family: F(I).", 38)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1030)).name_))));
}
f_gexpr_805(F->up, F->up->call_task_ix_206, (*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1030)).members_)).t_, &F->vt_2773, &F->v_2767);
F->up->call_task_ix_206 = NULL;
f_path_at_1119(F->up, G_NV((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1030)).members_)).level_), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1030)).access_path_)), &F->lv_2766);
f_path_at_1119(F->up, G_NV((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1030)).members_)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1030)).members_)).cname_)), rt_g_lit("lo", 2)), &F->x1_2768);
f_path_at_1119(F->up, G_NV((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1030)).members_)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1030)).members_)).cname_)), rt_g_lit("hi", 2)), &F->x2_2769);
F->lv_2766 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->lv_2766)), rt_g_lit("[rt_index(", 10)), (*(P140)rt_nil_check(F->v_2767))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->x1_2768))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->x2_2769))), rt_g_lit(") - ", 4)), (*(P140)rt_nil_check(F->x1_2768))), one_rt_gstr(93)));
F->args_2765 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->lv_2766))), rt_g_lit(" \? ", 3)), (*(P140)rt_nil_check(F->lv_2766))), rt_g_lit(" : (rt_raise(RT_X_TASKING), (void *)0))", 39)));
} else if ((((G_NV((*(P117)rt_nil_check(F->y_1030)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_1030)).kind_) == ((rt_int)4LL))) && ((*(P117)rt_nil_check(F->y_1030)).access_path_ != NULL))) {
f_path_at_1119(F->up, G_NV((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1030)).members_)).level_), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1030)).access_path_)), &F->lv_2766);
F->args_2765 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->lv_2766))), rt_g_lit(" \? ", 3)), (*(P140)rt_nil_check(F->lv_2766))), rt_g_lit(" : (rt_raise(RT_X_TASKING), (void *)0))", 39)));
} else if ((G_NV((*(P117)rt_nil_check(F->y_1030)).level_) > ((rt_int)0LL))) {
f_link_to_745(F->up, G_NV((*(P117)rt_nil_check(F->y_1030)).level_), &F->args_2765);
}
F->pm_2771 = (*(P117)rt_nil_check(F->y_1030)).params_;
while ((F->pm_2771 != NULL)) {
F->a_2770 = f_actual_for_1003(F->up, (*(P174)rt_nil_check(F->e_1029)).b_, F->pm_2771, (*(P117)rt_nil_check(F->y_1030)).params_);
if ((({ rt_gstr at2777 = (*(P140)rt_nil_check(F->args_2765)); at2777.hi >= at2777.lo ? at2777.hi - at2777.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->args_2765 = f_mk_227(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->args_2765)), rt_g_lit(", ", 2)));
}
if ((F->a_2770 == NULL)) {
if ((((*(P1812)rt_nil_check(F->pm_2771)).dflt_ == NULL) || (G_NV((*(P1812)rt_nil_check(F->pm_2771)).mode_) != ((rt_int)1LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1029)).line_), cat_rt_gstr(rt_g_lit("no actual parameter for ", 24), (*(P140)rt_nil_check((*(P1812)rt_nil_check(F->pm_2771)).name_))));
}
if (((*(P1812)rt_nil_check(F->pm_2771)).dsym_ != NULL)) {
f_access_of_742(F->up, (*(P1812)rt_nil_check(F->pm_2771)).dsym_, &F->v_2767);
f_copy_code_623(F->up, (*(P1812)rt_nil_check(F->pm_2771)).t_, (*(P140)rt_nil_check(F->v_2767)), &F->x1_2768);
F->v_2767 = F->x1_2768;
} else {
f_gexpr_805(F->up, (*(P1812)rt_nil_check(F->pm_2771)).dflt_, (*(P1812)rt_nil_check(F->pm_2771)).t_, &F->vt_2773, &F->v_2767);
}
F->args_2765 = f_mk_227(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->args_2765)), (*(P140)rt_nil_check(F->v_2767))));
} else {
if ((((G_NV((*(P174)rt_nil_check(F->a_2770)).flag_) != ((rt_int)0LL)) && (G_NV((*(P174)rt_nil_check(F->a_2770)).flag_) != ((rt_int)4LL))) && (G_NV((*(P174)rt_nil_check(F->a_2770)).flag_) != G_NV((*(P1812)rt_nil_check(F->pm_2771)).mode_)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1029)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the association of ", 19), (*(P140)rt_nil_check((*(P1812)rt_nil_check(F->pm_2771)).name_))), rt_g_lit(" does not match its mode", 24)));
}
if ((G_NV((*(P1812)rt_nil_check(F->pm_2771)).mode_) == ((rt_int)1LL))) {
f_gexpr_805(F->up, F->a_2770, (*(P1812)rt_nil_check(F->pm_2771)).t_, &F->vt_2773, &F->v_2767);
f_check_type_486(F->up, F->vt_2773, (*(P1812)rt_nil_check(F->pm_2771)).t_, G_NV((*(P174)rt_nil_check(F->e_1029)).line_));
if (((((*(P1812)rt_nil_check(F->pm_2771)).c_ != NULL) && ((*(P178)rt_nil_check((*(P1812)rt_nil_check(F->pm_2771)).c_)).lo_ != NULL)) && ((G_NV((*(P122)rt_nil_check((*(P1812)rt_nil_check(F->pm_2771)).t_)).kind_) == ((rt_int)1LL)) || (G_NV((*(P122)rt_nil_check((*(P1812)rt_nil_check(F->pm_2771)).t_)).kind_) == ((rt_int)4LL))))) {
F->v_2767 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P140)rt_nil_check(F->v_2767))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P1812)rt_nil_check(F->pm_2771)).c_)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P1812)rt_nil_check(F->pm_2771)).c_)).hi_))), one_rt_gstr(41)));
}
F->args_2765 = f_mk_227(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->args_2765)), (*(P140)rt_nil_check(F->v_2767))));
} else {
f_lvalue_761(F->up, F->a_2770, &F->lv_2766, &F->lt_2772, &F->lc_2774, &F->ro_2775);
 (void)rt_range(F->ro_2775, 0, 1);
if (G_NV(F->ro_2775)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1029)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P1812)rt_nil_check(F->pm_2771)).name_)), rt_g_lit(" needs a variable", 17)));
}
f_check_pure_target_1216(F->up, F->a_2770, G_NV((*(P174)rt_nil_check(F->e_1029)).line_));
f_check_type_486(F->up, F->lt_2772, (*(P1812)rt_nil_check(F->pm_2771)).t_, G_NV((*(P174)rt_nil_check(F->e_1029)).line_));
F->args_2765 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->args_2765)), one_rt_gstr(38)), (*(P140)rt_nil_check(F->lv_2766))));
f_check_aliasing_1028(F->up, F->e_1029, F->y_1030, F->a_2770);
f_out_check_1012(F->up, (*(P140)rt_nil_check(F->lv_2766)), F->lt_2772, F->lc_2774);
}
}
F->pm_2771 = (*(P1812)rt_nil_check(F->pm_2771)).next_;
}
L_end_2776: ;
if (((f_list_len_307(F->up, (*(P174)rt_nil_check(F->e_1029)).b_) > ((rt_int)0LL)) && ((*(P117)rt_nil_check(F->y_1030)).params_ == NULL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1029)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1030)).name_)), rt_g_lit(" takes no parameters", 20)));
}
(*F->t_1031) = (*(P117)rt_nil_check(F->y_1030)).result_;
(*F->r_1032) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1030)).cname_)), one_rt_gstr(40)), (*(P140)rt_nil_check(F->args_2765))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_builtin_1040(struct f_greenc_1fr *up_, rt_gstr name_1034, P174 args_1035, rt_int line_1036, int is_stmt_1037, P122 *t_1038, P140 *r_1039) {
  struct f_builtin_1040fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1034 = cp_rt_gstr(name_1034);
F->args_1035 = args_1035;
F->line_1036 = line_1036;
F->is_stmt_1037 = is_stmt_1037;
F->t_1038 = t_1038;
F->r_1039 = r_1039;
F->aty_2778 = NULL;
F->lt_2779 = NULL;
F->a_2780 = NULL;
F->w_2781 = NULL;
F->lv_2782 = NULL;
F->lc_2783 = NULL;
F->ro_2784 = INT_MIN;
(*F->t_1038) = F->up->ty_void_161;
if ((((eq_rt_gstr(F->name_1034, rt_g_lit("PUT", 3)) || eq_rt_gstr(F->name_1034, rt_g_lit("GET", 3))) && (!G_NV(F->up->text_io_qualified_201))) && (f_lookup_423(F->up, rt_g_lit("$TEXT_IO", 8)) == NULL))) {
f_fail_248(F->up, F->line_1036, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->name_1034, rt_g_lit(" is an operation of TEXT_IO: use TEXT_IO or name TEXT_IO.", 57)), F->name_1034), rt_g_lit(" (RM79 8.4, 14.3)", 17)));
}
if (((F->up->pure_sym_216 != NULL) && (eq_rt_gstr(F->name_1034, rt_g_lit("PUT", 3)) || eq_rt_gstr(F->name_1034, rt_g_lit("GET", 3))))) {
f_fail_248(F->up, F->line_1036, cat_rt_gstr(cat_rt_gstr(rt_g_lit("a function cannot do input-output: ", 35), F->name_1034), rt_g_lit(" has side effects (RM79 6.5)", 28)));
}
if (eq_rt_gstr(F->name_1034, rt_g_lit("PUT", 3))) {
if ((F->args_1035 == NULL)) {
f_fail_248(F->up, F->line_1036, rt_g_lit("PUT needs an item", 17));
}
f_gexpr_805(F->up, F->args_1035, NULL, &F->aty_2778, &F->a_2780);
F->w_2781 = f_mk_227(F->up, rt_g_lit("0", 1));
if (((*(P174)rt_nil_check(F->args_1035)).next_ != NULL)) {
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->args_1035)).next_, F->up->ty_int_156, &F->lt_2779, &F->w_2781);
}
if (f_is_string_570(F->up, F->aty_2778)) {
(*F->r_1039) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put(rt_g_g2s(", 18), (*(P140)rt_nil_check(F->a_2780))), rt_g_lit("))", 2)));
} else if ((G_NV((*(P122)rt_nil_check(F->aty_2778)).kind_) == ((rt_int)11LL))) {
(*F->r_1039) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_putc(", 10), (*(P140)rt_nil_check(F->a_2780))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->aty_2778)).kind_) == ((rt_int)1LL))) {
(*F->r_1039) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put_int(", 13), (*(P140)rt_nil_check(F->a_2780))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->w_2781))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->aty_2778)).kind_) == ((rt_int)2LL))) {
(*F->r_1039) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put_bool(", 14), (*(P140)rt_nil_check(F->a_2780))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->w_2781))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->aty_2778)).kind_) == ((rt_int)16LL))) {
f_fail_248(F->up, F->line_1036, rt_g_lit("TEXT_IO has no PUT for a fixed point type: instantiate FIXED_IO (RM79 14.4)", 75));
} else if ((G_NV((*(P122)rt_nil_check(F->aty_2778)).kind_) == ((rt_int)3LL))) {
(*F->r_1039) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put_float(", 15), (*(P140)rt_nil_check(F->a_2780))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->w_2781))), rt_g_lit(", 0)", 4)));
} else {
f_fail_248(F->up, F->line_1036, rt_g_lit("PUT of this type is not handled", 31));
}
} else if (eq_rt_gstr(F->name_1034, rt_g_lit("GET", 3))) {
f_lvalue_761(F->up, F->args_1035, &F->lv_2782, &F->lt_2779, &F->lc_2783, &F->ro_2784);
 (void)rt_range(F->ro_2784, 0, 1);
if ((G_NV((*(P122)rt_nil_check(F->lt_2779)).kind_) == ((rt_int)11LL))) {
(*F->r_1039) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->lv_2782))), rt_g_lit(" = rt_g_getc())", 15)));
} else if ((G_NV((*(P122)rt_nil_check(F->lt_2779)).kind_) == ((rt_int)1LL))) {
(*F->r_1039) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->lv_2782))), rt_g_lit(" = rt_g_get_int())", 18)));
} else if ((G_NV((*(P122)rt_nil_check(F->lt_2779)).kind_) == ((rt_int)3LL))) {
(*F->r_1039) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->lv_2782))), rt_g_lit(" = rt_g_get_float())", 20)));
} else {
f_fail_248(F->up, F->line_1036, rt_g_lit("GET of this type is not handled", 31));
}
} else if (eq_rt_gstr(F->name_1034, rt_g_lit("ABS", 3))) {
f_gexpr_805(F->up, F->args_1035, NULL, &(*F->t_1038), &F->a_2780);
if ((G_NV((*(P122)rt_nil_check((*F->t_1038))).kind_) == ((rt_int)1LL))) {
(*F->r_1039) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_abs(", 7), (*(P140)rt_nil_check(F->a_2780))), one_rt_gstr(41)));
} else if (((G_NV((*(P122)rt_nil_check((*F->t_1038))).kind_) == ((rt_int)3LL)) || (G_NV((*(P122)rt_nil_check((*F->t_1038))).kind_) == ((rt_int)16LL)))) {
(*F->r_1039) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("fabs(", 5), (*(P140)rt_nil_check(F->a_2780))), one_rt_gstr(41)));
} else {
f_fail_248(F->up, F->line_1036, rt_g_lit("ABS applies to numeric values (RM79 App. C)", 43));
}
} else {
f_task_builtin_1193(F->up, F->name_1034, F->args_1035, F->line_1036, &(*F->t_1038), &(*F->r_1039));
}
ret_:

  return;
}

static P117 f_lookup_path_1042(struct f_greenc_1fr *up_, rt_gstr p_1041) {
  struct f_lookup_path_1042fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1041 = cp_rt_gstr(p_1041);
F->y_2785 = NULL;
F->m_2786 = NULL;
{ rt_int lo2791 = ({ rt_gstr at2788 = F->p_1041; at2788.lo; }), hi2792 = ({ rt_gstr at2789 = F->p_1041; at2789.hi; });
for (rt_int it2793 = hi2792; it2793 >= lo2791; it2793--) {
F->i_2790 = it2793;
if ((G_NV(({ rt_gstr ix2794 = F->p_1041; ix2794.p[rt_index(F->i_2790, ix2794.lo, ix2794.hi) - ix2794.lo]; })) == 46)) {
F->y_2785 = f_lookup_path_1042(F->up, ({ rt_gstr sl2798 = F->p_1041; rt_int l_ = ({ rt_gstr at2797 = F->p_1041; at2797.lo; }), h_ = rt_sub(F->i_2790, ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl2798.lo, sl2798.hi); rt_index(h_, sl2798.lo, sl2798.hi); } sl2798.p += l_ - sl2798.lo; sl2798.lo = l_; sl2798.hi = h_; sl2798; }));
if ((F->y_2785 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if (((G_NV((*(P117)rt_nil_check(F->y_2785)).kind_) != ((rt_int)8LL)) && (G_NV((*(P117)rt_nil_check(F->y_2785)).kind_) != ((rt_int)9LL)))) {
F->result_ = NULL;
goto ret_;
}
F->m_2786 = (*(P117)rt_nil_check(F->y_2785)).members_;
while ((F->m_2786 != NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2786)).name_)), ({ rt_gstr sl2801 = F->p_1041; rt_int l_ = rt_add(F->i_2790, ((rt_int)1LL)), h_ = ({ rt_gstr at2800 = F->p_1041; at2800.hi; }); if (l_ <= h_) { rt_index(l_, sl2801.lo, sl2801.hi); rt_index(h_, sl2801.lo, sl2801.hi); } sl2801.p += l_ - sl2801.lo; sl2801.lo = l_; sl2801.hi = h_; sl2801; })) && (!G_NV((*(P117)rt_nil_check(F->m_2786)).hidden_)))) {
F->result_ = F->m_2786;
goto ret_;
}
F->m_2786 = (*(P117)rt_nil_check(F->m_2786)).mnext_;
}
L_end_2799: ;
F->result_ = NULL;
goto ret_;
}
}
}
L_end_2787: ;
F->result_ = f_lookup_423(F->up, F->p_1041);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_package_1044(struct f_greenc_1fr *up_, P174 e_1043) {
  struct f_is_package_1044fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1043 = e_1043;
F->y_2802 = NULL;
if (((G_NV((*(P174)rt_nil_check(F->e_1043)).kind_) != ((rt_int)5LL)) && (G_NV((*(P174)rt_nil_check(F->e_1043)).kind_) != ((rt_int)9LL)))) {
F->result_ = 0;
goto ret_;
} else if ((G_NV((*(P174)rt_nil_check(F->e_1043)).kind_) == ((rt_int)9LL))) {
if (((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1043)).a_)).kind_) != ((rt_int)5LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1043)).a_)).kind_) != ((rt_int)9LL)))) {
F->result_ = 0;
goto ret_;
}
}
F->y_2802 = f_lookup_path_1042(F->up, f_path_of_344(F->up, F->e_1043));
if ((!(F->y_2802 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((G_NV((*(P117)rt_nil_check(F->y_2802)).kind_) == ((rt_int)8LL)) || (G_NV((*(P117)rt_nil_check(F->y_2802)).kind_) == ((rt_int)9LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P117 f_member_of_1048(struct f_greenc_1fr *up_, rt_gstr p_1045, rt_gstr name_1046, rt_int line_1047) {
  struct f_member_of_1048fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1045 = cp_rt_gstr(p_1045);
F->name_1046 = cp_rt_gstr(name_1046);
F->line_1047 = line_1047;
F->y_2803 = NULL;
F->y_2803 = f_lookup_path_1042(F->up, F->p_1045);
F->m_2804 = NULL;
if (((F->y_2803 == NULL) || ((G_NV((*(P117)rt_nil_check(F->y_2803)).kind_) != ((rt_int)8LL)) && (G_NV((*(P117)rt_nil_check(F->y_2803)).kind_) != ((rt_int)9LL))))) {
F->result_ = NULL;
goto ret_;
}
F->m_2804 = (*(P117)rt_nil_check(F->y_2803)).members_;
while ((F->m_2804 != NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2804)).name_)), F->name_1046) && (!G_NV((*(P117)rt_nil_check(F->m_2804)).hidden_)))) {
F->result_ = F->m_2804;
goto ret_;
}
F->m_2804 = (*(P117)rt_nil_check(F->m_2804)).mnext_;
}
L_end_2805: ;
if ((G_NV((*(P117)rt_nil_check(F->y_2803)).kind_) == ((rt_int)9LL))) {
F->m_2804 = f_lookup_entry_429(F->up, F->name_1046, F->y_2803);
if ((((F->m_2804 != NULL) && (G_NV((*(P117)rt_nil_check(F->m_2804)).kind_) == ((rt_int)10LL))) && f_same_task_426(F->up, (*(P117)rt_nil_check(F->m_2804)).members_, F->y_2803))) {
F->result_ = F->m_2804;
goto ret_;
}
}
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_inside_package_1050(struct f_greenc_1fr *up_, P174 p_1049) {
  struct f_inside_package_1050fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1049 = p_1049;
F->l_2806 = NULL;
F->l_2806 = F->up->pkg_stack_212;
if ((F->p_1049 == NULL)) {
F->result_ = 1;
goto ret_;
}
while ((F->l_2806 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P151)rt_nil_check(F->l_2806)).s_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_1049)).name_)))) {
F->result_ = 1;
goto ret_;
}
F->l_2806 = (*(P151)rt_nil_check(F->l_2806)).next_;
}
L_end_2807: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_copy_sym_1053(struct f_greenc_1fr *up_, P117 y_1051, P117 *z_1052) {
  struct f_copy_sym_1053fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1051 = y_1051;
F->z_1052 = z_1052;
(*F->z_1052) = ({ R118 *cell2808 = rt_alloc(sizeof(R118)); *cell2808 = cp_R118(({ R118 ag2809; ag2809.kind_ = G_NV((*(P117)rt_nil_check(F->y_1051)).kind_); ag2809.name_ = (*(P117)rt_nil_check(F->y_1051)).name_; ag2809.t_ = (*(P117)rt_nil_check(F->y_1051)).t_; ag2809.c_ = (*(P117)rt_nil_check(F->y_1051)).c_; ag2809.access_path_ = (*(P117)rt_nil_check(F->y_1051)).access_path_; ag2809.cname_ = (*(P117)rt_nil_check(F->y_1051)).cname_; ag2809.ro_ = G_NV((*(P117)rt_nil_check(F->y_1051)).ro_); ag2809.mvalue_ = G_NV((*(P117)rt_nil_check(F->y_1051)).mvalue_); ag2809.hasmv_ = G_NV((*(P117)rt_nil_check(F->y_1051)).hasmv_); ag2809.decl_ = (*(P117)rt_nil_check(F->y_1051)).decl_; ag2809.params_ = (*(P117)rt_nil_check(F->y_1051)).params_; ag2809.result_ = (*(P117)rt_nil_check(F->y_1051)).result_; ag2809.depth_ = ((rt_int)0LL); ag2809.level_ = G_NV((*(P117)rt_nil_check(F->y_1051)).level_); ag2809.byref_ = G_NV((*(P117)rt_nil_check(F->y_1051)).byref_); ag2809.vrp_ = G_NV((*(P117)rt_nil_check(F->y_1051)).vrp_); ag2809.hidden_ = G_NV((*(P117)rt_nil_check(F->y_1051)).hidden_); ag2809.from_use_ = 0; ag2809.members_ = (*(P117)rt_nil_check(F->y_1051)).members_; ag2809.mnext_ = NULL; ag2809.chain_ = NULL; ag2809.stack_ = NULL; ag2809.flags_ = G_NV((*(P117)rt_nil_check(F->y_1051)).flags_); ag2809; })); (P117)cell2808; });
ret_:

  return;
}

static void f_complete_private_1056(struct f_greenc_1fr *up_, P122 ph_1054, P122 full_1055) {
  struct f_complete_private_1056fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->ph_1054 = ph_1054;
F->full_1055 = full_1055;
F->n_2810 = NULL;
F->n_2810 = (*(P122)rt_nil_check(F->ph_1054)).name_;
F->p_2811 = NULL;
F->p_2811 = (*(P122)rt_nil_check(F->ph_1054)).decl_;
as_R123(&(*(P122)rt_nil_check(F->ph_1054)), (*(P122)rt_nil_check(F->full_1055)));
(*(P122)rt_nil_check(F->ph_1054)).name_ = F->n_2810;
(*(P122)rt_nil_check(F->ph_1054)).priv_ = 1;
(*(P122)rt_nil_check(F->ph_1054)).decl_ = F->p_2811;
ret_:

  return;
}

static void f_package_spec_1058(struct f_greenc_1fr *up_, P174 e_1057) {
  struct f_package_spec_1058fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1057 = e_1057;
F->y_2812 = NULL;
F->m_2813 = NULL;
F->z_2814 = NULL;
F->saved_2815 = NULL;
F->saved_2815 = F->up->cur_pkg_213;
F->first_private_2816 = NULL;
F->y_2812 = f_new_sym_469(F->up, ((rt_int)8LL), (*(P174)rt_nil_check(F->e_1057)).name_);
(*(P117)rt_nil_check(F->y_2812)).decl_ = F->e_1057;
F->up->pkg_stack_212 = ({ R152 *cell2817 = rt_alloc(sizeof(R152)); *cell2817 = cp_R152(({ R152 ag2818; ag2818.s_ = (*(P174)rt_nil_check(F->e_1057)).name_; ag2818.next_ = F->up->pkg_stack_212; ag2818; })); (P151)cell2817; });
F->up->cur_pkg_213 = F->e_1057;
f_open_scope_465(F->up);
f_decl_elements_652(F->up, (*(P174)rt_nil_check(F->e_1057)).c_);
F->first_private_2816 = F->up->scope_stack_121;
f_decl_elements_652(F->up, (*(P174)rt_nil_check(F->e_1057)).d_);
F->m_2813 = F->up->scope_stack_121;
while (((F->m_2813 != NULL) && (G_NV((*(P117)rt_nil_check(F->m_2813)).depth_) == G_NV(F->up->depth_120)))) {
if (((G_NV((*(P117)rt_nil_check(F->m_2813)).kind_) == ((rt_int)2LL)) && (G_NV((*(P117)rt_nil_check(F->m_2813)).flags_) == rt_add(((rt_int)1LL), ((rt_int)2LL))))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1057)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("deferred constant ", 18), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2813)).name_))), rt_g_lit(" has no full declaration in the private part (RM79 7.4)", 55)));
}
f_copy_sym_1053(F->up, F->m_2813, &F->z_2814);
(*(P117)rt_nil_check(F->z_2814)).hidden_ = (f_hidden_from_1061(F->up, F->m_2813, F->first_private_2816) || G_NV((*(P117)rt_nil_check(F->m_2813)).from_use_));
(*(P117)rt_nil_check(F->z_2814)).mnext_ = (*(P117)rt_nil_check(F->y_2812)).members_;
(*(P117)rt_nil_check(F->y_2812)).members_ = F->z_2814;
F->m_2813 = (*(P117)rt_nil_check(F->m_2813)).stack_;
}
L_end_2819: ;
f_close_scope_466(F->up);
F->up->pkg_stack_212 = (*(P151)rt_nil_check(F->up->pkg_stack_212)).next_;
F->up->cur_pkg_213 = F->saved_2815;
f_define_464(F->up, F->y_2812, G_NV((*(P174)rt_nil_check(F->e_1057)).line_));
ret_:

  return;
}

static int f_hidden_from_1061(struct f_greenc_1fr *up_, P117 m_1059, P117 first_private_1060) {
  struct f_hidden_from_1061fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->m_1059 = m_1059;
F->first_private_1060 = first_private_1060;
F->p_2820 = NULL;
F->p_2820 = F->up->scope_stack_121;
while ((F->p_2820 != NULL)) {
if ((F->p_2820 == F->first_private_1060)) {
F->result_ = 0;
goto ret_;
}
if ((F->p_2820 == F->m_1059)) {
F->result_ = 1;
goto ret_;
}
F->p_2820 = (*(P117)rt_nil_check(F->p_2820)).stack_;
}
L_end_2821: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_package_body_1063(struct f_greenc_1fr *up_, P174 e_1062) {
  struct f_package_body_1063fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1062 = e_1062;
F->saved_labels_2822 = NULL;
F->y_2823 = NULL;
F->y_2823 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1062)).name_)));
F->m_2824 = NULL;
F->z_2825 = NULL;
F->saved_2826 = NULL;
F->saved_2826 = F->up->cur_pkg_213;
if (((F->y_2823 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_2823)).kind_) == ((rt_int)11LL)))) {
f_attach_generic_body_1244(F->up, F->e_1062);
goto ret_;
}
if (((F->y_2823 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_2823)).kind_) != ((rt_int)8LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1062)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("package body ", 13), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1062)).name_))), rt_g_lit(" has no specification", 21)));
}
F->up->pkg_stack_212 = ({ R152 *cell2827 = rt_alloc(sizeof(R152)); *cell2827 = cp_R152(({ R152 ag2828; ag2828.s_ = (*(P174)rt_nil_check(F->e_1062)).name_; ag2828.next_ = F->up->pkg_stack_212; ag2828; })); (P151)cell2827; });
F->up->cur_pkg_213 = (*(P117)rt_nil_check(F->y_2823)).decl_;
f_open_scope_465(F->up);
F->m_2824 = (*(P117)rt_nil_check(F->y_2823)).members_;
while ((F->m_2824 != NULL)) {
f_copy_sym_1053(F->up, F->m_2824, &F->z_2825);
(*(P117)rt_nil_check(F->z_2825)).hidden_ = 0;
f_define_464(F->up, F->z_2825, G_NV((*(P174)rt_nil_check(F->e_1062)).line_));
F->m_2824 = (*(P117)rt_nil_check(F->m_2824)).mnext_;
}
L_end_2829: ;
f_decl_elements_652(F->up, (*(P174)rt_nil_check(F->e_1062)).c_);
F->m_2824 = (*(P117)rt_nil_check(F->y_2823)).members_;
while ((F->m_2824 != NULL)) {
if ((((G_NV((*(P117)rt_nil_check(F->m_2824)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->m_2824)).kind_) == ((rt_int)4LL))) && (G_NV((*(P174)rt_nil_check((*(P117)rt_nil_check(F->m_2824)).decl_)).ival_) == ((rt_int)1LL)))) {
F->z_2825 = ({ A116 ix2831 = F->up->table_119; ix2831.p[rt_index(f_hash_416(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2824)).name_))), ix2831.lo, ix2831.hi) - ix2831.lo]; });
while ((F->z_2825 != NULL)) {
if (((*(P117)rt_nil_check(F->z_2825)).cname_ == (*(P117)rt_nil_check(F->m_2824)).cname_)) {
(*(P117)rt_nil_check(F->m_2824)).decl_ = (*(P117)rt_nil_check(F->z_2825)).decl_;
}
F->z_2825 = (*(P117)rt_nil_check(F->z_2825)).chain_;
}
L_end_2832: ;
if ((G_NV((*(P174)rt_nil_check((*(P117)rt_nil_check(F->m_2824)).decl_)).ival_) == ((rt_int)1LL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1062)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no body for ", 12), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2824)).name_))), rt_g_lit(" in package body ", 17)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1062)).name_))));
}
}
F->m_2824 = (*(P117)rt_nil_check(F->m_2824)).mnext_;
}
L_end_2830: ;
F->saved_labels_2822 = F->up->body_labels_191;
f_label_body_684(F->up, (*(P174)rt_nil_check(F->e_1062)).d_, (*(P174)rt_nil_check(F->e_1062)).e_);
f_guarded_704(F->up, NULL, (*(P174)rt_nil_check(F->e_1062)).d_, (*(P174)rt_nil_check(F->e_1062)).e_, G_NV((*(P174)rt_nil_check(F->e_1062)).line_));
F->up->body_labels_191 = F->saved_labels_2822;
f_close_scope_466(F->up);
F->up->pkg_stack_212 = (*(P151)rt_nil_check(F->up->pkg_stack_212)).next_;
F->up->cur_pkg_213 = F->saved_2826;
ret_:

  return;
}

static int f_use_visible_1065(struct f_greenc_1fr *up_, P117 old_1064) {
  struct f_use_visible_1065fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->old_1064 = old_1064;
if ((F->old_1064 == NULL)) {
F->result_ = 1;
goto ret_;
}
F->result_ = (((G_NV((*(P117)rt_nil_check(F->old_1064)).depth_) < G_NV(F->up->depth_120)) && (G_NV((*(P117)rt_nil_check(F->old_1064)).kind_) != ((rt_int)1LL))) && (G_NV((*(P117)rt_nil_check(F->old_1064)).kind_) != ((rt_int)2LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_use_clause_1067(struct f_greenc_1fr *up_, P174 e_1066) {
  struct f_use_clause_1067fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1066 = e_1066;
F->n_2833 = NULL;
F->n_2833 = (*(P174)rt_nil_check(F->e_1066)).a_;
F->y_2834 = NULL;
F->m_2835 = NULL;
F->z_2836 = NULL;
F->old_2837 = NULL;
F->clash_2838 = INT_MIN;
while ((F->n_2833 != NULL)) {
F->y_2834 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_2833)).name_)));
if ((F->y_2834 == NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->n_2833)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_2833)).name_)), rt_g_lit(" is not a visible module (RM79 8.3, 8.4)", 40)));
} else if (((G_NV((*(P117)rt_nil_check(F->y_2834)).kind_) != ((rt_int)8LL)) && (G_NV((*(P117)rt_nil_check(F->y_2834)).kind_) != ((rt_int)9LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->n_2833)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_2833)).name_)), rt_g_lit(" is not a package or a task", 27)));
} else if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2834)).name_)), rt_g_lit("TEXT_IO", 7)) && ((*(P117)rt_nil_check(F->y_2834)).members_ == NULL))) {
F->z_2836 = f_new_sym_469(F->up, ((rt_int)2LL), f_mk_227(F->up, rt_g_lit("$TEXT_IO", 8)));
(*(P117)rt_nil_check(F->z_2836)).t_ = F->up->ty_void_161;
f_define_464(F->up, F->z_2836, G_NV((*(P174)rt_nil_check(F->n_2833)).line_));
} else {
F->m_2835 = (*(P117)rt_nil_check(F->y_2834)).members_;
while ((F->m_2835 != NULL)) {
if ((!G_NV((*(P117)rt_nil_check(F->m_2835)).hidden_))) {
F->old_2837 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2835)).name_)));
if ((!f_overloadable_440(F->up, F->m_2835))) {
if ((F->old_2837 == NULL)) {
f_copy_sym_1053(F->up, F->m_2835, &F->z_2836);
(*(P117)rt_nil_check(F->z_2836)).from_use_ = 1;
f_define_464(F->up, F->z_2836, G_NV((*(P174)rt_nil_check(F->n_2833)).line_));
} else if (((G_NV((*(P117)rt_nil_check(F->old_2837)).from_use_) && (G_NV((*(P117)rt_nil_check(F->old_2837)).depth_) == G_NV(F->up->depth_120))) && (!f_same_entity_1072(F->up, F->old_2837, F->m_2835)))) {
(*(P117)rt_nil_check(F->old_2837)).kind_ = ((rt_int)12LL);
}
} else {
F->clash_2838 = 0;
F->z_2836 = ({ A116 ix2841 = F->up->table_119; ix2841.p[rt_index(f_hash_416(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2835)).name_))), ix2841.lo, ix2841.hi) - ix2841.lo]; });
while ((F->z_2836 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_2836)).name_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2835)).name_))) && f_overloadable_440(F->up, F->z_2836)) && f_visible_sym_421(F->up, F->z_2836))) {
if (f_same_entity_1072(F->up, F->z_2836, F->m_2835)) {
F->clash_2838 = 1;
} else if (((((!G_NV((*(P117)rt_nil_check(F->z_2836)).from_use_)) && f_same_types_455(F->up, (*(P117)rt_nil_check(F->z_2836)).params_, (*(P117)rt_nil_check(F->m_2835)).params_)) && f_same_443(F->up, (*(P117)rt_nil_check(F->z_2836)).result_, (*(P117)rt_nil_check(F->m_2835)).result_)) && ((G_NV((*(P117)rt_nil_check(F->z_2836)).kind_) != ((rt_int)7LL)) || f_same_443(F->up, (*(P117)rt_nil_check(F->z_2836)).t_, (*(P117)rt_nil_check(F->m_2835)).t_)))) {
F->clash_2838 = 1;
}
}
F->z_2836 = (*(P117)rt_nil_check(F->z_2836)).chain_;
}
L_end_2842: ;
if (((!G_NV(F->clash_2838)) && f_usable_over_1069(F->up, F->old_2837))) {
f_copy_sym_1053(F->up, F->m_2835, &F->z_2836);
(*(P117)rt_nil_check(F->z_2836)).from_use_ = 1;
f_define_464(F->up, F->z_2836, G_NV((*(P174)rt_nil_check(F->n_2833)).line_));
}
}
}
F->m_2835 = (*(P117)rt_nil_check(F->m_2835)).mnext_;
}
L_end_2840: ;
}
F->n_2833 = (*(P174)rt_nil_check(F->n_2833)).next_;
}
L_end_2839: ;
ret_:

  return;
}

static int f_usable_over_1069(struct f_greenc_1fr *up_, P117 old_1068) {
  struct f_usable_over_1069fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->old_1068 = old_1068;
if ((F->old_1068 == NULL)) {
F->result_ = 1;
goto ret_;
}
F->result_ = (f_overloadable_440(F->up, F->old_1068) || G_NV((*(P117)rt_nil_check(F->old_1068)).from_use_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_entity_1072(struct f_greenc_1fr *up_, P117 a_1070, P117 b_1071) {
  struct f_same_entity_1072fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_1070 = a_1070;
F->b_1071 = b_1071;
if ((G_NV((*(P117)rt_nil_check(F->a_1070)).kind_) != G_NV((*(P117)rt_nil_check(F->b_1071)).kind_))) {
F->result_ = 0;
goto ret_;
} else if ((((*(P117)rt_nil_check(F->a_1070)).cname_ != NULL) && ((*(P117)rt_nil_check(F->b_1071)).cname_ != NULL))) {
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->a_1070)).cname_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_1071)).cname_)));
goto ret_;
} else if ((((*(P117)rt_nil_check(F->a_1070)).access_path_ != NULL) && ((*(P117)rt_nil_check(F->b_1071)).access_path_ != NULL))) {
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->a_1070)).access_path_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_1071)).access_path_)));
goto ret_;
}
F->result_ = (((*(P117)rt_nil_check(F->a_1070)).t_ == (*(P117)rt_nil_check(F->b_1071)).t_) && ((*(P117)rt_nil_check(F->a_1070)).decl_ == (*(P117)rt_nil_check(F->b_1071)).decl_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_fits_1077(struct f_greenc_1fr *up_, P117 y_1073, P174 args_1074, P122 want_1075, int *ok_1076) {
  struct f_fits_1077fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1073 = y_1073;
F->args_1074 = args_1074;
F->want_1075 = want_1075;
F->ok_1076 = ok_1076;
F->pm_2843 = NULL;
F->pm_2843 = (*(P117)rt_nil_check(F->y_1073)).params_;
F->a_2844 = NULL;
F->t_2845 = NULL;
F->c_2846 = NULL;
F->v_2847 = NULL;
F->ro_2848 = INT_MIN;
F->saved_2849 = NULL;
F->saved_2849 = F->up->code_136;
F->used_2850 = INT64_MIN;
F->used_2850 = ((rt_int)0LL);
(*F->ok_1076) = 1;
F->up->trial_155 = rt_add(G_NV(F->up->trial_155), ((rt_int)1LL));
F->up->code_136 = f_new_buffer_249(F->up);
{
{ rt_frame xf2852;
if (RT_TRY(xf2852)) {
while ((G_NV((*F->ok_1076)) && (F->pm_2843 != NULL))) {
F->a_2844 = f_actual_for_1003(F->up, F->args_1074, F->pm_2843, (*(P117)rt_nil_check(F->y_1073)).params_);
if ((F->a_2844 == NULL)) {
(*F->ok_1076) = ((*(P1812)rt_nil_check(F->pm_2843)).dflt_ != NULL);
} else {
F->used_2850 = rt_add(G_NV(F->used_2850), ((rt_int)1LL));
if ((((G_NV((*(P174)rt_nil_check(F->a_2844)).flag_) != ((rt_int)0LL)) && (G_NV((*(P174)rt_nil_check(F->a_2844)).flag_) != ((rt_int)4LL))) && (G_NV((*(P174)rt_nil_check(F->a_2844)).flag_) != G_NV((*(P1812)rt_nil_check(F->pm_2843)).mode_)))) {
(*F->ok_1076) = 0;
} else if ((G_NV((*(P1812)rt_nil_check(F->pm_2843)).mode_) == ((rt_int)1LL))) {
f_gexpr_805(F->up, F->a_2844, (*(P1812)rt_nil_check(F->pm_2843)).t_, &F->t_2845, &F->v_2847);
(*F->ok_1076) = (f_same_443(F->up, F->t_2845, (*(P1812)rt_nil_check(F->pm_2843)).t_) || ((G_NV((*(P122)rt_nil_check(F->t_2845)).kind_) == ((rt_int)10LL)) && (G_NV((*(P122)rt_nil_check((*(P1812)rt_nil_check(F->pm_2843)).t_)).kind_) == ((rt_int)8LL))));
} else {
f_lvalue_761(F->up, F->a_2844, &F->v_2847, &F->t_2845, &F->c_2846, &F->ro_2848);
 (void)rt_range(F->ro_2848, 0, 1);
(*F->ok_1076) = f_same_443(F->up, F->t_2845, (*(P1812)rt_nil_check(F->pm_2843)).t_);
}
}
F->pm_2843 = (*(P1812)rt_nil_check(F->pm_2843)).next_;
}
L_end_2854: ;
if ((G_NV(F->used_2850) != f_list_len_307(F->up, F->args_1074))) {
(*F->ok_1076) = 0;
}
if (((G_NV((*F->ok_1076)) && (F->want_1075 != NULL)) && (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_1073)).result_)).kind_) != ((rt_int)9LL)))) {
(*F->ok_1076) = (f_same_443(F->up, (*(P117)rt_nil_check(F->y_1073)).result_, F->want_1075) || (G_NV((*(P122)rt_nil_check(F->want_1075)).kind_) == ((rt_int)9LL)));
}
RT_POP(xf2852);
} else {
RT_POP(xf2852);
int x2853 = rt_xcur;
if (rt_g_aborted()) rt_raise(x2853);
if (0 || x2853 == ex_compile_error_108) {
(*F->ok_1076) = 0;
} else {
rt_raise(x2853);
}
}
}

}
L_end_2851: ;
F->up->trial_155 = rt_sub(G_NV(F->up->trial_155), ((rt_int)1LL));
F->up->code_136 = F->saved_2849;
ret_:

  return;
}

static int f_is_builtin_1079(struct f_greenc_1fr *up_, rt_gstr n_1078) {
  struct f_is_builtin_1079fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1078 = cp_rt_gstr(n_1078);
F->result_ = (((eq_rt_gstr(F->n_1078, rt_g_lit("PUT", 3)) || eq_rt_gstr(F->n_1078, rt_g_lit("GET", 3))) || eq_rt_gstr(F->n_1078, rt_g_lit("ABS", 3))) || eq_rt_gstr(F->n_1078, rt_g_lit("SET_PRIORITY", 12)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_resolve_overload_1086(struct f_greenc_1fr *up_, rt_gstr name_1080, P174 args_1081, int is_stmt_1082, P122 want_1083, rt_int line_1084, P117 *y_1085) {
  struct f_resolve_overload_1086fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1080 = cp_rt_gstr(name_1080);
F->args_1081 = args_1081;
F->is_stmt_1082 = is_stmt_1082;
F->want_1083 = want_1083;
F->line_1084 = line_1084;
F->y_1085 = y_1085;
F->z_2855 = NULL;
F->w_2856 = NULL;
F->first_2857 = NULL;
F->found_2858 = NULL;
F->n_2859 = INT64_MIN;
F->n_2859 = ((rt_int)0LL);
F->ok_2860 = INT_MIN;
F->hidden_2861 = INT_MIN;
{ rt_int lo2864 = ((rt_int)1LL), hi2865 = ((rt_int)2LL);
for (rt_int it2866 = lo2864; it2866 <= hi2865; it2866++) {
F->pass_2863 = it2866;
F->z_2855 = ({ A116 ix2867 = F->up->table_119; ix2867.p[rt_index(f_hash_416(F->up, F->name_1080), ix2867.lo, ix2867.hi) - ix2867.lo]; });
F->n_2859 = ((rt_int)0LL);
F->found_2858 = NULL;
while ((F->z_2855 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_2855)).name_)), F->name_1080) && ((G_NV((*(P117)rt_nil_check(F->z_2855)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->z_2855)).kind_) == ((rt_int)4LL)))) && f_visible_sym_421(F->up, F->z_2855))) {
if ((F->first_2857 == NULL)) {
F->first_2857 = F->z_2855;
}
F->hidden_2861 = 0;
F->w_2856 = ({ A116 ix2869 = F->up->table_119; ix2869.p[rt_index(f_hash_416(F->up, F->name_1080), ix2869.lo, ix2869.hi) - ix2869.lo]; });
while ((F->w_2856 != F->z_2855)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->w_2856)).name_)), F->name_1080) && ((G_NV((*(P117)rt_nil_check(F->w_2856)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->w_2856)).kind_) == ((rt_int)4LL))))) {
if (f_same_profile_1089(F->up, F->w_2856, F->z_2855)) {
F->hidden_2861 = 1;
}
}
F->w_2856 = (*(P117)rt_nil_check(F->w_2856)).chain_;
}
L_end_2870: ;
if (((!G_NV(F->hidden_2861)) && ((G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->z_2855)).result_)).kind_) == ((rt_int)9LL)) == F->is_stmt_1082))) {
if ((F->pass_2863 == ((rt_int)1LL))) {
f_fits_1077(F->up, F->z_2855, F->args_1081, F->want_1083, &F->ok_2860);
 (void)rt_range(F->ok_2860, 0, 1);
} else {
f_fits_1077(F->up, F->z_2855, F->args_1081, NULL, &F->ok_2860);
 (void)rt_range(F->ok_2860, 0, 1);
}
if (G_NV(F->ok_2860)) {
if ((F->found_2858 != NULL)) {
f_fail_248(F->up, F->line_1084, cat_rt_gstr(cat_rt_gstr(rt_g_lit("the call of ", 12), F->name_1080), rt_g_lit(" is ambiguous: several declarations fit (RM79 6.6)", 50)));
}
F->found_2858 = F->z_2855;
}
}
}
F->z_2855 = (*(P117)rt_nil_check(F->z_2855)).chain_;
}
L_end_2868: ;
if ((F->found_2858 != NULL)) {
(*F->y_1085) = F->found_2858;
goto ret_;
}
}
}
L_end_2862: ;
if (f_is_builtin_1079(F->up, F->name_1080)) {
(*F->y_1085) = NULL;
goto ret_;
}
F->z_2855 = ({ A116 ix2871 = F->up->table_119; ix2871.p[rt_index(f_hash_416(F->up, F->name_1080), ix2871.lo, ix2871.hi) - ix2871.lo]; });
while ((F->z_2855 != NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_2855)).name_)), F->name_1080) && ((G_NV((*(P117)rt_nil_check(F->z_2855)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->z_2855)).kind_) == ((rt_int)4LL))))) {
F->n_2859 = rt_add(G_NV(F->n_2859), ((rt_int)1LL));
}
F->z_2855 = (*(P117)rt_nil_check(F->z_2855)).chain_;
}
L_end_2872: ;
if ((G_NV(F->n_2859) > ((rt_int)1LL))) {
f_fail_248(F->up, F->line_1084, cat_rt_gstr(cat_rt_gstr(rt_g_lit("no declaration of ", 18), F->name_1080), rt_g_lit(" fits these actual parameters", 29)));
}
(*F->y_1085) = F->first_2857;
ret_:

  return;
}

static int f_same_profile_1089(struct f_greenc_1fr *up_, P117 a_1087, P117 b_1088) {
  struct f_same_profile_1089fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_1087 = a_1087;
F->b_1088 = b_1088;
if (((!f_same_types_455(F->up, (*(P117)rt_nil_check(F->a_1087)).params_, (*(P117)rt_nil_check(F->b_1088)).params_)) || (!f_same_443(F->up, (*(P117)rt_nil_check(F->a_1087)).result_, (*(P117)rt_nil_check(F->b_1088)).result_)))) {
F->result_ = 0;
goto ret_;
} else if ((((*(P117)rt_nil_check(F->a_1087)).cname_ != NULL) && ((*(P117)rt_nil_check(F->b_1088)).cname_ != NULL))) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->a_1087)).cname_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_1088)).cname_)))) {
F->result_ = 1;
goto ret_;
}
}
F->result_ = f_same_signature_458(F->up, (*(P117)rt_nil_check(F->a_1087)).params_, (*(P117)rt_nil_check(F->b_1088)).params_);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_resolve_member_overload_1097(struct f_greenc_1fr *up_, rt_gstr p_1090, rt_gstr name_1091, P174 args_1092, int is_stmt_1093, P122 want_1094, rt_int line_1095, P117 *y_1096) {
  struct f_resolve_member_overload_1097fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1090 = cp_rt_gstr(p_1090);
F->name_1091 = cp_rt_gstr(name_1091);
F->args_1092 = args_1092;
F->is_stmt_1093 = is_stmt_1093;
F->want_1094 = want_1094;
F->line_1095 = line_1095;
F->y_1096 = y_1096;
F->pk_2873 = NULL;
F->pk_2873 = f_lookup_path_1042(F->up, F->p_1090);
F->z_2874 = NULL;
F->found_2875 = NULL;
F->n_2876 = INT64_MIN;
F->n_2876 = ((rt_int)0LL);
F->ok_2877 = INT_MIN;
if ((F->pk_2873 == NULL)) {
goto ret_;
}
{ rt_int lo2880 = ((rt_int)1LL), hi2881 = ((rt_int)2LL);
for (rt_int it2882 = lo2880; it2882 <= hi2881; it2882++) {
F->pass_2879 = it2882;
F->z_2874 = (*(P117)rt_nil_check(F->pk_2873)).members_;
F->n_2876 = ((rt_int)0LL);
F->found_2875 = NULL;
while ((F->z_2874 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_2874)).name_)), F->name_1091) && ((G_NV((*(P117)rt_nil_check(F->z_2874)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->z_2874)).kind_) == ((rt_int)4LL)))) && (!G_NV((*(P117)rt_nil_check(F->z_2874)).hidden_)))) {
F->n_2876 = rt_add(G_NV(F->n_2876), ((rt_int)1LL));
if (((G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->z_2874)).result_)).kind_) == ((rt_int)9LL)) == F->is_stmt_1093)) {
if ((F->pass_2879 == ((rt_int)1LL))) {
f_fits_1077(F->up, F->z_2874, F->args_1092, F->want_1094, &F->ok_2877);
 (void)rt_range(F->ok_2877, 0, 1);
} else {
f_fits_1077(F->up, F->z_2874, F->args_1092, NULL, &F->ok_2877);
 (void)rt_range(F->ok_2877, 0, 1);
}
if (G_NV(F->ok_2877)) {
if (((F->found_2875 != NULL) && (!f_same_profile_1089(F->up, F->found_2875, F->z_2874)))) {
f_fail_248(F->up, F->line_1095, cat_rt_gstr(cat_rt_gstr(rt_g_lit("the call of ", 12), F->name_1091), rt_g_lit(" is ambiguous: several declarations fit (RM79 6.6)", 50)));
}
F->found_2875 = F->z_2874;
}
}
}
F->z_2874 = (*(P117)rt_nil_check(F->z_2874)).mnext_;
}
L_end_2883: ;
if ((F->found_2875 != NULL)) {
(*F->y_1096) = F->found_2875;
goto ret_;
}
}
}
L_end_2878: ;
if ((G_NV(F->n_2876) > ((rt_int)1LL))) {
f_fail_248(F->up, F->line_1095, cat_rt_gstr(cat_rt_gstr(rt_g_lit("no declaration of ", 18), F->name_1091), rt_g_lit(" fits these actual parameters", 29)));
}
ret_:

  return;
}

static void f_user_operator_1103(struct f_greenc_1fr *up_, P174 e_1098, P122 want_1099, P122 *t_1100, P140 *r_1101, int *done_1102) {
  struct f_user_operator_1103fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1098 = e_1098;
F->want_1099 = want_1099;
F->t_1100 = t_1100;
F->r_1101 = r_1101;
F->done_1102 = done_1102;
F->op_2884 = NULL;
F->op_2884 = (*(P174)rt_nil_check(F->e_1098)).name_;
F->negate_2885 = INT_MIN;
F->negate_2885 = 0;
F->y_2886 = NULL;
F->call_2887 = NULL;
F->fname_2888 = NULL;
F->l_2889 = NULL;
F->rt_2890 = NULL;
F->ok_2891 = INT_MIN;
(*F->done_1102) = 0;
if (eq_rt_gstr((*(P140)rt_nil_check(F->op_2884)), rt_g_lit("/=", 2))) {
F->op_2884 = f_mk_227(F->up, rt_g_lit("=", 1));
F->negate_2885 = 1;
}
if ((f_lookup_423(F->up, (*(P140)rt_nil_check(F->op_2884))) == NULL)) {
goto ret_;
}
F->l_2889 = f_nn_301(F->up, G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1098)).a_)).kind_), G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1098)).a_)).line_));
as_R175(&(*(P174)rt_nil_check(F->l_2889)), (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1098)).a_)));
(*(P174)rt_nil_check(F->l_2889)).next_ = NULL;
(*(P174)rt_nil_check(F->l_2889)).formal_ = NULL;
(*(P174)rt_nil_check(F->l_2889)).flag_ = ((rt_int)0LL);
if ((G_NV((*(P174)rt_nil_check(F->e_1098)).kind_) == ((rt_int)7LL))) {
F->rt_2890 = f_nn_301(F->up, G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1098)).b_)).kind_), G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1098)).b_)).line_));
as_R175(&(*(P174)rt_nil_check(F->rt_2890)), (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1098)).b_)));
(*(P174)rt_nil_check(F->rt_2890)).next_ = NULL;
(*(P174)rt_nil_check(F->rt_2890)).formal_ = NULL;
(*(P174)rt_nil_check(F->rt_2890)).flag_ = ((rt_int)0LL);
(*(P174)rt_nil_check(F->l_2889)).next_ = F->rt_2890;
}
F->y_2886 = ({ A116 ix2892 = F->up->table_119; ix2892.p[rt_index(f_hash_416(F->up, (*(P140)rt_nil_check(F->op_2884))), ix2892.lo, ix2892.hi) - ix2892.lo]; });
while ((F->y_2886 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2886)).name_)), (*(P140)rt_nil_check(F->op_2884))) && (G_NV((*(P117)rt_nil_check(F->y_2886)).kind_) == ((rt_int)3LL))) && f_visible_sym_421(F->up, F->y_2886))) {
f_fits_1077(F->up, F->y_2886, F->l_2889, NULL, &F->ok_2891);
 (void)rt_range(F->ok_2891, 0, 1);
if (G_NV(F->ok_2891)) {
F->fname_2888 = f_nn_301(F->up, ((rt_int)5LL), G_NV((*(P174)rt_nil_check(F->e_1098)).line_));
(*(P174)rt_nil_check(F->fname_2888)).name_ = F->op_2884;
F->call_2887 = f_nn_301(F->up, ((rt_int)8LL), G_NV((*(P174)rt_nil_check(F->e_1098)).line_));
(*(P174)rt_nil_check(F->call_2887)).a_ = F->fname_2888;
(*(P174)rt_nil_check(F->call_2887)).b_ = F->l_2889;
F->up->call_want_215 = NULL;
f_gcall_with_1033(F->up, F->call_2887, F->y_2886, &(*F->t_1100), &(*F->r_1101));
if (G_NV(F->negate_2885)) {
(*F->r_1101) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!", 2), (*(P140)rt_nil_check((*F->r_1101)))), one_rt_gstr(41)));
}
(*F->done_1102) = 1;
goto ret_;
}
}
F->y_2886 = (*(P117)rt_nil_check(F->y_2886)).chain_;
}
L_end_2893: ;
ret_:

  return;
}

static void f_task_p_1105(struct f_greenc_1fr *up_, P174 *res_1104) {
  struct f_task_p_1105fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1104 = res_1104;
F->x_2894 = NULL;
F->r_2895 = NULL;
F->line_2896 = INT64_MIN;
F->line_2896 = f_cur_line_308(F->up);
f_expect_kw_323(F->up, rt_g_lit("TASK", 4));
if (f_at_kw_310(F->up, rt_g_lit("BODY", 4))) {
f_skip_321(F->up);
F->x_2894 = f_nn_301(F->up, ((rt_int)51LL), G_NV(F->line_2896));
f_expect_id_327(F->up, &(*(P174)rt_nil_check(F->x_2894)).name_);
f_expect_kw_323(F->up, rt_g_lit("IS", 2));
f_body_part_392(F->up, F->x_2894);
} else {
F->x_2894 = f_nn_301(F->up, ((rt_int)50LL), G_NV(F->line_2896));
f_expect_id_327(F->up, &(*(P174)rt_nil_check(F->x_2894)).name_);
if (((f_at_kw_310(F->up, rt_g_lit("IS", 2)) && (f_kind_at_316(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_318(F->up, ((rt_int)1LL)), rt_g_lit("NEW", 3)))) {
f_instantiation_1238(F->up, F->x_2894, &(*F->res_1104));
goto ret_;
}
if (f_at_kw_310(F->up, rt_g_lit("RENAMES", 7))) {
f_skip_321(F->up);
(*(P174)rt_nil_check(F->x_2894)).flag_ = ((rt_int)3LL);
f_name_p_359(F->up, &(*(P174)rt_nil_check(F->x_2894)).b_);
f_expect_op_325(F->up, rt_g_lit(";", 1));
(*F->res_1104) = F->x_2894;
goto ret_;
}
if (f_at_op_312(F->up, rt_g_lit("(", 1))) {
f_skip_321(F->up);
f_discrete_range_p_363(F->up, &(*(P174)rt_nil_check(F->x_2894)).a_);
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->x_2894)).a_)).kind_) == ((rt_int)5LL))) {
F->r_2895 = f_nn_301(F->up, ((rt_int)80LL), G_NV(F->line_2896));
(*(P174)rt_nil_check(F->r_2895)).name_ = (*(P174)rt_nil_check((*(P174)rt_nil_check(F->x_2894)).a_)).name_;
(*(P174)rt_nil_check(F->x_2894)).a_ = F->r_2895;
}
f_expect_op_325(F->up, rt_g_lit(")", 1));
}
if (f_at_kw_310(F->up, rt_g_lit("IS", 2))) {
f_skip_321(F->up);
f_decl_part_380(F->up, &(*(P174)rt_nil_check(F->x_2894)).c_);
if (f_at_kw_310(F->up, rt_g_lit("PRIVATE", 7))) {
f_skip_321(F->up);
f_decl_part_380(F->up, &(*(P174)rt_nil_check(F->x_2894)).d_);
}
f_expect_kw_323(F->up, rt_g_lit("END", 3));
}
}
if (f_at_kind_314(F->up, ((rt_int)1LL))) {
f_skip_321(F->up);
}
f_expect_op_325(F->up, rt_g_lit(";", 1));
(*F->res_1104) = F->x_2894;
ret_:

  return;
}

static void f_entry_p_1107(struct f_greenc_1fr *up_, P174 *res_1106) {
  struct f_entry_p_1107fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1106 = res_1106;
F->x_2897 = NULL;
f_expect_kw_323(F->up, rt_g_lit("ENTRY", 5));
F->x_2897 = f_nn_301(F->up, ((rt_int)52LL), f_cur_line_308(F->up));
f_expect_id_327(F->up, &(*(P174)rt_nil_check(F->x_2897)).name_);
if ((f_at_op_312(F->up, rt_g_lit("(", 1)) && (!((f_kind_at_316(F->up, ((rt_int)1LL)) == ((rt_int)1LL)) && (eq_rt_gstr(f_text_at_318(F->up, ((rt_int)2LL)), rt_g_lit(":", 1)) || eq_rt_gstr(f_text_at_318(F->up, ((rt_int)2LL)), rt_g_lit(",", 1))))))) {
f_skip_321(F->up);
if (((f_at_kind_314(F->up, ((rt_int)1LL)) && (f_kind_at_316(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && eq_rt_gstr(f_text_at_318(F->up, ((rt_int)1LL)), rt_g_lit(")", 1)))) {
f_subtype_ind_365(F->up, &(*(P174)rt_nil_check(F->x_2897)).b_);
} else {
f_discrete_range_p_363(F->up, &(*(P174)rt_nil_check(F->x_2897)).b_);
}
f_expect_op_325(F->up, rt_g_lit(")", 1));
}
if (f_at_op_312(F->up, rt_g_lit("(", 1))) {
f_formal_part_386(F->up, &(*(P174)rt_nil_check(F->x_2897)).a_);
}
f_expect_op_325(F->up, rt_g_lit(";", 1));
(*F->res_1106) = F->x_2897;
ret_:

  return;
}

static void f_accept_p_1109(struct f_greenc_1fr *up_, P174 *res_1108) {
  struct f_accept_p_1109fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1108 = res_1108;
F->x_2898 = NULL;
f_expect_kw_323(F->up, rt_g_lit("ACCEPT", 6));
F->x_2898 = f_nn_301(F->up, ((rt_int)34LL), f_cur_line_308(F->up));
f_expect_id_327(F->up, &(*(P174)rt_nil_check(F->x_2898)).name_);
if ((f_at_op_312(F->up, rt_g_lit("(", 1)) && (!((f_kind_at_316(F->up, ((rt_int)1LL)) == ((rt_int)1LL)) && (eq_rt_gstr(f_text_at_318(F->up, ((rt_int)2LL)), rt_g_lit(":", 1)) || eq_rt_gstr(f_text_at_318(F->up, ((rt_int)2LL)), rt_g_lit(",", 1))))))) {
f_skip_321(F->up);
f_expr_338(F->up, &(*(P174)rt_nil_check(F->x_2898)).c_);
f_expect_op_325(F->up, rt_g_lit(")", 1));
}
if (f_at_op_312(F->up, rt_g_lit("(", 1))) {
f_formal_part_386(F->up, &(*(P174)rt_nil_check(F->x_2898)).a_);
}
if (f_at_kw_310(F->up, rt_g_lit("DO", 2))) {
f_skip_321(F->up);
(*(P174)rt_nil_check(F->x_2898)).flag_ = ((rt_int)1LL);
f_statements_399(F->up, &(*(P174)rt_nil_check(F->x_2898)).b_);
f_expect_kw_323(F->up, rt_g_lit("END", 3));
if (f_at_kind_314(F->up, ((rt_int)1LL))) {
f_skip_321(F->up);
}
}
f_expect_op_325(F->up, rt_g_lit(";", 1));
(*F->res_1108) = F->x_2898;
ret_:

  return;
}

static void f_delay_p_1111(struct f_greenc_1fr *up_, P174 *res_1110) {
  struct f_delay_p_1111fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1110 = res_1110;
F->x_2899 = NULL;
f_expect_kw_323(F->up, rt_g_lit("DELAY", 5));
F->x_2899 = f_nn_301(F->up, ((rt_int)32LL), f_cur_line_308(F->up));
f_simple_expr_346(F->up, &(*(P174)rt_nil_check(F->x_2899)).a_);
f_expect_op_325(F->up, rt_g_lit(";", 1));
(*F->res_1110) = F->x_2899;
ret_:

  return;
}

static void f_designators_1113(struct f_greenc_1fr *up_, P174 *res_1112) {
  struct f_designators_1113fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1112 = res_1112;
F->head_2900 = NULL;
F->tail_2901 = NULL;
F->n_2902 = NULL;
for (;;) {
f_name_p_359(F->up, &F->n_2902);
f_append_305(F->up, &F->head_2900, &F->tail_2901, F->n_2902);
if ((!f_at_op_312(F->up, rt_g_lit(",", 1)))) {
goto L_end_2903;
}
f_skip_321(F->up);
}
L_end_2903: ;
f_expect_op_325(F->up, rt_g_lit(";", 1));
(*F->res_1112) = F->head_2900;
ret_:

  return;
}

static void f_parse_task_statement_1115(struct f_greenc_1fr *up_, P174 *res_1114) {
  struct f_parse_task_statement_1115fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1114 = res_1114;
F->x_2904 = NULL;
F->alt_2905 = NULL;
F->head_2906 = NULL;
F->tail_2907 = NULL;
F->line_2908 = INT64_MIN;
F->line_2908 = f_cur_line_308(F->up);
(*F->res_1114) = NULL;
if (f_at_kw_310(F->up, rt_g_lit("INITIATE", 8))) {
f_skip_321(F->up);
F->x_2904 = f_nn_301(F->up, ((rt_int)33LL), G_NV(F->line_2908));
f_designators_1113(F->up, &(*(P174)rt_nil_check(F->x_2904)).a_);
(*F->res_1114) = F->x_2904;
} else if (f_at_kw_310(F->up, rt_g_lit("ABORT", 5))) {
f_skip_321(F->up);
F->x_2904 = f_nn_301(F->up, ((rt_int)36LL), G_NV(F->line_2908));
f_designators_1113(F->up, &(*(P174)rt_nil_check(F->x_2904)).a_);
(*F->res_1114) = F->x_2904;
} else if (f_at_kw_310(F->up, rt_g_lit("DELAY", 5))) {
f_delay_p_1111(F->up, &(*F->res_1114));
} else if (f_at_kw_310(F->up, rt_g_lit("ACCEPT", 6))) {
f_accept_p_1109(F->up, &(*F->res_1114));
} else if (f_at_kw_310(F->up, rt_g_lit("SELECT", 6))) {
f_skip_321(F->up);
F->x_2904 = f_nn_301(F->up, ((rt_int)35LL), G_NV(F->line_2908));
for (;;) {
F->alt_2905 = f_nn_301(F->up, ((rt_int)64LL), f_cur_line_308(F->up));
if (f_at_kw_310(F->up, rt_g_lit("WHEN", 4))) {
f_skip_321(F->up);
f_expr_338(F->up, &(*(P174)rt_nil_check(F->alt_2905)).a_);
f_expect_op_325(F->up, rt_g_lit("=>", 2));
}
if (f_at_kw_310(F->up, rt_g_lit("ACCEPT", 6))) {
f_accept_p_1109(F->up, &(*(P174)rt_nil_check(F->alt_2905)).b_);
} else if (f_at_kw_310(F->up, rt_g_lit("DELAY", 5))) {
f_delay_p_1111(F->up, &(*(P174)rt_nil_check(F->alt_2905)).b_);
} else {
f_perror_320(F->up, rt_g_lit("a select alternative starts with accept or delay", 48));
}
f_statements_399(F->up, &(*(P174)rt_nil_check(F->alt_2905)).c_);
f_append_305(F->up, &F->head_2906, &F->tail_2907, F->alt_2905);
if ((!f_at_kw_310(F->up, rt_g_lit("OR", 2)))) {
goto L_end_2909;
}
f_skip_321(F->up);
}
L_end_2909: ;
if (f_at_kw_310(F->up, rt_g_lit("ELSE", 4))) {
f_skip_321(F->up);
(*(P174)rt_nil_check(F->x_2904)).flag_ = ((rt_int)1LL);
f_statements_399(F->up, &(*(P174)rt_nil_check(F->x_2904)).b_);
}
f_expect_kw_323(F->up, rt_g_lit("END", 3));
f_expect_kw_323(F->up, rt_g_lit("SELECT", 6));
f_expect_op_325(F->up, rt_g_lit(";", 1));
(*(P174)rt_nil_check(F->x_2904)).a_ = F->head_2906;
(*F->res_1114) = F->x_2904;
}
ret_:

  return;
}

static void f_path_at_1119(struct f_greenc_1fr *up_, rt_int level_1116, rt_gstr field_1117, P140 *r_1118) {
  struct f_path_at_1119fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->level_1116 = level_1116;
F->field_1117 = cp_rt_gstr(field_1117);
F->r_1118 = r_1118;
if ((F->level_1116 <= ((rt_int)0LL))) {
(*F->r_1118) = f_mk_227(F->up, F->field_1117);
goto ret_;
}
(*F->r_1118) = f_mk_227(F->up, rt_g_lit("F", 1));
{ rt_int lo2912 = ((rt_int)1LL), hi2913 = rt_sub(G_NV(F->up->cur_level_139), F->level_1116);
for (rt_int it2914 = lo2912; it2914 <= hi2913; it2914++) {
F->i_2911 = it2914;
(*F->r_1118) = f_mk_227(F->up, cat_rt_gstr((*(P140)rt_nil_check((*F->r_1118))), rt_g_lit("->up", 4)));
}
}
L_end_2910: ;
(*F->r_1118) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->r_1118))), rt_g_lit("->", 2)), F->field_1117));
ret_:

  return;
}

static int f_is_task_name_1121(struct f_greenc_1fr *up_, rt_gstr n_1120) {
  struct f_is_task_name_1121fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1120 = cp_rt_gstr(n_1120);
F->y_2915 = NULL;
F->y_2915 = f_lookup_423(F->up, F->n_1120);
if ((!(F->y_2915 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P117)rt_nil_check(F->y_2915)).kind_) == ((rt_int)9LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_task_of_1125(struct f_greenc_1fr *up_, P174 e_1122, P117 *y_1123, P174 *ix_1124) {
  struct f_task_of_1125fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1122 = e_1122;
F->y_1123 = y_1123;
F->ix_1124 = ix_1124;
F->n_2916 = NULL;
F->n_2916 = F->e_1122;
F->a_2917 = NULL;
(*F->ix_1124) = NULL;
if ((G_NV((*(P174)rt_nil_check(F->e_1122)).kind_) == ((rt_int)5LL))) {
F->a_2917 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1122)).name_)));
if (((F->a_2917 != NULL) && ((G_NV((*(P117)rt_nil_check(F->a_2917)).kind_) == ((rt_int)9LL)) && (G_NV((*(P117)rt_nil_check(F->a_2917)).flags_) == ((rt_int)4LL))))) {
f_task_of_1125(F->up, (*(P117)rt_nil_check(F->a_2917)).decl_, &(*F->y_1123), &(*F->ix_1124));
goto ret_;
}
}
if ((G_NV((*(P174)rt_nil_check(F->e_1122)).kind_) == ((rt_int)8LL))) {
F->n_2916 = (*(P174)rt_nil_check(F->e_1122)).a_;
(*F->ix_1124) = (*(P174)rt_nil_check(F->e_1122)).b_;
}
if ((G_NV((*(P174)rt_nil_check(F->n_2916)).kind_) != ((rt_int)5LL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1122)).line_), rt_g_lit("a task name is required", 23));
}
(*F->y_1123) = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_2916)).name_)));
if ((((*F->y_1123) == NULL) || (G_NV((*(P117)rt_nil_check((*F->y_1123))).kind_) != ((rt_int)9LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1122)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_2916)).name_)), rt_g_lit(" is not a task", 14)));
}
if ((((*F->ix_1124) != NULL) && ((*(P117)rt_nil_check((*F->y_1123))).c_ == NULL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1122)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_2916)).name_)), rt_g_lit(" is not a task family", 21)));
}
ret_:

  return;
}

static void f_own_index_1127(struct f_greenc_1fr *up_, P140 *r_1126) {
  struct f_own_index_1127fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_1126 = r_1126;
F->y_2918 = NULL;
F->y_2918 = f_lookup_423(F->up, rt_g_lit("INDEX_", 6));
if ((F->y_2918 == NULL)) {
f_fail_248(F->up, ((rt_int)0LL), rt_g_lit("not inside the body of a task family", 36));
}
f_access_of_742(F->up, F->y_2918, &(*F->r_1126));
ret_:

  return;
}

static void f_member_1132(struct f_greenc_1fr *up_, P117 y_1128, rt_gstr arr_1129, rt_gstr i_1130, P140 *r_1131) {
  struct f_member_1132fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1128 = y_1128;
F->arr_1129 = cp_rt_gstr(arr_1129);
F->i_1130 = cp_rt_gstr(i_1130);
F->r_1131 = r_1131;
F->lo_2919 = NULL;
F->hi_2920 = NULL;
f_path_at_1119(F->up, G_NV((*(P117)rt_nil_check(F->y_1128)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1128)).cname_)), rt_g_lit("lo", 2)), &F->lo_2919);
f_path_at_1119(F->up, G_NV((*(P117)rt_nil_check(F->y_1128)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1128)).cname_)), rt_g_lit("hi", 2)), &F->hi_2920);
(*F->r_1131) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->arr_1129, rt_g_lit("[rt_index(", 10)), F->i_1130), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->lo_2919))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->hi_2920))), rt_g_lit(") - ", 4)), (*(P140)rt_nil_check(F->lo_2919))), one_rt_gstr(93)));
ret_:

  return;
}

static void f_act_path_1135(struct f_greenc_1fr *up_, P117 y_1133, P140 *r_1134) {
  struct f_act_path_1135fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1133 = y_1133;
F->r_1134 = r_1134;
F->i_2921 = NULL;
f_path_at_1119(F->up, G_NV((*(P117)rt_nil_check(F->y_1133)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1133)).cname_)), rt_g_lit("act", 3)), &(*F->r_1134));
if (((*(P117)rt_nil_check(F->y_1133)).c_ != NULL)) {
f_own_index_1127(F->up, &F->i_2921);
f_member_1132(F->up, F->y_1133, (*(P140)rt_nil_check((*F->r_1134))), (*(P140)rt_nil_check(F->i_2921)), &(*F->r_1134));
}
ret_:

  return;
}

static void f_act_path_i_1139(struct f_greenc_1fr *up_, P117 y_1136, rt_gstr i_1137, P140 *r_1138) {
  struct f_act_path_i_1139fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1136 = y_1136;
F->i_1137 = cp_rt_gstr(i_1137);
F->r_1138 = r_1138;
f_path_at_1119(F->up, G_NV((*(P117)rt_nil_check(F->y_1136)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1136)).cname_)), rt_g_lit("act", 3)), &(*F->r_1138));
f_member_1132(F->up, F->y_1136, (*(P140)rt_nil_check((*F->r_1138))), F->i_1137, &(*F->r_1138));
ret_:

  return;
}

static void f_entry_path_1143(struct f_greenc_1fr *up_, P117 y_1140, rt_gstr i_1141, P140 *r_1142) {
  struct f_entry_path_1143fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1140 = y_1140;
F->i_1141 = cp_rt_gstr(i_1141);
F->r_1142 = r_1142;
F->own_2922 = NULL;
f_path_at_1119(F->up, G_NV((*(P117)rt_nil_check(F->y_1140)).level_), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1140)).access_path_)), &(*F->r_1142));
if (((((*(P117)rt_nil_check(F->y_1140)).members_ != NULL) && ((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1140)).members_)).c_ != NULL)) && (!G_NV((*(P117)rt_nil_check(F->y_1140)).ro_)))) {
if ((({ rt_gstr at2923 = F->i_1141; at2923.hi >= at2923.lo ? at2923.hi - at2923.lo + 1 : (rt_int)0; }) == ((rt_int)0LL))) {
f_own_index_1127(F->up, &F->own_2922);
f_member_1132(F->up, (*(P117)rt_nil_check(F->y_1140)).members_, (*(P140)rt_nil_check((*F->r_1142))), (*(P140)rt_nil_check(F->own_2922)), &(*F->r_1142));
} else {
f_member_1132(F->up, (*(P117)rt_nil_check(F->y_1140)).members_, (*(P140)rt_nil_check((*F->r_1142))), F->i_1141, &(*F->r_1142));
}
}
ret_:

  return;
}

static void f_declare_slot_1146(struct f_greenc_1fr *up_, rt_gstr ctype_name_1144, rt_gstr field_1145) {
  struct f_declare_slot_1146fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->ctype_name_1144 = cp_rt_gstr(ctype_name_1144);
F->field_1145 = cp_rt_gstr(field_1145);
if (G_NV(F->up->in_func_138)) {
f_put_to_252(F->up, F->up->fields_buf_137, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), F->ctype_name_1144), one_rt_gstr(32)), F->field_1145), one_rt_gstr(59)));
} else {
f_put_to_252(F->up, F->up->out_globals_132, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), F->ctype_name_1144), one_rt_gstr(32)), F->field_1145), one_rt_gstr(59)));
}
ret_:

  return;
}

static void f_task_decl_1148(struct f_greenc_1fr *up_, P174 e_1147) {
  struct f_task_decl_1148fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1147 = e_1147;
if ((G_NV((*(P174)rt_nil_check(F->e_1147)).kind_) == ((rt_int)50LL))) {
f_task_spec_1160(F->up, F->e_1147);
} else if ((G_NV((*(P174)rt_nil_check(F->e_1147)).kind_) == ((rt_int)51LL))) {
f_task_body_1164(F->up, F->e_1147);
} else if ((G_NV((*(P174)rt_nil_check(F->e_1147)).kind_) == ((rt_int)52LL))) {
f_entry_decl_1162(F->up, F->e_1147);
} else {
f_generic_decl_1240(F->up, F->e_1147);
}
ret_:

  return;
}

static void f_family_arg_struct_1149(struct f_greenc_1fr *up_) {
  struct f_family_arg_struct_1149fr *F = rt_alloc(sizeof *F);
F->up = up_;
if ((!G_NV(F->up->famarg_done_204))) {
F->up->famarg_done_204 = 1;
f_put_to_252(F->up, F->up->out_types_128, rt_g_lit("struct rt_famarg { void *up; rt_int i; };", 41));
}
ret_:

  return;
}

static void f_family_bounds_1153(struct f_greenc_1fr *up_, P174 b_1150, P117 y_1151, P140 x_1152) {
  struct f_family_bounds_1153fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_1150 = b_1150;
F->y_1151 = y_1151;
F->x_1152 = x_1152;
F->lo_2924 = NULL;
F->hi_2925 = NULL;
F->v_2926 = NULL;
F->d_2927 = NULL;
F->vt_2928 = NULL;
F->c_2929 = NULL;
(*(P117)rt_nil_check(F->y_1151)).c_ = f_new_cons_472(F->up);
f_declare_slot_1146(F->up, rt_g_lit("rt_entry *", 10), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1151)).access_path_)));
f_declare_slot_1146(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1151)).cname_)), rt_g_lit("flo", 3)));
f_declare_slot_1146(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1151)).cname_)), rt_g_lit("fhi", 3)));
f_path_at_1119(F->up, G_NV((*(P117)rt_nil_check(F->y_1151)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1151)).cname_)), rt_g_lit("flo", 3)), &F->lo_2924);
f_path_at_1119(F->up, G_NV((*(P117)rt_nil_check(F->y_1151)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1151)).cname_)), rt_g_lit("fhi", 3)), &F->hi_2925);
f_discrete_bounds_521(F->up, F->b_1150, NULL, &F->vt_2928, &F->v_2926, &F->d_2927);
(*(P117)rt_nil_check(F->y_1151)).t_ = F->vt_2928;
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->lo_2924)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->v_2926))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->hi_2925))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->d_2927))), one_rt_gstr(59)));
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->x_1152)), rt_g_lit(" = rt_alloc(sizeof(rt_entry) * (size_t)(", 40)), (*(P140)rt_nil_check(F->hi_2925))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->lo_2924))), rt_g_lit(" \? ", 3)), (*(P140)rt_nil_check(F->hi_2925))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->lo_2924))), rt_g_lit(" + 1 : 1));", 11)));
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = 0; k_ <= ", 26), (*(P140)rt_nil_check(F->hi_2925))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->lo_2924))), rt_g_lit("; k_++) rt_entry_init(&", 23)), (*(P140)rt_nil_check(F->x_1152))), rt_g_lit("[k_]);", 6)));
ret_:

  return;
}

static void f_entry_family_slot_1158(struct f_greenc_1fr *up_, P117 y_1154, rt_gstr base_1155, rt_gstr i_1156, P140 *r_1157) {
  struct f_entry_family_slot_1158fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1154 = y_1154;
F->base_1155 = cp_rt_gstr(base_1155);
F->i_1156 = cp_rt_gstr(i_1156);
F->r_1157 = r_1157;
F->lo_2930 = NULL;
F->hi_2931 = NULL;
f_path_at_1119(F->up, G_NV((*(P117)rt_nil_check(F->y_1154)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1154)).cname_)), rt_g_lit("flo", 3)), &F->lo_2930);
f_path_at_1119(F->up, G_NV((*(P117)rt_nil_check(F->y_1154)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1154)).cname_)), rt_g_lit("fhi", 3)), &F->hi_2931);
(*F->r_1157) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->base_1155, rt_g_lit("[rt_index(", 10)), F->i_1156), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->lo_2930))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->hi_2931))), rt_g_lit(") - ", 4)), (*(P140)rt_nil_check(F->lo_2930))), one_rt_gstr(93)));
ret_:

  return;
}

static void f_task_spec_1160(struct f_greenc_1fr *up_, P174 e_1159) {
  struct f_task_spec_1160fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1159 = e_1159;
F->has_procs_2932 = INT_MIN;
F->has_procs_2932 = 0;
F->saved_defer_2933 = INT_MIN;
F->fields_2934 = NULL;
F->ct_2935 = NULL;
F->pm_2936 = NULL;
F->fp_2937 = NULL;
F->flo_2938 = NULL;
F->fhi_2939 = NULL;
F->y_2940 = NULL;
F->m_2941 = NULL;
F->z_2942 = NULL;
F->saved_2943 = NULL;
F->saved_2943 = F->up->cur_task_202;
F->d_2944 = NULL;
F->v_2945 = NULL;
F->p_2946 = NULL;
F->p2_2947 = NULL;
F->vt_2948 = NULL;
F->r_2949 = NULL;
F->y_2940 = f_new_sym_469(F->up, ((rt_int)9LL), (*(P174)rt_nil_check(F->e_1159)).name_);
f_new_name_230(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("t_", 2), f_lower_s_238(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1159)).name_)))), one_rt_gstr(95)), &(*(P117)rt_nil_check(F->y_2940)).cname_);
(*(P117)rt_nil_check(F->y_2940)).decl_ = F->e_1159;
if (G_NV(F->up->in_func_138)) {
(*(P117)rt_nil_check(F->y_2940)).level_ = G_NV(F->up->cur_level_139);
}
(*(P117)rt_nil_check(F->y_2940)).access_path_ = (*(P117)rt_nil_check(F->y_2940)).cname_;
f_declare_slot_1146(F->up, rt_g_lit("rt_taskdecl", 11), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2940)).cname_)), rt_g_lit("decl", 4)));
if (((*(P174)rt_nil_check(F->e_1159)).a_ != NULL)) {
(*(P117)rt_nil_check(F->y_2940)).c_ = f_new_cons_472(F->up);
f_declare_slot_1146(F->up, rt_g_lit("rt_act *", 8), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2940)).cname_)), rt_g_lit("act", 3)));
f_declare_slot_1146(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2940)).cname_)), rt_g_lit("lo", 2)));
f_declare_slot_1146(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2940)).cname_)), rt_g_lit("hi", 2)));
f_discrete_bounds_521(F->up, (*(P174)rt_nil_check(F->e_1159)).a_, NULL, &F->vt_2948, &F->v_2945, &F->d_2944);
(*(P117)rt_nil_check(F->y_2940)).t_ = F->vt_2948;
f_path_at_1119(F->up, G_NV((*(P117)rt_nil_check(F->y_2940)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2940)).cname_)), rt_g_lit("lo", 2)), &F->p_2946);
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->p_2946)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->v_2945))), one_rt_gstr(59)));
f_path_at_1119(F->up, G_NV((*(P117)rt_nil_check(F->y_2940)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2940)).cname_)), rt_g_lit("hi", 2)), &F->p2_2947);
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->p2_2947)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->d_2944))), one_rt_gstr(59)));
f_path_at_1119(F->up, G_NV((*(P117)rt_nil_check(F->y_2940)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2940)).cname_)), rt_g_lit("act", 3)), &F->v_2945);
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->v_2945)), rt_g_lit(" = rt_alloc(sizeof(rt_act) * (size_t)(", 38)), (*(P140)rt_nil_check(F->p2_2947))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->p_2946))), rt_g_lit(" \? ", 3)), (*(P140)rt_nil_check(F->p2_2947))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->p_2946))), rt_g_lit(" + 1 : 1));", 11)));
f_family_arg_struct_1149(F->up);
} else {
f_declare_slot_1146(F->up, rt_g_lit("rt_act", 6), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2940)).cname_)), rt_g_lit("act", 3)));
}
f_put_to_252(F->up, F->up->out_protos_131, cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2940)).cname_))), rt_g_lit("run(void *a);", 13)));
if ((!G_NV(F->up->in_func_138))) {
f_put_to_252(F->up, F->up->out_awaits_209, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  rt_await_decl(&", 17), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2940)).cname_))), rt_g_lit("decl);", 6)));
}
f_open_scope_465(F->up);
F->up->cur_task_202 = F->y_2940;
F->saved_defer_2933 = G_NV(F->up->defer_entry_structs_208);
F->up->defer_entry_structs_208 = 1;
f_decl_elements_652(F->up, (*(P174)rt_nil_check(F->e_1159)).c_);
f_decl_elements_652(F->up, (*(P174)rt_nil_check(F->e_1159)).d_);
F->up->defer_entry_structs_208 = G_NV(F->saved_defer_2933);
F->m_2941 = F->up->scope_stack_121;
while (((F->m_2941 != NULL) && (G_NV((*(P117)rt_nil_check(F->m_2941)).depth_) == G_NV(F->up->depth_120)))) {
if (((G_NV((*(P117)rt_nil_check(F->m_2941)).kind_) == ((rt_int)10LL)) && (!G_NV((*(P117)rt_nil_check(F->m_2941)).from_use_)))) {
F->fields_2934 = f_mk_227(F->up, rt_g_lit(" int dummy_;", 12));
F->pm_2936 = (*(P117)rt_nil_check(F->m_2941)).params_;
while ((F->pm_2936 != NULL)) {
f_ctype_491(F->up, (*(P1812)rt_nil_check(F->pm_2936)).t_, &F->ct_2935);
if ((G_NV((*(P1812)rt_nil_check(F->pm_2936)).mode_) == ((rt_int)1LL))) {
F->fields_2934 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->fields_2934)), one_rt_gstr(32)), (*(P140)rt_nil_check(F->ct_2935))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P1812)rt_nil_check(F->pm_2936)).cfield_))), one_rt_gstr(59)));
} else {
F->fields_2934 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->fields_2934)), one_rt_gstr(32)), (*(P140)rt_nil_check(F->ct_2935))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check((*(P1812)rt_nil_check(F->pm_2936)).cfield_))), one_rt_gstr(59)));
}
F->pm_2936 = (*(P1812)rt_nil_check(F->pm_2936)).next_;
}
L_end_2951: ;
f_put_to_252(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2941)).cname_))), rt_g_lit("p {", 3)), (*(P140)rt_nil_check(F->fields_2934))), rt_g_lit(" };", 3)));
}
F->m_2941 = (*(P117)rt_nil_check(F->m_2941)).stack_;
}
L_end_2950: ;
F->m_2941 = F->up->scope_stack_121;
while (((F->m_2941 != NULL) && (G_NV((*(P117)rt_nil_check(F->m_2941)).depth_) == G_NV(F->up->depth_120)))) {
if ((((G_NV((*(P117)rt_nil_check(F->m_2941)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->m_2941)).kind_) == ((rt_int)4LL))) && (!G_NV((*(P117)rt_nil_check(F->m_2941)).from_use_)))) {
if (((!G_NV(F->has_procs_2932)) && ((*(P117)rt_nil_check(F->y_2940)).c_ != NULL))) {
f_declare_slot_1146(F->up, rt_g_lit("void **", 7), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2940)).cname_)), rt_g_lit("frames", 6)));
f_path_at_1119(F->up, G_NV((*(P117)rt_nil_check(F->y_2940)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2940)).cname_)), rt_g_lit("frames", 6)), &F->fp_2937);
f_path_at_1119(F->up, G_NV((*(P117)rt_nil_check(F->y_2940)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2940)).cname_)), rt_g_lit("lo", 2)), &F->flo_2938);
f_path_at_1119(F->up, G_NV((*(P117)rt_nil_check(F->y_2940)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2940)).cname_)), rt_g_lit("hi", 2)), &F->fhi_2939);
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->fp_2937)), rt_g_lit(" = rt_alloc(sizeof(void *) * (size_t)(", 38)), (*(P140)rt_nil_check(F->fhi_2939))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->flo_2938))), rt_g_lit(" \? ", 3)), (*(P140)rt_nil_check(F->fhi_2939))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->flo_2938))), rt_g_lit(" + 1 : 1));", 11)));
F->has_procs_2932 = 1;
} else if ((!G_NV(F->has_procs_2932))) {
f_declare_slot_1146(F->up, rt_g_lit("void *", 6), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2940)).cname_)), rt_g_lit("frame", 5)));
f_path_at_1119(F->up, G_NV((*(P117)rt_nil_check(F->y_2940)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2940)).cname_)), rt_g_lit("frame", 5)), &F->fp_2937);
f_emit_254(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->fp_2937)), rt_g_lit(" = NULL;", 8)));
F->has_procs_2932 = 1;
}
if (((*(P117)rt_nil_check(F->y_2940)).c_ != NULL)) {
(*(P117)rt_nil_check(F->m_2941)).access_path_ = f_mk_227(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2940)).cname_)), rt_g_lit("frames", 6)));
} else {
(*(P117)rt_nil_check(F->m_2941)).access_path_ = f_mk_227(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2940)).cname_)), rt_g_lit("frame", 5)));
}
(*(P117)rt_nil_check(F->m_2941)).members_ = F->y_2940;
}
f_copy_sym_1053(F->up, F->m_2941, &F->z_2942);
(*(P117)rt_nil_check(F->z_2942)).hidden_ = G_NV((*(P117)rt_nil_check(F->m_2941)).from_use_);
(*(P117)rt_nil_check(F->z_2942)).mnext_ = (*(P117)rt_nil_check(F->y_2940)).members_;
(*(P117)rt_nil_check(F->y_2940)).members_ = F->z_2942;
F->m_2941 = (*(P117)rt_nil_check(F->m_2941)).stack_;
}
L_end_2952: ;
f_close_scope_466(F->up);
F->up->cur_task_202 = F->saved_2943;
f_define_464(F->up, F->y_2940, G_NV((*(P174)rt_nil_check(F->e_1159)).line_));
ret_:

  return;
}

static void f_entry_decl_1162(struct f_greenc_1fr *up_, P174 e_1161) {
  struct f_entry_decl_1162fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1161 = e_1161;
F->y_2953 = NULL;
F->p_2954 = NULL;
F->p_2954 = (*(P174)rt_nil_check(F->e_1161)).a_;
F->pm_2955 = NULL;
F->tail_2956 = NULL;
F->fields_2957 = NULL;
F->ct_2958 = NULL;
F->x_2959 = NULL;
F->lo_2960 = NULL;
F->hi_2961 = NULL;
if ((F->up->cur_task_202 == NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1161)).line_), rt_g_lit("an entry is declared in a task (RM79 9.5)", 41));
}
F->y_2953 = f_new_sym_469(F->up, ((rt_int)10LL), (*(P174)rt_nil_check(F->e_1161)).name_);
f_new_name_230(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("e_", 2), f_lower_s_238(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1161)).name_)))), one_rt_gstr(95)), &(*(P117)rt_nil_check(F->y_2953)).cname_);
F->fields_2957 = f_mk_227(F->up, rt_g_lit(" int dummy_;", 12));
while ((F->p_2954 != NULL)) {
F->pm_2955 = ({ R1813 *cell2963 = rt_alloc(sizeof(R1813)); *cell2963 = cp_R1813(({ R1813 ag2964; ag2964.name_ = (*(P174)rt_nil_check(F->p_2954)).name_; ag2964.mode_ = G_NV((*(P174)rt_nil_check(F->p_2954)).ival_); ag2964.t_ = NULL; ag2964.c_ = NULL; ag2964.cfield_ = NULL; ag2964.dflt_ = (*(P174)rt_nil_check(F->p_2954)).b_; ag2964.next_ = NULL; ag2964.dsym_ = NULL; ag2964; })); (P1812)cell2963; });
f_resolve_507(F->up, (*(P174)rt_nil_check(F->p_2954)).a_, &(*(P1812)rt_nil_check(F->pm_2955)).t_, &(*(P1812)rt_nil_check(F->pm_2955)).c_);
(*(P1812)rt_nil_check(F->pm_2955)).cfield_ = f_mk_227(F->up, f_c_field_244(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_2954)).name_))));
f_ctype_491(F->up, (*(P1812)rt_nil_check(F->pm_2955)).t_, &F->ct_2958);
if ((G_NV((*(P1812)rt_nil_check(F->pm_2955)).mode_) == ((rt_int)1LL))) {
F->fields_2957 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->fields_2957)), one_rt_gstr(32)), (*(P140)rt_nil_check(F->ct_2958))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P1812)rt_nil_check(F->pm_2955)).cfield_))), one_rt_gstr(59)));
} else {
F->fields_2957 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->fields_2957)), one_rt_gstr(32)), (*(P140)rt_nil_check(F->ct_2958))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check((*(P1812)rt_nil_check(F->pm_2955)).cfield_))), one_rt_gstr(59)));
}
if ((F->tail_2956 == NULL)) {
(*(P117)rt_nil_check(F->y_2953)).params_ = F->pm_2955;
} else {
(*(P1812)rt_nil_check(F->tail_2956)).next_ = F->pm_2955;
}
F->tail_2956 = F->pm_2955;
F->p_2954 = (*(P174)rt_nil_check(F->p_2954)).next_;
}
L_end_2962: ;
if ((!G_NV(F->up->defer_entry_structs_208))) {
f_put_to_252(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2953)).cname_))), rt_g_lit("p {", 3)), (*(P140)rt_nil_check(F->fields_2957))), rt_g_lit(" };", 3)));
}
(*(P117)rt_nil_check(F->y_2953)).result_ = F->up->ty_void_161;
(*(P117)rt_nil_check(F->y_2953)).decl_ = F->e_1161;
(*(P117)rt_nil_check(F->y_2953)).members_ = F->up->cur_task_202;
if (G_NV(F->up->in_func_138)) {
(*(P117)rt_nil_check(F->y_2953)).level_ = G_NV(F->up->cur_level_139);
}
(*(P117)rt_nil_check(F->y_2953)).access_path_ = f_mk_227(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2953)).cname_)), rt_g_lit("ent", 3)));
f_path_at_1119(F->up, G_NV((*(P117)rt_nil_check(F->y_2953)).level_), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2953)).access_path_)), &F->x_2959);
(*(P117)rt_nil_check(F->y_2953)).ro_ = ((((*(P117)rt_nil_check(F->up->cur_task_202)).c_ != NULL) && G_NV(F->up->in_func_138)) && (G_NV(F->up->cur_level_139) > G_NV((*(P117)rt_nil_check(F->up->cur_task_202)).level_)));
if (((*(P174)rt_nil_check(F->e_1161)).b_ != NULL)) {
if ((((*(P117)rt_nil_check(F->up->cur_task_202)).c_ != NULL) && (!G_NV((*(P117)rt_nil_check(F->y_2953)).ro_)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1161)).line_), rt_g_lit("an entry family in a task family is not handled", 47));
}
f_family_bounds_1153(F->up, (*(P174)rt_nil_check(F->e_1161)).b_, F->y_2953, F->x_2959);
} else if ((((*(P117)rt_nil_check(F->up->cur_task_202)).c_ != NULL) && (!G_NV((*(P117)rt_nil_check(F->y_2953)).ro_)))) {
f_declare_slot_1146(F->up, rt_g_lit("rt_entry *", 10), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2953)).access_path_)));
f_path_at_1119(F->up, G_NV((*(P117)rt_nil_check(F->up->cur_task_202)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->cur_task_202)).cname_)), rt_g_lit("lo", 2)), &F->lo_2960);
f_path_at_1119(F->up, G_NV((*(P117)rt_nil_check(F->up->cur_task_202)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->cur_task_202)).cname_)), rt_g_lit("hi", 2)), &F->hi_2961);
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->x_2959)), rt_g_lit(" = rt_alloc(sizeof(rt_entry) * (size_t)(", 40)), (*(P140)rt_nil_check(F->hi_2961))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->lo_2960))), rt_g_lit(" \? ", 3)), (*(P140)rt_nil_check(F->hi_2961))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->lo_2960))), rt_g_lit(" + 1 : 1));", 11)));
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = 0; k_ <= ", 26), (*(P140)rt_nil_check(F->hi_2961))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->lo_2960))), rt_g_lit("; k_++) rt_entry_init(&", 23)), (*(P140)rt_nil_check(F->x_2959))), rt_g_lit("[k_]);", 6)));
} else {
f_declare_slot_1146(F->up, rt_g_lit("rt_entry", 8), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2953)).access_path_)));
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_entry_init(&", 15), (*(P140)rt_nil_check(F->x_2959))), rt_g_lit(");", 2)));
}
f_define_464(F->up, F->y_2953, G_NV((*(P174)rt_nil_check(F->e_1161)).line_));
ret_:

  return;
}

static void f_task_body_1164(struct f_greenc_1fr *up_, P174 e_1163) {
  struct f_task_body_1164fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1163 = e_1163;
F->y_2965 = NULL;
F->y_2965 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1163)).name_)));
F->b_2966 = NULL;
F->m_2967 = NULL;
F->z_2968 = NULL;
F->upp_2969 = NULL;
F->saved_2970 = NULL;
F->saved_2970 = F->up->cur_task_202;
if (((F->y_2965 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_2965)).kind_) == ((rt_int)11LL)))) {
f_attach_generic_body_1244(F->up, F->e_1163);
goto ret_;
}
if (((F->y_2965 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_2965)).kind_) != ((rt_int)9LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1163)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("task body ", 10), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1163)).name_))), rt_g_lit(" has no task specification", 26)));
}
F->b_2966 = f_new_sym_469(F->up, ((rt_int)4LL), (*(P174)rt_nil_check(F->e_1163)).name_);
(*(P117)rt_nil_check(F->b_2966)).cname_ = f_mk_227(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2965)).cname_)), rt_g_lit("body", 4)));
(*(P117)rt_nil_check(F->b_2966)).result_ = F->up->ty_void_161;
(*(P117)rt_nil_check(F->b_2966)).level_ = G_NV(F->up->cur_level_139);
(*(P117)rt_nil_check(F->b_2966)).decl_ = F->e_1163;
if (((*(P117)rt_nil_check(F->y_2965)).c_ != NULL)) {
(*(P117)rt_nil_check(F->b_2966)).params_ = ({ R1813 *cell2971 = rt_alloc(sizeof(R1813)); *cell2971 = cp_R1813(({ R1813 ag2972; ag2972.name_ = f_mk_227(F->up, rt_g_lit("INDEX_", 6)); ag2972.mode_ = ((rt_int)1LL); ag2972.t_ = F->up->ty_int_156; ag2972.c_ = NULL; ag2972.cfield_ = f_mk_227(F->up, rt_g_lit("index_", 6)); ag2972.dflt_ = NULL; ag2972.next_ = NULL; ag2972.dsym_ = NULL; ag2972; })); (P1812)cell2971; });
}
f_open_scope_465(F->up);
F->m_2967 = (*(P117)rt_nil_check(F->y_2965)).members_;
while ((F->m_2967 != NULL)) {
f_copy_sym_1053(F->up, F->m_2967, &F->z_2968);
f_define_464(F->up, F->z_2968, G_NV((*(P174)rt_nil_check(F->e_1163)).line_));
if (((((G_NV((*(P117)rt_nil_check(F->m_2967)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->m_2967)).kind_) == ((rt_int)4LL))) && ((*(P117)rt_nil_check(F->m_2967)).access_path_ != NULL)) && f_same_task_426(F->up, (*(P117)rt_nil_check(F->m_2967)).members_, F->y_2965))) {
if ((G_NV((*(P117)rt_nil_check(F->y_2965)).level_) > ((rt_int)0LL))) {
F->upp_2969 = f_mk_227(F->up, rt_g_lit("up_->", 5));
} else {
F->upp_2969 = f_mk_227(F->up, rt_g_lit("", 0));
}
if (((*(P117)rt_nil_check(F->y_2965)).c_ != NULL)) {
(*(P117)rt_nil_check(F->b_2966)).access_path_ = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->upp_2969)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2967)).access_path_))), rt_g_lit("[index_ - ", 10)), (*(P140)rt_nil_check(F->upp_2969))), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2965)).cname_))), rt_g_lit("lo] = F;", 8)));
} else {
(*(P117)rt_nil_check(F->b_2966)).access_path_ = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->upp_2969)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2967)).access_path_))), rt_g_lit(" = F;", 5)));
}
}
F->m_2967 = (*(P117)rt_nil_check(F->m_2967)).mnext_;
}
L_end_2973: ;
F->up->cur_task_202 = F->y_2965;
f_subprogram_body_692(F->up, F->e_1163, F->b_2966);
F->up->cur_task_202 = F->saved_2970;
f_close_scope_466(F->up);
if ((((*(P117)rt_nil_check(F->y_2965)).c_ != NULL) && (G_NV((*(P117)rt_nil_check(F->b_2966)).level_) > ((rt_int)0LL)))) {
f_put_to_252(F->up, F->up->out_funcs_133, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2965)).cname_))), rt_g_lit("run(void *a) { struct rt_famarg *g = a; ", 40)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_2966)).cname_))), rt_g_lit("(g->up, g->i); }", 16)));
} else if (((*(P117)rt_nil_check(F->y_2965)).c_ != NULL)) {
f_put_to_252(F->up, F->up->out_funcs_133, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2965)).cname_))), rt_g_lit("run(void *a) { struct rt_famarg *g = a; ", 40)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_2966)).cname_))), rt_g_lit("(g->i); }", 9)));
} else if ((G_NV((*(P117)rt_nil_check(F->b_2966)).level_) > ((rt_int)0LL))) {
f_put_to_252(F->up, F->up->out_funcs_133, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2965)).cname_))), rt_g_lit("run(void *a) { ", 15)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_2966)).cname_))), rt_g_lit("(a); }", 6)));
} else {
f_put_to_252(F->up, F->up->out_funcs_133, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2965)).cname_))), rt_g_lit("run(void *a) { (void)a; ", 24)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_2966)).cname_))), rt_g_lit("(); }", 5)));
}
ret_:

  return;
}

static void f_task_awaits_1167(struct f_greenc_1fr *up_, P174 decls_1165, P140 *aw_1166) {
  struct f_task_awaits_1167fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_1165 = decls_1165;
F->aw_1166 = aw_1166;
F->e_2974 = NULL;
F->e_2974 = F->decls_1165;
F->y_2975 = NULL;
F->p_2976 = NULL;
(*F->aw_1166) = f_mk_227(F->up, rt_g_lit("", 0));
while ((F->e_2974 != NULL)) {
if (((G_NV((*(P174)rt_nil_check(F->e_2974)).kind_) == ((rt_int)50LL)) || ((G_NV((*(P174)rt_nil_check(F->e_2974)).kind_) == ((rt_int)53LL)) && (G_NV((*(P174)rt_nil_check(F->e_2974)).ival_) == ((rt_int)50LL))))) {
F->y_2975 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_2974)).name_)));
f_path_at_1119(F->up, G_NV((*(P117)rt_nil_check(F->y_2975)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2975)).cname_)), rt_g_lit("decl", 4)), &F->p_2976);
(*F->aw_1166) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->aw_1166))), rt_g_lit(" rt_await_decl(&", 16)), (*(P140)rt_nil_check(F->p_2976))), rt_g_lit(");", 2)));
}
F->e_2974 = (*(P174)rt_nil_check(F->e_2974)).next_;
}
L_end_2977: ;
ret_:

  return;
}

static void f_task_failure_1169(struct f_greenc_1fr *up_, P174 s_1168) {
  struct f_task_failure_1169fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1168 = s_1168;
F->y_2978 = NULL;
F->y_2978 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_1168)).tag_)));
F->a_2979 = NULL;
F->i_2980 = NULL;
F->it_2981 = NULL;
if (((*(P174)rt_nil_check(F->s_1168)).a_ != NULL)) {
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->s_1168)).a_, (*(P117)rt_nil_check(F->y_2978)).t_, &F->it_2981, &F->i_2980);
f_act_path_i_1139(F->up, F->y_2978, (*(P140)rt_nil_check(F->i_2980)), &F->a_2979);
} else {
f_act_path_1135(F->up, F->y_2978, &F->a_2979);
}
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_exterminate(&", 16), (*(P140)rt_nil_check(F->a_2979))), rt_g_lit(");", 2)));
ret_:

  return;
}

static void f_entry_sym_1173(struct f_greenc_1fr *up_, P174 e_1170, P117 *y_1171, P174 *ix_1172) {
  struct f_entry_sym_1173fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1170 = e_1170;
F->y_1171 = y_1171;
F->ix_1172 = ix_1172;
F->alias_2982 = NULL;
F->t_2983 = NULL;
(*F->ix_1172) = NULL;
F->up->fam_ix_205 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->e_1170)).kind_) == ((rt_int)8LL))) {
f_entry_sym_1173(F->up, (*(P174)rt_nil_check(F->e_1170)).a_, &(*F->y_1171), &(*F->ix_1172));
if (((*(P117)rt_nil_check((*F->y_1171))).c_ == NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1170)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check((*F->y_1171))).name_)), rt_g_lit(" is not an entry family", 23)));
}
F->up->fam_ix_205 = (*(P174)rt_nil_check(F->e_1170)).b_;
goto ret_;
}
if (((G_NV((*(P174)rt_nil_check(F->e_1170)).kind_) == ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1170)).a_)).kind_) == ((rt_int)5LL)))) {
F->t_2983 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1170)).a_)).name_)));
if (((F->t_2983 != NULL) && ((G_NV((*(P117)rt_nil_check(F->t_2983)).kind_) == ((rt_int)9LL)) && (G_NV((*(P117)rt_nil_check(F->t_2983)).flags_) == ((rt_int)4LL))))) {
F->alias_2982 = f_nn_301(F->up, ((rt_int)9LL), G_NV((*(P174)rt_nil_check(F->e_1170)).line_));
as_R175(&(*(P174)rt_nil_check(F->alias_2982)), (*(P174)rt_nil_check(F->e_1170)));
(*(P174)rt_nil_check(F->alias_2982)).a_ = (*(P117)rt_nil_check(F->t_2983)).decl_;
f_entry_sym_1173(F->up, F->alias_2982, &(*F->y_1171), &(*F->ix_1172));
goto ret_;
}
}
if ((((G_NV((*(P174)rt_nil_check(F->e_1170)).kind_) == ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1170)).a_)).kind_) == ((rt_int)8LL))) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1170)).a_)).a_)).kind_) == ((rt_int)5LL)))) {
F->t_2983 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1170)).a_)).a_)).name_)));
if ((((F->t_2983 == NULL) || (G_NV((*(P117)rt_nil_check(F->t_2983)).kind_) != ((rt_int)9LL))) || ((*(P117)rt_nil_check(F->t_2983)).c_ == NULL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1170)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1170)).a_)).a_)).name_)), rt_g_lit(" is not a task family", 21)));
}
(*F->y_1171) = f_member_of_1048(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1170)).a_)).a_)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1170)).name_)), G_NV((*(P174)rt_nil_check(F->e_1170)).line_));
(*F->ix_1172) = (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1170)).a_)).b_;
if ((((*F->y_1171) == NULL) || (G_NV((*(P117)rt_nil_check((*F->y_1171))).kind_) != ((rt_int)10LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1170)).line_), rt_g_lit("not an entry", 12));
}
goto ret_;
}
if ((G_NV((*(P174)rt_nil_check(F->e_1170)).kind_) == ((rt_int)5LL))) {
(*F->y_1171) = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1170)).name_)));
if (((*(P174)rt_nil_check(F->e_1170)).tag_ != NULL)) {
(*F->y_1171) = f_member_of_1048(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1170)).tag_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1170)).name_)), G_NV((*(P174)rt_nil_check(F->e_1170)).line_));
}
} else if (((G_NV((*(P174)rt_nil_check(F->e_1170)).kind_) == ((rt_int)9LL)) && f_is_package_1044(F->up, (*(P174)rt_nil_check(F->e_1170)).a_))) {
(*F->y_1171) = f_member_of_1048(F->up, f_path_of_344(F->up, (*(P174)rt_nil_check(F->e_1170)).a_), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1170)).name_)), G_NV((*(P174)rt_nil_check(F->e_1170)).line_));
} else {
(*F->y_1171) = NULL;
}
if ((((*F->y_1171) == NULL) || (G_NV((*(P117)rt_nil_check((*F->y_1171))).kind_) != ((rt_int)10LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1170)).line_), rt_g_lit("not an entry", 12));
}
ret_:

  return;
}

static void f_other_call_1178(struct f_greenc_1fr *up_, P174 e_1174, int is_stmt_1175, P122 *t_1176, P140 *r_1177) {
  struct f_other_call_1178fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1174 = e_1174;
F->is_stmt_1175 = is_stmt_1175;
F->t_1176 = t_1176;
F->r_1177 = r_1177;
F->y_2984 = NULL;
F->pm_2985 = NULL;
F->a_2986 = NULL;
F->parts_2987 = NULL;
F->v_2988 = NULL;
F->lv_2989 = NULL;
F->ent_2990 = NULL;
F->act_2991 = NULL;
F->i_2992 = NULL;
F->vt_2993 = NULL;
F->lt_2994 = NULL;
F->lc_2995 = NULL;
F->ro_2996 = INT_MIN;
F->ix_2997 = NULL;
F->fix_2998 = NULL;
F->args_node_2999 = NULL;
f_entry_sym_1173(F->up, (*(P174)rt_nil_check(F->e_1174)).a_, &F->y_2984, &F->ix_2997);
F->fix_2998 = F->up->fam_ix_205;
F->args_node_2999 = (*(P174)rt_nil_check(F->e_1174)).b_;
if ((((*(P117)rt_nil_check(F->y_2984)).c_ != NULL) && (F->fix_2998 == NULL))) {
F->fix_2998 = (*(P174)rt_nil_check(F->e_1174)).b_;
F->args_node_2999 = NULL;
}
F->i_2992 = f_mk_227(F->up, rt_g_lit("", 0));
if ((F->ix_2997 != NULL)) {
f_gexpr_805(F->up, F->ix_2997, F->up->ty_int_156, &F->vt_2993, &F->i_2992);
} else if (((((*(P117)rt_nil_check(F->y_2984)).members_ != NULL) && ((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_2984)).members_)).c_ != NULL)) && ((*(P117)rt_nil_check(F->y_2984)).members_ != F->up->cur_task_202))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1174)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("a member of family ", 19), (*(P140)rt_nil_check((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_2984)).members_)).name_))), rt_g_lit(" must be named: F(I).", 21)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2984)).name_))));
}
if ((!F->is_stmt_1175)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1174)).line_), rt_g_lit("an entry call is a statement", 28));
}
if ((F->up->pure_sym_216 != NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1174)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->pure_sym_216)).name_))), rt_g_lit(" may not call an entry (RM79 6.5)", 33)));
}
f_entry_path_1143(F->up, F->y_2984, (*(P140)rt_nil_check(F->i_2992)), &F->ent_2990);
if (((*(P117)rt_nil_check(F->y_2984)).c_ != NULL)) {
if ((F->fix_2998 == NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1174)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2984)).name_)), rt_g_lit(" is an entry family: name a member, ", 36)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2984)).name_))), rt_g_lit("(I)", 3)));
}
f_gexpr_805(F->up, F->fix_2998, NULL, &F->vt_2993, &F->v_2988);
f_entry_family_slot_1158(F->up, F->y_2984, (*(P140)rt_nil_check(F->ent_2990)), (*(P140)rt_nil_check(F->v_2988)), &F->ent_2990);
}
F->parts_2987 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ struct ", 10), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2984)).cname_))), rt_g_lit("p p_;", 5)));
F->pm_2985 = (*(P117)rt_nil_check(F->y_2984)).params_;
while ((F->pm_2985 != NULL)) {
F->a_2986 = f_actual_for_1003(F->up, F->args_node_2999, F->pm_2985, (*(P117)rt_nil_check(F->y_2984)).params_);
if ((F->a_2986 == NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1174)).line_), cat_rt_gstr(rt_g_lit("no actual parameter for ", 24), (*(P140)rt_nil_check((*(P1812)rt_nil_check(F->pm_2985)).name_))));
}
if ((G_NV((*(P1812)rt_nil_check(F->pm_2985)).mode_) == ((rt_int)1LL))) {
f_gexpr_805(F->up, F->a_2986, (*(P1812)rt_nil_check(F->pm_2985)).t_, &F->vt_2993, &F->v_2988);
f_check_type_486(F->up, F->vt_2993, (*(P1812)rt_nil_check(F->pm_2985)).t_, G_NV((*(P174)rt_nil_check(F->e_1174)).line_));
F->parts_2987 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->parts_2987)), rt_g_lit(" p_.", 4)), (*(P140)rt_nil_check((*(P1812)rt_nil_check(F->pm_2985)).cfield_))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->v_2988))), one_rt_gstr(59)));
} else {
f_lvalue_761(F->up, F->a_2986, &F->lv_2989, &F->lt_2994, &F->lc_2995, &F->ro_2996);
 (void)rt_range(F->ro_2996, 0, 1);
if (G_NV(F->ro_2996)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1174)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P1812)rt_nil_check(F->pm_2985)).name_)), rt_g_lit(" needs a variable", 17)));
}
f_check_type_486(F->up, F->lt_2994, (*(P1812)rt_nil_check(F->pm_2985)).t_, G_NV((*(P174)rt_nil_check(F->e_1174)).line_));
F->parts_2987 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->parts_2987)), rt_g_lit(" p_.", 4)), (*(P140)rt_nil_check((*(P1812)rt_nil_check(F->pm_2985)).cfield_))), rt_g_lit(" = &", 4)), (*(P140)rt_nil_check(F->lv_2989))), one_rt_gstr(59)));
}
F->pm_2985 = (*(P1812)rt_nil_check(F->pm_2985)).next_;
}
L_end_3000: ;
if ((((*(P117)rt_nil_check(F->y_2984)).members_ != NULL) && ((*(P117)rt_nil_check(F->y_2984)).members_ != F->up->cur_task_202))) {
if ((F->ix_2997 != NULL)) {
f_act_path_i_1139(F->up, (*(P117)rt_nil_check(F->y_2984)).members_, (*(P140)rt_nil_check(F->i_2992)), &F->act_2991);
} else {
f_act_path_1135(F->up, (*(P117)rt_nil_check(F->y_2984)).members_, &F->act_2991);
}
F->parts_2987 = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->parts_2987)), rt_g_lit(" if (!rt_is_active(&", 20)), (*(P140)rt_nil_check(F->act_2991))), rt_g_lit(")) rt_raise(RT_X_TASKING);", 26)));
}
(*F->t_1176) = F->up->ty_void_161;
(*F->r_1177) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->parts_2987)), rt_g_lit(" rt_entry_call(&", 16)), (*(P140)rt_nil_check(F->ent_2990))), rt_g_lit(", &p_); })", 10)));
ret_:

  return;
}

static void f_other_attr_1183(struct f_greenc_1fr *up_, P174 e_1179, P117 y_1180, P122 *t_1181, P140 *r_1182) {
  struct f_other_attr_1183fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1179 = e_1179;
F->y_1180 = y_1180;
F->t_1181 = t_1181;
F->r_1182 = r_1182;
F->a_3001 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1179)).name_)));
F->p_3002 = NULL;
if (((G_NV((*(P117)rt_nil_check(F->y_1180)).kind_) == ((rt_int)9LL)) && eq_rt_gstr(F->a_3001, rt_g_lit("INDEX", 5)))) {
if (((*(P117)rt_nil_check(F->y_1180)).c_ == NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1179)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1180)).name_)), rt_g_lit(" is not a task family", 21)));
}
f_own_index_1127(F->up, &F->p_3002);
(*F->t_1181) = F->up->ty_int_156;
if (((*(P117)rt_nil_check(F->y_1180)).t_ != NULL)) {
(*F->t_1181) = (*(P117)rt_nil_check(F->y_1180)).t_;
}
(*F->r_1182) = F->p_3002;
} else if (((G_NV((*(P117)rt_nil_check(F->y_1180)).kind_) == ((rt_int)9LL)) && eq_rt_gstr(F->a_3001, rt_g_lit("ACTIVE", 6)))) {
f_act_path_1135(F->up, F->y_1180, &F->p_3002);
(*F->t_1181) = F->up->ty_bool_157;
(*F->r_1182) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_is_active(&", 14), (*(P140)rt_nil_check(F->p_3002))), one_rt_gstr(41)));
} else if (((G_NV((*(P117)rt_nil_check(F->y_1180)).kind_) == ((rt_int)9LL)) && eq_rt_gstr(F->a_3001, rt_g_lit("PRIORITY", 8)))) {
f_act_path_1135(F->up, F->y_1180, &F->p_3002);
(*F->t_1181) = F->up->ty_int_156;
(*F->r_1182) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_priority(&", 13), (*(P140)rt_nil_check(F->p_3002))), one_rt_gstr(41)));
} else if (((G_NV((*(P117)rt_nil_check(F->y_1180)).kind_) == ((rt_int)10LL)) && eq_rt_gstr(F->a_3001, rt_g_lit("COUNT", 5)))) {
if (((*(P117)rt_nil_check(F->y_1180)).members_ != F->up->cur_task_202)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1179)).line_), rt_g_lit("E'COUNT is allowed only in the body of the task (RM79 9.9)", 58));
}
f_entry_path_1143(F->up, F->y_1180, rt_g_lit("", 0), &F->p_3002);
(*F->t_1181) = F->up->ty_int_156;
(*F->r_1182) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_entry_count(&", 16), (*(P140)rt_nil_check(F->p_3002))), one_rt_gstr(41)));
} else {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1179)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), F->a_3001), rt_g_lit(" is not handled here", 20)));
(*F->t_1181) = F->up->ty_int_156;
(*F->r_1182) = NULL;
}
ret_:

  return;
}

static void f_member_attr_1187(struct f_greenc_1fr *up_, P174 e_1184, P122 *t_1185, P140 *r_1186) {
  struct f_member_attr_1187fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1184 = e_1184;
F->t_1185 = t_1185;
F->r_1186 = r_1186;
F->y_3003 = NULL;
F->ix_3004 = NULL;
F->i_3005 = NULL;
F->p_3006 = NULL;
F->vt_3007 = NULL;
f_task_of_1125(F->up, (*(P174)rt_nil_check(F->e_1184)).a_, &F->y_3003, &F->ix_3004);
f_gexpr_805(F->up, F->ix_3004, F->up->ty_int_156, &F->vt_3007, &F->i_3005);
f_act_path_i_1139(F->up, F->y_3003, (*(P140)rt_nil_check(F->i_3005)), &F->p_3006);
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1184)).name_)), rt_g_lit("ACTIVE", 6))) {
(*F->t_1185) = F->up->ty_bool_157;
(*F->r_1186) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_is_active(&", 14), (*(P140)rt_nil_check(F->p_3006))), one_rt_gstr(41)));
} else if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1184)).name_)), rt_g_lit("PRIORITY", 8))) {
(*F->t_1185) = F->up->ty_int_156;
(*F->r_1186) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_priority(&", 13), (*(P140)rt_nil_check(F->p_3006))), one_rt_gstr(41)));
} else {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1184)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1184)).name_))), rt_g_lit(" is not handled for a family member", 35)));
(*F->t_1185) = F->up->ty_int_156;
(*F->r_1186) = NULL;
}
ret_:

  return;
}

static void f_task_builtin_1193(struct f_greenc_1fr *up_, rt_gstr name_1188, P174 args_1189, rt_int line_1190, P122 *t_1191, P140 *r_1192) {
  struct f_task_builtin_1193fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1188 = cp_rt_gstr(name_1188);
F->args_1189 = args_1189;
F->line_1190 = line_1190;
F->t_1191 = t_1191;
F->r_1192 = r_1192;
F->vt_3008 = NULL;
F->v_3009 = NULL;
(*F->t_1191) = F->up->ty_void_161;
if (eq_rt_gstr(F->name_1188, rt_g_lit("SET_PRIORITY", 12))) {
f_gexpr_805(F->up, F->args_1189, F->up->ty_int_156, &F->vt_3008, &F->v_3009);
(*F->r_1192) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_set_priority(rt_me(), ", 25), (*(P140)rt_nil_check(F->v_3009))), one_rt_gstr(41)));
} else {
f_fail_248(F->up, F->line_1190, cat_rt_gstr(F->name_1188, rt_g_lit(" is not declared", 16)));
(*F->r_1192) = NULL;
}
ret_:

  return;
}

static void f_gen_accept_1195(struct f_greenc_1fr *up_, P174 s_1194) {
  struct f_gen_accept_1195fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1194 = s_1194;
F->y_3010 = NULL;
F->y_3010 = f_lookup_entry_429(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_1194)).name_)), F->up->cur_task_202);
F->saved_ax_3011 = NULL;
F->ent_3012 = NULL;
F->ep_3013 = NULL;
F->xf_3014 = NULL;
F->x_3015 = NULL;
F->pm_3016 = NULL;
F->f_3017 = NULL;
F->f_3017 = (*(P174)rt_nil_check(F->s_1194)).a_;
F->p_3018 = NULL;
if (((F->y_3010 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_3010)).kind_) != ((rt_int)10LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->s_1194)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_1194)).name_)), rt_g_lit(" is not an entry", 16)));
}
if ((!f_same_task_426(F->up, (*(P117)rt_nil_check(F->y_3010)).members_, F->up->cur_task_202))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->s_1194)).line_), rt_g_lit("a task accepts only its own entries (RM79 9.5)", 46));
}
f_entry_path_1143(F->up, F->y_3010, rt_g_lit("", 0), &F->ent_3012);
f_member_slot_1199(F->up, F->y_3010, F->s_1194, &F->ent_3012);
if ((G_NV((*(P174)rt_nil_check(F->s_1194)).flag_) == ((rt_int)0LL))) {
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_accept_begin(&", 19), (*(P140)rt_nil_check(F->ent_3012))), rt_g_lit("); rt_accept_end(&", 18)), (*(P140)rt_nil_check(F->ent_3012))), rt_g_lit(", 0, 0); }", 10)));
goto ret_;
}
f_new_name_230(F->up, rt_g_lit("ep", 2), &F->ep_3013);
f_new_name_230(F->up, rt_g_lit("xf", 2), &F->xf_3014);
f_new_name_230(F->up, rt_g_lit("x", 1), &F->x_3015);
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ struct ", 9), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3010)).cname_))), rt_g_lit("p *", 3)), (*(P140)rt_nil_check(F->ep_3013))), rt_g_lit(" = rt_accept_begin(&", 20)), (*(P140)rt_nil_check(F->ent_3012))), rt_g_lit(");", 2)));
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_frame ", 9), (*(P140)rt_nil_check(F->xf_3014))), one_rt_gstr(59)));
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (RT_TRY(", 11), (*(P140)rt_nil_check(F->xf_3014))), rt_g_lit(")) {", 4)));
f_push_cleanup_698(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P140)rt_nil_check(F->xf_3014))), rt_g_lit("); rt_accept_end(&", 18)), (*(P140)rt_nil_check(F->ent_3012))), rt_g_lit(", 0, 0);", 8)));
f_open_scope_465(F->up);
F->pm_3016 = (*(P117)rt_nil_check(F->y_3010)).params_;
while ((F->pm_3016 != NULL)) {
if ((G_NV((*(P1812)rt_nil_check(F->pm_3016)).mode_) == ((rt_int)1LL))) {
F->p_3018 = f_new_sym_469(F->up, ((rt_int)2LL), (*(P1812)rt_nil_check(F->pm_3016)).name_);
(*(P117)rt_nil_check(F->p_3018)).ro_ = 1;
(*(P117)rt_nil_check(F->p_3018)).access_path_ = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->ep_3013))), rt_g_lit("->", 2)), (*(P140)rt_nil_check((*(P1812)rt_nil_check(F->pm_3016)).cfield_))), one_rt_gstr(41)));
} else {
F->p_3018 = f_new_sym_469(F->up, ((rt_int)1LL), (*(P1812)rt_nil_check(F->pm_3016)).name_);
(*(P117)rt_nil_check(F->p_3018)).access_path_ = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*", 2), (*(P140)rt_nil_check(F->ep_3013))), rt_g_lit("->", 2)), (*(P140)rt_nil_check((*(P1812)rt_nil_check(F->pm_3016)).cfield_))), one_rt_gstr(41)));
}
if ((F->f_3017 != NULL)) {
(*(P117)rt_nil_check(F->p_3018)).name_ = (*(P174)rt_nil_check(F->f_3017)).name_;
F->f_3017 = (*(P174)rt_nil_check(F->f_3017)).next_;
}
(*(P117)rt_nil_check(F->p_3018)).t_ = (*(P1812)rt_nil_check(F->pm_3016)).t_;
(*(P117)rt_nil_check(F->p_3018)).c_ = (*(P1812)rt_nil_check(F->pm_3016)).c_;
f_define_464(F->up, F->p_3018, G_NV((*(P174)rt_nil_check(F->s_1194)).line_));
F->pm_3016 = (*(P1812)rt_nil_check(F->pm_3016)).next_;
}
L_end_3019: ;
F->up->accept_depth_203 = rt_add(G_NV(F->up->accept_depth_203), ((rt_int)1LL));
F->saved_ax_3011 = F->up->accept_exits_149;
F->up->accept_exits_149 = F->up->exits_145;
f_gen_statements_694(F->up, (*(P174)rt_nil_check(F->s_1194)).b_);
F->up->accept_exits_149 = F->saved_ax_3011;
F->up->accept_depth_203 = rt_sub(G_NV(F->up->accept_depth_203), ((rt_int)1LL));
f_close_scope_466(F->up);
f_pop_cleanup_699(F->up);
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P140)rt_nil_check(F->xf_3014))), rt_g_lit("); rt_accept_end(&", 18)), (*(P140)rt_nil_check(F->ent_3012))), rt_g_lit(", 0, 0);", 8)));
f_emit_254(F->up, rt_g_lit("} else {", 8));
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P140)rt_nil_check(F->xf_3014))), rt_g_lit("); int ", 7)), (*(P140)rt_nil_check(F->x_3015))), rt_g_lit(" = rt_xcur; rt_accept_end(&", 27)), (*(P140)rt_nil_check(F->ent_3012))), rt_g_lit(", 1, ", 5)), (*(P140)rt_nil_check(F->x_3015))), rt_g_lit("); rt_raise(", 12)), (*(P140)rt_nil_check(F->x_3015))), rt_g_lit(");", 2)));
f_emit_254(F->up, rt_g_lit("}", 1));
f_emit_254(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_member_slot_1199(struct f_greenc_1fr *up_, P117 y_1196, P174 s_1197, P140 *ent_1198) {
  struct f_member_slot_1199fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1196 = y_1196;
F->s_1197 = s_1197;
F->ent_1198 = ent_1198;
F->vt_3020 = NULL;
F->v_3021 = NULL;
if (((*(P117)rt_nil_check(F->y_1196)).c_ != NULL)) {
if (((*(P174)rt_nil_check(F->s_1197)).c_ == NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->s_1197)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1196)).name_)), rt_g_lit(" is an entry family: accept ", 28)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1196)).name_))), rt_g_lit("(I)", 3)));
}
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->s_1197)).c_, NULL, &F->vt_3020, &F->v_3021);
f_entry_family_slot_1158(F->up, F->y_1196, (*(P140)rt_nil_check((*F->ent_1198))), (*(P140)rt_nil_check(F->v_3021)), &(*F->ent_1198));
} else if (((*(P174)rt_nil_check(F->s_1197)).c_ != NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->s_1197)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1196)).name_)), rt_g_lit(" is not an entry family", 23)));
}
ret_:

  return;
}

static void f_gen_delay_ticks_1202(struct f_greenc_1fr *up_, P174 e_1200, P140 *r_1201) {
  struct f_gen_delay_ticks_1202fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1200 = e_1200;
F->r_1201 = r_1201;
F->vt_3022 = NULL;
F->v_3023 = NULL;
f_gexpr_805(F->up, F->e_1200, F->up->ty_time_171, &F->vt_3022, &F->v_3023);
f_check_type_486(F->up, F->vt_3022, F->up->ty_time_171, G_NV((*(P174)rt_nil_check(F->e_1200)).line_));
(*F->r_1201) = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(rt_int)llround(", 16), (*(P140)rt_nil_check(F->v_3023))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_gen_select_1204(struct f_greenc_1fr *up_, P174 s_1203) {
  struct f_gen_select_1204fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1203 = s_1203;
F->alt_3024 = NULL;
F->alt_3024 = (*(P174)rt_nil_check(F->s_1203)).a_;
F->n_3025 = INT64_MIN;
F->n_3025 = ((rt_int)0LL);
F->i_3026 = INT64_MIN;
F->has_delay_3027 = INT_MIN;
F->has_delay_3027 = 0;
F->has_accept_3028 = INT_MIN;
F->has_accept_3028 = 0;
F->al_3029 = NULL;
F->w_3030 = NULL;
F->g_3031 = NULL;
F->ent_3032 = NULL;
F->ticks_3033 = NULL;
F->vt_3034 = NULL;
F->y_3035 = NULL;
f_new_name_230(F->up, rt_g_lit("al", 2), &F->al_3029);
f_new_name_230(F->up, rt_g_lit("w", 1), &F->w_3030);
while ((F->alt_3024 != NULL)) {
F->n_3025 = rt_add(G_NV(F->n_3025), ((rt_int)1LL));
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->alt_3024)).b_)).kind_) == ((rt_int)32LL))) {
F->has_delay_3027 = 1;
} else {
F->has_accept_3028 = 1;
}
F->alt_3024 = (*(P174)rt_nil_check(F->alt_3024)).next_;
}
L_end_3036: ;
if (((G_NV((*(P174)rt_nil_check(F->s_1203)).flag_) == ((rt_int)1LL)) && G_NV(F->has_delay_3027))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->s_1203)).line_), rt_g_lit("a select cannot have both delay alternatives and an else part (RM79 9.7)", 72));
}
if ((!G_NV(F->has_accept_3028))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->s_1203)).line_), rt_g_lit("a select needs at least one accept alternative (RM79 9.7)", 57));
}
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_alt ", 9), (*(P140)rt_nil_check(F->al_3029))), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(rt_add(G_NV(F->n_3025), ((rt_int)1LL))))), rt_g_lit("]; int open_ = 0;", 17)));
F->alt_3024 = (*(P174)rt_nil_check(F->s_1203)).a_;
F->i_3026 = ((rt_int)0LL);
while ((F->alt_3024 != NULL)) {
F->g_3031 = f_mk_227(F->up, rt_g_lit("1", 1));
if (((*(P174)rt_nil_check(F->alt_3024)).a_ != NULL)) {
f_condition_845(F->up, (*(P174)rt_nil_check(F->alt_3024)).a_, F->up->ty_bool_157, &F->vt_3034, &F->g_3031);
f_check_type_486(F->up, F->vt_3034, F->up->ty_bool_157, G_NV((*(P174)rt_nil_check(F->alt_3024)).line_));
}
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->alt_3024)).b_)).kind_) == ((rt_int)34LL))) {
F->y_3035 = f_lookup_entry_429(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->alt_3024)).b_)).name_)), F->up->cur_task_202);
if (((F->y_3035 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_3035)).kind_) != ((rt_int)10LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->alt_3024)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->alt_3024)).b_)).name_)), rt_g_lit(" is not an entry", 16)));
}
f_entry_path_1143(F->up, F->y_3035, rt_g_lit("", 0), &F->ent_3032);
f_member_slot_1199(F->up, F->y_3035, (*(P174)rt_nil_check(F->alt_3024)).b_, &F->ent_3032);
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->al_3029)), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(G_NV(F->i_3026)))), rt_g_lit("] = (rt_alt){RT_ALT_ACCEPT, (", 29)), (*(P140)rt_nil_check(F->g_3031))), rt_g_lit("), &", 4)), (*(P140)rt_nil_check(F->ent_3032))), rt_g_lit(", NULL, 0};", 11)));
} else {
f_gen_delay_ticks_1202(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->alt_3024)).b_)).a_, &F->ticks_3033);
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->al_3029)), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(G_NV(F->i_3026)))), rt_g_lit("] = (rt_alt){RT_ALT_DELAY, (", 28)), (*(P140)rt_nil_check(F->g_3031))), rt_g_lit("), NULL, NULL, ", 15)), (*(P140)rt_nil_check(F->ticks_3033))), rt_g_lit("};", 2)));
}
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("open_ |= ", 9), (*(P140)rt_nil_check(F->al_3029))), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(G_NV(F->i_3026)))), rt_g_lit("].open;", 7)));
F->i_3026 = rt_add(G_NV(F->i_3026), ((rt_int)1LL));
F->alt_3024 = (*(P174)rt_nil_check(F->alt_3024)).next_;
}
L_end_3037: ;
if ((G_NV((*(P174)rt_nil_check(F->s_1203)).flag_) == ((rt_int)1LL))) {
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->al_3029)), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(G_NV(F->n_3025)))), rt_g_lit("] = (rt_alt){RT_ALT_ELSE, 1, NULL, NULL, 0};", 44)));
F->n_3025 = rt_add(G_NV(F->n_3025), ((rt_int)1LL));
} else {
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (!open_) rt_raise(rt_exc(", 28), f_q_245(F->up)), rt_g_lit("SELECT_ERROR", 12)), f_q_245(F->up)), rt_g_lit("));", 3)));
}
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("int ", 4), (*(P140)rt_nil_check(F->w_3030))), rt_g_lit(" = rt_wait(", 11)), rt_g_s2g(rt_str_of_int(G_NV(F->n_3025)))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->al_3029))), rt_g_lit(");", 2)));
F->alt_3024 = (*(P174)rt_nil_check(F->s_1203)).a_;
F->i_3026 = ((rt_int)0LL);
while ((F->alt_3024 != NULL)) {
if ((G_NV(F->i_3026) == ((rt_int)0LL))) {
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P140)rt_nil_check(F->w_3030))), rt_g_lit(" == 0) {", 8)));
} else {
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P140)rt_nil_check(F->w_3030))), rt_g_lit(" == ", 4)), rt_g_s2g(rt_str_of_int(G_NV(F->i_3026)))), rt_g_lit(") {", 3)));
}
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->alt_3024)).b_)).kind_) == ((rt_int)34LL))) {
f_gen_accept_1195(F->up, (*(P174)rt_nil_check(F->alt_3024)).b_);
}
f_gen_statements_694(F->up, (*(P174)rt_nil_check(F->alt_3024)).c_);
F->i_3026 = rt_add(G_NV(F->i_3026), ((rt_int)1LL));
F->alt_3024 = (*(P174)rt_nil_check(F->alt_3024)).next_;
}
L_end_3038: ;
if ((G_NV((*(P174)rt_nil_check(F->s_1203)).flag_) == ((rt_int)1LL))) {
f_emit_254(F->up, rt_g_lit("} else {", 8));
f_gen_statements_694(F->up, (*(P174)rt_nil_check(F->s_1203)).b_);
}
f_emit_254(F->up, rt_g_lit("}", 1));
f_emit_254(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_family_range_1209(struct f_greenc_1fr *up_, P117 y_1205, P174 ix_1206, P140 *lo_1207, P140 *hi_1208) {
  struct f_family_range_1209fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1205 = y_1205;
F->ix_1206 = ix_1206;
F->lo_1207 = lo_1207;
F->hi_1208 = hi_1208;
F->vt_3039 = NULL;
if ((F->ix_1206 == NULL)) {
f_path_at_1119(F->up, G_NV((*(P117)rt_nil_check(F->y_1205)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1205)).cname_)), rt_g_lit("lo", 2)), &(*F->lo_1207));
f_path_at_1119(F->up, G_NV((*(P117)rt_nil_check(F->y_1205)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1205)).cname_)), rt_g_lit("hi", 2)), &(*F->hi_1208));
} else if ((G_NV((*(P174)rt_nil_check(F->ix_1206)).kind_) == ((rt_int)14LL))) {
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->ix_1206)).a_, F->up->ty_int_156, &F->vt_3039, &(*F->lo_1207));
f_gexpr_805(F->up, (*(P174)rt_nil_check(F->ix_1206)).b_, F->up->ty_int_156, &F->vt_3039, &(*F->hi_1208));
} else {
f_gexpr_805(F->up, F->ix_1206, F->up->ty_int_156, &F->vt_3039, &(*F->lo_1207));
(*F->hi_1208) = (*F->lo_1207);
}
ret_:

  return;
}

static void f_task_statement_gen_1211(struct f_greenc_1fr *up_, P174 s_1210) {
  struct f_task_statement_gen_1211fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1210 = s_1210;
F->n_3040 = NULL;
F->ix_3041 = NULL;
F->y_3042 = NULL;
F->a_3043 = NULL;
F->d_3044 = NULL;
F->l_3045 = NULL;
F->ticks_3046 = NULL;
F->lo_3047 = NULL;
F->hi_3048 = NULL;
{ rt_int sel3049 = G_NV((*(P174)rt_nil_check(F->s_1210)).kind_);
if (0 || sel3049 == ((rt_int)32LL)) {
f_gen_delay_ticks_1202(F->up, (*(P174)rt_nil_check(F->s_1210)).a_, &F->ticks_3046);
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_delay(", 9), (*(P140)rt_nil_check(F->ticks_3046))), rt_g_lit(");", 2)));
} else if (0 || sel3049 == ((rt_int)33LL)) {
if ((G_NV(F->up->accept_depth_203) > ((rt_int)0LL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->s_1210)).line_), rt_g_lit("an accept body cannot initiate a task (RM79 9.5)", 48));
}
F->n_3040 = (*(P174)rt_nil_check(F->s_1210)).a_;
while ((F->n_3040 != NULL)) {
f_task_of_1125(F->up, F->n_3040, &F->y_3042, &F->ix_3041);
f_path_at_1119(F->up, G_NV((*(P117)rt_nil_check(F->y_3042)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3042)).cname_)), rt_g_lit("decl", 4)), &F->d_3044);
if ((G_NV((*(P117)rt_nil_check(F->y_3042)).level_) > ((rt_int)0LL))) {
f_link_to_745(F->up, G_NV((*(P117)rt_nil_check(F->y_3042)).level_), &F->l_3045);
} else {
F->l_3045 = f_mk_227(F->up, rt_g_lit("NULL", 4));
}
if (((*(P117)rt_nil_check(F->y_3042)).c_ == NULL)) {
f_act_path_1135(F->up, F->y_3042, &F->a_3043);
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_create(&", 11), (*(P140)rt_nil_check(F->a_3043))), rt_g_lit(", &", 3)), (*(P140)rt_nil_check(F->d_3044))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3042)).cname_))), rt_g_lit("run, ", 5)), (*(P140)rt_nil_check(F->l_3045))), rt_g_lit(");", 2)));
} else {
f_family_range_1209(F->up, F->y_3042, F->ix_3041, &F->lo_3047, &F->hi_3048);
f_act_path_i_1139(F->up, F->y_3042, rt_g_lit("k_", 2), &F->a_3043);
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = ", 17), (*(P140)rt_nil_check(F->lo_3047))), rt_g_lit("; k_ <= ", 8)), (*(P140)rt_nil_check(F->hi_3048))), rt_g_lit("; k_++) { struct rt_famarg *g_ = rt_alloc(sizeof *g_); g_->up = ", 64)), (*(P140)rt_nil_check(F->l_3045))), rt_g_lit("; g_->i = k_; rt_create(&", 25)), (*(P140)rt_nil_check(F->a_3043))), rt_g_lit(", &", 3)), (*(P140)rt_nil_check(F->d_3044))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3042)).cname_))), rt_g_lit("run, g_); }", 11)));
}
F->n_3040 = (*(P174)rt_nil_check(F->n_3040)).next_;
}
L_end_3050: ;
} else if (0 || sel3049 == ((rt_int)34LL)) {
f_gen_accept_1195(F->up, F->s_1210);
} else if (0 || sel3049 == ((rt_int)35LL)) {
f_gen_select_1204(F->up, F->s_1210);
} else if (0 || sel3049 == ((rt_int)36LL)) {
F->n_3040 = (*(P174)rt_nil_check(F->s_1210)).a_;
while ((F->n_3040 != NULL)) {
f_task_of_1125(F->up, F->n_3040, &F->y_3042, &F->ix_3041);
if (((*(P117)rt_nil_check(F->y_3042)).c_ == NULL)) {
f_act_path_1135(F->up, F->y_3042, &F->a_3043);
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_abort(&", 12), (*(P140)rt_nil_check(F->a_3043))), rt_g_lit(");", 2)));
} else {
f_family_range_1209(F->up, F->y_3042, F->ix_3041, &F->lo_3047, &F->hi_3048);
f_act_path_i_1139(F->up, F->y_3042, rt_g_lit("k_", 2), &F->a_3043);
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = ", 17), (*(P140)rt_nil_check(F->lo_3047))), rt_g_lit("; k_ <= ", 8)), (*(P140)rt_nil_check(F->hi_3048))), rt_g_lit("; k_++) rt_g_abort(&", 20)), (*(P140)rt_nil_check(F->a_3043))), rt_g_lit(");", 2)));
}
F->n_3040 = (*(P174)rt_nil_check(F->n_3040)).next_;
}
L_end_3051: ;
} else {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->s_1210)).line_), rt_g_lit("this statement is not handled", 29));
}
}
ret_:

  return;
}

static P174 f_root_name_1213(struct f_greenc_1fr *up_, P174 e_1212) {
  struct f_root_name_1213fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1212 = e_1212;
if ((G_NV((*(P174)rt_nil_check(F->e_1212)).kind_) == ((rt_int)5LL))) {
F->result_ = F->e_1212;
goto ret_;
} else if ((((G_NV((*(P174)rt_nil_check(F->e_1212)).kind_) == ((rt_int)9LL)) || (G_NV((*(P174)rt_nil_check(F->e_1212)).kind_) == ((rt_int)8LL))) || (G_NV((*(P174)rt_nil_check(F->e_1212)).kind_) == ((rt_int)15LL)))) {
F->result_ = f_root_name_1213(F->up, (*(P174)rt_nil_check(F->e_1212)).a_);
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_pure_target_1216(struct f_greenc_1fr *up_, P174 target_1214, rt_int line_1215) {
  struct f_check_pure_target_1216fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->target_1214 = target_1214;
F->line_1215 = line_1215;
F->n_3052 = NULL;
F->y_3053 = NULL;
if ((F->up->pure_sym_216 == NULL)) {
goto ret_;
}
if (G_NV(F->up->last_deref_220)) {
f_fail_248(F->up, F->line_1215, cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->pure_sym_216)).name_))), rt_g_lit(" may not change an object designated by an access value (RM79 6.5)", 66)));
}
F->n_3052 = f_root_name_1213(F->up, F->target_1214);
if ((F->n_3052 != NULL)) {
F->y_3053 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_3052)).name_)));
if ((((F->y_3053 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_3053)).kind_) == ((rt_int)1LL))) && (G_NV((*(P117)rt_nil_check(F->y_3053)).depth_) < G_NV(F->up->pure_depth_217)))) {
f_fail_248(F->up, F->line_1215, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->pure_sym_216)).name_))), rt_g_lit(" may not assign to ", 19)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_3052)).name_))), rt_g_lit(", which is not local to it (RM79 6.5)", 37)));
}
}
ret_:

  return;
}

static int f_assigns_nonlocal_1219(struct f_greenc_1fr *up_, P174 d_1217, rt_gstr name_1218) {
  struct f_assigns_nonlocal_1219fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_1217 = d_1217;
F->name_1218 = cp_rt_gstr(name_1218);
if (f_scan_assigns_1230(F->up, (*(P174)rt_nil_check(F->d_1217)).d_, F->d_1217, F->name_1218)) {
F->result_ = 1;
goto ret_;
}
F->result_ = f_scan_handlers_1226(F->up, (*(P174)rt_nil_check(F->d_1217)).e_, F->d_1217, F->name_1218);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_declares_1222(struct f_greenc_1fr *up_, P174 d_1220, rt_gstr name_1221) {
  struct f_declares_1222fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_1220 = d_1220;
F->name_1221 = cp_rt_gstr(name_1221);
F->p_3054 = NULL;
F->p_3054 = (*(P174)rt_nil_check(F->d_1220)).a_;
F->e_3055 = NULL;
F->e_3055 = (*(P174)rt_nil_check(F->d_1220)).c_;
while ((F->p_3054 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3054)).name_)), F->name_1221)) {
F->result_ = 1;
goto ret_;
}
F->p_3054 = (*(P174)rt_nil_check(F->p_3054)).next_;
}
L_end_3056: ;
while ((F->e_3055 != NULL)) {
if ((((*(P174)rt_nil_check(F->e_3055)).name_ != NULL) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_3055)).name_)), F->name_1221))) {
F->result_ = 1;
goto ret_;
}
F->e_3055 = (*(P174)rt_nil_check(F->e_3055)).next_;
}
L_end_3057: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_scan_handlers_1226(struct f_greenc_1fr *up_, P174 h_1223, P174 d_1224, rt_gstr name_1225) {
  struct f_scan_handlers_1226fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->h_1223 = h_1223;
F->d_1224 = d_1224;
F->name_1225 = cp_rt_gstr(name_1225);
F->p_3058 = NULL;
F->p_3058 = F->h_1223;
while ((F->p_3058 != NULL)) {
if (f_scan_assigns_1230(F->up, (*(P174)rt_nil_check(F->p_3058)).b_, F->d_1224, F->name_1225)) {
F->result_ = 1;
goto ret_;
}
F->p_3058 = (*(P174)rt_nil_check(F->p_3058)).next_;
}
L_end_3059: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_scan_assigns_1230(struct f_greenc_1fr *up_, P174 stmts_1227, P174 d_1228, rt_gstr name_1229) {
  struct f_scan_assigns_1230fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_1227 = stmts_1227;
F->d_1228 = d_1228;
F->name_1229 = cp_rt_gstr(name_1229);
F->s_3060 = NULL;
F->s_3060 = F->stmts_1227;
F->a_3061 = NULL;
F->r_3062 = NULL;
while ((F->s_3060 != NULL)) {
if ((G_NV((*(P174)rt_nil_check(F->s_3060)).kind_) == ((rt_int)20LL))) {
F->r_3062 = f_root_name_1213(F->up, (*(P174)rt_nil_check(F->s_3060)).a_);
if ((((F->r_3062 != NULL) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_3062)).name_)), F->name_1229)) && (!f_declares_1222(F->up, F->d_1228, F->name_1229)))) {
F->result_ = 1;
goto ret_;
}
} else if ((G_NV((*(P174)rt_nil_check(F->s_3060)).kind_) == ((rt_int)22LL))) {
F->a_3061 = (*(P174)rt_nil_check(F->s_3060)).a_;
while ((F->a_3061 != NULL)) {
if (f_scan_assigns_1230(F->up, (*(P174)rt_nil_check(F->a_3061)).b_, F->d_1228, F->name_1229)) {
F->result_ = 1;
goto ret_;
}
F->a_3061 = (*(P174)rt_nil_check(F->a_3061)).next_;
}
L_end_3064: ;
if (f_scan_assigns_1230(F->up, (*(P174)rt_nil_check(F->s_3060)).b_, F->d_1228, F->name_1229)) {
F->result_ = 1;
goto ret_;
}
} else if ((G_NV((*(P174)rt_nil_check(F->s_3060)).kind_) == ((rt_int)23LL))) {
F->a_3061 = (*(P174)rt_nil_check(F->s_3060)).b_;
while ((F->a_3061 != NULL)) {
if (f_scan_assigns_1230(F->up, (*(P174)rt_nil_check(F->a_3061)).b_, F->d_1228, F->name_1229)) {
F->result_ = 1;
goto ret_;
}
F->a_3061 = (*(P174)rt_nil_check(F->a_3061)).next_;
}
L_end_3065: ;
if (f_scan_assigns_1230(F->up, (*(P174)rt_nil_check(F->s_3060)).c_, F->d_1228, F->name_1229)) {
F->result_ = 1;
goto ret_;
}
} else if ((G_NV((*(P174)rt_nil_check(F->s_3060)).kind_) == ((rt_int)24LL))) {
if (f_scan_assigns_1230(F->up, (*(P174)rt_nil_check(F->s_3060)).b_, F->d_1228, F->name_1229)) {
F->result_ = 1;
goto ret_;
}
} else if ((G_NV((*(P174)rt_nil_check(F->s_3060)).kind_) == ((rt_int)25LL))) {
if ((f_scan_assigns_1230(F->up, (*(P174)rt_nil_check(F->s_3060)).b_, F->d_1228, F->name_1229) || f_scan_handlers_1226(F->up, (*(P174)rt_nil_check(F->s_3060)).c_, F->d_1228, F->name_1229))) {
F->result_ = 1;
goto ret_;
}
}
F->s_3060 = (*(P174)rt_nil_check(F->s_3060)).next_;
}
L_end_3063: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_call_rules_1233(struct f_greenc_1fr *up_, P174 e_1231, P117 y_1232) {
  struct f_check_call_rules_1233fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1231 = e_1231;
F->y_1232 = y_1232;
F->z_3066 = NULL;
F->s_3067 = NULL;
if ((((F->up->pure_sym_216 != NULL) && ((G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_1232)).result_)).kind_) == ((rt_int)9LL)) || G_NV((*(P117)rt_nil_check(F->y_1232)).vrp_))) && (G_NV((*(P117)rt_nil_check(F->y_1232)).depth_) < G_NV(F->up->pure_depth_217)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1231)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->pure_sym_216)).name_))), rt_g_lit(" may not call procedure ", 24)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1232)).name_))), rt_g_lit(": it could have side effects (RM79 6.5)", 39)));
}
if (((!G_NV((*(P117)rt_nil_check(F->y_1232)).vrp_)) || (G_NV(F->up->trial_155) > ((rt_int)0LL)))) {
goto ret_;
}
if ((!G_NV(F->up->vrp_ok_218))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1231)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("value-returning procedure ", 26), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1232)).name_))), rt_g_lit(" can be called only in an assignment, an initialization or a procedure call (RM79 6.5)", 86)));
}
F->s_3067 = F->up->scope_stack_121;
while ((F->s_3067 != NULL)) {
if (((((G_NV((*(P117)rt_nil_check(F->s_3067)).kind_) == ((rt_int)1LL)) && (G_NV((*(P117)rt_nil_check(F->s_3067)).depth_) <= G_NV((*(P117)rt_nil_check(F->y_1232)).depth_))) && (f_lookup_423(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->s_3067)).name_))) == F->s_3067)) && f_assigns_nonlocal_1219(F->up, (*(P117)rt_nil_check(F->y_1232)).decl_, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->s_3067)).name_))))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1231)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("value-returning procedure ", 26), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1232)).name_))), rt_g_lit(" assigns ", 9)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->s_3067)).name_))), rt_g_lit(", which is visible here; it can be called only outside its scope (RM79 6.5)", 75)));
}
F->s_3067 = (*(P117)rt_nil_check(F->s_3067)).stack_;
}
L_end_3068: ;
ret_:

  return;
}

static void f_generic_p_1235(struct f_greenc_1fr *up_, P174 *res_1234) {
  struct f_generic_p_1235fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1234 = res_1234;
F->x_3069 = NULL;
F->p_3070 = NULL;
F->head_3071 = NULL;
F->tail_3072 = NULL;
F->names_3073 = NULL;
F->st_3074 = NULL;
F->def_3075 = NULL;
F->sub_3076 = NULL;
F->def_name_text_3077 = NULL;
F->more_3078 = INT_MIN;
F->more_3078 = 1;
f_expect_kw_323(F->up, rt_g_lit("GENERIC", 7));
F->x_3069 = f_nn_301(F->up, ((rt_int)54LL), f_cur_line_308(F->up));
if (f_at_op_312(F->up, rt_g_lit("(", 1))) {
f_skip_321(F->up);
while (G_NV(F->more_3078)) {
if (f_at_kw_310(F->up, rt_g_lit("RESTRICTED", 10))) {
f_skip_321(F->up);
}
if (f_at_kw_310(F->up, rt_g_lit("TYPE", 4))) {
f_skip_321(F->up);
F->p_3070 = f_nn_301(F->up, ((rt_int)47LL), f_cur_line_308(F->up));
(*(P174)rt_nil_check(F->p_3070)).ival_ = ((rt_int)10LL);
f_expect_id_327(F->up, &(*(P174)rt_nil_check(F->p_3070)).name_);
f_append_305(F->up, &F->head_3071, &F->tail_3072, F->p_3070);
} else if ((f_at_kw_310(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_310(F->up, rt_g_lit("FUNCTION", 8)))) {
F->p_3070 = f_nn_301(F->up, ((rt_int)47LL), f_cur_line_308(F->up));
(*(P174)rt_nil_check(F->p_3070)).ival_ = ((rt_int)11LL);
if (f_at_kw_310(F->up, rt_g_lit("PROCEDURE", 9))) {
F->sub_3076 = f_nn_301(F->up, ((rt_int)44LL), f_cur_line_308(F->up));
} else {
F->sub_3076 = f_nn_301(F->up, ((rt_int)45LL), f_cur_line_308(F->up));
}
f_skip_321(F->up);
f_designator_388(F->up, &(*(P174)rt_nil_check(F->sub_3076)).name_);
if (f_at_op_312(F->up, rt_g_lit("(", 1))) {
f_formal_part_386(F->up, &(*(P174)rt_nil_check(F->sub_3076)).a_);
}
if (f_at_kw_310(F->up, rt_g_lit("RETURN", 6))) {
f_skip_321(F->up);
f_subtype_ind_365(F->up, &(*(P174)rt_nil_check(F->sub_3076)).b_);
}
(*(P174)rt_nil_check(F->sub_3076)).ival_ = ((rt_int)1LL);
(*(P174)rt_nil_check(F->p_3070)).name_ = (*(P174)rt_nil_check(F->sub_3076)).name_;
(*(P174)rt_nil_check(F->p_3070)).a_ = F->sub_3076;
if (f_at_kw_310(F->up, rt_g_lit("IS", 2))) {
f_skip_321(F->up);
if (f_at_kind_314(F->up, ((rt_int)6LL))) {
f_designator_388(F->up, &F->def_name_text_3077);
(*(P174)rt_nil_check(F->p_3070)).b_ = f_nn_301(F->up, ((rt_int)5LL), f_cur_line_308(F->up));
(*(P174)rt_nil_check((*(P174)rt_nil_check(F->p_3070)).b_)).name_ = F->def_name_text_3077;
} else {
f_name_p_359(F->up, &(*(P174)rt_nil_check(F->p_3070)).b_);
}
}
f_append_305(F->up, &F->head_3071, &F->tail_3072, F->p_3070);
} else {
f_id_list_331(F->up, &F->names_3073);
f_expect_op_325(F->up, rt_g_lit(":", 1));
if (f_at_kw_310(F->up, rt_g_lit("IN", 2))) {
f_skip_321(F->up);
}
f_subtype_ind_365(F->up, &F->st_3074);
F->def_3075 = NULL;
if (f_at_op_312(F->up, rt_g_lit(":=", 2))) {
f_skip_321(F->up);
f_expr_338(F->up, &F->def_3075);
}
while ((F->names_3073 != NULL)) {
F->p_3070 = f_nn_301(F->up, ((rt_int)47LL), G_NV((*(P174)rt_nil_check(F->names_3073)).line_));
(*(P174)rt_nil_check(F->p_3070)).ival_ = ((rt_int)1LL);
(*(P174)rt_nil_check(F->p_3070)).name_ = (*(P174)rt_nil_check(F->names_3073)).name_;
(*(P174)rt_nil_check(F->p_3070)).a_ = F->st_3074;
(*(P174)rt_nil_check(F->p_3070)).b_ = F->def_3075;
f_append_305(F->up, &F->head_3071, &F->tail_3072, F->p_3070);
F->names_3073 = (*(P174)rt_nil_check(F->names_3073)).next_;
}
L_end_3080: ;
}
F->more_3078 = f_at_op_312(F->up, rt_g_lit(";", 1));
if (G_NV(F->more_3078)) {
f_skip_321(F->up);
}
}
L_end_3079: ;
f_expect_op_325(F->up, rt_g_lit(")", 1));
}
if ((f_at_kw_310(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_310(F->up, rt_g_lit("FUNCTION", 8)))) {
f_subprogram_390(F->up, &(*(P174)rt_nil_check(F->x_3069)).b_);
} else if (f_at_kw_310(F->up, rt_g_lit("PACKAGE", 7))) {
f_package_p_396(F->up, &(*(P174)rt_nil_check(F->x_3069)).b_);
} else if (f_at_kw_310(F->up, rt_g_lit("TASK", 4))) {
f_task_p_1105(F->up, &(*(P174)rt_nil_check(F->x_3069)).b_);
} else {
f_perror_320(F->up, rt_g_lit("a generic unit is a subprogram, a package or a task", 51));
}
(*(P174)rt_nil_check(F->x_3069)).a_ = F->head_3071;
(*(P174)rt_nil_check(F->x_3069)).name_ = (*(P174)rt_nil_check((*(P174)rt_nil_check(F->x_3069)).b_)).name_;
(*F->res_1234) = F->x_3069;
ret_:

  return;
}

static void f_instantiation_1238(struct f_greenc_1fr *up_, P174 x_1236, P174 *res_1237) {
  struct f_instantiation_1238fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_1236 = x_1236;
F->res_1237 = res_1237;
F->i_3081 = NULL;
F->head_3082 = NULL;
F->tail_3083 = NULL;
F->a_3084 = NULL;
F->formal_3085 = NULL;
F->mark_3086 = INT64_MIN;
F->more_3087 = INT_MIN;
F->more_3087 = 1;
f_expect_kw_323(F->up, rt_g_lit("IS", 2));
f_expect_kw_323(F->up, rt_g_lit("NEW", 3));
F->i_3081 = f_nn_301(F->up, ((rt_int)53LL), G_NV((*(P174)rt_nil_check(F->x_1236)).line_));
(*(P174)rt_nil_check(F->i_3081)).name_ = (*(P174)rt_nil_check(F->x_1236)).name_;
(*(P174)rt_nil_check(F->i_3081)).ival_ = G_NV((*(P174)rt_nil_check(F->x_1236)).kind_);
f_expect_id_327(F->up, &(*(P174)rt_nil_check(F->i_3081)).tag_);
if (f_at_op_312(F->up, rt_g_lit("(", 1))) {
f_skip_321(F->up);
while (G_NV(F->more_3087)) {
F->formal_3085 = NULL;
F->mark_3086 = ((rt_int)0LL);
if (((f_at_kind_314(F->up, ((rt_int)1LL)) && (f_kind_at_316(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_318(F->up, ((rt_int)1LL)), rt_g_lit("IS", 2)))) {
f_expect_id_327(F->up, &F->formal_3085);
f_skip_321(F->up);
F->mark_3086 = ((rt_int)5LL);
} else if (((f_at_kind_314(F->up, ((rt_int)1LL)) && (f_kind_at_316(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && ((eq_rt_gstr(f_text_at_318(F->up, ((rt_int)1LL)), rt_g_lit(":=", 2)) || eq_rt_gstr(f_text_at_318(F->up, ((rt_int)1LL)), rt_g_lit("=:", 2))) || eq_rt_gstr(f_text_at_318(F->up, ((rt_int)1LL)), rt_g_lit(":=:", 3))))) {
f_expect_id_327(F->up, &F->formal_3085);
f_skip_321(F->up);
F->mark_3086 = ((rt_int)1LL);
}
if ((f_at_kind_314(F->up, ((rt_int)6LL)) && (G_NV(F->mark_3086) == ((rt_int)5LL)))) {
F->a_3084 = f_nn_301(F->up, ((rt_int)5LL), f_cur_line_308(F->up));
f_designator_388(F->up, &(*(P174)rt_nil_check(F->a_3084)).name_);
} else {
f_expr_338(F->up, &F->a_3084);
}
(*(P174)rt_nil_check(F->a_3084)).formal_ = F->formal_3085;
(*(P174)rt_nil_check(F->a_3084)).flag_ = G_NV(F->mark_3086);
f_append_305(F->up, &F->head_3082, &F->tail_3083, F->a_3084);
F->more_3087 = f_at_op_312(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_3087)) {
f_skip_321(F->up);
}
}
L_end_3088: ;
f_expect_op_325(F->up, rt_g_lit(")", 1));
}
f_expect_op_325(F->up, rt_g_lit(";", 1));
(*(P174)rt_nil_check(F->i_3081)).a_ = F->head_3082;
(*F->res_1237) = F->i_3081;
ret_:

  return;
}

static void f_generic_decl_1240(struct f_greenc_1fr *up_, P174 e_1239) {
  struct f_generic_decl_1240fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1239 = e_1239;
F->y_3089 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->e_1239)).kind_) == ((rt_int)54LL))) {
F->y_3089 = f_new_sym_469(F->up, ((rt_int)11LL), (*(P174)rt_nil_check(F->e_1239)).name_);
(*(P117)rt_nil_check(F->y_3089)).decl_ = F->e_1239;
f_define_464(F->up, F->y_3089, G_NV((*(P174)rt_nil_check(F->e_1239)).line_));
} else if ((G_NV((*(P174)rt_nil_check(F->e_1239)).kind_) == ((rt_int)53LL))) {
f_instantiate_1261(F->up, F->e_1239);
} else {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1239)).line_), rt_g_lit("this declaration is not handled", 31));
}
ret_:

  return;
}

static int f_is_generic_name_1242(struct f_greenc_1fr *up_, rt_gstr n_1241) {
  struct f_is_generic_name_1242fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1241 = cp_rt_gstr(n_1241);
F->y_3090 = NULL;
F->y_3090 = f_lookup_423(F->up, F->n_1241);
if ((!(F->y_3090 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P117)rt_nil_check(F->y_3090)).kind_) == ((rt_int)11LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_attach_generic_body_1244(struct f_greenc_1fr *up_, P174 e_1243) {
  struct f_attach_generic_body_1244fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1243 = e_1243;
F->y_3091 = NULL;
F->y_3091 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1243)).name_)));
(*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_3091)).decl_)).c_ = F->e_1243;
F->up->generic_contexts_148 = ({ R147 *cell3092 = rt_alloc(sizeof(R147)); *cell3092 = cp_R147(({ R147 ag3093; ag3093.body_node_ = F->e_1243; ag3093.visible_ = F->up->scope_stack_121; ag3093.next_ = F->up->generic_contexts_148; ag3093; })); (P146)cell3092; });
ret_:

  return;
}

static void f_restore_generic_context_1247(struct f_greenc_1fr *up_, P174 body_node_1245, rt_int line_1246) {
  struct f_restore_generic_context_1247fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->body_node_1245 = body_node_1245;
F->line_1246 = line_1246;
F->ctx_3094 = NULL;
F->ctx_3094 = F->up->generic_contexts_148;
F->m_3095 = NULL;
F->z_3096 = NULL;
F->seen_3097 = INT_MIN;
while (((F->ctx_3094 != NULL) && ((*(P146)rt_nil_check(F->ctx_3094)).body_node_ != F->body_node_1245))) {
F->ctx_3094 = (*(P146)rt_nil_check(F->ctx_3094)).next_;
}
L_end_3098: ;
if ((F->ctx_3094 == NULL)) {
goto ret_;
}
F->m_3095 = (*(P146)rt_nil_check(F->ctx_3094)).visible_;
while ((F->m_3095 != NULL)) {
if (((G_NV((*(P117)rt_nil_check(F->m_3095)).level_) <= ((rt_int)0LL)) && (G_NV((*(P117)rt_nil_check(F->m_3095)).kind_) != ((rt_int)11LL)))) {
F->z_3096 = ({ A116 ix3100 = F->up->table_119; ix3100.p[rt_index(f_hash_416(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_3095)).name_))), ix3100.lo, ix3100.hi) - ix3100.lo]; });
F->seen_3097 = 0;
while ((F->z_3096 != NULL)) {
if (((G_NV((*(P117)rt_nil_check(F->z_3096)).depth_) == G_NV(F->up->depth_120)) && eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_3096)).name_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_3095)).name_))))) {
F->seen_3097 = 1;
}
F->z_3096 = (*(P117)rt_nil_check(F->z_3096)).chain_;
}
L_end_3101: ;
if ((!G_NV(F->seen_3097))) {
f_copy_sym_1053(F->up, F->m_3095, &F->z_3096);
f_define_464(F->up, F->z_3096, F->line_1246);
}
}
F->m_3095 = (*(P117)rt_nil_check(F->m_3095)).stack_;
}
L_end_3099: ;
ret_:

  return;
}

static P174 f_gactual_1251(struct f_greenc_1fr *up_, P174 args_1248, rt_int nth_1249, rt_gstr name_1250) {
  struct f_gactual_1251fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->args_1248 = args_1248;
F->nth_1249 = nth_1249;
F->name_1250 = cp_rt_gstr(name_1250);
F->a_3102 = NULL;
F->a_3102 = F->args_1248;
F->i_3103 = INT64_MIN;
F->i_3103 = ((rt_int)1LL);
while ((F->a_3102 != NULL)) {
if ((((*(P174)rt_nil_check(F->a_3102)).formal_ == NULL) && (G_NV(F->i_3103) == F->nth_1249))) {
F->result_ = F->a_3102;
goto ret_;
}
if ((((*(P174)rt_nil_check(F->a_3102)).formal_ != NULL) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_3102)).formal_)), F->name_1250))) {
F->result_ = F->a_3102;
goto ret_;
}
if (((*(P174)rt_nil_check(F->a_3102)).formal_ == NULL)) {
F->i_3103 = rt_add(G_NV(F->i_3103), ((rt_int)1LL));
}
F->a_3102 = (*(P174)rt_nil_check(F->a_3102)).next_;
}
L_end_3104: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_copy_node_1255(struct f_greenc_1fr *up_, P174 n_1252, P140 name_1253, P174 *r_1254) {
  struct f_copy_node_1255fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1252 = n_1252;
F->name_1253 = name_1253;
F->r_1254 = r_1254;
(*F->r_1254) = f_nn_301(F->up, G_NV((*(P174)rt_nil_check(F->n_1252)).kind_), G_NV((*(P174)rt_nil_check(F->n_1252)).line_));
as_R175(&(*(P174)rt_nil_check((*F->r_1254))), (*(P174)rt_nil_check(F->n_1252)));
(*(P174)rt_nil_check((*F->r_1254))).name_ = F->name_1253;
(*(P174)rt_nil_check((*F->r_1254))).next_ = NULL;
ret_:

  return;
}

static int f_matches_formal_1259(struct f_greenc_1fr *up_, P117 y_1256, rt_gstr name_1257, P117 fs_1258) {
  struct f_matches_formal_1259fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1256 = y_1256;
F->name_1257 = cp_rt_gstr(name_1257);
F->fs_1258 = fs_1258;
if (((!eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1256)).name_)), F->name_1257)) || ((G_NV((*(P117)rt_nil_check(F->y_1256)).kind_) != ((rt_int)3LL)) && (G_NV((*(P117)rt_nil_check(F->y_1256)).kind_) != ((rt_int)4LL))))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (f_same_types_455(F->up, (*(P117)rt_nil_check(F->y_1256)).params_, (*(P117)rt_nil_check(F->fs_1258)).params_) && f_same_443(F->up, (*(P117)rt_nil_check(F->y_1256)).result_, (*(P117)rt_nil_check(F->fs_1258)).result_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_instantiate_1261(struct f_greenc_1fr *up_, P174 e_1260) {
  struct f_instantiate_1261fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1260 = e_1260;
F->g_3105 = NULL;
F->g_3105 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1260)).tag_)));
F->gd_3106 = NULL;
F->pat_3107 = NULL;
F->f_3108 = NULL;
F->a_3109 = NULL;
F->cn_3110 = NULL;
F->y_3111 = NULL;
F->z_3112 = NULL;
F->fs_3113 = NULL;
F->nth_3114 = INT64_MIN;
F->nth_3114 = ((rt_int)1LL);
F->t_3115 = NULL;
F->vt_3116 = NULL;
F->c_3117 = NULL;
F->v_3118 = NULL;
F->acc_3119 = NULL;
F->x_3120 = NULL;
F->ok_3121 = INT_MIN;
if (((F->g_3105 == NULL) || (G_NV((*(P117)rt_nil_check(F->g_3105)).kind_) != ((rt_int)11LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1260)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1260)).tag_)), rt_g_lit(" is not a generic unit", 22)));
}
F->gd_3106 = (*(P117)rt_nil_check(F->g_3105)).decl_;
F->pat_3107 = (*(P174)rt_nil_check(F->gd_3106)).b_;
f_open_scope_465(F->up);
F->f_3108 = (*(P174)rt_nil_check(F->gd_3106)).a_;
while ((F->f_3108 != NULL)) {
F->a_3109 = f_gactual_1251(F->up, (*(P174)rt_nil_check(F->e_1260)).a_, G_NV(F->nth_3114), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3108)).name_)));
F->nth_3114 = rt_add(G_NV(F->nth_3114), ((rt_int)1LL));
if ((G_NV((*(P174)rt_nil_check(F->f_3108)).ival_) == ((rt_int)10LL))) {
if (((F->a_3109 == NULL) || (G_NV((*(P174)rt_nil_check(F->a_3109)).kind_) != ((rt_int)5LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1260)).line_), cat_rt_gstr(rt_g_lit("a type is required for generic parameter ", 41), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3108)).name_))));
}
F->y_3111 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_3109)).name_)));
if (((F->y_3111 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_3111)).kind_) != ((rt_int)5LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1260)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_3109)).name_)), rt_g_lit(" is not a type", 14)));
}
f_copy_sym_1053(F->up, F->y_3111, &F->z_3112);
(*(P117)rt_nil_check(F->z_3112)).name_ = (*(P174)rt_nil_check(F->f_3108)).name_;
f_define_464(F->up, F->z_3112, G_NV((*(P174)rt_nil_check(F->e_1260)).line_));
} else if ((G_NV((*(P174)rt_nil_check(F->f_3108)).ival_) == ((rt_int)11LL))) {
if ((F->a_3109 == NULL)) {
F->a_3109 = (*(P174)rt_nil_check(F->f_3108)).b_;
}
if (((F->a_3109 == NULL) || (G_NV((*(P174)rt_nil_check(F->a_3109)).kind_) != ((rt_int)5LL)))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1260)).line_), cat_rt_gstr(rt_g_lit("a subprogram is required for generic parameter ", 47), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3108)).name_))));
}
f_build_subprogram_650(F->up, (*(P174)rt_nil_check(F->f_3108)).a_, &F->fs_3113);
F->y_3111 = ({ A116 ix3123 = F->up->table_119; ix3123.p[rt_index(f_hash_416(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_3109)).name_))), ix3123.lo, ix3123.hi) - ix3123.lo]; });
while (((F->y_3111 != NULL) && (!f_matches_formal_1259(F->up, F->y_3111, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_3109)).name_)), F->fs_3113)))) {
F->y_3111 = (*(P117)rt_nil_check(F->y_3111)).chain_;
}
L_end_3124: ;
if ((F->y_3111 == NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1260)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no subprogram ", 14), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_3109)).name_))), rt_g_lit(" matches generic parameter ", 27)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3108)).name_))));
}
f_copy_sym_1053(F->up, F->y_3111, &F->z_3112);
(*(P117)rt_nil_check(F->z_3112)).name_ = (*(P174)rt_nil_check(F->f_3108)).name_;
f_define_464(F->up, F->z_3112, G_NV((*(P174)rt_nil_check(F->e_1260)).line_));
} else {
if ((F->a_3109 == NULL)) {
F->a_3109 = (*(P174)rt_nil_check(F->f_3108)).b_;
}
if ((F->a_3109 == NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1260)).line_), cat_rt_gstr(rt_g_lit("no actual for generic parameter ", 32), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3108)).name_))));
}
f_resolve_507(F->up, (*(P174)rt_nil_check(F->f_3108)).a_, &F->t_3115, &F->c_3117);
f_gexpr_805(F->up, F->a_3109, F->t_3115, &F->vt_3116, &F->v_3118);
f_check_type_486(F->up, F->vt_3116, F->t_3115, G_NV((*(P174)rt_nil_check(F->e_1260)).line_));
F->z_3112 = f_new_sym_469(F->up, ((rt_int)2LL), (*(P174)rt_nil_check(F->f_3108)).name_);
f_storage_638(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3108)).name_)), F->t_3115, &F->acc_3119);
f_copy_code_623(F->up, F->t_3115, (*(P140)rt_nil_check(F->v_3118)), &F->x_3120);
f_emit_254(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->acc_3119)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_3120))), one_rt_gstr(59)));
(*(P117)rt_nil_check(F->z_3112)).t_ = F->t_3115;
(*(P117)rt_nil_check(F->z_3112)).c_ = F->c_3117;
(*(P117)rt_nil_check(F->z_3112)).ro_ = 1;
if ((G_NV((*(P122)rt_nil_check(F->t_3115)).kind_) == ((rt_int)1LL))) {
f_manifest_503(F->up, F->a_3109, &(*(P117)rt_nil_check(F->z_3112)).mvalue_, &F->ok_3121);
 (void)rt_range(F->ok_3121, 0, 1);
(*(P117)rt_nil_check(F->z_3112)).hasmv_ = G_NV(F->ok_3121);
}
f_bind_641(F->up, F->z_3112, F->acc_3119);
f_define_464(F->up, F->z_3112, G_NV((*(P174)rt_nil_check(F->e_1260)).line_));
}
F->f_3108 = (*(P174)rt_nil_check(F->f_3108)).next_;
}
L_end_3122: ;
if (((*(P174)rt_nil_check(F->gd_3106)).c_ != NULL)) {
f_restore_generic_context_1247(F->up, (*(P174)rt_nil_check(F->gd_3106)).c_, G_NV((*(P174)rt_nil_check(F->e_1260)).line_));
}
if (((G_NV((*(P174)rt_nil_check(F->pat_3107)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check(F->pat_3107)).kind_) == ((rt_int)45LL)))) {
if ((G_NV((*(P174)rt_nil_check(F->pat_3107)).ival_) == ((rt_int)1LL))) {
if (((*(P174)rt_nil_check(F->gd_3106)).c_ == NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1260)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the body of generic ", 20), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1260)).tag_))), rt_g_lit(" is not given before this instantiation", 39)));
}
F->pat_3107 = (*(P174)rt_nil_check(F->gd_3106)).c_;
}
f_copy_node_1255(F->up, F->pat_3107, (*(P174)rt_nil_check(F->e_1260)).name_, &F->cn_3110);
f_build_subprogram_650(F->up, F->cn_3110, &F->y_3111);
f_define_464(F->up, F->y_3111, G_NV((*(P174)rt_nil_check(F->e_1260)).line_));
f_subprogram_body_692(F->up, F->cn_3110, F->y_3111);
} else if ((G_NV((*(P174)rt_nil_check(F->pat_3107)).kind_) == ((rt_int)48LL))) {
f_copy_node_1255(F->up, F->pat_3107, (*(P174)rt_nil_check(F->e_1260)).name_, &F->cn_3110);
f_package_spec_1058(F->up, F->cn_3110);
F->y_3111 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1260)).name_)));
if (((*(P174)rt_nil_check(F->gd_3106)).c_ != NULL)) {
f_copy_node_1255(F->up, (*(P174)rt_nil_check(F->gd_3106)).c_, (*(P174)rt_nil_check(F->e_1260)).name_, &F->cn_3110);
f_package_body_1063(F->up, F->cn_3110);
}
} else {
f_copy_node_1255(F->up, F->pat_3107, (*(P174)rt_nil_check(F->e_1260)).name_, &F->cn_3110);
f_task_spec_1160(F->up, F->cn_3110);
F->y_3111 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1260)).name_)));
if (((*(P174)rt_nil_check(F->gd_3106)).c_ == NULL)) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->e_1260)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the body of generic task ", 25), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1260)).tag_))), rt_g_lit(" is not given before this instantiation", 39)));
}
f_copy_node_1255(F->up, (*(P174)rt_nil_check(F->gd_3106)).c_, (*(P174)rt_nil_check(F->e_1260)).name_, &F->cn_3110);
f_task_body_1164(F->up, F->cn_3110);
}
f_close_scope_466(F->up);
f_define_464(F->up, F->y_3111, G_NV((*(P174)rt_nil_check(F->e_1260)).line_));
ret_:

  return;
}

static void f_predef_type_1266(struct f_greenc_1fr *up_, rt_gstr name_1262, P122 t_1263, rt_gstr lo_1264, rt_gstr hi_1265) {
  struct f_predef_type_1266fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1262 = cp_rt_gstr(name_1262);
F->t_1263 = t_1263;
F->lo_1264 = cp_rt_gstr(lo_1264);
F->hi_1265 = cp_rt_gstr(hi_1265);
F->y_3125 = NULL;
F->y_3125 = f_new_sym_469(F->up, ((rt_int)5LL), f_mk_227(F->up, F->name_1262));
(*(P117)rt_nil_check(F->y_3125)).t_ = F->t_1263;
if ((({ rt_gstr at3126 = F->lo_1264; at3126.hi >= at3126.lo ? at3126.hi - at3126.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
(*(P117)rt_nil_check(F->y_3125)).c_ = f_new_cons_472(F->up);
(*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_3125)).c_)).lo_ = f_mk_227(F->up, F->lo_1264);
(*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_3125)).c_)).hi_ = f_mk_227(F->up, F->hi_1265);
if (((({ rt_gstr at3127 = F->hi_1265; at3127.hi >= at3127.lo ? at3127.hi - at3127.lo + 1 : (rt_int)0; }) < ((rt_int)12LL)) && f_is_digit_234(F->up, G_NV(({ rt_gstr ix3131 = F->hi_1265; ix3131.p[rt_index(({ rt_gstr at3130 = F->hi_1265; at3130.lo; }), ix3131.lo, ix3131.hi) - ix3131.lo]; }))))) {
(*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_3125)).c_)).mlo_ = rt_int_of_str(rt_g_g2s(F->lo_1264));
(*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_3125)).c_)).mhi_ = rt_int_of_str(rt_g_g2s(F->hi_1265));
(*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_3125)).c_)).hasm_ = 1;
}
}
f_define_464(F->up, F->y_3125, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_const_1270(struct f_greenc_1fr *up_, rt_gstr name_1267, P122 t_1268, rt_gstr code_text_1269) {
  struct f_predef_const_1270fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1267 = cp_rt_gstr(name_1267);
F->t_1268 = t_1268;
F->code_text_1269 = cp_rt_gstr(code_text_1269);
F->y_3132 = NULL;
F->y_3132 = f_new_sym_469(F->up, ((rt_int)2LL), f_mk_227(F->up, F->name_1267));
(*(P117)rt_nil_check(F->y_3132)).t_ = F->t_1268;
(*(P117)rt_nil_check(F->y_3132)).ro_ = 1;
(*(P117)rt_nil_check(F->y_3132)).access_path_ = f_mk_227(F->up, F->code_text_1269);
f_define_464(F->up, F->y_3132, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_exc_1272(struct f_greenc_1fr *up_, rt_gstr name_1271) {
  struct f_predef_exc_1272fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1271 = cp_rt_gstr(name_1271);
F->y_3133 = NULL;
F->y_3133 = f_new_sym_469(F->up, ((rt_int)6LL), f_mk_227(F->up, F->name_1271));
(*(P117)rt_nil_check(F->y_3133)).cname_ = f_mk_227(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_exc(", 7), f_q_245(F->up)), F->name_1271), f_q_245(F->up)), one_rt_gstr(41)));
f_define_464(F->up, F->y_3133, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_lit_1276(struct f_greenc_1fr *up_, rt_gstr name_1273, P122 t_1274, rt_int v_1275) {
  struct f_predef_lit_1276fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1273 = cp_rt_gstr(name_1273);
F->t_1274 = t_1274;
F->v_1275 = v_1275;
F->y_3134 = NULL;
F->y_3134 = f_new_sym_469(F->up, ((rt_int)7LL), f_mk_227(F->up, F->name_1273));
(*(P117)rt_nil_check(F->y_3134)).t_ = F->t_1274;
(*(P117)rt_nil_check(F->y_3134)).result_ = F->t_1274;
(*(P117)rt_nil_check(F->y_3134)).mvalue_ = F->v_1275;
(*(P117)rt_nil_check(F->y_3134)).hasmv_ = 1;
f_define_464(F->up, F->y_3134, ((rt_int)0LL));
ret_:

  return;
}

static void f_predefine_1277(struct f_greenc_1fr *up_) {
  struct f_predefine_1277fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_3135 = NULL;
F->control_3136 = cp_rt_gstr(cat_rt_gstr(rt_g_lit("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE ", 60), rt_g_lit("DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US ", 55)));
F->start_3137 = INT64_MIN;
F->start_3137 = ((rt_int)1LL);
F->code_no_3138 = INT64_MIN;
F->code_no_3138 = ((rt_int)0LL);
f_predef_type_1266(F->up, rt_g_lit("INTEGER", 7), F->up->ty_int_156, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1266(F->up, rt_g_lit("SHORT_INTEGER", 13), F->up->ty_short_167, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1266(F->up, rt_g_lit("LONG_INTEGER", 12), F->up->ty_long_168, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1266(F->up, rt_g_lit("NATURAL", 7), F->up->ty_int_156, rt_g_lit("1", 1), rt_g_lit("INT64_MAX", 9));
f_predef_type_1266(F->up, rt_g_lit("PRIORITY", 8), F->up->ty_int_156, rt_g_lit("0", 1), rt_g_lit("255", 3));
f_predef_type_1266(F->up, rt_g_lit("BOOLEAN", 7), F->up->ty_bool_157, rt_g_lit("0", 1), rt_g_lit("1", 1));
f_predef_type_1266(F->up, rt_g_lit("CHARACTER", 9), F->up->ty_char_159, rt_g_lit("0", 1), rt_g_lit("127", 3));
f_predef_type_1266(F->up, rt_g_lit("STRING", 6), F->up->ty_string_160, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1266(F->up, rt_g_lit("FLOAT", 5), F->up->ty_float_158, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1266(F->up, rt_g_lit("SHORT_FLOAT", 11), F->up->ty_sfloat_169, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1266(F->up, rt_g_lit("LONG_FLOAT", 10), F->up->ty_lfloat_170, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1266(F->up, rt_g_lit("TIME", 4), F->up->ty_time_171, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_lit_1276(F->up, rt_g_lit("FALSE", 5), F->up->ty_bool_157, ((rt_int)0LL));
f_predef_lit_1276(F->up, rt_g_lit("TRUE", 4), F->up->ty_bool_157, ((rt_int)1LL));
{ rt_int lo3142 = ((rt_int)1LL), hi3143 = ({ rt_gstr at3140 = F->control_3136; at3140.hi >= at3140.lo ? at3140.hi - at3140.lo + 1 : (rt_int)0; });
for (rt_int it3144 = lo3142; it3144 <= hi3143; it3144++) {
F->i_3141 = it3144;
if ((G_NV(({ rt_gstr ix3145 = F->control_3136; ix3145.p[rt_index(F->i_3141, ix3145.lo, ix3145.hi) - ix3145.lo]; })) == 32)) {
f_predef_const_1270(F->up, ({ rt_gstr sl3147 = F->control_3136; rt_int l_ = G_NV(F->start_3137), h_ = rt_sub(F->i_3141, ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl3147.lo, sl3147.hi); rt_index(h_, sl3147.lo, sl3147.hi); } sl3147.p += l_ - sl3147.lo; sl3147.lo = l_; sl3147.hi = h_; sl3147; }), F->up->ty_char_159, rt_g_s2g(rt_str_of_int(G_NV(F->code_no_3138))));
F->code_no_3138 = rt_add(G_NV(F->code_no_3138), ((rt_int)1LL));
F->start_3137 = rt_add(F->i_3141, ((rt_int)1LL));
}
}
}
L_end_3139: ;
f_predef_const_1270(F->up, rt_g_lit("DEL", 3), F->up->ty_char_159, rt_g_lit("127", 3));
f_predef_const_1270(F->up, rt_g_lit("EXCLAM", 6), F->up->ty_char_159, rt_g_lit("33", 2));
f_predef_const_1270(F->up, rt_g_lit("DOLLAR", 6), F->up->ty_char_159, rt_g_lit("36", 2));
f_predef_const_1270(F->up, rt_g_lit("QUESTION", 8), F->up->ty_char_159, rt_g_lit("63", 2));
f_predef_const_1270(F->up, rt_g_lit("AT_SIGN", 7), F->up->ty_char_159, rt_g_lit("64", 2));
f_predef_const_1270(F->up, rt_g_lit("L_BRACKET", 9), F->up->ty_char_159, rt_g_lit("91", 2));
f_predef_const_1270(F->up, rt_g_lit("BACK_SLASH", 10), F->up->ty_char_159, rt_g_lit("92", 2));
f_predef_const_1270(F->up, rt_g_lit("R_BRACKET", 9), F->up->ty_char_159, rt_g_lit("93", 2));
f_predef_const_1270(F->up, rt_g_lit("CIRCUMFLEX", 10), F->up->ty_char_159, rt_g_lit("94", 2));
f_predef_const_1270(F->up, rt_g_lit("GRAVE", 5), F->up->ty_char_159, rt_g_lit("96", 2));
f_predef_const_1270(F->up, rt_g_lit("L_BRACE", 7), F->up->ty_char_159, rt_g_lit("123", 3));
f_predef_const_1270(F->up, rt_g_lit("R_BRACE", 7), F->up->ty_char_159, rt_g_lit("125", 3));
f_predef_const_1270(F->up, rt_g_lit("TILDE", 5), F->up->ty_char_159, rt_g_lit("126", 3));
{ rt_int lo3150 = ((rt_int)0LL), hi3151 = ((rt_int)25LL);
for (rt_int it3152 = lo3150; it3152 <= hi3151; it3152++) {
F->i_3149 = it3152;
f_predef_const_1270(F->up, cat_rt_gstr(rt_g_lit("LC_", 3), one_rt_gstr(rt_range((rt_add(((rt_int)66LL), F->i_3149) - 1), 0, 127))), F->up->ty_char_159, rt_g_s2g(rt_str_of_int(rt_add(((rt_int)97LL), F->i_3149))));
}
}
L_end_3148: ;
f_predef_const_1270(F->up, rt_g_lit("NEWLINE", 7), F->up->ty_string_160, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_lit(", 9), f_q_245(F->up)), rt_g_lit("\\n", 2)), f_q_245(F->up)), rt_g_lit(", 1)", 4)));
f_predef_const_1270(F->up, rt_g_lit("SECONDS", 7), F->up->ty_time_171, rt_g_lit("((double)RT_SECONDS)", 20));
f_predef_exc_1272(F->up, rt_g_lit("ACCESS_ERROR", 12));
f_predef_exc_1272(F->up, rt_g_lit("ASSERT_ERROR", 12));
f_predef_exc_1272(F->up, rt_g_lit("DISCRIMINANT_ERROR", 18));
f_predef_exc_1272(F->up, rt_g_lit("DIVIDE_ERROR", 12));
f_predef_exc_1272(F->up, rt_g_lit("FAILURE", 7));
f_predef_exc_1272(F->up, rt_g_lit("INDEX_ERROR", 11));
f_predef_exc_1272(F->up, rt_g_lit("INITIATE_ERROR", 14));
f_predef_exc_1272(F->up, rt_g_lit("NO_VALUE_ERROR", 14));
f_predef_exc_1272(F->up, rt_g_lit("OVERFLOW", 8));
f_predef_exc_1272(F->up, rt_g_lit("OVERLAP_ERROR", 13));
f_predef_exc_1272(F->up, rt_g_lit("RANGE_ERROR", 11));
f_predef_exc_1272(F->up, rt_g_lit("SELECT_ERROR", 12));
f_predef_exc_1272(F->up, rt_g_lit("STORAGE_OVERFLOW", 16));
f_predef_exc_1272(F->up, rt_g_lit("TASKING_ERROR", 13));
f_predef_exc_1272(F->up, rt_g_lit("UNDERFLOW", 9));
f_predef_exc_1272(F->up, rt_g_lit("END_OF_FILE", 11));
F->y_3135 = f_new_sym_469(F->up, ((rt_int)8LL), f_mk_227(F->up, rt_g_lit("TEXT_IO", 7)));
f_define_464(F->up, F->y_3135, ((rt_int)0LL));
(*(P117)rt_nil_check(F->y_3135)).depth_ = ((rt_int)1LL);
ret_:

  return;
}

static void f_translate_1279(struct f_greenc_1fr *up_, P174 u_1278) {
  struct f_translate_1279fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->u_1278 = u_1278;
F->p_3153 = NULL;
F->p_3153 = F->u_1278;
F->y_3154 = NULL;
f_open_scope_465(F->up);
while ((F->p_3153 != NULL)) {
F->up->barriers_200 = NULL;
F->y_3154 = f_lookup_423(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3153)).name_)));
if ((((((G_NV((*(P174)rt_nil_check(F->p_3153)).kind_) == ((rt_int)49LL)) || (G_NV((*(P174)rt_nil_check(F->p_3153)).kind_) == ((rt_int)51LL))) || (G_NV((*(P174)rt_nil_check(F->p_3153)).kind_) == ((rt_int)44LL))) || (G_NV((*(P174)rt_nil_check(F->p_3153)).kind_) == ((rt_int)45LL))) && (F->y_3154 != NULL))) {
if ((((*(P117)rt_nil_check(F->y_3154)).decl_ != NULL) && ((*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_3154)).decl_)).formal_ != NULL))) {
(*(P174)rt_nil_check(F->p_3153)).formal_ = f_mk_227(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3153)).formal_)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_3154)).decl_)).formal_))));
}
}
f_push_barrier_670(F->up, F->p_3153, ((rt_int)1LL));
if (((*(P174)rt_nil_check(F->p_3153)).next_ == NULL)) {
if (((G_NV((*(P174)rt_nil_check(F->p_3153)).kind_) != ((rt_int)44LL)) || ((*(P174)rt_nil_check(F->p_3153)).a_ != NULL))) {
f_fail_248(F->up, G_NV((*(P174)rt_nil_check(F->p_3153)).line_), rt_g_lit("the main program is a procedure without parameters", 50));
}
f_build_subprogram_650(F->up, F->p_3153, &F->y_3154);
f_define_464(F->up, F->y_3154, G_NV((*(P174)rt_nil_check(F->p_3153)).line_));
f_subprogram_body_692(F->up, F->p_3153, F->y_3154);
F->up->main_name_221 = (*(P117)rt_nil_check(F->y_3154)).cname_;
} else {
f_decl_element_654(F->up, F->p_3153);
}
F->p_3153 = (*(P174)rt_nil_check(F->p_3153)).next_;
}
L_end_3155: ;
ret_:

  return;
}

static void f_print_program_1280(struct f_greenc_1fr *up_) {
  struct f_print_program_1280fr *F = rt_alloc(sizeof *F);
F->up = up_;
f_emit_helpers_632(F->up);
rt_g_put(rt_g_g2s(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("#include ", 9), f_q_245(F->up)), rt_g_lit("paleo.h", 7)), f_q_245(F->up))));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
rt_g_put(rt_g_g2s(rt_g_lit("#include <math.h>", 17)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
f_print_buffer_256(F->up, F->up->out_types_128);
f_print_buffer_256(F->up, F->up->out_frames_129);
f_print_buffer_256(F->up, F->up->out_helpers_130);
f_print_buffer_256(F->up, F->up->out_protos_131);
f_print_buffer_256(F->up, F->up->out_globals_132);
f_print_buffer_256(F->up, F->up->out_funcs_133);
rt_g_put(rt_g_g2s(rt_g_lit("int main(int argc, char **argv) {", 33)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
rt_g_put(rt_g_g2s(rt_g_lit("  rt_init(argc, argv);", 22)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
rt_g_put(rt_g_g2s(rt_g_lit("  rt_set_lang(1);", 17)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
f_print_buffer_256(F->up, F->up->out_excs_135);
f_print_buffer_256(F->up, F->up->out_init_134);
rt_g_put(rt_g_g2s(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check(F->up->main_name_221))), rt_g_lit("();", 3))));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
f_print_buffer_256(F->up, F->up->out_awaits_209);
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
F->pkg_stack_212 = NULL;
F->cur_pkg_213 = NULL;
F->prefix_hint_214 = NULL;
F->call_want_215 = NULL;
F->pure_sym_216 = NULL;
F->pure_depth_217 = INT64_MIN;
F->pure_depth_217 = ((rt_int)0LL);
F->vrp_ok_218 = INT_MIN;
F->vrp_ok_218 = 0;
F->in_lv_path_219 = INT_MIN;
F->in_lv_path_219 = 0;
F->last_deref_220 = INT_MIN;
F->last_deref_220 = 0;
F->main_name_221 = NULL;
F->conf_system_222 = NULL;
F->conf_storage_unit_223 = INT64_MIN;
F->conf_storage_unit_223 = ((rt_int)8LL);
F->conf_memory_size_224 = INT64_MIN;
F->conf_memory_size_224 = ((rt_int)1048576LL);
F->conf_optimize_225 = NULL;
F->env_names_197 = f_mk_227(F, rt_g_lit("", 0));
F->out_types_128 = f_new_buffer_249(F);
F->out_frames_129 = f_new_buffer_249(F);
F->out_helpers_130 = f_new_buffer_249(F);
F->out_protos_131 = f_new_buffer_249(F);
F->out_globals_132 = f_new_buffer_249(F);
F->out_funcs_133 = f_new_buffer_249(F);
F->out_init_134 = f_new_buffer_249(F);
F->out_excs_135 = f_new_buffer_249(F);
F->code_136 = F->out_init_134;
F->no_cons_210 = f_new_cons_472(F);
F->ty_int_156 = f_new_typ_471(F, ((rt_int)1LL));
F->ty_bool_157 = f_new_typ_471(F, ((rt_int)2LL));
F->ty_float_158 = f_new_typ_471(F, ((rt_int)3LL));
F->ty_char_159 = f_new_typ_471(F, ((rt_int)11LL));
F->ty_string_160 = f_new_typ_471(F, ((rt_int)6LL));
(*(P122)rt_nil_check(F->ty_string_160)).name_ = f_mk_227(F, rt_g_lit("STRING", 6));
(*(P122)rt_nil_check(F->ty_string_160)).cname_ = f_mk_227(F, rt_g_lit("rt_gstr", 7));
(*(P122)rt_nil_check(F->ty_string_160)).dims_ = ((rt_int)1LL);
(*(P122)rt_nil_check(F->ty_string_160)).elem_ = F->ty_char_159;
(*(P122)rt_nil_check(F->ty_string_160)).tcons_ = f_new_cons_472(F);
(*(P178)rt_nil_check((*(P122)rt_nil_check(F->ty_string_160)).tcons_)).lo_ = f_mk_227(F, rt_g_lit("1", 1));
F->ty_void_161 = f_new_typ_471(F, ((rt_int)9LL));
F->ty_nil_162 = f_new_typ_471(F, ((rt_int)10LL));
F->ty_act_164 = f_new_typ_471(F, ((rt_int)13LL));
F->ty_tdecl_165 = f_new_typ_471(F, ((rt_int)14LL));
F->ty_entry_166 = f_new_typ_471(F, ((rt_int)15LL));
(*(P122)rt_nil_check(F->ty_int_156)).name_ = f_mk_227(F, rt_g_lit("INTEGER", 7));
(*(P122)rt_nil_check(F->ty_string_160)).idx_ = F->ty_int_156;
(*(P122)rt_nil_check(F->ty_string_160)).next_ = F->all_types_124;
F->all_types_124 = F->ty_string_160;
(*(P122)rt_nil_check(F->ty_float_158)).name_ = f_mk_227(F, rt_g_lit("FLOAT", 5));
(*(P122)rt_nil_check(F->ty_float_158)).ndigits_ = ((rt_int)15LL);
F->ty_short_167 = f_new_typ_471(F, ((rt_int)1LL));
(*(P122)rt_nil_check(F->ty_short_167)).name_ = f_mk_227(F, rt_g_lit("SHORT_INTEGER", 13));
F->ty_long_168 = f_new_typ_471(F, ((rt_int)1LL));
(*(P122)rt_nil_check(F->ty_long_168)).name_ = f_mk_227(F, rt_g_lit("LONG_INTEGER", 12));
F->ty_sfloat_169 = f_new_typ_471(F, ((rt_int)3LL));
(*(P122)rt_nil_check(F->ty_sfloat_169)).name_ = f_mk_227(F, rt_g_lit("SHORT_FLOAT", 11));
(*(P122)rt_nil_check(F->ty_sfloat_169)).ndigits_ = ((rt_int)6LL);
F->ty_lfloat_170 = f_new_typ_471(F, ((rt_int)3LL));
(*(P122)rt_nil_check(F->ty_lfloat_170)).name_ = f_mk_227(F, rt_g_lit("LONG_FLOAT", 10));
(*(P122)rt_nil_check(F->ty_lfloat_170)).ndigits_ = ((rt_int)15LL);
F->ty_time_171 = f_new_typ_471(F, ((rt_int)3LL));
(*(P122)rt_nil_check(F->ty_time_171)).name_ = f_mk_227(F, rt_g_lit("TIME", 4));
(*(P122)rt_nil_check(F->ty_time_171)).ndigits_ = ((rt_int)15LL);
F->ty_ufixed_172 = f_new_typ_471(F, ((rt_int)16LL));
(*(P122)rt_nil_check(F->ty_ufixed_172)).name_ = f_mk_227(F, rt_g_lit("universal fixed", 15));
F->out_awaits_209 = f_new_buffer_249(F);
f_predefine_1277(F);
f_read_source_298(F);
f_compilation_414(F, &F->units_211);
if ((F->units_211 == NULL)) {
f_fail_248(F, ((rt_int)1LL), rt_g_lit("the compilation is empty", 24));
}
f_translate_1279(F, F->units_211);
f_print_program_1280(F);
ret_:

  return;
}

static void as_A2572(A2572 *d, A2572 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2572 cp_A2572(A2572 s) {
  A2572 d = s; d.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2572(A2572 a, A2572 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2572 cat_A2572(A2572 a, A2572 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2572 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2572 one_A2572(rt_int e) {
  A2572 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int)); r.p[0] = e;
  return r;
}
static void as_A2569(A2569 *d, A2569 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2569 cp_A2569(A2569 s) {
  A2569 d = s; d.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2569(A2569 a, A2569 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2569 cat_A2569(A2569 a, A2569 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2569 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2569 one_A2569(rt_int e) {
  A2569 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int)); r.p[0] = e;
  return r;
}
static void as_A2564(A2564 *d, A2564 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2564 cp_A2564(A2564 s) {
  A2564 d = s; d.p = rt_alloc(sizeof(int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2564(A2564 a, A2564 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2564 and_A2564(A2564 a, A2564 b) { A2564 r = cp_A2564(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, "array length"); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] && b.p[i]; return r; }
static A2564 or_A2564(A2564 a, A2564 b) { A2564 r = cp_A2564(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, "array length"); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] || b.p[i]; return r; }
static A2564 xor_A2564(A2564 a, A2564 b) { A2564 r = cp_A2564(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, "array length"); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] != b.p[i]; return r; }
static A2564 not_A2564(A2564 a) { A2564 r = cp_A2564(a); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = !a.p[i]; return r; }
static A2564 cat_A2564(A2564 a, A2564 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2564 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2564 one_A2564(int e) {
  A2564 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(int)); r.p[0] = e;
  return r;
}
static void as_A2239(A2239 *d, A2239 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2239 cp_A2239(A2239 s) {
  A2239 d = s; d.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2239(A2239 a, A2239 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2239 cat_A2239(A2239 a, A2239 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2239 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2239 one_A2239(rt_int e) {
  A2239 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int)); r.p[0] = e;
  return r;
}
static void as_R1956(R1956 *d, R1956 s) {
  d->disc_ = s.disc_;
  d->arm_ = s.arm_;
  d->variant_ = s.variant_;
  d->next_ = s.next_;
}
static R1956 cp_R1956(R1956 s) {
  R1956 d = s;
  d.disc_ = s.disc_;
  d.arm_ = s.arm_;
  d.variant_ = s.variant_;
  d.next_ = s.next_;
  return d;
}
static int eq_R1956(R1956 a, R1956 b) {
  return 1 && (a.disc_ == b.disc_) && (a.arm_ == b.arm_) && (a.variant_ == b.variant_) && (a.next_ == b.next_);
}
static void as_R1835(R1835 *d, R1835 s) {
  d->name_ = s.name_;
  d->v_ = s.v_;
  d->next_ = s.next_;
}
static R1835 cp_R1835(R1835 s) {
  R1835 d = s;
  d.name_ = s.name_;
  d.v_ = s.v_;
  d.next_ = s.next_;
  return d;
}
static int eq_R1835(R1835 a, R1835 b) {
  return 1 && (a.name_ == b.name_) && (a.v_ == b.v_) && (a.next_ == b.next_);
}
static void as_R1831(R1831 *d, R1831 s) {
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
static R1831 cp_R1831(R1831 s) {
  R1831 d = s;
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
static int eq_R1831(R1831 a, R1831 b) {
  return 1 && (a.name_ == b.name_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.next_ == b.next_) && (a.dflt_ == b.dflt_) && (a.is_const_ == b.is_const_) && (a.is_discr_ == b.is_discr_) && (a.dsym_ == b.dsym_) && (a.guard_ == b.guard_) && (a.cond_ == b.cond_) && (a.dyn_ == b.dyn_);
}
static void as_R1813(R1813 *d, R1813 s) {
  d->name_ = s.name_;
  d->mode_ = s.mode_;
  d->t_ = s.t_;
  d->c_ = s.c_;
  d->cfield_ = s.cfield_;
  d->dflt_ = s.dflt_;
  d->next_ = s.next_;
  d->dsym_ = s.dsym_;
}
static R1813 cp_R1813(R1813 s) {
  R1813 d = s;
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
static int eq_R1813(R1813 a, R1813 b) {
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
