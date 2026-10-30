#include "paleo.h"
#include <math.h>
typedef struct R108 R108;
typedef struct R108 *P107;
typedef struct A106 A106;
struct A106 { rt_int lo, hi, lo2, hi2; P107 *p; };
typedef struct R115 R115;
typedef struct R115 *P114;
typedef struct A113 A113;
struct A113 { rt_int lo, hi, lo2, hi2; P114 *p; };
typedef struct R120 R120;
typedef struct R120 *P119;
typedef struct R124 R124;
typedef struct R124 *P123;
typedef rt_gstr *P137;
typedef struct R141 R141;
typedef struct R141 *P140;
typedef struct R144 R144;
typedef struct R144 *P143;
typedef struct R149 R149;
typedef struct R149 *P148;
typedef struct R172 R172;
typedef struct R172 *P171;
typedef struct R176 R176;
typedef struct R176 *P175;
typedef struct A180 A180;
struct A180 { rt_int lo, hi, lo2, hi2; P137 *p; };
typedef struct A182 A182;
struct A182 { rt_int lo, hi, lo2, hi2; rt_int *p; };
struct R124 { int dummy_; P148 head_; P148 tail_; };
struct R149 { int dummy_; P137 s_; P148 next_; };
struct R108 { int dummy_; rt_int kind_; rt_int line_; rt_int ival_; P137 s_; };
struct R172 { int dummy_; rt_int kind_; rt_int line_; rt_int ival_; rt_int flag_; P137 name_; P137 tag_; P171 a_; P171 b_; P171 c_; P171 d_; P171 e_; P171 next_; P137 formal_; };
typedef struct R1696 R1696;
typedef struct R1696 *P1695;
struct R115 { int dummy_; rt_int kind_; P137 name_; P119 t_; P175 c_; P137 access_path_; P137 cname_; int ro_; rt_int mvalue_; int hasmv_; P171 decl_; P1695 params_; P119 result_; rt_int depth_; rt_int level_; int byref_; int vrp_; int hidden_; int from_use_; P114 members_; P114 mnext_; P114 chain_; P114 stack_; rt_int flags_; };
typedef struct R1711 R1711;
typedef struct R1711 *P1710;
struct R120 { int dummy_; rt_int kind_; P137 name_; P171 lits_; P119 elem_; P119 idx_; P175 elemcons_; P175 tcons_; P1710 fields_; P119 target_; P171 decl_; P137 cname_; int forward_; int defined_; int priv_; P119 next_; P119 idx2_; P137 littab_; P119 parent_; rt_int ndigits_; P137 fdelta_; P137 fsmall_; rt_int dims_; int is_restricted_; };
typedef struct R1715 R1715;
typedef struct R1715 *P1714;
struct R176 { int dummy_; P137 lo_; P137 hi_; P137 slen_; rt_int mlo_; rt_int mhi_; int hasm_; P137 lo2_; P137 hi2_; P137 acc_; P175 inner_; P1714 dv_; };
struct R1715 { int dummy_; P137 name_; P137 v_; P1714 next_; };
struct R1696 { int dummy_; P137 name_; rt_int mode_; P119 t_; P175 c_; P137 cfield_; P171 dflt_; P1695 next_; };
typedef struct R1836 R1836;
typedef struct R1836 *P1835;
struct R1836 { int dummy_; P137 disc_; P171 arm_; P171 variant_; P1835 next_; };
struct R1711 { int dummy_; P137 name_; P119 t_; P175 c_; P1710 next_; P171 dflt_; int is_const_; int is_discr_; P114 dsym_; P1835 guard_; P137 cond_; int dyn_; };
struct R141 { int dummy_; P137 match_; P137 label_; rt_int depth_; int is_loop_; P140 next_; };
typedef struct A2325 A2325;
struct A2325 { rt_int lo, hi, lo2, hi2; int *p; };
typedef struct A2330 A2330;
struct A2330 { rt_int lo, hi, lo2, hi2; rt_int *p; };
typedef struct A2333 A2333;
struct A2333 { rt_int lo, hi, lo2, hi2; rt_int *p; };
struct R144 { int dummy_; P171 body_node_; P114 visible_; P143 next_; };
struct f_mk_211fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_210;
 P137 result_;
 rt_gstr r_1188;
};
struct f_new_name_214fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_212;
 P137 *res_213;
};
struct f_is_letter_216fr { int dummy;
 struct f_greenc_1fr *up;
 int c_215;
 int result_;
};
struct f_is_digit_218fr { int dummy;
 struct f_greenc_1fr *up;
 int c_217;
 int result_;
};
struct f_upper_220fr { int dummy;
 struct f_greenc_1fr *up;
 int c_219;
 int result_;
};
struct f_lower_s_222fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_221;
 rt_gstr result_;
 rt_gstr r_1192;
 rt_int i_1195;
};
struct f_upper_s_224fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_223;
 rt_gstr result_;
 rt_gstr r_1203;
 rt_int i_1206;
};
struct f_is_operator_226fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_225;
 int result_;
};
struct f_c_field_228fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_227;
 rt_gstr result_;
};
struct f_q_229fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr result_;
};
struct f_fail_232fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int line_230;
 rt_gstr msg_231;
};
struct f_new_buffer_233fr { int dummy;
 struct f_greenc_1fr *up;
 P123 result_;
};
struct f_put_to_236fr { int dummy;
 struct f_greenc_1fr *up;
 P123 b_234;
 rt_gstr s_235;
 P148 l_1215;
};
struct f_emit_238fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_237;
};
struct f_print_buffer_240fr { int dummy;
 struct f_greenc_1fr *up;
 P123 b_239;
 P148 l_1218;
};
struct f_splice_243fr { int dummy;
 struct f_greenc_1fr *up;
 P123 a_241;
 P123 b_242;
};
struct f_is_reserved_245fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_244;
 int result_;
};
struct f_add_token_249fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_246;
 rt_gstr s_247;
 rt_int ival_248;
};
struct f_digit_value_251fr { int dummy;
 struct f_greenc_1fr *up;
 int c_250;
 rt_int result_;
};
struct f_digit_in_254fr { int dummy;
 struct f_greenc_1fr *up;
 int c_252;
 rt_int base_253;
 rt_int result_;
 rt_int d_1226;
};
struct f_accumulate_258fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int *v_255;
 rt_int base_256;
 rt_int d_257;
};
struct f_lex_line_260fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr line_259;
 rt_int i_1227;
 rt_int j_1228;
 rt_int n_1229;
 int c_1231;
 int quote_1232;
 rt_int v_1233;
 rt_int d_1234;
 rt_gstr buf_1235;
 rt_int bl_1237;
 rt_int base_1279;
 rt_gstr two_1323;
};
struct f_exponent_ahead_263fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr line_261;
 rt_int j_262;
 int result_;
};
struct f_exponent_268fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr line_264;
 rt_int *j_265;
 rt_gstr *buf_266;
 rt_int *bl_267;
};
struct f_include_open_271fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_269;
 rt_int *length_270;
};
struct f_include_char_274fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int i_272;
 int *c_273;
};
struct f_check_include_275fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int n_1370;
};
struct f_include_text_277fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int n_276;
 rt_gstr t_1381;
 rt_int saved_line_1383;
 rt_int from_1384;
 rt_int k_1386;
 rt_int k_1393;
};
struct f_include_line_281fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr t_278;
 rt_int from_279;
 rt_int to_280;
 rt_gstr l_1398;
 rt_int k_1401;
};
struct f_read_source_282fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr buf_1407;
 rt_int bl_1409;
 int c_1410;
};
struct f_nn_285fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_283;
 rt_int line_284;
 P171 result_;
};
struct f_append_289fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *head_286;
 P171 *tail_287;
 P171 x_288;
};
struct f_list_len_291fr { int dummy;
 struct f_greenc_1fr *up;
 P171 l_290;
 rt_int result_;
 rt_int n_1422;
 P171 p_1423;
};
struct f_cur_line_292fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int result_;
};
struct f_at_kw_294fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_293;
 int result_;
};
struct f_at_op_296fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_295;
 int result_;
};
struct f_at_kind_298fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_297;
 int result_;
};
struct f_kind_at_300fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_299;
 rt_int result_;
};
struct f_text_at_302fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_301;
 rt_gstr result_;
};
struct f_perror_304fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr msg_303;
};
struct f_skip_305fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_expect_kw_307fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_306;
};
struct f_expect_op_309fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_308;
};
struct f_expect_id_311fr { int dummy;
 struct f_greenc_1fr *up;
 P137 *res_310;
};
struct f_name_node_313fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_312;
 P171 x_1438;
};
struct f_id_list_315fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_314;
 P171 head_1439;
 P171 tail_1440;
 P171 x_1441;
};
struct f_binop_320fr { int dummy;
 struct f_greenc_1fr *up;
 P137 op_316;
 P171 l_317;
 P171 r_318;
 rt_int line_319;
 P171 result_;
 P171 x_1443;
};
struct f_expr_322fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_321;
 P171 l_1444;
 P171 r_1445;
 P137 op_1446;
 P137 first_op_1447;
 rt_int line_1448;
 int short_1449;
 int first_short_1450;
};
struct f_is_rel_324fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_323;
 int result_;
};
struct f_relation_326fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_325;
 P171 l_1453;
 P171 r_1454;
 P171 lo_1455;
 P171 hi_1456;
 P171 t_1457;
 P137 op_1458;
 rt_int line_1459;
 int neg_1460;
};
struct f_path_of_328fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_327;
 rt_gstr result_;
};
struct f_simple_expr_330fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_329;
 P171 l_1464;
 P171 r_1465;
 P137 op_1466;
 rt_int line_1467;
};
struct f_term_332fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_331;
 P171 l_1471;
 P171 r_1472;
 P137 op_1473;
 rt_int line_1474;
};
struct f_factor_334fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_333;
 P171 l_1477;
 P171 r_1478;
 P137 op_1479;
 rt_int line_1480;
};
struct f_primary_336fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_335;
 P171 x_1482;
 rt_int line_1483;
};
struct f_agg_or_paren_338fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_337;
 rt_int line_1488;
 P171 items_1489;
 P171 itail_1490;
 P171 it_1491;
 P171 first_1492;
 P171 keys_1493;
 P171 ktail_1494;
 P171 lab_1495;
 P171 x_1496;
 int more_1497;
};
struct f_choice_token_340fr { int dummy;
 struct f_greenc_1fr *up;
 P107 t_339;
 int result_;
};
struct f_aggregate_ahead_341fr { int dummy;
 struct f_greenc_1fr *up;
 int result_;
 rt_int d_1500;
 rt_int k_1501;
 P107 t_1504;
};
struct f_name_p_343fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_342;
 P171 p_1506;
 P171 x_1507;
 P171 args_1508;
 P171 atail_1509;
 P171 lo_1510;
 P171 r_1511;
 rt_int line_1512;
 int more_1513;
 P137 formal_1517;
 rt_int mark_1518;
};
struct f_component_list_345fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_344;
 P171 comps_1521;
 P171 ctail_1522;
 P171 names_1523;
 P171 st_1524;
 P171 def_1525;
 P171 cm_1526;
 P171 v_1527;
 P171 arm_1528;
 P171 atail_1529;
 P171 labs_1530;
 P171 ltail_1531;
 P171 l_1532;
 int is_c_1533;
};
struct f_discrete_range_p_347fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_346;
 P171 lo_1538;
 P171 r_1539;
 rt_int line_1540;
};
struct f_subtype_ind_349fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_348;
 P137 f_1541;
 P171 x_1542;
 P171 r_1543;
 P171 args_1544;
 P171 atail_1545;
 P171 lo_1546;
 rt_int line_1547;
 int more_1548;
};
struct f_type_spec_351fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_350;
 P171 x_1551;
};
struct f_type_def_353fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_352;
 P171 x_1552;
 P171 lits_1553;
 P171 ltail_1554;
 P171 l_1555;
 P171 idx_1556;
 P171 itail_1557;
 P171 r_1558;
 P171 comps_1559;
 P171 ctail_1560;
 P171 names_1561;
 P171 st_1562;
 P171 def_1563;
 P171 cm_1564;
 rt_int line_1565;
 int more_1566;
};
struct f_pragma_p_355fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_354;
 P171 x_1570;
 P171 a_1571;
 P171 head_1572;
 P171 tail_1573;
};
struct f_check_pragma_357fr { int dummy;
 struct f_greenc_1fr *up;
 P171 x_356;
 rt_gstr p_1575;
 rt_int n_1576;
 P171 a_1577;
};
struct f_skip_visibility_358fr { int dummy;
 struct f_greenc_1fr *up;
 P171 names_1579;
};
struct f_skip_representation_359fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_decl_part_361fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_360;
 P171 head_1583;
 P171 tail_1584;
 P171 x_1585;
 P171 names_1586;
};
struct f_object_decl_363fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_362;
 P171 head_1588;
 P171 tail_1589;
 P171 names_1590;
 P171 st_1591;
 P171 init_1592;
 P171 x_1593;
 rt_int line_1594;
 int is_const_1595;
};
struct f_type_decl_365fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_364;
 P171 x_1598;
 rt_int line_1599;
};
struct f_formal_part_367fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_366;
 P171 head_1600;
 P171 tail_1601;
 P171 names_1602;
 P171 st_1603;
 P171 def_1604;
 P171 p_1605;
 rt_int mode_1606;
 int more_1607;
};
struct f_designator_369fr { int dummy;
 struct f_greenc_1fr *up;
 P137 *res_368;
};
struct f_subprogram_371fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_370;
 P171 x_1614;
 rt_int line_1615;
 int is_proc_1616;
};
struct f_body_part_373fr { int dummy;
 struct f_greenc_1fr *up;
 P171 x_372;
};
struct f_parse_handlers_375fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_374;
 P171 head_1618;
 P171 tail_1619;
 P171 h_1620;
 P171 names_1621;
 P171 ntail_1622;
 P171 n_1623;
};
struct f_package_p_377fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_376;
 P171 x_1627;
 rt_int line_1628;
};
struct f_at_statements_end_378fr { int dummy;
 struct f_greenc_1fr *up;
 int result_;
};
struct f_statements_380fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_379;
 P171 head_1629;
 P171 tail_1630;
 P171 x_1631;
};
struct f_statement_382fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_381;
 P171 x_1633;
 P171 t_1634;
 rt_int line_1635;
 P137 label_1636;
};
struct f_task_statement_384fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_383;
};
struct f_if_stmt_386fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_385;
 P171 x_1639;
 P171 arm_1640;
 P171 head_1641;
 P171 tail_1642;
 int go_1643;
};
struct f_case_stmt_388fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_387;
 P171 x_1645;
 P171 arm_1646;
 P171 head_1647;
 P171 tail_1648;
 P171 labs_1649;
 P171 ltail_1650;
 P171 l_1651;
 int others_arm_1652;
};
struct f_loop_stmt_390fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_389;
 P171 x_1655;
 P171 r_1656;
 rt_int line_1657;
};
struct f_compilation_392fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_391;
 P171 head_1658;
 P171 tail_1659;
 P171 x_1660;
};
struct f_hash_394fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_393;
 rt_int result_;
 rt_int h_1662;
 rt_int i_1665;
};
struct f_lookup_396fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_395;
 P114 result_;
 P114 y_1670;
};
struct f_same_task_399fr { int dummy;
 struct f_greenc_1fr *up;
 P114 a_397;
 P114 b_398;
 int result_;
};
struct f_lookup_entry_402fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_400;
 P114 owner_401;
 P114 result_;
 P114 y_1673;
};
struct f_lookup_at_405fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_403;
 rt_int d_404;
 P114 result_;
 P114 y_1676;
};
struct f_enclosing_depth_407fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_406;
 rt_int result_;
 rt_int i_1680;
};
struct f_push_unit_409fr { int dummy;
 struct f_greenc_1fr *up;
 P137 name_408;
};
struct f_lookup_decl_411fr { int dummy;
 struct f_greenc_1fr *up;
 P171 d_410;
 P114 result_;
 P114 y_1688;
};
struct f_overloadable_413fr { int dummy;
 struct f_greenc_1fr *up;
 P114 y_412;
 int result_;
};
struct f_same_416fr { int dummy;
 struct f_greenc_1fr *up;
 P119 a_414;
 P119 b_415;
 int result_;
};
struct f_root_418fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_417;
 P119 result_;
 P119 r_1691;
};
struct f_derived_from_421fr { int dummy;
 struct f_greenc_1fr *up;
 P119 a_419;
 P119 b_420;
 int result_;
 P119 r_1693;
};
struct f_is_numeric_423fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_422;
 int result_;
};
struct f_is_discrete_425fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_424;
 int result_;
};
struct f_same_signature_428fr { int dummy;
 struct f_greenc_1fr *up;
 P1695 a_426;
 P1695 b_427;
 int result_;
 P1695 x_1697;
 P1695 y_1698;
};
struct f_distinct_overload_431fr { int dummy;
 struct f_greenc_1fr *up;
 P114 y_429;
 P114 z_430;
 int result_;
};
struct f_define_434fr { int dummy;
 struct f_greenc_1fr *up;
 P114 y_432;
 rt_int line_433;
 rt_int h_1700;
 P114 z_1701;
};
struct f_open_scope_435fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_close_scope_436fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_new_sym_439fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_437;
 P137 name_438;
 P114 result_;
};
struct f_new_typ_441fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_440;
 P119 result_;
};
struct f_new_cons_442fr { int dummy;
 struct f_greenc_1fr *up;
 P175 result_;
};
struct f_bounded_444fr { int dummy;
 struct f_greenc_1fr *up;
 P175 c_443;
 int result_;
};
struct f_bounded_hi_446fr { int dummy;
 struct f_greenc_1fr *up;
 P175 c_445;
 int result_;
};
struct f_static_bounds_448fr { int dummy;
 struct f_greenc_1fr *up;
 P175 c_447;
 int result_;
};
struct f_discriminated_450fr { int dummy;
 struct f_greenc_1fr *up;
 P175 c_449;
 int result_;
};
struct f_kind_name_452fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_451;
 rt_gstr result_;
};
struct f_check_type_456fr { int dummy;
 struct f_greenc_1fr *up;
 P119 got_453;
 P119 want_454;
 rt_int line_455;
};
struct f_field_count_458fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_457;
 rt_int result_;
 rt_int n_1719;
 P1710 f_1720;
};
struct f_ctype_461fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_459;
 P137 *r_460;
 P137 s_1722;
};
struct f_field_decls_464fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_462;
 P137 *r_463;
 P1710 f_1724;
 P137 s_1725;
 P137 ct_1726;
};
struct f_declare_ctype_466fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_465;
 P137 ct_1728;
 P137 s_1729;
 P119 target_1730;
};
struct f_lit_index_469fr { int dummy;
 struct f_greenc_1fr *up;
 P171 lits_467;
 rt_gstr name_468;
 rt_int result_;
 rt_int i_1731;
 P171 l_1732;
};
struct f_manifest_473fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_470;
 rt_int *v_471;
 int *ok_472;
 rt_int a_1734;
 rt_int b_1735;
 int ok2_1736;
 P114 y_1737;
};
struct f_resolve_477fr { int dummy;
 struct f_greenc_1fr *up;
 P171 st_474;
 P119 *t_475;
 P175 *c_476;
 P114 y_1738;
 P119 dummy_1739;
 P137 code_1740;
 int ok_1741;
 P171 r_1742;
};
struct f_constraint_list_481fr { int dummy;
 struct f_greenc_1fr *up;
 P171 st_478;
 P119 t_479;
 P175 c_480;
 P171 r_1743;
 P119 arrt_1744;
 P175 cc_1745;
 P119 it_1746;
};
struct f_discriminant_constraint_485fr { int dummy;
 struct f_greenc_1fr *up;
 P171 st_482;
 P119 t_483;
 P175 c_484;
 P171 a_1748;
 P1710 f_1749;
 P119 vt_1750;
 P137 v_1751;
 P1714 d_1752;
 P1714 tail_1753;
};
struct f_discrete_bounds_491fr { int dummy;
 struct f_greenc_1fr *up;
 P171 r_486;
 P119 want_487;
 P119 *t_488;
 P137 *lo_489;
 P137 *hi_490;
 P175 c_1761;
 P114 y_1762;
};
struct f_range_of_495fr { int dummy;
 struct f_greenc_1fr *up;
 P171 r_492;
 P119 t_493;
 P175 c_494;
 P119 dummy_1763;
 int ok_1764;
};
struct f_fresh_typ_499fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_496;
 P137 name_497;
 P119 *t_498;
 P119 ph_1765;
};
struct f_inherit_503fr { int dummy;
 struct f_greenc_1fr *up;
 P119 parent_500;
 P119 t_501;
 rt_int line_502;
 P114 s_1766;
 P114 z_1767;
 P1695 p_1768;
 P1695 q_1769;
 P1695 tail_1770;
 int uses_1771;
 P114 news_1772;
};
struct f_derive_literals_506fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_504;
 rt_int line_505;
 P171 l_1779;
 rt_int n_1780;
 P114 y_1781;
};
struct f_type_definition_511fr { int dummy;
 struct f_greenc_1fr *up;
 P171 d_507;
 P137 name_508;
 P119 *t_509;
 P175 *c_510;
 P119 dummy_1783;
 P119 it_1784;
 P175 ic_1785;
 P171 l_1786;
 P171 comp_1787;
 P1710 f_1788;
 P1710 tail_1789;
 int ok_1790;
 rt_int n_1791;
 P114 y_1792;
};
struct f_array_type_518fr { int dummy;
 struct f_greenc_1fr *up;
 P171 idx_512;
 P171 comp_513;
 P137 name_514;
 rt_int line_515;
 P119 *t_516;
 P175 *c_517;
 P171 l_1796;
 P175 rowc_1797;
 P175 ic_1798;
 P119 it_1799;
};
struct f_static_range_522fr { int dummy;
 struct f_greenc_1fr *up;
 P171 l_519;
 P171 h_520;
 P175 c_521;
 int ok_1800;
 int ok2_1801;
};
struct f_component_place_528fr { int dummy;
 struct f_greenc_1fr *up;
 P119 rt_523;
 P1710 f_524;
 rt_gstr a_525;
 rt_gstr ct_526;
 P137 *r_527;
 P137 bits_1804;
};
struct f_no_value_530fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_529;
 rt_gstr result_;
};
struct f_elem_ctype_533fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_531;
 P137 *r_532;
};
struct f_first_index_536fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_534;
 P137 *r_535;
};
struct f_is_string_538fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_537;
 int result_;
};
struct f_subst_541fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_539;
 rt_gstr r_540;
 rt_gstr result_;
 rt_int i_1808;
};
struct f_mentions_record_543fr { int dummy;
 struct f_greenc_1fr *up;
 P137 s_542;
 int result_;
 rt_int i_1822;
};
struct f_subst_cons_547fr { int dummy;
 struct f_greenc_1fr *up;
 P175 c_544;
 rt_gstr r_545;
 P175 *res_546;
};
struct f_remove_sym_549fr { int dummy;
 struct f_greenc_1fr *up;
 P114 y_548;
 rt_int h_1828;
 P114 p_1829;
};
struct f_record_components_554fr { int dummy;
 struct f_greenc_1fr *up;
 P171 list_550;
 P119 t_551;
 P1835 g_552;
 rt_int line_553;
 P171 comp_1837;
 P1710 f_1838;
 P1710 tail_1839;
 P1710 df_1840;
 P171 prev_1841;
 P119 pt_1842;
 P119 vt_1843;
 P175 pc_1844;
 P114 y_1845;
 P137 acc_1846;
 P137 v_1847;
 P137 x_1848;
 P171 arm_1849;
 P1835 g2_1850;
};
struct f_guard_cond_558fr { int dummy;
 struct f_greenc_1fr *up;
 P1835 g_555;
 P119 t_556;
 P137 *r_557;
 P171 a_1860;
 P171 l_1861;
 P1710 df_1862;
 P137 x_1863;
 P137 d_1864;
 P119 dt_1865;
 P119 vt_1866;
 P137 lo_1867;
 P137 hi_1868;
};
struct f_arm_test_563fr { int dummy;
 struct f_greenc_1fr *up;
 P171 arm_559;
 P137 dname_560;
 rt_gstr d_561;
 P137 *x_562;
 P171 l_1870;
 P114 y_1871;
 P119 dt_1872;
 P119 vt_1873;
 P137 lo_1874;
 P137 hi_1875;
};
struct f_derived_type_568fr { int dummy;
 struct f_greenc_1fr *up;
 P171 d_564;
 P137 name_565;
 P119 *t_566;
 P175 *c_567;
 P119 pt_1877;
 P137 ct_1878;
 P119 ph_1879;
};
struct f_real_type_573fr { int dummy;
 struct f_greenc_1fr *up;
 P171 d_569;
 P137 name_570;
 P119 *t_571;
 P175 *c_572;
 P119 dt_1880;
 P137 dv_1881;
 rt_int n_1882;
 int ok_1883;
};
struct f_finish_ptr_575fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_574;
 P175 c_1884;
};
struct f_init_storage_579fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lval_576;
 P119 t_577;
 P175 c_578;
 P175 ec_1885;
 P175 fc_1886;
 P1714 d_1887;
 P137 ct_1888;
 P137 i_1889;
 P137 v_1890;
 P137 x_1891;
 P119 vt_1892;
 P1710 f_1893;
};
struct f_composite_581fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_580;
 int result_;
};
struct f_assign_code_587fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lval_582;
 P119 t_583;
 rt_gstr v_584;
 P175 c_585;
 P137 *r_586;
 P137 ct_1897;
 P137 x_1898;
 P1714 d_1899;
};
struct f_copy_code_591fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_588;
 rt_gstr v_589;
 P137 *r_590;
 P137 ct_1901;
};
struct f_eq_code_596fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_592;
 rt_gstr a_593;
 rt_gstr b_594;
 P137 *r_595;
 P137 ct_1902;
};
struct f_seen_name_599fr { int dummy;
 struct f_greenc_1fr *up;
 P148 l_597;
 rt_gstr s_598;
 int result_;
 P148 p_1903;
};
struct f_emit_helpers_600fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_1905;
 P137 et_1906;
 P148 done_1907;
 P148 l_1908;
};
struct f_helper_bodies_602fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_601;
 P137 c_1912;
 P123 b_1913;
 P137 ct_1914;
 P137 et_1915;
 P137 x_1916;
 P137 y_1917;
 P137 conds_1918;
 P1710 f_1919;
};
struct f_storage_606fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_603;
 P119 t_604;
 P137 *access_code_605;
 P137 ct_1922;
 P137 g_1923;
};
struct f_bind_609fr { int dummy;
 struct f_greenc_1fr *up;
 P114 y_607;
 P137 access_code_608;
};
struct f_declare_subprograms_611fr { int dummy;
 struct f_greenc_1fr *up;
 P171 from_610;
 P171 e_1924;
};
struct f_declare_one_613fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_612;
 P114 y_1926;
 P114 z_1927;
};
struct f_build_subprogram_616fr { int dummy;
 struct f_greenc_1fr *up;
 P171 d_614;
 P114 *y_615;
 P171 p_1931;
 P1695 pm_1932;
 P1695 tail_1933;
 P175 rc_1934;
 rt_int k_1935;
};
struct f_decl_elements_618fr { int dummy;
 struct f_greenc_1fr *up;
 P171 decls_617;
 P171 e_1939;
 int declared_1940;
};
struct f_decl_element_620fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_619;
 P171 pd_1942;
 P114 y_1943;
 P114 z_1944;
 P119 t_1945;
 P119 vt_1946;
 P175 c_1947;
 P137 acc_1948;
 P137 v_1949;
 P137 x_1950;
 int ok_1951;
};
struct f_pragma_decl_622fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_621;
};
struct f_resolve_object_type_626fr { int dummy;
 struct f_greenc_1fr *up;
 P171 st_623;
 P119 *t_624;
 P175 *c_625;
};
struct f_other_decl_628fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_627;
};
struct f_is_foreign_630fr { int dummy;
 struct f_greenc_1fr *up;
 P171 d_629;
 int result_;
};
struct f_subprogram_body_633fr { int dummy;
 struct f_greenc_1fr *up;
 P171 d_631;
 P114 y_632;
 P123 saved_code_1953;
 P123 saved_fields_1954;
 int saved_in_1955;
 P114 saved_sym_1956;
 P140 saved_exits_1957;
 rt_int saved_frames_1958;
 P148 saved_handlers_1959;
 P148 saved_cleanups_1960;
 P114 saved_pure_1961;
 P137 aw_1962;
 rt_int saved_pdepth_1963;
 P137 args_1964;
 P137 head_1965;
 P137 frame_1966;
 P137 parent_1967;
 P137 ct_1968;
 P137 x_1969;
 P1695 pm_1970;
 P114 p_1971;
};
struct f_gen_statements_635fr { int dummy;
 struct f_greenc_1fr *up;
 P171 stmts_634;
 P171 s_1977;
};
struct f_pop_frames_637fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int upto_636;
 rt_int i_1979;
 P148 c_1980;
};
struct f_push_cleanup_639fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_638;
};
struct f_pop_cleanup_640fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_guarded_644fr { int dummy;
 struct f_greenc_1fr *up;
 P171 stmts_641;
 P171 hs_642;
 rt_int line_643;
 P137 f_1984;
 P137 x_1985;
 P171 h_1986;
 P171 n_1987;
 int first_1988;
 int has_others_1989;
 P137 conds_1990;
};
struct f_exc_id_648fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_645;
 rt_int line_646;
 P137 *r_647;
 P114 y_1995;
};
struct f_gen_statement_650fr { int dummy;
 struct f_greenc_1fr *up;
 P171 s_649;
 P119 t_1996;
 P119 vt_1997;
 P175 c_1998;
 P137 lv_1999;
 P137 v_2000;
 P137 x_2001;
 int ro_2002;
};
struct f_slice_assign_652fr { int dummy;
 struct f_greenc_1fr *up;
 P171 s_651;
 P137 lv_2004;
 P137 v_2005;
 P137 sl_2006;
 P137 x_2007;
 P119 t_2008;
 P119 st_2009;
 P119 vt_2010;
 P175 c_2011;
 int ro_2012;
};
struct f_gen_call_654fr { int dummy;
 struct f_greenc_1fr *up;
 P171 s_653;
 P171 c_2013;
 P119 t_2014;
 P137 v_2015;
};
struct f_gen_if_656fr { int dummy;
 struct f_greenc_1fr *up;
 P171 s_655;
 P171 a_2016;
 int first_2017;
 P119 t_2018;
 P137 v_2019;
};
struct f_gen_case_658fr { int dummy;
 struct f_greenc_1fr *up;
 P171 s_657;
 P119 st_2021;
 P119 vt_2022;
 int first_2023;
 P171 a_2024;
 P171 lab_2025;
 P137 sel_2026;
 P137 tmp_2027;
 P137 ct_2028;
 P137 conds_2029;
 P137 v_2030;
 P137 lo_2031;
 P137 hi_2032;
};
struct f_push_exit_662fr { int dummy;
 struct f_greenc_1fr *up;
 P137 match_659;
 int is_loop_660;
 P137 *label_661;
};
struct f_gen_loop_664fr { int dummy;
 struct f_greenc_1fr *up;
 P171 s_663;
 P119 t_2037;
 P119 vt_2038;
 P175 c_2039;
 P137 label_2040;
 P137 cond_2041;
 P137 acc_2042;
 P137 lov_2043;
 P137 hiv_2044;
 P137 it_2045;
 P114 y_2046;
 P171 r_2047;
};
struct f_gen_block_666fr { int dummy;
 struct f_greenc_1fr *up;
 P171 s_665;
 P137 label_2048;
 P137 aw_2049;
};
struct f_exit_matches_669fr { int dummy;
 struct f_greenc_1fr *up;
 P171 s_667;
 P140 x_668;
 int result_;
};
struct f_gen_exit_671fr { int dummy;
 struct f_greenc_1fr *up;
 P171 s_670;
 P140 x_2050;
 P119 t_2051;
 P137 v_2052;
};
struct f_gen_return_673fr { int dummy;
 struct f_greenc_1fr *up;
 P171 s_672;
 P119 vt_2054;
 P137 v_2055;
};
struct f_access_of_676fr { int dummy;
 struct f_greenc_1fr *up;
 P114 y_674;
 P137 *r_675;
 P137 p_2056;
 rt_int i_2058;
};
struct f_link_to_679fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int l_677;
 P137 *r_678;
 rt_int i_2063;
};
struct f_c_ident_681fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_680;
 rt_gstr result_;
};
struct f_deref_685fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_682;
 P119 t_683;
 P137 *r_684;
 P137 ct_2067;
};
struct f_is_object_687fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_686;
 int result_;
 P114 y_2068;
};
struct f_is_const_access_689fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_688;
 int result_;
 P114 y_2069;
};
struct f_lvalue_695fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_690;
 P137 *code_out_691;
 P119 *t_692;
 P175 *c_693;
 int *ro_694;
 int cp_2070;
 P171 ex_2071;
 P114 y_2072;
 P137 base_2073;
 P119 bt_2074;
 P175 bc_2075;
};
struct f_select_on_704fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_696;
 P119 bt_697;
 P171 e_698;
 int *ro_699;
 int lv_700;
 P137 *code_out_701;
 P119 *t_702;
 P175 *c_703;
 P1710 f_2076;
 P137 d_2077;
 P137 ct_2078;
 P137 tmp_2079;
};
struct f_index_on_713fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_705;
 P119 bt_706;
 P171 e_707;
 int *ro_708;
 int lv_709;
 P137 *code_out_710;
 P119 *t_711;
 P175 *c_712;
 P171 a_2081;
 P119 arrt_2082;
 P137 acc_2083;
 P119 it_2084;
 P137 i_2085;
 P137 lo_2086;
 P137 hi_2087;
 P137 d_2088;
 P137 ct_2089;
 P137 tmp_2090;
};
struct f_type_attribute_716fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_714;
 rt_gstr name_715;
 int result_;
 P114 y_2092;
 P1695 p_2094;
};
struct f_is_type_name_718fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_717;
 int result_;
 P114 y_2097;
};
struct f_is_char_lit_720fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_719;
 int result_;
};
struct f_is_enum_lit_722fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_721;
 int result_;
 P114 y_2099;
};
struct f_c_string_724fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_723;
 rt_gstr result_;
 rt_int n_2100;
 rt_int i_2103;
 rt_gstr r_2112;
 rt_int j_2114;
 rt_int i_2118;
};
struct f_is_literal_726fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_725;
 int result_;
};
struct f_range_bounds_734fr { int dummy;
 struct f_greenc_1fr *up;
 P171 l_727;
 P171 h_728;
 P119 want_729;
 rt_int line_730;
 P119 *t_731;
 P137 *lo_732;
 P137 *hi_733;
 P119 w_2129;
 P119 t2_2130;
};
struct f_gexpr_739fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_735;
 P119 want_736;
 P119 *t_737;
 P137 *r_738;
 P114 y_2131;
 P119 bt_2132;
 P175 c_2133;
 int ro_2134;
 P137 base_2135;
 P137 a_2136;
 P171 nm_2137;
 int saved_lv_2138;
};
struct f_gexpr_1_744fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_740;
 P119 want_741;
 P119 *t_742;
 P137 *r_743;
 P114 y_2139;
 P119 bt_2140;
 P175 c_2141;
 int ro_2142;
 P137 base_2143;
 P137 a_2144;
 P171 nm_2145;
 P171 c2_2146;
};
struct f_string_aggregate_749fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_745;
 P119 want_746;
 P119 *t_747;
 P137 *r_748;
 P171 ag_2150;
 P171 it_2151;
 P171 tail_2152;
 P171 l_2153;
 rt_int k_2156;
};
struct f_char_literal_754fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_750;
 P119 want_751;
 P119 *t_752;
 P137 *r_753;
 rt_int i_2162;
};
struct f_expanded_757fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_755;
 P171 *r_756;
 P114 y_2165;
 rt_int d_2166;
};
struct f_gen_name_762fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_758;
 P119 want_759;
 P119 *t_760;
 P137 *r_761;
 P114 y_2167;
 P114 z_2168;
 P171 call_2169;
};
struct f_gen_unop_767fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_763;
 P119 want_764;
 P119 *t_765;
 P137 *r_766;
 P137 a_2171;
 P137 x_2172;
 int done_2173;
};
struct f_short_int_769fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_768;
 int result_;
};
struct f_float_kind_771fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_770;
 rt_gstr result_;
};
struct f_membership_774fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_772;
 P137 *r_773;
 P119 ta_2174;
 P119 tb_2175;
 P119 tt_2176;
 P137 a_2177;
 P137 lo_2178;
 P137 hi_2179;
 P137 ct_2180;
 P175 c_2181;
 P1714 d_2182;
};
struct f_condition_779fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_775;
 P119 want_776;
 P119 *t_777;
 P137 *r_778;
 P137 a_2184;
 P137 b_2185;
 P119 tb_2186;
};
struct f_catenation_784fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_780;
 P119 want_781;
 P119 *t_782;
 P137 *r_783;
 P119 arrt_2187;
 P119 ta_2188;
 P119 tb_2189;
 P137 a_2190;
 P137 b_2191;
 P137 ct_2192;
};
struct f_cat_operand_789fr { int dummy;
 struct f_greenc_1fr *up;
 P171 x_785;
 P119 arrt_786;
 rt_int line_787;
 P137 *r_788;
 P119 tx_2193;
 P137 ct_2194;
};
struct f_arithmetic_794fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_790;
 P119 want_791;
 P119 *t_792;
 P137 *r_793;
 rt_gstr op_2195;
 P119 ta_2196;
 P119 tb_2197;
 P119 hint_2198;
 P137 a_2199;
 P137 b_2200;
};
struct f_fixed_operation_802fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_795;
 P119 ta_796;
 P119 tb_797;
 rt_gstr a_798;
 rt_gstr b_799;
 P119 *t_800;
 P137 *r_801;
 rt_gstr op_2201;
};
struct f_gen_binop_807fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_803;
 P119 want_804;
 P119 *t_805;
 P137 *r_806;
 rt_gstr op_2202;
 P119 ta_2203;
 P119 tb_2204;
 P119 hint_2205;
 P119 ct_2206;
 P137 a_2207;
 P137 b_2208;
 P137 x_2209;
 P137 dummy_2210;
 int done_2211;
};
struct f_conversion_812fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_808;
 P114 y_809;
 P119 *t_810;
 P137 *r_811;
 P119 aty_2212;
 P137 a_2213;
 P171 ag_2214;
 P171 it_2215;
 P171 tail_2216;
 P171 arg_2217;
};
struct f_constrain_816fr { int dummy;
 struct f_greenc_1fr *up;
 P114 y_813;
 P119 t_814;
 P137 *r_815;
 P137 ct_2219;
 P137 tmp_2220;
};
struct f_array_conversion_823fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_817;
 P119 t_818;
 P119 aty_819;
 P175 c_820;
 rt_gstr a_821;
 P137 *r_822;
 P119 x_2221;
 P119 y_2222;
 P137 ct_2223;
 P137 act_2224;
 P137 et_2225;
 P137 tmp_2226;
 P137 s_2227;
 rt_int k_2229;
};
struct f_gen_attr_828fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_824;
 P119 want_825;
 P119 *t_826;
 P137 *r_827;
 rt_gstr a_2233;
 P114 y_2234;
 P119 tt_2235;
 P119 aty_2236;
 P137 v_2237;
 P137 d_2238;
 P175 c_2239;
 rt_int n_2240;
 int ro_2241;
};
struct f_type_bits_832fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_829;
 P175 c_830;
 P137 *r_831;
 P137 ct_2242;
};
struct f_object_bits_836fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_833;
 rt_gstr v_834;
 P137 *r_835;
 P137 ct_2243;
 P137 et_2244;
};
struct f_numeric_attr_842fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_837;
 P119 tt_838;
 P175 c_839;
 P119 *t_840;
 P137 *r_841;
 rt_gstr a_2245;
 int short_2246;
};
struct f_component_attr_846fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_843;
 P119 *t_844;
 P137 *r_845;
 P119 bt_2247;
 P137 v_2248;
 P137 ct_2249;
 P1710 f_2250;
};
struct f_config_attr_850fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_847;
 P119 *t_848;
 P137 *r_849;
 rt_gstr a_2252;
 rt_gstr p_2253;
 P137 nm_2254;
};
struct f_attr_dim_854fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_851;
 P119 arrt_852;
 rt_int *n_853;
 int ok_2257;
};
struct f_object_array_attr_860fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_855;
 P119 arrt_856;
 rt_gstr v_857;
 P119 *t_858;
 P137 *r_859;
 rt_int n_2258;
 P119 it_2259;
 P137 ct_2260;
 P137 tmp_2261;
 P137 p_2262;
 P137 lo_2263;
 P137 hi_2264;
 rt_int k_2266;
 rt_int k_2271;
};
struct f_type_array_attr_866fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_861;
 P119 arrt_862;
 P175 c_863;
 P119 *t_864;
 P137 *r_865;
 rt_int n_2275;
 P119 it_2276;
 P175 cc_2277;
 rt_int k_2279;
};
struct f_lit_table_869fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_867;
 P137 *r_868;
 P171 l_2283;
 P137 s_2284;
};
struct f_val_rep_875fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_870;
 P119 tt_871;
 P175 c_872;
 P119 *t_873;
 P137 *r_874;
 P119 aty_2287;
 P137 v_2288;
 P137 lt_2289;
 rt_int n_2290;
};
struct f_allocator_880fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_876;
 P119 want_877;
 P119 *t_878;
 P137 *r_879;
 P114 y_2291;
 P119 target_2292;
 P119 vt_2293;
 P137 ct_2294;
 P137 pt_2295;
 P137 cell_2296;
 P137 v_2297;
 P137 x_2298;
};
struct f_aggregate_885fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_881;
 P119 want_882;
 P119 *t_883;
 P137 *r_884;
 P137 b_2299;
};
struct f_captured_888fr { int dummy;
 struct f_greenc_1fr *up;
 P123 b_886;
 P137 *r_887;
 P148 l_2300;
};
struct f_field_at_891fr { int dummy;
 struct f_greenc_1fr *up;
 P119 rt_889;
 rt_int k_890;
 P1710 result_;
 P1710 f_2302;
 rt_int i_2304;
};
struct f_names_field_894fr { int dummy;
 struct f_greenc_1fr *up;
 P171 x_892;
 P1710 f_893;
 int result_;
};
struct f_item_for_899fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_895;
 P119 rt_896;
 rt_int k_897;
 rt_int p_898;
 P171 result_;
 P171 it_2308;
 P171 lab_2309;
 rt_int n_2310;
};
struct f_arm_holds_903fr { int dummy;
 struct f_greenc_1fr *up;
 P171 arm_900;
 rt_int v_901;
 int *res_902;
 P171 l_2313;
 rt_int lo_2314;
 rt_int hi_2315;
 int ok_2316;
};
struct f_record_aggregate_907fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_904;
 P119 rt_905;
 P137 *r_906;
 P171 it_2318;
 P171 lab_2319;
 P171 vn_2320;
 P171 a_2321;
 P1710 f_2322;
 P1835 g_2323;
 rt_int n_2324;
 A2325 done_2326;
 A2325 active_2328;
 A2330 dvs_2331;
 A2333 order_2334;
 rt_int norder_2336;
 rt_int nung_2337;
 rt_int k_2338;
 rt_int d_2339;
 rt_int npos_2340;
 P123 saved_2341;
 P137 ct_2342;
 P137 tmp_2343;
 P137 parts_2344;
 int named_2345;
 int ok_2346;
 int holds_2347;
 rt_int i_2349;
 rt_int p_2358;
 rt_int i_2377;
 rt_int i_2394;
 rt_int i_2405;
};
struct f_field_index_910fr { int dummy;
 struct f_greenc_1fr *up;
 P119 rt_908;
 rt_gstr name_909;
 rt_int result_;
 P1710 f_2411;
 rt_int k_2412;
};
struct f_agg_component_916fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr tmp_911;
 P119 rt_912;
 rt_int k_913;
 P171 v_914;
 rt_int line_915;
 P1710 f_2414;
 P119 vt_2415;
 P137 x_2416;
 P137 y_2417;
 rt_int i_2419;
};
struct f_static_choice_920fr { int dummy;
 struct f_greenc_1fr *up;
 P171 x_917;
 rt_int *v_918;
 int *ok_919;
};
struct f_array_aggregate_925fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_921;
 P119 arrt_922;
 P137 bounds_923;
 P137 *r_924;
 P171 it_2424;
 P171 lab_2425;
 P171 others_it_2426;
 rt_int np_2427;
 rt_int nnamed_2428;
 rt_int clo_2429;
 rt_int chi_2430;
 rt_int v1_2431;
 rt_int v2_2432;
 int all_static_2433;
 int ok_2434;
 int ok2_2435;
 int first_choice_2436;
 P119 vt_2437;
 P137 ct_2438;
 P137 et_2439;
 P137 tmp_2440;
 P137 lo_2441;
 P137 hi_2442;
 P137 v_2443;
 P137 x_2444;
 P137 parts_2445;
 P137 fill_2446;
 P137 rowb_2447;
 P137 key_2448;
 P137 khi_2449;
 P123 saved_2450;
};
struct f_element_store_929fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lv_926;
 P119 arrt_927;
 rt_gstr v_928;
 P137 x_2455;
};
struct f_check_choices_933fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_930;
 P119 arrt_931;
 int has_others_932;
 P171 a_2456;
 P171 b_2457;
 P171 lab_2458;
 P171 lab2_2459;
 rt_int lo1_2460;
 rt_int hi1_2461;
 rt_int lo2_2462;
 rt_int hi2_2463;
 rt_int count_2464;
 int ok_2465;
};
struct f_actual_for_937fr { int dummy;
 struct f_greenc_1fr *up;
 P171 args_934;
 P1695 pm_935;
 P1695 first_936;
 P171 result_;
 P171 a_2470;
 P1695 p_2471;
};
struct f_gcall_942fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_938;
 int is_stmt_939;
 P119 *t_940;
 P137 *r_941;
 P171 fn_2474;
 P171 nm_2475;
 P114 y_2476;
 P137 args_2477;
 P137 lv_2478;
 P137 v_2479;
 P137 ct_2480;
 P137 x_2481;
 P171 a_2482;
 P1695 pm_2483;
 P119 lt_2484;
 P119 vt_2485;
 P175 lc_2486;
 int ro_2487;
};
struct f_gcall_with_947fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_943;
 P114 y_944;
 P119 *t_945;
 P137 *r_946;
 P137 args_2488;
 P137 lv_2489;
 P137 v_2490;
 P137 x1_2491;
 P137 x2_2492;
 P171 a_2493;
 P1695 pm_2494;
 P119 lt_2495;
 P119 vt_2496;
 P175 lc_2497;
 int ro_2498;
};
struct f_builtin_954fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_948;
 P171 args_949;
 rt_int line_950;
 int is_stmt_951;
 P119 *t_952;
 P137 *r_953;
 P119 aty_2501;
 P119 lt_2502;
 P137 a_2503;
 P137 w_2504;
 P137 lv_2505;
 P175 lc_2506;
 int ro_2507;
};
struct f_lookup_path_956fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_955;
 P114 result_;
 P114 y_2508;
 P114 m_2509;
 rt_int i_2513;
};
struct f_is_package_958fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_957;
 int result_;
 P114 y_2525;
};
struct f_member_of_962fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_959;
 rt_gstr name_960;
 rt_int line_961;
 P114 result_;
 P114 y_2526;
 P114 m_2527;
};
struct f_inside_package_964fr { int dummy;
 struct f_greenc_1fr *up;
 P171 p_963;
 int result_;
 P148 l_2529;
};
struct f_copy_sym_967fr { int dummy;
 struct f_greenc_1fr *up;
 P114 y_965;
 P114 *z_966;
};
struct f_complete_private_970fr { int dummy;
 struct f_greenc_1fr *up;
 P119 ph_968;
 P119 full_969;
 P137 n_2533;
 P171 p_2534;
};
struct f_package_spec_972fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_971;
 P114 y_2535;
 P114 m_2536;
 P114 z_2537;
 P171 saved_2538;
 P114 first_private_2539;
};
struct f_hidden_from_975fr { int dummy;
 struct f_greenc_1fr *up;
 P114 m_973;
 P114 first_private_974;
 int result_;
 P114 p_2543;
};
struct f_package_body_977fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_976;
 P114 y_2545;
 P114 m_2546;
 P114 z_2547;
 P171 saved_2548;
};
struct f_use_visible_979fr { int dummy;
 struct f_greenc_1fr *up;
 P114 old_978;
 int result_;
};
struct f_use_clause_981fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_980;
 P171 n_2555;
 P114 y_2556;
 P114 m_2557;
 P114 z_2558;
 P114 old_2559;
};
struct f_fits_986fr { int dummy;
 struct f_greenc_1fr *up;
 P114 y_982;
 P171 args_983;
 P119 want_984;
 int *ok_985;
 P1695 pm_2562;
 P171 a_2563;
 P119 t_2564;
 P175 c_2565;
 P137 v_2566;
 int ro_2567;
 P123 saved_2568;
 rt_int used_2569;
};
struct f_is_builtin_988fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_987;
 int result_;
};
struct f_resolve_overload_995fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_989;
 P171 args_990;
 int is_stmt_991;
 P119 want_992;
 rt_int line_993;
 P114 *y_994;
 P114 z_2574;
 P114 first_2576;
 rt_int n_2577;
 int ok_2578;
 rt_int pass_2580;
};
struct f_resolve_member_overload_1003fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_996;
 rt_gstr name_997;
 P171 args_998;
 int is_stmt_999;
 P119 want_1000;
 rt_int line_1001;
 P114 *y_1002;
 P114 pk_2586;
 P114 z_2587;
 rt_int n_2588;
 int ok_2589;
 rt_int pass_2591;
};
struct f_user_operator_1009fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_1004;
 P119 want_1005;
 P119 *t_1006;
 P137 *r_1007;
 int *done_1008;
 P137 op_2596;
 int negate_2597;
 P114 y_2598;
 P171 call_2599;
 P171 fname_2600;
 P171 l_2601;
 P171 rt_2602;
 int ok_2603;
};
struct f_task_p_1011fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_1010;
 P171 x_2606;
 P171 r_2607;
 rt_int line_2608;
};
struct f_entry_p_1013fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_1012;
 P171 x_2609;
};
struct f_accept_p_1015fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_1014;
 P171 x_2610;
};
struct f_delay_p_1017fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_1016;
 P171 x_2611;
};
struct f_designators_1019fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_1018;
 P171 head_2612;
 P171 tail_2613;
 P171 n_2614;
};
struct f_parse_task_statement_1021fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_1020;
 P171 x_2616;
 P171 alt_2617;
 P171 head_2618;
 P171 tail_2619;
 rt_int line_2620;
};
struct f_path_at_1025fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int level_1022;
 rt_gstr field_1023;
 P137 *r_1024;
 rt_int i_2623;
};
struct f_is_task_name_1027fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_1026;
 int result_;
 P114 y_2627;
};
struct f_task_of_1031fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_1028;
 P114 *y_1029;
 P171 *ix_1030;
 P171 n_2628;
};
struct f_own_index_1033fr { int dummy;
 struct f_greenc_1fr *up;
 P137 *r_1032;
 P114 y_2629;
};
struct f_member_1038fr { int dummy;
 struct f_greenc_1fr *up;
 P114 y_1034;
 rt_gstr arr_1035;
 rt_gstr i_1036;
 P137 *r_1037;
 P137 lo_2630;
 P137 hi_2631;
};
struct f_act_path_1041fr { int dummy;
 struct f_greenc_1fr *up;
 P114 y_1039;
 P137 *r_1040;
 P137 i_2632;
};
struct f_act_path_i_1045fr { int dummy;
 struct f_greenc_1fr *up;
 P114 y_1042;
 rt_gstr i_1043;
 P137 *r_1044;
};
struct f_entry_path_1049fr { int dummy;
 struct f_greenc_1fr *up;
 P114 y_1046;
 rt_gstr i_1047;
 P137 *r_1048;
 P137 own_2633;
};
struct f_declare_slot_1052fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr ctype_name_1050;
 rt_gstr field_1051;
};
struct f_task_decl_1054fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_1053;
};
struct f_family_arg_struct_1055fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_family_bounds_1059fr { int dummy;
 struct f_greenc_1fr *up;
 P171 b_1056;
 P114 y_1057;
 P137 x_1058;
 P137 lo_2635;
 P137 hi_2636;
 P137 v_2637;
 P137 d_2638;
 P119 vt_2639;
 P175 c_2640;
};
struct f_entry_family_slot_1064fr { int dummy;
 struct f_greenc_1fr *up;
 P114 y_1060;
 rt_gstr base_1061;
 rt_gstr i_1062;
 P137 *r_1063;
 P137 lo_2641;
 P137 hi_2642;
};
struct f_task_spec_1066fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_1065;
 int has_procs_2643;
 int saved_defer_2644;
 P137 fields_2645;
 P137 ct_2646;
 P1695 pm_2647;
 P137 fp_2648;
 P137 flo_2649;
 P137 fhi_2650;
 P114 y_2651;
 P114 m_2652;
 P114 z_2653;
 P114 saved_2654;
 P137 d_2655;
 P137 v_2656;
 P137 p_2657;
 P137 p2_2658;
 P119 vt_2659;
 P171 r_2660;
};
struct f_entry_decl_1068fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_1067;
 P114 y_2664;
 P171 p_2665;
 P1695 pm_2666;
 P1695 tail_2667;
 P137 fields_2668;
 P137 ct_2669;
 P137 x_2670;
 P137 lo_2671;
 P137 hi_2672;
};
struct f_task_body_1070fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_1069;
 P114 y_2676;
 P114 b_2677;
 P114 m_2678;
 P114 z_2679;
 P137 upp_2680;
 P114 saved_2681;
};
struct f_task_awaits_1073fr { int dummy;
 struct f_greenc_1fr *up;
 P171 decls_1071;
 P137 *aw_1072;
 P171 e_2685;
 P114 y_2686;
 P137 p_2687;
};
struct f_task_failure_1075fr { int dummy;
 struct f_greenc_1fr *up;
 P171 s_1074;
 P114 y_2689;
 P137 a_2690;
 P137 i_2691;
 P119 it_2692;
};
struct f_entry_sym_1079fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_1076;
 P114 *y_1077;
 P171 *ix_1078;
 P114 t_2693;
};
struct f_other_call_1084fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_1080;
 int is_stmt_1081;
 P119 *t_1082;
 P137 *r_1083;
 P114 y_2694;
 P1695 pm_2695;
 P171 a_2696;
 P137 parts_2697;
 P137 v_2698;
 P137 lv_2699;
 P137 ent_2700;
 P137 act_2701;
 P137 i_2702;
 P119 vt_2703;
 P119 lt_2704;
 P175 lc_2705;
 int ro_2706;
 P171 ix_2707;
 P171 fix_2708;
 P171 args_node_2709;
};
struct f_other_attr_1089fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_1085;
 P114 y_1086;
 P119 *t_1087;
 P137 *r_1088;
 rt_gstr a_2711;
 P137 p_2712;
};
struct f_member_attr_1093fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_1090;
 P119 *t_1091;
 P137 *r_1092;
 P114 y_2713;
 P171 ix_2714;
 P137 i_2715;
 P137 p_2716;
 P119 vt_2717;
};
struct f_task_builtin_1099fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1094;
 P171 args_1095;
 rt_int line_1096;
 P119 *t_1097;
 P137 *r_1098;
 P119 vt_2718;
 P137 v_2719;
};
struct f_gen_accept_1101fr { int dummy;
 struct f_greenc_1fr *up;
 P171 s_1100;
 P114 y_2720;
 P140 saved_ax_2721;
 P137 ent_2722;
 P137 ep_2723;
 P137 xf_2724;
 P137 x_2725;
 P1695 pm_2726;
 P171 f_2727;
 P114 p_2728;
};
struct f_member_slot_1105fr { int dummy;
 struct f_greenc_1fr *up;
 P114 y_1102;
 P171 s_1103;
 P137 *ent_1104;
 P119 vt_2730;
 P137 v_2731;
};
struct f_gen_delay_ticks_1108fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_1106;
 P137 *r_1107;
 P119 vt_2732;
 P137 v_2733;
};
struct f_gen_select_1110fr { int dummy;
 struct f_greenc_1fr *up;
 P171 s_1109;
 P171 alt_2734;
 rt_int n_2735;
 rt_int i_2736;
 int has_delay_2737;
 int has_accept_2738;
 P137 al_2739;
 P137 w_2740;
 P137 g_2741;
 P137 ent_2742;
 P137 ticks_2743;
 P119 vt_2744;
 P114 y_2745;
};
struct f_family_range_1115fr { int dummy;
 struct f_greenc_1fr *up;
 P114 y_1111;
 P171 ix_1112;
 P137 *lo_1113;
 P137 *hi_1114;
 P119 vt_2749;
};
struct f_task_statement_gen_1117fr { int dummy;
 struct f_greenc_1fr *up;
 P171 s_1116;
 P171 n_2750;
 P171 ix_2751;
 P114 y_2752;
 P137 a_2753;
 P137 d_2754;
 P137 l_2755;
 P137 ticks_2756;
 P137 lo_2757;
 P137 hi_2758;
};
struct f_root_name_1119fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_1118;
 P171 result_;
};
struct f_check_pure_target_1122fr { int dummy;
 struct f_greenc_1fr *up;
 P171 target_1120;
 rt_int line_1121;
 P171 n_2762;
 P114 y_2763;
};
struct f_assigns_nonlocal_1125fr { int dummy;
 struct f_greenc_1fr *up;
 P171 d_1123;
 rt_gstr name_1124;
 int result_;
};
struct f_declares_1128fr { int dummy;
 struct f_greenc_1fr *up;
 P171 d_1126;
 rt_gstr name_1127;
 int result_;
 P171 p_2764;
 P171 e_2765;
};
struct f_scan_handlers_1132fr { int dummy;
 struct f_greenc_1fr *up;
 P171 h_1129;
 P171 d_1130;
 rt_gstr name_1131;
 int result_;
 P171 p_2768;
};
struct f_scan_assigns_1136fr { int dummy;
 struct f_greenc_1fr *up;
 P171 stmts_1133;
 P171 d_1134;
 rt_gstr name_1135;
 int result_;
 P171 s_2770;
 P171 a_2771;
 P171 r_2772;
};
struct f_check_call_rules_1139fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_1137;
 P114 y_1138;
 P114 z_2776;
 P114 s_2777;
};
struct f_generic_p_1141fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_1140;
 P171 x_2779;
 P171 p_2780;
 P171 head_2781;
 P171 tail_2782;
 P171 names_2783;
 P171 st_2784;
 P171 def_2785;
 P171 sub_2786;
 P137 def_name_text_2787;
 int more_2788;
};
struct f_instantiation_1144fr { int dummy;
 struct f_greenc_1fr *up;
 P171 x_1142;
 P171 *res_1143;
 P171 i_2791;
 P171 head_2792;
 P171 tail_2793;
 P171 a_2794;
 P137 formal_2795;
 rt_int mark_2796;
 int more_2797;
};
struct f_generic_decl_1146fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_1145;
 P114 y_2799;
};
struct f_is_generic_name_1148fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_1147;
 int result_;
 P114 y_2800;
};
struct f_attach_generic_body_1150fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_1149;
 P114 y_2801;
};
struct f_restore_generic_context_1153fr { int dummy;
 struct f_greenc_1fr *up;
 P171 body_node_1151;
 rt_int line_1152;
 P143 ctx_2804;
 P114 m_2805;
 P114 z_2806;
 int seen_2807;
};
struct f_gactual_1157fr { int dummy;
 struct f_greenc_1fr *up;
 P171 args_1154;
 rt_int nth_1155;
 rt_gstr name_1156;
 P171 result_;
 P171 a_2812;
 rt_int i_2813;
};
struct f_copy_node_1161fr { int dummy;
 struct f_greenc_1fr *up;
 P171 n_1158;
 P137 name_1159;
 P171 *r_1160;
};
struct f_matches_formal_1165fr { int dummy;
 struct f_greenc_1fr *up;
 P114 y_1162;
 rt_gstr name_1163;
 P114 fs_1164;
 int result_;
};
struct f_instantiate_1167fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_1166;
 P114 g_2815;
 P171 gd_2816;
 P171 pat_2817;
 P171 f_2818;
 P171 a_2819;
 P171 cn_2820;
 P114 y_2821;
 P114 z_2822;
 P114 fs_2823;
 rt_int nth_2824;
 P119 t_2825;
 P119 vt_2826;
 P175 c_2827;
 P137 v_2828;
 P137 acc_2829;
 P137 x_2830;
 int ok_2831;
};
struct f_predef_type_1172fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1168;
 P119 t_1169;
 rt_gstr lo_1170;
 rt_gstr hi_1171;
 P114 y_2835;
};
struct f_predef_const_1176fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1173;
 P119 t_1174;
 rt_gstr code_text_1175;
 P114 y_2842;
};
struct f_predef_exc_1178fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1177;
 P114 y_2843;
};
struct f_predef_lit_1182fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1179;
 P119 t_1180;
 rt_int v_1181;
 P114 y_2844;
};
struct f_predefine_1183fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr control_2845;
 rt_int start_2846;
 rt_int code_no_2847;
 rt_int i_2850;
 rt_int i_2858;
};
struct f_translate_1185fr { int dummy;
 struct f_greenc_1fr *up;
 P171 u_1184;
 P171 p_2862;
 P114 y_2863;
};
struct f_print_program_1186fr { int dummy;
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
 rt_int n_arm_59;
 rt_int n_label_60;
 rt_int n_handler_61;
 rt_int n_comp_62;
 rt_int n_alt_63;
 rt_int d_enum_64;
 rt_int d_range_65;
 rt_int d_float_66;
 rt_int d_array_67;
 rt_int d_record_68;
 rt_int d_access_69;
 rt_int d_derived_70;
 rt_int d_private_71;
 rt_int s_mark_72;
 rt_int m_in_73;
 rt_int m_inout_74;
 rt_int m_out_75;
 rt_int t_int_76;
 rt_int t_bool_77;
 rt_int t_float_78;
 rt_int t_enum_79;
 rt_int t_string_80;
 rt_int t_array_81;
 rt_int t_record_82;
 rt_int t_ptr_83;
 rt_int t_void_84;
 rt_int t_nil_85;
 rt_int t_char_86;
 rt_int t_univ_87;
 rt_int t_act_88;
 rt_int t_tdecl_89;
 rt_int t_entry_90;
 rt_int t_fixed_91;
 rt_int y_var_92;
 rt_int y_const_93;
 rt_int y_func_94;
 rt_int y_proc_95;
 rt_int y_type_96;
 rt_int y_exc_97;
 rt_int y_enumlit_98;
 rt_int y_package_99;
 rt_int y_task_100;
 rt_int y_entry_101;
 rt_int y_generic_102;
 rt_int f_const_obj_103;
 rt_int f_deferred_104;
 A106 toks_109;
 rt_int ntoks_110;
 rt_int tpos_111;
 rt_int src_line_112;
 A113 table_116;
 rt_int depth_117;
 P114 scope_stack_118;
 P119 all_types_121;
 rt_int serial_122;
 P123 out_types_125;
 P123 out_frames_126;
 P123 out_helpers_127;
 P123 out_protos_128;
 P123 out_globals_129;
 P123 out_funcs_130;
 P123 out_init_131;
 P123 out_excs_132;
 P123 code_133;
 P123 fields_buf_134;
 int in_func_135;
 rt_int cur_level_136;
 P137 st_field_138;
 P114 func_sym_139;
 P140 exits_142;
 P143 generic_contexts_145;
 P140 accept_exits_146;
 rt_int frames_147;
 P148 handlers_150;
 P148 cleanups_151;
 rt_int trial_152;
 P119 ty_int_153;
 P119 ty_bool_154;
 P119 ty_float_155;
 P119 ty_char_156;
 P119 ty_string_157;
 P119 ty_void_158;
 P119 ty_nil_159;
 P119 ty_univ_160;
 P119 ty_act_161;
 P119 ty_tdecl_162;
 P119 ty_entry_163;
 P119 ty_short_164;
 P119 ty_long_165;
 P119 ty_sfloat_166;
 P119 ty_lfloat_167;
 P119 ty_time_168;
 P119 ty_ufixed_169;
 P119 completing_170;
 P171 anon_node_173;
 P119 anon_typ_174;
 P175 anon_cons_177;
 P137 agg_bounds_178;
 P114 disc_syms_179;
 A180 unit_names_181;
 A182 unit_depths_183;
 rt_int nunits_185;
 P114 cur_task_186;
 rt_int accept_depth_187;
 int famarg_done_188;
 P171 fam_ix_189;
 P171 call_task_ix_190;
 int saw_interface_191;
 int defer_entry_structs_192;
 P123 out_awaits_193;
 P175 no_cons_194;
 P171 units_195;
 P148 pkg_stack_196;
 P171 cur_pkg_197;
 P137 prefix_hint_198;
 P119 call_want_199;
 P114 pure_sym_200;
 rt_int pure_depth_201;
 int vrp_ok_202;
 int in_lv_path_203;
 int last_deref_204;
 P137 main_name_205;
 P137 conf_system_206;
 rt_int conf_storage_unit_207;
 rt_int conf_memory_size_208;
 P137 conf_optimize_209;
};
static void as_A2333(A2333 *d, A2333 s);
static A2333 cp_A2333(A2333 s);
static int eq_A2333(A2333 a, A2333 b);
static A2333 cat_A2333(A2333 a, A2333 b);
static A2333 one_A2333(rt_int e);
static void as_A2330(A2330 *d, A2330 s);
static A2330 cp_A2330(A2330 s);
static int eq_A2330(A2330 a, A2330 b);
static A2330 cat_A2330(A2330 a, A2330 b);
static A2330 one_A2330(rt_int e);
static void as_A2325(A2325 *d, A2325 s);
static A2325 cp_A2325(A2325 s);
static int eq_A2325(A2325 a, A2325 b);
static A2325 cat_A2325(A2325 a, A2325 b);
static A2325 one_A2325(int e);
static A2325 and_A2325(A2325 a, A2325 b);
static A2325 or_A2325(A2325 a, A2325 b);
static A2325 xor_A2325(A2325 a, A2325 b);
static A2325 not_A2325(A2325 a);
static void as_R1836(R1836 *d, R1836 s);
static R1836 cp_R1836(R1836 s);
static int eq_R1836(R1836 a, R1836 b);
static void as_R1715(R1715 *d, R1715 s);
static R1715 cp_R1715(R1715 s);
static int eq_R1715(R1715 a, R1715 b);
static void as_R1711(R1711 *d, R1711 s);
static R1711 cp_R1711(R1711 s);
static int eq_R1711(R1711 a, R1711 b);
static void as_R1696(R1696 *d, R1696 s);
static R1696 cp_R1696(R1696 s);
static int eq_R1696(R1696 a, R1696 b);
static void as_A182(A182 *d, A182 s);
static A182 cp_A182(A182 s);
static int eq_A182(A182 a, A182 b);
static A182 cat_A182(A182 a, A182 b);
static A182 one_A182(rt_int e);
static void as_A180(A180 *d, A180 s);
static A180 cp_A180(A180 s);
static int eq_A180(A180 a, A180 b);
static A180 cat_A180(A180 a, A180 b);
static A180 one_A180(P137 e);
static void as_R176(R176 *d, R176 s);
static R176 cp_R176(R176 s);
static int eq_R176(R176 a, R176 b);
static void as_R172(R172 *d, R172 s);
static R172 cp_R172(R172 s);
static int eq_R172(R172 a, R172 b);
static void as_R149(R149 *d, R149 s);
static R149 cp_R149(R149 s);
static int eq_R149(R149 a, R149 b);
static void as_R144(R144 *d, R144 s);
static R144 cp_R144(R144 s);
static int eq_R144(R144 a, R144 b);
static void as_R141(R141 *d, R141 s);
static R141 cp_R141(R141 s);
static int eq_R141(R141 a, R141 b);
static void as_R124(R124 *d, R124 s);
static R124 cp_R124(R124 s);
static int eq_R124(R124 a, R124 b);
static void as_R120(R120 *d, R120 s);
static R120 cp_R120(R120 s);
static int eq_R120(R120 a, R120 b);
static void as_R115(R115 *d, R115 s);
static R115 cp_R115(R115 s);
static int eq_R115(R115 a, R115 b);
static void as_A113(A113 *d, A113 s);
static A113 cp_A113(A113 s);
static int eq_A113(A113 a, A113 b);
static A113 cat_A113(A113 a, A113 b);
static A113 one_A113(P114 e);
static void as_R108(R108 *d, R108 s);
static R108 cp_R108(R108 s);
static int eq_R108(R108 a, R108 b);
static void as_A106(A106 *d, A106 s);
static A106 cp_A106(A106 s);
static int eq_A106(A106 a, A106 b);
static A106 cat_A106(A106 a, A106 b);
static A106 one_A106(P107 e);
static void as_rt_gstr(rt_gstr *d, rt_gstr s);
static rt_gstr cp_rt_gstr(rt_gstr s);
static int eq_rt_gstr(rt_gstr a, rt_gstr b);
static rt_gstr cat_rt_gstr(rt_gstr a, rt_gstr b);
static rt_gstr one_rt_gstr(int e);
static P137 f_mk_211(struct f_greenc_1fr *up_, rt_gstr s_210);
static void f_new_name_214(struct f_greenc_1fr *up_, rt_gstr base_212, P137 *res_213);
static int f_is_letter_216(struct f_greenc_1fr *up_, int c_215);
static int f_is_digit_218(struct f_greenc_1fr *up_, int c_217);
static int f_upper_220(struct f_greenc_1fr *up_, int c_219);
static rt_gstr f_lower_s_222(struct f_greenc_1fr *up_, rt_gstr s_221);
static rt_gstr f_upper_s_224(struct f_greenc_1fr *up_, rt_gstr s_223);
static int f_is_operator_226(struct f_greenc_1fr *up_, rt_gstr s_225);
static rt_gstr f_c_field_228(struct f_greenc_1fr *up_, rt_gstr s_227);
static rt_gstr f_q_229(struct f_greenc_1fr *up_);
static void f_fail_232(struct f_greenc_1fr *up_, rt_int line_230, rt_gstr msg_231);
static P123 f_new_buffer_233(struct f_greenc_1fr *up_);
static void f_put_to_236(struct f_greenc_1fr *up_, P123 b_234, rt_gstr s_235);
static void f_emit_238(struct f_greenc_1fr *up_, rt_gstr s_237);
static void f_print_buffer_240(struct f_greenc_1fr *up_, P123 b_239);
static void f_splice_243(struct f_greenc_1fr *up_, P123 a_241, P123 b_242);
static int f_is_reserved_245(struct f_greenc_1fr *up_, rt_gstr w_244);
static void f_add_token_249(struct f_greenc_1fr *up_, rt_int kind_246, rt_gstr s_247, rt_int ival_248);
static rt_int f_digit_value_251(struct f_greenc_1fr *up_, int c_250);
static rt_int f_digit_in_254(struct f_greenc_1fr *up_, int c_252, rt_int base_253);
static void f_accumulate_258(struct f_greenc_1fr *up_, rt_int *v_255, rt_int base_256, rt_int d_257);
static void f_lex_line_260(struct f_greenc_1fr *up_, rt_gstr line_259);
static int f_exponent_ahead_263(struct f_greenc_1fr *up_, rt_gstr line_261, rt_int j_262);
static void f_exponent_268(struct f_greenc_1fr *up_, rt_gstr line_264, rt_int *j_265, rt_gstr *buf_266, rt_int *bl_267);
static void f_include_open_271(struct f_greenc_1fr *up_, rt_gstr name_269, rt_int *length_270);
static void f_include_char_274(struct f_greenc_1fr *up_, rt_int i_272, int *c_273);
static void f_check_include_275(struct f_greenc_1fr *up_);
static void f_include_text_277(struct f_greenc_1fr *up_, rt_int n_276);
static void f_include_line_281(struct f_greenc_1fr *up_, rt_gstr t_278, rt_int from_279, rt_int to_280);
static void f_read_source_282(struct f_greenc_1fr *up_);
static P171 f_nn_285(struct f_greenc_1fr *up_, rt_int kind_283, rt_int line_284);
static void f_append_289(struct f_greenc_1fr *up_, P171 *head_286, P171 *tail_287, P171 x_288);
static rt_int f_list_len_291(struct f_greenc_1fr *up_, P171 l_290);
static rt_int f_cur_line_292(struct f_greenc_1fr *up_);
static int f_at_kw_294(struct f_greenc_1fr *up_, rt_gstr w_293);
static int f_at_op_296(struct f_greenc_1fr *up_, rt_gstr w_295);
static int f_at_kind_298(struct f_greenc_1fr *up_, rt_int k_297);
static rt_int f_kind_at_300(struct f_greenc_1fr *up_, rt_int k_299);
static rt_gstr f_text_at_302(struct f_greenc_1fr *up_, rt_int k_301);
static void f_perror_304(struct f_greenc_1fr *up_, rt_gstr msg_303);
static void f_skip_305(struct f_greenc_1fr *up_);
static void f_expect_kw_307(struct f_greenc_1fr *up_, rt_gstr w_306);
static void f_expect_op_309(struct f_greenc_1fr *up_, rt_gstr w_308);
static void f_expect_id_311(struct f_greenc_1fr *up_, P137 *res_310);
static void f_name_node_313(struct f_greenc_1fr *up_, P171 *res_312);
static void f_id_list_315(struct f_greenc_1fr *up_, P171 *res_314);
static P171 f_binop_320(struct f_greenc_1fr *up_, P137 op_316, P171 l_317, P171 r_318, rt_int line_319);
static void f_expr_322(struct f_greenc_1fr *up_, P171 *res_321);
static int f_is_rel_324(struct f_greenc_1fr *up_, rt_gstr s_323);
static void f_relation_326(struct f_greenc_1fr *up_, P171 *res_325);
static rt_gstr f_path_of_328(struct f_greenc_1fr *up_, P171 e_327);
static void f_simple_expr_330(struct f_greenc_1fr *up_, P171 *res_329);
static void f_term_332(struct f_greenc_1fr *up_, P171 *res_331);
static void f_factor_334(struct f_greenc_1fr *up_, P171 *res_333);
static void f_primary_336(struct f_greenc_1fr *up_, P171 *res_335);
static void f_agg_or_paren_338(struct f_greenc_1fr *up_, P171 *res_337);
static int f_choice_token_340(struct f_greenc_1fr *up_, P107 t_339);
static int f_aggregate_ahead_341(struct f_greenc_1fr *up_);
static void f_name_p_343(struct f_greenc_1fr *up_, P171 *res_342);
static void f_component_list_345(struct f_greenc_1fr *up_, P171 *res_344);
static void f_discrete_range_p_347(struct f_greenc_1fr *up_, P171 *res_346);
static void f_subtype_ind_349(struct f_greenc_1fr *up_, P171 *res_348);
static void f_type_spec_351(struct f_greenc_1fr *up_, P171 *res_350);
static void f_type_def_353(struct f_greenc_1fr *up_, P171 *res_352);
static void f_pragma_p_355(struct f_greenc_1fr *up_, P171 *res_354);
static void f_check_pragma_357(struct f_greenc_1fr *up_, P171 x_356);
static void f_skip_visibility_358(struct f_greenc_1fr *up_);
static void f_skip_representation_359(struct f_greenc_1fr *up_);
static void f_decl_part_361(struct f_greenc_1fr *up_, P171 *res_360);
static void f_object_decl_363(struct f_greenc_1fr *up_, P171 *res_362);
static void f_type_decl_365(struct f_greenc_1fr *up_, P171 *res_364);
static void f_formal_part_367(struct f_greenc_1fr *up_, P171 *res_366);
static void f_designator_369(struct f_greenc_1fr *up_, P137 *res_368);
static void f_subprogram_371(struct f_greenc_1fr *up_, P171 *res_370);
static void f_body_part_373(struct f_greenc_1fr *up_, P171 x_372);
static void f_parse_handlers_375(struct f_greenc_1fr *up_, P171 *res_374);
static void f_package_p_377(struct f_greenc_1fr *up_, P171 *res_376);
static int f_at_statements_end_378(struct f_greenc_1fr *up_);
static void f_statements_380(struct f_greenc_1fr *up_, P171 *res_379);
static void f_statement_382(struct f_greenc_1fr *up_, P171 *res_381);
static void f_task_statement_384(struct f_greenc_1fr *up_, P171 *res_383);
static void f_if_stmt_386(struct f_greenc_1fr *up_, P171 *res_385);
static void f_case_stmt_388(struct f_greenc_1fr *up_, P171 *res_387);
static void f_loop_stmt_390(struct f_greenc_1fr *up_, P171 *res_389);
static void f_compilation_392(struct f_greenc_1fr *up_, P171 *res_391);
static rt_int f_hash_394(struct f_greenc_1fr *up_, rt_gstr s_393);
static P114 f_lookup_396(struct f_greenc_1fr *up_, rt_gstr name_395);
static int f_same_task_399(struct f_greenc_1fr *up_, P114 a_397, P114 b_398);
static P114 f_lookup_entry_402(struct f_greenc_1fr *up_, rt_gstr name_400, P114 owner_401);
static P114 f_lookup_at_405(struct f_greenc_1fr *up_, rt_gstr name_403, rt_int d_404);
static rt_int f_enclosing_depth_407(struct f_greenc_1fr *up_, rt_gstr name_406);
static void f_push_unit_409(struct f_greenc_1fr *up_, P137 name_408);
static P114 f_lookup_decl_411(struct f_greenc_1fr *up_, P171 d_410);
static int f_overloadable_413(struct f_greenc_1fr *up_, P114 y_412);
static int f_same_416(struct f_greenc_1fr *up_, P119 a_414, P119 b_415);
static P119 f_root_418(struct f_greenc_1fr *up_, P119 t_417);
static int f_derived_from_421(struct f_greenc_1fr *up_, P119 a_419, P119 b_420);
static int f_is_numeric_423(struct f_greenc_1fr *up_, P119 t_422);
static int f_is_discrete_425(struct f_greenc_1fr *up_, P119 t_424);
static int f_same_signature_428(struct f_greenc_1fr *up_, P1695 a_426, P1695 b_427);
static int f_distinct_overload_431(struct f_greenc_1fr *up_, P114 y_429, P114 z_430);
static void f_define_434(struct f_greenc_1fr *up_, P114 y_432, rt_int line_433);
static void f_open_scope_435(struct f_greenc_1fr *up_);
static void f_close_scope_436(struct f_greenc_1fr *up_);
static P114 f_new_sym_439(struct f_greenc_1fr *up_, rt_int kind_437, P137 name_438);
static P119 f_new_typ_441(struct f_greenc_1fr *up_, rt_int kind_440);
static P175 f_new_cons_442(struct f_greenc_1fr *up_);
static int f_bounded_444(struct f_greenc_1fr *up_, P175 c_443);
static int f_bounded_hi_446(struct f_greenc_1fr *up_, P175 c_445);
static int f_static_bounds_448(struct f_greenc_1fr *up_, P175 c_447);
static int f_discriminated_450(struct f_greenc_1fr *up_, P175 c_449);
static rt_gstr f_kind_name_452(struct f_greenc_1fr *up_, P119 t_451);
static void f_check_type_456(struct f_greenc_1fr *up_, P119 got_453, P119 want_454, rt_int line_455);
static rt_int f_field_count_458(struct f_greenc_1fr *up_, P119 t_457);
static void f_ctype_461(struct f_greenc_1fr *up_, P119 t_459, P137 *r_460);
static void f_field_decls_464(struct f_greenc_1fr *up_, P119 t_462, P137 *r_463);
static void f_declare_ctype_466(struct f_greenc_1fr *up_, P119 t_465);
static rt_int f_lit_index_469(struct f_greenc_1fr *up_, P171 lits_467, rt_gstr name_468);
static void f_manifest_473(struct f_greenc_1fr *up_, P171 e_470, rt_int *v_471, int *ok_472);
static void f_resolve_477(struct f_greenc_1fr *up_, P171 st_474, P119 *t_475, P175 *c_476);
static void f_constraint_list_481(struct f_greenc_1fr *up_, P171 st_478, P119 t_479, P175 c_480);
static void f_discriminant_constraint_485(struct f_greenc_1fr *up_, P171 st_482, P119 t_483, P175 c_484);
static void f_discrete_bounds_491(struct f_greenc_1fr *up_, P171 r_486, P119 want_487, P119 *t_488, P137 *lo_489, P137 *hi_490);
static void f_range_of_495(struct f_greenc_1fr *up_, P171 r_492, P119 t_493, P175 c_494);
static void f_fresh_typ_499(struct f_greenc_1fr *up_, rt_int kind_496, P137 name_497, P119 *t_498);
static void f_inherit_503(struct f_greenc_1fr *up_, P119 parent_500, P119 t_501, rt_int line_502);
static void f_derive_literals_506(struct f_greenc_1fr *up_, P119 t_504, rt_int line_505);
static void f_type_definition_511(struct f_greenc_1fr *up_, P171 d_507, P137 name_508, P119 *t_509, P175 *c_510);
static void f_array_type_518(struct f_greenc_1fr *up_, P171 idx_512, P171 comp_513, P137 name_514, rt_int line_515, P119 *t_516, P175 *c_517);
static void f_static_range_522(struct f_greenc_1fr *up_, P171 l_519, P171 h_520, P175 c_521);
static void f_component_place_528(struct f_greenc_1fr *up_, P119 rt_523, P1710 f_524, rt_gstr a_525, rt_gstr ct_526, P137 *r_527);
static rt_gstr f_no_value_530(struct f_greenc_1fr *up_, P119 t_529);
static void f_elem_ctype_533(struct f_greenc_1fr *up_, P119 t_531, P137 *r_532);
static void f_first_index_536(struct f_greenc_1fr *up_, P119 t_534, P137 *r_535);
static int f_is_string_538(struct f_greenc_1fr *up_, P119 t_537);
static rt_gstr f_subst_541(struct f_greenc_1fr *up_, rt_gstr s_539, rt_gstr r_540);
static int f_mentions_record_543(struct f_greenc_1fr *up_, P137 s_542);
static void f_subst_cons_547(struct f_greenc_1fr *up_, P175 c_544, rt_gstr r_545, P175 *res_546);
static void f_remove_sym_549(struct f_greenc_1fr *up_, P114 y_548);
static void f_record_components_554(struct f_greenc_1fr *up_, P171 list_550, P119 t_551, P1835 g_552, rt_int line_553);
static void f_guard_cond_558(struct f_greenc_1fr *up_, P1835 g_555, P119 t_556, P137 *r_557);
static void f_arm_test_563(struct f_greenc_1fr *up_, P171 arm_559, P137 dname_560, rt_gstr d_561, P137 *x_562);
static void f_derived_type_568(struct f_greenc_1fr *up_, P171 d_564, P137 name_565, P119 *t_566, P175 *c_567);
static void f_real_type_573(struct f_greenc_1fr *up_, P171 d_569, P137 name_570, P119 *t_571, P175 *c_572);
static void f_finish_ptr_575(struct f_greenc_1fr *up_, P119 t_574);
static void f_init_storage_579(struct f_greenc_1fr *up_, rt_gstr lval_576, P119 t_577, P175 c_578);
static int f_composite_581(struct f_greenc_1fr *up_, P119 t_580);
static void f_assign_code_587(struct f_greenc_1fr *up_, rt_gstr lval_582, P119 t_583, rt_gstr v_584, P175 c_585, P137 *r_586);
static void f_copy_code_591(struct f_greenc_1fr *up_, P119 t_588, rt_gstr v_589, P137 *r_590);
static void f_eq_code_596(struct f_greenc_1fr *up_, P119 t_592, rt_gstr a_593, rt_gstr b_594, P137 *r_595);
static int f_seen_name_599(struct f_greenc_1fr *up_, P148 l_597, rt_gstr s_598);
static void f_emit_helpers_600(struct f_greenc_1fr *up_);
static void f_helper_bodies_602(struct f_greenc_1fr *up_, P119 t_601);
static void f_storage_606(struct f_greenc_1fr *up_, rt_gstr name_603, P119 t_604, P137 *access_code_605);
static void f_bind_609(struct f_greenc_1fr *up_, P114 y_607, P137 access_code_608);
static void f_declare_subprograms_611(struct f_greenc_1fr *up_, P171 from_610);
static void f_declare_one_613(struct f_greenc_1fr *up_, P171 e_612);
static void f_build_subprogram_616(struct f_greenc_1fr *up_, P171 d_614, P114 *y_615);
static void f_decl_elements_618(struct f_greenc_1fr *up_, P171 decls_617);
static void f_decl_element_620(struct f_greenc_1fr *up_, P171 e_619);
static void f_pragma_decl_622(struct f_greenc_1fr *up_, P171 e_621);
static void f_resolve_object_type_626(struct f_greenc_1fr *up_, P171 st_623, P119 *t_624, P175 *c_625);
static void f_other_decl_628(struct f_greenc_1fr *up_, P171 e_627);
static int f_is_foreign_630(struct f_greenc_1fr *up_, P171 d_629);
static void f_subprogram_body_633(struct f_greenc_1fr *up_, P171 d_631, P114 y_632);
static void f_gen_statements_635(struct f_greenc_1fr *up_, P171 stmts_634);
static void f_pop_frames_637(struct f_greenc_1fr *up_, rt_int upto_636);
static void f_push_cleanup_639(struct f_greenc_1fr *up_, rt_gstr s_638);
static void f_pop_cleanup_640(struct f_greenc_1fr *up_);
static void f_guarded_644(struct f_greenc_1fr *up_, P171 stmts_641, P171 hs_642, rt_int line_643);
static void f_exc_id_648(struct f_greenc_1fr *up_, rt_gstr name_645, rt_int line_646, P137 *r_647);
static void f_gen_statement_650(struct f_greenc_1fr *up_, P171 s_649);
static void f_slice_assign_652(struct f_greenc_1fr *up_, P171 s_651);
static void f_gen_call_654(struct f_greenc_1fr *up_, P171 s_653);
static void f_gen_if_656(struct f_greenc_1fr *up_, P171 s_655);
static void f_gen_case_658(struct f_greenc_1fr *up_, P171 s_657);
static void f_push_exit_662(struct f_greenc_1fr *up_, P137 match_659, int is_loop_660, P137 *label_661);
static void f_gen_loop_664(struct f_greenc_1fr *up_, P171 s_663);
static void f_gen_block_666(struct f_greenc_1fr *up_, P171 s_665);
static int f_exit_matches_669(struct f_greenc_1fr *up_, P171 s_667, P140 x_668);
static void f_gen_exit_671(struct f_greenc_1fr *up_, P171 s_670);
static void f_gen_return_673(struct f_greenc_1fr *up_, P171 s_672);
static void f_access_of_676(struct f_greenc_1fr *up_, P114 y_674, P137 *r_675);
static void f_link_to_679(struct f_greenc_1fr *up_, rt_int l_677, P137 *r_678);
static rt_gstr f_c_ident_681(struct f_greenc_1fr *up_, rt_gstr s_680);
static void f_deref_685(struct f_greenc_1fr *up_, rt_gstr base_682, P119 t_683, P137 *r_684);
static int f_is_object_687(struct f_greenc_1fr *up_, P171 e_686);
static int f_is_const_access_689(struct f_greenc_1fr *up_, P171 e_688);
static void f_lvalue_695(struct f_greenc_1fr *up_, P171 e_690, P137 *code_out_691, P119 *t_692, P175 *c_693, int *ro_694);
static void f_select_on_704(struct f_greenc_1fr *up_, rt_gstr base_696, P119 bt_697, P171 e_698, int *ro_699, int lv_700, P137 *code_out_701, P119 *t_702, P175 *c_703);
static void f_index_on_713(struct f_greenc_1fr *up_, rt_gstr base_705, P119 bt_706, P171 e_707, int *ro_708, int lv_709, P137 *code_out_710, P119 *t_711, P175 *c_712);
static int f_type_attribute_716(struct f_greenc_1fr *up_, P119 t_714, rt_gstr name_715);
static int f_is_type_name_718(struct f_greenc_1fr *up_, rt_gstr n_717);
static int f_is_char_lit_720(struct f_greenc_1fr *up_, P171 e_719);
static int f_is_enum_lit_722(struct f_greenc_1fr *up_, P171 e_721);
static rt_gstr f_c_string_724(struct f_greenc_1fr *up_, rt_gstr s_723);
static int f_is_literal_726(struct f_greenc_1fr *up_, P171 e_725);
static void f_range_bounds_734(struct f_greenc_1fr *up_, P171 l_727, P171 h_728, P119 want_729, rt_int line_730, P119 *t_731, P137 *lo_732, P137 *hi_733);
static void f_gexpr_739(struct f_greenc_1fr *up_, P171 e_735, P119 want_736, P119 *t_737, P137 *r_738);
static void f_gexpr_1_744(struct f_greenc_1fr *up_, P171 e_740, P119 want_741, P119 *t_742, P137 *r_743);
static void f_string_aggregate_749(struct f_greenc_1fr *up_, P171 e_745, P119 want_746, P119 *t_747, P137 *r_748);
static void f_char_literal_754(struct f_greenc_1fr *up_, P171 e_750, P119 want_751, P119 *t_752, P137 *r_753);
static void f_expanded_757(struct f_greenc_1fr *up_, P171 e_755, P171 *r_756);
static void f_gen_name_762(struct f_greenc_1fr *up_, P171 e_758, P119 want_759, P119 *t_760, P137 *r_761);
static void f_gen_unop_767(struct f_greenc_1fr *up_, P171 e_763, P119 want_764, P119 *t_765, P137 *r_766);
static int f_short_int_769(struct f_greenc_1fr *up_, P119 t_768);
static rt_gstr f_float_kind_771(struct f_greenc_1fr *up_, P119 t_770);
static void f_membership_774(struct f_greenc_1fr *up_, P171 e_772, P137 *r_773);
static void f_condition_779(struct f_greenc_1fr *up_, P171 e_775, P119 want_776, P119 *t_777, P137 *r_778);
static void f_catenation_784(struct f_greenc_1fr *up_, P171 e_780, P119 want_781, P119 *t_782, P137 *r_783);
static void f_cat_operand_789(struct f_greenc_1fr *up_, P171 x_785, P119 arrt_786, rt_int line_787, P137 *r_788);
static void f_arithmetic_794(struct f_greenc_1fr *up_, P171 e_790, P119 want_791, P119 *t_792, P137 *r_793);
static void f_fixed_operation_802(struct f_greenc_1fr *up_, P171 e_795, P119 ta_796, P119 tb_797, rt_gstr a_798, rt_gstr b_799, P119 *t_800, P137 *r_801);
static void f_gen_binop_807(struct f_greenc_1fr *up_, P171 e_803, P119 want_804, P119 *t_805, P137 *r_806);
static void f_conversion_812(struct f_greenc_1fr *up_, P171 e_808, P114 y_809, P119 *t_810, P137 *r_811);
static void f_constrain_816(struct f_greenc_1fr *up_, P114 y_813, P119 t_814, P137 *r_815);
static void f_array_conversion_823(struct f_greenc_1fr *up_, P171 e_817, P119 t_818, P119 aty_819, P175 c_820, rt_gstr a_821, P137 *r_822);
static void f_gen_attr_828(struct f_greenc_1fr *up_, P171 e_824, P119 want_825, P119 *t_826, P137 *r_827);
static void f_type_bits_832(struct f_greenc_1fr *up_, P119 t_829, P175 c_830, P137 *r_831);
static void f_object_bits_836(struct f_greenc_1fr *up_, P119 t_833, rt_gstr v_834, P137 *r_835);
static void f_numeric_attr_842(struct f_greenc_1fr *up_, P171 e_837, P119 tt_838, P175 c_839, P119 *t_840, P137 *r_841);
static void f_component_attr_846(struct f_greenc_1fr *up_, P171 e_843, P119 *t_844, P137 *r_845);
static void f_config_attr_850(struct f_greenc_1fr *up_, P171 e_847, P119 *t_848, P137 *r_849);
static void f_attr_dim_854(struct f_greenc_1fr *up_, P171 e_851, P119 arrt_852, rt_int *n_853);
static void f_object_array_attr_860(struct f_greenc_1fr *up_, P171 e_855, P119 arrt_856, rt_gstr v_857, P119 *t_858, P137 *r_859);
static void f_type_array_attr_866(struct f_greenc_1fr *up_, P171 e_861, P119 arrt_862, P175 c_863, P119 *t_864, P137 *r_865);
static void f_lit_table_869(struct f_greenc_1fr *up_, P119 t_867, P137 *r_868);
static void f_val_rep_875(struct f_greenc_1fr *up_, P171 e_870, P119 tt_871, P175 c_872, P119 *t_873, P137 *r_874);
static void f_allocator_880(struct f_greenc_1fr *up_, P171 e_876, P119 want_877, P119 *t_878, P137 *r_879);
static void f_aggregate_885(struct f_greenc_1fr *up_, P171 e_881, P119 want_882, P119 *t_883, P137 *r_884);
static void f_captured_888(struct f_greenc_1fr *up_, P123 b_886, P137 *r_887);
static P1710 f_field_at_891(struct f_greenc_1fr *up_, P119 rt_889, rt_int k_890);
static int f_names_field_894(struct f_greenc_1fr *up_, P171 x_892, P1710 f_893);
static P171 f_item_for_899(struct f_greenc_1fr *up_, P171 e_895, P119 rt_896, rt_int k_897, rt_int p_898);
static void f_arm_holds_903(struct f_greenc_1fr *up_, P171 arm_900, rt_int v_901, int *res_902);
static void f_record_aggregate_907(struct f_greenc_1fr *up_, P171 e_904, P119 rt_905, P137 *r_906);
static rt_int f_field_index_910(struct f_greenc_1fr *up_, P119 rt_908, rt_gstr name_909);
static void f_agg_component_916(struct f_greenc_1fr *up_, rt_gstr tmp_911, P119 rt_912, rt_int k_913, P171 v_914, rt_int line_915);
static void f_static_choice_920(struct f_greenc_1fr *up_, P171 x_917, rt_int *v_918, int *ok_919);
static void f_array_aggregate_925(struct f_greenc_1fr *up_, P171 e_921, P119 arrt_922, P137 bounds_923, P137 *r_924);
static void f_element_store_929(struct f_greenc_1fr *up_, rt_gstr lv_926, P119 arrt_927, rt_gstr v_928);
static void f_check_choices_933(struct f_greenc_1fr *up_, P171 e_930, P119 arrt_931, int has_others_932);
static P171 f_actual_for_937(struct f_greenc_1fr *up_, P171 args_934, P1695 pm_935, P1695 first_936);
static void f_gcall_942(struct f_greenc_1fr *up_, P171 e_938, int is_stmt_939, P119 *t_940, P137 *r_941);
static void f_gcall_with_947(struct f_greenc_1fr *up_, P171 e_943, P114 y_944, P119 *t_945, P137 *r_946);
static void f_builtin_954(struct f_greenc_1fr *up_, rt_gstr name_948, P171 args_949, rt_int line_950, int is_stmt_951, P119 *t_952, P137 *r_953);
static P114 f_lookup_path_956(struct f_greenc_1fr *up_, rt_gstr p_955);
static int f_is_package_958(struct f_greenc_1fr *up_, P171 e_957);
static P114 f_member_of_962(struct f_greenc_1fr *up_, rt_gstr p_959, rt_gstr name_960, rt_int line_961);
static int f_inside_package_964(struct f_greenc_1fr *up_, P171 p_963);
static void f_copy_sym_967(struct f_greenc_1fr *up_, P114 y_965, P114 *z_966);
static void f_complete_private_970(struct f_greenc_1fr *up_, P119 ph_968, P119 full_969);
static void f_package_spec_972(struct f_greenc_1fr *up_, P171 e_971);
static int f_hidden_from_975(struct f_greenc_1fr *up_, P114 m_973, P114 first_private_974);
static void f_package_body_977(struct f_greenc_1fr *up_, P171 e_976);
static int f_use_visible_979(struct f_greenc_1fr *up_, P114 old_978);
static void f_use_clause_981(struct f_greenc_1fr *up_, P171 e_980);
static void f_fits_986(struct f_greenc_1fr *up_, P114 y_982, P171 args_983, P119 want_984, int *ok_985);
static int f_is_builtin_988(struct f_greenc_1fr *up_, rt_gstr n_987);
static void f_resolve_overload_995(struct f_greenc_1fr *up_, rt_gstr name_989, P171 args_990, int is_stmt_991, P119 want_992, rt_int line_993, P114 *y_994);
static void f_resolve_member_overload_1003(struct f_greenc_1fr *up_, rt_gstr p_996, rt_gstr name_997, P171 args_998, int is_stmt_999, P119 want_1000, rt_int line_1001, P114 *y_1002);
static void f_user_operator_1009(struct f_greenc_1fr *up_, P171 e_1004, P119 want_1005, P119 *t_1006, P137 *r_1007, int *done_1008);
static void f_task_p_1011(struct f_greenc_1fr *up_, P171 *res_1010);
static void f_entry_p_1013(struct f_greenc_1fr *up_, P171 *res_1012);
static void f_accept_p_1015(struct f_greenc_1fr *up_, P171 *res_1014);
static void f_delay_p_1017(struct f_greenc_1fr *up_, P171 *res_1016);
static void f_designators_1019(struct f_greenc_1fr *up_, P171 *res_1018);
static void f_parse_task_statement_1021(struct f_greenc_1fr *up_, P171 *res_1020);
static void f_path_at_1025(struct f_greenc_1fr *up_, rt_int level_1022, rt_gstr field_1023, P137 *r_1024);
static int f_is_task_name_1027(struct f_greenc_1fr *up_, rt_gstr n_1026);
static void f_task_of_1031(struct f_greenc_1fr *up_, P171 e_1028, P114 *y_1029, P171 *ix_1030);
static void f_own_index_1033(struct f_greenc_1fr *up_, P137 *r_1032);
static void f_member_1038(struct f_greenc_1fr *up_, P114 y_1034, rt_gstr arr_1035, rt_gstr i_1036, P137 *r_1037);
static void f_act_path_1041(struct f_greenc_1fr *up_, P114 y_1039, P137 *r_1040);
static void f_act_path_i_1045(struct f_greenc_1fr *up_, P114 y_1042, rt_gstr i_1043, P137 *r_1044);
static void f_entry_path_1049(struct f_greenc_1fr *up_, P114 y_1046, rt_gstr i_1047, P137 *r_1048);
static void f_declare_slot_1052(struct f_greenc_1fr *up_, rt_gstr ctype_name_1050, rt_gstr field_1051);
static void f_task_decl_1054(struct f_greenc_1fr *up_, P171 e_1053);
static void f_family_arg_struct_1055(struct f_greenc_1fr *up_);
static void f_family_bounds_1059(struct f_greenc_1fr *up_, P171 b_1056, P114 y_1057, P137 x_1058);
static void f_entry_family_slot_1064(struct f_greenc_1fr *up_, P114 y_1060, rt_gstr base_1061, rt_gstr i_1062, P137 *r_1063);
static void f_task_spec_1066(struct f_greenc_1fr *up_, P171 e_1065);
static void f_entry_decl_1068(struct f_greenc_1fr *up_, P171 e_1067);
static void f_task_body_1070(struct f_greenc_1fr *up_, P171 e_1069);
static void f_task_awaits_1073(struct f_greenc_1fr *up_, P171 decls_1071, P137 *aw_1072);
static void f_task_failure_1075(struct f_greenc_1fr *up_, P171 s_1074);
static void f_entry_sym_1079(struct f_greenc_1fr *up_, P171 e_1076, P114 *y_1077, P171 *ix_1078);
static void f_other_call_1084(struct f_greenc_1fr *up_, P171 e_1080, int is_stmt_1081, P119 *t_1082, P137 *r_1083);
static void f_other_attr_1089(struct f_greenc_1fr *up_, P171 e_1085, P114 y_1086, P119 *t_1087, P137 *r_1088);
static void f_member_attr_1093(struct f_greenc_1fr *up_, P171 e_1090, P119 *t_1091, P137 *r_1092);
static void f_task_builtin_1099(struct f_greenc_1fr *up_, rt_gstr name_1094, P171 args_1095, rt_int line_1096, P119 *t_1097, P137 *r_1098);
static void f_gen_accept_1101(struct f_greenc_1fr *up_, P171 s_1100);
static void f_member_slot_1105(struct f_greenc_1fr *up_, P114 y_1102, P171 s_1103, P137 *ent_1104);
static void f_gen_delay_ticks_1108(struct f_greenc_1fr *up_, P171 e_1106, P137 *r_1107);
static void f_gen_select_1110(struct f_greenc_1fr *up_, P171 s_1109);
static void f_family_range_1115(struct f_greenc_1fr *up_, P114 y_1111, P171 ix_1112, P137 *lo_1113, P137 *hi_1114);
static void f_task_statement_gen_1117(struct f_greenc_1fr *up_, P171 s_1116);
static P171 f_root_name_1119(struct f_greenc_1fr *up_, P171 e_1118);
static void f_check_pure_target_1122(struct f_greenc_1fr *up_, P171 target_1120, rt_int line_1121);
static int f_assigns_nonlocal_1125(struct f_greenc_1fr *up_, P171 d_1123, rt_gstr name_1124);
static int f_declares_1128(struct f_greenc_1fr *up_, P171 d_1126, rt_gstr name_1127);
static int f_scan_handlers_1132(struct f_greenc_1fr *up_, P171 h_1129, P171 d_1130, rt_gstr name_1131);
static int f_scan_assigns_1136(struct f_greenc_1fr *up_, P171 stmts_1133, P171 d_1134, rt_gstr name_1135);
static void f_check_call_rules_1139(struct f_greenc_1fr *up_, P171 e_1137, P114 y_1138);
static void f_generic_p_1141(struct f_greenc_1fr *up_, P171 *res_1140);
static void f_instantiation_1144(struct f_greenc_1fr *up_, P171 x_1142, P171 *res_1143);
static void f_generic_decl_1146(struct f_greenc_1fr *up_, P171 e_1145);
static int f_is_generic_name_1148(struct f_greenc_1fr *up_, rt_gstr n_1147);
static void f_attach_generic_body_1150(struct f_greenc_1fr *up_, P171 e_1149);
static void f_restore_generic_context_1153(struct f_greenc_1fr *up_, P171 body_node_1151, rt_int line_1152);
static P171 f_gactual_1157(struct f_greenc_1fr *up_, P171 args_1154, rt_int nth_1155, rt_gstr name_1156);
static void f_copy_node_1161(struct f_greenc_1fr *up_, P171 n_1158, P137 name_1159, P171 *r_1160);
static int f_matches_formal_1165(struct f_greenc_1fr *up_, P114 y_1162, rt_gstr name_1163, P114 fs_1164);
static void f_instantiate_1167(struct f_greenc_1fr *up_, P171 e_1166);
static void f_predef_type_1172(struct f_greenc_1fr *up_, rt_gstr name_1168, P119 t_1169, rt_gstr lo_1170, rt_gstr hi_1171);
static void f_predef_const_1176(struct f_greenc_1fr *up_, rt_gstr name_1173, P119 t_1174, rt_gstr code_text_1175);
static void f_predef_exc_1178(struct f_greenc_1fr *up_, rt_gstr name_1177);
static void f_predef_lit_1182(struct f_greenc_1fr *up_, rt_gstr name_1179, P119 t_1180, rt_int v_1181);
static void f_predefine_1183(struct f_greenc_1fr *up_);
static void f_translate_1185(struct f_greenc_1fr *up_, P171 u_1184);
static void f_print_program_1186(struct f_greenc_1fr *up_);
static void f_greenc_1(void);
static int ex_compile_error_105;
static P137 f_mk_211(struct f_greenc_1fr *up_, rt_gstr s_210) {
  struct f_mk_211fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_210 = cp_rt_gstr(s_210);
F->r_1188.lo = ((rt_int)1LL); F->r_1188.hi = ({ rt_gstr at1187 = F->s_210; at1187.hi >= at1187.lo ? at1187.hi - at1187.lo + 1 : (rt_int)0; });
F->r_1188.lo2 = 1; F->r_1188.hi2 = 1;
F->r_1188.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->r_1188));
memset(F->r_1188.p, 0xFF, (size_t)G_CNT(F->r_1188));
as_rt_gstr(&F->r_1188, F->s_210);
F->result_ = ({ rt_gstr *cell1190 = rt_alloc(sizeof(rt_gstr)); *cell1190 = cp_rt_gstr(F->r_1188); (P137)cell1190; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_new_name_214(struct f_greenc_1fr *up_, rt_gstr base_212, P137 *res_213) {
  struct f_new_name_214fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_212 = cp_rt_gstr(base_212);
F->res_213 = res_213;
F->up->serial_122 = rt_add(G_NV(F->up->serial_122), ((rt_int)1LL));
(*F->res_213) = ({ rt_gstr *cell1191 = rt_alloc(sizeof(rt_gstr)); *cell1191 = cp_rt_gstr(cat_rt_gstr(F->base_212, rt_g_s2g(rt_str_of_int(G_NV(F->up->serial_122))))); (P137)cell1191; });
goto ret_;
ret_:

  return;
}

static int f_is_letter_216(struct f_greenc_1fr *up_, int c_215) {
  struct f_is_letter_216fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_215 = c_215;
F->result_ = (((F->c_215 >= 65) && (F->c_215 <= 90)) || ((F->c_215 >= 97) && (F->c_215 <= 122)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_digit_218(struct f_greenc_1fr *up_, int c_217) {
  struct f_is_digit_218fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_217 = c_217;
F->result_ = ((F->c_217 >= 48) && (F->c_217 <= 57));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_upper_220(struct f_greenc_1fr *up_, int c_219) {
  struct f_upper_220fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_219 = c_219;
if (((F->c_219 >= 97) && (F->c_219 <= 122))) {
F->result_ = rt_range((rt_sub(((rt_int)(F->c_219) + 1), ((rt_int)32LL)) - 1), 0, 127);
goto ret_;
}
F->result_ = F->c_219;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_lower_s_222(struct f_greenc_1fr *up_, rt_gstr s_221) {
  struct f_lower_s_222fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_221 = cp_rt_gstr(s_221);
F->r_1192 = cp_rt_gstr(F->s_221);
{ rt_int lo1196 = ((rt_int)1LL), hi1197 = ({ rt_gstr at1194 = F->s_221; at1194.hi >= at1194.lo ? at1194.hi - at1194.lo + 1 : (rt_int)0; });
for (rt_int it1198 = lo1196; it1198 <= hi1197; it1198++) {
F->i_1195 = it1198;
if (((G_NV(({ rt_gstr ix1199 = F->r_1192; ix1199.p[rt_index(F->i_1195, ix1199.lo, ix1199.hi) - ix1199.lo]; })) >= 65) && (G_NV(({ rt_gstr ix1200 = F->r_1192; ix1200.p[rt_index(F->i_1195, ix1200.lo, ix1200.hi) - ix1200.lo]; })) <= 90))) {
(*({ rt_gstr *ix1201 = &(F->r_1192); &ix1201->p[rt_index(F->i_1195, ix1201->lo, ix1201->hi) - ix1201->lo]; })) = rt_range((rt_add(((rt_int)(G_NV(({ rt_gstr ix1202 = F->r_1192; ix1202.p[rt_index(F->i_1195, ix1202.lo, ix1202.hi) - ix1202.lo]; }))) + 1), ((rt_int)32LL)) - 1), 0, 127);
}
}
}
L_end_1193: ;
F->result_ = F->r_1192;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_upper_s_224(struct f_greenc_1fr *up_, rt_gstr s_223) {
  struct f_upper_s_224fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_223 = cp_rt_gstr(s_223);
F->r_1203 = cp_rt_gstr(F->s_223);
{ rt_int lo1207 = ((rt_int)1LL), hi1208 = ({ rt_gstr at1205 = F->s_223; at1205.hi >= at1205.lo ? at1205.hi - at1205.lo + 1 : (rt_int)0; });
for (rt_int it1209 = lo1207; it1209 <= hi1208; it1209++) {
F->i_1206 = it1209;
(*({ rt_gstr *ix1210 = &(F->r_1203); &ix1210->p[rt_index(F->i_1206, ix1210->lo, ix1210->hi) - ix1210->lo]; })) = f_upper_220(F->up, G_NV(({ rt_gstr ix1212 = F->r_1203; ix1212.p[rt_index(F->i_1206, ix1212.lo, ix1212.hi) - ix1212.lo]; })));
}
}
L_end_1204: ;
F->result_ = F->r_1203;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_operator_226(struct f_greenc_1fr *up_, rt_gstr s_225) {
  struct f_is_operator_226fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_225 = cp_rt_gstr(s_225);
F->result_ = (((((((((((((((eq_rt_gstr(F->s_225, rt_g_lit("+", 1)) || eq_rt_gstr(F->s_225, rt_g_lit("-", 1))) || eq_rt_gstr(F->s_225, rt_g_lit("*", 1))) || eq_rt_gstr(F->s_225, rt_g_lit("/", 1))) || eq_rt_gstr(F->s_225, rt_g_lit("**", 2))) || eq_rt_gstr(F->s_225, rt_g_lit("&", 1))) || eq_rt_gstr(F->s_225, rt_g_lit("=", 1))) || eq_rt_gstr(F->s_225, rt_g_lit("<", 1))) || eq_rt_gstr(F->s_225, rt_g_lit("<=", 2))) || eq_rt_gstr(F->s_225, rt_g_lit(">", 1))) || eq_rt_gstr(F->s_225, rt_g_lit(">=", 2))) || eq_rt_gstr(F->s_225, rt_g_lit("MOD", 3))) || eq_rt_gstr(F->s_225, rt_g_lit("AND", 3))) || eq_rt_gstr(F->s_225, rt_g_lit("OR", 2))) || eq_rt_gstr(F->s_225, rt_g_lit("XOR", 3))) || eq_rt_gstr(F->s_225, rt_g_lit("NOT", 3)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_c_field_228(struct f_greenc_1fr *up_, rt_gstr s_227) {
  struct f_c_field_228fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_227 = cp_rt_gstr(s_227);
F->result_ = cat_rt_gstr(f_lower_s_222(F->up, F->s_227), one_rt_gstr(95));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_q_229(struct f_greenc_1fr *up_) {
  struct f_q_229fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = rt_g_lit("\"", 1);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_fail_232(struct f_greenc_1fr *up_, rt_int line_230, rt_gstr msg_231) {
  struct f_fail_232fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_230 = line_230;
F->msg_231 = cp_rt_gstr(msg_231);
if ((G_NV(F->up->trial_152) == ((rt_int)0LL))) {
rt_g_put(rt_g_g2s(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("greenc: line ", 13), rt_g_s2g(rt_str_of_int(F->line_230))), rt_g_lit(": ", 2)), F->msg_231)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
}
rt_raise(ex_compile_error_105);
ret_:

  return;
}

static P123 f_new_buffer_233(struct f_greenc_1fr *up_) {
  struct f_new_buffer_233fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ({ R124 *cell1213 = rt_alloc(sizeof(R124)); *cell1213 = cp_R124(({ R124 ag1214; ag1214.head_ = NULL; ag1214.tail_ = NULL; ag1214; })); (P123)cell1213; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_put_to_236(struct f_greenc_1fr *up_, P123 b_234, rt_gstr s_235) {
  struct f_put_to_236fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_234 = b_234;
F->s_235 = cp_rt_gstr(s_235);
F->l_1215 = NULL;
F->l_1215 = ({ R149 *cell1216 = rt_alloc(sizeof(R149)); *cell1216 = cp_R149(({ R149 ag1217; ag1217.s_ = NULL; ag1217.next_ = NULL; ag1217; })); (P148)cell1216; });
(*(P148)rt_nil_check(F->l_1215)).s_ = f_mk_211(F->up, F->s_235);
if (((*(P123)rt_nil_check(F->b_234)).tail_ == NULL)) {
(*(P123)rt_nil_check(F->b_234)).head_ = F->l_1215;
} else {
(*(P148)rt_nil_check((*(P123)rt_nil_check(F->b_234)).tail_)).next_ = F->l_1215;
}
(*(P123)rt_nil_check(F->b_234)).tail_ = F->l_1215;
ret_:

  return;
}

static void f_emit_238(struct f_greenc_1fr *up_, rt_gstr s_237) {
  struct f_emit_238fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_237 = cp_rt_gstr(s_237);
f_put_to_236(F->up, F->up->code_133, F->s_237);
ret_:

  return;
}

static void f_print_buffer_240(struct f_greenc_1fr *up_, P123 b_239) {
  struct f_print_buffer_240fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_239 = b_239;
F->l_1218 = NULL;
F->l_1218 = (*(P123)rt_nil_check(F->b_239)).head_;
while ((F->l_1218 != NULL)) {
rt_g_put(rt_g_g2s((*(P137)rt_nil_check((*(P148)rt_nil_check(F->l_1218)).s_))));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
F->l_1218 = (*(P148)rt_nil_check(F->l_1218)).next_;
}
L_end_1219: ;
ret_:

  return;
}

static void f_splice_243(struct f_greenc_1fr *up_, P123 a_241, P123 b_242) {
  struct f_splice_243fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_241 = a_241;
F->b_242 = b_242;
if (((*(P123)rt_nil_check(F->b_242)).head_ == NULL)) {
goto ret_;
}
if (((*(P123)rt_nil_check(F->a_241)).tail_ == NULL)) {
(*(P123)rt_nil_check(F->a_241)).head_ = (*(P123)rt_nil_check(F->b_242)).head_;
} else {
(*(P148)rt_nil_check((*(P123)rt_nil_check(F->a_241)).tail_)).next_ = (*(P123)rt_nil_check(F->b_242)).head_;
}
(*(P123)rt_nil_check(F->a_241)).tail_ = (*(P123)rt_nil_check(F->b_242)).tail_;
(*(P123)rt_nil_check(F->b_242)).head_ = NULL;
(*(P123)rt_nil_check(F->b_242)).tail_ = NULL;
ret_:

  return;
}

static int f_is_reserved_245(struct f_greenc_1fr *up_, rt_gstr w_244) {
  struct f_is_reserved_245fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_244 = cp_rt_gstr(w_244);
{ rt_int sel1221 = ({ rt_gstr at1220 = F->w_244; at1220.hi >= at1220.lo ? at1220.hi - at1220.lo + 1 : (rt_int)0; });
if (0 || sel1221 == ((rt_int)2LL)) {
F->result_ = ((((((eq_rt_gstr(F->w_244, rt_g_lit("AT", 2)) || eq_rt_gstr(F->w_244, rt_g_lit("DO", 2))) || eq_rt_gstr(F->w_244, rt_g_lit("IF", 2))) || eq_rt_gstr(F->w_244, rt_g_lit("IN", 2))) || eq_rt_gstr(F->w_244, rt_g_lit("IS", 2))) || eq_rt_gstr(F->w_244, rt_g_lit("OF", 2))) || eq_rt_gstr(F->w_244, rt_g_lit("OR", 2)));
goto ret_;
} else if (0 || sel1221 == ((rt_int)3LL)) {
F->result_ = (((((((((eq_rt_gstr(F->w_244, rt_g_lit("ALL", 3)) || eq_rt_gstr(F->w_244, rt_g_lit("AND", 3))) || eq_rt_gstr(F->w_244, rt_g_lit("END", 3))) || eq_rt_gstr(F->w_244, rt_g_lit("FOR", 3))) || eq_rt_gstr(F->w_244, rt_g_lit("MOD", 3))) || eq_rt_gstr(F->w_244, rt_g_lit("NEW", 3))) || eq_rt_gstr(F->w_244, rt_g_lit("NOT", 3))) || eq_rt_gstr(F->w_244, rt_g_lit("OUT", 3))) || eq_rt_gstr(F->w_244, rt_g_lit("USE", 3))) || eq_rt_gstr(F->w_244, rt_g_lit("XOR", 3)));
goto ret_;
} else if (0 || sel1221 == ((rt_int)4LL)) {
F->result_ = ((((((((((eq_rt_gstr(F->w_244, rt_g_lit("BODY", 4)) || eq_rt_gstr(F->w_244, rt_g_lit("CASE", 4))) || eq_rt_gstr(F->w_244, rt_g_lit("ELSE", 4))) || eq_rt_gstr(F->w_244, rt_g_lit("EXIT", 4))) || eq_rt_gstr(F->w_244, rt_g_lit("GOTO", 4))) || eq_rt_gstr(F->w_244, rt_g_lit("LOOP", 4))) || eq_rt_gstr(F->w_244, rt_g_lit("NULL", 4))) || eq_rt_gstr(F->w_244, rt_g_lit("TASK", 4))) || eq_rt_gstr(F->w_244, rt_g_lit("THEN", 4))) || eq_rt_gstr(F->w_244, rt_g_lit("TYPE", 4))) || eq_rt_gstr(F->w_244, rt_g_lit("WHEN", 4)));
goto ret_;
} else if (0 || sel1221 == ((rt_int)5LL)) {
F->result_ = (((((((((eq_rt_gstr(F->w_244, rt_g_lit("ABORT", 5)) || eq_rt_gstr(F->w_244, rt_g_lit("ARRAY", 5))) || eq_rt_gstr(F->w_244, rt_g_lit("BEGIN", 5))) || eq_rt_gstr(F->w_244, rt_g_lit("DELAY", 5))) || eq_rt_gstr(F->w_244, rt_g_lit("DELTA", 5))) || eq_rt_gstr(F->w_244, rt_g_lit("ELSIF", 5))) || eq_rt_gstr(F->w_244, rt_g_lit("ENTRY", 5))) || eq_rt_gstr(F->w_244, rt_g_lit("RAISE", 5))) || eq_rt_gstr(F->w_244, rt_g_lit("RANGE", 5))) || eq_rt_gstr(F->w_244, rt_g_lit("WHILE", 5)));
goto ret_;
} else if (0 || sel1221 == ((rt_int)6LL)) {
F->result_ = ((((((((eq_rt_gstr(F->w_244, rt_g_lit("ACCEPT", 6)) || eq_rt_gstr(F->w_244, rt_g_lit("ACCESS", 6))) || eq_rt_gstr(F->w_244, rt_g_lit("ASSERT", 6))) || eq_rt_gstr(F->w_244, rt_g_lit("DIGITS", 6))) || eq_rt_gstr(F->w_244, rt_g_lit("OTHERS", 6))) || eq_rt_gstr(F->w_244, rt_g_lit("PRAGMA", 6))) || eq_rt_gstr(F->w_244, rt_g_lit("RECORD", 6))) || eq_rt_gstr(F->w_244, rt_g_lit("RETURN", 6))) || eq_rt_gstr(F->w_244, rt_g_lit("SELECT", 6)));
goto ret_;
} else if (0 || sel1221 == ((rt_int)7LL)) {
F->result_ = (((((((eq_rt_gstr(F->w_244, rt_g_lit("DECLARE", 7)) || eq_rt_gstr(F->w_244, rt_g_lit("GENERIC", 7))) || eq_rt_gstr(F->w_244, rt_g_lit("PACKAGE", 7))) || eq_rt_gstr(F->w_244, rt_g_lit("PACKING", 7))) || eq_rt_gstr(F->w_244, rt_g_lit("PRIVATE", 7))) || eq_rt_gstr(F->w_244, rt_g_lit("RENAMES", 7))) || eq_rt_gstr(F->w_244, rt_g_lit("REVERSE", 7))) || eq_rt_gstr(F->w_244, rt_g_lit("SUBTYPE", 7)));
goto ret_;
} else if (0 || sel1221 == ((rt_int)8LL)) {
F->result_ = (((eq_rt_gstr(F->w_244, rt_g_lit("CONSTANT", 8)) || eq_rt_gstr(F->w_244, rt_g_lit("FUNCTION", 8))) || eq_rt_gstr(F->w_244, rt_g_lit("INITIATE", 8))) || eq_rt_gstr(F->w_244, rt_g_lit("SEPARATE", 8)));
goto ret_;
} else if (0 || sel1221 == ((rt_int)9LL)) {
F->result_ = (eq_rt_gstr(F->w_244, rt_g_lit("EXCEPTION", 9)) || eq_rt_gstr(F->w_244, rt_g_lit("PROCEDURE", 9)));
goto ret_;
} else if (0 || sel1221 == ((rt_int)10LL)) {
F->result_ = eq_rt_gstr(F->w_244, rt_g_lit("RESTRICTED", 10));
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

static void f_add_token_249(struct f_greenc_1fr *up_, rt_int kind_246, rt_gstr s_247, rt_int ival_248) {
  struct f_add_token_249fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_246 = kind_246;
F->s_247 = cp_rt_gstr(s_247);
F->ival_248 = ival_248;
F->up->ntoks_110 = rt_add(G_NV(F->up->ntoks_110), ((rt_int)1LL));
(*({ A106 *ix1222 = &(F->up->toks_109); &ix1222->p[rt_index(G_NV(F->up->ntoks_110), ix1222->lo, ix1222->hi) - ix1222->lo]; })) = ({ R108 *cell1223 = rt_alloc(sizeof(R108)); *cell1223 = cp_R108(({ R108 ag1224; ag1224.kind_ = F->kind_246; ag1224.line_ = G_NV(F->up->src_line_112); ag1224.ival_ = F->ival_248; ag1224.s_ = NULL; ag1224; })); (P107)cell1223; });
(*(P107)rt_nil_check((*({ A106 *ix1225 = &(F->up->toks_109); &ix1225->p[rt_index(G_NV(F->up->ntoks_110), ix1225->lo, ix1225->hi) - ix1225->lo]; })))).s_ = f_mk_211(F->up, F->s_247);
ret_:

  return;
}

static rt_int f_digit_value_251(struct f_greenc_1fr *up_, int c_250) {
  struct f_digit_value_251fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_250 = c_250;
if (f_is_digit_218(F->up, F->c_250)) {
F->result_ = rt_sub(((rt_int)(F->c_250) + 1), ((rt_int)(48) + 1));
goto ret_;
}
F->result_ = rt_add(rt_sub(((rt_int)(f_upper_220(F->up, F->c_250)) + 1), ((rt_int)(65) + 1)), ((rt_int)10LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_digit_in_254(struct f_greenc_1fr *up_, int c_252, rt_int base_253) {
  struct f_digit_in_254fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_252 = c_252;
F->base_253 = base_253;
F->d_1226 = INT64_MIN;
if (f_is_digit_218(F->up, F->c_252)) {
F->d_1226 = rt_sub(((rt_int)(F->c_252) + 1), ((rt_int)(48) + 1));
} else if (((f_upper_220(F->up, F->c_252) >= 65) && (f_upper_220(F->up, F->c_252) <= 70))) {
F->d_1226 = rt_add(rt_sub(((rt_int)(f_upper_220(F->up, F->c_252)) + 1), ((rt_int)(65) + 1)), ((rt_int)10LL));
} else {
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
}
if ((G_NV(F->d_1226) >= F->base_253)) {
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
}
F->result_ = G_NV(F->d_1226);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_accumulate_258(struct f_greenc_1fr *up_, rt_int *v_255, rt_int base_256, rt_int d_257) {
  struct f_accumulate_258fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->v_255 = v_255;
F->base_256 = base_256;
F->d_257 = d_257;
if ((G_NV((*F->v_255)) > rt_quot(rt_sub(INT64_MAX, F->d_257), F->base_256))) {
f_fail_232(F->up, G_NV(F->up->src_line_112), rt_g_lit("this integer literal is too large (RM79 2.4)", 44));
}
(*F->v_255) = rt_add(rt_mul(G_NV((*F->v_255)), F->base_256), F->d_257);
ret_:

  return;
}

static void f_lex_line_260(struct f_greenc_1fr *up_, rt_gstr line_259) {
  struct f_lex_line_260fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_259 = cp_rt_gstr(line_259);
F->i_1227 = INT64_MIN;
F->i_1227 = ((rt_int)1LL);
F->j_1228 = INT64_MIN;
F->j_1228 = ((rt_int)0LL);
F->n_1229 = INT64_MIN;
F->n_1229 = ({ rt_gstr at1230 = F->line_259; at1230.hi >= at1230.lo ? at1230.hi - at1230.lo + 1 : (rt_int)0; });
F->c_1231 = INT_MIN;
F->quote_1232 = INT_MIN;
F->v_1233 = INT64_MIN;
F->d_1234 = INT64_MIN;
F->buf_1235.lo = ((rt_int)1LL); F->buf_1235.hi = ((rt_int)1000LL);
F->buf_1235.lo2 = 1; F->buf_1235.hi2 = 1;
F->buf_1235.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->buf_1235));
memset(F->buf_1235.p, 0xFF, (size_t)G_CNT(F->buf_1235));
F->bl_1237 = INT64_MIN;
while ((G_NV(F->i_1227) <= G_NV(F->n_1229))) {
F->c_1231 = rt_range(G_NV(({ rt_gstr ix1239 = F->line_259; ix1239.p[rt_index(G_NV(F->i_1227), ix1239.lo, ix1239.hi) - ix1239.lo]; })), 0, 127);
if (((((G_NV(F->c_1231) == 32) || (G_NV(F->c_1231) == 9)) || (G_NV(F->c_1231) == 13)) || (G_NV(F->c_1231) == 12))) {
F->i_1227 = rt_add(G_NV(F->i_1227), ((rt_int)1LL));
} else if ((((G_NV(F->c_1231) == 45) && (G_NV(F->i_1227) < G_NV(F->n_1229))) && (G_NV(({ rt_gstr ix1240 = F->line_259; ix1240.p[rt_index(rt_add(G_NV(F->i_1227), ((rt_int)1LL)), ix1240.lo, ix1240.hi) - ix1240.lo]; })) == 45))) {
F->i_1227 = rt_add(G_NV(F->n_1229), ((rt_int)1LL));
} else if (f_is_letter_216(F->up, G_NV(F->c_1231))) {
F->j_1228 = G_NV(F->i_1227);
F->bl_1237 = ((rt_int)0LL);
while (((G_NV(F->j_1228) <= G_NV(F->n_1229)) && ((f_is_letter_216(F->up, G_NV(({ rt_gstr ix1243 = F->line_259; ix1243.p[rt_index(G_NV(F->j_1228), ix1243.lo, ix1243.hi) - ix1243.lo]; }))) || f_is_digit_218(F->up, G_NV(({ rt_gstr ix1245 = F->line_259; ix1245.p[rt_index(G_NV(F->j_1228), ix1245.lo, ix1245.hi) - ix1245.lo]; })))) || (G_NV(({ rt_gstr ix1246 = F->line_259; ix1246.p[rt_index(G_NV(F->j_1228), ix1246.lo, ix1246.hi) - ix1246.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1247 = F->line_259; ix1247.p[rt_index(G_NV(F->j_1228), ix1247.lo, ix1247.hi) - ix1247.lo]; })) == 95)) {
if (((G_NV(F->j_1228) == G_NV(F->n_1229)) || (!(f_is_letter_216(F->up, G_NV(({ rt_gstr ix1249 = F->line_259; ix1249.p[rt_index(rt_add(G_NV(F->j_1228), ((rt_int)1LL)), ix1249.lo, ix1249.hi) - ix1249.lo]; }))) || f_is_digit_218(F->up, G_NV(({ rt_gstr ix1251 = F->line_259; ix1251.p[rt_index(rt_add(G_NV(F->j_1228), ((rt_int)1LL)), ix1251.lo, ix1251.hi) - ix1251.lo]; }))))))) {
f_fail_232(F->up, G_NV(F->up->src_line_112), rt_g_lit("an underscore in an identifier stands between two letters or digits (RM79 2.3)", 78));
}
}
F->bl_1237 = rt_add(G_NV(F->bl_1237), ((rt_int)1LL));
(*({ rt_gstr *ix1252 = &(F->buf_1235); &ix1252->p[rt_index(G_NV(F->bl_1237), ix1252->lo, ix1252->hi) - ix1252->lo]; })) = f_upper_220(F->up, G_NV(({ rt_gstr ix1254 = F->line_259; ix1254.p[rt_index(G_NV(F->j_1228), ix1254.lo, ix1254.hi) - ix1254.lo]; })));
F->j_1228 = rt_add(G_NV(F->j_1228), ((rt_int)1LL));
}
L_end_1241: ;
if (f_is_reserved_245(F->up, ({ rt_gstr sl1256 = F->buf_1235; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1237); if (l_ <= h_) { rt_index(l_, sl1256.lo, sl1256.hi); rt_index(h_, sl1256.lo, sl1256.hi); } sl1256.p += l_ - sl1256.lo; sl1256.lo = l_; sl1256.hi = h_; sl1256; }))) {
f_add_token_249(F->up, ((rt_int)2LL), ({ rt_gstr sl1258 = F->buf_1235; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1237); if (l_ <= h_) { rt_index(l_, sl1258.lo, sl1258.hi); rt_index(h_, sl1258.lo, sl1258.hi); } sl1258.p += l_ - sl1258.lo; sl1258.lo = l_; sl1258.hi = h_; sl1258; }), ((rt_int)0LL));
} else {
f_add_token_249(F->up, ((rt_int)1LL), ({ rt_gstr sl1260 = F->buf_1235; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1237); if (l_ <= h_) { rt_index(l_, sl1260.lo, sl1260.hi); rt_index(h_, sl1260.lo, sl1260.hi); } sl1260.p += l_ - sl1260.lo; sl1260.lo = l_; sl1260.hi = h_; sl1260; }), ((rt_int)0LL));
}
F->i_1227 = G_NV(F->j_1228);
} else if (f_is_digit_218(F->up, G_NV(F->c_1231))) {
F->j_1228 = G_NV(F->i_1227);
F->v_1233 = ((rt_int)0LL);
F->bl_1237 = ((rt_int)0LL);
while (((G_NV(F->j_1228) <= G_NV(F->n_1229)) && (f_is_digit_218(F->up, G_NV(({ rt_gstr ix1263 = F->line_259; ix1263.p[rt_index(G_NV(F->j_1228), ix1263.lo, ix1263.hi) - ix1263.lo]; }))) || (G_NV(({ rt_gstr ix1264 = F->line_259; ix1264.p[rt_index(G_NV(F->j_1228), ix1264.lo, ix1264.hi) - ix1264.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1265 = F->line_259; ix1265.p[rt_index(G_NV(F->j_1228), ix1265.lo, ix1265.hi) - ix1265.lo]; })) == 95)) {
if (((G_NV(F->j_1228) == G_NV(F->n_1229)) || (!f_is_digit_218(F->up, G_NV(({ rt_gstr ix1267 = F->line_259; ix1267.p[rt_index(rt_add(G_NV(F->j_1228), ((rt_int)1LL)), ix1267.lo, ix1267.hi) - ix1267.lo]; })))))) {
f_fail_232(F->up, G_NV(F->up->src_line_112), rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
} else {
f_accumulate_258(F->up, &F->v_1233, ((rt_int)10LL), rt_sub(((rt_int)(G_NV(({ rt_gstr ix1269 = F->line_259; ix1269.p[rt_index(G_NV(F->j_1228), ix1269.lo, ix1269.hi) - ix1269.lo]; }))) + 1), ((rt_int)(48) + 1)));
F->bl_1237 = rt_add(G_NV(F->bl_1237), ((rt_int)1LL));
(*({ rt_gstr *ix1270 = &(F->buf_1235); &ix1270->p[rt_index(G_NV(F->bl_1237), ix1270->lo, ix1270->hi) - ix1270->lo]; })) = G_NV(({ rt_gstr ix1271 = F->line_259; ix1271.p[rt_index(G_NV(F->j_1228), ix1271.lo, ix1271.hi) - ix1271.lo]; }));
}
F->j_1228 = rt_add(G_NV(F->j_1228), ((rt_int)1LL));
}
L_end_1261: ;
if (((G_NV(F->j_1228) < G_NV(F->n_1229)) && ((G_NV(({ rt_gstr ix1272 = F->line_259; ix1272.p[rt_index(G_NV(F->j_1228), ix1272.lo, ix1272.hi) - ix1272.lo]; })) == 35) || ((G_NV(({ rt_gstr ix1273 = F->line_259; ix1273.p[rt_index(G_NV(F->j_1228), ix1273.lo, ix1273.hi) - ix1273.lo]; })) == 58) && (f_is_digit_218(F->up, G_NV(({ rt_gstr ix1275 = F->line_259; ix1275.p[rt_index(rt_add(G_NV(F->j_1228), ((rt_int)1LL)), ix1275.lo, ix1275.hi) - ix1275.lo]; }))) || f_is_letter_216(F->up, G_NV(({ rt_gstr ix1277 = F->line_259; ix1277.p[rt_index(rt_add(G_NV(F->j_1228), ((rt_int)1LL)), ix1277.lo, ix1277.hi) - ix1277.lo]; })))))))) {
{
F->base_1279 = INT64_MIN;
F->base_1279 = G_NV(F->v_1233);
if (((G_NV(F->base_1279) < ((rt_int)2LL)) || (G_NV(F->base_1279) > ((rt_int)16LL)))) {
f_fail_232(F->up, G_NV(F->up->src_line_112), rt_g_lit("the base of a number is between 2 and 16 (RM79 2.4)", 51));
}
F->v_1233 = ((rt_int)0LL);
F->j_1228 = rt_add(G_NV(F->j_1228), ((rt_int)1LL));
if (((G_NV(F->j_1228) > G_NV(F->n_1229)) || (f_digit_in_254(F->up, G_NV(({ rt_gstr ix1281 = F->line_259; ix1281.p[rt_index(G_NV(F->j_1228), ix1281.lo, ix1281.hi) - ix1281.lo]; })), ((rt_int)16LL)) < ((rt_int)0LL)))) {
f_fail_232(F->up, G_NV(F->up->src_line_112), rt_g_lit("a based number needs digits (RM79 2.4)", 38));
}
while (((G_NV(F->j_1228) <= G_NV(F->n_1229)) && ((f_is_letter_216(F->up, G_NV(({ rt_gstr ix1284 = F->line_259; ix1284.p[rt_index(G_NV(F->j_1228), ix1284.lo, ix1284.hi) - ix1284.lo]; }))) || f_is_digit_218(F->up, G_NV(({ rt_gstr ix1286 = F->line_259; ix1286.p[rt_index(G_NV(F->j_1228), ix1286.lo, ix1286.hi) - ix1286.lo]; })))) || (G_NV(({ rt_gstr ix1287 = F->line_259; ix1287.p[rt_index(G_NV(F->j_1228), ix1287.lo, ix1287.hi) - ix1287.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1288 = F->line_259; ix1288.p[rt_index(G_NV(F->j_1228), ix1288.lo, ix1288.hi) - ix1288.lo]; })) == 95)) {
if (((G_NV(F->j_1228) == G_NV(F->n_1229)) || (f_digit_in_254(F->up, G_NV(({ rt_gstr ix1290 = F->line_259; ix1290.p[rt_index(rt_add(G_NV(F->j_1228), ((rt_int)1LL)), ix1290.lo, ix1290.hi) - ix1290.lo]; })), ((rt_int)16LL)) < ((rt_int)0LL)))) {
f_fail_232(F->up, G_NV(F->up->src_line_112), rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
} else {
F->d_1234 = f_digit_in_254(F->up, G_NV(({ rt_gstr ix1292 = F->line_259; ix1292.p[rt_index(G_NV(F->j_1228), ix1292.lo, ix1292.hi) - ix1292.lo]; })), G_NV(F->base_1279));
if ((G_NV(F->d_1234) < ((rt_int)0LL))) {
f_fail_232(F->up, G_NV(F->up->src_line_112), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("digit ", 6), one_rt_gstr(G_NV(({ rt_gstr ix1294 = F->line_259; ix1294.p[rt_index(G_NV(F->j_1228), ix1294.lo, ix1294.hi) - ix1294.lo]; })))), rt_g_lit(" is not valid in base ", 22)), rt_g_s2g(rt_str_of_int(G_NV(F->base_1279)))), rt_g_lit(" (RM79 2.4)", 11)));
}
f_accumulate_258(F->up, &F->v_1233, G_NV(F->base_1279), G_NV(F->d_1234));
}
F->j_1228 = rt_add(G_NV(F->j_1228), ((rt_int)1LL));
}
L_end_1282: ;

}
L_end_1278: ;
f_add_token_249(F->up, ((rt_int)4LL), rt_g_s2g(rt_str_of_int(G_NV(F->v_1233))), G_NV(F->v_1233));
} else if (((G_NV(F->j_1228) < G_NV(F->n_1229)) && ((G_NV(({ rt_gstr ix1295 = F->line_259; ix1295.p[rt_index(G_NV(F->j_1228), ix1295.lo, ix1295.hi) - ix1295.lo]; })) == 46) && f_is_digit_218(F->up, G_NV(({ rt_gstr ix1297 = F->line_259; ix1297.p[rt_index(rt_add(G_NV(F->j_1228), ((rt_int)1LL)), ix1297.lo, ix1297.hi) - ix1297.lo]; })))))) {
F->bl_1237 = rt_add(G_NV(F->bl_1237), ((rt_int)1LL));
(*({ rt_gstr *ix1298 = &(F->buf_1235); &ix1298->p[rt_index(G_NV(F->bl_1237), ix1298->lo, ix1298->hi) - ix1298->lo]; })) = 46;
F->j_1228 = rt_add(G_NV(F->j_1228), ((rt_int)1LL));
while (((G_NV(F->j_1228) <= G_NV(F->n_1229)) && (f_is_digit_218(F->up, G_NV(({ rt_gstr ix1301 = F->line_259; ix1301.p[rt_index(G_NV(F->j_1228), ix1301.lo, ix1301.hi) - ix1301.lo]; }))) || (G_NV(({ rt_gstr ix1302 = F->line_259; ix1302.p[rt_index(G_NV(F->j_1228), ix1302.lo, ix1302.hi) - ix1302.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1303 = F->line_259; ix1303.p[rt_index(G_NV(F->j_1228), ix1303.lo, ix1303.hi) - ix1303.lo]; })) != 95)) {
F->bl_1237 = rt_add(G_NV(F->bl_1237), ((rt_int)1LL));
(*({ rt_gstr *ix1304 = &(F->buf_1235); &ix1304->p[rt_index(G_NV(F->bl_1237), ix1304->lo, ix1304->hi) - ix1304->lo]; })) = G_NV(({ rt_gstr ix1305 = F->line_259; ix1305.p[rt_index(G_NV(F->j_1228), ix1305.lo, ix1305.hi) - ix1305.lo]; }));
} else if (((G_NV(F->j_1228) == G_NV(F->n_1229)) || (!f_is_digit_218(F->up, G_NV(({ rt_gstr ix1307 = F->line_259; ix1307.p[rt_index(rt_add(G_NV(F->j_1228), ((rt_int)1LL)), ix1307.lo, ix1307.hi) - ix1307.lo]; })))))) {
f_fail_232(F->up, G_NV(F->up->src_line_112), rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
F->j_1228 = rt_add(G_NV(F->j_1228), ((rt_int)1LL));
}
L_end_1299: ;
if (f_exponent_ahead_263(F->up, F->line_259, G_NV(F->j_1228))) {
f_exponent_268(F->up, F->line_259, &F->j_1228, &F->buf_1235, &F->bl_1237);
}
f_add_token_249(F->up, ((rt_int)5LL), ({ rt_gstr sl1309 = F->buf_1235; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1237); if (l_ <= h_) { rt_index(l_, sl1309.lo, sl1309.hi); rt_index(h_, sl1309.lo, sl1309.hi); } sl1309.p += l_ - sl1309.lo; sl1309.lo = l_; sl1309.hi = h_; sl1309; }), ((rt_int)0LL));
} else if (f_exponent_ahead_263(F->up, F->line_259, G_NV(F->j_1228))) {
f_exponent_268(F->up, F->line_259, &F->j_1228, &F->buf_1235, &F->bl_1237);
f_add_token_249(F->up, ((rt_int)5LL), ({ rt_gstr sl1311 = F->buf_1235; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1237); if (l_ <= h_) { rt_index(l_, sl1311.lo, sl1311.hi); rt_index(h_, sl1311.lo, sl1311.hi); } sl1311.p += l_ - sl1311.lo; sl1311.lo = l_; sl1311.hi = h_; sl1311; }), ((rt_int)0LL));
} else {
f_add_token_249(F->up, ((rt_int)4LL), ({ rt_gstr sl1313 = F->buf_1235; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1237); if (l_ <= h_) { rt_index(l_, sl1313.lo, sl1313.hi); rt_index(h_, sl1313.lo, sl1313.hi); } sl1313.p += l_ - sl1313.lo; sl1313.lo = l_; sl1313.hi = h_; sl1313; }), G_NV(F->v_1233));
}
F->i_1227 = G_NV(F->j_1228);
} else if (((G_NV(F->c_1231) == 34) || (G_NV(F->c_1231) == 37))) {
F->quote_1232 = rt_range(G_NV(F->c_1231), 0, 127);
F->j_1228 = rt_add(G_NV(F->i_1227), ((rt_int)1LL));
F->bl_1237 = ((rt_int)0LL);
for (;;) {
if ((G_NV(F->j_1228) > G_NV(F->n_1229))) {
f_fail_232(F->up, G_NV(F->up->src_line_112), rt_g_lit("unterminated string", 19));
}
if ((G_NV(({ rt_gstr ix1315 = F->line_259; ix1315.p[rt_index(G_NV(F->j_1228), ix1315.lo, ix1315.hi) - ix1315.lo]; })) == G_NV(F->quote_1232))) {
if (((G_NV(F->j_1228) == G_NV(F->n_1229)) || (G_NV(({ rt_gstr ix1316 = F->line_259; ix1316.p[rt_index(rt_add(G_NV(F->j_1228), ((rt_int)1LL)), ix1316.lo, ix1316.hi) - ix1316.lo]; })) != G_NV(F->quote_1232)))) {
goto L_end_1314;
}
F->j_1228 = rt_add(G_NV(F->j_1228), ((rt_int)1LL));
} else if (((G_NV(F->quote_1232) == 37) && (G_NV(({ rt_gstr ix1317 = F->line_259; ix1317.p[rt_index(G_NV(F->j_1228), ix1317.lo, ix1317.hi) - ix1317.lo]; })) == 34))) {
f_fail_232(F->up, G_NV(F->up->src_line_112), rt_g_lit("a string bracketed by % cannot contain a quote (RM79 2.1)", 57));
}
F->bl_1237 = rt_add(G_NV(F->bl_1237), ((rt_int)1LL));
(*({ rt_gstr *ix1318 = &(F->buf_1235); &ix1318->p[rt_index(G_NV(F->bl_1237), ix1318->lo, ix1318->hi) - ix1318->lo]; })) = G_NV(({ rt_gstr ix1319 = F->line_259; ix1319.p[rt_index(G_NV(F->j_1228), ix1319.lo, ix1319.hi) - ix1319.lo]; }));
F->j_1228 = rt_add(G_NV(F->j_1228), ((rt_int)1LL));
}
L_end_1314: ;
f_add_token_249(F->up, ((rt_int)6LL), ({ rt_gstr sl1321 = F->buf_1235; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1237); if (l_ <= h_) { rt_index(l_, sl1321.lo, sl1321.hi); rt_index(h_, sl1321.lo, sl1321.hi); } sl1321.p += l_ - sl1321.lo; sl1321.lo = l_; sl1321.hi = h_; sl1321; }), ((rt_int)0LL));
F->i_1227 = rt_add(G_NV(F->j_1228), ((rt_int)1LL));
} else {
{
F->two_1323.lo = ((rt_int)1LL); F->two_1323.hi = ((rt_int)3LL);
F->two_1323.lo2 = 1; F->two_1323.hi2 = 1;
F->two_1323.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->two_1323));
memset(F->two_1323.p, 0xFF, (size_t)G_CNT(F->two_1323));
as_rt_gstr(&F->two_1323, rt_g_lit("   ", 3));
(*({ rt_gstr *ix1325 = &(F->two_1323); &ix1325->p[rt_index(((rt_int)1LL), ix1325->lo, ix1325->hi) - ix1325->lo]; })) = G_NV(F->c_1231);
if ((G_NV(F->i_1227) < G_NV(F->n_1229))) {
(*({ rt_gstr *ix1326 = &(F->two_1323); &ix1326->p[rt_index(((rt_int)2LL), ix1326->lo, ix1326->hi) - ix1326->lo]; })) = G_NV(({ rt_gstr ix1327 = F->line_259; ix1327.p[rt_index(rt_add(G_NV(F->i_1227), ((rt_int)1LL)), ix1327.lo, ix1327.hi) - ix1327.lo]; }));
}
if ((rt_add(G_NV(F->i_1227), ((rt_int)1LL)) < G_NV(F->n_1229))) {
(*({ rt_gstr *ix1328 = &(F->two_1323); &ix1328->p[rt_index(((rt_int)3LL), ix1328->lo, ix1328->hi) - ix1328->lo]; })) = G_NV(({ rt_gstr ix1329 = F->line_259; ix1329.p[rt_index(rt_add(G_NV(F->i_1227), ((rt_int)2LL)), ix1329.lo, ix1329.hi) - ix1329.lo]; }));
}
if (eq_rt_gstr(F->two_1323, rt_g_lit(":=:", 3))) {
f_add_token_249(F->up, ((rt_int)3LL), rt_g_lit(":=:", 3), ((rt_int)0LL));
F->i_1227 = rt_add(G_NV(F->i_1227), ((rt_int)3LL));
} else if ((((((((((eq_rt_gstr(({ rt_gstr sl1330 = F->two_1323; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1330.lo, sl1330.hi); rt_index(h_, sl1330.lo, sl1330.hi); } sl1330.p += l_ - sl1330.lo; sl1330.lo = l_; sl1330.hi = h_; sl1330; }), rt_g_lit(":=", 2)) || eq_rt_gstr(({ rt_gstr sl1331 = F->two_1323; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1331.lo, sl1331.hi); rt_index(h_, sl1331.lo, sl1331.hi); } sl1331.p += l_ - sl1331.lo; sl1331.lo = l_; sl1331.hi = h_; sl1331; }), rt_g_lit("=:", 2))) || eq_rt_gstr(({ rt_gstr sl1332 = F->two_1323; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1332.lo, sl1332.hi); rt_index(h_, sl1332.lo, sl1332.hi); } sl1332.p += l_ - sl1332.lo; sl1332.lo = l_; sl1332.hi = h_; sl1332; }), rt_g_lit("=>", 2))) || eq_rt_gstr(({ rt_gstr sl1333 = F->two_1323; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1333.lo, sl1333.hi); rt_index(h_, sl1333.lo, sl1333.hi); } sl1333.p += l_ - sl1333.lo; sl1333.lo = l_; sl1333.hi = h_; sl1333; }), rt_g_lit("..", 2))) || eq_rt_gstr(({ rt_gstr sl1334 = F->two_1323; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1334.lo, sl1334.hi); rt_index(h_, sl1334.lo, sl1334.hi); } sl1334.p += l_ - sl1334.lo; sl1334.lo = l_; sl1334.hi = h_; sl1334; }), rt_g_lit("**", 2))) || eq_rt_gstr(({ rt_gstr sl1335 = F->two_1323; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1335.lo, sl1335.hi); rt_index(h_, sl1335.lo, sl1335.hi); } sl1335.p += l_ - sl1335.lo; sl1335.lo = l_; sl1335.hi = h_; sl1335; }), rt_g_lit("/=", 2))) || eq_rt_gstr(({ rt_gstr sl1336 = F->two_1323; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1336.lo, sl1336.hi); rt_index(h_, sl1336.lo, sl1336.hi); } sl1336.p += l_ - sl1336.lo; sl1336.lo = l_; sl1336.hi = h_; sl1336; }), rt_g_lit("<=", 2))) || eq_rt_gstr(({ rt_gstr sl1337 = F->two_1323; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1337.lo, sl1337.hi); rt_index(h_, sl1337.lo, sl1337.hi); } sl1337.p += l_ - sl1337.lo; sl1337.lo = l_; sl1337.hi = h_; sl1337; }), rt_g_lit(">=", 2))) || eq_rt_gstr(({ rt_gstr sl1338 = F->two_1323; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1338.lo, sl1338.hi); rt_index(h_, sl1338.lo, sl1338.hi); } sl1338.p += l_ - sl1338.lo; sl1338.lo = l_; sl1338.hi = h_; sl1338; }), rt_g_lit("<<", 2))) || eq_rt_gstr(({ rt_gstr sl1339 = F->two_1323; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1339.lo, sl1339.hi); rt_index(h_, sl1339.lo, sl1339.hi); } sl1339.p += l_ - sl1339.lo; sl1339.lo = l_; sl1339.hi = h_; sl1339; }), rt_g_lit(">>", 2)))) {
f_add_token_249(F->up, ((rt_int)3LL), ({ rt_gstr sl1341 = F->two_1323; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1341.lo, sl1341.hi); rt_index(h_, sl1341.lo, sl1341.hi); } sl1341.p += l_ - sl1341.lo; sl1341.lo = l_; sl1341.hi = h_; sl1341; }), ((rt_int)0LL));
F->i_1227 = rt_add(G_NV(F->i_1227), ((rt_int)2LL));
} else if ((G_NV(F->c_1231) == 33)) {
f_add_token_249(F->up, ((rt_int)3LL), rt_g_lit("|", 1), ((rt_int)0LL));
F->i_1227 = rt_add(G_NV(F->i_1227), ((rt_int)1LL));
} else if (((((((((((((((((G_NV(F->c_1231) == 38) || (G_NV(F->c_1231) == 39)) || (G_NV(F->c_1231) == 40)) || (G_NV(F->c_1231) == 41)) || (G_NV(F->c_1231) == 42)) || (G_NV(F->c_1231) == 43)) || (G_NV(F->c_1231) == 44)) || (G_NV(F->c_1231) == 45)) || (G_NV(F->c_1231) == 46)) || (G_NV(F->c_1231) == 47)) || (G_NV(F->c_1231) == 58)) || (G_NV(F->c_1231) == 59)) || (G_NV(F->c_1231) == 60)) || (G_NV(F->c_1231) == 61)) || (G_NV(F->c_1231) == 62)) || (G_NV(F->c_1231) == 124))) {
f_add_token_249(F->up, ((rt_int)3LL), ({ rt_gstr sl1343 = F->two_1323; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)1LL); if (l_ <= h_) { rt_index(l_, sl1343.lo, sl1343.hi); rt_index(h_, sl1343.lo, sl1343.hi); } sl1343.p += l_ - sl1343.lo; sl1343.lo = l_; sl1343.hi = h_; sl1343; }), ((rt_int)0LL));
F->i_1227 = rt_add(G_NV(F->i_1227), ((rt_int)1LL));
if ((G_NV(F->c_1231) == 59)) {
f_check_include_275(F->up);
}
} else {
f_fail_232(F->up, G_NV(F->up->src_line_112), rt_g_lit("unexpected character", 20));
}

}
L_end_1322: ;
}
}
L_end_1238: ;
ret_:

  return;
}

static int f_exponent_ahead_263(struct f_greenc_1fr *up_, rt_gstr line_261, rt_int j_262) {
  struct f_exponent_ahead_263fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_261 = cp_rt_gstr(line_261);
F->j_262 = j_262;
if ((F->j_262 >= ({ rt_gstr at1344 = F->line_261; at1344.hi >= at1344.lo ? at1344.hi - at1344.lo + 1 : (rt_int)0; }))) {
F->result_ = 0;
goto ret_;
} else if (((G_NV(({ rt_gstr ix1345 = F->line_261; ix1345.p[rt_index(F->j_262, ix1345.lo, ix1345.hi) - ix1345.lo]; })) != 69) && (G_NV(({ rt_gstr ix1346 = F->line_261; ix1346.p[rt_index(F->j_262, ix1346.lo, ix1346.hi) - ix1346.lo]; })) != 101))) {
F->result_ = 0;
goto ret_;
} else if (f_is_digit_218(F->up, G_NV(({ rt_gstr ix1348 = F->line_261; ix1348.p[rt_index(rt_add(F->j_262, ((rt_int)1LL)), ix1348.lo, ix1348.hi) - ix1348.lo]; })))) {
F->result_ = 1;
goto ret_;
} else if ((rt_add(F->j_262, ((rt_int)1LL)) >= ({ rt_gstr at1349 = F->line_261; at1349.hi >= at1349.lo ? at1349.hi - at1349.lo + 1 : (rt_int)0; }))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (((G_NV(({ rt_gstr ix1350 = F->line_261; ix1350.p[rt_index(rt_add(F->j_262, ((rt_int)1LL)), ix1350.lo, ix1350.hi) - ix1350.lo]; })) == 43) || (G_NV(({ rt_gstr ix1351 = F->line_261; ix1351.p[rt_index(rt_add(F->j_262, ((rt_int)1LL)), ix1351.lo, ix1351.hi) - ix1351.lo]; })) == 45)) && f_is_digit_218(F->up, G_NV(({ rt_gstr ix1353 = F->line_261; ix1353.p[rt_index(rt_add(F->j_262, ((rt_int)2LL)), ix1353.lo, ix1353.hi) - ix1353.lo]; }))));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_exponent_268(struct f_greenc_1fr *up_, rt_gstr line_264, rt_int *j_265, rt_gstr *buf_266, rt_int *bl_267) {
  struct f_exponent_268fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_264 = cp_rt_gstr(line_264);
F->j_265 = j_265;
F->buf_266 = buf_266;
F->bl_267 = bl_267;
(*F->bl_267) = rt_add(G_NV((*F->bl_267)), ((rt_int)1LL));
(*({ rt_gstr *ix1354 = &((*F->buf_266)); &ix1354->p[rt_index(G_NV((*F->bl_267)), ix1354->lo, ix1354->hi) - ix1354->lo]; })) = 69;
(*F->j_265) = rt_add(G_NV((*F->j_265)), ((rt_int)1LL));
if (((G_NV(({ rt_gstr ix1355 = F->line_264; ix1355.p[rt_index(G_NV((*F->j_265)), ix1355.lo, ix1355.hi) - ix1355.lo]; })) == 43) || (G_NV(({ rt_gstr ix1356 = F->line_264; ix1356.p[rt_index(G_NV((*F->j_265)), ix1356.lo, ix1356.hi) - ix1356.lo]; })) == 45))) {
(*F->bl_267) = rt_add(G_NV((*F->bl_267)), ((rt_int)1LL));
(*({ rt_gstr *ix1357 = &((*F->buf_266)); &ix1357->p[rt_index(G_NV((*F->bl_267)), ix1357->lo, ix1357->hi) - ix1357->lo]; })) = G_NV(({ rt_gstr ix1358 = F->line_264; ix1358.p[rt_index(G_NV((*F->j_265)), ix1358.lo, ix1358.hi) - ix1358.lo]; }));
(*F->j_265) = rt_add(G_NV((*F->j_265)), ((rt_int)1LL));
}
while (((G_NV((*F->j_265)) <= ({ rt_gstr at1360 = F->line_264; at1360.hi >= at1360.lo ? at1360.hi - at1360.lo + 1 : (rt_int)0; })) && (f_is_digit_218(F->up, G_NV(({ rt_gstr ix1362 = F->line_264; ix1362.p[rt_index(G_NV((*F->j_265)), ix1362.lo, ix1362.hi) - ix1362.lo]; }))) || (G_NV(({ rt_gstr ix1363 = F->line_264; ix1363.p[rt_index(G_NV((*F->j_265)), ix1363.lo, ix1363.hi) - ix1363.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1364 = F->line_264; ix1364.p[rt_index(G_NV((*F->j_265)), ix1364.lo, ix1364.hi) - ix1364.lo]; })) != 95)) {
(*F->bl_267) = rt_add(G_NV((*F->bl_267)), ((rt_int)1LL));
(*({ rt_gstr *ix1365 = &((*F->buf_266)); &ix1365->p[rt_index(G_NV((*F->bl_267)), ix1365->lo, ix1365->hi) - ix1365->lo]; })) = G_NV(({ rt_gstr ix1366 = F->line_264; ix1366.p[rt_index(G_NV((*F->j_265)), ix1366.lo, ix1366.hi) - ix1366.lo]; }));
} else if (((G_NV((*F->j_265)) == ({ rt_gstr at1367 = F->line_264; at1367.hi >= at1367.lo ? at1367.hi - at1367.lo + 1 : (rt_int)0; })) || (!f_is_digit_218(F->up, G_NV(({ rt_gstr ix1369 = F->line_264; ix1369.p[rt_index(rt_add(G_NV((*F->j_265)), ((rt_int)1LL)), ix1369.lo, ix1369.hi) - ix1369.lo]; })))))) {
f_fail_232(F->up, G_NV(F->up->src_line_112), rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
(*F->j_265) = rt_add(G_NV((*F->j_265)), ((rt_int)1LL));
}
L_end_1359: ;
ret_:

  return;
}

static void f_include_open_271(struct f_greenc_1fr *up_, rt_gstr name_269, rt_int *length_270) {
  struct f_include_open_271fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_269 = cp_rt_gstr(name_269);
F->length_270 = length_270;
rt_g_include_open(rt_g_g2s(F->name_269), F->length_270);
ret_:

  return;
}

static void f_include_char_274(struct f_greenc_1fr *up_, rt_int i_272, int *c_273) {
  struct f_include_char_274fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->i_272 = i_272;
F->c_273 = c_273;
rt_g_include_char(F->i_272, F->c_273);
ret_:

  return;
}

static void f_check_include_275(struct f_greenc_1fr *up_) {
  struct f_check_include_275fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1370 = INT64_MIN;
if ((G_NV(F->up->ntoks_110) < ((rt_int)6LL))) {
goto ret_;
}
if (((G_NV((*(P107)rt_nil_check(({ A106 ix1371 = F->up->toks_109; ix1371.p[rt_index(rt_sub(G_NV(F->up->ntoks_110), ((rt_int)5LL)), ix1371.lo, ix1371.hi) - ix1371.lo]; }))).kind_) != ((rt_int)2LL)) || (G_NV((*(P107)rt_nil_check(({ A106 ix1372 = F->up->toks_109; ix1372.p[rt_index(rt_sub(G_NV(F->up->ntoks_110), ((rt_int)2LL)), ix1372.lo, ix1372.hi) - ix1372.lo]; }))).kind_) != ((rt_int)6LL)))) {
goto ret_;
} else if (((((!eq_rt_gstr((*(P137)rt_nil_check((*(P107)rt_nil_check(({ A106 ix1373 = F->up->toks_109; ix1373.p[rt_index(rt_sub(G_NV(F->up->ntoks_110), ((rt_int)5LL)), ix1373.lo, ix1373.hi) - ix1373.lo]; }))).s_)), rt_g_lit("PRAGMA", 6))) || (!eq_rt_gstr((*(P137)rt_nil_check((*(P107)rt_nil_check(({ A106 ix1374 = F->up->toks_109; ix1374.p[rt_index(rt_sub(G_NV(F->up->ntoks_110), ((rt_int)4LL)), ix1374.lo, ix1374.hi) - ix1374.lo]; }))).s_)), rt_g_lit("INCLUDE", 7)))) || (!eq_rt_gstr((*(P137)rt_nil_check((*(P107)rt_nil_check(({ A106 ix1375 = F->up->toks_109; ix1375.p[rt_index(rt_sub(G_NV(F->up->ntoks_110), ((rt_int)3LL)), ix1375.lo, ix1375.hi) - ix1375.lo]; }))).s_)), rt_g_lit("(", 1)))) || (!eq_rt_gstr((*(P137)rt_nil_check((*(P107)rt_nil_check(({ A106 ix1376 = F->up->toks_109; ix1376.p[rt_index(rt_sub(G_NV(F->up->ntoks_110), ((rt_int)1LL)), ix1376.lo, ix1376.hi) - ix1376.lo]; }))).s_)), rt_g_lit(")", 1))))) {
goto ret_;
}
f_include_open_271(F->up, (*(P137)rt_nil_check((*(P107)rt_nil_check(({ A106 ix1378 = F->up->toks_109; ix1378.p[rt_index(rt_sub(G_NV(F->up->ntoks_110), ((rt_int)2LL)), ix1378.lo, ix1378.hi) - ix1378.lo]; }))).s_)), &F->n_1370);
if ((G_NV(F->n_1370) < ((rt_int)0LL))) {
f_fail_232(F->up, G_NV(F->up->src_line_112), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma INCLUDE: the file ", 25), (*(P137)rt_nil_check((*(P107)rt_nil_check(({ A106 ix1380 = F->up->toks_109; ix1380.p[rt_index(rt_sub(G_NV(F->up->ntoks_110), ((rt_int)2LL)), ix1380.lo, ix1380.hi) - ix1380.lo]; }))).s_))), rt_g_lit(" cannot be read", 15)));
}
F->up->ntoks_110 = rt_sub(G_NV(F->up->ntoks_110), ((rt_int)6LL));
f_include_text_277(F->up, G_NV(F->n_1370));
ret_:

  return;
}

static void f_include_text_277(struct f_greenc_1fr *up_, rt_int n_276) {
  struct f_include_text_277fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_276 = n_276;
F->t_1381.lo = ((rt_int)1LL); F->t_1381.hi = rt_add(F->n_276, ((rt_int)1LL));
F->t_1381.lo2 = 1; F->t_1381.hi2 = 1;
F->t_1381.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->t_1381));
memset(F->t_1381.p, 0xFF, (size_t)G_CNT(F->t_1381));
F->saved_line_1383 = INT64_MIN;
F->saved_line_1383 = G_NV(F->up->src_line_112);
F->from_1384 = INT64_MIN;
F->from_1384 = ((rt_int)1LL);
{ rt_int lo1387 = ((rt_int)1LL), hi1388 = F->n_276;
for (rt_int it1389 = lo1387; it1389 <= hi1388; it1389++) {
F->k_1386 = it1389;
f_include_char_274(F->up, F->k_1386, &(*({ rt_gstr *ix1391 = &(F->t_1381); &ix1391->p[rt_index(F->k_1386, ix1391->lo, ix1391->hi) - ix1391->lo]; })));
}
}
L_end_1385: ;
F->up->src_line_112 = ((rt_int)0LL);
{ rt_int lo1394 = ((rt_int)1LL), hi1395 = F->n_276;
for (rt_int it1396 = lo1394; it1396 <= hi1395; it1396++) {
F->k_1393 = it1396;
if ((G_NV(({ rt_gstr ix1397 = F->t_1381; ix1397.p[rt_index(F->k_1393, ix1397.lo, ix1397.hi) - ix1397.lo]; })) == 10)) {
F->up->src_line_112 = rt_add(G_NV(F->up->src_line_112), ((rt_int)1LL));
f_include_line_281(F->up, F->t_1381, G_NV(F->from_1384), rt_sub(F->k_1393, ((rt_int)1LL)));
F->from_1384 = rt_add(F->k_1393, ((rt_int)1LL));
}
}
}
L_end_1392: ;
if ((G_NV(F->from_1384) <= F->n_276)) {
F->up->src_line_112 = rt_add(G_NV(F->up->src_line_112), ((rt_int)1LL));
f_include_line_281(F->up, F->t_1381, G_NV(F->from_1384), F->n_276);
}
F->up->src_line_112 = G_NV(F->saved_line_1383);
ret_:

  return;
}

static void f_include_line_281(struct f_greenc_1fr *up_, rt_gstr t_278, rt_int from_279, rt_int to_280) {
  struct f_include_line_281fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_278 = cp_rt_gstr(t_278);
F->from_279 = from_279;
F->to_280 = to_280;
F->l_1398.lo = ((rt_int)1LL); F->l_1398.hi = rt_add(rt_sub(F->to_280, F->from_279), ((rt_int)1LL));
F->l_1398.lo2 = 1; F->l_1398.hi2 = 1;
F->l_1398.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->l_1398));
memset(F->l_1398.p, 0xFF, (size_t)G_CNT(F->l_1398));
{ rt_int lo1402 = F->from_279, hi1403 = F->to_280;
for (rt_int it1404 = lo1402; it1404 <= hi1403; it1404++) {
F->k_1401 = it1404;
(*({ rt_gstr *ix1405 = &(F->l_1398); &ix1405->p[rt_index(rt_add(rt_sub(F->k_1401, F->from_279), ((rt_int)1LL)), ix1405->lo, ix1405->hi) - ix1405->lo]; })) = G_NV(({ rt_gstr ix1406 = F->t_278; ix1406.p[rt_index(F->k_1401, ix1406.lo, ix1406.hi) - ix1406.lo]; }));
}
}
L_end_1400: ;
f_lex_line_260(F->up, F->l_1398);
ret_:

  return;
}

static void f_read_source_282(struct f_greenc_1fr *up_) {
  struct f_read_source_282fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->buf_1407.lo = ((rt_int)1LL); F->buf_1407.hi = ((rt_int)10000LL);
F->buf_1407.lo2 = 1; F->buf_1407.hi2 = 1;
F->buf_1407.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->buf_1407));
memset(F->buf_1407.p, 0xFF, (size_t)G_CNT(F->buf_1407));
F->bl_1409 = INT64_MIN;
F->bl_1409 = ((rt_int)0LL);
F->c_1410 = INT_MIN;
{ rt_frame xf1411;
if (RT_TRY(xf1411)) {
for (;;) {
(F->c_1410 = rt_g_getc());
if ((G_NV(F->c_1410) == 10)) {
F->up->src_line_112 = rt_add(G_NV(F->up->src_line_112), ((rt_int)1LL));
f_lex_line_260(F->up, ({ rt_gstr sl1415 = F->buf_1407; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1409); if (l_ <= h_) { rt_index(l_, sl1415.lo, sl1415.hi); rt_index(h_, sl1415.lo, sl1415.hi); } sl1415.p += l_ - sl1415.lo; sl1415.lo = l_; sl1415.hi = h_; sl1415; }));
F->bl_1409 = ((rt_int)0LL);
} else {
F->bl_1409 = rt_add(G_NV(F->bl_1409), ((rt_int)1LL));
(*({ rt_gstr *ix1416 = &(F->buf_1407); &ix1416->p[rt_index(G_NV(F->bl_1409), ix1416->lo, ix1416->hi) - ix1416->lo]; })) = G_NV(F->c_1410);
}
}
L_end_1413: ;
RT_POP(xf1411);
} else {
RT_POP(xf1411);
int x1412 = rt_xcur;
if (rt_g_aborted()) rt_raise(x1412);
if (0 || x1412 == rt_exc("END_OF_FILE")) {
if ((G_NV(F->bl_1409) > ((rt_int)0LL))) {
F->up->src_line_112 = rt_add(G_NV(F->up->src_line_112), ((rt_int)1LL));
f_lex_line_260(F->up, ({ rt_gstr sl1418 = F->buf_1407; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1409); if (l_ <= h_) { rt_index(l_, sl1418.lo, sl1418.hi); rt_index(h_, sl1418.lo, sl1418.hi); } sl1418.p += l_ - sl1418.lo; sl1418.lo = l_; sl1418.hi = h_; sl1418; }));
}
f_add_token_249(F->up, ((rt_int)0LL), rt_g_lit("<end>", 5), ((rt_int)0LL));
} else {
rt_raise(x1412);
}
}
}
ret_:

  return;
}

static P171 f_nn_285(struct f_greenc_1fr *up_, rt_int kind_283, rt_int line_284) {
  struct f_nn_285fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_283 = kind_283;
F->line_284 = line_284;
F->result_ = ({ R172 *cell1419 = rt_alloc(sizeof(R172)); *cell1419 = cp_R172(({ R172 ag1420; ag1420.kind_ = F->kind_283; ag1420.line_ = F->line_284; ag1420.ival_ = ((rt_int)0LL); ag1420.flag_ = ((rt_int)0LL); ag1420.name_ = NULL; ag1420.tag_ = NULL; ag1420.a_ = NULL; ag1420.b_ = NULL; ag1420.c_ = NULL; ag1420.d_ = NULL; ag1420.e_ = NULL; ag1420.next_ = NULL; ag1420.formal_ = NULL; ag1420; })); (P171)cell1419; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_append_289(struct f_greenc_1fr *up_, P171 *head_286, P171 *tail_287, P171 x_288) {
  struct f_append_289fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->head_286 = head_286;
F->tail_287 = tail_287;
F->x_288 = x_288;
if ((F->x_288 == NULL)) {
goto ret_;
}
if (((*F->head_286) == NULL)) {
(*F->head_286) = F->x_288;
} else {
(*(P171)rt_nil_check((*F->tail_287))).next_ = F->x_288;
}
(*F->tail_287) = F->x_288;
while (((*(P171)rt_nil_check((*F->tail_287))).next_ != NULL)) {
(*F->tail_287) = (*(P171)rt_nil_check((*F->tail_287))).next_;
}
L_end_1421: ;
ret_:

  return;
}

static rt_int f_list_len_291(struct f_greenc_1fr *up_, P171 l_290) {
  struct f_list_len_291fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_290 = l_290;
F->n_1422 = INT64_MIN;
F->n_1422 = ((rt_int)0LL);
F->p_1423 = NULL;
F->p_1423 = F->l_290;
while ((F->p_1423 != NULL)) {
F->n_1422 = rt_add(G_NV(F->n_1422), ((rt_int)1LL));
F->p_1423 = (*(P171)rt_nil_check(F->p_1423)).next_;
}
L_end_1424: ;
F->result_ = G_NV(F->n_1422);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_cur_line_292(struct f_greenc_1fr *up_) {
  struct f_cur_line_292fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = G_NV((*(P107)rt_nil_check(({ A106 ix1425 = F->up->toks_109; ix1425.p[rt_index(G_NV(F->up->tpos_111), ix1425.lo, ix1425.hi) - ix1425.lo]; }))).line_);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_kw_294(struct f_greenc_1fr *up_, rt_gstr w_293) {
  struct f_at_kw_294fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_293 = cp_rt_gstr(w_293);
if ((!(G_NV((*(P107)rt_nil_check(({ A106 ix1426 = F->up->toks_109; ix1426.p[rt_index(G_NV(F->up->tpos_111), ix1426.lo, ix1426.hi) - ix1426.lo]; }))).kind_) == ((rt_int)2LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P137)rt_nil_check((*(P107)rt_nil_check(({ A106 ix1427 = F->up->toks_109; ix1427.p[rt_index(G_NV(F->up->tpos_111), ix1427.lo, ix1427.hi) - ix1427.lo]; }))).s_)), F->w_293);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_op_296(struct f_greenc_1fr *up_, rt_gstr w_295) {
  struct f_at_op_296fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_295 = cp_rt_gstr(w_295);
if ((!(G_NV((*(P107)rt_nil_check(({ A106 ix1428 = F->up->toks_109; ix1428.p[rt_index(G_NV(F->up->tpos_111), ix1428.lo, ix1428.hi) - ix1428.lo]; }))).kind_) == ((rt_int)3LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P137)rt_nil_check((*(P107)rt_nil_check(({ A106 ix1429 = F->up->toks_109; ix1429.p[rt_index(G_NV(F->up->tpos_111), ix1429.lo, ix1429.hi) - ix1429.lo]; }))).s_)), F->w_295);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_kind_298(struct f_greenc_1fr *up_, rt_int k_297) {
  struct f_at_kind_298fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_297 = k_297;
F->result_ = (G_NV((*(P107)rt_nil_check(({ A106 ix1430 = F->up->toks_109; ix1430.p[rt_index(G_NV(F->up->tpos_111), ix1430.lo, ix1430.hi) - ix1430.lo]; }))).kind_) == F->k_297);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_kind_at_300(struct f_greenc_1fr *up_, rt_int k_299) {
  struct f_kind_at_300fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_299 = k_299;
if ((rt_add(G_NV(F->up->tpos_111), F->k_299) > G_NV(F->up->ntoks_110))) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
F->result_ = G_NV((*(P107)rt_nil_check(({ A106 ix1431 = F->up->toks_109; ix1431.p[rt_index(rt_add(G_NV(F->up->tpos_111), F->k_299), ix1431.lo, ix1431.hi) - ix1431.lo]; }))).kind_);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_text_at_302(struct f_greenc_1fr *up_, rt_int k_301) {
  struct f_text_at_302fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_301 = k_301;
if ((rt_add(G_NV(F->up->tpos_111), F->k_301) > G_NV(F->up->ntoks_110))) {
F->result_ = rt_g_lit("", 0);
goto ret_;
}
F->result_ = (*(P137)rt_nil_check((*(P107)rt_nil_check(({ A106 ix1432 = F->up->toks_109; ix1432.p[rt_index(rt_add(G_NV(F->up->tpos_111), F->k_301), ix1432.lo, ix1432.hi) - ix1432.lo]; }))).s_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_perror_304(struct f_greenc_1fr *up_, rt_gstr msg_303) {
  struct f_perror_304fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->msg_303 = cp_rt_gstr(msg_303);
f_fail_232(F->up, G_NV((*(P107)rt_nil_check(({ A106 ix1435 = F->up->toks_109; ix1435.p[rt_index(G_NV(F->up->tpos_111), ix1435.lo, ix1435.hi) - ix1435.lo]; }))).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->msg_303, rt_g_lit(" (at ", 5)), (*(P137)rt_nil_check((*(P107)rt_nil_check(({ A106 ix1436 = F->up->toks_109; ix1436.p[rt_index(G_NV(F->up->tpos_111), ix1436.lo, ix1436.hi) - ix1436.lo]; }))).s_))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_skip_305(struct f_greenc_1fr *up_) {
  struct f_skip_305fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->tpos_111 = rt_add(G_NV(F->up->tpos_111), ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_kw_307(struct f_greenc_1fr *up_, rt_gstr w_306) {
  struct f_expect_kw_307fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_306 = cp_rt_gstr(w_306);
if ((!f_at_kw_294(F->up, F->w_306))) {
f_perror_304(F->up, cat_rt_gstr(rt_g_lit("expected ", 9), F->w_306));
}
F->up->tpos_111 = rt_add(G_NV(F->up->tpos_111), ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_op_309(struct f_greenc_1fr *up_, rt_gstr w_308) {
  struct f_expect_op_309fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_308 = cp_rt_gstr(w_308);
if ((!f_at_op_296(F->up, F->w_308))) {
f_perror_304(F->up, cat_rt_gstr(rt_g_lit("expected ", 9), F->w_308));
}
F->up->tpos_111 = rt_add(G_NV(F->up->tpos_111), ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_id_311(struct f_greenc_1fr *up_, P137 *res_310) {
  struct f_expect_id_311fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_310 = res_310;
if ((!f_at_kind_298(F->up, ((rt_int)1LL)))) {
f_perror_304(F->up, rt_g_lit("expected an identifier", 22));
}
F->up->tpos_111 = rt_add(G_NV(F->up->tpos_111), ((rt_int)1LL));
(*F->res_310) = (*(P107)rt_nil_check(({ A106 ix1437 = F->up->toks_109; ix1437.p[rt_index(rt_sub(G_NV(F->up->tpos_111), ((rt_int)1LL)), ix1437.lo, ix1437.hi) - ix1437.lo]; }))).s_;
goto ret_;
ret_:

  return;
}

static void f_name_node_313(struct f_greenc_1fr *up_, P171 *res_312) {
  struct f_name_node_313fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_312 = res_312;
F->x_1438 = NULL;
F->x_1438 = f_nn_285(F->up, ((rt_int)5LL), f_cur_line_292(F->up));
f_expect_id_311(F->up, &(*(P171)rt_nil_check(F->x_1438)).name_);
(*F->res_312) = F->x_1438;
goto ret_;
ret_:

  return;
}

static void f_id_list_315(struct f_greenc_1fr *up_, P171 *res_314) {
  struct f_id_list_315fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_314 = res_314;
F->head_1439 = NULL;
F->tail_1440 = NULL;
F->x_1441 = NULL;
f_name_node_313(F->up, &F->x_1441);
f_append_289(F->up, &F->head_1439, &F->tail_1440, F->x_1441);
while (f_at_op_296(F->up, rt_g_lit(",", 1))) {
f_skip_305(F->up);
f_name_node_313(F->up, &F->x_1441);
f_append_289(F->up, &F->head_1439, &F->tail_1440, F->x_1441);
}
L_end_1442: ;
(*F->res_314) = F->head_1439;
goto ret_;
ret_:

  return;
}

static P171 f_binop_320(struct f_greenc_1fr *up_, P137 op_316, P171 l_317, P171 r_318, rt_int line_319) {
  struct f_binop_320fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->op_316 = op_316;
F->l_317 = l_317;
F->r_318 = r_318;
F->line_319 = line_319;
F->x_1443 = NULL;
F->x_1443 = f_nn_285(F->up, ((rt_int)7LL), F->line_319);
(*(P171)rt_nil_check(F->x_1443)).name_ = F->op_316;
(*(P171)rt_nil_check(F->x_1443)).a_ = F->l_317;
(*(P171)rt_nil_check(F->x_1443)).b_ = F->r_318;
F->result_ = F->x_1443;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_expr_322(struct f_greenc_1fr *up_, P171 *res_321) {
  struct f_expr_322fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_321 = res_321;
F->l_1444 = NULL;
F->r_1445 = NULL;
F->op_1446 = NULL;
F->first_op_1447 = NULL;
F->line_1448 = INT64_MIN;
F->short_1449 = INT_MIN;
F->short_1449 = 0;
F->first_short_1450 = INT_MIN;
F->first_short_1450 = 0;
f_relation_326(F->up, &F->l_1444);
while (((f_at_kw_294(F->up, rt_g_lit("AND", 3)) || f_at_kw_294(F->up, rt_g_lit("OR", 2))) || f_at_kw_294(F->up, rt_g_lit("XOR", 3)))) {
F->op_1446 = (*(P107)rt_nil_check(({ A106 ix1452 = F->up->toks_109; ix1452.p[rt_index(G_NV(F->up->tpos_111), ix1452.lo, ix1452.hi) - ix1452.lo]; }))).s_;
F->line_1448 = f_cur_line_292(F->up);
f_skip_305(F->up);
F->short_1449 = 0;
if ((eq_rt_gstr((*(P137)rt_nil_check(F->op_1446)), rt_g_lit("AND", 3)) && f_at_kw_294(F->up, rt_g_lit("THEN", 4)))) {
f_skip_305(F->up);
F->short_1449 = 1;
} else if ((eq_rt_gstr((*(P137)rt_nil_check(F->op_1446)), rt_g_lit("OR", 2)) && f_at_kw_294(F->up, rt_g_lit("ELSE", 4)))) {
f_skip_305(F->up);
F->short_1449 = 1;
}
if ((F->first_op_1447 == NULL)) {
F->first_op_1447 = F->op_1446;
F->first_short_1450 = G_NV(F->short_1449);
} else if (((!eq_rt_gstr((*(P137)rt_nil_check(F->first_op_1447)), (*(P137)rt_nil_check(F->op_1446)))) || (G_NV(F->first_short_1450) != G_NV(F->short_1449)))) {
f_fail_232(F->up, G_NV(F->line_1448), rt_g_lit("logical operators of different kinds are not mixed without parentheses (RM79 4.4)", 81));
}
f_relation_326(F->up, &F->r_1445);
F->l_1444 = f_binop_320(F->up, F->op_1446, F->l_1444, F->r_1445, G_NV(F->line_1448));
if (G_NV(F->short_1449)) {
(*(P171)rt_nil_check(F->l_1444)).ival_ = ((rt_int)1LL);
}
}
L_end_1451: ;
(*F->res_321) = F->l_1444;
goto ret_;
ret_:

  return;
}

static int f_is_rel_324(struct f_greenc_1fr *up_, rt_gstr s_323) {
  struct f_is_rel_324fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_323 = cp_rt_gstr(s_323);
F->result_ = (((((eq_rt_gstr(F->s_323, rt_g_lit("=", 1)) || eq_rt_gstr(F->s_323, rt_g_lit("/=", 2))) || eq_rt_gstr(F->s_323, rt_g_lit("<", 1))) || eq_rt_gstr(F->s_323, rt_g_lit("<=", 2))) || eq_rt_gstr(F->s_323, rt_g_lit(">", 1))) || eq_rt_gstr(F->s_323, rt_g_lit(">=", 2)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_relation_326(struct f_greenc_1fr *up_, P171 *res_325) {
  struct f_relation_326fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_325 = res_325;
F->l_1453 = NULL;
F->r_1454 = NULL;
F->lo_1455 = NULL;
F->hi_1456 = NULL;
F->t_1457 = NULL;
F->op_1458 = NULL;
F->line_1459 = INT64_MIN;
F->line_1459 = f_cur_line_292(F->up);
F->neg_1460 = INT_MIN;
F->neg_1460 = 0;
f_simple_expr_330(F->up, &F->l_1453);
if ((f_at_kind_298(F->up, ((rt_int)3LL)) && f_is_rel_324(F->up, (*(P137)rt_nil_check((*(P107)rt_nil_check(({ A106 ix1462 = F->up->toks_109; ix1462.p[rt_index(G_NV(F->up->tpos_111), ix1462.lo, ix1462.hi) - ix1462.lo]; }))).s_))))) {
F->op_1458 = (*(P107)rt_nil_check(({ A106 ix1463 = F->up->toks_109; ix1463.p[rt_index(G_NV(F->up->tpos_111), ix1463.lo, ix1463.hi) - ix1463.lo]; }))).s_;
f_skip_305(F->up);
f_simple_expr_330(F->up, &F->r_1454);
F->l_1453 = f_binop_320(F->up, F->op_1458, F->l_1453, F->r_1454, G_NV(F->line_1459));
(*F->res_325) = F->l_1453;
goto ret_;
}
if (((f_at_kw_294(F->up, rt_g_lit("NOT", 3)) && (f_kind_at_300(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_302(F->up, ((rt_int)1LL)), rt_g_lit("IN", 2)))) {
f_skip_305(F->up);
F->neg_1460 = 1;
}
if (f_at_kw_294(F->up, rt_g_lit("IN", 2))) {
f_skip_305(F->up);
f_simple_expr_330(F->up, &F->lo_1455);
if (f_at_op_296(F->up, rt_g_lit("..", 2))) {
f_skip_305(F->up);
f_simple_expr_330(F->up, &F->hi_1456);
F->t_1457 = f_nn_285(F->up, ((rt_int)14LL), G_NV(F->line_1459));
(*(P171)rt_nil_check(F->t_1457)).a_ = F->lo_1455;
(*(P171)rt_nil_check(F->t_1457)).b_ = F->hi_1456;
} else if (((G_NV((*(P171)rt_nil_check(F->lo_1455)).kind_) == ((rt_int)5LL)) || (G_NV((*(P171)rt_nil_check(F->lo_1455)).kind_) == ((rt_int)9LL)))) {
F->t_1457 = f_nn_285(F->up, ((rt_int)80LL), G_NV(F->line_1459));
(*(P171)rt_nil_check(F->t_1457)).name_ = (*(P171)rt_nil_check(F->lo_1455)).name_;
if ((G_NV((*(P171)rt_nil_check(F->lo_1455)).kind_) == ((rt_int)9LL))) {
(*(P171)rt_nil_check(F->t_1457)).tag_ = f_mk_211(F->up, f_path_of_328(F->up, (*(P171)rt_nil_check(F->lo_1455)).a_));
}
if (f_at_kw_294(F->up, rt_g_lit("RANGE", 5))) {
f_skip_305(F->up);
F->r_1454 = f_nn_285(F->up, ((rt_int)14LL), G_NV(F->line_1459));
f_simple_expr_330(F->up, &(*(P171)rt_nil_check(F->r_1454)).a_);
f_expect_op_309(F->up, rt_g_lit("..", 2));
f_simple_expr_330(F->up, &(*(P171)rt_nil_check(F->r_1454)).b_);
(*(P171)rt_nil_check(F->t_1457)).a_ = F->r_1454;
(*(P171)rt_nil_check(F->t_1457)).flag_ = ((rt_int)1LL);
} else if ((f_at_kw_294(F->up, rt_g_lit("DIGITS", 6)) || f_at_kw_294(F->up, rt_g_lit("DELTA", 5)))) {
f_skip_305(F->up);
f_simple_expr_330(F->up, &(*(P171)rt_nil_check(F->t_1457)).b_);
(*(P171)rt_nil_check(F->t_1457)).flag_ = ((rt_int)3LL);
}
} else {
f_perror_304(F->up, rt_g_lit("membership is in a range or a type mark (RM79 4.5.2)", 52));
}
F->op_1458 = f_mk_211(F->up, rt_g_lit("IN", 2));
F->l_1453 = f_binop_320(F->up, F->op_1458, F->l_1453, F->t_1457, G_NV(F->line_1459));
if (G_NV(F->neg_1460)) {
F->t_1457 = f_nn_285(F->up, ((rt_int)6LL), G_NV(F->line_1459));
(*(P171)rt_nil_check(F->t_1457)).name_ = f_mk_211(F->up, rt_g_lit("NOT", 3));
(*(P171)rt_nil_check(F->t_1457)).a_ = F->l_1453;
(*F->res_325) = F->t_1457;
goto ret_;
}
}
(*F->res_325) = F->l_1453;
goto ret_;
ret_:

  return;
}

static rt_gstr f_path_of_328(struct f_greenc_1fr *up_, P171 e_327) {
  struct f_path_of_328fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_327 = e_327;
if ((G_NV((*(P171)rt_nil_check(F->e_327)).kind_) == ((rt_int)9LL))) {
F->result_ = cat_rt_gstr(cat_rt_gstr(f_path_of_328(F->up, (*(P171)rt_nil_check(F->e_327)).a_), one_rt_gstr(46)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_327)).name_)));
goto ret_;
}
F->result_ = (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_327)).name_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_simple_expr_330(struct f_greenc_1fr *up_, P171 *res_329) {
  struct f_simple_expr_330fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_329 = res_329;
F->l_1464 = NULL;
F->r_1465 = NULL;
F->op_1466 = NULL;
F->line_1467 = INT64_MIN;
F->line_1467 = f_cur_line_292(F->up);
if (((f_at_op_296(F->up, rt_g_lit("+", 1)) || f_at_op_296(F->up, rt_g_lit("-", 1))) || f_at_kw_294(F->up, rt_g_lit("NOT", 3)))) {
F->op_1466 = (*(P107)rt_nil_check(({ A106 ix1468 = F->up->toks_109; ix1468.p[rt_index(G_NV(F->up->tpos_111), ix1468.lo, ix1468.hi) - ix1468.lo]; }))).s_;
f_skip_305(F->up);
f_term_332(F->up, &F->r_1465);
F->l_1464 = f_nn_285(F->up, ((rt_int)6LL), G_NV(F->line_1467));
(*(P171)rt_nil_check(F->l_1464)).name_ = F->op_1466;
(*(P171)rt_nil_check(F->l_1464)).a_ = F->r_1465;
} else {
f_term_332(F->up, &F->l_1464);
}
while (((f_at_op_296(F->up, rt_g_lit("+", 1)) || f_at_op_296(F->up, rt_g_lit("-", 1))) || f_at_op_296(F->up, rt_g_lit("&", 1)))) {
F->op_1466 = (*(P107)rt_nil_check(({ A106 ix1470 = F->up->toks_109; ix1470.p[rt_index(G_NV(F->up->tpos_111), ix1470.lo, ix1470.hi) - ix1470.lo]; }))).s_;
f_skip_305(F->up);
f_term_332(F->up, &F->r_1465);
F->l_1464 = f_binop_320(F->up, F->op_1466, F->l_1464, F->r_1465, G_NV(F->line_1467));
}
L_end_1469: ;
(*F->res_329) = F->l_1464;
goto ret_;
ret_:

  return;
}

static void f_term_332(struct f_greenc_1fr *up_, P171 *res_331) {
  struct f_term_332fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_331 = res_331;
F->l_1471 = NULL;
F->r_1472 = NULL;
F->op_1473 = NULL;
F->line_1474 = INT64_MIN;
F->line_1474 = f_cur_line_292(F->up);
f_factor_334(F->up, &F->l_1471);
while (((f_at_op_296(F->up, rt_g_lit("*", 1)) || f_at_op_296(F->up, rt_g_lit("/", 1))) || f_at_kw_294(F->up, rt_g_lit("MOD", 3)))) {
F->op_1473 = (*(P107)rt_nil_check(({ A106 ix1476 = F->up->toks_109; ix1476.p[rt_index(G_NV(F->up->tpos_111), ix1476.lo, ix1476.hi) - ix1476.lo]; }))).s_;
f_skip_305(F->up);
f_factor_334(F->up, &F->r_1472);
F->l_1471 = f_binop_320(F->up, F->op_1473, F->l_1471, F->r_1472, G_NV(F->line_1474));
}
L_end_1475: ;
(*F->res_331) = F->l_1471;
goto ret_;
ret_:

  return;
}

static void f_factor_334(struct f_greenc_1fr *up_, P171 *res_333) {
  struct f_factor_334fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_333 = res_333;
F->l_1477 = NULL;
F->r_1478 = NULL;
F->op_1479 = NULL;
F->line_1480 = INT64_MIN;
F->line_1480 = f_cur_line_292(F->up);
f_primary_336(F->up, &F->l_1477);
if (f_at_op_296(F->up, rt_g_lit("**", 2))) {
F->op_1479 = (*(P107)rt_nil_check(({ A106 ix1481 = F->up->toks_109; ix1481.p[rt_index(G_NV(F->up->tpos_111), ix1481.lo, ix1481.hi) - ix1481.lo]; }))).s_;
f_skip_305(F->up);
f_primary_336(F->up, &F->r_1478);
F->l_1477 = f_binop_320(F->up, F->op_1479, F->l_1477, F->r_1478, G_NV(F->line_1480));
}
(*F->res_333) = F->l_1477;
goto ret_;
ret_:

  return;
}

static void f_primary_336(struct f_greenc_1fr *up_, P171 *res_335) {
  struct f_primary_336fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_335 = res_335;
F->x_1482 = NULL;
F->line_1483 = INT64_MIN;
F->line_1483 = f_cur_line_292(F->up);
if (f_at_kind_298(F->up, ((rt_int)4LL))) {
F->x_1482 = f_nn_285(F->up, ((rt_int)1LL), G_NV(F->line_1483));
(*(P171)rt_nil_check(F->x_1482)).ival_ = G_NV((*(P107)rt_nil_check(({ A106 ix1484 = F->up->toks_109; ix1484.p[rt_index(G_NV(F->up->tpos_111), ix1484.lo, ix1484.hi) - ix1484.lo]; }))).ival_);
(*(P171)rt_nil_check(F->x_1482)).name_ = (*(P107)rt_nil_check(({ A106 ix1485 = F->up->toks_109; ix1485.p[rt_index(G_NV(F->up->tpos_111), ix1485.lo, ix1485.hi) - ix1485.lo]; }))).s_;
f_skip_305(F->up);
(*F->res_335) = F->x_1482;
goto ret_;
}
if (f_at_kind_298(F->up, ((rt_int)5LL))) {
F->x_1482 = f_nn_285(F->up, ((rt_int)2LL), G_NV(F->line_1483));
(*(P171)rt_nil_check(F->x_1482)).name_ = (*(P107)rt_nil_check(({ A106 ix1486 = F->up->toks_109; ix1486.p[rt_index(G_NV(F->up->tpos_111), ix1486.lo, ix1486.hi) - ix1486.lo]; }))).s_;
f_skip_305(F->up);
(*F->res_335) = F->x_1482;
goto ret_;
}
if (f_at_kind_298(F->up, ((rt_int)6LL))) {
F->x_1482 = f_nn_285(F->up, ((rt_int)3LL), G_NV(F->line_1483));
(*(P171)rt_nil_check(F->x_1482)).name_ = (*(P107)rt_nil_check(({ A106 ix1487 = F->up->toks_109; ix1487.p[rt_index(G_NV(F->up->tpos_111), ix1487.lo, ix1487.hi) - ix1487.lo]; }))).s_;
f_skip_305(F->up);
(*F->res_335) = F->x_1482;
goto ret_;
}
if (f_at_kw_294(F->up, rt_g_lit("NULL", 4))) {
f_skip_305(F->up);
F->x_1482 = f_nn_285(F->up, ((rt_int)4LL), G_NV(F->line_1483));
(*F->res_335) = F->x_1482;
goto ret_;
}
if (f_at_kw_294(F->up, rt_g_lit("NEW", 3))) {
f_skip_305(F->up);
F->x_1482 = f_nn_285(F->up, ((rt_int)11LL), G_NV(F->line_1483));
f_expect_id_311(F->up, &(*(P171)rt_nil_check(F->x_1482)).name_);
if (f_at_op_296(F->up, rt_g_lit("(", 1))) {
f_agg_or_paren_338(F->up, &(*(P171)rt_nil_check(F->x_1482)).a_);
}
(*F->res_335) = F->x_1482;
goto ret_;
}
if (f_at_op_296(F->up, rt_g_lit("(", 1))) {
f_agg_or_paren_338(F->up, &F->x_1482);
(*F->res_335) = F->x_1482;
goto ret_;
}
if (f_at_kind_298(F->up, ((rt_int)1LL))) {
f_name_p_343(F->up, &F->x_1482);
(*F->res_335) = F->x_1482;
goto ret_;
}
f_perror_304(F->up, rt_g_lit("expected an expression", 22));
(*F->res_335) = NULL;
goto ret_;
ret_:

  return;
}

static void f_agg_or_paren_338(struct f_greenc_1fr *up_, P171 *res_337) {
  struct f_agg_or_paren_338fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_337 = res_337;
F->line_1488 = INT64_MIN;
F->line_1488 = f_cur_line_292(F->up);
F->items_1489 = NULL;
F->itail_1490 = NULL;
F->it_1491 = NULL;
F->first_1492 = NULL;
F->keys_1493 = NULL;
F->ktail_1494 = NULL;
F->lab_1495 = NULL;
F->x_1496 = NULL;
F->more_1497 = INT_MIN;
F->more_1497 = 1;
f_expect_op_309(F->up, rt_g_lit("(", 1));
while (G_NV(F->more_1497)) {
F->it_1491 = f_nn_285(F->up, ((rt_int)13LL), G_NV(F->line_1488));
if (f_at_kw_294(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_305(F->up);
f_expect_op_309(F->up, rt_g_lit("=>", 2));
F->lab_1495 = f_nn_285(F->up, ((rt_int)61LL), G_NV(F->line_1488));
(*(P171)rt_nil_check(F->lab_1495)).flag_ = ((rt_int)1LL);
(*(P171)rt_nil_check(F->it_1491)).a_ = F->lab_1495;
f_expr_322(F->up, &(*(P171)rt_nil_check(F->it_1491)).b_);
} else {
f_expr_322(F->up, &F->first_1492);
if (((f_at_op_296(F->up, rt_g_lit("..", 2)) || f_at_op_296(F->up, rt_g_lit("|", 1))) || f_at_op_296(F->up, rt_g_lit("=>", 2)))) {
F->keys_1493 = NULL;
F->ktail_1494 = NULL;
for (;;) {
F->lab_1495 = f_nn_285(F->up, ((rt_int)61LL), G_NV(F->line_1488));
(*(P171)rt_nil_check(F->lab_1495)).a_ = F->first_1492;
if (f_at_op_296(F->up, rt_g_lit("..", 2))) {
f_skip_305(F->up);
f_simple_expr_330(F->up, &(*(P171)rt_nil_check(F->lab_1495)).b_);
}
f_append_289(F->up, &F->keys_1493, &F->ktail_1494, F->lab_1495);
if ((!f_at_op_296(F->up, rt_g_lit("|", 1)))) {
goto L_end_1499;
}
f_skip_305(F->up);
f_simple_expr_330(F->up, &F->first_1492);
}
L_end_1499: ;
f_expect_op_309(F->up, rt_g_lit("=>", 2));
(*(P171)rt_nil_check(F->it_1491)).a_ = F->keys_1493;
f_expr_322(F->up, &(*(P171)rt_nil_check(F->it_1491)).b_);
} else {
(*(P171)rt_nil_check(F->it_1491)).b_ = F->first_1492;
}
}
f_append_289(F->up, &F->items_1489, &F->itail_1490, F->it_1491);
F->more_1497 = f_at_op_296(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1497)) {
f_skip_305(F->up);
}
}
L_end_1498: ;
f_expect_op_309(F->up, rt_g_lit(")", 1));
if ((((*(P171)rt_nil_check(F->items_1489)).next_ == NULL) && ((*(P171)rt_nil_check(F->items_1489)).a_ == NULL))) {
F->x_1496 = f_nn_285(F->up, ((rt_int)15LL), G_NV(F->line_1488));
(*(P171)rt_nil_check(F->x_1496)).a_ = (*(P171)rt_nil_check(F->items_1489)).b_;
(*F->res_337) = F->x_1496;
goto ret_;
}
F->x_1496 = f_nn_285(F->up, ((rt_int)12LL), G_NV(F->line_1488));
(*(P171)rt_nil_check(F->x_1496)).a_ = F->items_1489;
(*F->res_337) = F->x_1496;
goto ret_;
ret_:

  return;
}

static int f_choice_token_340(struct f_greenc_1fr *up_, P107 t_339) {
  struct f_choice_token_340fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_339 = t_339;
if ((G_NV((*(P107)rt_nil_check(F->t_339)).kind_) == ((rt_int)3LL))) {
F->result_ = (eq_rt_gstr((*(P137)rt_nil_check((*(P107)rt_nil_check(F->t_339)).s_)), rt_g_lit("=>", 2)) || eq_rt_gstr((*(P137)rt_nil_check((*(P107)rt_nil_check(F->t_339)).s_)), rt_g_lit("|", 1)));
goto ret_;
}
F->result_ = ((G_NV((*(P107)rt_nil_check(F->t_339)).kind_) == ((rt_int)2LL)) && eq_rt_gstr((*(P137)rt_nil_check((*(P107)rt_nil_check(F->t_339)).s_)), rt_g_lit("OTHERS", 6)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_aggregate_ahead_341(struct f_greenc_1fr *up_) {
  struct f_aggregate_ahead_341fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_1500 = INT64_MIN;
F->d_1500 = ((rt_int)0LL);
F->k_1501 = INT64_MIN;
F->k_1501 = ((rt_int)0LL);
for (;;) {
if ((rt_add(G_NV(F->up->tpos_111), G_NV(F->k_1501)) > G_NV(F->up->ntoks_110))) {
F->result_ = 0;
goto ret_;
}
{
F->t_1504 = NULL;
F->t_1504 = ({ A106 ix1505 = F->up->toks_109; ix1505.p[rt_index(rt_add(G_NV(F->up->tpos_111), G_NV(F->k_1501)), ix1505.lo, ix1505.hi) - ix1505.lo]; });
if (((G_NV((*(P107)rt_nil_check(F->t_1504)).kind_) == ((rt_int)3LL)) && eq_rt_gstr((*(P137)rt_nil_check((*(P107)rt_nil_check(F->t_1504)).s_)), rt_g_lit("(", 1)))) {
F->d_1500 = rt_add(G_NV(F->d_1500), ((rt_int)1LL));
} else if (((G_NV((*(P107)rt_nil_check(F->t_1504)).kind_) == ((rt_int)3LL)) && eq_rt_gstr((*(P137)rt_nil_check((*(P107)rt_nil_check(F->t_1504)).s_)), rt_g_lit(")", 1)))) {
F->d_1500 = rt_sub(G_NV(F->d_1500), ((rt_int)1LL));
if ((G_NV(F->d_1500) == ((rt_int)0LL))) {
F->result_ = 0;
goto ret_;
}
} else if (((G_NV(F->d_1500) == ((rt_int)1LL)) && f_choice_token_340(F->up, F->t_1504))) {
F->result_ = 1;
goto ret_;
} else if (((G_NV((*(P107)rt_nil_check(F->t_1504)).kind_) == ((rt_int)3LL)) && eq_rt_gstr((*(P137)rt_nil_check((*(P107)rt_nil_check(F->t_1504)).s_)), rt_g_lit(";", 1)))) {
F->result_ = 0;
goto ret_;
}

}
L_end_1503: ;
F->k_1501 = rt_add(G_NV(F->k_1501), ((rt_int)1LL));
}
L_end_1502: ;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_name_p_343(struct f_greenc_1fr *up_, P171 *res_342) {
  struct f_name_p_343fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_342 = res_342;
F->p_1506 = NULL;
F->x_1507 = NULL;
F->args_1508 = NULL;
F->atail_1509 = NULL;
F->lo_1510 = NULL;
F->r_1511 = NULL;
F->line_1512 = INT64_MIN;
F->line_1512 = f_cur_line_292(F->up);
F->more_1513 = INT_MIN;
f_name_node_313(F->up, &F->p_1506);
for (;;) {
if ((f_at_op_296(F->up, rt_g_lit("(", 1)) && f_aggregate_ahead_341(F->up))) {
F->x_1507 = f_nn_285(F->up, ((rt_int)8LL), G_NV(F->line_1512));
(*(P171)rt_nil_check(F->x_1507)).a_ = F->p_1506;
f_agg_or_paren_338(F->up, &(*(P171)rt_nil_check(F->x_1507)).b_);
(*(P171)rt_nil_check(F->x_1507)).flag_ = ((rt_int)9LL);
F->p_1506 = F->x_1507;
} else if (f_at_op_296(F->up, rt_g_lit("(", 1))) {
f_skip_305(F->up);
F->args_1508 = NULL;
F->atail_1509 = NULL;
if ((!f_at_op_296(F->up, rt_g_lit(")", 1)))) {
F->more_1513 = 1;
while (G_NV(F->more_1513)) {
{
F->formal_1517 = NULL;
F->mark_1518 = INT64_MIN;
F->mark_1518 = ((rt_int)0LL);
if (((f_at_kind_298(F->up, ((rt_int)1LL)) && (f_kind_at_300(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (((eq_rt_gstr(f_text_at_302(F->up, ((rt_int)1LL)), rt_g_lit(":=", 2)) || eq_rt_gstr(f_text_at_302(F->up, ((rt_int)1LL)), rt_g_lit("=:", 2))) || eq_rt_gstr(f_text_at_302(F->up, ((rt_int)1LL)), rt_g_lit(":=:", 3))) || eq_rt_gstr(f_text_at_302(F->up, ((rt_int)1LL)), rt_g_lit("=>", 2))))) {
F->formal_1517 = (*(P107)rt_nil_check(({ A106 ix1519 = F->up->toks_109; ix1519.p[rt_index(G_NV(F->up->tpos_111), ix1519.lo, ix1519.hi) - ix1519.lo]; }))).s_;
if (eq_rt_gstr(f_text_at_302(F->up, ((rt_int)1LL)), rt_g_lit(":=", 2))) {
F->mark_1518 = ((rt_int)1LL);
} else if (eq_rt_gstr(f_text_at_302(F->up, ((rt_int)1LL)), rt_g_lit("=:", 2))) {
F->mark_1518 = ((rt_int)3LL);
} else if (eq_rt_gstr(f_text_at_302(F->up, ((rt_int)1LL)), rt_g_lit(":=:", 3))) {
F->mark_1518 = ((rt_int)2LL);
} else {
F->mark_1518 = ((rt_int)4LL);
}
f_skip_305(F->up);
f_skip_305(F->up);
}
f_expr_322(F->up, &F->lo_1510);
if (f_at_op_296(F->up, rt_g_lit("..", 2))) {
f_skip_305(F->up);
F->r_1511 = f_nn_285(F->up, ((rt_int)14LL), G_NV(F->line_1512));
(*(P171)rt_nil_check(F->r_1511)).a_ = F->lo_1510;
f_simple_expr_330(F->up, &(*(P171)rt_nil_check(F->r_1511)).b_);
F->lo_1510 = F->r_1511;
}
(*(P171)rt_nil_check(F->lo_1510)).formal_ = F->formal_1517;
(*(P171)rt_nil_check(F->lo_1510)).flag_ = G_NV(F->mark_1518);
f_append_289(F->up, &F->args_1508, &F->atail_1509, F->lo_1510);

}
L_end_1516: ;
F->more_1513 = f_at_op_296(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1513)) {
f_skip_305(F->up);
}
}
L_end_1515: ;
}
f_expect_op_309(F->up, rt_g_lit(")", 1));
F->x_1507 = f_nn_285(F->up, ((rt_int)8LL), G_NV(F->line_1512));
(*(P171)rt_nil_check(F->x_1507)).a_ = F->p_1506;
(*(P171)rt_nil_check(F->x_1507)).b_ = F->args_1508;
F->p_1506 = F->x_1507;
} else if (f_at_op_296(F->up, rt_g_lit(".", 1))) {
f_skip_305(F->up);
F->x_1507 = f_nn_285(F->up, ((rt_int)9LL), G_NV(F->line_1512));
(*(P171)rt_nil_check(F->x_1507)).a_ = F->p_1506;
if (f_at_kw_294(F->up, rt_g_lit("ALL", 3))) {
f_skip_305(F->up);
(*(P171)rt_nil_check(F->x_1507)).name_ = f_mk_211(F->up, rt_g_lit("ALL", 3));
} else {
f_expect_id_311(F->up, &(*(P171)rt_nil_check(F->x_1507)).name_);
}
F->p_1506 = F->x_1507;
} else if (f_at_op_296(F->up, rt_g_lit("'", 1))) {
f_skip_305(F->up);
F->x_1507 = f_nn_285(F->up, ((rt_int)10LL), G_NV(F->line_1512));
(*(P171)rt_nil_check(F->x_1507)).a_ = F->p_1506;
(*(P171)rt_nil_check(F->x_1507)).name_ = (*(P107)rt_nil_check(({ A106 ix1520 = F->up->toks_109; ix1520.p[rt_index(G_NV(F->up->tpos_111), ix1520.lo, ix1520.hi) - ix1520.lo]; }))).s_;
f_skip_305(F->up);
if (f_at_op_296(F->up, rt_g_lit("(", 1))) {
f_skip_305(F->up);
f_expr_322(F->up, &(*(P171)rt_nil_check(F->x_1507)).b_);
f_expect_op_309(F->up, rt_g_lit(")", 1));
}
F->p_1506 = F->x_1507;
} else {
(*F->res_342) = F->p_1506;
goto ret_;
}
}
L_end_1514: ;
ret_:

  return;
}

static void f_component_list_345(struct f_greenc_1fr *up_, P171 *res_344) {
  struct f_component_list_345fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_344 = res_344;
F->comps_1521 = NULL;
F->ctail_1522 = NULL;
F->names_1523 = NULL;
F->st_1524 = NULL;
F->def_1525 = NULL;
F->cm_1526 = NULL;
F->v_1527 = NULL;
F->arm_1528 = NULL;
F->atail_1529 = NULL;
F->labs_1530 = NULL;
F->ltail_1531 = NULL;
F->l_1532 = NULL;
F->is_c_1533 = INT_MIN;
for (;;) {
if (f_at_kw_294(F->up, rt_g_lit("NULL", 4))) {
f_skip_305(F->up);
f_expect_op_309(F->up, rt_g_lit(";", 1));
} else if (f_at_kw_294(F->up, rt_g_lit("CASE", 4))) {
F->v_1527 = f_nn_285(F->up, ((rt_int)23LL), f_cur_line_292(F->up));
f_skip_305(F->up);
f_name_node_313(F->up, &(*(P171)rt_nil_check(F->v_1527)).a_);
f_expect_kw_307(F->up, rt_g_lit("OF", 2));
F->atail_1529 = NULL;
while (f_at_kw_294(F->up, rt_g_lit("WHEN", 4))) {
f_skip_305(F->up);
F->arm_1528 = f_nn_285(F->up, ((rt_int)60LL), f_cur_line_292(F->up));
F->labs_1530 = NULL;
F->ltail_1531 = NULL;
for (;;) {
if (f_at_kw_294(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_305(F->up);
(*(P171)rt_nil_check(F->arm_1528)).flag_ = ((rt_int)1LL);
} else {
F->l_1532 = f_nn_285(F->up, ((rt_int)61LL), f_cur_line_292(F->up));
f_simple_expr_330(F->up, &(*(P171)rt_nil_check(F->l_1532)).a_);
if (f_at_op_296(F->up, rt_g_lit("..", 2))) {
f_skip_305(F->up);
f_simple_expr_330(F->up, &(*(P171)rt_nil_check(F->l_1532)).b_);
}
f_append_289(F->up, &F->labs_1530, &F->ltail_1531, F->l_1532);
}
if ((!f_at_op_296(F->up, rt_g_lit("|", 1)))) {
goto L_end_1536;
}
f_skip_305(F->up);
}
L_end_1536: ;
f_expect_op_309(F->up, rt_g_lit("=>", 2));
(*(P171)rt_nil_check(F->arm_1528)).a_ = F->labs_1530;
f_component_list_345(F->up, &(*(P171)rt_nil_check(F->arm_1528)).b_);
f_append_289(F->up, &(*(P171)rt_nil_check(F->v_1527)).b_, &F->atail_1529, F->arm_1528);
}
L_end_1535: ;
f_expect_kw_307(F->up, rt_g_lit("END", 3));
f_expect_kw_307(F->up, rt_g_lit("CASE", 4));
f_expect_op_309(F->up, rt_g_lit(";", 1));
f_append_289(F->up, &F->comps_1521, &F->ctail_1522, F->v_1527);
} else if (f_at_kind_298(F->up, ((rt_int)1LL))) {
f_id_list_315(F->up, &F->names_1523);
f_expect_op_309(F->up, rt_g_lit(":", 1));
F->is_c_1533 = 0;
if (f_at_kw_294(F->up, rt_g_lit("CONSTANT", 8))) {
f_skip_305(F->up);
F->is_c_1533 = 1;
}
f_type_spec_351(F->up, &F->st_1524);
F->def_1525 = NULL;
if (f_at_op_296(F->up, rt_g_lit(":=", 2))) {
f_skip_305(F->up);
f_expr_322(F->up, &F->def_1525);
}
f_expect_op_309(F->up, rt_g_lit(";", 1));
while ((F->names_1523 != NULL)) {
F->cm_1526 = f_nn_285(F->up, ((rt_int)63LL), G_NV((*(P171)rt_nil_check(F->names_1523)).line_));
(*(P171)rt_nil_check(F->cm_1526)).name_ = (*(P171)rt_nil_check(F->names_1523)).name_;
(*(P171)rt_nil_check(F->cm_1526)).a_ = F->st_1524;
(*(P171)rt_nil_check(F->cm_1526)).b_ = F->def_1525;
if (G_NV(F->is_c_1533)) {
(*(P171)rt_nil_check(F->cm_1526)).flag_ = ((rt_int)1LL);
}
f_append_289(F->up, &F->comps_1521, &F->ctail_1522, F->cm_1526);
F->names_1523 = (*(P171)rt_nil_check(F->names_1523)).next_;
}
L_end_1537: ;
} else {
(*F->res_344) = F->comps_1521;
goto ret_;
}
}
L_end_1534: ;
ret_:

  return;
}

static void f_discrete_range_p_347(struct f_greenc_1fr *up_, P171 *res_346) {
  struct f_discrete_range_p_347fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_346 = res_346;
F->lo_1538 = NULL;
F->r_1539 = NULL;
F->line_1540 = INT64_MIN;
F->line_1540 = f_cur_line_292(F->up);
if (((f_at_kind_298(F->up, ((rt_int)1LL)) && (f_kind_at_300(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_302(F->up, ((rt_int)1LL)), rt_g_lit("RANGE", 5)))) {
f_subtype_ind_349(F->up, &(*F->res_346));
goto ret_;
}
if ((((((f_at_kind_298(F->up, ((rt_int)1LL)) && (f_kind_at_300(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && eq_rt_gstr(f_text_at_302(F->up, ((rt_int)1LL)), rt_g_lit(".", 1))) && (f_kind_at_300(F->up, ((rt_int)2LL)) == ((rt_int)1LL))) && (f_kind_at_300(F->up, ((rt_int)3LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_302(F->up, ((rt_int)3LL)), rt_g_lit("RANGE", 5)))) {
f_subtype_ind_349(F->up, &(*F->res_346));
goto ret_;
}
f_simple_expr_330(F->up, &F->lo_1538);
if (f_at_op_296(F->up, rt_g_lit("..", 2))) {
f_skip_305(F->up);
F->r_1539 = f_nn_285(F->up, ((rt_int)14LL), G_NV(F->line_1540));
(*(P171)rt_nil_check(F->r_1539)).a_ = F->lo_1538;
f_simple_expr_330(F->up, &(*(P171)rt_nil_check(F->r_1539)).b_);
(*F->res_346) = F->r_1539;
goto ret_;
}
(*F->res_346) = F->lo_1538;
goto ret_;
ret_:

  return;
}

static void f_subtype_ind_349(struct f_greenc_1fr *up_, P171 *res_348) {
  struct f_subtype_ind_349fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_348 = res_348;
F->f_1541 = NULL;
F->x_1542 = NULL;
F->r_1543 = NULL;
F->args_1544 = NULL;
F->atail_1545 = NULL;
F->lo_1546 = NULL;
F->line_1547 = INT64_MIN;
F->line_1547 = f_cur_line_292(F->up);
F->more_1548 = INT_MIN;
F->more_1548 = 1;
F->x_1542 = f_nn_285(F->up, ((rt_int)80LL), G_NV(F->line_1547));
f_expect_id_311(F->up, &(*(P171)rt_nil_check(F->x_1542)).name_);
while (f_at_op_296(F->up, rt_g_lit(".", 1))) {
f_skip_305(F->up);
if (((*(P171)rt_nil_check(F->x_1542)).tag_ == NULL)) {
(*(P171)rt_nil_check(F->x_1542)).tag_ = (*(P171)rt_nil_check(F->x_1542)).name_;
} else {
(*(P171)rt_nil_check(F->x_1542)).tag_ = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->x_1542)).tag_)), one_rt_gstr(46)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->x_1542)).name_))));
}
f_expect_id_311(F->up, &(*(P171)rt_nil_check(F->x_1542)).name_);
}
L_end_1549: ;
if (f_at_kw_294(F->up, rt_g_lit("RANGE", 5))) {
f_skip_305(F->up);
F->r_1543 = f_nn_285(F->up, ((rt_int)14LL), G_NV(F->line_1547));
f_simple_expr_330(F->up, &(*(P171)rt_nil_check(F->r_1543)).a_);
f_expect_op_309(F->up, rt_g_lit("..", 2));
f_simple_expr_330(F->up, &(*(P171)rt_nil_check(F->r_1543)).b_);
(*(P171)rt_nil_check(F->x_1542)).a_ = F->r_1543;
(*(P171)rt_nil_check(F->x_1542)).flag_ = ((rt_int)1LL);
} else if (f_at_op_296(F->up, rt_g_lit("(", 1))) {
f_skip_305(F->up);
while (G_NV(F->more_1548)) {
if (((f_at_kind_298(F->up, ((rt_int)1LL)) && (f_kind_at_300(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && eq_rt_gstr(f_text_at_302(F->up, ((rt_int)1LL)), rt_g_lit("=>", 2)))) {
f_expect_id_311(F->up, &F->f_1541);
f_skip_305(F->up);
f_expr_322(F->up, &F->lo_1546);
(*(P171)rt_nil_check(F->lo_1546)).formal_ = F->f_1541;
} else {
f_discrete_range_p_347(F->up, &F->lo_1546);
}
f_append_289(F->up, &F->args_1544, &F->atail_1545, F->lo_1546);
F->more_1548 = f_at_op_296(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1548)) {
f_skip_305(F->up);
}
}
L_end_1550: ;
f_expect_op_309(F->up, rt_g_lit(")", 1));
(*(P171)rt_nil_check(F->x_1542)).a_ = F->args_1544;
(*(P171)rt_nil_check(F->x_1542)).flag_ = ((rt_int)2LL);
} else if ((f_at_kw_294(F->up, rt_g_lit("DIGITS", 6)) || f_at_kw_294(F->up, rt_g_lit("DELTA", 5)))) {
f_skip_305(F->up);
f_simple_expr_330(F->up, &(*(P171)rt_nil_check(F->x_1542)).b_);
(*(P171)rt_nil_check(F->x_1542)).flag_ = ((rt_int)3LL);
if (f_at_kw_294(F->up, rt_g_lit("RANGE", 5))) {
f_skip_305(F->up);
F->r_1543 = f_nn_285(F->up, ((rt_int)14LL), G_NV(F->line_1547));
f_simple_expr_330(F->up, &(*(P171)rt_nil_check(F->r_1543)).a_);
f_expect_op_309(F->up, rt_g_lit("..", 2));
f_simple_expr_330(F->up, &(*(P171)rt_nil_check(F->r_1543)).b_);
(*(P171)rt_nil_check(F->x_1542)).a_ = F->r_1543;
}
}
(*F->res_348) = F->x_1542;
goto ret_;
ret_:

  return;
}

static void f_type_spec_351(struct f_greenc_1fr *up_, P171 *res_350) {
  struct f_type_spec_351fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_350 = res_350;
F->x_1551 = NULL;
if ((((((((f_at_op_296(F->up, rt_g_lit("(", 1)) || f_at_kw_294(F->up, rt_g_lit("ARRAY", 5))) || f_at_kw_294(F->up, rt_g_lit("RECORD", 6))) || f_at_kw_294(F->up, rt_g_lit("ACCESS", 6))) || f_at_kw_294(F->up, rt_g_lit("RANGE", 5))) || f_at_kw_294(F->up, rt_g_lit("DIGITS", 6))) || f_at_kw_294(F->up, rt_g_lit("DELTA", 5))) || f_at_kw_294(F->up, rt_g_lit("NEW", 3)))) {
f_type_def_353(F->up, &F->x_1551);
} else {
f_subtype_ind_349(F->up, &F->x_1551);
}
(*F->res_350) = F->x_1551;
goto ret_;
ret_:

  return;
}

static void f_type_def_353(struct f_greenc_1fr *up_, P171 *res_352) {
  struct f_type_def_353fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_352 = res_352;
F->x_1552 = NULL;
F->lits_1553 = NULL;
F->ltail_1554 = NULL;
F->l_1555 = NULL;
F->idx_1556 = NULL;
F->itail_1557 = NULL;
F->r_1558 = NULL;
F->comps_1559 = NULL;
F->ctail_1560 = NULL;
F->names_1561 = NULL;
F->st_1562 = NULL;
F->def_1563 = NULL;
F->cm_1564 = NULL;
F->line_1565 = INT64_MIN;
F->line_1565 = f_cur_line_292(F->up);
F->more_1566 = INT_MIN;
F->more_1566 = 1;
if (f_at_op_296(F->up, rt_g_lit("(", 1))) {
f_skip_305(F->up);
F->x_1552 = f_nn_285(F->up, ((rt_int)70LL), G_NV(F->line_1565));
while (G_NV(F->more_1566)) {
if (f_at_kind_298(F->up, ((rt_int)6LL))) {
F->l_1555 = f_nn_285(F->up, ((rt_int)3LL), G_NV(F->line_1565));
(*(P171)rt_nil_check(F->l_1555)).name_ = (*(P107)rt_nil_check(({ A106 ix1568 = F->up->toks_109; ix1568.p[rt_index(G_NV(F->up->tpos_111), ix1568.lo, ix1568.hi) - ix1568.lo]; }))).s_;
f_skip_305(F->up);
} else {
f_name_node_313(F->up, &F->l_1555);
}
f_append_289(F->up, &F->lits_1553, &F->ltail_1554, F->l_1555);
F->more_1566 = f_at_op_296(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1566)) {
f_skip_305(F->up);
}
}
L_end_1567: ;
f_expect_op_309(F->up, rt_g_lit(")", 1));
(*(P171)rt_nil_check(F->x_1552)).a_ = F->lits_1553;
(*F->res_352) = F->x_1552;
goto ret_;
}
if (f_at_kw_294(F->up, rt_g_lit("RANGE", 5))) {
f_skip_305(F->up);
F->x_1552 = f_nn_285(F->up, ((rt_int)71LL), G_NV(F->line_1565));
f_simple_expr_330(F->up, &(*(P171)rt_nil_check(F->x_1552)).a_);
f_expect_op_309(F->up, rt_g_lit("..", 2));
f_simple_expr_330(F->up, &(*(P171)rt_nil_check(F->x_1552)).b_);
(*F->res_352) = F->x_1552;
goto ret_;
}
if ((f_at_kw_294(F->up, rt_g_lit("DIGITS", 6)) || f_at_kw_294(F->up, rt_g_lit("DELTA", 5)))) {
F->x_1552 = f_nn_285(F->up, ((rt_int)72LL), G_NV(F->line_1565));
(*(P171)rt_nil_check(F->x_1552)).flag_ = ((rt_int)1LL);
if (f_at_kw_294(F->up, rt_g_lit("DELTA", 5))) {
(*(P171)rt_nil_check(F->x_1552)).flag_ = ((rt_int)2LL);
}
f_skip_305(F->up);
f_simple_expr_330(F->up, &(*(P171)rt_nil_check(F->x_1552)).a_);
if (f_at_kw_294(F->up, rt_g_lit("RANGE", 5))) {
f_skip_305(F->up);
F->r_1558 = f_nn_285(F->up, ((rt_int)14LL), G_NV(F->line_1565));
f_simple_expr_330(F->up, &(*(P171)rt_nil_check(F->r_1558)).a_);
f_expect_op_309(F->up, rt_g_lit("..", 2));
f_simple_expr_330(F->up, &(*(P171)rt_nil_check(F->r_1558)).b_);
(*(P171)rt_nil_check(F->x_1552)).b_ = F->r_1558;
}
(*F->res_352) = F->x_1552;
goto ret_;
}
if (f_at_kw_294(F->up, rt_g_lit("ARRAY", 5))) {
f_skip_305(F->up);
F->x_1552 = f_nn_285(F->up, ((rt_int)73LL), G_NV(F->line_1565));
f_expect_op_309(F->up, rt_g_lit("(", 1));
while (G_NV(F->more_1566)) {
if (((f_at_kind_298(F->up, ((rt_int)1LL)) && (f_kind_at_300(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (eq_rt_gstr(f_text_at_302(F->up, ((rt_int)1LL)), rt_g_lit(",", 1)) || eq_rt_gstr(f_text_at_302(F->up, ((rt_int)1LL)), rt_g_lit(")", 1))))) {
F->l_1555 = f_nn_285(F->up, ((rt_int)80LL), G_NV(F->line_1565));
f_expect_id_311(F->up, &(*(P171)rt_nil_check(F->l_1555)).name_);
(*(P171)rt_nil_check(F->x_1552)).flag_ = ((rt_int)1LL);
} else {
f_discrete_range_p_347(F->up, &F->l_1555);
if (((G_NV((*(P171)rt_nil_check(F->l_1555)).kind_) != ((rt_int)14LL)) && (G_NV((*(P171)rt_nil_check(F->l_1555)).kind_) != ((rt_int)80LL)))) {
f_perror_304(F->up, rt_g_lit("an index is a discrete range or a type mark (RM79 3.6)", 54));
}
}
f_append_289(F->up, &F->idx_1556, &F->itail_1557, F->l_1555);
F->more_1566 = f_at_op_296(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1566)) {
f_skip_305(F->up);
}
}
L_end_1569: ;
f_expect_op_309(F->up, rt_g_lit(")", 1));
f_expect_kw_307(F->up, rt_g_lit("OF", 2));
(*(P171)rt_nil_check(F->x_1552)).a_ = F->idx_1556;
f_type_spec_351(F->up, &(*(P171)rt_nil_check(F->x_1552)).b_);
(*F->res_352) = F->x_1552;
goto ret_;
}
if (f_at_kw_294(F->up, rt_g_lit("RECORD", 6))) {
f_skip_305(F->up);
F->x_1552 = f_nn_285(F->up, ((rt_int)74LL), G_NV(F->line_1565));
f_component_list_345(F->up, &(*(P171)rt_nil_check(F->x_1552)).a_);
f_expect_kw_307(F->up, rt_g_lit("END", 3));
f_expect_kw_307(F->up, rt_g_lit("RECORD", 6));
(*F->res_352) = F->x_1552;
goto ret_;
}
if (f_at_kw_294(F->up, rt_g_lit("ACCESS", 6))) {
f_skip_305(F->up);
F->x_1552 = f_nn_285(F->up, ((rt_int)75LL), G_NV(F->line_1565));
f_type_spec_351(F->up, &(*(P171)rt_nil_check(F->x_1552)).a_);
(*F->res_352) = F->x_1552;
goto ret_;
}
if (f_at_kw_294(F->up, rt_g_lit("NEW", 3))) {
f_skip_305(F->up);
F->x_1552 = f_nn_285(F->up, ((rt_int)76LL), G_NV(F->line_1565));
f_subtype_ind_349(F->up, &(*(P171)rt_nil_check(F->x_1552)).a_);
(*F->res_352) = F->x_1552;
goto ret_;
}
f_perror_304(F->up, rt_g_lit("expected a type definition", 26));
(*F->res_352) = NULL;
goto ret_;
ret_:

  return;
}

static void f_pragma_p_355(struct f_greenc_1fr *up_, P171 *res_354) {
  struct f_pragma_p_355fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_354 = res_354;
F->x_1570 = NULL;
F->a_1571 = NULL;
F->head_1572 = NULL;
F->tail_1573 = NULL;
F->x_1570 = f_nn_285(F->up, ((rt_int)56LL), f_cur_line_292(F->up));
f_expect_kw_307(F->up, rt_g_lit("PRAGMA", 6));
f_expect_id_311(F->up, &(*(P171)rt_nil_check(F->x_1570)).name_);
if (f_at_op_296(F->up, rt_g_lit("(", 1))) {
f_skip_305(F->up);
for (;;) {
if (f_at_kind_298(F->up, ((rt_int)1LL))) {
f_name_node_313(F->up, &F->a_1571);
} else if (((f_at_kind_298(F->up, ((rt_int)6LL)) || f_at_kind_298(F->up, ((rt_int)4LL))) || f_at_kind_298(F->up, ((rt_int)5LL)))) {
f_primary_336(F->up, &F->a_1571);
} else {
f_perror_304(F->up, rt_g_lit("a pragma argument is an identifier, a string or a number (RM79 2.7)", 67));
}
f_append_289(F->up, &F->head_1572, &F->tail_1573, F->a_1571);
if ((!f_at_op_296(F->up, rt_g_lit(",", 1)))) {
goto L_end_1574;
}
f_skip_305(F->up);
}
L_end_1574: ;
f_expect_op_309(F->up, rt_g_lit(")", 1));
}
f_expect_op_309(F->up, rt_g_lit(";", 1));
(*(P171)rt_nil_check(F->x_1570)).a_ = F->head_1572;
f_check_pragma_357(F->up, F->x_1570);
(*F->res_354) = F->x_1570;
ret_:

  return;
}

static void f_check_pragma_357(struct f_greenc_1fr *up_, P171 x_356) {
  struct f_check_pragma_357fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_356 = x_356;
F->p_1575 = cp_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->x_356)).name_)));
F->n_1576 = INT64_MIN;
F->n_1576 = f_list_len_291(F->up, (*(P171)rt_nil_check(F->x_356)).a_);
F->a_1577 = NULL;
F->a_1577 = (*(P171)rt_nil_check(F->x_356)).a_;
if ((eq_rt_gstr(F->p_1575, rt_g_lit("PAGE", 4)) || eq_rt_gstr(F->p_1575, rt_g_lit("INLINE", 6)))) {
if ((G_NV(F->n_1576) != ((rt_int)0LL))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->x_356)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1575), rt_g_lit(" takes no argument (RM79 App. B)", 32)));
}
} else if (((((eq_rt_gstr(F->p_1575, rt_g_lit("LIST", 4)) || eq_rt_gstr(F->p_1575, rt_g_lit("OPTIMIZE", 8))) || eq_rt_gstr(F->p_1575, rt_g_lit("CREATION", 8))) || eq_rt_gstr(F->p_1575, rt_g_lit("INTERFACE", 9))) || eq_rt_gstr(F->p_1575, rt_g_lit("SYSTEM", 6)))) {
if (((G_NV(F->n_1576) != ((rt_int)1LL)) || (G_NV((*(P171)rt_nil_check(F->a_1577)).kind_) != ((rt_int)5LL)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->x_356)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1575), rt_g_lit(" takes one identifier (RM79 App. B)", 35)));
}
if (((eq_rt_gstr(F->p_1575, rt_g_lit("LIST", 4)) && (!eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->a_1577)).name_)), rt_g_lit("ON", 2)))) && (!eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->a_1577)).name_)), rt_g_lit("OFF", 3))))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->x_356)).line_), rt_g_lit("pragma LIST(ON) or LIST(OFF) (RM79 App. B)", 42));
} else if (((eq_rt_gstr(F->p_1575, rt_g_lit("OPTIMIZE", 8)) && (!eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->a_1577)).name_)), rt_g_lit("TIME", 4)))) && (!eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->a_1577)).name_)), rt_g_lit("SPACE", 5))))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->x_356)).line_), rt_g_lit("pragma OPTIMIZE(TIME) or OPTIMIZE(SPACE) (RM79 App. B)", 54));
} else if (((eq_rt_gstr(F->p_1575, rt_g_lit("CREATION", 8)) && (!eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->a_1577)).name_)), rt_g_lit("STATIC", 6)))) && (!eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->a_1577)).name_)), rt_g_lit("DYNAMIC", 7))))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->x_356)).line_), rt_g_lit("pragma CREATION(STATIC) or CREATION(DYNAMIC) (RM79 9.2)", 55));
}
if (eq_rt_gstr(F->p_1575, rt_g_lit("OPTIMIZE", 8))) {
F->up->conf_optimize_209 = (*(P171)rt_nil_check(F->a_1577)).name_;
} else if (eq_rt_gstr(F->p_1575, rt_g_lit("SYSTEM", 6))) {
F->up->conf_system_206 = (*(P171)rt_nil_check(F->a_1577)).name_;
}
} else if ((eq_rt_gstr(F->p_1575, rt_g_lit("STORAGE_UNIT", 12)) || eq_rt_gstr(F->p_1575, rt_g_lit("MEMORY_SIZE", 11)))) {
if (((G_NV(F->n_1576) != ((rt_int)1LL)) || (G_NV((*(P171)rt_nil_check(F->a_1577)).kind_) != ((rt_int)1LL)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->x_356)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1575), rt_g_lit(" takes a number (RM79 13.7)", 27)));
}
if (eq_rt_gstr(F->p_1575, rt_g_lit("STORAGE_UNIT", 12))) {
F->up->conf_storage_unit_207 = G_NV((*(P171)rt_nil_check(F->a_1577)).ival_);
} else {
F->up->conf_memory_size_208 = G_NV((*(P171)rt_nil_check(F->a_1577)).ival_);
}
} else if ((eq_rt_gstr(F->p_1575, rt_g_lit("SUPPRESS", 8)) || eq_rt_gstr(F->p_1575, rt_g_lit("ENVIRONMENT", 11)))) {
if ((G_NV(F->n_1576) == ((rt_int)0LL))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->x_356)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1575), rt_g_lit(" names at least one ", 20)), rt_g_lit("unit or exception (RM79 App. B)", 31)));
}
while ((F->a_1577 != NULL)) {
if ((G_NV((*(P171)rt_nil_check(F->a_1577)).kind_) != ((rt_int)5LL))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->x_356)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1575), rt_g_lit(" takes names (RM79 App. B)", 26)));
}
F->a_1577 = (*(P171)rt_nil_check(F->a_1577)).next_;
}
L_end_1578: ;
} else if (eq_rt_gstr(F->p_1575, rt_g_lit("INCLUDE", 7))) {
if (((G_NV(F->n_1576) != ((rt_int)1LL)) || (G_NV((*(P171)rt_nil_check(F->a_1577)).kind_) != ((rt_int)3LL)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->x_356)).line_), rt_g_lit("pragma INCLUDE takes the name of a file (RM79 App. B)", 53));
}
}
ret_:

  return;
}

static void f_skip_visibility_358(struct f_greenc_1fr *up_) {
  struct f_skip_visibility_358fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->names_1579 = NULL;
f_skip_305(F->up);
if (f_at_op_296(F->up, rt_g_lit("(", 1))) {
f_skip_305(F->up);
f_id_list_315(F->up, &F->names_1579);
f_expect_op_309(F->up, rt_g_lit(")", 1));
}
ret_:

  return;
}

static void f_skip_representation_359(struct f_greenc_1fr *up_) {
  struct f_skip_representation_359fr *F = rt_alloc(sizeof *F);
F->up = up_;
while ((!f_at_kw_294(F->up, rt_g_lit("USE", 3)))) {
f_skip_305(F->up);
}
L_end_1580: ;
f_skip_305(F->up);
if (f_at_kw_294(F->up, rt_g_lit("RECORD", 6))) {
while ((!((f_at_kw_294(F->up, rt_g_lit("END", 3)) && (f_kind_at_300(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_302(F->up, ((rt_int)1LL)), rt_g_lit("RECORD", 6))))) {
f_skip_305(F->up);
}
L_end_1581: ;
f_skip_305(F->up);
f_skip_305(F->up);
}
while ((!f_at_op_296(F->up, rt_g_lit(";", 1)))) {
f_skip_305(F->up);
}
L_end_1582: ;
f_skip_305(F->up);
ret_:

  return;
}

static void f_decl_part_361(struct f_greenc_1fr *up_, P171 *res_360) {
  struct f_decl_part_361fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_360 = res_360;
F->head_1583 = NULL;
F->tail_1584 = NULL;
F->x_1585 = NULL;
F->names_1586 = NULL;
for (;;) {
if (f_at_kw_294(F->up, rt_g_lit("PRAGMA", 6))) {
f_pragma_p_355(F->up, &F->x_1585);
f_append_289(F->up, &F->head_1583, &F->tail_1584, F->x_1585);
} else if (f_at_kw_294(F->up, rt_g_lit("USE", 3))) {
f_skip_305(F->up);
F->x_1585 = f_nn_285(F->up, ((rt_int)55LL), f_cur_line_292(F->up));
f_id_list_315(F->up, &(*(P171)rt_nil_check(F->x_1585)).a_);
f_expect_op_309(F->up, rt_g_lit(";", 1));
f_append_289(F->up, &F->head_1583, &F->tail_1584, F->x_1585);
} else if (f_at_kw_294(F->up, rt_g_lit("RESTRICTED", 10))) {
f_skip_visibility_358(F->up);
} else if (f_at_kw_294(F->up, rt_g_lit("FOR", 3))) {
f_skip_representation_359(F->up);
} else if ((f_at_kw_294(F->up, rt_g_lit("TYPE", 4)) || f_at_kw_294(F->up, rt_g_lit("SUBTYPE", 7)))) {
f_type_decl_365(F->up, &F->x_1585);
f_append_289(F->up, &F->head_1583, &F->tail_1584, F->x_1585);
} else if ((f_at_kw_294(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_294(F->up, rt_g_lit("FUNCTION", 8)))) {
f_subprogram_371(F->up, &F->x_1585);
f_append_289(F->up, &F->head_1583, &F->tail_1584, F->x_1585);
} else if (f_at_kw_294(F->up, rt_g_lit("PACKAGE", 7))) {
f_package_p_377(F->up, &F->x_1585);
f_append_289(F->up, &F->head_1583, &F->tail_1584, F->x_1585);
} else if (f_at_kw_294(F->up, rt_g_lit("TASK", 4))) {
f_task_p_1011(F->up, &F->x_1585);
f_append_289(F->up, &F->head_1583, &F->tail_1584, F->x_1585);
} else if (f_at_kw_294(F->up, rt_g_lit("GENERIC", 7))) {
f_generic_p_1141(F->up, &F->x_1585);
f_append_289(F->up, &F->head_1583, &F->tail_1584, F->x_1585);
} else if (f_at_kw_294(F->up, rt_g_lit("ENTRY", 5))) {
f_entry_p_1013(F->up, &F->x_1585);
f_append_289(F->up, &F->head_1583, &F->tail_1584, F->x_1585);
} else if (((f_at_kind_298(F->up, ((rt_int)1LL)) && (f_kind_at_300(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (eq_rt_gstr(f_text_at_302(F->up, ((rt_int)1LL)), rt_g_lit(":", 1)) || eq_rt_gstr(f_text_at_302(F->up, ((rt_int)1LL)), rt_g_lit(",", 1))))) {
f_object_decl_363(F->up, &F->x_1585);
f_append_289(F->up, &F->head_1583, &F->tail_1584, F->x_1585);
} else {
(*F->res_360) = F->head_1583;
goto ret_;
}
}
L_end_1587: ;
ret_:

  return;
}

static void f_object_decl_363(struct f_greenc_1fr *up_, P171 *res_362) {
  struct f_object_decl_363fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_362 = res_362;
F->head_1588 = NULL;
F->tail_1589 = NULL;
F->names_1590 = NULL;
F->st_1591 = NULL;
F->init_1592 = NULL;
F->x_1593 = NULL;
F->line_1594 = INT64_MIN;
F->line_1594 = f_cur_line_292(F->up);
F->is_const_1595 = INT_MIN;
F->is_const_1595 = 0;
f_id_list_315(F->up, &F->names_1590);
f_expect_op_309(F->up, rt_g_lit(":", 1));
if (f_at_kw_294(F->up, rt_g_lit("EXCEPTION", 9))) {
f_skip_305(F->up);
if (f_at_kw_294(F->up, rt_g_lit("RENAMES", 7))) {
f_skip_305(F->up);
F->x_1593 = f_nn_285(F->up, ((rt_int)46LL), G_NV(F->line_1594));
(*(P171)rt_nil_check(F->x_1593)).name_ = (*(P171)rt_nil_check(F->names_1590)).name_;
f_name_p_343(F->up, &(*(P171)rt_nil_check(F->x_1593)).a_);
f_expect_op_309(F->up, rt_g_lit(";", 1));
(*F->res_362) = F->x_1593;
goto ret_;
}
f_expect_op_309(F->up, rt_g_lit(";", 1));
while ((F->names_1590 != NULL)) {
F->x_1593 = f_nn_285(F->up, ((rt_int)46LL), G_NV(F->line_1594));
(*(P171)rt_nil_check(F->x_1593)).name_ = (*(P171)rt_nil_check(F->names_1590)).name_;
f_append_289(F->up, &F->head_1588, &F->tail_1589, F->x_1593);
F->names_1590 = (*(P171)rt_nil_check(F->names_1590)).next_;
}
L_end_1596: ;
(*F->res_362) = F->head_1588;
goto ret_;
}
if (f_at_kw_294(F->up, rt_g_lit("CONSTANT", 8))) {
f_skip_305(F->up);
F->is_const_1595 = 1;
}
f_type_spec_351(F->up, &F->st_1591);
if ((f_at_kw_294(F->up, rt_g_lit("RENAMES", 7)) && (!G_NV(F->is_const_1595)))) {
f_skip_305(F->up);
F->x_1593 = f_nn_285(F->up, ((rt_int)40LL), G_NV(F->line_1594));
(*(P171)rt_nil_check(F->x_1593)).name_ = (*(P171)rt_nil_check(F->names_1590)).name_;
(*(P171)rt_nil_check(F->x_1593)).a_ = F->st_1591;
(*(P171)rt_nil_check(F->x_1593)).flag_ = ((rt_int)2LL);
f_expr_322(F->up, &(*(P171)rt_nil_check(F->x_1593)).b_);
f_expect_op_309(F->up, rt_g_lit(";", 1));
(*F->res_362) = F->x_1593;
goto ret_;
}
if (f_at_op_296(F->up, rt_g_lit(":=", 2))) {
f_skip_305(F->up);
f_expr_322(F->up, &F->init_1592);
}
f_expect_op_309(F->up, rt_g_lit(";", 1));
while ((F->names_1590 != NULL)) {
if (G_NV(F->is_const_1595)) {
F->x_1593 = f_nn_285(F->up, ((rt_int)41LL), G_NV(F->line_1594));
} else {
F->x_1593 = f_nn_285(F->up, ((rt_int)40LL), G_NV(F->line_1594));
}
(*(P171)rt_nil_check(F->x_1593)).name_ = (*(P171)rt_nil_check(F->names_1590)).name_;
(*(P171)rt_nil_check(F->x_1593)).a_ = F->st_1591;
(*(P171)rt_nil_check(F->x_1593)).b_ = F->init_1592;
f_append_289(F->up, &F->head_1588, &F->tail_1589, F->x_1593);
F->names_1590 = (*(P171)rt_nil_check(F->names_1590)).next_;
}
L_end_1597: ;
(*F->res_362) = F->head_1588;
goto ret_;
ret_:

  return;
}

static void f_type_decl_365(struct f_greenc_1fr *up_, P171 *res_364) {
  struct f_type_decl_365fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_364 = res_364;
F->x_1598 = NULL;
F->line_1599 = INT64_MIN;
F->line_1599 = f_cur_line_292(F->up);
if (f_at_kw_294(F->up, rt_g_lit("SUBTYPE", 7))) {
f_skip_305(F->up);
F->x_1598 = f_nn_285(F->up, ((rt_int)43LL), G_NV(F->line_1599));
f_expect_id_311(F->up, &(*(P171)rt_nil_check(F->x_1598)).name_);
f_expect_kw_307(F->up, rt_g_lit("IS", 2));
f_subtype_ind_349(F->up, &(*(P171)rt_nil_check(F->x_1598)).a_);
f_expect_op_309(F->up, rt_g_lit(";", 1));
(*F->res_364) = F->x_1598;
goto ret_;
}
f_expect_kw_307(F->up, rt_g_lit("TYPE", 4));
F->x_1598 = f_nn_285(F->up, ((rt_int)42LL), G_NV(F->line_1599));
f_expect_id_311(F->up, &(*(P171)rt_nil_check(F->x_1598)).name_);
if (f_at_op_296(F->up, rt_g_lit(";", 1))) {
f_skip_305(F->up);
(*F->res_364) = NULL;
goto ret_;
}
f_expect_kw_307(F->up, rt_g_lit("IS", 2));
if (f_at_kw_294(F->up, rt_g_lit("PRIVATE", 7))) {
f_skip_305(F->up);
(*(P171)rt_nil_check(F->x_1598)).a_ = f_nn_285(F->up, ((rt_int)77LL), G_NV(F->line_1599));
} else {
f_type_def_353(F->up, &(*(P171)rt_nil_check(F->x_1598)).a_);
}
f_expect_op_309(F->up, rt_g_lit(";", 1));
(*F->res_364) = F->x_1598;
goto ret_;
ret_:

  return;
}

static void f_formal_part_367(struct f_greenc_1fr *up_, P171 *res_366) {
  struct f_formal_part_367fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_366 = res_366;
F->head_1600 = NULL;
F->tail_1601 = NULL;
F->names_1602 = NULL;
F->st_1603 = NULL;
F->def_1604 = NULL;
F->p_1605 = NULL;
F->mode_1606 = INT64_MIN;
F->more_1607 = INT_MIN;
F->more_1607 = 1;
f_expect_op_309(F->up, rt_g_lit("(", 1));
while (G_NV(F->more_1607)) {
f_id_list_315(F->up, &F->names_1602);
f_expect_op_309(F->up, rt_g_lit(":", 1));
F->mode_1606 = ((rt_int)1LL);
if (f_at_kw_294(F->up, rt_g_lit("IN", 2))) {
f_skip_305(F->up);
if (f_at_kw_294(F->up, rt_g_lit("OUT", 3))) {
f_skip_305(F->up);
F->mode_1606 = ((rt_int)2LL);
}
} else if (f_at_kw_294(F->up, rt_g_lit("OUT", 3))) {
f_skip_305(F->up);
F->mode_1606 = ((rt_int)3LL);
}
f_subtype_ind_349(F->up, &F->st_1603);
F->def_1604 = NULL;
if (f_at_op_296(F->up, rt_g_lit(":=", 2))) {
f_skip_305(F->up);
f_expr_322(F->up, &F->def_1604);
}
while ((F->names_1602 != NULL)) {
F->p_1605 = f_nn_285(F->up, ((rt_int)47LL), G_NV((*(P171)rt_nil_check(F->names_1602)).line_));
(*(P171)rt_nil_check(F->p_1605)).name_ = (*(P171)rt_nil_check(F->names_1602)).name_;
(*(P171)rt_nil_check(F->p_1605)).ival_ = G_NV(F->mode_1606);
(*(P171)rt_nil_check(F->p_1605)).a_ = F->st_1603;
(*(P171)rt_nil_check(F->p_1605)).b_ = F->def_1604;
f_append_289(F->up, &F->head_1600, &F->tail_1601, F->p_1605);
F->names_1602 = (*(P171)rt_nil_check(F->names_1602)).next_;
}
L_end_1609: ;
F->more_1607 = f_at_op_296(F->up, rt_g_lit(";", 1));
if (G_NV(F->more_1607)) {
f_skip_305(F->up);
}
}
L_end_1608: ;
f_expect_op_309(F->up, rt_g_lit(")", 1));
(*F->res_366) = F->head_1600;
goto ret_;
ret_:

  return;
}

static void f_designator_369(struct f_greenc_1fr *up_, P137 *res_368) {
  struct f_designator_369fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_368 = res_368;
if (f_at_kind_298(F->up, ((rt_int)6LL))) {
f_skip_305(F->up);
(*F->res_368) = f_mk_211(F->up, f_upper_s_224(F->up, (*(P137)rt_nil_check((*(P107)rt_nil_check(({ A106 ix1613 = F->up->toks_109; ix1613.p[rt_index(rt_sub(G_NV(F->up->tpos_111), ((rt_int)1LL)), ix1613.lo, ix1613.hi) - ix1613.lo]; }))).s_))));
if (eq_rt_gstr((*(P137)rt_nil_check((*F->res_368))), rt_g_lit("/=", 2))) {
f_perror_304(F->up, rt_g_lit("\"/=\" cannot be declared: it follows the declaration of \"=\" (RM79 6.6.1)", 71));
}
if ((!f_is_operator_226(F->up, (*(P137)rt_nil_check((*F->res_368)))))) {
f_perror_304(F->up, cat_rt_gstr((*(P137)rt_nil_check((*F->res_368))), rt_g_lit(" is not an operator symbol (RM79 6.6.1)", 39)));
}
goto ret_;
}
f_expect_id_311(F->up, &(*F->res_368));
goto ret_;
ret_:

  return;
}

static void f_subprogram_371(struct f_greenc_1fr *up_, P171 *res_370) {
  struct f_subprogram_371fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_370 = res_370;
F->x_1614 = NULL;
F->line_1615 = INT64_MIN;
F->line_1615 = f_cur_line_292(F->up);
F->is_proc_1616 = INT_MIN;
F->is_proc_1616 = f_at_kw_294(F->up, rt_g_lit("PROCEDURE", 9));
f_skip_305(F->up);
if (G_NV(F->is_proc_1616)) {
F->x_1614 = f_nn_285(F->up, ((rt_int)44LL), G_NV(F->line_1615));
} else {
F->x_1614 = f_nn_285(F->up, ((rt_int)45LL), G_NV(F->line_1615));
}
f_designator_369(F->up, &(*(P171)rt_nil_check(F->x_1614)).name_);
if (((f_at_kw_294(F->up, rt_g_lit("IS", 2)) && (f_kind_at_300(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_302(F->up, ((rt_int)1LL)), rt_g_lit("NEW", 3)))) {
f_instantiation_1144(F->up, F->x_1614, &(*F->res_370));
goto ret_;
}
if (f_at_op_296(F->up, rt_g_lit("(", 1))) {
f_formal_part_367(F->up, &(*(P171)rt_nil_check(F->x_1614)).a_);
}
if (f_at_kw_294(F->up, rt_g_lit("RETURN", 6))) {
f_skip_305(F->up);
f_subtype_ind_349(F->up, &(*(P171)rt_nil_check(F->x_1614)).b_);
if (G_NV(F->is_proc_1616)) {
(*(P171)rt_nil_check(F->x_1614)).flag_ = ((rt_int)1LL);
}
} else if ((!G_NV(F->is_proc_1616))) {
f_perror_304(F->up, rt_g_lit("a function needs a RETURN clause", 32));
}
if (f_at_op_296(F->up, rt_g_lit(";", 1))) {
f_skip_305(F->up);
(*(P171)rt_nil_check(F->x_1614)).ival_ = ((rt_int)1LL);
(*F->res_370) = F->x_1614;
goto ret_;
}
f_expect_kw_307(F->up, rt_g_lit("IS", 2));
if (f_at_kw_294(F->up, rt_g_lit("SEPARATE", 8))) {
f_perror_304(F->up, rt_g_lit("separate bodies are not handled", 31));
}
f_body_part_373(F->up, F->x_1614);
if ((f_at_kind_298(F->up, ((rt_int)1LL)) || f_at_kind_298(F->up, ((rt_int)6LL)))) {
if ((!eq_rt_gstr((*(P137)rt_nil_check((*(P107)rt_nil_check(({ A106 ix1617 = F->up->toks_109; ix1617.p[rt_index(G_NV(F->up->tpos_111), ix1617.lo, ix1617.hi) - ix1617.lo]; }))).s_)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->x_1614)).name_))))) {
f_perror_304(F->up, cat_rt_gstr(rt_g_lit("the name after END does not match ", 34), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->x_1614)).name_))));
}
f_skip_305(F->up);
}
f_expect_op_309(F->up, rt_g_lit(";", 1));
(*F->res_370) = F->x_1614;
goto ret_;
ret_:

  return;
}

static void f_body_part_373(struct f_greenc_1fr *up_, P171 x_372) {
  struct f_body_part_373fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_372 = x_372;
f_decl_part_361(F->up, &(*(P171)rt_nil_check(F->x_372)).c_);
if (f_at_kw_294(F->up, rt_g_lit("BEGIN", 5))) {
f_skip_305(F->up);
F->up->saw_interface_191 = 0;
f_statements_380(F->up, &(*(P171)rt_nil_check(F->x_372)).d_);
if ((G_NV(F->up->saw_interface_191) && ((*(P171)rt_nil_check(F->x_372)).d_ == NULL))) {
(*(P171)rt_nil_check(F->x_372)).tag_ = f_mk_211(F->up, rt_g_lit("INTERFACE", 9));
}
F->up->saw_interface_191 = 0;
}
if (f_at_kw_294(F->up, rt_g_lit("EXCEPTION", 9))) {
f_parse_handlers_375(F->up, &(*(P171)rt_nil_check(F->x_372)).e_);
}
f_expect_kw_307(F->up, rt_g_lit("END", 3));
ret_:

  return;
}

static void f_parse_handlers_375(struct f_greenc_1fr *up_, P171 *res_374) {
  struct f_parse_handlers_375fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_374 = res_374;
F->head_1618 = NULL;
F->tail_1619 = NULL;
F->h_1620 = NULL;
F->names_1621 = NULL;
F->ntail_1622 = NULL;
F->n_1623 = NULL;
f_expect_kw_307(F->up, rt_g_lit("EXCEPTION", 9));
while (f_at_kw_294(F->up, rt_g_lit("WHEN", 4))) {
f_skip_305(F->up);
F->h_1620 = f_nn_285(F->up, ((rt_int)62LL), f_cur_line_292(F->up));
F->names_1621 = NULL;
F->ntail_1622 = NULL;
for (;;) {
if (f_at_kw_294(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_305(F->up);
F->n_1623 = f_nn_285(F->up, ((rt_int)5LL), f_cur_line_292(F->up));
(*(P171)rt_nil_check(F->n_1623)).name_ = f_mk_211(F->up, rt_g_lit("OTHERS", 6));
} else {
f_name_node_313(F->up, &F->n_1623);
while (f_at_op_296(F->up, rt_g_lit(".", 1))) {
f_skip_305(F->up);
if (((*(P171)rt_nil_check(F->n_1623)).tag_ == NULL)) {
(*(P171)rt_nil_check(F->n_1623)).tag_ = (*(P171)rt_nil_check(F->n_1623)).name_;
} else {
(*(P171)rt_nil_check(F->n_1623)).tag_ = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->n_1623)).tag_)), one_rt_gstr(46)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->n_1623)).name_))));
}
f_expect_id_311(F->up, &(*(P171)rt_nil_check(F->n_1623)).name_);
}
L_end_1626: ;
}
f_append_289(F->up, &F->names_1621, &F->ntail_1622, F->n_1623);
if ((!f_at_op_296(F->up, rt_g_lit("|", 1)))) {
goto L_end_1625;
}
f_skip_305(F->up);
}
L_end_1625: ;
f_expect_op_309(F->up, rt_g_lit("=>", 2));
(*(P171)rt_nil_check(F->h_1620)).a_ = F->names_1621;
f_statements_380(F->up, &(*(P171)rt_nil_check(F->h_1620)).b_);
f_append_289(F->up, &F->head_1618, &F->tail_1619, F->h_1620);
}
L_end_1624: ;
(*F->res_374) = F->head_1618;
goto ret_;
ret_:

  return;
}

static void f_package_p_377(struct f_greenc_1fr *up_, P171 *res_376) {
  struct f_package_p_377fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_376 = res_376;
F->x_1627 = NULL;
F->line_1628 = INT64_MIN;
F->line_1628 = f_cur_line_292(F->up);
f_expect_kw_307(F->up, rt_g_lit("PACKAGE", 7));
if (f_at_kw_294(F->up, rt_g_lit("BODY", 4))) {
f_skip_305(F->up);
F->x_1627 = f_nn_285(F->up, ((rt_int)49LL), G_NV(F->line_1628));
f_expect_id_311(F->up, &(*(P171)rt_nil_check(F->x_1627)).name_);
f_expect_kw_307(F->up, rt_g_lit("IS", 2));
f_body_part_373(F->up, F->x_1627);
} else {
F->x_1627 = f_nn_285(F->up, ((rt_int)48LL), G_NV(F->line_1628));
f_expect_id_311(F->up, &(*(P171)rt_nil_check(F->x_1627)).name_);
if (((f_at_kw_294(F->up, rt_g_lit("IS", 2)) && (f_kind_at_300(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_302(F->up, ((rt_int)1LL)), rt_g_lit("NEW", 3)))) {
f_instantiation_1144(F->up, F->x_1627, &(*F->res_376));
goto ret_;
}
f_expect_kw_307(F->up, rt_g_lit("IS", 2));
f_decl_part_361(F->up, &(*(P171)rt_nil_check(F->x_1627)).c_);
if (f_at_kw_294(F->up, rt_g_lit("PRIVATE", 7))) {
f_skip_305(F->up);
f_decl_part_361(F->up, &(*(P171)rt_nil_check(F->x_1627)).d_);
}
f_expect_kw_307(F->up, rt_g_lit("END", 3));
}
if (f_at_kind_298(F->up, ((rt_int)1LL))) {
f_skip_305(F->up);
}
f_expect_op_309(F->up, rt_g_lit(";", 1));
(*F->res_376) = F->x_1627;
goto ret_;
ret_:

  return;
}

static int f_at_statements_end_378(struct f_greenc_1fr *up_) {
  struct f_at_statements_end_378fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ((((((f_at_kw_294(F->up, rt_g_lit("END", 3)) || f_at_kw_294(F->up, rt_g_lit("ELSE", 4))) || f_at_kw_294(F->up, rt_g_lit("ELSIF", 5))) || f_at_kw_294(F->up, rt_g_lit("WHEN", 4))) || f_at_kw_294(F->up, rt_g_lit("EXCEPTION", 9))) || f_at_kw_294(F->up, rt_g_lit("OR", 2))) || f_at_kind_298(F->up, ((rt_int)0LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_statements_380(struct f_greenc_1fr *up_, P171 *res_379) {
  struct f_statements_380fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_379 = res_379;
F->head_1629 = NULL;
F->tail_1630 = NULL;
F->x_1631 = NULL;
while ((!f_at_statements_end_378(F->up))) {
if (f_at_kw_294(F->up, rt_g_lit("PRAGMA", 6))) {
f_pragma_p_355(F->up, &F->x_1631);
if (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->x_1631)).name_)), rt_g_lit("INTERFACE", 9))) {
F->up->saw_interface_191 = 1;
}
} else {
f_statement_382(F->up, &F->x_1631);
f_append_289(F->up, &F->head_1629, &F->tail_1630, F->x_1631);
}
}
L_end_1632: ;
(*F->res_379) = F->head_1629;
goto ret_;
ret_:

  return;
}

static void f_statement_382(struct f_greenc_1fr *up_, P171 *res_381) {
  struct f_statement_382fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_381 = res_381;
F->x_1633 = NULL;
F->t_1634 = NULL;
F->line_1635 = INT64_MIN;
F->line_1635 = f_cur_line_292(F->up);
F->label_1636 = NULL;
if (f_at_op_296(F->up, rt_g_lit("<<", 2))) {
f_skip_305(F->up);
f_expect_id_311(F->up, &F->label_1636);
f_expect_op_309(F->up, rt_g_lit(">>", 2));
}
if (f_at_kw_294(F->up, rt_g_lit("NULL", 4))) {
f_skip_305(F->up);
f_expect_op_309(F->up, rt_g_lit(";", 1));
F->x_1633 = f_nn_285(F->up, ((rt_int)31LL), G_NV(F->line_1635));
(*F->res_381) = F->x_1633;
goto ret_;
} else if (f_at_kw_294(F->up, rt_g_lit("IF", 2))) {
f_if_stmt_386(F->up, &F->x_1633);
(*F->res_381) = F->x_1633;
goto ret_;
} else if (f_at_kw_294(F->up, rt_g_lit("CASE", 4))) {
f_case_stmt_388(F->up, &F->x_1633);
(*F->res_381) = F->x_1633;
goto ret_;
} else if (((f_at_kw_294(F->up, rt_g_lit("FOR", 3)) || f_at_kw_294(F->up, rt_g_lit("WHILE", 5))) || f_at_kw_294(F->up, rt_g_lit("LOOP", 4)))) {
f_loop_stmt_390(F->up, &F->x_1633);
(*(P171)rt_nil_check(F->x_1633)).tag_ = F->label_1636;
if (f_at_kind_298(F->up, ((rt_int)1LL))) {
if (((F->label_1636 == NULL) || (!eq_rt_gstr((*(P137)rt_nil_check((*(P107)rt_nil_check(({ A106 ix1637 = F->up->toks_109; ix1637.p[rt_index(G_NV(F->up->tpos_111), ix1637.lo, ix1637.hi) - ix1637.lo]; }))).s_)), (*(P137)rt_nil_check(F->label_1636)))))) {
f_perror_304(F->up, rt_g_lit("the name after END LOOP does not match the label", 48));
}
f_skip_305(F->up);
}
f_expect_op_309(F->up, rt_g_lit(";", 1));
(*F->res_381) = F->x_1633;
goto ret_;
} else if ((f_at_kw_294(F->up, rt_g_lit("DECLARE", 7)) || f_at_kw_294(F->up, rt_g_lit("BEGIN", 5)))) {
F->x_1633 = f_nn_285(F->up, ((rt_int)25LL), G_NV(F->line_1635));
(*(P171)rt_nil_check(F->x_1633)).tag_ = F->label_1636;
if (f_at_kw_294(F->up, rt_g_lit("DECLARE", 7))) {
f_skip_305(F->up);
f_decl_part_361(F->up, &(*(P171)rt_nil_check(F->x_1633)).a_);
}
f_expect_kw_307(F->up, rt_g_lit("BEGIN", 5));
f_statements_380(F->up, &(*(P171)rt_nil_check(F->x_1633)).b_);
if (f_at_kw_294(F->up, rt_g_lit("EXCEPTION", 9))) {
f_parse_handlers_375(F->up, &(*(P171)rt_nil_check(F->x_1633)).c_);
}
f_expect_kw_307(F->up, rt_g_lit("END", 3));
if (f_at_kind_298(F->up, ((rt_int)1LL))) {
f_skip_305(F->up);
}
f_expect_op_309(F->up, rt_g_lit(";", 1));
(*F->res_381) = F->x_1633;
goto ret_;
} else if (f_at_kw_294(F->up, rt_g_lit("EXIT", 4))) {
f_skip_305(F->up);
F->x_1633 = f_nn_285(F->up, ((rt_int)26LL), G_NV(F->line_1635));
if (f_at_kind_298(F->up, ((rt_int)1LL))) {
f_expect_id_311(F->up, &(*(P171)rt_nil_check(F->x_1633)).name_);
}
if (f_at_kw_294(F->up, rt_g_lit("WHEN", 4))) {
f_skip_305(F->up);
f_expr_322(F->up, &(*(P171)rt_nil_check(F->x_1633)).a_);
}
f_expect_op_309(F->up, rt_g_lit(";", 1));
(*F->res_381) = F->x_1633;
goto ret_;
} else if (f_at_kw_294(F->up, rt_g_lit("RETURN", 6))) {
f_skip_305(F->up);
F->x_1633 = f_nn_285(F->up, ((rt_int)27LL), G_NV(F->line_1635));
if ((!f_at_op_296(F->up, rt_g_lit(";", 1)))) {
f_expr_322(F->up, &(*(P171)rt_nil_check(F->x_1633)).a_);
}
f_expect_op_309(F->up, rt_g_lit(";", 1));
(*F->res_381) = F->x_1633;
goto ret_;
} else if (f_at_kw_294(F->up, rt_g_lit("RAISE", 5))) {
f_skip_305(F->up);
if (f_at_op_296(F->up, rt_g_lit(";", 1))) {
f_skip_305(F->up);
F->x_1633 = f_nn_285(F->up, ((rt_int)29LL), G_NV(F->line_1635));
(*F->res_381) = F->x_1633;
goto ret_;
}
F->x_1633 = f_nn_285(F->up, ((rt_int)28LL), G_NV(F->line_1635));
f_expect_id_311(F->up, &(*(P171)rt_nil_check(F->x_1633)).name_);
if (f_at_op_296(F->up, rt_g_lit("(", 1))) {
f_skip_305(F->up);
f_expr_322(F->up, &(*(P171)rt_nil_check(F->x_1633)).a_);
f_expect_op_309(F->up, rt_g_lit(")", 1));
}
while (f_at_op_296(F->up, rt_g_lit(".", 1))) {
f_skip_305(F->up);
(*(P171)rt_nil_check(F->x_1633)).tag_ = (*(P171)rt_nil_check(F->x_1633)).name_;
f_expect_id_311(F->up, &(*(P171)rt_nil_check(F->x_1633)).name_);
}
L_end_1638: ;
f_expect_op_309(F->up, rt_g_lit(";", 1));
(*F->res_381) = F->x_1633;
goto ret_;
} else if (f_at_kw_294(F->up, rt_g_lit("ASSERT", 6))) {
f_skip_305(F->up);
F->x_1633 = f_nn_285(F->up, ((rt_int)30LL), G_NV(F->line_1635));
f_expr_322(F->up, &(*(P171)rt_nil_check(F->x_1633)).a_);
f_expect_op_309(F->up, rt_g_lit(";", 1));
(*F->res_381) = F->x_1633;
goto ret_;
} else if (f_at_kw_294(F->up, rt_g_lit("GOTO", 4))) {
f_perror_304(F->up, rt_g_lit("goto is not handled", 19));
}
f_task_statement_384(F->up, &F->x_1633);
if ((F->x_1633 != NULL)) {
(*F->res_381) = F->x_1633;
goto ret_;
}
f_name_p_343(F->up, &F->t_1634);
if (f_at_op_296(F->up, rt_g_lit(":=", 2))) {
f_skip_305(F->up);
F->x_1633 = f_nn_285(F->up, ((rt_int)20LL), G_NV(F->line_1635));
(*(P171)rt_nil_check(F->x_1633)).a_ = F->t_1634;
f_expr_322(F->up, &(*(P171)rt_nil_check(F->x_1633)).b_);
} else {
F->x_1633 = f_nn_285(F->up, ((rt_int)21LL), G_NV(F->line_1635));
(*(P171)rt_nil_check(F->x_1633)).a_ = F->t_1634;
}
f_expect_op_309(F->up, rt_g_lit(";", 1));
(*F->res_381) = F->x_1633;
goto ret_;
ret_:

  return;
}

static void f_task_statement_384(struct f_greenc_1fr *up_, P171 *res_383) {
  struct f_task_statement_384fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_383 = res_383;
f_parse_task_statement_1021(F->up, &(*F->res_383));
ret_:

  return;
}

static void f_if_stmt_386(struct f_greenc_1fr *up_, P171 *res_385) {
  struct f_if_stmt_386fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_385 = res_385;
F->x_1639 = NULL;
F->arm_1640 = NULL;
F->head_1641 = NULL;
F->tail_1642 = NULL;
F->go_1643 = INT_MIN;
F->go_1643 = 1;
F->x_1639 = f_nn_285(F->up, ((rt_int)22LL), f_cur_line_292(F->up));
f_skip_305(F->up);
F->arm_1640 = f_nn_285(F->up, ((rt_int)60LL), f_cur_line_292(F->up));
f_expr_322(F->up, &(*(P171)rt_nil_check(F->arm_1640)).a_);
f_expect_kw_307(F->up, rt_g_lit("THEN", 4));
f_statements_380(F->up, &(*(P171)rt_nil_check(F->arm_1640)).b_);
f_append_289(F->up, &F->head_1641, &F->tail_1642, F->arm_1640);
while (G_NV(F->go_1643)) {
if (f_at_kw_294(F->up, rt_g_lit("ELSIF", 5))) {
f_skip_305(F->up);
F->arm_1640 = f_nn_285(F->up, ((rt_int)60LL), f_cur_line_292(F->up));
f_expr_322(F->up, &(*(P171)rt_nil_check(F->arm_1640)).a_);
f_expect_kw_307(F->up, rt_g_lit("THEN", 4));
f_statements_380(F->up, &(*(P171)rt_nil_check(F->arm_1640)).b_);
f_append_289(F->up, &F->head_1641, &F->tail_1642, F->arm_1640);
} else if (f_at_kw_294(F->up, rt_g_lit("ELSE", 4))) {
f_skip_305(F->up);
(*(P171)rt_nil_check(F->x_1639)).flag_ = ((rt_int)1LL);
f_statements_380(F->up, &(*(P171)rt_nil_check(F->x_1639)).b_);
} else {
F->go_1643 = 0;
}
}
L_end_1644: ;
f_expect_kw_307(F->up, rt_g_lit("END", 3));
f_expect_kw_307(F->up, rt_g_lit("IF", 2));
f_expect_op_309(F->up, rt_g_lit(";", 1));
(*(P171)rt_nil_check(F->x_1639)).a_ = F->head_1641;
(*F->res_385) = F->x_1639;
goto ret_;
ret_:

  return;
}

static void f_case_stmt_388(struct f_greenc_1fr *up_, P171 *res_387) {
  struct f_case_stmt_388fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_387 = res_387;
F->x_1645 = NULL;
F->arm_1646 = NULL;
F->head_1647 = NULL;
F->tail_1648 = NULL;
F->labs_1649 = NULL;
F->ltail_1650 = NULL;
F->l_1651 = NULL;
F->others_arm_1652 = INT_MIN;
F->x_1645 = f_nn_285(F->up, ((rt_int)23LL), f_cur_line_292(F->up));
f_skip_305(F->up);
f_expr_322(F->up, &(*(P171)rt_nil_check(F->x_1645)).a_);
f_expect_kw_307(F->up, rt_g_lit("OF", 2));
while (f_at_kw_294(F->up, rt_g_lit("WHEN", 4))) {
f_skip_305(F->up);
F->labs_1649 = NULL;
F->ltail_1650 = NULL;
F->others_arm_1652 = 0;
for (;;) {
if (f_at_kw_294(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_305(F->up);
F->others_arm_1652 = 1;
} else {
F->l_1651 = f_nn_285(F->up, ((rt_int)61LL), f_cur_line_292(F->up));
f_simple_expr_330(F->up, &(*(P171)rt_nil_check(F->l_1651)).a_);
if (f_at_op_296(F->up, rt_g_lit("..", 2))) {
f_skip_305(F->up);
f_simple_expr_330(F->up, &(*(P171)rt_nil_check(F->l_1651)).b_);
}
f_append_289(F->up, &F->labs_1649, &F->ltail_1650, F->l_1651);
}
if ((!f_at_op_296(F->up, rt_g_lit("|", 1)))) {
goto L_end_1654;
}
f_skip_305(F->up);
}
L_end_1654: ;
f_expect_op_309(F->up, rt_g_lit("=>", 2));
if (G_NV(F->others_arm_1652)) {
(*(P171)rt_nil_check(F->x_1645)).flag_ = ((rt_int)1LL);
f_statements_380(F->up, &(*(P171)rt_nil_check(F->x_1645)).c_);
} else {
F->arm_1646 = f_nn_285(F->up, ((rt_int)60LL), f_cur_line_292(F->up));
(*(P171)rt_nil_check(F->arm_1646)).a_ = F->labs_1649;
f_statements_380(F->up, &(*(P171)rt_nil_check(F->arm_1646)).b_);
f_append_289(F->up, &F->head_1647, &F->tail_1648, F->arm_1646);
}
}
L_end_1653: ;
f_expect_kw_307(F->up, rt_g_lit("END", 3));
f_expect_kw_307(F->up, rt_g_lit("CASE", 4));
f_expect_op_309(F->up, rt_g_lit(";", 1));
(*(P171)rt_nil_check(F->x_1645)).b_ = F->head_1647;
(*F->res_387) = F->x_1645;
goto ret_;
ret_:

  return;
}

static void f_loop_stmt_390(struct f_greenc_1fr *up_, P171 *res_389) {
  struct f_loop_stmt_390fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_389 = res_389;
F->x_1655 = NULL;
F->r_1656 = NULL;
F->line_1657 = INT64_MIN;
F->line_1657 = f_cur_line_292(F->up);
F->x_1655 = f_nn_285(F->up, ((rt_int)24LL), G_NV(F->line_1657));
if (f_at_kw_294(F->up, rt_g_lit("FOR", 3))) {
f_skip_305(F->up);
(*(P171)rt_nil_check(F->x_1655)).flag_ = ((rt_int)2LL);
f_expect_id_311(F->up, &(*(P171)rt_nil_check(F->x_1655)).name_);
f_expect_kw_307(F->up, rt_g_lit("IN", 2));
if (f_at_kw_294(F->up, rt_g_lit("REVERSE", 7))) {
f_skip_305(F->up);
(*(P171)rt_nil_check(F->x_1655)).ival_ = ((rt_int)1LL);
}
if (((f_at_kind_298(F->up, ((rt_int)1LL)) && (f_kind_at_300(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_302(F->up, ((rt_int)1LL)), rt_g_lit("LOOP", 4)))) {
f_subtype_ind_349(F->up, &(*(P171)rt_nil_check(F->x_1655)).a_);
} else {
f_discrete_range_p_347(F->up, &(*(P171)rt_nil_check(F->x_1655)).a_);
}
} else if (f_at_kw_294(F->up, rt_g_lit("WHILE", 5))) {
f_skip_305(F->up);
(*(P171)rt_nil_check(F->x_1655)).flag_ = ((rt_int)1LL);
f_expr_322(F->up, &(*(P171)rt_nil_check(F->x_1655)).a_);
}
f_expect_kw_307(F->up, rt_g_lit("LOOP", 4));
f_statements_380(F->up, &(*(P171)rt_nil_check(F->x_1655)).b_);
f_expect_kw_307(F->up, rt_g_lit("END", 3));
f_expect_kw_307(F->up, rt_g_lit("LOOP", 4));
(*F->res_389) = F->x_1655;
goto ret_;
ret_:

  return;
}

static void f_compilation_392(struct f_greenc_1fr *up_, P171 *res_391) {
  struct f_compilation_392fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_391 = res_391;
F->head_1658 = NULL;
F->tail_1659 = NULL;
F->x_1660 = NULL;
while ((!f_at_kind_298(F->up, ((rt_int)0LL)))) {
if (f_at_kw_294(F->up, rt_g_lit("PRAGMA", 6))) {
f_pragma_p_355(F->up, &F->x_1660);
} else {
if (f_at_kw_294(F->up, rt_g_lit("RESTRICTED", 10))) {
f_skip_visibility_358(F->up);
}
if ((f_at_kw_294(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_294(F->up, rt_g_lit("FUNCTION", 8)))) {
f_subprogram_371(F->up, &F->x_1660);
} else if (f_at_kw_294(F->up, rt_g_lit("PACKAGE", 7))) {
f_package_p_377(F->up, &F->x_1660);
} else if (f_at_kw_294(F->up, rt_g_lit("TASK", 4))) {
f_task_p_1011(F->up, &F->x_1660);
} else if (f_at_kw_294(F->up, rt_g_lit("GENERIC", 7))) {
f_generic_p_1141(F->up, &F->x_1660);
} else {
f_perror_304(F->up, rt_g_lit("a compilation unit is a subprogram, a package or a task", 55));
}
f_append_289(F->up, &F->head_1658, &F->tail_1659, F->x_1660);
}
}
L_end_1661: ;
(*F->res_391) = F->head_1658;
goto ret_;
ret_:

  return;
}

static rt_int f_hash_394(struct f_greenc_1fr *up_, rt_gstr s_393) {
  struct f_hash_394fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_393 = cp_rt_gstr(s_393);
F->h_1662 = INT64_MIN;
F->h_1662 = ((rt_int)0LL);
{ rt_int lo1666 = ((rt_int)1LL), hi1667 = ({ rt_gstr at1664 = F->s_393; at1664.hi >= at1664.lo ? at1664.hi - at1664.lo + 1 : (rt_int)0; });
for (rt_int it1668 = lo1666; it1668 <= hi1667; it1668++) {
F->i_1665 = it1668;
F->h_1662 = rt_rem(rt_add(rt_mul(G_NV(F->h_1662), ((rt_int)31LL)), ((rt_int)(G_NV(({ rt_gstr ix1669 = F->s_393; ix1669.p[rt_index(F->i_1665, ix1669.lo, ix1669.hi) - ix1669.lo]; }))) + 1)), ((rt_int)4093LL));
}
}
L_end_1663: ;
F->result_ = G_NV(F->h_1662);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P114 f_lookup_396(struct f_greenc_1fr *up_, rt_gstr name_395) {
  struct f_lookup_396fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_395 = cp_rt_gstr(name_395);
F->y_1670 = NULL;
F->y_1670 = ({ A113 ix1671 = F->up->table_116; ix1671.p[rt_index(f_hash_394(F->up, F->name_395), ix1671.lo, ix1671.hi) - ix1671.lo]; });
while ((F->y_1670 != NULL)) {
if (eq_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1670)).name_)), F->name_395)) {
F->result_ = F->y_1670;
goto ret_;
}
F->y_1670 = (*(P114)rt_nil_check(F->y_1670)).chain_;
}
L_end_1672: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_task_399(struct f_greenc_1fr *up_, P114 a_397, P114 b_398) {
  struct f_same_task_399fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_397 = a_397;
F->b_398 = b_398;
if ((F->a_397 == F->b_398)) {
F->result_ = 1;
goto ret_;
} else if (((F->a_397 == NULL) || (F->b_398 == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->a_397)).cname_)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->b_398)).cname_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P114 f_lookup_entry_402(struct f_greenc_1fr *up_, rt_gstr name_400, P114 owner_401) {
  struct f_lookup_entry_402fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_400 = cp_rt_gstr(name_400);
F->owner_401 = owner_401;
F->y_1673 = NULL;
F->y_1673 = ({ A113 ix1674 = F->up->table_116; ix1674.p[rt_index(f_hash_394(F->up, F->name_400), ix1674.lo, ix1674.hi) - ix1674.lo]; });
while ((F->y_1673 != NULL)) {
if (((eq_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1673)).name_)), F->name_400) && (G_NV((*(P114)rt_nil_check(F->y_1673)).kind_) == ((rt_int)10LL))) && f_same_task_399(F->up, (*(P114)rt_nil_check(F->y_1673)).members_, F->owner_401))) {
F->result_ = F->y_1673;
goto ret_;
}
F->y_1673 = (*(P114)rt_nil_check(F->y_1673)).chain_;
}
L_end_1675: ;
F->result_ = f_lookup_396(F->up, F->name_400);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P114 f_lookup_at_405(struct f_greenc_1fr *up_, rt_gstr name_403, rt_int d_404) {
  struct f_lookup_at_405fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_403 = cp_rt_gstr(name_403);
F->d_404 = d_404;
F->y_1676 = NULL;
F->y_1676 = ({ A113 ix1677 = F->up->table_116; ix1677.p[rt_index(f_hash_394(F->up, F->name_403), ix1677.lo, ix1677.hi) - ix1677.lo]; });
while ((F->y_1676 != NULL)) {
if ((eq_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1676)).name_)), F->name_403) && (G_NV((*(P114)rt_nil_check(F->y_1676)).depth_) == F->d_404))) {
F->result_ = F->y_1676;
goto ret_;
}
F->y_1676 = (*(P114)rt_nil_check(F->y_1676)).chain_;
}
L_end_1678: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_enclosing_depth_407(struct f_greenc_1fr *up_, rt_gstr name_406) {
  struct f_enclosing_depth_407fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_406 = cp_rt_gstr(name_406);
{ rt_int lo1681 = ((rt_int)1LL), hi1682 = G_NV(F->up->nunits_185);
for (rt_int it1683 = hi1682; it1683 >= lo1681; it1683--) {
F->i_1680 = it1683;
if (eq_rt_gstr((*(P137)rt_nil_check(({ A180 ix1684 = F->up->unit_names_181; ix1684.p[rt_index(F->i_1680, ix1684.lo, ix1684.hi) - ix1684.lo]; }))), F->name_406)) {
F->result_ = G_NV(({ A182 ix1685 = F->up->unit_depths_183; ix1685.p[rt_index(F->i_1680, ix1685.lo, ix1685.hi) - ix1685.lo]; }));
goto ret_;
}
}
}
L_end_1679: ;
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_push_unit_409(struct f_greenc_1fr *up_, P137 name_408) {
  struct f_push_unit_409fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_408 = name_408;
F->up->nunits_185 = rt_add(G_NV(F->up->nunits_185), ((rt_int)1LL));
(*({ A180 *ix1686 = &(F->up->unit_names_181); &ix1686->p[rt_index(G_NV(F->up->nunits_185), ix1686->lo, ix1686->hi) - ix1686->lo]; })) = F->name_408;
(*({ A182 *ix1687 = &(F->up->unit_depths_183); &ix1687->p[rt_index(G_NV(F->up->nunits_185), ix1687->lo, ix1687->hi) - ix1687->lo]; })) = G_NV(F->up->depth_117);
ret_:

  return;
}

static P114 f_lookup_decl_411(struct f_greenc_1fr *up_, P171 d_410) {
  struct f_lookup_decl_411fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_410 = d_410;
F->y_1688 = NULL;
F->y_1688 = ({ A113 ix1689 = F->up->table_116; ix1689.p[rt_index(f_hash_394(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->d_410)).name_))), ix1689.lo, ix1689.hi) - ix1689.lo]; });
while ((F->y_1688 != NULL)) {
if (((*(P114)rt_nil_check(F->y_1688)).decl_ == F->d_410)) {
F->result_ = F->y_1688;
goto ret_;
}
F->y_1688 = (*(P114)rt_nil_check(F->y_1688)).chain_;
}
L_end_1690: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_overloadable_413(struct f_greenc_1fr *up_, P114 y_412) {
  struct f_overloadable_413fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_412 = y_412;
F->result_ = ((((G_NV((*(P114)rt_nil_check(F->y_412)).kind_) == ((rt_int)3LL)) || (G_NV((*(P114)rt_nil_check(F->y_412)).kind_) == ((rt_int)4LL))) || (G_NV((*(P114)rt_nil_check(F->y_412)).kind_) == ((rt_int)7LL))) || (G_NV((*(P114)rt_nil_check(F->y_412)).kind_) == ((rt_int)10LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_416(struct f_greenc_1fr *up_, P119 a_414, P119 b_415) {
  struct f_same_416fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_414 = a_414;
F->b_415 = b_415;
F->result_ = (F->a_414 == F->b_415);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P119 f_root_418(struct f_greenc_1fr *up_, P119 t_417) {
  struct f_root_418fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_417 = t_417;
F->r_1691 = NULL;
F->r_1691 = F->t_417;
while (((*(P119)rt_nil_check(F->r_1691)).parent_ != NULL)) {
F->r_1691 = (*(P119)rt_nil_check(F->r_1691)).parent_;
}
L_end_1692: ;
F->result_ = F->r_1691;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_derived_from_421(struct f_greenc_1fr *up_, P119 a_419, P119 b_420) {
  struct f_derived_from_421fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_419 = a_419;
F->b_420 = b_420;
F->r_1693 = NULL;
F->r_1693 = F->a_419;
while ((F->r_1693 != NULL)) {
if ((F->r_1693 == F->b_420)) {
F->result_ = 1;
goto ret_;
}
F->r_1693 = (*(P119)rt_nil_check(F->r_1693)).parent_;
}
L_end_1694: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_numeric_423(struct f_greenc_1fr *up_, P119 t_422) {
  struct f_is_numeric_423fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_422 = t_422;
F->result_ = (((G_NV((*(P119)rt_nil_check(F->t_422)).kind_) == ((rt_int)1LL)) || (G_NV((*(P119)rt_nil_check(F->t_422)).kind_) == ((rt_int)3LL))) || (G_NV((*(P119)rt_nil_check(F->t_422)).kind_) == ((rt_int)16LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_discrete_425(struct f_greenc_1fr *up_, P119 t_424) {
  struct f_is_discrete_425fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_424 = t_424;
F->result_ = ((((G_NV((*(P119)rt_nil_check(F->t_424)).kind_) == ((rt_int)1LL)) || (G_NV((*(P119)rt_nil_check(F->t_424)).kind_) == ((rt_int)4LL))) || (G_NV((*(P119)rt_nil_check(F->t_424)).kind_) == ((rt_int)11LL))) || (G_NV((*(P119)rt_nil_check(F->t_424)).kind_) == ((rt_int)2LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_signature_428(struct f_greenc_1fr *up_, P1695 a_426, P1695 b_427) {
  struct f_same_signature_428fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_426 = a_426;
F->b_427 = b_427;
F->x_1697 = NULL;
F->x_1697 = F->a_426;
F->y_1698 = NULL;
F->y_1698 = F->b_427;
while (((F->x_1697 != NULL) && (F->y_1698 != NULL))) {
if (((!f_same_416(F->up, (*(P1695)rt_nil_check(F->x_1697)).t_, (*(P1695)rt_nil_check(F->y_1698)).t_)) || (G_NV((*(P1695)rt_nil_check(F->x_1697)).mode_) != G_NV((*(P1695)rt_nil_check(F->y_1698)).mode_)))) {
F->result_ = 0;
goto ret_;
}
F->x_1697 = (*(P1695)rt_nil_check(F->x_1697)).next_;
F->y_1698 = (*(P1695)rt_nil_check(F->y_1698)).next_;
}
L_end_1699: ;
F->result_ = ((F->x_1697 == NULL) && (F->y_1698 == NULL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_distinct_overload_431(struct f_greenc_1fr *up_, P114 y_429, P114 z_430) {
  struct f_distinct_overload_431fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_429 = y_429;
F->z_430 = z_430;
if ((!(f_overloadable_413(F->up, F->y_429) && f_overloadable_413(F->up, F->z_430)))) {
F->result_ = 0;
goto ret_;
} else if ((G_NV((*(P114)rt_nil_check(F->y_429)).kind_) != G_NV((*(P114)rt_nil_check(F->z_430)).kind_))) {
F->result_ = 1;
goto ret_;
}
F->result_ = ((!f_same_signature_428(F->up, (*(P114)rt_nil_check(F->y_429)).params_, (*(P114)rt_nil_check(F->z_430)).params_)) || (!f_same_416(F->up, (*(P114)rt_nil_check(F->y_429)).result_, (*(P114)rt_nil_check(F->z_430)).result_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_define_434(struct f_greenc_1fr *up_, P114 y_432, rt_int line_433) {
  struct f_define_434fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_432 = y_432;
F->line_433 = line_433;
F->h_1700 = INT64_MIN;
F->h_1700 = f_hash_394(F->up, (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_432)).name_)));
F->z_1701 = NULL;
F->z_1701 = ({ A113 ix1702 = F->up->table_116; ix1702.p[rt_index(G_NV(F->h_1700), ix1702.lo, ix1702.hi) - ix1702.lo]; });
while ((F->z_1701 != NULL)) {
if ((((G_NV((*(P114)rt_nil_check(F->z_1701)).depth_) == G_NV(F->up->depth_117)) && eq_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->z_1701)).name_)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_432)).name_)))) && (!f_distinct_overload_431(F->up, F->y_432, F->z_1701)))) {
f_fail_232(F->up, F->line_433, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_432)).name_)), rt_g_lit(" is already declared in this declarative part", 45)));
}
F->z_1701 = (*(P114)rt_nil_check(F->z_1701)).chain_;
}
L_end_1703: ;
(*(P114)rt_nil_check(F->y_432)).depth_ = G_NV(F->up->depth_117);
(*(P114)rt_nil_check(F->y_432)).chain_ = ({ A113 ix1704 = F->up->table_116; ix1704.p[rt_index(G_NV(F->h_1700), ix1704.lo, ix1704.hi) - ix1704.lo]; });
(*({ A113 *ix1705 = &(F->up->table_116); &ix1705->p[rt_index(G_NV(F->h_1700), ix1705->lo, ix1705->hi) - ix1705->lo]; })) = F->y_432;
(*(P114)rt_nil_check(F->y_432)).stack_ = F->up->scope_stack_118;
F->up->scope_stack_118 = F->y_432;
ret_:

  return;
}

static void f_open_scope_435(struct f_greenc_1fr *up_) {
  struct f_open_scope_435fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->depth_117 = rt_add(G_NV(F->up->depth_117), ((rt_int)1LL));
ret_:

  return;
}

static void f_close_scope_436(struct f_greenc_1fr *up_) {
  struct f_close_scope_436fr *F = rt_alloc(sizeof *F);
F->up = up_;
while (((F->up->scope_stack_118 != NULL) && (G_NV((*(P114)rt_nil_check(F->up->scope_stack_118)).depth_) == G_NV(F->up->depth_117)))) {
(*({ A113 *ix1707 = &(F->up->table_116); &ix1707->p[rt_index(f_hash_394(F->up, (*(P137)rt_nil_check((*(P114)rt_nil_check(F->up->scope_stack_118)).name_))), ix1707->lo, ix1707->hi) - ix1707->lo]; })) = (*(P114)rt_nil_check(F->up->scope_stack_118)).chain_;
F->up->scope_stack_118 = (*(P114)rt_nil_check(F->up->scope_stack_118)).stack_;
}
L_end_1706: ;
F->up->depth_117 = rt_sub(G_NV(F->up->depth_117), ((rt_int)1LL));
ret_:

  return;
}

static P114 f_new_sym_439(struct f_greenc_1fr *up_, rt_int kind_437, P137 name_438) {
  struct f_new_sym_439fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_437 = kind_437;
F->name_438 = name_438;
F->result_ = ({ R115 *cell1708 = rt_alloc(sizeof(R115)); *cell1708 = cp_R115(({ R115 ag1709; ag1709.kind_ = F->kind_437; ag1709.name_ = F->name_438; ag1709.t_ = NULL; ag1709.c_ = NULL; ag1709.access_path_ = NULL; ag1709.cname_ = NULL; ag1709.ro_ = 0; ag1709.mvalue_ = ((rt_int)0LL); ag1709.hasmv_ = 0; ag1709.decl_ = NULL; ag1709.params_ = NULL; ag1709.result_ = NULL; ag1709.depth_ = ((rt_int)0LL); ag1709.level_ = ((rt_int)0LL); ag1709.byref_ = 0; ag1709.vrp_ = 0; ag1709.hidden_ = 0; ag1709.from_use_ = 0; ag1709.members_ = NULL; ag1709.mnext_ = NULL; ag1709.chain_ = NULL; ag1709.stack_ = NULL; ag1709.flags_ = ((rt_int)0LL); ag1709; })); (P114)cell1708; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P119 f_new_typ_441(struct f_greenc_1fr *up_, rt_int kind_440) {
  struct f_new_typ_441fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_440 = kind_440;
F->result_ = ({ R120 *cell1712 = rt_alloc(sizeof(R120)); *cell1712 = cp_R120(({ R120 ag1713; ag1713.kind_ = F->kind_440; ag1713.name_ = NULL; ag1713.lits_ = NULL; ag1713.elem_ = NULL; ag1713.idx_ = NULL; ag1713.elemcons_ = NULL; ag1713.tcons_ = NULL; ag1713.fields_ = NULL; ag1713.target_ = NULL; ag1713.decl_ = NULL; ag1713.cname_ = NULL; ag1713.forward_ = 0; ag1713.defined_ = 0; ag1713.priv_ = 0; ag1713.next_ = NULL; ag1713.idx2_ = NULL; ag1713.littab_ = NULL; ag1713.parent_ = NULL; ag1713.ndigits_ = ((rt_int)0LL); ag1713.fdelta_ = NULL; ag1713.fsmall_ = NULL; ag1713.dims_ = ((rt_int)0LL); ag1713.is_restricted_ = 0; ag1713; })); (P119)cell1712; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P175 f_new_cons_442(struct f_greenc_1fr *up_) {
  struct f_new_cons_442fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ({ R176 *cell1716 = rt_alloc(sizeof(R176)); *cell1716 = cp_R176(({ R176 ag1717; ag1717.lo_ = NULL; ag1717.hi_ = NULL; ag1717.slen_ = NULL; ag1717.mlo_ = ((rt_int)0LL); ag1717.mhi_ = ((rt_int)0LL); ag1717.hasm_ = 0; ag1717.lo2_ = NULL; ag1717.hi2_ = NULL; ag1717.acc_ = NULL; ag1717.inner_ = NULL; ag1717.dv_ = NULL; ag1717; })); (P175)cell1716; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_bounded_444(struct f_greenc_1fr *up_, P175 c_443) {
  struct f_bounded_444fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_443 = c_443;
if ((F->c_443 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((*(P175)rt_nil_check(F->c_443)).lo_ != NULL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_bounded_hi_446(struct f_greenc_1fr *up_, P175 c_445) {
  struct f_bounded_hi_446fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_445 = c_445;
if ((F->c_445 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((*(P175)rt_nil_check(F->c_445)).hi_ != NULL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_static_bounds_448(struct f_greenc_1fr *up_, P175 c_447) {
  struct f_static_bounds_448fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_447 = c_447;
if ((F->c_447 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = G_NV((*(P175)rt_nil_check(F->c_447)).hasm_);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_discriminated_450(struct f_greenc_1fr *up_, P175 c_449) {
  struct f_discriminated_450fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_449 = c_449;
if ((F->c_449 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((*(P175)rt_nil_check(F->c_449)).dv_ != NULL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_kind_name_452(struct f_greenc_1fr *up_, P119 t_451) {
  struct f_kind_name_452fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_451 = t_451;
if (((*(P119)rt_nil_check(F->t_451)).name_ != NULL)) {
F->result_ = (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_451)).name_));
goto ret_;
}
{ rt_int sel1718 = G_NV((*(P119)rt_nil_check(F->t_451)).kind_);
if (0 || sel1718 == ((rt_int)1LL)) {
F->result_ = rt_g_lit("INTEGER", 7);
goto ret_;
} else if (0 || sel1718 == ((rt_int)2LL)) {
F->result_ = rt_g_lit("BOOLEAN", 7);
goto ret_;
} else if (0 || sel1718 == ((rt_int)3LL)) {
F->result_ = rt_g_lit("FLOAT", 5);
goto ret_;
} else if (0 || sel1718 == ((rt_int)5LL)) {
F->result_ = rt_g_lit("STRING", 6);
goto ret_;
} else if (0 || sel1718 == ((rt_int)10LL)) {
F->result_ = rt_g_lit("null", 4);
goto ret_;
} else if (0 || sel1718 == ((rt_int)11LL)) {
F->result_ = rt_g_lit("CHARACTER", 9);
goto ret_;
} else if (0 || sel1718 == ((rt_int)16LL)) {
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

static void f_check_type_456(struct f_greenc_1fr *up_, P119 got_453, P119 want_454, rt_int line_455) {
  struct f_check_type_456fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->got_453 = got_453;
F->want_454 = want_454;
F->line_455 = line_455;
if ((F->want_454 == NULL)) {
goto ret_;
}
if (((G_NV((*(P119)rt_nil_check(F->got_453)).kind_) == ((rt_int)10LL)) && (G_NV((*(P119)rt_nil_check(F->want_454)).kind_) == ((rt_int)8LL)))) {
goto ret_;
}
if ((!f_same_416(F->up, F->got_453, F->want_454))) {
f_fail_232(F->up, F->line_455, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("type mismatch: ", 15), f_kind_name_452(F->up, F->got_453)), rt_g_lit(" where ", 7)), f_kind_name_452(F->up, F->want_454)), rt_g_lit(" is required", 12)));
}
ret_:

  return;
}

static rt_int f_field_count_458(struct f_greenc_1fr *up_, P119 t_457) {
  struct f_field_count_458fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_457 = t_457;
F->n_1719 = INT64_MIN;
F->n_1719 = ((rt_int)0LL);
F->f_1720 = NULL;
F->f_1720 = (*(P119)rt_nil_check(F->t_457)).fields_;
while ((F->f_1720 != NULL)) {
F->n_1719 = rt_add(G_NV(F->n_1719), ((rt_int)1LL));
F->f_1720 = (*(P1710)rt_nil_check(F->f_1720)).next_;
}
L_end_1721: ;
F->result_ = G_NV(F->n_1719);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_ctype_461(struct f_greenc_1fr *up_, P119 t_459, P137 *r_460) {
  struct f_ctype_461fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_459 = t_459;
F->r_460 = r_460;
F->s_1722 = NULL;
{ rt_int sel1723 = G_NV((*(P119)rt_nil_check(F->t_459)).kind_);
if (0 || sel1723 == ((rt_int)1LL)) {
(*F->r_460) = f_mk_211(F->up, rt_g_lit("rt_int", 6));
} else if (0 || sel1723 == ((rt_int)2LL) || sel1723 == ((rt_int)4LL) || sel1723 == ((rt_int)11LL)) {
(*F->r_460) = f_mk_211(F->up, rt_g_lit("int", 3));
} else if (0 || sel1723 == ((rt_int)3LL) || sel1723 == ((rt_int)16LL)) {
(*F->r_460) = f_mk_211(F->up, rt_g_lit("double", 6));
} else if (0 || sel1723 == ((rt_int)5LL)) {
(*F->r_460) = f_mk_211(F->up, rt_g_lit("rstr", 4));
} else if (0 || sel1723 == ((rt_int)9LL)) {
(*F->r_460) = f_mk_211(F->up, rt_g_lit("void", 4));
} else if (0 || sel1723 == ((rt_int)13LL)) {
(*F->r_460) = f_mk_211(F->up, rt_g_lit("rt_act", 6));
} else if (0 || sel1723 == ((rt_int)14LL)) {
(*F->r_460) = f_mk_211(F->up, rt_g_lit("rt_taskdecl", 11));
} else if (0 || sel1723 == ((rt_int)15LL)) {
(*F->r_460) = f_mk_211(F->up, rt_g_lit("rt_entry", 8));
} else {
if (((*(P119)rt_nil_check(F->t_459)).cname_ == NULL)) {
f_declare_ctype_466(F->up, F->t_459);
} else if ((((G_NV((*(P119)rt_nil_check(F->t_459)).kind_) == ((rt_int)7LL)) && G_NV((*(P119)rt_nil_check(F->t_459)).forward_)) && (!G_NV((*(P119)rt_nil_check(F->t_459)).defined_)))) {
(*(P119)rt_nil_check(F->t_459)).defined_ = 1;
f_field_decls_464(F->up, F->t_459, &F->s_1722);
f_put_to_236(F->up, F->up->out_types_125, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_459)).cname_))), rt_g_lit(" {", 2)), (*(P137)rt_nil_check(F->s_1722))), rt_g_lit(" };", 3)));
}
(*F->r_460) = (*(P119)rt_nil_check(F->t_459)).cname_;
}
}
ret_:

  return;
}

static void f_field_decls_464(struct f_greenc_1fr *up_, P119 t_462, P137 *r_463) {
  struct f_field_decls_464fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_462 = t_462;
F->r_463 = r_463;
F->f_1724 = NULL;
F->f_1724 = (*(P119)rt_nil_check(F->t_462)).fields_;
F->s_1725 = NULL;
F->ct_1726 = NULL;
F->s_1725 = f_mk_211(F->up, rt_g_lit(" int dummy_;", 12));
while ((F->f_1724 != NULL)) {
f_ctype_461(F->up, (*(P1710)rt_nil_check(F->f_1724)).t_, &F->ct_1726);
F->s_1725 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->s_1725)), one_rt_gstr(32)), (*(P137)rt_nil_check(F->ct_1726))), one_rt_gstr(32)), f_c_field_228(F->up, (*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_1724)).name_)))), one_rt_gstr(59)));
F->f_1724 = (*(P1710)rt_nil_check(F->f_1724)).next_;
}
L_end_1727: ;
(*F->r_463) = F->s_1725;
ret_:

  return;
}

static void f_declare_ctype_466(struct f_greenc_1fr *up_, P119 t_465) {
  struct f_declare_ctype_466fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_465 = t_465;
F->ct_1728 = NULL;
F->s_1729 = NULL;
F->target_1730 = NULL;
if ((G_NV((*(P119)rt_nil_check(F->t_465)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_575(F->up, F->t_465);
}
if ((G_NV((*(P119)rt_nil_check(F->t_465)).kind_) == ((rt_int)6LL))) {
f_new_name_214(F->up, rt_g_lit("A", 1), &(*(P119)rt_nil_check(F->t_465)).cname_);
} else if ((G_NV((*(P119)rt_nil_check(F->t_465)).kind_) == ((rt_int)7LL))) {
f_new_name_214(F->up, rt_g_lit("R", 1), &(*(P119)rt_nil_check(F->t_465)).cname_);
} else {
f_new_name_214(F->up, rt_g_lit("P", 1), &(*(P119)rt_nil_check(F->t_465)).cname_);
}
(*(P119)rt_nil_check(F->t_465)).next_ = F->up->all_types_121;
F->up->all_types_121 = F->t_465;
if ((G_NV((*(P119)rt_nil_check(F->t_465)).kind_) == ((rt_int)8LL))) {
F->target_1730 = (*(P119)rt_nil_check(F->t_465)).target_;
if ((F->target_1730 == NULL)) {
f_fail_232(F->up, ((rt_int)0LL), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the designated type of ", 23), f_kind_name_452(F->up, F->t_465)), rt_g_lit(" is never declared", 18)));
}
if ((G_NV((*(P119)rt_nil_check(F->target_1730)).kind_) == ((rt_int)7LL))) {
if (((*(P119)rt_nil_check(F->target_1730)).cname_ == NULL)) {
f_new_name_214(F->up, rt_g_lit("R", 1), &(*(P119)rt_nil_check(F->target_1730)).cname_);
(*(P119)rt_nil_check(F->target_1730)).next_ = F->up->all_types_121;
F->up->all_types_121 = F->target_1730;
f_put_to_236(F->up, F->up->out_types_125, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->target_1730)).cname_))), one_rt_gstr(32)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->target_1730)).cname_))), one_rt_gstr(59)));
(*(P119)rt_nil_check(F->target_1730)).forward_ = 1;
}
f_put_to_236(F->up, F->up->out_types_125, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->target_1730)).cname_))), rt_g_lit(" *", 2)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_465)).cname_))), one_rt_gstr(59)));
} else {
f_ctype_461(F->up, F->target_1730, &F->ct_1728);
f_put_to_236(F->up, F->up->out_types_125, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef ", 8), (*(P137)rt_nil_check(F->ct_1728))), rt_g_lit(" *", 2)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_465)).cname_))), one_rt_gstr(59)));
}
} else if ((G_NV((*(P119)rt_nil_check(F->t_465)).kind_) == ((rt_int)6LL))) {
f_elem_ctype_533(F->up, (*(P119)rt_nil_check(F->t_465)).elem_, &F->ct_1728);
f_put_to_236(F->up, F->up->out_types_125, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_465)).cname_))), one_rt_gstr(32)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_465)).cname_))), one_rt_gstr(59)));
f_put_to_236(F->up, F->up->out_types_125, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_465)).cname_))), rt_g_lit(" { rt_int lo, hi, lo2, hi2; ", 28)), (*(P137)rt_nil_check(F->ct_1728))), rt_g_lit(" *p; };", 7)));
} else {
f_put_to_236(F->up, F->up->out_types_125, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_465)).cname_))), one_rt_gstr(32)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_465)).cname_))), one_rt_gstr(59)));
(*(P119)rt_nil_check(F->t_465)).defined_ = 1;
f_field_decls_464(F->up, F->t_465, &F->s_1729);
f_put_to_236(F->up, F->up->out_types_125, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_465)).cname_))), rt_g_lit(" {", 2)), (*(P137)rt_nil_check(F->s_1729))), rt_g_lit(" };", 3)));
}
ret_:

  return;
}

static rt_int f_lit_index_469(struct f_greenc_1fr *up_, P171 lits_467, rt_gstr name_468) {
  struct f_lit_index_469fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lits_467 = lits_467;
F->name_468 = cp_rt_gstr(name_468);
F->i_1731 = INT64_MIN;
F->i_1731 = ((rt_int)0LL);
F->l_1732 = NULL;
F->l_1732 = F->lits_467;
while ((F->l_1732 != NULL)) {
if (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->l_1732)).name_)), F->name_468)) {
F->result_ = G_NV(F->i_1731);
goto ret_;
}
F->i_1731 = rt_add(G_NV(F->i_1731), ((rt_int)1LL));
F->l_1732 = (*(P171)rt_nil_check(F->l_1732)).next_;
}
L_end_1733: ;
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_manifest_473(struct f_greenc_1fr *up_, P171 e_470, rt_int *v_471, int *ok_472) {
  struct f_manifest_473fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_470 = e_470;
F->v_471 = v_471;
F->ok_472 = ok_472;
F->a_1734 = INT64_MIN;
F->b_1735 = INT64_MIN;
F->ok2_1736 = INT_MIN;
F->y_1737 = NULL;
(*F->ok_472) = 0;
(*F->v_471) = ((rt_int)0LL);
if ((G_NV((*(P171)rt_nil_check(F->e_470)).kind_) == ((rt_int)1LL))) {
(*F->ok_472) = 1;
(*F->v_471) = G_NV((*(P171)rt_nil_check(F->e_470)).ival_);
} else if ((G_NV((*(P171)rt_nil_check(F->e_470)).kind_) == ((rt_int)15LL))) {
f_manifest_473(F->up, (*(P171)rt_nil_check(F->e_470)).a_, &(*F->v_471), &(*F->ok_472));
} else if (((G_NV((*(P171)rt_nil_check(F->e_470)).kind_) == ((rt_int)6LL)) && eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_470)).name_)), rt_g_lit("-", 1)))) {
f_manifest_473(F->up, (*(P171)rt_nil_check(F->e_470)).a_, &F->a_1734, &(*F->ok_472));
(*F->v_471) = rt_neg(G_NV(F->a_1734));
} else if (((G_NV((*(P171)rt_nil_check(F->e_470)).kind_) == ((rt_int)7LL)) && ((eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_470)).name_)), rt_g_lit("+", 1)) || eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_470)).name_)), rt_g_lit("-", 1))) || eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_470)).name_)), rt_g_lit("*", 1))))) {
f_manifest_473(F->up, (*(P171)rt_nil_check(F->e_470)).a_, &F->a_1734, &(*F->ok_472));
f_manifest_473(F->up, (*(P171)rt_nil_check(F->e_470)).b_, &F->b_1735, &F->ok2_1736);
(*F->ok_472) = (G_NV((*F->ok_472)) && G_NV(F->ok2_1736));
if (G_NV((*F->ok_472))) {
if (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_470)).name_)), rt_g_lit("+", 1))) {
(*F->v_471) = rt_add(G_NV(F->a_1734), G_NV(F->b_1735));
} else if (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_470)).name_)), rt_g_lit("-", 1))) {
(*F->v_471) = rt_sub(G_NV(F->a_1734), G_NV(F->b_1735));
} else {
(*F->v_471) = rt_mul(G_NV(F->a_1734), G_NV(F->b_1735));
}
}
} else if ((G_NV((*(P171)rt_nil_check(F->e_470)).kind_) == ((rt_int)5LL))) {
F->y_1737 = f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_470)).name_)));
if ((((F->y_1737 != NULL) && ((G_NV((*(P114)rt_nil_check(F->y_1737)).kind_) == ((rt_int)2LL)) || (G_NV((*(P114)rt_nil_check(F->y_1737)).kind_) == ((rt_int)7LL)))) && G_NV((*(P114)rt_nil_check(F->y_1737)).hasmv_))) {
(*F->ok_472) = 1;
(*F->v_471) = G_NV((*(P114)rt_nil_check(F->y_1737)).mvalue_);
}
} else if (((G_NV((*(P171)rt_nil_check(F->e_470)).kind_) == ((rt_int)9LL)) && f_is_package_958(F->up, (*(P171)rt_nil_check(F->e_470)).a_))) {
F->y_1737 = f_member_of_962(F->up, f_path_of_328(F->up, (*(P171)rt_nil_check(F->e_470)).a_), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_470)).name_)), G_NV((*(P171)rt_nil_check(F->e_470)).line_));
if ((((F->y_1737 != NULL) && ((G_NV((*(P114)rt_nil_check(F->y_1737)).kind_) == ((rt_int)2LL)) || (G_NV((*(P114)rt_nil_check(F->y_1737)).kind_) == ((rt_int)7LL)))) && G_NV((*(P114)rt_nil_check(F->y_1737)).hasmv_))) {
(*F->ok_472) = 1;
(*F->v_471) = G_NV((*(P114)rt_nil_check(F->y_1737)).mvalue_);
}
} else if ((((G_NV((*(P171)rt_nil_check(F->e_470)).kind_) == ((rt_int)10LL)) && (G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_470)).a_)).kind_) == ((rt_int)5LL))) && (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_470)).name_)), rt_g_lit("FIRST", 5)) || eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_470)).name_)), rt_g_lit("LAST", 4))))) {
F->y_1737 = f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_470)).a_)).name_)));
if (((((F->y_1737 != NULL) && (G_NV((*(P114)rt_nil_check(F->y_1737)).kind_) == ((rt_int)5LL))) && ((*(P114)rt_nil_check(F->y_1737)).c_ != NULL)) && G_NV((*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_1737)).c_)).hasm_))) {
(*F->ok_472) = 1;
if (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_470)).name_)), rt_g_lit("FIRST", 5))) {
(*F->v_471) = G_NV((*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_1737)).c_)).mlo_);
} else {
(*F->v_471) = G_NV((*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_1737)).c_)).mhi_);
}
}
} else if ((((G_NV((*(P171)rt_nil_check(F->e_470)).kind_) == ((rt_int)8LL)) && (G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_470)).a_)).kind_) == ((rt_int)5LL))) && (f_list_len_291(F->up, (*(P171)rt_nil_check(F->e_470)).b_) == ((rt_int)1LL)))) {
F->y_1737 = f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_470)).a_)).name_)));
if (((((F->y_1737 != NULL) && (G_NV((*(P114)rt_nil_check(F->y_1737)).kind_) == ((rt_int)5LL))) && ((*(P114)rt_nil_check(F->y_1737)).t_ != NULL)) && (G_NV((*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_1737)).t_)).kind_) == ((rt_int)1LL)))) {
f_manifest_473(F->up, (*(P171)rt_nil_check(F->e_470)).b_, &(*F->v_471), &(*F->ok_472));
}
}
ret_:

  return;
}

static void f_resolve_477(struct f_greenc_1fr *up_, P171 st_474, P119 *t_475, P175 *c_476) {
  struct f_resolve_477fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_474 = st_474;
F->t_475 = t_475;
F->c_476 = c_476;
F->y_1738 = NULL;
F->dummy_1739 = NULL;
F->code_1740 = NULL;
F->ok_1741 = INT_MIN;
F->r_1742 = NULL;
(*F->c_476) = f_new_cons_442(F->up);
if ((G_NV((*(P171)rt_nil_check(F->st_474)).kind_) != ((rt_int)80LL))) {
f_type_definition_511(F->up, F->st_474, NULL, &(*F->t_475), &(*F->c_476));
goto ret_;
}
if (((*(P171)rt_nil_check(F->st_474)).tag_ != NULL)) {
F->y_1738 = f_member_of_962(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->st_474)).tag_)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->st_474)).name_)), G_NV((*(P171)rt_nil_check(F->st_474)).line_));
} else {
F->y_1738 = f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->st_474)).name_)));
}
if (((F->y_1738 == NULL) || (G_NV((*(P114)rt_nil_check(F->y_1738)).kind_) != ((rt_int)5LL)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->st_474)).line_), cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->st_474)).name_)), rt_g_lit(" is not a type", 14)));
}
(*F->t_475) = (*(P114)rt_nil_check(F->y_1738)).t_;
if (((*(P114)rt_nil_check(F->y_1738)).c_ != NULL)) {
(*(P175)rt_nil_check((*F->c_476))).lo_ = (*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_1738)).c_)).lo_;
(*(P175)rt_nil_check((*F->c_476))).hi_ = (*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_1738)).c_)).hi_;
(*(P175)rt_nil_check((*F->c_476))).slen_ = (*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_1738)).c_)).slen_;
(*(P175)rt_nil_check((*F->c_476))).mlo_ = G_NV((*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_1738)).c_)).mlo_);
(*(P175)rt_nil_check((*F->c_476))).mhi_ = G_NV((*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_1738)).c_)).mhi_);
(*(P175)rt_nil_check((*F->c_476))).hasm_ = G_NV((*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_1738)).c_)).hasm_);
(*(P175)rt_nil_check((*F->c_476))).acc_ = (*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_1738)).c_)).acc_;
(*(P175)rt_nil_check((*F->c_476))).inner_ = (*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_1738)).c_)).inner_;
(*(P175)rt_nil_check((*F->c_476))).dv_ = (*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_1738)).c_)).dv_;
}
if (((*F->t_475) == NULL)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->st_474)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the type ", 9), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->st_474)).name_))), rt_g_lit(" is used before its full declaration", 36)));
}
if ((G_NV((*(P171)rt_nil_check(F->st_474)).flag_) == ((rt_int)3LL))) {
if (((G_NV((*(P119)rt_nil_check((*F->t_475))).kind_) != ((rt_int)3LL)) && (G_NV((*(P119)rt_nil_check((*F->t_475))).kind_) != ((rt_int)16LL)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->st_474)).line_), rt_g_lit("an accuracy constraint applies to a real type (RM79 3.5.5)", 58));
}
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->st_474)).b_, NULL, &F->dummy_1739, &(*(P175)rt_nil_check((*F->c_476))).acc_);
}
if (((G_NV((*(P171)rt_nil_check(F->st_474)).flag_) == ((rt_int)1LL)) || ((G_NV((*(P171)rt_nil_check(F->st_474)).flag_) == ((rt_int)3LL)) && ((*(P171)rt_nil_check(F->st_474)).a_ != NULL)))) {
F->r_1742 = (*(P171)rt_nil_check(F->st_474)).a_;
if (((!f_is_numeric_423(F->up, (*F->t_475))) && (!f_is_discrete_425(F->up, (*F->t_475))))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->st_474)).line_), rt_g_lit("a range constraint applies to a scalar type (RM79 3.5)", 54));
}
f_range_of_495(F->up, F->r_1742, (*F->t_475), (*F->c_476));
} else if ((G_NV((*(P171)rt_nil_check(F->st_474)).flag_) == ((rt_int)2LL))) {
f_constraint_list_481(F->up, F->st_474, (*F->t_475), (*F->c_476));
}
ret_:

  return;
}

static void f_constraint_list_481(struct f_greenc_1fr *up_, P171 st_478, P119 t_479, P175 c_480) {
  struct f_constraint_list_481fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_478 = st_478;
F->t_479 = t_479;
F->c_480 = c_480;
F->r_1743 = NULL;
F->r_1743 = (*(P171)rt_nil_check(F->st_478)).a_;
F->arrt_1744 = NULL;
F->arrt_1744 = F->t_479;
F->cc_1745 = NULL;
F->cc_1745 = F->c_480;
F->it_1746 = NULL;
if ((G_NV((*(P119)rt_nil_check(F->t_479)).kind_) == ((rt_int)7LL))) {
f_discriminant_constraint_485(F->up, F->st_478, F->t_479, F->c_480);
goto ret_;
}
if ((G_NV((*(P119)rt_nil_check(F->t_479)).kind_) != ((rt_int)6LL))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->st_478)).line_), rt_g_lit("this type takes no index constraint", 35));
}
if ((f_list_len_291(F->up, F->r_1743) != G_NV((*(P119)rt_nil_check(F->t_479)).dims_))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->st_478)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("an index constraint gives a range for each of the ", 50), rt_g_s2g(rt_str_of_int(G_NV((*(P119)rt_nil_check(F->t_479)).dims_)))), rt_g_lit(" indexes (RM79 3.6)", 19)));
}
while ((F->r_1743 != NULL)) {
if (((*(P171)rt_nil_check(F->r_1743)).formal_ != NULL)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->st_478)).line_), rt_g_lit("an index constraint is a list of discrete ranges (RM79 3.6)", 59));
}
f_discrete_bounds_491(F->up, F->r_1743, (*(P119)rt_nil_check(F->arrt_1744)).idx_, &F->it_1746, &(*(P175)rt_nil_check(F->cc_1745)).lo_, &(*(P175)rt_nil_check(F->cc_1745)).hi_);
f_check_type_456(F->up, F->it_1746, (*(P119)rt_nil_check(F->arrt_1744)).idx_, G_NV((*(P171)rt_nil_check(F->st_478)).line_));
(*(P175)rt_nil_check(F->cc_1745)).mlo_ = ((rt_int)0LL);
(*(P175)rt_nil_check(F->cc_1745)).mhi_ = ((rt_int)0LL);
(*(P175)rt_nil_check(F->cc_1745)).hasm_ = 0;
F->r_1743 = (*(P171)rt_nil_check(F->r_1743)).next_;
if ((F->r_1743 != NULL)) {
(*(P175)rt_nil_check(F->cc_1745)).inner_ = f_new_cons_442(F->up);
F->cc_1745 = (*(P175)rt_nil_check(F->cc_1745)).inner_;
F->arrt_1744 = (*(P119)rt_nil_check(F->arrt_1744)).elem_;
}
}
L_end_1747: ;
ret_:

  return;
}

static void f_discriminant_constraint_485(struct f_greenc_1fr *up_, P171 st_482, P119 t_483, P175 c_484) {
  struct f_discriminant_constraint_485fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_482 = st_482;
F->t_483 = t_483;
F->c_484 = c_484;
F->a_1748 = NULL;
F->a_1748 = (*(P171)rt_nil_check(F->st_482)).a_;
F->f_1749 = NULL;
F->f_1749 = (*(P119)rt_nil_check(F->t_483)).fields_;
F->vt_1750 = NULL;
F->v_1751 = NULL;
F->d_1752 = NULL;
F->tail_1753 = NULL;
(*(P175)rt_nil_check(F->c_484)).dv_ = NULL;
while ((F->a_1748 != NULL)) {
if (((*(P171)rt_nil_check(F->a_1748)).formal_ != NULL)) {
F->f_1749 = (*(P119)rt_nil_check(F->t_483)).fields_;
while (((F->f_1749 != NULL) && (!eq_rt_gstr((*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_1749)).name_)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->a_1748)).formal_)))))) {
F->f_1749 = (*(P1710)rt_nil_check(F->f_1749)).next_;
}
L_end_1755: ;
} else {
while (((F->f_1749 != NULL) && (!G_NV((*(P1710)rt_nil_check(F->f_1749)).is_discr_)))) {
F->f_1749 = (*(P1710)rt_nil_check(F->f_1749)).next_;
}
L_end_1756: ;
}
if (((F->f_1749 == NULL) || (!G_NV((*(P1710)rt_nil_check(F->f_1749)).is_discr_)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->st_482)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("a discriminant constraint gives the values of discriminants of ", 63), f_kind_name_452(F->up, F->t_483)), rt_g_lit(" (RM79 3.7.3)", 13)));
}
f_gexpr_739(F->up, F->a_1748, (*(P1710)rt_nil_check(F->f_1749)).t_, &F->vt_1750, &F->v_1751);
f_check_type_456(F->up, F->vt_1750, (*(P1710)rt_nil_check(F->f_1749)).t_, G_NV((*(P171)rt_nil_check(F->st_482)).line_));
F->d_1752 = ({ R1715 *cell1757 = rt_alloc(sizeof(R1715)); *cell1757 = cp_R1715(({ R1715 ag1758; ag1758.name_ = (*(P1710)rt_nil_check(F->f_1749)).name_; ag1758.v_ = F->v_1751; ag1758.next_ = NULL; ag1758; })); (P1714)cell1757; });
if ((F->tail_1753 == NULL)) {
(*(P175)rt_nil_check(F->c_484)).dv_ = F->d_1752;
} else {
(*(P1714)rt_nil_check(F->tail_1753)).next_ = F->d_1752;
}
F->tail_1753 = F->d_1752;
if (((*(P171)rt_nil_check(F->a_1748)).formal_ == NULL)) {
F->f_1749 = (*(P1710)rt_nil_check(F->f_1749)).next_;
}
F->a_1748 = (*(P171)rt_nil_check(F->a_1748)).next_;
}
L_end_1754: ;
F->f_1749 = (*(P119)rt_nil_check(F->t_483)).fields_;
while ((F->f_1749 != NULL)) {
if (G_NV((*(P1710)rt_nil_check(F->f_1749)).is_discr_)) {
F->d_1752 = (*(P175)rt_nil_check(F->c_484)).dv_;
while (((F->d_1752 != NULL) && (!eq_rt_gstr((*(P137)rt_nil_check((*(P1714)rt_nil_check(F->d_1752)).name_)), (*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_1749)).name_)))))) {
F->d_1752 = (*(P1714)rt_nil_check(F->d_1752)).next_;
}
L_end_1760: ;
if ((F->d_1752 == NULL)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->st_482)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("no value for discriminant ", 26), (*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_1749)).name_))), rt_g_lit(" (RM79 3.7.3)", 13)));
}
}
F->f_1749 = (*(P1710)rt_nil_check(F->f_1749)).next_;
}
L_end_1759: ;
ret_:

  return;
}

static void f_discrete_bounds_491(struct f_greenc_1fr *up_, P171 r_486, P119 want_487, P119 *t_488, P137 *lo_489, P137 *hi_490) {
  struct f_discrete_bounds_491fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_486 = r_486;
F->want_487 = want_487;
F->t_488 = t_488;
F->lo_489 = lo_489;
F->hi_490 = hi_490;
F->c_1761 = NULL;
F->y_1762 = NULL;
if ((G_NV((*(P171)rt_nil_check(F->r_486)).kind_) == ((rt_int)14LL))) {
f_range_bounds_734(F->up, (*(P171)rt_nil_check(F->r_486)).a_, (*(P171)rt_nil_check(F->r_486)).b_, F->want_487, G_NV((*(P171)rt_nil_check(F->r_486)).line_), &(*F->t_488), &(*F->lo_489), &(*F->hi_490));
goto ret_;
}
if ((G_NV((*(P171)rt_nil_check(F->r_486)).kind_) == ((rt_int)5LL))) {
F->y_1762 = f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->r_486)).name_)));
if (((F->y_1762 == NULL) || (G_NV((*(P114)rt_nil_check(F->y_1762)).kind_) != ((rt_int)5LL)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->r_486)).line_), rt_g_lit("a discrete range is L .. H, T range L .. H or a type mark (RM79 3.6)", 68));
}
} else if ((G_NV((*(P171)rt_nil_check(F->r_486)).kind_) != ((rt_int)80LL))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->r_486)).line_), rt_g_lit("a discrete range is L .. H, T range L .. H or a type mark (RM79 3.6)", 68));
}
if ((G_NV((*(P171)rt_nil_check(F->r_486)).kind_) == ((rt_int)5LL))) {
(*F->t_488) = (*(P114)rt_nil_check(F->y_1762)).t_;
F->c_1761 = (*(P114)rt_nil_check(F->y_1762)).c_;
} else {
f_resolve_477(F->up, F->r_486, &(*F->t_488), &F->c_1761);
}
if (((F->c_1761 == NULL) || ((*(P175)rt_nil_check(F->c_1761)).lo_ == NULL))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->r_486)).line_), rt_g_lit("this type mark has no bounds to give a discrete range", 53));
}
(*F->lo_489) = (*(P175)rt_nil_check(F->c_1761)).lo_;
(*F->hi_490) = (*(P175)rt_nil_check(F->c_1761)).hi_;
ret_:

  return;
}

static void f_range_of_495(struct f_greenc_1fr *up_, P171 r_492, P119 t_493, P175 c_494) {
  struct f_range_of_495fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_492 = r_492;
F->t_493 = t_493;
F->c_494 = c_494;
F->dummy_1763 = NULL;
F->ok_1764 = INT_MIN;
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->r_492)).a_, F->t_493, &F->dummy_1763, &(*(P175)rt_nil_check(F->c_494)).lo_);
f_check_type_456(F->up, F->dummy_1763, F->t_493, G_NV((*(P171)rt_nil_check(F->r_492)).line_));
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->r_492)).b_, F->t_493, &F->dummy_1763, &(*(P175)rt_nil_check(F->c_494)).hi_);
f_check_type_456(F->up, F->dummy_1763, F->t_493, G_NV((*(P171)rt_nil_check(F->r_492)).line_));
if ((G_NV((*(P119)rt_nil_check(F->t_493)).kind_) == ((rt_int)16LL))) {
(*(P175)rt_nil_check(F->c_494)).lo_ = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_494)).lo_))), one_rt_gstr(41)));
(*(P175)rt_nil_check(F->c_494)).hi_ = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_494)).hi_))), one_rt_gstr(41)));
}
f_manifest_473(F->up, (*(P171)rt_nil_check(F->r_492)).a_, &(*(P175)rt_nil_check(F->c_494)).mlo_, &F->ok_1764);
(*(P175)rt_nil_check(F->c_494)).hasm_ = G_NV(F->ok_1764);
f_manifest_473(F->up, (*(P171)rt_nil_check(F->r_492)).b_, &(*(P175)rt_nil_check(F->c_494)).mhi_, &F->ok_1764);
(*(P175)rt_nil_check(F->c_494)).hasm_ = (G_NV((*(P175)rt_nil_check(F->c_494)).hasm_) && G_NV(F->ok_1764));
ret_:

  return;
}

static void f_fresh_typ_499(struct f_greenc_1fr *up_, rt_int kind_496, P137 name_497, P119 *t_498) {
  struct f_fresh_typ_499fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_496 = kind_496;
F->name_497 = name_497;
F->t_498 = t_498;
F->ph_1765 = NULL;
F->ph_1765 = F->up->completing_170;
F->up->completing_170 = NULL;
if ((F->ph_1765 == NULL)) {
(*F->t_498) = f_new_typ_441(F->up, F->kind_496);
(*(P119)rt_nil_check((*F->t_498))).name_ = F->name_497;
goto ret_;
}
as_R120(&(*(P119)rt_nil_check(F->ph_1765)), (*(P119)rt_nil_check(f_new_typ_441(F->up, F->kind_496))));
(*(P119)rt_nil_check(F->ph_1765)).name_ = F->name_497;
(*F->t_498) = F->ph_1765;
ret_:

  return;
}

static void f_inherit_503(struct f_greenc_1fr *up_, P119 parent_500, P119 t_501, rt_int line_502) {
  struct f_inherit_503fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->parent_500 = parent_500;
F->t_501 = t_501;
F->line_502 = line_502;
F->s_1766 = NULL;
F->s_1766 = F->up->scope_stack_118;
F->z_1767 = NULL;
F->p_1768 = NULL;
F->q_1769 = NULL;
F->tail_1770 = NULL;
F->uses_1771 = INT_MIN;
F->news_1772 = NULL;
while ((F->s_1766 != NULL)) {
if (((((G_NV((*(P114)rt_nil_check(F->s_1766)).kind_) == ((rt_int)3LL)) || (G_NV((*(P114)rt_nil_check(F->s_1766)).kind_) == ((rt_int)4LL))) && (!G_NV((*(P114)rt_nil_check(F->s_1766)).hidden_))) && ((*(P114)rt_nil_check(F->s_1766)).members_ == NULL))) {
F->uses_1771 = f_same_416(F->up, (*(P114)rt_nil_check(F->s_1766)).result_, F->parent_500);
F->p_1768 = (*(P114)rt_nil_check(F->s_1766)).params_;
while ((F->p_1768 != NULL)) {
F->uses_1771 = (G_NV(F->uses_1771) || f_same_416(F->up, (*(P1695)rt_nil_check(F->p_1768)).t_, F->parent_500));
F->p_1768 = (*(P1695)rt_nil_check(F->p_1768)).next_;
}
L_end_1774: ;
if (G_NV(F->uses_1771)) {
f_copy_sym_967(F->up, F->s_1766, &F->z_1767);
(*(P114)rt_nil_check(F->z_1767)).params_ = NULL;
F->tail_1770 = NULL;
F->p_1768 = (*(P114)rt_nil_check(F->s_1766)).params_;
while ((F->p_1768 != NULL)) {
F->q_1769 = ({ R1696 *cell1776 = rt_alloc(sizeof(R1696)); *cell1776 = cp_R1696(({ R1696 ag1777; ag1777.name_ = (*(P1695)rt_nil_check(F->p_1768)).name_; ag1777.mode_ = G_NV((*(P1695)rt_nil_check(F->p_1768)).mode_); ag1777.t_ = (*(P1695)rt_nil_check(F->p_1768)).t_; ag1777.c_ = (*(P1695)rt_nil_check(F->p_1768)).c_; ag1777.cfield_ = (*(P1695)rt_nil_check(F->p_1768)).cfield_; ag1777.dflt_ = (*(P1695)rt_nil_check(F->p_1768)).dflt_; ag1777.next_ = NULL; ag1777; })); (P1695)cell1776; });
if (f_same_416(F->up, (*(P1695)rt_nil_check(F->q_1769)).t_, F->parent_500)) {
(*(P1695)rt_nil_check(F->q_1769)).t_ = F->t_501;
}
if ((F->tail_1770 == NULL)) {
(*(P114)rt_nil_check(F->z_1767)).params_ = F->q_1769;
} else {
(*(P1695)rt_nil_check(F->tail_1770)).next_ = F->q_1769;
}
F->tail_1770 = F->q_1769;
F->p_1768 = (*(P1695)rt_nil_check(F->p_1768)).next_;
}
L_end_1775: ;
if (f_same_416(F->up, (*(P114)rt_nil_check(F->z_1767)).result_, F->parent_500)) {
(*(P114)rt_nil_check(F->z_1767)).result_ = F->t_501;
}
(*(P114)rt_nil_check(F->z_1767)).chain_ = F->news_1772;
F->news_1772 = F->z_1767;
}
}
F->s_1766 = (*(P114)rt_nil_check(F->s_1766)).stack_;
}
L_end_1773: ;
while ((F->news_1772 != NULL)) {
F->z_1767 = F->news_1772;
F->news_1772 = (*(P114)rt_nil_check(F->news_1772)).chain_;
(*(P114)rt_nil_check(F->z_1767)).chain_ = NULL;
f_define_434(F->up, F->z_1767, F->line_502);
}
L_end_1778: ;
ret_:

  return;
}

static void f_derive_literals_506(struct f_greenc_1fr *up_, P119 t_504, rt_int line_505) {
  struct f_derive_literals_506fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_504 = t_504;
F->line_505 = line_505;
F->l_1779 = NULL;
F->l_1779 = (*(P119)rt_nil_check(F->t_504)).lits_;
F->n_1780 = INT64_MIN;
F->n_1780 = ((rt_int)0LL);
F->y_1781 = NULL;
while ((F->l_1779 != NULL)) {
if ((G_NV((*(P171)rt_nil_check(F->l_1779)).kind_) == ((rt_int)5LL))) {
F->y_1781 = f_new_sym_439(F->up, ((rt_int)7LL), (*(P171)rt_nil_check(F->l_1779)).name_);
(*(P114)rt_nil_check(F->y_1781)).t_ = F->t_504;
(*(P114)rt_nil_check(F->y_1781)).result_ = F->t_504;
(*(P114)rt_nil_check(F->y_1781)).mvalue_ = G_NV(F->n_1780);
(*(P114)rt_nil_check(F->y_1781)).hasmv_ = 1;
f_define_434(F->up, F->y_1781, F->line_505);
}
F->n_1780 = rt_add(G_NV(F->n_1780), ((rt_int)1LL));
F->l_1779 = (*(P171)rt_nil_check(F->l_1779)).next_;
}
L_end_1782: ;
ret_:

  return;
}

static void f_type_definition_511(struct f_greenc_1fr *up_, P171 d_507, P137 name_508, P119 *t_509, P175 *c_510) {
  struct f_type_definition_511fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_507 = d_507;
F->name_508 = name_508;
F->t_509 = t_509;
F->c_510 = c_510;
F->dummy_1783 = NULL;
F->it_1784 = NULL;
F->ic_1785 = NULL;
F->l_1786 = NULL;
F->comp_1787 = NULL;
F->f_1788 = NULL;
F->tail_1789 = NULL;
F->ok_1790 = INT_MIN;
F->n_1791 = INT64_MIN;
F->y_1792 = NULL;
(*F->c_510) = f_new_cons_442(F->up);
{ rt_int sel1793 = G_NV((*(P171)rt_nil_check(F->d_507)).kind_);
if (0 || sel1793 == ((rt_int)70LL)) {
f_fresh_typ_499(F->up, ((rt_int)4LL), F->name_508, &(*F->t_509));
(*(P119)rt_nil_check((*F->t_509))).lits_ = (*(P171)rt_nil_check(F->d_507)).a_;
F->l_1786 = (*(P171)rt_nil_check(F->d_507)).a_;
F->n_1791 = ((rt_int)0LL);
while ((F->l_1786 != NULL)) {
if ((G_NV((*(P171)rt_nil_check(F->l_1786)).kind_) == ((rt_int)5LL))) {
F->y_1792 = f_new_sym_439(F->up, ((rt_int)7LL), (*(P171)rt_nil_check(F->l_1786)).name_);
(*(P114)rt_nil_check(F->y_1792)).t_ = (*F->t_509);
(*(P114)rt_nil_check(F->y_1792)).result_ = (*F->t_509);
(*(P114)rt_nil_check(F->y_1792)).mvalue_ = G_NV(F->n_1791);
(*(P114)rt_nil_check(F->y_1792)).hasmv_ = 1;
f_define_434(F->up, F->y_1792, G_NV((*(P171)rt_nil_check(F->l_1786)).line_));
}
F->n_1791 = rt_add(G_NV(F->n_1791), ((rt_int)1LL));
F->l_1786 = (*(P171)rt_nil_check(F->l_1786)).next_;
}
L_end_1794: ;
(*(P175)rt_nil_check((*F->c_510))).lo_ = f_mk_211(F->up, rt_g_lit("0", 1));
(*(P175)rt_nil_check((*F->c_510))).hi_ = f_mk_211(F->up, rt_g_s2g(rt_str_of_int(rt_sub(G_NV(F->n_1791), ((rt_int)1LL)))));
(*(P175)rt_nil_check((*F->c_510))).mlo_ = ((rt_int)0LL);
(*(P175)rt_nil_check((*F->c_510))).mhi_ = rt_sub(G_NV(F->n_1791), ((rt_int)1LL));
(*(P175)rt_nil_check((*F->c_510))).hasm_ = 1;
} else if (0 || sel1793 == ((rt_int)71LL)) {
f_fresh_typ_499(F->up, ((rt_int)1LL), F->name_508, &(*F->t_509));
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->d_507)).a_, F->up->ty_int_153, &F->dummy_1783, &(*(P175)rt_nil_check((*F->c_510))).lo_);
if ((G_NV((*(P119)rt_nil_check(F->dummy_1783)).kind_) != ((rt_int)1LL))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->d_507)).line_), rt_g_lit("the bounds of an integer type are integers (RM79 3.5.4)", 55));
}
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->d_507)).b_, F->up->ty_int_153, &F->dummy_1783, &(*(P175)rt_nil_check((*F->c_510))).hi_);
if ((G_NV((*(P119)rt_nil_check(F->dummy_1783)).kind_) != ((rt_int)1LL))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->d_507)).line_), rt_g_lit("the bounds of an integer type are integers (RM79 3.5.4)", 55));
}
f_manifest_473(F->up, (*(P171)rt_nil_check(F->d_507)).a_, &(*(P175)rt_nil_check((*F->c_510))).mlo_, &F->ok_1790);
(*(P175)rt_nil_check((*F->c_510))).hasm_ = G_NV(F->ok_1790);
f_manifest_473(F->up, (*(P171)rt_nil_check(F->d_507)).b_, &(*(P175)rt_nil_check((*F->c_510))).mhi_, &F->ok_1790);
(*(P175)rt_nil_check((*F->c_510))).hasm_ = (G_NV((*(P175)rt_nil_check((*F->c_510))).hasm_) && G_NV(F->ok_1790));
(*(P119)rt_nil_check((*F->t_509))).parent_ = F->up->ty_int_153;
if ((G_NV((*(P175)rt_nil_check((*F->c_510))).hasm_) && ((G_NV((*(P175)rt_nil_check((*F->c_510))).mlo_) >= rt_neg(((rt_int)2147483648LL))) && (G_NV((*(P175)rt_nil_check((*F->c_510))).mhi_) <= ((rt_int)2147483647LL))))) {
(*(P119)rt_nil_check((*F->t_509))).parent_ = F->up->ty_short_164;
}
f_inherit_503(F->up, (*(P119)rt_nil_check((*F->t_509))).parent_, (*F->t_509), G_NV((*(P171)rt_nil_check(F->d_507)).line_));
} else if (0 || sel1793 == ((rt_int)72LL)) {
f_real_type_573(F->up, F->d_507, F->name_508, &(*F->t_509), &(*F->c_510));
} else if (0 || sel1793 == ((rt_int)73LL)) {
f_array_type_518(F->up, (*(P171)rt_nil_check(F->d_507)).a_, (*(P171)rt_nil_check(F->d_507)).b_, F->name_508, G_NV((*(P171)rt_nil_check(F->d_507)).line_), &(*F->t_509), &(*F->c_510));
} else if (0 || sel1793 == ((rt_int)74LL)) {
f_fresh_typ_499(F->up, ((rt_int)7LL), F->name_508, &(*F->t_509));
F->up->disc_syms_179 = NULL;
f_record_components_554(F->up, (*(P171)rt_nil_check(F->d_507)).a_, (*F->t_509), NULL, G_NV((*(P171)rt_nil_check(F->d_507)).line_));
while ((F->up->disc_syms_179 != NULL)) {
f_remove_sym_549(F->up, F->up->disc_syms_179);
F->up->disc_syms_179 = (*(P114)rt_nil_check(F->up->disc_syms_179)).mnext_;
}
L_end_1795: ;
} else if (0 || sel1793 == ((rt_int)75LL)) {
f_fresh_typ_499(F->up, ((rt_int)8LL), F->name_508, &(*F->t_509));
(*(P119)rt_nil_check((*F->t_509))).decl_ = (*(P171)rt_nil_check(F->d_507)).a_;
if (((((G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->d_507)).a_)).kind_) == ((rt_int)80LL)) && (f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->d_507)).a_)).name_))) != NULL)) && (G_NV((*(P114)rt_nil_check(f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->d_507)).a_)).name_))))).kind_) == ((rt_int)5LL))) && ((*(P114)rt_nil_check(f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->d_507)).a_)).name_))))).t_ != NULL))) {
f_finish_ptr_575(F->up, (*F->t_509));
}
} else if (0 || sel1793 == ((rt_int)76LL)) {
f_derived_type_568(F->up, F->d_507, F->name_508, &(*F->t_509), &(*F->c_510));
} else {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->d_507)).line_), rt_g_lit("this type definition is not handled", 35));
}
}
ret_:

  return;
}

static void f_array_type_518(struct f_greenc_1fr *up_, P171 idx_512, P171 comp_513, P137 name_514, rt_int line_515, P119 *t_516, P175 *c_517) {
  struct f_array_type_518fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->idx_512 = idx_512;
F->comp_513 = comp_513;
F->name_514 = name_514;
F->line_515 = line_515;
F->t_516 = t_516;
F->c_517 = c_517;
F->l_1796 = NULL;
F->l_1796 = F->idx_512;
F->rowc_1797 = NULL;
F->ic_1798 = NULL;
F->it_1799 = NULL;
(*F->c_517) = f_new_cons_442(F->up);
f_fresh_typ_499(F->up, ((rt_int)6LL), F->name_514, &(*F->t_516));
(*(P119)rt_nil_check((*F->t_516))).dims_ = f_list_len_291(F->up, F->idx_512);
if (((*(P171)rt_nil_check(F->idx_512)).next_ == NULL)) {
f_resolve_477(F->up, F->comp_513, &(*(P119)rt_nil_check((*F->t_516))).elem_, &(*(P119)rt_nil_check((*F->t_516))).elemcons_);
} else {
if (((G_NV((*(P171)rt_nil_check(F->idx_512)).kind_) == ((rt_int)14LL)) != (G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->idx_512)).next_)).kind_) == ((rt_int)14LL)))) {
f_fail_232(F->up, F->line_515, rt_g_lit("the indexes of an array are all discrete ranges or all type marks (RM79 3.6)", 76));
}
f_array_type_518(F->up, (*(P171)rt_nil_check(F->idx_512)).next_, F->comp_513, NULL, F->line_515, &(*(P119)rt_nil_check((*F->t_516))).elem_, &F->rowc_1797);
if (((*(P175)rt_nil_check(F->rowc_1797)).lo_ != NULL)) {
(*(P119)rt_nil_check((*F->t_516))).elemcons_ = F->rowc_1797;
}
}
if ((G_NV((*(P171)rt_nil_check(F->l_1796)).kind_) == ((rt_int)14LL))) {
f_discrete_bounds_491(F->up, F->l_1796, NULL, &(*(P119)rt_nil_check((*F->t_516))).idx_, &(*(P175)rt_nil_check((*F->c_517))).lo_, &(*(P175)rt_nil_check((*F->c_517))).hi_);
f_static_range_522(F->up, (*(P171)rt_nil_check(F->l_1796)).a_, (*(P171)rt_nil_check(F->l_1796)).b_, (*F->c_517));
} else if (((G_NV((*(P171)rt_nil_check(F->l_1796)).kind_) == ((rt_int)80LL)) && (G_NV((*(P171)rt_nil_check(F->l_1796)).flag_) == ((rt_int)1LL)))) {
f_discrete_bounds_491(F->up, F->l_1796, NULL, &(*(P119)rt_nil_check((*F->t_516))).idx_, &(*(P175)rt_nil_check((*F->c_517))).lo_, &(*(P175)rt_nil_check((*F->c_517))).hi_);
} else {
f_resolve_477(F->up, F->l_1796, &(*(P119)rt_nil_check((*F->t_516))).idx_, &F->ic_1798);
if (((((G_NV((*(P119)rt_nil_check((*(P119)rt_nil_check((*F->t_516))).idx_)).kind_) == ((rt_int)4LL)) || (G_NV((*(P119)rt_nil_check((*(P119)rt_nil_check((*F->t_516))).idx_)).kind_) == ((rt_int)11LL))) || (G_NV((*(P119)rt_nil_check((*(P119)rt_nil_check((*F->t_516))).idx_)).kind_) == ((rt_int)2LL))) || (G_NV((*(P175)rt_nil_check(F->ic_1798)).hasm_) && ((rt_sub(G_NV((*(P175)rt_nil_check(F->ic_1798)).mhi_), G_NV((*(P175)rt_nil_check(F->ic_1798)).mlo_)) >= ((rt_int)0LL)) && (rt_sub(G_NV((*(P175)rt_nil_check(F->ic_1798)).mhi_), G_NV((*(P175)rt_nil_check(F->ic_1798)).mlo_)) < ((rt_int)1000000LL)))))) {
(*(P175)rt_nil_check((*F->c_517))).lo_ = (*(P175)rt_nil_check(F->ic_1798)).lo_;
(*(P175)rt_nil_check((*F->c_517))).hi_ = (*(P175)rt_nil_check(F->ic_1798)).hi_;
(*(P175)rt_nil_check((*F->c_517))).mlo_ = G_NV((*(P175)rt_nil_check(F->ic_1798)).mlo_);
(*(P175)rt_nil_check((*F->c_517))).mhi_ = G_NV((*(P175)rt_nil_check(F->ic_1798)).mhi_);
(*(P175)rt_nil_check((*F->c_517))).hasm_ = G_NV((*(P175)rt_nil_check(F->ic_1798)).hasm_);
} else if (((*(P175)rt_nil_check(F->ic_1798)).lo_ != NULL)) {
(*(P119)rt_nil_check((*F->t_516))).tcons_ = f_new_cons_442(F->up);
(*(P175)rt_nil_check((*(P119)rt_nil_check((*F->t_516))).tcons_)).lo_ = (*(P175)rt_nil_check(F->ic_1798)).lo_;
}
}
if ((!f_is_discrete_425(F->up, (*(P119)rt_nil_check((*F->t_516))).idx_))) {
f_fail_232(F->up, F->line_515, rt_g_lit("an index is of a discrete type (RM79 3.6)", 41));
}
if ((G_NV((*(P119)rt_nil_check((*F->t_516))).dims_) > ((rt_int)1LL))) {
(*(P175)rt_nil_check((*F->c_517))).inner_ = F->rowc_1797;
if ((((*(P175)rt_nil_check((*F->c_517))).lo_ == NULL) != ((*(P175)rt_nil_check(F->rowc_1797)).lo_ == NULL))) {
(*(P175)rt_nil_check((*F->c_517))).lo_ = NULL;
(*(P175)rt_nil_check((*F->c_517))).hi_ = NULL;
(*(P175)rt_nil_check((*F->c_517))).inner_ = NULL;
(*(P119)rt_nil_check((*F->t_516))).elemcons_ = NULL;
}
}
if (((*(P175)rt_nil_check((*F->c_517))).lo_ != NULL)) {
(*(P119)rt_nil_check((*F->t_516))).tcons_ = (*F->c_517);
}
ret_:

  return;
}

static void f_static_range_522(struct f_greenc_1fr *up_, P171 l_519, P171 h_520, P175 c_521) {
  struct f_static_range_522fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_519 = l_519;
F->h_520 = h_520;
F->c_521 = c_521;
F->ok_1800 = INT_MIN;
F->ok2_1801 = INT_MIN;
f_manifest_473(F->up, F->l_519, &(*(P175)rt_nil_check(F->c_521)).mlo_, &F->ok_1800);
f_manifest_473(F->up, F->h_520, &(*(P175)rt_nil_check(F->c_521)).mhi_, &F->ok2_1801);
if ((f_is_char_lit_720(F->up, F->l_519) && f_is_char_lit_720(F->up, F->h_520))) {
(*(P175)rt_nil_check(F->c_521)).mlo_ = rt_sub(((rt_int)(G_NV(({ rt_gstr ix1802 = (*(P137)rt_nil_check((*(P171)rt_nil_check(F->l_519)).name_)); ix1802.p[rt_index(((rt_int)1LL), ix1802.lo, ix1802.hi) - ix1802.lo]; }))) + 1), ((rt_int)1LL));
(*(P175)rt_nil_check(F->c_521)).mhi_ = rt_sub(((rt_int)(G_NV(({ rt_gstr ix1803 = (*(P137)rt_nil_check((*(P171)rt_nil_check(F->h_520)).name_)); ix1803.p[rt_index(((rt_int)1LL), ix1803.lo, ix1803.hi) - ix1803.lo]; }))) + 1), ((rt_int)1LL));
F->ok_1800 = 1;
F->ok2_1801 = 1;
}
(*(P175)rt_nil_check(F->c_521)).hasm_ = (G_NV(F->ok_1800) && G_NV(F->ok2_1801));
ret_:

  return;
}

static void f_component_place_528(struct f_greenc_1fr *up_, P119 rt_523, P1710 f_524, rt_gstr a_525, rt_gstr ct_526, P137 *r_527) {
  struct f_component_place_528fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->rt_523 = rt_523;
F->f_524 = f_524;
F->a_525 = cp_rt_gstr(a_525);
F->ct_526 = cp_rt_gstr(ct_526);
F->r_527 = r_527;
F->bits_1804 = NULL;
if (eq_rt_gstr(F->a_525, rt_g_lit("POSITION", 8))) {
(*F->r_527) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)offsetof(", 18), F->ct_526), rt_g_lit(", ", 2)), f_c_field_228(F->up, (*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_524)).name_)))), rt_g_lit("))", 2)));
} else if (eq_rt_gstr(F->a_525, rt_g_lit("FIRST_BIT", 9))) {
(*F->r_527) = f_mk_211(F->up, rt_g_lit("((rt_int)0)", 11));
} else {
(*F->r_527) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(sizeof(((", 19), F->ct_526), rt_g_lit(" *)0)->", 7)), f_c_field_228(F->up, (*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_524)).name_)))), rt_g_lit(") * 8 - 1))", 11)));
}
ret_:

  return;
}

static rt_gstr f_no_value_530(struct f_greenc_1fr *up_, P119 t_529) {
  struct f_no_value_530fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_529 = t_529;
if (((G_NV((*(P119)rt_nil_check(F->t_529)).kind_) == ((rt_int)3LL)) || (G_NV((*(P119)rt_nil_check(F->t_529)).kind_) == ((rt_int)16LL)))) {
F->result_ = rt_g_lit("RT_G_NOVALUE_F", 14);
goto ret_;
} else if ((G_NV((*(P119)rt_nil_check(F->t_529)).kind_) == ((rt_int)1LL))) {
F->result_ = rt_g_lit("INT64_MIN", 9);
goto ret_;
}
F->result_ = rt_g_lit("INT_MIN", 7);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_elem_ctype_533(struct f_greenc_1fr *up_, P119 t_531, P137 *r_532) {
  struct f_elem_ctype_533fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_531 = t_531;
F->r_532 = r_532;
if ((G_NV((*(P119)rt_nil_check(F->t_531)).kind_) == ((rt_int)11LL))) {
(*F->r_532) = f_mk_211(F->up, rt_g_lit("unsigned char", 13));
} else {
f_ctype_461(F->up, F->t_531, &(*F->r_532));
}
ret_:

  return;
}

static void f_first_index_536(struct f_greenc_1fr *up_, P119 t_534, P137 *r_535) {
  struct f_first_index_536fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_534 = t_534;
F->r_535 = r_535;
if ((((*(P119)rt_nil_check(F->t_534)).tcons_ != NULL) && ((*(P175)rt_nil_check((*(P119)rt_nil_check(F->t_534)).tcons_)).lo_ != NULL))) {
(*F->r_535) = (*(P175)rt_nil_check((*(P119)rt_nil_check(F->t_534)).tcons_)).lo_;
} else if ((((*(P119)rt_nil_check(F->t_534)).idx_ != NULL) && (G_NV((*(P119)rt_nil_check((*(P119)rt_nil_check(F->t_534)).idx_)).kind_) == ((rt_int)1LL)))) {
(*F->r_535) = f_mk_211(F->up, rt_g_lit("1", 1));
} else {
(*F->r_535) = f_mk_211(F->up, rt_g_lit("0", 1));
}
ret_:

  return;
}

static int f_is_string_538(struct f_greenc_1fr *up_, P119 t_537) {
  struct f_is_string_538fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_537 = t_537;
if ((!(F->t_537 != NULL))) {
F->result_ = 0;
goto ret_;
}
if ((!(G_NV((*(P119)rt_nil_check(F->t_537)).kind_) == ((rt_int)6LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_derived_from_421(F->up, F->t_537, F->up->ty_string_157);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_subst_541(struct f_greenc_1fr *up_, rt_gstr s_539, rt_gstr r_540) {
  struct f_subst_541fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_539 = cp_rt_gstr(s_539);
F->r_540 = cp_rt_gstr(r_540);
{ rt_int lo1809 = ({ rt_gstr at1806 = F->s_539; at1806.lo; }), hi1810 = rt_sub(({ rt_gstr at1807 = F->s_539; at1807.hi; }), ((rt_int)1LL));
for (rt_int it1811 = lo1809; it1811 <= hi1810; it1811++) {
F->i_1808 = it1811;
if (((G_NV(({ rt_gstr ix1812 = F->s_539; ix1812.p[rt_index(F->i_1808, ix1812.lo, ix1812.hi) - ix1812.lo]; })) == 64) && (G_NV(({ rt_gstr ix1813 = F->s_539; ix1813.p[rt_index(rt_add(F->i_1808, ((rt_int)1LL)), ix1813.lo, ix1813.hi) - ix1813.lo]; })) == 64))) {
F->result_ = cat_rt_gstr(cat_rt_gstr(({ rt_gstr sl1815 = F->s_539; rt_int l_ = ({ rt_gstr at1814 = F->s_539; at1814.lo; }), h_ = rt_sub(F->i_1808, ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl1815.lo, sl1815.hi); rt_index(h_, sl1815.lo, sl1815.hi); } sl1815.p += l_ - sl1815.lo; sl1815.lo = l_; sl1815.hi = h_; sl1815; }), F->r_540), f_subst_541(F->up, ({ rt_gstr sl1819 = F->s_539; rt_int l_ = rt_add(F->i_1808, ((rt_int)2LL)), h_ = ({ rt_gstr at1818 = F->s_539; at1818.hi; }); if (l_ <= h_) { rt_index(l_, sl1819.lo, sl1819.hi); rt_index(h_, sl1819.lo, sl1819.hi); } sl1819.p += l_ - sl1819.lo; sl1819.lo = l_; sl1819.hi = h_; sl1819; }), F->r_540));
goto ret_;
}
}
}
L_end_1805: ;
F->result_ = F->s_539;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_mentions_record_543(struct f_greenc_1fr *up_, P137 s_542) {
  struct f_mentions_record_543fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_542 = s_542;
if ((F->s_542 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1823 = ((rt_int)1LL), hi1824 = rt_sub(({ rt_gstr at1821 = (*(P137)rt_nil_check(F->s_542)); at1821.hi >= at1821.lo ? at1821.hi - at1821.lo + 1 : (rt_int)0; }), ((rt_int)1LL));
for (rt_int it1825 = lo1823; it1825 <= hi1824; it1825++) {
F->i_1822 = it1825;
if (((G_NV(({ rt_gstr ix1826 = (*(P137)rt_nil_check(F->s_542)); ix1826.p[rt_index(F->i_1822, ix1826.lo, ix1826.hi) - ix1826.lo]; })) == 64) && (G_NV(({ rt_gstr ix1827 = (*(P137)rt_nil_check(F->s_542)); ix1827.p[rt_index(rt_add(F->i_1822, ((rt_int)1LL)), ix1827.lo, ix1827.hi) - ix1827.lo]; })) == 64))) {
F->result_ = 1;
goto ret_;
}
}
}
L_end_1820: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_subst_cons_547(struct f_greenc_1fr *up_, P175 c_544, rt_gstr r_545, P175 *res_546) {
  struct f_subst_cons_547fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_544 = c_544;
F->r_545 = cp_rt_gstr(r_545);
F->res_546 = res_546;
if (((F->c_544 == NULL) || (!(f_mentions_record_543(F->up, (*(P175)rt_nil_check(F->c_544)).lo_) || f_mentions_record_543(F->up, (*(P175)rt_nil_check(F->c_544)).hi_))))) {
(*F->res_546) = F->c_544;
goto ret_;
}
(*F->res_546) = f_new_cons_442(F->up);
as_R176(&(*(P175)rt_nil_check((*F->res_546))), (*(P175)rt_nil_check(F->c_544)));
(*(P175)rt_nil_check((*F->res_546))).lo_ = f_mk_211(F->up, f_subst_541(F->up, (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_544)).lo_)), F->r_545));
(*(P175)rt_nil_check((*F->res_546))).hi_ = f_mk_211(F->up, f_subst_541(F->up, (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_544)).hi_)), F->r_545));
ret_:

  return;
}

static void f_remove_sym_549(struct f_greenc_1fr *up_, P114 y_548) {
  struct f_remove_sym_549fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_548 = y_548;
F->h_1828 = INT64_MIN;
F->h_1828 = f_hash_394(F->up, (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_548)).name_)));
F->p_1829 = NULL;
if ((({ A113 ix1830 = F->up->table_116; ix1830.p[rt_index(G_NV(F->h_1828), ix1830.lo, ix1830.hi) - ix1830.lo]; }) == F->y_548)) {
(*({ A113 *ix1831 = &(F->up->table_116); &ix1831->p[rt_index(G_NV(F->h_1828), ix1831->lo, ix1831->hi) - ix1831->lo]; })) = (*(P114)rt_nil_check(F->y_548)).chain_;
} else {
F->p_1829 = ({ A113 ix1832 = F->up->table_116; ix1832.p[rt_index(G_NV(F->h_1828), ix1832.lo, ix1832.hi) - ix1832.lo]; });
while (((F->p_1829 != NULL) && ((*(P114)rt_nil_check(F->p_1829)).chain_ != F->y_548))) {
F->p_1829 = (*(P114)rt_nil_check(F->p_1829)).chain_;
}
L_end_1833: ;
if ((F->p_1829 != NULL)) {
(*(P114)rt_nil_check(F->p_1829)).chain_ = (*(P114)rt_nil_check(F->y_548)).chain_;
}
}
if ((F->up->scope_stack_118 == F->y_548)) {
F->up->scope_stack_118 = (*(P114)rt_nil_check(F->y_548)).stack_;
} else {
F->p_1829 = F->up->scope_stack_118;
while (((F->p_1829 != NULL) && ((*(P114)rt_nil_check(F->p_1829)).stack_ != F->y_548))) {
F->p_1829 = (*(P114)rt_nil_check(F->p_1829)).stack_;
}
L_end_1834: ;
if ((F->p_1829 != NULL)) {
(*(P114)rt_nil_check(F->p_1829)).stack_ = (*(P114)rt_nil_check(F->y_548)).stack_;
}
}
ret_:

  return;
}

static void f_record_components_554(struct f_greenc_1fr *up_, P171 list_550, P119 t_551, P1835 g_552, rt_int line_553) {
  struct f_record_components_554fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->list_550 = list_550;
F->t_551 = t_551;
F->g_552 = g_552;
F->line_553 = line_553;
F->comp_1837 = NULL;
F->comp_1837 = F->list_550;
F->f_1838 = NULL;
F->tail_1839 = NULL;
F->df_1840 = NULL;
F->prev_1841 = NULL;
F->pt_1842 = NULL;
F->vt_1843 = NULL;
F->pc_1844 = NULL;
F->y_1845 = NULL;
F->acc_1846 = NULL;
F->v_1847 = NULL;
F->x_1848 = NULL;
F->arm_1849 = NULL;
F->g2_1850 = NULL;
F->tail_1839 = (*(P119)rt_nil_check(F->t_551)).fields_;
while (((F->tail_1839 != NULL) && ((*(P1710)rt_nil_check(F->tail_1839)).next_ != NULL))) {
F->tail_1839 = (*(P1710)rt_nil_check(F->tail_1839)).next_;
}
L_end_1851: ;
while ((F->comp_1837 != NULL)) {
if ((G_NV((*(P171)rt_nil_check(F->comp_1837)).kind_) == ((rt_int)23LL))) {
F->df_1840 = (*(P119)rt_nil_check(F->t_551)).fields_;
while (((F->df_1840 != NULL) && (!eq_rt_gstr((*(P137)rt_nil_check((*(P1710)rt_nil_check(F->df_1840)).name_)), (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->comp_1837)).a_)).name_)))))) {
F->df_1840 = (*(P1710)rt_nil_check(F->df_1840)).next_;
}
L_end_1853: ;
if (((F->df_1840 == NULL) || (!G_NV((*(P1710)rt_nil_check(F->df_1840)).is_discr_)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->comp_1837)).line_), cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->comp_1837)).a_)).name_)), rt_g_lit(" is not a discriminant: a constant component ", 45)), rt_g_lit("without a value (RM79 3.7.1)", 28)));
}
if ((!f_is_discrete_425(F->up, (*(P1710)rt_nil_check(F->df_1840)).t_))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->comp_1837)).line_), rt_g_lit("the discriminant of a variant part is of a discrete type (RM79 3.7.2)", 69));
}
F->arm_1849 = (*(P171)rt_nil_check(F->comp_1837)).b_;
while ((F->arm_1849 != NULL)) {
F->g2_1850 = ({ R1836 *cell1855 = rt_alloc(sizeof(R1836)); *cell1855 = cp_R1836(({ R1836 ag1856; ag1856.disc_ = (*(P1710)rt_nil_check(F->df_1840)).name_; ag1856.arm_ = F->arm_1849; ag1856.variant_ = F->comp_1837; ag1856.next_ = F->g_552; ag1856; })); (P1835)cell1855; });
f_record_components_554(F->up, (*(P171)rt_nil_check(F->arm_1849)).b_, F->t_551, F->g2_1850, F->line_553);
F->arm_1849 = (*(P171)rt_nil_check(F->arm_1849)).next_;
}
L_end_1854: ;
F->tail_1839 = (*(P119)rt_nil_check(F->t_551)).fields_;
while (((F->tail_1839 != NULL) && ((*(P1710)rt_nil_check(F->tail_1839)).next_ != NULL))) {
F->tail_1839 = (*(P1710)rt_nil_check(F->tail_1839)).next_;
}
L_end_1857: ;
} else {
if ((f_field_index_910(F->up, F->t_551, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->comp_1837)).name_))) != ((rt_int)0LL))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->comp_1837)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("component ", 10), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->comp_1837)).name_))), rt_g_lit(" is declared twice (RM79 3.7)", 29)));
}
F->f_1838 = ({ R1711 *cell1858 = rt_alloc(sizeof(R1711)); *cell1858 = cp_R1711(({ R1711 ag1859; ag1859.name_ = (*(P171)rt_nil_check(F->comp_1837)).name_; ag1859.t_ = NULL; ag1859.c_ = NULL; ag1859.next_ = NULL; ag1859.dflt_ = (*(P171)rt_nil_check(F->comp_1837)).b_; ag1859.is_const_ = (G_NV((*(P171)rt_nil_check(F->comp_1837)).flag_) == ((rt_int)1LL)); ag1859.is_discr_ = 0; ag1859.dsym_ = NULL; ag1859.guard_ = F->g_552; ag1859.cond_ = NULL; ag1859.dyn_ = 0; ag1859; })); (P1710)cell1858; });
if ((((*(P171)rt_nil_check(F->comp_1837)).a_ == F->prev_1841) && (G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->comp_1837)).a_)).kind_) != ((rt_int)80LL)))) {
(*(P1710)rt_nil_check(F->f_1838)).t_ = F->pt_1842;
(*(P1710)rt_nil_check(F->f_1838)).c_ = F->pc_1844;
} else {
f_resolve_477(F->up, (*(P171)rt_nil_check(F->comp_1837)).a_, &(*(P1710)rt_nil_check(F->f_1838)).t_, &(*(P1710)rt_nil_check(F->f_1838)).c_);
}
F->prev_1841 = (*(P171)rt_nil_check(F->comp_1837)).a_;
F->pt_1842 = (*(P1710)rt_nil_check(F->f_1838)).t_;
F->pc_1844 = (*(P1710)rt_nil_check(F->f_1838)).c_;
if ((((*(P1710)rt_nil_check(F->f_1838)).c_ != NULL) && (f_mentions_record_543(F->up, (*(P175)rt_nil_check((*(P1710)rt_nil_check(F->f_1838)).c_)).lo_) || f_mentions_record_543(F->up, (*(P175)rt_nil_check((*(P1710)rt_nil_check(F->f_1838)).c_)).hi_)))) {
(*(P1710)rt_nil_check(F->f_1838)).dyn_ = 1;
if ((G_NV((*(P119)rt_nil_check((*(P1710)rt_nil_check(F->f_1838)).t_)).kind_) != ((rt_int)6LL))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->comp_1837)).line_), rt_g_lit("a discriminant is used only as an array bound or a variant selector (RM79 3.7.1)", 80));
}
if (((*(P119)rt_nil_check((*(P1710)rt_nil_check(F->f_1838)).t_)).tcons_ == (*(P1710)rt_nil_check(F->f_1838)).c_)) {
(*(P119)rt_nil_check((*(P1710)rt_nil_check(F->f_1838)).t_)).tcons_ = NULL;
}
}
if ((F->g_552 != NULL)) {
f_guard_cond_558(F->up, F->g_552, (*(P1710)rt_nil_check(F->f_1838)).t_, &F->x_1848);
(*(P1710)rt_nil_check(F->f_1838)).cond_ = F->x_1848;
}
if (((*(P171)rt_nil_check(F->comp_1837)).b_ != NULL)) {
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->comp_1837)).b_, (*(P1710)rt_nil_check(F->f_1838)).t_, &F->vt_1843, &F->v_1847);
f_check_type_456(F->up, F->vt_1843, (*(P1710)rt_nil_check(F->f_1838)).t_, G_NV((*(P171)rt_nil_check(F->comp_1837)).line_));
F->y_1845 = f_new_sym_439(F->up, ((rt_int)2LL), f_mk_211(F->up, rt_g_lit("dflt", 4)));
f_storage_606(F->up, rt_g_lit("dflt", 4), (*(P1710)rt_nil_check(F->f_1838)).t_, &F->acc_1846);
(*(P114)rt_nil_check(F->y_1845)).t_ = (*(P1710)rt_nil_check(F->f_1838)).t_;
(*(P114)rt_nil_check(F->y_1845)).c_ = (*(P1710)rt_nil_check(F->f_1838)).c_;
f_bind_609(F->up, F->y_1845, F->acc_1846);
if ((f_composite_581(F->up, (*(P1710)rt_nil_check(F->f_1838)).t_) && (!f_bounded_444(F->up, (*(P1710)rt_nil_check(F->f_1838)).c_)))) {
f_copy_code_591(F->up, (*(P1710)rt_nil_check(F->f_1838)).t_, (*(P137)rt_nil_check(F->v_1847)), &F->x_1848);
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->acc_1846)), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->x_1848))), one_rt_gstr(59)));
} else {
f_init_storage_579(F->up, (*(P137)rt_nil_check(F->acc_1846)), (*(P1710)rt_nil_check(F->f_1838)).t_, (*(P1710)rt_nil_check(F->f_1838)).c_);
f_assign_code_587(F->up, (*(P137)rt_nil_check(F->acc_1846)), (*(P1710)rt_nil_check(F->f_1838)).t_, (*(P137)rt_nil_check(F->v_1847)), (*(P1710)rt_nil_check(F->f_1838)).c_, &F->x_1848);
f_emit_238(F->up, (*(P137)rt_nil_check(F->x_1848)));
}
(*(P1710)rt_nil_check(F->f_1838)).dsym_ = F->y_1845;
} else if (G_NV((*(P1710)rt_nil_check(F->f_1838)).is_const_)) {
(*(P1710)rt_nil_check(F->f_1838)).is_discr_ = 1;
F->y_1845 = f_new_sym_439(F->up, ((rt_int)2LL), (*(P1710)rt_nil_check(F->f_1838)).name_);
(*(P114)rt_nil_check(F->y_1845)).t_ = (*(P1710)rt_nil_check(F->f_1838)).t_;
(*(P114)rt_nil_check(F->y_1845)).c_ = (*(P1710)rt_nil_check(F->f_1838)).c_;
(*(P114)rt_nil_check(F->y_1845)).ro_ = 1;
(*(P114)rt_nil_check(F->y_1845)).access_path_ = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(@@.", 4), f_c_field_228(F->up, (*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_1838)).name_)))), one_rt_gstr(41)));
F->up->depth_117 = rt_add(G_NV(F->up->depth_117), ((rt_int)1LL));
f_define_434(F->up, F->y_1845, G_NV((*(P171)rt_nil_check(F->comp_1837)).line_));
F->up->depth_117 = rt_sub(G_NV(F->up->depth_117), ((rt_int)1LL));
(*(P114)rt_nil_check(F->y_1845)).mnext_ = F->up->disc_syms_179;
F->up->disc_syms_179 = F->y_1845;
}
if ((F->tail_1839 == NULL)) {
(*(P119)rt_nil_check(F->t_551)).fields_ = F->f_1838;
} else {
(*(P1710)rt_nil_check(F->tail_1839)).next_ = F->f_1838;
}
F->tail_1839 = F->f_1838;
}
F->comp_1837 = (*(P171)rt_nil_check(F->comp_1837)).next_;
}
L_end_1852: ;
ret_:

  return;
}

static void f_guard_cond_558(struct f_greenc_1fr *up_, P1835 g_555, P119 t_556, P137 *r_557) {
  struct f_guard_cond_558fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->g_555 = g_555;
F->t_556 = t_556;
F->r_557 = r_557;
F->a_1860 = NULL;
F->l_1861 = NULL;
F->df_1862 = NULL;
F->x_1863 = NULL;
F->d_1864 = NULL;
F->dt_1865 = NULL;
F->vt_1866 = NULL;
F->lo_1867 = NULL;
F->hi_1868 = NULL;
(*F->r_557) = f_mk_211(F->up, rt_g_lit("1", 1));
if ((F->g_555 == NULL)) {
goto ret_;
}
F->d_1864 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(@@.", 4), f_c_field_228(F->up, (*(P137)rt_nil_check((*(P1835)rt_nil_check(F->g_555)).disc_)))), one_rt_gstr(41)));
F->df_1862 = NULL;
if ((G_NV((*(P171)rt_nil_check((*(P1835)rt_nil_check(F->g_555)).arm_)).flag_) == ((rt_int)1LL))) {
F->x_1863 = f_mk_211(F->up, rt_g_lit("0", 1));
F->a_1860 = (*(P171)rt_nil_check((*(P1835)rt_nil_check(F->g_555)).variant_)).b_;
while ((F->a_1860 != NULL)) {
if ((F->a_1860 != (*(P1835)rt_nil_check(F->g_555)).arm_)) {
f_arm_test_563(F->up, F->a_1860, (*(P1835)rt_nil_check(F->g_555)).disc_, (*(P137)rt_nil_check(F->d_1864)), &F->x_1863);
}
F->a_1860 = (*(P171)rt_nil_check(F->a_1860)).next_;
}
L_end_1869: ;
F->x_1863 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("!(", 2), (*(P137)rt_nil_check(F->x_1863))), one_rt_gstr(41)));
} else {
F->x_1863 = f_mk_211(F->up, rt_g_lit("0", 1));
f_arm_test_563(F->up, (*(P1835)rt_nil_check(F->g_555)).arm_, (*(P1835)rt_nil_check(F->g_555)).disc_, (*(P137)rt_nil_check(F->d_1864)), &F->x_1863);
}
f_guard_cond_558(F->up, (*(P1835)rt_nil_check(F->g_555)).next_, F->t_556, &(*F->r_557));
(*F->r_557) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check((*F->r_557)))), rt_g_lit(" && (", 5)), (*(P137)rt_nil_check(F->x_1863))), rt_g_lit("))", 2)));
ret_:

  return;
}

static void f_arm_test_563(struct f_greenc_1fr *up_, P171 arm_559, P137 dname_560, rt_gstr d_561, P137 *x_562) {
  struct f_arm_test_563fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->arm_559 = arm_559;
F->dname_560 = dname_560;
F->d_561 = cp_rt_gstr(d_561);
F->x_562 = x_562;
F->l_1870 = NULL;
F->l_1870 = (*(P171)rt_nil_check(F->arm_559)).a_;
F->y_1871 = NULL;
F->y_1871 = f_lookup_396(F->up, (*(P137)rt_nil_check(F->dname_560)));
F->dt_1872 = NULL;
F->vt_1873 = NULL;
F->lo_1874 = NULL;
F->hi_1875 = NULL;
F->dt_1872 = (*(P114)rt_nil_check(F->y_1871)).t_;
while ((F->l_1870 != NULL)) {
if (((*(P171)rt_nil_check(F->l_1870)).b_ == NULL)) {
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->l_1870)).a_, F->dt_1872, &F->vt_1873, &F->lo_1874);
f_check_type_456(F->up, F->vt_1873, F->dt_1872, G_NV((*(P171)rt_nil_check(F->l_1870)).line_));
(*F->x_562) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check((*F->x_562))), rt_g_lit(" || ", 4)), F->d_561), rt_g_lit(" == ", 4)), (*(P137)rt_nil_check(F->lo_1874))));
} else {
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->l_1870)).a_, F->dt_1872, &F->vt_1873, &F->lo_1874);
f_check_type_456(F->up, F->vt_1873, F->dt_1872, G_NV((*(P171)rt_nil_check(F->l_1870)).line_));
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->l_1870)).b_, F->dt_1872, &F->vt_1873, &F->hi_1875);
f_check_type_456(F->up, F->vt_1873, F->dt_1872, G_NV((*(P171)rt_nil_check(F->l_1870)).line_));
(*F->x_562) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check((*F->x_562))), rt_g_lit(" || (", 5)), F->d_561), rt_g_lit(" >= ", 4)), (*(P137)rt_nil_check(F->lo_1874))), rt_g_lit(" && ", 4)), F->d_561), rt_g_lit(" <= ", 4)), (*(P137)rt_nil_check(F->hi_1875))), one_rt_gstr(41)));
}
F->l_1870 = (*(P171)rt_nil_check(F->l_1870)).next_;
}
L_end_1876: ;
ret_:

  return;
}

static void f_derived_type_568(struct f_greenc_1fr *up_, P171 d_564, P137 name_565, P119 *t_566, P175 *c_567) {
  struct f_derived_type_568fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_564 = d_564;
F->name_565 = name_565;
F->t_566 = t_566;
F->c_567 = c_567;
F->pt_1877 = NULL;
F->ct_1878 = NULL;
F->ph_1879 = NULL;
F->ph_1879 = F->up->completing_170;
F->up->completing_170 = NULL;
f_resolve_477(F->up, (*(P171)rt_nil_check(F->d_564)).a_, &F->pt_1877, &(*F->c_567));
if (((G_NV((*(P119)rt_nil_check(F->pt_1877)).kind_) == ((rt_int)9LL)) && G_NV((*(P119)rt_nil_check(F->pt_1877)).priv_))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->d_564)).line_), rt_g_lit("a type cannot be derived from a private type before its full declaration", 72));
}
if ((f_composite_581(F->up, F->pt_1877) || (G_NV((*(P119)rt_nil_check(F->pt_1877)).kind_) == ((rt_int)8LL)))) {
f_ctype_461(F->up, F->pt_1877, &F->ct_1878);
}
if ((F->ph_1879 == NULL)) {
(*F->t_566) = f_new_typ_441(F->up, G_NV((*(P119)rt_nil_check(F->pt_1877)).kind_));
} else {
(*F->t_566) = F->ph_1879;
}
as_R120(&(*(P119)rt_nil_check((*F->t_566))), (*(P119)rt_nil_check(F->pt_1877)));
(*(P119)rt_nil_check((*F->t_566))).name_ = F->name_565;
(*(P119)rt_nil_check((*F->t_566))).parent_ = F->pt_1877;
(*(P119)rt_nil_check((*F->t_566))).next_ = NULL;
if ((G_NV((*(P119)rt_nil_check((*F->t_566))).kind_) == ((rt_int)4LL))) {
f_derive_literals_506(F->up, (*F->t_566), G_NV((*(P171)rt_nil_check(F->d_564)).line_));
}
f_inherit_503(F->up, F->pt_1877, (*F->t_566), G_NV((*(P171)rt_nil_check(F->d_564)).line_));
ret_:

  return;
}

static void f_real_type_573(struct f_greenc_1fr *up_, P171 d_569, P137 name_570, P119 *t_571, P175 *c_572) {
  struct f_real_type_573fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_569 = d_569;
F->name_570 = name_570;
F->t_571 = t_571;
F->c_572 = c_572;
F->dt_1880 = NULL;
F->dv_1881 = NULL;
F->n_1882 = INT64_MIN;
F->ok_1883 = INT_MIN;
(*F->c_572) = f_new_cons_442(F->up);
if ((G_NV((*(P171)rt_nil_check(F->d_569)).flag_) == ((rt_int)1LL))) {
f_manifest_473(F->up, (*(P171)rt_nil_check(F->d_569)).a_, &F->n_1882, &F->ok_1883);
if ((!G_NV(F->ok_1883))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->d_569)).line_), rt_g_lit("the digits of a floating point type are static (RM79 3.5.5)", 59));
}
if (((G_NV(F->n_1882) < ((rt_int)1LL)) || (G_NV(F->n_1882) > ((rt_int)15LL)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->d_569)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("no predefined floating point type has ", 38), rt_g_s2g(rt_str_of_int(G_NV(F->n_1882)))), rt_g_lit(" digits", 7)));
}
f_fresh_typ_499(F->up, ((rt_int)3LL), F->name_570, &(*F->t_571));
(*(P119)rt_nil_check((*F->t_571))).ndigits_ = G_NV(F->n_1882);
if ((G_NV(F->n_1882) <= ((rt_int)6LL))) {
(*(P119)rt_nil_check((*F->t_571))).parent_ = F->up->ty_sfloat_166;
} else {
(*(P119)rt_nil_check((*F->t_571))).parent_ = F->up->ty_float_155;
}
} else {
if (((*(P171)rt_nil_check(F->d_569)).b_ == NULL)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->d_569)).line_), rt_g_lit("a fixed point type needs a range (RM79 3.5.5)", 45));
}
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->d_569)).a_, F->up->ty_float_155, &F->dt_1880, &F->dv_1881);
if ((G_NV((*(P119)rt_nil_check(F->dt_1880)).kind_) != ((rt_int)3LL))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->d_569)).line_), rt_g_lit("the delta of a fixed point type is a real number (RM79 3.5.5)", 61));
}
f_fresh_typ_499(F->up, ((rt_int)16LL), F->name_570, &(*F->t_571));
(*(P119)rt_nil_check((*F->t_571))).fdelta_ = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check(F->dv_1881))), one_rt_gstr(41)));
(*(P119)rt_nil_check((*F->t_571))).fsmall_ = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_small(", 11), (*(P137)rt_nil_check(F->dv_1881))), one_rt_gstr(41)));
}
if (((*(P171)rt_nil_check(F->d_569)).b_ != NULL)) {
f_range_of_495(F->up, (*(P171)rt_nil_check(F->d_569)).b_, (*F->t_571), (*F->c_572));
}
if (((*(P119)rt_nil_check((*F->t_571))).parent_ != NULL)) {
f_inherit_503(F->up, (*(P119)rt_nil_check((*F->t_571))).parent_, (*F->t_571), G_NV((*(P171)rt_nil_check(F->d_569)).line_));
}
ret_:

  return;
}

static void f_finish_ptr_575(struct f_greenc_1fr *up_, P119 t_574) {
  struct f_finish_ptr_575fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_574 = t_574;
F->c_1884 = NULL;
if ((((*(P119)rt_nil_check(F->t_574)).target_ == NULL) && ((*(P119)rt_nil_check(F->t_574)).decl_ != NULL))) {
f_resolve_477(F->up, (*(P119)rt_nil_check(F->t_574)).decl_, &(*(P119)rt_nil_check(F->t_574)).target_, &F->c_1884);
if ((((*(P119)rt_nil_check(F->t_574)).target_ != NULL) && (G_NV((*(P119)rt_nil_check((*(P119)rt_nil_check(F->t_574)).target_)).kind_) == ((rt_int)8LL)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check((*(P119)rt_nil_check(F->t_574)).decl_)).line_), rt_g_lit("an access type cannot designate another access type (RM79 3.8)", 62));
}
}
ret_:

  return;
}

static void f_init_storage_579(struct f_greenc_1fr *up_, rt_gstr lval_576, P119 t_577, P175 c_578) {
  struct f_init_storage_579fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lval_576 = cp_rt_gstr(lval_576);
F->t_577 = t_577;
F->c_578 = c_578;
F->ec_1885 = NULL;
F->fc_1886 = NULL;
F->d_1887 = NULL;
F->ct_1888 = NULL;
F->i_1889 = NULL;
F->v_1890 = NULL;
F->x_1891 = NULL;
F->vt_1892 = NULL;
F->f_1893 = NULL;
if ((G_NV((*(P119)rt_nil_check(F->t_577)).kind_) == ((rt_int)8LL))) {
f_emit_238(F->up, cat_rt_gstr(F->lval_576, rt_g_lit(" = NULL;", 8)));
} else if ((f_is_numeric_423(F->up, F->t_577) || f_is_discrete_425(F->up, F->t_577))) {
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_576, rt_g_lit(" = ", 3)), f_no_value_530(F->up, F->t_577)), one_rt_gstr(59)));
} else if ((G_NV((*(P119)rt_nil_check(F->t_577)).kind_) == ((rt_int)6LL))) {
if (((F->c_578 == NULL) || ((*(P175)rt_nil_check(F->c_578)).lo_ == NULL))) {
f_fail_232(F->up, ((rt_int)0LL), rt_g_lit("an array object needs an index constraint (RM79 3.6)", 52));
}
f_elem_ctype_533(F->up, (*(P119)rt_nil_check(F->t_577)).elem_, &F->ct_1888);
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_576, rt_g_lit(".lo = ", 6)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_578)).lo_))), rt_g_lit("; ", 2)), F->lval_576), rt_g_lit(".hi = ", 6)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_578)).hi_))), one_rt_gstr(59)));
F->ec_1885 = (*(P119)rt_nil_check(F->t_577)).elemcons_;
if (((G_NV((*(P119)rt_nil_check(F->t_577)).dims_) > ((rt_int)1LL)) && f_bounded_444(F->up, (*(P175)rt_nil_check(F->c_578)).inner_))) {
F->ec_1885 = (*(P175)rt_nil_check(F->c_578)).inner_;
}
if (((G_NV((*(P119)rt_nil_check(F->t_577)).dims_) > ((rt_int)1LL)) && f_bounded_444(F->up, F->ec_1885))) {
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_576, rt_g_lit(".lo2 = ", 7)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->ec_1885)).lo_))), rt_g_lit("; ", 2)), F->lval_576), rt_g_lit(".hi2 = ", 7)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->ec_1885)).hi_))), one_rt_gstr(59)));
} else {
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_576, rt_g_lit(".lo2 = 1; ", 10)), F->lval_576), rt_g_lit(".hi2 = 1;", 9)));
}
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_576, rt_g_lit(".p = rt_alloc(sizeof(", 21)), (*(P137)rt_nil_check(F->ct_1888))), rt_g_lit(") * (size_t)G_CNT(", 18)), F->lval_576), rt_g_lit("));", 3)));
if ((f_is_numeric_423(F->up, (*(P119)rt_nil_check(F->t_577)).elem_) || f_is_discrete_425(F->up, (*(P119)rt_nil_check(F->t_577)).elem_))) {
f_new_name_214(F->up, rt_g_lit("i", 1), &F->i_1889);
if ((G_NV((*(P119)rt_nil_check((*(P119)rt_nil_check(F->t_577)).elem_)).kind_) == ((rt_int)11LL))) {
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("memset(", 7), F->lval_576), rt_g_lit(".p, 0xFF, (size_t)G_CNT(", 24)), F->lval_576), rt_g_lit("));", 3)));
} else {
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P137)rt_nil_check(F->i_1889))), rt_g_lit(" = 0; ", 6)), (*(P137)rt_nil_check(F->i_1889))), rt_g_lit(" < G_CNT(", 9)), F->lval_576), rt_g_lit("); ", 3)), (*(P137)rt_nil_check(F->i_1889))), rt_g_lit("++) ", 4)), F->lval_576), rt_g_lit(".p[", 3)), (*(P137)rt_nil_check(F->i_1889))), rt_g_lit("] = ", 4)), f_no_value_530(F->up, (*(P119)rt_nil_check(F->t_577)).elem_)), one_rt_gstr(59)));
}
} else if (((G_NV((*(P119)rt_nil_check((*(P119)rt_nil_check(F->t_577)).elem_)).kind_) == ((rt_int)6LL)) || (G_NV((*(P119)rt_nil_check((*(P119)rt_nil_check(F->t_577)).elem_)).kind_) == ((rt_int)7LL)))) {
f_new_name_214(F->up, rt_g_lit("i", 1), &F->i_1889);
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P137)rt_nil_check(F->i_1889))), rt_g_lit(" = 0; ", 6)), (*(P137)rt_nil_check(F->i_1889))), rt_g_lit(" < G_CNT(", 9)), F->lval_576), rt_g_lit("); ", 3)), (*(P137)rt_nil_check(F->i_1889))), rt_g_lit("++) {", 5)));
f_init_storage_579(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_576, rt_g_lit(".p[", 3)), (*(P137)rt_nil_check(F->i_1889))), one_rt_gstr(93)), (*(P119)rt_nil_check(F->t_577)).elem_, F->ec_1885);
f_emit_238(F->up, rt_g_lit("}", 1));
}
} else if ((G_NV((*(P119)rt_nil_check(F->t_577)).kind_) == ((rt_int)7LL))) {
if ((F->c_578 != NULL)) {
F->d_1887 = (*(P175)rt_nil_check(F->c_578)).dv_;
while ((F->d_1887 != NULL)) {
F->f_1893 = (*(P119)rt_nil_check(F->t_577)).fields_;
while ((!eq_rt_gstr((*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_1893)).name_)), (*(P137)rt_nil_check((*(P1714)rt_nil_check(F->d_1887)).name_))))) {
F->f_1893 = (*(P1710)rt_nil_check(F->f_1893)).next_;
}
L_end_1895: ;
f_assign_code_587(F->up, cat_rt_gstr(cat_rt_gstr(F->lval_576, one_rt_gstr(46)), f_c_field_228(F->up, (*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_1893)).name_)))), (*(P1710)rt_nil_check(F->f_1893)).t_, (*(P137)rt_nil_check((*(P1714)rt_nil_check(F->d_1887)).v_)), (*(P1710)rt_nil_check(F->f_1893)).c_, &F->x_1891);
f_emit_238(F->up, (*(P137)rt_nil_check(F->x_1891)));
F->d_1887 = (*(P1714)rt_nil_check(F->d_1887)).next_;
}
L_end_1894: ;
}
F->f_1893 = (*(P119)rt_nil_check(F->t_577)).fields_;
while ((F->f_1893 != NULL)) {
f_subst_cons_547(F->up, (*(P1710)rt_nil_check(F->f_1893)).c_, F->lval_576, &F->fc_1886);
if ((G_NV((*(P1710)rt_nil_check(F->f_1893)).dyn_) && (!f_discriminated_450(F->up, F->c_578)))) {
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_576, one_rt_gstr(46)), f_c_field_228(F->up, (*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_1893)).name_)))), rt_g_lit(".lo = 1; ", 9)), F->lval_576), one_rt_gstr(46)), f_c_field_228(F->up, (*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_1893)).name_)))), rt_g_lit(".hi = 0; ", 9)), F->lval_576), one_rt_gstr(46)), f_c_field_228(F->up, (*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_1893)).name_)))), rt_g_lit(".lo2 = ", 7)), F->lval_576), one_rt_gstr(46)), f_c_field_228(F->up, (*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_1893)).name_)))), rt_g_lit(".hi2 = 1; ", 10)), F->lval_576), one_rt_gstr(46)), f_c_field_228(F->up, (*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_1893)).name_)))), rt_g_lit(".p = NULL;", 10)));
} else if ((!G_NV((*(P1710)rt_nil_check(F->f_1893)).is_discr_))) {
f_init_storage_579(F->up, cat_rt_gstr(cat_rt_gstr(F->lval_576, one_rt_gstr(46)), f_c_field_228(F->up, (*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_1893)).name_)))), (*(P1710)rt_nil_check(F->f_1893)).t_, F->fc_1886);
}
if (((*(P1710)rt_nil_check(F->f_1893)).dsym_ != NULL)) {
f_access_of_676(F->up, (*(P1710)rt_nil_check(F->f_1893)).dsym_, &F->v_1890);
f_assign_code_587(F->up, cat_rt_gstr(cat_rt_gstr(F->lval_576, one_rt_gstr(46)), f_c_field_228(F->up, (*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_1893)).name_)))), (*(P1710)rt_nil_check(F->f_1893)).t_, (*(P137)rt_nil_check(F->v_1890)), F->fc_1886, &F->x_1891);
f_emit_238(F->up, (*(P137)rt_nil_check(F->x_1891)));
}
F->f_1893 = (*(P1710)rt_nil_check(F->f_1893)).next_;
}
L_end_1896: ;
}
ret_:

  return;
}

static int f_composite_581(struct f_greenc_1fr *up_, P119 t_580) {
  struct f_composite_581fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_580 = t_580;
F->result_ = ((G_NV((*(P119)rt_nil_check(F->t_580)).kind_) == ((rt_int)6LL)) || (G_NV((*(P119)rt_nil_check(F->t_580)).kind_) == ((rt_int)7LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_assign_code_587(struct f_greenc_1fr *up_, rt_gstr lval_582, P119 t_583, rt_gstr v_584, P175 c_585, P137 *r_586) {
  struct f_assign_code_587fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lval_582 = cp_rt_gstr(lval_582);
F->t_583 = t_583;
F->v_584 = cp_rt_gstr(v_584);
F->c_585 = c_585;
F->r_586 = r_586;
F->ct_1897 = NULL;
F->x_1898 = NULL;
F->d_1899 = NULL;
if (((G_NV((*(P119)rt_nil_check(F->t_583)).kind_) == ((rt_int)7LL)) && f_discriminated_450(F->up, F->c_585))) {
f_ctype_461(F->up, F->t_583, &F->ct_1897);
F->x_1898 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P137)rt_nil_check(F->ct_1897))), rt_g_lit(" dv_ = ", 7)), F->v_584), one_rt_gstr(59)));
F->d_1899 = (*(P175)rt_nil_check(F->c_585)).dv_;
while ((F->d_1899 != NULL)) {
F->x_1898 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->x_1898)), rt_g_lit(" if (dv_.", 9)), f_c_field_228(F->up, (*(P137)rt_nil_check((*(P1714)rt_nil_check(F->d_1899)).name_)))), rt_g_lit(" != (", 5)), (*(P137)rt_nil_check((*(P1714)rt_nil_check(F->d_1899)).v_))), rt_g_lit(")) rt_raise(RT_X_TAG);", 22)));
F->d_1899 = (*(P1714)rt_nil_check(F->d_1899)).next_;
}
L_end_1900: ;
(*F->r_586) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->x_1898)), rt_g_lit(" as_", 4)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_583)).cname_))), rt_g_lit("(&", 2)), F->lval_582), rt_g_lit(", dv_); }", 9)));
} else if (f_composite_581(F->up, F->t_583)) {
f_ctype_461(F->up, F->t_583, &F->ct_1897);
(*F->r_586) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("as_", 3), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_583)).cname_))), rt_g_lit("(&", 2)), F->lval_582), rt_g_lit(", ", 2)), F->v_584), rt_g_lit(");", 2)));
} else if (((((G_NV((*(P119)rt_nil_check(F->t_583)).kind_) == ((rt_int)1LL)) || (G_NV((*(P119)rt_nil_check(F->t_583)).kind_) == ((rt_int)4LL))) || (G_NV((*(P119)rt_nil_check(F->t_583)).kind_) == ((rt_int)11LL))) && f_bounded_444(F->up, F->c_585))) {
(*F->r_586) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_582, rt_g_lit(" = rt_range(", 12)), F->v_584), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_585)).lo_))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_585)).hi_))), rt_g_lit(");", 2)));
} else if ((((G_NV((*(P119)rt_nil_check(F->t_583)).kind_) == ((rt_int)3LL)) || (G_NV((*(P119)rt_nil_check(F->t_583)).kind_) == ((rt_int)16LL))) && f_bounded_444(F->up, F->c_585))) {
(*F->r_586) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_582, rt_g_lit(" = rt_frange(", 13)), F->v_584), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_585)).lo_))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_585)).hi_))), rt_g_lit(");", 2)));
} else {
(*F->r_586) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_582, rt_g_lit(" = ", 3)), F->v_584), one_rt_gstr(59)));
}
ret_:

  return;
}

static void f_copy_code_591(struct f_greenc_1fr *up_, P119 t_588, rt_gstr v_589, P137 *r_590) {
  struct f_copy_code_591fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_588 = t_588;
F->v_589 = cp_rt_gstr(v_589);
F->r_590 = r_590;
F->ct_1901 = NULL;
if (f_composite_581(F->up, F->t_588)) {
f_ctype_461(F->up, F->t_588, &F->ct_1901);
(*F->r_590) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("cp_", 3), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_588)).cname_))), one_rt_gstr(40)), F->v_589), one_rt_gstr(41)));
} else {
(*F->r_590) = f_mk_211(F->up, F->v_589);
}
ret_:

  return;
}

static void f_eq_code_596(struct f_greenc_1fr *up_, P119 t_592, rt_gstr a_593, rt_gstr b_594, P137 *r_595) {
  struct f_eq_code_596fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_592 = t_592;
F->a_593 = cp_rt_gstr(a_593);
F->b_594 = cp_rt_gstr(b_594);
F->r_595 = r_595;
F->ct_1902 = NULL;
if (f_composite_581(F->up, F->t_592)) {
f_ctype_461(F->up, F->t_592, &F->ct_1902);
(*F->r_595) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("eq_", 3), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_592)).cname_))), one_rt_gstr(40)), F->a_593), rt_g_lit(", ", 2)), F->b_594), one_rt_gstr(41)));
} else {
(*F->r_595) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_593), rt_g_lit(" == ", 4)), F->b_594), one_rt_gstr(41)));
}
ret_:

  return;
}

static int f_seen_name_599(struct f_greenc_1fr *up_, P148 l_597, rt_gstr s_598) {
  struct f_seen_name_599fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_597 = l_597;
F->s_598 = cp_rt_gstr(s_598);
F->p_1903 = NULL;
F->p_1903 = F->l_597;
while ((F->p_1903 != NULL)) {
if (eq_rt_gstr((*(P137)rt_nil_check((*(P148)rt_nil_check(F->p_1903)).s_)), F->s_598)) {
F->result_ = 1;
goto ret_;
}
F->p_1903 = (*(P148)rt_nil_check(F->p_1903)).next_;
}
L_end_1904: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_emit_helpers_600(struct f_greenc_1fr *up_) {
  struct f_emit_helpers_600fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_1905 = NULL;
F->t_1905 = F->up->all_types_121;
F->et_1906 = NULL;
F->done_1907 = NULL;
F->l_1908 = NULL;
while ((F->t_1905 != NULL)) {
if ((f_composite_581(F->up, F->t_1905) && (!f_seen_name_599(F->up, F->done_1907, (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1905)).cname_)))))) {
F->l_1908 = ({ R149 *cell1910 = rt_alloc(sizeof(R149)); *cell1910 = cp_R149(({ R149 ag1911; ag1911.s_ = (*(P119)rt_nil_check(F->t_1905)).cname_; ag1911.next_ = F->done_1907; ag1911; })); (P148)cell1910; });
F->done_1907 = F->l_1908;
f_put_to_236(F->up, F->up->out_helpers_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void as_", 15), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1905)).cname_))), one_rt_gstr(40)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1905)).cname_))), rt_g_lit(" *d, ", 5)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1905)).cname_))), rt_g_lit(" s);", 4)));
f_put_to_236(F->up, F->up->out_helpers_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1905)).cname_))), rt_g_lit(" cp_", 4)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1905)).cname_))), one_rt_gstr(40)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1905)).cname_))), rt_g_lit(" s);", 4)));
f_put_to_236(F->up, F->up->out_helpers_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int eq_", 14), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1905)).cname_))), one_rt_gstr(40)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1905)).cname_))), rt_g_lit(" a, ", 4)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1905)).cname_))), rt_g_lit(" b);", 4)));
if (((G_NV((*(P119)rt_nil_check(F->t_1905)).kind_) == ((rt_int)6LL)) && (G_NV((*(P119)rt_nil_check(F->t_1905)).dims_) == ((rt_int)1LL)))) {
f_ctype_461(F->up, (*(P119)rt_nil_check(F->t_1905)).elem_, &F->et_1906);
f_put_to_236(F->up, F->up->out_helpers_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1905)).cname_))), rt_g_lit(" cat_", 5)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1905)).cname_))), one_rt_gstr(40)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1905)).cname_))), rt_g_lit(" a, ", 4)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1905)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_236(F->up, F->up->out_helpers_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1905)).cname_))), rt_g_lit(" one_", 5)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1905)).cname_))), one_rt_gstr(40)), (*(P137)rt_nil_check(F->et_1906))), rt_g_lit(" e);", 4)));
if ((G_NV((*(P119)rt_nil_check((*(P119)rt_nil_check(F->t_1905)).elem_)).kind_) == ((rt_int)2LL))) {
f_put_to_236(F->up, F->up->out_helpers_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1905)).cname_))), rt_g_lit(" and_", 5)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1905)).cname_))), one_rt_gstr(40)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1905)).cname_))), rt_g_lit(" a, ", 4)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1905)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_236(F->up, F->up->out_helpers_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1905)).cname_))), rt_g_lit(" or_", 4)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1905)).cname_))), one_rt_gstr(40)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1905)).cname_))), rt_g_lit(" a, ", 4)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1905)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_236(F->up, F->up->out_helpers_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1905)).cname_))), rt_g_lit(" xor_", 5)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1905)).cname_))), one_rt_gstr(40)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1905)).cname_))), rt_g_lit(" a, ", 4)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1905)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_236(F->up, F->up->out_helpers_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1905)).cname_))), rt_g_lit(" not_", 5)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1905)).cname_))), one_rt_gstr(40)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1905)).cname_))), rt_g_lit(" a);", 4)));
}
}
f_helper_bodies_602(F->up, F->t_1905);
}
F->t_1905 = (*(P119)rt_nil_check(F->t_1905)).next_;
}
L_end_1909: ;
ret_:

  return;
}

static void f_helper_bodies_602(struct f_greenc_1fr *up_, P119 t_601) {
  struct f_helper_bodies_602fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_601 = t_601;
F->c_1912 = NULL;
F->c_1912 = (*(P119)rt_nil_check(F->t_601)).cname_;
F->b_1913 = NULL;
F->b_1913 = F->up->out_funcs_130;
F->ct_1914 = NULL;
F->et_1915 = NULL;
F->x_1916 = NULL;
F->y_1917 = NULL;
F->conds_1918 = NULL;
F->f_1919 = NULL;
if ((G_NV((*(P119)rt_nil_check(F->t_601)).kind_) == ((rt_int)6LL))) {
f_elem_ctype_533(F->up, (*(P119)rt_nil_check(F->t_601)).elem_, &F->ct_1914);
f_assign_code_587(F->up, rt_g_lit("d->p[i]", 7), (*(P119)rt_nil_check(F->t_601)).elem_, rt_g_lit("s.p[i]", 6), NULL, &F->x_1916);
f_put_to_236(F->up, F->b_1913, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void as_", 15), (*(P137)rt_nil_check(F->c_1912))), one_rt_gstr(40)), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit(" *d, ", 5)), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit(" s) {", 5)));
f_put_to_236(F->up, F->b_1913, rt_g_lit("  rt_int n = G_CNT(s);", 22));
f_put_to_236(F->up, F->b_1913, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, ", 49), f_q_229(F->up)), rt_g_lit("array length", 12)), f_q_229(F->up)), rt_g_lit(");", 2)));
f_put_to_236(F->up, F->b_1913, rt_g_lit("  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();", 79));
f_put_to_236(F->up, F->b_1913, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < n; i++) { ", 35), (*(P137)rt_nil_check(F->x_1916))), rt_g_lit(" }", 2)));
f_put_to_236(F->up, F->b_1913, rt_g_lit("}", 1));
f_copy_code_591(F->up, (*(P119)rt_nil_check(F->t_601)).elem_, rt_g_lit("s.p[i]", 6), &F->x_1916);
f_put_to_236(F->up, F->b_1913, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit(" cp_", 4)), (*(P137)rt_nil_check(F->c_1912))), one_rt_gstr(40)), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit(" s) {", 5)));
f_put_to_236(F->up, F->b_1913, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit(" d = s; d.p = rt_alloc(sizeof(", 30)), (*(P137)rt_nil_check(F->ct_1914))), rt_g_lit(") * (size_t)G_CNT(s));", 22)));
f_put_to_236(F->up, F->b_1913, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = ", 49), (*(P137)rt_nil_check(F->x_1916))), one_rt_gstr(59)));
f_put_to_236(F->up, F->b_1913, rt_g_lit("  return d;", 11));
f_put_to_236(F->up, F->b_1913, rt_g_lit("}", 1));
f_eq_code_596(F->up, (*(P119)rt_nil_check(F->t_601)).elem_, rt_g_lit("a.p[i]", 6), rt_g_lit("b.p[i]", 6), &F->x_1916);
f_put_to_236(F->up, F->b_1913, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int eq_", 14), (*(P137)rt_nil_check(F->c_1912))), one_rt_gstr(40)), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit(" a, ", 4)), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit(" b) {", 5)));
f_put_to_236(F->up, F->b_1913, rt_g_lit("  if (G_CNT(a) != G_CNT(b)) return 0;", 37));
f_put_to_236(F->up, F->b_1913, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < G_CNT(a); i++) if (!(", 46), (*(P137)rt_nil_check(F->x_1916))), rt_g_lit(")) return 0;", 12)));
f_put_to_236(F->up, F->b_1913, rt_g_lit("  return 1;", 11));
f_put_to_236(F->up, F->b_1913, rt_g_lit("}", 1));
if (((G_NV((*(P119)rt_nil_check(F->t_601)).dims_) == ((rt_int)1LL)) && (G_NV((*(P119)rt_nil_check((*(P119)rt_nil_check(F->t_601)).elem_)).kind_) == ((rt_int)2LL)))) {
f_put_to_236(F->up, F->b_1913, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit(" and_", 5)), (*(P137)rt_nil_check(F->c_1912))), one_rt_gstr(40)), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit(" a, ", 4)), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit(" b) { ", 6)), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit(" r = cp_", 8)), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit("(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, ", 58)), f_q_229(F->up)), rt_g_lit("array length", 12)), f_q_229(F->up)), rt_g_lit("); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] && b.p[i]; return r; }", 79)));
f_put_to_236(F->up, F->b_1913, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit(" or_", 4)), (*(P137)rt_nil_check(F->c_1912))), one_rt_gstr(40)), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit(" a, ", 4)), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit(" b) { ", 6)), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit(" r = cp_", 8)), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit("(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, ", 58)), f_q_229(F->up)), rt_g_lit("array length", 12)), f_q_229(F->up)), rt_g_lit("); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] || b.p[i]; return r; }", 79)));
f_put_to_236(F->up, F->b_1913, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit(" xor_", 5)), (*(P137)rt_nil_check(F->c_1912))), one_rt_gstr(40)), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit(" a, ", 4)), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit(" b) { ", 6)), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit(" r = cp_", 8)), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit("(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, ", 58)), f_q_229(F->up)), rt_g_lit("array length", 12)), f_q_229(F->up)), rt_g_lit("); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] != b.p[i]; return r; }", 79)));
f_put_to_236(F->up, F->b_1913, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit(" not_", 5)), (*(P137)rt_nil_check(F->c_1912))), one_rt_gstr(40)), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit(" a) { ", 6)), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit(" r = cp_", 8)), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit("(a); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = !a.p[i]; return r; }", 72)));
}
if ((G_NV((*(P119)rt_nil_check(F->t_601)).dims_) == ((rt_int)1LL))) {
f_ctype_461(F->up, (*(P119)rt_nil_check(F->t_601)).elem_, &F->et_1915);
f_copy_code_591(F->up, (*(P119)rt_nil_check(F->t_601)).elem_, rt_g_lit("a.p[i]", 6), &F->x_1916);
f_copy_code_591(F->up, (*(P119)rt_nil_check(F->t_601)).elem_, rt_g_lit("b.p[i]", 6), &F->y_1917);
f_put_to_236(F->up, F->b_1913, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit(" cat_", 5)), (*(P137)rt_nil_check(F->c_1912))), one_rt_gstr(40)), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit(" a, ", 4)), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit(" b) {", 5)));
f_put_to_236(F->up, F->b_1913, rt_g_lit("  rt_int na = G_CNT(a), nb = G_CNT(b);", 38));
f_put_to_236(F->up, F->b_1913, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit(" r = na > 0 \? a : b;", 20)));
f_put_to_236(F->up, F->b_1913, rt_g_lit("  if (na == 0 && nb == 0) return a;", 35));
f_put_to_236(F->up, F->b_1913, rt_g_lit("  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;", 47));
f_put_to_236(F->up, F->b_1913, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  r.p = rt_alloc(sizeof(", 24), (*(P137)rt_nil_check(F->ct_1914))), rt_g_lit(") * (size_t)(na + nb));", 23)));
f_put_to_236(F->up, F->b_1913, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < na; i++) r.p[i] = ", 43), (*(P137)rt_nil_check(F->x_1916))), one_rt_gstr(59)));
f_put_to_236(F->up, F->b_1913, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < nb; i++) r.p[na + i] = ", 48), (*(P137)rt_nil_check(F->y_1917))), one_rt_gstr(59)));
f_put_to_236(F->up, F->b_1913, rt_g_lit("  return r;", 11));
f_put_to_236(F->up, F->b_1913, rt_g_lit("}", 1));
f_copy_code_591(F->up, (*(P119)rt_nil_check(F->t_601)).elem_, rt_g_lit("e", 1), &F->x_1916);
f_first_index_536(F->up, F->t_601, &F->y_1917);
f_put_to_236(F->up, F->b_1913, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit(" one_", 5)), (*(P137)rt_nil_check(F->c_1912))), one_rt_gstr(40)), (*(P137)rt_nil_check(F->et_1915))), rt_g_lit(" e) {", 5)));
f_put_to_236(F->up, F->b_1913, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit(" r; r.lo = r.hi = ", 18)), (*(P137)rt_nil_check(F->y_1917))), rt_g_lit("; r.lo2 = r.hi2 = 1;", 20)));
f_put_to_236(F->up, F->b_1913, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  r.p = rt_alloc(sizeof(", 24), (*(P137)rt_nil_check(F->ct_1914))), rt_g_lit(")); r.p[0] = ", 13)), (*(P137)rt_nil_check(F->x_1916))), one_rt_gstr(59)));
f_put_to_236(F->up, F->b_1913, rt_g_lit("  return r;", 11));
f_put_to_236(F->up, F->b_1913, rt_g_lit("}", 1));
}
} else {
f_put_to_236(F->up, F->b_1913, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void as_", 15), (*(P137)rt_nil_check(F->c_1912))), one_rt_gstr(40)), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit(" *d, ", 5)), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit(" s) {", 5)));
F->f_1919 = (*(P119)rt_nil_check(F->t_601)).fields_;
while ((F->f_1919 != NULL)) {
if ((G_NV((*(P1710)rt_nil_check(F->f_1919)).dyn_) || ((*(P1710)rt_nil_check(F->f_1919)).cond_ != NULL))) {
f_copy_code_591(F->up, (*(P1710)rt_nil_check(F->f_1919)).t_, cat_rt_gstr(rt_g_lit("s.", 2), f_c_field_228(F->up, (*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_1919)).name_)))), &F->x_1916);
F->x_1916 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("d->", 3), f_c_field_228(F->up, (*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_1919)).name_)))), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->x_1916))), one_rt_gstr(59)));
if (((*(P1710)rt_nil_check(F->f_1919)).cond_ != NULL)) {
F->x_1916 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), f_subst_541(F->up, (*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_1919)).cond_)), rt_g_lit("s", 1))), rt_g_lit(") ", 2)), (*(P137)rt_nil_check(F->x_1916))));
}
} else {
f_assign_code_587(F->up, cat_rt_gstr(rt_g_lit("d->", 3), f_c_field_228(F->up, (*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_1919)).name_)))), (*(P1710)rt_nil_check(F->f_1919)).t_, cat_rt_gstr(rt_g_lit("s.", 2), f_c_field_228(F->up, (*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_1919)).name_)))), NULL, &F->x_1916);
}
f_put_to_236(F->up, F->b_1913, cat_rt_gstr(rt_g_lit("  ", 2), (*(P137)rt_nil_check(F->x_1916))));
F->f_1919 = (*(P1710)rt_nil_check(F->f_1919)).next_;
}
L_end_1920: ;
f_put_to_236(F->up, F->b_1913, rt_g_lit("}", 1));
f_put_to_236(F->up, F->b_1913, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit(" cp_", 4)), (*(P137)rt_nil_check(F->c_1912))), one_rt_gstr(40)), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit(" s) {", 5)));
f_put_to_236(F->up, F->b_1913, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit(" d = s;", 7)));
F->conds_1918 = f_mk_211(F->up, rt_g_lit("1", 1));
F->f_1919 = (*(P119)rt_nil_check(F->t_601)).fields_;
while ((F->f_1919 != NULL)) {
f_copy_code_591(F->up, (*(P1710)rt_nil_check(F->f_1919)).t_, cat_rt_gstr(rt_g_lit("s.", 2), f_c_field_228(F->up, (*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_1919)).name_)))), &F->x_1916);
F->x_1916 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("d.", 2), f_c_field_228(F->up, (*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_1919)).name_)))), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->x_1916))), one_rt_gstr(59)));
f_eq_code_596(F->up, (*(P1710)rt_nil_check(F->f_1919)).t_, cat_rt_gstr(rt_g_lit("a.", 2), f_c_field_228(F->up, (*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_1919)).name_)))), cat_rt_gstr(rt_g_lit("b.", 2), f_c_field_228(F->up, (*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_1919)).name_)))), &F->y_1917);
if (((*(P1710)rt_nil_check(F->f_1919)).cond_ != NULL)) {
F->x_1916 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), f_subst_541(F->up, (*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_1919)).cond_)), rt_g_lit("s", 1))), rt_g_lit(") ", 2)), (*(P137)rt_nil_check(F->x_1916))));
F->y_1917 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!(", 3), f_subst_541(F->up, (*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_1919)).cond_)), rt_g_lit("a", 1))), rt_g_lit(") || ", 5)), (*(P137)rt_nil_check(F->y_1917))), one_rt_gstr(41)));
}
f_put_to_236(F->up, F->b_1913, cat_rt_gstr(rt_g_lit("  ", 2), (*(P137)rt_nil_check(F->x_1916))));
F->conds_1918 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->conds_1918)), rt_g_lit(" && ", 4)), (*(P137)rt_nil_check(F->y_1917))));
F->f_1919 = (*(P1710)rt_nil_check(F->f_1919)).next_;
}
L_end_1921: ;
f_put_to_236(F->up, F->b_1913, rt_g_lit("  return d;", 11));
f_put_to_236(F->up, F->b_1913, rt_g_lit("}", 1));
f_put_to_236(F->up, F->b_1913, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int eq_", 14), (*(P137)rt_nil_check(F->c_1912))), one_rt_gstr(40)), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit(" a, ", 4)), (*(P137)rt_nil_check(F->c_1912))), rt_g_lit(" b) {", 5)));
f_put_to_236(F->up, F->b_1913, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  return ", 9), (*(P137)rt_nil_check(F->conds_1918))), one_rt_gstr(59)));
f_put_to_236(F->up, F->b_1913, rt_g_lit("}", 1));
}
ret_:

  return;
}

static void f_storage_606(struct f_greenc_1fr *up_, rt_gstr name_603, P119 t_604, P137 *access_code_605) {
  struct f_storage_606fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_603 = cp_rt_gstr(name_603);
F->t_604 = t_604;
F->access_code_605 = access_code_605;
F->ct_1922 = NULL;
F->g_1923 = NULL;
f_ctype_461(F->up, F->t_604, &F->ct_1922);
if ((!G_NV(F->up->in_func_135))) {
f_new_name_214(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("g_", 2), f_lower_s_222(F->up, F->name_603)), one_rt_gstr(95)), &F->g_1923);
f_put_to_236(F->up, F->up->out_globals_129, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P137)rt_nil_check(F->ct_1922))), one_rt_gstr(32)), (*(P137)rt_nil_check(F->g_1923))), one_rt_gstr(59)));
F->up->st_field_138 = F->g_1923;
(*F->access_code_605) = F->g_1923;
} else {
f_new_name_214(F->up, cat_rt_gstr(f_lower_s_222(F->up, F->name_603), one_rt_gstr(95)), &F->g_1923);
f_put_to_236(F->up, F->up->fields_buf_134, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P137)rt_nil_check(F->ct_1922))), one_rt_gstr(32)), (*(P137)rt_nil_check(F->g_1923))), one_rt_gstr(59)));
F->up->st_field_138 = F->g_1923;
(*F->access_code_605) = f_mk_211(F->up, cat_rt_gstr(rt_g_lit("F->", 3), (*(P137)rt_nil_check(F->g_1923))));
}
ret_:

  return;
}

static void f_bind_609(struct f_greenc_1fr *up_, P114 y_607, P137 access_code_608) {
  struct f_bind_609fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_607 = y_607;
F->access_code_608 = access_code_608;
if (G_NV(F->up->in_func_135)) {
(*(P114)rt_nil_check(F->y_607)).level_ = G_NV(F->up->cur_level_136);
(*(P114)rt_nil_check(F->y_607)).access_path_ = F->up->st_field_138;
} else {
(*(P114)rt_nil_check(F->y_607)).level_ = ((rt_int)0LL);
(*(P114)rt_nil_check(F->y_607)).access_path_ = F->access_code_608;
}
ret_:

  return;
}

static void f_declare_subprograms_611(struct f_greenc_1fr *up_, P171 from_610) {
  struct f_declare_subprograms_611fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->from_610 = from_610;
F->e_1924 = NULL;
F->e_1924 = F->from_610;
while ((F->e_1924 != NULL)) {
if ((((G_NV((*(P171)rt_nil_check(F->e_1924)).kind_) == ((rt_int)44LL)) || (G_NV((*(P171)rt_nil_check(F->e_1924)).kind_) == ((rt_int)45LL))) && (G_NV((*(P171)rt_nil_check(F->e_1924)).ival_) == ((rt_int)0LL)))) {
f_declare_one_613(F->up, F->e_1924);
}
F->e_1924 = (*(P171)rt_nil_check(F->e_1924)).next_;
}
L_end_1925: ;
ret_:

  return;
}

static void f_declare_one_613(struct f_greenc_1fr *up_, P171 e_612) {
  struct f_declare_one_613fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_612 = e_612;
F->y_1926 = NULL;
F->z_1927 = NULL;
if (f_is_generic_name_1148(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_612)).name_)))) {
goto ret_;
}
f_build_subprogram_616(F->up, F->e_612, &F->y_1926);
F->z_1927 = ({ A113 ix1928 = F->up->table_116; ix1928.p[rt_index(f_hash_394(F->up, (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1926)).name_))), ix1928.lo, ix1928.hi) - ix1928.lo]; });
while ((F->z_1927 != NULL)) {
if (((((((eq_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->z_1927)).name_)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1926)).name_))) && ((G_NV((*(P114)rt_nil_check(F->z_1927)).kind_) == ((rt_int)3LL)) || (G_NV((*(P114)rt_nil_check(F->z_1927)).kind_) == ((rt_int)4LL)))) && ((*(P114)rt_nil_check(F->z_1927)).decl_ != NULL)) && (G_NV((*(P171)rt_nil_check((*(P114)rt_nil_check(F->z_1927)).decl_)).ival_) == ((rt_int)1LL))) && (G_NV((*(P114)rt_nil_check(F->z_1927)).depth_) == G_NV(F->up->depth_117))) && f_same_signature_428(F->up, (*(P114)rt_nil_check(F->z_1927)).params_, (*(P114)rt_nil_check(F->y_1926)).params_)) && f_same_416(F->up, (*(P114)rt_nil_check(F->z_1927)).result_, (*(P114)rt_nil_check(F->y_1926)).result_))) {
(*(P114)rt_nil_check(F->z_1927)).decl_ = F->e_612;
goto ret_;
}
F->z_1927 = (*(P114)rt_nil_check(F->z_1927)).chain_;
}
L_end_1929: ;
if ((F->up->cur_task_186 != NULL)) {
F->z_1927 = (*(P114)rt_nil_check(F->up->cur_task_186)).members_;
while ((F->z_1927 != NULL)) {
if ((((((eq_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->z_1927)).name_)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1926)).name_))) && ((G_NV((*(P114)rt_nil_check(F->z_1927)).kind_) == ((rt_int)3LL)) || (G_NV((*(P114)rt_nil_check(F->z_1927)).kind_) == ((rt_int)4LL)))) && ((*(P114)rt_nil_check(F->z_1927)).decl_ != NULL)) && (G_NV((*(P171)rt_nil_check((*(P114)rt_nil_check(F->z_1927)).decl_)).ival_) == ((rt_int)1LL))) && f_same_signature_428(F->up, (*(P114)rt_nil_check(F->z_1927)).params_, (*(P114)rt_nil_check(F->y_1926)).params_)) && f_same_416(F->up, (*(P114)rt_nil_check(F->z_1927)).result_, (*(P114)rt_nil_check(F->y_1926)).result_))) {
(*(P114)rt_nil_check(F->y_1926)).cname_ = (*(P114)rt_nil_check(F->z_1927)).cname_;
(*(P114)rt_nil_check(F->z_1927)).decl_ = F->e_612;
goto L_end_1930;
}
F->z_1927 = (*(P114)rt_nil_check(F->z_1927)).mnext_;
}
L_end_1930: ;
}
f_define_434(F->up, F->y_1926, G_NV((*(P171)rt_nil_check(F->e_612)).line_));
ret_:

  return;
}

static void f_build_subprogram_616(struct f_greenc_1fr *up_, P171 d_614, P114 *y_615) {
  struct f_build_subprogram_616fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_614 = d_614;
F->y_615 = y_615;
F->p_1931 = NULL;
F->p_1931 = (*(P171)rt_nil_check(F->d_614)).a_;
F->pm_1932 = NULL;
F->tail_1933 = NULL;
F->rc_1934 = NULL;
F->k_1935 = INT64_MIN;
F->k_1935 = ((rt_int)4LL);
if ((G_NV((*(P171)rt_nil_check(F->d_614)).kind_) == ((rt_int)45LL))) {
F->k_1935 = ((rt_int)3LL);
}
(*F->y_615) = f_new_sym_439(F->up, G_NV(F->k_1935), (*(P171)rt_nil_check(F->d_614)).name_);
while ((F->p_1931 != NULL)) {
F->pm_1932 = ({ R1696 *cell1937 = rt_alloc(sizeof(R1696)); *cell1937 = cp_R1696(({ R1696 ag1938; ag1938.name_ = (*(P171)rt_nil_check(F->p_1931)).name_; ag1938.mode_ = G_NV((*(P171)rt_nil_check(F->p_1931)).ival_); ag1938.t_ = NULL; ag1938.c_ = NULL; ag1938.cfield_ = NULL; ag1938.dflt_ = (*(P171)rt_nil_check(F->p_1931)).b_; ag1938.next_ = NULL; ag1938; })); (P1695)cell1937; });
f_resolve_477(F->up, (*(P171)rt_nil_check(F->p_1931)).a_, &(*(P1695)rt_nil_check(F->pm_1932)).t_, &(*(P1695)rt_nil_check(F->pm_1932)).c_);
f_new_name_214(F->up, cat_rt_gstr(f_lower_s_222(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->p_1931)).name_))), one_rt_gstr(95)), &(*(P1695)rt_nil_check(F->pm_1932)).cfield_);
if (((G_NV((*(P171)rt_nil_check(F->d_614)).kind_) == ((rt_int)45LL)) && (G_NV((*(P1695)rt_nil_check(F->pm_1932)).mode_) != ((rt_int)1LL)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->p_1931)).line_), rt_g_lit("a function can only have in parameters (RM79 6.5)", 49));
}
if (((G_NV((*(P171)rt_nil_check(F->d_614)).flag_) == ((rt_int)1LL)) && (G_NV((*(P1695)rt_nil_check(F->pm_1932)).mode_) != ((rt_int)1LL)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->p_1931)).line_), rt_g_lit("a value-returning procedure can only have in parameters (RM79 6.5)", 66));
}
if ((F->tail_1933 == NULL)) {
(*(P114)rt_nil_check((*F->y_615))).params_ = F->pm_1932;
} else {
(*(P1695)rt_nil_check(F->tail_1933)).next_ = F->pm_1932;
}
F->tail_1933 = F->pm_1932;
F->p_1931 = (*(P171)rt_nil_check(F->p_1931)).next_;
}
L_end_1936: ;
(*(P114)rt_nil_check((*F->y_615))).result_ = F->up->ty_void_158;
if (((*(P171)rt_nil_check(F->d_614)).b_ != NULL)) {
f_resolve_477(F->up, (*(P171)rt_nil_check(F->d_614)).b_, &(*(P114)rt_nil_check((*F->y_615))).result_, &F->rc_1934);
}
(*(P114)rt_nil_check((*F->y_615))).vrp_ = (G_NV((*(P171)rt_nil_check(F->d_614)).flag_) == ((rt_int)1LL));
f_new_name_214(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("f_", 2), f_c_ident_681(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->d_614)).name_)))), one_rt_gstr(95)), &(*(P114)rt_nil_check((*F->y_615))).cname_);
(*(P114)rt_nil_check((*F->y_615))).decl_ = F->d_614;
(*(P114)rt_nil_check((*F->y_615))).level_ = G_NV(F->up->cur_level_136);
ret_:

  return;
}

static void f_decl_elements_618(struct f_greenc_1fr *up_, P171 decls_617) {
  struct f_decl_elements_618fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_617 = decls_617;
F->e_1939 = NULL;
F->e_1939 = F->decls_617;
F->declared_1940 = INT_MIN;
F->declared_1940 = 0;
F->up->anon_node_173 = NULL;
while ((F->e_1939 != NULL)) {
if ((((G_NV((*(P171)rt_nil_check(F->e_1939)).kind_) != ((rt_int)40LL)) && (G_NV((*(P171)rt_nil_check(F->e_1939)).kind_) != ((rt_int)41LL))) || ((*(P171)rt_nil_check(F->e_1939)).a_ != F->up->anon_node_173))) {
F->up->anon_node_173 = NULL;
}
if (((((G_NV((*(P171)rt_nil_check(F->e_1939)).kind_) == ((rt_int)44LL)) || (G_NV((*(P171)rt_nil_check(F->e_1939)).kind_) == ((rt_int)45LL))) && (G_NV((*(P171)rt_nil_check(F->e_1939)).ival_) != ((rt_int)1LL))) && (!G_NV(F->declared_1940)))) {
f_declare_subprograms_611(F->up, F->e_1939);
F->declared_1940 = 1;
}
f_decl_element_620(F->up, F->e_1939);
F->e_1939 = (*(P171)rt_nil_check(F->e_1939)).next_;
}
L_end_1941: ;
ret_:

  return;
}

static void f_decl_element_620(struct f_greenc_1fr *up_, P171 e_619) {
  struct f_decl_element_620fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_619 = e_619;
F->pd_1942 = NULL;
F->y_1943 = NULL;
F->z_1944 = NULL;
F->t_1945 = NULL;
F->vt_1946 = NULL;
F->c_1947 = NULL;
F->acc_1948 = NULL;
F->v_1949 = NULL;
F->x_1950 = NULL;
F->ok_1951 = INT_MIN;
{ rt_int sel1952 = G_NV((*(P171)rt_nil_check(F->e_619)).kind_);
if (0 || sel1952 == ((rt_int)42LL)) {
F->y_1943 = f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_619)).name_)));
if ((((((((F->y_1943 != NULL) && (G_NV((*(P114)rt_nil_check(F->y_1943)).kind_) == ((rt_int)5LL))) && (G_NV((*(P114)rt_nil_check(F->y_1943)).depth_) == G_NV(F->up->depth_117))) && ((*(P114)rt_nil_check(F->y_1943)).t_ != NULL)) && G_NV((*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_1943)).t_)).priv_)) && (G_NV((*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_1943)).t_)).kind_) == ((rt_int)9LL))) && (G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_619)).a_)).kind_) != ((rt_int)77LL)))) {
F->up->completing_170 = (*(P114)rt_nil_check(F->y_1943)).t_;
F->x_1950 = (*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_1943)).t_)).name_;
F->pd_1942 = (*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_1943)).t_)).decl_;
f_type_definition_511(F->up, (*(P171)rt_nil_check(F->e_619)).a_, (*(P171)rt_nil_check(F->e_619)).name_, &F->t_1945, &F->c_1947);
F->up->completing_170 = NULL;
if ((F->t_1945 != (*(P114)rt_nil_check(F->y_1943)).t_)) {
as_R120(&(*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_1943)).t_)), (*(P119)rt_nil_check(F->t_1945)));
}
(*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_1943)).t_)).name_ = F->x_1950;
(*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_1943)).t_)).priv_ = 1;
(*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_1943)).t_)).decl_ = F->pd_1942;
(*(P114)rt_nil_check(F->y_1943)).c_ = F->c_1947;
} else {
F->y_1943 = f_new_sym_439(F->up, ((rt_int)5LL), (*(P171)rt_nil_check(F->e_619)).name_);
(*(P114)rt_nil_check(F->y_1943)).decl_ = F->e_619;
f_define_434(F->up, F->y_1943, G_NV((*(P171)rt_nil_check(F->e_619)).line_));
if ((G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_619)).a_)).kind_) == ((rt_int)77LL))) {
(*(P114)rt_nil_check(F->y_1943)).t_ = f_new_typ_441(F->up, ((rt_int)9LL));
(*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_1943)).t_)).name_ = (*(P171)rt_nil_check(F->e_619)).name_;
(*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_1943)).t_)).priv_ = 1;
(*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_1943)).t_)).decl_ = F->up->cur_pkg_197;
} else {
f_type_definition_511(F->up, (*(P171)rt_nil_check(F->e_619)).a_, (*(P171)rt_nil_check(F->e_619)).name_, &(*(P114)rt_nil_check(F->y_1943)).t_, &(*(P114)rt_nil_check(F->y_1943)).c_);
}
}
} else if (0 || sel1952 == ((rt_int)43LL)) {
F->y_1943 = f_new_sym_439(F->up, ((rt_int)5LL), (*(P171)rt_nil_check(F->e_619)).name_);
f_resolve_477(F->up, (*(P171)rt_nil_check(F->e_619)).a_, &(*(P114)rt_nil_check(F->y_1943)).t_, &(*(P114)rt_nil_check(F->y_1943)).c_);
f_define_434(F->up, F->y_1943, G_NV((*(P171)rt_nil_check(F->e_619)).line_));
} else if (0 || sel1952 == ((rt_int)40LL)) {
f_resolve_object_type_626(F->up, (*(P171)rt_nil_check(F->e_619)).a_, &F->t_1945, &F->c_1947);
F->y_1943 = f_new_sym_439(F->up, ((rt_int)1LL), (*(P171)rt_nil_check(F->e_619)).name_);
if ((G_NV((*(P171)rt_nil_check(F->e_619)).flag_) == ((rt_int)2LL))) {
f_lvalue_695(F->up, (*(P171)rt_nil_check(F->e_619)).b_, &F->v_1949, &F->vt_1946, &F->c_1947, &(*(P114)rt_nil_check(F->y_1943)).ro_);
f_check_type_456(F->up, F->vt_1946, F->t_1945, G_NV((*(P171)rt_nil_check(F->e_619)).line_));
f_ctype_461(F->up, F->t_1945, &F->acc_1948);
f_new_name_214(F->up, cat_rt_gstr(f_lower_s_222(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_619)).name_))), one_rt_gstr(95)), &F->x_1950);
if (G_NV(F->up->in_func_135)) {
f_put_to_236(F->up, F->up->fields_buf_134, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P137)rt_nil_check(F->acc_1948))), rt_g_lit(" *", 2)), (*(P137)rt_nil_check(F->x_1950))), one_rt_gstr(59)));
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->", 3), (*(P137)rt_nil_check(F->x_1950))), rt_g_lit(" = &(", 5)), (*(P137)rt_nil_check(F->v_1949))), rt_g_lit(");", 2)));
(*(P114)rt_nil_check(F->y_1943)).byref_ = 1;
(*(P114)rt_nil_check(F->y_1943)).level_ = G_NV(F->up->cur_level_136);
(*(P114)rt_nil_check(F->y_1943)).access_path_ = F->x_1950;
} else {
f_put_to_236(F->up, F->up->out_globals_129, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P137)rt_nil_check(F->acc_1948))), rt_g_lit(" *g_", 4)), (*(P137)rt_nil_check(F->x_1950))), one_rt_gstr(59)));
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("g_", 2), (*(P137)rt_nil_check(F->x_1950))), rt_g_lit(" = &(", 5)), (*(P137)rt_nil_check(F->v_1949))), rt_g_lit(");", 2)));
(*(P114)rt_nil_check(F->y_1943)).level_ = ((rt_int)0LL);
(*(P114)rt_nil_check(F->y_1943)).access_path_ = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*g_", 4), (*(P137)rt_nil_check(F->x_1950))), one_rt_gstr(41)));
}
(*(P114)rt_nil_check(F->y_1943)).t_ = F->vt_1946;
(*(P114)rt_nil_check(F->y_1943)).c_ = F->c_1947;
f_define_434(F->up, F->y_1943, G_NV((*(P171)rt_nil_check(F->e_619)).line_));
goto ret_;
}
if ((((G_NV((*(P119)rt_nil_check(F->t_1945)).kind_) == ((rt_int)6LL)) && (!f_bounded_444(F->up, F->c_1947))) && ((*(P171)rt_nil_check(F->e_619)).b_ != NULL))) {
F->up->vrp_ok_202 = 1;
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->e_619)).b_, F->t_1945, &F->vt_1946, &F->v_1949);
F->up->vrp_ok_202 = 0;
f_check_type_456(F->up, F->vt_1946, F->t_1945, G_NV((*(P171)rt_nil_check(F->e_619)).line_));
f_storage_606(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_619)).name_)), F->t_1945, &F->acc_1948);
f_copy_code_591(F->up, F->t_1945, (*(P137)rt_nil_check(F->v_1949)), &F->x_1950);
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->acc_1948)), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->x_1950))), one_rt_gstr(59)));
} else {
f_storage_606(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_619)).name_)), F->t_1945, &F->acc_1948);
f_init_storage_579(F->up, (*(P137)rt_nil_check(F->acc_1948)), F->t_1945, F->c_1947);
if (((*(P171)rt_nil_check(F->e_619)).b_ != NULL)) {
if (f_is_const_access_689(F->up, (*(P171)rt_nil_check(F->e_619)).b_)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_619)).line_), rt_g_lit("a constant of an access type cannot be assigned to a variable (RM79 3.8)", 72));
}
F->up->vrp_ok_202 = 1;
if (((G_NV((*(P119)rt_nil_check(F->t_1945)).kind_) == ((rt_int)6LL)) && (G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_619)).b_)).kind_) == ((rt_int)12LL)))) {
F->up->agg_bounds_178 = F->acc_1948;
}
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->e_619)).b_, F->t_1945, &F->vt_1946, &F->v_1949);
F->up->agg_bounds_178 = NULL;
F->up->vrp_ok_202 = 0;
f_check_type_456(F->up, F->vt_1946, F->t_1945, G_NV((*(P171)rt_nil_check(F->e_619)).line_));
f_assign_code_587(F->up, (*(P137)rt_nil_check(F->acc_1948)), F->t_1945, (*(P137)rt_nil_check(F->v_1949)), F->c_1947, &F->x_1950);
f_emit_238(F->up, (*(P137)rt_nil_check(F->x_1950)));
}
}
(*(P114)rt_nil_check(F->y_1943)).t_ = F->t_1945;
(*(P114)rt_nil_check(F->y_1943)).c_ = F->c_1947;
f_bind_609(F->up, F->y_1943, F->acc_1948);
f_define_434(F->up, F->y_1943, G_NV((*(P171)rt_nil_check(F->e_619)).line_));
} else if (0 || sel1952 == ((rt_int)41LL)) {
f_resolve_object_type_626(F->up, (*(P171)rt_nil_check(F->e_619)).a_, &F->t_1945, &F->c_1947);
F->z_1944 = f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_619)).name_)));
if (((*(P171)rt_nil_check(F->e_619)).b_ == NULL)) {
if (((F->up->cur_pkg_197 == NULL) || (!(G_NV((*(P119)rt_nil_check(F->t_1945)).priv_) && (G_NV((*(P119)rt_nil_check(F->t_1945)).kind_) == ((rt_int)9LL)))))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_619)).line_), rt_g_lit("a constant needs a value; only a constant of a private type is deferred (RM79 7.4)", 82));
}
F->y_1943 = f_new_sym_439(F->up, ((rt_int)2LL), (*(P171)rt_nil_check(F->e_619)).name_);
(*(P114)rt_nil_check(F->y_1943)).t_ = F->t_1945;
(*(P114)rt_nil_check(F->y_1943)).c_ = F->c_1947;
(*(P114)rt_nil_check(F->y_1943)).ro_ = 1;
(*(P114)rt_nil_check(F->y_1943)).flags_ = rt_add(((rt_int)1LL), ((rt_int)2LL));
f_define_434(F->up, F->y_1943, G_NV((*(P171)rt_nil_check(F->e_619)).line_));
goto ret_;
}
if (((((F->z_1944 != NULL) && (G_NV((*(P114)rt_nil_check(F->z_1944)).depth_) == G_NV(F->up->depth_117))) && (G_NV((*(P114)rt_nil_check(F->z_1944)).kind_) == ((rt_int)2LL))) && (G_NV((*(P114)rt_nil_check(F->z_1944)).flags_) == rt_add(((rt_int)1LL), ((rt_int)2LL))))) {
f_check_type_456(F->up, F->t_1945, (*(P114)rt_nil_check(F->z_1944)).t_, G_NV((*(P171)rt_nil_check(F->e_619)).line_));
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->e_619)).b_, F->t_1945, &F->vt_1946, &F->v_1949);
f_check_type_456(F->up, F->vt_1946, F->t_1945, G_NV((*(P171)rt_nil_check(F->e_619)).line_));
f_storage_606(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_619)).name_)), F->t_1945, &F->acc_1948);
f_bind_609(F->up, F->z_1944, F->acc_1948);
f_copy_code_591(F->up, F->t_1945, (*(P137)rt_nil_check(F->v_1949)), &F->x_1950);
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->acc_1948)), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->x_1950))), one_rt_gstr(59)));
(*(P114)rt_nil_check(F->z_1944)).flags_ = ((rt_int)1LL);
goto ret_;
}
F->y_1943 = f_new_sym_439(F->up, ((rt_int)2LL), (*(P171)rt_nil_check(F->e_619)).name_);
(*(P114)rt_nil_check(F->y_1943)).flags_ = ((rt_int)1LL);
F->up->vrp_ok_202 = 1;
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->e_619)).b_, F->t_1945, &F->vt_1946, &F->v_1949);
F->up->vrp_ok_202 = 0;
f_check_type_456(F->up, F->vt_1946, F->t_1945, G_NV((*(P171)rt_nil_check(F->e_619)).line_));
if ((G_NV((*(P119)rt_nil_check(F->t_1945)).kind_) == ((rt_int)1LL))) {
f_manifest_473(F->up, (*(P171)rt_nil_check(F->e_619)).b_, &(*(P114)rt_nil_check(F->y_1943)).mvalue_, &F->ok_1951);
(*(P114)rt_nil_check(F->y_1943)).hasmv_ = G_NV(F->ok_1951);
}
f_storage_606(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_619)).name_)), F->t_1945, &F->acc_1948);
f_copy_code_591(F->up, F->t_1945, (*(P137)rt_nil_check(F->v_1949)), &F->x_1950);
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->acc_1948)), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->x_1950))), one_rt_gstr(59)));
(*(P114)rt_nil_check(F->y_1943)).t_ = F->t_1945;
(*(P114)rt_nil_check(F->y_1943)).c_ = F->c_1947;
(*(P114)rt_nil_check(F->y_1943)).ro_ = 1;
f_bind_609(F->up, F->y_1943, F->acc_1948);
f_define_434(F->up, F->y_1943, G_NV((*(P171)rt_nil_check(F->e_619)).line_));
} else if (0 || sel1952 == ((rt_int)46LL)) {
if (((*(P171)rt_nil_check(F->e_619)).a_ != NULL)) {
if (((G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_619)).a_)).kind_) == ((rt_int)9LL)) && f_is_package_958(F->up, (*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_619)).a_)).a_))) {
F->y_1943 = f_member_of_962(F->up, f_path_of_328(F->up, (*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_619)).a_)).a_), (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_619)).a_)).name_)), G_NV((*(P171)rt_nil_check(F->e_619)).line_));
} else if ((G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_619)).a_)).kind_) == ((rt_int)5LL))) {
F->y_1943 = f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_619)).a_)).name_)));
} else {
F->y_1943 = NULL;
}
if (((F->y_1943 == NULL) || (G_NV((*(P114)rt_nil_check(F->y_1943)).kind_) != ((rt_int)6LL)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_619)).line_), rt_g_lit("an exception is renamed only as an exception", 44));
}
f_copy_sym_967(F->up, F->y_1943, &F->z_1944);
(*(P114)rt_nil_check(F->z_1944)).name_ = (*(P171)rt_nil_check(F->e_619)).name_;
f_define_434(F->up, F->z_1944, G_NV((*(P171)rt_nil_check(F->e_619)).line_));
goto ret_;
}
F->y_1943 = f_new_sym_439(F->up, ((rt_int)6LL), (*(P171)rt_nil_check(F->e_619)).name_);
f_new_name_214(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("ex_", 3), f_lower_s_222(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_619)).name_)))), one_rt_gstr(95)), &(*(P114)rt_nil_check(F->y_1943)).cname_);
f_put_to_236(F->up, F->up->out_globals_129, cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int ", 11), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1943)).cname_))), one_rt_gstr(59)));
f_put_to_236(F->up, F->up->out_excs_132, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1943)).cname_))), rt_g_lit(" = rt_exc(", 10)), f_q_229(F->up)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_619)).name_))), f_q_229(F->up)), rt_g_lit(");", 2)));
f_define_434(F->up, F->y_1943, G_NV((*(P171)rt_nil_check(F->e_619)).line_));
} else if (0 || sel1952 == ((rt_int)44LL) || sel1952 == ((rt_int)45LL)) {
if (f_is_generic_name_1148(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_619)).name_)))) {
f_attach_generic_body_1150(F->up, F->e_619);
} else if ((G_NV((*(P171)rt_nil_check(F->e_619)).ival_) == ((rt_int)1LL))) {
f_build_subprogram_616(F->up, F->e_619, &F->y_1943);
f_define_434(F->up, F->y_1943, G_NV((*(P171)rt_nil_check(F->e_619)).line_));
} else {
f_subprogram_body_633(F->up, F->e_619, f_lookup_decl_411(F->up, F->e_619));
}
} else if (0 || sel1952 == ((rt_int)55LL)) {
f_use_clause_981(F->up, F->e_619);
} else if (0 || sel1952 == ((rt_int)56LL)) {
f_pragma_decl_622(F->up, F->e_619);
} else {
f_other_decl_628(F->up, F->e_619);
}
}
ret_:

  return;
}

static void f_pragma_decl_622(struct f_greenc_1fr *up_, P171 e_621) {
  struct f_pragma_decl_622fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_621 = e_621;
ret_:

  return;
}

static void f_resolve_object_type_626(struct f_greenc_1fr *up_, P171 st_623, P119 *t_624, P175 *c_625) {
  struct f_resolve_object_type_626fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_623 = st_623;
F->t_624 = t_624;
F->c_625 = c_625;
if (((G_NV((*(P171)rt_nil_check(F->st_623)).kind_) != ((rt_int)80LL)) && (F->st_623 == F->up->anon_node_173))) {
(*F->t_624) = F->up->anon_typ_174;
(*F->c_625) = F->up->anon_cons_177;
goto ret_;
}
f_resolve_477(F->up, F->st_623, &(*F->t_624), &(*F->c_625));
if ((G_NV((*(P171)rt_nil_check(F->st_623)).kind_) != ((rt_int)80LL))) {
F->up->anon_node_173 = F->st_623;
F->up->anon_typ_174 = (*F->t_624);
F->up->anon_cons_177 = (*F->c_625);
}
ret_:

  return;
}

static void f_other_decl_628(struct f_greenc_1fr *up_, P171 e_627) {
  struct f_other_decl_628fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_627 = e_627;
if ((G_NV((*(P171)rt_nil_check(F->e_627)).kind_) == ((rt_int)48LL))) {
f_package_spec_972(F->up, F->e_627);
} else if ((G_NV((*(P171)rt_nil_check(F->e_627)).kind_) == ((rt_int)49LL))) {
f_package_body_977(F->up, F->e_627);
} else {
f_task_decl_1054(F->up, F->e_627);
}
ret_:

  return;
}

static int f_is_foreign_630(struct f_greenc_1fr *up_, P171 d_629) {
  struct f_is_foreign_630fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_629 = d_629;
if (((*(P171)rt_nil_check(F->d_629)).tag_ == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->d_629)).tag_)), rt_g_lit("INTERFACE", 9));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_subprogram_body_633(struct f_greenc_1fr *up_, P171 d_631, P114 y_632) {
  struct f_subprogram_body_633fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_631 = d_631;
F->y_632 = y_632;
F->saved_code_1953 = NULL;
F->saved_code_1953 = F->up->code_133;
F->saved_fields_1954 = NULL;
F->saved_fields_1954 = F->up->fields_buf_134;
F->saved_in_1955 = INT_MIN;
F->saved_in_1955 = G_NV(F->up->in_func_135);
F->saved_sym_1956 = NULL;
F->saved_sym_1956 = F->up->func_sym_139;
F->saved_exits_1957 = NULL;
F->saved_exits_1957 = F->up->exits_142;
F->saved_frames_1958 = INT64_MIN;
F->saved_frames_1958 = G_NV(F->up->frames_147);
F->saved_handlers_1959 = NULL;
F->saved_handlers_1959 = F->up->handlers_150;
F->saved_cleanups_1960 = NULL;
F->saved_cleanups_1960 = F->up->cleanups_151;
F->saved_pure_1961 = NULL;
F->saved_pure_1961 = F->up->pure_sym_200;
F->aw_1962 = NULL;
F->saved_pdepth_1963 = INT64_MIN;
F->saved_pdepth_1963 = G_NV(F->up->pure_depth_201);
F->args_1964 = NULL;
F->head_1965 = NULL;
F->frame_1966 = NULL;
F->parent_1967 = NULL;
F->ct_1968 = NULL;
F->x_1969 = NULL;
F->pm_1970 = NULL;
F->pm_1970 = (*(P114)rt_nil_check(F->y_632)).params_;
F->p_1971 = NULL;
F->frame_1966 = f_mk_211(F->up, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_632)).cname_)), rt_g_lit("fr", 2)));
if (G_NV(F->up->in_func_135)) {
F->parent_1967 = f_mk_211(F->up, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->up->func_sym_139)).cname_)), rt_g_lit("fr", 2)));
}
F->up->code_133 = f_new_buffer_233(F->up);
F->up->fields_buf_134 = f_new_buffer_233(F->up);
F->up->in_func_135 = 1;
F->up->func_sym_139 = F->y_632;
F->up->exits_142 = NULL;
F->up->frames_147 = ((rt_int)0LL);
F->up->handlers_150 = NULL;
F->up->cleanups_151 = NULL;
F->up->cur_level_136 = rt_add(G_NV(F->up->cur_level_136), ((rt_int)1LL));
F->args_1964 = f_mk_211(F->up, rt_g_lit("", 0));
f_open_scope_435(F->up);
f_push_unit_409(F->up, (*(P171)rt_nil_check(F->d_631)).name_);
if (((G_NV((*(P114)rt_nil_check(F->y_632)).kind_) == ((rt_int)3LL)) && (!G_NV((*(P114)rt_nil_check(F->y_632)).vrp_)))) {
F->up->pure_sym_200 = F->y_632;
F->up->pure_depth_201 = G_NV(F->up->depth_117);
}
if ((F->parent_1967 != NULL)) {
f_put_to_236(F->up, F->up->fields_buf_134, cat_rt_gstr(cat_rt_gstr(rt_g_lit(" struct ", 8), (*(P137)rt_nil_check(F->parent_1967))), rt_g_lit(" *up;", 5)));
F->args_1964 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P137)rt_nil_check(F->parent_1967))), rt_g_lit(" *up_", 5)));
f_emit_238(F->up, rt_g_lit("F->up = up_;", 12));
}
while ((F->pm_1970 != NULL)) {
f_ctype_461(F->up, (*(P1695)rt_nil_check(F->pm_1970)).t_, &F->ct_1968);
if ((({ rt_gstr at1973 = (*(P137)rt_nil_check(F->args_1964)); at1973.hi >= at1973.lo ? at1973.hi - at1973.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->args_1964 = f_mk_211(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->args_1964)), rt_g_lit(", ", 2)));
}
if ((G_NV((*(P1695)rt_nil_check(F->pm_1970)).mode_) == ((rt_int)1LL))) {
F->p_1971 = f_new_sym_439(F->up, ((rt_int)2LL), (*(P1695)rt_nil_check(F->pm_1970)).name_);
(*(P114)rt_nil_check(F->p_1971)).ro_ = 1;
f_put_to_236(F->up, F->up->fields_buf_134, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P137)rt_nil_check(F->ct_1968))), one_rt_gstr(32)), (*(P137)rt_nil_check((*(P1695)rt_nil_check(F->pm_1970)).cfield_))), one_rt_gstr(59)));
F->args_1964 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->args_1964)), (*(P137)rt_nil_check(F->ct_1968))), one_rt_gstr(32)), (*(P137)rt_nil_check((*(P1695)rt_nil_check(F->pm_1970)).cfield_))));
f_copy_code_591(F->up, (*(P1695)rt_nil_check(F->pm_1970)).t_, (*(P137)rt_nil_check((*(P1695)rt_nil_check(F->pm_1970)).cfield_)), &F->x_1969);
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->", 3), (*(P137)rt_nil_check((*(P1695)rt_nil_check(F->pm_1970)).cfield_))), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->x_1969))), one_rt_gstr(59)));
} else {
F->p_1971 = f_new_sym_439(F->up, ((rt_int)1LL), (*(P1695)rt_nil_check(F->pm_1970)).name_);
(*(P114)rt_nil_check(F->p_1971)).byref_ = 1;
f_put_to_236(F->up, F->up->fields_buf_134, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P137)rt_nil_check(F->ct_1968))), rt_g_lit(" *", 2)), (*(P137)rt_nil_check((*(P1695)rt_nil_check(F->pm_1970)).cfield_))), one_rt_gstr(59)));
F->args_1964 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->args_1964)), (*(P137)rt_nil_check(F->ct_1968))), rt_g_lit(" *", 2)), (*(P137)rt_nil_check((*(P1695)rt_nil_check(F->pm_1970)).cfield_))));
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->", 3), (*(P137)rt_nil_check((*(P1695)rt_nil_check(F->pm_1970)).cfield_))), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check((*(P1695)rt_nil_check(F->pm_1970)).cfield_))), one_rt_gstr(59)));
}
(*(P114)rt_nil_check(F->p_1971)).access_path_ = (*(P1695)rt_nil_check(F->pm_1970)).cfield_;
(*(P114)rt_nil_check(F->p_1971)).t_ = (*(P1695)rt_nil_check(F->pm_1970)).t_;
(*(P114)rt_nil_check(F->p_1971)).c_ = (*(P1695)rt_nil_check(F->pm_1970)).c_;
(*(P114)rt_nil_check(F->p_1971)).level_ = G_NV(F->up->cur_level_136);
f_define_434(F->up, F->p_1971, G_NV((*(P171)rt_nil_check(F->d_631)).line_));
F->pm_1970 = (*(P1695)rt_nil_check(F->pm_1970)).next_;
}
L_end_1972: ;
if ((G_NV((*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_632)).result_)).kind_) != ((rt_int)9LL))) {
f_ctype_461(F->up, (*(P114)rt_nil_check(F->y_632)).result_, &F->ct_1968);
f_put_to_236(F->up, F->up->fields_buf_134, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P137)rt_nil_check(F->ct_1968))), rt_g_lit(" result_;", 9)));
}
f_decl_elements_618(F->up, (*(P171)rt_nil_check(F->d_631)).c_);
if ((f_is_foreign_630(F->up, F->d_631) && (G_NV((*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_632)).result_)).kind_) == ((rt_int)9LL)))) {
F->x_1969 = f_mk_211(F->up, rt_g_lit("", 0));
F->pm_1970 = (*(P114)rt_nil_check(F->y_632)).params_;
while ((F->pm_1970 != NULL)) {
if ((({ rt_gstr at1975 = (*(P137)rt_nil_check(F->x_1969)); at1975.hi >= at1975.lo ? at1975.hi - at1975.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->x_1969 = f_mk_211(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->x_1969)), rt_g_lit(", ", 2)));
}
if ((f_is_string_538(F->up, (*(P1695)rt_nil_check(F->pm_1970)).t_) && (G_NV((*(P1695)rt_nil_check(F->pm_1970)).mode_) == ((rt_int)1LL)))) {
F->x_1969 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->x_1969)), rt_g_lit("rt_g_g2s(F->", 12)), (*(P137)rt_nil_check((*(P1695)rt_nil_check(F->pm_1970)).cfield_))), one_rt_gstr(41)));
} else {
F->x_1969 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->x_1969)), rt_g_lit("F->", 3)), (*(P137)rt_nil_check((*(P1695)rt_nil_check(F->pm_1970)).cfield_))));
}
F->pm_1970 = (*(P1695)rt_nil_check(F->pm_1970)).next_;
}
L_end_1974: ;
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_", 5), f_lower_s_222(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->d_631)).name_)))), one_rt_gstr(40)), (*(P137)rt_nil_check(F->x_1969))), rt_g_lit(");", 2)));
} else {
f_guarded_644(F->up, (*(P171)rt_nil_check(F->d_631)).d_, (*(P171)rt_nil_check(F->d_631)).e_, G_NV((*(P171)rt_nil_check(F->d_631)).line_));
}
f_task_awaits_1073(F->up, (*(P171)rt_nil_check(F->d_631)).c_, &F->aw_1962);
F->up->nunits_185 = rt_sub(G_NV(F->up->nunits_185), ((rt_int)1LL));
f_close_scope_436(F->up);
F->up->cur_level_136 = rt_sub(G_NV(F->up->cur_level_136), ((rt_int)1LL));
if ((({ rt_gstr at1976 = (*(P137)rt_nil_check(F->args_1964)); at1976.hi >= at1976.lo ? at1976.hi - at1976.lo + 1 : (rt_int)0; }) == ((rt_int)0LL))) {
F->args_1964 = f_mk_211(F->up, rt_g_lit("void", 4));
}
f_ctype_461(F->up, (*(P114)rt_nil_check(F->y_632)).result_, &F->ct_1968);
F->head_1965 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P137)rt_nil_check(F->ct_1968))), one_rt_gstr(32)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_632)).cname_))), one_rt_gstr(40)), (*(P137)rt_nil_check(F->args_1964))), one_rt_gstr(41)));
f_put_to_236(F->up, F->up->out_protos_128, cat_rt_gstr((*(P137)rt_nil_check(F->head_1965)), one_rt_gstr(59)));
f_put_to_236(F->up, F->up->out_frames_126, cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P137)rt_nil_check(F->frame_1966))), rt_g_lit(" { int dummy;", 13)));
f_splice_243(F->up, F->up->out_frames_126, F->up->fields_buf_134);
f_put_to_236(F->up, F->up->out_frames_126, rt_g_lit("};", 2));
f_put_to_236(F->up, F->up->out_funcs_130, cat_rt_gstr((*(P137)rt_nil_check(F->head_1965)), rt_g_lit(" {", 2)));
f_put_to_236(F->up, F->up->out_funcs_130, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  struct ", 9), (*(P137)rt_nil_check(F->frame_1966))), rt_g_lit(" *F = rt_alloc(sizeof *F);", 26)));
if (((G_NV((*(P114)rt_nil_check(F->y_632)).kind_) == ((rt_int)4LL)) && ((*(P114)rt_nil_check(F->y_632)).access_path_ != NULL))) {
f_put_to_236(F->up, F->up->out_funcs_130, cat_rt_gstr(rt_g_lit("  ", 2), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_632)).access_path_))));
}
f_splice_243(F->up, F->up->out_funcs_130, F->up->code_133);
if ((G_NV((*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_632)).result_)).kind_) != ((rt_int)9LL))) {
f_put_to_236(F->up, F->up->out_funcs_130, rt_g_lit("  rt_raise(RT_X_INIT);", 22));
f_put_to_236(F->up, F->up->out_funcs_130, rt_g_lit("ret_:", 5));
f_put_to_236(F->up, F->up->out_funcs_130, (*(P137)rt_nil_check(F->aw_1962)));
f_put_to_236(F->up, F->up->out_funcs_130, rt_g_lit("  return F->result_;", 20));
} else {
f_put_to_236(F->up, F->up->out_funcs_130, rt_g_lit("ret_:", 5));
f_put_to_236(F->up, F->up->out_funcs_130, (*(P137)rt_nil_check(F->aw_1962)));
f_put_to_236(F->up, F->up->out_funcs_130, rt_g_lit("  return;", 9));
}
f_put_to_236(F->up, F->up->out_funcs_130, rt_g_lit("}", 1));
f_put_to_236(F->up, F->up->out_funcs_130, rt_g_lit("", 0));
F->up->code_133 = F->saved_code_1953;
F->up->fields_buf_134 = F->saved_fields_1954;
F->up->in_func_135 = G_NV(F->saved_in_1955);
F->up->func_sym_139 = F->saved_sym_1956;
F->up->exits_142 = F->saved_exits_1957;
F->up->frames_147 = G_NV(F->saved_frames_1958);
F->up->handlers_150 = F->saved_handlers_1959;
F->up->cleanups_151 = F->saved_cleanups_1960;
F->up->pure_sym_200 = F->saved_pure_1961;
F->up->pure_depth_201 = G_NV(F->saved_pdepth_1963);
ret_:

  return;
}

static void f_gen_statements_635(struct f_greenc_1fr *up_, P171 stmts_634) {
  struct f_gen_statements_635fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_634 = stmts_634;
F->s_1977 = NULL;
F->s_1977 = F->stmts_634;
while ((F->s_1977 != NULL)) {
f_gen_statement_650(F->up, F->s_1977);
F->s_1977 = (*(P171)rt_nil_check(F->s_1977)).next_;
}
L_end_1978: ;
ret_:

  return;
}

static void f_pop_frames_637(struct f_greenc_1fr *up_, rt_int upto_636) {
  struct f_pop_frames_637fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->upto_636 = upto_636;
F->i_1979 = INT64_MIN;
F->i_1979 = G_NV(F->up->frames_147);
F->c_1980 = NULL;
F->c_1980 = F->up->cleanups_151;
while ((G_NV(F->i_1979) > F->upto_636)) {
f_emit_238(F->up, (*(P137)rt_nil_check((*(P148)rt_nil_check(F->c_1980)).s_)));
F->c_1980 = (*(P148)rt_nil_check(F->c_1980)).next_;
F->i_1979 = rt_sub(G_NV(F->i_1979), ((rt_int)1LL));
}
L_end_1981: ;
ret_:

  return;
}

static void f_push_cleanup_639(struct f_greenc_1fr *up_, rt_gstr s_638) {
  struct f_push_cleanup_639fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_638 = cp_rt_gstr(s_638);
F->up->cleanups_151 = ({ R149 *cell1982 = rt_alloc(sizeof(R149)); *cell1982 = cp_R149(({ R149 ag1983; ag1983.s_ = NULL; ag1983.next_ = F->up->cleanups_151; ag1983; })); (P148)cell1982; });
(*(P148)rt_nil_check(F->up->cleanups_151)).s_ = f_mk_211(F->up, F->s_638);
F->up->frames_147 = rt_add(G_NV(F->up->frames_147), ((rt_int)1LL));
ret_:

  return;
}

static void f_pop_cleanup_640(struct f_greenc_1fr *up_) {
  struct f_pop_cleanup_640fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->cleanups_151 = (*(P148)rt_nil_check(F->up->cleanups_151)).next_;
F->up->frames_147 = rt_sub(G_NV(F->up->frames_147), ((rt_int)1LL));
ret_:

  return;
}

static void f_guarded_644(struct f_greenc_1fr *up_, P171 stmts_641, P171 hs_642, rt_int line_643) {
  struct f_guarded_644fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_641 = stmts_641;
F->hs_642 = hs_642;
F->line_643 = line_643;
F->f_1984 = NULL;
F->x_1985 = NULL;
F->h_1986 = NULL;
F->n_1987 = NULL;
F->first_1988 = INT_MIN;
F->first_1988 = 1;
F->has_others_1989 = INT_MIN;
F->has_others_1989 = 0;
F->conds_1990 = NULL;
if ((F->hs_642 == NULL)) {
f_gen_statements_635(F->up, F->stmts_641);
goto ret_;
}
f_new_name_214(F->up, rt_g_lit("xf", 2), &F->f_1984);
f_new_name_214(F->up, rt_g_lit("x", 1), &F->x_1985);
f_push_cleanup_639(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P137)rt_nil_check(F->f_1984))), rt_g_lit(");", 2)));
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_frame ", 11), (*(P137)rt_nil_check(F->f_1984))), one_rt_gstr(59)));
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (RT_TRY(", 11), (*(P137)rt_nil_check(F->f_1984))), rt_g_lit(")) {", 4)));
f_gen_statements_635(F->up, F->stmts_641);
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P137)rt_nil_check(F->f_1984))), rt_g_lit(");", 2)));
f_emit_238(F->up, rt_g_lit("} else {", 8));
f_pop_cleanup_640(F->up);
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P137)rt_nil_check(F->f_1984))), rt_g_lit(");", 2)));
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("int ", 4), (*(P137)rt_nil_check(F->x_1985))), rt_g_lit(" = rt_xcur;", 11)));
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (rt_g_aborted()) rt_raise(", 29), (*(P137)rt_nil_check(F->x_1985))), rt_g_lit(");", 2)));
F->up->handlers_150 = ({ R149 *cell1991 = rt_alloc(sizeof(R149)); *cell1991 = cp_R149(({ R149 ag1992; ag1992.s_ = F->x_1985; ag1992.next_ = F->up->handlers_150; ag1992; })); (P148)cell1991; });
F->h_1986 = F->hs_642;
while ((F->h_1986 != NULL)) {
F->n_1987 = (*(P171)rt_nil_check(F->h_1986)).a_;
F->conds_1990 = f_mk_211(F->up, rt_g_lit("0", 1));
while ((F->n_1987 != NULL)) {
if (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->n_1987)).name_)), rt_g_lit("OTHERS", 6))) {
F->has_others_1989 = 1;
F->conds_1990 = f_mk_211(F->up, rt_g_lit("1", 1));
} else {
F->up->prefix_hint_198 = (*(P171)rt_nil_check(F->n_1987)).tag_;
f_exc_id_648(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->n_1987)).name_)), G_NV((*(P171)rt_nil_check(F->h_1986)).line_), &F->f_1984);
F->conds_1990 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->conds_1990)), rt_g_lit(" || ", 4)), (*(P137)rt_nil_check(F->x_1985))), rt_g_lit(" == ", 4)), (*(P137)rt_nil_check(F->f_1984))));
}
F->n_1987 = (*(P171)rt_nil_check(F->n_1987)).next_;
}
L_end_1994: ;
if (G_NV(F->first_1988)) {
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P137)rt_nil_check(F->conds_1990))), rt_g_lit(") {", 3)));
} else {
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P137)rt_nil_check(F->conds_1990))), rt_g_lit(") {", 3)));
}
F->first_1988 = 0;
f_gen_statements_635(F->up, (*(P171)rt_nil_check(F->h_1986)).b_);
F->h_1986 = (*(P171)rt_nil_check(F->h_1986)).next_;
}
L_end_1993: ;
if ((!G_NV(F->has_others_1989))) {
f_emit_238(F->up, rt_g_lit("} else {", 8));
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_raise(", 9), (*(P137)rt_nil_check(F->x_1985))), rt_g_lit(");", 2)));
}
f_emit_238(F->up, rt_g_lit("}", 1));
F->up->handlers_150 = (*(P148)rt_nil_check(F->up->handlers_150)).next_;
f_emit_238(F->up, rt_g_lit("}", 1));
f_emit_238(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_exc_id_648(struct f_greenc_1fr *up_, rt_gstr name_645, rt_int line_646, P137 *r_647) {
  struct f_exc_id_648fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_645 = cp_rt_gstr(name_645);
F->line_646 = line_646;
F->r_647 = r_647;
F->y_1995 = NULL;
F->y_1995 = f_lookup_396(F->up, F->name_645);
if ((F->up->prefix_hint_198 != NULL)) {
F->y_1995 = f_member_of_962(F->up, (*(P137)rt_nil_check(F->up->prefix_hint_198)), F->name_645, F->line_646);
F->up->prefix_hint_198 = NULL;
}
if (((F->y_1995 == NULL) || (G_NV((*(P114)rt_nil_check(F->y_1995)).kind_) != ((rt_int)6LL)))) {
f_fail_232(F->up, F->line_646, cat_rt_gstr(F->name_645, rt_g_lit(" is not an exception", 20)));
}
(*F->r_647) = (*(P114)rt_nil_check(F->y_1995)).cname_;
ret_:

  return;
}

static void f_gen_statement_650(struct f_greenc_1fr *up_, P171 s_649) {
  struct f_gen_statement_650fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_649 = s_649;
F->t_1996 = NULL;
F->vt_1997 = NULL;
F->c_1998 = NULL;
F->lv_1999 = NULL;
F->v_2000 = NULL;
F->x_2001 = NULL;
F->ro_2002 = INT_MIN;
{ rt_int sel2003 = G_NV((*(P171)rt_nil_check(F->s_649)).kind_);
if (0 || sel2003 == ((rt_int)20LL)) {
if ((((G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->s_649)).a_)).kind_) == ((rt_int)8LL)) && ((*(P171)rt_nil_check((*(P171)rt_nil_check(F->s_649)).a_)).b_ != NULL)) && ((G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->s_649)).a_)).b_)).kind_) == ((rt_int)14LL)) || (G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->s_649)).a_)).b_)).kind_) == ((rt_int)80LL))))) {
f_slice_assign_652(F->up, F->s_649);
goto ret_;
}
F->up->in_lv_path_203 = 1;
F->up->last_deref_204 = 0;
f_lvalue_695(F->up, (*(P171)rt_nil_check(F->s_649)).a_, &F->lv_1999, &F->t_1996, &F->c_1998, &F->ro_2002);
F->up->in_lv_path_203 = 0;
if (G_NV(F->ro_2002)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->s_649)).line_), rt_g_lit("assignment to a constant or an in parameter", 43));
}
f_check_pure_target_1122(F->up, (*(P171)rt_nil_check(F->s_649)).a_, G_NV((*(P171)rt_nil_check(F->s_649)).line_));
if (f_is_const_access_689(F->up, (*(P171)rt_nil_check(F->s_649)).b_)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->s_649)).line_), rt_g_lit("a constant of an access type cannot be assigned to a variable (RM79 3.8)", 72));
}
F->up->vrp_ok_202 = 1;
if (((G_NV((*(P119)rt_nil_check(F->t_1996)).kind_) == ((rt_int)6LL)) && (G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->s_649)).b_)).kind_) == ((rt_int)12LL)))) {
F->up->agg_bounds_178 = F->lv_1999;
}
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->s_649)).b_, F->t_1996, &F->vt_1997, &F->v_2000);
F->up->agg_bounds_178 = NULL;
F->up->vrp_ok_202 = 0;
f_check_type_456(F->up, F->vt_1997, F->t_1996, G_NV((*(P171)rt_nil_check(F->s_649)).line_));
f_assign_code_587(F->up, (*(P137)rt_nil_check(F->lv_1999)), F->t_1996, (*(P137)rt_nil_check(F->v_2000)), F->c_1998, &F->x_2001);
f_emit_238(F->up, (*(P137)rt_nil_check(F->x_2001)));
} else if (0 || sel2003 == ((rt_int)21LL)) {
F->up->vrp_ok_202 = 1;
f_gen_call_654(F->up, F->s_649);
F->up->vrp_ok_202 = 0;
} else if (0 || sel2003 == ((rt_int)22LL)) {
f_gen_if_656(F->up, F->s_649);
} else if (0 || sel2003 == ((rt_int)23LL)) {
f_gen_case_658(F->up, F->s_649);
} else if (0 || sel2003 == ((rt_int)24LL)) {
f_gen_loop_664(F->up, F->s_649);
} else if (0 || sel2003 == ((rt_int)25LL)) {
f_gen_block_666(F->up, F->s_649);
} else if (0 || sel2003 == ((rt_int)26LL)) {
f_gen_exit_671(F->up, F->s_649);
} else if (0 || sel2003 == ((rt_int)27LL)) {
f_gen_return_673(F->up, F->s_649);
} else if (0 || sel2003 == ((rt_int)28LL)) {
if (((((*(P171)rt_nil_check(F->s_649)).tag_ != NULL) && f_is_task_name_1027(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->s_649)).tag_)))) && eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->s_649)).name_)), rt_g_lit("FAILURE", 7)))) {
f_task_failure_1075(F->up, F->s_649);
} else {
F->up->prefix_hint_198 = (*(P171)rt_nil_check(F->s_649)).tag_;
f_exc_id_648(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->s_649)).name_)), G_NV((*(P171)rt_nil_check(F->s_649)).line_), &F->x_2001);
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_raise(", 9), (*(P137)rt_nil_check(F->x_2001))), rt_g_lit(");", 2)));
}
} else if (0 || sel2003 == ((rt_int)29LL)) {
if ((F->up->handlers_150 == NULL)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->s_649)).line_), rt_g_lit("raise; outside an exception handler", 35));
}
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_raise(", 9), (*(P137)rt_nil_check((*(P148)rt_nil_check(F->up->handlers_150)).s_))), rt_g_lit(");", 2)));
} else if (0 || sel2003 == ((rt_int)30LL)) {
f_condition_779(F->up, (*(P171)rt_nil_check(F->s_649)).a_, F->up->ty_bool_154, &F->vt_1997, &F->v_2000);
f_check_type_456(F->up, F->vt_1997, F->up->ty_bool_154, G_NV((*(P171)rt_nil_check(F->s_649)).line_));
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (!(", 6), (*(P137)rt_nil_check(F->v_2000))), rt_g_lit(")) rt_raise(RT_X_ASSERT);", 25)));
} else if (0 || sel2003 == ((rt_int)31LL)) {
} else {
f_task_statement_gen_1117(F->up, F->s_649);
}
}
ret_:

  return;
}

static void f_slice_assign_652(struct f_greenc_1fr *up_, P171 s_651) {
  struct f_slice_assign_652fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_651 = s_651;
F->lv_2004 = NULL;
F->v_2005 = NULL;
F->sl_2006 = NULL;
F->x_2007 = NULL;
F->t_2008 = NULL;
F->st_2009 = NULL;
F->vt_2010 = NULL;
F->c_2011 = NULL;
F->ro_2012 = INT_MIN;
F->up->in_lv_path_203 = 1;
F->up->last_deref_204 = 0;
f_lvalue_695(F->up, (*(P171)rt_nil_check((*(P171)rt_nil_check(F->s_651)).a_)).a_, &F->lv_2004, &F->t_2008, &F->c_2011, &F->ro_2012);
F->up->in_lv_path_203 = 0;
if (G_NV(F->ro_2012)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->s_651)).line_), rt_g_lit("assignment to a constant or an in parameter", 43));
}
f_check_pure_target_1122(F->up, (*(P171)rt_nil_check(F->s_651)).a_, G_NV((*(P171)rt_nil_check(F->s_651)).line_));
F->ro_2012 = 0;
f_index_on_713(F->up, (*(P137)rt_nil_check(F->lv_2004)), F->t_2008, (*(P171)rt_nil_check(F->s_651)).a_, &F->ro_2012, 0, &F->sl_2006, &F->st_2009, &F->c_2011);
F->up->vrp_ok_202 = 1;
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->s_651)).b_, F->st_2009, &F->vt_2010, &F->v_2005);
F->up->vrp_ok_202 = 0;
f_check_type_456(F->up, F->vt_2010, F->st_2009, G_NV((*(P171)rt_nil_check(F->s_651)).line_));
f_ctype_461(F->up, F->st_2009, &F->x_2007);
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P137)rt_nil_check(F->x_2007))), rt_g_lit(" sl_ = ", 7)), (*(P137)rt_nil_check(F->sl_2006))), rt_g_lit("; as_", 5)), (*(P137)rt_nil_check(F->x_2007))), rt_g_lit("(&sl_, ", 7)), (*(P137)rt_nil_check(F->v_2005))), rt_g_lit("); }", 4)));
ret_:

  return;
}

static void f_gen_call_654(struct f_greenc_1fr *up_, P171 s_653) {
  struct f_gen_call_654fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_653 = s_653;
F->c_2013 = NULL;
F->c_2013 = (*(P171)rt_nil_check(F->s_653)).a_;
F->t_2014 = NULL;
F->v_2015 = NULL;
if (((G_NV((*(P171)rt_nil_check(F->c_2013)).kind_) == ((rt_int)5LL)) || (G_NV((*(P171)rt_nil_check(F->c_2013)).kind_) == ((rt_int)9LL)))) {
F->c_2013 = f_nn_285(F->up, ((rt_int)8LL), G_NV((*(P171)rt_nil_check(F->s_653)).line_));
(*(P171)rt_nil_check(F->c_2013)).a_ = (*(P171)rt_nil_check(F->s_653)).a_;
}
if ((G_NV((*(P171)rt_nil_check(F->c_2013)).kind_) != ((rt_int)8LL))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->s_653)).line_), rt_g_lit("not a procedure call", 20));
}
f_gcall_942(F->up, F->c_2013, 1, &F->t_2014, &F->v_2015);
f_emit_238(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->v_2015)), one_rt_gstr(59)));
ret_:

  return;
}

static void f_gen_if_656(struct f_greenc_1fr *up_, P171 s_655) {
  struct f_gen_if_656fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_655 = s_655;
F->a_2016 = NULL;
F->a_2016 = (*(P171)rt_nil_check(F->s_655)).a_;
F->first_2017 = INT_MIN;
F->first_2017 = 1;
F->t_2018 = NULL;
F->v_2019 = NULL;
while ((F->a_2016 != NULL)) {
f_condition_779(F->up, (*(P171)rt_nil_check(F->a_2016)).a_, F->up->ty_bool_154, &F->t_2018, &F->v_2019);
f_check_type_456(F->up, F->t_2018, F->up->ty_bool_154, G_NV((*(P171)rt_nil_check(F->s_655)).line_));
if (G_NV(F->first_2017)) {
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P137)rt_nil_check(F->v_2019))), rt_g_lit(") {", 3)));
} else {
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P137)rt_nil_check(F->v_2019))), rt_g_lit(") {", 3)));
}
F->first_2017 = 0;
f_gen_statements_635(F->up, (*(P171)rt_nil_check(F->a_2016)).b_);
F->a_2016 = (*(P171)rt_nil_check(F->a_2016)).next_;
}
L_end_2020: ;
if ((G_NV((*(P171)rt_nil_check(F->s_655)).flag_) == ((rt_int)1LL))) {
f_emit_238(F->up, rt_g_lit("} else {", 8));
f_gen_statements_635(F->up, (*(P171)rt_nil_check(F->s_655)).b_);
}
f_emit_238(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_gen_case_658(struct f_greenc_1fr *up_, P171 s_657) {
  struct f_gen_case_658fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_657 = s_657;
F->st_2021 = NULL;
F->vt_2022 = NULL;
F->first_2023 = INT_MIN;
F->first_2023 = 1;
F->a_2024 = NULL;
F->a_2024 = (*(P171)rt_nil_check(F->s_657)).b_;
F->lab_2025 = NULL;
F->sel_2026 = NULL;
F->tmp_2027 = NULL;
F->ct_2028 = NULL;
F->conds_2029 = NULL;
F->v_2030 = NULL;
F->lo_2031 = NULL;
F->hi_2032 = NULL;
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->s_657)).a_, NULL, &F->st_2021, &F->sel_2026);
f_new_name_214(F->up, rt_g_lit("sel", 3), &F->tmp_2027);
f_ctype_461(F->up, F->st_2021, &F->ct_2028);
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P137)rt_nil_check(F->ct_2028))), one_rt_gstr(32)), (*(P137)rt_nil_check(F->tmp_2027))), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->sel_2026))), one_rt_gstr(59)));
while ((F->a_2024 != NULL)) {
F->lab_2025 = (*(P171)rt_nil_check(F->a_2024)).a_;
F->conds_2029 = f_mk_211(F->up, rt_g_lit("0", 1));
while ((F->lab_2025 != NULL)) {
if (((*(P171)rt_nil_check(F->lab_2025)).b_ == NULL)) {
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->lab_2025)).a_, F->st_2021, &F->vt_2022, &F->v_2030);
f_check_type_456(F->up, F->vt_2022, F->st_2021, G_NV((*(P171)rt_nil_check(F->s_657)).line_));
F->conds_2029 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->conds_2029)), rt_g_lit(" || ", 4)), (*(P137)rt_nil_check(F->tmp_2027))), rt_g_lit(" == ", 4)), (*(P137)rt_nil_check(F->v_2030))));
} else {
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->lab_2025)).a_, F->st_2021, &F->vt_2022, &F->lo_2031);
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->lab_2025)).b_, F->st_2021, &F->vt_2022, &F->hi_2032);
F->conds_2029 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->conds_2029)), rt_g_lit(" || (", 5)), (*(P137)rt_nil_check(F->tmp_2027))), rt_g_lit(" >= ", 4)), (*(P137)rt_nil_check(F->lo_2031))), rt_g_lit(" && ", 4)), (*(P137)rt_nil_check(F->tmp_2027))), rt_g_lit(" <= ", 4)), (*(P137)rt_nil_check(F->hi_2032))), one_rt_gstr(41)));
}
F->lab_2025 = (*(P171)rt_nil_check(F->lab_2025)).next_;
}
L_end_2034: ;
if (G_NV(F->first_2023)) {
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P137)rt_nil_check(F->conds_2029))), rt_g_lit(") {", 3)));
} else {
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P137)rt_nil_check(F->conds_2029))), rt_g_lit(") {", 3)));
}
F->first_2023 = 0;
f_gen_statements_635(F->up, (*(P171)rt_nil_check(F->a_2024)).b_);
F->a_2024 = (*(P171)rt_nil_check(F->a_2024)).next_;
}
L_end_2033: ;
if (G_NV(F->first_2023)) {
f_emit_238(F->up, rt_g_lit("{", 1));
} else {
f_emit_238(F->up, rt_g_lit("} else {", 8));
}
if ((G_NV((*(P171)rt_nil_check(F->s_657)).flag_) == ((rt_int)1LL))) {
f_gen_statements_635(F->up, (*(P171)rt_nil_check(F->s_657)).c_);
} else {
f_emit_238(F->up, rt_g_lit("rt_raise(RT_X_CASE);", 20));
}
f_emit_238(F->up, rt_g_lit("}", 1));
f_emit_238(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_push_exit_662(struct f_greenc_1fr *up_, P137 match_659, int is_loop_660, P137 *label_661) {
  struct f_push_exit_662fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->match_659 = match_659;
F->is_loop_660 = is_loop_660;
F->label_661 = label_661;
f_new_name_214(F->up, rt_g_lit("L_end_", 6), &(*F->label_661));
F->up->exits_142 = ({ R141 *cell2035 = rt_alloc(sizeof(R141)); *cell2035 = cp_R141(({ R141 ag2036; ag2036.match_ = F->match_659; ag2036.label_ = (*F->label_661); ag2036.depth_ = G_NV(F->up->frames_147); ag2036.is_loop_ = F->is_loop_660; ag2036.next_ = F->up->exits_142; ag2036; })); (P140)cell2035; });
ret_:

  return;
}

static void f_gen_loop_664(struct f_greenc_1fr *up_, P171 s_663) {
  struct f_gen_loop_664fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_663 = s_663;
F->t_2037 = NULL;
F->vt_2038 = NULL;
F->c_2039 = NULL;
F->label_2040 = NULL;
F->cond_2041 = NULL;
F->acc_2042 = NULL;
F->lov_2043 = NULL;
F->hiv_2044 = NULL;
F->it_2045 = NULL;
F->y_2046 = NULL;
F->r_2047 = NULL;
f_push_exit_662(F->up, (*(P171)rt_nil_check(F->s_663)).tag_, 1, &F->label_2040);
if ((G_NV((*(P171)rt_nil_check(F->s_663)).flag_) == ((rt_int)0LL))) {
f_emit_238(F->up, rt_g_lit("for (;;) {", 10));
f_gen_statements_635(F->up, (*(P171)rt_nil_check(F->s_663)).b_);
f_emit_238(F->up, rt_g_lit("}", 1));
} else if ((G_NV((*(P171)rt_nil_check(F->s_663)).flag_) == ((rt_int)1LL))) {
f_condition_779(F->up, (*(P171)rt_nil_check(F->s_663)).a_, F->up->ty_bool_154, &F->vt_2038, &F->cond_2041);
f_check_type_456(F->up, F->vt_2038, F->up->ty_bool_154, G_NV((*(P171)rt_nil_check(F->s_663)).line_));
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("while (", 7), (*(P137)rt_nil_check(F->cond_2041))), rt_g_lit(") {", 3)));
f_gen_statements_635(F->up, (*(P171)rt_nil_check(F->s_663)).b_);
f_emit_238(F->up, rt_g_lit("}", 1));
} else {
F->r_2047 = (*(P171)rt_nil_check(F->s_663)).a_;
F->c_2039 = f_new_cons_442(F->up);
if ((G_NV((*(P171)rt_nil_check(F->r_2047)).kind_) == ((rt_int)14LL))) {
f_range_bounds_734(F->up, (*(P171)rt_nil_check(F->r_2047)).a_, (*(P171)rt_nil_check(F->r_2047)).b_, NULL, G_NV((*(P171)rt_nil_check(F->s_663)).line_), &F->t_2037, &(*(P175)rt_nil_check(F->c_2039)).lo_, &(*(P175)rt_nil_check(F->c_2039)).hi_);
} else {
f_resolve_477(F->up, F->r_2047, &F->t_2037, &F->c_2039);
if (((*(P175)rt_nil_check(F->c_2039)).lo_ == NULL)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->s_663)).line_), rt_g_lit("a FOR loop needs a discrete range", 33));
}
}
if (((((G_NV((*(P119)rt_nil_check(F->t_2037)).kind_) != ((rt_int)1LL)) && (G_NV((*(P119)rt_nil_check(F->t_2037)).kind_) != ((rt_int)4LL))) && (G_NV((*(P119)rt_nil_check(F->t_2037)).kind_) != ((rt_int)11LL))) && (G_NV((*(P119)rt_nil_check(F->t_2037)).kind_) != ((rt_int)2LL)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->s_663)).line_), rt_g_lit("a FOR loop needs a discrete range (RM79 5.6)", 44));
}
f_storage_606(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->s_663)).name_)), F->t_2037, &F->acc_2042);
f_new_name_214(F->up, rt_g_lit("lo", 2), &F->lov_2043);
f_new_name_214(F->up, rt_g_lit("hi", 2), &F->hiv_2044);
f_new_name_214(F->up, rt_g_lit("it", 2), &F->it_2045);
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_int ", 9), (*(P137)rt_nil_check(F->lov_2043))), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_2039)).lo_))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->hiv_2044))), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_2039)).hi_))), one_rt_gstr(59)));
if ((G_NV((*(P171)rt_nil_check(F->s_663)).ival_) == ((rt_int)1LL))) {
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P137)rt_nil_check(F->it_2045))), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->hiv_2044))), rt_g_lit("; ", 2)), (*(P137)rt_nil_check(F->it_2045))), rt_g_lit(" >= ", 4)), (*(P137)rt_nil_check(F->lov_2043))), rt_g_lit("; ", 2)), (*(P137)rt_nil_check(F->it_2045))), rt_g_lit("--) {", 5)));
} else {
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P137)rt_nil_check(F->it_2045))), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->lov_2043))), rt_g_lit("; ", 2)), (*(P137)rt_nil_check(F->it_2045))), rt_g_lit(" <= ", 4)), (*(P137)rt_nil_check(F->hiv_2044))), rt_g_lit("; ", 2)), (*(P137)rt_nil_check(F->it_2045))), rt_g_lit("++) {", 5)));
}
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->acc_2042)), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->it_2045))), one_rt_gstr(59)));
f_open_scope_435(F->up);
F->y_2046 = f_new_sym_439(F->up, ((rt_int)2LL), (*(P171)rt_nil_check(F->s_663)).name_);
(*(P114)rt_nil_check(F->y_2046)).t_ = F->t_2037;
(*(P114)rt_nil_check(F->y_2046)).ro_ = 1;
f_bind_609(F->up, F->y_2046, F->acc_2042);
f_define_434(F->up, F->y_2046, G_NV((*(P171)rt_nil_check(F->s_663)).line_));
f_gen_statements_635(F->up, (*(P171)rt_nil_check(F->s_663)).b_);
f_close_scope_436(F->up);
f_emit_238(F->up, rt_g_lit("}", 1));
f_emit_238(F->up, rt_g_lit("}", 1));
}
F->up->exits_142 = (*(P140)rt_nil_check(F->up->exits_142)).next_;
f_emit_238(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->label_2040)), rt_g_lit(": ;", 3)));
ret_:

  return;
}

static void f_gen_block_666(struct f_greenc_1fr *up_, P171 s_665) {
  struct f_gen_block_666fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_665 = s_665;
F->label_2048 = NULL;
F->aw_2049 = NULL;
f_push_exit_662(F->up, (*(P171)rt_nil_check(F->s_665)).tag_, 0, &F->label_2048);
f_emit_238(F->up, rt_g_lit("{", 1));
f_open_scope_435(F->up);
if (((*(P171)rt_nil_check(F->s_665)).tag_ != NULL)) {
f_push_unit_409(F->up, (*(P171)rt_nil_check(F->s_665)).tag_);
}
f_decl_elements_618(F->up, (*(P171)rt_nil_check(F->s_665)).a_);
f_guarded_644(F->up, (*(P171)rt_nil_check(F->s_665)).b_, (*(P171)rt_nil_check(F->s_665)).c_, G_NV((*(P171)rt_nil_check(F->s_665)).line_));
f_task_awaits_1073(F->up, (*(P171)rt_nil_check(F->s_665)).a_, &F->aw_2049);
f_emit_238(F->up, (*(P137)rt_nil_check(F->aw_2049)));
if (((*(P171)rt_nil_check(F->s_665)).tag_ != NULL)) {
F->up->nunits_185 = rt_sub(G_NV(F->up->nunits_185), ((rt_int)1LL));
}
f_close_scope_436(F->up);
f_emit_238(F->up, rt_g_lit("}", 1));
F->up->exits_142 = (*(P140)rt_nil_check(F->up->exits_142)).next_;
f_emit_238(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->label_2048)), rt_g_lit(": ;", 3)));
ret_:

  return;
}

static int f_exit_matches_669(struct f_greenc_1fr *up_, P171 s_667, P140 x_668) {
  struct f_exit_matches_669fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_667 = s_667;
F->x_668 = x_668;
if (((*(P171)rt_nil_check(F->s_667)).name_ == NULL)) {
F->result_ = G_NV((*(P140)rt_nil_check(F->x_668)).is_loop_);
goto ret_;
} else if (((*(P140)rt_nil_check(F->x_668)).match_ == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P137)rt_nil_check((*(P140)rt_nil_check(F->x_668)).match_)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->s_667)).name_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_gen_exit_671(struct f_greenc_1fr *up_, P171 s_670) {
  struct f_gen_exit_671fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_670 = s_670;
F->x_2050 = NULL;
F->x_2050 = F->up->exits_142;
F->t_2051 = NULL;
F->v_2052 = NULL;
while ((F->x_2050 != NULL)) {
if (((G_NV(F->up->accept_depth_187) > ((rt_int)0LL)) && (F->x_2050 == F->up->accept_exits_146))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->s_670)).line_), rt_g_lit("an exit statement cannot leave an accept statement (RM79 5.7)", 61));
}
if (f_exit_matches_669(F->up, F->s_670, F->x_2050)) {
if (((*(P171)rt_nil_check(F->s_670)).a_ != NULL)) {
f_condition_779(F->up, (*(P171)rt_nil_check(F->s_670)).a_, F->up->ty_bool_154, &F->t_2051, &F->v_2052);
f_check_type_456(F->up, F->t_2051, F->up->ty_bool_154, G_NV((*(P171)rt_nil_check(F->s_670)).line_));
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P137)rt_nil_check(F->v_2052))), rt_g_lit(") {", 3)));
}
f_pop_frames_637(F->up, G_NV((*(P140)rt_nil_check(F->x_2050)).depth_));
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("goto ", 5), (*(P137)rt_nil_check((*(P140)rt_nil_check(F->x_2050)).label_))), one_rt_gstr(59)));
if (((*(P171)rt_nil_check(F->s_670)).a_ != NULL)) {
f_emit_238(F->up, rt_g_lit("}", 1));
}
goto ret_;
}
F->x_2050 = (*(P140)rt_nil_check(F->x_2050)).next_;
}
L_end_2053: ;
if (((*(P171)rt_nil_check(F->s_670)).name_ == NULL)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->s_670)).line_), rt_g_lit("exit outside a loop", 19));
}
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->s_670)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("exit ", 5), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->s_670)).name_))), rt_g_lit(" names no enclosing loop", 24)));
ret_:

  return;
}

static void f_gen_return_673(struct f_greenc_1fr *up_, P171 s_672) {
  struct f_gen_return_673fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_672 = s_672;
F->vt_2054 = NULL;
F->v_2055 = NULL;
if ((!G_NV(F->up->in_func_135))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->s_672)).line_), rt_g_lit("return outside a subprogram", 27));
}
if ((G_NV(F->up->accept_depth_187) > ((rt_int)0LL))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->s_672)).line_), rt_g_lit("a return statement cannot appear in an accept statement (RM79 5.3)", 66));
}
if ((G_NV((*(P119)rt_nil_check((*(P114)rt_nil_check(F->up->func_sym_139)).result_)).kind_) == ((rt_int)9LL))) {
if (((*(P171)rt_nil_check(F->s_672)).a_ != NULL)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->s_672)).line_), rt_g_lit("a procedure returns no value", 28));
}
f_pop_frames_637(F->up, ((rt_int)0LL));
f_emit_238(F->up, rt_g_lit("goto ret_;", 10));
goto ret_;
}
if (((*(P171)rt_nil_check(F->s_672)).a_ == NULL)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->s_672)).line_), rt_g_lit("return needs a value here", 25));
}
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->s_672)).a_, (*(P114)rt_nil_check(F->up->func_sym_139)).result_, &F->vt_2054, &F->v_2055);
f_check_type_456(F->up, F->vt_2054, (*(P114)rt_nil_check(F->up->func_sym_139)).result_, G_NV((*(P171)rt_nil_check(F->s_672)).line_));
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->result_ = ", 13), (*(P137)rt_nil_check(F->v_2055))), one_rt_gstr(59)));
f_pop_frames_637(F->up, ((rt_int)0LL));
f_emit_238(F->up, rt_g_lit("goto ret_;", 10));
ret_:

  return;
}

static void f_access_of_676(struct f_greenc_1fr *up_, P114 y_674, P137 *r_675) {
  struct f_access_of_676fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_674 = y_674;
F->r_675 = r_675;
F->p_2056 = NULL;
if ((G_NV((*(P114)rt_nil_check(F->y_674)).level_) <= ((rt_int)0LL))) {
(*F->r_675) = (*(P114)rt_nil_check(F->y_674)).access_path_;
goto ret_;
}
F->p_2056 = f_mk_211(F->up, rt_g_lit("F", 1));
{ rt_int lo2059 = ((rt_int)1LL), hi2060 = rt_sub(G_NV(F->up->cur_level_136), G_NV((*(P114)rt_nil_check(F->y_674)).level_));
for (rt_int it2061 = lo2059; it2061 <= hi2060; it2061++) {
F->i_2058 = it2061;
F->p_2056 = f_mk_211(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->p_2056)), rt_g_lit("->up", 4)));
}
}
L_end_2057: ;
if (G_NV((*(P114)rt_nil_check(F->y_674)).byref_)) {
(*F->r_675) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*", 2), (*(P137)rt_nil_check(F->p_2056))), rt_g_lit("->", 2)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_674)).access_path_))), one_rt_gstr(41)));
} else {
(*F->r_675) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->p_2056)), rt_g_lit("->", 2)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_674)).access_path_))));
}
ret_:

  return;
}

static void f_link_to_679(struct f_greenc_1fr *up_, rt_int l_677, P137 *r_678) {
  struct f_link_to_679fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_677 = l_677;
F->r_678 = r_678;
(*F->r_678) = f_mk_211(F->up, rt_g_lit("F", 1));
{ rt_int lo2064 = ((rt_int)1LL), hi2065 = rt_sub(G_NV(F->up->cur_level_136), F->l_677);
for (rt_int it2066 = lo2064; it2066 <= hi2065; it2066++) {
F->i_2063 = it2066;
(*F->r_678) = f_mk_211(F->up, cat_rt_gstr((*(P137)rt_nil_check((*F->r_678))), rt_g_lit("->up", 4)));
}
}
L_end_2062: ;
ret_:

  return;
}

static rt_gstr f_c_ident_681(struct f_greenc_1fr *up_, rt_gstr s_680) {
  struct f_c_ident_681fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_680 = cp_rt_gstr(s_680);
if (eq_rt_gstr(F->s_680, rt_g_lit("+", 1))) {
F->result_ = rt_g_lit("op_plus", 7);
goto ret_;
} else if (eq_rt_gstr(F->s_680, rt_g_lit("-", 1))) {
F->result_ = rt_g_lit("op_minus", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_680, rt_g_lit("*", 1))) {
F->result_ = rt_g_lit("op_times", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_680, rt_g_lit("/", 1))) {
F->result_ = rt_g_lit("op_slash", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_680, rt_g_lit("**", 2))) {
F->result_ = rt_g_lit("op_power", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_680, rt_g_lit("&", 1))) {
F->result_ = rt_g_lit("op_cat", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_680, rt_g_lit("=", 1))) {
F->result_ = rt_g_lit("op_eq", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_680, rt_g_lit("<", 1))) {
F->result_ = rt_g_lit("op_lt", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_680, rt_g_lit("<=", 2))) {
F->result_ = rt_g_lit("op_le", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_680, rt_g_lit(">", 1))) {
F->result_ = rt_g_lit("op_gt", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_680, rt_g_lit(">=", 2))) {
F->result_ = rt_g_lit("op_ge", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_680, rt_g_lit("MOD", 3))) {
F->result_ = rt_g_lit("op_mod", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_680, rt_g_lit("AND", 3))) {
F->result_ = rt_g_lit("op_and", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_680, rt_g_lit("OR", 2))) {
F->result_ = rt_g_lit("op_or", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_680, rt_g_lit("XOR", 3))) {
F->result_ = rt_g_lit("op_xor", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_680, rt_g_lit("NOT", 3))) {
F->result_ = rt_g_lit("op_not", 6);
goto ret_;
}
F->result_ = f_lower_s_222(F->up, F->s_680);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_deref_685(struct f_greenc_1fr *up_, rt_gstr base_682, P119 t_683, P137 *r_684) {
  struct f_deref_685fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_682 = cp_rt_gstr(base_682);
F->t_683 = t_683;
F->r_684 = r_684;
F->ct_2067 = NULL;
if (G_NV(F->up->in_lv_path_203)) {
F->up->last_deref_204 = 1;
}
f_ctype_461(F->up, F->t_683, &F->ct_2067);
(*F->r_684) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*(", 3), (*(P137)rt_nil_check(F->ct_2067))), rt_g_lit(")rt_nil_check(", 14)), F->base_682), rt_g_lit("))", 2)));
ret_:

  return;
}

static int f_is_object_687(struct f_greenc_1fr *up_, P171 e_686) {
  struct f_is_object_687fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_686 = e_686;
F->y_2068 = NULL;
if ((G_NV((*(P171)rt_nil_check(F->e_686)).kind_) == ((rt_int)5LL))) {
F->y_2068 = f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_686)).name_)));
if ((!(F->y_2068 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((G_NV((*(P114)rt_nil_check(F->y_2068)).kind_) == ((rt_int)1LL)) || (G_NV((*(P114)rt_nil_check(F->y_2068)).kind_) == ((rt_int)2LL)));
goto ret_;
} else if ((G_NV((*(P171)rt_nil_check(F->e_686)).kind_) == ((rt_int)9LL))) {
F->result_ = f_is_object_687(F->up, (*(P171)rt_nil_check(F->e_686)).a_);
goto ret_;
} else if ((G_NV((*(P171)rt_nil_check(F->e_686)).kind_) == ((rt_int)8LL))) {
if ((((*(P171)rt_nil_check(F->e_686)).b_ != NULL) && (G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_686)).b_)).kind_) == ((rt_int)14LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_object_687(F->up, (*(P171)rt_nil_check(F->e_686)).a_);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_const_access_689(struct f_greenc_1fr *up_, P171 e_688) {
  struct f_is_const_access_689fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_688 = e_688;
F->y_2069 = NULL;
if ((G_NV((*(P171)rt_nil_check(F->e_688)).kind_) != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->y_2069 = f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_688)).name_)));
if ((F->y_2069 == NULL)) {
F->result_ = 0;
goto ret_;
} else if ((((G_NV((*(P114)rt_nil_check(F->y_2069)).kind_) != ((rt_int)2LL)) || (rt_rem(G_NV((*(P114)rt_nil_check(F->y_2069)).flags_), ((rt_int)2LL)) != ((rt_int)1LL))) || ((*(P114)rt_nil_check(F->y_2069)).t_ == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_2069)).t_)).kind_) == ((rt_int)8LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_lvalue_695(struct f_greenc_1fr *up_, P171 e_690, P137 *code_out_691, P119 *t_692, P175 *c_693, int *ro_694) {
  struct f_lvalue_695fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_690 = e_690;
F->code_out_691 = code_out_691;
F->t_692 = t_692;
F->c_693 = c_693;
F->ro_694 = ro_694;
F->cp_2070 = INT_MIN;
F->ex_2071 = NULL;
F->y_2072 = NULL;
F->base_2073 = NULL;
F->bt_2074 = NULL;
F->bc_2075 = NULL;
f_expanded_757(F->up, F->e_690, &F->ex_2071);
if ((F->ex_2071 != NULL)) {
f_lvalue_695(F->up, F->ex_2071, &(*F->code_out_691), &(*F->t_692), &(*F->c_693), &(*F->ro_694));
goto ret_;
}
if (((G_NV((*(P171)rt_nil_check(F->e_690)).kind_) == ((rt_int)5LL)) || ((G_NV((*(P171)rt_nil_check(F->e_690)).kind_) == ((rt_int)9LL)) && f_is_package_958(F->up, (*(P171)rt_nil_check(F->e_690)).a_)))) {
if ((G_NV((*(P171)rt_nil_check(F->e_690)).ival_) > ((rt_int)0LL))) {
F->y_2072 = f_lookup_at_405(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_690)).name_)), rt_sub(G_NV((*(P171)rt_nil_check(F->e_690)).ival_), ((rt_int)1LL)));
} else if ((G_NV((*(P171)rt_nil_check(F->e_690)).kind_) == ((rt_int)9LL))) {
F->y_2072 = f_member_of_962(F->up, f_path_of_328(F->up, (*(P171)rt_nil_check(F->e_690)).a_), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_690)).name_)), G_NV((*(P171)rt_nil_check(F->e_690)).line_));
} else {
F->y_2072 = f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_690)).name_)));
}
if ((F->y_2072 == NULL)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_690)).line_), cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_690)).name_)), rt_g_lit(" is not declared", 16)));
}
if (((G_NV((*(P114)rt_nil_check(F->y_2072)).kind_) != ((rt_int)1LL)) && (G_NV((*(P114)rt_nil_check(F->y_2072)).kind_) != ((rt_int)2LL)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_690)).line_), cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_690)).name_)), rt_g_lit(" is not an object", 17)));
}
f_access_of_676(F->up, F->y_2072, &(*F->code_out_691));
(*F->t_692) = (*(P114)rt_nil_check(F->y_2072)).t_;
(*F->c_693) = (*(P114)rt_nil_check(F->y_2072)).c_;
(*F->ro_694) = G_NV((*(P114)rt_nil_check(F->y_2072)).ro_);
} else if ((G_NV((*(P171)rt_nil_check(F->e_690)).kind_) == ((rt_int)15LL))) {
f_lvalue_695(F->up, (*(P171)rt_nil_check(F->e_690)).a_, &(*F->code_out_691), &(*F->t_692), &(*F->c_693), &(*F->ro_694));
} else if ((G_NV((*(P171)rt_nil_check(F->e_690)).kind_) == ((rt_int)9LL))) {
f_lvalue_695(F->up, (*(P171)rt_nil_check(F->e_690)).a_, &F->base_2073, &F->bt_2074, &F->bc_2075, &(*F->ro_694));
F->cp_2070 = ((G_NV((*(P119)rt_nil_check(F->bt_2074)).kind_) == ((rt_int)8LL)) && f_is_const_access_689(F->up, (*(P171)rt_nil_check(F->e_690)).a_));
f_select_on_704(F->up, (*(P137)rt_nil_check(F->base_2073)), F->bt_2074, F->e_690, &(*F->ro_694), 1, &(*F->code_out_691), &(*F->t_692), &(*F->c_693));
(*F->ro_694) = (G_NV((*F->ro_694)) || G_NV(F->cp_2070));
} else if ((G_NV((*(P171)rt_nil_check(F->e_690)).kind_) == ((rt_int)8LL))) {
f_lvalue_695(F->up, (*(P171)rt_nil_check(F->e_690)).a_, &F->base_2073, &F->bt_2074, &F->bc_2075, &(*F->ro_694));
F->cp_2070 = ((G_NV((*(P119)rt_nil_check(F->bt_2074)).kind_) == ((rt_int)8LL)) && f_is_const_access_689(F->up, (*(P171)rt_nil_check(F->e_690)).a_));
f_index_on_713(F->up, (*(P137)rt_nil_check(F->base_2073)), F->bt_2074, F->e_690, &(*F->ro_694), 1, &(*F->code_out_691), &(*F->t_692), &(*F->c_693));
(*F->ro_694) = (G_NV((*F->ro_694)) || G_NV(F->cp_2070));
} else {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_690)).line_), rt_g_lit("not an object", 13));
}
ret_:

  return;
}

static void f_select_on_704(struct f_greenc_1fr *up_, rt_gstr base_696, P119 bt_697, P171 e_698, int *ro_699, int lv_700, P137 *code_out_701, P119 *t_702, P175 *c_703) {
  struct f_select_on_704fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_696 = cp_rt_gstr(base_696);
F->bt_697 = bt_697;
F->e_698 = e_698;
F->ro_699 = ro_699;
F->lv_700 = lv_700;
F->code_out_701 = code_out_701;
F->t_702 = t_702;
F->c_703 = c_703;
F->f_2076 = NULL;
F->d_2077 = NULL;
F->ct_2078 = NULL;
F->tmp_2079 = NULL;
(*F->c_703) = F->up->no_cons_194;
if ((G_NV((*(P119)rt_nil_check(F->bt_697)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_575(F->up, F->bt_697);
f_deref_685(F->up, F->base_696, F->bt_697, &F->d_2077);
(*F->ro_699) = 0;
if (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_698)).name_)), rt_g_lit("ALL", 3))) {
(*F->code_out_701) = F->d_2077;
(*F->t_702) = (*(P119)rt_nil_check(F->bt_697)).target_;
goto ret_;
}
f_select_on_704(F->up, (*(P137)rt_nil_check(F->d_2077)), (*(P119)rt_nil_check(F->bt_697)).target_, F->e_698, &(*F->ro_699), 1, &(*F->code_out_701), &(*F->t_702), &(*F->c_703));
goto ret_;
}
if ((G_NV((*(P119)rt_nil_check(F->bt_697)).kind_) == ((rt_int)7LL))) {
if ((G_NV((*(P119)rt_nil_check(F->bt_697)).priv_) && (!f_inside_package_964(F->up, (*(P119)rt_nil_check(F->bt_697)).decl_)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_698)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the components of private type ", 31), f_kind_name_452(F->up, F->bt_697)), rt_g_lit(" are not visible here (RM79 7.4)", 32)));
}
F->f_2076 = (*(P119)rt_nil_check(F->bt_697)).fields_;
while ((F->f_2076 != NULL)) {
if (eq_rt_gstr((*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_2076)).name_)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_698)).name_)))) {
f_subst_cons_547(F->up, (*(P1710)rt_nil_check(F->f_2076)).c_, F->base_696, &(*F->c_703));
(*F->code_out_701) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(F->base_696, one_rt_gstr(46)), f_c_field_228(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_698)).name_)))));
(*F->t_702) = (*(P1710)rt_nil_check(F->f_2076)).t_;
if (G_NV((*(P1710)rt_nil_check(F->f_2076)).is_const_)) {
(*F->ro_699) = 1;
}
if (((*(P1710)rt_nil_check(F->f_2076)).cond_ != NULL)) {
f_ctype_461(F->up, F->bt_697, &F->ct_2078);
f_new_name_214(F->up, rt_g_lit("vr", 2), &F->tmp_2079);
if (F->lv_700) {
(*F->code_out_701) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*({ ", 5), (*(P137)rt_nil_check(F->ct_2078))), rt_g_lit(" *", 2)), (*(P137)rt_nil_check(F->tmp_2079))), rt_g_lit(" = &(", 5)), F->base_696), rt_g_lit("); if (!(", 9)), f_subst_541(F->up, (*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_2076)).cond_)), cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*", 2), (*(P137)rt_nil_check(F->tmp_2079))), one_rt_gstr(41)))), rt_g_lit(")) rt_raise(RT_X_TAG); &", 24)), (*(P137)rt_nil_check(F->tmp_2079))), rt_g_lit("->", 2)), f_c_field_228(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_698)).name_)))), rt_g_lit("; }))", 5)));
} else {
(*F->code_out_701) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P137)rt_nil_check(F->ct_2078))), one_rt_gstr(32)), (*(P137)rt_nil_check(F->tmp_2079))), rt_g_lit(" = ", 3)), F->base_696), rt_g_lit("; if (!(", 8)), f_subst_541(F->up, (*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_2076)).cond_)), (*(P137)rt_nil_check(F->tmp_2079)))), rt_g_lit(")) rt_raise(RT_X_TAG); ", 23)), (*(P137)rt_nil_check(F->tmp_2079))), one_rt_gstr(46)), f_c_field_228(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_698)).name_)))), rt_g_lit("; })", 4)));
}
}
goto ret_;
}
F->f_2076 = (*(P1710)rt_nil_check(F->f_2076)).next_;
}
L_end_2080: ;
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_698)).line_), cat_rt_gstr(cat_rt_gstr(f_kind_name_452(F->up, F->bt_697), rt_g_lit(" has no component ", 18)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_698)).name_))));
}
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_698)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("cannot select ", 14), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_698)).name_))), rt_g_lit(" here", 5)));
ret_:

  return;
}

static void f_index_on_713(struct f_greenc_1fr *up_, rt_gstr base_705, P119 bt_706, P171 e_707, int *ro_708, int lv_709, P137 *code_out_710, P119 *t_711, P175 *c_712) {
  struct f_index_on_713fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_705 = cp_rt_gstr(base_705);
F->bt_706 = bt_706;
F->e_707 = e_707;
F->ro_708 = ro_708;
F->lv_709 = lv_709;
F->code_out_710 = code_out_710;
F->t_711 = t_711;
F->c_712 = c_712;
F->a_2081 = NULL;
F->a_2081 = (*(P171)rt_nil_check(F->e_707)).b_;
F->arrt_2082 = NULL;
F->arrt_2082 = F->bt_706;
F->acc_2083 = NULL;
F->acc_2083 = f_mk_211(F->up, F->base_705);
F->it_2084 = NULL;
F->i_2085 = NULL;
F->lo_2086 = NULL;
F->hi_2087 = NULL;
F->d_2088 = NULL;
F->ct_2089 = NULL;
F->tmp_2090 = NULL;
(*F->c_712) = F->up->no_cons_194;
if ((G_NV((*(P119)rt_nil_check(F->bt_706)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_575(F->up, F->bt_706);
f_deref_685(F->up, F->base_705, F->bt_706, &F->d_2088);
(*F->ro_708) = 0;
f_index_on_713(F->up, (*(P137)rt_nil_check(F->d_2088)), (*(P119)rt_nil_check(F->bt_706)).target_, F->e_707, &(*F->ro_708), F->lv_709, &(*F->code_out_710), &(*F->t_711), &(*F->c_712));
goto ret_;
}
if ((G_NV((*(P119)rt_nil_check(F->bt_706)).kind_) != ((rt_int)6LL))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_707)).line_), rt_g_lit("cannot index this", 17));
}
if ((F->a_2081 == NULL)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_707)).line_), rt_g_lit("an index is required", 20));
}
if ((((G_NV((*(P171)rt_nil_check(F->a_2081)).kind_) == ((rt_int)14LL)) || (G_NV((*(P171)rt_nil_check(F->a_2081)).kind_) == ((rt_int)80LL))) || ((G_NV((*(P171)rt_nil_check(F->a_2081)).kind_) == ((rt_int)5LL)) && f_is_type_name_718(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->a_2081)).name_)))))) {
if ((((*(P171)rt_nil_check(F->a_2081)).next_ != NULL) || (G_NV((*(P119)rt_nil_check(F->bt_706)).dims_) != ((rt_int)1LL)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_707)).line_), rt_g_lit("a slice is taken of a one-dimensional array (RM79 4.3)", 54));
}
f_discrete_bounds_491(F->up, F->a_2081, (*(P119)rt_nil_check(F->bt_706)).idx_, &F->it_2084, &F->lo_2086, &F->hi_2087);
f_check_type_456(F->up, F->it_2084, (*(P119)rt_nil_check(F->bt_706)).idx_, G_NV((*(P171)rt_nil_check(F->e_707)).line_));
f_ctype_461(F->up, F->bt_706, &F->d_2088);
f_new_name_214(F->up, rt_g_lit("sl", 2), &F->tmp_2090);
(*F->code_out_710) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P137)rt_nil_check(F->d_2088))), one_rt_gstr(32)), (*(P137)rt_nil_check(F->tmp_2090))), rt_g_lit(" = ", 3)), F->base_705), rt_g_lit("; rt_int l_ = ", 14)), (*(P137)rt_nil_check(F->lo_2086))), rt_g_lit(", h_ = ", 7)), (*(P137)rt_nil_check(F->hi_2087))), rt_g_lit("; if (l_ <= h_) { rt_index(l_, ", 31)), (*(P137)rt_nil_check(F->tmp_2090))), rt_g_lit(".lo, ", 5)), (*(P137)rt_nil_check(F->tmp_2090))), rt_g_lit(".hi); ", 6)), rt_g_lit("rt_index(h_, ", 13)), (*(P137)rt_nil_check(F->tmp_2090))), rt_g_lit(".lo, ", 5)), (*(P137)rt_nil_check(F->tmp_2090))), rt_g_lit(".hi); } ", 8)), (*(P137)rt_nil_check(F->tmp_2090))), rt_g_lit(".p += l_ - ", 11)), (*(P137)rt_nil_check(F->tmp_2090))), rt_g_lit(".lo; ", 5)), (*(P137)rt_nil_check(F->tmp_2090))), rt_g_lit(".lo = l_; ", 10)), (*(P137)rt_nil_check(F->tmp_2090))), rt_g_lit(".hi = h_; ", 10)), (*(P137)rt_nil_check(F->tmp_2090))), rt_g_lit("; })", 4)));
(*F->t_711) = F->bt_706;
(*F->ro_708) = 1;
goto ret_;
}
if ((f_list_len_291(F->up, F->a_2081) > G_NV((*(P119)rt_nil_check(F->bt_706)).dims_))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_707)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("too many indexes for ", 21), f_kind_name_452(F->up, F->bt_706)), rt_g_lit(" (RM79 4.1.1)", 13)));
}
while ((F->a_2081 != NULL)) {
f_gexpr_739(F->up, F->a_2081, (*(P119)rt_nil_check(F->arrt_2082)).idx_, &F->it_2084, &F->i_2085);
f_check_type_456(F->up, F->it_2084, (*(P119)rt_nil_check(F->arrt_2082)).idx_, G_NV((*(P171)rt_nil_check(F->e_707)).line_));
f_ctype_461(F->up, F->arrt_2082, &F->ct_2089);
f_new_name_214(F->up, rt_g_lit("ix", 2), &F->tmp_2090);
if (F->lv_709) {
F->acc_2083 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*({ ", 5), (*(P137)rt_nil_check(F->ct_2089))), rt_g_lit(" *", 2)), (*(P137)rt_nil_check(F->tmp_2090))), rt_g_lit(" = &(", 5)), (*(P137)rt_nil_check(F->acc_2083))), rt_g_lit("); &", 4)), (*(P137)rt_nil_check(F->tmp_2090))), rt_g_lit("->p[rt_index(", 13)), (*(P137)rt_nil_check(F->i_2085))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->tmp_2090))), rt_g_lit("->lo, ", 6)), (*(P137)rt_nil_check(F->tmp_2090))), rt_g_lit("->hi) - ", 8)), (*(P137)rt_nil_check(F->tmp_2090))), rt_g_lit("->lo]; }))", 10)));
} else {
F->acc_2083 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P137)rt_nil_check(F->ct_2089))), one_rt_gstr(32)), (*(P137)rt_nil_check(F->tmp_2090))), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->acc_2083))), rt_g_lit("; ", 2)), (*(P137)rt_nil_check(F->tmp_2090))), rt_g_lit(".p[rt_index(", 12)), (*(P137)rt_nil_check(F->i_2085))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->tmp_2090))), rt_g_lit(".lo, ", 5)), (*(P137)rt_nil_check(F->tmp_2090))), rt_g_lit(".hi) - ", 7)), (*(P137)rt_nil_check(F->tmp_2090))), rt_g_lit(".lo]; })", 8)));
}
(*F->c_712) = (*(P119)rt_nil_check(F->arrt_2082)).elemcons_;
F->arrt_2082 = (*(P119)rt_nil_check(F->arrt_2082)).elem_;
F->a_2081 = (*(P171)rt_nil_check(F->a_2081)).next_;
}
L_end_2091: ;
(*F->code_out_710) = F->acc_2083;
(*F->t_711) = F->arrt_2082;
if ((!F->lv_709)) {
(*F->ro_708) = 1;
}
ret_:

  return;
}

static int f_type_attribute_716(struct f_greenc_1fr *up_, P119 t_714, rt_gstr name_715) {
  struct f_type_attribute_716fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_714 = t_714;
F->name_715 = cp_rt_gstr(name_715);
F->y_2092 = NULL;
F->y_2092 = ({ A113 ix2093 = F->up->table_116; ix2093.p[rt_index(f_hash_394(F->up, F->name_715), ix2093.lo, ix2093.hi) - ix2093.lo]; });
F->p_2094 = NULL;
while ((F->y_2092 != NULL)) {
if ((eq_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2092)).name_)), F->name_715) && ((G_NV((*(P114)rt_nil_check(F->y_2092)).kind_) == ((rt_int)3LL)) || (G_NV((*(P114)rt_nil_check(F->y_2092)).kind_) == ((rt_int)4LL))))) {
if (f_same_416(F->up, (*(P114)rt_nil_check(F->y_2092)).result_, F->t_714)) {
F->result_ = 1;
goto ret_;
}
F->p_2094 = (*(P114)rt_nil_check(F->y_2092)).params_;
while ((F->p_2094 != NULL)) {
if (f_same_416(F->up, (*(P1695)rt_nil_check(F->p_2094)).t_, F->t_714)) {
F->result_ = 1;
goto ret_;
}
F->p_2094 = (*(P1695)rt_nil_check(F->p_2094)).next_;
}
L_end_2096: ;
}
F->y_2092 = (*(P114)rt_nil_check(F->y_2092)).chain_;
}
L_end_2095: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_type_name_718(struct f_greenc_1fr *up_, rt_gstr n_717) {
  struct f_is_type_name_718fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_717 = cp_rt_gstr(n_717);
F->y_2097 = NULL;
F->y_2097 = f_lookup_396(F->up, F->n_717);
if ((!(F->y_2097 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P114)rt_nil_check(F->y_2097)).kind_) == ((rt_int)5LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_char_lit_720(struct f_greenc_1fr *up_, P171 e_719) {
  struct f_is_char_lit_720fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_719 = e_719;
if ((!(G_NV((*(P171)rt_nil_check(F->e_719)).kind_) == ((rt_int)3LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (({ rt_gstr at2098 = (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_719)).name_)); at2098.hi >= at2098.lo ? at2098.hi - at2098.lo + 1 : (rt_int)0; }) == ((rt_int)1LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_enum_lit_722(struct f_greenc_1fr *up_, P171 e_721) {
  struct f_is_enum_lit_722fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_721 = e_721;
F->y_2099 = NULL;
if ((G_NV((*(P171)rt_nil_check(F->e_721)).kind_) != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->y_2099 = f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_721)).name_)));
if ((!(F->y_2099 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P114)rt_nil_check(F->y_2099)).kind_) == ((rt_int)7LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_c_string_724(struct f_greenc_1fr *up_, rt_gstr s_723) {
  struct f_c_string_724fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_723 = cp_rt_gstr(s_723);
F->n_2100 = INT64_MIN;
F->n_2100 = ((rt_int)0LL);
{ rt_int lo2104 = ((rt_int)1LL), hi2105 = ({ rt_gstr at2102 = F->s_723; at2102.hi >= at2102.lo ? at2102.hi - at2102.lo + 1 : (rt_int)0; });
for (rt_int it2106 = lo2104; it2106 <= hi2105; it2106++) {
F->i_2103 = it2106;
if ((((G_NV(({ rt_gstr ix2107 = F->s_723; ix2107.p[rt_index(F->i_2103, ix2107.lo, ix2107.hi) - ix2107.lo]; })) == 34) || (G_NV(({ rt_gstr ix2108 = F->s_723; ix2108.p[rt_index(F->i_2103, ix2108.lo, ix2108.hi) - ix2108.lo]; })) == 92)) || (G_NV(({ rt_gstr ix2109 = F->s_723; ix2109.p[rt_index(F->i_2103, ix2109.lo, ix2109.hi) - ix2109.lo]; })) == 63))) {
F->n_2100 = rt_add(G_NV(F->n_2100), ((rt_int)1LL));
}
}
}
L_end_2101: ;
{
F->r_2112.lo = ((rt_int)1LL); F->r_2112.hi = rt_add(rt_add(({ rt_gstr at2111 = F->s_723; at2111.hi >= at2111.lo ? at2111.hi - at2111.lo + 1 : (rt_int)0; }), G_NV(F->n_2100)), ((rt_int)2LL));
F->r_2112.lo2 = 1; F->r_2112.hi2 = 1;
F->r_2112.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->r_2112));
memset(F->r_2112.p, 0xFF, (size_t)G_CNT(F->r_2112));
F->j_2114 = INT64_MIN;
F->j_2114 = ((rt_int)1LL);
(*({ rt_gstr *ix2115 = &(F->r_2112); &ix2115->p[rt_index(((rt_int)1LL), ix2115->lo, ix2115->hi) - ix2115->lo]; })) = 34;
{ rt_int lo2119 = ((rt_int)1LL), hi2120 = ({ rt_gstr at2117 = F->s_723; at2117.hi >= at2117.lo ? at2117.hi - at2117.lo + 1 : (rt_int)0; });
for (rt_int it2121 = lo2119; it2121 <= hi2120; it2121++) {
F->i_2118 = it2121;
F->j_2114 = rt_add(G_NV(F->j_2114), ((rt_int)1LL));
if ((((G_NV(({ rt_gstr ix2122 = F->s_723; ix2122.p[rt_index(F->i_2118, ix2122.lo, ix2122.hi) - ix2122.lo]; })) == 34) || (G_NV(({ rt_gstr ix2123 = F->s_723; ix2123.p[rt_index(F->i_2118, ix2123.lo, ix2123.hi) - ix2123.lo]; })) == 92)) || (G_NV(({ rt_gstr ix2124 = F->s_723; ix2124.p[rt_index(F->i_2118, ix2124.lo, ix2124.hi) - ix2124.lo]; })) == 63))) {
(*({ rt_gstr *ix2125 = &(F->r_2112); &ix2125->p[rt_index(G_NV(F->j_2114), ix2125->lo, ix2125->hi) - ix2125->lo]; })) = 92;
F->j_2114 = rt_add(G_NV(F->j_2114), ((rt_int)1LL));
}
(*({ rt_gstr *ix2126 = &(F->r_2112); &ix2126->p[rt_index(G_NV(F->j_2114), ix2126->lo, ix2126->hi) - ix2126->lo]; })) = G_NV(({ rt_gstr ix2127 = F->s_723; ix2127.p[rt_index(F->i_2118, ix2127.lo, ix2127.hi) - ix2127.lo]; }));
}
}
L_end_2116: ;
(*({ rt_gstr *ix2128 = &(F->r_2112); &ix2128->p[rt_index(rt_add(G_NV(F->j_2114), ((rt_int)1LL)), ix2128->lo, ix2128->hi) - ix2128->lo]; })) = 34;
F->result_ = F->r_2112;
goto ret_;

}
L_end_2110: ;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_literal_726(struct f_greenc_1fr *up_, P171 e_725) {
  struct f_is_literal_726fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_725 = e_725;
if ((((G_NV((*(P171)rt_nil_check(F->e_725)).kind_) == ((rt_int)1LL)) || (G_NV((*(P171)rt_nil_check(F->e_725)).kind_) == ((rt_int)2LL))) || f_is_char_lit_720(F->up, F->e_725))) {
F->result_ = 1;
goto ret_;
} else if (((G_NV((*(P171)rt_nil_check(F->e_725)).kind_) == ((rt_int)15LL)) || ((G_NV((*(P171)rt_nil_check(F->e_725)).kind_) == ((rt_int)6LL)) && (!eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_725)).name_)), rt_g_lit("NOT", 3)))))) {
F->result_ = f_is_literal_726(F->up, (*(P171)rt_nil_check(F->e_725)).a_);
goto ret_;
} else if (((G_NV((*(P171)rt_nil_check(F->e_725)).kind_) == ((rt_int)7LL)) && (((((eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_725)).name_)), rt_g_lit("+", 1)) || eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_725)).name_)), rt_g_lit("-", 1))) || eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_725)).name_)), rt_g_lit("*", 1))) || eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_725)).name_)), rt_g_lit("/", 1))) || eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_725)).name_)), rt_g_lit("**", 2))) || eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_725)).name_)), rt_g_lit("MOD", 3))))) {
F->result_ = (f_is_literal_726(F->up, (*(P171)rt_nil_check(F->e_725)).a_) && f_is_literal_726(F->up, (*(P171)rt_nil_check(F->e_725)).b_));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_range_bounds_734(struct f_greenc_1fr *up_, P171 l_727, P171 h_728, P119 want_729, rt_int line_730, P119 *t_731, P137 *lo_732, P137 *hi_733) {
  struct f_range_bounds_734fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_727 = l_727;
F->h_728 = h_728;
F->want_729 = want_729;
F->line_730 = line_730;
F->t_731 = t_731;
F->lo_732 = lo_732;
F->hi_733 = hi_733;
F->w_2129 = NULL;
F->w_2129 = F->want_729;
F->t2_2130 = NULL;
if ((((F->w_2129 == NULL) && f_is_char_lit_720(F->up, F->l_727)) && f_is_char_lit_720(F->up, F->h_728))) {
F->w_2129 = F->up->ty_char_156;
}
if ((((F->w_2129 == NULL) && f_is_literal_726(F->up, F->l_727)) && (!f_is_literal_726(F->up, F->h_728)))) {
f_gexpr_739(F->up, F->h_728, NULL, &(*F->t_731), &(*F->hi_733));
f_gexpr_739(F->up, F->l_727, (*F->t_731), &F->t2_2130, &(*F->lo_732));
f_check_type_456(F->up, F->t2_2130, (*F->t_731), F->line_730);
} else {
f_gexpr_739(F->up, F->l_727, F->w_2129, &(*F->t_731), &(*F->lo_732));
f_gexpr_739(F->up, F->h_728, (*F->t_731), &F->t2_2130, &(*F->hi_733));
f_check_type_456(F->up, F->t2_2130, (*F->t_731), F->line_730);
}
ret_:

  return;
}

static void f_gexpr_739(struct f_greenc_1fr *up_, P171 e_735, P119 want_736, P119 *t_737, P137 *r_738) {
  struct f_gexpr_739fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_735 = e_735;
F->want_736 = want_736;
F->t_737 = t_737;
F->r_738 = r_738;
F->y_2131 = NULL;
F->bt_2132 = NULL;
F->c_2133 = NULL;
F->ro_2134 = INT_MIN;
F->base_2135 = NULL;
F->a_2136 = NULL;
F->nm_2137 = NULL;
F->saved_lv_2138 = INT_MIN;
F->saved_lv_2138 = G_NV(F->up->in_lv_path_203);
F->up->in_lv_path_203 = 0;
f_gexpr_1_744(F->up, F->e_735, F->want_736, &(*F->t_737), &(*F->r_738));
F->up->in_lv_path_203 = G_NV(F->saved_lv_2138);
ret_:

  return;
}

static void f_gexpr_1_744(struct f_greenc_1fr *up_, P171 e_740, P119 want_741, P119 *t_742, P137 *r_743) {
  struct f_gexpr_1_744fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_740 = e_740;
F->want_741 = want_741;
F->t_742 = t_742;
F->r_743 = r_743;
F->y_2139 = NULL;
F->bt_2140 = NULL;
F->c_2141 = NULL;
F->ro_2142 = INT_MIN;
F->base_2143 = NULL;
F->a_2144 = NULL;
F->nm_2145 = NULL;
F->c2_2146 = NULL;
(*F->t_742) = F->up->ty_int_153;
{ rt_int sel2147 = G_NV((*(P171)rt_nil_check(F->e_740)).kind_);
if (0 || sel2147 == ((rt_int)1LL)) {
if (((F->want_741 != NULL) && (G_NV((*(P119)rt_nil_check(F->want_741)).kind_) == ((rt_int)1LL)))) {
(*F->t_742) = F->want_741;
}
(*F->r_743) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV((*(P171)rt_nil_check(F->e_740)).ival_)))), rt_g_lit("LL)", 3)));
} else if (0 || sel2147 == ((rt_int)2LL)) {
(*F->t_742) = F->up->ty_float_155;
(*F->r_743) = (*(P171)rt_nil_check(F->e_740)).name_;
if (((F->want_741 != NULL) && (G_NV((*(P119)rt_nil_check(F->want_741)).kind_) == ((rt_int)3LL)))) {
(*F->t_742) = F->want_741;
} else if ((((F->want_741 != NULL) && (G_NV((*(P119)rt_nil_check(F->want_741)).kind_) == ((rt_int)16LL))) && ((*(P119)rt_nil_check(F->want_741)).fsmall_ != NULL))) {
(*F->t_742) = F->want_741;
(*F->r_743) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix(", 9), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_740)).name_))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->want_741)).fsmall_))), one_rt_gstr(41)));
}
} else if (0 || sel2147 == ((rt_int)3LL)) {
if (((f_is_char_lit_720(F->up, F->e_740) && (F->want_741 != NULL)) && ((G_NV((*(P119)rt_nil_check(F->want_741)).kind_) == ((rt_int)11LL)) || (G_NV((*(P119)rt_nil_check(F->want_741)).kind_) == ((rt_int)4LL))))) {
f_char_literal_754(F->up, F->e_740, F->want_741, &(*F->t_742), &(*F->r_743));
} else if ((((((F->want_741 != NULL) && (G_NV((*(P119)rt_nil_check(F->want_741)).kind_) == ((rt_int)6LL))) && (G_NV((*(P119)rt_nil_check(F->want_741)).dims_) == ((rt_int)1LL))) && ((G_NV((*(P119)rt_nil_check((*(P119)rt_nil_check(F->want_741)).elem_)).kind_) == ((rt_int)11LL)) || (G_NV((*(P119)rt_nil_check((*(P119)rt_nil_check(F->want_741)).elem_)).kind_) == ((rt_int)4LL)))) && (!f_is_string_538(F->up, F->want_741)))) {
f_string_aggregate_749(F->up, F->e_740, F->want_741, &(*F->t_742), &(*F->r_743));
} else {
(*F->t_742) = F->up->ty_string_157;
if (((F->want_741 != NULL) && f_is_string_538(F->up, F->want_741))) {
(*F->t_742) = F->want_741;
}
(*F->r_743) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_lit(", 9), f_c_string_724(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_740)).name_)))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(({ rt_gstr at2149 = (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_740)).name_)); at2149.hi >= at2149.lo ? at2149.hi - at2149.lo + 1 : (rt_int)0; })))), one_rt_gstr(41)));
}
} else if (0 || sel2147 == ((rt_int)4LL)) {
(*F->t_742) = F->up->ty_nil_159;
(*F->r_743) = f_mk_211(F->up, rt_g_lit("NULL", 4));
} else if (0 || sel2147 == ((rt_int)15LL)) {
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->e_740)).a_, F->want_741, &(*F->t_742), &(*F->r_743));
} else if (0 || sel2147 == ((rt_int)5LL)) {
f_gen_name_762(F->up, F->e_740, F->want_741, &(*F->t_742), &(*F->r_743));
} else if (0 || sel2147 == ((rt_int)6LL)) {
f_gen_unop_767(F->up, F->e_740, F->want_741, &(*F->t_742), &(*F->r_743));
} else if (0 || sel2147 == ((rt_int)7LL)) {
f_gen_binop_807(F->up, F->e_740, F->want_741, &(*F->t_742), &(*F->r_743));
} else if (0 || sel2147 == ((rt_int)8LL)) {
f_expanded_757(F->up, (*(P171)rt_nil_check(F->e_740)).a_, &F->nm_2145);
if ((F->nm_2145 != NULL)) {
F->c2_2146 = f_nn_285(F->up, ((rt_int)8LL), G_NV((*(P171)rt_nil_check(F->e_740)).line_));
as_R172(&(*(P171)rt_nil_check(F->c2_2146)), (*(P171)rt_nil_check(F->e_740)));
(*(P171)rt_nil_check(F->c2_2146)).a_ = F->nm_2145;
f_gexpr_739(F->up, F->c2_2146, F->want_741, &(*F->t_742), &(*F->r_743));
goto ret_;
}
if ((G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_740)).a_)).kind_) == ((rt_int)5LL))) {
F->y_2139 = f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_740)).a_)).name_)));
if (((F->y_2139 == NULL) || (((G_NV((*(P114)rt_nil_check(F->y_2139)).kind_) == ((rt_int)3LL)) || (G_NV((*(P114)rt_nil_check(F->y_2139)).kind_) == ((rt_int)4LL))) || (G_NV((*(P114)rt_nil_check(F->y_2139)).kind_) == ((rt_int)10LL))))) {
F->up->call_want_199 = F->want_741;
f_gcall_942(F->up, F->e_740, 0, &(*F->t_742), &(*F->r_743));
goto ret_;
}
if ((G_NV((*(P114)rt_nil_check(F->y_2139)).kind_) == ((rt_int)5LL))) {
f_conversion_812(F->up, F->e_740, F->y_2139, &(*F->t_742), &(*F->r_743));
goto ret_;
}
} else if (((((((G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_740)).a_)).kind_) == ((rt_int)9LL)) && (G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_740)).a_)).a_)).kind_) == ((rt_int)8LL))) && (G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_740)).a_)).a_)).a_)).kind_) == ((rt_int)5LL))) && f_is_task_name_1027(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_740)).a_)).a_)).a_)).name_)))) && (f_member_of_962(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_740)).a_)).a_)).a_)).name_)), (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_740)).a_)).name_)), G_NV((*(P171)rt_nil_check(F->e_740)).line_)) != NULL)) && (G_NV((*(P114)rt_nil_check(f_member_of_962(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_740)).a_)).a_)).a_)).name_)), (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_740)).a_)).name_)), G_NV((*(P171)rt_nil_check(F->e_740)).line_)))).kind_) == ((rt_int)3LL)))) {
F->up->call_want_199 = F->want_741;
f_gcall_942(F->up, F->e_740, 0, &(*F->t_742), &(*F->r_743));
goto ret_;
} else if ((((G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_740)).a_)).kind_) == ((rt_int)9LL)) && (G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_740)).a_)).a_)).kind_) == ((rt_int)5LL))) && f_is_type_name_718(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_740)).a_)).a_)).name_))))) {
F->up->call_want_199 = F->want_741;
f_gcall_942(F->up, F->e_740, 0, &(*F->t_742), &(*F->r_743));
goto ret_;
} else if (((G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_740)).a_)).kind_) == ((rt_int)9LL)) && f_is_package_958(F->up, (*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_740)).a_)).a_))) {
F->y_2139 = f_member_of_962(F->up, f_path_of_328(F->up, (*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_740)).a_)).a_), (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_740)).a_)).name_)), G_NV((*(P171)rt_nil_check(F->e_740)).line_));
if (((F->y_2139 != NULL) && (((G_NV((*(P114)rt_nil_check(F->y_2139)).kind_) == ((rt_int)3LL)) || (G_NV((*(P114)rt_nil_check(F->y_2139)).kind_) == ((rt_int)4LL))) || (G_NV((*(P114)rt_nil_check(F->y_2139)).kind_) == ((rt_int)10LL))))) {
F->up->call_want_199 = F->want_741;
f_gcall_942(F->up, F->e_740, 0, &(*F->t_742), &(*F->r_743));
goto ret_;
}
}
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->e_740)).a_, NULL, &F->bt_2140, &F->base_2143);
F->ro_2142 = 1;
f_index_on_713(F->up, (*(P137)rt_nil_check(F->base_2143)), F->bt_2140, F->e_740, &F->ro_2142, 0, &(*F->r_743), &(*F->t_742), &F->c_2141);
if ((f_is_numeric_423(F->up, (*F->t_742)) || f_is_discrete_425(F->up, (*F->t_742)))) {
(*F->r_743) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("G_NV(", 5), (*(P137)rt_nil_check((*F->r_743)))), one_rt_gstr(41)));
}
} else if (0 || sel2147 == ((rt_int)9LL)) {
f_expanded_757(F->up, F->e_740, &F->nm_2145);
if ((F->nm_2145 != NULL)) {
f_gen_name_762(F->up, F->nm_2145, F->want_741, &(*F->t_742), &(*F->r_743));
goto ret_;
}
if (((G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_740)).a_)).kind_) == ((rt_int)5LL)) && f_is_type_name_718(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_740)).a_)).name_))))) {
F->nm_2145 = f_nn_285(F->up, ((rt_int)8LL), G_NV((*(P171)rt_nil_check(F->e_740)).line_));
(*(P171)rt_nil_check(F->nm_2145)).a_ = F->e_740;
F->up->call_want_199 = F->want_741;
f_gcall_942(F->up, F->nm_2145, 0, &(*F->t_742), &(*F->r_743));
goto ret_;
}
if (f_is_package_958(F->up, (*(P171)rt_nil_check(F->e_740)).a_)) {
F->nm_2145 = f_nn_285(F->up, ((rt_int)5LL), G_NV((*(P171)rt_nil_check(F->e_740)).line_));
(*(P171)rt_nil_check(F->nm_2145)).name_ = (*(P171)rt_nil_check(F->e_740)).name_;
(*(P171)rt_nil_check(F->nm_2145)).tag_ = f_mk_211(F->up, f_path_of_328(F->up, (*(P171)rt_nil_check(F->e_740)).a_));
f_gen_name_762(F->up, F->nm_2145, F->want_741, &(*F->t_742), &(*F->r_743));
goto ret_;
}
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->e_740)).a_, NULL, &F->bt_2140, &F->base_2143);
F->ro_2142 = 1;
f_select_on_704(F->up, (*(P137)rt_nil_check(F->base_2143)), F->bt_2140, F->e_740, &F->ro_2142, 0, &(*F->r_743), &(*F->t_742), &F->c_2141);
if ((f_is_numeric_423(F->up, (*F->t_742)) || f_is_discrete_425(F->up, (*F->t_742)))) {
(*F->r_743) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("G_NV(", 5), (*(P137)rt_nil_check((*F->r_743)))), one_rt_gstr(41)));
}
} else if (0 || sel2147 == ((rt_int)10LL)) {
f_gen_attr_828(F->up, F->e_740, F->want_741, &(*F->t_742), &(*F->r_743));
} else if (0 || sel2147 == ((rt_int)11LL)) {
f_allocator_880(F->up, F->e_740, F->want_741, &(*F->t_742), &(*F->r_743));
} else if (0 || sel2147 == ((rt_int)12LL)) {
f_aggregate_885(F->up, F->e_740, F->want_741, &(*F->t_742), &(*F->r_743));
} else {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_740)).line_), rt_g_lit("this expression is not handled", 30));
}
}
ret_:

  return;
}

static void f_string_aggregate_749(struct f_greenc_1fr *up_, P171 e_745, P119 want_746, P119 *t_747, P137 *r_748) {
  struct f_string_aggregate_749fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_745 = e_745;
F->want_746 = want_746;
F->t_747 = t_747;
F->r_748 = r_748;
F->ag_2150 = NULL;
F->it_2151 = NULL;
F->tail_2152 = NULL;
F->l_2153 = NULL;
F->ag_2150 = f_nn_285(F->up, ((rt_int)12LL), G_NV((*(P171)rt_nil_check(F->e_745)).line_));
{ rt_int lo2157 = ((rt_int)1LL), hi2158 = ({ rt_gstr at2155 = (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_745)).name_)); at2155.hi >= at2155.lo ? at2155.hi - at2155.lo + 1 : (rt_int)0; });
for (rt_int it2159 = lo2157; it2159 <= hi2158; it2159++) {
F->k_2156 = it2159;
F->l_2153 = f_nn_285(F->up, ((rt_int)3LL), G_NV((*(P171)rt_nil_check(F->e_745)).line_));
(*(P171)rt_nil_check(F->l_2153)).name_ = f_mk_211(F->up, ({ rt_gstr sl2161 = (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_745)).name_)); rt_int l_ = F->k_2156, h_ = F->k_2156; if (l_ <= h_) { rt_index(l_, sl2161.lo, sl2161.hi); rt_index(h_, sl2161.lo, sl2161.hi); } sl2161.p += l_ - sl2161.lo; sl2161.lo = l_; sl2161.hi = h_; sl2161; }));
F->it_2151 = f_nn_285(F->up, ((rt_int)13LL), G_NV((*(P171)rt_nil_check(F->e_745)).line_));
(*(P171)rt_nil_check(F->it_2151)).b_ = F->l_2153;
if ((F->tail_2152 == NULL)) {
(*(P171)rt_nil_check(F->ag_2150)).a_ = F->it_2151;
} else {
(*(P171)rt_nil_check(F->tail_2152)).next_ = F->it_2151;
}
F->tail_2152 = F->it_2151;
}
}
L_end_2154: ;
if (((*(P171)rt_nil_check(F->ag_2150)).a_ == NULL)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_745)).line_), cat_rt_gstr(rt_g_lit("an empty string is not an aggregate of ", 39), f_kind_name_452(F->up, F->want_746)));
}
f_aggregate_885(F->up, F->ag_2150, F->want_746, &(*F->t_747), &(*F->r_748));
ret_:

  return;
}

static void f_char_literal_754(struct f_greenc_1fr *up_, P171 e_750, P119 want_751, P119 *t_752, P137 *r_753) {
  struct f_char_literal_754fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_750 = e_750;
F->want_751 = want_751;
F->t_752 = t_752;
F->r_753 = r_753;
F->i_2162 = INT64_MIN;
if ((G_NV((*(P119)rt_nil_check(F->want_751)).kind_) == ((rt_int)11LL))) {
(*F->t_752) = F->want_751;
(*F->r_753) = f_mk_211(F->up, rt_g_s2g(rt_str_of_int(rt_sub(((rt_int)(G_NV(({ rt_gstr ix2164 = (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_750)).name_)); ix2164.p[rt_index(((rt_int)1LL), ix2164.lo, ix2164.hi) - ix2164.lo]; }))) + 1), ((rt_int)1LL)))));
goto ret_;
}
F->i_2162 = f_lit_index_469(F->up, (*(P119)rt_nil_check(F->want_751)).lits_, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_750)).name_)));
if ((G_NV(F->i_2162) < ((rt_int)0LL))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_750)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(34), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_750)).name_))), rt_g_lit("\" is not a literal of ", 22)), f_kind_name_452(F->up, F->want_751)));
}
(*F->t_752) = F->want_751;
(*F->r_753) = f_mk_211(F->up, rt_g_s2g(rt_str_of_int(G_NV(F->i_2162))));
ret_:

  return;
}

static void f_expanded_757(struct f_greenc_1fr *up_, P171 e_755, P171 *r_756) {
  struct f_expanded_757fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_755 = e_755;
F->r_756 = r_756;
F->y_2165 = NULL;
F->d_2166 = INT64_MIN;
(*F->r_756) = NULL;
if (((G_NV((*(P171)rt_nil_check(F->e_755)).kind_) != ((rt_int)9LL)) || (G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_755)).a_)).kind_) != ((rt_int)5LL)))) {
goto ret_;
}
F->d_2166 = f_enclosing_depth_407(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_755)).a_)).name_)));
if ((G_NV(F->d_2166) < ((rt_int)0LL))) {
goto ret_;
}
F->y_2165 = f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_755)).a_)).name_)));
if (((F->y_2165 != NULL) && ((((G_NV((*(P114)rt_nil_check(F->y_2165)).kind_) == ((rt_int)1LL)) || (G_NV((*(P114)rt_nil_check(F->y_2165)).kind_) == ((rt_int)2LL))) || (G_NV((*(P114)rt_nil_check(F->y_2165)).kind_) == ((rt_int)8LL))) || (G_NV((*(P114)rt_nil_check(F->y_2165)).kind_) == ((rt_int)9LL))))) {
goto ret_;
}
if ((f_lookup_at_405(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_755)).name_)), G_NV(F->d_2166)) == NULL)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_755)).line_), cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_755)).name_)), rt_g_lit(" is not declared in ", 20)), (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_755)).a_)).name_))));
}
(*F->r_756) = f_nn_285(F->up, ((rt_int)5LL), G_NV((*(P171)rt_nil_check(F->e_755)).line_));
(*(P171)rt_nil_check((*F->r_756))).name_ = (*(P171)rt_nil_check(F->e_755)).name_;
(*(P171)rt_nil_check((*F->r_756))).ival_ = rt_add(G_NV(F->d_2166), ((rt_int)1LL));
ret_:

  return;
}

static void f_gen_name_762(struct f_greenc_1fr *up_, P171 e_758, P119 want_759, P119 *t_760, P137 *r_761) {
  struct f_gen_name_762fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_758 = e_758;
F->want_759 = want_759;
F->t_760 = t_760;
F->r_761 = r_761;
F->y_2167 = NULL;
F->y_2167 = f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_758)).name_)));
F->z_2168 = NULL;
F->call_2169 = NULL;
if ((G_NV((*(P171)rt_nil_check(F->e_758)).ival_) > ((rt_int)0LL))) {
F->y_2167 = f_lookup_at_405(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_758)).name_)), rt_sub(G_NV((*(P171)rt_nil_check(F->e_758)).ival_), ((rt_int)1LL)));
}
if (((*(P171)rt_nil_check(F->e_758)).tag_ != NULL)) {
F->y_2167 = f_member_of_962(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_758)).tag_)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_758)).name_)), G_NV((*(P171)rt_nil_check(F->e_758)).line_));
}
if ((F->y_2167 == NULL)) {
if ((eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_758)).name_)), rt_g_lit("PUT", 3)) || eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_758)).name_)), rt_g_lit("GET", 3)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_758)).line_), cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_758)).name_)), rt_g_lit(" needs an item", 14)));
}
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_758)).line_), cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_758)).name_)), rt_g_lit(" is not declared", 16)));
}
if (((G_NV((*(P114)rt_nil_check(F->y_2167)).kind_) == ((rt_int)2LL)) && G_NV((*(P114)rt_nil_check(F->y_2167)).hasmv_))) {
(*F->t_760) = (*(P114)rt_nil_check(F->y_2167)).t_;
(*F->r_761) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV((*(P114)rt_nil_check(F->y_2167)).mvalue_)))), rt_g_lit("LL)", 3)));
goto ret_;
}
if (((G_NV((*(P114)rt_nil_check(F->y_2167)).kind_) == ((rt_int)2LL)) && (G_NV((*(P114)rt_nil_check(F->y_2167)).flags_) == rt_add(((rt_int)1LL), ((rt_int)2LL))))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_758)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("deferred constant ", 18), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2167)).name_))), rt_g_lit(" is used before its full declaration (RM79 7.4)", 47)));
}
if (((G_NV((*(P114)rt_nil_check(F->y_2167)).kind_) == ((rt_int)1LL)) || (G_NV((*(P114)rt_nil_check(F->y_2167)).kind_) == ((rt_int)2LL)))) {
(*F->t_760) = (*(P114)rt_nil_check(F->y_2167)).t_;
f_access_of_676(F->up, F->y_2167, &(*F->r_761));
if (((G_NV((*(P114)rt_nil_check(F->y_2167)).kind_) == ((rt_int)1LL)) && (f_is_numeric_423(F->up, (*F->t_760)) || f_is_discrete_425(F->up, (*F->t_760))))) {
(*F->r_761) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("G_NV(", 5), (*(P137)rt_nil_check((*F->r_761)))), one_rt_gstr(41)));
}
goto ret_;
}
if ((G_NV((*(P114)rt_nil_check(F->y_2167)).kind_) == ((rt_int)7LL))) {
F->z_2168 = F->y_2167;
if ((F->want_759 != NULL)) {
while ((F->z_2168 != NULL)) {
if (((eq_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->z_2168)).name_)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_758)).name_))) && (G_NV((*(P114)rt_nil_check(F->z_2168)).kind_) == ((rt_int)7LL))) && f_same_416(F->up, (*(P114)rt_nil_check(F->z_2168)).t_, F->want_759))) {
goto L_end_2170;
}
F->z_2168 = (*(P114)rt_nil_check(F->z_2168)).chain_;
}
L_end_2170: ;
if ((F->z_2168 == NULL)) {
F->z_2168 = F->y_2167;
}
}
(*F->t_760) = (*(P114)rt_nil_check(F->z_2168)).t_;
(*F->r_761) = f_mk_211(F->up, rt_g_s2g(rt_str_of_int(G_NV((*(P114)rt_nil_check(F->z_2168)).mvalue_))));
goto ret_;
}
if ((((G_NV((*(P114)rt_nil_check(F->y_2167)).kind_) == ((rt_int)3LL)) || (G_NV((*(P114)rt_nil_check(F->y_2167)).kind_) == ((rt_int)4LL))) || (G_NV((*(P114)rt_nil_check(F->y_2167)).kind_) == ((rt_int)10LL)))) {
F->call_2169 = f_nn_285(F->up, ((rt_int)8LL), G_NV((*(P171)rt_nil_check(F->e_758)).line_));
(*(P171)rt_nil_check(F->call_2169)).a_ = F->e_758;
F->up->call_want_199 = F->want_759;
f_gcall_942(F->up, F->call_2169, 0, &(*F->t_760), &(*F->r_761));
goto ret_;
}
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_758)).line_), cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_758)).name_)), rt_g_lit(" cannot be used as a value", 26)));
ret_:

  return;
}

static void f_gen_unop_767(struct f_greenc_1fr *up_, P171 e_763, P119 want_764, P119 *t_765, P137 *r_766) {
  struct f_gen_unop_767fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_763 = e_763;
F->want_764 = want_764;
F->t_765 = t_765;
F->r_766 = r_766;
F->a_2171 = NULL;
F->x_2172 = NULL;
F->done_2173 = INT_MIN;
f_user_operator_1009(F->up, F->e_763, F->want_764, &(*F->t_765), &(*F->r_766), &F->done_2173);
if (G_NV(F->done_2173)) {
goto ret_;
}
if (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_763)).name_)), rt_g_lit("NOT", 3))) {
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->e_763)).a_, F->want_764, &(*F->t_765), &F->a_2171);
if (((G_NV((*(P119)rt_nil_check((*F->t_765))).kind_) == ((rt_int)6LL)) && ((G_NV((*(P119)rt_nil_check((*F->t_765))).dims_) == ((rt_int)1LL)) && (G_NV((*(P119)rt_nil_check((*(P119)rt_nil_check((*F->t_765))).elem_)).kind_) == ((rt_int)2LL))))) {
f_ctype_461(F->up, (*F->t_765), &F->x_2172);
(*F->r_766) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("not_", 4), (*(P137)rt_nil_check(F->x_2172))), one_rt_gstr(40)), (*(P137)rt_nil_check(F->a_2171))), one_rt_gstr(41)));
goto ret_;
}
if ((G_NV((*(P119)rt_nil_check((*F->t_765))).kind_) != ((rt_int)2LL))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_763)).line_), rt_g_lit("operator not applies to boolean values and arrays (RM79 4.5.1)", 62));
}
(*F->r_766) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!", 2), (*(P137)rt_nil_check(F->a_2171))), one_rt_gstr(41)));
goto ret_;
}
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->e_763)).a_, F->want_764, &(*F->t_765), &F->a_2171);
if ((!f_is_numeric_423(F->up, (*F->t_765)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_763)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("unary ", 6), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_763)).name_))), rt_g_lit(" applies to numeric values (RM79 4.5.4)", 39)));
}
if (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_763)).name_)), rt_g_lit("+", 1))) {
(*F->r_766) = F->a_2171;
} else if (((G_NV((*(P119)rt_nil_check((*F->t_765))).kind_) == ((rt_int)3LL)) || (G_NV((*(P119)rt_nil_check((*F->t_765))).kind_) == ((rt_int)16LL)))) {
(*F->r_766) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(-", 2), (*(P137)rt_nil_check(F->a_2171))), one_rt_gstr(41)));
} else {
(*F->r_766) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_neg(", 7), (*(P137)rt_nil_check(F->a_2171))), one_rt_gstr(41)));
}
ret_:

  return;
}

static int f_short_int_769(struct f_greenc_1fr *up_, P119 t_768) {
  struct f_short_int_769fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_768 = t_768;
if ((!(G_NV((*(P119)rt_nil_check(F->t_768)).kind_) == ((rt_int)1LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (f_root_418(F->up, F->t_768) == F->up->ty_short_164);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_float_kind_771(struct f_greenc_1fr *up_, P119 t_770) {
  struct f_float_kind_771fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_770 = t_770;
if ((f_root_418(F->up, F->t_770) == F->up->ty_sfloat_166)) {
F->result_ = rt_g_lit("1", 1);
goto ret_;
}
F->result_ = rt_g_lit("0", 1);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_membership_774(struct f_greenc_1fr *up_, P171 e_772, P137 *r_773) {
  struct f_membership_774fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_772 = e_772;
F->r_773 = r_773;
F->ta_2174 = NULL;
F->tb_2175 = NULL;
F->tt_2176 = NULL;
F->a_2177 = NULL;
F->lo_2178 = NULL;
F->hi_2179 = NULL;
F->ct_2180 = NULL;
F->c_2181 = NULL;
F->d_2182 = NULL;
if ((G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_772)).b_)).kind_) == ((rt_int)14LL))) {
if (f_is_literal_726(F->up, (*(P171)rt_nil_check(F->e_772)).a_)) {
f_range_bounds_734(F->up, (*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_772)).b_)).a_, (*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_772)).b_)).b_, NULL, G_NV((*(P171)rt_nil_check(F->e_772)).line_), &F->tt_2176, &F->lo_2178, &F->hi_2179);
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->e_772)).a_, F->tt_2176, &F->ta_2174, &F->a_2177);
} else {
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->e_772)).a_, NULL, &F->ta_2174, &F->a_2177);
f_range_bounds_734(F->up, (*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_772)).b_)).a_, (*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_772)).b_)).b_, F->ta_2174, G_NV((*(P171)rt_nil_check(F->e_772)).line_), &F->tt_2176, &F->lo_2178, &F->hi_2179);
}
f_check_type_456(F->up, F->tt_2176, F->ta_2174, G_NV((*(P171)rt_nil_check(F->e_772)).line_));
if (((!f_is_numeric_423(F->up, F->ta_2174)) && (!f_is_discrete_425(F->up, F->ta_2174)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_772)).line_), rt_g_lit("a range applies to scalar values (RM79 4.5.2)", 45));
}
f_ctype_461(F->up, F->ta_2174, &F->ct_2180);
(*F->r_773) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P137)rt_nil_check(F->ct_2180))), rt_g_lit(" m_ = ", 6)), (*(P137)rt_nil_check(F->a_2177))), rt_g_lit("; m_ >= ", 8)), (*(P137)rt_nil_check(F->lo_2178))), rt_g_lit(" && m_ <= ", 10)), (*(P137)rt_nil_check(F->hi_2179))), rt_g_lit("; })", 4)));
goto ret_;
}
f_resolve_477(F->up, (*(P171)rt_nil_check(F->e_772)).b_, &F->tt_2176, &F->c_2181);
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->e_772)).a_, F->tt_2176, &F->ta_2174, &F->a_2177);
f_check_type_456(F->up, F->ta_2174, F->tt_2176, G_NV((*(P171)rt_nil_check(F->e_772)).line_));
f_ctype_461(F->up, F->ta_2174, &F->ct_2180);
if (((f_is_numeric_423(F->up, F->ta_2174) || f_is_discrete_425(F->up, F->ta_2174)) && ((*(P175)rt_nil_check(F->c_2181)).lo_ != NULL))) {
(*F->r_773) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P137)rt_nil_check(F->ct_2180))), rt_g_lit(" m_ = ", 6)), (*(P137)rt_nil_check(F->a_2177))), rt_g_lit("; m_ >= ", 8)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_2181)).lo_))), rt_g_lit(" && m_ <= ", 10)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_2181)).hi_))), rt_g_lit("; })", 4)));
} else if (((G_NV((*(P119)rt_nil_check(F->ta_2174)).kind_) == ((rt_int)6LL)) && ((*(P175)rt_nil_check(F->c_2181)).lo_ != NULL))) {
(*F->r_773) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P137)rt_nil_check(F->ct_2180))), rt_g_lit(" m_ = ", 6)), (*(P137)rt_nil_check(F->a_2177))), rt_g_lit("; m_.lo == ", 11)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_2181)).lo_))), rt_g_lit(" && m_.hi == ", 13)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_2181)).hi_))), rt_g_lit("; })", 4)));
} else if (((G_NV((*(P119)rt_nil_check(F->ta_2174)).kind_) == ((rt_int)7LL)) && f_discriminated_450(F->up, F->c_2181))) {
(*F->r_773) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P137)rt_nil_check(F->ct_2180))), rt_g_lit(" m_ = ", 6)), (*(P137)rt_nil_check(F->a_2177))), rt_g_lit("; 1", 3)));
F->d_2182 = (*(P175)rt_nil_check(F->c_2181)).dv_;
while ((F->d_2182 != NULL)) {
(*F->r_773) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check((*F->r_773))), rt_g_lit(" && m_.", 7)), f_c_field_228(F->up, (*(P137)rt_nil_check((*(P1714)rt_nil_check(F->d_2182)).name_)))), rt_g_lit(" == (", 5)), (*(P137)rt_nil_check((*(P1714)rt_nil_check(F->d_2182)).v_))), one_rt_gstr(41)));
F->d_2182 = (*(P1714)rt_nil_check(F->d_2182)).next_;
}
L_end_2183: ;
(*F->r_773) = f_mk_211(F->up, cat_rt_gstr((*(P137)rt_nil_check((*F->r_773))), rt_g_lit("; })", 4)));
} else {
(*F->r_773) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ (void)(", 10), (*(P137)rt_nil_check(F->a_2177))), rt_g_lit("); 1; })", 8)));
}
ret_:

  return;
}

static void f_condition_779(struct f_greenc_1fr *up_, P171 e_775, P119 want_776, P119 *t_777, P137 *r_778) {
  struct f_condition_779fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_775 = e_775;
F->want_776 = want_776;
F->t_777 = t_777;
F->r_778 = r_778;
F->a_2184 = NULL;
F->b_2185 = NULL;
F->tb_2186 = NULL;
if (((G_NV((*(P171)rt_nil_check(F->e_775)).kind_) == ((rt_int)7LL)) && (G_NV((*(P171)rt_nil_check(F->e_775)).ival_) == ((rt_int)1LL)))) {
f_condition_779(F->up, (*(P171)rt_nil_check(F->e_775)).a_, F->up->ty_bool_154, &(*F->t_777), &F->a_2184);
f_check_type_456(F->up, (*F->t_777), F->up->ty_bool_154, G_NV((*(P171)rt_nil_check(F->e_775)).line_));
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->e_775)).b_, F->up->ty_bool_154, &F->tb_2186, &F->b_2185);
f_check_type_456(F->up, F->tb_2186, F->up->ty_bool_154, G_NV((*(P171)rt_nil_check(F->e_775)).line_));
(*F->t_777) = F->up->ty_bool_154;
if (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_775)).name_)), rt_g_lit("AND", 3))) {
(*F->r_778) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check(F->a_2184))), rt_g_lit(" && ", 4)), (*(P137)rt_nil_check(F->b_2185))), one_rt_gstr(41)));
} else {
(*F->r_778) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check(F->a_2184))), rt_g_lit(" || ", 4)), (*(P137)rt_nil_check(F->b_2185))), one_rt_gstr(41)));
}
goto ret_;
}
f_gexpr_739(F->up, F->e_775, F->up->ty_bool_154, &(*F->t_777), &(*F->r_778));
ret_:

  return;
}

static void f_catenation_784(struct f_greenc_1fr *up_, P171 e_780, P119 want_781, P119 *t_782, P137 *r_783) {
  struct f_catenation_784fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_780 = e_780;
F->want_781 = want_781;
F->t_782 = t_782;
F->r_783 = r_783;
F->arrt_2187 = NULL;
F->ta_2188 = NULL;
F->tb_2189 = NULL;
F->a_2190 = NULL;
F->b_2191 = NULL;
F->ct_2192 = NULL;
if ((((F->want_781 != NULL) && (G_NV((*(P119)rt_nil_check(F->want_781)).kind_) == ((rt_int)6LL))) && (G_NV((*(P119)rt_nil_check(F->want_781)).dims_) == ((rt_int)1LL)))) {
F->arrt_2187 = F->want_781;
} else {
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->e_780)).a_, NULL, &F->ta_2188, &F->a_2190);
if (((G_NV((*(P119)rt_nil_check(F->ta_2188)).kind_) == ((rt_int)6LL)) && (G_NV((*(P119)rt_nil_check(F->ta_2188)).dims_) == ((rt_int)1LL)))) {
F->arrt_2187 = F->ta_2188;
} else {
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->e_780)).b_, NULL, &F->tb_2189, &F->b_2191);
if (((G_NV((*(P119)rt_nil_check(F->tb_2189)).kind_) == ((rt_int)6LL)) && (G_NV((*(P119)rt_nil_check(F->tb_2189)).dims_) == ((rt_int)1LL)))) {
F->arrt_2187 = F->tb_2189;
} else if (((G_NV((*(P119)rt_nil_check(F->ta_2188)).kind_) == ((rt_int)11LL)) && (G_NV((*(P119)rt_nil_check(F->tb_2189)).kind_) == ((rt_int)11LL)))) {
F->arrt_2187 = F->up->ty_string_157;
} else {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_780)).line_), rt_g_lit("& catenates one-dimensional arrays and their components (RM79 4.5.3)", 68));
}
}
}
f_ctype_461(F->up, F->arrt_2187, &F->ct_2192);
f_cat_operand_789(F->up, (*(P171)rt_nil_check(F->e_780)).a_, F->arrt_2187, G_NV((*(P171)rt_nil_check(F->e_780)).line_), &F->a_2190);
f_cat_operand_789(F->up, (*(P171)rt_nil_check(F->e_780)).b_, F->arrt_2187, G_NV((*(P171)rt_nil_check(F->e_780)).line_), &F->b_2191);
(*F->t_782) = F->arrt_2187;
(*F->r_783) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("cat_", 4), (*(P137)rt_nil_check(F->ct_2192))), one_rt_gstr(40)), (*(P137)rt_nil_check(F->a_2190))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->b_2191))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_cat_operand_789(struct f_greenc_1fr *up_, P171 x_785, P119 arrt_786, rt_int line_787, P137 *r_788) {
  struct f_cat_operand_789fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_785 = x_785;
F->arrt_786 = arrt_786;
F->line_787 = line_787;
F->r_788 = r_788;
F->tx_2193 = NULL;
F->ct_2194 = NULL;
if ((f_is_char_lit_720(F->up, F->x_785) && (G_NV((*(P119)rt_nil_check((*(P119)rt_nil_check(F->arrt_786)).elem_)).kind_) == ((rt_int)11LL)))) {
f_gexpr_739(F->up, F->x_785, (*(P119)rt_nil_check(F->arrt_786)).elem_, &F->tx_2193, &(*F->r_788));
} else {
f_gexpr_739(F->up, F->x_785, F->arrt_786, &F->tx_2193, &(*F->r_788));
}
if (f_same_416(F->up, F->tx_2193, F->arrt_786)) {
goto ret_;
}
if (f_same_416(F->up, F->tx_2193, (*(P119)rt_nil_check(F->arrt_786)).elem_)) {
f_ctype_461(F->up, F->arrt_786, &F->ct_2194);
(*F->r_788) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("one_", 4), (*(P137)rt_nil_check(F->ct_2194))), one_rt_gstr(40)), (*(P137)rt_nil_check((*F->r_788)))), one_rt_gstr(41)));
goto ret_;
}
f_fail_232(F->up, F->line_787, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("type mismatch: ", 15), f_kind_name_452(F->up, F->tx_2193)), rt_g_lit(" in a catenation of ", 20)), f_kind_name_452(F->up, F->arrt_786)), rt_g_lit(" (RM79 4.5.3)", 13)));
ret_:

  return;
}

static void f_arithmetic_794(struct f_greenc_1fr *up_, P171 e_790, P119 want_791, P119 *t_792, P137 *r_793) {
  struct f_arithmetic_794fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_790 = e_790;
F->want_791 = want_791;
F->t_792 = t_792;
F->r_793 = r_793;
F->op_2195 = cp_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_790)).name_)));
F->ta_2196 = NULL;
F->tb_2197 = NULL;
F->hint_2198 = NULL;
F->a_2199 = NULL;
F->b_2200 = NULL;
if (eq_rt_gstr(F->op_2195, rt_g_lit("**", 2))) {
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->e_790)).a_, F->want_791, &F->ta_2196, &F->a_2199);
F->hint_2198 = F->up->ty_int_153;
if ((G_NV((*(P119)rt_nil_check(F->ta_2196)).kind_) == ((rt_int)1LL))) {
F->hint_2198 = F->ta_2196;
}
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->e_790)).b_, F->hint_2198, &F->tb_2197, &F->b_2200);
if ((G_NV((*(P119)rt_nil_check(F->tb_2197)).kind_) != ((rt_int)1LL))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_790)).line_), rt_g_lit("the exponent of ** is an integer (RM79 4.5.6)", 45));
}
(*F->t_792) = F->ta_2196;
if ((G_NV((*(P119)rt_nil_check(F->ta_2196)).kind_) == ((rt_int)1LL))) {
(*F->r_793) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_pow(", 7), (*(P137)rt_nil_check(F->a_2199))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->b_2200))), one_rt_gstr(41)));
} else if ((G_NV((*(P119)rt_nil_check(F->ta_2196)).kind_) == ((rt_int)3LL))) {
(*F->r_793) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fpow(", 10), (*(P137)rt_nil_check(F->a_2199))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->b_2200))), rt_g_lit(", ", 2)), f_float_kind_771(F->up, F->ta_2196)), one_rt_gstr(41)));
} else {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_790)).line_), rt_g_lit("operator ** is defined for integer and floating point values (RM79 4.5.6)", 73));
}
} else {
if ((f_is_literal_726(F->up, (*(P171)rt_nil_check(F->e_790)).a_) && (!f_is_literal_726(F->up, (*(P171)rt_nil_check(F->e_790)).b_)))) {
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->e_790)).b_, F->want_791, &F->tb_2197, &F->b_2200);
F->hint_2198 = F->tb_2197;
if (((G_NV((*(P119)rt_nil_check(F->tb_2197)).kind_) == ((rt_int)16LL)) && (eq_rt_gstr(F->op_2195, rt_g_lit("*", 1)) || eq_rt_gstr(F->op_2195, rt_g_lit("/", 1))))) {
F->hint_2198 = F->up->ty_int_153;
}
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->e_790)).a_, F->hint_2198, &F->ta_2196, &F->a_2199);
} else {
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->e_790)).a_, F->want_791, &F->ta_2196, &F->a_2199);
F->hint_2198 = F->ta_2196;
if (((((G_NV((*(P119)rt_nil_check(F->ta_2196)).kind_) == ((rt_int)16LL)) && (eq_rt_gstr(F->op_2195, rt_g_lit("*", 1)) || eq_rt_gstr(F->op_2195, rt_g_lit("/", 1)))) && f_is_literal_726(F->up, (*(P171)rt_nil_check(F->e_790)).b_)) && (G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_790)).b_)).kind_) == ((rt_int)1LL)))) {
F->hint_2198 = F->up->ty_int_153;
}
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->e_790)).b_, F->hint_2198, &F->tb_2197, &F->b_2200);
}
if (((!f_is_numeric_423(F->up, F->ta_2196)) || (!f_is_numeric_423(F->up, F->tb_2197)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_790)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2195), rt_g_lit(" needs numeric operands, not ", 29)), f_kind_name_452(F->up, F->ta_2196)), rt_g_lit(" and ", 5)), f_kind_name_452(F->up, F->tb_2197)));
}
if (((G_NV((*(P119)rt_nil_check(F->ta_2196)).kind_) == ((rt_int)16LL)) || (G_NV((*(P119)rt_nil_check(F->tb_2197)).kind_) == ((rt_int)16LL)))) {
f_fixed_operation_802(F->up, F->e_790, F->ta_2196, F->tb_2197, (*(P137)rt_nil_check(F->a_2199)), (*(P137)rt_nil_check(F->b_2200)), &(*F->t_792), &(*F->r_793));
goto ret_;
}
f_check_type_456(F->up, F->tb_2197, F->ta_2196, G_NV((*(P171)rt_nil_check(F->e_790)).line_));
(*F->t_792) = F->ta_2196;
if ((G_NV((*(P119)rt_nil_check(F->ta_2196)).kind_) == ((rt_int)3LL))) {
if (eq_rt_gstr(F->op_2195, rt_g_lit("+", 1))) {
(*F->r_793) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fadd(", 10), (*(P137)rt_nil_check(F->a_2199))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->b_2200))), rt_g_lit(", ", 2)), f_float_kind_771(F->up, F->ta_2196)), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2195, rt_g_lit("-", 1))) {
(*F->r_793) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fsub(", 10), (*(P137)rt_nil_check(F->a_2199))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->b_2200))), rt_g_lit(", ", 2)), f_float_kind_771(F->up, F->ta_2196)), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2195, rt_g_lit("*", 1))) {
(*F->r_793) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fmul(", 10), (*(P137)rt_nil_check(F->a_2199))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->b_2200))), rt_g_lit(", ", 2)), f_float_kind_771(F->up, F->ta_2196)), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2195, rt_g_lit("/", 1))) {
(*F->r_793) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fdiv(", 10), (*(P137)rt_nil_check(F->a_2199))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->b_2200))), rt_g_lit(", ", 2)), f_float_kind_771(F->up, F->ta_2196)), one_rt_gstr(41)));
} else {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_790)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2195), rt_g_lit(" is not defined for real values (RM79 4.5.5)", 44)));
}
goto ret_;
}
if (eq_rt_gstr(F->op_2195, rt_g_lit("+", 1))) {
(*F->r_793) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_add(", 7), (*(P137)rt_nil_check(F->a_2199))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->b_2200))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2195, rt_g_lit("-", 1))) {
(*F->r_793) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_sub(", 7), (*(P137)rt_nil_check(F->a_2199))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->b_2200))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2195, rt_g_lit("*", 1))) {
(*F->r_793) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_mul(", 7), (*(P137)rt_nil_check(F->a_2199))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->b_2200))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2195, rt_g_lit("/", 1))) {
(*F->r_793) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_quot(", 8), (*(P137)rt_nil_check(F->a_2199))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->b_2200))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2195, rt_g_lit("MOD", 3))) {
(*F->r_793) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_rem(", 7), (*(P137)rt_nil_check(F->a_2199))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->b_2200))), one_rt_gstr(41)));
} else {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_790)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2195), rt_g_lit(" is not defined for integers", 28)));
}
}
if (f_short_int_769(F->up, (*F->t_792))) {
(*F->r_793) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_short(", 11), (*(P137)rt_nil_check((*F->r_793)))), one_rt_gstr(41)));
}
ret_:

  return;
}

static void f_fixed_operation_802(struct f_greenc_1fr *up_, P171 e_795, P119 ta_796, P119 tb_797, rt_gstr a_798, rt_gstr b_799, P119 *t_800, P137 *r_801) {
  struct f_fixed_operation_802fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_795 = e_795;
F->ta_796 = ta_796;
F->tb_797 = tb_797;
F->a_798 = cp_rt_gstr(a_798);
F->b_799 = cp_rt_gstr(b_799);
F->t_800 = t_800;
F->r_801 = r_801;
F->op_2201 = cp_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_795)).name_)));
if ((eq_rt_gstr(F->op_2201, rt_g_lit("+", 1)) || eq_rt_gstr(F->op_2201, rt_g_lit("-", 1)))) {
f_check_type_456(F->up, F->tb_797, F->ta_796, G_NV((*(P171)rt_nil_check(F->e_795)).line_));
(*F->t_800) = F->ta_796;
(*F->r_801) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_798), one_rt_gstr(32)), F->op_2201), one_rt_gstr(32)), F->b_799), one_rt_gstr(41)));
} else if (((eq_rt_gstr(F->op_2201, rt_g_lit("*", 1)) && (G_NV((*(P119)rt_nil_check(F->ta_796)).kind_) == ((rt_int)16LL))) && (G_NV((*(P119)rt_nil_check(F->tb_797)).kind_) == ((rt_int)16LL)))) {
(*F->t_800) = F->up->ty_ufixed_169;
(*F->r_801) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_798), rt_g_lit(" * ", 3)), F->b_799), one_rt_gstr(41)));
} else if (((eq_rt_gstr(F->op_2201, rt_g_lit("/", 1)) && (G_NV((*(P119)rt_nil_check(F->ta_796)).kind_) == ((rt_int)16LL))) && (G_NV((*(P119)rt_nil_check(F->tb_797)).kind_) == ((rt_int)16LL)))) {
(*F->t_800) = F->up->ty_ufixed_169;
(*F->r_801) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fdiv(", 10), F->a_798), rt_g_lit(", ", 2)), F->b_799), rt_g_lit(", 0)", 4)));
} else if (((eq_rt_gstr(F->op_2201, rt_g_lit("*", 1)) && (G_NV((*(P119)rt_nil_check(F->ta_796)).kind_) == ((rt_int)16LL))) && (G_NV((*(P119)rt_nil_check(F->tb_797)).kind_) == ((rt_int)1LL)))) {
(*F->t_800) = F->ta_796;
(*F->r_801) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_798), rt_g_lit(" * (double)(", 12)), F->b_799), rt_g_lit("))", 2)));
} else if (((eq_rt_gstr(F->op_2201, rt_g_lit("*", 1)) && (G_NV((*(P119)rt_nil_check(F->ta_796)).kind_) == ((rt_int)1LL))) && (G_NV((*(P119)rt_nil_check(F->tb_797)).kind_) == ((rt_int)16LL)))) {
(*F->t_800) = F->tb_797;
(*F->r_801) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((double)(", 10), F->a_798), rt_g_lit(") * ", 4)), F->b_799), one_rt_gstr(41)));
} else if (((eq_rt_gstr(F->op_2201, rt_g_lit("/", 1)) && (G_NV((*(P119)rt_nil_check(F->ta_796)).kind_) == ((rt_int)16LL))) && (G_NV((*(P119)rt_nil_check(F->tb_797)).kind_) == ((rt_int)1LL)))) {
(*F->t_800) = F->ta_796;
(*F->r_801) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix(rt_g_fdiv(", 19), F->a_798), rt_g_lit(", (double)(", 11)), F->b_799), rt_g_lit("), 0), ", 7)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->ta_796)).fsmall_))), one_rt_gstr(41)));
} else {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_795)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2201), rt_g_lit(" is not defined for these fixed point operands (RM79 4.5.5)", 59)));
}
ret_:

  return;
}

static void f_gen_binop_807(struct f_greenc_1fr *up_, P171 e_803, P119 want_804, P119 *t_805, P137 *r_806) {
  struct f_gen_binop_807fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_803 = e_803;
F->want_804 = want_804;
F->t_805 = t_805;
F->r_806 = r_806;
F->op_2202 = cp_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_803)).name_)));
F->ta_2203 = NULL;
F->tb_2204 = NULL;
F->hint_2205 = NULL;
F->ct_2206 = NULL;
F->a_2207 = NULL;
F->b_2208 = NULL;
F->x_2209 = NULL;
F->dummy_2210 = NULL;
F->done_2211 = INT_MIN;
(*F->t_805) = F->up->ty_bool_154;
f_user_operator_1009(F->up, F->e_803, F->want_804, &(*F->t_805), &(*F->r_806), &F->done_2211);
if (G_NV(F->done_2211)) {
goto ret_;
}
if ((G_NV((*(P171)rt_nil_check(F->e_803)).ival_) == ((rt_int)1LL))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_803)).line_), rt_g_lit("and then and or else are allowed only in conditions (RM79 5.4.1)", 64));
}
if (((eq_rt_gstr(F->op_2202, rt_g_lit("AND", 3)) || eq_rt_gstr(F->op_2202, rt_g_lit("OR", 2))) || eq_rt_gstr(F->op_2202, rt_g_lit("XOR", 3)))) {
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->e_803)).a_, F->want_804, &F->ta_2203, &F->a_2207);
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->e_803)).b_, F->ta_2203, &F->tb_2204, &F->b_2208);
f_check_type_456(F->up, F->tb_2204, F->ta_2203, G_NV((*(P171)rt_nil_check(F->e_803)).line_));
(*F->t_805) = F->ta_2203;
if (((G_NV((*(P119)rt_nil_check(F->ta_2203)).kind_) == ((rt_int)6LL)) && ((G_NV((*(P119)rt_nil_check(F->ta_2203)).dims_) == ((rt_int)1LL)) && (G_NV((*(P119)rt_nil_check((*(P119)rt_nil_check(F->ta_2203)).elem_)).kind_) == ((rt_int)2LL))))) {
f_ctype_461(F->up, F->ta_2203, &F->x_2209);
(*F->r_806) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(f_lower_s_222(F->up, F->op_2202), one_rt_gstr(95)), (*(P137)rt_nil_check(F->x_2209))), one_rt_gstr(40)), (*(P137)rt_nil_check(F->a_2207))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->b_2208))), one_rt_gstr(41)));
goto ret_;
}
if ((G_NV((*(P119)rt_nil_check(F->ta_2203)).kind_) != ((rt_int)2LL))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_803)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2202), rt_g_lit(" applies to boolean values and arrays (RM79 4.5.1)", 50)));
}
if (eq_rt_gstr(F->op_2202, rt_g_lit("AND", 3))) {
(*F->r_806) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check(F->a_2207))), rt_g_lit(" && ", 4)), (*(P137)rt_nil_check(F->b_2208))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2202, rt_g_lit("OR", 2))) {
(*F->r_806) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check(F->a_2207))), rt_g_lit(" || ", 4)), (*(P137)rt_nil_check(F->b_2208))), one_rt_gstr(41)));
} else {
(*F->r_806) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check(F->a_2207))), rt_g_lit(" != ", 4)), (*(P137)rt_nil_check(F->b_2208))), one_rt_gstr(41)));
}
goto ret_;
}
if (eq_rt_gstr(F->op_2202, rt_g_lit("IN", 2))) {
f_membership_774(F->up, F->e_803, &(*F->r_806));
goto ret_;
}
if (eq_rt_gstr(F->op_2202, rt_g_lit("&", 1))) {
f_catenation_784(F->up, F->e_803, F->want_804, &(*F->t_805), &(*F->r_806));
goto ret_;
}
if (f_is_rel_324(F->up, F->op_2202)) {
if (((((f_is_literal_726(F->up, (*(P171)rt_nil_check(F->e_803)).a_) || f_is_enum_lit_722(F->up, (*(P171)rt_nil_check(F->e_803)).a_)) || (G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_803)).a_)).kind_) == ((rt_int)4LL))) || (G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_803)).a_)).kind_) == ((rt_int)3LL))) || (G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_803)).a_)).kind_) == ((rt_int)12LL)))) {
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->e_803)).b_, NULL, &F->hint_2205, &F->dummy_2210);
}
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->e_803)).a_, F->hint_2205, &F->ta_2203, &F->a_2207);
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->e_803)).b_, F->ta_2203, &F->tb_2204, &F->b_2208);
F->ct_2206 = F->ta_2203;
if (((G_NV((*(P119)rt_nil_check(F->ta_2203)).kind_) != ((rt_int)10LL)) && (G_NV((*(P119)rt_nil_check(F->tb_2204)).kind_) != ((rt_int)10LL)))) {
f_check_type_456(F->up, F->tb_2204, F->ta_2203, G_NV((*(P171)rt_nil_check(F->e_803)).line_));
}
if ((G_NV((*(P119)rt_nil_check(F->ta_2203)).kind_) == ((rt_int)10LL))) {
F->ct_2206 = F->tb_2204;
}
if (((((!eq_rt_gstr(F->op_2202, rt_g_lit("=", 1))) && (!eq_rt_gstr(F->op_2202, rt_g_lit("/=", 2)))) && (!f_is_numeric_423(F->up, F->ct_2206))) && (!f_is_discrete_425(F->up, F->ct_2206)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_803)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2202), rt_g_lit(" is defined for scalar types, not for ", 38)), f_kind_name_452(F->up, F->ct_2206)), rt_g_lit(" (RM79 4.5.2)", 13)));
}
if (f_composite_581(F->up, F->ct_2206)) {
f_eq_code_596(F->up, F->ct_2206, (*(P137)rt_nil_check(F->a_2207)), (*(P137)rt_nil_check(F->b_2208)), &F->x_2209);
if (eq_rt_gstr(F->op_2202, rt_g_lit("=", 1))) {
(*F->r_806) = F->x_2209;
} else if (eq_rt_gstr(F->op_2202, rt_g_lit("/=", 2))) {
(*F->r_806) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!", 2), (*(P137)rt_nil_check(F->x_2209))), one_rt_gstr(41)));
} else {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_803)).line_), rt_g_lit("no ordering is defined for composite values", 43));
}
goto ret_;
}
if (eq_rt_gstr(F->op_2202, rt_g_lit("=", 1))) {
(*F->r_806) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check(F->a_2207))), rt_g_lit(" == ", 4)), (*(P137)rt_nil_check(F->b_2208))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2202, rt_g_lit("/=", 2))) {
(*F->r_806) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check(F->a_2207))), rt_g_lit(" != ", 4)), (*(P137)rt_nil_check(F->b_2208))), one_rt_gstr(41)));
} else {
(*F->r_806) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check(F->a_2207))), one_rt_gstr(32)), F->op_2202), one_rt_gstr(32)), (*(P137)rt_nil_check(F->b_2208))), one_rt_gstr(41)));
}
goto ret_;
}
f_arithmetic_794(F->up, F->e_803, F->want_804, &(*F->t_805), &(*F->r_806));
ret_:

  return;
}

static void f_conversion_812(struct f_greenc_1fr *up_, P171 e_808, P114 y_809, P119 *t_810, P137 *r_811) {
  struct f_conversion_812fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_808 = e_808;
F->y_809 = y_809;
F->t_810 = t_810;
F->r_811 = r_811;
F->aty_2212 = NULL;
F->a_2213 = NULL;
F->ag_2214 = NULL;
F->it_2215 = NULL;
F->tail_2216 = NULL;
F->arg_2217 = NULL;
(*F->t_810) = (*(P114)rt_nil_check(F->y_809)).t_;
if (((G_NV((*(P171)rt_nil_check(F->e_808)).flag_) == ((rt_int)9LL)) || (f_list_len_291(F->up, (*(P171)rt_nil_check(F->e_808)).b_) > ((rt_int)1LL)))) {
if ((G_NV((*(P171)rt_nil_check(F->e_808)).flag_) == ((rt_int)9LL))) {
F->ag_2214 = (*(P171)rt_nil_check(F->e_808)).b_;
} else {
F->ag_2214 = f_nn_285(F->up, ((rt_int)12LL), G_NV((*(P171)rt_nil_check(F->e_808)).line_));
F->arg_2217 = (*(P171)rt_nil_check(F->e_808)).b_;
while ((F->arg_2217 != NULL)) {
F->it_2215 = f_nn_285(F->up, ((rt_int)13LL), G_NV((*(P171)rt_nil_check(F->e_808)).line_));
(*(P171)rt_nil_check(F->it_2215)).b_ = F->arg_2217;
if (((*(P171)rt_nil_check(F->arg_2217)).formal_ != NULL)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_808)).line_), rt_g_lit("a named component of an aggregate is given with => (RM79 3.6.2)", 63));
}
if ((F->tail_2216 == NULL)) {
(*(P171)rt_nil_check(F->ag_2214)).a_ = F->it_2215;
} else {
(*(P171)rt_nil_check(F->tail_2216)).next_ = F->it_2215;
}
F->tail_2216 = F->it_2215;
F->arg_2217 = (*(P171)rt_nil_check(F->arg_2217)).next_;
}
L_end_2218: ;
}
if ((G_NV((*(P171)rt_nil_check(F->ag_2214)).kind_) != ((rt_int)12LL))) {
f_gexpr_739(F->up, F->ag_2214, (*F->t_810), &F->aty_2212, &(*F->r_811));
f_check_type_456(F->up, F->aty_2212, (*F->t_810), G_NV((*(P171)rt_nil_check(F->e_808)).line_));
} else {
f_aggregate_885(F->up, F->ag_2214, (*F->t_810), &F->aty_2212, &(*F->r_811));
}
f_constrain_816(F->up, F->y_809, (*F->t_810), &(*F->r_811));
goto ret_;
}
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->e_808)).b_, (*F->t_810), &F->aty_2212, &F->a_2213);
if ((((G_NV((*(P119)rt_nil_check((*F->t_810))).kind_) == ((rt_int)6LL)) && (G_NV((*(P119)rt_nil_check(F->aty_2212)).kind_) == ((rt_int)6LL))) && (!f_same_416(F->up, (*F->t_810), F->aty_2212)))) {
f_array_conversion_823(F->up, F->e_808, (*F->t_810), F->aty_2212, (*(P114)rt_nil_check(F->y_809)).c_, (*(P137)rt_nil_check(F->a_2213)), &(*F->r_811));
goto ret_;
}
if ((f_is_numeric_423(F->up, (*F->t_810)) && f_is_numeric_423(F->up, F->aty_2212))) {
if (((G_NV((*(P119)rt_nil_check((*F->t_810))).kind_) == ((rt_int)1LL)) && (G_NV((*(P119)rt_nil_check(F->aty_2212)).kind_) != ((rt_int)1LL)))) {
(*F->r_811) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_round(", 11), (*(P137)rt_nil_check(F->a_2213))), one_rt_gstr(41)));
} else if (((G_NV((*(P119)rt_nil_check((*F->t_810))).kind_) == ((rt_int)3LL)) && (G_NV((*(P119)rt_nil_check(F->aty_2212)).kind_) == ((rt_int)1LL)))) {
(*F->r_811) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((double)(", 10), (*(P137)rt_nil_check(F->a_2213))), rt_g_lit("))", 2)));
} else if (((G_NV((*(P119)rt_nil_check((*F->t_810))).kind_) == ((rt_int)16LL)) && ((*(P119)rt_nil_check((*F->t_810))).fsmall_ != NULL))) {
if ((G_NV((*(P119)rt_nil_check(F->aty_2212)).kind_) == ((rt_int)1LL))) {
(*F->r_811) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix((double)(", 18), (*(P137)rt_nil_check(F->a_2213))), rt_g_lit("), ", 3)), (*(P137)rt_nil_check((*(P119)rt_nil_check((*F->t_810))).fsmall_))), one_rt_gstr(41)));
} else {
(*F->r_811) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix(", 9), (*(P137)rt_nil_check(F->a_2213))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P119)rt_nil_check((*F->t_810))).fsmall_))), one_rt_gstr(41)));
}
} else {
(*F->r_811) = F->a_2213;
}
} else if (((f_same_416(F->up, F->aty_2212, (*F->t_810)) || f_derived_from_421(F->up, F->aty_2212, (*F->t_810))) || f_derived_from_421(F->up, (*F->t_810), F->aty_2212))) {
(*F->r_811) = F->a_2213;
} else {
f_check_type_456(F->up, F->aty_2212, (*F->t_810), G_NV((*(P171)rt_nil_check(F->e_808)).line_));
(*F->r_811) = F->a_2213;
}
if (((((G_NV((*(P119)rt_nil_check((*F->t_810))).kind_) == ((rt_int)1LL)) || (G_NV((*(P119)rt_nil_check((*F->t_810))).kind_) == ((rt_int)4LL))) || (G_NV((*(P119)rt_nil_check((*F->t_810))).kind_) == ((rt_int)11LL))) && f_bounded_444(F->up, (*(P114)rt_nil_check(F->y_809)).c_))) {
(*F->r_811) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P137)rt_nil_check((*F->r_811)))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_809)).c_)).lo_))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_809)).c_)).hi_))), one_rt_gstr(41)));
} else if ((((G_NV((*(P119)rt_nil_check((*F->t_810))).kind_) == ((rt_int)3LL)) || (G_NV((*(P119)rt_nil_check((*F->t_810))).kind_) == ((rt_int)16LL))) && f_bounded_444(F->up, (*(P114)rt_nil_check(F->y_809)).c_))) {
(*F->r_811) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_frange(", 10), (*(P137)rt_nil_check((*F->r_811)))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_809)).c_)).lo_))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_809)).c_)).hi_))), one_rt_gstr(41)));
} else if (f_short_int_769(F->up, (*F->t_810))) {
(*F->r_811) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_short(", 11), (*(P137)rt_nil_check((*F->r_811)))), one_rt_gstr(41)));
}
ret_:

  return;
}

static void f_constrain_816(struct f_greenc_1fr *up_, P114 y_813, P119 t_814, P137 *r_815) {
  struct f_constrain_816fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_813 = y_813;
F->t_814 = t_814;
F->r_815 = r_815;
F->ct_2219 = NULL;
F->tmp_2220 = NULL;
if ((((*(P114)rt_nil_check(F->y_813)).c_ == NULL) || ((*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_813)).c_)).lo_ == NULL))) {
goto ret_;
}
if (((G_NV((*(P119)rt_nil_check(F->t_814)).kind_) == ((rt_int)6LL)) && (!f_bounded_hi_446(F->up, (*(P119)rt_nil_check(F->t_814)).tcons_)))) {
f_ctype_461(F->up, F->t_814, &F->ct_2219);
f_new_name_214(F->up, rt_g_lit("q", 1), &F->tmp_2220);
(*F->r_815) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P137)rt_nil_check(F->ct_2219))), one_rt_gstr(32)), (*(P137)rt_nil_check(F->tmp_2220))), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check((*F->r_815)))), rt_g_lit("; rt_int l_ = ", 14)), (*(P137)rt_nil_check((*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_813)).c_)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P137)rt_nil_check((*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_813)).c_)).hi_))), rt_g_lit("; if (G_CNT(", 12)), (*(P137)rt_nil_check(F->tmp_2220))), rt_g_lit(") != (h_ >= l_ \? h_ - l_ + 1 : 0)) ", 35)), rt_g_lit("rt_raise_msg(RT_X_SUBTYPE, ", 27)), f_q_229(F->up)), rt_g_lit("array length", 12)), f_q_229(F->up)), rt_g_lit("); ", 3)), (*(P137)rt_nil_check(F->tmp_2220))), rt_g_lit(".lo = l_; ", 10)), (*(P137)rt_nil_check(F->tmp_2220))), rt_g_lit(".hi = h_; ", 10)), (*(P137)rt_nil_check(F->tmp_2220))), rt_g_lit("; })", 4)));
}
ret_:

  return;
}

static void f_array_conversion_823(struct f_greenc_1fr *up_, P171 e_817, P119 t_818, P119 aty_819, P175 c_820, rt_gstr a_821, P137 *r_822) {
  struct f_array_conversion_823fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_817 = e_817;
F->t_818 = t_818;
F->aty_819 = aty_819;
F->c_820 = c_820;
F->a_821 = cp_rt_gstr(a_821);
F->r_822 = r_822;
F->x_2221 = NULL;
F->y_2222 = NULL;
F->ct_2223 = NULL;
F->act_2224 = NULL;
F->et_2225 = NULL;
F->tmp_2226 = NULL;
F->s_2227 = NULL;
F->x_2221 = F->t_818;
F->y_2222 = F->aty_819;
if ((G_NV((*(P119)rt_nil_check(F->t_818)).dims_) != G_NV((*(P119)rt_nil_check(F->aty_819)).dims_))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_817)).line_), rt_g_lit("no conversion between arrays of different dimensions (RM79 4.6)", 63));
}
{ rt_int lo2230 = ((rt_int)1LL), hi2231 = G_NV((*(P119)rt_nil_check(F->t_818)).dims_);
for (rt_int it2232 = lo2230; it2232 <= hi2231; it2232++) {
F->k_2229 = it2232;
if ((!((f_same_416(F->up, (*(P119)rt_nil_check(F->x_2221)).idx_, (*(P119)rt_nil_check(F->y_2222)).idx_) || f_derived_from_421(F->up, (*(P119)rt_nil_check(F->x_2221)).idx_, (*(P119)rt_nil_check(F->y_2222)).idx_)) || f_derived_from_421(F->up, (*(P119)rt_nil_check(F->y_2222)).idx_, (*(P119)rt_nil_check(F->x_2221)).idx_)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_817)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no conversion from ", 19), f_kind_name_452(F->up, F->aty_819)), rt_g_lit(" to ", 4)), f_kind_name_452(F->up, F->t_818)), rt_g_lit(": the index types differ (RM79 4.6)", 35)));
}
F->x_2221 = (*(P119)rt_nil_check(F->x_2221)).elem_;
F->y_2222 = (*(P119)rt_nil_check(F->y_2222)).elem_;
}
}
L_end_2228: ;
if ((!((f_same_416(F->up, F->x_2221, F->y_2222) || f_derived_from_421(F->up, F->x_2221, F->y_2222)) || f_derived_from_421(F->up, F->y_2222, F->x_2221)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_817)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no conversion from ", 19), f_kind_name_452(F->up, F->aty_819)), rt_g_lit(" to ", 4)), f_kind_name_452(F->up, F->t_818)), rt_g_lit(": the component types differ (RM79 4.6)", 39)));
}
f_ctype_461(F->up, F->t_818, &F->ct_2223);
f_ctype_461(F->up, F->aty_819, &F->act_2224);
f_elem_ctype_533(F->up, (*(P119)rt_nil_check(F->t_818)).elem_, &F->et_2225);
f_new_name_214(F->up, rt_g_lit("cv", 2), &F->tmp_2226);
(*F->r_822) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P137)rt_nil_check(F->act_2224))), rt_g_lit(" s_ = ", 6)), F->a_821), rt_g_lit("; ", 2)), (*(P137)rt_nil_check(F->ct_2223))), one_rt_gstr(32)), (*(P137)rt_nil_check(F->tmp_2226))), rt_g_lit("; ", 2)), (*(P137)rt_nil_check(F->tmp_2226))), rt_g_lit(".lo = s_.lo; ", 13)), (*(P137)rt_nil_check(F->tmp_2226))), rt_g_lit(".hi = s_.hi; ", 13)), (*(P137)rt_nil_check(F->tmp_2226))), rt_g_lit(".lo2 = s_.lo2; ", 15)), (*(P137)rt_nil_check(F->tmp_2226))), rt_g_lit(".hi2 = s_.hi2; ", 15)), (*(P137)rt_nil_check(F->tmp_2226))), rt_g_lit(".p = (", 6)), (*(P137)rt_nil_check(F->et_2225))), rt_g_lit(" *)s_.p; ", 9)), (*(P137)rt_nil_check(F->tmp_2226))), rt_g_lit("; })", 4)));
if ((((*(P119)rt_nil_check(F->t_818)).tcons_ != NULL) && ((*(P175)rt_nil_check((*(P119)rt_nil_check(F->t_818)).tcons_)).hi_ != NULL))) {
(*F->r_822) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P137)rt_nil_check(F->ct_2223))), one_rt_gstr(32)), (*(P137)rt_nil_check(F->tmp_2226))), rt_g_lit("x = ", 4)), (*(P137)rt_nil_check((*F->r_822)))), rt_g_lit("; rt_int l_ = ", 14)), (*(P137)rt_nil_check((*(P175)rt_nil_check((*(P119)rt_nil_check(F->t_818)).tcons_)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P137)rt_nil_check((*(P175)rt_nil_check((*(P119)rt_nil_check(F->t_818)).tcons_)).hi_))), rt_g_lit("; if (G_CNT(", 12)), (*(P137)rt_nil_check(F->tmp_2226))), rt_g_lit("x) != (h_ >= l_ \? h_ - l_ + 1 : 0)) ", 36)), rt_g_lit("rt_raise_msg(RT_X_SUBTYPE, ", 27)), f_q_229(F->up)), rt_g_lit("array length", 12)), f_q_229(F->up)), rt_g_lit("); ", 3)), (*(P137)rt_nil_check(F->tmp_2226))), rt_g_lit("x.lo = l_; ", 11)), (*(P137)rt_nil_check(F->tmp_2226))), rt_g_lit("x.hi = h_; ", 11)), (*(P137)rt_nil_check(F->tmp_2226))), rt_g_lit("x; })", 5)));
}
ret_:

  return;
}

static void f_gen_attr_828(struct f_greenc_1fr *up_, P171 e_824, P119 want_825, P119 *t_826, P137 *r_827) {
  struct f_gen_attr_828fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_824 = e_824;
F->want_825 = want_825;
F->t_826 = t_826;
F->r_827 = r_827;
F->a_2233 = cp_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_824)).name_)));
F->y_2234 = NULL;
F->tt_2235 = NULL;
F->aty_2236 = NULL;
F->v_2237 = NULL;
F->d_2238 = NULL;
F->c_2239 = NULL;
F->n_2240 = INT64_MIN;
F->ro_2241 = INT_MIN;
if ((((G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_824)).a_)).kind_) == ((rt_int)8LL)) && (G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_824)).a_)).a_)).kind_) == ((rt_int)5LL))) && f_is_task_name_1027(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_824)).a_)).a_)).name_))))) {
f_member_attr_1093(F->up, F->e_824, &(*F->t_826), &(*F->r_827));
goto ret_;
}
if ((eq_rt_gstr(F->a_2233, rt_g_lit("ADDRESS", 7)) && f_is_object_687(F->up, (*(P171)rt_nil_check(F->e_824)).a_))) {
f_lvalue_695(F->up, (*(P171)rt_nil_check(F->e_824)).a_, &F->v_2237, &F->aty_2236, &F->c_2239, &F->ro_2241);
(*F->t_826) = F->up->ty_int_153;
(*F->r_827) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(intptr_t)&(", 21), (*(P137)rt_nil_check(F->v_2237))), rt_g_lit("))", 2)));
goto ret_;
}
if (((eq_rt_gstr(F->a_2233, rt_g_lit("COUNT", 5)) && (G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_824)).a_)).kind_) == ((rt_int)8LL))) && (G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_824)).a_)).a_)).kind_) == ((rt_int)5LL)))) {
F->y_2234 = f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_824)).a_)).a_)).name_)));
if ((((F->y_2234 != NULL) && (G_NV((*(P114)rt_nil_check(F->y_2234)).kind_) == ((rt_int)10LL))) && ((*(P114)rt_nil_check(F->y_2234)).c_ != NULL))) {
if ((!f_same_task_399(F->up, (*(P114)rt_nil_check(F->y_2234)).members_, F->up->cur_task_186))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_824)).line_), rt_g_lit("E'COUNT is allowed only in the body of the task (RM79 9.9)", 58));
}
f_entry_path_1049(F->up, F->y_2234, rt_g_lit("", 0), &F->v_2237);
f_gexpr_739(F->up, (*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_824)).a_)).b_, NULL, &F->aty_2236, &F->d_2238);
f_entry_family_slot_1064(F->up, F->y_2234, (*(P137)rt_nil_check(F->v_2237)), (*(P137)rt_nil_check(F->d_2238)), &F->v_2237);
(*F->t_826) = F->up->ty_int_153;
(*F->r_827) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_entry_count(&", 16), (*(P137)rt_nil_check(F->v_2237))), one_rt_gstr(41)));
goto ret_;
}
}
if (((G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_824)).a_)).kind_) == ((rt_int)9LL)) && f_is_package_958(F->up, (*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_824)).a_)).a_))) {
F->y_2234 = f_member_of_962(F->up, f_path_of_328(F->up, (*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_824)).a_)).a_), (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_824)).a_)).name_)), G_NV((*(P171)rt_nil_check(F->e_824)).line_));
}
if ((G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_824)).a_)).kind_) == ((rt_int)5LL))) {
F->y_2234 = f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_824)).a_)).name_)));
if (((F->y_2234 == NULL) && (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_824)).a_)).name_)), rt_g_lit("SYSTEM", 6)) || eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_824)).a_)).name_)), rt_g_lit("OPTION", 6))))) {
f_config_attr_850(F->up, F->e_824, &(*F->t_826), &(*F->r_827));
goto ret_;
}
if (((eq_rt_gstr(F->a_2233, rt_g_lit("ADDRESS", 7)) && (F->y_2234 != NULL)) && ((((G_NV((*(P114)rt_nil_check(F->y_2234)).kind_) == ((rt_int)4LL)) || (G_NV((*(P114)rt_nil_check(F->y_2234)).kind_) == ((rt_int)3LL))) || (G_NV((*(P114)rt_nil_check(F->y_2234)).kind_) == ((rt_int)8LL))) || (G_NV((*(P114)rt_nil_check(F->y_2234)).kind_) == ((rt_int)9LL))))) {
(*F->t_826) = F->up->ty_int_153;
(*F->r_827) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(rt_add(((rt_int)65536LL), rt_mul(((rt_int)16LL), f_hash_394(F->up, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2234)).name_)), rt_g_s2g(rt_str_of_int(G_NV((*(P114)rt_nil_check(F->y_2234)).depth_)))))))))), one_rt_gstr(41)));
goto ret_;
}
if ((((F->y_2234 == NULL) && eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_824)).a_)).name_)), rt_g_lit("SYSTEM", 6))) && eq_rt_gstr(F->a_2233, rt_g_lit("CLOCK", 5)))) {
(*F->t_826) = F->up->ty_time_168;
(*F->r_827) = f_mk_211(F->up, rt_g_lit("((double)rt_time())", 19));
goto ret_;
}
if ((((F->y_2234 == NULL) && eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_824)).a_)).name_)), rt_g_lit("SYSTEM", 6))) && (eq_rt_gstr(F->a_2233, rt_g_lit("MAX_PRIORITY", 12)) || eq_rt_gstr(F->a_2233, rt_g_lit("MIN_PRIORITY", 12))))) {
(*F->t_826) = F->up->ty_int_153;
if (eq_rt_gstr(F->a_2233, rt_g_lit("MAX_PRIORITY", 12))) {
(*F->r_827) = f_mk_211(F->up, rt_g_lit("((rt_int)255)", 13));
} else {
(*F->r_827) = f_mk_211(F->up, rt_g_lit("((rt_int)0)", 11));
}
goto ret_;
}
}
if (((F->y_2234 != NULL) && (G_NV((*(P114)rt_nil_check(F->y_2234)).kind_) == ((rt_int)5LL)))) {
F->tt_2235 = (*(P114)rt_nil_check(F->y_2234)).t_;
F->c_2239 = (*(P114)rt_nil_check(F->y_2234)).c_;
if (eq_rt_gstr(F->a_2233, rt_g_lit("SIZE", 4))) {
(*F->t_826) = F->up->ty_int_153;
f_type_bits_832(F->up, F->tt_2235, F->c_2239, &(*F->r_827));
goto ret_;
}
if (((((((((eq_rt_gstr(F->a_2233, rt_g_lit("DIGITS", 6)) || eq_rt_gstr(F->a_2233, rt_g_lit("SMALL", 5))) || eq_rt_gstr(F->a_2233, rt_g_lit("LARGE", 5))) || eq_rt_gstr(F->a_2233, rt_g_lit("EXPONENT_MIN", 12))) || eq_rt_gstr(F->a_2233, rt_g_lit("EXPONENT_MAX", 12))) || eq_rt_gstr(F->a_2233, rt_g_lit("BITS", 4))) || eq_rt_gstr(F->a_2233, rt_g_lit("RADIX", 5))) || eq_rt_gstr(F->a_2233, rt_g_lit("DELTA", 5))) || eq_rt_gstr(F->a_2233, rt_g_lit("ACCESS_SIZE", 11)))) {
f_numeric_attr_842(F->up, F->e_824, F->tt_2235, F->c_2239, &(*F->t_826), &(*F->r_827));
goto ret_;
}
if (eq_rt_gstr(F->a_2233, rt_g_lit("ORD", 3))) {
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->e_824)).b_, F->tt_2235, &F->aty_2236, &F->v_2237);
f_check_type_456(F->up, F->aty_2236, F->tt_2235, G_NV((*(P171)rt_nil_check(F->e_824)).line_));
(*F->t_826) = F->up->ty_int_153;
(*F->r_827) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(", 10), (*(P137)rt_nil_check(F->v_2237))), rt_g_lit(") + 1)", 6)));
goto ret_;
} else if ((eq_rt_gstr(F->a_2233, rt_g_lit("VAL", 3)) || eq_rt_gstr(F->a_2233, rt_g_lit("REP", 3)))) {
f_val_rep_875(F->up, F->e_824, F->tt_2235, F->c_2239, &(*F->t_826), &(*F->r_827));
goto ret_;
} else if ((eq_rt_gstr(F->a_2233, rt_g_lit("SUCC", 4)) || eq_rt_gstr(F->a_2233, rt_g_lit("PRED", 4)))) {
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->e_824)).b_, F->tt_2235, &F->aty_2236, &F->v_2237);
(*F->t_826) = F->tt_2235;
if ((G_NV((*(P119)rt_nil_check(F->tt_2235)).kind_) == ((rt_int)1LL))) {
if (eq_rt_gstr(F->a_2233, rt_g_lit("SUCC", 4))) {
(*F->r_827) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_add(", 7), (*(P137)rt_nil_check(F->v_2237))), rt_g_lit(", 1)", 4)));
} else {
(*F->r_827) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_sub(", 7), (*(P137)rt_nil_check(F->v_2237))), rt_g_lit(", 1)", 4)));
}
} else if (eq_rt_gstr(F->a_2233, rt_g_lit("SUCC", 4))) {
(*F->r_827) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P137)rt_nil_check(F->v_2237))), rt_g_lit(" + 1, ", 6)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_2239)).lo_))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_2239)).hi_))), one_rt_gstr(41)));
} else {
(*F->r_827) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P137)rt_nil_check(F->v_2237))), rt_g_lit(" - 1, ", 6)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_2239)).lo_))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_2239)).hi_))), one_rt_gstr(41)));
}
goto ret_;
} else if (((G_NV((*(P119)rt_nil_check(F->tt_2235)).kind_) == ((rt_int)6LL)) && ((eq_rt_gstr(F->a_2233, rt_g_lit("FIRST", 5)) || eq_rt_gstr(F->a_2233, rt_g_lit("LAST", 4))) || eq_rt_gstr(F->a_2233, rt_g_lit("LENGTH", 6))))) {
f_type_array_attr_866(F->up, F->e_824, F->tt_2235, F->c_2239, &(*F->t_826), &(*F->r_827));
goto ret_;
} else if ((eq_rt_gstr(F->a_2233, rt_g_lit("FIRST", 5)) || eq_rt_gstr(F->a_2233, rt_g_lit("LAST", 4)))) {
(*F->t_826) = F->tt_2235;
if (f_bounded_444(F->up, F->c_2239)) {
if (eq_rt_gstr(F->a_2233, rt_g_lit("FIRST", 5))) {
(*F->r_827) = (*(P175)rt_nil_check(F->c_2239)).lo_;
} else {
(*F->r_827) = (*(P175)rt_nil_check(F->c_2239)).hi_;
}
} else if ((G_NV((*(P119)rt_nil_check(F->tt_2235)).kind_) == ((rt_int)1LL))) {
if (eq_rt_gstr(F->a_2233, rt_g_lit("FIRST", 5))) {
(*F->r_827) = f_mk_211(F->up, rt_g_lit("(-INT64_MAX)", 12));
} else {
(*F->r_827) = f_mk_211(F->up, rt_g_lit("INT64_MAX", 9));
}
} else if (((G_NV((*(P119)rt_nil_check(F->tt_2235)).kind_) == ((rt_int)3LL)) && (f_root_418(F->up, F->tt_2235) == F->up->ty_sfloat_166))) {
if (eq_rt_gstr(F->a_2233, rt_g_lit("FIRST", 5))) {
(*F->r_827) = f_mk_211(F->up, rt_g_lit("(-3.40282347e+38)", 17));
} else {
(*F->r_827) = f_mk_211(F->up, rt_g_lit("3.40282347e+38", 14));
}
} else if ((G_NV((*(P119)rt_nil_check(F->tt_2235)).kind_) == ((rt_int)3LL))) {
if (eq_rt_gstr(F->a_2233, rt_g_lit("FIRST", 5))) {
(*F->r_827) = f_mk_211(F->up, rt_g_lit("(-1.7976931348623157e+308)", 26));
} else {
(*F->r_827) = f_mk_211(F->up, rt_g_lit("1.7976931348623157e+308", 23));
}
} else {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_824)).line_), cat_rt_gstr(rt_g_lit("this type has no ", 17), F->a_2233));
}
goto ret_;
}
f_other_attr_1089(F->up, F->e_824, F->y_2234, &(*F->t_826), &(*F->r_827));
goto ret_;
}
if (((F->y_2234 != NULL) && ((G_NV((*(P114)rt_nil_check(F->y_2234)).kind_) != ((rt_int)1LL)) && (G_NV((*(P114)rt_nil_check(F->y_2234)).kind_) != ((rt_int)2LL))))) {
f_other_attr_1089(F->up, F->e_824, F->y_2234, &(*F->t_826), &(*F->r_827));
goto ret_;
}
if (((eq_rt_gstr(F->a_2233, rt_g_lit("POSITION", 8)) || eq_rt_gstr(F->a_2233, rt_g_lit("FIRST_BIT", 9))) || eq_rt_gstr(F->a_2233, rt_g_lit("LAST_BIT", 8)))) {
f_component_attr_846(F->up, F->e_824, &(*F->t_826), &(*F->r_827));
goto ret_;
}
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->e_824)).a_, NULL, &F->tt_2235, &F->v_2237);
if (eq_rt_gstr(F->a_2233, rt_g_lit("ACCESS_SIZE", 11))) {
if ((G_NV((*(P119)rt_nil_check(F->tt_2235)).kind_) != ((rt_int)8LL))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_824)).line_), rt_g_lit("ACCESS_SIZE is an attribute of access types and objects (RM79 App. A)", 69));
}
(*F->t_826) = F->up->ty_int_153;
(*F->r_827) = f_mk_211(F->up, rt_g_lit("((rt_int)(sizeof(void *) * 8))", 30));
goto ret_;
}
if (eq_rt_gstr(F->a_2233, rt_g_lit("SIZE", 4))) {
(*F->t_826) = F->up->ty_int_153;
f_object_bits_836(F->up, F->tt_2235, (*(P137)rt_nil_check(F->v_2237)), &(*F->r_827));
goto ret_;
}
if ((G_NV((*(P119)rt_nil_check(F->tt_2235)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_575(F->up, F->tt_2235);
f_deref_685(F->up, (*(P137)rt_nil_check(F->v_2237)), F->tt_2235, &F->d_2238);
F->v_2237 = F->d_2238;
F->tt_2235 = (*(P119)rt_nil_check(F->tt_2235)).target_;
}
(*F->t_826) = F->up->ty_int_153;
if (((G_NV((*(P119)rt_nil_check(F->tt_2235)).kind_) == ((rt_int)6LL)) && ((eq_rt_gstr(F->a_2233, rt_g_lit("FIRST", 5)) || eq_rt_gstr(F->a_2233, rt_g_lit("LAST", 4))) || eq_rt_gstr(F->a_2233, rt_g_lit("LENGTH", 6))))) {
f_object_array_attr_860(F->up, F->e_824, F->tt_2235, (*(P137)rt_nil_check(F->v_2237)), &(*F->t_826), &(*F->r_827));
goto ret_;
}
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_824)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), F->a_2233), rt_g_lit(" is not handled here", 20)));
ret_:

  return;
}

static void f_type_bits_832(struct f_greenc_1fr *up_, P119 t_829, P175 c_830, P137 *r_831) {
  struct f_type_bits_832fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_829 = t_829;
F->c_830 = c_830;
F->r_831 = r_831;
F->ct_2242 = NULL;
if ((G_NV((*(P119)rt_nil_check(F->t_829)).kind_) == ((rt_int)6LL))) {
if ((!f_bounded_444(F->up, F->c_830))) {
f_fail_232(F->up, ((rt_int)0LL), rt_g_lit("SIZE of an array type needs its bounds (RM79 App. A)", 52));
}
f_elem_ctype_533(F->up, (*(P119)rt_nil_check(F->t_829)).elem_, &F->ct_2242);
(*F->r_831) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ rt_int l_ = ", 15), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_830)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_830)).hi_))), rt_g_lit("; (h_ >= l_ \? h_ - l_ + 1 : 0) * (rt_int)sizeof(", 48)), (*(P137)rt_nil_check(F->ct_2242))), rt_g_lit(") * 8; })", 9)));
} else if (((G_NV((*(P119)rt_nil_check(F->t_829)).kind_) == ((rt_int)11LL)) || (G_NV((*(P119)rt_nil_check(F->t_829)).kind_) == ((rt_int)2LL)))) {
(*F->r_831) = f_mk_211(F->up, rt_g_lit("((rt_int)8)", 11));
} else if ((G_NV((*(P119)rt_nil_check(F->t_829)).kind_) == ((rt_int)4LL))) {
if ((f_list_len_291(F->up, (*(P119)rt_nil_check(F->t_829)).lits_) <= ((rt_int)256LL))) {
(*F->r_831) = f_mk_211(F->up, rt_g_lit("((rt_int)8)", 11));
} else {
(*F->r_831) = f_mk_211(F->up, rt_g_lit("((rt_int)16)", 12));
}
} else if (((G_NV((*(P119)rt_nil_check(F->t_829)).kind_) == ((rt_int)1LL)) && (f_root_418(F->up, F->t_829) == F->up->ty_short_164))) {
(*F->r_831) = f_mk_211(F->up, rt_g_lit("((rt_int)32)", 12));
} else if (((G_NV((*(P119)rt_nil_check(F->t_829)).kind_) == ((rt_int)3LL)) && (f_root_418(F->up, F->t_829) == F->up->ty_sfloat_166))) {
(*F->r_831) = f_mk_211(F->up, rt_g_lit("((rt_int)32)", 12));
} else {
f_ctype_461(F->up, F->t_829, &F->ct_2242);
(*F->r_831) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(sizeof(", 17), (*(P137)rt_nil_check(F->ct_2242))), rt_g_lit(") * 8))", 7)));
}
ret_:

  return;
}

static void f_object_bits_836(struct f_greenc_1fr *up_, P119 t_833, rt_gstr v_834, P137 *r_835) {
  struct f_object_bits_836fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_833 = t_833;
F->v_834 = cp_rt_gstr(v_834);
F->r_835 = r_835;
F->ct_2243 = NULL;
F->et_2244 = NULL;
if ((G_NV((*(P119)rt_nil_check(F->t_833)).kind_) == ((rt_int)6LL))) {
f_ctype_461(F->up, F->t_833, &F->ct_2243);
f_elem_ctype_533(F->up, (*(P119)rt_nil_check(F->t_833)).elem_, &F->et_2244);
(*F->r_835) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P137)rt_nil_check(F->ct_2243))), rt_g_lit(" sz_ = ", 7)), F->v_834), rt_g_lit("; G_CNT(sz_) * (rt_int)sizeof(", 30)), (*(P137)rt_nil_check(F->et_2244))), rt_g_lit(") * 8; })", 9)));
} else {
f_type_bits_832(F->up, F->t_833, NULL, &(*F->r_835));
(*F->r_835) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ (void)(", 10), F->v_834), rt_g_lit("); ", 3)), (*(P137)rt_nil_check((*F->r_835)))), rt_g_lit("; })", 4)));
}
ret_:

  return;
}

static void f_numeric_attr_842(struct f_greenc_1fr *up_, P171 e_837, P119 tt_838, P175 c_839, P119 *t_840, P137 *r_841) {
  struct f_numeric_attr_842fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_837 = e_837;
F->tt_838 = tt_838;
F->c_839 = c_839;
F->t_840 = t_840;
F->r_841 = r_841;
F->a_2245 = cp_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_837)).name_)));
F->short_2246 = INT_MIN;
F->short_2246 = (f_root_418(F->up, F->tt_838) == F->up->ty_sfloat_166);
(*F->t_840) = F->up->ty_int_153;
if (eq_rt_gstr(F->a_2245, rt_g_lit("ACCESS_SIZE", 11))) {
if ((G_NV((*(P119)rt_nil_check(F->tt_838)).kind_) != ((rt_int)8LL))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_837)).line_), rt_g_lit("ACCESS_SIZE is an attribute of access types (RM79 App. A)", 57));
}
(*F->r_841) = f_mk_211(F->up, rt_g_lit("((rt_int)(sizeof(void *) * 8))", 30));
} else if (eq_rt_gstr(F->a_2245, rt_g_lit("RADIX", 5))) {
if ((!f_is_numeric_423(F->up, F->tt_838))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_837)).line_), rt_g_lit("RADIX is an attribute of numeric types (RM79 App. A)", 52));
}
(*F->r_841) = f_mk_211(F->up, rt_g_lit("((rt_int)2)", 11));
} else if ((G_NV((*(P119)rt_nil_check(F->tt_838)).kind_) == ((rt_int)3LL))) {
if (eq_rt_gstr(F->a_2245, rt_g_lit("DIGITS", 6))) {
if (((F->c_839 != NULL) && ((*(P175)rt_nil_check(F->c_839)).acc_ != NULL))) {
(*F->r_841) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(", 10), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_839)).acc_))), rt_g_lit("))", 2)));
} else {
(*F->r_841) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV((*(P119)rt_nil_check(F->tt_838)).ndigits_)))), one_rt_gstr(41)));
}
} else if (eq_rt_gstr(F->a_2245, rt_g_lit("BITS", 4))) {
if (G_NV(F->short_2246)) {
(*F->r_841) = f_mk_211(F->up, rt_g_lit("((rt_int)24)", 12));
} else {
(*F->r_841) = f_mk_211(F->up, rt_g_lit("((rt_int)53)", 12));
}
} else if (eq_rt_gstr(F->a_2245, rt_g_lit("EXPONENT_MIN", 12))) {
if (G_NV(F->short_2246)) {
(*F->r_841) = f_mk_211(F->up, rt_g_lit("((rt_int)-125)", 14));
} else {
(*F->r_841) = f_mk_211(F->up, rt_g_lit("((rt_int)-1021)", 15));
}
} else if (eq_rt_gstr(F->a_2245, rt_g_lit("EXPONENT_MAX", 12))) {
if (G_NV(F->short_2246)) {
(*F->r_841) = f_mk_211(F->up, rt_g_lit("((rt_int)128)", 13));
} else {
(*F->r_841) = f_mk_211(F->up, rt_g_lit("((rt_int)1024)", 14));
}
} else if (eq_rt_gstr(F->a_2245, rt_g_lit("SMALL", 5))) {
(*F->t_840) = F->tt_838;
if (G_NV(F->short_2246)) {
(*F->r_841) = f_mk_211(F->up, rt_g_lit("1.17549435e-38", 14));
} else {
(*F->r_841) = f_mk_211(F->up, rt_g_lit("2.2250738585072014e-308", 23));
}
} else if (eq_rt_gstr(F->a_2245, rt_g_lit("LARGE", 5))) {
(*F->t_840) = F->tt_838;
if (G_NV(F->short_2246)) {
(*F->r_841) = f_mk_211(F->up, rt_g_lit("3.40282347e+38", 14));
} else {
(*F->r_841) = f_mk_211(F->up, rt_g_lit("1.7976931348623157e+308", 23));
}
} else {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_837)).line_), rt_g_lit("DELTA is an attribute of fixed point types (RM79 App. A)", 56));
}
} else if (((G_NV((*(P119)rt_nil_check(F->tt_838)).kind_) == ((rt_int)16LL)) && ((*(P119)rt_nil_check(F->tt_838)).fsmall_ != NULL))) {
if (eq_rt_gstr(F->a_2245, rt_g_lit("DELTA", 5))) {
(*F->t_840) = F->tt_838;
if (((F->c_839 != NULL) && ((*(P175)rt_nil_check(F->c_839)).acc_ != NULL))) {
(*F->r_841) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_839)).acc_))), one_rt_gstr(41)));
} else {
(*F->r_841) = (*(P119)rt_nil_check(F->tt_838)).fdelta_;
}
} else if (eq_rt_gstr(F->a_2245, rt_g_lit("SMALL", 5))) {
(*F->t_840) = F->tt_838;
(*F->r_841) = (*(P119)rt_nil_check(F->tt_838)).fsmall_;
} else if (eq_rt_gstr(F->a_2245, rt_g_lit("LARGE", 5))) {
(*F->t_840) = F->tt_838;
(*F->r_841) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix_large(", 15), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->tt_838)).fsmall_))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_839)).lo_))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_839)).hi_))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_2245, rt_g_lit("BITS", 4))) {
(*F->r_841) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix_bits(", 14), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->tt_838)).fsmall_))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_839)).lo_))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_839)).hi_))), one_rt_gstr(41)));
} else {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_837)).line_), cat_rt_gstr(F->a_2245, rt_g_lit(" is not an attribute of fixed point types (RM79 App. A)", 55)));
}
} else {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_837)).line_), cat_rt_gstr(F->a_2245, rt_g_lit(" is an attribute of real types (RM79 App. A)", 44)));
}
ret_:

  return;
}

static void f_component_attr_846(struct f_greenc_1fr *up_, P171 e_843, P119 *t_844, P137 *r_845) {
  struct f_component_attr_846fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_843 = e_843;
F->t_844 = t_844;
F->r_845 = r_845;
F->bt_2247 = NULL;
F->v_2248 = NULL;
F->ct_2249 = NULL;
F->f_2250 = NULL;
if ((G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_843)).a_)).kind_) != ((rt_int)9LL))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_843)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_843)).name_)), rt_g_lit(" is an attribute of a record component, X.C'", 44)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_843)).name_))), rt_g_lit(" (RM79 13.7)", 12)));
}
f_gexpr_739(F->up, (*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_843)).a_)).a_, NULL, &F->bt_2247, &F->v_2248);
if ((G_NV((*(P119)rt_nil_check(F->bt_2247)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_575(F->up, F->bt_2247);
F->bt_2247 = (*(P119)rt_nil_check(F->bt_2247)).target_;
}
if ((G_NV((*(P119)rt_nil_check(F->bt_2247)).kind_) != ((rt_int)7LL))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_843)).line_), cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_843)).name_)), rt_g_lit(" is an attribute of a record component (RM79 13.7)", 50)));
}
F->f_2250 = (*(P119)rt_nil_check(F->bt_2247)).fields_;
while (((F->f_2250 != NULL) && (!eq_rt_gstr((*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_2250)).name_)), (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_843)).a_)).name_)))))) {
F->f_2250 = (*(P1710)rt_nil_check(F->f_2250)).next_;
}
L_end_2251: ;
if ((F->f_2250 == NULL)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_843)).line_), cat_rt_gstr(cat_rt_gstr(f_kind_name_452(F->up, F->bt_2247), rt_g_lit(" has no component ", 18)), (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_843)).a_)).name_))));
}
f_ctype_461(F->up, F->bt_2247, &F->ct_2249);
(*F->t_844) = F->up->ty_int_153;
f_component_place_528(F->up, F->bt_2247, F->f_2250, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_843)).name_)), (*(P137)rt_nil_check(F->ct_2249)), &(*F->r_845));
ret_:

  return;
}

static void f_config_attr_850(struct f_greenc_1fr *up_, P171 e_847, P119 *t_848, P137 *r_849) {
  struct f_config_attr_850fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_847 = e_847;
F->t_848 = t_848;
F->r_849 = r_849;
F->a_2252 = cp_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_847)).name_)));
F->p_2253 = cp_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_847)).a_)).name_)));
F->nm_2254 = NULL;
F->nm_2254 = F->up->conf_system_206;
(*F->t_848) = F->up->ty_int_153;
if (eq_rt_gstr(F->p_2253, rt_g_lit("OPTION", 6))) {
(*F->t_848) = F->up->ty_bool_154;
if (eq_rt_gstr(F->a_2252, rt_g_lit("TIME", 4))) {
if (((F->up->conf_optimize_209 != NULL) && eq_rt_gstr((*(P137)rt_nil_check(F->up->conf_optimize_209)), rt_g_lit("TIME", 4)))) {
(*F->r_849) = f_mk_211(F->up, rt_g_lit("1", 1));
} else {
(*F->r_849) = f_mk_211(F->up, rt_g_lit("0", 1));
}
} else if (eq_rt_gstr(F->a_2252, rt_g_lit("SPACE", 5))) {
if (((F->up->conf_optimize_209 != NULL) && eq_rt_gstr((*(P137)rt_nil_check(F->up->conf_optimize_209)), rt_g_lit("SPACE", 5)))) {
(*F->r_849) = f_mk_211(F->up, rt_g_lit("1", 1));
} else {
(*F->r_849) = f_mk_211(F->up, rt_g_lit("0", 1));
}
} else {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_847)).line_), rt_g_lit("OPTION has the attributes TIME and SPACE (RM79 13.7)", 52));
}
} else if (eq_rt_gstr(F->a_2252, rt_g_lit("CLOCK", 5))) {
(*F->t_848) = F->up->ty_time_168;
(*F->r_849) = f_mk_211(F->up, rt_g_lit("((double)rt_time())", 19));
} else if (eq_rt_gstr(F->a_2252, rt_g_lit("MAX_PRIORITY", 12))) {
(*F->r_849) = f_mk_211(F->up, rt_g_lit("((rt_int)255)", 13));
} else if (eq_rt_gstr(F->a_2252, rt_g_lit("MIN_PRIORITY", 12))) {
(*F->r_849) = f_mk_211(F->up, rt_g_lit("((rt_int)0)", 11));
} else if (eq_rt_gstr(F->a_2252, rt_g_lit("NAME", 4))) {
if ((F->nm_2254 == NULL)) {
F->nm_2254 = f_mk_211(F->up, rt_g_lit("PALEO", 5));
}
(*F->t_848) = F->up->ty_string_157;
(*F->r_849) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_lit(", 9), f_c_string_724(F->up, (*(P137)rt_nil_check(F->nm_2254)))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(({ rt_gstr at2256 = (*(P137)rt_nil_check(F->nm_2254)); at2256.hi >= at2256.lo ? at2256.hi - at2256.lo + 1 : (rt_int)0; })))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_2252, rt_g_lit("STORAGE_UNIT", 12))) {
(*F->r_849) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->up->conf_storage_unit_207)))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_2252, rt_g_lit("MEMORY_SIZE", 11))) {
(*F->r_849) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->up->conf_memory_size_208)))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_2252, rt_g_lit("MAX_INT", 7))) {
(*F->r_849) = f_mk_211(F->up, rt_g_lit("INT64_MAX", 9));
} else if (eq_rt_gstr(F->a_2252, rt_g_lit("MIN_INT", 7))) {
(*F->r_849) = f_mk_211(F->up, rt_g_lit("(-INT64_MAX)", 12));
} else {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_847)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("SYSTEM has no attribute ", 24), F->a_2252), rt_g_lit(" (RM79 13.7)", 12)));
}
ret_:

  return;
}

static void f_attr_dim_854(struct f_greenc_1fr *up_, P171 e_851, P119 arrt_852, rt_int *n_853) {
  struct f_attr_dim_854fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_851 = e_851;
F->arrt_852 = arrt_852;
F->n_853 = n_853;
F->ok_2257 = INT_MIN;
(*F->n_853) = ((rt_int)1LL);
if (((*(P171)rt_nil_check(F->e_851)).b_ != NULL)) {
f_manifest_473(F->up, (*(P171)rt_nil_check(F->e_851)).b_, &(*F->n_853), &F->ok_2257);
if ((!G_NV(F->ok_2257))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_851)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the index number of ", 20), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_851)).name_))), rt_g_lit("(N) is static (RM79 App. A)", 27)));
}
}
if (((G_NV((*F->n_853)) < ((rt_int)1LL)) || (G_NV((*F->n_853)) > G_NV((*(P119)rt_nil_check(F->arrt_852)).dims_)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_851)).line_), cat_rt_gstr(cat_rt_gstr(f_kind_name_452(F->up, F->arrt_852), rt_g_lit(" has no index ", 14)), rt_g_s2g(rt_str_of_int(G_NV((*F->n_853))))));
}
ret_:

  return;
}

static void f_object_array_attr_860(struct f_greenc_1fr *up_, P171 e_855, P119 arrt_856, rt_gstr v_857, P119 *t_858, P137 *r_859) {
  struct f_object_array_attr_860fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_855 = e_855;
F->arrt_856 = arrt_856;
F->v_857 = cp_rt_gstr(v_857);
F->t_858 = t_858;
F->r_859 = r_859;
F->n_2258 = INT64_MIN;
F->it_2259 = NULL;
F->it_2259 = F->arrt_856;
F->ct_2260 = NULL;
F->tmp_2261 = NULL;
F->p_2262 = NULL;
F->lo_2263 = NULL;
F->hi_2264 = NULL;
f_attr_dim_854(F->up, F->e_855, F->arrt_856, &F->n_2258);
f_ctype_461(F->up, F->arrt_856, &F->ct_2260);
f_new_name_214(F->up, rt_g_lit("at", 2), &F->tmp_2261);
F->p_2262 = F->tmp_2261;
{ rt_int lo2267 = ((rt_int)2LL), hi2268 = G_NV(F->n_2258);
for (rt_int it2269 = lo2267; it2269 <= hi2268; it2269++) {
F->k_2266 = it2269;
F->it_2259 = (*(P119)rt_nil_check(F->it_2259)).elem_;
}
}
L_end_2265: ;
if ((G_NV(F->n_2258) == ((rt_int)1LL))) {
F->lo_2263 = f_mk_211(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->p_2262)), rt_g_lit(".lo", 3)));
F->hi_2264 = f_mk_211(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->p_2262)), rt_g_lit(".hi", 3)));
} else {
{ rt_int lo2272 = ((rt_int)3LL), hi2273 = G_NV(F->n_2258);
for (rt_int it2274 = lo2272; it2274 <= hi2273; it2274++) {
F->k_2271 = it2274;
F->p_2262 = f_mk_211(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->p_2262)), rt_g_lit(".p[0]", 5)));
}
}
L_end_2270: ;
F->lo_2263 = f_mk_211(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->p_2262)), rt_g_lit(".lo2", 4)));
F->hi_2264 = f_mk_211(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->p_2262)), rt_g_lit(".hi2", 4)));
}
(*F->t_858) = (*(P119)rt_nil_check(F->it_2259)).idx_;
if (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_855)).name_)), rt_g_lit("FIRST", 5))) {
(*F->r_859) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P137)rt_nil_check(F->ct_2260))), one_rt_gstr(32)), (*(P137)rt_nil_check(F->tmp_2261))), rt_g_lit(" = ", 3)), F->v_857), rt_g_lit("; ", 2)), (*(P137)rt_nil_check(F->lo_2263))), rt_g_lit("; })", 4)));
} else if (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_855)).name_)), rt_g_lit("LAST", 4))) {
(*F->r_859) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P137)rt_nil_check(F->ct_2260))), one_rt_gstr(32)), (*(P137)rt_nil_check(F->tmp_2261))), rt_g_lit(" = ", 3)), F->v_857), rt_g_lit("; ", 2)), (*(P137)rt_nil_check(F->hi_2264))), rt_g_lit("; })", 4)));
} else {
(*F->t_858) = F->up->ty_int_153;
(*F->r_859) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P137)rt_nil_check(F->ct_2260))), one_rt_gstr(32)), (*(P137)rt_nil_check(F->tmp_2261))), rt_g_lit(" = ", 3)), F->v_857), rt_g_lit("; ", 2)), (*(P137)rt_nil_check(F->hi_2264))), rt_g_lit(" >= ", 4)), (*(P137)rt_nil_check(F->lo_2263))), rt_g_lit(" \? ", 3)), (*(P137)rt_nil_check(F->hi_2264))), rt_g_lit(" - ", 3)), (*(P137)rt_nil_check(F->lo_2263))), rt_g_lit(" + 1 : (rt_int)0; })", 20)));
}
ret_:

  return;
}

static void f_type_array_attr_866(struct f_greenc_1fr *up_, P171 e_861, P119 arrt_862, P175 c_863, P119 *t_864, P137 *r_865) {
  struct f_type_array_attr_866fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_861 = e_861;
F->arrt_862 = arrt_862;
F->c_863 = c_863;
F->t_864 = t_864;
F->r_865 = r_865;
F->n_2275 = INT64_MIN;
F->it_2276 = NULL;
F->it_2276 = F->arrt_862;
F->cc_2277 = NULL;
F->cc_2277 = F->c_863;
f_attr_dim_854(F->up, F->e_861, F->arrt_862, &F->n_2275);
{ rt_int lo2280 = ((rt_int)2LL), hi2281 = G_NV(F->n_2275);
for (rt_int it2282 = lo2280; it2282 <= hi2281; it2282++) {
F->k_2279 = it2282;
F->it_2276 = (*(P119)rt_nil_check(F->it_2276)).elem_;
if ((F->cc_2277 != NULL)) {
F->cc_2277 = (*(P175)rt_nil_check(F->cc_2277)).inner_;
}
}
}
L_end_2278: ;
if (((F->cc_2277 == NULL) || ((*(P175)rt_nil_check(F->cc_2277)).lo_ == NULL))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_861)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the bounds of ", 14), f_kind_name_452(F->up, F->arrt_862)), rt_g_lit(" are not known here: ", 21)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_861)).name_))), rt_g_lit(" applies to an array type with bounds (RM79 3.6)", 48)));
}
(*F->t_864) = (*(P119)rt_nil_check(F->it_2276)).idx_;
if (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_861)).name_)), rt_g_lit("FIRST", 5))) {
(*F->r_865) = (*(P175)rt_nil_check(F->cc_2277)).lo_;
} else if (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_861)).name_)), rt_g_lit("LAST", 4))) {
(*F->r_865) = (*(P175)rt_nil_check(F->cc_2277)).hi_;
} else {
(*F->t_864) = F->up->ty_int_153;
(*F->r_865) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ rt_int l_ = ", 15), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->cc_2277)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->cc_2277)).hi_))), rt_g_lit("; h_ >= l_ \? h_ - l_ + 1 : (rt_int)0; })", 40)));
}
ret_:

  return;
}

static void f_lit_table_869(struct f_greenc_1fr *up_, P119 t_867, P137 *r_868) {
  struct f_lit_table_869fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_867 = t_867;
F->r_868 = r_868;
F->l_2283 = NULL;
F->l_2283 = (*(P119)rt_nil_check(F->t_867)).lits_;
F->s_2284 = NULL;
F->s_2284 = f_mk_211(F->up, rt_g_lit("", 0));
if (((*(P119)rt_nil_check(F->t_867)).littab_ == NULL)) {
f_new_name_214(F->up, rt_g_lit("lits", 4), &(*(P119)rt_nil_check(F->t_867)).littab_);
while ((F->l_2283 != NULL)) {
if ((({ rt_gstr at2286 = (*(P137)rt_nil_check(F->s_2284)); at2286.hi >= at2286.lo ? at2286.hi - at2286.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->s_2284 = f_mk_211(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->s_2284)), rt_g_lit(", ", 2)));
}
if ((G_NV((*(P171)rt_nil_check(F->l_2283)).kind_) == ((rt_int)3LL))) {
F->s_2284 = f_mk_211(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->s_2284)), f_c_string_724(F->up, cat_rt_gstr(cat_rt_gstr(f_q_229(F->up), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->l_2283)).name_))), f_q_229(F->up)))));
} else {
F->s_2284 = f_mk_211(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->s_2284)), f_c_string_724(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->l_2283)).name_)))));
}
F->l_2283 = (*(P171)rt_nil_check(F->l_2283)).next_;
}
L_end_2285: ;
f_put_to_236(F->up, F->up->out_types_125, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static const char *const ", 25), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_867)).littab_))), rt_g_lit("[] = {", 6)), (*(P137)rt_nil_check(F->s_2284))), rt_g_lit("};", 2)));
}
(*F->r_868) = (*(P119)rt_nil_check(F->t_867)).littab_;
ret_:

  return;
}

static void f_val_rep_875(struct f_greenc_1fr *up_, P171 e_870, P119 tt_871, P175 c_872, P119 *t_873, P137 *r_874) {
  struct f_val_rep_875fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_870 = e_870;
F->tt_871 = tt_871;
F->c_872 = c_872;
F->t_873 = t_873;
F->r_874 = r_874;
F->aty_2287 = NULL;
F->v_2288 = NULL;
F->lt_2289 = NULL;
F->n_2290 = INT64_MIN;
if (((*(P171)rt_nil_check(F->e_870)).b_ == NULL)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_870)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_870)).name_))), rt_g_lit(" takes an argument", 18)));
}
if (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_870)).name_)), rt_g_lit("REP", 3))) {
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->e_870)).b_, F->tt_871, &F->aty_2287, &F->v_2288);
f_check_type_456(F->up, F->aty_2287, F->tt_871, G_NV((*(P171)rt_nil_check(F->e_870)).line_));
(*F->t_873) = F->up->ty_string_157;
if ((G_NV((*(P119)rt_nil_check(F->tt_871)).kind_) == ((rt_int)1LL))) {
(*F->r_874) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_str_of_int(", 14), (*(P137)rt_nil_check(F->v_2288))), one_rt_gstr(41)));
} else if ((G_NV((*(P119)rt_nil_check(F->tt_871)).kind_) == ((rt_int)3LL))) {
(*F->r_874) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_image_float(", 17), (*(P137)rt_nil_check(F->v_2288))), one_rt_gstr(41)));
} else if ((G_NV((*(P119)rt_nil_check(F->tt_871)).kind_) == ((rt_int)2LL))) {
(*F->r_874) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_bool_rep(", 14), (*(P137)rt_nil_check(F->v_2288))), one_rt_gstr(41)));
} else if ((G_NV((*(P119)rt_nil_check(F->tt_871)).kind_) == ((rt_int)11LL))) {
(*F->r_874) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_char_rep(", 14), (*(P137)rt_nil_check(F->v_2288))), one_rt_gstr(41)));
} else if ((G_NV((*(P119)rt_nil_check(F->tt_871)).kind_) == ((rt_int)4LL))) {
f_lit_table_869(F->up, F->tt_871, &F->lt_2289);
(*F->r_874) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_enum_rep(", 14), (*(P137)rt_nil_check(F->v_2288))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->lt_2289))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(f_list_len_291(F->up, (*(P119)rt_nil_check(F->tt_871)).lits_)))), one_rt_gstr(41)));
} else {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_870)).line_), rt_g_lit("REP is an attribute of scalar types", 35));
}
(*F->r_874) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_s2g(", 9), (*(P137)rt_nil_check((*F->r_874)))), one_rt_gstr(41)));
goto ret_;
}
(*F->t_873) = F->tt_871;
if ((G_NV((*(P119)rt_nil_check(F->tt_871)).kind_) == ((rt_int)1LL))) {
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->e_870)).b_, F->up->ty_string_157, &F->aty_2287, &F->v_2288);
f_check_type_456(F->up, F->aty_2287, F->up->ty_string_157, G_NV((*(P171)rt_nil_check(F->e_870)).line_));
(*F->r_874) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_int_of_str(rt_g_g2s(", 23), (*(P137)rt_nil_check(F->v_2288))), rt_g_lit("))", 2)));
if (f_bounded_444(F->up, F->c_872)) {
(*F->r_874) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P137)rt_nil_check((*F->r_874)))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_872)).lo_))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_872)).hi_))), one_rt_gstr(41)));
}
} else if ((G_NV((*(P119)rt_nil_check(F->tt_871)).kind_) == ((rt_int)3LL))) {
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->e_870)).b_, F->up->ty_string_157, &F->aty_2287, &F->v_2288);
f_check_type_456(F->up, F->aty_2287, F->up->ty_string_157, G_NV((*(P171)rt_nil_check(F->e_870)).line_));
(*F->r_874) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_float_val(rt_g_g2s(", 24), (*(P137)rt_nil_check(F->v_2288))), rt_g_lit("))", 2)));
} else if ((((G_NV((*(P119)rt_nil_check(F->tt_871)).kind_) == ((rt_int)2LL)) || (G_NV((*(P119)rt_nil_check(F->tt_871)).kind_) == ((rt_int)11LL))) || (G_NV((*(P119)rt_nil_check(F->tt_871)).kind_) == ((rt_int)4LL)))) {
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->e_870)).b_, NULL, &F->aty_2287, &F->v_2288);
if (f_is_string_538(F->up, F->aty_2287)) {
F->v_2288 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_g2s(", 9), (*(P137)rt_nil_check(F->v_2288))), one_rt_gstr(41)));
if ((G_NV((*(P119)rt_nil_check(F->tt_871)).kind_) == ((rt_int)2LL))) {
F->v_2288 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_bool_val(", 14), (*(P137)rt_nil_check(F->v_2288))), one_rt_gstr(41)));
} else if ((G_NV((*(P119)rt_nil_check(F->tt_871)).kind_) == ((rt_int)11LL))) {
F->v_2288 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_char_val(", 14), (*(P137)rt_nil_check(F->v_2288))), one_rt_gstr(41)));
} else {
f_lit_table_869(F->up, F->tt_871, &F->lt_2289);
F->v_2288 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_enum_val(", 14), (*(P137)rt_nil_check(F->v_2288))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->lt_2289))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(f_list_len_291(F->up, (*(P119)rt_nil_check(F->tt_871)).lits_)))), one_rt_gstr(41)));
}
} else {
f_check_type_456(F->up, F->aty_2287, F->up->ty_int_153, G_NV((*(P171)rt_nil_check(F->e_870)).line_));
F->v_2288 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check(F->v_2288))), rt_g_lit(" - 1)", 5)));
}
(*F->r_874) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P137)rt_nil_check(F->v_2288))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_872)).lo_))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_872)).hi_))), one_rt_gstr(41)));
} else {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_870)).line_), rt_g_lit("VAL is an attribute of scalar types", 35));
}
ret_:

  return;
}

static void f_allocator_880(struct f_greenc_1fr *up_, P171 e_876, P119 want_877, P119 *t_878, P137 *r_879) {
  struct f_allocator_880fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_876 = e_876;
F->want_877 = want_877;
F->t_878 = t_878;
F->r_879 = r_879;
F->y_2291 = NULL;
F->y_2291 = f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_876)).name_)));
F->target_2292 = NULL;
F->vt_2293 = NULL;
F->ct_2294 = NULL;
F->pt_2295 = NULL;
F->cell_2296 = NULL;
F->v_2297 = NULL;
F->x_2298 = NULL;
if (((F->want_877 == NULL) || (G_NV((*(P119)rt_nil_check(F->want_877)).kind_) != ((rt_int)8LL)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_876)).line_), rt_g_lit("the access type of this allocator is not known here", 51));
}
if (((F->y_2291 == NULL) || (G_NV((*(P114)rt_nil_check(F->y_2291)).kind_) != ((rt_int)5LL)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_876)).line_), cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_876)).name_)), rt_g_lit(" is not a type", 14)));
}
f_finish_ptr_575(F->up, F->want_877);
F->target_2292 = (*(P119)rt_nil_check(F->want_877)).target_;
if ((!f_same_416(F->up, (*(P114)rt_nil_check(F->y_2291)).t_, F->want_877))) {
f_check_type_456(F->up, (*(P114)rt_nil_check(F->y_2291)).t_, F->target_2292, G_NV((*(P171)rt_nil_check(F->e_876)).line_));
}
f_ctype_461(F->up, F->target_2292, &F->ct_2294);
f_ctype_461(F->up, F->want_877, &F->pt_2295);
f_new_name_214(F->up, rt_g_lit("cell", 4), &F->cell_2296);
if (((*(P171)rt_nil_check(F->e_876)).a_ == NULL)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_876)).line_), rt_g_lit("an allocator gives the initial value: new T(...) (RM79 4.7)", 59));
}
if ((F->up->pure_sym_200 != NULL)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_876)).line_), rt_g_lit("an allocator cannot appear in a function body (RM79 6.5)", 56));
}
if ((G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_876)).a_)).kind_) == ((rt_int)12LL))) {
f_aggregate_885(F->up, (*(P171)rt_nil_check(F->e_876)).a_, F->target_2292, &F->vt_2293, &F->v_2297);
} else {
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->e_876)).a_, F->target_2292, &F->vt_2293, &F->v_2297);
}
f_check_type_456(F->up, F->vt_2293, F->target_2292, G_NV((*(P171)rt_nil_check(F->e_876)).line_));
f_copy_code_591(F->up, F->target_2292, (*(P137)rt_nil_check(F->v_2297)), &F->x_2298);
(*F->t_878) = F->want_877;
(*F->r_879) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P137)rt_nil_check(F->ct_2294))), rt_g_lit(" *", 2)), (*(P137)rt_nil_check(F->cell_2296))), rt_g_lit(" = rt_alloc(sizeof(", 19)), (*(P137)rt_nil_check(F->ct_2294))), rt_g_lit(")); *", 5)), (*(P137)rt_nil_check(F->cell_2296))), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->x_2298))), rt_g_lit("; (", 3)), (*(P137)rt_nil_check(F->pt_2295))), one_rt_gstr(41)), (*(P137)rt_nil_check(F->cell_2296))), rt_g_lit("; })", 4)));
ret_:

  return;
}

static void f_aggregate_885(struct f_greenc_1fr *up_, P171 e_881, P119 want_882, P119 *t_883, P137 *r_884) {
  struct f_aggregate_885fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_881 = e_881;
F->want_882 = want_882;
F->t_883 = t_883;
F->r_884 = r_884;
F->b_2299 = NULL;
F->b_2299 = F->up->agg_bounds_178;
F->up->agg_bounds_178 = NULL;
if ((F->want_882 == NULL)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_881)).line_), rt_g_lit("the type of this aggregate is not known here: qualify it, T(...) (RM79 4.6)", 75));
}
(*F->t_883) = F->want_882;
if ((G_NV((*(P119)rt_nil_check(F->want_882)).kind_) == ((rt_int)7LL))) {
f_record_aggregate_907(F->up, F->e_881, F->want_882, &(*F->r_884));
} else if ((G_NV((*(P119)rt_nil_check(F->want_882)).kind_) == ((rt_int)6LL))) {
f_array_aggregate_925(F->up, F->e_881, F->want_882, F->b_2299, &(*F->r_884));
} else {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_881)).line_), cat_rt_gstr(rt_g_lit("an aggregate builds a record or an array, not ", 46), f_kind_name_452(F->up, F->want_882)));
}
ret_:

  return;
}

static void f_captured_888(struct f_greenc_1fr *up_, P123 b_886, P137 *r_887) {
  struct f_captured_888fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_886 = b_886;
F->r_887 = r_887;
F->l_2300 = NULL;
F->l_2300 = (*(P123)rt_nil_check(F->b_886)).head_;
(*F->r_887) = f_mk_211(F->up, rt_g_lit("", 0));
while ((F->l_2300 != NULL)) {
(*F->r_887) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check((*F->r_887))), one_rt_gstr(32)), (*(P137)rt_nil_check((*(P148)rt_nil_check(F->l_2300)).s_))));
F->l_2300 = (*(P148)rt_nil_check(F->l_2300)).next_;
}
L_end_2301: ;
ret_:

  return;
}

static P1710 f_field_at_891(struct f_greenc_1fr *up_, P119 rt_889, rt_int k_890) {
  struct f_field_at_891fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->rt_889 = rt_889;
F->k_890 = k_890;
F->f_2302 = NULL;
F->f_2302 = (*(P119)rt_nil_check(F->rt_889)).fields_;
{ rt_int lo2305 = ((rt_int)2LL), hi2306 = F->k_890;
for (rt_int it2307 = lo2305; it2307 <= hi2306; it2307++) {
F->i_2304 = it2307;
F->f_2302 = (*(P1710)rt_nil_check(F->f_2302)).next_;
}
}
L_end_2303: ;
F->result_ = F->f_2302;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_names_field_894(struct f_greenc_1fr *up_, P171 x_892, P1710 f_893) {
  struct f_names_field_894fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_892 = x_892;
F->f_893 = f_893;
if ((G_NV((*(P171)rt_nil_check(F->x_892)).kind_) != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->x_892)).name_)), (*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_893)).name_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P171 f_item_for_899(struct f_greenc_1fr *up_, P171 e_895, P119 rt_896, rt_int k_897, rt_int p_898) {
  struct f_item_for_899fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_895 = e_895;
F->rt_896 = rt_896;
F->k_897 = k_897;
F->p_898 = p_898;
F->it_2308 = NULL;
F->it_2308 = (*(P171)rt_nil_check(F->e_895)).a_;
F->lab_2309 = NULL;
F->n_2310 = INT64_MIN;
F->n_2310 = ((rt_int)0LL);
while ((F->it_2308 != NULL)) {
if (((*(P171)rt_nil_check(F->it_2308)).a_ == NULL)) {
F->n_2310 = rt_add(G_NV(F->n_2310), ((rt_int)1LL));
if ((G_NV(F->n_2310) == F->p_898)) {
F->result_ = (*(P171)rt_nil_check(F->it_2308)).b_;
goto ret_;
}
} else {
F->lab_2309 = (*(P171)rt_nil_check(F->it_2308)).a_;
while ((F->lab_2309 != NULL)) {
if (((G_NV((*(P171)rt_nil_check(F->lab_2309)).flag_) == ((rt_int)1LL)) || f_names_field_894(F->up, (*(P171)rt_nil_check(F->lab_2309)).a_, f_field_at_891(F->up, F->rt_896, F->k_897)))) {
F->result_ = (*(P171)rt_nil_check(F->it_2308)).b_;
goto ret_;
}
F->lab_2309 = (*(P171)rt_nil_check(F->lab_2309)).next_;
}
L_end_2312: ;
}
F->it_2308 = (*(P171)rt_nil_check(F->it_2308)).next_;
}
L_end_2311: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_arm_holds_903(struct f_greenc_1fr *up_, P171 arm_900, rt_int v_901, int *res_902) {
  struct f_arm_holds_903fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->arm_900 = arm_900;
F->v_901 = v_901;
F->res_902 = res_902;
F->l_2313 = NULL;
F->l_2313 = (*(P171)rt_nil_check(F->arm_900)).a_;
F->lo_2314 = INT64_MIN;
F->hi_2315 = INT64_MIN;
F->ok_2316 = INT_MIN;
(*F->res_902) = 0;
while ((F->l_2313 != NULL)) {
f_static_choice_920(F->up, (*(P171)rt_nil_check(F->l_2313)).a_, &F->lo_2314, &F->ok_2316);
F->hi_2315 = G_NV(F->lo_2314);
if (((*(P171)rt_nil_check(F->l_2313)).b_ != NULL)) {
f_static_choice_920(F->up, (*(P171)rt_nil_check(F->l_2313)).b_, &F->hi_2315, &F->ok_2316);
}
if (((F->v_901 >= G_NV(F->lo_2314)) && (F->v_901 <= G_NV(F->hi_2315)))) {
(*F->res_902) = 1;
}
F->l_2313 = (*(P171)rt_nil_check(F->l_2313)).next_;
}
L_end_2317: ;
ret_:

  return;
}

static void f_record_aggregate_907(struct f_greenc_1fr *up_, P171 e_904, P119 rt_905, P137 *r_906) {
  struct f_record_aggregate_907fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_904 = e_904;
F->rt_905 = rt_905;
F->r_906 = r_906;
F->it_2318 = NULL;
F->it_2318 = (*(P171)rt_nil_check(F->e_904)).a_;
F->lab_2319 = NULL;
F->vn_2320 = NULL;
F->a_2321 = NULL;
F->f_2322 = NULL;
F->g_2323 = NULL;
F->n_2324 = INT64_MIN;
F->n_2324 = f_field_count_458(F->up, F->rt_905);
F->done_2326.lo = ((rt_int)1LL); F->done_2326.hi = ((rt_int)200LL);
F->done_2326.lo2 = 1; F->done_2326.hi2 = 1;
F->done_2326.p = rt_alloc(sizeof(int) * (size_t)G_CNT(F->done_2326));
for (rt_int i2327 = 0; i2327 < G_CNT(F->done_2326); i2327++) F->done_2326.p[i2327] = INT_MIN;
F->active_2328.lo = ((rt_int)1LL); F->active_2328.hi = ((rt_int)200LL);
F->active_2328.lo2 = 1; F->active_2328.hi2 = 1;
F->active_2328.p = rt_alloc(sizeof(int) * (size_t)G_CNT(F->active_2328));
for (rt_int i2329 = 0; i2329 < G_CNT(F->active_2328); i2329++) F->active_2328.p[i2329] = INT_MIN;
F->dvs_2331.lo = ((rt_int)1LL); F->dvs_2331.hi = ((rt_int)200LL);
F->dvs_2331.lo2 = 1; F->dvs_2331.hi2 = 1;
F->dvs_2331.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->dvs_2331));
for (rt_int i2332 = 0; i2332 < G_CNT(F->dvs_2331); i2332++) F->dvs_2331.p[i2332] = INT64_MIN;
F->order_2334.lo = ((rt_int)1LL); F->order_2334.hi = ((rt_int)200LL);
F->order_2334.lo2 = 1; F->order_2334.hi2 = 1;
F->order_2334.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->order_2334));
for (rt_int i2335 = 0; i2335 < G_CNT(F->order_2334); i2335++) F->order_2334.p[i2335] = INT64_MIN;
F->norder_2336 = INT64_MIN;
F->norder_2336 = ((rt_int)0LL);
F->nung_2337 = INT64_MIN;
F->nung_2337 = ((rt_int)0LL);
F->k_2338 = INT64_MIN;
F->k_2338 = ((rt_int)0LL);
F->d_2339 = INT64_MIN;
F->d_2339 = ((rt_int)0LL);
F->npos_2340 = INT64_MIN;
F->npos_2340 = ((rt_int)0LL);
F->saved_2341 = NULL;
F->saved_2341 = F->up->code_133;
F->ct_2342 = NULL;
F->tmp_2343 = NULL;
F->parts_2344 = NULL;
F->named_2345 = INT_MIN;
F->named_2345 = 0;
F->ok_2346 = INT_MIN;
F->ok_2346 = 0;
F->holds_2347 = INT_MIN;
F->holds_2347 = 0;
if ((G_NV((*(P119)rt_nil_check(F->rt_905)).priv_) && (!f_inside_package_964(F->up, (*(P119)rt_nil_check(F->rt_905)).decl_)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_904)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("an aggregate of private type ", 29), f_kind_name_452(F->up, F->rt_905)), rt_g_lit(" is not allowed here (RM79 7.4)", 31)));
}
if ((G_NV(F->n_2324) > ((rt_int)200LL))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_904)).line_), rt_g_lit("a record of more than 200 components", 36));
}
F->f_2322 = (*(P119)rt_nil_check(F->rt_905)).fields_;
{ rt_int lo2350 = ((rt_int)1LL), hi2351 = G_NV(F->n_2324);
for (rt_int it2352 = lo2350; it2352 <= hi2351; it2352++) {
F->i_2349 = it2352;
(*({ A2325 *ix2353 = &(F->done_2326); &ix2353->p[rt_index(F->i_2349, ix2353->lo, ix2353->hi) - ix2353->lo]; })) = 0;
(*({ A2325 *ix2354 = &(F->active_2328); &ix2354->p[rt_index(F->i_2349, ix2354->lo, ix2354->hi) - ix2354->lo]; })) = ((*(P1710)rt_nil_check(F->f_2322)).guard_ == NULL);
if (G_NV(({ A2325 ix2355 = F->active_2328; ix2355.p[rt_index(F->i_2349, ix2355.lo, ix2355.hi) - ix2355.lo]; }))) {
F->norder_2336 = rt_add(G_NV(F->norder_2336), ((rt_int)1LL));
(*({ A2333 *ix2356 = &(F->order_2334); &ix2356->p[rt_index(G_NV(F->norder_2336), ix2356->lo, ix2356->hi) - ix2356->lo]; })) = F->i_2349;
}
F->f_2322 = (*(P1710)rt_nil_check(F->f_2322)).next_;
}
}
L_end_2348: ;
F->nung_2337 = G_NV(F->norder_2336);
{ rt_int lo2359 = ((rt_int)1LL), hi2360 = G_NV(F->nung_2337);
for (rt_int it2361 = lo2359; it2361 <= hi2360; it2361++) {
F->p_2358 = it2361;
F->f_2322 = f_field_at_891(F->up, F->rt_905, G_NV(({ A2333 ix2363 = F->order_2334; ix2363.p[rt_index(F->p_2358, ix2363.lo, ix2363.hi) - ix2363.lo]; })));
if (G_NV((*(P1710)rt_nil_check(F->f_2322)).is_discr_)) {
F->vn_2320 = f_item_for_899(F->up, F->e_904, F->rt_905, G_NV(({ A2333 ix2365 = F->order_2334; ix2365.p[rt_index(F->p_2358, ix2365.lo, ix2365.hi) - ix2365.lo]; })), F->p_2358);
if ((F->vn_2320 == NULL)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_904)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("no value for discriminant ", 26), (*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_2322)).name_))), rt_g_lit(" (RM79 3.7.3)", 13)));
}
f_static_choice_920(F->up, F->vn_2320, &(*({ A2330 *ix2369 = &(F->dvs_2331); &ix2369->p[rt_index(G_NV(({ A2333 ix2368 = F->order_2334; ix2368.p[rt_index(F->p_2358, ix2368.lo, ix2368.hi) - ix2368.lo]; })), ix2369->lo, ix2369->hi) - ix2369->lo]; })), &F->ok_2346);
if (((!G_NV(F->ok_2346)) && f_is_enum_lit_722(F->up, F->vn_2320))) {
F->ok_2346 = 1;
(*({ A2330 *ix2371 = &(F->dvs_2331); &ix2371->p[rt_index(G_NV(({ A2333 ix2370 = F->order_2334; ix2370.p[rt_index(F->p_2358, ix2370.lo, ix2370.hi) - ix2370.lo]; })), ix2371->lo, ix2371->hi) - ix2371->lo]; })) = G_NV((*(P114)rt_nil_check(f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->vn_2320)).name_))))).mvalue_);
}
if (((!G_NV(F->ok_2346)) && ((*(P119)rt_nil_check(F->rt_905)).fields_ != NULL))) {
F->g_2323 = NULL;
F->d_2339 = ((rt_int)0LL);
F->a_2321 = NULL;
F->f_2322 = (*(P119)rt_nil_check(F->rt_905)).fields_;
while ((F->f_2322 != NULL)) {
F->g_2323 = (*(P1710)rt_nil_check(F->f_2322)).guard_;
while ((F->g_2323 != NULL)) {
if (eq_rt_gstr((*(P137)rt_nil_check((*(P1835)rt_nil_check(F->g_2323)).disc_)), (*(P137)rt_nil_check((*(P1710)rt_nil_check(f_field_at_891(F->up, F->rt_905, G_NV(({ A2333 ix2375 = F->order_2334; ix2375.p[rt_index(F->p_2358, ix2375.lo, ix2375.hi) - ix2375.lo]; }))))).name_)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_904)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the value of discriminant ", 26), (*(P137)rt_nil_check((*(P1835)rt_nil_check(F->g_2323)).disc_))), rt_g_lit(" in an aggregate is static (RM79 3.7.3)", 39)));
}
F->g_2323 = (*(P1835)rt_nil_check(F->g_2323)).next_;
}
L_end_2373: ;
F->f_2322 = (*(P1710)rt_nil_check(F->f_2322)).next_;
}
L_end_2372: ;
}
}
}
}
L_end_2357: ;
F->f_2322 = (*(P119)rt_nil_check(F->rt_905)).fields_;
{ rt_int lo2378 = ((rt_int)1LL), hi2379 = G_NV(F->n_2324);
for (rt_int it2380 = lo2378; it2380 <= hi2379; it2380++) {
F->i_2377 = it2380;
if (((*(P1710)rt_nil_check(F->f_2322)).guard_ != NULL)) {
F->holds_2347 = 1;
F->g_2323 = (*(P1710)rt_nil_check(F->f_2322)).guard_;
while ((F->g_2323 != NULL)) {
F->d_2339 = f_field_index_910(F->up, F->rt_905, (*(P137)rt_nil_check((*(P1835)rt_nil_check(F->g_2323)).disc_)));
if ((G_NV((*(P171)rt_nil_check((*(P1835)rt_nil_check(F->g_2323)).arm_)).flag_) == ((rt_int)1LL))) {
F->a_2321 = (*(P171)rt_nil_check((*(P1835)rt_nil_check(F->g_2323)).variant_)).b_;
while ((F->a_2321 != NULL)) {
if ((F->a_2321 != (*(P1835)rt_nil_check(F->g_2323)).arm_)) {
f_arm_holds_903(F->up, F->a_2321, G_NV(({ A2330 ix2384 = F->dvs_2331; ix2384.p[rt_index(G_NV(F->d_2339), ix2384.lo, ix2384.hi) - ix2384.lo]; })), &F->ok_2346);
if (G_NV(F->ok_2346)) {
F->holds_2347 = 0;
}
}
F->a_2321 = (*(P171)rt_nil_check(F->a_2321)).next_;
}
L_end_2382: ;
} else {
f_arm_holds_903(F->up, (*(P1835)rt_nil_check(F->g_2323)).arm_, G_NV(({ A2330 ix2386 = F->dvs_2331; ix2386.p[rt_index(G_NV(F->d_2339), ix2386.lo, ix2386.hi) - ix2386.lo]; })), &F->ok_2346);
if ((!G_NV(F->ok_2346))) {
F->holds_2347 = 0;
}
}
F->g_2323 = (*(P1835)rt_nil_check(F->g_2323)).next_;
}
L_end_2381: ;
if (G_NV(F->holds_2347)) {
(*({ A2325 *ix2387 = &(F->active_2328); &ix2387->p[rt_index(F->i_2377, ix2387->lo, ix2387->hi) - ix2387->lo]; })) = 1;
F->norder_2336 = rt_add(G_NV(F->norder_2336), ((rt_int)1LL));
(*({ A2333 *ix2388 = &(F->order_2334); &ix2388->p[rt_index(G_NV(F->norder_2336), ix2388->lo, ix2388->hi) - ix2388->lo]; })) = F->i_2377;
}
}
F->f_2322 = (*(P1710)rt_nil_check(F->f_2322)).next_;
}
}
L_end_2376: ;
f_ctype_461(F->up, F->rt_905, &F->ct_2342);
f_new_name_214(F->up, rt_g_lit("ag", 2), &F->tmp_2343);
F->up->code_133 = f_new_buffer_233(F->up);
while ((F->it_2318 != NULL)) {
if (((*(P171)rt_nil_check(F->it_2318)).a_ == NULL)) {
if (G_NV(F->named_2345)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_904)).line_), rt_g_lit("positional associations come before named ones (RM79 3.6.2)", 59));
}
F->npos_2340 = rt_add(G_NV(F->npos_2340), ((rt_int)1LL));
if ((G_NV(F->npos_2340) > G_NV(F->norder_2336))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_904)).line_), cat_rt_gstr(rt_g_lit("too many components in an aggregate of ", 39), f_kind_name_452(F->up, F->rt_905)));
}
F->k_2338 = G_NV(({ A2333 ix2390 = F->order_2334; ix2390.p[rt_index(G_NV(F->npos_2340), ix2390.lo, ix2390.hi) - ix2390.lo]; }));
f_agg_component_916(F->up, (*(P137)rt_nil_check(F->tmp_2343)), F->rt_905, G_NV(F->k_2338), (*(P171)rt_nil_check(F->it_2318)).b_, G_NV((*(P171)rt_nil_check(F->e_904)).line_));
(*({ A2325 *ix2391 = &(F->done_2326); &ix2391->p[rt_index(G_NV(F->k_2338), ix2391->lo, ix2391->hi) - ix2391->lo]; })) = 1;
} else {
F->named_2345 = 1;
F->lab_2319 = (*(P171)rt_nil_check(F->it_2318)).a_;
while ((F->lab_2319 != NULL)) {
if ((G_NV((*(P171)rt_nil_check(F->lab_2319)).flag_) == ((rt_int)1LL))) {
if (((*(P171)rt_nil_check(F->it_2318)).next_ != NULL)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_904)).line_), rt_g_lit("others comes last in an aggregate (RM79 3.6.2)", 46));
}
{ rt_int lo2395 = ((rt_int)1LL), hi2396 = G_NV(F->n_2324);
for (rt_int it2397 = lo2395; it2397 <= hi2396; it2397++) {
F->i_2394 = it2397;
if ((G_NV(({ A2325 ix2398 = F->active_2328; ix2398.p[rt_index(F->i_2394, ix2398.lo, ix2398.hi) - ix2398.lo]; })) && (!G_NV(({ A2325 ix2399 = F->done_2326; ix2399.p[rt_index(F->i_2394, ix2399.lo, ix2399.hi) - ix2399.lo]; }))))) {
f_agg_component_916(F->up, (*(P137)rt_nil_check(F->tmp_2343)), F->rt_905, F->i_2394, (*(P171)rt_nil_check(F->it_2318)).b_, G_NV((*(P171)rt_nil_check(F->e_904)).line_));
(*({ A2325 *ix2400 = &(F->done_2326); &ix2400->p[rt_index(F->i_2394, ix2400->lo, ix2400->hi) - ix2400->lo]; })) = 1;
}
}
}
L_end_2393: ;
} else {
if (((G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->lab_2319)).a_)).kind_) != ((rt_int)5LL)) || ((*(P171)rt_nil_check(F->lab_2319)).b_ != NULL))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_904)).line_), rt_g_lit("a choice in a record aggregate names a component (RM79 3.6.2)", 61));
}
F->k_2338 = f_field_index_910(F->up, F->rt_905, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->lab_2319)).a_)).name_)));
if ((G_NV(F->k_2338) == ((rt_int)0LL))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_904)).line_), cat_rt_gstr(cat_rt_gstr(f_kind_name_452(F->up, F->rt_905), rt_g_lit(" has no component ", 18)), (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->lab_2319)).a_)).name_))));
}
if ((!G_NV(({ A2325 ix2401 = F->active_2328; ix2401.p[rt_index(G_NV(F->k_2338), ix2401.lo, ix2401.hi) - ix2401.lo]; })))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_904)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("component ", 10), (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->lab_2319)).a_)).name_))), rt_g_lit(" is not in the variant selected (RM79 3.7.3)", 44)));
}
if (G_NV(({ A2325 ix2402 = F->done_2326; ix2402.p[rt_index(G_NV(F->k_2338), ix2402.lo, ix2402.hi) - ix2402.lo]; }))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_904)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("component ", 10), (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->lab_2319)).a_)).name_))), rt_g_lit(" is given twice in an aggregate (RM79 3.6.2)", 44)));
}
f_agg_component_916(F->up, (*(P137)rt_nil_check(F->tmp_2343)), F->rt_905, G_NV(F->k_2338), (*(P171)rt_nil_check(F->it_2318)).b_, G_NV((*(P171)rt_nil_check(F->e_904)).line_));
(*({ A2325 *ix2403 = &(F->done_2326); &ix2403->p[rt_index(G_NV(F->k_2338), ix2403->lo, ix2403->hi) - ix2403->lo]; })) = 1;
}
F->lab_2319 = (*(P171)rt_nil_check(F->lab_2319)).next_;
}
L_end_2392: ;
}
F->it_2318 = (*(P171)rt_nil_check(F->it_2318)).next_;
}
L_end_2389: ;
F->f_2322 = (*(P119)rt_nil_check(F->rt_905)).fields_;
{ rt_int lo2406 = ((rt_int)1LL), hi2407 = G_NV(F->n_2324);
for (rt_int it2408 = lo2406; it2408 <= hi2407; it2408++) {
F->i_2405 = it2408;
if ((G_NV(({ A2325 ix2409 = F->active_2328; ix2409.p[rt_index(F->i_2405, ix2409.lo, ix2409.hi) - ix2409.lo]; })) && (!G_NV(({ A2325 ix2410 = F->done_2326; ix2410.p[rt_index(F->i_2405, ix2410.lo, ix2410.hi) - ix2410.lo]; }))))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_904)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("an aggregate gives every component of ", 38), f_kind_name_452(F->up, F->rt_905)), rt_g_lit(": ", 2)), (*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_2322)).name_))), rt_g_lit(" is missing (RM79 3.6.2)", 24)));
}
F->f_2322 = (*(P1710)rt_nil_check(F->f_2322)).next_;
}
}
L_end_2404: ;
f_captured_888(F->up, F->up->code_133, &F->parts_2344);
F->up->code_133 = F->saved_2341;
(*F->r_906) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P137)rt_nil_check(F->ct_2342))), one_rt_gstr(32)), (*(P137)rt_nil_check(F->tmp_2343))), one_rt_gstr(59)), (*(P137)rt_nil_check(F->parts_2344))), one_rt_gstr(32)), (*(P137)rt_nil_check(F->tmp_2343))), rt_g_lit("; })", 4)));
ret_:

  return;
}

static rt_int f_field_index_910(struct f_greenc_1fr *up_, P119 rt_908, rt_gstr name_909) {
  struct f_field_index_910fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->rt_908 = rt_908;
F->name_909 = cp_rt_gstr(name_909);
F->f_2411 = NULL;
F->f_2411 = (*(P119)rt_nil_check(F->rt_908)).fields_;
F->k_2412 = INT64_MIN;
F->k_2412 = ((rt_int)1LL);
while ((F->f_2411 != NULL)) {
if (eq_rt_gstr((*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_2411)).name_)), F->name_909)) {
F->result_ = G_NV(F->k_2412);
goto ret_;
}
F->k_2412 = rt_add(G_NV(F->k_2412), ((rt_int)1LL));
F->f_2411 = (*(P1710)rt_nil_check(F->f_2411)).next_;
}
L_end_2413: ;
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_agg_component_916(struct f_greenc_1fr *up_, rt_gstr tmp_911, P119 rt_912, rt_int k_913, P171 v_914, rt_int line_915) {
  struct f_agg_component_916fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->tmp_911 = cp_rt_gstr(tmp_911);
F->rt_912 = rt_912;
F->k_913 = k_913;
F->v_914 = v_914;
F->line_915 = line_915;
F->f_2414 = NULL;
F->f_2414 = (*(P119)rt_nil_check(F->rt_912)).fields_;
F->vt_2415 = NULL;
F->x_2416 = NULL;
F->y_2417 = NULL;
{ rt_int lo2420 = ((rt_int)2LL), hi2421 = F->k_913;
for (rt_int it2422 = lo2420; it2422 <= hi2421; it2422++) {
F->i_2419 = it2422;
F->f_2414 = (*(P1710)rt_nil_check(F->f_2414)).next_;
}
}
L_end_2418: ;
f_gexpr_739(F->up, F->v_914, (*(P1710)rt_nil_check(F->f_2414)).t_, &F->vt_2415, &F->x_2416);
f_check_type_456(F->up, F->vt_2415, (*(P1710)rt_nil_check(F->f_2414)).t_, F->line_915);
if (((G_NV((*(P119)rt_nil_check((*(P1710)rt_nil_check(F->f_2414)).t_)).kind_) == ((rt_int)6LL)) && (!f_bounded_444(F->up, (*(P1710)rt_nil_check(F->f_2414)).c_)))) {
f_copy_code_591(F->up, (*(P1710)rt_nil_check(F->f_2414)).t_, (*(P137)rt_nil_check(F->x_2416)), &F->y_2417);
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->tmp_911, one_rt_gstr(46)), f_c_field_228(F->up, (*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_2414)).name_)))), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->y_2417))), one_rt_gstr(59)));
} else {
if (f_composite_581(F->up, (*(P1710)rt_nil_check(F->f_2414)).t_)) {
f_init_storage_579(F->up, cat_rt_gstr(cat_rt_gstr(F->tmp_911, one_rt_gstr(46)), f_c_field_228(F->up, (*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_2414)).name_)))), (*(P1710)rt_nil_check(F->f_2414)).t_, (*(P1710)rt_nil_check(F->f_2414)).c_);
}
f_assign_code_587(F->up, cat_rt_gstr(cat_rt_gstr(F->tmp_911, one_rt_gstr(46)), f_c_field_228(F->up, (*(P137)rt_nil_check((*(P1710)rt_nil_check(F->f_2414)).name_)))), (*(P1710)rt_nil_check(F->f_2414)).t_, (*(P137)rt_nil_check(F->x_2416)), (*(P1710)rt_nil_check(F->f_2414)).c_, &F->y_2417);
f_emit_238(F->up, (*(P137)rt_nil_check(F->y_2417)));
}
ret_:

  return;
}

static void f_static_choice_920(struct f_greenc_1fr *up_, P171 x_917, rt_int *v_918, int *ok_919) {
  struct f_static_choice_920fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_917 = x_917;
F->v_918 = v_918;
F->ok_919 = ok_919;
if (f_is_char_lit_720(F->up, F->x_917)) {
(*F->ok_919) = 1;
(*F->v_918) = rt_sub(((rt_int)(G_NV(({ rt_gstr ix2423 = (*(P137)rt_nil_check((*(P171)rt_nil_check(F->x_917)).name_)); ix2423.p[rt_index(((rt_int)1LL), ix2423.lo, ix2423.hi) - ix2423.lo]; }))) + 1), ((rt_int)1LL));
goto ret_;
}
f_manifest_473(F->up, F->x_917, &(*F->v_918), &(*F->ok_919));
ret_:

  return;
}

static void f_array_aggregate_925(struct f_greenc_1fr *up_, P171 e_921, P119 arrt_922, P137 bounds_923, P137 *r_924) {
  struct f_array_aggregate_925fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_921 = e_921;
F->arrt_922 = arrt_922;
F->bounds_923 = bounds_923;
F->r_924 = r_924;
F->it_2424 = NULL;
F->it_2424 = (*(P171)rt_nil_check(F->e_921)).a_;
F->lab_2425 = NULL;
F->others_it_2426 = NULL;
F->np_2427 = INT64_MIN;
F->np_2427 = ((rt_int)0LL);
F->nnamed_2428 = INT64_MIN;
F->nnamed_2428 = ((rt_int)0LL);
F->clo_2429 = INT64_MIN;
F->clo_2429 = ((rt_int)0LL);
F->chi_2430 = INT64_MIN;
F->chi_2430 = ((rt_int)0LL);
F->v1_2431 = INT64_MIN;
F->v1_2431 = ((rt_int)0LL);
F->v2_2432 = INT64_MIN;
F->v2_2432 = ((rt_int)0LL);
F->all_static_2433 = INT_MIN;
F->all_static_2433 = 1;
F->ok_2434 = INT_MIN;
F->ok_2434 = 1;
F->ok2_2435 = INT_MIN;
F->ok2_2435 = 1;
F->first_choice_2436 = INT_MIN;
F->first_choice_2436 = 1;
F->vt_2437 = NULL;
F->ct_2438 = NULL;
F->et_2439 = NULL;
F->tmp_2440 = NULL;
F->lo_2441 = NULL;
F->hi_2442 = NULL;
F->v_2443 = NULL;
F->x_2444 = NULL;
F->parts_2445 = NULL;
F->fill_2446 = NULL;
F->rowb_2447 = NULL;
F->key_2448 = NULL;
F->khi_2449 = NULL;
F->saved_2450 = NULL;
F->saved_2450 = F->up->code_133;
f_ctype_461(F->up, F->arrt_922, &F->ct_2438);
f_elem_ctype_533(F->up, (*(P119)rt_nil_check(F->arrt_922)).elem_, &F->et_2439);
f_new_name_214(F->up, rt_g_lit("ag", 2), &F->tmp_2440);
while ((F->it_2424 != NULL)) {
if (((*(P171)rt_nil_check(F->it_2424)).a_ == NULL)) {
if (((G_NV(F->nnamed_2428) > ((rt_int)0LL)) || (F->others_it_2426 != NULL))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_921)).line_), rt_g_lit("positional associations come before named ones (RM79 3.6.2)", 59));
}
F->np_2427 = rt_add(G_NV(F->np_2427), ((rt_int)1LL));
} else if ((G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->it_2424)).a_)).flag_) == ((rt_int)1LL))) {
if ((((*(P171)rt_nil_check(F->it_2424)).next_ != NULL) || ((*(P171)rt_nil_check((*(P171)rt_nil_check(F->it_2424)).a_)).next_ != NULL))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_921)).line_), rt_g_lit("others comes last in an aggregate (RM79 3.6.2)", 46));
}
F->others_it_2426 = F->it_2424;
} else {
F->nnamed_2428 = rt_add(G_NV(F->nnamed_2428), ((rt_int)1LL));
F->lab_2425 = (*(P171)rt_nil_check(F->it_2424)).a_;
while ((F->lab_2425 != NULL)) {
f_static_choice_920(F->up, (*(P171)rt_nil_check(F->lab_2425)).a_, &F->v1_2431, &F->ok_2434);
F->v2_2432 = G_NV(F->v1_2431);
if (((*(P171)rt_nil_check(F->lab_2425)).b_ != NULL)) {
f_static_choice_920(F->up, (*(P171)rt_nil_check(F->lab_2425)).b_, &F->v2_2432, &F->ok2_2435);
F->ok_2434 = (G_NV(F->ok_2434) && G_NV(F->ok2_2435));
}
if ((!G_NV(F->ok_2434))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_921)).line_), rt_g_lit("a choice in an array aggregate is static (RM79 3.6.2)", 53));
}
if ((G_NV(F->first_choice_2436) || (G_NV(F->v1_2431) < G_NV(F->clo_2429)))) {
F->clo_2429 = G_NV(F->v1_2431);
}
if ((G_NV(F->first_choice_2436) || (G_NV(F->v2_2432) > G_NV(F->chi_2430)))) {
F->chi_2430 = G_NV(F->v2_2432);
}
F->first_choice_2436 = 0;
F->lab_2425 = (*(P171)rt_nil_check(F->lab_2425)).next_;
}
L_end_2452: ;
}
F->it_2424 = (*(P171)rt_nil_check(F->it_2424)).next_;
}
L_end_2451: ;
if (((G_NV(F->np_2427) > ((rt_int)0LL)) && (G_NV(F->nnamed_2428) > ((rt_int)0LL)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_921)).line_), rt_g_lit("an array aggregate is positional or named, with others last (RM79 3.6.2)", 72));
}
if ((G_NV(F->nnamed_2428) > ((rt_int)0LL))) {
f_check_choices_933(F->up, F->e_921, F->arrt_922, (F->others_it_2426 != NULL));
}
if (((F->others_it_2426 == NULL) && (G_NV(F->np_2427) > ((rt_int)0LL)))) {
f_first_index_536(F->up, F->arrt_922, &F->lo_2441);
F->hi_2442 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check(F->lo_2441))), rt_g_lit(" + ", 3)), rt_g_s2g(rt_str_of_int(rt_sub(G_NV(F->np_2427), ((rt_int)1LL))))), one_rt_gstr(41)));
} else if (((F->others_it_2426 == NULL) && (G_NV(F->nnamed_2428) > ((rt_int)0LL)))) {
F->lo_2441 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->clo_2429)))), rt_g_lit("LL)", 3)));
F->hi_2442 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->chi_2430)))), rt_g_lit("LL)", 3)));
} else if ((((*(P119)rt_nil_check(F->arrt_922)).tcons_ != NULL) && ((*(P175)rt_nil_check((*(P119)rt_nil_check(F->arrt_922)).tcons_)).hi_ != NULL))) {
F->lo_2441 = (*(P175)rt_nil_check((*(P119)rt_nil_check(F->arrt_922)).tcons_)).lo_;
F->hi_2442 = (*(P175)rt_nil_check((*(P119)rt_nil_check(F->arrt_922)).tcons_)).hi_;
} else if ((F->bounds_923 != NULL)) {
F->lo_2441 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check(F->bounds_923))), rt_g_lit(").lo", 4)));
F->hi_2442 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check(F->bounds_923))), rt_g_lit(").hi", 4)));
} else {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_921)).line_), rt_g_lit("an aggregate with others needs bounds from its context (RM79 3.6.2)", 67));
}
if (((G_NV((*(P119)rt_nil_check(F->arrt_922)).dims_) > ((rt_int)1LL)) && (F->bounds_923 != NULL))) {
F->rowb_2447 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((struct { rt_int lo, hi; }){ (", 31), (*(P137)rt_nil_check(F->bounds_923))), rt_g_lit(").lo2, (", 8)), (*(P137)rt_nil_check(F->bounds_923))), rt_g_lit(").hi2 })", 8)));
}
F->up->code_133 = f_new_buffer_233(F->up);
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->tmp_2440)), rt_g_lit(".lo = ", 6)), (*(P137)rt_nil_check(F->lo_2441))), rt_g_lit("; ", 2)), (*(P137)rt_nil_check(F->tmp_2440))), rt_g_lit(".hi = ", 6)), (*(P137)rt_nil_check(F->hi_2442))), rt_g_lit("; ", 2)), (*(P137)rt_nil_check(F->tmp_2440))), rt_g_lit(".lo2 = ", 7)), (*(P137)rt_nil_check(F->tmp_2440))), rt_g_lit(".hi2 = 1;", 9)));
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->tmp_2440)), rt_g_lit(".p = rt_alloc(sizeof(", 21)), (*(P137)rt_nil_check(F->et_2439))), rt_g_lit(") * (size_t)(G_CNT(", 19)), (*(P137)rt_nil_check(F->tmp_2440))), rt_g_lit(") + 1));", 8)));
if (((G_NV(F->np_2427) > ((rt_int)0LL)) && (F->others_it_2426 == NULL))) {
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (G_CNT(", 10), (*(P137)rt_nil_check(F->tmp_2440))), rt_g_lit(") != ", 5)), rt_g_s2g(rt_str_of_int(G_NV(F->np_2427)))), rt_g_lit(") rt_raise(RT_X_SUBSCRIPT);", 27)));
} else if ((G_NV(F->np_2427) > ((rt_int)0LL))) {
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (G_CNT(", 10), (*(P137)rt_nil_check(F->tmp_2440))), rt_g_lit(") < ", 4)), rt_g_s2g(rt_str_of_int(G_NV(F->np_2427)))), rt_g_lit(") rt_raise(RT_X_SUBSCRIPT);", 27)));
}
if ((F->others_it_2426 != NULL)) {
F->up->agg_bounds_178 = F->rowb_2447;
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->others_it_2426)).b_, (*(P119)rt_nil_check(F->arrt_922)).elem_, &F->vt_2437, &F->v_2443);
F->up->agg_bounds_178 = NULL;
f_check_type_456(F->up, F->vt_2437, (*(P119)rt_nil_check(F->arrt_922)).elem_, G_NV((*(P171)rt_nil_check(F->e_921)).line_));
f_ctype_461(F->up, (*(P119)rt_nil_check(F->arrt_922)).elem_, &F->x_2444);
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P137)rt_nil_check(F->x_2444))), rt_g_lit(" o_ = ", 6)), (*(P137)rt_nil_check(F->v_2443))), rt_g_lit("; for (rt_int k_ = 0; k_ < G_CNT(", 33)), (*(P137)rt_nil_check(F->tmp_2440))), rt_g_lit("); k_++) {", 10)));
f_copy_code_591(F->up, (*(P119)rt_nil_check(F->arrt_922)).elem_, rt_g_lit("o_", 2), &F->x_2444);
f_element_store_929(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->tmp_2440)), rt_g_lit(".p[k_]", 6)), F->arrt_922, (*(P137)rt_nil_check(F->x_2444)));
f_emit_238(F->up, rt_g_lit("} }", 3));
}
F->it_2424 = (*(P171)rt_nil_check(F->e_921)).a_;
F->np_2427 = ((rt_int)0LL);
while (((F->it_2424 != NULL) && (F->it_2424 != F->others_it_2426))) {
F->up->agg_bounds_178 = F->rowb_2447;
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->it_2424)).b_, (*(P119)rt_nil_check(F->arrt_922)).elem_, &F->vt_2437, &F->v_2443);
F->up->agg_bounds_178 = NULL;
f_check_type_456(F->up, F->vt_2437, (*(P119)rt_nil_check(F->arrt_922)).elem_, G_NV((*(P171)rt_nil_check(F->e_921)).line_));
f_copy_code_591(F->up, (*(P119)rt_nil_check(F->arrt_922)).elem_, (*(P137)rt_nil_check(F->v_2443)), &F->x_2444);
if (((*(P171)rt_nil_check(F->it_2424)).a_ == NULL)) {
f_element_store_929(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->tmp_2440)), rt_g_lit(".p[", 3)), rt_g_s2g(rt_str_of_int(G_NV(F->np_2427)))), one_rt_gstr(93)), F->arrt_922, (*(P137)rt_nil_check(F->x_2444)));
F->np_2427 = rt_add(G_NV(F->np_2427), ((rt_int)1LL));
} else {
f_new_name_214(F->up, rt_g_lit("av", 2), &F->v_2443);
f_ctype_461(F->up, (*(P119)rt_nil_check(F->arrt_922)).elem_, &F->parts_2445);
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P137)rt_nil_check(F->parts_2445))), one_rt_gstr(32)), (*(P137)rt_nil_check(F->v_2443))), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->x_2444))), one_rt_gstr(59)));
F->lab_2425 = (*(P171)rt_nil_check(F->it_2424)).a_;
while ((F->lab_2425 != NULL)) {
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->lab_2425)).a_, (*(P119)rt_nil_check(F->arrt_922)).idx_, &F->vt_2437, &F->key_2448);
f_check_type_456(F->up, F->vt_2437, (*(P119)rt_nil_check(F->arrt_922)).idx_, G_NV((*(P171)rt_nil_check(F->e_921)).line_));
F->khi_2449 = F->key_2448;
if (((*(P171)rt_nil_check(F->lab_2425)).b_ != NULL)) {
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->lab_2425)).b_, (*(P119)rt_nil_check(F->arrt_922)).idx_, &F->vt_2437, &F->khi_2449);
f_check_type_456(F->up, F->vt_2437, (*(P119)rt_nil_check(F->arrt_922)).idx_, G_NV((*(P171)rt_nil_check(F->e_921)).line_));
}
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = ", 17), (*(P137)rt_nil_check(F->key_2448))), rt_g_lit("; k_ <= ", 8)), (*(P137)rt_nil_check(F->khi_2449))), rt_g_lit("; k_++) {", 9)));
f_copy_code_591(F->up, (*(P119)rt_nil_check(F->arrt_922)).elem_, (*(P137)rt_nil_check(F->v_2443)), &F->x_2444);
f_element_store_929(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->tmp_2440)), rt_g_lit(".p[rt_index(k_, ", 16)), (*(P137)rt_nil_check(F->tmp_2440))), rt_g_lit(".lo, ", 5)), (*(P137)rt_nil_check(F->tmp_2440))), rt_g_lit(".hi) - ", 7)), (*(P137)rt_nil_check(F->tmp_2440))), rt_g_lit(".lo]", 4)), F->arrt_922, (*(P137)rt_nil_check(F->x_2444)));
f_emit_238(F->up, rt_g_lit("}", 1));
F->lab_2425 = (*(P171)rt_nil_check(F->lab_2425)).next_;
}
L_end_2454: ;
f_emit_238(F->up, rt_g_lit("}", 1));
}
F->it_2424 = (*(P171)rt_nil_check(F->it_2424)).next_;
}
L_end_2453: ;
if ((G_NV((*(P119)rt_nil_check(F->arrt_922)).dims_) > ((rt_int)1LL))) {
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (G_CNT(", 10), (*(P137)rt_nil_check(F->tmp_2440))), rt_g_lit(") > 0) { ", 9)), (*(P137)rt_nil_check(F->tmp_2440))), rt_g_lit(".lo2 = ", 7)), (*(P137)rt_nil_check(F->tmp_2440))), rt_g_lit(".p[0].lo; ", 10)), (*(P137)rt_nil_check(F->tmp_2440))), rt_g_lit(".hi2 = ", 7)), (*(P137)rt_nil_check(F->tmp_2440))), rt_g_lit(".p[0].hi; }", 11)));
}
f_captured_888(F->up, F->up->code_133, &F->parts_2445);
F->up->code_133 = F->saved_2450;
(*F->r_924) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P137)rt_nil_check(F->ct_2438))), one_rt_gstr(32)), (*(P137)rt_nil_check(F->tmp_2440))), one_rt_gstr(59)), (*(P137)rt_nil_check(F->parts_2445))), one_rt_gstr(32)), (*(P137)rt_nil_check(F->tmp_2440))), rt_g_lit("; })", 4)));
ret_:

  return;
}

static void f_element_store_929(struct f_greenc_1fr *up_, rt_gstr lv_926, P119 arrt_927, rt_gstr v_928) {
  struct f_element_store_929fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lv_926 = cp_rt_gstr(lv_926);
F->arrt_927 = arrt_927;
F->v_928 = cp_rt_gstr(v_928);
F->x_2455 = NULL;
if (((((*(P119)rt_nil_check(F->arrt_927)).elemcons_ != NULL) && ((*(P175)rt_nil_check((*(P119)rt_nil_check(F->arrt_927)).elemcons_)).lo_ != NULL)) && (!f_composite_581(F->up, (*(P119)rt_nil_check(F->arrt_927)).elem_)))) {
f_assign_code_587(F->up, F->lv_926, (*(P119)rt_nil_check(F->arrt_927)).elem_, F->v_928, (*(P119)rt_nil_check(F->arrt_927)).elemcons_, &F->x_2455);
f_emit_238(F->up, (*(P137)rt_nil_check(F->x_2455)));
} else {
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lv_926, rt_g_lit(" = ", 3)), F->v_928), one_rt_gstr(59)));
}
ret_:

  return;
}

static void f_check_choices_933(struct f_greenc_1fr *up_, P171 e_930, P119 arrt_931, int has_others_932) {
  struct f_check_choices_933fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_930 = e_930;
F->arrt_931 = arrt_931;
F->has_others_932 = has_others_932;
F->a_2456 = NULL;
F->b_2457 = NULL;
F->lab_2458 = NULL;
F->lab2_2459 = NULL;
F->lo1_2460 = INT64_MIN;
F->lo1_2460 = ((rt_int)0LL);
F->hi1_2461 = INT64_MIN;
F->hi1_2461 = ((rt_int)0LL);
F->lo2_2462 = INT64_MIN;
F->lo2_2462 = ((rt_int)0LL);
F->hi2_2463 = INT64_MIN;
F->hi2_2463 = ((rt_int)0LL);
F->count_2464 = INT64_MIN;
F->count_2464 = ((rt_int)0LL);
F->ok_2465 = INT_MIN;
F->a_2456 = (*(P171)rt_nil_check(F->e_930)).a_;
while ((F->a_2456 != NULL)) {
if ((((*(P171)rt_nil_check(F->a_2456)).a_ != NULL) && (G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->a_2456)).a_)).flag_) != ((rt_int)1LL)))) {
F->lab_2458 = (*(P171)rt_nil_check(F->a_2456)).a_;
while ((F->lab_2458 != NULL)) {
f_static_choice_920(F->up, (*(P171)rt_nil_check(F->lab_2458)).a_, &F->lo1_2460, &F->ok_2465);
F->hi1_2461 = G_NV(F->lo1_2460);
if (((*(P171)rt_nil_check(F->lab_2458)).b_ != NULL)) {
f_static_choice_920(F->up, (*(P171)rt_nil_check(F->lab_2458)).b_, &F->hi1_2461, &F->ok_2465);
}
if ((G_NV(F->hi1_2461) >= G_NV(F->lo1_2460))) {
F->count_2464 = rt_add(G_NV(F->count_2464), rt_add(rt_sub(G_NV(F->hi1_2461), G_NV(F->lo1_2460)), ((rt_int)1LL)));
}
F->b_2457 = F->a_2456;
F->lab2_2459 = (*(P171)rt_nil_check(F->lab_2458)).next_;
while ((F->b_2457 != NULL)) {
if ((((*(P171)rt_nil_check(F->b_2457)).a_ != NULL) && (G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->b_2457)).a_)).flag_) != ((rt_int)1LL)))) {
if ((F->b_2457 != F->a_2456)) {
F->lab2_2459 = (*(P171)rt_nil_check(F->b_2457)).a_;
}
while ((F->lab2_2459 != NULL)) {
f_static_choice_920(F->up, (*(P171)rt_nil_check(F->lab2_2459)).a_, &F->lo2_2462, &F->ok_2465);
F->hi2_2463 = G_NV(F->lo2_2462);
if (((*(P171)rt_nil_check(F->lab2_2459)).b_ != NULL)) {
f_static_choice_920(F->up, (*(P171)rt_nil_check(F->lab2_2459)).b_, &F->hi2_2463, &F->ok_2465);
}
if (((((G_NV(F->lo1_2460) <= G_NV(F->hi1_2461)) && (G_NV(F->lo2_2462) <= G_NV(F->hi2_2463))) && (G_NV(F->lo1_2460) <= G_NV(F->hi2_2463))) && (G_NV(F->lo2_2462) <= G_NV(F->hi1_2461)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_930)).line_), rt_g_lit("an index is given twice in an aggregate (RM79 3.6.2)", 52));
}
F->lab2_2459 = (*(P171)rt_nil_check(F->lab2_2459)).next_;
}
L_end_2469: ;
}
F->b_2457 = (*(P171)rt_nil_check(F->b_2457)).next_;
F->lab2_2459 = NULL;
}
L_end_2468: ;
F->lab_2458 = (*(P171)rt_nil_check(F->lab_2458)).next_;
}
L_end_2467: ;
}
F->a_2456 = (*(P171)rt_nil_check(F->a_2456)).next_;
}
L_end_2466: ;
if (((!F->has_others_932) && f_static_bounds_448(F->up, (*(P119)rt_nil_check(F->arrt_931)).tcons_))) {
if ((G_NV(F->count_2464) != rt_add(rt_sub(G_NV((*(P175)rt_nil_check((*(P119)rt_nil_check(F->arrt_931)).tcons_)).mhi_), G_NV((*(P175)rt_nil_check((*(P119)rt_nil_check(F->arrt_931)).tcons_)).mlo_)), ((rt_int)1LL)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_930)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the choices of an aggregate cover every index of ", 49), f_kind_name_452(F->up, F->arrt_931)), rt_g_lit(" once, or others is given (RM79 3.6.2)", 38)));
}
}
ret_:

  return;
}

static P171 f_actual_for_937(struct f_greenc_1fr *up_, P171 args_934, P1695 pm_935, P1695 first_936) {
  struct f_actual_for_937fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->args_934 = args_934;
F->pm_935 = pm_935;
F->first_936 = first_936;
F->a_2470 = NULL;
F->a_2470 = F->args_934;
F->p_2471 = NULL;
F->p_2471 = F->first_936;
while (((F->a_2470 != NULL) && ((*(P171)rt_nil_check(F->a_2470)).formal_ == NULL))) {
if ((F->p_2471 == F->pm_935)) {
F->result_ = F->a_2470;
goto ret_;
}
F->p_2471 = (*(P1695)rt_nil_check(F->p_2471)).next_;
F->a_2470 = (*(P171)rt_nil_check(F->a_2470)).next_;
}
L_end_2472: ;
while ((F->a_2470 != NULL)) {
if ((((*(P171)rt_nil_check(F->a_2470)).formal_ != NULL) && eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->a_2470)).formal_)), (*(P137)rt_nil_check((*(P1695)rt_nil_check(F->pm_935)).name_))))) {
F->result_ = F->a_2470;
goto ret_;
}
F->a_2470 = (*(P171)rt_nil_check(F->a_2470)).next_;
}
L_end_2473: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_gcall_942(struct f_greenc_1fr *up_, P171 e_938, int is_stmt_939, P119 *t_940, P137 *r_941) {
  struct f_gcall_942fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_938 = e_938;
F->is_stmt_939 = is_stmt_939;
F->t_940 = t_940;
F->r_941 = r_941;
F->fn_2474 = NULL;
F->fn_2474 = (*(P171)rt_nil_check(F->e_938)).a_;
F->nm_2475 = NULL;
F->y_2476 = NULL;
F->args_2477 = NULL;
F->lv_2478 = NULL;
F->v_2479 = NULL;
F->ct_2480 = NULL;
F->x_2481 = NULL;
F->a_2482 = NULL;
F->pm_2483 = NULL;
F->lt_2484 = NULL;
F->vt_2485 = NULL;
F->lc_2486 = NULL;
F->ro_2487 = INT_MIN;
f_expanded_757(F->up, F->fn_2474, &F->nm_2475);
if ((F->nm_2475 != NULL)) {
F->fn_2474 = F->nm_2475;
} else if ((((G_NV((*(P171)rt_nil_check(F->fn_2474)).kind_) == ((rt_int)9LL)) && (G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->fn_2474)).a_)).kind_) == ((rt_int)5LL))) && f_is_type_name_718(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->fn_2474)).a_)).name_))))) {
if ((!f_type_attribute_716(F->up, (*(P114)rt_nil_check(f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->fn_2474)).a_)).name_))))).t_, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->fn_2474)).name_))))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_938)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->fn_2474)).name_)), rt_g_lit(" is not a subprogram attribute of ", 34)), (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->fn_2474)).a_)).name_))), rt_g_lit(" (RM79 3.3)", 11)));
}
F->nm_2475 = f_nn_285(F->up, ((rt_int)5LL), G_NV((*(P171)rt_nil_check(F->fn_2474)).line_));
(*(P171)rt_nil_check(F->nm_2475)).name_ = (*(P171)rt_nil_check(F->fn_2474)).name_;
F->fn_2474 = F->nm_2475;
} else if (((G_NV((*(P171)rt_nil_check(F->fn_2474)).kind_) == ((rt_int)9LL)) && f_is_package_958(F->up, (*(P171)rt_nil_check(F->fn_2474)).a_))) {
F->nm_2475 = f_nn_285(F->up, ((rt_int)5LL), G_NV((*(P171)rt_nil_check(F->fn_2474)).line_));
(*(P171)rt_nil_check(F->nm_2475)).name_ = (*(P171)rt_nil_check(F->fn_2474)).name_;
(*(P171)rt_nil_check(F->nm_2475)).tag_ = f_mk_211(F->up, f_path_of_328(F->up, (*(P171)rt_nil_check(F->fn_2474)).a_));
F->fn_2474 = F->nm_2475;
} else if (((((G_NV((*(P171)rt_nil_check(F->fn_2474)).kind_) == ((rt_int)9LL)) && (G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->fn_2474)).a_)).kind_) == ((rt_int)8LL))) && (G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->fn_2474)).a_)).a_)).kind_) == ((rt_int)5LL))) && f_is_task_name_1027(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->fn_2474)).a_)).a_)).name_))))) {
F->y_2476 = f_member_of_962(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->fn_2474)).a_)).a_)).name_)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->fn_2474)).name_)), G_NV((*(P171)rt_nil_check(F->fn_2474)).line_));
if (((F->y_2476 != NULL) && ((G_NV((*(P114)rt_nil_check(F->y_2476)).kind_) == ((rt_int)3LL)) || (G_NV((*(P114)rt_nil_check(F->y_2476)).kind_) == ((rt_int)4LL))))) {
f_resolve_member_overload_1003(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->fn_2474)).a_)).a_)).name_)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->fn_2474)).name_)), (*(P171)rt_nil_check(F->e_938)).b_, F->is_stmt_939, F->up->call_want_199, G_NV((*(P171)rt_nil_check(F->e_938)).line_), &F->y_2476);
F->up->call_task_ix_190 = (*(P171)rt_nil_check((*(P171)rt_nil_check(F->fn_2474)).a_)).b_;
if ((F->is_stmt_939 && (G_NV((*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_2476)).result_)).kind_) != ((rt_int)9LL)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_938)).line_), cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->fn_2474)).name_)), rt_g_lit(" returns a value; it is not a procedure call", 44)));
}
f_gcall_with_947(F->up, F->e_938, F->y_2476, &(*F->t_940), &(*F->r_941));
goto ret_;
}
}
if ((G_NV((*(P171)rt_nil_check(F->fn_2474)).kind_) != ((rt_int)5LL))) {
f_other_call_1084(F->up, F->e_938, F->is_stmt_939, &(*F->t_940), &(*F->r_941));
goto ret_;
}
F->y_2476 = f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->fn_2474)).name_)));
if (((*(P171)rt_nil_check(F->fn_2474)).tag_ != NULL)) {
F->y_2476 = f_member_of_962(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->fn_2474)).tag_)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->fn_2474)).name_)), G_NV((*(P171)rt_nil_check(F->fn_2474)).line_));
}
if ((F->y_2476 == NULL)) {
f_builtin_954(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->fn_2474)).name_)), (*(P171)rt_nil_check(F->e_938)).b_, G_NV((*(P171)rt_nil_check(F->e_938)).line_), F->is_stmt_939, &(*F->t_940), &(*F->r_941));
goto ret_;
}
if ((((G_NV((*(P114)rt_nil_check(F->y_2476)).kind_) == ((rt_int)3LL)) || (G_NV((*(P114)rt_nil_check(F->y_2476)).kind_) == ((rt_int)4LL))) && ((*(P171)rt_nil_check(F->fn_2474)).tag_ == NULL))) {
f_resolve_overload_995(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->fn_2474)).name_)), (*(P171)rt_nil_check(F->e_938)).b_, F->is_stmt_939, F->up->call_want_199, G_NV((*(P171)rt_nil_check(F->e_938)).line_), &F->y_2476);
if ((F->y_2476 == NULL)) {
f_builtin_954(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->fn_2474)).name_)), (*(P171)rt_nil_check(F->e_938)).b_, G_NV((*(P171)rt_nil_check(F->e_938)).line_), F->is_stmt_939, &(*F->t_940), &(*F->r_941));
goto ret_;
}
} else if (((G_NV((*(P114)rt_nil_check(F->y_2476)).kind_) == ((rt_int)3LL)) || (G_NV((*(P114)rt_nil_check(F->y_2476)).kind_) == ((rt_int)4LL)))) {
f_resolve_member_overload_1003(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->fn_2474)).tag_)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->fn_2474)).name_)), (*(P171)rt_nil_check(F->e_938)).b_, F->is_stmt_939, F->up->call_want_199, G_NV((*(P171)rt_nil_check(F->e_938)).line_), &F->y_2476);
}
if ((G_NV((*(P114)rt_nil_check(F->y_2476)).kind_) == ((rt_int)10LL))) {
f_other_call_1084(F->up, F->e_938, F->is_stmt_939, &(*F->t_940), &(*F->r_941));
goto ret_;
}
if (((G_NV((*(P114)rt_nil_check(F->y_2476)).kind_) != ((rt_int)3LL)) && (G_NV((*(P114)rt_nil_check(F->y_2476)).kind_) != ((rt_int)4LL)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_938)).line_), cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->fn_2474)).name_)), rt_g_lit(" cannot be called", 17)));
}
if ((F->is_stmt_939 && (G_NV((*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_2476)).result_)).kind_) != ((rt_int)9LL)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_938)).line_), cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->fn_2474)).name_)), rt_g_lit(" returns a value; it is not a procedure call", 44)));
}
if (((!F->is_stmt_939) && (G_NV((*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_2476)).result_)).kind_) == ((rt_int)9LL)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_938)).line_), cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->fn_2474)).name_)), rt_g_lit(" is a procedure, not a function", 31)));
}
f_gcall_with_947(F->up, F->e_938, F->y_2476, &(*F->t_940), &(*F->r_941));
ret_:

  return;
}

static void f_gcall_with_947(struct f_greenc_1fr *up_, P171 e_943, P114 y_944, P119 *t_945, P137 *r_946) {
  struct f_gcall_with_947fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_943 = e_943;
F->y_944 = y_944;
F->t_945 = t_945;
F->r_946 = r_946;
F->args_2488 = NULL;
F->lv_2489 = NULL;
F->v_2490 = NULL;
F->x1_2491 = NULL;
F->x2_2492 = NULL;
F->a_2493 = NULL;
F->pm_2494 = NULL;
F->lt_2495 = NULL;
F->vt_2496 = NULL;
F->lc_2497 = NULL;
F->ro_2498 = INT_MIN;
f_check_call_rules_1139(F->up, F->e_943, F->y_944);
F->args_2488 = f_mk_211(F->up, rt_g_lit("", 0));
if ((((((G_NV((*(P114)rt_nil_check(F->y_944)).kind_) == ((rt_int)3LL)) || (G_NV((*(P114)rt_nil_check(F->y_944)).kind_) == ((rt_int)4LL))) && ((*(P114)rt_nil_check(F->y_944)).access_path_ != NULL)) && ((*(P114)rt_nil_check(F->y_944)).members_ != NULL)) && ((*(P114)rt_nil_check((*(P114)rt_nil_check(F->y_944)).members_)).c_ != NULL))) {
if ((F->up->call_task_ix_190 == NULL)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_943)).line_), cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_944)).name_)), rt_g_lit(" needs the member of the family: F(I).", 38)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_944)).name_))));
}
f_gexpr_739(F->up, F->up->call_task_ix_190, (*(P114)rt_nil_check((*(P114)rt_nil_check(F->y_944)).members_)).t_, &F->vt_2496, &F->v_2490);
F->up->call_task_ix_190 = NULL;
f_path_at_1025(F->up, G_NV((*(P114)rt_nil_check((*(P114)rt_nil_check(F->y_944)).members_)).level_), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_944)).access_path_)), &F->lv_2489);
f_path_at_1025(F->up, G_NV((*(P114)rt_nil_check((*(P114)rt_nil_check(F->y_944)).members_)).level_), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check((*(P114)rt_nil_check(F->y_944)).members_)).cname_)), rt_g_lit("lo", 2)), &F->x1_2491);
f_path_at_1025(F->up, G_NV((*(P114)rt_nil_check((*(P114)rt_nil_check(F->y_944)).members_)).level_), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check((*(P114)rt_nil_check(F->y_944)).members_)).cname_)), rt_g_lit("hi", 2)), &F->x2_2492);
F->lv_2489 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->lv_2489)), rt_g_lit("[rt_index(", 10)), (*(P137)rt_nil_check(F->v_2490))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->x1_2491))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->x2_2492))), rt_g_lit(") - ", 4)), (*(P137)rt_nil_check(F->x1_2491))), one_rt_gstr(93)));
F->args_2488 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check(F->lv_2489))), rt_g_lit(" \? ", 3)), (*(P137)rt_nil_check(F->lv_2489))), rt_g_lit(" : (rt_raise(RT_X_TASKING), (void *)0))", 39)));
} else if ((((G_NV((*(P114)rt_nil_check(F->y_944)).kind_) == ((rt_int)3LL)) || (G_NV((*(P114)rt_nil_check(F->y_944)).kind_) == ((rt_int)4LL))) && ((*(P114)rt_nil_check(F->y_944)).access_path_ != NULL))) {
f_path_at_1025(F->up, G_NV((*(P114)rt_nil_check((*(P114)rt_nil_check(F->y_944)).members_)).level_), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_944)).access_path_)), &F->lv_2489);
F->args_2488 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check(F->lv_2489))), rt_g_lit(" \? ", 3)), (*(P137)rt_nil_check(F->lv_2489))), rt_g_lit(" : (rt_raise(RT_X_TASKING), (void *)0))", 39)));
} else if ((G_NV((*(P114)rt_nil_check(F->y_944)).level_) > ((rt_int)0LL))) {
f_link_to_679(F->up, G_NV((*(P114)rt_nil_check(F->y_944)).level_), &F->args_2488);
}
F->pm_2494 = (*(P114)rt_nil_check(F->y_944)).params_;
while ((F->pm_2494 != NULL)) {
F->a_2493 = f_actual_for_937(F->up, (*(P171)rt_nil_check(F->e_943)).b_, F->pm_2494, (*(P114)rt_nil_check(F->y_944)).params_);
if ((({ rt_gstr at2500 = (*(P137)rt_nil_check(F->args_2488)); at2500.hi >= at2500.lo ? at2500.hi - at2500.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->args_2488 = f_mk_211(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->args_2488)), rt_g_lit(", ", 2)));
}
if ((F->a_2493 == NULL)) {
if ((((*(P1695)rt_nil_check(F->pm_2494)).dflt_ == NULL) || (G_NV((*(P1695)rt_nil_check(F->pm_2494)).mode_) != ((rt_int)1LL)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_943)).line_), cat_rt_gstr(rt_g_lit("no actual parameter for ", 24), (*(P137)rt_nil_check((*(P1695)rt_nil_check(F->pm_2494)).name_))));
}
f_gexpr_739(F->up, (*(P1695)rt_nil_check(F->pm_2494)).dflt_, (*(P1695)rt_nil_check(F->pm_2494)).t_, &F->vt_2496, &F->v_2490);
F->args_2488 = f_mk_211(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->args_2488)), (*(P137)rt_nil_check(F->v_2490))));
} else {
if ((((G_NV((*(P171)rt_nil_check(F->a_2493)).flag_) != ((rt_int)0LL)) && (G_NV((*(P171)rt_nil_check(F->a_2493)).flag_) != ((rt_int)4LL))) && (G_NV((*(P171)rt_nil_check(F->a_2493)).flag_) != G_NV((*(P1695)rt_nil_check(F->pm_2494)).mode_)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_943)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the association of ", 19), (*(P137)rt_nil_check((*(P1695)rt_nil_check(F->pm_2494)).name_))), rt_g_lit(" does not match its mode", 24)));
}
if ((G_NV((*(P1695)rt_nil_check(F->pm_2494)).mode_) == ((rt_int)1LL))) {
f_gexpr_739(F->up, F->a_2493, (*(P1695)rt_nil_check(F->pm_2494)).t_, &F->vt_2496, &F->v_2490);
f_check_type_456(F->up, F->vt_2496, (*(P1695)rt_nil_check(F->pm_2494)).t_, G_NV((*(P171)rt_nil_check(F->e_943)).line_));
if (((((*(P1695)rt_nil_check(F->pm_2494)).c_ != NULL) && ((*(P175)rt_nil_check((*(P1695)rt_nil_check(F->pm_2494)).c_)).lo_ != NULL)) && ((G_NV((*(P119)rt_nil_check((*(P1695)rt_nil_check(F->pm_2494)).t_)).kind_) == ((rt_int)1LL)) || (G_NV((*(P119)rt_nil_check((*(P1695)rt_nil_check(F->pm_2494)).t_)).kind_) == ((rt_int)4LL))))) {
F->v_2490 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P137)rt_nil_check(F->v_2490))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P175)rt_nil_check((*(P1695)rt_nil_check(F->pm_2494)).c_)).lo_))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P175)rt_nil_check((*(P1695)rt_nil_check(F->pm_2494)).c_)).hi_))), one_rt_gstr(41)));
}
F->args_2488 = f_mk_211(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->args_2488)), (*(P137)rt_nil_check(F->v_2490))));
} else {
f_lvalue_695(F->up, F->a_2493, &F->lv_2489, &F->lt_2495, &F->lc_2497, &F->ro_2498);
if (G_NV(F->ro_2498)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_943)).line_), cat_rt_gstr((*(P137)rt_nil_check((*(P1695)rt_nil_check(F->pm_2494)).name_)), rt_g_lit(" needs a variable", 17)));
}
f_check_pure_target_1122(F->up, F->a_2493, G_NV((*(P171)rt_nil_check(F->e_943)).line_));
f_check_type_456(F->up, F->lt_2495, (*(P1695)rt_nil_check(F->pm_2494)).t_, G_NV((*(P171)rt_nil_check(F->e_943)).line_));
F->args_2488 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->args_2488)), one_rt_gstr(38)), (*(P137)rt_nil_check(F->lv_2489))));
}
}
F->pm_2494 = (*(P1695)rt_nil_check(F->pm_2494)).next_;
}
L_end_2499: ;
if (((f_list_len_291(F->up, (*(P171)rt_nil_check(F->e_943)).b_) > ((rt_int)0LL)) && ((*(P114)rt_nil_check(F->y_944)).params_ == NULL))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_943)).line_), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_944)).name_)), rt_g_lit(" takes no parameters", 20)));
}
(*F->t_945) = (*(P114)rt_nil_check(F->y_944)).result_;
(*F->r_946) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_944)).cname_)), one_rt_gstr(40)), (*(P137)rt_nil_check(F->args_2488))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_builtin_954(struct f_greenc_1fr *up_, rt_gstr name_948, P171 args_949, rt_int line_950, int is_stmt_951, P119 *t_952, P137 *r_953) {
  struct f_builtin_954fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_948 = cp_rt_gstr(name_948);
F->args_949 = args_949;
F->line_950 = line_950;
F->is_stmt_951 = is_stmt_951;
F->t_952 = t_952;
F->r_953 = r_953;
F->aty_2501 = NULL;
F->lt_2502 = NULL;
F->a_2503 = NULL;
F->w_2504 = NULL;
F->lv_2505 = NULL;
F->lc_2506 = NULL;
F->ro_2507 = INT_MIN;
(*F->t_952) = F->up->ty_void_158;
if (((F->up->pure_sym_200 != NULL) && (eq_rt_gstr(F->name_948, rt_g_lit("PUT", 3)) || eq_rt_gstr(F->name_948, rt_g_lit("GET", 3))))) {
f_fail_232(F->up, F->line_950, cat_rt_gstr(cat_rt_gstr(rt_g_lit("a function cannot do input-output: ", 35), F->name_948), rt_g_lit(" has side effects (RM79 6.5)", 28)));
}
if (eq_rt_gstr(F->name_948, rt_g_lit("PUT", 3))) {
if ((F->args_949 == NULL)) {
f_fail_232(F->up, F->line_950, rt_g_lit("PUT needs an item", 17));
}
f_gexpr_739(F->up, F->args_949, NULL, &F->aty_2501, &F->a_2503);
F->w_2504 = f_mk_211(F->up, rt_g_lit("0", 1));
if (((*(P171)rt_nil_check(F->args_949)).next_ != NULL)) {
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->args_949)).next_, F->up->ty_int_153, &F->lt_2502, &F->w_2504);
}
if (f_is_string_538(F->up, F->aty_2501)) {
(*F->r_953) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put(rt_g_g2s(", 18), (*(P137)rt_nil_check(F->a_2503))), rt_g_lit("))", 2)));
} else if ((G_NV((*(P119)rt_nil_check(F->aty_2501)).kind_) == ((rt_int)11LL))) {
(*F->r_953) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_putc(", 10), (*(P137)rt_nil_check(F->a_2503))), one_rt_gstr(41)));
} else if ((G_NV((*(P119)rt_nil_check(F->aty_2501)).kind_) == ((rt_int)1LL))) {
(*F->r_953) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put_int(", 13), (*(P137)rt_nil_check(F->a_2503))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->w_2504))), one_rt_gstr(41)));
} else if ((G_NV((*(P119)rt_nil_check(F->aty_2501)).kind_) == ((rt_int)2LL))) {
(*F->r_953) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put_bool(", 14), (*(P137)rt_nil_check(F->a_2503))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->w_2504))), one_rt_gstr(41)));
} else if ((G_NV((*(P119)rt_nil_check(F->aty_2501)).kind_) == ((rt_int)16LL))) {
f_fail_232(F->up, F->line_950, rt_g_lit("TEXT_IO has no PUT for a fixed point type: instantiate FIXED_IO (RM79 14.4)", 75));
} else if ((G_NV((*(P119)rt_nil_check(F->aty_2501)).kind_) == ((rt_int)3LL))) {
(*F->r_953) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put_float(", 15), (*(P137)rt_nil_check(F->a_2503))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->w_2504))), rt_g_lit(", 0)", 4)));
} else {
f_fail_232(F->up, F->line_950, rt_g_lit("PUT of this type is not handled", 31));
}
} else if (eq_rt_gstr(F->name_948, rt_g_lit("GET", 3))) {
f_lvalue_695(F->up, F->args_949, &F->lv_2505, &F->lt_2502, &F->lc_2506, &F->ro_2507);
if ((G_NV((*(P119)rt_nil_check(F->lt_2502)).kind_) == ((rt_int)11LL))) {
(*F->r_953) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check(F->lv_2505))), rt_g_lit(" = rt_g_getc())", 15)));
} else if ((G_NV((*(P119)rt_nil_check(F->lt_2502)).kind_) == ((rt_int)1LL))) {
(*F->r_953) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check(F->lv_2505))), rt_g_lit(" = rt_g_get_int())", 18)));
} else if ((G_NV((*(P119)rt_nil_check(F->lt_2502)).kind_) == ((rt_int)3LL))) {
(*F->r_953) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check(F->lv_2505))), rt_g_lit(" = rt_g_get_float())", 20)));
} else {
f_fail_232(F->up, F->line_950, rt_g_lit("GET of this type is not handled", 31));
}
} else if (eq_rt_gstr(F->name_948, rt_g_lit("ABS", 3))) {
f_gexpr_739(F->up, F->args_949, NULL, &(*F->t_952), &F->a_2503);
if ((G_NV((*(P119)rt_nil_check((*F->t_952))).kind_) == ((rt_int)1LL))) {
(*F->r_953) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_abs(", 7), (*(P137)rt_nil_check(F->a_2503))), one_rt_gstr(41)));
} else if (((G_NV((*(P119)rt_nil_check((*F->t_952))).kind_) == ((rt_int)3LL)) || (G_NV((*(P119)rt_nil_check((*F->t_952))).kind_) == ((rt_int)16LL)))) {
(*F->r_953) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("fabs(", 5), (*(P137)rt_nil_check(F->a_2503))), one_rt_gstr(41)));
} else {
f_fail_232(F->up, F->line_950, rt_g_lit("ABS applies to numeric values (RM79 App. C)", 43));
}
} else {
f_task_builtin_1099(F->up, F->name_948, F->args_949, F->line_950, &(*F->t_952), &(*F->r_953));
}
ret_:

  return;
}

static P114 f_lookup_path_956(struct f_greenc_1fr *up_, rt_gstr p_955) {
  struct f_lookup_path_956fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_955 = cp_rt_gstr(p_955);
F->y_2508 = NULL;
F->m_2509 = NULL;
{ rt_int lo2514 = ({ rt_gstr at2511 = F->p_955; at2511.lo; }), hi2515 = ({ rt_gstr at2512 = F->p_955; at2512.hi; });
for (rt_int it2516 = hi2515; it2516 >= lo2514; it2516--) {
F->i_2513 = it2516;
if ((G_NV(({ rt_gstr ix2517 = F->p_955; ix2517.p[rt_index(F->i_2513, ix2517.lo, ix2517.hi) - ix2517.lo]; })) == 46)) {
F->y_2508 = f_lookup_path_956(F->up, ({ rt_gstr sl2521 = F->p_955; rt_int l_ = ({ rt_gstr at2520 = F->p_955; at2520.lo; }), h_ = rt_sub(F->i_2513, ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl2521.lo, sl2521.hi); rt_index(h_, sl2521.lo, sl2521.hi); } sl2521.p += l_ - sl2521.lo; sl2521.lo = l_; sl2521.hi = h_; sl2521; }));
if ((F->y_2508 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if (((G_NV((*(P114)rt_nil_check(F->y_2508)).kind_) != ((rt_int)8LL)) && (G_NV((*(P114)rt_nil_check(F->y_2508)).kind_) != ((rt_int)9LL)))) {
F->result_ = NULL;
goto ret_;
}
F->m_2509 = (*(P114)rt_nil_check(F->y_2508)).members_;
while ((F->m_2509 != NULL)) {
if ((eq_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->m_2509)).name_)), ({ rt_gstr sl2524 = F->p_955; rt_int l_ = rt_add(F->i_2513, ((rt_int)1LL)), h_ = ({ rt_gstr at2523 = F->p_955; at2523.hi; }); if (l_ <= h_) { rt_index(l_, sl2524.lo, sl2524.hi); rt_index(h_, sl2524.lo, sl2524.hi); } sl2524.p += l_ - sl2524.lo; sl2524.lo = l_; sl2524.hi = h_; sl2524; })) && (!G_NV((*(P114)rt_nil_check(F->m_2509)).hidden_)))) {
F->result_ = F->m_2509;
goto ret_;
}
F->m_2509 = (*(P114)rt_nil_check(F->m_2509)).mnext_;
}
L_end_2522: ;
F->result_ = NULL;
goto ret_;
}
}
}
L_end_2510: ;
F->result_ = f_lookup_396(F->up, F->p_955);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_package_958(struct f_greenc_1fr *up_, P171 e_957) {
  struct f_is_package_958fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_957 = e_957;
F->y_2525 = NULL;
if (((G_NV((*(P171)rt_nil_check(F->e_957)).kind_) != ((rt_int)5LL)) && (G_NV((*(P171)rt_nil_check(F->e_957)).kind_) != ((rt_int)9LL)))) {
F->result_ = 0;
goto ret_;
} else if ((G_NV((*(P171)rt_nil_check(F->e_957)).kind_) == ((rt_int)9LL))) {
if (((G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_957)).a_)).kind_) != ((rt_int)5LL)) && (G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_957)).a_)).kind_) != ((rt_int)9LL)))) {
F->result_ = 0;
goto ret_;
}
}
F->y_2525 = f_lookup_path_956(F->up, f_path_of_328(F->up, F->e_957));
if ((!(F->y_2525 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((G_NV((*(P114)rt_nil_check(F->y_2525)).kind_) == ((rt_int)8LL)) || (G_NV((*(P114)rt_nil_check(F->y_2525)).kind_) == ((rt_int)9LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P114 f_member_of_962(struct f_greenc_1fr *up_, rt_gstr p_959, rt_gstr name_960, rt_int line_961) {
  struct f_member_of_962fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_959 = cp_rt_gstr(p_959);
F->name_960 = cp_rt_gstr(name_960);
F->line_961 = line_961;
F->y_2526 = NULL;
F->y_2526 = f_lookup_path_956(F->up, F->p_959);
F->m_2527 = NULL;
if (((F->y_2526 == NULL) || ((G_NV((*(P114)rt_nil_check(F->y_2526)).kind_) != ((rt_int)8LL)) && (G_NV((*(P114)rt_nil_check(F->y_2526)).kind_) != ((rt_int)9LL))))) {
F->result_ = NULL;
goto ret_;
}
F->m_2527 = (*(P114)rt_nil_check(F->y_2526)).members_;
while ((F->m_2527 != NULL)) {
if ((eq_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->m_2527)).name_)), F->name_960) && (!G_NV((*(P114)rt_nil_check(F->m_2527)).hidden_)))) {
F->result_ = F->m_2527;
goto ret_;
}
F->m_2527 = (*(P114)rt_nil_check(F->m_2527)).mnext_;
}
L_end_2528: ;
if ((G_NV((*(P114)rt_nil_check(F->y_2526)).kind_) == ((rt_int)9LL))) {
F->m_2527 = f_lookup_entry_402(F->up, F->name_960, F->y_2526);
if ((((F->m_2527 != NULL) && (G_NV((*(P114)rt_nil_check(F->m_2527)).kind_) == ((rt_int)10LL))) && f_same_task_399(F->up, (*(P114)rt_nil_check(F->m_2527)).members_, F->y_2526))) {
F->result_ = F->m_2527;
goto ret_;
}
}
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_inside_package_964(struct f_greenc_1fr *up_, P171 p_963) {
  struct f_inside_package_964fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_963 = p_963;
F->l_2529 = NULL;
F->l_2529 = F->up->pkg_stack_196;
if ((F->p_963 == NULL)) {
F->result_ = 1;
goto ret_;
}
while ((F->l_2529 != NULL)) {
if (eq_rt_gstr((*(P137)rt_nil_check((*(P148)rt_nil_check(F->l_2529)).s_)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->p_963)).name_)))) {
F->result_ = 1;
goto ret_;
}
F->l_2529 = (*(P148)rt_nil_check(F->l_2529)).next_;
}
L_end_2530: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_copy_sym_967(struct f_greenc_1fr *up_, P114 y_965, P114 *z_966) {
  struct f_copy_sym_967fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_965 = y_965;
F->z_966 = z_966;
(*F->z_966) = ({ R115 *cell2531 = rt_alloc(sizeof(R115)); *cell2531 = cp_R115(({ R115 ag2532; ag2532.kind_ = G_NV((*(P114)rt_nil_check(F->y_965)).kind_); ag2532.name_ = (*(P114)rt_nil_check(F->y_965)).name_; ag2532.t_ = (*(P114)rt_nil_check(F->y_965)).t_; ag2532.c_ = (*(P114)rt_nil_check(F->y_965)).c_; ag2532.access_path_ = (*(P114)rt_nil_check(F->y_965)).access_path_; ag2532.cname_ = (*(P114)rt_nil_check(F->y_965)).cname_; ag2532.ro_ = G_NV((*(P114)rt_nil_check(F->y_965)).ro_); ag2532.mvalue_ = G_NV((*(P114)rt_nil_check(F->y_965)).mvalue_); ag2532.hasmv_ = G_NV((*(P114)rt_nil_check(F->y_965)).hasmv_); ag2532.decl_ = (*(P114)rt_nil_check(F->y_965)).decl_; ag2532.params_ = (*(P114)rt_nil_check(F->y_965)).params_; ag2532.result_ = (*(P114)rt_nil_check(F->y_965)).result_; ag2532.depth_ = ((rt_int)0LL); ag2532.level_ = G_NV((*(P114)rt_nil_check(F->y_965)).level_); ag2532.byref_ = G_NV((*(P114)rt_nil_check(F->y_965)).byref_); ag2532.vrp_ = G_NV((*(P114)rt_nil_check(F->y_965)).vrp_); ag2532.hidden_ = G_NV((*(P114)rt_nil_check(F->y_965)).hidden_); ag2532.from_use_ = 0; ag2532.members_ = (*(P114)rt_nil_check(F->y_965)).members_; ag2532.mnext_ = NULL; ag2532.chain_ = NULL; ag2532.stack_ = NULL; ag2532.flags_ = G_NV((*(P114)rt_nil_check(F->y_965)).flags_); ag2532; })); (P114)cell2531; });
ret_:

  return;
}

static void f_complete_private_970(struct f_greenc_1fr *up_, P119 ph_968, P119 full_969) {
  struct f_complete_private_970fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->ph_968 = ph_968;
F->full_969 = full_969;
F->n_2533 = NULL;
F->n_2533 = (*(P119)rt_nil_check(F->ph_968)).name_;
F->p_2534 = NULL;
F->p_2534 = (*(P119)rt_nil_check(F->ph_968)).decl_;
as_R120(&(*(P119)rt_nil_check(F->ph_968)), (*(P119)rt_nil_check(F->full_969)));
(*(P119)rt_nil_check(F->ph_968)).name_ = F->n_2533;
(*(P119)rt_nil_check(F->ph_968)).priv_ = 1;
(*(P119)rt_nil_check(F->ph_968)).decl_ = F->p_2534;
ret_:

  return;
}

static void f_package_spec_972(struct f_greenc_1fr *up_, P171 e_971) {
  struct f_package_spec_972fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_971 = e_971;
F->y_2535 = NULL;
F->m_2536 = NULL;
F->z_2537 = NULL;
F->saved_2538 = NULL;
F->saved_2538 = F->up->cur_pkg_197;
F->first_private_2539 = NULL;
F->y_2535 = f_new_sym_439(F->up, ((rt_int)8LL), (*(P171)rt_nil_check(F->e_971)).name_);
(*(P114)rt_nil_check(F->y_2535)).decl_ = F->e_971;
F->up->pkg_stack_196 = ({ R149 *cell2540 = rt_alloc(sizeof(R149)); *cell2540 = cp_R149(({ R149 ag2541; ag2541.s_ = (*(P171)rt_nil_check(F->e_971)).name_; ag2541.next_ = F->up->pkg_stack_196; ag2541; })); (P148)cell2540; });
F->up->cur_pkg_197 = F->e_971;
f_open_scope_435(F->up);
f_decl_elements_618(F->up, (*(P171)rt_nil_check(F->e_971)).c_);
F->first_private_2539 = F->up->scope_stack_118;
f_decl_elements_618(F->up, (*(P171)rt_nil_check(F->e_971)).d_);
F->m_2536 = F->up->scope_stack_118;
while (((F->m_2536 != NULL) && (G_NV((*(P114)rt_nil_check(F->m_2536)).depth_) == G_NV(F->up->depth_117)))) {
if (((G_NV((*(P114)rt_nil_check(F->m_2536)).kind_) == ((rt_int)2LL)) && (G_NV((*(P114)rt_nil_check(F->m_2536)).flags_) == rt_add(((rt_int)1LL), ((rt_int)2LL))))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_971)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("deferred constant ", 18), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->m_2536)).name_))), rt_g_lit(" has no full declaration in the private part (RM79 7.4)", 55)));
}
f_copy_sym_967(F->up, F->m_2536, &F->z_2537);
(*(P114)rt_nil_check(F->z_2537)).hidden_ = (f_hidden_from_975(F->up, F->m_2536, F->first_private_2539) || G_NV((*(P114)rt_nil_check(F->m_2536)).from_use_));
(*(P114)rt_nil_check(F->z_2537)).mnext_ = (*(P114)rt_nil_check(F->y_2535)).members_;
(*(P114)rt_nil_check(F->y_2535)).members_ = F->z_2537;
F->m_2536 = (*(P114)rt_nil_check(F->m_2536)).stack_;
}
L_end_2542: ;
f_close_scope_436(F->up);
F->up->pkg_stack_196 = (*(P148)rt_nil_check(F->up->pkg_stack_196)).next_;
F->up->cur_pkg_197 = F->saved_2538;
f_define_434(F->up, F->y_2535, G_NV((*(P171)rt_nil_check(F->e_971)).line_));
ret_:

  return;
}

static int f_hidden_from_975(struct f_greenc_1fr *up_, P114 m_973, P114 first_private_974) {
  struct f_hidden_from_975fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->m_973 = m_973;
F->first_private_974 = first_private_974;
F->p_2543 = NULL;
F->p_2543 = F->up->scope_stack_118;
while ((F->p_2543 != NULL)) {
if ((F->p_2543 == F->first_private_974)) {
F->result_ = 0;
goto ret_;
}
if ((F->p_2543 == F->m_973)) {
F->result_ = 1;
goto ret_;
}
F->p_2543 = (*(P114)rt_nil_check(F->p_2543)).stack_;
}
L_end_2544: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_package_body_977(struct f_greenc_1fr *up_, P171 e_976) {
  struct f_package_body_977fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_976 = e_976;
F->y_2545 = NULL;
F->y_2545 = f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_976)).name_)));
F->m_2546 = NULL;
F->z_2547 = NULL;
F->saved_2548 = NULL;
F->saved_2548 = F->up->cur_pkg_197;
if (((F->y_2545 != NULL) && (G_NV((*(P114)rt_nil_check(F->y_2545)).kind_) == ((rt_int)11LL)))) {
f_attach_generic_body_1150(F->up, F->e_976);
goto ret_;
}
if (((F->y_2545 == NULL) || (G_NV((*(P114)rt_nil_check(F->y_2545)).kind_) != ((rt_int)8LL)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_976)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("package body ", 13), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_976)).name_))), rt_g_lit(" has no specification", 21)));
}
F->up->pkg_stack_196 = ({ R149 *cell2549 = rt_alloc(sizeof(R149)); *cell2549 = cp_R149(({ R149 ag2550; ag2550.s_ = (*(P171)rt_nil_check(F->e_976)).name_; ag2550.next_ = F->up->pkg_stack_196; ag2550; })); (P148)cell2549; });
F->up->cur_pkg_197 = (*(P114)rt_nil_check(F->y_2545)).decl_;
f_open_scope_435(F->up);
F->m_2546 = (*(P114)rt_nil_check(F->y_2545)).members_;
while ((F->m_2546 != NULL)) {
f_copy_sym_967(F->up, F->m_2546, &F->z_2547);
(*(P114)rt_nil_check(F->z_2547)).hidden_ = 0;
f_define_434(F->up, F->z_2547, G_NV((*(P171)rt_nil_check(F->e_976)).line_));
F->m_2546 = (*(P114)rt_nil_check(F->m_2546)).mnext_;
}
L_end_2551: ;
f_decl_elements_618(F->up, (*(P171)rt_nil_check(F->e_976)).c_);
F->m_2546 = (*(P114)rt_nil_check(F->y_2545)).members_;
while ((F->m_2546 != NULL)) {
if ((((G_NV((*(P114)rt_nil_check(F->m_2546)).kind_) == ((rt_int)3LL)) || (G_NV((*(P114)rt_nil_check(F->m_2546)).kind_) == ((rt_int)4LL))) && (G_NV((*(P171)rt_nil_check((*(P114)rt_nil_check(F->m_2546)).decl_)).ival_) == ((rt_int)1LL)))) {
F->z_2547 = ({ A113 ix2553 = F->up->table_116; ix2553.p[rt_index(f_hash_394(F->up, (*(P137)rt_nil_check((*(P114)rt_nil_check(F->m_2546)).name_))), ix2553.lo, ix2553.hi) - ix2553.lo]; });
while ((F->z_2547 != NULL)) {
if (((*(P114)rt_nil_check(F->z_2547)).cname_ == (*(P114)rt_nil_check(F->m_2546)).cname_)) {
(*(P114)rt_nil_check(F->m_2546)).decl_ = (*(P114)rt_nil_check(F->z_2547)).decl_;
}
F->z_2547 = (*(P114)rt_nil_check(F->z_2547)).chain_;
}
L_end_2554: ;
if ((G_NV((*(P171)rt_nil_check((*(P114)rt_nil_check(F->m_2546)).decl_)).ival_) == ((rt_int)1LL))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_976)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no body for ", 12), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->m_2546)).name_))), rt_g_lit(" in package body ", 17)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_976)).name_))));
}
}
F->m_2546 = (*(P114)rt_nil_check(F->m_2546)).mnext_;
}
L_end_2552: ;
f_guarded_644(F->up, (*(P171)rt_nil_check(F->e_976)).d_, (*(P171)rt_nil_check(F->e_976)).e_, G_NV((*(P171)rt_nil_check(F->e_976)).line_));
f_close_scope_436(F->up);
F->up->pkg_stack_196 = (*(P148)rt_nil_check(F->up->pkg_stack_196)).next_;
F->up->cur_pkg_197 = F->saved_2548;
ret_:

  return;
}

static int f_use_visible_979(struct f_greenc_1fr *up_, P114 old_978) {
  struct f_use_visible_979fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->old_978 = old_978;
if ((F->old_978 == NULL)) {
F->result_ = 1;
goto ret_;
}
F->result_ = (((G_NV((*(P114)rt_nil_check(F->old_978)).depth_) < G_NV(F->up->depth_117)) && (G_NV((*(P114)rt_nil_check(F->old_978)).kind_) != ((rt_int)1LL))) && (G_NV((*(P114)rt_nil_check(F->old_978)).kind_) != ((rt_int)2LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_use_clause_981(struct f_greenc_1fr *up_, P171 e_980) {
  struct f_use_clause_981fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_980 = e_980;
F->n_2555 = NULL;
F->n_2555 = (*(P171)rt_nil_check(F->e_980)).a_;
F->y_2556 = NULL;
F->m_2557 = NULL;
F->z_2558 = NULL;
F->old_2559 = NULL;
while ((F->n_2555 != NULL)) {
F->y_2556 = f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->n_2555)).name_)));
if ((F->y_2556 == NULL)) {
if ((!eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->n_2555)).name_)), rt_g_lit("TEXT_IO", 7)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->n_2555)).line_), cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->n_2555)).name_)), rt_g_lit(" is not a package", 17)));
}
} else if (((G_NV((*(P114)rt_nil_check(F->y_2556)).kind_) != ((rt_int)8LL)) && (G_NV((*(P114)rt_nil_check(F->y_2556)).kind_) != ((rt_int)9LL)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->n_2555)).line_), cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->n_2555)).name_)), rt_g_lit(" is not a package or a task", 27)));
} else {
F->m_2557 = (*(P114)rt_nil_check(F->y_2556)).members_;
while ((F->m_2557 != NULL)) {
F->old_2559 = f_lookup_396(F->up, (*(P137)rt_nil_check((*(P114)rt_nil_check(F->m_2557)).name_)));
if (((!G_NV((*(P114)rt_nil_check(F->m_2557)).hidden_)) && f_use_visible_979(F->up, F->old_2559))) {
f_copy_sym_967(F->up, F->m_2557, &F->z_2558);
(*(P114)rt_nil_check(F->z_2558)).from_use_ = 1;
f_define_434(F->up, F->z_2558, G_NV((*(P171)rt_nil_check(F->n_2555)).line_));
}
F->m_2557 = (*(P114)rt_nil_check(F->m_2557)).mnext_;
}
L_end_2561: ;
}
F->n_2555 = (*(P171)rt_nil_check(F->n_2555)).next_;
}
L_end_2560: ;
ret_:

  return;
}

static void f_fits_986(struct f_greenc_1fr *up_, P114 y_982, P171 args_983, P119 want_984, int *ok_985) {
  struct f_fits_986fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_982 = y_982;
F->args_983 = args_983;
F->want_984 = want_984;
F->ok_985 = ok_985;
F->pm_2562 = NULL;
F->pm_2562 = (*(P114)rt_nil_check(F->y_982)).params_;
F->a_2563 = NULL;
F->t_2564 = NULL;
F->c_2565 = NULL;
F->v_2566 = NULL;
F->ro_2567 = INT_MIN;
F->saved_2568 = NULL;
F->saved_2568 = F->up->code_133;
F->used_2569 = INT64_MIN;
F->used_2569 = ((rt_int)0LL);
(*F->ok_985) = 1;
F->up->trial_152 = rt_add(G_NV(F->up->trial_152), ((rt_int)1LL));
F->up->code_133 = f_new_buffer_233(F->up);
{
{ rt_frame xf2571;
if (RT_TRY(xf2571)) {
while ((G_NV((*F->ok_985)) && (F->pm_2562 != NULL))) {
F->a_2563 = f_actual_for_937(F->up, F->args_983, F->pm_2562, (*(P114)rt_nil_check(F->y_982)).params_);
if ((F->a_2563 == NULL)) {
(*F->ok_985) = ((*(P1695)rt_nil_check(F->pm_2562)).dflt_ != NULL);
} else {
F->used_2569 = rt_add(G_NV(F->used_2569), ((rt_int)1LL));
if ((((G_NV((*(P171)rt_nil_check(F->a_2563)).flag_) != ((rt_int)0LL)) && (G_NV((*(P171)rt_nil_check(F->a_2563)).flag_) != ((rt_int)4LL))) && (G_NV((*(P171)rt_nil_check(F->a_2563)).flag_) != G_NV((*(P1695)rt_nil_check(F->pm_2562)).mode_)))) {
(*F->ok_985) = 0;
} else if ((G_NV((*(P1695)rt_nil_check(F->pm_2562)).mode_) == ((rt_int)1LL))) {
f_gexpr_739(F->up, F->a_2563, (*(P1695)rt_nil_check(F->pm_2562)).t_, &F->t_2564, &F->v_2566);
(*F->ok_985) = (f_same_416(F->up, F->t_2564, (*(P1695)rt_nil_check(F->pm_2562)).t_) || ((G_NV((*(P119)rt_nil_check(F->t_2564)).kind_) == ((rt_int)10LL)) && (G_NV((*(P119)rt_nil_check((*(P1695)rt_nil_check(F->pm_2562)).t_)).kind_) == ((rt_int)8LL))));
} else {
f_lvalue_695(F->up, F->a_2563, &F->v_2566, &F->t_2564, &F->c_2565, &F->ro_2567);
(*F->ok_985) = f_same_416(F->up, F->t_2564, (*(P1695)rt_nil_check(F->pm_2562)).t_);
}
}
F->pm_2562 = (*(P1695)rt_nil_check(F->pm_2562)).next_;
}
L_end_2573: ;
if ((G_NV(F->used_2569) != f_list_len_291(F->up, F->args_983))) {
(*F->ok_985) = 0;
}
if (((G_NV((*F->ok_985)) && (F->want_984 != NULL)) && (G_NV((*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_982)).result_)).kind_) != ((rt_int)9LL)))) {
(*F->ok_985) = (f_same_416(F->up, (*(P114)rt_nil_check(F->y_982)).result_, F->want_984) || (G_NV((*(P119)rt_nil_check(F->want_984)).kind_) == ((rt_int)9LL)));
}
RT_POP(xf2571);
} else {
RT_POP(xf2571);
int x2572 = rt_xcur;
if (rt_g_aborted()) rt_raise(x2572);
if (0 || x2572 == ex_compile_error_105) {
(*F->ok_985) = 0;
} else {
rt_raise(x2572);
}
}
}

}
L_end_2570: ;
F->up->trial_152 = rt_sub(G_NV(F->up->trial_152), ((rt_int)1LL));
F->up->code_133 = F->saved_2568;
ret_:

  return;
}

static int f_is_builtin_988(struct f_greenc_1fr *up_, rt_gstr n_987) {
  struct f_is_builtin_988fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_987 = cp_rt_gstr(n_987);
F->result_ = (((eq_rt_gstr(F->n_987, rt_g_lit("PUT", 3)) || eq_rt_gstr(F->n_987, rt_g_lit("GET", 3))) || eq_rt_gstr(F->n_987, rt_g_lit("ABS", 3))) || eq_rt_gstr(F->n_987, rt_g_lit("SET_PRIORITY", 12)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_resolve_overload_995(struct f_greenc_1fr *up_, rt_gstr name_989, P171 args_990, int is_stmt_991, P119 want_992, rt_int line_993, P114 *y_994) {
  struct f_resolve_overload_995fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_989 = cp_rt_gstr(name_989);
F->args_990 = args_990;
F->is_stmt_991 = is_stmt_991;
F->want_992 = want_992;
F->line_993 = line_993;
F->y_994 = y_994;
F->z_2574 = NULL;
F->z_2574 = ({ A113 ix2575 = F->up->table_116; ix2575.p[rt_index(f_hash_394(F->up, F->name_989), ix2575.lo, ix2575.hi) - ix2575.lo]; });
F->first_2576 = NULL;
F->n_2577 = INT64_MIN;
F->n_2577 = ((rt_int)0LL);
F->ok_2578 = INT_MIN;
{ rt_int lo2581 = ((rt_int)1LL), hi2582 = ((rt_int)2LL);
for (rt_int it2583 = lo2581; it2583 <= hi2582; it2583++) {
F->pass_2580 = it2583;
F->z_2574 = ({ A113 ix2584 = F->up->table_116; ix2584.p[rt_index(f_hash_394(F->up, F->name_989), ix2584.lo, ix2584.hi) - ix2584.lo]; });
F->n_2577 = ((rt_int)0LL);
while ((F->z_2574 != NULL)) {
if ((eq_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->z_2574)).name_)), F->name_989) && ((G_NV((*(P114)rt_nil_check(F->z_2574)).kind_) == ((rt_int)3LL)) || (G_NV((*(P114)rt_nil_check(F->z_2574)).kind_) == ((rt_int)4LL))))) {
F->n_2577 = rt_add(G_NV(F->n_2577), ((rt_int)1LL));
if ((F->first_2576 == NULL)) {
F->first_2576 = F->z_2574;
}
if (((G_NV((*(P119)rt_nil_check((*(P114)rt_nil_check(F->z_2574)).result_)).kind_) == ((rt_int)9LL)) == F->is_stmt_991)) {
if ((F->pass_2580 == ((rt_int)1LL))) {
f_fits_986(F->up, F->z_2574, F->args_990, F->want_992, &F->ok_2578);
} else {
f_fits_986(F->up, F->z_2574, F->args_990, NULL, &F->ok_2578);
}
if (G_NV(F->ok_2578)) {
(*F->y_994) = F->z_2574;
goto ret_;
}
}
}
F->z_2574 = (*(P114)rt_nil_check(F->z_2574)).chain_;
}
L_end_2585: ;
}
}
L_end_2579: ;
if (f_is_builtin_988(F->up, F->name_989)) {
(*F->y_994) = NULL;
goto ret_;
}
if ((G_NV(F->n_2577) > ((rt_int)1LL))) {
f_fail_232(F->up, F->line_993, cat_rt_gstr(cat_rt_gstr(rt_g_lit("no declaration of ", 18), F->name_989), rt_g_lit(" fits these actual parameters", 29)));
}
(*F->y_994) = F->first_2576;
ret_:

  return;
}

static void f_resolve_member_overload_1003(struct f_greenc_1fr *up_, rt_gstr p_996, rt_gstr name_997, P171 args_998, int is_stmt_999, P119 want_1000, rt_int line_1001, P114 *y_1002) {
  struct f_resolve_member_overload_1003fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_996 = cp_rt_gstr(p_996);
F->name_997 = cp_rt_gstr(name_997);
F->args_998 = args_998;
F->is_stmt_999 = is_stmt_999;
F->want_1000 = want_1000;
F->line_1001 = line_1001;
F->y_1002 = y_1002;
F->pk_2586 = NULL;
F->pk_2586 = f_lookup_path_956(F->up, F->p_996);
F->z_2587 = NULL;
F->n_2588 = INT64_MIN;
F->n_2588 = ((rt_int)0LL);
F->ok_2589 = INT_MIN;
if ((F->pk_2586 == NULL)) {
goto ret_;
}
{ rt_int lo2592 = ((rt_int)1LL), hi2593 = ((rt_int)2LL);
for (rt_int it2594 = lo2592; it2594 <= hi2593; it2594++) {
F->pass_2591 = it2594;
F->z_2587 = (*(P114)rt_nil_check(F->pk_2586)).members_;
F->n_2588 = ((rt_int)0LL);
while ((F->z_2587 != NULL)) {
if (((eq_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->z_2587)).name_)), F->name_997) && ((G_NV((*(P114)rt_nil_check(F->z_2587)).kind_) == ((rt_int)3LL)) || (G_NV((*(P114)rt_nil_check(F->z_2587)).kind_) == ((rt_int)4LL)))) && (!G_NV((*(P114)rt_nil_check(F->z_2587)).hidden_)))) {
F->n_2588 = rt_add(G_NV(F->n_2588), ((rt_int)1LL));
if (((G_NV((*(P119)rt_nil_check((*(P114)rt_nil_check(F->z_2587)).result_)).kind_) == ((rt_int)9LL)) == F->is_stmt_999)) {
if ((F->pass_2591 == ((rt_int)1LL))) {
f_fits_986(F->up, F->z_2587, F->args_998, F->want_1000, &F->ok_2589);
} else {
f_fits_986(F->up, F->z_2587, F->args_998, NULL, &F->ok_2589);
}
if (G_NV(F->ok_2589)) {
(*F->y_1002) = F->z_2587;
goto ret_;
}
}
}
F->z_2587 = (*(P114)rt_nil_check(F->z_2587)).mnext_;
}
L_end_2595: ;
}
}
L_end_2590: ;
if ((G_NV(F->n_2588) > ((rt_int)1LL))) {
f_fail_232(F->up, F->line_1001, cat_rt_gstr(cat_rt_gstr(rt_g_lit("no declaration of ", 18), F->name_997), rt_g_lit(" fits these actual parameters", 29)));
}
ret_:

  return;
}

static void f_user_operator_1009(struct f_greenc_1fr *up_, P171 e_1004, P119 want_1005, P119 *t_1006, P137 *r_1007, int *done_1008) {
  struct f_user_operator_1009fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1004 = e_1004;
F->want_1005 = want_1005;
F->t_1006 = t_1006;
F->r_1007 = r_1007;
F->done_1008 = done_1008;
F->op_2596 = NULL;
F->op_2596 = (*(P171)rt_nil_check(F->e_1004)).name_;
F->negate_2597 = INT_MIN;
F->negate_2597 = 0;
F->y_2598 = NULL;
F->call_2599 = NULL;
F->fname_2600 = NULL;
F->l_2601 = NULL;
F->rt_2602 = NULL;
F->ok_2603 = INT_MIN;
(*F->done_1008) = 0;
if (eq_rt_gstr((*(P137)rt_nil_check(F->op_2596)), rt_g_lit("/=", 2))) {
F->op_2596 = f_mk_211(F->up, rt_g_lit("=", 1));
F->negate_2597 = 1;
}
if ((f_lookup_396(F->up, (*(P137)rt_nil_check(F->op_2596))) == NULL)) {
goto ret_;
}
F->l_2601 = f_nn_285(F->up, G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_1004)).a_)).kind_), G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_1004)).a_)).line_));
as_R172(&(*(P171)rt_nil_check(F->l_2601)), (*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_1004)).a_)));
(*(P171)rt_nil_check(F->l_2601)).next_ = NULL;
(*(P171)rt_nil_check(F->l_2601)).formal_ = NULL;
(*(P171)rt_nil_check(F->l_2601)).flag_ = ((rt_int)0LL);
if ((G_NV((*(P171)rt_nil_check(F->e_1004)).kind_) == ((rt_int)7LL))) {
F->rt_2602 = f_nn_285(F->up, G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_1004)).b_)).kind_), G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_1004)).b_)).line_));
as_R172(&(*(P171)rt_nil_check(F->rt_2602)), (*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_1004)).b_)));
(*(P171)rt_nil_check(F->rt_2602)).next_ = NULL;
(*(P171)rt_nil_check(F->rt_2602)).formal_ = NULL;
(*(P171)rt_nil_check(F->rt_2602)).flag_ = ((rt_int)0LL);
(*(P171)rt_nil_check(F->l_2601)).next_ = F->rt_2602;
}
F->y_2598 = ({ A113 ix2604 = F->up->table_116; ix2604.p[rt_index(f_hash_394(F->up, (*(P137)rt_nil_check(F->op_2596))), ix2604.lo, ix2604.hi) - ix2604.lo]; });
while ((F->y_2598 != NULL)) {
if ((eq_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2598)).name_)), (*(P137)rt_nil_check(F->op_2596))) && (G_NV((*(P114)rt_nil_check(F->y_2598)).kind_) == ((rt_int)3LL)))) {
f_fits_986(F->up, F->y_2598, F->l_2601, NULL, &F->ok_2603);
if (G_NV(F->ok_2603)) {
F->fname_2600 = f_nn_285(F->up, ((rt_int)5LL), G_NV((*(P171)rt_nil_check(F->e_1004)).line_));
(*(P171)rt_nil_check(F->fname_2600)).name_ = F->op_2596;
F->call_2599 = f_nn_285(F->up, ((rt_int)8LL), G_NV((*(P171)rt_nil_check(F->e_1004)).line_));
(*(P171)rt_nil_check(F->call_2599)).a_ = F->fname_2600;
(*(P171)rt_nil_check(F->call_2599)).b_ = F->l_2601;
F->up->call_want_199 = NULL;
f_gcall_with_947(F->up, F->call_2599, F->y_2598, &(*F->t_1006), &(*F->r_1007));
if (G_NV(F->negate_2597)) {
(*F->r_1007) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!", 2), (*(P137)rt_nil_check((*F->r_1007)))), one_rt_gstr(41)));
}
(*F->done_1008) = 1;
goto ret_;
}
}
F->y_2598 = (*(P114)rt_nil_check(F->y_2598)).chain_;
}
L_end_2605: ;
ret_:

  return;
}

static void f_task_p_1011(struct f_greenc_1fr *up_, P171 *res_1010) {
  struct f_task_p_1011fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1010 = res_1010;
F->x_2606 = NULL;
F->r_2607 = NULL;
F->line_2608 = INT64_MIN;
F->line_2608 = f_cur_line_292(F->up);
f_expect_kw_307(F->up, rt_g_lit("TASK", 4));
if (f_at_kw_294(F->up, rt_g_lit("BODY", 4))) {
f_skip_305(F->up);
F->x_2606 = f_nn_285(F->up, ((rt_int)51LL), G_NV(F->line_2608));
f_expect_id_311(F->up, &(*(P171)rt_nil_check(F->x_2606)).name_);
f_expect_kw_307(F->up, rt_g_lit("IS", 2));
f_body_part_373(F->up, F->x_2606);
} else {
F->x_2606 = f_nn_285(F->up, ((rt_int)50LL), G_NV(F->line_2608));
f_expect_id_311(F->up, &(*(P171)rt_nil_check(F->x_2606)).name_);
if (((f_at_kw_294(F->up, rt_g_lit("IS", 2)) && (f_kind_at_300(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_302(F->up, ((rt_int)1LL)), rt_g_lit("NEW", 3)))) {
f_instantiation_1144(F->up, F->x_2606, &(*F->res_1010));
goto ret_;
}
if (f_at_op_296(F->up, rt_g_lit("(", 1))) {
f_skip_305(F->up);
f_discrete_range_p_347(F->up, &(*(P171)rt_nil_check(F->x_2606)).a_);
if ((G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->x_2606)).a_)).kind_) == ((rt_int)5LL))) {
F->r_2607 = f_nn_285(F->up, ((rt_int)80LL), G_NV(F->line_2608));
(*(P171)rt_nil_check(F->r_2607)).name_ = (*(P171)rt_nil_check((*(P171)rt_nil_check(F->x_2606)).a_)).name_;
(*(P171)rt_nil_check(F->x_2606)).a_ = F->r_2607;
}
f_expect_op_309(F->up, rt_g_lit(")", 1));
}
if (f_at_kw_294(F->up, rt_g_lit("IS", 2))) {
f_skip_305(F->up);
f_decl_part_361(F->up, &(*(P171)rt_nil_check(F->x_2606)).c_);
if (f_at_kw_294(F->up, rt_g_lit("PRIVATE", 7))) {
f_skip_305(F->up);
f_decl_part_361(F->up, &(*(P171)rt_nil_check(F->x_2606)).d_);
}
f_expect_kw_307(F->up, rt_g_lit("END", 3));
}
}
if (f_at_kind_298(F->up, ((rt_int)1LL))) {
f_skip_305(F->up);
}
f_expect_op_309(F->up, rt_g_lit(";", 1));
(*F->res_1010) = F->x_2606;
ret_:

  return;
}

static void f_entry_p_1013(struct f_greenc_1fr *up_, P171 *res_1012) {
  struct f_entry_p_1013fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1012 = res_1012;
F->x_2609 = NULL;
f_expect_kw_307(F->up, rt_g_lit("ENTRY", 5));
F->x_2609 = f_nn_285(F->up, ((rt_int)52LL), f_cur_line_292(F->up));
f_expect_id_311(F->up, &(*(P171)rt_nil_check(F->x_2609)).name_);
if ((f_at_op_296(F->up, rt_g_lit("(", 1)) && (!((f_kind_at_300(F->up, ((rt_int)1LL)) == ((rt_int)1LL)) && (eq_rt_gstr(f_text_at_302(F->up, ((rt_int)2LL)), rt_g_lit(":", 1)) || eq_rt_gstr(f_text_at_302(F->up, ((rt_int)2LL)), rt_g_lit(",", 1))))))) {
f_skip_305(F->up);
if (((f_at_kind_298(F->up, ((rt_int)1LL)) && (f_kind_at_300(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && eq_rt_gstr(f_text_at_302(F->up, ((rt_int)1LL)), rt_g_lit(")", 1)))) {
f_subtype_ind_349(F->up, &(*(P171)rt_nil_check(F->x_2609)).b_);
} else {
f_discrete_range_p_347(F->up, &(*(P171)rt_nil_check(F->x_2609)).b_);
}
f_expect_op_309(F->up, rt_g_lit(")", 1));
}
if (f_at_op_296(F->up, rt_g_lit("(", 1))) {
f_formal_part_367(F->up, &(*(P171)rt_nil_check(F->x_2609)).a_);
}
f_expect_op_309(F->up, rt_g_lit(";", 1));
(*F->res_1012) = F->x_2609;
ret_:

  return;
}

static void f_accept_p_1015(struct f_greenc_1fr *up_, P171 *res_1014) {
  struct f_accept_p_1015fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1014 = res_1014;
F->x_2610 = NULL;
f_expect_kw_307(F->up, rt_g_lit("ACCEPT", 6));
F->x_2610 = f_nn_285(F->up, ((rt_int)34LL), f_cur_line_292(F->up));
f_expect_id_311(F->up, &(*(P171)rt_nil_check(F->x_2610)).name_);
if ((f_at_op_296(F->up, rt_g_lit("(", 1)) && (!((f_kind_at_300(F->up, ((rt_int)1LL)) == ((rt_int)1LL)) && (eq_rt_gstr(f_text_at_302(F->up, ((rt_int)2LL)), rt_g_lit(":", 1)) || eq_rt_gstr(f_text_at_302(F->up, ((rt_int)2LL)), rt_g_lit(",", 1))))))) {
f_skip_305(F->up);
f_expr_322(F->up, &(*(P171)rt_nil_check(F->x_2610)).c_);
f_expect_op_309(F->up, rt_g_lit(")", 1));
}
if (f_at_op_296(F->up, rt_g_lit("(", 1))) {
f_formal_part_367(F->up, &(*(P171)rt_nil_check(F->x_2610)).a_);
}
if (f_at_kw_294(F->up, rt_g_lit("DO", 2))) {
f_skip_305(F->up);
(*(P171)rt_nil_check(F->x_2610)).flag_ = ((rt_int)1LL);
f_statements_380(F->up, &(*(P171)rt_nil_check(F->x_2610)).b_);
f_expect_kw_307(F->up, rt_g_lit("END", 3));
if (f_at_kind_298(F->up, ((rt_int)1LL))) {
f_skip_305(F->up);
}
}
f_expect_op_309(F->up, rt_g_lit(";", 1));
(*F->res_1014) = F->x_2610;
ret_:

  return;
}

static void f_delay_p_1017(struct f_greenc_1fr *up_, P171 *res_1016) {
  struct f_delay_p_1017fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1016 = res_1016;
F->x_2611 = NULL;
f_expect_kw_307(F->up, rt_g_lit("DELAY", 5));
F->x_2611 = f_nn_285(F->up, ((rt_int)32LL), f_cur_line_292(F->up));
f_simple_expr_330(F->up, &(*(P171)rt_nil_check(F->x_2611)).a_);
f_expect_op_309(F->up, rt_g_lit(";", 1));
(*F->res_1016) = F->x_2611;
ret_:

  return;
}

static void f_designators_1019(struct f_greenc_1fr *up_, P171 *res_1018) {
  struct f_designators_1019fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1018 = res_1018;
F->head_2612 = NULL;
F->tail_2613 = NULL;
F->n_2614 = NULL;
for (;;) {
f_name_p_343(F->up, &F->n_2614);
f_append_289(F->up, &F->head_2612, &F->tail_2613, F->n_2614);
if ((!f_at_op_296(F->up, rt_g_lit(",", 1)))) {
goto L_end_2615;
}
f_skip_305(F->up);
}
L_end_2615: ;
f_expect_op_309(F->up, rt_g_lit(";", 1));
(*F->res_1018) = F->head_2612;
ret_:

  return;
}

static void f_parse_task_statement_1021(struct f_greenc_1fr *up_, P171 *res_1020) {
  struct f_parse_task_statement_1021fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1020 = res_1020;
F->x_2616 = NULL;
F->alt_2617 = NULL;
F->head_2618 = NULL;
F->tail_2619 = NULL;
F->line_2620 = INT64_MIN;
F->line_2620 = f_cur_line_292(F->up);
(*F->res_1020) = NULL;
if (f_at_kw_294(F->up, rt_g_lit("INITIATE", 8))) {
f_skip_305(F->up);
F->x_2616 = f_nn_285(F->up, ((rt_int)33LL), G_NV(F->line_2620));
f_designators_1019(F->up, &(*(P171)rt_nil_check(F->x_2616)).a_);
(*F->res_1020) = F->x_2616;
} else if (f_at_kw_294(F->up, rt_g_lit("ABORT", 5))) {
f_skip_305(F->up);
F->x_2616 = f_nn_285(F->up, ((rt_int)36LL), G_NV(F->line_2620));
f_designators_1019(F->up, &(*(P171)rt_nil_check(F->x_2616)).a_);
(*F->res_1020) = F->x_2616;
} else if (f_at_kw_294(F->up, rt_g_lit("DELAY", 5))) {
f_delay_p_1017(F->up, &(*F->res_1020));
} else if (f_at_kw_294(F->up, rt_g_lit("ACCEPT", 6))) {
f_accept_p_1015(F->up, &(*F->res_1020));
} else if (f_at_kw_294(F->up, rt_g_lit("SELECT", 6))) {
f_skip_305(F->up);
F->x_2616 = f_nn_285(F->up, ((rt_int)35LL), G_NV(F->line_2620));
for (;;) {
F->alt_2617 = f_nn_285(F->up, ((rt_int)64LL), f_cur_line_292(F->up));
if (f_at_kw_294(F->up, rt_g_lit("WHEN", 4))) {
f_skip_305(F->up);
f_expr_322(F->up, &(*(P171)rt_nil_check(F->alt_2617)).a_);
f_expect_op_309(F->up, rt_g_lit("=>", 2));
}
if (f_at_kw_294(F->up, rt_g_lit("ACCEPT", 6))) {
f_accept_p_1015(F->up, &(*(P171)rt_nil_check(F->alt_2617)).b_);
} else if (f_at_kw_294(F->up, rt_g_lit("DELAY", 5))) {
f_delay_p_1017(F->up, &(*(P171)rt_nil_check(F->alt_2617)).b_);
} else {
f_perror_304(F->up, rt_g_lit("a select alternative starts with accept or delay", 48));
}
f_statements_380(F->up, &(*(P171)rt_nil_check(F->alt_2617)).c_);
f_append_289(F->up, &F->head_2618, &F->tail_2619, F->alt_2617);
if ((!f_at_kw_294(F->up, rt_g_lit("OR", 2)))) {
goto L_end_2621;
}
f_skip_305(F->up);
}
L_end_2621: ;
if (f_at_kw_294(F->up, rt_g_lit("ELSE", 4))) {
f_skip_305(F->up);
(*(P171)rt_nil_check(F->x_2616)).flag_ = ((rt_int)1LL);
f_statements_380(F->up, &(*(P171)rt_nil_check(F->x_2616)).b_);
}
f_expect_kw_307(F->up, rt_g_lit("END", 3));
f_expect_kw_307(F->up, rt_g_lit("SELECT", 6));
f_expect_op_309(F->up, rt_g_lit(";", 1));
(*(P171)rt_nil_check(F->x_2616)).a_ = F->head_2618;
(*F->res_1020) = F->x_2616;
}
ret_:

  return;
}

static void f_path_at_1025(struct f_greenc_1fr *up_, rt_int level_1022, rt_gstr field_1023, P137 *r_1024) {
  struct f_path_at_1025fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->level_1022 = level_1022;
F->field_1023 = cp_rt_gstr(field_1023);
F->r_1024 = r_1024;
if ((F->level_1022 <= ((rt_int)0LL))) {
(*F->r_1024) = f_mk_211(F->up, F->field_1023);
goto ret_;
}
(*F->r_1024) = f_mk_211(F->up, rt_g_lit("F", 1));
{ rt_int lo2624 = ((rt_int)1LL), hi2625 = rt_sub(G_NV(F->up->cur_level_136), F->level_1022);
for (rt_int it2626 = lo2624; it2626 <= hi2625; it2626++) {
F->i_2623 = it2626;
(*F->r_1024) = f_mk_211(F->up, cat_rt_gstr((*(P137)rt_nil_check((*F->r_1024))), rt_g_lit("->up", 4)));
}
}
L_end_2622: ;
(*F->r_1024) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check((*F->r_1024))), rt_g_lit("->", 2)), F->field_1023));
ret_:

  return;
}

static int f_is_task_name_1027(struct f_greenc_1fr *up_, rt_gstr n_1026) {
  struct f_is_task_name_1027fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1026 = cp_rt_gstr(n_1026);
F->y_2627 = NULL;
F->y_2627 = f_lookup_396(F->up, F->n_1026);
if ((!(F->y_2627 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P114)rt_nil_check(F->y_2627)).kind_) == ((rt_int)9LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_task_of_1031(struct f_greenc_1fr *up_, P171 e_1028, P114 *y_1029, P171 *ix_1030) {
  struct f_task_of_1031fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1028 = e_1028;
F->y_1029 = y_1029;
F->ix_1030 = ix_1030;
F->n_2628 = NULL;
F->n_2628 = F->e_1028;
(*F->ix_1030) = NULL;
if ((G_NV((*(P171)rt_nil_check(F->e_1028)).kind_) == ((rt_int)8LL))) {
F->n_2628 = (*(P171)rt_nil_check(F->e_1028)).a_;
(*F->ix_1030) = (*(P171)rt_nil_check(F->e_1028)).b_;
}
if ((G_NV((*(P171)rt_nil_check(F->n_2628)).kind_) != ((rt_int)5LL))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_1028)).line_), rt_g_lit("a task name is required", 23));
}
(*F->y_1029) = f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->n_2628)).name_)));
if ((((*F->y_1029) == NULL) || (G_NV((*(P114)rt_nil_check((*F->y_1029))).kind_) != ((rt_int)9LL)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_1028)).line_), cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->n_2628)).name_)), rt_g_lit(" is not a task", 14)));
}
if ((((*F->ix_1030) != NULL) && ((*(P114)rt_nil_check((*F->y_1029))).c_ == NULL))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_1028)).line_), cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->n_2628)).name_)), rt_g_lit(" is not a task family", 21)));
}
ret_:

  return;
}

static void f_own_index_1033(struct f_greenc_1fr *up_, P137 *r_1032) {
  struct f_own_index_1033fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_1032 = r_1032;
F->y_2629 = NULL;
F->y_2629 = f_lookup_396(F->up, rt_g_lit("INDEX_", 6));
if ((F->y_2629 == NULL)) {
f_fail_232(F->up, ((rt_int)0LL), rt_g_lit("not inside the body of a task family", 36));
}
f_access_of_676(F->up, F->y_2629, &(*F->r_1032));
ret_:

  return;
}

static void f_member_1038(struct f_greenc_1fr *up_, P114 y_1034, rt_gstr arr_1035, rt_gstr i_1036, P137 *r_1037) {
  struct f_member_1038fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1034 = y_1034;
F->arr_1035 = cp_rt_gstr(arr_1035);
F->i_1036 = cp_rt_gstr(i_1036);
F->r_1037 = r_1037;
F->lo_2630 = NULL;
F->hi_2631 = NULL;
f_path_at_1025(F->up, G_NV((*(P114)rt_nil_check(F->y_1034)).level_), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1034)).cname_)), rt_g_lit("lo", 2)), &F->lo_2630);
f_path_at_1025(F->up, G_NV((*(P114)rt_nil_check(F->y_1034)).level_), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1034)).cname_)), rt_g_lit("hi", 2)), &F->hi_2631);
(*F->r_1037) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->arr_1035, rt_g_lit("[rt_index(", 10)), F->i_1036), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->lo_2630))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->hi_2631))), rt_g_lit(") - ", 4)), (*(P137)rt_nil_check(F->lo_2630))), one_rt_gstr(93)));
ret_:

  return;
}

static void f_act_path_1041(struct f_greenc_1fr *up_, P114 y_1039, P137 *r_1040) {
  struct f_act_path_1041fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1039 = y_1039;
F->r_1040 = r_1040;
F->i_2632 = NULL;
f_path_at_1025(F->up, G_NV((*(P114)rt_nil_check(F->y_1039)).level_), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1039)).cname_)), rt_g_lit("act", 3)), &(*F->r_1040));
if (((*(P114)rt_nil_check(F->y_1039)).c_ != NULL)) {
f_own_index_1033(F->up, &F->i_2632);
f_member_1038(F->up, F->y_1039, (*(P137)rt_nil_check((*F->r_1040))), (*(P137)rt_nil_check(F->i_2632)), &(*F->r_1040));
}
ret_:

  return;
}

static void f_act_path_i_1045(struct f_greenc_1fr *up_, P114 y_1042, rt_gstr i_1043, P137 *r_1044) {
  struct f_act_path_i_1045fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1042 = y_1042;
F->i_1043 = cp_rt_gstr(i_1043);
F->r_1044 = r_1044;
f_path_at_1025(F->up, G_NV((*(P114)rt_nil_check(F->y_1042)).level_), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1042)).cname_)), rt_g_lit("act", 3)), &(*F->r_1044));
f_member_1038(F->up, F->y_1042, (*(P137)rt_nil_check((*F->r_1044))), F->i_1043, &(*F->r_1044));
ret_:

  return;
}

static void f_entry_path_1049(struct f_greenc_1fr *up_, P114 y_1046, rt_gstr i_1047, P137 *r_1048) {
  struct f_entry_path_1049fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1046 = y_1046;
F->i_1047 = cp_rt_gstr(i_1047);
F->r_1048 = r_1048;
F->own_2633 = NULL;
f_path_at_1025(F->up, G_NV((*(P114)rt_nil_check(F->y_1046)).level_), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1046)).access_path_)), &(*F->r_1048));
if (((((*(P114)rt_nil_check(F->y_1046)).members_ != NULL) && ((*(P114)rt_nil_check((*(P114)rt_nil_check(F->y_1046)).members_)).c_ != NULL)) && (!G_NV((*(P114)rt_nil_check(F->y_1046)).ro_)))) {
if ((({ rt_gstr at2634 = F->i_1047; at2634.hi >= at2634.lo ? at2634.hi - at2634.lo + 1 : (rt_int)0; }) == ((rt_int)0LL))) {
f_own_index_1033(F->up, &F->own_2633);
f_member_1038(F->up, (*(P114)rt_nil_check(F->y_1046)).members_, (*(P137)rt_nil_check((*F->r_1048))), (*(P137)rt_nil_check(F->own_2633)), &(*F->r_1048));
} else {
f_member_1038(F->up, (*(P114)rt_nil_check(F->y_1046)).members_, (*(P137)rt_nil_check((*F->r_1048))), F->i_1047, &(*F->r_1048));
}
}
ret_:

  return;
}

static void f_declare_slot_1052(struct f_greenc_1fr *up_, rt_gstr ctype_name_1050, rt_gstr field_1051) {
  struct f_declare_slot_1052fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->ctype_name_1050 = cp_rt_gstr(ctype_name_1050);
F->field_1051 = cp_rt_gstr(field_1051);
if (G_NV(F->up->in_func_135)) {
f_put_to_236(F->up, F->up->fields_buf_134, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), F->ctype_name_1050), one_rt_gstr(32)), F->field_1051), one_rt_gstr(59)));
} else {
f_put_to_236(F->up, F->up->out_globals_129, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), F->ctype_name_1050), one_rt_gstr(32)), F->field_1051), one_rt_gstr(59)));
}
ret_:

  return;
}

static void f_task_decl_1054(struct f_greenc_1fr *up_, P171 e_1053) {
  struct f_task_decl_1054fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1053 = e_1053;
if ((G_NV((*(P171)rt_nil_check(F->e_1053)).kind_) == ((rt_int)50LL))) {
f_task_spec_1066(F->up, F->e_1053);
} else if ((G_NV((*(P171)rt_nil_check(F->e_1053)).kind_) == ((rt_int)51LL))) {
f_task_body_1070(F->up, F->e_1053);
} else if ((G_NV((*(P171)rt_nil_check(F->e_1053)).kind_) == ((rt_int)52LL))) {
f_entry_decl_1068(F->up, F->e_1053);
} else {
f_generic_decl_1146(F->up, F->e_1053);
}
ret_:

  return;
}

static void f_family_arg_struct_1055(struct f_greenc_1fr *up_) {
  struct f_family_arg_struct_1055fr *F = rt_alloc(sizeof *F);
F->up = up_;
if ((!G_NV(F->up->famarg_done_188))) {
F->up->famarg_done_188 = 1;
f_put_to_236(F->up, F->up->out_types_125, rt_g_lit("struct rt_famarg { void *up; rt_int i; };", 41));
}
ret_:

  return;
}

static void f_family_bounds_1059(struct f_greenc_1fr *up_, P171 b_1056, P114 y_1057, P137 x_1058) {
  struct f_family_bounds_1059fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_1056 = b_1056;
F->y_1057 = y_1057;
F->x_1058 = x_1058;
F->lo_2635 = NULL;
F->hi_2636 = NULL;
F->v_2637 = NULL;
F->d_2638 = NULL;
F->vt_2639 = NULL;
F->c_2640 = NULL;
(*(P114)rt_nil_check(F->y_1057)).c_ = f_new_cons_442(F->up);
f_declare_slot_1052(F->up, rt_g_lit("rt_entry *", 10), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1057)).access_path_)));
f_declare_slot_1052(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1057)).cname_)), rt_g_lit("flo", 3)));
f_declare_slot_1052(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1057)).cname_)), rt_g_lit("fhi", 3)));
f_path_at_1025(F->up, G_NV((*(P114)rt_nil_check(F->y_1057)).level_), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1057)).cname_)), rt_g_lit("flo", 3)), &F->lo_2635);
f_path_at_1025(F->up, G_NV((*(P114)rt_nil_check(F->y_1057)).level_), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1057)).cname_)), rt_g_lit("fhi", 3)), &F->hi_2636);
f_discrete_bounds_491(F->up, F->b_1056, NULL, &F->vt_2639, &F->v_2637, &F->d_2638);
(*(P114)rt_nil_check(F->y_1057)).t_ = F->vt_2639;
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->lo_2635)), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->v_2637))), rt_g_lit("; ", 2)), (*(P137)rt_nil_check(F->hi_2636))), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->d_2638))), one_rt_gstr(59)));
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->x_1058)), rt_g_lit(" = rt_alloc(sizeof(rt_entry) * (size_t)(", 40)), (*(P137)rt_nil_check(F->hi_2636))), rt_g_lit(" >= ", 4)), (*(P137)rt_nil_check(F->lo_2635))), rt_g_lit(" \? ", 3)), (*(P137)rt_nil_check(F->hi_2636))), rt_g_lit(" - ", 3)), (*(P137)rt_nil_check(F->lo_2635))), rt_g_lit(" + 1 : 1));", 11)));
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = 0; k_ <= ", 26), (*(P137)rt_nil_check(F->hi_2636))), rt_g_lit(" - ", 3)), (*(P137)rt_nil_check(F->lo_2635))), rt_g_lit("; k_++) rt_entry_init(&", 23)), (*(P137)rt_nil_check(F->x_1058))), rt_g_lit("[k_]);", 6)));
ret_:

  return;
}

static void f_entry_family_slot_1064(struct f_greenc_1fr *up_, P114 y_1060, rt_gstr base_1061, rt_gstr i_1062, P137 *r_1063) {
  struct f_entry_family_slot_1064fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1060 = y_1060;
F->base_1061 = cp_rt_gstr(base_1061);
F->i_1062 = cp_rt_gstr(i_1062);
F->r_1063 = r_1063;
F->lo_2641 = NULL;
F->hi_2642 = NULL;
f_path_at_1025(F->up, G_NV((*(P114)rt_nil_check(F->y_1060)).level_), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1060)).cname_)), rt_g_lit("flo", 3)), &F->lo_2641);
f_path_at_1025(F->up, G_NV((*(P114)rt_nil_check(F->y_1060)).level_), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1060)).cname_)), rt_g_lit("fhi", 3)), &F->hi_2642);
(*F->r_1063) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->base_1061, rt_g_lit("[rt_index(", 10)), F->i_1062), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->lo_2641))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->hi_2642))), rt_g_lit(") - ", 4)), (*(P137)rt_nil_check(F->lo_2641))), one_rt_gstr(93)));
ret_:

  return;
}

static void f_task_spec_1066(struct f_greenc_1fr *up_, P171 e_1065) {
  struct f_task_spec_1066fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1065 = e_1065;
F->has_procs_2643 = INT_MIN;
F->has_procs_2643 = 0;
F->saved_defer_2644 = INT_MIN;
F->fields_2645 = NULL;
F->ct_2646 = NULL;
F->pm_2647 = NULL;
F->fp_2648 = NULL;
F->flo_2649 = NULL;
F->fhi_2650 = NULL;
F->y_2651 = NULL;
F->m_2652 = NULL;
F->z_2653 = NULL;
F->saved_2654 = NULL;
F->saved_2654 = F->up->cur_task_186;
F->d_2655 = NULL;
F->v_2656 = NULL;
F->p_2657 = NULL;
F->p2_2658 = NULL;
F->vt_2659 = NULL;
F->r_2660 = NULL;
F->y_2651 = f_new_sym_439(F->up, ((rt_int)9LL), (*(P171)rt_nil_check(F->e_1065)).name_);
f_new_name_214(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("t_", 2), f_lower_s_222(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_1065)).name_)))), one_rt_gstr(95)), &(*(P114)rt_nil_check(F->y_2651)).cname_);
(*(P114)rt_nil_check(F->y_2651)).decl_ = F->e_1065;
if (G_NV(F->up->in_func_135)) {
(*(P114)rt_nil_check(F->y_2651)).level_ = G_NV(F->up->cur_level_136);
}
(*(P114)rt_nil_check(F->y_2651)).access_path_ = (*(P114)rt_nil_check(F->y_2651)).cname_;
f_declare_slot_1052(F->up, rt_g_lit("rt_taskdecl", 11), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2651)).cname_)), rt_g_lit("decl", 4)));
if (((*(P171)rt_nil_check(F->e_1065)).a_ != NULL)) {
(*(P114)rt_nil_check(F->y_2651)).c_ = f_new_cons_442(F->up);
f_declare_slot_1052(F->up, rt_g_lit("rt_act *", 8), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2651)).cname_)), rt_g_lit("act", 3)));
f_declare_slot_1052(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2651)).cname_)), rt_g_lit("lo", 2)));
f_declare_slot_1052(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2651)).cname_)), rt_g_lit("hi", 2)));
f_discrete_bounds_491(F->up, (*(P171)rt_nil_check(F->e_1065)).a_, NULL, &F->vt_2659, &F->v_2656, &F->d_2655);
(*(P114)rt_nil_check(F->y_2651)).t_ = F->vt_2659;
f_path_at_1025(F->up, G_NV((*(P114)rt_nil_check(F->y_2651)).level_), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2651)).cname_)), rt_g_lit("lo", 2)), &F->p_2657);
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->p_2657)), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->v_2656))), one_rt_gstr(59)));
f_path_at_1025(F->up, G_NV((*(P114)rt_nil_check(F->y_2651)).level_), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2651)).cname_)), rt_g_lit("hi", 2)), &F->p2_2658);
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->p2_2658)), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->d_2655))), one_rt_gstr(59)));
f_path_at_1025(F->up, G_NV((*(P114)rt_nil_check(F->y_2651)).level_), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2651)).cname_)), rt_g_lit("act", 3)), &F->v_2656);
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->v_2656)), rt_g_lit(" = rt_alloc(sizeof(rt_act) * (size_t)(", 38)), (*(P137)rt_nil_check(F->p2_2658))), rt_g_lit(" >= ", 4)), (*(P137)rt_nil_check(F->p_2657))), rt_g_lit(" \? ", 3)), (*(P137)rt_nil_check(F->p2_2658))), rt_g_lit(" - ", 3)), (*(P137)rt_nil_check(F->p_2657))), rt_g_lit(" + 1 : 1));", 11)));
f_family_arg_struct_1055(F->up);
} else {
f_declare_slot_1052(F->up, rt_g_lit("rt_act", 6), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2651)).cname_)), rt_g_lit("act", 3)));
}
f_put_to_236(F->up, F->up->out_protos_128, cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2651)).cname_))), rt_g_lit("run(void *a);", 13)));
if ((!G_NV(F->up->in_func_135))) {
f_put_to_236(F->up, F->up->out_awaits_193, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  rt_await_decl(&", 17), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2651)).cname_))), rt_g_lit("decl);", 6)));
}
f_open_scope_435(F->up);
F->up->cur_task_186 = F->y_2651;
F->saved_defer_2644 = G_NV(F->up->defer_entry_structs_192);
F->up->defer_entry_structs_192 = 1;
f_decl_elements_618(F->up, (*(P171)rt_nil_check(F->e_1065)).c_);
f_decl_elements_618(F->up, (*(P171)rt_nil_check(F->e_1065)).d_);
F->up->defer_entry_structs_192 = G_NV(F->saved_defer_2644);
F->m_2652 = F->up->scope_stack_118;
while (((F->m_2652 != NULL) && (G_NV((*(P114)rt_nil_check(F->m_2652)).depth_) == G_NV(F->up->depth_117)))) {
if (((G_NV((*(P114)rt_nil_check(F->m_2652)).kind_) == ((rt_int)10LL)) && (!G_NV((*(P114)rt_nil_check(F->m_2652)).from_use_)))) {
F->fields_2645 = f_mk_211(F->up, rt_g_lit(" int dummy_;", 12));
F->pm_2647 = (*(P114)rt_nil_check(F->m_2652)).params_;
while ((F->pm_2647 != NULL)) {
f_ctype_461(F->up, (*(P1695)rt_nil_check(F->pm_2647)).t_, &F->ct_2646);
if ((G_NV((*(P1695)rt_nil_check(F->pm_2647)).mode_) == ((rt_int)1LL))) {
F->fields_2645 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->fields_2645)), one_rt_gstr(32)), (*(P137)rt_nil_check(F->ct_2646))), one_rt_gstr(32)), (*(P137)rt_nil_check((*(P1695)rt_nil_check(F->pm_2647)).cfield_))), one_rt_gstr(59)));
} else {
F->fields_2645 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->fields_2645)), one_rt_gstr(32)), (*(P137)rt_nil_check(F->ct_2646))), rt_g_lit(" *", 2)), (*(P137)rt_nil_check((*(P1695)rt_nil_check(F->pm_2647)).cfield_))), one_rt_gstr(59)));
}
F->pm_2647 = (*(P1695)rt_nil_check(F->pm_2647)).next_;
}
L_end_2662: ;
f_put_to_236(F->up, F->up->out_types_125, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->m_2652)).cname_))), rt_g_lit("p {", 3)), (*(P137)rt_nil_check(F->fields_2645))), rt_g_lit(" };", 3)));
}
F->m_2652 = (*(P114)rt_nil_check(F->m_2652)).stack_;
}
L_end_2661: ;
F->m_2652 = F->up->scope_stack_118;
while (((F->m_2652 != NULL) && (G_NV((*(P114)rt_nil_check(F->m_2652)).depth_) == G_NV(F->up->depth_117)))) {
if ((((G_NV((*(P114)rt_nil_check(F->m_2652)).kind_) == ((rt_int)3LL)) || (G_NV((*(P114)rt_nil_check(F->m_2652)).kind_) == ((rt_int)4LL))) && (!G_NV((*(P114)rt_nil_check(F->m_2652)).from_use_)))) {
if (((!G_NV(F->has_procs_2643)) && ((*(P114)rt_nil_check(F->y_2651)).c_ != NULL))) {
f_declare_slot_1052(F->up, rt_g_lit("void **", 7), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2651)).cname_)), rt_g_lit("frames", 6)));
f_path_at_1025(F->up, G_NV((*(P114)rt_nil_check(F->y_2651)).level_), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2651)).cname_)), rt_g_lit("frames", 6)), &F->fp_2648);
f_path_at_1025(F->up, G_NV((*(P114)rt_nil_check(F->y_2651)).level_), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2651)).cname_)), rt_g_lit("lo", 2)), &F->flo_2649);
f_path_at_1025(F->up, G_NV((*(P114)rt_nil_check(F->y_2651)).level_), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2651)).cname_)), rt_g_lit("hi", 2)), &F->fhi_2650);
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->fp_2648)), rt_g_lit(" = rt_alloc(sizeof(void *) * (size_t)(", 38)), (*(P137)rt_nil_check(F->fhi_2650))), rt_g_lit(" >= ", 4)), (*(P137)rt_nil_check(F->flo_2649))), rt_g_lit(" \? ", 3)), (*(P137)rt_nil_check(F->fhi_2650))), rt_g_lit(" - ", 3)), (*(P137)rt_nil_check(F->flo_2649))), rt_g_lit(" + 1 : 1));", 11)));
F->has_procs_2643 = 1;
} else if ((!G_NV(F->has_procs_2643))) {
f_declare_slot_1052(F->up, rt_g_lit("void *", 6), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2651)).cname_)), rt_g_lit("frame", 5)));
f_path_at_1025(F->up, G_NV((*(P114)rt_nil_check(F->y_2651)).level_), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2651)).cname_)), rt_g_lit("frame", 5)), &F->fp_2648);
f_emit_238(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->fp_2648)), rt_g_lit(" = NULL;", 8)));
F->has_procs_2643 = 1;
}
if (((*(P114)rt_nil_check(F->y_2651)).c_ != NULL)) {
(*(P114)rt_nil_check(F->m_2652)).access_path_ = f_mk_211(F->up, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2651)).cname_)), rt_g_lit("frames", 6)));
} else {
(*(P114)rt_nil_check(F->m_2652)).access_path_ = f_mk_211(F->up, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2651)).cname_)), rt_g_lit("frame", 5)));
}
(*(P114)rt_nil_check(F->m_2652)).members_ = F->y_2651;
}
f_copy_sym_967(F->up, F->m_2652, &F->z_2653);
(*(P114)rt_nil_check(F->z_2653)).hidden_ = G_NV((*(P114)rt_nil_check(F->m_2652)).from_use_);
(*(P114)rt_nil_check(F->z_2653)).mnext_ = (*(P114)rt_nil_check(F->y_2651)).members_;
(*(P114)rt_nil_check(F->y_2651)).members_ = F->z_2653;
F->m_2652 = (*(P114)rt_nil_check(F->m_2652)).stack_;
}
L_end_2663: ;
f_close_scope_436(F->up);
F->up->cur_task_186 = F->saved_2654;
f_define_434(F->up, F->y_2651, G_NV((*(P171)rt_nil_check(F->e_1065)).line_));
ret_:

  return;
}

static void f_entry_decl_1068(struct f_greenc_1fr *up_, P171 e_1067) {
  struct f_entry_decl_1068fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1067 = e_1067;
F->y_2664 = NULL;
F->p_2665 = NULL;
F->p_2665 = (*(P171)rt_nil_check(F->e_1067)).a_;
F->pm_2666 = NULL;
F->tail_2667 = NULL;
F->fields_2668 = NULL;
F->ct_2669 = NULL;
F->x_2670 = NULL;
F->lo_2671 = NULL;
F->hi_2672 = NULL;
if ((F->up->cur_task_186 == NULL)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_1067)).line_), rt_g_lit("an entry is declared in a task (RM79 9.5)", 41));
}
F->y_2664 = f_new_sym_439(F->up, ((rt_int)10LL), (*(P171)rt_nil_check(F->e_1067)).name_);
f_new_name_214(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("e_", 2), f_lower_s_222(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_1067)).name_)))), one_rt_gstr(95)), &(*(P114)rt_nil_check(F->y_2664)).cname_);
F->fields_2668 = f_mk_211(F->up, rt_g_lit(" int dummy_;", 12));
while ((F->p_2665 != NULL)) {
F->pm_2666 = ({ R1696 *cell2674 = rt_alloc(sizeof(R1696)); *cell2674 = cp_R1696(({ R1696 ag2675; ag2675.name_ = (*(P171)rt_nil_check(F->p_2665)).name_; ag2675.mode_ = G_NV((*(P171)rt_nil_check(F->p_2665)).ival_); ag2675.t_ = NULL; ag2675.c_ = NULL; ag2675.cfield_ = NULL; ag2675.dflt_ = NULL; ag2675.next_ = NULL; ag2675; })); (P1695)cell2674; });
f_resolve_477(F->up, (*(P171)rt_nil_check(F->p_2665)).a_, &(*(P1695)rt_nil_check(F->pm_2666)).t_, &(*(P1695)rt_nil_check(F->pm_2666)).c_);
(*(P1695)rt_nil_check(F->pm_2666)).cfield_ = f_mk_211(F->up, f_c_field_228(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->p_2665)).name_))));
f_ctype_461(F->up, (*(P1695)rt_nil_check(F->pm_2666)).t_, &F->ct_2669);
if ((G_NV((*(P1695)rt_nil_check(F->pm_2666)).mode_) == ((rt_int)1LL))) {
F->fields_2668 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->fields_2668)), one_rt_gstr(32)), (*(P137)rt_nil_check(F->ct_2669))), one_rt_gstr(32)), (*(P137)rt_nil_check((*(P1695)rt_nil_check(F->pm_2666)).cfield_))), one_rt_gstr(59)));
} else {
F->fields_2668 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->fields_2668)), one_rt_gstr(32)), (*(P137)rt_nil_check(F->ct_2669))), rt_g_lit(" *", 2)), (*(P137)rt_nil_check((*(P1695)rt_nil_check(F->pm_2666)).cfield_))), one_rt_gstr(59)));
}
if ((F->tail_2667 == NULL)) {
(*(P114)rt_nil_check(F->y_2664)).params_ = F->pm_2666;
} else {
(*(P1695)rt_nil_check(F->tail_2667)).next_ = F->pm_2666;
}
F->tail_2667 = F->pm_2666;
F->p_2665 = (*(P171)rt_nil_check(F->p_2665)).next_;
}
L_end_2673: ;
if ((!G_NV(F->up->defer_entry_structs_192))) {
f_put_to_236(F->up, F->up->out_types_125, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2664)).cname_))), rt_g_lit("p {", 3)), (*(P137)rt_nil_check(F->fields_2668))), rt_g_lit(" };", 3)));
}
(*(P114)rt_nil_check(F->y_2664)).result_ = F->up->ty_void_158;
(*(P114)rt_nil_check(F->y_2664)).decl_ = F->e_1067;
(*(P114)rt_nil_check(F->y_2664)).members_ = F->up->cur_task_186;
if (G_NV(F->up->in_func_135)) {
(*(P114)rt_nil_check(F->y_2664)).level_ = G_NV(F->up->cur_level_136);
}
(*(P114)rt_nil_check(F->y_2664)).access_path_ = f_mk_211(F->up, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2664)).cname_)), rt_g_lit("ent", 3)));
f_path_at_1025(F->up, G_NV((*(P114)rt_nil_check(F->y_2664)).level_), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2664)).access_path_)), &F->x_2670);
(*(P114)rt_nil_check(F->y_2664)).ro_ = ((((*(P114)rt_nil_check(F->up->cur_task_186)).c_ != NULL) && G_NV(F->up->in_func_135)) && (G_NV(F->up->cur_level_136) > G_NV((*(P114)rt_nil_check(F->up->cur_task_186)).level_)));
if (((*(P171)rt_nil_check(F->e_1067)).b_ != NULL)) {
if ((((*(P114)rt_nil_check(F->up->cur_task_186)).c_ != NULL) && (!G_NV((*(P114)rt_nil_check(F->y_2664)).ro_)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_1067)).line_), rt_g_lit("an entry family in a task family is not handled", 47));
}
f_family_bounds_1059(F->up, (*(P171)rt_nil_check(F->e_1067)).b_, F->y_2664, F->x_2670);
} else if ((((*(P114)rt_nil_check(F->up->cur_task_186)).c_ != NULL) && (!G_NV((*(P114)rt_nil_check(F->y_2664)).ro_)))) {
f_declare_slot_1052(F->up, rt_g_lit("rt_entry *", 10), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2664)).access_path_)));
f_path_at_1025(F->up, G_NV((*(P114)rt_nil_check(F->up->cur_task_186)).level_), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->up->cur_task_186)).cname_)), rt_g_lit("lo", 2)), &F->lo_2671);
f_path_at_1025(F->up, G_NV((*(P114)rt_nil_check(F->up->cur_task_186)).level_), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->up->cur_task_186)).cname_)), rt_g_lit("hi", 2)), &F->hi_2672);
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->x_2670)), rt_g_lit(" = rt_alloc(sizeof(rt_entry) * (size_t)(", 40)), (*(P137)rt_nil_check(F->hi_2672))), rt_g_lit(" >= ", 4)), (*(P137)rt_nil_check(F->lo_2671))), rt_g_lit(" \? ", 3)), (*(P137)rt_nil_check(F->hi_2672))), rt_g_lit(" - ", 3)), (*(P137)rt_nil_check(F->lo_2671))), rt_g_lit(" + 1 : 1));", 11)));
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = 0; k_ <= ", 26), (*(P137)rt_nil_check(F->hi_2672))), rt_g_lit(" - ", 3)), (*(P137)rt_nil_check(F->lo_2671))), rt_g_lit("; k_++) rt_entry_init(&", 23)), (*(P137)rt_nil_check(F->x_2670))), rt_g_lit("[k_]);", 6)));
} else {
f_declare_slot_1052(F->up, rt_g_lit("rt_entry", 8), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2664)).access_path_)));
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_entry_init(&", 15), (*(P137)rt_nil_check(F->x_2670))), rt_g_lit(");", 2)));
}
f_define_434(F->up, F->y_2664, G_NV((*(P171)rt_nil_check(F->e_1067)).line_));
ret_:

  return;
}

static void f_task_body_1070(struct f_greenc_1fr *up_, P171 e_1069) {
  struct f_task_body_1070fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1069 = e_1069;
F->y_2676 = NULL;
F->y_2676 = f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_1069)).name_)));
F->b_2677 = NULL;
F->m_2678 = NULL;
F->z_2679 = NULL;
F->upp_2680 = NULL;
F->saved_2681 = NULL;
F->saved_2681 = F->up->cur_task_186;
if (((F->y_2676 != NULL) && (G_NV((*(P114)rt_nil_check(F->y_2676)).kind_) == ((rt_int)11LL)))) {
f_attach_generic_body_1150(F->up, F->e_1069);
goto ret_;
}
if (((F->y_2676 == NULL) || (G_NV((*(P114)rt_nil_check(F->y_2676)).kind_) != ((rt_int)9LL)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_1069)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("task body ", 10), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_1069)).name_))), rt_g_lit(" has no task specification", 26)));
}
F->b_2677 = f_new_sym_439(F->up, ((rt_int)4LL), (*(P171)rt_nil_check(F->e_1069)).name_);
(*(P114)rt_nil_check(F->b_2677)).cname_ = f_mk_211(F->up, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2676)).cname_)), rt_g_lit("body", 4)));
(*(P114)rt_nil_check(F->b_2677)).result_ = F->up->ty_void_158;
(*(P114)rt_nil_check(F->b_2677)).level_ = G_NV(F->up->cur_level_136);
(*(P114)rt_nil_check(F->b_2677)).decl_ = F->e_1069;
if (((*(P114)rt_nil_check(F->y_2676)).c_ != NULL)) {
(*(P114)rt_nil_check(F->b_2677)).params_ = ({ R1696 *cell2682 = rt_alloc(sizeof(R1696)); *cell2682 = cp_R1696(({ R1696 ag2683; ag2683.name_ = f_mk_211(F->up, rt_g_lit("INDEX_", 6)); ag2683.mode_ = ((rt_int)1LL); ag2683.t_ = F->up->ty_int_153; ag2683.c_ = NULL; ag2683.cfield_ = f_mk_211(F->up, rt_g_lit("index_", 6)); ag2683.dflt_ = NULL; ag2683.next_ = NULL; ag2683; })); (P1695)cell2682; });
}
f_open_scope_435(F->up);
F->m_2678 = (*(P114)rt_nil_check(F->y_2676)).members_;
while ((F->m_2678 != NULL)) {
f_copy_sym_967(F->up, F->m_2678, &F->z_2679);
f_define_434(F->up, F->z_2679, G_NV((*(P171)rt_nil_check(F->e_1069)).line_));
if (((((G_NV((*(P114)rt_nil_check(F->m_2678)).kind_) == ((rt_int)3LL)) || (G_NV((*(P114)rt_nil_check(F->m_2678)).kind_) == ((rt_int)4LL))) && ((*(P114)rt_nil_check(F->m_2678)).access_path_ != NULL)) && f_same_task_399(F->up, (*(P114)rt_nil_check(F->m_2678)).members_, F->y_2676))) {
if ((G_NV((*(P114)rt_nil_check(F->y_2676)).level_) > ((rt_int)0LL))) {
F->upp_2680 = f_mk_211(F->up, rt_g_lit("up_->", 5));
} else {
F->upp_2680 = f_mk_211(F->up, rt_g_lit("", 0));
}
if (((*(P114)rt_nil_check(F->y_2676)).c_ != NULL)) {
(*(P114)rt_nil_check(F->b_2677)).access_path_ = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->upp_2680)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->m_2678)).access_path_))), rt_g_lit("[index_ - ", 10)), (*(P137)rt_nil_check(F->upp_2680))), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2676)).cname_))), rt_g_lit("lo] = F;", 8)));
} else {
(*(P114)rt_nil_check(F->b_2677)).access_path_ = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->upp_2680)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->m_2678)).access_path_))), rt_g_lit(" = F;", 5)));
}
}
F->m_2678 = (*(P114)rt_nil_check(F->m_2678)).mnext_;
}
L_end_2684: ;
F->up->cur_task_186 = F->y_2676;
f_subprogram_body_633(F->up, F->e_1069, F->b_2677);
F->up->cur_task_186 = F->saved_2681;
f_close_scope_436(F->up);
if ((((*(P114)rt_nil_check(F->y_2676)).c_ != NULL) && (G_NV((*(P114)rt_nil_check(F->b_2677)).level_) > ((rt_int)0LL)))) {
f_put_to_236(F->up, F->up->out_funcs_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2676)).cname_))), rt_g_lit("run(void *a) { struct rt_famarg *g = a; ", 40)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->b_2677)).cname_))), rt_g_lit("(g->up, g->i); }", 16)));
} else if (((*(P114)rt_nil_check(F->y_2676)).c_ != NULL)) {
f_put_to_236(F->up, F->up->out_funcs_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2676)).cname_))), rt_g_lit("run(void *a) { struct rt_famarg *g = a; ", 40)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->b_2677)).cname_))), rt_g_lit("(g->i); }", 9)));
} else if ((G_NV((*(P114)rt_nil_check(F->b_2677)).level_) > ((rt_int)0LL))) {
f_put_to_236(F->up, F->up->out_funcs_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2676)).cname_))), rt_g_lit("run(void *a) { ", 15)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->b_2677)).cname_))), rt_g_lit("(a); }", 6)));
} else {
f_put_to_236(F->up, F->up->out_funcs_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2676)).cname_))), rt_g_lit("run(void *a) { (void)a; ", 24)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->b_2677)).cname_))), rt_g_lit("(); }", 5)));
}
ret_:

  return;
}

static void f_task_awaits_1073(struct f_greenc_1fr *up_, P171 decls_1071, P137 *aw_1072) {
  struct f_task_awaits_1073fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_1071 = decls_1071;
F->aw_1072 = aw_1072;
F->e_2685 = NULL;
F->e_2685 = F->decls_1071;
F->y_2686 = NULL;
F->p_2687 = NULL;
(*F->aw_1072) = f_mk_211(F->up, rt_g_lit("", 0));
while ((F->e_2685 != NULL)) {
if (((G_NV((*(P171)rt_nil_check(F->e_2685)).kind_) == ((rt_int)50LL)) || ((G_NV((*(P171)rt_nil_check(F->e_2685)).kind_) == ((rt_int)53LL)) && (G_NV((*(P171)rt_nil_check(F->e_2685)).ival_) == ((rt_int)50LL))))) {
F->y_2686 = f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_2685)).name_)));
f_path_at_1025(F->up, G_NV((*(P114)rt_nil_check(F->y_2686)).level_), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2686)).cname_)), rt_g_lit("decl", 4)), &F->p_2687);
(*F->aw_1072) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check((*F->aw_1072))), rt_g_lit(" rt_await_decl(&", 16)), (*(P137)rt_nil_check(F->p_2687))), rt_g_lit(");", 2)));
}
F->e_2685 = (*(P171)rt_nil_check(F->e_2685)).next_;
}
L_end_2688: ;
ret_:

  return;
}

static void f_task_failure_1075(struct f_greenc_1fr *up_, P171 s_1074) {
  struct f_task_failure_1075fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1074 = s_1074;
F->y_2689 = NULL;
F->y_2689 = f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->s_1074)).tag_)));
F->a_2690 = NULL;
F->i_2691 = NULL;
F->it_2692 = NULL;
if (((*(P171)rt_nil_check(F->s_1074)).a_ != NULL)) {
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->s_1074)).a_, (*(P114)rt_nil_check(F->y_2689)).t_, &F->it_2692, &F->i_2691);
f_act_path_i_1045(F->up, F->y_2689, (*(P137)rt_nil_check(F->i_2691)), &F->a_2690);
} else {
f_act_path_1041(F->up, F->y_2689, &F->a_2690);
}
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_exterminate(&", 16), (*(P137)rt_nil_check(F->a_2690))), rt_g_lit(");", 2)));
ret_:

  return;
}

static void f_entry_sym_1079(struct f_greenc_1fr *up_, P171 e_1076, P114 *y_1077, P171 *ix_1078) {
  struct f_entry_sym_1079fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1076 = e_1076;
F->y_1077 = y_1077;
F->ix_1078 = ix_1078;
F->t_2693 = NULL;
(*F->ix_1078) = NULL;
F->up->fam_ix_189 = NULL;
if ((G_NV((*(P171)rt_nil_check(F->e_1076)).kind_) == ((rt_int)8LL))) {
f_entry_sym_1079(F->up, (*(P171)rt_nil_check(F->e_1076)).a_, &(*F->y_1077), &(*F->ix_1078));
if (((*(P114)rt_nil_check((*F->y_1077))).c_ == NULL)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_1076)).line_), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check((*F->y_1077))).name_)), rt_g_lit(" is not an entry family", 23)));
}
F->up->fam_ix_189 = (*(P171)rt_nil_check(F->e_1076)).b_;
goto ret_;
}
if ((((G_NV((*(P171)rt_nil_check(F->e_1076)).kind_) == ((rt_int)9LL)) && (G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_1076)).a_)).kind_) == ((rt_int)8LL))) && (G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_1076)).a_)).a_)).kind_) == ((rt_int)5LL)))) {
F->t_2693 = f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_1076)).a_)).a_)).name_)));
if ((((F->t_2693 == NULL) || (G_NV((*(P114)rt_nil_check(F->t_2693)).kind_) != ((rt_int)9LL))) || ((*(P114)rt_nil_check(F->t_2693)).c_ == NULL))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_1076)).line_), cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_1076)).a_)).a_)).name_)), rt_g_lit(" is not a task family", 21)));
}
(*F->y_1077) = f_member_of_962(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_1076)).a_)).a_)).name_)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_1076)).name_)), G_NV((*(P171)rt_nil_check(F->e_1076)).line_));
(*F->ix_1078) = (*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_1076)).a_)).b_;
if ((((*F->y_1077) == NULL) || (G_NV((*(P114)rt_nil_check((*F->y_1077))).kind_) != ((rt_int)10LL)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_1076)).line_), rt_g_lit("not an entry", 12));
}
goto ret_;
}
if ((G_NV((*(P171)rt_nil_check(F->e_1076)).kind_) == ((rt_int)5LL))) {
(*F->y_1077) = f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_1076)).name_)));
if (((*(P171)rt_nil_check(F->e_1076)).tag_ != NULL)) {
(*F->y_1077) = f_member_of_962(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_1076)).tag_)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_1076)).name_)), G_NV((*(P171)rt_nil_check(F->e_1076)).line_));
}
} else if (((G_NV((*(P171)rt_nil_check(F->e_1076)).kind_) == ((rt_int)9LL)) && f_is_package_958(F->up, (*(P171)rt_nil_check(F->e_1076)).a_))) {
(*F->y_1077) = f_member_of_962(F->up, f_path_of_328(F->up, (*(P171)rt_nil_check(F->e_1076)).a_), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_1076)).name_)), G_NV((*(P171)rt_nil_check(F->e_1076)).line_));
} else {
(*F->y_1077) = NULL;
}
if ((((*F->y_1077) == NULL) || (G_NV((*(P114)rt_nil_check((*F->y_1077))).kind_) != ((rt_int)10LL)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_1076)).line_), rt_g_lit("not an entry", 12));
}
ret_:

  return;
}

static void f_other_call_1084(struct f_greenc_1fr *up_, P171 e_1080, int is_stmt_1081, P119 *t_1082, P137 *r_1083) {
  struct f_other_call_1084fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1080 = e_1080;
F->is_stmt_1081 = is_stmt_1081;
F->t_1082 = t_1082;
F->r_1083 = r_1083;
F->y_2694 = NULL;
F->pm_2695 = NULL;
F->a_2696 = NULL;
F->parts_2697 = NULL;
F->v_2698 = NULL;
F->lv_2699 = NULL;
F->ent_2700 = NULL;
F->act_2701 = NULL;
F->i_2702 = NULL;
F->vt_2703 = NULL;
F->lt_2704 = NULL;
F->lc_2705 = NULL;
F->ro_2706 = INT_MIN;
F->ix_2707 = NULL;
F->fix_2708 = NULL;
F->args_node_2709 = NULL;
f_entry_sym_1079(F->up, (*(P171)rt_nil_check(F->e_1080)).a_, &F->y_2694, &F->ix_2707);
F->fix_2708 = F->up->fam_ix_189;
F->args_node_2709 = (*(P171)rt_nil_check(F->e_1080)).b_;
if ((((*(P114)rt_nil_check(F->y_2694)).c_ != NULL) && (F->fix_2708 == NULL))) {
F->fix_2708 = (*(P171)rt_nil_check(F->e_1080)).b_;
F->args_node_2709 = NULL;
}
F->i_2702 = f_mk_211(F->up, rt_g_lit("", 0));
if ((F->ix_2707 != NULL)) {
f_gexpr_739(F->up, F->ix_2707, F->up->ty_int_153, &F->vt_2703, &F->i_2702);
} else if (((((*(P114)rt_nil_check(F->y_2694)).members_ != NULL) && ((*(P114)rt_nil_check((*(P114)rt_nil_check(F->y_2694)).members_)).c_ != NULL)) && ((*(P114)rt_nil_check(F->y_2694)).members_ != F->up->cur_task_186))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_1080)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("a member of family ", 19), (*(P137)rt_nil_check((*(P114)rt_nil_check((*(P114)rt_nil_check(F->y_2694)).members_)).name_))), rt_g_lit(" must be named: F(I).", 21)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2694)).name_))));
}
if ((!F->is_stmt_1081)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_1080)).line_), rt_g_lit("an entry call is a statement", 28));
}
if ((F->up->pure_sym_200 != NULL)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_1080)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->up->pure_sym_200)).name_))), rt_g_lit(" may not call an entry (RM79 6.5)", 33)));
}
f_entry_path_1049(F->up, F->y_2694, (*(P137)rt_nil_check(F->i_2702)), &F->ent_2700);
if (((*(P114)rt_nil_check(F->y_2694)).c_ != NULL)) {
if ((F->fix_2708 == NULL)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_1080)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2694)).name_)), rt_g_lit(" is an entry family: name a member, ", 36)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2694)).name_))), rt_g_lit("(I)", 3)));
}
f_gexpr_739(F->up, F->fix_2708, NULL, &F->vt_2703, &F->v_2698);
f_entry_family_slot_1064(F->up, F->y_2694, (*(P137)rt_nil_check(F->ent_2700)), (*(P137)rt_nil_check(F->v_2698)), &F->ent_2700);
}
F->parts_2697 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ struct ", 10), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2694)).cname_))), rt_g_lit("p p_;", 5)));
F->pm_2695 = (*(P114)rt_nil_check(F->y_2694)).params_;
while ((F->pm_2695 != NULL)) {
F->a_2696 = f_actual_for_937(F->up, F->args_node_2709, F->pm_2695, (*(P114)rt_nil_check(F->y_2694)).params_);
if ((F->a_2696 == NULL)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_1080)).line_), cat_rt_gstr(rt_g_lit("no actual parameter for ", 24), (*(P137)rt_nil_check((*(P1695)rt_nil_check(F->pm_2695)).name_))));
}
if ((G_NV((*(P1695)rt_nil_check(F->pm_2695)).mode_) == ((rt_int)1LL))) {
f_gexpr_739(F->up, F->a_2696, (*(P1695)rt_nil_check(F->pm_2695)).t_, &F->vt_2703, &F->v_2698);
f_check_type_456(F->up, F->vt_2703, (*(P1695)rt_nil_check(F->pm_2695)).t_, G_NV((*(P171)rt_nil_check(F->e_1080)).line_));
F->parts_2697 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->parts_2697)), rt_g_lit(" p_.", 4)), (*(P137)rt_nil_check((*(P1695)rt_nil_check(F->pm_2695)).cfield_))), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->v_2698))), one_rt_gstr(59)));
} else {
f_lvalue_695(F->up, F->a_2696, &F->lv_2699, &F->lt_2704, &F->lc_2705, &F->ro_2706);
if (G_NV(F->ro_2706)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_1080)).line_), cat_rt_gstr((*(P137)rt_nil_check((*(P1695)rt_nil_check(F->pm_2695)).name_)), rt_g_lit(" needs a variable", 17)));
}
f_check_type_456(F->up, F->lt_2704, (*(P1695)rt_nil_check(F->pm_2695)).t_, G_NV((*(P171)rt_nil_check(F->e_1080)).line_));
F->parts_2697 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->parts_2697)), rt_g_lit(" p_.", 4)), (*(P137)rt_nil_check((*(P1695)rt_nil_check(F->pm_2695)).cfield_))), rt_g_lit(" = &", 4)), (*(P137)rt_nil_check(F->lv_2699))), one_rt_gstr(59)));
}
F->pm_2695 = (*(P1695)rt_nil_check(F->pm_2695)).next_;
}
L_end_2710: ;
if ((((*(P114)rt_nil_check(F->y_2694)).members_ != NULL) && ((*(P114)rt_nil_check(F->y_2694)).members_ != F->up->cur_task_186))) {
if ((F->ix_2707 != NULL)) {
f_act_path_i_1045(F->up, (*(P114)rt_nil_check(F->y_2694)).members_, (*(P137)rt_nil_check(F->i_2702)), &F->act_2701);
} else {
f_act_path_1041(F->up, (*(P114)rt_nil_check(F->y_2694)).members_, &F->act_2701);
}
F->parts_2697 = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->parts_2697)), rt_g_lit(" if (!rt_is_active(&", 20)), (*(P137)rt_nil_check(F->act_2701))), rt_g_lit(")) rt_raise(RT_X_TASKING);", 26)));
}
(*F->t_1082) = F->up->ty_void_158;
(*F->r_1083) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->parts_2697)), rt_g_lit(" rt_entry_call(&", 16)), (*(P137)rt_nil_check(F->ent_2700))), rt_g_lit(", &p_); })", 10)));
ret_:

  return;
}

static void f_other_attr_1089(struct f_greenc_1fr *up_, P171 e_1085, P114 y_1086, P119 *t_1087, P137 *r_1088) {
  struct f_other_attr_1089fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1085 = e_1085;
F->y_1086 = y_1086;
F->t_1087 = t_1087;
F->r_1088 = r_1088;
F->a_2711 = cp_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_1085)).name_)));
F->p_2712 = NULL;
if (((G_NV((*(P114)rt_nil_check(F->y_1086)).kind_) == ((rt_int)9LL)) && eq_rt_gstr(F->a_2711, rt_g_lit("INDEX", 5)))) {
if (((*(P114)rt_nil_check(F->y_1086)).c_ == NULL)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_1085)).line_), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1086)).name_)), rt_g_lit(" is not a task family", 21)));
}
f_own_index_1033(F->up, &F->p_2712);
(*F->t_1087) = F->up->ty_int_153;
if (((*(P114)rt_nil_check(F->y_1086)).t_ != NULL)) {
(*F->t_1087) = (*(P114)rt_nil_check(F->y_1086)).t_;
}
(*F->r_1088) = F->p_2712;
} else if (((G_NV((*(P114)rt_nil_check(F->y_1086)).kind_) == ((rt_int)9LL)) && eq_rt_gstr(F->a_2711, rt_g_lit("ACTIVE", 6)))) {
f_act_path_1041(F->up, F->y_1086, &F->p_2712);
(*F->t_1087) = F->up->ty_bool_154;
(*F->r_1088) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_is_active(&", 14), (*(P137)rt_nil_check(F->p_2712))), one_rt_gstr(41)));
} else if (((G_NV((*(P114)rt_nil_check(F->y_1086)).kind_) == ((rt_int)9LL)) && eq_rt_gstr(F->a_2711, rt_g_lit("PRIORITY", 8)))) {
f_act_path_1041(F->up, F->y_1086, &F->p_2712);
(*F->t_1087) = F->up->ty_int_153;
(*F->r_1088) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_priority(&", 13), (*(P137)rt_nil_check(F->p_2712))), one_rt_gstr(41)));
} else if (((G_NV((*(P114)rt_nil_check(F->y_1086)).kind_) == ((rt_int)10LL)) && eq_rt_gstr(F->a_2711, rt_g_lit("COUNT", 5)))) {
if (((*(P114)rt_nil_check(F->y_1086)).members_ != F->up->cur_task_186)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_1085)).line_), rt_g_lit("E'COUNT is allowed only in the body of the task (RM79 9.9)", 58));
}
f_entry_path_1049(F->up, F->y_1086, rt_g_lit("", 0), &F->p_2712);
(*F->t_1087) = F->up->ty_int_153;
(*F->r_1088) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_entry_count(&", 16), (*(P137)rt_nil_check(F->p_2712))), one_rt_gstr(41)));
} else {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_1085)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), F->a_2711), rt_g_lit(" is not handled here", 20)));
(*F->t_1087) = F->up->ty_int_153;
(*F->r_1088) = NULL;
}
ret_:

  return;
}

static void f_member_attr_1093(struct f_greenc_1fr *up_, P171 e_1090, P119 *t_1091, P137 *r_1092) {
  struct f_member_attr_1093fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1090 = e_1090;
F->t_1091 = t_1091;
F->r_1092 = r_1092;
F->y_2713 = NULL;
F->ix_2714 = NULL;
F->i_2715 = NULL;
F->p_2716 = NULL;
F->vt_2717 = NULL;
f_task_of_1031(F->up, (*(P171)rt_nil_check(F->e_1090)).a_, &F->y_2713, &F->ix_2714);
f_gexpr_739(F->up, F->ix_2714, F->up->ty_int_153, &F->vt_2717, &F->i_2715);
f_act_path_i_1045(F->up, F->y_2713, (*(P137)rt_nil_check(F->i_2715)), &F->p_2716);
if (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_1090)).name_)), rt_g_lit("ACTIVE", 6))) {
(*F->t_1091) = F->up->ty_bool_154;
(*F->r_1092) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_is_active(&", 14), (*(P137)rt_nil_check(F->p_2716))), one_rt_gstr(41)));
} else if (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_1090)).name_)), rt_g_lit("PRIORITY", 8))) {
(*F->t_1091) = F->up->ty_int_153;
(*F->r_1092) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_priority(&", 13), (*(P137)rt_nil_check(F->p_2716))), one_rt_gstr(41)));
} else {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_1090)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_1090)).name_))), rt_g_lit(" is not handled for a family member", 35)));
(*F->t_1091) = F->up->ty_int_153;
(*F->r_1092) = NULL;
}
ret_:

  return;
}

static void f_task_builtin_1099(struct f_greenc_1fr *up_, rt_gstr name_1094, P171 args_1095, rt_int line_1096, P119 *t_1097, P137 *r_1098) {
  struct f_task_builtin_1099fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1094 = cp_rt_gstr(name_1094);
F->args_1095 = args_1095;
F->line_1096 = line_1096;
F->t_1097 = t_1097;
F->r_1098 = r_1098;
F->vt_2718 = NULL;
F->v_2719 = NULL;
(*F->t_1097) = F->up->ty_void_158;
if (eq_rt_gstr(F->name_1094, rt_g_lit("SET_PRIORITY", 12))) {
f_gexpr_739(F->up, F->args_1095, F->up->ty_int_153, &F->vt_2718, &F->v_2719);
(*F->r_1098) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_set_priority(rt_me(), ", 25), (*(P137)rt_nil_check(F->v_2719))), one_rt_gstr(41)));
} else {
f_fail_232(F->up, F->line_1096, cat_rt_gstr(F->name_1094, rt_g_lit(" is not declared", 16)));
(*F->r_1098) = NULL;
}
ret_:

  return;
}

static void f_gen_accept_1101(struct f_greenc_1fr *up_, P171 s_1100) {
  struct f_gen_accept_1101fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1100 = s_1100;
F->y_2720 = NULL;
F->y_2720 = f_lookup_entry_402(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->s_1100)).name_)), F->up->cur_task_186);
F->saved_ax_2721 = NULL;
F->ent_2722 = NULL;
F->ep_2723 = NULL;
F->xf_2724 = NULL;
F->x_2725 = NULL;
F->pm_2726 = NULL;
F->f_2727 = NULL;
F->f_2727 = (*(P171)rt_nil_check(F->s_1100)).a_;
F->p_2728 = NULL;
if (((F->y_2720 == NULL) || (G_NV((*(P114)rt_nil_check(F->y_2720)).kind_) != ((rt_int)10LL)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->s_1100)).line_), cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->s_1100)).name_)), rt_g_lit(" is not an entry", 16)));
}
if ((!f_same_task_399(F->up, (*(P114)rt_nil_check(F->y_2720)).members_, F->up->cur_task_186))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->s_1100)).line_), rt_g_lit("a task accepts only its own entries (RM79 9.5)", 46));
}
f_entry_path_1049(F->up, F->y_2720, rt_g_lit("", 0), &F->ent_2722);
f_member_slot_1105(F->up, F->y_2720, F->s_1100, &F->ent_2722);
if ((G_NV((*(P171)rt_nil_check(F->s_1100)).flag_) == ((rt_int)0LL))) {
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_accept_begin(&", 19), (*(P137)rt_nil_check(F->ent_2722))), rt_g_lit("); rt_accept_end(&", 18)), (*(P137)rt_nil_check(F->ent_2722))), rt_g_lit(", 0, 0); }", 10)));
goto ret_;
}
f_new_name_214(F->up, rt_g_lit("ep", 2), &F->ep_2723);
f_new_name_214(F->up, rt_g_lit("xf", 2), &F->xf_2724);
f_new_name_214(F->up, rt_g_lit("x", 1), &F->x_2725);
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ struct ", 9), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2720)).cname_))), rt_g_lit("p *", 3)), (*(P137)rt_nil_check(F->ep_2723))), rt_g_lit(" = rt_accept_begin(&", 20)), (*(P137)rt_nil_check(F->ent_2722))), rt_g_lit(");", 2)));
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_frame ", 9), (*(P137)rt_nil_check(F->xf_2724))), one_rt_gstr(59)));
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (RT_TRY(", 11), (*(P137)rt_nil_check(F->xf_2724))), rt_g_lit(")) {", 4)));
f_push_cleanup_639(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P137)rt_nil_check(F->xf_2724))), rt_g_lit("); rt_accept_end(&", 18)), (*(P137)rt_nil_check(F->ent_2722))), rt_g_lit(", 0, 0);", 8)));
f_open_scope_435(F->up);
F->pm_2726 = (*(P114)rt_nil_check(F->y_2720)).params_;
while ((F->pm_2726 != NULL)) {
if ((G_NV((*(P1695)rt_nil_check(F->pm_2726)).mode_) == ((rt_int)1LL))) {
F->p_2728 = f_new_sym_439(F->up, ((rt_int)2LL), (*(P1695)rt_nil_check(F->pm_2726)).name_);
(*(P114)rt_nil_check(F->p_2728)).ro_ = 1;
(*(P114)rt_nil_check(F->p_2728)).access_path_ = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check(F->ep_2723))), rt_g_lit("->", 2)), (*(P137)rt_nil_check((*(P1695)rt_nil_check(F->pm_2726)).cfield_))), one_rt_gstr(41)));
} else {
F->p_2728 = f_new_sym_439(F->up, ((rt_int)1LL), (*(P1695)rt_nil_check(F->pm_2726)).name_);
(*(P114)rt_nil_check(F->p_2728)).access_path_ = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*", 2), (*(P137)rt_nil_check(F->ep_2723))), rt_g_lit("->", 2)), (*(P137)rt_nil_check((*(P1695)rt_nil_check(F->pm_2726)).cfield_))), one_rt_gstr(41)));
}
if ((F->f_2727 != NULL)) {
(*(P114)rt_nil_check(F->p_2728)).name_ = (*(P171)rt_nil_check(F->f_2727)).name_;
F->f_2727 = (*(P171)rt_nil_check(F->f_2727)).next_;
}
(*(P114)rt_nil_check(F->p_2728)).t_ = (*(P1695)rt_nil_check(F->pm_2726)).t_;
(*(P114)rt_nil_check(F->p_2728)).c_ = (*(P1695)rt_nil_check(F->pm_2726)).c_;
f_define_434(F->up, F->p_2728, G_NV((*(P171)rt_nil_check(F->s_1100)).line_));
F->pm_2726 = (*(P1695)rt_nil_check(F->pm_2726)).next_;
}
L_end_2729: ;
F->up->accept_depth_187 = rt_add(G_NV(F->up->accept_depth_187), ((rt_int)1LL));
F->saved_ax_2721 = F->up->accept_exits_146;
F->up->accept_exits_146 = F->up->exits_142;
f_gen_statements_635(F->up, (*(P171)rt_nil_check(F->s_1100)).b_);
F->up->accept_exits_146 = F->saved_ax_2721;
F->up->accept_depth_187 = rt_sub(G_NV(F->up->accept_depth_187), ((rt_int)1LL));
f_close_scope_436(F->up);
f_pop_cleanup_640(F->up);
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P137)rt_nil_check(F->xf_2724))), rt_g_lit("); rt_accept_end(&", 18)), (*(P137)rt_nil_check(F->ent_2722))), rt_g_lit(", 0, 0);", 8)));
f_emit_238(F->up, rt_g_lit("} else {", 8));
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P137)rt_nil_check(F->xf_2724))), rt_g_lit("); int ", 7)), (*(P137)rt_nil_check(F->x_2725))), rt_g_lit(" = rt_xcur; rt_accept_end(&", 27)), (*(P137)rt_nil_check(F->ent_2722))), rt_g_lit(", 1, ", 5)), (*(P137)rt_nil_check(F->x_2725))), rt_g_lit("); rt_raise(", 12)), (*(P137)rt_nil_check(F->x_2725))), rt_g_lit(");", 2)));
f_emit_238(F->up, rt_g_lit("}", 1));
f_emit_238(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_member_slot_1105(struct f_greenc_1fr *up_, P114 y_1102, P171 s_1103, P137 *ent_1104) {
  struct f_member_slot_1105fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1102 = y_1102;
F->s_1103 = s_1103;
F->ent_1104 = ent_1104;
F->vt_2730 = NULL;
F->v_2731 = NULL;
if (((*(P114)rt_nil_check(F->y_1102)).c_ != NULL)) {
if (((*(P171)rt_nil_check(F->s_1103)).c_ == NULL)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->s_1103)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1102)).name_)), rt_g_lit(" is an entry family: accept ", 28)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1102)).name_))), rt_g_lit("(I)", 3)));
}
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->s_1103)).c_, NULL, &F->vt_2730, &F->v_2731);
f_entry_family_slot_1064(F->up, F->y_1102, (*(P137)rt_nil_check((*F->ent_1104))), (*(P137)rt_nil_check(F->v_2731)), &(*F->ent_1104));
} else if (((*(P171)rt_nil_check(F->s_1103)).c_ != NULL)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->s_1103)).line_), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1102)).name_)), rt_g_lit(" is not an entry family", 23)));
}
ret_:

  return;
}

static void f_gen_delay_ticks_1108(struct f_greenc_1fr *up_, P171 e_1106, P137 *r_1107) {
  struct f_gen_delay_ticks_1108fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1106 = e_1106;
F->r_1107 = r_1107;
F->vt_2732 = NULL;
F->v_2733 = NULL;
f_gexpr_739(F->up, F->e_1106, F->up->ty_time_168, &F->vt_2732, &F->v_2733);
f_check_type_456(F->up, F->vt_2732, F->up->ty_time_168, G_NV((*(P171)rt_nil_check(F->e_1106)).line_));
(*F->r_1107) = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(rt_int)llround(", 16), (*(P137)rt_nil_check(F->v_2733))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_gen_select_1110(struct f_greenc_1fr *up_, P171 s_1109) {
  struct f_gen_select_1110fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1109 = s_1109;
F->alt_2734 = NULL;
F->alt_2734 = (*(P171)rt_nil_check(F->s_1109)).a_;
F->n_2735 = INT64_MIN;
F->n_2735 = ((rt_int)0LL);
F->i_2736 = INT64_MIN;
F->has_delay_2737 = INT_MIN;
F->has_delay_2737 = 0;
F->has_accept_2738 = INT_MIN;
F->has_accept_2738 = 0;
F->al_2739 = NULL;
F->w_2740 = NULL;
F->g_2741 = NULL;
F->ent_2742 = NULL;
F->ticks_2743 = NULL;
F->vt_2744 = NULL;
F->y_2745 = NULL;
f_new_name_214(F->up, rt_g_lit("al", 2), &F->al_2739);
f_new_name_214(F->up, rt_g_lit("w", 1), &F->w_2740);
while ((F->alt_2734 != NULL)) {
F->n_2735 = rt_add(G_NV(F->n_2735), ((rt_int)1LL));
if ((G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->alt_2734)).b_)).kind_) == ((rt_int)32LL))) {
F->has_delay_2737 = 1;
} else {
F->has_accept_2738 = 1;
}
F->alt_2734 = (*(P171)rt_nil_check(F->alt_2734)).next_;
}
L_end_2746: ;
if (((G_NV((*(P171)rt_nil_check(F->s_1109)).flag_) == ((rt_int)1LL)) && G_NV(F->has_delay_2737))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->s_1109)).line_), rt_g_lit("a select cannot have both delay alternatives and an else part (RM79 9.7)", 72));
}
if ((!G_NV(F->has_accept_2738))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->s_1109)).line_), rt_g_lit("a select needs at least one accept alternative (RM79 9.7)", 57));
}
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_alt ", 9), (*(P137)rt_nil_check(F->al_2739))), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(rt_add(G_NV(F->n_2735), ((rt_int)1LL))))), rt_g_lit("]; int open_ = 0;", 17)));
F->alt_2734 = (*(P171)rt_nil_check(F->s_1109)).a_;
F->i_2736 = ((rt_int)0LL);
while ((F->alt_2734 != NULL)) {
F->g_2741 = f_mk_211(F->up, rt_g_lit("1", 1));
if (((*(P171)rt_nil_check(F->alt_2734)).a_ != NULL)) {
f_condition_779(F->up, (*(P171)rt_nil_check(F->alt_2734)).a_, F->up->ty_bool_154, &F->vt_2744, &F->g_2741);
f_check_type_456(F->up, F->vt_2744, F->up->ty_bool_154, G_NV((*(P171)rt_nil_check(F->alt_2734)).line_));
}
if ((G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->alt_2734)).b_)).kind_) == ((rt_int)34LL))) {
F->y_2745 = f_lookup_entry_402(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->alt_2734)).b_)).name_)), F->up->cur_task_186);
if (((F->y_2745 == NULL) || (G_NV((*(P114)rt_nil_check(F->y_2745)).kind_) != ((rt_int)10LL)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->alt_2734)).line_), cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->alt_2734)).b_)).name_)), rt_g_lit(" is not an entry", 16)));
}
f_entry_path_1049(F->up, F->y_2745, rt_g_lit("", 0), &F->ent_2742);
f_member_slot_1105(F->up, F->y_2745, (*(P171)rt_nil_check(F->alt_2734)).b_, &F->ent_2742);
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->al_2739)), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(G_NV(F->i_2736)))), rt_g_lit("] = (rt_alt){RT_ALT_ACCEPT, (", 29)), (*(P137)rt_nil_check(F->g_2741))), rt_g_lit("), &", 4)), (*(P137)rt_nil_check(F->ent_2742))), rt_g_lit(", NULL, 0};", 11)));
} else {
f_gen_delay_ticks_1108(F->up, (*(P171)rt_nil_check((*(P171)rt_nil_check(F->alt_2734)).b_)).a_, &F->ticks_2743);
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->al_2739)), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(G_NV(F->i_2736)))), rt_g_lit("] = (rt_alt){RT_ALT_DELAY, (", 28)), (*(P137)rt_nil_check(F->g_2741))), rt_g_lit("), NULL, NULL, ", 15)), (*(P137)rt_nil_check(F->ticks_2743))), rt_g_lit("};", 2)));
}
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("open_ |= ", 9), (*(P137)rt_nil_check(F->al_2739))), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(G_NV(F->i_2736)))), rt_g_lit("].open;", 7)));
F->i_2736 = rt_add(G_NV(F->i_2736), ((rt_int)1LL));
F->alt_2734 = (*(P171)rt_nil_check(F->alt_2734)).next_;
}
L_end_2747: ;
if ((G_NV((*(P171)rt_nil_check(F->s_1109)).flag_) == ((rt_int)1LL))) {
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->al_2739)), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(G_NV(F->n_2735)))), rt_g_lit("] = (rt_alt){RT_ALT_ELSE, 1, NULL, NULL, 0};", 44)));
F->n_2735 = rt_add(G_NV(F->n_2735), ((rt_int)1LL));
} else {
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (!open_) rt_raise(rt_exc(", 28), f_q_229(F->up)), rt_g_lit("SELECT_ERROR", 12)), f_q_229(F->up)), rt_g_lit("));", 3)));
}
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("int ", 4), (*(P137)rt_nil_check(F->w_2740))), rt_g_lit(" = rt_wait(", 11)), rt_g_s2g(rt_str_of_int(G_NV(F->n_2735)))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->al_2739))), rt_g_lit(");", 2)));
F->alt_2734 = (*(P171)rt_nil_check(F->s_1109)).a_;
F->i_2736 = ((rt_int)0LL);
while ((F->alt_2734 != NULL)) {
if ((G_NV(F->i_2736) == ((rt_int)0LL))) {
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P137)rt_nil_check(F->w_2740))), rt_g_lit(" == 0) {", 8)));
} else {
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P137)rt_nil_check(F->w_2740))), rt_g_lit(" == ", 4)), rt_g_s2g(rt_str_of_int(G_NV(F->i_2736)))), rt_g_lit(") {", 3)));
}
if ((G_NV((*(P171)rt_nil_check((*(P171)rt_nil_check(F->alt_2734)).b_)).kind_) == ((rt_int)34LL))) {
f_gen_accept_1101(F->up, (*(P171)rt_nil_check(F->alt_2734)).b_);
}
f_gen_statements_635(F->up, (*(P171)rt_nil_check(F->alt_2734)).c_);
F->i_2736 = rt_add(G_NV(F->i_2736), ((rt_int)1LL));
F->alt_2734 = (*(P171)rt_nil_check(F->alt_2734)).next_;
}
L_end_2748: ;
if ((G_NV((*(P171)rt_nil_check(F->s_1109)).flag_) == ((rt_int)1LL))) {
f_emit_238(F->up, rt_g_lit("} else {", 8));
f_gen_statements_635(F->up, (*(P171)rt_nil_check(F->s_1109)).b_);
}
f_emit_238(F->up, rt_g_lit("}", 1));
f_emit_238(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_family_range_1115(struct f_greenc_1fr *up_, P114 y_1111, P171 ix_1112, P137 *lo_1113, P137 *hi_1114) {
  struct f_family_range_1115fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1111 = y_1111;
F->ix_1112 = ix_1112;
F->lo_1113 = lo_1113;
F->hi_1114 = hi_1114;
F->vt_2749 = NULL;
if ((F->ix_1112 == NULL)) {
f_path_at_1025(F->up, G_NV((*(P114)rt_nil_check(F->y_1111)).level_), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1111)).cname_)), rt_g_lit("lo", 2)), &(*F->lo_1113));
f_path_at_1025(F->up, G_NV((*(P114)rt_nil_check(F->y_1111)).level_), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1111)).cname_)), rt_g_lit("hi", 2)), &(*F->hi_1114));
} else if ((G_NV((*(P171)rt_nil_check(F->ix_1112)).kind_) == ((rt_int)14LL))) {
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->ix_1112)).a_, F->up->ty_int_153, &F->vt_2749, &(*F->lo_1113));
f_gexpr_739(F->up, (*(P171)rt_nil_check(F->ix_1112)).b_, F->up->ty_int_153, &F->vt_2749, &(*F->hi_1114));
} else {
f_gexpr_739(F->up, F->ix_1112, F->up->ty_int_153, &F->vt_2749, &(*F->lo_1113));
(*F->hi_1114) = (*F->lo_1113);
}
ret_:

  return;
}

static void f_task_statement_gen_1117(struct f_greenc_1fr *up_, P171 s_1116) {
  struct f_task_statement_gen_1117fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1116 = s_1116;
F->n_2750 = NULL;
F->ix_2751 = NULL;
F->y_2752 = NULL;
F->a_2753 = NULL;
F->d_2754 = NULL;
F->l_2755 = NULL;
F->ticks_2756 = NULL;
F->lo_2757 = NULL;
F->hi_2758 = NULL;
{ rt_int sel2759 = G_NV((*(P171)rt_nil_check(F->s_1116)).kind_);
if (0 || sel2759 == ((rt_int)32LL)) {
f_gen_delay_ticks_1108(F->up, (*(P171)rt_nil_check(F->s_1116)).a_, &F->ticks_2756);
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_delay(", 9), (*(P137)rt_nil_check(F->ticks_2756))), rt_g_lit(");", 2)));
} else if (0 || sel2759 == ((rt_int)33LL)) {
if ((G_NV(F->up->accept_depth_187) > ((rt_int)0LL))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->s_1116)).line_), rt_g_lit("an accept body cannot initiate a task (RM79 9.5)", 48));
}
F->n_2750 = (*(P171)rt_nil_check(F->s_1116)).a_;
while ((F->n_2750 != NULL)) {
f_task_of_1031(F->up, F->n_2750, &F->y_2752, &F->ix_2751);
f_path_at_1025(F->up, G_NV((*(P114)rt_nil_check(F->y_2752)).level_), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2752)).cname_)), rt_g_lit("decl", 4)), &F->d_2754);
if ((G_NV((*(P114)rt_nil_check(F->y_2752)).level_) > ((rt_int)0LL))) {
f_link_to_679(F->up, G_NV((*(P114)rt_nil_check(F->y_2752)).level_), &F->l_2755);
} else {
F->l_2755 = f_mk_211(F->up, rt_g_lit("NULL", 4));
}
if (((*(P114)rt_nil_check(F->y_2752)).c_ == NULL)) {
f_act_path_1041(F->up, F->y_2752, &F->a_2753);
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_create(&", 11), (*(P137)rt_nil_check(F->a_2753))), rt_g_lit(", &", 3)), (*(P137)rt_nil_check(F->d_2754))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2752)).cname_))), rt_g_lit("run, ", 5)), (*(P137)rt_nil_check(F->l_2755))), rt_g_lit(");", 2)));
} else {
f_family_range_1115(F->up, F->y_2752, F->ix_2751, &F->lo_2757, &F->hi_2758);
f_act_path_i_1045(F->up, F->y_2752, rt_g_lit("k_", 2), &F->a_2753);
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = ", 17), (*(P137)rt_nil_check(F->lo_2757))), rt_g_lit("; k_ <= ", 8)), (*(P137)rt_nil_check(F->hi_2758))), rt_g_lit("; k_++) { struct rt_famarg *g_ = rt_alloc(sizeof *g_); g_->up = ", 64)), (*(P137)rt_nil_check(F->l_2755))), rt_g_lit("; g_->i = k_; rt_create(&", 25)), (*(P137)rt_nil_check(F->a_2753))), rt_g_lit(", &", 3)), (*(P137)rt_nil_check(F->d_2754))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2752)).cname_))), rt_g_lit("run, g_); }", 11)));
}
F->n_2750 = (*(P171)rt_nil_check(F->n_2750)).next_;
}
L_end_2760: ;
} else if (0 || sel2759 == ((rt_int)34LL)) {
f_gen_accept_1101(F->up, F->s_1116);
} else if (0 || sel2759 == ((rt_int)35LL)) {
f_gen_select_1110(F->up, F->s_1116);
} else if (0 || sel2759 == ((rt_int)36LL)) {
F->n_2750 = (*(P171)rt_nil_check(F->s_1116)).a_;
while ((F->n_2750 != NULL)) {
f_task_of_1031(F->up, F->n_2750, &F->y_2752, &F->ix_2751);
if (((*(P114)rt_nil_check(F->y_2752)).c_ == NULL)) {
f_act_path_1041(F->up, F->y_2752, &F->a_2753);
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_abort(&", 12), (*(P137)rt_nil_check(F->a_2753))), rt_g_lit(");", 2)));
} else {
f_family_range_1115(F->up, F->y_2752, F->ix_2751, &F->lo_2757, &F->hi_2758);
f_act_path_i_1045(F->up, F->y_2752, rt_g_lit("k_", 2), &F->a_2753);
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = ", 17), (*(P137)rt_nil_check(F->lo_2757))), rt_g_lit("; k_ <= ", 8)), (*(P137)rt_nil_check(F->hi_2758))), rt_g_lit("; k_++) rt_g_abort(&", 20)), (*(P137)rt_nil_check(F->a_2753))), rt_g_lit(");", 2)));
}
F->n_2750 = (*(P171)rt_nil_check(F->n_2750)).next_;
}
L_end_2761: ;
} else {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->s_1116)).line_), rt_g_lit("this statement is not handled", 29));
}
}
ret_:

  return;
}

static P171 f_root_name_1119(struct f_greenc_1fr *up_, P171 e_1118) {
  struct f_root_name_1119fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1118 = e_1118;
if ((G_NV((*(P171)rt_nil_check(F->e_1118)).kind_) == ((rt_int)5LL))) {
F->result_ = F->e_1118;
goto ret_;
} else if ((((G_NV((*(P171)rt_nil_check(F->e_1118)).kind_) == ((rt_int)9LL)) || (G_NV((*(P171)rt_nil_check(F->e_1118)).kind_) == ((rt_int)8LL))) || (G_NV((*(P171)rt_nil_check(F->e_1118)).kind_) == ((rt_int)15LL)))) {
F->result_ = f_root_name_1119(F->up, (*(P171)rt_nil_check(F->e_1118)).a_);
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_pure_target_1122(struct f_greenc_1fr *up_, P171 target_1120, rt_int line_1121) {
  struct f_check_pure_target_1122fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->target_1120 = target_1120;
F->line_1121 = line_1121;
F->n_2762 = NULL;
F->y_2763 = NULL;
if ((F->up->pure_sym_200 == NULL)) {
goto ret_;
}
if (G_NV(F->up->last_deref_204)) {
f_fail_232(F->up, F->line_1121, cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->up->pure_sym_200)).name_))), rt_g_lit(" may not change an object designated by an access value (RM79 6.5)", 66)));
}
F->n_2762 = f_root_name_1119(F->up, F->target_1120);
if ((F->n_2762 != NULL)) {
F->y_2763 = f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->n_2762)).name_)));
if ((((F->y_2763 != NULL) && (G_NV((*(P114)rt_nil_check(F->y_2763)).kind_) == ((rt_int)1LL))) && (G_NV((*(P114)rt_nil_check(F->y_2763)).depth_) < G_NV(F->up->pure_depth_201)))) {
f_fail_232(F->up, F->line_1121, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->up->pure_sym_200)).name_))), rt_g_lit(" may not assign to ", 19)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->n_2762)).name_))), rt_g_lit(", which is not local to it (RM79 6.5)", 37)));
}
}
ret_:

  return;
}

static int f_assigns_nonlocal_1125(struct f_greenc_1fr *up_, P171 d_1123, rt_gstr name_1124) {
  struct f_assigns_nonlocal_1125fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_1123 = d_1123;
F->name_1124 = cp_rt_gstr(name_1124);
if (f_scan_assigns_1136(F->up, (*(P171)rt_nil_check(F->d_1123)).d_, F->d_1123, F->name_1124)) {
F->result_ = 1;
goto ret_;
}
F->result_ = f_scan_handlers_1132(F->up, (*(P171)rt_nil_check(F->d_1123)).e_, F->d_1123, F->name_1124);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_declares_1128(struct f_greenc_1fr *up_, P171 d_1126, rt_gstr name_1127) {
  struct f_declares_1128fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_1126 = d_1126;
F->name_1127 = cp_rt_gstr(name_1127);
F->p_2764 = NULL;
F->p_2764 = (*(P171)rt_nil_check(F->d_1126)).a_;
F->e_2765 = NULL;
F->e_2765 = (*(P171)rt_nil_check(F->d_1126)).c_;
while ((F->p_2764 != NULL)) {
if (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->p_2764)).name_)), F->name_1127)) {
F->result_ = 1;
goto ret_;
}
F->p_2764 = (*(P171)rt_nil_check(F->p_2764)).next_;
}
L_end_2766: ;
while ((F->e_2765 != NULL)) {
if ((((*(P171)rt_nil_check(F->e_2765)).name_ != NULL) && eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_2765)).name_)), F->name_1127))) {
F->result_ = 1;
goto ret_;
}
F->e_2765 = (*(P171)rt_nil_check(F->e_2765)).next_;
}
L_end_2767: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_scan_handlers_1132(struct f_greenc_1fr *up_, P171 h_1129, P171 d_1130, rt_gstr name_1131) {
  struct f_scan_handlers_1132fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->h_1129 = h_1129;
F->d_1130 = d_1130;
F->name_1131 = cp_rt_gstr(name_1131);
F->p_2768 = NULL;
F->p_2768 = F->h_1129;
while ((F->p_2768 != NULL)) {
if (f_scan_assigns_1136(F->up, (*(P171)rt_nil_check(F->p_2768)).b_, F->d_1130, F->name_1131)) {
F->result_ = 1;
goto ret_;
}
F->p_2768 = (*(P171)rt_nil_check(F->p_2768)).next_;
}
L_end_2769: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_scan_assigns_1136(struct f_greenc_1fr *up_, P171 stmts_1133, P171 d_1134, rt_gstr name_1135) {
  struct f_scan_assigns_1136fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_1133 = stmts_1133;
F->d_1134 = d_1134;
F->name_1135 = cp_rt_gstr(name_1135);
F->s_2770 = NULL;
F->s_2770 = F->stmts_1133;
F->a_2771 = NULL;
F->r_2772 = NULL;
while ((F->s_2770 != NULL)) {
if ((G_NV((*(P171)rt_nil_check(F->s_2770)).kind_) == ((rt_int)20LL))) {
F->r_2772 = f_root_name_1119(F->up, (*(P171)rt_nil_check(F->s_2770)).a_);
if ((((F->r_2772 != NULL) && eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->r_2772)).name_)), F->name_1135)) && (!f_declares_1128(F->up, F->d_1134, F->name_1135)))) {
F->result_ = 1;
goto ret_;
}
} else if ((G_NV((*(P171)rt_nil_check(F->s_2770)).kind_) == ((rt_int)22LL))) {
F->a_2771 = (*(P171)rt_nil_check(F->s_2770)).a_;
while ((F->a_2771 != NULL)) {
if (f_scan_assigns_1136(F->up, (*(P171)rt_nil_check(F->a_2771)).b_, F->d_1134, F->name_1135)) {
F->result_ = 1;
goto ret_;
}
F->a_2771 = (*(P171)rt_nil_check(F->a_2771)).next_;
}
L_end_2774: ;
if (f_scan_assigns_1136(F->up, (*(P171)rt_nil_check(F->s_2770)).b_, F->d_1134, F->name_1135)) {
F->result_ = 1;
goto ret_;
}
} else if ((G_NV((*(P171)rt_nil_check(F->s_2770)).kind_) == ((rt_int)23LL))) {
F->a_2771 = (*(P171)rt_nil_check(F->s_2770)).b_;
while ((F->a_2771 != NULL)) {
if (f_scan_assigns_1136(F->up, (*(P171)rt_nil_check(F->a_2771)).b_, F->d_1134, F->name_1135)) {
F->result_ = 1;
goto ret_;
}
F->a_2771 = (*(P171)rt_nil_check(F->a_2771)).next_;
}
L_end_2775: ;
if (f_scan_assigns_1136(F->up, (*(P171)rt_nil_check(F->s_2770)).c_, F->d_1134, F->name_1135)) {
F->result_ = 1;
goto ret_;
}
} else if ((G_NV((*(P171)rt_nil_check(F->s_2770)).kind_) == ((rt_int)24LL))) {
if (f_scan_assigns_1136(F->up, (*(P171)rt_nil_check(F->s_2770)).b_, F->d_1134, F->name_1135)) {
F->result_ = 1;
goto ret_;
}
} else if ((G_NV((*(P171)rt_nil_check(F->s_2770)).kind_) == ((rt_int)25LL))) {
if ((f_scan_assigns_1136(F->up, (*(P171)rt_nil_check(F->s_2770)).b_, F->d_1134, F->name_1135) || f_scan_handlers_1132(F->up, (*(P171)rt_nil_check(F->s_2770)).c_, F->d_1134, F->name_1135))) {
F->result_ = 1;
goto ret_;
}
}
F->s_2770 = (*(P171)rt_nil_check(F->s_2770)).next_;
}
L_end_2773: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_call_rules_1139(struct f_greenc_1fr *up_, P171 e_1137, P114 y_1138) {
  struct f_check_call_rules_1139fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1137 = e_1137;
F->y_1138 = y_1138;
F->z_2776 = NULL;
F->s_2777 = NULL;
if ((((F->up->pure_sym_200 != NULL) && ((G_NV((*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_1138)).result_)).kind_) == ((rt_int)9LL)) || G_NV((*(P114)rt_nil_check(F->y_1138)).vrp_))) && (G_NV((*(P114)rt_nil_check(F->y_1138)).depth_) < G_NV(F->up->pure_depth_201)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_1137)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->up->pure_sym_200)).name_))), rt_g_lit(" may not call procedure ", 24)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1138)).name_))), rt_g_lit(": it could have side effects (RM79 6.5)", 39)));
}
if (((!G_NV((*(P114)rt_nil_check(F->y_1138)).vrp_)) || (G_NV(F->up->trial_152) > ((rt_int)0LL)))) {
goto ret_;
}
if ((!G_NV(F->up->vrp_ok_202))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_1137)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("value-returning procedure ", 26), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1138)).name_))), rt_g_lit(" can be called only in an assignment, an initialization or a procedure call (RM79 6.5)", 86)));
}
F->s_2777 = F->up->scope_stack_118;
while ((F->s_2777 != NULL)) {
if (((((G_NV((*(P114)rt_nil_check(F->s_2777)).kind_) == ((rt_int)1LL)) && (G_NV((*(P114)rt_nil_check(F->s_2777)).depth_) <= G_NV((*(P114)rt_nil_check(F->y_1138)).depth_))) && (f_lookup_396(F->up, (*(P137)rt_nil_check((*(P114)rt_nil_check(F->s_2777)).name_))) == F->s_2777)) && f_assigns_nonlocal_1125(F->up, (*(P114)rt_nil_check(F->y_1138)).decl_, (*(P137)rt_nil_check((*(P114)rt_nil_check(F->s_2777)).name_))))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_1137)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("value-returning procedure ", 26), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1138)).name_))), rt_g_lit(" assigns ", 9)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->s_2777)).name_))), rt_g_lit(", which is visible here; it can be called only outside its scope (RM79 6.5)", 75)));
}
F->s_2777 = (*(P114)rt_nil_check(F->s_2777)).stack_;
}
L_end_2778: ;
ret_:

  return;
}

static void f_generic_p_1141(struct f_greenc_1fr *up_, P171 *res_1140) {
  struct f_generic_p_1141fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1140 = res_1140;
F->x_2779 = NULL;
F->p_2780 = NULL;
F->head_2781 = NULL;
F->tail_2782 = NULL;
F->names_2783 = NULL;
F->st_2784 = NULL;
F->def_2785 = NULL;
F->sub_2786 = NULL;
F->def_name_text_2787 = NULL;
F->more_2788 = INT_MIN;
F->more_2788 = 1;
f_expect_kw_307(F->up, rt_g_lit("GENERIC", 7));
F->x_2779 = f_nn_285(F->up, ((rt_int)54LL), f_cur_line_292(F->up));
if (f_at_op_296(F->up, rt_g_lit("(", 1))) {
f_skip_305(F->up);
while (G_NV(F->more_2788)) {
if (f_at_kw_294(F->up, rt_g_lit("RESTRICTED", 10))) {
f_skip_305(F->up);
}
if (f_at_kw_294(F->up, rt_g_lit("TYPE", 4))) {
f_skip_305(F->up);
F->p_2780 = f_nn_285(F->up, ((rt_int)47LL), f_cur_line_292(F->up));
(*(P171)rt_nil_check(F->p_2780)).ival_ = ((rt_int)10LL);
f_expect_id_311(F->up, &(*(P171)rt_nil_check(F->p_2780)).name_);
f_append_289(F->up, &F->head_2781, &F->tail_2782, F->p_2780);
} else if ((f_at_kw_294(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_294(F->up, rt_g_lit("FUNCTION", 8)))) {
F->p_2780 = f_nn_285(F->up, ((rt_int)47LL), f_cur_line_292(F->up));
(*(P171)rt_nil_check(F->p_2780)).ival_ = ((rt_int)11LL);
if (f_at_kw_294(F->up, rt_g_lit("PROCEDURE", 9))) {
F->sub_2786 = f_nn_285(F->up, ((rt_int)44LL), f_cur_line_292(F->up));
} else {
F->sub_2786 = f_nn_285(F->up, ((rt_int)45LL), f_cur_line_292(F->up));
}
f_skip_305(F->up);
f_designator_369(F->up, &(*(P171)rt_nil_check(F->sub_2786)).name_);
if (f_at_op_296(F->up, rt_g_lit("(", 1))) {
f_formal_part_367(F->up, &(*(P171)rt_nil_check(F->sub_2786)).a_);
}
if (f_at_kw_294(F->up, rt_g_lit("RETURN", 6))) {
f_skip_305(F->up);
f_subtype_ind_349(F->up, &(*(P171)rt_nil_check(F->sub_2786)).b_);
}
(*(P171)rt_nil_check(F->sub_2786)).ival_ = ((rt_int)1LL);
(*(P171)rt_nil_check(F->p_2780)).name_ = (*(P171)rt_nil_check(F->sub_2786)).name_;
(*(P171)rt_nil_check(F->p_2780)).a_ = F->sub_2786;
if (f_at_kw_294(F->up, rt_g_lit("IS", 2))) {
f_skip_305(F->up);
if (f_at_kind_298(F->up, ((rt_int)6LL))) {
f_designator_369(F->up, &F->def_name_text_2787);
(*(P171)rt_nil_check(F->p_2780)).b_ = f_nn_285(F->up, ((rt_int)5LL), f_cur_line_292(F->up));
(*(P171)rt_nil_check((*(P171)rt_nil_check(F->p_2780)).b_)).name_ = F->def_name_text_2787;
} else {
f_name_p_343(F->up, &(*(P171)rt_nil_check(F->p_2780)).b_);
}
}
f_append_289(F->up, &F->head_2781, &F->tail_2782, F->p_2780);
} else {
f_id_list_315(F->up, &F->names_2783);
f_expect_op_309(F->up, rt_g_lit(":", 1));
if (f_at_kw_294(F->up, rt_g_lit("IN", 2))) {
f_skip_305(F->up);
}
f_subtype_ind_349(F->up, &F->st_2784);
F->def_2785 = NULL;
if (f_at_op_296(F->up, rt_g_lit(":=", 2))) {
f_skip_305(F->up);
f_expr_322(F->up, &F->def_2785);
}
while ((F->names_2783 != NULL)) {
F->p_2780 = f_nn_285(F->up, ((rt_int)47LL), G_NV((*(P171)rt_nil_check(F->names_2783)).line_));
(*(P171)rt_nil_check(F->p_2780)).ival_ = ((rt_int)1LL);
(*(P171)rt_nil_check(F->p_2780)).name_ = (*(P171)rt_nil_check(F->names_2783)).name_;
(*(P171)rt_nil_check(F->p_2780)).a_ = F->st_2784;
(*(P171)rt_nil_check(F->p_2780)).b_ = F->def_2785;
f_append_289(F->up, &F->head_2781, &F->tail_2782, F->p_2780);
F->names_2783 = (*(P171)rt_nil_check(F->names_2783)).next_;
}
L_end_2790: ;
}
F->more_2788 = f_at_op_296(F->up, rt_g_lit(";", 1));
if (G_NV(F->more_2788)) {
f_skip_305(F->up);
}
}
L_end_2789: ;
f_expect_op_309(F->up, rt_g_lit(")", 1));
}
if ((f_at_kw_294(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_294(F->up, rt_g_lit("FUNCTION", 8)))) {
f_subprogram_371(F->up, &(*(P171)rt_nil_check(F->x_2779)).b_);
} else if (f_at_kw_294(F->up, rt_g_lit("PACKAGE", 7))) {
f_package_p_377(F->up, &(*(P171)rt_nil_check(F->x_2779)).b_);
} else if (f_at_kw_294(F->up, rt_g_lit("TASK", 4))) {
f_task_p_1011(F->up, &(*(P171)rt_nil_check(F->x_2779)).b_);
} else {
f_perror_304(F->up, rt_g_lit("a generic unit is a subprogram, a package or a task", 51));
}
(*(P171)rt_nil_check(F->x_2779)).a_ = F->head_2781;
(*(P171)rt_nil_check(F->x_2779)).name_ = (*(P171)rt_nil_check((*(P171)rt_nil_check(F->x_2779)).b_)).name_;
(*F->res_1140) = F->x_2779;
ret_:

  return;
}

static void f_instantiation_1144(struct f_greenc_1fr *up_, P171 x_1142, P171 *res_1143) {
  struct f_instantiation_1144fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_1142 = x_1142;
F->res_1143 = res_1143;
F->i_2791 = NULL;
F->head_2792 = NULL;
F->tail_2793 = NULL;
F->a_2794 = NULL;
F->formal_2795 = NULL;
F->mark_2796 = INT64_MIN;
F->more_2797 = INT_MIN;
F->more_2797 = 1;
f_expect_kw_307(F->up, rt_g_lit("IS", 2));
f_expect_kw_307(F->up, rt_g_lit("NEW", 3));
F->i_2791 = f_nn_285(F->up, ((rt_int)53LL), G_NV((*(P171)rt_nil_check(F->x_1142)).line_));
(*(P171)rt_nil_check(F->i_2791)).name_ = (*(P171)rt_nil_check(F->x_1142)).name_;
(*(P171)rt_nil_check(F->i_2791)).ival_ = G_NV((*(P171)rt_nil_check(F->x_1142)).kind_);
f_expect_id_311(F->up, &(*(P171)rt_nil_check(F->i_2791)).tag_);
if (f_at_op_296(F->up, rt_g_lit("(", 1))) {
f_skip_305(F->up);
while (G_NV(F->more_2797)) {
F->formal_2795 = NULL;
F->mark_2796 = ((rt_int)0LL);
if (((f_at_kind_298(F->up, ((rt_int)1LL)) && (f_kind_at_300(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_302(F->up, ((rt_int)1LL)), rt_g_lit("IS", 2)))) {
f_expect_id_311(F->up, &F->formal_2795);
f_skip_305(F->up);
F->mark_2796 = ((rt_int)5LL);
} else if (((f_at_kind_298(F->up, ((rt_int)1LL)) && (f_kind_at_300(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && ((eq_rt_gstr(f_text_at_302(F->up, ((rt_int)1LL)), rt_g_lit(":=", 2)) || eq_rt_gstr(f_text_at_302(F->up, ((rt_int)1LL)), rt_g_lit("=:", 2))) || eq_rt_gstr(f_text_at_302(F->up, ((rt_int)1LL)), rt_g_lit(":=:", 3))))) {
f_expect_id_311(F->up, &F->formal_2795);
f_skip_305(F->up);
F->mark_2796 = ((rt_int)1LL);
}
if ((f_at_kind_298(F->up, ((rt_int)6LL)) && (G_NV(F->mark_2796) == ((rt_int)5LL)))) {
F->a_2794 = f_nn_285(F->up, ((rt_int)5LL), f_cur_line_292(F->up));
f_designator_369(F->up, &(*(P171)rt_nil_check(F->a_2794)).name_);
} else {
f_expr_322(F->up, &F->a_2794);
}
(*(P171)rt_nil_check(F->a_2794)).formal_ = F->formal_2795;
(*(P171)rt_nil_check(F->a_2794)).flag_ = G_NV(F->mark_2796);
f_append_289(F->up, &F->head_2792, &F->tail_2793, F->a_2794);
F->more_2797 = f_at_op_296(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_2797)) {
f_skip_305(F->up);
}
}
L_end_2798: ;
f_expect_op_309(F->up, rt_g_lit(")", 1));
}
f_expect_op_309(F->up, rt_g_lit(";", 1));
(*(P171)rt_nil_check(F->i_2791)).a_ = F->head_2792;
(*F->res_1143) = F->i_2791;
ret_:

  return;
}

static void f_generic_decl_1146(struct f_greenc_1fr *up_, P171 e_1145) {
  struct f_generic_decl_1146fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1145 = e_1145;
F->y_2799 = NULL;
if ((G_NV((*(P171)rt_nil_check(F->e_1145)).kind_) == ((rt_int)54LL))) {
F->y_2799 = f_new_sym_439(F->up, ((rt_int)11LL), (*(P171)rt_nil_check(F->e_1145)).name_);
(*(P114)rt_nil_check(F->y_2799)).decl_ = F->e_1145;
f_define_434(F->up, F->y_2799, G_NV((*(P171)rt_nil_check(F->e_1145)).line_));
} else if ((G_NV((*(P171)rt_nil_check(F->e_1145)).kind_) == ((rt_int)53LL))) {
f_instantiate_1167(F->up, F->e_1145);
} else {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_1145)).line_), rt_g_lit("this declaration is not handled", 31));
}
ret_:

  return;
}

static int f_is_generic_name_1148(struct f_greenc_1fr *up_, rt_gstr n_1147) {
  struct f_is_generic_name_1148fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1147 = cp_rt_gstr(n_1147);
F->y_2800 = NULL;
F->y_2800 = f_lookup_396(F->up, F->n_1147);
if ((!(F->y_2800 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P114)rt_nil_check(F->y_2800)).kind_) == ((rt_int)11LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_attach_generic_body_1150(struct f_greenc_1fr *up_, P171 e_1149) {
  struct f_attach_generic_body_1150fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1149 = e_1149;
F->y_2801 = NULL;
F->y_2801 = f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_1149)).name_)));
(*(P171)rt_nil_check((*(P114)rt_nil_check(F->y_2801)).decl_)).c_ = F->e_1149;
F->up->generic_contexts_145 = ({ R144 *cell2802 = rt_alloc(sizeof(R144)); *cell2802 = cp_R144(({ R144 ag2803; ag2803.body_node_ = F->e_1149; ag2803.visible_ = F->up->scope_stack_118; ag2803.next_ = F->up->generic_contexts_145; ag2803; })); (P143)cell2802; });
ret_:

  return;
}

static void f_restore_generic_context_1153(struct f_greenc_1fr *up_, P171 body_node_1151, rt_int line_1152) {
  struct f_restore_generic_context_1153fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->body_node_1151 = body_node_1151;
F->line_1152 = line_1152;
F->ctx_2804 = NULL;
F->ctx_2804 = F->up->generic_contexts_145;
F->m_2805 = NULL;
F->z_2806 = NULL;
F->seen_2807 = INT_MIN;
while (((F->ctx_2804 != NULL) && ((*(P143)rt_nil_check(F->ctx_2804)).body_node_ != F->body_node_1151))) {
F->ctx_2804 = (*(P143)rt_nil_check(F->ctx_2804)).next_;
}
L_end_2808: ;
if ((F->ctx_2804 == NULL)) {
goto ret_;
}
F->m_2805 = (*(P143)rt_nil_check(F->ctx_2804)).visible_;
while ((F->m_2805 != NULL)) {
if (((G_NV((*(P114)rt_nil_check(F->m_2805)).level_) <= ((rt_int)0LL)) && (G_NV((*(P114)rt_nil_check(F->m_2805)).kind_) != ((rt_int)11LL)))) {
F->z_2806 = ({ A113 ix2810 = F->up->table_116; ix2810.p[rt_index(f_hash_394(F->up, (*(P137)rt_nil_check((*(P114)rt_nil_check(F->m_2805)).name_))), ix2810.lo, ix2810.hi) - ix2810.lo]; });
F->seen_2807 = 0;
while ((F->z_2806 != NULL)) {
if (((G_NV((*(P114)rt_nil_check(F->z_2806)).depth_) == G_NV(F->up->depth_117)) && eq_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->z_2806)).name_)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->m_2805)).name_))))) {
F->seen_2807 = 1;
}
F->z_2806 = (*(P114)rt_nil_check(F->z_2806)).chain_;
}
L_end_2811: ;
if ((!G_NV(F->seen_2807))) {
f_copy_sym_967(F->up, F->m_2805, &F->z_2806);
f_define_434(F->up, F->z_2806, F->line_1152);
}
}
F->m_2805 = (*(P114)rt_nil_check(F->m_2805)).stack_;
}
L_end_2809: ;
ret_:

  return;
}

static P171 f_gactual_1157(struct f_greenc_1fr *up_, P171 args_1154, rt_int nth_1155, rt_gstr name_1156) {
  struct f_gactual_1157fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->args_1154 = args_1154;
F->nth_1155 = nth_1155;
F->name_1156 = cp_rt_gstr(name_1156);
F->a_2812 = NULL;
F->a_2812 = F->args_1154;
F->i_2813 = INT64_MIN;
F->i_2813 = ((rt_int)1LL);
while ((F->a_2812 != NULL)) {
if ((((*(P171)rt_nil_check(F->a_2812)).formal_ == NULL) && (G_NV(F->i_2813) == F->nth_1155))) {
F->result_ = F->a_2812;
goto ret_;
}
if ((((*(P171)rt_nil_check(F->a_2812)).formal_ != NULL) && eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->a_2812)).formal_)), F->name_1156))) {
F->result_ = F->a_2812;
goto ret_;
}
if (((*(P171)rt_nil_check(F->a_2812)).formal_ == NULL)) {
F->i_2813 = rt_add(G_NV(F->i_2813), ((rt_int)1LL));
}
F->a_2812 = (*(P171)rt_nil_check(F->a_2812)).next_;
}
L_end_2814: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_copy_node_1161(struct f_greenc_1fr *up_, P171 n_1158, P137 name_1159, P171 *r_1160) {
  struct f_copy_node_1161fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1158 = n_1158;
F->name_1159 = name_1159;
F->r_1160 = r_1160;
(*F->r_1160) = f_nn_285(F->up, G_NV((*(P171)rt_nil_check(F->n_1158)).kind_), G_NV((*(P171)rt_nil_check(F->n_1158)).line_));
as_R172(&(*(P171)rt_nil_check((*F->r_1160))), (*(P171)rt_nil_check(F->n_1158)));
(*(P171)rt_nil_check((*F->r_1160))).name_ = F->name_1159;
(*(P171)rt_nil_check((*F->r_1160))).next_ = NULL;
ret_:

  return;
}

static int f_matches_formal_1165(struct f_greenc_1fr *up_, P114 y_1162, rt_gstr name_1163, P114 fs_1164) {
  struct f_matches_formal_1165fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1162 = y_1162;
F->name_1163 = cp_rt_gstr(name_1163);
F->fs_1164 = fs_1164;
if (((!eq_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1162)).name_)), F->name_1163)) || ((G_NV((*(P114)rt_nil_check(F->y_1162)).kind_) != ((rt_int)3LL)) && (G_NV((*(P114)rt_nil_check(F->y_1162)).kind_) != ((rt_int)4LL))))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (f_same_signature_428(F->up, (*(P114)rt_nil_check(F->y_1162)).params_, (*(P114)rt_nil_check(F->fs_1164)).params_) && f_same_416(F->up, (*(P114)rt_nil_check(F->y_1162)).result_, (*(P114)rt_nil_check(F->fs_1164)).result_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_instantiate_1167(struct f_greenc_1fr *up_, P171 e_1166) {
  struct f_instantiate_1167fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1166 = e_1166;
F->g_2815 = NULL;
F->g_2815 = f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_1166)).tag_)));
F->gd_2816 = NULL;
F->pat_2817 = NULL;
F->f_2818 = NULL;
F->a_2819 = NULL;
F->cn_2820 = NULL;
F->y_2821 = NULL;
F->z_2822 = NULL;
F->fs_2823 = NULL;
F->nth_2824 = INT64_MIN;
F->nth_2824 = ((rt_int)1LL);
F->t_2825 = NULL;
F->vt_2826 = NULL;
F->c_2827 = NULL;
F->v_2828 = NULL;
F->acc_2829 = NULL;
F->x_2830 = NULL;
F->ok_2831 = INT_MIN;
if (((F->g_2815 == NULL) || (G_NV((*(P114)rt_nil_check(F->g_2815)).kind_) != ((rt_int)11LL)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_1166)).line_), cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_1166)).tag_)), rt_g_lit(" is not a generic unit", 22)));
}
F->gd_2816 = (*(P114)rt_nil_check(F->g_2815)).decl_;
F->pat_2817 = (*(P171)rt_nil_check(F->gd_2816)).b_;
f_open_scope_435(F->up);
F->f_2818 = (*(P171)rt_nil_check(F->gd_2816)).a_;
while ((F->f_2818 != NULL)) {
F->a_2819 = f_gactual_1157(F->up, (*(P171)rt_nil_check(F->e_1166)).a_, G_NV(F->nth_2824), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->f_2818)).name_)));
F->nth_2824 = rt_add(G_NV(F->nth_2824), ((rt_int)1LL));
if ((G_NV((*(P171)rt_nil_check(F->f_2818)).ival_) == ((rt_int)10LL))) {
if (((F->a_2819 == NULL) || (G_NV((*(P171)rt_nil_check(F->a_2819)).kind_) != ((rt_int)5LL)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_1166)).line_), cat_rt_gstr(rt_g_lit("a type is required for generic parameter ", 41), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->f_2818)).name_))));
}
F->y_2821 = f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->a_2819)).name_)));
if (((F->y_2821 == NULL) || (G_NV((*(P114)rt_nil_check(F->y_2821)).kind_) != ((rt_int)5LL)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_1166)).line_), cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->a_2819)).name_)), rt_g_lit(" is not a type", 14)));
}
f_copy_sym_967(F->up, F->y_2821, &F->z_2822);
(*(P114)rt_nil_check(F->z_2822)).name_ = (*(P171)rt_nil_check(F->f_2818)).name_;
f_define_434(F->up, F->z_2822, G_NV((*(P171)rt_nil_check(F->e_1166)).line_));
} else if ((G_NV((*(P171)rt_nil_check(F->f_2818)).ival_) == ((rt_int)11LL))) {
if ((F->a_2819 == NULL)) {
F->a_2819 = (*(P171)rt_nil_check(F->f_2818)).b_;
}
if (((F->a_2819 == NULL) || (G_NV((*(P171)rt_nil_check(F->a_2819)).kind_) != ((rt_int)5LL)))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_1166)).line_), cat_rt_gstr(rt_g_lit("a subprogram is required for generic parameter ", 47), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->f_2818)).name_))));
}
f_build_subprogram_616(F->up, (*(P171)rt_nil_check(F->f_2818)).a_, &F->fs_2823);
F->y_2821 = ({ A113 ix2833 = F->up->table_116; ix2833.p[rt_index(f_hash_394(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->a_2819)).name_))), ix2833.lo, ix2833.hi) - ix2833.lo]; });
while (((F->y_2821 != NULL) && (!f_matches_formal_1165(F->up, F->y_2821, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->a_2819)).name_)), F->fs_2823)))) {
F->y_2821 = (*(P114)rt_nil_check(F->y_2821)).chain_;
}
L_end_2834: ;
if ((F->y_2821 == NULL)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_1166)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no subprogram ", 14), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->a_2819)).name_))), rt_g_lit(" matches generic parameter ", 27)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->f_2818)).name_))));
}
f_copy_sym_967(F->up, F->y_2821, &F->z_2822);
(*(P114)rt_nil_check(F->z_2822)).name_ = (*(P171)rt_nil_check(F->f_2818)).name_;
f_define_434(F->up, F->z_2822, G_NV((*(P171)rt_nil_check(F->e_1166)).line_));
} else {
if ((F->a_2819 == NULL)) {
F->a_2819 = (*(P171)rt_nil_check(F->f_2818)).b_;
}
if ((F->a_2819 == NULL)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_1166)).line_), cat_rt_gstr(rt_g_lit("no actual for generic parameter ", 32), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->f_2818)).name_))));
}
f_resolve_477(F->up, (*(P171)rt_nil_check(F->f_2818)).a_, &F->t_2825, &F->c_2827);
f_gexpr_739(F->up, F->a_2819, F->t_2825, &F->vt_2826, &F->v_2828);
f_check_type_456(F->up, F->vt_2826, F->t_2825, G_NV((*(P171)rt_nil_check(F->e_1166)).line_));
F->z_2822 = f_new_sym_439(F->up, ((rt_int)2LL), (*(P171)rt_nil_check(F->f_2818)).name_);
f_storage_606(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->f_2818)).name_)), F->t_2825, &F->acc_2829);
f_copy_code_591(F->up, F->t_2825, (*(P137)rt_nil_check(F->v_2828)), &F->x_2830);
f_emit_238(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->acc_2829)), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->x_2830))), one_rt_gstr(59)));
(*(P114)rt_nil_check(F->z_2822)).t_ = F->t_2825;
(*(P114)rt_nil_check(F->z_2822)).c_ = F->c_2827;
(*(P114)rt_nil_check(F->z_2822)).ro_ = 1;
if ((G_NV((*(P119)rt_nil_check(F->t_2825)).kind_) == ((rt_int)1LL))) {
f_manifest_473(F->up, F->a_2819, &(*(P114)rt_nil_check(F->z_2822)).mvalue_, &F->ok_2831);
(*(P114)rt_nil_check(F->z_2822)).hasmv_ = G_NV(F->ok_2831);
}
f_bind_609(F->up, F->z_2822, F->acc_2829);
f_define_434(F->up, F->z_2822, G_NV((*(P171)rt_nil_check(F->e_1166)).line_));
}
F->f_2818 = (*(P171)rt_nil_check(F->f_2818)).next_;
}
L_end_2832: ;
if (((*(P171)rt_nil_check(F->gd_2816)).c_ != NULL)) {
f_restore_generic_context_1153(F->up, (*(P171)rt_nil_check(F->gd_2816)).c_, G_NV((*(P171)rt_nil_check(F->e_1166)).line_));
}
if (((G_NV((*(P171)rt_nil_check(F->pat_2817)).kind_) == ((rt_int)44LL)) || (G_NV((*(P171)rt_nil_check(F->pat_2817)).kind_) == ((rt_int)45LL)))) {
if ((G_NV((*(P171)rt_nil_check(F->pat_2817)).ival_) == ((rt_int)1LL))) {
if (((*(P171)rt_nil_check(F->gd_2816)).c_ == NULL)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_1166)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the body of generic ", 20), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_1166)).tag_))), rt_g_lit(" is not given before this instantiation", 39)));
}
F->pat_2817 = (*(P171)rt_nil_check(F->gd_2816)).c_;
}
f_copy_node_1161(F->up, F->pat_2817, (*(P171)rt_nil_check(F->e_1166)).name_, &F->cn_2820);
f_build_subprogram_616(F->up, F->cn_2820, &F->y_2821);
f_define_434(F->up, F->y_2821, G_NV((*(P171)rt_nil_check(F->e_1166)).line_));
f_subprogram_body_633(F->up, F->cn_2820, F->y_2821);
} else if ((G_NV((*(P171)rt_nil_check(F->pat_2817)).kind_) == ((rt_int)48LL))) {
f_copy_node_1161(F->up, F->pat_2817, (*(P171)rt_nil_check(F->e_1166)).name_, &F->cn_2820);
f_package_spec_972(F->up, F->cn_2820);
F->y_2821 = f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_1166)).name_)));
if (((*(P171)rt_nil_check(F->gd_2816)).c_ != NULL)) {
f_copy_node_1161(F->up, (*(P171)rt_nil_check(F->gd_2816)).c_, (*(P171)rt_nil_check(F->e_1166)).name_, &F->cn_2820);
f_package_body_977(F->up, F->cn_2820);
}
} else {
f_copy_node_1161(F->up, F->pat_2817, (*(P171)rt_nil_check(F->e_1166)).name_, &F->cn_2820);
f_task_spec_1066(F->up, F->cn_2820);
F->y_2821 = f_lookup_396(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_1166)).name_)));
if (((*(P171)rt_nil_check(F->gd_2816)).c_ == NULL)) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->e_1166)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the body of generic task ", 25), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_1166)).tag_))), rt_g_lit(" is not given before this instantiation", 39)));
}
f_copy_node_1161(F->up, (*(P171)rt_nil_check(F->gd_2816)).c_, (*(P171)rt_nil_check(F->e_1166)).name_, &F->cn_2820);
f_task_body_1070(F->up, F->cn_2820);
}
f_close_scope_436(F->up);
f_define_434(F->up, F->y_2821, G_NV((*(P171)rt_nil_check(F->e_1166)).line_));
ret_:

  return;
}

static void f_predef_type_1172(struct f_greenc_1fr *up_, rt_gstr name_1168, P119 t_1169, rt_gstr lo_1170, rt_gstr hi_1171) {
  struct f_predef_type_1172fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1168 = cp_rt_gstr(name_1168);
F->t_1169 = t_1169;
F->lo_1170 = cp_rt_gstr(lo_1170);
F->hi_1171 = cp_rt_gstr(hi_1171);
F->y_2835 = NULL;
F->y_2835 = f_new_sym_439(F->up, ((rt_int)5LL), f_mk_211(F->up, F->name_1168));
(*(P114)rt_nil_check(F->y_2835)).t_ = F->t_1169;
if ((({ rt_gstr at2836 = F->lo_1170; at2836.hi >= at2836.lo ? at2836.hi - at2836.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
(*(P114)rt_nil_check(F->y_2835)).c_ = f_new_cons_442(F->up);
(*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_2835)).c_)).lo_ = f_mk_211(F->up, F->lo_1170);
(*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_2835)).c_)).hi_ = f_mk_211(F->up, F->hi_1171);
if (((({ rt_gstr at2837 = F->hi_1171; at2837.hi >= at2837.lo ? at2837.hi - at2837.lo + 1 : (rt_int)0; }) < ((rt_int)12LL)) && f_is_digit_218(F->up, G_NV(({ rt_gstr ix2841 = F->hi_1171; ix2841.p[rt_index(({ rt_gstr at2840 = F->hi_1171; at2840.lo; }), ix2841.lo, ix2841.hi) - ix2841.lo]; }))))) {
(*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_2835)).c_)).mlo_ = rt_int_of_str(rt_g_g2s(F->lo_1170));
(*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_2835)).c_)).mhi_ = rt_int_of_str(rt_g_g2s(F->hi_1171));
(*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_2835)).c_)).hasm_ = 1;
}
}
f_define_434(F->up, F->y_2835, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_const_1176(struct f_greenc_1fr *up_, rt_gstr name_1173, P119 t_1174, rt_gstr code_text_1175) {
  struct f_predef_const_1176fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1173 = cp_rt_gstr(name_1173);
F->t_1174 = t_1174;
F->code_text_1175 = cp_rt_gstr(code_text_1175);
F->y_2842 = NULL;
F->y_2842 = f_new_sym_439(F->up, ((rt_int)2LL), f_mk_211(F->up, F->name_1173));
(*(P114)rt_nil_check(F->y_2842)).t_ = F->t_1174;
(*(P114)rt_nil_check(F->y_2842)).ro_ = 1;
(*(P114)rt_nil_check(F->y_2842)).access_path_ = f_mk_211(F->up, F->code_text_1175);
f_define_434(F->up, F->y_2842, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_exc_1178(struct f_greenc_1fr *up_, rt_gstr name_1177) {
  struct f_predef_exc_1178fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1177 = cp_rt_gstr(name_1177);
F->y_2843 = NULL;
F->y_2843 = f_new_sym_439(F->up, ((rt_int)6LL), f_mk_211(F->up, F->name_1177));
(*(P114)rt_nil_check(F->y_2843)).cname_ = f_mk_211(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_exc(", 7), f_q_229(F->up)), F->name_1177), f_q_229(F->up)), one_rt_gstr(41)));
f_define_434(F->up, F->y_2843, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_lit_1182(struct f_greenc_1fr *up_, rt_gstr name_1179, P119 t_1180, rt_int v_1181) {
  struct f_predef_lit_1182fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1179 = cp_rt_gstr(name_1179);
F->t_1180 = t_1180;
F->v_1181 = v_1181;
F->y_2844 = NULL;
F->y_2844 = f_new_sym_439(F->up, ((rt_int)7LL), f_mk_211(F->up, F->name_1179));
(*(P114)rt_nil_check(F->y_2844)).t_ = F->t_1180;
(*(P114)rt_nil_check(F->y_2844)).result_ = F->t_1180;
(*(P114)rt_nil_check(F->y_2844)).mvalue_ = F->v_1181;
(*(P114)rt_nil_check(F->y_2844)).hasmv_ = 1;
f_define_434(F->up, F->y_2844, ((rt_int)0LL));
ret_:

  return;
}

static void f_predefine_1183(struct f_greenc_1fr *up_) {
  struct f_predefine_1183fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->control_2845 = cp_rt_gstr(cat_rt_gstr(rt_g_lit("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE ", 60), rt_g_lit("DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US ", 55)));
F->start_2846 = INT64_MIN;
F->start_2846 = ((rt_int)1LL);
F->code_no_2847 = INT64_MIN;
F->code_no_2847 = ((rt_int)0LL);
f_predef_type_1172(F->up, rt_g_lit("INTEGER", 7), F->up->ty_int_153, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1172(F->up, rt_g_lit("SHORT_INTEGER", 13), F->up->ty_short_164, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1172(F->up, rt_g_lit("LONG_INTEGER", 12), F->up->ty_long_165, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1172(F->up, rt_g_lit("NATURAL", 7), F->up->ty_int_153, rt_g_lit("1", 1), rt_g_lit("INT64_MAX", 9));
f_predef_type_1172(F->up, rt_g_lit("PRIORITY", 8), F->up->ty_int_153, rt_g_lit("0", 1), rt_g_lit("255", 3));
f_predef_type_1172(F->up, rt_g_lit("BOOLEAN", 7), F->up->ty_bool_154, rt_g_lit("0", 1), rt_g_lit("1", 1));
f_predef_type_1172(F->up, rt_g_lit("CHARACTER", 9), F->up->ty_char_156, rt_g_lit("0", 1), rt_g_lit("127", 3));
f_predef_type_1172(F->up, rt_g_lit("STRING", 6), F->up->ty_string_157, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1172(F->up, rt_g_lit("FLOAT", 5), F->up->ty_float_155, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1172(F->up, rt_g_lit("SHORT_FLOAT", 11), F->up->ty_sfloat_166, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1172(F->up, rt_g_lit("LONG_FLOAT", 10), F->up->ty_lfloat_167, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1172(F->up, rt_g_lit("TIME", 4), F->up->ty_time_168, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_lit_1182(F->up, rt_g_lit("FALSE", 5), F->up->ty_bool_154, ((rt_int)0LL));
f_predef_lit_1182(F->up, rt_g_lit("TRUE", 4), F->up->ty_bool_154, ((rt_int)1LL));
{ rt_int lo2851 = ((rt_int)1LL), hi2852 = ({ rt_gstr at2849 = F->control_2845; at2849.hi >= at2849.lo ? at2849.hi - at2849.lo + 1 : (rt_int)0; });
for (rt_int it2853 = lo2851; it2853 <= hi2852; it2853++) {
F->i_2850 = it2853;
if ((G_NV(({ rt_gstr ix2854 = F->control_2845; ix2854.p[rt_index(F->i_2850, ix2854.lo, ix2854.hi) - ix2854.lo]; })) == 32)) {
f_predef_const_1176(F->up, ({ rt_gstr sl2856 = F->control_2845; rt_int l_ = G_NV(F->start_2846), h_ = rt_sub(F->i_2850, ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl2856.lo, sl2856.hi); rt_index(h_, sl2856.lo, sl2856.hi); } sl2856.p += l_ - sl2856.lo; sl2856.lo = l_; sl2856.hi = h_; sl2856; }), F->up->ty_char_156, rt_g_s2g(rt_str_of_int(G_NV(F->code_no_2847))));
F->code_no_2847 = rt_add(G_NV(F->code_no_2847), ((rt_int)1LL));
F->start_2846 = rt_add(F->i_2850, ((rt_int)1LL));
}
}
}
L_end_2848: ;
f_predef_const_1176(F->up, rt_g_lit("DEL", 3), F->up->ty_char_156, rt_g_lit("127", 3));
f_predef_const_1176(F->up, rt_g_lit("EXCLAM", 6), F->up->ty_char_156, rt_g_lit("33", 2));
f_predef_const_1176(F->up, rt_g_lit("DOLLAR", 6), F->up->ty_char_156, rt_g_lit("36", 2));
f_predef_const_1176(F->up, rt_g_lit("QUESTION", 8), F->up->ty_char_156, rt_g_lit("63", 2));
f_predef_const_1176(F->up, rt_g_lit("AT_SIGN", 7), F->up->ty_char_156, rt_g_lit("64", 2));
f_predef_const_1176(F->up, rt_g_lit("L_BRACKET", 9), F->up->ty_char_156, rt_g_lit("91", 2));
f_predef_const_1176(F->up, rt_g_lit("BACK_SLASH", 10), F->up->ty_char_156, rt_g_lit("92", 2));
f_predef_const_1176(F->up, rt_g_lit("R_BRACKET", 9), F->up->ty_char_156, rt_g_lit("93", 2));
f_predef_const_1176(F->up, rt_g_lit("CIRCUMFLEX", 10), F->up->ty_char_156, rt_g_lit("94", 2));
f_predef_const_1176(F->up, rt_g_lit("GRAVE", 5), F->up->ty_char_156, rt_g_lit("96", 2));
f_predef_const_1176(F->up, rt_g_lit("L_BRACE", 7), F->up->ty_char_156, rt_g_lit("123", 3));
f_predef_const_1176(F->up, rt_g_lit("R_BRACE", 7), F->up->ty_char_156, rt_g_lit("125", 3));
f_predef_const_1176(F->up, rt_g_lit("TILDE", 5), F->up->ty_char_156, rt_g_lit("126", 3));
{ rt_int lo2859 = ((rt_int)0LL), hi2860 = ((rt_int)25LL);
for (rt_int it2861 = lo2859; it2861 <= hi2860; it2861++) {
F->i_2858 = it2861;
f_predef_const_1176(F->up, cat_rt_gstr(rt_g_lit("LC_", 3), one_rt_gstr(rt_range((rt_add(((rt_int)66LL), F->i_2858) - 1), 0, 127))), F->up->ty_char_156, rt_g_s2g(rt_str_of_int(rt_add(((rt_int)97LL), F->i_2858))));
}
}
L_end_2857: ;
f_predef_const_1176(F->up, rt_g_lit("NEWLINE", 7), F->up->ty_string_157, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_lit(", 9), f_q_229(F->up)), rt_g_lit("\\n", 2)), f_q_229(F->up)), rt_g_lit(", 1)", 4)));
f_predef_const_1176(F->up, rt_g_lit("SECONDS", 7), F->up->ty_time_168, rt_g_lit("((double)RT_SECONDS)", 20));
f_predef_exc_1178(F->up, rt_g_lit("ACCESS_ERROR", 12));
f_predef_exc_1178(F->up, rt_g_lit("ASSERT_ERROR", 12));
f_predef_exc_1178(F->up, rt_g_lit("DISCRIMINANT_ERROR", 18));
f_predef_exc_1178(F->up, rt_g_lit("DIVIDE_ERROR", 12));
f_predef_exc_1178(F->up, rt_g_lit("FAILURE", 7));
f_predef_exc_1178(F->up, rt_g_lit("INDEX_ERROR", 11));
f_predef_exc_1178(F->up, rt_g_lit("INITIATE_ERROR", 14));
f_predef_exc_1178(F->up, rt_g_lit("NO_VALUE_ERROR", 14));
f_predef_exc_1178(F->up, rt_g_lit("OVERFLOW", 8));
f_predef_exc_1178(F->up, rt_g_lit("OVERLAP_ERROR", 13));
f_predef_exc_1178(F->up, rt_g_lit("RANGE_ERROR", 11));
f_predef_exc_1178(F->up, rt_g_lit("SELECT_ERROR", 12));
f_predef_exc_1178(F->up, rt_g_lit("STORAGE_OVERFLOW", 16));
f_predef_exc_1178(F->up, rt_g_lit("TASKING_ERROR", 13));
f_predef_exc_1178(F->up, rt_g_lit("UNDERFLOW", 9));
f_predef_exc_1178(F->up, rt_g_lit("END_OF_FILE", 11));
ret_:

  return;
}

static void f_translate_1185(struct f_greenc_1fr *up_, P171 u_1184) {
  struct f_translate_1185fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->u_1184 = u_1184;
F->p_2862 = NULL;
F->p_2862 = F->u_1184;
F->y_2863 = NULL;
f_open_scope_435(F->up);
while ((F->p_2862 != NULL)) {
if (((*(P171)rt_nil_check(F->p_2862)).next_ == NULL)) {
if (((G_NV((*(P171)rt_nil_check(F->p_2862)).kind_) != ((rt_int)44LL)) || ((*(P171)rt_nil_check(F->p_2862)).a_ != NULL))) {
f_fail_232(F->up, G_NV((*(P171)rt_nil_check(F->p_2862)).line_), rt_g_lit("the main program is a procedure without parameters", 50));
}
f_build_subprogram_616(F->up, F->p_2862, &F->y_2863);
f_define_434(F->up, F->y_2863, G_NV((*(P171)rt_nil_check(F->p_2862)).line_));
f_subprogram_body_633(F->up, F->p_2862, F->y_2863);
F->up->main_name_205 = (*(P114)rt_nil_check(F->y_2863)).cname_;
} else {
f_decl_element_620(F->up, F->p_2862);
}
F->p_2862 = (*(P171)rt_nil_check(F->p_2862)).next_;
}
L_end_2864: ;
ret_:

  return;
}

static void f_print_program_1186(struct f_greenc_1fr *up_) {
  struct f_print_program_1186fr *F = rt_alloc(sizeof *F);
F->up = up_;
f_emit_helpers_600(F->up);
rt_g_put(rt_g_g2s(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("#include ", 9), f_q_229(F->up)), rt_g_lit("paleo.h", 7)), f_q_229(F->up))));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
rt_g_put(rt_g_g2s(rt_g_lit("#include <math.h>", 17)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
f_print_buffer_240(F->up, F->up->out_types_125);
f_print_buffer_240(F->up, F->up->out_frames_126);
f_print_buffer_240(F->up, F->up->out_helpers_127);
f_print_buffer_240(F->up, F->up->out_protos_128);
f_print_buffer_240(F->up, F->up->out_globals_129);
f_print_buffer_240(F->up, F->up->out_funcs_130);
rt_g_put(rt_g_g2s(rt_g_lit("int main(int argc, char **argv) {", 33)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
rt_g_put(rt_g_g2s(rt_g_lit("  rt_init(argc, argv);", 22)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
rt_g_put(rt_g_g2s(rt_g_lit("  rt_set_lang(1);", 17)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
f_print_buffer_240(F->up, F->up->out_excs_132);
f_print_buffer_240(F->up, F->up->out_init_131);
rt_g_put(rt_g_g2s(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P137)rt_nil_check(F->up->main_name_205))), rt_g_lit("();", 3))));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
f_print_buffer_240(F->up, F->up->out_awaits_193);
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
F->n_arm_59 = ((rt_int)60LL);
F->n_label_60 = ((rt_int)61LL);
F->n_handler_61 = ((rt_int)62LL);
F->n_comp_62 = ((rt_int)63LL);
F->n_alt_63 = ((rt_int)64LL);
F->d_enum_64 = ((rt_int)70LL);
F->d_range_65 = ((rt_int)71LL);
F->d_float_66 = ((rt_int)72LL);
F->d_array_67 = ((rt_int)73LL);
F->d_record_68 = ((rt_int)74LL);
F->d_access_69 = ((rt_int)75LL);
F->d_derived_70 = ((rt_int)76LL);
F->d_private_71 = ((rt_int)77LL);
F->s_mark_72 = ((rt_int)80LL);
F->m_in_73 = ((rt_int)1LL);
F->m_inout_74 = ((rt_int)2LL);
F->m_out_75 = ((rt_int)3LL);
F->t_int_76 = ((rt_int)1LL);
F->t_bool_77 = ((rt_int)2LL);
F->t_float_78 = ((rt_int)3LL);
F->t_enum_79 = ((rt_int)4LL);
F->t_string_80 = ((rt_int)5LL);
F->t_array_81 = ((rt_int)6LL);
F->t_record_82 = ((rt_int)7LL);
F->t_ptr_83 = ((rt_int)8LL);
F->t_void_84 = ((rt_int)9LL);
F->t_nil_85 = ((rt_int)10LL);
F->t_char_86 = ((rt_int)11LL);
F->t_univ_87 = ((rt_int)12LL);
F->t_act_88 = ((rt_int)13LL);
F->t_tdecl_89 = ((rt_int)14LL);
F->t_entry_90 = ((rt_int)15LL);
F->t_fixed_91 = ((rt_int)16LL);
F->y_var_92 = ((rt_int)1LL);
F->y_const_93 = ((rt_int)2LL);
F->y_func_94 = ((rt_int)3LL);
F->y_proc_95 = ((rt_int)4LL);
F->y_type_96 = ((rt_int)5LL);
F->y_exc_97 = ((rt_int)6LL);
F->y_enumlit_98 = ((rt_int)7LL);
F->y_package_99 = ((rt_int)8LL);
F->y_task_100 = ((rt_int)9LL);
F->y_entry_101 = ((rt_int)10LL);
F->y_generic_102 = ((rt_int)11LL);
F->f_const_obj_103 = ((rt_int)1LL);
F->f_deferred_104 = ((rt_int)2LL);
F->toks_109.lo = ((rt_int)1LL); F->toks_109.hi = ((rt_int)1000000LL);
F->toks_109.lo2 = 1; F->toks_109.hi2 = 1;
F->toks_109.p = rt_alloc(sizeof(P107) * (size_t)G_CNT(F->toks_109));
F->ntoks_110 = INT64_MIN;
F->ntoks_110 = ((rt_int)0LL);
F->tpos_111 = INT64_MIN;
F->tpos_111 = ((rt_int)1LL);
F->src_line_112 = INT64_MIN;
F->src_line_112 = ((rt_int)0LL);
F->table_116.lo = ((rt_int)0LL); F->table_116.hi = ((rt_int)4092LL);
F->table_116.lo2 = 1; F->table_116.hi2 = 1;
F->table_116.p = rt_alloc(sizeof(P114) * (size_t)G_CNT(F->table_116));
F->depth_117 = INT64_MIN;
F->depth_117 = ((rt_int)0LL);
F->scope_stack_118 = NULL;
F->all_types_121 = NULL;
F->serial_122 = INT64_MIN;
F->serial_122 = ((rt_int)0LL);
F->out_types_125 = NULL;
F->out_frames_126 = NULL;
F->out_helpers_127 = NULL;
F->out_protos_128 = NULL;
F->out_globals_129 = NULL;
F->out_funcs_130 = NULL;
F->out_init_131 = NULL;
F->out_excs_132 = NULL;
F->code_133 = NULL;
F->fields_buf_134 = NULL;
F->in_func_135 = INT_MIN;
F->in_func_135 = 0;
F->cur_level_136 = INT64_MIN;
F->cur_level_136 = ((rt_int)0LL);
F->st_field_138 = NULL;
F->func_sym_139 = NULL;
F->exits_142 = NULL;
F->generic_contexts_145 = NULL;
F->accept_exits_146 = NULL;
F->frames_147 = INT64_MIN;
F->frames_147 = ((rt_int)0LL);
F->handlers_150 = NULL;
F->cleanups_151 = NULL;
F->trial_152 = INT64_MIN;
F->trial_152 = ((rt_int)0LL);
F->ty_int_153 = NULL;
F->ty_bool_154 = NULL;
F->ty_float_155 = NULL;
F->ty_char_156 = NULL;
F->ty_string_157 = NULL;
F->ty_void_158 = NULL;
F->ty_nil_159 = NULL;
F->ty_univ_160 = NULL;
F->ty_act_161 = NULL;
F->ty_tdecl_162 = NULL;
F->ty_entry_163 = NULL;
F->ty_short_164 = NULL;
F->ty_long_165 = NULL;
F->ty_sfloat_166 = NULL;
F->ty_lfloat_167 = NULL;
F->ty_time_168 = NULL;
F->ty_ufixed_169 = NULL;
F->completing_170 = NULL;
F->anon_node_173 = NULL;
F->anon_typ_174 = NULL;
F->anon_cons_177 = NULL;
F->agg_bounds_178 = NULL;
F->disc_syms_179 = NULL;
F->unit_names_181.lo = ((rt_int)1LL); F->unit_names_181.hi = ((rt_int)1000LL);
F->unit_names_181.lo2 = 1; F->unit_names_181.hi2 = 1;
F->unit_names_181.p = rt_alloc(sizeof(P137) * (size_t)G_CNT(F->unit_names_181));
F->unit_depths_183.lo = ((rt_int)1LL); F->unit_depths_183.hi = ((rt_int)1000LL);
F->unit_depths_183.lo2 = 1; F->unit_depths_183.hi2 = 1;
F->unit_depths_183.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->unit_depths_183));
for (rt_int i184 = 0; i184 < G_CNT(F->unit_depths_183); i184++) F->unit_depths_183.p[i184] = INT64_MIN;
F->nunits_185 = INT64_MIN;
F->nunits_185 = ((rt_int)0LL);
F->cur_task_186 = NULL;
F->accept_depth_187 = INT64_MIN;
F->accept_depth_187 = ((rt_int)0LL);
F->famarg_done_188 = INT_MIN;
F->famarg_done_188 = 0;
F->fam_ix_189 = NULL;
F->call_task_ix_190 = NULL;
F->saw_interface_191 = INT_MIN;
F->saw_interface_191 = 0;
F->defer_entry_structs_192 = INT_MIN;
F->defer_entry_structs_192 = 0;
F->out_awaits_193 = NULL;
F->no_cons_194 = NULL;
F->units_195 = NULL;
F->pkg_stack_196 = NULL;
F->cur_pkg_197 = NULL;
F->prefix_hint_198 = NULL;
F->call_want_199 = NULL;
F->pure_sym_200 = NULL;
F->pure_depth_201 = INT64_MIN;
F->pure_depth_201 = ((rt_int)0LL);
F->vrp_ok_202 = INT_MIN;
F->vrp_ok_202 = 0;
F->in_lv_path_203 = INT_MIN;
F->in_lv_path_203 = 0;
F->last_deref_204 = INT_MIN;
F->last_deref_204 = 0;
F->main_name_205 = NULL;
F->conf_system_206 = NULL;
F->conf_storage_unit_207 = INT64_MIN;
F->conf_storage_unit_207 = ((rt_int)8LL);
F->conf_memory_size_208 = INT64_MIN;
F->conf_memory_size_208 = ((rt_int)1048576LL);
F->conf_optimize_209 = NULL;
F->out_types_125 = f_new_buffer_233(F);
F->out_frames_126 = f_new_buffer_233(F);
F->out_helpers_127 = f_new_buffer_233(F);
F->out_protos_128 = f_new_buffer_233(F);
F->out_globals_129 = f_new_buffer_233(F);
F->out_funcs_130 = f_new_buffer_233(F);
F->out_init_131 = f_new_buffer_233(F);
F->out_excs_132 = f_new_buffer_233(F);
F->code_133 = F->out_init_131;
F->no_cons_194 = f_new_cons_442(F);
F->ty_int_153 = f_new_typ_441(F, ((rt_int)1LL));
F->ty_bool_154 = f_new_typ_441(F, ((rt_int)2LL));
F->ty_float_155 = f_new_typ_441(F, ((rt_int)3LL));
F->ty_char_156 = f_new_typ_441(F, ((rt_int)11LL));
F->ty_string_157 = f_new_typ_441(F, ((rt_int)6LL));
(*(P119)rt_nil_check(F->ty_string_157)).name_ = f_mk_211(F, rt_g_lit("STRING", 6));
(*(P119)rt_nil_check(F->ty_string_157)).cname_ = f_mk_211(F, rt_g_lit("rt_gstr", 7));
(*(P119)rt_nil_check(F->ty_string_157)).dims_ = ((rt_int)1LL);
(*(P119)rt_nil_check(F->ty_string_157)).elem_ = F->ty_char_156;
(*(P119)rt_nil_check(F->ty_string_157)).tcons_ = f_new_cons_442(F);
(*(P175)rt_nil_check((*(P119)rt_nil_check(F->ty_string_157)).tcons_)).lo_ = f_mk_211(F, rt_g_lit("1", 1));
F->ty_void_158 = f_new_typ_441(F, ((rt_int)9LL));
F->ty_nil_159 = f_new_typ_441(F, ((rt_int)10LL));
F->ty_act_161 = f_new_typ_441(F, ((rt_int)13LL));
F->ty_tdecl_162 = f_new_typ_441(F, ((rt_int)14LL));
F->ty_entry_163 = f_new_typ_441(F, ((rt_int)15LL));
(*(P119)rt_nil_check(F->ty_int_153)).name_ = f_mk_211(F, rt_g_lit("INTEGER", 7));
(*(P119)rt_nil_check(F->ty_string_157)).idx_ = F->ty_int_153;
(*(P119)rt_nil_check(F->ty_string_157)).next_ = F->all_types_121;
F->all_types_121 = F->ty_string_157;
(*(P119)rt_nil_check(F->ty_float_155)).name_ = f_mk_211(F, rt_g_lit("FLOAT", 5));
(*(P119)rt_nil_check(F->ty_float_155)).ndigits_ = ((rt_int)15LL);
F->ty_short_164 = f_new_typ_441(F, ((rt_int)1LL));
(*(P119)rt_nil_check(F->ty_short_164)).name_ = f_mk_211(F, rt_g_lit("SHORT_INTEGER", 13));
F->ty_long_165 = f_new_typ_441(F, ((rt_int)1LL));
(*(P119)rt_nil_check(F->ty_long_165)).name_ = f_mk_211(F, rt_g_lit("LONG_INTEGER", 12));
F->ty_sfloat_166 = f_new_typ_441(F, ((rt_int)3LL));
(*(P119)rt_nil_check(F->ty_sfloat_166)).name_ = f_mk_211(F, rt_g_lit("SHORT_FLOAT", 11));
(*(P119)rt_nil_check(F->ty_sfloat_166)).ndigits_ = ((rt_int)6LL);
F->ty_lfloat_167 = f_new_typ_441(F, ((rt_int)3LL));
(*(P119)rt_nil_check(F->ty_lfloat_167)).name_ = f_mk_211(F, rt_g_lit("LONG_FLOAT", 10));
(*(P119)rt_nil_check(F->ty_lfloat_167)).ndigits_ = ((rt_int)15LL);
F->ty_time_168 = f_new_typ_441(F, ((rt_int)3LL));
(*(P119)rt_nil_check(F->ty_time_168)).name_ = f_mk_211(F, rt_g_lit("TIME", 4));
(*(P119)rt_nil_check(F->ty_time_168)).ndigits_ = ((rt_int)15LL);
F->ty_ufixed_169 = f_new_typ_441(F, ((rt_int)16LL));
(*(P119)rt_nil_check(F->ty_ufixed_169)).name_ = f_mk_211(F, rt_g_lit("universal fixed", 15));
F->out_awaits_193 = f_new_buffer_233(F);
f_predefine_1183(F);
f_read_source_282(F);
f_compilation_392(F, &F->units_195);
if ((F->units_195 == NULL)) {
f_fail_232(F, ((rt_int)1LL), rt_g_lit("the compilation is empty", 24));
}
f_translate_1185(F, F->units_195);
f_print_program_1186(F);
ret_:

  return;
}

static void as_A2333(A2333 *d, A2333 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2333 cp_A2333(A2333 s) {
  A2333 d = s; d.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2333(A2333 a, A2333 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2333 cat_A2333(A2333 a, A2333 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2333 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2333 one_A2333(rt_int e) {
  A2333 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int)); r.p[0] = e;
  return r;
}
static void as_A2330(A2330 *d, A2330 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2330 cp_A2330(A2330 s) {
  A2330 d = s; d.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2330(A2330 a, A2330 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2330 cat_A2330(A2330 a, A2330 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2330 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2330 one_A2330(rt_int e) {
  A2330 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int)); r.p[0] = e;
  return r;
}
static void as_A2325(A2325 *d, A2325 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2325 cp_A2325(A2325 s) {
  A2325 d = s; d.p = rt_alloc(sizeof(int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2325(A2325 a, A2325 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2325 and_A2325(A2325 a, A2325 b) { A2325 r = cp_A2325(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, "array length"); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] && b.p[i]; return r; }
static A2325 or_A2325(A2325 a, A2325 b) { A2325 r = cp_A2325(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, "array length"); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] || b.p[i]; return r; }
static A2325 xor_A2325(A2325 a, A2325 b) { A2325 r = cp_A2325(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, "array length"); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] != b.p[i]; return r; }
static A2325 not_A2325(A2325 a) { A2325 r = cp_A2325(a); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = !a.p[i]; return r; }
static A2325 cat_A2325(A2325 a, A2325 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2325 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2325 one_A2325(int e) {
  A2325 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(int)); r.p[0] = e;
  return r;
}
static void as_R1836(R1836 *d, R1836 s) {
  d->disc_ = s.disc_;
  d->arm_ = s.arm_;
  d->variant_ = s.variant_;
  d->next_ = s.next_;
}
static R1836 cp_R1836(R1836 s) {
  R1836 d = s;
  d.disc_ = s.disc_;
  d.arm_ = s.arm_;
  d.variant_ = s.variant_;
  d.next_ = s.next_;
  return d;
}
static int eq_R1836(R1836 a, R1836 b) {
  return 1 && (a.disc_ == b.disc_) && (a.arm_ == b.arm_) && (a.variant_ == b.variant_) && (a.next_ == b.next_);
}
static void as_R1715(R1715 *d, R1715 s) {
  d->name_ = s.name_;
  d->v_ = s.v_;
  d->next_ = s.next_;
}
static R1715 cp_R1715(R1715 s) {
  R1715 d = s;
  d.name_ = s.name_;
  d.v_ = s.v_;
  d.next_ = s.next_;
  return d;
}
static int eq_R1715(R1715 a, R1715 b) {
  return 1 && (a.name_ == b.name_) && (a.v_ == b.v_) && (a.next_ == b.next_);
}
static void as_R1711(R1711 *d, R1711 s) {
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
static R1711 cp_R1711(R1711 s) {
  R1711 d = s;
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
static int eq_R1711(R1711 a, R1711 b) {
  return 1 && (a.name_ == b.name_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.next_ == b.next_) && (a.dflt_ == b.dflt_) && (a.is_const_ == b.is_const_) && (a.is_discr_ == b.is_discr_) && (a.dsym_ == b.dsym_) && (a.guard_ == b.guard_) && (a.cond_ == b.cond_) && (a.dyn_ == b.dyn_);
}
static void as_R1696(R1696 *d, R1696 s) {
  d->name_ = s.name_;
  d->mode_ = s.mode_;
  d->t_ = s.t_;
  d->c_ = s.c_;
  d->cfield_ = s.cfield_;
  d->dflt_ = s.dflt_;
  d->next_ = s.next_;
}
static R1696 cp_R1696(R1696 s) {
  R1696 d = s;
  d.name_ = s.name_;
  d.mode_ = s.mode_;
  d.t_ = s.t_;
  d.c_ = s.c_;
  d.cfield_ = s.cfield_;
  d.dflt_ = s.dflt_;
  d.next_ = s.next_;
  return d;
}
static int eq_R1696(R1696 a, R1696 b) {
  return 1 && (a.name_ == b.name_) && (a.mode_ == b.mode_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.cfield_ == b.cfield_) && (a.dflt_ == b.dflt_) && (a.next_ == b.next_);
}
static void as_A182(A182 *d, A182 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A182 cp_A182(A182 s) {
  A182 d = s; d.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(s));
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
  r.p = rt_alloc(sizeof(rt_int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A182 one_A182(rt_int e) {
  A182 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int)); r.p[0] = e;
  return r;
}
static void as_A180(A180 *d, A180 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A180 cp_A180(A180 s) {
  A180 d = s; d.p = rt_alloc(sizeof(P137) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A180(A180 a, A180 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A180 cat_A180(A180 a, A180 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A180 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(P137) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A180 one_A180(P137 e) {
  A180 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(P137)); r.p[0] = e;
  return r;
}
static void as_R176(R176 *d, R176 s) {
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
static R176 cp_R176(R176 s) {
  R176 d = s;
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
static int eq_R176(R176 a, R176 b) {
  return 1 && (a.lo_ == b.lo_) && (a.hi_ == b.hi_) && (a.slen_ == b.slen_) && (a.mlo_ == b.mlo_) && (a.mhi_ == b.mhi_) && (a.hasm_ == b.hasm_) && (a.lo2_ == b.lo2_) && (a.hi2_ == b.hi2_) && (a.acc_ == b.acc_) && (a.inner_ == b.inner_) && (a.dv_ == b.dv_);
}
static void as_R172(R172 *d, R172 s) {
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
static R172 cp_R172(R172 s) {
  R172 d = s;
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
static int eq_R172(R172 a, R172 b) {
  return 1 && (a.kind_ == b.kind_) && (a.line_ == b.line_) && (a.ival_ == b.ival_) && (a.flag_ == b.flag_) && (a.name_ == b.name_) && (a.tag_ == b.tag_) && (a.a_ == b.a_) && (a.b_ == b.b_) && (a.c_ == b.c_) && (a.d_ == b.d_) && (a.e_ == b.e_) && (a.next_ == b.next_) && (a.formal_ == b.formal_);
}
static void as_R149(R149 *d, R149 s) {
  d->s_ = s.s_;
  d->next_ = s.next_;
}
static R149 cp_R149(R149 s) {
  R149 d = s;
  d.s_ = s.s_;
  d.next_ = s.next_;
  return d;
}
static int eq_R149(R149 a, R149 b) {
  return 1 && (a.s_ == b.s_) && (a.next_ == b.next_);
}
static void as_R144(R144 *d, R144 s) {
  d->body_node_ = s.body_node_;
  d->visible_ = s.visible_;
  d->next_ = s.next_;
}
static R144 cp_R144(R144 s) {
  R144 d = s;
  d.body_node_ = s.body_node_;
  d.visible_ = s.visible_;
  d.next_ = s.next_;
  return d;
}
static int eq_R144(R144 a, R144 b) {
  return 1 && (a.body_node_ == b.body_node_) && (a.visible_ == b.visible_) && (a.next_ == b.next_);
}
static void as_R141(R141 *d, R141 s) {
  d->match_ = s.match_;
  d->label_ = s.label_;
  d->depth_ = s.depth_;
  d->is_loop_ = s.is_loop_;
  d->next_ = s.next_;
}
static R141 cp_R141(R141 s) {
  R141 d = s;
  d.match_ = s.match_;
  d.label_ = s.label_;
  d.depth_ = s.depth_;
  d.is_loop_ = s.is_loop_;
  d.next_ = s.next_;
  return d;
}
static int eq_R141(R141 a, R141 b) {
  return 1 && (a.match_ == b.match_) && (a.label_ == b.label_) && (a.depth_ == b.depth_) && (a.is_loop_ == b.is_loop_) && (a.next_ == b.next_);
}
static void as_R124(R124 *d, R124 s) {
  d->head_ = s.head_;
  d->tail_ = s.tail_;
}
static R124 cp_R124(R124 s) {
  R124 d = s;
  d.head_ = s.head_;
  d.tail_ = s.tail_;
  return d;
}
static int eq_R124(R124 a, R124 b) {
  return 1 && (a.head_ == b.head_) && (a.tail_ == b.tail_);
}
static void as_R120(R120 *d, R120 s) {
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
static R120 cp_R120(R120 s) {
  R120 d = s;
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
static int eq_R120(R120 a, R120 b) {
  return 1 && (a.kind_ == b.kind_) && (a.name_ == b.name_) && (a.lits_ == b.lits_) && (a.elem_ == b.elem_) && (a.idx_ == b.idx_) && (a.elemcons_ == b.elemcons_) && (a.tcons_ == b.tcons_) && (a.fields_ == b.fields_) && (a.target_ == b.target_) && (a.decl_ == b.decl_) && (a.cname_ == b.cname_) && (a.forward_ == b.forward_) && (a.defined_ == b.defined_) && (a.priv_ == b.priv_) && (a.next_ == b.next_) && (a.idx2_ == b.idx2_) && (a.littab_ == b.littab_) && (a.parent_ == b.parent_) && (a.ndigits_ == b.ndigits_) && (a.fdelta_ == b.fdelta_) && (a.fsmall_ == b.fsmall_) && (a.dims_ == b.dims_) && (a.is_restricted_ == b.is_restricted_);
}
static void as_R115(R115 *d, R115 s) {
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
static R115 cp_R115(R115 s) {
  R115 d = s;
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
static int eq_R115(R115 a, R115 b) {
  return 1 && (a.kind_ == b.kind_) && (a.name_ == b.name_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.access_path_ == b.access_path_) && (a.cname_ == b.cname_) && (a.ro_ == b.ro_) && (a.mvalue_ == b.mvalue_) && (a.hasmv_ == b.hasmv_) && (a.decl_ == b.decl_) && (a.params_ == b.params_) && (a.result_ == b.result_) && (a.depth_ == b.depth_) && (a.level_ == b.level_) && (a.byref_ == b.byref_) && (a.vrp_ == b.vrp_) && (a.hidden_ == b.hidden_) && (a.from_use_ == b.from_use_) && (a.members_ == b.members_) && (a.mnext_ == b.mnext_) && (a.chain_ == b.chain_) && (a.stack_ == b.stack_) && (a.flags_ == b.flags_);
}
static void as_A113(A113 *d, A113 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A113 cp_A113(A113 s) {
  A113 d = s; d.p = rt_alloc(sizeof(P114) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A113(A113 a, A113 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A113 cat_A113(A113 a, A113 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A113 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(P114) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A113 one_A113(P114 e) {
  A113 r; r.lo = r.hi = 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(P114)); r.p[0] = e;
  return r;
}
static void as_R108(R108 *d, R108 s) {
  d->kind_ = s.kind_;
  d->line_ = s.line_;
  d->ival_ = s.ival_;
  d->s_ = s.s_;
}
static R108 cp_R108(R108 s) {
  R108 d = s;
  d.kind_ = s.kind_;
  d.line_ = s.line_;
  d.ival_ = s.ival_;
  d.s_ = s.s_;
  return d;
}
static int eq_R108(R108 a, R108 b) {
  return 1 && (a.kind_ == b.kind_) && (a.line_ == b.line_) && (a.ival_ == b.ival_) && (a.s_ == b.s_);
}
static void as_A106(A106 *d, A106 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A106 cp_A106(A106 s) {
  A106 d = s; d.p = rt_alloc(sizeof(P107) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A106(A106 a, A106 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A106 cat_A106(A106 a, A106 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A106 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(P107) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A106 one_A106(P107 e) {
  A106 r; r.lo = r.hi = 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(P107)); r.p[0] = e;
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
  ex_compile_error_105 = rt_exc("COMPILE_ERROR");
  f_greenc_1();
  rt_main_done();
  return 0;
}
