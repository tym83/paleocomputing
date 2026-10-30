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
struct R124 { int dummy_; P148 head_; P148 tail_; };
struct R149 { int dummy_; P137 s_; P148 next_; };
struct R108 { int dummy_; rt_int kind_; rt_int line_; rt_int ival_; P137 s_; };
struct R172 { int dummy_; rt_int kind_; rt_int line_; rt_int ival_; rt_int flag_; P137 name_; P137 tag_; P171 a_; P171 b_; P171 c_; P171 d_; P171 e_; P171 next_; P137 formal_; };
typedef struct R1593 R1593;
typedef struct R1593 *P1592;
struct R115 { int dummy_; rt_int kind_; P137 name_; P119 t_; P175 c_; P137 access_path_; P137 cname_; int ro_; rt_int mvalue_; int hasmv_; P171 decl_; P1592 params_; P119 result_; rt_int depth_; rt_int level_; int byref_; int vrp_; int hidden_; int from_use_; P114 members_; P114 mnext_; P114 chain_; P114 stack_; rt_int flags_; };
typedef struct R1608 R1608;
typedef struct R1608 *P1607;
struct R120 { int dummy_; rt_int kind_; P137 name_; P171 lits_; P119 elem_; P119 idx_; P175 elemcons_; P175 tcons_; P1607 fields_; P119 target_; P171 decl_; P137 cname_; int forward_; int defined_; int priv_; P119 next_; P119 idx2_; P137 littab_; P119 parent_; rt_int ndigits_; P137 fdelta_; P137 fsmall_; rt_int dims_; int is_restricted_; };
typedef struct R1612 R1612;
typedef struct R1612 *P1611;
struct R176 { int dummy_; P137 lo_; P137 hi_; P137 slen_; rt_int mlo_; rt_int mhi_; int hasm_; P137 lo2_; P137 hi2_; P137 acc_; P175 inner_; P1611 dv_; };
struct R1612 { int dummy_; P137 name_; P137 v_; P1611 next_; };
struct R1593 { int dummy_; P137 name_; rt_int mode_; P119 t_; P175 c_; P137 cfield_; P171 dflt_; P1592 next_; };
typedef struct R1732 R1732;
typedef struct R1732 *P1731;
struct R1732 { int dummy_; P137 disc_; P171 arm_; P171 variant_; P1731 next_; };
struct R1608 { int dummy_; P137 name_; P119 t_; P175 c_; P1607 next_; P171 dflt_; int is_const_; int is_discr_; P114 dsym_; P1731 guard_; P137 cond_; int dyn_; };
struct R141 { int dummy_; P137 match_; P137 label_; rt_int depth_; int is_loop_; P140 next_; };
typedef struct A2187 A2187;
struct A2187 { rt_int lo, hi, lo2, hi2; int *p; };
typedef struct A2190 A2190;
struct A2190 { rt_int lo, hi, lo2, hi2; rt_int *p; };
typedef struct A2192 A2192;
struct A2192 { rt_int lo, hi, lo2, hi2; rt_int *p; };
struct R144 { int dummy_; P171 body_node_; P114 visible_; P143 next_; };
struct f_mk_205fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_204;
 P137 result_;
 rt_gstr r_1100;
};
struct f_new_name_208fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_206;
 P137 *res_207;
};
struct f_is_letter_210fr { int dummy;
 struct f_greenc_1fr *up;
 int c_209;
 int result_;
};
struct f_is_digit_212fr { int dummy;
 struct f_greenc_1fr *up;
 int c_211;
 int result_;
};
struct f_upper_214fr { int dummy;
 struct f_greenc_1fr *up;
 int c_213;
 int result_;
};
struct f_lower_s_216fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_215;
 rt_gstr result_;
 rt_gstr r_1103;
 rt_int i_1106;
};
struct f_upper_s_218fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_217;
 rt_gstr result_;
 rt_gstr r_1114;
 rt_int i_1117;
};
struct f_is_operator_220fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_219;
 int result_;
};
struct f_c_field_222fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_221;
 rt_gstr result_;
};
struct f_q_223fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr result_;
};
struct f_fail_226fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int line_224;
 rt_gstr msg_225;
};
struct f_new_buffer_227fr { int dummy;
 struct f_greenc_1fr *up;
 P123 result_;
};
struct f_put_to_230fr { int dummy;
 struct f_greenc_1fr *up;
 P123 b_228;
 rt_gstr s_229;
 P148 l_1126;
};
struct f_emit_232fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_231;
};
struct f_print_buffer_234fr { int dummy;
 struct f_greenc_1fr *up;
 P123 b_233;
 P148 l_1129;
};
struct f_splice_237fr { int dummy;
 struct f_greenc_1fr *up;
 P123 a_235;
 P123 b_236;
};
struct f_is_reserved_239fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_238;
 int result_;
};
struct f_add_token_243fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_240;
 rt_gstr s_241;
 rt_int ival_242;
};
struct f_digit_value_245fr { int dummy;
 struct f_greenc_1fr *up;
 int c_244;
 rt_int result_;
};
struct f_digit_in_248fr { int dummy;
 struct f_greenc_1fr *up;
 int c_246;
 rt_int base_247;
 rt_int result_;
 rt_int d_1137;
};
struct f_accumulate_252fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int *v_249;
 rt_int base_250;
 rt_int d_251;
};
struct f_lex_line_254fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr line_253;
 rt_int i_1138;
 rt_int j_1139;
 rt_int n_1140;
 int c_1142;
 int quote_1143;
 rt_int v_1144;
 rt_int d_1145;
 rt_gstr buf_1146;
 rt_int bl_1147;
 rt_int base_1189;
 rt_gstr two_1249;
};
struct f_exponent_259fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr line_255;
 rt_int *j_256;
 rt_gstr *buf_257;
 rt_int *bl_258;
};
struct f_include_open_262fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_260;
 rt_int *length_261;
};
struct f_include_char_265fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int i_263;
 int *c_264;
};
struct f_check_include_266fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int n_1285;
};
struct f_include_text_268fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int n_267;
 rt_gstr t_1296;
 rt_int saved_line_1297;
 rt_int from_1298;
 rt_int k_1300;
 rt_int k_1307;
};
struct f_include_line_272fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr t_269;
 rt_int from_270;
 rt_int to_271;
 rt_gstr l_1312;
 rt_int k_1314;
};
struct f_read_source_273fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr buf_1320;
 rt_int bl_1321;
 int c_1322;
};
struct f_nn_276fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_274;
 rt_int line_275;
 P171 result_;
};
struct f_append_280fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *head_277;
 P171 *tail_278;
 P171 x_279;
};
struct f_list_len_282fr { int dummy;
 struct f_greenc_1fr *up;
 P171 l_281;
 rt_int result_;
 rt_int n_1334;
 P171 p_1335;
};
struct f_cur_line_283fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int result_;
};
struct f_at_kw_285fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_284;
 int result_;
};
struct f_at_op_287fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_286;
 int result_;
};
struct f_at_kind_289fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_288;
 int result_;
};
struct f_kind_at_291fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_290;
 rt_int result_;
};
struct f_text_at_293fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_292;
 rt_gstr result_;
};
struct f_perror_295fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr msg_294;
};
struct f_skip_296fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_expect_kw_298fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_297;
};
struct f_expect_op_300fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_299;
};
struct f_expect_id_302fr { int dummy;
 struct f_greenc_1fr *up;
 P137 *res_301;
};
struct f_name_node_304fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_303;
 P171 x_1350;
};
struct f_id_list_306fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_305;
 P171 head_1351;
 P171 tail_1352;
 P171 x_1353;
};
struct f_binop_311fr { int dummy;
 struct f_greenc_1fr *up;
 P137 op_307;
 P171 l_308;
 P171 r_309;
 rt_int line_310;
 P171 result_;
 P171 x_1355;
};
struct f_expr_313fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_312;
 P171 l_1356;
 P171 r_1357;
 P137 op_1358;
 rt_int line_1359;
};
struct f_is_rel_315fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_314;
 int result_;
};
struct f_relation_317fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_316;
 P171 l_1362;
 P171 r_1363;
 P171 lo_1364;
 P171 hi_1365;
 P171 t_1366;
 P137 op_1367;
 rt_int line_1368;
 int neg_1369;
};
struct f_simple_expr_319fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_318;
 P171 l_1373;
 P171 r_1374;
 P137 op_1375;
 rt_int line_1376;
};
struct f_term_321fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_320;
 P171 l_1380;
 P171 r_1381;
 P137 op_1382;
 rt_int line_1383;
};
struct f_factor_323fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_322;
 P171 l_1386;
 P171 r_1387;
 P137 op_1388;
 rt_int line_1389;
};
struct f_primary_325fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_324;
 P171 x_1391;
 rt_int line_1392;
};
struct f_agg_or_paren_327fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_326;
 rt_int line_1397;
 P171 items_1398;
 P171 itail_1399;
 P171 it_1400;
 P171 first_1401;
 P171 keys_1402;
 P171 ktail_1403;
 P171 lab_1404;
 P171 x_1405;
 int more_1406;
};
struct f_aggregate_ahead_328fr { int dummy;
 struct f_greenc_1fr *up;
 int result_;
 rt_int d_1409;
 rt_int k_1410;
 P107 t_1413;
};
struct f_name_p_330fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_329;
 P171 p_1415;
 P171 x_1416;
 P171 args_1417;
 P171 atail_1418;
 P171 lo_1419;
 P171 r_1420;
 rt_int line_1421;
 int more_1422;
 P137 formal_1426;
 rt_int mark_1427;
};
struct f_component_list_332fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_331;
 P171 comps_1430;
 P171 ctail_1431;
 P171 names_1432;
 P171 st_1433;
 P171 def_1434;
 P171 cm_1435;
 P171 v_1436;
 P171 arm_1437;
 P171 atail_1438;
 P171 labs_1439;
 P171 ltail_1440;
 P171 l_1441;
 int is_c_1442;
};
struct f_discrete_range_p_334fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_333;
 P171 lo_1447;
 P171 r_1448;
 rt_int line_1449;
};
struct f_subtype_ind_336fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_335;
 P137 f_1450;
 P171 x_1451;
 P171 r_1452;
 P171 args_1453;
 P171 atail_1454;
 P171 lo_1455;
 rt_int line_1456;
 int more_1457;
};
struct f_type_spec_338fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_337;
 P171 x_1460;
};
struct f_type_def_340fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_339;
 P171 x_1461;
 P171 lits_1462;
 P171 ltail_1463;
 P171 l_1464;
 P171 idx_1465;
 P171 itail_1466;
 P171 r_1467;
 P171 comps_1468;
 P171 ctail_1469;
 P171 names_1470;
 P171 st_1471;
 P171 def_1472;
 P171 cm_1473;
 rt_int line_1474;
 int more_1475;
};
struct f_pragma_p_342fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_341;
 P171 x_1479;
 P171 a_1480;
 P171 head_1481;
 P171 tail_1482;
};
struct f_check_pragma_344fr { int dummy;
 struct f_greenc_1fr *up;
 P171 x_343;
 rt_gstr p_1484;
 rt_int n_1485;
 P171 a_1486;
};
struct f_skip_visibility_345fr { int dummy;
 struct f_greenc_1fr *up;
 P171 names_1488;
};
struct f_skip_representation_346fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_decl_part_348fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_347;
 P171 head_1492;
 P171 tail_1493;
 P171 x_1494;
 P171 names_1495;
};
struct f_object_decl_350fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_349;
 P171 head_1497;
 P171 tail_1498;
 P171 names_1499;
 P171 st_1500;
 P171 init_1501;
 P171 x_1502;
 rt_int line_1503;
 int is_const_1504;
};
struct f_type_decl_352fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_351;
 P171 x_1507;
 rt_int line_1508;
};
struct f_formal_part_354fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_353;
 P171 head_1509;
 P171 tail_1510;
 P171 names_1511;
 P171 st_1512;
 P171 def_1513;
 P171 p_1514;
 rt_int mode_1515;
 int more_1516;
};
struct f_designator_356fr { int dummy;
 struct f_greenc_1fr *up;
 P137 *res_355;
};
struct f_subprogram_358fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_357;
 P171 x_1523;
 rt_int line_1524;
 int is_proc_1525;
};
struct f_body_part_360fr { int dummy;
 struct f_greenc_1fr *up;
 P171 x_359;
};
struct f_parse_handlers_362fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_361;
 P171 head_1527;
 P171 tail_1528;
 P171 h_1529;
 P171 names_1530;
 P171 ntail_1531;
 P171 n_1532;
};
struct f_package_p_364fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_363;
 P171 x_1536;
 rt_int line_1537;
};
struct f_at_statements_end_365fr { int dummy;
 struct f_greenc_1fr *up;
 int result_;
};
struct f_statements_367fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_366;
 P171 head_1538;
 P171 tail_1539;
 P171 x_1540;
};
struct f_statement_369fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_368;
 P171 x_1542;
 P171 t_1543;
 rt_int line_1544;
 P137 label_1545;
};
struct f_task_statement_371fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_370;
};
struct f_if_stmt_373fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_372;
 P171 x_1548;
 P171 arm_1549;
 P171 head_1550;
 P171 tail_1551;
 int go_1552;
};
struct f_case_stmt_375fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_374;
 P171 x_1554;
 P171 arm_1555;
 P171 head_1556;
 P171 tail_1557;
 P171 labs_1558;
 P171 ltail_1559;
 P171 l_1560;
 int others_arm_1561;
};
struct f_loop_stmt_377fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_376;
 P171 x_1564;
 P171 r_1565;
 rt_int line_1566;
};
struct f_compilation_379fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_378;
 P171 head_1567;
 P171 tail_1568;
 P171 x_1569;
};
struct f_hash_381fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_380;
 rt_int result_;
 rt_int h_1571;
 rt_int i_1574;
};
struct f_lookup_383fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_382;
 P114 result_;
 P114 y_1579;
};
struct f_same_task_386fr { int dummy;
 struct f_greenc_1fr *up;
 P114 a_384;
 P114 b_385;
 int result_;
};
struct f_lookup_entry_389fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_387;
 P114 owner_388;
 P114 result_;
 P114 y_1582;
};
struct f_lookup_decl_391fr { int dummy;
 struct f_greenc_1fr *up;
 P171 d_390;
 P114 result_;
 P114 y_1585;
};
struct f_overloadable_393fr { int dummy;
 struct f_greenc_1fr *up;
 P114 y_392;
 int result_;
};
struct f_same_396fr { int dummy;
 struct f_greenc_1fr *up;
 P119 a_394;
 P119 b_395;
 int result_;
};
struct f_root_398fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_397;
 P119 result_;
 P119 r_1588;
};
struct f_derived_from_401fr { int dummy;
 struct f_greenc_1fr *up;
 P119 a_399;
 P119 b_400;
 int result_;
 P119 r_1590;
};
struct f_is_numeric_403fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_402;
 int result_;
};
struct f_is_discrete_405fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_404;
 int result_;
};
struct f_same_signature_408fr { int dummy;
 struct f_greenc_1fr *up;
 P1592 a_406;
 P1592 b_407;
 int result_;
 P1592 x_1594;
 P1592 y_1595;
};
struct f_define_411fr { int dummy;
 struct f_greenc_1fr *up;
 P114 y_409;
 rt_int line_410;
 rt_int h_1597;
 P114 z_1598;
};
struct f_open_scope_412fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_close_scope_413fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_new_sym_416fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_414;
 P137 name_415;
 P114 result_;
};
struct f_new_typ_418fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_417;
 P119 result_;
};
struct f_new_cons_419fr { int dummy;
 struct f_greenc_1fr *up;
 P175 result_;
};
struct f_kind_name_421fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_420;
 rt_gstr result_;
};
struct f_check_type_425fr { int dummy;
 struct f_greenc_1fr *up;
 P119 got_422;
 P119 want_423;
 rt_int line_424;
};
struct f_field_count_427fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_426;
 rt_int result_;
 rt_int n_1616;
 P1607 f_1617;
};
struct f_ctype_430fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_428;
 P137 *r_429;
 P137 s_1619;
};
struct f_field_decls_433fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_431;
 P137 *r_432;
 P1607 f_1621;
 P137 s_1622;
 P137 ct_1623;
};
struct f_declare_ctype_435fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_434;
 P137 ct_1625;
 P137 s_1626;
 P119 target_1627;
};
struct f_lit_index_438fr { int dummy;
 struct f_greenc_1fr *up;
 P171 lits_436;
 rt_gstr name_437;
 rt_int result_;
 rt_int i_1628;
 P171 l_1629;
};
struct f_manifest_442fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_439;
 rt_int *v_440;
 int *ok_441;
 rt_int a_1631;
 rt_int b_1632;
 int ok2_1633;
 P114 y_1634;
};
struct f_resolve_446fr { int dummy;
 struct f_greenc_1fr *up;
 P171 st_443;
 P119 *t_444;
 P175 *c_445;
 P114 y_1635;
 P119 dummy_1636;
 P137 code_1637;
 int ok_1638;
 P171 r_1639;
};
struct f_constraint_list_450fr { int dummy;
 struct f_greenc_1fr *up;
 P171 st_447;
 P119 t_448;
 P175 c_449;
 P171 r_1640;
 P119 arrt_1641;
 P175 cc_1642;
 P119 it_1643;
};
struct f_discriminant_constraint_454fr { int dummy;
 struct f_greenc_1fr *up;
 P171 st_451;
 P119 t_452;
 P175 c_453;
 P171 a_1645;
 P1607 f_1646;
 P119 vt_1647;
 P137 v_1648;
 P1611 d_1649;
 P1611 tail_1650;
};
struct f_discrete_bounds_460fr { int dummy;
 struct f_greenc_1fr *up;
 P171 r_455;
 P119 want_456;
 P119 *t_457;
 P137 *lo_458;
 P137 *hi_459;
 P175 c_1658;
 P114 y_1659;
};
struct f_range_of_464fr { int dummy;
 struct f_greenc_1fr *up;
 P171 r_461;
 P119 t_462;
 P175 c_463;
 P119 dummy_1660;
 int ok_1661;
};
struct f_fresh_typ_468fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_465;
 P137 name_466;
 P119 *t_467;
 P119 ph_1662;
};
struct f_inherit_472fr { int dummy;
 struct f_greenc_1fr *up;
 P119 parent_469;
 P119 t_470;
 rt_int line_471;
 P114 s_1663;
 P114 z_1664;
 P1592 p_1665;
 P1592 q_1666;
 P1592 tail_1667;
 int uses_1668;
 P114 news_1669;
};
struct f_derive_literals_475fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_473;
 rt_int line_474;
 P171 l_1676;
 rt_int n_1677;
 P114 y_1678;
};
struct f_type_definition_480fr { int dummy;
 struct f_greenc_1fr *up;
 P171 d_476;
 P137 name_477;
 P119 *t_478;
 P175 *c_479;
 P119 dummy_1680;
 P119 it_1681;
 P175 ic_1682;
 P171 l_1683;
 P171 comp_1684;
 P1607 f_1685;
 P1607 tail_1686;
 int ok_1687;
 rt_int n_1688;
 P114 y_1689;
};
struct f_array_type_487fr { int dummy;
 struct f_greenc_1fr *up;
 P171 idx_481;
 P171 comp_482;
 P137 name_483;
 rt_int line_484;
 P119 *t_485;
 P175 *c_486;
 P171 l_1693;
 P175 rowc_1694;
 P175 ic_1695;
 P119 it_1696;
};
struct f_static_range_491fr { int dummy;
 struct f_greenc_1fr *up;
 P171 l_488;
 P171 h_489;
 P175 c_490;
 int ok_1697;
 int ok2_1698;
};
struct f_elem_ctype_494fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_492;
 P137 *r_493;
};
struct f_first_index_497fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_495;
 P137 *r_496;
};
struct f_is_string_499fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_498;
 int result_;
};
struct f_subst_502fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_500;
 rt_gstr r_501;
 rt_gstr result_;
 rt_int i_1704;
};
struct f_mentions_record_504fr { int dummy;
 struct f_greenc_1fr *up;
 P137 s_503;
 int result_;
 rt_int i_1718;
};
struct f_subst_cons_508fr { int dummy;
 struct f_greenc_1fr *up;
 P175 c_505;
 rt_gstr r_506;
 P175 *res_507;
};
struct f_remove_sym_510fr { int dummy;
 struct f_greenc_1fr *up;
 P114 y_509;
 rt_int h_1724;
 P114 p_1725;
};
struct f_record_components_515fr { int dummy;
 struct f_greenc_1fr *up;
 P171 list_511;
 P119 t_512;
 P1731 g_513;
 rt_int line_514;
 P171 comp_1733;
 P1607 f_1734;
 P1607 tail_1735;
 P1607 df_1736;
 P171 prev_1737;
 P119 pt_1738;
 P119 vt_1739;
 P175 pc_1740;
 P114 y_1741;
 P137 acc_1742;
 P137 v_1743;
 P137 x_1744;
 P171 arm_1745;
 P1731 g2_1746;
};
struct f_guard_cond_519fr { int dummy;
 struct f_greenc_1fr *up;
 P1731 g_516;
 P119 t_517;
 P137 *r_518;
 P171 a_1756;
 P171 l_1757;
 P1607 df_1758;
 P137 x_1759;
 P137 d_1760;
 P119 dt_1761;
 P119 vt_1762;
 P137 lo_1763;
 P137 hi_1764;
};
struct f_arm_test_524fr { int dummy;
 struct f_greenc_1fr *up;
 P171 arm_520;
 P137 dname_521;
 rt_gstr d_522;
 P137 *x_523;
 P171 l_1766;
 P114 y_1767;
 P119 dt_1768;
 P119 vt_1769;
 P137 lo_1770;
 P137 hi_1771;
};
struct f_derived_type_529fr { int dummy;
 struct f_greenc_1fr *up;
 P171 d_525;
 P137 name_526;
 P119 *t_527;
 P175 *c_528;
 P119 pt_1773;
 P137 ct_1774;
 P119 ph_1775;
};
struct f_real_type_534fr { int dummy;
 struct f_greenc_1fr *up;
 P171 d_530;
 P137 name_531;
 P119 *t_532;
 P175 *c_533;
 P119 dt_1776;
 P137 dv_1777;
 rt_int n_1778;
 int ok_1779;
};
struct f_finish_ptr_536fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_535;
 P175 c_1780;
};
struct f_init_storage_540fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lval_537;
 P119 t_538;
 P175 c_539;
 P175 ec_1781;
 P175 fc_1782;
 P1611 d_1783;
 P137 ct_1784;
 P137 i_1785;
 P137 v_1786;
 P137 x_1787;
 P119 vt_1788;
 P1607 f_1789;
};
struct f_composite_542fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_541;
 int result_;
};
struct f_assign_code_548fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lval_543;
 P119 t_544;
 rt_gstr v_545;
 P175 c_546;
 P137 *r_547;
 P137 ct_1793;
 P137 x_1794;
 P1611 d_1795;
};
struct f_copy_code_552fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_549;
 rt_gstr v_550;
 P137 *r_551;
 P137 ct_1797;
};
struct f_eq_code_557fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_553;
 rt_gstr a_554;
 rt_gstr b_555;
 P137 *r_556;
 P137 ct_1798;
};
struct f_seen_name_560fr { int dummy;
 struct f_greenc_1fr *up;
 P148 l_558;
 rt_gstr s_559;
 int result_;
 P148 p_1799;
};
struct f_emit_helpers_561fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_1801;
 P137 et_1802;
 P148 done_1803;
 P148 l_1804;
};
struct f_helper_bodies_563fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_562;
 P137 c_1808;
 P123 b_1809;
 P137 ct_1810;
 P137 et_1811;
 P137 x_1812;
 P137 y_1813;
 P137 conds_1814;
 P1607 f_1815;
};
struct f_storage_567fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_564;
 P119 t_565;
 P137 *access_code_566;
 P137 ct_1818;
 P137 g_1819;
};
struct f_bind_570fr { int dummy;
 struct f_greenc_1fr *up;
 P114 y_568;
 P137 access_code_569;
};
struct f_declare_subprograms_572fr { int dummy;
 struct f_greenc_1fr *up;
 P171 from_571;
 P171 e_1820;
};
struct f_declare_one_574fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_573;
 P114 y_1822;
 P114 z_1823;
};
struct f_build_subprogram_577fr { int dummy;
 struct f_greenc_1fr *up;
 P171 d_575;
 P114 *y_576;
 P171 p_1827;
 P1592 pm_1828;
 P1592 tail_1829;
 P175 rc_1830;
 rt_int k_1831;
};
struct f_decl_elements_579fr { int dummy;
 struct f_greenc_1fr *up;
 P171 decls_578;
 P171 e_1835;
 int declared_1836;
};
struct f_decl_element_581fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_580;
 P171 pd_1838;
 P114 y_1839;
 P114 z_1840;
 P119 t_1841;
 P119 vt_1842;
 P175 c_1843;
 P137 acc_1844;
 P137 v_1845;
 P137 x_1846;
 int ok_1847;
};
struct f_pragma_decl_583fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_582;
};
struct f_resolve_object_type_587fr { int dummy;
 struct f_greenc_1fr *up;
 P171 st_584;
 P119 *t_585;
 P175 *c_586;
};
struct f_other_decl_589fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_588;
};
struct f_subprogram_body_592fr { int dummy;
 struct f_greenc_1fr *up;
 P171 d_590;
 P114 y_591;
 P123 saved_code_1849;
 P123 saved_fields_1850;
 int saved_in_1851;
 P114 saved_sym_1852;
 P140 saved_exits_1853;
 rt_int saved_frames_1854;
 P148 saved_handlers_1855;
 P148 saved_cleanups_1856;
 P114 saved_pure_1857;
 P137 aw_1858;
 rt_int saved_pdepth_1859;
 P137 args_1860;
 P137 head_1861;
 P137 frame_1862;
 P137 parent_1863;
 P137 ct_1864;
 P137 x_1865;
 P1592 pm_1866;
 P114 p_1867;
};
struct f_gen_statements_594fr { int dummy;
 struct f_greenc_1fr *up;
 P171 stmts_593;
 P171 s_1873;
};
struct f_pop_frames_596fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int upto_595;
 rt_int i_1875;
 P148 c_1876;
};
struct f_push_cleanup_598fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_597;
};
struct f_pop_cleanup_599fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_guarded_603fr { int dummy;
 struct f_greenc_1fr *up;
 P171 stmts_600;
 P171 hs_601;
 rt_int line_602;
 P137 f_1880;
 P137 x_1881;
 P171 h_1882;
 P171 n_1883;
 int first_1884;
 int has_others_1885;
 P137 conds_1886;
};
struct f_exc_id_607fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_604;
 rt_int line_605;
 P137 *r_606;
 P114 y_1891;
};
struct f_gen_statement_609fr { int dummy;
 struct f_greenc_1fr *up;
 P171 s_608;
 P119 t_1892;
 P119 vt_1893;
 P175 c_1894;
 P137 lv_1895;
 P137 v_1896;
 P137 x_1897;
 int ro_1898;
};
struct f_slice_assign_611fr { int dummy;
 struct f_greenc_1fr *up;
 P171 s_610;
 P137 lv_1900;
 P137 v_1901;
 P137 sl_1902;
 P137 x_1903;
 P119 t_1904;
 P119 st_1905;
 P119 vt_1906;
 P175 c_1907;
 int ro_1908;
};
struct f_gen_call_613fr { int dummy;
 struct f_greenc_1fr *up;
 P171 s_612;
 P171 c_1909;
 P119 t_1910;
 P137 v_1911;
};
struct f_gen_if_615fr { int dummy;
 struct f_greenc_1fr *up;
 P171 s_614;
 P171 a_1912;
 int first_1913;
 P119 t_1914;
 P137 v_1915;
};
struct f_gen_case_617fr { int dummy;
 struct f_greenc_1fr *up;
 P171 s_616;
 P119 st_1917;
 P119 vt_1918;
 int first_1919;
 P171 a_1920;
 P171 lab_1921;
 P137 sel_1922;
 P137 tmp_1923;
 P137 ct_1924;
 P137 conds_1925;
 P137 v_1926;
 P137 lo_1927;
 P137 hi_1928;
};
struct f_push_exit_621fr { int dummy;
 struct f_greenc_1fr *up;
 P137 match_618;
 int is_loop_619;
 P137 *label_620;
};
struct f_gen_loop_623fr { int dummy;
 struct f_greenc_1fr *up;
 P171 s_622;
 P119 t_1933;
 P119 vt_1934;
 P175 c_1935;
 P137 label_1936;
 P137 cond_1937;
 P137 acc_1938;
 P137 lov_1939;
 P137 hiv_1940;
 P137 it_1941;
 P114 y_1942;
 P171 r_1943;
};
struct f_gen_block_625fr { int dummy;
 struct f_greenc_1fr *up;
 P171 s_624;
 P137 label_1944;
 P137 aw_1945;
};
struct f_gen_exit_627fr { int dummy;
 struct f_greenc_1fr *up;
 P171 s_626;
 P140 x_1946;
 P119 t_1947;
 P137 v_1948;
};
struct f_gen_return_629fr { int dummy;
 struct f_greenc_1fr *up;
 P171 s_628;
 P119 vt_1950;
 P137 v_1951;
};
struct f_access_of_632fr { int dummy;
 struct f_greenc_1fr *up;
 P114 y_630;
 P137 *r_631;
 P137 p_1952;
 rt_int i_1954;
};
struct f_link_to_635fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int l_633;
 P137 *r_634;
 rt_int i_1959;
};
struct f_c_ident_637fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_636;
 rt_gstr result_;
};
struct f_deref_641fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_638;
 P119 t_639;
 P137 *r_640;
 P137 ct_1963;
};
struct f_is_object_643fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_642;
 int result_;
 P114 y_1964;
};
struct f_is_const_access_645fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_644;
 int result_;
 P114 y_1965;
};
struct f_lvalue_651fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_646;
 P137 *code_out_647;
 P119 *t_648;
 P175 *c_649;
 int *ro_650;
 int cp_1966;
 P114 y_1967;
 P137 base_1968;
 P119 bt_1969;
 P175 bc_1970;
};
struct f_select_on_660fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_652;
 P119 bt_653;
 P171 e_654;
 int *ro_655;
 int lv_656;
 P137 *code_out_657;
 P119 *t_658;
 P175 *c_659;
 P1607 f_1971;
 P137 d_1972;
 P137 ct_1973;
 P137 tmp_1974;
};
struct f_index_on_669fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_661;
 P119 bt_662;
 P171 e_663;
 int *ro_664;
 int lv_665;
 P137 *code_out_666;
 P119 *t_667;
 P175 *c_668;
 P171 a_1976;
 P119 arrt_1977;
 P137 acc_1978;
 P119 it_1979;
 P137 i_1980;
 P137 lo_1981;
 P137 hi_1982;
 P137 d_1983;
 P137 ct_1984;
 P137 tmp_1985;
};
struct f_type_attribute_672fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_670;
 rt_gstr name_671;
 int result_;
 P114 y_1987;
 P1592 p_1989;
};
struct f_is_type_name_674fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_673;
 int result_;
 P114 y_1992;
};
struct f_is_char_lit_676fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_675;
 int result_;
};
struct f_is_enum_lit_678fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_677;
 int result_;
 P114 y_1994;
};
struct f_c_string_680fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_679;
 rt_gstr result_;
 rt_int n_1995;
 rt_int i_1998;
 rt_gstr r_2007;
 rt_int j_2008;
 rt_int i_2012;
};
struct f_is_literal_682fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_681;
 int result_;
};
struct f_range_bounds_690fr { int dummy;
 struct f_greenc_1fr *up;
 P171 l_683;
 P171 h_684;
 P119 want_685;
 rt_int line_686;
 P119 *t_687;
 P137 *lo_688;
 P137 *hi_689;
 P119 w_2023;
 P119 t2_2024;
};
struct f_gexpr_695fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_691;
 P119 want_692;
 P119 *t_693;
 P137 *r_694;
 P114 y_2025;
 P119 bt_2026;
 P175 c_2027;
 int ro_2028;
 P137 base_2029;
 P137 a_2030;
 P171 nm_2031;
 int saved_lv_2032;
};
struct f_gexpr_1_700fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_696;
 P119 want_697;
 P119 *t_698;
 P137 *r_699;
 P114 y_2033;
 P119 bt_2034;
 P175 c_2035;
 int ro_2036;
 P137 base_2037;
 P137 a_2038;
 P171 nm_2039;
};
struct f_string_aggregate_705fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_701;
 P119 want_702;
 P119 *t_703;
 P137 *r_704;
 P171 ag_2043;
 P171 it_2044;
 P171 tail_2045;
 P171 l_2046;
 rt_int k_2049;
};
struct f_char_literal_710fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_706;
 P119 want_707;
 P119 *t_708;
 P137 *r_709;
 rt_int i_2055;
};
struct f_gen_name_715fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_711;
 P119 want_712;
 P119 *t_713;
 P137 *r_714;
 P114 y_2058;
 P114 z_2059;
 P171 call_2060;
};
struct f_gen_unop_720fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_716;
 P119 want_717;
 P119 *t_718;
 P137 *r_719;
 P137 a_2062;
 int done_2063;
};
struct f_short_int_722fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_721;
 int result_;
};
struct f_float_kind_724fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_723;
 rt_gstr result_;
};
struct f_catenation_729fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_725;
 P119 want_726;
 P119 *t_727;
 P137 *r_728;
 P119 arrt_2064;
 P119 ta_2065;
 P119 tb_2066;
 P137 a_2067;
 P137 b_2068;
 P137 ct_2069;
};
struct f_cat_operand_734fr { int dummy;
 struct f_greenc_1fr *up;
 P171 x_730;
 P119 arrt_731;
 rt_int line_732;
 P137 *r_733;
 P119 tx_2070;
 P137 ct_2071;
};
struct f_arithmetic_739fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_735;
 P119 want_736;
 P119 *t_737;
 P137 *r_738;
 rt_gstr op_2072;
 P119 ta_2073;
 P119 tb_2074;
 P119 hint_2075;
 P137 a_2076;
 P137 b_2077;
};
struct f_fixed_operation_747fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_740;
 P119 ta_741;
 P119 tb_742;
 rt_gstr a_743;
 rt_gstr b_744;
 P119 *t_745;
 P137 *r_746;
 rt_gstr op_2078;
};
struct f_gen_binop_752fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_748;
 P119 want_749;
 P119 *t_750;
 P137 *r_751;
 rt_gstr op_2079;
 P119 ta_2080;
 P119 tb_2081;
 P119 hint_2082;
 P119 ct_2083;
 P137 a_2084;
 P137 b_2085;
 P137 x_2086;
 P137 dummy_2087;
 int done_2088;
};
struct f_conversion_757fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_753;
 P114 y_754;
 P119 *t_755;
 P137 *r_756;
 P119 aty_2089;
 P137 a_2090;
 P171 ag_2091;
 P171 it_2092;
 P171 tail_2093;
 P171 arg_2094;
};
struct f_constrain_761fr { int dummy;
 struct f_greenc_1fr *up;
 P114 y_758;
 P119 t_759;
 P137 *r_760;
 P137 ct_2096;
 P137 tmp_2097;
};
struct f_array_conversion_768fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_762;
 P119 t_763;
 P119 aty_764;
 P175 c_765;
 rt_gstr a_766;
 P137 *r_767;
 P119 x_2098;
 P119 y_2099;
 P137 ct_2100;
 P137 act_2101;
 P137 et_2102;
 P137 tmp_2103;
 P137 s_2104;
 rt_int k_2106;
};
struct f_gen_attr_773fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_769;
 P119 want_770;
 P119 *t_771;
 P137 *r_772;
 rt_gstr a_2110;
 P114 y_2111;
 P119 tt_2112;
 P119 aty_2113;
 P137 v_2114;
 P137 d_2115;
 P175 c_2116;
 rt_int n_2117;
 int ro_2118;
};
struct f_attr_dim_777fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_774;
 P119 arrt_775;
 rt_int *n_776;
 int ok_2119;
};
struct f_object_array_attr_783fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_778;
 P119 arrt_779;
 rt_gstr v_780;
 P119 *t_781;
 P137 *r_782;
 rt_int n_2120;
 P119 it_2121;
 P137 ct_2122;
 P137 tmp_2123;
 P137 p_2124;
 P137 lo_2125;
 P137 hi_2126;
 rt_int k_2128;
 rt_int k_2133;
};
struct f_type_array_attr_789fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_784;
 P119 arrt_785;
 P175 c_786;
 P119 *t_787;
 P137 *r_788;
 rt_int n_2137;
 P119 it_2138;
 P175 cc_2139;
 rt_int k_2141;
};
struct f_lit_table_792fr { int dummy;
 struct f_greenc_1fr *up;
 P119 t_790;
 P137 *r_791;
 P171 l_2145;
 P137 s_2146;
};
struct f_val_rep_798fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_793;
 P119 tt_794;
 P175 c_795;
 P119 *t_796;
 P137 *r_797;
 P119 aty_2149;
 P137 v_2150;
 P137 lt_2151;
 rt_int n_2152;
};
struct f_allocator_803fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_799;
 P119 want_800;
 P119 *t_801;
 P137 *r_802;
 P114 y_2153;
 P119 target_2154;
 P119 vt_2155;
 P137 ct_2156;
 P137 pt_2157;
 P137 cell_2158;
 P137 v_2159;
 P137 x_2160;
};
struct f_aggregate_808fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_804;
 P119 want_805;
 P119 *t_806;
 P137 *r_807;
 P137 b_2161;
};
struct f_captured_811fr { int dummy;
 struct f_greenc_1fr *up;
 P123 b_809;
 P137 *r_810;
 P148 l_2162;
};
struct f_field_at_814fr { int dummy;
 struct f_greenc_1fr *up;
 P119 rt_812;
 rt_int k_813;
 P1607 result_;
 P1607 f_2164;
 rt_int i_2166;
};
struct f_item_for_819fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_815;
 P119 rt_816;
 rt_int k_817;
 rt_int p_818;
 P171 result_;
 P171 it_2170;
 P171 lab_2171;
 rt_int n_2172;
};
struct f_arm_holds_823fr { int dummy;
 struct f_greenc_1fr *up;
 P171 arm_820;
 rt_int v_821;
 int *res_822;
 P171 l_2175;
 rt_int lo_2176;
 rt_int hi_2177;
 int ok_2178;
};
struct f_record_aggregate_827fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_824;
 P119 rt_825;
 P137 *r_826;
 P171 it_2180;
 P171 lab_2181;
 P171 vn_2182;
 P171 a_2183;
 P1607 f_2184;
 P1731 g_2185;
 rt_int n_2186;
 A2187 done_2188;
 A2187 active_2189;
 A2190 dvs_2191;
 A2192 order_2193;
 rt_int norder_2194;
 rt_int nung_2195;
 rt_int k_2196;
 rt_int d_2197;
 rt_int npos_2198;
 P123 saved_2199;
 P137 ct_2200;
 P137 tmp_2201;
 P137 parts_2202;
 int named_2203;
 int ok_2204;
 int holds_2205;
 rt_int i_2207;
 rt_int p_2216;
 rt_int i_2235;
 rt_int i_2252;
 rt_int i_2263;
};
struct f_field_index_830fr { int dummy;
 struct f_greenc_1fr *up;
 P119 rt_828;
 rt_gstr name_829;
 rt_int result_;
 P1607 f_2269;
 rt_int k_2270;
};
struct f_agg_component_836fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr tmp_831;
 P119 rt_832;
 rt_int k_833;
 P171 v_834;
 rt_int line_835;
 P1607 f_2272;
 P119 vt_2273;
 P137 x_2274;
 P137 y_2275;
 rt_int i_2277;
};
struct f_static_choice_840fr { int dummy;
 struct f_greenc_1fr *up;
 P171 x_837;
 rt_int *v_838;
 int *ok_839;
};
struct f_array_aggregate_845fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_841;
 P119 arrt_842;
 P137 bounds_843;
 P137 *r_844;
 P171 it_2282;
 P171 lab_2283;
 P171 others_it_2284;
 rt_int np_2285;
 rt_int nnamed_2286;
 rt_int clo_2287;
 rt_int chi_2288;
 rt_int v1_2289;
 rt_int v2_2290;
 int all_static_2291;
 int ok_2292;
 int ok2_2293;
 int first_choice_2294;
 P119 vt_2295;
 P137 ct_2296;
 P137 et_2297;
 P137 tmp_2298;
 P137 lo_2299;
 P137 hi_2300;
 P137 v_2301;
 P137 x_2302;
 P137 parts_2303;
 P137 fill_2304;
 P137 rowb_2305;
 P137 key_2306;
 P137 khi_2307;
 P123 saved_2308;
};
struct f_element_store_849fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lv_846;
 P119 arrt_847;
 rt_gstr v_848;
 P137 x_2313;
};
struct f_check_choices_853fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_850;
 P119 arrt_851;
 int has_others_852;
 P171 a_2314;
 P171 b_2315;
 P171 lab_2316;
 P171 lab2_2317;
 rt_int lo1_2318;
 rt_int hi1_2319;
 rt_int lo2_2320;
 rt_int hi2_2321;
 rt_int count_2322;
 int ok_2323;
};
struct f_actual_for_857fr { int dummy;
 struct f_greenc_1fr *up;
 P171 args_854;
 P1592 pm_855;
 P1592 first_856;
 P171 result_;
 P171 a_2328;
 P1592 p_2329;
};
struct f_gcall_862fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_858;
 int is_stmt_859;
 P119 *t_860;
 P137 *r_861;
 P171 fn_2332;
 P171 nm_2333;
 P114 y_2334;
 P137 args_2335;
 P137 lv_2336;
 P137 v_2337;
 P137 ct_2338;
 P137 x_2339;
 P171 a_2340;
 P1592 pm_2341;
 P119 lt_2342;
 P119 vt_2343;
 P175 lc_2344;
 int ro_2345;
};
struct f_gcall_with_867fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_863;
 P114 y_864;
 P119 *t_865;
 P137 *r_866;
 P137 args_2346;
 P137 lv_2347;
 P137 v_2348;
 P137 x1_2349;
 P137 x2_2350;
 P171 a_2351;
 P1592 pm_2352;
 P119 lt_2353;
 P119 vt_2354;
 P175 lc_2355;
 int ro_2356;
};
struct f_builtin_874fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_868;
 P171 args_869;
 rt_int line_870;
 int is_stmt_871;
 P119 *t_872;
 P137 *r_873;
 P119 aty_2359;
 P119 lt_2360;
 P137 a_2361;
 P137 w_2362;
 P137 lv_2363;
 P175 lc_2364;
 int ro_2365;
};
struct f_is_package_876fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_875;
 int result_;
 P114 y_2366;
};
struct f_member_of_880fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_877;
 rt_gstr name_878;
 rt_int line_879;
 P114 result_;
 P114 y_2367;
 P114 m_2368;
};
struct f_inside_package_882fr { int dummy;
 struct f_greenc_1fr *up;
 P171 p_881;
 int result_;
 P148 l_2370;
};
struct f_copy_sym_885fr { int dummy;
 struct f_greenc_1fr *up;
 P114 y_883;
 P114 *z_884;
};
struct f_complete_private_888fr { int dummy;
 struct f_greenc_1fr *up;
 P119 ph_886;
 P119 full_887;
 P137 n_2374;
 P171 p_2375;
};
struct f_package_spec_890fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_889;
 P114 y_2376;
 P114 m_2377;
 P114 z_2378;
 P171 saved_2379;
 P114 first_private_2380;
};
struct f_hidden_from_893fr { int dummy;
 struct f_greenc_1fr *up;
 P114 m_891;
 P114 first_private_892;
 int result_;
 P114 p_2384;
};
struct f_package_body_895fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_894;
 P114 y_2386;
 P114 m_2387;
 P114 z_2388;
 P171 saved_2389;
};
struct f_use_clause_897fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_896;
 P171 n_2396;
 P114 y_2397;
 P114 m_2398;
 P114 z_2399;
 P114 old_2400;
};
struct f_fits_902fr { int dummy;
 struct f_greenc_1fr *up;
 P114 y_898;
 P171 args_899;
 P119 want_900;
 int *ok_901;
 P1592 pm_2403;
 P171 a_2404;
 P119 t_2405;
 P175 c_2406;
 P137 v_2407;
 int ro_2408;
 P123 saved_2409;
 rt_int used_2410;
};
struct f_is_builtin_904fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_903;
 int result_;
};
struct f_resolve_overload_911fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_905;
 P171 args_906;
 int is_stmt_907;
 P119 want_908;
 rt_int line_909;
 P114 *y_910;
 P114 z_2415;
 P114 first_2417;
 rt_int n_2418;
 int ok_2419;
 rt_int pass_2421;
};
struct f_resolve_member_overload_919fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_912;
 rt_gstr name_913;
 P171 args_914;
 int is_stmt_915;
 P119 want_916;
 rt_int line_917;
 P114 *y_918;
 P114 pk_2427;
 P114 z_2428;
 rt_int n_2429;
 int ok_2430;
 rt_int pass_2432;
};
struct f_user_operator_925fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_920;
 P119 want_921;
 P119 *t_922;
 P137 *r_923;
 int *done_924;
 P137 op_2437;
 int negate_2438;
 P114 y_2439;
 P171 call_2440;
 P171 fname_2441;
 P171 l_2442;
 P171 rt_2443;
 int ok_2444;
};
struct f_task_p_927fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_926;
 P171 x_2447;
 P171 r_2448;
 rt_int line_2449;
};
struct f_entry_p_929fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_928;
 P171 x_2450;
};
struct f_accept_p_931fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_930;
 P171 x_2451;
};
struct f_delay_p_933fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_932;
 P171 x_2452;
};
struct f_designators_935fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_934;
 P171 head_2453;
 P171 tail_2454;
 P171 n_2455;
};
struct f_parse_task_statement_937fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_936;
 P171 x_2457;
 P171 alt_2458;
 P171 head_2459;
 P171 tail_2460;
 rt_int line_2461;
};
struct f_path_at_941fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int level_938;
 rt_gstr field_939;
 P137 *r_940;
 rt_int i_2464;
};
struct f_is_task_name_943fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_942;
 int result_;
 P114 y_2468;
};
struct f_task_of_947fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_944;
 P114 *y_945;
 P171 *ix_946;
 P171 n_2469;
};
struct f_own_index_949fr { int dummy;
 struct f_greenc_1fr *up;
 P137 *r_948;
 P114 y_2470;
};
struct f_member_954fr { int dummy;
 struct f_greenc_1fr *up;
 P114 y_950;
 rt_gstr arr_951;
 rt_gstr i_952;
 P137 *r_953;
 P137 lo_2471;
 P137 hi_2472;
};
struct f_act_path_957fr { int dummy;
 struct f_greenc_1fr *up;
 P114 y_955;
 P137 *r_956;
 P137 i_2473;
};
struct f_act_path_i_961fr { int dummy;
 struct f_greenc_1fr *up;
 P114 y_958;
 rt_gstr i_959;
 P137 *r_960;
};
struct f_entry_path_965fr { int dummy;
 struct f_greenc_1fr *up;
 P114 y_962;
 rt_gstr i_963;
 P137 *r_964;
 P137 own_2474;
};
struct f_declare_slot_968fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr ctype_name_966;
 rt_gstr field_967;
};
struct f_task_decl_970fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_969;
};
struct f_family_arg_struct_971fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_family_bounds_975fr { int dummy;
 struct f_greenc_1fr *up;
 P171 b_972;
 P114 y_973;
 P137 x_974;
 P137 lo_2476;
 P137 hi_2477;
 P137 v_2478;
 P137 d_2479;
 P119 vt_2480;
 P175 c_2481;
};
struct f_entry_family_slot_980fr { int dummy;
 struct f_greenc_1fr *up;
 P114 y_976;
 rt_gstr base_977;
 rt_gstr i_978;
 P137 *r_979;
 P137 lo_2482;
 P137 hi_2483;
};
struct f_task_spec_982fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_981;
 int has_procs_2484;
 int saved_defer_2485;
 P137 fields_2486;
 P137 ct_2487;
 P1592 pm_2488;
 P137 fp_2489;
 P137 flo_2490;
 P137 fhi_2491;
 P114 y_2492;
 P114 m_2493;
 P114 z_2494;
 P114 saved_2495;
 P137 d_2496;
 P137 v_2497;
 P137 p_2498;
 P137 p2_2499;
 P119 vt_2500;
 P171 r_2501;
};
struct f_entry_decl_984fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_983;
 P114 y_2505;
 P171 p_2506;
 P1592 pm_2507;
 P1592 tail_2508;
 P137 fields_2509;
 P137 ct_2510;
 P137 x_2511;
 P137 lo_2512;
 P137 hi_2513;
};
struct f_task_body_986fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_985;
 P114 y_2517;
 P114 b_2518;
 P114 m_2519;
 P114 z_2520;
 P137 upp_2521;
 P114 saved_2522;
};
struct f_task_awaits_989fr { int dummy;
 struct f_greenc_1fr *up;
 P171 decls_987;
 P137 *aw_988;
 P171 e_2526;
 P114 y_2527;
 P137 p_2528;
};
struct f_task_failure_991fr { int dummy;
 struct f_greenc_1fr *up;
 P171 s_990;
 P114 y_2530;
 P137 a_2531;
 P137 i_2532;
 P119 it_2533;
};
struct f_entry_sym_995fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_992;
 P114 *y_993;
 P171 *ix_994;
 P114 t_2534;
};
struct f_other_call_1000fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_996;
 int is_stmt_997;
 P119 *t_998;
 P137 *r_999;
 P114 y_2535;
 P1592 pm_2536;
 P171 a_2537;
 P137 parts_2538;
 P137 v_2539;
 P137 lv_2540;
 P137 ent_2541;
 P137 act_2542;
 P137 i_2543;
 P119 vt_2544;
 P119 lt_2545;
 P175 lc_2546;
 int ro_2547;
 P171 ix_2548;
 P171 fix_2549;
 P171 args_node_2550;
};
struct f_other_attr_1005fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_1001;
 P114 y_1002;
 P119 *t_1003;
 P137 *r_1004;
 rt_gstr a_2552;
 P137 p_2553;
};
struct f_member_attr_1009fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_1006;
 P119 *t_1007;
 P137 *r_1008;
 P114 y_2554;
 P171 ix_2555;
 P137 i_2556;
 P137 p_2557;
 P119 vt_2558;
};
struct f_task_builtin_1015fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1010;
 P171 args_1011;
 rt_int line_1012;
 P119 *t_1013;
 P137 *r_1014;
 P119 vt_2559;
 P137 v_2560;
};
struct f_gen_accept_1017fr { int dummy;
 struct f_greenc_1fr *up;
 P171 s_1016;
 P114 y_2561;
 P140 saved_ax_2562;
 P137 ent_2563;
 P137 ep_2564;
 P137 xf_2565;
 P137 x_2566;
 P1592 pm_2567;
 P171 f_2568;
 P114 p_2569;
};
struct f_member_slot_1021fr { int dummy;
 struct f_greenc_1fr *up;
 P114 y_1018;
 P171 s_1019;
 P137 *ent_1020;
 P119 vt_2571;
 P137 v_2572;
};
struct f_gen_delay_ticks_1024fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_1022;
 P137 *r_1023;
 P119 vt_2573;
 P137 v_2574;
};
struct f_gen_select_1026fr { int dummy;
 struct f_greenc_1fr *up;
 P171 s_1025;
 P171 alt_2575;
 rt_int n_2576;
 rt_int i_2577;
 int has_delay_2578;
 int has_accept_2579;
 P137 al_2580;
 P137 w_2581;
 P137 g_2582;
 P137 ent_2583;
 P137 ticks_2584;
 P119 vt_2585;
 P114 y_2586;
};
struct f_family_range_1031fr { int dummy;
 struct f_greenc_1fr *up;
 P114 y_1027;
 P171 ix_1028;
 P137 *lo_1029;
 P137 *hi_1030;
 P119 vt_2590;
};
struct f_task_statement_gen_1033fr { int dummy;
 struct f_greenc_1fr *up;
 P171 s_1032;
 P171 n_2591;
 P171 ix_2592;
 P114 y_2593;
 P137 a_2594;
 P137 d_2595;
 P137 l_2596;
 P137 ticks_2597;
 P137 lo_2598;
 P137 hi_2599;
};
struct f_root_name_1035fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_1034;
 P171 result_;
};
struct f_check_pure_target_1038fr { int dummy;
 struct f_greenc_1fr *up;
 P171 target_1036;
 rt_int line_1037;
 P171 n_2603;
 P114 y_2604;
};
struct f_assigns_nonlocal_1041fr { int dummy;
 struct f_greenc_1fr *up;
 P171 d_1039;
 rt_gstr name_1040;
 int result_;
};
struct f_declares_1044fr { int dummy;
 struct f_greenc_1fr *up;
 P171 d_1042;
 rt_gstr name_1043;
 int result_;
 P171 p_2605;
 P171 e_2606;
};
struct f_scan_handlers_1048fr { int dummy;
 struct f_greenc_1fr *up;
 P171 h_1045;
 P171 d_1046;
 rt_gstr name_1047;
 int result_;
 P171 p_2609;
};
struct f_scan_assigns_1052fr { int dummy;
 struct f_greenc_1fr *up;
 P171 stmts_1049;
 P171 d_1050;
 rt_gstr name_1051;
 int result_;
 P171 s_2611;
 P171 a_2612;
 P171 r_2613;
};
struct f_check_call_rules_1055fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_1053;
 P114 y_1054;
 P114 z_2617;
 P114 s_2618;
};
struct f_generic_p_1057fr { int dummy;
 struct f_greenc_1fr *up;
 P171 *res_1056;
 P171 x_2620;
 P171 p_2621;
 P171 head_2622;
 P171 tail_2623;
 P171 names_2624;
 P171 st_2625;
 P171 def_2626;
 P171 sub_2627;
 P137 def_name_text_2628;
 int more_2629;
};
struct f_instantiation_1060fr { int dummy;
 struct f_greenc_1fr *up;
 P171 x_1058;
 P171 *res_1059;
 P171 i_2632;
 P171 head_2633;
 P171 tail_2634;
 P171 a_2635;
 P137 formal_2636;
 rt_int mark_2637;
 int more_2638;
};
struct f_generic_decl_1062fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_1061;
 P114 y_2640;
};
struct f_is_generic_name_1064fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_1063;
 int result_;
 P114 y_2641;
};
struct f_attach_generic_body_1066fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_1065;
 P114 y_2642;
};
struct f_restore_generic_context_1069fr { int dummy;
 struct f_greenc_1fr *up;
 P171 body_node_1067;
 rt_int line_1068;
 P143 ctx_2645;
 P114 m_2646;
 P114 z_2647;
 int seen_2648;
};
struct f_gactual_1073fr { int dummy;
 struct f_greenc_1fr *up;
 P171 args_1070;
 rt_int nth_1071;
 rt_gstr name_1072;
 P171 result_;
 P171 a_2653;
 rt_int i_2654;
};
struct f_copy_node_1077fr { int dummy;
 struct f_greenc_1fr *up;
 P171 n_1074;
 P137 name_1075;
 P171 *r_1076;
};
struct f_instantiate_1079fr { int dummy;
 struct f_greenc_1fr *up;
 P171 e_1078;
 P114 g_2656;
 P171 gd_2657;
 P171 pat_2658;
 P171 f_2659;
 P171 a_2660;
 P171 cn_2661;
 P114 y_2662;
 P114 z_2663;
 P114 fs_2664;
 rt_int nth_2665;
 P119 t_2666;
 P119 vt_2667;
 P175 c_2668;
 P137 v_2669;
 P137 acc_2670;
 P137 x_2671;
 int ok_2672;
};
struct f_predef_type_1084fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1080;
 P119 t_1081;
 rt_gstr lo_1082;
 rt_gstr hi_1083;
 P114 y_2676;
};
struct f_predef_const_1088fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1085;
 P119 t_1086;
 rt_gstr code_text_1087;
 P114 y_2683;
};
struct f_predef_exc_1090fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1089;
 P114 y_2684;
};
struct f_predef_lit_1094fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1091;
 P119 t_1092;
 rt_int v_1093;
 P114 y_2685;
};
struct f_predefine_1095fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr control_2686;
 rt_int start_2687;
 rt_int code_no_2688;
 rt_int i_2691;
 rt_int i_2699;
};
struct f_translate_1097fr { int dummy;
 struct f_greenc_1fr *up;
 P171 u_1096;
 P171 p_2703;
 P114 y_2704;
};
struct f_print_program_1098fr { int dummy;
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
 P114 cur_task_180;
 rt_int accept_depth_181;
 int famarg_done_182;
 P171 fam_ix_183;
 P171 call_task_ix_184;
 int saw_interface_185;
 int defer_entry_structs_186;
 P123 out_awaits_187;
 P175 no_cons_188;
 P171 units_189;
 P148 pkg_stack_190;
 P171 cur_pkg_191;
 P137 prefix_hint_192;
 P119 call_want_193;
 P114 pure_sym_194;
 rt_int pure_depth_195;
 int vrp_ok_196;
 int in_lv_path_197;
 int last_deref_198;
 P137 main_name_199;
 P137 conf_system_200;
 rt_int conf_storage_unit_201;
 rt_int conf_memory_size_202;
 P137 conf_optimize_203;
};
static void as_A2192(A2192 *d, A2192 s);
static A2192 cp_A2192(A2192 s);
static int eq_A2192(A2192 a, A2192 b);
static A2192 cat_A2192(A2192 a, A2192 b);
static A2192 one_A2192(rt_int e);
static void as_A2190(A2190 *d, A2190 s);
static A2190 cp_A2190(A2190 s);
static int eq_A2190(A2190 a, A2190 b);
static A2190 cat_A2190(A2190 a, A2190 b);
static A2190 one_A2190(rt_int e);
static void as_A2187(A2187 *d, A2187 s);
static A2187 cp_A2187(A2187 s);
static int eq_A2187(A2187 a, A2187 b);
static A2187 cat_A2187(A2187 a, A2187 b);
static A2187 one_A2187(int e);
static void as_R1732(R1732 *d, R1732 s);
static R1732 cp_R1732(R1732 s);
static int eq_R1732(R1732 a, R1732 b);
static void as_R1612(R1612 *d, R1612 s);
static R1612 cp_R1612(R1612 s);
static int eq_R1612(R1612 a, R1612 b);
static void as_R1608(R1608 *d, R1608 s);
static R1608 cp_R1608(R1608 s);
static int eq_R1608(R1608 a, R1608 b);
static void as_R1593(R1593 *d, R1593 s);
static R1593 cp_R1593(R1593 s);
static int eq_R1593(R1593 a, R1593 b);
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
static P137 f_mk_205(struct f_greenc_1fr *up_, rt_gstr s_204);
static void f_new_name_208(struct f_greenc_1fr *up_, rt_gstr base_206, P137 *res_207);
static int f_is_letter_210(struct f_greenc_1fr *up_, int c_209);
static int f_is_digit_212(struct f_greenc_1fr *up_, int c_211);
static int f_upper_214(struct f_greenc_1fr *up_, int c_213);
static rt_gstr f_lower_s_216(struct f_greenc_1fr *up_, rt_gstr s_215);
static rt_gstr f_upper_s_218(struct f_greenc_1fr *up_, rt_gstr s_217);
static int f_is_operator_220(struct f_greenc_1fr *up_, rt_gstr s_219);
static rt_gstr f_c_field_222(struct f_greenc_1fr *up_, rt_gstr s_221);
static rt_gstr f_q_223(struct f_greenc_1fr *up_);
static void f_fail_226(struct f_greenc_1fr *up_, rt_int line_224, rt_gstr msg_225);
static P123 f_new_buffer_227(struct f_greenc_1fr *up_);
static void f_put_to_230(struct f_greenc_1fr *up_, P123 b_228, rt_gstr s_229);
static void f_emit_232(struct f_greenc_1fr *up_, rt_gstr s_231);
static void f_print_buffer_234(struct f_greenc_1fr *up_, P123 b_233);
static void f_splice_237(struct f_greenc_1fr *up_, P123 a_235, P123 b_236);
static int f_is_reserved_239(struct f_greenc_1fr *up_, rt_gstr w_238);
static void f_add_token_243(struct f_greenc_1fr *up_, rt_int kind_240, rt_gstr s_241, rt_int ival_242);
static rt_int f_digit_value_245(struct f_greenc_1fr *up_, int c_244);
static rt_int f_digit_in_248(struct f_greenc_1fr *up_, int c_246, rt_int base_247);
static void f_accumulate_252(struct f_greenc_1fr *up_, rt_int *v_249, rt_int base_250, rt_int d_251);
static void f_lex_line_254(struct f_greenc_1fr *up_, rt_gstr line_253);
static void f_exponent_259(struct f_greenc_1fr *up_, rt_gstr line_255, rt_int *j_256, rt_gstr *buf_257, rt_int *bl_258);
static void f_include_open_262(struct f_greenc_1fr *up_, rt_gstr name_260, rt_int *length_261);
static void f_include_char_265(struct f_greenc_1fr *up_, rt_int i_263, int *c_264);
static void f_check_include_266(struct f_greenc_1fr *up_);
static void f_include_text_268(struct f_greenc_1fr *up_, rt_int n_267);
static void f_include_line_272(struct f_greenc_1fr *up_, rt_gstr t_269, rt_int from_270, rt_int to_271);
static void f_read_source_273(struct f_greenc_1fr *up_);
static P171 f_nn_276(struct f_greenc_1fr *up_, rt_int kind_274, rt_int line_275);
static void f_append_280(struct f_greenc_1fr *up_, P171 *head_277, P171 *tail_278, P171 x_279);
static rt_int f_list_len_282(struct f_greenc_1fr *up_, P171 l_281);
static rt_int f_cur_line_283(struct f_greenc_1fr *up_);
static int f_at_kw_285(struct f_greenc_1fr *up_, rt_gstr w_284);
static int f_at_op_287(struct f_greenc_1fr *up_, rt_gstr w_286);
static int f_at_kind_289(struct f_greenc_1fr *up_, rt_int k_288);
static rt_int f_kind_at_291(struct f_greenc_1fr *up_, rt_int k_290);
static rt_gstr f_text_at_293(struct f_greenc_1fr *up_, rt_int k_292);
static void f_perror_295(struct f_greenc_1fr *up_, rt_gstr msg_294);
static void f_skip_296(struct f_greenc_1fr *up_);
static void f_expect_kw_298(struct f_greenc_1fr *up_, rt_gstr w_297);
static void f_expect_op_300(struct f_greenc_1fr *up_, rt_gstr w_299);
static void f_expect_id_302(struct f_greenc_1fr *up_, P137 *res_301);
static void f_name_node_304(struct f_greenc_1fr *up_, P171 *res_303);
static void f_id_list_306(struct f_greenc_1fr *up_, P171 *res_305);
static P171 f_binop_311(struct f_greenc_1fr *up_, P137 op_307, P171 l_308, P171 r_309, rt_int line_310);
static void f_expr_313(struct f_greenc_1fr *up_, P171 *res_312);
static int f_is_rel_315(struct f_greenc_1fr *up_, rt_gstr s_314);
static void f_relation_317(struct f_greenc_1fr *up_, P171 *res_316);
static void f_simple_expr_319(struct f_greenc_1fr *up_, P171 *res_318);
static void f_term_321(struct f_greenc_1fr *up_, P171 *res_320);
static void f_factor_323(struct f_greenc_1fr *up_, P171 *res_322);
static void f_primary_325(struct f_greenc_1fr *up_, P171 *res_324);
static void f_agg_or_paren_327(struct f_greenc_1fr *up_, P171 *res_326);
static int f_aggregate_ahead_328(struct f_greenc_1fr *up_);
static void f_name_p_330(struct f_greenc_1fr *up_, P171 *res_329);
static void f_component_list_332(struct f_greenc_1fr *up_, P171 *res_331);
static void f_discrete_range_p_334(struct f_greenc_1fr *up_, P171 *res_333);
static void f_subtype_ind_336(struct f_greenc_1fr *up_, P171 *res_335);
static void f_type_spec_338(struct f_greenc_1fr *up_, P171 *res_337);
static void f_type_def_340(struct f_greenc_1fr *up_, P171 *res_339);
static void f_pragma_p_342(struct f_greenc_1fr *up_, P171 *res_341);
static void f_check_pragma_344(struct f_greenc_1fr *up_, P171 x_343);
static void f_skip_visibility_345(struct f_greenc_1fr *up_);
static void f_skip_representation_346(struct f_greenc_1fr *up_);
static void f_decl_part_348(struct f_greenc_1fr *up_, P171 *res_347);
static void f_object_decl_350(struct f_greenc_1fr *up_, P171 *res_349);
static void f_type_decl_352(struct f_greenc_1fr *up_, P171 *res_351);
static void f_formal_part_354(struct f_greenc_1fr *up_, P171 *res_353);
static void f_designator_356(struct f_greenc_1fr *up_, P137 *res_355);
static void f_subprogram_358(struct f_greenc_1fr *up_, P171 *res_357);
static void f_body_part_360(struct f_greenc_1fr *up_, P171 x_359);
static void f_parse_handlers_362(struct f_greenc_1fr *up_, P171 *res_361);
static void f_package_p_364(struct f_greenc_1fr *up_, P171 *res_363);
static int f_at_statements_end_365(struct f_greenc_1fr *up_);
static void f_statements_367(struct f_greenc_1fr *up_, P171 *res_366);
static void f_statement_369(struct f_greenc_1fr *up_, P171 *res_368);
static void f_task_statement_371(struct f_greenc_1fr *up_, P171 *res_370);
static void f_if_stmt_373(struct f_greenc_1fr *up_, P171 *res_372);
static void f_case_stmt_375(struct f_greenc_1fr *up_, P171 *res_374);
static void f_loop_stmt_377(struct f_greenc_1fr *up_, P171 *res_376);
static void f_compilation_379(struct f_greenc_1fr *up_, P171 *res_378);
static rt_int f_hash_381(struct f_greenc_1fr *up_, rt_gstr s_380);
static P114 f_lookup_383(struct f_greenc_1fr *up_, rt_gstr name_382);
static int f_same_task_386(struct f_greenc_1fr *up_, P114 a_384, P114 b_385);
static P114 f_lookup_entry_389(struct f_greenc_1fr *up_, rt_gstr name_387, P114 owner_388);
static P114 f_lookup_decl_391(struct f_greenc_1fr *up_, P171 d_390);
static int f_overloadable_393(struct f_greenc_1fr *up_, P114 y_392);
static int f_same_396(struct f_greenc_1fr *up_, P119 a_394, P119 b_395);
static P119 f_root_398(struct f_greenc_1fr *up_, P119 t_397);
static int f_derived_from_401(struct f_greenc_1fr *up_, P119 a_399, P119 b_400);
static int f_is_numeric_403(struct f_greenc_1fr *up_, P119 t_402);
static int f_is_discrete_405(struct f_greenc_1fr *up_, P119 t_404);
static int f_same_signature_408(struct f_greenc_1fr *up_, P1592 a_406, P1592 b_407);
static void f_define_411(struct f_greenc_1fr *up_, P114 y_409, rt_int line_410);
static void f_open_scope_412(struct f_greenc_1fr *up_);
static void f_close_scope_413(struct f_greenc_1fr *up_);
static P114 f_new_sym_416(struct f_greenc_1fr *up_, rt_int kind_414, P137 name_415);
static P119 f_new_typ_418(struct f_greenc_1fr *up_, rt_int kind_417);
static P175 f_new_cons_419(struct f_greenc_1fr *up_);
static rt_gstr f_kind_name_421(struct f_greenc_1fr *up_, P119 t_420);
static void f_check_type_425(struct f_greenc_1fr *up_, P119 got_422, P119 want_423, rt_int line_424);
static rt_int f_field_count_427(struct f_greenc_1fr *up_, P119 t_426);
static void f_ctype_430(struct f_greenc_1fr *up_, P119 t_428, P137 *r_429);
static void f_field_decls_433(struct f_greenc_1fr *up_, P119 t_431, P137 *r_432);
static void f_declare_ctype_435(struct f_greenc_1fr *up_, P119 t_434);
static rt_int f_lit_index_438(struct f_greenc_1fr *up_, P171 lits_436, rt_gstr name_437);
static void f_manifest_442(struct f_greenc_1fr *up_, P171 e_439, rt_int *v_440, int *ok_441);
static void f_resolve_446(struct f_greenc_1fr *up_, P171 st_443, P119 *t_444, P175 *c_445);
static void f_constraint_list_450(struct f_greenc_1fr *up_, P171 st_447, P119 t_448, P175 c_449);
static void f_discriminant_constraint_454(struct f_greenc_1fr *up_, P171 st_451, P119 t_452, P175 c_453);
static void f_discrete_bounds_460(struct f_greenc_1fr *up_, P171 r_455, P119 want_456, P119 *t_457, P137 *lo_458, P137 *hi_459);
static void f_range_of_464(struct f_greenc_1fr *up_, P171 r_461, P119 t_462, P175 c_463);
static void f_fresh_typ_468(struct f_greenc_1fr *up_, rt_int kind_465, P137 name_466, P119 *t_467);
static void f_inherit_472(struct f_greenc_1fr *up_, P119 parent_469, P119 t_470, rt_int line_471);
static void f_derive_literals_475(struct f_greenc_1fr *up_, P119 t_473, rt_int line_474);
static void f_type_definition_480(struct f_greenc_1fr *up_, P171 d_476, P137 name_477, P119 *t_478, P175 *c_479);
static void f_array_type_487(struct f_greenc_1fr *up_, P171 idx_481, P171 comp_482, P137 name_483, rt_int line_484, P119 *t_485, P175 *c_486);
static void f_static_range_491(struct f_greenc_1fr *up_, P171 l_488, P171 h_489, P175 c_490);
static void f_elem_ctype_494(struct f_greenc_1fr *up_, P119 t_492, P137 *r_493);
static void f_first_index_497(struct f_greenc_1fr *up_, P119 t_495, P137 *r_496);
static int f_is_string_499(struct f_greenc_1fr *up_, P119 t_498);
static rt_gstr f_subst_502(struct f_greenc_1fr *up_, rt_gstr s_500, rt_gstr r_501);
static int f_mentions_record_504(struct f_greenc_1fr *up_, P137 s_503);
static void f_subst_cons_508(struct f_greenc_1fr *up_, P175 c_505, rt_gstr r_506, P175 *res_507);
static void f_remove_sym_510(struct f_greenc_1fr *up_, P114 y_509);
static void f_record_components_515(struct f_greenc_1fr *up_, P171 list_511, P119 t_512, P1731 g_513, rt_int line_514);
static void f_guard_cond_519(struct f_greenc_1fr *up_, P1731 g_516, P119 t_517, P137 *r_518);
static void f_arm_test_524(struct f_greenc_1fr *up_, P171 arm_520, P137 dname_521, rt_gstr d_522, P137 *x_523);
static void f_derived_type_529(struct f_greenc_1fr *up_, P171 d_525, P137 name_526, P119 *t_527, P175 *c_528);
static void f_real_type_534(struct f_greenc_1fr *up_, P171 d_530, P137 name_531, P119 *t_532, P175 *c_533);
static void f_finish_ptr_536(struct f_greenc_1fr *up_, P119 t_535);
static void f_init_storage_540(struct f_greenc_1fr *up_, rt_gstr lval_537, P119 t_538, P175 c_539);
static int f_composite_542(struct f_greenc_1fr *up_, P119 t_541);
static void f_assign_code_548(struct f_greenc_1fr *up_, rt_gstr lval_543, P119 t_544, rt_gstr v_545, P175 c_546, P137 *r_547);
static void f_copy_code_552(struct f_greenc_1fr *up_, P119 t_549, rt_gstr v_550, P137 *r_551);
static void f_eq_code_557(struct f_greenc_1fr *up_, P119 t_553, rt_gstr a_554, rt_gstr b_555, P137 *r_556);
static int f_seen_name_560(struct f_greenc_1fr *up_, P148 l_558, rt_gstr s_559);
static void f_emit_helpers_561(struct f_greenc_1fr *up_);
static void f_helper_bodies_563(struct f_greenc_1fr *up_, P119 t_562);
static void f_storage_567(struct f_greenc_1fr *up_, rt_gstr name_564, P119 t_565, P137 *access_code_566);
static void f_bind_570(struct f_greenc_1fr *up_, P114 y_568, P137 access_code_569);
static void f_declare_subprograms_572(struct f_greenc_1fr *up_, P171 from_571);
static void f_declare_one_574(struct f_greenc_1fr *up_, P171 e_573);
static void f_build_subprogram_577(struct f_greenc_1fr *up_, P171 d_575, P114 *y_576);
static void f_decl_elements_579(struct f_greenc_1fr *up_, P171 decls_578);
static void f_decl_element_581(struct f_greenc_1fr *up_, P171 e_580);
static void f_pragma_decl_583(struct f_greenc_1fr *up_, P171 e_582);
static void f_resolve_object_type_587(struct f_greenc_1fr *up_, P171 st_584, P119 *t_585, P175 *c_586);
static void f_other_decl_589(struct f_greenc_1fr *up_, P171 e_588);
static void f_subprogram_body_592(struct f_greenc_1fr *up_, P171 d_590, P114 y_591);
static void f_gen_statements_594(struct f_greenc_1fr *up_, P171 stmts_593);
static void f_pop_frames_596(struct f_greenc_1fr *up_, rt_int upto_595);
static void f_push_cleanup_598(struct f_greenc_1fr *up_, rt_gstr s_597);
static void f_pop_cleanup_599(struct f_greenc_1fr *up_);
static void f_guarded_603(struct f_greenc_1fr *up_, P171 stmts_600, P171 hs_601, rt_int line_602);
static void f_exc_id_607(struct f_greenc_1fr *up_, rt_gstr name_604, rt_int line_605, P137 *r_606);
static void f_gen_statement_609(struct f_greenc_1fr *up_, P171 s_608);
static void f_slice_assign_611(struct f_greenc_1fr *up_, P171 s_610);
static void f_gen_call_613(struct f_greenc_1fr *up_, P171 s_612);
static void f_gen_if_615(struct f_greenc_1fr *up_, P171 s_614);
static void f_gen_case_617(struct f_greenc_1fr *up_, P171 s_616);
static void f_push_exit_621(struct f_greenc_1fr *up_, P137 match_618, int is_loop_619, P137 *label_620);
static void f_gen_loop_623(struct f_greenc_1fr *up_, P171 s_622);
static void f_gen_block_625(struct f_greenc_1fr *up_, P171 s_624);
static void f_gen_exit_627(struct f_greenc_1fr *up_, P171 s_626);
static void f_gen_return_629(struct f_greenc_1fr *up_, P171 s_628);
static void f_access_of_632(struct f_greenc_1fr *up_, P114 y_630, P137 *r_631);
static void f_link_to_635(struct f_greenc_1fr *up_, rt_int l_633, P137 *r_634);
static rt_gstr f_c_ident_637(struct f_greenc_1fr *up_, rt_gstr s_636);
static void f_deref_641(struct f_greenc_1fr *up_, rt_gstr base_638, P119 t_639, P137 *r_640);
static int f_is_object_643(struct f_greenc_1fr *up_, P171 e_642);
static int f_is_const_access_645(struct f_greenc_1fr *up_, P171 e_644);
static void f_lvalue_651(struct f_greenc_1fr *up_, P171 e_646, P137 *code_out_647, P119 *t_648, P175 *c_649, int *ro_650);
static void f_select_on_660(struct f_greenc_1fr *up_, rt_gstr base_652, P119 bt_653, P171 e_654, int *ro_655, int lv_656, P137 *code_out_657, P119 *t_658, P175 *c_659);
static void f_index_on_669(struct f_greenc_1fr *up_, rt_gstr base_661, P119 bt_662, P171 e_663, int *ro_664, int lv_665, P137 *code_out_666, P119 *t_667, P175 *c_668);
static int f_type_attribute_672(struct f_greenc_1fr *up_, P119 t_670, rt_gstr name_671);
static int f_is_type_name_674(struct f_greenc_1fr *up_, rt_gstr n_673);
static int f_is_char_lit_676(struct f_greenc_1fr *up_, P171 e_675);
static int f_is_enum_lit_678(struct f_greenc_1fr *up_, P171 e_677);
static rt_gstr f_c_string_680(struct f_greenc_1fr *up_, rt_gstr s_679);
static int f_is_literal_682(struct f_greenc_1fr *up_, P171 e_681);
static void f_range_bounds_690(struct f_greenc_1fr *up_, P171 l_683, P171 h_684, P119 want_685, rt_int line_686, P119 *t_687, P137 *lo_688, P137 *hi_689);
static void f_gexpr_695(struct f_greenc_1fr *up_, P171 e_691, P119 want_692, P119 *t_693, P137 *r_694);
static void f_gexpr_1_700(struct f_greenc_1fr *up_, P171 e_696, P119 want_697, P119 *t_698, P137 *r_699);
static void f_string_aggregate_705(struct f_greenc_1fr *up_, P171 e_701, P119 want_702, P119 *t_703, P137 *r_704);
static void f_char_literal_710(struct f_greenc_1fr *up_, P171 e_706, P119 want_707, P119 *t_708, P137 *r_709);
static void f_gen_name_715(struct f_greenc_1fr *up_, P171 e_711, P119 want_712, P119 *t_713, P137 *r_714);
static void f_gen_unop_720(struct f_greenc_1fr *up_, P171 e_716, P119 want_717, P119 *t_718, P137 *r_719);
static int f_short_int_722(struct f_greenc_1fr *up_, P119 t_721);
static rt_gstr f_float_kind_724(struct f_greenc_1fr *up_, P119 t_723);
static void f_catenation_729(struct f_greenc_1fr *up_, P171 e_725, P119 want_726, P119 *t_727, P137 *r_728);
static void f_cat_operand_734(struct f_greenc_1fr *up_, P171 x_730, P119 arrt_731, rt_int line_732, P137 *r_733);
static void f_arithmetic_739(struct f_greenc_1fr *up_, P171 e_735, P119 want_736, P119 *t_737, P137 *r_738);
static void f_fixed_operation_747(struct f_greenc_1fr *up_, P171 e_740, P119 ta_741, P119 tb_742, rt_gstr a_743, rt_gstr b_744, P119 *t_745, P137 *r_746);
static void f_gen_binop_752(struct f_greenc_1fr *up_, P171 e_748, P119 want_749, P119 *t_750, P137 *r_751);
static void f_conversion_757(struct f_greenc_1fr *up_, P171 e_753, P114 y_754, P119 *t_755, P137 *r_756);
static void f_constrain_761(struct f_greenc_1fr *up_, P114 y_758, P119 t_759, P137 *r_760);
static void f_array_conversion_768(struct f_greenc_1fr *up_, P171 e_762, P119 t_763, P119 aty_764, P175 c_765, rt_gstr a_766, P137 *r_767);
static void f_gen_attr_773(struct f_greenc_1fr *up_, P171 e_769, P119 want_770, P119 *t_771, P137 *r_772);
static void f_attr_dim_777(struct f_greenc_1fr *up_, P171 e_774, P119 arrt_775, rt_int *n_776);
static void f_object_array_attr_783(struct f_greenc_1fr *up_, P171 e_778, P119 arrt_779, rt_gstr v_780, P119 *t_781, P137 *r_782);
static void f_type_array_attr_789(struct f_greenc_1fr *up_, P171 e_784, P119 arrt_785, P175 c_786, P119 *t_787, P137 *r_788);
static void f_lit_table_792(struct f_greenc_1fr *up_, P119 t_790, P137 *r_791);
static void f_val_rep_798(struct f_greenc_1fr *up_, P171 e_793, P119 tt_794, P175 c_795, P119 *t_796, P137 *r_797);
static void f_allocator_803(struct f_greenc_1fr *up_, P171 e_799, P119 want_800, P119 *t_801, P137 *r_802);
static void f_aggregate_808(struct f_greenc_1fr *up_, P171 e_804, P119 want_805, P119 *t_806, P137 *r_807);
static void f_captured_811(struct f_greenc_1fr *up_, P123 b_809, P137 *r_810);
static P1607 f_field_at_814(struct f_greenc_1fr *up_, P119 rt_812, rt_int k_813);
static P171 f_item_for_819(struct f_greenc_1fr *up_, P171 e_815, P119 rt_816, rt_int k_817, rt_int p_818);
static void f_arm_holds_823(struct f_greenc_1fr *up_, P171 arm_820, rt_int v_821, int *res_822);
static void f_record_aggregate_827(struct f_greenc_1fr *up_, P171 e_824, P119 rt_825, P137 *r_826);
static rt_int f_field_index_830(struct f_greenc_1fr *up_, P119 rt_828, rt_gstr name_829);
static void f_agg_component_836(struct f_greenc_1fr *up_, rt_gstr tmp_831, P119 rt_832, rt_int k_833, P171 v_834, rt_int line_835);
static void f_static_choice_840(struct f_greenc_1fr *up_, P171 x_837, rt_int *v_838, int *ok_839);
static void f_array_aggregate_845(struct f_greenc_1fr *up_, P171 e_841, P119 arrt_842, P137 bounds_843, P137 *r_844);
static void f_element_store_849(struct f_greenc_1fr *up_, rt_gstr lv_846, P119 arrt_847, rt_gstr v_848);
static void f_check_choices_853(struct f_greenc_1fr *up_, P171 e_850, P119 arrt_851, int has_others_852);
static P171 f_actual_for_857(struct f_greenc_1fr *up_, P171 args_854, P1592 pm_855, P1592 first_856);
static void f_gcall_862(struct f_greenc_1fr *up_, P171 e_858, int is_stmt_859, P119 *t_860, P137 *r_861);
static void f_gcall_with_867(struct f_greenc_1fr *up_, P171 e_863, P114 y_864, P119 *t_865, P137 *r_866);
static void f_builtin_874(struct f_greenc_1fr *up_, rt_gstr name_868, P171 args_869, rt_int line_870, int is_stmt_871, P119 *t_872, P137 *r_873);
static int f_is_package_876(struct f_greenc_1fr *up_, P171 e_875);
static P114 f_member_of_880(struct f_greenc_1fr *up_, rt_gstr p_877, rt_gstr name_878, rt_int line_879);
static int f_inside_package_882(struct f_greenc_1fr *up_, P171 p_881);
static void f_copy_sym_885(struct f_greenc_1fr *up_, P114 y_883, P114 *z_884);
static void f_complete_private_888(struct f_greenc_1fr *up_, P119 ph_886, P119 full_887);
static void f_package_spec_890(struct f_greenc_1fr *up_, P171 e_889);
static int f_hidden_from_893(struct f_greenc_1fr *up_, P114 m_891, P114 first_private_892);
static void f_package_body_895(struct f_greenc_1fr *up_, P171 e_894);
static void f_use_clause_897(struct f_greenc_1fr *up_, P171 e_896);
static void f_fits_902(struct f_greenc_1fr *up_, P114 y_898, P171 args_899, P119 want_900, int *ok_901);
static int f_is_builtin_904(struct f_greenc_1fr *up_, rt_gstr n_903);
static void f_resolve_overload_911(struct f_greenc_1fr *up_, rt_gstr name_905, P171 args_906, int is_stmt_907, P119 want_908, rt_int line_909, P114 *y_910);
static void f_resolve_member_overload_919(struct f_greenc_1fr *up_, rt_gstr p_912, rt_gstr name_913, P171 args_914, int is_stmt_915, P119 want_916, rt_int line_917, P114 *y_918);
static void f_user_operator_925(struct f_greenc_1fr *up_, P171 e_920, P119 want_921, P119 *t_922, P137 *r_923, int *done_924);
static void f_task_p_927(struct f_greenc_1fr *up_, P171 *res_926);
static void f_entry_p_929(struct f_greenc_1fr *up_, P171 *res_928);
static void f_accept_p_931(struct f_greenc_1fr *up_, P171 *res_930);
static void f_delay_p_933(struct f_greenc_1fr *up_, P171 *res_932);
static void f_designators_935(struct f_greenc_1fr *up_, P171 *res_934);
static void f_parse_task_statement_937(struct f_greenc_1fr *up_, P171 *res_936);
static void f_path_at_941(struct f_greenc_1fr *up_, rt_int level_938, rt_gstr field_939, P137 *r_940);
static int f_is_task_name_943(struct f_greenc_1fr *up_, rt_gstr n_942);
static void f_task_of_947(struct f_greenc_1fr *up_, P171 e_944, P114 *y_945, P171 *ix_946);
static void f_own_index_949(struct f_greenc_1fr *up_, P137 *r_948);
static void f_member_954(struct f_greenc_1fr *up_, P114 y_950, rt_gstr arr_951, rt_gstr i_952, P137 *r_953);
static void f_act_path_957(struct f_greenc_1fr *up_, P114 y_955, P137 *r_956);
static void f_act_path_i_961(struct f_greenc_1fr *up_, P114 y_958, rt_gstr i_959, P137 *r_960);
static void f_entry_path_965(struct f_greenc_1fr *up_, P114 y_962, rt_gstr i_963, P137 *r_964);
static void f_declare_slot_968(struct f_greenc_1fr *up_, rt_gstr ctype_name_966, rt_gstr field_967);
static void f_task_decl_970(struct f_greenc_1fr *up_, P171 e_969);
static void f_family_arg_struct_971(struct f_greenc_1fr *up_);
static void f_family_bounds_975(struct f_greenc_1fr *up_, P171 b_972, P114 y_973, P137 x_974);
static void f_entry_family_slot_980(struct f_greenc_1fr *up_, P114 y_976, rt_gstr base_977, rt_gstr i_978, P137 *r_979);
static void f_task_spec_982(struct f_greenc_1fr *up_, P171 e_981);
static void f_entry_decl_984(struct f_greenc_1fr *up_, P171 e_983);
static void f_task_body_986(struct f_greenc_1fr *up_, P171 e_985);
static void f_task_awaits_989(struct f_greenc_1fr *up_, P171 decls_987, P137 *aw_988);
static void f_task_failure_991(struct f_greenc_1fr *up_, P171 s_990);
static void f_entry_sym_995(struct f_greenc_1fr *up_, P171 e_992, P114 *y_993, P171 *ix_994);
static void f_other_call_1000(struct f_greenc_1fr *up_, P171 e_996, int is_stmt_997, P119 *t_998, P137 *r_999);
static void f_other_attr_1005(struct f_greenc_1fr *up_, P171 e_1001, P114 y_1002, P119 *t_1003, P137 *r_1004);
static void f_member_attr_1009(struct f_greenc_1fr *up_, P171 e_1006, P119 *t_1007, P137 *r_1008);
static void f_task_builtin_1015(struct f_greenc_1fr *up_, rt_gstr name_1010, P171 args_1011, rt_int line_1012, P119 *t_1013, P137 *r_1014);
static void f_gen_accept_1017(struct f_greenc_1fr *up_, P171 s_1016);
static void f_member_slot_1021(struct f_greenc_1fr *up_, P114 y_1018, P171 s_1019, P137 *ent_1020);
static void f_gen_delay_ticks_1024(struct f_greenc_1fr *up_, P171 e_1022, P137 *r_1023);
static void f_gen_select_1026(struct f_greenc_1fr *up_, P171 s_1025);
static void f_family_range_1031(struct f_greenc_1fr *up_, P114 y_1027, P171 ix_1028, P137 *lo_1029, P137 *hi_1030);
static void f_task_statement_gen_1033(struct f_greenc_1fr *up_, P171 s_1032);
static P171 f_root_name_1035(struct f_greenc_1fr *up_, P171 e_1034);
static void f_check_pure_target_1038(struct f_greenc_1fr *up_, P171 target_1036, rt_int line_1037);
static int f_assigns_nonlocal_1041(struct f_greenc_1fr *up_, P171 d_1039, rt_gstr name_1040);
static int f_declares_1044(struct f_greenc_1fr *up_, P171 d_1042, rt_gstr name_1043);
static int f_scan_handlers_1048(struct f_greenc_1fr *up_, P171 h_1045, P171 d_1046, rt_gstr name_1047);
static int f_scan_assigns_1052(struct f_greenc_1fr *up_, P171 stmts_1049, P171 d_1050, rt_gstr name_1051);
static void f_check_call_rules_1055(struct f_greenc_1fr *up_, P171 e_1053, P114 y_1054);
static void f_generic_p_1057(struct f_greenc_1fr *up_, P171 *res_1056);
static void f_instantiation_1060(struct f_greenc_1fr *up_, P171 x_1058, P171 *res_1059);
static void f_generic_decl_1062(struct f_greenc_1fr *up_, P171 e_1061);
static int f_is_generic_name_1064(struct f_greenc_1fr *up_, rt_gstr n_1063);
static void f_attach_generic_body_1066(struct f_greenc_1fr *up_, P171 e_1065);
static void f_restore_generic_context_1069(struct f_greenc_1fr *up_, P171 body_node_1067, rt_int line_1068);
static P171 f_gactual_1073(struct f_greenc_1fr *up_, P171 args_1070, rt_int nth_1071, rt_gstr name_1072);
static void f_copy_node_1077(struct f_greenc_1fr *up_, P171 n_1074, P137 name_1075, P171 *r_1076);
static void f_instantiate_1079(struct f_greenc_1fr *up_, P171 e_1078);
static void f_predef_type_1084(struct f_greenc_1fr *up_, rt_gstr name_1080, P119 t_1081, rt_gstr lo_1082, rt_gstr hi_1083);
static void f_predef_const_1088(struct f_greenc_1fr *up_, rt_gstr name_1085, P119 t_1086, rt_gstr code_text_1087);
static void f_predef_exc_1090(struct f_greenc_1fr *up_, rt_gstr name_1089);
static void f_predef_lit_1094(struct f_greenc_1fr *up_, rt_gstr name_1091, P119 t_1092, rt_int v_1093);
static void f_predefine_1095(struct f_greenc_1fr *up_);
static void f_translate_1097(struct f_greenc_1fr *up_, P171 u_1096);
static void f_print_program_1098(struct f_greenc_1fr *up_);
static void f_greenc_1(void);
static int ex_compile_error_105;
static P137 f_mk_205(struct f_greenc_1fr *up_, rt_gstr s_204) {
  struct f_mk_205fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_204 = cp_rt_gstr(s_204);
F->r_1100.lo = ((rt_int)1LL); F->r_1100.hi = ({ rt_gstr at1099 = F->s_204; at1099.hi >= at1099.lo ? at1099.hi - at1099.lo + 1 : (rt_int)0; });
F->r_1100.lo2 = 1; F->r_1100.hi2 = 1;
F->r_1100.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->r_1100));
as_rt_gstr(&F->r_1100, F->s_204);
F->result_ = ({ rt_gstr *cell1101 = rt_alloc(sizeof(rt_gstr)); *cell1101 = cp_rt_gstr(F->r_1100); (P137)cell1101; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_new_name_208(struct f_greenc_1fr *up_, rt_gstr base_206, P137 *res_207) {
  struct f_new_name_208fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_206 = cp_rt_gstr(base_206);
F->res_207 = res_207;
F->up->serial_122 = rt_add(F->up->serial_122, ((rt_int)1LL));
(*F->res_207) = ({ rt_gstr *cell1102 = rt_alloc(sizeof(rt_gstr)); *cell1102 = cp_rt_gstr(cat_rt_gstr(F->base_206, rt_g_s2g(rt_str_of_int(F->up->serial_122)))); (P137)cell1102; });
goto ret_;
ret_:

  return;
}

static int f_is_letter_210(struct f_greenc_1fr *up_, int c_209) {
  struct f_is_letter_210fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_209 = c_209;
F->result_ = (((F->c_209 >= 65) && (F->c_209 <= 90)) || ((F->c_209 >= 97) && (F->c_209 <= 122)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_digit_212(struct f_greenc_1fr *up_, int c_211) {
  struct f_is_digit_212fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_211 = c_211;
F->result_ = ((F->c_211 >= 48) && (F->c_211 <= 57));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_upper_214(struct f_greenc_1fr *up_, int c_213) {
  struct f_upper_214fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_213 = c_213;
if (((F->c_213 >= 97) && (F->c_213 <= 122))) {
F->result_ = rt_range((rt_sub(((rt_int)(F->c_213) + 1), ((rt_int)32LL)) - 1), 0, 127);
goto ret_;
}
F->result_ = F->c_213;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_lower_s_216(struct f_greenc_1fr *up_, rt_gstr s_215) {
  struct f_lower_s_216fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_215 = cp_rt_gstr(s_215);
F->r_1103 = cp_rt_gstr(F->s_215);
{ rt_int lo1107 = ((rt_int)1LL), hi1108 = ({ rt_gstr at1105 = F->s_215; at1105.hi >= at1105.lo ? at1105.hi - at1105.lo + 1 : (rt_int)0; });
for (rt_int it1109 = lo1107; it1109 <= hi1108; it1109++) {
F->i_1106 = it1109;
if (((({ rt_gstr ix1110 = F->r_1103; ix1110.p[rt_index(F->i_1106, ix1110.lo, ix1110.hi) - ix1110.lo]; }) >= 65) && (({ rt_gstr ix1111 = F->r_1103; ix1111.p[rt_index(F->i_1106, ix1111.lo, ix1111.hi) - ix1111.lo]; }) <= 90))) {
(*({ rt_gstr *ix1112 = &(F->r_1103); &ix1112->p[rt_index(F->i_1106, ix1112->lo, ix1112->hi) - ix1112->lo]; })) = rt_range((rt_add(((rt_int)(({ rt_gstr ix1113 = F->r_1103; ix1113.p[rt_index(F->i_1106, ix1113.lo, ix1113.hi) - ix1113.lo]; })) + 1), ((rt_int)32LL)) - 1), 0, 127);
}
}
}
L_end_1104: ;
F->result_ = F->r_1103;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_upper_s_218(struct f_greenc_1fr *up_, rt_gstr s_217) {
  struct f_upper_s_218fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_217 = cp_rt_gstr(s_217);
F->r_1114 = cp_rt_gstr(F->s_217);
{ rt_int lo1118 = ((rt_int)1LL), hi1119 = ({ rt_gstr at1116 = F->s_217; at1116.hi >= at1116.lo ? at1116.hi - at1116.lo + 1 : (rt_int)0; });
for (rt_int it1120 = lo1118; it1120 <= hi1119; it1120++) {
F->i_1117 = it1120;
(*({ rt_gstr *ix1121 = &(F->r_1114); &ix1121->p[rt_index(F->i_1117, ix1121->lo, ix1121->hi) - ix1121->lo]; })) = f_upper_214(F->up, ({ rt_gstr ix1123 = F->r_1114; ix1123.p[rt_index(F->i_1117, ix1123.lo, ix1123.hi) - ix1123.lo]; }));
}
}
L_end_1115: ;
F->result_ = F->r_1114;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_operator_220(struct f_greenc_1fr *up_, rt_gstr s_219) {
  struct f_is_operator_220fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_219 = cp_rt_gstr(s_219);
F->result_ = (((((((((((((((eq_rt_gstr(F->s_219, rt_g_lit("+", 1)) || eq_rt_gstr(F->s_219, rt_g_lit("-", 1))) || eq_rt_gstr(F->s_219, rt_g_lit("*", 1))) || eq_rt_gstr(F->s_219, rt_g_lit("/", 1))) || eq_rt_gstr(F->s_219, rt_g_lit("**", 2))) || eq_rt_gstr(F->s_219, rt_g_lit("&", 1))) || eq_rt_gstr(F->s_219, rt_g_lit("=", 1))) || eq_rt_gstr(F->s_219, rt_g_lit("<", 1))) || eq_rt_gstr(F->s_219, rt_g_lit("<=", 2))) || eq_rt_gstr(F->s_219, rt_g_lit(">", 1))) || eq_rt_gstr(F->s_219, rt_g_lit(">=", 2))) || eq_rt_gstr(F->s_219, rt_g_lit("MOD", 3))) || eq_rt_gstr(F->s_219, rt_g_lit("AND", 3))) || eq_rt_gstr(F->s_219, rt_g_lit("OR", 2))) || eq_rt_gstr(F->s_219, rt_g_lit("XOR", 3))) || eq_rt_gstr(F->s_219, rt_g_lit("NOT", 3)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_c_field_222(struct f_greenc_1fr *up_, rt_gstr s_221) {
  struct f_c_field_222fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_221 = cp_rt_gstr(s_221);
F->result_ = cat_rt_gstr(f_lower_s_216(F->up, F->s_221), one_rt_gstr(95));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_q_223(struct f_greenc_1fr *up_) {
  struct f_q_223fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = rt_g_lit("\"", 1);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_fail_226(struct f_greenc_1fr *up_, rt_int line_224, rt_gstr msg_225) {
  struct f_fail_226fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_224 = line_224;
F->msg_225 = cp_rt_gstr(msg_225);
if ((F->up->trial_152 == ((rt_int)0LL))) {
rt_g_put(rt_g_g2s(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("greenc: line ", 13), rt_g_s2g(rt_str_of_int(F->line_224))), rt_g_lit(": ", 2)), F->msg_225)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
}
rt_raise(ex_compile_error_105);
ret_:

  return;
}

static P123 f_new_buffer_227(struct f_greenc_1fr *up_) {
  struct f_new_buffer_227fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ({ R124 *cell1124 = rt_alloc(sizeof(R124)); *cell1124 = cp_R124(({ R124 ag1125; ag1125.head_ = NULL; ag1125.tail_ = NULL; ag1125; })); (P123)cell1124; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_put_to_230(struct f_greenc_1fr *up_, P123 b_228, rt_gstr s_229) {
  struct f_put_to_230fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_228 = b_228;
F->s_229 = cp_rt_gstr(s_229);
F->l_1126 = NULL;
F->l_1126 = ({ R149 *cell1127 = rt_alloc(sizeof(R149)); *cell1127 = cp_R149(({ R149 ag1128; ag1128.s_ = NULL; ag1128.next_ = NULL; ag1128; })); (P148)cell1127; });
(*(P148)rt_nil_check(F->l_1126)).s_ = f_mk_205(F->up, F->s_229);
if (((*(P123)rt_nil_check(F->b_228)).tail_ == NULL)) {
(*(P123)rt_nil_check(F->b_228)).head_ = F->l_1126;
} else {
(*(P148)rt_nil_check((*(P123)rt_nil_check(F->b_228)).tail_)).next_ = F->l_1126;
}
(*(P123)rt_nil_check(F->b_228)).tail_ = F->l_1126;
ret_:

  return;
}

static void f_emit_232(struct f_greenc_1fr *up_, rt_gstr s_231) {
  struct f_emit_232fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_231 = cp_rt_gstr(s_231);
f_put_to_230(F->up, F->up->code_133, F->s_231);
ret_:

  return;
}

static void f_print_buffer_234(struct f_greenc_1fr *up_, P123 b_233) {
  struct f_print_buffer_234fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_233 = b_233;
F->l_1129 = NULL;
F->l_1129 = (*(P123)rt_nil_check(F->b_233)).head_;
while ((F->l_1129 != NULL)) {
rt_g_put(rt_g_g2s((*(P137)rt_nil_check((*(P148)rt_nil_check(F->l_1129)).s_))));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
F->l_1129 = (*(P148)rt_nil_check(F->l_1129)).next_;
}
L_end_1130: ;
ret_:

  return;
}

static void f_splice_237(struct f_greenc_1fr *up_, P123 a_235, P123 b_236) {
  struct f_splice_237fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_235 = a_235;
F->b_236 = b_236;
if (((*(P123)rt_nil_check(F->b_236)).head_ == NULL)) {
goto ret_;
}
if (((*(P123)rt_nil_check(F->a_235)).tail_ == NULL)) {
(*(P123)rt_nil_check(F->a_235)).head_ = (*(P123)rt_nil_check(F->b_236)).head_;
} else {
(*(P148)rt_nil_check((*(P123)rt_nil_check(F->a_235)).tail_)).next_ = (*(P123)rt_nil_check(F->b_236)).head_;
}
(*(P123)rt_nil_check(F->a_235)).tail_ = (*(P123)rt_nil_check(F->b_236)).tail_;
(*(P123)rt_nil_check(F->b_236)).head_ = NULL;
(*(P123)rt_nil_check(F->b_236)).tail_ = NULL;
ret_:

  return;
}

static int f_is_reserved_239(struct f_greenc_1fr *up_, rt_gstr w_238) {
  struct f_is_reserved_239fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_238 = cp_rt_gstr(w_238);
{ rt_int sel1132 = ({ rt_gstr at1131 = F->w_238; at1131.hi >= at1131.lo ? at1131.hi - at1131.lo + 1 : (rt_int)0; });
if (0 || sel1132 == ((rt_int)2LL)) {
F->result_ = ((((((eq_rt_gstr(F->w_238, rt_g_lit("AT", 2)) || eq_rt_gstr(F->w_238, rt_g_lit("DO", 2))) || eq_rt_gstr(F->w_238, rt_g_lit("IF", 2))) || eq_rt_gstr(F->w_238, rt_g_lit("IN", 2))) || eq_rt_gstr(F->w_238, rt_g_lit("IS", 2))) || eq_rt_gstr(F->w_238, rt_g_lit("OF", 2))) || eq_rt_gstr(F->w_238, rt_g_lit("OR", 2)));
goto ret_;
} else if (0 || sel1132 == ((rt_int)3LL)) {
F->result_ = (((((((((eq_rt_gstr(F->w_238, rt_g_lit("ALL", 3)) || eq_rt_gstr(F->w_238, rt_g_lit("AND", 3))) || eq_rt_gstr(F->w_238, rt_g_lit("END", 3))) || eq_rt_gstr(F->w_238, rt_g_lit("FOR", 3))) || eq_rt_gstr(F->w_238, rt_g_lit("MOD", 3))) || eq_rt_gstr(F->w_238, rt_g_lit("NEW", 3))) || eq_rt_gstr(F->w_238, rt_g_lit("NOT", 3))) || eq_rt_gstr(F->w_238, rt_g_lit("OUT", 3))) || eq_rt_gstr(F->w_238, rt_g_lit("USE", 3))) || eq_rt_gstr(F->w_238, rt_g_lit("XOR", 3)));
goto ret_;
} else if (0 || sel1132 == ((rt_int)4LL)) {
F->result_ = ((((((((((eq_rt_gstr(F->w_238, rt_g_lit("BODY", 4)) || eq_rt_gstr(F->w_238, rt_g_lit("CASE", 4))) || eq_rt_gstr(F->w_238, rt_g_lit("ELSE", 4))) || eq_rt_gstr(F->w_238, rt_g_lit("EXIT", 4))) || eq_rt_gstr(F->w_238, rt_g_lit("GOTO", 4))) || eq_rt_gstr(F->w_238, rt_g_lit("LOOP", 4))) || eq_rt_gstr(F->w_238, rt_g_lit("NULL", 4))) || eq_rt_gstr(F->w_238, rt_g_lit("TASK", 4))) || eq_rt_gstr(F->w_238, rt_g_lit("THEN", 4))) || eq_rt_gstr(F->w_238, rt_g_lit("TYPE", 4))) || eq_rt_gstr(F->w_238, rt_g_lit("WHEN", 4)));
goto ret_;
} else if (0 || sel1132 == ((rt_int)5LL)) {
F->result_ = (((((((((eq_rt_gstr(F->w_238, rt_g_lit("ABORT", 5)) || eq_rt_gstr(F->w_238, rt_g_lit("ARRAY", 5))) || eq_rt_gstr(F->w_238, rt_g_lit("BEGIN", 5))) || eq_rt_gstr(F->w_238, rt_g_lit("DELAY", 5))) || eq_rt_gstr(F->w_238, rt_g_lit("DELTA", 5))) || eq_rt_gstr(F->w_238, rt_g_lit("ELSIF", 5))) || eq_rt_gstr(F->w_238, rt_g_lit("ENTRY", 5))) || eq_rt_gstr(F->w_238, rt_g_lit("RAISE", 5))) || eq_rt_gstr(F->w_238, rt_g_lit("RANGE", 5))) || eq_rt_gstr(F->w_238, rt_g_lit("WHILE", 5)));
goto ret_;
} else if (0 || sel1132 == ((rt_int)6LL)) {
F->result_ = ((((((((eq_rt_gstr(F->w_238, rt_g_lit("ACCEPT", 6)) || eq_rt_gstr(F->w_238, rt_g_lit("ACCESS", 6))) || eq_rt_gstr(F->w_238, rt_g_lit("ASSERT", 6))) || eq_rt_gstr(F->w_238, rt_g_lit("DIGITS", 6))) || eq_rt_gstr(F->w_238, rt_g_lit("OTHERS", 6))) || eq_rt_gstr(F->w_238, rt_g_lit("PRAGMA", 6))) || eq_rt_gstr(F->w_238, rt_g_lit("RECORD", 6))) || eq_rt_gstr(F->w_238, rt_g_lit("RETURN", 6))) || eq_rt_gstr(F->w_238, rt_g_lit("SELECT", 6)));
goto ret_;
} else if (0 || sel1132 == ((rt_int)7LL)) {
F->result_ = (((((((eq_rt_gstr(F->w_238, rt_g_lit("DECLARE", 7)) || eq_rt_gstr(F->w_238, rt_g_lit("GENERIC", 7))) || eq_rt_gstr(F->w_238, rt_g_lit("PACKAGE", 7))) || eq_rt_gstr(F->w_238, rt_g_lit("PACKING", 7))) || eq_rt_gstr(F->w_238, rt_g_lit("PRIVATE", 7))) || eq_rt_gstr(F->w_238, rt_g_lit("RENAMES", 7))) || eq_rt_gstr(F->w_238, rt_g_lit("REVERSE", 7))) || eq_rt_gstr(F->w_238, rt_g_lit("SUBTYPE", 7)));
goto ret_;
} else if (0 || sel1132 == ((rt_int)8LL)) {
F->result_ = (((eq_rt_gstr(F->w_238, rt_g_lit("CONSTANT", 8)) || eq_rt_gstr(F->w_238, rt_g_lit("FUNCTION", 8))) || eq_rt_gstr(F->w_238, rt_g_lit("INITIATE", 8))) || eq_rt_gstr(F->w_238, rt_g_lit("SEPARATE", 8)));
goto ret_;
} else if (0 || sel1132 == ((rt_int)9LL)) {
F->result_ = (eq_rt_gstr(F->w_238, rt_g_lit("EXCEPTION", 9)) || eq_rt_gstr(F->w_238, rt_g_lit("PROCEDURE", 9)));
goto ret_;
} else if (0 || sel1132 == ((rt_int)10LL)) {
F->result_ = eq_rt_gstr(F->w_238, rt_g_lit("RESTRICTED", 10));
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

static void f_add_token_243(struct f_greenc_1fr *up_, rt_int kind_240, rt_gstr s_241, rt_int ival_242) {
  struct f_add_token_243fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_240 = kind_240;
F->s_241 = cp_rt_gstr(s_241);
F->ival_242 = ival_242;
F->up->ntoks_110 = rt_add(F->up->ntoks_110, ((rt_int)1LL));
(*({ A106 *ix1133 = &(F->up->toks_109); &ix1133->p[rt_index(F->up->ntoks_110, ix1133->lo, ix1133->hi) - ix1133->lo]; })) = ({ R108 *cell1134 = rt_alloc(sizeof(R108)); *cell1134 = cp_R108(({ R108 ag1135; ag1135.kind_ = F->kind_240; ag1135.line_ = F->up->src_line_112; ag1135.ival_ = F->ival_242; ag1135.s_ = NULL; ag1135; })); (P107)cell1134; });
(*(P107)rt_nil_check((*({ A106 *ix1136 = &(F->up->toks_109); &ix1136->p[rt_index(F->up->ntoks_110, ix1136->lo, ix1136->hi) - ix1136->lo]; })))).s_ = f_mk_205(F->up, F->s_241);
ret_:

  return;
}

static rt_int f_digit_value_245(struct f_greenc_1fr *up_, int c_244) {
  struct f_digit_value_245fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_244 = c_244;
if (f_is_digit_212(F->up, F->c_244)) {
F->result_ = rt_sub(((rt_int)(F->c_244) + 1), ((rt_int)(48) + 1));
goto ret_;
}
F->result_ = rt_add(rt_sub(((rt_int)(f_upper_214(F->up, F->c_244)) + 1), ((rt_int)(65) + 1)), ((rt_int)10LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_digit_in_248(struct f_greenc_1fr *up_, int c_246, rt_int base_247) {
  struct f_digit_in_248fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_246 = c_246;
F->base_247 = base_247;
if (f_is_digit_212(F->up, F->c_246)) {
F->d_1137 = rt_sub(((rt_int)(F->c_246) + 1), ((rt_int)(48) + 1));
} else if (((f_upper_214(F->up, F->c_246) >= 65) && (f_upper_214(F->up, F->c_246) <= 70))) {
F->d_1137 = rt_add(rt_sub(((rt_int)(f_upper_214(F->up, F->c_246)) + 1), ((rt_int)(65) + 1)), ((rt_int)10LL));
} else {
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
}
if ((F->d_1137 >= F->base_247)) {
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
}
F->result_ = F->d_1137;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_accumulate_252(struct f_greenc_1fr *up_, rt_int *v_249, rt_int base_250, rt_int d_251) {
  struct f_accumulate_252fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->v_249 = v_249;
F->base_250 = base_250;
F->d_251 = d_251;
if (((*F->v_249) > rt_quot(rt_sub(INT64_MAX, F->d_251), F->base_250))) {
f_fail_226(F->up, F->up->src_line_112, rt_g_lit("this integer literal is too large (RM79 2.4)", 44));
}
(*F->v_249) = rt_add(rt_mul((*F->v_249), F->base_250), F->d_251);
ret_:

  return;
}

static void f_lex_line_254(struct f_greenc_1fr *up_, rt_gstr line_253) {
  struct f_lex_line_254fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_253 = cp_rt_gstr(line_253);
F->i_1138 = ((rt_int)1LL);
F->j_1139 = ((rt_int)0LL);
F->n_1140 = ({ rt_gstr at1141 = F->line_253; at1141.hi >= at1141.lo ? at1141.hi - at1141.lo + 1 : (rt_int)0; });
F->buf_1146.lo = ((rt_int)1LL); F->buf_1146.hi = ((rt_int)1000LL);
F->buf_1146.lo2 = 1; F->buf_1146.hi2 = 1;
F->buf_1146.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->buf_1146));
while ((F->i_1138 <= F->n_1140)) {
F->c_1142 = rt_range(({ rt_gstr ix1149 = F->line_253; ix1149.p[rt_index(F->i_1138, ix1149.lo, ix1149.hi) - ix1149.lo]; }), 0, 127);
if (((((F->c_1142 == 32) || (F->c_1142 == 9)) || (F->c_1142 == 13)) || (F->c_1142 == 12))) {
F->i_1138 = rt_add(F->i_1138, ((rt_int)1LL));
} else if ((((F->c_1142 == 45) && (F->i_1138 < F->n_1140)) && (({ rt_gstr ix1150 = F->line_253; ix1150.p[rt_index(rt_add(F->i_1138, ((rt_int)1LL)), ix1150.lo, ix1150.hi) - ix1150.lo]; }) == 45))) {
F->i_1138 = rt_add(F->n_1140, ((rt_int)1LL));
} else if (f_is_letter_210(F->up, F->c_1142)) {
F->j_1139 = F->i_1138;
F->bl_1147 = ((rt_int)0LL);
while (((F->j_1139 <= F->n_1140) && ((f_is_letter_210(F->up, ({ rt_gstr ix1153 = F->line_253; ix1153.p[rt_index(F->j_1139, ix1153.lo, ix1153.hi) - ix1153.lo]; })) || f_is_digit_212(F->up, ({ rt_gstr ix1155 = F->line_253; ix1155.p[rt_index(F->j_1139, ix1155.lo, ix1155.hi) - ix1155.lo]; }))) || (({ rt_gstr ix1156 = F->line_253; ix1156.p[rt_index(F->j_1139, ix1156.lo, ix1156.hi) - ix1156.lo]; }) == 95)))) {
if (((({ rt_gstr ix1157 = F->line_253; ix1157.p[rt_index(F->j_1139, ix1157.lo, ix1157.hi) - ix1157.lo]; }) == 95) && ((F->j_1139 == F->n_1140) || (!(f_is_letter_210(F->up, ({ rt_gstr ix1159 = F->line_253; ix1159.p[rt_index(rt_add(F->j_1139, ((rt_int)1LL)), ix1159.lo, ix1159.hi) - ix1159.lo]; })) || f_is_digit_212(F->up, ({ rt_gstr ix1161 = F->line_253; ix1161.p[rt_index(rt_add(F->j_1139, ((rt_int)1LL)), ix1161.lo, ix1161.hi) - ix1161.lo]; }))))))) {
f_fail_226(F->up, F->up->src_line_112, rt_g_lit("an underscore in an identifier stands between two letters or digits (RM79 2.3)", 78));
}
F->bl_1147 = rt_add(F->bl_1147, ((rt_int)1LL));
(*({ rt_gstr *ix1162 = &(F->buf_1146); &ix1162->p[rt_index(F->bl_1147, ix1162->lo, ix1162->hi) - ix1162->lo]; })) = f_upper_214(F->up, ({ rt_gstr ix1164 = F->line_253; ix1164.p[rt_index(F->j_1139, ix1164.lo, ix1164.hi) - ix1164.lo]; }));
F->j_1139 = rt_add(F->j_1139, ((rt_int)1LL));
}
L_end_1151: ;
if (f_is_reserved_239(F->up, ({ rt_gstr sl1166 = F->buf_1146; rt_int l_ = ((rt_int)1LL), h_ = F->bl_1147; if (l_ <= h_) { rt_index(l_, sl1166.lo, sl1166.hi); rt_index(h_, sl1166.lo, sl1166.hi); } sl1166.p += l_ - sl1166.lo; sl1166.lo = l_; sl1166.hi = h_; sl1166; }))) {
f_add_token_243(F->up, ((rt_int)2LL), ({ rt_gstr sl1168 = F->buf_1146; rt_int l_ = ((rt_int)1LL), h_ = F->bl_1147; if (l_ <= h_) { rt_index(l_, sl1168.lo, sl1168.hi); rt_index(h_, sl1168.lo, sl1168.hi); } sl1168.p += l_ - sl1168.lo; sl1168.lo = l_; sl1168.hi = h_; sl1168; }), ((rt_int)0LL));
} else {
f_add_token_243(F->up, ((rt_int)1LL), ({ rt_gstr sl1170 = F->buf_1146; rt_int l_ = ((rt_int)1LL), h_ = F->bl_1147; if (l_ <= h_) { rt_index(l_, sl1170.lo, sl1170.hi); rt_index(h_, sl1170.lo, sl1170.hi); } sl1170.p += l_ - sl1170.lo; sl1170.lo = l_; sl1170.hi = h_; sl1170; }), ((rt_int)0LL));
}
F->i_1138 = F->j_1139;
} else if (f_is_digit_212(F->up, F->c_1142)) {
F->j_1139 = F->i_1138;
F->v_1144 = ((rt_int)0LL);
F->bl_1147 = ((rt_int)0LL);
while (((F->j_1139 <= F->n_1140) && (f_is_digit_212(F->up, ({ rt_gstr ix1173 = F->line_253; ix1173.p[rt_index(F->j_1139, ix1173.lo, ix1173.hi) - ix1173.lo]; })) || (({ rt_gstr ix1174 = F->line_253; ix1174.p[rt_index(F->j_1139, ix1174.lo, ix1174.hi) - ix1174.lo]; }) == 95)))) {
if ((({ rt_gstr ix1175 = F->line_253; ix1175.p[rt_index(F->j_1139, ix1175.lo, ix1175.hi) - ix1175.lo]; }) == 95)) {
if (((F->j_1139 == F->n_1140) || (!f_is_digit_212(F->up, ({ rt_gstr ix1177 = F->line_253; ix1177.p[rt_index(rt_add(F->j_1139, ((rt_int)1LL)), ix1177.lo, ix1177.hi) - ix1177.lo]; }))))) {
f_fail_226(F->up, F->up->src_line_112, rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
} else {
f_accumulate_252(F->up, &F->v_1144, ((rt_int)10LL), rt_sub(((rt_int)(({ rt_gstr ix1179 = F->line_253; ix1179.p[rt_index(F->j_1139, ix1179.lo, ix1179.hi) - ix1179.lo]; })) + 1), ((rt_int)(48) + 1)));
F->bl_1147 = rt_add(F->bl_1147, ((rt_int)1LL));
(*({ rt_gstr *ix1180 = &(F->buf_1146); &ix1180->p[rt_index(F->bl_1147, ix1180->lo, ix1180->hi) - ix1180->lo]; })) = ({ rt_gstr ix1181 = F->line_253; ix1181.p[rt_index(F->j_1139, ix1181.lo, ix1181.hi) - ix1181.lo]; });
}
F->j_1139 = rt_add(F->j_1139, ((rt_int)1LL));
}
L_end_1171: ;
if (((F->j_1139 < F->n_1140) && ((({ rt_gstr ix1182 = F->line_253; ix1182.p[rt_index(F->j_1139, ix1182.lo, ix1182.hi) - ix1182.lo]; }) == 35) || ((({ rt_gstr ix1183 = F->line_253; ix1183.p[rt_index(F->j_1139, ix1183.lo, ix1183.hi) - ix1183.lo]; }) == 58) && (f_is_digit_212(F->up, ({ rt_gstr ix1185 = F->line_253; ix1185.p[rt_index(rt_add(F->j_1139, ((rt_int)1LL)), ix1185.lo, ix1185.hi) - ix1185.lo]; })) || f_is_letter_210(F->up, ({ rt_gstr ix1187 = F->line_253; ix1187.p[rt_index(rt_add(F->j_1139, ((rt_int)1LL)), ix1187.lo, ix1187.hi) - ix1187.lo]; }))))))) {
{
F->base_1189 = F->v_1144;
if (((F->base_1189 < ((rt_int)2LL)) || (F->base_1189 > ((rt_int)16LL)))) {
f_fail_226(F->up, F->up->src_line_112, rt_g_lit("the base of a number is between 2 and 16 (RM79 2.4)", 51));
}
F->v_1144 = ((rt_int)0LL);
F->j_1139 = rt_add(F->j_1139, ((rt_int)1LL));
if (((F->j_1139 > F->n_1140) || (f_digit_in_248(F->up, ({ rt_gstr ix1191 = F->line_253; ix1191.p[rt_index(F->j_1139, ix1191.lo, ix1191.hi) - ix1191.lo]; }), ((rt_int)16LL)) < ((rt_int)0LL)))) {
f_fail_226(F->up, F->up->src_line_112, rt_g_lit("a based number needs digits (RM79 2.4)", 38));
}
while (((F->j_1139 <= F->n_1140) && ((f_is_letter_210(F->up, ({ rt_gstr ix1194 = F->line_253; ix1194.p[rt_index(F->j_1139, ix1194.lo, ix1194.hi) - ix1194.lo]; })) || f_is_digit_212(F->up, ({ rt_gstr ix1196 = F->line_253; ix1196.p[rt_index(F->j_1139, ix1196.lo, ix1196.hi) - ix1196.lo]; }))) || (({ rt_gstr ix1197 = F->line_253; ix1197.p[rt_index(F->j_1139, ix1197.lo, ix1197.hi) - ix1197.lo]; }) == 95)))) {
if ((({ rt_gstr ix1198 = F->line_253; ix1198.p[rt_index(F->j_1139, ix1198.lo, ix1198.hi) - ix1198.lo]; }) == 95)) {
if (((F->j_1139 == F->n_1140) || (f_digit_in_248(F->up, ({ rt_gstr ix1200 = F->line_253; ix1200.p[rt_index(rt_add(F->j_1139, ((rt_int)1LL)), ix1200.lo, ix1200.hi) - ix1200.lo]; }), ((rt_int)16LL)) < ((rt_int)0LL)))) {
f_fail_226(F->up, F->up->src_line_112, rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
} else {
F->d_1145 = f_digit_in_248(F->up, ({ rt_gstr ix1202 = F->line_253; ix1202.p[rt_index(F->j_1139, ix1202.lo, ix1202.hi) - ix1202.lo]; }), F->base_1189);
if ((F->d_1145 < ((rt_int)0LL))) {
f_fail_226(F->up, F->up->src_line_112, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("digit ", 6), one_rt_gstr(({ rt_gstr ix1204 = F->line_253; ix1204.p[rt_index(F->j_1139, ix1204.lo, ix1204.hi) - ix1204.lo]; }))), rt_g_lit(" is not valid in base ", 22)), rt_g_s2g(rt_str_of_int(F->base_1189))), rt_g_lit(" (RM79 2.4)", 11)));
}
f_accumulate_252(F->up, &F->v_1144, F->base_1189, F->d_1145);
}
F->j_1139 = rt_add(F->j_1139, ((rt_int)1LL));
}
L_end_1192: ;

}
L_end_1188: ;
f_add_token_243(F->up, ((rt_int)4LL), rt_g_s2g(rt_str_of_int(F->v_1144)), F->v_1144);
} else if (((F->j_1139 < F->n_1140) && ((({ rt_gstr ix1205 = F->line_253; ix1205.p[rt_index(F->j_1139, ix1205.lo, ix1205.hi) - ix1205.lo]; }) == 46) && f_is_digit_212(F->up, ({ rt_gstr ix1207 = F->line_253; ix1207.p[rt_index(rt_add(F->j_1139, ((rt_int)1LL)), ix1207.lo, ix1207.hi) - ix1207.lo]; }))))) {
F->bl_1147 = rt_add(F->bl_1147, ((rt_int)1LL));
(*({ rt_gstr *ix1208 = &(F->buf_1146); &ix1208->p[rt_index(F->bl_1147, ix1208->lo, ix1208->hi) - ix1208->lo]; })) = 46;
F->j_1139 = rt_add(F->j_1139, ((rt_int)1LL));
while (((F->j_1139 <= F->n_1140) && (f_is_digit_212(F->up, ({ rt_gstr ix1211 = F->line_253; ix1211.p[rt_index(F->j_1139, ix1211.lo, ix1211.hi) - ix1211.lo]; })) || (({ rt_gstr ix1212 = F->line_253; ix1212.p[rt_index(F->j_1139, ix1212.lo, ix1212.hi) - ix1212.lo]; }) == 95)))) {
if ((({ rt_gstr ix1213 = F->line_253; ix1213.p[rt_index(F->j_1139, ix1213.lo, ix1213.hi) - ix1213.lo]; }) != 95)) {
F->bl_1147 = rt_add(F->bl_1147, ((rt_int)1LL));
(*({ rt_gstr *ix1214 = &(F->buf_1146); &ix1214->p[rt_index(F->bl_1147, ix1214->lo, ix1214->hi) - ix1214->lo]; })) = ({ rt_gstr ix1215 = F->line_253; ix1215.p[rt_index(F->j_1139, ix1215.lo, ix1215.hi) - ix1215.lo]; });
} else if (((F->j_1139 == F->n_1140) || (!f_is_digit_212(F->up, ({ rt_gstr ix1217 = F->line_253; ix1217.p[rt_index(rt_add(F->j_1139, ((rt_int)1LL)), ix1217.lo, ix1217.hi) - ix1217.lo]; }))))) {
f_fail_226(F->up, F->up->src_line_112, rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
F->j_1139 = rt_add(F->j_1139, ((rt_int)1LL));
}
L_end_1209: ;
if (((F->j_1139 < F->n_1140) && (((({ rt_gstr ix1218 = F->line_253; ix1218.p[rt_index(F->j_1139, ix1218.lo, ix1218.hi) - ix1218.lo]; }) == 69) || (({ rt_gstr ix1219 = F->line_253; ix1219.p[rt_index(F->j_1139, ix1219.lo, ix1219.hi) - ix1219.lo]; }) == 101)) && (f_is_digit_212(F->up, ({ rt_gstr ix1221 = F->line_253; ix1221.p[rt_index(rt_add(F->j_1139, ((rt_int)1LL)), ix1221.lo, ix1221.hi) - ix1221.lo]; })) || ((rt_add(F->j_1139, ((rt_int)1LL)) < F->n_1140) && (((({ rt_gstr ix1222 = F->line_253; ix1222.p[rt_index(rt_add(F->j_1139, ((rt_int)1LL)), ix1222.lo, ix1222.hi) - ix1222.lo]; }) == 43) || (({ rt_gstr ix1223 = F->line_253; ix1223.p[rt_index(rt_add(F->j_1139, ((rt_int)1LL)), ix1223.lo, ix1223.hi) - ix1223.lo]; }) == 45)) && f_is_digit_212(F->up, ({ rt_gstr ix1225 = F->line_253; ix1225.p[rt_index(rt_add(F->j_1139, ((rt_int)2LL)), ix1225.lo, ix1225.hi) - ix1225.lo]; })))))))) {
f_exponent_259(F->up, F->line_253, &F->j_1139, &F->buf_1146, &F->bl_1147);
}
f_add_token_243(F->up, ((rt_int)5LL), ({ rt_gstr sl1227 = F->buf_1146; rt_int l_ = ((rt_int)1LL), h_ = F->bl_1147; if (l_ <= h_) { rt_index(l_, sl1227.lo, sl1227.hi); rt_index(h_, sl1227.lo, sl1227.hi); } sl1227.p += l_ - sl1227.lo; sl1227.lo = l_; sl1227.hi = h_; sl1227; }), ((rt_int)0LL));
} else if (((F->j_1139 < F->n_1140) && (((({ rt_gstr ix1228 = F->line_253; ix1228.p[rt_index(F->j_1139, ix1228.lo, ix1228.hi) - ix1228.lo]; }) == 69) || (({ rt_gstr ix1229 = F->line_253; ix1229.p[rt_index(F->j_1139, ix1229.lo, ix1229.hi) - ix1229.lo]; }) == 101)) && (f_is_digit_212(F->up, ({ rt_gstr ix1231 = F->line_253; ix1231.p[rt_index(rt_add(F->j_1139, ((rt_int)1LL)), ix1231.lo, ix1231.hi) - ix1231.lo]; })) || ((rt_add(F->j_1139, ((rt_int)1LL)) < F->n_1140) && (((({ rt_gstr ix1232 = F->line_253; ix1232.p[rt_index(rt_add(F->j_1139, ((rt_int)1LL)), ix1232.lo, ix1232.hi) - ix1232.lo]; }) == 43) || (({ rt_gstr ix1233 = F->line_253; ix1233.p[rt_index(rt_add(F->j_1139, ((rt_int)1LL)), ix1233.lo, ix1233.hi) - ix1233.lo]; }) == 45)) && f_is_digit_212(F->up, ({ rt_gstr ix1235 = F->line_253; ix1235.p[rt_index(rt_add(F->j_1139, ((rt_int)2LL)), ix1235.lo, ix1235.hi) - ix1235.lo]; })))))))) {
f_exponent_259(F->up, F->line_253, &F->j_1139, &F->buf_1146, &F->bl_1147);
f_add_token_243(F->up, ((rt_int)5LL), ({ rt_gstr sl1237 = F->buf_1146; rt_int l_ = ((rt_int)1LL), h_ = F->bl_1147; if (l_ <= h_) { rt_index(l_, sl1237.lo, sl1237.hi); rt_index(h_, sl1237.lo, sl1237.hi); } sl1237.p += l_ - sl1237.lo; sl1237.lo = l_; sl1237.hi = h_; sl1237; }), ((rt_int)0LL));
} else {
f_add_token_243(F->up, ((rt_int)4LL), ({ rt_gstr sl1239 = F->buf_1146; rt_int l_ = ((rt_int)1LL), h_ = F->bl_1147; if (l_ <= h_) { rt_index(l_, sl1239.lo, sl1239.hi); rt_index(h_, sl1239.lo, sl1239.hi); } sl1239.p += l_ - sl1239.lo; sl1239.lo = l_; sl1239.hi = h_; sl1239; }), F->v_1144);
}
F->i_1138 = F->j_1139;
} else if (((F->c_1142 == 34) || (F->c_1142 == 37))) {
F->quote_1143 = rt_range(F->c_1142, 0, 127);
F->j_1139 = rt_add(F->i_1138, ((rt_int)1LL));
F->bl_1147 = ((rt_int)0LL);
for (;;) {
if ((F->j_1139 > F->n_1140)) {
f_fail_226(F->up, F->up->src_line_112, rt_g_lit("unterminated string", 19));
}
if ((({ rt_gstr ix1241 = F->line_253; ix1241.p[rt_index(F->j_1139, ix1241.lo, ix1241.hi) - ix1241.lo]; }) == F->quote_1143)) {
if (((F->j_1139 == F->n_1140) || (({ rt_gstr ix1242 = F->line_253; ix1242.p[rt_index(rt_add(F->j_1139, ((rt_int)1LL)), ix1242.lo, ix1242.hi) - ix1242.lo]; }) != F->quote_1143))) {
goto L_end_1240;
}
F->j_1139 = rt_add(F->j_1139, ((rt_int)1LL));
} else if (((F->quote_1143 == 37) && (({ rt_gstr ix1243 = F->line_253; ix1243.p[rt_index(F->j_1139, ix1243.lo, ix1243.hi) - ix1243.lo]; }) == 34))) {
f_fail_226(F->up, F->up->src_line_112, rt_g_lit("a string bracketed by % cannot contain a quote (RM79 2.1)", 57));
}
F->bl_1147 = rt_add(F->bl_1147, ((rt_int)1LL));
(*({ rt_gstr *ix1244 = &(F->buf_1146); &ix1244->p[rt_index(F->bl_1147, ix1244->lo, ix1244->hi) - ix1244->lo]; })) = ({ rt_gstr ix1245 = F->line_253; ix1245.p[rt_index(F->j_1139, ix1245.lo, ix1245.hi) - ix1245.lo]; });
F->j_1139 = rt_add(F->j_1139, ((rt_int)1LL));
}
L_end_1240: ;
f_add_token_243(F->up, ((rt_int)6LL), ({ rt_gstr sl1247 = F->buf_1146; rt_int l_ = ((rt_int)1LL), h_ = F->bl_1147; if (l_ <= h_) { rt_index(l_, sl1247.lo, sl1247.hi); rt_index(h_, sl1247.lo, sl1247.hi); } sl1247.p += l_ - sl1247.lo; sl1247.lo = l_; sl1247.hi = h_; sl1247; }), ((rt_int)0LL));
F->i_1138 = rt_add(F->j_1139, ((rt_int)1LL));
} else {
{
F->two_1249.lo = ((rt_int)1LL); F->two_1249.hi = ((rt_int)3LL);
F->two_1249.lo2 = 1; F->two_1249.hi2 = 1;
F->two_1249.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->two_1249));
as_rt_gstr(&F->two_1249, rt_g_lit("   ", 3));
(*({ rt_gstr *ix1250 = &(F->two_1249); &ix1250->p[rt_index(((rt_int)1LL), ix1250->lo, ix1250->hi) - ix1250->lo]; })) = F->c_1142;
if ((F->i_1138 < F->n_1140)) {
(*({ rt_gstr *ix1251 = &(F->two_1249); &ix1251->p[rt_index(((rt_int)2LL), ix1251->lo, ix1251->hi) - ix1251->lo]; })) = ({ rt_gstr ix1252 = F->line_253; ix1252.p[rt_index(rt_add(F->i_1138, ((rt_int)1LL)), ix1252.lo, ix1252.hi) - ix1252.lo]; });
}
if ((rt_add(F->i_1138, ((rt_int)1LL)) < F->n_1140)) {
(*({ rt_gstr *ix1253 = &(F->two_1249); &ix1253->p[rt_index(((rt_int)3LL), ix1253->lo, ix1253->hi) - ix1253->lo]; })) = ({ rt_gstr ix1254 = F->line_253; ix1254.p[rt_index(rt_add(F->i_1138, ((rt_int)2LL)), ix1254.lo, ix1254.hi) - ix1254.lo]; });
}
if (eq_rt_gstr(F->two_1249, rt_g_lit(":=:", 3))) {
f_add_token_243(F->up, ((rt_int)3LL), rt_g_lit(":=:", 3), ((rt_int)0LL));
F->i_1138 = rt_add(F->i_1138, ((rt_int)3LL));
} else if ((((((((((eq_rt_gstr(({ rt_gstr sl1255 = F->two_1249; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1255.lo, sl1255.hi); rt_index(h_, sl1255.lo, sl1255.hi); } sl1255.p += l_ - sl1255.lo; sl1255.lo = l_; sl1255.hi = h_; sl1255; }), rt_g_lit(":=", 2)) || eq_rt_gstr(({ rt_gstr sl1256 = F->two_1249; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1256.lo, sl1256.hi); rt_index(h_, sl1256.lo, sl1256.hi); } sl1256.p += l_ - sl1256.lo; sl1256.lo = l_; sl1256.hi = h_; sl1256; }), rt_g_lit("=:", 2))) || eq_rt_gstr(({ rt_gstr sl1257 = F->two_1249; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1257.lo, sl1257.hi); rt_index(h_, sl1257.lo, sl1257.hi); } sl1257.p += l_ - sl1257.lo; sl1257.lo = l_; sl1257.hi = h_; sl1257; }), rt_g_lit("=>", 2))) || eq_rt_gstr(({ rt_gstr sl1258 = F->two_1249; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1258.lo, sl1258.hi); rt_index(h_, sl1258.lo, sl1258.hi); } sl1258.p += l_ - sl1258.lo; sl1258.lo = l_; sl1258.hi = h_; sl1258; }), rt_g_lit("..", 2))) || eq_rt_gstr(({ rt_gstr sl1259 = F->two_1249; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1259.lo, sl1259.hi); rt_index(h_, sl1259.lo, sl1259.hi); } sl1259.p += l_ - sl1259.lo; sl1259.lo = l_; sl1259.hi = h_; sl1259; }), rt_g_lit("**", 2))) || eq_rt_gstr(({ rt_gstr sl1260 = F->two_1249; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1260.lo, sl1260.hi); rt_index(h_, sl1260.lo, sl1260.hi); } sl1260.p += l_ - sl1260.lo; sl1260.lo = l_; sl1260.hi = h_; sl1260; }), rt_g_lit("/=", 2))) || eq_rt_gstr(({ rt_gstr sl1261 = F->two_1249; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1261.lo, sl1261.hi); rt_index(h_, sl1261.lo, sl1261.hi); } sl1261.p += l_ - sl1261.lo; sl1261.lo = l_; sl1261.hi = h_; sl1261; }), rt_g_lit("<=", 2))) || eq_rt_gstr(({ rt_gstr sl1262 = F->two_1249; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1262.lo, sl1262.hi); rt_index(h_, sl1262.lo, sl1262.hi); } sl1262.p += l_ - sl1262.lo; sl1262.lo = l_; sl1262.hi = h_; sl1262; }), rt_g_lit(">=", 2))) || eq_rt_gstr(({ rt_gstr sl1263 = F->two_1249; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1263.lo, sl1263.hi); rt_index(h_, sl1263.lo, sl1263.hi); } sl1263.p += l_ - sl1263.lo; sl1263.lo = l_; sl1263.hi = h_; sl1263; }), rt_g_lit("<<", 2))) || eq_rt_gstr(({ rt_gstr sl1264 = F->two_1249; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1264.lo, sl1264.hi); rt_index(h_, sl1264.lo, sl1264.hi); } sl1264.p += l_ - sl1264.lo; sl1264.lo = l_; sl1264.hi = h_; sl1264; }), rt_g_lit(">>", 2)))) {
f_add_token_243(F->up, ((rt_int)3LL), ({ rt_gstr sl1266 = F->two_1249; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1266.lo, sl1266.hi); rt_index(h_, sl1266.lo, sl1266.hi); } sl1266.p += l_ - sl1266.lo; sl1266.lo = l_; sl1266.hi = h_; sl1266; }), ((rt_int)0LL));
F->i_1138 = rt_add(F->i_1138, ((rt_int)2LL));
} else if ((F->c_1142 == 33)) {
f_add_token_243(F->up, ((rt_int)3LL), rt_g_lit("|", 1), ((rt_int)0LL));
F->i_1138 = rt_add(F->i_1138, ((rt_int)1LL));
} else if (((((((((((((((((F->c_1142 == 38) || (F->c_1142 == 39)) || (F->c_1142 == 40)) || (F->c_1142 == 41)) || (F->c_1142 == 42)) || (F->c_1142 == 43)) || (F->c_1142 == 44)) || (F->c_1142 == 45)) || (F->c_1142 == 46)) || (F->c_1142 == 47)) || (F->c_1142 == 58)) || (F->c_1142 == 59)) || (F->c_1142 == 60)) || (F->c_1142 == 61)) || (F->c_1142 == 62)) || (F->c_1142 == 124))) {
f_add_token_243(F->up, ((rt_int)3LL), ({ rt_gstr sl1268 = F->two_1249; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)1LL); if (l_ <= h_) { rt_index(l_, sl1268.lo, sl1268.hi); rt_index(h_, sl1268.lo, sl1268.hi); } sl1268.p += l_ - sl1268.lo; sl1268.lo = l_; sl1268.hi = h_; sl1268; }), ((rt_int)0LL));
F->i_1138 = rt_add(F->i_1138, ((rt_int)1LL));
if ((F->c_1142 == 59)) {
f_check_include_266(F->up);
}
} else {
f_fail_226(F->up, F->up->src_line_112, rt_g_lit("unexpected character", 20));
}

}
L_end_1248: ;
}
}
L_end_1148: ;
ret_:

  return;
}

static void f_exponent_259(struct f_greenc_1fr *up_, rt_gstr line_255, rt_int *j_256, rt_gstr *buf_257, rt_int *bl_258) {
  struct f_exponent_259fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_255 = cp_rt_gstr(line_255);
F->j_256 = j_256;
F->buf_257 = buf_257;
F->bl_258 = bl_258;
(*F->bl_258) = rt_add((*F->bl_258), ((rt_int)1LL));
(*({ rt_gstr *ix1269 = &((*F->buf_257)); &ix1269->p[rt_index((*F->bl_258), ix1269->lo, ix1269->hi) - ix1269->lo]; })) = 69;
(*F->j_256) = rt_add((*F->j_256), ((rt_int)1LL));
if (((({ rt_gstr ix1270 = F->line_255; ix1270.p[rt_index((*F->j_256), ix1270.lo, ix1270.hi) - ix1270.lo]; }) == 43) || (({ rt_gstr ix1271 = F->line_255; ix1271.p[rt_index((*F->j_256), ix1271.lo, ix1271.hi) - ix1271.lo]; }) == 45))) {
(*F->bl_258) = rt_add((*F->bl_258), ((rt_int)1LL));
(*({ rt_gstr *ix1272 = &((*F->buf_257)); &ix1272->p[rt_index((*F->bl_258), ix1272->lo, ix1272->hi) - ix1272->lo]; })) = ({ rt_gstr ix1273 = F->line_255; ix1273.p[rt_index((*F->j_256), ix1273.lo, ix1273.hi) - ix1273.lo]; });
(*F->j_256) = rt_add((*F->j_256), ((rt_int)1LL));
}
while ((((*F->j_256) <= ({ rt_gstr at1275 = F->line_255; at1275.hi >= at1275.lo ? at1275.hi - at1275.lo + 1 : (rt_int)0; })) && (f_is_digit_212(F->up, ({ rt_gstr ix1277 = F->line_255; ix1277.p[rt_index((*F->j_256), ix1277.lo, ix1277.hi) - ix1277.lo]; })) || (({ rt_gstr ix1278 = F->line_255; ix1278.p[rt_index((*F->j_256), ix1278.lo, ix1278.hi) - ix1278.lo]; }) == 95)))) {
if ((({ rt_gstr ix1279 = F->line_255; ix1279.p[rt_index((*F->j_256), ix1279.lo, ix1279.hi) - ix1279.lo]; }) != 95)) {
(*F->bl_258) = rt_add((*F->bl_258), ((rt_int)1LL));
(*({ rt_gstr *ix1280 = &((*F->buf_257)); &ix1280->p[rt_index((*F->bl_258), ix1280->lo, ix1280->hi) - ix1280->lo]; })) = ({ rt_gstr ix1281 = F->line_255; ix1281.p[rt_index((*F->j_256), ix1281.lo, ix1281.hi) - ix1281.lo]; });
} else if ((((*F->j_256) == ({ rt_gstr at1282 = F->line_255; at1282.hi >= at1282.lo ? at1282.hi - at1282.lo + 1 : (rt_int)0; })) || (!f_is_digit_212(F->up, ({ rt_gstr ix1284 = F->line_255; ix1284.p[rt_index(rt_add((*F->j_256), ((rt_int)1LL)), ix1284.lo, ix1284.hi) - ix1284.lo]; }))))) {
f_fail_226(F->up, F->up->src_line_112, rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
(*F->j_256) = rt_add((*F->j_256), ((rt_int)1LL));
}
L_end_1274: ;
ret_:

  return;
}

static void f_include_open_262(struct f_greenc_1fr *up_, rt_gstr name_260, rt_int *length_261) {
  struct f_include_open_262fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_260 = cp_rt_gstr(name_260);
F->length_261 = length_261;
rt_g_include_open(rt_g_g2s(F->name_260), F->length_261);
ret_:

  return;
}

static void f_include_char_265(struct f_greenc_1fr *up_, rt_int i_263, int *c_264) {
  struct f_include_char_265fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->i_263 = i_263;
F->c_264 = c_264;
rt_g_include_char(F->i_263, F->c_264);
ret_:

  return;
}

static void f_check_include_266(struct f_greenc_1fr *up_) {
  struct f_check_include_266fr *F = rt_alloc(sizeof *F);
F->up = up_;
if ((F->up->ntoks_110 < ((rt_int)6LL))) {
goto ret_;
}
if ((!(((((((*(P107)rt_nil_check(({ A106 ix1286 = F->up->toks_109; ix1286.p[rt_index(rt_sub(F->up->ntoks_110, ((rt_int)5LL)), ix1286.lo, ix1286.hi) - ix1286.lo]; }))).kind_ == ((rt_int)2LL)) && eq_rt_gstr((*(P137)rt_nil_check((*(P107)rt_nil_check(({ A106 ix1287 = F->up->toks_109; ix1287.p[rt_index(rt_sub(F->up->ntoks_110, ((rt_int)5LL)), ix1287.lo, ix1287.hi) - ix1287.lo]; }))).s_)), rt_g_lit("PRAGMA", 6))) && eq_rt_gstr((*(P137)rt_nil_check((*(P107)rt_nil_check(({ A106 ix1288 = F->up->toks_109; ix1288.p[rt_index(rt_sub(F->up->ntoks_110, ((rt_int)4LL)), ix1288.lo, ix1288.hi) - ix1288.lo]; }))).s_)), rt_g_lit("INCLUDE", 7))) && eq_rt_gstr((*(P137)rt_nil_check((*(P107)rt_nil_check(({ A106 ix1289 = F->up->toks_109; ix1289.p[rt_index(rt_sub(F->up->ntoks_110, ((rt_int)3LL)), ix1289.lo, ix1289.hi) - ix1289.lo]; }))).s_)), rt_g_lit("(", 1))) && ((*(P107)rt_nil_check(({ A106 ix1290 = F->up->toks_109; ix1290.p[rt_index(rt_sub(F->up->ntoks_110, ((rt_int)2LL)), ix1290.lo, ix1290.hi) - ix1290.lo]; }))).kind_ == ((rt_int)6LL))) && eq_rt_gstr((*(P137)rt_nil_check((*(P107)rt_nil_check(({ A106 ix1291 = F->up->toks_109; ix1291.p[rt_index(rt_sub(F->up->ntoks_110, ((rt_int)1LL)), ix1291.lo, ix1291.hi) - ix1291.lo]; }))).s_)), rt_g_lit(")", 1))))) {
goto ret_;
}
f_include_open_262(F->up, (*(P137)rt_nil_check((*(P107)rt_nil_check(({ A106 ix1293 = F->up->toks_109; ix1293.p[rt_index(rt_sub(F->up->ntoks_110, ((rt_int)2LL)), ix1293.lo, ix1293.hi) - ix1293.lo]; }))).s_)), &F->n_1285);
if ((F->n_1285 < ((rt_int)0LL))) {
f_fail_226(F->up, F->up->src_line_112, cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma INCLUDE: the file ", 25), (*(P137)rt_nil_check((*(P107)rt_nil_check(({ A106 ix1295 = F->up->toks_109; ix1295.p[rt_index(rt_sub(F->up->ntoks_110, ((rt_int)2LL)), ix1295.lo, ix1295.hi) - ix1295.lo]; }))).s_))), rt_g_lit(" cannot be read", 15)));
}
F->up->ntoks_110 = rt_sub(F->up->ntoks_110, ((rt_int)6LL));
f_include_text_268(F->up, F->n_1285);
ret_:

  return;
}

static void f_include_text_268(struct f_greenc_1fr *up_, rt_int n_267) {
  struct f_include_text_268fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_267 = n_267;
F->t_1296.lo = ((rt_int)1LL); F->t_1296.hi = rt_add(F->n_267, ((rt_int)1LL));
F->t_1296.lo2 = 1; F->t_1296.hi2 = 1;
F->t_1296.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->t_1296));
F->saved_line_1297 = F->up->src_line_112;
F->from_1298 = ((rt_int)1LL);
{ rt_int lo1301 = ((rt_int)1LL), hi1302 = F->n_267;
for (rt_int it1303 = lo1301; it1303 <= hi1302; it1303++) {
F->k_1300 = it1303;
f_include_char_265(F->up, F->k_1300, &(*({ rt_gstr *ix1305 = &(F->t_1296); &ix1305->p[rt_index(F->k_1300, ix1305->lo, ix1305->hi) - ix1305->lo]; })));
}
}
L_end_1299: ;
F->up->src_line_112 = ((rt_int)0LL);
{ rt_int lo1308 = ((rt_int)1LL), hi1309 = F->n_267;
for (rt_int it1310 = lo1308; it1310 <= hi1309; it1310++) {
F->k_1307 = it1310;
if ((({ rt_gstr ix1311 = F->t_1296; ix1311.p[rt_index(F->k_1307, ix1311.lo, ix1311.hi) - ix1311.lo]; }) == 10)) {
F->up->src_line_112 = rt_add(F->up->src_line_112, ((rt_int)1LL));
f_include_line_272(F->up, F->t_1296, F->from_1298, rt_sub(F->k_1307, ((rt_int)1LL)));
F->from_1298 = rt_add(F->k_1307, ((rt_int)1LL));
}
}
}
L_end_1306: ;
if ((F->from_1298 <= F->n_267)) {
F->up->src_line_112 = rt_add(F->up->src_line_112, ((rt_int)1LL));
f_include_line_272(F->up, F->t_1296, F->from_1298, F->n_267);
}
F->up->src_line_112 = F->saved_line_1297;
ret_:

  return;
}

static void f_include_line_272(struct f_greenc_1fr *up_, rt_gstr t_269, rt_int from_270, rt_int to_271) {
  struct f_include_line_272fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_269 = cp_rt_gstr(t_269);
F->from_270 = from_270;
F->to_271 = to_271;
F->l_1312.lo = ((rt_int)1LL); F->l_1312.hi = rt_add(rt_sub(F->to_271, F->from_270), ((rt_int)1LL));
F->l_1312.lo2 = 1; F->l_1312.hi2 = 1;
F->l_1312.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->l_1312));
{ rt_int lo1315 = F->from_270, hi1316 = F->to_271;
for (rt_int it1317 = lo1315; it1317 <= hi1316; it1317++) {
F->k_1314 = it1317;
(*({ rt_gstr *ix1318 = &(F->l_1312); &ix1318->p[rt_index(rt_add(rt_sub(F->k_1314, F->from_270), ((rt_int)1LL)), ix1318->lo, ix1318->hi) - ix1318->lo]; })) = ({ rt_gstr ix1319 = F->t_269; ix1319.p[rt_index(F->k_1314, ix1319.lo, ix1319.hi) - ix1319.lo]; });
}
}
L_end_1313: ;
f_lex_line_254(F->up, F->l_1312);
ret_:

  return;
}

static void f_read_source_273(struct f_greenc_1fr *up_) {
  struct f_read_source_273fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->buf_1320.lo = ((rt_int)1LL); F->buf_1320.hi = ((rt_int)10000LL);
F->buf_1320.lo2 = 1; F->buf_1320.hi2 = 1;
F->buf_1320.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->buf_1320));
F->bl_1321 = ((rt_int)0LL);
{ rt_frame xf1323;
if (RT_TRY(xf1323)) {
for (;;) {
(F->c_1322 = rt_g_getc());
if ((F->c_1322 == 10)) {
F->up->src_line_112 = rt_add(F->up->src_line_112, ((rt_int)1LL));
f_lex_line_254(F->up, ({ rt_gstr sl1327 = F->buf_1320; rt_int l_ = ((rt_int)1LL), h_ = F->bl_1321; if (l_ <= h_) { rt_index(l_, sl1327.lo, sl1327.hi); rt_index(h_, sl1327.lo, sl1327.hi); } sl1327.p += l_ - sl1327.lo; sl1327.lo = l_; sl1327.hi = h_; sl1327; }));
F->bl_1321 = ((rt_int)0LL);
} else {
F->bl_1321 = rt_add(F->bl_1321, ((rt_int)1LL));
(*({ rt_gstr *ix1328 = &(F->buf_1320); &ix1328->p[rt_index(F->bl_1321, ix1328->lo, ix1328->hi) - ix1328->lo]; })) = F->c_1322;
}
}
L_end_1325: ;
RT_POP(xf1323);
} else {
RT_POP(xf1323);
int x1324 = rt_xcur;
if (rt_g_aborted()) rt_raise(x1324);
if (0 || x1324 == rt_exc("END_OF_FILE")) {
if ((F->bl_1321 > ((rt_int)0LL))) {
F->up->src_line_112 = rt_add(F->up->src_line_112, ((rt_int)1LL));
f_lex_line_254(F->up, ({ rt_gstr sl1330 = F->buf_1320; rt_int l_ = ((rt_int)1LL), h_ = F->bl_1321; if (l_ <= h_) { rt_index(l_, sl1330.lo, sl1330.hi); rt_index(h_, sl1330.lo, sl1330.hi); } sl1330.p += l_ - sl1330.lo; sl1330.lo = l_; sl1330.hi = h_; sl1330; }));
}
f_add_token_243(F->up, ((rt_int)0LL), rt_g_lit("<end>", 5), ((rt_int)0LL));
} else {
rt_raise(x1324);
}
}
}
ret_:

  return;
}

static P171 f_nn_276(struct f_greenc_1fr *up_, rt_int kind_274, rt_int line_275) {
  struct f_nn_276fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_274 = kind_274;
F->line_275 = line_275;
F->result_ = ({ R172 *cell1331 = rt_alloc(sizeof(R172)); *cell1331 = cp_R172(({ R172 ag1332; ag1332.kind_ = F->kind_274; ag1332.line_ = F->line_275; ag1332.ival_ = ((rt_int)0LL); ag1332.flag_ = ((rt_int)0LL); ag1332.name_ = NULL; ag1332.tag_ = NULL; ag1332.a_ = NULL; ag1332.b_ = NULL; ag1332.c_ = NULL; ag1332.d_ = NULL; ag1332.e_ = NULL; ag1332.next_ = NULL; ag1332.formal_ = NULL; ag1332; })); (P171)cell1331; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_append_280(struct f_greenc_1fr *up_, P171 *head_277, P171 *tail_278, P171 x_279) {
  struct f_append_280fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->head_277 = head_277;
F->tail_278 = tail_278;
F->x_279 = x_279;
if ((F->x_279 == NULL)) {
goto ret_;
}
if (((*F->head_277) == NULL)) {
(*F->head_277) = F->x_279;
} else {
(*(P171)rt_nil_check((*F->tail_278))).next_ = F->x_279;
}
(*F->tail_278) = F->x_279;
while (((*(P171)rt_nil_check((*F->tail_278))).next_ != NULL)) {
(*F->tail_278) = (*(P171)rt_nil_check((*F->tail_278))).next_;
}
L_end_1333: ;
ret_:

  return;
}

static rt_int f_list_len_282(struct f_greenc_1fr *up_, P171 l_281) {
  struct f_list_len_282fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_281 = l_281;
F->n_1334 = ((rt_int)0LL);
F->p_1335 = NULL;
F->p_1335 = F->l_281;
while ((F->p_1335 != NULL)) {
F->n_1334 = rt_add(F->n_1334, ((rt_int)1LL));
F->p_1335 = (*(P171)rt_nil_check(F->p_1335)).next_;
}
L_end_1336: ;
F->result_ = F->n_1334;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_cur_line_283(struct f_greenc_1fr *up_) {
  struct f_cur_line_283fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = (*(P107)rt_nil_check(({ A106 ix1337 = F->up->toks_109; ix1337.p[rt_index(F->up->tpos_111, ix1337.lo, ix1337.hi) - ix1337.lo]; }))).line_;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_kw_285(struct f_greenc_1fr *up_, rt_gstr w_284) {
  struct f_at_kw_285fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_284 = cp_rt_gstr(w_284);
F->result_ = (((*(P107)rt_nil_check(({ A106 ix1338 = F->up->toks_109; ix1338.p[rt_index(F->up->tpos_111, ix1338.lo, ix1338.hi) - ix1338.lo]; }))).kind_ == ((rt_int)2LL)) && eq_rt_gstr((*(P137)rt_nil_check((*(P107)rt_nil_check(({ A106 ix1339 = F->up->toks_109; ix1339.p[rt_index(F->up->tpos_111, ix1339.lo, ix1339.hi) - ix1339.lo]; }))).s_)), F->w_284));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_op_287(struct f_greenc_1fr *up_, rt_gstr w_286) {
  struct f_at_op_287fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_286 = cp_rt_gstr(w_286);
F->result_ = (((*(P107)rt_nil_check(({ A106 ix1340 = F->up->toks_109; ix1340.p[rt_index(F->up->tpos_111, ix1340.lo, ix1340.hi) - ix1340.lo]; }))).kind_ == ((rt_int)3LL)) && eq_rt_gstr((*(P137)rt_nil_check((*(P107)rt_nil_check(({ A106 ix1341 = F->up->toks_109; ix1341.p[rt_index(F->up->tpos_111, ix1341.lo, ix1341.hi) - ix1341.lo]; }))).s_)), F->w_286));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_kind_289(struct f_greenc_1fr *up_, rt_int k_288) {
  struct f_at_kind_289fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_288 = k_288;
F->result_ = ((*(P107)rt_nil_check(({ A106 ix1342 = F->up->toks_109; ix1342.p[rt_index(F->up->tpos_111, ix1342.lo, ix1342.hi) - ix1342.lo]; }))).kind_ == F->k_288);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_kind_at_291(struct f_greenc_1fr *up_, rt_int k_290) {
  struct f_kind_at_291fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_290 = k_290;
if ((rt_add(F->up->tpos_111, F->k_290) > F->up->ntoks_110)) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
F->result_ = (*(P107)rt_nil_check(({ A106 ix1343 = F->up->toks_109; ix1343.p[rt_index(rt_add(F->up->tpos_111, F->k_290), ix1343.lo, ix1343.hi) - ix1343.lo]; }))).kind_;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_text_at_293(struct f_greenc_1fr *up_, rt_int k_292) {
  struct f_text_at_293fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_292 = k_292;
if ((rt_add(F->up->tpos_111, F->k_292) > F->up->ntoks_110)) {
F->result_ = rt_g_lit("", 0);
goto ret_;
}
F->result_ = (*(P137)rt_nil_check((*(P107)rt_nil_check(({ A106 ix1344 = F->up->toks_109; ix1344.p[rt_index(rt_add(F->up->tpos_111, F->k_292), ix1344.lo, ix1344.hi) - ix1344.lo]; }))).s_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_perror_295(struct f_greenc_1fr *up_, rt_gstr msg_294) {
  struct f_perror_295fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->msg_294 = cp_rt_gstr(msg_294);
f_fail_226(F->up, (*(P107)rt_nil_check(({ A106 ix1347 = F->up->toks_109; ix1347.p[rt_index(F->up->tpos_111, ix1347.lo, ix1347.hi) - ix1347.lo]; }))).line_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->msg_294, rt_g_lit(" (at ", 5)), (*(P137)rt_nil_check((*(P107)rt_nil_check(({ A106 ix1348 = F->up->toks_109; ix1348.p[rt_index(F->up->tpos_111, ix1348.lo, ix1348.hi) - ix1348.lo]; }))).s_))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_skip_296(struct f_greenc_1fr *up_) {
  struct f_skip_296fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->tpos_111 = rt_add(F->up->tpos_111, ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_kw_298(struct f_greenc_1fr *up_, rt_gstr w_297) {
  struct f_expect_kw_298fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_297 = cp_rt_gstr(w_297);
if ((!f_at_kw_285(F->up, F->w_297))) {
f_perror_295(F->up, cat_rt_gstr(rt_g_lit("expected ", 9), F->w_297));
}
F->up->tpos_111 = rt_add(F->up->tpos_111, ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_op_300(struct f_greenc_1fr *up_, rt_gstr w_299) {
  struct f_expect_op_300fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_299 = cp_rt_gstr(w_299);
if ((!f_at_op_287(F->up, F->w_299))) {
f_perror_295(F->up, cat_rt_gstr(rt_g_lit("expected ", 9), F->w_299));
}
F->up->tpos_111 = rt_add(F->up->tpos_111, ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_id_302(struct f_greenc_1fr *up_, P137 *res_301) {
  struct f_expect_id_302fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_301 = res_301;
if ((!f_at_kind_289(F->up, ((rt_int)1LL)))) {
f_perror_295(F->up, rt_g_lit("expected an identifier", 22));
}
F->up->tpos_111 = rt_add(F->up->tpos_111, ((rt_int)1LL));
(*F->res_301) = (*(P107)rt_nil_check(({ A106 ix1349 = F->up->toks_109; ix1349.p[rt_index(rt_sub(F->up->tpos_111, ((rt_int)1LL)), ix1349.lo, ix1349.hi) - ix1349.lo]; }))).s_;
goto ret_;
ret_:

  return;
}

static void f_name_node_304(struct f_greenc_1fr *up_, P171 *res_303) {
  struct f_name_node_304fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_303 = res_303;
F->x_1350 = NULL;
F->x_1350 = f_nn_276(F->up, ((rt_int)5LL), f_cur_line_283(F->up));
f_expect_id_302(F->up, &(*(P171)rt_nil_check(F->x_1350)).name_);
(*F->res_303) = F->x_1350;
goto ret_;
ret_:

  return;
}

static void f_id_list_306(struct f_greenc_1fr *up_, P171 *res_305) {
  struct f_id_list_306fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_305 = res_305;
F->head_1351 = NULL;
F->tail_1352 = NULL;
F->x_1353 = NULL;
f_name_node_304(F->up, &F->x_1353);
f_append_280(F->up, &F->head_1351, &F->tail_1352, F->x_1353);
while (f_at_op_287(F->up, rt_g_lit(",", 1))) {
f_skip_296(F->up);
f_name_node_304(F->up, &F->x_1353);
f_append_280(F->up, &F->head_1351, &F->tail_1352, F->x_1353);
}
L_end_1354: ;
(*F->res_305) = F->head_1351;
goto ret_;
ret_:

  return;
}

static P171 f_binop_311(struct f_greenc_1fr *up_, P137 op_307, P171 l_308, P171 r_309, rt_int line_310) {
  struct f_binop_311fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->op_307 = op_307;
F->l_308 = l_308;
F->r_309 = r_309;
F->line_310 = line_310;
F->x_1355 = NULL;
F->x_1355 = f_nn_276(F->up, ((rt_int)7LL), F->line_310);
(*(P171)rt_nil_check(F->x_1355)).name_ = F->op_307;
(*(P171)rt_nil_check(F->x_1355)).a_ = F->l_308;
(*(P171)rt_nil_check(F->x_1355)).b_ = F->r_309;
F->result_ = F->x_1355;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_expr_313(struct f_greenc_1fr *up_, P171 *res_312) {
  struct f_expr_313fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_312 = res_312;
F->l_1356 = NULL;
F->r_1357 = NULL;
F->op_1358 = NULL;
f_relation_317(F->up, &F->l_1356);
while (((f_at_kw_285(F->up, rt_g_lit("AND", 3)) || f_at_kw_285(F->up, rt_g_lit("OR", 2))) || f_at_kw_285(F->up, rt_g_lit("XOR", 3)))) {
F->op_1358 = (*(P107)rt_nil_check(({ A106 ix1361 = F->up->toks_109; ix1361.p[rt_index(F->up->tpos_111, ix1361.lo, ix1361.hi) - ix1361.lo]; }))).s_;
F->line_1359 = f_cur_line_283(F->up);
f_skip_296(F->up);
if ((eq_rt_gstr((*(P137)rt_nil_check(F->op_1358)), rt_g_lit("AND", 3)) && f_at_kw_285(F->up, rt_g_lit("THEN", 4)))) {
f_skip_296(F->up);
} else if ((eq_rt_gstr((*(P137)rt_nil_check(F->op_1358)), rt_g_lit("OR", 2)) && f_at_kw_285(F->up, rt_g_lit("ELSE", 4)))) {
f_skip_296(F->up);
}
f_relation_317(F->up, &F->r_1357);
F->l_1356 = f_binop_311(F->up, F->op_1358, F->l_1356, F->r_1357, F->line_1359);
}
L_end_1360: ;
(*F->res_312) = F->l_1356;
goto ret_;
ret_:

  return;
}

static int f_is_rel_315(struct f_greenc_1fr *up_, rt_gstr s_314) {
  struct f_is_rel_315fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_314 = cp_rt_gstr(s_314);
F->result_ = (((((eq_rt_gstr(F->s_314, rt_g_lit("=", 1)) || eq_rt_gstr(F->s_314, rt_g_lit("/=", 2))) || eq_rt_gstr(F->s_314, rt_g_lit("<", 1))) || eq_rt_gstr(F->s_314, rt_g_lit("<=", 2))) || eq_rt_gstr(F->s_314, rt_g_lit(">", 1))) || eq_rt_gstr(F->s_314, rt_g_lit(">=", 2)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_relation_317(struct f_greenc_1fr *up_, P171 *res_316) {
  struct f_relation_317fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_316 = res_316;
F->l_1362 = NULL;
F->r_1363 = NULL;
F->lo_1364 = NULL;
F->hi_1365 = NULL;
F->t_1366 = NULL;
F->op_1367 = NULL;
F->line_1368 = f_cur_line_283(F->up);
F->neg_1369 = 0;
f_simple_expr_319(F->up, &F->l_1362);
if ((f_at_kind_289(F->up, ((rt_int)3LL)) && f_is_rel_315(F->up, (*(P137)rt_nil_check((*(P107)rt_nil_check(({ A106 ix1371 = F->up->toks_109; ix1371.p[rt_index(F->up->tpos_111, ix1371.lo, ix1371.hi) - ix1371.lo]; }))).s_))))) {
F->op_1367 = (*(P107)rt_nil_check(({ A106 ix1372 = F->up->toks_109; ix1372.p[rt_index(F->up->tpos_111, ix1372.lo, ix1372.hi) - ix1372.lo]; }))).s_;
f_skip_296(F->up);
f_simple_expr_319(F->up, &F->r_1363);
F->l_1362 = f_binop_311(F->up, F->op_1367, F->l_1362, F->r_1363, F->line_1368);
(*F->res_316) = F->l_1362;
goto ret_;
}
if (((f_at_kw_285(F->up, rt_g_lit("NOT", 3)) && (f_kind_at_291(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_293(F->up, ((rt_int)1LL)), rt_g_lit("IN", 2)))) {
f_skip_296(F->up);
F->neg_1369 = 1;
}
if (f_at_kw_285(F->up, rt_g_lit("IN", 2))) {
f_skip_296(F->up);
f_simple_expr_319(F->up, &F->lo_1364);
f_expect_op_300(F->up, rt_g_lit("..", 2));
f_simple_expr_319(F->up, &F->hi_1365);
F->t_1366 = f_nn_276(F->up, ((rt_int)14LL), F->line_1368);
(*(P171)rt_nil_check(F->t_1366)).a_ = F->lo_1364;
(*(P171)rt_nil_check(F->t_1366)).b_ = F->hi_1365;
F->op_1367 = f_mk_205(F->up, rt_g_lit("IN", 2));
F->l_1362 = f_binop_311(F->up, F->op_1367, F->l_1362, F->t_1366, F->line_1368);
if (F->neg_1369) {
F->t_1366 = f_nn_276(F->up, ((rt_int)6LL), F->line_1368);
(*(P171)rt_nil_check(F->t_1366)).name_ = f_mk_205(F->up, rt_g_lit("NOT", 3));
(*(P171)rt_nil_check(F->t_1366)).a_ = F->l_1362;
(*F->res_316) = F->t_1366;
goto ret_;
}
}
(*F->res_316) = F->l_1362;
goto ret_;
ret_:

  return;
}

static void f_simple_expr_319(struct f_greenc_1fr *up_, P171 *res_318) {
  struct f_simple_expr_319fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_318 = res_318;
F->l_1373 = NULL;
F->r_1374 = NULL;
F->op_1375 = NULL;
F->line_1376 = f_cur_line_283(F->up);
if (((f_at_op_287(F->up, rt_g_lit("+", 1)) || f_at_op_287(F->up, rt_g_lit("-", 1))) || f_at_kw_285(F->up, rt_g_lit("NOT", 3)))) {
F->op_1375 = (*(P107)rt_nil_check(({ A106 ix1377 = F->up->toks_109; ix1377.p[rt_index(F->up->tpos_111, ix1377.lo, ix1377.hi) - ix1377.lo]; }))).s_;
f_skip_296(F->up);
f_term_321(F->up, &F->r_1374);
F->l_1373 = f_nn_276(F->up, ((rt_int)6LL), F->line_1376);
(*(P171)rt_nil_check(F->l_1373)).name_ = F->op_1375;
(*(P171)rt_nil_check(F->l_1373)).a_ = F->r_1374;
} else {
f_term_321(F->up, &F->l_1373);
}
while (((f_at_op_287(F->up, rt_g_lit("+", 1)) || f_at_op_287(F->up, rt_g_lit("-", 1))) || f_at_op_287(F->up, rt_g_lit("&", 1)))) {
F->op_1375 = (*(P107)rt_nil_check(({ A106 ix1379 = F->up->toks_109; ix1379.p[rt_index(F->up->tpos_111, ix1379.lo, ix1379.hi) - ix1379.lo]; }))).s_;
f_skip_296(F->up);
f_term_321(F->up, &F->r_1374);
F->l_1373 = f_binop_311(F->up, F->op_1375, F->l_1373, F->r_1374, F->line_1376);
}
L_end_1378: ;
(*F->res_318) = F->l_1373;
goto ret_;
ret_:

  return;
}

static void f_term_321(struct f_greenc_1fr *up_, P171 *res_320) {
  struct f_term_321fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_320 = res_320;
F->l_1380 = NULL;
F->r_1381 = NULL;
F->op_1382 = NULL;
F->line_1383 = f_cur_line_283(F->up);
f_factor_323(F->up, &F->l_1380);
while (((f_at_op_287(F->up, rt_g_lit("*", 1)) || f_at_op_287(F->up, rt_g_lit("/", 1))) || f_at_kw_285(F->up, rt_g_lit("MOD", 3)))) {
F->op_1382 = (*(P107)rt_nil_check(({ A106 ix1385 = F->up->toks_109; ix1385.p[rt_index(F->up->tpos_111, ix1385.lo, ix1385.hi) - ix1385.lo]; }))).s_;
f_skip_296(F->up);
f_factor_323(F->up, &F->r_1381);
F->l_1380 = f_binop_311(F->up, F->op_1382, F->l_1380, F->r_1381, F->line_1383);
}
L_end_1384: ;
(*F->res_320) = F->l_1380;
goto ret_;
ret_:

  return;
}

static void f_factor_323(struct f_greenc_1fr *up_, P171 *res_322) {
  struct f_factor_323fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_322 = res_322;
F->l_1386 = NULL;
F->r_1387 = NULL;
F->op_1388 = NULL;
F->line_1389 = f_cur_line_283(F->up);
f_primary_325(F->up, &F->l_1386);
if (f_at_op_287(F->up, rt_g_lit("**", 2))) {
F->op_1388 = (*(P107)rt_nil_check(({ A106 ix1390 = F->up->toks_109; ix1390.p[rt_index(F->up->tpos_111, ix1390.lo, ix1390.hi) - ix1390.lo]; }))).s_;
f_skip_296(F->up);
f_primary_325(F->up, &F->r_1387);
F->l_1386 = f_binop_311(F->up, F->op_1388, F->l_1386, F->r_1387, F->line_1389);
}
(*F->res_322) = F->l_1386;
goto ret_;
ret_:

  return;
}

static void f_primary_325(struct f_greenc_1fr *up_, P171 *res_324) {
  struct f_primary_325fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_324 = res_324;
F->x_1391 = NULL;
F->line_1392 = f_cur_line_283(F->up);
if (f_at_kind_289(F->up, ((rt_int)4LL))) {
F->x_1391 = f_nn_276(F->up, ((rt_int)1LL), F->line_1392);
(*(P171)rt_nil_check(F->x_1391)).ival_ = (*(P107)rt_nil_check(({ A106 ix1393 = F->up->toks_109; ix1393.p[rt_index(F->up->tpos_111, ix1393.lo, ix1393.hi) - ix1393.lo]; }))).ival_;
(*(P171)rt_nil_check(F->x_1391)).name_ = (*(P107)rt_nil_check(({ A106 ix1394 = F->up->toks_109; ix1394.p[rt_index(F->up->tpos_111, ix1394.lo, ix1394.hi) - ix1394.lo]; }))).s_;
f_skip_296(F->up);
(*F->res_324) = F->x_1391;
goto ret_;
}
if (f_at_kind_289(F->up, ((rt_int)5LL))) {
F->x_1391 = f_nn_276(F->up, ((rt_int)2LL), F->line_1392);
(*(P171)rt_nil_check(F->x_1391)).name_ = (*(P107)rt_nil_check(({ A106 ix1395 = F->up->toks_109; ix1395.p[rt_index(F->up->tpos_111, ix1395.lo, ix1395.hi) - ix1395.lo]; }))).s_;
f_skip_296(F->up);
(*F->res_324) = F->x_1391;
goto ret_;
}
if (f_at_kind_289(F->up, ((rt_int)6LL))) {
F->x_1391 = f_nn_276(F->up, ((rt_int)3LL), F->line_1392);
(*(P171)rt_nil_check(F->x_1391)).name_ = (*(P107)rt_nil_check(({ A106 ix1396 = F->up->toks_109; ix1396.p[rt_index(F->up->tpos_111, ix1396.lo, ix1396.hi) - ix1396.lo]; }))).s_;
f_skip_296(F->up);
(*F->res_324) = F->x_1391;
goto ret_;
}
if (f_at_kw_285(F->up, rt_g_lit("NULL", 4))) {
f_skip_296(F->up);
F->x_1391 = f_nn_276(F->up, ((rt_int)4LL), F->line_1392);
(*F->res_324) = F->x_1391;
goto ret_;
}
if (f_at_kw_285(F->up, rt_g_lit("NEW", 3))) {
f_skip_296(F->up);
F->x_1391 = f_nn_276(F->up, ((rt_int)11LL), F->line_1392);
f_expect_id_302(F->up, &(*(P171)rt_nil_check(F->x_1391)).name_);
if (f_at_op_287(F->up, rt_g_lit("(", 1))) {
f_agg_or_paren_327(F->up, &(*(P171)rt_nil_check(F->x_1391)).a_);
}
(*F->res_324) = F->x_1391;
goto ret_;
}
if (f_at_op_287(F->up, rt_g_lit("(", 1))) {
f_agg_or_paren_327(F->up, &F->x_1391);
(*F->res_324) = F->x_1391;
goto ret_;
}
if (f_at_kind_289(F->up, ((rt_int)1LL))) {
f_name_p_330(F->up, &F->x_1391);
(*F->res_324) = F->x_1391;
goto ret_;
}
f_perror_295(F->up, rt_g_lit("expected an expression", 22));
(*F->res_324) = NULL;
goto ret_;
ret_:

  return;
}

static void f_agg_or_paren_327(struct f_greenc_1fr *up_, P171 *res_326) {
  struct f_agg_or_paren_327fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_326 = res_326;
F->line_1397 = f_cur_line_283(F->up);
F->items_1398 = NULL;
F->itail_1399 = NULL;
F->it_1400 = NULL;
F->first_1401 = NULL;
F->keys_1402 = NULL;
F->ktail_1403 = NULL;
F->lab_1404 = NULL;
F->x_1405 = NULL;
F->more_1406 = 1;
f_expect_op_300(F->up, rt_g_lit("(", 1));
while (F->more_1406) {
F->it_1400 = f_nn_276(F->up, ((rt_int)13LL), F->line_1397);
if (f_at_kw_285(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_296(F->up);
f_expect_op_300(F->up, rt_g_lit("=>", 2));
F->lab_1404 = f_nn_276(F->up, ((rt_int)61LL), F->line_1397);
(*(P171)rt_nil_check(F->lab_1404)).flag_ = ((rt_int)1LL);
(*(P171)rt_nil_check(F->it_1400)).a_ = F->lab_1404;
f_expr_313(F->up, &(*(P171)rt_nil_check(F->it_1400)).b_);
} else {
f_expr_313(F->up, &F->first_1401);
if (((f_at_op_287(F->up, rt_g_lit("..", 2)) || f_at_op_287(F->up, rt_g_lit("|", 1))) || f_at_op_287(F->up, rt_g_lit("=>", 2)))) {
F->keys_1402 = NULL;
F->ktail_1403 = NULL;
for (;;) {
F->lab_1404 = f_nn_276(F->up, ((rt_int)61LL), F->line_1397);
(*(P171)rt_nil_check(F->lab_1404)).a_ = F->first_1401;
if (f_at_op_287(F->up, rt_g_lit("..", 2))) {
f_skip_296(F->up);
f_simple_expr_319(F->up, &(*(P171)rt_nil_check(F->lab_1404)).b_);
}
f_append_280(F->up, &F->keys_1402, &F->ktail_1403, F->lab_1404);
if ((!f_at_op_287(F->up, rt_g_lit("|", 1)))) {
goto L_end_1408;
}
f_skip_296(F->up);
f_simple_expr_319(F->up, &F->first_1401);
}
L_end_1408: ;
f_expect_op_300(F->up, rt_g_lit("=>", 2));
(*(P171)rt_nil_check(F->it_1400)).a_ = F->keys_1402;
f_expr_313(F->up, &(*(P171)rt_nil_check(F->it_1400)).b_);
} else {
(*(P171)rt_nil_check(F->it_1400)).b_ = F->first_1401;
}
}
f_append_280(F->up, &F->items_1398, &F->itail_1399, F->it_1400);
F->more_1406 = f_at_op_287(F->up, rt_g_lit(",", 1));
if (F->more_1406) {
f_skip_296(F->up);
}
}
L_end_1407: ;
f_expect_op_300(F->up, rt_g_lit(")", 1));
if ((((*(P171)rt_nil_check(F->items_1398)).next_ == NULL) && ((*(P171)rt_nil_check(F->items_1398)).a_ == NULL))) {
F->x_1405 = f_nn_276(F->up, ((rt_int)15LL), F->line_1397);
(*(P171)rt_nil_check(F->x_1405)).a_ = (*(P171)rt_nil_check(F->items_1398)).b_;
(*F->res_326) = F->x_1405;
goto ret_;
}
F->x_1405 = f_nn_276(F->up, ((rt_int)12LL), F->line_1397);
(*(P171)rt_nil_check(F->x_1405)).a_ = F->items_1398;
(*F->res_326) = F->x_1405;
goto ret_;
ret_:

  return;
}

static int f_aggregate_ahead_328(struct f_greenc_1fr *up_) {
  struct f_aggregate_ahead_328fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_1409 = ((rt_int)0LL);
F->k_1410 = ((rt_int)0LL);
for (;;) {
if ((rt_add(F->up->tpos_111, F->k_1410) > F->up->ntoks_110)) {
F->result_ = 0;
goto ret_;
}
{
F->t_1413 = NULL;
F->t_1413 = ({ A106 ix1414 = F->up->toks_109; ix1414.p[rt_index(rt_add(F->up->tpos_111, F->k_1410), ix1414.lo, ix1414.hi) - ix1414.lo]; });
if ((((*(P107)rt_nil_check(F->t_1413)).kind_ == ((rt_int)3LL)) && eq_rt_gstr((*(P137)rt_nil_check((*(P107)rt_nil_check(F->t_1413)).s_)), rt_g_lit("(", 1)))) {
F->d_1409 = rt_add(F->d_1409, ((rt_int)1LL));
} else if ((((*(P107)rt_nil_check(F->t_1413)).kind_ == ((rt_int)3LL)) && eq_rt_gstr((*(P137)rt_nil_check((*(P107)rt_nil_check(F->t_1413)).s_)), rt_g_lit(")", 1)))) {
F->d_1409 = rt_sub(F->d_1409, ((rt_int)1LL));
if ((F->d_1409 == ((rt_int)0LL))) {
F->result_ = 0;
goto ret_;
}
} else if (((F->d_1409 == ((rt_int)1LL)) && ((((*(P107)rt_nil_check(F->t_1413)).kind_ == ((rt_int)3LL)) && (eq_rt_gstr((*(P137)rt_nil_check((*(P107)rt_nil_check(F->t_1413)).s_)), rt_g_lit("=>", 2)) || eq_rt_gstr((*(P137)rt_nil_check((*(P107)rt_nil_check(F->t_1413)).s_)), rt_g_lit("|", 1)))) || (((*(P107)rt_nil_check(F->t_1413)).kind_ == ((rt_int)2LL)) && eq_rt_gstr((*(P137)rt_nil_check((*(P107)rt_nil_check(F->t_1413)).s_)), rt_g_lit("OTHERS", 6)))))) {
F->result_ = 1;
goto ret_;
} else if ((((*(P107)rt_nil_check(F->t_1413)).kind_ == ((rt_int)3LL)) && eq_rt_gstr((*(P137)rt_nil_check((*(P107)rt_nil_check(F->t_1413)).s_)), rt_g_lit(";", 1)))) {
F->result_ = 0;
goto ret_;
}

}
L_end_1412: ;
F->k_1410 = rt_add(F->k_1410, ((rt_int)1LL));
}
L_end_1411: ;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_name_p_330(struct f_greenc_1fr *up_, P171 *res_329) {
  struct f_name_p_330fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_329 = res_329;
F->p_1415 = NULL;
F->x_1416 = NULL;
F->args_1417 = NULL;
F->atail_1418 = NULL;
F->lo_1419 = NULL;
F->r_1420 = NULL;
F->line_1421 = f_cur_line_283(F->up);
f_name_node_304(F->up, &F->p_1415);
for (;;) {
if ((f_at_op_287(F->up, rt_g_lit("(", 1)) && f_aggregate_ahead_328(F->up))) {
F->x_1416 = f_nn_276(F->up, ((rt_int)8LL), F->line_1421);
(*(P171)rt_nil_check(F->x_1416)).a_ = F->p_1415;
f_agg_or_paren_327(F->up, &(*(P171)rt_nil_check(F->x_1416)).b_);
(*(P171)rt_nil_check(F->x_1416)).flag_ = ((rt_int)9LL);
F->p_1415 = F->x_1416;
} else if (f_at_op_287(F->up, rt_g_lit("(", 1))) {
f_skip_296(F->up);
F->args_1417 = NULL;
F->atail_1418 = NULL;
if ((!f_at_op_287(F->up, rt_g_lit(")", 1)))) {
F->more_1422 = 1;
while (F->more_1422) {
{
F->formal_1426 = NULL;
F->mark_1427 = ((rt_int)0LL);
if (((f_at_kind_289(F->up, ((rt_int)1LL)) && (f_kind_at_291(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (((eq_rt_gstr(f_text_at_293(F->up, ((rt_int)1LL)), rt_g_lit(":=", 2)) || eq_rt_gstr(f_text_at_293(F->up, ((rt_int)1LL)), rt_g_lit("=:", 2))) || eq_rt_gstr(f_text_at_293(F->up, ((rt_int)1LL)), rt_g_lit(":=:", 3))) || eq_rt_gstr(f_text_at_293(F->up, ((rt_int)1LL)), rt_g_lit("=>", 2))))) {
F->formal_1426 = (*(P107)rt_nil_check(({ A106 ix1428 = F->up->toks_109; ix1428.p[rt_index(F->up->tpos_111, ix1428.lo, ix1428.hi) - ix1428.lo]; }))).s_;
if (eq_rt_gstr(f_text_at_293(F->up, ((rt_int)1LL)), rt_g_lit(":=", 2))) {
F->mark_1427 = ((rt_int)1LL);
} else if (eq_rt_gstr(f_text_at_293(F->up, ((rt_int)1LL)), rt_g_lit("=:", 2))) {
F->mark_1427 = ((rt_int)3LL);
} else if (eq_rt_gstr(f_text_at_293(F->up, ((rt_int)1LL)), rt_g_lit(":=:", 3))) {
F->mark_1427 = ((rt_int)2LL);
} else {
F->mark_1427 = ((rt_int)4LL);
}
f_skip_296(F->up);
f_skip_296(F->up);
}
f_expr_313(F->up, &F->lo_1419);
if (f_at_op_287(F->up, rt_g_lit("..", 2))) {
f_skip_296(F->up);
F->r_1420 = f_nn_276(F->up, ((rt_int)14LL), F->line_1421);
(*(P171)rt_nil_check(F->r_1420)).a_ = F->lo_1419;
f_simple_expr_319(F->up, &(*(P171)rt_nil_check(F->r_1420)).b_);
F->lo_1419 = F->r_1420;
}
(*(P171)rt_nil_check(F->lo_1419)).formal_ = F->formal_1426;
(*(P171)rt_nil_check(F->lo_1419)).flag_ = F->mark_1427;
f_append_280(F->up, &F->args_1417, &F->atail_1418, F->lo_1419);

}
L_end_1425: ;
F->more_1422 = f_at_op_287(F->up, rt_g_lit(",", 1));
if (F->more_1422) {
f_skip_296(F->up);
}
}
L_end_1424: ;
}
f_expect_op_300(F->up, rt_g_lit(")", 1));
F->x_1416 = f_nn_276(F->up, ((rt_int)8LL), F->line_1421);
(*(P171)rt_nil_check(F->x_1416)).a_ = F->p_1415;
(*(P171)rt_nil_check(F->x_1416)).b_ = F->args_1417;
F->p_1415 = F->x_1416;
} else if (f_at_op_287(F->up, rt_g_lit(".", 1))) {
f_skip_296(F->up);
F->x_1416 = f_nn_276(F->up, ((rt_int)9LL), F->line_1421);
(*(P171)rt_nil_check(F->x_1416)).a_ = F->p_1415;
if (f_at_kw_285(F->up, rt_g_lit("ALL", 3))) {
f_skip_296(F->up);
(*(P171)rt_nil_check(F->x_1416)).name_ = f_mk_205(F->up, rt_g_lit("ALL", 3));
} else {
f_expect_id_302(F->up, &(*(P171)rt_nil_check(F->x_1416)).name_);
}
F->p_1415 = F->x_1416;
} else if (f_at_op_287(F->up, rt_g_lit("'", 1))) {
f_skip_296(F->up);
F->x_1416 = f_nn_276(F->up, ((rt_int)10LL), F->line_1421);
(*(P171)rt_nil_check(F->x_1416)).a_ = F->p_1415;
(*(P171)rt_nil_check(F->x_1416)).name_ = (*(P107)rt_nil_check(({ A106 ix1429 = F->up->toks_109; ix1429.p[rt_index(F->up->tpos_111, ix1429.lo, ix1429.hi) - ix1429.lo]; }))).s_;
f_skip_296(F->up);
if (f_at_op_287(F->up, rt_g_lit("(", 1))) {
f_skip_296(F->up);
f_expr_313(F->up, &(*(P171)rt_nil_check(F->x_1416)).b_);
f_expect_op_300(F->up, rt_g_lit(")", 1));
}
F->p_1415 = F->x_1416;
} else {
(*F->res_329) = F->p_1415;
goto ret_;
}
}
L_end_1423: ;
ret_:

  return;
}

static void f_component_list_332(struct f_greenc_1fr *up_, P171 *res_331) {
  struct f_component_list_332fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_331 = res_331;
F->comps_1430 = NULL;
F->ctail_1431 = NULL;
F->names_1432 = NULL;
F->st_1433 = NULL;
F->def_1434 = NULL;
F->cm_1435 = NULL;
F->v_1436 = NULL;
F->arm_1437 = NULL;
F->atail_1438 = NULL;
F->labs_1439 = NULL;
F->ltail_1440 = NULL;
F->l_1441 = NULL;
for (;;) {
if (f_at_kw_285(F->up, rt_g_lit("NULL", 4))) {
f_skip_296(F->up);
f_expect_op_300(F->up, rt_g_lit(";", 1));
} else if (f_at_kw_285(F->up, rt_g_lit("CASE", 4))) {
F->v_1436 = f_nn_276(F->up, ((rt_int)23LL), f_cur_line_283(F->up));
f_skip_296(F->up);
f_name_node_304(F->up, &(*(P171)rt_nil_check(F->v_1436)).a_);
f_expect_kw_298(F->up, rt_g_lit("OF", 2));
F->atail_1438 = NULL;
while (f_at_kw_285(F->up, rt_g_lit("WHEN", 4))) {
f_skip_296(F->up);
F->arm_1437 = f_nn_276(F->up, ((rt_int)60LL), f_cur_line_283(F->up));
F->labs_1439 = NULL;
F->ltail_1440 = NULL;
for (;;) {
if (f_at_kw_285(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_296(F->up);
(*(P171)rt_nil_check(F->arm_1437)).flag_ = ((rt_int)1LL);
} else {
F->l_1441 = f_nn_276(F->up, ((rt_int)61LL), f_cur_line_283(F->up));
f_simple_expr_319(F->up, &(*(P171)rt_nil_check(F->l_1441)).a_);
if (f_at_op_287(F->up, rt_g_lit("..", 2))) {
f_skip_296(F->up);
f_simple_expr_319(F->up, &(*(P171)rt_nil_check(F->l_1441)).b_);
}
f_append_280(F->up, &F->labs_1439, &F->ltail_1440, F->l_1441);
}
if ((!f_at_op_287(F->up, rt_g_lit("|", 1)))) {
goto L_end_1445;
}
f_skip_296(F->up);
}
L_end_1445: ;
f_expect_op_300(F->up, rt_g_lit("=>", 2));
(*(P171)rt_nil_check(F->arm_1437)).a_ = F->labs_1439;
f_component_list_332(F->up, &(*(P171)rt_nil_check(F->arm_1437)).b_);
f_append_280(F->up, &(*(P171)rt_nil_check(F->v_1436)).b_, &F->atail_1438, F->arm_1437);
}
L_end_1444: ;
f_expect_kw_298(F->up, rt_g_lit("END", 3));
f_expect_kw_298(F->up, rt_g_lit("CASE", 4));
f_expect_op_300(F->up, rt_g_lit(";", 1));
f_append_280(F->up, &F->comps_1430, &F->ctail_1431, F->v_1436);
} else if (f_at_kind_289(F->up, ((rt_int)1LL))) {
f_id_list_306(F->up, &F->names_1432);
f_expect_op_300(F->up, rt_g_lit(":", 1));
F->is_c_1442 = 0;
if (f_at_kw_285(F->up, rt_g_lit("CONSTANT", 8))) {
f_skip_296(F->up);
F->is_c_1442 = 1;
}
f_type_spec_338(F->up, &F->st_1433);
F->def_1434 = NULL;
if (f_at_op_287(F->up, rt_g_lit(":=", 2))) {
f_skip_296(F->up);
f_expr_313(F->up, &F->def_1434);
}
f_expect_op_300(F->up, rt_g_lit(";", 1));
while ((F->names_1432 != NULL)) {
F->cm_1435 = f_nn_276(F->up, ((rt_int)63LL), (*(P171)rt_nil_check(F->names_1432)).line_);
(*(P171)rt_nil_check(F->cm_1435)).name_ = (*(P171)rt_nil_check(F->names_1432)).name_;
(*(P171)rt_nil_check(F->cm_1435)).a_ = F->st_1433;
(*(P171)rt_nil_check(F->cm_1435)).b_ = F->def_1434;
if (F->is_c_1442) {
(*(P171)rt_nil_check(F->cm_1435)).flag_ = ((rt_int)1LL);
}
f_append_280(F->up, &F->comps_1430, &F->ctail_1431, F->cm_1435);
F->names_1432 = (*(P171)rt_nil_check(F->names_1432)).next_;
}
L_end_1446: ;
} else {
(*F->res_331) = F->comps_1430;
goto ret_;
}
}
L_end_1443: ;
ret_:

  return;
}

static void f_discrete_range_p_334(struct f_greenc_1fr *up_, P171 *res_333) {
  struct f_discrete_range_p_334fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_333 = res_333;
F->lo_1447 = NULL;
F->r_1448 = NULL;
F->line_1449 = f_cur_line_283(F->up);
if (((f_at_kind_289(F->up, ((rt_int)1LL)) && (f_kind_at_291(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_293(F->up, ((rt_int)1LL)), rt_g_lit("RANGE", 5)))) {
f_subtype_ind_336(F->up, &(*F->res_333));
goto ret_;
}
if ((((((f_at_kind_289(F->up, ((rt_int)1LL)) && (f_kind_at_291(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && eq_rt_gstr(f_text_at_293(F->up, ((rt_int)1LL)), rt_g_lit(".", 1))) && (f_kind_at_291(F->up, ((rt_int)2LL)) == ((rt_int)1LL))) && (f_kind_at_291(F->up, ((rt_int)3LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_293(F->up, ((rt_int)3LL)), rt_g_lit("RANGE", 5)))) {
f_subtype_ind_336(F->up, &(*F->res_333));
goto ret_;
}
f_simple_expr_319(F->up, &F->lo_1447);
if (f_at_op_287(F->up, rt_g_lit("..", 2))) {
f_skip_296(F->up);
F->r_1448 = f_nn_276(F->up, ((rt_int)14LL), F->line_1449);
(*(P171)rt_nil_check(F->r_1448)).a_ = F->lo_1447;
f_simple_expr_319(F->up, &(*(P171)rt_nil_check(F->r_1448)).b_);
(*F->res_333) = F->r_1448;
goto ret_;
}
(*F->res_333) = F->lo_1447;
goto ret_;
ret_:

  return;
}

static void f_subtype_ind_336(struct f_greenc_1fr *up_, P171 *res_335) {
  struct f_subtype_ind_336fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_335 = res_335;
F->f_1450 = NULL;
F->x_1451 = NULL;
F->r_1452 = NULL;
F->args_1453 = NULL;
F->atail_1454 = NULL;
F->lo_1455 = NULL;
F->line_1456 = f_cur_line_283(F->up);
F->more_1457 = 1;
F->x_1451 = f_nn_276(F->up, ((rt_int)80LL), F->line_1456);
f_expect_id_302(F->up, &(*(P171)rt_nil_check(F->x_1451)).name_);
while (f_at_op_287(F->up, rt_g_lit(".", 1))) {
f_skip_296(F->up);
(*(P171)rt_nil_check(F->x_1451)).tag_ = (*(P171)rt_nil_check(F->x_1451)).name_;
f_expect_id_302(F->up, &(*(P171)rt_nil_check(F->x_1451)).name_);
}
L_end_1458: ;
if (f_at_kw_285(F->up, rt_g_lit("RANGE", 5))) {
f_skip_296(F->up);
F->r_1452 = f_nn_276(F->up, ((rt_int)14LL), F->line_1456);
f_simple_expr_319(F->up, &(*(P171)rt_nil_check(F->r_1452)).a_);
f_expect_op_300(F->up, rt_g_lit("..", 2));
f_simple_expr_319(F->up, &(*(P171)rt_nil_check(F->r_1452)).b_);
(*(P171)rt_nil_check(F->x_1451)).a_ = F->r_1452;
(*(P171)rt_nil_check(F->x_1451)).flag_ = ((rt_int)1LL);
} else if (f_at_op_287(F->up, rt_g_lit("(", 1))) {
f_skip_296(F->up);
while (F->more_1457) {
if (((f_at_kind_289(F->up, ((rt_int)1LL)) && (f_kind_at_291(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && eq_rt_gstr(f_text_at_293(F->up, ((rt_int)1LL)), rt_g_lit("=>", 2)))) {
f_expect_id_302(F->up, &F->f_1450);
f_skip_296(F->up);
f_expr_313(F->up, &F->lo_1455);
(*(P171)rt_nil_check(F->lo_1455)).formal_ = F->f_1450;
} else {
f_discrete_range_p_334(F->up, &F->lo_1455);
}
f_append_280(F->up, &F->args_1453, &F->atail_1454, F->lo_1455);
F->more_1457 = f_at_op_287(F->up, rt_g_lit(",", 1));
if (F->more_1457) {
f_skip_296(F->up);
}
}
L_end_1459: ;
f_expect_op_300(F->up, rt_g_lit(")", 1));
(*(P171)rt_nil_check(F->x_1451)).a_ = F->args_1453;
(*(P171)rt_nil_check(F->x_1451)).flag_ = ((rt_int)2LL);
} else if ((f_at_kw_285(F->up, rt_g_lit("DIGITS", 6)) || f_at_kw_285(F->up, rt_g_lit("DELTA", 5)))) {
f_skip_296(F->up);
f_simple_expr_319(F->up, &(*(P171)rt_nil_check(F->x_1451)).b_);
(*(P171)rt_nil_check(F->x_1451)).flag_ = ((rt_int)3LL);
if (f_at_kw_285(F->up, rt_g_lit("RANGE", 5))) {
f_skip_296(F->up);
F->r_1452 = f_nn_276(F->up, ((rt_int)14LL), F->line_1456);
f_simple_expr_319(F->up, &(*(P171)rt_nil_check(F->r_1452)).a_);
f_expect_op_300(F->up, rt_g_lit("..", 2));
f_simple_expr_319(F->up, &(*(P171)rt_nil_check(F->r_1452)).b_);
(*(P171)rt_nil_check(F->x_1451)).a_ = F->r_1452;
}
}
(*F->res_335) = F->x_1451;
goto ret_;
ret_:

  return;
}

static void f_type_spec_338(struct f_greenc_1fr *up_, P171 *res_337) {
  struct f_type_spec_338fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_337 = res_337;
F->x_1460 = NULL;
if ((((((((f_at_op_287(F->up, rt_g_lit("(", 1)) || f_at_kw_285(F->up, rt_g_lit("ARRAY", 5))) || f_at_kw_285(F->up, rt_g_lit("RECORD", 6))) || f_at_kw_285(F->up, rt_g_lit("ACCESS", 6))) || f_at_kw_285(F->up, rt_g_lit("RANGE", 5))) || f_at_kw_285(F->up, rt_g_lit("DIGITS", 6))) || f_at_kw_285(F->up, rt_g_lit("DELTA", 5))) || f_at_kw_285(F->up, rt_g_lit("NEW", 3)))) {
f_type_def_340(F->up, &F->x_1460);
} else {
f_subtype_ind_336(F->up, &F->x_1460);
}
(*F->res_337) = F->x_1460;
goto ret_;
ret_:

  return;
}

static void f_type_def_340(struct f_greenc_1fr *up_, P171 *res_339) {
  struct f_type_def_340fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_339 = res_339;
F->x_1461 = NULL;
F->lits_1462 = NULL;
F->ltail_1463 = NULL;
F->l_1464 = NULL;
F->idx_1465 = NULL;
F->itail_1466 = NULL;
F->r_1467 = NULL;
F->comps_1468 = NULL;
F->ctail_1469 = NULL;
F->names_1470 = NULL;
F->st_1471 = NULL;
F->def_1472 = NULL;
F->cm_1473 = NULL;
F->line_1474 = f_cur_line_283(F->up);
F->more_1475 = 1;
if (f_at_op_287(F->up, rt_g_lit("(", 1))) {
f_skip_296(F->up);
F->x_1461 = f_nn_276(F->up, ((rt_int)70LL), F->line_1474);
while (F->more_1475) {
if (f_at_kind_289(F->up, ((rt_int)6LL))) {
F->l_1464 = f_nn_276(F->up, ((rt_int)3LL), F->line_1474);
(*(P171)rt_nil_check(F->l_1464)).name_ = (*(P107)rt_nil_check(({ A106 ix1477 = F->up->toks_109; ix1477.p[rt_index(F->up->tpos_111, ix1477.lo, ix1477.hi) - ix1477.lo]; }))).s_;
f_skip_296(F->up);
} else {
f_name_node_304(F->up, &F->l_1464);
}
f_append_280(F->up, &F->lits_1462, &F->ltail_1463, F->l_1464);
F->more_1475 = f_at_op_287(F->up, rt_g_lit(",", 1));
if (F->more_1475) {
f_skip_296(F->up);
}
}
L_end_1476: ;
f_expect_op_300(F->up, rt_g_lit(")", 1));
(*(P171)rt_nil_check(F->x_1461)).a_ = F->lits_1462;
(*F->res_339) = F->x_1461;
goto ret_;
}
if (f_at_kw_285(F->up, rt_g_lit("RANGE", 5))) {
f_skip_296(F->up);
F->x_1461 = f_nn_276(F->up, ((rt_int)71LL), F->line_1474);
f_simple_expr_319(F->up, &(*(P171)rt_nil_check(F->x_1461)).a_);
f_expect_op_300(F->up, rt_g_lit("..", 2));
f_simple_expr_319(F->up, &(*(P171)rt_nil_check(F->x_1461)).b_);
(*F->res_339) = F->x_1461;
goto ret_;
}
if ((f_at_kw_285(F->up, rt_g_lit("DIGITS", 6)) || f_at_kw_285(F->up, rt_g_lit("DELTA", 5)))) {
F->x_1461 = f_nn_276(F->up, ((rt_int)72LL), F->line_1474);
(*(P171)rt_nil_check(F->x_1461)).flag_ = ((rt_int)1LL);
if (f_at_kw_285(F->up, rt_g_lit("DELTA", 5))) {
(*(P171)rt_nil_check(F->x_1461)).flag_ = ((rt_int)2LL);
}
f_skip_296(F->up);
f_simple_expr_319(F->up, &(*(P171)rt_nil_check(F->x_1461)).a_);
if (f_at_kw_285(F->up, rt_g_lit("RANGE", 5))) {
f_skip_296(F->up);
F->r_1467 = f_nn_276(F->up, ((rt_int)14LL), F->line_1474);
f_simple_expr_319(F->up, &(*(P171)rt_nil_check(F->r_1467)).a_);
f_expect_op_300(F->up, rt_g_lit("..", 2));
f_simple_expr_319(F->up, &(*(P171)rt_nil_check(F->r_1467)).b_);
(*(P171)rt_nil_check(F->x_1461)).b_ = F->r_1467;
}
(*F->res_339) = F->x_1461;
goto ret_;
}
if (f_at_kw_285(F->up, rt_g_lit("ARRAY", 5))) {
f_skip_296(F->up);
F->x_1461 = f_nn_276(F->up, ((rt_int)73LL), F->line_1474);
f_expect_op_300(F->up, rt_g_lit("(", 1));
while (F->more_1475) {
if (((f_at_kind_289(F->up, ((rt_int)1LL)) && (f_kind_at_291(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (eq_rt_gstr(f_text_at_293(F->up, ((rt_int)1LL)), rt_g_lit(",", 1)) || eq_rt_gstr(f_text_at_293(F->up, ((rt_int)1LL)), rt_g_lit(")", 1))))) {
F->l_1464 = f_nn_276(F->up, ((rt_int)80LL), F->line_1474);
f_expect_id_302(F->up, &(*(P171)rt_nil_check(F->l_1464)).name_);
(*(P171)rt_nil_check(F->x_1461)).flag_ = ((rt_int)1LL);
} else {
f_discrete_range_p_334(F->up, &F->l_1464);
if ((((*(P171)rt_nil_check(F->l_1464)).kind_ != ((rt_int)14LL)) && ((*(P171)rt_nil_check(F->l_1464)).kind_ != ((rt_int)80LL)))) {
f_perror_295(F->up, rt_g_lit("an index is a discrete range or a type mark (RM79 3.6)", 54));
}
}
f_append_280(F->up, &F->idx_1465, &F->itail_1466, F->l_1464);
F->more_1475 = f_at_op_287(F->up, rt_g_lit(",", 1));
if (F->more_1475) {
f_skip_296(F->up);
}
}
L_end_1478: ;
f_expect_op_300(F->up, rt_g_lit(")", 1));
f_expect_kw_298(F->up, rt_g_lit("OF", 2));
(*(P171)rt_nil_check(F->x_1461)).a_ = F->idx_1465;
f_type_spec_338(F->up, &(*(P171)rt_nil_check(F->x_1461)).b_);
(*F->res_339) = F->x_1461;
goto ret_;
}
if (f_at_kw_285(F->up, rt_g_lit("RECORD", 6))) {
f_skip_296(F->up);
F->x_1461 = f_nn_276(F->up, ((rt_int)74LL), F->line_1474);
f_component_list_332(F->up, &(*(P171)rt_nil_check(F->x_1461)).a_);
f_expect_kw_298(F->up, rt_g_lit("END", 3));
f_expect_kw_298(F->up, rt_g_lit("RECORD", 6));
(*F->res_339) = F->x_1461;
goto ret_;
}
if (f_at_kw_285(F->up, rt_g_lit("ACCESS", 6))) {
f_skip_296(F->up);
F->x_1461 = f_nn_276(F->up, ((rt_int)75LL), F->line_1474);
f_type_spec_338(F->up, &(*(P171)rt_nil_check(F->x_1461)).a_);
(*F->res_339) = F->x_1461;
goto ret_;
}
if (f_at_kw_285(F->up, rt_g_lit("NEW", 3))) {
f_skip_296(F->up);
F->x_1461 = f_nn_276(F->up, ((rt_int)76LL), F->line_1474);
f_subtype_ind_336(F->up, &(*(P171)rt_nil_check(F->x_1461)).a_);
(*F->res_339) = F->x_1461;
goto ret_;
}
f_perror_295(F->up, rt_g_lit("expected a type definition", 26));
(*F->res_339) = NULL;
goto ret_;
ret_:

  return;
}

static void f_pragma_p_342(struct f_greenc_1fr *up_, P171 *res_341) {
  struct f_pragma_p_342fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_341 = res_341;
F->x_1479 = NULL;
F->a_1480 = NULL;
F->head_1481 = NULL;
F->tail_1482 = NULL;
F->x_1479 = f_nn_276(F->up, ((rt_int)56LL), f_cur_line_283(F->up));
f_expect_kw_298(F->up, rt_g_lit("PRAGMA", 6));
f_expect_id_302(F->up, &(*(P171)rt_nil_check(F->x_1479)).name_);
if (f_at_op_287(F->up, rt_g_lit("(", 1))) {
f_skip_296(F->up);
for (;;) {
if (f_at_kind_289(F->up, ((rt_int)1LL))) {
f_name_node_304(F->up, &F->a_1480);
} else if (((f_at_kind_289(F->up, ((rt_int)6LL)) || f_at_kind_289(F->up, ((rt_int)4LL))) || f_at_kind_289(F->up, ((rt_int)5LL)))) {
f_primary_325(F->up, &F->a_1480);
} else {
f_perror_295(F->up, rt_g_lit("a pragma argument is an identifier, a string or a number (RM79 2.7)", 67));
}
f_append_280(F->up, &F->head_1481, &F->tail_1482, F->a_1480);
if ((!f_at_op_287(F->up, rt_g_lit(",", 1)))) {
goto L_end_1483;
}
f_skip_296(F->up);
}
L_end_1483: ;
f_expect_op_300(F->up, rt_g_lit(")", 1));
}
f_expect_op_300(F->up, rt_g_lit(";", 1));
(*(P171)rt_nil_check(F->x_1479)).a_ = F->head_1481;
f_check_pragma_344(F->up, F->x_1479);
(*F->res_341) = F->x_1479;
ret_:

  return;
}

static void f_check_pragma_344(struct f_greenc_1fr *up_, P171 x_343) {
  struct f_check_pragma_344fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_343 = x_343;
F->p_1484 = cp_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->x_343)).name_)));
F->n_1485 = f_list_len_282(F->up, (*(P171)rt_nil_check(F->x_343)).a_);
F->a_1486 = NULL;
F->a_1486 = (*(P171)rt_nil_check(F->x_343)).a_;
if ((eq_rt_gstr(F->p_1484, rt_g_lit("PAGE", 4)) || eq_rt_gstr(F->p_1484, rt_g_lit("INLINE", 6)))) {
if ((F->n_1485 != ((rt_int)0LL))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->x_343)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1484), rt_g_lit(" takes no argument (RM79 App. B)", 32)));
}
} else if (((((eq_rt_gstr(F->p_1484, rt_g_lit("LIST", 4)) || eq_rt_gstr(F->p_1484, rt_g_lit("OPTIMIZE", 8))) || eq_rt_gstr(F->p_1484, rt_g_lit("CREATION", 8))) || eq_rt_gstr(F->p_1484, rt_g_lit("INTERFACE", 9))) || eq_rt_gstr(F->p_1484, rt_g_lit("SYSTEM", 6)))) {
if (((F->n_1485 != ((rt_int)1LL)) || ((*(P171)rt_nil_check(F->a_1486)).kind_ != ((rt_int)5LL)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->x_343)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1484), rt_g_lit(" takes one identifier (RM79 App. B)", 35)));
}
if (((eq_rt_gstr(F->p_1484, rt_g_lit("LIST", 4)) && (!eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->a_1486)).name_)), rt_g_lit("ON", 2)))) && (!eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->a_1486)).name_)), rt_g_lit("OFF", 3))))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->x_343)).line_, rt_g_lit("pragma LIST(ON) or LIST(OFF) (RM79 App. B)", 42));
} else if (((eq_rt_gstr(F->p_1484, rt_g_lit("OPTIMIZE", 8)) && (!eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->a_1486)).name_)), rt_g_lit("TIME", 4)))) && (!eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->a_1486)).name_)), rt_g_lit("SPACE", 5))))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->x_343)).line_, rt_g_lit("pragma OPTIMIZE(TIME) or OPTIMIZE(SPACE) (RM79 App. B)", 54));
} else if (((eq_rt_gstr(F->p_1484, rt_g_lit("CREATION", 8)) && (!eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->a_1486)).name_)), rt_g_lit("STATIC", 6)))) && (!eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->a_1486)).name_)), rt_g_lit("DYNAMIC", 7))))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->x_343)).line_, rt_g_lit("pragma CREATION(STATIC) or CREATION(DYNAMIC) (RM79 9.2)", 55));
}
if (eq_rt_gstr(F->p_1484, rt_g_lit("OPTIMIZE", 8))) {
F->up->conf_optimize_203 = (*(P171)rt_nil_check(F->a_1486)).name_;
} else if (eq_rt_gstr(F->p_1484, rt_g_lit("SYSTEM", 6))) {
F->up->conf_system_200 = (*(P171)rt_nil_check(F->a_1486)).name_;
}
} else if ((eq_rt_gstr(F->p_1484, rt_g_lit("STORAGE_UNIT", 12)) || eq_rt_gstr(F->p_1484, rt_g_lit("MEMORY_SIZE", 11)))) {
if (((F->n_1485 != ((rt_int)1LL)) || ((*(P171)rt_nil_check(F->a_1486)).kind_ != ((rt_int)1LL)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->x_343)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1484), rt_g_lit(" takes a number (RM79 13.7)", 27)));
}
if (eq_rt_gstr(F->p_1484, rt_g_lit("STORAGE_UNIT", 12))) {
F->up->conf_storage_unit_201 = (*(P171)rt_nil_check(F->a_1486)).ival_;
} else {
F->up->conf_memory_size_202 = (*(P171)rt_nil_check(F->a_1486)).ival_;
}
} else if ((eq_rt_gstr(F->p_1484, rt_g_lit("SUPPRESS", 8)) || eq_rt_gstr(F->p_1484, rt_g_lit("ENVIRONMENT", 11)))) {
if ((F->n_1485 == ((rt_int)0LL))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->x_343)).line_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1484), rt_g_lit(" names at least one ", 20)), rt_g_lit("unit or exception (RM79 App. B)", 31)));
}
while ((F->a_1486 != NULL)) {
if (((*(P171)rt_nil_check(F->a_1486)).kind_ != ((rt_int)5LL))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->x_343)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1484), rt_g_lit(" takes names (RM79 App. B)", 26)));
}
F->a_1486 = (*(P171)rt_nil_check(F->a_1486)).next_;
}
L_end_1487: ;
} else if (eq_rt_gstr(F->p_1484, rt_g_lit("INCLUDE", 7))) {
if (((F->n_1485 != ((rt_int)1LL)) || ((*(P171)rt_nil_check(F->a_1486)).kind_ != ((rt_int)3LL)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->x_343)).line_, rt_g_lit("pragma INCLUDE takes the name of a file (RM79 App. B)", 53));
}
}
ret_:

  return;
}

static void f_skip_visibility_345(struct f_greenc_1fr *up_) {
  struct f_skip_visibility_345fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->names_1488 = NULL;
f_skip_296(F->up);
if (f_at_op_287(F->up, rt_g_lit("(", 1))) {
f_skip_296(F->up);
f_id_list_306(F->up, &F->names_1488);
f_expect_op_300(F->up, rt_g_lit(")", 1));
}
ret_:

  return;
}

static void f_skip_representation_346(struct f_greenc_1fr *up_) {
  struct f_skip_representation_346fr *F = rt_alloc(sizeof *F);
F->up = up_;
while ((!f_at_kw_285(F->up, rt_g_lit("USE", 3)))) {
f_skip_296(F->up);
}
L_end_1489: ;
f_skip_296(F->up);
if (f_at_kw_285(F->up, rt_g_lit("RECORD", 6))) {
while ((!((f_at_kw_285(F->up, rt_g_lit("END", 3)) && (f_kind_at_291(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_293(F->up, ((rt_int)1LL)), rt_g_lit("RECORD", 6))))) {
f_skip_296(F->up);
}
L_end_1490: ;
f_skip_296(F->up);
f_skip_296(F->up);
}
while ((!f_at_op_287(F->up, rt_g_lit(";", 1)))) {
f_skip_296(F->up);
}
L_end_1491: ;
f_skip_296(F->up);
ret_:

  return;
}

static void f_decl_part_348(struct f_greenc_1fr *up_, P171 *res_347) {
  struct f_decl_part_348fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_347 = res_347;
F->head_1492 = NULL;
F->tail_1493 = NULL;
F->x_1494 = NULL;
F->names_1495 = NULL;
for (;;) {
if (f_at_kw_285(F->up, rt_g_lit("PRAGMA", 6))) {
f_pragma_p_342(F->up, &F->x_1494);
f_append_280(F->up, &F->head_1492, &F->tail_1493, F->x_1494);
} else if (f_at_kw_285(F->up, rt_g_lit("USE", 3))) {
f_skip_296(F->up);
F->x_1494 = f_nn_276(F->up, ((rt_int)55LL), f_cur_line_283(F->up));
f_id_list_306(F->up, &(*(P171)rt_nil_check(F->x_1494)).a_);
f_expect_op_300(F->up, rt_g_lit(";", 1));
f_append_280(F->up, &F->head_1492, &F->tail_1493, F->x_1494);
} else if (f_at_kw_285(F->up, rt_g_lit("RESTRICTED", 10))) {
f_skip_visibility_345(F->up);
} else if (f_at_kw_285(F->up, rt_g_lit("FOR", 3))) {
f_skip_representation_346(F->up);
} else if ((f_at_kw_285(F->up, rt_g_lit("TYPE", 4)) || f_at_kw_285(F->up, rt_g_lit("SUBTYPE", 7)))) {
f_type_decl_352(F->up, &F->x_1494);
f_append_280(F->up, &F->head_1492, &F->tail_1493, F->x_1494);
} else if ((f_at_kw_285(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_285(F->up, rt_g_lit("FUNCTION", 8)))) {
f_subprogram_358(F->up, &F->x_1494);
f_append_280(F->up, &F->head_1492, &F->tail_1493, F->x_1494);
} else if (f_at_kw_285(F->up, rt_g_lit("PACKAGE", 7))) {
f_package_p_364(F->up, &F->x_1494);
f_append_280(F->up, &F->head_1492, &F->tail_1493, F->x_1494);
} else if (f_at_kw_285(F->up, rt_g_lit("TASK", 4))) {
f_task_p_927(F->up, &F->x_1494);
f_append_280(F->up, &F->head_1492, &F->tail_1493, F->x_1494);
} else if (f_at_kw_285(F->up, rt_g_lit("GENERIC", 7))) {
f_generic_p_1057(F->up, &F->x_1494);
f_append_280(F->up, &F->head_1492, &F->tail_1493, F->x_1494);
} else if (f_at_kw_285(F->up, rt_g_lit("ENTRY", 5))) {
f_entry_p_929(F->up, &F->x_1494);
f_append_280(F->up, &F->head_1492, &F->tail_1493, F->x_1494);
} else if (((f_at_kind_289(F->up, ((rt_int)1LL)) && (f_kind_at_291(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (eq_rt_gstr(f_text_at_293(F->up, ((rt_int)1LL)), rt_g_lit(":", 1)) || eq_rt_gstr(f_text_at_293(F->up, ((rt_int)1LL)), rt_g_lit(",", 1))))) {
f_object_decl_350(F->up, &F->x_1494);
f_append_280(F->up, &F->head_1492, &F->tail_1493, F->x_1494);
} else {
(*F->res_347) = F->head_1492;
goto ret_;
}
}
L_end_1496: ;
ret_:

  return;
}

static void f_object_decl_350(struct f_greenc_1fr *up_, P171 *res_349) {
  struct f_object_decl_350fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_349 = res_349;
F->head_1497 = NULL;
F->tail_1498 = NULL;
F->names_1499 = NULL;
F->st_1500 = NULL;
F->init_1501 = NULL;
F->x_1502 = NULL;
F->line_1503 = f_cur_line_283(F->up);
F->is_const_1504 = 0;
f_id_list_306(F->up, &F->names_1499);
f_expect_op_300(F->up, rt_g_lit(":", 1));
if (f_at_kw_285(F->up, rt_g_lit("EXCEPTION", 9))) {
f_skip_296(F->up);
if (f_at_kw_285(F->up, rt_g_lit("RENAMES", 7))) {
f_skip_296(F->up);
F->x_1502 = f_nn_276(F->up, ((rt_int)46LL), F->line_1503);
(*(P171)rt_nil_check(F->x_1502)).name_ = (*(P171)rt_nil_check(F->names_1499)).name_;
f_name_p_330(F->up, &(*(P171)rt_nil_check(F->x_1502)).a_);
f_expect_op_300(F->up, rt_g_lit(";", 1));
(*F->res_349) = F->x_1502;
goto ret_;
}
f_expect_op_300(F->up, rt_g_lit(";", 1));
while ((F->names_1499 != NULL)) {
F->x_1502 = f_nn_276(F->up, ((rt_int)46LL), F->line_1503);
(*(P171)rt_nil_check(F->x_1502)).name_ = (*(P171)rt_nil_check(F->names_1499)).name_;
f_append_280(F->up, &F->head_1497, &F->tail_1498, F->x_1502);
F->names_1499 = (*(P171)rt_nil_check(F->names_1499)).next_;
}
L_end_1505: ;
(*F->res_349) = F->head_1497;
goto ret_;
}
if (f_at_kw_285(F->up, rt_g_lit("CONSTANT", 8))) {
f_skip_296(F->up);
F->is_const_1504 = 1;
}
f_type_spec_338(F->up, &F->st_1500);
if ((f_at_kw_285(F->up, rt_g_lit("RENAMES", 7)) && (!F->is_const_1504))) {
f_skip_296(F->up);
F->x_1502 = f_nn_276(F->up, ((rt_int)40LL), F->line_1503);
(*(P171)rt_nil_check(F->x_1502)).name_ = (*(P171)rt_nil_check(F->names_1499)).name_;
(*(P171)rt_nil_check(F->x_1502)).a_ = F->st_1500;
(*(P171)rt_nil_check(F->x_1502)).flag_ = ((rt_int)2LL);
f_expr_313(F->up, &(*(P171)rt_nil_check(F->x_1502)).b_);
f_expect_op_300(F->up, rt_g_lit(";", 1));
(*F->res_349) = F->x_1502;
goto ret_;
}
if (f_at_op_287(F->up, rt_g_lit(":=", 2))) {
f_skip_296(F->up);
f_expr_313(F->up, &F->init_1501);
}
f_expect_op_300(F->up, rt_g_lit(";", 1));
while ((F->names_1499 != NULL)) {
if (F->is_const_1504) {
F->x_1502 = f_nn_276(F->up, ((rt_int)41LL), F->line_1503);
} else {
F->x_1502 = f_nn_276(F->up, ((rt_int)40LL), F->line_1503);
}
(*(P171)rt_nil_check(F->x_1502)).name_ = (*(P171)rt_nil_check(F->names_1499)).name_;
(*(P171)rt_nil_check(F->x_1502)).a_ = F->st_1500;
(*(P171)rt_nil_check(F->x_1502)).b_ = F->init_1501;
f_append_280(F->up, &F->head_1497, &F->tail_1498, F->x_1502);
F->names_1499 = (*(P171)rt_nil_check(F->names_1499)).next_;
}
L_end_1506: ;
(*F->res_349) = F->head_1497;
goto ret_;
ret_:

  return;
}

static void f_type_decl_352(struct f_greenc_1fr *up_, P171 *res_351) {
  struct f_type_decl_352fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_351 = res_351;
F->x_1507 = NULL;
F->line_1508 = f_cur_line_283(F->up);
if (f_at_kw_285(F->up, rt_g_lit("SUBTYPE", 7))) {
f_skip_296(F->up);
F->x_1507 = f_nn_276(F->up, ((rt_int)43LL), F->line_1508);
f_expect_id_302(F->up, &(*(P171)rt_nil_check(F->x_1507)).name_);
f_expect_kw_298(F->up, rt_g_lit("IS", 2));
f_subtype_ind_336(F->up, &(*(P171)rt_nil_check(F->x_1507)).a_);
f_expect_op_300(F->up, rt_g_lit(";", 1));
(*F->res_351) = F->x_1507;
goto ret_;
}
f_expect_kw_298(F->up, rt_g_lit("TYPE", 4));
F->x_1507 = f_nn_276(F->up, ((rt_int)42LL), F->line_1508);
f_expect_id_302(F->up, &(*(P171)rt_nil_check(F->x_1507)).name_);
if (f_at_op_287(F->up, rt_g_lit(";", 1))) {
f_skip_296(F->up);
(*F->res_351) = NULL;
goto ret_;
}
f_expect_kw_298(F->up, rt_g_lit("IS", 2));
if (f_at_kw_285(F->up, rt_g_lit("PRIVATE", 7))) {
f_skip_296(F->up);
(*(P171)rt_nil_check(F->x_1507)).a_ = f_nn_276(F->up, ((rt_int)77LL), F->line_1508);
} else {
f_type_def_340(F->up, &(*(P171)rt_nil_check(F->x_1507)).a_);
}
f_expect_op_300(F->up, rt_g_lit(";", 1));
(*F->res_351) = F->x_1507;
goto ret_;
ret_:

  return;
}

static void f_formal_part_354(struct f_greenc_1fr *up_, P171 *res_353) {
  struct f_formal_part_354fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_353 = res_353;
F->head_1509 = NULL;
F->tail_1510 = NULL;
F->names_1511 = NULL;
F->st_1512 = NULL;
F->def_1513 = NULL;
F->p_1514 = NULL;
F->more_1516 = 1;
f_expect_op_300(F->up, rt_g_lit("(", 1));
while (F->more_1516) {
f_id_list_306(F->up, &F->names_1511);
f_expect_op_300(F->up, rt_g_lit(":", 1));
F->mode_1515 = ((rt_int)1LL);
if (f_at_kw_285(F->up, rt_g_lit("IN", 2))) {
f_skip_296(F->up);
if (f_at_kw_285(F->up, rt_g_lit("OUT", 3))) {
f_skip_296(F->up);
F->mode_1515 = ((rt_int)2LL);
}
} else if (f_at_kw_285(F->up, rt_g_lit("OUT", 3))) {
f_skip_296(F->up);
F->mode_1515 = ((rt_int)3LL);
}
f_subtype_ind_336(F->up, &F->st_1512);
F->def_1513 = NULL;
if (f_at_op_287(F->up, rt_g_lit(":=", 2))) {
f_skip_296(F->up);
f_expr_313(F->up, &F->def_1513);
}
while ((F->names_1511 != NULL)) {
F->p_1514 = f_nn_276(F->up, ((rt_int)47LL), (*(P171)rt_nil_check(F->names_1511)).line_);
(*(P171)rt_nil_check(F->p_1514)).name_ = (*(P171)rt_nil_check(F->names_1511)).name_;
(*(P171)rt_nil_check(F->p_1514)).ival_ = F->mode_1515;
(*(P171)rt_nil_check(F->p_1514)).a_ = F->st_1512;
(*(P171)rt_nil_check(F->p_1514)).b_ = F->def_1513;
f_append_280(F->up, &F->head_1509, &F->tail_1510, F->p_1514);
F->names_1511 = (*(P171)rt_nil_check(F->names_1511)).next_;
}
L_end_1518: ;
F->more_1516 = f_at_op_287(F->up, rt_g_lit(";", 1));
if (F->more_1516) {
f_skip_296(F->up);
}
}
L_end_1517: ;
f_expect_op_300(F->up, rt_g_lit(")", 1));
(*F->res_353) = F->head_1509;
goto ret_;
ret_:

  return;
}

static void f_designator_356(struct f_greenc_1fr *up_, P137 *res_355) {
  struct f_designator_356fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_355 = res_355;
if (f_at_kind_289(F->up, ((rt_int)6LL))) {
f_skip_296(F->up);
(*F->res_355) = f_mk_205(F->up, f_upper_s_218(F->up, (*(P137)rt_nil_check((*(P107)rt_nil_check(({ A106 ix1522 = F->up->toks_109; ix1522.p[rt_index(rt_sub(F->up->tpos_111, ((rt_int)1LL)), ix1522.lo, ix1522.hi) - ix1522.lo]; }))).s_))));
if (eq_rt_gstr((*(P137)rt_nil_check((*F->res_355))), rt_g_lit("/=", 2))) {
f_perror_295(F->up, rt_g_lit("\"/=\" cannot be declared: it follows the declaration of \"=\" (RM79 6.6.1)", 71));
}
if ((!f_is_operator_220(F->up, (*(P137)rt_nil_check((*F->res_355)))))) {
f_perror_295(F->up, cat_rt_gstr((*(P137)rt_nil_check((*F->res_355))), rt_g_lit(" is not an operator symbol (RM79 6.6.1)", 39)));
}
goto ret_;
}
f_expect_id_302(F->up, &(*F->res_355));
goto ret_;
ret_:

  return;
}

static void f_subprogram_358(struct f_greenc_1fr *up_, P171 *res_357) {
  struct f_subprogram_358fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_357 = res_357;
F->x_1523 = NULL;
F->line_1524 = f_cur_line_283(F->up);
F->is_proc_1525 = f_at_kw_285(F->up, rt_g_lit("PROCEDURE", 9));
f_skip_296(F->up);
if (F->is_proc_1525) {
F->x_1523 = f_nn_276(F->up, ((rt_int)44LL), F->line_1524);
} else {
F->x_1523 = f_nn_276(F->up, ((rt_int)45LL), F->line_1524);
}
f_designator_356(F->up, &(*(P171)rt_nil_check(F->x_1523)).name_);
if (((f_at_kw_285(F->up, rt_g_lit("IS", 2)) && (f_kind_at_291(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_293(F->up, ((rt_int)1LL)), rt_g_lit("NEW", 3)))) {
f_instantiation_1060(F->up, F->x_1523, &(*F->res_357));
goto ret_;
}
if (f_at_op_287(F->up, rt_g_lit("(", 1))) {
f_formal_part_354(F->up, &(*(P171)rt_nil_check(F->x_1523)).a_);
}
if (f_at_kw_285(F->up, rt_g_lit("RETURN", 6))) {
f_skip_296(F->up);
f_subtype_ind_336(F->up, &(*(P171)rt_nil_check(F->x_1523)).b_);
if (F->is_proc_1525) {
(*(P171)rt_nil_check(F->x_1523)).flag_ = ((rt_int)1LL);
}
} else if ((!F->is_proc_1525)) {
f_perror_295(F->up, rt_g_lit("a function needs a RETURN clause", 32));
}
if (f_at_op_287(F->up, rt_g_lit(";", 1))) {
f_skip_296(F->up);
(*(P171)rt_nil_check(F->x_1523)).ival_ = ((rt_int)1LL);
(*F->res_357) = F->x_1523;
goto ret_;
}
f_expect_kw_298(F->up, rt_g_lit("IS", 2));
if (f_at_kw_285(F->up, rt_g_lit("SEPARATE", 8))) {
f_perror_295(F->up, rt_g_lit("separate bodies are not handled", 31));
}
f_body_part_360(F->up, F->x_1523);
if ((f_at_kind_289(F->up, ((rt_int)1LL)) || f_at_kind_289(F->up, ((rt_int)6LL)))) {
if ((!eq_rt_gstr((*(P137)rt_nil_check((*(P107)rt_nil_check(({ A106 ix1526 = F->up->toks_109; ix1526.p[rt_index(F->up->tpos_111, ix1526.lo, ix1526.hi) - ix1526.lo]; }))).s_)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->x_1523)).name_))))) {
f_perror_295(F->up, cat_rt_gstr(rt_g_lit("the name after END does not match ", 34), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->x_1523)).name_))));
}
f_skip_296(F->up);
}
f_expect_op_300(F->up, rt_g_lit(";", 1));
(*F->res_357) = F->x_1523;
goto ret_;
ret_:

  return;
}

static void f_body_part_360(struct f_greenc_1fr *up_, P171 x_359) {
  struct f_body_part_360fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_359 = x_359;
f_decl_part_348(F->up, &(*(P171)rt_nil_check(F->x_359)).c_);
if (f_at_kw_285(F->up, rt_g_lit("BEGIN", 5))) {
f_skip_296(F->up);
F->up->saw_interface_185 = 0;
f_statements_367(F->up, &(*(P171)rt_nil_check(F->x_359)).d_);
if ((F->up->saw_interface_185 && ((*(P171)rt_nil_check(F->x_359)).d_ == NULL))) {
(*(P171)rt_nil_check(F->x_359)).tag_ = f_mk_205(F->up, rt_g_lit("INTERFACE", 9));
}
F->up->saw_interface_185 = 0;
}
if (f_at_kw_285(F->up, rt_g_lit("EXCEPTION", 9))) {
f_parse_handlers_362(F->up, &(*(P171)rt_nil_check(F->x_359)).e_);
}
f_expect_kw_298(F->up, rt_g_lit("END", 3));
ret_:

  return;
}

static void f_parse_handlers_362(struct f_greenc_1fr *up_, P171 *res_361) {
  struct f_parse_handlers_362fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_361 = res_361;
F->head_1527 = NULL;
F->tail_1528 = NULL;
F->h_1529 = NULL;
F->names_1530 = NULL;
F->ntail_1531 = NULL;
F->n_1532 = NULL;
f_expect_kw_298(F->up, rt_g_lit("EXCEPTION", 9));
while (f_at_kw_285(F->up, rt_g_lit("WHEN", 4))) {
f_skip_296(F->up);
F->h_1529 = f_nn_276(F->up, ((rt_int)62LL), f_cur_line_283(F->up));
F->names_1530 = NULL;
F->ntail_1531 = NULL;
for (;;) {
if (f_at_kw_285(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_296(F->up);
F->n_1532 = f_nn_276(F->up, ((rt_int)5LL), f_cur_line_283(F->up));
(*(P171)rt_nil_check(F->n_1532)).name_ = f_mk_205(F->up, rt_g_lit("OTHERS", 6));
} else {
f_name_node_304(F->up, &F->n_1532);
while (f_at_op_287(F->up, rt_g_lit(".", 1))) {
f_skip_296(F->up);
(*(P171)rt_nil_check(F->n_1532)).tag_ = (*(P171)rt_nil_check(F->n_1532)).name_;
f_expect_id_302(F->up, &(*(P171)rt_nil_check(F->n_1532)).name_);
}
L_end_1535: ;
}
f_append_280(F->up, &F->names_1530, &F->ntail_1531, F->n_1532);
if ((!f_at_op_287(F->up, rt_g_lit("|", 1)))) {
goto L_end_1534;
}
f_skip_296(F->up);
}
L_end_1534: ;
f_expect_op_300(F->up, rt_g_lit("=>", 2));
(*(P171)rt_nil_check(F->h_1529)).a_ = F->names_1530;
f_statements_367(F->up, &(*(P171)rt_nil_check(F->h_1529)).b_);
f_append_280(F->up, &F->head_1527, &F->tail_1528, F->h_1529);
}
L_end_1533: ;
(*F->res_361) = F->head_1527;
goto ret_;
ret_:

  return;
}

static void f_package_p_364(struct f_greenc_1fr *up_, P171 *res_363) {
  struct f_package_p_364fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_363 = res_363;
F->x_1536 = NULL;
F->line_1537 = f_cur_line_283(F->up);
f_expect_kw_298(F->up, rt_g_lit("PACKAGE", 7));
if (f_at_kw_285(F->up, rt_g_lit("BODY", 4))) {
f_skip_296(F->up);
F->x_1536 = f_nn_276(F->up, ((rt_int)49LL), F->line_1537);
f_expect_id_302(F->up, &(*(P171)rt_nil_check(F->x_1536)).name_);
f_expect_kw_298(F->up, rt_g_lit("IS", 2));
f_body_part_360(F->up, F->x_1536);
} else {
F->x_1536 = f_nn_276(F->up, ((rt_int)48LL), F->line_1537);
f_expect_id_302(F->up, &(*(P171)rt_nil_check(F->x_1536)).name_);
if (((f_at_kw_285(F->up, rt_g_lit("IS", 2)) && (f_kind_at_291(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_293(F->up, ((rt_int)1LL)), rt_g_lit("NEW", 3)))) {
f_instantiation_1060(F->up, F->x_1536, &(*F->res_363));
goto ret_;
}
f_expect_kw_298(F->up, rt_g_lit("IS", 2));
f_decl_part_348(F->up, &(*(P171)rt_nil_check(F->x_1536)).c_);
if (f_at_kw_285(F->up, rt_g_lit("PRIVATE", 7))) {
f_skip_296(F->up);
f_decl_part_348(F->up, &(*(P171)rt_nil_check(F->x_1536)).d_);
}
f_expect_kw_298(F->up, rt_g_lit("END", 3));
}
if (f_at_kind_289(F->up, ((rt_int)1LL))) {
f_skip_296(F->up);
}
f_expect_op_300(F->up, rt_g_lit(";", 1));
(*F->res_363) = F->x_1536;
goto ret_;
ret_:

  return;
}

static int f_at_statements_end_365(struct f_greenc_1fr *up_) {
  struct f_at_statements_end_365fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ((((((f_at_kw_285(F->up, rt_g_lit("END", 3)) || f_at_kw_285(F->up, rt_g_lit("ELSE", 4))) || f_at_kw_285(F->up, rt_g_lit("ELSIF", 5))) || f_at_kw_285(F->up, rt_g_lit("WHEN", 4))) || f_at_kw_285(F->up, rt_g_lit("EXCEPTION", 9))) || f_at_kw_285(F->up, rt_g_lit("OR", 2))) || f_at_kind_289(F->up, ((rt_int)0LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_statements_367(struct f_greenc_1fr *up_, P171 *res_366) {
  struct f_statements_367fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_366 = res_366;
F->head_1538 = NULL;
F->tail_1539 = NULL;
F->x_1540 = NULL;
while ((!f_at_statements_end_365(F->up))) {
if (f_at_kw_285(F->up, rt_g_lit("PRAGMA", 6))) {
f_pragma_p_342(F->up, &F->x_1540);
if (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->x_1540)).name_)), rt_g_lit("INTERFACE", 9))) {
F->up->saw_interface_185 = 1;
}
} else {
f_statement_369(F->up, &F->x_1540);
f_append_280(F->up, &F->head_1538, &F->tail_1539, F->x_1540);
}
}
L_end_1541: ;
(*F->res_366) = F->head_1538;
goto ret_;
ret_:

  return;
}

static void f_statement_369(struct f_greenc_1fr *up_, P171 *res_368) {
  struct f_statement_369fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_368 = res_368;
F->x_1542 = NULL;
F->t_1543 = NULL;
F->line_1544 = f_cur_line_283(F->up);
F->label_1545 = NULL;
if (f_at_op_287(F->up, rt_g_lit("<<", 2))) {
f_skip_296(F->up);
f_expect_id_302(F->up, &F->label_1545);
f_expect_op_300(F->up, rt_g_lit(">>", 2));
}
if (f_at_kw_285(F->up, rt_g_lit("NULL", 4))) {
f_skip_296(F->up);
f_expect_op_300(F->up, rt_g_lit(";", 1));
F->x_1542 = f_nn_276(F->up, ((rt_int)31LL), F->line_1544);
(*F->res_368) = F->x_1542;
goto ret_;
} else if (f_at_kw_285(F->up, rt_g_lit("IF", 2))) {
f_if_stmt_373(F->up, &F->x_1542);
(*F->res_368) = F->x_1542;
goto ret_;
} else if (f_at_kw_285(F->up, rt_g_lit("CASE", 4))) {
f_case_stmt_375(F->up, &F->x_1542);
(*F->res_368) = F->x_1542;
goto ret_;
} else if (((f_at_kw_285(F->up, rt_g_lit("FOR", 3)) || f_at_kw_285(F->up, rt_g_lit("WHILE", 5))) || f_at_kw_285(F->up, rt_g_lit("LOOP", 4)))) {
f_loop_stmt_377(F->up, &F->x_1542);
(*(P171)rt_nil_check(F->x_1542)).tag_ = F->label_1545;
if (f_at_kind_289(F->up, ((rt_int)1LL))) {
if (((F->label_1545 == NULL) || (!eq_rt_gstr((*(P137)rt_nil_check((*(P107)rt_nil_check(({ A106 ix1546 = F->up->toks_109; ix1546.p[rt_index(F->up->tpos_111, ix1546.lo, ix1546.hi) - ix1546.lo]; }))).s_)), (*(P137)rt_nil_check(F->label_1545)))))) {
f_perror_295(F->up, rt_g_lit("the name after END LOOP does not match the label", 48));
}
f_skip_296(F->up);
}
f_expect_op_300(F->up, rt_g_lit(";", 1));
(*F->res_368) = F->x_1542;
goto ret_;
} else if ((f_at_kw_285(F->up, rt_g_lit("DECLARE", 7)) || f_at_kw_285(F->up, rt_g_lit("BEGIN", 5)))) {
F->x_1542 = f_nn_276(F->up, ((rt_int)25LL), F->line_1544);
(*(P171)rt_nil_check(F->x_1542)).tag_ = F->label_1545;
if (f_at_kw_285(F->up, rt_g_lit("DECLARE", 7))) {
f_skip_296(F->up);
f_decl_part_348(F->up, &(*(P171)rt_nil_check(F->x_1542)).a_);
}
f_expect_kw_298(F->up, rt_g_lit("BEGIN", 5));
f_statements_367(F->up, &(*(P171)rt_nil_check(F->x_1542)).b_);
if (f_at_kw_285(F->up, rt_g_lit("EXCEPTION", 9))) {
f_parse_handlers_362(F->up, &(*(P171)rt_nil_check(F->x_1542)).c_);
}
f_expect_kw_298(F->up, rt_g_lit("END", 3));
if (f_at_kind_289(F->up, ((rt_int)1LL))) {
f_skip_296(F->up);
}
f_expect_op_300(F->up, rt_g_lit(";", 1));
(*F->res_368) = F->x_1542;
goto ret_;
} else if (f_at_kw_285(F->up, rt_g_lit("EXIT", 4))) {
f_skip_296(F->up);
F->x_1542 = f_nn_276(F->up, ((rt_int)26LL), F->line_1544);
if (f_at_kind_289(F->up, ((rt_int)1LL))) {
f_expect_id_302(F->up, &(*(P171)rt_nil_check(F->x_1542)).name_);
}
if (f_at_kw_285(F->up, rt_g_lit("WHEN", 4))) {
f_skip_296(F->up);
f_expr_313(F->up, &(*(P171)rt_nil_check(F->x_1542)).a_);
}
f_expect_op_300(F->up, rt_g_lit(";", 1));
(*F->res_368) = F->x_1542;
goto ret_;
} else if (f_at_kw_285(F->up, rt_g_lit("RETURN", 6))) {
f_skip_296(F->up);
F->x_1542 = f_nn_276(F->up, ((rt_int)27LL), F->line_1544);
if ((!f_at_op_287(F->up, rt_g_lit(";", 1)))) {
f_expr_313(F->up, &(*(P171)rt_nil_check(F->x_1542)).a_);
}
f_expect_op_300(F->up, rt_g_lit(";", 1));
(*F->res_368) = F->x_1542;
goto ret_;
} else if (f_at_kw_285(F->up, rt_g_lit("RAISE", 5))) {
f_skip_296(F->up);
if (f_at_op_287(F->up, rt_g_lit(";", 1))) {
f_skip_296(F->up);
F->x_1542 = f_nn_276(F->up, ((rt_int)29LL), F->line_1544);
(*F->res_368) = F->x_1542;
goto ret_;
}
F->x_1542 = f_nn_276(F->up, ((rt_int)28LL), F->line_1544);
f_expect_id_302(F->up, &(*(P171)rt_nil_check(F->x_1542)).name_);
if (f_at_op_287(F->up, rt_g_lit("(", 1))) {
f_skip_296(F->up);
f_expr_313(F->up, &(*(P171)rt_nil_check(F->x_1542)).a_);
f_expect_op_300(F->up, rt_g_lit(")", 1));
}
while (f_at_op_287(F->up, rt_g_lit(".", 1))) {
f_skip_296(F->up);
(*(P171)rt_nil_check(F->x_1542)).tag_ = (*(P171)rt_nil_check(F->x_1542)).name_;
f_expect_id_302(F->up, &(*(P171)rt_nil_check(F->x_1542)).name_);
}
L_end_1547: ;
f_expect_op_300(F->up, rt_g_lit(";", 1));
(*F->res_368) = F->x_1542;
goto ret_;
} else if (f_at_kw_285(F->up, rt_g_lit("ASSERT", 6))) {
f_skip_296(F->up);
F->x_1542 = f_nn_276(F->up, ((rt_int)30LL), F->line_1544);
f_expr_313(F->up, &(*(P171)rt_nil_check(F->x_1542)).a_);
f_expect_op_300(F->up, rt_g_lit(";", 1));
(*F->res_368) = F->x_1542;
goto ret_;
} else if (f_at_kw_285(F->up, rt_g_lit("GOTO", 4))) {
f_perror_295(F->up, rt_g_lit("goto is not handled", 19));
}
f_task_statement_371(F->up, &F->x_1542);
if ((F->x_1542 != NULL)) {
(*F->res_368) = F->x_1542;
goto ret_;
}
f_name_p_330(F->up, &F->t_1543);
if (f_at_op_287(F->up, rt_g_lit(":=", 2))) {
f_skip_296(F->up);
F->x_1542 = f_nn_276(F->up, ((rt_int)20LL), F->line_1544);
(*(P171)rt_nil_check(F->x_1542)).a_ = F->t_1543;
f_expr_313(F->up, &(*(P171)rt_nil_check(F->x_1542)).b_);
} else {
F->x_1542 = f_nn_276(F->up, ((rt_int)21LL), F->line_1544);
(*(P171)rt_nil_check(F->x_1542)).a_ = F->t_1543;
}
f_expect_op_300(F->up, rt_g_lit(";", 1));
(*F->res_368) = F->x_1542;
goto ret_;
ret_:

  return;
}

static void f_task_statement_371(struct f_greenc_1fr *up_, P171 *res_370) {
  struct f_task_statement_371fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_370 = res_370;
f_parse_task_statement_937(F->up, &(*F->res_370));
ret_:

  return;
}

static void f_if_stmt_373(struct f_greenc_1fr *up_, P171 *res_372) {
  struct f_if_stmt_373fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_372 = res_372;
F->x_1548 = NULL;
F->arm_1549 = NULL;
F->head_1550 = NULL;
F->tail_1551 = NULL;
F->go_1552 = 1;
F->x_1548 = f_nn_276(F->up, ((rt_int)22LL), f_cur_line_283(F->up));
f_skip_296(F->up);
F->arm_1549 = f_nn_276(F->up, ((rt_int)60LL), f_cur_line_283(F->up));
f_expr_313(F->up, &(*(P171)rt_nil_check(F->arm_1549)).a_);
f_expect_kw_298(F->up, rt_g_lit("THEN", 4));
f_statements_367(F->up, &(*(P171)rt_nil_check(F->arm_1549)).b_);
f_append_280(F->up, &F->head_1550, &F->tail_1551, F->arm_1549);
while (F->go_1552) {
if (f_at_kw_285(F->up, rt_g_lit("ELSIF", 5))) {
f_skip_296(F->up);
F->arm_1549 = f_nn_276(F->up, ((rt_int)60LL), f_cur_line_283(F->up));
f_expr_313(F->up, &(*(P171)rt_nil_check(F->arm_1549)).a_);
f_expect_kw_298(F->up, rt_g_lit("THEN", 4));
f_statements_367(F->up, &(*(P171)rt_nil_check(F->arm_1549)).b_);
f_append_280(F->up, &F->head_1550, &F->tail_1551, F->arm_1549);
} else if (f_at_kw_285(F->up, rt_g_lit("ELSE", 4))) {
f_skip_296(F->up);
(*(P171)rt_nil_check(F->x_1548)).flag_ = ((rt_int)1LL);
f_statements_367(F->up, &(*(P171)rt_nil_check(F->x_1548)).b_);
} else {
F->go_1552 = 0;
}
}
L_end_1553: ;
f_expect_kw_298(F->up, rt_g_lit("END", 3));
f_expect_kw_298(F->up, rt_g_lit("IF", 2));
f_expect_op_300(F->up, rt_g_lit(";", 1));
(*(P171)rt_nil_check(F->x_1548)).a_ = F->head_1550;
(*F->res_372) = F->x_1548;
goto ret_;
ret_:

  return;
}

static void f_case_stmt_375(struct f_greenc_1fr *up_, P171 *res_374) {
  struct f_case_stmt_375fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_374 = res_374;
F->x_1554 = NULL;
F->arm_1555 = NULL;
F->head_1556 = NULL;
F->tail_1557 = NULL;
F->labs_1558 = NULL;
F->ltail_1559 = NULL;
F->l_1560 = NULL;
F->x_1554 = f_nn_276(F->up, ((rt_int)23LL), f_cur_line_283(F->up));
f_skip_296(F->up);
f_expr_313(F->up, &(*(P171)rt_nil_check(F->x_1554)).a_);
f_expect_kw_298(F->up, rt_g_lit("OF", 2));
while (f_at_kw_285(F->up, rt_g_lit("WHEN", 4))) {
f_skip_296(F->up);
F->labs_1558 = NULL;
F->ltail_1559 = NULL;
F->others_arm_1561 = 0;
for (;;) {
if (f_at_kw_285(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_296(F->up);
F->others_arm_1561 = 1;
} else {
F->l_1560 = f_nn_276(F->up, ((rt_int)61LL), f_cur_line_283(F->up));
f_simple_expr_319(F->up, &(*(P171)rt_nil_check(F->l_1560)).a_);
if (f_at_op_287(F->up, rt_g_lit("..", 2))) {
f_skip_296(F->up);
f_simple_expr_319(F->up, &(*(P171)rt_nil_check(F->l_1560)).b_);
}
f_append_280(F->up, &F->labs_1558, &F->ltail_1559, F->l_1560);
}
if ((!f_at_op_287(F->up, rt_g_lit("|", 1)))) {
goto L_end_1563;
}
f_skip_296(F->up);
}
L_end_1563: ;
f_expect_op_300(F->up, rt_g_lit("=>", 2));
if (F->others_arm_1561) {
(*(P171)rt_nil_check(F->x_1554)).flag_ = ((rt_int)1LL);
f_statements_367(F->up, &(*(P171)rt_nil_check(F->x_1554)).c_);
} else {
F->arm_1555 = f_nn_276(F->up, ((rt_int)60LL), f_cur_line_283(F->up));
(*(P171)rt_nil_check(F->arm_1555)).a_ = F->labs_1558;
f_statements_367(F->up, &(*(P171)rt_nil_check(F->arm_1555)).b_);
f_append_280(F->up, &F->head_1556, &F->tail_1557, F->arm_1555);
}
}
L_end_1562: ;
f_expect_kw_298(F->up, rt_g_lit("END", 3));
f_expect_kw_298(F->up, rt_g_lit("CASE", 4));
f_expect_op_300(F->up, rt_g_lit(";", 1));
(*(P171)rt_nil_check(F->x_1554)).b_ = F->head_1556;
(*F->res_374) = F->x_1554;
goto ret_;
ret_:

  return;
}

static void f_loop_stmt_377(struct f_greenc_1fr *up_, P171 *res_376) {
  struct f_loop_stmt_377fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_376 = res_376;
F->x_1564 = NULL;
F->r_1565 = NULL;
F->line_1566 = f_cur_line_283(F->up);
F->x_1564 = f_nn_276(F->up, ((rt_int)24LL), F->line_1566);
if (f_at_kw_285(F->up, rt_g_lit("FOR", 3))) {
f_skip_296(F->up);
(*(P171)rt_nil_check(F->x_1564)).flag_ = ((rt_int)2LL);
f_expect_id_302(F->up, &(*(P171)rt_nil_check(F->x_1564)).name_);
f_expect_kw_298(F->up, rt_g_lit("IN", 2));
if (f_at_kw_285(F->up, rt_g_lit("REVERSE", 7))) {
f_skip_296(F->up);
(*(P171)rt_nil_check(F->x_1564)).ival_ = ((rt_int)1LL);
}
if (((f_at_kind_289(F->up, ((rt_int)1LL)) && (f_kind_at_291(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_293(F->up, ((rt_int)1LL)), rt_g_lit("LOOP", 4)))) {
f_subtype_ind_336(F->up, &(*(P171)rt_nil_check(F->x_1564)).a_);
} else {
f_discrete_range_p_334(F->up, &(*(P171)rt_nil_check(F->x_1564)).a_);
}
} else if (f_at_kw_285(F->up, rt_g_lit("WHILE", 5))) {
f_skip_296(F->up);
(*(P171)rt_nil_check(F->x_1564)).flag_ = ((rt_int)1LL);
f_expr_313(F->up, &(*(P171)rt_nil_check(F->x_1564)).a_);
}
f_expect_kw_298(F->up, rt_g_lit("LOOP", 4));
f_statements_367(F->up, &(*(P171)rt_nil_check(F->x_1564)).b_);
f_expect_kw_298(F->up, rt_g_lit("END", 3));
f_expect_kw_298(F->up, rt_g_lit("LOOP", 4));
(*F->res_376) = F->x_1564;
goto ret_;
ret_:

  return;
}

static void f_compilation_379(struct f_greenc_1fr *up_, P171 *res_378) {
  struct f_compilation_379fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_378 = res_378;
F->head_1567 = NULL;
F->tail_1568 = NULL;
F->x_1569 = NULL;
while ((!f_at_kind_289(F->up, ((rt_int)0LL)))) {
if (f_at_kw_285(F->up, rt_g_lit("PRAGMA", 6))) {
f_pragma_p_342(F->up, &F->x_1569);
} else {
if (f_at_kw_285(F->up, rt_g_lit("RESTRICTED", 10))) {
f_skip_visibility_345(F->up);
}
if ((f_at_kw_285(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_285(F->up, rt_g_lit("FUNCTION", 8)))) {
f_subprogram_358(F->up, &F->x_1569);
} else if (f_at_kw_285(F->up, rt_g_lit("PACKAGE", 7))) {
f_package_p_364(F->up, &F->x_1569);
} else if (f_at_kw_285(F->up, rt_g_lit("TASK", 4))) {
f_task_p_927(F->up, &F->x_1569);
} else if (f_at_kw_285(F->up, rt_g_lit("GENERIC", 7))) {
f_generic_p_1057(F->up, &F->x_1569);
} else {
f_perror_295(F->up, rt_g_lit("a compilation unit is a subprogram, a package or a task", 55));
}
f_append_280(F->up, &F->head_1567, &F->tail_1568, F->x_1569);
}
}
L_end_1570: ;
(*F->res_378) = F->head_1567;
goto ret_;
ret_:

  return;
}

static rt_int f_hash_381(struct f_greenc_1fr *up_, rt_gstr s_380) {
  struct f_hash_381fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_380 = cp_rt_gstr(s_380);
F->h_1571 = ((rt_int)0LL);
{ rt_int lo1575 = ((rt_int)1LL), hi1576 = ({ rt_gstr at1573 = F->s_380; at1573.hi >= at1573.lo ? at1573.hi - at1573.lo + 1 : (rt_int)0; });
for (rt_int it1577 = lo1575; it1577 <= hi1576; it1577++) {
F->i_1574 = it1577;
F->h_1571 = rt_rem(rt_add(rt_mul(F->h_1571, ((rt_int)31LL)), ((rt_int)(({ rt_gstr ix1578 = F->s_380; ix1578.p[rt_index(F->i_1574, ix1578.lo, ix1578.hi) - ix1578.lo]; })) + 1)), ((rt_int)4093LL));
}
}
L_end_1572: ;
F->result_ = F->h_1571;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P114 f_lookup_383(struct f_greenc_1fr *up_, rt_gstr name_382) {
  struct f_lookup_383fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_382 = cp_rt_gstr(name_382);
F->y_1579 = NULL;
F->y_1579 = ({ A113 ix1580 = F->up->table_116; ix1580.p[rt_index(f_hash_381(F->up, F->name_382), ix1580.lo, ix1580.hi) - ix1580.lo]; });
while ((F->y_1579 != NULL)) {
if (eq_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1579)).name_)), F->name_382)) {
F->result_ = F->y_1579;
goto ret_;
}
F->y_1579 = (*(P114)rt_nil_check(F->y_1579)).chain_;
}
L_end_1581: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_task_386(struct f_greenc_1fr *up_, P114 a_384, P114 b_385) {
  struct f_same_task_386fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_384 = a_384;
F->b_385 = b_385;
if ((F->a_384 == F->b_385)) {
F->result_ = 1;
goto ret_;
} else if (((F->a_384 == NULL) || (F->b_385 == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->a_384)).cname_)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->b_385)).cname_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P114 f_lookup_entry_389(struct f_greenc_1fr *up_, rt_gstr name_387, P114 owner_388) {
  struct f_lookup_entry_389fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_387 = cp_rt_gstr(name_387);
F->owner_388 = owner_388;
F->y_1582 = NULL;
F->y_1582 = ({ A113 ix1583 = F->up->table_116; ix1583.p[rt_index(f_hash_381(F->up, F->name_387), ix1583.lo, ix1583.hi) - ix1583.lo]; });
while ((F->y_1582 != NULL)) {
if (((eq_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1582)).name_)), F->name_387) && ((*(P114)rt_nil_check(F->y_1582)).kind_ == ((rt_int)10LL))) && f_same_task_386(F->up, (*(P114)rt_nil_check(F->y_1582)).members_, F->owner_388))) {
F->result_ = F->y_1582;
goto ret_;
}
F->y_1582 = (*(P114)rt_nil_check(F->y_1582)).chain_;
}
L_end_1584: ;
F->result_ = f_lookup_383(F->up, F->name_387);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P114 f_lookup_decl_391(struct f_greenc_1fr *up_, P171 d_390) {
  struct f_lookup_decl_391fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_390 = d_390;
F->y_1585 = NULL;
F->y_1585 = ({ A113 ix1586 = F->up->table_116; ix1586.p[rt_index(f_hash_381(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->d_390)).name_))), ix1586.lo, ix1586.hi) - ix1586.lo]; });
while ((F->y_1585 != NULL)) {
if (((*(P114)rt_nil_check(F->y_1585)).decl_ == F->d_390)) {
F->result_ = F->y_1585;
goto ret_;
}
F->y_1585 = (*(P114)rt_nil_check(F->y_1585)).chain_;
}
L_end_1587: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_overloadable_393(struct f_greenc_1fr *up_, P114 y_392) {
  struct f_overloadable_393fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_392 = y_392;
F->result_ = (((((*(P114)rt_nil_check(F->y_392)).kind_ == ((rt_int)3LL)) || ((*(P114)rt_nil_check(F->y_392)).kind_ == ((rt_int)4LL))) || ((*(P114)rt_nil_check(F->y_392)).kind_ == ((rt_int)7LL))) || ((*(P114)rt_nil_check(F->y_392)).kind_ == ((rt_int)10LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_396(struct f_greenc_1fr *up_, P119 a_394, P119 b_395) {
  struct f_same_396fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_394 = a_394;
F->b_395 = b_395;
F->result_ = (F->a_394 == F->b_395);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P119 f_root_398(struct f_greenc_1fr *up_, P119 t_397) {
  struct f_root_398fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_397 = t_397;
F->r_1588 = NULL;
F->r_1588 = F->t_397;
while (((*(P119)rt_nil_check(F->r_1588)).parent_ != NULL)) {
F->r_1588 = (*(P119)rt_nil_check(F->r_1588)).parent_;
}
L_end_1589: ;
F->result_ = F->r_1588;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_derived_from_401(struct f_greenc_1fr *up_, P119 a_399, P119 b_400) {
  struct f_derived_from_401fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_399 = a_399;
F->b_400 = b_400;
F->r_1590 = NULL;
F->r_1590 = F->a_399;
while ((F->r_1590 != NULL)) {
if ((F->r_1590 == F->b_400)) {
F->result_ = 1;
goto ret_;
}
F->r_1590 = (*(P119)rt_nil_check(F->r_1590)).parent_;
}
L_end_1591: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_numeric_403(struct f_greenc_1fr *up_, P119 t_402) {
  struct f_is_numeric_403fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_402 = t_402;
F->result_ = ((((*(P119)rt_nil_check(F->t_402)).kind_ == ((rt_int)1LL)) || ((*(P119)rt_nil_check(F->t_402)).kind_ == ((rt_int)3LL))) || ((*(P119)rt_nil_check(F->t_402)).kind_ == ((rt_int)16LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_discrete_405(struct f_greenc_1fr *up_, P119 t_404) {
  struct f_is_discrete_405fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_404 = t_404;
F->result_ = (((((*(P119)rt_nil_check(F->t_404)).kind_ == ((rt_int)1LL)) || ((*(P119)rt_nil_check(F->t_404)).kind_ == ((rt_int)4LL))) || ((*(P119)rt_nil_check(F->t_404)).kind_ == ((rt_int)11LL))) || ((*(P119)rt_nil_check(F->t_404)).kind_ == ((rt_int)2LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_signature_408(struct f_greenc_1fr *up_, P1592 a_406, P1592 b_407) {
  struct f_same_signature_408fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_406 = a_406;
F->b_407 = b_407;
F->x_1594 = NULL;
F->x_1594 = F->a_406;
F->y_1595 = NULL;
F->y_1595 = F->b_407;
while (((F->x_1594 != NULL) && (F->y_1595 != NULL))) {
if (((!f_same_396(F->up, (*(P1592)rt_nil_check(F->x_1594)).t_, (*(P1592)rt_nil_check(F->y_1595)).t_)) || ((*(P1592)rt_nil_check(F->x_1594)).mode_ != (*(P1592)rt_nil_check(F->y_1595)).mode_))) {
F->result_ = 0;
goto ret_;
}
F->x_1594 = (*(P1592)rt_nil_check(F->x_1594)).next_;
F->y_1595 = (*(P1592)rt_nil_check(F->y_1595)).next_;
}
L_end_1596: ;
F->result_ = ((F->x_1594 == NULL) && (F->y_1595 == NULL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_define_411(struct f_greenc_1fr *up_, P114 y_409, rt_int line_410) {
  struct f_define_411fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_409 = y_409;
F->line_410 = line_410;
F->h_1597 = f_hash_381(F->up, (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_409)).name_)));
F->z_1598 = NULL;
F->z_1598 = ({ A113 ix1599 = F->up->table_116; ix1599.p[rt_index(F->h_1597, ix1599.lo, ix1599.hi) - ix1599.lo]; });
while ((F->z_1598 != NULL)) {
if (((((*(P114)rt_nil_check(F->z_1598)).depth_ == F->up->depth_117) && eq_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->z_1598)).name_)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_409)).name_)))) && (!((f_overloadable_393(F->up, F->y_409) && f_overloadable_393(F->up, F->z_1598)) && ((((*(P114)rt_nil_check(F->y_409)).kind_ != (*(P114)rt_nil_check(F->z_1598)).kind_) || (!f_same_signature_408(F->up, (*(P114)rt_nil_check(F->y_409)).params_, (*(P114)rt_nil_check(F->z_1598)).params_))) || (!f_same_396(F->up, (*(P114)rt_nil_check(F->y_409)).result_, (*(P114)rt_nil_check(F->z_1598)).result_))))))) {
f_fail_226(F->up, F->line_410, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_409)).name_)), rt_g_lit(" is already declared in this declarative part", 45)));
}
F->z_1598 = (*(P114)rt_nil_check(F->z_1598)).chain_;
}
L_end_1600: ;
(*(P114)rt_nil_check(F->y_409)).depth_ = F->up->depth_117;
(*(P114)rt_nil_check(F->y_409)).chain_ = ({ A113 ix1601 = F->up->table_116; ix1601.p[rt_index(F->h_1597, ix1601.lo, ix1601.hi) - ix1601.lo]; });
(*({ A113 *ix1602 = &(F->up->table_116); &ix1602->p[rt_index(F->h_1597, ix1602->lo, ix1602->hi) - ix1602->lo]; })) = F->y_409;
(*(P114)rt_nil_check(F->y_409)).stack_ = F->up->scope_stack_118;
F->up->scope_stack_118 = F->y_409;
ret_:

  return;
}

static void f_open_scope_412(struct f_greenc_1fr *up_) {
  struct f_open_scope_412fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->depth_117 = rt_add(F->up->depth_117, ((rt_int)1LL));
ret_:

  return;
}

static void f_close_scope_413(struct f_greenc_1fr *up_) {
  struct f_close_scope_413fr *F = rt_alloc(sizeof *F);
F->up = up_;
while (((F->up->scope_stack_118 != NULL) && ((*(P114)rt_nil_check(F->up->scope_stack_118)).depth_ == F->up->depth_117))) {
(*({ A113 *ix1604 = &(F->up->table_116); &ix1604->p[rt_index(f_hash_381(F->up, (*(P137)rt_nil_check((*(P114)rt_nil_check(F->up->scope_stack_118)).name_))), ix1604->lo, ix1604->hi) - ix1604->lo]; })) = (*(P114)rt_nil_check(F->up->scope_stack_118)).chain_;
F->up->scope_stack_118 = (*(P114)rt_nil_check(F->up->scope_stack_118)).stack_;
}
L_end_1603: ;
F->up->depth_117 = rt_sub(F->up->depth_117, ((rt_int)1LL));
ret_:

  return;
}

static P114 f_new_sym_416(struct f_greenc_1fr *up_, rt_int kind_414, P137 name_415) {
  struct f_new_sym_416fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_414 = kind_414;
F->name_415 = name_415;
F->result_ = ({ R115 *cell1605 = rt_alloc(sizeof(R115)); *cell1605 = cp_R115(({ R115 ag1606; ag1606.kind_ = F->kind_414; ag1606.name_ = F->name_415; ag1606.t_ = NULL; ag1606.c_ = NULL; ag1606.access_path_ = NULL; ag1606.cname_ = NULL; ag1606.ro_ = 0; ag1606.mvalue_ = ((rt_int)0LL); ag1606.hasmv_ = 0; ag1606.decl_ = NULL; ag1606.params_ = NULL; ag1606.result_ = NULL; ag1606.depth_ = ((rt_int)0LL); ag1606.level_ = ((rt_int)0LL); ag1606.byref_ = 0; ag1606.vrp_ = 0; ag1606.hidden_ = 0; ag1606.from_use_ = 0; ag1606.members_ = NULL; ag1606.mnext_ = NULL; ag1606.chain_ = NULL; ag1606.stack_ = NULL; ag1606.flags_ = ((rt_int)0LL); ag1606; })); (P114)cell1605; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P119 f_new_typ_418(struct f_greenc_1fr *up_, rt_int kind_417) {
  struct f_new_typ_418fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_417 = kind_417;
F->result_ = ({ R120 *cell1609 = rt_alloc(sizeof(R120)); *cell1609 = cp_R120(({ R120 ag1610; ag1610.kind_ = F->kind_417; ag1610.name_ = NULL; ag1610.lits_ = NULL; ag1610.elem_ = NULL; ag1610.idx_ = NULL; ag1610.elemcons_ = NULL; ag1610.tcons_ = NULL; ag1610.fields_ = NULL; ag1610.target_ = NULL; ag1610.decl_ = NULL; ag1610.cname_ = NULL; ag1610.forward_ = 0; ag1610.defined_ = 0; ag1610.priv_ = 0; ag1610.next_ = NULL; ag1610.idx2_ = NULL; ag1610.littab_ = NULL; ag1610.parent_ = NULL; ag1610.ndigits_ = ((rt_int)0LL); ag1610.fdelta_ = NULL; ag1610.fsmall_ = NULL; ag1610.dims_ = ((rt_int)0LL); ag1610.is_restricted_ = 0; ag1610; })); (P119)cell1609; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P175 f_new_cons_419(struct f_greenc_1fr *up_) {
  struct f_new_cons_419fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ({ R176 *cell1613 = rt_alloc(sizeof(R176)); *cell1613 = cp_R176(({ R176 ag1614; ag1614.lo_ = NULL; ag1614.hi_ = NULL; ag1614.slen_ = NULL; ag1614.mlo_ = ((rt_int)0LL); ag1614.mhi_ = ((rt_int)0LL); ag1614.hasm_ = 0; ag1614.lo2_ = NULL; ag1614.hi2_ = NULL; ag1614.acc_ = NULL; ag1614.inner_ = NULL; ag1614.dv_ = NULL; ag1614; })); (P175)cell1613; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_kind_name_421(struct f_greenc_1fr *up_, P119 t_420) {
  struct f_kind_name_421fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_420 = t_420;
if (((*(P119)rt_nil_check(F->t_420)).name_ != NULL)) {
F->result_ = (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_420)).name_));
goto ret_;
}
{ rt_int sel1615 = (*(P119)rt_nil_check(F->t_420)).kind_;
if (0 || sel1615 == ((rt_int)1LL)) {
F->result_ = rt_g_lit("INTEGER", 7);
goto ret_;
} else if (0 || sel1615 == ((rt_int)2LL)) {
F->result_ = rt_g_lit("BOOLEAN", 7);
goto ret_;
} else if (0 || sel1615 == ((rt_int)3LL)) {
F->result_ = rt_g_lit("FLOAT", 5);
goto ret_;
} else if (0 || sel1615 == ((rt_int)5LL)) {
F->result_ = rt_g_lit("STRING", 6);
goto ret_;
} else if (0 || sel1615 == ((rt_int)10LL)) {
F->result_ = rt_g_lit("null", 4);
goto ret_;
} else if (0 || sel1615 == ((rt_int)11LL)) {
F->result_ = rt_g_lit("CHARACTER", 9);
goto ret_;
} else if (0 || sel1615 == ((rt_int)16LL)) {
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

static void f_check_type_425(struct f_greenc_1fr *up_, P119 got_422, P119 want_423, rt_int line_424) {
  struct f_check_type_425fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->got_422 = got_422;
F->want_423 = want_423;
F->line_424 = line_424;
if ((F->want_423 == NULL)) {
goto ret_;
}
if ((((*(P119)rt_nil_check(F->got_422)).kind_ == ((rt_int)10LL)) && ((*(P119)rt_nil_check(F->want_423)).kind_ == ((rt_int)8LL)))) {
goto ret_;
}
if ((!f_same_396(F->up, F->got_422, F->want_423))) {
f_fail_226(F->up, F->line_424, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("type mismatch: ", 15), f_kind_name_421(F->up, F->got_422)), rt_g_lit(" where ", 7)), f_kind_name_421(F->up, F->want_423)), rt_g_lit(" is required", 12)));
}
ret_:

  return;
}

static rt_int f_field_count_427(struct f_greenc_1fr *up_, P119 t_426) {
  struct f_field_count_427fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_426 = t_426;
F->n_1616 = ((rt_int)0LL);
F->f_1617 = NULL;
F->f_1617 = (*(P119)rt_nil_check(F->t_426)).fields_;
while ((F->f_1617 != NULL)) {
F->n_1616 = rt_add(F->n_1616, ((rt_int)1LL));
F->f_1617 = (*(P1607)rt_nil_check(F->f_1617)).next_;
}
L_end_1618: ;
F->result_ = F->n_1616;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_ctype_430(struct f_greenc_1fr *up_, P119 t_428, P137 *r_429) {
  struct f_ctype_430fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_428 = t_428;
F->r_429 = r_429;
F->s_1619 = NULL;
{ rt_int sel1620 = (*(P119)rt_nil_check(F->t_428)).kind_;
if (0 || sel1620 == ((rt_int)1LL)) {
(*F->r_429) = f_mk_205(F->up, rt_g_lit("rt_int", 6));
} else if (0 || sel1620 == ((rt_int)2LL) || sel1620 == ((rt_int)4LL) || sel1620 == ((rt_int)11LL)) {
(*F->r_429) = f_mk_205(F->up, rt_g_lit("int", 3));
} else if (0 || sel1620 == ((rt_int)3LL) || sel1620 == ((rt_int)16LL)) {
(*F->r_429) = f_mk_205(F->up, rt_g_lit("double", 6));
} else if (0 || sel1620 == ((rt_int)5LL)) {
(*F->r_429) = f_mk_205(F->up, rt_g_lit("rstr", 4));
} else if (0 || sel1620 == ((rt_int)9LL)) {
(*F->r_429) = f_mk_205(F->up, rt_g_lit("void", 4));
} else if (0 || sel1620 == ((rt_int)13LL)) {
(*F->r_429) = f_mk_205(F->up, rt_g_lit("rt_act", 6));
} else if (0 || sel1620 == ((rt_int)14LL)) {
(*F->r_429) = f_mk_205(F->up, rt_g_lit("rt_taskdecl", 11));
} else if (0 || sel1620 == ((rt_int)15LL)) {
(*F->r_429) = f_mk_205(F->up, rt_g_lit("rt_entry", 8));
} else {
if (((*(P119)rt_nil_check(F->t_428)).cname_ == NULL)) {
f_declare_ctype_435(F->up, F->t_428);
} else if (((((*(P119)rt_nil_check(F->t_428)).kind_ == ((rt_int)7LL)) && (*(P119)rt_nil_check(F->t_428)).forward_) && (!(*(P119)rt_nil_check(F->t_428)).defined_))) {
(*(P119)rt_nil_check(F->t_428)).defined_ = 1;
f_field_decls_433(F->up, F->t_428, &F->s_1619);
f_put_to_230(F->up, F->up->out_types_125, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_428)).cname_))), rt_g_lit(" {", 2)), (*(P137)rt_nil_check(F->s_1619))), rt_g_lit(" };", 3)));
}
(*F->r_429) = (*(P119)rt_nil_check(F->t_428)).cname_;
}
}
ret_:

  return;
}

static void f_field_decls_433(struct f_greenc_1fr *up_, P119 t_431, P137 *r_432) {
  struct f_field_decls_433fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_431 = t_431;
F->r_432 = r_432;
F->f_1621 = NULL;
F->f_1621 = (*(P119)rt_nil_check(F->t_431)).fields_;
F->s_1622 = NULL;
F->ct_1623 = NULL;
F->s_1622 = f_mk_205(F->up, rt_g_lit(" int dummy_;", 12));
while ((F->f_1621 != NULL)) {
f_ctype_430(F->up, (*(P1607)rt_nil_check(F->f_1621)).t_, &F->ct_1623);
F->s_1622 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->s_1622)), one_rt_gstr(32)), (*(P137)rt_nil_check(F->ct_1623))), one_rt_gstr(32)), f_c_field_222(F->up, (*(P137)rt_nil_check((*(P1607)rt_nil_check(F->f_1621)).name_)))), one_rt_gstr(59)));
F->f_1621 = (*(P1607)rt_nil_check(F->f_1621)).next_;
}
L_end_1624: ;
(*F->r_432) = F->s_1622;
ret_:

  return;
}

static void f_declare_ctype_435(struct f_greenc_1fr *up_, P119 t_434) {
  struct f_declare_ctype_435fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_434 = t_434;
F->ct_1625 = NULL;
F->s_1626 = NULL;
F->target_1627 = NULL;
if (((*(P119)rt_nil_check(F->t_434)).kind_ == ((rt_int)8LL))) {
f_finish_ptr_536(F->up, F->t_434);
}
if (((*(P119)rt_nil_check(F->t_434)).kind_ == ((rt_int)6LL))) {
f_new_name_208(F->up, rt_g_lit("A", 1), &(*(P119)rt_nil_check(F->t_434)).cname_);
} else if (((*(P119)rt_nil_check(F->t_434)).kind_ == ((rt_int)7LL))) {
f_new_name_208(F->up, rt_g_lit("R", 1), &(*(P119)rt_nil_check(F->t_434)).cname_);
} else {
f_new_name_208(F->up, rt_g_lit("P", 1), &(*(P119)rt_nil_check(F->t_434)).cname_);
}
(*(P119)rt_nil_check(F->t_434)).next_ = F->up->all_types_121;
F->up->all_types_121 = F->t_434;
if (((*(P119)rt_nil_check(F->t_434)).kind_ == ((rt_int)8LL))) {
F->target_1627 = (*(P119)rt_nil_check(F->t_434)).target_;
if ((F->target_1627 == NULL)) {
f_fail_226(F->up, ((rt_int)0LL), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the designated type of ", 23), f_kind_name_421(F->up, F->t_434)), rt_g_lit(" is never declared", 18)));
}
if (((*(P119)rt_nil_check(F->target_1627)).kind_ == ((rt_int)7LL))) {
if (((*(P119)rt_nil_check(F->target_1627)).cname_ == NULL)) {
f_new_name_208(F->up, rt_g_lit("R", 1), &(*(P119)rt_nil_check(F->target_1627)).cname_);
(*(P119)rt_nil_check(F->target_1627)).next_ = F->up->all_types_121;
F->up->all_types_121 = F->target_1627;
f_put_to_230(F->up, F->up->out_types_125, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->target_1627)).cname_))), one_rt_gstr(32)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->target_1627)).cname_))), one_rt_gstr(59)));
(*(P119)rt_nil_check(F->target_1627)).forward_ = 1;
}
f_put_to_230(F->up, F->up->out_types_125, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->target_1627)).cname_))), rt_g_lit(" *", 2)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_434)).cname_))), one_rt_gstr(59)));
} else {
f_ctype_430(F->up, F->target_1627, &F->ct_1625);
f_put_to_230(F->up, F->up->out_types_125, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef ", 8), (*(P137)rt_nil_check(F->ct_1625))), rt_g_lit(" *", 2)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_434)).cname_))), one_rt_gstr(59)));
}
} else if (((*(P119)rt_nil_check(F->t_434)).kind_ == ((rt_int)6LL))) {
f_elem_ctype_494(F->up, (*(P119)rt_nil_check(F->t_434)).elem_, &F->ct_1625);
f_put_to_230(F->up, F->up->out_types_125, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_434)).cname_))), one_rt_gstr(32)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_434)).cname_))), one_rt_gstr(59)));
f_put_to_230(F->up, F->up->out_types_125, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_434)).cname_))), rt_g_lit(" { rt_int lo, hi, lo2, hi2; ", 28)), (*(P137)rt_nil_check(F->ct_1625))), rt_g_lit(" *p; };", 7)));
} else {
f_put_to_230(F->up, F->up->out_types_125, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_434)).cname_))), one_rt_gstr(32)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_434)).cname_))), one_rt_gstr(59)));
(*(P119)rt_nil_check(F->t_434)).defined_ = 1;
f_field_decls_433(F->up, F->t_434, &F->s_1626);
f_put_to_230(F->up, F->up->out_types_125, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_434)).cname_))), rt_g_lit(" {", 2)), (*(P137)rt_nil_check(F->s_1626))), rt_g_lit(" };", 3)));
}
ret_:

  return;
}

static rt_int f_lit_index_438(struct f_greenc_1fr *up_, P171 lits_436, rt_gstr name_437) {
  struct f_lit_index_438fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lits_436 = lits_436;
F->name_437 = cp_rt_gstr(name_437);
F->i_1628 = ((rt_int)0LL);
F->l_1629 = NULL;
F->l_1629 = F->lits_436;
while ((F->l_1629 != NULL)) {
if (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->l_1629)).name_)), F->name_437)) {
F->result_ = F->i_1628;
goto ret_;
}
F->i_1628 = rt_add(F->i_1628, ((rt_int)1LL));
F->l_1629 = (*(P171)rt_nil_check(F->l_1629)).next_;
}
L_end_1630: ;
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_manifest_442(struct f_greenc_1fr *up_, P171 e_439, rt_int *v_440, int *ok_441) {
  struct f_manifest_442fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_439 = e_439;
F->v_440 = v_440;
F->ok_441 = ok_441;
F->y_1634 = NULL;
(*F->ok_441) = 0;
(*F->v_440) = ((rt_int)0LL);
if (((*(P171)rt_nil_check(F->e_439)).kind_ == ((rt_int)1LL))) {
(*F->ok_441) = 1;
(*F->v_440) = (*(P171)rt_nil_check(F->e_439)).ival_;
} else if (((*(P171)rt_nil_check(F->e_439)).kind_ == ((rt_int)15LL))) {
f_manifest_442(F->up, (*(P171)rt_nil_check(F->e_439)).a_, &(*F->v_440), &(*F->ok_441));
} else if ((((*(P171)rt_nil_check(F->e_439)).kind_ == ((rt_int)6LL)) && eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_439)).name_)), rt_g_lit("-", 1)))) {
f_manifest_442(F->up, (*(P171)rt_nil_check(F->e_439)).a_, &F->a_1631, &(*F->ok_441));
(*F->v_440) = rt_neg(F->a_1631);
} else if ((((*(P171)rt_nil_check(F->e_439)).kind_ == ((rt_int)7LL)) && ((eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_439)).name_)), rt_g_lit("+", 1)) || eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_439)).name_)), rt_g_lit("-", 1))) || eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_439)).name_)), rt_g_lit("*", 1))))) {
f_manifest_442(F->up, (*(P171)rt_nil_check(F->e_439)).a_, &F->a_1631, &(*F->ok_441));
f_manifest_442(F->up, (*(P171)rt_nil_check(F->e_439)).b_, &F->b_1632, &F->ok2_1633);
(*F->ok_441) = ((*F->ok_441) && F->ok2_1633);
if ((*F->ok_441)) {
if (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_439)).name_)), rt_g_lit("+", 1))) {
(*F->v_440) = rt_add(F->a_1631, F->b_1632);
} else if (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_439)).name_)), rt_g_lit("-", 1))) {
(*F->v_440) = rt_sub(F->a_1631, F->b_1632);
} else {
(*F->v_440) = rt_mul(F->a_1631, F->b_1632);
}
}
} else if (((*(P171)rt_nil_check(F->e_439)).kind_ == ((rt_int)5LL))) {
F->y_1634 = f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_439)).name_)));
if ((((F->y_1634 != NULL) && (((*(P114)rt_nil_check(F->y_1634)).kind_ == ((rt_int)2LL)) || ((*(P114)rt_nil_check(F->y_1634)).kind_ == ((rt_int)7LL)))) && (*(P114)rt_nil_check(F->y_1634)).hasmv_)) {
(*F->ok_441) = 1;
(*F->v_440) = (*(P114)rt_nil_check(F->y_1634)).mvalue_;
}
} else if (((((*(P171)rt_nil_check(F->e_439)).kind_ == ((rt_int)9LL)) && ((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_439)).a_)).kind_ == ((rt_int)5LL))) && f_is_package_876(F->up, (*(P171)rt_nil_check(F->e_439)).a_))) {
F->y_1634 = f_member_of_880(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_439)).a_)).name_)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_439)).name_)), (*(P171)rt_nil_check(F->e_439)).line_);
if ((((F->y_1634 != NULL) && (((*(P114)rt_nil_check(F->y_1634)).kind_ == ((rt_int)2LL)) || ((*(P114)rt_nil_check(F->y_1634)).kind_ == ((rt_int)7LL)))) && (*(P114)rt_nil_check(F->y_1634)).hasmv_)) {
(*F->ok_441) = 1;
(*F->v_440) = (*(P114)rt_nil_check(F->y_1634)).mvalue_;
}
} else if (((((*(P171)rt_nil_check(F->e_439)).kind_ == ((rt_int)10LL)) && ((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_439)).a_)).kind_ == ((rt_int)5LL))) && (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_439)).name_)), rt_g_lit("FIRST", 5)) || eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_439)).name_)), rt_g_lit("LAST", 4))))) {
F->y_1634 = f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_439)).a_)).name_)));
if (((((F->y_1634 != NULL) && ((*(P114)rt_nil_check(F->y_1634)).kind_ == ((rt_int)5LL))) && ((*(P114)rt_nil_check(F->y_1634)).c_ != NULL)) && (*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_1634)).c_)).hasm_)) {
(*F->ok_441) = 1;
if (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_439)).name_)), rt_g_lit("FIRST", 5))) {
(*F->v_440) = (*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_1634)).c_)).mlo_;
} else {
(*F->v_440) = (*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_1634)).c_)).mhi_;
}
}
} else if (((((*(P171)rt_nil_check(F->e_439)).kind_ == ((rt_int)8LL)) && ((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_439)).a_)).kind_ == ((rt_int)5LL))) && (f_list_len_282(F->up, (*(P171)rt_nil_check(F->e_439)).b_) == ((rt_int)1LL)))) {
F->y_1634 = f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_439)).a_)).name_)));
if (((((F->y_1634 != NULL) && ((*(P114)rt_nil_check(F->y_1634)).kind_ == ((rt_int)5LL))) && ((*(P114)rt_nil_check(F->y_1634)).t_ != NULL)) && ((*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_1634)).t_)).kind_ == ((rt_int)1LL)))) {
f_manifest_442(F->up, (*(P171)rt_nil_check(F->e_439)).b_, &(*F->v_440), &(*F->ok_441));
}
}
ret_:

  return;
}

static void f_resolve_446(struct f_greenc_1fr *up_, P171 st_443, P119 *t_444, P175 *c_445) {
  struct f_resolve_446fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_443 = st_443;
F->t_444 = t_444;
F->c_445 = c_445;
F->y_1635 = NULL;
F->dummy_1636 = NULL;
F->code_1637 = NULL;
F->r_1639 = NULL;
(*F->c_445) = f_new_cons_419(F->up);
if (((*(P171)rt_nil_check(F->st_443)).kind_ != ((rt_int)80LL))) {
f_type_definition_480(F->up, F->st_443, NULL, &(*F->t_444), &(*F->c_445));
goto ret_;
}
if (((*(P171)rt_nil_check(F->st_443)).tag_ != NULL)) {
F->y_1635 = f_member_of_880(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->st_443)).tag_)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->st_443)).name_)), (*(P171)rt_nil_check(F->st_443)).line_);
} else {
F->y_1635 = f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->st_443)).name_)));
}
if (((F->y_1635 == NULL) || ((*(P114)rt_nil_check(F->y_1635)).kind_ != ((rt_int)5LL)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->st_443)).line_, cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->st_443)).name_)), rt_g_lit(" is not a type", 14)));
}
(*F->t_444) = (*(P114)rt_nil_check(F->y_1635)).t_;
if (((*(P114)rt_nil_check(F->y_1635)).c_ != NULL)) {
(*(P175)rt_nil_check((*F->c_445))).lo_ = (*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_1635)).c_)).lo_;
(*(P175)rt_nil_check((*F->c_445))).hi_ = (*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_1635)).c_)).hi_;
(*(P175)rt_nil_check((*F->c_445))).slen_ = (*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_1635)).c_)).slen_;
(*(P175)rt_nil_check((*F->c_445))).mlo_ = (*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_1635)).c_)).mlo_;
(*(P175)rt_nil_check((*F->c_445))).mhi_ = (*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_1635)).c_)).mhi_;
(*(P175)rt_nil_check((*F->c_445))).hasm_ = (*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_1635)).c_)).hasm_;
(*(P175)rt_nil_check((*F->c_445))).acc_ = (*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_1635)).c_)).acc_;
(*(P175)rt_nil_check((*F->c_445))).inner_ = (*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_1635)).c_)).inner_;
(*(P175)rt_nil_check((*F->c_445))).dv_ = (*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_1635)).c_)).dv_;
}
if (((*F->t_444) == NULL)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->st_443)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("the type ", 9), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->st_443)).name_))), rt_g_lit(" is used before its full declaration", 36)));
}
if (((*(P171)rt_nil_check(F->st_443)).flag_ == ((rt_int)3LL))) {
if ((((*(P119)rt_nil_check((*F->t_444))).kind_ != ((rt_int)3LL)) && ((*(P119)rt_nil_check((*F->t_444))).kind_ != ((rt_int)16LL)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->st_443)).line_, rt_g_lit("an accuracy constraint applies to a real type (RM79 3.5.5)", 58));
}
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->st_443)).b_, NULL, &F->dummy_1636, &(*(P175)rt_nil_check((*F->c_445))).acc_);
}
if ((((*(P171)rt_nil_check(F->st_443)).flag_ == ((rt_int)1LL)) || (((*(P171)rt_nil_check(F->st_443)).flag_ == ((rt_int)3LL)) && ((*(P171)rt_nil_check(F->st_443)).a_ != NULL)))) {
F->r_1639 = (*(P171)rt_nil_check(F->st_443)).a_;
if (((!f_is_numeric_403(F->up, (*F->t_444))) && (!f_is_discrete_405(F->up, (*F->t_444))))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->st_443)).line_, rt_g_lit("a range constraint applies to a scalar type (RM79 3.5)", 54));
}
f_range_of_464(F->up, F->r_1639, (*F->t_444), (*F->c_445));
} else if (((*(P171)rt_nil_check(F->st_443)).flag_ == ((rt_int)2LL))) {
f_constraint_list_450(F->up, F->st_443, (*F->t_444), (*F->c_445));
}
ret_:

  return;
}

static void f_constraint_list_450(struct f_greenc_1fr *up_, P171 st_447, P119 t_448, P175 c_449) {
  struct f_constraint_list_450fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_447 = st_447;
F->t_448 = t_448;
F->c_449 = c_449;
F->r_1640 = NULL;
F->r_1640 = (*(P171)rt_nil_check(F->st_447)).a_;
F->arrt_1641 = NULL;
F->arrt_1641 = F->t_448;
F->cc_1642 = NULL;
F->cc_1642 = F->c_449;
F->it_1643 = NULL;
if (((*(P119)rt_nil_check(F->t_448)).kind_ == ((rt_int)7LL))) {
f_discriminant_constraint_454(F->up, F->st_447, F->t_448, F->c_449);
goto ret_;
}
if (((*(P119)rt_nil_check(F->t_448)).kind_ != ((rt_int)6LL))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->st_447)).line_, rt_g_lit("this type takes no index constraint", 35));
}
if ((f_list_len_282(F->up, F->r_1640) != (*(P119)rt_nil_check(F->t_448)).dims_)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->st_447)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("an index constraint gives a range for each of the ", 50), rt_g_s2g(rt_str_of_int((*(P119)rt_nil_check(F->t_448)).dims_))), rt_g_lit(" indexes (RM79 3.6)", 19)));
}
while ((F->r_1640 != NULL)) {
if (((*(P171)rt_nil_check(F->r_1640)).formal_ != NULL)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->st_447)).line_, rt_g_lit("an index constraint is a list of discrete ranges (RM79 3.6)", 59));
}
f_discrete_bounds_460(F->up, F->r_1640, (*(P119)rt_nil_check(F->arrt_1641)).idx_, &F->it_1643, &(*(P175)rt_nil_check(F->cc_1642)).lo_, &(*(P175)rt_nil_check(F->cc_1642)).hi_);
f_check_type_425(F->up, F->it_1643, (*(P119)rt_nil_check(F->arrt_1641)).idx_, (*(P171)rt_nil_check(F->st_447)).line_);
(*(P175)rt_nil_check(F->cc_1642)).mlo_ = ((rt_int)0LL);
(*(P175)rt_nil_check(F->cc_1642)).mhi_ = ((rt_int)0LL);
(*(P175)rt_nil_check(F->cc_1642)).hasm_ = 0;
F->r_1640 = (*(P171)rt_nil_check(F->r_1640)).next_;
if ((F->r_1640 != NULL)) {
(*(P175)rt_nil_check(F->cc_1642)).inner_ = f_new_cons_419(F->up);
F->cc_1642 = (*(P175)rt_nil_check(F->cc_1642)).inner_;
F->arrt_1641 = (*(P119)rt_nil_check(F->arrt_1641)).elem_;
}
}
L_end_1644: ;
ret_:

  return;
}

static void f_discriminant_constraint_454(struct f_greenc_1fr *up_, P171 st_451, P119 t_452, P175 c_453) {
  struct f_discriminant_constraint_454fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_451 = st_451;
F->t_452 = t_452;
F->c_453 = c_453;
F->a_1645 = NULL;
F->a_1645 = (*(P171)rt_nil_check(F->st_451)).a_;
F->f_1646 = NULL;
F->f_1646 = (*(P119)rt_nil_check(F->t_452)).fields_;
F->vt_1647 = NULL;
F->v_1648 = NULL;
F->d_1649 = NULL;
F->tail_1650 = NULL;
(*(P175)rt_nil_check(F->c_453)).dv_ = NULL;
while ((F->a_1645 != NULL)) {
if (((*(P171)rt_nil_check(F->a_1645)).formal_ != NULL)) {
F->f_1646 = (*(P119)rt_nil_check(F->t_452)).fields_;
while (((F->f_1646 != NULL) && (!eq_rt_gstr((*(P137)rt_nil_check((*(P1607)rt_nil_check(F->f_1646)).name_)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->a_1645)).formal_)))))) {
F->f_1646 = (*(P1607)rt_nil_check(F->f_1646)).next_;
}
L_end_1652: ;
} else {
while (((F->f_1646 != NULL) && (!(*(P1607)rt_nil_check(F->f_1646)).is_discr_))) {
F->f_1646 = (*(P1607)rt_nil_check(F->f_1646)).next_;
}
L_end_1653: ;
}
if (((F->f_1646 == NULL) || (!(*(P1607)rt_nil_check(F->f_1646)).is_discr_))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->st_451)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("a discriminant constraint gives the values of discriminants of ", 63), f_kind_name_421(F->up, F->t_452)), rt_g_lit(" (RM79 3.7.3)", 13)));
}
f_gexpr_695(F->up, F->a_1645, (*(P1607)rt_nil_check(F->f_1646)).t_, &F->vt_1647, &F->v_1648);
f_check_type_425(F->up, F->vt_1647, (*(P1607)rt_nil_check(F->f_1646)).t_, (*(P171)rt_nil_check(F->st_451)).line_);
F->d_1649 = ({ R1612 *cell1654 = rt_alloc(sizeof(R1612)); *cell1654 = cp_R1612(({ R1612 ag1655; ag1655.name_ = (*(P1607)rt_nil_check(F->f_1646)).name_; ag1655.v_ = F->v_1648; ag1655.next_ = NULL; ag1655; })); (P1611)cell1654; });
if ((F->tail_1650 == NULL)) {
(*(P175)rt_nil_check(F->c_453)).dv_ = F->d_1649;
} else {
(*(P1611)rt_nil_check(F->tail_1650)).next_ = F->d_1649;
}
F->tail_1650 = F->d_1649;
if (((*(P171)rt_nil_check(F->a_1645)).formal_ == NULL)) {
F->f_1646 = (*(P1607)rt_nil_check(F->f_1646)).next_;
}
F->a_1645 = (*(P171)rt_nil_check(F->a_1645)).next_;
}
L_end_1651: ;
F->f_1646 = (*(P119)rt_nil_check(F->t_452)).fields_;
while ((F->f_1646 != NULL)) {
if ((*(P1607)rt_nil_check(F->f_1646)).is_discr_) {
F->d_1649 = (*(P175)rt_nil_check(F->c_453)).dv_;
while (((F->d_1649 != NULL) && (!eq_rt_gstr((*(P137)rt_nil_check((*(P1611)rt_nil_check(F->d_1649)).name_)), (*(P137)rt_nil_check((*(P1607)rt_nil_check(F->f_1646)).name_)))))) {
F->d_1649 = (*(P1611)rt_nil_check(F->d_1649)).next_;
}
L_end_1657: ;
if ((F->d_1649 == NULL)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->st_451)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("no value for discriminant ", 26), (*(P137)rt_nil_check((*(P1607)rt_nil_check(F->f_1646)).name_))), rt_g_lit(" (RM79 3.7.3)", 13)));
}
}
F->f_1646 = (*(P1607)rt_nil_check(F->f_1646)).next_;
}
L_end_1656: ;
ret_:

  return;
}

static void f_discrete_bounds_460(struct f_greenc_1fr *up_, P171 r_455, P119 want_456, P119 *t_457, P137 *lo_458, P137 *hi_459) {
  struct f_discrete_bounds_460fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_455 = r_455;
F->want_456 = want_456;
F->t_457 = t_457;
F->lo_458 = lo_458;
F->hi_459 = hi_459;
F->c_1658 = NULL;
F->y_1659 = NULL;
if (((*(P171)rt_nil_check(F->r_455)).kind_ == ((rt_int)14LL))) {
f_range_bounds_690(F->up, (*(P171)rt_nil_check(F->r_455)).a_, (*(P171)rt_nil_check(F->r_455)).b_, F->want_456, (*(P171)rt_nil_check(F->r_455)).line_, &(*F->t_457), &(*F->lo_458), &(*F->hi_459));
goto ret_;
}
if (((*(P171)rt_nil_check(F->r_455)).kind_ == ((rt_int)5LL))) {
F->y_1659 = f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->r_455)).name_)));
if (((F->y_1659 == NULL) || ((*(P114)rt_nil_check(F->y_1659)).kind_ != ((rt_int)5LL)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->r_455)).line_, rt_g_lit("a discrete range is L .. H, T range L .. H or a type mark (RM79 3.6)", 68));
}
} else if (((*(P171)rt_nil_check(F->r_455)).kind_ != ((rt_int)80LL))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->r_455)).line_, rt_g_lit("a discrete range is L .. H, T range L .. H or a type mark (RM79 3.6)", 68));
}
if (((*(P171)rt_nil_check(F->r_455)).kind_ == ((rt_int)5LL))) {
(*F->t_457) = (*(P114)rt_nil_check(F->y_1659)).t_;
F->c_1658 = (*(P114)rt_nil_check(F->y_1659)).c_;
} else {
f_resolve_446(F->up, F->r_455, &(*F->t_457), &F->c_1658);
}
if (((F->c_1658 == NULL) || ((*(P175)rt_nil_check(F->c_1658)).lo_ == NULL))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->r_455)).line_, rt_g_lit("this type mark has no bounds to give a discrete range", 53));
}
(*F->lo_458) = (*(P175)rt_nil_check(F->c_1658)).lo_;
(*F->hi_459) = (*(P175)rt_nil_check(F->c_1658)).hi_;
ret_:

  return;
}

static void f_range_of_464(struct f_greenc_1fr *up_, P171 r_461, P119 t_462, P175 c_463) {
  struct f_range_of_464fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_461 = r_461;
F->t_462 = t_462;
F->c_463 = c_463;
F->dummy_1660 = NULL;
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->r_461)).a_, F->t_462, &F->dummy_1660, &(*(P175)rt_nil_check(F->c_463)).lo_);
f_check_type_425(F->up, F->dummy_1660, F->t_462, (*(P171)rt_nil_check(F->r_461)).line_);
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->r_461)).b_, F->t_462, &F->dummy_1660, &(*(P175)rt_nil_check(F->c_463)).hi_);
f_check_type_425(F->up, F->dummy_1660, F->t_462, (*(P171)rt_nil_check(F->r_461)).line_);
if (((*(P119)rt_nil_check(F->t_462)).kind_ == ((rt_int)16LL))) {
(*(P175)rt_nil_check(F->c_463)).lo_ = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_463)).lo_))), one_rt_gstr(41)));
(*(P175)rt_nil_check(F->c_463)).hi_ = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_463)).hi_))), one_rt_gstr(41)));
}
f_manifest_442(F->up, (*(P171)rt_nil_check(F->r_461)).a_, &(*(P175)rt_nil_check(F->c_463)).mlo_, &F->ok_1661);
(*(P175)rt_nil_check(F->c_463)).hasm_ = F->ok_1661;
f_manifest_442(F->up, (*(P171)rt_nil_check(F->r_461)).b_, &(*(P175)rt_nil_check(F->c_463)).mhi_, &F->ok_1661);
(*(P175)rt_nil_check(F->c_463)).hasm_ = ((*(P175)rt_nil_check(F->c_463)).hasm_ && F->ok_1661);
ret_:

  return;
}

static void f_fresh_typ_468(struct f_greenc_1fr *up_, rt_int kind_465, P137 name_466, P119 *t_467) {
  struct f_fresh_typ_468fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_465 = kind_465;
F->name_466 = name_466;
F->t_467 = t_467;
F->ph_1662 = NULL;
F->ph_1662 = F->up->completing_170;
F->up->completing_170 = NULL;
if ((F->ph_1662 == NULL)) {
(*F->t_467) = f_new_typ_418(F->up, F->kind_465);
(*(P119)rt_nil_check((*F->t_467))).name_ = F->name_466;
goto ret_;
}
as_R120(&(*(P119)rt_nil_check(F->ph_1662)), (*(P119)rt_nil_check(f_new_typ_418(F->up, F->kind_465))));
(*(P119)rt_nil_check(F->ph_1662)).name_ = F->name_466;
(*F->t_467) = F->ph_1662;
ret_:

  return;
}

static void f_inherit_472(struct f_greenc_1fr *up_, P119 parent_469, P119 t_470, rt_int line_471) {
  struct f_inherit_472fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->parent_469 = parent_469;
F->t_470 = t_470;
F->line_471 = line_471;
F->s_1663 = NULL;
F->s_1663 = F->up->scope_stack_118;
F->z_1664 = NULL;
F->p_1665 = NULL;
F->q_1666 = NULL;
F->tail_1667 = NULL;
F->news_1669 = NULL;
while ((F->s_1663 != NULL)) {
if ((((((*(P114)rt_nil_check(F->s_1663)).kind_ == ((rt_int)3LL)) || ((*(P114)rt_nil_check(F->s_1663)).kind_ == ((rt_int)4LL))) && (!(*(P114)rt_nil_check(F->s_1663)).hidden_)) && ((*(P114)rt_nil_check(F->s_1663)).members_ == NULL))) {
F->uses_1668 = f_same_396(F->up, (*(P114)rt_nil_check(F->s_1663)).result_, F->parent_469);
F->p_1665 = (*(P114)rt_nil_check(F->s_1663)).params_;
while ((F->p_1665 != NULL)) {
F->uses_1668 = (F->uses_1668 || f_same_396(F->up, (*(P1592)rt_nil_check(F->p_1665)).t_, F->parent_469));
F->p_1665 = (*(P1592)rt_nil_check(F->p_1665)).next_;
}
L_end_1671: ;
if (F->uses_1668) {
f_copy_sym_885(F->up, F->s_1663, &F->z_1664);
(*(P114)rt_nil_check(F->z_1664)).params_ = NULL;
F->tail_1667 = NULL;
F->p_1665 = (*(P114)rt_nil_check(F->s_1663)).params_;
while ((F->p_1665 != NULL)) {
F->q_1666 = ({ R1593 *cell1673 = rt_alloc(sizeof(R1593)); *cell1673 = cp_R1593(({ R1593 ag1674; ag1674.name_ = (*(P1592)rt_nil_check(F->p_1665)).name_; ag1674.mode_ = (*(P1592)rt_nil_check(F->p_1665)).mode_; ag1674.t_ = (*(P1592)rt_nil_check(F->p_1665)).t_; ag1674.c_ = (*(P1592)rt_nil_check(F->p_1665)).c_; ag1674.cfield_ = (*(P1592)rt_nil_check(F->p_1665)).cfield_; ag1674.dflt_ = (*(P1592)rt_nil_check(F->p_1665)).dflt_; ag1674.next_ = NULL; ag1674; })); (P1592)cell1673; });
if (f_same_396(F->up, (*(P1592)rt_nil_check(F->q_1666)).t_, F->parent_469)) {
(*(P1592)rt_nil_check(F->q_1666)).t_ = F->t_470;
}
if ((F->tail_1667 == NULL)) {
(*(P114)rt_nil_check(F->z_1664)).params_ = F->q_1666;
} else {
(*(P1592)rt_nil_check(F->tail_1667)).next_ = F->q_1666;
}
F->tail_1667 = F->q_1666;
F->p_1665 = (*(P1592)rt_nil_check(F->p_1665)).next_;
}
L_end_1672: ;
if (f_same_396(F->up, (*(P114)rt_nil_check(F->z_1664)).result_, F->parent_469)) {
(*(P114)rt_nil_check(F->z_1664)).result_ = F->t_470;
}
(*(P114)rt_nil_check(F->z_1664)).chain_ = F->news_1669;
F->news_1669 = F->z_1664;
}
}
F->s_1663 = (*(P114)rt_nil_check(F->s_1663)).stack_;
}
L_end_1670: ;
while ((F->news_1669 != NULL)) {
F->z_1664 = F->news_1669;
F->news_1669 = (*(P114)rt_nil_check(F->news_1669)).chain_;
(*(P114)rt_nil_check(F->z_1664)).chain_ = NULL;
f_define_411(F->up, F->z_1664, F->line_471);
}
L_end_1675: ;
ret_:

  return;
}

static void f_derive_literals_475(struct f_greenc_1fr *up_, P119 t_473, rt_int line_474) {
  struct f_derive_literals_475fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_473 = t_473;
F->line_474 = line_474;
F->l_1676 = NULL;
F->l_1676 = (*(P119)rt_nil_check(F->t_473)).lits_;
F->n_1677 = ((rt_int)0LL);
F->y_1678 = NULL;
while ((F->l_1676 != NULL)) {
if (((*(P171)rt_nil_check(F->l_1676)).kind_ == ((rt_int)5LL))) {
F->y_1678 = f_new_sym_416(F->up, ((rt_int)7LL), (*(P171)rt_nil_check(F->l_1676)).name_);
(*(P114)rt_nil_check(F->y_1678)).t_ = F->t_473;
(*(P114)rt_nil_check(F->y_1678)).result_ = F->t_473;
(*(P114)rt_nil_check(F->y_1678)).mvalue_ = F->n_1677;
(*(P114)rt_nil_check(F->y_1678)).hasmv_ = 1;
f_define_411(F->up, F->y_1678, F->line_474);
}
F->n_1677 = rt_add(F->n_1677, ((rt_int)1LL));
F->l_1676 = (*(P171)rt_nil_check(F->l_1676)).next_;
}
L_end_1679: ;
ret_:

  return;
}

static void f_type_definition_480(struct f_greenc_1fr *up_, P171 d_476, P137 name_477, P119 *t_478, P175 *c_479) {
  struct f_type_definition_480fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_476 = d_476;
F->name_477 = name_477;
F->t_478 = t_478;
F->c_479 = c_479;
F->dummy_1680 = NULL;
F->it_1681 = NULL;
F->ic_1682 = NULL;
F->l_1683 = NULL;
F->comp_1684 = NULL;
F->f_1685 = NULL;
F->tail_1686 = NULL;
F->y_1689 = NULL;
(*F->c_479) = f_new_cons_419(F->up);
{ rt_int sel1690 = (*(P171)rt_nil_check(F->d_476)).kind_;
if (0 || sel1690 == ((rt_int)70LL)) {
f_fresh_typ_468(F->up, ((rt_int)4LL), F->name_477, &(*F->t_478));
(*(P119)rt_nil_check((*F->t_478))).lits_ = (*(P171)rt_nil_check(F->d_476)).a_;
F->l_1683 = (*(P171)rt_nil_check(F->d_476)).a_;
F->n_1688 = ((rt_int)0LL);
while ((F->l_1683 != NULL)) {
if (((*(P171)rt_nil_check(F->l_1683)).kind_ == ((rt_int)5LL))) {
F->y_1689 = f_new_sym_416(F->up, ((rt_int)7LL), (*(P171)rt_nil_check(F->l_1683)).name_);
(*(P114)rt_nil_check(F->y_1689)).t_ = (*F->t_478);
(*(P114)rt_nil_check(F->y_1689)).result_ = (*F->t_478);
(*(P114)rt_nil_check(F->y_1689)).mvalue_ = F->n_1688;
(*(P114)rt_nil_check(F->y_1689)).hasmv_ = 1;
f_define_411(F->up, F->y_1689, (*(P171)rt_nil_check(F->l_1683)).line_);
}
F->n_1688 = rt_add(F->n_1688, ((rt_int)1LL));
F->l_1683 = (*(P171)rt_nil_check(F->l_1683)).next_;
}
L_end_1691: ;
(*(P175)rt_nil_check((*F->c_479))).lo_ = f_mk_205(F->up, rt_g_lit("0", 1));
(*(P175)rt_nil_check((*F->c_479))).hi_ = f_mk_205(F->up, rt_g_s2g(rt_str_of_int(rt_sub(F->n_1688, ((rt_int)1LL)))));
(*(P175)rt_nil_check((*F->c_479))).mlo_ = ((rt_int)0LL);
(*(P175)rt_nil_check((*F->c_479))).mhi_ = rt_sub(F->n_1688, ((rt_int)1LL));
(*(P175)rt_nil_check((*F->c_479))).hasm_ = 1;
} else if (0 || sel1690 == ((rt_int)71LL)) {
f_fresh_typ_468(F->up, ((rt_int)1LL), F->name_477, &(*F->t_478));
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->d_476)).a_, F->up->ty_int_153, &F->dummy_1680, &(*(P175)rt_nil_check((*F->c_479))).lo_);
if (((*(P119)rt_nil_check(F->dummy_1680)).kind_ != ((rt_int)1LL))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->d_476)).line_, rt_g_lit("the bounds of an integer type are integers (RM79 3.5.4)", 55));
}
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->d_476)).b_, F->up->ty_int_153, &F->dummy_1680, &(*(P175)rt_nil_check((*F->c_479))).hi_);
if (((*(P119)rt_nil_check(F->dummy_1680)).kind_ != ((rt_int)1LL))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->d_476)).line_, rt_g_lit("the bounds of an integer type are integers (RM79 3.5.4)", 55));
}
f_manifest_442(F->up, (*(P171)rt_nil_check(F->d_476)).a_, &(*(P175)rt_nil_check((*F->c_479))).mlo_, &F->ok_1687);
(*(P175)rt_nil_check((*F->c_479))).hasm_ = F->ok_1687;
f_manifest_442(F->up, (*(P171)rt_nil_check(F->d_476)).b_, &(*(P175)rt_nil_check((*F->c_479))).mhi_, &F->ok_1687);
(*(P175)rt_nil_check((*F->c_479))).hasm_ = ((*(P175)rt_nil_check((*F->c_479))).hasm_ && F->ok_1687);
(*(P119)rt_nil_check((*F->t_478))).parent_ = F->up->ty_int_153;
if (((*(P175)rt_nil_check((*F->c_479))).hasm_ && (((*(P175)rt_nil_check((*F->c_479))).mlo_ >= rt_neg(((rt_int)2147483648LL))) && ((*(P175)rt_nil_check((*F->c_479))).mhi_ <= ((rt_int)2147483647LL))))) {
(*(P119)rt_nil_check((*F->t_478))).parent_ = F->up->ty_short_164;
}
f_inherit_472(F->up, (*(P119)rt_nil_check((*F->t_478))).parent_, (*F->t_478), (*(P171)rt_nil_check(F->d_476)).line_);
} else if (0 || sel1690 == ((rt_int)72LL)) {
f_real_type_534(F->up, F->d_476, F->name_477, &(*F->t_478), &(*F->c_479));
} else if (0 || sel1690 == ((rt_int)73LL)) {
f_array_type_487(F->up, (*(P171)rt_nil_check(F->d_476)).a_, (*(P171)rt_nil_check(F->d_476)).b_, F->name_477, (*(P171)rt_nil_check(F->d_476)).line_, &(*F->t_478), &(*F->c_479));
} else if (0 || sel1690 == ((rt_int)74LL)) {
f_fresh_typ_468(F->up, ((rt_int)7LL), F->name_477, &(*F->t_478));
F->up->disc_syms_179 = NULL;
f_record_components_515(F->up, (*(P171)rt_nil_check(F->d_476)).a_, (*F->t_478), NULL, (*(P171)rt_nil_check(F->d_476)).line_);
while ((F->up->disc_syms_179 != NULL)) {
f_remove_sym_510(F->up, F->up->disc_syms_179);
F->up->disc_syms_179 = (*(P114)rt_nil_check(F->up->disc_syms_179)).mnext_;
}
L_end_1692: ;
} else if (0 || sel1690 == ((rt_int)75LL)) {
f_fresh_typ_468(F->up, ((rt_int)8LL), F->name_477, &(*F->t_478));
(*(P119)rt_nil_check((*F->t_478))).decl_ = (*(P171)rt_nil_check(F->d_476)).a_;
if ((((((*(P171)rt_nil_check((*(P171)rt_nil_check(F->d_476)).a_)).kind_ == ((rt_int)80LL)) && (f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->d_476)).a_)).name_))) != NULL)) && ((*(P114)rt_nil_check(f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->d_476)).a_)).name_))))).kind_ == ((rt_int)5LL))) && ((*(P114)rt_nil_check(f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->d_476)).a_)).name_))))).t_ != NULL))) {
f_finish_ptr_536(F->up, (*F->t_478));
}
} else if (0 || sel1690 == ((rt_int)76LL)) {
f_derived_type_529(F->up, F->d_476, F->name_477, &(*F->t_478), &(*F->c_479));
} else {
f_fail_226(F->up, (*(P171)rt_nil_check(F->d_476)).line_, rt_g_lit("this type definition is not handled", 35));
}
}
ret_:

  return;
}

static void f_array_type_487(struct f_greenc_1fr *up_, P171 idx_481, P171 comp_482, P137 name_483, rt_int line_484, P119 *t_485, P175 *c_486) {
  struct f_array_type_487fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->idx_481 = idx_481;
F->comp_482 = comp_482;
F->name_483 = name_483;
F->line_484 = line_484;
F->t_485 = t_485;
F->c_486 = c_486;
F->l_1693 = NULL;
F->l_1693 = F->idx_481;
F->rowc_1694 = NULL;
F->ic_1695 = NULL;
F->it_1696 = NULL;
(*F->c_486) = f_new_cons_419(F->up);
f_fresh_typ_468(F->up, ((rt_int)6LL), F->name_483, &(*F->t_485));
(*(P119)rt_nil_check((*F->t_485))).dims_ = f_list_len_282(F->up, F->idx_481);
if (((*(P171)rt_nil_check(F->idx_481)).next_ == NULL)) {
f_resolve_446(F->up, F->comp_482, &(*(P119)rt_nil_check((*F->t_485))).elem_, &(*(P119)rt_nil_check((*F->t_485))).elemcons_);
} else {
if ((((*(P171)rt_nil_check(F->idx_481)).kind_ == ((rt_int)14LL)) != ((*(P171)rt_nil_check((*(P171)rt_nil_check(F->idx_481)).next_)).kind_ == ((rt_int)14LL)))) {
f_fail_226(F->up, F->line_484, rt_g_lit("the indexes of an array are all discrete ranges or all type marks (RM79 3.6)", 76));
}
f_array_type_487(F->up, (*(P171)rt_nil_check(F->idx_481)).next_, F->comp_482, NULL, F->line_484, &(*(P119)rt_nil_check((*F->t_485))).elem_, &F->rowc_1694);
if (((*(P175)rt_nil_check(F->rowc_1694)).lo_ != NULL)) {
(*(P119)rt_nil_check((*F->t_485))).elemcons_ = F->rowc_1694;
}
}
if (((*(P171)rt_nil_check(F->l_1693)).kind_ == ((rt_int)14LL))) {
f_discrete_bounds_460(F->up, F->l_1693, NULL, &(*(P119)rt_nil_check((*F->t_485))).idx_, &(*(P175)rt_nil_check((*F->c_486))).lo_, &(*(P175)rt_nil_check((*F->c_486))).hi_);
f_static_range_491(F->up, (*(P171)rt_nil_check(F->l_1693)).a_, (*(P171)rt_nil_check(F->l_1693)).b_, (*F->c_486));
} else if ((((*(P171)rt_nil_check(F->l_1693)).kind_ == ((rt_int)80LL)) && ((*(P171)rt_nil_check(F->l_1693)).flag_ == ((rt_int)1LL)))) {
f_discrete_bounds_460(F->up, F->l_1693, NULL, &(*(P119)rt_nil_check((*F->t_485))).idx_, &(*(P175)rt_nil_check((*F->c_486))).lo_, &(*(P175)rt_nil_check((*F->c_486))).hi_);
} else {
f_resolve_446(F->up, F->l_1693, &(*(P119)rt_nil_check((*F->t_485))).idx_, &F->ic_1695);
if ((((((*(P119)rt_nil_check((*(P119)rt_nil_check((*F->t_485))).idx_)).kind_ == ((rt_int)4LL)) || ((*(P119)rt_nil_check((*(P119)rt_nil_check((*F->t_485))).idx_)).kind_ == ((rt_int)11LL))) || ((*(P119)rt_nil_check((*(P119)rt_nil_check((*F->t_485))).idx_)).kind_ == ((rt_int)2LL))) || ((*(P175)rt_nil_check(F->ic_1695)).hasm_ && ((rt_sub((*(P175)rt_nil_check(F->ic_1695)).mhi_, (*(P175)rt_nil_check(F->ic_1695)).mlo_) >= ((rt_int)0LL)) && (rt_sub((*(P175)rt_nil_check(F->ic_1695)).mhi_, (*(P175)rt_nil_check(F->ic_1695)).mlo_) < ((rt_int)1000000LL)))))) {
(*(P175)rt_nil_check((*F->c_486))).lo_ = (*(P175)rt_nil_check(F->ic_1695)).lo_;
(*(P175)rt_nil_check((*F->c_486))).hi_ = (*(P175)rt_nil_check(F->ic_1695)).hi_;
(*(P175)rt_nil_check((*F->c_486))).mlo_ = (*(P175)rt_nil_check(F->ic_1695)).mlo_;
(*(P175)rt_nil_check((*F->c_486))).mhi_ = (*(P175)rt_nil_check(F->ic_1695)).mhi_;
(*(P175)rt_nil_check((*F->c_486))).hasm_ = (*(P175)rt_nil_check(F->ic_1695)).hasm_;
} else if (((*(P175)rt_nil_check(F->ic_1695)).lo_ != NULL)) {
(*(P119)rt_nil_check((*F->t_485))).tcons_ = f_new_cons_419(F->up);
(*(P175)rt_nil_check((*(P119)rt_nil_check((*F->t_485))).tcons_)).lo_ = (*(P175)rt_nil_check(F->ic_1695)).lo_;
}
}
if ((!f_is_discrete_405(F->up, (*(P119)rt_nil_check((*F->t_485))).idx_))) {
f_fail_226(F->up, F->line_484, rt_g_lit("an index is of a discrete type (RM79 3.6)", 41));
}
if (((*(P119)rt_nil_check((*F->t_485))).dims_ > ((rt_int)1LL))) {
(*(P175)rt_nil_check((*F->c_486))).inner_ = F->rowc_1694;
if ((((*(P175)rt_nil_check((*F->c_486))).lo_ == NULL) != ((*(P175)rt_nil_check(F->rowc_1694)).lo_ == NULL))) {
(*(P175)rt_nil_check((*F->c_486))).lo_ = NULL;
(*(P175)rt_nil_check((*F->c_486))).hi_ = NULL;
(*(P175)rt_nil_check((*F->c_486))).inner_ = NULL;
(*(P119)rt_nil_check((*F->t_485))).elemcons_ = NULL;
}
}
if (((*(P175)rt_nil_check((*F->c_486))).lo_ != NULL)) {
(*(P119)rt_nil_check((*F->t_485))).tcons_ = (*F->c_486);
}
ret_:

  return;
}

static void f_static_range_491(struct f_greenc_1fr *up_, P171 l_488, P171 h_489, P175 c_490) {
  struct f_static_range_491fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_488 = l_488;
F->h_489 = h_489;
F->c_490 = c_490;
f_manifest_442(F->up, F->l_488, &(*(P175)rt_nil_check(F->c_490)).mlo_, &F->ok_1697);
f_manifest_442(F->up, F->h_489, &(*(P175)rt_nil_check(F->c_490)).mhi_, &F->ok2_1698);
if ((f_is_char_lit_676(F->up, F->l_488) && f_is_char_lit_676(F->up, F->h_489))) {
(*(P175)rt_nil_check(F->c_490)).mlo_ = rt_sub(((rt_int)(({ rt_gstr ix1699 = (*(P137)rt_nil_check((*(P171)rt_nil_check(F->l_488)).name_)); ix1699.p[rt_index(((rt_int)1LL), ix1699.lo, ix1699.hi) - ix1699.lo]; })) + 1), ((rt_int)1LL));
(*(P175)rt_nil_check(F->c_490)).mhi_ = rt_sub(((rt_int)(({ rt_gstr ix1700 = (*(P137)rt_nil_check((*(P171)rt_nil_check(F->h_489)).name_)); ix1700.p[rt_index(((rt_int)1LL), ix1700.lo, ix1700.hi) - ix1700.lo]; })) + 1), ((rt_int)1LL));
F->ok_1697 = 1;
F->ok2_1698 = 1;
}
(*(P175)rt_nil_check(F->c_490)).hasm_ = (F->ok_1697 && F->ok2_1698);
ret_:

  return;
}

static void f_elem_ctype_494(struct f_greenc_1fr *up_, P119 t_492, P137 *r_493) {
  struct f_elem_ctype_494fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_492 = t_492;
F->r_493 = r_493;
if (((*(P119)rt_nil_check(F->t_492)).kind_ == ((rt_int)11LL))) {
(*F->r_493) = f_mk_205(F->up, rt_g_lit("unsigned char", 13));
} else {
f_ctype_430(F->up, F->t_492, &(*F->r_493));
}
ret_:

  return;
}

static void f_first_index_497(struct f_greenc_1fr *up_, P119 t_495, P137 *r_496) {
  struct f_first_index_497fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_495 = t_495;
F->r_496 = r_496;
if ((((*(P119)rt_nil_check(F->t_495)).tcons_ != NULL) && ((*(P175)rt_nil_check((*(P119)rt_nil_check(F->t_495)).tcons_)).lo_ != NULL))) {
(*F->r_496) = (*(P175)rt_nil_check((*(P119)rt_nil_check(F->t_495)).tcons_)).lo_;
} else if ((((*(P119)rt_nil_check(F->t_495)).idx_ != NULL) && ((*(P119)rt_nil_check((*(P119)rt_nil_check(F->t_495)).idx_)).kind_ == ((rt_int)1LL)))) {
(*F->r_496) = f_mk_205(F->up, rt_g_lit("1", 1));
} else {
(*F->r_496) = f_mk_205(F->up, rt_g_lit("0", 1));
}
ret_:

  return;
}

static int f_is_string_499(struct f_greenc_1fr *up_, P119 t_498) {
  struct f_is_string_499fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_498 = t_498;
F->result_ = (((F->t_498 != NULL) && ((*(P119)rt_nil_check(F->t_498)).kind_ == ((rt_int)6LL))) && f_derived_from_401(F->up, F->t_498, F->up->ty_string_157));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_subst_502(struct f_greenc_1fr *up_, rt_gstr s_500, rt_gstr r_501) {
  struct f_subst_502fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_500 = cp_rt_gstr(s_500);
F->r_501 = cp_rt_gstr(r_501);
{ rt_int lo1705 = ({ rt_gstr at1702 = F->s_500; at1702.lo; }), hi1706 = rt_sub(({ rt_gstr at1703 = F->s_500; at1703.hi; }), ((rt_int)1LL));
for (rt_int it1707 = lo1705; it1707 <= hi1706; it1707++) {
F->i_1704 = it1707;
if (((({ rt_gstr ix1708 = F->s_500; ix1708.p[rt_index(F->i_1704, ix1708.lo, ix1708.hi) - ix1708.lo]; }) == 64) && (({ rt_gstr ix1709 = F->s_500; ix1709.p[rt_index(rt_add(F->i_1704, ((rt_int)1LL)), ix1709.lo, ix1709.hi) - ix1709.lo]; }) == 64))) {
F->result_ = cat_rt_gstr(cat_rt_gstr(({ rt_gstr sl1711 = F->s_500; rt_int l_ = ({ rt_gstr at1710 = F->s_500; at1710.lo; }), h_ = rt_sub(F->i_1704, ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl1711.lo, sl1711.hi); rt_index(h_, sl1711.lo, sl1711.hi); } sl1711.p += l_ - sl1711.lo; sl1711.lo = l_; sl1711.hi = h_; sl1711; }), F->r_501), f_subst_502(F->up, ({ rt_gstr sl1715 = F->s_500; rt_int l_ = rt_add(F->i_1704, ((rt_int)2LL)), h_ = ({ rt_gstr at1714 = F->s_500; at1714.hi; }); if (l_ <= h_) { rt_index(l_, sl1715.lo, sl1715.hi); rt_index(h_, sl1715.lo, sl1715.hi); } sl1715.p += l_ - sl1715.lo; sl1715.lo = l_; sl1715.hi = h_; sl1715; }), F->r_501));
goto ret_;
}
}
}
L_end_1701: ;
F->result_ = F->s_500;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_mentions_record_504(struct f_greenc_1fr *up_, P137 s_503) {
  struct f_mentions_record_504fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_503 = s_503;
if ((F->s_503 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1719 = ((rt_int)1LL), hi1720 = rt_sub(({ rt_gstr at1717 = (*(P137)rt_nil_check(F->s_503)); at1717.hi >= at1717.lo ? at1717.hi - at1717.lo + 1 : (rt_int)0; }), ((rt_int)1LL));
for (rt_int it1721 = lo1719; it1721 <= hi1720; it1721++) {
F->i_1718 = it1721;
if (((({ rt_gstr ix1722 = (*(P137)rt_nil_check(F->s_503)); ix1722.p[rt_index(F->i_1718, ix1722.lo, ix1722.hi) - ix1722.lo]; }) == 64) && (({ rt_gstr ix1723 = (*(P137)rt_nil_check(F->s_503)); ix1723.p[rt_index(rt_add(F->i_1718, ((rt_int)1LL)), ix1723.lo, ix1723.hi) - ix1723.lo]; }) == 64))) {
F->result_ = 1;
goto ret_;
}
}
}
L_end_1716: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_subst_cons_508(struct f_greenc_1fr *up_, P175 c_505, rt_gstr r_506, P175 *res_507) {
  struct f_subst_cons_508fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_505 = c_505;
F->r_506 = cp_rt_gstr(r_506);
F->res_507 = res_507;
if (((F->c_505 == NULL) || (!(f_mentions_record_504(F->up, (*(P175)rt_nil_check(F->c_505)).lo_) || f_mentions_record_504(F->up, (*(P175)rt_nil_check(F->c_505)).hi_))))) {
(*F->res_507) = F->c_505;
goto ret_;
}
(*F->res_507) = f_new_cons_419(F->up);
as_R176(&(*(P175)rt_nil_check((*F->res_507))), (*(P175)rt_nil_check(F->c_505)));
(*(P175)rt_nil_check((*F->res_507))).lo_ = f_mk_205(F->up, f_subst_502(F->up, (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_505)).lo_)), F->r_506));
(*(P175)rt_nil_check((*F->res_507))).hi_ = f_mk_205(F->up, f_subst_502(F->up, (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_505)).hi_)), F->r_506));
ret_:

  return;
}

static void f_remove_sym_510(struct f_greenc_1fr *up_, P114 y_509) {
  struct f_remove_sym_510fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_509 = y_509;
F->h_1724 = f_hash_381(F->up, (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_509)).name_)));
F->p_1725 = NULL;
if ((({ A113 ix1726 = F->up->table_116; ix1726.p[rt_index(F->h_1724, ix1726.lo, ix1726.hi) - ix1726.lo]; }) == F->y_509)) {
(*({ A113 *ix1727 = &(F->up->table_116); &ix1727->p[rt_index(F->h_1724, ix1727->lo, ix1727->hi) - ix1727->lo]; })) = (*(P114)rt_nil_check(F->y_509)).chain_;
} else {
F->p_1725 = ({ A113 ix1728 = F->up->table_116; ix1728.p[rt_index(F->h_1724, ix1728.lo, ix1728.hi) - ix1728.lo]; });
while (((F->p_1725 != NULL) && ((*(P114)rt_nil_check(F->p_1725)).chain_ != F->y_509))) {
F->p_1725 = (*(P114)rt_nil_check(F->p_1725)).chain_;
}
L_end_1729: ;
if ((F->p_1725 != NULL)) {
(*(P114)rt_nil_check(F->p_1725)).chain_ = (*(P114)rt_nil_check(F->y_509)).chain_;
}
}
if ((F->up->scope_stack_118 == F->y_509)) {
F->up->scope_stack_118 = (*(P114)rt_nil_check(F->y_509)).stack_;
} else {
F->p_1725 = F->up->scope_stack_118;
while (((F->p_1725 != NULL) && ((*(P114)rt_nil_check(F->p_1725)).stack_ != F->y_509))) {
F->p_1725 = (*(P114)rt_nil_check(F->p_1725)).stack_;
}
L_end_1730: ;
if ((F->p_1725 != NULL)) {
(*(P114)rt_nil_check(F->p_1725)).stack_ = (*(P114)rt_nil_check(F->y_509)).stack_;
}
}
ret_:

  return;
}

static void f_record_components_515(struct f_greenc_1fr *up_, P171 list_511, P119 t_512, P1731 g_513, rt_int line_514) {
  struct f_record_components_515fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->list_511 = list_511;
F->t_512 = t_512;
F->g_513 = g_513;
F->line_514 = line_514;
F->comp_1733 = NULL;
F->comp_1733 = F->list_511;
F->f_1734 = NULL;
F->tail_1735 = NULL;
F->df_1736 = NULL;
F->prev_1737 = NULL;
F->pt_1738 = NULL;
F->vt_1739 = NULL;
F->pc_1740 = NULL;
F->y_1741 = NULL;
F->acc_1742 = NULL;
F->v_1743 = NULL;
F->x_1744 = NULL;
F->arm_1745 = NULL;
F->g2_1746 = NULL;
F->tail_1735 = (*(P119)rt_nil_check(F->t_512)).fields_;
while (((F->tail_1735 != NULL) && ((*(P1607)rt_nil_check(F->tail_1735)).next_ != NULL))) {
F->tail_1735 = (*(P1607)rt_nil_check(F->tail_1735)).next_;
}
L_end_1747: ;
while ((F->comp_1733 != NULL)) {
if (((*(P171)rt_nil_check(F->comp_1733)).kind_ == ((rt_int)23LL))) {
F->df_1736 = (*(P119)rt_nil_check(F->t_512)).fields_;
while (((F->df_1736 != NULL) && (!eq_rt_gstr((*(P137)rt_nil_check((*(P1607)rt_nil_check(F->df_1736)).name_)), (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->comp_1733)).a_)).name_)))))) {
F->df_1736 = (*(P1607)rt_nil_check(F->df_1736)).next_;
}
L_end_1749: ;
if (((F->df_1736 == NULL) || (!(*(P1607)rt_nil_check(F->df_1736)).is_discr_))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->comp_1733)).line_, cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->comp_1733)).a_)).name_)), rt_g_lit(" is not a discriminant: a constant component ", 45)), rt_g_lit("without a value (RM79 3.7.1)", 28)));
}
if ((!f_is_discrete_405(F->up, (*(P1607)rt_nil_check(F->df_1736)).t_))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->comp_1733)).line_, rt_g_lit("the discriminant of a variant part is of a discrete type (RM79 3.7.2)", 69));
}
F->arm_1745 = (*(P171)rt_nil_check(F->comp_1733)).b_;
while ((F->arm_1745 != NULL)) {
F->g2_1746 = ({ R1732 *cell1751 = rt_alloc(sizeof(R1732)); *cell1751 = cp_R1732(({ R1732 ag1752; ag1752.disc_ = (*(P1607)rt_nil_check(F->df_1736)).name_; ag1752.arm_ = F->arm_1745; ag1752.variant_ = F->comp_1733; ag1752.next_ = F->g_513; ag1752; })); (P1731)cell1751; });
f_record_components_515(F->up, (*(P171)rt_nil_check(F->arm_1745)).b_, F->t_512, F->g2_1746, F->line_514);
F->arm_1745 = (*(P171)rt_nil_check(F->arm_1745)).next_;
}
L_end_1750: ;
F->tail_1735 = (*(P119)rt_nil_check(F->t_512)).fields_;
while (((F->tail_1735 != NULL) && ((*(P1607)rt_nil_check(F->tail_1735)).next_ != NULL))) {
F->tail_1735 = (*(P1607)rt_nil_check(F->tail_1735)).next_;
}
L_end_1753: ;
} else {
if ((f_field_index_830(F->up, F->t_512, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->comp_1733)).name_))) != ((rt_int)0LL))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->comp_1733)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("component ", 10), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->comp_1733)).name_))), rt_g_lit(" is declared twice (RM79 3.7)", 29)));
}
F->f_1734 = ({ R1608 *cell1754 = rt_alloc(sizeof(R1608)); *cell1754 = cp_R1608(({ R1608 ag1755; ag1755.name_ = (*(P171)rt_nil_check(F->comp_1733)).name_; ag1755.t_ = NULL; ag1755.c_ = NULL; ag1755.next_ = NULL; ag1755.dflt_ = (*(P171)rt_nil_check(F->comp_1733)).b_; ag1755.is_const_ = ((*(P171)rt_nil_check(F->comp_1733)).flag_ == ((rt_int)1LL)); ag1755.is_discr_ = 0; ag1755.dsym_ = NULL; ag1755.guard_ = F->g_513; ag1755.cond_ = NULL; ag1755.dyn_ = 0; ag1755; })); (P1607)cell1754; });
if ((((*(P171)rt_nil_check(F->comp_1733)).a_ == F->prev_1737) && ((*(P171)rt_nil_check((*(P171)rt_nil_check(F->comp_1733)).a_)).kind_ != ((rt_int)80LL)))) {
(*(P1607)rt_nil_check(F->f_1734)).t_ = F->pt_1738;
(*(P1607)rt_nil_check(F->f_1734)).c_ = F->pc_1740;
} else {
f_resolve_446(F->up, (*(P171)rt_nil_check(F->comp_1733)).a_, &(*(P1607)rt_nil_check(F->f_1734)).t_, &(*(P1607)rt_nil_check(F->f_1734)).c_);
}
F->prev_1737 = (*(P171)rt_nil_check(F->comp_1733)).a_;
F->pt_1738 = (*(P1607)rt_nil_check(F->f_1734)).t_;
F->pc_1740 = (*(P1607)rt_nil_check(F->f_1734)).c_;
if ((((*(P1607)rt_nil_check(F->f_1734)).c_ != NULL) && (f_mentions_record_504(F->up, (*(P175)rt_nil_check((*(P1607)rt_nil_check(F->f_1734)).c_)).lo_) || f_mentions_record_504(F->up, (*(P175)rt_nil_check((*(P1607)rt_nil_check(F->f_1734)).c_)).hi_)))) {
(*(P1607)rt_nil_check(F->f_1734)).dyn_ = 1;
if (((*(P119)rt_nil_check((*(P1607)rt_nil_check(F->f_1734)).t_)).kind_ != ((rt_int)6LL))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->comp_1733)).line_, rt_g_lit("a discriminant is used only as an array bound or a variant selector (RM79 3.7.1)", 80));
}
if (((*(P119)rt_nil_check((*(P1607)rt_nil_check(F->f_1734)).t_)).tcons_ == (*(P1607)rt_nil_check(F->f_1734)).c_)) {
(*(P119)rt_nil_check((*(P1607)rt_nil_check(F->f_1734)).t_)).tcons_ = NULL;
}
}
if ((F->g_513 != NULL)) {
f_guard_cond_519(F->up, F->g_513, (*(P1607)rt_nil_check(F->f_1734)).t_, &F->x_1744);
(*(P1607)rt_nil_check(F->f_1734)).cond_ = F->x_1744;
}
if (((*(P171)rt_nil_check(F->comp_1733)).b_ != NULL)) {
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->comp_1733)).b_, (*(P1607)rt_nil_check(F->f_1734)).t_, &F->vt_1739, &F->v_1743);
f_check_type_425(F->up, F->vt_1739, (*(P1607)rt_nil_check(F->f_1734)).t_, (*(P171)rt_nil_check(F->comp_1733)).line_);
F->y_1741 = f_new_sym_416(F->up, ((rt_int)2LL), f_mk_205(F->up, rt_g_lit("dflt", 4)));
f_storage_567(F->up, rt_g_lit("dflt", 4), (*(P1607)rt_nil_check(F->f_1734)).t_, &F->acc_1742);
(*(P114)rt_nil_check(F->y_1741)).t_ = (*(P1607)rt_nil_check(F->f_1734)).t_;
(*(P114)rt_nil_check(F->y_1741)).c_ = (*(P1607)rt_nil_check(F->f_1734)).c_;
f_bind_570(F->up, F->y_1741, F->acc_1742);
if ((f_composite_542(F->up, (*(P1607)rt_nil_check(F->f_1734)).t_) && (((*(P1607)rt_nil_check(F->f_1734)).c_ == NULL) || ((*(P175)rt_nil_check((*(P1607)rt_nil_check(F->f_1734)).c_)).lo_ == NULL)))) {
f_copy_code_552(F->up, (*(P1607)rt_nil_check(F->f_1734)).t_, (*(P137)rt_nil_check(F->v_1743)), &F->x_1744);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->acc_1742)), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->x_1744))), one_rt_gstr(59)));
} else {
f_init_storage_540(F->up, (*(P137)rt_nil_check(F->acc_1742)), (*(P1607)rt_nil_check(F->f_1734)).t_, (*(P1607)rt_nil_check(F->f_1734)).c_);
f_assign_code_548(F->up, (*(P137)rt_nil_check(F->acc_1742)), (*(P1607)rt_nil_check(F->f_1734)).t_, (*(P137)rt_nil_check(F->v_1743)), (*(P1607)rt_nil_check(F->f_1734)).c_, &F->x_1744);
f_emit_232(F->up, (*(P137)rt_nil_check(F->x_1744)));
}
(*(P1607)rt_nil_check(F->f_1734)).dsym_ = F->y_1741;
} else if ((*(P1607)rt_nil_check(F->f_1734)).is_const_) {
(*(P1607)rt_nil_check(F->f_1734)).is_discr_ = 1;
F->y_1741 = f_new_sym_416(F->up, ((rt_int)2LL), (*(P1607)rt_nil_check(F->f_1734)).name_);
(*(P114)rt_nil_check(F->y_1741)).t_ = (*(P1607)rt_nil_check(F->f_1734)).t_;
(*(P114)rt_nil_check(F->y_1741)).c_ = (*(P1607)rt_nil_check(F->f_1734)).c_;
(*(P114)rt_nil_check(F->y_1741)).ro_ = 1;
(*(P114)rt_nil_check(F->y_1741)).access_path_ = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(@@.", 4), f_c_field_222(F->up, (*(P137)rt_nil_check((*(P1607)rt_nil_check(F->f_1734)).name_)))), one_rt_gstr(41)));
F->up->depth_117 = rt_add(F->up->depth_117, ((rt_int)1LL));
f_define_411(F->up, F->y_1741, (*(P171)rt_nil_check(F->comp_1733)).line_);
F->up->depth_117 = rt_sub(F->up->depth_117, ((rt_int)1LL));
(*(P114)rt_nil_check(F->y_1741)).mnext_ = F->up->disc_syms_179;
F->up->disc_syms_179 = F->y_1741;
}
if ((F->tail_1735 == NULL)) {
(*(P119)rt_nil_check(F->t_512)).fields_ = F->f_1734;
} else {
(*(P1607)rt_nil_check(F->tail_1735)).next_ = F->f_1734;
}
F->tail_1735 = F->f_1734;
}
F->comp_1733 = (*(P171)rt_nil_check(F->comp_1733)).next_;
}
L_end_1748: ;
ret_:

  return;
}

static void f_guard_cond_519(struct f_greenc_1fr *up_, P1731 g_516, P119 t_517, P137 *r_518) {
  struct f_guard_cond_519fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->g_516 = g_516;
F->t_517 = t_517;
F->r_518 = r_518;
F->a_1756 = NULL;
F->l_1757 = NULL;
F->df_1758 = NULL;
F->x_1759 = NULL;
F->d_1760 = NULL;
F->dt_1761 = NULL;
F->vt_1762 = NULL;
F->lo_1763 = NULL;
F->hi_1764 = NULL;
(*F->r_518) = f_mk_205(F->up, rt_g_lit("1", 1));
if ((F->g_516 == NULL)) {
goto ret_;
}
F->d_1760 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(@@.", 4), f_c_field_222(F->up, (*(P137)rt_nil_check((*(P1731)rt_nil_check(F->g_516)).disc_)))), one_rt_gstr(41)));
F->df_1758 = NULL;
if (((*(P171)rt_nil_check((*(P1731)rt_nil_check(F->g_516)).arm_)).flag_ == ((rt_int)1LL))) {
F->x_1759 = f_mk_205(F->up, rt_g_lit("0", 1));
F->a_1756 = (*(P171)rt_nil_check((*(P1731)rt_nil_check(F->g_516)).variant_)).b_;
while ((F->a_1756 != NULL)) {
if ((F->a_1756 != (*(P1731)rt_nil_check(F->g_516)).arm_)) {
f_arm_test_524(F->up, F->a_1756, (*(P1731)rt_nil_check(F->g_516)).disc_, (*(P137)rt_nil_check(F->d_1760)), &F->x_1759);
}
F->a_1756 = (*(P171)rt_nil_check(F->a_1756)).next_;
}
L_end_1765: ;
F->x_1759 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("!(", 2), (*(P137)rt_nil_check(F->x_1759))), one_rt_gstr(41)));
} else {
F->x_1759 = f_mk_205(F->up, rt_g_lit("0", 1));
f_arm_test_524(F->up, (*(P1731)rt_nil_check(F->g_516)).arm_, (*(P1731)rt_nil_check(F->g_516)).disc_, (*(P137)rt_nil_check(F->d_1760)), &F->x_1759);
}
f_guard_cond_519(F->up, (*(P1731)rt_nil_check(F->g_516)).next_, F->t_517, &(*F->r_518));
(*F->r_518) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check((*F->r_518)))), rt_g_lit(" && (", 5)), (*(P137)rt_nil_check(F->x_1759))), rt_g_lit("))", 2)));
ret_:

  return;
}

static void f_arm_test_524(struct f_greenc_1fr *up_, P171 arm_520, P137 dname_521, rt_gstr d_522, P137 *x_523) {
  struct f_arm_test_524fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->arm_520 = arm_520;
F->dname_521 = dname_521;
F->d_522 = cp_rt_gstr(d_522);
F->x_523 = x_523;
F->l_1766 = NULL;
F->l_1766 = (*(P171)rt_nil_check(F->arm_520)).a_;
F->y_1767 = NULL;
F->y_1767 = f_lookup_383(F->up, (*(P137)rt_nil_check(F->dname_521)));
F->dt_1768 = NULL;
F->vt_1769 = NULL;
F->lo_1770 = NULL;
F->hi_1771 = NULL;
F->dt_1768 = (*(P114)rt_nil_check(F->y_1767)).t_;
while ((F->l_1766 != NULL)) {
if (((*(P171)rt_nil_check(F->l_1766)).b_ == NULL)) {
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->l_1766)).a_, F->dt_1768, &F->vt_1769, &F->lo_1770);
f_check_type_425(F->up, F->vt_1769, F->dt_1768, (*(P171)rt_nil_check(F->l_1766)).line_);
(*F->x_523) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check((*F->x_523))), rt_g_lit(" || ", 4)), F->d_522), rt_g_lit(" == ", 4)), (*(P137)rt_nil_check(F->lo_1770))));
} else {
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->l_1766)).a_, F->dt_1768, &F->vt_1769, &F->lo_1770);
f_check_type_425(F->up, F->vt_1769, F->dt_1768, (*(P171)rt_nil_check(F->l_1766)).line_);
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->l_1766)).b_, F->dt_1768, &F->vt_1769, &F->hi_1771);
f_check_type_425(F->up, F->vt_1769, F->dt_1768, (*(P171)rt_nil_check(F->l_1766)).line_);
(*F->x_523) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check((*F->x_523))), rt_g_lit(" || (", 5)), F->d_522), rt_g_lit(" >= ", 4)), (*(P137)rt_nil_check(F->lo_1770))), rt_g_lit(" && ", 4)), F->d_522), rt_g_lit(" <= ", 4)), (*(P137)rt_nil_check(F->hi_1771))), one_rt_gstr(41)));
}
F->l_1766 = (*(P171)rt_nil_check(F->l_1766)).next_;
}
L_end_1772: ;
ret_:

  return;
}

static void f_derived_type_529(struct f_greenc_1fr *up_, P171 d_525, P137 name_526, P119 *t_527, P175 *c_528) {
  struct f_derived_type_529fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_525 = d_525;
F->name_526 = name_526;
F->t_527 = t_527;
F->c_528 = c_528;
F->pt_1773 = NULL;
F->ct_1774 = NULL;
F->ph_1775 = NULL;
F->ph_1775 = F->up->completing_170;
F->up->completing_170 = NULL;
f_resolve_446(F->up, (*(P171)rt_nil_check(F->d_525)).a_, &F->pt_1773, &(*F->c_528));
if ((((*(P119)rt_nil_check(F->pt_1773)).kind_ == ((rt_int)9LL)) && (*(P119)rt_nil_check(F->pt_1773)).priv_)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->d_525)).line_, rt_g_lit("a type cannot be derived from a private type before its full declaration", 72));
}
if ((f_composite_542(F->up, F->pt_1773) || ((*(P119)rt_nil_check(F->pt_1773)).kind_ == ((rt_int)8LL)))) {
f_ctype_430(F->up, F->pt_1773, &F->ct_1774);
}
if ((F->ph_1775 == NULL)) {
(*F->t_527) = f_new_typ_418(F->up, (*(P119)rt_nil_check(F->pt_1773)).kind_);
} else {
(*F->t_527) = F->ph_1775;
}
as_R120(&(*(P119)rt_nil_check((*F->t_527))), (*(P119)rt_nil_check(F->pt_1773)));
(*(P119)rt_nil_check((*F->t_527))).name_ = F->name_526;
(*(P119)rt_nil_check((*F->t_527))).parent_ = F->pt_1773;
(*(P119)rt_nil_check((*F->t_527))).next_ = NULL;
if (((*(P119)rt_nil_check((*F->t_527))).kind_ == ((rt_int)4LL))) {
f_derive_literals_475(F->up, (*F->t_527), (*(P171)rt_nil_check(F->d_525)).line_);
}
f_inherit_472(F->up, F->pt_1773, (*F->t_527), (*(P171)rt_nil_check(F->d_525)).line_);
ret_:

  return;
}

static void f_real_type_534(struct f_greenc_1fr *up_, P171 d_530, P137 name_531, P119 *t_532, P175 *c_533) {
  struct f_real_type_534fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_530 = d_530;
F->name_531 = name_531;
F->t_532 = t_532;
F->c_533 = c_533;
F->dt_1776 = NULL;
F->dv_1777 = NULL;
(*F->c_533) = f_new_cons_419(F->up);
if (((*(P171)rt_nil_check(F->d_530)).flag_ == ((rt_int)1LL))) {
f_manifest_442(F->up, (*(P171)rt_nil_check(F->d_530)).a_, &F->n_1778, &F->ok_1779);
if ((!F->ok_1779)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->d_530)).line_, rt_g_lit("the digits of a floating point type are static (RM79 3.5.5)", 59));
}
if (((F->n_1778 < ((rt_int)1LL)) || (F->n_1778 > ((rt_int)15LL)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->d_530)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("no predefined floating point type has ", 38), rt_g_s2g(rt_str_of_int(F->n_1778))), rt_g_lit(" digits", 7)));
}
f_fresh_typ_468(F->up, ((rt_int)3LL), F->name_531, &(*F->t_532));
(*(P119)rt_nil_check((*F->t_532))).ndigits_ = F->n_1778;
if ((F->n_1778 <= ((rt_int)6LL))) {
(*(P119)rt_nil_check((*F->t_532))).parent_ = F->up->ty_sfloat_166;
} else {
(*(P119)rt_nil_check((*F->t_532))).parent_ = F->up->ty_float_155;
}
} else {
if (((*(P171)rt_nil_check(F->d_530)).b_ == NULL)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->d_530)).line_, rt_g_lit("a fixed point type needs a range (RM79 3.5.5)", 45));
}
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->d_530)).a_, F->up->ty_float_155, &F->dt_1776, &F->dv_1777);
if (((*(P119)rt_nil_check(F->dt_1776)).kind_ != ((rt_int)3LL))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->d_530)).line_, rt_g_lit("the delta of a fixed point type is a real number (RM79 3.5.5)", 61));
}
f_fresh_typ_468(F->up, ((rt_int)16LL), F->name_531, &(*F->t_532));
(*(P119)rt_nil_check((*F->t_532))).fdelta_ = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check(F->dv_1777))), one_rt_gstr(41)));
(*(P119)rt_nil_check((*F->t_532))).fsmall_ = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_small(", 11), (*(P137)rt_nil_check(F->dv_1777))), one_rt_gstr(41)));
}
if (((*(P171)rt_nil_check(F->d_530)).b_ != NULL)) {
f_range_of_464(F->up, (*(P171)rt_nil_check(F->d_530)).b_, (*F->t_532), (*F->c_533));
}
if (((*(P119)rt_nil_check((*F->t_532))).parent_ != NULL)) {
f_inherit_472(F->up, (*(P119)rt_nil_check((*F->t_532))).parent_, (*F->t_532), (*(P171)rt_nil_check(F->d_530)).line_);
}
ret_:

  return;
}

static void f_finish_ptr_536(struct f_greenc_1fr *up_, P119 t_535) {
  struct f_finish_ptr_536fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_535 = t_535;
F->c_1780 = NULL;
if ((((*(P119)rt_nil_check(F->t_535)).target_ == NULL) && ((*(P119)rt_nil_check(F->t_535)).decl_ != NULL))) {
f_resolve_446(F->up, (*(P119)rt_nil_check(F->t_535)).decl_, &(*(P119)rt_nil_check(F->t_535)).target_, &F->c_1780);
if ((((*(P119)rt_nil_check(F->t_535)).target_ != NULL) && ((*(P119)rt_nil_check((*(P119)rt_nil_check(F->t_535)).target_)).kind_ == ((rt_int)8LL)))) {
f_fail_226(F->up, (*(P171)rt_nil_check((*(P119)rt_nil_check(F->t_535)).decl_)).line_, rt_g_lit("an access type cannot designate another access type (RM79 3.8)", 62));
}
}
ret_:

  return;
}

static void f_init_storage_540(struct f_greenc_1fr *up_, rt_gstr lval_537, P119 t_538, P175 c_539) {
  struct f_init_storage_540fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lval_537 = cp_rt_gstr(lval_537);
F->t_538 = t_538;
F->c_539 = c_539;
F->ec_1781 = NULL;
F->fc_1782 = NULL;
F->d_1783 = NULL;
F->ct_1784 = NULL;
F->i_1785 = NULL;
F->v_1786 = NULL;
F->x_1787 = NULL;
F->vt_1788 = NULL;
F->f_1789 = NULL;
if (((*(P119)rt_nil_check(F->t_538)).kind_ == ((rt_int)8LL))) {
f_emit_232(F->up, cat_rt_gstr(F->lval_537, rt_g_lit(" = NULL;", 8)));
} else if (((*(P119)rt_nil_check(F->t_538)).kind_ == ((rt_int)6LL))) {
if (((F->c_539 == NULL) || ((*(P175)rt_nil_check(F->c_539)).lo_ == NULL))) {
f_fail_226(F->up, ((rt_int)0LL), rt_g_lit("an array object needs an index constraint (RM79 3.6)", 52));
}
f_elem_ctype_494(F->up, (*(P119)rt_nil_check(F->t_538)).elem_, &F->ct_1784);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_537, rt_g_lit(".lo = ", 6)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_539)).lo_))), rt_g_lit("; ", 2)), F->lval_537), rt_g_lit(".hi = ", 6)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_539)).hi_))), one_rt_gstr(59)));
F->ec_1781 = (*(P119)rt_nil_check(F->t_538)).elemcons_;
if (((((*(P119)rt_nil_check(F->t_538)).dims_ > ((rt_int)1LL)) && ((*(P175)rt_nil_check(F->c_539)).inner_ != NULL)) && ((*(P175)rt_nil_check((*(P175)rt_nil_check(F->c_539)).inner_)).lo_ != NULL))) {
F->ec_1781 = (*(P175)rt_nil_check(F->c_539)).inner_;
}
if (((((*(P119)rt_nil_check(F->t_538)).dims_ > ((rt_int)1LL)) && (F->ec_1781 != NULL)) && ((*(P175)rt_nil_check(F->ec_1781)).lo_ != NULL))) {
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_537, rt_g_lit(".lo2 = ", 7)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->ec_1781)).lo_))), rt_g_lit("; ", 2)), F->lval_537), rt_g_lit(".hi2 = ", 7)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->ec_1781)).hi_))), one_rt_gstr(59)));
} else {
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_537, rt_g_lit(".lo2 = 1; ", 10)), F->lval_537), rt_g_lit(".hi2 = 1;", 9)));
}
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_537, rt_g_lit(".p = rt_alloc(sizeof(", 21)), (*(P137)rt_nil_check(F->ct_1784))), rt_g_lit(") * (size_t)G_CNT(", 18)), F->lval_537), rt_g_lit("));", 3)));
if ((((*(P119)rt_nil_check((*(P119)rt_nil_check(F->t_538)).elem_)).kind_ == ((rt_int)6LL)) || ((*(P119)rt_nil_check((*(P119)rt_nil_check(F->t_538)).elem_)).kind_ == ((rt_int)7LL)))) {
f_new_name_208(F->up, rt_g_lit("i", 1), &F->i_1785);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P137)rt_nil_check(F->i_1785))), rt_g_lit(" = 0; ", 6)), (*(P137)rt_nil_check(F->i_1785))), rt_g_lit(" < G_CNT(", 9)), F->lval_537), rt_g_lit("); ", 3)), (*(P137)rt_nil_check(F->i_1785))), rt_g_lit("++) {", 5)));
f_init_storage_540(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_537, rt_g_lit(".p[", 3)), (*(P137)rt_nil_check(F->i_1785))), one_rt_gstr(93)), (*(P119)rt_nil_check(F->t_538)).elem_, F->ec_1781);
f_emit_232(F->up, rt_g_lit("}", 1));
}
} else if (((*(P119)rt_nil_check(F->t_538)).kind_ == ((rt_int)7LL))) {
if ((F->c_539 != NULL)) {
F->d_1783 = (*(P175)rt_nil_check(F->c_539)).dv_;
while ((F->d_1783 != NULL)) {
F->f_1789 = (*(P119)rt_nil_check(F->t_538)).fields_;
while ((!eq_rt_gstr((*(P137)rt_nil_check((*(P1607)rt_nil_check(F->f_1789)).name_)), (*(P137)rt_nil_check((*(P1611)rt_nil_check(F->d_1783)).name_))))) {
F->f_1789 = (*(P1607)rt_nil_check(F->f_1789)).next_;
}
L_end_1791: ;
f_assign_code_548(F->up, cat_rt_gstr(cat_rt_gstr(F->lval_537, one_rt_gstr(46)), f_c_field_222(F->up, (*(P137)rt_nil_check((*(P1607)rt_nil_check(F->f_1789)).name_)))), (*(P1607)rt_nil_check(F->f_1789)).t_, (*(P137)rt_nil_check((*(P1611)rt_nil_check(F->d_1783)).v_)), (*(P1607)rt_nil_check(F->f_1789)).c_, &F->x_1787);
f_emit_232(F->up, (*(P137)rt_nil_check(F->x_1787)));
F->d_1783 = (*(P1611)rt_nil_check(F->d_1783)).next_;
}
L_end_1790: ;
}
F->f_1789 = (*(P119)rt_nil_check(F->t_538)).fields_;
while ((F->f_1789 != NULL)) {
f_subst_cons_508(F->up, (*(P1607)rt_nil_check(F->f_1789)).c_, F->lval_537, &F->fc_1782);
if (((*(P1607)rt_nil_check(F->f_1789)).dyn_ && ((F->c_539 == NULL) || ((*(P175)rt_nil_check(F->c_539)).dv_ == NULL)))) {
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_537, one_rt_gstr(46)), f_c_field_222(F->up, (*(P137)rt_nil_check((*(P1607)rt_nil_check(F->f_1789)).name_)))), rt_g_lit(".lo = 1; ", 9)), F->lval_537), one_rt_gstr(46)), f_c_field_222(F->up, (*(P137)rt_nil_check((*(P1607)rt_nil_check(F->f_1789)).name_)))), rt_g_lit(".hi = 0; ", 9)), F->lval_537), one_rt_gstr(46)), f_c_field_222(F->up, (*(P137)rt_nil_check((*(P1607)rt_nil_check(F->f_1789)).name_)))), rt_g_lit(".lo2 = ", 7)), F->lval_537), one_rt_gstr(46)), f_c_field_222(F->up, (*(P137)rt_nil_check((*(P1607)rt_nil_check(F->f_1789)).name_)))), rt_g_lit(".hi2 = 1; ", 10)), F->lval_537), one_rt_gstr(46)), f_c_field_222(F->up, (*(P137)rt_nil_check((*(P1607)rt_nil_check(F->f_1789)).name_)))), rt_g_lit(".p = NULL;", 10)));
} else if ((!(*(P1607)rt_nil_check(F->f_1789)).is_discr_)) {
f_init_storage_540(F->up, cat_rt_gstr(cat_rt_gstr(F->lval_537, one_rt_gstr(46)), f_c_field_222(F->up, (*(P137)rt_nil_check((*(P1607)rt_nil_check(F->f_1789)).name_)))), (*(P1607)rt_nil_check(F->f_1789)).t_, F->fc_1782);
}
if (((*(P1607)rt_nil_check(F->f_1789)).dsym_ != NULL)) {
f_access_of_632(F->up, (*(P1607)rt_nil_check(F->f_1789)).dsym_, &F->v_1786);
f_assign_code_548(F->up, cat_rt_gstr(cat_rt_gstr(F->lval_537, one_rt_gstr(46)), f_c_field_222(F->up, (*(P137)rt_nil_check((*(P1607)rt_nil_check(F->f_1789)).name_)))), (*(P1607)rt_nil_check(F->f_1789)).t_, (*(P137)rt_nil_check(F->v_1786)), F->fc_1782, &F->x_1787);
f_emit_232(F->up, (*(P137)rt_nil_check(F->x_1787)));
}
F->f_1789 = (*(P1607)rt_nil_check(F->f_1789)).next_;
}
L_end_1792: ;
}
ret_:

  return;
}

static int f_composite_542(struct f_greenc_1fr *up_, P119 t_541) {
  struct f_composite_542fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_541 = t_541;
F->result_ = (((*(P119)rt_nil_check(F->t_541)).kind_ == ((rt_int)6LL)) || ((*(P119)rt_nil_check(F->t_541)).kind_ == ((rt_int)7LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_assign_code_548(struct f_greenc_1fr *up_, rt_gstr lval_543, P119 t_544, rt_gstr v_545, P175 c_546, P137 *r_547) {
  struct f_assign_code_548fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lval_543 = cp_rt_gstr(lval_543);
F->t_544 = t_544;
F->v_545 = cp_rt_gstr(v_545);
F->c_546 = c_546;
F->r_547 = r_547;
F->ct_1793 = NULL;
F->x_1794 = NULL;
F->d_1795 = NULL;
if (((((*(P119)rt_nil_check(F->t_544)).kind_ == ((rt_int)7LL)) && (F->c_546 != NULL)) && ((*(P175)rt_nil_check(F->c_546)).dv_ != NULL))) {
f_ctype_430(F->up, F->t_544, &F->ct_1793);
F->x_1794 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P137)rt_nil_check(F->ct_1793))), rt_g_lit(" dv_ = ", 7)), F->v_545), one_rt_gstr(59)));
F->d_1795 = (*(P175)rt_nil_check(F->c_546)).dv_;
while ((F->d_1795 != NULL)) {
F->x_1794 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->x_1794)), rt_g_lit(" if (dv_.", 9)), f_c_field_222(F->up, (*(P137)rt_nil_check((*(P1611)rt_nil_check(F->d_1795)).name_)))), rt_g_lit(" != (", 5)), (*(P137)rt_nil_check((*(P1611)rt_nil_check(F->d_1795)).v_))), rt_g_lit(")) rt_raise(RT_X_TAG);", 22)));
F->d_1795 = (*(P1611)rt_nil_check(F->d_1795)).next_;
}
L_end_1796: ;
(*F->r_547) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->x_1794)), rt_g_lit(" as_", 4)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_544)).cname_))), rt_g_lit("(&", 2)), F->lval_543), rt_g_lit(", dv_); }", 9)));
} else if (f_composite_542(F->up, F->t_544)) {
f_ctype_430(F->up, F->t_544, &F->ct_1793);
(*F->r_547) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("as_", 3), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_544)).cname_))), rt_g_lit("(&", 2)), F->lval_543), rt_g_lit(", ", 2)), F->v_545), rt_g_lit(");", 2)));
} else if (((((((*(P119)rt_nil_check(F->t_544)).kind_ == ((rt_int)1LL)) || ((*(P119)rt_nil_check(F->t_544)).kind_ == ((rt_int)4LL))) || ((*(P119)rt_nil_check(F->t_544)).kind_ == ((rt_int)11LL))) && (F->c_546 != NULL)) && ((*(P175)rt_nil_check(F->c_546)).lo_ != NULL))) {
(*F->r_547) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_543, rt_g_lit(" = rt_range(", 12)), F->v_545), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_546)).lo_))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_546)).hi_))), rt_g_lit(");", 2)));
} else if ((((((*(P119)rt_nil_check(F->t_544)).kind_ == ((rt_int)3LL)) || ((*(P119)rt_nil_check(F->t_544)).kind_ == ((rt_int)16LL))) && (F->c_546 != NULL)) && ((*(P175)rt_nil_check(F->c_546)).lo_ != NULL))) {
(*F->r_547) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_543, rt_g_lit(" = rt_frange(", 13)), F->v_545), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_546)).lo_))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_546)).hi_))), rt_g_lit(");", 2)));
} else {
(*F->r_547) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_543, rt_g_lit(" = ", 3)), F->v_545), one_rt_gstr(59)));
}
ret_:

  return;
}

static void f_copy_code_552(struct f_greenc_1fr *up_, P119 t_549, rt_gstr v_550, P137 *r_551) {
  struct f_copy_code_552fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_549 = t_549;
F->v_550 = cp_rt_gstr(v_550);
F->r_551 = r_551;
F->ct_1797 = NULL;
if (f_composite_542(F->up, F->t_549)) {
f_ctype_430(F->up, F->t_549, &F->ct_1797);
(*F->r_551) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("cp_", 3), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_549)).cname_))), one_rt_gstr(40)), F->v_550), one_rt_gstr(41)));
} else {
(*F->r_551) = f_mk_205(F->up, F->v_550);
}
ret_:

  return;
}

static void f_eq_code_557(struct f_greenc_1fr *up_, P119 t_553, rt_gstr a_554, rt_gstr b_555, P137 *r_556) {
  struct f_eq_code_557fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_553 = t_553;
F->a_554 = cp_rt_gstr(a_554);
F->b_555 = cp_rt_gstr(b_555);
F->r_556 = r_556;
F->ct_1798 = NULL;
if (f_composite_542(F->up, F->t_553)) {
f_ctype_430(F->up, F->t_553, &F->ct_1798);
(*F->r_556) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("eq_", 3), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_553)).cname_))), one_rt_gstr(40)), F->a_554), rt_g_lit(", ", 2)), F->b_555), one_rt_gstr(41)));
} else {
(*F->r_556) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_554), rt_g_lit(" == ", 4)), F->b_555), one_rt_gstr(41)));
}
ret_:

  return;
}

static int f_seen_name_560(struct f_greenc_1fr *up_, P148 l_558, rt_gstr s_559) {
  struct f_seen_name_560fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_558 = l_558;
F->s_559 = cp_rt_gstr(s_559);
F->p_1799 = NULL;
F->p_1799 = F->l_558;
while ((F->p_1799 != NULL)) {
if (eq_rt_gstr((*(P137)rt_nil_check((*(P148)rt_nil_check(F->p_1799)).s_)), F->s_559)) {
F->result_ = 1;
goto ret_;
}
F->p_1799 = (*(P148)rt_nil_check(F->p_1799)).next_;
}
L_end_1800: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_emit_helpers_561(struct f_greenc_1fr *up_) {
  struct f_emit_helpers_561fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_1801 = NULL;
F->t_1801 = F->up->all_types_121;
F->et_1802 = NULL;
F->done_1803 = NULL;
F->l_1804 = NULL;
while ((F->t_1801 != NULL)) {
if ((f_composite_542(F->up, F->t_1801) && (!f_seen_name_560(F->up, F->done_1803, (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1801)).cname_)))))) {
F->l_1804 = ({ R149 *cell1806 = rt_alloc(sizeof(R149)); *cell1806 = cp_R149(({ R149 ag1807; ag1807.s_ = (*(P119)rt_nil_check(F->t_1801)).cname_; ag1807.next_ = F->done_1803; ag1807; })); (P148)cell1806; });
F->done_1803 = F->l_1804;
f_put_to_230(F->up, F->up->out_helpers_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void as_", 15), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1801)).cname_))), one_rt_gstr(40)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1801)).cname_))), rt_g_lit(" *d, ", 5)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1801)).cname_))), rt_g_lit(" s);", 4)));
f_put_to_230(F->up, F->up->out_helpers_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1801)).cname_))), rt_g_lit(" cp_", 4)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1801)).cname_))), one_rt_gstr(40)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1801)).cname_))), rt_g_lit(" s);", 4)));
f_put_to_230(F->up, F->up->out_helpers_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int eq_", 14), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1801)).cname_))), one_rt_gstr(40)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1801)).cname_))), rt_g_lit(" a, ", 4)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1801)).cname_))), rt_g_lit(" b);", 4)));
if ((((*(P119)rt_nil_check(F->t_1801)).kind_ == ((rt_int)6LL)) && ((*(P119)rt_nil_check(F->t_1801)).dims_ == ((rt_int)1LL)))) {
f_ctype_430(F->up, (*(P119)rt_nil_check(F->t_1801)).elem_, &F->et_1802);
f_put_to_230(F->up, F->up->out_helpers_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1801)).cname_))), rt_g_lit(" cat_", 5)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1801)).cname_))), one_rt_gstr(40)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1801)).cname_))), rt_g_lit(" a, ", 4)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1801)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_230(F->up, F->up->out_helpers_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1801)).cname_))), rt_g_lit(" one_", 5)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_1801)).cname_))), one_rt_gstr(40)), (*(P137)rt_nil_check(F->et_1802))), rt_g_lit(" e);", 4)));
}
f_helper_bodies_563(F->up, F->t_1801);
}
F->t_1801 = (*(P119)rt_nil_check(F->t_1801)).next_;
}
L_end_1805: ;
ret_:

  return;
}

static void f_helper_bodies_563(struct f_greenc_1fr *up_, P119 t_562) {
  struct f_helper_bodies_563fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_562 = t_562;
F->c_1808 = NULL;
F->c_1808 = (*(P119)rt_nil_check(F->t_562)).cname_;
F->b_1809 = NULL;
F->b_1809 = F->up->out_funcs_130;
F->ct_1810 = NULL;
F->et_1811 = NULL;
F->x_1812 = NULL;
F->y_1813 = NULL;
F->conds_1814 = NULL;
F->f_1815 = NULL;
if (((*(P119)rt_nil_check(F->t_562)).kind_ == ((rt_int)6LL))) {
f_elem_ctype_494(F->up, (*(P119)rt_nil_check(F->t_562)).elem_, &F->ct_1810);
f_assign_code_548(F->up, rt_g_lit("d->p[i]", 7), (*(P119)rt_nil_check(F->t_562)).elem_, rt_g_lit("s.p[i]", 6), NULL, &F->x_1812);
f_put_to_230(F->up, F->b_1809, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void as_", 15), (*(P137)rt_nil_check(F->c_1808))), one_rt_gstr(40)), (*(P137)rt_nil_check(F->c_1808))), rt_g_lit(" *d, ", 5)), (*(P137)rt_nil_check(F->c_1808))), rt_g_lit(" s) {", 5)));
f_put_to_230(F->up, F->b_1809, rt_g_lit("  rt_int n = G_CNT(s);", 22));
f_put_to_230(F->up, F->b_1809, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, ", 49), f_q_223(F->up)), rt_g_lit("array length", 12)), f_q_223(F->up)), rt_g_lit(");", 2)));
f_put_to_230(F->up, F->b_1809, rt_g_lit("  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();", 79));
f_put_to_230(F->up, F->b_1809, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < n; i++) { ", 35), (*(P137)rt_nil_check(F->x_1812))), rt_g_lit(" }", 2)));
f_put_to_230(F->up, F->b_1809, rt_g_lit("}", 1));
f_copy_code_552(F->up, (*(P119)rt_nil_check(F->t_562)).elem_, rt_g_lit("s.p[i]", 6), &F->x_1812);
f_put_to_230(F->up, F->b_1809, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P137)rt_nil_check(F->c_1808))), rt_g_lit(" cp_", 4)), (*(P137)rt_nil_check(F->c_1808))), one_rt_gstr(40)), (*(P137)rt_nil_check(F->c_1808))), rt_g_lit(" s) {", 5)));
f_put_to_230(F->up, F->b_1809, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P137)rt_nil_check(F->c_1808))), rt_g_lit(" d = s; d.p = rt_alloc(sizeof(", 30)), (*(P137)rt_nil_check(F->ct_1810))), rt_g_lit(") * (size_t)G_CNT(s));", 22)));
f_put_to_230(F->up, F->b_1809, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = ", 49), (*(P137)rt_nil_check(F->x_1812))), one_rt_gstr(59)));
f_put_to_230(F->up, F->b_1809, rt_g_lit("  return d;", 11));
f_put_to_230(F->up, F->b_1809, rt_g_lit("}", 1));
f_eq_code_557(F->up, (*(P119)rt_nil_check(F->t_562)).elem_, rt_g_lit("a.p[i]", 6), rt_g_lit("b.p[i]", 6), &F->x_1812);
f_put_to_230(F->up, F->b_1809, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int eq_", 14), (*(P137)rt_nil_check(F->c_1808))), one_rt_gstr(40)), (*(P137)rt_nil_check(F->c_1808))), rt_g_lit(" a, ", 4)), (*(P137)rt_nil_check(F->c_1808))), rt_g_lit(" b) {", 5)));
f_put_to_230(F->up, F->b_1809, rt_g_lit("  if (G_CNT(a) != G_CNT(b)) return 0;", 37));
f_put_to_230(F->up, F->b_1809, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < G_CNT(a); i++) if (!(", 46), (*(P137)rt_nil_check(F->x_1812))), rt_g_lit(")) return 0;", 12)));
f_put_to_230(F->up, F->b_1809, rt_g_lit("  return 1;", 11));
f_put_to_230(F->up, F->b_1809, rt_g_lit("}", 1));
if (((*(P119)rt_nil_check(F->t_562)).dims_ == ((rt_int)1LL))) {
f_ctype_430(F->up, (*(P119)rt_nil_check(F->t_562)).elem_, &F->et_1811);
f_copy_code_552(F->up, (*(P119)rt_nil_check(F->t_562)).elem_, rt_g_lit("a.p[i]", 6), &F->x_1812);
f_copy_code_552(F->up, (*(P119)rt_nil_check(F->t_562)).elem_, rt_g_lit("b.p[i]", 6), &F->y_1813);
f_put_to_230(F->up, F->b_1809, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P137)rt_nil_check(F->c_1808))), rt_g_lit(" cat_", 5)), (*(P137)rt_nil_check(F->c_1808))), one_rt_gstr(40)), (*(P137)rt_nil_check(F->c_1808))), rt_g_lit(" a, ", 4)), (*(P137)rt_nil_check(F->c_1808))), rt_g_lit(" b) {", 5)));
f_put_to_230(F->up, F->b_1809, rt_g_lit("  rt_int na = G_CNT(a), nb = G_CNT(b);", 38));
f_put_to_230(F->up, F->b_1809, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P137)rt_nil_check(F->c_1808))), rt_g_lit(" r = na > 0 \? a : b;", 20)));
f_put_to_230(F->up, F->b_1809, rt_g_lit("  if (na == 0 && nb == 0) return a;", 35));
f_put_to_230(F->up, F->b_1809, rt_g_lit("  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;", 47));
f_put_to_230(F->up, F->b_1809, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  r.p = rt_alloc(sizeof(", 24), (*(P137)rt_nil_check(F->ct_1810))), rt_g_lit(") * (size_t)(na + nb));", 23)));
f_put_to_230(F->up, F->b_1809, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < na; i++) r.p[i] = ", 43), (*(P137)rt_nil_check(F->x_1812))), one_rt_gstr(59)));
f_put_to_230(F->up, F->b_1809, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < nb; i++) r.p[na + i] = ", 48), (*(P137)rt_nil_check(F->y_1813))), one_rt_gstr(59)));
f_put_to_230(F->up, F->b_1809, rt_g_lit("  return r;", 11));
f_put_to_230(F->up, F->b_1809, rt_g_lit("}", 1));
f_copy_code_552(F->up, (*(P119)rt_nil_check(F->t_562)).elem_, rt_g_lit("e", 1), &F->x_1812);
f_first_index_497(F->up, F->t_562, &F->y_1813);
f_put_to_230(F->up, F->b_1809, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P137)rt_nil_check(F->c_1808))), rt_g_lit(" one_", 5)), (*(P137)rt_nil_check(F->c_1808))), one_rt_gstr(40)), (*(P137)rt_nil_check(F->et_1811))), rt_g_lit(" e) {", 5)));
f_put_to_230(F->up, F->b_1809, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P137)rt_nil_check(F->c_1808))), rt_g_lit(" r; r.lo = r.hi = ", 18)), (*(P137)rt_nil_check(F->y_1813))), rt_g_lit("; r.lo2 = r.hi2 = 1;", 20)));
f_put_to_230(F->up, F->b_1809, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  r.p = rt_alloc(sizeof(", 24), (*(P137)rt_nil_check(F->ct_1810))), rt_g_lit(")); r.p[0] = ", 13)), (*(P137)rt_nil_check(F->x_1812))), one_rt_gstr(59)));
f_put_to_230(F->up, F->b_1809, rt_g_lit("  return r;", 11));
f_put_to_230(F->up, F->b_1809, rt_g_lit("}", 1));
}
} else {
f_put_to_230(F->up, F->b_1809, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void as_", 15), (*(P137)rt_nil_check(F->c_1808))), one_rt_gstr(40)), (*(P137)rt_nil_check(F->c_1808))), rt_g_lit(" *d, ", 5)), (*(P137)rt_nil_check(F->c_1808))), rt_g_lit(" s) {", 5)));
F->f_1815 = (*(P119)rt_nil_check(F->t_562)).fields_;
while ((F->f_1815 != NULL)) {
if (((*(P1607)rt_nil_check(F->f_1815)).dyn_ || ((*(P1607)rt_nil_check(F->f_1815)).cond_ != NULL))) {
f_copy_code_552(F->up, (*(P1607)rt_nil_check(F->f_1815)).t_, cat_rt_gstr(rt_g_lit("s.", 2), f_c_field_222(F->up, (*(P137)rt_nil_check((*(P1607)rt_nil_check(F->f_1815)).name_)))), &F->x_1812);
F->x_1812 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("d->", 3), f_c_field_222(F->up, (*(P137)rt_nil_check((*(P1607)rt_nil_check(F->f_1815)).name_)))), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->x_1812))), one_rt_gstr(59)));
if (((*(P1607)rt_nil_check(F->f_1815)).cond_ != NULL)) {
F->x_1812 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), f_subst_502(F->up, (*(P137)rt_nil_check((*(P1607)rt_nil_check(F->f_1815)).cond_)), rt_g_lit("s", 1))), rt_g_lit(") ", 2)), (*(P137)rt_nil_check(F->x_1812))));
}
} else {
f_assign_code_548(F->up, cat_rt_gstr(rt_g_lit("d->", 3), f_c_field_222(F->up, (*(P137)rt_nil_check((*(P1607)rt_nil_check(F->f_1815)).name_)))), (*(P1607)rt_nil_check(F->f_1815)).t_, cat_rt_gstr(rt_g_lit("s.", 2), f_c_field_222(F->up, (*(P137)rt_nil_check((*(P1607)rt_nil_check(F->f_1815)).name_)))), NULL, &F->x_1812);
}
f_put_to_230(F->up, F->b_1809, cat_rt_gstr(rt_g_lit("  ", 2), (*(P137)rt_nil_check(F->x_1812))));
F->f_1815 = (*(P1607)rt_nil_check(F->f_1815)).next_;
}
L_end_1816: ;
f_put_to_230(F->up, F->b_1809, rt_g_lit("}", 1));
f_put_to_230(F->up, F->b_1809, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P137)rt_nil_check(F->c_1808))), rt_g_lit(" cp_", 4)), (*(P137)rt_nil_check(F->c_1808))), one_rt_gstr(40)), (*(P137)rt_nil_check(F->c_1808))), rt_g_lit(" s) {", 5)));
f_put_to_230(F->up, F->b_1809, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P137)rt_nil_check(F->c_1808))), rt_g_lit(" d = s;", 7)));
F->conds_1814 = f_mk_205(F->up, rt_g_lit("1", 1));
F->f_1815 = (*(P119)rt_nil_check(F->t_562)).fields_;
while ((F->f_1815 != NULL)) {
f_copy_code_552(F->up, (*(P1607)rt_nil_check(F->f_1815)).t_, cat_rt_gstr(rt_g_lit("s.", 2), f_c_field_222(F->up, (*(P137)rt_nil_check((*(P1607)rt_nil_check(F->f_1815)).name_)))), &F->x_1812);
F->x_1812 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("d.", 2), f_c_field_222(F->up, (*(P137)rt_nil_check((*(P1607)rt_nil_check(F->f_1815)).name_)))), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->x_1812))), one_rt_gstr(59)));
f_eq_code_557(F->up, (*(P1607)rt_nil_check(F->f_1815)).t_, cat_rt_gstr(rt_g_lit("a.", 2), f_c_field_222(F->up, (*(P137)rt_nil_check((*(P1607)rt_nil_check(F->f_1815)).name_)))), cat_rt_gstr(rt_g_lit("b.", 2), f_c_field_222(F->up, (*(P137)rt_nil_check((*(P1607)rt_nil_check(F->f_1815)).name_)))), &F->y_1813);
if (((*(P1607)rt_nil_check(F->f_1815)).cond_ != NULL)) {
F->x_1812 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), f_subst_502(F->up, (*(P137)rt_nil_check((*(P1607)rt_nil_check(F->f_1815)).cond_)), rt_g_lit("s", 1))), rt_g_lit(") ", 2)), (*(P137)rt_nil_check(F->x_1812))));
F->y_1813 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!(", 3), f_subst_502(F->up, (*(P137)rt_nil_check((*(P1607)rt_nil_check(F->f_1815)).cond_)), rt_g_lit("a", 1))), rt_g_lit(") || ", 5)), (*(P137)rt_nil_check(F->y_1813))), one_rt_gstr(41)));
}
f_put_to_230(F->up, F->b_1809, cat_rt_gstr(rt_g_lit("  ", 2), (*(P137)rt_nil_check(F->x_1812))));
F->conds_1814 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->conds_1814)), rt_g_lit(" && ", 4)), (*(P137)rt_nil_check(F->y_1813))));
F->f_1815 = (*(P1607)rt_nil_check(F->f_1815)).next_;
}
L_end_1817: ;
f_put_to_230(F->up, F->b_1809, rt_g_lit("  return d;", 11));
f_put_to_230(F->up, F->b_1809, rt_g_lit("}", 1));
f_put_to_230(F->up, F->b_1809, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int eq_", 14), (*(P137)rt_nil_check(F->c_1808))), one_rt_gstr(40)), (*(P137)rt_nil_check(F->c_1808))), rt_g_lit(" a, ", 4)), (*(P137)rt_nil_check(F->c_1808))), rt_g_lit(" b) {", 5)));
f_put_to_230(F->up, F->b_1809, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  return ", 9), (*(P137)rt_nil_check(F->conds_1814))), one_rt_gstr(59)));
f_put_to_230(F->up, F->b_1809, rt_g_lit("}", 1));
}
ret_:

  return;
}

static void f_storage_567(struct f_greenc_1fr *up_, rt_gstr name_564, P119 t_565, P137 *access_code_566) {
  struct f_storage_567fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_564 = cp_rt_gstr(name_564);
F->t_565 = t_565;
F->access_code_566 = access_code_566;
F->ct_1818 = NULL;
F->g_1819 = NULL;
f_ctype_430(F->up, F->t_565, &F->ct_1818);
if ((!F->up->in_func_135)) {
f_new_name_208(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("g_", 2), f_lower_s_216(F->up, F->name_564)), one_rt_gstr(95)), &F->g_1819);
f_put_to_230(F->up, F->up->out_globals_129, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P137)rt_nil_check(F->ct_1818))), one_rt_gstr(32)), (*(P137)rt_nil_check(F->g_1819))), one_rt_gstr(59)));
F->up->st_field_138 = F->g_1819;
(*F->access_code_566) = F->g_1819;
} else {
f_new_name_208(F->up, cat_rt_gstr(f_lower_s_216(F->up, F->name_564), one_rt_gstr(95)), &F->g_1819);
f_put_to_230(F->up, F->up->fields_buf_134, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P137)rt_nil_check(F->ct_1818))), one_rt_gstr(32)), (*(P137)rt_nil_check(F->g_1819))), one_rt_gstr(59)));
F->up->st_field_138 = F->g_1819;
(*F->access_code_566) = f_mk_205(F->up, cat_rt_gstr(rt_g_lit("F->", 3), (*(P137)rt_nil_check(F->g_1819))));
}
ret_:

  return;
}

static void f_bind_570(struct f_greenc_1fr *up_, P114 y_568, P137 access_code_569) {
  struct f_bind_570fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_568 = y_568;
F->access_code_569 = access_code_569;
if (F->up->in_func_135) {
(*(P114)rt_nil_check(F->y_568)).level_ = F->up->cur_level_136;
(*(P114)rt_nil_check(F->y_568)).access_path_ = F->up->st_field_138;
} else {
(*(P114)rt_nil_check(F->y_568)).level_ = ((rt_int)0LL);
(*(P114)rt_nil_check(F->y_568)).access_path_ = F->access_code_569;
}
ret_:

  return;
}

static void f_declare_subprograms_572(struct f_greenc_1fr *up_, P171 from_571) {
  struct f_declare_subprograms_572fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->from_571 = from_571;
F->e_1820 = NULL;
F->e_1820 = F->from_571;
while ((F->e_1820 != NULL)) {
if (((((*(P171)rt_nil_check(F->e_1820)).kind_ == ((rt_int)44LL)) || ((*(P171)rt_nil_check(F->e_1820)).kind_ == ((rt_int)45LL))) && ((*(P171)rt_nil_check(F->e_1820)).ival_ == ((rt_int)0LL)))) {
f_declare_one_574(F->up, F->e_1820);
}
F->e_1820 = (*(P171)rt_nil_check(F->e_1820)).next_;
}
L_end_1821: ;
ret_:

  return;
}

static void f_declare_one_574(struct f_greenc_1fr *up_, P171 e_573) {
  struct f_declare_one_574fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_573 = e_573;
F->y_1822 = NULL;
F->z_1823 = NULL;
if (f_is_generic_name_1064(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_573)).name_)))) {
goto ret_;
}
f_build_subprogram_577(F->up, F->e_573, &F->y_1822);
F->z_1823 = ({ A113 ix1824 = F->up->table_116; ix1824.p[rt_index(f_hash_381(F->up, (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1822)).name_))), ix1824.lo, ix1824.hi) - ix1824.lo]; });
while ((F->z_1823 != NULL)) {
if (((((((eq_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->z_1823)).name_)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1822)).name_))) && (((*(P114)rt_nil_check(F->z_1823)).kind_ == ((rt_int)3LL)) || ((*(P114)rt_nil_check(F->z_1823)).kind_ == ((rt_int)4LL)))) && ((*(P114)rt_nil_check(F->z_1823)).decl_ != NULL)) && ((*(P171)rt_nil_check((*(P114)rt_nil_check(F->z_1823)).decl_)).ival_ == ((rt_int)1LL))) && ((*(P114)rt_nil_check(F->z_1823)).depth_ == F->up->depth_117)) && f_same_signature_408(F->up, (*(P114)rt_nil_check(F->z_1823)).params_, (*(P114)rt_nil_check(F->y_1822)).params_)) && f_same_396(F->up, (*(P114)rt_nil_check(F->z_1823)).result_, (*(P114)rt_nil_check(F->y_1822)).result_))) {
(*(P114)rt_nil_check(F->z_1823)).decl_ = F->e_573;
goto ret_;
}
F->z_1823 = (*(P114)rt_nil_check(F->z_1823)).chain_;
}
L_end_1825: ;
if ((F->up->cur_task_180 != NULL)) {
F->z_1823 = (*(P114)rt_nil_check(F->up->cur_task_180)).members_;
while ((F->z_1823 != NULL)) {
if ((((((eq_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->z_1823)).name_)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1822)).name_))) && (((*(P114)rt_nil_check(F->z_1823)).kind_ == ((rt_int)3LL)) || ((*(P114)rt_nil_check(F->z_1823)).kind_ == ((rt_int)4LL)))) && ((*(P114)rt_nil_check(F->z_1823)).decl_ != NULL)) && ((*(P171)rt_nil_check((*(P114)rt_nil_check(F->z_1823)).decl_)).ival_ == ((rt_int)1LL))) && f_same_signature_408(F->up, (*(P114)rt_nil_check(F->z_1823)).params_, (*(P114)rt_nil_check(F->y_1822)).params_)) && f_same_396(F->up, (*(P114)rt_nil_check(F->z_1823)).result_, (*(P114)rt_nil_check(F->y_1822)).result_))) {
(*(P114)rt_nil_check(F->y_1822)).cname_ = (*(P114)rt_nil_check(F->z_1823)).cname_;
(*(P114)rt_nil_check(F->z_1823)).decl_ = F->e_573;
goto L_end_1826;
}
F->z_1823 = (*(P114)rt_nil_check(F->z_1823)).mnext_;
}
L_end_1826: ;
}
f_define_411(F->up, F->y_1822, (*(P171)rt_nil_check(F->e_573)).line_);
ret_:

  return;
}

static void f_build_subprogram_577(struct f_greenc_1fr *up_, P171 d_575, P114 *y_576) {
  struct f_build_subprogram_577fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_575 = d_575;
F->y_576 = y_576;
F->p_1827 = NULL;
F->p_1827 = (*(P171)rt_nil_check(F->d_575)).a_;
F->pm_1828 = NULL;
F->tail_1829 = NULL;
F->rc_1830 = NULL;
F->k_1831 = ((rt_int)4LL);
if (((*(P171)rt_nil_check(F->d_575)).kind_ == ((rt_int)45LL))) {
F->k_1831 = ((rt_int)3LL);
}
(*F->y_576) = f_new_sym_416(F->up, F->k_1831, (*(P171)rt_nil_check(F->d_575)).name_);
while ((F->p_1827 != NULL)) {
F->pm_1828 = ({ R1593 *cell1833 = rt_alloc(sizeof(R1593)); *cell1833 = cp_R1593(({ R1593 ag1834; ag1834.name_ = (*(P171)rt_nil_check(F->p_1827)).name_; ag1834.mode_ = (*(P171)rt_nil_check(F->p_1827)).ival_; ag1834.t_ = NULL; ag1834.c_ = NULL; ag1834.cfield_ = NULL; ag1834.dflt_ = (*(P171)rt_nil_check(F->p_1827)).b_; ag1834.next_ = NULL; ag1834; })); (P1592)cell1833; });
f_resolve_446(F->up, (*(P171)rt_nil_check(F->p_1827)).a_, &(*(P1592)rt_nil_check(F->pm_1828)).t_, &(*(P1592)rt_nil_check(F->pm_1828)).c_);
f_new_name_208(F->up, cat_rt_gstr(f_lower_s_216(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->p_1827)).name_))), one_rt_gstr(95)), &(*(P1592)rt_nil_check(F->pm_1828)).cfield_);
if ((((*(P171)rt_nil_check(F->d_575)).kind_ == ((rt_int)45LL)) && ((*(P1592)rt_nil_check(F->pm_1828)).mode_ != ((rt_int)1LL)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->p_1827)).line_, rt_g_lit("a function can only have in parameters (RM79 6.5)", 49));
}
if ((((*(P171)rt_nil_check(F->d_575)).flag_ == ((rt_int)1LL)) && ((*(P1592)rt_nil_check(F->pm_1828)).mode_ != ((rt_int)1LL)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->p_1827)).line_, rt_g_lit("a value-returning procedure can only have in parameters (RM79 6.5)", 66));
}
if ((F->tail_1829 == NULL)) {
(*(P114)rt_nil_check((*F->y_576))).params_ = F->pm_1828;
} else {
(*(P1592)rt_nil_check(F->tail_1829)).next_ = F->pm_1828;
}
F->tail_1829 = F->pm_1828;
F->p_1827 = (*(P171)rt_nil_check(F->p_1827)).next_;
}
L_end_1832: ;
(*(P114)rt_nil_check((*F->y_576))).result_ = F->up->ty_void_158;
if (((*(P171)rt_nil_check(F->d_575)).b_ != NULL)) {
f_resolve_446(F->up, (*(P171)rt_nil_check(F->d_575)).b_, &(*(P114)rt_nil_check((*F->y_576))).result_, &F->rc_1830);
}
(*(P114)rt_nil_check((*F->y_576))).vrp_ = ((*(P171)rt_nil_check(F->d_575)).flag_ == ((rt_int)1LL));
f_new_name_208(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("f_", 2), f_c_ident_637(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->d_575)).name_)))), one_rt_gstr(95)), &(*(P114)rt_nil_check((*F->y_576))).cname_);
(*(P114)rt_nil_check((*F->y_576))).decl_ = F->d_575;
(*(P114)rt_nil_check((*F->y_576))).level_ = F->up->cur_level_136;
ret_:

  return;
}

static void f_decl_elements_579(struct f_greenc_1fr *up_, P171 decls_578) {
  struct f_decl_elements_579fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_578 = decls_578;
F->e_1835 = NULL;
F->e_1835 = F->decls_578;
F->declared_1836 = 0;
F->up->anon_node_173 = NULL;
while ((F->e_1835 != NULL)) {
if (((((*(P171)rt_nil_check(F->e_1835)).kind_ != ((rt_int)40LL)) && ((*(P171)rt_nil_check(F->e_1835)).kind_ != ((rt_int)41LL))) || ((*(P171)rt_nil_check(F->e_1835)).a_ != F->up->anon_node_173))) {
F->up->anon_node_173 = NULL;
}
if ((((((*(P171)rt_nil_check(F->e_1835)).kind_ == ((rt_int)44LL)) || ((*(P171)rt_nil_check(F->e_1835)).kind_ == ((rt_int)45LL))) && ((*(P171)rt_nil_check(F->e_1835)).ival_ != ((rt_int)1LL))) && (!F->declared_1836))) {
f_declare_subprograms_572(F->up, F->e_1835);
F->declared_1836 = 1;
}
f_decl_element_581(F->up, F->e_1835);
F->e_1835 = (*(P171)rt_nil_check(F->e_1835)).next_;
}
L_end_1837: ;
ret_:

  return;
}

static void f_decl_element_581(struct f_greenc_1fr *up_, P171 e_580) {
  struct f_decl_element_581fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_580 = e_580;
F->pd_1838 = NULL;
F->y_1839 = NULL;
F->z_1840 = NULL;
F->t_1841 = NULL;
F->vt_1842 = NULL;
F->c_1843 = NULL;
F->acc_1844 = NULL;
F->v_1845 = NULL;
F->x_1846 = NULL;
{ rt_int sel1848 = (*(P171)rt_nil_check(F->e_580)).kind_;
if (0 || sel1848 == ((rt_int)42LL)) {
F->y_1839 = f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_580)).name_)));
if ((((((((F->y_1839 != NULL) && ((*(P114)rt_nil_check(F->y_1839)).kind_ == ((rt_int)5LL))) && ((*(P114)rt_nil_check(F->y_1839)).depth_ == F->up->depth_117)) && ((*(P114)rt_nil_check(F->y_1839)).t_ != NULL)) && (*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_1839)).t_)).priv_) && ((*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_1839)).t_)).kind_ == ((rt_int)9LL))) && ((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_580)).a_)).kind_ != ((rt_int)77LL)))) {
F->up->completing_170 = (*(P114)rt_nil_check(F->y_1839)).t_;
F->x_1846 = (*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_1839)).t_)).name_;
F->pd_1838 = (*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_1839)).t_)).decl_;
f_type_definition_480(F->up, (*(P171)rt_nil_check(F->e_580)).a_, (*(P171)rt_nil_check(F->e_580)).name_, &F->t_1841, &F->c_1843);
F->up->completing_170 = NULL;
if ((F->t_1841 != (*(P114)rt_nil_check(F->y_1839)).t_)) {
as_R120(&(*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_1839)).t_)), (*(P119)rt_nil_check(F->t_1841)));
}
(*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_1839)).t_)).name_ = F->x_1846;
(*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_1839)).t_)).priv_ = 1;
(*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_1839)).t_)).decl_ = F->pd_1838;
(*(P114)rt_nil_check(F->y_1839)).c_ = F->c_1843;
} else {
F->y_1839 = f_new_sym_416(F->up, ((rt_int)5LL), (*(P171)rt_nil_check(F->e_580)).name_);
(*(P114)rt_nil_check(F->y_1839)).decl_ = F->e_580;
f_define_411(F->up, F->y_1839, (*(P171)rt_nil_check(F->e_580)).line_);
if (((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_580)).a_)).kind_ == ((rt_int)77LL))) {
(*(P114)rt_nil_check(F->y_1839)).t_ = f_new_typ_418(F->up, ((rt_int)9LL));
(*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_1839)).t_)).name_ = (*(P171)rt_nil_check(F->e_580)).name_;
(*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_1839)).t_)).priv_ = 1;
(*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_1839)).t_)).decl_ = F->up->cur_pkg_191;
} else {
f_type_definition_480(F->up, (*(P171)rt_nil_check(F->e_580)).a_, (*(P171)rt_nil_check(F->e_580)).name_, &(*(P114)rt_nil_check(F->y_1839)).t_, &(*(P114)rt_nil_check(F->y_1839)).c_);
}
}
} else if (0 || sel1848 == ((rt_int)43LL)) {
F->y_1839 = f_new_sym_416(F->up, ((rt_int)5LL), (*(P171)rt_nil_check(F->e_580)).name_);
f_resolve_446(F->up, (*(P171)rt_nil_check(F->e_580)).a_, &(*(P114)rt_nil_check(F->y_1839)).t_, &(*(P114)rt_nil_check(F->y_1839)).c_);
f_define_411(F->up, F->y_1839, (*(P171)rt_nil_check(F->e_580)).line_);
} else if (0 || sel1848 == ((rt_int)40LL)) {
f_resolve_object_type_587(F->up, (*(P171)rt_nil_check(F->e_580)).a_, &F->t_1841, &F->c_1843);
F->y_1839 = f_new_sym_416(F->up, ((rt_int)1LL), (*(P171)rt_nil_check(F->e_580)).name_);
if (((*(P171)rt_nil_check(F->e_580)).flag_ == ((rt_int)2LL))) {
f_lvalue_651(F->up, (*(P171)rt_nil_check(F->e_580)).b_, &F->v_1845, &F->vt_1842, &F->c_1843, &(*(P114)rt_nil_check(F->y_1839)).ro_);
f_check_type_425(F->up, F->vt_1842, F->t_1841, (*(P171)rt_nil_check(F->e_580)).line_);
f_ctype_430(F->up, F->t_1841, &F->acc_1844);
f_new_name_208(F->up, cat_rt_gstr(f_lower_s_216(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_580)).name_))), one_rt_gstr(95)), &F->x_1846);
if (F->up->in_func_135) {
f_put_to_230(F->up, F->up->fields_buf_134, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P137)rt_nil_check(F->acc_1844))), rt_g_lit(" *", 2)), (*(P137)rt_nil_check(F->x_1846))), one_rt_gstr(59)));
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->", 3), (*(P137)rt_nil_check(F->x_1846))), rt_g_lit(" = &(", 5)), (*(P137)rt_nil_check(F->v_1845))), rt_g_lit(");", 2)));
(*(P114)rt_nil_check(F->y_1839)).byref_ = 1;
(*(P114)rt_nil_check(F->y_1839)).level_ = F->up->cur_level_136;
(*(P114)rt_nil_check(F->y_1839)).access_path_ = F->x_1846;
} else {
f_put_to_230(F->up, F->up->out_globals_129, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P137)rt_nil_check(F->acc_1844))), rt_g_lit(" *g_", 4)), (*(P137)rt_nil_check(F->x_1846))), one_rt_gstr(59)));
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("g_", 2), (*(P137)rt_nil_check(F->x_1846))), rt_g_lit(" = &(", 5)), (*(P137)rt_nil_check(F->v_1845))), rt_g_lit(");", 2)));
(*(P114)rt_nil_check(F->y_1839)).level_ = ((rt_int)0LL);
(*(P114)rt_nil_check(F->y_1839)).access_path_ = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*g_", 4), (*(P137)rt_nil_check(F->x_1846))), one_rt_gstr(41)));
}
(*(P114)rt_nil_check(F->y_1839)).t_ = F->vt_1842;
(*(P114)rt_nil_check(F->y_1839)).c_ = F->c_1843;
f_define_411(F->up, F->y_1839, (*(P171)rt_nil_check(F->e_580)).line_);
goto ret_;
}
if (((((*(P119)rt_nil_check(F->t_1841)).kind_ == ((rt_int)6LL)) && ((F->c_1843 == NULL) || ((*(P175)rt_nil_check(F->c_1843)).lo_ == NULL))) && ((*(P171)rt_nil_check(F->e_580)).b_ != NULL))) {
F->up->vrp_ok_196 = 1;
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->e_580)).b_, F->t_1841, &F->vt_1842, &F->v_1845);
F->up->vrp_ok_196 = 0;
f_check_type_425(F->up, F->vt_1842, F->t_1841, (*(P171)rt_nil_check(F->e_580)).line_);
f_storage_567(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_580)).name_)), F->t_1841, &F->acc_1844);
f_copy_code_552(F->up, F->t_1841, (*(P137)rt_nil_check(F->v_1845)), &F->x_1846);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->acc_1844)), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->x_1846))), one_rt_gstr(59)));
} else {
f_storage_567(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_580)).name_)), F->t_1841, &F->acc_1844);
f_init_storage_540(F->up, (*(P137)rt_nil_check(F->acc_1844)), F->t_1841, F->c_1843);
if (((*(P171)rt_nil_check(F->e_580)).b_ != NULL)) {
if (f_is_const_access_645(F->up, (*(P171)rt_nil_check(F->e_580)).b_)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_580)).line_, rt_g_lit("a constant of an access type cannot be assigned to a variable (RM79 3.8)", 72));
}
F->up->vrp_ok_196 = 1;
if ((((*(P119)rt_nil_check(F->t_1841)).kind_ == ((rt_int)6LL)) && ((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_580)).b_)).kind_ == ((rt_int)12LL)))) {
F->up->agg_bounds_178 = F->acc_1844;
}
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->e_580)).b_, F->t_1841, &F->vt_1842, &F->v_1845);
F->up->agg_bounds_178 = NULL;
F->up->vrp_ok_196 = 0;
f_check_type_425(F->up, F->vt_1842, F->t_1841, (*(P171)rt_nil_check(F->e_580)).line_);
f_assign_code_548(F->up, (*(P137)rt_nil_check(F->acc_1844)), F->t_1841, (*(P137)rt_nil_check(F->v_1845)), F->c_1843, &F->x_1846);
f_emit_232(F->up, (*(P137)rt_nil_check(F->x_1846)));
}
}
(*(P114)rt_nil_check(F->y_1839)).t_ = F->t_1841;
(*(P114)rt_nil_check(F->y_1839)).c_ = F->c_1843;
f_bind_570(F->up, F->y_1839, F->acc_1844);
f_define_411(F->up, F->y_1839, (*(P171)rt_nil_check(F->e_580)).line_);
} else if (0 || sel1848 == ((rt_int)41LL)) {
f_resolve_object_type_587(F->up, (*(P171)rt_nil_check(F->e_580)).a_, &F->t_1841, &F->c_1843);
F->z_1840 = f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_580)).name_)));
if (((*(P171)rt_nil_check(F->e_580)).b_ == NULL)) {
if (((F->up->cur_pkg_191 == NULL) || (!((*(P119)rt_nil_check(F->t_1841)).priv_ && ((*(P119)rt_nil_check(F->t_1841)).kind_ == ((rt_int)9LL)))))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_580)).line_, rt_g_lit("a constant needs a value; only a constant of a private type is deferred (RM79 7.4)", 82));
}
F->y_1839 = f_new_sym_416(F->up, ((rt_int)2LL), (*(P171)rt_nil_check(F->e_580)).name_);
(*(P114)rt_nil_check(F->y_1839)).t_ = F->t_1841;
(*(P114)rt_nil_check(F->y_1839)).c_ = F->c_1843;
(*(P114)rt_nil_check(F->y_1839)).ro_ = 1;
(*(P114)rt_nil_check(F->y_1839)).flags_ = rt_add(((rt_int)1LL), ((rt_int)2LL));
f_define_411(F->up, F->y_1839, (*(P171)rt_nil_check(F->e_580)).line_);
goto ret_;
}
if (((((F->z_1840 != NULL) && ((*(P114)rt_nil_check(F->z_1840)).depth_ == F->up->depth_117)) && ((*(P114)rt_nil_check(F->z_1840)).kind_ == ((rt_int)2LL))) && ((*(P114)rt_nil_check(F->z_1840)).flags_ == rt_add(((rt_int)1LL), ((rt_int)2LL))))) {
f_check_type_425(F->up, F->t_1841, (*(P114)rt_nil_check(F->z_1840)).t_, (*(P171)rt_nil_check(F->e_580)).line_);
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->e_580)).b_, F->t_1841, &F->vt_1842, &F->v_1845);
f_check_type_425(F->up, F->vt_1842, F->t_1841, (*(P171)rt_nil_check(F->e_580)).line_);
f_storage_567(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_580)).name_)), F->t_1841, &F->acc_1844);
f_bind_570(F->up, F->z_1840, F->acc_1844);
f_copy_code_552(F->up, F->t_1841, (*(P137)rt_nil_check(F->v_1845)), &F->x_1846);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->acc_1844)), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->x_1846))), one_rt_gstr(59)));
(*(P114)rt_nil_check(F->z_1840)).flags_ = ((rt_int)1LL);
goto ret_;
}
F->y_1839 = f_new_sym_416(F->up, ((rt_int)2LL), (*(P171)rt_nil_check(F->e_580)).name_);
(*(P114)rt_nil_check(F->y_1839)).flags_ = ((rt_int)1LL);
F->up->vrp_ok_196 = 1;
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->e_580)).b_, F->t_1841, &F->vt_1842, &F->v_1845);
F->up->vrp_ok_196 = 0;
f_check_type_425(F->up, F->vt_1842, F->t_1841, (*(P171)rt_nil_check(F->e_580)).line_);
if (((*(P119)rt_nil_check(F->t_1841)).kind_ == ((rt_int)1LL))) {
f_manifest_442(F->up, (*(P171)rt_nil_check(F->e_580)).b_, &(*(P114)rt_nil_check(F->y_1839)).mvalue_, &F->ok_1847);
(*(P114)rt_nil_check(F->y_1839)).hasmv_ = F->ok_1847;
}
f_storage_567(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_580)).name_)), F->t_1841, &F->acc_1844);
f_copy_code_552(F->up, F->t_1841, (*(P137)rt_nil_check(F->v_1845)), &F->x_1846);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->acc_1844)), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->x_1846))), one_rt_gstr(59)));
(*(P114)rt_nil_check(F->y_1839)).t_ = F->t_1841;
(*(P114)rt_nil_check(F->y_1839)).c_ = F->c_1843;
(*(P114)rt_nil_check(F->y_1839)).ro_ = 1;
f_bind_570(F->up, F->y_1839, F->acc_1844);
f_define_411(F->up, F->y_1839, (*(P171)rt_nil_check(F->e_580)).line_);
} else if (0 || sel1848 == ((rt_int)46LL)) {
if (((*(P171)rt_nil_check(F->e_580)).a_ != NULL)) {
if ((((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_580)).a_)).kind_ == ((rt_int)9LL)) && f_is_package_876(F->up, (*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_580)).a_)).a_))) {
F->y_1839 = f_member_of_880(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_580)).a_)).a_)).name_)), (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_580)).a_)).name_)), (*(P171)rt_nil_check(F->e_580)).line_);
} else if (((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_580)).a_)).kind_ == ((rt_int)5LL))) {
F->y_1839 = f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_580)).a_)).name_)));
} else {
F->y_1839 = NULL;
}
if (((F->y_1839 == NULL) || ((*(P114)rt_nil_check(F->y_1839)).kind_ != ((rt_int)6LL)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_580)).line_, rt_g_lit("an exception is renamed only as an exception", 44));
}
f_copy_sym_885(F->up, F->y_1839, &F->z_1840);
(*(P114)rt_nil_check(F->z_1840)).name_ = (*(P171)rt_nil_check(F->e_580)).name_;
f_define_411(F->up, F->z_1840, (*(P171)rt_nil_check(F->e_580)).line_);
goto ret_;
}
F->y_1839 = f_new_sym_416(F->up, ((rt_int)6LL), (*(P171)rt_nil_check(F->e_580)).name_);
f_new_name_208(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("ex_", 3), f_lower_s_216(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_580)).name_)))), one_rt_gstr(95)), &(*(P114)rt_nil_check(F->y_1839)).cname_);
f_put_to_230(F->up, F->up->out_globals_129, cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int ", 11), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1839)).cname_))), one_rt_gstr(59)));
f_put_to_230(F->up, F->up->out_excs_132, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1839)).cname_))), rt_g_lit(" = rt_exc(", 10)), f_q_223(F->up)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_580)).name_))), f_q_223(F->up)), rt_g_lit(");", 2)));
f_define_411(F->up, F->y_1839, (*(P171)rt_nil_check(F->e_580)).line_);
} else if (0 || sel1848 == ((rt_int)44LL) || sel1848 == ((rt_int)45LL)) {
if (f_is_generic_name_1064(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_580)).name_)))) {
f_attach_generic_body_1066(F->up, F->e_580);
} else if (((*(P171)rt_nil_check(F->e_580)).ival_ == ((rt_int)1LL))) {
f_build_subprogram_577(F->up, F->e_580, &F->y_1839);
f_define_411(F->up, F->y_1839, (*(P171)rt_nil_check(F->e_580)).line_);
} else {
f_subprogram_body_592(F->up, F->e_580, f_lookup_decl_391(F->up, F->e_580));
}
} else if (0 || sel1848 == ((rt_int)55LL)) {
f_use_clause_897(F->up, F->e_580);
} else if (0 || sel1848 == ((rt_int)56LL)) {
f_pragma_decl_583(F->up, F->e_580);
} else {
f_other_decl_589(F->up, F->e_580);
}
}
ret_:

  return;
}

static void f_pragma_decl_583(struct f_greenc_1fr *up_, P171 e_582) {
  struct f_pragma_decl_583fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_582 = e_582;
ret_:

  return;
}

static void f_resolve_object_type_587(struct f_greenc_1fr *up_, P171 st_584, P119 *t_585, P175 *c_586) {
  struct f_resolve_object_type_587fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_584 = st_584;
F->t_585 = t_585;
F->c_586 = c_586;
if ((((*(P171)rt_nil_check(F->st_584)).kind_ != ((rt_int)80LL)) && (F->st_584 == F->up->anon_node_173))) {
(*F->t_585) = F->up->anon_typ_174;
(*F->c_586) = F->up->anon_cons_177;
goto ret_;
}
f_resolve_446(F->up, F->st_584, &(*F->t_585), &(*F->c_586));
if (((*(P171)rt_nil_check(F->st_584)).kind_ != ((rt_int)80LL))) {
F->up->anon_node_173 = F->st_584;
F->up->anon_typ_174 = (*F->t_585);
F->up->anon_cons_177 = (*F->c_586);
}
ret_:

  return;
}

static void f_other_decl_589(struct f_greenc_1fr *up_, P171 e_588) {
  struct f_other_decl_589fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_588 = e_588;
if (((*(P171)rt_nil_check(F->e_588)).kind_ == ((rt_int)48LL))) {
f_package_spec_890(F->up, F->e_588);
} else if (((*(P171)rt_nil_check(F->e_588)).kind_ == ((rt_int)49LL))) {
f_package_body_895(F->up, F->e_588);
} else {
f_task_decl_970(F->up, F->e_588);
}
ret_:

  return;
}

static void f_subprogram_body_592(struct f_greenc_1fr *up_, P171 d_590, P114 y_591) {
  struct f_subprogram_body_592fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_590 = d_590;
F->y_591 = y_591;
F->saved_code_1849 = NULL;
F->saved_code_1849 = F->up->code_133;
F->saved_fields_1850 = NULL;
F->saved_fields_1850 = F->up->fields_buf_134;
F->saved_in_1851 = F->up->in_func_135;
F->saved_sym_1852 = NULL;
F->saved_sym_1852 = F->up->func_sym_139;
F->saved_exits_1853 = NULL;
F->saved_exits_1853 = F->up->exits_142;
F->saved_frames_1854 = F->up->frames_147;
F->saved_handlers_1855 = NULL;
F->saved_handlers_1855 = F->up->handlers_150;
F->saved_cleanups_1856 = NULL;
F->saved_cleanups_1856 = F->up->cleanups_151;
F->saved_pure_1857 = NULL;
F->saved_pure_1857 = F->up->pure_sym_194;
F->aw_1858 = NULL;
F->saved_pdepth_1859 = F->up->pure_depth_195;
F->args_1860 = NULL;
F->head_1861 = NULL;
F->frame_1862 = NULL;
F->parent_1863 = NULL;
F->ct_1864 = NULL;
F->x_1865 = NULL;
F->pm_1866 = NULL;
F->pm_1866 = (*(P114)rt_nil_check(F->y_591)).params_;
F->p_1867 = NULL;
F->frame_1862 = f_mk_205(F->up, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_591)).cname_)), rt_g_lit("fr", 2)));
if (F->up->in_func_135) {
F->parent_1863 = f_mk_205(F->up, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->up->func_sym_139)).cname_)), rt_g_lit("fr", 2)));
}
F->up->code_133 = f_new_buffer_227(F->up);
F->up->fields_buf_134 = f_new_buffer_227(F->up);
F->up->in_func_135 = 1;
F->up->func_sym_139 = F->y_591;
F->up->exits_142 = NULL;
F->up->frames_147 = ((rt_int)0LL);
F->up->handlers_150 = NULL;
F->up->cleanups_151 = NULL;
F->up->cur_level_136 = rt_add(F->up->cur_level_136, ((rt_int)1LL));
F->args_1860 = f_mk_205(F->up, rt_g_lit("", 0));
f_open_scope_412(F->up);
if ((((*(P114)rt_nil_check(F->y_591)).kind_ == ((rt_int)3LL)) && (!(*(P114)rt_nil_check(F->y_591)).vrp_))) {
F->up->pure_sym_194 = F->y_591;
F->up->pure_depth_195 = F->up->depth_117;
}
if ((F->parent_1863 != NULL)) {
f_put_to_230(F->up, F->up->fields_buf_134, cat_rt_gstr(cat_rt_gstr(rt_g_lit(" struct ", 8), (*(P137)rt_nil_check(F->parent_1863))), rt_g_lit(" *up;", 5)));
F->args_1860 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P137)rt_nil_check(F->parent_1863))), rt_g_lit(" *up_", 5)));
f_emit_232(F->up, rt_g_lit("F->up = up_;", 12));
}
while ((F->pm_1866 != NULL)) {
f_ctype_430(F->up, (*(P1592)rt_nil_check(F->pm_1866)).t_, &F->ct_1864);
if ((({ rt_gstr at1869 = (*(P137)rt_nil_check(F->args_1860)); at1869.hi >= at1869.lo ? at1869.hi - at1869.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->args_1860 = f_mk_205(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->args_1860)), rt_g_lit(", ", 2)));
}
if (((*(P1592)rt_nil_check(F->pm_1866)).mode_ == ((rt_int)1LL))) {
F->p_1867 = f_new_sym_416(F->up, ((rt_int)2LL), (*(P1592)rt_nil_check(F->pm_1866)).name_);
(*(P114)rt_nil_check(F->p_1867)).ro_ = 1;
f_put_to_230(F->up, F->up->fields_buf_134, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P137)rt_nil_check(F->ct_1864))), one_rt_gstr(32)), (*(P137)rt_nil_check((*(P1592)rt_nil_check(F->pm_1866)).cfield_))), one_rt_gstr(59)));
F->args_1860 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->args_1860)), (*(P137)rt_nil_check(F->ct_1864))), one_rt_gstr(32)), (*(P137)rt_nil_check((*(P1592)rt_nil_check(F->pm_1866)).cfield_))));
f_copy_code_552(F->up, (*(P1592)rt_nil_check(F->pm_1866)).t_, (*(P137)rt_nil_check((*(P1592)rt_nil_check(F->pm_1866)).cfield_)), &F->x_1865);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->", 3), (*(P137)rt_nil_check((*(P1592)rt_nil_check(F->pm_1866)).cfield_))), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->x_1865))), one_rt_gstr(59)));
} else {
F->p_1867 = f_new_sym_416(F->up, ((rt_int)1LL), (*(P1592)rt_nil_check(F->pm_1866)).name_);
(*(P114)rt_nil_check(F->p_1867)).byref_ = 1;
f_put_to_230(F->up, F->up->fields_buf_134, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P137)rt_nil_check(F->ct_1864))), rt_g_lit(" *", 2)), (*(P137)rt_nil_check((*(P1592)rt_nil_check(F->pm_1866)).cfield_))), one_rt_gstr(59)));
F->args_1860 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->args_1860)), (*(P137)rt_nil_check(F->ct_1864))), rt_g_lit(" *", 2)), (*(P137)rt_nil_check((*(P1592)rt_nil_check(F->pm_1866)).cfield_))));
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->", 3), (*(P137)rt_nil_check((*(P1592)rt_nil_check(F->pm_1866)).cfield_))), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check((*(P1592)rt_nil_check(F->pm_1866)).cfield_))), one_rt_gstr(59)));
}
(*(P114)rt_nil_check(F->p_1867)).access_path_ = (*(P1592)rt_nil_check(F->pm_1866)).cfield_;
(*(P114)rt_nil_check(F->p_1867)).t_ = (*(P1592)rt_nil_check(F->pm_1866)).t_;
(*(P114)rt_nil_check(F->p_1867)).c_ = (*(P1592)rt_nil_check(F->pm_1866)).c_;
(*(P114)rt_nil_check(F->p_1867)).level_ = F->up->cur_level_136;
f_define_411(F->up, F->p_1867, (*(P171)rt_nil_check(F->d_590)).line_);
F->pm_1866 = (*(P1592)rt_nil_check(F->pm_1866)).next_;
}
L_end_1868: ;
if (((*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_591)).result_)).kind_ != ((rt_int)9LL))) {
f_ctype_430(F->up, (*(P114)rt_nil_check(F->y_591)).result_, &F->ct_1864);
f_put_to_230(F->up, F->up->fields_buf_134, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P137)rt_nil_check(F->ct_1864))), rt_g_lit(" result_;", 9)));
}
f_decl_elements_579(F->up, (*(P171)rt_nil_check(F->d_590)).c_);
if (((((*(P171)rt_nil_check(F->d_590)).tag_ != NULL) && eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->d_590)).tag_)), rt_g_lit("INTERFACE", 9))) && ((*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_591)).result_)).kind_ == ((rt_int)9LL)))) {
F->x_1865 = f_mk_205(F->up, rt_g_lit("", 0));
F->pm_1866 = (*(P114)rt_nil_check(F->y_591)).params_;
while ((F->pm_1866 != NULL)) {
if ((({ rt_gstr at1871 = (*(P137)rt_nil_check(F->x_1865)); at1871.hi >= at1871.lo ? at1871.hi - at1871.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->x_1865 = f_mk_205(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->x_1865)), rt_g_lit(", ", 2)));
}
if ((f_is_string_499(F->up, (*(P1592)rt_nil_check(F->pm_1866)).t_) && ((*(P1592)rt_nil_check(F->pm_1866)).mode_ == ((rt_int)1LL)))) {
F->x_1865 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->x_1865)), rt_g_lit("rt_g_g2s(F->", 12)), (*(P137)rt_nil_check((*(P1592)rt_nil_check(F->pm_1866)).cfield_))), one_rt_gstr(41)));
} else {
F->x_1865 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->x_1865)), rt_g_lit("F->", 3)), (*(P137)rt_nil_check((*(P1592)rt_nil_check(F->pm_1866)).cfield_))));
}
F->pm_1866 = (*(P1592)rt_nil_check(F->pm_1866)).next_;
}
L_end_1870: ;
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_", 5), f_lower_s_216(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->d_590)).name_)))), one_rt_gstr(40)), (*(P137)rt_nil_check(F->x_1865))), rt_g_lit(");", 2)));
} else {
f_guarded_603(F->up, (*(P171)rt_nil_check(F->d_590)).d_, (*(P171)rt_nil_check(F->d_590)).e_, (*(P171)rt_nil_check(F->d_590)).line_);
}
f_task_awaits_989(F->up, (*(P171)rt_nil_check(F->d_590)).c_, &F->aw_1858);
f_close_scope_413(F->up);
F->up->cur_level_136 = rt_sub(F->up->cur_level_136, ((rt_int)1LL));
if ((({ rt_gstr at1872 = (*(P137)rt_nil_check(F->args_1860)); at1872.hi >= at1872.lo ? at1872.hi - at1872.lo + 1 : (rt_int)0; }) == ((rt_int)0LL))) {
F->args_1860 = f_mk_205(F->up, rt_g_lit("void", 4));
}
f_ctype_430(F->up, (*(P114)rt_nil_check(F->y_591)).result_, &F->ct_1864);
F->head_1861 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P137)rt_nil_check(F->ct_1864))), one_rt_gstr(32)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_591)).cname_))), one_rt_gstr(40)), (*(P137)rt_nil_check(F->args_1860))), one_rt_gstr(41)));
f_put_to_230(F->up, F->up->out_protos_128, cat_rt_gstr((*(P137)rt_nil_check(F->head_1861)), one_rt_gstr(59)));
f_put_to_230(F->up, F->up->out_frames_126, cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P137)rt_nil_check(F->frame_1862))), rt_g_lit(" { int dummy;", 13)));
f_splice_237(F->up, F->up->out_frames_126, F->up->fields_buf_134);
f_put_to_230(F->up, F->up->out_frames_126, rt_g_lit("};", 2));
f_put_to_230(F->up, F->up->out_funcs_130, cat_rt_gstr((*(P137)rt_nil_check(F->head_1861)), rt_g_lit(" {", 2)));
f_put_to_230(F->up, F->up->out_funcs_130, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  struct ", 9), (*(P137)rt_nil_check(F->frame_1862))), rt_g_lit(" *F = rt_alloc(sizeof *F);", 26)));
if ((((*(P114)rt_nil_check(F->y_591)).kind_ == ((rt_int)4LL)) && ((*(P114)rt_nil_check(F->y_591)).access_path_ != NULL))) {
f_put_to_230(F->up, F->up->out_funcs_130, cat_rt_gstr(rt_g_lit("  ", 2), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_591)).access_path_))));
}
f_splice_237(F->up, F->up->out_funcs_130, F->up->code_133);
if (((*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_591)).result_)).kind_ != ((rt_int)9LL))) {
f_put_to_230(F->up, F->up->out_funcs_130, rt_g_lit("  rt_raise(RT_X_INIT);", 22));
f_put_to_230(F->up, F->up->out_funcs_130, rt_g_lit("ret_:", 5));
f_put_to_230(F->up, F->up->out_funcs_130, (*(P137)rt_nil_check(F->aw_1858)));
f_put_to_230(F->up, F->up->out_funcs_130, rt_g_lit("  return F->result_;", 20));
} else {
f_put_to_230(F->up, F->up->out_funcs_130, rt_g_lit("ret_:", 5));
f_put_to_230(F->up, F->up->out_funcs_130, (*(P137)rt_nil_check(F->aw_1858)));
f_put_to_230(F->up, F->up->out_funcs_130, rt_g_lit("  return;", 9));
}
f_put_to_230(F->up, F->up->out_funcs_130, rt_g_lit("}", 1));
f_put_to_230(F->up, F->up->out_funcs_130, rt_g_lit("", 0));
F->up->code_133 = F->saved_code_1849;
F->up->fields_buf_134 = F->saved_fields_1850;
F->up->in_func_135 = F->saved_in_1851;
F->up->func_sym_139 = F->saved_sym_1852;
F->up->exits_142 = F->saved_exits_1853;
F->up->frames_147 = F->saved_frames_1854;
F->up->handlers_150 = F->saved_handlers_1855;
F->up->cleanups_151 = F->saved_cleanups_1856;
F->up->pure_sym_194 = F->saved_pure_1857;
F->up->pure_depth_195 = F->saved_pdepth_1859;
ret_:

  return;
}

static void f_gen_statements_594(struct f_greenc_1fr *up_, P171 stmts_593) {
  struct f_gen_statements_594fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_593 = stmts_593;
F->s_1873 = NULL;
F->s_1873 = F->stmts_593;
while ((F->s_1873 != NULL)) {
f_gen_statement_609(F->up, F->s_1873);
F->s_1873 = (*(P171)rt_nil_check(F->s_1873)).next_;
}
L_end_1874: ;
ret_:

  return;
}

static void f_pop_frames_596(struct f_greenc_1fr *up_, rt_int upto_595) {
  struct f_pop_frames_596fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->upto_595 = upto_595;
F->i_1875 = F->up->frames_147;
F->c_1876 = NULL;
F->c_1876 = F->up->cleanups_151;
while ((F->i_1875 > F->upto_595)) {
f_emit_232(F->up, (*(P137)rt_nil_check((*(P148)rt_nil_check(F->c_1876)).s_)));
F->c_1876 = (*(P148)rt_nil_check(F->c_1876)).next_;
F->i_1875 = rt_sub(F->i_1875, ((rt_int)1LL));
}
L_end_1877: ;
ret_:

  return;
}

static void f_push_cleanup_598(struct f_greenc_1fr *up_, rt_gstr s_597) {
  struct f_push_cleanup_598fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_597 = cp_rt_gstr(s_597);
F->up->cleanups_151 = ({ R149 *cell1878 = rt_alloc(sizeof(R149)); *cell1878 = cp_R149(({ R149 ag1879; ag1879.s_ = NULL; ag1879.next_ = F->up->cleanups_151; ag1879; })); (P148)cell1878; });
(*(P148)rt_nil_check(F->up->cleanups_151)).s_ = f_mk_205(F->up, F->s_597);
F->up->frames_147 = rt_add(F->up->frames_147, ((rt_int)1LL));
ret_:

  return;
}

static void f_pop_cleanup_599(struct f_greenc_1fr *up_) {
  struct f_pop_cleanup_599fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->cleanups_151 = (*(P148)rt_nil_check(F->up->cleanups_151)).next_;
F->up->frames_147 = rt_sub(F->up->frames_147, ((rt_int)1LL));
ret_:

  return;
}

static void f_guarded_603(struct f_greenc_1fr *up_, P171 stmts_600, P171 hs_601, rt_int line_602) {
  struct f_guarded_603fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_600 = stmts_600;
F->hs_601 = hs_601;
F->line_602 = line_602;
F->f_1880 = NULL;
F->x_1881 = NULL;
F->h_1882 = NULL;
F->n_1883 = NULL;
F->first_1884 = 1;
F->has_others_1885 = 0;
F->conds_1886 = NULL;
if ((F->hs_601 == NULL)) {
f_gen_statements_594(F->up, F->stmts_600);
goto ret_;
}
f_new_name_208(F->up, rt_g_lit("xf", 2), &F->f_1880);
f_new_name_208(F->up, rt_g_lit("x", 1), &F->x_1881);
f_push_cleanup_598(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P137)rt_nil_check(F->f_1880))), rt_g_lit(");", 2)));
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_frame ", 11), (*(P137)rt_nil_check(F->f_1880))), one_rt_gstr(59)));
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (RT_TRY(", 11), (*(P137)rt_nil_check(F->f_1880))), rt_g_lit(")) {", 4)));
f_gen_statements_594(F->up, F->stmts_600);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P137)rt_nil_check(F->f_1880))), rt_g_lit(");", 2)));
f_emit_232(F->up, rt_g_lit("} else {", 8));
f_pop_cleanup_599(F->up);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P137)rt_nil_check(F->f_1880))), rt_g_lit(");", 2)));
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("int ", 4), (*(P137)rt_nil_check(F->x_1881))), rt_g_lit(" = rt_xcur;", 11)));
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (rt_g_aborted()) rt_raise(", 29), (*(P137)rt_nil_check(F->x_1881))), rt_g_lit(");", 2)));
F->up->handlers_150 = ({ R149 *cell1887 = rt_alloc(sizeof(R149)); *cell1887 = cp_R149(({ R149 ag1888; ag1888.s_ = F->x_1881; ag1888.next_ = F->up->handlers_150; ag1888; })); (P148)cell1887; });
F->h_1882 = F->hs_601;
while ((F->h_1882 != NULL)) {
F->n_1883 = (*(P171)rt_nil_check(F->h_1882)).a_;
F->conds_1886 = f_mk_205(F->up, rt_g_lit("0", 1));
while ((F->n_1883 != NULL)) {
if (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->n_1883)).name_)), rt_g_lit("OTHERS", 6))) {
F->has_others_1885 = 1;
F->conds_1886 = f_mk_205(F->up, rt_g_lit("1", 1));
} else {
F->up->prefix_hint_192 = (*(P171)rt_nil_check(F->n_1883)).tag_;
f_exc_id_607(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->n_1883)).name_)), (*(P171)rt_nil_check(F->h_1882)).line_, &F->f_1880);
F->conds_1886 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->conds_1886)), rt_g_lit(" || ", 4)), (*(P137)rt_nil_check(F->x_1881))), rt_g_lit(" == ", 4)), (*(P137)rt_nil_check(F->f_1880))));
}
F->n_1883 = (*(P171)rt_nil_check(F->n_1883)).next_;
}
L_end_1890: ;
if (F->first_1884) {
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P137)rt_nil_check(F->conds_1886))), rt_g_lit(") {", 3)));
} else {
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P137)rt_nil_check(F->conds_1886))), rt_g_lit(") {", 3)));
}
F->first_1884 = 0;
f_gen_statements_594(F->up, (*(P171)rt_nil_check(F->h_1882)).b_);
F->h_1882 = (*(P171)rt_nil_check(F->h_1882)).next_;
}
L_end_1889: ;
if ((!F->has_others_1885)) {
f_emit_232(F->up, rt_g_lit("} else {", 8));
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_raise(", 9), (*(P137)rt_nil_check(F->x_1881))), rt_g_lit(");", 2)));
}
f_emit_232(F->up, rt_g_lit("}", 1));
F->up->handlers_150 = (*(P148)rt_nil_check(F->up->handlers_150)).next_;
f_emit_232(F->up, rt_g_lit("}", 1));
f_emit_232(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_exc_id_607(struct f_greenc_1fr *up_, rt_gstr name_604, rt_int line_605, P137 *r_606) {
  struct f_exc_id_607fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_604 = cp_rt_gstr(name_604);
F->line_605 = line_605;
F->r_606 = r_606;
F->y_1891 = NULL;
F->y_1891 = f_lookup_383(F->up, F->name_604);
if ((F->up->prefix_hint_192 != NULL)) {
F->y_1891 = f_member_of_880(F->up, (*(P137)rt_nil_check(F->up->prefix_hint_192)), F->name_604, F->line_605);
F->up->prefix_hint_192 = NULL;
}
if (((F->y_1891 == NULL) || ((*(P114)rt_nil_check(F->y_1891)).kind_ != ((rt_int)6LL)))) {
f_fail_226(F->up, F->line_605, cat_rt_gstr(F->name_604, rt_g_lit(" is not an exception", 20)));
}
(*F->r_606) = (*(P114)rt_nil_check(F->y_1891)).cname_;
ret_:

  return;
}

static void f_gen_statement_609(struct f_greenc_1fr *up_, P171 s_608) {
  struct f_gen_statement_609fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_608 = s_608;
F->t_1892 = NULL;
F->vt_1893 = NULL;
F->c_1894 = NULL;
F->lv_1895 = NULL;
F->v_1896 = NULL;
F->x_1897 = NULL;
{ rt_int sel1899 = (*(P171)rt_nil_check(F->s_608)).kind_;
if (0 || sel1899 == ((rt_int)20LL)) {
if (((((*(P171)rt_nil_check((*(P171)rt_nil_check(F->s_608)).a_)).kind_ == ((rt_int)8LL)) && ((*(P171)rt_nil_check((*(P171)rt_nil_check(F->s_608)).a_)).b_ != NULL)) && (((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->s_608)).a_)).b_)).kind_ == ((rt_int)14LL)) || ((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->s_608)).a_)).b_)).kind_ == ((rt_int)80LL))))) {
f_slice_assign_611(F->up, F->s_608);
goto ret_;
}
F->up->in_lv_path_197 = 1;
F->up->last_deref_198 = 0;
f_lvalue_651(F->up, (*(P171)rt_nil_check(F->s_608)).a_, &F->lv_1895, &F->t_1892, &F->c_1894, &F->ro_1898);
F->up->in_lv_path_197 = 0;
if (F->ro_1898) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->s_608)).line_, rt_g_lit("assignment to a constant or an in parameter", 43));
}
f_check_pure_target_1038(F->up, (*(P171)rt_nil_check(F->s_608)).a_, (*(P171)rt_nil_check(F->s_608)).line_);
if (f_is_const_access_645(F->up, (*(P171)rt_nil_check(F->s_608)).b_)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->s_608)).line_, rt_g_lit("a constant of an access type cannot be assigned to a variable (RM79 3.8)", 72));
}
F->up->vrp_ok_196 = 1;
if ((((*(P119)rt_nil_check(F->t_1892)).kind_ == ((rt_int)6LL)) && ((*(P171)rt_nil_check((*(P171)rt_nil_check(F->s_608)).b_)).kind_ == ((rt_int)12LL)))) {
F->up->agg_bounds_178 = F->lv_1895;
}
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->s_608)).b_, F->t_1892, &F->vt_1893, &F->v_1896);
F->up->agg_bounds_178 = NULL;
F->up->vrp_ok_196 = 0;
f_check_type_425(F->up, F->vt_1893, F->t_1892, (*(P171)rt_nil_check(F->s_608)).line_);
f_assign_code_548(F->up, (*(P137)rt_nil_check(F->lv_1895)), F->t_1892, (*(P137)rt_nil_check(F->v_1896)), F->c_1894, &F->x_1897);
f_emit_232(F->up, (*(P137)rt_nil_check(F->x_1897)));
} else if (0 || sel1899 == ((rt_int)21LL)) {
F->up->vrp_ok_196 = 1;
f_gen_call_613(F->up, F->s_608);
F->up->vrp_ok_196 = 0;
} else if (0 || sel1899 == ((rt_int)22LL)) {
f_gen_if_615(F->up, F->s_608);
} else if (0 || sel1899 == ((rt_int)23LL)) {
f_gen_case_617(F->up, F->s_608);
} else if (0 || sel1899 == ((rt_int)24LL)) {
f_gen_loop_623(F->up, F->s_608);
} else if (0 || sel1899 == ((rt_int)25LL)) {
f_gen_block_625(F->up, F->s_608);
} else if (0 || sel1899 == ((rt_int)26LL)) {
f_gen_exit_627(F->up, F->s_608);
} else if (0 || sel1899 == ((rt_int)27LL)) {
f_gen_return_629(F->up, F->s_608);
} else if (0 || sel1899 == ((rt_int)28LL)) {
if (((((*(P171)rt_nil_check(F->s_608)).tag_ != NULL) && f_is_task_name_943(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->s_608)).tag_)))) && eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->s_608)).name_)), rt_g_lit("FAILURE", 7)))) {
f_task_failure_991(F->up, F->s_608);
} else {
F->up->prefix_hint_192 = (*(P171)rt_nil_check(F->s_608)).tag_;
f_exc_id_607(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->s_608)).name_)), (*(P171)rt_nil_check(F->s_608)).line_, &F->x_1897);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_raise(", 9), (*(P137)rt_nil_check(F->x_1897))), rt_g_lit(");", 2)));
}
} else if (0 || sel1899 == ((rt_int)29LL)) {
if ((F->up->handlers_150 == NULL)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->s_608)).line_, rt_g_lit("raise; outside an exception handler", 35));
}
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_raise(", 9), (*(P137)rt_nil_check((*(P148)rt_nil_check(F->up->handlers_150)).s_))), rt_g_lit(");", 2)));
} else if (0 || sel1899 == ((rt_int)30LL)) {
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->s_608)).a_, F->up->ty_bool_154, &F->vt_1893, &F->v_1896);
f_check_type_425(F->up, F->vt_1893, F->up->ty_bool_154, (*(P171)rt_nil_check(F->s_608)).line_);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (!(", 6), (*(P137)rt_nil_check(F->v_1896))), rt_g_lit(")) rt_raise(RT_X_ASSERT);", 25)));
} else if (0 || sel1899 == ((rt_int)31LL)) {
} else {
f_task_statement_gen_1033(F->up, F->s_608);
}
}
ret_:

  return;
}

static void f_slice_assign_611(struct f_greenc_1fr *up_, P171 s_610) {
  struct f_slice_assign_611fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_610 = s_610;
F->lv_1900 = NULL;
F->v_1901 = NULL;
F->sl_1902 = NULL;
F->x_1903 = NULL;
F->t_1904 = NULL;
F->st_1905 = NULL;
F->vt_1906 = NULL;
F->c_1907 = NULL;
F->up->in_lv_path_197 = 1;
F->up->last_deref_198 = 0;
f_lvalue_651(F->up, (*(P171)rt_nil_check((*(P171)rt_nil_check(F->s_610)).a_)).a_, &F->lv_1900, &F->t_1904, &F->c_1907, &F->ro_1908);
F->up->in_lv_path_197 = 0;
if (F->ro_1908) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->s_610)).line_, rt_g_lit("assignment to a constant or an in parameter", 43));
}
f_check_pure_target_1038(F->up, (*(P171)rt_nil_check(F->s_610)).a_, (*(P171)rt_nil_check(F->s_610)).line_);
F->ro_1908 = 0;
f_index_on_669(F->up, (*(P137)rt_nil_check(F->lv_1900)), F->t_1904, (*(P171)rt_nil_check(F->s_610)).a_, &F->ro_1908, 0, &F->sl_1902, &F->st_1905, &F->c_1907);
F->up->vrp_ok_196 = 1;
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->s_610)).b_, F->st_1905, &F->vt_1906, &F->v_1901);
F->up->vrp_ok_196 = 0;
f_check_type_425(F->up, F->vt_1906, F->st_1905, (*(P171)rt_nil_check(F->s_610)).line_);
f_ctype_430(F->up, F->st_1905, &F->x_1903);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P137)rt_nil_check(F->x_1903))), rt_g_lit(" sl_ = ", 7)), (*(P137)rt_nil_check(F->sl_1902))), rt_g_lit("; as_", 5)), (*(P137)rt_nil_check(F->x_1903))), rt_g_lit("(&sl_, ", 7)), (*(P137)rt_nil_check(F->v_1901))), rt_g_lit("); }", 4)));
ret_:

  return;
}

static void f_gen_call_613(struct f_greenc_1fr *up_, P171 s_612) {
  struct f_gen_call_613fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_612 = s_612;
F->c_1909 = NULL;
F->c_1909 = (*(P171)rt_nil_check(F->s_612)).a_;
F->t_1910 = NULL;
F->v_1911 = NULL;
if ((((*(P171)rt_nil_check(F->c_1909)).kind_ == ((rt_int)5LL)) || ((*(P171)rt_nil_check(F->c_1909)).kind_ == ((rt_int)9LL)))) {
F->c_1909 = f_nn_276(F->up, ((rt_int)8LL), (*(P171)rt_nil_check(F->s_612)).line_);
(*(P171)rt_nil_check(F->c_1909)).a_ = (*(P171)rt_nil_check(F->s_612)).a_;
}
if (((*(P171)rt_nil_check(F->c_1909)).kind_ != ((rt_int)8LL))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->s_612)).line_, rt_g_lit("not a procedure call", 20));
}
f_gcall_862(F->up, F->c_1909, 1, &F->t_1910, &F->v_1911);
f_emit_232(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->v_1911)), one_rt_gstr(59)));
ret_:

  return;
}

static void f_gen_if_615(struct f_greenc_1fr *up_, P171 s_614) {
  struct f_gen_if_615fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_614 = s_614;
F->a_1912 = NULL;
F->a_1912 = (*(P171)rt_nil_check(F->s_614)).a_;
F->first_1913 = 1;
F->t_1914 = NULL;
F->v_1915 = NULL;
while ((F->a_1912 != NULL)) {
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->a_1912)).a_, F->up->ty_bool_154, &F->t_1914, &F->v_1915);
f_check_type_425(F->up, F->t_1914, F->up->ty_bool_154, (*(P171)rt_nil_check(F->s_614)).line_);
if (F->first_1913) {
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P137)rt_nil_check(F->v_1915))), rt_g_lit(") {", 3)));
} else {
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P137)rt_nil_check(F->v_1915))), rt_g_lit(") {", 3)));
}
F->first_1913 = 0;
f_gen_statements_594(F->up, (*(P171)rt_nil_check(F->a_1912)).b_);
F->a_1912 = (*(P171)rt_nil_check(F->a_1912)).next_;
}
L_end_1916: ;
if (((*(P171)rt_nil_check(F->s_614)).flag_ == ((rt_int)1LL))) {
f_emit_232(F->up, rt_g_lit("} else {", 8));
f_gen_statements_594(F->up, (*(P171)rt_nil_check(F->s_614)).b_);
}
f_emit_232(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_gen_case_617(struct f_greenc_1fr *up_, P171 s_616) {
  struct f_gen_case_617fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_616 = s_616;
F->st_1917 = NULL;
F->vt_1918 = NULL;
F->first_1919 = 1;
F->a_1920 = NULL;
F->a_1920 = (*(P171)rt_nil_check(F->s_616)).b_;
F->lab_1921 = NULL;
F->sel_1922 = NULL;
F->tmp_1923 = NULL;
F->ct_1924 = NULL;
F->conds_1925 = NULL;
F->v_1926 = NULL;
F->lo_1927 = NULL;
F->hi_1928 = NULL;
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->s_616)).a_, NULL, &F->st_1917, &F->sel_1922);
f_new_name_208(F->up, rt_g_lit("sel", 3), &F->tmp_1923);
f_ctype_430(F->up, F->st_1917, &F->ct_1924);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P137)rt_nil_check(F->ct_1924))), one_rt_gstr(32)), (*(P137)rt_nil_check(F->tmp_1923))), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->sel_1922))), one_rt_gstr(59)));
while ((F->a_1920 != NULL)) {
F->lab_1921 = (*(P171)rt_nil_check(F->a_1920)).a_;
F->conds_1925 = f_mk_205(F->up, rt_g_lit("0", 1));
while ((F->lab_1921 != NULL)) {
if (((*(P171)rt_nil_check(F->lab_1921)).b_ == NULL)) {
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->lab_1921)).a_, F->st_1917, &F->vt_1918, &F->v_1926);
f_check_type_425(F->up, F->vt_1918, F->st_1917, (*(P171)rt_nil_check(F->s_616)).line_);
F->conds_1925 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->conds_1925)), rt_g_lit(" || ", 4)), (*(P137)rt_nil_check(F->tmp_1923))), rt_g_lit(" == ", 4)), (*(P137)rt_nil_check(F->v_1926))));
} else {
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->lab_1921)).a_, F->st_1917, &F->vt_1918, &F->lo_1927);
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->lab_1921)).b_, F->st_1917, &F->vt_1918, &F->hi_1928);
F->conds_1925 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->conds_1925)), rt_g_lit(" || (", 5)), (*(P137)rt_nil_check(F->tmp_1923))), rt_g_lit(" >= ", 4)), (*(P137)rt_nil_check(F->lo_1927))), rt_g_lit(" && ", 4)), (*(P137)rt_nil_check(F->tmp_1923))), rt_g_lit(" <= ", 4)), (*(P137)rt_nil_check(F->hi_1928))), one_rt_gstr(41)));
}
F->lab_1921 = (*(P171)rt_nil_check(F->lab_1921)).next_;
}
L_end_1930: ;
if (F->first_1919) {
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P137)rt_nil_check(F->conds_1925))), rt_g_lit(") {", 3)));
} else {
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P137)rt_nil_check(F->conds_1925))), rt_g_lit(") {", 3)));
}
F->first_1919 = 0;
f_gen_statements_594(F->up, (*(P171)rt_nil_check(F->a_1920)).b_);
F->a_1920 = (*(P171)rt_nil_check(F->a_1920)).next_;
}
L_end_1929: ;
if (F->first_1919) {
f_emit_232(F->up, rt_g_lit("{", 1));
} else {
f_emit_232(F->up, rt_g_lit("} else {", 8));
}
if (((*(P171)rt_nil_check(F->s_616)).flag_ == ((rt_int)1LL))) {
f_gen_statements_594(F->up, (*(P171)rt_nil_check(F->s_616)).c_);
} else {
f_emit_232(F->up, rt_g_lit("rt_raise(RT_X_CASE);", 20));
}
f_emit_232(F->up, rt_g_lit("}", 1));
f_emit_232(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_push_exit_621(struct f_greenc_1fr *up_, P137 match_618, int is_loop_619, P137 *label_620) {
  struct f_push_exit_621fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->match_618 = match_618;
F->is_loop_619 = is_loop_619;
F->label_620 = label_620;
f_new_name_208(F->up, rt_g_lit("L_end_", 6), &(*F->label_620));
F->up->exits_142 = ({ R141 *cell1931 = rt_alloc(sizeof(R141)); *cell1931 = cp_R141(({ R141 ag1932; ag1932.match_ = F->match_618; ag1932.label_ = (*F->label_620); ag1932.depth_ = F->up->frames_147; ag1932.is_loop_ = F->is_loop_619; ag1932.next_ = F->up->exits_142; ag1932; })); (P140)cell1931; });
ret_:

  return;
}

static void f_gen_loop_623(struct f_greenc_1fr *up_, P171 s_622) {
  struct f_gen_loop_623fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_622 = s_622;
F->t_1933 = NULL;
F->vt_1934 = NULL;
F->c_1935 = NULL;
F->label_1936 = NULL;
F->cond_1937 = NULL;
F->acc_1938 = NULL;
F->lov_1939 = NULL;
F->hiv_1940 = NULL;
F->it_1941 = NULL;
F->y_1942 = NULL;
F->r_1943 = NULL;
f_push_exit_621(F->up, (*(P171)rt_nil_check(F->s_622)).tag_, 1, &F->label_1936);
if (((*(P171)rt_nil_check(F->s_622)).flag_ == ((rt_int)0LL))) {
f_emit_232(F->up, rt_g_lit("for (;;) {", 10));
f_gen_statements_594(F->up, (*(P171)rt_nil_check(F->s_622)).b_);
f_emit_232(F->up, rt_g_lit("}", 1));
} else if (((*(P171)rt_nil_check(F->s_622)).flag_ == ((rt_int)1LL))) {
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->s_622)).a_, F->up->ty_bool_154, &F->vt_1934, &F->cond_1937);
f_check_type_425(F->up, F->vt_1934, F->up->ty_bool_154, (*(P171)rt_nil_check(F->s_622)).line_);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("while (", 7), (*(P137)rt_nil_check(F->cond_1937))), rt_g_lit(") {", 3)));
f_gen_statements_594(F->up, (*(P171)rt_nil_check(F->s_622)).b_);
f_emit_232(F->up, rt_g_lit("}", 1));
} else {
F->r_1943 = (*(P171)rt_nil_check(F->s_622)).a_;
F->c_1935 = f_new_cons_419(F->up);
if (((*(P171)rt_nil_check(F->r_1943)).kind_ == ((rt_int)14LL))) {
f_range_bounds_690(F->up, (*(P171)rt_nil_check(F->r_1943)).a_, (*(P171)rt_nil_check(F->r_1943)).b_, NULL, (*(P171)rt_nil_check(F->s_622)).line_, &F->t_1933, &(*(P175)rt_nil_check(F->c_1935)).lo_, &(*(P175)rt_nil_check(F->c_1935)).hi_);
} else {
f_resolve_446(F->up, F->r_1943, &F->t_1933, &F->c_1935);
if (((*(P175)rt_nil_check(F->c_1935)).lo_ == NULL)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->s_622)).line_, rt_g_lit("a FOR loop needs a discrete range", 33));
}
}
if ((((((*(P119)rt_nil_check(F->t_1933)).kind_ != ((rt_int)1LL)) && ((*(P119)rt_nil_check(F->t_1933)).kind_ != ((rt_int)4LL))) && ((*(P119)rt_nil_check(F->t_1933)).kind_ != ((rt_int)11LL))) && ((*(P119)rt_nil_check(F->t_1933)).kind_ != ((rt_int)2LL)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->s_622)).line_, rt_g_lit("a FOR loop needs a discrete range (RM79 5.6)", 44));
}
f_storage_567(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->s_622)).name_)), F->t_1933, &F->acc_1938);
f_new_name_208(F->up, rt_g_lit("lo", 2), &F->lov_1939);
f_new_name_208(F->up, rt_g_lit("hi", 2), &F->hiv_1940);
f_new_name_208(F->up, rt_g_lit("it", 2), &F->it_1941);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_int ", 9), (*(P137)rt_nil_check(F->lov_1939))), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_1935)).lo_))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->hiv_1940))), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_1935)).hi_))), one_rt_gstr(59)));
if (((*(P171)rt_nil_check(F->s_622)).ival_ == ((rt_int)1LL))) {
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P137)rt_nil_check(F->it_1941))), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->hiv_1940))), rt_g_lit("; ", 2)), (*(P137)rt_nil_check(F->it_1941))), rt_g_lit(" >= ", 4)), (*(P137)rt_nil_check(F->lov_1939))), rt_g_lit("; ", 2)), (*(P137)rt_nil_check(F->it_1941))), rt_g_lit("--) {", 5)));
} else {
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P137)rt_nil_check(F->it_1941))), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->lov_1939))), rt_g_lit("; ", 2)), (*(P137)rt_nil_check(F->it_1941))), rt_g_lit(" <= ", 4)), (*(P137)rt_nil_check(F->hiv_1940))), rt_g_lit("; ", 2)), (*(P137)rt_nil_check(F->it_1941))), rt_g_lit("++) {", 5)));
}
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->acc_1938)), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->it_1941))), one_rt_gstr(59)));
f_open_scope_412(F->up);
F->y_1942 = f_new_sym_416(F->up, ((rt_int)2LL), (*(P171)rt_nil_check(F->s_622)).name_);
(*(P114)rt_nil_check(F->y_1942)).t_ = F->t_1933;
(*(P114)rt_nil_check(F->y_1942)).ro_ = 1;
f_bind_570(F->up, F->y_1942, F->acc_1938);
f_define_411(F->up, F->y_1942, (*(P171)rt_nil_check(F->s_622)).line_);
f_gen_statements_594(F->up, (*(P171)rt_nil_check(F->s_622)).b_);
f_close_scope_413(F->up);
f_emit_232(F->up, rt_g_lit("}", 1));
f_emit_232(F->up, rt_g_lit("}", 1));
}
F->up->exits_142 = (*(P140)rt_nil_check(F->up->exits_142)).next_;
f_emit_232(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->label_1936)), rt_g_lit(": ;", 3)));
ret_:

  return;
}

static void f_gen_block_625(struct f_greenc_1fr *up_, P171 s_624) {
  struct f_gen_block_625fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_624 = s_624;
F->label_1944 = NULL;
F->aw_1945 = NULL;
f_push_exit_621(F->up, (*(P171)rt_nil_check(F->s_624)).tag_, 0, &F->label_1944);
f_emit_232(F->up, rt_g_lit("{", 1));
f_open_scope_412(F->up);
f_decl_elements_579(F->up, (*(P171)rt_nil_check(F->s_624)).a_);
f_guarded_603(F->up, (*(P171)rt_nil_check(F->s_624)).b_, (*(P171)rt_nil_check(F->s_624)).c_, (*(P171)rt_nil_check(F->s_624)).line_);
f_task_awaits_989(F->up, (*(P171)rt_nil_check(F->s_624)).a_, &F->aw_1945);
f_emit_232(F->up, (*(P137)rt_nil_check(F->aw_1945)));
f_close_scope_413(F->up);
f_emit_232(F->up, rt_g_lit("}", 1));
F->up->exits_142 = (*(P140)rt_nil_check(F->up->exits_142)).next_;
f_emit_232(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->label_1944)), rt_g_lit(": ;", 3)));
ret_:

  return;
}

static void f_gen_exit_627(struct f_greenc_1fr *up_, P171 s_626) {
  struct f_gen_exit_627fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_626 = s_626;
F->x_1946 = NULL;
F->x_1946 = F->up->exits_142;
F->t_1947 = NULL;
F->v_1948 = NULL;
while ((F->x_1946 != NULL)) {
if (((F->up->accept_depth_181 > ((rt_int)0LL)) && (F->x_1946 == F->up->accept_exits_146))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->s_626)).line_, rt_g_lit("an exit statement cannot leave an accept statement (RM79 5.7)", 61));
}
if (((((*(P171)rt_nil_check(F->s_626)).name_ == NULL) && (*(P140)rt_nil_check(F->x_1946)).is_loop_) || ((((*(P171)rt_nil_check(F->s_626)).name_ != NULL) && ((*(P140)rt_nil_check(F->x_1946)).match_ != NULL)) && eq_rt_gstr((*(P137)rt_nil_check((*(P140)rt_nil_check(F->x_1946)).match_)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->s_626)).name_)))))) {
if (((*(P171)rt_nil_check(F->s_626)).a_ != NULL)) {
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->s_626)).a_, F->up->ty_bool_154, &F->t_1947, &F->v_1948);
f_check_type_425(F->up, F->t_1947, F->up->ty_bool_154, (*(P171)rt_nil_check(F->s_626)).line_);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P137)rt_nil_check(F->v_1948))), rt_g_lit(") {", 3)));
}
f_pop_frames_596(F->up, (*(P140)rt_nil_check(F->x_1946)).depth_);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("goto ", 5), (*(P137)rt_nil_check((*(P140)rt_nil_check(F->x_1946)).label_))), one_rt_gstr(59)));
if (((*(P171)rt_nil_check(F->s_626)).a_ != NULL)) {
f_emit_232(F->up, rt_g_lit("}", 1));
}
goto ret_;
}
F->x_1946 = (*(P140)rt_nil_check(F->x_1946)).next_;
}
L_end_1949: ;
if (((*(P171)rt_nil_check(F->s_626)).name_ == NULL)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->s_626)).line_, rt_g_lit("exit outside a loop", 19));
}
f_fail_226(F->up, (*(P171)rt_nil_check(F->s_626)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("exit ", 5), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->s_626)).name_))), rt_g_lit(" names no enclosing loop", 24)));
ret_:

  return;
}

static void f_gen_return_629(struct f_greenc_1fr *up_, P171 s_628) {
  struct f_gen_return_629fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_628 = s_628;
F->vt_1950 = NULL;
F->v_1951 = NULL;
if ((!F->up->in_func_135)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->s_628)).line_, rt_g_lit("return outside a subprogram", 27));
}
if ((F->up->accept_depth_181 > ((rt_int)0LL))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->s_628)).line_, rt_g_lit("a return statement cannot appear in an accept statement (RM79 5.3)", 66));
}
if (((*(P119)rt_nil_check((*(P114)rt_nil_check(F->up->func_sym_139)).result_)).kind_ == ((rt_int)9LL))) {
if (((*(P171)rt_nil_check(F->s_628)).a_ != NULL)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->s_628)).line_, rt_g_lit("a procedure returns no value", 28));
}
f_pop_frames_596(F->up, ((rt_int)0LL));
f_emit_232(F->up, rt_g_lit("goto ret_;", 10));
goto ret_;
}
if (((*(P171)rt_nil_check(F->s_628)).a_ == NULL)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->s_628)).line_, rt_g_lit("return needs a value here", 25));
}
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->s_628)).a_, (*(P114)rt_nil_check(F->up->func_sym_139)).result_, &F->vt_1950, &F->v_1951);
f_check_type_425(F->up, F->vt_1950, (*(P114)rt_nil_check(F->up->func_sym_139)).result_, (*(P171)rt_nil_check(F->s_628)).line_);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->result_ = ", 13), (*(P137)rt_nil_check(F->v_1951))), one_rt_gstr(59)));
f_pop_frames_596(F->up, ((rt_int)0LL));
f_emit_232(F->up, rt_g_lit("goto ret_;", 10));
ret_:

  return;
}

static void f_access_of_632(struct f_greenc_1fr *up_, P114 y_630, P137 *r_631) {
  struct f_access_of_632fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_630 = y_630;
F->r_631 = r_631;
F->p_1952 = NULL;
if (((*(P114)rt_nil_check(F->y_630)).level_ <= ((rt_int)0LL))) {
(*F->r_631) = (*(P114)rt_nil_check(F->y_630)).access_path_;
goto ret_;
}
F->p_1952 = f_mk_205(F->up, rt_g_lit("F", 1));
{ rt_int lo1955 = ((rt_int)1LL), hi1956 = rt_sub(F->up->cur_level_136, (*(P114)rt_nil_check(F->y_630)).level_);
for (rt_int it1957 = lo1955; it1957 <= hi1956; it1957++) {
F->i_1954 = it1957;
F->p_1952 = f_mk_205(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->p_1952)), rt_g_lit("->up", 4)));
}
}
L_end_1953: ;
if ((*(P114)rt_nil_check(F->y_630)).byref_) {
(*F->r_631) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*", 2), (*(P137)rt_nil_check(F->p_1952))), rt_g_lit("->", 2)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_630)).access_path_))), one_rt_gstr(41)));
} else {
(*F->r_631) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->p_1952)), rt_g_lit("->", 2)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_630)).access_path_))));
}
ret_:

  return;
}

static void f_link_to_635(struct f_greenc_1fr *up_, rt_int l_633, P137 *r_634) {
  struct f_link_to_635fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_633 = l_633;
F->r_634 = r_634;
(*F->r_634) = f_mk_205(F->up, rt_g_lit("F", 1));
{ rt_int lo1960 = ((rt_int)1LL), hi1961 = rt_sub(F->up->cur_level_136, F->l_633);
for (rt_int it1962 = lo1960; it1962 <= hi1961; it1962++) {
F->i_1959 = it1962;
(*F->r_634) = f_mk_205(F->up, cat_rt_gstr((*(P137)rt_nil_check((*F->r_634))), rt_g_lit("->up", 4)));
}
}
L_end_1958: ;
ret_:

  return;
}

static rt_gstr f_c_ident_637(struct f_greenc_1fr *up_, rt_gstr s_636) {
  struct f_c_ident_637fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_636 = cp_rt_gstr(s_636);
if (eq_rt_gstr(F->s_636, rt_g_lit("+", 1))) {
F->result_ = rt_g_lit("op_plus", 7);
goto ret_;
} else if (eq_rt_gstr(F->s_636, rt_g_lit("-", 1))) {
F->result_ = rt_g_lit("op_minus", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_636, rt_g_lit("*", 1))) {
F->result_ = rt_g_lit("op_times", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_636, rt_g_lit("/", 1))) {
F->result_ = rt_g_lit("op_slash", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_636, rt_g_lit("**", 2))) {
F->result_ = rt_g_lit("op_power", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_636, rt_g_lit("&", 1))) {
F->result_ = rt_g_lit("op_cat", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_636, rt_g_lit("=", 1))) {
F->result_ = rt_g_lit("op_eq", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_636, rt_g_lit("<", 1))) {
F->result_ = rt_g_lit("op_lt", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_636, rt_g_lit("<=", 2))) {
F->result_ = rt_g_lit("op_le", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_636, rt_g_lit(">", 1))) {
F->result_ = rt_g_lit("op_gt", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_636, rt_g_lit(">=", 2))) {
F->result_ = rt_g_lit("op_ge", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_636, rt_g_lit("MOD", 3))) {
F->result_ = rt_g_lit("op_mod", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_636, rt_g_lit("AND", 3))) {
F->result_ = rt_g_lit("op_and", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_636, rt_g_lit("OR", 2))) {
F->result_ = rt_g_lit("op_or", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_636, rt_g_lit("XOR", 3))) {
F->result_ = rt_g_lit("op_xor", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_636, rt_g_lit("NOT", 3))) {
F->result_ = rt_g_lit("op_not", 6);
goto ret_;
}
F->result_ = f_lower_s_216(F->up, F->s_636);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_deref_641(struct f_greenc_1fr *up_, rt_gstr base_638, P119 t_639, P137 *r_640) {
  struct f_deref_641fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_638 = cp_rt_gstr(base_638);
F->t_639 = t_639;
F->r_640 = r_640;
F->ct_1963 = NULL;
if (F->up->in_lv_path_197) {
F->up->last_deref_198 = 1;
}
f_ctype_430(F->up, F->t_639, &F->ct_1963);
(*F->r_640) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*(", 3), (*(P137)rt_nil_check(F->ct_1963))), rt_g_lit(")rt_nil_check(", 14)), F->base_638), rt_g_lit("))", 2)));
ret_:

  return;
}

static int f_is_object_643(struct f_greenc_1fr *up_, P171 e_642) {
  struct f_is_object_643fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_642 = e_642;
F->y_1964 = NULL;
if (((*(P171)rt_nil_check(F->e_642)).kind_ == ((rt_int)5LL))) {
F->y_1964 = f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_642)).name_)));
F->result_ = ((F->y_1964 != NULL) && (((*(P114)rt_nil_check(F->y_1964)).kind_ == ((rt_int)1LL)) || ((*(P114)rt_nil_check(F->y_1964)).kind_ == ((rt_int)2LL))));
goto ret_;
} else if (((*(P171)rt_nil_check(F->e_642)).kind_ == ((rt_int)9LL))) {
F->result_ = f_is_object_643(F->up, (*(P171)rt_nil_check(F->e_642)).a_);
goto ret_;
} else if (((*(P171)rt_nil_check(F->e_642)).kind_ == ((rt_int)8LL))) {
if ((((*(P171)rt_nil_check(F->e_642)).b_ != NULL) && ((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_642)).b_)).kind_ == ((rt_int)14LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_object_643(F->up, (*(P171)rt_nil_check(F->e_642)).a_);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_const_access_645(struct f_greenc_1fr *up_, P171 e_644) {
  struct f_is_const_access_645fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_644 = e_644;
F->y_1965 = NULL;
if (((*(P171)rt_nil_check(F->e_644)).kind_ != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->y_1965 = f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_644)).name_)));
F->result_ = (((((F->y_1965 != NULL) && ((*(P114)rt_nil_check(F->y_1965)).kind_ == ((rt_int)2LL))) && (rt_rem((*(P114)rt_nil_check(F->y_1965)).flags_, ((rt_int)2LL)) == ((rt_int)1LL))) && ((*(P114)rt_nil_check(F->y_1965)).t_ != NULL)) && ((*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_1965)).t_)).kind_ == ((rt_int)8LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_lvalue_651(struct f_greenc_1fr *up_, P171 e_646, P137 *code_out_647, P119 *t_648, P175 *c_649, int *ro_650) {
  struct f_lvalue_651fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_646 = e_646;
F->code_out_647 = code_out_647;
F->t_648 = t_648;
F->c_649 = c_649;
F->ro_650 = ro_650;
F->y_1967 = NULL;
F->base_1968 = NULL;
F->bt_1969 = NULL;
F->bc_1970 = NULL;
if ((((*(P171)rt_nil_check(F->e_646)).kind_ == ((rt_int)5LL)) || (((*(P171)rt_nil_check(F->e_646)).kind_ == ((rt_int)9LL)) && f_is_package_876(F->up, (*(P171)rt_nil_check(F->e_646)).a_)))) {
if (((*(P171)rt_nil_check(F->e_646)).kind_ == ((rt_int)9LL))) {
F->y_1967 = f_member_of_880(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_646)).a_)).name_)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_646)).name_)), (*(P171)rt_nil_check(F->e_646)).line_);
} else {
F->y_1967 = f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_646)).name_)));
}
if ((F->y_1967 == NULL)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_646)).line_, cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_646)).name_)), rt_g_lit(" is not declared", 16)));
}
if ((((*(P114)rt_nil_check(F->y_1967)).kind_ != ((rt_int)1LL)) && ((*(P114)rt_nil_check(F->y_1967)).kind_ != ((rt_int)2LL)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_646)).line_, cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_646)).name_)), rt_g_lit(" is not an object", 17)));
}
f_access_of_632(F->up, F->y_1967, &(*F->code_out_647));
(*F->t_648) = (*(P114)rt_nil_check(F->y_1967)).t_;
(*F->c_649) = (*(P114)rt_nil_check(F->y_1967)).c_;
(*F->ro_650) = (*(P114)rt_nil_check(F->y_1967)).ro_;
} else if (((*(P171)rt_nil_check(F->e_646)).kind_ == ((rt_int)15LL))) {
f_lvalue_651(F->up, (*(P171)rt_nil_check(F->e_646)).a_, &(*F->code_out_647), &(*F->t_648), &(*F->c_649), &(*F->ro_650));
} else if (((*(P171)rt_nil_check(F->e_646)).kind_ == ((rt_int)9LL))) {
f_lvalue_651(F->up, (*(P171)rt_nil_check(F->e_646)).a_, &F->base_1968, &F->bt_1969, &F->bc_1970, &(*F->ro_650));
F->cp_1966 = (((*(P119)rt_nil_check(F->bt_1969)).kind_ == ((rt_int)8LL)) && f_is_const_access_645(F->up, (*(P171)rt_nil_check(F->e_646)).a_));
f_select_on_660(F->up, (*(P137)rt_nil_check(F->base_1968)), F->bt_1969, F->e_646, &(*F->ro_650), 1, &(*F->code_out_647), &(*F->t_648), &(*F->c_649));
(*F->ro_650) = ((*F->ro_650) || F->cp_1966);
} else if (((*(P171)rt_nil_check(F->e_646)).kind_ == ((rt_int)8LL))) {
f_lvalue_651(F->up, (*(P171)rt_nil_check(F->e_646)).a_, &F->base_1968, &F->bt_1969, &F->bc_1970, &(*F->ro_650));
F->cp_1966 = (((*(P119)rt_nil_check(F->bt_1969)).kind_ == ((rt_int)8LL)) && f_is_const_access_645(F->up, (*(P171)rt_nil_check(F->e_646)).a_));
f_index_on_669(F->up, (*(P137)rt_nil_check(F->base_1968)), F->bt_1969, F->e_646, &(*F->ro_650), 1, &(*F->code_out_647), &(*F->t_648), &(*F->c_649));
(*F->ro_650) = ((*F->ro_650) || F->cp_1966);
} else {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_646)).line_, rt_g_lit("not an object", 13));
}
ret_:

  return;
}

static void f_select_on_660(struct f_greenc_1fr *up_, rt_gstr base_652, P119 bt_653, P171 e_654, int *ro_655, int lv_656, P137 *code_out_657, P119 *t_658, P175 *c_659) {
  struct f_select_on_660fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_652 = cp_rt_gstr(base_652);
F->bt_653 = bt_653;
F->e_654 = e_654;
F->ro_655 = ro_655;
F->lv_656 = lv_656;
F->code_out_657 = code_out_657;
F->t_658 = t_658;
F->c_659 = c_659;
F->f_1971 = NULL;
F->d_1972 = NULL;
F->ct_1973 = NULL;
F->tmp_1974 = NULL;
(*F->c_659) = F->up->no_cons_188;
if (((*(P119)rt_nil_check(F->bt_653)).kind_ == ((rt_int)8LL))) {
f_finish_ptr_536(F->up, F->bt_653);
f_deref_641(F->up, F->base_652, F->bt_653, &F->d_1972);
(*F->ro_655) = 0;
if (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_654)).name_)), rt_g_lit("ALL", 3))) {
(*F->code_out_657) = F->d_1972;
(*F->t_658) = (*(P119)rt_nil_check(F->bt_653)).target_;
goto ret_;
}
f_select_on_660(F->up, (*(P137)rt_nil_check(F->d_1972)), (*(P119)rt_nil_check(F->bt_653)).target_, F->e_654, &(*F->ro_655), 1, &(*F->code_out_657), &(*F->t_658), &(*F->c_659));
goto ret_;
}
if (((*(P119)rt_nil_check(F->bt_653)).kind_ == ((rt_int)7LL))) {
if (((*(P119)rt_nil_check(F->bt_653)).priv_ && (!f_inside_package_882(F->up, (*(P119)rt_nil_check(F->bt_653)).decl_)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_654)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("the components of private type ", 31), f_kind_name_421(F->up, F->bt_653)), rt_g_lit(" are not visible here (RM79 7.4)", 32)));
}
F->f_1971 = (*(P119)rt_nil_check(F->bt_653)).fields_;
while ((F->f_1971 != NULL)) {
if (eq_rt_gstr((*(P137)rt_nil_check((*(P1607)rt_nil_check(F->f_1971)).name_)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_654)).name_)))) {
f_subst_cons_508(F->up, (*(P1607)rt_nil_check(F->f_1971)).c_, F->base_652, &(*F->c_659));
(*F->code_out_657) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(F->base_652, one_rt_gstr(46)), f_c_field_222(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_654)).name_)))));
(*F->t_658) = (*(P1607)rt_nil_check(F->f_1971)).t_;
if ((*(P1607)rt_nil_check(F->f_1971)).is_const_) {
(*F->ro_655) = 1;
}
if (((*(P1607)rt_nil_check(F->f_1971)).cond_ != NULL)) {
f_ctype_430(F->up, F->bt_653, &F->ct_1973);
f_new_name_208(F->up, rt_g_lit("vr", 2), &F->tmp_1974);
if (F->lv_656) {
(*F->code_out_657) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*({ ", 5), (*(P137)rt_nil_check(F->ct_1973))), rt_g_lit(" *", 2)), (*(P137)rt_nil_check(F->tmp_1974))), rt_g_lit(" = &(", 5)), F->base_652), rt_g_lit("); if (!(", 9)), f_subst_502(F->up, (*(P137)rt_nil_check((*(P1607)rt_nil_check(F->f_1971)).cond_)), cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*", 2), (*(P137)rt_nil_check(F->tmp_1974))), one_rt_gstr(41)))), rt_g_lit(")) rt_raise(RT_X_TAG); &", 24)), (*(P137)rt_nil_check(F->tmp_1974))), rt_g_lit("->", 2)), f_c_field_222(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_654)).name_)))), rt_g_lit("; }))", 5)));
} else {
(*F->code_out_657) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P137)rt_nil_check(F->ct_1973))), one_rt_gstr(32)), (*(P137)rt_nil_check(F->tmp_1974))), rt_g_lit(" = ", 3)), F->base_652), rt_g_lit("; if (!(", 8)), f_subst_502(F->up, (*(P137)rt_nil_check((*(P1607)rt_nil_check(F->f_1971)).cond_)), (*(P137)rt_nil_check(F->tmp_1974)))), rt_g_lit(")) rt_raise(RT_X_TAG); ", 23)), (*(P137)rt_nil_check(F->tmp_1974))), one_rt_gstr(46)), f_c_field_222(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_654)).name_)))), rt_g_lit("; })", 4)));
}
}
goto ret_;
}
F->f_1971 = (*(P1607)rt_nil_check(F->f_1971)).next_;
}
L_end_1975: ;
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_654)).line_, cat_rt_gstr(cat_rt_gstr(f_kind_name_421(F->up, F->bt_653), rt_g_lit(" has no component ", 18)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_654)).name_))));
}
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_654)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("cannot select ", 14), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_654)).name_))), rt_g_lit(" here", 5)));
ret_:

  return;
}

static void f_index_on_669(struct f_greenc_1fr *up_, rt_gstr base_661, P119 bt_662, P171 e_663, int *ro_664, int lv_665, P137 *code_out_666, P119 *t_667, P175 *c_668) {
  struct f_index_on_669fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_661 = cp_rt_gstr(base_661);
F->bt_662 = bt_662;
F->e_663 = e_663;
F->ro_664 = ro_664;
F->lv_665 = lv_665;
F->code_out_666 = code_out_666;
F->t_667 = t_667;
F->c_668 = c_668;
F->a_1976 = NULL;
F->a_1976 = (*(P171)rt_nil_check(F->e_663)).b_;
F->arrt_1977 = NULL;
F->arrt_1977 = F->bt_662;
F->acc_1978 = NULL;
F->acc_1978 = f_mk_205(F->up, F->base_661);
F->it_1979 = NULL;
F->i_1980 = NULL;
F->lo_1981 = NULL;
F->hi_1982 = NULL;
F->d_1983 = NULL;
F->ct_1984 = NULL;
F->tmp_1985 = NULL;
(*F->c_668) = F->up->no_cons_188;
if (((*(P119)rt_nil_check(F->bt_662)).kind_ == ((rt_int)8LL))) {
f_finish_ptr_536(F->up, F->bt_662);
f_deref_641(F->up, F->base_661, F->bt_662, &F->d_1983);
(*F->ro_664) = 0;
f_index_on_669(F->up, (*(P137)rt_nil_check(F->d_1983)), (*(P119)rt_nil_check(F->bt_662)).target_, F->e_663, &(*F->ro_664), F->lv_665, &(*F->code_out_666), &(*F->t_667), &(*F->c_668));
goto ret_;
}
if (((*(P119)rt_nil_check(F->bt_662)).kind_ != ((rt_int)6LL))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_663)).line_, rt_g_lit("cannot index this", 17));
}
if ((F->a_1976 == NULL)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_663)).line_, rt_g_lit("an index is required", 20));
}
if (((((*(P171)rt_nil_check(F->a_1976)).kind_ == ((rt_int)14LL)) || ((*(P171)rt_nil_check(F->a_1976)).kind_ == ((rt_int)80LL))) || (((*(P171)rt_nil_check(F->a_1976)).kind_ == ((rt_int)5LL)) && f_is_type_name_674(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->a_1976)).name_)))))) {
if ((((*(P171)rt_nil_check(F->a_1976)).next_ != NULL) || ((*(P119)rt_nil_check(F->bt_662)).dims_ != ((rt_int)1LL)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_663)).line_, rt_g_lit("a slice is taken of a one-dimensional array (RM79 4.3)", 54));
}
f_discrete_bounds_460(F->up, F->a_1976, (*(P119)rt_nil_check(F->bt_662)).idx_, &F->it_1979, &F->lo_1981, &F->hi_1982);
f_check_type_425(F->up, F->it_1979, (*(P119)rt_nil_check(F->bt_662)).idx_, (*(P171)rt_nil_check(F->e_663)).line_);
f_ctype_430(F->up, F->bt_662, &F->d_1983);
f_new_name_208(F->up, rt_g_lit("sl", 2), &F->tmp_1985);
(*F->code_out_666) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P137)rt_nil_check(F->d_1983))), one_rt_gstr(32)), (*(P137)rt_nil_check(F->tmp_1985))), rt_g_lit(" = ", 3)), F->base_661), rt_g_lit("; rt_int l_ = ", 14)), (*(P137)rt_nil_check(F->lo_1981))), rt_g_lit(", h_ = ", 7)), (*(P137)rt_nil_check(F->hi_1982))), rt_g_lit("; if (l_ <= h_) { rt_index(l_, ", 31)), (*(P137)rt_nil_check(F->tmp_1985))), rt_g_lit(".lo, ", 5)), (*(P137)rt_nil_check(F->tmp_1985))), rt_g_lit(".hi); ", 6)), rt_g_lit("rt_index(h_, ", 13)), (*(P137)rt_nil_check(F->tmp_1985))), rt_g_lit(".lo, ", 5)), (*(P137)rt_nil_check(F->tmp_1985))), rt_g_lit(".hi); } ", 8)), (*(P137)rt_nil_check(F->tmp_1985))), rt_g_lit(".p += l_ - ", 11)), (*(P137)rt_nil_check(F->tmp_1985))), rt_g_lit(".lo; ", 5)), (*(P137)rt_nil_check(F->tmp_1985))), rt_g_lit(".lo = l_; ", 10)), (*(P137)rt_nil_check(F->tmp_1985))), rt_g_lit(".hi = h_; ", 10)), (*(P137)rt_nil_check(F->tmp_1985))), rt_g_lit("; })", 4)));
(*F->t_667) = F->bt_662;
(*F->ro_664) = 1;
goto ret_;
}
if ((f_list_len_282(F->up, F->a_1976) > (*(P119)rt_nil_check(F->bt_662)).dims_)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_663)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("too many indexes for ", 21), f_kind_name_421(F->up, F->bt_662)), rt_g_lit(" (RM79 4.1.1)", 13)));
}
while ((F->a_1976 != NULL)) {
f_gexpr_695(F->up, F->a_1976, (*(P119)rt_nil_check(F->arrt_1977)).idx_, &F->it_1979, &F->i_1980);
f_check_type_425(F->up, F->it_1979, (*(P119)rt_nil_check(F->arrt_1977)).idx_, (*(P171)rt_nil_check(F->e_663)).line_);
f_ctype_430(F->up, F->arrt_1977, &F->ct_1984);
f_new_name_208(F->up, rt_g_lit("ix", 2), &F->tmp_1985);
if (F->lv_665) {
F->acc_1978 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*({ ", 5), (*(P137)rt_nil_check(F->ct_1984))), rt_g_lit(" *", 2)), (*(P137)rt_nil_check(F->tmp_1985))), rt_g_lit(" = &(", 5)), (*(P137)rt_nil_check(F->acc_1978))), rt_g_lit("); &", 4)), (*(P137)rt_nil_check(F->tmp_1985))), rt_g_lit("->p[rt_index(", 13)), (*(P137)rt_nil_check(F->i_1980))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->tmp_1985))), rt_g_lit("->lo, ", 6)), (*(P137)rt_nil_check(F->tmp_1985))), rt_g_lit("->hi) - ", 8)), (*(P137)rt_nil_check(F->tmp_1985))), rt_g_lit("->lo]; }))", 10)));
} else {
F->acc_1978 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P137)rt_nil_check(F->ct_1984))), one_rt_gstr(32)), (*(P137)rt_nil_check(F->tmp_1985))), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->acc_1978))), rt_g_lit("; ", 2)), (*(P137)rt_nil_check(F->tmp_1985))), rt_g_lit(".p[rt_index(", 12)), (*(P137)rt_nil_check(F->i_1980))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->tmp_1985))), rt_g_lit(".lo, ", 5)), (*(P137)rt_nil_check(F->tmp_1985))), rt_g_lit(".hi) - ", 7)), (*(P137)rt_nil_check(F->tmp_1985))), rt_g_lit(".lo]; })", 8)));
}
(*F->c_668) = (*(P119)rt_nil_check(F->arrt_1977)).elemcons_;
F->arrt_1977 = (*(P119)rt_nil_check(F->arrt_1977)).elem_;
F->a_1976 = (*(P171)rt_nil_check(F->a_1976)).next_;
}
L_end_1986: ;
(*F->code_out_666) = F->acc_1978;
(*F->t_667) = F->arrt_1977;
if ((!F->lv_665)) {
(*F->ro_664) = 1;
}
ret_:

  return;
}

static int f_type_attribute_672(struct f_greenc_1fr *up_, P119 t_670, rt_gstr name_671) {
  struct f_type_attribute_672fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_670 = t_670;
F->name_671 = cp_rt_gstr(name_671);
F->y_1987 = NULL;
F->y_1987 = ({ A113 ix1988 = F->up->table_116; ix1988.p[rt_index(f_hash_381(F->up, F->name_671), ix1988.lo, ix1988.hi) - ix1988.lo]; });
F->p_1989 = NULL;
while ((F->y_1987 != NULL)) {
if ((eq_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1987)).name_)), F->name_671) && (((*(P114)rt_nil_check(F->y_1987)).kind_ == ((rt_int)3LL)) || ((*(P114)rt_nil_check(F->y_1987)).kind_ == ((rt_int)4LL))))) {
if (f_same_396(F->up, (*(P114)rt_nil_check(F->y_1987)).result_, F->t_670)) {
F->result_ = 1;
goto ret_;
}
F->p_1989 = (*(P114)rt_nil_check(F->y_1987)).params_;
while ((F->p_1989 != NULL)) {
if (f_same_396(F->up, (*(P1592)rt_nil_check(F->p_1989)).t_, F->t_670)) {
F->result_ = 1;
goto ret_;
}
F->p_1989 = (*(P1592)rt_nil_check(F->p_1989)).next_;
}
L_end_1991: ;
}
F->y_1987 = (*(P114)rt_nil_check(F->y_1987)).chain_;
}
L_end_1990: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_type_name_674(struct f_greenc_1fr *up_, rt_gstr n_673) {
  struct f_is_type_name_674fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_673 = cp_rt_gstr(n_673);
F->y_1992 = NULL;
F->y_1992 = f_lookup_383(F->up, F->n_673);
F->result_ = ((F->y_1992 != NULL) && ((*(P114)rt_nil_check(F->y_1992)).kind_ == ((rt_int)5LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_char_lit_676(struct f_greenc_1fr *up_, P171 e_675) {
  struct f_is_char_lit_676fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_675 = e_675;
F->result_ = (((*(P171)rt_nil_check(F->e_675)).kind_ == ((rt_int)3LL)) && (({ rt_gstr at1993 = (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_675)).name_)); at1993.hi >= at1993.lo ? at1993.hi - at1993.lo + 1 : (rt_int)0; }) == ((rt_int)1LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_enum_lit_678(struct f_greenc_1fr *up_, P171 e_677) {
  struct f_is_enum_lit_678fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_677 = e_677;
F->y_1994 = NULL;
if (((*(P171)rt_nil_check(F->e_677)).kind_ != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->y_1994 = f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_677)).name_)));
F->result_ = ((F->y_1994 != NULL) && ((*(P114)rt_nil_check(F->y_1994)).kind_ == ((rt_int)7LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_c_string_680(struct f_greenc_1fr *up_, rt_gstr s_679) {
  struct f_c_string_680fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_679 = cp_rt_gstr(s_679);
F->n_1995 = ((rt_int)0LL);
{ rt_int lo1999 = ((rt_int)1LL), hi2000 = ({ rt_gstr at1997 = F->s_679; at1997.hi >= at1997.lo ? at1997.hi - at1997.lo + 1 : (rt_int)0; });
for (rt_int it2001 = lo1999; it2001 <= hi2000; it2001++) {
F->i_1998 = it2001;
if ((((({ rt_gstr ix2002 = F->s_679; ix2002.p[rt_index(F->i_1998, ix2002.lo, ix2002.hi) - ix2002.lo]; }) == 34) || (({ rt_gstr ix2003 = F->s_679; ix2003.p[rt_index(F->i_1998, ix2003.lo, ix2003.hi) - ix2003.lo]; }) == 92)) || (({ rt_gstr ix2004 = F->s_679; ix2004.p[rt_index(F->i_1998, ix2004.lo, ix2004.hi) - ix2004.lo]; }) == 63))) {
F->n_1995 = rt_add(F->n_1995, ((rt_int)1LL));
}
}
}
L_end_1996: ;
{
F->r_2007.lo = ((rt_int)1LL); F->r_2007.hi = rt_add(rt_add(({ rt_gstr at2006 = F->s_679; at2006.hi >= at2006.lo ? at2006.hi - at2006.lo + 1 : (rt_int)0; }), F->n_1995), ((rt_int)2LL));
F->r_2007.lo2 = 1; F->r_2007.hi2 = 1;
F->r_2007.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->r_2007));
F->j_2008 = ((rt_int)1LL);
(*({ rt_gstr *ix2009 = &(F->r_2007); &ix2009->p[rt_index(((rt_int)1LL), ix2009->lo, ix2009->hi) - ix2009->lo]; })) = 34;
{ rt_int lo2013 = ((rt_int)1LL), hi2014 = ({ rt_gstr at2011 = F->s_679; at2011.hi >= at2011.lo ? at2011.hi - at2011.lo + 1 : (rt_int)0; });
for (rt_int it2015 = lo2013; it2015 <= hi2014; it2015++) {
F->i_2012 = it2015;
F->j_2008 = rt_add(F->j_2008, ((rt_int)1LL));
if ((((({ rt_gstr ix2016 = F->s_679; ix2016.p[rt_index(F->i_2012, ix2016.lo, ix2016.hi) - ix2016.lo]; }) == 34) || (({ rt_gstr ix2017 = F->s_679; ix2017.p[rt_index(F->i_2012, ix2017.lo, ix2017.hi) - ix2017.lo]; }) == 92)) || (({ rt_gstr ix2018 = F->s_679; ix2018.p[rt_index(F->i_2012, ix2018.lo, ix2018.hi) - ix2018.lo]; }) == 63))) {
(*({ rt_gstr *ix2019 = &(F->r_2007); &ix2019->p[rt_index(F->j_2008, ix2019->lo, ix2019->hi) - ix2019->lo]; })) = 92;
F->j_2008 = rt_add(F->j_2008, ((rt_int)1LL));
}
(*({ rt_gstr *ix2020 = &(F->r_2007); &ix2020->p[rt_index(F->j_2008, ix2020->lo, ix2020->hi) - ix2020->lo]; })) = ({ rt_gstr ix2021 = F->s_679; ix2021.p[rt_index(F->i_2012, ix2021.lo, ix2021.hi) - ix2021.lo]; });
}
}
L_end_2010: ;
(*({ rt_gstr *ix2022 = &(F->r_2007); &ix2022->p[rt_index(rt_add(F->j_2008, ((rt_int)1LL)), ix2022->lo, ix2022->hi) - ix2022->lo]; })) = 34;
F->result_ = F->r_2007;
goto ret_;

}
L_end_2005: ;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_literal_682(struct f_greenc_1fr *up_, P171 e_681) {
  struct f_is_literal_682fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_681 = e_681;
if (((((*(P171)rt_nil_check(F->e_681)).kind_ == ((rt_int)1LL)) || ((*(P171)rt_nil_check(F->e_681)).kind_ == ((rt_int)2LL))) || f_is_char_lit_676(F->up, F->e_681))) {
F->result_ = 1;
goto ret_;
} else if ((((*(P171)rt_nil_check(F->e_681)).kind_ == ((rt_int)15LL)) || (((*(P171)rt_nil_check(F->e_681)).kind_ == ((rt_int)6LL)) && (!eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_681)).name_)), rt_g_lit("NOT", 3)))))) {
F->result_ = f_is_literal_682(F->up, (*(P171)rt_nil_check(F->e_681)).a_);
goto ret_;
} else if ((((*(P171)rt_nil_check(F->e_681)).kind_ == ((rt_int)7LL)) && (((((eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_681)).name_)), rt_g_lit("+", 1)) || eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_681)).name_)), rt_g_lit("-", 1))) || eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_681)).name_)), rt_g_lit("*", 1))) || eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_681)).name_)), rt_g_lit("/", 1))) || eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_681)).name_)), rt_g_lit("**", 2))) || eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_681)).name_)), rt_g_lit("MOD", 3))))) {
F->result_ = (f_is_literal_682(F->up, (*(P171)rt_nil_check(F->e_681)).a_) && f_is_literal_682(F->up, (*(P171)rt_nil_check(F->e_681)).b_));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_range_bounds_690(struct f_greenc_1fr *up_, P171 l_683, P171 h_684, P119 want_685, rt_int line_686, P119 *t_687, P137 *lo_688, P137 *hi_689) {
  struct f_range_bounds_690fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_683 = l_683;
F->h_684 = h_684;
F->want_685 = want_685;
F->line_686 = line_686;
F->t_687 = t_687;
F->lo_688 = lo_688;
F->hi_689 = hi_689;
F->w_2023 = NULL;
F->w_2023 = F->want_685;
F->t2_2024 = NULL;
if ((((F->w_2023 == NULL) && f_is_char_lit_676(F->up, F->l_683)) && f_is_char_lit_676(F->up, F->h_684))) {
F->w_2023 = F->up->ty_char_156;
}
if ((((F->w_2023 == NULL) && f_is_literal_682(F->up, F->l_683)) && (!f_is_literal_682(F->up, F->h_684)))) {
f_gexpr_695(F->up, F->h_684, NULL, &(*F->t_687), &(*F->hi_689));
f_gexpr_695(F->up, F->l_683, (*F->t_687), &F->t2_2024, &(*F->lo_688));
f_check_type_425(F->up, F->t2_2024, (*F->t_687), F->line_686);
} else {
f_gexpr_695(F->up, F->l_683, F->w_2023, &(*F->t_687), &(*F->lo_688));
f_gexpr_695(F->up, F->h_684, (*F->t_687), &F->t2_2024, &(*F->hi_689));
f_check_type_425(F->up, F->t2_2024, (*F->t_687), F->line_686);
}
ret_:

  return;
}

static void f_gexpr_695(struct f_greenc_1fr *up_, P171 e_691, P119 want_692, P119 *t_693, P137 *r_694) {
  struct f_gexpr_695fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_691 = e_691;
F->want_692 = want_692;
F->t_693 = t_693;
F->r_694 = r_694;
F->y_2025 = NULL;
F->bt_2026 = NULL;
F->c_2027 = NULL;
F->base_2029 = NULL;
F->a_2030 = NULL;
F->nm_2031 = NULL;
F->saved_lv_2032 = F->up->in_lv_path_197;
F->up->in_lv_path_197 = 0;
f_gexpr_1_700(F->up, F->e_691, F->want_692, &(*F->t_693), &(*F->r_694));
F->up->in_lv_path_197 = F->saved_lv_2032;
ret_:

  return;
}

static void f_gexpr_1_700(struct f_greenc_1fr *up_, P171 e_696, P119 want_697, P119 *t_698, P137 *r_699) {
  struct f_gexpr_1_700fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_696 = e_696;
F->want_697 = want_697;
F->t_698 = t_698;
F->r_699 = r_699;
F->y_2033 = NULL;
F->bt_2034 = NULL;
F->c_2035 = NULL;
F->base_2037 = NULL;
F->a_2038 = NULL;
F->nm_2039 = NULL;
(*F->t_698) = F->up->ty_int_153;
{ rt_int sel2040 = (*(P171)rt_nil_check(F->e_696)).kind_;
if (0 || sel2040 == ((rt_int)1LL)) {
if (((F->want_697 != NULL) && ((*(P119)rt_nil_check(F->want_697)).kind_ == ((rt_int)1LL)))) {
(*F->t_698) = F->want_697;
}
(*F->r_699) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int((*(P171)rt_nil_check(F->e_696)).ival_))), rt_g_lit("LL)", 3)));
} else if (0 || sel2040 == ((rt_int)2LL)) {
(*F->t_698) = F->up->ty_float_155;
(*F->r_699) = (*(P171)rt_nil_check(F->e_696)).name_;
if (((F->want_697 != NULL) && ((*(P119)rt_nil_check(F->want_697)).kind_ == ((rt_int)3LL)))) {
(*F->t_698) = F->want_697;
} else if ((((F->want_697 != NULL) && ((*(P119)rt_nil_check(F->want_697)).kind_ == ((rt_int)16LL))) && ((*(P119)rt_nil_check(F->want_697)).fsmall_ != NULL))) {
(*F->t_698) = F->want_697;
(*F->r_699) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix(", 9), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_696)).name_))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->want_697)).fsmall_))), one_rt_gstr(41)));
}
} else if (0 || sel2040 == ((rt_int)3LL)) {
if (((f_is_char_lit_676(F->up, F->e_696) && (F->want_697 != NULL)) && (((*(P119)rt_nil_check(F->want_697)).kind_ == ((rt_int)11LL)) || ((*(P119)rt_nil_check(F->want_697)).kind_ == ((rt_int)4LL))))) {
f_char_literal_710(F->up, F->e_696, F->want_697, &(*F->t_698), &(*F->r_699));
} else if ((((((F->want_697 != NULL) && ((*(P119)rt_nil_check(F->want_697)).kind_ == ((rt_int)6LL))) && ((*(P119)rt_nil_check(F->want_697)).dims_ == ((rt_int)1LL))) && (((*(P119)rt_nil_check((*(P119)rt_nil_check(F->want_697)).elem_)).kind_ == ((rt_int)11LL)) || ((*(P119)rt_nil_check((*(P119)rt_nil_check(F->want_697)).elem_)).kind_ == ((rt_int)4LL)))) && (!f_is_string_499(F->up, F->want_697)))) {
f_string_aggregate_705(F->up, F->e_696, F->want_697, &(*F->t_698), &(*F->r_699));
} else {
(*F->t_698) = F->up->ty_string_157;
if (((F->want_697 != NULL) && f_is_string_499(F->up, F->want_697))) {
(*F->t_698) = F->want_697;
}
(*F->r_699) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_lit(", 9), f_c_string_680(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_696)).name_)))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(({ rt_gstr at2042 = (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_696)).name_)); at2042.hi >= at2042.lo ? at2042.hi - at2042.lo + 1 : (rt_int)0; })))), one_rt_gstr(41)));
}
} else if (0 || sel2040 == ((rt_int)4LL)) {
(*F->t_698) = F->up->ty_nil_159;
(*F->r_699) = f_mk_205(F->up, rt_g_lit("NULL", 4));
} else if (0 || sel2040 == ((rt_int)15LL)) {
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->e_696)).a_, F->want_697, &(*F->t_698), &(*F->r_699));
} else if (0 || sel2040 == ((rt_int)5LL)) {
f_gen_name_715(F->up, F->e_696, F->want_697, &(*F->t_698), &(*F->r_699));
} else if (0 || sel2040 == ((rt_int)6LL)) {
f_gen_unop_720(F->up, F->e_696, F->want_697, &(*F->t_698), &(*F->r_699));
} else if (0 || sel2040 == ((rt_int)7LL)) {
f_gen_binop_752(F->up, F->e_696, F->want_697, &(*F->t_698), &(*F->r_699));
} else if (0 || sel2040 == ((rt_int)8LL)) {
if (((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_696)).a_)).kind_ == ((rt_int)5LL))) {
F->y_2033 = f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_696)).a_)).name_)));
if (((F->y_2033 == NULL) || ((((*(P114)rt_nil_check(F->y_2033)).kind_ == ((rt_int)3LL)) || ((*(P114)rt_nil_check(F->y_2033)).kind_ == ((rt_int)4LL))) || ((*(P114)rt_nil_check(F->y_2033)).kind_ == ((rt_int)10LL))))) {
F->up->call_want_193 = F->want_697;
f_gcall_862(F->up, F->e_696, 0, &(*F->t_698), &(*F->r_699));
goto ret_;
}
if (((*(P114)rt_nil_check(F->y_2033)).kind_ == ((rt_int)5LL))) {
f_conversion_757(F->up, F->e_696, F->y_2033, &(*F->t_698), &(*F->r_699));
goto ret_;
}
} else if ((((((((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_696)).a_)).kind_ == ((rt_int)9LL)) && ((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_696)).a_)).a_)).kind_ == ((rt_int)8LL))) && ((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_696)).a_)).a_)).a_)).kind_ == ((rt_int)5LL))) && f_is_task_name_943(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_696)).a_)).a_)).a_)).name_)))) && (f_member_of_880(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_696)).a_)).a_)).a_)).name_)), (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_696)).a_)).name_)), (*(P171)rt_nil_check(F->e_696)).line_) != NULL)) && ((*(P114)rt_nil_check(f_member_of_880(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_696)).a_)).a_)).a_)).name_)), (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_696)).a_)).name_)), (*(P171)rt_nil_check(F->e_696)).line_))).kind_ == ((rt_int)3LL)))) {
F->up->call_want_193 = F->want_697;
f_gcall_862(F->up, F->e_696, 0, &(*F->t_698), &(*F->r_699));
goto ret_;
} else if (((((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_696)).a_)).kind_ == ((rt_int)9LL)) && ((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_696)).a_)).a_)).kind_ == ((rt_int)5LL))) && f_is_type_name_674(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_696)).a_)).a_)).name_))))) {
F->up->call_want_193 = F->want_697;
f_gcall_862(F->up, F->e_696, 0, &(*F->t_698), &(*F->r_699));
goto ret_;
} else if ((((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_696)).a_)).kind_ == ((rt_int)9LL)) && f_is_package_876(F->up, (*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_696)).a_)).a_))) {
F->y_2033 = f_member_of_880(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_696)).a_)).a_)).name_)), (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_696)).a_)).name_)), (*(P171)rt_nil_check(F->e_696)).line_);
if (((F->y_2033 != NULL) && ((((*(P114)rt_nil_check(F->y_2033)).kind_ == ((rt_int)3LL)) || ((*(P114)rt_nil_check(F->y_2033)).kind_ == ((rt_int)4LL))) || ((*(P114)rt_nil_check(F->y_2033)).kind_ == ((rt_int)10LL))))) {
F->up->call_want_193 = F->want_697;
f_gcall_862(F->up, F->e_696, 0, &(*F->t_698), &(*F->r_699));
goto ret_;
}
}
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->e_696)).a_, NULL, &F->bt_2034, &F->base_2037);
F->ro_2036 = 1;
f_index_on_669(F->up, (*(P137)rt_nil_check(F->base_2037)), F->bt_2034, F->e_696, &F->ro_2036, 0, &(*F->r_699), &(*F->t_698), &F->c_2035);
} else if (0 || sel2040 == ((rt_int)9LL)) {
if ((((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_696)).a_)).kind_ == ((rt_int)5LL)) && f_is_type_name_674(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_696)).a_)).name_))))) {
F->nm_2039 = f_nn_276(F->up, ((rt_int)8LL), (*(P171)rt_nil_check(F->e_696)).line_);
(*(P171)rt_nil_check(F->nm_2039)).a_ = F->e_696;
F->up->call_want_193 = F->want_697;
f_gcall_862(F->up, F->nm_2039, 0, &(*F->t_698), &(*F->r_699));
goto ret_;
}
if (f_is_package_876(F->up, (*(P171)rt_nil_check(F->e_696)).a_)) {
F->nm_2039 = f_nn_276(F->up, ((rt_int)5LL), (*(P171)rt_nil_check(F->e_696)).line_);
(*(P171)rt_nil_check(F->nm_2039)).name_ = (*(P171)rt_nil_check(F->e_696)).name_;
(*(P171)rt_nil_check(F->nm_2039)).tag_ = (*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_696)).a_)).name_;
f_gen_name_715(F->up, F->nm_2039, F->want_697, &(*F->t_698), &(*F->r_699));
goto ret_;
}
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->e_696)).a_, NULL, &F->bt_2034, &F->base_2037);
F->ro_2036 = 1;
f_select_on_660(F->up, (*(P137)rt_nil_check(F->base_2037)), F->bt_2034, F->e_696, &F->ro_2036, 0, &(*F->r_699), &(*F->t_698), &F->c_2035);
} else if (0 || sel2040 == ((rt_int)10LL)) {
f_gen_attr_773(F->up, F->e_696, F->want_697, &(*F->t_698), &(*F->r_699));
} else if (0 || sel2040 == ((rt_int)11LL)) {
f_allocator_803(F->up, F->e_696, F->want_697, &(*F->t_698), &(*F->r_699));
} else if (0 || sel2040 == ((rt_int)12LL)) {
f_aggregate_808(F->up, F->e_696, F->want_697, &(*F->t_698), &(*F->r_699));
} else {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_696)).line_, rt_g_lit("this expression is not handled", 30));
}
}
ret_:

  return;
}

static void f_string_aggregate_705(struct f_greenc_1fr *up_, P171 e_701, P119 want_702, P119 *t_703, P137 *r_704) {
  struct f_string_aggregate_705fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_701 = e_701;
F->want_702 = want_702;
F->t_703 = t_703;
F->r_704 = r_704;
F->ag_2043 = NULL;
F->it_2044 = NULL;
F->tail_2045 = NULL;
F->l_2046 = NULL;
F->ag_2043 = f_nn_276(F->up, ((rt_int)12LL), (*(P171)rt_nil_check(F->e_701)).line_);
{ rt_int lo2050 = ((rt_int)1LL), hi2051 = ({ rt_gstr at2048 = (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_701)).name_)); at2048.hi >= at2048.lo ? at2048.hi - at2048.lo + 1 : (rt_int)0; });
for (rt_int it2052 = lo2050; it2052 <= hi2051; it2052++) {
F->k_2049 = it2052;
F->l_2046 = f_nn_276(F->up, ((rt_int)3LL), (*(P171)rt_nil_check(F->e_701)).line_);
(*(P171)rt_nil_check(F->l_2046)).name_ = f_mk_205(F->up, ({ rt_gstr sl2054 = (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_701)).name_)); rt_int l_ = F->k_2049, h_ = F->k_2049; if (l_ <= h_) { rt_index(l_, sl2054.lo, sl2054.hi); rt_index(h_, sl2054.lo, sl2054.hi); } sl2054.p += l_ - sl2054.lo; sl2054.lo = l_; sl2054.hi = h_; sl2054; }));
F->it_2044 = f_nn_276(F->up, ((rt_int)13LL), (*(P171)rt_nil_check(F->e_701)).line_);
(*(P171)rt_nil_check(F->it_2044)).b_ = F->l_2046;
if ((F->tail_2045 == NULL)) {
(*(P171)rt_nil_check(F->ag_2043)).a_ = F->it_2044;
} else {
(*(P171)rt_nil_check(F->tail_2045)).next_ = F->it_2044;
}
F->tail_2045 = F->it_2044;
}
}
L_end_2047: ;
if (((*(P171)rt_nil_check(F->ag_2043)).a_ == NULL)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_701)).line_, cat_rt_gstr(rt_g_lit("an empty string is not an aggregate of ", 39), f_kind_name_421(F->up, F->want_702)));
}
f_aggregate_808(F->up, F->ag_2043, F->want_702, &(*F->t_703), &(*F->r_704));
ret_:

  return;
}

static void f_char_literal_710(struct f_greenc_1fr *up_, P171 e_706, P119 want_707, P119 *t_708, P137 *r_709) {
  struct f_char_literal_710fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_706 = e_706;
F->want_707 = want_707;
F->t_708 = t_708;
F->r_709 = r_709;
if (((*(P119)rt_nil_check(F->want_707)).kind_ == ((rt_int)11LL))) {
(*F->t_708) = F->want_707;
(*F->r_709) = f_mk_205(F->up, rt_g_s2g(rt_str_of_int(rt_sub(((rt_int)(({ rt_gstr ix2057 = (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_706)).name_)); ix2057.p[rt_index(((rt_int)1LL), ix2057.lo, ix2057.hi) - ix2057.lo]; })) + 1), ((rt_int)1LL)))));
goto ret_;
}
F->i_2055 = f_lit_index_438(F->up, (*(P119)rt_nil_check(F->want_707)).lits_, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_706)).name_)));
if ((F->i_2055 < ((rt_int)0LL))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_706)).line_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(34), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_706)).name_))), rt_g_lit("\" is not a literal of ", 22)), f_kind_name_421(F->up, F->want_707)));
}
(*F->t_708) = F->want_707;
(*F->r_709) = f_mk_205(F->up, rt_g_s2g(rt_str_of_int(F->i_2055)));
ret_:

  return;
}

static void f_gen_name_715(struct f_greenc_1fr *up_, P171 e_711, P119 want_712, P119 *t_713, P137 *r_714) {
  struct f_gen_name_715fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_711 = e_711;
F->want_712 = want_712;
F->t_713 = t_713;
F->r_714 = r_714;
F->y_2058 = NULL;
F->y_2058 = f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_711)).name_)));
F->z_2059 = NULL;
F->call_2060 = NULL;
if (((*(P171)rt_nil_check(F->e_711)).tag_ != NULL)) {
F->y_2058 = f_member_of_880(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_711)).tag_)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_711)).name_)), (*(P171)rt_nil_check(F->e_711)).line_);
}
if ((F->y_2058 == NULL)) {
if ((eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_711)).name_)), rt_g_lit("PUT", 3)) || eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_711)).name_)), rt_g_lit("GET", 3)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_711)).line_, cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_711)).name_)), rt_g_lit(" needs an item", 14)));
}
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_711)).line_, cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_711)).name_)), rt_g_lit(" is not declared", 16)));
}
if ((((*(P114)rt_nil_check(F->y_2058)).kind_ == ((rt_int)2LL)) && (*(P114)rt_nil_check(F->y_2058)).hasmv_)) {
(*F->t_713) = (*(P114)rt_nil_check(F->y_2058)).t_;
(*F->r_714) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int((*(P114)rt_nil_check(F->y_2058)).mvalue_))), rt_g_lit("LL)", 3)));
goto ret_;
}
if ((((*(P114)rt_nil_check(F->y_2058)).kind_ == ((rt_int)2LL)) && ((*(P114)rt_nil_check(F->y_2058)).flags_ == rt_add(((rt_int)1LL), ((rt_int)2LL))))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_711)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("deferred constant ", 18), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2058)).name_))), rt_g_lit(" is used before its full declaration (RM79 7.4)", 47)));
}
if ((((*(P114)rt_nil_check(F->y_2058)).kind_ == ((rt_int)1LL)) || ((*(P114)rt_nil_check(F->y_2058)).kind_ == ((rt_int)2LL)))) {
(*F->t_713) = (*(P114)rt_nil_check(F->y_2058)).t_;
f_access_of_632(F->up, F->y_2058, &(*F->r_714));
goto ret_;
}
if (((*(P114)rt_nil_check(F->y_2058)).kind_ == ((rt_int)7LL))) {
F->z_2059 = F->y_2058;
if ((F->want_712 != NULL)) {
while ((F->z_2059 != NULL)) {
if (((eq_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->z_2059)).name_)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_711)).name_))) && ((*(P114)rt_nil_check(F->z_2059)).kind_ == ((rt_int)7LL))) && f_same_396(F->up, (*(P114)rt_nil_check(F->z_2059)).t_, F->want_712))) {
goto L_end_2061;
}
F->z_2059 = (*(P114)rt_nil_check(F->z_2059)).chain_;
}
L_end_2061: ;
if ((F->z_2059 == NULL)) {
F->z_2059 = F->y_2058;
}
}
(*F->t_713) = (*(P114)rt_nil_check(F->z_2059)).t_;
(*F->r_714) = f_mk_205(F->up, rt_g_s2g(rt_str_of_int((*(P114)rt_nil_check(F->z_2059)).mvalue_)));
goto ret_;
}
if (((((*(P114)rt_nil_check(F->y_2058)).kind_ == ((rt_int)3LL)) || ((*(P114)rt_nil_check(F->y_2058)).kind_ == ((rt_int)4LL))) || ((*(P114)rt_nil_check(F->y_2058)).kind_ == ((rt_int)10LL)))) {
F->call_2060 = f_nn_276(F->up, ((rt_int)8LL), (*(P171)rt_nil_check(F->e_711)).line_);
(*(P171)rt_nil_check(F->call_2060)).a_ = F->e_711;
F->up->call_want_193 = F->want_712;
f_gcall_862(F->up, F->call_2060, 0, &(*F->t_713), &(*F->r_714));
goto ret_;
}
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_711)).line_, cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_711)).name_)), rt_g_lit(" cannot be used as a value", 26)));
ret_:

  return;
}

static void f_gen_unop_720(struct f_greenc_1fr *up_, P171 e_716, P119 want_717, P119 *t_718, P137 *r_719) {
  struct f_gen_unop_720fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_716 = e_716;
F->want_717 = want_717;
F->t_718 = t_718;
F->r_719 = r_719;
F->a_2062 = NULL;
f_user_operator_925(F->up, F->e_716, F->want_717, &(*F->t_718), &(*F->r_719), &F->done_2063);
if (F->done_2063) {
goto ret_;
}
if (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_716)).name_)), rt_g_lit("NOT", 3))) {
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->e_716)).a_, F->up->ty_bool_154, &(*F->t_718), &F->a_2062);
f_check_type_425(F->up, (*F->t_718), F->up->ty_bool_154, (*(P171)rt_nil_check(F->e_716)).line_);
(*F->r_719) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!", 2), (*(P137)rt_nil_check(F->a_2062))), one_rt_gstr(41)));
goto ret_;
}
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->e_716)).a_, F->want_717, &(*F->t_718), &F->a_2062);
if ((!f_is_numeric_403(F->up, (*F->t_718)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_716)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("unary ", 6), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_716)).name_))), rt_g_lit(" applies to numeric values (RM79 4.5.4)", 39)));
}
if (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_716)).name_)), rt_g_lit("+", 1))) {
(*F->r_719) = F->a_2062;
} else if ((((*(P119)rt_nil_check((*F->t_718))).kind_ == ((rt_int)3LL)) || ((*(P119)rt_nil_check((*F->t_718))).kind_ == ((rt_int)16LL)))) {
(*F->r_719) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(-", 2), (*(P137)rt_nil_check(F->a_2062))), one_rt_gstr(41)));
} else {
(*F->r_719) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_neg(", 7), (*(P137)rt_nil_check(F->a_2062))), one_rt_gstr(41)));
}
ret_:

  return;
}

static int f_short_int_722(struct f_greenc_1fr *up_, P119 t_721) {
  struct f_short_int_722fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_721 = t_721;
F->result_ = (((*(P119)rt_nil_check(F->t_721)).kind_ == ((rt_int)1LL)) && (f_root_398(F->up, F->t_721) == F->up->ty_short_164));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_float_kind_724(struct f_greenc_1fr *up_, P119 t_723) {
  struct f_float_kind_724fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_723 = t_723;
if ((f_root_398(F->up, F->t_723) == F->up->ty_sfloat_166)) {
F->result_ = rt_g_lit("1", 1);
goto ret_;
}
F->result_ = rt_g_lit("0", 1);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_catenation_729(struct f_greenc_1fr *up_, P171 e_725, P119 want_726, P119 *t_727, P137 *r_728) {
  struct f_catenation_729fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_725 = e_725;
F->want_726 = want_726;
F->t_727 = t_727;
F->r_728 = r_728;
F->arrt_2064 = NULL;
F->ta_2065 = NULL;
F->tb_2066 = NULL;
F->a_2067 = NULL;
F->b_2068 = NULL;
F->ct_2069 = NULL;
if ((((F->want_726 != NULL) && ((*(P119)rt_nil_check(F->want_726)).kind_ == ((rt_int)6LL))) && ((*(P119)rt_nil_check(F->want_726)).dims_ == ((rt_int)1LL)))) {
F->arrt_2064 = F->want_726;
} else {
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->e_725)).a_, NULL, &F->ta_2065, &F->a_2067);
if ((((*(P119)rt_nil_check(F->ta_2065)).kind_ == ((rt_int)6LL)) && ((*(P119)rt_nil_check(F->ta_2065)).dims_ == ((rt_int)1LL)))) {
F->arrt_2064 = F->ta_2065;
} else {
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->e_725)).b_, NULL, &F->tb_2066, &F->b_2068);
if ((((*(P119)rt_nil_check(F->tb_2066)).kind_ == ((rt_int)6LL)) && ((*(P119)rt_nil_check(F->tb_2066)).dims_ == ((rt_int)1LL)))) {
F->arrt_2064 = F->tb_2066;
} else if ((((*(P119)rt_nil_check(F->ta_2065)).kind_ == ((rt_int)11LL)) && ((*(P119)rt_nil_check(F->tb_2066)).kind_ == ((rt_int)11LL)))) {
F->arrt_2064 = F->up->ty_string_157;
} else {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_725)).line_, rt_g_lit("& catenates one-dimensional arrays and their components (RM79 4.5.3)", 68));
}
}
}
f_ctype_430(F->up, F->arrt_2064, &F->ct_2069);
f_cat_operand_734(F->up, (*(P171)rt_nil_check(F->e_725)).a_, F->arrt_2064, (*(P171)rt_nil_check(F->e_725)).line_, &F->a_2067);
f_cat_operand_734(F->up, (*(P171)rt_nil_check(F->e_725)).b_, F->arrt_2064, (*(P171)rt_nil_check(F->e_725)).line_, &F->b_2068);
(*F->t_727) = F->arrt_2064;
(*F->r_728) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("cat_", 4), (*(P137)rt_nil_check(F->ct_2069))), one_rt_gstr(40)), (*(P137)rt_nil_check(F->a_2067))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->b_2068))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_cat_operand_734(struct f_greenc_1fr *up_, P171 x_730, P119 arrt_731, rt_int line_732, P137 *r_733) {
  struct f_cat_operand_734fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_730 = x_730;
F->arrt_731 = arrt_731;
F->line_732 = line_732;
F->r_733 = r_733;
F->tx_2070 = NULL;
F->ct_2071 = NULL;
if ((f_is_char_lit_676(F->up, F->x_730) && ((*(P119)rt_nil_check((*(P119)rt_nil_check(F->arrt_731)).elem_)).kind_ == ((rt_int)11LL)))) {
f_gexpr_695(F->up, F->x_730, (*(P119)rt_nil_check(F->arrt_731)).elem_, &F->tx_2070, &(*F->r_733));
} else {
f_gexpr_695(F->up, F->x_730, F->arrt_731, &F->tx_2070, &(*F->r_733));
}
if (f_same_396(F->up, F->tx_2070, F->arrt_731)) {
goto ret_;
}
if (f_same_396(F->up, F->tx_2070, (*(P119)rt_nil_check(F->arrt_731)).elem_)) {
f_ctype_430(F->up, F->arrt_731, &F->ct_2071);
(*F->r_733) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("one_", 4), (*(P137)rt_nil_check(F->ct_2071))), one_rt_gstr(40)), (*(P137)rt_nil_check((*F->r_733)))), one_rt_gstr(41)));
goto ret_;
}
f_fail_226(F->up, F->line_732, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("type mismatch: ", 15), f_kind_name_421(F->up, F->tx_2070)), rt_g_lit(" in a catenation of ", 20)), f_kind_name_421(F->up, F->arrt_731)), rt_g_lit(" (RM79 4.5.3)", 13)));
ret_:

  return;
}

static void f_arithmetic_739(struct f_greenc_1fr *up_, P171 e_735, P119 want_736, P119 *t_737, P137 *r_738) {
  struct f_arithmetic_739fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_735 = e_735;
F->want_736 = want_736;
F->t_737 = t_737;
F->r_738 = r_738;
F->op_2072 = cp_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_735)).name_)));
F->ta_2073 = NULL;
F->tb_2074 = NULL;
F->hint_2075 = NULL;
F->a_2076 = NULL;
F->b_2077 = NULL;
if (eq_rt_gstr(F->op_2072, rt_g_lit("**", 2))) {
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->e_735)).a_, F->want_736, &F->ta_2073, &F->a_2076);
F->hint_2075 = F->up->ty_int_153;
if (((*(P119)rt_nil_check(F->ta_2073)).kind_ == ((rt_int)1LL))) {
F->hint_2075 = F->ta_2073;
}
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->e_735)).b_, F->hint_2075, &F->tb_2074, &F->b_2077);
if (((*(P119)rt_nil_check(F->tb_2074)).kind_ != ((rt_int)1LL))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_735)).line_, rt_g_lit("the exponent of ** is an integer (RM79 4.5.6)", 45));
}
(*F->t_737) = F->ta_2073;
if (((*(P119)rt_nil_check(F->ta_2073)).kind_ == ((rt_int)1LL))) {
(*F->r_738) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_pow(", 7), (*(P137)rt_nil_check(F->a_2076))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->b_2077))), one_rt_gstr(41)));
} else if (((*(P119)rt_nil_check(F->ta_2073)).kind_ == ((rt_int)3LL))) {
(*F->r_738) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fpow(", 10), (*(P137)rt_nil_check(F->a_2076))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->b_2077))), rt_g_lit(", ", 2)), f_float_kind_724(F->up, F->ta_2073)), one_rt_gstr(41)));
} else {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_735)).line_, rt_g_lit("operator ** is defined for integer and floating point values (RM79 4.5.6)", 73));
}
} else {
if ((f_is_literal_682(F->up, (*(P171)rt_nil_check(F->e_735)).a_) && (!f_is_literal_682(F->up, (*(P171)rt_nil_check(F->e_735)).b_)))) {
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->e_735)).b_, F->want_736, &F->tb_2074, &F->b_2077);
F->hint_2075 = F->tb_2074;
if ((((*(P119)rt_nil_check(F->tb_2074)).kind_ == ((rt_int)16LL)) && (eq_rt_gstr(F->op_2072, rt_g_lit("*", 1)) || eq_rt_gstr(F->op_2072, rt_g_lit("/", 1))))) {
F->hint_2075 = F->up->ty_int_153;
}
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->e_735)).a_, F->hint_2075, &F->ta_2073, &F->a_2076);
} else {
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->e_735)).a_, F->want_736, &F->ta_2073, &F->a_2076);
F->hint_2075 = F->ta_2073;
if ((((((*(P119)rt_nil_check(F->ta_2073)).kind_ == ((rt_int)16LL)) && (eq_rt_gstr(F->op_2072, rt_g_lit("*", 1)) || eq_rt_gstr(F->op_2072, rt_g_lit("/", 1)))) && f_is_literal_682(F->up, (*(P171)rt_nil_check(F->e_735)).b_)) && ((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_735)).b_)).kind_ == ((rt_int)1LL)))) {
F->hint_2075 = F->up->ty_int_153;
}
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->e_735)).b_, F->hint_2075, &F->tb_2074, &F->b_2077);
}
if (((!f_is_numeric_403(F->up, F->ta_2073)) || (!f_is_numeric_403(F->up, F->tb_2074)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_735)).line_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2072), rt_g_lit(" needs numeric operands, not ", 29)), f_kind_name_421(F->up, F->ta_2073)), rt_g_lit(" and ", 5)), f_kind_name_421(F->up, F->tb_2074)));
}
if ((((*(P119)rt_nil_check(F->ta_2073)).kind_ == ((rt_int)16LL)) || ((*(P119)rt_nil_check(F->tb_2074)).kind_ == ((rt_int)16LL)))) {
f_fixed_operation_747(F->up, F->e_735, F->ta_2073, F->tb_2074, (*(P137)rt_nil_check(F->a_2076)), (*(P137)rt_nil_check(F->b_2077)), &(*F->t_737), &(*F->r_738));
goto ret_;
}
f_check_type_425(F->up, F->tb_2074, F->ta_2073, (*(P171)rt_nil_check(F->e_735)).line_);
(*F->t_737) = F->ta_2073;
if (((*(P119)rt_nil_check(F->ta_2073)).kind_ == ((rt_int)3LL))) {
if (eq_rt_gstr(F->op_2072, rt_g_lit("+", 1))) {
(*F->r_738) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fadd(", 10), (*(P137)rt_nil_check(F->a_2076))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->b_2077))), rt_g_lit(", ", 2)), f_float_kind_724(F->up, F->ta_2073)), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2072, rt_g_lit("-", 1))) {
(*F->r_738) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fsub(", 10), (*(P137)rt_nil_check(F->a_2076))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->b_2077))), rt_g_lit(", ", 2)), f_float_kind_724(F->up, F->ta_2073)), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2072, rt_g_lit("*", 1))) {
(*F->r_738) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fmul(", 10), (*(P137)rt_nil_check(F->a_2076))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->b_2077))), rt_g_lit(", ", 2)), f_float_kind_724(F->up, F->ta_2073)), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2072, rt_g_lit("/", 1))) {
(*F->r_738) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fdiv(", 10), (*(P137)rt_nil_check(F->a_2076))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->b_2077))), rt_g_lit(", ", 2)), f_float_kind_724(F->up, F->ta_2073)), one_rt_gstr(41)));
} else {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_735)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2072), rt_g_lit(" is not defined for real values (RM79 4.5.5)", 44)));
}
goto ret_;
}
if (eq_rt_gstr(F->op_2072, rt_g_lit("+", 1))) {
(*F->r_738) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_add(", 7), (*(P137)rt_nil_check(F->a_2076))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->b_2077))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2072, rt_g_lit("-", 1))) {
(*F->r_738) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_sub(", 7), (*(P137)rt_nil_check(F->a_2076))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->b_2077))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2072, rt_g_lit("*", 1))) {
(*F->r_738) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_mul(", 7), (*(P137)rt_nil_check(F->a_2076))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->b_2077))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2072, rt_g_lit("/", 1))) {
(*F->r_738) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_quot(", 8), (*(P137)rt_nil_check(F->a_2076))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->b_2077))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2072, rt_g_lit("MOD", 3))) {
(*F->r_738) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_rem(", 7), (*(P137)rt_nil_check(F->a_2076))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->b_2077))), one_rt_gstr(41)));
} else {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_735)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2072), rt_g_lit(" is not defined for integers", 28)));
}
}
if (f_short_int_722(F->up, (*F->t_737))) {
(*F->r_738) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_short(", 11), (*(P137)rt_nil_check((*F->r_738)))), one_rt_gstr(41)));
}
ret_:

  return;
}

static void f_fixed_operation_747(struct f_greenc_1fr *up_, P171 e_740, P119 ta_741, P119 tb_742, rt_gstr a_743, rt_gstr b_744, P119 *t_745, P137 *r_746) {
  struct f_fixed_operation_747fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_740 = e_740;
F->ta_741 = ta_741;
F->tb_742 = tb_742;
F->a_743 = cp_rt_gstr(a_743);
F->b_744 = cp_rt_gstr(b_744);
F->t_745 = t_745;
F->r_746 = r_746;
F->op_2078 = cp_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_740)).name_)));
if ((eq_rt_gstr(F->op_2078, rt_g_lit("+", 1)) || eq_rt_gstr(F->op_2078, rt_g_lit("-", 1)))) {
f_check_type_425(F->up, F->tb_742, F->ta_741, (*(P171)rt_nil_check(F->e_740)).line_);
(*F->t_745) = F->ta_741;
(*F->r_746) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_743), one_rt_gstr(32)), F->op_2078), one_rt_gstr(32)), F->b_744), one_rt_gstr(41)));
} else if (((eq_rt_gstr(F->op_2078, rt_g_lit("*", 1)) && ((*(P119)rt_nil_check(F->ta_741)).kind_ == ((rt_int)16LL))) && ((*(P119)rt_nil_check(F->tb_742)).kind_ == ((rt_int)16LL)))) {
(*F->t_745) = F->up->ty_ufixed_169;
(*F->r_746) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_743), rt_g_lit(" * ", 3)), F->b_744), one_rt_gstr(41)));
} else if (((eq_rt_gstr(F->op_2078, rt_g_lit("/", 1)) && ((*(P119)rt_nil_check(F->ta_741)).kind_ == ((rt_int)16LL))) && ((*(P119)rt_nil_check(F->tb_742)).kind_ == ((rt_int)16LL)))) {
(*F->t_745) = F->up->ty_ufixed_169;
(*F->r_746) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fdiv(", 10), F->a_743), rt_g_lit(", ", 2)), F->b_744), rt_g_lit(", 0)", 4)));
} else if (((eq_rt_gstr(F->op_2078, rt_g_lit("*", 1)) && ((*(P119)rt_nil_check(F->ta_741)).kind_ == ((rt_int)16LL))) && ((*(P119)rt_nil_check(F->tb_742)).kind_ == ((rt_int)1LL)))) {
(*F->t_745) = F->ta_741;
(*F->r_746) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_743), rt_g_lit(" * (double)(", 12)), F->b_744), rt_g_lit("))", 2)));
} else if (((eq_rt_gstr(F->op_2078, rt_g_lit("*", 1)) && ((*(P119)rt_nil_check(F->ta_741)).kind_ == ((rt_int)1LL))) && ((*(P119)rt_nil_check(F->tb_742)).kind_ == ((rt_int)16LL)))) {
(*F->t_745) = F->tb_742;
(*F->r_746) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((double)(", 10), F->a_743), rt_g_lit(") * ", 4)), F->b_744), one_rt_gstr(41)));
} else if (((eq_rt_gstr(F->op_2078, rt_g_lit("/", 1)) && ((*(P119)rt_nil_check(F->ta_741)).kind_ == ((rt_int)16LL))) && ((*(P119)rt_nil_check(F->tb_742)).kind_ == ((rt_int)1LL)))) {
(*F->t_745) = F->ta_741;
(*F->r_746) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix(rt_g_fdiv(", 19), F->a_743), rt_g_lit(", (double)(", 11)), F->b_744), rt_g_lit("), 0), ", 7)), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->ta_741)).fsmall_))), one_rt_gstr(41)));
} else {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_740)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2078), rt_g_lit(" is not defined for these fixed point operands (RM79 4.5.5)", 59)));
}
ret_:

  return;
}

static void f_gen_binop_752(struct f_greenc_1fr *up_, P171 e_748, P119 want_749, P119 *t_750, P137 *r_751) {
  struct f_gen_binop_752fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_748 = e_748;
F->want_749 = want_749;
F->t_750 = t_750;
F->r_751 = r_751;
F->op_2079 = cp_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_748)).name_)));
F->ta_2080 = NULL;
F->tb_2081 = NULL;
F->hint_2082 = NULL;
F->ct_2083 = NULL;
F->a_2084 = NULL;
F->b_2085 = NULL;
F->x_2086 = NULL;
F->dummy_2087 = NULL;
(*F->t_750) = F->up->ty_bool_154;
f_user_operator_925(F->up, F->e_748, F->want_749, &(*F->t_750), &(*F->r_751), &F->done_2088);
if (F->done_2088) {
goto ret_;
}
if (((eq_rt_gstr(F->op_2079, rt_g_lit("AND", 3)) || eq_rt_gstr(F->op_2079, rt_g_lit("OR", 2))) || eq_rt_gstr(F->op_2079, rt_g_lit("XOR", 3)))) {
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->e_748)).a_, F->up->ty_bool_154, &F->ta_2080, &F->a_2084);
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->e_748)).b_, F->up->ty_bool_154, &F->tb_2081, &F->b_2085);
f_check_type_425(F->up, F->ta_2080, F->up->ty_bool_154, (*(P171)rt_nil_check(F->e_748)).line_);
f_check_type_425(F->up, F->tb_2081, F->up->ty_bool_154, (*(P171)rt_nil_check(F->e_748)).line_);
if (eq_rt_gstr(F->op_2079, rt_g_lit("AND", 3))) {
(*F->r_751) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check(F->a_2084))), rt_g_lit(" && ", 4)), (*(P137)rt_nil_check(F->b_2085))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2079, rt_g_lit("OR", 2))) {
(*F->r_751) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check(F->a_2084))), rt_g_lit(" || ", 4)), (*(P137)rt_nil_check(F->b_2085))), one_rt_gstr(41)));
} else {
(*F->r_751) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check(F->a_2084))), rt_g_lit(" != ", 4)), (*(P137)rt_nil_check(F->b_2085))), one_rt_gstr(41)));
}
goto ret_;
}
if (eq_rt_gstr(F->op_2079, rt_g_lit("IN", 2))) {
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->e_748)).a_, NULL, &F->ta_2080, &F->a_2084);
f_gexpr_695(F->up, (*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_748)).b_)).a_, F->ta_2080, &F->tb_2081, &F->b_2085);
f_gexpr_695(F->up, (*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_748)).b_)).b_, F->ta_2080, &F->tb_2081, &F->x_2086);
(*F->r_751) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ rt_int m_ = ", 15), (*(P137)rt_nil_check(F->a_2084))), rt_g_lit("; m_ >= ", 8)), (*(P137)rt_nil_check(F->b_2085))), rt_g_lit(" && m_ <= ", 10)), (*(P137)rt_nil_check(F->x_2086))), rt_g_lit("; })", 4)));
goto ret_;
}
if (eq_rt_gstr(F->op_2079, rt_g_lit("&", 1))) {
f_catenation_729(F->up, F->e_748, F->want_749, &(*F->t_750), &(*F->r_751));
goto ret_;
}
if (f_is_rel_315(F->up, F->op_2079)) {
if (((((f_is_literal_682(F->up, (*(P171)rt_nil_check(F->e_748)).a_) || f_is_enum_lit_678(F->up, (*(P171)rt_nil_check(F->e_748)).a_)) || ((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_748)).a_)).kind_ == ((rt_int)4LL))) || ((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_748)).a_)).kind_ == ((rt_int)3LL))) || ((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_748)).a_)).kind_ == ((rt_int)12LL)))) {
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->e_748)).b_, NULL, &F->hint_2082, &F->dummy_2087);
}
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->e_748)).a_, F->hint_2082, &F->ta_2080, &F->a_2084);
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->e_748)).b_, F->ta_2080, &F->tb_2081, &F->b_2085);
F->ct_2083 = F->ta_2080;
if ((((*(P119)rt_nil_check(F->ta_2080)).kind_ != ((rt_int)10LL)) && ((*(P119)rt_nil_check(F->tb_2081)).kind_ != ((rt_int)10LL)))) {
f_check_type_425(F->up, F->tb_2081, F->ta_2080, (*(P171)rt_nil_check(F->e_748)).line_);
}
if (((*(P119)rt_nil_check(F->ta_2080)).kind_ == ((rt_int)10LL))) {
F->ct_2083 = F->tb_2081;
}
if (((((!eq_rt_gstr(F->op_2079, rt_g_lit("=", 1))) && (!eq_rt_gstr(F->op_2079, rt_g_lit("/=", 2)))) && (!f_is_numeric_403(F->up, F->ct_2083))) && (!f_is_discrete_405(F->up, F->ct_2083)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_748)).line_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2079), rt_g_lit(" is defined for scalar types, not for ", 38)), f_kind_name_421(F->up, F->ct_2083)), rt_g_lit(" (RM79 4.5.2)", 13)));
}
if (f_composite_542(F->up, F->ct_2083)) {
f_eq_code_557(F->up, F->ct_2083, (*(P137)rt_nil_check(F->a_2084)), (*(P137)rt_nil_check(F->b_2085)), &F->x_2086);
if (eq_rt_gstr(F->op_2079, rt_g_lit("=", 1))) {
(*F->r_751) = F->x_2086;
} else if (eq_rt_gstr(F->op_2079, rt_g_lit("/=", 2))) {
(*F->r_751) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!", 2), (*(P137)rt_nil_check(F->x_2086))), one_rt_gstr(41)));
} else {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_748)).line_, rt_g_lit("no ordering is defined for composite values", 43));
}
goto ret_;
}
if (eq_rt_gstr(F->op_2079, rt_g_lit("=", 1))) {
(*F->r_751) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check(F->a_2084))), rt_g_lit(" == ", 4)), (*(P137)rt_nil_check(F->b_2085))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2079, rt_g_lit("/=", 2))) {
(*F->r_751) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check(F->a_2084))), rt_g_lit(" != ", 4)), (*(P137)rt_nil_check(F->b_2085))), one_rt_gstr(41)));
} else {
(*F->r_751) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check(F->a_2084))), one_rt_gstr(32)), F->op_2079), one_rt_gstr(32)), (*(P137)rt_nil_check(F->b_2085))), one_rt_gstr(41)));
}
goto ret_;
}
f_arithmetic_739(F->up, F->e_748, F->want_749, &(*F->t_750), &(*F->r_751));
ret_:

  return;
}

static void f_conversion_757(struct f_greenc_1fr *up_, P171 e_753, P114 y_754, P119 *t_755, P137 *r_756) {
  struct f_conversion_757fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_753 = e_753;
F->y_754 = y_754;
F->t_755 = t_755;
F->r_756 = r_756;
F->aty_2089 = NULL;
F->a_2090 = NULL;
F->ag_2091 = NULL;
F->it_2092 = NULL;
F->tail_2093 = NULL;
F->arg_2094 = NULL;
(*F->t_755) = (*(P114)rt_nil_check(F->y_754)).t_;
if ((((*(P171)rt_nil_check(F->e_753)).flag_ == ((rt_int)9LL)) || (f_list_len_282(F->up, (*(P171)rt_nil_check(F->e_753)).b_) > ((rt_int)1LL)))) {
if (((*(P171)rt_nil_check(F->e_753)).flag_ == ((rt_int)9LL))) {
F->ag_2091 = (*(P171)rt_nil_check(F->e_753)).b_;
} else {
F->ag_2091 = f_nn_276(F->up, ((rt_int)12LL), (*(P171)rt_nil_check(F->e_753)).line_);
F->arg_2094 = (*(P171)rt_nil_check(F->e_753)).b_;
while ((F->arg_2094 != NULL)) {
F->it_2092 = f_nn_276(F->up, ((rt_int)13LL), (*(P171)rt_nil_check(F->e_753)).line_);
(*(P171)rt_nil_check(F->it_2092)).b_ = F->arg_2094;
if (((*(P171)rt_nil_check(F->arg_2094)).formal_ != NULL)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_753)).line_, rt_g_lit("a named component of an aggregate is given with => (RM79 3.6.2)", 63));
}
if ((F->tail_2093 == NULL)) {
(*(P171)rt_nil_check(F->ag_2091)).a_ = F->it_2092;
} else {
(*(P171)rt_nil_check(F->tail_2093)).next_ = F->it_2092;
}
F->tail_2093 = F->it_2092;
F->arg_2094 = (*(P171)rt_nil_check(F->arg_2094)).next_;
}
L_end_2095: ;
}
if (((*(P171)rt_nil_check(F->ag_2091)).kind_ != ((rt_int)12LL))) {
f_gexpr_695(F->up, F->ag_2091, (*F->t_755), &F->aty_2089, &(*F->r_756));
f_check_type_425(F->up, F->aty_2089, (*F->t_755), (*(P171)rt_nil_check(F->e_753)).line_);
} else {
f_aggregate_808(F->up, F->ag_2091, (*F->t_755), &F->aty_2089, &(*F->r_756));
}
f_constrain_761(F->up, F->y_754, (*F->t_755), &(*F->r_756));
goto ret_;
}
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->e_753)).b_, (*F->t_755), &F->aty_2089, &F->a_2090);
if (((((*(P119)rt_nil_check((*F->t_755))).kind_ == ((rt_int)6LL)) && ((*(P119)rt_nil_check(F->aty_2089)).kind_ == ((rt_int)6LL))) && (!f_same_396(F->up, (*F->t_755), F->aty_2089)))) {
f_array_conversion_768(F->up, F->e_753, (*F->t_755), F->aty_2089, (*(P114)rt_nil_check(F->y_754)).c_, (*(P137)rt_nil_check(F->a_2090)), &(*F->r_756));
goto ret_;
}
if ((f_is_numeric_403(F->up, (*F->t_755)) && f_is_numeric_403(F->up, F->aty_2089))) {
if ((((*(P119)rt_nil_check((*F->t_755))).kind_ == ((rt_int)1LL)) && ((*(P119)rt_nil_check(F->aty_2089)).kind_ != ((rt_int)1LL)))) {
(*F->r_756) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_round(", 11), (*(P137)rt_nil_check(F->a_2090))), one_rt_gstr(41)));
} else if ((((*(P119)rt_nil_check((*F->t_755))).kind_ == ((rt_int)3LL)) && ((*(P119)rt_nil_check(F->aty_2089)).kind_ == ((rt_int)1LL)))) {
(*F->r_756) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((double)(", 10), (*(P137)rt_nil_check(F->a_2090))), rt_g_lit("))", 2)));
} else if ((((*(P119)rt_nil_check((*F->t_755))).kind_ == ((rt_int)16LL)) && ((*(P119)rt_nil_check((*F->t_755))).fsmall_ != NULL))) {
if (((*(P119)rt_nil_check(F->aty_2089)).kind_ == ((rt_int)1LL))) {
(*F->r_756) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix((double)(", 18), (*(P137)rt_nil_check(F->a_2090))), rt_g_lit("), ", 3)), (*(P137)rt_nil_check((*(P119)rt_nil_check((*F->t_755))).fsmall_))), one_rt_gstr(41)));
} else {
(*F->r_756) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix(", 9), (*(P137)rt_nil_check(F->a_2090))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P119)rt_nil_check((*F->t_755))).fsmall_))), one_rt_gstr(41)));
}
} else {
(*F->r_756) = F->a_2090;
}
} else if (((f_same_396(F->up, F->aty_2089, (*F->t_755)) || f_derived_from_401(F->up, F->aty_2089, (*F->t_755))) || f_derived_from_401(F->up, (*F->t_755), F->aty_2089))) {
(*F->r_756) = F->a_2090;
} else {
f_check_type_425(F->up, F->aty_2089, (*F->t_755), (*(P171)rt_nil_check(F->e_753)).line_);
(*F->r_756) = F->a_2090;
}
if (((((((*(P119)rt_nil_check((*F->t_755))).kind_ == ((rt_int)1LL)) || ((*(P119)rt_nil_check((*F->t_755))).kind_ == ((rt_int)4LL))) || ((*(P119)rt_nil_check((*F->t_755))).kind_ == ((rt_int)11LL))) && ((*(P114)rt_nil_check(F->y_754)).c_ != NULL)) && ((*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_754)).c_)).lo_ != NULL))) {
(*F->r_756) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P137)rt_nil_check((*F->r_756)))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_754)).c_)).lo_))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_754)).c_)).hi_))), one_rt_gstr(41)));
} else if ((((((*(P119)rt_nil_check((*F->t_755))).kind_ == ((rt_int)3LL)) || ((*(P119)rt_nil_check((*F->t_755))).kind_ == ((rt_int)16LL))) && ((*(P114)rt_nil_check(F->y_754)).c_ != NULL)) && ((*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_754)).c_)).lo_ != NULL))) {
(*F->r_756) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_frange(", 10), (*(P137)rt_nil_check((*F->r_756)))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_754)).c_)).lo_))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_754)).c_)).hi_))), one_rt_gstr(41)));
} else if (f_short_int_722(F->up, (*F->t_755))) {
(*F->r_756) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_short(", 11), (*(P137)rt_nil_check((*F->r_756)))), one_rt_gstr(41)));
}
ret_:

  return;
}

static void f_constrain_761(struct f_greenc_1fr *up_, P114 y_758, P119 t_759, P137 *r_760) {
  struct f_constrain_761fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_758 = y_758;
F->t_759 = t_759;
F->r_760 = r_760;
F->ct_2096 = NULL;
F->tmp_2097 = NULL;
if ((((*(P114)rt_nil_check(F->y_758)).c_ == NULL) || ((*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_758)).c_)).lo_ == NULL))) {
goto ret_;
}
if ((((*(P119)rt_nil_check(F->t_759)).kind_ == ((rt_int)6LL)) && (((*(P119)rt_nil_check(F->t_759)).tcons_ == NULL) || ((*(P175)rt_nil_check((*(P119)rt_nil_check(F->t_759)).tcons_)).hi_ == NULL)))) {
f_ctype_430(F->up, F->t_759, &F->ct_2096);
f_new_name_208(F->up, rt_g_lit("q", 1), &F->tmp_2097);
(*F->r_760) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P137)rt_nil_check(F->ct_2096))), one_rt_gstr(32)), (*(P137)rt_nil_check(F->tmp_2097))), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check((*F->r_760)))), rt_g_lit("; rt_int l_ = ", 14)), (*(P137)rt_nil_check((*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_758)).c_)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P137)rt_nil_check((*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_758)).c_)).hi_))), rt_g_lit("; if (G_CNT(", 12)), (*(P137)rt_nil_check(F->tmp_2097))), rt_g_lit(") != (h_ >= l_ \? h_ - l_ + 1 : 0)) ", 35)), rt_g_lit("rt_raise_msg(RT_X_SUBTYPE, ", 27)), f_q_223(F->up)), rt_g_lit("array length", 12)), f_q_223(F->up)), rt_g_lit("); ", 3)), (*(P137)rt_nil_check(F->tmp_2097))), rt_g_lit(".lo = l_; ", 10)), (*(P137)rt_nil_check(F->tmp_2097))), rt_g_lit(".hi = h_; ", 10)), (*(P137)rt_nil_check(F->tmp_2097))), rt_g_lit("; })", 4)));
}
ret_:

  return;
}

static void f_array_conversion_768(struct f_greenc_1fr *up_, P171 e_762, P119 t_763, P119 aty_764, P175 c_765, rt_gstr a_766, P137 *r_767) {
  struct f_array_conversion_768fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_762 = e_762;
F->t_763 = t_763;
F->aty_764 = aty_764;
F->c_765 = c_765;
F->a_766 = cp_rt_gstr(a_766);
F->r_767 = r_767;
F->x_2098 = NULL;
F->y_2099 = NULL;
F->ct_2100 = NULL;
F->act_2101 = NULL;
F->et_2102 = NULL;
F->tmp_2103 = NULL;
F->s_2104 = NULL;
F->x_2098 = F->t_763;
F->y_2099 = F->aty_764;
if (((*(P119)rt_nil_check(F->t_763)).dims_ != (*(P119)rt_nil_check(F->aty_764)).dims_)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_762)).line_, rt_g_lit("no conversion between arrays of different dimensions (RM79 4.6)", 63));
}
{ rt_int lo2107 = ((rt_int)1LL), hi2108 = (*(P119)rt_nil_check(F->t_763)).dims_;
for (rt_int it2109 = lo2107; it2109 <= hi2108; it2109++) {
F->k_2106 = it2109;
if ((!((f_same_396(F->up, (*(P119)rt_nil_check(F->x_2098)).idx_, (*(P119)rt_nil_check(F->y_2099)).idx_) || f_derived_from_401(F->up, (*(P119)rt_nil_check(F->x_2098)).idx_, (*(P119)rt_nil_check(F->y_2099)).idx_)) || f_derived_from_401(F->up, (*(P119)rt_nil_check(F->y_2099)).idx_, (*(P119)rt_nil_check(F->x_2098)).idx_)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_762)).line_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no conversion from ", 19), f_kind_name_421(F->up, F->aty_764)), rt_g_lit(" to ", 4)), f_kind_name_421(F->up, F->t_763)), rt_g_lit(": the index types differ (RM79 4.6)", 35)));
}
F->x_2098 = (*(P119)rt_nil_check(F->x_2098)).elem_;
F->y_2099 = (*(P119)rt_nil_check(F->y_2099)).elem_;
}
}
L_end_2105: ;
if ((!((f_same_396(F->up, F->x_2098, F->y_2099) || f_derived_from_401(F->up, F->x_2098, F->y_2099)) || f_derived_from_401(F->up, F->y_2099, F->x_2098)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_762)).line_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no conversion from ", 19), f_kind_name_421(F->up, F->aty_764)), rt_g_lit(" to ", 4)), f_kind_name_421(F->up, F->t_763)), rt_g_lit(": the component types differ (RM79 4.6)", 39)));
}
f_ctype_430(F->up, F->t_763, &F->ct_2100);
f_ctype_430(F->up, F->aty_764, &F->act_2101);
f_elem_ctype_494(F->up, (*(P119)rt_nil_check(F->t_763)).elem_, &F->et_2102);
f_new_name_208(F->up, rt_g_lit("cv", 2), &F->tmp_2103);
(*F->r_767) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P137)rt_nil_check(F->act_2101))), rt_g_lit(" s_ = ", 6)), F->a_766), rt_g_lit("; ", 2)), (*(P137)rt_nil_check(F->ct_2100))), one_rt_gstr(32)), (*(P137)rt_nil_check(F->tmp_2103))), rt_g_lit("; ", 2)), (*(P137)rt_nil_check(F->tmp_2103))), rt_g_lit(".lo = s_.lo; ", 13)), (*(P137)rt_nil_check(F->tmp_2103))), rt_g_lit(".hi = s_.hi; ", 13)), (*(P137)rt_nil_check(F->tmp_2103))), rt_g_lit(".lo2 = s_.lo2; ", 15)), (*(P137)rt_nil_check(F->tmp_2103))), rt_g_lit(".hi2 = s_.hi2; ", 15)), (*(P137)rt_nil_check(F->tmp_2103))), rt_g_lit(".p = (", 6)), (*(P137)rt_nil_check(F->et_2102))), rt_g_lit(" *)s_.p; ", 9)), (*(P137)rt_nil_check(F->tmp_2103))), rt_g_lit("; })", 4)));
if ((((*(P119)rt_nil_check(F->t_763)).tcons_ != NULL) && ((*(P175)rt_nil_check((*(P119)rt_nil_check(F->t_763)).tcons_)).hi_ != NULL))) {
(*F->r_767) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P137)rt_nil_check(F->ct_2100))), one_rt_gstr(32)), (*(P137)rt_nil_check(F->tmp_2103))), rt_g_lit("x = ", 4)), (*(P137)rt_nil_check((*F->r_767)))), rt_g_lit("; rt_int l_ = ", 14)), (*(P137)rt_nil_check((*(P175)rt_nil_check((*(P119)rt_nil_check(F->t_763)).tcons_)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P137)rt_nil_check((*(P175)rt_nil_check((*(P119)rt_nil_check(F->t_763)).tcons_)).hi_))), rt_g_lit("; if (G_CNT(", 12)), (*(P137)rt_nil_check(F->tmp_2103))), rt_g_lit("x) != (h_ >= l_ \? h_ - l_ + 1 : 0)) ", 36)), rt_g_lit("rt_raise_msg(RT_X_SUBTYPE, ", 27)), f_q_223(F->up)), rt_g_lit("array length", 12)), f_q_223(F->up)), rt_g_lit("); ", 3)), (*(P137)rt_nil_check(F->tmp_2103))), rt_g_lit("x.lo = l_; ", 11)), (*(P137)rt_nil_check(F->tmp_2103))), rt_g_lit("x.hi = h_; ", 11)), (*(P137)rt_nil_check(F->tmp_2103))), rt_g_lit("x; })", 5)));
}
ret_:

  return;
}

static void f_gen_attr_773(struct f_greenc_1fr *up_, P171 e_769, P119 want_770, P119 *t_771, P137 *r_772) {
  struct f_gen_attr_773fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_769 = e_769;
F->want_770 = want_770;
F->t_771 = t_771;
F->r_772 = r_772;
F->a_2110 = cp_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_769)).name_)));
F->y_2111 = NULL;
F->tt_2112 = NULL;
F->aty_2113 = NULL;
F->v_2114 = NULL;
F->d_2115 = NULL;
F->c_2116 = NULL;
if (((((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_769)).a_)).kind_ == ((rt_int)8LL)) && ((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_769)).a_)).a_)).kind_ == ((rt_int)5LL))) && f_is_task_name_943(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_769)).a_)).a_)).name_))))) {
f_member_attr_1009(F->up, F->e_769, &(*F->t_771), &(*F->r_772));
goto ret_;
}
if (eq_rt_gstr(F->a_2110, rt_g_lit("ADDRESS", 7))) {
f_lvalue_651(F->up, (*(P171)rt_nil_check(F->e_769)).a_, &F->v_2114, &F->aty_2113, &F->c_2116, &F->ro_2118);
(*F->t_771) = F->up->ty_int_153;
(*F->r_772) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(intptr_t)&(", 21), (*(P137)rt_nil_check(F->v_2114))), rt_g_lit("))", 2)));
goto ret_;
}
if (((eq_rt_gstr(F->a_2110, rt_g_lit("COUNT", 5)) && ((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_769)).a_)).kind_ == ((rt_int)8LL))) && ((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_769)).a_)).a_)).kind_ == ((rt_int)5LL)))) {
F->y_2111 = f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_769)).a_)).a_)).name_)));
if ((((F->y_2111 != NULL) && ((*(P114)rt_nil_check(F->y_2111)).kind_ == ((rt_int)10LL))) && ((*(P114)rt_nil_check(F->y_2111)).c_ != NULL))) {
if ((!f_same_task_386(F->up, (*(P114)rt_nil_check(F->y_2111)).members_, F->up->cur_task_180))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_769)).line_, rt_g_lit("E'COUNT is allowed only in the body of the task (RM79 9.9)", 58));
}
f_entry_path_965(F->up, F->y_2111, rt_g_lit("", 0), &F->v_2114);
f_gexpr_695(F->up, (*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_769)).a_)).b_, NULL, &F->aty_2113, &F->d_2115);
f_entry_family_slot_980(F->up, F->y_2111, (*(P137)rt_nil_check(F->v_2114)), (*(P137)rt_nil_check(F->d_2115)), &F->v_2114);
(*F->t_771) = F->up->ty_int_153;
(*F->r_772) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_entry_count(&", 16), (*(P137)rt_nil_check(F->v_2114))), one_rt_gstr(41)));
goto ret_;
}
}
if (((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_769)).a_)).kind_ == ((rt_int)5LL))) {
F->y_2111 = f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_769)).a_)).name_)));
if ((((F->y_2111 == NULL) && eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_769)).a_)).name_)), rt_g_lit("SYSTEM", 6))) && eq_rt_gstr(F->a_2110, rt_g_lit("CLOCK", 5)))) {
(*F->t_771) = F->up->ty_time_168;
(*F->r_772) = f_mk_205(F->up, rt_g_lit("((double)rt_time())", 19));
goto ret_;
}
if ((((F->y_2111 == NULL) && eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_769)).a_)).name_)), rt_g_lit("SYSTEM", 6))) && (eq_rt_gstr(F->a_2110, rt_g_lit("MAX_PRIORITY", 12)) || eq_rt_gstr(F->a_2110, rt_g_lit("MIN_PRIORITY", 12))))) {
(*F->t_771) = F->up->ty_int_153;
if (eq_rt_gstr(F->a_2110, rt_g_lit("MAX_PRIORITY", 12))) {
(*F->r_772) = f_mk_205(F->up, rt_g_lit("((rt_int)255)", 13));
} else {
(*F->r_772) = f_mk_205(F->up, rt_g_lit("((rt_int)0)", 11));
}
goto ret_;
}
}
if (((F->y_2111 != NULL) && ((*(P114)rt_nil_check(F->y_2111)).kind_ == ((rt_int)5LL)))) {
F->tt_2112 = (*(P114)rt_nil_check(F->y_2111)).t_;
F->c_2116 = (*(P114)rt_nil_check(F->y_2111)).c_;
if (eq_rt_gstr(F->a_2110, rt_g_lit("SIZE", 4))) {
f_ctype_430(F->up, F->tt_2112, &F->d_2115);
(*F->t_771) = F->up->ty_int_153;
(*F->r_772) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(sizeof(", 17), (*(P137)rt_nil_check(F->d_2115))), rt_g_lit(") * 8))", 7)));
goto ret_;
}
if (eq_rt_gstr(F->a_2110, rt_g_lit("ORD", 3))) {
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->e_769)).b_, F->tt_2112, &F->aty_2113, &F->v_2114);
f_check_type_425(F->up, F->aty_2113, F->tt_2112, (*(P171)rt_nil_check(F->e_769)).line_);
(*F->t_771) = F->up->ty_int_153;
(*F->r_772) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(", 10), (*(P137)rt_nil_check(F->v_2114))), rt_g_lit(") + 1)", 6)));
goto ret_;
} else if ((eq_rt_gstr(F->a_2110, rt_g_lit("VAL", 3)) || eq_rt_gstr(F->a_2110, rt_g_lit("REP", 3)))) {
f_val_rep_798(F->up, F->e_769, F->tt_2112, F->c_2116, &(*F->t_771), &(*F->r_772));
goto ret_;
} else if ((eq_rt_gstr(F->a_2110, rt_g_lit("SUCC", 4)) || eq_rt_gstr(F->a_2110, rt_g_lit("PRED", 4)))) {
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->e_769)).b_, F->tt_2112, &F->aty_2113, &F->v_2114);
(*F->t_771) = F->tt_2112;
if (((*(P119)rt_nil_check(F->tt_2112)).kind_ == ((rt_int)1LL))) {
if (eq_rt_gstr(F->a_2110, rt_g_lit("SUCC", 4))) {
(*F->r_772) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_add(", 7), (*(P137)rt_nil_check(F->v_2114))), rt_g_lit(", 1)", 4)));
} else {
(*F->r_772) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_sub(", 7), (*(P137)rt_nil_check(F->v_2114))), rt_g_lit(", 1)", 4)));
}
} else if (eq_rt_gstr(F->a_2110, rt_g_lit("SUCC", 4))) {
(*F->r_772) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P137)rt_nil_check(F->v_2114))), rt_g_lit(" + 1, ", 6)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_2116)).lo_))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_2116)).hi_))), one_rt_gstr(41)));
} else {
(*F->r_772) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P137)rt_nil_check(F->v_2114))), rt_g_lit(" - 1, ", 6)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_2116)).lo_))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_2116)).hi_))), one_rt_gstr(41)));
}
goto ret_;
} else if ((((*(P119)rt_nil_check(F->tt_2112)).kind_ == ((rt_int)6LL)) && ((eq_rt_gstr(F->a_2110, rt_g_lit("FIRST", 5)) || eq_rt_gstr(F->a_2110, rt_g_lit("LAST", 4))) || eq_rt_gstr(F->a_2110, rt_g_lit("LENGTH", 6))))) {
f_type_array_attr_789(F->up, F->e_769, F->tt_2112, F->c_2116, &(*F->t_771), &(*F->r_772));
goto ret_;
} else if ((eq_rt_gstr(F->a_2110, rt_g_lit("FIRST", 5)) || eq_rt_gstr(F->a_2110, rt_g_lit("LAST", 4)))) {
(*F->t_771) = F->tt_2112;
if (((F->c_2116 != NULL) && ((*(P175)rt_nil_check(F->c_2116)).lo_ != NULL))) {
if (eq_rt_gstr(F->a_2110, rt_g_lit("FIRST", 5))) {
(*F->r_772) = (*(P175)rt_nil_check(F->c_2116)).lo_;
} else {
(*F->r_772) = (*(P175)rt_nil_check(F->c_2116)).hi_;
}
} else if (((*(P119)rt_nil_check(F->tt_2112)).kind_ == ((rt_int)1LL))) {
if (eq_rt_gstr(F->a_2110, rt_g_lit("FIRST", 5))) {
(*F->r_772) = f_mk_205(F->up, rt_g_lit("INT64_MIN", 9));
} else {
(*F->r_772) = f_mk_205(F->up, rt_g_lit("INT64_MAX", 9));
}
} else if ((((*(P119)rt_nil_check(F->tt_2112)).kind_ == ((rt_int)3LL)) && (f_root_398(F->up, F->tt_2112) == F->up->ty_sfloat_166))) {
if (eq_rt_gstr(F->a_2110, rt_g_lit("FIRST", 5))) {
(*F->r_772) = f_mk_205(F->up, rt_g_lit("(-3.40282347e+38)", 17));
} else {
(*F->r_772) = f_mk_205(F->up, rt_g_lit("3.40282347e+38", 14));
}
} else if (((*(P119)rt_nil_check(F->tt_2112)).kind_ == ((rt_int)3LL))) {
if (eq_rt_gstr(F->a_2110, rt_g_lit("FIRST", 5))) {
(*F->r_772) = f_mk_205(F->up, rt_g_lit("(-1.7976931348623157e+308)", 26));
} else {
(*F->r_772) = f_mk_205(F->up, rt_g_lit("1.7976931348623157e+308", 23));
}
} else {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_769)).line_, cat_rt_gstr(rt_g_lit("this type has no ", 17), F->a_2110));
}
goto ret_;
}
f_other_attr_1005(F->up, F->e_769, F->y_2111, &(*F->t_771), &(*F->r_772));
goto ret_;
}
if (((F->y_2111 != NULL) && (((*(P114)rt_nil_check(F->y_2111)).kind_ != ((rt_int)1LL)) && ((*(P114)rt_nil_check(F->y_2111)).kind_ != ((rt_int)2LL))))) {
f_other_attr_1005(F->up, F->e_769, F->y_2111, &(*F->t_771), &(*F->r_772));
goto ret_;
}
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->e_769)).a_, NULL, &F->tt_2112, &F->v_2114);
if (((*(P119)rt_nil_check(F->tt_2112)).kind_ == ((rt_int)8LL))) {
f_finish_ptr_536(F->up, F->tt_2112);
f_deref_641(F->up, (*(P137)rt_nil_check(F->v_2114)), F->tt_2112, &F->d_2115);
F->v_2114 = F->d_2115;
F->tt_2112 = (*(P119)rt_nil_check(F->tt_2112)).target_;
}
(*F->t_771) = F->up->ty_int_153;
if ((((*(P119)rt_nil_check(F->tt_2112)).kind_ == ((rt_int)6LL)) && ((eq_rt_gstr(F->a_2110, rt_g_lit("FIRST", 5)) || eq_rt_gstr(F->a_2110, rt_g_lit("LAST", 4))) || eq_rt_gstr(F->a_2110, rt_g_lit("LENGTH", 6))))) {
f_object_array_attr_783(F->up, F->e_769, F->tt_2112, (*(P137)rt_nil_check(F->v_2114)), &(*F->t_771), &(*F->r_772));
goto ret_;
}
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_769)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), F->a_2110), rt_g_lit(" is not handled here", 20)));
ret_:

  return;
}

static void f_attr_dim_777(struct f_greenc_1fr *up_, P171 e_774, P119 arrt_775, rt_int *n_776) {
  struct f_attr_dim_777fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_774 = e_774;
F->arrt_775 = arrt_775;
F->n_776 = n_776;
(*F->n_776) = ((rt_int)1LL);
if (((*(P171)rt_nil_check(F->e_774)).b_ != NULL)) {
f_manifest_442(F->up, (*(P171)rt_nil_check(F->e_774)).b_, &(*F->n_776), &F->ok_2119);
if ((!F->ok_2119)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_774)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("the index number of ", 20), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_774)).name_))), rt_g_lit("(N) is static (RM79 App. A)", 27)));
}
}
if ((((*F->n_776) < ((rt_int)1LL)) || ((*F->n_776) > (*(P119)rt_nil_check(F->arrt_775)).dims_))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_774)).line_, cat_rt_gstr(cat_rt_gstr(f_kind_name_421(F->up, F->arrt_775), rt_g_lit(" has no index ", 14)), rt_g_s2g(rt_str_of_int((*F->n_776)))));
}
ret_:

  return;
}

static void f_object_array_attr_783(struct f_greenc_1fr *up_, P171 e_778, P119 arrt_779, rt_gstr v_780, P119 *t_781, P137 *r_782) {
  struct f_object_array_attr_783fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_778 = e_778;
F->arrt_779 = arrt_779;
F->v_780 = cp_rt_gstr(v_780);
F->t_781 = t_781;
F->r_782 = r_782;
F->it_2121 = NULL;
F->it_2121 = F->arrt_779;
F->ct_2122 = NULL;
F->tmp_2123 = NULL;
F->p_2124 = NULL;
F->lo_2125 = NULL;
F->hi_2126 = NULL;
f_attr_dim_777(F->up, F->e_778, F->arrt_779, &F->n_2120);
f_ctype_430(F->up, F->arrt_779, &F->ct_2122);
f_new_name_208(F->up, rt_g_lit("at", 2), &F->tmp_2123);
F->p_2124 = F->tmp_2123;
{ rt_int lo2129 = ((rt_int)2LL), hi2130 = F->n_2120;
for (rt_int it2131 = lo2129; it2131 <= hi2130; it2131++) {
F->k_2128 = it2131;
F->it_2121 = (*(P119)rt_nil_check(F->it_2121)).elem_;
}
}
L_end_2127: ;
if ((F->n_2120 == ((rt_int)1LL))) {
F->lo_2125 = f_mk_205(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->p_2124)), rt_g_lit(".lo", 3)));
F->hi_2126 = f_mk_205(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->p_2124)), rt_g_lit(".hi", 3)));
} else {
{ rt_int lo2134 = ((rt_int)3LL), hi2135 = F->n_2120;
for (rt_int it2136 = lo2134; it2136 <= hi2135; it2136++) {
F->k_2133 = it2136;
F->p_2124 = f_mk_205(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->p_2124)), rt_g_lit(".p[0]", 5)));
}
}
L_end_2132: ;
F->lo_2125 = f_mk_205(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->p_2124)), rt_g_lit(".lo2", 4)));
F->hi_2126 = f_mk_205(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->p_2124)), rt_g_lit(".hi2", 4)));
}
(*F->t_781) = (*(P119)rt_nil_check(F->it_2121)).idx_;
if (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_778)).name_)), rt_g_lit("FIRST", 5))) {
(*F->r_782) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P137)rt_nil_check(F->ct_2122))), one_rt_gstr(32)), (*(P137)rt_nil_check(F->tmp_2123))), rt_g_lit(" = ", 3)), F->v_780), rt_g_lit("; ", 2)), (*(P137)rt_nil_check(F->lo_2125))), rt_g_lit("; })", 4)));
} else if (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_778)).name_)), rt_g_lit("LAST", 4))) {
(*F->r_782) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P137)rt_nil_check(F->ct_2122))), one_rt_gstr(32)), (*(P137)rt_nil_check(F->tmp_2123))), rt_g_lit(" = ", 3)), F->v_780), rt_g_lit("; ", 2)), (*(P137)rt_nil_check(F->hi_2126))), rt_g_lit("; })", 4)));
} else {
(*F->t_781) = F->up->ty_int_153;
(*F->r_782) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P137)rt_nil_check(F->ct_2122))), one_rt_gstr(32)), (*(P137)rt_nil_check(F->tmp_2123))), rt_g_lit(" = ", 3)), F->v_780), rt_g_lit("; ", 2)), (*(P137)rt_nil_check(F->hi_2126))), rt_g_lit(" >= ", 4)), (*(P137)rt_nil_check(F->lo_2125))), rt_g_lit(" \? ", 3)), (*(P137)rt_nil_check(F->hi_2126))), rt_g_lit(" - ", 3)), (*(P137)rt_nil_check(F->lo_2125))), rt_g_lit(" + 1 : (rt_int)0; })", 20)));
}
ret_:

  return;
}

static void f_type_array_attr_789(struct f_greenc_1fr *up_, P171 e_784, P119 arrt_785, P175 c_786, P119 *t_787, P137 *r_788) {
  struct f_type_array_attr_789fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_784 = e_784;
F->arrt_785 = arrt_785;
F->c_786 = c_786;
F->t_787 = t_787;
F->r_788 = r_788;
F->it_2138 = NULL;
F->it_2138 = F->arrt_785;
F->cc_2139 = NULL;
F->cc_2139 = F->c_786;
f_attr_dim_777(F->up, F->e_784, F->arrt_785, &F->n_2137);
{ rt_int lo2142 = ((rt_int)2LL), hi2143 = F->n_2137;
for (rt_int it2144 = lo2142; it2144 <= hi2143; it2144++) {
F->k_2141 = it2144;
F->it_2138 = (*(P119)rt_nil_check(F->it_2138)).elem_;
if ((F->cc_2139 != NULL)) {
F->cc_2139 = (*(P175)rt_nil_check(F->cc_2139)).inner_;
}
}
}
L_end_2140: ;
if (((F->cc_2139 == NULL) || ((*(P175)rt_nil_check(F->cc_2139)).lo_ == NULL))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_784)).line_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the bounds of ", 14), f_kind_name_421(F->up, F->arrt_785)), rt_g_lit(" are not known here: ", 21)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_784)).name_))), rt_g_lit(" applies to an array type with bounds (RM79 3.6)", 48)));
}
(*F->t_787) = (*(P119)rt_nil_check(F->it_2138)).idx_;
if (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_784)).name_)), rt_g_lit("FIRST", 5))) {
(*F->r_788) = (*(P175)rt_nil_check(F->cc_2139)).lo_;
} else if (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_784)).name_)), rt_g_lit("LAST", 4))) {
(*F->r_788) = (*(P175)rt_nil_check(F->cc_2139)).hi_;
} else {
(*F->t_787) = F->up->ty_int_153;
(*F->r_788) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ rt_int l_ = ", 15), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->cc_2139)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->cc_2139)).hi_))), rt_g_lit("; h_ >= l_ \? h_ - l_ + 1 : (rt_int)0; })", 40)));
}
ret_:

  return;
}

static void f_lit_table_792(struct f_greenc_1fr *up_, P119 t_790, P137 *r_791) {
  struct f_lit_table_792fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_790 = t_790;
F->r_791 = r_791;
F->l_2145 = NULL;
F->l_2145 = (*(P119)rt_nil_check(F->t_790)).lits_;
F->s_2146 = NULL;
F->s_2146 = f_mk_205(F->up, rt_g_lit("", 0));
if (((*(P119)rt_nil_check(F->t_790)).littab_ == NULL)) {
f_new_name_208(F->up, rt_g_lit("lits", 4), &(*(P119)rt_nil_check(F->t_790)).littab_);
while ((F->l_2145 != NULL)) {
if ((({ rt_gstr at2148 = (*(P137)rt_nil_check(F->s_2146)); at2148.hi >= at2148.lo ? at2148.hi - at2148.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->s_2146 = f_mk_205(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->s_2146)), rt_g_lit(", ", 2)));
}
if (((*(P171)rt_nil_check(F->l_2145)).kind_ == ((rt_int)3LL))) {
F->s_2146 = f_mk_205(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->s_2146)), f_c_string_680(F->up, cat_rt_gstr(cat_rt_gstr(f_q_223(F->up), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->l_2145)).name_))), f_q_223(F->up)))));
} else {
F->s_2146 = f_mk_205(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->s_2146)), f_c_string_680(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->l_2145)).name_)))));
}
F->l_2145 = (*(P171)rt_nil_check(F->l_2145)).next_;
}
L_end_2147: ;
f_put_to_230(F->up, F->up->out_types_125, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static const char *const ", 25), (*(P137)rt_nil_check((*(P119)rt_nil_check(F->t_790)).littab_))), rt_g_lit("[] = {", 6)), (*(P137)rt_nil_check(F->s_2146))), rt_g_lit("};", 2)));
}
(*F->r_791) = (*(P119)rt_nil_check(F->t_790)).littab_;
ret_:

  return;
}

static void f_val_rep_798(struct f_greenc_1fr *up_, P171 e_793, P119 tt_794, P175 c_795, P119 *t_796, P137 *r_797) {
  struct f_val_rep_798fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_793 = e_793;
F->tt_794 = tt_794;
F->c_795 = c_795;
F->t_796 = t_796;
F->r_797 = r_797;
F->aty_2149 = NULL;
F->v_2150 = NULL;
F->lt_2151 = NULL;
if (((*(P171)rt_nil_check(F->e_793)).b_ == NULL)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_793)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_793)).name_))), rt_g_lit(" takes an argument", 18)));
}
if (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_793)).name_)), rt_g_lit("REP", 3))) {
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->e_793)).b_, F->tt_794, &F->aty_2149, &F->v_2150);
f_check_type_425(F->up, F->aty_2149, F->tt_794, (*(P171)rt_nil_check(F->e_793)).line_);
(*F->t_796) = F->up->ty_string_157;
if (((*(P119)rt_nil_check(F->tt_794)).kind_ == ((rt_int)1LL))) {
(*F->r_797) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_str_of_int(", 14), (*(P137)rt_nil_check(F->v_2150))), one_rt_gstr(41)));
} else if (((*(P119)rt_nil_check(F->tt_794)).kind_ == ((rt_int)3LL))) {
(*F->r_797) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_image_float(", 17), (*(P137)rt_nil_check(F->v_2150))), one_rt_gstr(41)));
} else if (((*(P119)rt_nil_check(F->tt_794)).kind_ == ((rt_int)2LL))) {
(*F->r_797) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_bool_rep(", 14), (*(P137)rt_nil_check(F->v_2150))), one_rt_gstr(41)));
} else if (((*(P119)rt_nil_check(F->tt_794)).kind_ == ((rt_int)11LL))) {
(*F->r_797) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_char_rep(", 14), (*(P137)rt_nil_check(F->v_2150))), one_rt_gstr(41)));
} else if (((*(P119)rt_nil_check(F->tt_794)).kind_ == ((rt_int)4LL))) {
f_lit_table_792(F->up, F->tt_794, &F->lt_2151);
(*F->r_797) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_enum_rep(", 14), (*(P137)rt_nil_check(F->v_2150))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->lt_2151))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(f_list_len_282(F->up, (*(P119)rt_nil_check(F->tt_794)).lits_)))), one_rt_gstr(41)));
} else {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_793)).line_, rt_g_lit("REP is an attribute of scalar types", 35));
}
(*F->r_797) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_s2g(", 9), (*(P137)rt_nil_check((*F->r_797)))), one_rt_gstr(41)));
goto ret_;
}
(*F->t_796) = F->tt_794;
if (((*(P119)rt_nil_check(F->tt_794)).kind_ == ((rt_int)1LL))) {
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->e_793)).b_, F->up->ty_string_157, &F->aty_2149, &F->v_2150);
f_check_type_425(F->up, F->aty_2149, F->up->ty_string_157, (*(P171)rt_nil_check(F->e_793)).line_);
(*F->r_797) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_int_of_str(rt_g_g2s(", 23), (*(P137)rt_nil_check(F->v_2150))), rt_g_lit("))", 2)));
if (((F->c_795 != NULL) && ((*(P175)rt_nil_check(F->c_795)).lo_ != NULL))) {
(*F->r_797) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P137)rt_nil_check((*F->r_797)))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_795)).lo_))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_795)).hi_))), one_rt_gstr(41)));
}
} else if (((*(P119)rt_nil_check(F->tt_794)).kind_ == ((rt_int)3LL))) {
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->e_793)).b_, F->up->ty_string_157, &F->aty_2149, &F->v_2150);
f_check_type_425(F->up, F->aty_2149, F->up->ty_string_157, (*(P171)rt_nil_check(F->e_793)).line_);
(*F->r_797) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_float_val(rt_g_g2s(", 24), (*(P137)rt_nil_check(F->v_2150))), rt_g_lit("))", 2)));
} else if (((((*(P119)rt_nil_check(F->tt_794)).kind_ == ((rt_int)2LL)) || ((*(P119)rt_nil_check(F->tt_794)).kind_ == ((rt_int)11LL))) || ((*(P119)rt_nil_check(F->tt_794)).kind_ == ((rt_int)4LL)))) {
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->e_793)).b_, NULL, &F->aty_2149, &F->v_2150);
if (f_is_string_499(F->up, F->aty_2149)) {
F->v_2150 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_g2s(", 9), (*(P137)rt_nil_check(F->v_2150))), one_rt_gstr(41)));
if (((*(P119)rt_nil_check(F->tt_794)).kind_ == ((rt_int)2LL))) {
F->v_2150 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_bool_val(", 14), (*(P137)rt_nil_check(F->v_2150))), one_rt_gstr(41)));
} else if (((*(P119)rt_nil_check(F->tt_794)).kind_ == ((rt_int)11LL))) {
F->v_2150 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_char_val(", 14), (*(P137)rt_nil_check(F->v_2150))), one_rt_gstr(41)));
} else {
f_lit_table_792(F->up, F->tt_794, &F->lt_2151);
F->v_2150 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_enum_val(", 14), (*(P137)rt_nil_check(F->v_2150))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->lt_2151))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(f_list_len_282(F->up, (*(P119)rt_nil_check(F->tt_794)).lits_)))), one_rt_gstr(41)));
}
} else {
f_check_type_425(F->up, F->aty_2149, F->up->ty_int_153, (*(P171)rt_nil_check(F->e_793)).line_);
F->v_2150 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check(F->v_2150))), rt_g_lit(" - 1)", 5)));
}
(*F->r_797) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P137)rt_nil_check(F->v_2150))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_795)).lo_))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P175)rt_nil_check(F->c_795)).hi_))), one_rt_gstr(41)));
} else {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_793)).line_, rt_g_lit("VAL is an attribute of scalar types", 35));
}
ret_:

  return;
}

static void f_allocator_803(struct f_greenc_1fr *up_, P171 e_799, P119 want_800, P119 *t_801, P137 *r_802) {
  struct f_allocator_803fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_799 = e_799;
F->want_800 = want_800;
F->t_801 = t_801;
F->r_802 = r_802;
F->y_2153 = NULL;
F->y_2153 = f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_799)).name_)));
F->target_2154 = NULL;
F->vt_2155 = NULL;
F->ct_2156 = NULL;
F->pt_2157 = NULL;
F->cell_2158 = NULL;
F->v_2159 = NULL;
F->x_2160 = NULL;
if (((F->want_800 == NULL) || ((*(P119)rt_nil_check(F->want_800)).kind_ != ((rt_int)8LL)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_799)).line_, rt_g_lit("the access type of this allocator is not known here", 51));
}
if (((F->y_2153 == NULL) || ((*(P114)rt_nil_check(F->y_2153)).kind_ != ((rt_int)5LL)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_799)).line_, cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_799)).name_)), rt_g_lit(" is not a type", 14)));
}
f_finish_ptr_536(F->up, F->want_800);
F->target_2154 = (*(P119)rt_nil_check(F->want_800)).target_;
if ((!f_same_396(F->up, (*(P114)rt_nil_check(F->y_2153)).t_, F->want_800))) {
f_check_type_425(F->up, (*(P114)rt_nil_check(F->y_2153)).t_, F->target_2154, (*(P171)rt_nil_check(F->e_799)).line_);
}
f_ctype_430(F->up, F->target_2154, &F->ct_2156);
f_ctype_430(F->up, F->want_800, &F->pt_2157);
f_new_name_208(F->up, rt_g_lit("cell", 4), &F->cell_2158);
if (((*(P171)rt_nil_check(F->e_799)).a_ == NULL)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_799)).line_, rt_g_lit("an allocator gives the initial value: new T(...) (RM79 4.7)", 59));
}
if ((F->up->pure_sym_194 != NULL)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_799)).line_, rt_g_lit("an allocator cannot appear in a function body (RM79 6.5)", 56));
}
if (((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_799)).a_)).kind_ == ((rt_int)12LL))) {
f_aggregate_808(F->up, (*(P171)rt_nil_check(F->e_799)).a_, F->target_2154, &F->vt_2155, &F->v_2159);
} else {
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->e_799)).a_, F->target_2154, &F->vt_2155, &F->v_2159);
}
f_check_type_425(F->up, F->vt_2155, F->target_2154, (*(P171)rt_nil_check(F->e_799)).line_);
f_copy_code_552(F->up, F->target_2154, (*(P137)rt_nil_check(F->v_2159)), &F->x_2160);
(*F->t_801) = F->want_800;
(*F->r_802) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P137)rt_nil_check(F->ct_2156))), rt_g_lit(" *", 2)), (*(P137)rt_nil_check(F->cell_2158))), rt_g_lit(" = rt_alloc(sizeof(", 19)), (*(P137)rt_nil_check(F->ct_2156))), rt_g_lit(")); *", 5)), (*(P137)rt_nil_check(F->cell_2158))), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->x_2160))), rt_g_lit("; (", 3)), (*(P137)rt_nil_check(F->pt_2157))), one_rt_gstr(41)), (*(P137)rt_nil_check(F->cell_2158))), rt_g_lit("; })", 4)));
ret_:

  return;
}

static void f_aggregate_808(struct f_greenc_1fr *up_, P171 e_804, P119 want_805, P119 *t_806, P137 *r_807) {
  struct f_aggregate_808fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_804 = e_804;
F->want_805 = want_805;
F->t_806 = t_806;
F->r_807 = r_807;
F->b_2161 = NULL;
F->b_2161 = F->up->agg_bounds_178;
F->up->agg_bounds_178 = NULL;
if ((F->want_805 == NULL)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_804)).line_, rt_g_lit("the type of this aggregate is not known here: qualify it, T(...) (RM79 4.6)", 75));
}
(*F->t_806) = F->want_805;
if (((*(P119)rt_nil_check(F->want_805)).kind_ == ((rt_int)7LL))) {
f_record_aggregate_827(F->up, F->e_804, F->want_805, &(*F->r_807));
} else if (((*(P119)rt_nil_check(F->want_805)).kind_ == ((rt_int)6LL))) {
f_array_aggregate_845(F->up, F->e_804, F->want_805, F->b_2161, &(*F->r_807));
} else {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_804)).line_, cat_rt_gstr(rt_g_lit("an aggregate builds a record or an array, not ", 46), f_kind_name_421(F->up, F->want_805)));
}
ret_:

  return;
}

static void f_captured_811(struct f_greenc_1fr *up_, P123 b_809, P137 *r_810) {
  struct f_captured_811fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_809 = b_809;
F->r_810 = r_810;
F->l_2162 = NULL;
F->l_2162 = (*(P123)rt_nil_check(F->b_809)).head_;
(*F->r_810) = f_mk_205(F->up, rt_g_lit("", 0));
while ((F->l_2162 != NULL)) {
(*F->r_810) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check((*F->r_810))), one_rt_gstr(32)), (*(P137)rt_nil_check((*(P148)rt_nil_check(F->l_2162)).s_))));
F->l_2162 = (*(P148)rt_nil_check(F->l_2162)).next_;
}
L_end_2163: ;
ret_:

  return;
}

static P1607 f_field_at_814(struct f_greenc_1fr *up_, P119 rt_812, rt_int k_813) {
  struct f_field_at_814fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->rt_812 = rt_812;
F->k_813 = k_813;
F->f_2164 = NULL;
F->f_2164 = (*(P119)rt_nil_check(F->rt_812)).fields_;
{ rt_int lo2167 = ((rt_int)2LL), hi2168 = F->k_813;
for (rt_int it2169 = lo2167; it2169 <= hi2168; it2169++) {
F->i_2166 = it2169;
F->f_2164 = (*(P1607)rt_nil_check(F->f_2164)).next_;
}
}
L_end_2165: ;
F->result_ = F->f_2164;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P171 f_item_for_819(struct f_greenc_1fr *up_, P171 e_815, P119 rt_816, rt_int k_817, rt_int p_818) {
  struct f_item_for_819fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_815 = e_815;
F->rt_816 = rt_816;
F->k_817 = k_817;
F->p_818 = p_818;
F->it_2170 = NULL;
F->it_2170 = (*(P171)rt_nil_check(F->e_815)).a_;
F->lab_2171 = NULL;
F->n_2172 = ((rt_int)0LL);
while ((F->it_2170 != NULL)) {
if (((*(P171)rt_nil_check(F->it_2170)).a_ == NULL)) {
F->n_2172 = rt_add(F->n_2172, ((rt_int)1LL));
if ((F->n_2172 == F->p_818)) {
F->result_ = (*(P171)rt_nil_check(F->it_2170)).b_;
goto ret_;
}
} else {
F->lab_2171 = (*(P171)rt_nil_check(F->it_2170)).a_;
while ((F->lab_2171 != NULL)) {
if ((((*(P171)rt_nil_check(F->lab_2171)).flag_ == ((rt_int)1LL)) || (((*(P171)rt_nil_check((*(P171)rt_nil_check(F->lab_2171)).a_)).kind_ == ((rt_int)5LL)) && eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->lab_2171)).a_)).name_)), (*(P137)rt_nil_check((*(P1607)rt_nil_check(f_field_at_814(F->up, F->rt_816, F->k_817))).name_)))))) {
F->result_ = (*(P171)rt_nil_check(F->it_2170)).b_;
goto ret_;
}
F->lab_2171 = (*(P171)rt_nil_check(F->lab_2171)).next_;
}
L_end_2174: ;
}
F->it_2170 = (*(P171)rt_nil_check(F->it_2170)).next_;
}
L_end_2173: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_arm_holds_823(struct f_greenc_1fr *up_, P171 arm_820, rt_int v_821, int *res_822) {
  struct f_arm_holds_823fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->arm_820 = arm_820;
F->v_821 = v_821;
F->res_822 = res_822;
F->l_2175 = NULL;
F->l_2175 = (*(P171)rt_nil_check(F->arm_820)).a_;
(*F->res_822) = 0;
while ((F->l_2175 != NULL)) {
f_static_choice_840(F->up, (*(P171)rt_nil_check(F->l_2175)).a_, &F->lo_2176, &F->ok_2178);
F->hi_2177 = F->lo_2176;
if (((*(P171)rt_nil_check(F->l_2175)).b_ != NULL)) {
f_static_choice_840(F->up, (*(P171)rt_nil_check(F->l_2175)).b_, &F->hi_2177, &F->ok_2178);
}
if (((F->v_821 >= F->lo_2176) && (F->v_821 <= F->hi_2177))) {
(*F->res_822) = 1;
}
F->l_2175 = (*(P171)rt_nil_check(F->l_2175)).next_;
}
L_end_2179: ;
ret_:

  return;
}

static void f_record_aggregate_827(struct f_greenc_1fr *up_, P171 e_824, P119 rt_825, P137 *r_826) {
  struct f_record_aggregate_827fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_824 = e_824;
F->rt_825 = rt_825;
F->r_826 = r_826;
F->it_2180 = NULL;
F->it_2180 = (*(P171)rt_nil_check(F->e_824)).a_;
F->lab_2181 = NULL;
F->vn_2182 = NULL;
F->a_2183 = NULL;
F->f_2184 = NULL;
F->g_2185 = NULL;
F->n_2186 = f_field_count_427(F->up, F->rt_825);
F->done_2188.lo = ((rt_int)1LL); F->done_2188.hi = ((rt_int)200LL);
F->done_2188.lo2 = 1; F->done_2188.hi2 = 1;
F->done_2188.p = rt_alloc(sizeof(int) * (size_t)G_CNT(F->done_2188));
F->active_2189.lo = ((rt_int)1LL); F->active_2189.hi = ((rt_int)200LL);
F->active_2189.lo2 = 1; F->active_2189.hi2 = 1;
F->active_2189.p = rt_alloc(sizeof(int) * (size_t)G_CNT(F->active_2189));
F->dvs_2191.lo = ((rt_int)1LL); F->dvs_2191.hi = ((rt_int)200LL);
F->dvs_2191.lo2 = 1; F->dvs_2191.hi2 = 1;
F->dvs_2191.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->dvs_2191));
F->order_2193.lo = ((rt_int)1LL); F->order_2193.hi = ((rt_int)200LL);
F->order_2193.lo2 = 1; F->order_2193.hi2 = 1;
F->order_2193.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->order_2193));
F->norder_2194 = ((rt_int)0LL);
F->nung_2195 = ((rt_int)0LL);
F->k_2196 = ((rt_int)0LL);
F->d_2197 = ((rt_int)0LL);
F->npos_2198 = ((rt_int)0LL);
F->saved_2199 = NULL;
F->saved_2199 = F->up->code_133;
F->ct_2200 = NULL;
F->tmp_2201 = NULL;
F->parts_2202 = NULL;
F->named_2203 = 0;
F->ok_2204 = 0;
F->holds_2205 = 0;
if (((*(P119)rt_nil_check(F->rt_825)).priv_ && (!f_inside_package_882(F->up, (*(P119)rt_nil_check(F->rt_825)).decl_)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_824)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("an aggregate of private type ", 29), f_kind_name_421(F->up, F->rt_825)), rt_g_lit(" is not allowed here (RM79 7.4)", 31)));
}
if ((F->n_2186 > ((rt_int)200LL))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_824)).line_, rt_g_lit("a record of more than 200 components", 36));
}
F->f_2184 = (*(P119)rt_nil_check(F->rt_825)).fields_;
{ rt_int lo2208 = ((rt_int)1LL), hi2209 = F->n_2186;
for (rt_int it2210 = lo2208; it2210 <= hi2209; it2210++) {
F->i_2207 = it2210;
(*({ A2187 *ix2211 = &(F->done_2188); &ix2211->p[rt_index(F->i_2207, ix2211->lo, ix2211->hi) - ix2211->lo]; })) = 0;
(*({ A2187 *ix2212 = &(F->active_2189); &ix2212->p[rt_index(F->i_2207, ix2212->lo, ix2212->hi) - ix2212->lo]; })) = ((*(P1607)rt_nil_check(F->f_2184)).guard_ == NULL);
if (({ A2187 ix2213 = F->active_2189; ix2213.p[rt_index(F->i_2207, ix2213.lo, ix2213.hi) - ix2213.lo]; })) {
F->norder_2194 = rt_add(F->norder_2194, ((rt_int)1LL));
(*({ A2192 *ix2214 = &(F->order_2193); &ix2214->p[rt_index(F->norder_2194, ix2214->lo, ix2214->hi) - ix2214->lo]; })) = F->i_2207;
}
F->f_2184 = (*(P1607)rt_nil_check(F->f_2184)).next_;
}
}
L_end_2206: ;
F->nung_2195 = F->norder_2194;
{ rt_int lo2217 = ((rt_int)1LL), hi2218 = F->nung_2195;
for (rt_int it2219 = lo2217; it2219 <= hi2218; it2219++) {
F->p_2216 = it2219;
F->f_2184 = f_field_at_814(F->up, F->rt_825, ({ A2192 ix2221 = F->order_2193; ix2221.p[rt_index(F->p_2216, ix2221.lo, ix2221.hi) - ix2221.lo]; }));
if ((*(P1607)rt_nil_check(F->f_2184)).is_discr_) {
F->vn_2182 = f_item_for_819(F->up, F->e_824, F->rt_825, ({ A2192 ix2223 = F->order_2193; ix2223.p[rt_index(F->p_2216, ix2223.lo, ix2223.hi) - ix2223.lo]; }), F->p_2216);
if ((F->vn_2182 == NULL)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_824)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("no value for discriminant ", 26), (*(P137)rt_nil_check((*(P1607)rt_nil_check(F->f_2184)).name_))), rt_g_lit(" (RM79 3.7.3)", 13)));
}
f_static_choice_840(F->up, F->vn_2182, &(*({ A2190 *ix2227 = &(F->dvs_2191); &ix2227->p[rt_index(({ A2192 ix2226 = F->order_2193; ix2226.p[rt_index(F->p_2216, ix2226.lo, ix2226.hi) - ix2226.lo]; }), ix2227->lo, ix2227->hi) - ix2227->lo]; })), &F->ok_2204);
if (((!F->ok_2204) && f_is_enum_lit_678(F->up, F->vn_2182))) {
F->ok_2204 = 1;
(*({ A2190 *ix2229 = &(F->dvs_2191); &ix2229->p[rt_index(({ A2192 ix2228 = F->order_2193; ix2228.p[rt_index(F->p_2216, ix2228.lo, ix2228.hi) - ix2228.lo]; }), ix2229->lo, ix2229->hi) - ix2229->lo]; })) = (*(P114)rt_nil_check(f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->vn_2182)).name_))))).mvalue_;
}
if (((!F->ok_2204) && ((*(P119)rt_nil_check(F->rt_825)).fields_ != NULL))) {
F->g_2185 = NULL;
F->d_2197 = ((rt_int)0LL);
F->a_2183 = NULL;
F->f_2184 = (*(P119)rt_nil_check(F->rt_825)).fields_;
while ((F->f_2184 != NULL)) {
F->g_2185 = (*(P1607)rt_nil_check(F->f_2184)).guard_;
while ((F->g_2185 != NULL)) {
if (eq_rt_gstr((*(P137)rt_nil_check((*(P1731)rt_nil_check(F->g_2185)).disc_)), (*(P137)rt_nil_check((*(P1607)rt_nil_check(f_field_at_814(F->up, F->rt_825, ({ A2192 ix2233 = F->order_2193; ix2233.p[rt_index(F->p_2216, ix2233.lo, ix2233.hi) - ix2233.lo]; })))).name_)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_824)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("the value of discriminant ", 26), (*(P137)rt_nil_check((*(P1731)rt_nil_check(F->g_2185)).disc_))), rt_g_lit(" in an aggregate is static (RM79 3.7.3)", 39)));
}
F->g_2185 = (*(P1731)rt_nil_check(F->g_2185)).next_;
}
L_end_2231: ;
F->f_2184 = (*(P1607)rt_nil_check(F->f_2184)).next_;
}
L_end_2230: ;
}
}
}
}
L_end_2215: ;
F->f_2184 = (*(P119)rt_nil_check(F->rt_825)).fields_;
{ rt_int lo2236 = ((rt_int)1LL), hi2237 = F->n_2186;
for (rt_int it2238 = lo2236; it2238 <= hi2237; it2238++) {
F->i_2235 = it2238;
if (((*(P1607)rt_nil_check(F->f_2184)).guard_ != NULL)) {
F->holds_2205 = 1;
F->g_2185 = (*(P1607)rt_nil_check(F->f_2184)).guard_;
while ((F->g_2185 != NULL)) {
F->d_2197 = f_field_index_830(F->up, F->rt_825, (*(P137)rt_nil_check((*(P1731)rt_nil_check(F->g_2185)).disc_)));
if (((*(P171)rt_nil_check((*(P1731)rt_nil_check(F->g_2185)).arm_)).flag_ == ((rt_int)1LL))) {
F->a_2183 = (*(P171)rt_nil_check((*(P1731)rt_nil_check(F->g_2185)).variant_)).b_;
while ((F->a_2183 != NULL)) {
if ((F->a_2183 != (*(P1731)rt_nil_check(F->g_2185)).arm_)) {
f_arm_holds_823(F->up, F->a_2183, ({ A2190 ix2242 = F->dvs_2191; ix2242.p[rt_index(F->d_2197, ix2242.lo, ix2242.hi) - ix2242.lo]; }), &F->ok_2204);
if (F->ok_2204) {
F->holds_2205 = 0;
}
}
F->a_2183 = (*(P171)rt_nil_check(F->a_2183)).next_;
}
L_end_2240: ;
} else {
f_arm_holds_823(F->up, (*(P1731)rt_nil_check(F->g_2185)).arm_, ({ A2190 ix2244 = F->dvs_2191; ix2244.p[rt_index(F->d_2197, ix2244.lo, ix2244.hi) - ix2244.lo]; }), &F->ok_2204);
if ((!F->ok_2204)) {
F->holds_2205 = 0;
}
}
F->g_2185 = (*(P1731)rt_nil_check(F->g_2185)).next_;
}
L_end_2239: ;
if (F->holds_2205) {
(*({ A2187 *ix2245 = &(F->active_2189); &ix2245->p[rt_index(F->i_2235, ix2245->lo, ix2245->hi) - ix2245->lo]; })) = 1;
F->norder_2194 = rt_add(F->norder_2194, ((rt_int)1LL));
(*({ A2192 *ix2246 = &(F->order_2193); &ix2246->p[rt_index(F->norder_2194, ix2246->lo, ix2246->hi) - ix2246->lo]; })) = F->i_2235;
}
}
F->f_2184 = (*(P1607)rt_nil_check(F->f_2184)).next_;
}
}
L_end_2234: ;
f_ctype_430(F->up, F->rt_825, &F->ct_2200);
f_new_name_208(F->up, rt_g_lit("ag", 2), &F->tmp_2201);
F->up->code_133 = f_new_buffer_227(F->up);
while ((F->it_2180 != NULL)) {
if (((*(P171)rt_nil_check(F->it_2180)).a_ == NULL)) {
if (F->named_2203) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_824)).line_, rt_g_lit("positional associations come before named ones (RM79 3.6.2)", 59));
}
F->npos_2198 = rt_add(F->npos_2198, ((rt_int)1LL));
if ((F->npos_2198 > F->norder_2194)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_824)).line_, cat_rt_gstr(rt_g_lit("too many components in an aggregate of ", 39), f_kind_name_421(F->up, F->rt_825)));
}
F->k_2196 = ({ A2192 ix2248 = F->order_2193; ix2248.p[rt_index(F->npos_2198, ix2248.lo, ix2248.hi) - ix2248.lo]; });
f_agg_component_836(F->up, (*(P137)rt_nil_check(F->tmp_2201)), F->rt_825, F->k_2196, (*(P171)rt_nil_check(F->it_2180)).b_, (*(P171)rt_nil_check(F->e_824)).line_);
(*({ A2187 *ix2249 = &(F->done_2188); &ix2249->p[rt_index(F->k_2196, ix2249->lo, ix2249->hi) - ix2249->lo]; })) = 1;
} else {
F->named_2203 = 1;
F->lab_2181 = (*(P171)rt_nil_check(F->it_2180)).a_;
while ((F->lab_2181 != NULL)) {
if (((*(P171)rt_nil_check(F->lab_2181)).flag_ == ((rt_int)1LL))) {
if (((*(P171)rt_nil_check(F->it_2180)).next_ != NULL)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_824)).line_, rt_g_lit("others comes last in an aggregate (RM79 3.6.2)", 46));
}
{ rt_int lo2253 = ((rt_int)1LL), hi2254 = F->n_2186;
for (rt_int it2255 = lo2253; it2255 <= hi2254; it2255++) {
F->i_2252 = it2255;
if ((({ A2187 ix2256 = F->active_2189; ix2256.p[rt_index(F->i_2252, ix2256.lo, ix2256.hi) - ix2256.lo]; }) && (!({ A2187 ix2257 = F->done_2188; ix2257.p[rt_index(F->i_2252, ix2257.lo, ix2257.hi) - ix2257.lo]; })))) {
f_agg_component_836(F->up, (*(P137)rt_nil_check(F->tmp_2201)), F->rt_825, F->i_2252, (*(P171)rt_nil_check(F->it_2180)).b_, (*(P171)rt_nil_check(F->e_824)).line_);
(*({ A2187 *ix2258 = &(F->done_2188); &ix2258->p[rt_index(F->i_2252, ix2258->lo, ix2258->hi) - ix2258->lo]; })) = 1;
}
}
}
L_end_2251: ;
} else {
if ((((*(P171)rt_nil_check((*(P171)rt_nil_check(F->lab_2181)).a_)).kind_ != ((rt_int)5LL)) || ((*(P171)rt_nil_check(F->lab_2181)).b_ != NULL))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_824)).line_, rt_g_lit("a choice in a record aggregate names a component (RM79 3.6.2)", 61));
}
F->k_2196 = f_field_index_830(F->up, F->rt_825, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->lab_2181)).a_)).name_)));
if ((F->k_2196 == ((rt_int)0LL))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_824)).line_, cat_rt_gstr(cat_rt_gstr(f_kind_name_421(F->up, F->rt_825), rt_g_lit(" has no component ", 18)), (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->lab_2181)).a_)).name_))));
}
if ((!({ A2187 ix2259 = F->active_2189; ix2259.p[rt_index(F->k_2196, ix2259.lo, ix2259.hi) - ix2259.lo]; }))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_824)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("component ", 10), (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->lab_2181)).a_)).name_))), rt_g_lit(" is not in the variant selected (RM79 3.7.3)", 44)));
}
if (({ A2187 ix2260 = F->done_2188; ix2260.p[rt_index(F->k_2196, ix2260.lo, ix2260.hi) - ix2260.lo]; })) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_824)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("component ", 10), (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->lab_2181)).a_)).name_))), rt_g_lit(" is given twice in an aggregate (RM79 3.6.2)", 44)));
}
f_agg_component_836(F->up, (*(P137)rt_nil_check(F->tmp_2201)), F->rt_825, F->k_2196, (*(P171)rt_nil_check(F->it_2180)).b_, (*(P171)rt_nil_check(F->e_824)).line_);
(*({ A2187 *ix2261 = &(F->done_2188); &ix2261->p[rt_index(F->k_2196, ix2261->lo, ix2261->hi) - ix2261->lo]; })) = 1;
}
F->lab_2181 = (*(P171)rt_nil_check(F->lab_2181)).next_;
}
L_end_2250: ;
}
F->it_2180 = (*(P171)rt_nil_check(F->it_2180)).next_;
}
L_end_2247: ;
F->f_2184 = (*(P119)rt_nil_check(F->rt_825)).fields_;
{ rt_int lo2264 = ((rt_int)1LL), hi2265 = F->n_2186;
for (rt_int it2266 = lo2264; it2266 <= hi2265; it2266++) {
F->i_2263 = it2266;
if ((({ A2187 ix2267 = F->active_2189; ix2267.p[rt_index(F->i_2263, ix2267.lo, ix2267.hi) - ix2267.lo]; }) && (!({ A2187 ix2268 = F->done_2188; ix2268.p[rt_index(F->i_2263, ix2268.lo, ix2268.hi) - ix2268.lo]; })))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_824)).line_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("an aggregate gives every component of ", 38), f_kind_name_421(F->up, F->rt_825)), rt_g_lit(": ", 2)), (*(P137)rt_nil_check((*(P1607)rt_nil_check(F->f_2184)).name_))), rt_g_lit(" is missing (RM79 3.6.2)", 24)));
}
F->f_2184 = (*(P1607)rt_nil_check(F->f_2184)).next_;
}
}
L_end_2262: ;
f_captured_811(F->up, F->up->code_133, &F->parts_2202);
F->up->code_133 = F->saved_2199;
(*F->r_826) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P137)rt_nil_check(F->ct_2200))), one_rt_gstr(32)), (*(P137)rt_nil_check(F->tmp_2201))), one_rt_gstr(59)), (*(P137)rt_nil_check(F->parts_2202))), one_rt_gstr(32)), (*(P137)rt_nil_check(F->tmp_2201))), rt_g_lit("; })", 4)));
ret_:

  return;
}

static rt_int f_field_index_830(struct f_greenc_1fr *up_, P119 rt_828, rt_gstr name_829) {
  struct f_field_index_830fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->rt_828 = rt_828;
F->name_829 = cp_rt_gstr(name_829);
F->f_2269 = NULL;
F->f_2269 = (*(P119)rt_nil_check(F->rt_828)).fields_;
F->k_2270 = ((rt_int)1LL);
while ((F->f_2269 != NULL)) {
if (eq_rt_gstr((*(P137)rt_nil_check((*(P1607)rt_nil_check(F->f_2269)).name_)), F->name_829)) {
F->result_ = F->k_2270;
goto ret_;
}
F->k_2270 = rt_add(F->k_2270, ((rt_int)1LL));
F->f_2269 = (*(P1607)rt_nil_check(F->f_2269)).next_;
}
L_end_2271: ;
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_agg_component_836(struct f_greenc_1fr *up_, rt_gstr tmp_831, P119 rt_832, rt_int k_833, P171 v_834, rt_int line_835) {
  struct f_agg_component_836fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->tmp_831 = cp_rt_gstr(tmp_831);
F->rt_832 = rt_832;
F->k_833 = k_833;
F->v_834 = v_834;
F->line_835 = line_835;
F->f_2272 = NULL;
F->f_2272 = (*(P119)rt_nil_check(F->rt_832)).fields_;
F->vt_2273 = NULL;
F->x_2274 = NULL;
F->y_2275 = NULL;
{ rt_int lo2278 = ((rt_int)2LL), hi2279 = F->k_833;
for (rt_int it2280 = lo2278; it2280 <= hi2279; it2280++) {
F->i_2277 = it2280;
F->f_2272 = (*(P1607)rt_nil_check(F->f_2272)).next_;
}
}
L_end_2276: ;
f_gexpr_695(F->up, F->v_834, (*(P1607)rt_nil_check(F->f_2272)).t_, &F->vt_2273, &F->x_2274);
f_check_type_425(F->up, F->vt_2273, (*(P1607)rt_nil_check(F->f_2272)).t_, F->line_835);
if ((((*(P119)rt_nil_check((*(P1607)rt_nil_check(F->f_2272)).t_)).kind_ == ((rt_int)6LL)) && (((*(P1607)rt_nil_check(F->f_2272)).c_ == NULL) || ((*(P175)rt_nil_check((*(P1607)rt_nil_check(F->f_2272)).c_)).lo_ == NULL)))) {
f_copy_code_552(F->up, (*(P1607)rt_nil_check(F->f_2272)).t_, (*(P137)rt_nil_check(F->x_2274)), &F->y_2275);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->tmp_831, one_rt_gstr(46)), f_c_field_222(F->up, (*(P137)rt_nil_check((*(P1607)rt_nil_check(F->f_2272)).name_)))), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->y_2275))), one_rt_gstr(59)));
} else {
if (f_composite_542(F->up, (*(P1607)rt_nil_check(F->f_2272)).t_)) {
f_init_storage_540(F->up, cat_rt_gstr(cat_rt_gstr(F->tmp_831, one_rt_gstr(46)), f_c_field_222(F->up, (*(P137)rt_nil_check((*(P1607)rt_nil_check(F->f_2272)).name_)))), (*(P1607)rt_nil_check(F->f_2272)).t_, (*(P1607)rt_nil_check(F->f_2272)).c_);
}
f_assign_code_548(F->up, cat_rt_gstr(cat_rt_gstr(F->tmp_831, one_rt_gstr(46)), f_c_field_222(F->up, (*(P137)rt_nil_check((*(P1607)rt_nil_check(F->f_2272)).name_)))), (*(P1607)rt_nil_check(F->f_2272)).t_, (*(P137)rt_nil_check(F->x_2274)), (*(P1607)rt_nil_check(F->f_2272)).c_, &F->y_2275);
f_emit_232(F->up, (*(P137)rt_nil_check(F->y_2275)));
}
ret_:

  return;
}

static void f_static_choice_840(struct f_greenc_1fr *up_, P171 x_837, rt_int *v_838, int *ok_839) {
  struct f_static_choice_840fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_837 = x_837;
F->v_838 = v_838;
F->ok_839 = ok_839;
if (f_is_char_lit_676(F->up, F->x_837)) {
(*F->ok_839) = 1;
(*F->v_838) = rt_sub(((rt_int)(({ rt_gstr ix2281 = (*(P137)rt_nil_check((*(P171)rt_nil_check(F->x_837)).name_)); ix2281.p[rt_index(((rt_int)1LL), ix2281.lo, ix2281.hi) - ix2281.lo]; })) + 1), ((rt_int)1LL));
goto ret_;
}
f_manifest_442(F->up, F->x_837, &(*F->v_838), &(*F->ok_839));
ret_:

  return;
}

static void f_array_aggregate_845(struct f_greenc_1fr *up_, P171 e_841, P119 arrt_842, P137 bounds_843, P137 *r_844) {
  struct f_array_aggregate_845fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_841 = e_841;
F->arrt_842 = arrt_842;
F->bounds_843 = bounds_843;
F->r_844 = r_844;
F->it_2282 = NULL;
F->it_2282 = (*(P171)rt_nil_check(F->e_841)).a_;
F->lab_2283 = NULL;
F->others_it_2284 = NULL;
F->np_2285 = ((rt_int)0LL);
F->nnamed_2286 = ((rt_int)0LL);
F->clo_2287 = ((rt_int)0LL);
F->chi_2288 = ((rt_int)0LL);
F->v1_2289 = ((rt_int)0LL);
F->v2_2290 = ((rt_int)0LL);
F->all_static_2291 = 1;
F->ok_2292 = 1;
F->ok2_2293 = 1;
F->first_choice_2294 = 1;
F->vt_2295 = NULL;
F->ct_2296 = NULL;
F->et_2297 = NULL;
F->tmp_2298 = NULL;
F->lo_2299 = NULL;
F->hi_2300 = NULL;
F->v_2301 = NULL;
F->x_2302 = NULL;
F->parts_2303 = NULL;
F->fill_2304 = NULL;
F->rowb_2305 = NULL;
F->key_2306 = NULL;
F->khi_2307 = NULL;
F->saved_2308 = NULL;
F->saved_2308 = F->up->code_133;
f_ctype_430(F->up, F->arrt_842, &F->ct_2296);
f_elem_ctype_494(F->up, (*(P119)rt_nil_check(F->arrt_842)).elem_, &F->et_2297);
f_new_name_208(F->up, rt_g_lit("ag", 2), &F->tmp_2298);
while ((F->it_2282 != NULL)) {
if (((*(P171)rt_nil_check(F->it_2282)).a_ == NULL)) {
if (((F->nnamed_2286 > ((rt_int)0LL)) || (F->others_it_2284 != NULL))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_841)).line_, rt_g_lit("positional associations come before named ones (RM79 3.6.2)", 59));
}
F->np_2285 = rt_add(F->np_2285, ((rt_int)1LL));
} else if (((*(P171)rt_nil_check((*(P171)rt_nil_check(F->it_2282)).a_)).flag_ == ((rt_int)1LL))) {
if ((((*(P171)rt_nil_check(F->it_2282)).next_ != NULL) || ((*(P171)rt_nil_check((*(P171)rt_nil_check(F->it_2282)).a_)).next_ != NULL))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_841)).line_, rt_g_lit("others comes last in an aggregate (RM79 3.6.2)", 46));
}
F->others_it_2284 = F->it_2282;
} else {
F->nnamed_2286 = rt_add(F->nnamed_2286, ((rt_int)1LL));
F->lab_2283 = (*(P171)rt_nil_check(F->it_2282)).a_;
while ((F->lab_2283 != NULL)) {
f_static_choice_840(F->up, (*(P171)rt_nil_check(F->lab_2283)).a_, &F->v1_2289, &F->ok_2292);
F->v2_2290 = F->v1_2289;
if (((*(P171)rt_nil_check(F->lab_2283)).b_ != NULL)) {
f_static_choice_840(F->up, (*(P171)rt_nil_check(F->lab_2283)).b_, &F->v2_2290, &F->ok2_2293);
F->ok_2292 = (F->ok_2292 && F->ok2_2293);
}
if ((!F->ok_2292)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_841)).line_, rt_g_lit("a choice in an array aggregate is static (RM79 3.6.2)", 53));
}
if ((F->first_choice_2294 || (F->v1_2289 < F->clo_2287))) {
F->clo_2287 = F->v1_2289;
}
if ((F->first_choice_2294 || (F->v2_2290 > F->chi_2288))) {
F->chi_2288 = F->v2_2290;
}
F->first_choice_2294 = 0;
F->lab_2283 = (*(P171)rt_nil_check(F->lab_2283)).next_;
}
L_end_2310: ;
}
F->it_2282 = (*(P171)rt_nil_check(F->it_2282)).next_;
}
L_end_2309: ;
if (((F->np_2285 > ((rt_int)0LL)) && (F->nnamed_2286 > ((rt_int)0LL)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_841)).line_, rt_g_lit("an array aggregate is positional or named, with others last (RM79 3.6.2)", 72));
}
if ((F->nnamed_2286 > ((rt_int)0LL))) {
f_check_choices_853(F->up, F->e_841, F->arrt_842, (F->others_it_2284 != NULL));
}
if (((F->others_it_2284 == NULL) && (F->np_2285 > ((rt_int)0LL)))) {
f_first_index_497(F->up, F->arrt_842, &F->lo_2299);
F->hi_2300 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check(F->lo_2299))), rt_g_lit(" + ", 3)), rt_g_s2g(rt_str_of_int(rt_sub(F->np_2285, ((rt_int)1LL))))), one_rt_gstr(41)));
} else if (((F->others_it_2284 == NULL) && (F->nnamed_2286 > ((rt_int)0LL)))) {
F->lo_2299 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(F->clo_2287))), rt_g_lit("LL)", 3)));
F->hi_2300 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(F->chi_2288))), rt_g_lit("LL)", 3)));
} else if ((((*(P119)rt_nil_check(F->arrt_842)).tcons_ != NULL) && ((*(P175)rt_nil_check((*(P119)rt_nil_check(F->arrt_842)).tcons_)).hi_ != NULL))) {
F->lo_2299 = (*(P175)rt_nil_check((*(P119)rt_nil_check(F->arrt_842)).tcons_)).lo_;
F->hi_2300 = (*(P175)rt_nil_check((*(P119)rt_nil_check(F->arrt_842)).tcons_)).hi_;
} else if ((F->bounds_843 != NULL)) {
F->lo_2299 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check(F->bounds_843))), rt_g_lit(").lo", 4)));
F->hi_2300 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check(F->bounds_843))), rt_g_lit(").hi", 4)));
} else {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_841)).line_, rt_g_lit("an aggregate with others needs bounds from its context (RM79 3.6.2)", 67));
}
if ((((*(P119)rt_nil_check(F->arrt_842)).dims_ > ((rt_int)1LL)) && (F->bounds_843 != NULL))) {
F->rowb_2305 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((struct { rt_int lo, hi; }){ (", 31), (*(P137)rt_nil_check(F->bounds_843))), rt_g_lit(").lo2, (", 8)), (*(P137)rt_nil_check(F->bounds_843))), rt_g_lit(").hi2 })", 8)));
}
F->up->code_133 = f_new_buffer_227(F->up);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->tmp_2298)), rt_g_lit(".lo = ", 6)), (*(P137)rt_nil_check(F->lo_2299))), rt_g_lit("; ", 2)), (*(P137)rt_nil_check(F->tmp_2298))), rt_g_lit(".hi = ", 6)), (*(P137)rt_nil_check(F->hi_2300))), rt_g_lit("; ", 2)), (*(P137)rt_nil_check(F->tmp_2298))), rt_g_lit(".lo2 = ", 7)), (*(P137)rt_nil_check(F->tmp_2298))), rt_g_lit(".hi2 = 1;", 9)));
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->tmp_2298)), rt_g_lit(".p = rt_alloc(sizeof(", 21)), (*(P137)rt_nil_check(F->et_2297))), rt_g_lit(") * (size_t)(G_CNT(", 19)), (*(P137)rt_nil_check(F->tmp_2298))), rt_g_lit(") + 1));", 8)));
if (((F->np_2285 > ((rt_int)0LL)) && (F->others_it_2284 == NULL))) {
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (G_CNT(", 10), (*(P137)rt_nil_check(F->tmp_2298))), rt_g_lit(") != ", 5)), rt_g_s2g(rt_str_of_int(F->np_2285))), rt_g_lit(") rt_raise(RT_X_SUBSCRIPT);", 27)));
} else if ((F->np_2285 > ((rt_int)0LL))) {
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (G_CNT(", 10), (*(P137)rt_nil_check(F->tmp_2298))), rt_g_lit(") < ", 4)), rt_g_s2g(rt_str_of_int(F->np_2285))), rt_g_lit(") rt_raise(RT_X_SUBSCRIPT);", 27)));
}
if ((F->others_it_2284 != NULL)) {
F->up->agg_bounds_178 = F->rowb_2305;
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->others_it_2284)).b_, (*(P119)rt_nil_check(F->arrt_842)).elem_, &F->vt_2295, &F->v_2301);
F->up->agg_bounds_178 = NULL;
f_check_type_425(F->up, F->vt_2295, (*(P119)rt_nil_check(F->arrt_842)).elem_, (*(P171)rt_nil_check(F->e_841)).line_);
f_ctype_430(F->up, (*(P119)rt_nil_check(F->arrt_842)).elem_, &F->x_2302);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P137)rt_nil_check(F->x_2302))), rt_g_lit(" o_ = ", 6)), (*(P137)rt_nil_check(F->v_2301))), rt_g_lit("; for (rt_int k_ = 0; k_ < G_CNT(", 33)), (*(P137)rt_nil_check(F->tmp_2298))), rt_g_lit("); k_++) {", 10)));
f_copy_code_552(F->up, (*(P119)rt_nil_check(F->arrt_842)).elem_, rt_g_lit("o_", 2), &F->x_2302);
f_element_store_849(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->tmp_2298)), rt_g_lit(".p[k_]", 6)), F->arrt_842, (*(P137)rt_nil_check(F->x_2302)));
f_emit_232(F->up, rt_g_lit("} }", 3));
}
F->it_2282 = (*(P171)rt_nil_check(F->e_841)).a_;
F->np_2285 = ((rt_int)0LL);
while (((F->it_2282 != NULL) && (F->it_2282 != F->others_it_2284))) {
F->up->agg_bounds_178 = F->rowb_2305;
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->it_2282)).b_, (*(P119)rt_nil_check(F->arrt_842)).elem_, &F->vt_2295, &F->v_2301);
F->up->agg_bounds_178 = NULL;
f_check_type_425(F->up, F->vt_2295, (*(P119)rt_nil_check(F->arrt_842)).elem_, (*(P171)rt_nil_check(F->e_841)).line_);
f_copy_code_552(F->up, (*(P119)rt_nil_check(F->arrt_842)).elem_, (*(P137)rt_nil_check(F->v_2301)), &F->x_2302);
if (((*(P171)rt_nil_check(F->it_2282)).a_ == NULL)) {
f_element_store_849(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->tmp_2298)), rt_g_lit(".p[", 3)), rt_g_s2g(rt_str_of_int(F->np_2285))), one_rt_gstr(93)), F->arrt_842, (*(P137)rt_nil_check(F->x_2302)));
F->np_2285 = rt_add(F->np_2285, ((rt_int)1LL));
} else {
f_new_name_208(F->up, rt_g_lit("av", 2), &F->v_2301);
f_ctype_430(F->up, (*(P119)rt_nil_check(F->arrt_842)).elem_, &F->parts_2303);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P137)rt_nil_check(F->parts_2303))), one_rt_gstr(32)), (*(P137)rt_nil_check(F->v_2301))), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->x_2302))), one_rt_gstr(59)));
F->lab_2283 = (*(P171)rt_nil_check(F->it_2282)).a_;
while ((F->lab_2283 != NULL)) {
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->lab_2283)).a_, (*(P119)rt_nil_check(F->arrt_842)).idx_, &F->vt_2295, &F->key_2306);
f_check_type_425(F->up, F->vt_2295, (*(P119)rt_nil_check(F->arrt_842)).idx_, (*(P171)rt_nil_check(F->e_841)).line_);
F->khi_2307 = F->key_2306;
if (((*(P171)rt_nil_check(F->lab_2283)).b_ != NULL)) {
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->lab_2283)).b_, (*(P119)rt_nil_check(F->arrt_842)).idx_, &F->vt_2295, &F->khi_2307);
f_check_type_425(F->up, F->vt_2295, (*(P119)rt_nil_check(F->arrt_842)).idx_, (*(P171)rt_nil_check(F->e_841)).line_);
}
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = ", 17), (*(P137)rt_nil_check(F->key_2306))), rt_g_lit("; k_ <= ", 8)), (*(P137)rt_nil_check(F->khi_2307))), rt_g_lit("; k_++) {", 9)));
f_copy_code_552(F->up, (*(P119)rt_nil_check(F->arrt_842)).elem_, (*(P137)rt_nil_check(F->v_2301)), &F->x_2302);
f_element_store_849(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->tmp_2298)), rt_g_lit(".p[rt_index(k_, ", 16)), (*(P137)rt_nil_check(F->tmp_2298))), rt_g_lit(".lo, ", 5)), (*(P137)rt_nil_check(F->tmp_2298))), rt_g_lit(".hi) - ", 7)), (*(P137)rt_nil_check(F->tmp_2298))), rt_g_lit(".lo]", 4)), F->arrt_842, (*(P137)rt_nil_check(F->x_2302)));
f_emit_232(F->up, rt_g_lit("}", 1));
F->lab_2283 = (*(P171)rt_nil_check(F->lab_2283)).next_;
}
L_end_2312: ;
f_emit_232(F->up, rt_g_lit("}", 1));
}
F->it_2282 = (*(P171)rt_nil_check(F->it_2282)).next_;
}
L_end_2311: ;
if (((*(P119)rt_nil_check(F->arrt_842)).dims_ > ((rt_int)1LL))) {
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (G_CNT(", 10), (*(P137)rt_nil_check(F->tmp_2298))), rt_g_lit(") > 0) { ", 9)), (*(P137)rt_nil_check(F->tmp_2298))), rt_g_lit(".lo2 = ", 7)), (*(P137)rt_nil_check(F->tmp_2298))), rt_g_lit(".p[0].lo; ", 10)), (*(P137)rt_nil_check(F->tmp_2298))), rt_g_lit(".hi2 = ", 7)), (*(P137)rt_nil_check(F->tmp_2298))), rt_g_lit(".p[0].hi; }", 11)));
}
f_captured_811(F->up, F->up->code_133, &F->parts_2303);
F->up->code_133 = F->saved_2308;
(*F->r_844) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P137)rt_nil_check(F->ct_2296))), one_rt_gstr(32)), (*(P137)rt_nil_check(F->tmp_2298))), one_rt_gstr(59)), (*(P137)rt_nil_check(F->parts_2303))), one_rt_gstr(32)), (*(P137)rt_nil_check(F->tmp_2298))), rt_g_lit("; })", 4)));
ret_:

  return;
}

static void f_element_store_849(struct f_greenc_1fr *up_, rt_gstr lv_846, P119 arrt_847, rt_gstr v_848) {
  struct f_element_store_849fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lv_846 = cp_rt_gstr(lv_846);
F->arrt_847 = arrt_847;
F->v_848 = cp_rt_gstr(v_848);
F->x_2313 = NULL;
if (((((*(P119)rt_nil_check(F->arrt_847)).elemcons_ != NULL) && ((*(P175)rt_nil_check((*(P119)rt_nil_check(F->arrt_847)).elemcons_)).lo_ != NULL)) && (!f_composite_542(F->up, (*(P119)rt_nil_check(F->arrt_847)).elem_)))) {
f_assign_code_548(F->up, F->lv_846, (*(P119)rt_nil_check(F->arrt_847)).elem_, F->v_848, (*(P119)rt_nil_check(F->arrt_847)).elemcons_, &F->x_2313);
f_emit_232(F->up, (*(P137)rt_nil_check(F->x_2313)));
} else {
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lv_846, rt_g_lit(" = ", 3)), F->v_848), one_rt_gstr(59)));
}
ret_:

  return;
}

static void f_check_choices_853(struct f_greenc_1fr *up_, P171 e_850, P119 arrt_851, int has_others_852) {
  struct f_check_choices_853fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_850 = e_850;
F->arrt_851 = arrt_851;
F->has_others_852 = has_others_852;
F->a_2314 = NULL;
F->b_2315 = NULL;
F->lab_2316 = NULL;
F->lab2_2317 = NULL;
F->lo1_2318 = ((rt_int)0LL);
F->hi1_2319 = ((rt_int)0LL);
F->lo2_2320 = ((rt_int)0LL);
F->hi2_2321 = ((rt_int)0LL);
F->count_2322 = ((rt_int)0LL);
F->a_2314 = (*(P171)rt_nil_check(F->e_850)).a_;
while ((F->a_2314 != NULL)) {
if ((((*(P171)rt_nil_check(F->a_2314)).a_ != NULL) && ((*(P171)rt_nil_check((*(P171)rt_nil_check(F->a_2314)).a_)).flag_ != ((rt_int)1LL)))) {
F->lab_2316 = (*(P171)rt_nil_check(F->a_2314)).a_;
while ((F->lab_2316 != NULL)) {
f_static_choice_840(F->up, (*(P171)rt_nil_check(F->lab_2316)).a_, &F->lo1_2318, &F->ok_2323);
F->hi1_2319 = F->lo1_2318;
if (((*(P171)rt_nil_check(F->lab_2316)).b_ != NULL)) {
f_static_choice_840(F->up, (*(P171)rt_nil_check(F->lab_2316)).b_, &F->hi1_2319, &F->ok_2323);
}
if ((F->hi1_2319 >= F->lo1_2318)) {
F->count_2322 = rt_add(F->count_2322, rt_add(rt_sub(F->hi1_2319, F->lo1_2318), ((rt_int)1LL)));
}
F->b_2315 = F->a_2314;
F->lab2_2317 = (*(P171)rt_nil_check(F->lab_2316)).next_;
while ((F->b_2315 != NULL)) {
if ((((*(P171)rt_nil_check(F->b_2315)).a_ != NULL) && ((*(P171)rt_nil_check((*(P171)rt_nil_check(F->b_2315)).a_)).flag_ != ((rt_int)1LL)))) {
if ((F->b_2315 != F->a_2314)) {
F->lab2_2317 = (*(P171)rt_nil_check(F->b_2315)).a_;
}
while ((F->lab2_2317 != NULL)) {
f_static_choice_840(F->up, (*(P171)rt_nil_check(F->lab2_2317)).a_, &F->lo2_2320, &F->ok_2323);
F->hi2_2321 = F->lo2_2320;
if (((*(P171)rt_nil_check(F->lab2_2317)).b_ != NULL)) {
f_static_choice_840(F->up, (*(P171)rt_nil_check(F->lab2_2317)).b_, &F->hi2_2321, &F->ok_2323);
}
if (((((F->lo1_2318 <= F->hi1_2319) && (F->lo2_2320 <= F->hi2_2321)) && (F->lo1_2318 <= F->hi2_2321)) && (F->lo2_2320 <= F->hi1_2319))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_850)).line_, rt_g_lit("an index is given twice in an aggregate (RM79 3.6.2)", 52));
}
F->lab2_2317 = (*(P171)rt_nil_check(F->lab2_2317)).next_;
}
L_end_2327: ;
}
F->b_2315 = (*(P171)rt_nil_check(F->b_2315)).next_;
F->lab2_2317 = NULL;
}
L_end_2326: ;
F->lab_2316 = (*(P171)rt_nil_check(F->lab_2316)).next_;
}
L_end_2325: ;
}
F->a_2314 = (*(P171)rt_nil_check(F->a_2314)).next_;
}
L_end_2324: ;
if ((((!F->has_others_852) && ((*(P119)rt_nil_check(F->arrt_851)).tcons_ != NULL)) && (*(P175)rt_nil_check((*(P119)rt_nil_check(F->arrt_851)).tcons_)).hasm_)) {
if ((F->count_2322 != rt_add(rt_sub((*(P175)rt_nil_check((*(P119)rt_nil_check(F->arrt_851)).tcons_)).mhi_, (*(P175)rt_nil_check((*(P119)rt_nil_check(F->arrt_851)).tcons_)).mlo_), ((rt_int)1LL)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_850)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("the choices of an aggregate cover every index of ", 49), f_kind_name_421(F->up, F->arrt_851)), rt_g_lit(" once, or others is given (RM79 3.6.2)", 38)));
}
}
ret_:

  return;
}

static P171 f_actual_for_857(struct f_greenc_1fr *up_, P171 args_854, P1592 pm_855, P1592 first_856) {
  struct f_actual_for_857fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->args_854 = args_854;
F->pm_855 = pm_855;
F->first_856 = first_856;
F->a_2328 = NULL;
F->a_2328 = F->args_854;
F->p_2329 = NULL;
F->p_2329 = F->first_856;
while (((F->a_2328 != NULL) && ((*(P171)rt_nil_check(F->a_2328)).formal_ == NULL))) {
if ((F->p_2329 == F->pm_855)) {
F->result_ = F->a_2328;
goto ret_;
}
F->p_2329 = (*(P1592)rt_nil_check(F->p_2329)).next_;
F->a_2328 = (*(P171)rt_nil_check(F->a_2328)).next_;
}
L_end_2330: ;
while ((F->a_2328 != NULL)) {
if ((((*(P171)rt_nil_check(F->a_2328)).formal_ != NULL) && eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->a_2328)).formal_)), (*(P137)rt_nil_check((*(P1592)rt_nil_check(F->pm_855)).name_))))) {
F->result_ = F->a_2328;
goto ret_;
}
F->a_2328 = (*(P171)rt_nil_check(F->a_2328)).next_;
}
L_end_2331: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_gcall_862(struct f_greenc_1fr *up_, P171 e_858, int is_stmt_859, P119 *t_860, P137 *r_861) {
  struct f_gcall_862fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_858 = e_858;
F->is_stmt_859 = is_stmt_859;
F->t_860 = t_860;
F->r_861 = r_861;
F->fn_2332 = NULL;
F->fn_2332 = (*(P171)rt_nil_check(F->e_858)).a_;
F->nm_2333 = NULL;
F->y_2334 = NULL;
F->args_2335 = NULL;
F->lv_2336 = NULL;
F->v_2337 = NULL;
F->ct_2338 = NULL;
F->x_2339 = NULL;
F->a_2340 = NULL;
F->pm_2341 = NULL;
F->lt_2342 = NULL;
F->vt_2343 = NULL;
F->lc_2344 = NULL;
if (((((*(P171)rt_nil_check(F->fn_2332)).kind_ == ((rt_int)9LL)) && ((*(P171)rt_nil_check((*(P171)rt_nil_check(F->fn_2332)).a_)).kind_ == ((rt_int)5LL))) && f_is_type_name_674(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->fn_2332)).a_)).name_))))) {
if ((!f_type_attribute_672(F->up, (*(P114)rt_nil_check(f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->fn_2332)).a_)).name_))))).t_, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->fn_2332)).name_))))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_858)).line_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->fn_2332)).name_)), rt_g_lit(" is not a subprogram attribute of ", 34)), (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->fn_2332)).a_)).name_))), rt_g_lit(" (RM79 3.3)", 11)));
}
F->nm_2333 = f_nn_276(F->up, ((rt_int)5LL), (*(P171)rt_nil_check(F->fn_2332)).line_);
(*(P171)rt_nil_check(F->nm_2333)).name_ = (*(P171)rt_nil_check(F->fn_2332)).name_;
F->fn_2332 = F->nm_2333;
} else if ((((*(P171)rt_nil_check(F->fn_2332)).kind_ == ((rt_int)9LL)) && f_is_package_876(F->up, (*(P171)rt_nil_check(F->fn_2332)).a_))) {
F->nm_2333 = f_nn_276(F->up, ((rt_int)5LL), (*(P171)rt_nil_check(F->fn_2332)).line_);
(*(P171)rt_nil_check(F->nm_2333)).name_ = (*(P171)rt_nil_check(F->fn_2332)).name_;
(*(P171)rt_nil_check(F->nm_2333)).tag_ = (*(P171)rt_nil_check((*(P171)rt_nil_check(F->fn_2332)).a_)).name_;
F->fn_2332 = F->nm_2333;
} else if ((((((*(P171)rt_nil_check(F->fn_2332)).kind_ == ((rt_int)9LL)) && ((*(P171)rt_nil_check((*(P171)rt_nil_check(F->fn_2332)).a_)).kind_ == ((rt_int)8LL))) && ((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->fn_2332)).a_)).a_)).kind_ == ((rt_int)5LL))) && f_is_task_name_943(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->fn_2332)).a_)).a_)).name_))))) {
F->y_2334 = f_member_of_880(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->fn_2332)).a_)).a_)).name_)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->fn_2332)).name_)), (*(P171)rt_nil_check(F->fn_2332)).line_);
if (((F->y_2334 != NULL) && (((*(P114)rt_nil_check(F->y_2334)).kind_ == ((rt_int)3LL)) || ((*(P114)rt_nil_check(F->y_2334)).kind_ == ((rt_int)4LL))))) {
f_resolve_member_overload_919(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->fn_2332)).a_)).a_)).name_)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->fn_2332)).name_)), (*(P171)rt_nil_check(F->e_858)).b_, F->is_stmt_859, F->up->call_want_193, (*(P171)rt_nil_check(F->e_858)).line_, &F->y_2334);
F->up->call_task_ix_184 = (*(P171)rt_nil_check((*(P171)rt_nil_check(F->fn_2332)).a_)).b_;
if ((F->is_stmt_859 && ((*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_2334)).result_)).kind_ != ((rt_int)9LL)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_858)).line_, cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->fn_2332)).name_)), rt_g_lit(" returns a value; it is not a procedure call", 44)));
}
f_gcall_with_867(F->up, F->e_858, F->y_2334, &(*F->t_860), &(*F->r_861));
goto ret_;
}
}
if (((*(P171)rt_nil_check(F->fn_2332)).kind_ != ((rt_int)5LL))) {
f_other_call_1000(F->up, F->e_858, F->is_stmt_859, &(*F->t_860), &(*F->r_861));
goto ret_;
}
F->y_2334 = f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->fn_2332)).name_)));
if (((*(P171)rt_nil_check(F->fn_2332)).tag_ != NULL)) {
F->y_2334 = f_member_of_880(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->fn_2332)).tag_)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->fn_2332)).name_)), (*(P171)rt_nil_check(F->fn_2332)).line_);
}
if ((F->y_2334 == NULL)) {
f_builtin_874(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->fn_2332)).name_)), (*(P171)rt_nil_check(F->e_858)).b_, (*(P171)rt_nil_check(F->e_858)).line_, F->is_stmt_859, &(*F->t_860), &(*F->r_861));
goto ret_;
}
if (((((*(P114)rt_nil_check(F->y_2334)).kind_ == ((rt_int)3LL)) || ((*(P114)rt_nil_check(F->y_2334)).kind_ == ((rt_int)4LL))) && ((*(P171)rt_nil_check(F->fn_2332)).tag_ == NULL))) {
f_resolve_overload_911(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->fn_2332)).name_)), (*(P171)rt_nil_check(F->e_858)).b_, F->is_stmt_859, F->up->call_want_193, (*(P171)rt_nil_check(F->e_858)).line_, &F->y_2334);
if ((F->y_2334 == NULL)) {
f_builtin_874(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->fn_2332)).name_)), (*(P171)rt_nil_check(F->e_858)).b_, (*(P171)rt_nil_check(F->e_858)).line_, F->is_stmt_859, &(*F->t_860), &(*F->r_861));
goto ret_;
}
} else if ((((*(P114)rt_nil_check(F->y_2334)).kind_ == ((rt_int)3LL)) || ((*(P114)rt_nil_check(F->y_2334)).kind_ == ((rt_int)4LL)))) {
f_resolve_member_overload_919(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->fn_2332)).tag_)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->fn_2332)).name_)), (*(P171)rt_nil_check(F->e_858)).b_, F->is_stmt_859, F->up->call_want_193, (*(P171)rt_nil_check(F->e_858)).line_, &F->y_2334);
}
if (((*(P114)rt_nil_check(F->y_2334)).kind_ == ((rt_int)10LL))) {
f_other_call_1000(F->up, F->e_858, F->is_stmt_859, &(*F->t_860), &(*F->r_861));
goto ret_;
}
if ((((*(P114)rt_nil_check(F->y_2334)).kind_ != ((rt_int)3LL)) && ((*(P114)rt_nil_check(F->y_2334)).kind_ != ((rt_int)4LL)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_858)).line_, cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->fn_2332)).name_)), rt_g_lit(" cannot be called", 17)));
}
if ((F->is_stmt_859 && ((*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_2334)).result_)).kind_ != ((rt_int)9LL)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_858)).line_, cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->fn_2332)).name_)), rt_g_lit(" returns a value; it is not a procedure call", 44)));
}
if (((!F->is_stmt_859) && ((*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_2334)).result_)).kind_ == ((rt_int)9LL)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_858)).line_, cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->fn_2332)).name_)), rt_g_lit(" is a procedure, not a function", 31)));
}
f_gcall_with_867(F->up, F->e_858, F->y_2334, &(*F->t_860), &(*F->r_861));
ret_:

  return;
}

static void f_gcall_with_867(struct f_greenc_1fr *up_, P171 e_863, P114 y_864, P119 *t_865, P137 *r_866) {
  struct f_gcall_with_867fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_863 = e_863;
F->y_864 = y_864;
F->t_865 = t_865;
F->r_866 = r_866;
F->args_2346 = NULL;
F->lv_2347 = NULL;
F->v_2348 = NULL;
F->x1_2349 = NULL;
F->x2_2350 = NULL;
F->a_2351 = NULL;
F->pm_2352 = NULL;
F->lt_2353 = NULL;
F->vt_2354 = NULL;
F->lc_2355 = NULL;
f_check_call_rules_1055(F->up, F->e_863, F->y_864);
F->args_2346 = f_mk_205(F->up, rt_g_lit("", 0));
if (((((((*(P114)rt_nil_check(F->y_864)).kind_ == ((rt_int)3LL)) || ((*(P114)rt_nil_check(F->y_864)).kind_ == ((rt_int)4LL))) && ((*(P114)rt_nil_check(F->y_864)).access_path_ != NULL)) && ((*(P114)rt_nil_check(F->y_864)).members_ != NULL)) && ((*(P114)rt_nil_check((*(P114)rt_nil_check(F->y_864)).members_)).c_ != NULL))) {
if ((F->up->call_task_ix_184 == NULL)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_863)).line_, cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_864)).name_)), rt_g_lit(" needs the member of the family: F(I).", 38)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_864)).name_))));
}
f_gexpr_695(F->up, F->up->call_task_ix_184, (*(P114)rt_nil_check((*(P114)rt_nil_check(F->y_864)).members_)).t_, &F->vt_2354, &F->v_2348);
F->up->call_task_ix_184 = NULL;
f_path_at_941(F->up, (*(P114)rt_nil_check((*(P114)rt_nil_check(F->y_864)).members_)).level_, (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_864)).access_path_)), &F->lv_2347);
f_path_at_941(F->up, (*(P114)rt_nil_check((*(P114)rt_nil_check(F->y_864)).members_)).level_, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check((*(P114)rt_nil_check(F->y_864)).members_)).cname_)), rt_g_lit("lo", 2)), &F->x1_2349);
f_path_at_941(F->up, (*(P114)rt_nil_check((*(P114)rt_nil_check(F->y_864)).members_)).level_, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check((*(P114)rt_nil_check(F->y_864)).members_)).cname_)), rt_g_lit("hi", 2)), &F->x2_2350);
F->lv_2347 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->lv_2347)), rt_g_lit("[rt_index(", 10)), (*(P137)rt_nil_check(F->v_2348))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->x1_2349))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->x2_2350))), rt_g_lit(") - ", 4)), (*(P137)rt_nil_check(F->x1_2349))), one_rt_gstr(93)));
F->args_2346 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check(F->lv_2347))), rt_g_lit(" \? ", 3)), (*(P137)rt_nil_check(F->lv_2347))), rt_g_lit(" : (rt_raise(RT_X_TASKING), (void *)0))", 39)));
} else if (((((*(P114)rt_nil_check(F->y_864)).kind_ == ((rt_int)3LL)) || ((*(P114)rt_nil_check(F->y_864)).kind_ == ((rt_int)4LL))) && ((*(P114)rt_nil_check(F->y_864)).access_path_ != NULL))) {
f_path_at_941(F->up, (*(P114)rt_nil_check((*(P114)rt_nil_check(F->y_864)).members_)).level_, (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_864)).access_path_)), &F->lv_2347);
F->args_2346 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check(F->lv_2347))), rt_g_lit(" \? ", 3)), (*(P137)rt_nil_check(F->lv_2347))), rt_g_lit(" : (rt_raise(RT_X_TASKING), (void *)0))", 39)));
} else if (((*(P114)rt_nil_check(F->y_864)).level_ > ((rt_int)0LL))) {
f_link_to_635(F->up, (*(P114)rt_nil_check(F->y_864)).level_, &F->args_2346);
}
F->pm_2352 = (*(P114)rt_nil_check(F->y_864)).params_;
while ((F->pm_2352 != NULL)) {
F->a_2351 = f_actual_for_857(F->up, (*(P171)rt_nil_check(F->e_863)).b_, F->pm_2352, (*(P114)rt_nil_check(F->y_864)).params_);
if ((({ rt_gstr at2358 = (*(P137)rt_nil_check(F->args_2346)); at2358.hi >= at2358.lo ? at2358.hi - at2358.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->args_2346 = f_mk_205(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->args_2346)), rt_g_lit(", ", 2)));
}
if ((F->a_2351 == NULL)) {
if ((((*(P1592)rt_nil_check(F->pm_2352)).dflt_ == NULL) || ((*(P1592)rt_nil_check(F->pm_2352)).mode_ != ((rt_int)1LL)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_863)).line_, cat_rt_gstr(rt_g_lit("no actual parameter for ", 24), (*(P137)rt_nil_check((*(P1592)rt_nil_check(F->pm_2352)).name_))));
}
f_gexpr_695(F->up, (*(P1592)rt_nil_check(F->pm_2352)).dflt_, (*(P1592)rt_nil_check(F->pm_2352)).t_, &F->vt_2354, &F->v_2348);
F->args_2346 = f_mk_205(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->args_2346)), (*(P137)rt_nil_check(F->v_2348))));
} else {
if (((((*(P171)rt_nil_check(F->a_2351)).flag_ != ((rt_int)0LL)) && ((*(P171)rt_nil_check(F->a_2351)).flag_ != ((rt_int)4LL))) && ((*(P171)rt_nil_check(F->a_2351)).flag_ != (*(P1592)rt_nil_check(F->pm_2352)).mode_))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_863)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("the association of ", 19), (*(P137)rt_nil_check((*(P1592)rt_nil_check(F->pm_2352)).name_))), rt_g_lit(" does not match its mode", 24)));
}
if (((*(P1592)rt_nil_check(F->pm_2352)).mode_ == ((rt_int)1LL))) {
f_gexpr_695(F->up, F->a_2351, (*(P1592)rt_nil_check(F->pm_2352)).t_, &F->vt_2354, &F->v_2348);
f_check_type_425(F->up, F->vt_2354, (*(P1592)rt_nil_check(F->pm_2352)).t_, (*(P171)rt_nil_check(F->e_863)).line_);
if (((((*(P1592)rt_nil_check(F->pm_2352)).c_ != NULL) && ((*(P175)rt_nil_check((*(P1592)rt_nil_check(F->pm_2352)).c_)).lo_ != NULL)) && (((*(P119)rt_nil_check((*(P1592)rt_nil_check(F->pm_2352)).t_)).kind_ == ((rt_int)1LL)) || ((*(P119)rt_nil_check((*(P1592)rt_nil_check(F->pm_2352)).t_)).kind_ == ((rt_int)4LL))))) {
F->v_2348 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P137)rt_nil_check(F->v_2348))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P175)rt_nil_check((*(P1592)rt_nil_check(F->pm_2352)).c_)).lo_))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P175)rt_nil_check((*(P1592)rt_nil_check(F->pm_2352)).c_)).hi_))), one_rt_gstr(41)));
}
F->args_2346 = f_mk_205(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->args_2346)), (*(P137)rt_nil_check(F->v_2348))));
} else {
f_lvalue_651(F->up, F->a_2351, &F->lv_2347, &F->lt_2353, &F->lc_2355, &F->ro_2356);
if (F->ro_2356) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_863)).line_, cat_rt_gstr((*(P137)rt_nil_check((*(P1592)rt_nil_check(F->pm_2352)).name_)), rt_g_lit(" needs a variable", 17)));
}
f_check_pure_target_1038(F->up, F->a_2351, (*(P171)rt_nil_check(F->e_863)).line_);
f_check_type_425(F->up, F->lt_2353, (*(P1592)rt_nil_check(F->pm_2352)).t_, (*(P171)rt_nil_check(F->e_863)).line_);
F->args_2346 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->args_2346)), one_rt_gstr(38)), (*(P137)rt_nil_check(F->lv_2347))));
}
}
F->pm_2352 = (*(P1592)rt_nil_check(F->pm_2352)).next_;
}
L_end_2357: ;
if (((f_list_len_282(F->up, (*(P171)rt_nil_check(F->e_863)).b_) > ((rt_int)0LL)) && ((*(P114)rt_nil_check(F->y_864)).params_ == NULL))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_863)).line_, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_864)).name_)), rt_g_lit(" takes no parameters", 20)));
}
(*F->t_865) = (*(P114)rt_nil_check(F->y_864)).result_;
(*F->r_866) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_864)).cname_)), one_rt_gstr(40)), (*(P137)rt_nil_check(F->args_2346))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_builtin_874(struct f_greenc_1fr *up_, rt_gstr name_868, P171 args_869, rt_int line_870, int is_stmt_871, P119 *t_872, P137 *r_873) {
  struct f_builtin_874fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_868 = cp_rt_gstr(name_868);
F->args_869 = args_869;
F->line_870 = line_870;
F->is_stmt_871 = is_stmt_871;
F->t_872 = t_872;
F->r_873 = r_873;
F->aty_2359 = NULL;
F->lt_2360 = NULL;
F->a_2361 = NULL;
F->w_2362 = NULL;
F->lv_2363 = NULL;
F->lc_2364 = NULL;
(*F->t_872) = F->up->ty_void_158;
if (((F->up->pure_sym_194 != NULL) && (eq_rt_gstr(F->name_868, rt_g_lit("PUT", 3)) || eq_rt_gstr(F->name_868, rt_g_lit("GET", 3))))) {
f_fail_226(F->up, F->line_870, cat_rt_gstr(cat_rt_gstr(rt_g_lit("a function cannot do input-output: ", 35), F->name_868), rt_g_lit(" has side effects (RM79 6.5)", 28)));
}
if (eq_rt_gstr(F->name_868, rt_g_lit("PUT", 3))) {
if ((F->args_869 == NULL)) {
f_fail_226(F->up, F->line_870, rt_g_lit("PUT needs an item", 17));
}
f_gexpr_695(F->up, F->args_869, NULL, &F->aty_2359, &F->a_2361);
F->w_2362 = f_mk_205(F->up, rt_g_lit("0", 1));
if (((*(P171)rt_nil_check(F->args_869)).next_ != NULL)) {
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->args_869)).next_, F->up->ty_int_153, &F->lt_2360, &F->w_2362);
}
if (f_is_string_499(F->up, F->aty_2359)) {
(*F->r_873) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put(rt_g_g2s(", 18), (*(P137)rt_nil_check(F->a_2361))), rt_g_lit("))", 2)));
} else if (((*(P119)rt_nil_check(F->aty_2359)).kind_ == ((rt_int)11LL))) {
(*F->r_873) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_putc(", 10), (*(P137)rt_nil_check(F->a_2361))), one_rt_gstr(41)));
} else if (((*(P119)rt_nil_check(F->aty_2359)).kind_ == ((rt_int)1LL))) {
(*F->r_873) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put_int(", 13), (*(P137)rt_nil_check(F->a_2361))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->w_2362))), one_rt_gstr(41)));
} else if (((*(P119)rt_nil_check(F->aty_2359)).kind_ == ((rt_int)2LL))) {
(*F->r_873) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put_bool(", 14), (*(P137)rt_nil_check(F->a_2361))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->w_2362))), one_rt_gstr(41)));
} else if (((*(P119)rt_nil_check(F->aty_2359)).kind_ == ((rt_int)16LL))) {
f_fail_226(F->up, F->line_870, rt_g_lit("TEXT_IO has no PUT for a fixed point type: instantiate FIXED_IO (RM79 14.4)", 75));
} else if (((*(P119)rt_nil_check(F->aty_2359)).kind_ == ((rt_int)3LL))) {
(*F->r_873) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put_float(", 15), (*(P137)rt_nil_check(F->a_2361))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->w_2362))), rt_g_lit(", 0)", 4)));
} else {
f_fail_226(F->up, F->line_870, rt_g_lit("PUT of this type is not handled", 31));
}
} else if (eq_rt_gstr(F->name_868, rt_g_lit("GET", 3))) {
f_lvalue_651(F->up, F->args_869, &F->lv_2363, &F->lt_2360, &F->lc_2364, &F->ro_2365);
if (((*(P119)rt_nil_check(F->lt_2360)).kind_ == ((rt_int)11LL))) {
(*F->r_873) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check(F->lv_2363))), rt_g_lit(" = rt_g_getc())", 15)));
} else if (((*(P119)rt_nil_check(F->lt_2360)).kind_ == ((rt_int)1LL))) {
(*F->r_873) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check(F->lv_2363))), rt_g_lit(" = rt_g_get_int())", 18)));
} else if (((*(P119)rt_nil_check(F->lt_2360)).kind_ == ((rt_int)3LL))) {
(*F->r_873) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check(F->lv_2363))), rt_g_lit(" = rt_g_get_float())", 20)));
} else {
f_fail_226(F->up, F->line_870, rt_g_lit("GET of this type is not handled", 31));
}
} else if (eq_rt_gstr(F->name_868, rt_g_lit("ABS", 3))) {
f_gexpr_695(F->up, F->args_869, NULL, &(*F->t_872), &F->a_2361);
if (((*(P119)rt_nil_check((*F->t_872))).kind_ == ((rt_int)1LL))) {
(*F->r_873) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_abs(", 7), (*(P137)rt_nil_check(F->a_2361))), one_rt_gstr(41)));
} else if ((((*(P119)rt_nil_check((*F->t_872))).kind_ == ((rt_int)3LL)) || ((*(P119)rt_nil_check((*F->t_872))).kind_ == ((rt_int)16LL)))) {
(*F->r_873) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("fabs(", 5), (*(P137)rt_nil_check(F->a_2361))), one_rt_gstr(41)));
} else {
f_fail_226(F->up, F->line_870, rt_g_lit("ABS applies to numeric values (RM79 App. C)", 43));
}
} else {
f_task_builtin_1015(F->up, F->name_868, F->args_869, F->line_870, &(*F->t_872), &(*F->r_873));
}
ret_:

  return;
}

static int f_is_package_876(struct f_greenc_1fr *up_, P171 e_875) {
  struct f_is_package_876fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_875 = e_875;
F->y_2366 = NULL;
if (((*(P171)rt_nil_check(F->e_875)).kind_ != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->y_2366 = f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_875)).name_)));
F->result_ = ((F->y_2366 != NULL) && (((*(P114)rt_nil_check(F->y_2366)).kind_ == ((rt_int)8LL)) || ((*(P114)rt_nil_check(F->y_2366)).kind_ == ((rt_int)9LL))));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P114 f_member_of_880(struct f_greenc_1fr *up_, rt_gstr p_877, rt_gstr name_878, rt_int line_879) {
  struct f_member_of_880fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_877 = cp_rt_gstr(p_877);
F->name_878 = cp_rt_gstr(name_878);
F->line_879 = line_879;
F->y_2367 = NULL;
F->y_2367 = f_lookup_383(F->up, F->p_877);
F->m_2368 = NULL;
if (((F->y_2367 == NULL) || (((*(P114)rt_nil_check(F->y_2367)).kind_ != ((rt_int)8LL)) && ((*(P114)rt_nil_check(F->y_2367)).kind_ != ((rt_int)9LL))))) {
F->result_ = NULL;
goto ret_;
}
F->m_2368 = (*(P114)rt_nil_check(F->y_2367)).members_;
while ((F->m_2368 != NULL)) {
if ((eq_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->m_2368)).name_)), F->name_878) && (!(*(P114)rt_nil_check(F->m_2368)).hidden_))) {
F->result_ = F->m_2368;
goto ret_;
}
F->m_2368 = (*(P114)rt_nil_check(F->m_2368)).mnext_;
}
L_end_2369: ;
if (((*(P114)rt_nil_check(F->y_2367)).kind_ == ((rt_int)9LL))) {
F->m_2368 = f_lookup_entry_389(F->up, F->name_878, F->y_2367);
if ((((F->m_2368 != NULL) && ((*(P114)rt_nil_check(F->m_2368)).kind_ == ((rt_int)10LL))) && f_same_task_386(F->up, (*(P114)rt_nil_check(F->m_2368)).members_, F->y_2367))) {
F->result_ = F->m_2368;
goto ret_;
}
}
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_inside_package_882(struct f_greenc_1fr *up_, P171 p_881) {
  struct f_inside_package_882fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_881 = p_881;
F->l_2370 = NULL;
F->l_2370 = F->up->pkg_stack_190;
if ((F->p_881 == NULL)) {
F->result_ = 1;
goto ret_;
}
while ((F->l_2370 != NULL)) {
if (eq_rt_gstr((*(P137)rt_nil_check((*(P148)rt_nil_check(F->l_2370)).s_)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->p_881)).name_)))) {
F->result_ = 1;
goto ret_;
}
F->l_2370 = (*(P148)rt_nil_check(F->l_2370)).next_;
}
L_end_2371: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_copy_sym_885(struct f_greenc_1fr *up_, P114 y_883, P114 *z_884) {
  struct f_copy_sym_885fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_883 = y_883;
F->z_884 = z_884;
(*F->z_884) = ({ R115 *cell2372 = rt_alloc(sizeof(R115)); *cell2372 = cp_R115(({ R115 ag2373; ag2373.kind_ = (*(P114)rt_nil_check(F->y_883)).kind_; ag2373.name_ = (*(P114)rt_nil_check(F->y_883)).name_; ag2373.t_ = (*(P114)rt_nil_check(F->y_883)).t_; ag2373.c_ = (*(P114)rt_nil_check(F->y_883)).c_; ag2373.access_path_ = (*(P114)rt_nil_check(F->y_883)).access_path_; ag2373.cname_ = (*(P114)rt_nil_check(F->y_883)).cname_; ag2373.ro_ = (*(P114)rt_nil_check(F->y_883)).ro_; ag2373.mvalue_ = (*(P114)rt_nil_check(F->y_883)).mvalue_; ag2373.hasmv_ = (*(P114)rt_nil_check(F->y_883)).hasmv_; ag2373.decl_ = (*(P114)rt_nil_check(F->y_883)).decl_; ag2373.params_ = (*(P114)rt_nil_check(F->y_883)).params_; ag2373.result_ = (*(P114)rt_nil_check(F->y_883)).result_; ag2373.depth_ = ((rt_int)0LL); ag2373.level_ = (*(P114)rt_nil_check(F->y_883)).level_; ag2373.byref_ = (*(P114)rt_nil_check(F->y_883)).byref_; ag2373.vrp_ = (*(P114)rt_nil_check(F->y_883)).vrp_; ag2373.hidden_ = (*(P114)rt_nil_check(F->y_883)).hidden_; ag2373.from_use_ = 0; ag2373.members_ = (*(P114)rt_nil_check(F->y_883)).members_; ag2373.mnext_ = NULL; ag2373.chain_ = NULL; ag2373.stack_ = NULL; ag2373.flags_ = (*(P114)rt_nil_check(F->y_883)).flags_; ag2373; })); (P114)cell2372; });
ret_:

  return;
}

static void f_complete_private_888(struct f_greenc_1fr *up_, P119 ph_886, P119 full_887) {
  struct f_complete_private_888fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->ph_886 = ph_886;
F->full_887 = full_887;
F->n_2374 = NULL;
F->n_2374 = (*(P119)rt_nil_check(F->ph_886)).name_;
F->p_2375 = NULL;
F->p_2375 = (*(P119)rt_nil_check(F->ph_886)).decl_;
as_R120(&(*(P119)rt_nil_check(F->ph_886)), (*(P119)rt_nil_check(F->full_887)));
(*(P119)rt_nil_check(F->ph_886)).name_ = F->n_2374;
(*(P119)rt_nil_check(F->ph_886)).priv_ = 1;
(*(P119)rt_nil_check(F->ph_886)).decl_ = F->p_2375;
ret_:

  return;
}

static void f_package_spec_890(struct f_greenc_1fr *up_, P171 e_889) {
  struct f_package_spec_890fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_889 = e_889;
F->y_2376 = NULL;
F->m_2377 = NULL;
F->z_2378 = NULL;
F->saved_2379 = NULL;
F->saved_2379 = F->up->cur_pkg_191;
F->first_private_2380 = NULL;
F->y_2376 = f_new_sym_416(F->up, ((rt_int)8LL), (*(P171)rt_nil_check(F->e_889)).name_);
(*(P114)rt_nil_check(F->y_2376)).decl_ = F->e_889;
F->up->pkg_stack_190 = ({ R149 *cell2381 = rt_alloc(sizeof(R149)); *cell2381 = cp_R149(({ R149 ag2382; ag2382.s_ = (*(P171)rt_nil_check(F->e_889)).name_; ag2382.next_ = F->up->pkg_stack_190; ag2382; })); (P148)cell2381; });
F->up->cur_pkg_191 = F->e_889;
f_open_scope_412(F->up);
f_decl_elements_579(F->up, (*(P171)rt_nil_check(F->e_889)).c_);
F->first_private_2380 = F->up->scope_stack_118;
f_decl_elements_579(F->up, (*(P171)rt_nil_check(F->e_889)).d_);
F->m_2377 = F->up->scope_stack_118;
while (((F->m_2377 != NULL) && ((*(P114)rt_nil_check(F->m_2377)).depth_ == F->up->depth_117))) {
if ((((*(P114)rt_nil_check(F->m_2377)).kind_ == ((rt_int)2LL)) && ((*(P114)rt_nil_check(F->m_2377)).flags_ == rt_add(((rt_int)1LL), ((rt_int)2LL))))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_889)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("deferred constant ", 18), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->m_2377)).name_))), rt_g_lit(" has no full declaration in the private part (RM79 7.4)", 55)));
}
f_copy_sym_885(F->up, F->m_2377, &F->z_2378);
(*(P114)rt_nil_check(F->z_2378)).hidden_ = (f_hidden_from_893(F->up, F->m_2377, F->first_private_2380) || (*(P114)rt_nil_check(F->m_2377)).from_use_);
(*(P114)rt_nil_check(F->z_2378)).mnext_ = (*(P114)rt_nil_check(F->y_2376)).members_;
(*(P114)rt_nil_check(F->y_2376)).members_ = F->z_2378;
F->m_2377 = (*(P114)rt_nil_check(F->m_2377)).stack_;
}
L_end_2383: ;
f_close_scope_413(F->up);
F->up->pkg_stack_190 = (*(P148)rt_nil_check(F->up->pkg_stack_190)).next_;
F->up->cur_pkg_191 = F->saved_2379;
f_define_411(F->up, F->y_2376, (*(P171)rt_nil_check(F->e_889)).line_);
ret_:

  return;
}

static int f_hidden_from_893(struct f_greenc_1fr *up_, P114 m_891, P114 first_private_892) {
  struct f_hidden_from_893fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->m_891 = m_891;
F->first_private_892 = first_private_892;
F->p_2384 = NULL;
F->p_2384 = F->up->scope_stack_118;
while ((F->p_2384 != NULL)) {
if ((F->p_2384 == F->first_private_892)) {
F->result_ = 0;
goto ret_;
}
if ((F->p_2384 == F->m_891)) {
F->result_ = 1;
goto ret_;
}
F->p_2384 = (*(P114)rt_nil_check(F->p_2384)).stack_;
}
L_end_2385: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_package_body_895(struct f_greenc_1fr *up_, P171 e_894) {
  struct f_package_body_895fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_894 = e_894;
F->y_2386 = NULL;
F->y_2386 = f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_894)).name_)));
F->m_2387 = NULL;
F->z_2388 = NULL;
F->saved_2389 = NULL;
F->saved_2389 = F->up->cur_pkg_191;
if (((F->y_2386 != NULL) && ((*(P114)rt_nil_check(F->y_2386)).kind_ == ((rt_int)11LL)))) {
f_attach_generic_body_1066(F->up, F->e_894);
goto ret_;
}
if (((F->y_2386 == NULL) || ((*(P114)rt_nil_check(F->y_2386)).kind_ != ((rt_int)8LL)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_894)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("package body ", 13), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_894)).name_))), rt_g_lit(" has no specification", 21)));
}
F->up->pkg_stack_190 = ({ R149 *cell2390 = rt_alloc(sizeof(R149)); *cell2390 = cp_R149(({ R149 ag2391; ag2391.s_ = (*(P171)rt_nil_check(F->e_894)).name_; ag2391.next_ = F->up->pkg_stack_190; ag2391; })); (P148)cell2390; });
F->up->cur_pkg_191 = (*(P114)rt_nil_check(F->y_2386)).decl_;
f_open_scope_412(F->up);
F->m_2387 = (*(P114)rt_nil_check(F->y_2386)).members_;
while ((F->m_2387 != NULL)) {
f_copy_sym_885(F->up, F->m_2387, &F->z_2388);
(*(P114)rt_nil_check(F->z_2388)).hidden_ = 0;
f_define_411(F->up, F->z_2388, (*(P171)rt_nil_check(F->e_894)).line_);
F->m_2387 = (*(P114)rt_nil_check(F->m_2387)).mnext_;
}
L_end_2392: ;
f_decl_elements_579(F->up, (*(P171)rt_nil_check(F->e_894)).c_);
F->m_2387 = (*(P114)rt_nil_check(F->y_2386)).members_;
while ((F->m_2387 != NULL)) {
if (((((*(P114)rt_nil_check(F->m_2387)).kind_ == ((rt_int)3LL)) || ((*(P114)rt_nil_check(F->m_2387)).kind_ == ((rt_int)4LL))) && ((*(P171)rt_nil_check((*(P114)rt_nil_check(F->m_2387)).decl_)).ival_ == ((rt_int)1LL)))) {
F->z_2388 = ({ A113 ix2394 = F->up->table_116; ix2394.p[rt_index(f_hash_381(F->up, (*(P137)rt_nil_check((*(P114)rt_nil_check(F->m_2387)).name_))), ix2394.lo, ix2394.hi) - ix2394.lo]; });
while ((F->z_2388 != NULL)) {
if (((*(P114)rt_nil_check(F->z_2388)).cname_ == (*(P114)rt_nil_check(F->m_2387)).cname_)) {
(*(P114)rt_nil_check(F->m_2387)).decl_ = (*(P114)rt_nil_check(F->z_2388)).decl_;
}
F->z_2388 = (*(P114)rt_nil_check(F->z_2388)).chain_;
}
L_end_2395: ;
if (((*(P171)rt_nil_check((*(P114)rt_nil_check(F->m_2387)).decl_)).ival_ == ((rt_int)1LL))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_894)).line_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no body for ", 12), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->m_2387)).name_))), rt_g_lit(" in package body ", 17)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_894)).name_))));
}
}
F->m_2387 = (*(P114)rt_nil_check(F->m_2387)).mnext_;
}
L_end_2393: ;
f_guarded_603(F->up, (*(P171)rt_nil_check(F->e_894)).d_, (*(P171)rt_nil_check(F->e_894)).e_, (*(P171)rt_nil_check(F->e_894)).line_);
f_close_scope_413(F->up);
F->up->pkg_stack_190 = (*(P148)rt_nil_check(F->up->pkg_stack_190)).next_;
F->up->cur_pkg_191 = F->saved_2389;
ret_:

  return;
}

static void f_use_clause_897(struct f_greenc_1fr *up_, P171 e_896) {
  struct f_use_clause_897fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_896 = e_896;
F->n_2396 = NULL;
F->n_2396 = (*(P171)rt_nil_check(F->e_896)).a_;
F->y_2397 = NULL;
F->m_2398 = NULL;
F->z_2399 = NULL;
F->old_2400 = NULL;
while ((F->n_2396 != NULL)) {
F->y_2397 = f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->n_2396)).name_)));
if ((F->y_2397 == NULL)) {
if ((!eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->n_2396)).name_)), rt_g_lit("TEXT_IO", 7)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->n_2396)).line_, cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->n_2396)).name_)), rt_g_lit(" is not a package", 17)));
}
} else if ((((*(P114)rt_nil_check(F->y_2397)).kind_ != ((rt_int)8LL)) && ((*(P114)rt_nil_check(F->y_2397)).kind_ != ((rt_int)9LL)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->n_2396)).line_, cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->n_2396)).name_)), rt_g_lit(" is not a package or a task", 27)));
} else {
F->m_2398 = (*(P114)rt_nil_check(F->y_2397)).members_;
while ((F->m_2398 != NULL)) {
F->old_2400 = f_lookup_383(F->up, (*(P137)rt_nil_check((*(P114)rt_nil_check(F->m_2398)).name_)));
if (((!(*(P114)rt_nil_check(F->m_2398)).hidden_) && ((F->old_2400 == NULL) || ((((*(P114)rt_nil_check(F->old_2400)).depth_ < F->up->depth_117) && ((*(P114)rt_nil_check(F->old_2400)).kind_ != ((rt_int)1LL))) && ((*(P114)rt_nil_check(F->old_2400)).kind_ != ((rt_int)2LL)))))) {
f_copy_sym_885(F->up, F->m_2398, &F->z_2399);
(*(P114)rt_nil_check(F->z_2399)).from_use_ = 1;
f_define_411(F->up, F->z_2399, (*(P171)rt_nil_check(F->n_2396)).line_);
}
F->m_2398 = (*(P114)rt_nil_check(F->m_2398)).mnext_;
}
L_end_2402: ;
}
F->n_2396 = (*(P171)rt_nil_check(F->n_2396)).next_;
}
L_end_2401: ;
ret_:

  return;
}

static void f_fits_902(struct f_greenc_1fr *up_, P114 y_898, P171 args_899, P119 want_900, int *ok_901) {
  struct f_fits_902fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_898 = y_898;
F->args_899 = args_899;
F->want_900 = want_900;
F->ok_901 = ok_901;
F->pm_2403 = NULL;
F->pm_2403 = (*(P114)rt_nil_check(F->y_898)).params_;
F->a_2404 = NULL;
F->t_2405 = NULL;
F->c_2406 = NULL;
F->v_2407 = NULL;
F->saved_2409 = NULL;
F->saved_2409 = F->up->code_133;
F->used_2410 = ((rt_int)0LL);
(*F->ok_901) = 1;
F->up->trial_152 = rt_add(F->up->trial_152, ((rt_int)1LL));
F->up->code_133 = f_new_buffer_227(F->up);
{
{ rt_frame xf2412;
if (RT_TRY(xf2412)) {
while (((*F->ok_901) && (F->pm_2403 != NULL))) {
F->a_2404 = f_actual_for_857(F->up, F->args_899, F->pm_2403, (*(P114)rt_nil_check(F->y_898)).params_);
if ((F->a_2404 == NULL)) {
(*F->ok_901) = ((*(P1592)rt_nil_check(F->pm_2403)).dflt_ != NULL);
} else {
F->used_2410 = rt_add(F->used_2410, ((rt_int)1LL));
if (((((*(P171)rt_nil_check(F->a_2404)).flag_ != ((rt_int)0LL)) && ((*(P171)rt_nil_check(F->a_2404)).flag_ != ((rt_int)4LL))) && ((*(P171)rt_nil_check(F->a_2404)).flag_ != (*(P1592)rt_nil_check(F->pm_2403)).mode_))) {
(*F->ok_901) = 0;
} else if (((*(P1592)rt_nil_check(F->pm_2403)).mode_ == ((rt_int)1LL))) {
f_gexpr_695(F->up, F->a_2404, (*(P1592)rt_nil_check(F->pm_2403)).t_, &F->t_2405, &F->v_2407);
(*F->ok_901) = (f_same_396(F->up, F->t_2405, (*(P1592)rt_nil_check(F->pm_2403)).t_) || (((*(P119)rt_nil_check(F->t_2405)).kind_ == ((rt_int)10LL)) && ((*(P119)rt_nil_check((*(P1592)rt_nil_check(F->pm_2403)).t_)).kind_ == ((rt_int)8LL))));
} else {
f_lvalue_651(F->up, F->a_2404, &F->v_2407, &F->t_2405, &F->c_2406, &F->ro_2408);
(*F->ok_901) = f_same_396(F->up, F->t_2405, (*(P1592)rt_nil_check(F->pm_2403)).t_);
}
}
F->pm_2403 = (*(P1592)rt_nil_check(F->pm_2403)).next_;
}
L_end_2414: ;
if ((F->used_2410 != f_list_len_282(F->up, F->args_899))) {
(*F->ok_901) = 0;
}
if ((((*F->ok_901) && (F->want_900 != NULL)) && ((*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_898)).result_)).kind_ != ((rt_int)9LL)))) {
(*F->ok_901) = (f_same_396(F->up, (*(P114)rt_nil_check(F->y_898)).result_, F->want_900) || ((*(P119)rt_nil_check(F->want_900)).kind_ == ((rt_int)9LL)));
}
RT_POP(xf2412);
} else {
RT_POP(xf2412);
int x2413 = rt_xcur;
if (rt_g_aborted()) rt_raise(x2413);
if (0 || x2413 == ex_compile_error_105) {
(*F->ok_901) = 0;
} else {
rt_raise(x2413);
}
}
}

}
L_end_2411: ;
F->up->trial_152 = rt_sub(F->up->trial_152, ((rt_int)1LL));
F->up->code_133 = F->saved_2409;
ret_:

  return;
}

static int f_is_builtin_904(struct f_greenc_1fr *up_, rt_gstr n_903) {
  struct f_is_builtin_904fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_903 = cp_rt_gstr(n_903);
F->result_ = (((eq_rt_gstr(F->n_903, rt_g_lit("PUT", 3)) || eq_rt_gstr(F->n_903, rt_g_lit("GET", 3))) || eq_rt_gstr(F->n_903, rt_g_lit("ABS", 3))) || eq_rt_gstr(F->n_903, rt_g_lit("SET_PRIORITY", 12)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_resolve_overload_911(struct f_greenc_1fr *up_, rt_gstr name_905, P171 args_906, int is_stmt_907, P119 want_908, rt_int line_909, P114 *y_910) {
  struct f_resolve_overload_911fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_905 = cp_rt_gstr(name_905);
F->args_906 = args_906;
F->is_stmt_907 = is_stmt_907;
F->want_908 = want_908;
F->line_909 = line_909;
F->y_910 = y_910;
F->z_2415 = NULL;
F->z_2415 = ({ A113 ix2416 = F->up->table_116; ix2416.p[rt_index(f_hash_381(F->up, F->name_905), ix2416.lo, ix2416.hi) - ix2416.lo]; });
F->first_2417 = NULL;
F->n_2418 = ((rt_int)0LL);
{ rt_int lo2422 = ((rt_int)1LL), hi2423 = ((rt_int)2LL);
for (rt_int it2424 = lo2422; it2424 <= hi2423; it2424++) {
F->pass_2421 = it2424;
F->z_2415 = ({ A113 ix2425 = F->up->table_116; ix2425.p[rt_index(f_hash_381(F->up, F->name_905), ix2425.lo, ix2425.hi) - ix2425.lo]; });
F->n_2418 = ((rt_int)0LL);
while ((F->z_2415 != NULL)) {
if ((eq_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->z_2415)).name_)), F->name_905) && (((*(P114)rt_nil_check(F->z_2415)).kind_ == ((rt_int)3LL)) || ((*(P114)rt_nil_check(F->z_2415)).kind_ == ((rt_int)4LL))))) {
F->n_2418 = rt_add(F->n_2418, ((rt_int)1LL));
if ((F->first_2417 == NULL)) {
F->first_2417 = F->z_2415;
}
if ((((*(P119)rt_nil_check((*(P114)rt_nil_check(F->z_2415)).result_)).kind_ == ((rt_int)9LL)) == F->is_stmt_907)) {
if ((F->pass_2421 == ((rt_int)1LL))) {
f_fits_902(F->up, F->z_2415, F->args_906, F->want_908, &F->ok_2419);
} else {
f_fits_902(F->up, F->z_2415, F->args_906, NULL, &F->ok_2419);
}
if (F->ok_2419) {
(*F->y_910) = F->z_2415;
goto ret_;
}
}
}
F->z_2415 = (*(P114)rt_nil_check(F->z_2415)).chain_;
}
L_end_2426: ;
}
}
L_end_2420: ;
if (f_is_builtin_904(F->up, F->name_905)) {
(*F->y_910) = NULL;
goto ret_;
}
if ((F->n_2418 > ((rt_int)1LL))) {
f_fail_226(F->up, F->line_909, cat_rt_gstr(cat_rt_gstr(rt_g_lit("no declaration of ", 18), F->name_905), rt_g_lit(" fits these actual parameters", 29)));
}
(*F->y_910) = F->first_2417;
ret_:

  return;
}

static void f_resolve_member_overload_919(struct f_greenc_1fr *up_, rt_gstr p_912, rt_gstr name_913, P171 args_914, int is_stmt_915, P119 want_916, rt_int line_917, P114 *y_918) {
  struct f_resolve_member_overload_919fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_912 = cp_rt_gstr(p_912);
F->name_913 = cp_rt_gstr(name_913);
F->args_914 = args_914;
F->is_stmt_915 = is_stmt_915;
F->want_916 = want_916;
F->line_917 = line_917;
F->y_918 = y_918;
F->pk_2427 = NULL;
F->pk_2427 = f_lookup_383(F->up, F->p_912);
F->z_2428 = NULL;
F->n_2429 = ((rt_int)0LL);
if ((F->pk_2427 == NULL)) {
goto ret_;
}
{ rt_int lo2433 = ((rt_int)1LL), hi2434 = ((rt_int)2LL);
for (rt_int it2435 = lo2433; it2435 <= hi2434; it2435++) {
F->pass_2432 = it2435;
F->z_2428 = (*(P114)rt_nil_check(F->pk_2427)).members_;
F->n_2429 = ((rt_int)0LL);
while ((F->z_2428 != NULL)) {
if (((eq_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->z_2428)).name_)), F->name_913) && (((*(P114)rt_nil_check(F->z_2428)).kind_ == ((rt_int)3LL)) || ((*(P114)rt_nil_check(F->z_2428)).kind_ == ((rt_int)4LL)))) && (!(*(P114)rt_nil_check(F->z_2428)).hidden_))) {
F->n_2429 = rt_add(F->n_2429, ((rt_int)1LL));
if ((((*(P119)rt_nil_check((*(P114)rt_nil_check(F->z_2428)).result_)).kind_ == ((rt_int)9LL)) == F->is_stmt_915)) {
if ((F->pass_2432 == ((rt_int)1LL))) {
f_fits_902(F->up, F->z_2428, F->args_914, F->want_916, &F->ok_2430);
} else {
f_fits_902(F->up, F->z_2428, F->args_914, NULL, &F->ok_2430);
}
if (F->ok_2430) {
(*F->y_918) = F->z_2428;
goto ret_;
}
}
}
F->z_2428 = (*(P114)rt_nil_check(F->z_2428)).mnext_;
}
L_end_2436: ;
}
}
L_end_2431: ;
if ((F->n_2429 > ((rt_int)1LL))) {
f_fail_226(F->up, F->line_917, cat_rt_gstr(cat_rt_gstr(rt_g_lit("no declaration of ", 18), F->name_913), rt_g_lit(" fits these actual parameters", 29)));
}
ret_:

  return;
}

static void f_user_operator_925(struct f_greenc_1fr *up_, P171 e_920, P119 want_921, P119 *t_922, P137 *r_923, int *done_924) {
  struct f_user_operator_925fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_920 = e_920;
F->want_921 = want_921;
F->t_922 = t_922;
F->r_923 = r_923;
F->done_924 = done_924;
F->op_2437 = NULL;
F->op_2437 = (*(P171)rt_nil_check(F->e_920)).name_;
F->negate_2438 = 0;
F->y_2439 = NULL;
F->call_2440 = NULL;
F->fname_2441 = NULL;
F->l_2442 = NULL;
F->rt_2443 = NULL;
(*F->done_924) = 0;
if (eq_rt_gstr((*(P137)rt_nil_check(F->op_2437)), rt_g_lit("/=", 2))) {
F->op_2437 = f_mk_205(F->up, rt_g_lit("=", 1));
F->negate_2438 = 1;
}
if ((f_lookup_383(F->up, (*(P137)rt_nil_check(F->op_2437))) == NULL)) {
goto ret_;
}
F->l_2442 = f_nn_276(F->up, (*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_920)).a_)).kind_, (*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_920)).a_)).line_);
as_R172(&(*(P171)rt_nil_check(F->l_2442)), (*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_920)).a_)));
(*(P171)rt_nil_check(F->l_2442)).next_ = NULL;
(*(P171)rt_nil_check(F->l_2442)).formal_ = NULL;
(*(P171)rt_nil_check(F->l_2442)).flag_ = ((rt_int)0LL);
if (((*(P171)rt_nil_check(F->e_920)).kind_ == ((rt_int)7LL))) {
F->rt_2443 = f_nn_276(F->up, (*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_920)).b_)).kind_, (*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_920)).b_)).line_);
as_R172(&(*(P171)rt_nil_check(F->rt_2443)), (*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_920)).b_)));
(*(P171)rt_nil_check(F->rt_2443)).next_ = NULL;
(*(P171)rt_nil_check(F->rt_2443)).formal_ = NULL;
(*(P171)rt_nil_check(F->rt_2443)).flag_ = ((rt_int)0LL);
(*(P171)rt_nil_check(F->l_2442)).next_ = F->rt_2443;
}
F->y_2439 = ({ A113 ix2445 = F->up->table_116; ix2445.p[rt_index(f_hash_381(F->up, (*(P137)rt_nil_check(F->op_2437))), ix2445.lo, ix2445.hi) - ix2445.lo]; });
while ((F->y_2439 != NULL)) {
if ((eq_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2439)).name_)), (*(P137)rt_nil_check(F->op_2437))) && ((*(P114)rt_nil_check(F->y_2439)).kind_ == ((rt_int)3LL)))) {
f_fits_902(F->up, F->y_2439, F->l_2442, NULL, &F->ok_2444);
if (F->ok_2444) {
F->fname_2441 = f_nn_276(F->up, ((rt_int)5LL), (*(P171)rt_nil_check(F->e_920)).line_);
(*(P171)rt_nil_check(F->fname_2441)).name_ = F->op_2437;
F->call_2440 = f_nn_276(F->up, ((rt_int)8LL), (*(P171)rt_nil_check(F->e_920)).line_);
(*(P171)rt_nil_check(F->call_2440)).a_ = F->fname_2441;
(*(P171)rt_nil_check(F->call_2440)).b_ = F->l_2442;
F->up->call_want_193 = NULL;
f_gcall_with_867(F->up, F->call_2440, F->y_2439, &(*F->t_922), &(*F->r_923));
if (F->negate_2438) {
(*F->r_923) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!", 2), (*(P137)rt_nil_check((*F->r_923)))), one_rt_gstr(41)));
}
(*F->done_924) = 1;
goto ret_;
}
}
F->y_2439 = (*(P114)rt_nil_check(F->y_2439)).chain_;
}
L_end_2446: ;
ret_:

  return;
}

static void f_task_p_927(struct f_greenc_1fr *up_, P171 *res_926) {
  struct f_task_p_927fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_926 = res_926;
F->x_2447 = NULL;
F->r_2448 = NULL;
F->line_2449 = f_cur_line_283(F->up);
f_expect_kw_298(F->up, rt_g_lit("TASK", 4));
if (f_at_kw_285(F->up, rt_g_lit("BODY", 4))) {
f_skip_296(F->up);
F->x_2447 = f_nn_276(F->up, ((rt_int)51LL), F->line_2449);
f_expect_id_302(F->up, &(*(P171)rt_nil_check(F->x_2447)).name_);
f_expect_kw_298(F->up, rt_g_lit("IS", 2));
f_body_part_360(F->up, F->x_2447);
} else {
F->x_2447 = f_nn_276(F->up, ((rt_int)50LL), F->line_2449);
f_expect_id_302(F->up, &(*(P171)rt_nil_check(F->x_2447)).name_);
if (((f_at_kw_285(F->up, rt_g_lit("IS", 2)) && (f_kind_at_291(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_293(F->up, ((rt_int)1LL)), rt_g_lit("NEW", 3)))) {
f_instantiation_1060(F->up, F->x_2447, &(*F->res_926));
goto ret_;
}
if (f_at_op_287(F->up, rt_g_lit("(", 1))) {
f_skip_296(F->up);
f_discrete_range_p_334(F->up, &(*(P171)rt_nil_check(F->x_2447)).a_);
if (((*(P171)rt_nil_check((*(P171)rt_nil_check(F->x_2447)).a_)).kind_ == ((rt_int)5LL))) {
F->r_2448 = f_nn_276(F->up, ((rt_int)80LL), F->line_2449);
(*(P171)rt_nil_check(F->r_2448)).name_ = (*(P171)rt_nil_check((*(P171)rt_nil_check(F->x_2447)).a_)).name_;
(*(P171)rt_nil_check(F->x_2447)).a_ = F->r_2448;
}
f_expect_op_300(F->up, rt_g_lit(")", 1));
}
if (f_at_kw_285(F->up, rt_g_lit("IS", 2))) {
f_skip_296(F->up);
f_decl_part_348(F->up, &(*(P171)rt_nil_check(F->x_2447)).c_);
if (f_at_kw_285(F->up, rt_g_lit("PRIVATE", 7))) {
f_skip_296(F->up);
f_decl_part_348(F->up, &(*(P171)rt_nil_check(F->x_2447)).d_);
}
f_expect_kw_298(F->up, rt_g_lit("END", 3));
}
}
if (f_at_kind_289(F->up, ((rt_int)1LL))) {
f_skip_296(F->up);
}
f_expect_op_300(F->up, rt_g_lit(";", 1));
(*F->res_926) = F->x_2447;
ret_:

  return;
}

static void f_entry_p_929(struct f_greenc_1fr *up_, P171 *res_928) {
  struct f_entry_p_929fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_928 = res_928;
F->x_2450 = NULL;
f_expect_kw_298(F->up, rt_g_lit("ENTRY", 5));
F->x_2450 = f_nn_276(F->up, ((rt_int)52LL), f_cur_line_283(F->up));
f_expect_id_302(F->up, &(*(P171)rt_nil_check(F->x_2450)).name_);
if ((f_at_op_287(F->up, rt_g_lit("(", 1)) && (!((f_kind_at_291(F->up, ((rt_int)1LL)) == ((rt_int)1LL)) && (eq_rt_gstr(f_text_at_293(F->up, ((rt_int)2LL)), rt_g_lit(":", 1)) || eq_rt_gstr(f_text_at_293(F->up, ((rt_int)2LL)), rt_g_lit(",", 1))))))) {
f_skip_296(F->up);
if (((f_at_kind_289(F->up, ((rt_int)1LL)) && (f_kind_at_291(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && eq_rt_gstr(f_text_at_293(F->up, ((rt_int)1LL)), rt_g_lit(")", 1)))) {
f_subtype_ind_336(F->up, &(*(P171)rt_nil_check(F->x_2450)).b_);
} else {
f_discrete_range_p_334(F->up, &(*(P171)rt_nil_check(F->x_2450)).b_);
}
f_expect_op_300(F->up, rt_g_lit(")", 1));
}
if (f_at_op_287(F->up, rt_g_lit("(", 1))) {
f_formal_part_354(F->up, &(*(P171)rt_nil_check(F->x_2450)).a_);
}
f_expect_op_300(F->up, rt_g_lit(";", 1));
(*F->res_928) = F->x_2450;
ret_:

  return;
}

static void f_accept_p_931(struct f_greenc_1fr *up_, P171 *res_930) {
  struct f_accept_p_931fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_930 = res_930;
F->x_2451 = NULL;
f_expect_kw_298(F->up, rt_g_lit("ACCEPT", 6));
F->x_2451 = f_nn_276(F->up, ((rt_int)34LL), f_cur_line_283(F->up));
f_expect_id_302(F->up, &(*(P171)rt_nil_check(F->x_2451)).name_);
if ((f_at_op_287(F->up, rt_g_lit("(", 1)) && (!((f_kind_at_291(F->up, ((rt_int)1LL)) == ((rt_int)1LL)) && (eq_rt_gstr(f_text_at_293(F->up, ((rt_int)2LL)), rt_g_lit(":", 1)) || eq_rt_gstr(f_text_at_293(F->up, ((rt_int)2LL)), rt_g_lit(",", 1))))))) {
f_skip_296(F->up);
f_expr_313(F->up, &(*(P171)rt_nil_check(F->x_2451)).c_);
f_expect_op_300(F->up, rt_g_lit(")", 1));
}
if (f_at_op_287(F->up, rt_g_lit("(", 1))) {
f_formal_part_354(F->up, &(*(P171)rt_nil_check(F->x_2451)).a_);
}
if (f_at_kw_285(F->up, rt_g_lit("DO", 2))) {
f_skip_296(F->up);
(*(P171)rt_nil_check(F->x_2451)).flag_ = ((rt_int)1LL);
f_statements_367(F->up, &(*(P171)rt_nil_check(F->x_2451)).b_);
f_expect_kw_298(F->up, rt_g_lit("END", 3));
if (f_at_kind_289(F->up, ((rt_int)1LL))) {
f_skip_296(F->up);
}
}
f_expect_op_300(F->up, rt_g_lit(";", 1));
(*F->res_930) = F->x_2451;
ret_:

  return;
}

static void f_delay_p_933(struct f_greenc_1fr *up_, P171 *res_932) {
  struct f_delay_p_933fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_932 = res_932;
F->x_2452 = NULL;
f_expect_kw_298(F->up, rt_g_lit("DELAY", 5));
F->x_2452 = f_nn_276(F->up, ((rt_int)32LL), f_cur_line_283(F->up));
f_simple_expr_319(F->up, &(*(P171)rt_nil_check(F->x_2452)).a_);
f_expect_op_300(F->up, rt_g_lit(";", 1));
(*F->res_932) = F->x_2452;
ret_:

  return;
}

static void f_designators_935(struct f_greenc_1fr *up_, P171 *res_934) {
  struct f_designators_935fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_934 = res_934;
F->head_2453 = NULL;
F->tail_2454 = NULL;
F->n_2455 = NULL;
for (;;) {
f_name_p_330(F->up, &F->n_2455);
f_append_280(F->up, &F->head_2453, &F->tail_2454, F->n_2455);
if ((!f_at_op_287(F->up, rt_g_lit(",", 1)))) {
goto L_end_2456;
}
f_skip_296(F->up);
}
L_end_2456: ;
f_expect_op_300(F->up, rt_g_lit(";", 1));
(*F->res_934) = F->head_2453;
ret_:

  return;
}

static void f_parse_task_statement_937(struct f_greenc_1fr *up_, P171 *res_936) {
  struct f_parse_task_statement_937fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_936 = res_936;
F->x_2457 = NULL;
F->alt_2458 = NULL;
F->head_2459 = NULL;
F->tail_2460 = NULL;
F->line_2461 = f_cur_line_283(F->up);
(*F->res_936) = NULL;
if (f_at_kw_285(F->up, rt_g_lit("INITIATE", 8))) {
f_skip_296(F->up);
F->x_2457 = f_nn_276(F->up, ((rt_int)33LL), F->line_2461);
f_designators_935(F->up, &(*(P171)rt_nil_check(F->x_2457)).a_);
(*F->res_936) = F->x_2457;
} else if (f_at_kw_285(F->up, rt_g_lit("ABORT", 5))) {
f_skip_296(F->up);
F->x_2457 = f_nn_276(F->up, ((rt_int)36LL), F->line_2461);
f_designators_935(F->up, &(*(P171)rt_nil_check(F->x_2457)).a_);
(*F->res_936) = F->x_2457;
} else if (f_at_kw_285(F->up, rt_g_lit("DELAY", 5))) {
f_delay_p_933(F->up, &(*F->res_936));
} else if (f_at_kw_285(F->up, rt_g_lit("ACCEPT", 6))) {
f_accept_p_931(F->up, &(*F->res_936));
} else if (f_at_kw_285(F->up, rt_g_lit("SELECT", 6))) {
f_skip_296(F->up);
F->x_2457 = f_nn_276(F->up, ((rt_int)35LL), F->line_2461);
for (;;) {
F->alt_2458 = f_nn_276(F->up, ((rt_int)64LL), f_cur_line_283(F->up));
if (f_at_kw_285(F->up, rt_g_lit("WHEN", 4))) {
f_skip_296(F->up);
f_expr_313(F->up, &(*(P171)rt_nil_check(F->alt_2458)).a_);
f_expect_op_300(F->up, rt_g_lit("=>", 2));
}
if (f_at_kw_285(F->up, rt_g_lit("ACCEPT", 6))) {
f_accept_p_931(F->up, &(*(P171)rt_nil_check(F->alt_2458)).b_);
} else if (f_at_kw_285(F->up, rt_g_lit("DELAY", 5))) {
f_delay_p_933(F->up, &(*(P171)rt_nil_check(F->alt_2458)).b_);
} else {
f_perror_295(F->up, rt_g_lit("a select alternative starts with accept or delay", 48));
}
f_statements_367(F->up, &(*(P171)rt_nil_check(F->alt_2458)).c_);
f_append_280(F->up, &F->head_2459, &F->tail_2460, F->alt_2458);
if ((!f_at_kw_285(F->up, rt_g_lit("OR", 2)))) {
goto L_end_2462;
}
f_skip_296(F->up);
}
L_end_2462: ;
if (f_at_kw_285(F->up, rt_g_lit("ELSE", 4))) {
f_skip_296(F->up);
(*(P171)rt_nil_check(F->x_2457)).flag_ = ((rt_int)1LL);
f_statements_367(F->up, &(*(P171)rt_nil_check(F->x_2457)).b_);
}
f_expect_kw_298(F->up, rt_g_lit("END", 3));
f_expect_kw_298(F->up, rt_g_lit("SELECT", 6));
f_expect_op_300(F->up, rt_g_lit(";", 1));
(*(P171)rt_nil_check(F->x_2457)).a_ = F->head_2459;
(*F->res_936) = F->x_2457;
}
ret_:

  return;
}

static void f_path_at_941(struct f_greenc_1fr *up_, rt_int level_938, rt_gstr field_939, P137 *r_940) {
  struct f_path_at_941fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->level_938 = level_938;
F->field_939 = cp_rt_gstr(field_939);
F->r_940 = r_940;
if ((F->level_938 <= ((rt_int)0LL))) {
(*F->r_940) = f_mk_205(F->up, F->field_939);
goto ret_;
}
(*F->r_940) = f_mk_205(F->up, rt_g_lit("F", 1));
{ rt_int lo2465 = ((rt_int)1LL), hi2466 = rt_sub(F->up->cur_level_136, F->level_938);
for (rt_int it2467 = lo2465; it2467 <= hi2466; it2467++) {
F->i_2464 = it2467;
(*F->r_940) = f_mk_205(F->up, cat_rt_gstr((*(P137)rt_nil_check((*F->r_940))), rt_g_lit("->up", 4)));
}
}
L_end_2463: ;
(*F->r_940) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check((*F->r_940))), rt_g_lit("->", 2)), F->field_939));
ret_:

  return;
}

static int f_is_task_name_943(struct f_greenc_1fr *up_, rt_gstr n_942) {
  struct f_is_task_name_943fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_942 = cp_rt_gstr(n_942);
F->y_2468 = NULL;
F->y_2468 = f_lookup_383(F->up, F->n_942);
F->result_ = ((F->y_2468 != NULL) && ((*(P114)rt_nil_check(F->y_2468)).kind_ == ((rt_int)9LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_task_of_947(struct f_greenc_1fr *up_, P171 e_944, P114 *y_945, P171 *ix_946) {
  struct f_task_of_947fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_944 = e_944;
F->y_945 = y_945;
F->ix_946 = ix_946;
F->n_2469 = NULL;
F->n_2469 = F->e_944;
(*F->ix_946) = NULL;
if (((*(P171)rt_nil_check(F->e_944)).kind_ == ((rt_int)8LL))) {
F->n_2469 = (*(P171)rt_nil_check(F->e_944)).a_;
(*F->ix_946) = (*(P171)rt_nil_check(F->e_944)).b_;
}
if (((*(P171)rt_nil_check(F->n_2469)).kind_ != ((rt_int)5LL))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_944)).line_, rt_g_lit("a task name is required", 23));
}
(*F->y_945) = f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->n_2469)).name_)));
if ((((*F->y_945) == NULL) || ((*(P114)rt_nil_check((*F->y_945))).kind_ != ((rt_int)9LL)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_944)).line_, cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->n_2469)).name_)), rt_g_lit(" is not a task", 14)));
}
if ((((*F->ix_946) != NULL) && ((*(P114)rt_nil_check((*F->y_945))).c_ == NULL))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_944)).line_, cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->n_2469)).name_)), rt_g_lit(" is not a task family", 21)));
}
ret_:

  return;
}

static void f_own_index_949(struct f_greenc_1fr *up_, P137 *r_948) {
  struct f_own_index_949fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_948 = r_948;
F->y_2470 = NULL;
F->y_2470 = f_lookup_383(F->up, rt_g_lit("INDEX_", 6));
if ((F->y_2470 == NULL)) {
f_fail_226(F->up, ((rt_int)0LL), rt_g_lit("not inside the body of a task family", 36));
}
f_access_of_632(F->up, F->y_2470, &(*F->r_948));
ret_:

  return;
}

static void f_member_954(struct f_greenc_1fr *up_, P114 y_950, rt_gstr arr_951, rt_gstr i_952, P137 *r_953) {
  struct f_member_954fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_950 = y_950;
F->arr_951 = cp_rt_gstr(arr_951);
F->i_952 = cp_rt_gstr(i_952);
F->r_953 = r_953;
F->lo_2471 = NULL;
F->hi_2472 = NULL;
f_path_at_941(F->up, (*(P114)rt_nil_check(F->y_950)).level_, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_950)).cname_)), rt_g_lit("lo", 2)), &F->lo_2471);
f_path_at_941(F->up, (*(P114)rt_nil_check(F->y_950)).level_, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_950)).cname_)), rt_g_lit("hi", 2)), &F->hi_2472);
(*F->r_953) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->arr_951, rt_g_lit("[rt_index(", 10)), F->i_952), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->lo_2471))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->hi_2472))), rt_g_lit(") - ", 4)), (*(P137)rt_nil_check(F->lo_2471))), one_rt_gstr(93)));
ret_:

  return;
}

static void f_act_path_957(struct f_greenc_1fr *up_, P114 y_955, P137 *r_956) {
  struct f_act_path_957fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_955 = y_955;
F->r_956 = r_956;
F->i_2473 = NULL;
f_path_at_941(F->up, (*(P114)rt_nil_check(F->y_955)).level_, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_955)).cname_)), rt_g_lit("act", 3)), &(*F->r_956));
if (((*(P114)rt_nil_check(F->y_955)).c_ != NULL)) {
f_own_index_949(F->up, &F->i_2473);
f_member_954(F->up, F->y_955, (*(P137)rt_nil_check((*F->r_956))), (*(P137)rt_nil_check(F->i_2473)), &(*F->r_956));
}
ret_:

  return;
}

static void f_act_path_i_961(struct f_greenc_1fr *up_, P114 y_958, rt_gstr i_959, P137 *r_960) {
  struct f_act_path_i_961fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_958 = y_958;
F->i_959 = cp_rt_gstr(i_959);
F->r_960 = r_960;
f_path_at_941(F->up, (*(P114)rt_nil_check(F->y_958)).level_, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_958)).cname_)), rt_g_lit("act", 3)), &(*F->r_960));
f_member_954(F->up, F->y_958, (*(P137)rt_nil_check((*F->r_960))), F->i_959, &(*F->r_960));
ret_:

  return;
}

static void f_entry_path_965(struct f_greenc_1fr *up_, P114 y_962, rt_gstr i_963, P137 *r_964) {
  struct f_entry_path_965fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_962 = y_962;
F->i_963 = cp_rt_gstr(i_963);
F->r_964 = r_964;
F->own_2474 = NULL;
f_path_at_941(F->up, (*(P114)rt_nil_check(F->y_962)).level_, (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_962)).access_path_)), &(*F->r_964));
if (((((*(P114)rt_nil_check(F->y_962)).members_ != NULL) && ((*(P114)rt_nil_check((*(P114)rt_nil_check(F->y_962)).members_)).c_ != NULL)) && (!(*(P114)rt_nil_check(F->y_962)).ro_))) {
if ((({ rt_gstr at2475 = F->i_963; at2475.hi >= at2475.lo ? at2475.hi - at2475.lo + 1 : (rt_int)0; }) == ((rt_int)0LL))) {
f_own_index_949(F->up, &F->own_2474);
f_member_954(F->up, (*(P114)rt_nil_check(F->y_962)).members_, (*(P137)rt_nil_check((*F->r_964))), (*(P137)rt_nil_check(F->own_2474)), &(*F->r_964));
} else {
f_member_954(F->up, (*(P114)rt_nil_check(F->y_962)).members_, (*(P137)rt_nil_check((*F->r_964))), F->i_963, &(*F->r_964));
}
}
ret_:

  return;
}

static void f_declare_slot_968(struct f_greenc_1fr *up_, rt_gstr ctype_name_966, rt_gstr field_967) {
  struct f_declare_slot_968fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->ctype_name_966 = cp_rt_gstr(ctype_name_966);
F->field_967 = cp_rt_gstr(field_967);
if (F->up->in_func_135) {
f_put_to_230(F->up, F->up->fields_buf_134, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), F->ctype_name_966), one_rt_gstr(32)), F->field_967), one_rt_gstr(59)));
} else {
f_put_to_230(F->up, F->up->out_globals_129, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), F->ctype_name_966), one_rt_gstr(32)), F->field_967), one_rt_gstr(59)));
}
ret_:

  return;
}

static void f_task_decl_970(struct f_greenc_1fr *up_, P171 e_969) {
  struct f_task_decl_970fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_969 = e_969;
if (((*(P171)rt_nil_check(F->e_969)).kind_ == ((rt_int)50LL))) {
f_task_spec_982(F->up, F->e_969);
} else if (((*(P171)rt_nil_check(F->e_969)).kind_ == ((rt_int)51LL))) {
f_task_body_986(F->up, F->e_969);
} else if (((*(P171)rt_nil_check(F->e_969)).kind_ == ((rt_int)52LL))) {
f_entry_decl_984(F->up, F->e_969);
} else {
f_generic_decl_1062(F->up, F->e_969);
}
ret_:

  return;
}

static void f_family_arg_struct_971(struct f_greenc_1fr *up_) {
  struct f_family_arg_struct_971fr *F = rt_alloc(sizeof *F);
F->up = up_;
if ((!F->up->famarg_done_182)) {
F->up->famarg_done_182 = 1;
f_put_to_230(F->up, F->up->out_types_125, rt_g_lit("struct rt_famarg { void *up; rt_int i; };", 41));
}
ret_:

  return;
}

static void f_family_bounds_975(struct f_greenc_1fr *up_, P171 b_972, P114 y_973, P137 x_974) {
  struct f_family_bounds_975fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_972 = b_972;
F->y_973 = y_973;
F->x_974 = x_974;
F->lo_2476 = NULL;
F->hi_2477 = NULL;
F->v_2478 = NULL;
F->d_2479 = NULL;
F->vt_2480 = NULL;
F->c_2481 = NULL;
(*(P114)rt_nil_check(F->y_973)).c_ = f_new_cons_419(F->up);
f_declare_slot_968(F->up, rt_g_lit("rt_entry *", 10), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_973)).access_path_)));
f_declare_slot_968(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_973)).cname_)), rt_g_lit("flo", 3)));
f_declare_slot_968(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_973)).cname_)), rt_g_lit("fhi", 3)));
f_path_at_941(F->up, (*(P114)rt_nil_check(F->y_973)).level_, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_973)).cname_)), rt_g_lit("flo", 3)), &F->lo_2476);
f_path_at_941(F->up, (*(P114)rt_nil_check(F->y_973)).level_, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_973)).cname_)), rt_g_lit("fhi", 3)), &F->hi_2477);
f_discrete_bounds_460(F->up, F->b_972, NULL, &F->vt_2480, &F->v_2478, &F->d_2479);
(*(P114)rt_nil_check(F->y_973)).t_ = F->vt_2480;
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->lo_2476)), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->v_2478))), rt_g_lit("; ", 2)), (*(P137)rt_nil_check(F->hi_2477))), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->d_2479))), one_rt_gstr(59)));
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->x_974)), rt_g_lit(" = rt_alloc(sizeof(rt_entry) * (size_t)(", 40)), (*(P137)rt_nil_check(F->hi_2477))), rt_g_lit(" >= ", 4)), (*(P137)rt_nil_check(F->lo_2476))), rt_g_lit(" \? ", 3)), (*(P137)rt_nil_check(F->hi_2477))), rt_g_lit(" - ", 3)), (*(P137)rt_nil_check(F->lo_2476))), rt_g_lit(" + 1 : 1));", 11)));
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = 0; k_ <= ", 26), (*(P137)rt_nil_check(F->hi_2477))), rt_g_lit(" - ", 3)), (*(P137)rt_nil_check(F->lo_2476))), rt_g_lit("; k_++) rt_entry_init(&", 23)), (*(P137)rt_nil_check(F->x_974))), rt_g_lit("[k_]);", 6)));
ret_:

  return;
}

static void f_entry_family_slot_980(struct f_greenc_1fr *up_, P114 y_976, rt_gstr base_977, rt_gstr i_978, P137 *r_979) {
  struct f_entry_family_slot_980fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_976 = y_976;
F->base_977 = cp_rt_gstr(base_977);
F->i_978 = cp_rt_gstr(i_978);
F->r_979 = r_979;
F->lo_2482 = NULL;
F->hi_2483 = NULL;
f_path_at_941(F->up, (*(P114)rt_nil_check(F->y_976)).level_, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_976)).cname_)), rt_g_lit("flo", 3)), &F->lo_2482);
f_path_at_941(F->up, (*(P114)rt_nil_check(F->y_976)).level_, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_976)).cname_)), rt_g_lit("fhi", 3)), &F->hi_2483);
(*F->r_979) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->base_977, rt_g_lit("[rt_index(", 10)), F->i_978), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->lo_2482))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->hi_2483))), rt_g_lit(") - ", 4)), (*(P137)rt_nil_check(F->lo_2482))), one_rt_gstr(93)));
ret_:

  return;
}

static void f_task_spec_982(struct f_greenc_1fr *up_, P171 e_981) {
  struct f_task_spec_982fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_981 = e_981;
F->has_procs_2484 = 0;
F->fields_2486 = NULL;
F->ct_2487 = NULL;
F->pm_2488 = NULL;
F->fp_2489 = NULL;
F->flo_2490 = NULL;
F->fhi_2491 = NULL;
F->y_2492 = NULL;
F->m_2493 = NULL;
F->z_2494 = NULL;
F->saved_2495 = NULL;
F->saved_2495 = F->up->cur_task_180;
F->d_2496 = NULL;
F->v_2497 = NULL;
F->p_2498 = NULL;
F->p2_2499 = NULL;
F->vt_2500 = NULL;
F->r_2501 = NULL;
F->y_2492 = f_new_sym_416(F->up, ((rt_int)9LL), (*(P171)rt_nil_check(F->e_981)).name_);
f_new_name_208(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("t_", 2), f_lower_s_216(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_981)).name_)))), one_rt_gstr(95)), &(*(P114)rt_nil_check(F->y_2492)).cname_);
(*(P114)rt_nil_check(F->y_2492)).decl_ = F->e_981;
if (F->up->in_func_135) {
(*(P114)rt_nil_check(F->y_2492)).level_ = F->up->cur_level_136;
}
(*(P114)rt_nil_check(F->y_2492)).access_path_ = (*(P114)rt_nil_check(F->y_2492)).cname_;
f_declare_slot_968(F->up, rt_g_lit("rt_taskdecl", 11), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2492)).cname_)), rt_g_lit("decl", 4)));
if (((*(P171)rt_nil_check(F->e_981)).a_ != NULL)) {
(*(P114)rt_nil_check(F->y_2492)).c_ = f_new_cons_419(F->up);
f_declare_slot_968(F->up, rt_g_lit("rt_act *", 8), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2492)).cname_)), rt_g_lit("act", 3)));
f_declare_slot_968(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2492)).cname_)), rt_g_lit("lo", 2)));
f_declare_slot_968(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2492)).cname_)), rt_g_lit("hi", 2)));
f_discrete_bounds_460(F->up, (*(P171)rt_nil_check(F->e_981)).a_, NULL, &F->vt_2500, &F->v_2497, &F->d_2496);
(*(P114)rt_nil_check(F->y_2492)).t_ = F->vt_2500;
f_path_at_941(F->up, (*(P114)rt_nil_check(F->y_2492)).level_, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2492)).cname_)), rt_g_lit("lo", 2)), &F->p_2498);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->p_2498)), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->v_2497))), one_rt_gstr(59)));
f_path_at_941(F->up, (*(P114)rt_nil_check(F->y_2492)).level_, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2492)).cname_)), rt_g_lit("hi", 2)), &F->p2_2499);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->p2_2499)), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->d_2496))), one_rt_gstr(59)));
f_path_at_941(F->up, (*(P114)rt_nil_check(F->y_2492)).level_, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2492)).cname_)), rt_g_lit("act", 3)), &F->v_2497);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->v_2497)), rt_g_lit(" = rt_alloc(sizeof(rt_act) * (size_t)(", 38)), (*(P137)rt_nil_check(F->p2_2499))), rt_g_lit(" >= ", 4)), (*(P137)rt_nil_check(F->p_2498))), rt_g_lit(" \? ", 3)), (*(P137)rt_nil_check(F->p2_2499))), rt_g_lit(" - ", 3)), (*(P137)rt_nil_check(F->p_2498))), rt_g_lit(" + 1 : 1));", 11)));
f_family_arg_struct_971(F->up);
} else {
f_declare_slot_968(F->up, rt_g_lit("rt_act", 6), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2492)).cname_)), rt_g_lit("act", 3)));
}
f_put_to_230(F->up, F->up->out_protos_128, cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2492)).cname_))), rt_g_lit("run(void *a);", 13)));
if ((!F->up->in_func_135)) {
f_put_to_230(F->up, F->up->out_awaits_187, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  rt_await_decl(&", 17), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2492)).cname_))), rt_g_lit("decl);", 6)));
}
f_open_scope_412(F->up);
F->up->cur_task_180 = F->y_2492;
F->saved_defer_2485 = F->up->defer_entry_structs_186;
F->up->defer_entry_structs_186 = 1;
f_decl_elements_579(F->up, (*(P171)rt_nil_check(F->e_981)).c_);
f_decl_elements_579(F->up, (*(P171)rt_nil_check(F->e_981)).d_);
F->up->defer_entry_structs_186 = F->saved_defer_2485;
F->m_2493 = F->up->scope_stack_118;
while (((F->m_2493 != NULL) && ((*(P114)rt_nil_check(F->m_2493)).depth_ == F->up->depth_117))) {
if ((((*(P114)rt_nil_check(F->m_2493)).kind_ == ((rt_int)10LL)) && (!(*(P114)rt_nil_check(F->m_2493)).from_use_))) {
F->fields_2486 = f_mk_205(F->up, rt_g_lit(" int dummy_;", 12));
F->pm_2488 = (*(P114)rt_nil_check(F->m_2493)).params_;
while ((F->pm_2488 != NULL)) {
f_ctype_430(F->up, (*(P1592)rt_nil_check(F->pm_2488)).t_, &F->ct_2487);
if (((*(P1592)rt_nil_check(F->pm_2488)).mode_ == ((rt_int)1LL))) {
F->fields_2486 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->fields_2486)), one_rt_gstr(32)), (*(P137)rt_nil_check(F->ct_2487))), one_rt_gstr(32)), (*(P137)rt_nil_check((*(P1592)rt_nil_check(F->pm_2488)).cfield_))), one_rt_gstr(59)));
} else {
F->fields_2486 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->fields_2486)), one_rt_gstr(32)), (*(P137)rt_nil_check(F->ct_2487))), rt_g_lit(" *", 2)), (*(P137)rt_nil_check((*(P1592)rt_nil_check(F->pm_2488)).cfield_))), one_rt_gstr(59)));
}
F->pm_2488 = (*(P1592)rt_nil_check(F->pm_2488)).next_;
}
L_end_2503: ;
f_put_to_230(F->up, F->up->out_types_125, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->m_2493)).cname_))), rt_g_lit("p {", 3)), (*(P137)rt_nil_check(F->fields_2486))), rt_g_lit(" };", 3)));
}
F->m_2493 = (*(P114)rt_nil_check(F->m_2493)).stack_;
}
L_end_2502: ;
F->m_2493 = F->up->scope_stack_118;
while (((F->m_2493 != NULL) && ((*(P114)rt_nil_check(F->m_2493)).depth_ == F->up->depth_117))) {
if (((((*(P114)rt_nil_check(F->m_2493)).kind_ == ((rt_int)3LL)) || ((*(P114)rt_nil_check(F->m_2493)).kind_ == ((rt_int)4LL))) && (!(*(P114)rt_nil_check(F->m_2493)).from_use_))) {
if (((!F->has_procs_2484) && ((*(P114)rt_nil_check(F->y_2492)).c_ != NULL))) {
f_declare_slot_968(F->up, rt_g_lit("void **", 7), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2492)).cname_)), rt_g_lit("frames", 6)));
f_path_at_941(F->up, (*(P114)rt_nil_check(F->y_2492)).level_, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2492)).cname_)), rt_g_lit("frames", 6)), &F->fp_2489);
f_path_at_941(F->up, (*(P114)rt_nil_check(F->y_2492)).level_, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2492)).cname_)), rt_g_lit("lo", 2)), &F->flo_2490);
f_path_at_941(F->up, (*(P114)rt_nil_check(F->y_2492)).level_, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2492)).cname_)), rt_g_lit("hi", 2)), &F->fhi_2491);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->fp_2489)), rt_g_lit(" = rt_alloc(sizeof(void *) * (size_t)(", 38)), (*(P137)rt_nil_check(F->fhi_2491))), rt_g_lit(" >= ", 4)), (*(P137)rt_nil_check(F->flo_2490))), rt_g_lit(" \? ", 3)), (*(P137)rt_nil_check(F->fhi_2491))), rt_g_lit(" - ", 3)), (*(P137)rt_nil_check(F->flo_2490))), rt_g_lit(" + 1 : 1));", 11)));
F->has_procs_2484 = 1;
} else if ((!F->has_procs_2484)) {
f_declare_slot_968(F->up, rt_g_lit("void *", 6), cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2492)).cname_)), rt_g_lit("frame", 5)));
f_path_at_941(F->up, (*(P114)rt_nil_check(F->y_2492)).level_, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2492)).cname_)), rt_g_lit("frame", 5)), &F->fp_2489);
f_emit_232(F->up, cat_rt_gstr((*(P137)rt_nil_check(F->fp_2489)), rt_g_lit(" = NULL;", 8)));
F->has_procs_2484 = 1;
}
if (((*(P114)rt_nil_check(F->y_2492)).c_ != NULL)) {
(*(P114)rt_nil_check(F->m_2493)).access_path_ = f_mk_205(F->up, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2492)).cname_)), rt_g_lit("frames", 6)));
} else {
(*(P114)rt_nil_check(F->m_2493)).access_path_ = f_mk_205(F->up, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2492)).cname_)), rt_g_lit("frame", 5)));
}
(*(P114)rt_nil_check(F->m_2493)).members_ = F->y_2492;
}
f_copy_sym_885(F->up, F->m_2493, &F->z_2494);
(*(P114)rt_nil_check(F->z_2494)).hidden_ = (*(P114)rt_nil_check(F->m_2493)).from_use_;
(*(P114)rt_nil_check(F->z_2494)).mnext_ = (*(P114)rt_nil_check(F->y_2492)).members_;
(*(P114)rt_nil_check(F->y_2492)).members_ = F->z_2494;
F->m_2493 = (*(P114)rt_nil_check(F->m_2493)).stack_;
}
L_end_2504: ;
f_close_scope_413(F->up);
F->up->cur_task_180 = F->saved_2495;
f_define_411(F->up, F->y_2492, (*(P171)rt_nil_check(F->e_981)).line_);
ret_:

  return;
}

static void f_entry_decl_984(struct f_greenc_1fr *up_, P171 e_983) {
  struct f_entry_decl_984fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_983 = e_983;
F->y_2505 = NULL;
F->p_2506 = NULL;
F->p_2506 = (*(P171)rt_nil_check(F->e_983)).a_;
F->pm_2507 = NULL;
F->tail_2508 = NULL;
F->fields_2509 = NULL;
F->ct_2510 = NULL;
F->x_2511 = NULL;
F->lo_2512 = NULL;
F->hi_2513 = NULL;
if ((F->up->cur_task_180 == NULL)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_983)).line_, rt_g_lit("an entry is declared in a task (RM79 9.5)", 41));
}
F->y_2505 = f_new_sym_416(F->up, ((rt_int)10LL), (*(P171)rt_nil_check(F->e_983)).name_);
f_new_name_208(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("e_", 2), f_lower_s_216(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_983)).name_)))), one_rt_gstr(95)), &(*(P114)rt_nil_check(F->y_2505)).cname_);
F->fields_2509 = f_mk_205(F->up, rt_g_lit(" int dummy_;", 12));
while ((F->p_2506 != NULL)) {
F->pm_2507 = ({ R1593 *cell2515 = rt_alloc(sizeof(R1593)); *cell2515 = cp_R1593(({ R1593 ag2516; ag2516.name_ = (*(P171)rt_nil_check(F->p_2506)).name_; ag2516.mode_ = (*(P171)rt_nil_check(F->p_2506)).ival_; ag2516.t_ = NULL; ag2516.c_ = NULL; ag2516.cfield_ = NULL; ag2516.dflt_ = NULL; ag2516.next_ = NULL; ag2516; })); (P1592)cell2515; });
f_resolve_446(F->up, (*(P171)rt_nil_check(F->p_2506)).a_, &(*(P1592)rt_nil_check(F->pm_2507)).t_, &(*(P1592)rt_nil_check(F->pm_2507)).c_);
(*(P1592)rt_nil_check(F->pm_2507)).cfield_ = f_mk_205(F->up, f_c_field_222(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->p_2506)).name_))));
f_ctype_430(F->up, (*(P1592)rt_nil_check(F->pm_2507)).t_, &F->ct_2510);
if (((*(P1592)rt_nil_check(F->pm_2507)).mode_ == ((rt_int)1LL))) {
F->fields_2509 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->fields_2509)), one_rt_gstr(32)), (*(P137)rt_nil_check(F->ct_2510))), one_rt_gstr(32)), (*(P137)rt_nil_check((*(P1592)rt_nil_check(F->pm_2507)).cfield_))), one_rt_gstr(59)));
} else {
F->fields_2509 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->fields_2509)), one_rt_gstr(32)), (*(P137)rt_nil_check(F->ct_2510))), rt_g_lit(" *", 2)), (*(P137)rt_nil_check((*(P1592)rt_nil_check(F->pm_2507)).cfield_))), one_rt_gstr(59)));
}
if ((F->tail_2508 == NULL)) {
(*(P114)rt_nil_check(F->y_2505)).params_ = F->pm_2507;
} else {
(*(P1592)rt_nil_check(F->tail_2508)).next_ = F->pm_2507;
}
F->tail_2508 = F->pm_2507;
F->p_2506 = (*(P171)rt_nil_check(F->p_2506)).next_;
}
L_end_2514: ;
if ((!F->up->defer_entry_structs_186)) {
f_put_to_230(F->up, F->up->out_types_125, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2505)).cname_))), rt_g_lit("p {", 3)), (*(P137)rt_nil_check(F->fields_2509))), rt_g_lit(" };", 3)));
}
(*(P114)rt_nil_check(F->y_2505)).result_ = F->up->ty_void_158;
(*(P114)rt_nil_check(F->y_2505)).decl_ = F->e_983;
(*(P114)rt_nil_check(F->y_2505)).members_ = F->up->cur_task_180;
if (F->up->in_func_135) {
(*(P114)rt_nil_check(F->y_2505)).level_ = F->up->cur_level_136;
}
(*(P114)rt_nil_check(F->y_2505)).access_path_ = f_mk_205(F->up, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2505)).cname_)), rt_g_lit("ent", 3)));
f_path_at_941(F->up, (*(P114)rt_nil_check(F->y_2505)).level_, (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2505)).access_path_)), &F->x_2511);
(*(P114)rt_nil_check(F->y_2505)).ro_ = ((((*(P114)rt_nil_check(F->up->cur_task_180)).c_ != NULL) && F->up->in_func_135) && (F->up->cur_level_136 > (*(P114)rt_nil_check(F->up->cur_task_180)).level_));
if (((*(P171)rt_nil_check(F->e_983)).b_ != NULL)) {
if ((((*(P114)rt_nil_check(F->up->cur_task_180)).c_ != NULL) && (!(*(P114)rt_nil_check(F->y_2505)).ro_))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_983)).line_, rt_g_lit("an entry family in a task family is not handled", 47));
}
f_family_bounds_975(F->up, (*(P171)rt_nil_check(F->e_983)).b_, F->y_2505, F->x_2511);
} else if ((((*(P114)rt_nil_check(F->up->cur_task_180)).c_ != NULL) && (!(*(P114)rt_nil_check(F->y_2505)).ro_))) {
f_declare_slot_968(F->up, rt_g_lit("rt_entry *", 10), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2505)).access_path_)));
f_path_at_941(F->up, (*(P114)rt_nil_check(F->up->cur_task_180)).level_, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->up->cur_task_180)).cname_)), rt_g_lit("lo", 2)), &F->lo_2512);
f_path_at_941(F->up, (*(P114)rt_nil_check(F->up->cur_task_180)).level_, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->up->cur_task_180)).cname_)), rt_g_lit("hi", 2)), &F->hi_2513);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->x_2511)), rt_g_lit(" = rt_alloc(sizeof(rt_entry) * (size_t)(", 40)), (*(P137)rt_nil_check(F->hi_2513))), rt_g_lit(" >= ", 4)), (*(P137)rt_nil_check(F->lo_2512))), rt_g_lit(" \? ", 3)), (*(P137)rt_nil_check(F->hi_2513))), rt_g_lit(" - ", 3)), (*(P137)rt_nil_check(F->lo_2512))), rt_g_lit(" + 1 : 1));", 11)));
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = 0; k_ <= ", 26), (*(P137)rt_nil_check(F->hi_2513))), rt_g_lit(" - ", 3)), (*(P137)rt_nil_check(F->lo_2512))), rt_g_lit("; k_++) rt_entry_init(&", 23)), (*(P137)rt_nil_check(F->x_2511))), rt_g_lit("[k_]);", 6)));
} else {
f_declare_slot_968(F->up, rt_g_lit("rt_entry", 8), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2505)).access_path_)));
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_entry_init(&", 15), (*(P137)rt_nil_check(F->x_2511))), rt_g_lit(");", 2)));
}
f_define_411(F->up, F->y_2505, (*(P171)rt_nil_check(F->e_983)).line_);
ret_:

  return;
}

static void f_task_body_986(struct f_greenc_1fr *up_, P171 e_985) {
  struct f_task_body_986fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_985 = e_985;
F->y_2517 = NULL;
F->y_2517 = f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_985)).name_)));
F->b_2518 = NULL;
F->m_2519 = NULL;
F->z_2520 = NULL;
F->upp_2521 = NULL;
F->saved_2522 = NULL;
F->saved_2522 = F->up->cur_task_180;
if (((F->y_2517 != NULL) && ((*(P114)rt_nil_check(F->y_2517)).kind_ == ((rt_int)11LL)))) {
f_attach_generic_body_1066(F->up, F->e_985);
goto ret_;
}
if (((F->y_2517 == NULL) || ((*(P114)rt_nil_check(F->y_2517)).kind_ != ((rt_int)9LL)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_985)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("task body ", 10), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_985)).name_))), rt_g_lit(" has no task specification", 26)));
}
F->b_2518 = f_new_sym_416(F->up, ((rt_int)4LL), (*(P171)rt_nil_check(F->e_985)).name_);
(*(P114)rt_nil_check(F->b_2518)).cname_ = f_mk_205(F->up, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2517)).cname_)), rt_g_lit("body", 4)));
(*(P114)rt_nil_check(F->b_2518)).result_ = F->up->ty_void_158;
(*(P114)rt_nil_check(F->b_2518)).level_ = F->up->cur_level_136;
(*(P114)rt_nil_check(F->b_2518)).decl_ = F->e_985;
if (((*(P114)rt_nil_check(F->y_2517)).c_ != NULL)) {
(*(P114)rt_nil_check(F->b_2518)).params_ = ({ R1593 *cell2523 = rt_alloc(sizeof(R1593)); *cell2523 = cp_R1593(({ R1593 ag2524; ag2524.name_ = f_mk_205(F->up, rt_g_lit("INDEX_", 6)); ag2524.mode_ = ((rt_int)1LL); ag2524.t_ = F->up->ty_int_153; ag2524.c_ = NULL; ag2524.cfield_ = f_mk_205(F->up, rt_g_lit("index_", 6)); ag2524.dflt_ = NULL; ag2524.next_ = NULL; ag2524; })); (P1592)cell2523; });
}
f_open_scope_412(F->up);
F->m_2519 = (*(P114)rt_nil_check(F->y_2517)).members_;
while ((F->m_2519 != NULL)) {
f_copy_sym_885(F->up, F->m_2519, &F->z_2520);
f_define_411(F->up, F->z_2520, (*(P171)rt_nil_check(F->e_985)).line_);
if ((((((*(P114)rt_nil_check(F->m_2519)).kind_ == ((rt_int)3LL)) || ((*(P114)rt_nil_check(F->m_2519)).kind_ == ((rt_int)4LL))) && ((*(P114)rt_nil_check(F->m_2519)).access_path_ != NULL)) && f_same_task_386(F->up, (*(P114)rt_nil_check(F->m_2519)).members_, F->y_2517))) {
if (((*(P114)rt_nil_check(F->y_2517)).level_ > ((rt_int)0LL))) {
F->upp_2521 = f_mk_205(F->up, rt_g_lit("up_->", 5));
} else {
F->upp_2521 = f_mk_205(F->up, rt_g_lit("", 0));
}
if (((*(P114)rt_nil_check(F->y_2517)).c_ != NULL)) {
(*(P114)rt_nil_check(F->b_2518)).access_path_ = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->upp_2521)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->m_2519)).access_path_))), rt_g_lit("[index_ - ", 10)), (*(P137)rt_nil_check(F->upp_2521))), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2517)).cname_))), rt_g_lit("lo] = F;", 8)));
} else {
(*(P114)rt_nil_check(F->b_2518)).access_path_ = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->upp_2521)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->m_2519)).access_path_))), rt_g_lit(" = F;", 5)));
}
}
F->m_2519 = (*(P114)rt_nil_check(F->m_2519)).mnext_;
}
L_end_2525: ;
F->up->cur_task_180 = F->y_2517;
f_subprogram_body_592(F->up, F->e_985, F->b_2518);
F->up->cur_task_180 = F->saved_2522;
f_close_scope_413(F->up);
if ((((*(P114)rt_nil_check(F->y_2517)).c_ != NULL) && ((*(P114)rt_nil_check(F->b_2518)).level_ > ((rt_int)0LL)))) {
f_put_to_230(F->up, F->up->out_funcs_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2517)).cname_))), rt_g_lit("run(void *a) { struct rt_famarg *g = a; ", 40)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->b_2518)).cname_))), rt_g_lit("(g->up, g->i); }", 16)));
} else if (((*(P114)rt_nil_check(F->y_2517)).c_ != NULL)) {
f_put_to_230(F->up, F->up->out_funcs_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2517)).cname_))), rt_g_lit("run(void *a) { struct rt_famarg *g = a; ", 40)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->b_2518)).cname_))), rt_g_lit("(g->i); }", 9)));
} else if (((*(P114)rt_nil_check(F->b_2518)).level_ > ((rt_int)0LL))) {
f_put_to_230(F->up, F->up->out_funcs_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2517)).cname_))), rt_g_lit("run(void *a) { ", 15)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->b_2518)).cname_))), rt_g_lit("(a); }", 6)));
} else {
f_put_to_230(F->up, F->up->out_funcs_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2517)).cname_))), rt_g_lit("run(void *a) { (void)a; ", 24)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->b_2518)).cname_))), rt_g_lit("(); }", 5)));
}
ret_:

  return;
}

static void f_task_awaits_989(struct f_greenc_1fr *up_, P171 decls_987, P137 *aw_988) {
  struct f_task_awaits_989fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_987 = decls_987;
F->aw_988 = aw_988;
F->e_2526 = NULL;
F->e_2526 = F->decls_987;
F->y_2527 = NULL;
F->p_2528 = NULL;
(*F->aw_988) = f_mk_205(F->up, rt_g_lit("", 0));
while ((F->e_2526 != NULL)) {
if ((((*(P171)rt_nil_check(F->e_2526)).kind_ == ((rt_int)50LL)) || (((*(P171)rt_nil_check(F->e_2526)).kind_ == ((rt_int)53LL)) && ((*(P171)rt_nil_check(F->e_2526)).ival_ == ((rt_int)50LL))))) {
F->y_2527 = f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_2526)).name_)));
f_path_at_941(F->up, (*(P114)rt_nil_check(F->y_2527)).level_, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2527)).cname_)), rt_g_lit("decl", 4)), &F->p_2528);
(*F->aw_988) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check((*F->aw_988))), rt_g_lit(" rt_await_decl(&", 16)), (*(P137)rt_nil_check(F->p_2528))), rt_g_lit(");", 2)));
}
F->e_2526 = (*(P171)rt_nil_check(F->e_2526)).next_;
}
L_end_2529: ;
ret_:

  return;
}

static void f_task_failure_991(struct f_greenc_1fr *up_, P171 s_990) {
  struct f_task_failure_991fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_990 = s_990;
F->y_2530 = NULL;
F->y_2530 = f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->s_990)).tag_)));
F->a_2531 = NULL;
F->i_2532 = NULL;
F->it_2533 = NULL;
if (((*(P171)rt_nil_check(F->s_990)).a_ != NULL)) {
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->s_990)).a_, (*(P114)rt_nil_check(F->y_2530)).t_, &F->it_2533, &F->i_2532);
f_act_path_i_961(F->up, F->y_2530, (*(P137)rt_nil_check(F->i_2532)), &F->a_2531);
} else {
f_act_path_957(F->up, F->y_2530, &F->a_2531);
}
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_exterminate(&", 16), (*(P137)rt_nil_check(F->a_2531))), rt_g_lit(");", 2)));
ret_:

  return;
}

static void f_entry_sym_995(struct f_greenc_1fr *up_, P171 e_992, P114 *y_993, P171 *ix_994) {
  struct f_entry_sym_995fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_992 = e_992;
F->y_993 = y_993;
F->ix_994 = ix_994;
F->t_2534 = NULL;
(*F->ix_994) = NULL;
F->up->fam_ix_183 = NULL;
if (((*(P171)rt_nil_check(F->e_992)).kind_ == ((rt_int)8LL))) {
f_entry_sym_995(F->up, (*(P171)rt_nil_check(F->e_992)).a_, &(*F->y_993), &(*F->ix_994));
if (((*(P114)rt_nil_check((*F->y_993))).c_ == NULL)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_992)).line_, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check((*F->y_993))).name_)), rt_g_lit(" is not an entry family", 23)));
}
F->up->fam_ix_183 = (*(P171)rt_nil_check(F->e_992)).b_;
goto ret_;
}
if (((((*(P171)rt_nil_check(F->e_992)).kind_ == ((rt_int)9LL)) && ((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_992)).a_)).kind_ == ((rt_int)8LL))) && ((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_992)).a_)).a_)).kind_ == ((rt_int)5LL)))) {
F->t_2534 = f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_992)).a_)).a_)).name_)));
if ((((F->t_2534 == NULL) || ((*(P114)rt_nil_check(F->t_2534)).kind_ != ((rt_int)9LL))) || ((*(P114)rt_nil_check(F->t_2534)).c_ == NULL))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_992)).line_, cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_992)).a_)).a_)).name_)), rt_g_lit(" is not a task family", 21)));
}
(*F->y_993) = f_member_of_880(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_992)).a_)).a_)).name_)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_992)).name_)), (*(P171)rt_nil_check(F->e_992)).line_);
(*F->ix_994) = (*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_992)).a_)).b_;
if ((((*F->y_993) == NULL) || ((*(P114)rt_nil_check((*F->y_993))).kind_ != ((rt_int)10LL)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_992)).line_, rt_g_lit("not an entry", 12));
}
goto ret_;
}
if (((*(P171)rt_nil_check(F->e_992)).kind_ == ((rt_int)5LL))) {
(*F->y_993) = f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_992)).name_)));
if (((*(P171)rt_nil_check(F->e_992)).tag_ != NULL)) {
(*F->y_993) = f_member_of_880(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_992)).tag_)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_992)).name_)), (*(P171)rt_nil_check(F->e_992)).line_);
}
} else if ((((*(P171)rt_nil_check(F->e_992)).kind_ == ((rt_int)9LL)) && f_is_package_876(F->up, (*(P171)rt_nil_check(F->e_992)).a_))) {
(*F->y_993) = f_member_of_880(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->e_992)).a_)).name_)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_992)).name_)), (*(P171)rt_nil_check(F->e_992)).line_);
} else {
(*F->y_993) = NULL;
}
if ((((*F->y_993) == NULL) || ((*(P114)rt_nil_check((*F->y_993))).kind_ != ((rt_int)10LL)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_992)).line_, rt_g_lit("not an entry", 12));
}
ret_:

  return;
}

static void f_other_call_1000(struct f_greenc_1fr *up_, P171 e_996, int is_stmt_997, P119 *t_998, P137 *r_999) {
  struct f_other_call_1000fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_996 = e_996;
F->is_stmt_997 = is_stmt_997;
F->t_998 = t_998;
F->r_999 = r_999;
F->y_2535 = NULL;
F->pm_2536 = NULL;
F->a_2537 = NULL;
F->parts_2538 = NULL;
F->v_2539 = NULL;
F->lv_2540 = NULL;
F->ent_2541 = NULL;
F->act_2542 = NULL;
F->i_2543 = NULL;
F->vt_2544 = NULL;
F->lt_2545 = NULL;
F->lc_2546 = NULL;
F->ix_2548 = NULL;
F->fix_2549 = NULL;
F->args_node_2550 = NULL;
f_entry_sym_995(F->up, (*(P171)rt_nil_check(F->e_996)).a_, &F->y_2535, &F->ix_2548);
F->fix_2549 = F->up->fam_ix_183;
F->args_node_2550 = (*(P171)rt_nil_check(F->e_996)).b_;
if ((((*(P114)rt_nil_check(F->y_2535)).c_ != NULL) && (F->fix_2549 == NULL))) {
F->fix_2549 = (*(P171)rt_nil_check(F->e_996)).b_;
F->args_node_2550 = NULL;
}
F->i_2543 = f_mk_205(F->up, rt_g_lit("", 0));
if ((F->ix_2548 != NULL)) {
f_gexpr_695(F->up, F->ix_2548, F->up->ty_int_153, &F->vt_2544, &F->i_2543);
} else if (((((*(P114)rt_nil_check(F->y_2535)).members_ != NULL) && ((*(P114)rt_nil_check((*(P114)rt_nil_check(F->y_2535)).members_)).c_ != NULL)) && ((*(P114)rt_nil_check(F->y_2535)).members_ != F->up->cur_task_180))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_996)).line_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("a member of family ", 19), (*(P137)rt_nil_check((*(P114)rt_nil_check((*(P114)rt_nil_check(F->y_2535)).members_)).name_))), rt_g_lit(" must be named: F(I).", 21)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2535)).name_))));
}
if ((!F->is_stmt_997)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_996)).line_, rt_g_lit("an entry call is a statement", 28));
}
if ((F->up->pure_sym_194 != NULL)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_996)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->up->pure_sym_194)).name_))), rt_g_lit(" may not call an entry (RM79 6.5)", 33)));
}
f_entry_path_965(F->up, F->y_2535, (*(P137)rt_nil_check(F->i_2543)), &F->ent_2541);
if (((*(P114)rt_nil_check(F->y_2535)).c_ != NULL)) {
if ((F->fix_2549 == NULL)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_996)).line_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2535)).name_)), rt_g_lit(" is an entry family: name a member, ", 36)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2535)).name_))), rt_g_lit("(I)", 3)));
}
f_gexpr_695(F->up, F->fix_2549, NULL, &F->vt_2544, &F->v_2539);
f_entry_family_slot_980(F->up, F->y_2535, (*(P137)rt_nil_check(F->ent_2541)), (*(P137)rt_nil_check(F->v_2539)), &F->ent_2541);
}
F->parts_2538 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ struct ", 10), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2535)).cname_))), rt_g_lit("p p_;", 5)));
F->pm_2536 = (*(P114)rt_nil_check(F->y_2535)).params_;
while ((F->pm_2536 != NULL)) {
F->a_2537 = f_actual_for_857(F->up, F->args_node_2550, F->pm_2536, (*(P114)rt_nil_check(F->y_2535)).params_);
if ((F->a_2537 == NULL)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_996)).line_, cat_rt_gstr(rt_g_lit("no actual parameter for ", 24), (*(P137)rt_nil_check((*(P1592)rt_nil_check(F->pm_2536)).name_))));
}
if (((*(P1592)rt_nil_check(F->pm_2536)).mode_ == ((rt_int)1LL))) {
f_gexpr_695(F->up, F->a_2537, (*(P1592)rt_nil_check(F->pm_2536)).t_, &F->vt_2544, &F->v_2539);
f_check_type_425(F->up, F->vt_2544, (*(P1592)rt_nil_check(F->pm_2536)).t_, (*(P171)rt_nil_check(F->e_996)).line_);
F->parts_2538 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->parts_2538)), rt_g_lit(" p_.", 4)), (*(P137)rt_nil_check((*(P1592)rt_nil_check(F->pm_2536)).cfield_))), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->v_2539))), one_rt_gstr(59)));
} else {
f_lvalue_651(F->up, F->a_2537, &F->lv_2540, &F->lt_2545, &F->lc_2546, &F->ro_2547);
if (F->ro_2547) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_996)).line_, cat_rt_gstr((*(P137)rt_nil_check((*(P1592)rt_nil_check(F->pm_2536)).name_)), rt_g_lit(" needs a variable", 17)));
}
f_check_type_425(F->up, F->lt_2545, (*(P1592)rt_nil_check(F->pm_2536)).t_, (*(P171)rt_nil_check(F->e_996)).line_);
F->parts_2538 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->parts_2538)), rt_g_lit(" p_.", 4)), (*(P137)rt_nil_check((*(P1592)rt_nil_check(F->pm_2536)).cfield_))), rt_g_lit(" = &", 4)), (*(P137)rt_nil_check(F->lv_2540))), one_rt_gstr(59)));
}
F->pm_2536 = (*(P1592)rt_nil_check(F->pm_2536)).next_;
}
L_end_2551: ;
if ((((*(P114)rt_nil_check(F->y_2535)).members_ != NULL) && ((*(P114)rt_nil_check(F->y_2535)).members_ != F->up->cur_task_180))) {
if ((F->ix_2548 != NULL)) {
f_act_path_i_961(F->up, (*(P114)rt_nil_check(F->y_2535)).members_, (*(P137)rt_nil_check(F->i_2543)), &F->act_2542);
} else {
f_act_path_957(F->up, (*(P114)rt_nil_check(F->y_2535)).members_, &F->act_2542);
}
F->parts_2538 = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->parts_2538)), rt_g_lit(" if (!rt_is_active(&", 20)), (*(P137)rt_nil_check(F->act_2542))), rt_g_lit(")) rt_raise(RT_X_TASKING);", 26)));
}
(*F->t_998) = F->up->ty_void_158;
(*F->r_999) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->parts_2538)), rt_g_lit(" rt_entry_call(&", 16)), (*(P137)rt_nil_check(F->ent_2541))), rt_g_lit(", &p_); })", 10)));
ret_:

  return;
}

static void f_other_attr_1005(struct f_greenc_1fr *up_, P171 e_1001, P114 y_1002, P119 *t_1003, P137 *r_1004) {
  struct f_other_attr_1005fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1001 = e_1001;
F->y_1002 = y_1002;
F->t_1003 = t_1003;
F->r_1004 = r_1004;
F->a_2552 = cp_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_1001)).name_)));
F->p_2553 = NULL;
if ((((*(P114)rt_nil_check(F->y_1002)).kind_ == ((rt_int)9LL)) && eq_rt_gstr(F->a_2552, rt_g_lit("INDEX", 5)))) {
if (((*(P114)rt_nil_check(F->y_1002)).c_ == NULL)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_1001)).line_, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1002)).name_)), rt_g_lit(" is not a task family", 21)));
}
f_own_index_949(F->up, &F->p_2553);
(*F->t_1003) = F->up->ty_int_153;
if (((*(P114)rt_nil_check(F->y_1002)).t_ != NULL)) {
(*F->t_1003) = (*(P114)rt_nil_check(F->y_1002)).t_;
}
(*F->r_1004) = F->p_2553;
} else if ((((*(P114)rt_nil_check(F->y_1002)).kind_ == ((rt_int)9LL)) && eq_rt_gstr(F->a_2552, rt_g_lit("ACTIVE", 6)))) {
f_act_path_957(F->up, F->y_1002, &F->p_2553);
(*F->t_1003) = F->up->ty_bool_154;
(*F->r_1004) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_is_active(&", 14), (*(P137)rt_nil_check(F->p_2553))), one_rt_gstr(41)));
} else if ((((*(P114)rt_nil_check(F->y_1002)).kind_ == ((rt_int)9LL)) && eq_rt_gstr(F->a_2552, rt_g_lit("PRIORITY", 8)))) {
f_act_path_957(F->up, F->y_1002, &F->p_2553);
(*F->t_1003) = F->up->ty_int_153;
(*F->r_1004) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_priority(&", 13), (*(P137)rt_nil_check(F->p_2553))), one_rt_gstr(41)));
} else if ((((*(P114)rt_nil_check(F->y_1002)).kind_ == ((rt_int)10LL)) && eq_rt_gstr(F->a_2552, rt_g_lit("COUNT", 5)))) {
if (((*(P114)rt_nil_check(F->y_1002)).members_ != F->up->cur_task_180)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_1001)).line_, rt_g_lit("E'COUNT is allowed only in the body of the task (RM79 9.9)", 58));
}
f_entry_path_965(F->up, F->y_1002, rt_g_lit("", 0), &F->p_2553);
(*F->t_1003) = F->up->ty_int_153;
(*F->r_1004) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_entry_count(&", 16), (*(P137)rt_nil_check(F->p_2553))), one_rt_gstr(41)));
} else {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_1001)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), F->a_2552), rt_g_lit(" is not handled here", 20)));
(*F->t_1003) = F->up->ty_int_153;
(*F->r_1004) = NULL;
}
ret_:

  return;
}

static void f_member_attr_1009(struct f_greenc_1fr *up_, P171 e_1006, P119 *t_1007, P137 *r_1008) {
  struct f_member_attr_1009fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1006 = e_1006;
F->t_1007 = t_1007;
F->r_1008 = r_1008;
F->y_2554 = NULL;
F->ix_2555 = NULL;
F->i_2556 = NULL;
F->p_2557 = NULL;
F->vt_2558 = NULL;
f_task_of_947(F->up, (*(P171)rt_nil_check(F->e_1006)).a_, &F->y_2554, &F->ix_2555);
f_gexpr_695(F->up, F->ix_2555, F->up->ty_int_153, &F->vt_2558, &F->i_2556);
f_act_path_i_961(F->up, F->y_2554, (*(P137)rt_nil_check(F->i_2556)), &F->p_2557);
if (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_1006)).name_)), rt_g_lit("ACTIVE", 6))) {
(*F->t_1007) = F->up->ty_bool_154;
(*F->r_1008) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_is_active(&", 14), (*(P137)rt_nil_check(F->p_2557))), one_rt_gstr(41)));
} else if (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_1006)).name_)), rt_g_lit("PRIORITY", 8))) {
(*F->t_1007) = F->up->ty_int_153;
(*F->r_1008) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_priority(&", 13), (*(P137)rt_nil_check(F->p_2557))), one_rt_gstr(41)));
} else {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_1006)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_1006)).name_))), rt_g_lit(" is not handled for a family member", 35)));
(*F->t_1007) = F->up->ty_int_153;
(*F->r_1008) = NULL;
}
ret_:

  return;
}

static void f_task_builtin_1015(struct f_greenc_1fr *up_, rt_gstr name_1010, P171 args_1011, rt_int line_1012, P119 *t_1013, P137 *r_1014) {
  struct f_task_builtin_1015fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1010 = cp_rt_gstr(name_1010);
F->args_1011 = args_1011;
F->line_1012 = line_1012;
F->t_1013 = t_1013;
F->r_1014 = r_1014;
F->vt_2559 = NULL;
F->v_2560 = NULL;
(*F->t_1013) = F->up->ty_void_158;
if (eq_rt_gstr(F->name_1010, rt_g_lit("SET_PRIORITY", 12))) {
f_gexpr_695(F->up, F->args_1011, F->up->ty_int_153, &F->vt_2559, &F->v_2560);
(*F->r_1014) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_set_priority(rt_me(), ", 25), (*(P137)rt_nil_check(F->v_2560))), one_rt_gstr(41)));
} else {
f_fail_226(F->up, F->line_1012, cat_rt_gstr(F->name_1010, rt_g_lit(" is not declared", 16)));
(*F->r_1014) = NULL;
}
ret_:

  return;
}

static void f_gen_accept_1017(struct f_greenc_1fr *up_, P171 s_1016) {
  struct f_gen_accept_1017fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1016 = s_1016;
F->y_2561 = NULL;
F->y_2561 = f_lookup_entry_389(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->s_1016)).name_)), F->up->cur_task_180);
F->saved_ax_2562 = NULL;
F->ent_2563 = NULL;
F->ep_2564 = NULL;
F->xf_2565 = NULL;
F->x_2566 = NULL;
F->pm_2567 = NULL;
F->f_2568 = NULL;
F->f_2568 = (*(P171)rt_nil_check(F->s_1016)).a_;
F->p_2569 = NULL;
if (((F->y_2561 == NULL) || ((*(P114)rt_nil_check(F->y_2561)).kind_ != ((rt_int)10LL)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->s_1016)).line_, cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->s_1016)).name_)), rt_g_lit(" is not an entry", 16)));
}
if ((!f_same_task_386(F->up, (*(P114)rt_nil_check(F->y_2561)).members_, F->up->cur_task_180))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->s_1016)).line_, rt_g_lit("a task accepts only its own entries (RM79 9.5)", 46));
}
f_entry_path_965(F->up, F->y_2561, rt_g_lit("", 0), &F->ent_2563);
f_member_slot_1021(F->up, F->y_2561, F->s_1016, &F->ent_2563);
if (((*(P171)rt_nil_check(F->s_1016)).flag_ == ((rt_int)0LL))) {
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_accept_begin(&", 19), (*(P137)rt_nil_check(F->ent_2563))), rt_g_lit("); rt_accept_end(&", 18)), (*(P137)rt_nil_check(F->ent_2563))), rt_g_lit(", 0, 0); }", 10)));
goto ret_;
}
f_new_name_208(F->up, rt_g_lit("ep", 2), &F->ep_2564);
f_new_name_208(F->up, rt_g_lit("xf", 2), &F->xf_2565);
f_new_name_208(F->up, rt_g_lit("x", 1), &F->x_2566);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ struct ", 9), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2561)).cname_))), rt_g_lit("p *", 3)), (*(P137)rt_nil_check(F->ep_2564))), rt_g_lit(" = rt_accept_begin(&", 20)), (*(P137)rt_nil_check(F->ent_2563))), rt_g_lit(");", 2)));
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_frame ", 9), (*(P137)rt_nil_check(F->xf_2565))), one_rt_gstr(59)));
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (RT_TRY(", 11), (*(P137)rt_nil_check(F->xf_2565))), rt_g_lit(")) {", 4)));
f_push_cleanup_598(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P137)rt_nil_check(F->xf_2565))), rt_g_lit("); rt_accept_end(&", 18)), (*(P137)rt_nil_check(F->ent_2563))), rt_g_lit(", 0, 0);", 8)));
f_open_scope_412(F->up);
F->pm_2567 = (*(P114)rt_nil_check(F->y_2561)).params_;
while ((F->pm_2567 != NULL)) {
if (((*(P1592)rt_nil_check(F->pm_2567)).mode_ == ((rt_int)1LL))) {
F->p_2569 = f_new_sym_416(F->up, ((rt_int)2LL), (*(P1592)rt_nil_check(F->pm_2567)).name_);
(*(P114)rt_nil_check(F->p_2569)).ro_ = 1;
(*(P114)rt_nil_check(F->p_2569)).access_path_ = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P137)rt_nil_check(F->ep_2564))), rt_g_lit("->", 2)), (*(P137)rt_nil_check((*(P1592)rt_nil_check(F->pm_2567)).cfield_))), one_rt_gstr(41)));
} else {
F->p_2569 = f_new_sym_416(F->up, ((rt_int)1LL), (*(P1592)rt_nil_check(F->pm_2567)).name_);
(*(P114)rt_nil_check(F->p_2569)).access_path_ = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*", 2), (*(P137)rt_nil_check(F->ep_2564))), rt_g_lit("->", 2)), (*(P137)rt_nil_check((*(P1592)rt_nil_check(F->pm_2567)).cfield_))), one_rt_gstr(41)));
}
if ((F->f_2568 != NULL)) {
(*(P114)rt_nil_check(F->p_2569)).name_ = (*(P171)rt_nil_check(F->f_2568)).name_;
F->f_2568 = (*(P171)rt_nil_check(F->f_2568)).next_;
}
(*(P114)rt_nil_check(F->p_2569)).t_ = (*(P1592)rt_nil_check(F->pm_2567)).t_;
(*(P114)rt_nil_check(F->p_2569)).c_ = (*(P1592)rt_nil_check(F->pm_2567)).c_;
f_define_411(F->up, F->p_2569, (*(P171)rt_nil_check(F->s_1016)).line_);
F->pm_2567 = (*(P1592)rt_nil_check(F->pm_2567)).next_;
}
L_end_2570: ;
F->up->accept_depth_181 = rt_add(F->up->accept_depth_181, ((rt_int)1LL));
F->saved_ax_2562 = F->up->accept_exits_146;
F->up->accept_exits_146 = F->up->exits_142;
f_gen_statements_594(F->up, (*(P171)rt_nil_check(F->s_1016)).b_);
F->up->accept_exits_146 = F->saved_ax_2562;
F->up->accept_depth_181 = rt_sub(F->up->accept_depth_181, ((rt_int)1LL));
f_close_scope_413(F->up);
f_pop_cleanup_599(F->up);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P137)rt_nil_check(F->xf_2565))), rt_g_lit("); rt_accept_end(&", 18)), (*(P137)rt_nil_check(F->ent_2563))), rt_g_lit(", 0, 0);", 8)));
f_emit_232(F->up, rt_g_lit("} else {", 8));
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P137)rt_nil_check(F->xf_2565))), rt_g_lit("); int ", 7)), (*(P137)rt_nil_check(F->x_2566))), rt_g_lit(" = rt_xcur; rt_accept_end(&", 27)), (*(P137)rt_nil_check(F->ent_2563))), rt_g_lit(", 1, ", 5)), (*(P137)rt_nil_check(F->x_2566))), rt_g_lit("); rt_raise(", 12)), (*(P137)rt_nil_check(F->x_2566))), rt_g_lit(");", 2)));
f_emit_232(F->up, rt_g_lit("}", 1));
f_emit_232(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_member_slot_1021(struct f_greenc_1fr *up_, P114 y_1018, P171 s_1019, P137 *ent_1020) {
  struct f_member_slot_1021fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1018 = y_1018;
F->s_1019 = s_1019;
F->ent_1020 = ent_1020;
F->vt_2571 = NULL;
F->v_2572 = NULL;
if (((*(P114)rt_nil_check(F->y_1018)).c_ != NULL)) {
if (((*(P171)rt_nil_check(F->s_1019)).c_ == NULL)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->s_1019)).line_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1018)).name_)), rt_g_lit(" is an entry family: accept ", 28)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1018)).name_))), rt_g_lit("(I)", 3)));
}
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->s_1019)).c_, NULL, &F->vt_2571, &F->v_2572);
f_entry_family_slot_980(F->up, F->y_1018, (*(P137)rt_nil_check((*F->ent_1020))), (*(P137)rt_nil_check(F->v_2572)), &(*F->ent_1020));
} else if (((*(P171)rt_nil_check(F->s_1019)).c_ != NULL)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->s_1019)).line_, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1018)).name_)), rt_g_lit(" is not an entry family", 23)));
}
ret_:

  return;
}

static void f_gen_delay_ticks_1024(struct f_greenc_1fr *up_, P171 e_1022, P137 *r_1023) {
  struct f_gen_delay_ticks_1024fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1022 = e_1022;
F->r_1023 = r_1023;
F->vt_2573 = NULL;
F->v_2574 = NULL;
f_gexpr_695(F->up, F->e_1022, F->up->ty_time_168, &F->vt_2573, &F->v_2574);
f_check_type_425(F->up, F->vt_2573, F->up->ty_time_168, (*(P171)rt_nil_check(F->e_1022)).line_);
(*F->r_1023) = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(rt_int)llround(", 16), (*(P137)rt_nil_check(F->v_2574))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_gen_select_1026(struct f_greenc_1fr *up_, P171 s_1025) {
  struct f_gen_select_1026fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1025 = s_1025;
F->alt_2575 = NULL;
F->alt_2575 = (*(P171)rt_nil_check(F->s_1025)).a_;
F->n_2576 = ((rt_int)0LL);
F->has_delay_2578 = 0;
F->has_accept_2579 = 0;
F->al_2580 = NULL;
F->w_2581 = NULL;
F->g_2582 = NULL;
F->ent_2583 = NULL;
F->ticks_2584 = NULL;
F->vt_2585 = NULL;
F->y_2586 = NULL;
f_new_name_208(F->up, rt_g_lit("al", 2), &F->al_2580);
f_new_name_208(F->up, rt_g_lit("w", 1), &F->w_2581);
while ((F->alt_2575 != NULL)) {
F->n_2576 = rt_add(F->n_2576, ((rt_int)1LL));
if (((*(P171)rt_nil_check((*(P171)rt_nil_check(F->alt_2575)).b_)).kind_ == ((rt_int)32LL))) {
F->has_delay_2578 = 1;
} else {
F->has_accept_2579 = 1;
}
F->alt_2575 = (*(P171)rt_nil_check(F->alt_2575)).next_;
}
L_end_2587: ;
if ((((*(P171)rt_nil_check(F->s_1025)).flag_ == ((rt_int)1LL)) && F->has_delay_2578)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->s_1025)).line_, rt_g_lit("a select cannot have both delay alternatives and an else part (RM79 9.7)", 72));
}
if ((!F->has_accept_2579)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->s_1025)).line_, rt_g_lit("a select needs at least one accept alternative (RM79 9.7)", 57));
}
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_alt ", 9), (*(P137)rt_nil_check(F->al_2580))), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(rt_add(F->n_2576, ((rt_int)1LL))))), rt_g_lit("]; int open_ = 0;", 17)));
F->alt_2575 = (*(P171)rt_nil_check(F->s_1025)).a_;
F->i_2577 = ((rt_int)0LL);
while ((F->alt_2575 != NULL)) {
F->g_2582 = f_mk_205(F->up, rt_g_lit("1", 1));
if (((*(P171)rt_nil_check(F->alt_2575)).a_ != NULL)) {
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->alt_2575)).a_, F->up->ty_bool_154, &F->vt_2585, &F->g_2582);
f_check_type_425(F->up, F->vt_2585, F->up->ty_bool_154, (*(P171)rt_nil_check(F->alt_2575)).line_);
}
if (((*(P171)rt_nil_check((*(P171)rt_nil_check(F->alt_2575)).b_)).kind_ == ((rt_int)34LL))) {
F->y_2586 = f_lookup_entry_389(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->alt_2575)).b_)).name_)), F->up->cur_task_180);
if (((F->y_2586 == NULL) || ((*(P114)rt_nil_check(F->y_2586)).kind_ != ((rt_int)10LL)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->alt_2575)).line_, cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check((*(P171)rt_nil_check(F->alt_2575)).b_)).name_)), rt_g_lit(" is not an entry", 16)));
}
f_entry_path_965(F->up, F->y_2586, rt_g_lit("", 0), &F->ent_2583);
f_member_slot_1021(F->up, F->y_2586, (*(P171)rt_nil_check(F->alt_2575)).b_, &F->ent_2583);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->al_2580)), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(F->i_2577))), rt_g_lit("] = (rt_alt){RT_ALT_ACCEPT, (", 29)), (*(P137)rt_nil_check(F->g_2582))), rt_g_lit("), &", 4)), (*(P137)rt_nil_check(F->ent_2583))), rt_g_lit(", NULL, 0};", 11)));
} else {
f_gen_delay_ticks_1024(F->up, (*(P171)rt_nil_check((*(P171)rt_nil_check(F->alt_2575)).b_)).a_, &F->ticks_2584);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->al_2580)), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(F->i_2577))), rt_g_lit("] = (rt_alt){RT_ALT_DELAY, (", 28)), (*(P137)rt_nil_check(F->g_2582))), rt_g_lit("), NULL, NULL, ", 15)), (*(P137)rt_nil_check(F->ticks_2584))), rt_g_lit("};", 2)));
}
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("open_ |= ", 9), (*(P137)rt_nil_check(F->al_2580))), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(F->i_2577))), rt_g_lit("].open;", 7)));
F->i_2577 = rt_add(F->i_2577, ((rt_int)1LL));
F->alt_2575 = (*(P171)rt_nil_check(F->alt_2575)).next_;
}
L_end_2588: ;
if (((*(P171)rt_nil_check(F->s_1025)).flag_ == ((rt_int)1LL))) {
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->al_2580)), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(F->n_2576))), rt_g_lit("] = (rt_alt){RT_ALT_ELSE, 1, NULL, NULL, 0};", 44)));
F->n_2576 = rt_add(F->n_2576, ((rt_int)1LL));
} else {
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (!open_) rt_raise(rt_exc(", 28), f_q_223(F->up)), rt_g_lit("SELECT_ERROR", 12)), f_q_223(F->up)), rt_g_lit("));", 3)));
}
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("int ", 4), (*(P137)rt_nil_check(F->w_2581))), rt_g_lit(" = rt_wait(", 11)), rt_g_s2g(rt_str_of_int(F->n_2576))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check(F->al_2580))), rt_g_lit(");", 2)));
F->alt_2575 = (*(P171)rt_nil_check(F->s_1025)).a_;
F->i_2577 = ((rt_int)0LL);
while ((F->alt_2575 != NULL)) {
if ((F->i_2577 == ((rt_int)0LL))) {
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P137)rt_nil_check(F->w_2581))), rt_g_lit(" == 0) {", 8)));
} else {
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P137)rt_nil_check(F->w_2581))), rt_g_lit(" == ", 4)), rt_g_s2g(rt_str_of_int(F->i_2577))), rt_g_lit(") {", 3)));
}
if (((*(P171)rt_nil_check((*(P171)rt_nil_check(F->alt_2575)).b_)).kind_ == ((rt_int)34LL))) {
f_gen_accept_1017(F->up, (*(P171)rt_nil_check(F->alt_2575)).b_);
}
f_gen_statements_594(F->up, (*(P171)rt_nil_check(F->alt_2575)).c_);
F->i_2577 = rt_add(F->i_2577, ((rt_int)1LL));
F->alt_2575 = (*(P171)rt_nil_check(F->alt_2575)).next_;
}
L_end_2589: ;
if (((*(P171)rt_nil_check(F->s_1025)).flag_ == ((rt_int)1LL))) {
f_emit_232(F->up, rt_g_lit("} else {", 8));
f_gen_statements_594(F->up, (*(P171)rt_nil_check(F->s_1025)).b_);
}
f_emit_232(F->up, rt_g_lit("}", 1));
f_emit_232(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_family_range_1031(struct f_greenc_1fr *up_, P114 y_1027, P171 ix_1028, P137 *lo_1029, P137 *hi_1030) {
  struct f_family_range_1031fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1027 = y_1027;
F->ix_1028 = ix_1028;
F->lo_1029 = lo_1029;
F->hi_1030 = hi_1030;
F->vt_2590 = NULL;
if ((F->ix_1028 == NULL)) {
f_path_at_941(F->up, (*(P114)rt_nil_check(F->y_1027)).level_, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1027)).cname_)), rt_g_lit("lo", 2)), &(*F->lo_1029));
f_path_at_941(F->up, (*(P114)rt_nil_check(F->y_1027)).level_, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1027)).cname_)), rt_g_lit("hi", 2)), &(*F->hi_1030));
} else if (((*(P171)rt_nil_check(F->ix_1028)).kind_ == ((rt_int)14LL))) {
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->ix_1028)).a_, F->up->ty_int_153, &F->vt_2590, &(*F->lo_1029));
f_gexpr_695(F->up, (*(P171)rt_nil_check(F->ix_1028)).b_, F->up->ty_int_153, &F->vt_2590, &(*F->hi_1030));
} else {
f_gexpr_695(F->up, F->ix_1028, F->up->ty_int_153, &F->vt_2590, &(*F->lo_1029));
(*F->hi_1030) = (*F->lo_1029);
}
ret_:

  return;
}

static void f_task_statement_gen_1033(struct f_greenc_1fr *up_, P171 s_1032) {
  struct f_task_statement_gen_1033fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1032 = s_1032;
F->n_2591 = NULL;
F->ix_2592 = NULL;
F->y_2593 = NULL;
F->a_2594 = NULL;
F->d_2595 = NULL;
F->l_2596 = NULL;
F->ticks_2597 = NULL;
F->lo_2598 = NULL;
F->hi_2599 = NULL;
{ rt_int sel2600 = (*(P171)rt_nil_check(F->s_1032)).kind_;
if (0 || sel2600 == ((rt_int)32LL)) {
f_gen_delay_ticks_1024(F->up, (*(P171)rt_nil_check(F->s_1032)).a_, &F->ticks_2597);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_delay(", 9), (*(P137)rt_nil_check(F->ticks_2597))), rt_g_lit(");", 2)));
} else if (0 || sel2600 == ((rt_int)33LL)) {
if ((F->up->accept_depth_181 > ((rt_int)0LL))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->s_1032)).line_, rt_g_lit("an accept body cannot initiate a task (RM79 9.5)", 48));
}
F->n_2591 = (*(P171)rt_nil_check(F->s_1032)).a_;
while ((F->n_2591 != NULL)) {
f_task_of_947(F->up, F->n_2591, &F->y_2593, &F->ix_2592);
f_path_at_941(F->up, (*(P114)rt_nil_check(F->y_2593)).level_, cat_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2593)).cname_)), rt_g_lit("decl", 4)), &F->d_2595);
if (((*(P114)rt_nil_check(F->y_2593)).level_ > ((rt_int)0LL))) {
f_link_to_635(F->up, (*(P114)rt_nil_check(F->y_2593)).level_, &F->l_2596);
} else {
F->l_2596 = f_mk_205(F->up, rt_g_lit("NULL", 4));
}
if (((*(P114)rt_nil_check(F->y_2593)).c_ == NULL)) {
f_act_path_957(F->up, F->y_2593, &F->a_2594);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_create(&", 11), (*(P137)rt_nil_check(F->a_2594))), rt_g_lit(", &", 3)), (*(P137)rt_nil_check(F->d_2595))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2593)).cname_))), rt_g_lit("run, ", 5)), (*(P137)rt_nil_check(F->l_2596))), rt_g_lit(");", 2)));
} else {
f_family_range_1031(F->up, F->y_2593, F->ix_2592, &F->lo_2598, &F->hi_2599);
f_act_path_i_961(F->up, F->y_2593, rt_g_lit("k_", 2), &F->a_2594);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = ", 17), (*(P137)rt_nil_check(F->lo_2598))), rt_g_lit("; k_ <= ", 8)), (*(P137)rt_nil_check(F->hi_2599))), rt_g_lit("; k_++) { struct rt_famarg *g_ = rt_alloc(sizeof *g_); g_->up = ", 64)), (*(P137)rt_nil_check(F->l_2596))), rt_g_lit("; g_->i = k_; rt_create(&", 25)), (*(P137)rt_nil_check(F->a_2594))), rt_g_lit(", &", 3)), (*(P137)rt_nil_check(F->d_2595))), rt_g_lit(", ", 2)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2593)).cname_))), rt_g_lit("run, g_); }", 11)));
}
F->n_2591 = (*(P171)rt_nil_check(F->n_2591)).next_;
}
L_end_2601: ;
} else if (0 || sel2600 == ((rt_int)34LL)) {
f_gen_accept_1017(F->up, F->s_1032);
} else if (0 || sel2600 == ((rt_int)35LL)) {
f_gen_select_1026(F->up, F->s_1032);
} else if (0 || sel2600 == ((rt_int)36LL)) {
F->n_2591 = (*(P171)rt_nil_check(F->s_1032)).a_;
while ((F->n_2591 != NULL)) {
f_task_of_947(F->up, F->n_2591, &F->y_2593, &F->ix_2592);
if (((*(P114)rt_nil_check(F->y_2593)).c_ == NULL)) {
f_act_path_957(F->up, F->y_2593, &F->a_2594);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_abort(&", 12), (*(P137)rt_nil_check(F->a_2594))), rt_g_lit(");", 2)));
} else {
f_family_range_1031(F->up, F->y_2593, F->ix_2592, &F->lo_2598, &F->hi_2599);
f_act_path_i_961(F->up, F->y_2593, rt_g_lit("k_", 2), &F->a_2594);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = ", 17), (*(P137)rt_nil_check(F->lo_2598))), rt_g_lit("; k_ <= ", 8)), (*(P137)rt_nil_check(F->hi_2599))), rt_g_lit("; k_++) rt_g_abort(&", 20)), (*(P137)rt_nil_check(F->a_2594))), rt_g_lit(");", 2)));
}
F->n_2591 = (*(P171)rt_nil_check(F->n_2591)).next_;
}
L_end_2602: ;
} else {
f_fail_226(F->up, (*(P171)rt_nil_check(F->s_1032)).line_, rt_g_lit("this statement is not handled", 29));
}
}
ret_:

  return;
}

static P171 f_root_name_1035(struct f_greenc_1fr *up_, P171 e_1034) {
  struct f_root_name_1035fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1034 = e_1034;
if (((*(P171)rt_nil_check(F->e_1034)).kind_ == ((rt_int)5LL))) {
F->result_ = F->e_1034;
goto ret_;
} else if (((((*(P171)rt_nil_check(F->e_1034)).kind_ == ((rt_int)9LL)) || ((*(P171)rt_nil_check(F->e_1034)).kind_ == ((rt_int)8LL))) || ((*(P171)rt_nil_check(F->e_1034)).kind_ == ((rt_int)15LL)))) {
F->result_ = f_root_name_1035(F->up, (*(P171)rt_nil_check(F->e_1034)).a_);
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_pure_target_1038(struct f_greenc_1fr *up_, P171 target_1036, rt_int line_1037) {
  struct f_check_pure_target_1038fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->target_1036 = target_1036;
F->line_1037 = line_1037;
F->n_2603 = NULL;
F->y_2604 = NULL;
if ((F->up->pure_sym_194 == NULL)) {
goto ret_;
}
if (F->up->last_deref_198) {
f_fail_226(F->up, F->line_1037, cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->up->pure_sym_194)).name_))), rt_g_lit(" may not change an object designated by an access value (RM79 6.5)", 66)));
}
F->n_2603 = f_root_name_1035(F->up, F->target_1036);
if ((F->n_2603 != NULL)) {
F->y_2604 = f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->n_2603)).name_)));
if ((((F->y_2604 != NULL) && ((*(P114)rt_nil_check(F->y_2604)).kind_ == ((rt_int)1LL))) && ((*(P114)rt_nil_check(F->y_2604)).depth_ < F->up->pure_depth_195))) {
f_fail_226(F->up, F->line_1037, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->up->pure_sym_194)).name_))), rt_g_lit(" may not assign to ", 19)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->n_2603)).name_))), rt_g_lit(", which is not local to it (RM79 6.5)", 37)));
}
}
ret_:

  return;
}

static int f_assigns_nonlocal_1041(struct f_greenc_1fr *up_, P171 d_1039, rt_gstr name_1040) {
  struct f_assigns_nonlocal_1041fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_1039 = d_1039;
F->name_1040 = cp_rt_gstr(name_1040);
F->result_ = (f_scan_assigns_1052(F->up, (*(P171)rt_nil_check(F->d_1039)).d_, F->d_1039, F->name_1040) || f_scan_handlers_1048(F->up, (*(P171)rt_nil_check(F->d_1039)).e_, F->d_1039, F->name_1040));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_declares_1044(struct f_greenc_1fr *up_, P171 d_1042, rt_gstr name_1043) {
  struct f_declares_1044fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_1042 = d_1042;
F->name_1043 = cp_rt_gstr(name_1043);
F->p_2605 = NULL;
F->p_2605 = (*(P171)rt_nil_check(F->d_1042)).a_;
F->e_2606 = NULL;
F->e_2606 = (*(P171)rt_nil_check(F->d_1042)).c_;
while ((F->p_2605 != NULL)) {
if (eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->p_2605)).name_)), F->name_1043)) {
F->result_ = 1;
goto ret_;
}
F->p_2605 = (*(P171)rt_nil_check(F->p_2605)).next_;
}
L_end_2607: ;
while ((F->e_2606 != NULL)) {
if ((((*(P171)rt_nil_check(F->e_2606)).name_ != NULL) && eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_2606)).name_)), F->name_1043))) {
F->result_ = 1;
goto ret_;
}
F->e_2606 = (*(P171)rt_nil_check(F->e_2606)).next_;
}
L_end_2608: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_scan_handlers_1048(struct f_greenc_1fr *up_, P171 h_1045, P171 d_1046, rt_gstr name_1047) {
  struct f_scan_handlers_1048fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->h_1045 = h_1045;
F->d_1046 = d_1046;
F->name_1047 = cp_rt_gstr(name_1047);
F->p_2609 = NULL;
F->p_2609 = F->h_1045;
while ((F->p_2609 != NULL)) {
if (f_scan_assigns_1052(F->up, (*(P171)rt_nil_check(F->p_2609)).b_, F->d_1046, F->name_1047)) {
F->result_ = 1;
goto ret_;
}
F->p_2609 = (*(P171)rt_nil_check(F->p_2609)).next_;
}
L_end_2610: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_scan_assigns_1052(struct f_greenc_1fr *up_, P171 stmts_1049, P171 d_1050, rt_gstr name_1051) {
  struct f_scan_assigns_1052fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_1049 = stmts_1049;
F->d_1050 = d_1050;
F->name_1051 = cp_rt_gstr(name_1051);
F->s_2611 = NULL;
F->s_2611 = F->stmts_1049;
F->a_2612 = NULL;
F->r_2613 = NULL;
while ((F->s_2611 != NULL)) {
if (((*(P171)rt_nil_check(F->s_2611)).kind_ == ((rt_int)20LL))) {
F->r_2613 = f_root_name_1035(F->up, (*(P171)rt_nil_check(F->s_2611)).a_);
if ((((F->r_2613 != NULL) && eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->r_2613)).name_)), F->name_1051)) && (!f_declares_1044(F->up, F->d_1050, F->name_1051)))) {
F->result_ = 1;
goto ret_;
}
} else if (((*(P171)rt_nil_check(F->s_2611)).kind_ == ((rt_int)22LL))) {
F->a_2612 = (*(P171)rt_nil_check(F->s_2611)).a_;
while ((F->a_2612 != NULL)) {
if (f_scan_assigns_1052(F->up, (*(P171)rt_nil_check(F->a_2612)).b_, F->d_1050, F->name_1051)) {
F->result_ = 1;
goto ret_;
}
F->a_2612 = (*(P171)rt_nil_check(F->a_2612)).next_;
}
L_end_2615: ;
if (f_scan_assigns_1052(F->up, (*(P171)rt_nil_check(F->s_2611)).b_, F->d_1050, F->name_1051)) {
F->result_ = 1;
goto ret_;
}
} else if (((*(P171)rt_nil_check(F->s_2611)).kind_ == ((rt_int)23LL))) {
F->a_2612 = (*(P171)rt_nil_check(F->s_2611)).b_;
while ((F->a_2612 != NULL)) {
if (f_scan_assigns_1052(F->up, (*(P171)rt_nil_check(F->a_2612)).b_, F->d_1050, F->name_1051)) {
F->result_ = 1;
goto ret_;
}
F->a_2612 = (*(P171)rt_nil_check(F->a_2612)).next_;
}
L_end_2616: ;
if (f_scan_assigns_1052(F->up, (*(P171)rt_nil_check(F->s_2611)).c_, F->d_1050, F->name_1051)) {
F->result_ = 1;
goto ret_;
}
} else if (((*(P171)rt_nil_check(F->s_2611)).kind_ == ((rt_int)24LL))) {
if (f_scan_assigns_1052(F->up, (*(P171)rt_nil_check(F->s_2611)).b_, F->d_1050, F->name_1051)) {
F->result_ = 1;
goto ret_;
}
} else if (((*(P171)rt_nil_check(F->s_2611)).kind_ == ((rt_int)25LL))) {
if ((f_scan_assigns_1052(F->up, (*(P171)rt_nil_check(F->s_2611)).b_, F->d_1050, F->name_1051) || f_scan_handlers_1048(F->up, (*(P171)rt_nil_check(F->s_2611)).c_, F->d_1050, F->name_1051))) {
F->result_ = 1;
goto ret_;
}
}
F->s_2611 = (*(P171)rt_nil_check(F->s_2611)).next_;
}
L_end_2614: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_call_rules_1055(struct f_greenc_1fr *up_, P171 e_1053, P114 y_1054) {
  struct f_check_call_rules_1055fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1053 = e_1053;
F->y_1054 = y_1054;
F->z_2617 = NULL;
F->s_2618 = NULL;
if ((((F->up->pure_sym_194 != NULL) && (((*(P119)rt_nil_check((*(P114)rt_nil_check(F->y_1054)).result_)).kind_ == ((rt_int)9LL)) || (*(P114)rt_nil_check(F->y_1054)).vrp_)) && ((*(P114)rt_nil_check(F->y_1054)).depth_ < F->up->pure_depth_195))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_1053)).line_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->up->pure_sym_194)).name_))), rt_g_lit(" may not call procedure ", 24)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1054)).name_))), rt_g_lit(": it could have side effects (RM79 6.5)", 39)));
}
if (((!(*(P114)rt_nil_check(F->y_1054)).vrp_) || (F->up->trial_152 > ((rt_int)0LL)))) {
goto ret_;
}
if ((!F->up->vrp_ok_196)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_1053)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("value-returning procedure ", 26), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1054)).name_))), rt_g_lit(" can be called only in an assignment, an initialization or a procedure call (RM79 6.5)", 86)));
}
F->s_2618 = F->up->scope_stack_118;
while ((F->s_2618 != NULL)) {
if ((((((*(P114)rt_nil_check(F->s_2618)).kind_ == ((rt_int)1LL)) && ((*(P114)rt_nil_check(F->s_2618)).depth_ <= (*(P114)rt_nil_check(F->y_1054)).depth_)) && (f_lookup_383(F->up, (*(P137)rt_nil_check((*(P114)rt_nil_check(F->s_2618)).name_))) == F->s_2618)) && f_assigns_nonlocal_1041(F->up, (*(P114)rt_nil_check(F->y_1054)).decl_, (*(P137)rt_nil_check((*(P114)rt_nil_check(F->s_2618)).name_))))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_1053)).line_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("value-returning procedure ", 26), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_1054)).name_))), rt_g_lit(" assigns ", 9)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->s_2618)).name_))), rt_g_lit(", which is visible here; it can be called only outside its scope (RM79 6.5)", 75)));
}
F->s_2618 = (*(P114)rt_nil_check(F->s_2618)).stack_;
}
L_end_2619: ;
ret_:

  return;
}

static void f_generic_p_1057(struct f_greenc_1fr *up_, P171 *res_1056) {
  struct f_generic_p_1057fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1056 = res_1056;
F->x_2620 = NULL;
F->p_2621 = NULL;
F->head_2622 = NULL;
F->tail_2623 = NULL;
F->names_2624 = NULL;
F->st_2625 = NULL;
F->def_2626 = NULL;
F->sub_2627 = NULL;
F->def_name_text_2628 = NULL;
F->more_2629 = 1;
f_expect_kw_298(F->up, rt_g_lit("GENERIC", 7));
F->x_2620 = f_nn_276(F->up, ((rt_int)54LL), f_cur_line_283(F->up));
if (f_at_op_287(F->up, rt_g_lit("(", 1))) {
f_skip_296(F->up);
while (F->more_2629) {
if (f_at_kw_285(F->up, rt_g_lit("RESTRICTED", 10))) {
f_skip_296(F->up);
}
if (f_at_kw_285(F->up, rt_g_lit("TYPE", 4))) {
f_skip_296(F->up);
F->p_2621 = f_nn_276(F->up, ((rt_int)47LL), f_cur_line_283(F->up));
(*(P171)rt_nil_check(F->p_2621)).ival_ = ((rt_int)10LL);
f_expect_id_302(F->up, &(*(P171)rt_nil_check(F->p_2621)).name_);
f_append_280(F->up, &F->head_2622, &F->tail_2623, F->p_2621);
} else if ((f_at_kw_285(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_285(F->up, rt_g_lit("FUNCTION", 8)))) {
F->p_2621 = f_nn_276(F->up, ((rt_int)47LL), f_cur_line_283(F->up));
(*(P171)rt_nil_check(F->p_2621)).ival_ = ((rt_int)11LL);
if (f_at_kw_285(F->up, rt_g_lit("PROCEDURE", 9))) {
F->sub_2627 = f_nn_276(F->up, ((rt_int)44LL), f_cur_line_283(F->up));
} else {
F->sub_2627 = f_nn_276(F->up, ((rt_int)45LL), f_cur_line_283(F->up));
}
f_skip_296(F->up);
f_designator_356(F->up, &(*(P171)rt_nil_check(F->sub_2627)).name_);
if (f_at_op_287(F->up, rt_g_lit("(", 1))) {
f_formal_part_354(F->up, &(*(P171)rt_nil_check(F->sub_2627)).a_);
}
if (f_at_kw_285(F->up, rt_g_lit("RETURN", 6))) {
f_skip_296(F->up);
f_subtype_ind_336(F->up, &(*(P171)rt_nil_check(F->sub_2627)).b_);
}
(*(P171)rt_nil_check(F->sub_2627)).ival_ = ((rt_int)1LL);
(*(P171)rt_nil_check(F->p_2621)).name_ = (*(P171)rt_nil_check(F->sub_2627)).name_;
(*(P171)rt_nil_check(F->p_2621)).a_ = F->sub_2627;
if (f_at_kw_285(F->up, rt_g_lit("IS", 2))) {
f_skip_296(F->up);
if (f_at_kind_289(F->up, ((rt_int)6LL))) {
f_designator_356(F->up, &F->def_name_text_2628);
(*(P171)rt_nil_check(F->p_2621)).b_ = f_nn_276(F->up, ((rt_int)5LL), f_cur_line_283(F->up));
(*(P171)rt_nil_check((*(P171)rt_nil_check(F->p_2621)).b_)).name_ = F->def_name_text_2628;
} else {
f_name_p_330(F->up, &(*(P171)rt_nil_check(F->p_2621)).b_);
}
}
f_append_280(F->up, &F->head_2622, &F->tail_2623, F->p_2621);
} else {
f_id_list_306(F->up, &F->names_2624);
f_expect_op_300(F->up, rt_g_lit(":", 1));
if (f_at_kw_285(F->up, rt_g_lit("IN", 2))) {
f_skip_296(F->up);
}
f_subtype_ind_336(F->up, &F->st_2625);
F->def_2626 = NULL;
if (f_at_op_287(F->up, rt_g_lit(":=", 2))) {
f_skip_296(F->up);
f_expr_313(F->up, &F->def_2626);
}
while ((F->names_2624 != NULL)) {
F->p_2621 = f_nn_276(F->up, ((rt_int)47LL), (*(P171)rt_nil_check(F->names_2624)).line_);
(*(P171)rt_nil_check(F->p_2621)).ival_ = ((rt_int)1LL);
(*(P171)rt_nil_check(F->p_2621)).name_ = (*(P171)rt_nil_check(F->names_2624)).name_;
(*(P171)rt_nil_check(F->p_2621)).a_ = F->st_2625;
(*(P171)rt_nil_check(F->p_2621)).b_ = F->def_2626;
f_append_280(F->up, &F->head_2622, &F->tail_2623, F->p_2621);
F->names_2624 = (*(P171)rt_nil_check(F->names_2624)).next_;
}
L_end_2631: ;
}
F->more_2629 = f_at_op_287(F->up, rt_g_lit(";", 1));
if (F->more_2629) {
f_skip_296(F->up);
}
}
L_end_2630: ;
f_expect_op_300(F->up, rt_g_lit(")", 1));
}
if ((f_at_kw_285(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_285(F->up, rt_g_lit("FUNCTION", 8)))) {
f_subprogram_358(F->up, &(*(P171)rt_nil_check(F->x_2620)).b_);
} else if (f_at_kw_285(F->up, rt_g_lit("PACKAGE", 7))) {
f_package_p_364(F->up, &(*(P171)rt_nil_check(F->x_2620)).b_);
} else if (f_at_kw_285(F->up, rt_g_lit("TASK", 4))) {
f_task_p_927(F->up, &(*(P171)rt_nil_check(F->x_2620)).b_);
} else {
f_perror_295(F->up, rt_g_lit("a generic unit is a subprogram, a package or a task", 51));
}
(*(P171)rt_nil_check(F->x_2620)).a_ = F->head_2622;
(*(P171)rt_nil_check(F->x_2620)).name_ = (*(P171)rt_nil_check((*(P171)rt_nil_check(F->x_2620)).b_)).name_;
(*F->res_1056) = F->x_2620;
ret_:

  return;
}

static void f_instantiation_1060(struct f_greenc_1fr *up_, P171 x_1058, P171 *res_1059) {
  struct f_instantiation_1060fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_1058 = x_1058;
F->res_1059 = res_1059;
F->i_2632 = NULL;
F->head_2633 = NULL;
F->tail_2634 = NULL;
F->a_2635 = NULL;
F->formal_2636 = NULL;
F->more_2638 = 1;
f_expect_kw_298(F->up, rt_g_lit("IS", 2));
f_expect_kw_298(F->up, rt_g_lit("NEW", 3));
F->i_2632 = f_nn_276(F->up, ((rt_int)53LL), (*(P171)rt_nil_check(F->x_1058)).line_);
(*(P171)rt_nil_check(F->i_2632)).name_ = (*(P171)rt_nil_check(F->x_1058)).name_;
(*(P171)rt_nil_check(F->i_2632)).ival_ = (*(P171)rt_nil_check(F->x_1058)).kind_;
f_expect_id_302(F->up, &(*(P171)rt_nil_check(F->i_2632)).tag_);
if (f_at_op_287(F->up, rt_g_lit("(", 1))) {
f_skip_296(F->up);
while (F->more_2638) {
F->formal_2636 = NULL;
F->mark_2637 = ((rt_int)0LL);
if (((f_at_kind_289(F->up, ((rt_int)1LL)) && (f_kind_at_291(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_293(F->up, ((rt_int)1LL)), rt_g_lit("IS", 2)))) {
f_expect_id_302(F->up, &F->formal_2636);
f_skip_296(F->up);
F->mark_2637 = ((rt_int)5LL);
} else if (((f_at_kind_289(F->up, ((rt_int)1LL)) && (f_kind_at_291(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && ((eq_rt_gstr(f_text_at_293(F->up, ((rt_int)1LL)), rt_g_lit(":=", 2)) || eq_rt_gstr(f_text_at_293(F->up, ((rt_int)1LL)), rt_g_lit("=:", 2))) || eq_rt_gstr(f_text_at_293(F->up, ((rt_int)1LL)), rt_g_lit(":=:", 3))))) {
f_expect_id_302(F->up, &F->formal_2636);
f_skip_296(F->up);
F->mark_2637 = ((rt_int)1LL);
}
if ((f_at_kind_289(F->up, ((rt_int)6LL)) && (F->mark_2637 == ((rt_int)5LL)))) {
F->a_2635 = f_nn_276(F->up, ((rt_int)5LL), f_cur_line_283(F->up));
f_designator_356(F->up, &(*(P171)rt_nil_check(F->a_2635)).name_);
} else {
f_expr_313(F->up, &F->a_2635);
}
(*(P171)rt_nil_check(F->a_2635)).formal_ = F->formal_2636;
(*(P171)rt_nil_check(F->a_2635)).flag_ = F->mark_2637;
f_append_280(F->up, &F->head_2633, &F->tail_2634, F->a_2635);
F->more_2638 = f_at_op_287(F->up, rt_g_lit(",", 1));
if (F->more_2638) {
f_skip_296(F->up);
}
}
L_end_2639: ;
f_expect_op_300(F->up, rt_g_lit(")", 1));
}
f_expect_op_300(F->up, rt_g_lit(";", 1));
(*(P171)rt_nil_check(F->i_2632)).a_ = F->head_2633;
(*F->res_1059) = F->i_2632;
ret_:

  return;
}

static void f_generic_decl_1062(struct f_greenc_1fr *up_, P171 e_1061) {
  struct f_generic_decl_1062fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1061 = e_1061;
F->y_2640 = NULL;
if (((*(P171)rt_nil_check(F->e_1061)).kind_ == ((rt_int)54LL))) {
F->y_2640 = f_new_sym_416(F->up, ((rt_int)11LL), (*(P171)rt_nil_check(F->e_1061)).name_);
(*(P114)rt_nil_check(F->y_2640)).decl_ = F->e_1061;
f_define_411(F->up, F->y_2640, (*(P171)rt_nil_check(F->e_1061)).line_);
} else if (((*(P171)rt_nil_check(F->e_1061)).kind_ == ((rt_int)53LL))) {
f_instantiate_1079(F->up, F->e_1061);
} else {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_1061)).line_, rt_g_lit("this declaration is not handled", 31));
}
ret_:

  return;
}

static int f_is_generic_name_1064(struct f_greenc_1fr *up_, rt_gstr n_1063) {
  struct f_is_generic_name_1064fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1063 = cp_rt_gstr(n_1063);
F->y_2641 = NULL;
F->y_2641 = f_lookup_383(F->up, F->n_1063);
F->result_ = ((F->y_2641 != NULL) && ((*(P114)rt_nil_check(F->y_2641)).kind_ == ((rt_int)11LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_attach_generic_body_1066(struct f_greenc_1fr *up_, P171 e_1065) {
  struct f_attach_generic_body_1066fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1065 = e_1065;
F->y_2642 = NULL;
F->y_2642 = f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_1065)).name_)));
(*(P171)rt_nil_check((*(P114)rt_nil_check(F->y_2642)).decl_)).c_ = F->e_1065;
F->up->generic_contexts_145 = ({ R144 *cell2643 = rt_alloc(sizeof(R144)); *cell2643 = cp_R144(({ R144 ag2644; ag2644.body_node_ = F->e_1065; ag2644.visible_ = F->up->scope_stack_118; ag2644.next_ = F->up->generic_contexts_145; ag2644; })); (P143)cell2643; });
ret_:

  return;
}

static void f_restore_generic_context_1069(struct f_greenc_1fr *up_, P171 body_node_1067, rt_int line_1068) {
  struct f_restore_generic_context_1069fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->body_node_1067 = body_node_1067;
F->line_1068 = line_1068;
F->ctx_2645 = NULL;
F->ctx_2645 = F->up->generic_contexts_145;
F->m_2646 = NULL;
F->z_2647 = NULL;
while (((F->ctx_2645 != NULL) && ((*(P143)rt_nil_check(F->ctx_2645)).body_node_ != F->body_node_1067))) {
F->ctx_2645 = (*(P143)rt_nil_check(F->ctx_2645)).next_;
}
L_end_2649: ;
if ((F->ctx_2645 == NULL)) {
goto ret_;
}
F->m_2646 = (*(P143)rt_nil_check(F->ctx_2645)).visible_;
while ((F->m_2646 != NULL)) {
if ((((*(P114)rt_nil_check(F->m_2646)).level_ <= ((rt_int)0LL)) && ((*(P114)rt_nil_check(F->m_2646)).kind_ != ((rt_int)11LL)))) {
F->z_2647 = ({ A113 ix2651 = F->up->table_116; ix2651.p[rt_index(f_hash_381(F->up, (*(P137)rt_nil_check((*(P114)rt_nil_check(F->m_2646)).name_))), ix2651.lo, ix2651.hi) - ix2651.lo]; });
F->seen_2648 = 0;
while ((F->z_2647 != NULL)) {
if ((((*(P114)rt_nil_check(F->z_2647)).depth_ == F->up->depth_117) && eq_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->z_2647)).name_)), (*(P137)rt_nil_check((*(P114)rt_nil_check(F->m_2646)).name_))))) {
F->seen_2648 = 1;
}
F->z_2647 = (*(P114)rt_nil_check(F->z_2647)).chain_;
}
L_end_2652: ;
if ((!F->seen_2648)) {
f_copy_sym_885(F->up, F->m_2646, &F->z_2647);
f_define_411(F->up, F->z_2647, F->line_1068);
}
}
F->m_2646 = (*(P114)rt_nil_check(F->m_2646)).stack_;
}
L_end_2650: ;
ret_:

  return;
}

static P171 f_gactual_1073(struct f_greenc_1fr *up_, P171 args_1070, rt_int nth_1071, rt_gstr name_1072) {
  struct f_gactual_1073fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->args_1070 = args_1070;
F->nth_1071 = nth_1071;
F->name_1072 = cp_rt_gstr(name_1072);
F->a_2653 = NULL;
F->a_2653 = F->args_1070;
F->i_2654 = ((rt_int)1LL);
while ((F->a_2653 != NULL)) {
if ((((*(P171)rt_nil_check(F->a_2653)).formal_ == NULL) && (F->i_2654 == F->nth_1071))) {
F->result_ = F->a_2653;
goto ret_;
}
if ((((*(P171)rt_nil_check(F->a_2653)).formal_ != NULL) && eq_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->a_2653)).formal_)), F->name_1072))) {
F->result_ = F->a_2653;
goto ret_;
}
if (((*(P171)rt_nil_check(F->a_2653)).formal_ == NULL)) {
F->i_2654 = rt_add(F->i_2654, ((rt_int)1LL));
}
F->a_2653 = (*(P171)rt_nil_check(F->a_2653)).next_;
}
L_end_2655: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_copy_node_1077(struct f_greenc_1fr *up_, P171 n_1074, P137 name_1075, P171 *r_1076) {
  struct f_copy_node_1077fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1074 = n_1074;
F->name_1075 = name_1075;
F->r_1076 = r_1076;
(*F->r_1076) = f_nn_276(F->up, (*(P171)rt_nil_check(F->n_1074)).kind_, (*(P171)rt_nil_check(F->n_1074)).line_);
as_R172(&(*(P171)rt_nil_check((*F->r_1076))), (*(P171)rt_nil_check(F->n_1074)));
(*(P171)rt_nil_check((*F->r_1076))).name_ = F->name_1075;
(*(P171)rt_nil_check((*F->r_1076))).next_ = NULL;
ret_:

  return;
}

static void f_instantiate_1079(struct f_greenc_1fr *up_, P171 e_1078) {
  struct f_instantiate_1079fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1078 = e_1078;
F->g_2656 = NULL;
F->g_2656 = f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_1078)).tag_)));
F->gd_2657 = NULL;
F->pat_2658 = NULL;
F->f_2659 = NULL;
F->a_2660 = NULL;
F->cn_2661 = NULL;
F->y_2662 = NULL;
F->z_2663 = NULL;
F->fs_2664 = NULL;
F->nth_2665 = ((rt_int)1LL);
F->t_2666 = NULL;
F->vt_2667 = NULL;
F->c_2668 = NULL;
F->v_2669 = NULL;
F->acc_2670 = NULL;
F->x_2671 = NULL;
if (((F->g_2656 == NULL) || ((*(P114)rt_nil_check(F->g_2656)).kind_ != ((rt_int)11LL)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_1078)).line_, cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_1078)).tag_)), rt_g_lit(" is not a generic unit", 22)));
}
F->gd_2657 = (*(P114)rt_nil_check(F->g_2656)).decl_;
F->pat_2658 = (*(P171)rt_nil_check(F->gd_2657)).b_;
f_open_scope_412(F->up);
F->f_2659 = (*(P171)rt_nil_check(F->gd_2657)).a_;
while ((F->f_2659 != NULL)) {
F->a_2660 = f_gactual_1073(F->up, (*(P171)rt_nil_check(F->e_1078)).a_, F->nth_2665, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->f_2659)).name_)));
F->nth_2665 = rt_add(F->nth_2665, ((rt_int)1LL));
if (((*(P171)rt_nil_check(F->f_2659)).ival_ == ((rt_int)10LL))) {
if (((F->a_2660 == NULL) || ((*(P171)rt_nil_check(F->a_2660)).kind_ != ((rt_int)5LL)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_1078)).line_, cat_rt_gstr(rt_g_lit("a type is required for generic parameter ", 41), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->f_2659)).name_))));
}
F->y_2662 = f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->a_2660)).name_)));
if (((F->y_2662 == NULL) || ((*(P114)rt_nil_check(F->y_2662)).kind_ != ((rt_int)5LL)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_1078)).line_, cat_rt_gstr((*(P137)rt_nil_check((*(P171)rt_nil_check(F->a_2660)).name_)), rt_g_lit(" is not a type", 14)));
}
f_copy_sym_885(F->up, F->y_2662, &F->z_2663);
(*(P114)rt_nil_check(F->z_2663)).name_ = (*(P171)rt_nil_check(F->f_2659)).name_;
f_define_411(F->up, F->z_2663, (*(P171)rt_nil_check(F->e_1078)).line_);
} else if (((*(P171)rt_nil_check(F->f_2659)).ival_ == ((rt_int)11LL))) {
if ((F->a_2660 == NULL)) {
F->a_2660 = (*(P171)rt_nil_check(F->f_2659)).b_;
}
if (((F->a_2660 == NULL) || ((*(P171)rt_nil_check(F->a_2660)).kind_ != ((rt_int)5LL)))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_1078)).line_, cat_rt_gstr(rt_g_lit("a subprogram is required for generic parameter ", 47), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->f_2659)).name_))));
}
f_build_subprogram_577(F->up, (*(P171)rt_nil_check(F->f_2659)).a_, &F->fs_2664);
F->y_2662 = ({ A113 ix2674 = F->up->table_116; ix2674.p[rt_index(f_hash_381(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->a_2660)).name_))), ix2674.lo, ix2674.hi) - ix2674.lo]; });
while (((F->y_2662 != NULL) && (!(((eq_rt_gstr((*(P137)rt_nil_check((*(P114)rt_nil_check(F->y_2662)).name_)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->a_2660)).name_))) && (((*(P114)rt_nil_check(F->y_2662)).kind_ == ((rt_int)3LL)) || ((*(P114)rt_nil_check(F->y_2662)).kind_ == ((rt_int)4LL)))) && f_same_signature_408(F->up, (*(P114)rt_nil_check(F->y_2662)).params_, (*(P114)rt_nil_check(F->fs_2664)).params_)) && f_same_396(F->up, (*(P114)rt_nil_check(F->y_2662)).result_, (*(P114)rt_nil_check(F->fs_2664)).result_))))) {
F->y_2662 = (*(P114)rt_nil_check(F->y_2662)).chain_;
}
L_end_2675: ;
if ((F->y_2662 == NULL)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_1078)).line_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no subprogram ", 14), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->a_2660)).name_))), rt_g_lit(" matches generic parameter ", 27)), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->f_2659)).name_))));
}
f_copy_sym_885(F->up, F->y_2662, &F->z_2663);
(*(P114)rt_nil_check(F->z_2663)).name_ = (*(P171)rt_nil_check(F->f_2659)).name_;
f_define_411(F->up, F->z_2663, (*(P171)rt_nil_check(F->e_1078)).line_);
} else {
if ((F->a_2660 == NULL)) {
F->a_2660 = (*(P171)rt_nil_check(F->f_2659)).b_;
}
if ((F->a_2660 == NULL)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_1078)).line_, cat_rt_gstr(rt_g_lit("no actual for generic parameter ", 32), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->f_2659)).name_))));
}
f_resolve_446(F->up, (*(P171)rt_nil_check(F->f_2659)).a_, &F->t_2666, &F->c_2668);
f_gexpr_695(F->up, F->a_2660, F->t_2666, &F->vt_2667, &F->v_2669);
f_check_type_425(F->up, F->vt_2667, F->t_2666, (*(P171)rt_nil_check(F->e_1078)).line_);
F->z_2663 = f_new_sym_416(F->up, ((rt_int)2LL), (*(P171)rt_nil_check(F->f_2659)).name_);
f_storage_567(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->f_2659)).name_)), F->t_2666, &F->acc_2670);
f_copy_code_552(F->up, F->t_2666, (*(P137)rt_nil_check(F->v_2669)), &F->x_2671);
f_emit_232(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P137)rt_nil_check(F->acc_2670)), rt_g_lit(" = ", 3)), (*(P137)rt_nil_check(F->x_2671))), one_rt_gstr(59)));
(*(P114)rt_nil_check(F->z_2663)).t_ = F->t_2666;
(*(P114)rt_nil_check(F->z_2663)).c_ = F->c_2668;
(*(P114)rt_nil_check(F->z_2663)).ro_ = 1;
if (((*(P119)rt_nil_check(F->t_2666)).kind_ == ((rt_int)1LL))) {
f_manifest_442(F->up, F->a_2660, &(*(P114)rt_nil_check(F->z_2663)).mvalue_, &F->ok_2672);
(*(P114)rt_nil_check(F->z_2663)).hasmv_ = F->ok_2672;
}
f_bind_570(F->up, F->z_2663, F->acc_2670);
f_define_411(F->up, F->z_2663, (*(P171)rt_nil_check(F->e_1078)).line_);
}
F->f_2659 = (*(P171)rt_nil_check(F->f_2659)).next_;
}
L_end_2673: ;
if (((*(P171)rt_nil_check(F->gd_2657)).c_ != NULL)) {
f_restore_generic_context_1069(F->up, (*(P171)rt_nil_check(F->gd_2657)).c_, (*(P171)rt_nil_check(F->e_1078)).line_);
}
if ((((*(P171)rt_nil_check(F->pat_2658)).kind_ == ((rt_int)44LL)) || ((*(P171)rt_nil_check(F->pat_2658)).kind_ == ((rt_int)45LL)))) {
if (((*(P171)rt_nil_check(F->pat_2658)).ival_ == ((rt_int)1LL))) {
if (((*(P171)rt_nil_check(F->gd_2657)).c_ == NULL)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_1078)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("the body of generic ", 20), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_1078)).tag_))), rt_g_lit(" is not given before this instantiation", 39)));
}
F->pat_2658 = (*(P171)rt_nil_check(F->gd_2657)).c_;
}
f_copy_node_1077(F->up, F->pat_2658, (*(P171)rt_nil_check(F->e_1078)).name_, &F->cn_2661);
f_build_subprogram_577(F->up, F->cn_2661, &F->y_2662);
f_define_411(F->up, F->y_2662, (*(P171)rt_nil_check(F->e_1078)).line_);
f_subprogram_body_592(F->up, F->cn_2661, F->y_2662);
} else if (((*(P171)rt_nil_check(F->pat_2658)).kind_ == ((rt_int)48LL))) {
f_copy_node_1077(F->up, F->pat_2658, (*(P171)rt_nil_check(F->e_1078)).name_, &F->cn_2661);
f_package_spec_890(F->up, F->cn_2661);
F->y_2662 = f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_1078)).name_)));
if (((*(P171)rt_nil_check(F->gd_2657)).c_ != NULL)) {
f_copy_node_1077(F->up, (*(P171)rt_nil_check(F->gd_2657)).c_, (*(P171)rt_nil_check(F->e_1078)).name_, &F->cn_2661);
f_package_body_895(F->up, F->cn_2661);
}
} else {
f_copy_node_1077(F->up, F->pat_2658, (*(P171)rt_nil_check(F->e_1078)).name_, &F->cn_2661);
f_task_spec_982(F->up, F->cn_2661);
F->y_2662 = f_lookup_383(F->up, (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_1078)).name_)));
if (((*(P171)rt_nil_check(F->gd_2657)).c_ == NULL)) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->e_1078)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("the body of generic task ", 25), (*(P137)rt_nil_check((*(P171)rt_nil_check(F->e_1078)).tag_))), rt_g_lit(" is not given before this instantiation", 39)));
}
f_copy_node_1077(F->up, (*(P171)rt_nil_check(F->gd_2657)).c_, (*(P171)rt_nil_check(F->e_1078)).name_, &F->cn_2661);
f_task_body_986(F->up, F->cn_2661);
}
f_close_scope_413(F->up);
f_define_411(F->up, F->y_2662, (*(P171)rt_nil_check(F->e_1078)).line_);
ret_:

  return;
}

static void f_predef_type_1084(struct f_greenc_1fr *up_, rt_gstr name_1080, P119 t_1081, rt_gstr lo_1082, rt_gstr hi_1083) {
  struct f_predef_type_1084fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1080 = cp_rt_gstr(name_1080);
F->t_1081 = t_1081;
F->lo_1082 = cp_rt_gstr(lo_1082);
F->hi_1083 = cp_rt_gstr(hi_1083);
F->y_2676 = NULL;
F->y_2676 = f_new_sym_416(F->up, ((rt_int)5LL), f_mk_205(F->up, F->name_1080));
(*(P114)rt_nil_check(F->y_2676)).t_ = F->t_1081;
if ((({ rt_gstr at2677 = F->lo_1082; at2677.hi >= at2677.lo ? at2677.hi - at2677.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
(*(P114)rt_nil_check(F->y_2676)).c_ = f_new_cons_419(F->up);
(*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_2676)).c_)).lo_ = f_mk_205(F->up, F->lo_1082);
(*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_2676)).c_)).hi_ = f_mk_205(F->up, F->hi_1083);
if (((({ rt_gstr at2678 = F->hi_1083; at2678.hi >= at2678.lo ? at2678.hi - at2678.lo + 1 : (rt_int)0; }) < ((rt_int)12LL)) && f_is_digit_212(F->up, ({ rt_gstr ix2682 = F->hi_1083; ix2682.p[rt_index(({ rt_gstr at2681 = F->hi_1083; at2681.lo; }), ix2682.lo, ix2682.hi) - ix2682.lo]; })))) {
(*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_2676)).c_)).mlo_ = rt_int_of_str(rt_g_g2s(F->lo_1082));
(*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_2676)).c_)).mhi_ = rt_int_of_str(rt_g_g2s(F->hi_1083));
(*(P175)rt_nil_check((*(P114)rt_nil_check(F->y_2676)).c_)).hasm_ = 1;
}
}
f_define_411(F->up, F->y_2676, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_const_1088(struct f_greenc_1fr *up_, rt_gstr name_1085, P119 t_1086, rt_gstr code_text_1087) {
  struct f_predef_const_1088fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1085 = cp_rt_gstr(name_1085);
F->t_1086 = t_1086;
F->code_text_1087 = cp_rt_gstr(code_text_1087);
F->y_2683 = NULL;
F->y_2683 = f_new_sym_416(F->up, ((rt_int)2LL), f_mk_205(F->up, F->name_1085));
(*(P114)rt_nil_check(F->y_2683)).t_ = F->t_1086;
(*(P114)rt_nil_check(F->y_2683)).ro_ = 1;
(*(P114)rt_nil_check(F->y_2683)).access_path_ = f_mk_205(F->up, F->code_text_1087);
f_define_411(F->up, F->y_2683, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_exc_1090(struct f_greenc_1fr *up_, rt_gstr name_1089) {
  struct f_predef_exc_1090fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1089 = cp_rt_gstr(name_1089);
F->y_2684 = NULL;
F->y_2684 = f_new_sym_416(F->up, ((rt_int)6LL), f_mk_205(F->up, F->name_1089));
(*(P114)rt_nil_check(F->y_2684)).cname_ = f_mk_205(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_exc(", 7), f_q_223(F->up)), F->name_1089), f_q_223(F->up)), one_rt_gstr(41)));
f_define_411(F->up, F->y_2684, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_lit_1094(struct f_greenc_1fr *up_, rt_gstr name_1091, P119 t_1092, rt_int v_1093) {
  struct f_predef_lit_1094fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1091 = cp_rt_gstr(name_1091);
F->t_1092 = t_1092;
F->v_1093 = v_1093;
F->y_2685 = NULL;
F->y_2685 = f_new_sym_416(F->up, ((rt_int)7LL), f_mk_205(F->up, F->name_1091));
(*(P114)rt_nil_check(F->y_2685)).t_ = F->t_1092;
(*(P114)rt_nil_check(F->y_2685)).result_ = F->t_1092;
(*(P114)rt_nil_check(F->y_2685)).mvalue_ = F->v_1093;
(*(P114)rt_nil_check(F->y_2685)).hasmv_ = 1;
f_define_411(F->up, F->y_2685, ((rt_int)0LL));
ret_:

  return;
}

static void f_predefine_1095(struct f_greenc_1fr *up_) {
  struct f_predefine_1095fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->control_2686 = cp_rt_gstr(cat_rt_gstr(rt_g_lit("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE ", 60), rt_g_lit("DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US ", 55)));
F->start_2687 = ((rt_int)1LL);
F->code_no_2688 = ((rt_int)0LL);
f_predef_type_1084(F->up, rt_g_lit("INTEGER", 7), F->up->ty_int_153, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1084(F->up, rt_g_lit("SHORT_INTEGER", 13), F->up->ty_short_164, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1084(F->up, rt_g_lit("LONG_INTEGER", 12), F->up->ty_long_165, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1084(F->up, rt_g_lit("NATURAL", 7), F->up->ty_int_153, rt_g_lit("1", 1), rt_g_lit("INT64_MAX", 9));
f_predef_type_1084(F->up, rt_g_lit("PRIORITY", 8), F->up->ty_int_153, rt_g_lit("0", 1), rt_g_lit("255", 3));
f_predef_type_1084(F->up, rt_g_lit("BOOLEAN", 7), F->up->ty_bool_154, rt_g_lit("0", 1), rt_g_lit("1", 1));
f_predef_type_1084(F->up, rt_g_lit("CHARACTER", 9), F->up->ty_char_156, rt_g_lit("0", 1), rt_g_lit("127", 3));
f_predef_type_1084(F->up, rt_g_lit("STRING", 6), F->up->ty_string_157, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1084(F->up, rt_g_lit("FLOAT", 5), F->up->ty_float_155, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1084(F->up, rt_g_lit("SHORT_FLOAT", 11), F->up->ty_sfloat_166, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1084(F->up, rt_g_lit("LONG_FLOAT", 10), F->up->ty_lfloat_167, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1084(F->up, rt_g_lit("TIME", 4), F->up->ty_time_168, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_lit_1094(F->up, rt_g_lit("FALSE", 5), F->up->ty_bool_154, ((rt_int)0LL));
f_predef_lit_1094(F->up, rt_g_lit("TRUE", 4), F->up->ty_bool_154, ((rt_int)1LL));
{ rt_int lo2692 = ((rt_int)1LL), hi2693 = ({ rt_gstr at2690 = F->control_2686; at2690.hi >= at2690.lo ? at2690.hi - at2690.lo + 1 : (rt_int)0; });
for (rt_int it2694 = lo2692; it2694 <= hi2693; it2694++) {
F->i_2691 = it2694;
if ((({ rt_gstr ix2695 = F->control_2686; ix2695.p[rt_index(F->i_2691, ix2695.lo, ix2695.hi) - ix2695.lo]; }) == 32)) {
f_predef_const_1088(F->up, ({ rt_gstr sl2697 = F->control_2686; rt_int l_ = F->start_2687, h_ = rt_sub(F->i_2691, ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl2697.lo, sl2697.hi); rt_index(h_, sl2697.lo, sl2697.hi); } sl2697.p += l_ - sl2697.lo; sl2697.lo = l_; sl2697.hi = h_; sl2697; }), F->up->ty_char_156, rt_g_s2g(rt_str_of_int(F->code_no_2688)));
F->code_no_2688 = rt_add(F->code_no_2688, ((rt_int)1LL));
F->start_2687 = rt_add(F->i_2691, ((rt_int)1LL));
}
}
}
L_end_2689: ;
f_predef_const_1088(F->up, rt_g_lit("DEL", 3), F->up->ty_char_156, rt_g_lit("127", 3));
f_predef_const_1088(F->up, rt_g_lit("EXCLAM", 6), F->up->ty_char_156, rt_g_lit("33", 2));
f_predef_const_1088(F->up, rt_g_lit("DOLLAR", 6), F->up->ty_char_156, rt_g_lit("36", 2));
f_predef_const_1088(F->up, rt_g_lit("QUESTION", 8), F->up->ty_char_156, rt_g_lit("63", 2));
f_predef_const_1088(F->up, rt_g_lit("AT_SIGN", 7), F->up->ty_char_156, rt_g_lit("64", 2));
f_predef_const_1088(F->up, rt_g_lit("L_BRACKET", 9), F->up->ty_char_156, rt_g_lit("91", 2));
f_predef_const_1088(F->up, rt_g_lit("BACK_SLASH", 10), F->up->ty_char_156, rt_g_lit("92", 2));
f_predef_const_1088(F->up, rt_g_lit("R_BRACKET", 9), F->up->ty_char_156, rt_g_lit("93", 2));
f_predef_const_1088(F->up, rt_g_lit("CIRCUMFLEX", 10), F->up->ty_char_156, rt_g_lit("94", 2));
f_predef_const_1088(F->up, rt_g_lit("GRAVE", 5), F->up->ty_char_156, rt_g_lit("96", 2));
f_predef_const_1088(F->up, rt_g_lit("L_BRACE", 7), F->up->ty_char_156, rt_g_lit("123", 3));
f_predef_const_1088(F->up, rt_g_lit("R_BRACE", 7), F->up->ty_char_156, rt_g_lit("125", 3));
f_predef_const_1088(F->up, rt_g_lit("TILDE", 5), F->up->ty_char_156, rt_g_lit("126", 3));
{ rt_int lo2700 = ((rt_int)0LL), hi2701 = ((rt_int)25LL);
for (rt_int it2702 = lo2700; it2702 <= hi2701; it2702++) {
F->i_2699 = it2702;
f_predef_const_1088(F->up, cat_rt_gstr(rt_g_lit("LC_", 3), one_rt_gstr(rt_range((rt_add(((rt_int)66LL), F->i_2699) - 1), 0, 127))), F->up->ty_char_156, rt_g_s2g(rt_str_of_int(rt_add(((rt_int)97LL), F->i_2699))));
}
}
L_end_2698: ;
f_predef_const_1088(F->up, rt_g_lit("NEWLINE", 7), F->up->ty_string_157, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_lit(", 9), f_q_223(F->up)), rt_g_lit("\\n", 2)), f_q_223(F->up)), rt_g_lit(", 1)", 4)));
f_predef_const_1088(F->up, rt_g_lit("SECONDS", 7), F->up->ty_time_168, rt_g_lit("((double)RT_SECONDS)", 20));
f_predef_exc_1090(F->up, rt_g_lit("ACCESS_ERROR", 12));
f_predef_exc_1090(F->up, rt_g_lit("ASSERT_ERROR", 12));
f_predef_exc_1090(F->up, rt_g_lit("DISCRIMINANT_ERROR", 18));
f_predef_exc_1090(F->up, rt_g_lit("DIVIDE_ERROR", 12));
f_predef_exc_1090(F->up, rt_g_lit("FAILURE", 7));
f_predef_exc_1090(F->up, rt_g_lit("INDEX_ERROR", 11));
f_predef_exc_1090(F->up, rt_g_lit("INITIATE_ERROR", 14));
f_predef_exc_1090(F->up, rt_g_lit("NO_VALUE_ERROR", 14));
f_predef_exc_1090(F->up, rt_g_lit("OVERFLOW", 8));
f_predef_exc_1090(F->up, rt_g_lit("OVERLAP_ERROR", 13));
f_predef_exc_1090(F->up, rt_g_lit("RANGE_ERROR", 11));
f_predef_exc_1090(F->up, rt_g_lit("SELECT_ERROR", 12));
f_predef_exc_1090(F->up, rt_g_lit("STORAGE_OVERFLOW", 16));
f_predef_exc_1090(F->up, rt_g_lit("TASKING_ERROR", 13));
f_predef_exc_1090(F->up, rt_g_lit("UNDERFLOW", 9));
f_predef_exc_1090(F->up, rt_g_lit("END_OF_FILE", 11));
ret_:

  return;
}

static void f_translate_1097(struct f_greenc_1fr *up_, P171 u_1096) {
  struct f_translate_1097fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->u_1096 = u_1096;
F->p_2703 = NULL;
F->p_2703 = F->u_1096;
F->y_2704 = NULL;
f_open_scope_412(F->up);
while ((F->p_2703 != NULL)) {
if (((*(P171)rt_nil_check(F->p_2703)).next_ == NULL)) {
if ((((*(P171)rt_nil_check(F->p_2703)).kind_ != ((rt_int)44LL)) || ((*(P171)rt_nil_check(F->p_2703)).a_ != NULL))) {
f_fail_226(F->up, (*(P171)rt_nil_check(F->p_2703)).line_, rt_g_lit("the main program is a procedure without parameters", 50));
}
f_build_subprogram_577(F->up, F->p_2703, &F->y_2704);
f_define_411(F->up, F->y_2704, (*(P171)rt_nil_check(F->p_2703)).line_);
f_subprogram_body_592(F->up, F->p_2703, F->y_2704);
F->up->main_name_199 = (*(P114)rt_nil_check(F->y_2704)).cname_;
} else {
f_decl_element_581(F->up, F->p_2703);
}
F->p_2703 = (*(P171)rt_nil_check(F->p_2703)).next_;
}
L_end_2705: ;
ret_:

  return;
}

static void f_print_program_1098(struct f_greenc_1fr *up_) {
  struct f_print_program_1098fr *F = rt_alloc(sizeof *F);
F->up = up_;
f_emit_helpers_561(F->up);
rt_g_put(rt_g_g2s(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("#include ", 9), f_q_223(F->up)), rt_g_lit("paleo.h", 7)), f_q_223(F->up))));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
rt_g_put(rt_g_g2s(rt_g_lit("#include <math.h>", 17)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
f_print_buffer_234(F->up, F->up->out_types_125);
f_print_buffer_234(F->up, F->up->out_frames_126);
f_print_buffer_234(F->up, F->up->out_helpers_127);
f_print_buffer_234(F->up, F->up->out_protos_128);
f_print_buffer_234(F->up, F->up->out_globals_129);
f_print_buffer_234(F->up, F->up->out_funcs_130);
rt_g_put(rt_g_g2s(rt_g_lit("int main(int argc, char **argv) {", 33)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
rt_g_put(rt_g_g2s(rt_g_lit("  rt_init(argc, argv);", 22)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
rt_g_put(rt_g_g2s(rt_g_lit("  rt_set_lang(1);", 17)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
f_print_buffer_234(F->up, F->up->out_excs_132);
f_print_buffer_234(F->up, F->up->out_init_131);
rt_g_put(rt_g_g2s(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P137)rt_nil_check(F->up->main_name_199))), rt_g_lit("();", 3))));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
f_print_buffer_234(F->up, F->up->out_awaits_187);
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
F->ntoks_110 = ((rt_int)0LL);
F->tpos_111 = ((rt_int)1LL);
F->src_line_112 = ((rt_int)0LL);
F->table_116.lo = ((rt_int)0LL); F->table_116.hi = ((rt_int)4092LL);
F->table_116.lo2 = 1; F->table_116.hi2 = 1;
F->table_116.p = rt_alloc(sizeof(P114) * (size_t)G_CNT(F->table_116));
F->depth_117 = ((rt_int)0LL);
F->scope_stack_118 = NULL;
F->all_types_121 = NULL;
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
F->in_func_135 = 0;
F->cur_level_136 = ((rt_int)0LL);
F->st_field_138 = NULL;
F->func_sym_139 = NULL;
F->exits_142 = NULL;
F->generic_contexts_145 = NULL;
F->accept_exits_146 = NULL;
F->frames_147 = ((rt_int)0LL);
F->handlers_150 = NULL;
F->cleanups_151 = NULL;
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
F->cur_task_180 = NULL;
F->accept_depth_181 = ((rt_int)0LL);
F->famarg_done_182 = 0;
F->fam_ix_183 = NULL;
F->call_task_ix_184 = NULL;
F->saw_interface_185 = 0;
F->defer_entry_structs_186 = 0;
F->out_awaits_187 = NULL;
F->no_cons_188 = NULL;
F->units_189 = NULL;
F->pkg_stack_190 = NULL;
F->cur_pkg_191 = NULL;
F->prefix_hint_192 = NULL;
F->call_want_193 = NULL;
F->pure_sym_194 = NULL;
F->pure_depth_195 = ((rt_int)0LL);
F->vrp_ok_196 = 0;
F->in_lv_path_197 = 0;
F->last_deref_198 = 0;
F->main_name_199 = NULL;
F->conf_system_200 = NULL;
F->conf_storage_unit_201 = ((rt_int)8LL);
F->conf_memory_size_202 = ((rt_int)1048576LL);
F->conf_optimize_203 = NULL;
F->out_types_125 = f_new_buffer_227(F);
F->out_frames_126 = f_new_buffer_227(F);
F->out_helpers_127 = f_new_buffer_227(F);
F->out_protos_128 = f_new_buffer_227(F);
F->out_globals_129 = f_new_buffer_227(F);
F->out_funcs_130 = f_new_buffer_227(F);
F->out_init_131 = f_new_buffer_227(F);
F->out_excs_132 = f_new_buffer_227(F);
F->code_133 = F->out_init_131;
F->no_cons_188 = f_new_cons_419(F);
F->ty_int_153 = f_new_typ_418(F, ((rt_int)1LL));
F->ty_bool_154 = f_new_typ_418(F, ((rt_int)2LL));
F->ty_float_155 = f_new_typ_418(F, ((rt_int)3LL));
F->ty_char_156 = f_new_typ_418(F, ((rt_int)11LL));
F->ty_string_157 = f_new_typ_418(F, ((rt_int)6LL));
(*(P119)rt_nil_check(F->ty_string_157)).name_ = f_mk_205(F, rt_g_lit("STRING", 6));
(*(P119)rt_nil_check(F->ty_string_157)).cname_ = f_mk_205(F, rt_g_lit("rt_gstr", 7));
(*(P119)rt_nil_check(F->ty_string_157)).dims_ = ((rt_int)1LL);
(*(P119)rt_nil_check(F->ty_string_157)).elem_ = F->ty_char_156;
(*(P119)rt_nil_check(F->ty_string_157)).tcons_ = f_new_cons_419(F);
(*(P175)rt_nil_check((*(P119)rt_nil_check(F->ty_string_157)).tcons_)).lo_ = f_mk_205(F, rt_g_lit("1", 1));
F->ty_void_158 = f_new_typ_418(F, ((rt_int)9LL));
F->ty_nil_159 = f_new_typ_418(F, ((rt_int)10LL));
F->ty_act_161 = f_new_typ_418(F, ((rt_int)13LL));
F->ty_tdecl_162 = f_new_typ_418(F, ((rt_int)14LL));
F->ty_entry_163 = f_new_typ_418(F, ((rt_int)15LL));
(*(P119)rt_nil_check(F->ty_int_153)).name_ = f_mk_205(F, rt_g_lit("INTEGER", 7));
(*(P119)rt_nil_check(F->ty_string_157)).idx_ = F->ty_int_153;
(*(P119)rt_nil_check(F->ty_string_157)).next_ = F->all_types_121;
F->all_types_121 = F->ty_string_157;
(*(P119)rt_nil_check(F->ty_float_155)).name_ = f_mk_205(F, rt_g_lit("FLOAT", 5));
(*(P119)rt_nil_check(F->ty_float_155)).ndigits_ = ((rt_int)15LL);
F->ty_short_164 = f_new_typ_418(F, ((rt_int)1LL));
(*(P119)rt_nil_check(F->ty_short_164)).name_ = f_mk_205(F, rt_g_lit("SHORT_INTEGER", 13));
F->ty_long_165 = f_new_typ_418(F, ((rt_int)1LL));
(*(P119)rt_nil_check(F->ty_long_165)).name_ = f_mk_205(F, rt_g_lit("LONG_INTEGER", 12));
F->ty_sfloat_166 = f_new_typ_418(F, ((rt_int)3LL));
(*(P119)rt_nil_check(F->ty_sfloat_166)).name_ = f_mk_205(F, rt_g_lit("SHORT_FLOAT", 11));
(*(P119)rt_nil_check(F->ty_sfloat_166)).ndigits_ = ((rt_int)6LL);
F->ty_lfloat_167 = f_new_typ_418(F, ((rt_int)3LL));
(*(P119)rt_nil_check(F->ty_lfloat_167)).name_ = f_mk_205(F, rt_g_lit("LONG_FLOAT", 10));
(*(P119)rt_nil_check(F->ty_lfloat_167)).ndigits_ = ((rt_int)15LL);
F->ty_time_168 = f_new_typ_418(F, ((rt_int)3LL));
(*(P119)rt_nil_check(F->ty_time_168)).name_ = f_mk_205(F, rt_g_lit("TIME", 4));
(*(P119)rt_nil_check(F->ty_time_168)).ndigits_ = ((rt_int)15LL);
F->ty_ufixed_169 = f_new_typ_418(F, ((rt_int)16LL));
(*(P119)rt_nil_check(F->ty_ufixed_169)).name_ = f_mk_205(F, rt_g_lit("universal fixed", 15));
F->out_awaits_187 = f_new_buffer_227(F);
f_predefine_1095(F);
f_read_source_273(F);
f_compilation_379(F, &F->units_189);
if ((F->units_189 == NULL)) {
f_fail_226(F, ((rt_int)1LL), rt_g_lit("the compilation is empty", 24));
}
f_translate_1097(F, F->units_189);
f_print_program_1098(F);
ret_:

  return;
}

static void as_A2192(A2192 *d, A2192 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2192 cp_A2192(A2192 s) {
  A2192 d = s; d.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2192(A2192 a, A2192 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2192 cat_A2192(A2192 a, A2192 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2192 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2192 one_A2192(rt_int e) {
  A2192 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int)); r.p[0] = e;
  return r;
}
static void as_A2190(A2190 *d, A2190 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2190 cp_A2190(A2190 s) {
  A2190 d = s; d.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2190(A2190 a, A2190 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2190 cat_A2190(A2190 a, A2190 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2190 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2190 one_A2190(rt_int e) {
  A2190 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int)); r.p[0] = e;
  return r;
}
static void as_A2187(A2187 *d, A2187 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2187 cp_A2187(A2187 s) {
  A2187 d = s; d.p = rt_alloc(sizeof(int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2187(A2187 a, A2187 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2187 cat_A2187(A2187 a, A2187 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2187 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2187 one_A2187(int e) {
  A2187 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(int)); r.p[0] = e;
  return r;
}
static void as_R1732(R1732 *d, R1732 s) {
  d->disc_ = s.disc_;
  d->arm_ = s.arm_;
  d->variant_ = s.variant_;
  d->next_ = s.next_;
}
static R1732 cp_R1732(R1732 s) {
  R1732 d = s;
  d.disc_ = s.disc_;
  d.arm_ = s.arm_;
  d.variant_ = s.variant_;
  d.next_ = s.next_;
  return d;
}
static int eq_R1732(R1732 a, R1732 b) {
  return 1 && (a.disc_ == b.disc_) && (a.arm_ == b.arm_) && (a.variant_ == b.variant_) && (a.next_ == b.next_);
}
static void as_R1612(R1612 *d, R1612 s) {
  d->name_ = s.name_;
  d->v_ = s.v_;
  d->next_ = s.next_;
}
static R1612 cp_R1612(R1612 s) {
  R1612 d = s;
  d.name_ = s.name_;
  d.v_ = s.v_;
  d.next_ = s.next_;
  return d;
}
static int eq_R1612(R1612 a, R1612 b) {
  return 1 && (a.name_ == b.name_) && (a.v_ == b.v_) && (a.next_ == b.next_);
}
static void as_R1608(R1608 *d, R1608 s) {
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
static R1608 cp_R1608(R1608 s) {
  R1608 d = s;
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
static int eq_R1608(R1608 a, R1608 b) {
  return 1 && (a.name_ == b.name_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.next_ == b.next_) && (a.dflt_ == b.dflt_) && (a.is_const_ == b.is_const_) && (a.is_discr_ == b.is_discr_) && (a.dsym_ == b.dsym_) && (a.guard_ == b.guard_) && (a.cond_ == b.cond_) && (a.dyn_ == b.dyn_);
}
static void as_R1593(R1593 *d, R1593 s) {
  d->name_ = s.name_;
  d->mode_ = s.mode_;
  d->t_ = s.t_;
  d->c_ = s.c_;
  d->cfield_ = s.cfield_;
  d->dflt_ = s.dflt_;
  d->next_ = s.next_;
}
static R1593 cp_R1593(R1593 s) {
  R1593 d = s;
  d.name_ = s.name_;
  d.mode_ = s.mode_;
  d.t_ = s.t_;
  d.c_ = s.c_;
  d.cfield_ = s.cfield_;
  d.dflt_ = s.dflt_;
  d.next_ = s.next_;
  return d;
}
static int eq_R1593(R1593 a, R1593 b) {
  return 1 && (a.name_ == b.name_) && (a.mode_ == b.mode_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.cfield_ == b.cfield_) && (a.dflt_ == b.dflt_) && (a.next_ == b.next_);
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
