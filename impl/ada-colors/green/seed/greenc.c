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
typedef struct R1753 R1753;
typedef struct R1753 *P1752;
struct R117 { int dummy_; rt_int kind_; P139 name_; P121 t_; P177 c_; P139 access_path_; P139 cname_; int ro_; rt_int mvalue_; int hasmv_; P173 decl_; P1752 params_; P121 result_; rt_int depth_; rt_int level_; int byref_; int vrp_; int hidden_; int from_use_; P116 members_; P116 mnext_; P116 chain_; P116 stack_; rt_int flags_; };
typedef struct R1768 R1768;
typedef struct R1768 *P1767;
struct R122 { int dummy_; rt_int kind_; P139 name_; P173 lits_; P121 elem_; P121 idx_; P177 elemcons_; P177 tcons_; P1767 fields_; P121 target_; P173 decl_; P139 cname_; int forward_; int defined_; int priv_; P121 next_; P121 idx2_; P139 littab_; P121 parent_; rt_int ndigits_; P139 fdelta_; P139 fsmall_; rt_int dims_; int is_restricted_; };
typedef struct R1772 R1772;
typedef struct R1772 *P1771;
struct R178 { int dummy_; P139 lo_; P139 hi_; P139 slen_; rt_int mlo_; rt_int mhi_; int hasm_; P139 lo2_; P139 hi2_; P139 acc_; P177 inner_; P1771 dv_; };
struct R1772 { int dummy_; P139 name_; P139 v_; P1771 next_; };
struct R1753 { int dummy_; P139 name_; rt_int mode_; P121 t_; P177 c_; P139 cfield_; P173 dflt_; P1752 next_; };
typedef struct R1893 R1893;
typedef struct R1893 *P1892;
struct R1893 { int dummy_; P139 disc_; P173 arm_; P173 variant_; P1892 next_; };
struct R1768 { int dummy_; P139 name_; P121 t_; P177 c_; P1767 next_; P173 dflt_; int is_const_; int is_discr_; P116 dsym_; P1892 guard_; P139 cond_; int dyn_; };
struct R189 { int dummy_; P139 name_; P139 cname_; P139 path_; rt_int frames_; rt_int line_; P188 next_; };
typedef struct A2140 A2140;
struct A2140 { rt_int lo, hi, lo2, hi2; rt_int *p; };
struct R143 { int dummy_; P139 match_; P139 label_; rt_int depth_; int is_loop_; P142 next_; };
typedef struct A2463 A2463;
struct A2463 { rt_int lo, hi, lo2, hi2; int *p; };
typedef struct A2468 A2468;
struct A2468 { rt_int lo, hi, lo2, hi2; rt_int *p; };
typedef struct A2471 A2471;
struct A2471 { rt_int lo, hi, lo2, hi2; rt_int *p; };
struct R146 { int dummy_; P173 body_node_; P116 visible_; P145 next_; };
struct f_mk_221fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_220;
 P139 result_;
 rt_gstr r_1242;
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
 rt_gstr r_1246;
 rt_int i_1249;
};
struct f_upper_s_234fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_233;
 rt_gstr result_;
 rt_gstr r_1257;
 rt_int i_1260;
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
 P150 l_1269;
};
struct f_emit_248fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_247;
};
struct f_print_buffer_250fr { int dummy;
 struct f_greenc_1fr *up;
 P125 b_249;
 P150 l_1272;
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
 rt_int d_1280;
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
 rt_int i_1281;
 rt_int j_1282;
 rt_int n_1283;
 int c_1285;
 int quote_1286;
 rt_int v_1287;
 rt_int d_1288;
 rt_gstr buf_1289;
 rt_int bl_1291;
 rt_int base_1333;
 rt_gstr two_1377;
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
 rt_int n_1424;
};
struct f_include_text_287fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int n_286;
 rt_gstr t_1435;
 rt_int saved_line_1437;
 rt_int from_1438;
 rt_int k_1440;
 rt_int k_1447;
};
struct f_include_line_291fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr t_288;
 rt_int from_289;
 rt_int to_290;
 rt_gstr l_1452;
 rt_int k_1455;
};
struct f_read_source_292fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr buf_1461;
 rt_int bl_1463;
 int c_1464;
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
 rt_int n_1476;
 P173 p_1477;
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
 P173 x_1492;
};
struct f_id_list_325fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_324;
 P173 head_1493;
 P173 tail_1494;
 P173 x_1495;
};
struct f_binop_330fr { int dummy;
 struct f_greenc_1fr *up;
 P139 op_326;
 P173 l_327;
 P173 r_328;
 rt_int line_329;
 P173 result_;
 P173 x_1497;
};
struct f_expr_332fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_331;
 P173 l_1498;
 P173 r_1499;
 P139 op_1500;
 P139 first_op_1501;
 rt_int line_1502;
 int short_1503;
 int first_short_1504;
};
struct f_is_rel_334fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_333;
 int result_;
};
struct f_relation_336fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_335;
 P173 l_1507;
 P173 r_1508;
 P173 lo_1509;
 P173 hi_1510;
 P173 t_1511;
 P139 op_1512;
 rt_int line_1513;
 int neg_1514;
};
struct f_path_of_338fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_337;
 rt_gstr result_;
};
struct f_simple_expr_340fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_339;
 P173 l_1518;
 P173 r_1519;
 P139 op_1520;
 rt_int line_1521;
};
struct f_term_342fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_341;
 P173 l_1525;
 P173 r_1526;
 P139 op_1527;
 rt_int line_1528;
};
struct f_factor_344fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_343;
 P173 l_1531;
 P173 r_1532;
 P139 op_1533;
 rt_int line_1534;
};
struct f_primary_346fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_345;
 P173 x_1536;
 rt_int line_1537;
};
struct f_agg_or_paren_348fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_347;
 rt_int line_1542;
 P173 items_1543;
 P173 itail_1544;
 P173 it_1545;
 P173 first_1546;
 P173 keys_1547;
 P173 ktail_1548;
 P173 lab_1549;
 P173 x_1550;
 int more_1551;
};
struct f_choice_token_350fr { int dummy;
 struct f_greenc_1fr *up;
 P109 t_349;
 int result_;
};
struct f_aggregate_ahead_351fr { int dummy;
 struct f_greenc_1fr *up;
 int result_;
 rt_int d_1554;
 rt_int k_1555;
 P109 t_1558;
};
struct f_name_p_353fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_352;
 P173 p_1560;
 P173 x_1561;
 P173 args_1562;
 P173 atail_1563;
 P173 lo_1564;
 P173 r_1565;
 rt_int line_1566;
 int more_1567;
 P139 formal_1571;
 rt_int mark_1572;
};
struct f_component_list_355fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_354;
 P173 comps_1575;
 P173 ctail_1576;
 P173 names_1577;
 P173 st_1578;
 P173 def_1579;
 P173 cm_1580;
 P173 v_1581;
 P173 arm_1582;
 P173 atail_1583;
 P173 labs_1584;
 P173 ltail_1585;
 P173 l_1586;
 int is_c_1587;
};
struct f_discrete_range_p_357fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_356;
 P173 lo_1592;
 P173 r_1593;
 rt_int line_1594;
};
struct f_subtype_ind_359fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_358;
 P139 f_1595;
 P173 x_1596;
 P173 r_1597;
 P173 args_1598;
 P173 atail_1599;
 P173 lo_1600;
 rt_int line_1601;
 int more_1602;
};
struct f_type_spec_361fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_360;
 P173 x_1605;
};
struct f_type_def_363fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_362;
 P173 x_1606;
 P173 lits_1607;
 P173 ltail_1608;
 P173 l_1609;
 P173 idx_1610;
 P173 itail_1611;
 P173 r_1612;
 P173 comps_1613;
 P173 ctail_1614;
 P173 names_1615;
 P173 st_1616;
 P173 def_1617;
 P173 cm_1618;
 rt_int line_1619;
 int more_1620;
};
struct f_pragma_p_365fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_364;
 P173 x_1624;
 P173 a_1625;
 P173 head_1626;
 P173 tail_1627;
};
struct f_check_pragma_367fr { int dummy;
 struct f_greenc_1fr *up;
 P173 x_366;
 rt_gstr p_1629;
 rt_int n_1630;
 P173 a_1631;
};
struct f_skip_visibility_368fr { int dummy;
 struct f_greenc_1fr *up;
 P173 names_1633;
};
struct f_skip_representation_369fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_decl_part_371fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_370;
 P173 head_1637;
 P173 tail_1638;
 P173 x_1639;
 P173 names_1640;
};
struct f_object_decl_373fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_372;
 P173 head_1642;
 P173 tail_1643;
 P173 names_1644;
 P173 st_1645;
 P173 init_1646;
 P173 x_1647;
 rt_int line_1648;
 int is_const_1649;
};
struct f_type_decl_375fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_374;
 P173 x_1652;
 rt_int line_1653;
};
struct f_formal_part_377fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_376;
 P173 head_1654;
 P173 tail_1655;
 P173 names_1656;
 P173 st_1657;
 P173 def_1658;
 P173 p_1659;
 rt_int mode_1660;
 int more_1661;
};
struct f_designator_379fr { int dummy;
 struct f_greenc_1fr *up;
 P139 *res_378;
};
struct f_subprogram_381fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_380;
 P173 x_1668;
 rt_int line_1669;
 int is_proc_1670;
};
struct f_body_part_383fr { int dummy;
 struct f_greenc_1fr *up;
 P173 x_382;
};
struct f_parse_handlers_385fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_384;
 P173 head_1672;
 P173 tail_1673;
 P173 h_1674;
 P173 names_1675;
 P173 ntail_1676;
 P173 n_1677;
};
struct f_package_p_387fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_386;
 P173 x_1681;
 rt_int line_1682;
};
struct f_at_statements_end_388fr { int dummy;
 struct f_greenc_1fr *up;
 int result_;
};
struct f_statements_390fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_389;
 P173 head_1683;
 P173 tail_1684;
 P173 x_1685;
};
struct f_statement_392fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_391;
 P173 l_1687;
 P173 x_1688;
 P139 label_1689;
};
struct f_labelled_statement_395fr { int dummy;
 struct f_greenc_1fr *up;
 P139 label_393;
 P173 *res_394;
 P173 x_1690;
 P173 t_1691;
 rt_int line_1692;
};
struct f_task_statement_397fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_396;
};
struct f_if_stmt_399fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_398;
 P173 x_1696;
 P173 arm_1697;
 P173 head_1698;
 P173 tail_1699;
 int go_1700;
};
struct f_case_stmt_401fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_400;
 P173 x_1702;
 P173 arm_1703;
 P173 head_1704;
 P173 tail_1705;
 P173 labs_1706;
 P173 ltail_1707;
 P173 l_1708;
 int others_arm_1709;
};
struct f_loop_stmt_403fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_402;
 P173 x_1712;
 P173 r_1713;
 rt_int line_1714;
};
struct f_compilation_405fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_404;
 P173 head_1715;
 P173 tail_1716;
 P173 x_1717;
};
struct f_hash_407fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_406;
 rt_int result_;
 rt_int h_1719;
 rt_int i_1722;
};
struct f_lookup_409fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_408;
 P116 result_;
 P116 y_1727;
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
 P116 y_1730;
};
struct f_lookup_at_418fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_416;
 rt_int d_417;
 P116 result_;
 P116 y_1733;
};
struct f_enclosing_depth_420fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_419;
 rt_int result_;
 rt_int i_1737;
};
struct f_push_unit_422fr { int dummy;
 struct f_greenc_1fr *up;
 P139 name_421;
};
struct f_lookup_decl_424fr { int dummy;
 struct f_greenc_1fr *up;
 P173 d_423;
 P116 result_;
 P116 y_1745;
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
 P121 r_1748;
};
struct f_derived_from_434fr { int dummy;
 struct f_greenc_1fr *up;
 P121 a_432;
 P121 b_433;
 int result_;
 P121 r_1750;
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
struct f_same_signature_441fr { int dummy;
 struct f_greenc_1fr *up;
 P1752 a_439;
 P1752 b_440;
 int result_;
 P1752 x_1754;
 P1752 y_1755;
};
struct f_distinct_overload_444fr { int dummy;
 struct f_greenc_1fr *up;
 P116 y_442;
 P116 z_443;
 int result_;
};
struct f_define_447fr { int dummy;
 struct f_greenc_1fr *up;
 P116 y_445;
 rt_int line_446;
 rt_int h_1757;
 P116 z_1758;
};
struct f_open_scope_448fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_close_scope_449fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_new_sym_452fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_450;
 P139 name_451;
 P116 result_;
};
struct f_new_typ_454fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_453;
 P121 result_;
};
struct f_new_cons_455fr { int dummy;
 struct f_greenc_1fr *up;
 P177 result_;
};
struct f_bounded_457fr { int dummy;
 struct f_greenc_1fr *up;
 P177 c_456;
 int result_;
};
struct f_bounded_hi_459fr { int dummy;
 struct f_greenc_1fr *up;
 P177 c_458;
 int result_;
};
struct f_static_bounds_461fr { int dummy;
 struct f_greenc_1fr *up;
 P177 c_460;
 int result_;
};
struct f_discriminated_463fr { int dummy;
 struct f_greenc_1fr *up;
 P177 c_462;
 int result_;
};
struct f_kind_name_465fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_464;
 rt_gstr result_;
};
struct f_check_type_469fr { int dummy;
 struct f_greenc_1fr *up;
 P121 got_466;
 P121 want_467;
 rt_int line_468;
};
struct f_field_count_471fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_470;
 rt_int result_;
 rt_int n_1776;
 P1767 f_1777;
};
struct f_ctype_474fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_472;
 P139 *r_473;
 P139 s_1779;
};
struct f_field_decls_477fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_475;
 P139 *r_476;
 P1767 f_1781;
 P139 s_1782;
 P139 ct_1783;
};
struct f_declare_ctype_479fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_478;
 P139 ct_1785;
 P139 s_1786;
 P121 target_1787;
};
struct f_lit_index_482fr { int dummy;
 struct f_greenc_1fr *up;
 P173 lits_480;
 rt_gstr name_481;
 rt_int result_;
 rt_int i_1788;
 P173 l_1789;
};
struct f_manifest_486fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_483;
 rt_int *v_484;
 int *ok_485;
 rt_int a_1791;
 rt_int b_1792;
 int ok2_1793;
 P116 y_1794;
};
struct f_resolve_490fr { int dummy;
 struct f_greenc_1fr *up;
 P173 st_487;
 P121 *t_488;
 P177 *c_489;
 P116 y_1795;
 P121 dummy_1796;
 P139 code_1797;
 int ok_1798;
 P173 r_1799;
};
struct f_constraint_list_494fr { int dummy;
 struct f_greenc_1fr *up;
 P173 st_491;
 P121 t_492;
 P177 c_493;
 P173 r_1800;
 P121 arrt_1801;
 P177 cc_1802;
 P121 it_1803;
};
struct f_discriminant_constraint_498fr { int dummy;
 struct f_greenc_1fr *up;
 P173 st_495;
 P121 t_496;
 P177 c_497;
 P173 a_1805;
 P1767 f_1806;
 P121 vt_1807;
 P139 v_1808;
 P1771 d_1809;
 P1771 tail_1810;
};
struct f_discrete_bounds_504fr { int dummy;
 struct f_greenc_1fr *up;
 P173 r_499;
 P121 want_500;
 P121 *t_501;
 P139 *lo_502;
 P139 *hi_503;
 P177 c_1818;
 P116 y_1819;
};
struct f_range_of_508fr { int dummy;
 struct f_greenc_1fr *up;
 P173 r_505;
 P121 t_506;
 P177 c_507;
 P121 dummy_1820;
 int ok_1821;
};
struct f_fresh_typ_512fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_509;
 P139 name_510;
 P121 *t_511;
 P121 ph_1822;
};
struct f_inherit_516fr { int dummy;
 struct f_greenc_1fr *up;
 P121 parent_513;
 P121 t_514;
 rt_int line_515;
 P116 s_1823;
 P116 z_1824;
 P1752 p_1825;
 P1752 q_1826;
 P1752 tail_1827;
 int uses_1828;
 P116 news_1829;
};
struct f_derive_literals_519fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_517;
 rt_int line_518;
 P173 l_1836;
 rt_int n_1837;
 P116 y_1838;
};
struct f_type_definition_524fr { int dummy;
 struct f_greenc_1fr *up;
 P173 d_520;
 P139 name_521;
 P121 *t_522;
 P177 *c_523;
 P121 dummy_1840;
 P121 it_1841;
 P177 ic_1842;
 P173 l_1843;
 P173 comp_1844;
 P1767 f_1845;
 P1767 tail_1846;
 int ok_1847;
 rt_int n_1848;
 P116 y_1849;
};
struct f_array_type_531fr { int dummy;
 struct f_greenc_1fr *up;
 P173 idx_525;
 P173 comp_526;
 P139 name_527;
 rt_int line_528;
 P121 *t_529;
 P177 *c_530;
 P173 l_1853;
 P177 rowc_1854;
 P177 ic_1855;
 P121 it_1856;
};
struct f_static_range_535fr { int dummy;
 struct f_greenc_1fr *up;
 P173 l_532;
 P173 h_533;
 P177 c_534;
 int ok_1857;
 int ok2_1858;
};
struct f_component_place_541fr { int dummy;
 struct f_greenc_1fr *up;
 P121 rt_536;
 P1767 f_537;
 rt_gstr a_538;
 rt_gstr ct_539;
 P139 *r_540;
 P139 bits_1861;
};
struct f_no_value_543fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_542;
 rt_gstr result_;
};
struct f_elem_ctype_546fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_544;
 P139 *r_545;
};
struct f_first_index_549fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_547;
 P139 *r_548;
};
struct f_is_string_551fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_550;
 int result_;
};
struct f_subst_554fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_552;
 rt_gstr r_553;
 rt_gstr result_;
 rt_int i_1865;
};
struct f_mentions_record_556fr { int dummy;
 struct f_greenc_1fr *up;
 P139 s_555;
 int result_;
 rt_int i_1879;
};
struct f_subst_cons_560fr { int dummy;
 struct f_greenc_1fr *up;
 P177 c_557;
 rt_gstr r_558;
 P177 *res_559;
};
struct f_remove_sym_562fr { int dummy;
 struct f_greenc_1fr *up;
 P116 y_561;
 rt_int h_1885;
 P116 p_1886;
};
struct f_record_components_567fr { int dummy;
 struct f_greenc_1fr *up;
 P173 list_563;
 P121 t_564;
 P1892 g_565;
 rt_int line_566;
 P173 comp_1894;
 P1767 f_1895;
 P1767 tail_1896;
 P1767 df_1897;
 P173 prev_1898;
 P121 pt_1899;
 P121 vt_1900;
 P177 pc_1901;
 P116 y_1902;
 P139 acc_1903;
 P139 v_1904;
 P139 x_1905;
 P173 arm_1906;
 P1892 g2_1907;
};
struct f_guard_cond_571fr { int dummy;
 struct f_greenc_1fr *up;
 P1892 g_568;
 P121 t_569;
 P139 *r_570;
 P173 a_1917;
 P173 l_1918;
 P1767 df_1919;
 P139 x_1920;
 P139 d_1921;
 P121 dt_1922;
 P121 vt_1923;
 P139 lo_1924;
 P139 hi_1925;
};
struct f_arm_test_576fr { int dummy;
 struct f_greenc_1fr *up;
 P173 arm_572;
 P139 dname_573;
 rt_gstr d_574;
 P139 *x_575;
 P173 l_1927;
 P116 y_1928;
 P121 dt_1929;
 P121 vt_1930;
 P139 lo_1931;
 P139 hi_1932;
};
struct f_derived_type_581fr { int dummy;
 struct f_greenc_1fr *up;
 P173 d_577;
 P139 name_578;
 P121 *t_579;
 P177 *c_580;
 P121 pt_1934;
 P139 ct_1935;
 P121 ph_1936;
};
struct f_real_type_586fr { int dummy;
 struct f_greenc_1fr *up;
 P173 d_582;
 P139 name_583;
 P121 *t_584;
 P177 *c_585;
 P121 dt_1937;
 P139 dv_1938;
 rt_int n_1939;
 int ok_1940;
};
struct f_finish_ptr_588fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_587;
 P177 c_1941;
};
struct f_init_storage_592fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lval_589;
 P121 t_590;
 P177 c_591;
 P177 ec_1942;
 P177 fc_1943;
 P1771 d_1944;
 P139 ct_1945;
 P139 i_1946;
 P139 v_1947;
 P139 x_1948;
 P121 vt_1949;
 P1767 f_1950;
};
struct f_composite_594fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_593;
 int result_;
};
struct f_assign_code_600fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lval_595;
 P121 t_596;
 rt_gstr v_597;
 P177 c_598;
 P139 *r_599;
 P139 ct_1954;
 P139 x_1955;
 P1771 d_1956;
};
struct f_copy_code_604fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_601;
 rt_gstr v_602;
 P139 *r_603;
 P139 ct_1958;
};
struct f_eq_code_609fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_605;
 rt_gstr a_606;
 rt_gstr b_607;
 P139 *r_608;
 P139 ct_1959;
};
struct f_seen_name_612fr { int dummy;
 struct f_greenc_1fr *up;
 P150 l_610;
 rt_gstr s_611;
 int result_;
 P150 p_1960;
};
struct f_emit_helpers_613fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_1962;
 P139 et_1963;
 P150 done_1964;
 P150 l_1965;
};
struct f_helper_bodies_615fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_614;
 P139 c_1969;
 P125 b_1970;
 P139 ct_1971;
 P139 et_1972;
 P139 x_1973;
 P139 y_1974;
 P139 conds_1975;
 P1767 f_1976;
};
struct f_storage_619fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_616;
 P121 t_617;
 P139 *access_code_618;
 P139 ct_1979;
 P139 g_1980;
};
struct f_bind_622fr { int dummy;
 struct f_greenc_1fr *up;
 P116 y_620;
 P139 access_code_621;
};
struct f_declare_subprograms_624fr { int dummy;
 struct f_greenc_1fr *up;
 P173 from_623;
 P173 e_1981;
};
struct f_declare_one_626fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_625;
 P116 y_1983;
 P116 z_1984;
};
struct f_build_subprogram_629fr { int dummy;
 struct f_greenc_1fr *up;
 P173 d_627;
 P116 *y_628;
 P173 p_1988;
 P1752 pm_1989;
 P1752 tail_1990;
 P177 rc_1991;
 rt_int k_1992;
};
struct f_decl_elements_631fr { int dummy;
 struct f_greenc_1fr *up;
 P173 decls_630;
 P173 e_1996;
 int declared_1997;
};
struct f_decl_element_633fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_632;
 P173 pd_1999;
 P116 y_2000;
 P116 z_2001;
 P121 t_2002;
 P121 vt_2003;
 P177 c_2004;
 P139 acc_2005;
 P139 v_2006;
 P139 x_2007;
 int ok_2008;
};
struct f_pragma_decl_635fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_634;
};
struct f_resolve_object_type_639fr { int dummy;
 struct f_greenc_1fr *up;
 P173 st_636;
 P121 *t_637;
 P177 *c_638;
};
struct f_other_decl_641fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_640;
};
struct f_scan_labels_644fr { int dummy;
 struct f_greenc_1fr *up;
 P173 stmts_642;
 rt_gstr path_643;
 P173 s_2010;
 P173 a_2011;
 P188 l_2012;
 P139 c_2013;
};
struct f_scan_guarded_648fr { int dummy;
 struct f_greenc_1fr *up;
 P173 stmts_645;
 P173 hs_646;
 rt_gstr path_647;
 P173 h_2023;
};
struct f_count_g_650fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_649;
 rt_int result_;
 rt_int n_2025;
 rt_int i_2029;
};
struct f_label_body_653fr { int dummy;
 struct f_greenc_1fr *up;
 P173 stmts_651;
 P173 hs_652;
 P188 l_2034;
 P188 g_2035;
 P139 gp_2036;
 P139 lp_2037;
 rt_int i_2048;
};
struct f_gen_label_656fr { int dummy;
 struct f_greenc_1fr *up;
 P173 s_654;
 int goto_it_655;
 P188 l_2054;
};
struct f_is_foreign_658fr { int dummy;
 struct f_greenc_1fr *up;
 P173 d_657;
 int result_;
};
struct f_subprogram_body_661fr { int dummy;
 struct f_greenc_1fr *up;
 P173 d_659;
 P116 y_660;
 P125 saved_code_2056;
 P125 saved_fields_2057;
 int saved_in_2058;
 P116 saved_sym_2059;
 P142 saved_exits_2060;
 rt_int saved_frames_2061;
 P150 saved_handlers_2062;
 P150 saved_cleanups_2063;
 P188 saved_labels_2064;
 P142 saved_hx_2065;
 rt_int saved_hd_2066;
 P116 saved_pure_2067;
 P139 aw_2068;
 rt_int saved_pdepth_2069;
 P139 args_2070;
 P139 head_2071;
 P139 frame_2072;
 P139 parent_2073;
 P139 ct_2074;
 P139 x_2075;
 P1752 pm_2076;
 P116 p_2077;
};
struct f_gen_statements_663fr { int dummy;
 struct f_greenc_1fr *up;
 P173 stmts_662;
 P173 s_2083;
};
struct f_pop_frames_665fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int upto_664;
 rt_int i_2085;
 P150 c_2086;
};
struct f_push_cleanup_667fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_666;
};
struct f_pop_cleanup_668fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_guarded_672fr { int dummy;
 struct f_greenc_1fr *up;
 P173 stmts_669;
 P173 hs_670;
 rt_int line_671;
 P142 saved_hx_2090;
 P139 f_2091;
 P139 x_2092;
 P173 h_2093;
 P173 n_2094;
 int first_2095;
 int has_others_2096;
 P139 conds_2097;
};
struct f_exc_id_676fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_673;
 rt_int line_674;
 P139 *r_675;
 P116 y_2102;
};
struct f_gen_statement_678fr { int dummy;
 struct f_greenc_1fr *up;
 P173 s_677;
 P121 t_2103;
 P121 vt_2104;
 P177 c_2105;
 P139 lv_2106;
 P139 v_2107;
 P139 x_2108;
 int ro_2109;
};
struct f_slice_assign_680fr { int dummy;
 struct f_greenc_1fr *up;
 P173 s_679;
 P139 lv_2111;
 P139 v_2112;
 P139 sl_2113;
 P139 x_2114;
 P121 t_2115;
 P121 st_2116;
 P121 vt_2117;
 P177 c_2118;
 int ro_2119;
};
struct f_gen_call_682fr { int dummy;
 struct f_greenc_1fr *up;
 P173 s_681;
 P173 c_2120;
 P121 t_2121;
 P139 v_2122;
};
struct f_gen_if_684fr { int dummy;
 struct f_greenc_1fr *up;
 P173 s_683;
 P173 a_2123;
 int first_2124;
 P121 t_2125;
 P139 v_2126;
};
struct f_gen_case_686fr { int dummy;
 struct f_greenc_1fr *up;
 P173 s_685;
 P121 st_2128;
 P121 vt_2129;
 int first_2130;
 P173 a_2131;
 P173 lab_2132;
 P139 sel_2133;
 P139 tmp_2134;
 P139 ct_2135;
 P139 conds_2136;
 P139 v_2137;
 P139 lo_2138;
 P139 hi_2139;
 A2140 clo_2141;
 A2140 chi_2143;
 rt_int nc_2145;
 rt_int vlo_2146;
 rt_int vhi_2147;
 rt_int total_2148;
 int ok_2149;
 int ok2_2150;
 P116 y_2151;
 rt_int k_2155;
 rt_int k_2164;
};
struct f_selector_range_692fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_687;
 P121 t_688;
 rt_int *lo_689;
 rt_int *hi_690;
 int *ok_691;
 P116 y_2172;
};
struct f_push_exit_696fr { int dummy;
 struct f_greenc_1fr *up;
 P139 match_693;
 int is_loop_694;
 P139 *label_695;
};
struct f_gen_loop_698fr { int dummy;
 struct f_greenc_1fr *up;
 P173 s_697;
 P121 t_2175;
 P121 vt_2176;
 P177 c_2177;
 P139 label_2178;
 P139 cond_2179;
 P139 acc_2180;
 P139 lov_2181;
 P139 hiv_2182;
 P139 it_2183;
 P116 y_2184;
 P173 r_2185;
};
struct f_gen_block_700fr { int dummy;
 struct f_greenc_1fr *up;
 P173 s_699;
 P139 label_2186;
 P139 aw_2187;
};
struct f_exit_matches_703fr { int dummy;
 struct f_greenc_1fr *up;
 P173 s_701;
 P142 x_702;
 int result_;
};
struct f_gen_exit_705fr { int dummy;
 struct f_greenc_1fr *up;
 P173 s_704;
 P142 x_2188;
 P121 t_2189;
 P139 v_2190;
};
struct f_gen_return_707fr { int dummy;
 struct f_greenc_1fr *up;
 P173 s_706;
 P121 vt_2192;
 P139 v_2193;
};
struct f_access_of_710fr { int dummy;
 struct f_greenc_1fr *up;
 P116 y_708;
 P139 *r_709;
 P139 p_2194;
 rt_int i_2196;
};
struct f_link_to_713fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int l_711;
 P139 *r_712;
 rt_int i_2201;
};
struct f_c_ident_715fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_714;
 rt_gstr result_;
};
struct f_deref_719fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_716;
 P121 t_717;
 P139 *r_718;
 P139 ct_2205;
};
struct f_is_object_721fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_720;
 int result_;
 P116 y_2206;
};
struct f_is_const_access_723fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_722;
 int result_;
 P116 y_2207;
};
struct f_lvalue_729fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_724;
 P139 *code_out_725;
 P121 *t_726;
 P177 *c_727;
 int *ro_728;
 int cp_2208;
 P173 ex_2209;
 P116 y_2210;
 P139 base_2211;
 P121 bt_2212;
 P177 bc_2213;
};
struct f_select_on_738fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_730;
 P121 bt_731;
 P173 e_732;
 int *ro_733;
 int lv_734;
 P139 *code_out_735;
 P121 *t_736;
 P177 *c_737;
 P1767 f_2214;
 P139 d_2215;
 P139 ct_2216;
 P139 tmp_2217;
};
struct f_index_on_747fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_739;
 P121 bt_740;
 P173 e_741;
 int *ro_742;
 int lv_743;
 P139 *code_out_744;
 P121 *t_745;
 P177 *c_746;
 P173 a_2219;
 P121 arrt_2220;
 P139 acc_2221;
 P121 it_2222;
 P139 i_2223;
 P139 lo_2224;
 P139 hi_2225;
 P139 d_2226;
 P139 ct_2227;
 P139 tmp_2228;
};
struct f_type_attribute_750fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_748;
 rt_gstr name_749;
 int result_;
 P116 y_2230;
 P1752 p_2232;
};
struct f_is_type_name_752fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_751;
 int result_;
 P116 y_2235;
};
struct f_is_char_lit_754fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_753;
 int result_;
};
struct f_is_enum_lit_756fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_755;
 int result_;
 P116 y_2237;
};
struct f_c_string_758fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_757;
 rt_gstr result_;
 rt_int n_2238;
 rt_int i_2241;
 rt_gstr r_2250;
 rt_int j_2252;
 rt_int i_2256;
};
struct f_is_literal_760fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_759;
 int result_;
};
struct f_range_bounds_768fr { int dummy;
 struct f_greenc_1fr *up;
 P173 l_761;
 P173 h_762;
 P121 want_763;
 rt_int line_764;
 P121 *t_765;
 P139 *lo_766;
 P139 *hi_767;
 P121 w_2267;
 P121 t2_2268;
};
struct f_gexpr_773fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_769;
 P121 want_770;
 P121 *t_771;
 P139 *r_772;
 P116 y_2269;
 P121 bt_2270;
 P177 c_2271;
 int ro_2272;
 P139 base_2273;
 P139 a_2274;
 P173 nm_2275;
 int saved_lv_2276;
};
struct f_gexpr_1_778fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_774;
 P121 want_775;
 P121 *t_776;
 P139 *r_777;
 P116 y_2277;
 P121 bt_2278;
 P177 c_2279;
 int ro_2280;
 P139 base_2281;
 P139 a_2282;
 P173 nm_2283;
 P173 c2_2284;
};
struct f_string_aggregate_783fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_779;
 P121 want_780;
 P121 *t_781;
 P139 *r_782;
 P173 ag_2288;
 P173 it_2289;
 P173 tail_2290;
 P173 l_2291;
 rt_int k_2294;
};
struct f_char_literal_788fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_784;
 P121 want_785;
 P121 *t_786;
 P139 *r_787;
 rt_int i_2300;
};
struct f_expanded_791fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_789;
 P173 *r_790;
 P116 y_2303;
 rt_int d_2304;
};
struct f_gen_name_796fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_792;
 P121 want_793;
 P121 *t_794;
 P139 *r_795;
 P116 y_2305;
 P116 z_2306;
 P173 call_2307;
};
struct f_gen_unop_801fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_797;
 P121 want_798;
 P121 *t_799;
 P139 *r_800;
 P139 a_2309;
 P139 x_2310;
 int done_2311;
};
struct f_short_int_803fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_802;
 int result_;
};
struct f_float_kind_805fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_804;
 rt_gstr result_;
};
struct f_membership_808fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_806;
 P139 *r_807;
 P121 ta_2312;
 P121 tb_2313;
 P121 tt_2314;
 P139 a_2315;
 P139 lo_2316;
 P139 hi_2317;
 P139 ct_2318;
 P177 c_2319;
 P1771 d_2320;
};
struct f_condition_813fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_809;
 P121 want_810;
 P121 *t_811;
 P139 *r_812;
 P139 a_2322;
 P139 b_2323;
 P121 tb_2324;
};
struct f_catenation_818fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_814;
 P121 want_815;
 P121 *t_816;
 P139 *r_817;
 P121 arrt_2325;
 P121 ta_2326;
 P121 tb_2327;
 P139 a_2328;
 P139 b_2329;
 P139 ct_2330;
};
struct f_cat_operand_823fr { int dummy;
 struct f_greenc_1fr *up;
 P173 x_819;
 P121 arrt_820;
 rt_int line_821;
 P139 *r_822;
 P121 tx_2331;
 P139 ct_2332;
};
struct f_arithmetic_828fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_824;
 P121 want_825;
 P121 *t_826;
 P139 *r_827;
 rt_gstr op_2333;
 P121 ta_2334;
 P121 tb_2335;
 P121 hint_2336;
 P139 a_2337;
 P139 b_2338;
};
struct f_fixed_operation_836fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_829;
 P121 ta_830;
 P121 tb_831;
 rt_gstr a_832;
 rt_gstr b_833;
 P121 *t_834;
 P139 *r_835;
 rt_gstr op_2339;
};
struct f_gen_binop_841fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_837;
 P121 want_838;
 P121 *t_839;
 P139 *r_840;
 rt_gstr op_2340;
 P121 ta_2341;
 P121 tb_2342;
 P121 hint_2343;
 P121 ct_2344;
 P139 a_2345;
 P139 b_2346;
 P139 x_2347;
 P139 dummy_2348;
 int done_2349;
};
struct f_conversion_846fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_842;
 P116 y_843;
 P121 *t_844;
 P139 *r_845;
 P121 aty_2350;
 P139 a_2351;
 P173 ag_2352;
 P173 it_2353;
 P173 tail_2354;
 P173 arg_2355;
};
struct f_constrain_850fr { int dummy;
 struct f_greenc_1fr *up;
 P116 y_847;
 P121 t_848;
 P139 *r_849;
 P139 ct_2357;
 P139 tmp_2358;
};
struct f_array_conversion_857fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_851;
 P121 t_852;
 P121 aty_853;
 P177 c_854;
 rt_gstr a_855;
 P139 *r_856;
 P121 x_2359;
 P121 y_2360;
 P139 ct_2361;
 P139 act_2362;
 P139 et_2363;
 P139 tmp_2364;
 P139 s_2365;
 rt_int k_2367;
};
struct f_gen_attr_862fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_858;
 P121 want_859;
 P121 *t_860;
 P139 *r_861;
 rt_gstr a_2371;
 P116 y_2372;
 P121 tt_2373;
 P121 aty_2374;
 P139 v_2375;
 P139 d_2376;
 P177 c_2377;
 rt_int n_2378;
 int ro_2379;
};
struct f_type_bits_866fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_863;
 P177 c_864;
 P139 *r_865;
 P139 ct_2380;
};
struct f_object_bits_870fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_867;
 rt_gstr v_868;
 P139 *r_869;
 P139 ct_2381;
 P139 et_2382;
};
struct f_numeric_attr_876fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_871;
 P121 tt_872;
 P177 c_873;
 P121 *t_874;
 P139 *r_875;
 rt_gstr a_2383;
 int short_2384;
};
struct f_component_attr_880fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_877;
 P121 *t_878;
 P139 *r_879;
 P121 bt_2385;
 P139 v_2386;
 P139 ct_2387;
 P1767 f_2388;
};
struct f_config_attr_884fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_881;
 P121 *t_882;
 P139 *r_883;
 rt_gstr a_2390;
 rt_gstr p_2391;
 P139 nm_2392;
};
struct f_attr_dim_888fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_885;
 P121 arrt_886;
 rt_int *n_887;
 int ok_2395;
};
struct f_object_array_attr_894fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_889;
 P121 arrt_890;
 rt_gstr v_891;
 P121 *t_892;
 P139 *r_893;
 rt_int n_2396;
 P121 it_2397;
 P139 ct_2398;
 P139 tmp_2399;
 P139 p_2400;
 P139 lo_2401;
 P139 hi_2402;
 rt_int k_2404;
 rt_int k_2409;
};
struct f_type_array_attr_900fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_895;
 P121 arrt_896;
 P177 c_897;
 P121 *t_898;
 P139 *r_899;
 rt_int n_2413;
 P121 it_2414;
 P177 cc_2415;
 rt_int k_2417;
};
struct f_lit_table_903fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_901;
 P139 *r_902;
 P173 l_2421;
 P139 s_2422;
};
struct f_val_rep_909fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_904;
 P121 tt_905;
 P177 c_906;
 P121 *t_907;
 P139 *r_908;
 P121 aty_2425;
 P139 v_2426;
 P139 lt_2427;
 rt_int n_2428;
};
struct f_allocator_914fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_910;
 P121 want_911;
 P121 *t_912;
 P139 *r_913;
 P116 y_2429;
 P121 target_2430;
 P121 vt_2431;
 P139 ct_2432;
 P139 pt_2433;
 P139 cell_2434;
 P139 v_2435;
 P139 x_2436;
};
struct f_aggregate_919fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_915;
 P121 want_916;
 P121 *t_917;
 P139 *r_918;
 P139 b_2437;
};
struct f_captured_922fr { int dummy;
 struct f_greenc_1fr *up;
 P125 b_920;
 P139 *r_921;
 P150 l_2438;
};
struct f_field_at_925fr { int dummy;
 struct f_greenc_1fr *up;
 P121 rt_923;
 rt_int k_924;
 P1767 result_;
 P1767 f_2440;
 rt_int i_2442;
};
struct f_names_field_928fr { int dummy;
 struct f_greenc_1fr *up;
 P173 x_926;
 P1767 f_927;
 int result_;
};
struct f_item_for_933fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_929;
 P121 rt_930;
 rt_int k_931;
 rt_int p_932;
 P173 result_;
 P173 it_2446;
 P173 lab_2447;
 rt_int n_2448;
};
struct f_arm_holds_937fr { int dummy;
 struct f_greenc_1fr *up;
 P173 arm_934;
 rt_int v_935;
 int *res_936;
 P173 l_2451;
 rt_int lo_2452;
 rt_int hi_2453;
 int ok_2454;
};
struct f_record_aggregate_941fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_938;
 P121 rt_939;
 P139 *r_940;
 P173 it_2456;
 P173 lab_2457;
 P173 vn_2458;
 P173 a_2459;
 P1767 f_2460;
 P1892 g_2461;
 rt_int n_2462;
 A2463 done_2464;
 A2463 active_2466;
 A2468 dvs_2469;
 A2471 order_2472;
 rt_int norder_2474;
 rt_int nung_2475;
 rt_int k_2476;
 rt_int d_2477;
 rt_int npos_2478;
 P125 saved_2479;
 P139 ct_2480;
 P139 tmp_2481;
 P139 parts_2482;
 int named_2483;
 int ok_2484;
 int holds_2485;
 rt_int i_2487;
 rt_int p_2496;
 rt_int i_2515;
 rt_int i_2532;
 rt_int i_2543;
};
struct f_field_index_944fr { int dummy;
 struct f_greenc_1fr *up;
 P121 rt_942;
 rt_gstr name_943;
 rt_int result_;
 P1767 f_2549;
 rt_int k_2550;
};
struct f_agg_component_950fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr tmp_945;
 P121 rt_946;
 rt_int k_947;
 P173 v_948;
 rt_int line_949;
 P1767 f_2552;
 P121 vt_2553;
 P139 x_2554;
 P139 y_2555;
 rt_int i_2557;
};
struct f_static_choice_954fr { int dummy;
 struct f_greenc_1fr *up;
 P173 x_951;
 rt_int *v_952;
 int *ok_953;
};
struct f_array_aggregate_959fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_955;
 P121 arrt_956;
 P139 bounds_957;
 P139 *r_958;
 P173 it_2562;
 P173 lab_2563;
 P173 others_it_2564;
 rt_int np_2565;
 rt_int nnamed_2566;
 rt_int clo_2567;
 rt_int chi_2568;
 rt_int v1_2569;
 rt_int v2_2570;
 int all_static_2571;
 int ok_2572;
 int ok2_2573;
 int first_choice_2574;
 P121 vt_2575;
 P139 ct_2576;
 P139 et_2577;
 P139 tmp_2578;
 P139 lo_2579;
 P139 hi_2580;
 P139 v_2581;
 P139 x_2582;
 P139 parts_2583;
 P139 fill_2584;
 P139 rowb_2585;
 P139 key_2586;
 P139 khi_2587;
 P125 saved_2588;
};
struct f_element_store_963fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lv_960;
 P121 arrt_961;
 rt_gstr v_962;
 P139 x_2593;
};
struct f_check_choices_967fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_964;
 P121 arrt_965;
 int has_others_966;
 P173 a_2594;
 P173 b_2595;
 P173 lab_2596;
 P173 lab2_2597;
 rt_int lo1_2598;
 rt_int hi1_2599;
 rt_int lo2_2600;
 rt_int hi2_2601;
 rt_int count_2602;
 int ok_2603;
};
struct f_actual_for_971fr { int dummy;
 struct f_greenc_1fr *up;
 P173 args_968;
 P1752 pm_969;
 P1752 first_970;
 P173 result_;
 P173 a_2608;
 P1752 p_2609;
};
struct f_gcall_976fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_972;
 int is_stmt_973;
 P121 *t_974;
 P139 *r_975;
 P173 fn_2612;
 P173 nm_2613;
 P116 y_2614;
 P139 args_2615;
 P139 lv_2616;
 P139 v_2617;
 P139 ct_2618;
 P139 x_2619;
 P173 a_2620;
 P1752 pm_2621;
 P121 lt_2622;
 P121 vt_2623;
 P177 lc_2624;
 int ro_2625;
};
struct f_out_check_980fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lv_977;
 P121 t_978;
 P177 c_979;
};
struct f_var_path_983fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_981;
 P139 *r_982;
 P121 pt_2626;
 P139 v_2627;
 P125 saved_2628;
};
struct f_paths_overlap_986fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_984;
 rt_gstr r_985;
 int result_;
 rt_int i_2632;
 rt_int j_2634;
};
struct f_mentions_989fr { int dummy;
 struct f_greenc_1fr *up;
 P173 n_987;
 rt_gstr name_988;
 int result_;
 P173 p_2656;
};
struct f_mentions_one_992fr { int dummy;
 struct f_greenc_1fr *up;
 P173 n_990;
 rt_gstr name_991;
 int result_;
};
struct f_check_aliasing_996fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_993;
 P116 y_994;
 P173 a_995;
 P173 b_2658;
 P139 p_2659;
 P139 q_2660;
 P173 r_2661;
 P116 v_2662;
};
struct f_gcall_with_1001fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_997;
 P116 y_998;
 P121 *t_999;
 P139 *r_1000;
 P139 args_2664;
 P139 lv_2665;
 P139 v_2666;
 P139 x1_2667;
 P139 x2_2668;
 P173 a_2669;
 P1752 pm_2670;
 P121 lt_2671;
 P121 vt_2672;
 P177 lc_2673;
 int ro_2674;
};
struct f_builtin_1008fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1002;
 P173 args_1003;
 rt_int line_1004;
 int is_stmt_1005;
 P121 *t_1006;
 P139 *r_1007;
 P121 aty_2677;
 P121 lt_2678;
 P139 a_2679;
 P139 w_2680;
 P139 lv_2681;
 P177 lc_2682;
 int ro_2683;
};
struct f_lookup_path_1010fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_1009;
 P116 result_;
 P116 y_2684;
 P116 m_2685;
 rt_int i_2689;
};
struct f_is_package_1012fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1011;
 int result_;
 P116 y_2701;
};
struct f_member_of_1016fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_1013;
 rt_gstr name_1014;
 rt_int line_1015;
 P116 result_;
 P116 y_2702;
 P116 m_2703;
};
struct f_inside_package_1018fr { int dummy;
 struct f_greenc_1fr *up;
 P173 p_1017;
 int result_;
 P150 l_2705;
};
struct f_copy_sym_1021fr { int dummy;
 struct f_greenc_1fr *up;
 P116 y_1019;
 P116 *z_1020;
};
struct f_complete_private_1024fr { int dummy;
 struct f_greenc_1fr *up;
 P121 ph_1022;
 P121 full_1023;
 P139 n_2709;
 P173 p_2710;
};
struct f_package_spec_1026fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1025;
 P116 y_2711;
 P116 m_2712;
 P116 z_2713;
 P173 saved_2714;
 P116 first_private_2715;
};
struct f_hidden_from_1029fr { int dummy;
 struct f_greenc_1fr *up;
 P116 m_1027;
 P116 first_private_1028;
 int result_;
 P116 p_2719;
};
struct f_package_body_1031fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1030;
 P188 saved_labels_2721;
 P116 y_2722;
 P116 m_2723;
 P116 z_2724;
 P173 saved_2725;
};
struct f_use_visible_1033fr { int dummy;
 struct f_greenc_1fr *up;
 P116 old_1032;
 int result_;
};
struct f_use_clause_1035fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1034;
 P173 n_2732;
 P116 y_2733;
 P116 m_2734;
 P116 z_2735;
 P116 old_2736;
};
struct f_fits_1040fr { int dummy;
 struct f_greenc_1fr *up;
 P116 y_1036;
 P173 args_1037;
 P121 want_1038;
 int *ok_1039;
 P1752 pm_2739;
 P173 a_2740;
 P121 t_2741;
 P177 c_2742;
 P139 v_2743;
 int ro_2744;
 P125 saved_2745;
 rt_int used_2746;
};
struct f_is_builtin_1042fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_1041;
 int result_;
};
struct f_resolve_overload_1049fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1043;
 P173 args_1044;
 int is_stmt_1045;
 P121 want_1046;
 rt_int line_1047;
 P116 *y_1048;
 P116 z_2751;
 P116 first_2753;
 rt_int n_2754;
 int ok_2755;
 rt_int pass_2757;
};
struct f_resolve_member_overload_1057fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_1050;
 rt_gstr name_1051;
 P173 args_1052;
 int is_stmt_1053;
 P121 want_1054;
 rt_int line_1055;
 P116 *y_1056;
 P116 pk_2763;
 P116 z_2764;
 rt_int n_2765;
 int ok_2766;
 rt_int pass_2768;
};
struct f_user_operator_1063fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1058;
 P121 want_1059;
 P121 *t_1060;
 P139 *r_1061;
 int *done_1062;
 P139 op_2773;
 int negate_2774;
 P116 y_2775;
 P173 call_2776;
 P173 fname_2777;
 P173 l_2778;
 P173 rt_2779;
 int ok_2780;
};
struct f_task_p_1065fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_1064;
 P173 x_2783;
 P173 r_2784;
 rt_int line_2785;
};
struct f_entry_p_1067fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_1066;
 P173 x_2786;
};
struct f_accept_p_1069fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_1068;
 P173 x_2787;
};
struct f_delay_p_1071fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_1070;
 P173 x_2788;
};
struct f_designators_1073fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_1072;
 P173 head_2789;
 P173 tail_2790;
 P173 n_2791;
};
struct f_parse_task_statement_1075fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_1074;
 P173 x_2793;
 P173 alt_2794;
 P173 head_2795;
 P173 tail_2796;
 rt_int line_2797;
};
struct f_path_at_1079fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int level_1076;
 rt_gstr field_1077;
 P139 *r_1078;
 rt_int i_2800;
};
struct f_is_task_name_1081fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_1080;
 int result_;
 P116 y_2804;
};
struct f_task_of_1085fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1082;
 P116 *y_1083;
 P173 *ix_1084;
 P173 n_2805;
};
struct f_own_index_1087fr { int dummy;
 struct f_greenc_1fr *up;
 P139 *r_1086;
 P116 y_2806;
};
struct f_member_1092fr { int dummy;
 struct f_greenc_1fr *up;
 P116 y_1088;
 rt_gstr arr_1089;
 rt_gstr i_1090;
 P139 *r_1091;
 P139 lo_2807;
 P139 hi_2808;
};
struct f_act_path_1095fr { int dummy;
 struct f_greenc_1fr *up;
 P116 y_1093;
 P139 *r_1094;
 P139 i_2809;
};
struct f_act_path_i_1099fr { int dummy;
 struct f_greenc_1fr *up;
 P116 y_1096;
 rt_gstr i_1097;
 P139 *r_1098;
};
struct f_entry_path_1103fr { int dummy;
 struct f_greenc_1fr *up;
 P116 y_1100;
 rt_gstr i_1101;
 P139 *r_1102;
 P139 own_2810;
};
struct f_declare_slot_1106fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr ctype_name_1104;
 rt_gstr field_1105;
};
struct f_task_decl_1108fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1107;
};
struct f_family_arg_struct_1109fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_family_bounds_1113fr { int dummy;
 struct f_greenc_1fr *up;
 P173 b_1110;
 P116 y_1111;
 P139 x_1112;
 P139 lo_2812;
 P139 hi_2813;
 P139 v_2814;
 P139 d_2815;
 P121 vt_2816;
 P177 c_2817;
};
struct f_entry_family_slot_1118fr { int dummy;
 struct f_greenc_1fr *up;
 P116 y_1114;
 rt_gstr base_1115;
 rt_gstr i_1116;
 P139 *r_1117;
 P139 lo_2818;
 P139 hi_2819;
};
struct f_task_spec_1120fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1119;
 int has_procs_2820;
 int saved_defer_2821;
 P139 fields_2822;
 P139 ct_2823;
 P1752 pm_2824;
 P139 fp_2825;
 P139 flo_2826;
 P139 fhi_2827;
 P116 y_2828;
 P116 m_2829;
 P116 z_2830;
 P116 saved_2831;
 P139 d_2832;
 P139 v_2833;
 P139 p_2834;
 P139 p2_2835;
 P121 vt_2836;
 P173 r_2837;
};
struct f_entry_decl_1122fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1121;
 P116 y_2841;
 P173 p_2842;
 P1752 pm_2843;
 P1752 tail_2844;
 P139 fields_2845;
 P139 ct_2846;
 P139 x_2847;
 P139 lo_2848;
 P139 hi_2849;
};
struct f_task_body_1124fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1123;
 P116 y_2853;
 P116 b_2854;
 P116 m_2855;
 P116 z_2856;
 P139 upp_2857;
 P116 saved_2858;
};
struct f_task_awaits_1127fr { int dummy;
 struct f_greenc_1fr *up;
 P173 decls_1125;
 P139 *aw_1126;
 P173 e_2862;
 P116 y_2863;
 P139 p_2864;
};
struct f_task_failure_1129fr { int dummy;
 struct f_greenc_1fr *up;
 P173 s_1128;
 P116 y_2866;
 P139 a_2867;
 P139 i_2868;
 P121 it_2869;
};
struct f_entry_sym_1133fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1130;
 P116 *y_1131;
 P173 *ix_1132;
 P116 t_2870;
};
struct f_other_call_1138fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1134;
 int is_stmt_1135;
 P121 *t_1136;
 P139 *r_1137;
 P116 y_2871;
 P1752 pm_2872;
 P173 a_2873;
 P139 parts_2874;
 P139 v_2875;
 P139 lv_2876;
 P139 ent_2877;
 P139 act_2878;
 P139 i_2879;
 P121 vt_2880;
 P121 lt_2881;
 P177 lc_2882;
 int ro_2883;
 P173 ix_2884;
 P173 fix_2885;
 P173 args_node_2886;
};
struct f_other_attr_1143fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1139;
 P116 y_1140;
 P121 *t_1141;
 P139 *r_1142;
 rt_gstr a_2888;
 P139 p_2889;
};
struct f_member_attr_1147fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1144;
 P121 *t_1145;
 P139 *r_1146;
 P116 y_2890;
 P173 ix_2891;
 P139 i_2892;
 P139 p_2893;
 P121 vt_2894;
};
struct f_task_builtin_1153fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1148;
 P173 args_1149;
 rt_int line_1150;
 P121 *t_1151;
 P139 *r_1152;
 P121 vt_2895;
 P139 v_2896;
};
struct f_gen_accept_1155fr { int dummy;
 struct f_greenc_1fr *up;
 P173 s_1154;
 P116 y_2897;
 P142 saved_ax_2898;
 P139 ent_2899;
 P139 ep_2900;
 P139 xf_2901;
 P139 x_2902;
 P1752 pm_2903;
 P173 f_2904;
 P116 p_2905;
};
struct f_member_slot_1159fr { int dummy;
 struct f_greenc_1fr *up;
 P116 y_1156;
 P173 s_1157;
 P139 *ent_1158;
 P121 vt_2907;
 P139 v_2908;
};
struct f_gen_delay_ticks_1162fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1160;
 P139 *r_1161;
 P121 vt_2909;
 P139 v_2910;
};
struct f_gen_select_1164fr { int dummy;
 struct f_greenc_1fr *up;
 P173 s_1163;
 P173 alt_2911;
 rt_int n_2912;
 rt_int i_2913;
 int has_delay_2914;
 int has_accept_2915;
 P139 al_2916;
 P139 w_2917;
 P139 g_2918;
 P139 ent_2919;
 P139 ticks_2920;
 P121 vt_2921;
 P116 y_2922;
};
struct f_family_range_1169fr { int dummy;
 struct f_greenc_1fr *up;
 P116 y_1165;
 P173 ix_1166;
 P139 *lo_1167;
 P139 *hi_1168;
 P121 vt_2926;
};
struct f_task_statement_gen_1171fr { int dummy;
 struct f_greenc_1fr *up;
 P173 s_1170;
 P173 n_2927;
 P173 ix_2928;
 P116 y_2929;
 P139 a_2930;
 P139 d_2931;
 P139 l_2932;
 P139 ticks_2933;
 P139 lo_2934;
 P139 hi_2935;
};
struct f_root_name_1173fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1172;
 P173 result_;
};
struct f_check_pure_target_1176fr { int dummy;
 struct f_greenc_1fr *up;
 P173 target_1174;
 rt_int line_1175;
 P173 n_2939;
 P116 y_2940;
};
struct f_assigns_nonlocal_1179fr { int dummy;
 struct f_greenc_1fr *up;
 P173 d_1177;
 rt_gstr name_1178;
 int result_;
};
struct f_declares_1182fr { int dummy;
 struct f_greenc_1fr *up;
 P173 d_1180;
 rt_gstr name_1181;
 int result_;
 P173 p_2941;
 P173 e_2942;
};
struct f_scan_handlers_1186fr { int dummy;
 struct f_greenc_1fr *up;
 P173 h_1183;
 P173 d_1184;
 rt_gstr name_1185;
 int result_;
 P173 p_2945;
};
struct f_scan_assigns_1190fr { int dummy;
 struct f_greenc_1fr *up;
 P173 stmts_1187;
 P173 d_1188;
 rt_gstr name_1189;
 int result_;
 P173 s_2947;
 P173 a_2948;
 P173 r_2949;
};
struct f_check_call_rules_1193fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1191;
 P116 y_1192;
 P116 z_2953;
 P116 s_2954;
};
struct f_generic_p_1195fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_1194;
 P173 x_2956;
 P173 p_2957;
 P173 head_2958;
 P173 tail_2959;
 P173 names_2960;
 P173 st_2961;
 P173 def_2962;
 P173 sub_2963;
 P139 def_name_text_2964;
 int more_2965;
};
struct f_instantiation_1198fr { int dummy;
 struct f_greenc_1fr *up;
 P173 x_1196;
 P173 *res_1197;
 P173 i_2968;
 P173 head_2969;
 P173 tail_2970;
 P173 a_2971;
 P139 formal_2972;
 rt_int mark_2973;
 int more_2974;
};
struct f_generic_decl_1200fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1199;
 P116 y_2976;
};
struct f_is_generic_name_1202fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_1201;
 int result_;
 P116 y_2977;
};
struct f_attach_generic_body_1204fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1203;
 P116 y_2978;
};
struct f_restore_generic_context_1207fr { int dummy;
 struct f_greenc_1fr *up;
 P173 body_node_1205;
 rt_int line_1206;
 P145 ctx_2981;
 P116 m_2982;
 P116 z_2983;
 int seen_2984;
};
struct f_gactual_1211fr { int dummy;
 struct f_greenc_1fr *up;
 P173 args_1208;
 rt_int nth_1209;
 rt_gstr name_1210;
 P173 result_;
 P173 a_2989;
 rt_int i_2990;
};
struct f_copy_node_1215fr { int dummy;
 struct f_greenc_1fr *up;
 P173 n_1212;
 P139 name_1213;
 P173 *r_1214;
};
struct f_matches_formal_1219fr { int dummy;
 struct f_greenc_1fr *up;
 P116 y_1216;
 rt_gstr name_1217;
 P116 fs_1218;
 int result_;
};
struct f_instantiate_1221fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1220;
 P116 g_2992;
 P173 gd_2993;
 P173 pat_2994;
 P173 f_2995;
 P173 a_2996;
 P173 cn_2997;
 P116 y_2998;
 P116 z_2999;
 P116 fs_3000;
 rt_int nth_3001;
 P121 t_3002;
 P121 vt_3003;
 P177 c_3004;
 P139 v_3005;
 P139 acc_3006;
 P139 x_3007;
 int ok_3008;
};
struct f_predef_type_1226fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1222;
 P121 t_1223;
 rt_gstr lo_1224;
 rt_gstr hi_1225;
 P116 y_3012;
};
struct f_predef_const_1230fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1227;
 P121 t_1228;
 rt_gstr code_text_1229;
 P116 y_3019;
};
struct f_predef_exc_1232fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1231;
 P116 y_3020;
};
struct f_predef_lit_1236fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1233;
 P121 t_1234;
 rt_int v_1235;
 P116 y_3021;
};
struct f_predefine_1237fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr control_3022;
 rt_int start_3023;
 rt_int code_no_3024;
 rt_int i_3027;
 rt_int i_3035;
};
struct f_translate_1239fr { int dummy;
 struct f_greenc_1fr *up;
 P173 u_1238;
 P173 p_3039;
 P116 y_3040;
};
struct f_print_program_1240fr { int dummy;
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
static void as_A2471(A2471 *d, A2471 s);
static A2471 cp_A2471(A2471 s);
static int eq_A2471(A2471 a, A2471 b);
static A2471 cat_A2471(A2471 a, A2471 b);
static A2471 one_A2471(rt_int e);
static void as_A2468(A2468 *d, A2468 s);
static A2468 cp_A2468(A2468 s);
static int eq_A2468(A2468 a, A2468 b);
static A2468 cat_A2468(A2468 a, A2468 b);
static A2468 one_A2468(rt_int e);
static void as_A2463(A2463 *d, A2463 s);
static A2463 cp_A2463(A2463 s);
static int eq_A2463(A2463 a, A2463 b);
static A2463 cat_A2463(A2463 a, A2463 b);
static A2463 one_A2463(int e);
static A2463 and_A2463(A2463 a, A2463 b);
static A2463 or_A2463(A2463 a, A2463 b);
static A2463 xor_A2463(A2463 a, A2463 b);
static A2463 not_A2463(A2463 a);
static void as_A2140(A2140 *d, A2140 s);
static A2140 cp_A2140(A2140 s);
static int eq_A2140(A2140 a, A2140 b);
static A2140 cat_A2140(A2140 a, A2140 b);
static A2140 one_A2140(rt_int e);
static void as_R1893(R1893 *d, R1893 s);
static R1893 cp_R1893(R1893 s);
static int eq_R1893(R1893 a, R1893 b);
static void as_R1772(R1772 *d, R1772 s);
static R1772 cp_R1772(R1772 s);
static int eq_R1772(R1772 a, R1772 b);
static void as_R1768(R1768 *d, R1768 s);
static R1768 cp_R1768(R1768 s);
static int eq_R1768(R1768 a, R1768 b);
static void as_R1753(R1753 *d, R1753 s);
static R1753 cp_R1753(R1753 s);
static int eq_R1753(R1753 a, R1753 b);
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
static int f_same_signature_441(struct f_greenc_1fr *up_, P1752 a_439, P1752 b_440);
static int f_distinct_overload_444(struct f_greenc_1fr *up_, P116 y_442, P116 z_443);
static void f_define_447(struct f_greenc_1fr *up_, P116 y_445, rt_int line_446);
static void f_open_scope_448(struct f_greenc_1fr *up_);
static void f_close_scope_449(struct f_greenc_1fr *up_);
static P116 f_new_sym_452(struct f_greenc_1fr *up_, rt_int kind_450, P139 name_451);
static P121 f_new_typ_454(struct f_greenc_1fr *up_, rt_int kind_453);
static P177 f_new_cons_455(struct f_greenc_1fr *up_);
static int f_bounded_457(struct f_greenc_1fr *up_, P177 c_456);
static int f_bounded_hi_459(struct f_greenc_1fr *up_, P177 c_458);
static int f_static_bounds_461(struct f_greenc_1fr *up_, P177 c_460);
static int f_discriminated_463(struct f_greenc_1fr *up_, P177 c_462);
static rt_gstr f_kind_name_465(struct f_greenc_1fr *up_, P121 t_464);
static void f_check_type_469(struct f_greenc_1fr *up_, P121 got_466, P121 want_467, rt_int line_468);
static rt_int f_field_count_471(struct f_greenc_1fr *up_, P121 t_470);
static void f_ctype_474(struct f_greenc_1fr *up_, P121 t_472, P139 *r_473);
static void f_field_decls_477(struct f_greenc_1fr *up_, P121 t_475, P139 *r_476);
static void f_declare_ctype_479(struct f_greenc_1fr *up_, P121 t_478);
static rt_int f_lit_index_482(struct f_greenc_1fr *up_, P173 lits_480, rt_gstr name_481);
static void f_manifest_486(struct f_greenc_1fr *up_, P173 e_483, rt_int *v_484, int *ok_485);
static void f_resolve_490(struct f_greenc_1fr *up_, P173 st_487, P121 *t_488, P177 *c_489);
static void f_constraint_list_494(struct f_greenc_1fr *up_, P173 st_491, P121 t_492, P177 c_493);
static void f_discriminant_constraint_498(struct f_greenc_1fr *up_, P173 st_495, P121 t_496, P177 c_497);
static void f_discrete_bounds_504(struct f_greenc_1fr *up_, P173 r_499, P121 want_500, P121 *t_501, P139 *lo_502, P139 *hi_503);
static void f_range_of_508(struct f_greenc_1fr *up_, P173 r_505, P121 t_506, P177 c_507);
static void f_fresh_typ_512(struct f_greenc_1fr *up_, rt_int kind_509, P139 name_510, P121 *t_511);
static void f_inherit_516(struct f_greenc_1fr *up_, P121 parent_513, P121 t_514, rt_int line_515);
static void f_derive_literals_519(struct f_greenc_1fr *up_, P121 t_517, rt_int line_518);
static void f_type_definition_524(struct f_greenc_1fr *up_, P173 d_520, P139 name_521, P121 *t_522, P177 *c_523);
static void f_array_type_531(struct f_greenc_1fr *up_, P173 idx_525, P173 comp_526, P139 name_527, rt_int line_528, P121 *t_529, P177 *c_530);
static void f_static_range_535(struct f_greenc_1fr *up_, P173 l_532, P173 h_533, P177 c_534);
static void f_component_place_541(struct f_greenc_1fr *up_, P121 rt_536, P1767 f_537, rt_gstr a_538, rt_gstr ct_539, P139 *r_540);
static rt_gstr f_no_value_543(struct f_greenc_1fr *up_, P121 t_542);
static void f_elem_ctype_546(struct f_greenc_1fr *up_, P121 t_544, P139 *r_545);
static void f_first_index_549(struct f_greenc_1fr *up_, P121 t_547, P139 *r_548);
static int f_is_string_551(struct f_greenc_1fr *up_, P121 t_550);
static rt_gstr f_subst_554(struct f_greenc_1fr *up_, rt_gstr s_552, rt_gstr r_553);
static int f_mentions_record_556(struct f_greenc_1fr *up_, P139 s_555);
static void f_subst_cons_560(struct f_greenc_1fr *up_, P177 c_557, rt_gstr r_558, P177 *res_559);
static void f_remove_sym_562(struct f_greenc_1fr *up_, P116 y_561);
static void f_record_components_567(struct f_greenc_1fr *up_, P173 list_563, P121 t_564, P1892 g_565, rt_int line_566);
static void f_guard_cond_571(struct f_greenc_1fr *up_, P1892 g_568, P121 t_569, P139 *r_570);
static void f_arm_test_576(struct f_greenc_1fr *up_, P173 arm_572, P139 dname_573, rt_gstr d_574, P139 *x_575);
static void f_derived_type_581(struct f_greenc_1fr *up_, P173 d_577, P139 name_578, P121 *t_579, P177 *c_580);
static void f_real_type_586(struct f_greenc_1fr *up_, P173 d_582, P139 name_583, P121 *t_584, P177 *c_585);
static void f_finish_ptr_588(struct f_greenc_1fr *up_, P121 t_587);
static void f_init_storage_592(struct f_greenc_1fr *up_, rt_gstr lval_589, P121 t_590, P177 c_591);
static int f_composite_594(struct f_greenc_1fr *up_, P121 t_593);
static void f_assign_code_600(struct f_greenc_1fr *up_, rt_gstr lval_595, P121 t_596, rt_gstr v_597, P177 c_598, P139 *r_599);
static void f_copy_code_604(struct f_greenc_1fr *up_, P121 t_601, rt_gstr v_602, P139 *r_603);
static void f_eq_code_609(struct f_greenc_1fr *up_, P121 t_605, rt_gstr a_606, rt_gstr b_607, P139 *r_608);
static int f_seen_name_612(struct f_greenc_1fr *up_, P150 l_610, rt_gstr s_611);
static void f_emit_helpers_613(struct f_greenc_1fr *up_);
static void f_helper_bodies_615(struct f_greenc_1fr *up_, P121 t_614);
static void f_storage_619(struct f_greenc_1fr *up_, rt_gstr name_616, P121 t_617, P139 *access_code_618);
static void f_bind_622(struct f_greenc_1fr *up_, P116 y_620, P139 access_code_621);
static void f_declare_subprograms_624(struct f_greenc_1fr *up_, P173 from_623);
static void f_declare_one_626(struct f_greenc_1fr *up_, P173 e_625);
static void f_build_subprogram_629(struct f_greenc_1fr *up_, P173 d_627, P116 *y_628);
static void f_decl_elements_631(struct f_greenc_1fr *up_, P173 decls_630);
static void f_decl_element_633(struct f_greenc_1fr *up_, P173 e_632);
static void f_pragma_decl_635(struct f_greenc_1fr *up_, P173 e_634);
static void f_resolve_object_type_639(struct f_greenc_1fr *up_, P173 st_636, P121 *t_637, P177 *c_638);
static void f_other_decl_641(struct f_greenc_1fr *up_, P173 e_640);
static void f_scan_labels_644(struct f_greenc_1fr *up_, P173 stmts_642, rt_gstr path_643);
static void f_scan_guarded_648(struct f_greenc_1fr *up_, P173 stmts_645, P173 hs_646, rt_gstr path_647);
static rt_int f_count_g_650(struct f_greenc_1fr *up_, rt_gstr p_649);
static void f_label_body_653(struct f_greenc_1fr *up_, P173 stmts_651, P173 hs_652);
static void f_gen_label_656(struct f_greenc_1fr *up_, P173 s_654, int goto_it_655);
static int f_is_foreign_658(struct f_greenc_1fr *up_, P173 d_657);
static void f_subprogram_body_661(struct f_greenc_1fr *up_, P173 d_659, P116 y_660);
static void f_gen_statements_663(struct f_greenc_1fr *up_, P173 stmts_662);
static void f_pop_frames_665(struct f_greenc_1fr *up_, rt_int upto_664);
static void f_push_cleanup_667(struct f_greenc_1fr *up_, rt_gstr s_666);
static void f_pop_cleanup_668(struct f_greenc_1fr *up_);
static void f_guarded_672(struct f_greenc_1fr *up_, P173 stmts_669, P173 hs_670, rt_int line_671);
static void f_exc_id_676(struct f_greenc_1fr *up_, rt_gstr name_673, rt_int line_674, P139 *r_675);
static void f_gen_statement_678(struct f_greenc_1fr *up_, P173 s_677);
static void f_slice_assign_680(struct f_greenc_1fr *up_, P173 s_679);
static void f_gen_call_682(struct f_greenc_1fr *up_, P173 s_681);
static void f_gen_if_684(struct f_greenc_1fr *up_, P173 s_683);
static void f_gen_case_686(struct f_greenc_1fr *up_, P173 s_685);
static void f_selector_range_692(struct f_greenc_1fr *up_, P173 e_687, P121 t_688, rt_int *lo_689, rt_int *hi_690, int *ok_691);
static void f_push_exit_696(struct f_greenc_1fr *up_, P139 match_693, int is_loop_694, P139 *label_695);
static void f_gen_loop_698(struct f_greenc_1fr *up_, P173 s_697);
static void f_gen_block_700(struct f_greenc_1fr *up_, P173 s_699);
static int f_exit_matches_703(struct f_greenc_1fr *up_, P173 s_701, P142 x_702);
static void f_gen_exit_705(struct f_greenc_1fr *up_, P173 s_704);
static void f_gen_return_707(struct f_greenc_1fr *up_, P173 s_706);
static void f_access_of_710(struct f_greenc_1fr *up_, P116 y_708, P139 *r_709);
static void f_link_to_713(struct f_greenc_1fr *up_, rt_int l_711, P139 *r_712);
static rt_gstr f_c_ident_715(struct f_greenc_1fr *up_, rt_gstr s_714);
static void f_deref_719(struct f_greenc_1fr *up_, rt_gstr base_716, P121 t_717, P139 *r_718);
static int f_is_object_721(struct f_greenc_1fr *up_, P173 e_720);
static int f_is_const_access_723(struct f_greenc_1fr *up_, P173 e_722);
static void f_lvalue_729(struct f_greenc_1fr *up_, P173 e_724, P139 *code_out_725, P121 *t_726, P177 *c_727, int *ro_728);
static void f_select_on_738(struct f_greenc_1fr *up_, rt_gstr base_730, P121 bt_731, P173 e_732, int *ro_733, int lv_734, P139 *code_out_735, P121 *t_736, P177 *c_737);
static void f_index_on_747(struct f_greenc_1fr *up_, rt_gstr base_739, P121 bt_740, P173 e_741, int *ro_742, int lv_743, P139 *code_out_744, P121 *t_745, P177 *c_746);
static int f_type_attribute_750(struct f_greenc_1fr *up_, P121 t_748, rt_gstr name_749);
static int f_is_type_name_752(struct f_greenc_1fr *up_, rt_gstr n_751);
static int f_is_char_lit_754(struct f_greenc_1fr *up_, P173 e_753);
static int f_is_enum_lit_756(struct f_greenc_1fr *up_, P173 e_755);
static rt_gstr f_c_string_758(struct f_greenc_1fr *up_, rt_gstr s_757);
static int f_is_literal_760(struct f_greenc_1fr *up_, P173 e_759);
static void f_range_bounds_768(struct f_greenc_1fr *up_, P173 l_761, P173 h_762, P121 want_763, rt_int line_764, P121 *t_765, P139 *lo_766, P139 *hi_767);
static void f_gexpr_773(struct f_greenc_1fr *up_, P173 e_769, P121 want_770, P121 *t_771, P139 *r_772);
static void f_gexpr_1_778(struct f_greenc_1fr *up_, P173 e_774, P121 want_775, P121 *t_776, P139 *r_777);
static void f_string_aggregate_783(struct f_greenc_1fr *up_, P173 e_779, P121 want_780, P121 *t_781, P139 *r_782);
static void f_char_literal_788(struct f_greenc_1fr *up_, P173 e_784, P121 want_785, P121 *t_786, P139 *r_787);
static void f_expanded_791(struct f_greenc_1fr *up_, P173 e_789, P173 *r_790);
static void f_gen_name_796(struct f_greenc_1fr *up_, P173 e_792, P121 want_793, P121 *t_794, P139 *r_795);
static void f_gen_unop_801(struct f_greenc_1fr *up_, P173 e_797, P121 want_798, P121 *t_799, P139 *r_800);
static int f_short_int_803(struct f_greenc_1fr *up_, P121 t_802);
static rt_gstr f_float_kind_805(struct f_greenc_1fr *up_, P121 t_804);
static void f_membership_808(struct f_greenc_1fr *up_, P173 e_806, P139 *r_807);
static void f_condition_813(struct f_greenc_1fr *up_, P173 e_809, P121 want_810, P121 *t_811, P139 *r_812);
static void f_catenation_818(struct f_greenc_1fr *up_, P173 e_814, P121 want_815, P121 *t_816, P139 *r_817);
static void f_cat_operand_823(struct f_greenc_1fr *up_, P173 x_819, P121 arrt_820, rt_int line_821, P139 *r_822);
static void f_arithmetic_828(struct f_greenc_1fr *up_, P173 e_824, P121 want_825, P121 *t_826, P139 *r_827);
static void f_fixed_operation_836(struct f_greenc_1fr *up_, P173 e_829, P121 ta_830, P121 tb_831, rt_gstr a_832, rt_gstr b_833, P121 *t_834, P139 *r_835);
static void f_gen_binop_841(struct f_greenc_1fr *up_, P173 e_837, P121 want_838, P121 *t_839, P139 *r_840);
static void f_conversion_846(struct f_greenc_1fr *up_, P173 e_842, P116 y_843, P121 *t_844, P139 *r_845);
static void f_constrain_850(struct f_greenc_1fr *up_, P116 y_847, P121 t_848, P139 *r_849);
static void f_array_conversion_857(struct f_greenc_1fr *up_, P173 e_851, P121 t_852, P121 aty_853, P177 c_854, rt_gstr a_855, P139 *r_856);
static void f_gen_attr_862(struct f_greenc_1fr *up_, P173 e_858, P121 want_859, P121 *t_860, P139 *r_861);
static void f_type_bits_866(struct f_greenc_1fr *up_, P121 t_863, P177 c_864, P139 *r_865);
static void f_object_bits_870(struct f_greenc_1fr *up_, P121 t_867, rt_gstr v_868, P139 *r_869);
static void f_numeric_attr_876(struct f_greenc_1fr *up_, P173 e_871, P121 tt_872, P177 c_873, P121 *t_874, P139 *r_875);
static void f_component_attr_880(struct f_greenc_1fr *up_, P173 e_877, P121 *t_878, P139 *r_879);
static void f_config_attr_884(struct f_greenc_1fr *up_, P173 e_881, P121 *t_882, P139 *r_883);
static void f_attr_dim_888(struct f_greenc_1fr *up_, P173 e_885, P121 arrt_886, rt_int *n_887);
static void f_object_array_attr_894(struct f_greenc_1fr *up_, P173 e_889, P121 arrt_890, rt_gstr v_891, P121 *t_892, P139 *r_893);
static void f_type_array_attr_900(struct f_greenc_1fr *up_, P173 e_895, P121 arrt_896, P177 c_897, P121 *t_898, P139 *r_899);
static void f_lit_table_903(struct f_greenc_1fr *up_, P121 t_901, P139 *r_902);
static void f_val_rep_909(struct f_greenc_1fr *up_, P173 e_904, P121 tt_905, P177 c_906, P121 *t_907, P139 *r_908);
static void f_allocator_914(struct f_greenc_1fr *up_, P173 e_910, P121 want_911, P121 *t_912, P139 *r_913);
static void f_aggregate_919(struct f_greenc_1fr *up_, P173 e_915, P121 want_916, P121 *t_917, P139 *r_918);
static void f_captured_922(struct f_greenc_1fr *up_, P125 b_920, P139 *r_921);
static P1767 f_field_at_925(struct f_greenc_1fr *up_, P121 rt_923, rt_int k_924);
static int f_names_field_928(struct f_greenc_1fr *up_, P173 x_926, P1767 f_927);
static P173 f_item_for_933(struct f_greenc_1fr *up_, P173 e_929, P121 rt_930, rt_int k_931, rt_int p_932);
static void f_arm_holds_937(struct f_greenc_1fr *up_, P173 arm_934, rt_int v_935, int *res_936);
static void f_record_aggregate_941(struct f_greenc_1fr *up_, P173 e_938, P121 rt_939, P139 *r_940);
static rt_int f_field_index_944(struct f_greenc_1fr *up_, P121 rt_942, rt_gstr name_943);
static void f_agg_component_950(struct f_greenc_1fr *up_, rt_gstr tmp_945, P121 rt_946, rt_int k_947, P173 v_948, rt_int line_949);
static void f_static_choice_954(struct f_greenc_1fr *up_, P173 x_951, rt_int *v_952, int *ok_953);
static void f_array_aggregate_959(struct f_greenc_1fr *up_, P173 e_955, P121 arrt_956, P139 bounds_957, P139 *r_958);
static void f_element_store_963(struct f_greenc_1fr *up_, rt_gstr lv_960, P121 arrt_961, rt_gstr v_962);
static void f_check_choices_967(struct f_greenc_1fr *up_, P173 e_964, P121 arrt_965, int has_others_966);
static P173 f_actual_for_971(struct f_greenc_1fr *up_, P173 args_968, P1752 pm_969, P1752 first_970);
static void f_gcall_976(struct f_greenc_1fr *up_, P173 e_972, int is_stmt_973, P121 *t_974, P139 *r_975);
static void f_out_check_980(struct f_greenc_1fr *up_, rt_gstr lv_977, P121 t_978, P177 c_979);
static void f_var_path_983(struct f_greenc_1fr *up_, P173 e_981, P139 *r_982);
static int f_paths_overlap_986(struct f_greenc_1fr *up_, rt_gstr p_984, rt_gstr r_985);
static int f_mentions_989(struct f_greenc_1fr *up_, P173 n_987, rt_gstr name_988);
static int f_mentions_one_992(struct f_greenc_1fr *up_, P173 n_990, rt_gstr name_991);
static void f_check_aliasing_996(struct f_greenc_1fr *up_, P173 e_993, P116 y_994, P173 a_995);
static void f_gcall_with_1001(struct f_greenc_1fr *up_, P173 e_997, P116 y_998, P121 *t_999, P139 *r_1000);
static void f_builtin_1008(struct f_greenc_1fr *up_, rt_gstr name_1002, P173 args_1003, rt_int line_1004, int is_stmt_1005, P121 *t_1006, P139 *r_1007);
static P116 f_lookup_path_1010(struct f_greenc_1fr *up_, rt_gstr p_1009);
static int f_is_package_1012(struct f_greenc_1fr *up_, P173 e_1011);
static P116 f_member_of_1016(struct f_greenc_1fr *up_, rt_gstr p_1013, rt_gstr name_1014, rt_int line_1015);
static int f_inside_package_1018(struct f_greenc_1fr *up_, P173 p_1017);
static void f_copy_sym_1021(struct f_greenc_1fr *up_, P116 y_1019, P116 *z_1020);
static void f_complete_private_1024(struct f_greenc_1fr *up_, P121 ph_1022, P121 full_1023);
static void f_package_spec_1026(struct f_greenc_1fr *up_, P173 e_1025);
static int f_hidden_from_1029(struct f_greenc_1fr *up_, P116 m_1027, P116 first_private_1028);
static void f_package_body_1031(struct f_greenc_1fr *up_, P173 e_1030);
static int f_use_visible_1033(struct f_greenc_1fr *up_, P116 old_1032);
static void f_use_clause_1035(struct f_greenc_1fr *up_, P173 e_1034);
static void f_fits_1040(struct f_greenc_1fr *up_, P116 y_1036, P173 args_1037, P121 want_1038, int *ok_1039);
static int f_is_builtin_1042(struct f_greenc_1fr *up_, rt_gstr n_1041);
static void f_resolve_overload_1049(struct f_greenc_1fr *up_, rt_gstr name_1043, P173 args_1044, int is_stmt_1045, P121 want_1046, rt_int line_1047, P116 *y_1048);
static void f_resolve_member_overload_1057(struct f_greenc_1fr *up_, rt_gstr p_1050, rt_gstr name_1051, P173 args_1052, int is_stmt_1053, P121 want_1054, rt_int line_1055, P116 *y_1056);
static void f_user_operator_1063(struct f_greenc_1fr *up_, P173 e_1058, P121 want_1059, P121 *t_1060, P139 *r_1061, int *done_1062);
static void f_task_p_1065(struct f_greenc_1fr *up_, P173 *res_1064);
static void f_entry_p_1067(struct f_greenc_1fr *up_, P173 *res_1066);
static void f_accept_p_1069(struct f_greenc_1fr *up_, P173 *res_1068);
static void f_delay_p_1071(struct f_greenc_1fr *up_, P173 *res_1070);
static void f_designators_1073(struct f_greenc_1fr *up_, P173 *res_1072);
static void f_parse_task_statement_1075(struct f_greenc_1fr *up_, P173 *res_1074);
static void f_path_at_1079(struct f_greenc_1fr *up_, rt_int level_1076, rt_gstr field_1077, P139 *r_1078);
static int f_is_task_name_1081(struct f_greenc_1fr *up_, rt_gstr n_1080);
static void f_task_of_1085(struct f_greenc_1fr *up_, P173 e_1082, P116 *y_1083, P173 *ix_1084);
static void f_own_index_1087(struct f_greenc_1fr *up_, P139 *r_1086);
static void f_member_1092(struct f_greenc_1fr *up_, P116 y_1088, rt_gstr arr_1089, rt_gstr i_1090, P139 *r_1091);
static void f_act_path_1095(struct f_greenc_1fr *up_, P116 y_1093, P139 *r_1094);
static void f_act_path_i_1099(struct f_greenc_1fr *up_, P116 y_1096, rt_gstr i_1097, P139 *r_1098);
static void f_entry_path_1103(struct f_greenc_1fr *up_, P116 y_1100, rt_gstr i_1101, P139 *r_1102);
static void f_declare_slot_1106(struct f_greenc_1fr *up_, rt_gstr ctype_name_1104, rt_gstr field_1105);
static void f_task_decl_1108(struct f_greenc_1fr *up_, P173 e_1107);
static void f_family_arg_struct_1109(struct f_greenc_1fr *up_);
static void f_family_bounds_1113(struct f_greenc_1fr *up_, P173 b_1110, P116 y_1111, P139 x_1112);
static void f_entry_family_slot_1118(struct f_greenc_1fr *up_, P116 y_1114, rt_gstr base_1115, rt_gstr i_1116, P139 *r_1117);
static void f_task_spec_1120(struct f_greenc_1fr *up_, P173 e_1119);
static void f_entry_decl_1122(struct f_greenc_1fr *up_, P173 e_1121);
static void f_task_body_1124(struct f_greenc_1fr *up_, P173 e_1123);
static void f_task_awaits_1127(struct f_greenc_1fr *up_, P173 decls_1125, P139 *aw_1126);
static void f_task_failure_1129(struct f_greenc_1fr *up_, P173 s_1128);
static void f_entry_sym_1133(struct f_greenc_1fr *up_, P173 e_1130, P116 *y_1131, P173 *ix_1132);
static void f_other_call_1138(struct f_greenc_1fr *up_, P173 e_1134, int is_stmt_1135, P121 *t_1136, P139 *r_1137);
static void f_other_attr_1143(struct f_greenc_1fr *up_, P173 e_1139, P116 y_1140, P121 *t_1141, P139 *r_1142);
static void f_member_attr_1147(struct f_greenc_1fr *up_, P173 e_1144, P121 *t_1145, P139 *r_1146);
static void f_task_builtin_1153(struct f_greenc_1fr *up_, rt_gstr name_1148, P173 args_1149, rt_int line_1150, P121 *t_1151, P139 *r_1152);
static void f_gen_accept_1155(struct f_greenc_1fr *up_, P173 s_1154);
static void f_member_slot_1159(struct f_greenc_1fr *up_, P116 y_1156, P173 s_1157, P139 *ent_1158);
static void f_gen_delay_ticks_1162(struct f_greenc_1fr *up_, P173 e_1160, P139 *r_1161);
static void f_gen_select_1164(struct f_greenc_1fr *up_, P173 s_1163);
static void f_family_range_1169(struct f_greenc_1fr *up_, P116 y_1165, P173 ix_1166, P139 *lo_1167, P139 *hi_1168);
static void f_task_statement_gen_1171(struct f_greenc_1fr *up_, P173 s_1170);
static P173 f_root_name_1173(struct f_greenc_1fr *up_, P173 e_1172);
static void f_check_pure_target_1176(struct f_greenc_1fr *up_, P173 target_1174, rt_int line_1175);
static int f_assigns_nonlocal_1179(struct f_greenc_1fr *up_, P173 d_1177, rt_gstr name_1178);
static int f_declares_1182(struct f_greenc_1fr *up_, P173 d_1180, rt_gstr name_1181);
static int f_scan_handlers_1186(struct f_greenc_1fr *up_, P173 h_1183, P173 d_1184, rt_gstr name_1185);
static int f_scan_assigns_1190(struct f_greenc_1fr *up_, P173 stmts_1187, P173 d_1188, rt_gstr name_1189);
static void f_check_call_rules_1193(struct f_greenc_1fr *up_, P173 e_1191, P116 y_1192);
static void f_generic_p_1195(struct f_greenc_1fr *up_, P173 *res_1194);
static void f_instantiation_1198(struct f_greenc_1fr *up_, P173 x_1196, P173 *res_1197);
static void f_generic_decl_1200(struct f_greenc_1fr *up_, P173 e_1199);
static int f_is_generic_name_1202(struct f_greenc_1fr *up_, rt_gstr n_1201);
static void f_attach_generic_body_1204(struct f_greenc_1fr *up_, P173 e_1203);
static void f_restore_generic_context_1207(struct f_greenc_1fr *up_, P173 body_node_1205, rt_int line_1206);
static P173 f_gactual_1211(struct f_greenc_1fr *up_, P173 args_1208, rt_int nth_1209, rt_gstr name_1210);
static void f_copy_node_1215(struct f_greenc_1fr *up_, P173 n_1212, P139 name_1213, P173 *r_1214);
static int f_matches_formal_1219(struct f_greenc_1fr *up_, P116 y_1216, rt_gstr name_1217, P116 fs_1218);
static void f_instantiate_1221(struct f_greenc_1fr *up_, P173 e_1220);
static void f_predef_type_1226(struct f_greenc_1fr *up_, rt_gstr name_1222, P121 t_1223, rt_gstr lo_1224, rt_gstr hi_1225);
static void f_predef_const_1230(struct f_greenc_1fr *up_, rt_gstr name_1227, P121 t_1228, rt_gstr code_text_1229);
static void f_predef_exc_1232(struct f_greenc_1fr *up_, rt_gstr name_1231);
static void f_predef_lit_1236(struct f_greenc_1fr *up_, rt_gstr name_1233, P121 t_1234, rt_int v_1235);
static void f_predefine_1237(struct f_greenc_1fr *up_);
static void f_translate_1239(struct f_greenc_1fr *up_, P173 u_1238);
static void f_print_program_1240(struct f_greenc_1fr *up_);
static void f_greenc_1(void);
static int ex_compile_error_107;
static P139 f_mk_221(struct f_greenc_1fr *up_, rt_gstr s_220) {
  struct f_mk_221fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_220 = cp_rt_gstr(s_220);
F->r_1242.lo = ((rt_int)1LL); F->r_1242.hi = ({ rt_gstr at1241 = F->s_220; at1241.hi >= at1241.lo ? at1241.hi - at1241.lo + 1 : (rt_int)0; });
F->r_1242.lo2 = 1; F->r_1242.hi2 = 1;
F->r_1242.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->r_1242));
memset(F->r_1242.p, 0xFF, (size_t)G_CNT(F->r_1242));
as_rt_gstr(&F->r_1242, F->s_220);
F->result_ = ({ rt_gstr *cell1244 = rt_alloc(sizeof(rt_gstr)); *cell1244 = cp_rt_gstr(F->r_1242); (P139)cell1244; });
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
(*F->res_223) = ({ rt_gstr *cell1245 = rt_alloc(sizeof(rt_gstr)); *cell1245 = cp_rt_gstr(cat_rt_gstr(F->base_222, rt_g_s2g(rt_str_of_int(G_NV(F->up->serial_124))))); (P139)cell1245; });
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
F->result_ = rt_range((rt_sub(((rt_int)(F->c_229) + 1), ((rt_int)32LL)) - 1), 0, 127);
goto ret_;
}
F->result_ = F->c_229;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_lower_s_232(struct f_greenc_1fr *up_, rt_gstr s_231) {
  struct f_lower_s_232fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_231 = cp_rt_gstr(s_231);
F->r_1246 = cp_rt_gstr(F->s_231);
{ rt_int lo1250 = ((rt_int)1LL), hi1251 = ({ rt_gstr at1248 = F->s_231; at1248.hi >= at1248.lo ? at1248.hi - at1248.lo + 1 : (rt_int)0; });
for (rt_int it1252 = lo1250; it1252 <= hi1251; it1252++) {
F->i_1249 = it1252;
if (((G_NV(({ rt_gstr ix1253 = F->r_1246; ix1253.p[rt_index(F->i_1249, ix1253.lo, ix1253.hi) - ix1253.lo]; })) >= 65) && (G_NV(({ rt_gstr ix1254 = F->r_1246; ix1254.p[rt_index(F->i_1249, ix1254.lo, ix1254.hi) - ix1254.lo]; })) <= 90))) {
(*({ rt_gstr *ix1255 = &(F->r_1246); &ix1255->p[rt_index(F->i_1249, ix1255->lo, ix1255->hi) - ix1255->lo]; })) = rt_range((rt_add(((rt_int)(G_NV(({ rt_gstr ix1256 = F->r_1246; ix1256.p[rt_index(F->i_1249, ix1256.lo, ix1256.hi) - ix1256.lo]; }))) + 1), ((rt_int)32LL)) - 1), 0, 127);
}
}
}
L_end_1247: ;
F->result_ = F->r_1246;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_upper_s_234(struct f_greenc_1fr *up_, rt_gstr s_233) {
  struct f_upper_s_234fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_233 = cp_rt_gstr(s_233);
F->r_1257 = cp_rt_gstr(F->s_233);
{ rt_int lo1261 = ((rt_int)1LL), hi1262 = ({ rt_gstr at1259 = F->s_233; at1259.hi >= at1259.lo ? at1259.hi - at1259.lo + 1 : (rt_int)0; });
for (rt_int it1263 = lo1261; it1263 <= hi1262; it1263++) {
F->i_1260 = it1263;
(*({ rt_gstr *ix1264 = &(F->r_1257); &ix1264->p[rt_index(F->i_1260, ix1264->lo, ix1264->hi) - ix1264->lo]; })) = f_upper_230(F->up, G_NV(({ rt_gstr ix1266 = F->r_1257; ix1266.p[rt_index(F->i_1260, ix1266.lo, ix1266.hi) - ix1266.lo]; })));
}
}
L_end_1258: ;
F->result_ = F->r_1257;
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
F->result_ = ({ R126 *cell1267 = rt_alloc(sizeof(R126)); *cell1267 = cp_R126(({ R126 ag1268; ag1268.head_ = NULL; ag1268.tail_ = NULL; ag1268; })); (P125)cell1267; });
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
F->l_1269 = NULL;
F->l_1269 = ({ R151 *cell1270 = rt_alloc(sizeof(R151)); *cell1270 = cp_R151(({ R151 ag1271; ag1271.s_ = NULL; ag1271.next_ = NULL; ag1271; })); (P150)cell1270; });
(*(P150)rt_nil_check(F->l_1269)).s_ = f_mk_221(F->up, F->s_245);
if (((*(P125)rt_nil_check(F->b_244)).tail_ == NULL)) {
(*(P125)rt_nil_check(F->b_244)).head_ = F->l_1269;
} else {
(*(P150)rt_nil_check((*(P125)rt_nil_check(F->b_244)).tail_)).next_ = F->l_1269;
}
(*(P125)rt_nil_check(F->b_244)).tail_ = F->l_1269;
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
F->l_1272 = NULL;
F->l_1272 = (*(P125)rt_nil_check(F->b_249)).head_;
while ((F->l_1272 != NULL)) {
rt_g_put(rt_g_g2s((*(P139)rt_nil_check((*(P150)rt_nil_check(F->l_1272)).s_))));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
F->l_1272 = (*(P150)rt_nil_check(F->l_1272)).next_;
}
L_end_1273: ;
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
{ rt_int sel1275 = ({ rt_gstr at1274 = F->w_254; at1274.hi >= at1274.lo ? at1274.hi - at1274.lo + 1 : (rt_int)0; });
if (0 || sel1275 == ((rt_int)2LL)) {
F->result_ = ((((((eq_rt_gstr(F->w_254, rt_g_lit("AT", 2)) || eq_rt_gstr(F->w_254, rt_g_lit("DO", 2))) || eq_rt_gstr(F->w_254, rt_g_lit("IF", 2))) || eq_rt_gstr(F->w_254, rt_g_lit("IN", 2))) || eq_rt_gstr(F->w_254, rt_g_lit("IS", 2))) || eq_rt_gstr(F->w_254, rt_g_lit("OF", 2))) || eq_rt_gstr(F->w_254, rt_g_lit("OR", 2)));
goto ret_;
} else if (0 || sel1275 == ((rt_int)3LL)) {
F->result_ = (((((((((eq_rt_gstr(F->w_254, rt_g_lit("ALL", 3)) || eq_rt_gstr(F->w_254, rt_g_lit("AND", 3))) || eq_rt_gstr(F->w_254, rt_g_lit("END", 3))) || eq_rt_gstr(F->w_254, rt_g_lit("FOR", 3))) || eq_rt_gstr(F->w_254, rt_g_lit("MOD", 3))) || eq_rt_gstr(F->w_254, rt_g_lit("NEW", 3))) || eq_rt_gstr(F->w_254, rt_g_lit("NOT", 3))) || eq_rt_gstr(F->w_254, rt_g_lit("OUT", 3))) || eq_rt_gstr(F->w_254, rt_g_lit("USE", 3))) || eq_rt_gstr(F->w_254, rt_g_lit("XOR", 3)));
goto ret_;
} else if (0 || sel1275 == ((rt_int)4LL)) {
F->result_ = ((((((((((eq_rt_gstr(F->w_254, rt_g_lit("BODY", 4)) || eq_rt_gstr(F->w_254, rt_g_lit("CASE", 4))) || eq_rt_gstr(F->w_254, rt_g_lit("ELSE", 4))) || eq_rt_gstr(F->w_254, rt_g_lit("EXIT", 4))) || eq_rt_gstr(F->w_254, rt_g_lit("GOTO", 4))) || eq_rt_gstr(F->w_254, rt_g_lit("LOOP", 4))) || eq_rt_gstr(F->w_254, rt_g_lit("NULL", 4))) || eq_rt_gstr(F->w_254, rt_g_lit("TASK", 4))) || eq_rt_gstr(F->w_254, rt_g_lit("THEN", 4))) || eq_rt_gstr(F->w_254, rt_g_lit("TYPE", 4))) || eq_rt_gstr(F->w_254, rt_g_lit("WHEN", 4)));
goto ret_;
} else if (0 || sel1275 == ((rt_int)5LL)) {
F->result_ = (((((((((eq_rt_gstr(F->w_254, rt_g_lit("ABORT", 5)) || eq_rt_gstr(F->w_254, rt_g_lit("ARRAY", 5))) || eq_rt_gstr(F->w_254, rt_g_lit("BEGIN", 5))) || eq_rt_gstr(F->w_254, rt_g_lit("DELAY", 5))) || eq_rt_gstr(F->w_254, rt_g_lit("DELTA", 5))) || eq_rt_gstr(F->w_254, rt_g_lit("ELSIF", 5))) || eq_rt_gstr(F->w_254, rt_g_lit("ENTRY", 5))) || eq_rt_gstr(F->w_254, rt_g_lit("RAISE", 5))) || eq_rt_gstr(F->w_254, rt_g_lit("RANGE", 5))) || eq_rt_gstr(F->w_254, rt_g_lit("WHILE", 5)));
goto ret_;
} else if (0 || sel1275 == ((rt_int)6LL)) {
F->result_ = ((((((((eq_rt_gstr(F->w_254, rt_g_lit("ACCEPT", 6)) || eq_rt_gstr(F->w_254, rt_g_lit("ACCESS", 6))) || eq_rt_gstr(F->w_254, rt_g_lit("ASSERT", 6))) || eq_rt_gstr(F->w_254, rt_g_lit("DIGITS", 6))) || eq_rt_gstr(F->w_254, rt_g_lit("OTHERS", 6))) || eq_rt_gstr(F->w_254, rt_g_lit("PRAGMA", 6))) || eq_rt_gstr(F->w_254, rt_g_lit("RECORD", 6))) || eq_rt_gstr(F->w_254, rt_g_lit("RETURN", 6))) || eq_rt_gstr(F->w_254, rt_g_lit("SELECT", 6)));
goto ret_;
} else if (0 || sel1275 == ((rt_int)7LL)) {
F->result_ = (((((((eq_rt_gstr(F->w_254, rt_g_lit("DECLARE", 7)) || eq_rt_gstr(F->w_254, rt_g_lit("GENERIC", 7))) || eq_rt_gstr(F->w_254, rt_g_lit("PACKAGE", 7))) || eq_rt_gstr(F->w_254, rt_g_lit("PACKING", 7))) || eq_rt_gstr(F->w_254, rt_g_lit("PRIVATE", 7))) || eq_rt_gstr(F->w_254, rt_g_lit("RENAMES", 7))) || eq_rt_gstr(F->w_254, rt_g_lit("REVERSE", 7))) || eq_rt_gstr(F->w_254, rt_g_lit("SUBTYPE", 7)));
goto ret_;
} else if (0 || sel1275 == ((rt_int)8LL)) {
F->result_ = (((eq_rt_gstr(F->w_254, rt_g_lit("CONSTANT", 8)) || eq_rt_gstr(F->w_254, rt_g_lit("FUNCTION", 8))) || eq_rt_gstr(F->w_254, rt_g_lit("INITIATE", 8))) || eq_rt_gstr(F->w_254, rt_g_lit("SEPARATE", 8)));
goto ret_;
} else if (0 || sel1275 == ((rt_int)9LL)) {
F->result_ = (eq_rt_gstr(F->w_254, rt_g_lit("EXCEPTION", 9)) || eq_rt_gstr(F->w_254, rt_g_lit("PROCEDURE", 9)));
goto ret_;
} else if (0 || sel1275 == ((rt_int)10LL)) {
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
(*({ A108 *ix1276 = &(F->up->toks_111); &ix1276->p[rt_index(G_NV(F->up->ntoks_112), ix1276->lo, ix1276->hi) - ix1276->lo]; })) = ({ R110 *cell1277 = rt_alloc(sizeof(R110)); *cell1277 = cp_R110(({ R110 ag1278; ag1278.kind_ = F->kind_256; ag1278.line_ = G_NV(F->up->src_line_114); ag1278.ival_ = F->ival_258; ag1278.s_ = NULL; ag1278; })); (P109)cell1277; });
(*(P109)rt_nil_check((*({ A108 *ix1279 = &(F->up->toks_111); &ix1279->p[rt_index(G_NV(F->up->ntoks_112), ix1279->lo, ix1279->hi) - ix1279->lo]; })))).s_ = f_mk_221(F->up, F->s_257);
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
F->d_1280 = INT64_MIN;
if (f_is_digit_228(F->up, F->c_262)) {
F->d_1280 = rt_sub(((rt_int)(F->c_262) + 1), ((rt_int)(48) + 1));
} else if (((f_upper_230(F->up, F->c_262) >= 65) && (f_upper_230(F->up, F->c_262) <= 70))) {
F->d_1280 = rt_add(rt_sub(((rt_int)(f_upper_230(F->up, F->c_262)) + 1), ((rt_int)(65) + 1)), ((rt_int)10LL));
} else {
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
}
if ((G_NV(F->d_1280) >= F->base_263)) {
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
}
F->result_ = G_NV(F->d_1280);
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
F->i_1281 = INT64_MIN;
F->i_1281 = ((rt_int)1LL);
F->j_1282 = INT64_MIN;
F->j_1282 = ((rt_int)0LL);
F->n_1283 = INT64_MIN;
F->n_1283 = ({ rt_gstr at1284 = F->line_269; at1284.hi >= at1284.lo ? at1284.hi - at1284.lo + 1 : (rt_int)0; });
F->c_1285 = INT_MIN;
F->quote_1286 = INT_MIN;
F->v_1287 = INT64_MIN;
F->d_1288 = INT64_MIN;
F->buf_1289.lo = ((rt_int)1LL); F->buf_1289.hi = ((rt_int)1000LL);
F->buf_1289.lo2 = 1; F->buf_1289.hi2 = 1;
F->buf_1289.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->buf_1289));
memset(F->buf_1289.p, 0xFF, (size_t)G_CNT(F->buf_1289));
F->bl_1291 = INT64_MIN;
while ((G_NV(F->i_1281) <= G_NV(F->n_1283))) {
F->c_1285 = rt_range(G_NV(({ rt_gstr ix1293 = F->line_269; ix1293.p[rt_index(G_NV(F->i_1281), ix1293.lo, ix1293.hi) - ix1293.lo]; })), 0, 127);
if (((((G_NV(F->c_1285) == 32) || (G_NV(F->c_1285) == 9)) || (G_NV(F->c_1285) == 13)) || (G_NV(F->c_1285) == 12))) {
F->i_1281 = rt_add(G_NV(F->i_1281), ((rt_int)1LL));
} else if ((((G_NV(F->c_1285) == 45) && (G_NV(F->i_1281) < G_NV(F->n_1283))) && (G_NV(({ rt_gstr ix1294 = F->line_269; ix1294.p[rt_index(rt_add(G_NV(F->i_1281), ((rt_int)1LL)), ix1294.lo, ix1294.hi) - ix1294.lo]; })) == 45))) {
F->i_1281 = rt_add(G_NV(F->n_1283), ((rt_int)1LL));
} else if (f_is_letter_226(F->up, G_NV(F->c_1285))) {
F->j_1282 = G_NV(F->i_1281);
F->bl_1291 = ((rt_int)0LL);
while (((G_NV(F->j_1282) <= G_NV(F->n_1283)) && ((f_is_letter_226(F->up, G_NV(({ rt_gstr ix1297 = F->line_269; ix1297.p[rt_index(G_NV(F->j_1282), ix1297.lo, ix1297.hi) - ix1297.lo]; }))) || f_is_digit_228(F->up, G_NV(({ rt_gstr ix1299 = F->line_269; ix1299.p[rt_index(G_NV(F->j_1282), ix1299.lo, ix1299.hi) - ix1299.lo]; })))) || (G_NV(({ rt_gstr ix1300 = F->line_269; ix1300.p[rt_index(G_NV(F->j_1282), ix1300.lo, ix1300.hi) - ix1300.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1301 = F->line_269; ix1301.p[rt_index(G_NV(F->j_1282), ix1301.lo, ix1301.hi) - ix1301.lo]; })) == 95)) {
if (((G_NV(F->j_1282) == G_NV(F->n_1283)) || (!(f_is_letter_226(F->up, G_NV(({ rt_gstr ix1303 = F->line_269; ix1303.p[rt_index(rt_add(G_NV(F->j_1282), ((rt_int)1LL)), ix1303.lo, ix1303.hi) - ix1303.lo]; }))) || f_is_digit_228(F->up, G_NV(({ rt_gstr ix1305 = F->line_269; ix1305.p[rt_index(rt_add(G_NV(F->j_1282), ((rt_int)1LL)), ix1305.lo, ix1305.hi) - ix1305.lo]; }))))))) {
f_fail_242(F->up, G_NV(F->up->src_line_114), rt_g_lit("an underscore in an identifier stands between two letters or digits (RM79 2.3)", 78));
}
}
F->bl_1291 = rt_add(G_NV(F->bl_1291), ((rt_int)1LL));
(*({ rt_gstr *ix1306 = &(F->buf_1289); &ix1306->p[rt_index(G_NV(F->bl_1291), ix1306->lo, ix1306->hi) - ix1306->lo]; })) = f_upper_230(F->up, G_NV(({ rt_gstr ix1308 = F->line_269; ix1308.p[rt_index(G_NV(F->j_1282), ix1308.lo, ix1308.hi) - ix1308.lo]; })));
F->j_1282 = rt_add(G_NV(F->j_1282), ((rt_int)1LL));
}
L_end_1295: ;
if (f_is_reserved_255(F->up, ({ rt_gstr sl1310 = F->buf_1289; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1291); if (l_ <= h_) { rt_index(l_, sl1310.lo, sl1310.hi); rt_index(h_, sl1310.lo, sl1310.hi); } sl1310.p += l_ - sl1310.lo; sl1310.lo = l_; sl1310.hi = h_; sl1310; }))) {
f_add_token_259(F->up, ((rt_int)2LL), ({ rt_gstr sl1312 = F->buf_1289; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1291); if (l_ <= h_) { rt_index(l_, sl1312.lo, sl1312.hi); rt_index(h_, sl1312.lo, sl1312.hi); } sl1312.p += l_ - sl1312.lo; sl1312.lo = l_; sl1312.hi = h_; sl1312; }), ((rt_int)0LL));
} else {
f_add_token_259(F->up, ((rt_int)1LL), ({ rt_gstr sl1314 = F->buf_1289; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1291); if (l_ <= h_) { rt_index(l_, sl1314.lo, sl1314.hi); rt_index(h_, sl1314.lo, sl1314.hi); } sl1314.p += l_ - sl1314.lo; sl1314.lo = l_; sl1314.hi = h_; sl1314; }), ((rt_int)0LL));
}
F->i_1281 = G_NV(F->j_1282);
} else if (f_is_digit_228(F->up, G_NV(F->c_1285))) {
F->j_1282 = G_NV(F->i_1281);
F->v_1287 = ((rt_int)0LL);
F->bl_1291 = ((rt_int)0LL);
while (((G_NV(F->j_1282) <= G_NV(F->n_1283)) && (f_is_digit_228(F->up, G_NV(({ rt_gstr ix1317 = F->line_269; ix1317.p[rt_index(G_NV(F->j_1282), ix1317.lo, ix1317.hi) - ix1317.lo]; }))) || (G_NV(({ rt_gstr ix1318 = F->line_269; ix1318.p[rt_index(G_NV(F->j_1282), ix1318.lo, ix1318.hi) - ix1318.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1319 = F->line_269; ix1319.p[rt_index(G_NV(F->j_1282), ix1319.lo, ix1319.hi) - ix1319.lo]; })) == 95)) {
if (((G_NV(F->j_1282) == G_NV(F->n_1283)) || (!f_is_digit_228(F->up, G_NV(({ rt_gstr ix1321 = F->line_269; ix1321.p[rt_index(rt_add(G_NV(F->j_1282), ((rt_int)1LL)), ix1321.lo, ix1321.hi) - ix1321.lo]; })))))) {
f_fail_242(F->up, G_NV(F->up->src_line_114), rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
} else {
f_accumulate_268(F->up, &F->v_1287, ((rt_int)10LL), rt_sub(((rt_int)(G_NV(({ rt_gstr ix1323 = F->line_269; ix1323.p[rt_index(G_NV(F->j_1282), ix1323.lo, ix1323.hi) - ix1323.lo]; }))) + 1), ((rt_int)(48) + 1)));
F->bl_1291 = rt_add(G_NV(F->bl_1291), ((rt_int)1LL));
(*({ rt_gstr *ix1324 = &(F->buf_1289); &ix1324->p[rt_index(G_NV(F->bl_1291), ix1324->lo, ix1324->hi) - ix1324->lo]; })) = G_NV(({ rt_gstr ix1325 = F->line_269; ix1325.p[rt_index(G_NV(F->j_1282), ix1325.lo, ix1325.hi) - ix1325.lo]; }));
}
F->j_1282 = rt_add(G_NV(F->j_1282), ((rt_int)1LL));
}
L_end_1315: ;
if (((G_NV(F->j_1282) < G_NV(F->n_1283)) && ((G_NV(({ rt_gstr ix1326 = F->line_269; ix1326.p[rt_index(G_NV(F->j_1282), ix1326.lo, ix1326.hi) - ix1326.lo]; })) == 35) || ((G_NV(({ rt_gstr ix1327 = F->line_269; ix1327.p[rt_index(G_NV(F->j_1282), ix1327.lo, ix1327.hi) - ix1327.lo]; })) == 58) && (f_is_digit_228(F->up, G_NV(({ rt_gstr ix1329 = F->line_269; ix1329.p[rt_index(rt_add(G_NV(F->j_1282), ((rt_int)1LL)), ix1329.lo, ix1329.hi) - ix1329.lo]; }))) || f_is_letter_226(F->up, G_NV(({ rt_gstr ix1331 = F->line_269; ix1331.p[rt_index(rt_add(G_NV(F->j_1282), ((rt_int)1LL)), ix1331.lo, ix1331.hi) - ix1331.lo]; })))))))) {
{
F->base_1333 = INT64_MIN;
F->base_1333 = G_NV(F->v_1287);
if (((G_NV(F->base_1333) < ((rt_int)2LL)) || (G_NV(F->base_1333) > ((rt_int)16LL)))) {
f_fail_242(F->up, G_NV(F->up->src_line_114), rt_g_lit("the base of a number is between 2 and 16 (RM79 2.4)", 51));
}
F->v_1287 = ((rt_int)0LL);
F->j_1282 = rt_add(G_NV(F->j_1282), ((rt_int)1LL));
if (((G_NV(F->j_1282) > G_NV(F->n_1283)) || (f_digit_in_264(F->up, G_NV(({ rt_gstr ix1335 = F->line_269; ix1335.p[rt_index(G_NV(F->j_1282), ix1335.lo, ix1335.hi) - ix1335.lo]; })), ((rt_int)16LL)) < ((rt_int)0LL)))) {
f_fail_242(F->up, G_NV(F->up->src_line_114), rt_g_lit("a based number needs digits (RM79 2.4)", 38));
}
while (((G_NV(F->j_1282) <= G_NV(F->n_1283)) && ((f_is_letter_226(F->up, G_NV(({ rt_gstr ix1338 = F->line_269; ix1338.p[rt_index(G_NV(F->j_1282), ix1338.lo, ix1338.hi) - ix1338.lo]; }))) || f_is_digit_228(F->up, G_NV(({ rt_gstr ix1340 = F->line_269; ix1340.p[rt_index(G_NV(F->j_1282), ix1340.lo, ix1340.hi) - ix1340.lo]; })))) || (G_NV(({ rt_gstr ix1341 = F->line_269; ix1341.p[rt_index(G_NV(F->j_1282), ix1341.lo, ix1341.hi) - ix1341.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1342 = F->line_269; ix1342.p[rt_index(G_NV(F->j_1282), ix1342.lo, ix1342.hi) - ix1342.lo]; })) == 95)) {
if (((G_NV(F->j_1282) == G_NV(F->n_1283)) || (f_digit_in_264(F->up, G_NV(({ rt_gstr ix1344 = F->line_269; ix1344.p[rt_index(rt_add(G_NV(F->j_1282), ((rt_int)1LL)), ix1344.lo, ix1344.hi) - ix1344.lo]; })), ((rt_int)16LL)) < ((rt_int)0LL)))) {
f_fail_242(F->up, G_NV(F->up->src_line_114), rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
} else {
F->d_1288 = f_digit_in_264(F->up, G_NV(({ rt_gstr ix1346 = F->line_269; ix1346.p[rt_index(G_NV(F->j_1282), ix1346.lo, ix1346.hi) - ix1346.lo]; })), G_NV(F->base_1333));
if ((G_NV(F->d_1288) < ((rt_int)0LL))) {
f_fail_242(F->up, G_NV(F->up->src_line_114), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("digit ", 6), one_rt_gstr(G_NV(({ rt_gstr ix1348 = F->line_269; ix1348.p[rt_index(G_NV(F->j_1282), ix1348.lo, ix1348.hi) - ix1348.lo]; })))), rt_g_lit(" is not valid in base ", 22)), rt_g_s2g(rt_str_of_int(G_NV(F->base_1333)))), rt_g_lit(" (RM79 2.4)", 11)));
}
f_accumulate_268(F->up, &F->v_1287, G_NV(F->base_1333), G_NV(F->d_1288));
}
F->j_1282 = rt_add(G_NV(F->j_1282), ((rt_int)1LL));
}
L_end_1336: ;

}
L_end_1332: ;
f_add_token_259(F->up, ((rt_int)4LL), rt_g_s2g(rt_str_of_int(G_NV(F->v_1287))), G_NV(F->v_1287));
} else if (((G_NV(F->j_1282) < G_NV(F->n_1283)) && ((G_NV(({ rt_gstr ix1349 = F->line_269; ix1349.p[rt_index(G_NV(F->j_1282), ix1349.lo, ix1349.hi) - ix1349.lo]; })) == 46) && f_is_digit_228(F->up, G_NV(({ rt_gstr ix1351 = F->line_269; ix1351.p[rt_index(rt_add(G_NV(F->j_1282), ((rt_int)1LL)), ix1351.lo, ix1351.hi) - ix1351.lo]; })))))) {
F->bl_1291 = rt_add(G_NV(F->bl_1291), ((rt_int)1LL));
(*({ rt_gstr *ix1352 = &(F->buf_1289); &ix1352->p[rt_index(G_NV(F->bl_1291), ix1352->lo, ix1352->hi) - ix1352->lo]; })) = 46;
F->j_1282 = rt_add(G_NV(F->j_1282), ((rt_int)1LL));
while (((G_NV(F->j_1282) <= G_NV(F->n_1283)) && (f_is_digit_228(F->up, G_NV(({ rt_gstr ix1355 = F->line_269; ix1355.p[rt_index(G_NV(F->j_1282), ix1355.lo, ix1355.hi) - ix1355.lo]; }))) || (G_NV(({ rt_gstr ix1356 = F->line_269; ix1356.p[rt_index(G_NV(F->j_1282), ix1356.lo, ix1356.hi) - ix1356.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1357 = F->line_269; ix1357.p[rt_index(G_NV(F->j_1282), ix1357.lo, ix1357.hi) - ix1357.lo]; })) != 95)) {
F->bl_1291 = rt_add(G_NV(F->bl_1291), ((rt_int)1LL));
(*({ rt_gstr *ix1358 = &(F->buf_1289); &ix1358->p[rt_index(G_NV(F->bl_1291), ix1358->lo, ix1358->hi) - ix1358->lo]; })) = G_NV(({ rt_gstr ix1359 = F->line_269; ix1359.p[rt_index(G_NV(F->j_1282), ix1359.lo, ix1359.hi) - ix1359.lo]; }));
} else if (((G_NV(F->j_1282) == G_NV(F->n_1283)) || (!f_is_digit_228(F->up, G_NV(({ rt_gstr ix1361 = F->line_269; ix1361.p[rt_index(rt_add(G_NV(F->j_1282), ((rt_int)1LL)), ix1361.lo, ix1361.hi) - ix1361.lo]; })))))) {
f_fail_242(F->up, G_NV(F->up->src_line_114), rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
F->j_1282 = rt_add(G_NV(F->j_1282), ((rt_int)1LL));
}
L_end_1353: ;
if (f_exponent_ahead_273(F->up, F->line_269, G_NV(F->j_1282))) {
f_exponent_278(F->up, F->line_269, &F->j_1282, &F->buf_1289, &F->bl_1291);

}
f_add_token_259(F->up, ((rt_int)5LL), ({ rt_gstr sl1363 = F->buf_1289; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1291); if (l_ <= h_) { rt_index(l_, sl1363.lo, sl1363.hi); rt_index(h_, sl1363.lo, sl1363.hi); } sl1363.p += l_ - sl1363.lo; sl1363.lo = l_; sl1363.hi = h_; sl1363; }), ((rt_int)0LL));
} else if (f_exponent_ahead_273(F->up, F->line_269, G_NV(F->j_1282))) {
f_exponent_278(F->up, F->line_269, &F->j_1282, &F->buf_1289, &F->bl_1291);

f_add_token_259(F->up, ((rt_int)5LL), ({ rt_gstr sl1365 = F->buf_1289; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1291); if (l_ <= h_) { rt_index(l_, sl1365.lo, sl1365.hi); rt_index(h_, sl1365.lo, sl1365.hi); } sl1365.p += l_ - sl1365.lo; sl1365.lo = l_; sl1365.hi = h_; sl1365; }), ((rt_int)0LL));
} else {
f_add_token_259(F->up, ((rt_int)4LL), ({ rt_gstr sl1367 = F->buf_1289; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1291); if (l_ <= h_) { rt_index(l_, sl1367.lo, sl1367.hi); rt_index(h_, sl1367.lo, sl1367.hi); } sl1367.p += l_ - sl1367.lo; sl1367.lo = l_; sl1367.hi = h_; sl1367; }), G_NV(F->v_1287));
}
F->i_1281 = G_NV(F->j_1282);
} else if (((G_NV(F->c_1285) == 34) || (G_NV(F->c_1285) == 37))) {
F->quote_1286 = rt_range(G_NV(F->c_1285), 0, 127);
F->j_1282 = rt_add(G_NV(F->i_1281), ((rt_int)1LL));
F->bl_1291 = ((rt_int)0LL);
for (;;) {
if ((G_NV(F->j_1282) > G_NV(F->n_1283))) {
f_fail_242(F->up, G_NV(F->up->src_line_114), rt_g_lit("unterminated string", 19));
}
if ((G_NV(({ rt_gstr ix1369 = F->line_269; ix1369.p[rt_index(G_NV(F->j_1282), ix1369.lo, ix1369.hi) - ix1369.lo]; })) == G_NV(F->quote_1286))) {
if (((G_NV(F->j_1282) == G_NV(F->n_1283)) || (G_NV(({ rt_gstr ix1370 = F->line_269; ix1370.p[rt_index(rt_add(G_NV(F->j_1282), ((rt_int)1LL)), ix1370.lo, ix1370.hi) - ix1370.lo]; })) != G_NV(F->quote_1286)))) {
goto L_end_1368;
}
F->j_1282 = rt_add(G_NV(F->j_1282), ((rt_int)1LL));
} else if (((G_NV(F->quote_1286) == 37) && (G_NV(({ rt_gstr ix1371 = F->line_269; ix1371.p[rt_index(G_NV(F->j_1282), ix1371.lo, ix1371.hi) - ix1371.lo]; })) == 34))) {
f_fail_242(F->up, G_NV(F->up->src_line_114), rt_g_lit("a string bracketed by % cannot contain a quote (RM79 2.1)", 57));
}
F->bl_1291 = rt_add(G_NV(F->bl_1291), ((rt_int)1LL));
(*({ rt_gstr *ix1372 = &(F->buf_1289); &ix1372->p[rt_index(G_NV(F->bl_1291), ix1372->lo, ix1372->hi) - ix1372->lo]; })) = G_NV(({ rt_gstr ix1373 = F->line_269; ix1373.p[rt_index(G_NV(F->j_1282), ix1373.lo, ix1373.hi) - ix1373.lo]; }));
F->j_1282 = rt_add(G_NV(F->j_1282), ((rt_int)1LL));
}
L_end_1368: ;
f_add_token_259(F->up, ((rt_int)6LL), ({ rt_gstr sl1375 = F->buf_1289; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1291); if (l_ <= h_) { rt_index(l_, sl1375.lo, sl1375.hi); rt_index(h_, sl1375.lo, sl1375.hi); } sl1375.p += l_ - sl1375.lo; sl1375.lo = l_; sl1375.hi = h_; sl1375; }), ((rt_int)0LL));
F->i_1281 = rt_add(G_NV(F->j_1282), ((rt_int)1LL));
} else {
{
F->two_1377.lo = ((rt_int)1LL); F->two_1377.hi = ((rt_int)3LL);
F->two_1377.lo2 = 1; F->two_1377.hi2 = 1;
F->two_1377.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->two_1377));
memset(F->two_1377.p, 0xFF, (size_t)G_CNT(F->two_1377));
as_rt_gstr(&F->two_1377, rt_g_lit("   ", 3));
(*({ rt_gstr *ix1379 = &(F->two_1377); &ix1379->p[rt_index(((rt_int)1LL), ix1379->lo, ix1379->hi) - ix1379->lo]; })) = G_NV(F->c_1285);
if ((G_NV(F->i_1281) < G_NV(F->n_1283))) {
(*({ rt_gstr *ix1380 = &(F->two_1377); &ix1380->p[rt_index(((rt_int)2LL), ix1380->lo, ix1380->hi) - ix1380->lo]; })) = G_NV(({ rt_gstr ix1381 = F->line_269; ix1381.p[rt_index(rt_add(G_NV(F->i_1281), ((rt_int)1LL)), ix1381.lo, ix1381.hi) - ix1381.lo]; }));
}
if ((rt_add(G_NV(F->i_1281), ((rt_int)1LL)) < G_NV(F->n_1283))) {
(*({ rt_gstr *ix1382 = &(F->two_1377); &ix1382->p[rt_index(((rt_int)3LL), ix1382->lo, ix1382->hi) - ix1382->lo]; })) = G_NV(({ rt_gstr ix1383 = F->line_269; ix1383.p[rt_index(rt_add(G_NV(F->i_1281), ((rt_int)2LL)), ix1383.lo, ix1383.hi) - ix1383.lo]; }));
}
if (eq_rt_gstr(F->two_1377, rt_g_lit(":=:", 3))) {
f_add_token_259(F->up, ((rt_int)3LL), rt_g_lit(":=:", 3), ((rt_int)0LL));
F->i_1281 = rt_add(G_NV(F->i_1281), ((rt_int)3LL));
} else if ((((((((((eq_rt_gstr(({ rt_gstr sl1384 = F->two_1377; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1384.lo, sl1384.hi); rt_index(h_, sl1384.lo, sl1384.hi); } sl1384.p += l_ - sl1384.lo; sl1384.lo = l_; sl1384.hi = h_; sl1384; }), rt_g_lit(":=", 2)) || eq_rt_gstr(({ rt_gstr sl1385 = F->two_1377; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1385.lo, sl1385.hi); rt_index(h_, sl1385.lo, sl1385.hi); } sl1385.p += l_ - sl1385.lo; sl1385.lo = l_; sl1385.hi = h_; sl1385; }), rt_g_lit("=:", 2))) || eq_rt_gstr(({ rt_gstr sl1386 = F->two_1377; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1386.lo, sl1386.hi); rt_index(h_, sl1386.lo, sl1386.hi); } sl1386.p += l_ - sl1386.lo; sl1386.lo = l_; sl1386.hi = h_; sl1386; }), rt_g_lit("=>", 2))) || eq_rt_gstr(({ rt_gstr sl1387 = F->two_1377; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1387.lo, sl1387.hi); rt_index(h_, sl1387.lo, sl1387.hi); } sl1387.p += l_ - sl1387.lo; sl1387.lo = l_; sl1387.hi = h_; sl1387; }), rt_g_lit("..", 2))) || eq_rt_gstr(({ rt_gstr sl1388 = F->two_1377; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1388.lo, sl1388.hi); rt_index(h_, sl1388.lo, sl1388.hi); } sl1388.p += l_ - sl1388.lo; sl1388.lo = l_; sl1388.hi = h_; sl1388; }), rt_g_lit("**", 2))) || eq_rt_gstr(({ rt_gstr sl1389 = F->two_1377; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1389.lo, sl1389.hi); rt_index(h_, sl1389.lo, sl1389.hi); } sl1389.p += l_ - sl1389.lo; sl1389.lo = l_; sl1389.hi = h_; sl1389; }), rt_g_lit("/=", 2))) || eq_rt_gstr(({ rt_gstr sl1390 = F->two_1377; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1390.lo, sl1390.hi); rt_index(h_, sl1390.lo, sl1390.hi); } sl1390.p += l_ - sl1390.lo; sl1390.lo = l_; sl1390.hi = h_; sl1390; }), rt_g_lit("<=", 2))) || eq_rt_gstr(({ rt_gstr sl1391 = F->two_1377; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1391.lo, sl1391.hi); rt_index(h_, sl1391.lo, sl1391.hi); } sl1391.p += l_ - sl1391.lo; sl1391.lo = l_; sl1391.hi = h_; sl1391; }), rt_g_lit(">=", 2))) || eq_rt_gstr(({ rt_gstr sl1392 = F->two_1377; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1392.lo, sl1392.hi); rt_index(h_, sl1392.lo, sl1392.hi); } sl1392.p += l_ - sl1392.lo; sl1392.lo = l_; sl1392.hi = h_; sl1392; }), rt_g_lit("<<", 2))) || eq_rt_gstr(({ rt_gstr sl1393 = F->two_1377; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1393.lo, sl1393.hi); rt_index(h_, sl1393.lo, sl1393.hi); } sl1393.p += l_ - sl1393.lo; sl1393.lo = l_; sl1393.hi = h_; sl1393; }), rt_g_lit(">>", 2)))) {
f_add_token_259(F->up, ((rt_int)3LL), ({ rt_gstr sl1395 = F->two_1377; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1395.lo, sl1395.hi); rt_index(h_, sl1395.lo, sl1395.hi); } sl1395.p += l_ - sl1395.lo; sl1395.lo = l_; sl1395.hi = h_; sl1395; }), ((rt_int)0LL));
F->i_1281 = rt_add(G_NV(F->i_1281), ((rt_int)2LL));
} else if ((G_NV(F->c_1285) == 33)) {
f_add_token_259(F->up, ((rt_int)3LL), rt_g_lit("|", 1), ((rt_int)0LL));
F->i_1281 = rt_add(G_NV(F->i_1281), ((rt_int)1LL));
} else if (((((((((((((((((G_NV(F->c_1285) == 38) || (G_NV(F->c_1285) == 39)) || (G_NV(F->c_1285) == 40)) || (G_NV(F->c_1285) == 41)) || (G_NV(F->c_1285) == 42)) || (G_NV(F->c_1285) == 43)) || (G_NV(F->c_1285) == 44)) || (G_NV(F->c_1285) == 45)) || (G_NV(F->c_1285) == 46)) || (G_NV(F->c_1285) == 47)) || (G_NV(F->c_1285) == 58)) || (G_NV(F->c_1285) == 59)) || (G_NV(F->c_1285) == 60)) || (G_NV(F->c_1285) == 61)) || (G_NV(F->c_1285) == 62)) || (G_NV(F->c_1285) == 124))) {
f_add_token_259(F->up, ((rt_int)3LL), ({ rt_gstr sl1397 = F->two_1377; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)1LL); if (l_ <= h_) { rt_index(l_, sl1397.lo, sl1397.hi); rt_index(h_, sl1397.lo, sl1397.hi); } sl1397.p += l_ - sl1397.lo; sl1397.lo = l_; sl1397.hi = h_; sl1397; }), ((rt_int)0LL));
F->i_1281 = rt_add(G_NV(F->i_1281), ((rt_int)1LL));
if ((G_NV(F->c_1285) == 59)) {
f_check_include_285(F->up);
}
} else {
f_fail_242(F->up, G_NV(F->up->src_line_114), rt_g_lit("unexpected character", 20));
}

}
L_end_1376: ;
}
}
L_end_1292: ;
ret_:

  return;
}

static int f_exponent_ahead_273(struct f_greenc_1fr *up_, rt_gstr line_271, rt_int j_272) {
  struct f_exponent_ahead_273fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_271 = cp_rt_gstr(line_271);
F->j_272 = j_272;
if ((F->j_272 >= ({ rt_gstr at1398 = F->line_271; at1398.hi >= at1398.lo ? at1398.hi - at1398.lo + 1 : (rt_int)0; }))) {
F->result_ = 0;
goto ret_;
} else if (((G_NV(({ rt_gstr ix1399 = F->line_271; ix1399.p[rt_index(F->j_272, ix1399.lo, ix1399.hi) - ix1399.lo]; })) != 69) && (G_NV(({ rt_gstr ix1400 = F->line_271; ix1400.p[rt_index(F->j_272, ix1400.lo, ix1400.hi) - ix1400.lo]; })) != 101))) {
F->result_ = 0;
goto ret_;
} else if (f_is_digit_228(F->up, G_NV(({ rt_gstr ix1402 = F->line_271; ix1402.p[rt_index(rt_add(F->j_272, ((rt_int)1LL)), ix1402.lo, ix1402.hi) - ix1402.lo]; })))) {
F->result_ = 1;
goto ret_;
} else if ((rt_add(F->j_272, ((rt_int)1LL)) >= ({ rt_gstr at1403 = F->line_271; at1403.hi >= at1403.lo ? at1403.hi - at1403.lo + 1 : (rt_int)0; }))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (((G_NV(({ rt_gstr ix1404 = F->line_271; ix1404.p[rt_index(rt_add(F->j_272, ((rt_int)1LL)), ix1404.lo, ix1404.hi) - ix1404.lo]; })) == 43) || (G_NV(({ rt_gstr ix1405 = F->line_271; ix1405.p[rt_index(rt_add(F->j_272, ((rt_int)1LL)), ix1405.lo, ix1405.hi) - ix1405.lo]; })) == 45)) && f_is_digit_228(F->up, G_NV(({ rt_gstr ix1407 = F->line_271; ix1407.p[rt_index(rt_add(F->j_272, ((rt_int)2LL)), ix1407.lo, ix1407.hi) - ix1407.lo]; }))));
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
(*({ rt_gstr *ix1408 = &((*F->buf_276)); &ix1408->p[rt_index(G_NV((*F->bl_277)), ix1408->lo, ix1408->hi) - ix1408->lo]; })) = 69;
(*F->j_275) = rt_add(G_NV((*F->j_275)), ((rt_int)1LL));
if (((G_NV(({ rt_gstr ix1409 = F->line_274; ix1409.p[rt_index(G_NV((*F->j_275)), ix1409.lo, ix1409.hi) - ix1409.lo]; })) == 43) || (G_NV(({ rt_gstr ix1410 = F->line_274; ix1410.p[rt_index(G_NV((*F->j_275)), ix1410.lo, ix1410.hi) - ix1410.lo]; })) == 45))) {
(*F->bl_277) = rt_add(G_NV((*F->bl_277)), ((rt_int)1LL));
(*({ rt_gstr *ix1411 = &((*F->buf_276)); &ix1411->p[rt_index(G_NV((*F->bl_277)), ix1411->lo, ix1411->hi) - ix1411->lo]; })) = G_NV(({ rt_gstr ix1412 = F->line_274; ix1412.p[rt_index(G_NV((*F->j_275)), ix1412.lo, ix1412.hi) - ix1412.lo]; }));
(*F->j_275) = rt_add(G_NV((*F->j_275)), ((rt_int)1LL));
}
while (((G_NV((*F->j_275)) <= ({ rt_gstr at1414 = F->line_274; at1414.hi >= at1414.lo ? at1414.hi - at1414.lo + 1 : (rt_int)0; })) && (f_is_digit_228(F->up, G_NV(({ rt_gstr ix1416 = F->line_274; ix1416.p[rt_index(G_NV((*F->j_275)), ix1416.lo, ix1416.hi) - ix1416.lo]; }))) || (G_NV(({ rt_gstr ix1417 = F->line_274; ix1417.p[rt_index(G_NV((*F->j_275)), ix1417.lo, ix1417.hi) - ix1417.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1418 = F->line_274; ix1418.p[rt_index(G_NV((*F->j_275)), ix1418.lo, ix1418.hi) - ix1418.lo]; })) != 95)) {
(*F->bl_277) = rt_add(G_NV((*F->bl_277)), ((rt_int)1LL));
(*({ rt_gstr *ix1419 = &((*F->buf_276)); &ix1419->p[rt_index(G_NV((*F->bl_277)), ix1419->lo, ix1419->hi) - ix1419->lo]; })) = G_NV(({ rt_gstr ix1420 = F->line_274; ix1420.p[rt_index(G_NV((*F->j_275)), ix1420.lo, ix1420.hi) - ix1420.lo]; }));
} else if (((G_NV((*F->j_275)) == ({ rt_gstr at1421 = F->line_274; at1421.hi >= at1421.lo ? at1421.hi - at1421.lo + 1 : (rt_int)0; })) || (!f_is_digit_228(F->up, G_NV(({ rt_gstr ix1423 = F->line_274; ix1423.p[rt_index(rt_add(G_NV((*F->j_275)), ((rt_int)1LL)), ix1423.lo, ix1423.hi) - ix1423.lo]; })))))) {
f_fail_242(F->up, G_NV(F->up->src_line_114), rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
(*F->j_275) = rt_add(G_NV((*F->j_275)), ((rt_int)1LL));
}
L_end_1413: ;
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
F->n_1424 = INT64_MIN;
if ((G_NV(F->up->ntoks_112) < ((rt_int)6LL))) {
goto ret_;
}
if (((G_NV((*(P109)rt_nil_check(({ A108 ix1425 = F->up->toks_111; ix1425.p[rt_index(rt_sub(G_NV(F->up->ntoks_112), ((rt_int)5LL)), ix1425.lo, ix1425.hi) - ix1425.lo]; }))).kind_) != ((rt_int)2LL)) || (G_NV((*(P109)rt_nil_check(({ A108 ix1426 = F->up->toks_111; ix1426.p[rt_index(rt_sub(G_NV(F->up->ntoks_112), ((rt_int)2LL)), ix1426.lo, ix1426.hi) - ix1426.lo]; }))).kind_) != ((rt_int)6LL)))) {
goto ret_;
} else if (((((!eq_rt_gstr((*(P139)rt_nil_check((*(P109)rt_nil_check(({ A108 ix1427 = F->up->toks_111; ix1427.p[rt_index(rt_sub(G_NV(F->up->ntoks_112), ((rt_int)5LL)), ix1427.lo, ix1427.hi) - ix1427.lo]; }))).s_)), rt_g_lit("PRAGMA", 6))) || (!eq_rt_gstr((*(P139)rt_nil_check((*(P109)rt_nil_check(({ A108 ix1428 = F->up->toks_111; ix1428.p[rt_index(rt_sub(G_NV(F->up->ntoks_112), ((rt_int)4LL)), ix1428.lo, ix1428.hi) - ix1428.lo]; }))).s_)), rt_g_lit("INCLUDE", 7)))) || (!eq_rt_gstr((*(P139)rt_nil_check((*(P109)rt_nil_check(({ A108 ix1429 = F->up->toks_111; ix1429.p[rt_index(rt_sub(G_NV(F->up->ntoks_112), ((rt_int)3LL)), ix1429.lo, ix1429.hi) - ix1429.lo]; }))).s_)), rt_g_lit("(", 1)))) || (!eq_rt_gstr((*(P139)rt_nil_check((*(P109)rt_nil_check(({ A108 ix1430 = F->up->toks_111; ix1430.p[rt_index(rt_sub(G_NV(F->up->ntoks_112), ((rt_int)1LL)), ix1430.lo, ix1430.hi) - ix1430.lo]; }))).s_)), rt_g_lit(")", 1))))) {
goto ret_;
}
f_include_open_281(F->up, (*(P139)rt_nil_check((*(P109)rt_nil_check(({ A108 ix1432 = F->up->toks_111; ix1432.p[rt_index(rt_sub(G_NV(F->up->ntoks_112), ((rt_int)2LL)), ix1432.lo, ix1432.hi) - ix1432.lo]; }))).s_)), &F->n_1424);
if ((G_NV(F->n_1424) < ((rt_int)0LL))) {
f_fail_242(F->up, G_NV(F->up->src_line_114), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma INCLUDE: the file ", 25), (*(P139)rt_nil_check((*(P109)rt_nil_check(({ A108 ix1434 = F->up->toks_111; ix1434.p[rt_index(rt_sub(G_NV(F->up->ntoks_112), ((rt_int)2LL)), ix1434.lo, ix1434.hi) - ix1434.lo]; }))).s_))), rt_g_lit(" cannot be read", 15)));
}
F->up->ntoks_112 = rt_sub(G_NV(F->up->ntoks_112), ((rt_int)6LL));
f_include_text_287(F->up, G_NV(F->n_1424));
ret_:

  return;
}

static void f_include_text_287(struct f_greenc_1fr *up_, rt_int n_286) {
  struct f_include_text_287fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_286 = n_286;
F->t_1435.lo = ((rt_int)1LL); F->t_1435.hi = rt_add(F->n_286, ((rt_int)1LL));
F->t_1435.lo2 = 1; F->t_1435.hi2 = 1;
F->t_1435.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->t_1435));
memset(F->t_1435.p, 0xFF, (size_t)G_CNT(F->t_1435));
F->saved_line_1437 = INT64_MIN;
F->saved_line_1437 = G_NV(F->up->src_line_114);
F->from_1438 = INT64_MIN;
F->from_1438 = ((rt_int)1LL);
{ rt_int lo1441 = ((rt_int)1LL), hi1442 = F->n_286;
for (rt_int it1443 = lo1441; it1443 <= hi1442; it1443++) {
F->k_1440 = it1443;
f_include_char_284(F->up, F->k_1440, &(*({ rt_gstr *ix1445 = &(F->t_1435); &ix1445->p[rt_index(F->k_1440, ix1445->lo, ix1445->hi) - ix1445->lo]; })));
}
}
L_end_1439: ;
F->up->src_line_114 = ((rt_int)0LL);
{ rt_int lo1448 = ((rt_int)1LL), hi1449 = F->n_286;
for (rt_int it1450 = lo1448; it1450 <= hi1449; it1450++) {
F->k_1447 = it1450;
if ((G_NV(({ rt_gstr ix1451 = F->t_1435; ix1451.p[rt_index(F->k_1447, ix1451.lo, ix1451.hi) - ix1451.lo]; })) == 10)) {
F->up->src_line_114 = rt_add(G_NV(F->up->src_line_114), ((rt_int)1LL));
f_include_line_291(F->up, F->t_1435, G_NV(F->from_1438), rt_sub(F->k_1447, ((rt_int)1LL)));
F->from_1438 = rt_add(F->k_1447, ((rt_int)1LL));
}
}
}
L_end_1446: ;
if ((G_NV(F->from_1438) <= F->n_286)) {
F->up->src_line_114 = rt_add(G_NV(F->up->src_line_114), ((rt_int)1LL));
f_include_line_291(F->up, F->t_1435, G_NV(F->from_1438), F->n_286);
}
F->up->src_line_114 = G_NV(F->saved_line_1437);
ret_:

  return;
}

static void f_include_line_291(struct f_greenc_1fr *up_, rt_gstr t_288, rt_int from_289, rt_int to_290) {
  struct f_include_line_291fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_288 = cp_rt_gstr(t_288);
F->from_289 = from_289;
F->to_290 = to_290;
F->l_1452.lo = ((rt_int)1LL); F->l_1452.hi = rt_add(rt_sub(F->to_290, F->from_289), ((rt_int)1LL));
F->l_1452.lo2 = 1; F->l_1452.hi2 = 1;
F->l_1452.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->l_1452));
memset(F->l_1452.p, 0xFF, (size_t)G_CNT(F->l_1452));
{ rt_int lo1456 = F->from_289, hi1457 = F->to_290;
for (rt_int it1458 = lo1456; it1458 <= hi1457; it1458++) {
F->k_1455 = it1458;
(*({ rt_gstr *ix1459 = &(F->l_1452); &ix1459->p[rt_index(rt_add(rt_sub(F->k_1455, F->from_289), ((rt_int)1LL)), ix1459->lo, ix1459->hi) - ix1459->lo]; })) = G_NV(({ rt_gstr ix1460 = F->t_288; ix1460.p[rt_index(F->k_1455, ix1460.lo, ix1460.hi) - ix1460.lo]; }));
}
}
L_end_1454: ;
f_lex_line_270(F->up, F->l_1452);
ret_:

  return;
}

static void f_read_source_292(struct f_greenc_1fr *up_) {
  struct f_read_source_292fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->buf_1461.lo = ((rt_int)1LL); F->buf_1461.hi = ((rt_int)10000LL);
F->buf_1461.lo2 = 1; F->buf_1461.hi2 = 1;
F->buf_1461.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->buf_1461));
memset(F->buf_1461.p, 0xFF, (size_t)G_CNT(F->buf_1461));
F->bl_1463 = INT64_MIN;
F->bl_1463 = ((rt_int)0LL);
F->c_1464 = INT_MIN;
{ rt_frame xf1465;
if (RT_TRY(xf1465)) {
for (;;) {
(F->c_1464 = rt_g_getc());
if ((G_NV(F->c_1464) == 10)) {
F->up->src_line_114 = rt_add(G_NV(F->up->src_line_114), ((rt_int)1LL));
f_lex_line_270(F->up, ({ rt_gstr sl1469 = F->buf_1461; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1463); if (l_ <= h_) { rt_index(l_, sl1469.lo, sl1469.hi); rt_index(h_, sl1469.lo, sl1469.hi); } sl1469.p += l_ - sl1469.lo; sl1469.lo = l_; sl1469.hi = h_; sl1469; }));
F->bl_1463 = ((rt_int)0LL);
} else {
F->bl_1463 = rt_add(G_NV(F->bl_1463), ((rt_int)1LL));
(*({ rt_gstr *ix1470 = &(F->buf_1461); &ix1470->p[rt_index(G_NV(F->bl_1463), ix1470->lo, ix1470->hi) - ix1470->lo]; })) = G_NV(F->c_1464);
}
}
L_end_1467: ;
RT_POP(xf1465);
} else {
RT_POP(xf1465);
int x1466 = rt_xcur;
if (rt_g_aborted()) rt_raise(x1466);
if (0 || x1466 == rt_exc("END_OF_FILE")) {
if ((G_NV(F->bl_1463) > ((rt_int)0LL))) {
F->up->src_line_114 = rt_add(G_NV(F->up->src_line_114), ((rt_int)1LL));
f_lex_line_270(F->up, ({ rt_gstr sl1472 = F->buf_1461; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1463); if (l_ <= h_) { rt_index(l_, sl1472.lo, sl1472.hi); rt_index(h_, sl1472.lo, sl1472.hi); } sl1472.p += l_ - sl1472.lo; sl1472.lo = l_; sl1472.hi = h_; sl1472; }));
}
f_add_token_259(F->up, ((rt_int)0LL), rt_g_lit("<end>", 5), ((rt_int)0LL));
} else {
rt_raise(x1466);
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
F->result_ = ({ R174 *cell1473 = rt_alloc(sizeof(R174)); *cell1473 = cp_R174(({ R174 ag1474; ag1474.kind_ = F->kind_293; ag1474.line_ = F->line_294; ag1474.ival_ = ((rt_int)0LL); ag1474.flag_ = ((rt_int)0LL); ag1474.name_ = NULL; ag1474.tag_ = NULL; ag1474.a_ = NULL; ag1474.b_ = NULL; ag1474.c_ = NULL; ag1474.d_ = NULL; ag1474.e_ = NULL; ag1474.next_ = NULL; ag1474.formal_ = NULL; ag1474; })); (P173)cell1473; });
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
L_end_1475: ;
ret_:

  return;
}

static rt_int f_list_len_301(struct f_greenc_1fr *up_, P173 l_300) {
  struct f_list_len_301fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_300 = l_300;
F->n_1476 = INT64_MIN;
F->n_1476 = ((rt_int)0LL);
F->p_1477 = NULL;
F->p_1477 = F->l_300;
while ((F->p_1477 != NULL)) {
F->n_1476 = rt_add(G_NV(F->n_1476), ((rt_int)1LL));
F->p_1477 = (*(P173)rt_nil_check(F->p_1477)).next_;
}
L_end_1478: ;
F->result_ = G_NV(F->n_1476);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_cur_line_302(struct f_greenc_1fr *up_) {
  struct f_cur_line_302fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = G_NV((*(P109)rt_nil_check(({ A108 ix1479 = F->up->toks_111; ix1479.p[rt_index(G_NV(F->up->tpos_113), ix1479.lo, ix1479.hi) - ix1479.lo]; }))).line_);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_kw_304(struct f_greenc_1fr *up_, rt_gstr w_303) {
  struct f_at_kw_304fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_303 = cp_rt_gstr(w_303);
if ((!(G_NV((*(P109)rt_nil_check(({ A108 ix1480 = F->up->toks_111; ix1480.p[rt_index(G_NV(F->up->tpos_113), ix1480.lo, ix1480.hi) - ix1480.lo]; }))).kind_) == ((rt_int)2LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P139)rt_nil_check((*(P109)rt_nil_check(({ A108 ix1481 = F->up->toks_111; ix1481.p[rt_index(G_NV(F->up->tpos_113), ix1481.lo, ix1481.hi) - ix1481.lo]; }))).s_)), F->w_303);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_op_306(struct f_greenc_1fr *up_, rt_gstr w_305) {
  struct f_at_op_306fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_305 = cp_rt_gstr(w_305);
if ((!(G_NV((*(P109)rt_nil_check(({ A108 ix1482 = F->up->toks_111; ix1482.p[rt_index(G_NV(F->up->tpos_113), ix1482.lo, ix1482.hi) - ix1482.lo]; }))).kind_) == ((rt_int)3LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P139)rt_nil_check((*(P109)rt_nil_check(({ A108 ix1483 = F->up->toks_111; ix1483.p[rt_index(G_NV(F->up->tpos_113), ix1483.lo, ix1483.hi) - ix1483.lo]; }))).s_)), F->w_305);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_kind_308(struct f_greenc_1fr *up_, rt_int k_307) {
  struct f_at_kind_308fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_307 = k_307;
F->result_ = (G_NV((*(P109)rt_nil_check(({ A108 ix1484 = F->up->toks_111; ix1484.p[rt_index(G_NV(F->up->tpos_113), ix1484.lo, ix1484.hi) - ix1484.lo]; }))).kind_) == F->k_307);
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
F->result_ = G_NV((*(P109)rt_nil_check(({ A108 ix1485 = F->up->toks_111; ix1485.p[rt_index(rt_add(G_NV(F->up->tpos_113), F->k_309), ix1485.lo, ix1485.hi) - ix1485.lo]; }))).kind_);
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
F->result_ = (*(P139)rt_nil_check((*(P109)rt_nil_check(({ A108 ix1486 = F->up->toks_111; ix1486.p[rt_index(rt_add(G_NV(F->up->tpos_113), F->k_311), ix1486.lo, ix1486.hi) - ix1486.lo]; }))).s_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_perror_314(struct f_greenc_1fr *up_, rt_gstr msg_313) {
  struct f_perror_314fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->msg_313 = cp_rt_gstr(msg_313);
f_fail_242(F->up, G_NV((*(P109)rt_nil_check(({ A108 ix1489 = F->up->toks_111; ix1489.p[rt_index(G_NV(F->up->tpos_113), ix1489.lo, ix1489.hi) - ix1489.lo]; }))).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->msg_313, rt_g_lit(" (at ", 5)), (*(P139)rt_nil_check((*(P109)rt_nil_check(({ A108 ix1490 = F->up->toks_111; ix1490.p[rt_index(G_NV(F->up->tpos_113), ix1490.lo, ix1490.hi) - ix1490.lo]; }))).s_))), one_rt_gstr(41)));
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
(*F->res_320) = (*(P109)rt_nil_check(({ A108 ix1491 = F->up->toks_111; ix1491.p[rt_index(rt_sub(G_NV(F->up->tpos_113), ((rt_int)1LL)), ix1491.lo, ix1491.hi) - ix1491.lo]; }))).s_;
goto ret_;
ret_:

  return;
}

static void f_name_node_323(struct f_greenc_1fr *up_, P173 *res_322) {
  struct f_name_node_323fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_322 = res_322;
F->x_1492 = NULL;
F->x_1492 = f_nn_295(F->up, ((rt_int)5LL), f_cur_line_302(F->up));
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_1492)).name_);
(*F->res_322) = F->x_1492;
goto ret_;
ret_:

  return;
}

static void f_id_list_325(struct f_greenc_1fr *up_, P173 *res_324) {
  struct f_id_list_325fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_324 = res_324;
F->head_1493 = NULL;
F->tail_1494 = NULL;
F->x_1495 = NULL;
f_name_node_323(F->up, &F->x_1495);
f_append_299(F->up, &F->head_1493, &F->tail_1494, F->x_1495);
while (f_at_op_306(F->up, rt_g_lit(",", 1))) {
f_skip_315(F->up);
f_name_node_323(F->up, &F->x_1495);
f_append_299(F->up, &F->head_1493, &F->tail_1494, F->x_1495);
}
L_end_1496: ;
(*F->res_324) = F->head_1493;
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
F->x_1497 = NULL;
F->x_1497 = f_nn_295(F->up, ((rt_int)7LL), F->line_329);
(*(P173)rt_nil_check(F->x_1497)).name_ = F->op_326;
(*(P173)rt_nil_check(F->x_1497)).a_ = F->l_327;
(*(P173)rt_nil_check(F->x_1497)).b_ = F->r_328;
F->result_ = F->x_1497;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_expr_332(struct f_greenc_1fr *up_, P173 *res_331) {
  struct f_expr_332fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_331 = res_331;
F->l_1498 = NULL;
F->r_1499 = NULL;
F->op_1500 = NULL;
F->first_op_1501 = NULL;
F->line_1502 = INT64_MIN;
F->short_1503 = INT_MIN;
F->short_1503 = 0;
F->first_short_1504 = INT_MIN;
F->first_short_1504 = 0;
f_relation_336(F->up, &F->l_1498);
while (((f_at_kw_304(F->up, rt_g_lit("AND", 3)) || f_at_kw_304(F->up, rt_g_lit("OR", 2))) || f_at_kw_304(F->up, rt_g_lit("XOR", 3)))) {
F->op_1500 = (*(P109)rt_nil_check(({ A108 ix1506 = F->up->toks_111; ix1506.p[rt_index(G_NV(F->up->tpos_113), ix1506.lo, ix1506.hi) - ix1506.lo]; }))).s_;
F->line_1502 = f_cur_line_302(F->up);
f_skip_315(F->up);
F->short_1503 = 0;
if ((eq_rt_gstr((*(P139)rt_nil_check(F->op_1500)), rt_g_lit("AND", 3)) && f_at_kw_304(F->up, rt_g_lit("THEN", 4)))) {
f_skip_315(F->up);
F->short_1503 = 1;
} else if ((eq_rt_gstr((*(P139)rt_nil_check(F->op_1500)), rt_g_lit("OR", 2)) && f_at_kw_304(F->up, rt_g_lit("ELSE", 4)))) {
f_skip_315(F->up);
F->short_1503 = 1;
}
if ((F->first_op_1501 == NULL)) {
F->first_op_1501 = F->op_1500;
F->first_short_1504 = G_NV(F->short_1503);
} else if (((!eq_rt_gstr((*(P139)rt_nil_check(F->first_op_1501)), (*(P139)rt_nil_check(F->op_1500)))) || (G_NV(F->first_short_1504) != G_NV(F->short_1503)))) {
f_fail_242(F->up, G_NV(F->line_1502), rt_g_lit("logical operators of different kinds are not mixed without parentheses (RM79 4.4)", 81));
}
f_relation_336(F->up, &F->r_1499);
F->l_1498 = f_binop_330(F->up, F->op_1500, F->l_1498, F->r_1499, G_NV(F->line_1502));
if (G_NV(F->short_1503)) {
(*(P173)rt_nil_check(F->l_1498)).ival_ = ((rt_int)1LL);
}
}
L_end_1505: ;
(*F->res_331) = F->l_1498;
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
F->l_1507 = NULL;
F->r_1508 = NULL;
F->lo_1509 = NULL;
F->hi_1510 = NULL;
F->t_1511 = NULL;
F->op_1512 = NULL;
F->line_1513 = INT64_MIN;
F->line_1513 = f_cur_line_302(F->up);
F->neg_1514 = INT_MIN;
F->neg_1514 = 0;
f_simple_expr_340(F->up, &F->l_1507);
if ((f_at_kind_308(F->up, ((rt_int)3LL)) && f_is_rel_334(F->up, (*(P139)rt_nil_check((*(P109)rt_nil_check(({ A108 ix1516 = F->up->toks_111; ix1516.p[rt_index(G_NV(F->up->tpos_113), ix1516.lo, ix1516.hi) - ix1516.lo]; }))).s_))))) {
F->op_1512 = (*(P109)rt_nil_check(({ A108 ix1517 = F->up->toks_111; ix1517.p[rt_index(G_NV(F->up->tpos_113), ix1517.lo, ix1517.hi) - ix1517.lo]; }))).s_;
f_skip_315(F->up);
f_simple_expr_340(F->up, &F->r_1508);
F->l_1507 = f_binop_330(F->up, F->op_1512, F->l_1507, F->r_1508, G_NV(F->line_1513));
(*F->res_335) = F->l_1507;
goto ret_;
}
if (((f_at_kw_304(F->up, rt_g_lit("NOT", 3)) && (f_kind_at_310(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit("IN", 2)))) {
f_skip_315(F->up);
F->neg_1514 = 1;
}
if (f_at_kw_304(F->up, rt_g_lit("IN", 2))) {
f_skip_315(F->up);
f_simple_expr_340(F->up, &F->lo_1509);
if (f_at_op_306(F->up, rt_g_lit("..", 2))) {
f_skip_315(F->up);
f_simple_expr_340(F->up, &F->hi_1510);
F->t_1511 = f_nn_295(F->up, ((rt_int)14LL), G_NV(F->line_1513));
(*(P173)rt_nil_check(F->t_1511)).a_ = F->lo_1509;
(*(P173)rt_nil_check(F->t_1511)).b_ = F->hi_1510;
} else if (((G_NV((*(P173)rt_nil_check(F->lo_1509)).kind_) == ((rt_int)5LL)) || (G_NV((*(P173)rt_nil_check(F->lo_1509)).kind_) == ((rt_int)9LL)))) {
F->t_1511 = f_nn_295(F->up, ((rt_int)80LL), G_NV(F->line_1513));
(*(P173)rt_nil_check(F->t_1511)).name_ = (*(P173)rt_nil_check(F->lo_1509)).name_;
if ((G_NV((*(P173)rt_nil_check(F->lo_1509)).kind_) == ((rt_int)9LL))) {
(*(P173)rt_nil_check(F->t_1511)).tag_ = f_mk_221(F->up, f_path_of_338(F->up, (*(P173)rt_nil_check(F->lo_1509)).a_));
}
if (f_at_kw_304(F->up, rt_g_lit("RANGE", 5))) {
f_skip_315(F->up);
F->r_1508 = f_nn_295(F->up, ((rt_int)14LL), G_NV(F->line_1513));
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->r_1508)).a_);
f_expect_op_319(F->up, rt_g_lit("..", 2));
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->r_1508)).b_);
(*(P173)rt_nil_check(F->t_1511)).a_ = F->r_1508;
(*(P173)rt_nil_check(F->t_1511)).flag_ = ((rt_int)1LL);
} else if ((f_at_kw_304(F->up, rt_g_lit("DIGITS", 6)) || f_at_kw_304(F->up, rt_g_lit("DELTA", 5)))) {
f_skip_315(F->up);
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->t_1511)).b_);
(*(P173)rt_nil_check(F->t_1511)).flag_ = ((rt_int)3LL);
}
} else {
f_perror_314(F->up, rt_g_lit("membership is in a range or a type mark (RM79 4.5.2)", 52));
}
F->op_1512 = f_mk_221(F->up, rt_g_lit("IN", 2));
F->l_1507 = f_binop_330(F->up, F->op_1512, F->l_1507, F->t_1511, G_NV(F->line_1513));
if (G_NV(F->neg_1514)) {
F->t_1511 = f_nn_295(F->up, ((rt_int)6LL), G_NV(F->line_1513));
(*(P173)rt_nil_check(F->t_1511)).name_ = f_mk_221(F->up, rt_g_lit("NOT", 3));
(*(P173)rt_nil_check(F->t_1511)).a_ = F->l_1507;
(*F->res_335) = F->t_1511;
goto ret_;
}
}
(*F->res_335) = F->l_1507;
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
F->l_1518 = NULL;
F->r_1519 = NULL;
F->op_1520 = NULL;
F->line_1521 = INT64_MIN;
F->line_1521 = f_cur_line_302(F->up);
if (((f_at_op_306(F->up, rt_g_lit("+", 1)) || f_at_op_306(F->up, rt_g_lit("-", 1))) || f_at_kw_304(F->up, rt_g_lit("NOT", 3)))) {
F->op_1520 = (*(P109)rt_nil_check(({ A108 ix1522 = F->up->toks_111; ix1522.p[rt_index(G_NV(F->up->tpos_113), ix1522.lo, ix1522.hi) - ix1522.lo]; }))).s_;
f_skip_315(F->up);
f_term_342(F->up, &F->r_1519);
F->l_1518 = f_nn_295(F->up, ((rt_int)6LL), G_NV(F->line_1521));
(*(P173)rt_nil_check(F->l_1518)).name_ = F->op_1520;
(*(P173)rt_nil_check(F->l_1518)).a_ = F->r_1519;
} else {
f_term_342(F->up, &F->l_1518);
}
while (((f_at_op_306(F->up, rt_g_lit("+", 1)) || f_at_op_306(F->up, rt_g_lit("-", 1))) || f_at_op_306(F->up, rt_g_lit("&", 1)))) {
F->op_1520 = (*(P109)rt_nil_check(({ A108 ix1524 = F->up->toks_111; ix1524.p[rt_index(G_NV(F->up->tpos_113), ix1524.lo, ix1524.hi) - ix1524.lo]; }))).s_;
f_skip_315(F->up);
f_term_342(F->up, &F->r_1519);
F->l_1518 = f_binop_330(F->up, F->op_1520, F->l_1518, F->r_1519, G_NV(F->line_1521));
}
L_end_1523: ;
(*F->res_339) = F->l_1518;
goto ret_;
ret_:

  return;
}

static void f_term_342(struct f_greenc_1fr *up_, P173 *res_341) {
  struct f_term_342fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_341 = res_341;
F->l_1525 = NULL;
F->r_1526 = NULL;
F->op_1527 = NULL;
F->line_1528 = INT64_MIN;
F->line_1528 = f_cur_line_302(F->up);
f_factor_344(F->up, &F->l_1525);
while (((f_at_op_306(F->up, rt_g_lit("*", 1)) || f_at_op_306(F->up, rt_g_lit("/", 1))) || f_at_kw_304(F->up, rt_g_lit("MOD", 3)))) {
F->op_1527 = (*(P109)rt_nil_check(({ A108 ix1530 = F->up->toks_111; ix1530.p[rt_index(G_NV(F->up->tpos_113), ix1530.lo, ix1530.hi) - ix1530.lo]; }))).s_;
f_skip_315(F->up);
f_factor_344(F->up, &F->r_1526);
F->l_1525 = f_binop_330(F->up, F->op_1527, F->l_1525, F->r_1526, G_NV(F->line_1528));
}
L_end_1529: ;
(*F->res_341) = F->l_1525;
goto ret_;
ret_:

  return;
}

static void f_factor_344(struct f_greenc_1fr *up_, P173 *res_343) {
  struct f_factor_344fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_343 = res_343;
F->l_1531 = NULL;
F->r_1532 = NULL;
F->op_1533 = NULL;
F->line_1534 = INT64_MIN;
F->line_1534 = f_cur_line_302(F->up);
f_primary_346(F->up, &F->l_1531);
if (f_at_op_306(F->up, rt_g_lit("**", 2))) {
F->op_1533 = (*(P109)rt_nil_check(({ A108 ix1535 = F->up->toks_111; ix1535.p[rt_index(G_NV(F->up->tpos_113), ix1535.lo, ix1535.hi) - ix1535.lo]; }))).s_;
f_skip_315(F->up);
f_primary_346(F->up, &F->r_1532);
F->l_1531 = f_binop_330(F->up, F->op_1533, F->l_1531, F->r_1532, G_NV(F->line_1534));
}
(*F->res_343) = F->l_1531;
goto ret_;
ret_:

  return;
}

static void f_primary_346(struct f_greenc_1fr *up_, P173 *res_345) {
  struct f_primary_346fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_345 = res_345;
F->x_1536 = NULL;
F->line_1537 = INT64_MIN;
F->line_1537 = f_cur_line_302(F->up);
if (f_at_kind_308(F->up, ((rt_int)4LL))) {
F->x_1536 = f_nn_295(F->up, ((rt_int)1LL), G_NV(F->line_1537));
(*(P173)rt_nil_check(F->x_1536)).ival_ = G_NV((*(P109)rt_nil_check(({ A108 ix1538 = F->up->toks_111; ix1538.p[rt_index(G_NV(F->up->tpos_113), ix1538.lo, ix1538.hi) - ix1538.lo]; }))).ival_);
(*(P173)rt_nil_check(F->x_1536)).name_ = (*(P109)rt_nil_check(({ A108 ix1539 = F->up->toks_111; ix1539.p[rt_index(G_NV(F->up->tpos_113), ix1539.lo, ix1539.hi) - ix1539.lo]; }))).s_;
f_skip_315(F->up);
(*F->res_345) = F->x_1536;
goto ret_;
}
if (f_at_kind_308(F->up, ((rt_int)5LL))) {
F->x_1536 = f_nn_295(F->up, ((rt_int)2LL), G_NV(F->line_1537));
(*(P173)rt_nil_check(F->x_1536)).name_ = (*(P109)rt_nil_check(({ A108 ix1540 = F->up->toks_111; ix1540.p[rt_index(G_NV(F->up->tpos_113), ix1540.lo, ix1540.hi) - ix1540.lo]; }))).s_;
f_skip_315(F->up);
(*F->res_345) = F->x_1536;
goto ret_;
}
if (f_at_kind_308(F->up, ((rt_int)6LL))) {
F->x_1536 = f_nn_295(F->up, ((rt_int)3LL), G_NV(F->line_1537));
(*(P173)rt_nil_check(F->x_1536)).name_ = (*(P109)rt_nil_check(({ A108 ix1541 = F->up->toks_111; ix1541.p[rt_index(G_NV(F->up->tpos_113), ix1541.lo, ix1541.hi) - ix1541.lo]; }))).s_;
f_skip_315(F->up);
(*F->res_345) = F->x_1536;
goto ret_;
}
if (f_at_kw_304(F->up, rt_g_lit("NULL", 4))) {
f_skip_315(F->up);
F->x_1536 = f_nn_295(F->up, ((rt_int)4LL), G_NV(F->line_1537));
(*F->res_345) = F->x_1536;
goto ret_;
}
if (f_at_kw_304(F->up, rt_g_lit("NEW", 3))) {
f_skip_315(F->up);
F->x_1536 = f_nn_295(F->up, ((rt_int)11LL), G_NV(F->line_1537));
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_1536)).name_);
if (f_at_op_306(F->up, rt_g_lit("(", 1))) {
f_agg_or_paren_348(F->up, &(*(P173)rt_nil_check(F->x_1536)).a_);
}
(*F->res_345) = F->x_1536;
goto ret_;
}
if (f_at_op_306(F->up, rt_g_lit("(", 1))) {
f_agg_or_paren_348(F->up, &F->x_1536);
(*F->res_345) = F->x_1536;
goto ret_;
}
if (f_at_kind_308(F->up, ((rt_int)1LL))) {
f_name_p_353(F->up, &F->x_1536);
(*F->res_345) = F->x_1536;
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
F->line_1542 = INT64_MIN;
F->line_1542 = f_cur_line_302(F->up);
F->items_1543 = NULL;
F->itail_1544 = NULL;
F->it_1545 = NULL;
F->first_1546 = NULL;
F->keys_1547 = NULL;
F->ktail_1548 = NULL;
F->lab_1549 = NULL;
F->x_1550 = NULL;
F->more_1551 = INT_MIN;
F->more_1551 = 1;
f_expect_op_319(F->up, rt_g_lit("(", 1));
while (G_NV(F->more_1551)) {
F->it_1545 = f_nn_295(F->up, ((rt_int)13LL), G_NV(F->line_1542));
if (f_at_kw_304(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_315(F->up);
f_expect_op_319(F->up, rt_g_lit("=>", 2));
F->lab_1549 = f_nn_295(F->up, ((rt_int)61LL), G_NV(F->line_1542));
(*(P173)rt_nil_check(F->lab_1549)).flag_ = ((rt_int)1LL);
(*(P173)rt_nil_check(F->it_1545)).a_ = F->lab_1549;
f_expr_332(F->up, &(*(P173)rt_nil_check(F->it_1545)).b_);
} else {
f_expr_332(F->up, &F->first_1546);
if (((f_at_op_306(F->up, rt_g_lit("..", 2)) || f_at_op_306(F->up, rt_g_lit("|", 1))) || f_at_op_306(F->up, rt_g_lit("=>", 2)))) {
F->keys_1547 = NULL;
F->ktail_1548 = NULL;
for (;;) {
F->lab_1549 = f_nn_295(F->up, ((rt_int)61LL), G_NV(F->line_1542));
(*(P173)rt_nil_check(F->lab_1549)).a_ = F->first_1546;
if (f_at_op_306(F->up, rt_g_lit("..", 2))) {
f_skip_315(F->up);
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->lab_1549)).b_);
}
f_append_299(F->up, &F->keys_1547, &F->ktail_1548, F->lab_1549);
if ((!f_at_op_306(F->up, rt_g_lit("|", 1)))) {
goto L_end_1553;
}
f_skip_315(F->up);
f_simple_expr_340(F->up, &F->first_1546);
}
L_end_1553: ;
f_expect_op_319(F->up, rt_g_lit("=>", 2));
(*(P173)rt_nil_check(F->it_1545)).a_ = F->keys_1547;
f_expr_332(F->up, &(*(P173)rt_nil_check(F->it_1545)).b_);
} else {
(*(P173)rt_nil_check(F->it_1545)).b_ = F->first_1546;
}
}
f_append_299(F->up, &F->items_1543, &F->itail_1544, F->it_1545);
F->more_1551 = f_at_op_306(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1551)) {
f_skip_315(F->up);
}
}
L_end_1552: ;
f_expect_op_319(F->up, rt_g_lit(")", 1));
if ((((*(P173)rt_nil_check(F->items_1543)).next_ == NULL) && ((*(P173)rt_nil_check(F->items_1543)).a_ == NULL))) {
F->x_1550 = f_nn_295(F->up, ((rt_int)15LL), G_NV(F->line_1542));
(*(P173)rt_nil_check(F->x_1550)).a_ = (*(P173)rt_nil_check(F->items_1543)).b_;
(*F->res_347) = F->x_1550;
goto ret_;
}
F->x_1550 = f_nn_295(F->up, ((rt_int)12LL), G_NV(F->line_1542));
(*(P173)rt_nil_check(F->x_1550)).a_ = F->items_1543;
(*F->res_347) = F->x_1550;
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
F->d_1554 = INT64_MIN;
F->d_1554 = ((rt_int)0LL);
F->k_1555 = INT64_MIN;
F->k_1555 = ((rt_int)0LL);
for (;;) {
if ((rt_add(G_NV(F->up->tpos_113), G_NV(F->k_1555)) > G_NV(F->up->ntoks_112))) {
F->result_ = 0;
goto ret_;
}
{
F->t_1558 = NULL;
F->t_1558 = ({ A108 ix1559 = F->up->toks_111; ix1559.p[rt_index(rt_add(G_NV(F->up->tpos_113), G_NV(F->k_1555)), ix1559.lo, ix1559.hi) - ix1559.lo]; });
if (((G_NV((*(P109)rt_nil_check(F->t_1558)).kind_) == ((rt_int)3LL)) && eq_rt_gstr((*(P139)rt_nil_check((*(P109)rt_nil_check(F->t_1558)).s_)), rt_g_lit("(", 1)))) {
F->d_1554 = rt_add(G_NV(F->d_1554), ((rt_int)1LL));
} else if (((G_NV((*(P109)rt_nil_check(F->t_1558)).kind_) == ((rt_int)3LL)) && eq_rt_gstr((*(P139)rt_nil_check((*(P109)rt_nil_check(F->t_1558)).s_)), rt_g_lit(")", 1)))) {
F->d_1554 = rt_sub(G_NV(F->d_1554), ((rt_int)1LL));
if ((G_NV(F->d_1554) == ((rt_int)0LL))) {
F->result_ = 0;
goto ret_;
}
} else if (((G_NV(F->d_1554) == ((rt_int)1LL)) && f_choice_token_350(F->up, F->t_1558))) {
F->result_ = 1;
goto ret_;
} else if (((G_NV((*(P109)rt_nil_check(F->t_1558)).kind_) == ((rt_int)3LL)) && eq_rt_gstr((*(P139)rt_nil_check((*(P109)rt_nil_check(F->t_1558)).s_)), rt_g_lit(";", 1)))) {
F->result_ = 0;
goto ret_;
}

}
L_end_1557: ;
F->k_1555 = rt_add(G_NV(F->k_1555), ((rt_int)1LL));
}
L_end_1556: ;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_name_p_353(struct f_greenc_1fr *up_, P173 *res_352) {
  struct f_name_p_353fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_352 = res_352;
F->p_1560 = NULL;
F->x_1561 = NULL;
F->args_1562 = NULL;
F->atail_1563 = NULL;
F->lo_1564 = NULL;
F->r_1565 = NULL;
F->line_1566 = INT64_MIN;
F->line_1566 = f_cur_line_302(F->up);
F->more_1567 = INT_MIN;
f_name_node_323(F->up, &F->p_1560);
for (;;) {
if ((f_at_op_306(F->up, rt_g_lit("(", 1)) && f_aggregate_ahead_351(F->up))) {
F->x_1561 = f_nn_295(F->up, ((rt_int)8LL), G_NV(F->line_1566));
(*(P173)rt_nil_check(F->x_1561)).a_ = F->p_1560;
f_agg_or_paren_348(F->up, &(*(P173)rt_nil_check(F->x_1561)).b_);
(*(P173)rt_nil_check(F->x_1561)).flag_ = ((rt_int)9LL);
F->p_1560 = F->x_1561;
} else if (f_at_op_306(F->up, rt_g_lit("(", 1))) {
f_skip_315(F->up);
F->args_1562 = NULL;
F->atail_1563 = NULL;
if ((!f_at_op_306(F->up, rt_g_lit(")", 1)))) {
F->more_1567 = 1;
while (G_NV(F->more_1567)) {
{
F->formal_1571 = NULL;
F->mark_1572 = INT64_MIN;
F->mark_1572 = ((rt_int)0LL);
if (((f_at_kind_308(F->up, ((rt_int)1LL)) && (f_kind_at_310(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (((eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit(":=", 2)) || eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit("=:", 2))) || eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit(":=:", 3))) || eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit("=>", 2))))) {
F->formal_1571 = (*(P109)rt_nil_check(({ A108 ix1573 = F->up->toks_111; ix1573.p[rt_index(G_NV(F->up->tpos_113), ix1573.lo, ix1573.hi) - ix1573.lo]; }))).s_;
if (eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit(":=", 2))) {
F->mark_1572 = ((rt_int)1LL);
} else if (eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit("=:", 2))) {
F->mark_1572 = ((rt_int)3LL);
} else if (eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit(":=:", 3))) {
F->mark_1572 = ((rt_int)2LL);
} else {
F->mark_1572 = ((rt_int)4LL);
}
f_skip_315(F->up);
f_skip_315(F->up);
}
f_expr_332(F->up, &F->lo_1564);
if (f_at_op_306(F->up, rt_g_lit("..", 2))) {
f_skip_315(F->up);
F->r_1565 = f_nn_295(F->up, ((rt_int)14LL), G_NV(F->line_1566));
(*(P173)rt_nil_check(F->r_1565)).a_ = F->lo_1564;
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->r_1565)).b_);
F->lo_1564 = F->r_1565;
}
(*(P173)rt_nil_check(F->lo_1564)).formal_ = F->formal_1571;
(*(P173)rt_nil_check(F->lo_1564)).flag_ = G_NV(F->mark_1572);
f_append_299(F->up, &F->args_1562, &F->atail_1563, F->lo_1564);

}
L_end_1570: ;
F->more_1567 = f_at_op_306(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1567)) {
f_skip_315(F->up);
}
}
L_end_1569: ;
}
f_expect_op_319(F->up, rt_g_lit(")", 1));
F->x_1561 = f_nn_295(F->up, ((rt_int)8LL), G_NV(F->line_1566));
(*(P173)rt_nil_check(F->x_1561)).a_ = F->p_1560;
(*(P173)rt_nil_check(F->x_1561)).b_ = F->args_1562;
F->p_1560 = F->x_1561;
} else if (f_at_op_306(F->up, rt_g_lit(".", 1))) {
f_skip_315(F->up);
F->x_1561 = f_nn_295(F->up, ((rt_int)9LL), G_NV(F->line_1566));
(*(P173)rt_nil_check(F->x_1561)).a_ = F->p_1560;
if (f_at_kw_304(F->up, rt_g_lit("ALL", 3))) {
f_skip_315(F->up);
(*(P173)rt_nil_check(F->x_1561)).name_ = f_mk_221(F->up, rt_g_lit("ALL", 3));
} else {
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_1561)).name_);
}
F->p_1560 = F->x_1561;
} else if (f_at_op_306(F->up, rt_g_lit("'", 1))) {
f_skip_315(F->up);
F->x_1561 = f_nn_295(F->up, ((rt_int)10LL), G_NV(F->line_1566));
(*(P173)rt_nil_check(F->x_1561)).a_ = F->p_1560;
(*(P173)rt_nil_check(F->x_1561)).name_ = (*(P109)rt_nil_check(({ A108 ix1574 = F->up->toks_111; ix1574.p[rt_index(G_NV(F->up->tpos_113), ix1574.lo, ix1574.hi) - ix1574.lo]; }))).s_;
f_skip_315(F->up);
if (f_at_op_306(F->up, rt_g_lit("(", 1))) {
f_skip_315(F->up);
f_expr_332(F->up, &(*(P173)rt_nil_check(F->x_1561)).b_);
f_expect_op_319(F->up, rt_g_lit(")", 1));
}
F->p_1560 = F->x_1561;
} else {
(*F->res_352) = F->p_1560;
goto ret_;
}
}
L_end_1568: ;
ret_:

  return;
}

static void f_component_list_355(struct f_greenc_1fr *up_, P173 *res_354) {
  struct f_component_list_355fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_354 = res_354;
F->comps_1575 = NULL;
F->ctail_1576 = NULL;
F->names_1577 = NULL;
F->st_1578 = NULL;
F->def_1579 = NULL;
F->cm_1580 = NULL;
F->v_1581 = NULL;
F->arm_1582 = NULL;
F->atail_1583 = NULL;
F->labs_1584 = NULL;
F->ltail_1585 = NULL;
F->l_1586 = NULL;
F->is_c_1587 = INT_MIN;
for (;;) {
if (f_at_kw_304(F->up, rt_g_lit("NULL", 4))) {
f_skip_315(F->up);
f_expect_op_319(F->up, rt_g_lit(";", 1));
} else if (f_at_kw_304(F->up, rt_g_lit("CASE", 4))) {
F->v_1581 = f_nn_295(F->up, ((rt_int)23LL), f_cur_line_302(F->up));
f_skip_315(F->up);
f_name_node_323(F->up, &(*(P173)rt_nil_check(F->v_1581)).a_);
f_expect_kw_317(F->up, rt_g_lit("OF", 2));
F->atail_1583 = NULL;
while (f_at_kw_304(F->up, rt_g_lit("WHEN", 4))) {
f_skip_315(F->up);
F->arm_1582 = f_nn_295(F->up, ((rt_int)60LL), f_cur_line_302(F->up));
F->labs_1584 = NULL;
F->ltail_1585 = NULL;
for (;;) {
if (f_at_kw_304(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_315(F->up);
(*(P173)rt_nil_check(F->arm_1582)).flag_ = ((rt_int)1LL);
} else {
F->l_1586 = f_nn_295(F->up, ((rt_int)61LL), f_cur_line_302(F->up));
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->l_1586)).a_);
if (f_at_op_306(F->up, rt_g_lit("..", 2))) {
f_skip_315(F->up);
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->l_1586)).b_);
}
f_append_299(F->up, &F->labs_1584, &F->ltail_1585, F->l_1586);
}
if ((!f_at_op_306(F->up, rt_g_lit("|", 1)))) {
goto L_end_1590;
}
f_skip_315(F->up);
}
L_end_1590: ;
f_expect_op_319(F->up, rt_g_lit("=>", 2));
(*(P173)rt_nil_check(F->arm_1582)).a_ = F->labs_1584;
f_component_list_355(F->up, &(*(P173)rt_nil_check(F->arm_1582)).b_);
f_append_299(F->up, &(*(P173)rt_nil_check(F->v_1581)).b_, &F->atail_1583, F->arm_1582);
}
L_end_1589: ;
f_expect_kw_317(F->up, rt_g_lit("END", 3));
f_expect_kw_317(F->up, rt_g_lit("CASE", 4));
f_expect_op_319(F->up, rt_g_lit(";", 1));
f_append_299(F->up, &F->comps_1575, &F->ctail_1576, F->v_1581);
} else if (f_at_kind_308(F->up, ((rt_int)1LL))) {
f_id_list_325(F->up, &F->names_1577);
f_expect_op_319(F->up, rt_g_lit(":", 1));
F->is_c_1587 = 0;
if (f_at_kw_304(F->up, rt_g_lit("CONSTANT", 8))) {
f_skip_315(F->up);
F->is_c_1587 = 1;
}
f_type_spec_361(F->up, &F->st_1578);
F->def_1579 = NULL;
if (f_at_op_306(F->up, rt_g_lit(":=", 2))) {
f_skip_315(F->up);
f_expr_332(F->up, &F->def_1579);
}
f_expect_op_319(F->up, rt_g_lit(";", 1));
while ((F->names_1577 != NULL)) {
F->cm_1580 = f_nn_295(F->up, ((rt_int)63LL), G_NV((*(P173)rt_nil_check(F->names_1577)).line_));
(*(P173)rt_nil_check(F->cm_1580)).name_ = (*(P173)rt_nil_check(F->names_1577)).name_;
(*(P173)rt_nil_check(F->cm_1580)).a_ = F->st_1578;
(*(P173)rt_nil_check(F->cm_1580)).b_ = F->def_1579;
if (G_NV(F->is_c_1587)) {
(*(P173)rt_nil_check(F->cm_1580)).flag_ = ((rt_int)1LL);
}
f_append_299(F->up, &F->comps_1575, &F->ctail_1576, F->cm_1580);
F->names_1577 = (*(P173)rt_nil_check(F->names_1577)).next_;
}
L_end_1591: ;
} else {
(*F->res_354) = F->comps_1575;
goto ret_;
}
}
L_end_1588: ;
ret_:

  return;
}

static void f_discrete_range_p_357(struct f_greenc_1fr *up_, P173 *res_356) {
  struct f_discrete_range_p_357fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_356 = res_356;
F->lo_1592 = NULL;
F->r_1593 = NULL;
F->line_1594 = INT64_MIN;
F->line_1594 = f_cur_line_302(F->up);
if (((f_at_kind_308(F->up, ((rt_int)1LL)) && (f_kind_at_310(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit("RANGE", 5)))) {
f_subtype_ind_359(F->up, &(*F->res_356));
goto ret_;
}
if ((((((f_at_kind_308(F->up, ((rt_int)1LL)) && (f_kind_at_310(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit(".", 1))) && (f_kind_at_310(F->up, ((rt_int)2LL)) == ((rt_int)1LL))) && (f_kind_at_310(F->up, ((rt_int)3LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_312(F->up, ((rt_int)3LL)), rt_g_lit("RANGE", 5)))) {
f_subtype_ind_359(F->up, &(*F->res_356));
goto ret_;
}
f_simple_expr_340(F->up, &F->lo_1592);
if (f_at_op_306(F->up, rt_g_lit("..", 2))) {
f_skip_315(F->up);
F->r_1593 = f_nn_295(F->up, ((rt_int)14LL), G_NV(F->line_1594));
(*(P173)rt_nil_check(F->r_1593)).a_ = F->lo_1592;
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->r_1593)).b_);
(*F->res_356) = F->r_1593;
goto ret_;
}
(*F->res_356) = F->lo_1592;
goto ret_;
ret_:

  return;
}

static void f_subtype_ind_359(struct f_greenc_1fr *up_, P173 *res_358) {
  struct f_subtype_ind_359fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_358 = res_358;
F->f_1595 = NULL;
F->x_1596 = NULL;
F->r_1597 = NULL;
F->args_1598 = NULL;
F->atail_1599 = NULL;
F->lo_1600 = NULL;
F->line_1601 = INT64_MIN;
F->line_1601 = f_cur_line_302(F->up);
F->more_1602 = INT_MIN;
F->more_1602 = 1;
F->x_1596 = f_nn_295(F->up, ((rt_int)80LL), G_NV(F->line_1601));
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_1596)).name_);
while (f_at_op_306(F->up, rt_g_lit(".", 1))) {
f_skip_315(F->up);
if (((*(P173)rt_nil_check(F->x_1596)).tag_ == NULL)) {
(*(P173)rt_nil_check(F->x_1596)).tag_ = (*(P173)rt_nil_check(F->x_1596)).name_;
} else {
(*(P173)rt_nil_check(F->x_1596)).tag_ = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->x_1596)).tag_)), one_rt_gstr(46)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->x_1596)).name_))));
}
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_1596)).name_);
}
L_end_1603: ;
if (f_at_kw_304(F->up, rt_g_lit("RANGE", 5))) {
f_skip_315(F->up);
F->r_1597 = f_nn_295(F->up, ((rt_int)14LL), G_NV(F->line_1601));
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->r_1597)).a_);
f_expect_op_319(F->up, rt_g_lit("..", 2));
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->r_1597)).b_);
(*(P173)rt_nil_check(F->x_1596)).a_ = F->r_1597;
(*(P173)rt_nil_check(F->x_1596)).flag_ = ((rt_int)1LL);
} else if (f_at_op_306(F->up, rt_g_lit("(", 1))) {
f_skip_315(F->up);
while (G_NV(F->more_1602)) {
if (((f_at_kind_308(F->up, ((rt_int)1LL)) && (f_kind_at_310(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit("=>", 2)))) {
f_expect_id_321(F->up, &F->f_1595);
f_skip_315(F->up);
f_expr_332(F->up, &F->lo_1600);
(*(P173)rt_nil_check(F->lo_1600)).formal_ = F->f_1595;
} else {
f_discrete_range_p_357(F->up, &F->lo_1600);
}
f_append_299(F->up, &F->args_1598, &F->atail_1599, F->lo_1600);
F->more_1602 = f_at_op_306(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1602)) {
f_skip_315(F->up);
}
}
L_end_1604: ;
f_expect_op_319(F->up, rt_g_lit(")", 1));
(*(P173)rt_nil_check(F->x_1596)).a_ = F->args_1598;
(*(P173)rt_nil_check(F->x_1596)).flag_ = ((rt_int)2LL);
} else if ((f_at_kw_304(F->up, rt_g_lit("DIGITS", 6)) || f_at_kw_304(F->up, rt_g_lit("DELTA", 5)))) {
f_skip_315(F->up);
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->x_1596)).b_);
(*(P173)rt_nil_check(F->x_1596)).flag_ = ((rt_int)3LL);
if (f_at_kw_304(F->up, rt_g_lit("RANGE", 5))) {
f_skip_315(F->up);
F->r_1597 = f_nn_295(F->up, ((rt_int)14LL), G_NV(F->line_1601));
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->r_1597)).a_);
f_expect_op_319(F->up, rt_g_lit("..", 2));
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->r_1597)).b_);
(*(P173)rt_nil_check(F->x_1596)).a_ = F->r_1597;
}
}
(*F->res_358) = F->x_1596;
goto ret_;
ret_:

  return;
}

static void f_type_spec_361(struct f_greenc_1fr *up_, P173 *res_360) {
  struct f_type_spec_361fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_360 = res_360;
F->x_1605 = NULL;
if ((((((((f_at_op_306(F->up, rt_g_lit("(", 1)) || f_at_kw_304(F->up, rt_g_lit("ARRAY", 5))) || f_at_kw_304(F->up, rt_g_lit("RECORD", 6))) || f_at_kw_304(F->up, rt_g_lit("ACCESS", 6))) || f_at_kw_304(F->up, rt_g_lit("RANGE", 5))) || f_at_kw_304(F->up, rt_g_lit("DIGITS", 6))) || f_at_kw_304(F->up, rt_g_lit("DELTA", 5))) || f_at_kw_304(F->up, rt_g_lit("NEW", 3)))) {
f_type_def_363(F->up, &F->x_1605);
} else {
f_subtype_ind_359(F->up, &F->x_1605);
}
(*F->res_360) = F->x_1605;
goto ret_;
ret_:

  return;
}

static void f_type_def_363(struct f_greenc_1fr *up_, P173 *res_362) {
  struct f_type_def_363fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_362 = res_362;
F->x_1606 = NULL;
F->lits_1607 = NULL;
F->ltail_1608 = NULL;
F->l_1609 = NULL;
F->idx_1610 = NULL;
F->itail_1611 = NULL;
F->r_1612 = NULL;
F->comps_1613 = NULL;
F->ctail_1614 = NULL;
F->names_1615 = NULL;
F->st_1616 = NULL;
F->def_1617 = NULL;
F->cm_1618 = NULL;
F->line_1619 = INT64_MIN;
F->line_1619 = f_cur_line_302(F->up);
F->more_1620 = INT_MIN;
F->more_1620 = 1;
if (f_at_op_306(F->up, rt_g_lit("(", 1))) {
f_skip_315(F->up);
F->x_1606 = f_nn_295(F->up, ((rt_int)70LL), G_NV(F->line_1619));
while (G_NV(F->more_1620)) {
if (f_at_kind_308(F->up, ((rt_int)6LL))) {
F->l_1609 = f_nn_295(F->up, ((rt_int)3LL), G_NV(F->line_1619));
(*(P173)rt_nil_check(F->l_1609)).name_ = (*(P109)rt_nil_check(({ A108 ix1622 = F->up->toks_111; ix1622.p[rt_index(G_NV(F->up->tpos_113), ix1622.lo, ix1622.hi) - ix1622.lo]; }))).s_;
f_skip_315(F->up);
} else {
f_name_node_323(F->up, &F->l_1609);
}
f_append_299(F->up, &F->lits_1607, &F->ltail_1608, F->l_1609);
F->more_1620 = f_at_op_306(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1620)) {
f_skip_315(F->up);
}
}
L_end_1621: ;
f_expect_op_319(F->up, rt_g_lit(")", 1));
(*(P173)rt_nil_check(F->x_1606)).a_ = F->lits_1607;
(*F->res_362) = F->x_1606;
goto ret_;
}
if (f_at_kw_304(F->up, rt_g_lit("RANGE", 5))) {
f_skip_315(F->up);
F->x_1606 = f_nn_295(F->up, ((rt_int)71LL), G_NV(F->line_1619));
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->x_1606)).a_);
f_expect_op_319(F->up, rt_g_lit("..", 2));
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->x_1606)).b_);
(*F->res_362) = F->x_1606;
goto ret_;
}
if ((f_at_kw_304(F->up, rt_g_lit("DIGITS", 6)) || f_at_kw_304(F->up, rt_g_lit("DELTA", 5)))) {
F->x_1606 = f_nn_295(F->up, ((rt_int)72LL), G_NV(F->line_1619));
(*(P173)rt_nil_check(F->x_1606)).flag_ = ((rt_int)1LL);
if (f_at_kw_304(F->up, rt_g_lit("DELTA", 5))) {
(*(P173)rt_nil_check(F->x_1606)).flag_ = ((rt_int)2LL);
}
f_skip_315(F->up);
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->x_1606)).a_);
if (f_at_kw_304(F->up, rt_g_lit("RANGE", 5))) {
f_skip_315(F->up);
F->r_1612 = f_nn_295(F->up, ((rt_int)14LL), G_NV(F->line_1619));
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->r_1612)).a_);
f_expect_op_319(F->up, rt_g_lit("..", 2));
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->r_1612)).b_);
(*(P173)rt_nil_check(F->x_1606)).b_ = F->r_1612;
}
(*F->res_362) = F->x_1606;
goto ret_;
}
if (f_at_kw_304(F->up, rt_g_lit("ARRAY", 5))) {
f_skip_315(F->up);
F->x_1606 = f_nn_295(F->up, ((rt_int)73LL), G_NV(F->line_1619));
f_expect_op_319(F->up, rt_g_lit("(", 1));
while (G_NV(F->more_1620)) {
if (((f_at_kind_308(F->up, ((rt_int)1LL)) && (f_kind_at_310(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit(",", 1)) || eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit(")", 1))))) {
F->l_1609 = f_nn_295(F->up, ((rt_int)80LL), G_NV(F->line_1619));
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->l_1609)).name_);
(*(P173)rt_nil_check(F->x_1606)).flag_ = ((rt_int)1LL);
} else {
f_discrete_range_p_357(F->up, &F->l_1609);
if (((G_NV((*(P173)rt_nil_check(F->l_1609)).kind_) != ((rt_int)14LL)) && (G_NV((*(P173)rt_nil_check(F->l_1609)).kind_) != ((rt_int)80LL)))) {
f_perror_314(F->up, rt_g_lit("an index is a discrete range or a type mark (RM79 3.6)", 54));
}
}
f_append_299(F->up, &F->idx_1610, &F->itail_1611, F->l_1609);
F->more_1620 = f_at_op_306(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1620)) {
f_skip_315(F->up);
}
}
L_end_1623: ;
f_expect_op_319(F->up, rt_g_lit(")", 1));
f_expect_kw_317(F->up, rt_g_lit("OF", 2));
(*(P173)rt_nil_check(F->x_1606)).a_ = F->idx_1610;
f_type_spec_361(F->up, &(*(P173)rt_nil_check(F->x_1606)).b_);
(*F->res_362) = F->x_1606;
goto ret_;
}
if (f_at_kw_304(F->up, rt_g_lit("RECORD", 6))) {
f_skip_315(F->up);
F->x_1606 = f_nn_295(F->up, ((rt_int)74LL), G_NV(F->line_1619));
f_component_list_355(F->up, &(*(P173)rt_nil_check(F->x_1606)).a_);
f_expect_kw_317(F->up, rt_g_lit("END", 3));
f_expect_kw_317(F->up, rt_g_lit("RECORD", 6));
(*F->res_362) = F->x_1606;
goto ret_;
}
if (f_at_kw_304(F->up, rt_g_lit("ACCESS", 6))) {
f_skip_315(F->up);
F->x_1606 = f_nn_295(F->up, ((rt_int)75LL), G_NV(F->line_1619));
f_type_spec_361(F->up, &(*(P173)rt_nil_check(F->x_1606)).a_);
(*F->res_362) = F->x_1606;
goto ret_;
}
if (f_at_kw_304(F->up, rt_g_lit("NEW", 3))) {
f_skip_315(F->up);
F->x_1606 = f_nn_295(F->up, ((rt_int)76LL), G_NV(F->line_1619));
f_subtype_ind_359(F->up, &(*(P173)rt_nil_check(F->x_1606)).a_);
(*F->res_362) = F->x_1606;
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
F->x_1624 = NULL;
F->a_1625 = NULL;
F->head_1626 = NULL;
F->tail_1627 = NULL;
F->x_1624 = f_nn_295(F->up, ((rt_int)56LL), f_cur_line_302(F->up));
f_expect_kw_317(F->up, rt_g_lit("PRAGMA", 6));
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_1624)).name_);
if (f_at_op_306(F->up, rt_g_lit("(", 1))) {
f_skip_315(F->up);
for (;;) {
if (f_at_kind_308(F->up, ((rt_int)1LL))) {
f_name_node_323(F->up, &F->a_1625);
} else if (((f_at_kind_308(F->up, ((rt_int)6LL)) || f_at_kind_308(F->up, ((rt_int)4LL))) || f_at_kind_308(F->up, ((rt_int)5LL)))) {
f_primary_346(F->up, &F->a_1625);
} else {
f_perror_314(F->up, rt_g_lit("a pragma argument is an identifier, a string or a number (RM79 2.7)", 67));
}
f_append_299(F->up, &F->head_1626, &F->tail_1627, F->a_1625);
if ((!f_at_op_306(F->up, rt_g_lit(",", 1)))) {
goto L_end_1628;
}
f_skip_315(F->up);
}
L_end_1628: ;
f_expect_op_319(F->up, rt_g_lit(")", 1));
}
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*(P173)rt_nil_check(F->x_1624)).a_ = F->head_1626;
f_check_pragma_367(F->up, F->x_1624);
(*F->res_364) = F->x_1624;
ret_:

  return;
}

static void f_check_pragma_367(struct f_greenc_1fr *up_, P173 x_366) {
  struct f_check_pragma_367fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_366 = x_366;
F->p_1629 = cp_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->x_366)).name_)));
F->n_1630 = INT64_MIN;
F->n_1630 = f_list_len_301(F->up, (*(P173)rt_nil_check(F->x_366)).a_);
F->a_1631 = NULL;
F->a_1631 = (*(P173)rt_nil_check(F->x_366)).a_;
if ((eq_rt_gstr(F->p_1629, rt_g_lit("PAGE", 4)) || eq_rt_gstr(F->p_1629, rt_g_lit("INLINE", 6)))) {
if ((G_NV(F->n_1630) != ((rt_int)0LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->x_366)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1629), rt_g_lit(" takes no argument (RM79 App. B)", 32)));
}
} else if (((((eq_rt_gstr(F->p_1629, rt_g_lit("LIST", 4)) || eq_rt_gstr(F->p_1629, rt_g_lit("OPTIMIZE", 8))) || eq_rt_gstr(F->p_1629, rt_g_lit("CREATION", 8))) || eq_rt_gstr(F->p_1629, rt_g_lit("INTERFACE", 9))) || eq_rt_gstr(F->p_1629, rt_g_lit("SYSTEM", 6)))) {
if (((G_NV(F->n_1630) != ((rt_int)1LL)) || (G_NV((*(P173)rt_nil_check(F->a_1631)).kind_) != ((rt_int)5LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->x_366)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1629), rt_g_lit(" takes one identifier (RM79 App. B)", 35)));
}
if (((eq_rt_gstr(F->p_1629, rt_g_lit("LIST", 4)) && (!eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->a_1631)).name_)), rt_g_lit("ON", 2)))) && (!eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->a_1631)).name_)), rt_g_lit("OFF", 3))))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->x_366)).line_), rt_g_lit("pragma LIST(ON) or LIST(OFF) (RM79 App. B)", 42));
} else if (((eq_rt_gstr(F->p_1629, rt_g_lit("OPTIMIZE", 8)) && (!eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->a_1631)).name_)), rt_g_lit("TIME", 4)))) && (!eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->a_1631)).name_)), rt_g_lit("SPACE", 5))))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->x_366)).line_), rt_g_lit("pragma OPTIMIZE(TIME) or OPTIMIZE(SPACE) (RM79 App. B)", 54));
} else if (((eq_rt_gstr(F->p_1629, rt_g_lit("CREATION", 8)) && (!eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->a_1631)).name_)), rt_g_lit("STATIC", 6)))) && (!eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->a_1631)).name_)), rt_g_lit("DYNAMIC", 7))))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->x_366)).line_), rt_g_lit("pragma CREATION(STATIC) or CREATION(DYNAMIC) (RM79 9.2)", 55));
}
if (eq_rt_gstr(F->p_1629, rt_g_lit("OPTIMIZE", 8))) {
F->up->conf_optimize_219 = (*(P173)rt_nil_check(F->a_1631)).name_;
} else if (eq_rt_gstr(F->p_1629, rt_g_lit("SYSTEM", 6))) {
F->up->conf_system_216 = (*(P173)rt_nil_check(F->a_1631)).name_;
}
} else if ((eq_rt_gstr(F->p_1629, rt_g_lit("STORAGE_UNIT", 12)) || eq_rt_gstr(F->p_1629, rt_g_lit("MEMORY_SIZE", 11)))) {
if (((G_NV(F->n_1630) != ((rt_int)1LL)) || (G_NV((*(P173)rt_nil_check(F->a_1631)).kind_) != ((rt_int)1LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->x_366)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1629), rt_g_lit(" takes a number (RM79 13.7)", 27)));
}
if (eq_rt_gstr(F->p_1629, rt_g_lit("STORAGE_UNIT", 12))) {
F->up->conf_storage_unit_217 = G_NV((*(P173)rt_nil_check(F->a_1631)).ival_);
} else {
F->up->conf_memory_size_218 = G_NV((*(P173)rt_nil_check(F->a_1631)).ival_);
}
} else if ((eq_rt_gstr(F->p_1629, rt_g_lit("SUPPRESS", 8)) || eq_rt_gstr(F->p_1629, rt_g_lit("ENVIRONMENT", 11)))) {
if ((G_NV(F->n_1630) == ((rt_int)0LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->x_366)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1629), rt_g_lit(" names at least one ", 20)), rt_g_lit("unit or exception (RM79 App. B)", 31)));
}
while ((F->a_1631 != NULL)) {
if ((G_NV((*(P173)rt_nil_check(F->a_1631)).kind_) != ((rt_int)5LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->x_366)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1629), rt_g_lit(" takes names (RM79 App. B)", 26)));
}
F->a_1631 = (*(P173)rt_nil_check(F->a_1631)).next_;
}
L_end_1632: ;
} else if (eq_rt_gstr(F->p_1629, rt_g_lit("INCLUDE", 7))) {
if (((G_NV(F->n_1630) != ((rt_int)1LL)) || (G_NV((*(P173)rt_nil_check(F->a_1631)).kind_) != ((rt_int)3LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->x_366)).line_), rt_g_lit("pragma INCLUDE takes the name of a file (RM79 App. B)", 53));
}
}
ret_:

  return;
}

static void f_skip_visibility_368(struct f_greenc_1fr *up_) {
  struct f_skip_visibility_368fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->names_1633 = NULL;
f_skip_315(F->up);
if (f_at_op_306(F->up, rt_g_lit("(", 1))) {
f_skip_315(F->up);
f_id_list_325(F->up, &F->names_1633);
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
L_end_1634: ;
f_skip_315(F->up);
if (f_at_kw_304(F->up, rt_g_lit("RECORD", 6))) {
while ((!((f_at_kw_304(F->up, rt_g_lit("END", 3)) && (f_kind_at_310(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit("RECORD", 6))))) {
f_skip_315(F->up);
}
L_end_1635: ;
f_skip_315(F->up);
f_skip_315(F->up);
}
while ((!f_at_op_306(F->up, rt_g_lit(";", 1)))) {
f_skip_315(F->up);
}
L_end_1636: ;
f_skip_315(F->up);
ret_:

  return;
}

static void f_decl_part_371(struct f_greenc_1fr *up_, P173 *res_370) {
  struct f_decl_part_371fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_370 = res_370;
F->head_1637 = NULL;
F->tail_1638 = NULL;
F->x_1639 = NULL;
F->names_1640 = NULL;
for (;;) {
if (f_at_kw_304(F->up, rt_g_lit("PRAGMA", 6))) {
f_pragma_p_365(F->up, &F->x_1639);
f_append_299(F->up, &F->head_1637, &F->tail_1638, F->x_1639);
} else if (f_at_kw_304(F->up, rt_g_lit("USE", 3))) {
f_skip_315(F->up);
F->x_1639 = f_nn_295(F->up, ((rt_int)55LL), f_cur_line_302(F->up));
f_id_list_325(F->up, &(*(P173)rt_nil_check(F->x_1639)).a_);
f_expect_op_319(F->up, rt_g_lit(";", 1));
f_append_299(F->up, &F->head_1637, &F->tail_1638, F->x_1639);
} else if (f_at_kw_304(F->up, rt_g_lit("RESTRICTED", 10))) {
f_skip_visibility_368(F->up);
} else if (f_at_kw_304(F->up, rt_g_lit("FOR", 3))) {
f_skip_representation_369(F->up);
} else if ((f_at_kw_304(F->up, rt_g_lit("TYPE", 4)) || f_at_kw_304(F->up, rt_g_lit("SUBTYPE", 7)))) {
f_type_decl_375(F->up, &F->x_1639);
f_append_299(F->up, &F->head_1637, &F->tail_1638, F->x_1639);
} else if ((f_at_kw_304(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_304(F->up, rt_g_lit("FUNCTION", 8)))) {
f_subprogram_381(F->up, &F->x_1639);
f_append_299(F->up, &F->head_1637, &F->tail_1638, F->x_1639);
} else if (f_at_kw_304(F->up, rt_g_lit("PACKAGE", 7))) {
f_package_p_387(F->up, &F->x_1639);
f_append_299(F->up, &F->head_1637, &F->tail_1638, F->x_1639);
} else if (f_at_kw_304(F->up, rt_g_lit("TASK", 4))) {
f_task_p_1065(F->up, &F->x_1639);
f_append_299(F->up, &F->head_1637, &F->tail_1638, F->x_1639);
} else if (f_at_kw_304(F->up, rt_g_lit("GENERIC", 7))) {
f_generic_p_1195(F->up, &F->x_1639);
f_append_299(F->up, &F->head_1637, &F->tail_1638, F->x_1639);
} else if (f_at_kw_304(F->up, rt_g_lit("ENTRY", 5))) {
f_entry_p_1067(F->up, &F->x_1639);
f_append_299(F->up, &F->head_1637, &F->tail_1638, F->x_1639);
} else if (((f_at_kind_308(F->up, ((rt_int)1LL)) && (f_kind_at_310(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit(":", 1)) || eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit(",", 1))))) {
f_object_decl_373(F->up, &F->x_1639);
f_append_299(F->up, &F->head_1637, &F->tail_1638, F->x_1639);
} else {
(*F->res_370) = F->head_1637;
goto ret_;
}
}
L_end_1641: ;
ret_:

  return;
}

static void f_object_decl_373(struct f_greenc_1fr *up_, P173 *res_372) {
  struct f_object_decl_373fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_372 = res_372;
F->head_1642 = NULL;
F->tail_1643 = NULL;
F->names_1644 = NULL;
F->st_1645 = NULL;
F->init_1646 = NULL;
F->x_1647 = NULL;
F->line_1648 = INT64_MIN;
F->line_1648 = f_cur_line_302(F->up);
F->is_const_1649 = INT_MIN;
F->is_const_1649 = 0;
f_id_list_325(F->up, &F->names_1644);
f_expect_op_319(F->up, rt_g_lit(":", 1));
if (f_at_kw_304(F->up, rt_g_lit("EXCEPTION", 9))) {
f_skip_315(F->up);
if (f_at_kw_304(F->up, rt_g_lit("RENAMES", 7))) {
f_skip_315(F->up);
F->x_1647 = f_nn_295(F->up, ((rt_int)46LL), G_NV(F->line_1648));
(*(P173)rt_nil_check(F->x_1647)).name_ = (*(P173)rt_nil_check(F->names_1644)).name_;
f_name_p_353(F->up, &(*(P173)rt_nil_check(F->x_1647)).a_);
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_372) = F->x_1647;
goto ret_;
}
f_expect_op_319(F->up, rt_g_lit(";", 1));
while ((F->names_1644 != NULL)) {
F->x_1647 = f_nn_295(F->up, ((rt_int)46LL), G_NV(F->line_1648));
(*(P173)rt_nil_check(F->x_1647)).name_ = (*(P173)rt_nil_check(F->names_1644)).name_;
f_append_299(F->up, &F->head_1642, &F->tail_1643, F->x_1647);
F->names_1644 = (*(P173)rt_nil_check(F->names_1644)).next_;
}
L_end_1650: ;
(*F->res_372) = F->head_1642;
goto ret_;
}
if (f_at_kw_304(F->up, rt_g_lit("CONSTANT", 8))) {
f_skip_315(F->up);
F->is_const_1649 = 1;
}
f_type_spec_361(F->up, &F->st_1645);
if ((f_at_kw_304(F->up, rt_g_lit("RENAMES", 7)) && (!G_NV(F->is_const_1649)))) {
f_skip_315(F->up);
F->x_1647 = f_nn_295(F->up, ((rt_int)40LL), G_NV(F->line_1648));
(*(P173)rt_nil_check(F->x_1647)).name_ = (*(P173)rt_nil_check(F->names_1644)).name_;
(*(P173)rt_nil_check(F->x_1647)).a_ = F->st_1645;
(*(P173)rt_nil_check(F->x_1647)).flag_ = ((rt_int)2LL);
f_expr_332(F->up, &(*(P173)rt_nil_check(F->x_1647)).b_);
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_372) = F->x_1647;
goto ret_;
}
if (f_at_op_306(F->up, rt_g_lit(":=", 2))) {
f_skip_315(F->up);
f_expr_332(F->up, &F->init_1646);
}
f_expect_op_319(F->up, rt_g_lit(";", 1));
while ((F->names_1644 != NULL)) {
if (G_NV(F->is_const_1649)) {
F->x_1647 = f_nn_295(F->up, ((rt_int)41LL), G_NV(F->line_1648));
} else {
F->x_1647 = f_nn_295(F->up, ((rt_int)40LL), G_NV(F->line_1648));
}
(*(P173)rt_nil_check(F->x_1647)).name_ = (*(P173)rt_nil_check(F->names_1644)).name_;
(*(P173)rt_nil_check(F->x_1647)).a_ = F->st_1645;
(*(P173)rt_nil_check(F->x_1647)).b_ = F->init_1646;
f_append_299(F->up, &F->head_1642, &F->tail_1643, F->x_1647);
F->names_1644 = (*(P173)rt_nil_check(F->names_1644)).next_;
}
L_end_1651: ;
(*F->res_372) = F->head_1642;
goto ret_;
ret_:

  return;
}

static void f_type_decl_375(struct f_greenc_1fr *up_, P173 *res_374) {
  struct f_type_decl_375fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_374 = res_374;
F->x_1652 = NULL;
F->line_1653 = INT64_MIN;
F->line_1653 = f_cur_line_302(F->up);
if (f_at_kw_304(F->up, rt_g_lit("SUBTYPE", 7))) {
f_skip_315(F->up);
F->x_1652 = f_nn_295(F->up, ((rt_int)43LL), G_NV(F->line_1653));
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_1652)).name_);
f_expect_kw_317(F->up, rt_g_lit("IS", 2));
f_subtype_ind_359(F->up, &(*(P173)rt_nil_check(F->x_1652)).a_);
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_374) = F->x_1652;
goto ret_;
}
f_expect_kw_317(F->up, rt_g_lit("TYPE", 4));
F->x_1652 = f_nn_295(F->up, ((rt_int)42LL), G_NV(F->line_1653));
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_1652)).name_);
if (f_at_op_306(F->up, rt_g_lit(";", 1))) {
f_skip_315(F->up);
(*F->res_374) = NULL;
goto ret_;
}
f_expect_kw_317(F->up, rt_g_lit("IS", 2));
if (f_at_kw_304(F->up, rt_g_lit("PRIVATE", 7))) {
f_skip_315(F->up);
(*(P173)rt_nil_check(F->x_1652)).a_ = f_nn_295(F->up, ((rt_int)77LL), G_NV(F->line_1653));
} else {
f_type_def_363(F->up, &(*(P173)rt_nil_check(F->x_1652)).a_);
}
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_374) = F->x_1652;
goto ret_;
ret_:

  return;
}

static void f_formal_part_377(struct f_greenc_1fr *up_, P173 *res_376) {
  struct f_formal_part_377fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_376 = res_376;
F->head_1654 = NULL;
F->tail_1655 = NULL;
F->names_1656 = NULL;
F->st_1657 = NULL;
F->def_1658 = NULL;
F->p_1659 = NULL;
F->mode_1660 = INT64_MIN;
F->more_1661 = INT_MIN;
F->more_1661 = 1;
f_expect_op_319(F->up, rt_g_lit("(", 1));
while (G_NV(F->more_1661)) {
f_id_list_325(F->up, &F->names_1656);
f_expect_op_319(F->up, rt_g_lit(":", 1));
F->mode_1660 = ((rt_int)1LL);
if (f_at_kw_304(F->up, rt_g_lit("IN", 2))) {
f_skip_315(F->up);
if (f_at_kw_304(F->up, rt_g_lit("OUT", 3))) {
f_skip_315(F->up);
F->mode_1660 = ((rt_int)2LL);
}
} else if (f_at_kw_304(F->up, rt_g_lit("OUT", 3))) {
f_skip_315(F->up);
F->mode_1660 = ((rt_int)3LL);
}
f_subtype_ind_359(F->up, &F->st_1657);
F->def_1658 = NULL;
if (f_at_op_306(F->up, rt_g_lit(":=", 2))) {
f_skip_315(F->up);
f_expr_332(F->up, &F->def_1658);
}
while ((F->names_1656 != NULL)) {
F->p_1659 = f_nn_295(F->up, ((rt_int)47LL), G_NV((*(P173)rt_nil_check(F->names_1656)).line_));
(*(P173)rt_nil_check(F->p_1659)).name_ = (*(P173)rt_nil_check(F->names_1656)).name_;
(*(P173)rt_nil_check(F->p_1659)).ival_ = G_NV(F->mode_1660);
(*(P173)rt_nil_check(F->p_1659)).a_ = F->st_1657;
(*(P173)rt_nil_check(F->p_1659)).b_ = F->def_1658;
f_append_299(F->up, &F->head_1654, &F->tail_1655, F->p_1659);
F->names_1656 = (*(P173)rt_nil_check(F->names_1656)).next_;
}
L_end_1663: ;
F->more_1661 = f_at_op_306(F->up, rt_g_lit(";", 1));
if (G_NV(F->more_1661)) {
f_skip_315(F->up);
}
}
L_end_1662: ;
f_expect_op_319(F->up, rt_g_lit(")", 1));
(*F->res_376) = F->head_1654;
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
(*F->res_378) = f_mk_221(F->up, f_upper_s_234(F->up, (*(P139)rt_nil_check((*(P109)rt_nil_check(({ A108 ix1667 = F->up->toks_111; ix1667.p[rt_index(rt_sub(G_NV(F->up->tpos_113), ((rt_int)1LL)), ix1667.lo, ix1667.hi) - ix1667.lo]; }))).s_))));
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
F->x_1668 = NULL;
F->line_1669 = INT64_MIN;
F->line_1669 = f_cur_line_302(F->up);
F->is_proc_1670 = INT_MIN;
F->is_proc_1670 = f_at_kw_304(F->up, rt_g_lit("PROCEDURE", 9));
f_skip_315(F->up);
if (G_NV(F->is_proc_1670)) {
F->x_1668 = f_nn_295(F->up, ((rt_int)44LL), G_NV(F->line_1669));
} else {
F->x_1668 = f_nn_295(F->up, ((rt_int)45LL), G_NV(F->line_1669));
}
f_designator_379(F->up, &(*(P173)rt_nil_check(F->x_1668)).name_);
if (((f_at_kw_304(F->up, rt_g_lit("IS", 2)) && (f_kind_at_310(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit("NEW", 3)))) {
f_instantiation_1198(F->up, F->x_1668, &(*F->res_380));
goto ret_;
}
if (f_at_op_306(F->up, rt_g_lit("(", 1))) {
f_formal_part_377(F->up, &(*(P173)rt_nil_check(F->x_1668)).a_);
}
if (f_at_kw_304(F->up, rt_g_lit("RETURN", 6))) {
f_skip_315(F->up);
f_subtype_ind_359(F->up, &(*(P173)rt_nil_check(F->x_1668)).b_);
if (G_NV(F->is_proc_1670)) {
(*(P173)rt_nil_check(F->x_1668)).flag_ = ((rt_int)1LL);
}
} else if ((!G_NV(F->is_proc_1670))) {
f_perror_314(F->up, rt_g_lit("a function needs a RETURN clause", 32));
}
if (f_at_op_306(F->up, rt_g_lit(";", 1))) {
f_skip_315(F->up);
(*(P173)rt_nil_check(F->x_1668)).ival_ = ((rt_int)1LL);
(*F->res_380) = F->x_1668;
goto ret_;
}
f_expect_kw_317(F->up, rt_g_lit("IS", 2));
if (f_at_kw_304(F->up, rt_g_lit("SEPARATE", 8))) {
f_perror_314(F->up, rt_g_lit("separate bodies are not handled", 31));
}
f_body_part_383(F->up, F->x_1668);
if ((f_at_kind_308(F->up, ((rt_int)1LL)) || f_at_kind_308(F->up, ((rt_int)6LL)))) {
if ((!eq_rt_gstr((*(P139)rt_nil_check((*(P109)rt_nil_check(({ A108 ix1671 = F->up->toks_111; ix1671.p[rt_index(G_NV(F->up->tpos_113), ix1671.lo, ix1671.hi) - ix1671.lo]; }))).s_)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->x_1668)).name_))))) {
f_perror_314(F->up, cat_rt_gstr(rt_g_lit("the name after END does not match ", 34), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->x_1668)).name_))));
}
f_skip_315(F->up);
}
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_380) = F->x_1668;
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
F->head_1672 = NULL;
F->tail_1673 = NULL;
F->h_1674 = NULL;
F->names_1675 = NULL;
F->ntail_1676 = NULL;
F->n_1677 = NULL;
f_expect_kw_317(F->up, rt_g_lit("EXCEPTION", 9));
while (f_at_kw_304(F->up, rt_g_lit("WHEN", 4))) {
f_skip_315(F->up);
F->h_1674 = f_nn_295(F->up, ((rt_int)62LL), f_cur_line_302(F->up));
F->names_1675 = NULL;
F->ntail_1676 = NULL;
for (;;) {
if (f_at_kw_304(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_315(F->up);
F->n_1677 = f_nn_295(F->up, ((rt_int)5LL), f_cur_line_302(F->up));
(*(P173)rt_nil_check(F->n_1677)).name_ = f_mk_221(F->up, rt_g_lit("OTHERS", 6));
} else {
f_name_node_323(F->up, &F->n_1677);
while (f_at_op_306(F->up, rt_g_lit(".", 1))) {
f_skip_315(F->up);
if (((*(P173)rt_nil_check(F->n_1677)).tag_ == NULL)) {
(*(P173)rt_nil_check(F->n_1677)).tag_ = (*(P173)rt_nil_check(F->n_1677)).name_;
} else {
(*(P173)rt_nil_check(F->n_1677)).tag_ = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->n_1677)).tag_)), one_rt_gstr(46)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->n_1677)).name_))));
}
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->n_1677)).name_);
}
L_end_1680: ;
}
f_append_299(F->up, &F->names_1675, &F->ntail_1676, F->n_1677);
if ((!f_at_op_306(F->up, rt_g_lit("|", 1)))) {
goto L_end_1679;
}
f_skip_315(F->up);
}
L_end_1679: ;
f_expect_op_319(F->up, rt_g_lit("=>", 2));
(*(P173)rt_nil_check(F->h_1674)).a_ = F->names_1675;
f_statements_390(F->up, &(*(P173)rt_nil_check(F->h_1674)).b_);
f_append_299(F->up, &F->head_1672, &F->tail_1673, F->h_1674);
}
L_end_1678: ;
(*F->res_384) = F->head_1672;
goto ret_;
ret_:

  return;
}

static void f_package_p_387(struct f_greenc_1fr *up_, P173 *res_386) {
  struct f_package_p_387fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_386 = res_386;
F->x_1681 = NULL;
F->line_1682 = INT64_MIN;
F->line_1682 = f_cur_line_302(F->up);
f_expect_kw_317(F->up, rt_g_lit("PACKAGE", 7));
if (f_at_kw_304(F->up, rt_g_lit("BODY", 4))) {
f_skip_315(F->up);
F->x_1681 = f_nn_295(F->up, ((rt_int)49LL), G_NV(F->line_1682));
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_1681)).name_);
f_expect_kw_317(F->up, rt_g_lit("IS", 2));
f_body_part_383(F->up, F->x_1681);
} else {
F->x_1681 = f_nn_295(F->up, ((rt_int)48LL), G_NV(F->line_1682));
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_1681)).name_);
if (((f_at_kw_304(F->up, rt_g_lit("IS", 2)) && (f_kind_at_310(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit("NEW", 3)))) {
f_instantiation_1198(F->up, F->x_1681, &(*F->res_386));
goto ret_;
}
f_expect_kw_317(F->up, rt_g_lit("IS", 2));
f_decl_part_371(F->up, &(*(P173)rt_nil_check(F->x_1681)).c_);
if (f_at_kw_304(F->up, rt_g_lit("PRIVATE", 7))) {
f_skip_315(F->up);
f_decl_part_371(F->up, &(*(P173)rt_nil_check(F->x_1681)).d_);
}
f_expect_kw_317(F->up, rt_g_lit("END", 3));
}
if (f_at_kind_308(F->up, ((rt_int)1LL))) {
f_skip_315(F->up);
}
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_386) = F->x_1681;
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
F->head_1683 = NULL;
F->tail_1684 = NULL;
F->x_1685 = NULL;
while ((!f_at_statements_end_388(F->up))) {
if (f_at_kw_304(F->up, rt_g_lit("PRAGMA", 6))) {
f_pragma_p_365(F->up, &F->x_1685);
if (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->x_1685)).name_)), rt_g_lit("INTERFACE", 9))) {
F->up->saw_interface_201 = 1;
}
} else {
f_statement_392(F->up, &F->x_1685);
f_append_299(F->up, &F->head_1683, &F->tail_1684, F->x_1685);
}
}
L_end_1686: ;
(*F->res_389) = F->head_1683;
goto ret_;
ret_:

  return;
}

static void f_statement_392(struct f_greenc_1fr *up_, P173 *res_391) {
  struct f_statement_392fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_391 = res_391;
F->l_1687 = NULL;
F->x_1688 = NULL;
F->label_1689 = NULL;
if (f_at_op_306(F->up, rt_g_lit("<<", 2))) {
F->l_1687 = f_nn_295(F->up, ((rt_int)57LL), f_cur_line_302(F->up));
f_skip_315(F->up);
f_expect_id_321(F->up, &F->label_1689);
f_expect_op_319(F->up, rt_g_lit(">>", 2));
(*(P173)rt_nil_check(F->l_1687)).name_ = F->label_1689;
if (f_at_op_306(F->up, rt_g_lit("<<", 2))) {
f_statement_392(F->up, &F->x_1688);
} else {
f_labelled_statement_395(F->up, F->label_1689, &F->x_1688);
}
(*(P173)rt_nil_check(F->l_1687)).next_ = F->x_1688;
(*F->res_391) = F->l_1687;
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
F->x_1690 = NULL;
F->t_1691 = NULL;
F->line_1692 = INT64_MIN;
F->line_1692 = f_cur_line_302(F->up);
if (f_at_kw_304(F->up, rt_g_lit("NULL", 4))) {
f_skip_315(F->up);
f_expect_op_319(F->up, rt_g_lit(";", 1));
F->x_1690 = f_nn_295(F->up, ((rt_int)31LL), G_NV(F->line_1692));
(*F->res_394) = F->x_1690;
goto ret_;
} else if (f_at_kw_304(F->up, rt_g_lit("IF", 2))) {
f_if_stmt_399(F->up, &F->x_1690);
(*F->res_394) = F->x_1690;
goto ret_;
} else if (f_at_kw_304(F->up, rt_g_lit("CASE", 4))) {
f_case_stmt_401(F->up, &F->x_1690);
(*F->res_394) = F->x_1690;
goto ret_;
} else if (((f_at_kw_304(F->up, rt_g_lit("FOR", 3)) || f_at_kw_304(F->up, rt_g_lit("WHILE", 5))) || f_at_kw_304(F->up, rt_g_lit("LOOP", 4)))) {
f_loop_stmt_403(F->up, &F->x_1690);
(*(P173)rt_nil_check(F->x_1690)).tag_ = F->label_393;
if (f_at_kind_308(F->up, ((rt_int)1LL))) {
if (((F->label_393 == NULL) || (!eq_rt_gstr((*(P139)rt_nil_check((*(P109)rt_nil_check(({ A108 ix1693 = F->up->toks_111; ix1693.p[rt_index(G_NV(F->up->tpos_113), ix1693.lo, ix1693.hi) - ix1693.lo]; }))).s_)), (*(P139)rt_nil_check(F->label_393)))))) {
f_perror_314(F->up, rt_g_lit("the name after END LOOP does not match the label", 48));
}
f_skip_315(F->up);
} else if ((F->label_393 != NULL)) {
f_perror_314(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the loop labelled ", 18), (*(P139)rt_nil_check(F->label_393))), rt_g_lit(" ends with end loop ", 20)), (*(P139)rt_nil_check(F->label_393))), rt_g_lit(" (RM79 5.6)", 11)));
}
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_394) = F->x_1690;
goto ret_;
} else if ((f_at_kw_304(F->up, rt_g_lit("DECLARE", 7)) || f_at_kw_304(F->up, rt_g_lit("BEGIN", 5)))) {
F->x_1690 = f_nn_295(F->up, ((rt_int)25LL), G_NV(F->line_1692));
(*(P173)rt_nil_check(F->x_1690)).tag_ = F->label_393;
if (f_at_kw_304(F->up, rt_g_lit("DECLARE", 7))) {
f_skip_315(F->up);
f_decl_part_371(F->up, &(*(P173)rt_nil_check(F->x_1690)).a_);
}
f_expect_kw_317(F->up, rt_g_lit("BEGIN", 5));
f_statements_390(F->up, &(*(P173)rt_nil_check(F->x_1690)).b_);
if (f_at_kw_304(F->up, rt_g_lit("EXCEPTION", 9))) {
f_parse_handlers_385(F->up, &(*(P173)rt_nil_check(F->x_1690)).c_);
}
f_expect_kw_317(F->up, rt_g_lit("END", 3));
if (f_at_kind_308(F->up, ((rt_int)1LL))) {
if (((F->label_393 == NULL) || (!eq_rt_gstr((*(P139)rt_nil_check((*(P109)rt_nil_check(({ A108 ix1694 = F->up->toks_111; ix1694.p[rt_index(G_NV(F->up->tpos_113), ix1694.lo, ix1694.hi) - ix1694.lo]; }))).s_)), (*(P139)rt_nil_check(F->label_393)))))) {
f_perror_314(F->up, rt_g_lit("the name after END does not match the label of the block (RM79 6.7)", 67));
}
f_skip_315(F->up);
} else if ((F->label_393 != NULL)) {
f_perror_314(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the block labelled ", 19), (*(P139)rt_nil_check(F->label_393))), rt_g_lit(" ends with end ", 15)), (*(P139)rt_nil_check(F->label_393))), rt_g_lit(" (RM79 6.7)", 11)));
}
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_394) = F->x_1690;
goto ret_;
} else if (f_at_kw_304(F->up, rt_g_lit("EXIT", 4))) {
f_skip_315(F->up);
F->x_1690 = f_nn_295(F->up, ((rt_int)26LL), G_NV(F->line_1692));
if (f_at_kind_308(F->up, ((rt_int)1LL))) {
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_1690)).name_);
}
if (f_at_kw_304(F->up, rt_g_lit("WHEN", 4))) {
f_skip_315(F->up);
f_expr_332(F->up, &(*(P173)rt_nil_check(F->x_1690)).a_);
}
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_394) = F->x_1690;
goto ret_;
} else if (f_at_kw_304(F->up, rt_g_lit("RETURN", 6))) {
f_skip_315(F->up);
F->x_1690 = f_nn_295(F->up, ((rt_int)27LL), G_NV(F->line_1692));
if ((!f_at_op_306(F->up, rt_g_lit(";", 1)))) {
f_expr_332(F->up, &(*(P173)rt_nil_check(F->x_1690)).a_);
}
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_394) = F->x_1690;
goto ret_;
} else if (f_at_kw_304(F->up, rt_g_lit("RAISE", 5))) {
f_skip_315(F->up);
if (f_at_op_306(F->up, rt_g_lit(";", 1))) {
f_skip_315(F->up);
F->x_1690 = f_nn_295(F->up, ((rt_int)29LL), G_NV(F->line_1692));
(*F->res_394) = F->x_1690;
goto ret_;
}
F->x_1690 = f_nn_295(F->up, ((rt_int)28LL), G_NV(F->line_1692));
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_1690)).name_);
if (f_at_op_306(F->up, rt_g_lit("(", 1))) {
f_skip_315(F->up);
f_expr_332(F->up, &(*(P173)rt_nil_check(F->x_1690)).a_);
f_expect_op_319(F->up, rt_g_lit(")", 1));
}
while (f_at_op_306(F->up, rt_g_lit(".", 1))) {
f_skip_315(F->up);
(*(P173)rt_nil_check(F->x_1690)).tag_ = (*(P173)rt_nil_check(F->x_1690)).name_;
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_1690)).name_);
}
L_end_1695: ;
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_394) = F->x_1690;
goto ret_;
} else if (f_at_kw_304(F->up, rt_g_lit("ASSERT", 6))) {
f_skip_315(F->up);
F->x_1690 = f_nn_295(F->up, ((rt_int)30LL), G_NV(F->line_1692));
f_expr_332(F->up, &(*(P173)rt_nil_check(F->x_1690)).a_);
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_394) = F->x_1690;
goto ret_;
} else if (f_at_kw_304(F->up, rt_g_lit("GOTO", 4))) {
f_skip_315(F->up);
F->x_1690 = f_nn_295(F->up, ((rt_int)58LL), G_NV(F->line_1692));
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_1690)).name_);
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_394) = F->x_1690;
goto ret_;
}
f_task_statement_397(F->up, &F->x_1690);
if ((F->x_1690 != NULL)) {
(*F->res_394) = F->x_1690;
goto ret_;
}
f_name_p_353(F->up, &F->t_1691);
if (f_at_op_306(F->up, rt_g_lit(":=", 2))) {
f_skip_315(F->up);
F->x_1690 = f_nn_295(F->up, ((rt_int)20LL), G_NV(F->line_1692));
(*(P173)rt_nil_check(F->x_1690)).a_ = F->t_1691;
f_expr_332(F->up, &(*(P173)rt_nil_check(F->x_1690)).b_);
} else {
F->x_1690 = f_nn_295(F->up, ((rt_int)21LL), G_NV(F->line_1692));
(*(P173)rt_nil_check(F->x_1690)).a_ = F->t_1691;
}
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_394) = F->x_1690;
goto ret_;
ret_:

  return;
}

static void f_task_statement_397(struct f_greenc_1fr *up_, P173 *res_396) {
  struct f_task_statement_397fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_396 = res_396;
f_parse_task_statement_1075(F->up, &(*F->res_396));
ret_:

  return;
}

static void f_if_stmt_399(struct f_greenc_1fr *up_, P173 *res_398) {
  struct f_if_stmt_399fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_398 = res_398;
F->x_1696 = NULL;
F->arm_1697 = NULL;
F->head_1698 = NULL;
F->tail_1699 = NULL;
F->go_1700 = INT_MIN;
F->go_1700 = 1;
F->x_1696 = f_nn_295(F->up, ((rt_int)22LL), f_cur_line_302(F->up));
f_skip_315(F->up);
F->arm_1697 = f_nn_295(F->up, ((rt_int)60LL), f_cur_line_302(F->up));
f_expr_332(F->up, &(*(P173)rt_nil_check(F->arm_1697)).a_);
f_expect_kw_317(F->up, rt_g_lit("THEN", 4));
f_statements_390(F->up, &(*(P173)rt_nil_check(F->arm_1697)).b_);
f_append_299(F->up, &F->head_1698, &F->tail_1699, F->arm_1697);
while (G_NV(F->go_1700)) {
if (f_at_kw_304(F->up, rt_g_lit("ELSIF", 5))) {
f_skip_315(F->up);
F->arm_1697 = f_nn_295(F->up, ((rt_int)60LL), f_cur_line_302(F->up));
f_expr_332(F->up, &(*(P173)rt_nil_check(F->arm_1697)).a_);
f_expect_kw_317(F->up, rt_g_lit("THEN", 4));
f_statements_390(F->up, &(*(P173)rt_nil_check(F->arm_1697)).b_);
f_append_299(F->up, &F->head_1698, &F->tail_1699, F->arm_1697);
} else if (f_at_kw_304(F->up, rt_g_lit("ELSE", 4))) {
f_skip_315(F->up);
(*(P173)rt_nil_check(F->x_1696)).flag_ = ((rt_int)1LL);
f_statements_390(F->up, &(*(P173)rt_nil_check(F->x_1696)).b_);
} else {
F->go_1700 = 0;
}
}
L_end_1701: ;
f_expect_kw_317(F->up, rt_g_lit("END", 3));
f_expect_kw_317(F->up, rt_g_lit("IF", 2));
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*(P173)rt_nil_check(F->x_1696)).a_ = F->head_1698;
(*F->res_398) = F->x_1696;
goto ret_;
ret_:

  return;
}

static void f_case_stmt_401(struct f_greenc_1fr *up_, P173 *res_400) {
  struct f_case_stmt_401fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_400 = res_400;
F->x_1702 = NULL;
F->arm_1703 = NULL;
F->head_1704 = NULL;
F->tail_1705 = NULL;
F->labs_1706 = NULL;
F->ltail_1707 = NULL;
F->l_1708 = NULL;
F->others_arm_1709 = INT_MIN;
F->x_1702 = f_nn_295(F->up, ((rt_int)23LL), f_cur_line_302(F->up));
f_skip_315(F->up);
f_expr_332(F->up, &(*(P173)rt_nil_check(F->x_1702)).a_);
f_expect_kw_317(F->up, rt_g_lit("OF", 2));
while (f_at_kw_304(F->up, rt_g_lit("WHEN", 4))) {
f_skip_315(F->up);
F->labs_1706 = NULL;
F->ltail_1707 = NULL;
F->others_arm_1709 = 0;
for (;;) {
if (f_at_kw_304(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_315(F->up);
F->others_arm_1709 = 1;
} else {
F->l_1708 = f_nn_295(F->up, ((rt_int)61LL), f_cur_line_302(F->up));
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->l_1708)).a_);
if (f_at_op_306(F->up, rt_g_lit("..", 2))) {
f_skip_315(F->up);
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->l_1708)).b_);
}
f_append_299(F->up, &F->labs_1706, &F->ltail_1707, F->l_1708);
}
if ((!f_at_op_306(F->up, rt_g_lit("|", 1)))) {
goto L_end_1711;
}
f_skip_315(F->up);
}
L_end_1711: ;
f_expect_op_319(F->up, rt_g_lit("=>", 2));
if (G_NV(F->others_arm_1709)) {
(*(P173)rt_nil_check(F->x_1702)).flag_ = ((rt_int)1LL);
f_statements_390(F->up, &(*(P173)rt_nil_check(F->x_1702)).c_);
if ((!f_at_kw_304(F->up, rt_g_lit("END", 3)))) {
f_perror_314(F->up, rt_g_lit("others is the last choice of a case statement (RM79 5.5)", 56));
}
} else {
F->arm_1703 = f_nn_295(F->up, ((rt_int)60LL), f_cur_line_302(F->up));
(*(P173)rt_nil_check(F->arm_1703)).a_ = F->labs_1706;
f_statements_390(F->up, &(*(P173)rt_nil_check(F->arm_1703)).b_);
f_append_299(F->up, &F->head_1704, &F->tail_1705, F->arm_1703);
}
}
L_end_1710: ;
f_expect_kw_317(F->up, rt_g_lit("END", 3));
f_expect_kw_317(F->up, rt_g_lit("CASE", 4));
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*(P173)rt_nil_check(F->x_1702)).b_ = F->head_1704;
(*F->res_400) = F->x_1702;
goto ret_;
ret_:

  return;
}

static void f_loop_stmt_403(struct f_greenc_1fr *up_, P173 *res_402) {
  struct f_loop_stmt_403fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_402 = res_402;
F->x_1712 = NULL;
F->r_1713 = NULL;
F->line_1714 = INT64_MIN;
F->line_1714 = f_cur_line_302(F->up);
F->x_1712 = f_nn_295(F->up, ((rt_int)24LL), G_NV(F->line_1714));
if (f_at_kw_304(F->up, rt_g_lit("FOR", 3))) {
f_skip_315(F->up);
(*(P173)rt_nil_check(F->x_1712)).flag_ = ((rt_int)2LL);
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_1712)).name_);
f_expect_kw_317(F->up, rt_g_lit("IN", 2));
if (f_at_kw_304(F->up, rt_g_lit("REVERSE", 7))) {
f_skip_315(F->up);
(*(P173)rt_nil_check(F->x_1712)).ival_ = ((rt_int)1LL);
}
if (((f_at_kind_308(F->up, ((rt_int)1LL)) && (f_kind_at_310(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit("LOOP", 4)))) {
f_subtype_ind_359(F->up, &(*(P173)rt_nil_check(F->x_1712)).a_);
} else {
f_discrete_range_p_357(F->up, &(*(P173)rt_nil_check(F->x_1712)).a_);
}
} else if (f_at_kw_304(F->up, rt_g_lit("WHILE", 5))) {
f_skip_315(F->up);
(*(P173)rt_nil_check(F->x_1712)).flag_ = ((rt_int)1LL);
f_expr_332(F->up, &(*(P173)rt_nil_check(F->x_1712)).a_);
}
f_expect_kw_317(F->up, rt_g_lit("LOOP", 4));
f_statements_390(F->up, &(*(P173)rt_nil_check(F->x_1712)).b_);
f_expect_kw_317(F->up, rt_g_lit("END", 3));
f_expect_kw_317(F->up, rt_g_lit("LOOP", 4));
(*F->res_402) = F->x_1712;
goto ret_;
ret_:

  return;
}

static void f_compilation_405(struct f_greenc_1fr *up_, P173 *res_404) {
  struct f_compilation_405fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_404 = res_404;
F->head_1715 = NULL;
F->tail_1716 = NULL;
F->x_1717 = NULL;
while ((!f_at_kind_308(F->up, ((rt_int)0LL)))) {
if (f_at_kw_304(F->up, rt_g_lit("PRAGMA", 6))) {
f_pragma_p_365(F->up, &F->x_1717);
} else {
if (f_at_kw_304(F->up, rt_g_lit("RESTRICTED", 10))) {
f_skip_visibility_368(F->up);
}
if ((f_at_kw_304(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_304(F->up, rt_g_lit("FUNCTION", 8)))) {
f_subprogram_381(F->up, &F->x_1717);
} else if (f_at_kw_304(F->up, rt_g_lit("PACKAGE", 7))) {
f_package_p_387(F->up, &F->x_1717);
} else if (f_at_kw_304(F->up, rt_g_lit("TASK", 4))) {
f_task_p_1065(F->up, &F->x_1717);
} else if (f_at_kw_304(F->up, rt_g_lit("GENERIC", 7))) {
f_generic_p_1195(F->up, &F->x_1717);
} else {
f_perror_314(F->up, rt_g_lit("a compilation unit is a subprogram, a package or a task", 55));
}
f_append_299(F->up, &F->head_1715, &F->tail_1716, F->x_1717);
}
}
L_end_1718: ;
(*F->res_404) = F->head_1715;
goto ret_;
ret_:

  return;
}

static rt_int f_hash_407(struct f_greenc_1fr *up_, rt_gstr s_406) {
  struct f_hash_407fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_406 = cp_rt_gstr(s_406);
F->h_1719 = INT64_MIN;
F->h_1719 = ((rt_int)0LL);
{ rt_int lo1723 = ((rt_int)1LL), hi1724 = ({ rt_gstr at1721 = F->s_406; at1721.hi >= at1721.lo ? at1721.hi - at1721.lo + 1 : (rt_int)0; });
for (rt_int it1725 = lo1723; it1725 <= hi1724; it1725++) {
F->i_1722 = it1725;
F->h_1719 = rt_rem(rt_add(rt_mul(G_NV(F->h_1719), ((rt_int)31LL)), ((rt_int)(G_NV(({ rt_gstr ix1726 = F->s_406; ix1726.p[rt_index(F->i_1722, ix1726.lo, ix1726.hi) - ix1726.lo]; }))) + 1)), ((rt_int)4093LL));
}
}
L_end_1720: ;
F->result_ = G_NV(F->h_1719);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P116 f_lookup_409(struct f_greenc_1fr *up_, rt_gstr name_408) {
  struct f_lookup_409fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_408 = cp_rt_gstr(name_408);
F->y_1727 = NULL;
F->y_1727 = ({ A115 ix1728 = F->up->table_118; ix1728.p[rt_index(f_hash_407(F->up, F->name_408), ix1728.lo, ix1728.hi) - ix1728.lo]; });
while ((F->y_1727 != NULL)) {
if (eq_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1727)).name_)), F->name_408)) {
F->result_ = F->y_1727;
goto ret_;
}
F->y_1727 = (*(P116)rt_nil_check(F->y_1727)).chain_;
}
L_end_1729: ;
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
F->y_1730 = NULL;
F->y_1730 = ({ A115 ix1731 = F->up->table_118; ix1731.p[rt_index(f_hash_407(F->up, F->name_413), ix1731.lo, ix1731.hi) - ix1731.lo]; });
while ((F->y_1730 != NULL)) {
if (((eq_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1730)).name_)), F->name_413) && (G_NV((*(P116)rt_nil_check(F->y_1730)).kind_) == ((rt_int)10LL))) && f_same_task_412(F->up, (*(P116)rt_nil_check(F->y_1730)).members_, F->owner_414))) {
F->result_ = F->y_1730;
goto ret_;
}
F->y_1730 = (*(P116)rt_nil_check(F->y_1730)).chain_;
}
L_end_1732: ;
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
F->y_1733 = NULL;
F->y_1733 = ({ A115 ix1734 = F->up->table_118; ix1734.p[rt_index(f_hash_407(F->up, F->name_416), ix1734.lo, ix1734.hi) - ix1734.lo]; });
while ((F->y_1733 != NULL)) {
if ((eq_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1733)).name_)), F->name_416) && (G_NV((*(P116)rt_nil_check(F->y_1733)).depth_) == F->d_417))) {
F->result_ = F->y_1733;
goto ret_;
}
F->y_1733 = (*(P116)rt_nil_check(F->y_1733)).chain_;
}
L_end_1735: ;
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
{ rt_int lo1738 = ((rt_int)1LL), hi1739 = G_NV(F->up->nunits_187);
for (rt_int it1740 = hi1739; it1740 >= lo1738; it1740--) {
F->i_1737 = it1740;
if (eq_rt_gstr((*(P139)rt_nil_check(({ A182 ix1741 = F->up->unit_names_183; ix1741.p[rt_index(F->i_1737, ix1741.lo, ix1741.hi) - ix1741.lo]; }))), F->name_419)) {
F->result_ = G_NV(({ A184 ix1742 = F->up->unit_depths_185; ix1742.p[rt_index(F->i_1737, ix1742.lo, ix1742.hi) - ix1742.lo]; }));
goto ret_;
}
}
}
L_end_1736: ;
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
(*({ A182 *ix1743 = &(F->up->unit_names_183); &ix1743->p[rt_index(G_NV(F->up->nunits_187), ix1743->lo, ix1743->hi) - ix1743->lo]; })) = F->name_421;
(*({ A184 *ix1744 = &(F->up->unit_depths_185); &ix1744->p[rt_index(G_NV(F->up->nunits_187), ix1744->lo, ix1744->hi) - ix1744->lo]; })) = G_NV(F->up->depth_119);
ret_:

  return;
}

static P116 f_lookup_decl_424(struct f_greenc_1fr *up_, P173 d_423) {
  struct f_lookup_decl_424fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_423 = d_423;
F->y_1745 = NULL;
F->y_1745 = ({ A115 ix1746 = F->up->table_118; ix1746.p[rt_index(f_hash_407(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->d_423)).name_))), ix1746.lo, ix1746.hi) - ix1746.lo]; });
while ((F->y_1745 != NULL)) {
if (((*(P116)rt_nil_check(F->y_1745)).decl_ == F->d_423)) {
F->result_ = F->y_1745;
goto ret_;
}
F->y_1745 = (*(P116)rt_nil_check(F->y_1745)).chain_;
}
L_end_1747: ;
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
F->r_1748 = NULL;
F->r_1748 = F->t_430;
while (((*(P121)rt_nil_check(F->r_1748)).parent_ != NULL)) {
F->r_1748 = (*(P121)rt_nil_check(F->r_1748)).parent_;
}
L_end_1749: ;
F->result_ = F->r_1748;
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
F->r_1750 = NULL;
F->r_1750 = F->a_432;
while ((F->r_1750 != NULL)) {
if ((F->r_1750 == F->b_433)) {
F->result_ = 1;
goto ret_;
}
F->r_1750 = (*(P121)rt_nil_check(F->r_1750)).parent_;
}
L_end_1751: ;
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

static int f_same_signature_441(struct f_greenc_1fr *up_, P1752 a_439, P1752 b_440) {
  struct f_same_signature_441fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_439 = a_439;
F->b_440 = b_440;
F->x_1754 = NULL;
F->x_1754 = F->a_439;
F->y_1755 = NULL;
F->y_1755 = F->b_440;
while (((F->x_1754 != NULL) && (F->y_1755 != NULL))) {
if (((!f_same_429(F->up, (*(P1752)rt_nil_check(F->x_1754)).t_, (*(P1752)rt_nil_check(F->y_1755)).t_)) || (G_NV((*(P1752)rt_nil_check(F->x_1754)).mode_) != G_NV((*(P1752)rt_nil_check(F->y_1755)).mode_)))) {
F->result_ = 0;
goto ret_;
}
F->x_1754 = (*(P1752)rt_nil_check(F->x_1754)).next_;
F->y_1755 = (*(P1752)rt_nil_check(F->y_1755)).next_;
}
L_end_1756: ;
F->result_ = ((F->x_1754 == NULL) && (F->y_1755 == NULL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_distinct_overload_444(struct f_greenc_1fr *up_, P116 y_442, P116 z_443) {
  struct f_distinct_overload_444fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_442 = y_442;
F->z_443 = z_443;
if ((!(f_overloadable_426(F->up, F->y_442) && f_overloadable_426(F->up, F->z_443)))) {
F->result_ = 0;
goto ret_;
} else if ((G_NV((*(P116)rt_nil_check(F->y_442)).kind_) != G_NV((*(P116)rt_nil_check(F->z_443)).kind_))) {
F->result_ = 1;
goto ret_;
}
F->result_ = ((!f_same_signature_441(F->up, (*(P116)rt_nil_check(F->y_442)).params_, (*(P116)rt_nil_check(F->z_443)).params_)) || (!f_same_429(F->up, (*(P116)rt_nil_check(F->y_442)).result_, (*(P116)rt_nil_check(F->z_443)).result_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_define_447(struct f_greenc_1fr *up_, P116 y_445, rt_int line_446) {
  struct f_define_447fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_445 = y_445;
F->line_446 = line_446;
F->h_1757 = INT64_MIN;
F->h_1757 = f_hash_407(F->up, (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_445)).name_)));
F->z_1758 = NULL;
F->z_1758 = ({ A115 ix1759 = F->up->table_118; ix1759.p[rt_index(G_NV(F->h_1757), ix1759.lo, ix1759.hi) - ix1759.lo]; });
while ((F->z_1758 != NULL)) {
if ((((G_NV((*(P116)rt_nil_check(F->z_1758)).depth_) == G_NV(F->up->depth_119)) && eq_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->z_1758)).name_)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_445)).name_)))) && (!f_distinct_overload_444(F->up, F->y_445, F->z_1758)))) {
f_fail_242(F->up, F->line_446, cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_445)).name_)), rt_g_lit(" is already declared in this declarative part", 45)));
}
F->z_1758 = (*(P116)rt_nil_check(F->z_1758)).chain_;
}
L_end_1760: ;
(*(P116)rt_nil_check(F->y_445)).depth_ = G_NV(F->up->depth_119);
(*(P116)rt_nil_check(F->y_445)).chain_ = ({ A115 ix1761 = F->up->table_118; ix1761.p[rt_index(G_NV(F->h_1757), ix1761.lo, ix1761.hi) - ix1761.lo]; });
(*({ A115 *ix1762 = &(F->up->table_118); &ix1762->p[rt_index(G_NV(F->h_1757), ix1762->lo, ix1762->hi) - ix1762->lo]; })) = F->y_445;
(*(P116)rt_nil_check(F->y_445)).stack_ = F->up->scope_stack_120;
F->up->scope_stack_120 = F->y_445;
ret_:

  return;
}

static void f_open_scope_448(struct f_greenc_1fr *up_) {
  struct f_open_scope_448fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->depth_119 = rt_add(G_NV(F->up->depth_119), ((rt_int)1LL));
ret_:

  return;
}

static void f_close_scope_449(struct f_greenc_1fr *up_) {
  struct f_close_scope_449fr *F = rt_alloc(sizeof *F);
F->up = up_;
while (((F->up->scope_stack_120 != NULL) && (G_NV((*(P116)rt_nil_check(F->up->scope_stack_120)).depth_) == G_NV(F->up->depth_119)))) {
(*({ A115 *ix1764 = &(F->up->table_118); &ix1764->p[rt_index(f_hash_407(F->up, (*(P139)rt_nil_check((*(P116)rt_nil_check(F->up->scope_stack_120)).name_))), ix1764->lo, ix1764->hi) - ix1764->lo]; })) = (*(P116)rt_nil_check(F->up->scope_stack_120)).chain_;
F->up->scope_stack_120 = (*(P116)rt_nil_check(F->up->scope_stack_120)).stack_;
}
L_end_1763: ;
F->up->depth_119 = rt_sub(G_NV(F->up->depth_119), ((rt_int)1LL));
ret_:

  return;
}

static P116 f_new_sym_452(struct f_greenc_1fr *up_, rt_int kind_450, P139 name_451) {
  struct f_new_sym_452fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_450 = kind_450;
F->name_451 = name_451;
F->result_ = ({ R117 *cell1765 = rt_alloc(sizeof(R117)); *cell1765 = cp_R117(({ R117 ag1766; ag1766.kind_ = F->kind_450; ag1766.name_ = F->name_451; ag1766.t_ = NULL; ag1766.c_ = NULL; ag1766.access_path_ = NULL; ag1766.cname_ = NULL; ag1766.ro_ = 0; ag1766.mvalue_ = ((rt_int)0LL); ag1766.hasmv_ = 0; ag1766.decl_ = NULL; ag1766.params_ = NULL; ag1766.result_ = NULL; ag1766.depth_ = ((rt_int)0LL); ag1766.level_ = ((rt_int)0LL); ag1766.byref_ = 0; ag1766.vrp_ = 0; ag1766.hidden_ = 0; ag1766.from_use_ = 0; ag1766.members_ = NULL; ag1766.mnext_ = NULL; ag1766.chain_ = NULL; ag1766.stack_ = NULL; ag1766.flags_ = ((rt_int)0LL); ag1766; })); (P116)cell1765; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P121 f_new_typ_454(struct f_greenc_1fr *up_, rt_int kind_453) {
  struct f_new_typ_454fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_453 = kind_453;
F->result_ = ({ R122 *cell1769 = rt_alloc(sizeof(R122)); *cell1769 = cp_R122(({ R122 ag1770; ag1770.kind_ = F->kind_453; ag1770.name_ = NULL; ag1770.lits_ = NULL; ag1770.elem_ = NULL; ag1770.idx_ = NULL; ag1770.elemcons_ = NULL; ag1770.tcons_ = NULL; ag1770.fields_ = NULL; ag1770.target_ = NULL; ag1770.decl_ = NULL; ag1770.cname_ = NULL; ag1770.forward_ = 0; ag1770.defined_ = 0; ag1770.priv_ = 0; ag1770.next_ = NULL; ag1770.idx2_ = NULL; ag1770.littab_ = NULL; ag1770.parent_ = NULL; ag1770.ndigits_ = ((rt_int)0LL); ag1770.fdelta_ = NULL; ag1770.fsmall_ = NULL; ag1770.dims_ = ((rt_int)0LL); ag1770.is_restricted_ = 0; ag1770; })); (P121)cell1769; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P177 f_new_cons_455(struct f_greenc_1fr *up_) {
  struct f_new_cons_455fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ({ R178 *cell1773 = rt_alloc(sizeof(R178)); *cell1773 = cp_R178(({ R178 ag1774; ag1774.lo_ = NULL; ag1774.hi_ = NULL; ag1774.slen_ = NULL; ag1774.mlo_ = ((rt_int)0LL); ag1774.mhi_ = ((rt_int)0LL); ag1774.hasm_ = 0; ag1774.lo2_ = NULL; ag1774.hi2_ = NULL; ag1774.acc_ = NULL; ag1774.inner_ = NULL; ag1774.dv_ = NULL; ag1774; })); (P177)cell1773; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_bounded_457(struct f_greenc_1fr *up_, P177 c_456) {
  struct f_bounded_457fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_456 = c_456;
if ((F->c_456 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((*(P177)rt_nil_check(F->c_456)).lo_ != NULL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_bounded_hi_459(struct f_greenc_1fr *up_, P177 c_458) {
  struct f_bounded_hi_459fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_458 = c_458;
if ((F->c_458 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((*(P177)rt_nil_check(F->c_458)).hi_ != NULL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_static_bounds_461(struct f_greenc_1fr *up_, P177 c_460) {
  struct f_static_bounds_461fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_460 = c_460;
if ((F->c_460 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = G_NV((*(P177)rt_nil_check(F->c_460)).hasm_);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_discriminated_463(struct f_greenc_1fr *up_, P177 c_462) {
  struct f_discriminated_463fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_462 = c_462;
if ((F->c_462 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((*(P177)rt_nil_check(F->c_462)).dv_ != NULL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_kind_name_465(struct f_greenc_1fr *up_, P121 t_464) {
  struct f_kind_name_465fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_464 = t_464;
if (((*(P121)rt_nil_check(F->t_464)).name_ != NULL)) {
F->result_ = (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_464)).name_));
goto ret_;
}
{ rt_int sel1775 = G_NV((*(P121)rt_nil_check(F->t_464)).kind_);
if (0 || sel1775 == ((rt_int)1LL)) {
F->result_ = rt_g_lit("INTEGER", 7);
goto ret_;
} else if (0 || sel1775 == ((rt_int)2LL)) {
F->result_ = rt_g_lit("BOOLEAN", 7);
goto ret_;
} else if (0 || sel1775 == ((rt_int)3LL)) {
F->result_ = rt_g_lit("FLOAT", 5);
goto ret_;
} else if (0 || sel1775 == ((rt_int)5LL)) {
F->result_ = rt_g_lit("STRING", 6);
goto ret_;
} else if (0 || sel1775 == ((rt_int)10LL)) {
F->result_ = rt_g_lit("null", 4);
goto ret_;
} else if (0 || sel1775 == ((rt_int)11LL)) {
F->result_ = rt_g_lit("CHARACTER", 9);
goto ret_;
} else if (0 || sel1775 == ((rt_int)16LL)) {
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

static void f_check_type_469(struct f_greenc_1fr *up_, P121 got_466, P121 want_467, rt_int line_468) {
  struct f_check_type_469fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->got_466 = got_466;
F->want_467 = want_467;
F->line_468 = line_468;
if ((F->want_467 == NULL)) {
goto ret_;
}
if (((G_NV((*(P121)rt_nil_check(F->got_466)).kind_) == ((rt_int)10LL)) && (G_NV((*(P121)rt_nil_check(F->want_467)).kind_) == ((rt_int)8LL)))) {
goto ret_;
}
if ((!f_same_429(F->up, F->got_466, F->want_467))) {
f_fail_242(F->up, F->line_468, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("type mismatch: ", 15), f_kind_name_465(F->up, F->got_466)), rt_g_lit(" where ", 7)), f_kind_name_465(F->up, F->want_467)), rt_g_lit(" is required", 12)));
}
ret_:

  return;
}

static rt_int f_field_count_471(struct f_greenc_1fr *up_, P121 t_470) {
  struct f_field_count_471fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_470 = t_470;
F->n_1776 = INT64_MIN;
F->n_1776 = ((rt_int)0LL);
F->f_1777 = NULL;
F->f_1777 = (*(P121)rt_nil_check(F->t_470)).fields_;
while ((F->f_1777 != NULL)) {
F->n_1776 = rt_add(G_NV(F->n_1776), ((rt_int)1LL));
F->f_1777 = (*(P1767)rt_nil_check(F->f_1777)).next_;
}
L_end_1778: ;
F->result_ = G_NV(F->n_1776);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_ctype_474(struct f_greenc_1fr *up_, P121 t_472, P139 *r_473) {
  struct f_ctype_474fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_472 = t_472;
F->r_473 = r_473;
F->s_1779 = NULL;
{ rt_int sel1780 = G_NV((*(P121)rt_nil_check(F->t_472)).kind_);
if (0 || sel1780 == ((rt_int)1LL)) {
(*F->r_473) = f_mk_221(F->up, rt_g_lit("rt_int", 6));
} else if (0 || sel1780 == ((rt_int)2LL) || sel1780 == ((rt_int)4LL) || sel1780 == ((rt_int)11LL)) {
(*F->r_473) = f_mk_221(F->up, rt_g_lit("int", 3));
} else if (0 || sel1780 == ((rt_int)3LL) || sel1780 == ((rt_int)16LL)) {
(*F->r_473) = f_mk_221(F->up, rt_g_lit("double", 6));
} else if (0 || sel1780 == ((rt_int)5LL)) {
(*F->r_473) = f_mk_221(F->up, rt_g_lit("rstr", 4));
} else if (0 || sel1780 == ((rt_int)9LL)) {
(*F->r_473) = f_mk_221(F->up, rt_g_lit("void", 4));
} else if (0 || sel1780 == ((rt_int)13LL)) {
(*F->r_473) = f_mk_221(F->up, rt_g_lit("rt_act", 6));
} else if (0 || sel1780 == ((rt_int)14LL)) {
(*F->r_473) = f_mk_221(F->up, rt_g_lit("rt_taskdecl", 11));
} else if (0 || sel1780 == ((rt_int)15LL)) {
(*F->r_473) = f_mk_221(F->up, rt_g_lit("rt_entry", 8));
} else {
if (((*(P121)rt_nil_check(F->t_472)).cname_ == NULL)) {
f_declare_ctype_479(F->up, F->t_472);
} else if ((((G_NV((*(P121)rt_nil_check(F->t_472)).kind_) == ((rt_int)7LL)) && G_NV((*(P121)rt_nil_check(F->t_472)).forward_)) && (!G_NV((*(P121)rt_nil_check(F->t_472)).defined_)))) {
(*(P121)rt_nil_check(F->t_472)).defined_ = 1;
f_field_decls_477(F->up, F->t_472, &F->s_1779);
f_put_to_246(F->up, F->up->out_types_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_472)).cname_))), rt_g_lit(" {", 2)), (*(P139)rt_nil_check(F->s_1779))), rt_g_lit(" };", 3)));
}
(*F->r_473) = (*(P121)rt_nil_check(F->t_472)).cname_;
}
}
ret_:

  return;
}

static void f_field_decls_477(struct f_greenc_1fr *up_, P121 t_475, P139 *r_476) {
  struct f_field_decls_477fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_475 = t_475;
F->r_476 = r_476;
F->f_1781 = NULL;
F->f_1781 = (*(P121)rt_nil_check(F->t_475)).fields_;
F->s_1782 = NULL;
F->ct_1783 = NULL;
F->s_1782 = f_mk_221(F->up, rt_g_lit(" int dummy_;", 12));
while ((F->f_1781 != NULL)) {
f_ctype_474(F->up, (*(P1767)rt_nil_check(F->f_1781)).t_, &F->ct_1783);
F->s_1782 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->s_1782)), one_rt_gstr(32)), (*(P139)rt_nil_check(F->ct_1783))), one_rt_gstr(32)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_1781)).name_)))), one_rt_gstr(59)));
F->f_1781 = (*(P1767)rt_nil_check(F->f_1781)).next_;
}
L_end_1784: ;
(*F->r_476) = F->s_1782;
ret_:

  return;
}

static void f_declare_ctype_479(struct f_greenc_1fr *up_, P121 t_478) {
  struct f_declare_ctype_479fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_478 = t_478;
F->ct_1785 = NULL;
F->s_1786 = NULL;
F->target_1787 = NULL;
if ((G_NV((*(P121)rt_nil_check(F->t_478)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_588(F->up, F->t_478);
}
if ((G_NV((*(P121)rt_nil_check(F->t_478)).kind_) == ((rt_int)6LL))) {
f_new_name_224(F->up, rt_g_lit("A", 1), &(*(P121)rt_nil_check(F->t_478)).cname_);
} else if ((G_NV((*(P121)rt_nil_check(F->t_478)).kind_) == ((rt_int)7LL))) {
f_new_name_224(F->up, rt_g_lit("R", 1), &(*(P121)rt_nil_check(F->t_478)).cname_);
} else {
f_new_name_224(F->up, rt_g_lit("P", 1), &(*(P121)rt_nil_check(F->t_478)).cname_);
}
(*(P121)rt_nil_check(F->t_478)).next_ = F->up->all_types_123;
F->up->all_types_123 = F->t_478;
if ((G_NV((*(P121)rt_nil_check(F->t_478)).kind_) == ((rt_int)8LL))) {
F->target_1787 = (*(P121)rt_nil_check(F->t_478)).target_;
if ((F->target_1787 == NULL)) {
f_fail_242(F->up, ((rt_int)0LL), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the designated type of ", 23), f_kind_name_465(F->up, F->t_478)), rt_g_lit(" is never declared", 18)));
}
if ((G_NV((*(P121)rt_nil_check(F->target_1787)).kind_) == ((rt_int)7LL))) {
if (((*(P121)rt_nil_check(F->target_1787)).cname_ == NULL)) {
f_new_name_224(F->up, rt_g_lit("R", 1), &(*(P121)rt_nil_check(F->target_1787)).cname_);
(*(P121)rt_nil_check(F->target_1787)).next_ = F->up->all_types_123;
F->up->all_types_123 = F->target_1787;
f_put_to_246(F->up, F->up->out_types_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->target_1787)).cname_))), one_rt_gstr(32)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->target_1787)).cname_))), one_rt_gstr(59)));
(*(P121)rt_nil_check(F->target_1787)).forward_ = 1;
}
f_put_to_246(F->up, F->up->out_types_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->target_1787)).cname_))), rt_g_lit(" *", 2)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_478)).cname_))), one_rt_gstr(59)));
} else {
f_ctype_474(F->up, F->target_1787, &F->ct_1785);
f_put_to_246(F->up, F->up->out_types_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef ", 8), (*(P139)rt_nil_check(F->ct_1785))), rt_g_lit(" *", 2)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_478)).cname_))), one_rt_gstr(59)));
}
} else if ((G_NV((*(P121)rt_nil_check(F->t_478)).kind_) == ((rt_int)6LL))) {
f_elem_ctype_546(F->up, (*(P121)rt_nil_check(F->t_478)).elem_, &F->ct_1785);
f_put_to_246(F->up, F->up->out_types_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_478)).cname_))), one_rt_gstr(32)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_478)).cname_))), one_rt_gstr(59)));
f_put_to_246(F->up, F->up->out_types_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_478)).cname_))), rt_g_lit(" { rt_int lo, hi, lo2, hi2; ", 28)), (*(P139)rt_nil_check(F->ct_1785))), rt_g_lit(" *p; };", 7)));
} else {
f_put_to_246(F->up, F->up->out_types_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_478)).cname_))), one_rt_gstr(32)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_478)).cname_))), one_rt_gstr(59)));
(*(P121)rt_nil_check(F->t_478)).defined_ = 1;
f_field_decls_477(F->up, F->t_478, &F->s_1786);
f_put_to_246(F->up, F->up->out_types_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_478)).cname_))), rt_g_lit(" {", 2)), (*(P139)rt_nil_check(F->s_1786))), rt_g_lit(" };", 3)));
}
ret_:

  return;
}

static rt_int f_lit_index_482(struct f_greenc_1fr *up_, P173 lits_480, rt_gstr name_481) {
  struct f_lit_index_482fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lits_480 = lits_480;
F->name_481 = cp_rt_gstr(name_481);
F->i_1788 = INT64_MIN;
F->i_1788 = ((rt_int)0LL);
F->l_1789 = NULL;
F->l_1789 = F->lits_480;
while ((F->l_1789 != NULL)) {
if (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->l_1789)).name_)), F->name_481)) {
F->result_ = G_NV(F->i_1788);
goto ret_;
}
F->i_1788 = rt_add(G_NV(F->i_1788), ((rt_int)1LL));
F->l_1789 = (*(P173)rt_nil_check(F->l_1789)).next_;
}
L_end_1790: ;
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_manifest_486(struct f_greenc_1fr *up_, P173 e_483, rt_int *v_484, int *ok_485) {
  struct f_manifest_486fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_483 = e_483;
F->v_484 = v_484;
F->ok_485 = ok_485;
F->a_1791 = INT64_MIN;
F->b_1792 = INT64_MIN;
F->ok2_1793 = INT_MIN;
F->y_1794 = NULL;
(*F->ok_485) = 0;
(*F->v_484) = ((rt_int)0LL);
if ((G_NV((*(P173)rt_nil_check(F->e_483)).kind_) == ((rt_int)1LL))) {
(*F->ok_485) = 1;
(*F->v_484) = G_NV((*(P173)rt_nil_check(F->e_483)).ival_);
} else if ((G_NV((*(P173)rt_nil_check(F->e_483)).kind_) == ((rt_int)15LL))) {
f_manifest_486(F->up, (*(P173)rt_nil_check(F->e_483)).a_, &(*F->v_484), &(*F->ok_485));
 (void)rt_range((*F->ok_485), 0, 1);
} else if (((G_NV((*(P173)rt_nil_check(F->e_483)).kind_) == ((rt_int)6LL)) && eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_483)).name_)), rt_g_lit("-", 1)))) {
f_manifest_486(F->up, (*(P173)rt_nil_check(F->e_483)).a_, &F->a_1791, &(*F->ok_485));
 (void)rt_range((*F->ok_485), 0, 1);
(*F->v_484) = rt_neg(G_NV(F->a_1791));
} else if (((G_NV((*(P173)rt_nil_check(F->e_483)).kind_) == ((rt_int)7LL)) && ((eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_483)).name_)), rt_g_lit("+", 1)) || eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_483)).name_)), rt_g_lit("-", 1))) || eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_483)).name_)), rt_g_lit("*", 1))))) {
f_manifest_486(F->up, (*(P173)rt_nil_check(F->e_483)).a_, &F->a_1791, &(*F->ok_485));
 (void)rt_range((*F->ok_485), 0, 1);
f_manifest_486(F->up, (*(P173)rt_nil_check(F->e_483)).b_, &F->b_1792, &F->ok2_1793);
 (void)rt_range(F->ok2_1793, 0, 1);
(*F->ok_485) = (G_NV((*F->ok_485)) && G_NV(F->ok2_1793));
if (G_NV((*F->ok_485))) {
if (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_483)).name_)), rt_g_lit("+", 1))) {
(*F->v_484) = rt_add(G_NV(F->a_1791), G_NV(F->b_1792));
} else if (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_483)).name_)), rt_g_lit("-", 1))) {
(*F->v_484) = rt_sub(G_NV(F->a_1791), G_NV(F->b_1792));
} else {
(*F->v_484) = rt_mul(G_NV(F->a_1791), G_NV(F->b_1792));
}
}
} else if ((G_NV((*(P173)rt_nil_check(F->e_483)).kind_) == ((rt_int)5LL))) {
F->y_1794 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_483)).name_)));
if ((((F->y_1794 != NULL) && ((G_NV((*(P116)rt_nil_check(F->y_1794)).kind_) == ((rt_int)2LL)) || (G_NV((*(P116)rt_nil_check(F->y_1794)).kind_) == ((rt_int)7LL)))) && G_NV((*(P116)rt_nil_check(F->y_1794)).hasmv_))) {
(*F->ok_485) = 1;
(*F->v_484) = G_NV((*(P116)rt_nil_check(F->y_1794)).mvalue_);
}
} else if (((G_NV((*(P173)rt_nil_check(F->e_483)).kind_) == ((rt_int)9LL)) && f_is_package_1012(F->up, (*(P173)rt_nil_check(F->e_483)).a_))) {
F->y_1794 = f_member_of_1016(F->up, f_path_of_338(F->up, (*(P173)rt_nil_check(F->e_483)).a_), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_483)).name_)), G_NV((*(P173)rt_nil_check(F->e_483)).line_));
if ((((F->y_1794 != NULL) && ((G_NV((*(P116)rt_nil_check(F->y_1794)).kind_) == ((rt_int)2LL)) || (G_NV((*(P116)rt_nil_check(F->y_1794)).kind_) == ((rt_int)7LL)))) && G_NV((*(P116)rt_nil_check(F->y_1794)).hasmv_))) {
(*F->ok_485) = 1;
(*F->v_484) = G_NV((*(P116)rt_nil_check(F->y_1794)).mvalue_);
}
} else if ((((G_NV((*(P173)rt_nil_check(F->e_483)).kind_) == ((rt_int)10LL)) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_483)).a_)).kind_) == ((rt_int)5LL))) && (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_483)).name_)), rt_g_lit("FIRST", 5)) || eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_483)).name_)), rt_g_lit("LAST", 4))))) {
F->y_1794 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_483)).a_)).name_)));
if (((((F->y_1794 != NULL) && (G_NV((*(P116)rt_nil_check(F->y_1794)).kind_) == ((rt_int)5LL))) && ((*(P116)rt_nil_check(F->y_1794)).c_ != NULL)) && G_NV((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_1794)).c_)).hasm_))) {
(*F->ok_485) = 1;
if (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_483)).name_)), rt_g_lit("FIRST", 5))) {
(*F->v_484) = G_NV((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_1794)).c_)).mlo_);
} else {
(*F->v_484) = G_NV((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_1794)).c_)).mhi_);
}
}
} else if ((((G_NV((*(P173)rt_nil_check(F->e_483)).kind_) == ((rt_int)8LL)) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_483)).a_)).kind_) == ((rt_int)5LL))) && (f_list_len_301(F->up, (*(P173)rt_nil_check(F->e_483)).b_) == ((rt_int)1LL)))) {
F->y_1794 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_483)).a_)).name_)));
if (((((F->y_1794 != NULL) && (G_NV((*(P116)rt_nil_check(F->y_1794)).kind_) == ((rt_int)5LL))) && ((*(P116)rt_nil_check(F->y_1794)).t_ != NULL)) && (G_NV((*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_1794)).t_)).kind_) == ((rt_int)1LL)))) {
f_manifest_486(F->up, (*(P173)rt_nil_check(F->e_483)).b_, &(*F->v_484), &(*F->ok_485));
 (void)rt_range((*F->ok_485), 0, 1);
}
}
ret_:

  return;
}

static void f_resolve_490(struct f_greenc_1fr *up_, P173 st_487, P121 *t_488, P177 *c_489) {
  struct f_resolve_490fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_487 = st_487;
F->t_488 = t_488;
F->c_489 = c_489;
F->y_1795 = NULL;
F->dummy_1796 = NULL;
F->code_1797 = NULL;
F->ok_1798 = INT_MIN;
F->r_1799 = NULL;
(*F->c_489) = f_new_cons_455(F->up);
if ((G_NV((*(P173)rt_nil_check(F->st_487)).kind_) != ((rt_int)80LL))) {
f_type_definition_524(F->up, F->st_487, NULL, &(*F->t_488), &(*F->c_489));
goto ret_;
}
if (((*(P173)rt_nil_check(F->st_487)).tag_ != NULL)) {
F->y_1795 = f_member_of_1016(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->st_487)).tag_)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->st_487)).name_)), G_NV((*(P173)rt_nil_check(F->st_487)).line_));
} else {
F->y_1795 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->st_487)).name_)));
}
if (((F->y_1795 == NULL) || (G_NV((*(P116)rt_nil_check(F->y_1795)).kind_) != ((rt_int)5LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->st_487)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->st_487)).name_)), rt_g_lit(" is not a type", 14)));
}
(*F->t_488) = (*(P116)rt_nil_check(F->y_1795)).t_;
if (((*(P116)rt_nil_check(F->y_1795)).c_ != NULL)) {
(*(P177)rt_nil_check((*F->c_489))).lo_ = (*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_1795)).c_)).lo_;
(*(P177)rt_nil_check((*F->c_489))).hi_ = (*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_1795)).c_)).hi_;
(*(P177)rt_nil_check((*F->c_489))).slen_ = (*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_1795)).c_)).slen_;
(*(P177)rt_nil_check((*F->c_489))).mlo_ = G_NV((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_1795)).c_)).mlo_);
(*(P177)rt_nil_check((*F->c_489))).mhi_ = G_NV((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_1795)).c_)).mhi_);
(*(P177)rt_nil_check((*F->c_489))).hasm_ = G_NV((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_1795)).c_)).hasm_);
(*(P177)rt_nil_check((*F->c_489))).acc_ = (*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_1795)).c_)).acc_;
(*(P177)rt_nil_check((*F->c_489))).inner_ = (*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_1795)).c_)).inner_;
(*(P177)rt_nil_check((*F->c_489))).dv_ = (*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_1795)).c_)).dv_;
}
if (((*F->t_488) == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->st_487)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the type ", 9), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->st_487)).name_))), rt_g_lit(" is used before its full declaration", 36)));
}
if ((G_NV((*(P173)rt_nil_check(F->st_487)).flag_) == ((rt_int)3LL))) {
if (((G_NV((*(P121)rt_nil_check((*F->t_488))).kind_) != ((rt_int)3LL)) && (G_NV((*(P121)rt_nil_check((*F->t_488))).kind_) != ((rt_int)16LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->st_487)).line_), rt_g_lit("an accuracy constraint applies to a real type (RM79 3.5.5)", 58));
}
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->st_487)).b_, NULL, &F->dummy_1796, &(*(P177)rt_nil_check((*F->c_489))).acc_);
}
if (((G_NV((*(P173)rt_nil_check(F->st_487)).flag_) == ((rt_int)1LL)) || ((G_NV((*(P173)rt_nil_check(F->st_487)).flag_) == ((rt_int)3LL)) && ((*(P173)rt_nil_check(F->st_487)).a_ != NULL)))) {
F->r_1799 = (*(P173)rt_nil_check(F->st_487)).a_;
if (((!f_is_numeric_436(F->up, (*F->t_488))) && (!f_is_discrete_438(F->up, (*F->t_488))))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->st_487)).line_), rt_g_lit("a range constraint applies to a scalar type (RM79 3.5)", 54));
}
f_range_of_508(F->up, F->r_1799, (*F->t_488), (*F->c_489));
} else if ((G_NV((*(P173)rt_nil_check(F->st_487)).flag_) == ((rt_int)2LL))) {
f_constraint_list_494(F->up, F->st_487, (*F->t_488), (*F->c_489));
}
ret_:

  return;
}

static void f_constraint_list_494(struct f_greenc_1fr *up_, P173 st_491, P121 t_492, P177 c_493) {
  struct f_constraint_list_494fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_491 = st_491;
F->t_492 = t_492;
F->c_493 = c_493;
F->r_1800 = NULL;
F->r_1800 = (*(P173)rt_nil_check(F->st_491)).a_;
F->arrt_1801 = NULL;
F->arrt_1801 = F->t_492;
F->cc_1802 = NULL;
F->cc_1802 = F->c_493;
F->it_1803 = NULL;
if ((G_NV((*(P121)rt_nil_check(F->t_492)).kind_) == ((rt_int)7LL))) {
f_discriminant_constraint_498(F->up, F->st_491, F->t_492, F->c_493);
goto ret_;
}
if ((G_NV((*(P121)rt_nil_check(F->t_492)).kind_) != ((rt_int)6LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->st_491)).line_), rt_g_lit("this type takes no index constraint", 35));
}
if ((f_list_len_301(F->up, F->r_1800) != G_NV((*(P121)rt_nil_check(F->t_492)).dims_))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->st_491)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("an index constraint gives a range for each of the ", 50), rt_g_s2g(rt_str_of_int(G_NV((*(P121)rt_nil_check(F->t_492)).dims_)))), rt_g_lit(" indexes (RM79 3.6)", 19)));
}
while ((F->r_1800 != NULL)) {
if (((*(P173)rt_nil_check(F->r_1800)).formal_ != NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->st_491)).line_), rt_g_lit("an index constraint is a list of discrete ranges (RM79 3.6)", 59));
}
f_discrete_bounds_504(F->up, F->r_1800, (*(P121)rt_nil_check(F->arrt_1801)).idx_, &F->it_1803, &(*(P177)rt_nil_check(F->cc_1802)).lo_, &(*(P177)rt_nil_check(F->cc_1802)).hi_);
f_check_type_469(F->up, F->it_1803, (*(P121)rt_nil_check(F->arrt_1801)).idx_, G_NV((*(P173)rt_nil_check(F->st_491)).line_));
(*(P177)rt_nil_check(F->cc_1802)).mlo_ = ((rt_int)0LL);
(*(P177)rt_nil_check(F->cc_1802)).mhi_ = ((rt_int)0LL);
(*(P177)rt_nil_check(F->cc_1802)).hasm_ = 0;
F->r_1800 = (*(P173)rt_nil_check(F->r_1800)).next_;
if ((F->r_1800 != NULL)) {
(*(P177)rt_nil_check(F->cc_1802)).inner_ = f_new_cons_455(F->up);
F->cc_1802 = (*(P177)rt_nil_check(F->cc_1802)).inner_;
F->arrt_1801 = (*(P121)rt_nil_check(F->arrt_1801)).elem_;
}
}
L_end_1804: ;
ret_:

  return;
}

static void f_discriminant_constraint_498(struct f_greenc_1fr *up_, P173 st_495, P121 t_496, P177 c_497) {
  struct f_discriminant_constraint_498fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_495 = st_495;
F->t_496 = t_496;
F->c_497 = c_497;
F->a_1805 = NULL;
F->a_1805 = (*(P173)rt_nil_check(F->st_495)).a_;
F->f_1806 = NULL;
F->f_1806 = (*(P121)rt_nil_check(F->t_496)).fields_;
F->vt_1807 = NULL;
F->v_1808 = NULL;
F->d_1809 = NULL;
F->tail_1810 = NULL;
(*(P177)rt_nil_check(F->c_497)).dv_ = NULL;
while ((F->a_1805 != NULL)) {
if (((*(P173)rt_nil_check(F->a_1805)).formal_ != NULL)) {
F->f_1806 = (*(P121)rt_nil_check(F->t_496)).fields_;
while (((F->f_1806 != NULL) && (!eq_rt_gstr((*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_1806)).name_)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->a_1805)).formal_)))))) {
F->f_1806 = (*(P1767)rt_nil_check(F->f_1806)).next_;
}
L_end_1812: ;
} else {
while (((F->f_1806 != NULL) && (!G_NV((*(P1767)rt_nil_check(F->f_1806)).is_discr_)))) {
F->f_1806 = (*(P1767)rt_nil_check(F->f_1806)).next_;
}
L_end_1813: ;
}
if (((F->f_1806 == NULL) || (!G_NV((*(P1767)rt_nil_check(F->f_1806)).is_discr_)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->st_495)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("a discriminant constraint gives the values of discriminants of ", 63), f_kind_name_465(F->up, F->t_496)), rt_g_lit(" (RM79 3.7.3)", 13)));
}
f_gexpr_773(F->up, F->a_1805, (*(P1767)rt_nil_check(F->f_1806)).t_, &F->vt_1807, &F->v_1808);
f_check_type_469(F->up, F->vt_1807, (*(P1767)rt_nil_check(F->f_1806)).t_, G_NV((*(P173)rt_nil_check(F->st_495)).line_));
F->d_1809 = ({ R1772 *cell1814 = rt_alloc(sizeof(R1772)); *cell1814 = cp_R1772(({ R1772 ag1815; ag1815.name_ = (*(P1767)rt_nil_check(F->f_1806)).name_; ag1815.v_ = F->v_1808; ag1815.next_ = NULL; ag1815; })); (P1771)cell1814; });
if ((F->tail_1810 == NULL)) {
(*(P177)rt_nil_check(F->c_497)).dv_ = F->d_1809;
} else {
(*(P1771)rt_nil_check(F->tail_1810)).next_ = F->d_1809;
}
F->tail_1810 = F->d_1809;
if (((*(P173)rt_nil_check(F->a_1805)).formal_ == NULL)) {
F->f_1806 = (*(P1767)rt_nil_check(F->f_1806)).next_;
}
F->a_1805 = (*(P173)rt_nil_check(F->a_1805)).next_;
}
L_end_1811: ;
F->f_1806 = (*(P121)rt_nil_check(F->t_496)).fields_;
while ((F->f_1806 != NULL)) {
if (G_NV((*(P1767)rt_nil_check(F->f_1806)).is_discr_)) {
F->d_1809 = (*(P177)rt_nil_check(F->c_497)).dv_;
while (((F->d_1809 != NULL) && (!eq_rt_gstr((*(P139)rt_nil_check((*(P1771)rt_nil_check(F->d_1809)).name_)), (*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_1806)).name_)))))) {
F->d_1809 = (*(P1771)rt_nil_check(F->d_1809)).next_;
}
L_end_1817: ;
if ((F->d_1809 == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->st_495)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("no value for discriminant ", 26), (*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_1806)).name_))), rt_g_lit(" (RM79 3.7.3)", 13)));
}
}
F->f_1806 = (*(P1767)rt_nil_check(F->f_1806)).next_;
}
L_end_1816: ;
ret_:

  return;
}

static void f_discrete_bounds_504(struct f_greenc_1fr *up_, P173 r_499, P121 want_500, P121 *t_501, P139 *lo_502, P139 *hi_503) {
  struct f_discrete_bounds_504fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_499 = r_499;
F->want_500 = want_500;
F->t_501 = t_501;
F->lo_502 = lo_502;
F->hi_503 = hi_503;
F->c_1818 = NULL;
F->y_1819 = NULL;
if ((G_NV((*(P173)rt_nil_check(F->r_499)).kind_) == ((rt_int)14LL))) {
f_range_bounds_768(F->up, (*(P173)rt_nil_check(F->r_499)).a_, (*(P173)rt_nil_check(F->r_499)).b_, F->want_500, G_NV((*(P173)rt_nil_check(F->r_499)).line_), &(*F->t_501), &(*F->lo_502), &(*F->hi_503));
goto ret_;
}
if ((G_NV((*(P173)rt_nil_check(F->r_499)).kind_) == ((rt_int)5LL))) {
F->y_1819 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->r_499)).name_)));
if (((F->y_1819 == NULL) || (G_NV((*(P116)rt_nil_check(F->y_1819)).kind_) != ((rt_int)5LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->r_499)).line_), rt_g_lit("a discrete range is L .. H, T range L .. H or a type mark (RM79 3.6)", 68));
}
} else if ((G_NV((*(P173)rt_nil_check(F->r_499)).kind_) != ((rt_int)80LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->r_499)).line_), rt_g_lit("a discrete range is L .. H, T range L .. H or a type mark (RM79 3.6)", 68));
}
if ((G_NV((*(P173)rt_nil_check(F->r_499)).kind_) == ((rt_int)5LL))) {
(*F->t_501) = (*(P116)rt_nil_check(F->y_1819)).t_;
F->c_1818 = (*(P116)rt_nil_check(F->y_1819)).c_;
} else {
f_resolve_490(F->up, F->r_499, &(*F->t_501), &F->c_1818);
}
if (((F->c_1818 == NULL) || ((*(P177)rt_nil_check(F->c_1818)).lo_ == NULL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->r_499)).line_), rt_g_lit("this type mark has no bounds to give a discrete range", 53));
}
(*F->lo_502) = (*(P177)rt_nil_check(F->c_1818)).lo_;
(*F->hi_503) = (*(P177)rt_nil_check(F->c_1818)).hi_;
ret_:

  return;
}

static void f_range_of_508(struct f_greenc_1fr *up_, P173 r_505, P121 t_506, P177 c_507) {
  struct f_range_of_508fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_505 = r_505;
F->t_506 = t_506;
F->c_507 = c_507;
F->dummy_1820 = NULL;
F->ok_1821 = INT_MIN;
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->r_505)).a_, F->t_506, &F->dummy_1820, &(*(P177)rt_nil_check(F->c_507)).lo_);
f_check_type_469(F->up, F->dummy_1820, F->t_506, G_NV((*(P173)rt_nil_check(F->r_505)).line_));
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->r_505)).b_, F->t_506, &F->dummy_1820, &(*(P177)rt_nil_check(F->c_507)).hi_);
f_check_type_469(F->up, F->dummy_1820, F->t_506, G_NV((*(P173)rt_nil_check(F->r_505)).line_));
if ((G_NV((*(P121)rt_nil_check(F->t_506)).kind_) == ((rt_int)16LL))) {
(*(P177)rt_nil_check(F->c_507)).lo_ = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_507)).lo_))), one_rt_gstr(41)));
(*(P177)rt_nil_check(F->c_507)).hi_ = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_507)).hi_))), one_rt_gstr(41)));
}
f_manifest_486(F->up, (*(P173)rt_nil_check(F->r_505)).a_, &(*(P177)rt_nil_check(F->c_507)).mlo_, &F->ok_1821);
 (void)rt_range(F->ok_1821, 0, 1);
(*(P177)rt_nil_check(F->c_507)).hasm_ = G_NV(F->ok_1821);
f_manifest_486(F->up, (*(P173)rt_nil_check(F->r_505)).b_, &(*(P177)rt_nil_check(F->c_507)).mhi_, &F->ok_1821);
 (void)rt_range(F->ok_1821, 0, 1);
(*(P177)rt_nil_check(F->c_507)).hasm_ = (G_NV((*(P177)rt_nil_check(F->c_507)).hasm_) && G_NV(F->ok_1821));
ret_:

  return;
}

static void f_fresh_typ_512(struct f_greenc_1fr *up_, rt_int kind_509, P139 name_510, P121 *t_511) {
  struct f_fresh_typ_512fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_509 = kind_509;
F->name_510 = name_510;
F->t_511 = t_511;
F->ph_1822 = NULL;
F->ph_1822 = F->up->completing_172;
F->up->completing_172 = NULL;
if ((F->ph_1822 == NULL)) {
(*F->t_511) = f_new_typ_454(F->up, F->kind_509);
(*(P121)rt_nil_check((*F->t_511))).name_ = F->name_510;
goto ret_;
}
as_R122(&(*(P121)rt_nil_check(F->ph_1822)), (*(P121)rt_nil_check(f_new_typ_454(F->up, F->kind_509))));
(*(P121)rt_nil_check(F->ph_1822)).name_ = F->name_510;
(*F->t_511) = F->ph_1822;
ret_:

  return;
}

static void f_inherit_516(struct f_greenc_1fr *up_, P121 parent_513, P121 t_514, rt_int line_515) {
  struct f_inherit_516fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->parent_513 = parent_513;
F->t_514 = t_514;
F->line_515 = line_515;
F->s_1823 = NULL;
F->s_1823 = F->up->scope_stack_120;
F->z_1824 = NULL;
F->p_1825 = NULL;
F->q_1826 = NULL;
F->tail_1827 = NULL;
F->uses_1828 = INT_MIN;
F->news_1829 = NULL;
while ((F->s_1823 != NULL)) {
if (((((G_NV((*(P116)rt_nil_check(F->s_1823)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->s_1823)).kind_) == ((rt_int)4LL))) && (!G_NV((*(P116)rt_nil_check(F->s_1823)).hidden_))) && ((*(P116)rt_nil_check(F->s_1823)).members_ == NULL))) {
F->uses_1828 = f_same_429(F->up, (*(P116)rt_nil_check(F->s_1823)).result_, F->parent_513);
F->p_1825 = (*(P116)rt_nil_check(F->s_1823)).params_;
while ((F->p_1825 != NULL)) {
F->uses_1828 = (G_NV(F->uses_1828) || f_same_429(F->up, (*(P1752)rt_nil_check(F->p_1825)).t_, F->parent_513));
F->p_1825 = (*(P1752)rt_nil_check(F->p_1825)).next_;
}
L_end_1831: ;
if (G_NV(F->uses_1828)) {
f_copy_sym_1021(F->up, F->s_1823, &F->z_1824);
(*(P116)rt_nil_check(F->z_1824)).params_ = NULL;
F->tail_1827 = NULL;
F->p_1825 = (*(P116)rt_nil_check(F->s_1823)).params_;
while ((F->p_1825 != NULL)) {
F->q_1826 = ({ R1753 *cell1833 = rt_alloc(sizeof(R1753)); *cell1833 = cp_R1753(({ R1753 ag1834; ag1834.name_ = (*(P1752)rt_nil_check(F->p_1825)).name_; ag1834.mode_ = G_NV((*(P1752)rt_nil_check(F->p_1825)).mode_); ag1834.t_ = (*(P1752)rt_nil_check(F->p_1825)).t_; ag1834.c_ = (*(P1752)rt_nil_check(F->p_1825)).c_; ag1834.cfield_ = (*(P1752)rt_nil_check(F->p_1825)).cfield_; ag1834.dflt_ = (*(P1752)rt_nil_check(F->p_1825)).dflt_; ag1834.next_ = NULL; ag1834; })); (P1752)cell1833; });
if (f_same_429(F->up, (*(P1752)rt_nil_check(F->q_1826)).t_, F->parent_513)) {
(*(P1752)rt_nil_check(F->q_1826)).t_ = F->t_514;
}
if ((F->tail_1827 == NULL)) {
(*(P116)rt_nil_check(F->z_1824)).params_ = F->q_1826;
} else {
(*(P1752)rt_nil_check(F->tail_1827)).next_ = F->q_1826;
}
F->tail_1827 = F->q_1826;
F->p_1825 = (*(P1752)rt_nil_check(F->p_1825)).next_;
}
L_end_1832: ;
if (f_same_429(F->up, (*(P116)rt_nil_check(F->z_1824)).result_, F->parent_513)) {
(*(P116)rt_nil_check(F->z_1824)).result_ = F->t_514;
}
(*(P116)rt_nil_check(F->z_1824)).chain_ = F->news_1829;
F->news_1829 = F->z_1824;
}
}
F->s_1823 = (*(P116)rt_nil_check(F->s_1823)).stack_;
}
L_end_1830: ;
while ((F->news_1829 != NULL)) {
F->z_1824 = F->news_1829;
F->news_1829 = (*(P116)rt_nil_check(F->news_1829)).chain_;
(*(P116)rt_nil_check(F->z_1824)).chain_ = NULL;
f_define_447(F->up, F->z_1824, F->line_515);
}
L_end_1835: ;
ret_:

  return;
}

static void f_derive_literals_519(struct f_greenc_1fr *up_, P121 t_517, rt_int line_518) {
  struct f_derive_literals_519fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_517 = t_517;
F->line_518 = line_518;
F->l_1836 = NULL;
F->l_1836 = (*(P121)rt_nil_check(F->t_517)).lits_;
F->n_1837 = INT64_MIN;
F->n_1837 = ((rt_int)0LL);
F->y_1838 = NULL;
while ((F->l_1836 != NULL)) {
if ((G_NV((*(P173)rt_nil_check(F->l_1836)).kind_) == ((rt_int)5LL))) {
F->y_1838 = f_new_sym_452(F->up, ((rt_int)7LL), (*(P173)rt_nil_check(F->l_1836)).name_);
(*(P116)rt_nil_check(F->y_1838)).t_ = F->t_517;
(*(P116)rt_nil_check(F->y_1838)).result_ = F->t_517;
(*(P116)rt_nil_check(F->y_1838)).mvalue_ = G_NV(F->n_1837);
(*(P116)rt_nil_check(F->y_1838)).hasmv_ = 1;
f_define_447(F->up, F->y_1838, F->line_518);
}
F->n_1837 = rt_add(G_NV(F->n_1837), ((rt_int)1LL));
F->l_1836 = (*(P173)rt_nil_check(F->l_1836)).next_;
}
L_end_1839: ;
ret_:

  return;
}

static void f_type_definition_524(struct f_greenc_1fr *up_, P173 d_520, P139 name_521, P121 *t_522, P177 *c_523) {
  struct f_type_definition_524fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_520 = d_520;
F->name_521 = name_521;
F->t_522 = t_522;
F->c_523 = c_523;
F->dummy_1840 = NULL;
F->it_1841 = NULL;
F->ic_1842 = NULL;
F->l_1843 = NULL;
F->comp_1844 = NULL;
F->f_1845 = NULL;
F->tail_1846 = NULL;
F->ok_1847 = INT_MIN;
F->n_1848 = INT64_MIN;
F->y_1849 = NULL;
(*F->c_523) = f_new_cons_455(F->up);
{ rt_int sel1850 = G_NV((*(P173)rt_nil_check(F->d_520)).kind_);
if (0 || sel1850 == ((rt_int)70LL)) {
f_fresh_typ_512(F->up, ((rt_int)4LL), F->name_521, &(*F->t_522));
(*(P121)rt_nil_check((*F->t_522))).lits_ = (*(P173)rt_nil_check(F->d_520)).a_;
F->l_1843 = (*(P173)rt_nil_check(F->d_520)).a_;
F->n_1848 = ((rt_int)0LL);
while ((F->l_1843 != NULL)) {
if ((G_NV((*(P173)rt_nil_check(F->l_1843)).kind_) == ((rt_int)5LL))) {
F->y_1849 = f_new_sym_452(F->up, ((rt_int)7LL), (*(P173)rt_nil_check(F->l_1843)).name_);
(*(P116)rt_nil_check(F->y_1849)).t_ = (*F->t_522);
(*(P116)rt_nil_check(F->y_1849)).result_ = (*F->t_522);
(*(P116)rt_nil_check(F->y_1849)).mvalue_ = G_NV(F->n_1848);
(*(P116)rt_nil_check(F->y_1849)).hasmv_ = 1;
f_define_447(F->up, F->y_1849, G_NV((*(P173)rt_nil_check(F->l_1843)).line_));
}
F->n_1848 = rt_add(G_NV(F->n_1848), ((rt_int)1LL));
F->l_1843 = (*(P173)rt_nil_check(F->l_1843)).next_;
}
L_end_1851: ;
(*(P177)rt_nil_check((*F->c_523))).lo_ = f_mk_221(F->up, rt_g_lit("0", 1));
(*(P177)rt_nil_check((*F->c_523))).hi_ = f_mk_221(F->up, rt_g_s2g(rt_str_of_int(rt_sub(G_NV(F->n_1848), ((rt_int)1LL)))));
(*(P177)rt_nil_check((*F->c_523))).mlo_ = ((rt_int)0LL);
(*(P177)rt_nil_check((*F->c_523))).mhi_ = rt_sub(G_NV(F->n_1848), ((rt_int)1LL));
(*(P177)rt_nil_check((*F->c_523))).hasm_ = 1;
} else if (0 || sel1850 == ((rt_int)71LL)) {
f_fresh_typ_512(F->up, ((rt_int)1LL), F->name_521, &(*F->t_522));
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->d_520)).a_, F->up->ty_int_155, &F->dummy_1840, &(*(P177)rt_nil_check((*F->c_523))).lo_);
if ((G_NV((*(P121)rt_nil_check(F->dummy_1840)).kind_) != ((rt_int)1LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->d_520)).line_), rt_g_lit("the bounds of an integer type are integers (RM79 3.5.4)", 55));
}
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->d_520)).b_, F->up->ty_int_155, &F->dummy_1840, &(*(P177)rt_nil_check((*F->c_523))).hi_);
if ((G_NV((*(P121)rt_nil_check(F->dummy_1840)).kind_) != ((rt_int)1LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->d_520)).line_), rt_g_lit("the bounds of an integer type are integers (RM79 3.5.4)", 55));
}
f_manifest_486(F->up, (*(P173)rt_nil_check(F->d_520)).a_, &(*(P177)rt_nil_check((*F->c_523))).mlo_, &F->ok_1847);
 (void)rt_range(F->ok_1847, 0, 1);
(*(P177)rt_nil_check((*F->c_523))).hasm_ = G_NV(F->ok_1847);
f_manifest_486(F->up, (*(P173)rt_nil_check(F->d_520)).b_, &(*(P177)rt_nil_check((*F->c_523))).mhi_, &F->ok_1847);
 (void)rt_range(F->ok_1847, 0, 1);
(*(P177)rt_nil_check((*F->c_523))).hasm_ = (G_NV((*(P177)rt_nil_check((*F->c_523))).hasm_) && G_NV(F->ok_1847));
(*(P121)rt_nil_check((*F->t_522))).parent_ = F->up->ty_int_155;
(*(P121)rt_nil_check((*F->t_522))).tcons_ = (*F->c_523);
if ((G_NV((*(P177)rt_nil_check((*F->c_523))).hasm_) && ((G_NV((*(P177)rt_nil_check((*F->c_523))).mlo_) >= rt_neg(((rt_int)2147483648LL))) && (G_NV((*(P177)rt_nil_check((*F->c_523))).mhi_) <= ((rt_int)2147483647LL))))) {
(*(P121)rt_nil_check((*F->t_522))).parent_ = F->up->ty_short_166;
}
f_inherit_516(F->up, (*(P121)rt_nil_check((*F->t_522))).parent_, (*F->t_522), G_NV((*(P173)rt_nil_check(F->d_520)).line_));
} else if (0 || sel1850 == ((rt_int)72LL)) {
f_real_type_586(F->up, F->d_520, F->name_521, &(*F->t_522), &(*F->c_523));
} else if (0 || sel1850 == ((rt_int)73LL)) {
f_array_type_531(F->up, (*(P173)rt_nil_check(F->d_520)).a_, (*(P173)rt_nil_check(F->d_520)).b_, F->name_521, G_NV((*(P173)rt_nil_check(F->d_520)).line_), &(*F->t_522), &(*F->c_523));
} else if (0 || sel1850 == ((rt_int)74LL)) {
f_fresh_typ_512(F->up, ((rt_int)7LL), F->name_521, &(*F->t_522));
F->up->disc_syms_181 = NULL;
f_record_components_567(F->up, (*(P173)rt_nil_check(F->d_520)).a_, (*F->t_522), NULL, G_NV((*(P173)rt_nil_check(F->d_520)).line_));
while ((F->up->disc_syms_181 != NULL)) {
f_remove_sym_562(F->up, F->up->disc_syms_181);
F->up->disc_syms_181 = (*(P116)rt_nil_check(F->up->disc_syms_181)).mnext_;
}
L_end_1852: ;
} else if (0 || sel1850 == ((rt_int)75LL)) {
f_fresh_typ_512(F->up, ((rt_int)8LL), F->name_521, &(*F->t_522));
(*(P121)rt_nil_check((*F->t_522))).decl_ = (*(P173)rt_nil_check(F->d_520)).a_;
if (((((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->d_520)).a_)).kind_) == ((rt_int)80LL)) && (f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->d_520)).a_)).name_))) != NULL)) && (G_NV((*(P116)rt_nil_check(f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->d_520)).a_)).name_))))).kind_) == ((rt_int)5LL))) && ((*(P116)rt_nil_check(f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->d_520)).a_)).name_))))).t_ != NULL))) {
f_finish_ptr_588(F->up, (*F->t_522));
}
} else if (0 || sel1850 == ((rt_int)76LL)) {
f_derived_type_581(F->up, F->d_520, F->name_521, &(*F->t_522), &(*F->c_523));
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->d_520)).line_), rt_g_lit("this type definition is not handled", 35));
}
}
ret_:

  return;
}

static void f_array_type_531(struct f_greenc_1fr *up_, P173 idx_525, P173 comp_526, P139 name_527, rt_int line_528, P121 *t_529, P177 *c_530) {
  struct f_array_type_531fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->idx_525 = idx_525;
F->comp_526 = comp_526;
F->name_527 = name_527;
F->line_528 = line_528;
F->t_529 = t_529;
F->c_530 = c_530;
F->l_1853 = NULL;
F->l_1853 = F->idx_525;
F->rowc_1854 = NULL;
F->ic_1855 = NULL;
F->it_1856 = NULL;
(*F->c_530) = f_new_cons_455(F->up);
f_fresh_typ_512(F->up, ((rt_int)6LL), F->name_527, &(*F->t_529));
(*(P121)rt_nil_check((*F->t_529))).dims_ = f_list_len_301(F->up, F->idx_525);
if (((*(P173)rt_nil_check(F->idx_525)).next_ == NULL)) {
f_resolve_490(F->up, F->comp_526, &(*(P121)rt_nil_check((*F->t_529))).elem_, &(*(P121)rt_nil_check((*F->t_529))).elemcons_);
} else {
if (((G_NV((*(P173)rt_nil_check(F->idx_525)).kind_) == ((rt_int)14LL)) != (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->idx_525)).next_)).kind_) == ((rt_int)14LL)))) {
f_fail_242(F->up, F->line_528, rt_g_lit("the indexes of an array are all discrete ranges or all type marks (RM79 3.6)", 76));
}
f_array_type_531(F->up, (*(P173)rt_nil_check(F->idx_525)).next_, F->comp_526, NULL, F->line_528, &(*(P121)rt_nil_check((*F->t_529))).elem_, &F->rowc_1854);
if (((*(P177)rt_nil_check(F->rowc_1854)).lo_ != NULL)) {
(*(P121)rt_nil_check((*F->t_529))).elemcons_ = F->rowc_1854;
}
}
if ((G_NV((*(P173)rt_nil_check(F->l_1853)).kind_) == ((rt_int)14LL))) {
f_discrete_bounds_504(F->up, F->l_1853, NULL, &(*(P121)rt_nil_check((*F->t_529))).idx_, &(*(P177)rt_nil_check((*F->c_530))).lo_, &(*(P177)rt_nil_check((*F->c_530))).hi_);
f_static_range_535(F->up, (*(P173)rt_nil_check(F->l_1853)).a_, (*(P173)rt_nil_check(F->l_1853)).b_, (*F->c_530));
} else if (((G_NV((*(P173)rt_nil_check(F->l_1853)).kind_) == ((rt_int)80LL)) && (G_NV((*(P173)rt_nil_check(F->l_1853)).flag_) == ((rt_int)1LL)))) {
f_discrete_bounds_504(F->up, F->l_1853, NULL, &(*(P121)rt_nil_check((*F->t_529))).idx_, &(*(P177)rt_nil_check((*F->c_530))).lo_, &(*(P177)rt_nil_check((*F->c_530))).hi_);
} else {
f_resolve_490(F->up, F->l_1853, &(*(P121)rt_nil_check((*F->t_529))).idx_, &F->ic_1855);
if (((((G_NV((*(P121)rt_nil_check((*(P121)rt_nil_check((*F->t_529))).idx_)).kind_) == ((rt_int)4LL)) || (G_NV((*(P121)rt_nil_check((*(P121)rt_nil_check((*F->t_529))).idx_)).kind_) == ((rt_int)11LL))) || (G_NV((*(P121)rt_nil_check((*(P121)rt_nil_check((*F->t_529))).idx_)).kind_) == ((rt_int)2LL))) || (G_NV((*(P177)rt_nil_check(F->ic_1855)).hasm_) && ((rt_sub(G_NV((*(P177)rt_nil_check(F->ic_1855)).mhi_), G_NV((*(P177)rt_nil_check(F->ic_1855)).mlo_)) >= ((rt_int)0LL)) && (rt_sub(G_NV((*(P177)rt_nil_check(F->ic_1855)).mhi_), G_NV((*(P177)rt_nil_check(F->ic_1855)).mlo_)) < ((rt_int)1000000LL)))))) {
(*(P177)rt_nil_check((*F->c_530))).lo_ = (*(P177)rt_nil_check(F->ic_1855)).lo_;
(*(P177)rt_nil_check((*F->c_530))).hi_ = (*(P177)rt_nil_check(F->ic_1855)).hi_;
(*(P177)rt_nil_check((*F->c_530))).mlo_ = G_NV((*(P177)rt_nil_check(F->ic_1855)).mlo_);
(*(P177)rt_nil_check((*F->c_530))).mhi_ = G_NV((*(P177)rt_nil_check(F->ic_1855)).mhi_);
(*(P177)rt_nil_check((*F->c_530))).hasm_ = G_NV((*(P177)rt_nil_check(F->ic_1855)).hasm_);
} else if (((*(P177)rt_nil_check(F->ic_1855)).lo_ != NULL)) {
(*(P121)rt_nil_check((*F->t_529))).tcons_ = f_new_cons_455(F->up);
(*(P177)rt_nil_check((*(P121)rt_nil_check((*F->t_529))).tcons_)).lo_ = (*(P177)rt_nil_check(F->ic_1855)).lo_;
}
}
if ((!f_is_discrete_438(F->up, (*(P121)rt_nil_check((*F->t_529))).idx_))) {
f_fail_242(F->up, F->line_528, rt_g_lit("an index is of a discrete type (RM79 3.6)", 41));
}
if ((G_NV((*(P121)rt_nil_check((*F->t_529))).dims_) > ((rt_int)1LL))) {
(*(P177)rt_nil_check((*F->c_530))).inner_ = F->rowc_1854;
if ((((*(P177)rt_nil_check((*F->c_530))).lo_ == NULL) != ((*(P177)rt_nil_check(F->rowc_1854)).lo_ == NULL))) {
(*(P177)rt_nil_check((*F->c_530))).lo_ = NULL;
(*(P177)rt_nil_check((*F->c_530))).hi_ = NULL;
(*(P177)rt_nil_check((*F->c_530))).inner_ = NULL;
(*(P121)rt_nil_check((*F->t_529))).elemcons_ = NULL;
}
}
if (((*(P177)rt_nil_check((*F->c_530))).lo_ != NULL)) {
(*(P121)rt_nil_check((*F->t_529))).tcons_ = (*F->c_530);
}
ret_:

  return;
}

static void f_static_range_535(struct f_greenc_1fr *up_, P173 l_532, P173 h_533, P177 c_534) {
  struct f_static_range_535fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_532 = l_532;
F->h_533 = h_533;
F->c_534 = c_534;
F->ok_1857 = INT_MIN;
F->ok2_1858 = INT_MIN;
f_manifest_486(F->up, F->l_532, &(*(P177)rt_nil_check(F->c_534)).mlo_, &F->ok_1857);
 (void)rt_range(F->ok_1857, 0, 1);
f_manifest_486(F->up, F->h_533, &(*(P177)rt_nil_check(F->c_534)).mhi_, &F->ok2_1858);
 (void)rt_range(F->ok2_1858, 0, 1);
if ((f_is_char_lit_754(F->up, F->l_532) && f_is_char_lit_754(F->up, F->h_533))) {
(*(P177)rt_nil_check(F->c_534)).mlo_ = rt_sub(((rt_int)(G_NV(({ rt_gstr ix1859 = (*(P139)rt_nil_check((*(P173)rt_nil_check(F->l_532)).name_)); ix1859.p[rt_index(((rt_int)1LL), ix1859.lo, ix1859.hi) - ix1859.lo]; }))) + 1), ((rt_int)1LL));
(*(P177)rt_nil_check(F->c_534)).mhi_ = rt_sub(((rt_int)(G_NV(({ rt_gstr ix1860 = (*(P139)rt_nil_check((*(P173)rt_nil_check(F->h_533)).name_)); ix1860.p[rt_index(((rt_int)1LL), ix1860.lo, ix1860.hi) - ix1860.lo]; }))) + 1), ((rt_int)1LL));
F->ok_1857 = 1;
F->ok2_1858 = 1;
}
(*(P177)rt_nil_check(F->c_534)).hasm_ = (G_NV(F->ok_1857) && G_NV(F->ok2_1858));
ret_:

  return;
}

static void f_component_place_541(struct f_greenc_1fr *up_, P121 rt_536, P1767 f_537, rt_gstr a_538, rt_gstr ct_539, P139 *r_540) {
  struct f_component_place_541fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->rt_536 = rt_536;
F->f_537 = f_537;
F->a_538 = cp_rt_gstr(a_538);
F->ct_539 = cp_rt_gstr(ct_539);
F->r_540 = r_540;
F->bits_1861 = NULL;
if (eq_rt_gstr(F->a_538, rt_g_lit("POSITION", 8))) {
(*F->r_540) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)offsetof(", 18), F->ct_539), rt_g_lit(", ", 2)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_537)).name_)))), rt_g_lit("))", 2)));
} else if (eq_rt_gstr(F->a_538, rt_g_lit("FIRST_BIT", 9))) {
(*F->r_540) = f_mk_221(F->up, rt_g_lit("((rt_int)0)", 11));
} else {
(*F->r_540) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(sizeof(((", 19), F->ct_539), rt_g_lit(" *)0)->", 7)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_537)).name_)))), rt_g_lit(") * 8 - 1))", 11)));
}
ret_:

  return;
}

static rt_gstr f_no_value_543(struct f_greenc_1fr *up_, P121 t_542) {
  struct f_no_value_543fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_542 = t_542;
if (((G_NV((*(P121)rt_nil_check(F->t_542)).kind_) == ((rt_int)3LL)) || (G_NV((*(P121)rt_nil_check(F->t_542)).kind_) == ((rt_int)16LL)))) {
F->result_ = rt_g_lit("RT_G_NOVALUE_F", 14);
goto ret_;
} else if ((G_NV((*(P121)rt_nil_check(F->t_542)).kind_) == ((rt_int)1LL))) {
F->result_ = rt_g_lit("INT64_MIN", 9);
goto ret_;
}
F->result_ = rt_g_lit("INT_MIN", 7);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_elem_ctype_546(struct f_greenc_1fr *up_, P121 t_544, P139 *r_545) {
  struct f_elem_ctype_546fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_544 = t_544;
F->r_545 = r_545;
if ((G_NV((*(P121)rt_nil_check(F->t_544)).kind_) == ((rt_int)11LL))) {
(*F->r_545) = f_mk_221(F->up, rt_g_lit("unsigned char", 13));
} else {
f_ctype_474(F->up, F->t_544, &(*F->r_545));
}
ret_:

  return;
}

static void f_first_index_549(struct f_greenc_1fr *up_, P121 t_547, P139 *r_548) {
  struct f_first_index_549fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_547 = t_547;
F->r_548 = r_548;
if ((((*(P121)rt_nil_check(F->t_547)).tcons_ != NULL) && ((*(P177)rt_nil_check((*(P121)rt_nil_check(F->t_547)).tcons_)).lo_ != NULL))) {
(*F->r_548) = (*(P177)rt_nil_check((*(P121)rt_nil_check(F->t_547)).tcons_)).lo_;
} else if ((((*(P121)rt_nil_check(F->t_547)).idx_ != NULL) && (G_NV((*(P121)rt_nil_check((*(P121)rt_nil_check(F->t_547)).idx_)).kind_) == ((rt_int)1LL)))) {
(*F->r_548) = f_mk_221(F->up, rt_g_lit("1", 1));
} else {
(*F->r_548) = f_mk_221(F->up, rt_g_lit("0", 1));
}
ret_:

  return;
}

static int f_is_string_551(struct f_greenc_1fr *up_, P121 t_550) {
  struct f_is_string_551fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_550 = t_550;
if ((!(F->t_550 != NULL))) {
F->result_ = 0;
goto ret_;
}
if ((!(G_NV((*(P121)rt_nil_check(F->t_550)).kind_) == ((rt_int)6LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_derived_from_434(F->up, F->t_550, F->up->ty_string_159);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_subst_554(struct f_greenc_1fr *up_, rt_gstr s_552, rt_gstr r_553) {
  struct f_subst_554fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_552 = cp_rt_gstr(s_552);
F->r_553 = cp_rt_gstr(r_553);
{ rt_int lo1866 = ({ rt_gstr at1863 = F->s_552; at1863.lo; }), hi1867 = rt_sub(({ rt_gstr at1864 = F->s_552; at1864.hi; }), ((rt_int)1LL));
for (rt_int it1868 = lo1866; it1868 <= hi1867; it1868++) {
F->i_1865 = it1868;
if (((G_NV(({ rt_gstr ix1869 = F->s_552; ix1869.p[rt_index(F->i_1865, ix1869.lo, ix1869.hi) - ix1869.lo]; })) == 64) && (G_NV(({ rt_gstr ix1870 = F->s_552; ix1870.p[rt_index(rt_add(F->i_1865, ((rt_int)1LL)), ix1870.lo, ix1870.hi) - ix1870.lo]; })) == 64))) {
F->result_ = cat_rt_gstr(cat_rt_gstr(({ rt_gstr sl1872 = F->s_552; rt_int l_ = ({ rt_gstr at1871 = F->s_552; at1871.lo; }), h_ = rt_sub(F->i_1865, ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl1872.lo, sl1872.hi); rt_index(h_, sl1872.lo, sl1872.hi); } sl1872.p += l_ - sl1872.lo; sl1872.lo = l_; sl1872.hi = h_; sl1872; }), F->r_553), f_subst_554(F->up, ({ rt_gstr sl1876 = F->s_552; rt_int l_ = rt_add(F->i_1865, ((rt_int)2LL)), h_ = ({ rt_gstr at1875 = F->s_552; at1875.hi; }); if (l_ <= h_) { rt_index(l_, sl1876.lo, sl1876.hi); rt_index(h_, sl1876.lo, sl1876.hi); } sl1876.p += l_ - sl1876.lo; sl1876.lo = l_; sl1876.hi = h_; sl1876; }), F->r_553));
goto ret_;
}
}
}
L_end_1862: ;
F->result_ = F->s_552;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_mentions_record_556(struct f_greenc_1fr *up_, P139 s_555) {
  struct f_mentions_record_556fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_555 = s_555;
if ((F->s_555 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1880 = ((rt_int)1LL), hi1881 = rt_sub(({ rt_gstr at1878 = (*(P139)rt_nil_check(F->s_555)); at1878.hi >= at1878.lo ? at1878.hi - at1878.lo + 1 : (rt_int)0; }), ((rt_int)1LL));
for (rt_int it1882 = lo1880; it1882 <= hi1881; it1882++) {
F->i_1879 = it1882;
if (((G_NV(({ rt_gstr ix1883 = (*(P139)rt_nil_check(F->s_555)); ix1883.p[rt_index(F->i_1879, ix1883.lo, ix1883.hi) - ix1883.lo]; })) == 64) && (G_NV(({ rt_gstr ix1884 = (*(P139)rt_nil_check(F->s_555)); ix1884.p[rt_index(rt_add(F->i_1879, ((rt_int)1LL)), ix1884.lo, ix1884.hi) - ix1884.lo]; })) == 64))) {
F->result_ = 1;
goto ret_;
}
}
}
L_end_1877: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_subst_cons_560(struct f_greenc_1fr *up_, P177 c_557, rt_gstr r_558, P177 *res_559) {
  struct f_subst_cons_560fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_557 = c_557;
F->r_558 = cp_rt_gstr(r_558);
F->res_559 = res_559;
if (((F->c_557 == NULL) || (!(f_mentions_record_556(F->up, (*(P177)rt_nil_check(F->c_557)).lo_) || f_mentions_record_556(F->up, (*(P177)rt_nil_check(F->c_557)).hi_))))) {
(*F->res_559) = F->c_557;
goto ret_;
}
(*F->res_559) = f_new_cons_455(F->up);
as_R178(&(*(P177)rt_nil_check((*F->res_559))), (*(P177)rt_nil_check(F->c_557)));
(*(P177)rt_nil_check((*F->res_559))).lo_ = f_mk_221(F->up, f_subst_554(F->up, (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_557)).lo_)), F->r_558));
(*(P177)rt_nil_check((*F->res_559))).hi_ = f_mk_221(F->up, f_subst_554(F->up, (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_557)).hi_)), F->r_558));
ret_:

  return;
}

static void f_remove_sym_562(struct f_greenc_1fr *up_, P116 y_561) {
  struct f_remove_sym_562fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_561 = y_561;
F->h_1885 = INT64_MIN;
F->h_1885 = f_hash_407(F->up, (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_561)).name_)));
F->p_1886 = NULL;
if ((({ A115 ix1887 = F->up->table_118; ix1887.p[rt_index(G_NV(F->h_1885), ix1887.lo, ix1887.hi) - ix1887.lo]; }) == F->y_561)) {
(*({ A115 *ix1888 = &(F->up->table_118); &ix1888->p[rt_index(G_NV(F->h_1885), ix1888->lo, ix1888->hi) - ix1888->lo]; })) = (*(P116)rt_nil_check(F->y_561)).chain_;
} else {
F->p_1886 = ({ A115 ix1889 = F->up->table_118; ix1889.p[rt_index(G_NV(F->h_1885), ix1889.lo, ix1889.hi) - ix1889.lo]; });
while (((F->p_1886 != NULL) && ((*(P116)rt_nil_check(F->p_1886)).chain_ != F->y_561))) {
F->p_1886 = (*(P116)rt_nil_check(F->p_1886)).chain_;
}
L_end_1890: ;
if ((F->p_1886 != NULL)) {
(*(P116)rt_nil_check(F->p_1886)).chain_ = (*(P116)rt_nil_check(F->y_561)).chain_;
}
}
if ((F->up->scope_stack_120 == F->y_561)) {
F->up->scope_stack_120 = (*(P116)rt_nil_check(F->y_561)).stack_;
} else {
F->p_1886 = F->up->scope_stack_120;
while (((F->p_1886 != NULL) && ((*(P116)rt_nil_check(F->p_1886)).stack_ != F->y_561))) {
F->p_1886 = (*(P116)rt_nil_check(F->p_1886)).stack_;
}
L_end_1891: ;
if ((F->p_1886 != NULL)) {
(*(P116)rt_nil_check(F->p_1886)).stack_ = (*(P116)rt_nil_check(F->y_561)).stack_;
}
}
ret_:

  return;
}

static void f_record_components_567(struct f_greenc_1fr *up_, P173 list_563, P121 t_564, P1892 g_565, rt_int line_566) {
  struct f_record_components_567fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->list_563 = list_563;
F->t_564 = t_564;
F->g_565 = g_565;
F->line_566 = line_566;
F->comp_1894 = NULL;
F->comp_1894 = F->list_563;
F->f_1895 = NULL;
F->tail_1896 = NULL;
F->df_1897 = NULL;
F->prev_1898 = NULL;
F->pt_1899 = NULL;
F->vt_1900 = NULL;
F->pc_1901 = NULL;
F->y_1902 = NULL;
F->acc_1903 = NULL;
F->v_1904 = NULL;
F->x_1905 = NULL;
F->arm_1906 = NULL;
F->g2_1907 = NULL;
F->tail_1896 = (*(P121)rt_nil_check(F->t_564)).fields_;
while (((F->tail_1896 != NULL) && ((*(P1767)rt_nil_check(F->tail_1896)).next_ != NULL))) {
F->tail_1896 = (*(P1767)rt_nil_check(F->tail_1896)).next_;
}
L_end_1908: ;
while ((F->comp_1894 != NULL)) {
if ((G_NV((*(P173)rt_nil_check(F->comp_1894)).kind_) == ((rt_int)23LL))) {
F->df_1897 = (*(P121)rt_nil_check(F->t_564)).fields_;
while (((F->df_1897 != NULL) && (!eq_rt_gstr((*(P139)rt_nil_check((*(P1767)rt_nil_check(F->df_1897)).name_)), (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->comp_1894)).a_)).name_)))))) {
F->df_1897 = (*(P1767)rt_nil_check(F->df_1897)).next_;
}
L_end_1910: ;
if (((F->df_1897 == NULL) || (!G_NV((*(P1767)rt_nil_check(F->df_1897)).is_discr_)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->comp_1894)).line_), cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->comp_1894)).a_)).name_)), rt_g_lit(" is not a discriminant: a constant component ", 45)), rt_g_lit("without a value (RM79 3.7.1)", 28)));
}
if ((!f_is_discrete_438(F->up, (*(P1767)rt_nil_check(F->df_1897)).t_))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->comp_1894)).line_), rt_g_lit("the discriminant of a variant part is of a discrete type (RM79 3.7.2)", 69));
}
F->arm_1906 = (*(P173)rt_nil_check(F->comp_1894)).b_;
while ((F->arm_1906 != NULL)) {
F->g2_1907 = ({ R1893 *cell1912 = rt_alloc(sizeof(R1893)); *cell1912 = cp_R1893(({ R1893 ag1913; ag1913.disc_ = (*(P1767)rt_nil_check(F->df_1897)).name_; ag1913.arm_ = F->arm_1906; ag1913.variant_ = F->comp_1894; ag1913.next_ = F->g_565; ag1913; })); (P1892)cell1912; });
f_record_components_567(F->up, (*(P173)rt_nil_check(F->arm_1906)).b_, F->t_564, F->g2_1907, F->line_566);
F->arm_1906 = (*(P173)rt_nil_check(F->arm_1906)).next_;
}
L_end_1911: ;
F->tail_1896 = (*(P121)rt_nil_check(F->t_564)).fields_;
while (((F->tail_1896 != NULL) && ((*(P1767)rt_nil_check(F->tail_1896)).next_ != NULL))) {
F->tail_1896 = (*(P1767)rt_nil_check(F->tail_1896)).next_;
}
L_end_1914: ;
} else {
if ((f_field_index_944(F->up, F->t_564, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->comp_1894)).name_))) != ((rt_int)0LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->comp_1894)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("component ", 10), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->comp_1894)).name_))), rt_g_lit(" is declared twice (RM79 3.7)", 29)));
}
F->f_1895 = ({ R1768 *cell1915 = rt_alloc(sizeof(R1768)); *cell1915 = cp_R1768(({ R1768 ag1916; ag1916.name_ = (*(P173)rt_nil_check(F->comp_1894)).name_; ag1916.t_ = NULL; ag1916.c_ = NULL; ag1916.next_ = NULL; ag1916.dflt_ = (*(P173)rt_nil_check(F->comp_1894)).b_; ag1916.is_const_ = (G_NV((*(P173)rt_nil_check(F->comp_1894)).flag_) == ((rt_int)1LL)); ag1916.is_discr_ = 0; ag1916.dsym_ = NULL; ag1916.guard_ = F->g_565; ag1916.cond_ = NULL; ag1916.dyn_ = 0; ag1916; })); (P1767)cell1915; });
if ((((*(P173)rt_nil_check(F->comp_1894)).a_ == F->prev_1898) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->comp_1894)).a_)).kind_) != ((rt_int)80LL)))) {
(*(P1767)rt_nil_check(F->f_1895)).t_ = F->pt_1899;
(*(P1767)rt_nil_check(F->f_1895)).c_ = F->pc_1901;
} else {
f_resolve_490(F->up, (*(P173)rt_nil_check(F->comp_1894)).a_, &(*(P1767)rt_nil_check(F->f_1895)).t_, &(*(P1767)rt_nil_check(F->f_1895)).c_);
}
F->prev_1898 = (*(P173)rt_nil_check(F->comp_1894)).a_;
F->pt_1899 = (*(P1767)rt_nil_check(F->f_1895)).t_;
F->pc_1901 = (*(P1767)rt_nil_check(F->f_1895)).c_;
if ((((*(P1767)rt_nil_check(F->f_1895)).c_ != NULL) && (f_mentions_record_556(F->up, (*(P177)rt_nil_check((*(P1767)rt_nil_check(F->f_1895)).c_)).lo_) || f_mentions_record_556(F->up, (*(P177)rt_nil_check((*(P1767)rt_nil_check(F->f_1895)).c_)).hi_)))) {
(*(P1767)rt_nil_check(F->f_1895)).dyn_ = 1;
if ((G_NV((*(P121)rt_nil_check((*(P1767)rt_nil_check(F->f_1895)).t_)).kind_) != ((rt_int)6LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->comp_1894)).line_), rt_g_lit("a discriminant is used only as an array bound or a variant selector (RM79 3.7.1)", 80));
}
if (((*(P121)rt_nil_check((*(P1767)rt_nil_check(F->f_1895)).t_)).tcons_ == (*(P1767)rt_nil_check(F->f_1895)).c_)) {
(*(P121)rt_nil_check((*(P1767)rt_nil_check(F->f_1895)).t_)).tcons_ = NULL;
}
}
if ((F->g_565 != NULL)) {
f_guard_cond_571(F->up, F->g_565, (*(P1767)rt_nil_check(F->f_1895)).t_, &F->x_1905);
(*(P1767)rt_nil_check(F->f_1895)).cond_ = F->x_1905;
}
if (((*(P173)rt_nil_check(F->comp_1894)).b_ != NULL)) {
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->comp_1894)).b_, (*(P1767)rt_nil_check(F->f_1895)).t_, &F->vt_1900, &F->v_1904);
f_check_type_469(F->up, F->vt_1900, (*(P1767)rt_nil_check(F->f_1895)).t_, G_NV((*(P173)rt_nil_check(F->comp_1894)).line_));
F->y_1902 = f_new_sym_452(F->up, ((rt_int)2LL), f_mk_221(F->up, rt_g_lit("dflt", 4)));
f_storage_619(F->up, rt_g_lit("dflt", 4), (*(P1767)rt_nil_check(F->f_1895)).t_, &F->acc_1903);
(*(P116)rt_nil_check(F->y_1902)).t_ = (*(P1767)rt_nil_check(F->f_1895)).t_;
(*(P116)rt_nil_check(F->y_1902)).c_ = (*(P1767)rt_nil_check(F->f_1895)).c_;
f_bind_622(F->up, F->y_1902, F->acc_1903);
if ((f_composite_594(F->up, (*(P1767)rt_nil_check(F->f_1895)).t_) && (!f_bounded_457(F->up, (*(P1767)rt_nil_check(F->f_1895)).c_)))) {
f_copy_code_604(F->up, (*(P1767)rt_nil_check(F->f_1895)).t_, (*(P139)rt_nil_check(F->v_1904)), &F->x_1905);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->acc_1903)), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->x_1905))), one_rt_gstr(59)));
} else {
f_init_storage_592(F->up, (*(P139)rt_nil_check(F->acc_1903)), (*(P1767)rt_nil_check(F->f_1895)).t_, (*(P1767)rt_nil_check(F->f_1895)).c_);
f_assign_code_600(F->up, (*(P139)rt_nil_check(F->acc_1903)), (*(P1767)rt_nil_check(F->f_1895)).t_, (*(P139)rt_nil_check(F->v_1904)), (*(P1767)rt_nil_check(F->f_1895)).c_, &F->x_1905);
f_emit_248(F->up, (*(P139)rt_nil_check(F->x_1905)));
}
(*(P1767)rt_nil_check(F->f_1895)).dsym_ = F->y_1902;
} else if (G_NV((*(P1767)rt_nil_check(F->f_1895)).is_const_)) {
(*(P1767)rt_nil_check(F->f_1895)).is_discr_ = 1;
F->y_1902 = f_new_sym_452(F->up, ((rt_int)2LL), (*(P1767)rt_nil_check(F->f_1895)).name_);
(*(P116)rt_nil_check(F->y_1902)).t_ = (*(P1767)rt_nil_check(F->f_1895)).t_;
(*(P116)rt_nil_check(F->y_1902)).c_ = (*(P1767)rt_nil_check(F->f_1895)).c_;
(*(P116)rt_nil_check(F->y_1902)).ro_ = 1;
(*(P116)rt_nil_check(F->y_1902)).access_path_ = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(@@.", 4), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_1895)).name_)))), one_rt_gstr(41)));
F->up->depth_119 = rt_add(G_NV(F->up->depth_119), ((rt_int)1LL));
f_define_447(F->up, F->y_1902, G_NV((*(P173)rt_nil_check(F->comp_1894)).line_));
F->up->depth_119 = rt_sub(G_NV(F->up->depth_119), ((rt_int)1LL));
(*(P116)rt_nil_check(F->y_1902)).mnext_ = F->up->disc_syms_181;
F->up->disc_syms_181 = F->y_1902;
}
if ((F->tail_1896 == NULL)) {
(*(P121)rt_nil_check(F->t_564)).fields_ = F->f_1895;
} else {
(*(P1767)rt_nil_check(F->tail_1896)).next_ = F->f_1895;
}
F->tail_1896 = F->f_1895;
}
F->comp_1894 = (*(P173)rt_nil_check(F->comp_1894)).next_;
}
L_end_1909: ;
ret_:

  return;
}

static void f_guard_cond_571(struct f_greenc_1fr *up_, P1892 g_568, P121 t_569, P139 *r_570) {
  struct f_guard_cond_571fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->g_568 = g_568;
F->t_569 = t_569;
F->r_570 = r_570;
F->a_1917 = NULL;
F->l_1918 = NULL;
F->df_1919 = NULL;
F->x_1920 = NULL;
F->d_1921 = NULL;
F->dt_1922 = NULL;
F->vt_1923 = NULL;
F->lo_1924 = NULL;
F->hi_1925 = NULL;
(*F->r_570) = f_mk_221(F->up, rt_g_lit("1", 1));
if ((F->g_568 == NULL)) {
goto ret_;
}
F->d_1921 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(@@.", 4), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1892)rt_nil_check(F->g_568)).disc_)))), one_rt_gstr(41)));
F->df_1919 = NULL;
if ((G_NV((*(P173)rt_nil_check((*(P1892)rt_nil_check(F->g_568)).arm_)).flag_) == ((rt_int)1LL))) {
F->x_1920 = f_mk_221(F->up, rt_g_lit("0", 1));
F->a_1917 = (*(P173)rt_nil_check((*(P1892)rt_nil_check(F->g_568)).variant_)).b_;
while ((F->a_1917 != NULL)) {
if ((F->a_1917 != (*(P1892)rt_nil_check(F->g_568)).arm_)) {
f_arm_test_576(F->up, F->a_1917, (*(P1892)rt_nil_check(F->g_568)).disc_, (*(P139)rt_nil_check(F->d_1921)), &F->x_1920);
}
F->a_1917 = (*(P173)rt_nil_check(F->a_1917)).next_;
}
L_end_1926: ;
F->x_1920 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("!(", 2), (*(P139)rt_nil_check(F->x_1920))), one_rt_gstr(41)));
} else {
F->x_1920 = f_mk_221(F->up, rt_g_lit("0", 1));
f_arm_test_576(F->up, (*(P1892)rt_nil_check(F->g_568)).arm_, (*(P1892)rt_nil_check(F->g_568)).disc_, (*(P139)rt_nil_check(F->d_1921)), &F->x_1920);
}
f_guard_cond_571(F->up, (*(P1892)rt_nil_check(F->g_568)).next_, F->t_569, &(*F->r_570));
(*F->r_570) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check((*F->r_570)))), rt_g_lit(" && (", 5)), (*(P139)rt_nil_check(F->x_1920))), rt_g_lit("))", 2)));
ret_:

  return;
}

static void f_arm_test_576(struct f_greenc_1fr *up_, P173 arm_572, P139 dname_573, rt_gstr d_574, P139 *x_575) {
  struct f_arm_test_576fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->arm_572 = arm_572;
F->dname_573 = dname_573;
F->d_574 = cp_rt_gstr(d_574);
F->x_575 = x_575;
F->l_1927 = NULL;
F->l_1927 = (*(P173)rt_nil_check(F->arm_572)).a_;
F->y_1928 = NULL;
F->y_1928 = f_lookup_409(F->up, (*(P139)rt_nil_check(F->dname_573)));
F->dt_1929 = NULL;
F->vt_1930 = NULL;
F->lo_1931 = NULL;
F->hi_1932 = NULL;
F->dt_1929 = (*(P116)rt_nil_check(F->y_1928)).t_;
while ((F->l_1927 != NULL)) {
if (((*(P173)rt_nil_check(F->l_1927)).b_ == NULL)) {
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->l_1927)).a_, F->dt_1929, &F->vt_1930, &F->lo_1931);
f_check_type_469(F->up, F->vt_1930, F->dt_1929, G_NV((*(P173)rt_nil_check(F->l_1927)).line_));
(*F->x_575) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*F->x_575))), rt_g_lit(" || ", 4)), F->d_574), rt_g_lit(" == ", 4)), (*(P139)rt_nil_check(F->lo_1931))));
} else {
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->l_1927)).a_, F->dt_1929, &F->vt_1930, &F->lo_1931);
f_check_type_469(F->up, F->vt_1930, F->dt_1929, G_NV((*(P173)rt_nil_check(F->l_1927)).line_));
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->l_1927)).b_, F->dt_1929, &F->vt_1930, &F->hi_1932);
f_check_type_469(F->up, F->vt_1930, F->dt_1929, G_NV((*(P173)rt_nil_check(F->l_1927)).line_));
(*F->x_575) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*F->x_575))), rt_g_lit(" || (", 5)), F->d_574), rt_g_lit(" >= ", 4)), (*(P139)rt_nil_check(F->lo_1931))), rt_g_lit(" && ", 4)), F->d_574), rt_g_lit(" <= ", 4)), (*(P139)rt_nil_check(F->hi_1932))), one_rt_gstr(41)));
}
F->l_1927 = (*(P173)rt_nil_check(F->l_1927)).next_;
}
L_end_1933: ;
ret_:

  return;
}

static void f_derived_type_581(struct f_greenc_1fr *up_, P173 d_577, P139 name_578, P121 *t_579, P177 *c_580) {
  struct f_derived_type_581fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_577 = d_577;
F->name_578 = name_578;
F->t_579 = t_579;
F->c_580 = c_580;
F->pt_1934 = NULL;
F->ct_1935 = NULL;
F->ph_1936 = NULL;
F->ph_1936 = F->up->completing_172;
F->up->completing_172 = NULL;
f_resolve_490(F->up, (*(P173)rt_nil_check(F->d_577)).a_, &F->pt_1934, &(*F->c_580));
if (((G_NV((*(P121)rt_nil_check(F->pt_1934)).kind_) == ((rt_int)9LL)) && G_NV((*(P121)rt_nil_check(F->pt_1934)).priv_))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->d_577)).line_), rt_g_lit("a type cannot be derived from a private type before its full declaration", 72));
}
if ((f_composite_594(F->up, F->pt_1934) || (G_NV((*(P121)rt_nil_check(F->pt_1934)).kind_) == ((rt_int)8LL)))) {
f_ctype_474(F->up, F->pt_1934, &F->ct_1935);
}
if ((F->ph_1936 == NULL)) {
(*F->t_579) = f_new_typ_454(F->up, G_NV((*(P121)rt_nil_check(F->pt_1934)).kind_));
} else {
(*F->t_579) = F->ph_1936;
}
as_R122(&(*(P121)rt_nil_check((*F->t_579))), (*(P121)rt_nil_check(F->pt_1934)));
(*(P121)rt_nil_check((*F->t_579))).name_ = F->name_578;
(*(P121)rt_nil_check((*F->t_579))).parent_ = F->pt_1934;
(*(P121)rt_nil_check((*F->t_579))).next_ = NULL;
if ((G_NV((*(P121)rt_nil_check((*F->t_579))).kind_) == ((rt_int)4LL))) {
f_derive_literals_519(F->up, (*F->t_579), G_NV((*(P173)rt_nil_check(F->d_577)).line_));
}
f_inherit_516(F->up, F->pt_1934, (*F->t_579), G_NV((*(P173)rt_nil_check(F->d_577)).line_));
ret_:

  return;
}

static void f_real_type_586(struct f_greenc_1fr *up_, P173 d_582, P139 name_583, P121 *t_584, P177 *c_585) {
  struct f_real_type_586fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_582 = d_582;
F->name_583 = name_583;
F->t_584 = t_584;
F->c_585 = c_585;
F->dt_1937 = NULL;
F->dv_1938 = NULL;
F->n_1939 = INT64_MIN;
F->ok_1940 = INT_MIN;
(*F->c_585) = f_new_cons_455(F->up);
if ((G_NV((*(P173)rt_nil_check(F->d_582)).flag_) == ((rt_int)1LL))) {
f_manifest_486(F->up, (*(P173)rt_nil_check(F->d_582)).a_, &F->n_1939, &F->ok_1940);
 (void)rt_range(F->ok_1940, 0, 1);
if ((!G_NV(F->ok_1940))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->d_582)).line_), rt_g_lit("the digits of a floating point type are static (RM79 3.5.5)", 59));
}
if (((G_NV(F->n_1939) < ((rt_int)1LL)) || (G_NV(F->n_1939) > ((rt_int)15LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->d_582)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("no predefined floating point type has ", 38), rt_g_s2g(rt_str_of_int(G_NV(F->n_1939)))), rt_g_lit(" digits", 7)));
}
f_fresh_typ_512(F->up, ((rt_int)3LL), F->name_583, &(*F->t_584));
(*(P121)rt_nil_check((*F->t_584))).ndigits_ = G_NV(F->n_1939);
if ((G_NV(F->n_1939) <= ((rt_int)6LL))) {
(*(P121)rt_nil_check((*F->t_584))).parent_ = F->up->ty_sfloat_168;
} else {
(*(P121)rt_nil_check((*F->t_584))).parent_ = F->up->ty_float_157;
}
} else {
if (((*(P173)rt_nil_check(F->d_582)).b_ == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->d_582)).line_), rt_g_lit("a fixed point type needs a range (RM79 3.5.5)", 45));
}
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->d_582)).a_, F->up->ty_float_157, &F->dt_1937, &F->dv_1938);
if ((G_NV((*(P121)rt_nil_check(F->dt_1937)).kind_) != ((rt_int)3LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->d_582)).line_), rt_g_lit("the delta of a fixed point type is a real number (RM79 3.5.5)", 61));
}
f_fresh_typ_512(F->up, ((rt_int)16LL), F->name_583, &(*F->t_584));
(*(P121)rt_nil_check((*F->t_584))).fdelta_ = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->dv_1938))), one_rt_gstr(41)));
(*(P121)rt_nil_check((*F->t_584))).fsmall_ = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_small(", 11), (*(P139)rt_nil_check(F->dv_1938))), one_rt_gstr(41)));
}
if (((*(P173)rt_nil_check(F->d_582)).b_ != NULL)) {
f_range_of_508(F->up, (*(P173)rt_nil_check(F->d_582)).b_, (*F->t_584), (*F->c_585));
}
if (((*(P121)rt_nil_check((*F->t_584))).parent_ != NULL)) {
f_inherit_516(F->up, (*(P121)rt_nil_check((*F->t_584))).parent_, (*F->t_584), G_NV((*(P173)rt_nil_check(F->d_582)).line_));
}
ret_:

  return;
}

static void f_finish_ptr_588(struct f_greenc_1fr *up_, P121 t_587) {
  struct f_finish_ptr_588fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_587 = t_587;
F->c_1941 = NULL;
if ((((*(P121)rt_nil_check(F->t_587)).target_ == NULL) && ((*(P121)rt_nil_check(F->t_587)).decl_ != NULL))) {
f_resolve_490(F->up, (*(P121)rt_nil_check(F->t_587)).decl_, &(*(P121)rt_nil_check(F->t_587)).target_, &F->c_1941);
if ((((*(P121)rt_nil_check(F->t_587)).target_ != NULL) && (G_NV((*(P121)rt_nil_check((*(P121)rt_nil_check(F->t_587)).target_)).kind_) == ((rt_int)8LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check((*(P121)rt_nil_check(F->t_587)).decl_)).line_), rt_g_lit("an access type cannot designate another access type (RM79 3.8)", 62));
}
}
ret_:

  return;
}

static void f_init_storage_592(struct f_greenc_1fr *up_, rt_gstr lval_589, P121 t_590, P177 c_591) {
  struct f_init_storage_592fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lval_589 = cp_rt_gstr(lval_589);
F->t_590 = t_590;
F->c_591 = c_591;
F->ec_1942 = NULL;
F->fc_1943 = NULL;
F->d_1944 = NULL;
F->ct_1945 = NULL;
F->i_1946 = NULL;
F->v_1947 = NULL;
F->x_1948 = NULL;
F->vt_1949 = NULL;
F->f_1950 = NULL;
if ((G_NV((*(P121)rt_nil_check(F->t_590)).kind_) == ((rt_int)8LL))) {
f_emit_248(F->up, cat_rt_gstr(F->lval_589, rt_g_lit(" = NULL;", 8)));
} else if ((f_is_numeric_436(F->up, F->t_590) || f_is_discrete_438(F->up, F->t_590))) {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_589, rt_g_lit(" = ", 3)), f_no_value_543(F->up, F->t_590)), one_rt_gstr(59)));
} else if ((G_NV((*(P121)rt_nil_check(F->t_590)).kind_) == ((rt_int)6LL))) {
if (((F->c_591 == NULL) || ((*(P177)rt_nil_check(F->c_591)).lo_ == NULL))) {
f_fail_242(F->up, ((rt_int)0LL), rt_g_lit("an array object needs an index constraint (RM79 3.6)", 52));
}
f_elem_ctype_546(F->up, (*(P121)rt_nil_check(F->t_590)).elem_, &F->ct_1945);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_589, rt_g_lit(".lo = ", 6)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_591)).lo_))), rt_g_lit("; ", 2)), F->lval_589), rt_g_lit(".hi = ", 6)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_591)).hi_))), one_rt_gstr(59)));
F->ec_1942 = (*(P121)rt_nil_check(F->t_590)).elemcons_;
if (((G_NV((*(P121)rt_nil_check(F->t_590)).dims_) > ((rt_int)1LL)) && f_bounded_457(F->up, (*(P177)rt_nil_check(F->c_591)).inner_))) {
F->ec_1942 = (*(P177)rt_nil_check(F->c_591)).inner_;
}
if (((G_NV((*(P121)rt_nil_check(F->t_590)).dims_) > ((rt_int)1LL)) && f_bounded_457(F->up, F->ec_1942))) {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_589, rt_g_lit(".lo2 = ", 7)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->ec_1942)).lo_))), rt_g_lit("; ", 2)), F->lval_589), rt_g_lit(".hi2 = ", 7)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->ec_1942)).hi_))), one_rt_gstr(59)));
} else {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_589, rt_g_lit(".lo2 = 1; ", 10)), F->lval_589), rt_g_lit(".hi2 = 1;", 9)));
}
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_589, rt_g_lit(".p = rt_alloc(sizeof(", 21)), (*(P139)rt_nil_check(F->ct_1945))), rt_g_lit(") * (size_t)G_CNT(", 18)), F->lval_589), rt_g_lit("));", 3)));
if ((f_is_numeric_436(F->up, (*(P121)rt_nil_check(F->t_590)).elem_) || f_is_discrete_438(F->up, (*(P121)rt_nil_check(F->t_590)).elem_))) {
f_new_name_224(F->up, rt_g_lit("i", 1), &F->i_1946);
if ((G_NV((*(P121)rt_nil_check((*(P121)rt_nil_check(F->t_590)).elem_)).kind_) == ((rt_int)11LL))) {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("memset(", 7), F->lval_589), rt_g_lit(".p, 0xFF, (size_t)G_CNT(", 24)), F->lval_589), rt_g_lit("));", 3)));
} else {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P139)rt_nil_check(F->i_1946))), rt_g_lit(" = 0; ", 6)), (*(P139)rt_nil_check(F->i_1946))), rt_g_lit(" < G_CNT(", 9)), F->lval_589), rt_g_lit("); ", 3)), (*(P139)rt_nil_check(F->i_1946))), rt_g_lit("++) ", 4)), F->lval_589), rt_g_lit(".p[", 3)), (*(P139)rt_nil_check(F->i_1946))), rt_g_lit("] = ", 4)), f_no_value_543(F->up, (*(P121)rt_nil_check(F->t_590)).elem_)), one_rt_gstr(59)));
}
} else if (((G_NV((*(P121)rt_nil_check((*(P121)rt_nil_check(F->t_590)).elem_)).kind_) == ((rt_int)6LL)) || (G_NV((*(P121)rt_nil_check((*(P121)rt_nil_check(F->t_590)).elem_)).kind_) == ((rt_int)7LL)))) {
f_new_name_224(F->up, rt_g_lit("i", 1), &F->i_1946);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P139)rt_nil_check(F->i_1946))), rt_g_lit(" = 0; ", 6)), (*(P139)rt_nil_check(F->i_1946))), rt_g_lit(" < G_CNT(", 9)), F->lval_589), rt_g_lit("); ", 3)), (*(P139)rt_nil_check(F->i_1946))), rt_g_lit("++) {", 5)));
f_init_storage_592(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_589, rt_g_lit(".p[", 3)), (*(P139)rt_nil_check(F->i_1946))), one_rt_gstr(93)), (*(P121)rt_nil_check(F->t_590)).elem_, F->ec_1942);
f_emit_248(F->up, rt_g_lit("}", 1));
}
} else if ((G_NV((*(P121)rt_nil_check(F->t_590)).kind_) == ((rt_int)7LL))) {
if ((F->c_591 != NULL)) {
F->d_1944 = (*(P177)rt_nil_check(F->c_591)).dv_;
while ((F->d_1944 != NULL)) {
F->f_1950 = (*(P121)rt_nil_check(F->t_590)).fields_;
while ((!eq_rt_gstr((*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_1950)).name_)), (*(P139)rt_nil_check((*(P1771)rt_nil_check(F->d_1944)).name_))))) {
F->f_1950 = (*(P1767)rt_nil_check(F->f_1950)).next_;
}
L_end_1952: ;
f_assign_code_600(F->up, cat_rt_gstr(cat_rt_gstr(F->lval_589, one_rt_gstr(46)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_1950)).name_)))), (*(P1767)rt_nil_check(F->f_1950)).t_, (*(P139)rt_nil_check((*(P1771)rt_nil_check(F->d_1944)).v_)), (*(P1767)rt_nil_check(F->f_1950)).c_, &F->x_1948);
f_emit_248(F->up, (*(P139)rt_nil_check(F->x_1948)));
F->d_1944 = (*(P1771)rt_nil_check(F->d_1944)).next_;
}
L_end_1951: ;
}
F->f_1950 = (*(P121)rt_nil_check(F->t_590)).fields_;
while ((F->f_1950 != NULL)) {
f_subst_cons_560(F->up, (*(P1767)rt_nil_check(F->f_1950)).c_, F->lval_589, &F->fc_1943);
if ((G_NV((*(P1767)rt_nil_check(F->f_1950)).dyn_) && (!f_discriminated_463(F->up, F->c_591)))) {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_589, one_rt_gstr(46)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_1950)).name_)))), rt_g_lit(".lo = 1; ", 9)), F->lval_589), one_rt_gstr(46)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_1950)).name_)))), rt_g_lit(".hi = 0; ", 9)), F->lval_589), one_rt_gstr(46)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_1950)).name_)))), rt_g_lit(".lo2 = ", 7)), F->lval_589), one_rt_gstr(46)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_1950)).name_)))), rt_g_lit(".hi2 = 1; ", 10)), F->lval_589), one_rt_gstr(46)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_1950)).name_)))), rt_g_lit(".p = NULL;", 10)));
} else if ((!G_NV((*(P1767)rt_nil_check(F->f_1950)).is_discr_))) {
f_init_storage_592(F->up, cat_rt_gstr(cat_rt_gstr(F->lval_589, one_rt_gstr(46)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_1950)).name_)))), (*(P1767)rt_nil_check(F->f_1950)).t_, F->fc_1943);
}
if (((*(P1767)rt_nil_check(F->f_1950)).dsym_ != NULL)) {
f_access_of_710(F->up, (*(P1767)rt_nil_check(F->f_1950)).dsym_, &F->v_1947);
f_assign_code_600(F->up, cat_rt_gstr(cat_rt_gstr(F->lval_589, one_rt_gstr(46)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_1950)).name_)))), (*(P1767)rt_nil_check(F->f_1950)).t_, (*(P139)rt_nil_check(F->v_1947)), F->fc_1943, &F->x_1948);
f_emit_248(F->up, (*(P139)rt_nil_check(F->x_1948)));
}
F->f_1950 = (*(P1767)rt_nil_check(F->f_1950)).next_;
}
L_end_1953: ;
}
ret_:

  return;
}

static int f_composite_594(struct f_greenc_1fr *up_, P121 t_593) {
  struct f_composite_594fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_593 = t_593;
F->result_ = ((G_NV((*(P121)rt_nil_check(F->t_593)).kind_) == ((rt_int)6LL)) || (G_NV((*(P121)rt_nil_check(F->t_593)).kind_) == ((rt_int)7LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_assign_code_600(struct f_greenc_1fr *up_, rt_gstr lval_595, P121 t_596, rt_gstr v_597, P177 c_598, P139 *r_599) {
  struct f_assign_code_600fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lval_595 = cp_rt_gstr(lval_595);
F->t_596 = t_596;
F->v_597 = cp_rt_gstr(v_597);
F->c_598 = c_598;
F->r_599 = r_599;
F->ct_1954 = NULL;
F->x_1955 = NULL;
F->d_1956 = NULL;
if (((G_NV((*(P121)rt_nil_check(F->t_596)).kind_) == ((rt_int)7LL)) && f_discriminated_463(F->up, F->c_598))) {
f_ctype_474(F->up, F->t_596, &F->ct_1954);
F->x_1955 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P139)rt_nil_check(F->ct_1954))), rt_g_lit(" dv_ = ", 7)), F->v_597), one_rt_gstr(59)));
F->d_1956 = (*(P177)rt_nil_check(F->c_598)).dv_;
while ((F->d_1956 != NULL)) {
F->x_1955 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->x_1955)), rt_g_lit(" if (dv_.", 9)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1771)rt_nil_check(F->d_1956)).name_)))), rt_g_lit(" != (", 5)), (*(P139)rt_nil_check((*(P1771)rt_nil_check(F->d_1956)).v_))), rt_g_lit(")) rt_raise(RT_X_TAG);", 22)));
F->d_1956 = (*(P1771)rt_nil_check(F->d_1956)).next_;
}
L_end_1957: ;
(*F->r_599) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->x_1955)), rt_g_lit(" as_", 4)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_596)).cname_))), rt_g_lit("(&", 2)), F->lval_595), rt_g_lit(", dv_); }", 9)));
} else if (f_composite_594(F->up, F->t_596)) {
f_ctype_474(F->up, F->t_596, &F->ct_1954);
(*F->r_599) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("as_", 3), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_596)).cname_))), rt_g_lit("(&", 2)), F->lval_595), rt_g_lit(", ", 2)), F->v_597), rt_g_lit(");", 2)));
} else if (((((G_NV((*(P121)rt_nil_check(F->t_596)).kind_) == ((rt_int)1LL)) || (G_NV((*(P121)rt_nil_check(F->t_596)).kind_) == ((rt_int)4LL))) || (G_NV((*(P121)rt_nil_check(F->t_596)).kind_) == ((rt_int)11LL))) && f_bounded_457(F->up, F->c_598))) {
(*F->r_599) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_595, rt_g_lit(" = rt_range(", 12)), F->v_597), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_598)).lo_))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_598)).hi_))), rt_g_lit(");", 2)));
} else if ((((G_NV((*(P121)rt_nil_check(F->t_596)).kind_) == ((rt_int)3LL)) || (G_NV((*(P121)rt_nil_check(F->t_596)).kind_) == ((rt_int)16LL))) && f_bounded_457(F->up, F->c_598))) {
(*F->r_599) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_595, rt_g_lit(" = rt_frange(", 13)), F->v_597), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_598)).lo_))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_598)).hi_))), rt_g_lit(");", 2)));
} else {
(*F->r_599) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_595, rt_g_lit(" = ", 3)), F->v_597), one_rt_gstr(59)));
}
ret_:

  return;
}

static void f_copy_code_604(struct f_greenc_1fr *up_, P121 t_601, rt_gstr v_602, P139 *r_603) {
  struct f_copy_code_604fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_601 = t_601;
F->v_602 = cp_rt_gstr(v_602);
F->r_603 = r_603;
F->ct_1958 = NULL;
if (f_composite_594(F->up, F->t_601)) {
f_ctype_474(F->up, F->t_601, &F->ct_1958);
(*F->r_603) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("cp_", 3), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_601)).cname_))), one_rt_gstr(40)), F->v_602), one_rt_gstr(41)));
} else {
(*F->r_603) = f_mk_221(F->up, F->v_602);
}
ret_:

  return;
}

static void f_eq_code_609(struct f_greenc_1fr *up_, P121 t_605, rt_gstr a_606, rt_gstr b_607, P139 *r_608) {
  struct f_eq_code_609fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_605 = t_605;
F->a_606 = cp_rt_gstr(a_606);
F->b_607 = cp_rt_gstr(b_607);
F->r_608 = r_608;
F->ct_1959 = NULL;
if (f_composite_594(F->up, F->t_605)) {
f_ctype_474(F->up, F->t_605, &F->ct_1959);
(*F->r_608) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("eq_", 3), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_605)).cname_))), one_rt_gstr(40)), F->a_606), rt_g_lit(", ", 2)), F->b_607), one_rt_gstr(41)));
} else {
(*F->r_608) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_606), rt_g_lit(" == ", 4)), F->b_607), one_rt_gstr(41)));
}
ret_:

  return;
}

static int f_seen_name_612(struct f_greenc_1fr *up_, P150 l_610, rt_gstr s_611) {
  struct f_seen_name_612fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_610 = l_610;
F->s_611 = cp_rt_gstr(s_611);
F->p_1960 = NULL;
F->p_1960 = F->l_610;
while ((F->p_1960 != NULL)) {
if (eq_rt_gstr((*(P139)rt_nil_check((*(P150)rt_nil_check(F->p_1960)).s_)), F->s_611)) {
F->result_ = 1;
goto ret_;
}
F->p_1960 = (*(P150)rt_nil_check(F->p_1960)).next_;
}
L_end_1961: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_emit_helpers_613(struct f_greenc_1fr *up_) {
  struct f_emit_helpers_613fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_1962 = NULL;
F->t_1962 = F->up->all_types_123;
F->et_1963 = NULL;
F->done_1964 = NULL;
F->l_1965 = NULL;
while ((F->t_1962 != NULL)) {
if ((f_composite_594(F->up, F->t_1962) && (!f_seen_name_612(F->up, F->done_1964, (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1962)).cname_)))))) {
F->l_1965 = ({ R151 *cell1967 = rt_alloc(sizeof(R151)); *cell1967 = cp_R151(({ R151 ag1968; ag1968.s_ = (*(P121)rt_nil_check(F->t_1962)).cname_; ag1968.next_ = F->done_1964; ag1968; })); (P150)cell1967; });
F->done_1964 = F->l_1965;
f_put_to_246(F->up, F->up->out_helpers_129, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void as_", 15), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1962)).cname_))), one_rt_gstr(40)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1962)).cname_))), rt_g_lit(" *d, ", 5)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1962)).cname_))), rt_g_lit(" s);", 4)));
f_put_to_246(F->up, F->up->out_helpers_129, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1962)).cname_))), rt_g_lit(" cp_", 4)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1962)).cname_))), one_rt_gstr(40)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1962)).cname_))), rt_g_lit(" s);", 4)));
f_put_to_246(F->up, F->up->out_helpers_129, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int eq_", 14), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1962)).cname_))), one_rt_gstr(40)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1962)).cname_))), rt_g_lit(" a, ", 4)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1962)).cname_))), rt_g_lit(" b);", 4)));
if (((G_NV((*(P121)rt_nil_check(F->t_1962)).kind_) == ((rt_int)6LL)) && (G_NV((*(P121)rt_nil_check(F->t_1962)).dims_) == ((rt_int)1LL)))) {
f_ctype_474(F->up, (*(P121)rt_nil_check(F->t_1962)).elem_, &F->et_1963);
f_put_to_246(F->up, F->up->out_helpers_129, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1962)).cname_))), rt_g_lit(" cat_", 5)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1962)).cname_))), one_rt_gstr(40)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1962)).cname_))), rt_g_lit(" a, ", 4)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1962)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_246(F->up, F->up->out_helpers_129, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1962)).cname_))), rt_g_lit(" one_", 5)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1962)).cname_))), one_rt_gstr(40)), (*(P139)rt_nil_check(F->et_1963))), rt_g_lit(" e);", 4)));
if ((G_NV((*(P121)rt_nil_check((*(P121)rt_nil_check(F->t_1962)).elem_)).kind_) == ((rt_int)2LL))) {
f_put_to_246(F->up, F->up->out_helpers_129, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1962)).cname_))), rt_g_lit(" and_", 5)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1962)).cname_))), one_rt_gstr(40)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1962)).cname_))), rt_g_lit(" a, ", 4)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1962)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_246(F->up, F->up->out_helpers_129, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1962)).cname_))), rt_g_lit(" or_", 4)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1962)).cname_))), one_rt_gstr(40)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1962)).cname_))), rt_g_lit(" a, ", 4)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1962)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_246(F->up, F->up->out_helpers_129, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1962)).cname_))), rt_g_lit(" xor_", 5)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1962)).cname_))), one_rt_gstr(40)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1962)).cname_))), rt_g_lit(" a, ", 4)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1962)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_246(F->up, F->up->out_helpers_129, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1962)).cname_))), rt_g_lit(" not_", 5)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1962)).cname_))), one_rt_gstr(40)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1962)).cname_))), rt_g_lit(" a);", 4)));
}
}
f_helper_bodies_615(F->up, F->t_1962);
}
F->t_1962 = (*(P121)rt_nil_check(F->t_1962)).next_;
}
L_end_1966: ;
ret_:

  return;
}

static void f_helper_bodies_615(struct f_greenc_1fr *up_, P121 t_614) {
  struct f_helper_bodies_615fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_614 = t_614;
F->c_1969 = NULL;
F->c_1969 = (*(P121)rt_nil_check(F->t_614)).cname_;
F->b_1970 = NULL;
F->b_1970 = F->up->out_funcs_132;
F->ct_1971 = NULL;
F->et_1972 = NULL;
F->x_1973 = NULL;
F->y_1974 = NULL;
F->conds_1975 = NULL;
F->f_1976 = NULL;
if ((G_NV((*(P121)rt_nil_check(F->t_614)).kind_) == ((rt_int)6LL))) {
f_elem_ctype_546(F->up, (*(P121)rt_nil_check(F->t_614)).elem_, &F->ct_1971);
f_assign_code_600(F->up, rt_g_lit("d->p[i]", 7), (*(P121)rt_nil_check(F->t_614)).elem_, rt_g_lit("s.p[i]", 6), NULL, &F->x_1973);
f_put_to_246(F->up, F->b_1970, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void as_", 15), (*(P139)rt_nil_check(F->c_1969))), one_rt_gstr(40)), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit(" *d, ", 5)), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit(" s) {", 5)));
f_put_to_246(F->up, F->b_1970, rt_g_lit("  rt_int n = G_CNT(s);", 22));
f_put_to_246(F->up, F->b_1970, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, ", 49), f_q_239(F->up)), rt_g_lit("array length", 12)), f_q_239(F->up)), rt_g_lit(");", 2)));
f_put_to_246(F->up, F->b_1970, rt_g_lit("  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();", 79));
f_put_to_246(F->up, F->b_1970, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < n; i++) { ", 35), (*(P139)rt_nil_check(F->x_1973))), rt_g_lit(" }", 2)));
f_put_to_246(F->up, F->b_1970, rt_g_lit("}", 1));
f_copy_code_604(F->up, (*(P121)rt_nil_check(F->t_614)).elem_, rt_g_lit("s.p[i]", 6), &F->x_1973);
f_put_to_246(F->up, F->b_1970, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit(" cp_", 4)), (*(P139)rt_nil_check(F->c_1969))), one_rt_gstr(40)), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit(" s) {", 5)));
f_put_to_246(F->up, F->b_1970, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit(" d = s; d.p = rt_alloc(sizeof(", 30)), (*(P139)rt_nil_check(F->ct_1971))), rt_g_lit(") * (size_t)G_CNT(s));", 22)));
f_put_to_246(F->up, F->b_1970, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = ", 49), (*(P139)rt_nil_check(F->x_1973))), one_rt_gstr(59)));
f_put_to_246(F->up, F->b_1970, rt_g_lit("  return d;", 11));
f_put_to_246(F->up, F->b_1970, rt_g_lit("}", 1));
f_eq_code_609(F->up, (*(P121)rt_nil_check(F->t_614)).elem_, rt_g_lit("a.p[i]", 6), rt_g_lit("b.p[i]", 6), &F->x_1973);
f_put_to_246(F->up, F->b_1970, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int eq_", 14), (*(P139)rt_nil_check(F->c_1969))), one_rt_gstr(40)), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit(" a, ", 4)), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit(" b) {", 5)));
f_put_to_246(F->up, F->b_1970, rt_g_lit("  if (G_CNT(a) != G_CNT(b)) return 0;", 37));
f_put_to_246(F->up, F->b_1970, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < G_CNT(a); i++) if (!(", 46), (*(P139)rt_nil_check(F->x_1973))), rt_g_lit(")) return 0;", 12)));
f_put_to_246(F->up, F->b_1970, rt_g_lit("  return 1;", 11));
f_put_to_246(F->up, F->b_1970, rt_g_lit("}", 1));
if (((G_NV((*(P121)rt_nil_check(F->t_614)).dims_) == ((rt_int)1LL)) && (G_NV((*(P121)rt_nil_check((*(P121)rt_nil_check(F->t_614)).elem_)).kind_) == ((rt_int)2LL)))) {
f_put_to_246(F->up, F->b_1970, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit(" and_", 5)), (*(P139)rt_nil_check(F->c_1969))), one_rt_gstr(40)), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit(" a, ", 4)), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit(" b) { ", 6)), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit(" r = cp_", 8)), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit("(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, ", 58)), f_q_239(F->up)), rt_g_lit("array length", 12)), f_q_239(F->up)), rt_g_lit("); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] && b.p[i]; return r; }", 79)));
f_put_to_246(F->up, F->b_1970, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit(" or_", 4)), (*(P139)rt_nil_check(F->c_1969))), one_rt_gstr(40)), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit(" a, ", 4)), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit(" b) { ", 6)), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit(" r = cp_", 8)), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit("(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, ", 58)), f_q_239(F->up)), rt_g_lit("array length", 12)), f_q_239(F->up)), rt_g_lit("); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] || b.p[i]; return r; }", 79)));
f_put_to_246(F->up, F->b_1970, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit(" xor_", 5)), (*(P139)rt_nil_check(F->c_1969))), one_rt_gstr(40)), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit(" a, ", 4)), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit(" b) { ", 6)), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit(" r = cp_", 8)), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit("(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, ", 58)), f_q_239(F->up)), rt_g_lit("array length", 12)), f_q_239(F->up)), rt_g_lit("); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] != b.p[i]; return r; }", 79)));
f_put_to_246(F->up, F->b_1970, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit(" not_", 5)), (*(P139)rt_nil_check(F->c_1969))), one_rt_gstr(40)), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit(" a) { ", 6)), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit(" r = cp_", 8)), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit("(a); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = !a.p[i]; return r; }", 72)));
}
if ((G_NV((*(P121)rt_nil_check(F->t_614)).dims_) == ((rt_int)1LL))) {
f_ctype_474(F->up, (*(P121)rt_nil_check(F->t_614)).elem_, &F->et_1972);
f_copy_code_604(F->up, (*(P121)rt_nil_check(F->t_614)).elem_, rt_g_lit("a.p[i]", 6), &F->x_1973);
f_copy_code_604(F->up, (*(P121)rt_nil_check(F->t_614)).elem_, rt_g_lit("b.p[i]", 6), &F->y_1974);
f_put_to_246(F->up, F->b_1970, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit(" cat_", 5)), (*(P139)rt_nil_check(F->c_1969))), one_rt_gstr(40)), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit(" a, ", 4)), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit(" b) {", 5)));
f_put_to_246(F->up, F->b_1970, rt_g_lit("  rt_int na = G_CNT(a), nb = G_CNT(b);", 38));
f_put_to_246(F->up, F->b_1970, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit(" r = na > 0 \? a : b;", 20)));
f_put_to_246(F->up, F->b_1970, rt_g_lit("  if (na == 0 && nb == 0) return a;", 35));
f_put_to_246(F->up, F->b_1970, rt_g_lit("  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;", 47));
f_put_to_246(F->up, F->b_1970, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  r.p = rt_alloc(sizeof(", 24), (*(P139)rt_nil_check(F->ct_1971))), rt_g_lit(") * (size_t)(na + nb));", 23)));
f_put_to_246(F->up, F->b_1970, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < na; i++) r.p[i] = ", 43), (*(P139)rt_nil_check(F->x_1973))), one_rt_gstr(59)));
f_put_to_246(F->up, F->b_1970, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < nb; i++) r.p[na + i] = ", 48), (*(P139)rt_nil_check(F->y_1974))), one_rt_gstr(59)));
f_put_to_246(F->up, F->b_1970, rt_g_lit("  return r;", 11));
f_put_to_246(F->up, F->b_1970, rt_g_lit("}", 1));
f_copy_code_604(F->up, (*(P121)rt_nil_check(F->t_614)).elem_, rt_g_lit("e", 1), &F->x_1973);
f_first_index_549(F->up, F->t_614, &F->y_1974);
f_put_to_246(F->up, F->b_1970, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit(" one_", 5)), (*(P139)rt_nil_check(F->c_1969))), one_rt_gstr(40)), (*(P139)rt_nil_check(F->et_1972))), rt_g_lit(" e) {", 5)));
f_put_to_246(F->up, F->b_1970, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit(" r; r.lo = r.hi = ", 18)), (*(P139)rt_nil_check(F->y_1974))), rt_g_lit("; r.lo2 = r.hi2 = 1;", 20)));
f_put_to_246(F->up, F->b_1970, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  r.p = rt_alloc(sizeof(", 24), (*(P139)rt_nil_check(F->ct_1971))), rt_g_lit(")); r.p[0] = ", 13)), (*(P139)rt_nil_check(F->x_1973))), one_rt_gstr(59)));
f_put_to_246(F->up, F->b_1970, rt_g_lit("  return r;", 11));
f_put_to_246(F->up, F->b_1970, rt_g_lit("}", 1));
}
} else {
f_put_to_246(F->up, F->b_1970, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void as_", 15), (*(P139)rt_nil_check(F->c_1969))), one_rt_gstr(40)), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit(" *d, ", 5)), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit(" s) {", 5)));
F->f_1976 = (*(P121)rt_nil_check(F->t_614)).fields_;
while ((F->f_1976 != NULL)) {
if ((G_NV((*(P1767)rt_nil_check(F->f_1976)).dyn_) || ((*(P1767)rt_nil_check(F->f_1976)).cond_ != NULL))) {
f_copy_code_604(F->up, (*(P1767)rt_nil_check(F->f_1976)).t_, cat_rt_gstr(rt_g_lit("s.", 2), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_1976)).name_)))), &F->x_1973);
F->x_1973 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("d->", 3), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_1976)).name_)))), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->x_1973))), one_rt_gstr(59)));
if (((*(P1767)rt_nil_check(F->f_1976)).cond_ != NULL)) {
F->x_1973 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), f_subst_554(F->up, (*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_1976)).cond_)), rt_g_lit("s", 1))), rt_g_lit(") ", 2)), (*(P139)rt_nil_check(F->x_1973))));
}
} else {
f_assign_code_600(F->up, cat_rt_gstr(rt_g_lit("d->", 3), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_1976)).name_)))), (*(P1767)rt_nil_check(F->f_1976)).t_, cat_rt_gstr(rt_g_lit("s.", 2), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_1976)).name_)))), NULL, &F->x_1973);
}
f_put_to_246(F->up, F->b_1970, cat_rt_gstr(rt_g_lit("  ", 2), (*(P139)rt_nil_check(F->x_1973))));
F->f_1976 = (*(P1767)rt_nil_check(F->f_1976)).next_;
}
L_end_1977: ;
f_put_to_246(F->up, F->b_1970, rt_g_lit("}", 1));
f_put_to_246(F->up, F->b_1970, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit(" cp_", 4)), (*(P139)rt_nil_check(F->c_1969))), one_rt_gstr(40)), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit(" s) {", 5)));
f_put_to_246(F->up, F->b_1970, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit(" d = s;", 7)));
F->conds_1975 = f_mk_221(F->up, rt_g_lit("1", 1));
F->f_1976 = (*(P121)rt_nil_check(F->t_614)).fields_;
while ((F->f_1976 != NULL)) {
f_copy_code_604(F->up, (*(P1767)rt_nil_check(F->f_1976)).t_, cat_rt_gstr(rt_g_lit("s.", 2), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_1976)).name_)))), &F->x_1973);
F->x_1973 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("d.", 2), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_1976)).name_)))), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->x_1973))), one_rt_gstr(59)));
f_eq_code_609(F->up, (*(P1767)rt_nil_check(F->f_1976)).t_, cat_rt_gstr(rt_g_lit("a.", 2), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_1976)).name_)))), cat_rt_gstr(rt_g_lit("b.", 2), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_1976)).name_)))), &F->y_1974);
if (((*(P1767)rt_nil_check(F->f_1976)).cond_ != NULL)) {
F->x_1973 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), f_subst_554(F->up, (*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_1976)).cond_)), rt_g_lit("s", 1))), rt_g_lit(") ", 2)), (*(P139)rt_nil_check(F->x_1973))));
F->y_1974 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!(", 3), f_subst_554(F->up, (*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_1976)).cond_)), rt_g_lit("a", 1))), rt_g_lit(") || ", 5)), (*(P139)rt_nil_check(F->y_1974))), one_rt_gstr(41)));
}
f_put_to_246(F->up, F->b_1970, cat_rt_gstr(rt_g_lit("  ", 2), (*(P139)rt_nil_check(F->x_1973))));
F->conds_1975 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->conds_1975)), rt_g_lit(" && ", 4)), (*(P139)rt_nil_check(F->y_1974))));
F->f_1976 = (*(P1767)rt_nil_check(F->f_1976)).next_;
}
L_end_1978: ;
f_put_to_246(F->up, F->b_1970, rt_g_lit("  return d;", 11));
f_put_to_246(F->up, F->b_1970, rt_g_lit("}", 1));
f_put_to_246(F->up, F->b_1970, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int eq_", 14), (*(P139)rt_nil_check(F->c_1969))), one_rt_gstr(40)), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit(" a, ", 4)), (*(P139)rt_nil_check(F->c_1969))), rt_g_lit(" b) {", 5)));
f_put_to_246(F->up, F->b_1970, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  return ", 9), (*(P139)rt_nil_check(F->conds_1975))), one_rt_gstr(59)));
f_put_to_246(F->up, F->b_1970, rt_g_lit("}", 1));
}
ret_:

  return;
}

static void f_storage_619(struct f_greenc_1fr *up_, rt_gstr name_616, P121 t_617, P139 *access_code_618) {
  struct f_storage_619fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_616 = cp_rt_gstr(name_616);
F->t_617 = t_617;
F->access_code_618 = access_code_618;
F->ct_1979 = NULL;
F->g_1980 = NULL;
f_ctype_474(F->up, F->t_617, &F->ct_1979);
if ((!G_NV(F->up->in_func_137))) {
f_new_name_224(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("g_", 2), f_lower_s_232(F->up, F->name_616)), one_rt_gstr(95)), &F->g_1980);
f_put_to_246(F->up, F->up->out_globals_131, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P139)rt_nil_check(F->ct_1979))), one_rt_gstr(32)), (*(P139)rt_nil_check(F->g_1980))), one_rt_gstr(59)));
F->up->st_field_140 = F->g_1980;
(*F->access_code_618) = F->g_1980;
} else {
f_new_name_224(F->up, cat_rt_gstr(f_lower_s_232(F->up, F->name_616), one_rt_gstr(95)), &F->g_1980);
f_put_to_246(F->up, F->up->fields_buf_136, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P139)rt_nil_check(F->ct_1979))), one_rt_gstr(32)), (*(P139)rt_nil_check(F->g_1980))), one_rt_gstr(59)));
F->up->st_field_140 = F->g_1980;
(*F->access_code_618) = f_mk_221(F->up, cat_rt_gstr(rt_g_lit("F->", 3), (*(P139)rt_nil_check(F->g_1980))));
}
ret_:

  return;
}

static void f_bind_622(struct f_greenc_1fr *up_, P116 y_620, P139 access_code_621) {
  struct f_bind_622fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_620 = y_620;
F->access_code_621 = access_code_621;
if (G_NV(F->up->in_func_137)) {
(*(P116)rt_nil_check(F->y_620)).level_ = G_NV(F->up->cur_level_138);
(*(P116)rt_nil_check(F->y_620)).access_path_ = F->up->st_field_140;
} else {
(*(P116)rt_nil_check(F->y_620)).level_ = ((rt_int)0LL);
(*(P116)rt_nil_check(F->y_620)).access_path_ = F->access_code_621;
}
ret_:

  return;
}

static void f_declare_subprograms_624(struct f_greenc_1fr *up_, P173 from_623) {
  struct f_declare_subprograms_624fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->from_623 = from_623;
F->e_1981 = NULL;
F->e_1981 = F->from_623;
while ((F->e_1981 != NULL)) {
if ((((G_NV((*(P173)rt_nil_check(F->e_1981)).kind_) == ((rt_int)44LL)) || (G_NV((*(P173)rt_nil_check(F->e_1981)).kind_) == ((rt_int)45LL))) && (G_NV((*(P173)rt_nil_check(F->e_1981)).ival_) == ((rt_int)0LL)))) {
f_declare_one_626(F->up, F->e_1981);
}
F->e_1981 = (*(P173)rt_nil_check(F->e_1981)).next_;
}
L_end_1982: ;
ret_:

  return;
}

static void f_declare_one_626(struct f_greenc_1fr *up_, P173 e_625) {
  struct f_declare_one_626fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_625 = e_625;
F->y_1983 = NULL;
F->z_1984 = NULL;
if (f_is_generic_name_1202(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_625)).name_)))) {
goto ret_;
}
f_build_subprogram_629(F->up, F->e_625, &F->y_1983);
F->z_1984 = ({ A115 ix1985 = F->up->table_118; ix1985.p[rt_index(f_hash_407(F->up, (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1983)).name_))), ix1985.lo, ix1985.hi) - ix1985.lo]; });
while ((F->z_1984 != NULL)) {
if (((((((eq_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->z_1984)).name_)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1983)).name_))) && ((G_NV((*(P116)rt_nil_check(F->z_1984)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->z_1984)).kind_) == ((rt_int)4LL)))) && ((*(P116)rt_nil_check(F->z_1984)).decl_ != NULL)) && (G_NV((*(P173)rt_nil_check((*(P116)rt_nil_check(F->z_1984)).decl_)).ival_) == ((rt_int)1LL))) && (G_NV((*(P116)rt_nil_check(F->z_1984)).depth_) == G_NV(F->up->depth_119))) && f_same_signature_441(F->up, (*(P116)rt_nil_check(F->z_1984)).params_, (*(P116)rt_nil_check(F->y_1983)).params_)) && f_same_429(F->up, (*(P116)rt_nil_check(F->z_1984)).result_, (*(P116)rt_nil_check(F->y_1983)).result_))) {
(*(P116)rt_nil_check(F->z_1984)).decl_ = F->e_625;
goto ret_;
}
F->z_1984 = (*(P116)rt_nil_check(F->z_1984)).chain_;
}
L_end_1986: ;
if ((F->up->cur_task_196 != NULL)) {
F->z_1984 = (*(P116)rt_nil_check(F->up->cur_task_196)).members_;
while ((F->z_1984 != NULL)) {
if ((((((eq_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->z_1984)).name_)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1983)).name_))) && ((G_NV((*(P116)rt_nil_check(F->z_1984)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->z_1984)).kind_) == ((rt_int)4LL)))) && ((*(P116)rt_nil_check(F->z_1984)).decl_ != NULL)) && (G_NV((*(P173)rt_nil_check((*(P116)rt_nil_check(F->z_1984)).decl_)).ival_) == ((rt_int)1LL))) && f_same_signature_441(F->up, (*(P116)rt_nil_check(F->z_1984)).params_, (*(P116)rt_nil_check(F->y_1983)).params_)) && f_same_429(F->up, (*(P116)rt_nil_check(F->z_1984)).result_, (*(P116)rt_nil_check(F->y_1983)).result_))) {
(*(P116)rt_nil_check(F->y_1983)).cname_ = (*(P116)rt_nil_check(F->z_1984)).cname_;
(*(P116)rt_nil_check(F->z_1984)).decl_ = F->e_625;
goto L_end_1987;
}
F->z_1984 = (*(P116)rt_nil_check(F->z_1984)).mnext_;
}
L_end_1987: ;
}
f_define_447(F->up, F->y_1983, G_NV((*(P173)rt_nil_check(F->e_625)).line_));
ret_:

  return;
}

static void f_build_subprogram_629(struct f_greenc_1fr *up_, P173 d_627, P116 *y_628) {
  struct f_build_subprogram_629fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_627 = d_627;
F->y_628 = y_628;
F->p_1988 = NULL;
F->p_1988 = (*(P173)rt_nil_check(F->d_627)).a_;
F->pm_1989 = NULL;
F->tail_1990 = NULL;
F->rc_1991 = NULL;
F->k_1992 = INT64_MIN;
F->k_1992 = ((rt_int)4LL);
if ((G_NV((*(P173)rt_nil_check(F->d_627)).kind_) == ((rt_int)45LL))) {
F->k_1992 = ((rt_int)3LL);
}
(*F->y_628) = f_new_sym_452(F->up, G_NV(F->k_1992), (*(P173)rt_nil_check(F->d_627)).name_);
while ((F->p_1988 != NULL)) {
F->pm_1989 = ({ R1753 *cell1994 = rt_alloc(sizeof(R1753)); *cell1994 = cp_R1753(({ R1753 ag1995; ag1995.name_ = (*(P173)rt_nil_check(F->p_1988)).name_; ag1995.mode_ = G_NV((*(P173)rt_nil_check(F->p_1988)).ival_); ag1995.t_ = NULL; ag1995.c_ = NULL; ag1995.cfield_ = NULL; ag1995.dflt_ = (*(P173)rt_nil_check(F->p_1988)).b_; ag1995.next_ = NULL; ag1995; })); (P1752)cell1994; });
f_resolve_490(F->up, (*(P173)rt_nil_check(F->p_1988)).a_, &(*(P1752)rt_nil_check(F->pm_1989)).t_, &(*(P1752)rt_nil_check(F->pm_1989)).c_);
f_new_name_224(F->up, cat_rt_gstr(f_lower_s_232(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->p_1988)).name_))), one_rt_gstr(95)), &(*(P1752)rt_nil_check(F->pm_1989)).cfield_);
if (((G_NV((*(P173)rt_nil_check(F->d_627)).kind_) == ((rt_int)45LL)) && (G_NV((*(P1752)rt_nil_check(F->pm_1989)).mode_) != ((rt_int)1LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->p_1988)).line_), rt_g_lit("a function can only have in parameters (RM79 6.5)", 49));
}
if (((G_NV((*(P173)rt_nil_check(F->d_627)).flag_) == ((rt_int)1LL)) && (G_NV((*(P1752)rt_nil_check(F->pm_1989)).mode_) != ((rt_int)1LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->p_1988)).line_), rt_g_lit("a value-returning procedure can only have in parameters (RM79 6.5)", 66));
}
if ((F->tail_1990 == NULL)) {
(*(P116)rt_nil_check((*F->y_628))).params_ = F->pm_1989;
} else {
(*(P1752)rt_nil_check(F->tail_1990)).next_ = F->pm_1989;
}
F->tail_1990 = F->pm_1989;
F->p_1988 = (*(P173)rt_nil_check(F->p_1988)).next_;
}
L_end_1993: ;
(*(P116)rt_nil_check((*F->y_628))).result_ = F->up->ty_void_160;
if (((*(P173)rt_nil_check(F->d_627)).b_ != NULL)) {
f_resolve_490(F->up, (*(P173)rt_nil_check(F->d_627)).b_, &(*(P116)rt_nil_check((*F->y_628))).result_, &F->rc_1991);
}
(*(P116)rt_nil_check((*F->y_628))).vrp_ = (G_NV((*(P173)rt_nil_check(F->d_627)).flag_) == ((rt_int)1LL));
f_new_name_224(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("f_", 2), f_c_ident_715(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->d_627)).name_)))), one_rt_gstr(95)), &(*(P116)rt_nil_check((*F->y_628))).cname_);
(*(P116)rt_nil_check((*F->y_628))).decl_ = F->d_627;
(*(P116)rt_nil_check((*F->y_628))).level_ = G_NV(F->up->cur_level_138);
ret_:

  return;
}

static void f_decl_elements_631(struct f_greenc_1fr *up_, P173 decls_630) {
  struct f_decl_elements_631fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_630 = decls_630;
F->e_1996 = NULL;
F->e_1996 = F->decls_630;
F->declared_1997 = INT_MIN;
F->declared_1997 = 0;
F->up->anon_node_175 = NULL;
while ((F->e_1996 != NULL)) {
if ((((G_NV((*(P173)rt_nil_check(F->e_1996)).kind_) != ((rt_int)40LL)) && (G_NV((*(P173)rt_nil_check(F->e_1996)).kind_) != ((rt_int)41LL))) || ((*(P173)rt_nil_check(F->e_1996)).a_ != F->up->anon_node_175))) {
F->up->anon_node_175 = NULL;
}
if (((((G_NV((*(P173)rt_nil_check(F->e_1996)).kind_) == ((rt_int)44LL)) || (G_NV((*(P173)rt_nil_check(F->e_1996)).kind_) == ((rt_int)45LL))) && (G_NV((*(P173)rt_nil_check(F->e_1996)).ival_) != ((rt_int)1LL))) && (!G_NV(F->declared_1997)))) {
f_declare_subprograms_624(F->up, F->e_1996);
F->declared_1997 = 1;
}
f_decl_element_633(F->up, F->e_1996);
F->e_1996 = (*(P173)rt_nil_check(F->e_1996)).next_;
}
L_end_1998: ;
ret_:

  return;
}

static void f_decl_element_633(struct f_greenc_1fr *up_, P173 e_632) {
  struct f_decl_element_633fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_632 = e_632;
F->pd_1999 = NULL;
F->y_2000 = NULL;
F->z_2001 = NULL;
F->t_2002 = NULL;
F->vt_2003 = NULL;
F->c_2004 = NULL;
F->acc_2005 = NULL;
F->v_2006 = NULL;
F->x_2007 = NULL;
F->ok_2008 = INT_MIN;
{ rt_int sel2009 = G_NV((*(P173)rt_nil_check(F->e_632)).kind_);
if (0 || sel2009 == ((rt_int)42LL)) {
F->y_2000 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_632)).name_)));
if ((((((((F->y_2000 != NULL) && (G_NV((*(P116)rt_nil_check(F->y_2000)).kind_) == ((rt_int)5LL))) && (G_NV((*(P116)rt_nil_check(F->y_2000)).depth_) == G_NV(F->up->depth_119))) && ((*(P116)rt_nil_check(F->y_2000)).t_ != NULL)) && G_NV((*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_2000)).t_)).priv_)) && (G_NV((*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_2000)).t_)).kind_) == ((rt_int)9LL))) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_632)).a_)).kind_) != ((rt_int)77LL)))) {
F->up->completing_172 = (*(P116)rt_nil_check(F->y_2000)).t_;
F->x_2007 = (*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_2000)).t_)).name_;
F->pd_1999 = (*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_2000)).t_)).decl_;
f_type_definition_524(F->up, (*(P173)rt_nil_check(F->e_632)).a_, (*(P173)rt_nil_check(F->e_632)).name_, &F->t_2002, &F->c_2004);
F->up->completing_172 = NULL;
if ((F->t_2002 != (*(P116)rt_nil_check(F->y_2000)).t_)) {
as_R122(&(*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_2000)).t_)), (*(P121)rt_nil_check(F->t_2002)));
}
(*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_2000)).t_)).name_ = F->x_2007;
(*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_2000)).t_)).priv_ = 1;
(*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_2000)).t_)).decl_ = F->pd_1999;
(*(P116)rt_nil_check(F->y_2000)).c_ = F->c_2004;
} else {
F->y_2000 = f_new_sym_452(F->up, ((rt_int)5LL), (*(P173)rt_nil_check(F->e_632)).name_);
(*(P116)rt_nil_check(F->y_2000)).decl_ = F->e_632;
f_define_447(F->up, F->y_2000, G_NV((*(P173)rt_nil_check(F->e_632)).line_));
if ((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_632)).a_)).kind_) == ((rt_int)77LL))) {
(*(P116)rt_nil_check(F->y_2000)).t_ = f_new_typ_454(F->up, ((rt_int)9LL));
(*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_2000)).t_)).name_ = (*(P173)rt_nil_check(F->e_632)).name_;
(*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_2000)).t_)).priv_ = 1;
(*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_2000)).t_)).decl_ = F->up->cur_pkg_207;
} else {
f_type_definition_524(F->up, (*(P173)rt_nil_check(F->e_632)).a_, (*(P173)rt_nil_check(F->e_632)).name_, &(*(P116)rt_nil_check(F->y_2000)).t_, &(*(P116)rt_nil_check(F->y_2000)).c_);
}
}
} else if (0 || sel2009 == ((rt_int)43LL)) {
F->y_2000 = f_new_sym_452(F->up, ((rt_int)5LL), (*(P173)rt_nil_check(F->e_632)).name_);
f_resolve_490(F->up, (*(P173)rt_nil_check(F->e_632)).a_, &(*(P116)rt_nil_check(F->y_2000)).t_, &(*(P116)rt_nil_check(F->y_2000)).c_);
f_define_447(F->up, F->y_2000, G_NV((*(P173)rt_nil_check(F->e_632)).line_));
} else if (0 || sel2009 == ((rt_int)40LL)) {
f_resolve_object_type_639(F->up, (*(P173)rt_nil_check(F->e_632)).a_, &F->t_2002, &F->c_2004);
F->y_2000 = f_new_sym_452(F->up, ((rt_int)1LL), (*(P173)rt_nil_check(F->e_632)).name_);
if ((G_NV((*(P173)rt_nil_check(F->e_632)).flag_) == ((rt_int)2LL))) {
f_lvalue_729(F->up, (*(P173)rt_nil_check(F->e_632)).b_, &F->v_2006, &F->vt_2003, &F->c_2004, &(*(P116)rt_nil_check(F->y_2000)).ro_);
 (void)rt_range((*(P116)rt_nil_check(F->y_2000)).ro_, 0, 1);
f_check_type_469(F->up, F->vt_2003, F->t_2002, G_NV((*(P173)rt_nil_check(F->e_632)).line_));
f_ctype_474(F->up, F->t_2002, &F->acc_2005);
f_new_name_224(F->up, cat_rt_gstr(f_lower_s_232(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_632)).name_))), one_rt_gstr(95)), &F->x_2007);
if (G_NV(F->up->in_func_137)) {
f_put_to_246(F->up, F->up->fields_buf_136, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P139)rt_nil_check(F->acc_2005))), rt_g_lit(" *", 2)), (*(P139)rt_nil_check(F->x_2007))), one_rt_gstr(59)));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->", 3), (*(P139)rt_nil_check(F->x_2007))), rt_g_lit(" = &(", 5)), (*(P139)rt_nil_check(F->v_2006))), rt_g_lit(");", 2)));
(*(P116)rt_nil_check(F->y_2000)).byref_ = 1;
(*(P116)rt_nil_check(F->y_2000)).level_ = G_NV(F->up->cur_level_138);
(*(P116)rt_nil_check(F->y_2000)).access_path_ = F->x_2007;
} else {
f_put_to_246(F->up, F->up->out_globals_131, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P139)rt_nil_check(F->acc_2005))), rt_g_lit(" *g_", 4)), (*(P139)rt_nil_check(F->x_2007))), one_rt_gstr(59)));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("g_", 2), (*(P139)rt_nil_check(F->x_2007))), rt_g_lit(" = &(", 5)), (*(P139)rt_nil_check(F->v_2006))), rt_g_lit(");", 2)));
(*(P116)rt_nil_check(F->y_2000)).level_ = ((rt_int)0LL);
(*(P116)rt_nil_check(F->y_2000)).access_path_ = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*g_", 4), (*(P139)rt_nil_check(F->x_2007))), one_rt_gstr(41)));
}
(*(P116)rt_nil_check(F->y_2000)).t_ = F->vt_2003;
(*(P116)rt_nil_check(F->y_2000)).c_ = F->c_2004;
f_define_447(F->up, F->y_2000, G_NV((*(P173)rt_nil_check(F->e_632)).line_));
goto ret_;
}
if ((((G_NV((*(P121)rt_nil_check(F->t_2002)).kind_) == ((rt_int)6LL)) && (!f_bounded_457(F->up, F->c_2004))) && ((*(P173)rt_nil_check(F->e_632)).b_ != NULL))) {
F->up->vrp_ok_212 = 1;
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->e_632)).b_, F->t_2002, &F->vt_2003, &F->v_2006);
F->up->vrp_ok_212 = 0;
f_check_type_469(F->up, F->vt_2003, F->t_2002, G_NV((*(P173)rt_nil_check(F->e_632)).line_));
f_storage_619(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_632)).name_)), F->t_2002, &F->acc_2005);
f_copy_code_604(F->up, F->t_2002, (*(P139)rt_nil_check(F->v_2006)), &F->x_2007);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->acc_2005)), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->x_2007))), one_rt_gstr(59)));
} else {
f_storage_619(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_632)).name_)), F->t_2002, &F->acc_2005);
f_init_storage_592(F->up, (*(P139)rt_nil_check(F->acc_2005)), F->t_2002, F->c_2004);
if (((*(P173)rt_nil_check(F->e_632)).b_ != NULL)) {
if (f_is_const_access_723(F->up, (*(P173)rt_nil_check(F->e_632)).b_)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_632)).line_), rt_g_lit("a constant of an access type cannot be assigned to a variable (RM79 3.8)", 72));
}
F->up->vrp_ok_212 = 1;
if (((G_NV((*(P121)rt_nil_check(F->t_2002)).kind_) == ((rt_int)6LL)) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_632)).b_)).kind_) == ((rt_int)12LL)))) {
F->up->agg_bounds_180 = F->acc_2005;
}
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->e_632)).b_, F->t_2002, &F->vt_2003, &F->v_2006);
F->up->agg_bounds_180 = NULL;
F->up->vrp_ok_212 = 0;
f_check_type_469(F->up, F->vt_2003, F->t_2002, G_NV((*(P173)rt_nil_check(F->e_632)).line_));
f_assign_code_600(F->up, (*(P139)rt_nil_check(F->acc_2005)), F->t_2002, (*(P139)rt_nil_check(F->v_2006)), F->c_2004, &F->x_2007);
f_emit_248(F->up, (*(P139)rt_nil_check(F->x_2007)));
}
}
(*(P116)rt_nil_check(F->y_2000)).t_ = F->t_2002;
(*(P116)rt_nil_check(F->y_2000)).c_ = F->c_2004;
f_bind_622(F->up, F->y_2000, F->acc_2005);
f_define_447(F->up, F->y_2000, G_NV((*(P173)rt_nil_check(F->e_632)).line_));
} else if (0 || sel2009 == ((rt_int)41LL)) {
f_resolve_object_type_639(F->up, (*(P173)rt_nil_check(F->e_632)).a_, &F->t_2002, &F->c_2004);
F->z_2001 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_632)).name_)));
if (((*(P173)rt_nil_check(F->e_632)).b_ == NULL)) {
if (((F->up->cur_pkg_207 == NULL) || (!(G_NV((*(P121)rt_nil_check(F->t_2002)).priv_) && (G_NV((*(P121)rt_nil_check(F->t_2002)).kind_) == ((rt_int)9LL)))))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_632)).line_), rt_g_lit("a constant needs a value; only a constant of a private type is deferred (RM79 7.4)", 82));
}
F->y_2000 = f_new_sym_452(F->up, ((rt_int)2LL), (*(P173)rt_nil_check(F->e_632)).name_);
(*(P116)rt_nil_check(F->y_2000)).t_ = F->t_2002;
(*(P116)rt_nil_check(F->y_2000)).c_ = F->c_2004;
(*(P116)rt_nil_check(F->y_2000)).ro_ = 1;
(*(P116)rt_nil_check(F->y_2000)).flags_ = rt_add(((rt_int)1LL), ((rt_int)2LL));
f_define_447(F->up, F->y_2000, G_NV((*(P173)rt_nil_check(F->e_632)).line_));
goto ret_;
}
if (((((F->z_2001 != NULL) && (G_NV((*(P116)rt_nil_check(F->z_2001)).depth_) == G_NV(F->up->depth_119))) && (G_NV((*(P116)rt_nil_check(F->z_2001)).kind_) == ((rt_int)2LL))) && (G_NV((*(P116)rt_nil_check(F->z_2001)).flags_) == rt_add(((rt_int)1LL), ((rt_int)2LL))))) {
f_check_type_469(F->up, F->t_2002, (*(P116)rt_nil_check(F->z_2001)).t_, G_NV((*(P173)rt_nil_check(F->e_632)).line_));
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->e_632)).b_, F->t_2002, &F->vt_2003, &F->v_2006);
f_check_type_469(F->up, F->vt_2003, F->t_2002, G_NV((*(P173)rt_nil_check(F->e_632)).line_));
f_storage_619(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_632)).name_)), F->t_2002, &F->acc_2005);
f_bind_622(F->up, F->z_2001, F->acc_2005);
f_copy_code_604(F->up, F->t_2002, (*(P139)rt_nil_check(F->v_2006)), &F->x_2007);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->acc_2005)), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->x_2007))), one_rt_gstr(59)));
(*(P116)rt_nil_check(F->z_2001)).flags_ = ((rt_int)1LL);
goto ret_;
}
F->y_2000 = f_new_sym_452(F->up, ((rt_int)2LL), (*(P173)rt_nil_check(F->e_632)).name_);
(*(P116)rt_nil_check(F->y_2000)).flags_ = ((rt_int)1LL);
F->up->vrp_ok_212 = 1;
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->e_632)).b_, F->t_2002, &F->vt_2003, &F->v_2006);
F->up->vrp_ok_212 = 0;
f_check_type_469(F->up, F->vt_2003, F->t_2002, G_NV((*(P173)rt_nil_check(F->e_632)).line_));
if ((G_NV((*(P121)rt_nil_check(F->t_2002)).kind_) == ((rt_int)1LL))) {
f_manifest_486(F->up, (*(P173)rt_nil_check(F->e_632)).b_, &(*(P116)rt_nil_check(F->y_2000)).mvalue_, &F->ok_2008);
 (void)rt_range(F->ok_2008, 0, 1);
(*(P116)rt_nil_check(F->y_2000)).hasmv_ = G_NV(F->ok_2008);
}
f_storage_619(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_632)).name_)), F->t_2002, &F->acc_2005);
f_copy_code_604(F->up, F->t_2002, (*(P139)rt_nil_check(F->v_2006)), &F->x_2007);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->acc_2005)), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->x_2007))), one_rt_gstr(59)));
(*(P116)rt_nil_check(F->y_2000)).t_ = F->t_2002;
(*(P116)rt_nil_check(F->y_2000)).c_ = F->c_2004;
(*(P116)rt_nil_check(F->y_2000)).ro_ = 1;
f_bind_622(F->up, F->y_2000, F->acc_2005);
f_define_447(F->up, F->y_2000, G_NV((*(P173)rt_nil_check(F->e_632)).line_));
} else if (0 || sel2009 == ((rt_int)46LL)) {
if (((*(P173)rt_nil_check(F->e_632)).a_ != NULL)) {
if (((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_632)).a_)).kind_) == ((rt_int)9LL)) && f_is_package_1012(F->up, (*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_632)).a_)).a_))) {
F->y_2000 = f_member_of_1016(F->up, f_path_of_338(F->up, (*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_632)).a_)).a_), (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_632)).a_)).name_)), G_NV((*(P173)rt_nil_check(F->e_632)).line_));
} else if ((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_632)).a_)).kind_) == ((rt_int)5LL))) {
F->y_2000 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_632)).a_)).name_)));
} else {
F->y_2000 = NULL;
}
if (((F->y_2000 == NULL) || (G_NV((*(P116)rt_nil_check(F->y_2000)).kind_) != ((rt_int)6LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_632)).line_), rt_g_lit("an exception is renamed only as an exception", 44));
}
f_copy_sym_1021(F->up, F->y_2000, &F->z_2001);
(*(P116)rt_nil_check(F->z_2001)).name_ = (*(P173)rt_nil_check(F->e_632)).name_;
f_define_447(F->up, F->z_2001, G_NV((*(P173)rt_nil_check(F->e_632)).line_));
goto ret_;
}
F->y_2000 = f_new_sym_452(F->up, ((rt_int)6LL), (*(P173)rt_nil_check(F->e_632)).name_);
f_new_name_224(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("ex_", 3), f_lower_s_232(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_632)).name_)))), one_rt_gstr(95)), &(*(P116)rt_nil_check(F->y_2000)).cname_);
f_put_to_246(F->up, F->up->out_globals_131, cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int ", 11), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2000)).cname_))), one_rt_gstr(59)));
f_put_to_246(F->up, F->up->out_excs_134, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2000)).cname_))), rt_g_lit(" = rt_exc(", 10)), f_q_239(F->up)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_632)).name_))), f_q_239(F->up)), rt_g_lit(");", 2)));
f_define_447(F->up, F->y_2000, G_NV((*(P173)rt_nil_check(F->e_632)).line_));
} else if (0 || sel2009 == ((rt_int)44LL) || sel2009 == ((rt_int)45LL)) {
if (f_is_generic_name_1202(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_632)).name_)))) {
f_attach_generic_body_1204(F->up, F->e_632);
} else if ((G_NV((*(P173)rt_nil_check(F->e_632)).ival_) == ((rt_int)1LL))) {
f_build_subprogram_629(F->up, F->e_632, &F->y_2000);
f_define_447(F->up, F->y_2000, G_NV((*(P173)rt_nil_check(F->e_632)).line_));
} else {
f_subprogram_body_661(F->up, F->e_632, f_lookup_decl_424(F->up, F->e_632));
}
} else if (0 || sel2009 == ((rt_int)55LL)) {
f_use_clause_1035(F->up, F->e_632);
} else if (0 || sel2009 == ((rt_int)56LL)) {
f_pragma_decl_635(F->up, F->e_632);
} else {
f_other_decl_641(F->up, F->e_632);
}
}
ret_:

  return;
}

static void f_pragma_decl_635(struct f_greenc_1fr *up_, P173 e_634) {
  struct f_pragma_decl_635fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_634 = e_634;
ret_:

  return;
}

static void f_resolve_object_type_639(struct f_greenc_1fr *up_, P173 st_636, P121 *t_637, P177 *c_638) {
  struct f_resolve_object_type_639fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_636 = st_636;
F->t_637 = t_637;
F->c_638 = c_638;
if (((G_NV((*(P173)rt_nil_check(F->st_636)).kind_) != ((rt_int)80LL)) && (F->st_636 == F->up->anon_node_175))) {
(*F->t_637) = F->up->anon_typ_176;
(*F->c_638) = F->up->anon_cons_179;
goto ret_;
}
f_resolve_490(F->up, F->st_636, &(*F->t_637), &(*F->c_638));
if ((G_NV((*(P173)rt_nil_check(F->st_636)).kind_) != ((rt_int)80LL))) {
F->up->anon_node_175 = F->st_636;
F->up->anon_typ_176 = (*F->t_637);
F->up->anon_cons_179 = (*F->c_638);
}
ret_:

  return;
}

static void f_other_decl_641(struct f_greenc_1fr *up_, P173 e_640) {
  struct f_other_decl_641fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_640 = e_640;
if ((G_NV((*(P173)rt_nil_check(F->e_640)).kind_) == ((rt_int)48LL))) {
f_package_spec_1026(F->up, F->e_640);
} else if ((G_NV((*(P173)rt_nil_check(F->e_640)).kind_) == ((rt_int)49LL))) {
f_package_body_1031(F->up, F->e_640);
} else {
f_task_decl_1108(F->up, F->e_640);
}
ret_:

  return;
}

static void f_scan_labels_644(struct f_greenc_1fr *up_, P173 stmts_642, rt_gstr path_643) {
  struct f_scan_labels_644fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_642 = stmts_642;
F->path_643 = cp_rt_gstr(path_643);
F->s_2010 = NULL;
F->s_2010 = F->stmts_642;
F->a_2011 = NULL;
F->l_2012 = NULL;
F->c_2013 = NULL;
while ((F->s_2010 != NULL)) {
if ((G_NV((*(P173)rt_nil_check(F->s_2010)).kind_) == ((rt_int)57LL))) {
F->l_2012 = F->up->body_labels_190;
while ((F->l_2012 != NULL)) {
if (eq_rt_gstr((*(P139)rt_nil_check((*(P188)rt_nil_check(F->l_2012)).name_)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->s_2010)).name_)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_2010)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("label ", 6), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->s_2010)).name_))), rt_g_lit(" is already used in this body (RM79 5)", 38)));
}
F->l_2012 = (*(P188)rt_nil_check(F->l_2012)).next_;
}
L_end_2015: ;
f_new_name_224(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("lbl_", 4), f_lower_s_232(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->s_2010)).name_)))), one_rt_gstr(95)), &F->c_2013);
F->up->body_labels_190 = ({ R189 *cell2016 = rt_alloc(sizeof(R189)); *cell2016 = cp_R189(({ R189 ag2017; ag2017.name_ = (*(P173)rt_nil_check(F->s_2010)).name_; ag2017.cname_ = F->c_2013; ag2017.path_ = f_mk_221(F->up, F->path_643); ag2017.frames_ = ((rt_int)0LL); ag2017.line_ = G_NV((*(P173)rt_nil_check(F->s_2010)).line_); ag2017.next_ = F->up->body_labels_190; ag2017; })); (P188)cell2016; });
} else if ((G_NV((*(P173)rt_nil_check(F->s_2010)).kind_) == ((rt_int)58LL))) {
F->up->body_gotos_191 = ({ R189 *cell2018 = rt_alloc(sizeof(R189)); *cell2018 = cp_R189(({ R189 ag2019; ag2019.name_ = (*(P173)rt_nil_check(F->s_2010)).name_; ag2019.cname_ = NULL; ag2019.path_ = f_mk_221(F->up, F->path_643); ag2019.frames_ = ((rt_int)0LL); ag2019.line_ = G_NV((*(P173)rt_nil_check(F->s_2010)).line_); ag2019.next_ = F->up->body_gotos_191; ag2019; })); (P188)cell2018; });
} else if ((G_NV((*(P173)rt_nil_check(F->s_2010)).kind_) == ((rt_int)22LL))) {
F->a_2011 = (*(P173)rt_nil_check(F->s_2010)).a_;
while ((F->a_2011 != NULL)) {
F->up->segments_192 = rt_add(G_NV(F->up->segments_192), ((rt_int)1LL));
f_scan_labels_644(F->up, (*(P173)rt_nil_check(F->a_2011)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_643, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_192)))), one_rt_gstr(47)));
F->a_2011 = (*(P173)rt_nil_check(F->a_2011)).next_;
}
L_end_2020: ;
F->up->segments_192 = rt_add(G_NV(F->up->segments_192), ((rt_int)1LL));
f_scan_labels_644(F->up, (*(P173)rt_nil_check(F->s_2010)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_643, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_192)))), one_rt_gstr(47)));
} else if ((G_NV((*(P173)rt_nil_check(F->s_2010)).kind_) == ((rt_int)23LL))) {
F->a_2011 = (*(P173)rt_nil_check(F->s_2010)).b_;
while ((F->a_2011 != NULL)) {
F->up->segments_192 = rt_add(G_NV(F->up->segments_192), ((rt_int)1LL));
f_scan_labels_644(F->up, (*(P173)rt_nil_check(F->a_2011)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_643, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_192)))), one_rt_gstr(47)));
F->a_2011 = (*(P173)rt_nil_check(F->a_2011)).next_;
}
L_end_2021: ;
F->up->segments_192 = rt_add(G_NV(F->up->segments_192), ((rt_int)1LL));
f_scan_labels_644(F->up, (*(P173)rt_nil_check(F->s_2010)).c_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_643, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_192)))), one_rt_gstr(47)));
} else if ((G_NV((*(P173)rt_nil_check(F->s_2010)).kind_) == ((rt_int)24LL))) {
F->up->segments_192 = rt_add(G_NV(F->up->segments_192), ((rt_int)1LL));
f_scan_labels_644(F->up, (*(P173)rt_nil_check(F->s_2010)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_643, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_192)))), one_rt_gstr(47)));
} else if ((G_NV((*(P173)rt_nil_check(F->s_2010)).kind_) == ((rt_int)25LL))) {
f_scan_guarded_648(F->up, (*(P173)rt_nil_check(F->s_2010)).b_, (*(P173)rt_nil_check(F->s_2010)).c_, F->path_643);
} else if ((G_NV((*(P173)rt_nil_check(F->s_2010)).kind_) == ((rt_int)34LL))) {
F->up->segments_192 = rt_add(G_NV(F->up->segments_192), ((rt_int)1LL));
f_scan_labels_644(F->up, (*(P173)rt_nil_check(F->s_2010)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_643, one_rt_gstr(97)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_192)))), one_rt_gstr(47)));
} else if ((G_NV((*(P173)rt_nil_check(F->s_2010)).kind_) == ((rt_int)35LL))) {
F->a_2011 = (*(P173)rt_nil_check(F->s_2010)).a_;
while ((F->a_2011 != NULL)) {
F->up->segments_192 = rt_add(G_NV(F->up->segments_192), ((rt_int)1LL));
if ((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->a_2011)).b_)).kind_) == ((rt_int)34LL))) {
f_scan_labels_644(F->up, (*(P173)rt_nil_check((*(P173)rt_nil_check(F->a_2011)).b_)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_643, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_192)))), rt_g_lit("/a", 2)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_192)))), one_rt_gstr(47)));
}
f_scan_labels_644(F->up, (*(P173)rt_nil_check(F->a_2011)).c_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_643, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_192)))), one_rt_gstr(47)));
F->a_2011 = (*(P173)rt_nil_check(F->a_2011)).next_;
}
L_end_2022: ;
F->up->segments_192 = rt_add(G_NV(F->up->segments_192), ((rt_int)1LL));
f_scan_labels_644(F->up, (*(P173)rt_nil_check(F->s_2010)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_643, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_192)))), one_rt_gstr(47)));
}
F->s_2010 = (*(P173)rt_nil_check(F->s_2010)).next_;
}
L_end_2014: ;
ret_:

  return;
}

static void f_scan_guarded_648(struct f_greenc_1fr *up_, P173 stmts_645, P173 hs_646, rt_gstr path_647) {
  struct f_scan_guarded_648fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_645 = stmts_645;
F->hs_646 = hs_646;
F->path_647 = cp_rt_gstr(path_647);
F->h_2023 = NULL;
F->h_2023 = F->hs_646;
F->up->segments_192 = rt_add(G_NV(F->up->segments_192), ((rt_int)1LL));
if ((F->hs_646 == NULL)) {
f_scan_labels_644(F->up, F->stmts_645, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_647, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_192)))), one_rt_gstr(47)));
} else {
f_scan_labels_644(F->up, F->stmts_645, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_647, one_rt_gstr(103)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_192)))), one_rt_gstr(47)));
}
while ((F->h_2023 != NULL)) {
F->up->segments_192 = rt_add(G_NV(F->up->segments_192), ((rt_int)1LL));
f_scan_labels_644(F->up, (*(P173)rt_nil_check(F->h_2023)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_647, one_rt_gstr(104)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_192)))), one_rt_gstr(47)));
F->h_2023 = (*(P173)rt_nil_check(F->h_2023)).next_;
}
L_end_2024: ;
ret_:

  return;
}

static rt_int f_count_g_650(struct f_greenc_1fr *up_, rt_gstr p_649) {
  struct f_count_g_650fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_649 = cp_rt_gstr(p_649);
F->n_2025 = INT64_MIN;
F->n_2025 = ((rt_int)0LL);
{ rt_int lo2030 = ({ rt_gstr at2027 = F->p_649; at2027.lo; }), hi2031 = ({ rt_gstr at2028 = F->p_649; at2028.hi; });
for (rt_int it2032 = lo2030; it2032 <= hi2031; it2032++) {
F->i_2029 = it2032;
if ((G_NV(({ rt_gstr ix2033 = F->p_649; ix2033.p[rt_index(F->i_2029, ix2033.lo, ix2033.hi) - ix2033.lo]; })) == 103)) {
F->n_2025 = rt_add(G_NV(F->n_2025), ((rt_int)1LL));
}
}
}
L_end_2026: ;
F->result_ = G_NV(F->n_2025);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_label_body_653(struct f_greenc_1fr *up_, P173 stmts_651, P173 hs_652) {
  struct f_label_body_653fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_651 = stmts_651;
F->hs_652 = hs_652;
F->l_2034 = NULL;
F->g_2035 = NULL;
F->gp_2036 = NULL;
F->lp_2037 = NULL;
F->up->body_labels_190 = NULL;
F->up->body_gotos_191 = NULL;
F->up->segments_192 = ((rt_int)0LL);
f_scan_guarded_648(F->up, F->stmts_651, F->hs_652, rt_g_lit("/", 1));
F->l_2034 = F->up->body_labels_190;
while ((F->l_2034 != NULL)) {
(*(P188)rt_nil_check(F->l_2034)).frames_ = rt_add(G_NV(F->up->frames_149), f_count_g_650(F->up, (*(P139)rt_nil_check((*(P188)rt_nil_check(F->l_2034)).path_))));
F->l_2034 = (*(P188)rt_nil_check(F->l_2034)).next_;
}
L_end_2038: ;
F->g_2035 = F->up->body_gotos_191;
while ((F->g_2035 != NULL)) {
F->l_2034 = F->up->body_labels_190;
while (((F->l_2034 != NULL) && (!eq_rt_gstr((*(P139)rt_nil_check((*(P188)rt_nil_check(F->l_2034)).name_)), (*(P139)rt_nil_check((*(P188)rt_nil_check(F->g_2035)).name_)))))) {
F->l_2034 = (*(P188)rt_nil_check(F->l_2034)).next_;
}
L_end_2040: ;
if ((F->l_2034 == NULL)) {
f_fail_242(F->up, G_NV((*(P188)rt_nil_check(F->g_2035)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("goto ", 5), (*(P139)rt_nil_check((*(P188)rt_nil_check(F->g_2035)).name_))), rt_g_lit(": no such label in this body (RM79 5.8)", 39)));
}
F->gp_2036 = (*(P188)rt_nil_check(F->g_2035)).path_;
F->lp_2037 = (*(P188)rt_nil_check(F->l_2034)).path_;
if ((({ rt_gstr at2041 = (*(P139)rt_nil_check(F->lp_2037)); at2041.hi >= at2041.lo ? at2041.hi - at2041.lo + 1 : (rt_int)0; }) > ({ rt_gstr at2042 = (*(P139)rt_nil_check(F->gp_2036)); at2042.hi >= at2042.lo ? at2042.hi - at2042.lo + 1 : (rt_int)0; }))) {
f_fail_242(F->up, G_NV((*(P188)rt_nil_check(F->g_2035)).line_), rt_g_lit("a goto cannot transfer control into a compound statement (RM79 5.8)", 67));
} else if ((!eq_rt_gstr(({ rt_gstr sl2044 = (*(P139)rt_nil_check(F->gp_2036)); rt_int l_ = ((rt_int)1LL), h_ = ({ rt_gstr at2043 = (*(P139)rt_nil_check(F->lp_2037)); at2043.hi >= at2043.lo ? at2043.hi - at2043.lo + 1 : (rt_int)0; }); if (l_ <= h_) { rt_index(l_, sl2044.lo, sl2044.hi); rt_index(h_, sl2044.lo, sl2044.hi); } sl2044.p += l_ - sl2044.lo; sl2044.lo = l_; sl2044.hi = h_; sl2044; }), (*(P139)rt_nil_check(F->lp_2037))))) {
f_fail_242(F->up, G_NV((*(P188)rt_nil_check(F->g_2035)).line_), rt_g_lit("a goto cannot transfer control into a compound statement (RM79 5.8)", 67));
}
{ rt_int lo2049 = rt_add(({ rt_gstr at2046 = (*(P139)rt_nil_check(F->lp_2037)); at2046.hi >= at2046.lo ? at2046.hi - at2046.lo + 1 : (rt_int)0; }), ((rt_int)1LL)), hi2050 = ({ rt_gstr at2047 = (*(P139)rt_nil_check(F->gp_2036)); at2047.hi >= at2047.lo ? at2047.hi - at2047.lo + 1 : (rt_int)0; });
for (rt_int it2051 = lo2049; it2051 <= hi2050; it2051++) {
F->i_2048 = it2051;
if (((G_NV(({ rt_gstr ix2052 = (*(P139)rt_nil_check(F->gp_2036)); ix2052.p[rt_index(F->i_2048, ix2052.lo, ix2052.hi) - ix2052.lo]; })) == 104) || (G_NV(({ rt_gstr ix2053 = (*(P139)rt_nil_check(F->gp_2036)); ix2053.p[rt_index(F->i_2048, ix2053.lo, ix2053.hi) - ix2053.lo]; })) == 97))) {
f_fail_242(F->up, G_NV((*(P188)rt_nil_check(F->g_2035)).line_), rt_g_lit("a goto cannot leave an exception handler or an accept statement (RM79 5.8)", 74));
}
}
}
L_end_2045: ;
F->g_2035 = (*(P188)rt_nil_check(F->g_2035)).next_;
}
L_end_2039: ;
ret_:

  return;
}

static void f_gen_label_656(struct f_greenc_1fr *up_, P173 s_654, int goto_it_655) {
  struct f_gen_label_656fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_654 = s_654;
F->goto_it_655 = goto_it_655;
F->l_2054 = NULL;
F->l_2054 = F->up->body_labels_190;
while (((F->l_2054 != NULL) && (!eq_rt_gstr((*(P139)rt_nil_check((*(P188)rt_nil_check(F->l_2054)).name_)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->s_654)).name_)))))) {
F->l_2054 = (*(P188)rt_nil_check(F->l_2054)).next_;
}
L_end_2055: ;
if ((F->l_2054 == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_654)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("label ", 6), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->s_654)).name_))), rt_g_lit(" is not in this body (RM79 5.8)", 31)));
}
if (F->goto_it_655) {
f_pop_frames_665(F->up, G_NV((*(P188)rt_nil_check(F->l_2054)).frames_));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("goto ", 5), (*(P139)rt_nil_check((*(P188)rt_nil_check(F->l_2054)).cname_))), one_rt_gstr(59)));
} else {
f_emit_248(F->up, cat_rt_gstr((*(P139)rt_nil_check((*(P188)rt_nil_check(F->l_2054)).cname_)), rt_g_lit(": ;", 3)));
}
ret_:

  return;
}

static int f_is_foreign_658(struct f_greenc_1fr *up_, P173 d_657) {
  struct f_is_foreign_658fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_657 = d_657;
if (((*(P173)rt_nil_check(F->d_657)).tag_ == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->d_657)).tag_)), rt_g_lit("INTERFACE", 9));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_subprogram_body_661(struct f_greenc_1fr *up_, P173 d_659, P116 y_660) {
  struct f_subprogram_body_661fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_659 = d_659;
F->y_660 = y_660;
F->saved_code_2056 = NULL;
F->saved_code_2056 = F->up->code_135;
F->saved_fields_2057 = NULL;
F->saved_fields_2057 = F->up->fields_buf_136;
F->saved_in_2058 = INT_MIN;
F->saved_in_2058 = G_NV(F->up->in_func_137);
F->saved_sym_2059 = NULL;
F->saved_sym_2059 = F->up->func_sym_141;
F->saved_exits_2060 = NULL;
F->saved_exits_2060 = F->up->exits_144;
F->saved_frames_2061 = INT64_MIN;
F->saved_frames_2061 = G_NV(F->up->frames_149);
F->saved_handlers_2062 = NULL;
F->saved_handlers_2062 = F->up->handlers_152;
F->saved_cleanups_2063 = NULL;
F->saved_cleanups_2063 = F->up->cleanups_153;
F->saved_labels_2064 = NULL;
F->saved_labels_2064 = F->up->body_labels_190;
F->saved_hx_2065 = NULL;
F->saved_hx_2065 = F->up->handler_exits_193;
F->saved_hd_2066 = INT64_MIN;
F->saved_hd_2066 = G_NV(F->up->handler_depth_194);
F->saved_pure_2067 = NULL;
F->saved_pure_2067 = F->up->pure_sym_210;
F->aw_2068 = NULL;
F->saved_pdepth_2069 = INT64_MIN;
F->saved_pdepth_2069 = G_NV(F->up->pure_depth_211);
F->args_2070 = NULL;
F->head_2071 = NULL;
F->frame_2072 = NULL;
F->parent_2073 = NULL;
F->ct_2074 = NULL;
F->x_2075 = NULL;
F->pm_2076 = NULL;
F->pm_2076 = (*(P116)rt_nil_check(F->y_660)).params_;
F->p_2077 = NULL;
F->frame_2072 = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_660)).cname_)), rt_g_lit("fr", 2)));
if (G_NV(F->up->in_func_137)) {
F->parent_2073 = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->up->func_sym_141)).cname_)), rt_g_lit("fr", 2)));
}
F->up->code_135 = f_new_buffer_243(F->up);
F->up->fields_buf_136 = f_new_buffer_243(F->up);
F->up->in_func_137 = 1;
F->up->func_sym_141 = F->y_660;
F->up->exits_144 = NULL;
F->up->frames_149 = ((rt_int)0LL);
F->up->handlers_152 = NULL;
F->up->cleanups_153 = NULL;
F->up->handler_exits_193 = NULL;
F->up->handler_depth_194 = ((rt_int)0LL);
F->up->cur_level_138 = rt_add(G_NV(F->up->cur_level_138), ((rt_int)1LL));
F->args_2070 = f_mk_221(F->up, rt_g_lit("", 0));
f_open_scope_448(F->up);
f_push_unit_422(F->up, (*(P173)rt_nil_check(F->d_659)).name_);
if (((G_NV((*(P116)rt_nil_check(F->y_660)).kind_) == ((rt_int)3LL)) && (!G_NV((*(P116)rt_nil_check(F->y_660)).vrp_)))) {
F->up->pure_sym_210 = F->y_660;
F->up->pure_depth_211 = G_NV(F->up->depth_119);
}
if ((F->parent_2073 != NULL)) {
f_put_to_246(F->up, F->up->fields_buf_136, cat_rt_gstr(cat_rt_gstr(rt_g_lit(" struct ", 8), (*(P139)rt_nil_check(F->parent_2073))), rt_g_lit(" *up;", 5)));
F->args_2070 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P139)rt_nil_check(F->parent_2073))), rt_g_lit(" *up_", 5)));
f_emit_248(F->up, rt_g_lit("F->up = up_;", 12));
}
while ((F->pm_2076 != NULL)) {
f_ctype_474(F->up, (*(P1752)rt_nil_check(F->pm_2076)).t_, &F->ct_2074);
if ((({ rt_gstr at2079 = (*(P139)rt_nil_check(F->args_2070)); at2079.hi >= at2079.lo ? at2079.hi - at2079.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->args_2070 = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->args_2070)), rt_g_lit(", ", 2)));
}
if ((G_NV((*(P1752)rt_nil_check(F->pm_2076)).mode_) == ((rt_int)1LL))) {
F->p_2077 = f_new_sym_452(F->up, ((rt_int)2LL), (*(P1752)rt_nil_check(F->pm_2076)).name_);
(*(P116)rt_nil_check(F->p_2077)).ro_ = 1;
f_put_to_246(F->up, F->up->fields_buf_136, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P139)rt_nil_check(F->ct_2074))), one_rt_gstr(32)), (*(P139)rt_nil_check((*(P1752)rt_nil_check(F->pm_2076)).cfield_))), one_rt_gstr(59)));
F->args_2070 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->args_2070)), (*(P139)rt_nil_check(F->ct_2074))), one_rt_gstr(32)), (*(P139)rt_nil_check((*(P1752)rt_nil_check(F->pm_2076)).cfield_))));
f_copy_code_604(F->up, (*(P1752)rt_nil_check(F->pm_2076)).t_, (*(P139)rt_nil_check((*(P1752)rt_nil_check(F->pm_2076)).cfield_)), &F->x_2075);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->", 3), (*(P139)rt_nil_check((*(P1752)rt_nil_check(F->pm_2076)).cfield_))), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->x_2075))), one_rt_gstr(59)));
} else {
F->p_2077 = f_new_sym_452(F->up, ((rt_int)1LL), (*(P1752)rt_nil_check(F->pm_2076)).name_);
(*(P116)rt_nil_check(F->p_2077)).byref_ = 1;
f_put_to_246(F->up, F->up->fields_buf_136, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P139)rt_nil_check(F->ct_2074))), rt_g_lit(" *", 2)), (*(P139)rt_nil_check((*(P1752)rt_nil_check(F->pm_2076)).cfield_))), one_rt_gstr(59)));
F->args_2070 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->args_2070)), (*(P139)rt_nil_check(F->ct_2074))), rt_g_lit(" *", 2)), (*(P139)rt_nil_check((*(P1752)rt_nil_check(F->pm_2076)).cfield_))));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->", 3), (*(P139)rt_nil_check((*(P1752)rt_nil_check(F->pm_2076)).cfield_))), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check((*(P1752)rt_nil_check(F->pm_2076)).cfield_))), one_rt_gstr(59)));
}
(*(P116)rt_nil_check(F->p_2077)).access_path_ = (*(P1752)rt_nil_check(F->pm_2076)).cfield_;
(*(P116)rt_nil_check(F->p_2077)).t_ = (*(P1752)rt_nil_check(F->pm_2076)).t_;
(*(P116)rt_nil_check(F->p_2077)).c_ = (*(P1752)rt_nil_check(F->pm_2076)).c_;
(*(P116)rt_nil_check(F->p_2077)).level_ = G_NV(F->up->cur_level_138);
f_define_447(F->up, F->p_2077, G_NV((*(P173)rt_nil_check(F->d_659)).line_));
F->pm_2076 = (*(P1752)rt_nil_check(F->pm_2076)).next_;
}
L_end_2078: ;
if ((G_NV((*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_660)).result_)).kind_) != ((rt_int)9LL))) {
f_ctype_474(F->up, (*(P116)rt_nil_check(F->y_660)).result_, &F->ct_2074);
f_put_to_246(F->up, F->up->fields_buf_136, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P139)rt_nil_check(F->ct_2074))), rt_g_lit(" result_;", 9)));
}
f_decl_elements_631(F->up, (*(P173)rt_nil_check(F->d_659)).c_);
if ((f_is_foreign_658(F->up, F->d_659) && (G_NV((*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_660)).result_)).kind_) == ((rt_int)9LL)))) {
F->x_2075 = f_mk_221(F->up, rt_g_lit("", 0));
F->pm_2076 = (*(P116)rt_nil_check(F->y_660)).params_;
while ((F->pm_2076 != NULL)) {
if ((({ rt_gstr at2081 = (*(P139)rt_nil_check(F->x_2075)); at2081.hi >= at2081.lo ? at2081.hi - at2081.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->x_2075 = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->x_2075)), rt_g_lit(", ", 2)));
}
if ((f_is_string_551(F->up, (*(P1752)rt_nil_check(F->pm_2076)).t_) && (G_NV((*(P1752)rt_nil_check(F->pm_2076)).mode_) == ((rt_int)1LL)))) {
F->x_2075 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->x_2075)), rt_g_lit("rt_g_g2s(F->", 12)), (*(P139)rt_nil_check((*(P1752)rt_nil_check(F->pm_2076)).cfield_))), one_rt_gstr(41)));
} else {
F->x_2075 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->x_2075)), rt_g_lit("F->", 3)), (*(P139)rt_nil_check((*(P1752)rt_nil_check(F->pm_2076)).cfield_))));
}
F->pm_2076 = (*(P1752)rt_nil_check(F->pm_2076)).next_;
}
L_end_2080: ;
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_", 5), f_lower_s_232(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->d_659)).name_)))), one_rt_gstr(40)), (*(P139)rt_nil_check(F->x_2075))), rt_g_lit(");", 2)));
} else {
f_label_body_653(F->up, (*(P173)rt_nil_check(F->d_659)).d_, (*(P173)rt_nil_check(F->d_659)).e_);
f_guarded_672(F->up, (*(P173)rt_nil_check(F->d_659)).d_, (*(P173)rt_nil_check(F->d_659)).e_, G_NV((*(P173)rt_nil_check(F->d_659)).line_));
}
f_task_awaits_1127(F->up, (*(P173)rt_nil_check(F->d_659)).c_, &F->aw_2068);
F->up->nunits_187 = rt_sub(G_NV(F->up->nunits_187), ((rt_int)1LL));
f_close_scope_449(F->up);
F->up->cur_level_138 = rt_sub(G_NV(F->up->cur_level_138), ((rt_int)1LL));
if ((({ rt_gstr at2082 = (*(P139)rt_nil_check(F->args_2070)); at2082.hi >= at2082.lo ? at2082.hi - at2082.lo + 1 : (rt_int)0; }) == ((rt_int)0LL))) {
F->args_2070 = f_mk_221(F->up, rt_g_lit("void", 4));
}
f_ctype_474(F->up, (*(P116)rt_nil_check(F->y_660)).result_, &F->ct_2074);
F->head_2071 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P139)rt_nil_check(F->ct_2074))), one_rt_gstr(32)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_660)).cname_))), one_rt_gstr(40)), (*(P139)rt_nil_check(F->args_2070))), one_rt_gstr(41)));
f_put_to_246(F->up, F->up->out_protos_130, cat_rt_gstr((*(P139)rt_nil_check(F->head_2071)), one_rt_gstr(59)));
f_put_to_246(F->up, F->up->out_frames_128, cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P139)rt_nil_check(F->frame_2072))), rt_g_lit(" { int dummy;", 13)));
f_splice_253(F->up, F->up->out_frames_128, F->up->fields_buf_136);
f_put_to_246(F->up, F->up->out_frames_128, rt_g_lit("};", 2));
f_put_to_246(F->up, F->up->out_funcs_132, cat_rt_gstr((*(P139)rt_nil_check(F->head_2071)), rt_g_lit(" {", 2)));
f_put_to_246(F->up, F->up->out_funcs_132, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  struct ", 9), (*(P139)rt_nil_check(F->frame_2072))), rt_g_lit(" *F = rt_alloc(sizeof *F);", 26)));
if (((G_NV((*(P116)rt_nil_check(F->y_660)).kind_) == ((rt_int)4LL)) && ((*(P116)rt_nil_check(F->y_660)).access_path_ != NULL))) {
f_put_to_246(F->up, F->up->out_funcs_132, cat_rt_gstr(rt_g_lit("  ", 2), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_660)).access_path_))));
}
f_splice_253(F->up, F->up->out_funcs_132, F->up->code_135);
if ((G_NV((*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_660)).result_)).kind_) != ((rt_int)9LL))) {
f_put_to_246(F->up, F->up->out_funcs_132, rt_g_lit("  rt_raise(RT_X_INIT);", 22));
f_put_to_246(F->up, F->up->out_funcs_132, rt_g_lit("ret_:", 5));
f_put_to_246(F->up, F->up->out_funcs_132, (*(P139)rt_nil_check(F->aw_2068)));
f_put_to_246(F->up, F->up->out_funcs_132, rt_g_lit("  return F->result_;", 20));
} else {
f_put_to_246(F->up, F->up->out_funcs_132, rt_g_lit("ret_:", 5));
f_put_to_246(F->up, F->up->out_funcs_132, (*(P139)rt_nil_check(F->aw_2068)));
f_put_to_246(F->up, F->up->out_funcs_132, rt_g_lit("  return;", 9));
}
f_put_to_246(F->up, F->up->out_funcs_132, rt_g_lit("}", 1));
f_put_to_246(F->up, F->up->out_funcs_132, rt_g_lit("", 0));
F->up->code_135 = F->saved_code_2056;
F->up->fields_buf_136 = F->saved_fields_2057;
F->up->in_func_137 = G_NV(F->saved_in_2058);
F->up->func_sym_141 = F->saved_sym_2059;
F->up->exits_144 = F->saved_exits_2060;
F->up->frames_149 = G_NV(F->saved_frames_2061);
F->up->handlers_152 = F->saved_handlers_2062;
F->up->cleanups_153 = F->saved_cleanups_2063;
F->up->pure_sym_210 = F->saved_pure_2067;
F->up->pure_depth_211 = G_NV(F->saved_pdepth_2069);
F->up->body_labels_190 = F->saved_labels_2064;
F->up->handler_exits_193 = F->saved_hx_2065;
F->up->handler_depth_194 = G_NV(F->saved_hd_2066);
ret_:

  return;
}

static void f_gen_statements_663(struct f_greenc_1fr *up_, P173 stmts_662) {
  struct f_gen_statements_663fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_662 = stmts_662;
F->s_2083 = NULL;
F->s_2083 = F->stmts_662;
while ((F->s_2083 != NULL)) {
f_gen_statement_678(F->up, F->s_2083);
F->s_2083 = (*(P173)rt_nil_check(F->s_2083)).next_;
}
L_end_2084: ;
ret_:

  return;
}

static void f_pop_frames_665(struct f_greenc_1fr *up_, rt_int upto_664) {
  struct f_pop_frames_665fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->upto_664 = upto_664;
F->i_2085 = INT64_MIN;
F->i_2085 = G_NV(F->up->frames_149);
F->c_2086 = NULL;
F->c_2086 = F->up->cleanups_153;
while ((G_NV(F->i_2085) > F->upto_664)) {
f_emit_248(F->up, (*(P139)rt_nil_check((*(P150)rt_nil_check(F->c_2086)).s_)));
F->c_2086 = (*(P150)rt_nil_check(F->c_2086)).next_;
F->i_2085 = rt_sub(G_NV(F->i_2085), ((rt_int)1LL));
}
L_end_2087: ;
ret_:

  return;
}

static void f_push_cleanup_667(struct f_greenc_1fr *up_, rt_gstr s_666) {
  struct f_push_cleanup_667fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_666 = cp_rt_gstr(s_666);
F->up->cleanups_153 = ({ R151 *cell2088 = rt_alloc(sizeof(R151)); *cell2088 = cp_R151(({ R151 ag2089; ag2089.s_ = NULL; ag2089.next_ = F->up->cleanups_153; ag2089; })); (P150)cell2088; });
(*(P150)rt_nil_check(F->up->cleanups_153)).s_ = f_mk_221(F->up, F->s_666);
F->up->frames_149 = rt_add(G_NV(F->up->frames_149), ((rt_int)1LL));
ret_:

  return;
}

static void f_pop_cleanup_668(struct f_greenc_1fr *up_) {
  struct f_pop_cleanup_668fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->cleanups_153 = (*(P150)rt_nil_check(F->up->cleanups_153)).next_;
F->up->frames_149 = rt_sub(G_NV(F->up->frames_149), ((rt_int)1LL));
ret_:

  return;
}

static void f_guarded_672(struct f_greenc_1fr *up_, P173 stmts_669, P173 hs_670, rt_int line_671) {
  struct f_guarded_672fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_669 = stmts_669;
F->hs_670 = hs_670;
F->line_671 = line_671;
F->saved_hx_2090 = NULL;
F->f_2091 = NULL;
F->x_2092 = NULL;
F->h_2093 = NULL;
F->n_2094 = NULL;
F->first_2095 = INT_MIN;
F->first_2095 = 1;
F->has_others_2096 = INT_MIN;
F->has_others_2096 = 0;
F->conds_2097 = NULL;
if ((F->hs_670 == NULL)) {
f_gen_statements_663(F->up, F->stmts_669);
goto ret_;
}
f_new_name_224(F->up, rt_g_lit("xf", 2), &F->f_2091);
f_new_name_224(F->up, rt_g_lit("x", 1), &F->x_2092);
f_push_cleanup_667(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P139)rt_nil_check(F->f_2091))), rt_g_lit(");", 2)));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_frame ", 11), (*(P139)rt_nil_check(F->f_2091))), one_rt_gstr(59)));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (RT_TRY(", 11), (*(P139)rt_nil_check(F->f_2091))), rt_g_lit(")) {", 4)));
f_gen_statements_663(F->up, F->stmts_669);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P139)rt_nil_check(F->f_2091))), rt_g_lit(");", 2)));
f_emit_248(F->up, rt_g_lit("} else {", 8));
f_pop_cleanup_668(F->up);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P139)rt_nil_check(F->f_2091))), rt_g_lit(");", 2)));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("int ", 4), (*(P139)rt_nil_check(F->x_2092))), rt_g_lit(" = rt_xcur;", 11)));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (rt_g_aborted()) rt_raise(", 29), (*(P139)rt_nil_check(F->x_2092))), rt_g_lit(");", 2)));
F->up->handlers_152 = ({ R151 *cell2098 = rt_alloc(sizeof(R151)); *cell2098 = cp_R151(({ R151 ag2099; ag2099.s_ = F->x_2092; ag2099.next_ = F->up->handlers_152; ag2099; })); (P150)cell2098; });
F->h_2093 = F->hs_670;
while ((F->h_2093 != NULL)) {
F->n_2094 = (*(P173)rt_nil_check(F->h_2093)).a_;
F->conds_2097 = f_mk_221(F->up, rt_g_lit("0", 1));
while ((F->n_2094 != NULL)) {
if (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->n_2094)).name_)), rt_g_lit("OTHERS", 6))) {
F->has_others_2096 = 1;
F->conds_2097 = f_mk_221(F->up, rt_g_lit("1", 1));
} else {
F->up->prefix_hint_208 = (*(P173)rt_nil_check(F->n_2094)).tag_;
f_exc_id_676(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->n_2094)).name_)), G_NV((*(P173)rt_nil_check(F->h_2093)).line_), &F->f_2091);
F->conds_2097 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->conds_2097)), rt_g_lit(" || ", 4)), (*(P139)rt_nil_check(F->x_2092))), rt_g_lit(" == ", 4)), (*(P139)rt_nil_check(F->f_2091))));
}
F->n_2094 = (*(P173)rt_nil_check(F->n_2094)).next_;
}
L_end_2101: ;
if (G_NV(F->first_2095)) {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P139)rt_nil_check(F->conds_2097))), rt_g_lit(") {", 3)));
} else {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P139)rt_nil_check(F->conds_2097))), rt_g_lit(") {", 3)));
}
F->first_2095 = 0;
F->saved_hx_2090 = F->up->handler_exits_193;
F->up->handler_exits_193 = F->up->exits_144;
F->up->handler_depth_194 = rt_add(G_NV(F->up->handler_depth_194), ((rt_int)1LL));
f_gen_statements_663(F->up, (*(P173)rt_nil_check(F->h_2093)).b_);
F->up->handler_depth_194 = rt_sub(G_NV(F->up->handler_depth_194), ((rt_int)1LL));
F->up->handler_exits_193 = F->saved_hx_2090;
F->h_2093 = (*(P173)rt_nil_check(F->h_2093)).next_;
}
L_end_2100: ;
if ((!G_NV(F->has_others_2096))) {
f_emit_248(F->up, rt_g_lit("} else {", 8));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_raise(", 9), (*(P139)rt_nil_check(F->x_2092))), rt_g_lit(");", 2)));
}
f_emit_248(F->up, rt_g_lit("}", 1));
F->up->handlers_152 = (*(P150)rt_nil_check(F->up->handlers_152)).next_;
f_emit_248(F->up, rt_g_lit("}", 1));
f_emit_248(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_exc_id_676(struct f_greenc_1fr *up_, rt_gstr name_673, rt_int line_674, P139 *r_675) {
  struct f_exc_id_676fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_673 = cp_rt_gstr(name_673);
F->line_674 = line_674;
F->r_675 = r_675;
F->y_2102 = NULL;
F->y_2102 = f_lookup_409(F->up, F->name_673);
if ((F->up->prefix_hint_208 != NULL)) {
F->y_2102 = f_member_of_1016(F->up, (*(P139)rt_nil_check(F->up->prefix_hint_208)), F->name_673, F->line_674);
F->up->prefix_hint_208 = NULL;
}
if (((F->y_2102 == NULL) || (G_NV((*(P116)rt_nil_check(F->y_2102)).kind_) != ((rt_int)6LL)))) {
f_fail_242(F->up, F->line_674, cat_rt_gstr(F->name_673, rt_g_lit(" is not an exception", 20)));
}
(*F->r_675) = (*(P116)rt_nil_check(F->y_2102)).cname_;
ret_:

  return;
}

static void f_gen_statement_678(struct f_greenc_1fr *up_, P173 s_677) {
  struct f_gen_statement_678fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_677 = s_677;
F->t_2103 = NULL;
F->vt_2104 = NULL;
F->c_2105 = NULL;
F->lv_2106 = NULL;
F->v_2107 = NULL;
F->x_2108 = NULL;
F->ro_2109 = INT_MIN;
{ rt_int sel2110 = G_NV((*(P173)rt_nil_check(F->s_677)).kind_);
if (0 || sel2110 == ((rt_int)20LL)) {
if ((((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->s_677)).a_)).kind_) == ((rt_int)8LL)) && ((*(P173)rt_nil_check((*(P173)rt_nil_check(F->s_677)).a_)).b_ != NULL)) && ((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->s_677)).a_)).b_)).kind_) == ((rt_int)14LL)) || (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->s_677)).a_)).b_)).kind_) == ((rt_int)80LL))))) {
f_slice_assign_680(F->up, F->s_677);
goto ret_;
}
F->up->in_lv_path_213 = 1;
F->up->last_deref_214 = 0;
f_lvalue_729(F->up, (*(P173)rt_nil_check(F->s_677)).a_, &F->lv_2106, &F->t_2103, &F->c_2105, &F->ro_2109);
 (void)rt_range(F->ro_2109, 0, 1);
F->up->in_lv_path_213 = 0;
if (G_NV(F->ro_2109)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_677)).line_), rt_g_lit("assignment to a constant or an in parameter", 43));
}
f_check_pure_target_1176(F->up, (*(P173)rt_nil_check(F->s_677)).a_, G_NV((*(P173)rt_nil_check(F->s_677)).line_));
if (f_is_const_access_723(F->up, (*(P173)rt_nil_check(F->s_677)).b_)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_677)).line_), rt_g_lit("a constant of an access type cannot be assigned to a variable (RM79 3.8)", 72));
}
F->up->vrp_ok_212 = 1;
if (((G_NV((*(P121)rt_nil_check(F->t_2103)).kind_) == ((rt_int)6LL)) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->s_677)).b_)).kind_) == ((rt_int)12LL)))) {
F->up->agg_bounds_180 = F->lv_2106;
}
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->s_677)).b_, F->t_2103, &F->vt_2104, &F->v_2107);
F->up->agg_bounds_180 = NULL;
F->up->vrp_ok_212 = 0;
f_check_type_469(F->up, F->vt_2104, F->t_2103, G_NV((*(P173)rt_nil_check(F->s_677)).line_));
f_assign_code_600(F->up, (*(P139)rt_nil_check(F->lv_2106)), F->t_2103, (*(P139)rt_nil_check(F->v_2107)), F->c_2105, &F->x_2108);
f_emit_248(F->up, (*(P139)rt_nil_check(F->x_2108)));
} else if (0 || sel2110 == ((rt_int)21LL)) {
F->up->vrp_ok_212 = 1;
f_gen_call_682(F->up, F->s_677);
F->up->vrp_ok_212 = 0;
} else if (0 || sel2110 == ((rt_int)22LL)) {
f_gen_if_684(F->up, F->s_677);
} else if (0 || sel2110 == ((rt_int)23LL)) {
f_gen_case_686(F->up, F->s_677);
} else if (0 || sel2110 == ((rt_int)24LL)) {
f_gen_loop_698(F->up, F->s_677);
} else if (0 || sel2110 == ((rt_int)25LL)) {
f_gen_block_700(F->up, F->s_677);
} else if (0 || sel2110 == ((rt_int)26LL)) {
f_gen_exit_705(F->up, F->s_677);
} else if (0 || sel2110 == ((rt_int)27LL)) {
f_gen_return_707(F->up, F->s_677);
} else if (0 || sel2110 == ((rt_int)28LL)) {
if (((((*(P173)rt_nil_check(F->s_677)).tag_ != NULL) && f_is_task_name_1081(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->s_677)).tag_)))) && eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->s_677)).name_)), rt_g_lit("FAILURE", 7)))) {
f_task_failure_1129(F->up, F->s_677);
} else {
F->up->prefix_hint_208 = (*(P173)rt_nil_check(F->s_677)).tag_;
f_exc_id_676(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->s_677)).name_)), G_NV((*(P173)rt_nil_check(F->s_677)).line_), &F->x_2108);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_raise(", 9), (*(P139)rt_nil_check(F->x_2108))), rt_g_lit(");", 2)));
}
} else if (0 || sel2110 == ((rt_int)29LL)) {
if ((F->up->handlers_152 == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_677)).line_), rt_g_lit("raise; outside an exception handler", 35));
}
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_raise(", 9), (*(P139)rt_nil_check((*(P150)rt_nil_check(F->up->handlers_152)).s_))), rt_g_lit(");", 2)));
} else if (0 || sel2110 == ((rt_int)30LL)) {
f_condition_813(F->up, (*(P173)rt_nil_check(F->s_677)).a_, F->up->ty_bool_156, &F->vt_2104, &F->v_2107);
f_check_type_469(F->up, F->vt_2104, F->up->ty_bool_156, G_NV((*(P173)rt_nil_check(F->s_677)).line_));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (!(", 6), (*(P139)rt_nil_check(F->v_2107))), rt_g_lit(")) rt_raise(RT_X_ASSERT);", 25)));
} else if (0 || sel2110 == ((rt_int)31LL)) {
} else if (0 || sel2110 == ((rt_int)57LL)) {
f_gen_label_656(F->up, F->s_677, 0);
} else if (0 || sel2110 == ((rt_int)58LL)) {
f_gen_label_656(F->up, F->s_677, 1);
} else {
f_task_statement_gen_1171(F->up, F->s_677);
}
}
ret_:

  return;
}

static void f_slice_assign_680(struct f_greenc_1fr *up_, P173 s_679) {
  struct f_slice_assign_680fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_679 = s_679;
F->lv_2111 = NULL;
F->v_2112 = NULL;
F->sl_2113 = NULL;
F->x_2114 = NULL;
F->t_2115 = NULL;
F->st_2116 = NULL;
F->vt_2117 = NULL;
F->c_2118 = NULL;
F->ro_2119 = INT_MIN;
F->up->in_lv_path_213 = 1;
F->up->last_deref_214 = 0;
f_lvalue_729(F->up, (*(P173)rt_nil_check((*(P173)rt_nil_check(F->s_679)).a_)).a_, &F->lv_2111, &F->t_2115, &F->c_2118, &F->ro_2119);
 (void)rt_range(F->ro_2119, 0, 1);
F->up->in_lv_path_213 = 0;
if (G_NV(F->ro_2119)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_679)).line_), rt_g_lit("assignment to a constant or an in parameter", 43));
}
f_check_pure_target_1176(F->up, (*(P173)rt_nil_check(F->s_679)).a_, G_NV((*(P173)rt_nil_check(F->s_679)).line_));
F->ro_2119 = 0;
f_index_on_747(F->up, (*(P139)rt_nil_check(F->lv_2111)), F->t_2115, (*(P173)rt_nil_check(F->s_679)).a_, &F->ro_2119, 0, &F->sl_2113, &F->st_2116, &F->c_2118);
 (void)rt_range(F->ro_2119, 0, 1);
F->up->vrp_ok_212 = 1;
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->s_679)).b_, F->st_2116, &F->vt_2117, &F->v_2112);
F->up->vrp_ok_212 = 0;
f_check_type_469(F->up, F->vt_2117, F->st_2116, G_NV((*(P173)rt_nil_check(F->s_679)).line_));
f_ctype_474(F->up, F->st_2116, &F->x_2114);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P139)rt_nil_check(F->x_2114))), rt_g_lit(" sl_ = ", 7)), (*(P139)rt_nil_check(F->sl_2113))), rt_g_lit("; as_", 5)), (*(P139)rt_nil_check(F->x_2114))), rt_g_lit("(&sl_, ", 7)), (*(P139)rt_nil_check(F->v_2112))), rt_g_lit("); }", 4)));
ret_:

  return;
}

static void f_gen_call_682(struct f_greenc_1fr *up_, P173 s_681) {
  struct f_gen_call_682fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_681 = s_681;
F->c_2120 = NULL;
F->c_2120 = (*(P173)rt_nil_check(F->s_681)).a_;
F->t_2121 = NULL;
F->v_2122 = NULL;
if (((G_NV((*(P173)rt_nil_check(F->c_2120)).kind_) == ((rt_int)5LL)) || (G_NV((*(P173)rt_nil_check(F->c_2120)).kind_) == ((rt_int)9LL)))) {
F->c_2120 = f_nn_295(F->up, ((rt_int)8LL), G_NV((*(P173)rt_nil_check(F->s_681)).line_));
(*(P173)rt_nil_check(F->c_2120)).a_ = (*(P173)rt_nil_check(F->s_681)).a_;
}
if ((G_NV((*(P173)rt_nil_check(F->c_2120)).kind_) != ((rt_int)8LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_681)).line_), rt_g_lit("not a procedure call", 20));
}
F->up->post_checks_195 = NULL;
f_gcall_976(F->up, F->c_2120, 1, &F->t_2121, &F->v_2122);
f_emit_248(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->v_2122)), one_rt_gstr(59)));
if ((F->up->post_checks_195 != NULL)) {
f_emit_248(F->up, (*(P139)rt_nil_check(F->up->post_checks_195)));
F->up->post_checks_195 = NULL;
}
ret_:

  return;
}

static void f_gen_if_684(struct f_greenc_1fr *up_, P173 s_683) {
  struct f_gen_if_684fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_683 = s_683;
F->a_2123 = NULL;
F->a_2123 = (*(P173)rt_nil_check(F->s_683)).a_;
F->first_2124 = INT_MIN;
F->first_2124 = 1;
F->t_2125 = NULL;
F->v_2126 = NULL;
while ((F->a_2123 != NULL)) {
f_condition_813(F->up, (*(P173)rt_nil_check(F->a_2123)).a_, F->up->ty_bool_156, &F->t_2125, &F->v_2126);
f_check_type_469(F->up, F->t_2125, F->up->ty_bool_156, G_NV((*(P173)rt_nil_check(F->s_683)).line_));
if (G_NV(F->first_2124)) {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P139)rt_nil_check(F->v_2126))), rt_g_lit(") {", 3)));
} else {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P139)rt_nil_check(F->v_2126))), rt_g_lit(") {", 3)));
}
F->first_2124 = 0;
f_gen_statements_663(F->up, (*(P173)rt_nil_check(F->a_2123)).b_);
F->a_2123 = (*(P173)rt_nil_check(F->a_2123)).next_;
}
L_end_2127: ;
if ((G_NV((*(P173)rt_nil_check(F->s_683)).flag_) == ((rt_int)1LL))) {
f_emit_248(F->up, rt_g_lit("} else {", 8));
f_gen_statements_663(F->up, (*(P173)rt_nil_check(F->s_683)).b_);
}
f_emit_248(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_gen_case_686(struct f_greenc_1fr *up_, P173 s_685) {
  struct f_gen_case_686fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_685 = s_685;
F->st_2128 = NULL;
F->vt_2129 = NULL;
F->first_2130 = INT_MIN;
F->first_2130 = 1;
F->a_2131 = NULL;
F->a_2131 = (*(P173)rt_nil_check(F->s_685)).b_;
F->lab_2132 = NULL;
F->sel_2133 = NULL;
F->tmp_2134 = NULL;
F->ct_2135 = NULL;
F->conds_2136 = NULL;
F->v_2137 = NULL;
F->lo_2138 = NULL;
F->hi_2139 = NULL;
F->clo_2141.lo = ((rt_int)1LL); F->clo_2141.hi = ((rt_int)2000LL);
F->clo_2141.lo2 = 1; F->clo_2141.hi2 = 1;
F->clo_2141.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->clo_2141));
for (rt_int i2142 = 0; i2142 < G_CNT(F->clo_2141); i2142++) F->clo_2141.p[i2142] = INT64_MIN;
F->chi_2143.lo = ((rt_int)1LL); F->chi_2143.hi = ((rt_int)2000LL);
F->chi_2143.lo2 = 1; F->chi_2143.hi2 = 1;
F->chi_2143.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->chi_2143));
for (rt_int i2144 = 0; i2144 < G_CNT(F->chi_2143); i2144++) F->chi_2143.p[i2144] = INT64_MIN;
F->nc_2145 = INT64_MIN;
F->nc_2145 = ((rt_int)0LL);
F->vlo_2146 = INT64_MIN;
F->vhi_2147 = INT64_MIN;
F->total_2148 = INT64_MIN;
F->ok_2149 = INT_MIN;
F->ok2_2150 = INT_MIN;
F->y_2151 = NULL;
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->s_685)).a_, NULL, &F->st_2128, &F->sel_2133);
if ((!f_is_discrete_438(F->up, F->st_2128))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_685)).line_), rt_g_lit("the expression of a case statement is of a discrete type (RM79 5.5)", 67));
}
f_new_name_224(F->up, rt_g_lit("sel", 3), &F->tmp_2134);
f_ctype_474(F->up, F->st_2128, &F->ct_2135);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P139)rt_nil_check(F->ct_2135))), one_rt_gstr(32)), (*(P139)rt_nil_check(F->tmp_2134))), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->sel_2133))), one_rt_gstr(59)));
while ((F->a_2131 != NULL)) {
F->lab_2132 = (*(P173)rt_nil_check(F->a_2131)).a_;
F->conds_2136 = f_mk_221(F->up, rt_g_lit("0", 1));
while ((F->lab_2132 != NULL)) {
F->y_2151 = NULL;
if ((((*(P173)rt_nil_check(F->lab_2132)).b_ == NULL) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->lab_2132)).a_)).kind_) == ((rt_int)5LL)))) {
F->y_2151 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->lab_2132)).a_)).name_)));
if (((F->y_2151 != NULL) && (G_NV((*(P116)rt_nil_check(F->y_2151)).kind_) != ((rt_int)5LL)))) {
F->y_2151 = NULL;
}
}
if ((F->y_2151 != NULL)) {
f_check_type_469(F->up, (*(P116)rt_nil_check(F->y_2151)).t_, F->st_2128, G_NV((*(P173)rt_nil_check(F->s_685)).line_));
if ((!f_static_bounds_461(F->up, (*(P116)rt_nil_check(F->y_2151)).c_))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_685)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("a choice is static: ", 20), (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->lab_2132)).a_)).name_))), rt_g_lit(" has no static range (RM79 5.5)", 31)));
}
F->vlo_2146 = G_NV((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_2151)).c_)).mlo_);
F->vhi_2147 = G_NV((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_2151)).c_)).mhi_);
F->conds_2136 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->conds_2136)), rt_g_lit(" || (", 5)), (*(P139)rt_nil_check(F->tmp_2134))), rt_g_lit(" >= ", 4)), (*(P139)rt_nil_check((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_2151)).c_)).lo_))), rt_g_lit(" && ", 4)), (*(P139)rt_nil_check(F->tmp_2134))), rt_g_lit(" <= ", 4)), (*(P139)rt_nil_check((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_2151)).c_)).hi_))), one_rt_gstr(41)));
} else if (((*(P173)rt_nil_check(F->lab_2132)).b_ == NULL)) {
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->lab_2132)).a_, F->st_2128, &F->vt_2129, &F->v_2137);
f_check_type_469(F->up, F->vt_2129, F->st_2128, G_NV((*(P173)rt_nil_check(F->s_685)).line_));
f_static_choice_954(F->up, (*(P173)rt_nil_check(F->lab_2132)).a_, &F->vlo_2146, &F->ok_2149);
 (void)rt_range(F->ok_2149, 0, 1);
if ((!G_NV(F->ok_2149))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_685)).line_), rt_g_lit("a choice of a case statement is static (RM79 5.5)", 49));
}
F->vhi_2147 = G_NV(F->vlo_2146);
F->conds_2136 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->conds_2136)), rt_g_lit(" || ", 4)), (*(P139)rt_nil_check(F->tmp_2134))), rt_g_lit(" == ", 4)), (*(P139)rt_nil_check(F->v_2137))));
} else {
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->lab_2132)).a_, F->st_2128, &F->vt_2129, &F->lo_2138);
f_check_type_469(F->up, F->vt_2129, F->st_2128, G_NV((*(P173)rt_nil_check(F->s_685)).line_));
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->lab_2132)).b_, F->st_2128, &F->vt_2129, &F->hi_2139);
f_check_type_469(F->up, F->vt_2129, F->st_2128, G_NV((*(P173)rt_nil_check(F->s_685)).line_));
f_static_choice_954(F->up, (*(P173)rt_nil_check(F->lab_2132)).a_, &F->vlo_2146, &F->ok_2149);
 (void)rt_range(F->ok_2149, 0, 1);
f_static_choice_954(F->up, (*(P173)rt_nil_check(F->lab_2132)).b_, &F->vhi_2147, &F->ok2_2150);
 (void)rt_range(F->ok2_2150, 0, 1);
if ((!(G_NV(F->ok_2149) && G_NV(F->ok2_2150)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_685)).line_), rt_g_lit("a choice of a case statement is static (RM79 5.5)", 49));
}
F->conds_2136 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->conds_2136)), rt_g_lit(" || (", 5)), (*(P139)rt_nil_check(F->tmp_2134))), rt_g_lit(" >= ", 4)), (*(P139)rt_nil_check(F->lo_2138))), rt_g_lit(" && ", 4)), (*(P139)rt_nil_check(F->tmp_2134))), rt_g_lit(" <= ", 4)), (*(P139)rt_nil_check(F->hi_2139))), one_rt_gstr(41)));
}
if ((G_NV(F->vlo_2146) <= G_NV(F->vhi_2147))) {
{ rt_int lo2156 = ((rt_int)1LL), hi2157 = G_NV(F->nc_2145);
for (rt_int it2158 = lo2156; it2158 <= hi2157; it2158++) {
F->k_2155 = it2158;
if (((G_NV(F->vlo_2146) <= G_NV(({ A2140 ix2159 = F->chi_2143; ix2159.p[rt_index(F->k_2155, ix2159.lo, ix2159.hi) - ix2159.lo]; }))) && (G_NV(({ A2140 ix2160 = F->clo_2141; ix2160.p[rt_index(F->k_2155, ix2160.lo, ix2160.hi) - ix2160.lo]; })) <= G_NV(F->vhi_2147)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_685)).line_), rt_g_lit("a value is covered by two choices of a case statement (RM79 5.5)", 64));
}
}
}
L_end_2154: ;
if ((G_NV(F->nc_2145) < ((rt_int)2000LL))) {
F->nc_2145 = rt_add(G_NV(F->nc_2145), ((rt_int)1LL));
(*({ A2140 *ix2161 = &(F->clo_2141); &ix2161->p[rt_index(G_NV(F->nc_2145), ix2161->lo, ix2161->hi) - ix2161->lo]; })) = G_NV(F->vlo_2146);
(*({ A2140 *ix2162 = &(F->chi_2143); &ix2162->p[rt_index(G_NV(F->nc_2145), ix2162->lo, ix2162->hi) - ix2162->lo]; })) = G_NV(F->vhi_2147);
}
}
F->lab_2132 = (*(P173)rt_nil_check(F->lab_2132)).next_;
}
L_end_2153: ;
if (G_NV(F->first_2130)) {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P139)rt_nil_check(F->conds_2136))), rt_g_lit(") {", 3)));
} else {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P139)rt_nil_check(F->conds_2136))), rt_g_lit(") {", 3)));
}
F->first_2130 = 0;
f_gen_statements_663(F->up, (*(P173)rt_nil_check(F->a_2131)).b_);
F->a_2131 = (*(P173)rt_nil_check(F->a_2131)).next_;
}
L_end_2152: ;
if ((G_NV((*(P173)rt_nil_check(F->s_685)).flag_) != ((rt_int)1LL))) {
f_selector_range_692(F->up, (*(P173)rt_nil_check(F->s_685)).a_, F->st_2128, &F->vlo_2146, &F->vhi_2147, &F->ok_2149);
 (void)rt_range(F->ok_2149, 0, 1);
if ((!G_NV(F->ok_2149))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_685)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("a case statement on ", 20), f_kind_name_465(F->up, F->st_2128)), rt_g_lit(" needs others: its values are not static ", 41)), rt_g_lit("(RM79 5.5)", 10)));
}
F->total_2148 = ((rt_int)0LL);
{ rt_int lo2165 = ((rt_int)1LL), hi2166 = G_NV(F->nc_2145);
for (rt_int it2167 = lo2165; it2167 <= hi2166; it2167++) {
F->k_2164 = it2167;
if (((G_NV(({ A2140 ix2168 = F->clo_2141; ix2168.p[rt_index(F->k_2164, ix2168.lo, ix2168.hi) - ix2168.lo]; })) < G_NV(F->vlo_2146)) || (G_NV(({ A2140 ix2169 = F->chi_2143; ix2169.p[rt_index(F->k_2164, ix2169.lo, ix2169.hi) - ix2169.lo]; })) > G_NV(F->vhi_2147)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_685)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("a choice of the case statement is outside the values of ", 56), f_kind_name_465(F->up, F->st_2128)), rt_g_lit(" (RM79 5.5)", 11)));
}
F->total_2148 = rt_add(G_NV(F->total_2148), rt_add(rt_sub(G_NV(({ A2140 ix2170 = F->chi_2143; ix2170.p[rt_index(F->k_2164, ix2170.lo, ix2170.hi) - ix2170.lo]; })), G_NV(({ A2140 ix2171 = F->clo_2141; ix2171.p[rt_index(F->k_2164, ix2171.lo, ix2171.hi) - ix2171.lo]; }))), ((rt_int)1LL)));
}
}
L_end_2163: ;
if ((G_NV(F->total_2148) != rt_add(rt_sub(G_NV(F->vhi_2147), G_NV(F->vlo_2146)), ((rt_int)1LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_685)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the choices of the case statement do not cover every value of ", 62), f_kind_name_465(F->up, F->st_2128)), rt_g_lit(" (RM79 5.5)", 11)));
}
}
if (G_NV(F->first_2130)) {
f_emit_248(F->up, rt_g_lit("{", 1));
} else {
f_emit_248(F->up, rt_g_lit("} else {", 8));
}
if ((G_NV((*(P173)rt_nil_check(F->s_685)).flag_) == ((rt_int)1LL))) {
f_gen_statements_663(F->up, (*(P173)rt_nil_check(F->s_685)).c_);
} else {
f_emit_248(F->up, rt_g_lit("rt_raise(RT_X_CASE);", 20));
}
f_emit_248(F->up, rt_g_lit("}", 1));
f_emit_248(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_selector_range_692(struct f_greenc_1fr *up_, P173 e_687, P121 t_688, rt_int *lo_689, rt_int *hi_690, int *ok_691) {
  struct f_selector_range_692fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_687 = e_687;
F->t_688 = t_688;
F->lo_689 = lo_689;
F->hi_690 = hi_690;
F->ok_691 = ok_691;
F->y_2172 = NULL;
(*F->ok_691) = 0;
(*F->lo_689) = ((rt_int)0LL);
(*F->hi_690) = ((rt_int)0LL);
if ((G_NV((*(P173)rt_nil_check(F->e_687)).kind_) == ((rt_int)5LL))) {
F->y_2172 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_687)).name_)));
if ((((F->y_2172 != NULL) && ((G_NV((*(P116)rt_nil_check(F->y_2172)).kind_) == ((rt_int)1LL)) || (G_NV((*(P116)rt_nil_check(F->y_2172)).kind_) == ((rt_int)2LL)))) && f_static_bounds_461(F->up, (*(P116)rt_nil_check(F->y_2172)).c_))) {
(*F->lo_689) = G_NV((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_2172)).c_)).mlo_);
(*F->hi_690) = G_NV((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_2172)).c_)).mhi_);
(*F->ok_691) = 1;
goto ret_;
}
}
if ((G_NV((*(P121)rt_nil_check(F->t_688)).kind_) == ((rt_int)2LL))) {
(*F->hi_690) = ((rt_int)1LL);
(*F->ok_691) = 1;
} else if (((G_NV((*(P121)rt_nil_check(F->t_688)).kind_) == ((rt_int)11LL)) && ((*(P121)rt_nil_check(F->t_688)).tcons_ == NULL))) {
(*F->hi_690) = ((rt_int)127LL);
(*F->ok_691) = 1;
} else if ((G_NV((*(P121)rt_nil_check(F->t_688)).kind_) == ((rt_int)4LL))) {
(*F->hi_690) = rt_sub(f_list_len_301(F->up, (*(P121)rt_nil_check(F->t_688)).lits_), ((rt_int)1LL));
(*F->ok_691) = 1;
} else if (f_static_bounds_461(F->up, (*(P121)rt_nil_check(F->t_688)).tcons_)) {
(*F->lo_689) = G_NV((*(P177)rt_nil_check((*(P121)rt_nil_check(F->t_688)).tcons_)).mlo_);
(*F->hi_690) = G_NV((*(P177)rt_nil_check((*(P121)rt_nil_check(F->t_688)).tcons_)).mhi_);
(*F->ok_691) = 1;
}
ret_:

  return;
}

static void f_push_exit_696(struct f_greenc_1fr *up_, P139 match_693, int is_loop_694, P139 *label_695) {
  struct f_push_exit_696fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->match_693 = match_693;
F->is_loop_694 = is_loop_694;
F->label_695 = label_695;
f_new_name_224(F->up, rt_g_lit("L_end_", 6), &(*F->label_695));
F->up->exits_144 = ({ R143 *cell2173 = rt_alloc(sizeof(R143)); *cell2173 = cp_R143(({ R143 ag2174; ag2174.match_ = F->match_693; ag2174.label_ = (*F->label_695); ag2174.depth_ = G_NV(F->up->frames_149); ag2174.is_loop_ = F->is_loop_694; ag2174.next_ = F->up->exits_144; ag2174; })); (P142)cell2173; });
ret_:

  return;
}

static void f_gen_loop_698(struct f_greenc_1fr *up_, P173 s_697) {
  struct f_gen_loop_698fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_697 = s_697;
F->t_2175 = NULL;
F->vt_2176 = NULL;
F->c_2177 = NULL;
F->label_2178 = NULL;
F->cond_2179 = NULL;
F->acc_2180 = NULL;
F->lov_2181 = NULL;
F->hiv_2182 = NULL;
F->it_2183 = NULL;
F->y_2184 = NULL;
F->r_2185 = NULL;
f_push_exit_696(F->up, (*(P173)rt_nil_check(F->s_697)).tag_, 1, &F->label_2178);
if ((G_NV((*(P173)rt_nil_check(F->s_697)).flag_) == ((rt_int)0LL))) {
f_emit_248(F->up, rt_g_lit("for (;;) {", 10));
f_gen_statements_663(F->up, (*(P173)rt_nil_check(F->s_697)).b_);
f_emit_248(F->up, rt_g_lit("}", 1));
} else if ((G_NV((*(P173)rt_nil_check(F->s_697)).flag_) == ((rt_int)1LL))) {
f_condition_813(F->up, (*(P173)rt_nil_check(F->s_697)).a_, F->up->ty_bool_156, &F->vt_2176, &F->cond_2179);
f_check_type_469(F->up, F->vt_2176, F->up->ty_bool_156, G_NV((*(P173)rt_nil_check(F->s_697)).line_));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("while (", 7), (*(P139)rt_nil_check(F->cond_2179))), rt_g_lit(") {", 3)));
f_gen_statements_663(F->up, (*(P173)rt_nil_check(F->s_697)).b_);
f_emit_248(F->up, rt_g_lit("}", 1));
} else {
F->r_2185 = (*(P173)rt_nil_check(F->s_697)).a_;
F->c_2177 = f_new_cons_455(F->up);
if ((G_NV((*(P173)rt_nil_check(F->r_2185)).kind_) == ((rt_int)14LL))) {
f_range_bounds_768(F->up, (*(P173)rt_nil_check(F->r_2185)).a_, (*(P173)rt_nil_check(F->r_2185)).b_, NULL, G_NV((*(P173)rt_nil_check(F->s_697)).line_), &F->t_2175, &(*(P177)rt_nil_check(F->c_2177)).lo_, &(*(P177)rt_nil_check(F->c_2177)).hi_);
} else {
f_resolve_490(F->up, F->r_2185, &F->t_2175, &F->c_2177);
if (((*(P177)rt_nil_check(F->c_2177)).lo_ == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_697)).line_), rt_g_lit("a FOR loop needs a discrete range", 33));
}
}
if (((((G_NV((*(P121)rt_nil_check(F->t_2175)).kind_) != ((rt_int)1LL)) && (G_NV((*(P121)rt_nil_check(F->t_2175)).kind_) != ((rt_int)4LL))) && (G_NV((*(P121)rt_nil_check(F->t_2175)).kind_) != ((rt_int)11LL))) && (G_NV((*(P121)rt_nil_check(F->t_2175)).kind_) != ((rt_int)2LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_697)).line_), rt_g_lit("a FOR loop needs a discrete range (RM79 5.6)", 44));
}
f_storage_619(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->s_697)).name_)), F->t_2175, &F->acc_2180);
f_new_name_224(F->up, rt_g_lit("lo", 2), &F->lov_2181);
f_new_name_224(F->up, rt_g_lit("hi", 2), &F->hiv_2182);
f_new_name_224(F->up, rt_g_lit("it", 2), &F->it_2183);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_int ", 9), (*(P139)rt_nil_check(F->lov_2181))), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_2177)).lo_))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->hiv_2182))), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_2177)).hi_))), one_rt_gstr(59)));
if ((G_NV((*(P173)rt_nil_check(F->s_697)).ival_) == ((rt_int)1LL))) {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P139)rt_nil_check(F->it_2183))), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->hiv_2182))), rt_g_lit("; ", 2)), (*(P139)rt_nil_check(F->it_2183))), rt_g_lit(" >= ", 4)), (*(P139)rt_nil_check(F->lov_2181))), rt_g_lit("; ", 2)), (*(P139)rt_nil_check(F->it_2183))), rt_g_lit("--) {", 5)));
} else {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P139)rt_nil_check(F->it_2183))), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->lov_2181))), rt_g_lit("; ", 2)), (*(P139)rt_nil_check(F->it_2183))), rt_g_lit(" <= ", 4)), (*(P139)rt_nil_check(F->hiv_2182))), rt_g_lit("; ", 2)), (*(P139)rt_nil_check(F->it_2183))), rt_g_lit("++) {", 5)));
}
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->acc_2180)), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->it_2183))), one_rt_gstr(59)));
f_open_scope_448(F->up);
F->y_2184 = f_new_sym_452(F->up, ((rt_int)2LL), (*(P173)rt_nil_check(F->s_697)).name_);
(*(P116)rt_nil_check(F->y_2184)).t_ = F->t_2175;
(*(P116)rt_nil_check(F->y_2184)).ro_ = 1;
f_bind_622(F->up, F->y_2184, F->acc_2180);
f_define_447(F->up, F->y_2184, G_NV((*(P173)rt_nil_check(F->s_697)).line_));
f_gen_statements_663(F->up, (*(P173)rt_nil_check(F->s_697)).b_);
f_close_scope_449(F->up);
f_emit_248(F->up, rt_g_lit("}", 1));
f_emit_248(F->up, rt_g_lit("}", 1));
}
F->up->exits_144 = (*(P142)rt_nil_check(F->up->exits_144)).next_;
f_emit_248(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->label_2178)), rt_g_lit(": ;", 3)));
ret_:

  return;
}

static void f_gen_block_700(struct f_greenc_1fr *up_, P173 s_699) {
  struct f_gen_block_700fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_699 = s_699;
F->label_2186 = NULL;
F->aw_2187 = NULL;
f_push_exit_696(F->up, (*(P173)rt_nil_check(F->s_699)).tag_, 0, &F->label_2186);
f_emit_248(F->up, rt_g_lit("{", 1));
f_open_scope_448(F->up);
if (((*(P173)rt_nil_check(F->s_699)).tag_ != NULL)) {
f_push_unit_422(F->up, (*(P173)rt_nil_check(F->s_699)).tag_);
}
f_decl_elements_631(F->up, (*(P173)rt_nil_check(F->s_699)).a_);
f_guarded_672(F->up, (*(P173)rt_nil_check(F->s_699)).b_, (*(P173)rt_nil_check(F->s_699)).c_, G_NV((*(P173)rt_nil_check(F->s_699)).line_));
f_task_awaits_1127(F->up, (*(P173)rt_nil_check(F->s_699)).a_, &F->aw_2187);
f_emit_248(F->up, (*(P139)rt_nil_check(F->aw_2187)));
if (((*(P173)rt_nil_check(F->s_699)).tag_ != NULL)) {
F->up->nunits_187 = rt_sub(G_NV(F->up->nunits_187), ((rt_int)1LL));
}
f_close_scope_449(F->up);
f_emit_248(F->up, rt_g_lit("}", 1));
F->up->exits_144 = (*(P142)rt_nil_check(F->up->exits_144)).next_;
f_emit_248(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->label_2186)), rt_g_lit(": ;", 3)));
ret_:

  return;
}

static int f_exit_matches_703(struct f_greenc_1fr *up_, P173 s_701, P142 x_702) {
  struct f_exit_matches_703fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_701 = s_701;
F->x_702 = x_702;
if (((*(P173)rt_nil_check(F->s_701)).name_ == NULL)) {
F->result_ = G_NV((*(P142)rt_nil_check(F->x_702)).is_loop_);
goto ret_;
} else if (((*(P142)rt_nil_check(F->x_702)).match_ == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P139)rt_nil_check((*(P142)rt_nil_check(F->x_702)).match_)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->s_701)).name_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_gen_exit_705(struct f_greenc_1fr *up_, P173 s_704) {
  struct f_gen_exit_705fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_704 = s_704;
F->x_2188 = NULL;
F->x_2188 = F->up->exits_144;
F->t_2189 = NULL;
F->v_2190 = NULL;
while ((F->x_2188 != NULL)) {
if (((G_NV(F->up->accept_depth_197) > ((rt_int)0LL)) && (F->x_2188 == F->up->accept_exits_148))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_704)).line_), rt_g_lit("an exit statement cannot leave an accept statement (RM79 5.7)", 61));
}
if (((G_NV(F->up->handler_depth_194) > ((rt_int)0LL)) && (F->x_2188 == F->up->handler_exits_193))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_704)).line_), rt_g_lit("an exit statement cannot leave an exception handler (RM79 5.7)", 62));
}
if (f_exit_matches_703(F->up, F->s_704, F->x_2188)) {
if ((!G_NV((*(P142)rt_nil_check(F->x_2188)).is_loop_))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_704)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("exit ", 5), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->s_704)).name_))), rt_g_lit(": an exit names a loop, not a block (RM79 5.7)", 46)));
}
if (((*(P173)rt_nil_check(F->s_704)).a_ != NULL)) {
f_condition_813(F->up, (*(P173)rt_nil_check(F->s_704)).a_, F->up->ty_bool_156, &F->t_2189, &F->v_2190);
f_check_type_469(F->up, F->t_2189, F->up->ty_bool_156, G_NV((*(P173)rt_nil_check(F->s_704)).line_));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P139)rt_nil_check(F->v_2190))), rt_g_lit(") {", 3)));
}
f_pop_frames_665(F->up, G_NV((*(P142)rt_nil_check(F->x_2188)).depth_));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("goto ", 5), (*(P139)rt_nil_check((*(P142)rt_nil_check(F->x_2188)).label_))), one_rt_gstr(59)));
if (((*(P173)rt_nil_check(F->s_704)).a_ != NULL)) {
f_emit_248(F->up, rt_g_lit("}", 1));
}
goto ret_;
}
F->x_2188 = (*(P142)rt_nil_check(F->x_2188)).next_;
}
L_end_2191: ;
if (((*(P173)rt_nil_check(F->s_704)).name_ == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_704)).line_), rt_g_lit("exit outside a loop", 19));
}
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_704)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("exit ", 5), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->s_704)).name_))), rt_g_lit(" names no enclosing loop", 24)));
ret_:

  return;
}

static void f_gen_return_707(struct f_greenc_1fr *up_, P173 s_706) {
  struct f_gen_return_707fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_706 = s_706;
F->vt_2192 = NULL;
F->v_2193 = NULL;
if ((!G_NV(F->up->in_func_137))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_706)).line_), rt_g_lit("return outside a subprogram", 27));
}
if ((G_NV(F->up->accept_depth_197) > ((rt_int)0LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_706)).line_), rt_g_lit("a return statement cannot appear in an accept statement (RM79 5.3)", 66));
}
if ((G_NV((*(P121)rt_nil_check((*(P116)rt_nil_check(F->up->func_sym_141)).result_)).kind_) == ((rt_int)9LL))) {
if (((*(P173)rt_nil_check(F->s_706)).a_ != NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_706)).line_), rt_g_lit("a procedure returns no value", 28));
}
f_pop_frames_665(F->up, ((rt_int)0LL));
f_emit_248(F->up, rt_g_lit("goto ret_;", 10));
goto ret_;
}
if (((*(P173)rt_nil_check(F->s_706)).a_ == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_706)).line_), rt_g_lit("return needs a value here", 25));
}
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->s_706)).a_, (*(P116)rt_nil_check(F->up->func_sym_141)).result_, &F->vt_2192, &F->v_2193);
f_check_type_469(F->up, F->vt_2192, (*(P116)rt_nil_check(F->up->func_sym_141)).result_, G_NV((*(P173)rt_nil_check(F->s_706)).line_));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->result_ = ", 13), (*(P139)rt_nil_check(F->v_2193))), one_rt_gstr(59)));
f_pop_frames_665(F->up, ((rt_int)0LL));
f_emit_248(F->up, rt_g_lit("goto ret_;", 10));
ret_:

  return;
}

static void f_access_of_710(struct f_greenc_1fr *up_, P116 y_708, P139 *r_709) {
  struct f_access_of_710fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_708 = y_708;
F->r_709 = r_709;
F->p_2194 = NULL;
if ((G_NV((*(P116)rt_nil_check(F->y_708)).level_) <= ((rt_int)0LL))) {
(*F->r_709) = (*(P116)rt_nil_check(F->y_708)).access_path_;
goto ret_;
}
F->p_2194 = f_mk_221(F->up, rt_g_lit("F", 1));
{ rt_int lo2197 = ((rt_int)1LL), hi2198 = rt_sub(G_NV(F->up->cur_level_138), G_NV((*(P116)rt_nil_check(F->y_708)).level_));
for (rt_int it2199 = lo2197; it2199 <= hi2198; it2199++) {
F->i_2196 = it2199;
F->p_2194 = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->p_2194)), rt_g_lit("->up", 4)));
}
}
L_end_2195: ;
if (G_NV((*(P116)rt_nil_check(F->y_708)).byref_)) {
(*F->r_709) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*", 2), (*(P139)rt_nil_check(F->p_2194))), rt_g_lit("->", 2)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_708)).access_path_))), one_rt_gstr(41)));
} else {
(*F->r_709) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->p_2194)), rt_g_lit("->", 2)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_708)).access_path_))));
}
ret_:

  return;
}

static void f_link_to_713(struct f_greenc_1fr *up_, rt_int l_711, P139 *r_712) {
  struct f_link_to_713fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_711 = l_711;
F->r_712 = r_712;
(*F->r_712) = f_mk_221(F->up, rt_g_lit("F", 1));
{ rt_int lo2202 = ((rt_int)1LL), hi2203 = rt_sub(G_NV(F->up->cur_level_138), F->l_711);
for (rt_int it2204 = lo2202; it2204 <= hi2203; it2204++) {
F->i_2201 = it2204;
(*F->r_712) = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check((*F->r_712))), rt_g_lit("->up", 4)));
}
}
L_end_2200: ;
ret_:

  return;
}

static rt_gstr f_c_ident_715(struct f_greenc_1fr *up_, rt_gstr s_714) {
  struct f_c_ident_715fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_714 = cp_rt_gstr(s_714);
if (eq_rt_gstr(F->s_714, rt_g_lit("+", 1))) {
F->result_ = rt_g_lit("op_plus", 7);
goto ret_;
} else if (eq_rt_gstr(F->s_714, rt_g_lit("-", 1))) {
F->result_ = rt_g_lit("op_minus", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_714, rt_g_lit("*", 1))) {
F->result_ = rt_g_lit("op_times", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_714, rt_g_lit("/", 1))) {
F->result_ = rt_g_lit("op_slash", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_714, rt_g_lit("**", 2))) {
F->result_ = rt_g_lit("op_power", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_714, rt_g_lit("&", 1))) {
F->result_ = rt_g_lit("op_cat", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_714, rt_g_lit("=", 1))) {
F->result_ = rt_g_lit("op_eq", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_714, rt_g_lit("<", 1))) {
F->result_ = rt_g_lit("op_lt", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_714, rt_g_lit("<=", 2))) {
F->result_ = rt_g_lit("op_le", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_714, rt_g_lit(">", 1))) {
F->result_ = rt_g_lit("op_gt", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_714, rt_g_lit(">=", 2))) {
F->result_ = rt_g_lit("op_ge", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_714, rt_g_lit("MOD", 3))) {
F->result_ = rt_g_lit("op_mod", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_714, rt_g_lit("AND", 3))) {
F->result_ = rt_g_lit("op_and", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_714, rt_g_lit("OR", 2))) {
F->result_ = rt_g_lit("op_or", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_714, rt_g_lit("XOR", 3))) {
F->result_ = rt_g_lit("op_xor", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_714, rt_g_lit("NOT", 3))) {
F->result_ = rt_g_lit("op_not", 6);
goto ret_;
}
F->result_ = f_lower_s_232(F->up, F->s_714);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_deref_719(struct f_greenc_1fr *up_, rt_gstr base_716, P121 t_717, P139 *r_718) {
  struct f_deref_719fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_716 = cp_rt_gstr(base_716);
F->t_717 = t_717;
F->r_718 = r_718;
F->ct_2205 = NULL;
if (G_NV(F->up->in_lv_path_213)) {
F->up->last_deref_214 = 1;
}
f_ctype_474(F->up, F->t_717, &F->ct_2205);
(*F->r_718) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*(", 3), (*(P139)rt_nil_check(F->ct_2205))), rt_g_lit(")rt_nil_check(", 14)), F->base_716), rt_g_lit("))", 2)));
ret_:

  return;
}

static int f_is_object_721(struct f_greenc_1fr *up_, P173 e_720) {
  struct f_is_object_721fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_720 = e_720;
F->y_2206 = NULL;
if ((G_NV((*(P173)rt_nil_check(F->e_720)).kind_) == ((rt_int)5LL))) {
F->y_2206 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_720)).name_)));
if ((!(F->y_2206 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((G_NV((*(P116)rt_nil_check(F->y_2206)).kind_) == ((rt_int)1LL)) || (G_NV((*(P116)rt_nil_check(F->y_2206)).kind_) == ((rt_int)2LL)));
goto ret_;
} else if ((G_NV((*(P173)rt_nil_check(F->e_720)).kind_) == ((rt_int)9LL))) {
F->result_ = f_is_object_721(F->up, (*(P173)rt_nil_check(F->e_720)).a_);
goto ret_;
} else if ((G_NV((*(P173)rt_nil_check(F->e_720)).kind_) == ((rt_int)8LL))) {
if ((((*(P173)rt_nil_check(F->e_720)).b_ != NULL) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_720)).b_)).kind_) == ((rt_int)14LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_object_721(F->up, (*(P173)rt_nil_check(F->e_720)).a_);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_const_access_723(struct f_greenc_1fr *up_, P173 e_722) {
  struct f_is_const_access_723fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_722 = e_722;
F->y_2207 = NULL;
if ((G_NV((*(P173)rt_nil_check(F->e_722)).kind_) != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->y_2207 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_722)).name_)));
if ((F->y_2207 == NULL)) {
F->result_ = 0;
goto ret_;
} else if ((((G_NV((*(P116)rt_nil_check(F->y_2207)).kind_) != ((rt_int)2LL)) || (rt_rem(G_NV((*(P116)rt_nil_check(F->y_2207)).flags_), ((rt_int)2LL)) != ((rt_int)1LL))) || ((*(P116)rt_nil_check(F->y_2207)).t_ == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_2207)).t_)).kind_) == ((rt_int)8LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_lvalue_729(struct f_greenc_1fr *up_, P173 e_724, P139 *code_out_725, P121 *t_726, P177 *c_727, int *ro_728) {
  struct f_lvalue_729fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_724 = e_724;
F->code_out_725 = code_out_725;
F->t_726 = t_726;
F->c_727 = c_727;
F->ro_728 = ro_728;
F->cp_2208 = INT_MIN;
F->ex_2209 = NULL;
F->y_2210 = NULL;
F->base_2211 = NULL;
F->bt_2212 = NULL;
F->bc_2213 = NULL;
f_expanded_791(F->up, F->e_724, &F->ex_2209);
if ((F->ex_2209 != NULL)) {
f_lvalue_729(F->up, F->ex_2209, &(*F->code_out_725), &(*F->t_726), &(*F->c_727), &(*F->ro_728));
 (void)rt_range((*F->ro_728), 0, 1);
goto ret_;
}
if (((G_NV((*(P173)rt_nil_check(F->e_724)).kind_) == ((rt_int)5LL)) || ((G_NV((*(P173)rt_nil_check(F->e_724)).kind_) == ((rt_int)9LL)) && f_is_package_1012(F->up, (*(P173)rt_nil_check(F->e_724)).a_)))) {
if ((G_NV((*(P173)rt_nil_check(F->e_724)).ival_) > ((rt_int)0LL))) {
F->y_2210 = f_lookup_at_418(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_724)).name_)), rt_sub(G_NV((*(P173)rt_nil_check(F->e_724)).ival_), ((rt_int)1LL)));
} else if ((G_NV((*(P173)rt_nil_check(F->e_724)).kind_) == ((rt_int)9LL))) {
F->y_2210 = f_member_of_1016(F->up, f_path_of_338(F->up, (*(P173)rt_nil_check(F->e_724)).a_), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_724)).name_)), G_NV((*(P173)rt_nil_check(F->e_724)).line_));
} else {
F->y_2210 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_724)).name_)));
}
if ((F->y_2210 == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_724)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_724)).name_)), rt_g_lit(" is not declared", 16)));
}
if (((G_NV((*(P116)rt_nil_check(F->y_2210)).kind_) != ((rt_int)1LL)) && (G_NV((*(P116)rt_nil_check(F->y_2210)).kind_) != ((rt_int)2LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_724)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_724)).name_)), rt_g_lit(" is not an object", 17)));
}
f_access_of_710(F->up, F->y_2210, &(*F->code_out_725));
(*F->t_726) = (*(P116)rt_nil_check(F->y_2210)).t_;
(*F->c_727) = (*(P116)rt_nil_check(F->y_2210)).c_;
(*F->ro_728) = G_NV((*(P116)rt_nil_check(F->y_2210)).ro_);
} else if ((G_NV((*(P173)rt_nil_check(F->e_724)).kind_) == ((rt_int)15LL))) {
f_lvalue_729(F->up, (*(P173)rt_nil_check(F->e_724)).a_, &(*F->code_out_725), &(*F->t_726), &(*F->c_727), &(*F->ro_728));
 (void)rt_range((*F->ro_728), 0, 1);
} else if ((G_NV((*(P173)rt_nil_check(F->e_724)).kind_) == ((rt_int)9LL))) {
f_lvalue_729(F->up, (*(P173)rt_nil_check(F->e_724)).a_, &F->base_2211, &F->bt_2212, &F->bc_2213, &(*F->ro_728));
 (void)rt_range((*F->ro_728), 0, 1);
F->cp_2208 = ((G_NV((*(P121)rt_nil_check(F->bt_2212)).kind_) == ((rt_int)8LL)) && f_is_const_access_723(F->up, (*(P173)rt_nil_check(F->e_724)).a_));
f_select_on_738(F->up, (*(P139)rt_nil_check(F->base_2211)), F->bt_2212, F->e_724, &(*F->ro_728), 1, &(*F->code_out_725), &(*F->t_726), &(*F->c_727));
 (void)rt_range((*F->ro_728), 0, 1);
(*F->ro_728) = (G_NV((*F->ro_728)) || G_NV(F->cp_2208));
} else if ((G_NV((*(P173)rt_nil_check(F->e_724)).kind_) == ((rt_int)8LL))) {
f_lvalue_729(F->up, (*(P173)rt_nil_check(F->e_724)).a_, &F->base_2211, &F->bt_2212, &F->bc_2213, &(*F->ro_728));
 (void)rt_range((*F->ro_728), 0, 1);
F->cp_2208 = ((G_NV((*(P121)rt_nil_check(F->bt_2212)).kind_) == ((rt_int)8LL)) && f_is_const_access_723(F->up, (*(P173)rt_nil_check(F->e_724)).a_));
f_index_on_747(F->up, (*(P139)rt_nil_check(F->base_2211)), F->bt_2212, F->e_724, &(*F->ro_728), 1, &(*F->code_out_725), &(*F->t_726), &(*F->c_727));
 (void)rt_range((*F->ro_728), 0, 1);
(*F->ro_728) = (G_NV((*F->ro_728)) || G_NV(F->cp_2208));
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_724)).line_), rt_g_lit("not an object", 13));
}
ret_:

  return;
}

static void f_select_on_738(struct f_greenc_1fr *up_, rt_gstr base_730, P121 bt_731, P173 e_732, int *ro_733, int lv_734, P139 *code_out_735, P121 *t_736, P177 *c_737) {
  struct f_select_on_738fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_730 = cp_rt_gstr(base_730);
F->bt_731 = bt_731;
F->e_732 = e_732;
F->ro_733 = ro_733;
F->lv_734 = lv_734;
F->code_out_735 = code_out_735;
F->t_736 = t_736;
F->c_737 = c_737;
F->f_2214 = NULL;
F->d_2215 = NULL;
F->ct_2216 = NULL;
F->tmp_2217 = NULL;
(*F->c_737) = F->up->no_cons_204;
if ((G_NV((*(P121)rt_nil_check(F->bt_731)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_588(F->up, F->bt_731);
f_deref_719(F->up, F->base_730, F->bt_731, &F->d_2215);
(*F->ro_733) = 0;
if (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_732)).name_)), rt_g_lit("ALL", 3))) {
(*F->code_out_735) = F->d_2215;
(*F->t_736) = (*(P121)rt_nil_check(F->bt_731)).target_;
goto ret_;
}
f_select_on_738(F->up, (*(P139)rt_nil_check(F->d_2215)), (*(P121)rt_nil_check(F->bt_731)).target_, F->e_732, &(*F->ro_733), 1, &(*F->code_out_735), &(*F->t_736), &(*F->c_737));
 (void)rt_range((*F->ro_733), 0, 1);
goto ret_;
}
if ((G_NV((*(P121)rt_nil_check(F->bt_731)).kind_) == ((rt_int)7LL))) {
if ((G_NV((*(P121)rt_nil_check(F->bt_731)).priv_) && (!f_inside_package_1018(F->up, (*(P121)rt_nil_check(F->bt_731)).decl_)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_732)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the components of private type ", 31), f_kind_name_465(F->up, F->bt_731)), rt_g_lit(" are not visible here (RM79 7.4)", 32)));
}
F->f_2214 = (*(P121)rt_nil_check(F->bt_731)).fields_;
while ((F->f_2214 != NULL)) {
if (eq_rt_gstr((*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_2214)).name_)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_732)).name_)))) {
f_subst_cons_560(F->up, (*(P1767)rt_nil_check(F->f_2214)).c_, F->base_730, &(*F->c_737));
(*F->code_out_735) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(F->base_730, one_rt_gstr(46)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_732)).name_)))));
(*F->t_736) = (*(P1767)rt_nil_check(F->f_2214)).t_;
if (G_NV((*(P1767)rt_nil_check(F->f_2214)).is_const_)) {
(*F->ro_733) = 1;
}
if (((*(P1767)rt_nil_check(F->f_2214)).cond_ != NULL)) {
f_ctype_474(F->up, F->bt_731, &F->ct_2216);
f_new_name_224(F->up, rt_g_lit("vr", 2), &F->tmp_2217);
if (F->lv_734) {
(*F->code_out_735) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*({ ", 5), (*(P139)rt_nil_check(F->ct_2216))), rt_g_lit(" *", 2)), (*(P139)rt_nil_check(F->tmp_2217))), rt_g_lit(" = &(", 5)), F->base_730), rt_g_lit("); if (!(", 9)), f_subst_554(F->up, (*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_2214)).cond_)), cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*", 2), (*(P139)rt_nil_check(F->tmp_2217))), one_rt_gstr(41)))), rt_g_lit(")) rt_raise(RT_X_TAG); &", 24)), (*(P139)rt_nil_check(F->tmp_2217))), rt_g_lit("->", 2)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_732)).name_)))), rt_g_lit("; }))", 5)));
} else {
(*F->code_out_735) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P139)rt_nil_check(F->ct_2216))), one_rt_gstr(32)), (*(P139)rt_nil_check(F->tmp_2217))), rt_g_lit(" = ", 3)), F->base_730), rt_g_lit("; if (!(", 8)), f_subst_554(F->up, (*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_2214)).cond_)), (*(P139)rt_nil_check(F->tmp_2217)))), rt_g_lit(")) rt_raise(RT_X_TAG); ", 23)), (*(P139)rt_nil_check(F->tmp_2217))), one_rt_gstr(46)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_732)).name_)))), rt_g_lit("; })", 4)));
}
}
goto ret_;
}
F->f_2214 = (*(P1767)rt_nil_check(F->f_2214)).next_;
}
L_end_2218: ;
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_732)).line_), cat_rt_gstr(cat_rt_gstr(f_kind_name_465(F->up, F->bt_731), rt_g_lit(" has no component ", 18)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_732)).name_))));
}
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_732)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("cannot select ", 14), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_732)).name_))), rt_g_lit(" here", 5)));
ret_:

  return;
}

static void f_index_on_747(struct f_greenc_1fr *up_, rt_gstr base_739, P121 bt_740, P173 e_741, int *ro_742, int lv_743, P139 *code_out_744, P121 *t_745, P177 *c_746) {
  struct f_index_on_747fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_739 = cp_rt_gstr(base_739);
F->bt_740 = bt_740;
F->e_741 = e_741;
F->ro_742 = ro_742;
F->lv_743 = lv_743;
F->code_out_744 = code_out_744;
F->t_745 = t_745;
F->c_746 = c_746;
F->a_2219 = NULL;
F->a_2219 = (*(P173)rt_nil_check(F->e_741)).b_;
F->arrt_2220 = NULL;
F->arrt_2220 = F->bt_740;
F->acc_2221 = NULL;
F->acc_2221 = f_mk_221(F->up, F->base_739);
F->it_2222 = NULL;
F->i_2223 = NULL;
F->lo_2224 = NULL;
F->hi_2225 = NULL;
F->d_2226 = NULL;
F->ct_2227 = NULL;
F->tmp_2228 = NULL;
(*F->c_746) = F->up->no_cons_204;
if ((G_NV((*(P121)rt_nil_check(F->bt_740)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_588(F->up, F->bt_740);
f_deref_719(F->up, F->base_739, F->bt_740, &F->d_2226);
(*F->ro_742) = 0;
f_index_on_747(F->up, (*(P139)rt_nil_check(F->d_2226)), (*(P121)rt_nil_check(F->bt_740)).target_, F->e_741, &(*F->ro_742), F->lv_743, &(*F->code_out_744), &(*F->t_745), &(*F->c_746));
 (void)rt_range((*F->ro_742), 0, 1);
goto ret_;
}
if ((G_NV((*(P121)rt_nil_check(F->bt_740)).kind_) != ((rt_int)6LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_741)).line_), rt_g_lit("cannot index this", 17));
}
if ((F->a_2219 == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_741)).line_), rt_g_lit("an index is required", 20));
}
if ((((G_NV((*(P173)rt_nil_check(F->a_2219)).kind_) == ((rt_int)14LL)) || (G_NV((*(P173)rt_nil_check(F->a_2219)).kind_) == ((rt_int)80LL))) || ((G_NV((*(P173)rt_nil_check(F->a_2219)).kind_) == ((rt_int)5LL)) && f_is_type_name_752(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->a_2219)).name_)))))) {
if ((((*(P173)rt_nil_check(F->a_2219)).next_ != NULL) || (G_NV((*(P121)rt_nil_check(F->bt_740)).dims_) != ((rt_int)1LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_741)).line_), rt_g_lit("a slice is taken of a one-dimensional array (RM79 4.3)", 54));
}
f_discrete_bounds_504(F->up, F->a_2219, (*(P121)rt_nil_check(F->bt_740)).idx_, &F->it_2222, &F->lo_2224, &F->hi_2225);
f_check_type_469(F->up, F->it_2222, (*(P121)rt_nil_check(F->bt_740)).idx_, G_NV((*(P173)rt_nil_check(F->e_741)).line_));
f_ctype_474(F->up, F->bt_740, &F->d_2226);
f_new_name_224(F->up, rt_g_lit("sl", 2), &F->tmp_2228);
(*F->code_out_744) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P139)rt_nil_check(F->d_2226))), one_rt_gstr(32)), (*(P139)rt_nil_check(F->tmp_2228))), rt_g_lit(" = ", 3)), F->base_739), rt_g_lit("; rt_int l_ = ", 14)), (*(P139)rt_nil_check(F->lo_2224))), rt_g_lit(", h_ = ", 7)), (*(P139)rt_nil_check(F->hi_2225))), rt_g_lit("; if (l_ <= h_) { rt_index(l_, ", 31)), (*(P139)rt_nil_check(F->tmp_2228))), rt_g_lit(".lo, ", 5)), (*(P139)rt_nil_check(F->tmp_2228))), rt_g_lit(".hi); ", 6)), rt_g_lit("rt_index(h_, ", 13)), (*(P139)rt_nil_check(F->tmp_2228))), rt_g_lit(".lo, ", 5)), (*(P139)rt_nil_check(F->tmp_2228))), rt_g_lit(".hi); } ", 8)), (*(P139)rt_nil_check(F->tmp_2228))), rt_g_lit(".p += l_ - ", 11)), (*(P139)rt_nil_check(F->tmp_2228))), rt_g_lit(".lo; ", 5)), (*(P139)rt_nil_check(F->tmp_2228))), rt_g_lit(".lo = l_; ", 10)), (*(P139)rt_nil_check(F->tmp_2228))), rt_g_lit(".hi = h_; ", 10)), (*(P139)rt_nil_check(F->tmp_2228))), rt_g_lit("; })", 4)));
(*F->t_745) = F->bt_740;
(*F->ro_742) = 1;
goto ret_;
}
if ((f_list_len_301(F->up, F->a_2219) > G_NV((*(P121)rt_nil_check(F->bt_740)).dims_))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_741)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("too many indexes for ", 21), f_kind_name_465(F->up, F->bt_740)), rt_g_lit(" (RM79 4.1.1)", 13)));
}
while ((F->a_2219 != NULL)) {
f_gexpr_773(F->up, F->a_2219, (*(P121)rt_nil_check(F->arrt_2220)).idx_, &F->it_2222, &F->i_2223);
f_check_type_469(F->up, F->it_2222, (*(P121)rt_nil_check(F->arrt_2220)).idx_, G_NV((*(P173)rt_nil_check(F->e_741)).line_));
f_ctype_474(F->up, F->arrt_2220, &F->ct_2227);
f_new_name_224(F->up, rt_g_lit("ix", 2), &F->tmp_2228);
if (F->lv_743) {
F->acc_2221 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*({ ", 5), (*(P139)rt_nil_check(F->ct_2227))), rt_g_lit(" *", 2)), (*(P139)rt_nil_check(F->tmp_2228))), rt_g_lit(" = &(", 5)), (*(P139)rt_nil_check(F->acc_2221))), rt_g_lit("); &", 4)), (*(P139)rt_nil_check(F->tmp_2228))), rt_g_lit("->p[rt_index(", 13)), (*(P139)rt_nil_check(F->i_2223))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->tmp_2228))), rt_g_lit("->lo, ", 6)), (*(P139)rt_nil_check(F->tmp_2228))), rt_g_lit("->hi) - ", 8)), (*(P139)rt_nil_check(F->tmp_2228))), rt_g_lit("->lo]; }))", 10)));
} else {
F->acc_2221 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P139)rt_nil_check(F->ct_2227))), one_rt_gstr(32)), (*(P139)rt_nil_check(F->tmp_2228))), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->acc_2221))), rt_g_lit("; ", 2)), (*(P139)rt_nil_check(F->tmp_2228))), rt_g_lit(".p[rt_index(", 12)), (*(P139)rt_nil_check(F->i_2223))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->tmp_2228))), rt_g_lit(".lo, ", 5)), (*(P139)rt_nil_check(F->tmp_2228))), rt_g_lit(".hi) - ", 7)), (*(P139)rt_nil_check(F->tmp_2228))), rt_g_lit(".lo]; })", 8)));
}
(*F->c_746) = (*(P121)rt_nil_check(F->arrt_2220)).elemcons_;
F->arrt_2220 = (*(P121)rt_nil_check(F->arrt_2220)).elem_;
F->a_2219 = (*(P173)rt_nil_check(F->a_2219)).next_;
}
L_end_2229: ;
(*F->code_out_744) = F->acc_2221;
(*F->t_745) = F->arrt_2220;
if ((!F->lv_743)) {
(*F->ro_742) = 1;
}
ret_:

  return;
}

static int f_type_attribute_750(struct f_greenc_1fr *up_, P121 t_748, rt_gstr name_749) {
  struct f_type_attribute_750fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_748 = t_748;
F->name_749 = cp_rt_gstr(name_749);
F->y_2230 = NULL;
F->y_2230 = ({ A115 ix2231 = F->up->table_118; ix2231.p[rt_index(f_hash_407(F->up, F->name_749), ix2231.lo, ix2231.hi) - ix2231.lo]; });
F->p_2232 = NULL;
while ((F->y_2230 != NULL)) {
if ((eq_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2230)).name_)), F->name_749) && ((G_NV((*(P116)rt_nil_check(F->y_2230)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->y_2230)).kind_) == ((rt_int)4LL))))) {
if (f_same_429(F->up, (*(P116)rt_nil_check(F->y_2230)).result_, F->t_748)) {
F->result_ = 1;
goto ret_;
}
F->p_2232 = (*(P116)rt_nil_check(F->y_2230)).params_;
while ((F->p_2232 != NULL)) {
if (f_same_429(F->up, (*(P1752)rt_nil_check(F->p_2232)).t_, F->t_748)) {
F->result_ = 1;
goto ret_;
}
F->p_2232 = (*(P1752)rt_nil_check(F->p_2232)).next_;
}
L_end_2234: ;
}
F->y_2230 = (*(P116)rt_nil_check(F->y_2230)).chain_;
}
L_end_2233: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_type_name_752(struct f_greenc_1fr *up_, rt_gstr n_751) {
  struct f_is_type_name_752fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_751 = cp_rt_gstr(n_751);
F->y_2235 = NULL;
F->y_2235 = f_lookup_409(F->up, F->n_751);
if ((!(F->y_2235 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P116)rt_nil_check(F->y_2235)).kind_) == ((rt_int)5LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_char_lit_754(struct f_greenc_1fr *up_, P173 e_753) {
  struct f_is_char_lit_754fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_753 = e_753;
if ((!(G_NV((*(P173)rt_nil_check(F->e_753)).kind_) == ((rt_int)3LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (({ rt_gstr at2236 = (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_753)).name_)); at2236.hi >= at2236.lo ? at2236.hi - at2236.lo + 1 : (rt_int)0; }) == ((rt_int)1LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_enum_lit_756(struct f_greenc_1fr *up_, P173 e_755) {
  struct f_is_enum_lit_756fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_755 = e_755;
F->y_2237 = NULL;
if ((G_NV((*(P173)rt_nil_check(F->e_755)).kind_) != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->y_2237 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_755)).name_)));
if ((!(F->y_2237 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P116)rt_nil_check(F->y_2237)).kind_) == ((rt_int)7LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_c_string_758(struct f_greenc_1fr *up_, rt_gstr s_757) {
  struct f_c_string_758fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_757 = cp_rt_gstr(s_757);
F->n_2238 = INT64_MIN;
F->n_2238 = ((rt_int)0LL);
{ rt_int lo2242 = ((rt_int)1LL), hi2243 = ({ rt_gstr at2240 = F->s_757; at2240.hi >= at2240.lo ? at2240.hi - at2240.lo + 1 : (rt_int)0; });
for (rt_int it2244 = lo2242; it2244 <= hi2243; it2244++) {
F->i_2241 = it2244;
if ((((G_NV(({ rt_gstr ix2245 = F->s_757; ix2245.p[rt_index(F->i_2241, ix2245.lo, ix2245.hi) - ix2245.lo]; })) == 34) || (G_NV(({ rt_gstr ix2246 = F->s_757; ix2246.p[rt_index(F->i_2241, ix2246.lo, ix2246.hi) - ix2246.lo]; })) == 92)) || (G_NV(({ rt_gstr ix2247 = F->s_757; ix2247.p[rt_index(F->i_2241, ix2247.lo, ix2247.hi) - ix2247.lo]; })) == 63))) {
F->n_2238 = rt_add(G_NV(F->n_2238), ((rt_int)1LL));
}
}
}
L_end_2239: ;
{
F->r_2250.lo = ((rt_int)1LL); F->r_2250.hi = rt_add(rt_add(({ rt_gstr at2249 = F->s_757; at2249.hi >= at2249.lo ? at2249.hi - at2249.lo + 1 : (rt_int)0; }), G_NV(F->n_2238)), ((rt_int)2LL));
F->r_2250.lo2 = 1; F->r_2250.hi2 = 1;
F->r_2250.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->r_2250));
memset(F->r_2250.p, 0xFF, (size_t)G_CNT(F->r_2250));
F->j_2252 = INT64_MIN;
F->j_2252 = ((rt_int)1LL);
(*({ rt_gstr *ix2253 = &(F->r_2250); &ix2253->p[rt_index(((rt_int)1LL), ix2253->lo, ix2253->hi) - ix2253->lo]; })) = 34;
{ rt_int lo2257 = ((rt_int)1LL), hi2258 = ({ rt_gstr at2255 = F->s_757; at2255.hi >= at2255.lo ? at2255.hi - at2255.lo + 1 : (rt_int)0; });
for (rt_int it2259 = lo2257; it2259 <= hi2258; it2259++) {
F->i_2256 = it2259;
F->j_2252 = rt_add(G_NV(F->j_2252), ((rt_int)1LL));
if ((((G_NV(({ rt_gstr ix2260 = F->s_757; ix2260.p[rt_index(F->i_2256, ix2260.lo, ix2260.hi) - ix2260.lo]; })) == 34) || (G_NV(({ rt_gstr ix2261 = F->s_757; ix2261.p[rt_index(F->i_2256, ix2261.lo, ix2261.hi) - ix2261.lo]; })) == 92)) || (G_NV(({ rt_gstr ix2262 = F->s_757; ix2262.p[rt_index(F->i_2256, ix2262.lo, ix2262.hi) - ix2262.lo]; })) == 63))) {
(*({ rt_gstr *ix2263 = &(F->r_2250); &ix2263->p[rt_index(G_NV(F->j_2252), ix2263->lo, ix2263->hi) - ix2263->lo]; })) = 92;
F->j_2252 = rt_add(G_NV(F->j_2252), ((rt_int)1LL));
}
(*({ rt_gstr *ix2264 = &(F->r_2250); &ix2264->p[rt_index(G_NV(F->j_2252), ix2264->lo, ix2264->hi) - ix2264->lo]; })) = G_NV(({ rt_gstr ix2265 = F->s_757; ix2265.p[rt_index(F->i_2256, ix2265.lo, ix2265.hi) - ix2265.lo]; }));
}
}
L_end_2254: ;
(*({ rt_gstr *ix2266 = &(F->r_2250); &ix2266->p[rt_index(rt_add(G_NV(F->j_2252), ((rt_int)1LL)), ix2266->lo, ix2266->hi) - ix2266->lo]; })) = 34;
F->result_ = F->r_2250;
goto ret_;

}
L_end_2248: ;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_literal_760(struct f_greenc_1fr *up_, P173 e_759) {
  struct f_is_literal_760fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_759 = e_759;
if ((((G_NV((*(P173)rt_nil_check(F->e_759)).kind_) == ((rt_int)1LL)) || (G_NV((*(P173)rt_nil_check(F->e_759)).kind_) == ((rt_int)2LL))) || f_is_char_lit_754(F->up, F->e_759))) {
F->result_ = 1;
goto ret_;
} else if (((G_NV((*(P173)rt_nil_check(F->e_759)).kind_) == ((rt_int)15LL)) || ((G_NV((*(P173)rt_nil_check(F->e_759)).kind_) == ((rt_int)6LL)) && (!eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_759)).name_)), rt_g_lit("NOT", 3)))))) {
F->result_ = f_is_literal_760(F->up, (*(P173)rt_nil_check(F->e_759)).a_);
goto ret_;
} else if (((G_NV((*(P173)rt_nil_check(F->e_759)).kind_) == ((rt_int)7LL)) && (((((eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_759)).name_)), rt_g_lit("+", 1)) || eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_759)).name_)), rt_g_lit("-", 1))) || eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_759)).name_)), rt_g_lit("*", 1))) || eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_759)).name_)), rt_g_lit("/", 1))) || eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_759)).name_)), rt_g_lit("**", 2))) || eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_759)).name_)), rt_g_lit("MOD", 3))))) {
F->result_ = (f_is_literal_760(F->up, (*(P173)rt_nil_check(F->e_759)).a_) && f_is_literal_760(F->up, (*(P173)rt_nil_check(F->e_759)).b_));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_range_bounds_768(struct f_greenc_1fr *up_, P173 l_761, P173 h_762, P121 want_763, rt_int line_764, P121 *t_765, P139 *lo_766, P139 *hi_767) {
  struct f_range_bounds_768fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_761 = l_761;
F->h_762 = h_762;
F->want_763 = want_763;
F->line_764 = line_764;
F->t_765 = t_765;
F->lo_766 = lo_766;
F->hi_767 = hi_767;
F->w_2267 = NULL;
F->w_2267 = F->want_763;
F->t2_2268 = NULL;
if ((((F->w_2267 == NULL) && f_is_char_lit_754(F->up, F->l_761)) && f_is_char_lit_754(F->up, F->h_762))) {
F->w_2267 = F->up->ty_char_158;
}
if ((((F->w_2267 == NULL) && f_is_literal_760(F->up, F->l_761)) && (!f_is_literal_760(F->up, F->h_762)))) {
f_gexpr_773(F->up, F->h_762, NULL, &(*F->t_765), &(*F->hi_767));
f_gexpr_773(F->up, F->l_761, (*F->t_765), &F->t2_2268, &(*F->lo_766));
f_check_type_469(F->up, F->t2_2268, (*F->t_765), F->line_764);
} else {
f_gexpr_773(F->up, F->l_761, F->w_2267, &(*F->t_765), &(*F->lo_766));
f_gexpr_773(F->up, F->h_762, (*F->t_765), &F->t2_2268, &(*F->hi_767));
f_check_type_469(F->up, F->t2_2268, (*F->t_765), F->line_764);
}
ret_:

  return;
}

static void f_gexpr_773(struct f_greenc_1fr *up_, P173 e_769, P121 want_770, P121 *t_771, P139 *r_772) {
  struct f_gexpr_773fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_769 = e_769;
F->want_770 = want_770;
F->t_771 = t_771;
F->r_772 = r_772;
F->y_2269 = NULL;
F->bt_2270 = NULL;
F->c_2271 = NULL;
F->ro_2272 = INT_MIN;
F->base_2273 = NULL;
F->a_2274 = NULL;
F->nm_2275 = NULL;
F->saved_lv_2276 = INT_MIN;
F->saved_lv_2276 = G_NV(F->up->in_lv_path_213);
F->up->in_lv_path_213 = 0;
f_gexpr_1_778(F->up, F->e_769, F->want_770, &(*F->t_771), &(*F->r_772));
F->up->in_lv_path_213 = G_NV(F->saved_lv_2276);
ret_:

  return;
}

static void f_gexpr_1_778(struct f_greenc_1fr *up_, P173 e_774, P121 want_775, P121 *t_776, P139 *r_777) {
  struct f_gexpr_1_778fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_774 = e_774;
F->want_775 = want_775;
F->t_776 = t_776;
F->r_777 = r_777;
F->y_2277 = NULL;
F->bt_2278 = NULL;
F->c_2279 = NULL;
F->ro_2280 = INT_MIN;
F->base_2281 = NULL;
F->a_2282 = NULL;
F->nm_2283 = NULL;
F->c2_2284 = NULL;
(*F->t_776) = F->up->ty_int_155;
{ rt_int sel2285 = G_NV((*(P173)rt_nil_check(F->e_774)).kind_);
if (0 || sel2285 == ((rt_int)1LL)) {
if (((F->want_775 != NULL) && (G_NV((*(P121)rt_nil_check(F->want_775)).kind_) == ((rt_int)1LL)))) {
(*F->t_776) = F->want_775;
}
(*F->r_777) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV((*(P173)rt_nil_check(F->e_774)).ival_)))), rt_g_lit("LL)", 3)));
} else if (0 || sel2285 == ((rt_int)2LL)) {
(*F->t_776) = F->up->ty_float_157;
(*F->r_777) = (*(P173)rt_nil_check(F->e_774)).name_;
if (((F->want_775 != NULL) && (G_NV((*(P121)rt_nil_check(F->want_775)).kind_) == ((rt_int)3LL)))) {
(*F->t_776) = F->want_775;
} else if ((((F->want_775 != NULL) && (G_NV((*(P121)rt_nil_check(F->want_775)).kind_) == ((rt_int)16LL))) && ((*(P121)rt_nil_check(F->want_775)).fsmall_ != NULL))) {
(*F->t_776) = F->want_775;
(*F->r_777) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix(", 9), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_774)).name_))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->want_775)).fsmall_))), one_rt_gstr(41)));
}
} else if (0 || sel2285 == ((rt_int)3LL)) {
if (((f_is_char_lit_754(F->up, F->e_774) && (F->want_775 != NULL)) && ((G_NV((*(P121)rt_nil_check(F->want_775)).kind_) == ((rt_int)11LL)) || (G_NV((*(P121)rt_nil_check(F->want_775)).kind_) == ((rt_int)4LL))))) {
f_char_literal_788(F->up, F->e_774, F->want_775, &(*F->t_776), &(*F->r_777));
} else if ((((((F->want_775 != NULL) && (G_NV((*(P121)rt_nil_check(F->want_775)).kind_) == ((rt_int)6LL))) && (G_NV((*(P121)rt_nil_check(F->want_775)).dims_) == ((rt_int)1LL))) && ((G_NV((*(P121)rt_nil_check((*(P121)rt_nil_check(F->want_775)).elem_)).kind_) == ((rt_int)11LL)) || (G_NV((*(P121)rt_nil_check((*(P121)rt_nil_check(F->want_775)).elem_)).kind_) == ((rt_int)4LL)))) && (!f_is_string_551(F->up, F->want_775)))) {
f_string_aggregate_783(F->up, F->e_774, F->want_775, &(*F->t_776), &(*F->r_777));
} else {
(*F->t_776) = F->up->ty_string_159;
if (((F->want_775 != NULL) && f_is_string_551(F->up, F->want_775))) {
(*F->t_776) = F->want_775;
}
(*F->r_777) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_lit(", 9), f_c_string_758(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_774)).name_)))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(({ rt_gstr at2287 = (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_774)).name_)); at2287.hi >= at2287.lo ? at2287.hi - at2287.lo + 1 : (rt_int)0; })))), one_rt_gstr(41)));
}
} else if (0 || sel2285 == ((rt_int)4LL)) {
(*F->t_776) = F->up->ty_nil_161;
(*F->r_777) = f_mk_221(F->up, rt_g_lit("NULL", 4));
} else if (0 || sel2285 == ((rt_int)15LL)) {
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->e_774)).a_, F->want_775, &(*F->t_776), &(*F->r_777));
} else if (0 || sel2285 == ((rt_int)5LL)) {
f_gen_name_796(F->up, F->e_774, F->want_775, &(*F->t_776), &(*F->r_777));
} else if (0 || sel2285 == ((rt_int)6LL)) {
f_gen_unop_801(F->up, F->e_774, F->want_775, &(*F->t_776), &(*F->r_777));
} else if (0 || sel2285 == ((rt_int)7LL)) {
f_gen_binop_841(F->up, F->e_774, F->want_775, &(*F->t_776), &(*F->r_777));
} else if (0 || sel2285 == ((rt_int)8LL)) {
f_expanded_791(F->up, (*(P173)rt_nil_check(F->e_774)).a_, &F->nm_2283);
if ((F->nm_2283 != NULL)) {
F->c2_2284 = f_nn_295(F->up, ((rt_int)8LL), G_NV((*(P173)rt_nil_check(F->e_774)).line_));
as_R174(&(*(P173)rt_nil_check(F->c2_2284)), (*(P173)rt_nil_check(F->e_774)));
(*(P173)rt_nil_check(F->c2_2284)).a_ = F->nm_2283;
f_gexpr_773(F->up, F->c2_2284, F->want_775, &(*F->t_776), &(*F->r_777));
goto ret_;
}
if ((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_774)).a_)).kind_) == ((rt_int)5LL))) {
F->y_2277 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_774)).a_)).name_)));
if (((F->y_2277 == NULL) || (((G_NV((*(P116)rt_nil_check(F->y_2277)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->y_2277)).kind_) == ((rt_int)4LL))) || (G_NV((*(P116)rt_nil_check(F->y_2277)).kind_) == ((rt_int)10LL))))) {
F->up->call_want_209 = F->want_775;
f_gcall_976(F->up, F->e_774, 0, &(*F->t_776), &(*F->r_777));
goto ret_;
}
if ((G_NV((*(P116)rt_nil_check(F->y_2277)).kind_) == ((rt_int)5LL))) {
f_conversion_846(F->up, F->e_774, F->y_2277, &(*F->t_776), &(*F->r_777));
goto ret_;
}
} else if (((((((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_774)).a_)).kind_) == ((rt_int)9LL)) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_774)).a_)).a_)).kind_) == ((rt_int)8LL))) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_774)).a_)).a_)).a_)).kind_) == ((rt_int)5LL))) && f_is_task_name_1081(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_774)).a_)).a_)).a_)).name_)))) && (f_member_of_1016(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_774)).a_)).a_)).a_)).name_)), (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_774)).a_)).name_)), G_NV((*(P173)rt_nil_check(F->e_774)).line_)) != NULL)) && (G_NV((*(P116)rt_nil_check(f_member_of_1016(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_774)).a_)).a_)).a_)).name_)), (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_774)).a_)).name_)), G_NV((*(P173)rt_nil_check(F->e_774)).line_)))).kind_) == ((rt_int)3LL)))) {
F->up->call_want_209 = F->want_775;
f_gcall_976(F->up, F->e_774, 0, &(*F->t_776), &(*F->r_777));
goto ret_;
} else if ((((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_774)).a_)).kind_) == ((rt_int)9LL)) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_774)).a_)).a_)).kind_) == ((rt_int)5LL))) && f_is_type_name_752(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_774)).a_)).a_)).name_))))) {
F->up->call_want_209 = F->want_775;
f_gcall_976(F->up, F->e_774, 0, &(*F->t_776), &(*F->r_777));
goto ret_;
} else if (((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_774)).a_)).kind_) == ((rt_int)9LL)) && f_is_package_1012(F->up, (*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_774)).a_)).a_))) {
F->y_2277 = f_member_of_1016(F->up, f_path_of_338(F->up, (*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_774)).a_)).a_), (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_774)).a_)).name_)), G_NV((*(P173)rt_nil_check(F->e_774)).line_));
if (((F->y_2277 != NULL) && (((G_NV((*(P116)rt_nil_check(F->y_2277)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->y_2277)).kind_) == ((rt_int)4LL))) || (G_NV((*(P116)rt_nil_check(F->y_2277)).kind_) == ((rt_int)10LL))))) {
F->up->call_want_209 = F->want_775;
f_gcall_976(F->up, F->e_774, 0, &(*F->t_776), &(*F->r_777));
goto ret_;
}
}
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->e_774)).a_, NULL, &F->bt_2278, &F->base_2281);
F->ro_2280 = 1;
f_index_on_747(F->up, (*(P139)rt_nil_check(F->base_2281)), F->bt_2278, F->e_774, &F->ro_2280, 0, &(*F->r_777), &(*F->t_776), &F->c_2279);
 (void)rt_range(F->ro_2280, 0, 1);
if ((f_is_numeric_436(F->up, (*F->t_776)) || f_is_discrete_438(F->up, (*F->t_776)))) {
(*F->r_777) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("G_NV(", 5), (*(P139)rt_nil_check((*F->r_777)))), one_rt_gstr(41)));
}
} else if (0 || sel2285 == ((rt_int)9LL)) {
f_expanded_791(F->up, F->e_774, &F->nm_2283);
if ((F->nm_2283 != NULL)) {
f_gen_name_796(F->up, F->nm_2283, F->want_775, &(*F->t_776), &(*F->r_777));
goto ret_;
}
if (((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_774)).a_)).kind_) == ((rt_int)5LL)) && f_is_type_name_752(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_774)).a_)).name_))))) {
F->nm_2283 = f_nn_295(F->up, ((rt_int)8LL), G_NV((*(P173)rt_nil_check(F->e_774)).line_));
(*(P173)rt_nil_check(F->nm_2283)).a_ = F->e_774;
F->up->call_want_209 = F->want_775;
f_gcall_976(F->up, F->nm_2283, 0, &(*F->t_776), &(*F->r_777));
goto ret_;
}
if (f_is_package_1012(F->up, (*(P173)rt_nil_check(F->e_774)).a_)) {
F->nm_2283 = f_nn_295(F->up, ((rt_int)5LL), G_NV((*(P173)rt_nil_check(F->e_774)).line_));
(*(P173)rt_nil_check(F->nm_2283)).name_ = (*(P173)rt_nil_check(F->e_774)).name_;
(*(P173)rt_nil_check(F->nm_2283)).tag_ = f_mk_221(F->up, f_path_of_338(F->up, (*(P173)rt_nil_check(F->e_774)).a_));
f_gen_name_796(F->up, F->nm_2283, F->want_775, &(*F->t_776), &(*F->r_777));
goto ret_;
}
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->e_774)).a_, NULL, &F->bt_2278, &F->base_2281);
F->ro_2280 = 1;
f_select_on_738(F->up, (*(P139)rt_nil_check(F->base_2281)), F->bt_2278, F->e_774, &F->ro_2280, 0, &(*F->r_777), &(*F->t_776), &F->c_2279);
 (void)rt_range(F->ro_2280, 0, 1);
if ((f_is_numeric_436(F->up, (*F->t_776)) || f_is_discrete_438(F->up, (*F->t_776)))) {
(*F->r_777) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("G_NV(", 5), (*(P139)rt_nil_check((*F->r_777)))), one_rt_gstr(41)));
}
} else if (0 || sel2285 == ((rt_int)10LL)) {
f_gen_attr_862(F->up, F->e_774, F->want_775, &(*F->t_776), &(*F->r_777));
} else if (0 || sel2285 == ((rt_int)11LL)) {
f_allocator_914(F->up, F->e_774, F->want_775, &(*F->t_776), &(*F->r_777));
} else if (0 || sel2285 == ((rt_int)12LL)) {
f_aggregate_919(F->up, F->e_774, F->want_775, &(*F->t_776), &(*F->r_777));
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_774)).line_), rt_g_lit("this expression is not handled", 30));
}
}
ret_:

  return;
}

static void f_string_aggregate_783(struct f_greenc_1fr *up_, P173 e_779, P121 want_780, P121 *t_781, P139 *r_782) {
  struct f_string_aggregate_783fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_779 = e_779;
F->want_780 = want_780;
F->t_781 = t_781;
F->r_782 = r_782;
F->ag_2288 = NULL;
F->it_2289 = NULL;
F->tail_2290 = NULL;
F->l_2291 = NULL;
F->ag_2288 = f_nn_295(F->up, ((rt_int)12LL), G_NV((*(P173)rt_nil_check(F->e_779)).line_));
{ rt_int lo2295 = ((rt_int)1LL), hi2296 = ({ rt_gstr at2293 = (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_779)).name_)); at2293.hi >= at2293.lo ? at2293.hi - at2293.lo + 1 : (rt_int)0; });
for (rt_int it2297 = lo2295; it2297 <= hi2296; it2297++) {
F->k_2294 = it2297;
F->l_2291 = f_nn_295(F->up, ((rt_int)3LL), G_NV((*(P173)rt_nil_check(F->e_779)).line_));
(*(P173)rt_nil_check(F->l_2291)).name_ = f_mk_221(F->up, ({ rt_gstr sl2299 = (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_779)).name_)); rt_int l_ = F->k_2294, h_ = F->k_2294; if (l_ <= h_) { rt_index(l_, sl2299.lo, sl2299.hi); rt_index(h_, sl2299.lo, sl2299.hi); } sl2299.p += l_ - sl2299.lo; sl2299.lo = l_; sl2299.hi = h_; sl2299; }));
F->it_2289 = f_nn_295(F->up, ((rt_int)13LL), G_NV((*(P173)rt_nil_check(F->e_779)).line_));
(*(P173)rt_nil_check(F->it_2289)).b_ = F->l_2291;
if ((F->tail_2290 == NULL)) {
(*(P173)rt_nil_check(F->ag_2288)).a_ = F->it_2289;
} else {
(*(P173)rt_nil_check(F->tail_2290)).next_ = F->it_2289;
}
F->tail_2290 = F->it_2289;
}
}
L_end_2292: ;
if (((*(P173)rt_nil_check(F->ag_2288)).a_ == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_779)).line_), cat_rt_gstr(rt_g_lit("an empty string is not an aggregate of ", 39), f_kind_name_465(F->up, F->want_780)));
}
f_aggregate_919(F->up, F->ag_2288, F->want_780, &(*F->t_781), &(*F->r_782));
ret_:

  return;
}

static void f_char_literal_788(struct f_greenc_1fr *up_, P173 e_784, P121 want_785, P121 *t_786, P139 *r_787) {
  struct f_char_literal_788fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_784 = e_784;
F->want_785 = want_785;
F->t_786 = t_786;
F->r_787 = r_787;
F->i_2300 = INT64_MIN;
if ((G_NV((*(P121)rt_nil_check(F->want_785)).kind_) == ((rt_int)11LL))) {
(*F->t_786) = F->want_785;
(*F->r_787) = f_mk_221(F->up, rt_g_s2g(rt_str_of_int(rt_sub(((rt_int)(G_NV(({ rt_gstr ix2302 = (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_784)).name_)); ix2302.p[rt_index(((rt_int)1LL), ix2302.lo, ix2302.hi) - ix2302.lo]; }))) + 1), ((rt_int)1LL)))));
goto ret_;
}
F->i_2300 = f_lit_index_482(F->up, (*(P121)rt_nil_check(F->want_785)).lits_, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_784)).name_)));
if ((G_NV(F->i_2300) < ((rt_int)0LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_784)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(34), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_784)).name_))), rt_g_lit("\" is not a literal of ", 22)), f_kind_name_465(F->up, F->want_785)));
}
(*F->t_786) = F->want_785;
(*F->r_787) = f_mk_221(F->up, rt_g_s2g(rt_str_of_int(G_NV(F->i_2300))));
ret_:

  return;
}

static void f_expanded_791(struct f_greenc_1fr *up_, P173 e_789, P173 *r_790) {
  struct f_expanded_791fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_789 = e_789;
F->r_790 = r_790;
F->y_2303 = NULL;
F->d_2304 = INT64_MIN;
(*F->r_790) = NULL;
if (((G_NV((*(P173)rt_nil_check(F->e_789)).kind_) != ((rt_int)9LL)) || (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_789)).a_)).kind_) != ((rt_int)5LL)))) {
goto ret_;
}
F->d_2304 = f_enclosing_depth_420(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_789)).a_)).name_)));
if ((G_NV(F->d_2304) < ((rt_int)0LL))) {
goto ret_;
}
F->y_2303 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_789)).a_)).name_)));
if (((F->y_2303 != NULL) && ((((G_NV((*(P116)rt_nil_check(F->y_2303)).kind_) == ((rt_int)1LL)) || (G_NV((*(P116)rt_nil_check(F->y_2303)).kind_) == ((rt_int)2LL))) || (G_NV((*(P116)rt_nil_check(F->y_2303)).kind_) == ((rt_int)8LL))) || (G_NV((*(P116)rt_nil_check(F->y_2303)).kind_) == ((rt_int)9LL))))) {
goto ret_;
}
if ((f_lookup_at_418(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_789)).name_)), G_NV(F->d_2304)) == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_789)).line_), cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_789)).name_)), rt_g_lit(" is not declared in ", 20)), (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_789)).a_)).name_))));
}
(*F->r_790) = f_nn_295(F->up, ((rt_int)5LL), G_NV((*(P173)rt_nil_check(F->e_789)).line_));
(*(P173)rt_nil_check((*F->r_790))).name_ = (*(P173)rt_nil_check(F->e_789)).name_;
(*(P173)rt_nil_check((*F->r_790))).ival_ = rt_add(G_NV(F->d_2304), ((rt_int)1LL));
ret_:

  return;
}

static void f_gen_name_796(struct f_greenc_1fr *up_, P173 e_792, P121 want_793, P121 *t_794, P139 *r_795) {
  struct f_gen_name_796fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_792 = e_792;
F->want_793 = want_793;
F->t_794 = t_794;
F->r_795 = r_795;
F->y_2305 = NULL;
F->y_2305 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_792)).name_)));
F->z_2306 = NULL;
F->call_2307 = NULL;
if ((G_NV((*(P173)rt_nil_check(F->e_792)).ival_) > ((rt_int)0LL))) {
F->y_2305 = f_lookup_at_418(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_792)).name_)), rt_sub(G_NV((*(P173)rt_nil_check(F->e_792)).ival_), ((rt_int)1LL)));
}
if (((*(P173)rt_nil_check(F->e_792)).tag_ != NULL)) {
F->y_2305 = f_member_of_1016(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_792)).tag_)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_792)).name_)), G_NV((*(P173)rt_nil_check(F->e_792)).line_));
}
if ((F->y_2305 == NULL)) {
if ((eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_792)).name_)), rt_g_lit("PUT", 3)) || eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_792)).name_)), rt_g_lit("GET", 3)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_792)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_792)).name_)), rt_g_lit(" needs an item", 14)));
}
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_792)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_792)).name_)), rt_g_lit(" is not declared", 16)));
}
if (((G_NV((*(P116)rt_nil_check(F->y_2305)).kind_) == ((rt_int)2LL)) && G_NV((*(P116)rt_nil_check(F->y_2305)).hasmv_))) {
(*F->t_794) = (*(P116)rt_nil_check(F->y_2305)).t_;
(*F->r_795) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV((*(P116)rt_nil_check(F->y_2305)).mvalue_)))), rt_g_lit("LL)", 3)));
goto ret_;
}
if (((G_NV((*(P116)rt_nil_check(F->y_2305)).kind_) == ((rt_int)2LL)) && (G_NV((*(P116)rt_nil_check(F->y_2305)).flags_) == rt_add(((rt_int)1LL), ((rt_int)2LL))))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_792)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("deferred constant ", 18), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2305)).name_))), rt_g_lit(" is used before its full declaration (RM79 7.4)", 47)));
}
if (((G_NV((*(P116)rt_nil_check(F->y_2305)).kind_) == ((rt_int)1LL)) || (G_NV((*(P116)rt_nil_check(F->y_2305)).kind_) == ((rt_int)2LL)))) {
(*F->t_794) = (*(P116)rt_nil_check(F->y_2305)).t_;
f_access_of_710(F->up, F->y_2305, &(*F->r_795));
if (((G_NV((*(P116)rt_nil_check(F->y_2305)).kind_) == ((rt_int)1LL)) && (f_is_numeric_436(F->up, (*F->t_794)) || f_is_discrete_438(F->up, (*F->t_794))))) {
(*F->r_795) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("G_NV(", 5), (*(P139)rt_nil_check((*F->r_795)))), one_rt_gstr(41)));
}
goto ret_;
}
if ((G_NV((*(P116)rt_nil_check(F->y_2305)).kind_) == ((rt_int)7LL))) {
F->z_2306 = F->y_2305;
if ((F->want_793 != NULL)) {
while ((F->z_2306 != NULL)) {
if (((eq_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->z_2306)).name_)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_792)).name_))) && (G_NV((*(P116)rt_nil_check(F->z_2306)).kind_) == ((rt_int)7LL))) && f_same_429(F->up, (*(P116)rt_nil_check(F->z_2306)).t_, F->want_793))) {
goto L_end_2308;
}
F->z_2306 = (*(P116)rt_nil_check(F->z_2306)).chain_;
}
L_end_2308: ;
if ((F->z_2306 == NULL)) {
F->z_2306 = F->y_2305;
}
}
(*F->t_794) = (*(P116)rt_nil_check(F->z_2306)).t_;
(*F->r_795) = f_mk_221(F->up, rt_g_s2g(rt_str_of_int(G_NV((*(P116)rt_nil_check(F->z_2306)).mvalue_))));
goto ret_;
}
if ((((G_NV((*(P116)rt_nil_check(F->y_2305)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->y_2305)).kind_) == ((rt_int)4LL))) || (G_NV((*(P116)rt_nil_check(F->y_2305)).kind_) == ((rt_int)10LL)))) {
F->call_2307 = f_nn_295(F->up, ((rt_int)8LL), G_NV((*(P173)rt_nil_check(F->e_792)).line_));
(*(P173)rt_nil_check(F->call_2307)).a_ = F->e_792;
F->up->call_want_209 = F->want_793;
f_gcall_976(F->up, F->call_2307, 0, &(*F->t_794), &(*F->r_795));
goto ret_;
}
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_792)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_792)).name_)), rt_g_lit(" cannot be used as a value", 26)));
ret_:

  return;
}

static void f_gen_unop_801(struct f_greenc_1fr *up_, P173 e_797, P121 want_798, P121 *t_799, P139 *r_800) {
  struct f_gen_unop_801fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_797 = e_797;
F->want_798 = want_798;
F->t_799 = t_799;
F->r_800 = r_800;
F->a_2309 = NULL;
F->x_2310 = NULL;
F->done_2311 = INT_MIN;
f_user_operator_1063(F->up, F->e_797, F->want_798, &(*F->t_799), &(*F->r_800), &F->done_2311);
 (void)rt_range(F->done_2311, 0, 1);
if (G_NV(F->done_2311)) {
goto ret_;
}
if (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_797)).name_)), rt_g_lit("NOT", 3))) {
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->e_797)).a_, F->want_798, &(*F->t_799), &F->a_2309);
if (((G_NV((*(P121)rt_nil_check((*F->t_799))).kind_) == ((rt_int)6LL)) && ((G_NV((*(P121)rt_nil_check((*F->t_799))).dims_) == ((rt_int)1LL)) && (G_NV((*(P121)rt_nil_check((*(P121)rt_nil_check((*F->t_799))).elem_)).kind_) == ((rt_int)2LL))))) {
f_ctype_474(F->up, (*F->t_799), &F->x_2310);
(*F->r_800) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("not_", 4), (*(P139)rt_nil_check(F->x_2310))), one_rt_gstr(40)), (*(P139)rt_nil_check(F->a_2309))), one_rt_gstr(41)));
goto ret_;
}
if ((G_NV((*(P121)rt_nil_check((*F->t_799))).kind_) != ((rt_int)2LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_797)).line_), rt_g_lit("operator not applies to boolean values and arrays (RM79 4.5.1)", 62));
}
(*F->r_800) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!", 2), (*(P139)rt_nil_check(F->a_2309))), one_rt_gstr(41)));
goto ret_;
}
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->e_797)).a_, F->want_798, &(*F->t_799), &F->a_2309);
if ((!f_is_numeric_436(F->up, (*F->t_799)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_797)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("unary ", 6), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_797)).name_))), rt_g_lit(" applies to numeric values (RM79 4.5.4)", 39)));
}
if (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_797)).name_)), rt_g_lit("+", 1))) {
(*F->r_800) = F->a_2309;
} else if (((G_NV((*(P121)rt_nil_check((*F->t_799))).kind_) == ((rt_int)3LL)) || (G_NV((*(P121)rt_nil_check((*F->t_799))).kind_) == ((rt_int)16LL)))) {
(*F->r_800) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(-", 2), (*(P139)rt_nil_check(F->a_2309))), one_rt_gstr(41)));
} else {
(*F->r_800) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_neg(", 7), (*(P139)rt_nil_check(F->a_2309))), one_rt_gstr(41)));
}
ret_:

  return;
}

static int f_short_int_803(struct f_greenc_1fr *up_, P121 t_802) {
  struct f_short_int_803fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_802 = t_802;
if ((!(G_NV((*(P121)rt_nil_check(F->t_802)).kind_) == ((rt_int)1LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (f_root_431(F->up, F->t_802) == F->up->ty_short_166);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_float_kind_805(struct f_greenc_1fr *up_, P121 t_804) {
  struct f_float_kind_805fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_804 = t_804;
if ((f_root_431(F->up, F->t_804) == F->up->ty_sfloat_168)) {
F->result_ = rt_g_lit("1", 1);
goto ret_;
}
F->result_ = rt_g_lit("0", 1);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_membership_808(struct f_greenc_1fr *up_, P173 e_806, P139 *r_807) {
  struct f_membership_808fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_806 = e_806;
F->r_807 = r_807;
F->ta_2312 = NULL;
F->tb_2313 = NULL;
F->tt_2314 = NULL;
F->a_2315 = NULL;
F->lo_2316 = NULL;
F->hi_2317 = NULL;
F->ct_2318 = NULL;
F->c_2319 = NULL;
F->d_2320 = NULL;
if ((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_806)).b_)).kind_) == ((rt_int)14LL))) {
if (f_is_literal_760(F->up, (*(P173)rt_nil_check(F->e_806)).a_)) {
f_range_bounds_768(F->up, (*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_806)).b_)).a_, (*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_806)).b_)).b_, NULL, G_NV((*(P173)rt_nil_check(F->e_806)).line_), &F->tt_2314, &F->lo_2316, &F->hi_2317);
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->e_806)).a_, F->tt_2314, &F->ta_2312, &F->a_2315);
} else {
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->e_806)).a_, NULL, &F->ta_2312, &F->a_2315);
f_range_bounds_768(F->up, (*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_806)).b_)).a_, (*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_806)).b_)).b_, F->ta_2312, G_NV((*(P173)rt_nil_check(F->e_806)).line_), &F->tt_2314, &F->lo_2316, &F->hi_2317);
}
f_check_type_469(F->up, F->tt_2314, F->ta_2312, G_NV((*(P173)rt_nil_check(F->e_806)).line_));
if (((!f_is_numeric_436(F->up, F->ta_2312)) && (!f_is_discrete_438(F->up, F->ta_2312)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_806)).line_), rt_g_lit("a range applies to scalar values (RM79 4.5.2)", 45));
}
f_ctype_474(F->up, F->ta_2312, &F->ct_2318);
(*F->r_807) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P139)rt_nil_check(F->ct_2318))), rt_g_lit(" m_ = ", 6)), (*(P139)rt_nil_check(F->a_2315))), rt_g_lit("; m_ >= ", 8)), (*(P139)rt_nil_check(F->lo_2316))), rt_g_lit(" && m_ <= ", 10)), (*(P139)rt_nil_check(F->hi_2317))), rt_g_lit("; })", 4)));
goto ret_;
}
f_resolve_490(F->up, (*(P173)rt_nil_check(F->e_806)).b_, &F->tt_2314, &F->c_2319);
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->e_806)).a_, F->tt_2314, &F->ta_2312, &F->a_2315);
f_check_type_469(F->up, F->ta_2312, F->tt_2314, G_NV((*(P173)rt_nil_check(F->e_806)).line_));
f_ctype_474(F->up, F->ta_2312, &F->ct_2318);
if (((f_is_numeric_436(F->up, F->ta_2312) || f_is_discrete_438(F->up, F->ta_2312)) && ((*(P177)rt_nil_check(F->c_2319)).lo_ != NULL))) {
(*F->r_807) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P139)rt_nil_check(F->ct_2318))), rt_g_lit(" m_ = ", 6)), (*(P139)rt_nil_check(F->a_2315))), rt_g_lit("; m_ >= ", 8)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_2319)).lo_))), rt_g_lit(" && m_ <= ", 10)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_2319)).hi_))), rt_g_lit("; })", 4)));
} else if (((G_NV((*(P121)rt_nil_check(F->ta_2312)).kind_) == ((rt_int)6LL)) && ((*(P177)rt_nil_check(F->c_2319)).lo_ != NULL))) {
(*F->r_807) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P139)rt_nil_check(F->ct_2318))), rt_g_lit(" m_ = ", 6)), (*(P139)rt_nil_check(F->a_2315))), rt_g_lit("; m_.lo == ", 11)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_2319)).lo_))), rt_g_lit(" && m_.hi == ", 13)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_2319)).hi_))), rt_g_lit("; })", 4)));
} else if (((G_NV((*(P121)rt_nil_check(F->ta_2312)).kind_) == ((rt_int)7LL)) && f_discriminated_463(F->up, F->c_2319))) {
(*F->r_807) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P139)rt_nil_check(F->ct_2318))), rt_g_lit(" m_ = ", 6)), (*(P139)rt_nil_check(F->a_2315))), rt_g_lit("; 1", 3)));
F->d_2320 = (*(P177)rt_nil_check(F->c_2319)).dv_;
while ((F->d_2320 != NULL)) {
(*F->r_807) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*F->r_807))), rt_g_lit(" && m_.", 7)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1771)rt_nil_check(F->d_2320)).name_)))), rt_g_lit(" == (", 5)), (*(P139)rt_nil_check((*(P1771)rt_nil_check(F->d_2320)).v_))), one_rt_gstr(41)));
F->d_2320 = (*(P1771)rt_nil_check(F->d_2320)).next_;
}
L_end_2321: ;
(*F->r_807) = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check((*F->r_807))), rt_g_lit("; })", 4)));
} else {
(*F->r_807) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ (void)(", 10), (*(P139)rt_nil_check(F->a_2315))), rt_g_lit("); 1; })", 8)));
}
ret_:

  return;
}

static void f_condition_813(struct f_greenc_1fr *up_, P173 e_809, P121 want_810, P121 *t_811, P139 *r_812) {
  struct f_condition_813fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_809 = e_809;
F->want_810 = want_810;
F->t_811 = t_811;
F->r_812 = r_812;
F->a_2322 = NULL;
F->b_2323 = NULL;
F->tb_2324 = NULL;
if (((G_NV((*(P173)rt_nil_check(F->e_809)).kind_) == ((rt_int)7LL)) && (G_NV((*(P173)rt_nil_check(F->e_809)).ival_) == ((rt_int)1LL)))) {
f_condition_813(F->up, (*(P173)rt_nil_check(F->e_809)).a_, F->up->ty_bool_156, &(*F->t_811), &F->a_2322);
f_check_type_469(F->up, (*F->t_811), F->up->ty_bool_156, G_NV((*(P173)rt_nil_check(F->e_809)).line_));
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->e_809)).b_, F->up->ty_bool_156, &F->tb_2324, &F->b_2323);
f_check_type_469(F->up, F->tb_2324, F->up->ty_bool_156, G_NV((*(P173)rt_nil_check(F->e_809)).line_));
(*F->t_811) = F->up->ty_bool_156;
if (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_809)).name_)), rt_g_lit("AND", 3))) {
(*F->r_812) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->a_2322))), rt_g_lit(" && ", 4)), (*(P139)rt_nil_check(F->b_2323))), one_rt_gstr(41)));
} else {
(*F->r_812) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->a_2322))), rt_g_lit(" || ", 4)), (*(P139)rt_nil_check(F->b_2323))), one_rt_gstr(41)));
}
goto ret_;
}
f_gexpr_773(F->up, F->e_809, F->up->ty_bool_156, &(*F->t_811), &(*F->r_812));
ret_:

  return;
}

static void f_catenation_818(struct f_greenc_1fr *up_, P173 e_814, P121 want_815, P121 *t_816, P139 *r_817) {
  struct f_catenation_818fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_814 = e_814;
F->want_815 = want_815;
F->t_816 = t_816;
F->r_817 = r_817;
F->arrt_2325 = NULL;
F->ta_2326 = NULL;
F->tb_2327 = NULL;
F->a_2328 = NULL;
F->b_2329 = NULL;
F->ct_2330 = NULL;
if ((((F->want_815 != NULL) && (G_NV((*(P121)rt_nil_check(F->want_815)).kind_) == ((rt_int)6LL))) && (G_NV((*(P121)rt_nil_check(F->want_815)).dims_) == ((rt_int)1LL)))) {
F->arrt_2325 = F->want_815;
} else {
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->e_814)).a_, NULL, &F->ta_2326, &F->a_2328);
if (((G_NV((*(P121)rt_nil_check(F->ta_2326)).kind_) == ((rt_int)6LL)) && (G_NV((*(P121)rt_nil_check(F->ta_2326)).dims_) == ((rt_int)1LL)))) {
F->arrt_2325 = F->ta_2326;
} else {
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->e_814)).b_, NULL, &F->tb_2327, &F->b_2329);
if (((G_NV((*(P121)rt_nil_check(F->tb_2327)).kind_) == ((rt_int)6LL)) && (G_NV((*(P121)rt_nil_check(F->tb_2327)).dims_) == ((rt_int)1LL)))) {
F->arrt_2325 = F->tb_2327;
} else if (((G_NV((*(P121)rt_nil_check(F->ta_2326)).kind_) == ((rt_int)11LL)) && (G_NV((*(P121)rt_nil_check(F->tb_2327)).kind_) == ((rt_int)11LL)))) {
F->arrt_2325 = F->up->ty_string_159;
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_814)).line_), rt_g_lit("& catenates one-dimensional arrays and their components (RM79 4.5.3)", 68));
}
}
}
f_ctype_474(F->up, F->arrt_2325, &F->ct_2330);
f_cat_operand_823(F->up, (*(P173)rt_nil_check(F->e_814)).a_, F->arrt_2325, G_NV((*(P173)rt_nil_check(F->e_814)).line_), &F->a_2328);
f_cat_operand_823(F->up, (*(P173)rt_nil_check(F->e_814)).b_, F->arrt_2325, G_NV((*(P173)rt_nil_check(F->e_814)).line_), &F->b_2329);
(*F->t_816) = F->arrt_2325;
(*F->r_817) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("cat_", 4), (*(P139)rt_nil_check(F->ct_2330))), one_rt_gstr(40)), (*(P139)rt_nil_check(F->a_2328))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->b_2329))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_cat_operand_823(struct f_greenc_1fr *up_, P173 x_819, P121 arrt_820, rt_int line_821, P139 *r_822) {
  struct f_cat_operand_823fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_819 = x_819;
F->arrt_820 = arrt_820;
F->line_821 = line_821;
F->r_822 = r_822;
F->tx_2331 = NULL;
F->ct_2332 = NULL;
if ((f_is_char_lit_754(F->up, F->x_819) && (G_NV((*(P121)rt_nil_check((*(P121)rt_nil_check(F->arrt_820)).elem_)).kind_) == ((rt_int)11LL)))) {
f_gexpr_773(F->up, F->x_819, (*(P121)rt_nil_check(F->arrt_820)).elem_, &F->tx_2331, &(*F->r_822));
} else {
f_gexpr_773(F->up, F->x_819, F->arrt_820, &F->tx_2331, &(*F->r_822));
}
if (f_same_429(F->up, F->tx_2331, F->arrt_820)) {
goto ret_;
}
if (f_same_429(F->up, F->tx_2331, (*(P121)rt_nil_check(F->arrt_820)).elem_)) {
f_ctype_474(F->up, F->arrt_820, &F->ct_2332);
(*F->r_822) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("one_", 4), (*(P139)rt_nil_check(F->ct_2332))), one_rt_gstr(40)), (*(P139)rt_nil_check((*F->r_822)))), one_rt_gstr(41)));
goto ret_;
}
f_fail_242(F->up, F->line_821, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("type mismatch: ", 15), f_kind_name_465(F->up, F->tx_2331)), rt_g_lit(" in a catenation of ", 20)), f_kind_name_465(F->up, F->arrt_820)), rt_g_lit(" (RM79 4.5.3)", 13)));
ret_:

  return;
}

static void f_arithmetic_828(struct f_greenc_1fr *up_, P173 e_824, P121 want_825, P121 *t_826, P139 *r_827) {
  struct f_arithmetic_828fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_824 = e_824;
F->want_825 = want_825;
F->t_826 = t_826;
F->r_827 = r_827;
F->op_2333 = cp_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_824)).name_)));
F->ta_2334 = NULL;
F->tb_2335 = NULL;
F->hint_2336 = NULL;
F->a_2337 = NULL;
F->b_2338 = NULL;
if (eq_rt_gstr(F->op_2333, rt_g_lit("**", 2))) {
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->e_824)).a_, F->want_825, &F->ta_2334, &F->a_2337);
F->hint_2336 = F->up->ty_int_155;
if ((G_NV((*(P121)rt_nil_check(F->ta_2334)).kind_) == ((rt_int)1LL))) {
F->hint_2336 = F->ta_2334;
}
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->e_824)).b_, F->hint_2336, &F->tb_2335, &F->b_2338);
if ((G_NV((*(P121)rt_nil_check(F->tb_2335)).kind_) != ((rt_int)1LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_824)).line_), rt_g_lit("the exponent of ** is an integer (RM79 4.5.6)", 45));
}
(*F->t_826) = F->ta_2334;
if ((G_NV((*(P121)rt_nil_check(F->ta_2334)).kind_) == ((rt_int)1LL))) {
(*F->r_827) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_pow(", 7), (*(P139)rt_nil_check(F->a_2337))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->b_2338))), one_rt_gstr(41)));
} else if ((G_NV((*(P121)rt_nil_check(F->ta_2334)).kind_) == ((rt_int)3LL))) {
(*F->r_827) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fpow(", 10), (*(P139)rt_nil_check(F->a_2337))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->b_2338))), rt_g_lit(", ", 2)), f_float_kind_805(F->up, F->ta_2334)), one_rt_gstr(41)));
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_824)).line_), rt_g_lit("operator ** is defined for integer and floating point values (RM79 4.5.6)", 73));
}
} else {
if ((f_is_literal_760(F->up, (*(P173)rt_nil_check(F->e_824)).a_) && (!f_is_literal_760(F->up, (*(P173)rt_nil_check(F->e_824)).b_)))) {
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->e_824)).b_, F->want_825, &F->tb_2335, &F->b_2338);
F->hint_2336 = F->tb_2335;
if (((G_NV((*(P121)rt_nil_check(F->tb_2335)).kind_) == ((rt_int)16LL)) && (eq_rt_gstr(F->op_2333, rt_g_lit("*", 1)) || eq_rt_gstr(F->op_2333, rt_g_lit("/", 1))))) {
F->hint_2336 = F->up->ty_int_155;
}
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->e_824)).a_, F->hint_2336, &F->ta_2334, &F->a_2337);
} else {
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->e_824)).a_, F->want_825, &F->ta_2334, &F->a_2337);
F->hint_2336 = F->ta_2334;
if (((((G_NV((*(P121)rt_nil_check(F->ta_2334)).kind_) == ((rt_int)16LL)) && (eq_rt_gstr(F->op_2333, rt_g_lit("*", 1)) || eq_rt_gstr(F->op_2333, rt_g_lit("/", 1)))) && f_is_literal_760(F->up, (*(P173)rt_nil_check(F->e_824)).b_)) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_824)).b_)).kind_) == ((rt_int)1LL)))) {
F->hint_2336 = F->up->ty_int_155;
}
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->e_824)).b_, F->hint_2336, &F->tb_2335, &F->b_2338);
}
if (((!f_is_numeric_436(F->up, F->ta_2334)) || (!f_is_numeric_436(F->up, F->tb_2335)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_824)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2333), rt_g_lit(" needs numeric operands, not ", 29)), f_kind_name_465(F->up, F->ta_2334)), rt_g_lit(" and ", 5)), f_kind_name_465(F->up, F->tb_2335)));
}
if (((G_NV((*(P121)rt_nil_check(F->ta_2334)).kind_) == ((rt_int)16LL)) || (G_NV((*(P121)rt_nil_check(F->tb_2335)).kind_) == ((rt_int)16LL)))) {
f_fixed_operation_836(F->up, F->e_824, F->ta_2334, F->tb_2335, (*(P139)rt_nil_check(F->a_2337)), (*(P139)rt_nil_check(F->b_2338)), &(*F->t_826), &(*F->r_827));
goto ret_;
}
f_check_type_469(F->up, F->tb_2335, F->ta_2334, G_NV((*(P173)rt_nil_check(F->e_824)).line_));
(*F->t_826) = F->ta_2334;
if ((G_NV((*(P121)rt_nil_check(F->ta_2334)).kind_) == ((rt_int)3LL))) {
if (eq_rt_gstr(F->op_2333, rt_g_lit("+", 1))) {
(*F->r_827) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fadd(", 10), (*(P139)rt_nil_check(F->a_2337))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->b_2338))), rt_g_lit(", ", 2)), f_float_kind_805(F->up, F->ta_2334)), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2333, rt_g_lit("-", 1))) {
(*F->r_827) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fsub(", 10), (*(P139)rt_nil_check(F->a_2337))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->b_2338))), rt_g_lit(", ", 2)), f_float_kind_805(F->up, F->ta_2334)), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2333, rt_g_lit("*", 1))) {
(*F->r_827) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fmul(", 10), (*(P139)rt_nil_check(F->a_2337))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->b_2338))), rt_g_lit(", ", 2)), f_float_kind_805(F->up, F->ta_2334)), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2333, rt_g_lit("/", 1))) {
(*F->r_827) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fdiv(", 10), (*(P139)rt_nil_check(F->a_2337))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->b_2338))), rt_g_lit(", ", 2)), f_float_kind_805(F->up, F->ta_2334)), one_rt_gstr(41)));
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_824)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2333), rt_g_lit(" is not defined for real values (RM79 4.5.5)", 44)));
}
goto ret_;
}
if (eq_rt_gstr(F->op_2333, rt_g_lit("+", 1))) {
(*F->r_827) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_add(", 7), (*(P139)rt_nil_check(F->a_2337))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->b_2338))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2333, rt_g_lit("-", 1))) {
(*F->r_827) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_sub(", 7), (*(P139)rt_nil_check(F->a_2337))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->b_2338))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2333, rt_g_lit("*", 1))) {
(*F->r_827) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_mul(", 7), (*(P139)rt_nil_check(F->a_2337))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->b_2338))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2333, rt_g_lit("/", 1))) {
(*F->r_827) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_quot(", 8), (*(P139)rt_nil_check(F->a_2337))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->b_2338))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2333, rt_g_lit("MOD", 3))) {
(*F->r_827) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_rem(", 7), (*(P139)rt_nil_check(F->a_2337))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->b_2338))), one_rt_gstr(41)));
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_824)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2333), rt_g_lit(" is not defined for integers", 28)));
}
}
if (f_short_int_803(F->up, (*F->t_826))) {
(*F->r_827) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_short(", 11), (*(P139)rt_nil_check((*F->r_827)))), one_rt_gstr(41)));
}
ret_:

  return;
}

static void f_fixed_operation_836(struct f_greenc_1fr *up_, P173 e_829, P121 ta_830, P121 tb_831, rt_gstr a_832, rt_gstr b_833, P121 *t_834, P139 *r_835) {
  struct f_fixed_operation_836fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_829 = e_829;
F->ta_830 = ta_830;
F->tb_831 = tb_831;
F->a_832 = cp_rt_gstr(a_832);
F->b_833 = cp_rt_gstr(b_833);
F->t_834 = t_834;
F->r_835 = r_835;
F->op_2339 = cp_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_829)).name_)));
if ((eq_rt_gstr(F->op_2339, rt_g_lit("+", 1)) || eq_rt_gstr(F->op_2339, rt_g_lit("-", 1)))) {
f_check_type_469(F->up, F->tb_831, F->ta_830, G_NV((*(P173)rt_nil_check(F->e_829)).line_));
(*F->t_834) = F->ta_830;
(*F->r_835) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_832), one_rt_gstr(32)), F->op_2339), one_rt_gstr(32)), F->b_833), one_rt_gstr(41)));
} else if (((eq_rt_gstr(F->op_2339, rt_g_lit("*", 1)) && (G_NV((*(P121)rt_nil_check(F->ta_830)).kind_) == ((rt_int)16LL))) && (G_NV((*(P121)rt_nil_check(F->tb_831)).kind_) == ((rt_int)16LL)))) {
(*F->t_834) = F->up->ty_ufixed_171;
(*F->r_835) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_832), rt_g_lit(" * ", 3)), F->b_833), one_rt_gstr(41)));
} else if (((eq_rt_gstr(F->op_2339, rt_g_lit("/", 1)) && (G_NV((*(P121)rt_nil_check(F->ta_830)).kind_) == ((rt_int)16LL))) && (G_NV((*(P121)rt_nil_check(F->tb_831)).kind_) == ((rt_int)16LL)))) {
(*F->t_834) = F->up->ty_ufixed_171;
(*F->r_835) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fdiv(", 10), F->a_832), rt_g_lit(", ", 2)), F->b_833), rt_g_lit(", 0)", 4)));
} else if (((eq_rt_gstr(F->op_2339, rt_g_lit("*", 1)) && (G_NV((*(P121)rt_nil_check(F->ta_830)).kind_) == ((rt_int)16LL))) && (G_NV((*(P121)rt_nil_check(F->tb_831)).kind_) == ((rt_int)1LL)))) {
(*F->t_834) = F->ta_830;
(*F->r_835) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_832), rt_g_lit(" * (double)(", 12)), F->b_833), rt_g_lit("))", 2)));
} else if (((eq_rt_gstr(F->op_2339, rt_g_lit("*", 1)) && (G_NV((*(P121)rt_nil_check(F->ta_830)).kind_) == ((rt_int)1LL))) && (G_NV((*(P121)rt_nil_check(F->tb_831)).kind_) == ((rt_int)16LL)))) {
(*F->t_834) = F->tb_831;
(*F->r_835) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((double)(", 10), F->a_832), rt_g_lit(") * ", 4)), F->b_833), one_rt_gstr(41)));
} else if (((eq_rt_gstr(F->op_2339, rt_g_lit("/", 1)) && (G_NV((*(P121)rt_nil_check(F->ta_830)).kind_) == ((rt_int)16LL))) && (G_NV((*(P121)rt_nil_check(F->tb_831)).kind_) == ((rt_int)1LL)))) {
(*F->t_834) = F->ta_830;
(*F->r_835) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix(rt_g_fdiv(", 19), F->a_832), rt_g_lit(", (double)(", 11)), F->b_833), rt_g_lit("), 0), ", 7)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->ta_830)).fsmall_))), one_rt_gstr(41)));
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_829)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2339), rt_g_lit(" is not defined for these fixed point operands (RM79 4.5.5)", 59)));
}
ret_:

  return;
}

static void f_gen_binop_841(struct f_greenc_1fr *up_, P173 e_837, P121 want_838, P121 *t_839, P139 *r_840) {
  struct f_gen_binop_841fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_837 = e_837;
F->want_838 = want_838;
F->t_839 = t_839;
F->r_840 = r_840;
F->op_2340 = cp_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_837)).name_)));
F->ta_2341 = NULL;
F->tb_2342 = NULL;
F->hint_2343 = NULL;
F->ct_2344 = NULL;
F->a_2345 = NULL;
F->b_2346 = NULL;
F->x_2347 = NULL;
F->dummy_2348 = NULL;
F->done_2349 = INT_MIN;
(*F->t_839) = F->up->ty_bool_156;
f_user_operator_1063(F->up, F->e_837, F->want_838, &(*F->t_839), &(*F->r_840), &F->done_2349);
 (void)rt_range(F->done_2349, 0, 1);
if (G_NV(F->done_2349)) {
goto ret_;
}
if ((G_NV((*(P173)rt_nil_check(F->e_837)).ival_) == ((rt_int)1LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_837)).line_), rt_g_lit("and then and or else are allowed only in conditions (RM79 5.4.1)", 64));
}
if (((eq_rt_gstr(F->op_2340, rt_g_lit("AND", 3)) || eq_rt_gstr(F->op_2340, rt_g_lit("OR", 2))) || eq_rt_gstr(F->op_2340, rt_g_lit("XOR", 3)))) {
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->e_837)).a_, F->want_838, &F->ta_2341, &F->a_2345);
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->e_837)).b_, F->ta_2341, &F->tb_2342, &F->b_2346);
f_check_type_469(F->up, F->tb_2342, F->ta_2341, G_NV((*(P173)rt_nil_check(F->e_837)).line_));
(*F->t_839) = F->ta_2341;
if (((G_NV((*(P121)rt_nil_check(F->ta_2341)).kind_) == ((rt_int)6LL)) && ((G_NV((*(P121)rt_nil_check(F->ta_2341)).dims_) == ((rt_int)1LL)) && (G_NV((*(P121)rt_nil_check((*(P121)rt_nil_check(F->ta_2341)).elem_)).kind_) == ((rt_int)2LL))))) {
f_ctype_474(F->up, F->ta_2341, &F->x_2347);
(*F->r_840) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(f_lower_s_232(F->up, F->op_2340), one_rt_gstr(95)), (*(P139)rt_nil_check(F->x_2347))), one_rt_gstr(40)), (*(P139)rt_nil_check(F->a_2345))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->b_2346))), one_rt_gstr(41)));
goto ret_;
}
if ((G_NV((*(P121)rt_nil_check(F->ta_2341)).kind_) != ((rt_int)2LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_837)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2340), rt_g_lit(" applies to boolean values and arrays (RM79 4.5.1)", 50)));
}
if (eq_rt_gstr(F->op_2340, rt_g_lit("AND", 3))) {
(*F->r_840) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->a_2345))), rt_g_lit(" && ", 4)), (*(P139)rt_nil_check(F->b_2346))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2340, rt_g_lit("OR", 2))) {
(*F->r_840) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->a_2345))), rt_g_lit(" || ", 4)), (*(P139)rt_nil_check(F->b_2346))), one_rt_gstr(41)));
} else {
(*F->r_840) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->a_2345))), rt_g_lit(" != ", 4)), (*(P139)rt_nil_check(F->b_2346))), one_rt_gstr(41)));
}
goto ret_;
}
if (eq_rt_gstr(F->op_2340, rt_g_lit("IN", 2))) {
f_membership_808(F->up, F->e_837, &(*F->r_840));
goto ret_;
}
if (eq_rt_gstr(F->op_2340, rt_g_lit("&", 1))) {
f_catenation_818(F->up, F->e_837, F->want_838, &(*F->t_839), &(*F->r_840));
goto ret_;
}
if (f_is_rel_334(F->up, F->op_2340)) {
if (((((f_is_literal_760(F->up, (*(P173)rt_nil_check(F->e_837)).a_) || f_is_enum_lit_756(F->up, (*(P173)rt_nil_check(F->e_837)).a_)) || (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_837)).a_)).kind_) == ((rt_int)4LL))) || (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_837)).a_)).kind_) == ((rt_int)3LL))) || (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_837)).a_)).kind_) == ((rt_int)12LL)))) {
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->e_837)).b_, NULL, &F->hint_2343, &F->dummy_2348);
}
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->e_837)).a_, F->hint_2343, &F->ta_2341, &F->a_2345);
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->e_837)).b_, F->ta_2341, &F->tb_2342, &F->b_2346);
F->ct_2344 = F->ta_2341;
if (((G_NV((*(P121)rt_nil_check(F->ta_2341)).kind_) != ((rt_int)10LL)) && (G_NV((*(P121)rt_nil_check(F->tb_2342)).kind_) != ((rt_int)10LL)))) {
f_check_type_469(F->up, F->tb_2342, F->ta_2341, G_NV((*(P173)rt_nil_check(F->e_837)).line_));
}
if ((G_NV((*(P121)rt_nil_check(F->ta_2341)).kind_) == ((rt_int)10LL))) {
F->ct_2344 = F->tb_2342;
}
if (((((!eq_rt_gstr(F->op_2340, rt_g_lit("=", 1))) && (!eq_rt_gstr(F->op_2340, rt_g_lit("/=", 2)))) && (!f_is_numeric_436(F->up, F->ct_2344))) && (!f_is_discrete_438(F->up, F->ct_2344)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_837)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2340), rt_g_lit(" is defined for scalar types, not for ", 38)), f_kind_name_465(F->up, F->ct_2344)), rt_g_lit(" (RM79 4.5.2)", 13)));
}
if (f_composite_594(F->up, F->ct_2344)) {
f_eq_code_609(F->up, F->ct_2344, (*(P139)rt_nil_check(F->a_2345)), (*(P139)rt_nil_check(F->b_2346)), &F->x_2347);
if (eq_rt_gstr(F->op_2340, rt_g_lit("=", 1))) {
(*F->r_840) = F->x_2347;
} else if (eq_rt_gstr(F->op_2340, rt_g_lit("/=", 2))) {
(*F->r_840) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!", 2), (*(P139)rt_nil_check(F->x_2347))), one_rt_gstr(41)));
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_837)).line_), rt_g_lit("no ordering is defined for composite values", 43));
}
goto ret_;
}
if (eq_rt_gstr(F->op_2340, rt_g_lit("=", 1))) {
(*F->r_840) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->a_2345))), rt_g_lit(" == ", 4)), (*(P139)rt_nil_check(F->b_2346))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2340, rt_g_lit("/=", 2))) {
(*F->r_840) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->a_2345))), rt_g_lit(" != ", 4)), (*(P139)rt_nil_check(F->b_2346))), one_rt_gstr(41)));
} else {
(*F->r_840) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->a_2345))), one_rt_gstr(32)), F->op_2340), one_rt_gstr(32)), (*(P139)rt_nil_check(F->b_2346))), one_rt_gstr(41)));
}
goto ret_;
}
f_arithmetic_828(F->up, F->e_837, F->want_838, &(*F->t_839), &(*F->r_840));
ret_:

  return;
}

static void f_conversion_846(struct f_greenc_1fr *up_, P173 e_842, P116 y_843, P121 *t_844, P139 *r_845) {
  struct f_conversion_846fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_842 = e_842;
F->y_843 = y_843;
F->t_844 = t_844;
F->r_845 = r_845;
F->aty_2350 = NULL;
F->a_2351 = NULL;
F->ag_2352 = NULL;
F->it_2353 = NULL;
F->tail_2354 = NULL;
F->arg_2355 = NULL;
(*F->t_844) = (*(P116)rt_nil_check(F->y_843)).t_;
if (((G_NV((*(P173)rt_nil_check(F->e_842)).flag_) == ((rt_int)9LL)) || (f_list_len_301(F->up, (*(P173)rt_nil_check(F->e_842)).b_) > ((rt_int)1LL)))) {
if ((G_NV((*(P173)rt_nil_check(F->e_842)).flag_) == ((rt_int)9LL))) {
F->ag_2352 = (*(P173)rt_nil_check(F->e_842)).b_;
} else {
F->ag_2352 = f_nn_295(F->up, ((rt_int)12LL), G_NV((*(P173)rt_nil_check(F->e_842)).line_));
F->arg_2355 = (*(P173)rt_nil_check(F->e_842)).b_;
while ((F->arg_2355 != NULL)) {
F->it_2353 = f_nn_295(F->up, ((rt_int)13LL), G_NV((*(P173)rt_nil_check(F->e_842)).line_));
(*(P173)rt_nil_check(F->it_2353)).b_ = F->arg_2355;
if (((*(P173)rt_nil_check(F->arg_2355)).formal_ != NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_842)).line_), rt_g_lit("a named component of an aggregate is given with => (RM79 3.6.2)", 63));
}
if ((F->tail_2354 == NULL)) {
(*(P173)rt_nil_check(F->ag_2352)).a_ = F->it_2353;
} else {
(*(P173)rt_nil_check(F->tail_2354)).next_ = F->it_2353;
}
F->tail_2354 = F->it_2353;
F->arg_2355 = (*(P173)rt_nil_check(F->arg_2355)).next_;
}
L_end_2356: ;
}
if ((G_NV((*(P173)rt_nil_check(F->ag_2352)).kind_) != ((rt_int)12LL))) {
f_gexpr_773(F->up, F->ag_2352, (*F->t_844), &F->aty_2350, &(*F->r_845));
f_check_type_469(F->up, F->aty_2350, (*F->t_844), G_NV((*(P173)rt_nil_check(F->e_842)).line_));
} else {
f_aggregate_919(F->up, F->ag_2352, (*F->t_844), &F->aty_2350, &(*F->r_845));
}
f_constrain_850(F->up, F->y_843, (*F->t_844), &(*F->r_845));
goto ret_;
}
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->e_842)).b_, (*F->t_844), &F->aty_2350, &F->a_2351);
if ((((G_NV((*(P121)rt_nil_check((*F->t_844))).kind_) == ((rt_int)6LL)) && (G_NV((*(P121)rt_nil_check(F->aty_2350)).kind_) == ((rt_int)6LL))) && (!f_same_429(F->up, (*F->t_844), F->aty_2350)))) {
f_array_conversion_857(F->up, F->e_842, (*F->t_844), F->aty_2350, (*(P116)rt_nil_check(F->y_843)).c_, (*(P139)rt_nil_check(F->a_2351)), &(*F->r_845));
goto ret_;
}
if ((f_is_numeric_436(F->up, (*F->t_844)) && f_is_numeric_436(F->up, F->aty_2350))) {
if (((G_NV((*(P121)rt_nil_check((*F->t_844))).kind_) == ((rt_int)1LL)) && (G_NV((*(P121)rt_nil_check(F->aty_2350)).kind_) != ((rt_int)1LL)))) {
(*F->r_845) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_round(", 11), (*(P139)rt_nil_check(F->a_2351))), one_rt_gstr(41)));
} else if (((G_NV((*(P121)rt_nil_check((*F->t_844))).kind_) == ((rt_int)3LL)) && (G_NV((*(P121)rt_nil_check(F->aty_2350)).kind_) == ((rt_int)1LL)))) {
(*F->r_845) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((double)(", 10), (*(P139)rt_nil_check(F->a_2351))), rt_g_lit("))", 2)));
} else if (((G_NV((*(P121)rt_nil_check((*F->t_844))).kind_) == ((rt_int)16LL)) && ((*(P121)rt_nil_check((*F->t_844))).fsmall_ != NULL))) {
if ((G_NV((*(P121)rt_nil_check(F->aty_2350)).kind_) == ((rt_int)1LL))) {
(*F->r_845) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix((double)(", 18), (*(P139)rt_nil_check(F->a_2351))), rt_g_lit("), ", 3)), (*(P139)rt_nil_check((*(P121)rt_nil_check((*F->t_844))).fsmall_))), one_rt_gstr(41)));
} else {
(*F->r_845) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix(", 9), (*(P139)rt_nil_check(F->a_2351))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P121)rt_nil_check((*F->t_844))).fsmall_))), one_rt_gstr(41)));
}
} else {
(*F->r_845) = F->a_2351;
}
} else if (((f_same_429(F->up, F->aty_2350, (*F->t_844)) || f_derived_from_434(F->up, F->aty_2350, (*F->t_844))) || f_derived_from_434(F->up, (*F->t_844), F->aty_2350))) {
(*F->r_845) = F->a_2351;
} else {
f_check_type_469(F->up, F->aty_2350, (*F->t_844), G_NV((*(P173)rt_nil_check(F->e_842)).line_));
(*F->r_845) = F->a_2351;
}
if (((((G_NV((*(P121)rt_nil_check((*F->t_844))).kind_) == ((rt_int)1LL)) || (G_NV((*(P121)rt_nil_check((*F->t_844))).kind_) == ((rt_int)4LL))) || (G_NV((*(P121)rt_nil_check((*F->t_844))).kind_) == ((rt_int)11LL))) && f_bounded_457(F->up, (*(P116)rt_nil_check(F->y_843)).c_))) {
(*F->r_845) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P139)rt_nil_check((*F->r_845)))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_843)).c_)).lo_))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_843)).c_)).hi_))), one_rt_gstr(41)));
} else if ((((G_NV((*(P121)rt_nil_check((*F->t_844))).kind_) == ((rt_int)3LL)) || (G_NV((*(P121)rt_nil_check((*F->t_844))).kind_) == ((rt_int)16LL))) && f_bounded_457(F->up, (*(P116)rt_nil_check(F->y_843)).c_))) {
(*F->r_845) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_frange(", 10), (*(P139)rt_nil_check((*F->r_845)))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_843)).c_)).lo_))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_843)).c_)).hi_))), one_rt_gstr(41)));
} else if (f_short_int_803(F->up, (*F->t_844))) {
(*F->r_845) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_short(", 11), (*(P139)rt_nil_check((*F->r_845)))), one_rt_gstr(41)));
}
ret_:

  return;
}

static void f_constrain_850(struct f_greenc_1fr *up_, P116 y_847, P121 t_848, P139 *r_849) {
  struct f_constrain_850fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_847 = y_847;
F->t_848 = t_848;
F->r_849 = r_849;
F->ct_2357 = NULL;
F->tmp_2358 = NULL;
if ((((*(P116)rt_nil_check(F->y_847)).c_ == NULL) || ((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_847)).c_)).lo_ == NULL))) {
goto ret_;
}
if (((G_NV((*(P121)rt_nil_check(F->t_848)).kind_) == ((rt_int)6LL)) && (!f_bounded_hi_459(F->up, (*(P121)rt_nil_check(F->t_848)).tcons_)))) {
f_ctype_474(F->up, F->t_848, &F->ct_2357);
f_new_name_224(F->up, rt_g_lit("q", 1), &F->tmp_2358);
(*F->r_849) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P139)rt_nil_check(F->ct_2357))), one_rt_gstr(32)), (*(P139)rt_nil_check(F->tmp_2358))), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check((*F->r_849)))), rt_g_lit("; rt_int l_ = ", 14)), (*(P139)rt_nil_check((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_847)).c_)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P139)rt_nil_check((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_847)).c_)).hi_))), rt_g_lit("; if (G_CNT(", 12)), (*(P139)rt_nil_check(F->tmp_2358))), rt_g_lit(") != (h_ >= l_ \? h_ - l_ + 1 : 0)) ", 35)), rt_g_lit("rt_raise_msg(RT_X_SUBTYPE, ", 27)), f_q_239(F->up)), rt_g_lit("array length", 12)), f_q_239(F->up)), rt_g_lit("); ", 3)), (*(P139)rt_nil_check(F->tmp_2358))), rt_g_lit(".lo = l_; ", 10)), (*(P139)rt_nil_check(F->tmp_2358))), rt_g_lit(".hi = h_; ", 10)), (*(P139)rt_nil_check(F->tmp_2358))), rt_g_lit("; })", 4)));
}
ret_:

  return;
}

static void f_array_conversion_857(struct f_greenc_1fr *up_, P173 e_851, P121 t_852, P121 aty_853, P177 c_854, rt_gstr a_855, P139 *r_856) {
  struct f_array_conversion_857fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_851 = e_851;
F->t_852 = t_852;
F->aty_853 = aty_853;
F->c_854 = c_854;
F->a_855 = cp_rt_gstr(a_855);
F->r_856 = r_856;
F->x_2359 = NULL;
F->y_2360 = NULL;
F->ct_2361 = NULL;
F->act_2362 = NULL;
F->et_2363 = NULL;
F->tmp_2364 = NULL;
F->s_2365 = NULL;
F->x_2359 = F->t_852;
F->y_2360 = F->aty_853;
if ((G_NV((*(P121)rt_nil_check(F->t_852)).dims_) != G_NV((*(P121)rt_nil_check(F->aty_853)).dims_))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_851)).line_), rt_g_lit("no conversion between arrays of different dimensions (RM79 4.6)", 63));
}
{ rt_int lo2368 = ((rt_int)1LL), hi2369 = G_NV((*(P121)rt_nil_check(F->t_852)).dims_);
for (rt_int it2370 = lo2368; it2370 <= hi2369; it2370++) {
F->k_2367 = it2370;
if ((!((f_same_429(F->up, (*(P121)rt_nil_check(F->x_2359)).idx_, (*(P121)rt_nil_check(F->y_2360)).idx_) || f_derived_from_434(F->up, (*(P121)rt_nil_check(F->x_2359)).idx_, (*(P121)rt_nil_check(F->y_2360)).idx_)) || f_derived_from_434(F->up, (*(P121)rt_nil_check(F->y_2360)).idx_, (*(P121)rt_nil_check(F->x_2359)).idx_)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_851)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no conversion from ", 19), f_kind_name_465(F->up, F->aty_853)), rt_g_lit(" to ", 4)), f_kind_name_465(F->up, F->t_852)), rt_g_lit(": the index types differ (RM79 4.6)", 35)));
}
F->x_2359 = (*(P121)rt_nil_check(F->x_2359)).elem_;
F->y_2360 = (*(P121)rt_nil_check(F->y_2360)).elem_;
}
}
L_end_2366: ;
if ((!((f_same_429(F->up, F->x_2359, F->y_2360) || f_derived_from_434(F->up, F->x_2359, F->y_2360)) || f_derived_from_434(F->up, F->y_2360, F->x_2359)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_851)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no conversion from ", 19), f_kind_name_465(F->up, F->aty_853)), rt_g_lit(" to ", 4)), f_kind_name_465(F->up, F->t_852)), rt_g_lit(": the component types differ (RM79 4.6)", 39)));
}
f_ctype_474(F->up, F->t_852, &F->ct_2361);
f_ctype_474(F->up, F->aty_853, &F->act_2362);
f_elem_ctype_546(F->up, (*(P121)rt_nil_check(F->t_852)).elem_, &F->et_2363);
f_new_name_224(F->up, rt_g_lit("cv", 2), &F->tmp_2364);
(*F->r_856) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P139)rt_nil_check(F->act_2362))), rt_g_lit(" s_ = ", 6)), F->a_855), rt_g_lit("; ", 2)), (*(P139)rt_nil_check(F->ct_2361))), one_rt_gstr(32)), (*(P139)rt_nil_check(F->tmp_2364))), rt_g_lit("; ", 2)), (*(P139)rt_nil_check(F->tmp_2364))), rt_g_lit(".lo = s_.lo; ", 13)), (*(P139)rt_nil_check(F->tmp_2364))), rt_g_lit(".hi = s_.hi; ", 13)), (*(P139)rt_nil_check(F->tmp_2364))), rt_g_lit(".lo2 = s_.lo2; ", 15)), (*(P139)rt_nil_check(F->tmp_2364))), rt_g_lit(".hi2 = s_.hi2; ", 15)), (*(P139)rt_nil_check(F->tmp_2364))), rt_g_lit(".p = (", 6)), (*(P139)rt_nil_check(F->et_2363))), rt_g_lit(" *)s_.p; ", 9)), (*(P139)rt_nil_check(F->tmp_2364))), rt_g_lit("; })", 4)));
if ((((*(P121)rt_nil_check(F->t_852)).tcons_ != NULL) && ((*(P177)rt_nil_check((*(P121)rt_nil_check(F->t_852)).tcons_)).hi_ != NULL))) {
(*F->r_856) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P139)rt_nil_check(F->ct_2361))), one_rt_gstr(32)), (*(P139)rt_nil_check(F->tmp_2364))), rt_g_lit("x = ", 4)), (*(P139)rt_nil_check((*F->r_856)))), rt_g_lit("; rt_int l_ = ", 14)), (*(P139)rt_nil_check((*(P177)rt_nil_check((*(P121)rt_nil_check(F->t_852)).tcons_)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P139)rt_nil_check((*(P177)rt_nil_check((*(P121)rt_nil_check(F->t_852)).tcons_)).hi_))), rt_g_lit("; if (G_CNT(", 12)), (*(P139)rt_nil_check(F->tmp_2364))), rt_g_lit("x) != (h_ >= l_ \? h_ - l_ + 1 : 0)) ", 36)), rt_g_lit("rt_raise_msg(RT_X_SUBTYPE, ", 27)), f_q_239(F->up)), rt_g_lit("array length", 12)), f_q_239(F->up)), rt_g_lit("); ", 3)), (*(P139)rt_nil_check(F->tmp_2364))), rt_g_lit("x.lo = l_; ", 11)), (*(P139)rt_nil_check(F->tmp_2364))), rt_g_lit("x.hi = h_; ", 11)), (*(P139)rt_nil_check(F->tmp_2364))), rt_g_lit("x; })", 5)));
}
ret_:

  return;
}

static void f_gen_attr_862(struct f_greenc_1fr *up_, P173 e_858, P121 want_859, P121 *t_860, P139 *r_861) {
  struct f_gen_attr_862fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_858 = e_858;
F->want_859 = want_859;
F->t_860 = t_860;
F->r_861 = r_861;
F->a_2371 = cp_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_858)).name_)));
F->y_2372 = NULL;
F->tt_2373 = NULL;
F->aty_2374 = NULL;
F->v_2375 = NULL;
F->d_2376 = NULL;
F->c_2377 = NULL;
F->n_2378 = INT64_MIN;
F->ro_2379 = INT_MIN;
if ((((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_858)).a_)).kind_) == ((rt_int)8LL)) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_858)).a_)).a_)).kind_) == ((rt_int)5LL))) && f_is_task_name_1081(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_858)).a_)).a_)).name_))))) {
f_member_attr_1147(F->up, F->e_858, &(*F->t_860), &(*F->r_861));
goto ret_;
}
if ((eq_rt_gstr(F->a_2371, rt_g_lit("ADDRESS", 7)) && f_is_object_721(F->up, (*(P173)rt_nil_check(F->e_858)).a_))) {
f_lvalue_729(F->up, (*(P173)rt_nil_check(F->e_858)).a_, &F->v_2375, &F->aty_2374, &F->c_2377, &F->ro_2379);
 (void)rt_range(F->ro_2379, 0, 1);
(*F->t_860) = F->up->ty_int_155;
(*F->r_861) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(intptr_t)&(", 21), (*(P139)rt_nil_check(F->v_2375))), rt_g_lit("))", 2)));
goto ret_;
}
if (((eq_rt_gstr(F->a_2371, rt_g_lit("COUNT", 5)) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_858)).a_)).kind_) == ((rt_int)8LL))) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_858)).a_)).a_)).kind_) == ((rt_int)5LL)))) {
F->y_2372 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_858)).a_)).a_)).name_)));
if ((((F->y_2372 != NULL) && (G_NV((*(P116)rt_nil_check(F->y_2372)).kind_) == ((rt_int)10LL))) && ((*(P116)rt_nil_check(F->y_2372)).c_ != NULL))) {
if ((!f_same_task_412(F->up, (*(P116)rt_nil_check(F->y_2372)).members_, F->up->cur_task_196))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_858)).line_), rt_g_lit("E'COUNT is allowed only in the body of the task (RM79 9.9)", 58));
}
f_entry_path_1103(F->up, F->y_2372, rt_g_lit("", 0), &F->v_2375);
f_gexpr_773(F->up, (*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_858)).a_)).b_, NULL, &F->aty_2374, &F->d_2376);
f_entry_family_slot_1118(F->up, F->y_2372, (*(P139)rt_nil_check(F->v_2375)), (*(P139)rt_nil_check(F->d_2376)), &F->v_2375);
(*F->t_860) = F->up->ty_int_155;
(*F->r_861) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_entry_count(&", 16), (*(P139)rt_nil_check(F->v_2375))), one_rt_gstr(41)));
goto ret_;
}
}
if (((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_858)).a_)).kind_) == ((rt_int)9LL)) && f_is_package_1012(F->up, (*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_858)).a_)).a_))) {
F->y_2372 = f_member_of_1016(F->up, f_path_of_338(F->up, (*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_858)).a_)).a_), (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_858)).a_)).name_)), G_NV((*(P173)rt_nil_check(F->e_858)).line_));
}
if ((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_858)).a_)).kind_) == ((rt_int)5LL))) {
F->y_2372 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_858)).a_)).name_)));
if (((F->y_2372 == NULL) && (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_858)).a_)).name_)), rt_g_lit("SYSTEM", 6)) || eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_858)).a_)).name_)), rt_g_lit("OPTION", 6))))) {
f_config_attr_884(F->up, F->e_858, &(*F->t_860), &(*F->r_861));
goto ret_;
}
if (((eq_rt_gstr(F->a_2371, rt_g_lit("ADDRESS", 7)) && (F->y_2372 != NULL)) && ((((G_NV((*(P116)rt_nil_check(F->y_2372)).kind_) == ((rt_int)4LL)) || (G_NV((*(P116)rt_nil_check(F->y_2372)).kind_) == ((rt_int)3LL))) || (G_NV((*(P116)rt_nil_check(F->y_2372)).kind_) == ((rt_int)8LL))) || (G_NV((*(P116)rt_nil_check(F->y_2372)).kind_) == ((rt_int)9LL))))) {
(*F->t_860) = F->up->ty_int_155;
(*F->r_861) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(rt_add(((rt_int)65536LL), rt_mul(((rt_int)16LL), f_hash_407(F->up, cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2372)).name_)), rt_g_s2g(rt_str_of_int(G_NV((*(P116)rt_nil_check(F->y_2372)).depth_)))))))))), one_rt_gstr(41)));
goto ret_;
}
if ((((F->y_2372 == NULL) && eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_858)).a_)).name_)), rt_g_lit("SYSTEM", 6))) && eq_rt_gstr(F->a_2371, rt_g_lit("CLOCK", 5)))) {
(*F->t_860) = F->up->ty_time_170;
(*F->r_861) = f_mk_221(F->up, rt_g_lit("((double)rt_time())", 19));
goto ret_;
}
if ((((F->y_2372 == NULL) && eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_858)).a_)).name_)), rt_g_lit("SYSTEM", 6))) && (eq_rt_gstr(F->a_2371, rt_g_lit("MAX_PRIORITY", 12)) || eq_rt_gstr(F->a_2371, rt_g_lit("MIN_PRIORITY", 12))))) {
(*F->t_860) = F->up->ty_int_155;
if (eq_rt_gstr(F->a_2371, rt_g_lit("MAX_PRIORITY", 12))) {
(*F->r_861) = f_mk_221(F->up, rt_g_lit("((rt_int)255)", 13));
} else {
(*F->r_861) = f_mk_221(F->up, rt_g_lit("((rt_int)0)", 11));
}
goto ret_;
}
}
if (((F->y_2372 != NULL) && (G_NV((*(P116)rt_nil_check(F->y_2372)).kind_) == ((rt_int)5LL)))) {
F->tt_2373 = (*(P116)rt_nil_check(F->y_2372)).t_;
F->c_2377 = (*(P116)rt_nil_check(F->y_2372)).c_;
if (eq_rt_gstr(F->a_2371, rt_g_lit("SIZE", 4))) {
(*F->t_860) = F->up->ty_int_155;
f_type_bits_866(F->up, F->tt_2373, F->c_2377, &(*F->r_861));
goto ret_;
}
if (((((((((eq_rt_gstr(F->a_2371, rt_g_lit("DIGITS", 6)) || eq_rt_gstr(F->a_2371, rt_g_lit("SMALL", 5))) || eq_rt_gstr(F->a_2371, rt_g_lit("LARGE", 5))) || eq_rt_gstr(F->a_2371, rt_g_lit("EXPONENT_MIN", 12))) || eq_rt_gstr(F->a_2371, rt_g_lit("EXPONENT_MAX", 12))) || eq_rt_gstr(F->a_2371, rt_g_lit("BITS", 4))) || eq_rt_gstr(F->a_2371, rt_g_lit("RADIX", 5))) || eq_rt_gstr(F->a_2371, rt_g_lit("DELTA", 5))) || eq_rt_gstr(F->a_2371, rt_g_lit("ACCESS_SIZE", 11)))) {
f_numeric_attr_876(F->up, F->e_858, F->tt_2373, F->c_2377, &(*F->t_860), &(*F->r_861));
goto ret_;
}
if (eq_rt_gstr(F->a_2371, rt_g_lit("ORD", 3))) {
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->e_858)).b_, F->tt_2373, &F->aty_2374, &F->v_2375);
f_check_type_469(F->up, F->aty_2374, F->tt_2373, G_NV((*(P173)rt_nil_check(F->e_858)).line_));
(*F->t_860) = F->up->ty_int_155;
(*F->r_861) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(", 10), (*(P139)rt_nil_check(F->v_2375))), rt_g_lit(") + 1)", 6)));
goto ret_;
} else if ((eq_rt_gstr(F->a_2371, rt_g_lit("VAL", 3)) || eq_rt_gstr(F->a_2371, rt_g_lit("REP", 3)))) {
f_val_rep_909(F->up, F->e_858, F->tt_2373, F->c_2377, &(*F->t_860), &(*F->r_861));
goto ret_;
} else if ((eq_rt_gstr(F->a_2371, rt_g_lit("SUCC", 4)) || eq_rt_gstr(F->a_2371, rt_g_lit("PRED", 4)))) {
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->e_858)).b_, F->tt_2373, &F->aty_2374, &F->v_2375);
(*F->t_860) = F->tt_2373;
if ((G_NV((*(P121)rt_nil_check(F->tt_2373)).kind_) == ((rt_int)1LL))) {
if (eq_rt_gstr(F->a_2371, rt_g_lit("SUCC", 4))) {
(*F->r_861) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_add(", 7), (*(P139)rt_nil_check(F->v_2375))), rt_g_lit(", 1)", 4)));
} else {
(*F->r_861) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_sub(", 7), (*(P139)rt_nil_check(F->v_2375))), rt_g_lit(", 1)", 4)));
}
} else if (eq_rt_gstr(F->a_2371, rt_g_lit("SUCC", 4))) {
(*F->r_861) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P139)rt_nil_check(F->v_2375))), rt_g_lit(" + 1, ", 6)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_2377)).lo_))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_2377)).hi_))), one_rt_gstr(41)));
} else {
(*F->r_861) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P139)rt_nil_check(F->v_2375))), rt_g_lit(" - 1, ", 6)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_2377)).lo_))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_2377)).hi_))), one_rt_gstr(41)));
}
goto ret_;
} else if (((G_NV((*(P121)rt_nil_check(F->tt_2373)).kind_) == ((rt_int)6LL)) && ((eq_rt_gstr(F->a_2371, rt_g_lit("FIRST", 5)) || eq_rt_gstr(F->a_2371, rt_g_lit("LAST", 4))) || eq_rt_gstr(F->a_2371, rt_g_lit("LENGTH", 6))))) {
f_type_array_attr_900(F->up, F->e_858, F->tt_2373, F->c_2377, &(*F->t_860), &(*F->r_861));
goto ret_;
} else if ((eq_rt_gstr(F->a_2371, rt_g_lit("FIRST", 5)) || eq_rt_gstr(F->a_2371, rt_g_lit("LAST", 4)))) {
(*F->t_860) = F->tt_2373;
if (f_bounded_457(F->up, F->c_2377)) {
if (eq_rt_gstr(F->a_2371, rt_g_lit("FIRST", 5))) {
(*F->r_861) = (*(P177)rt_nil_check(F->c_2377)).lo_;
} else {
(*F->r_861) = (*(P177)rt_nil_check(F->c_2377)).hi_;
}
} else if ((G_NV((*(P121)rt_nil_check(F->tt_2373)).kind_) == ((rt_int)1LL))) {
if (eq_rt_gstr(F->a_2371, rt_g_lit("FIRST", 5))) {
(*F->r_861) = f_mk_221(F->up, rt_g_lit("(-INT64_MAX)", 12));
} else {
(*F->r_861) = f_mk_221(F->up, rt_g_lit("INT64_MAX", 9));
}
} else if (((G_NV((*(P121)rt_nil_check(F->tt_2373)).kind_) == ((rt_int)3LL)) && (f_root_431(F->up, F->tt_2373) == F->up->ty_sfloat_168))) {
if (eq_rt_gstr(F->a_2371, rt_g_lit("FIRST", 5))) {
(*F->r_861) = f_mk_221(F->up, rt_g_lit("(-3.40282347e+38)", 17));
} else {
(*F->r_861) = f_mk_221(F->up, rt_g_lit("3.40282347e+38", 14));
}
} else if ((G_NV((*(P121)rt_nil_check(F->tt_2373)).kind_) == ((rt_int)3LL))) {
if (eq_rt_gstr(F->a_2371, rt_g_lit("FIRST", 5))) {
(*F->r_861) = f_mk_221(F->up, rt_g_lit("(-1.7976931348623157e+308)", 26));
} else {
(*F->r_861) = f_mk_221(F->up, rt_g_lit("1.7976931348623157e+308", 23));
}
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_858)).line_), cat_rt_gstr(rt_g_lit("this type has no ", 17), F->a_2371));
}
goto ret_;
}
f_other_attr_1143(F->up, F->e_858, F->y_2372, &(*F->t_860), &(*F->r_861));
goto ret_;
}
if (((F->y_2372 != NULL) && ((G_NV((*(P116)rt_nil_check(F->y_2372)).kind_) != ((rt_int)1LL)) && (G_NV((*(P116)rt_nil_check(F->y_2372)).kind_) != ((rt_int)2LL))))) {
f_other_attr_1143(F->up, F->e_858, F->y_2372, &(*F->t_860), &(*F->r_861));
goto ret_;
}
if (((eq_rt_gstr(F->a_2371, rt_g_lit("POSITION", 8)) || eq_rt_gstr(F->a_2371, rt_g_lit("FIRST_BIT", 9))) || eq_rt_gstr(F->a_2371, rt_g_lit("LAST_BIT", 8)))) {
f_component_attr_880(F->up, F->e_858, &(*F->t_860), &(*F->r_861));
goto ret_;
}
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->e_858)).a_, NULL, &F->tt_2373, &F->v_2375);
if (eq_rt_gstr(F->a_2371, rt_g_lit("ACCESS_SIZE", 11))) {
if ((G_NV((*(P121)rt_nil_check(F->tt_2373)).kind_) != ((rt_int)8LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_858)).line_), rt_g_lit("ACCESS_SIZE is an attribute of access types and objects (RM79 App. A)", 69));
}
(*F->t_860) = F->up->ty_int_155;
(*F->r_861) = f_mk_221(F->up, rt_g_lit("((rt_int)(sizeof(void *) * 8))", 30));
goto ret_;
}
if (eq_rt_gstr(F->a_2371, rt_g_lit("SIZE", 4))) {
(*F->t_860) = F->up->ty_int_155;
f_object_bits_870(F->up, F->tt_2373, (*(P139)rt_nil_check(F->v_2375)), &(*F->r_861));
goto ret_;
}
if ((G_NV((*(P121)rt_nil_check(F->tt_2373)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_588(F->up, F->tt_2373);
f_deref_719(F->up, (*(P139)rt_nil_check(F->v_2375)), F->tt_2373, &F->d_2376);
F->v_2375 = F->d_2376;
F->tt_2373 = (*(P121)rt_nil_check(F->tt_2373)).target_;
}
(*F->t_860) = F->up->ty_int_155;
if (((G_NV((*(P121)rt_nil_check(F->tt_2373)).kind_) == ((rt_int)6LL)) && ((eq_rt_gstr(F->a_2371, rt_g_lit("FIRST", 5)) || eq_rt_gstr(F->a_2371, rt_g_lit("LAST", 4))) || eq_rt_gstr(F->a_2371, rt_g_lit("LENGTH", 6))))) {
f_object_array_attr_894(F->up, F->e_858, F->tt_2373, (*(P139)rt_nil_check(F->v_2375)), &(*F->t_860), &(*F->r_861));
goto ret_;
}
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_858)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), F->a_2371), rt_g_lit(" is not handled here", 20)));
ret_:

  return;
}

static void f_type_bits_866(struct f_greenc_1fr *up_, P121 t_863, P177 c_864, P139 *r_865) {
  struct f_type_bits_866fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_863 = t_863;
F->c_864 = c_864;
F->r_865 = r_865;
F->ct_2380 = NULL;
if ((G_NV((*(P121)rt_nil_check(F->t_863)).kind_) == ((rt_int)6LL))) {
if ((!f_bounded_457(F->up, F->c_864))) {
f_fail_242(F->up, ((rt_int)0LL), rt_g_lit("SIZE of an array type needs its bounds (RM79 App. A)", 52));
}
f_elem_ctype_546(F->up, (*(P121)rt_nil_check(F->t_863)).elem_, &F->ct_2380);
(*F->r_865) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ rt_int l_ = ", 15), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_864)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_864)).hi_))), rt_g_lit("; (h_ >= l_ \? h_ - l_ + 1 : 0) * (rt_int)sizeof(", 48)), (*(P139)rt_nil_check(F->ct_2380))), rt_g_lit(") * 8; })", 9)));
} else if (((G_NV((*(P121)rt_nil_check(F->t_863)).kind_) == ((rt_int)11LL)) || (G_NV((*(P121)rt_nil_check(F->t_863)).kind_) == ((rt_int)2LL)))) {
(*F->r_865) = f_mk_221(F->up, rt_g_lit("((rt_int)8)", 11));
} else if ((G_NV((*(P121)rt_nil_check(F->t_863)).kind_) == ((rt_int)4LL))) {
if ((f_list_len_301(F->up, (*(P121)rt_nil_check(F->t_863)).lits_) <= ((rt_int)256LL))) {
(*F->r_865) = f_mk_221(F->up, rt_g_lit("((rt_int)8)", 11));
} else {
(*F->r_865) = f_mk_221(F->up, rt_g_lit("((rt_int)16)", 12));
}
} else if (((G_NV((*(P121)rt_nil_check(F->t_863)).kind_) == ((rt_int)1LL)) && (f_root_431(F->up, F->t_863) == F->up->ty_short_166))) {
(*F->r_865) = f_mk_221(F->up, rt_g_lit("((rt_int)32)", 12));
} else if (((G_NV((*(P121)rt_nil_check(F->t_863)).kind_) == ((rt_int)3LL)) && (f_root_431(F->up, F->t_863) == F->up->ty_sfloat_168))) {
(*F->r_865) = f_mk_221(F->up, rt_g_lit("((rt_int)32)", 12));
} else {
f_ctype_474(F->up, F->t_863, &F->ct_2380);
(*F->r_865) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(sizeof(", 17), (*(P139)rt_nil_check(F->ct_2380))), rt_g_lit(") * 8))", 7)));
}
ret_:

  return;
}

static void f_object_bits_870(struct f_greenc_1fr *up_, P121 t_867, rt_gstr v_868, P139 *r_869) {
  struct f_object_bits_870fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_867 = t_867;
F->v_868 = cp_rt_gstr(v_868);
F->r_869 = r_869;
F->ct_2381 = NULL;
F->et_2382 = NULL;
if ((G_NV((*(P121)rt_nil_check(F->t_867)).kind_) == ((rt_int)6LL))) {
f_ctype_474(F->up, F->t_867, &F->ct_2381);
f_elem_ctype_546(F->up, (*(P121)rt_nil_check(F->t_867)).elem_, &F->et_2382);
(*F->r_869) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P139)rt_nil_check(F->ct_2381))), rt_g_lit(" sz_ = ", 7)), F->v_868), rt_g_lit("; G_CNT(sz_) * (rt_int)sizeof(", 30)), (*(P139)rt_nil_check(F->et_2382))), rt_g_lit(") * 8; })", 9)));
} else {
f_type_bits_866(F->up, F->t_867, NULL, &(*F->r_869));
(*F->r_869) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ (void)(", 10), F->v_868), rt_g_lit("); ", 3)), (*(P139)rt_nil_check((*F->r_869)))), rt_g_lit("; })", 4)));
}
ret_:

  return;
}

static void f_numeric_attr_876(struct f_greenc_1fr *up_, P173 e_871, P121 tt_872, P177 c_873, P121 *t_874, P139 *r_875) {
  struct f_numeric_attr_876fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_871 = e_871;
F->tt_872 = tt_872;
F->c_873 = c_873;
F->t_874 = t_874;
F->r_875 = r_875;
F->a_2383 = cp_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_871)).name_)));
F->short_2384 = INT_MIN;
F->short_2384 = (f_root_431(F->up, F->tt_872) == F->up->ty_sfloat_168);
(*F->t_874) = F->up->ty_int_155;
if (eq_rt_gstr(F->a_2383, rt_g_lit("ACCESS_SIZE", 11))) {
if ((G_NV((*(P121)rt_nil_check(F->tt_872)).kind_) != ((rt_int)8LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_871)).line_), rt_g_lit("ACCESS_SIZE is an attribute of access types (RM79 App. A)", 57));
}
(*F->r_875) = f_mk_221(F->up, rt_g_lit("((rt_int)(sizeof(void *) * 8))", 30));
} else if (eq_rt_gstr(F->a_2383, rt_g_lit("RADIX", 5))) {
if ((!f_is_numeric_436(F->up, F->tt_872))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_871)).line_), rt_g_lit("RADIX is an attribute of numeric types (RM79 App. A)", 52));
}
(*F->r_875) = f_mk_221(F->up, rt_g_lit("((rt_int)2)", 11));
} else if ((G_NV((*(P121)rt_nil_check(F->tt_872)).kind_) == ((rt_int)3LL))) {
if (eq_rt_gstr(F->a_2383, rt_g_lit("DIGITS", 6))) {
if (((F->c_873 != NULL) && ((*(P177)rt_nil_check(F->c_873)).acc_ != NULL))) {
(*F->r_875) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(", 10), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_873)).acc_))), rt_g_lit("))", 2)));
} else {
(*F->r_875) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV((*(P121)rt_nil_check(F->tt_872)).ndigits_)))), one_rt_gstr(41)));
}
} else if (eq_rt_gstr(F->a_2383, rt_g_lit("BITS", 4))) {
if (G_NV(F->short_2384)) {
(*F->r_875) = f_mk_221(F->up, rt_g_lit("((rt_int)24)", 12));
} else {
(*F->r_875) = f_mk_221(F->up, rt_g_lit("((rt_int)53)", 12));
}
} else if (eq_rt_gstr(F->a_2383, rt_g_lit("EXPONENT_MIN", 12))) {
if (G_NV(F->short_2384)) {
(*F->r_875) = f_mk_221(F->up, rt_g_lit("((rt_int)-125)", 14));
} else {
(*F->r_875) = f_mk_221(F->up, rt_g_lit("((rt_int)-1021)", 15));
}
} else if (eq_rt_gstr(F->a_2383, rt_g_lit("EXPONENT_MAX", 12))) {
if (G_NV(F->short_2384)) {
(*F->r_875) = f_mk_221(F->up, rt_g_lit("((rt_int)128)", 13));
} else {
(*F->r_875) = f_mk_221(F->up, rt_g_lit("((rt_int)1024)", 14));
}
} else if (eq_rt_gstr(F->a_2383, rt_g_lit("SMALL", 5))) {
(*F->t_874) = F->tt_872;
if (G_NV(F->short_2384)) {
(*F->r_875) = f_mk_221(F->up, rt_g_lit("1.17549435e-38", 14));
} else {
(*F->r_875) = f_mk_221(F->up, rt_g_lit("2.2250738585072014e-308", 23));
}
} else if (eq_rt_gstr(F->a_2383, rt_g_lit("LARGE", 5))) {
(*F->t_874) = F->tt_872;
if (G_NV(F->short_2384)) {
(*F->r_875) = f_mk_221(F->up, rt_g_lit("3.40282347e+38", 14));
} else {
(*F->r_875) = f_mk_221(F->up, rt_g_lit("1.7976931348623157e+308", 23));
}
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_871)).line_), rt_g_lit("DELTA is an attribute of fixed point types (RM79 App. A)", 56));
}
} else if (((G_NV((*(P121)rt_nil_check(F->tt_872)).kind_) == ((rt_int)16LL)) && ((*(P121)rt_nil_check(F->tt_872)).fsmall_ != NULL))) {
if (eq_rt_gstr(F->a_2383, rt_g_lit("DELTA", 5))) {
(*F->t_874) = F->tt_872;
if (((F->c_873 != NULL) && ((*(P177)rt_nil_check(F->c_873)).acc_ != NULL))) {
(*F->r_875) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_873)).acc_))), one_rt_gstr(41)));
} else {
(*F->r_875) = (*(P121)rt_nil_check(F->tt_872)).fdelta_;
}
} else if (eq_rt_gstr(F->a_2383, rt_g_lit("SMALL", 5))) {
(*F->t_874) = F->tt_872;
(*F->r_875) = (*(P121)rt_nil_check(F->tt_872)).fsmall_;
} else if (eq_rt_gstr(F->a_2383, rt_g_lit("LARGE", 5))) {
(*F->t_874) = F->tt_872;
(*F->r_875) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix_large(", 15), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->tt_872)).fsmall_))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_873)).lo_))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_873)).hi_))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_2383, rt_g_lit("BITS", 4))) {
(*F->r_875) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix_bits(", 14), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->tt_872)).fsmall_))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_873)).lo_))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_873)).hi_))), one_rt_gstr(41)));
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_871)).line_), cat_rt_gstr(F->a_2383, rt_g_lit(" is not an attribute of fixed point types (RM79 App. A)", 55)));
}
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_871)).line_), cat_rt_gstr(F->a_2383, rt_g_lit(" is an attribute of real types (RM79 App. A)", 44)));
}
ret_:

  return;
}

static void f_component_attr_880(struct f_greenc_1fr *up_, P173 e_877, P121 *t_878, P139 *r_879) {
  struct f_component_attr_880fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_877 = e_877;
F->t_878 = t_878;
F->r_879 = r_879;
F->bt_2385 = NULL;
F->v_2386 = NULL;
F->ct_2387 = NULL;
F->f_2388 = NULL;
if ((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_877)).a_)).kind_) != ((rt_int)9LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_877)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_877)).name_)), rt_g_lit(" is an attribute of a record component, X.C'", 44)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_877)).name_))), rt_g_lit(" (RM79 13.7)", 12)));
}
f_gexpr_773(F->up, (*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_877)).a_)).a_, NULL, &F->bt_2385, &F->v_2386);
if ((G_NV((*(P121)rt_nil_check(F->bt_2385)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_588(F->up, F->bt_2385);
F->bt_2385 = (*(P121)rt_nil_check(F->bt_2385)).target_;
}
if ((G_NV((*(P121)rt_nil_check(F->bt_2385)).kind_) != ((rt_int)7LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_877)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_877)).name_)), rt_g_lit(" is an attribute of a record component (RM79 13.7)", 50)));
}
F->f_2388 = (*(P121)rt_nil_check(F->bt_2385)).fields_;
while (((F->f_2388 != NULL) && (!eq_rt_gstr((*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_2388)).name_)), (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_877)).a_)).name_)))))) {
F->f_2388 = (*(P1767)rt_nil_check(F->f_2388)).next_;
}
L_end_2389: ;
if ((F->f_2388 == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_877)).line_), cat_rt_gstr(cat_rt_gstr(f_kind_name_465(F->up, F->bt_2385), rt_g_lit(" has no component ", 18)), (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_877)).a_)).name_))));
}
f_ctype_474(F->up, F->bt_2385, &F->ct_2387);
(*F->t_878) = F->up->ty_int_155;
f_component_place_541(F->up, F->bt_2385, F->f_2388, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_877)).name_)), (*(P139)rt_nil_check(F->ct_2387)), &(*F->r_879));
ret_:

  return;
}

static void f_config_attr_884(struct f_greenc_1fr *up_, P173 e_881, P121 *t_882, P139 *r_883) {
  struct f_config_attr_884fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_881 = e_881;
F->t_882 = t_882;
F->r_883 = r_883;
F->a_2390 = cp_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_881)).name_)));
F->p_2391 = cp_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_881)).a_)).name_)));
F->nm_2392 = NULL;
F->nm_2392 = F->up->conf_system_216;
(*F->t_882) = F->up->ty_int_155;
if (eq_rt_gstr(F->p_2391, rt_g_lit("OPTION", 6))) {
(*F->t_882) = F->up->ty_bool_156;
if (eq_rt_gstr(F->a_2390, rt_g_lit("TIME", 4))) {
if (((F->up->conf_optimize_219 != NULL) && eq_rt_gstr((*(P139)rt_nil_check(F->up->conf_optimize_219)), rt_g_lit("TIME", 4)))) {
(*F->r_883) = f_mk_221(F->up, rt_g_lit("1", 1));
} else {
(*F->r_883) = f_mk_221(F->up, rt_g_lit("0", 1));
}
} else if (eq_rt_gstr(F->a_2390, rt_g_lit("SPACE", 5))) {
if (((F->up->conf_optimize_219 != NULL) && eq_rt_gstr((*(P139)rt_nil_check(F->up->conf_optimize_219)), rt_g_lit("SPACE", 5)))) {
(*F->r_883) = f_mk_221(F->up, rt_g_lit("1", 1));
} else {
(*F->r_883) = f_mk_221(F->up, rt_g_lit("0", 1));
}
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_881)).line_), rt_g_lit("OPTION has the attributes TIME and SPACE (RM79 13.7)", 52));
}
} else if (eq_rt_gstr(F->a_2390, rt_g_lit("CLOCK", 5))) {
(*F->t_882) = F->up->ty_time_170;
(*F->r_883) = f_mk_221(F->up, rt_g_lit("((double)rt_time())", 19));
} else if (eq_rt_gstr(F->a_2390, rt_g_lit("MAX_PRIORITY", 12))) {
(*F->r_883) = f_mk_221(F->up, rt_g_lit("((rt_int)255)", 13));
} else if (eq_rt_gstr(F->a_2390, rt_g_lit("MIN_PRIORITY", 12))) {
(*F->r_883) = f_mk_221(F->up, rt_g_lit("((rt_int)0)", 11));
} else if (eq_rt_gstr(F->a_2390, rt_g_lit("NAME", 4))) {
if ((F->nm_2392 == NULL)) {
F->nm_2392 = f_mk_221(F->up, rt_g_lit("PALEO", 5));
}
(*F->t_882) = F->up->ty_string_159;
(*F->r_883) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_lit(", 9), f_c_string_758(F->up, (*(P139)rt_nil_check(F->nm_2392)))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(({ rt_gstr at2394 = (*(P139)rt_nil_check(F->nm_2392)); at2394.hi >= at2394.lo ? at2394.hi - at2394.lo + 1 : (rt_int)0; })))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_2390, rt_g_lit("STORAGE_UNIT", 12))) {
(*F->r_883) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->up->conf_storage_unit_217)))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_2390, rt_g_lit("MEMORY_SIZE", 11))) {
(*F->r_883) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->up->conf_memory_size_218)))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_2390, rt_g_lit("MAX_INT", 7))) {
(*F->r_883) = f_mk_221(F->up, rt_g_lit("INT64_MAX", 9));
} else if (eq_rt_gstr(F->a_2390, rt_g_lit("MIN_INT", 7))) {
(*F->r_883) = f_mk_221(F->up, rt_g_lit("(-INT64_MAX)", 12));
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_881)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("SYSTEM has no attribute ", 24), F->a_2390), rt_g_lit(" (RM79 13.7)", 12)));
}
ret_:

  return;
}

static void f_attr_dim_888(struct f_greenc_1fr *up_, P173 e_885, P121 arrt_886, rt_int *n_887) {
  struct f_attr_dim_888fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_885 = e_885;
F->arrt_886 = arrt_886;
F->n_887 = n_887;
F->ok_2395 = INT_MIN;
(*F->n_887) = ((rt_int)1LL);
if (((*(P173)rt_nil_check(F->e_885)).b_ != NULL)) {
f_manifest_486(F->up, (*(P173)rt_nil_check(F->e_885)).b_, &(*F->n_887), &F->ok_2395);
 (void)rt_range(F->ok_2395, 0, 1);
if ((!G_NV(F->ok_2395))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_885)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the index number of ", 20), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_885)).name_))), rt_g_lit("(N) is static (RM79 App. A)", 27)));
}
}
if (((G_NV((*F->n_887)) < ((rt_int)1LL)) || (G_NV((*F->n_887)) > G_NV((*(P121)rt_nil_check(F->arrt_886)).dims_)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_885)).line_), cat_rt_gstr(cat_rt_gstr(f_kind_name_465(F->up, F->arrt_886), rt_g_lit(" has no index ", 14)), rt_g_s2g(rt_str_of_int(G_NV((*F->n_887))))));
}
ret_:

  return;
}

static void f_object_array_attr_894(struct f_greenc_1fr *up_, P173 e_889, P121 arrt_890, rt_gstr v_891, P121 *t_892, P139 *r_893) {
  struct f_object_array_attr_894fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_889 = e_889;
F->arrt_890 = arrt_890;
F->v_891 = cp_rt_gstr(v_891);
F->t_892 = t_892;
F->r_893 = r_893;
F->n_2396 = INT64_MIN;
F->it_2397 = NULL;
F->it_2397 = F->arrt_890;
F->ct_2398 = NULL;
F->tmp_2399 = NULL;
F->p_2400 = NULL;
F->lo_2401 = NULL;
F->hi_2402 = NULL;
f_attr_dim_888(F->up, F->e_889, F->arrt_890, &F->n_2396);
f_ctype_474(F->up, F->arrt_890, &F->ct_2398);
f_new_name_224(F->up, rt_g_lit("at", 2), &F->tmp_2399);
F->p_2400 = F->tmp_2399;
{ rt_int lo2405 = ((rt_int)2LL), hi2406 = G_NV(F->n_2396);
for (rt_int it2407 = lo2405; it2407 <= hi2406; it2407++) {
F->k_2404 = it2407;
F->it_2397 = (*(P121)rt_nil_check(F->it_2397)).elem_;
}
}
L_end_2403: ;
if ((G_NV(F->n_2396) == ((rt_int)1LL))) {
F->lo_2401 = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->p_2400)), rt_g_lit(".lo", 3)));
F->hi_2402 = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->p_2400)), rt_g_lit(".hi", 3)));
} else {
{ rt_int lo2410 = ((rt_int)3LL), hi2411 = G_NV(F->n_2396);
for (rt_int it2412 = lo2410; it2412 <= hi2411; it2412++) {
F->k_2409 = it2412;
F->p_2400 = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->p_2400)), rt_g_lit(".p[0]", 5)));
}
}
L_end_2408: ;
F->lo_2401 = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->p_2400)), rt_g_lit(".lo2", 4)));
F->hi_2402 = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->p_2400)), rt_g_lit(".hi2", 4)));
}
(*F->t_892) = (*(P121)rt_nil_check(F->it_2397)).idx_;
if (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_889)).name_)), rt_g_lit("FIRST", 5))) {
(*F->r_893) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P139)rt_nil_check(F->ct_2398))), one_rt_gstr(32)), (*(P139)rt_nil_check(F->tmp_2399))), rt_g_lit(" = ", 3)), F->v_891), rt_g_lit("; ", 2)), (*(P139)rt_nil_check(F->lo_2401))), rt_g_lit("; })", 4)));
} else if (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_889)).name_)), rt_g_lit("LAST", 4))) {
(*F->r_893) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P139)rt_nil_check(F->ct_2398))), one_rt_gstr(32)), (*(P139)rt_nil_check(F->tmp_2399))), rt_g_lit(" = ", 3)), F->v_891), rt_g_lit("; ", 2)), (*(P139)rt_nil_check(F->hi_2402))), rt_g_lit("; })", 4)));
} else {
(*F->t_892) = F->up->ty_int_155;
(*F->r_893) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P139)rt_nil_check(F->ct_2398))), one_rt_gstr(32)), (*(P139)rt_nil_check(F->tmp_2399))), rt_g_lit(" = ", 3)), F->v_891), rt_g_lit("; ", 2)), (*(P139)rt_nil_check(F->hi_2402))), rt_g_lit(" >= ", 4)), (*(P139)rt_nil_check(F->lo_2401))), rt_g_lit(" \? ", 3)), (*(P139)rt_nil_check(F->hi_2402))), rt_g_lit(" - ", 3)), (*(P139)rt_nil_check(F->lo_2401))), rt_g_lit(" + 1 : (rt_int)0; })", 20)));
}
ret_:

  return;
}

static void f_type_array_attr_900(struct f_greenc_1fr *up_, P173 e_895, P121 arrt_896, P177 c_897, P121 *t_898, P139 *r_899) {
  struct f_type_array_attr_900fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_895 = e_895;
F->arrt_896 = arrt_896;
F->c_897 = c_897;
F->t_898 = t_898;
F->r_899 = r_899;
F->n_2413 = INT64_MIN;
F->it_2414 = NULL;
F->it_2414 = F->arrt_896;
F->cc_2415 = NULL;
F->cc_2415 = F->c_897;
f_attr_dim_888(F->up, F->e_895, F->arrt_896, &F->n_2413);
{ rt_int lo2418 = ((rt_int)2LL), hi2419 = G_NV(F->n_2413);
for (rt_int it2420 = lo2418; it2420 <= hi2419; it2420++) {
F->k_2417 = it2420;
F->it_2414 = (*(P121)rt_nil_check(F->it_2414)).elem_;
if ((F->cc_2415 != NULL)) {
F->cc_2415 = (*(P177)rt_nil_check(F->cc_2415)).inner_;
}
}
}
L_end_2416: ;
if (((F->cc_2415 == NULL) || ((*(P177)rt_nil_check(F->cc_2415)).lo_ == NULL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_895)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the bounds of ", 14), f_kind_name_465(F->up, F->arrt_896)), rt_g_lit(" are not known here: ", 21)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_895)).name_))), rt_g_lit(" applies to an array type with bounds (RM79 3.6)", 48)));
}
(*F->t_898) = (*(P121)rt_nil_check(F->it_2414)).idx_;
if (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_895)).name_)), rt_g_lit("FIRST", 5))) {
(*F->r_899) = (*(P177)rt_nil_check(F->cc_2415)).lo_;
} else if (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_895)).name_)), rt_g_lit("LAST", 4))) {
(*F->r_899) = (*(P177)rt_nil_check(F->cc_2415)).hi_;
} else {
(*F->t_898) = F->up->ty_int_155;
(*F->r_899) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ rt_int l_ = ", 15), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->cc_2415)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->cc_2415)).hi_))), rt_g_lit("; h_ >= l_ \? h_ - l_ + 1 : (rt_int)0; })", 40)));
}
ret_:

  return;
}

static void f_lit_table_903(struct f_greenc_1fr *up_, P121 t_901, P139 *r_902) {
  struct f_lit_table_903fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_901 = t_901;
F->r_902 = r_902;
F->l_2421 = NULL;
F->l_2421 = (*(P121)rt_nil_check(F->t_901)).lits_;
F->s_2422 = NULL;
F->s_2422 = f_mk_221(F->up, rt_g_lit("", 0));
if (((*(P121)rt_nil_check(F->t_901)).littab_ == NULL)) {
f_new_name_224(F->up, rt_g_lit("lits", 4), &(*(P121)rt_nil_check(F->t_901)).littab_);
while ((F->l_2421 != NULL)) {
if ((({ rt_gstr at2424 = (*(P139)rt_nil_check(F->s_2422)); at2424.hi >= at2424.lo ? at2424.hi - at2424.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->s_2422 = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->s_2422)), rt_g_lit(", ", 2)));
}
if ((G_NV((*(P173)rt_nil_check(F->l_2421)).kind_) == ((rt_int)3LL))) {
F->s_2422 = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->s_2422)), f_c_string_758(F->up, cat_rt_gstr(cat_rt_gstr(f_q_239(F->up), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->l_2421)).name_))), f_q_239(F->up)))));
} else {
F->s_2422 = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->s_2422)), f_c_string_758(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->l_2421)).name_)))));
}
F->l_2421 = (*(P173)rt_nil_check(F->l_2421)).next_;
}
L_end_2423: ;
f_put_to_246(F->up, F->up->out_types_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static const char *const ", 25), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_901)).littab_))), rt_g_lit("[] = {", 6)), (*(P139)rt_nil_check(F->s_2422))), rt_g_lit("};", 2)));
}
(*F->r_902) = (*(P121)rt_nil_check(F->t_901)).littab_;
ret_:

  return;
}

static void f_val_rep_909(struct f_greenc_1fr *up_, P173 e_904, P121 tt_905, P177 c_906, P121 *t_907, P139 *r_908) {
  struct f_val_rep_909fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_904 = e_904;
F->tt_905 = tt_905;
F->c_906 = c_906;
F->t_907 = t_907;
F->r_908 = r_908;
F->aty_2425 = NULL;
F->v_2426 = NULL;
F->lt_2427 = NULL;
F->n_2428 = INT64_MIN;
if (((*(P173)rt_nil_check(F->e_904)).b_ == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_904)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_904)).name_))), rt_g_lit(" takes an argument", 18)));
}
if (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_904)).name_)), rt_g_lit("REP", 3))) {
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->e_904)).b_, F->tt_905, &F->aty_2425, &F->v_2426);
f_check_type_469(F->up, F->aty_2425, F->tt_905, G_NV((*(P173)rt_nil_check(F->e_904)).line_));
(*F->t_907) = F->up->ty_string_159;
if ((G_NV((*(P121)rt_nil_check(F->tt_905)).kind_) == ((rt_int)1LL))) {
(*F->r_908) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_str_of_int(", 14), (*(P139)rt_nil_check(F->v_2426))), one_rt_gstr(41)));
} else if ((G_NV((*(P121)rt_nil_check(F->tt_905)).kind_) == ((rt_int)3LL))) {
(*F->r_908) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_image_float(", 17), (*(P139)rt_nil_check(F->v_2426))), one_rt_gstr(41)));
} else if ((G_NV((*(P121)rt_nil_check(F->tt_905)).kind_) == ((rt_int)2LL))) {
(*F->r_908) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_bool_rep(", 14), (*(P139)rt_nil_check(F->v_2426))), one_rt_gstr(41)));
} else if ((G_NV((*(P121)rt_nil_check(F->tt_905)).kind_) == ((rt_int)11LL))) {
(*F->r_908) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_char_rep(", 14), (*(P139)rt_nil_check(F->v_2426))), one_rt_gstr(41)));
} else if ((G_NV((*(P121)rt_nil_check(F->tt_905)).kind_) == ((rt_int)4LL))) {
f_lit_table_903(F->up, F->tt_905, &F->lt_2427);
(*F->r_908) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_enum_rep(", 14), (*(P139)rt_nil_check(F->v_2426))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->lt_2427))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(f_list_len_301(F->up, (*(P121)rt_nil_check(F->tt_905)).lits_)))), one_rt_gstr(41)));
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_904)).line_), rt_g_lit("REP is an attribute of scalar types", 35));
}
(*F->r_908) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_s2g(", 9), (*(P139)rt_nil_check((*F->r_908)))), one_rt_gstr(41)));
goto ret_;
}
(*F->t_907) = F->tt_905;
if ((G_NV((*(P121)rt_nil_check(F->tt_905)).kind_) == ((rt_int)1LL))) {
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->e_904)).b_, F->up->ty_string_159, &F->aty_2425, &F->v_2426);
f_check_type_469(F->up, F->aty_2425, F->up->ty_string_159, G_NV((*(P173)rt_nil_check(F->e_904)).line_));
(*F->r_908) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_int_of_str(rt_g_g2s(", 23), (*(P139)rt_nil_check(F->v_2426))), rt_g_lit("))", 2)));
if (f_bounded_457(F->up, F->c_906)) {
(*F->r_908) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P139)rt_nil_check((*F->r_908)))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_906)).lo_))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_906)).hi_))), one_rt_gstr(41)));
}
} else if ((G_NV((*(P121)rt_nil_check(F->tt_905)).kind_) == ((rt_int)3LL))) {
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->e_904)).b_, F->up->ty_string_159, &F->aty_2425, &F->v_2426);
f_check_type_469(F->up, F->aty_2425, F->up->ty_string_159, G_NV((*(P173)rt_nil_check(F->e_904)).line_));
(*F->r_908) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_float_val(rt_g_g2s(", 24), (*(P139)rt_nil_check(F->v_2426))), rt_g_lit("))", 2)));
} else if ((((G_NV((*(P121)rt_nil_check(F->tt_905)).kind_) == ((rt_int)2LL)) || (G_NV((*(P121)rt_nil_check(F->tt_905)).kind_) == ((rt_int)11LL))) || (G_NV((*(P121)rt_nil_check(F->tt_905)).kind_) == ((rt_int)4LL)))) {
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->e_904)).b_, NULL, &F->aty_2425, &F->v_2426);
if (f_is_string_551(F->up, F->aty_2425)) {
F->v_2426 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_g2s(", 9), (*(P139)rt_nil_check(F->v_2426))), one_rt_gstr(41)));
if ((G_NV((*(P121)rt_nil_check(F->tt_905)).kind_) == ((rt_int)2LL))) {
F->v_2426 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_bool_val(", 14), (*(P139)rt_nil_check(F->v_2426))), one_rt_gstr(41)));
} else if ((G_NV((*(P121)rt_nil_check(F->tt_905)).kind_) == ((rt_int)11LL))) {
F->v_2426 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_char_val(", 14), (*(P139)rt_nil_check(F->v_2426))), one_rt_gstr(41)));
} else {
f_lit_table_903(F->up, F->tt_905, &F->lt_2427);
F->v_2426 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_enum_val(", 14), (*(P139)rt_nil_check(F->v_2426))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->lt_2427))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(f_list_len_301(F->up, (*(P121)rt_nil_check(F->tt_905)).lits_)))), one_rt_gstr(41)));
}
} else {
f_check_type_469(F->up, F->aty_2425, F->up->ty_int_155, G_NV((*(P173)rt_nil_check(F->e_904)).line_));
F->v_2426 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->v_2426))), rt_g_lit(" - 1)", 5)));
}
(*F->r_908) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P139)rt_nil_check(F->v_2426))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_906)).lo_))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_906)).hi_))), one_rt_gstr(41)));
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_904)).line_), rt_g_lit("VAL is an attribute of scalar types", 35));
}
ret_:

  return;
}

static void f_allocator_914(struct f_greenc_1fr *up_, P173 e_910, P121 want_911, P121 *t_912, P139 *r_913) {
  struct f_allocator_914fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_910 = e_910;
F->want_911 = want_911;
F->t_912 = t_912;
F->r_913 = r_913;
F->y_2429 = NULL;
F->y_2429 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_910)).name_)));
F->target_2430 = NULL;
F->vt_2431 = NULL;
F->ct_2432 = NULL;
F->pt_2433 = NULL;
F->cell_2434 = NULL;
F->v_2435 = NULL;
F->x_2436 = NULL;
if (((F->want_911 == NULL) || (G_NV((*(P121)rt_nil_check(F->want_911)).kind_) != ((rt_int)8LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_910)).line_), rt_g_lit("the access type of this allocator is not known here", 51));
}
if (((F->y_2429 == NULL) || (G_NV((*(P116)rt_nil_check(F->y_2429)).kind_) != ((rt_int)5LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_910)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_910)).name_)), rt_g_lit(" is not a type", 14)));
}
f_finish_ptr_588(F->up, F->want_911);
F->target_2430 = (*(P121)rt_nil_check(F->want_911)).target_;
if ((!f_same_429(F->up, (*(P116)rt_nil_check(F->y_2429)).t_, F->want_911))) {
f_check_type_469(F->up, (*(P116)rt_nil_check(F->y_2429)).t_, F->target_2430, G_NV((*(P173)rt_nil_check(F->e_910)).line_));
}
f_ctype_474(F->up, F->target_2430, &F->ct_2432);
f_ctype_474(F->up, F->want_911, &F->pt_2433);
f_new_name_224(F->up, rt_g_lit("cell", 4), &F->cell_2434);
if (((*(P173)rt_nil_check(F->e_910)).a_ == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_910)).line_), rt_g_lit("an allocator gives the initial value: new T(...) (RM79 4.7)", 59));
}
if ((F->up->pure_sym_210 != NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_910)).line_), rt_g_lit("an allocator cannot appear in a function body (RM79 6.5)", 56));
}
if ((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_910)).a_)).kind_) == ((rt_int)12LL))) {
f_aggregate_919(F->up, (*(P173)rt_nil_check(F->e_910)).a_, F->target_2430, &F->vt_2431, &F->v_2435);
} else {
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->e_910)).a_, F->target_2430, &F->vt_2431, &F->v_2435);
}
f_check_type_469(F->up, F->vt_2431, F->target_2430, G_NV((*(P173)rt_nil_check(F->e_910)).line_));
f_copy_code_604(F->up, F->target_2430, (*(P139)rt_nil_check(F->v_2435)), &F->x_2436);
(*F->t_912) = F->want_911;
(*F->r_913) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P139)rt_nil_check(F->ct_2432))), rt_g_lit(" *", 2)), (*(P139)rt_nil_check(F->cell_2434))), rt_g_lit(" = rt_alloc(sizeof(", 19)), (*(P139)rt_nil_check(F->ct_2432))), rt_g_lit(")); *", 5)), (*(P139)rt_nil_check(F->cell_2434))), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->x_2436))), rt_g_lit("; (", 3)), (*(P139)rt_nil_check(F->pt_2433))), one_rt_gstr(41)), (*(P139)rt_nil_check(F->cell_2434))), rt_g_lit("; })", 4)));
ret_:

  return;
}

static void f_aggregate_919(struct f_greenc_1fr *up_, P173 e_915, P121 want_916, P121 *t_917, P139 *r_918) {
  struct f_aggregate_919fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_915 = e_915;
F->want_916 = want_916;
F->t_917 = t_917;
F->r_918 = r_918;
F->b_2437 = NULL;
F->b_2437 = F->up->agg_bounds_180;
F->up->agg_bounds_180 = NULL;
if ((F->want_916 == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_915)).line_), rt_g_lit("the type of this aggregate is not known here: qualify it, T(...) (RM79 4.6)", 75));
}
(*F->t_917) = F->want_916;
if ((G_NV((*(P121)rt_nil_check(F->want_916)).kind_) == ((rt_int)7LL))) {
f_record_aggregate_941(F->up, F->e_915, F->want_916, &(*F->r_918));
} else if ((G_NV((*(P121)rt_nil_check(F->want_916)).kind_) == ((rt_int)6LL))) {
f_array_aggregate_959(F->up, F->e_915, F->want_916, F->b_2437, &(*F->r_918));
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_915)).line_), cat_rt_gstr(rt_g_lit("an aggregate builds a record or an array, not ", 46), f_kind_name_465(F->up, F->want_916)));
}
ret_:

  return;
}

static void f_captured_922(struct f_greenc_1fr *up_, P125 b_920, P139 *r_921) {
  struct f_captured_922fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_920 = b_920;
F->r_921 = r_921;
F->l_2438 = NULL;
F->l_2438 = (*(P125)rt_nil_check(F->b_920)).head_;
(*F->r_921) = f_mk_221(F->up, rt_g_lit("", 0));
while ((F->l_2438 != NULL)) {
(*F->r_921) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*F->r_921))), one_rt_gstr(32)), (*(P139)rt_nil_check((*(P150)rt_nil_check(F->l_2438)).s_))));
F->l_2438 = (*(P150)rt_nil_check(F->l_2438)).next_;
}
L_end_2439: ;
ret_:

  return;
}

static P1767 f_field_at_925(struct f_greenc_1fr *up_, P121 rt_923, rt_int k_924) {
  struct f_field_at_925fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->rt_923 = rt_923;
F->k_924 = k_924;
F->f_2440 = NULL;
F->f_2440 = (*(P121)rt_nil_check(F->rt_923)).fields_;
{ rt_int lo2443 = ((rt_int)2LL), hi2444 = F->k_924;
for (rt_int it2445 = lo2443; it2445 <= hi2444; it2445++) {
F->i_2442 = it2445;
F->f_2440 = (*(P1767)rt_nil_check(F->f_2440)).next_;
}
}
L_end_2441: ;
F->result_ = F->f_2440;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_names_field_928(struct f_greenc_1fr *up_, P173 x_926, P1767 f_927) {
  struct f_names_field_928fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_926 = x_926;
F->f_927 = f_927;
if ((G_NV((*(P173)rt_nil_check(F->x_926)).kind_) != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->x_926)).name_)), (*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_927)).name_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P173 f_item_for_933(struct f_greenc_1fr *up_, P173 e_929, P121 rt_930, rt_int k_931, rt_int p_932) {
  struct f_item_for_933fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_929 = e_929;
F->rt_930 = rt_930;
F->k_931 = k_931;
F->p_932 = p_932;
F->it_2446 = NULL;
F->it_2446 = (*(P173)rt_nil_check(F->e_929)).a_;
F->lab_2447 = NULL;
F->n_2448 = INT64_MIN;
F->n_2448 = ((rt_int)0LL);
while ((F->it_2446 != NULL)) {
if (((*(P173)rt_nil_check(F->it_2446)).a_ == NULL)) {
F->n_2448 = rt_add(G_NV(F->n_2448), ((rt_int)1LL));
if ((G_NV(F->n_2448) == F->p_932)) {
F->result_ = (*(P173)rt_nil_check(F->it_2446)).b_;
goto ret_;
}
} else {
F->lab_2447 = (*(P173)rt_nil_check(F->it_2446)).a_;
while ((F->lab_2447 != NULL)) {
if (((G_NV((*(P173)rt_nil_check(F->lab_2447)).flag_) == ((rt_int)1LL)) || f_names_field_928(F->up, (*(P173)rt_nil_check(F->lab_2447)).a_, f_field_at_925(F->up, F->rt_930, F->k_931)))) {
F->result_ = (*(P173)rt_nil_check(F->it_2446)).b_;
goto ret_;
}
F->lab_2447 = (*(P173)rt_nil_check(F->lab_2447)).next_;
}
L_end_2450: ;
}
F->it_2446 = (*(P173)rt_nil_check(F->it_2446)).next_;
}
L_end_2449: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_arm_holds_937(struct f_greenc_1fr *up_, P173 arm_934, rt_int v_935, int *res_936) {
  struct f_arm_holds_937fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->arm_934 = arm_934;
F->v_935 = v_935;
F->res_936 = res_936;
F->l_2451 = NULL;
F->l_2451 = (*(P173)rt_nil_check(F->arm_934)).a_;
F->lo_2452 = INT64_MIN;
F->hi_2453 = INT64_MIN;
F->ok_2454 = INT_MIN;
(*F->res_936) = 0;
while ((F->l_2451 != NULL)) {
f_static_choice_954(F->up, (*(P173)rt_nil_check(F->l_2451)).a_, &F->lo_2452, &F->ok_2454);
 (void)rt_range(F->ok_2454, 0, 1);
F->hi_2453 = G_NV(F->lo_2452);
if (((*(P173)rt_nil_check(F->l_2451)).b_ != NULL)) {
f_static_choice_954(F->up, (*(P173)rt_nil_check(F->l_2451)).b_, &F->hi_2453, &F->ok_2454);
 (void)rt_range(F->ok_2454, 0, 1);
}
if (((F->v_935 >= G_NV(F->lo_2452)) && (F->v_935 <= G_NV(F->hi_2453)))) {
(*F->res_936) = 1;
}
F->l_2451 = (*(P173)rt_nil_check(F->l_2451)).next_;
}
L_end_2455: ;
ret_:

  return;
}

static void f_record_aggregate_941(struct f_greenc_1fr *up_, P173 e_938, P121 rt_939, P139 *r_940) {
  struct f_record_aggregate_941fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_938 = e_938;
F->rt_939 = rt_939;
F->r_940 = r_940;
F->it_2456 = NULL;
F->it_2456 = (*(P173)rt_nil_check(F->e_938)).a_;
F->lab_2457 = NULL;
F->vn_2458 = NULL;
F->a_2459 = NULL;
F->f_2460 = NULL;
F->g_2461 = NULL;
F->n_2462 = INT64_MIN;
F->n_2462 = f_field_count_471(F->up, F->rt_939);
F->done_2464.lo = ((rt_int)1LL); F->done_2464.hi = ((rt_int)200LL);
F->done_2464.lo2 = 1; F->done_2464.hi2 = 1;
F->done_2464.p = rt_alloc(sizeof(int) * (size_t)G_CNT(F->done_2464));
for (rt_int i2465 = 0; i2465 < G_CNT(F->done_2464); i2465++) F->done_2464.p[i2465] = INT_MIN;
F->active_2466.lo = ((rt_int)1LL); F->active_2466.hi = ((rt_int)200LL);
F->active_2466.lo2 = 1; F->active_2466.hi2 = 1;
F->active_2466.p = rt_alloc(sizeof(int) * (size_t)G_CNT(F->active_2466));
for (rt_int i2467 = 0; i2467 < G_CNT(F->active_2466); i2467++) F->active_2466.p[i2467] = INT_MIN;
F->dvs_2469.lo = ((rt_int)1LL); F->dvs_2469.hi = ((rt_int)200LL);
F->dvs_2469.lo2 = 1; F->dvs_2469.hi2 = 1;
F->dvs_2469.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->dvs_2469));
for (rt_int i2470 = 0; i2470 < G_CNT(F->dvs_2469); i2470++) F->dvs_2469.p[i2470] = INT64_MIN;
F->order_2472.lo = ((rt_int)1LL); F->order_2472.hi = ((rt_int)200LL);
F->order_2472.lo2 = 1; F->order_2472.hi2 = 1;
F->order_2472.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->order_2472));
for (rt_int i2473 = 0; i2473 < G_CNT(F->order_2472); i2473++) F->order_2472.p[i2473] = INT64_MIN;
F->norder_2474 = INT64_MIN;
F->norder_2474 = ((rt_int)0LL);
F->nung_2475 = INT64_MIN;
F->nung_2475 = ((rt_int)0LL);
F->k_2476 = INT64_MIN;
F->k_2476 = ((rt_int)0LL);
F->d_2477 = INT64_MIN;
F->d_2477 = ((rt_int)0LL);
F->npos_2478 = INT64_MIN;
F->npos_2478 = ((rt_int)0LL);
F->saved_2479 = NULL;
F->saved_2479 = F->up->code_135;
F->ct_2480 = NULL;
F->tmp_2481 = NULL;
F->parts_2482 = NULL;
F->named_2483 = INT_MIN;
F->named_2483 = 0;
F->ok_2484 = INT_MIN;
F->ok_2484 = 0;
F->holds_2485 = INT_MIN;
F->holds_2485 = 0;
if ((G_NV((*(P121)rt_nil_check(F->rt_939)).priv_) && (!f_inside_package_1018(F->up, (*(P121)rt_nil_check(F->rt_939)).decl_)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_938)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("an aggregate of private type ", 29), f_kind_name_465(F->up, F->rt_939)), rt_g_lit(" is not allowed here (RM79 7.4)", 31)));
}
if ((G_NV(F->n_2462) > ((rt_int)200LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_938)).line_), rt_g_lit("a record of more than 200 components", 36));
}
F->f_2460 = (*(P121)rt_nil_check(F->rt_939)).fields_;
{ rt_int lo2488 = ((rt_int)1LL), hi2489 = G_NV(F->n_2462);
for (rt_int it2490 = lo2488; it2490 <= hi2489; it2490++) {
F->i_2487 = it2490;
(*({ A2463 *ix2491 = &(F->done_2464); &ix2491->p[rt_index(F->i_2487, ix2491->lo, ix2491->hi) - ix2491->lo]; })) = 0;
(*({ A2463 *ix2492 = &(F->active_2466); &ix2492->p[rt_index(F->i_2487, ix2492->lo, ix2492->hi) - ix2492->lo]; })) = ((*(P1767)rt_nil_check(F->f_2460)).guard_ == NULL);
if (G_NV(({ A2463 ix2493 = F->active_2466; ix2493.p[rt_index(F->i_2487, ix2493.lo, ix2493.hi) - ix2493.lo]; }))) {
F->norder_2474 = rt_add(G_NV(F->norder_2474), ((rt_int)1LL));
(*({ A2471 *ix2494 = &(F->order_2472); &ix2494->p[rt_index(G_NV(F->norder_2474), ix2494->lo, ix2494->hi) - ix2494->lo]; })) = F->i_2487;
}
F->f_2460 = (*(P1767)rt_nil_check(F->f_2460)).next_;
}
}
L_end_2486: ;
F->nung_2475 = G_NV(F->norder_2474);
{ rt_int lo2497 = ((rt_int)1LL), hi2498 = G_NV(F->nung_2475);
for (rt_int it2499 = lo2497; it2499 <= hi2498; it2499++) {
F->p_2496 = it2499;
F->f_2460 = f_field_at_925(F->up, F->rt_939, G_NV(({ A2471 ix2501 = F->order_2472; ix2501.p[rt_index(F->p_2496, ix2501.lo, ix2501.hi) - ix2501.lo]; })));
if (G_NV((*(P1767)rt_nil_check(F->f_2460)).is_discr_)) {
F->vn_2458 = f_item_for_933(F->up, F->e_938, F->rt_939, G_NV(({ A2471 ix2503 = F->order_2472; ix2503.p[rt_index(F->p_2496, ix2503.lo, ix2503.hi) - ix2503.lo]; })), F->p_2496);
if ((F->vn_2458 == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_938)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("no value for discriminant ", 26), (*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_2460)).name_))), rt_g_lit(" (RM79 3.7.3)", 13)));
}
f_static_choice_954(F->up, F->vn_2458, &(*({ A2468 *ix2507 = &(F->dvs_2469); &ix2507->p[rt_index(G_NV(({ A2471 ix2506 = F->order_2472; ix2506.p[rt_index(F->p_2496, ix2506.lo, ix2506.hi) - ix2506.lo]; })), ix2507->lo, ix2507->hi) - ix2507->lo]; })), &F->ok_2484);
 (void)rt_range(F->ok_2484, 0, 1);
if (((!G_NV(F->ok_2484)) && f_is_enum_lit_756(F->up, F->vn_2458))) {
F->ok_2484 = 1;
(*({ A2468 *ix2509 = &(F->dvs_2469); &ix2509->p[rt_index(G_NV(({ A2471 ix2508 = F->order_2472; ix2508.p[rt_index(F->p_2496, ix2508.lo, ix2508.hi) - ix2508.lo]; })), ix2509->lo, ix2509->hi) - ix2509->lo]; })) = G_NV((*(P116)rt_nil_check(f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->vn_2458)).name_))))).mvalue_);
}
if (((!G_NV(F->ok_2484)) && ((*(P121)rt_nil_check(F->rt_939)).fields_ != NULL))) {
F->g_2461 = NULL;
F->d_2477 = ((rt_int)0LL);
F->a_2459 = NULL;
F->f_2460 = (*(P121)rt_nil_check(F->rt_939)).fields_;
while ((F->f_2460 != NULL)) {
F->g_2461 = (*(P1767)rt_nil_check(F->f_2460)).guard_;
while ((F->g_2461 != NULL)) {
if (eq_rt_gstr((*(P139)rt_nil_check((*(P1892)rt_nil_check(F->g_2461)).disc_)), (*(P139)rt_nil_check((*(P1767)rt_nil_check(f_field_at_925(F->up, F->rt_939, G_NV(({ A2471 ix2513 = F->order_2472; ix2513.p[rt_index(F->p_2496, ix2513.lo, ix2513.hi) - ix2513.lo]; }))))).name_)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_938)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the value of discriminant ", 26), (*(P139)rt_nil_check((*(P1892)rt_nil_check(F->g_2461)).disc_))), rt_g_lit(" in an aggregate is static (RM79 3.7.3)", 39)));
}
F->g_2461 = (*(P1892)rt_nil_check(F->g_2461)).next_;
}
L_end_2511: ;
F->f_2460 = (*(P1767)rt_nil_check(F->f_2460)).next_;
}
L_end_2510: ;
}
}
}
}
L_end_2495: ;
F->f_2460 = (*(P121)rt_nil_check(F->rt_939)).fields_;
{ rt_int lo2516 = ((rt_int)1LL), hi2517 = G_NV(F->n_2462);
for (rt_int it2518 = lo2516; it2518 <= hi2517; it2518++) {
F->i_2515 = it2518;
if (((*(P1767)rt_nil_check(F->f_2460)).guard_ != NULL)) {
F->holds_2485 = 1;
F->g_2461 = (*(P1767)rt_nil_check(F->f_2460)).guard_;
while ((F->g_2461 != NULL)) {
F->d_2477 = f_field_index_944(F->up, F->rt_939, (*(P139)rt_nil_check((*(P1892)rt_nil_check(F->g_2461)).disc_)));
if ((G_NV((*(P173)rt_nil_check((*(P1892)rt_nil_check(F->g_2461)).arm_)).flag_) == ((rt_int)1LL))) {
F->a_2459 = (*(P173)rt_nil_check((*(P1892)rt_nil_check(F->g_2461)).variant_)).b_;
while ((F->a_2459 != NULL)) {
if ((F->a_2459 != (*(P1892)rt_nil_check(F->g_2461)).arm_)) {
f_arm_holds_937(F->up, F->a_2459, G_NV(({ A2468 ix2522 = F->dvs_2469; ix2522.p[rt_index(G_NV(F->d_2477), ix2522.lo, ix2522.hi) - ix2522.lo]; })), &F->ok_2484);
 (void)rt_range(F->ok_2484, 0, 1);
if (G_NV(F->ok_2484)) {
F->holds_2485 = 0;
}
}
F->a_2459 = (*(P173)rt_nil_check(F->a_2459)).next_;
}
L_end_2520: ;
} else {
f_arm_holds_937(F->up, (*(P1892)rt_nil_check(F->g_2461)).arm_, G_NV(({ A2468 ix2524 = F->dvs_2469; ix2524.p[rt_index(G_NV(F->d_2477), ix2524.lo, ix2524.hi) - ix2524.lo]; })), &F->ok_2484);
 (void)rt_range(F->ok_2484, 0, 1);
if ((!G_NV(F->ok_2484))) {
F->holds_2485 = 0;
}
}
F->g_2461 = (*(P1892)rt_nil_check(F->g_2461)).next_;
}
L_end_2519: ;
if (G_NV(F->holds_2485)) {
(*({ A2463 *ix2525 = &(F->active_2466); &ix2525->p[rt_index(F->i_2515, ix2525->lo, ix2525->hi) - ix2525->lo]; })) = 1;
F->norder_2474 = rt_add(G_NV(F->norder_2474), ((rt_int)1LL));
(*({ A2471 *ix2526 = &(F->order_2472); &ix2526->p[rt_index(G_NV(F->norder_2474), ix2526->lo, ix2526->hi) - ix2526->lo]; })) = F->i_2515;
}
}
F->f_2460 = (*(P1767)rt_nil_check(F->f_2460)).next_;
}
}
L_end_2514: ;
f_ctype_474(F->up, F->rt_939, &F->ct_2480);
f_new_name_224(F->up, rt_g_lit("ag", 2), &F->tmp_2481);
F->up->code_135 = f_new_buffer_243(F->up);
while ((F->it_2456 != NULL)) {
if (((*(P173)rt_nil_check(F->it_2456)).a_ == NULL)) {
if (G_NV(F->named_2483)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_938)).line_), rt_g_lit("positional associations come before named ones (RM79 3.6.2)", 59));
}
F->npos_2478 = rt_add(G_NV(F->npos_2478), ((rt_int)1LL));
if ((G_NV(F->npos_2478) > G_NV(F->norder_2474))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_938)).line_), cat_rt_gstr(rt_g_lit("too many components in an aggregate of ", 39), f_kind_name_465(F->up, F->rt_939)));
}
F->k_2476 = G_NV(({ A2471 ix2528 = F->order_2472; ix2528.p[rt_index(G_NV(F->npos_2478), ix2528.lo, ix2528.hi) - ix2528.lo]; }));
f_agg_component_950(F->up, (*(P139)rt_nil_check(F->tmp_2481)), F->rt_939, G_NV(F->k_2476), (*(P173)rt_nil_check(F->it_2456)).b_, G_NV((*(P173)rt_nil_check(F->e_938)).line_));
(*({ A2463 *ix2529 = &(F->done_2464); &ix2529->p[rt_index(G_NV(F->k_2476), ix2529->lo, ix2529->hi) - ix2529->lo]; })) = 1;
} else {
F->named_2483 = 1;
F->lab_2457 = (*(P173)rt_nil_check(F->it_2456)).a_;
while ((F->lab_2457 != NULL)) {
if ((G_NV((*(P173)rt_nil_check(F->lab_2457)).flag_) == ((rt_int)1LL))) {
if (((*(P173)rt_nil_check(F->it_2456)).next_ != NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_938)).line_), rt_g_lit("others comes last in an aggregate (RM79 3.6.2)", 46));
}
{ rt_int lo2533 = ((rt_int)1LL), hi2534 = G_NV(F->n_2462);
for (rt_int it2535 = lo2533; it2535 <= hi2534; it2535++) {
F->i_2532 = it2535;
if ((G_NV(({ A2463 ix2536 = F->active_2466; ix2536.p[rt_index(F->i_2532, ix2536.lo, ix2536.hi) - ix2536.lo]; })) && (!G_NV(({ A2463 ix2537 = F->done_2464; ix2537.p[rt_index(F->i_2532, ix2537.lo, ix2537.hi) - ix2537.lo]; }))))) {
f_agg_component_950(F->up, (*(P139)rt_nil_check(F->tmp_2481)), F->rt_939, F->i_2532, (*(P173)rt_nil_check(F->it_2456)).b_, G_NV((*(P173)rt_nil_check(F->e_938)).line_));
(*({ A2463 *ix2538 = &(F->done_2464); &ix2538->p[rt_index(F->i_2532, ix2538->lo, ix2538->hi) - ix2538->lo]; })) = 1;
}
}
}
L_end_2531: ;
} else {
if (((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->lab_2457)).a_)).kind_) != ((rt_int)5LL)) || ((*(P173)rt_nil_check(F->lab_2457)).b_ != NULL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_938)).line_), rt_g_lit("a choice in a record aggregate names a component (RM79 3.6.2)", 61));
}
F->k_2476 = f_field_index_944(F->up, F->rt_939, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->lab_2457)).a_)).name_)));
if ((G_NV(F->k_2476) == ((rt_int)0LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_938)).line_), cat_rt_gstr(cat_rt_gstr(f_kind_name_465(F->up, F->rt_939), rt_g_lit(" has no component ", 18)), (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->lab_2457)).a_)).name_))));
}
if ((!G_NV(({ A2463 ix2539 = F->active_2466; ix2539.p[rt_index(G_NV(F->k_2476), ix2539.lo, ix2539.hi) - ix2539.lo]; })))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_938)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("component ", 10), (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->lab_2457)).a_)).name_))), rt_g_lit(" is not in the variant selected (RM79 3.7.3)", 44)));
}
if (G_NV(({ A2463 ix2540 = F->done_2464; ix2540.p[rt_index(G_NV(F->k_2476), ix2540.lo, ix2540.hi) - ix2540.lo]; }))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_938)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("component ", 10), (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->lab_2457)).a_)).name_))), rt_g_lit(" is given twice in an aggregate (RM79 3.6.2)", 44)));
}
f_agg_component_950(F->up, (*(P139)rt_nil_check(F->tmp_2481)), F->rt_939, G_NV(F->k_2476), (*(P173)rt_nil_check(F->it_2456)).b_, G_NV((*(P173)rt_nil_check(F->e_938)).line_));
(*({ A2463 *ix2541 = &(F->done_2464); &ix2541->p[rt_index(G_NV(F->k_2476), ix2541->lo, ix2541->hi) - ix2541->lo]; })) = 1;
}
F->lab_2457 = (*(P173)rt_nil_check(F->lab_2457)).next_;
}
L_end_2530: ;
}
F->it_2456 = (*(P173)rt_nil_check(F->it_2456)).next_;
}
L_end_2527: ;
F->f_2460 = (*(P121)rt_nil_check(F->rt_939)).fields_;
{ rt_int lo2544 = ((rt_int)1LL), hi2545 = G_NV(F->n_2462);
for (rt_int it2546 = lo2544; it2546 <= hi2545; it2546++) {
F->i_2543 = it2546;
if ((G_NV(({ A2463 ix2547 = F->active_2466; ix2547.p[rt_index(F->i_2543, ix2547.lo, ix2547.hi) - ix2547.lo]; })) && (!G_NV(({ A2463 ix2548 = F->done_2464; ix2548.p[rt_index(F->i_2543, ix2548.lo, ix2548.hi) - ix2548.lo]; }))))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_938)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("an aggregate gives every component of ", 38), f_kind_name_465(F->up, F->rt_939)), rt_g_lit(": ", 2)), (*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_2460)).name_))), rt_g_lit(" is missing (RM79 3.6.2)", 24)));
}
F->f_2460 = (*(P1767)rt_nil_check(F->f_2460)).next_;
}
}
L_end_2542: ;
f_captured_922(F->up, F->up->code_135, &F->parts_2482);
F->up->code_135 = F->saved_2479;
(*F->r_940) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P139)rt_nil_check(F->ct_2480))), one_rt_gstr(32)), (*(P139)rt_nil_check(F->tmp_2481))), one_rt_gstr(59)), (*(P139)rt_nil_check(F->parts_2482))), one_rt_gstr(32)), (*(P139)rt_nil_check(F->tmp_2481))), rt_g_lit("; })", 4)));
ret_:

  return;
}

static rt_int f_field_index_944(struct f_greenc_1fr *up_, P121 rt_942, rt_gstr name_943) {
  struct f_field_index_944fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->rt_942 = rt_942;
F->name_943 = cp_rt_gstr(name_943);
F->f_2549 = NULL;
F->f_2549 = (*(P121)rt_nil_check(F->rt_942)).fields_;
F->k_2550 = INT64_MIN;
F->k_2550 = ((rt_int)1LL);
while ((F->f_2549 != NULL)) {
if (eq_rt_gstr((*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_2549)).name_)), F->name_943)) {
F->result_ = G_NV(F->k_2550);
goto ret_;
}
F->k_2550 = rt_add(G_NV(F->k_2550), ((rt_int)1LL));
F->f_2549 = (*(P1767)rt_nil_check(F->f_2549)).next_;
}
L_end_2551: ;
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_agg_component_950(struct f_greenc_1fr *up_, rt_gstr tmp_945, P121 rt_946, rt_int k_947, P173 v_948, rt_int line_949) {
  struct f_agg_component_950fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->tmp_945 = cp_rt_gstr(tmp_945);
F->rt_946 = rt_946;
F->k_947 = k_947;
F->v_948 = v_948;
F->line_949 = line_949;
F->f_2552 = NULL;
F->f_2552 = (*(P121)rt_nil_check(F->rt_946)).fields_;
F->vt_2553 = NULL;
F->x_2554 = NULL;
F->y_2555 = NULL;
{ rt_int lo2558 = ((rt_int)2LL), hi2559 = F->k_947;
for (rt_int it2560 = lo2558; it2560 <= hi2559; it2560++) {
F->i_2557 = it2560;
F->f_2552 = (*(P1767)rt_nil_check(F->f_2552)).next_;
}
}
L_end_2556: ;
f_gexpr_773(F->up, F->v_948, (*(P1767)rt_nil_check(F->f_2552)).t_, &F->vt_2553, &F->x_2554);
f_check_type_469(F->up, F->vt_2553, (*(P1767)rt_nil_check(F->f_2552)).t_, F->line_949);
if (((G_NV((*(P121)rt_nil_check((*(P1767)rt_nil_check(F->f_2552)).t_)).kind_) == ((rt_int)6LL)) && (!f_bounded_457(F->up, (*(P1767)rt_nil_check(F->f_2552)).c_)))) {
f_copy_code_604(F->up, (*(P1767)rt_nil_check(F->f_2552)).t_, (*(P139)rt_nil_check(F->x_2554)), &F->y_2555);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->tmp_945, one_rt_gstr(46)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_2552)).name_)))), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->y_2555))), one_rt_gstr(59)));
} else {
if (f_composite_594(F->up, (*(P1767)rt_nil_check(F->f_2552)).t_)) {
f_init_storage_592(F->up, cat_rt_gstr(cat_rt_gstr(F->tmp_945, one_rt_gstr(46)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_2552)).name_)))), (*(P1767)rt_nil_check(F->f_2552)).t_, (*(P1767)rt_nil_check(F->f_2552)).c_);
}
f_assign_code_600(F->up, cat_rt_gstr(cat_rt_gstr(F->tmp_945, one_rt_gstr(46)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1767)rt_nil_check(F->f_2552)).name_)))), (*(P1767)rt_nil_check(F->f_2552)).t_, (*(P139)rt_nil_check(F->x_2554)), (*(P1767)rt_nil_check(F->f_2552)).c_, &F->y_2555);
f_emit_248(F->up, (*(P139)rt_nil_check(F->y_2555)));
}
ret_:

  return;
}

static void f_static_choice_954(struct f_greenc_1fr *up_, P173 x_951, rt_int *v_952, int *ok_953) {
  struct f_static_choice_954fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_951 = x_951;
F->v_952 = v_952;
F->ok_953 = ok_953;
if (f_is_char_lit_754(F->up, F->x_951)) {
(*F->ok_953) = 1;
(*F->v_952) = rt_sub(((rt_int)(G_NV(({ rt_gstr ix2561 = (*(P139)rt_nil_check((*(P173)rt_nil_check(F->x_951)).name_)); ix2561.p[rt_index(((rt_int)1LL), ix2561.lo, ix2561.hi) - ix2561.lo]; }))) + 1), ((rt_int)1LL));
goto ret_;
}
f_manifest_486(F->up, F->x_951, &(*F->v_952), &(*F->ok_953));
 (void)rt_range((*F->ok_953), 0, 1);
ret_:

  return;
}

static void f_array_aggregate_959(struct f_greenc_1fr *up_, P173 e_955, P121 arrt_956, P139 bounds_957, P139 *r_958) {
  struct f_array_aggregate_959fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_955 = e_955;
F->arrt_956 = arrt_956;
F->bounds_957 = bounds_957;
F->r_958 = r_958;
F->it_2562 = NULL;
F->it_2562 = (*(P173)rt_nil_check(F->e_955)).a_;
F->lab_2563 = NULL;
F->others_it_2564 = NULL;
F->np_2565 = INT64_MIN;
F->np_2565 = ((rt_int)0LL);
F->nnamed_2566 = INT64_MIN;
F->nnamed_2566 = ((rt_int)0LL);
F->clo_2567 = INT64_MIN;
F->clo_2567 = ((rt_int)0LL);
F->chi_2568 = INT64_MIN;
F->chi_2568 = ((rt_int)0LL);
F->v1_2569 = INT64_MIN;
F->v1_2569 = ((rt_int)0LL);
F->v2_2570 = INT64_MIN;
F->v2_2570 = ((rt_int)0LL);
F->all_static_2571 = INT_MIN;
F->all_static_2571 = 1;
F->ok_2572 = INT_MIN;
F->ok_2572 = 1;
F->ok2_2573 = INT_MIN;
F->ok2_2573 = 1;
F->first_choice_2574 = INT_MIN;
F->first_choice_2574 = 1;
F->vt_2575 = NULL;
F->ct_2576 = NULL;
F->et_2577 = NULL;
F->tmp_2578 = NULL;
F->lo_2579 = NULL;
F->hi_2580 = NULL;
F->v_2581 = NULL;
F->x_2582 = NULL;
F->parts_2583 = NULL;
F->fill_2584 = NULL;
F->rowb_2585 = NULL;
F->key_2586 = NULL;
F->khi_2587 = NULL;
F->saved_2588 = NULL;
F->saved_2588 = F->up->code_135;
f_ctype_474(F->up, F->arrt_956, &F->ct_2576);
f_elem_ctype_546(F->up, (*(P121)rt_nil_check(F->arrt_956)).elem_, &F->et_2577);
f_new_name_224(F->up, rt_g_lit("ag", 2), &F->tmp_2578);
while ((F->it_2562 != NULL)) {
if (((*(P173)rt_nil_check(F->it_2562)).a_ == NULL)) {
if (((G_NV(F->nnamed_2566) > ((rt_int)0LL)) || (F->others_it_2564 != NULL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_955)).line_), rt_g_lit("positional associations come before named ones (RM79 3.6.2)", 59));
}
F->np_2565 = rt_add(G_NV(F->np_2565), ((rt_int)1LL));
} else if ((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->it_2562)).a_)).flag_) == ((rt_int)1LL))) {
if ((((*(P173)rt_nil_check(F->it_2562)).next_ != NULL) || ((*(P173)rt_nil_check((*(P173)rt_nil_check(F->it_2562)).a_)).next_ != NULL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_955)).line_), rt_g_lit("others comes last in an aggregate (RM79 3.6.2)", 46));
}
F->others_it_2564 = F->it_2562;
} else {
F->nnamed_2566 = rt_add(G_NV(F->nnamed_2566), ((rt_int)1LL));
F->lab_2563 = (*(P173)rt_nil_check(F->it_2562)).a_;
while ((F->lab_2563 != NULL)) {
f_static_choice_954(F->up, (*(P173)rt_nil_check(F->lab_2563)).a_, &F->v1_2569, &F->ok_2572);
 (void)rt_range(F->ok_2572, 0, 1);
F->v2_2570 = G_NV(F->v1_2569);
if (((*(P173)rt_nil_check(F->lab_2563)).b_ != NULL)) {
f_static_choice_954(F->up, (*(P173)rt_nil_check(F->lab_2563)).b_, &F->v2_2570, &F->ok2_2573);
 (void)rt_range(F->ok2_2573, 0, 1);
F->ok_2572 = (G_NV(F->ok_2572) && G_NV(F->ok2_2573));
}
if ((!G_NV(F->ok_2572))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_955)).line_), rt_g_lit("a choice in an array aggregate is static (RM79 3.6.2)", 53));
}
if ((G_NV(F->first_choice_2574) || (G_NV(F->v1_2569) < G_NV(F->clo_2567)))) {
F->clo_2567 = G_NV(F->v1_2569);
}
if ((G_NV(F->first_choice_2574) || (G_NV(F->v2_2570) > G_NV(F->chi_2568)))) {
F->chi_2568 = G_NV(F->v2_2570);
}
F->first_choice_2574 = 0;
F->lab_2563 = (*(P173)rt_nil_check(F->lab_2563)).next_;
}
L_end_2590: ;
}
F->it_2562 = (*(P173)rt_nil_check(F->it_2562)).next_;
}
L_end_2589: ;
if (((G_NV(F->np_2565) > ((rt_int)0LL)) && (G_NV(F->nnamed_2566) > ((rt_int)0LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_955)).line_), rt_g_lit("an array aggregate is positional or named, with others last (RM79 3.6.2)", 72));
}
if ((G_NV(F->nnamed_2566) > ((rt_int)0LL))) {
f_check_choices_967(F->up, F->e_955, F->arrt_956, (F->others_it_2564 != NULL));
}
if (((F->others_it_2564 == NULL) && (G_NV(F->np_2565) > ((rt_int)0LL)))) {
f_first_index_549(F->up, F->arrt_956, &F->lo_2579);
F->hi_2580 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->lo_2579))), rt_g_lit(" + ", 3)), rt_g_s2g(rt_str_of_int(rt_sub(G_NV(F->np_2565), ((rt_int)1LL))))), one_rt_gstr(41)));
} else if (((F->others_it_2564 == NULL) && (G_NV(F->nnamed_2566) > ((rt_int)0LL)))) {
F->lo_2579 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->clo_2567)))), rt_g_lit("LL)", 3)));
F->hi_2580 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->chi_2568)))), rt_g_lit("LL)", 3)));
} else if ((((*(P121)rt_nil_check(F->arrt_956)).tcons_ != NULL) && ((*(P177)rt_nil_check((*(P121)rt_nil_check(F->arrt_956)).tcons_)).hi_ != NULL))) {
F->lo_2579 = (*(P177)rt_nil_check((*(P121)rt_nil_check(F->arrt_956)).tcons_)).lo_;
F->hi_2580 = (*(P177)rt_nil_check((*(P121)rt_nil_check(F->arrt_956)).tcons_)).hi_;
} else if ((F->bounds_957 != NULL)) {
F->lo_2579 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->bounds_957))), rt_g_lit(").lo", 4)));
F->hi_2580 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->bounds_957))), rt_g_lit(").hi", 4)));
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_955)).line_), rt_g_lit("an aggregate with others needs bounds from its context (RM79 3.6.2)", 67));
}
if (((G_NV((*(P121)rt_nil_check(F->arrt_956)).dims_) > ((rt_int)1LL)) && (F->bounds_957 != NULL))) {
F->rowb_2585 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((struct { rt_int lo, hi; }){ (", 31), (*(P139)rt_nil_check(F->bounds_957))), rt_g_lit(").lo2, (", 8)), (*(P139)rt_nil_check(F->bounds_957))), rt_g_lit(").hi2 })", 8)));
}
F->up->code_135 = f_new_buffer_243(F->up);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->tmp_2578)), rt_g_lit(".lo = ", 6)), (*(P139)rt_nil_check(F->lo_2579))), rt_g_lit("; ", 2)), (*(P139)rt_nil_check(F->tmp_2578))), rt_g_lit(".hi = ", 6)), (*(P139)rt_nil_check(F->hi_2580))), rt_g_lit("; ", 2)), (*(P139)rt_nil_check(F->tmp_2578))), rt_g_lit(".lo2 = ", 7)), (*(P139)rt_nil_check(F->tmp_2578))), rt_g_lit(".hi2 = 1;", 9)));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->tmp_2578)), rt_g_lit(".p = rt_alloc(sizeof(", 21)), (*(P139)rt_nil_check(F->et_2577))), rt_g_lit(") * (size_t)(G_CNT(", 19)), (*(P139)rt_nil_check(F->tmp_2578))), rt_g_lit(") + 1));", 8)));
if (((G_NV(F->np_2565) > ((rt_int)0LL)) && (F->others_it_2564 == NULL))) {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (G_CNT(", 10), (*(P139)rt_nil_check(F->tmp_2578))), rt_g_lit(") != ", 5)), rt_g_s2g(rt_str_of_int(G_NV(F->np_2565)))), rt_g_lit(") rt_raise(RT_X_SUBSCRIPT);", 27)));
} else if ((G_NV(F->np_2565) > ((rt_int)0LL))) {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (G_CNT(", 10), (*(P139)rt_nil_check(F->tmp_2578))), rt_g_lit(") < ", 4)), rt_g_s2g(rt_str_of_int(G_NV(F->np_2565)))), rt_g_lit(") rt_raise(RT_X_SUBSCRIPT);", 27)));
}
if ((F->others_it_2564 != NULL)) {
F->up->agg_bounds_180 = F->rowb_2585;
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->others_it_2564)).b_, (*(P121)rt_nil_check(F->arrt_956)).elem_, &F->vt_2575, &F->v_2581);
F->up->agg_bounds_180 = NULL;
f_check_type_469(F->up, F->vt_2575, (*(P121)rt_nil_check(F->arrt_956)).elem_, G_NV((*(P173)rt_nil_check(F->e_955)).line_));
f_ctype_474(F->up, (*(P121)rt_nil_check(F->arrt_956)).elem_, &F->x_2582);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P139)rt_nil_check(F->x_2582))), rt_g_lit(" o_ = ", 6)), (*(P139)rt_nil_check(F->v_2581))), rt_g_lit("; for (rt_int k_ = 0; k_ < G_CNT(", 33)), (*(P139)rt_nil_check(F->tmp_2578))), rt_g_lit("); k_++) {", 10)));
f_copy_code_604(F->up, (*(P121)rt_nil_check(F->arrt_956)).elem_, rt_g_lit("o_", 2), &F->x_2582);
f_element_store_963(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->tmp_2578)), rt_g_lit(".p[k_]", 6)), F->arrt_956, (*(P139)rt_nil_check(F->x_2582)));
f_emit_248(F->up, rt_g_lit("} }", 3));
}
F->it_2562 = (*(P173)rt_nil_check(F->e_955)).a_;
F->np_2565 = ((rt_int)0LL);
while (((F->it_2562 != NULL) && (F->it_2562 != F->others_it_2564))) {
F->up->agg_bounds_180 = F->rowb_2585;
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->it_2562)).b_, (*(P121)rt_nil_check(F->arrt_956)).elem_, &F->vt_2575, &F->v_2581);
F->up->agg_bounds_180 = NULL;
f_check_type_469(F->up, F->vt_2575, (*(P121)rt_nil_check(F->arrt_956)).elem_, G_NV((*(P173)rt_nil_check(F->e_955)).line_));
f_copy_code_604(F->up, (*(P121)rt_nil_check(F->arrt_956)).elem_, (*(P139)rt_nil_check(F->v_2581)), &F->x_2582);
if (((*(P173)rt_nil_check(F->it_2562)).a_ == NULL)) {
f_element_store_963(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->tmp_2578)), rt_g_lit(".p[", 3)), rt_g_s2g(rt_str_of_int(G_NV(F->np_2565)))), one_rt_gstr(93)), F->arrt_956, (*(P139)rt_nil_check(F->x_2582)));
F->np_2565 = rt_add(G_NV(F->np_2565), ((rt_int)1LL));
} else {
f_new_name_224(F->up, rt_g_lit("av", 2), &F->v_2581);
f_ctype_474(F->up, (*(P121)rt_nil_check(F->arrt_956)).elem_, &F->parts_2583);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P139)rt_nil_check(F->parts_2583))), one_rt_gstr(32)), (*(P139)rt_nil_check(F->v_2581))), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->x_2582))), one_rt_gstr(59)));
F->lab_2563 = (*(P173)rt_nil_check(F->it_2562)).a_;
while ((F->lab_2563 != NULL)) {
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->lab_2563)).a_, (*(P121)rt_nil_check(F->arrt_956)).idx_, &F->vt_2575, &F->key_2586);
f_check_type_469(F->up, F->vt_2575, (*(P121)rt_nil_check(F->arrt_956)).idx_, G_NV((*(P173)rt_nil_check(F->e_955)).line_));
F->khi_2587 = F->key_2586;
if (((*(P173)rt_nil_check(F->lab_2563)).b_ != NULL)) {
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->lab_2563)).b_, (*(P121)rt_nil_check(F->arrt_956)).idx_, &F->vt_2575, &F->khi_2587);
f_check_type_469(F->up, F->vt_2575, (*(P121)rt_nil_check(F->arrt_956)).idx_, G_NV((*(P173)rt_nil_check(F->e_955)).line_));
}
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = ", 17), (*(P139)rt_nil_check(F->key_2586))), rt_g_lit("; k_ <= ", 8)), (*(P139)rt_nil_check(F->khi_2587))), rt_g_lit("; k_++) {", 9)));
f_copy_code_604(F->up, (*(P121)rt_nil_check(F->arrt_956)).elem_, (*(P139)rt_nil_check(F->v_2581)), &F->x_2582);
f_element_store_963(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->tmp_2578)), rt_g_lit(".p[rt_index(k_, ", 16)), (*(P139)rt_nil_check(F->tmp_2578))), rt_g_lit(".lo, ", 5)), (*(P139)rt_nil_check(F->tmp_2578))), rt_g_lit(".hi) - ", 7)), (*(P139)rt_nil_check(F->tmp_2578))), rt_g_lit(".lo]", 4)), F->arrt_956, (*(P139)rt_nil_check(F->x_2582)));
f_emit_248(F->up, rt_g_lit("}", 1));
F->lab_2563 = (*(P173)rt_nil_check(F->lab_2563)).next_;
}
L_end_2592: ;
f_emit_248(F->up, rt_g_lit("}", 1));
}
F->it_2562 = (*(P173)rt_nil_check(F->it_2562)).next_;
}
L_end_2591: ;
if ((G_NV((*(P121)rt_nil_check(F->arrt_956)).dims_) > ((rt_int)1LL))) {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (G_CNT(", 10), (*(P139)rt_nil_check(F->tmp_2578))), rt_g_lit(") > 0) { ", 9)), (*(P139)rt_nil_check(F->tmp_2578))), rt_g_lit(".lo2 = ", 7)), (*(P139)rt_nil_check(F->tmp_2578))), rt_g_lit(".p[0].lo; ", 10)), (*(P139)rt_nil_check(F->tmp_2578))), rt_g_lit(".hi2 = ", 7)), (*(P139)rt_nil_check(F->tmp_2578))), rt_g_lit(".p[0].hi; }", 11)));
}
f_captured_922(F->up, F->up->code_135, &F->parts_2583);
F->up->code_135 = F->saved_2588;
(*F->r_958) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P139)rt_nil_check(F->ct_2576))), one_rt_gstr(32)), (*(P139)rt_nil_check(F->tmp_2578))), one_rt_gstr(59)), (*(P139)rt_nil_check(F->parts_2583))), one_rt_gstr(32)), (*(P139)rt_nil_check(F->tmp_2578))), rt_g_lit("; })", 4)));
ret_:

  return;
}

static void f_element_store_963(struct f_greenc_1fr *up_, rt_gstr lv_960, P121 arrt_961, rt_gstr v_962) {
  struct f_element_store_963fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lv_960 = cp_rt_gstr(lv_960);
F->arrt_961 = arrt_961;
F->v_962 = cp_rt_gstr(v_962);
F->x_2593 = NULL;
if (((((*(P121)rt_nil_check(F->arrt_961)).elemcons_ != NULL) && ((*(P177)rt_nil_check((*(P121)rt_nil_check(F->arrt_961)).elemcons_)).lo_ != NULL)) && (!f_composite_594(F->up, (*(P121)rt_nil_check(F->arrt_961)).elem_)))) {
f_assign_code_600(F->up, F->lv_960, (*(P121)rt_nil_check(F->arrt_961)).elem_, F->v_962, (*(P121)rt_nil_check(F->arrt_961)).elemcons_, &F->x_2593);
f_emit_248(F->up, (*(P139)rt_nil_check(F->x_2593)));
} else {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lv_960, rt_g_lit(" = ", 3)), F->v_962), one_rt_gstr(59)));
}
ret_:

  return;
}

static void f_check_choices_967(struct f_greenc_1fr *up_, P173 e_964, P121 arrt_965, int has_others_966) {
  struct f_check_choices_967fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_964 = e_964;
F->arrt_965 = arrt_965;
F->has_others_966 = has_others_966;
F->a_2594 = NULL;
F->b_2595 = NULL;
F->lab_2596 = NULL;
F->lab2_2597 = NULL;
F->lo1_2598 = INT64_MIN;
F->lo1_2598 = ((rt_int)0LL);
F->hi1_2599 = INT64_MIN;
F->hi1_2599 = ((rt_int)0LL);
F->lo2_2600 = INT64_MIN;
F->lo2_2600 = ((rt_int)0LL);
F->hi2_2601 = INT64_MIN;
F->hi2_2601 = ((rt_int)0LL);
F->count_2602 = INT64_MIN;
F->count_2602 = ((rt_int)0LL);
F->ok_2603 = INT_MIN;
F->a_2594 = (*(P173)rt_nil_check(F->e_964)).a_;
while ((F->a_2594 != NULL)) {
if ((((*(P173)rt_nil_check(F->a_2594)).a_ != NULL) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->a_2594)).a_)).flag_) != ((rt_int)1LL)))) {
F->lab_2596 = (*(P173)rt_nil_check(F->a_2594)).a_;
while ((F->lab_2596 != NULL)) {
f_static_choice_954(F->up, (*(P173)rt_nil_check(F->lab_2596)).a_, &F->lo1_2598, &F->ok_2603);
 (void)rt_range(F->ok_2603, 0, 1);
F->hi1_2599 = G_NV(F->lo1_2598);
if (((*(P173)rt_nil_check(F->lab_2596)).b_ != NULL)) {
f_static_choice_954(F->up, (*(P173)rt_nil_check(F->lab_2596)).b_, &F->hi1_2599, &F->ok_2603);
 (void)rt_range(F->ok_2603, 0, 1);
}
if ((G_NV(F->hi1_2599) >= G_NV(F->lo1_2598))) {
F->count_2602 = rt_add(G_NV(F->count_2602), rt_add(rt_sub(G_NV(F->hi1_2599), G_NV(F->lo1_2598)), ((rt_int)1LL)));
}
F->b_2595 = F->a_2594;
F->lab2_2597 = (*(P173)rt_nil_check(F->lab_2596)).next_;
while ((F->b_2595 != NULL)) {
if ((((*(P173)rt_nil_check(F->b_2595)).a_ != NULL) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->b_2595)).a_)).flag_) != ((rt_int)1LL)))) {
if ((F->b_2595 != F->a_2594)) {
F->lab2_2597 = (*(P173)rt_nil_check(F->b_2595)).a_;
}
while ((F->lab2_2597 != NULL)) {
f_static_choice_954(F->up, (*(P173)rt_nil_check(F->lab2_2597)).a_, &F->lo2_2600, &F->ok_2603);
 (void)rt_range(F->ok_2603, 0, 1);
F->hi2_2601 = G_NV(F->lo2_2600);
if (((*(P173)rt_nil_check(F->lab2_2597)).b_ != NULL)) {
f_static_choice_954(F->up, (*(P173)rt_nil_check(F->lab2_2597)).b_, &F->hi2_2601, &F->ok_2603);
 (void)rt_range(F->ok_2603, 0, 1);
}
if (((((G_NV(F->lo1_2598) <= G_NV(F->hi1_2599)) && (G_NV(F->lo2_2600) <= G_NV(F->hi2_2601))) && (G_NV(F->lo1_2598) <= G_NV(F->hi2_2601))) && (G_NV(F->lo2_2600) <= G_NV(F->hi1_2599)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_964)).line_), rt_g_lit("an index is given twice in an aggregate (RM79 3.6.2)", 52));
}
F->lab2_2597 = (*(P173)rt_nil_check(F->lab2_2597)).next_;
}
L_end_2607: ;
}
F->b_2595 = (*(P173)rt_nil_check(F->b_2595)).next_;
F->lab2_2597 = NULL;
}
L_end_2606: ;
F->lab_2596 = (*(P173)rt_nil_check(F->lab_2596)).next_;
}
L_end_2605: ;
}
F->a_2594 = (*(P173)rt_nil_check(F->a_2594)).next_;
}
L_end_2604: ;
if (((!F->has_others_966) && f_static_bounds_461(F->up, (*(P121)rt_nil_check(F->arrt_965)).tcons_))) {
if ((G_NV(F->count_2602) != rt_add(rt_sub(G_NV((*(P177)rt_nil_check((*(P121)rt_nil_check(F->arrt_965)).tcons_)).mhi_), G_NV((*(P177)rt_nil_check((*(P121)rt_nil_check(F->arrt_965)).tcons_)).mlo_)), ((rt_int)1LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_964)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the choices of an aggregate cover every index of ", 49), f_kind_name_465(F->up, F->arrt_965)), rt_g_lit(" once, or others is given (RM79 3.6.2)", 38)));
}
}
ret_:

  return;
}

static P173 f_actual_for_971(struct f_greenc_1fr *up_, P173 args_968, P1752 pm_969, P1752 first_970) {
  struct f_actual_for_971fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->args_968 = args_968;
F->pm_969 = pm_969;
F->first_970 = first_970;
F->a_2608 = NULL;
F->a_2608 = F->args_968;
F->p_2609 = NULL;
F->p_2609 = F->first_970;
while (((F->a_2608 != NULL) && ((*(P173)rt_nil_check(F->a_2608)).formal_ == NULL))) {
if ((F->p_2609 == F->pm_969)) {
F->result_ = F->a_2608;
goto ret_;
}
F->p_2609 = (*(P1752)rt_nil_check(F->p_2609)).next_;
F->a_2608 = (*(P173)rt_nil_check(F->a_2608)).next_;
}
L_end_2610: ;
while ((F->a_2608 != NULL)) {
if ((((*(P173)rt_nil_check(F->a_2608)).formal_ != NULL) && eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->a_2608)).formal_)), (*(P139)rt_nil_check((*(P1752)rt_nil_check(F->pm_969)).name_))))) {
F->result_ = F->a_2608;
goto ret_;
}
F->a_2608 = (*(P173)rt_nil_check(F->a_2608)).next_;
}
L_end_2611: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_gcall_976(struct f_greenc_1fr *up_, P173 e_972, int is_stmt_973, P121 *t_974, P139 *r_975) {
  struct f_gcall_976fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_972 = e_972;
F->is_stmt_973 = is_stmt_973;
F->t_974 = t_974;
F->r_975 = r_975;
F->fn_2612 = NULL;
F->fn_2612 = (*(P173)rt_nil_check(F->e_972)).a_;
F->nm_2613 = NULL;
F->y_2614 = NULL;
F->args_2615 = NULL;
F->lv_2616 = NULL;
F->v_2617 = NULL;
F->ct_2618 = NULL;
F->x_2619 = NULL;
F->a_2620 = NULL;
F->pm_2621 = NULL;
F->lt_2622 = NULL;
F->vt_2623 = NULL;
F->lc_2624 = NULL;
F->ro_2625 = INT_MIN;
f_expanded_791(F->up, F->fn_2612, &F->nm_2613);
if ((F->nm_2613 != NULL)) {
F->fn_2612 = F->nm_2613;
} else if ((((G_NV((*(P173)rt_nil_check(F->fn_2612)).kind_) == ((rt_int)9LL)) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->fn_2612)).a_)).kind_) == ((rt_int)5LL))) && f_is_type_name_752(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->fn_2612)).a_)).name_))))) {
if ((!f_type_attribute_750(F->up, (*(P116)rt_nil_check(f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->fn_2612)).a_)).name_))))).t_, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->fn_2612)).name_))))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_972)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->fn_2612)).name_)), rt_g_lit(" is not a subprogram attribute of ", 34)), (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->fn_2612)).a_)).name_))), rt_g_lit(" (RM79 3.3)", 11)));
}
F->nm_2613 = f_nn_295(F->up, ((rt_int)5LL), G_NV((*(P173)rt_nil_check(F->fn_2612)).line_));
(*(P173)rt_nil_check(F->nm_2613)).name_ = (*(P173)rt_nil_check(F->fn_2612)).name_;
F->fn_2612 = F->nm_2613;
} else if (((G_NV((*(P173)rt_nil_check(F->fn_2612)).kind_) == ((rt_int)9LL)) && f_is_package_1012(F->up, (*(P173)rt_nil_check(F->fn_2612)).a_))) {
F->nm_2613 = f_nn_295(F->up, ((rt_int)5LL), G_NV((*(P173)rt_nil_check(F->fn_2612)).line_));
(*(P173)rt_nil_check(F->nm_2613)).name_ = (*(P173)rt_nil_check(F->fn_2612)).name_;
(*(P173)rt_nil_check(F->nm_2613)).tag_ = f_mk_221(F->up, f_path_of_338(F->up, (*(P173)rt_nil_check(F->fn_2612)).a_));
F->fn_2612 = F->nm_2613;
} else if (((((G_NV((*(P173)rt_nil_check(F->fn_2612)).kind_) == ((rt_int)9LL)) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->fn_2612)).a_)).kind_) == ((rt_int)8LL))) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->fn_2612)).a_)).a_)).kind_) == ((rt_int)5LL))) && f_is_task_name_1081(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->fn_2612)).a_)).a_)).name_))))) {
F->y_2614 = f_member_of_1016(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->fn_2612)).a_)).a_)).name_)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->fn_2612)).name_)), G_NV((*(P173)rt_nil_check(F->fn_2612)).line_));
if (((F->y_2614 != NULL) && ((G_NV((*(P116)rt_nil_check(F->y_2614)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->y_2614)).kind_) == ((rt_int)4LL))))) {
f_resolve_member_overload_1057(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->fn_2612)).a_)).a_)).name_)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->fn_2612)).name_)), (*(P173)rt_nil_check(F->e_972)).b_, F->is_stmt_973, F->up->call_want_209, G_NV((*(P173)rt_nil_check(F->e_972)).line_), &F->y_2614);
F->up->call_task_ix_200 = (*(P173)rt_nil_check((*(P173)rt_nil_check(F->fn_2612)).a_)).b_;
if ((F->is_stmt_973 && (G_NV((*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_2614)).result_)).kind_) != ((rt_int)9LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_972)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->fn_2612)).name_)), rt_g_lit(" returns a value; it is not a procedure call", 44)));
}
f_gcall_with_1001(F->up, F->e_972, F->y_2614, &(*F->t_974), &(*F->r_975));
goto ret_;
}
}
if ((G_NV((*(P173)rt_nil_check(F->fn_2612)).kind_) != ((rt_int)5LL))) {
f_other_call_1138(F->up, F->e_972, F->is_stmt_973, &(*F->t_974), &(*F->r_975));
goto ret_;
}
F->y_2614 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->fn_2612)).name_)));
if (((*(P173)rt_nil_check(F->fn_2612)).tag_ != NULL)) {
F->y_2614 = f_member_of_1016(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->fn_2612)).tag_)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->fn_2612)).name_)), G_NV((*(P173)rt_nil_check(F->fn_2612)).line_));
}
if ((F->y_2614 == NULL)) {
f_builtin_1008(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->fn_2612)).name_)), (*(P173)rt_nil_check(F->e_972)).b_, G_NV((*(P173)rt_nil_check(F->e_972)).line_), F->is_stmt_973, &(*F->t_974), &(*F->r_975));
goto ret_;
}
if ((((G_NV((*(P116)rt_nil_check(F->y_2614)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->y_2614)).kind_) == ((rt_int)4LL))) && ((*(P173)rt_nil_check(F->fn_2612)).tag_ == NULL))) {
f_resolve_overload_1049(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->fn_2612)).name_)), (*(P173)rt_nil_check(F->e_972)).b_, F->is_stmt_973, F->up->call_want_209, G_NV((*(P173)rt_nil_check(F->e_972)).line_), &F->y_2614);
if ((F->y_2614 == NULL)) {
f_builtin_1008(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->fn_2612)).name_)), (*(P173)rt_nil_check(F->e_972)).b_, G_NV((*(P173)rt_nil_check(F->e_972)).line_), F->is_stmt_973, &(*F->t_974), &(*F->r_975));
goto ret_;
}
} else if (((G_NV((*(P116)rt_nil_check(F->y_2614)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->y_2614)).kind_) == ((rt_int)4LL)))) {
f_resolve_member_overload_1057(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->fn_2612)).tag_)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->fn_2612)).name_)), (*(P173)rt_nil_check(F->e_972)).b_, F->is_stmt_973, F->up->call_want_209, G_NV((*(P173)rt_nil_check(F->e_972)).line_), &F->y_2614);
}
if ((G_NV((*(P116)rt_nil_check(F->y_2614)).kind_) == ((rt_int)10LL))) {
f_other_call_1138(F->up, F->e_972, F->is_stmt_973, &(*F->t_974), &(*F->r_975));
goto ret_;
}
if (((G_NV((*(P116)rt_nil_check(F->y_2614)).kind_) != ((rt_int)3LL)) && (G_NV((*(P116)rt_nil_check(F->y_2614)).kind_) != ((rt_int)4LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_972)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->fn_2612)).name_)), rt_g_lit(" cannot be called", 17)));
}
if ((F->is_stmt_973 && (G_NV((*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_2614)).result_)).kind_) != ((rt_int)9LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_972)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->fn_2612)).name_)), rt_g_lit(" returns a value; it is not a procedure call", 44)));
}
if (((!F->is_stmt_973) && (G_NV((*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_2614)).result_)).kind_) == ((rt_int)9LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_972)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->fn_2612)).name_)), rt_g_lit(" is a procedure, not a function", 31)));
}
f_gcall_with_1001(F->up, F->e_972, F->y_2614, &(*F->t_974), &(*F->r_975));
ret_:

  return;
}

static void f_out_check_980(struct f_greenc_1fr *up_, rt_gstr lv_977, P121 t_978, P177 c_979) {
  struct f_out_check_980fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lv_977 = cp_rt_gstr(lv_977);
F->t_978 = t_978;
F->c_979 = c_979;
if ((!f_bounded_457(F->up, F->c_979))) {
goto ret_;
}
if ((F->up->post_checks_195 == NULL)) {
F->up->post_checks_195 = f_mk_221(F->up, rt_g_lit("", 0));
}
if (((G_NV((*(P121)rt_nil_check(F->t_978)).kind_) == ((rt_int)3LL)) || (G_NV((*(P121)rt_nil_check(F->t_978)).kind_) == ((rt_int)16LL)))) {
F->up->post_checks_195 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->up->post_checks_195)), rt_g_lit(" (void)rt_frange(", 17)), F->lv_977), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_979)).lo_))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_979)).hi_))), rt_g_lit(");", 2)));
} else if (f_is_discrete_438(F->up, F->t_978)) {
F->up->post_checks_195 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->up->post_checks_195)), rt_g_lit(" (void)rt_range(", 16)), F->lv_977), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_979)).lo_))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_979)).hi_))), rt_g_lit(");", 2)));
}
ret_:

  return;
}

static void f_var_path_983(struct f_greenc_1fr *up_, P173 e_981, P139 *r_982) {
  struct f_var_path_983fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_981 = e_981;
F->r_982 = r_982;
F->pt_2626 = NULL;
F->v_2627 = NULL;
F->saved_2628 = NULL;
F->saved_2628 = F->up->code_135;
if ((G_NV((*(P173)rt_nil_check(F->e_981)).kind_) == ((rt_int)5LL))) {
(*F->r_982) = (*(P173)rt_nil_check(F->e_981)).name_;
goto ret_;
} else if ((G_NV((*(P173)rt_nil_check(F->e_981)).kind_) == ((rt_int)15LL))) {
f_var_path_983(F->up, (*(P173)rt_nil_check(F->e_981)).a_, &(*F->r_982));
goto ret_;
} else if ((((G_NV((*(P173)rt_nil_check(F->e_981)).kind_) != ((rt_int)9LL)) && (G_NV((*(P173)rt_nil_check(F->e_981)).kind_) != ((rt_int)8LL))) || ((G_NV((*(P173)rt_nil_check(F->e_981)).kind_) == ((rt_int)9LL)) && eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_981)).name_)), rt_g_lit("ALL", 3))))) {
(*F->r_982) = f_mk_221(F->up, rt_g_lit("\?", 1));
goto ret_;
}
F->pt_2626 = NULL;
F->up->trial_154 = rt_add(G_NV(F->up->trial_154), ((rt_int)1LL));
F->up->code_135 = f_new_buffer_243(F->up);
{
{ rt_frame xf2630;
if (RT_TRY(xf2630)) {
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->e_981)).a_, NULL, &F->pt_2626, &F->v_2627);
RT_POP(xf2630);
} else {
RT_POP(xf2630);
int x2631 = rt_xcur;
if (rt_g_aborted()) rt_raise(x2631);
if (0 || x2631 == ex_compile_error_107) {
F->pt_2626 = NULL;
} else {
rt_raise(x2631);
}
}
}

}
L_end_2629: ;
F->up->trial_154 = rt_sub(G_NV(F->up->trial_154), ((rt_int)1LL));
F->up->code_135 = F->saved_2628;
if (((F->pt_2626 == NULL) || (G_NV((*(P121)rt_nil_check(F->pt_2626)).kind_) == ((rt_int)8LL)))) {
(*F->r_982) = f_mk_221(F->up, rt_g_lit("\?", 1));
goto ret_;
}
f_var_path_983(F->up, (*(P173)rt_nil_check(F->e_981)).a_, &(*F->r_982));
if (eq_rt_gstr((*(P139)rt_nil_check((*F->r_982))), rt_g_lit("\?", 1))) {
goto ret_;
} else if ((G_NV((*(P173)rt_nil_check(F->e_981)).kind_) == ((rt_int)9LL))) {
(*F->r_982) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*F->r_982))), one_rt_gstr(46)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_981)).name_))));
} else if (((f_list_len_301(F->up, (*(P173)rt_nil_check(F->e_981)).b_) == ((rt_int)1LL)) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_981)).b_)).kind_) == ((rt_int)1LL)))) {
(*F->r_982) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*F->r_982))), one_rt_gstr(40)), rt_g_s2g(rt_str_of_int(G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_981)).b_)).ival_)))), one_rt_gstr(41)));
} else {
(*F->r_982) = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check((*F->r_982))), rt_g_lit("(*)", 3)));
}
ret_:

  return;
}

static int f_paths_overlap_986(struct f_greenc_1fr *up_, rt_gstr p_984, rt_gstr r_985) {
  struct f_paths_overlap_986fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_984 = cp_rt_gstr(p_984);
F->r_985 = cp_rt_gstr(r_985);
F->i_2632 = INT64_MIN;
F->i_2632 = ({ rt_gstr at2633 = F->p_984; at2633.lo; });
F->j_2634 = INT64_MIN;
F->j_2634 = ({ rt_gstr at2635 = F->r_985; at2635.lo; });
for (;;) {
if (((G_NV(F->i_2632) > ({ rt_gstr at2637 = F->p_984; at2637.hi; })) || (G_NV(F->j_2634) > ({ rt_gstr at2638 = F->r_985; at2638.hi; })))) {
if (((G_NV(F->i_2632) > ({ rt_gstr at2639 = F->p_984; at2639.hi; })) && (G_NV(F->j_2634) > ({ rt_gstr at2640 = F->r_985; at2640.hi; })))) {
F->result_ = 1;
goto ret_;
} else if ((G_NV(F->i_2632) > ({ rt_gstr at2641 = F->p_984; at2641.hi; }))) {
F->result_ = ((G_NV(({ rt_gstr ix2642 = F->r_985; ix2642.p[rt_index(G_NV(F->j_2634), ix2642.lo, ix2642.hi) - ix2642.lo]; })) == 46) || (G_NV(({ rt_gstr ix2643 = F->r_985; ix2643.p[rt_index(G_NV(F->j_2634), ix2643.lo, ix2643.hi) - ix2643.lo]; })) == 40));
goto ret_;
}
F->result_ = ((G_NV(({ rt_gstr ix2644 = F->p_984; ix2644.p[rt_index(G_NV(F->i_2632), ix2644.lo, ix2644.hi) - ix2644.lo]; })) == 46) || (G_NV(({ rt_gstr ix2645 = F->p_984; ix2645.p[rt_index(G_NV(F->i_2632), ix2645.lo, ix2645.hi) - ix2645.lo]; })) == 40));
goto ret_;
}
if ((((G_NV(({ rt_gstr ix2646 = F->p_984; ix2646.p[rt_index(G_NV(F->i_2632), ix2646.lo, ix2646.hi) - ix2646.lo]; })) == 40) && (G_NV(({ rt_gstr ix2647 = F->r_985; ix2647.p[rt_index(G_NV(F->j_2634), ix2647.lo, ix2647.hi) - ix2647.lo]; })) == 40)) && ((G_NV(({ rt_gstr ix2648 = F->p_984; ix2648.p[rt_index(rt_add(G_NV(F->i_2632), ((rt_int)1LL)), ix2648.lo, ix2648.hi) - ix2648.lo]; })) == 42) || (G_NV(({ rt_gstr ix2649 = F->r_985; ix2649.p[rt_index(rt_add(G_NV(F->j_2634), ((rt_int)1LL)), ix2649.lo, ix2649.hi) - ix2649.lo]; })) == 42)))) {
while ((G_NV(({ rt_gstr ix2651 = F->p_984; ix2651.p[rt_index(G_NV(F->i_2632), ix2651.lo, ix2651.hi) - ix2651.lo]; })) != 41)) {
F->i_2632 = rt_add(G_NV(F->i_2632), ((rt_int)1LL));
}
L_end_2650: ;
while ((G_NV(({ rt_gstr ix2653 = F->r_985; ix2653.p[rt_index(G_NV(F->j_2634), ix2653.lo, ix2653.hi) - ix2653.lo]; })) != 41)) {
F->j_2634 = rt_add(G_NV(F->j_2634), ((rt_int)1LL));
}
L_end_2652: ;
} else if ((G_NV(({ rt_gstr ix2654 = F->p_984; ix2654.p[rt_index(G_NV(F->i_2632), ix2654.lo, ix2654.hi) - ix2654.lo]; })) != G_NV(({ rt_gstr ix2655 = F->r_985; ix2655.p[rt_index(G_NV(F->j_2634), ix2655.lo, ix2655.hi) - ix2655.lo]; })))) {
F->result_ = 0;
goto ret_;
}
F->i_2632 = rt_add(G_NV(F->i_2632), ((rt_int)1LL));
F->j_2634 = rt_add(G_NV(F->j_2634), ((rt_int)1LL));
}
L_end_2636: ;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_mentions_989(struct f_greenc_1fr *up_, P173 n_987, rt_gstr name_988) {
  struct f_mentions_989fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_987 = n_987;
F->name_988 = cp_rt_gstr(name_988);
F->p_2656 = NULL;
F->p_2656 = F->n_987;
while ((F->p_2656 != NULL)) {
if (((G_NV((*(P173)rt_nil_check(F->p_2656)).kind_) == ((rt_int)5LL)) && eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->p_2656)).name_)), F->name_988))) {
F->result_ = 1;
goto ret_;
}
if ((f_mentions_989(F->up, (*(P173)rt_nil_check(F->p_2656)).a_, F->name_988) || f_mentions_989(F->up, (*(P173)rt_nil_check(F->p_2656)).b_, F->name_988))) {
F->result_ = 1;
goto ret_;
} else if ((f_mentions_989(F->up, (*(P173)rt_nil_check(F->p_2656)).c_, F->name_988) || f_mentions_989(F->up, (*(P173)rt_nil_check(F->p_2656)).d_, F->name_988))) {
F->result_ = 1;
goto ret_;
} else if (f_mentions_989(F->up, (*(P173)rt_nil_check(F->p_2656)).e_, F->name_988)) {
F->result_ = 1;
goto ret_;
}
F->p_2656 = (*(P173)rt_nil_check(F->p_2656)).next_;
}
L_end_2657: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_mentions_one_992(struct f_greenc_1fr *up_, P173 n_990, rt_gstr name_991) {
  struct f_mentions_one_992fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_990 = n_990;
F->name_991 = cp_rt_gstr(name_991);
if (((G_NV((*(P173)rt_nil_check(F->n_990)).kind_) == ((rt_int)5LL)) && eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->n_990)).name_)), F->name_991))) {
F->result_ = 1;
goto ret_;
} else if ((f_mentions_989(F->up, (*(P173)rt_nil_check(F->n_990)).a_, F->name_991) || f_mentions_989(F->up, (*(P173)rt_nil_check(F->n_990)).b_, F->name_991))) {
F->result_ = 1;
goto ret_;
}
F->result_ = ((f_mentions_989(F->up, (*(P173)rt_nil_check(F->n_990)).c_, F->name_991) || f_mentions_989(F->up, (*(P173)rt_nil_check(F->n_990)).d_, F->name_991)) || f_mentions_989(F->up, (*(P173)rt_nil_check(F->n_990)).e_, F->name_991));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_aliasing_996(struct f_greenc_1fr *up_, P173 e_993, P116 y_994, P173 a_995) {
  struct f_check_aliasing_996fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_993 = e_993;
F->y_994 = y_994;
F->a_995 = a_995;
F->b_2658 = NULL;
F->b_2658 = (*(P173)rt_nil_check(F->e_993)).b_;
F->p_2659 = NULL;
F->q_2660 = NULL;
F->r_2661 = NULL;
F->r_2661 = f_root_name_1173(F->up, F->a_995);
F->v_2662 = NULL;
if ((F->r_2661 == NULL)) {
goto ret_;
}
f_var_path_983(F->up, F->a_995, &F->p_2659);
while ((F->b_2658 != NULL)) {
if (((F->b_2658 != F->a_995) && (!eq_rt_gstr((*(P139)rt_nil_check(F->p_2659)), rt_g_lit("\?", 1))))) {
f_var_path_983(F->up, F->b_2658, &F->q_2660);
if (((!eq_rt_gstr((*(P139)rt_nil_check(F->q_2660)), rt_g_lit("\?", 1))) && f_paths_overlap_986(F->up, (*(P139)rt_nil_check(F->p_2659)), (*(P139)rt_nil_check(F->q_2660))))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_993)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->r_2661)).name_)), rt_g_lit(" is an out or in out actual and another actual of the same call (RM79 5.2.3)", 76)));
}
}
F->b_2658 = (*(P173)rt_nil_check(F->b_2658)).next_;
}
L_end_2663: ;
F->v_2662 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->r_2661)).name_)));
if (((((F->v_2662 != NULL) && (G_NV((*(P116)rt_nil_check(F->v_2662)).kind_) == ((rt_int)1LL))) && ((*(P116)rt_nil_check(F->y_994)).decl_ != NULL)) && ((G_NV((*(P173)rt_nil_check((*(P116)rt_nil_check(F->y_994)).decl_)).kind_) == ((rt_int)44LL)) || (G_NV((*(P173)rt_nil_check((*(P116)rt_nil_check(F->y_994)).decl_)).kind_) == ((rt_int)45LL))))) {
if (((G_NV((*(P173)rt_nil_check((*(P116)rt_nil_check(F->y_994)).decl_)).ival_) == ((rt_int)0LL)) && (!f_declares_1182(F->up, (*(P116)rt_nil_check(F->y_994)).decl_, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->r_2661)).name_)))))) {
if (((f_mentions_989(F->up, (*(P173)rt_nil_check((*(P116)rt_nil_check(F->y_994)).decl_)).c_, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->r_2661)).name_))) || f_mentions_989(F->up, (*(P173)rt_nil_check((*(P116)rt_nil_check(F->y_994)).decl_)).d_, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->r_2661)).name_)))) || f_mentions_989(F->up, (*(P173)rt_nil_check((*(P116)rt_nil_check(F->y_994)).decl_)).e_, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->r_2661)).name_))))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_993)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->r_2661)).name_)), rt_g_lit(" is an out or in out actual of ", 31)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_994)).name_))), rt_g_lit(", which also uses it as a global variable (RM79 5.2.3)", 54)));
}
}
}
ret_:

  return;
}

static void f_gcall_with_1001(struct f_greenc_1fr *up_, P173 e_997, P116 y_998, P121 *t_999, P139 *r_1000) {
  struct f_gcall_with_1001fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_997 = e_997;
F->y_998 = y_998;
F->t_999 = t_999;
F->r_1000 = r_1000;
F->args_2664 = NULL;
F->lv_2665 = NULL;
F->v_2666 = NULL;
F->x1_2667 = NULL;
F->x2_2668 = NULL;
F->a_2669 = NULL;
F->pm_2670 = NULL;
F->lt_2671 = NULL;
F->vt_2672 = NULL;
F->lc_2673 = NULL;
F->ro_2674 = INT_MIN;
f_check_call_rules_1193(F->up, F->e_997, F->y_998);
F->args_2664 = f_mk_221(F->up, rt_g_lit("", 0));
if ((((((G_NV((*(P116)rt_nil_check(F->y_998)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->y_998)).kind_) == ((rt_int)4LL))) && ((*(P116)rt_nil_check(F->y_998)).access_path_ != NULL)) && ((*(P116)rt_nil_check(F->y_998)).members_ != NULL)) && ((*(P116)rt_nil_check((*(P116)rt_nil_check(F->y_998)).members_)).c_ != NULL))) {
if ((F->up->call_task_ix_200 == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_997)).line_), cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_998)).name_)), rt_g_lit(" needs the member of the family: F(I).", 38)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_998)).name_))));
}
f_gexpr_773(F->up, F->up->call_task_ix_200, (*(P116)rt_nil_check((*(P116)rt_nil_check(F->y_998)).members_)).t_, &F->vt_2672, &F->v_2666);
F->up->call_task_ix_200 = NULL;
f_path_at_1079(F->up, G_NV((*(P116)rt_nil_check((*(P116)rt_nil_check(F->y_998)).members_)).level_), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_998)).access_path_)), &F->lv_2665);
f_path_at_1079(F->up, G_NV((*(P116)rt_nil_check((*(P116)rt_nil_check(F->y_998)).members_)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check((*(P116)rt_nil_check(F->y_998)).members_)).cname_)), rt_g_lit("lo", 2)), &F->x1_2667);
f_path_at_1079(F->up, G_NV((*(P116)rt_nil_check((*(P116)rt_nil_check(F->y_998)).members_)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check((*(P116)rt_nil_check(F->y_998)).members_)).cname_)), rt_g_lit("hi", 2)), &F->x2_2668);
F->lv_2665 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->lv_2665)), rt_g_lit("[rt_index(", 10)), (*(P139)rt_nil_check(F->v_2666))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->x1_2667))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->x2_2668))), rt_g_lit(") - ", 4)), (*(P139)rt_nil_check(F->x1_2667))), one_rt_gstr(93)));
F->args_2664 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->lv_2665))), rt_g_lit(" \? ", 3)), (*(P139)rt_nil_check(F->lv_2665))), rt_g_lit(" : (rt_raise(RT_X_TASKING), (void *)0))", 39)));
} else if ((((G_NV((*(P116)rt_nil_check(F->y_998)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->y_998)).kind_) == ((rt_int)4LL))) && ((*(P116)rt_nil_check(F->y_998)).access_path_ != NULL))) {
f_path_at_1079(F->up, G_NV((*(P116)rt_nil_check((*(P116)rt_nil_check(F->y_998)).members_)).level_), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_998)).access_path_)), &F->lv_2665);
F->args_2664 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->lv_2665))), rt_g_lit(" \? ", 3)), (*(P139)rt_nil_check(F->lv_2665))), rt_g_lit(" : (rt_raise(RT_X_TASKING), (void *)0))", 39)));
} else if ((G_NV((*(P116)rt_nil_check(F->y_998)).level_) > ((rt_int)0LL))) {
f_link_to_713(F->up, G_NV((*(P116)rt_nil_check(F->y_998)).level_), &F->args_2664);
}
F->pm_2670 = (*(P116)rt_nil_check(F->y_998)).params_;
while ((F->pm_2670 != NULL)) {
F->a_2669 = f_actual_for_971(F->up, (*(P173)rt_nil_check(F->e_997)).b_, F->pm_2670, (*(P116)rt_nil_check(F->y_998)).params_);
if ((({ rt_gstr at2676 = (*(P139)rt_nil_check(F->args_2664)); at2676.hi >= at2676.lo ? at2676.hi - at2676.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->args_2664 = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->args_2664)), rt_g_lit(", ", 2)));
}
if ((F->a_2669 == NULL)) {
if ((((*(P1752)rt_nil_check(F->pm_2670)).dflt_ == NULL) || (G_NV((*(P1752)rt_nil_check(F->pm_2670)).mode_) != ((rt_int)1LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_997)).line_), cat_rt_gstr(rt_g_lit("no actual parameter for ", 24), (*(P139)rt_nil_check((*(P1752)rt_nil_check(F->pm_2670)).name_))));
}
f_gexpr_773(F->up, (*(P1752)rt_nil_check(F->pm_2670)).dflt_, (*(P1752)rt_nil_check(F->pm_2670)).t_, &F->vt_2672, &F->v_2666);
F->args_2664 = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->args_2664)), (*(P139)rt_nil_check(F->v_2666))));
} else {
if ((((G_NV((*(P173)rt_nil_check(F->a_2669)).flag_) != ((rt_int)0LL)) && (G_NV((*(P173)rt_nil_check(F->a_2669)).flag_) != ((rt_int)4LL))) && (G_NV((*(P173)rt_nil_check(F->a_2669)).flag_) != G_NV((*(P1752)rt_nil_check(F->pm_2670)).mode_)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_997)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the association of ", 19), (*(P139)rt_nil_check((*(P1752)rt_nil_check(F->pm_2670)).name_))), rt_g_lit(" does not match its mode", 24)));
}
if ((G_NV((*(P1752)rt_nil_check(F->pm_2670)).mode_) == ((rt_int)1LL))) {
f_gexpr_773(F->up, F->a_2669, (*(P1752)rt_nil_check(F->pm_2670)).t_, &F->vt_2672, &F->v_2666);
f_check_type_469(F->up, F->vt_2672, (*(P1752)rt_nil_check(F->pm_2670)).t_, G_NV((*(P173)rt_nil_check(F->e_997)).line_));
if (((((*(P1752)rt_nil_check(F->pm_2670)).c_ != NULL) && ((*(P177)rt_nil_check((*(P1752)rt_nil_check(F->pm_2670)).c_)).lo_ != NULL)) && ((G_NV((*(P121)rt_nil_check((*(P1752)rt_nil_check(F->pm_2670)).t_)).kind_) == ((rt_int)1LL)) || (G_NV((*(P121)rt_nil_check((*(P1752)rt_nil_check(F->pm_2670)).t_)).kind_) == ((rt_int)4LL))))) {
F->v_2666 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P139)rt_nil_check(F->v_2666))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check((*(P1752)rt_nil_check(F->pm_2670)).c_)).lo_))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check((*(P1752)rt_nil_check(F->pm_2670)).c_)).hi_))), one_rt_gstr(41)));
}
F->args_2664 = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->args_2664)), (*(P139)rt_nil_check(F->v_2666))));
} else {
f_lvalue_729(F->up, F->a_2669, &F->lv_2665, &F->lt_2671, &F->lc_2673, &F->ro_2674);
 (void)rt_range(F->ro_2674, 0, 1);
if (G_NV(F->ro_2674)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_997)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P1752)rt_nil_check(F->pm_2670)).name_)), rt_g_lit(" needs a variable", 17)));
}
f_check_pure_target_1176(F->up, F->a_2669, G_NV((*(P173)rt_nil_check(F->e_997)).line_));
f_check_type_469(F->up, F->lt_2671, (*(P1752)rt_nil_check(F->pm_2670)).t_, G_NV((*(P173)rt_nil_check(F->e_997)).line_));
F->args_2664 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->args_2664)), one_rt_gstr(38)), (*(P139)rt_nil_check(F->lv_2665))));
f_check_aliasing_996(F->up, F->e_997, F->y_998, F->a_2669);
f_out_check_980(F->up, (*(P139)rt_nil_check(F->lv_2665)), F->lt_2671, F->lc_2673);
}
}
F->pm_2670 = (*(P1752)rt_nil_check(F->pm_2670)).next_;
}
L_end_2675: ;
if (((f_list_len_301(F->up, (*(P173)rt_nil_check(F->e_997)).b_) > ((rt_int)0LL)) && ((*(P116)rt_nil_check(F->y_998)).params_ == NULL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_997)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_998)).name_)), rt_g_lit(" takes no parameters", 20)));
}
(*F->t_999) = (*(P116)rt_nil_check(F->y_998)).result_;
(*F->r_1000) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_998)).cname_)), one_rt_gstr(40)), (*(P139)rt_nil_check(F->args_2664))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_builtin_1008(struct f_greenc_1fr *up_, rt_gstr name_1002, P173 args_1003, rt_int line_1004, int is_stmt_1005, P121 *t_1006, P139 *r_1007) {
  struct f_builtin_1008fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1002 = cp_rt_gstr(name_1002);
F->args_1003 = args_1003;
F->line_1004 = line_1004;
F->is_stmt_1005 = is_stmt_1005;
F->t_1006 = t_1006;
F->r_1007 = r_1007;
F->aty_2677 = NULL;
F->lt_2678 = NULL;
F->a_2679 = NULL;
F->w_2680 = NULL;
F->lv_2681 = NULL;
F->lc_2682 = NULL;
F->ro_2683 = INT_MIN;
(*F->t_1006) = F->up->ty_void_160;
if (((F->up->pure_sym_210 != NULL) && (eq_rt_gstr(F->name_1002, rt_g_lit("PUT", 3)) || eq_rt_gstr(F->name_1002, rt_g_lit("GET", 3))))) {
f_fail_242(F->up, F->line_1004, cat_rt_gstr(cat_rt_gstr(rt_g_lit("a function cannot do input-output: ", 35), F->name_1002), rt_g_lit(" has side effects (RM79 6.5)", 28)));
}
if (eq_rt_gstr(F->name_1002, rt_g_lit("PUT", 3))) {
if ((F->args_1003 == NULL)) {
f_fail_242(F->up, F->line_1004, rt_g_lit("PUT needs an item", 17));
}
f_gexpr_773(F->up, F->args_1003, NULL, &F->aty_2677, &F->a_2679);
F->w_2680 = f_mk_221(F->up, rt_g_lit("0", 1));
if (((*(P173)rt_nil_check(F->args_1003)).next_ != NULL)) {
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->args_1003)).next_, F->up->ty_int_155, &F->lt_2678, &F->w_2680);
}
if (f_is_string_551(F->up, F->aty_2677)) {
(*F->r_1007) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put(rt_g_g2s(", 18), (*(P139)rt_nil_check(F->a_2679))), rt_g_lit("))", 2)));
} else if ((G_NV((*(P121)rt_nil_check(F->aty_2677)).kind_) == ((rt_int)11LL))) {
(*F->r_1007) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_putc(", 10), (*(P139)rt_nil_check(F->a_2679))), one_rt_gstr(41)));
} else if ((G_NV((*(P121)rt_nil_check(F->aty_2677)).kind_) == ((rt_int)1LL))) {
(*F->r_1007) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put_int(", 13), (*(P139)rt_nil_check(F->a_2679))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->w_2680))), one_rt_gstr(41)));
} else if ((G_NV((*(P121)rt_nil_check(F->aty_2677)).kind_) == ((rt_int)2LL))) {
(*F->r_1007) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put_bool(", 14), (*(P139)rt_nil_check(F->a_2679))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->w_2680))), one_rt_gstr(41)));
} else if ((G_NV((*(P121)rt_nil_check(F->aty_2677)).kind_) == ((rt_int)16LL))) {
f_fail_242(F->up, F->line_1004, rt_g_lit("TEXT_IO has no PUT for a fixed point type: instantiate FIXED_IO (RM79 14.4)", 75));
} else if ((G_NV((*(P121)rt_nil_check(F->aty_2677)).kind_) == ((rt_int)3LL))) {
(*F->r_1007) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put_float(", 15), (*(P139)rt_nil_check(F->a_2679))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->w_2680))), rt_g_lit(", 0)", 4)));
} else {
f_fail_242(F->up, F->line_1004, rt_g_lit("PUT of this type is not handled", 31));
}
} else if (eq_rt_gstr(F->name_1002, rt_g_lit("GET", 3))) {
f_lvalue_729(F->up, F->args_1003, &F->lv_2681, &F->lt_2678, &F->lc_2682, &F->ro_2683);
 (void)rt_range(F->ro_2683, 0, 1);
if ((G_NV((*(P121)rt_nil_check(F->lt_2678)).kind_) == ((rt_int)11LL))) {
(*F->r_1007) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->lv_2681))), rt_g_lit(" = rt_g_getc())", 15)));
} else if ((G_NV((*(P121)rt_nil_check(F->lt_2678)).kind_) == ((rt_int)1LL))) {
(*F->r_1007) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->lv_2681))), rt_g_lit(" = rt_g_get_int())", 18)));
} else if ((G_NV((*(P121)rt_nil_check(F->lt_2678)).kind_) == ((rt_int)3LL))) {
(*F->r_1007) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->lv_2681))), rt_g_lit(" = rt_g_get_float())", 20)));
} else {
f_fail_242(F->up, F->line_1004, rt_g_lit("GET of this type is not handled", 31));
}
} else if (eq_rt_gstr(F->name_1002, rt_g_lit("ABS", 3))) {
f_gexpr_773(F->up, F->args_1003, NULL, &(*F->t_1006), &F->a_2679);
if ((G_NV((*(P121)rt_nil_check((*F->t_1006))).kind_) == ((rt_int)1LL))) {
(*F->r_1007) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_abs(", 7), (*(P139)rt_nil_check(F->a_2679))), one_rt_gstr(41)));
} else if (((G_NV((*(P121)rt_nil_check((*F->t_1006))).kind_) == ((rt_int)3LL)) || (G_NV((*(P121)rt_nil_check((*F->t_1006))).kind_) == ((rt_int)16LL)))) {
(*F->r_1007) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("fabs(", 5), (*(P139)rt_nil_check(F->a_2679))), one_rt_gstr(41)));
} else {
f_fail_242(F->up, F->line_1004, rt_g_lit("ABS applies to numeric values (RM79 App. C)", 43));
}
} else {
f_task_builtin_1153(F->up, F->name_1002, F->args_1003, F->line_1004, &(*F->t_1006), &(*F->r_1007));
}
ret_:

  return;
}

static P116 f_lookup_path_1010(struct f_greenc_1fr *up_, rt_gstr p_1009) {
  struct f_lookup_path_1010fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1009 = cp_rt_gstr(p_1009);
F->y_2684 = NULL;
F->m_2685 = NULL;
{ rt_int lo2690 = ({ rt_gstr at2687 = F->p_1009; at2687.lo; }), hi2691 = ({ rt_gstr at2688 = F->p_1009; at2688.hi; });
for (rt_int it2692 = hi2691; it2692 >= lo2690; it2692--) {
F->i_2689 = it2692;
if ((G_NV(({ rt_gstr ix2693 = F->p_1009; ix2693.p[rt_index(F->i_2689, ix2693.lo, ix2693.hi) - ix2693.lo]; })) == 46)) {
F->y_2684 = f_lookup_path_1010(F->up, ({ rt_gstr sl2697 = F->p_1009; rt_int l_ = ({ rt_gstr at2696 = F->p_1009; at2696.lo; }), h_ = rt_sub(F->i_2689, ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl2697.lo, sl2697.hi); rt_index(h_, sl2697.lo, sl2697.hi); } sl2697.p += l_ - sl2697.lo; sl2697.lo = l_; sl2697.hi = h_; sl2697; }));
if ((F->y_2684 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if (((G_NV((*(P116)rt_nil_check(F->y_2684)).kind_) != ((rt_int)8LL)) && (G_NV((*(P116)rt_nil_check(F->y_2684)).kind_) != ((rt_int)9LL)))) {
F->result_ = NULL;
goto ret_;
}
F->m_2685 = (*(P116)rt_nil_check(F->y_2684)).members_;
while ((F->m_2685 != NULL)) {
if ((eq_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->m_2685)).name_)), ({ rt_gstr sl2700 = F->p_1009; rt_int l_ = rt_add(F->i_2689, ((rt_int)1LL)), h_ = ({ rt_gstr at2699 = F->p_1009; at2699.hi; }); if (l_ <= h_) { rt_index(l_, sl2700.lo, sl2700.hi); rt_index(h_, sl2700.lo, sl2700.hi); } sl2700.p += l_ - sl2700.lo; sl2700.lo = l_; sl2700.hi = h_; sl2700; })) && (!G_NV((*(P116)rt_nil_check(F->m_2685)).hidden_)))) {
F->result_ = F->m_2685;
goto ret_;
}
F->m_2685 = (*(P116)rt_nil_check(F->m_2685)).mnext_;
}
L_end_2698: ;
F->result_ = NULL;
goto ret_;
}
}
}
L_end_2686: ;
F->result_ = f_lookup_409(F->up, F->p_1009);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_package_1012(struct f_greenc_1fr *up_, P173 e_1011) {
  struct f_is_package_1012fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1011 = e_1011;
F->y_2701 = NULL;
if (((G_NV((*(P173)rt_nil_check(F->e_1011)).kind_) != ((rt_int)5LL)) && (G_NV((*(P173)rt_nil_check(F->e_1011)).kind_) != ((rt_int)9LL)))) {
F->result_ = 0;
goto ret_;
} else if ((G_NV((*(P173)rt_nil_check(F->e_1011)).kind_) == ((rt_int)9LL))) {
if (((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_1011)).a_)).kind_) != ((rt_int)5LL)) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_1011)).a_)).kind_) != ((rt_int)9LL)))) {
F->result_ = 0;
goto ret_;
}
}
F->y_2701 = f_lookup_path_1010(F->up, f_path_of_338(F->up, F->e_1011));
if ((!(F->y_2701 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((G_NV((*(P116)rt_nil_check(F->y_2701)).kind_) == ((rt_int)8LL)) || (G_NV((*(P116)rt_nil_check(F->y_2701)).kind_) == ((rt_int)9LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P116 f_member_of_1016(struct f_greenc_1fr *up_, rt_gstr p_1013, rt_gstr name_1014, rt_int line_1015) {
  struct f_member_of_1016fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1013 = cp_rt_gstr(p_1013);
F->name_1014 = cp_rt_gstr(name_1014);
F->line_1015 = line_1015;
F->y_2702 = NULL;
F->y_2702 = f_lookup_path_1010(F->up, F->p_1013);
F->m_2703 = NULL;
if (((F->y_2702 == NULL) || ((G_NV((*(P116)rt_nil_check(F->y_2702)).kind_) != ((rt_int)8LL)) && (G_NV((*(P116)rt_nil_check(F->y_2702)).kind_) != ((rt_int)9LL))))) {
F->result_ = NULL;
goto ret_;
}
F->m_2703 = (*(P116)rt_nil_check(F->y_2702)).members_;
while ((F->m_2703 != NULL)) {
if ((eq_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->m_2703)).name_)), F->name_1014) && (!G_NV((*(P116)rt_nil_check(F->m_2703)).hidden_)))) {
F->result_ = F->m_2703;
goto ret_;
}
F->m_2703 = (*(P116)rt_nil_check(F->m_2703)).mnext_;
}
L_end_2704: ;
if ((G_NV((*(P116)rt_nil_check(F->y_2702)).kind_) == ((rt_int)9LL))) {
F->m_2703 = f_lookup_entry_415(F->up, F->name_1014, F->y_2702);
if ((((F->m_2703 != NULL) && (G_NV((*(P116)rt_nil_check(F->m_2703)).kind_) == ((rt_int)10LL))) && f_same_task_412(F->up, (*(P116)rt_nil_check(F->m_2703)).members_, F->y_2702))) {
F->result_ = F->m_2703;
goto ret_;
}
}
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_inside_package_1018(struct f_greenc_1fr *up_, P173 p_1017) {
  struct f_inside_package_1018fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1017 = p_1017;
F->l_2705 = NULL;
F->l_2705 = F->up->pkg_stack_206;
if ((F->p_1017 == NULL)) {
F->result_ = 1;
goto ret_;
}
while ((F->l_2705 != NULL)) {
if (eq_rt_gstr((*(P139)rt_nil_check((*(P150)rt_nil_check(F->l_2705)).s_)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->p_1017)).name_)))) {
F->result_ = 1;
goto ret_;
}
F->l_2705 = (*(P150)rt_nil_check(F->l_2705)).next_;
}
L_end_2706: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_copy_sym_1021(struct f_greenc_1fr *up_, P116 y_1019, P116 *z_1020) {
  struct f_copy_sym_1021fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1019 = y_1019;
F->z_1020 = z_1020;
(*F->z_1020) = ({ R117 *cell2707 = rt_alloc(sizeof(R117)); *cell2707 = cp_R117(({ R117 ag2708; ag2708.kind_ = G_NV((*(P116)rt_nil_check(F->y_1019)).kind_); ag2708.name_ = (*(P116)rt_nil_check(F->y_1019)).name_; ag2708.t_ = (*(P116)rt_nil_check(F->y_1019)).t_; ag2708.c_ = (*(P116)rt_nil_check(F->y_1019)).c_; ag2708.access_path_ = (*(P116)rt_nil_check(F->y_1019)).access_path_; ag2708.cname_ = (*(P116)rt_nil_check(F->y_1019)).cname_; ag2708.ro_ = G_NV((*(P116)rt_nil_check(F->y_1019)).ro_); ag2708.mvalue_ = G_NV((*(P116)rt_nil_check(F->y_1019)).mvalue_); ag2708.hasmv_ = G_NV((*(P116)rt_nil_check(F->y_1019)).hasmv_); ag2708.decl_ = (*(P116)rt_nil_check(F->y_1019)).decl_; ag2708.params_ = (*(P116)rt_nil_check(F->y_1019)).params_; ag2708.result_ = (*(P116)rt_nil_check(F->y_1019)).result_; ag2708.depth_ = ((rt_int)0LL); ag2708.level_ = G_NV((*(P116)rt_nil_check(F->y_1019)).level_); ag2708.byref_ = G_NV((*(P116)rt_nil_check(F->y_1019)).byref_); ag2708.vrp_ = G_NV((*(P116)rt_nil_check(F->y_1019)).vrp_); ag2708.hidden_ = G_NV((*(P116)rt_nil_check(F->y_1019)).hidden_); ag2708.from_use_ = 0; ag2708.members_ = (*(P116)rt_nil_check(F->y_1019)).members_; ag2708.mnext_ = NULL; ag2708.chain_ = NULL; ag2708.stack_ = NULL; ag2708.flags_ = G_NV((*(P116)rt_nil_check(F->y_1019)).flags_); ag2708; })); (P116)cell2707; });
ret_:

  return;
}

static void f_complete_private_1024(struct f_greenc_1fr *up_, P121 ph_1022, P121 full_1023) {
  struct f_complete_private_1024fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->ph_1022 = ph_1022;
F->full_1023 = full_1023;
F->n_2709 = NULL;
F->n_2709 = (*(P121)rt_nil_check(F->ph_1022)).name_;
F->p_2710 = NULL;
F->p_2710 = (*(P121)rt_nil_check(F->ph_1022)).decl_;
as_R122(&(*(P121)rt_nil_check(F->ph_1022)), (*(P121)rt_nil_check(F->full_1023)));
(*(P121)rt_nil_check(F->ph_1022)).name_ = F->n_2709;
(*(P121)rt_nil_check(F->ph_1022)).priv_ = 1;
(*(P121)rt_nil_check(F->ph_1022)).decl_ = F->p_2710;
ret_:

  return;
}

static void f_package_spec_1026(struct f_greenc_1fr *up_, P173 e_1025) {
  struct f_package_spec_1026fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1025 = e_1025;
F->y_2711 = NULL;
F->m_2712 = NULL;
F->z_2713 = NULL;
F->saved_2714 = NULL;
F->saved_2714 = F->up->cur_pkg_207;
F->first_private_2715 = NULL;
F->y_2711 = f_new_sym_452(F->up, ((rt_int)8LL), (*(P173)rt_nil_check(F->e_1025)).name_);
(*(P116)rt_nil_check(F->y_2711)).decl_ = F->e_1025;
F->up->pkg_stack_206 = ({ R151 *cell2716 = rt_alloc(sizeof(R151)); *cell2716 = cp_R151(({ R151 ag2717; ag2717.s_ = (*(P173)rt_nil_check(F->e_1025)).name_; ag2717.next_ = F->up->pkg_stack_206; ag2717; })); (P150)cell2716; });
F->up->cur_pkg_207 = F->e_1025;
f_open_scope_448(F->up);
f_decl_elements_631(F->up, (*(P173)rt_nil_check(F->e_1025)).c_);
F->first_private_2715 = F->up->scope_stack_120;
f_decl_elements_631(F->up, (*(P173)rt_nil_check(F->e_1025)).d_);
F->m_2712 = F->up->scope_stack_120;
while (((F->m_2712 != NULL) && (G_NV((*(P116)rt_nil_check(F->m_2712)).depth_) == G_NV(F->up->depth_119)))) {
if (((G_NV((*(P116)rt_nil_check(F->m_2712)).kind_) == ((rt_int)2LL)) && (G_NV((*(P116)rt_nil_check(F->m_2712)).flags_) == rt_add(((rt_int)1LL), ((rt_int)2LL))))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1025)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("deferred constant ", 18), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->m_2712)).name_))), rt_g_lit(" has no full declaration in the private part (RM79 7.4)", 55)));
}
f_copy_sym_1021(F->up, F->m_2712, &F->z_2713);
(*(P116)rt_nil_check(F->z_2713)).hidden_ = (f_hidden_from_1029(F->up, F->m_2712, F->first_private_2715) || G_NV((*(P116)rt_nil_check(F->m_2712)).from_use_));
(*(P116)rt_nil_check(F->z_2713)).mnext_ = (*(P116)rt_nil_check(F->y_2711)).members_;
(*(P116)rt_nil_check(F->y_2711)).members_ = F->z_2713;
F->m_2712 = (*(P116)rt_nil_check(F->m_2712)).stack_;
}
L_end_2718: ;
f_close_scope_449(F->up);
F->up->pkg_stack_206 = (*(P150)rt_nil_check(F->up->pkg_stack_206)).next_;
F->up->cur_pkg_207 = F->saved_2714;
f_define_447(F->up, F->y_2711, G_NV((*(P173)rt_nil_check(F->e_1025)).line_));
ret_:

  return;
}

static int f_hidden_from_1029(struct f_greenc_1fr *up_, P116 m_1027, P116 first_private_1028) {
  struct f_hidden_from_1029fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->m_1027 = m_1027;
F->first_private_1028 = first_private_1028;
F->p_2719 = NULL;
F->p_2719 = F->up->scope_stack_120;
while ((F->p_2719 != NULL)) {
if ((F->p_2719 == F->first_private_1028)) {
F->result_ = 0;
goto ret_;
}
if ((F->p_2719 == F->m_1027)) {
F->result_ = 1;
goto ret_;
}
F->p_2719 = (*(P116)rt_nil_check(F->p_2719)).stack_;
}
L_end_2720: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_package_body_1031(struct f_greenc_1fr *up_, P173 e_1030) {
  struct f_package_body_1031fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1030 = e_1030;
F->saved_labels_2721 = NULL;
F->y_2722 = NULL;
F->y_2722 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1030)).name_)));
F->m_2723 = NULL;
F->z_2724 = NULL;
F->saved_2725 = NULL;
F->saved_2725 = F->up->cur_pkg_207;
if (((F->y_2722 != NULL) && (G_NV((*(P116)rt_nil_check(F->y_2722)).kind_) == ((rt_int)11LL)))) {
f_attach_generic_body_1204(F->up, F->e_1030);
goto ret_;
}
if (((F->y_2722 == NULL) || (G_NV((*(P116)rt_nil_check(F->y_2722)).kind_) != ((rt_int)8LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1030)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("package body ", 13), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1030)).name_))), rt_g_lit(" has no specification", 21)));
}
F->up->pkg_stack_206 = ({ R151 *cell2726 = rt_alloc(sizeof(R151)); *cell2726 = cp_R151(({ R151 ag2727; ag2727.s_ = (*(P173)rt_nil_check(F->e_1030)).name_; ag2727.next_ = F->up->pkg_stack_206; ag2727; })); (P150)cell2726; });
F->up->cur_pkg_207 = (*(P116)rt_nil_check(F->y_2722)).decl_;
f_open_scope_448(F->up);
F->m_2723 = (*(P116)rt_nil_check(F->y_2722)).members_;
while ((F->m_2723 != NULL)) {
f_copy_sym_1021(F->up, F->m_2723, &F->z_2724);
(*(P116)rt_nil_check(F->z_2724)).hidden_ = 0;
f_define_447(F->up, F->z_2724, G_NV((*(P173)rt_nil_check(F->e_1030)).line_));
F->m_2723 = (*(P116)rt_nil_check(F->m_2723)).mnext_;
}
L_end_2728: ;
f_decl_elements_631(F->up, (*(P173)rt_nil_check(F->e_1030)).c_);
F->m_2723 = (*(P116)rt_nil_check(F->y_2722)).members_;
while ((F->m_2723 != NULL)) {
if ((((G_NV((*(P116)rt_nil_check(F->m_2723)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->m_2723)).kind_) == ((rt_int)4LL))) && (G_NV((*(P173)rt_nil_check((*(P116)rt_nil_check(F->m_2723)).decl_)).ival_) == ((rt_int)1LL)))) {
F->z_2724 = ({ A115 ix2730 = F->up->table_118; ix2730.p[rt_index(f_hash_407(F->up, (*(P139)rt_nil_check((*(P116)rt_nil_check(F->m_2723)).name_))), ix2730.lo, ix2730.hi) - ix2730.lo]; });
while ((F->z_2724 != NULL)) {
if (((*(P116)rt_nil_check(F->z_2724)).cname_ == (*(P116)rt_nil_check(F->m_2723)).cname_)) {
(*(P116)rt_nil_check(F->m_2723)).decl_ = (*(P116)rt_nil_check(F->z_2724)).decl_;
}
F->z_2724 = (*(P116)rt_nil_check(F->z_2724)).chain_;
}
L_end_2731: ;
if ((G_NV((*(P173)rt_nil_check((*(P116)rt_nil_check(F->m_2723)).decl_)).ival_) == ((rt_int)1LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1030)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no body for ", 12), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->m_2723)).name_))), rt_g_lit(" in package body ", 17)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1030)).name_))));
}
}
F->m_2723 = (*(P116)rt_nil_check(F->m_2723)).mnext_;
}
L_end_2729: ;
F->saved_labels_2721 = F->up->body_labels_190;
f_label_body_653(F->up, (*(P173)rt_nil_check(F->e_1030)).d_, (*(P173)rt_nil_check(F->e_1030)).e_);
f_guarded_672(F->up, (*(P173)rt_nil_check(F->e_1030)).d_, (*(P173)rt_nil_check(F->e_1030)).e_, G_NV((*(P173)rt_nil_check(F->e_1030)).line_));
F->up->body_labels_190 = F->saved_labels_2721;
f_close_scope_449(F->up);
F->up->pkg_stack_206 = (*(P150)rt_nil_check(F->up->pkg_stack_206)).next_;
F->up->cur_pkg_207 = F->saved_2725;
ret_:

  return;
}

static int f_use_visible_1033(struct f_greenc_1fr *up_, P116 old_1032) {
  struct f_use_visible_1033fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->old_1032 = old_1032;
if ((F->old_1032 == NULL)) {
F->result_ = 1;
goto ret_;
}
F->result_ = (((G_NV((*(P116)rt_nil_check(F->old_1032)).depth_) < G_NV(F->up->depth_119)) && (G_NV((*(P116)rt_nil_check(F->old_1032)).kind_) != ((rt_int)1LL))) && (G_NV((*(P116)rt_nil_check(F->old_1032)).kind_) != ((rt_int)2LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_use_clause_1035(struct f_greenc_1fr *up_, P173 e_1034) {
  struct f_use_clause_1035fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1034 = e_1034;
F->n_2732 = NULL;
F->n_2732 = (*(P173)rt_nil_check(F->e_1034)).a_;
F->y_2733 = NULL;
F->m_2734 = NULL;
F->z_2735 = NULL;
F->old_2736 = NULL;
while ((F->n_2732 != NULL)) {
F->y_2733 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->n_2732)).name_)));
if ((F->y_2733 == NULL)) {
if ((!eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->n_2732)).name_)), rt_g_lit("TEXT_IO", 7)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->n_2732)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->n_2732)).name_)), rt_g_lit(" is not a package", 17)));
}
} else if (((G_NV((*(P116)rt_nil_check(F->y_2733)).kind_) != ((rt_int)8LL)) && (G_NV((*(P116)rt_nil_check(F->y_2733)).kind_) != ((rt_int)9LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->n_2732)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->n_2732)).name_)), rt_g_lit(" is not a package or a task", 27)));
} else {
F->m_2734 = (*(P116)rt_nil_check(F->y_2733)).members_;
while ((F->m_2734 != NULL)) {
F->old_2736 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P116)rt_nil_check(F->m_2734)).name_)));
if (((!G_NV((*(P116)rt_nil_check(F->m_2734)).hidden_)) && f_use_visible_1033(F->up, F->old_2736))) {
f_copy_sym_1021(F->up, F->m_2734, &F->z_2735);
(*(P116)rt_nil_check(F->z_2735)).from_use_ = 1;
f_define_447(F->up, F->z_2735, G_NV((*(P173)rt_nil_check(F->n_2732)).line_));
}
F->m_2734 = (*(P116)rt_nil_check(F->m_2734)).mnext_;
}
L_end_2738: ;
}
F->n_2732 = (*(P173)rt_nil_check(F->n_2732)).next_;
}
L_end_2737: ;
ret_:

  return;
}

static void f_fits_1040(struct f_greenc_1fr *up_, P116 y_1036, P173 args_1037, P121 want_1038, int *ok_1039) {
  struct f_fits_1040fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1036 = y_1036;
F->args_1037 = args_1037;
F->want_1038 = want_1038;
F->ok_1039 = ok_1039;
F->pm_2739 = NULL;
F->pm_2739 = (*(P116)rt_nil_check(F->y_1036)).params_;
F->a_2740 = NULL;
F->t_2741 = NULL;
F->c_2742 = NULL;
F->v_2743 = NULL;
F->ro_2744 = INT_MIN;
F->saved_2745 = NULL;
F->saved_2745 = F->up->code_135;
F->used_2746 = INT64_MIN;
F->used_2746 = ((rt_int)0LL);
(*F->ok_1039) = 1;
F->up->trial_154 = rt_add(G_NV(F->up->trial_154), ((rt_int)1LL));
F->up->code_135 = f_new_buffer_243(F->up);
{
{ rt_frame xf2748;
if (RT_TRY(xf2748)) {
while ((G_NV((*F->ok_1039)) && (F->pm_2739 != NULL))) {
F->a_2740 = f_actual_for_971(F->up, F->args_1037, F->pm_2739, (*(P116)rt_nil_check(F->y_1036)).params_);
if ((F->a_2740 == NULL)) {
(*F->ok_1039) = ((*(P1752)rt_nil_check(F->pm_2739)).dflt_ != NULL);
} else {
F->used_2746 = rt_add(G_NV(F->used_2746), ((rt_int)1LL));
if ((((G_NV((*(P173)rt_nil_check(F->a_2740)).flag_) != ((rt_int)0LL)) && (G_NV((*(P173)rt_nil_check(F->a_2740)).flag_) != ((rt_int)4LL))) && (G_NV((*(P173)rt_nil_check(F->a_2740)).flag_) != G_NV((*(P1752)rt_nil_check(F->pm_2739)).mode_)))) {
(*F->ok_1039) = 0;
} else if ((G_NV((*(P1752)rt_nil_check(F->pm_2739)).mode_) == ((rt_int)1LL))) {
f_gexpr_773(F->up, F->a_2740, (*(P1752)rt_nil_check(F->pm_2739)).t_, &F->t_2741, &F->v_2743);
(*F->ok_1039) = (f_same_429(F->up, F->t_2741, (*(P1752)rt_nil_check(F->pm_2739)).t_) || ((G_NV((*(P121)rt_nil_check(F->t_2741)).kind_) == ((rt_int)10LL)) && (G_NV((*(P121)rt_nil_check((*(P1752)rt_nil_check(F->pm_2739)).t_)).kind_) == ((rt_int)8LL))));
} else {
f_lvalue_729(F->up, F->a_2740, &F->v_2743, &F->t_2741, &F->c_2742, &F->ro_2744);
 (void)rt_range(F->ro_2744, 0, 1);
(*F->ok_1039) = f_same_429(F->up, F->t_2741, (*(P1752)rt_nil_check(F->pm_2739)).t_);
}
}
F->pm_2739 = (*(P1752)rt_nil_check(F->pm_2739)).next_;
}
L_end_2750: ;
if ((G_NV(F->used_2746) != f_list_len_301(F->up, F->args_1037))) {
(*F->ok_1039) = 0;
}
if (((G_NV((*F->ok_1039)) && (F->want_1038 != NULL)) && (G_NV((*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_1036)).result_)).kind_) != ((rt_int)9LL)))) {
(*F->ok_1039) = (f_same_429(F->up, (*(P116)rt_nil_check(F->y_1036)).result_, F->want_1038) || (G_NV((*(P121)rt_nil_check(F->want_1038)).kind_) == ((rt_int)9LL)));
}
RT_POP(xf2748);
} else {
RT_POP(xf2748);
int x2749 = rt_xcur;
if (rt_g_aborted()) rt_raise(x2749);
if (0 || x2749 == ex_compile_error_107) {
(*F->ok_1039) = 0;
} else {
rt_raise(x2749);
}
}
}

}
L_end_2747: ;
F->up->trial_154 = rt_sub(G_NV(F->up->trial_154), ((rt_int)1LL));
F->up->code_135 = F->saved_2745;
ret_:

  return;
}

static int f_is_builtin_1042(struct f_greenc_1fr *up_, rt_gstr n_1041) {
  struct f_is_builtin_1042fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1041 = cp_rt_gstr(n_1041);
F->result_ = (((eq_rt_gstr(F->n_1041, rt_g_lit("PUT", 3)) || eq_rt_gstr(F->n_1041, rt_g_lit("GET", 3))) || eq_rt_gstr(F->n_1041, rt_g_lit("ABS", 3))) || eq_rt_gstr(F->n_1041, rt_g_lit("SET_PRIORITY", 12)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_resolve_overload_1049(struct f_greenc_1fr *up_, rt_gstr name_1043, P173 args_1044, int is_stmt_1045, P121 want_1046, rt_int line_1047, P116 *y_1048) {
  struct f_resolve_overload_1049fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1043 = cp_rt_gstr(name_1043);
F->args_1044 = args_1044;
F->is_stmt_1045 = is_stmt_1045;
F->want_1046 = want_1046;
F->line_1047 = line_1047;
F->y_1048 = y_1048;
F->z_2751 = NULL;
F->z_2751 = ({ A115 ix2752 = F->up->table_118; ix2752.p[rt_index(f_hash_407(F->up, F->name_1043), ix2752.lo, ix2752.hi) - ix2752.lo]; });
F->first_2753 = NULL;
F->n_2754 = INT64_MIN;
F->n_2754 = ((rt_int)0LL);
F->ok_2755 = INT_MIN;
{ rt_int lo2758 = ((rt_int)1LL), hi2759 = ((rt_int)2LL);
for (rt_int it2760 = lo2758; it2760 <= hi2759; it2760++) {
F->pass_2757 = it2760;
F->z_2751 = ({ A115 ix2761 = F->up->table_118; ix2761.p[rt_index(f_hash_407(F->up, F->name_1043), ix2761.lo, ix2761.hi) - ix2761.lo]; });
F->n_2754 = ((rt_int)0LL);
while ((F->z_2751 != NULL)) {
if ((eq_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->z_2751)).name_)), F->name_1043) && ((G_NV((*(P116)rt_nil_check(F->z_2751)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->z_2751)).kind_) == ((rt_int)4LL))))) {
F->n_2754 = rt_add(G_NV(F->n_2754), ((rt_int)1LL));
if ((F->first_2753 == NULL)) {
F->first_2753 = F->z_2751;
}
if (((G_NV((*(P121)rt_nil_check((*(P116)rt_nil_check(F->z_2751)).result_)).kind_) == ((rt_int)9LL)) == F->is_stmt_1045)) {
if ((F->pass_2757 == ((rt_int)1LL))) {
f_fits_1040(F->up, F->z_2751, F->args_1044, F->want_1046, &F->ok_2755);
 (void)rt_range(F->ok_2755, 0, 1);
} else {
f_fits_1040(F->up, F->z_2751, F->args_1044, NULL, &F->ok_2755);
 (void)rt_range(F->ok_2755, 0, 1);
}
if (G_NV(F->ok_2755)) {
(*F->y_1048) = F->z_2751;
goto ret_;
}
}
}
F->z_2751 = (*(P116)rt_nil_check(F->z_2751)).chain_;
}
L_end_2762: ;
}
}
L_end_2756: ;
if (f_is_builtin_1042(F->up, F->name_1043)) {
(*F->y_1048) = NULL;
goto ret_;
}
if ((G_NV(F->n_2754) > ((rt_int)1LL))) {
f_fail_242(F->up, F->line_1047, cat_rt_gstr(cat_rt_gstr(rt_g_lit("no declaration of ", 18), F->name_1043), rt_g_lit(" fits these actual parameters", 29)));
}
(*F->y_1048) = F->first_2753;
ret_:

  return;
}

static void f_resolve_member_overload_1057(struct f_greenc_1fr *up_, rt_gstr p_1050, rt_gstr name_1051, P173 args_1052, int is_stmt_1053, P121 want_1054, rt_int line_1055, P116 *y_1056) {
  struct f_resolve_member_overload_1057fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1050 = cp_rt_gstr(p_1050);
F->name_1051 = cp_rt_gstr(name_1051);
F->args_1052 = args_1052;
F->is_stmt_1053 = is_stmt_1053;
F->want_1054 = want_1054;
F->line_1055 = line_1055;
F->y_1056 = y_1056;
F->pk_2763 = NULL;
F->pk_2763 = f_lookup_path_1010(F->up, F->p_1050);
F->z_2764 = NULL;
F->n_2765 = INT64_MIN;
F->n_2765 = ((rt_int)0LL);
F->ok_2766 = INT_MIN;
if ((F->pk_2763 == NULL)) {
goto ret_;
}
{ rt_int lo2769 = ((rt_int)1LL), hi2770 = ((rt_int)2LL);
for (rt_int it2771 = lo2769; it2771 <= hi2770; it2771++) {
F->pass_2768 = it2771;
F->z_2764 = (*(P116)rt_nil_check(F->pk_2763)).members_;
F->n_2765 = ((rt_int)0LL);
while ((F->z_2764 != NULL)) {
if (((eq_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->z_2764)).name_)), F->name_1051) && ((G_NV((*(P116)rt_nil_check(F->z_2764)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->z_2764)).kind_) == ((rt_int)4LL)))) && (!G_NV((*(P116)rt_nil_check(F->z_2764)).hidden_)))) {
F->n_2765 = rt_add(G_NV(F->n_2765), ((rt_int)1LL));
if (((G_NV((*(P121)rt_nil_check((*(P116)rt_nil_check(F->z_2764)).result_)).kind_) == ((rt_int)9LL)) == F->is_stmt_1053)) {
if ((F->pass_2768 == ((rt_int)1LL))) {
f_fits_1040(F->up, F->z_2764, F->args_1052, F->want_1054, &F->ok_2766);
 (void)rt_range(F->ok_2766, 0, 1);
} else {
f_fits_1040(F->up, F->z_2764, F->args_1052, NULL, &F->ok_2766);
 (void)rt_range(F->ok_2766, 0, 1);
}
if (G_NV(F->ok_2766)) {
(*F->y_1056) = F->z_2764;
goto ret_;
}
}
}
F->z_2764 = (*(P116)rt_nil_check(F->z_2764)).mnext_;
}
L_end_2772: ;
}
}
L_end_2767: ;
if ((G_NV(F->n_2765) > ((rt_int)1LL))) {
f_fail_242(F->up, F->line_1055, cat_rt_gstr(cat_rt_gstr(rt_g_lit("no declaration of ", 18), F->name_1051), rt_g_lit(" fits these actual parameters", 29)));
}
ret_:

  return;
}

static void f_user_operator_1063(struct f_greenc_1fr *up_, P173 e_1058, P121 want_1059, P121 *t_1060, P139 *r_1061, int *done_1062) {
  struct f_user_operator_1063fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1058 = e_1058;
F->want_1059 = want_1059;
F->t_1060 = t_1060;
F->r_1061 = r_1061;
F->done_1062 = done_1062;
F->op_2773 = NULL;
F->op_2773 = (*(P173)rt_nil_check(F->e_1058)).name_;
F->negate_2774 = INT_MIN;
F->negate_2774 = 0;
F->y_2775 = NULL;
F->call_2776 = NULL;
F->fname_2777 = NULL;
F->l_2778 = NULL;
F->rt_2779 = NULL;
F->ok_2780 = INT_MIN;
(*F->done_1062) = 0;
if (eq_rt_gstr((*(P139)rt_nil_check(F->op_2773)), rt_g_lit("/=", 2))) {
F->op_2773 = f_mk_221(F->up, rt_g_lit("=", 1));
F->negate_2774 = 1;
}
if ((f_lookup_409(F->up, (*(P139)rt_nil_check(F->op_2773))) == NULL)) {
goto ret_;
}
F->l_2778 = f_nn_295(F->up, G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_1058)).a_)).kind_), G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_1058)).a_)).line_));
as_R174(&(*(P173)rt_nil_check(F->l_2778)), (*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_1058)).a_)));
(*(P173)rt_nil_check(F->l_2778)).next_ = NULL;
(*(P173)rt_nil_check(F->l_2778)).formal_ = NULL;
(*(P173)rt_nil_check(F->l_2778)).flag_ = ((rt_int)0LL);
if ((G_NV((*(P173)rt_nil_check(F->e_1058)).kind_) == ((rt_int)7LL))) {
F->rt_2779 = f_nn_295(F->up, G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_1058)).b_)).kind_), G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_1058)).b_)).line_));
as_R174(&(*(P173)rt_nil_check(F->rt_2779)), (*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_1058)).b_)));
(*(P173)rt_nil_check(F->rt_2779)).next_ = NULL;
(*(P173)rt_nil_check(F->rt_2779)).formal_ = NULL;
(*(P173)rt_nil_check(F->rt_2779)).flag_ = ((rt_int)0LL);
(*(P173)rt_nil_check(F->l_2778)).next_ = F->rt_2779;
}
F->y_2775 = ({ A115 ix2781 = F->up->table_118; ix2781.p[rt_index(f_hash_407(F->up, (*(P139)rt_nil_check(F->op_2773))), ix2781.lo, ix2781.hi) - ix2781.lo]; });
while ((F->y_2775 != NULL)) {
if ((eq_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2775)).name_)), (*(P139)rt_nil_check(F->op_2773))) && (G_NV((*(P116)rt_nil_check(F->y_2775)).kind_) == ((rt_int)3LL)))) {
f_fits_1040(F->up, F->y_2775, F->l_2778, NULL, &F->ok_2780);
 (void)rt_range(F->ok_2780, 0, 1);
if (G_NV(F->ok_2780)) {
F->fname_2777 = f_nn_295(F->up, ((rt_int)5LL), G_NV((*(P173)rt_nil_check(F->e_1058)).line_));
(*(P173)rt_nil_check(F->fname_2777)).name_ = F->op_2773;
F->call_2776 = f_nn_295(F->up, ((rt_int)8LL), G_NV((*(P173)rt_nil_check(F->e_1058)).line_));
(*(P173)rt_nil_check(F->call_2776)).a_ = F->fname_2777;
(*(P173)rt_nil_check(F->call_2776)).b_ = F->l_2778;
F->up->call_want_209 = NULL;
f_gcall_with_1001(F->up, F->call_2776, F->y_2775, &(*F->t_1060), &(*F->r_1061));
if (G_NV(F->negate_2774)) {
(*F->r_1061) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!", 2), (*(P139)rt_nil_check((*F->r_1061)))), one_rt_gstr(41)));
}
(*F->done_1062) = 1;
goto ret_;
}
}
F->y_2775 = (*(P116)rt_nil_check(F->y_2775)).chain_;
}
L_end_2782: ;
ret_:

  return;
}

static void f_task_p_1065(struct f_greenc_1fr *up_, P173 *res_1064) {
  struct f_task_p_1065fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1064 = res_1064;
F->x_2783 = NULL;
F->r_2784 = NULL;
F->line_2785 = INT64_MIN;
F->line_2785 = f_cur_line_302(F->up);
f_expect_kw_317(F->up, rt_g_lit("TASK", 4));
if (f_at_kw_304(F->up, rt_g_lit("BODY", 4))) {
f_skip_315(F->up);
F->x_2783 = f_nn_295(F->up, ((rt_int)51LL), G_NV(F->line_2785));
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_2783)).name_);
f_expect_kw_317(F->up, rt_g_lit("IS", 2));
f_body_part_383(F->up, F->x_2783);
} else {
F->x_2783 = f_nn_295(F->up, ((rt_int)50LL), G_NV(F->line_2785));
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_2783)).name_);
if (((f_at_kw_304(F->up, rt_g_lit("IS", 2)) && (f_kind_at_310(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit("NEW", 3)))) {
f_instantiation_1198(F->up, F->x_2783, &(*F->res_1064));
goto ret_;
}
if (f_at_op_306(F->up, rt_g_lit("(", 1))) {
f_skip_315(F->up);
f_discrete_range_p_357(F->up, &(*(P173)rt_nil_check(F->x_2783)).a_);
if ((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->x_2783)).a_)).kind_) == ((rt_int)5LL))) {
F->r_2784 = f_nn_295(F->up, ((rt_int)80LL), G_NV(F->line_2785));
(*(P173)rt_nil_check(F->r_2784)).name_ = (*(P173)rt_nil_check((*(P173)rt_nil_check(F->x_2783)).a_)).name_;
(*(P173)rt_nil_check(F->x_2783)).a_ = F->r_2784;
}
f_expect_op_319(F->up, rt_g_lit(")", 1));
}
if (f_at_kw_304(F->up, rt_g_lit("IS", 2))) {
f_skip_315(F->up);
f_decl_part_371(F->up, &(*(P173)rt_nil_check(F->x_2783)).c_);
if (f_at_kw_304(F->up, rt_g_lit("PRIVATE", 7))) {
f_skip_315(F->up);
f_decl_part_371(F->up, &(*(P173)rt_nil_check(F->x_2783)).d_);
}
f_expect_kw_317(F->up, rt_g_lit("END", 3));
}
}
if (f_at_kind_308(F->up, ((rt_int)1LL))) {
f_skip_315(F->up);
}
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_1064) = F->x_2783;
ret_:

  return;
}

static void f_entry_p_1067(struct f_greenc_1fr *up_, P173 *res_1066) {
  struct f_entry_p_1067fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1066 = res_1066;
F->x_2786 = NULL;
f_expect_kw_317(F->up, rt_g_lit("ENTRY", 5));
F->x_2786 = f_nn_295(F->up, ((rt_int)52LL), f_cur_line_302(F->up));
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_2786)).name_);
if ((f_at_op_306(F->up, rt_g_lit("(", 1)) && (!((f_kind_at_310(F->up, ((rt_int)1LL)) == ((rt_int)1LL)) && (eq_rt_gstr(f_text_at_312(F->up, ((rt_int)2LL)), rt_g_lit(":", 1)) || eq_rt_gstr(f_text_at_312(F->up, ((rt_int)2LL)), rt_g_lit(",", 1))))))) {
f_skip_315(F->up);
if (((f_at_kind_308(F->up, ((rt_int)1LL)) && (f_kind_at_310(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit(")", 1)))) {
f_subtype_ind_359(F->up, &(*(P173)rt_nil_check(F->x_2786)).b_);
} else {
f_discrete_range_p_357(F->up, &(*(P173)rt_nil_check(F->x_2786)).b_);
}
f_expect_op_319(F->up, rt_g_lit(")", 1));
}
if (f_at_op_306(F->up, rt_g_lit("(", 1))) {
f_formal_part_377(F->up, &(*(P173)rt_nil_check(F->x_2786)).a_);
}
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_1066) = F->x_2786;
ret_:

  return;
}

static void f_accept_p_1069(struct f_greenc_1fr *up_, P173 *res_1068) {
  struct f_accept_p_1069fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1068 = res_1068;
F->x_2787 = NULL;
f_expect_kw_317(F->up, rt_g_lit("ACCEPT", 6));
F->x_2787 = f_nn_295(F->up, ((rt_int)34LL), f_cur_line_302(F->up));
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_2787)).name_);
if ((f_at_op_306(F->up, rt_g_lit("(", 1)) && (!((f_kind_at_310(F->up, ((rt_int)1LL)) == ((rt_int)1LL)) && (eq_rt_gstr(f_text_at_312(F->up, ((rt_int)2LL)), rt_g_lit(":", 1)) || eq_rt_gstr(f_text_at_312(F->up, ((rt_int)2LL)), rt_g_lit(",", 1))))))) {
f_skip_315(F->up);
f_expr_332(F->up, &(*(P173)rt_nil_check(F->x_2787)).c_);
f_expect_op_319(F->up, rt_g_lit(")", 1));
}
if (f_at_op_306(F->up, rt_g_lit("(", 1))) {
f_formal_part_377(F->up, &(*(P173)rt_nil_check(F->x_2787)).a_);
}
if (f_at_kw_304(F->up, rt_g_lit("DO", 2))) {
f_skip_315(F->up);
(*(P173)rt_nil_check(F->x_2787)).flag_ = ((rt_int)1LL);
f_statements_390(F->up, &(*(P173)rt_nil_check(F->x_2787)).b_);
f_expect_kw_317(F->up, rt_g_lit("END", 3));
if (f_at_kind_308(F->up, ((rt_int)1LL))) {
f_skip_315(F->up);
}
}
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_1068) = F->x_2787;
ret_:

  return;
}

static void f_delay_p_1071(struct f_greenc_1fr *up_, P173 *res_1070) {
  struct f_delay_p_1071fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1070 = res_1070;
F->x_2788 = NULL;
f_expect_kw_317(F->up, rt_g_lit("DELAY", 5));
F->x_2788 = f_nn_295(F->up, ((rt_int)32LL), f_cur_line_302(F->up));
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->x_2788)).a_);
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_1070) = F->x_2788;
ret_:

  return;
}

static void f_designators_1073(struct f_greenc_1fr *up_, P173 *res_1072) {
  struct f_designators_1073fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1072 = res_1072;
F->head_2789 = NULL;
F->tail_2790 = NULL;
F->n_2791 = NULL;
for (;;) {
f_name_p_353(F->up, &F->n_2791);
f_append_299(F->up, &F->head_2789, &F->tail_2790, F->n_2791);
if ((!f_at_op_306(F->up, rt_g_lit(",", 1)))) {
goto L_end_2792;
}
f_skip_315(F->up);
}
L_end_2792: ;
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_1072) = F->head_2789;
ret_:

  return;
}

static void f_parse_task_statement_1075(struct f_greenc_1fr *up_, P173 *res_1074) {
  struct f_parse_task_statement_1075fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1074 = res_1074;
F->x_2793 = NULL;
F->alt_2794 = NULL;
F->head_2795 = NULL;
F->tail_2796 = NULL;
F->line_2797 = INT64_MIN;
F->line_2797 = f_cur_line_302(F->up);
(*F->res_1074) = NULL;
if (f_at_kw_304(F->up, rt_g_lit("INITIATE", 8))) {
f_skip_315(F->up);
F->x_2793 = f_nn_295(F->up, ((rt_int)33LL), G_NV(F->line_2797));
f_designators_1073(F->up, &(*(P173)rt_nil_check(F->x_2793)).a_);
(*F->res_1074) = F->x_2793;
} else if (f_at_kw_304(F->up, rt_g_lit("ABORT", 5))) {
f_skip_315(F->up);
F->x_2793 = f_nn_295(F->up, ((rt_int)36LL), G_NV(F->line_2797));
f_designators_1073(F->up, &(*(P173)rt_nil_check(F->x_2793)).a_);
(*F->res_1074) = F->x_2793;
} else if (f_at_kw_304(F->up, rt_g_lit("DELAY", 5))) {
f_delay_p_1071(F->up, &(*F->res_1074));
} else if (f_at_kw_304(F->up, rt_g_lit("ACCEPT", 6))) {
f_accept_p_1069(F->up, &(*F->res_1074));
} else if (f_at_kw_304(F->up, rt_g_lit("SELECT", 6))) {
f_skip_315(F->up);
F->x_2793 = f_nn_295(F->up, ((rt_int)35LL), G_NV(F->line_2797));
for (;;) {
F->alt_2794 = f_nn_295(F->up, ((rt_int)64LL), f_cur_line_302(F->up));
if (f_at_kw_304(F->up, rt_g_lit("WHEN", 4))) {
f_skip_315(F->up);
f_expr_332(F->up, &(*(P173)rt_nil_check(F->alt_2794)).a_);
f_expect_op_319(F->up, rt_g_lit("=>", 2));
}
if (f_at_kw_304(F->up, rt_g_lit("ACCEPT", 6))) {
f_accept_p_1069(F->up, &(*(P173)rt_nil_check(F->alt_2794)).b_);
} else if (f_at_kw_304(F->up, rt_g_lit("DELAY", 5))) {
f_delay_p_1071(F->up, &(*(P173)rt_nil_check(F->alt_2794)).b_);
} else {
f_perror_314(F->up, rt_g_lit("a select alternative starts with accept or delay", 48));
}
f_statements_390(F->up, &(*(P173)rt_nil_check(F->alt_2794)).c_);
f_append_299(F->up, &F->head_2795, &F->tail_2796, F->alt_2794);
if ((!f_at_kw_304(F->up, rt_g_lit("OR", 2)))) {
goto L_end_2798;
}
f_skip_315(F->up);
}
L_end_2798: ;
if (f_at_kw_304(F->up, rt_g_lit("ELSE", 4))) {
f_skip_315(F->up);
(*(P173)rt_nil_check(F->x_2793)).flag_ = ((rt_int)1LL);
f_statements_390(F->up, &(*(P173)rt_nil_check(F->x_2793)).b_);
}
f_expect_kw_317(F->up, rt_g_lit("END", 3));
f_expect_kw_317(F->up, rt_g_lit("SELECT", 6));
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*(P173)rt_nil_check(F->x_2793)).a_ = F->head_2795;
(*F->res_1074) = F->x_2793;
}
ret_:

  return;
}

static void f_path_at_1079(struct f_greenc_1fr *up_, rt_int level_1076, rt_gstr field_1077, P139 *r_1078) {
  struct f_path_at_1079fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->level_1076 = level_1076;
F->field_1077 = cp_rt_gstr(field_1077);
F->r_1078 = r_1078;
if ((F->level_1076 <= ((rt_int)0LL))) {
(*F->r_1078) = f_mk_221(F->up, F->field_1077);
goto ret_;
}
(*F->r_1078) = f_mk_221(F->up, rt_g_lit("F", 1));
{ rt_int lo2801 = ((rt_int)1LL), hi2802 = rt_sub(G_NV(F->up->cur_level_138), F->level_1076);
for (rt_int it2803 = lo2801; it2803 <= hi2802; it2803++) {
F->i_2800 = it2803;
(*F->r_1078) = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check((*F->r_1078))), rt_g_lit("->up", 4)));
}
}
L_end_2799: ;
(*F->r_1078) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*F->r_1078))), rt_g_lit("->", 2)), F->field_1077));
ret_:

  return;
}

static int f_is_task_name_1081(struct f_greenc_1fr *up_, rt_gstr n_1080) {
  struct f_is_task_name_1081fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1080 = cp_rt_gstr(n_1080);
F->y_2804 = NULL;
F->y_2804 = f_lookup_409(F->up, F->n_1080);
if ((!(F->y_2804 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P116)rt_nil_check(F->y_2804)).kind_) == ((rt_int)9LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_task_of_1085(struct f_greenc_1fr *up_, P173 e_1082, P116 *y_1083, P173 *ix_1084) {
  struct f_task_of_1085fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1082 = e_1082;
F->y_1083 = y_1083;
F->ix_1084 = ix_1084;
F->n_2805 = NULL;
F->n_2805 = F->e_1082;
(*F->ix_1084) = NULL;
if ((G_NV((*(P173)rt_nil_check(F->e_1082)).kind_) == ((rt_int)8LL))) {
F->n_2805 = (*(P173)rt_nil_check(F->e_1082)).a_;
(*F->ix_1084) = (*(P173)rt_nil_check(F->e_1082)).b_;
}
if ((G_NV((*(P173)rt_nil_check(F->n_2805)).kind_) != ((rt_int)5LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1082)).line_), rt_g_lit("a task name is required", 23));
}
(*F->y_1083) = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->n_2805)).name_)));
if ((((*F->y_1083) == NULL) || (G_NV((*(P116)rt_nil_check((*F->y_1083))).kind_) != ((rt_int)9LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1082)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->n_2805)).name_)), rt_g_lit(" is not a task", 14)));
}
if ((((*F->ix_1084) != NULL) && ((*(P116)rt_nil_check((*F->y_1083))).c_ == NULL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1082)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->n_2805)).name_)), rt_g_lit(" is not a task family", 21)));
}
ret_:

  return;
}

static void f_own_index_1087(struct f_greenc_1fr *up_, P139 *r_1086) {
  struct f_own_index_1087fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_1086 = r_1086;
F->y_2806 = NULL;
F->y_2806 = f_lookup_409(F->up, rt_g_lit("INDEX_", 6));
if ((F->y_2806 == NULL)) {
f_fail_242(F->up, ((rt_int)0LL), rt_g_lit("not inside the body of a task family", 36));
}
f_access_of_710(F->up, F->y_2806, &(*F->r_1086));
ret_:

  return;
}

static void f_member_1092(struct f_greenc_1fr *up_, P116 y_1088, rt_gstr arr_1089, rt_gstr i_1090, P139 *r_1091) {
  struct f_member_1092fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1088 = y_1088;
F->arr_1089 = cp_rt_gstr(arr_1089);
F->i_1090 = cp_rt_gstr(i_1090);
F->r_1091 = r_1091;
F->lo_2807 = NULL;
F->hi_2808 = NULL;
f_path_at_1079(F->up, G_NV((*(P116)rt_nil_check(F->y_1088)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1088)).cname_)), rt_g_lit("lo", 2)), &F->lo_2807);
f_path_at_1079(F->up, G_NV((*(P116)rt_nil_check(F->y_1088)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1088)).cname_)), rt_g_lit("hi", 2)), &F->hi_2808);
(*F->r_1091) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->arr_1089, rt_g_lit("[rt_index(", 10)), F->i_1090), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->lo_2807))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->hi_2808))), rt_g_lit(") - ", 4)), (*(P139)rt_nil_check(F->lo_2807))), one_rt_gstr(93)));
ret_:

  return;
}

static void f_act_path_1095(struct f_greenc_1fr *up_, P116 y_1093, P139 *r_1094) {
  struct f_act_path_1095fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1093 = y_1093;
F->r_1094 = r_1094;
F->i_2809 = NULL;
f_path_at_1079(F->up, G_NV((*(P116)rt_nil_check(F->y_1093)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1093)).cname_)), rt_g_lit("act", 3)), &(*F->r_1094));
if (((*(P116)rt_nil_check(F->y_1093)).c_ != NULL)) {
f_own_index_1087(F->up, &F->i_2809);
f_member_1092(F->up, F->y_1093, (*(P139)rt_nil_check((*F->r_1094))), (*(P139)rt_nil_check(F->i_2809)), &(*F->r_1094));
}
ret_:

  return;
}

static void f_act_path_i_1099(struct f_greenc_1fr *up_, P116 y_1096, rt_gstr i_1097, P139 *r_1098) {
  struct f_act_path_i_1099fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1096 = y_1096;
F->i_1097 = cp_rt_gstr(i_1097);
F->r_1098 = r_1098;
f_path_at_1079(F->up, G_NV((*(P116)rt_nil_check(F->y_1096)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1096)).cname_)), rt_g_lit("act", 3)), &(*F->r_1098));
f_member_1092(F->up, F->y_1096, (*(P139)rt_nil_check((*F->r_1098))), F->i_1097, &(*F->r_1098));
ret_:

  return;
}

static void f_entry_path_1103(struct f_greenc_1fr *up_, P116 y_1100, rt_gstr i_1101, P139 *r_1102) {
  struct f_entry_path_1103fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1100 = y_1100;
F->i_1101 = cp_rt_gstr(i_1101);
F->r_1102 = r_1102;
F->own_2810 = NULL;
f_path_at_1079(F->up, G_NV((*(P116)rt_nil_check(F->y_1100)).level_), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1100)).access_path_)), &(*F->r_1102));
if (((((*(P116)rt_nil_check(F->y_1100)).members_ != NULL) && ((*(P116)rt_nil_check((*(P116)rt_nil_check(F->y_1100)).members_)).c_ != NULL)) && (!G_NV((*(P116)rt_nil_check(F->y_1100)).ro_)))) {
if ((({ rt_gstr at2811 = F->i_1101; at2811.hi >= at2811.lo ? at2811.hi - at2811.lo + 1 : (rt_int)0; }) == ((rt_int)0LL))) {
f_own_index_1087(F->up, &F->own_2810);
f_member_1092(F->up, (*(P116)rt_nil_check(F->y_1100)).members_, (*(P139)rt_nil_check((*F->r_1102))), (*(P139)rt_nil_check(F->own_2810)), &(*F->r_1102));
} else {
f_member_1092(F->up, (*(P116)rt_nil_check(F->y_1100)).members_, (*(P139)rt_nil_check((*F->r_1102))), F->i_1101, &(*F->r_1102));
}
}
ret_:

  return;
}

static void f_declare_slot_1106(struct f_greenc_1fr *up_, rt_gstr ctype_name_1104, rt_gstr field_1105) {
  struct f_declare_slot_1106fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->ctype_name_1104 = cp_rt_gstr(ctype_name_1104);
F->field_1105 = cp_rt_gstr(field_1105);
if (G_NV(F->up->in_func_137)) {
f_put_to_246(F->up, F->up->fields_buf_136, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), F->ctype_name_1104), one_rt_gstr(32)), F->field_1105), one_rt_gstr(59)));
} else {
f_put_to_246(F->up, F->up->out_globals_131, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), F->ctype_name_1104), one_rt_gstr(32)), F->field_1105), one_rt_gstr(59)));
}
ret_:

  return;
}

static void f_task_decl_1108(struct f_greenc_1fr *up_, P173 e_1107) {
  struct f_task_decl_1108fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1107 = e_1107;
if ((G_NV((*(P173)rt_nil_check(F->e_1107)).kind_) == ((rt_int)50LL))) {
f_task_spec_1120(F->up, F->e_1107);
} else if ((G_NV((*(P173)rt_nil_check(F->e_1107)).kind_) == ((rt_int)51LL))) {
f_task_body_1124(F->up, F->e_1107);
} else if ((G_NV((*(P173)rt_nil_check(F->e_1107)).kind_) == ((rt_int)52LL))) {
f_entry_decl_1122(F->up, F->e_1107);
} else {
f_generic_decl_1200(F->up, F->e_1107);
}
ret_:

  return;
}

static void f_family_arg_struct_1109(struct f_greenc_1fr *up_) {
  struct f_family_arg_struct_1109fr *F = rt_alloc(sizeof *F);
F->up = up_;
if ((!G_NV(F->up->famarg_done_198))) {
F->up->famarg_done_198 = 1;
f_put_to_246(F->up, F->up->out_types_127, rt_g_lit("struct rt_famarg { void *up; rt_int i; };", 41));
}
ret_:

  return;
}

static void f_family_bounds_1113(struct f_greenc_1fr *up_, P173 b_1110, P116 y_1111, P139 x_1112) {
  struct f_family_bounds_1113fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_1110 = b_1110;
F->y_1111 = y_1111;
F->x_1112 = x_1112;
F->lo_2812 = NULL;
F->hi_2813 = NULL;
F->v_2814 = NULL;
F->d_2815 = NULL;
F->vt_2816 = NULL;
F->c_2817 = NULL;
(*(P116)rt_nil_check(F->y_1111)).c_ = f_new_cons_455(F->up);
f_declare_slot_1106(F->up, rt_g_lit("rt_entry *", 10), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1111)).access_path_)));
f_declare_slot_1106(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1111)).cname_)), rt_g_lit("flo", 3)));
f_declare_slot_1106(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1111)).cname_)), rt_g_lit("fhi", 3)));
f_path_at_1079(F->up, G_NV((*(P116)rt_nil_check(F->y_1111)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1111)).cname_)), rt_g_lit("flo", 3)), &F->lo_2812);
f_path_at_1079(F->up, G_NV((*(P116)rt_nil_check(F->y_1111)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1111)).cname_)), rt_g_lit("fhi", 3)), &F->hi_2813);
f_discrete_bounds_504(F->up, F->b_1110, NULL, &F->vt_2816, &F->v_2814, &F->d_2815);
(*(P116)rt_nil_check(F->y_1111)).t_ = F->vt_2816;
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->lo_2812)), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->v_2814))), rt_g_lit("; ", 2)), (*(P139)rt_nil_check(F->hi_2813))), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->d_2815))), one_rt_gstr(59)));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->x_1112)), rt_g_lit(" = rt_alloc(sizeof(rt_entry) * (size_t)(", 40)), (*(P139)rt_nil_check(F->hi_2813))), rt_g_lit(" >= ", 4)), (*(P139)rt_nil_check(F->lo_2812))), rt_g_lit(" \? ", 3)), (*(P139)rt_nil_check(F->hi_2813))), rt_g_lit(" - ", 3)), (*(P139)rt_nil_check(F->lo_2812))), rt_g_lit(" + 1 : 1));", 11)));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = 0; k_ <= ", 26), (*(P139)rt_nil_check(F->hi_2813))), rt_g_lit(" - ", 3)), (*(P139)rt_nil_check(F->lo_2812))), rt_g_lit("; k_++) rt_entry_init(&", 23)), (*(P139)rt_nil_check(F->x_1112))), rt_g_lit("[k_]);", 6)));
ret_:

  return;
}

static void f_entry_family_slot_1118(struct f_greenc_1fr *up_, P116 y_1114, rt_gstr base_1115, rt_gstr i_1116, P139 *r_1117) {
  struct f_entry_family_slot_1118fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1114 = y_1114;
F->base_1115 = cp_rt_gstr(base_1115);
F->i_1116 = cp_rt_gstr(i_1116);
F->r_1117 = r_1117;
F->lo_2818 = NULL;
F->hi_2819 = NULL;
f_path_at_1079(F->up, G_NV((*(P116)rt_nil_check(F->y_1114)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1114)).cname_)), rt_g_lit("flo", 3)), &F->lo_2818);
f_path_at_1079(F->up, G_NV((*(P116)rt_nil_check(F->y_1114)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1114)).cname_)), rt_g_lit("fhi", 3)), &F->hi_2819);
(*F->r_1117) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->base_1115, rt_g_lit("[rt_index(", 10)), F->i_1116), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->lo_2818))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->hi_2819))), rt_g_lit(") - ", 4)), (*(P139)rt_nil_check(F->lo_2818))), one_rt_gstr(93)));
ret_:

  return;
}

static void f_task_spec_1120(struct f_greenc_1fr *up_, P173 e_1119) {
  struct f_task_spec_1120fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1119 = e_1119;
F->has_procs_2820 = INT_MIN;
F->has_procs_2820 = 0;
F->saved_defer_2821 = INT_MIN;
F->fields_2822 = NULL;
F->ct_2823 = NULL;
F->pm_2824 = NULL;
F->fp_2825 = NULL;
F->flo_2826 = NULL;
F->fhi_2827 = NULL;
F->y_2828 = NULL;
F->m_2829 = NULL;
F->z_2830 = NULL;
F->saved_2831 = NULL;
F->saved_2831 = F->up->cur_task_196;
F->d_2832 = NULL;
F->v_2833 = NULL;
F->p_2834 = NULL;
F->p2_2835 = NULL;
F->vt_2836 = NULL;
F->r_2837 = NULL;
F->y_2828 = f_new_sym_452(F->up, ((rt_int)9LL), (*(P173)rt_nil_check(F->e_1119)).name_);
f_new_name_224(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("t_", 2), f_lower_s_232(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1119)).name_)))), one_rt_gstr(95)), &(*(P116)rt_nil_check(F->y_2828)).cname_);
(*(P116)rt_nil_check(F->y_2828)).decl_ = F->e_1119;
if (G_NV(F->up->in_func_137)) {
(*(P116)rt_nil_check(F->y_2828)).level_ = G_NV(F->up->cur_level_138);
}
(*(P116)rt_nil_check(F->y_2828)).access_path_ = (*(P116)rt_nil_check(F->y_2828)).cname_;
f_declare_slot_1106(F->up, rt_g_lit("rt_taskdecl", 11), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2828)).cname_)), rt_g_lit("decl", 4)));
if (((*(P173)rt_nil_check(F->e_1119)).a_ != NULL)) {
(*(P116)rt_nil_check(F->y_2828)).c_ = f_new_cons_455(F->up);
f_declare_slot_1106(F->up, rt_g_lit("rt_act *", 8), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2828)).cname_)), rt_g_lit("act", 3)));
f_declare_slot_1106(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2828)).cname_)), rt_g_lit("lo", 2)));
f_declare_slot_1106(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2828)).cname_)), rt_g_lit("hi", 2)));
f_discrete_bounds_504(F->up, (*(P173)rt_nil_check(F->e_1119)).a_, NULL, &F->vt_2836, &F->v_2833, &F->d_2832);
(*(P116)rt_nil_check(F->y_2828)).t_ = F->vt_2836;
f_path_at_1079(F->up, G_NV((*(P116)rt_nil_check(F->y_2828)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2828)).cname_)), rt_g_lit("lo", 2)), &F->p_2834);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->p_2834)), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->v_2833))), one_rt_gstr(59)));
f_path_at_1079(F->up, G_NV((*(P116)rt_nil_check(F->y_2828)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2828)).cname_)), rt_g_lit("hi", 2)), &F->p2_2835);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->p2_2835)), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->d_2832))), one_rt_gstr(59)));
f_path_at_1079(F->up, G_NV((*(P116)rt_nil_check(F->y_2828)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2828)).cname_)), rt_g_lit("act", 3)), &F->v_2833);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->v_2833)), rt_g_lit(" = rt_alloc(sizeof(rt_act) * (size_t)(", 38)), (*(P139)rt_nil_check(F->p2_2835))), rt_g_lit(" >= ", 4)), (*(P139)rt_nil_check(F->p_2834))), rt_g_lit(" \? ", 3)), (*(P139)rt_nil_check(F->p2_2835))), rt_g_lit(" - ", 3)), (*(P139)rt_nil_check(F->p_2834))), rt_g_lit(" + 1 : 1));", 11)));
f_family_arg_struct_1109(F->up);
} else {
f_declare_slot_1106(F->up, rt_g_lit("rt_act", 6), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2828)).cname_)), rt_g_lit("act", 3)));
}
f_put_to_246(F->up, F->up->out_protos_130, cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2828)).cname_))), rt_g_lit("run(void *a);", 13)));
if ((!G_NV(F->up->in_func_137))) {
f_put_to_246(F->up, F->up->out_awaits_203, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  rt_await_decl(&", 17), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2828)).cname_))), rt_g_lit("decl);", 6)));
}
f_open_scope_448(F->up);
F->up->cur_task_196 = F->y_2828;
F->saved_defer_2821 = G_NV(F->up->defer_entry_structs_202);
F->up->defer_entry_structs_202 = 1;
f_decl_elements_631(F->up, (*(P173)rt_nil_check(F->e_1119)).c_);
f_decl_elements_631(F->up, (*(P173)rt_nil_check(F->e_1119)).d_);
F->up->defer_entry_structs_202 = G_NV(F->saved_defer_2821);
F->m_2829 = F->up->scope_stack_120;
while (((F->m_2829 != NULL) && (G_NV((*(P116)rt_nil_check(F->m_2829)).depth_) == G_NV(F->up->depth_119)))) {
if (((G_NV((*(P116)rt_nil_check(F->m_2829)).kind_) == ((rt_int)10LL)) && (!G_NV((*(P116)rt_nil_check(F->m_2829)).from_use_)))) {
F->fields_2822 = f_mk_221(F->up, rt_g_lit(" int dummy_;", 12));
F->pm_2824 = (*(P116)rt_nil_check(F->m_2829)).params_;
while ((F->pm_2824 != NULL)) {
f_ctype_474(F->up, (*(P1752)rt_nil_check(F->pm_2824)).t_, &F->ct_2823);
if ((G_NV((*(P1752)rt_nil_check(F->pm_2824)).mode_) == ((rt_int)1LL))) {
F->fields_2822 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->fields_2822)), one_rt_gstr(32)), (*(P139)rt_nil_check(F->ct_2823))), one_rt_gstr(32)), (*(P139)rt_nil_check((*(P1752)rt_nil_check(F->pm_2824)).cfield_))), one_rt_gstr(59)));
} else {
F->fields_2822 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->fields_2822)), one_rt_gstr(32)), (*(P139)rt_nil_check(F->ct_2823))), rt_g_lit(" *", 2)), (*(P139)rt_nil_check((*(P1752)rt_nil_check(F->pm_2824)).cfield_))), one_rt_gstr(59)));
}
F->pm_2824 = (*(P1752)rt_nil_check(F->pm_2824)).next_;
}
L_end_2839: ;
f_put_to_246(F->up, F->up->out_types_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->m_2829)).cname_))), rt_g_lit("p {", 3)), (*(P139)rt_nil_check(F->fields_2822))), rt_g_lit(" };", 3)));
}
F->m_2829 = (*(P116)rt_nil_check(F->m_2829)).stack_;
}
L_end_2838: ;
F->m_2829 = F->up->scope_stack_120;
while (((F->m_2829 != NULL) && (G_NV((*(P116)rt_nil_check(F->m_2829)).depth_) == G_NV(F->up->depth_119)))) {
if ((((G_NV((*(P116)rt_nil_check(F->m_2829)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->m_2829)).kind_) == ((rt_int)4LL))) && (!G_NV((*(P116)rt_nil_check(F->m_2829)).from_use_)))) {
if (((!G_NV(F->has_procs_2820)) && ((*(P116)rt_nil_check(F->y_2828)).c_ != NULL))) {
f_declare_slot_1106(F->up, rt_g_lit("void **", 7), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2828)).cname_)), rt_g_lit("frames", 6)));
f_path_at_1079(F->up, G_NV((*(P116)rt_nil_check(F->y_2828)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2828)).cname_)), rt_g_lit("frames", 6)), &F->fp_2825);
f_path_at_1079(F->up, G_NV((*(P116)rt_nil_check(F->y_2828)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2828)).cname_)), rt_g_lit("lo", 2)), &F->flo_2826);
f_path_at_1079(F->up, G_NV((*(P116)rt_nil_check(F->y_2828)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2828)).cname_)), rt_g_lit("hi", 2)), &F->fhi_2827);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->fp_2825)), rt_g_lit(" = rt_alloc(sizeof(void *) * (size_t)(", 38)), (*(P139)rt_nil_check(F->fhi_2827))), rt_g_lit(" >= ", 4)), (*(P139)rt_nil_check(F->flo_2826))), rt_g_lit(" \? ", 3)), (*(P139)rt_nil_check(F->fhi_2827))), rt_g_lit(" - ", 3)), (*(P139)rt_nil_check(F->flo_2826))), rt_g_lit(" + 1 : 1));", 11)));
F->has_procs_2820 = 1;
} else if ((!G_NV(F->has_procs_2820))) {
f_declare_slot_1106(F->up, rt_g_lit("void *", 6), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2828)).cname_)), rt_g_lit("frame", 5)));
f_path_at_1079(F->up, G_NV((*(P116)rt_nil_check(F->y_2828)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2828)).cname_)), rt_g_lit("frame", 5)), &F->fp_2825);
f_emit_248(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->fp_2825)), rt_g_lit(" = NULL;", 8)));
F->has_procs_2820 = 1;
}
if (((*(P116)rt_nil_check(F->y_2828)).c_ != NULL)) {
(*(P116)rt_nil_check(F->m_2829)).access_path_ = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2828)).cname_)), rt_g_lit("frames", 6)));
} else {
(*(P116)rt_nil_check(F->m_2829)).access_path_ = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2828)).cname_)), rt_g_lit("frame", 5)));
}
(*(P116)rt_nil_check(F->m_2829)).members_ = F->y_2828;
}
f_copy_sym_1021(F->up, F->m_2829, &F->z_2830);
(*(P116)rt_nil_check(F->z_2830)).hidden_ = G_NV((*(P116)rt_nil_check(F->m_2829)).from_use_);
(*(P116)rt_nil_check(F->z_2830)).mnext_ = (*(P116)rt_nil_check(F->y_2828)).members_;
(*(P116)rt_nil_check(F->y_2828)).members_ = F->z_2830;
F->m_2829 = (*(P116)rt_nil_check(F->m_2829)).stack_;
}
L_end_2840: ;
f_close_scope_449(F->up);
F->up->cur_task_196 = F->saved_2831;
f_define_447(F->up, F->y_2828, G_NV((*(P173)rt_nil_check(F->e_1119)).line_));
ret_:

  return;
}

static void f_entry_decl_1122(struct f_greenc_1fr *up_, P173 e_1121) {
  struct f_entry_decl_1122fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1121 = e_1121;
F->y_2841 = NULL;
F->p_2842 = NULL;
F->p_2842 = (*(P173)rt_nil_check(F->e_1121)).a_;
F->pm_2843 = NULL;
F->tail_2844 = NULL;
F->fields_2845 = NULL;
F->ct_2846 = NULL;
F->x_2847 = NULL;
F->lo_2848 = NULL;
F->hi_2849 = NULL;
if ((F->up->cur_task_196 == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1121)).line_), rt_g_lit("an entry is declared in a task (RM79 9.5)", 41));
}
F->y_2841 = f_new_sym_452(F->up, ((rt_int)10LL), (*(P173)rt_nil_check(F->e_1121)).name_);
f_new_name_224(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("e_", 2), f_lower_s_232(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1121)).name_)))), one_rt_gstr(95)), &(*(P116)rt_nil_check(F->y_2841)).cname_);
F->fields_2845 = f_mk_221(F->up, rt_g_lit(" int dummy_;", 12));
while ((F->p_2842 != NULL)) {
F->pm_2843 = ({ R1753 *cell2851 = rt_alloc(sizeof(R1753)); *cell2851 = cp_R1753(({ R1753 ag2852; ag2852.name_ = (*(P173)rt_nil_check(F->p_2842)).name_; ag2852.mode_ = G_NV((*(P173)rt_nil_check(F->p_2842)).ival_); ag2852.t_ = NULL; ag2852.c_ = NULL; ag2852.cfield_ = NULL; ag2852.dflt_ = NULL; ag2852.next_ = NULL; ag2852; })); (P1752)cell2851; });
f_resolve_490(F->up, (*(P173)rt_nil_check(F->p_2842)).a_, &(*(P1752)rt_nil_check(F->pm_2843)).t_, &(*(P1752)rt_nil_check(F->pm_2843)).c_);
(*(P1752)rt_nil_check(F->pm_2843)).cfield_ = f_mk_221(F->up, f_c_field_238(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->p_2842)).name_))));
f_ctype_474(F->up, (*(P1752)rt_nil_check(F->pm_2843)).t_, &F->ct_2846);
if ((G_NV((*(P1752)rt_nil_check(F->pm_2843)).mode_) == ((rt_int)1LL))) {
F->fields_2845 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->fields_2845)), one_rt_gstr(32)), (*(P139)rt_nil_check(F->ct_2846))), one_rt_gstr(32)), (*(P139)rt_nil_check((*(P1752)rt_nil_check(F->pm_2843)).cfield_))), one_rt_gstr(59)));
} else {
F->fields_2845 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->fields_2845)), one_rt_gstr(32)), (*(P139)rt_nil_check(F->ct_2846))), rt_g_lit(" *", 2)), (*(P139)rt_nil_check((*(P1752)rt_nil_check(F->pm_2843)).cfield_))), one_rt_gstr(59)));
}
if ((F->tail_2844 == NULL)) {
(*(P116)rt_nil_check(F->y_2841)).params_ = F->pm_2843;
} else {
(*(P1752)rt_nil_check(F->tail_2844)).next_ = F->pm_2843;
}
F->tail_2844 = F->pm_2843;
F->p_2842 = (*(P173)rt_nil_check(F->p_2842)).next_;
}
L_end_2850: ;
if ((!G_NV(F->up->defer_entry_structs_202))) {
f_put_to_246(F->up, F->up->out_types_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2841)).cname_))), rt_g_lit("p {", 3)), (*(P139)rt_nil_check(F->fields_2845))), rt_g_lit(" };", 3)));
}
(*(P116)rt_nil_check(F->y_2841)).result_ = F->up->ty_void_160;
(*(P116)rt_nil_check(F->y_2841)).decl_ = F->e_1121;
(*(P116)rt_nil_check(F->y_2841)).members_ = F->up->cur_task_196;
if (G_NV(F->up->in_func_137)) {
(*(P116)rt_nil_check(F->y_2841)).level_ = G_NV(F->up->cur_level_138);
}
(*(P116)rt_nil_check(F->y_2841)).access_path_ = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2841)).cname_)), rt_g_lit("ent", 3)));
f_path_at_1079(F->up, G_NV((*(P116)rt_nil_check(F->y_2841)).level_), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2841)).access_path_)), &F->x_2847);
(*(P116)rt_nil_check(F->y_2841)).ro_ = ((((*(P116)rt_nil_check(F->up->cur_task_196)).c_ != NULL) && G_NV(F->up->in_func_137)) && (G_NV(F->up->cur_level_138) > G_NV((*(P116)rt_nil_check(F->up->cur_task_196)).level_)));
if (((*(P173)rt_nil_check(F->e_1121)).b_ != NULL)) {
if ((((*(P116)rt_nil_check(F->up->cur_task_196)).c_ != NULL) && (!G_NV((*(P116)rt_nil_check(F->y_2841)).ro_)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1121)).line_), rt_g_lit("an entry family in a task family is not handled", 47));
}
f_family_bounds_1113(F->up, (*(P173)rt_nil_check(F->e_1121)).b_, F->y_2841, F->x_2847);
} else if ((((*(P116)rt_nil_check(F->up->cur_task_196)).c_ != NULL) && (!G_NV((*(P116)rt_nil_check(F->y_2841)).ro_)))) {
f_declare_slot_1106(F->up, rt_g_lit("rt_entry *", 10), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2841)).access_path_)));
f_path_at_1079(F->up, G_NV((*(P116)rt_nil_check(F->up->cur_task_196)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->up->cur_task_196)).cname_)), rt_g_lit("lo", 2)), &F->lo_2848);
f_path_at_1079(F->up, G_NV((*(P116)rt_nil_check(F->up->cur_task_196)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->up->cur_task_196)).cname_)), rt_g_lit("hi", 2)), &F->hi_2849);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->x_2847)), rt_g_lit(" = rt_alloc(sizeof(rt_entry) * (size_t)(", 40)), (*(P139)rt_nil_check(F->hi_2849))), rt_g_lit(" >= ", 4)), (*(P139)rt_nil_check(F->lo_2848))), rt_g_lit(" \? ", 3)), (*(P139)rt_nil_check(F->hi_2849))), rt_g_lit(" - ", 3)), (*(P139)rt_nil_check(F->lo_2848))), rt_g_lit(" + 1 : 1));", 11)));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = 0; k_ <= ", 26), (*(P139)rt_nil_check(F->hi_2849))), rt_g_lit(" - ", 3)), (*(P139)rt_nil_check(F->lo_2848))), rt_g_lit("; k_++) rt_entry_init(&", 23)), (*(P139)rt_nil_check(F->x_2847))), rt_g_lit("[k_]);", 6)));
} else {
f_declare_slot_1106(F->up, rt_g_lit("rt_entry", 8), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2841)).access_path_)));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_entry_init(&", 15), (*(P139)rt_nil_check(F->x_2847))), rt_g_lit(");", 2)));
}
f_define_447(F->up, F->y_2841, G_NV((*(P173)rt_nil_check(F->e_1121)).line_));
ret_:

  return;
}

static void f_task_body_1124(struct f_greenc_1fr *up_, P173 e_1123) {
  struct f_task_body_1124fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1123 = e_1123;
F->y_2853 = NULL;
F->y_2853 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1123)).name_)));
F->b_2854 = NULL;
F->m_2855 = NULL;
F->z_2856 = NULL;
F->upp_2857 = NULL;
F->saved_2858 = NULL;
F->saved_2858 = F->up->cur_task_196;
if (((F->y_2853 != NULL) && (G_NV((*(P116)rt_nil_check(F->y_2853)).kind_) == ((rt_int)11LL)))) {
f_attach_generic_body_1204(F->up, F->e_1123);
goto ret_;
}
if (((F->y_2853 == NULL) || (G_NV((*(P116)rt_nil_check(F->y_2853)).kind_) != ((rt_int)9LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1123)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("task body ", 10), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1123)).name_))), rt_g_lit(" has no task specification", 26)));
}
F->b_2854 = f_new_sym_452(F->up, ((rt_int)4LL), (*(P173)rt_nil_check(F->e_1123)).name_);
(*(P116)rt_nil_check(F->b_2854)).cname_ = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2853)).cname_)), rt_g_lit("body", 4)));
(*(P116)rt_nil_check(F->b_2854)).result_ = F->up->ty_void_160;
(*(P116)rt_nil_check(F->b_2854)).level_ = G_NV(F->up->cur_level_138);
(*(P116)rt_nil_check(F->b_2854)).decl_ = F->e_1123;
if (((*(P116)rt_nil_check(F->y_2853)).c_ != NULL)) {
(*(P116)rt_nil_check(F->b_2854)).params_ = ({ R1753 *cell2859 = rt_alloc(sizeof(R1753)); *cell2859 = cp_R1753(({ R1753 ag2860; ag2860.name_ = f_mk_221(F->up, rt_g_lit("INDEX_", 6)); ag2860.mode_ = ((rt_int)1LL); ag2860.t_ = F->up->ty_int_155; ag2860.c_ = NULL; ag2860.cfield_ = f_mk_221(F->up, rt_g_lit("index_", 6)); ag2860.dflt_ = NULL; ag2860.next_ = NULL; ag2860; })); (P1752)cell2859; });
}
f_open_scope_448(F->up);
F->m_2855 = (*(P116)rt_nil_check(F->y_2853)).members_;
while ((F->m_2855 != NULL)) {
f_copy_sym_1021(F->up, F->m_2855, &F->z_2856);
f_define_447(F->up, F->z_2856, G_NV((*(P173)rt_nil_check(F->e_1123)).line_));
if (((((G_NV((*(P116)rt_nil_check(F->m_2855)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->m_2855)).kind_) == ((rt_int)4LL))) && ((*(P116)rt_nil_check(F->m_2855)).access_path_ != NULL)) && f_same_task_412(F->up, (*(P116)rt_nil_check(F->m_2855)).members_, F->y_2853))) {
if ((G_NV((*(P116)rt_nil_check(F->y_2853)).level_) > ((rt_int)0LL))) {
F->upp_2857 = f_mk_221(F->up, rt_g_lit("up_->", 5));
} else {
F->upp_2857 = f_mk_221(F->up, rt_g_lit("", 0));
}
if (((*(P116)rt_nil_check(F->y_2853)).c_ != NULL)) {
(*(P116)rt_nil_check(F->b_2854)).access_path_ = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->upp_2857)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->m_2855)).access_path_))), rt_g_lit("[index_ - ", 10)), (*(P139)rt_nil_check(F->upp_2857))), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2853)).cname_))), rt_g_lit("lo] = F;", 8)));
} else {
(*(P116)rt_nil_check(F->b_2854)).access_path_ = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->upp_2857)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->m_2855)).access_path_))), rt_g_lit(" = F;", 5)));
}
}
F->m_2855 = (*(P116)rt_nil_check(F->m_2855)).mnext_;
}
L_end_2861: ;
F->up->cur_task_196 = F->y_2853;
f_subprogram_body_661(F->up, F->e_1123, F->b_2854);
F->up->cur_task_196 = F->saved_2858;
f_close_scope_449(F->up);
if ((((*(P116)rt_nil_check(F->y_2853)).c_ != NULL) && (G_NV((*(P116)rt_nil_check(F->b_2854)).level_) > ((rt_int)0LL)))) {
f_put_to_246(F->up, F->up->out_funcs_132, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2853)).cname_))), rt_g_lit("run(void *a) { struct rt_famarg *g = a; ", 40)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->b_2854)).cname_))), rt_g_lit("(g->up, g->i); }", 16)));
} else if (((*(P116)rt_nil_check(F->y_2853)).c_ != NULL)) {
f_put_to_246(F->up, F->up->out_funcs_132, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2853)).cname_))), rt_g_lit("run(void *a) { struct rt_famarg *g = a; ", 40)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->b_2854)).cname_))), rt_g_lit("(g->i); }", 9)));
} else if ((G_NV((*(P116)rt_nil_check(F->b_2854)).level_) > ((rt_int)0LL))) {
f_put_to_246(F->up, F->up->out_funcs_132, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2853)).cname_))), rt_g_lit("run(void *a) { ", 15)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->b_2854)).cname_))), rt_g_lit("(a); }", 6)));
} else {
f_put_to_246(F->up, F->up->out_funcs_132, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2853)).cname_))), rt_g_lit("run(void *a) { (void)a; ", 24)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->b_2854)).cname_))), rt_g_lit("(); }", 5)));
}
ret_:

  return;
}

static void f_task_awaits_1127(struct f_greenc_1fr *up_, P173 decls_1125, P139 *aw_1126) {
  struct f_task_awaits_1127fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_1125 = decls_1125;
F->aw_1126 = aw_1126;
F->e_2862 = NULL;
F->e_2862 = F->decls_1125;
F->y_2863 = NULL;
F->p_2864 = NULL;
(*F->aw_1126) = f_mk_221(F->up, rt_g_lit("", 0));
while ((F->e_2862 != NULL)) {
if (((G_NV((*(P173)rt_nil_check(F->e_2862)).kind_) == ((rt_int)50LL)) || ((G_NV((*(P173)rt_nil_check(F->e_2862)).kind_) == ((rt_int)53LL)) && (G_NV((*(P173)rt_nil_check(F->e_2862)).ival_) == ((rt_int)50LL))))) {
F->y_2863 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_2862)).name_)));
f_path_at_1079(F->up, G_NV((*(P116)rt_nil_check(F->y_2863)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2863)).cname_)), rt_g_lit("decl", 4)), &F->p_2864);
(*F->aw_1126) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*F->aw_1126))), rt_g_lit(" rt_await_decl(&", 16)), (*(P139)rt_nil_check(F->p_2864))), rt_g_lit(");", 2)));
}
F->e_2862 = (*(P173)rt_nil_check(F->e_2862)).next_;
}
L_end_2865: ;
ret_:

  return;
}

static void f_task_failure_1129(struct f_greenc_1fr *up_, P173 s_1128) {
  struct f_task_failure_1129fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1128 = s_1128;
F->y_2866 = NULL;
F->y_2866 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->s_1128)).tag_)));
F->a_2867 = NULL;
F->i_2868 = NULL;
F->it_2869 = NULL;
if (((*(P173)rt_nil_check(F->s_1128)).a_ != NULL)) {
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->s_1128)).a_, (*(P116)rt_nil_check(F->y_2866)).t_, &F->it_2869, &F->i_2868);
f_act_path_i_1099(F->up, F->y_2866, (*(P139)rt_nil_check(F->i_2868)), &F->a_2867);
} else {
f_act_path_1095(F->up, F->y_2866, &F->a_2867);
}
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_exterminate(&", 16), (*(P139)rt_nil_check(F->a_2867))), rt_g_lit(");", 2)));
ret_:

  return;
}

static void f_entry_sym_1133(struct f_greenc_1fr *up_, P173 e_1130, P116 *y_1131, P173 *ix_1132) {
  struct f_entry_sym_1133fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1130 = e_1130;
F->y_1131 = y_1131;
F->ix_1132 = ix_1132;
F->t_2870 = NULL;
(*F->ix_1132) = NULL;
F->up->fam_ix_199 = NULL;
if ((G_NV((*(P173)rt_nil_check(F->e_1130)).kind_) == ((rt_int)8LL))) {
f_entry_sym_1133(F->up, (*(P173)rt_nil_check(F->e_1130)).a_, &(*F->y_1131), &(*F->ix_1132));
if (((*(P116)rt_nil_check((*F->y_1131))).c_ == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1130)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check((*F->y_1131))).name_)), rt_g_lit(" is not an entry family", 23)));
}
F->up->fam_ix_199 = (*(P173)rt_nil_check(F->e_1130)).b_;
goto ret_;
}
if ((((G_NV((*(P173)rt_nil_check(F->e_1130)).kind_) == ((rt_int)9LL)) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_1130)).a_)).kind_) == ((rt_int)8LL))) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_1130)).a_)).a_)).kind_) == ((rt_int)5LL)))) {
F->t_2870 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_1130)).a_)).a_)).name_)));
if ((((F->t_2870 == NULL) || (G_NV((*(P116)rt_nil_check(F->t_2870)).kind_) != ((rt_int)9LL))) || ((*(P116)rt_nil_check(F->t_2870)).c_ == NULL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1130)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_1130)).a_)).a_)).name_)), rt_g_lit(" is not a task family", 21)));
}
(*F->y_1131) = f_member_of_1016(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_1130)).a_)).a_)).name_)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1130)).name_)), G_NV((*(P173)rt_nil_check(F->e_1130)).line_));
(*F->ix_1132) = (*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_1130)).a_)).b_;
if ((((*F->y_1131) == NULL) || (G_NV((*(P116)rt_nil_check((*F->y_1131))).kind_) != ((rt_int)10LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1130)).line_), rt_g_lit("not an entry", 12));
}
goto ret_;
}
if ((G_NV((*(P173)rt_nil_check(F->e_1130)).kind_) == ((rt_int)5LL))) {
(*F->y_1131) = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1130)).name_)));
if (((*(P173)rt_nil_check(F->e_1130)).tag_ != NULL)) {
(*F->y_1131) = f_member_of_1016(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1130)).tag_)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1130)).name_)), G_NV((*(P173)rt_nil_check(F->e_1130)).line_));
}
} else if (((G_NV((*(P173)rt_nil_check(F->e_1130)).kind_) == ((rt_int)9LL)) && f_is_package_1012(F->up, (*(P173)rt_nil_check(F->e_1130)).a_))) {
(*F->y_1131) = f_member_of_1016(F->up, f_path_of_338(F->up, (*(P173)rt_nil_check(F->e_1130)).a_), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1130)).name_)), G_NV((*(P173)rt_nil_check(F->e_1130)).line_));
} else {
(*F->y_1131) = NULL;
}
if ((((*F->y_1131) == NULL) || (G_NV((*(P116)rt_nil_check((*F->y_1131))).kind_) != ((rt_int)10LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1130)).line_), rt_g_lit("not an entry", 12));
}
ret_:

  return;
}

static void f_other_call_1138(struct f_greenc_1fr *up_, P173 e_1134, int is_stmt_1135, P121 *t_1136, P139 *r_1137) {
  struct f_other_call_1138fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1134 = e_1134;
F->is_stmt_1135 = is_stmt_1135;
F->t_1136 = t_1136;
F->r_1137 = r_1137;
F->y_2871 = NULL;
F->pm_2872 = NULL;
F->a_2873 = NULL;
F->parts_2874 = NULL;
F->v_2875 = NULL;
F->lv_2876 = NULL;
F->ent_2877 = NULL;
F->act_2878 = NULL;
F->i_2879 = NULL;
F->vt_2880 = NULL;
F->lt_2881 = NULL;
F->lc_2882 = NULL;
F->ro_2883 = INT_MIN;
F->ix_2884 = NULL;
F->fix_2885 = NULL;
F->args_node_2886 = NULL;
f_entry_sym_1133(F->up, (*(P173)rt_nil_check(F->e_1134)).a_, &F->y_2871, &F->ix_2884);
F->fix_2885 = F->up->fam_ix_199;
F->args_node_2886 = (*(P173)rt_nil_check(F->e_1134)).b_;
if ((((*(P116)rt_nil_check(F->y_2871)).c_ != NULL) && (F->fix_2885 == NULL))) {
F->fix_2885 = (*(P173)rt_nil_check(F->e_1134)).b_;
F->args_node_2886 = NULL;
}
F->i_2879 = f_mk_221(F->up, rt_g_lit("", 0));
if ((F->ix_2884 != NULL)) {
f_gexpr_773(F->up, F->ix_2884, F->up->ty_int_155, &F->vt_2880, &F->i_2879);
} else if (((((*(P116)rt_nil_check(F->y_2871)).members_ != NULL) && ((*(P116)rt_nil_check((*(P116)rt_nil_check(F->y_2871)).members_)).c_ != NULL)) && ((*(P116)rt_nil_check(F->y_2871)).members_ != F->up->cur_task_196))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1134)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("a member of family ", 19), (*(P139)rt_nil_check((*(P116)rt_nil_check((*(P116)rt_nil_check(F->y_2871)).members_)).name_))), rt_g_lit(" must be named: F(I).", 21)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2871)).name_))));
}
if ((!F->is_stmt_1135)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1134)).line_), rt_g_lit("an entry call is a statement", 28));
}
if ((F->up->pure_sym_210 != NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1134)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->up->pure_sym_210)).name_))), rt_g_lit(" may not call an entry (RM79 6.5)", 33)));
}
f_entry_path_1103(F->up, F->y_2871, (*(P139)rt_nil_check(F->i_2879)), &F->ent_2877);
if (((*(P116)rt_nil_check(F->y_2871)).c_ != NULL)) {
if ((F->fix_2885 == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1134)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2871)).name_)), rt_g_lit(" is an entry family: name a member, ", 36)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2871)).name_))), rt_g_lit("(I)", 3)));
}
f_gexpr_773(F->up, F->fix_2885, NULL, &F->vt_2880, &F->v_2875);
f_entry_family_slot_1118(F->up, F->y_2871, (*(P139)rt_nil_check(F->ent_2877)), (*(P139)rt_nil_check(F->v_2875)), &F->ent_2877);
}
F->parts_2874 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ struct ", 10), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2871)).cname_))), rt_g_lit("p p_;", 5)));
F->pm_2872 = (*(P116)rt_nil_check(F->y_2871)).params_;
while ((F->pm_2872 != NULL)) {
F->a_2873 = f_actual_for_971(F->up, F->args_node_2886, F->pm_2872, (*(P116)rt_nil_check(F->y_2871)).params_);
if ((F->a_2873 == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1134)).line_), cat_rt_gstr(rt_g_lit("no actual parameter for ", 24), (*(P139)rt_nil_check((*(P1752)rt_nil_check(F->pm_2872)).name_))));
}
if ((G_NV((*(P1752)rt_nil_check(F->pm_2872)).mode_) == ((rt_int)1LL))) {
f_gexpr_773(F->up, F->a_2873, (*(P1752)rt_nil_check(F->pm_2872)).t_, &F->vt_2880, &F->v_2875);
f_check_type_469(F->up, F->vt_2880, (*(P1752)rt_nil_check(F->pm_2872)).t_, G_NV((*(P173)rt_nil_check(F->e_1134)).line_));
F->parts_2874 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->parts_2874)), rt_g_lit(" p_.", 4)), (*(P139)rt_nil_check((*(P1752)rt_nil_check(F->pm_2872)).cfield_))), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->v_2875))), one_rt_gstr(59)));
} else {
f_lvalue_729(F->up, F->a_2873, &F->lv_2876, &F->lt_2881, &F->lc_2882, &F->ro_2883);
 (void)rt_range(F->ro_2883, 0, 1);
if (G_NV(F->ro_2883)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1134)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P1752)rt_nil_check(F->pm_2872)).name_)), rt_g_lit(" needs a variable", 17)));
}
f_check_type_469(F->up, F->lt_2881, (*(P1752)rt_nil_check(F->pm_2872)).t_, G_NV((*(P173)rt_nil_check(F->e_1134)).line_));
F->parts_2874 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->parts_2874)), rt_g_lit(" p_.", 4)), (*(P139)rt_nil_check((*(P1752)rt_nil_check(F->pm_2872)).cfield_))), rt_g_lit(" = &", 4)), (*(P139)rt_nil_check(F->lv_2876))), one_rt_gstr(59)));
}
F->pm_2872 = (*(P1752)rt_nil_check(F->pm_2872)).next_;
}
L_end_2887: ;
if ((((*(P116)rt_nil_check(F->y_2871)).members_ != NULL) && ((*(P116)rt_nil_check(F->y_2871)).members_ != F->up->cur_task_196))) {
if ((F->ix_2884 != NULL)) {
f_act_path_i_1099(F->up, (*(P116)rt_nil_check(F->y_2871)).members_, (*(P139)rt_nil_check(F->i_2879)), &F->act_2878);
} else {
f_act_path_1095(F->up, (*(P116)rt_nil_check(F->y_2871)).members_, &F->act_2878);
}
F->parts_2874 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->parts_2874)), rt_g_lit(" if (!rt_is_active(&", 20)), (*(P139)rt_nil_check(F->act_2878))), rt_g_lit(")) rt_raise(RT_X_TASKING);", 26)));
}
(*F->t_1136) = F->up->ty_void_160;
(*F->r_1137) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->parts_2874)), rt_g_lit(" rt_entry_call(&", 16)), (*(P139)rt_nil_check(F->ent_2877))), rt_g_lit(", &p_); })", 10)));
ret_:

  return;
}

static void f_other_attr_1143(struct f_greenc_1fr *up_, P173 e_1139, P116 y_1140, P121 *t_1141, P139 *r_1142) {
  struct f_other_attr_1143fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1139 = e_1139;
F->y_1140 = y_1140;
F->t_1141 = t_1141;
F->r_1142 = r_1142;
F->a_2888 = cp_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1139)).name_)));
F->p_2889 = NULL;
if (((G_NV((*(P116)rt_nil_check(F->y_1140)).kind_) == ((rt_int)9LL)) && eq_rt_gstr(F->a_2888, rt_g_lit("INDEX", 5)))) {
if (((*(P116)rt_nil_check(F->y_1140)).c_ == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1139)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1140)).name_)), rt_g_lit(" is not a task family", 21)));
}
f_own_index_1087(F->up, &F->p_2889);
(*F->t_1141) = F->up->ty_int_155;
if (((*(P116)rt_nil_check(F->y_1140)).t_ != NULL)) {
(*F->t_1141) = (*(P116)rt_nil_check(F->y_1140)).t_;
}
(*F->r_1142) = F->p_2889;
} else if (((G_NV((*(P116)rt_nil_check(F->y_1140)).kind_) == ((rt_int)9LL)) && eq_rt_gstr(F->a_2888, rt_g_lit("ACTIVE", 6)))) {
f_act_path_1095(F->up, F->y_1140, &F->p_2889);
(*F->t_1141) = F->up->ty_bool_156;
(*F->r_1142) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_is_active(&", 14), (*(P139)rt_nil_check(F->p_2889))), one_rt_gstr(41)));
} else if (((G_NV((*(P116)rt_nil_check(F->y_1140)).kind_) == ((rt_int)9LL)) && eq_rt_gstr(F->a_2888, rt_g_lit("PRIORITY", 8)))) {
f_act_path_1095(F->up, F->y_1140, &F->p_2889);
(*F->t_1141) = F->up->ty_int_155;
(*F->r_1142) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_priority(&", 13), (*(P139)rt_nil_check(F->p_2889))), one_rt_gstr(41)));
} else if (((G_NV((*(P116)rt_nil_check(F->y_1140)).kind_) == ((rt_int)10LL)) && eq_rt_gstr(F->a_2888, rt_g_lit("COUNT", 5)))) {
if (((*(P116)rt_nil_check(F->y_1140)).members_ != F->up->cur_task_196)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1139)).line_), rt_g_lit("E'COUNT is allowed only in the body of the task (RM79 9.9)", 58));
}
f_entry_path_1103(F->up, F->y_1140, rt_g_lit("", 0), &F->p_2889);
(*F->t_1141) = F->up->ty_int_155;
(*F->r_1142) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_entry_count(&", 16), (*(P139)rt_nil_check(F->p_2889))), one_rt_gstr(41)));
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1139)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), F->a_2888), rt_g_lit(" is not handled here", 20)));
(*F->t_1141) = F->up->ty_int_155;
(*F->r_1142) = NULL;
}
ret_:

  return;
}

static void f_member_attr_1147(struct f_greenc_1fr *up_, P173 e_1144, P121 *t_1145, P139 *r_1146) {
  struct f_member_attr_1147fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1144 = e_1144;
F->t_1145 = t_1145;
F->r_1146 = r_1146;
F->y_2890 = NULL;
F->ix_2891 = NULL;
F->i_2892 = NULL;
F->p_2893 = NULL;
F->vt_2894 = NULL;
f_task_of_1085(F->up, (*(P173)rt_nil_check(F->e_1144)).a_, &F->y_2890, &F->ix_2891);
f_gexpr_773(F->up, F->ix_2891, F->up->ty_int_155, &F->vt_2894, &F->i_2892);
f_act_path_i_1099(F->up, F->y_2890, (*(P139)rt_nil_check(F->i_2892)), &F->p_2893);
if (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1144)).name_)), rt_g_lit("ACTIVE", 6))) {
(*F->t_1145) = F->up->ty_bool_156;
(*F->r_1146) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_is_active(&", 14), (*(P139)rt_nil_check(F->p_2893))), one_rt_gstr(41)));
} else if (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1144)).name_)), rt_g_lit("PRIORITY", 8))) {
(*F->t_1145) = F->up->ty_int_155;
(*F->r_1146) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_priority(&", 13), (*(P139)rt_nil_check(F->p_2893))), one_rt_gstr(41)));
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1144)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1144)).name_))), rt_g_lit(" is not handled for a family member", 35)));
(*F->t_1145) = F->up->ty_int_155;
(*F->r_1146) = NULL;
}
ret_:

  return;
}

static void f_task_builtin_1153(struct f_greenc_1fr *up_, rt_gstr name_1148, P173 args_1149, rt_int line_1150, P121 *t_1151, P139 *r_1152) {
  struct f_task_builtin_1153fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1148 = cp_rt_gstr(name_1148);
F->args_1149 = args_1149;
F->line_1150 = line_1150;
F->t_1151 = t_1151;
F->r_1152 = r_1152;
F->vt_2895 = NULL;
F->v_2896 = NULL;
(*F->t_1151) = F->up->ty_void_160;
if (eq_rt_gstr(F->name_1148, rt_g_lit("SET_PRIORITY", 12))) {
f_gexpr_773(F->up, F->args_1149, F->up->ty_int_155, &F->vt_2895, &F->v_2896);
(*F->r_1152) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_set_priority(rt_me(), ", 25), (*(P139)rt_nil_check(F->v_2896))), one_rt_gstr(41)));
} else {
f_fail_242(F->up, F->line_1150, cat_rt_gstr(F->name_1148, rt_g_lit(" is not declared", 16)));
(*F->r_1152) = NULL;
}
ret_:

  return;
}

static void f_gen_accept_1155(struct f_greenc_1fr *up_, P173 s_1154) {
  struct f_gen_accept_1155fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1154 = s_1154;
F->y_2897 = NULL;
F->y_2897 = f_lookup_entry_415(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->s_1154)).name_)), F->up->cur_task_196);
F->saved_ax_2898 = NULL;
F->ent_2899 = NULL;
F->ep_2900 = NULL;
F->xf_2901 = NULL;
F->x_2902 = NULL;
F->pm_2903 = NULL;
F->f_2904 = NULL;
F->f_2904 = (*(P173)rt_nil_check(F->s_1154)).a_;
F->p_2905 = NULL;
if (((F->y_2897 == NULL) || (G_NV((*(P116)rt_nil_check(F->y_2897)).kind_) != ((rt_int)10LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_1154)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->s_1154)).name_)), rt_g_lit(" is not an entry", 16)));
}
if ((!f_same_task_412(F->up, (*(P116)rt_nil_check(F->y_2897)).members_, F->up->cur_task_196))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_1154)).line_), rt_g_lit("a task accepts only its own entries (RM79 9.5)", 46));
}
f_entry_path_1103(F->up, F->y_2897, rt_g_lit("", 0), &F->ent_2899);
f_member_slot_1159(F->up, F->y_2897, F->s_1154, &F->ent_2899);
if ((G_NV((*(P173)rt_nil_check(F->s_1154)).flag_) == ((rt_int)0LL))) {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_accept_begin(&", 19), (*(P139)rt_nil_check(F->ent_2899))), rt_g_lit("); rt_accept_end(&", 18)), (*(P139)rt_nil_check(F->ent_2899))), rt_g_lit(", 0, 0); }", 10)));
goto ret_;
}
f_new_name_224(F->up, rt_g_lit("ep", 2), &F->ep_2900);
f_new_name_224(F->up, rt_g_lit("xf", 2), &F->xf_2901);
f_new_name_224(F->up, rt_g_lit("x", 1), &F->x_2902);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ struct ", 9), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2897)).cname_))), rt_g_lit("p *", 3)), (*(P139)rt_nil_check(F->ep_2900))), rt_g_lit(" = rt_accept_begin(&", 20)), (*(P139)rt_nil_check(F->ent_2899))), rt_g_lit(");", 2)));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_frame ", 9), (*(P139)rt_nil_check(F->xf_2901))), one_rt_gstr(59)));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (RT_TRY(", 11), (*(P139)rt_nil_check(F->xf_2901))), rt_g_lit(")) {", 4)));
f_push_cleanup_667(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P139)rt_nil_check(F->xf_2901))), rt_g_lit("); rt_accept_end(&", 18)), (*(P139)rt_nil_check(F->ent_2899))), rt_g_lit(", 0, 0);", 8)));
f_open_scope_448(F->up);
F->pm_2903 = (*(P116)rt_nil_check(F->y_2897)).params_;
while ((F->pm_2903 != NULL)) {
if ((G_NV((*(P1752)rt_nil_check(F->pm_2903)).mode_) == ((rt_int)1LL))) {
F->p_2905 = f_new_sym_452(F->up, ((rt_int)2LL), (*(P1752)rt_nil_check(F->pm_2903)).name_);
(*(P116)rt_nil_check(F->p_2905)).ro_ = 1;
(*(P116)rt_nil_check(F->p_2905)).access_path_ = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->ep_2900))), rt_g_lit("->", 2)), (*(P139)rt_nil_check((*(P1752)rt_nil_check(F->pm_2903)).cfield_))), one_rt_gstr(41)));
} else {
F->p_2905 = f_new_sym_452(F->up, ((rt_int)1LL), (*(P1752)rt_nil_check(F->pm_2903)).name_);
(*(P116)rt_nil_check(F->p_2905)).access_path_ = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*", 2), (*(P139)rt_nil_check(F->ep_2900))), rt_g_lit("->", 2)), (*(P139)rt_nil_check((*(P1752)rt_nil_check(F->pm_2903)).cfield_))), one_rt_gstr(41)));
}
if ((F->f_2904 != NULL)) {
(*(P116)rt_nil_check(F->p_2905)).name_ = (*(P173)rt_nil_check(F->f_2904)).name_;
F->f_2904 = (*(P173)rt_nil_check(F->f_2904)).next_;
}
(*(P116)rt_nil_check(F->p_2905)).t_ = (*(P1752)rt_nil_check(F->pm_2903)).t_;
(*(P116)rt_nil_check(F->p_2905)).c_ = (*(P1752)rt_nil_check(F->pm_2903)).c_;
f_define_447(F->up, F->p_2905, G_NV((*(P173)rt_nil_check(F->s_1154)).line_));
F->pm_2903 = (*(P1752)rt_nil_check(F->pm_2903)).next_;
}
L_end_2906: ;
F->up->accept_depth_197 = rt_add(G_NV(F->up->accept_depth_197), ((rt_int)1LL));
F->saved_ax_2898 = F->up->accept_exits_148;
F->up->accept_exits_148 = F->up->exits_144;
f_gen_statements_663(F->up, (*(P173)rt_nil_check(F->s_1154)).b_);
F->up->accept_exits_148 = F->saved_ax_2898;
F->up->accept_depth_197 = rt_sub(G_NV(F->up->accept_depth_197), ((rt_int)1LL));
f_close_scope_449(F->up);
f_pop_cleanup_668(F->up);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P139)rt_nil_check(F->xf_2901))), rt_g_lit("); rt_accept_end(&", 18)), (*(P139)rt_nil_check(F->ent_2899))), rt_g_lit(", 0, 0);", 8)));
f_emit_248(F->up, rt_g_lit("} else {", 8));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P139)rt_nil_check(F->xf_2901))), rt_g_lit("); int ", 7)), (*(P139)rt_nil_check(F->x_2902))), rt_g_lit(" = rt_xcur; rt_accept_end(&", 27)), (*(P139)rt_nil_check(F->ent_2899))), rt_g_lit(", 1, ", 5)), (*(P139)rt_nil_check(F->x_2902))), rt_g_lit("); rt_raise(", 12)), (*(P139)rt_nil_check(F->x_2902))), rt_g_lit(");", 2)));
f_emit_248(F->up, rt_g_lit("}", 1));
f_emit_248(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_member_slot_1159(struct f_greenc_1fr *up_, P116 y_1156, P173 s_1157, P139 *ent_1158) {
  struct f_member_slot_1159fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1156 = y_1156;
F->s_1157 = s_1157;
F->ent_1158 = ent_1158;
F->vt_2907 = NULL;
F->v_2908 = NULL;
if (((*(P116)rt_nil_check(F->y_1156)).c_ != NULL)) {
if (((*(P173)rt_nil_check(F->s_1157)).c_ == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_1157)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1156)).name_)), rt_g_lit(" is an entry family: accept ", 28)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1156)).name_))), rt_g_lit("(I)", 3)));
}
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->s_1157)).c_, NULL, &F->vt_2907, &F->v_2908);
f_entry_family_slot_1118(F->up, F->y_1156, (*(P139)rt_nil_check((*F->ent_1158))), (*(P139)rt_nil_check(F->v_2908)), &(*F->ent_1158));
} else if (((*(P173)rt_nil_check(F->s_1157)).c_ != NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_1157)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1156)).name_)), rt_g_lit(" is not an entry family", 23)));
}
ret_:

  return;
}

static void f_gen_delay_ticks_1162(struct f_greenc_1fr *up_, P173 e_1160, P139 *r_1161) {
  struct f_gen_delay_ticks_1162fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1160 = e_1160;
F->r_1161 = r_1161;
F->vt_2909 = NULL;
F->v_2910 = NULL;
f_gexpr_773(F->up, F->e_1160, F->up->ty_time_170, &F->vt_2909, &F->v_2910);
f_check_type_469(F->up, F->vt_2909, F->up->ty_time_170, G_NV((*(P173)rt_nil_check(F->e_1160)).line_));
(*F->r_1161) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(rt_int)llround(", 16), (*(P139)rt_nil_check(F->v_2910))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_gen_select_1164(struct f_greenc_1fr *up_, P173 s_1163) {
  struct f_gen_select_1164fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1163 = s_1163;
F->alt_2911 = NULL;
F->alt_2911 = (*(P173)rt_nil_check(F->s_1163)).a_;
F->n_2912 = INT64_MIN;
F->n_2912 = ((rt_int)0LL);
F->i_2913 = INT64_MIN;
F->has_delay_2914 = INT_MIN;
F->has_delay_2914 = 0;
F->has_accept_2915 = INT_MIN;
F->has_accept_2915 = 0;
F->al_2916 = NULL;
F->w_2917 = NULL;
F->g_2918 = NULL;
F->ent_2919 = NULL;
F->ticks_2920 = NULL;
F->vt_2921 = NULL;
F->y_2922 = NULL;
f_new_name_224(F->up, rt_g_lit("al", 2), &F->al_2916);
f_new_name_224(F->up, rt_g_lit("w", 1), &F->w_2917);
while ((F->alt_2911 != NULL)) {
F->n_2912 = rt_add(G_NV(F->n_2912), ((rt_int)1LL));
if ((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->alt_2911)).b_)).kind_) == ((rt_int)32LL))) {
F->has_delay_2914 = 1;
} else {
F->has_accept_2915 = 1;
}
F->alt_2911 = (*(P173)rt_nil_check(F->alt_2911)).next_;
}
L_end_2923: ;
if (((G_NV((*(P173)rt_nil_check(F->s_1163)).flag_) == ((rt_int)1LL)) && G_NV(F->has_delay_2914))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_1163)).line_), rt_g_lit("a select cannot have both delay alternatives and an else part (RM79 9.7)", 72));
}
if ((!G_NV(F->has_accept_2915))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_1163)).line_), rt_g_lit("a select needs at least one accept alternative (RM79 9.7)", 57));
}
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_alt ", 9), (*(P139)rt_nil_check(F->al_2916))), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(rt_add(G_NV(F->n_2912), ((rt_int)1LL))))), rt_g_lit("]; int open_ = 0;", 17)));
F->alt_2911 = (*(P173)rt_nil_check(F->s_1163)).a_;
F->i_2913 = ((rt_int)0LL);
while ((F->alt_2911 != NULL)) {
F->g_2918 = f_mk_221(F->up, rt_g_lit("1", 1));
if (((*(P173)rt_nil_check(F->alt_2911)).a_ != NULL)) {
f_condition_813(F->up, (*(P173)rt_nil_check(F->alt_2911)).a_, F->up->ty_bool_156, &F->vt_2921, &F->g_2918);
f_check_type_469(F->up, F->vt_2921, F->up->ty_bool_156, G_NV((*(P173)rt_nil_check(F->alt_2911)).line_));
}
if ((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->alt_2911)).b_)).kind_) == ((rt_int)34LL))) {
F->y_2922 = f_lookup_entry_415(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->alt_2911)).b_)).name_)), F->up->cur_task_196);
if (((F->y_2922 == NULL) || (G_NV((*(P116)rt_nil_check(F->y_2922)).kind_) != ((rt_int)10LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->alt_2911)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->alt_2911)).b_)).name_)), rt_g_lit(" is not an entry", 16)));
}
f_entry_path_1103(F->up, F->y_2922, rt_g_lit("", 0), &F->ent_2919);
f_member_slot_1159(F->up, F->y_2922, (*(P173)rt_nil_check(F->alt_2911)).b_, &F->ent_2919);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->al_2916)), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(G_NV(F->i_2913)))), rt_g_lit("] = (rt_alt){RT_ALT_ACCEPT, (", 29)), (*(P139)rt_nil_check(F->g_2918))), rt_g_lit("), &", 4)), (*(P139)rt_nil_check(F->ent_2919))), rt_g_lit(", NULL, 0};", 11)));
} else {
f_gen_delay_ticks_1162(F->up, (*(P173)rt_nil_check((*(P173)rt_nil_check(F->alt_2911)).b_)).a_, &F->ticks_2920);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->al_2916)), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(G_NV(F->i_2913)))), rt_g_lit("] = (rt_alt){RT_ALT_DELAY, (", 28)), (*(P139)rt_nil_check(F->g_2918))), rt_g_lit("), NULL, NULL, ", 15)), (*(P139)rt_nil_check(F->ticks_2920))), rt_g_lit("};", 2)));
}
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("open_ |= ", 9), (*(P139)rt_nil_check(F->al_2916))), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(G_NV(F->i_2913)))), rt_g_lit("].open;", 7)));
F->i_2913 = rt_add(G_NV(F->i_2913), ((rt_int)1LL));
F->alt_2911 = (*(P173)rt_nil_check(F->alt_2911)).next_;
}
L_end_2924: ;
if ((G_NV((*(P173)rt_nil_check(F->s_1163)).flag_) == ((rt_int)1LL))) {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->al_2916)), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(G_NV(F->n_2912)))), rt_g_lit("] = (rt_alt){RT_ALT_ELSE, 1, NULL, NULL, 0};", 44)));
F->n_2912 = rt_add(G_NV(F->n_2912), ((rt_int)1LL));
} else {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (!open_) rt_raise(rt_exc(", 28), f_q_239(F->up)), rt_g_lit("SELECT_ERROR", 12)), f_q_239(F->up)), rt_g_lit("));", 3)));
}
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("int ", 4), (*(P139)rt_nil_check(F->w_2917))), rt_g_lit(" = rt_wait(", 11)), rt_g_s2g(rt_str_of_int(G_NV(F->n_2912)))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->al_2916))), rt_g_lit(");", 2)));
F->alt_2911 = (*(P173)rt_nil_check(F->s_1163)).a_;
F->i_2913 = ((rt_int)0LL);
while ((F->alt_2911 != NULL)) {
if ((G_NV(F->i_2913) == ((rt_int)0LL))) {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P139)rt_nil_check(F->w_2917))), rt_g_lit(" == 0) {", 8)));
} else {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P139)rt_nil_check(F->w_2917))), rt_g_lit(" == ", 4)), rt_g_s2g(rt_str_of_int(G_NV(F->i_2913)))), rt_g_lit(") {", 3)));
}
if ((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->alt_2911)).b_)).kind_) == ((rt_int)34LL))) {
f_gen_accept_1155(F->up, (*(P173)rt_nil_check(F->alt_2911)).b_);
}
f_gen_statements_663(F->up, (*(P173)rt_nil_check(F->alt_2911)).c_);
F->i_2913 = rt_add(G_NV(F->i_2913), ((rt_int)1LL));
F->alt_2911 = (*(P173)rt_nil_check(F->alt_2911)).next_;
}
L_end_2925: ;
if ((G_NV((*(P173)rt_nil_check(F->s_1163)).flag_) == ((rt_int)1LL))) {
f_emit_248(F->up, rt_g_lit("} else {", 8));
f_gen_statements_663(F->up, (*(P173)rt_nil_check(F->s_1163)).b_);
}
f_emit_248(F->up, rt_g_lit("}", 1));
f_emit_248(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_family_range_1169(struct f_greenc_1fr *up_, P116 y_1165, P173 ix_1166, P139 *lo_1167, P139 *hi_1168) {
  struct f_family_range_1169fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1165 = y_1165;
F->ix_1166 = ix_1166;
F->lo_1167 = lo_1167;
F->hi_1168 = hi_1168;
F->vt_2926 = NULL;
if ((F->ix_1166 == NULL)) {
f_path_at_1079(F->up, G_NV((*(P116)rt_nil_check(F->y_1165)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1165)).cname_)), rt_g_lit("lo", 2)), &(*F->lo_1167));
f_path_at_1079(F->up, G_NV((*(P116)rt_nil_check(F->y_1165)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1165)).cname_)), rt_g_lit("hi", 2)), &(*F->hi_1168));
} else if ((G_NV((*(P173)rt_nil_check(F->ix_1166)).kind_) == ((rt_int)14LL))) {
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->ix_1166)).a_, F->up->ty_int_155, &F->vt_2926, &(*F->lo_1167));
f_gexpr_773(F->up, (*(P173)rt_nil_check(F->ix_1166)).b_, F->up->ty_int_155, &F->vt_2926, &(*F->hi_1168));
} else {
f_gexpr_773(F->up, F->ix_1166, F->up->ty_int_155, &F->vt_2926, &(*F->lo_1167));
(*F->hi_1168) = (*F->lo_1167);
}
ret_:

  return;
}

static void f_task_statement_gen_1171(struct f_greenc_1fr *up_, P173 s_1170) {
  struct f_task_statement_gen_1171fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1170 = s_1170;
F->n_2927 = NULL;
F->ix_2928 = NULL;
F->y_2929 = NULL;
F->a_2930 = NULL;
F->d_2931 = NULL;
F->l_2932 = NULL;
F->ticks_2933 = NULL;
F->lo_2934 = NULL;
F->hi_2935 = NULL;
{ rt_int sel2936 = G_NV((*(P173)rt_nil_check(F->s_1170)).kind_);
if (0 || sel2936 == ((rt_int)32LL)) {
f_gen_delay_ticks_1162(F->up, (*(P173)rt_nil_check(F->s_1170)).a_, &F->ticks_2933);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_delay(", 9), (*(P139)rt_nil_check(F->ticks_2933))), rt_g_lit(");", 2)));
} else if (0 || sel2936 == ((rt_int)33LL)) {
if ((G_NV(F->up->accept_depth_197) > ((rt_int)0LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_1170)).line_), rt_g_lit("an accept body cannot initiate a task (RM79 9.5)", 48));
}
F->n_2927 = (*(P173)rt_nil_check(F->s_1170)).a_;
while ((F->n_2927 != NULL)) {
f_task_of_1085(F->up, F->n_2927, &F->y_2929, &F->ix_2928);
f_path_at_1079(F->up, G_NV((*(P116)rt_nil_check(F->y_2929)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2929)).cname_)), rt_g_lit("decl", 4)), &F->d_2931);
if ((G_NV((*(P116)rt_nil_check(F->y_2929)).level_) > ((rt_int)0LL))) {
f_link_to_713(F->up, G_NV((*(P116)rt_nil_check(F->y_2929)).level_), &F->l_2932);
} else {
F->l_2932 = f_mk_221(F->up, rt_g_lit("NULL", 4));
}
if (((*(P116)rt_nil_check(F->y_2929)).c_ == NULL)) {
f_act_path_1095(F->up, F->y_2929, &F->a_2930);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_create(&", 11), (*(P139)rt_nil_check(F->a_2930))), rt_g_lit(", &", 3)), (*(P139)rt_nil_check(F->d_2931))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2929)).cname_))), rt_g_lit("run, ", 5)), (*(P139)rt_nil_check(F->l_2932))), rt_g_lit(");", 2)));
} else {
f_family_range_1169(F->up, F->y_2929, F->ix_2928, &F->lo_2934, &F->hi_2935);
f_act_path_i_1099(F->up, F->y_2929, rt_g_lit("k_", 2), &F->a_2930);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = ", 17), (*(P139)rt_nil_check(F->lo_2934))), rt_g_lit("; k_ <= ", 8)), (*(P139)rt_nil_check(F->hi_2935))), rt_g_lit("; k_++) { struct rt_famarg *g_ = rt_alloc(sizeof *g_); g_->up = ", 64)), (*(P139)rt_nil_check(F->l_2932))), rt_g_lit("; g_->i = k_; rt_create(&", 25)), (*(P139)rt_nil_check(F->a_2930))), rt_g_lit(", &", 3)), (*(P139)rt_nil_check(F->d_2931))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2929)).cname_))), rt_g_lit("run, g_); }", 11)));
}
F->n_2927 = (*(P173)rt_nil_check(F->n_2927)).next_;
}
L_end_2937: ;
} else if (0 || sel2936 == ((rt_int)34LL)) {
f_gen_accept_1155(F->up, F->s_1170);
} else if (0 || sel2936 == ((rt_int)35LL)) {
f_gen_select_1164(F->up, F->s_1170);
} else if (0 || sel2936 == ((rt_int)36LL)) {
F->n_2927 = (*(P173)rt_nil_check(F->s_1170)).a_;
while ((F->n_2927 != NULL)) {
f_task_of_1085(F->up, F->n_2927, &F->y_2929, &F->ix_2928);
if (((*(P116)rt_nil_check(F->y_2929)).c_ == NULL)) {
f_act_path_1095(F->up, F->y_2929, &F->a_2930);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_abort(&", 12), (*(P139)rt_nil_check(F->a_2930))), rt_g_lit(");", 2)));
} else {
f_family_range_1169(F->up, F->y_2929, F->ix_2928, &F->lo_2934, &F->hi_2935);
f_act_path_i_1099(F->up, F->y_2929, rt_g_lit("k_", 2), &F->a_2930);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = ", 17), (*(P139)rt_nil_check(F->lo_2934))), rt_g_lit("; k_ <= ", 8)), (*(P139)rt_nil_check(F->hi_2935))), rt_g_lit("; k_++) rt_g_abort(&", 20)), (*(P139)rt_nil_check(F->a_2930))), rt_g_lit(");", 2)));
}
F->n_2927 = (*(P173)rt_nil_check(F->n_2927)).next_;
}
L_end_2938: ;
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_1170)).line_), rt_g_lit("this statement is not handled", 29));
}
}
ret_:

  return;
}

static P173 f_root_name_1173(struct f_greenc_1fr *up_, P173 e_1172) {
  struct f_root_name_1173fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1172 = e_1172;
if ((G_NV((*(P173)rt_nil_check(F->e_1172)).kind_) == ((rt_int)5LL))) {
F->result_ = F->e_1172;
goto ret_;
} else if ((((G_NV((*(P173)rt_nil_check(F->e_1172)).kind_) == ((rt_int)9LL)) || (G_NV((*(P173)rt_nil_check(F->e_1172)).kind_) == ((rt_int)8LL))) || (G_NV((*(P173)rt_nil_check(F->e_1172)).kind_) == ((rt_int)15LL)))) {
F->result_ = f_root_name_1173(F->up, (*(P173)rt_nil_check(F->e_1172)).a_);
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_pure_target_1176(struct f_greenc_1fr *up_, P173 target_1174, rt_int line_1175) {
  struct f_check_pure_target_1176fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->target_1174 = target_1174;
F->line_1175 = line_1175;
F->n_2939 = NULL;
F->y_2940 = NULL;
if ((F->up->pure_sym_210 == NULL)) {
goto ret_;
}
if (G_NV(F->up->last_deref_214)) {
f_fail_242(F->up, F->line_1175, cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->up->pure_sym_210)).name_))), rt_g_lit(" may not change an object designated by an access value (RM79 6.5)", 66)));
}
F->n_2939 = f_root_name_1173(F->up, F->target_1174);
if ((F->n_2939 != NULL)) {
F->y_2940 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->n_2939)).name_)));
if ((((F->y_2940 != NULL) && (G_NV((*(P116)rt_nil_check(F->y_2940)).kind_) == ((rt_int)1LL))) && (G_NV((*(P116)rt_nil_check(F->y_2940)).depth_) < G_NV(F->up->pure_depth_211)))) {
f_fail_242(F->up, F->line_1175, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->up->pure_sym_210)).name_))), rt_g_lit(" may not assign to ", 19)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->n_2939)).name_))), rt_g_lit(", which is not local to it (RM79 6.5)", 37)));
}
}
ret_:

  return;
}

static int f_assigns_nonlocal_1179(struct f_greenc_1fr *up_, P173 d_1177, rt_gstr name_1178) {
  struct f_assigns_nonlocal_1179fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_1177 = d_1177;
F->name_1178 = cp_rt_gstr(name_1178);
if (f_scan_assigns_1190(F->up, (*(P173)rt_nil_check(F->d_1177)).d_, F->d_1177, F->name_1178)) {
F->result_ = 1;
goto ret_;
}
F->result_ = f_scan_handlers_1186(F->up, (*(P173)rt_nil_check(F->d_1177)).e_, F->d_1177, F->name_1178);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_declares_1182(struct f_greenc_1fr *up_, P173 d_1180, rt_gstr name_1181) {
  struct f_declares_1182fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_1180 = d_1180;
F->name_1181 = cp_rt_gstr(name_1181);
F->p_2941 = NULL;
F->p_2941 = (*(P173)rt_nil_check(F->d_1180)).a_;
F->e_2942 = NULL;
F->e_2942 = (*(P173)rt_nil_check(F->d_1180)).c_;
while ((F->p_2941 != NULL)) {
if (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->p_2941)).name_)), F->name_1181)) {
F->result_ = 1;
goto ret_;
}
F->p_2941 = (*(P173)rt_nil_check(F->p_2941)).next_;
}
L_end_2943: ;
while ((F->e_2942 != NULL)) {
if ((((*(P173)rt_nil_check(F->e_2942)).name_ != NULL) && eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_2942)).name_)), F->name_1181))) {
F->result_ = 1;
goto ret_;
}
F->e_2942 = (*(P173)rt_nil_check(F->e_2942)).next_;
}
L_end_2944: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_scan_handlers_1186(struct f_greenc_1fr *up_, P173 h_1183, P173 d_1184, rt_gstr name_1185) {
  struct f_scan_handlers_1186fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->h_1183 = h_1183;
F->d_1184 = d_1184;
F->name_1185 = cp_rt_gstr(name_1185);
F->p_2945 = NULL;
F->p_2945 = F->h_1183;
while ((F->p_2945 != NULL)) {
if (f_scan_assigns_1190(F->up, (*(P173)rt_nil_check(F->p_2945)).b_, F->d_1184, F->name_1185)) {
F->result_ = 1;
goto ret_;
}
F->p_2945 = (*(P173)rt_nil_check(F->p_2945)).next_;
}
L_end_2946: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_scan_assigns_1190(struct f_greenc_1fr *up_, P173 stmts_1187, P173 d_1188, rt_gstr name_1189) {
  struct f_scan_assigns_1190fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_1187 = stmts_1187;
F->d_1188 = d_1188;
F->name_1189 = cp_rt_gstr(name_1189);
F->s_2947 = NULL;
F->s_2947 = F->stmts_1187;
F->a_2948 = NULL;
F->r_2949 = NULL;
while ((F->s_2947 != NULL)) {
if ((G_NV((*(P173)rt_nil_check(F->s_2947)).kind_) == ((rt_int)20LL))) {
F->r_2949 = f_root_name_1173(F->up, (*(P173)rt_nil_check(F->s_2947)).a_);
if ((((F->r_2949 != NULL) && eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->r_2949)).name_)), F->name_1189)) && (!f_declares_1182(F->up, F->d_1188, F->name_1189)))) {
F->result_ = 1;
goto ret_;
}
} else if ((G_NV((*(P173)rt_nil_check(F->s_2947)).kind_) == ((rt_int)22LL))) {
F->a_2948 = (*(P173)rt_nil_check(F->s_2947)).a_;
while ((F->a_2948 != NULL)) {
if (f_scan_assigns_1190(F->up, (*(P173)rt_nil_check(F->a_2948)).b_, F->d_1188, F->name_1189)) {
F->result_ = 1;
goto ret_;
}
F->a_2948 = (*(P173)rt_nil_check(F->a_2948)).next_;
}
L_end_2951: ;
if (f_scan_assigns_1190(F->up, (*(P173)rt_nil_check(F->s_2947)).b_, F->d_1188, F->name_1189)) {
F->result_ = 1;
goto ret_;
}
} else if ((G_NV((*(P173)rt_nil_check(F->s_2947)).kind_) == ((rt_int)23LL))) {
F->a_2948 = (*(P173)rt_nil_check(F->s_2947)).b_;
while ((F->a_2948 != NULL)) {
if (f_scan_assigns_1190(F->up, (*(P173)rt_nil_check(F->a_2948)).b_, F->d_1188, F->name_1189)) {
F->result_ = 1;
goto ret_;
}
F->a_2948 = (*(P173)rt_nil_check(F->a_2948)).next_;
}
L_end_2952: ;
if (f_scan_assigns_1190(F->up, (*(P173)rt_nil_check(F->s_2947)).c_, F->d_1188, F->name_1189)) {
F->result_ = 1;
goto ret_;
}
} else if ((G_NV((*(P173)rt_nil_check(F->s_2947)).kind_) == ((rt_int)24LL))) {
if (f_scan_assigns_1190(F->up, (*(P173)rt_nil_check(F->s_2947)).b_, F->d_1188, F->name_1189)) {
F->result_ = 1;
goto ret_;
}
} else if ((G_NV((*(P173)rt_nil_check(F->s_2947)).kind_) == ((rt_int)25LL))) {
if ((f_scan_assigns_1190(F->up, (*(P173)rt_nil_check(F->s_2947)).b_, F->d_1188, F->name_1189) || f_scan_handlers_1186(F->up, (*(P173)rt_nil_check(F->s_2947)).c_, F->d_1188, F->name_1189))) {
F->result_ = 1;
goto ret_;
}
}
F->s_2947 = (*(P173)rt_nil_check(F->s_2947)).next_;
}
L_end_2950: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_call_rules_1193(struct f_greenc_1fr *up_, P173 e_1191, P116 y_1192) {
  struct f_check_call_rules_1193fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1191 = e_1191;
F->y_1192 = y_1192;
F->z_2953 = NULL;
F->s_2954 = NULL;
if ((((F->up->pure_sym_210 != NULL) && ((G_NV((*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_1192)).result_)).kind_) == ((rt_int)9LL)) || G_NV((*(P116)rt_nil_check(F->y_1192)).vrp_))) && (G_NV((*(P116)rt_nil_check(F->y_1192)).depth_) < G_NV(F->up->pure_depth_211)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1191)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->up->pure_sym_210)).name_))), rt_g_lit(" may not call procedure ", 24)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1192)).name_))), rt_g_lit(": it could have side effects (RM79 6.5)", 39)));
}
if (((!G_NV((*(P116)rt_nil_check(F->y_1192)).vrp_)) || (G_NV(F->up->trial_154) > ((rt_int)0LL)))) {
goto ret_;
}
if ((!G_NV(F->up->vrp_ok_212))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1191)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("value-returning procedure ", 26), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1192)).name_))), rt_g_lit(" can be called only in an assignment, an initialization or a procedure call (RM79 6.5)", 86)));
}
F->s_2954 = F->up->scope_stack_120;
while ((F->s_2954 != NULL)) {
if (((((G_NV((*(P116)rt_nil_check(F->s_2954)).kind_) == ((rt_int)1LL)) && (G_NV((*(P116)rt_nil_check(F->s_2954)).depth_) <= G_NV((*(P116)rt_nil_check(F->y_1192)).depth_))) && (f_lookup_409(F->up, (*(P139)rt_nil_check((*(P116)rt_nil_check(F->s_2954)).name_))) == F->s_2954)) && f_assigns_nonlocal_1179(F->up, (*(P116)rt_nil_check(F->y_1192)).decl_, (*(P139)rt_nil_check((*(P116)rt_nil_check(F->s_2954)).name_))))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1191)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("value-returning procedure ", 26), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1192)).name_))), rt_g_lit(" assigns ", 9)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->s_2954)).name_))), rt_g_lit(", which is visible here; it can be called only outside its scope (RM79 6.5)", 75)));
}
F->s_2954 = (*(P116)rt_nil_check(F->s_2954)).stack_;
}
L_end_2955: ;
ret_:

  return;
}

static void f_generic_p_1195(struct f_greenc_1fr *up_, P173 *res_1194) {
  struct f_generic_p_1195fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1194 = res_1194;
F->x_2956 = NULL;
F->p_2957 = NULL;
F->head_2958 = NULL;
F->tail_2959 = NULL;
F->names_2960 = NULL;
F->st_2961 = NULL;
F->def_2962 = NULL;
F->sub_2963 = NULL;
F->def_name_text_2964 = NULL;
F->more_2965 = INT_MIN;
F->more_2965 = 1;
f_expect_kw_317(F->up, rt_g_lit("GENERIC", 7));
F->x_2956 = f_nn_295(F->up, ((rt_int)54LL), f_cur_line_302(F->up));
if (f_at_op_306(F->up, rt_g_lit("(", 1))) {
f_skip_315(F->up);
while (G_NV(F->more_2965)) {
if (f_at_kw_304(F->up, rt_g_lit("RESTRICTED", 10))) {
f_skip_315(F->up);
}
if (f_at_kw_304(F->up, rt_g_lit("TYPE", 4))) {
f_skip_315(F->up);
F->p_2957 = f_nn_295(F->up, ((rt_int)47LL), f_cur_line_302(F->up));
(*(P173)rt_nil_check(F->p_2957)).ival_ = ((rt_int)10LL);
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->p_2957)).name_);
f_append_299(F->up, &F->head_2958, &F->tail_2959, F->p_2957);
} else if ((f_at_kw_304(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_304(F->up, rt_g_lit("FUNCTION", 8)))) {
F->p_2957 = f_nn_295(F->up, ((rt_int)47LL), f_cur_line_302(F->up));
(*(P173)rt_nil_check(F->p_2957)).ival_ = ((rt_int)11LL);
if (f_at_kw_304(F->up, rt_g_lit("PROCEDURE", 9))) {
F->sub_2963 = f_nn_295(F->up, ((rt_int)44LL), f_cur_line_302(F->up));
} else {
F->sub_2963 = f_nn_295(F->up, ((rt_int)45LL), f_cur_line_302(F->up));
}
f_skip_315(F->up);
f_designator_379(F->up, &(*(P173)rt_nil_check(F->sub_2963)).name_);
if (f_at_op_306(F->up, rt_g_lit("(", 1))) {
f_formal_part_377(F->up, &(*(P173)rt_nil_check(F->sub_2963)).a_);
}
if (f_at_kw_304(F->up, rt_g_lit("RETURN", 6))) {
f_skip_315(F->up);
f_subtype_ind_359(F->up, &(*(P173)rt_nil_check(F->sub_2963)).b_);
}
(*(P173)rt_nil_check(F->sub_2963)).ival_ = ((rt_int)1LL);
(*(P173)rt_nil_check(F->p_2957)).name_ = (*(P173)rt_nil_check(F->sub_2963)).name_;
(*(P173)rt_nil_check(F->p_2957)).a_ = F->sub_2963;
if (f_at_kw_304(F->up, rt_g_lit("IS", 2))) {
f_skip_315(F->up);
if (f_at_kind_308(F->up, ((rt_int)6LL))) {
f_designator_379(F->up, &F->def_name_text_2964);
(*(P173)rt_nil_check(F->p_2957)).b_ = f_nn_295(F->up, ((rt_int)5LL), f_cur_line_302(F->up));
(*(P173)rt_nil_check((*(P173)rt_nil_check(F->p_2957)).b_)).name_ = F->def_name_text_2964;
} else {
f_name_p_353(F->up, &(*(P173)rt_nil_check(F->p_2957)).b_);
}
}
f_append_299(F->up, &F->head_2958, &F->tail_2959, F->p_2957);
} else {
f_id_list_325(F->up, &F->names_2960);
f_expect_op_319(F->up, rt_g_lit(":", 1));
if (f_at_kw_304(F->up, rt_g_lit("IN", 2))) {
f_skip_315(F->up);
}
f_subtype_ind_359(F->up, &F->st_2961);
F->def_2962 = NULL;
if (f_at_op_306(F->up, rt_g_lit(":=", 2))) {
f_skip_315(F->up);
f_expr_332(F->up, &F->def_2962);
}
while ((F->names_2960 != NULL)) {
F->p_2957 = f_nn_295(F->up, ((rt_int)47LL), G_NV((*(P173)rt_nil_check(F->names_2960)).line_));
(*(P173)rt_nil_check(F->p_2957)).ival_ = ((rt_int)1LL);
(*(P173)rt_nil_check(F->p_2957)).name_ = (*(P173)rt_nil_check(F->names_2960)).name_;
(*(P173)rt_nil_check(F->p_2957)).a_ = F->st_2961;
(*(P173)rt_nil_check(F->p_2957)).b_ = F->def_2962;
f_append_299(F->up, &F->head_2958, &F->tail_2959, F->p_2957);
F->names_2960 = (*(P173)rt_nil_check(F->names_2960)).next_;
}
L_end_2967: ;
}
F->more_2965 = f_at_op_306(F->up, rt_g_lit(";", 1));
if (G_NV(F->more_2965)) {
f_skip_315(F->up);
}
}
L_end_2966: ;
f_expect_op_319(F->up, rt_g_lit(")", 1));
}
if ((f_at_kw_304(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_304(F->up, rt_g_lit("FUNCTION", 8)))) {
f_subprogram_381(F->up, &(*(P173)rt_nil_check(F->x_2956)).b_);
} else if (f_at_kw_304(F->up, rt_g_lit("PACKAGE", 7))) {
f_package_p_387(F->up, &(*(P173)rt_nil_check(F->x_2956)).b_);
} else if (f_at_kw_304(F->up, rt_g_lit("TASK", 4))) {
f_task_p_1065(F->up, &(*(P173)rt_nil_check(F->x_2956)).b_);
} else {
f_perror_314(F->up, rt_g_lit("a generic unit is a subprogram, a package or a task", 51));
}
(*(P173)rt_nil_check(F->x_2956)).a_ = F->head_2958;
(*(P173)rt_nil_check(F->x_2956)).name_ = (*(P173)rt_nil_check((*(P173)rt_nil_check(F->x_2956)).b_)).name_;
(*F->res_1194) = F->x_2956;
ret_:

  return;
}

static void f_instantiation_1198(struct f_greenc_1fr *up_, P173 x_1196, P173 *res_1197) {
  struct f_instantiation_1198fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_1196 = x_1196;
F->res_1197 = res_1197;
F->i_2968 = NULL;
F->head_2969 = NULL;
F->tail_2970 = NULL;
F->a_2971 = NULL;
F->formal_2972 = NULL;
F->mark_2973 = INT64_MIN;
F->more_2974 = INT_MIN;
F->more_2974 = 1;
f_expect_kw_317(F->up, rt_g_lit("IS", 2));
f_expect_kw_317(F->up, rt_g_lit("NEW", 3));
F->i_2968 = f_nn_295(F->up, ((rt_int)53LL), G_NV((*(P173)rt_nil_check(F->x_1196)).line_));
(*(P173)rt_nil_check(F->i_2968)).name_ = (*(P173)rt_nil_check(F->x_1196)).name_;
(*(P173)rt_nil_check(F->i_2968)).ival_ = G_NV((*(P173)rt_nil_check(F->x_1196)).kind_);
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->i_2968)).tag_);
if (f_at_op_306(F->up, rt_g_lit("(", 1))) {
f_skip_315(F->up);
while (G_NV(F->more_2974)) {
F->formal_2972 = NULL;
F->mark_2973 = ((rt_int)0LL);
if (((f_at_kind_308(F->up, ((rt_int)1LL)) && (f_kind_at_310(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit("IS", 2)))) {
f_expect_id_321(F->up, &F->formal_2972);
f_skip_315(F->up);
F->mark_2973 = ((rt_int)5LL);
} else if (((f_at_kind_308(F->up, ((rt_int)1LL)) && (f_kind_at_310(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && ((eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit(":=", 2)) || eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit("=:", 2))) || eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit(":=:", 3))))) {
f_expect_id_321(F->up, &F->formal_2972);
f_skip_315(F->up);
F->mark_2973 = ((rt_int)1LL);
}
if ((f_at_kind_308(F->up, ((rt_int)6LL)) && (G_NV(F->mark_2973) == ((rt_int)5LL)))) {
F->a_2971 = f_nn_295(F->up, ((rt_int)5LL), f_cur_line_302(F->up));
f_designator_379(F->up, &(*(P173)rt_nil_check(F->a_2971)).name_);
} else {
f_expr_332(F->up, &F->a_2971);
}
(*(P173)rt_nil_check(F->a_2971)).formal_ = F->formal_2972;
(*(P173)rt_nil_check(F->a_2971)).flag_ = G_NV(F->mark_2973);
f_append_299(F->up, &F->head_2969, &F->tail_2970, F->a_2971);
F->more_2974 = f_at_op_306(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_2974)) {
f_skip_315(F->up);
}
}
L_end_2975: ;
f_expect_op_319(F->up, rt_g_lit(")", 1));
}
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*(P173)rt_nil_check(F->i_2968)).a_ = F->head_2969;
(*F->res_1197) = F->i_2968;
ret_:

  return;
}

static void f_generic_decl_1200(struct f_greenc_1fr *up_, P173 e_1199) {
  struct f_generic_decl_1200fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1199 = e_1199;
F->y_2976 = NULL;
if ((G_NV((*(P173)rt_nil_check(F->e_1199)).kind_) == ((rt_int)54LL))) {
F->y_2976 = f_new_sym_452(F->up, ((rt_int)11LL), (*(P173)rt_nil_check(F->e_1199)).name_);
(*(P116)rt_nil_check(F->y_2976)).decl_ = F->e_1199;
f_define_447(F->up, F->y_2976, G_NV((*(P173)rt_nil_check(F->e_1199)).line_));
} else if ((G_NV((*(P173)rt_nil_check(F->e_1199)).kind_) == ((rt_int)53LL))) {
f_instantiate_1221(F->up, F->e_1199);
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1199)).line_), rt_g_lit("this declaration is not handled", 31));
}
ret_:

  return;
}

static int f_is_generic_name_1202(struct f_greenc_1fr *up_, rt_gstr n_1201) {
  struct f_is_generic_name_1202fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1201 = cp_rt_gstr(n_1201);
F->y_2977 = NULL;
F->y_2977 = f_lookup_409(F->up, F->n_1201);
if ((!(F->y_2977 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P116)rt_nil_check(F->y_2977)).kind_) == ((rt_int)11LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_attach_generic_body_1204(struct f_greenc_1fr *up_, P173 e_1203) {
  struct f_attach_generic_body_1204fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1203 = e_1203;
F->y_2978 = NULL;
F->y_2978 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1203)).name_)));
(*(P173)rt_nil_check((*(P116)rt_nil_check(F->y_2978)).decl_)).c_ = F->e_1203;
F->up->generic_contexts_147 = ({ R146 *cell2979 = rt_alloc(sizeof(R146)); *cell2979 = cp_R146(({ R146 ag2980; ag2980.body_node_ = F->e_1203; ag2980.visible_ = F->up->scope_stack_120; ag2980.next_ = F->up->generic_contexts_147; ag2980; })); (P145)cell2979; });
ret_:

  return;
}

static void f_restore_generic_context_1207(struct f_greenc_1fr *up_, P173 body_node_1205, rt_int line_1206) {
  struct f_restore_generic_context_1207fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->body_node_1205 = body_node_1205;
F->line_1206 = line_1206;
F->ctx_2981 = NULL;
F->ctx_2981 = F->up->generic_contexts_147;
F->m_2982 = NULL;
F->z_2983 = NULL;
F->seen_2984 = INT_MIN;
while (((F->ctx_2981 != NULL) && ((*(P145)rt_nil_check(F->ctx_2981)).body_node_ != F->body_node_1205))) {
F->ctx_2981 = (*(P145)rt_nil_check(F->ctx_2981)).next_;
}
L_end_2985: ;
if ((F->ctx_2981 == NULL)) {
goto ret_;
}
F->m_2982 = (*(P145)rt_nil_check(F->ctx_2981)).visible_;
while ((F->m_2982 != NULL)) {
if (((G_NV((*(P116)rt_nil_check(F->m_2982)).level_) <= ((rt_int)0LL)) && (G_NV((*(P116)rt_nil_check(F->m_2982)).kind_) != ((rt_int)11LL)))) {
F->z_2983 = ({ A115 ix2987 = F->up->table_118; ix2987.p[rt_index(f_hash_407(F->up, (*(P139)rt_nil_check((*(P116)rt_nil_check(F->m_2982)).name_))), ix2987.lo, ix2987.hi) - ix2987.lo]; });
F->seen_2984 = 0;
while ((F->z_2983 != NULL)) {
if (((G_NV((*(P116)rt_nil_check(F->z_2983)).depth_) == G_NV(F->up->depth_119)) && eq_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->z_2983)).name_)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->m_2982)).name_))))) {
F->seen_2984 = 1;
}
F->z_2983 = (*(P116)rt_nil_check(F->z_2983)).chain_;
}
L_end_2988: ;
if ((!G_NV(F->seen_2984))) {
f_copy_sym_1021(F->up, F->m_2982, &F->z_2983);
f_define_447(F->up, F->z_2983, F->line_1206);
}
}
F->m_2982 = (*(P116)rt_nil_check(F->m_2982)).stack_;
}
L_end_2986: ;
ret_:

  return;
}

static P173 f_gactual_1211(struct f_greenc_1fr *up_, P173 args_1208, rt_int nth_1209, rt_gstr name_1210) {
  struct f_gactual_1211fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->args_1208 = args_1208;
F->nth_1209 = nth_1209;
F->name_1210 = cp_rt_gstr(name_1210);
F->a_2989 = NULL;
F->a_2989 = F->args_1208;
F->i_2990 = INT64_MIN;
F->i_2990 = ((rt_int)1LL);
while ((F->a_2989 != NULL)) {
if ((((*(P173)rt_nil_check(F->a_2989)).formal_ == NULL) && (G_NV(F->i_2990) == F->nth_1209))) {
F->result_ = F->a_2989;
goto ret_;
}
if ((((*(P173)rt_nil_check(F->a_2989)).formal_ != NULL) && eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->a_2989)).formal_)), F->name_1210))) {
F->result_ = F->a_2989;
goto ret_;
}
if (((*(P173)rt_nil_check(F->a_2989)).formal_ == NULL)) {
F->i_2990 = rt_add(G_NV(F->i_2990), ((rt_int)1LL));
}
F->a_2989 = (*(P173)rt_nil_check(F->a_2989)).next_;
}
L_end_2991: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_copy_node_1215(struct f_greenc_1fr *up_, P173 n_1212, P139 name_1213, P173 *r_1214) {
  struct f_copy_node_1215fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1212 = n_1212;
F->name_1213 = name_1213;
F->r_1214 = r_1214;
(*F->r_1214) = f_nn_295(F->up, G_NV((*(P173)rt_nil_check(F->n_1212)).kind_), G_NV((*(P173)rt_nil_check(F->n_1212)).line_));
as_R174(&(*(P173)rt_nil_check((*F->r_1214))), (*(P173)rt_nil_check(F->n_1212)));
(*(P173)rt_nil_check((*F->r_1214))).name_ = F->name_1213;
(*(P173)rt_nil_check((*F->r_1214))).next_ = NULL;
ret_:

  return;
}

static int f_matches_formal_1219(struct f_greenc_1fr *up_, P116 y_1216, rt_gstr name_1217, P116 fs_1218) {
  struct f_matches_formal_1219fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1216 = y_1216;
F->name_1217 = cp_rt_gstr(name_1217);
F->fs_1218 = fs_1218;
if (((!eq_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1216)).name_)), F->name_1217)) || ((G_NV((*(P116)rt_nil_check(F->y_1216)).kind_) != ((rt_int)3LL)) && (G_NV((*(P116)rt_nil_check(F->y_1216)).kind_) != ((rt_int)4LL))))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (f_same_signature_441(F->up, (*(P116)rt_nil_check(F->y_1216)).params_, (*(P116)rt_nil_check(F->fs_1218)).params_) && f_same_429(F->up, (*(P116)rt_nil_check(F->y_1216)).result_, (*(P116)rt_nil_check(F->fs_1218)).result_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_instantiate_1221(struct f_greenc_1fr *up_, P173 e_1220) {
  struct f_instantiate_1221fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1220 = e_1220;
F->g_2992 = NULL;
F->g_2992 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1220)).tag_)));
F->gd_2993 = NULL;
F->pat_2994 = NULL;
F->f_2995 = NULL;
F->a_2996 = NULL;
F->cn_2997 = NULL;
F->y_2998 = NULL;
F->z_2999 = NULL;
F->fs_3000 = NULL;
F->nth_3001 = INT64_MIN;
F->nth_3001 = ((rt_int)1LL);
F->t_3002 = NULL;
F->vt_3003 = NULL;
F->c_3004 = NULL;
F->v_3005 = NULL;
F->acc_3006 = NULL;
F->x_3007 = NULL;
F->ok_3008 = INT_MIN;
if (((F->g_2992 == NULL) || (G_NV((*(P116)rt_nil_check(F->g_2992)).kind_) != ((rt_int)11LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1220)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1220)).tag_)), rt_g_lit(" is not a generic unit", 22)));
}
F->gd_2993 = (*(P116)rt_nil_check(F->g_2992)).decl_;
F->pat_2994 = (*(P173)rt_nil_check(F->gd_2993)).b_;
f_open_scope_448(F->up);
F->f_2995 = (*(P173)rt_nil_check(F->gd_2993)).a_;
while ((F->f_2995 != NULL)) {
F->a_2996 = f_gactual_1211(F->up, (*(P173)rt_nil_check(F->e_1220)).a_, G_NV(F->nth_3001), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->f_2995)).name_)));
F->nth_3001 = rt_add(G_NV(F->nth_3001), ((rt_int)1LL));
if ((G_NV((*(P173)rt_nil_check(F->f_2995)).ival_) == ((rt_int)10LL))) {
if (((F->a_2996 == NULL) || (G_NV((*(P173)rt_nil_check(F->a_2996)).kind_) != ((rt_int)5LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1220)).line_), cat_rt_gstr(rt_g_lit("a type is required for generic parameter ", 41), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->f_2995)).name_))));
}
F->y_2998 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->a_2996)).name_)));
if (((F->y_2998 == NULL) || (G_NV((*(P116)rt_nil_check(F->y_2998)).kind_) != ((rt_int)5LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1220)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->a_2996)).name_)), rt_g_lit(" is not a type", 14)));
}
f_copy_sym_1021(F->up, F->y_2998, &F->z_2999);
(*(P116)rt_nil_check(F->z_2999)).name_ = (*(P173)rt_nil_check(F->f_2995)).name_;
f_define_447(F->up, F->z_2999, G_NV((*(P173)rt_nil_check(F->e_1220)).line_));
} else if ((G_NV((*(P173)rt_nil_check(F->f_2995)).ival_) == ((rt_int)11LL))) {
if ((F->a_2996 == NULL)) {
F->a_2996 = (*(P173)rt_nil_check(F->f_2995)).b_;
}
if (((F->a_2996 == NULL) || (G_NV((*(P173)rt_nil_check(F->a_2996)).kind_) != ((rt_int)5LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1220)).line_), cat_rt_gstr(rt_g_lit("a subprogram is required for generic parameter ", 47), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->f_2995)).name_))));
}
f_build_subprogram_629(F->up, (*(P173)rt_nil_check(F->f_2995)).a_, &F->fs_3000);
F->y_2998 = ({ A115 ix3010 = F->up->table_118; ix3010.p[rt_index(f_hash_407(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->a_2996)).name_))), ix3010.lo, ix3010.hi) - ix3010.lo]; });
while (((F->y_2998 != NULL) && (!f_matches_formal_1219(F->up, F->y_2998, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->a_2996)).name_)), F->fs_3000)))) {
F->y_2998 = (*(P116)rt_nil_check(F->y_2998)).chain_;
}
L_end_3011: ;
if ((F->y_2998 == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1220)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no subprogram ", 14), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->a_2996)).name_))), rt_g_lit(" matches generic parameter ", 27)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->f_2995)).name_))));
}
f_copy_sym_1021(F->up, F->y_2998, &F->z_2999);
(*(P116)rt_nil_check(F->z_2999)).name_ = (*(P173)rt_nil_check(F->f_2995)).name_;
f_define_447(F->up, F->z_2999, G_NV((*(P173)rt_nil_check(F->e_1220)).line_));
} else {
if ((F->a_2996 == NULL)) {
F->a_2996 = (*(P173)rt_nil_check(F->f_2995)).b_;
}
if ((F->a_2996 == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1220)).line_), cat_rt_gstr(rt_g_lit("no actual for generic parameter ", 32), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->f_2995)).name_))));
}
f_resolve_490(F->up, (*(P173)rt_nil_check(F->f_2995)).a_, &F->t_3002, &F->c_3004);
f_gexpr_773(F->up, F->a_2996, F->t_3002, &F->vt_3003, &F->v_3005);
f_check_type_469(F->up, F->vt_3003, F->t_3002, G_NV((*(P173)rt_nil_check(F->e_1220)).line_));
F->z_2999 = f_new_sym_452(F->up, ((rt_int)2LL), (*(P173)rt_nil_check(F->f_2995)).name_);
f_storage_619(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->f_2995)).name_)), F->t_3002, &F->acc_3006);
f_copy_code_604(F->up, F->t_3002, (*(P139)rt_nil_check(F->v_3005)), &F->x_3007);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->acc_3006)), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->x_3007))), one_rt_gstr(59)));
(*(P116)rt_nil_check(F->z_2999)).t_ = F->t_3002;
(*(P116)rt_nil_check(F->z_2999)).c_ = F->c_3004;
(*(P116)rt_nil_check(F->z_2999)).ro_ = 1;
if ((G_NV((*(P121)rt_nil_check(F->t_3002)).kind_) == ((rt_int)1LL))) {
f_manifest_486(F->up, F->a_2996, &(*(P116)rt_nil_check(F->z_2999)).mvalue_, &F->ok_3008);
 (void)rt_range(F->ok_3008, 0, 1);
(*(P116)rt_nil_check(F->z_2999)).hasmv_ = G_NV(F->ok_3008);
}
f_bind_622(F->up, F->z_2999, F->acc_3006);
f_define_447(F->up, F->z_2999, G_NV((*(P173)rt_nil_check(F->e_1220)).line_));
}
F->f_2995 = (*(P173)rt_nil_check(F->f_2995)).next_;
}
L_end_3009: ;
if (((*(P173)rt_nil_check(F->gd_2993)).c_ != NULL)) {
f_restore_generic_context_1207(F->up, (*(P173)rt_nil_check(F->gd_2993)).c_, G_NV((*(P173)rt_nil_check(F->e_1220)).line_));
}
if (((G_NV((*(P173)rt_nil_check(F->pat_2994)).kind_) == ((rt_int)44LL)) || (G_NV((*(P173)rt_nil_check(F->pat_2994)).kind_) == ((rt_int)45LL)))) {
if ((G_NV((*(P173)rt_nil_check(F->pat_2994)).ival_) == ((rt_int)1LL))) {
if (((*(P173)rt_nil_check(F->gd_2993)).c_ == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1220)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the body of generic ", 20), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1220)).tag_))), rt_g_lit(" is not given before this instantiation", 39)));
}
F->pat_2994 = (*(P173)rt_nil_check(F->gd_2993)).c_;
}
f_copy_node_1215(F->up, F->pat_2994, (*(P173)rt_nil_check(F->e_1220)).name_, &F->cn_2997);
f_build_subprogram_629(F->up, F->cn_2997, &F->y_2998);
f_define_447(F->up, F->y_2998, G_NV((*(P173)rt_nil_check(F->e_1220)).line_));
f_subprogram_body_661(F->up, F->cn_2997, F->y_2998);
} else if ((G_NV((*(P173)rt_nil_check(F->pat_2994)).kind_) == ((rt_int)48LL))) {
f_copy_node_1215(F->up, F->pat_2994, (*(P173)rt_nil_check(F->e_1220)).name_, &F->cn_2997);
f_package_spec_1026(F->up, F->cn_2997);
F->y_2998 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1220)).name_)));
if (((*(P173)rt_nil_check(F->gd_2993)).c_ != NULL)) {
f_copy_node_1215(F->up, (*(P173)rt_nil_check(F->gd_2993)).c_, (*(P173)rt_nil_check(F->e_1220)).name_, &F->cn_2997);
f_package_body_1031(F->up, F->cn_2997);
}
} else {
f_copy_node_1215(F->up, F->pat_2994, (*(P173)rt_nil_check(F->e_1220)).name_, &F->cn_2997);
f_task_spec_1120(F->up, F->cn_2997);
F->y_2998 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1220)).name_)));
if (((*(P173)rt_nil_check(F->gd_2993)).c_ == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1220)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the body of generic task ", 25), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1220)).tag_))), rt_g_lit(" is not given before this instantiation", 39)));
}
f_copy_node_1215(F->up, (*(P173)rt_nil_check(F->gd_2993)).c_, (*(P173)rt_nil_check(F->e_1220)).name_, &F->cn_2997);
f_task_body_1124(F->up, F->cn_2997);
}
f_close_scope_449(F->up);
f_define_447(F->up, F->y_2998, G_NV((*(P173)rt_nil_check(F->e_1220)).line_));
ret_:

  return;
}

static void f_predef_type_1226(struct f_greenc_1fr *up_, rt_gstr name_1222, P121 t_1223, rt_gstr lo_1224, rt_gstr hi_1225) {
  struct f_predef_type_1226fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1222 = cp_rt_gstr(name_1222);
F->t_1223 = t_1223;
F->lo_1224 = cp_rt_gstr(lo_1224);
F->hi_1225 = cp_rt_gstr(hi_1225);
F->y_3012 = NULL;
F->y_3012 = f_new_sym_452(F->up, ((rt_int)5LL), f_mk_221(F->up, F->name_1222));
(*(P116)rt_nil_check(F->y_3012)).t_ = F->t_1223;
if ((({ rt_gstr at3013 = F->lo_1224; at3013.hi >= at3013.lo ? at3013.hi - at3013.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
(*(P116)rt_nil_check(F->y_3012)).c_ = f_new_cons_455(F->up);
(*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_3012)).c_)).lo_ = f_mk_221(F->up, F->lo_1224);
(*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_3012)).c_)).hi_ = f_mk_221(F->up, F->hi_1225);
if (((({ rt_gstr at3014 = F->hi_1225; at3014.hi >= at3014.lo ? at3014.hi - at3014.lo + 1 : (rt_int)0; }) < ((rt_int)12LL)) && f_is_digit_228(F->up, G_NV(({ rt_gstr ix3018 = F->hi_1225; ix3018.p[rt_index(({ rt_gstr at3017 = F->hi_1225; at3017.lo; }), ix3018.lo, ix3018.hi) - ix3018.lo]; }))))) {
(*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_3012)).c_)).mlo_ = rt_int_of_str(rt_g_g2s(F->lo_1224));
(*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_3012)).c_)).mhi_ = rt_int_of_str(rt_g_g2s(F->hi_1225));
(*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_3012)).c_)).hasm_ = 1;
}
}
f_define_447(F->up, F->y_3012, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_const_1230(struct f_greenc_1fr *up_, rt_gstr name_1227, P121 t_1228, rt_gstr code_text_1229) {
  struct f_predef_const_1230fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1227 = cp_rt_gstr(name_1227);
F->t_1228 = t_1228;
F->code_text_1229 = cp_rt_gstr(code_text_1229);
F->y_3019 = NULL;
F->y_3019 = f_new_sym_452(F->up, ((rt_int)2LL), f_mk_221(F->up, F->name_1227));
(*(P116)rt_nil_check(F->y_3019)).t_ = F->t_1228;
(*(P116)rt_nil_check(F->y_3019)).ro_ = 1;
(*(P116)rt_nil_check(F->y_3019)).access_path_ = f_mk_221(F->up, F->code_text_1229);
f_define_447(F->up, F->y_3019, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_exc_1232(struct f_greenc_1fr *up_, rt_gstr name_1231) {
  struct f_predef_exc_1232fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1231 = cp_rt_gstr(name_1231);
F->y_3020 = NULL;
F->y_3020 = f_new_sym_452(F->up, ((rt_int)6LL), f_mk_221(F->up, F->name_1231));
(*(P116)rt_nil_check(F->y_3020)).cname_ = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_exc(", 7), f_q_239(F->up)), F->name_1231), f_q_239(F->up)), one_rt_gstr(41)));
f_define_447(F->up, F->y_3020, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_lit_1236(struct f_greenc_1fr *up_, rt_gstr name_1233, P121 t_1234, rt_int v_1235) {
  struct f_predef_lit_1236fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1233 = cp_rt_gstr(name_1233);
F->t_1234 = t_1234;
F->v_1235 = v_1235;
F->y_3021 = NULL;
F->y_3021 = f_new_sym_452(F->up, ((rt_int)7LL), f_mk_221(F->up, F->name_1233));
(*(P116)rt_nil_check(F->y_3021)).t_ = F->t_1234;
(*(P116)rt_nil_check(F->y_3021)).result_ = F->t_1234;
(*(P116)rt_nil_check(F->y_3021)).mvalue_ = F->v_1235;
(*(P116)rt_nil_check(F->y_3021)).hasmv_ = 1;
f_define_447(F->up, F->y_3021, ((rt_int)0LL));
ret_:

  return;
}

static void f_predefine_1237(struct f_greenc_1fr *up_) {
  struct f_predefine_1237fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->control_3022 = cp_rt_gstr(cat_rt_gstr(rt_g_lit("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE ", 60), rt_g_lit("DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US ", 55)));
F->start_3023 = INT64_MIN;
F->start_3023 = ((rt_int)1LL);
F->code_no_3024 = INT64_MIN;
F->code_no_3024 = ((rt_int)0LL);
f_predef_type_1226(F->up, rt_g_lit("INTEGER", 7), F->up->ty_int_155, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1226(F->up, rt_g_lit("SHORT_INTEGER", 13), F->up->ty_short_166, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1226(F->up, rt_g_lit("LONG_INTEGER", 12), F->up->ty_long_167, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1226(F->up, rt_g_lit("NATURAL", 7), F->up->ty_int_155, rt_g_lit("1", 1), rt_g_lit("INT64_MAX", 9));
f_predef_type_1226(F->up, rt_g_lit("PRIORITY", 8), F->up->ty_int_155, rt_g_lit("0", 1), rt_g_lit("255", 3));
f_predef_type_1226(F->up, rt_g_lit("BOOLEAN", 7), F->up->ty_bool_156, rt_g_lit("0", 1), rt_g_lit("1", 1));
f_predef_type_1226(F->up, rt_g_lit("CHARACTER", 9), F->up->ty_char_158, rt_g_lit("0", 1), rt_g_lit("127", 3));
f_predef_type_1226(F->up, rt_g_lit("STRING", 6), F->up->ty_string_159, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1226(F->up, rt_g_lit("FLOAT", 5), F->up->ty_float_157, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1226(F->up, rt_g_lit("SHORT_FLOAT", 11), F->up->ty_sfloat_168, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1226(F->up, rt_g_lit("LONG_FLOAT", 10), F->up->ty_lfloat_169, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1226(F->up, rt_g_lit("TIME", 4), F->up->ty_time_170, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_lit_1236(F->up, rt_g_lit("FALSE", 5), F->up->ty_bool_156, ((rt_int)0LL));
f_predef_lit_1236(F->up, rt_g_lit("TRUE", 4), F->up->ty_bool_156, ((rt_int)1LL));
{ rt_int lo3028 = ((rt_int)1LL), hi3029 = ({ rt_gstr at3026 = F->control_3022; at3026.hi >= at3026.lo ? at3026.hi - at3026.lo + 1 : (rt_int)0; });
for (rt_int it3030 = lo3028; it3030 <= hi3029; it3030++) {
F->i_3027 = it3030;
if ((G_NV(({ rt_gstr ix3031 = F->control_3022; ix3031.p[rt_index(F->i_3027, ix3031.lo, ix3031.hi) - ix3031.lo]; })) == 32)) {
f_predef_const_1230(F->up, ({ rt_gstr sl3033 = F->control_3022; rt_int l_ = G_NV(F->start_3023), h_ = rt_sub(F->i_3027, ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl3033.lo, sl3033.hi); rt_index(h_, sl3033.lo, sl3033.hi); } sl3033.p += l_ - sl3033.lo; sl3033.lo = l_; sl3033.hi = h_; sl3033; }), F->up->ty_char_158, rt_g_s2g(rt_str_of_int(G_NV(F->code_no_3024))));
F->code_no_3024 = rt_add(G_NV(F->code_no_3024), ((rt_int)1LL));
F->start_3023 = rt_add(F->i_3027, ((rt_int)1LL));
}
}
}
L_end_3025: ;
f_predef_const_1230(F->up, rt_g_lit("DEL", 3), F->up->ty_char_158, rt_g_lit("127", 3));
f_predef_const_1230(F->up, rt_g_lit("EXCLAM", 6), F->up->ty_char_158, rt_g_lit("33", 2));
f_predef_const_1230(F->up, rt_g_lit("DOLLAR", 6), F->up->ty_char_158, rt_g_lit("36", 2));
f_predef_const_1230(F->up, rt_g_lit("QUESTION", 8), F->up->ty_char_158, rt_g_lit("63", 2));
f_predef_const_1230(F->up, rt_g_lit("AT_SIGN", 7), F->up->ty_char_158, rt_g_lit("64", 2));
f_predef_const_1230(F->up, rt_g_lit("L_BRACKET", 9), F->up->ty_char_158, rt_g_lit("91", 2));
f_predef_const_1230(F->up, rt_g_lit("BACK_SLASH", 10), F->up->ty_char_158, rt_g_lit("92", 2));
f_predef_const_1230(F->up, rt_g_lit("R_BRACKET", 9), F->up->ty_char_158, rt_g_lit("93", 2));
f_predef_const_1230(F->up, rt_g_lit("CIRCUMFLEX", 10), F->up->ty_char_158, rt_g_lit("94", 2));
f_predef_const_1230(F->up, rt_g_lit("GRAVE", 5), F->up->ty_char_158, rt_g_lit("96", 2));
f_predef_const_1230(F->up, rt_g_lit("L_BRACE", 7), F->up->ty_char_158, rt_g_lit("123", 3));
f_predef_const_1230(F->up, rt_g_lit("R_BRACE", 7), F->up->ty_char_158, rt_g_lit("125", 3));
f_predef_const_1230(F->up, rt_g_lit("TILDE", 5), F->up->ty_char_158, rt_g_lit("126", 3));
{ rt_int lo3036 = ((rt_int)0LL), hi3037 = ((rt_int)25LL);
for (rt_int it3038 = lo3036; it3038 <= hi3037; it3038++) {
F->i_3035 = it3038;
f_predef_const_1230(F->up, cat_rt_gstr(rt_g_lit("LC_", 3), one_rt_gstr(rt_range((rt_add(((rt_int)66LL), F->i_3035) - 1), 0, 127))), F->up->ty_char_158, rt_g_s2g(rt_str_of_int(rt_add(((rt_int)97LL), F->i_3035))));
}
}
L_end_3034: ;
f_predef_const_1230(F->up, rt_g_lit("NEWLINE", 7), F->up->ty_string_159, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_lit(", 9), f_q_239(F->up)), rt_g_lit("\\n", 2)), f_q_239(F->up)), rt_g_lit(", 1)", 4)));
f_predef_const_1230(F->up, rt_g_lit("SECONDS", 7), F->up->ty_time_170, rt_g_lit("((double)RT_SECONDS)", 20));
f_predef_exc_1232(F->up, rt_g_lit("ACCESS_ERROR", 12));
f_predef_exc_1232(F->up, rt_g_lit("ASSERT_ERROR", 12));
f_predef_exc_1232(F->up, rt_g_lit("DISCRIMINANT_ERROR", 18));
f_predef_exc_1232(F->up, rt_g_lit("DIVIDE_ERROR", 12));
f_predef_exc_1232(F->up, rt_g_lit("FAILURE", 7));
f_predef_exc_1232(F->up, rt_g_lit("INDEX_ERROR", 11));
f_predef_exc_1232(F->up, rt_g_lit("INITIATE_ERROR", 14));
f_predef_exc_1232(F->up, rt_g_lit("NO_VALUE_ERROR", 14));
f_predef_exc_1232(F->up, rt_g_lit("OVERFLOW", 8));
f_predef_exc_1232(F->up, rt_g_lit("OVERLAP_ERROR", 13));
f_predef_exc_1232(F->up, rt_g_lit("RANGE_ERROR", 11));
f_predef_exc_1232(F->up, rt_g_lit("SELECT_ERROR", 12));
f_predef_exc_1232(F->up, rt_g_lit("STORAGE_OVERFLOW", 16));
f_predef_exc_1232(F->up, rt_g_lit("TASKING_ERROR", 13));
f_predef_exc_1232(F->up, rt_g_lit("UNDERFLOW", 9));
f_predef_exc_1232(F->up, rt_g_lit("END_OF_FILE", 11));
ret_:

  return;
}

static void f_translate_1239(struct f_greenc_1fr *up_, P173 u_1238) {
  struct f_translate_1239fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->u_1238 = u_1238;
F->p_3039 = NULL;
F->p_3039 = F->u_1238;
F->y_3040 = NULL;
f_open_scope_448(F->up);
while ((F->p_3039 != NULL)) {
if (((*(P173)rt_nil_check(F->p_3039)).next_ == NULL)) {
if (((G_NV((*(P173)rt_nil_check(F->p_3039)).kind_) != ((rt_int)44LL)) || ((*(P173)rt_nil_check(F->p_3039)).a_ != NULL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->p_3039)).line_), rt_g_lit("the main program is a procedure without parameters", 50));
}
f_build_subprogram_629(F->up, F->p_3039, &F->y_3040);
f_define_447(F->up, F->y_3040, G_NV((*(P173)rt_nil_check(F->p_3039)).line_));
f_subprogram_body_661(F->up, F->p_3039, F->y_3040);
F->up->main_name_215 = (*(P116)rt_nil_check(F->y_3040)).cname_;
} else {
f_decl_element_633(F->up, F->p_3039);
}
F->p_3039 = (*(P173)rt_nil_check(F->p_3039)).next_;
}
L_end_3041: ;
ret_:

  return;
}

static void f_print_program_1240(struct f_greenc_1fr *up_) {
  struct f_print_program_1240fr *F = rt_alloc(sizeof *F);
F->up = up_;
f_emit_helpers_613(F->up);
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
F->no_cons_204 = f_new_cons_455(F);
F->ty_int_155 = f_new_typ_454(F, ((rt_int)1LL));
F->ty_bool_156 = f_new_typ_454(F, ((rt_int)2LL));
F->ty_float_157 = f_new_typ_454(F, ((rt_int)3LL));
F->ty_char_158 = f_new_typ_454(F, ((rt_int)11LL));
F->ty_string_159 = f_new_typ_454(F, ((rt_int)6LL));
(*(P121)rt_nil_check(F->ty_string_159)).name_ = f_mk_221(F, rt_g_lit("STRING", 6));
(*(P121)rt_nil_check(F->ty_string_159)).cname_ = f_mk_221(F, rt_g_lit("rt_gstr", 7));
(*(P121)rt_nil_check(F->ty_string_159)).dims_ = ((rt_int)1LL);
(*(P121)rt_nil_check(F->ty_string_159)).elem_ = F->ty_char_158;
(*(P121)rt_nil_check(F->ty_string_159)).tcons_ = f_new_cons_455(F);
(*(P177)rt_nil_check((*(P121)rt_nil_check(F->ty_string_159)).tcons_)).lo_ = f_mk_221(F, rt_g_lit("1", 1));
F->ty_void_160 = f_new_typ_454(F, ((rt_int)9LL));
F->ty_nil_161 = f_new_typ_454(F, ((rt_int)10LL));
F->ty_act_163 = f_new_typ_454(F, ((rt_int)13LL));
F->ty_tdecl_164 = f_new_typ_454(F, ((rt_int)14LL));
F->ty_entry_165 = f_new_typ_454(F, ((rt_int)15LL));
(*(P121)rt_nil_check(F->ty_int_155)).name_ = f_mk_221(F, rt_g_lit("INTEGER", 7));
(*(P121)rt_nil_check(F->ty_string_159)).idx_ = F->ty_int_155;
(*(P121)rt_nil_check(F->ty_string_159)).next_ = F->all_types_123;
F->all_types_123 = F->ty_string_159;
(*(P121)rt_nil_check(F->ty_float_157)).name_ = f_mk_221(F, rt_g_lit("FLOAT", 5));
(*(P121)rt_nil_check(F->ty_float_157)).ndigits_ = ((rt_int)15LL);
F->ty_short_166 = f_new_typ_454(F, ((rt_int)1LL));
(*(P121)rt_nil_check(F->ty_short_166)).name_ = f_mk_221(F, rt_g_lit("SHORT_INTEGER", 13));
F->ty_long_167 = f_new_typ_454(F, ((rt_int)1LL));
(*(P121)rt_nil_check(F->ty_long_167)).name_ = f_mk_221(F, rt_g_lit("LONG_INTEGER", 12));
F->ty_sfloat_168 = f_new_typ_454(F, ((rt_int)3LL));
(*(P121)rt_nil_check(F->ty_sfloat_168)).name_ = f_mk_221(F, rt_g_lit("SHORT_FLOAT", 11));
(*(P121)rt_nil_check(F->ty_sfloat_168)).ndigits_ = ((rt_int)6LL);
F->ty_lfloat_169 = f_new_typ_454(F, ((rt_int)3LL));
(*(P121)rt_nil_check(F->ty_lfloat_169)).name_ = f_mk_221(F, rt_g_lit("LONG_FLOAT", 10));
(*(P121)rt_nil_check(F->ty_lfloat_169)).ndigits_ = ((rt_int)15LL);
F->ty_time_170 = f_new_typ_454(F, ((rt_int)3LL));
(*(P121)rt_nil_check(F->ty_time_170)).name_ = f_mk_221(F, rt_g_lit("TIME", 4));
(*(P121)rt_nil_check(F->ty_time_170)).ndigits_ = ((rt_int)15LL);
F->ty_ufixed_171 = f_new_typ_454(F, ((rt_int)16LL));
(*(P121)rt_nil_check(F->ty_ufixed_171)).name_ = f_mk_221(F, rt_g_lit("universal fixed", 15));
F->out_awaits_203 = f_new_buffer_243(F);
f_predefine_1237(F);
f_read_source_292(F);
f_compilation_405(F, &F->units_205);
if ((F->units_205 == NULL)) {
f_fail_242(F, ((rt_int)1LL), rt_g_lit("the compilation is empty", 24));
}
f_translate_1239(F, F->units_205);
f_print_program_1240(F);
ret_:

  return;
}

static void as_A2471(A2471 *d, A2471 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2471 cp_A2471(A2471 s) {
  A2471 d = s; d.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2471(A2471 a, A2471 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2471 cat_A2471(A2471 a, A2471 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2471 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2471 one_A2471(rt_int e) {
  A2471 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int)); r.p[0] = e;
  return r;
}
static void as_A2468(A2468 *d, A2468 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2468 cp_A2468(A2468 s) {
  A2468 d = s; d.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2468(A2468 a, A2468 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2468 cat_A2468(A2468 a, A2468 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2468 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2468 one_A2468(rt_int e) {
  A2468 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int)); r.p[0] = e;
  return r;
}
static void as_A2463(A2463 *d, A2463 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2463 cp_A2463(A2463 s) {
  A2463 d = s; d.p = rt_alloc(sizeof(int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2463(A2463 a, A2463 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2463 and_A2463(A2463 a, A2463 b) { A2463 r = cp_A2463(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, "array length"); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] && b.p[i]; return r; }
static A2463 or_A2463(A2463 a, A2463 b) { A2463 r = cp_A2463(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, "array length"); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] || b.p[i]; return r; }
static A2463 xor_A2463(A2463 a, A2463 b) { A2463 r = cp_A2463(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, "array length"); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] != b.p[i]; return r; }
static A2463 not_A2463(A2463 a) { A2463 r = cp_A2463(a); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = !a.p[i]; return r; }
static A2463 cat_A2463(A2463 a, A2463 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2463 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2463 one_A2463(int e) {
  A2463 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(int)); r.p[0] = e;
  return r;
}
static void as_A2140(A2140 *d, A2140 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2140 cp_A2140(A2140 s) {
  A2140 d = s; d.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2140(A2140 a, A2140 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2140 cat_A2140(A2140 a, A2140 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2140 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2140 one_A2140(rt_int e) {
  A2140 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int)); r.p[0] = e;
  return r;
}
static void as_R1893(R1893 *d, R1893 s) {
  d->disc_ = s.disc_;
  d->arm_ = s.arm_;
  d->variant_ = s.variant_;
  d->next_ = s.next_;
}
static R1893 cp_R1893(R1893 s) {
  R1893 d = s;
  d.disc_ = s.disc_;
  d.arm_ = s.arm_;
  d.variant_ = s.variant_;
  d.next_ = s.next_;
  return d;
}
static int eq_R1893(R1893 a, R1893 b) {
  return 1 && (a.disc_ == b.disc_) && (a.arm_ == b.arm_) && (a.variant_ == b.variant_) && (a.next_ == b.next_);
}
static void as_R1772(R1772 *d, R1772 s) {
  d->name_ = s.name_;
  d->v_ = s.v_;
  d->next_ = s.next_;
}
static R1772 cp_R1772(R1772 s) {
  R1772 d = s;
  d.name_ = s.name_;
  d.v_ = s.v_;
  d.next_ = s.next_;
  return d;
}
static int eq_R1772(R1772 a, R1772 b) {
  return 1 && (a.name_ == b.name_) && (a.v_ == b.v_) && (a.next_ == b.next_);
}
static void as_R1768(R1768 *d, R1768 s) {
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
static R1768 cp_R1768(R1768 s) {
  R1768 d = s;
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
static int eq_R1768(R1768 a, R1768 b) {
  return 1 && (a.name_ == b.name_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.next_ == b.next_) && (a.dflt_ == b.dflt_) && (a.is_const_ == b.is_const_) && (a.is_discr_ == b.is_discr_) && (a.dsym_ == b.dsym_) && (a.guard_ == b.guard_) && (a.cond_ == b.cond_) && (a.dyn_ == b.dyn_);
}
static void as_R1753(R1753 *d, R1753 s) {
  d->name_ = s.name_;
  d->mode_ = s.mode_;
  d->t_ = s.t_;
  d->c_ = s.c_;
  d->cfield_ = s.cfield_;
  d->dflt_ = s.dflt_;
  d->next_ = s.next_;
}
static R1753 cp_R1753(R1753 s) {
  R1753 d = s;
  d.name_ = s.name_;
  d.mode_ = s.mode_;
  d.t_ = s.t_;
  d.c_ = s.c_;
  d.cfield_ = s.cfield_;
  d.dflt_ = s.dflt_;
  d.next_ = s.next_;
  return d;
}
static int eq_R1753(R1753 a, R1753 b) {
  return 1 && (a.name_ == b.name_) && (a.mode_ == b.mode_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.cfield_ == b.cfield_) && (a.dflt_ == b.dflt_) && (a.next_ == b.next_);
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
