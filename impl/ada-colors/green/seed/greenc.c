#include "paleo.h"
#include <math.h>
typedef struct R106 R106;
typedef struct R106 *P105;
typedef struct A104 A104;
struct A104 { rt_int lo, hi, lo2, hi2; P105 *p; };
typedef struct R113 R113;
typedef struct R113 *P112;
typedef struct A111 A111;
struct A111 { rt_int lo, hi, lo2, hi2; P112 *p; };
typedef struct R118 R118;
typedef struct R118 *P117;
typedef struct R122 R122;
typedef struct R122 *P121;
typedef rt_gstr *P135;
typedef struct R139 R139;
typedef struct R139 *P138;
typedef struct R142 R142;
typedef struct R142 *P141;
typedef struct R147 R147;
typedef struct R147 *P146;
typedef struct R170 R170;
typedef struct R170 *P169;
typedef struct R174 R174;
typedef struct R174 *P173;
struct R122 { int dummy_; P146 head_; P146 tail_; };
struct R147 { int dummy_; P135 s_; P146 next_; };
struct R106 { int dummy_; rt_int kind_; rt_int line_; rt_int ival_; P135 s_; };
struct R170 { int dummy_; rt_int kind_; rt_int line_; rt_int ival_; rt_int flag_; P135 name_; P135 tag_; P169 a_; P169 b_; P169 c_; P169 d_; P169 e_; P169 next_; P135 formal_; };
typedef struct R1586 R1586;
typedef struct R1586 *P1585;
struct R113 { int dummy_; rt_int kind_; P135 name_; P117 t_; P173 c_; P135 access_path_; P135 cname_; int ro_; rt_int mvalue_; int hasmv_; P169 decl_; P1585 params_; P117 result_; rt_int depth_; rt_int level_; int byref_; int vrp_; int hidden_; int from_use_; P112 members_; P112 mnext_; P112 chain_; P112 stack_; };
typedef struct R1601 R1601;
typedef struct R1601 *P1600;
struct R118 { int dummy_; rt_int kind_; P135 name_; P169 lits_; P117 elem_; P117 idx_; P173 elemcons_; P173 tcons_; P1600 fields_; P117 target_; P169 decl_; P135 cname_; int forward_; int defined_; int priv_; P117 next_; P117 idx2_; P135 littab_; P117 parent_; rt_int ndigits_; P135 fdelta_; P135 fsmall_; rt_int dims_; int is_restricted_; };
typedef struct R1605 R1605;
typedef struct R1605 *P1604;
struct R174 { int dummy_; P135 lo_; P135 hi_; P135 slen_; rt_int mlo_; rt_int mhi_; int hasm_; P135 lo2_; P135 hi2_; P135 acc_; P173 inner_; P1604 dv_; };
struct R1605 { int dummy_; P135 name_; P135 v_; P1604 next_; };
struct R1586 { int dummy_; P135 name_; rt_int mode_; P117 t_; P173 c_; P135 cfield_; P169 dflt_; P1585 next_; };
typedef struct R1725 R1725;
typedef struct R1725 *P1724;
struct R1725 { int dummy_; P135 disc_; P169 arm_; P169 variant_; P1724 next_; };
struct R1601 { int dummy_; P135 name_; P117 t_; P173 c_; P1600 next_; P169 dflt_; int is_const_; int is_discr_; P112 dsym_; P1724 guard_; P135 cond_; int dyn_; };
struct R139 { int dummy_; P135 match_; P135 label_; rt_int depth_; int is_loop_; P138 next_; };
typedef struct A2173 A2173;
struct A2173 { rt_int lo, hi, lo2, hi2; int *p; };
typedef struct A2176 A2176;
struct A2176 { rt_int lo, hi, lo2, hi2; rt_int *p; };
typedef struct A2178 A2178;
struct A2178 { rt_int lo, hi, lo2, hi2; rt_int *p; };
struct R142 { int dummy_; P169 body_node_; P112 visible_; P141 next_; };
struct f_mk_203fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_202;
 P135 result_;
 rt_gstr r_1093;
};
struct f_new_name_206fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_204;
 P135 *res_205;
};
struct f_is_letter_208fr { int dummy;
 struct f_greenc_1fr *up;
 int c_207;
 int result_;
};
struct f_is_digit_210fr { int dummy;
 struct f_greenc_1fr *up;
 int c_209;
 int result_;
};
struct f_upper_212fr { int dummy;
 struct f_greenc_1fr *up;
 int c_211;
 int result_;
};
struct f_lower_s_214fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_213;
 rt_gstr result_;
 rt_gstr r_1096;
 rt_int i_1099;
};
struct f_upper_s_216fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_215;
 rt_gstr result_;
 rt_gstr r_1107;
 rt_int i_1110;
};
struct f_is_operator_218fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_217;
 int result_;
};
struct f_c_field_220fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_219;
 rt_gstr result_;
};
struct f_q_221fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr result_;
};
struct f_fail_224fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int line_222;
 rt_gstr msg_223;
};
struct f_new_buffer_225fr { int dummy;
 struct f_greenc_1fr *up;
 P121 result_;
};
struct f_put_to_228fr { int dummy;
 struct f_greenc_1fr *up;
 P121 b_226;
 rt_gstr s_227;
 P146 l_1119;
};
struct f_emit_230fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_229;
};
struct f_print_buffer_232fr { int dummy;
 struct f_greenc_1fr *up;
 P121 b_231;
 P146 l_1122;
};
struct f_splice_235fr { int dummy;
 struct f_greenc_1fr *up;
 P121 a_233;
 P121 b_234;
};
struct f_is_reserved_237fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_236;
 int result_;
};
struct f_add_token_241fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_238;
 rt_gstr s_239;
 rt_int ival_240;
};
struct f_digit_value_243fr { int dummy;
 struct f_greenc_1fr *up;
 int c_242;
 rt_int result_;
};
struct f_digit_in_246fr { int dummy;
 struct f_greenc_1fr *up;
 int c_244;
 rt_int base_245;
 rt_int result_;
 rt_int d_1130;
};
struct f_accumulate_250fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int *v_247;
 rt_int base_248;
 rt_int d_249;
};
struct f_lex_line_252fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr line_251;
 rt_int i_1131;
 rt_int j_1132;
 rt_int n_1133;
 int c_1135;
 int quote_1136;
 rt_int v_1137;
 rt_int d_1138;
 rt_gstr buf_1139;
 rt_int bl_1140;
 rt_int base_1182;
 rt_gstr two_1242;
};
struct f_exponent_257fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr line_253;
 rt_int *j_254;
 rt_gstr *buf_255;
 rt_int *bl_256;
};
struct f_include_open_260fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_258;
 rt_int *length_259;
};
struct f_include_char_263fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int i_261;
 int *c_262;
};
struct f_check_include_264fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int n_1278;
};
struct f_include_text_266fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int n_265;
 rt_gstr t_1289;
 rt_int saved_line_1290;
 rt_int from_1291;
 rt_int k_1293;
 rt_int k_1300;
};
struct f_include_line_270fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr t_267;
 rt_int from_268;
 rt_int to_269;
 rt_gstr l_1305;
 rt_int k_1307;
};
struct f_read_source_271fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr buf_1313;
 rt_int bl_1314;
 int c_1315;
};
struct f_nn_274fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_272;
 rt_int line_273;
 P169 result_;
};
struct f_append_278fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *head_275;
 P169 *tail_276;
 P169 x_277;
};
struct f_list_len_280fr { int dummy;
 struct f_greenc_1fr *up;
 P169 l_279;
 rt_int result_;
 rt_int n_1327;
 P169 p_1328;
};
struct f_cur_line_281fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int result_;
};
struct f_at_kw_283fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_282;
 int result_;
};
struct f_at_op_285fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_284;
 int result_;
};
struct f_at_kind_287fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_286;
 int result_;
};
struct f_kind_at_289fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_288;
 rt_int result_;
};
struct f_text_at_291fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_290;
 rt_gstr result_;
};
struct f_perror_293fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr msg_292;
};
struct f_skip_294fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_expect_kw_296fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_295;
};
struct f_expect_op_298fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_297;
};
struct f_expect_id_300fr { int dummy;
 struct f_greenc_1fr *up;
 P135 *res_299;
};
struct f_name_node_302fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_301;
 P169 x_1343;
};
struct f_id_list_304fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_303;
 P169 head_1344;
 P169 tail_1345;
 P169 x_1346;
};
struct f_binop_309fr { int dummy;
 struct f_greenc_1fr *up;
 P135 op_305;
 P169 l_306;
 P169 r_307;
 rt_int line_308;
 P169 result_;
 P169 x_1348;
};
struct f_expr_311fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_310;
 P169 l_1349;
 P169 r_1350;
 P135 op_1351;
 rt_int line_1352;
};
struct f_is_rel_313fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_312;
 int result_;
};
struct f_relation_315fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_314;
 P169 l_1355;
 P169 r_1356;
 P169 lo_1357;
 P169 hi_1358;
 P169 t_1359;
 P135 op_1360;
 rt_int line_1361;
 int neg_1362;
};
struct f_simple_expr_317fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_316;
 P169 l_1366;
 P169 r_1367;
 P135 op_1368;
 rt_int line_1369;
};
struct f_term_319fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_318;
 P169 l_1373;
 P169 r_1374;
 P135 op_1375;
 rt_int line_1376;
};
struct f_factor_321fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_320;
 P169 l_1379;
 P169 r_1380;
 P135 op_1381;
 rt_int line_1382;
};
struct f_primary_323fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_322;
 P169 x_1384;
 rt_int line_1385;
};
struct f_agg_or_paren_325fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_324;
 rt_int line_1390;
 P169 items_1391;
 P169 itail_1392;
 P169 it_1393;
 P169 first_1394;
 P169 keys_1395;
 P169 ktail_1396;
 P169 lab_1397;
 P169 x_1398;
 int more_1399;
};
struct f_aggregate_ahead_326fr { int dummy;
 struct f_greenc_1fr *up;
 int result_;
 rt_int d_1402;
 rt_int k_1403;
 P105 t_1406;
};
struct f_name_p_328fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_327;
 P169 p_1408;
 P169 x_1409;
 P169 args_1410;
 P169 atail_1411;
 P169 lo_1412;
 P169 r_1413;
 rt_int line_1414;
 int more_1415;
 P135 formal_1419;
 rt_int mark_1420;
};
struct f_component_list_330fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_329;
 P169 comps_1423;
 P169 ctail_1424;
 P169 names_1425;
 P169 st_1426;
 P169 def_1427;
 P169 cm_1428;
 P169 v_1429;
 P169 arm_1430;
 P169 atail_1431;
 P169 labs_1432;
 P169 ltail_1433;
 P169 l_1434;
 int is_c_1435;
};
struct f_discrete_range_p_332fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_331;
 P169 lo_1440;
 P169 r_1441;
 rt_int line_1442;
};
struct f_subtype_ind_334fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_333;
 P135 f_1443;
 P169 x_1444;
 P169 r_1445;
 P169 args_1446;
 P169 atail_1447;
 P169 lo_1448;
 rt_int line_1449;
 int more_1450;
};
struct f_type_spec_336fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_335;
 P169 x_1453;
};
struct f_type_def_338fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_337;
 P169 x_1454;
 P169 lits_1455;
 P169 ltail_1456;
 P169 l_1457;
 P169 idx_1458;
 P169 itail_1459;
 P169 r_1460;
 P169 comps_1461;
 P169 ctail_1462;
 P169 names_1463;
 P169 st_1464;
 P169 def_1465;
 P169 cm_1466;
 rt_int line_1467;
 int more_1468;
};
struct f_pragma_p_340fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_339;
 P169 x_1472;
 P169 a_1473;
 P169 head_1474;
 P169 tail_1475;
};
struct f_check_pragma_342fr { int dummy;
 struct f_greenc_1fr *up;
 P169 x_341;
 rt_gstr p_1477;
 rt_int n_1478;
 P169 a_1479;
};
struct f_skip_visibility_343fr { int dummy;
 struct f_greenc_1fr *up;
 P169 names_1481;
};
struct f_skip_representation_344fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_decl_part_346fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_345;
 P169 head_1485;
 P169 tail_1486;
 P169 x_1487;
 P169 names_1488;
};
struct f_object_decl_348fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_347;
 P169 head_1490;
 P169 tail_1491;
 P169 names_1492;
 P169 st_1493;
 P169 init_1494;
 P169 x_1495;
 rt_int line_1496;
 int is_const_1497;
};
struct f_type_decl_350fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_349;
 P169 x_1500;
 rt_int line_1501;
};
struct f_formal_part_352fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_351;
 P169 head_1502;
 P169 tail_1503;
 P169 names_1504;
 P169 st_1505;
 P169 def_1506;
 P169 p_1507;
 rt_int mode_1508;
 int more_1509;
};
struct f_designator_354fr { int dummy;
 struct f_greenc_1fr *up;
 P135 *res_353;
};
struct f_subprogram_356fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_355;
 P169 x_1516;
 rt_int line_1517;
 int is_proc_1518;
};
struct f_body_part_358fr { int dummy;
 struct f_greenc_1fr *up;
 P169 x_357;
};
struct f_parse_handlers_360fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_359;
 P169 head_1520;
 P169 tail_1521;
 P169 h_1522;
 P169 names_1523;
 P169 ntail_1524;
 P169 n_1525;
};
struct f_package_p_362fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_361;
 P169 x_1529;
 rt_int line_1530;
};
struct f_at_statements_end_363fr { int dummy;
 struct f_greenc_1fr *up;
 int result_;
};
struct f_statements_365fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_364;
 P169 head_1531;
 P169 tail_1532;
 P169 x_1533;
};
struct f_statement_367fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_366;
 P169 x_1535;
 P169 t_1536;
 rt_int line_1537;
 P135 label_1538;
};
struct f_task_statement_369fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_368;
};
struct f_if_stmt_371fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_370;
 P169 x_1541;
 P169 arm_1542;
 P169 head_1543;
 P169 tail_1544;
 int go_1545;
};
struct f_case_stmt_373fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_372;
 P169 x_1547;
 P169 arm_1548;
 P169 head_1549;
 P169 tail_1550;
 P169 labs_1551;
 P169 ltail_1552;
 P169 l_1553;
 int others_arm_1554;
};
struct f_loop_stmt_375fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_374;
 P169 x_1557;
 P169 r_1558;
 rt_int line_1559;
};
struct f_compilation_377fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_376;
 P169 head_1560;
 P169 tail_1561;
 P169 x_1562;
};
struct f_hash_379fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_378;
 rt_int result_;
 rt_int h_1564;
 rt_int i_1567;
};
struct f_lookup_381fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_380;
 P112 result_;
 P112 y_1572;
};
struct f_same_task_384fr { int dummy;
 struct f_greenc_1fr *up;
 P112 a_382;
 P112 b_383;
 int result_;
};
struct f_lookup_entry_387fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_385;
 P112 owner_386;
 P112 result_;
 P112 y_1575;
};
struct f_lookup_decl_389fr { int dummy;
 struct f_greenc_1fr *up;
 P169 d_388;
 P112 result_;
 P112 y_1578;
};
struct f_overloadable_391fr { int dummy;
 struct f_greenc_1fr *up;
 P112 y_390;
 int result_;
};
struct f_same_394fr { int dummy;
 struct f_greenc_1fr *up;
 P117 a_392;
 P117 b_393;
 int result_;
};
struct f_root_396fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_395;
 P117 result_;
 P117 r_1581;
};
struct f_derived_from_399fr { int dummy;
 struct f_greenc_1fr *up;
 P117 a_397;
 P117 b_398;
 int result_;
 P117 r_1583;
};
struct f_is_numeric_401fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_400;
 int result_;
};
struct f_is_discrete_403fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_402;
 int result_;
};
struct f_same_signature_406fr { int dummy;
 struct f_greenc_1fr *up;
 P1585 a_404;
 P1585 b_405;
 int result_;
 P1585 x_1587;
 P1585 y_1588;
};
struct f_define_409fr { int dummy;
 struct f_greenc_1fr *up;
 P112 y_407;
 rt_int line_408;
 rt_int h_1590;
 P112 z_1591;
};
struct f_open_scope_410fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_close_scope_411fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_new_sym_414fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_412;
 P135 name_413;
 P112 result_;
};
struct f_new_typ_416fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_415;
 P117 result_;
};
struct f_new_cons_417fr { int dummy;
 struct f_greenc_1fr *up;
 P173 result_;
};
struct f_kind_name_419fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_418;
 rt_gstr result_;
};
struct f_check_type_423fr { int dummy;
 struct f_greenc_1fr *up;
 P117 got_420;
 P117 want_421;
 rt_int line_422;
};
struct f_field_count_425fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_424;
 rt_int result_;
 rt_int n_1609;
 P1600 f_1610;
};
struct f_ctype_428fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_426;
 P135 *r_427;
 P135 s_1612;
};
struct f_field_decls_431fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_429;
 P135 *r_430;
 P1600 f_1614;
 P135 s_1615;
 P135 ct_1616;
};
struct f_declare_ctype_433fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_432;
 P135 ct_1618;
 P135 s_1619;
 P117 target_1620;
};
struct f_lit_index_436fr { int dummy;
 struct f_greenc_1fr *up;
 P169 lits_434;
 rt_gstr name_435;
 rt_int result_;
 rt_int i_1621;
 P169 l_1622;
};
struct f_manifest_440fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_437;
 rt_int *v_438;
 int *ok_439;
 rt_int a_1624;
 rt_int b_1625;
 int ok2_1626;
 P112 y_1627;
};
struct f_resolve_444fr { int dummy;
 struct f_greenc_1fr *up;
 P169 st_441;
 P117 *t_442;
 P173 *c_443;
 P112 y_1628;
 P117 dummy_1629;
 P135 code_1630;
 int ok_1631;
 P169 r_1632;
};
struct f_constraint_list_448fr { int dummy;
 struct f_greenc_1fr *up;
 P169 st_445;
 P117 t_446;
 P173 c_447;
 P169 r_1633;
 P117 arrt_1634;
 P173 cc_1635;
 P117 it_1636;
};
struct f_discriminant_constraint_452fr { int dummy;
 struct f_greenc_1fr *up;
 P169 st_449;
 P117 t_450;
 P173 c_451;
 P169 a_1638;
 P1600 f_1639;
 P117 vt_1640;
 P135 v_1641;
 P1604 d_1642;
 P1604 tail_1643;
};
struct f_discrete_bounds_458fr { int dummy;
 struct f_greenc_1fr *up;
 P169 r_453;
 P117 want_454;
 P117 *t_455;
 P135 *lo_456;
 P135 *hi_457;
 P173 c_1651;
 P112 y_1652;
};
struct f_range_of_462fr { int dummy;
 struct f_greenc_1fr *up;
 P169 r_459;
 P117 t_460;
 P173 c_461;
 P117 dummy_1653;
 int ok_1654;
};
struct f_fresh_typ_466fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_463;
 P135 name_464;
 P117 *t_465;
 P117 ph_1655;
};
struct f_inherit_470fr { int dummy;
 struct f_greenc_1fr *up;
 P117 parent_467;
 P117 t_468;
 rt_int line_469;
 P112 s_1656;
 P112 z_1657;
 P1585 p_1658;
 P1585 q_1659;
 P1585 tail_1660;
 int uses_1661;
 P112 news_1662;
};
struct f_derive_literals_473fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_471;
 rt_int line_472;
 P169 l_1669;
 rt_int n_1670;
 P112 y_1671;
};
struct f_type_definition_478fr { int dummy;
 struct f_greenc_1fr *up;
 P169 d_474;
 P135 name_475;
 P117 *t_476;
 P173 *c_477;
 P117 dummy_1673;
 P117 it_1674;
 P173 ic_1675;
 P169 l_1676;
 P169 comp_1677;
 P1600 f_1678;
 P1600 tail_1679;
 int ok_1680;
 rt_int n_1681;
 P112 y_1682;
};
struct f_array_type_485fr { int dummy;
 struct f_greenc_1fr *up;
 P169 idx_479;
 P169 comp_480;
 P135 name_481;
 rt_int line_482;
 P117 *t_483;
 P173 *c_484;
 P169 l_1686;
 P173 rowc_1687;
 P173 ic_1688;
 P117 it_1689;
};
struct f_static_range_489fr { int dummy;
 struct f_greenc_1fr *up;
 P169 l_486;
 P169 h_487;
 P173 c_488;
 int ok_1690;
 int ok2_1691;
};
struct f_elem_ctype_492fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_490;
 P135 *r_491;
};
struct f_first_index_495fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_493;
 P135 *r_494;
};
struct f_is_string_497fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_496;
 int result_;
};
struct f_subst_500fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_498;
 rt_gstr r_499;
 rt_gstr result_;
 rt_int i_1697;
};
struct f_mentions_record_502fr { int dummy;
 struct f_greenc_1fr *up;
 P135 s_501;
 int result_;
 rt_int i_1711;
};
struct f_subst_cons_506fr { int dummy;
 struct f_greenc_1fr *up;
 P173 c_503;
 rt_gstr r_504;
 P173 *res_505;
};
struct f_remove_sym_508fr { int dummy;
 struct f_greenc_1fr *up;
 P112 y_507;
 rt_int h_1717;
 P112 p_1718;
};
struct f_record_components_513fr { int dummy;
 struct f_greenc_1fr *up;
 P169 list_509;
 P117 t_510;
 P1724 g_511;
 rt_int line_512;
 P169 comp_1726;
 P1600 f_1727;
 P1600 tail_1728;
 P1600 df_1729;
 P169 prev_1730;
 P117 pt_1731;
 P117 vt_1732;
 P173 pc_1733;
 P112 y_1734;
 P135 acc_1735;
 P135 v_1736;
 P135 x_1737;
 P169 arm_1738;
 P1724 g2_1739;
};
struct f_guard_cond_517fr { int dummy;
 struct f_greenc_1fr *up;
 P1724 g_514;
 P117 t_515;
 P135 *r_516;
 P169 a_1749;
 P169 l_1750;
 P1600 df_1751;
 P135 x_1752;
 P135 d_1753;
 P117 dt_1754;
 P117 vt_1755;
 P135 lo_1756;
 P135 hi_1757;
};
struct f_arm_test_522fr { int dummy;
 struct f_greenc_1fr *up;
 P169 arm_518;
 P135 dname_519;
 rt_gstr d_520;
 P135 *x_521;
 P169 l_1759;
 P112 y_1760;
 P117 dt_1761;
 P117 vt_1762;
 P135 lo_1763;
 P135 hi_1764;
};
struct f_derived_type_527fr { int dummy;
 struct f_greenc_1fr *up;
 P169 d_523;
 P135 name_524;
 P117 *t_525;
 P173 *c_526;
 P117 pt_1766;
 P135 ct_1767;
 P117 ph_1768;
};
struct f_real_type_532fr { int dummy;
 struct f_greenc_1fr *up;
 P169 d_528;
 P135 name_529;
 P117 *t_530;
 P173 *c_531;
 P117 dt_1769;
 P135 dv_1770;
 rt_int n_1771;
 int ok_1772;
};
struct f_finish_ptr_534fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_533;
 P173 c_1773;
};
struct f_init_storage_538fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lval_535;
 P117 t_536;
 P173 c_537;
 P173 ec_1774;
 P173 fc_1775;
 P1604 d_1776;
 P135 ct_1777;
 P135 i_1778;
 P135 v_1779;
 P135 x_1780;
 P117 vt_1781;
 P1600 f_1782;
};
struct f_composite_540fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_539;
 int result_;
};
struct f_assign_code_546fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lval_541;
 P117 t_542;
 rt_gstr v_543;
 P173 c_544;
 P135 *r_545;
 P135 ct_1786;
 P135 x_1787;
 P1604 d_1788;
};
struct f_copy_code_550fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_547;
 rt_gstr v_548;
 P135 *r_549;
 P135 ct_1790;
};
struct f_eq_code_555fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_551;
 rt_gstr a_552;
 rt_gstr b_553;
 P135 *r_554;
 P135 ct_1791;
};
struct f_seen_name_558fr { int dummy;
 struct f_greenc_1fr *up;
 P146 l_556;
 rt_gstr s_557;
 int result_;
 P146 p_1792;
};
struct f_emit_helpers_559fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_1794;
 P135 et_1795;
 P146 done_1796;
 P146 l_1797;
};
struct f_helper_bodies_561fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_560;
 P135 c_1801;
 P121 b_1802;
 P135 ct_1803;
 P135 et_1804;
 P135 x_1805;
 P135 y_1806;
 P135 conds_1807;
 P1600 f_1808;
};
struct f_storage_565fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_562;
 P117 t_563;
 P135 *access_code_564;
 P135 ct_1811;
 P135 g_1812;
};
struct f_bind_568fr { int dummy;
 struct f_greenc_1fr *up;
 P112 y_566;
 P135 access_code_567;
};
struct f_declare_subprograms_570fr { int dummy;
 struct f_greenc_1fr *up;
 P169 from_569;
 P169 e_1813;
};
struct f_declare_one_572fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_571;
 P112 y_1815;
 P112 z_1816;
};
struct f_build_subprogram_575fr { int dummy;
 struct f_greenc_1fr *up;
 P169 d_573;
 P112 *y_574;
 P169 p_1820;
 P1585 pm_1821;
 P1585 tail_1822;
 P173 rc_1823;
 rt_int k_1824;
};
struct f_decl_elements_577fr { int dummy;
 struct f_greenc_1fr *up;
 P169 decls_576;
 P169 e_1828;
 int declared_1829;
};
struct f_decl_element_579fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_578;
 P169 pd_1831;
 P112 y_1832;
 P112 z_1833;
 P117 t_1834;
 P117 vt_1835;
 P173 c_1836;
 P135 acc_1837;
 P135 v_1838;
 P135 x_1839;
 int ok_1840;
};
struct f_pragma_decl_581fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_580;
};
struct f_resolve_object_type_585fr { int dummy;
 struct f_greenc_1fr *up;
 P169 st_582;
 P117 *t_583;
 P173 *c_584;
};
struct f_other_decl_587fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_586;
};
struct f_subprogram_body_590fr { int dummy;
 struct f_greenc_1fr *up;
 P169 d_588;
 P112 y_589;
 P121 saved_code_1842;
 P121 saved_fields_1843;
 int saved_in_1844;
 P112 saved_sym_1845;
 P138 saved_exits_1846;
 rt_int saved_frames_1847;
 P146 saved_handlers_1848;
 P146 saved_cleanups_1849;
 P112 saved_pure_1850;
 P135 aw_1851;
 rt_int saved_pdepth_1852;
 P135 args_1853;
 P135 head_1854;
 P135 frame_1855;
 P135 parent_1856;
 P135 ct_1857;
 P135 x_1858;
 P1585 pm_1859;
 P112 p_1860;
};
struct f_gen_statements_592fr { int dummy;
 struct f_greenc_1fr *up;
 P169 stmts_591;
 P169 s_1866;
};
struct f_pop_frames_594fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int upto_593;
 rt_int i_1868;
 P146 c_1869;
};
struct f_push_cleanup_596fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_595;
};
struct f_pop_cleanup_597fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_guarded_601fr { int dummy;
 struct f_greenc_1fr *up;
 P169 stmts_598;
 P169 hs_599;
 rt_int line_600;
 P135 f_1873;
 P135 x_1874;
 P169 h_1875;
 P169 n_1876;
 int first_1877;
 int has_others_1878;
 P135 conds_1879;
};
struct f_exc_id_605fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_602;
 rt_int line_603;
 P135 *r_604;
 P112 y_1884;
};
struct f_gen_statement_607fr { int dummy;
 struct f_greenc_1fr *up;
 P169 s_606;
 P117 t_1885;
 P117 vt_1886;
 P173 c_1887;
 P135 lv_1888;
 P135 v_1889;
 P135 x_1890;
 int ro_1891;
};
struct f_slice_assign_609fr { int dummy;
 struct f_greenc_1fr *up;
 P169 s_608;
 P135 lv_1893;
 P135 v_1894;
 P135 sl_1895;
 P135 x_1896;
 P117 t_1897;
 P117 st_1898;
 P117 vt_1899;
 P173 c_1900;
 int ro_1901;
};
struct f_gen_call_611fr { int dummy;
 struct f_greenc_1fr *up;
 P169 s_610;
 P169 c_1902;
 P117 t_1903;
 P135 v_1904;
};
struct f_gen_if_613fr { int dummy;
 struct f_greenc_1fr *up;
 P169 s_612;
 P169 a_1905;
 int first_1906;
 P117 t_1907;
 P135 v_1908;
};
struct f_gen_case_615fr { int dummy;
 struct f_greenc_1fr *up;
 P169 s_614;
 P117 st_1910;
 P117 vt_1911;
 int first_1912;
 P169 a_1913;
 P169 lab_1914;
 P135 sel_1915;
 P135 tmp_1916;
 P135 ct_1917;
 P135 conds_1918;
 P135 v_1919;
 P135 lo_1920;
 P135 hi_1921;
};
struct f_push_exit_619fr { int dummy;
 struct f_greenc_1fr *up;
 P135 match_616;
 int is_loop_617;
 P135 *label_618;
};
struct f_gen_loop_621fr { int dummy;
 struct f_greenc_1fr *up;
 P169 s_620;
 P117 t_1926;
 P117 vt_1927;
 P173 c_1928;
 P135 label_1929;
 P135 cond_1930;
 P135 acc_1931;
 P135 lov_1932;
 P135 hiv_1933;
 P135 it_1934;
 P112 y_1935;
 P169 r_1936;
};
struct f_gen_block_623fr { int dummy;
 struct f_greenc_1fr *up;
 P169 s_622;
 P135 label_1937;
 P135 aw_1938;
};
struct f_gen_exit_625fr { int dummy;
 struct f_greenc_1fr *up;
 P169 s_624;
 P138 x_1939;
 P117 t_1940;
 P135 v_1941;
};
struct f_gen_return_627fr { int dummy;
 struct f_greenc_1fr *up;
 P169 s_626;
 P117 vt_1943;
 P135 v_1944;
};
struct f_access_of_630fr { int dummy;
 struct f_greenc_1fr *up;
 P112 y_628;
 P135 *r_629;
 P135 p_1945;
 rt_int i_1947;
};
struct f_link_to_633fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int l_631;
 P135 *r_632;
 rt_int i_1952;
};
struct f_c_ident_635fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_634;
 rt_gstr result_;
};
struct f_deref_639fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_636;
 P117 t_637;
 P135 *r_638;
 P135 ct_1956;
};
struct f_is_object_641fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_640;
 int result_;
 P112 y_1957;
};
struct f_lvalue_647fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_642;
 P135 *code_out_643;
 P117 *t_644;
 P173 *c_645;
 int *ro_646;
 P112 y_1958;
 P135 base_1959;
 P117 bt_1960;
 P173 bc_1961;
};
struct f_select_on_656fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_648;
 P117 bt_649;
 P169 e_650;
 int *ro_651;
 int lv_652;
 P135 *code_out_653;
 P117 *t_654;
 P173 *c_655;
 P1600 f_1962;
 P135 d_1963;
 P135 ct_1964;
 P135 tmp_1965;
};
struct f_index_on_665fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_657;
 P117 bt_658;
 P169 e_659;
 int *ro_660;
 int lv_661;
 P135 *code_out_662;
 P117 *t_663;
 P173 *c_664;
 P169 a_1967;
 P117 arrt_1968;
 P135 acc_1969;
 P117 it_1970;
 P135 i_1971;
 P135 lo_1972;
 P135 hi_1973;
 P135 d_1974;
 P135 ct_1975;
 P135 tmp_1976;
};
struct f_is_type_name_667fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_666;
 int result_;
 P112 y_1978;
};
struct f_is_char_lit_669fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_668;
 int result_;
};
struct f_is_enum_lit_671fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_670;
 int result_;
 P112 y_1980;
};
struct f_c_string_673fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_672;
 rt_gstr result_;
 rt_int n_1981;
 rt_int i_1984;
 rt_gstr r_1993;
 rt_int j_1994;
 rt_int i_1998;
};
struct f_is_literal_675fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_674;
 int result_;
};
struct f_range_bounds_683fr { int dummy;
 struct f_greenc_1fr *up;
 P169 l_676;
 P169 h_677;
 P117 want_678;
 rt_int line_679;
 P117 *t_680;
 P135 *lo_681;
 P135 *hi_682;
 P117 w_2009;
 P117 t2_2010;
};
struct f_gexpr_688fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_684;
 P117 want_685;
 P117 *t_686;
 P135 *r_687;
 P112 y_2011;
 P117 bt_2012;
 P173 c_2013;
 int ro_2014;
 P135 base_2015;
 P135 a_2016;
 P169 nm_2017;
 int saved_lv_2018;
};
struct f_gexpr_1_693fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_689;
 P117 want_690;
 P117 *t_691;
 P135 *r_692;
 P112 y_2019;
 P117 bt_2020;
 P173 c_2021;
 int ro_2022;
 P135 base_2023;
 P135 a_2024;
 P169 nm_2025;
};
struct f_string_aggregate_698fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_694;
 P117 want_695;
 P117 *t_696;
 P135 *r_697;
 P169 ag_2029;
 P169 it_2030;
 P169 tail_2031;
 P169 l_2032;
 rt_int k_2035;
};
struct f_char_literal_703fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_699;
 P117 want_700;
 P117 *t_701;
 P135 *r_702;
 rt_int i_2041;
};
struct f_gen_name_708fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_704;
 P117 want_705;
 P117 *t_706;
 P135 *r_707;
 P112 y_2044;
 P112 z_2045;
 P169 call_2046;
};
struct f_gen_unop_713fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_709;
 P117 want_710;
 P117 *t_711;
 P135 *r_712;
 P135 a_2048;
 int done_2049;
};
struct f_short_int_715fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_714;
 int result_;
};
struct f_float_kind_717fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_716;
 rt_gstr result_;
};
struct f_catenation_722fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_718;
 P117 want_719;
 P117 *t_720;
 P135 *r_721;
 P117 arrt_2050;
 P117 ta_2051;
 P117 tb_2052;
 P135 a_2053;
 P135 b_2054;
 P135 ct_2055;
};
struct f_cat_operand_727fr { int dummy;
 struct f_greenc_1fr *up;
 P169 x_723;
 P117 arrt_724;
 rt_int line_725;
 P135 *r_726;
 P117 tx_2056;
 P135 ct_2057;
};
struct f_arithmetic_732fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_728;
 P117 want_729;
 P117 *t_730;
 P135 *r_731;
 rt_gstr op_2058;
 P117 ta_2059;
 P117 tb_2060;
 P117 hint_2061;
 P135 a_2062;
 P135 b_2063;
};
struct f_fixed_operation_740fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_733;
 P117 ta_734;
 P117 tb_735;
 rt_gstr a_736;
 rt_gstr b_737;
 P117 *t_738;
 P135 *r_739;
 rt_gstr op_2064;
};
struct f_gen_binop_745fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_741;
 P117 want_742;
 P117 *t_743;
 P135 *r_744;
 rt_gstr op_2065;
 P117 ta_2066;
 P117 tb_2067;
 P117 hint_2068;
 P117 ct_2069;
 P135 a_2070;
 P135 b_2071;
 P135 x_2072;
 P135 dummy_2073;
 int done_2074;
};
struct f_conversion_750fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_746;
 P112 y_747;
 P117 *t_748;
 P135 *r_749;
 P117 aty_2075;
 P135 a_2076;
 P169 ag_2077;
 P169 it_2078;
 P169 tail_2079;
 P169 arg_2080;
};
struct f_constrain_754fr { int dummy;
 struct f_greenc_1fr *up;
 P112 y_751;
 P117 t_752;
 P135 *r_753;
 P135 ct_2082;
 P135 tmp_2083;
};
struct f_array_conversion_761fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_755;
 P117 t_756;
 P117 aty_757;
 P173 c_758;
 rt_gstr a_759;
 P135 *r_760;
 P117 x_2084;
 P117 y_2085;
 P135 ct_2086;
 P135 act_2087;
 P135 et_2088;
 P135 tmp_2089;
 P135 s_2090;
 rt_int k_2092;
};
struct f_gen_attr_766fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_762;
 P117 want_763;
 P117 *t_764;
 P135 *r_765;
 rt_gstr a_2096;
 P112 y_2097;
 P117 tt_2098;
 P117 aty_2099;
 P135 v_2100;
 P135 d_2101;
 P173 c_2102;
 rt_int n_2103;
 int ro_2104;
};
struct f_attr_dim_770fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_767;
 P117 arrt_768;
 rt_int *n_769;
 int ok_2105;
};
struct f_object_array_attr_776fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_771;
 P117 arrt_772;
 rt_gstr v_773;
 P117 *t_774;
 P135 *r_775;
 rt_int n_2106;
 P117 it_2107;
 P135 ct_2108;
 P135 tmp_2109;
 P135 p_2110;
 P135 lo_2111;
 P135 hi_2112;
 rt_int k_2114;
 rt_int k_2119;
};
struct f_type_array_attr_782fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_777;
 P117 arrt_778;
 P173 c_779;
 P117 *t_780;
 P135 *r_781;
 rt_int n_2123;
 P117 it_2124;
 P173 cc_2125;
 rt_int k_2127;
};
struct f_lit_table_785fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_783;
 P135 *r_784;
 P169 l_2131;
 P135 s_2132;
};
struct f_val_rep_791fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_786;
 P117 tt_787;
 P173 c_788;
 P117 *t_789;
 P135 *r_790;
 P117 aty_2135;
 P135 v_2136;
 P135 lt_2137;
 rt_int n_2138;
};
struct f_allocator_796fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_792;
 P117 want_793;
 P117 *t_794;
 P135 *r_795;
 P112 y_2139;
 P117 target_2140;
 P117 vt_2141;
 P135 ct_2142;
 P135 pt_2143;
 P135 cell_2144;
 P135 v_2145;
 P135 x_2146;
};
struct f_aggregate_801fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_797;
 P117 want_798;
 P117 *t_799;
 P135 *r_800;
 P135 b_2147;
};
struct f_captured_804fr { int dummy;
 struct f_greenc_1fr *up;
 P121 b_802;
 P135 *r_803;
 P146 l_2148;
};
struct f_field_at_807fr { int dummy;
 struct f_greenc_1fr *up;
 P117 rt_805;
 rt_int k_806;
 P1600 result_;
 P1600 f_2150;
 rt_int i_2152;
};
struct f_item_for_812fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_808;
 P117 rt_809;
 rt_int k_810;
 rt_int p_811;
 P169 result_;
 P169 it_2156;
 P169 lab_2157;
 rt_int n_2158;
};
struct f_arm_holds_816fr { int dummy;
 struct f_greenc_1fr *up;
 P169 arm_813;
 rt_int v_814;
 int *res_815;
 P169 l_2161;
 rt_int lo_2162;
 rt_int hi_2163;
 int ok_2164;
};
struct f_record_aggregate_820fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_817;
 P117 rt_818;
 P135 *r_819;
 P169 it_2166;
 P169 lab_2167;
 P169 vn_2168;
 P169 a_2169;
 P1600 f_2170;
 P1724 g_2171;
 rt_int n_2172;
 A2173 done_2174;
 A2173 active_2175;
 A2176 dvs_2177;
 A2178 order_2179;
 rt_int norder_2180;
 rt_int nung_2181;
 rt_int k_2182;
 rt_int d_2183;
 rt_int npos_2184;
 P121 saved_2185;
 P135 ct_2186;
 P135 tmp_2187;
 P135 parts_2188;
 int named_2189;
 int ok_2190;
 int holds_2191;
 rt_int i_2193;
 rt_int p_2202;
 rt_int i_2221;
 rt_int i_2238;
 rt_int i_2249;
};
struct f_field_index_823fr { int dummy;
 struct f_greenc_1fr *up;
 P117 rt_821;
 rt_gstr name_822;
 rt_int result_;
 P1600 f_2255;
 rt_int k_2256;
};
struct f_agg_component_829fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr tmp_824;
 P117 rt_825;
 rt_int k_826;
 P169 v_827;
 rt_int line_828;
 P1600 f_2258;
 P117 vt_2259;
 P135 x_2260;
 P135 y_2261;
 rt_int i_2263;
};
struct f_static_choice_833fr { int dummy;
 struct f_greenc_1fr *up;
 P169 x_830;
 rt_int *v_831;
 int *ok_832;
};
struct f_array_aggregate_838fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_834;
 P117 arrt_835;
 P135 bounds_836;
 P135 *r_837;
 P169 it_2268;
 P169 lab_2269;
 P169 others_it_2270;
 rt_int np_2271;
 rt_int nnamed_2272;
 rt_int clo_2273;
 rt_int chi_2274;
 rt_int v1_2275;
 rt_int v2_2276;
 int all_static_2277;
 int ok_2278;
 int ok2_2279;
 int first_choice_2280;
 P117 vt_2281;
 P135 ct_2282;
 P135 et_2283;
 P135 tmp_2284;
 P135 lo_2285;
 P135 hi_2286;
 P135 v_2287;
 P135 x_2288;
 P135 parts_2289;
 P135 fill_2290;
 P135 rowb_2291;
 P135 key_2292;
 P135 khi_2293;
 P121 saved_2294;
};
struct f_element_store_842fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lv_839;
 P117 arrt_840;
 rt_gstr v_841;
 P135 x_2299;
};
struct f_check_choices_846fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_843;
 P117 arrt_844;
 int has_others_845;
 P169 a_2300;
 P169 b_2301;
 P169 lab_2302;
 P169 lab2_2303;
 rt_int lo1_2304;
 rt_int hi1_2305;
 rt_int lo2_2306;
 rt_int hi2_2307;
 rt_int count_2308;
 int ok_2309;
};
struct f_actual_for_850fr { int dummy;
 struct f_greenc_1fr *up;
 P169 args_847;
 P1585 pm_848;
 P1585 first_849;
 P169 result_;
 P169 a_2314;
 P1585 p_2315;
};
struct f_gcall_855fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_851;
 int is_stmt_852;
 P117 *t_853;
 P135 *r_854;
 P169 fn_2318;
 P169 nm_2319;
 P112 y_2320;
 P135 args_2321;
 P135 lv_2322;
 P135 v_2323;
 P135 ct_2324;
 P135 x_2325;
 P169 a_2326;
 P1585 pm_2327;
 P117 lt_2328;
 P117 vt_2329;
 P173 lc_2330;
 int ro_2331;
};
struct f_gcall_with_860fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_856;
 P112 y_857;
 P117 *t_858;
 P135 *r_859;
 P135 args_2332;
 P135 lv_2333;
 P135 v_2334;
 P135 x1_2335;
 P135 x2_2336;
 P169 a_2337;
 P1585 pm_2338;
 P117 lt_2339;
 P117 vt_2340;
 P173 lc_2341;
 int ro_2342;
};
struct f_builtin_867fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_861;
 P169 args_862;
 rt_int line_863;
 int is_stmt_864;
 P117 *t_865;
 P135 *r_866;
 P117 aty_2345;
 P117 lt_2346;
 P135 a_2347;
 P135 w_2348;
 P135 lv_2349;
 P173 lc_2350;
 int ro_2351;
};
struct f_is_package_869fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_868;
 int result_;
 P112 y_2352;
};
struct f_member_of_873fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_870;
 rt_gstr name_871;
 rt_int line_872;
 P112 result_;
 P112 y_2353;
 P112 m_2354;
};
struct f_inside_package_875fr { int dummy;
 struct f_greenc_1fr *up;
 P169 p_874;
 int result_;
 P146 l_2356;
};
struct f_copy_sym_878fr { int dummy;
 struct f_greenc_1fr *up;
 P112 y_876;
 P112 *z_877;
};
struct f_complete_private_881fr { int dummy;
 struct f_greenc_1fr *up;
 P117 ph_879;
 P117 full_880;
 P135 n_2360;
 P169 p_2361;
};
struct f_package_spec_883fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_882;
 P112 y_2362;
 P112 m_2363;
 P112 z_2364;
 P169 saved_2365;
 P112 first_private_2366;
};
struct f_hidden_from_886fr { int dummy;
 struct f_greenc_1fr *up;
 P112 m_884;
 P112 first_private_885;
 int result_;
 P112 p_2370;
};
struct f_package_body_888fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_887;
 P112 y_2372;
 P112 m_2373;
 P112 z_2374;
 P169 saved_2375;
};
struct f_use_clause_890fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_889;
 P169 n_2382;
 P112 y_2383;
 P112 m_2384;
 P112 z_2385;
 P112 old_2386;
};
struct f_fits_895fr { int dummy;
 struct f_greenc_1fr *up;
 P112 y_891;
 P169 args_892;
 P117 want_893;
 int *ok_894;
 P1585 pm_2389;
 P169 a_2390;
 P117 t_2391;
 P173 c_2392;
 P135 v_2393;
 int ro_2394;
 P121 saved_2395;
 rt_int used_2396;
};
struct f_is_builtin_897fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_896;
 int result_;
};
struct f_resolve_overload_904fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_898;
 P169 args_899;
 int is_stmt_900;
 P117 want_901;
 rt_int line_902;
 P112 *y_903;
 P112 z_2401;
 P112 first_2403;
 rt_int n_2404;
 int ok_2405;
 rt_int pass_2407;
};
struct f_resolve_member_overload_912fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_905;
 rt_gstr name_906;
 P169 args_907;
 int is_stmt_908;
 P117 want_909;
 rt_int line_910;
 P112 *y_911;
 P112 pk_2413;
 P112 z_2414;
 rt_int n_2415;
 int ok_2416;
 rt_int pass_2418;
};
struct f_user_operator_918fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_913;
 P117 want_914;
 P117 *t_915;
 P135 *r_916;
 int *done_917;
 P135 op_2423;
 int negate_2424;
 P112 y_2425;
 P169 call_2426;
 P169 fname_2427;
 P169 l_2428;
 P169 rt_2429;
 int ok_2430;
};
struct f_task_p_920fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_919;
 P169 x_2433;
 P169 r_2434;
 rt_int line_2435;
};
struct f_entry_p_922fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_921;
 P169 x_2436;
};
struct f_accept_p_924fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_923;
 P169 x_2437;
};
struct f_delay_p_926fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_925;
 P169 x_2438;
};
struct f_designators_928fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_927;
 P169 head_2439;
 P169 tail_2440;
 P169 n_2441;
};
struct f_parse_task_statement_930fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_929;
 P169 x_2443;
 P169 alt_2444;
 P169 head_2445;
 P169 tail_2446;
 rt_int line_2447;
};
struct f_path_at_934fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int level_931;
 rt_gstr field_932;
 P135 *r_933;
 rt_int i_2450;
};
struct f_is_task_name_936fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_935;
 int result_;
 P112 y_2454;
};
struct f_task_of_940fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_937;
 P112 *y_938;
 P169 *ix_939;
 P169 n_2455;
};
struct f_own_index_942fr { int dummy;
 struct f_greenc_1fr *up;
 P135 *r_941;
 P112 y_2456;
};
struct f_member_947fr { int dummy;
 struct f_greenc_1fr *up;
 P112 y_943;
 rt_gstr arr_944;
 rt_gstr i_945;
 P135 *r_946;
 P135 lo_2457;
 P135 hi_2458;
};
struct f_act_path_950fr { int dummy;
 struct f_greenc_1fr *up;
 P112 y_948;
 P135 *r_949;
 P135 i_2459;
};
struct f_act_path_i_954fr { int dummy;
 struct f_greenc_1fr *up;
 P112 y_951;
 rt_gstr i_952;
 P135 *r_953;
};
struct f_entry_path_958fr { int dummy;
 struct f_greenc_1fr *up;
 P112 y_955;
 rt_gstr i_956;
 P135 *r_957;
 P135 own_2460;
};
struct f_declare_slot_961fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr ctype_name_959;
 rt_gstr field_960;
};
struct f_task_decl_963fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_962;
};
struct f_family_arg_struct_964fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_family_bounds_968fr { int dummy;
 struct f_greenc_1fr *up;
 P169 b_965;
 P112 y_966;
 P135 x_967;
 P135 lo_2462;
 P135 hi_2463;
 P135 v_2464;
 P135 d_2465;
 P117 vt_2466;
 P173 c_2467;
};
struct f_entry_family_slot_973fr { int dummy;
 struct f_greenc_1fr *up;
 P112 y_969;
 rt_gstr base_970;
 rt_gstr i_971;
 P135 *r_972;
 P135 lo_2468;
 P135 hi_2469;
};
struct f_task_spec_975fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_974;
 int has_procs_2470;
 int saved_defer_2471;
 P135 fields_2472;
 P135 ct_2473;
 P1585 pm_2474;
 P135 fp_2475;
 P135 flo_2476;
 P135 fhi_2477;
 P112 y_2478;
 P112 m_2479;
 P112 z_2480;
 P112 saved_2481;
 P135 d_2482;
 P135 v_2483;
 P135 p_2484;
 P135 p2_2485;
 P117 vt_2486;
 P169 r_2487;
};
struct f_entry_decl_977fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_976;
 P112 y_2491;
 P169 p_2492;
 P1585 pm_2493;
 P1585 tail_2494;
 P135 fields_2495;
 P135 ct_2496;
 P135 x_2497;
 P135 lo_2498;
 P135 hi_2499;
};
struct f_task_body_979fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_978;
 P112 y_2503;
 P112 b_2504;
 P112 m_2505;
 P112 z_2506;
 P135 upp_2507;
 P112 saved_2508;
};
struct f_task_awaits_982fr { int dummy;
 struct f_greenc_1fr *up;
 P169 decls_980;
 P135 *aw_981;
 P169 e_2512;
 P112 y_2513;
 P135 p_2514;
};
struct f_task_failure_984fr { int dummy;
 struct f_greenc_1fr *up;
 P169 s_983;
 P112 y_2516;
 P135 a_2517;
 P135 i_2518;
 P117 it_2519;
};
struct f_entry_sym_988fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_985;
 P112 *y_986;
 P169 *ix_987;
 P112 t_2520;
};
struct f_other_call_993fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_989;
 int is_stmt_990;
 P117 *t_991;
 P135 *r_992;
 P112 y_2521;
 P1585 pm_2522;
 P169 a_2523;
 P135 parts_2524;
 P135 v_2525;
 P135 lv_2526;
 P135 ent_2527;
 P135 act_2528;
 P135 i_2529;
 P117 vt_2530;
 P117 lt_2531;
 P173 lc_2532;
 int ro_2533;
 P169 ix_2534;
 P169 fix_2535;
 P169 args_node_2536;
};
struct f_other_attr_998fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_994;
 P112 y_995;
 P117 *t_996;
 P135 *r_997;
 rt_gstr a_2538;
 P135 p_2539;
};
struct f_member_attr_1002fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_999;
 P117 *t_1000;
 P135 *r_1001;
 P112 y_2540;
 P169 ix_2541;
 P135 i_2542;
 P135 p_2543;
 P117 vt_2544;
};
struct f_task_builtin_1008fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1003;
 P169 args_1004;
 rt_int line_1005;
 P117 *t_1006;
 P135 *r_1007;
 P117 vt_2545;
 P135 v_2546;
};
struct f_gen_accept_1010fr { int dummy;
 struct f_greenc_1fr *up;
 P169 s_1009;
 P112 y_2547;
 P138 saved_ax_2548;
 P135 ent_2549;
 P135 ep_2550;
 P135 xf_2551;
 P135 x_2552;
 P1585 pm_2553;
 P169 f_2554;
 P112 p_2555;
};
struct f_member_slot_1014fr { int dummy;
 struct f_greenc_1fr *up;
 P112 y_1011;
 P169 s_1012;
 P135 *ent_1013;
 P117 vt_2557;
 P135 v_2558;
};
struct f_gen_delay_ticks_1017fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_1015;
 P135 *r_1016;
 P117 vt_2559;
 P135 v_2560;
};
struct f_gen_select_1019fr { int dummy;
 struct f_greenc_1fr *up;
 P169 s_1018;
 P169 alt_2561;
 rt_int n_2562;
 rt_int i_2563;
 int has_delay_2564;
 int has_accept_2565;
 P135 al_2566;
 P135 w_2567;
 P135 g_2568;
 P135 ent_2569;
 P135 ticks_2570;
 P117 vt_2571;
 P112 y_2572;
};
struct f_family_range_1024fr { int dummy;
 struct f_greenc_1fr *up;
 P112 y_1020;
 P169 ix_1021;
 P135 *lo_1022;
 P135 *hi_1023;
 P117 vt_2576;
};
struct f_task_statement_gen_1026fr { int dummy;
 struct f_greenc_1fr *up;
 P169 s_1025;
 P169 n_2577;
 P169 ix_2578;
 P112 y_2579;
 P135 a_2580;
 P135 d_2581;
 P135 l_2582;
 P135 ticks_2583;
 P135 lo_2584;
 P135 hi_2585;
};
struct f_root_name_1028fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_1027;
 P169 result_;
};
struct f_check_pure_target_1031fr { int dummy;
 struct f_greenc_1fr *up;
 P169 target_1029;
 rt_int line_1030;
 P169 n_2589;
 P112 y_2590;
};
struct f_assigns_nonlocal_1034fr { int dummy;
 struct f_greenc_1fr *up;
 P169 d_1032;
 rt_gstr name_1033;
 int result_;
};
struct f_declares_1037fr { int dummy;
 struct f_greenc_1fr *up;
 P169 d_1035;
 rt_gstr name_1036;
 int result_;
 P169 p_2591;
 P169 e_2592;
};
struct f_scan_handlers_1041fr { int dummy;
 struct f_greenc_1fr *up;
 P169 h_1038;
 P169 d_1039;
 rt_gstr name_1040;
 int result_;
 P169 p_2595;
};
struct f_scan_assigns_1045fr { int dummy;
 struct f_greenc_1fr *up;
 P169 stmts_1042;
 P169 d_1043;
 rt_gstr name_1044;
 int result_;
 P169 s_2597;
 P169 a_2598;
 P169 r_2599;
};
struct f_check_call_rules_1048fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_1046;
 P112 y_1047;
 P112 z_2603;
 P112 s_2604;
};
struct f_generic_p_1050fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_1049;
 P169 x_2606;
 P169 p_2607;
 P169 head_2608;
 P169 tail_2609;
 P169 names_2610;
 P169 st_2611;
 P169 def_2612;
 P169 sub_2613;
 P135 def_name_text_2614;
 int more_2615;
};
struct f_instantiation_1053fr { int dummy;
 struct f_greenc_1fr *up;
 P169 x_1051;
 P169 *res_1052;
 P169 i_2618;
 P169 head_2619;
 P169 tail_2620;
 P169 a_2621;
 P135 formal_2622;
 rt_int mark_2623;
 int more_2624;
};
struct f_generic_decl_1055fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_1054;
 P112 y_2626;
};
struct f_is_generic_name_1057fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_1056;
 int result_;
 P112 y_2627;
};
struct f_attach_generic_body_1059fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_1058;
 P112 y_2628;
};
struct f_restore_generic_context_1062fr { int dummy;
 struct f_greenc_1fr *up;
 P169 body_node_1060;
 rt_int line_1061;
 P141 ctx_2631;
 P112 m_2632;
 P112 z_2633;
 int seen_2634;
};
struct f_gactual_1066fr { int dummy;
 struct f_greenc_1fr *up;
 P169 args_1063;
 rt_int nth_1064;
 rt_gstr name_1065;
 P169 result_;
 P169 a_2639;
 rt_int i_2640;
};
struct f_copy_node_1070fr { int dummy;
 struct f_greenc_1fr *up;
 P169 n_1067;
 P135 name_1068;
 P169 *r_1069;
};
struct f_instantiate_1072fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_1071;
 P112 g_2642;
 P169 gd_2643;
 P169 pat_2644;
 P169 f_2645;
 P169 a_2646;
 P169 cn_2647;
 P112 y_2648;
 P112 z_2649;
 P112 fs_2650;
 rt_int nth_2651;
 P117 t_2652;
 P117 vt_2653;
 P173 c_2654;
 P135 v_2655;
 P135 acc_2656;
 P135 x_2657;
 int ok_2658;
};
struct f_predef_type_1077fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1073;
 P117 t_1074;
 rt_gstr lo_1075;
 rt_gstr hi_1076;
 P112 y_2662;
};
struct f_predef_const_1081fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1078;
 P117 t_1079;
 rt_gstr code_text_1080;
 P112 y_2669;
};
struct f_predef_exc_1083fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1082;
 P112 y_2670;
};
struct f_predef_lit_1087fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1084;
 P117 t_1085;
 rt_int v_1086;
 P112 y_2671;
};
struct f_predefine_1088fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr control_2672;
 rt_int start_2673;
 rt_int code_no_2674;
 rt_int i_2677;
 rt_int i_2685;
};
struct f_translate_1090fr { int dummy;
 struct f_greenc_1fr *up;
 P169 u_1089;
 P169 p_2689;
 P112 y_2690;
};
struct f_print_program_1091fr { int dummy;
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
 A104 toks_107;
 rt_int ntoks_108;
 rt_int tpos_109;
 rt_int src_line_110;
 A111 table_114;
 rt_int depth_115;
 P112 scope_stack_116;
 P117 all_types_119;
 rt_int serial_120;
 P121 out_types_123;
 P121 out_frames_124;
 P121 out_helpers_125;
 P121 out_protos_126;
 P121 out_globals_127;
 P121 out_funcs_128;
 P121 out_init_129;
 P121 out_excs_130;
 P121 code_131;
 P121 fields_buf_132;
 int in_func_133;
 rt_int cur_level_134;
 P135 st_field_136;
 P112 func_sym_137;
 P138 exits_140;
 P141 generic_contexts_143;
 P138 accept_exits_144;
 rt_int frames_145;
 P146 handlers_148;
 P146 cleanups_149;
 rt_int trial_150;
 P117 ty_int_151;
 P117 ty_bool_152;
 P117 ty_float_153;
 P117 ty_char_154;
 P117 ty_string_155;
 P117 ty_void_156;
 P117 ty_nil_157;
 P117 ty_univ_158;
 P117 ty_act_159;
 P117 ty_tdecl_160;
 P117 ty_entry_161;
 P117 ty_short_162;
 P117 ty_long_163;
 P117 ty_sfloat_164;
 P117 ty_lfloat_165;
 P117 ty_time_166;
 P117 ty_ufixed_167;
 P117 completing_168;
 P169 anon_node_171;
 P117 anon_typ_172;
 P173 anon_cons_175;
 P135 agg_bounds_176;
 P112 disc_syms_177;
 P112 cur_task_178;
 rt_int accept_depth_179;
 int famarg_done_180;
 P169 fam_ix_181;
 P169 call_task_ix_182;
 int saw_interface_183;
 int defer_entry_structs_184;
 P121 out_awaits_185;
 P173 no_cons_186;
 P169 units_187;
 P146 pkg_stack_188;
 P169 cur_pkg_189;
 P135 prefix_hint_190;
 P117 call_want_191;
 P112 pure_sym_192;
 rt_int pure_depth_193;
 int vrp_ok_194;
 int in_lv_path_195;
 int last_deref_196;
 P135 main_name_197;
 P135 conf_system_198;
 rt_int conf_storage_unit_199;
 rt_int conf_memory_size_200;
 P135 conf_optimize_201;
};
static void as_A2178(A2178 *d, A2178 s);
static A2178 cp_A2178(A2178 s);
static int eq_A2178(A2178 a, A2178 b);
static A2178 cat_A2178(A2178 a, A2178 b);
static A2178 one_A2178(rt_int e);
static void as_A2176(A2176 *d, A2176 s);
static A2176 cp_A2176(A2176 s);
static int eq_A2176(A2176 a, A2176 b);
static A2176 cat_A2176(A2176 a, A2176 b);
static A2176 one_A2176(rt_int e);
static void as_A2173(A2173 *d, A2173 s);
static A2173 cp_A2173(A2173 s);
static int eq_A2173(A2173 a, A2173 b);
static A2173 cat_A2173(A2173 a, A2173 b);
static A2173 one_A2173(int e);
static void as_R1725(R1725 *d, R1725 s);
static R1725 cp_R1725(R1725 s);
static int eq_R1725(R1725 a, R1725 b);
static void as_R1605(R1605 *d, R1605 s);
static R1605 cp_R1605(R1605 s);
static int eq_R1605(R1605 a, R1605 b);
static void as_R1601(R1601 *d, R1601 s);
static R1601 cp_R1601(R1601 s);
static int eq_R1601(R1601 a, R1601 b);
static void as_R1586(R1586 *d, R1586 s);
static R1586 cp_R1586(R1586 s);
static int eq_R1586(R1586 a, R1586 b);
static void as_R174(R174 *d, R174 s);
static R174 cp_R174(R174 s);
static int eq_R174(R174 a, R174 b);
static void as_R170(R170 *d, R170 s);
static R170 cp_R170(R170 s);
static int eq_R170(R170 a, R170 b);
static void as_R147(R147 *d, R147 s);
static R147 cp_R147(R147 s);
static int eq_R147(R147 a, R147 b);
static void as_R142(R142 *d, R142 s);
static R142 cp_R142(R142 s);
static int eq_R142(R142 a, R142 b);
static void as_R139(R139 *d, R139 s);
static R139 cp_R139(R139 s);
static int eq_R139(R139 a, R139 b);
static void as_R122(R122 *d, R122 s);
static R122 cp_R122(R122 s);
static int eq_R122(R122 a, R122 b);
static void as_R118(R118 *d, R118 s);
static R118 cp_R118(R118 s);
static int eq_R118(R118 a, R118 b);
static void as_R113(R113 *d, R113 s);
static R113 cp_R113(R113 s);
static int eq_R113(R113 a, R113 b);
static void as_A111(A111 *d, A111 s);
static A111 cp_A111(A111 s);
static int eq_A111(A111 a, A111 b);
static A111 cat_A111(A111 a, A111 b);
static A111 one_A111(P112 e);
static void as_R106(R106 *d, R106 s);
static R106 cp_R106(R106 s);
static int eq_R106(R106 a, R106 b);
static void as_A104(A104 *d, A104 s);
static A104 cp_A104(A104 s);
static int eq_A104(A104 a, A104 b);
static A104 cat_A104(A104 a, A104 b);
static A104 one_A104(P105 e);
static void as_rt_gstr(rt_gstr *d, rt_gstr s);
static rt_gstr cp_rt_gstr(rt_gstr s);
static int eq_rt_gstr(rt_gstr a, rt_gstr b);
static rt_gstr cat_rt_gstr(rt_gstr a, rt_gstr b);
static rt_gstr one_rt_gstr(int e);
static P135 f_mk_203(struct f_greenc_1fr *up_, rt_gstr s_202);
static void f_new_name_206(struct f_greenc_1fr *up_, rt_gstr base_204, P135 *res_205);
static int f_is_letter_208(struct f_greenc_1fr *up_, int c_207);
static int f_is_digit_210(struct f_greenc_1fr *up_, int c_209);
static int f_upper_212(struct f_greenc_1fr *up_, int c_211);
static rt_gstr f_lower_s_214(struct f_greenc_1fr *up_, rt_gstr s_213);
static rt_gstr f_upper_s_216(struct f_greenc_1fr *up_, rt_gstr s_215);
static int f_is_operator_218(struct f_greenc_1fr *up_, rt_gstr s_217);
static rt_gstr f_c_field_220(struct f_greenc_1fr *up_, rt_gstr s_219);
static rt_gstr f_q_221(struct f_greenc_1fr *up_);
static void f_fail_224(struct f_greenc_1fr *up_, rt_int line_222, rt_gstr msg_223);
static P121 f_new_buffer_225(struct f_greenc_1fr *up_);
static void f_put_to_228(struct f_greenc_1fr *up_, P121 b_226, rt_gstr s_227);
static void f_emit_230(struct f_greenc_1fr *up_, rt_gstr s_229);
static void f_print_buffer_232(struct f_greenc_1fr *up_, P121 b_231);
static void f_splice_235(struct f_greenc_1fr *up_, P121 a_233, P121 b_234);
static int f_is_reserved_237(struct f_greenc_1fr *up_, rt_gstr w_236);
static void f_add_token_241(struct f_greenc_1fr *up_, rt_int kind_238, rt_gstr s_239, rt_int ival_240);
static rt_int f_digit_value_243(struct f_greenc_1fr *up_, int c_242);
static rt_int f_digit_in_246(struct f_greenc_1fr *up_, int c_244, rt_int base_245);
static void f_accumulate_250(struct f_greenc_1fr *up_, rt_int *v_247, rt_int base_248, rt_int d_249);
static void f_lex_line_252(struct f_greenc_1fr *up_, rt_gstr line_251);
static void f_exponent_257(struct f_greenc_1fr *up_, rt_gstr line_253, rt_int *j_254, rt_gstr *buf_255, rt_int *bl_256);
static void f_include_open_260(struct f_greenc_1fr *up_, rt_gstr name_258, rt_int *length_259);
static void f_include_char_263(struct f_greenc_1fr *up_, rt_int i_261, int *c_262);
static void f_check_include_264(struct f_greenc_1fr *up_);
static void f_include_text_266(struct f_greenc_1fr *up_, rt_int n_265);
static void f_include_line_270(struct f_greenc_1fr *up_, rt_gstr t_267, rt_int from_268, rt_int to_269);
static void f_read_source_271(struct f_greenc_1fr *up_);
static P169 f_nn_274(struct f_greenc_1fr *up_, rt_int kind_272, rt_int line_273);
static void f_append_278(struct f_greenc_1fr *up_, P169 *head_275, P169 *tail_276, P169 x_277);
static rt_int f_list_len_280(struct f_greenc_1fr *up_, P169 l_279);
static rt_int f_cur_line_281(struct f_greenc_1fr *up_);
static int f_at_kw_283(struct f_greenc_1fr *up_, rt_gstr w_282);
static int f_at_op_285(struct f_greenc_1fr *up_, rt_gstr w_284);
static int f_at_kind_287(struct f_greenc_1fr *up_, rt_int k_286);
static rt_int f_kind_at_289(struct f_greenc_1fr *up_, rt_int k_288);
static rt_gstr f_text_at_291(struct f_greenc_1fr *up_, rt_int k_290);
static void f_perror_293(struct f_greenc_1fr *up_, rt_gstr msg_292);
static void f_skip_294(struct f_greenc_1fr *up_);
static void f_expect_kw_296(struct f_greenc_1fr *up_, rt_gstr w_295);
static void f_expect_op_298(struct f_greenc_1fr *up_, rt_gstr w_297);
static void f_expect_id_300(struct f_greenc_1fr *up_, P135 *res_299);
static void f_name_node_302(struct f_greenc_1fr *up_, P169 *res_301);
static void f_id_list_304(struct f_greenc_1fr *up_, P169 *res_303);
static P169 f_binop_309(struct f_greenc_1fr *up_, P135 op_305, P169 l_306, P169 r_307, rt_int line_308);
static void f_expr_311(struct f_greenc_1fr *up_, P169 *res_310);
static int f_is_rel_313(struct f_greenc_1fr *up_, rt_gstr s_312);
static void f_relation_315(struct f_greenc_1fr *up_, P169 *res_314);
static void f_simple_expr_317(struct f_greenc_1fr *up_, P169 *res_316);
static void f_term_319(struct f_greenc_1fr *up_, P169 *res_318);
static void f_factor_321(struct f_greenc_1fr *up_, P169 *res_320);
static void f_primary_323(struct f_greenc_1fr *up_, P169 *res_322);
static void f_agg_or_paren_325(struct f_greenc_1fr *up_, P169 *res_324);
static int f_aggregate_ahead_326(struct f_greenc_1fr *up_);
static void f_name_p_328(struct f_greenc_1fr *up_, P169 *res_327);
static void f_component_list_330(struct f_greenc_1fr *up_, P169 *res_329);
static void f_discrete_range_p_332(struct f_greenc_1fr *up_, P169 *res_331);
static void f_subtype_ind_334(struct f_greenc_1fr *up_, P169 *res_333);
static void f_type_spec_336(struct f_greenc_1fr *up_, P169 *res_335);
static void f_type_def_338(struct f_greenc_1fr *up_, P169 *res_337);
static void f_pragma_p_340(struct f_greenc_1fr *up_, P169 *res_339);
static void f_check_pragma_342(struct f_greenc_1fr *up_, P169 x_341);
static void f_skip_visibility_343(struct f_greenc_1fr *up_);
static void f_skip_representation_344(struct f_greenc_1fr *up_);
static void f_decl_part_346(struct f_greenc_1fr *up_, P169 *res_345);
static void f_object_decl_348(struct f_greenc_1fr *up_, P169 *res_347);
static void f_type_decl_350(struct f_greenc_1fr *up_, P169 *res_349);
static void f_formal_part_352(struct f_greenc_1fr *up_, P169 *res_351);
static void f_designator_354(struct f_greenc_1fr *up_, P135 *res_353);
static void f_subprogram_356(struct f_greenc_1fr *up_, P169 *res_355);
static void f_body_part_358(struct f_greenc_1fr *up_, P169 x_357);
static void f_parse_handlers_360(struct f_greenc_1fr *up_, P169 *res_359);
static void f_package_p_362(struct f_greenc_1fr *up_, P169 *res_361);
static int f_at_statements_end_363(struct f_greenc_1fr *up_);
static void f_statements_365(struct f_greenc_1fr *up_, P169 *res_364);
static void f_statement_367(struct f_greenc_1fr *up_, P169 *res_366);
static void f_task_statement_369(struct f_greenc_1fr *up_, P169 *res_368);
static void f_if_stmt_371(struct f_greenc_1fr *up_, P169 *res_370);
static void f_case_stmt_373(struct f_greenc_1fr *up_, P169 *res_372);
static void f_loop_stmt_375(struct f_greenc_1fr *up_, P169 *res_374);
static void f_compilation_377(struct f_greenc_1fr *up_, P169 *res_376);
static rt_int f_hash_379(struct f_greenc_1fr *up_, rt_gstr s_378);
static P112 f_lookup_381(struct f_greenc_1fr *up_, rt_gstr name_380);
static int f_same_task_384(struct f_greenc_1fr *up_, P112 a_382, P112 b_383);
static P112 f_lookup_entry_387(struct f_greenc_1fr *up_, rt_gstr name_385, P112 owner_386);
static P112 f_lookup_decl_389(struct f_greenc_1fr *up_, P169 d_388);
static int f_overloadable_391(struct f_greenc_1fr *up_, P112 y_390);
static int f_same_394(struct f_greenc_1fr *up_, P117 a_392, P117 b_393);
static P117 f_root_396(struct f_greenc_1fr *up_, P117 t_395);
static int f_derived_from_399(struct f_greenc_1fr *up_, P117 a_397, P117 b_398);
static int f_is_numeric_401(struct f_greenc_1fr *up_, P117 t_400);
static int f_is_discrete_403(struct f_greenc_1fr *up_, P117 t_402);
static int f_same_signature_406(struct f_greenc_1fr *up_, P1585 a_404, P1585 b_405);
static void f_define_409(struct f_greenc_1fr *up_, P112 y_407, rt_int line_408);
static void f_open_scope_410(struct f_greenc_1fr *up_);
static void f_close_scope_411(struct f_greenc_1fr *up_);
static P112 f_new_sym_414(struct f_greenc_1fr *up_, rt_int kind_412, P135 name_413);
static P117 f_new_typ_416(struct f_greenc_1fr *up_, rt_int kind_415);
static P173 f_new_cons_417(struct f_greenc_1fr *up_);
static rt_gstr f_kind_name_419(struct f_greenc_1fr *up_, P117 t_418);
static void f_check_type_423(struct f_greenc_1fr *up_, P117 got_420, P117 want_421, rt_int line_422);
static rt_int f_field_count_425(struct f_greenc_1fr *up_, P117 t_424);
static void f_ctype_428(struct f_greenc_1fr *up_, P117 t_426, P135 *r_427);
static void f_field_decls_431(struct f_greenc_1fr *up_, P117 t_429, P135 *r_430);
static void f_declare_ctype_433(struct f_greenc_1fr *up_, P117 t_432);
static rt_int f_lit_index_436(struct f_greenc_1fr *up_, P169 lits_434, rt_gstr name_435);
static void f_manifest_440(struct f_greenc_1fr *up_, P169 e_437, rt_int *v_438, int *ok_439);
static void f_resolve_444(struct f_greenc_1fr *up_, P169 st_441, P117 *t_442, P173 *c_443);
static void f_constraint_list_448(struct f_greenc_1fr *up_, P169 st_445, P117 t_446, P173 c_447);
static void f_discriminant_constraint_452(struct f_greenc_1fr *up_, P169 st_449, P117 t_450, P173 c_451);
static void f_discrete_bounds_458(struct f_greenc_1fr *up_, P169 r_453, P117 want_454, P117 *t_455, P135 *lo_456, P135 *hi_457);
static void f_range_of_462(struct f_greenc_1fr *up_, P169 r_459, P117 t_460, P173 c_461);
static void f_fresh_typ_466(struct f_greenc_1fr *up_, rt_int kind_463, P135 name_464, P117 *t_465);
static void f_inherit_470(struct f_greenc_1fr *up_, P117 parent_467, P117 t_468, rt_int line_469);
static void f_derive_literals_473(struct f_greenc_1fr *up_, P117 t_471, rt_int line_472);
static void f_type_definition_478(struct f_greenc_1fr *up_, P169 d_474, P135 name_475, P117 *t_476, P173 *c_477);
static void f_array_type_485(struct f_greenc_1fr *up_, P169 idx_479, P169 comp_480, P135 name_481, rt_int line_482, P117 *t_483, P173 *c_484);
static void f_static_range_489(struct f_greenc_1fr *up_, P169 l_486, P169 h_487, P173 c_488);
static void f_elem_ctype_492(struct f_greenc_1fr *up_, P117 t_490, P135 *r_491);
static void f_first_index_495(struct f_greenc_1fr *up_, P117 t_493, P135 *r_494);
static int f_is_string_497(struct f_greenc_1fr *up_, P117 t_496);
static rt_gstr f_subst_500(struct f_greenc_1fr *up_, rt_gstr s_498, rt_gstr r_499);
static int f_mentions_record_502(struct f_greenc_1fr *up_, P135 s_501);
static void f_subst_cons_506(struct f_greenc_1fr *up_, P173 c_503, rt_gstr r_504, P173 *res_505);
static void f_remove_sym_508(struct f_greenc_1fr *up_, P112 y_507);
static void f_record_components_513(struct f_greenc_1fr *up_, P169 list_509, P117 t_510, P1724 g_511, rt_int line_512);
static void f_guard_cond_517(struct f_greenc_1fr *up_, P1724 g_514, P117 t_515, P135 *r_516);
static void f_arm_test_522(struct f_greenc_1fr *up_, P169 arm_518, P135 dname_519, rt_gstr d_520, P135 *x_521);
static void f_derived_type_527(struct f_greenc_1fr *up_, P169 d_523, P135 name_524, P117 *t_525, P173 *c_526);
static void f_real_type_532(struct f_greenc_1fr *up_, P169 d_528, P135 name_529, P117 *t_530, P173 *c_531);
static void f_finish_ptr_534(struct f_greenc_1fr *up_, P117 t_533);
static void f_init_storage_538(struct f_greenc_1fr *up_, rt_gstr lval_535, P117 t_536, P173 c_537);
static int f_composite_540(struct f_greenc_1fr *up_, P117 t_539);
static void f_assign_code_546(struct f_greenc_1fr *up_, rt_gstr lval_541, P117 t_542, rt_gstr v_543, P173 c_544, P135 *r_545);
static void f_copy_code_550(struct f_greenc_1fr *up_, P117 t_547, rt_gstr v_548, P135 *r_549);
static void f_eq_code_555(struct f_greenc_1fr *up_, P117 t_551, rt_gstr a_552, rt_gstr b_553, P135 *r_554);
static int f_seen_name_558(struct f_greenc_1fr *up_, P146 l_556, rt_gstr s_557);
static void f_emit_helpers_559(struct f_greenc_1fr *up_);
static void f_helper_bodies_561(struct f_greenc_1fr *up_, P117 t_560);
static void f_storage_565(struct f_greenc_1fr *up_, rt_gstr name_562, P117 t_563, P135 *access_code_564);
static void f_bind_568(struct f_greenc_1fr *up_, P112 y_566, P135 access_code_567);
static void f_declare_subprograms_570(struct f_greenc_1fr *up_, P169 from_569);
static void f_declare_one_572(struct f_greenc_1fr *up_, P169 e_571);
static void f_build_subprogram_575(struct f_greenc_1fr *up_, P169 d_573, P112 *y_574);
static void f_decl_elements_577(struct f_greenc_1fr *up_, P169 decls_576);
static void f_decl_element_579(struct f_greenc_1fr *up_, P169 e_578);
static void f_pragma_decl_581(struct f_greenc_1fr *up_, P169 e_580);
static void f_resolve_object_type_585(struct f_greenc_1fr *up_, P169 st_582, P117 *t_583, P173 *c_584);
static void f_other_decl_587(struct f_greenc_1fr *up_, P169 e_586);
static void f_subprogram_body_590(struct f_greenc_1fr *up_, P169 d_588, P112 y_589);
static void f_gen_statements_592(struct f_greenc_1fr *up_, P169 stmts_591);
static void f_pop_frames_594(struct f_greenc_1fr *up_, rt_int upto_593);
static void f_push_cleanup_596(struct f_greenc_1fr *up_, rt_gstr s_595);
static void f_pop_cleanup_597(struct f_greenc_1fr *up_);
static void f_guarded_601(struct f_greenc_1fr *up_, P169 stmts_598, P169 hs_599, rt_int line_600);
static void f_exc_id_605(struct f_greenc_1fr *up_, rt_gstr name_602, rt_int line_603, P135 *r_604);
static void f_gen_statement_607(struct f_greenc_1fr *up_, P169 s_606);
static void f_slice_assign_609(struct f_greenc_1fr *up_, P169 s_608);
static void f_gen_call_611(struct f_greenc_1fr *up_, P169 s_610);
static void f_gen_if_613(struct f_greenc_1fr *up_, P169 s_612);
static void f_gen_case_615(struct f_greenc_1fr *up_, P169 s_614);
static void f_push_exit_619(struct f_greenc_1fr *up_, P135 match_616, int is_loop_617, P135 *label_618);
static void f_gen_loop_621(struct f_greenc_1fr *up_, P169 s_620);
static void f_gen_block_623(struct f_greenc_1fr *up_, P169 s_622);
static void f_gen_exit_625(struct f_greenc_1fr *up_, P169 s_624);
static void f_gen_return_627(struct f_greenc_1fr *up_, P169 s_626);
static void f_access_of_630(struct f_greenc_1fr *up_, P112 y_628, P135 *r_629);
static void f_link_to_633(struct f_greenc_1fr *up_, rt_int l_631, P135 *r_632);
static rt_gstr f_c_ident_635(struct f_greenc_1fr *up_, rt_gstr s_634);
static void f_deref_639(struct f_greenc_1fr *up_, rt_gstr base_636, P117 t_637, P135 *r_638);
static int f_is_object_641(struct f_greenc_1fr *up_, P169 e_640);
static void f_lvalue_647(struct f_greenc_1fr *up_, P169 e_642, P135 *code_out_643, P117 *t_644, P173 *c_645, int *ro_646);
static void f_select_on_656(struct f_greenc_1fr *up_, rt_gstr base_648, P117 bt_649, P169 e_650, int *ro_651, int lv_652, P135 *code_out_653, P117 *t_654, P173 *c_655);
static void f_index_on_665(struct f_greenc_1fr *up_, rt_gstr base_657, P117 bt_658, P169 e_659, int *ro_660, int lv_661, P135 *code_out_662, P117 *t_663, P173 *c_664);
static int f_is_type_name_667(struct f_greenc_1fr *up_, rt_gstr n_666);
static int f_is_char_lit_669(struct f_greenc_1fr *up_, P169 e_668);
static int f_is_enum_lit_671(struct f_greenc_1fr *up_, P169 e_670);
static rt_gstr f_c_string_673(struct f_greenc_1fr *up_, rt_gstr s_672);
static int f_is_literal_675(struct f_greenc_1fr *up_, P169 e_674);
static void f_range_bounds_683(struct f_greenc_1fr *up_, P169 l_676, P169 h_677, P117 want_678, rt_int line_679, P117 *t_680, P135 *lo_681, P135 *hi_682);
static void f_gexpr_688(struct f_greenc_1fr *up_, P169 e_684, P117 want_685, P117 *t_686, P135 *r_687);
static void f_gexpr_1_693(struct f_greenc_1fr *up_, P169 e_689, P117 want_690, P117 *t_691, P135 *r_692);
static void f_string_aggregate_698(struct f_greenc_1fr *up_, P169 e_694, P117 want_695, P117 *t_696, P135 *r_697);
static void f_char_literal_703(struct f_greenc_1fr *up_, P169 e_699, P117 want_700, P117 *t_701, P135 *r_702);
static void f_gen_name_708(struct f_greenc_1fr *up_, P169 e_704, P117 want_705, P117 *t_706, P135 *r_707);
static void f_gen_unop_713(struct f_greenc_1fr *up_, P169 e_709, P117 want_710, P117 *t_711, P135 *r_712);
static int f_short_int_715(struct f_greenc_1fr *up_, P117 t_714);
static rt_gstr f_float_kind_717(struct f_greenc_1fr *up_, P117 t_716);
static void f_catenation_722(struct f_greenc_1fr *up_, P169 e_718, P117 want_719, P117 *t_720, P135 *r_721);
static void f_cat_operand_727(struct f_greenc_1fr *up_, P169 x_723, P117 arrt_724, rt_int line_725, P135 *r_726);
static void f_arithmetic_732(struct f_greenc_1fr *up_, P169 e_728, P117 want_729, P117 *t_730, P135 *r_731);
static void f_fixed_operation_740(struct f_greenc_1fr *up_, P169 e_733, P117 ta_734, P117 tb_735, rt_gstr a_736, rt_gstr b_737, P117 *t_738, P135 *r_739);
static void f_gen_binop_745(struct f_greenc_1fr *up_, P169 e_741, P117 want_742, P117 *t_743, P135 *r_744);
static void f_conversion_750(struct f_greenc_1fr *up_, P169 e_746, P112 y_747, P117 *t_748, P135 *r_749);
static void f_constrain_754(struct f_greenc_1fr *up_, P112 y_751, P117 t_752, P135 *r_753);
static void f_array_conversion_761(struct f_greenc_1fr *up_, P169 e_755, P117 t_756, P117 aty_757, P173 c_758, rt_gstr a_759, P135 *r_760);
static void f_gen_attr_766(struct f_greenc_1fr *up_, P169 e_762, P117 want_763, P117 *t_764, P135 *r_765);
static void f_attr_dim_770(struct f_greenc_1fr *up_, P169 e_767, P117 arrt_768, rt_int *n_769);
static void f_object_array_attr_776(struct f_greenc_1fr *up_, P169 e_771, P117 arrt_772, rt_gstr v_773, P117 *t_774, P135 *r_775);
static void f_type_array_attr_782(struct f_greenc_1fr *up_, P169 e_777, P117 arrt_778, P173 c_779, P117 *t_780, P135 *r_781);
static void f_lit_table_785(struct f_greenc_1fr *up_, P117 t_783, P135 *r_784);
static void f_val_rep_791(struct f_greenc_1fr *up_, P169 e_786, P117 tt_787, P173 c_788, P117 *t_789, P135 *r_790);
static void f_allocator_796(struct f_greenc_1fr *up_, P169 e_792, P117 want_793, P117 *t_794, P135 *r_795);
static void f_aggregate_801(struct f_greenc_1fr *up_, P169 e_797, P117 want_798, P117 *t_799, P135 *r_800);
static void f_captured_804(struct f_greenc_1fr *up_, P121 b_802, P135 *r_803);
static P1600 f_field_at_807(struct f_greenc_1fr *up_, P117 rt_805, rt_int k_806);
static P169 f_item_for_812(struct f_greenc_1fr *up_, P169 e_808, P117 rt_809, rt_int k_810, rt_int p_811);
static void f_arm_holds_816(struct f_greenc_1fr *up_, P169 arm_813, rt_int v_814, int *res_815);
static void f_record_aggregate_820(struct f_greenc_1fr *up_, P169 e_817, P117 rt_818, P135 *r_819);
static rt_int f_field_index_823(struct f_greenc_1fr *up_, P117 rt_821, rt_gstr name_822);
static void f_agg_component_829(struct f_greenc_1fr *up_, rt_gstr tmp_824, P117 rt_825, rt_int k_826, P169 v_827, rt_int line_828);
static void f_static_choice_833(struct f_greenc_1fr *up_, P169 x_830, rt_int *v_831, int *ok_832);
static void f_array_aggregate_838(struct f_greenc_1fr *up_, P169 e_834, P117 arrt_835, P135 bounds_836, P135 *r_837);
static void f_element_store_842(struct f_greenc_1fr *up_, rt_gstr lv_839, P117 arrt_840, rt_gstr v_841);
static void f_check_choices_846(struct f_greenc_1fr *up_, P169 e_843, P117 arrt_844, int has_others_845);
static P169 f_actual_for_850(struct f_greenc_1fr *up_, P169 args_847, P1585 pm_848, P1585 first_849);
static void f_gcall_855(struct f_greenc_1fr *up_, P169 e_851, int is_stmt_852, P117 *t_853, P135 *r_854);
static void f_gcall_with_860(struct f_greenc_1fr *up_, P169 e_856, P112 y_857, P117 *t_858, P135 *r_859);
static void f_builtin_867(struct f_greenc_1fr *up_, rt_gstr name_861, P169 args_862, rt_int line_863, int is_stmt_864, P117 *t_865, P135 *r_866);
static int f_is_package_869(struct f_greenc_1fr *up_, P169 e_868);
static P112 f_member_of_873(struct f_greenc_1fr *up_, rt_gstr p_870, rt_gstr name_871, rt_int line_872);
static int f_inside_package_875(struct f_greenc_1fr *up_, P169 p_874);
static void f_copy_sym_878(struct f_greenc_1fr *up_, P112 y_876, P112 *z_877);
static void f_complete_private_881(struct f_greenc_1fr *up_, P117 ph_879, P117 full_880);
static void f_package_spec_883(struct f_greenc_1fr *up_, P169 e_882);
static int f_hidden_from_886(struct f_greenc_1fr *up_, P112 m_884, P112 first_private_885);
static void f_package_body_888(struct f_greenc_1fr *up_, P169 e_887);
static void f_use_clause_890(struct f_greenc_1fr *up_, P169 e_889);
static void f_fits_895(struct f_greenc_1fr *up_, P112 y_891, P169 args_892, P117 want_893, int *ok_894);
static int f_is_builtin_897(struct f_greenc_1fr *up_, rt_gstr n_896);
static void f_resolve_overload_904(struct f_greenc_1fr *up_, rt_gstr name_898, P169 args_899, int is_stmt_900, P117 want_901, rt_int line_902, P112 *y_903);
static void f_resolve_member_overload_912(struct f_greenc_1fr *up_, rt_gstr p_905, rt_gstr name_906, P169 args_907, int is_stmt_908, P117 want_909, rt_int line_910, P112 *y_911);
static void f_user_operator_918(struct f_greenc_1fr *up_, P169 e_913, P117 want_914, P117 *t_915, P135 *r_916, int *done_917);
static void f_task_p_920(struct f_greenc_1fr *up_, P169 *res_919);
static void f_entry_p_922(struct f_greenc_1fr *up_, P169 *res_921);
static void f_accept_p_924(struct f_greenc_1fr *up_, P169 *res_923);
static void f_delay_p_926(struct f_greenc_1fr *up_, P169 *res_925);
static void f_designators_928(struct f_greenc_1fr *up_, P169 *res_927);
static void f_parse_task_statement_930(struct f_greenc_1fr *up_, P169 *res_929);
static void f_path_at_934(struct f_greenc_1fr *up_, rt_int level_931, rt_gstr field_932, P135 *r_933);
static int f_is_task_name_936(struct f_greenc_1fr *up_, rt_gstr n_935);
static void f_task_of_940(struct f_greenc_1fr *up_, P169 e_937, P112 *y_938, P169 *ix_939);
static void f_own_index_942(struct f_greenc_1fr *up_, P135 *r_941);
static void f_member_947(struct f_greenc_1fr *up_, P112 y_943, rt_gstr arr_944, rt_gstr i_945, P135 *r_946);
static void f_act_path_950(struct f_greenc_1fr *up_, P112 y_948, P135 *r_949);
static void f_act_path_i_954(struct f_greenc_1fr *up_, P112 y_951, rt_gstr i_952, P135 *r_953);
static void f_entry_path_958(struct f_greenc_1fr *up_, P112 y_955, rt_gstr i_956, P135 *r_957);
static void f_declare_slot_961(struct f_greenc_1fr *up_, rt_gstr ctype_name_959, rt_gstr field_960);
static void f_task_decl_963(struct f_greenc_1fr *up_, P169 e_962);
static void f_family_arg_struct_964(struct f_greenc_1fr *up_);
static void f_family_bounds_968(struct f_greenc_1fr *up_, P169 b_965, P112 y_966, P135 x_967);
static void f_entry_family_slot_973(struct f_greenc_1fr *up_, P112 y_969, rt_gstr base_970, rt_gstr i_971, P135 *r_972);
static void f_task_spec_975(struct f_greenc_1fr *up_, P169 e_974);
static void f_entry_decl_977(struct f_greenc_1fr *up_, P169 e_976);
static void f_task_body_979(struct f_greenc_1fr *up_, P169 e_978);
static void f_task_awaits_982(struct f_greenc_1fr *up_, P169 decls_980, P135 *aw_981);
static void f_task_failure_984(struct f_greenc_1fr *up_, P169 s_983);
static void f_entry_sym_988(struct f_greenc_1fr *up_, P169 e_985, P112 *y_986, P169 *ix_987);
static void f_other_call_993(struct f_greenc_1fr *up_, P169 e_989, int is_stmt_990, P117 *t_991, P135 *r_992);
static void f_other_attr_998(struct f_greenc_1fr *up_, P169 e_994, P112 y_995, P117 *t_996, P135 *r_997);
static void f_member_attr_1002(struct f_greenc_1fr *up_, P169 e_999, P117 *t_1000, P135 *r_1001);
static void f_task_builtin_1008(struct f_greenc_1fr *up_, rt_gstr name_1003, P169 args_1004, rt_int line_1005, P117 *t_1006, P135 *r_1007);
static void f_gen_accept_1010(struct f_greenc_1fr *up_, P169 s_1009);
static void f_member_slot_1014(struct f_greenc_1fr *up_, P112 y_1011, P169 s_1012, P135 *ent_1013);
static void f_gen_delay_ticks_1017(struct f_greenc_1fr *up_, P169 e_1015, P135 *r_1016);
static void f_gen_select_1019(struct f_greenc_1fr *up_, P169 s_1018);
static void f_family_range_1024(struct f_greenc_1fr *up_, P112 y_1020, P169 ix_1021, P135 *lo_1022, P135 *hi_1023);
static void f_task_statement_gen_1026(struct f_greenc_1fr *up_, P169 s_1025);
static P169 f_root_name_1028(struct f_greenc_1fr *up_, P169 e_1027);
static void f_check_pure_target_1031(struct f_greenc_1fr *up_, P169 target_1029, rt_int line_1030);
static int f_assigns_nonlocal_1034(struct f_greenc_1fr *up_, P169 d_1032, rt_gstr name_1033);
static int f_declares_1037(struct f_greenc_1fr *up_, P169 d_1035, rt_gstr name_1036);
static int f_scan_handlers_1041(struct f_greenc_1fr *up_, P169 h_1038, P169 d_1039, rt_gstr name_1040);
static int f_scan_assigns_1045(struct f_greenc_1fr *up_, P169 stmts_1042, P169 d_1043, rt_gstr name_1044);
static void f_check_call_rules_1048(struct f_greenc_1fr *up_, P169 e_1046, P112 y_1047);
static void f_generic_p_1050(struct f_greenc_1fr *up_, P169 *res_1049);
static void f_instantiation_1053(struct f_greenc_1fr *up_, P169 x_1051, P169 *res_1052);
static void f_generic_decl_1055(struct f_greenc_1fr *up_, P169 e_1054);
static int f_is_generic_name_1057(struct f_greenc_1fr *up_, rt_gstr n_1056);
static void f_attach_generic_body_1059(struct f_greenc_1fr *up_, P169 e_1058);
static void f_restore_generic_context_1062(struct f_greenc_1fr *up_, P169 body_node_1060, rt_int line_1061);
static P169 f_gactual_1066(struct f_greenc_1fr *up_, P169 args_1063, rt_int nth_1064, rt_gstr name_1065);
static void f_copy_node_1070(struct f_greenc_1fr *up_, P169 n_1067, P135 name_1068, P169 *r_1069);
static void f_instantiate_1072(struct f_greenc_1fr *up_, P169 e_1071);
static void f_predef_type_1077(struct f_greenc_1fr *up_, rt_gstr name_1073, P117 t_1074, rt_gstr lo_1075, rt_gstr hi_1076);
static void f_predef_const_1081(struct f_greenc_1fr *up_, rt_gstr name_1078, P117 t_1079, rt_gstr code_text_1080);
static void f_predef_exc_1083(struct f_greenc_1fr *up_, rt_gstr name_1082);
static void f_predef_lit_1087(struct f_greenc_1fr *up_, rt_gstr name_1084, P117 t_1085, rt_int v_1086);
static void f_predefine_1088(struct f_greenc_1fr *up_);
static void f_translate_1090(struct f_greenc_1fr *up_, P169 u_1089);
static void f_print_program_1091(struct f_greenc_1fr *up_);
static void f_greenc_1(void);
static int ex_compile_error_103;
static P135 f_mk_203(struct f_greenc_1fr *up_, rt_gstr s_202) {
  struct f_mk_203fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_202 = cp_rt_gstr(s_202);
F->r_1093.lo = ((rt_int)1LL); F->r_1093.hi = ({ rt_gstr at1092 = F->s_202; at1092.hi >= at1092.lo ? at1092.hi - at1092.lo + 1 : (rt_int)0; });
F->r_1093.lo2 = 1; F->r_1093.hi2 = 1;
F->r_1093.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->r_1093));
as_rt_gstr(&F->r_1093, F->s_202);
F->result_ = ({ rt_gstr *cell1094 = rt_alloc(sizeof(rt_gstr)); *cell1094 = cp_rt_gstr(F->r_1093); (P135)cell1094; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_new_name_206(struct f_greenc_1fr *up_, rt_gstr base_204, P135 *res_205) {
  struct f_new_name_206fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_204 = cp_rt_gstr(base_204);
F->res_205 = res_205;
F->up->serial_120 = rt_add(F->up->serial_120, ((rt_int)1LL));
(*F->res_205) = ({ rt_gstr *cell1095 = rt_alloc(sizeof(rt_gstr)); *cell1095 = cp_rt_gstr(cat_rt_gstr(F->base_204, rt_g_s2g(rt_str_of_int(F->up->serial_120)))); (P135)cell1095; });
goto ret_;
ret_:

  return;
}

static int f_is_letter_208(struct f_greenc_1fr *up_, int c_207) {
  struct f_is_letter_208fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_207 = c_207;
F->result_ = (((F->c_207 >= 65) && (F->c_207 <= 90)) || ((F->c_207 >= 97) && (F->c_207 <= 122)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_digit_210(struct f_greenc_1fr *up_, int c_209) {
  struct f_is_digit_210fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_209 = c_209;
F->result_ = ((F->c_209 >= 48) && (F->c_209 <= 57));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_upper_212(struct f_greenc_1fr *up_, int c_211) {
  struct f_upper_212fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_211 = c_211;
if (((F->c_211 >= 97) && (F->c_211 <= 122))) {
F->result_ = rt_range((rt_sub(((rt_int)(F->c_211) + 1), ((rt_int)32LL)) - 1), 0, 127);
goto ret_;
}
F->result_ = F->c_211;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_lower_s_214(struct f_greenc_1fr *up_, rt_gstr s_213) {
  struct f_lower_s_214fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_213 = cp_rt_gstr(s_213);
F->r_1096 = cp_rt_gstr(F->s_213);
{ rt_int lo1100 = ((rt_int)1LL), hi1101 = ({ rt_gstr at1098 = F->s_213; at1098.hi >= at1098.lo ? at1098.hi - at1098.lo + 1 : (rt_int)0; });
for (rt_int it1102 = lo1100; it1102 <= hi1101; it1102++) {
F->i_1099 = it1102;
if (((({ rt_gstr ix1103 = F->r_1096; ix1103.p[rt_index(F->i_1099, ix1103.lo, ix1103.hi) - ix1103.lo]; }) >= 65) && (({ rt_gstr ix1104 = F->r_1096; ix1104.p[rt_index(F->i_1099, ix1104.lo, ix1104.hi) - ix1104.lo]; }) <= 90))) {
(*({ rt_gstr *ix1105 = &(F->r_1096); &ix1105->p[rt_index(F->i_1099, ix1105->lo, ix1105->hi) - ix1105->lo]; })) = rt_range((rt_add(((rt_int)(({ rt_gstr ix1106 = F->r_1096; ix1106.p[rt_index(F->i_1099, ix1106.lo, ix1106.hi) - ix1106.lo]; })) + 1), ((rt_int)32LL)) - 1), 0, 127);
}
}
}
L_end_1097: ;
F->result_ = F->r_1096;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_upper_s_216(struct f_greenc_1fr *up_, rt_gstr s_215) {
  struct f_upper_s_216fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_215 = cp_rt_gstr(s_215);
F->r_1107 = cp_rt_gstr(F->s_215);
{ rt_int lo1111 = ((rt_int)1LL), hi1112 = ({ rt_gstr at1109 = F->s_215; at1109.hi >= at1109.lo ? at1109.hi - at1109.lo + 1 : (rt_int)0; });
for (rt_int it1113 = lo1111; it1113 <= hi1112; it1113++) {
F->i_1110 = it1113;
(*({ rt_gstr *ix1114 = &(F->r_1107); &ix1114->p[rt_index(F->i_1110, ix1114->lo, ix1114->hi) - ix1114->lo]; })) = f_upper_212(F->up, ({ rt_gstr ix1116 = F->r_1107; ix1116.p[rt_index(F->i_1110, ix1116.lo, ix1116.hi) - ix1116.lo]; }));
}
}
L_end_1108: ;
F->result_ = F->r_1107;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_operator_218(struct f_greenc_1fr *up_, rt_gstr s_217) {
  struct f_is_operator_218fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_217 = cp_rt_gstr(s_217);
F->result_ = (((((((((((((((eq_rt_gstr(F->s_217, rt_g_lit("+", 1)) || eq_rt_gstr(F->s_217, rt_g_lit("-", 1))) || eq_rt_gstr(F->s_217, rt_g_lit("*", 1))) || eq_rt_gstr(F->s_217, rt_g_lit("/", 1))) || eq_rt_gstr(F->s_217, rt_g_lit("**", 2))) || eq_rt_gstr(F->s_217, rt_g_lit("&", 1))) || eq_rt_gstr(F->s_217, rt_g_lit("=", 1))) || eq_rt_gstr(F->s_217, rt_g_lit("<", 1))) || eq_rt_gstr(F->s_217, rt_g_lit("<=", 2))) || eq_rt_gstr(F->s_217, rt_g_lit(">", 1))) || eq_rt_gstr(F->s_217, rt_g_lit(">=", 2))) || eq_rt_gstr(F->s_217, rt_g_lit("MOD", 3))) || eq_rt_gstr(F->s_217, rt_g_lit("AND", 3))) || eq_rt_gstr(F->s_217, rt_g_lit("OR", 2))) || eq_rt_gstr(F->s_217, rt_g_lit("XOR", 3))) || eq_rt_gstr(F->s_217, rt_g_lit("NOT", 3)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_c_field_220(struct f_greenc_1fr *up_, rt_gstr s_219) {
  struct f_c_field_220fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_219 = cp_rt_gstr(s_219);
F->result_ = cat_rt_gstr(f_lower_s_214(F->up, F->s_219), one_rt_gstr(95));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_q_221(struct f_greenc_1fr *up_) {
  struct f_q_221fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = rt_g_lit("\"", 1);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_fail_224(struct f_greenc_1fr *up_, rt_int line_222, rt_gstr msg_223) {
  struct f_fail_224fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_222 = line_222;
F->msg_223 = cp_rt_gstr(msg_223);
if ((F->up->trial_150 == ((rt_int)0LL))) {
rt_g_put(rt_g_g2s(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("greenc: line ", 13), rt_g_s2g(rt_str_of_int(F->line_222))), rt_g_lit(": ", 2)), F->msg_223)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
}
rt_raise(ex_compile_error_103);
ret_:

  return;
}

static P121 f_new_buffer_225(struct f_greenc_1fr *up_) {
  struct f_new_buffer_225fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ({ R122 *cell1117 = rt_alloc(sizeof(R122)); *cell1117 = cp_R122(({ R122 ag1118; ag1118.head_ = NULL; ag1118.tail_ = NULL; ag1118; })); (P121)cell1117; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_put_to_228(struct f_greenc_1fr *up_, P121 b_226, rt_gstr s_227) {
  struct f_put_to_228fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_226 = b_226;
F->s_227 = cp_rt_gstr(s_227);
F->l_1119 = NULL;
F->l_1119 = ({ R147 *cell1120 = rt_alloc(sizeof(R147)); *cell1120 = cp_R147(({ R147 ag1121; ag1121.s_ = NULL; ag1121.next_ = NULL; ag1121; })); (P146)cell1120; });
(*(P146)rt_nil_check(F->l_1119)).s_ = f_mk_203(F->up, F->s_227);
if (((*(P121)rt_nil_check(F->b_226)).tail_ == NULL)) {
(*(P121)rt_nil_check(F->b_226)).head_ = F->l_1119;
} else {
(*(P146)rt_nil_check((*(P121)rt_nil_check(F->b_226)).tail_)).next_ = F->l_1119;
}
(*(P121)rt_nil_check(F->b_226)).tail_ = F->l_1119;
ret_:

  return;
}

static void f_emit_230(struct f_greenc_1fr *up_, rt_gstr s_229) {
  struct f_emit_230fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_229 = cp_rt_gstr(s_229);
f_put_to_228(F->up, F->up->code_131, F->s_229);
ret_:

  return;
}

static void f_print_buffer_232(struct f_greenc_1fr *up_, P121 b_231) {
  struct f_print_buffer_232fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_231 = b_231;
F->l_1122 = NULL;
F->l_1122 = (*(P121)rt_nil_check(F->b_231)).head_;
while ((F->l_1122 != NULL)) {
rt_g_put(rt_g_g2s((*(P135)rt_nil_check((*(P146)rt_nil_check(F->l_1122)).s_))));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
F->l_1122 = (*(P146)rt_nil_check(F->l_1122)).next_;
}
L_end_1123: ;
ret_:

  return;
}

static void f_splice_235(struct f_greenc_1fr *up_, P121 a_233, P121 b_234) {
  struct f_splice_235fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_233 = a_233;
F->b_234 = b_234;
if (((*(P121)rt_nil_check(F->b_234)).head_ == NULL)) {
goto ret_;
}
if (((*(P121)rt_nil_check(F->a_233)).tail_ == NULL)) {
(*(P121)rt_nil_check(F->a_233)).head_ = (*(P121)rt_nil_check(F->b_234)).head_;
} else {
(*(P146)rt_nil_check((*(P121)rt_nil_check(F->a_233)).tail_)).next_ = (*(P121)rt_nil_check(F->b_234)).head_;
}
(*(P121)rt_nil_check(F->a_233)).tail_ = (*(P121)rt_nil_check(F->b_234)).tail_;
(*(P121)rt_nil_check(F->b_234)).head_ = NULL;
(*(P121)rt_nil_check(F->b_234)).tail_ = NULL;
ret_:

  return;
}

static int f_is_reserved_237(struct f_greenc_1fr *up_, rt_gstr w_236) {
  struct f_is_reserved_237fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_236 = cp_rt_gstr(w_236);
{ rt_int sel1125 = ({ rt_gstr at1124 = F->w_236; at1124.hi >= at1124.lo ? at1124.hi - at1124.lo + 1 : (rt_int)0; });
if (0 || sel1125 == ((rt_int)2LL)) {
F->result_ = ((((((eq_rt_gstr(F->w_236, rt_g_lit("AT", 2)) || eq_rt_gstr(F->w_236, rt_g_lit("DO", 2))) || eq_rt_gstr(F->w_236, rt_g_lit("IF", 2))) || eq_rt_gstr(F->w_236, rt_g_lit("IN", 2))) || eq_rt_gstr(F->w_236, rt_g_lit("IS", 2))) || eq_rt_gstr(F->w_236, rt_g_lit("OF", 2))) || eq_rt_gstr(F->w_236, rt_g_lit("OR", 2)));
goto ret_;
} else if (0 || sel1125 == ((rt_int)3LL)) {
F->result_ = (((((((((eq_rt_gstr(F->w_236, rt_g_lit("ALL", 3)) || eq_rt_gstr(F->w_236, rt_g_lit("AND", 3))) || eq_rt_gstr(F->w_236, rt_g_lit("END", 3))) || eq_rt_gstr(F->w_236, rt_g_lit("FOR", 3))) || eq_rt_gstr(F->w_236, rt_g_lit("MOD", 3))) || eq_rt_gstr(F->w_236, rt_g_lit("NEW", 3))) || eq_rt_gstr(F->w_236, rt_g_lit("NOT", 3))) || eq_rt_gstr(F->w_236, rt_g_lit("OUT", 3))) || eq_rt_gstr(F->w_236, rt_g_lit("USE", 3))) || eq_rt_gstr(F->w_236, rt_g_lit("XOR", 3)));
goto ret_;
} else if (0 || sel1125 == ((rt_int)4LL)) {
F->result_ = ((((((((((eq_rt_gstr(F->w_236, rt_g_lit("BODY", 4)) || eq_rt_gstr(F->w_236, rt_g_lit("CASE", 4))) || eq_rt_gstr(F->w_236, rt_g_lit("ELSE", 4))) || eq_rt_gstr(F->w_236, rt_g_lit("EXIT", 4))) || eq_rt_gstr(F->w_236, rt_g_lit("GOTO", 4))) || eq_rt_gstr(F->w_236, rt_g_lit("LOOP", 4))) || eq_rt_gstr(F->w_236, rt_g_lit("NULL", 4))) || eq_rt_gstr(F->w_236, rt_g_lit("TASK", 4))) || eq_rt_gstr(F->w_236, rt_g_lit("THEN", 4))) || eq_rt_gstr(F->w_236, rt_g_lit("TYPE", 4))) || eq_rt_gstr(F->w_236, rt_g_lit("WHEN", 4)));
goto ret_;
} else if (0 || sel1125 == ((rt_int)5LL)) {
F->result_ = (((((((((eq_rt_gstr(F->w_236, rt_g_lit("ABORT", 5)) || eq_rt_gstr(F->w_236, rt_g_lit("ARRAY", 5))) || eq_rt_gstr(F->w_236, rt_g_lit("BEGIN", 5))) || eq_rt_gstr(F->w_236, rt_g_lit("DELAY", 5))) || eq_rt_gstr(F->w_236, rt_g_lit("DELTA", 5))) || eq_rt_gstr(F->w_236, rt_g_lit("ELSIF", 5))) || eq_rt_gstr(F->w_236, rt_g_lit("ENTRY", 5))) || eq_rt_gstr(F->w_236, rt_g_lit("RAISE", 5))) || eq_rt_gstr(F->w_236, rt_g_lit("RANGE", 5))) || eq_rt_gstr(F->w_236, rt_g_lit("WHILE", 5)));
goto ret_;
} else if (0 || sel1125 == ((rt_int)6LL)) {
F->result_ = ((((((((eq_rt_gstr(F->w_236, rt_g_lit("ACCEPT", 6)) || eq_rt_gstr(F->w_236, rt_g_lit("ACCESS", 6))) || eq_rt_gstr(F->w_236, rt_g_lit("ASSERT", 6))) || eq_rt_gstr(F->w_236, rt_g_lit("DIGITS", 6))) || eq_rt_gstr(F->w_236, rt_g_lit("OTHERS", 6))) || eq_rt_gstr(F->w_236, rt_g_lit("PRAGMA", 6))) || eq_rt_gstr(F->w_236, rt_g_lit("RECORD", 6))) || eq_rt_gstr(F->w_236, rt_g_lit("RETURN", 6))) || eq_rt_gstr(F->w_236, rt_g_lit("SELECT", 6)));
goto ret_;
} else if (0 || sel1125 == ((rt_int)7LL)) {
F->result_ = (((((((eq_rt_gstr(F->w_236, rt_g_lit("DECLARE", 7)) || eq_rt_gstr(F->w_236, rt_g_lit("GENERIC", 7))) || eq_rt_gstr(F->w_236, rt_g_lit("PACKAGE", 7))) || eq_rt_gstr(F->w_236, rt_g_lit("PACKING", 7))) || eq_rt_gstr(F->w_236, rt_g_lit("PRIVATE", 7))) || eq_rt_gstr(F->w_236, rt_g_lit("RENAMES", 7))) || eq_rt_gstr(F->w_236, rt_g_lit("REVERSE", 7))) || eq_rt_gstr(F->w_236, rt_g_lit("SUBTYPE", 7)));
goto ret_;
} else if (0 || sel1125 == ((rt_int)8LL)) {
F->result_ = (((eq_rt_gstr(F->w_236, rt_g_lit("CONSTANT", 8)) || eq_rt_gstr(F->w_236, rt_g_lit("FUNCTION", 8))) || eq_rt_gstr(F->w_236, rt_g_lit("INITIATE", 8))) || eq_rt_gstr(F->w_236, rt_g_lit("SEPARATE", 8)));
goto ret_;
} else if (0 || sel1125 == ((rt_int)9LL)) {
F->result_ = (eq_rt_gstr(F->w_236, rt_g_lit("EXCEPTION", 9)) || eq_rt_gstr(F->w_236, rt_g_lit("PROCEDURE", 9)));
goto ret_;
} else if (0 || sel1125 == ((rt_int)10LL)) {
F->result_ = eq_rt_gstr(F->w_236, rt_g_lit("RESTRICTED", 10));
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

static void f_add_token_241(struct f_greenc_1fr *up_, rt_int kind_238, rt_gstr s_239, rt_int ival_240) {
  struct f_add_token_241fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_238 = kind_238;
F->s_239 = cp_rt_gstr(s_239);
F->ival_240 = ival_240;
F->up->ntoks_108 = rt_add(F->up->ntoks_108, ((rt_int)1LL));
(*({ A104 *ix1126 = &(F->up->toks_107); &ix1126->p[rt_index(F->up->ntoks_108, ix1126->lo, ix1126->hi) - ix1126->lo]; })) = ({ R106 *cell1127 = rt_alloc(sizeof(R106)); *cell1127 = cp_R106(({ R106 ag1128; ag1128.kind_ = F->kind_238; ag1128.line_ = F->up->src_line_110; ag1128.ival_ = F->ival_240; ag1128.s_ = NULL; ag1128; })); (P105)cell1127; });
(*(P105)rt_nil_check((*({ A104 *ix1129 = &(F->up->toks_107); &ix1129->p[rt_index(F->up->ntoks_108, ix1129->lo, ix1129->hi) - ix1129->lo]; })))).s_ = f_mk_203(F->up, F->s_239);
ret_:

  return;
}

static rt_int f_digit_value_243(struct f_greenc_1fr *up_, int c_242) {
  struct f_digit_value_243fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_242 = c_242;
if (f_is_digit_210(F->up, F->c_242)) {
F->result_ = rt_sub(((rt_int)(F->c_242) + 1), ((rt_int)(48) + 1));
goto ret_;
}
F->result_ = rt_add(rt_sub(((rt_int)(f_upper_212(F->up, F->c_242)) + 1), ((rt_int)(65) + 1)), ((rt_int)10LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_digit_in_246(struct f_greenc_1fr *up_, int c_244, rt_int base_245) {
  struct f_digit_in_246fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_244 = c_244;
F->base_245 = base_245;
if (f_is_digit_210(F->up, F->c_244)) {
F->d_1130 = rt_sub(((rt_int)(F->c_244) + 1), ((rt_int)(48) + 1));
} else if (((f_upper_212(F->up, F->c_244) >= 65) && (f_upper_212(F->up, F->c_244) <= 70))) {
F->d_1130 = rt_add(rt_sub(((rt_int)(f_upper_212(F->up, F->c_244)) + 1), ((rt_int)(65) + 1)), ((rt_int)10LL));
} else {
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
}
if ((F->d_1130 >= F->base_245)) {
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
}
F->result_ = F->d_1130;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_accumulate_250(struct f_greenc_1fr *up_, rt_int *v_247, rt_int base_248, rt_int d_249) {
  struct f_accumulate_250fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->v_247 = v_247;
F->base_248 = base_248;
F->d_249 = d_249;
if (((*F->v_247) > rt_quot(rt_sub(INT64_MAX, F->d_249), F->base_248))) {
f_fail_224(F->up, F->up->src_line_110, rt_g_lit("this integer literal is too large (RM79 2.4)", 44));
}
(*F->v_247) = rt_add(rt_mul((*F->v_247), F->base_248), F->d_249);
ret_:

  return;
}

static void f_lex_line_252(struct f_greenc_1fr *up_, rt_gstr line_251) {
  struct f_lex_line_252fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_251 = cp_rt_gstr(line_251);
F->i_1131 = ((rt_int)1LL);
F->j_1132 = ((rt_int)0LL);
F->n_1133 = ({ rt_gstr at1134 = F->line_251; at1134.hi >= at1134.lo ? at1134.hi - at1134.lo + 1 : (rt_int)0; });
F->buf_1139.lo = ((rt_int)1LL); F->buf_1139.hi = ((rt_int)1000LL);
F->buf_1139.lo2 = 1; F->buf_1139.hi2 = 1;
F->buf_1139.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->buf_1139));
while ((F->i_1131 <= F->n_1133)) {
F->c_1135 = rt_range(({ rt_gstr ix1142 = F->line_251; ix1142.p[rt_index(F->i_1131, ix1142.lo, ix1142.hi) - ix1142.lo]; }), 0, 127);
if (((((F->c_1135 == 32) || (F->c_1135 == 9)) || (F->c_1135 == 13)) || (F->c_1135 == 12))) {
F->i_1131 = rt_add(F->i_1131, ((rt_int)1LL));
} else if ((((F->c_1135 == 45) && (F->i_1131 < F->n_1133)) && (({ rt_gstr ix1143 = F->line_251; ix1143.p[rt_index(rt_add(F->i_1131, ((rt_int)1LL)), ix1143.lo, ix1143.hi) - ix1143.lo]; }) == 45))) {
F->i_1131 = rt_add(F->n_1133, ((rt_int)1LL));
} else if (f_is_letter_208(F->up, F->c_1135)) {
F->j_1132 = F->i_1131;
F->bl_1140 = ((rt_int)0LL);
while (((F->j_1132 <= F->n_1133) && ((f_is_letter_208(F->up, ({ rt_gstr ix1146 = F->line_251; ix1146.p[rt_index(F->j_1132, ix1146.lo, ix1146.hi) - ix1146.lo]; })) || f_is_digit_210(F->up, ({ rt_gstr ix1148 = F->line_251; ix1148.p[rt_index(F->j_1132, ix1148.lo, ix1148.hi) - ix1148.lo]; }))) || (({ rt_gstr ix1149 = F->line_251; ix1149.p[rt_index(F->j_1132, ix1149.lo, ix1149.hi) - ix1149.lo]; }) == 95)))) {
if (((({ rt_gstr ix1150 = F->line_251; ix1150.p[rt_index(F->j_1132, ix1150.lo, ix1150.hi) - ix1150.lo]; }) == 95) && ((F->j_1132 == F->n_1133) || (!(f_is_letter_208(F->up, ({ rt_gstr ix1152 = F->line_251; ix1152.p[rt_index(rt_add(F->j_1132, ((rt_int)1LL)), ix1152.lo, ix1152.hi) - ix1152.lo]; })) || f_is_digit_210(F->up, ({ rt_gstr ix1154 = F->line_251; ix1154.p[rt_index(rt_add(F->j_1132, ((rt_int)1LL)), ix1154.lo, ix1154.hi) - ix1154.lo]; }))))))) {
f_fail_224(F->up, F->up->src_line_110, rt_g_lit("an underscore in an identifier stands between two letters or digits (RM79 2.3)", 78));
}
F->bl_1140 = rt_add(F->bl_1140, ((rt_int)1LL));
(*({ rt_gstr *ix1155 = &(F->buf_1139); &ix1155->p[rt_index(F->bl_1140, ix1155->lo, ix1155->hi) - ix1155->lo]; })) = f_upper_212(F->up, ({ rt_gstr ix1157 = F->line_251; ix1157.p[rt_index(F->j_1132, ix1157.lo, ix1157.hi) - ix1157.lo]; }));
F->j_1132 = rt_add(F->j_1132, ((rt_int)1LL));
}
L_end_1144: ;
if (f_is_reserved_237(F->up, ({ rt_gstr sl1159 = F->buf_1139; rt_int l_ = ((rt_int)1LL), h_ = F->bl_1140; if (l_ <= h_) { rt_index(l_, sl1159.lo, sl1159.hi); rt_index(h_, sl1159.lo, sl1159.hi); } sl1159.p += l_ - sl1159.lo; sl1159.lo = l_; sl1159.hi = h_; sl1159; }))) {
f_add_token_241(F->up, ((rt_int)2LL), ({ rt_gstr sl1161 = F->buf_1139; rt_int l_ = ((rt_int)1LL), h_ = F->bl_1140; if (l_ <= h_) { rt_index(l_, sl1161.lo, sl1161.hi); rt_index(h_, sl1161.lo, sl1161.hi); } sl1161.p += l_ - sl1161.lo; sl1161.lo = l_; sl1161.hi = h_; sl1161; }), ((rt_int)0LL));
} else {
f_add_token_241(F->up, ((rt_int)1LL), ({ rt_gstr sl1163 = F->buf_1139; rt_int l_ = ((rt_int)1LL), h_ = F->bl_1140; if (l_ <= h_) { rt_index(l_, sl1163.lo, sl1163.hi); rt_index(h_, sl1163.lo, sl1163.hi); } sl1163.p += l_ - sl1163.lo; sl1163.lo = l_; sl1163.hi = h_; sl1163; }), ((rt_int)0LL));
}
F->i_1131 = F->j_1132;
} else if (f_is_digit_210(F->up, F->c_1135)) {
F->j_1132 = F->i_1131;
F->v_1137 = ((rt_int)0LL);
F->bl_1140 = ((rt_int)0LL);
while (((F->j_1132 <= F->n_1133) && (f_is_digit_210(F->up, ({ rt_gstr ix1166 = F->line_251; ix1166.p[rt_index(F->j_1132, ix1166.lo, ix1166.hi) - ix1166.lo]; })) || (({ rt_gstr ix1167 = F->line_251; ix1167.p[rt_index(F->j_1132, ix1167.lo, ix1167.hi) - ix1167.lo]; }) == 95)))) {
if ((({ rt_gstr ix1168 = F->line_251; ix1168.p[rt_index(F->j_1132, ix1168.lo, ix1168.hi) - ix1168.lo]; }) == 95)) {
if (((F->j_1132 == F->n_1133) || (!f_is_digit_210(F->up, ({ rt_gstr ix1170 = F->line_251; ix1170.p[rt_index(rt_add(F->j_1132, ((rt_int)1LL)), ix1170.lo, ix1170.hi) - ix1170.lo]; }))))) {
f_fail_224(F->up, F->up->src_line_110, rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
} else {
f_accumulate_250(F->up, &F->v_1137, ((rt_int)10LL), rt_sub(((rt_int)(({ rt_gstr ix1172 = F->line_251; ix1172.p[rt_index(F->j_1132, ix1172.lo, ix1172.hi) - ix1172.lo]; })) + 1), ((rt_int)(48) + 1)));
F->bl_1140 = rt_add(F->bl_1140, ((rt_int)1LL));
(*({ rt_gstr *ix1173 = &(F->buf_1139); &ix1173->p[rt_index(F->bl_1140, ix1173->lo, ix1173->hi) - ix1173->lo]; })) = ({ rt_gstr ix1174 = F->line_251; ix1174.p[rt_index(F->j_1132, ix1174.lo, ix1174.hi) - ix1174.lo]; });
}
F->j_1132 = rt_add(F->j_1132, ((rt_int)1LL));
}
L_end_1164: ;
if (((F->j_1132 < F->n_1133) && ((({ rt_gstr ix1175 = F->line_251; ix1175.p[rt_index(F->j_1132, ix1175.lo, ix1175.hi) - ix1175.lo]; }) == 35) || ((({ rt_gstr ix1176 = F->line_251; ix1176.p[rt_index(F->j_1132, ix1176.lo, ix1176.hi) - ix1176.lo]; }) == 58) && (f_is_digit_210(F->up, ({ rt_gstr ix1178 = F->line_251; ix1178.p[rt_index(rt_add(F->j_1132, ((rt_int)1LL)), ix1178.lo, ix1178.hi) - ix1178.lo]; })) || f_is_letter_208(F->up, ({ rt_gstr ix1180 = F->line_251; ix1180.p[rt_index(rt_add(F->j_1132, ((rt_int)1LL)), ix1180.lo, ix1180.hi) - ix1180.lo]; }))))))) {
{
F->base_1182 = F->v_1137;
if (((F->base_1182 < ((rt_int)2LL)) || (F->base_1182 > ((rt_int)16LL)))) {
f_fail_224(F->up, F->up->src_line_110, rt_g_lit("the base of a number is between 2 and 16 (RM79 2.4)", 51));
}
F->v_1137 = ((rt_int)0LL);
F->j_1132 = rt_add(F->j_1132, ((rt_int)1LL));
if (((F->j_1132 > F->n_1133) || (f_digit_in_246(F->up, ({ rt_gstr ix1184 = F->line_251; ix1184.p[rt_index(F->j_1132, ix1184.lo, ix1184.hi) - ix1184.lo]; }), ((rt_int)16LL)) < ((rt_int)0LL)))) {
f_fail_224(F->up, F->up->src_line_110, rt_g_lit("a based number needs digits (RM79 2.4)", 38));
}
while (((F->j_1132 <= F->n_1133) && ((f_is_letter_208(F->up, ({ rt_gstr ix1187 = F->line_251; ix1187.p[rt_index(F->j_1132, ix1187.lo, ix1187.hi) - ix1187.lo]; })) || f_is_digit_210(F->up, ({ rt_gstr ix1189 = F->line_251; ix1189.p[rt_index(F->j_1132, ix1189.lo, ix1189.hi) - ix1189.lo]; }))) || (({ rt_gstr ix1190 = F->line_251; ix1190.p[rt_index(F->j_1132, ix1190.lo, ix1190.hi) - ix1190.lo]; }) == 95)))) {
if ((({ rt_gstr ix1191 = F->line_251; ix1191.p[rt_index(F->j_1132, ix1191.lo, ix1191.hi) - ix1191.lo]; }) == 95)) {
if (((F->j_1132 == F->n_1133) || (f_digit_in_246(F->up, ({ rt_gstr ix1193 = F->line_251; ix1193.p[rt_index(rt_add(F->j_1132, ((rt_int)1LL)), ix1193.lo, ix1193.hi) - ix1193.lo]; }), ((rt_int)16LL)) < ((rt_int)0LL)))) {
f_fail_224(F->up, F->up->src_line_110, rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
} else {
F->d_1138 = f_digit_in_246(F->up, ({ rt_gstr ix1195 = F->line_251; ix1195.p[rt_index(F->j_1132, ix1195.lo, ix1195.hi) - ix1195.lo]; }), F->base_1182);
if ((F->d_1138 < ((rt_int)0LL))) {
f_fail_224(F->up, F->up->src_line_110, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("digit ", 6), one_rt_gstr(({ rt_gstr ix1197 = F->line_251; ix1197.p[rt_index(F->j_1132, ix1197.lo, ix1197.hi) - ix1197.lo]; }))), rt_g_lit(" is not valid in base ", 22)), rt_g_s2g(rt_str_of_int(F->base_1182))), rt_g_lit(" (RM79 2.4)", 11)));
}
f_accumulate_250(F->up, &F->v_1137, F->base_1182, F->d_1138);
}
F->j_1132 = rt_add(F->j_1132, ((rt_int)1LL));
}
L_end_1185: ;

}
L_end_1181: ;
f_add_token_241(F->up, ((rt_int)4LL), rt_g_s2g(rt_str_of_int(F->v_1137)), F->v_1137);
} else if (((F->j_1132 < F->n_1133) && ((({ rt_gstr ix1198 = F->line_251; ix1198.p[rt_index(F->j_1132, ix1198.lo, ix1198.hi) - ix1198.lo]; }) == 46) && f_is_digit_210(F->up, ({ rt_gstr ix1200 = F->line_251; ix1200.p[rt_index(rt_add(F->j_1132, ((rt_int)1LL)), ix1200.lo, ix1200.hi) - ix1200.lo]; }))))) {
F->bl_1140 = rt_add(F->bl_1140, ((rt_int)1LL));
(*({ rt_gstr *ix1201 = &(F->buf_1139); &ix1201->p[rt_index(F->bl_1140, ix1201->lo, ix1201->hi) - ix1201->lo]; })) = 46;
F->j_1132 = rt_add(F->j_1132, ((rt_int)1LL));
while (((F->j_1132 <= F->n_1133) && (f_is_digit_210(F->up, ({ rt_gstr ix1204 = F->line_251; ix1204.p[rt_index(F->j_1132, ix1204.lo, ix1204.hi) - ix1204.lo]; })) || (({ rt_gstr ix1205 = F->line_251; ix1205.p[rt_index(F->j_1132, ix1205.lo, ix1205.hi) - ix1205.lo]; }) == 95)))) {
if ((({ rt_gstr ix1206 = F->line_251; ix1206.p[rt_index(F->j_1132, ix1206.lo, ix1206.hi) - ix1206.lo]; }) != 95)) {
F->bl_1140 = rt_add(F->bl_1140, ((rt_int)1LL));
(*({ rt_gstr *ix1207 = &(F->buf_1139); &ix1207->p[rt_index(F->bl_1140, ix1207->lo, ix1207->hi) - ix1207->lo]; })) = ({ rt_gstr ix1208 = F->line_251; ix1208.p[rt_index(F->j_1132, ix1208.lo, ix1208.hi) - ix1208.lo]; });
} else if (((F->j_1132 == F->n_1133) || (!f_is_digit_210(F->up, ({ rt_gstr ix1210 = F->line_251; ix1210.p[rt_index(rt_add(F->j_1132, ((rt_int)1LL)), ix1210.lo, ix1210.hi) - ix1210.lo]; }))))) {
f_fail_224(F->up, F->up->src_line_110, rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
F->j_1132 = rt_add(F->j_1132, ((rt_int)1LL));
}
L_end_1202: ;
if (((F->j_1132 < F->n_1133) && (((({ rt_gstr ix1211 = F->line_251; ix1211.p[rt_index(F->j_1132, ix1211.lo, ix1211.hi) - ix1211.lo]; }) == 69) || (({ rt_gstr ix1212 = F->line_251; ix1212.p[rt_index(F->j_1132, ix1212.lo, ix1212.hi) - ix1212.lo]; }) == 101)) && (f_is_digit_210(F->up, ({ rt_gstr ix1214 = F->line_251; ix1214.p[rt_index(rt_add(F->j_1132, ((rt_int)1LL)), ix1214.lo, ix1214.hi) - ix1214.lo]; })) || ((rt_add(F->j_1132, ((rt_int)1LL)) < F->n_1133) && (((({ rt_gstr ix1215 = F->line_251; ix1215.p[rt_index(rt_add(F->j_1132, ((rt_int)1LL)), ix1215.lo, ix1215.hi) - ix1215.lo]; }) == 43) || (({ rt_gstr ix1216 = F->line_251; ix1216.p[rt_index(rt_add(F->j_1132, ((rt_int)1LL)), ix1216.lo, ix1216.hi) - ix1216.lo]; }) == 45)) && f_is_digit_210(F->up, ({ rt_gstr ix1218 = F->line_251; ix1218.p[rt_index(rt_add(F->j_1132, ((rt_int)2LL)), ix1218.lo, ix1218.hi) - ix1218.lo]; })))))))) {
f_exponent_257(F->up, F->line_251, &F->j_1132, &F->buf_1139, &F->bl_1140);
}
f_add_token_241(F->up, ((rt_int)5LL), ({ rt_gstr sl1220 = F->buf_1139; rt_int l_ = ((rt_int)1LL), h_ = F->bl_1140; if (l_ <= h_) { rt_index(l_, sl1220.lo, sl1220.hi); rt_index(h_, sl1220.lo, sl1220.hi); } sl1220.p += l_ - sl1220.lo; sl1220.lo = l_; sl1220.hi = h_; sl1220; }), ((rt_int)0LL));
} else if (((F->j_1132 < F->n_1133) && (((({ rt_gstr ix1221 = F->line_251; ix1221.p[rt_index(F->j_1132, ix1221.lo, ix1221.hi) - ix1221.lo]; }) == 69) || (({ rt_gstr ix1222 = F->line_251; ix1222.p[rt_index(F->j_1132, ix1222.lo, ix1222.hi) - ix1222.lo]; }) == 101)) && (f_is_digit_210(F->up, ({ rt_gstr ix1224 = F->line_251; ix1224.p[rt_index(rt_add(F->j_1132, ((rt_int)1LL)), ix1224.lo, ix1224.hi) - ix1224.lo]; })) || ((rt_add(F->j_1132, ((rt_int)1LL)) < F->n_1133) && (((({ rt_gstr ix1225 = F->line_251; ix1225.p[rt_index(rt_add(F->j_1132, ((rt_int)1LL)), ix1225.lo, ix1225.hi) - ix1225.lo]; }) == 43) || (({ rt_gstr ix1226 = F->line_251; ix1226.p[rt_index(rt_add(F->j_1132, ((rt_int)1LL)), ix1226.lo, ix1226.hi) - ix1226.lo]; }) == 45)) && f_is_digit_210(F->up, ({ rt_gstr ix1228 = F->line_251; ix1228.p[rt_index(rt_add(F->j_1132, ((rt_int)2LL)), ix1228.lo, ix1228.hi) - ix1228.lo]; })))))))) {
f_exponent_257(F->up, F->line_251, &F->j_1132, &F->buf_1139, &F->bl_1140);
f_add_token_241(F->up, ((rt_int)5LL), ({ rt_gstr sl1230 = F->buf_1139; rt_int l_ = ((rt_int)1LL), h_ = F->bl_1140; if (l_ <= h_) { rt_index(l_, sl1230.lo, sl1230.hi); rt_index(h_, sl1230.lo, sl1230.hi); } sl1230.p += l_ - sl1230.lo; sl1230.lo = l_; sl1230.hi = h_; sl1230; }), ((rt_int)0LL));
} else {
f_add_token_241(F->up, ((rt_int)4LL), ({ rt_gstr sl1232 = F->buf_1139; rt_int l_ = ((rt_int)1LL), h_ = F->bl_1140; if (l_ <= h_) { rt_index(l_, sl1232.lo, sl1232.hi); rt_index(h_, sl1232.lo, sl1232.hi); } sl1232.p += l_ - sl1232.lo; sl1232.lo = l_; sl1232.hi = h_; sl1232; }), F->v_1137);
}
F->i_1131 = F->j_1132;
} else if (((F->c_1135 == 34) || (F->c_1135 == 37))) {
F->quote_1136 = rt_range(F->c_1135, 0, 127);
F->j_1132 = rt_add(F->i_1131, ((rt_int)1LL));
F->bl_1140 = ((rt_int)0LL);
for (;;) {
if ((F->j_1132 > F->n_1133)) {
f_fail_224(F->up, F->up->src_line_110, rt_g_lit("unterminated string", 19));
}
if ((({ rt_gstr ix1234 = F->line_251; ix1234.p[rt_index(F->j_1132, ix1234.lo, ix1234.hi) - ix1234.lo]; }) == F->quote_1136)) {
if (((F->j_1132 == F->n_1133) || (({ rt_gstr ix1235 = F->line_251; ix1235.p[rt_index(rt_add(F->j_1132, ((rt_int)1LL)), ix1235.lo, ix1235.hi) - ix1235.lo]; }) != F->quote_1136))) {
goto L_end_1233;
}
F->j_1132 = rt_add(F->j_1132, ((rt_int)1LL));
} else if (((F->quote_1136 == 37) && (({ rt_gstr ix1236 = F->line_251; ix1236.p[rt_index(F->j_1132, ix1236.lo, ix1236.hi) - ix1236.lo]; }) == 34))) {
f_fail_224(F->up, F->up->src_line_110, rt_g_lit("a string bracketed by % cannot contain a quote (RM79 2.1)", 57));
}
F->bl_1140 = rt_add(F->bl_1140, ((rt_int)1LL));
(*({ rt_gstr *ix1237 = &(F->buf_1139); &ix1237->p[rt_index(F->bl_1140, ix1237->lo, ix1237->hi) - ix1237->lo]; })) = ({ rt_gstr ix1238 = F->line_251; ix1238.p[rt_index(F->j_1132, ix1238.lo, ix1238.hi) - ix1238.lo]; });
F->j_1132 = rt_add(F->j_1132, ((rt_int)1LL));
}
L_end_1233: ;
f_add_token_241(F->up, ((rt_int)6LL), ({ rt_gstr sl1240 = F->buf_1139; rt_int l_ = ((rt_int)1LL), h_ = F->bl_1140; if (l_ <= h_) { rt_index(l_, sl1240.lo, sl1240.hi); rt_index(h_, sl1240.lo, sl1240.hi); } sl1240.p += l_ - sl1240.lo; sl1240.lo = l_; sl1240.hi = h_; sl1240; }), ((rt_int)0LL));
F->i_1131 = rt_add(F->j_1132, ((rt_int)1LL));
} else {
{
F->two_1242.lo = ((rt_int)1LL); F->two_1242.hi = ((rt_int)3LL);
F->two_1242.lo2 = 1; F->two_1242.hi2 = 1;
F->two_1242.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->two_1242));
as_rt_gstr(&F->two_1242, rt_g_lit("   ", 3));
(*({ rt_gstr *ix1243 = &(F->two_1242); &ix1243->p[rt_index(((rt_int)1LL), ix1243->lo, ix1243->hi) - ix1243->lo]; })) = F->c_1135;
if ((F->i_1131 < F->n_1133)) {
(*({ rt_gstr *ix1244 = &(F->two_1242); &ix1244->p[rt_index(((rt_int)2LL), ix1244->lo, ix1244->hi) - ix1244->lo]; })) = ({ rt_gstr ix1245 = F->line_251; ix1245.p[rt_index(rt_add(F->i_1131, ((rt_int)1LL)), ix1245.lo, ix1245.hi) - ix1245.lo]; });
}
if ((rt_add(F->i_1131, ((rt_int)1LL)) < F->n_1133)) {
(*({ rt_gstr *ix1246 = &(F->two_1242); &ix1246->p[rt_index(((rt_int)3LL), ix1246->lo, ix1246->hi) - ix1246->lo]; })) = ({ rt_gstr ix1247 = F->line_251; ix1247.p[rt_index(rt_add(F->i_1131, ((rt_int)2LL)), ix1247.lo, ix1247.hi) - ix1247.lo]; });
}
if (eq_rt_gstr(F->two_1242, rt_g_lit(":=:", 3))) {
f_add_token_241(F->up, ((rt_int)3LL), rt_g_lit(":=:", 3), ((rt_int)0LL));
F->i_1131 = rt_add(F->i_1131, ((rt_int)3LL));
} else if ((((((((((eq_rt_gstr(({ rt_gstr sl1248 = F->two_1242; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1248.lo, sl1248.hi); rt_index(h_, sl1248.lo, sl1248.hi); } sl1248.p += l_ - sl1248.lo; sl1248.lo = l_; sl1248.hi = h_; sl1248; }), rt_g_lit(":=", 2)) || eq_rt_gstr(({ rt_gstr sl1249 = F->two_1242; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1249.lo, sl1249.hi); rt_index(h_, sl1249.lo, sl1249.hi); } sl1249.p += l_ - sl1249.lo; sl1249.lo = l_; sl1249.hi = h_; sl1249; }), rt_g_lit("=:", 2))) || eq_rt_gstr(({ rt_gstr sl1250 = F->two_1242; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1250.lo, sl1250.hi); rt_index(h_, sl1250.lo, sl1250.hi); } sl1250.p += l_ - sl1250.lo; sl1250.lo = l_; sl1250.hi = h_; sl1250; }), rt_g_lit("=>", 2))) || eq_rt_gstr(({ rt_gstr sl1251 = F->two_1242; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1251.lo, sl1251.hi); rt_index(h_, sl1251.lo, sl1251.hi); } sl1251.p += l_ - sl1251.lo; sl1251.lo = l_; sl1251.hi = h_; sl1251; }), rt_g_lit("..", 2))) || eq_rt_gstr(({ rt_gstr sl1252 = F->two_1242; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1252.lo, sl1252.hi); rt_index(h_, sl1252.lo, sl1252.hi); } sl1252.p += l_ - sl1252.lo; sl1252.lo = l_; sl1252.hi = h_; sl1252; }), rt_g_lit("**", 2))) || eq_rt_gstr(({ rt_gstr sl1253 = F->two_1242; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1253.lo, sl1253.hi); rt_index(h_, sl1253.lo, sl1253.hi); } sl1253.p += l_ - sl1253.lo; sl1253.lo = l_; sl1253.hi = h_; sl1253; }), rt_g_lit("/=", 2))) || eq_rt_gstr(({ rt_gstr sl1254 = F->two_1242; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1254.lo, sl1254.hi); rt_index(h_, sl1254.lo, sl1254.hi); } sl1254.p += l_ - sl1254.lo; sl1254.lo = l_; sl1254.hi = h_; sl1254; }), rt_g_lit("<=", 2))) || eq_rt_gstr(({ rt_gstr sl1255 = F->two_1242; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1255.lo, sl1255.hi); rt_index(h_, sl1255.lo, sl1255.hi); } sl1255.p += l_ - sl1255.lo; sl1255.lo = l_; sl1255.hi = h_; sl1255; }), rt_g_lit(">=", 2))) || eq_rt_gstr(({ rt_gstr sl1256 = F->two_1242; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1256.lo, sl1256.hi); rt_index(h_, sl1256.lo, sl1256.hi); } sl1256.p += l_ - sl1256.lo; sl1256.lo = l_; sl1256.hi = h_; sl1256; }), rt_g_lit("<<", 2))) || eq_rt_gstr(({ rt_gstr sl1257 = F->two_1242; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1257.lo, sl1257.hi); rt_index(h_, sl1257.lo, sl1257.hi); } sl1257.p += l_ - sl1257.lo; sl1257.lo = l_; sl1257.hi = h_; sl1257; }), rt_g_lit(">>", 2)))) {
f_add_token_241(F->up, ((rt_int)3LL), ({ rt_gstr sl1259 = F->two_1242; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1259.lo, sl1259.hi); rt_index(h_, sl1259.lo, sl1259.hi); } sl1259.p += l_ - sl1259.lo; sl1259.lo = l_; sl1259.hi = h_; sl1259; }), ((rt_int)0LL));
F->i_1131 = rt_add(F->i_1131, ((rt_int)2LL));
} else if ((F->c_1135 == 33)) {
f_add_token_241(F->up, ((rt_int)3LL), rt_g_lit("|", 1), ((rt_int)0LL));
F->i_1131 = rt_add(F->i_1131, ((rt_int)1LL));
} else if (((((((((((((((((F->c_1135 == 38) || (F->c_1135 == 39)) || (F->c_1135 == 40)) || (F->c_1135 == 41)) || (F->c_1135 == 42)) || (F->c_1135 == 43)) || (F->c_1135 == 44)) || (F->c_1135 == 45)) || (F->c_1135 == 46)) || (F->c_1135 == 47)) || (F->c_1135 == 58)) || (F->c_1135 == 59)) || (F->c_1135 == 60)) || (F->c_1135 == 61)) || (F->c_1135 == 62)) || (F->c_1135 == 124))) {
f_add_token_241(F->up, ((rt_int)3LL), ({ rt_gstr sl1261 = F->two_1242; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)1LL); if (l_ <= h_) { rt_index(l_, sl1261.lo, sl1261.hi); rt_index(h_, sl1261.lo, sl1261.hi); } sl1261.p += l_ - sl1261.lo; sl1261.lo = l_; sl1261.hi = h_; sl1261; }), ((rt_int)0LL));
F->i_1131 = rt_add(F->i_1131, ((rt_int)1LL));
if ((F->c_1135 == 59)) {
f_check_include_264(F->up);
}
} else {
f_fail_224(F->up, F->up->src_line_110, rt_g_lit("unexpected character", 20));
}

}
L_end_1241: ;
}
}
L_end_1141: ;
ret_:

  return;
}

static void f_exponent_257(struct f_greenc_1fr *up_, rt_gstr line_253, rt_int *j_254, rt_gstr *buf_255, rt_int *bl_256) {
  struct f_exponent_257fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_253 = cp_rt_gstr(line_253);
F->j_254 = j_254;
F->buf_255 = buf_255;
F->bl_256 = bl_256;
(*F->bl_256) = rt_add((*F->bl_256), ((rt_int)1LL));
(*({ rt_gstr *ix1262 = &((*F->buf_255)); &ix1262->p[rt_index((*F->bl_256), ix1262->lo, ix1262->hi) - ix1262->lo]; })) = 69;
(*F->j_254) = rt_add((*F->j_254), ((rt_int)1LL));
if (((({ rt_gstr ix1263 = F->line_253; ix1263.p[rt_index((*F->j_254), ix1263.lo, ix1263.hi) - ix1263.lo]; }) == 43) || (({ rt_gstr ix1264 = F->line_253; ix1264.p[rt_index((*F->j_254), ix1264.lo, ix1264.hi) - ix1264.lo]; }) == 45))) {
(*F->bl_256) = rt_add((*F->bl_256), ((rt_int)1LL));
(*({ rt_gstr *ix1265 = &((*F->buf_255)); &ix1265->p[rt_index((*F->bl_256), ix1265->lo, ix1265->hi) - ix1265->lo]; })) = ({ rt_gstr ix1266 = F->line_253; ix1266.p[rt_index((*F->j_254), ix1266.lo, ix1266.hi) - ix1266.lo]; });
(*F->j_254) = rt_add((*F->j_254), ((rt_int)1LL));
}
while ((((*F->j_254) <= ({ rt_gstr at1268 = F->line_253; at1268.hi >= at1268.lo ? at1268.hi - at1268.lo + 1 : (rt_int)0; })) && (f_is_digit_210(F->up, ({ rt_gstr ix1270 = F->line_253; ix1270.p[rt_index((*F->j_254), ix1270.lo, ix1270.hi) - ix1270.lo]; })) || (({ rt_gstr ix1271 = F->line_253; ix1271.p[rt_index((*F->j_254), ix1271.lo, ix1271.hi) - ix1271.lo]; }) == 95)))) {
if ((({ rt_gstr ix1272 = F->line_253; ix1272.p[rt_index((*F->j_254), ix1272.lo, ix1272.hi) - ix1272.lo]; }) != 95)) {
(*F->bl_256) = rt_add((*F->bl_256), ((rt_int)1LL));
(*({ rt_gstr *ix1273 = &((*F->buf_255)); &ix1273->p[rt_index((*F->bl_256), ix1273->lo, ix1273->hi) - ix1273->lo]; })) = ({ rt_gstr ix1274 = F->line_253; ix1274.p[rt_index((*F->j_254), ix1274.lo, ix1274.hi) - ix1274.lo]; });
} else if ((((*F->j_254) == ({ rt_gstr at1275 = F->line_253; at1275.hi >= at1275.lo ? at1275.hi - at1275.lo + 1 : (rt_int)0; })) || (!f_is_digit_210(F->up, ({ rt_gstr ix1277 = F->line_253; ix1277.p[rt_index(rt_add((*F->j_254), ((rt_int)1LL)), ix1277.lo, ix1277.hi) - ix1277.lo]; }))))) {
f_fail_224(F->up, F->up->src_line_110, rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
(*F->j_254) = rt_add((*F->j_254), ((rt_int)1LL));
}
L_end_1267: ;
ret_:

  return;
}

static void f_include_open_260(struct f_greenc_1fr *up_, rt_gstr name_258, rt_int *length_259) {
  struct f_include_open_260fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_258 = cp_rt_gstr(name_258);
F->length_259 = length_259;
rt_g_include_open(rt_g_g2s(F->name_258), F->length_259);
ret_:

  return;
}

static void f_include_char_263(struct f_greenc_1fr *up_, rt_int i_261, int *c_262) {
  struct f_include_char_263fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->i_261 = i_261;
F->c_262 = c_262;
rt_g_include_char(F->i_261, F->c_262);
ret_:

  return;
}

static void f_check_include_264(struct f_greenc_1fr *up_) {
  struct f_check_include_264fr *F = rt_alloc(sizeof *F);
F->up = up_;
if ((F->up->ntoks_108 < ((rt_int)6LL))) {
goto ret_;
}
if ((!(((((((*(P105)rt_nil_check(({ A104 ix1279 = F->up->toks_107; ix1279.p[rt_index(rt_sub(F->up->ntoks_108, ((rt_int)5LL)), ix1279.lo, ix1279.hi) - ix1279.lo]; }))).kind_ == ((rt_int)2LL)) && eq_rt_gstr((*(P135)rt_nil_check((*(P105)rt_nil_check(({ A104 ix1280 = F->up->toks_107; ix1280.p[rt_index(rt_sub(F->up->ntoks_108, ((rt_int)5LL)), ix1280.lo, ix1280.hi) - ix1280.lo]; }))).s_)), rt_g_lit("PRAGMA", 6))) && eq_rt_gstr((*(P135)rt_nil_check((*(P105)rt_nil_check(({ A104 ix1281 = F->up->toks_107; ix1281.p[rt_index(rt_sub(F->up->ntoks_108, ((rt_int)4LL)), ix1281.lo, ix1281.hi) - ix1281.lo]; }))).s_)), rt_g_lit("INCLUDE", 7))) && eq_rt_gstr((*(P135)rt_nil_check((*(P105)rt_nil_check(({ A104 ix1282 = F->up->toks_107; ix1282.p[rt_index(rt_sub(F->up->ntoks_108, ((rt_int)3LL)), ix1282.lo, ix1282.hi) - ix1282.lo]; }))).s_)), rt_g_lit("(", 1))) && ((*(P105)rt_nil_check(({ A104 ix1283 = F->up->toks_107; ix1283.p[rt_index(rt_sub(F->up->ntoks_108, ((rt_int)2LL)), ix1283.lo, ix1283.hi) - ix1283.lo]; }))).kind_ == ((rt_int)6LL))) && eq_rt_gstr((*(P135)rt_nil_check((*(P105)rt_nil_check(({ A104 ix1284 = F->up->toks_107; ix1284.p[rt_index(rt_sub(F->up->ntoks_108, ((rt_int)1LL)), ix1284.lo, ix1284.hi) - ix1284.lo]; }))).s_)), rt_g_lit(")", 1))))) {
goto ret_;
}
f_include_open_260(F->up, (*(P135)rt_nil_check((*(P105)rt_nil_check(({ A104 ix1286 = F->up->toks_107; ix1286.p[rt_index(rt_sub(F->up->ntoks_108, ((rt_int)2LL)), ix1286.lo, ix1286.hi) - ix1286.lo]; }))).s_)), &F->n_1278);
if ((F->n_1278 < ((rt_int)0LL))) {
f_fail_224(F->up, F->up->src_line_110, cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma INCLUDE: the file ", 25), (*(P135)rt_nil_check((*(P105)rt_nil_check(({ A104 ix1288 = F->up->toks_107; ix1288.p[rt_index(rt_sub(F->up->ntoks_108, ((rt_int)2LL)), ix1288.lo, ix1288.hi) - ix1288.lo]; }))).s_))), rt_g_lit(" cannot be read", 15)));
}
F->up->ntoks_108 = rt_sub(F->up->ntoks_108, ((rt_int)6LL));
f_include_text_266(F->up, F->n_1278);
ret_:

  return;
}

static void f_include_text_266(struct f_greenc_1fr *up_, rt_int n_265) {
  struct f_include_text_266fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_265 = n_265;
F->t_1289.lo = ((rt_int)1LL); F->t_1289.hi = rt_add(F->n_265, ((rt_int)1LL));
F->t_1289.lo2 = 1; F->t_1289.hi2 = 1;
F->t_1289.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->t_1289));
F->saved_line_1290 = F->up->src_line_110;
F->from_1291 = ((rt_int)1LL);
{ rt_int lo1294 = ((rt_int)1LL), hi1295 = F->n_265;
for (rt_int it1296 = lo1294; it1296 <= hi1295; it1296++) {
F->k_1293 = it1296;
f_include_char_263(F->up, F->k_1293, &(*({ rt_gstr *ix1298 = &(F->t_1289); &ix1298->p[rt_index(F->k_1293, ix1298->lo, ix1298->hi) - ix1298->lo]; })));
}
}
L_end_1292: ;
F->up->src_line_110 = ((rt_int)0LL);
{ rt_int lo1301 = ((rt_int)1LL), hi1302 = F->n_265;
for (rt_int it1303 = lo1301; it1303 <= hi1302; it1303++) {
F->k_1300 = it1303;
if ((({ rt_gstr ix1304 = F->t_1289; ix1304.p[rt_index(F->k_1300, ix1304.lo, ix1304.hi) - ix1304.lo]; }) == 10)) {
F->up->src_line_110 = rt_add(F->up->src_line_110, ((rt_int)1LL));
f_include_line_270(F->up, F->t_1289, F->from_1291, rt_sub(F->k_1300, ((rt_int)1LL)));
F->from_1291 = rt_add(F->k_1300, ((rt_int)1LL));
}
}
}
L_end_1299: ;
if ((F->from_1291 <= F->n_265)) {
F->up->src_line_110 = rt_add(F->up->src_line_110, ((rt_int)1LL));
f_include_line_270(F->up, F->t_1289, F->from_1291, F->n_265);
}
F->up->src_line_110 = F->saved_line_1290;
ret_:

  return;
}

static void f_include_line_270(struct f_greenc_1fr *up_, rt_gstr t_267, rt_int from_268, rt_int to_269) {
  struct f_include_line_270fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_267 = cp_rt_gstr(t_267);
F->from_268 = from_268;
F->to_269 = to_269;
F->l_1305.lo = ((rt_int)1LL); F->l_1305.hi = rt_add(rt_sub(F->to_269, F->from_268), ((rt_int)1LL));
F->l_1305.lo2 = 1; F->l_1305.hi2 = 1;
F->l_1305.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->l_1305));
{ rt_int lo1308 = F->from_268, hi1309 = F->to_269;
for (rt_int it1310 = lo1308; it1310 <= hi1309; it1310++) {
F->k_1307 = it1310;
(*({ rt_gstr *ix1311 = &(F->l_1305); &ix1311->p[rt_index(rt_add(rt_sub(F->k_1307, F->from_268), ((rt_int)1LL)), ix1311->lo, ix1311->hi) - ix1311->lo]; })) = ({ rt_gstr ix1312 = F->t_267; ix1312.p[rt_index(F->k_1307, ix1312.lo, ix1312.hi) - ix1312.lo]; });
}
}
L_end_1306: ;
f_lex_line_252(F->up, F->l_1305);
ret_:

  return;
}

static void f_read_source_271(struct f_greenc_1fr *up_) {
  struct f_read_source_271fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->buf_1313.lo = ((rt_int)1LL); F->buf_1313.hi = ((rt_int)10000LL);
F->buf_1313.lo2 = 1; F->buf_1313.hi2 = 1;
F->buf_1313.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->buf_1313));
F->bl_1314 = ((rt_int)0LL);
{ rt_frame xf1316;
if (RT_TRY(xf1316)) {
for (;;) {
(F->c_1315 = rt_g_getc());
if ((F->c_1315 == 10)) {
F->up->src_line_110 = rt_add(F->up->src_line_110, ((rt_int)1LL));
f_lex_line_252(F->up, ({ rt_gstr sl1320 = F->buf_1313; rt_int l_ = ((rt_int)1LL), h_ = F->bl_1314; if (l_ <= h_) { rt_index(l_, sl1320.lo, sl1320.hi); rt_index(h_, sl1320.lo, sl1320.hi); } sl1320.p += l_ - sl1320.lo; sl1320.lo = l_; sl1320.hi = h_; sl1320; }));
F->bl_1314 = ((rt_int)0LL);
} else {
F->bl_1314 = rt_add(F->bl_1314, ((rt_int)1LL));
(*({ rt_gstr *ix1321 = &(F->buf_1313); &ix1321->p[rt_index(F->bl_1314, ix1321->lo, ix1321->hi) - ix1321->lo]; })) = F->c_1315;
}
}
L_end_1318: ;
RT_POP(xf1316);
} else {
RT_POP(xf1316);
int x1317 = rt_xcur;
if (rt_g_aborted()) rt_raise(x1317);
if (0 || x1317 == rt_exc("END_OF_FILE")) {
if ((F->bl_1314 > ((rt_int)0LL))) {
F->up->src_line_110 = rt_add(F->up->src_line_110, ((rt_int)1LL));
f_lex_line_252(F->up, ({ rt_gstr sl1323 = F->buf_1313; rt_int l_ = ((rt_int)1LL), h_ = F->bl_1314; if (l_ <= h_) { rt_index(l_, sl1323.lo, sl1323.hi); rt_index(h_, sl1323.lo, sl1323.hi); } sl1323.p += l_ - sl1323.lo; sl1323.lo = l_; sl1323.hi = h_; sl1323; }));
}
f_add_token_241(F->up, ((rt_int)0LL), rt_g_lit("<end>", 5), ((rt_int)0LL));
} else {
rt_raise(x1317);
}
}
}
ret_:

  return;
}

static P169 f_nn_274(struct f_greenc_1fr *up_, rt_int kind_272, rt_int line_273) {
  struct f_nn_274fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_272 = kind_272;
F->line_273 = line_273;
F->result_ = ({ R170 *cell1324 = rt_alloc(sizeof(R170)); *cell1324 = cp_R170(({ R170 ag1325; ag1325.kind_ = F->kind_272; ag1325.line_ = F->line_273; ag1325.ival_ = ((rt_int)0LL); ag1325.flag_ = ((rt_int)0LL); ag1325.name_ = NULL; ag1325.tag_ = NULL; ag1325.a_ = NULL; ag1325.b_ = NULL; ag1325.c_ = NULL; ag1325.d_ = NULL; ag1325.e_ = NULL; ag1325.next_ = NULL; ag1325.formal_ = NULL; ag1325; })); (P169)cell1324; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_append_278(struct f_greenc_1fr *up_, P169 *head_275, P169 *tail_276, P169 x_277) {
  struct f_append_278fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->head_275 = head_275;
F->tail_276 = tail_276;
F->x_277 = x_277;
if ((F->x_277 == NULL)) {
goto ret_;
}
if (((*F->head_275) == NULL)) {
(*F->head_275) = F->x_277;
} else {
(*(P169)rt_nil_check((*F->tail_276))).next_ = F->x_277;
}
(*F->tail_276) = F->x_277;
while (((*(P169)rt_nil_check((*F->tail_276))).next_ != NULL)) {
(*F->tail_276) = (*(P169)rt_nil_check((*F->tail_276))).next_;
}
L_end_1326: ;
ret_:

  return;
}

static rt_int f_list_len_280(struct f_greenc_1fr *up_, P169 l_279) {
  struct f_list_len_280fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_279 = l_279;
F->n_1327 = ((rt_int)0LL);
F->p_1328 = NULL;
F->p_1328 = F->l_279;
while ((F->p_1328 != NULL)) {
F->n_1327 = rt_add(F->n_1327, ((rt_int)1LL));
F->p_1328 = (*(P169)rt_nil_check(F->p_1328)).next_;
}
L_end_1329: ;
F->result_ = F->n_1327;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_cur_line_281(struct f_greenc_1fr *up_) {
  struct f_cur_line_281fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = (*(P105)rt_nil_check(({ A104 ix1330 = F->up->toks_107; ix1330.p[rt_index(F->up->tpos_109, ix1330.lo, ix1330.hi) - ix1330.lo]; }))).line_;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_kw_283(struct f_greenc_1fr *up_, rt_gstr w_282) {
  struct f_at_kw_283fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_282 = cp_rt_gstr(w_282);
F->result_ = (((*(P105)rt_nil_check(({ A104 ix1331 = F->up->toks_107; ix1331.p[rt_index(F->up->tpos_109, ix1331.lo, ix1331.hi) - ix1331.lo]; }))).kind_ == ((rt_int)2LL)) && eq_rt_gstr((*(P135)rt_nil_check((*(P105)rt_nil_check(({ A104 ix1332 = F->up->toks_107; ix1332.p[rt_index(F->up->tpos_109, ix1332.lo, ix1332.hi) - ix1332.lo]; }))).s_)), F->w_282));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_op_285(struct f_greenc_1fr *up_, rt_gstr w_284) {
  struct f_at_op_285fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_284 = cp_rt_gstr(w_284);
F->result_ = (((*(P105)rt_nil_check(({ A104 ix1333 = F->up->toks_107; ix1333.p[rt_index(F->up->tpos_109, ix1333.lo, ix1333.hi) - ix1333.lo]; }))).kind_ == ((rt_int)3LL)) && eq_rt_gstr((*(P135)rt_nil_check((*(P105)rt_nil_check(({ A104 ix1334 = F->up->toks_107; ix1334.p[rt_index(F->up->tpos_109, ix1334.lo, ix1334.hi) - ix1334.lo]; }))).s_)), F->w_284));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_kind_287(struct f_greenc_1fr *up_, rt_int k_286) {
  struct f_at_kind_287fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_286 = k_286;
F->result_ = ((*(P105)rt_nil_check(({ A104 ix1335 = F->up->toks_107; ix1335.p[rt_index(F->up->tpos_109, ix1335.lo, ix1335.hi) - ix1335.lo]; }))).kind_ == F->k_286);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_kind_at_289(struct f_greenc_1fr *up_, rt_int k_288) {
  struct f_kind_at_289fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_288 = k_288;
if ((rt_add(F->up->tpos_109, F->k_288) > F->up->ntoks_108)) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
F->result_ = (*(P105)rt_nil_check(({ A104 ix1336 = F->up->toks_107; ix1336.p[rt_index(rt_add(F->up->tpos_109, F->k_288), ix1336.lo, ix1336.hi) - ix1336.lo]; }))).kind_;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_text_at_291(struct f_greenc_1fr *up_, rt_int k_290) {
  struct f_text_at_291fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_290 = k_290;
if ((rt_add(F->up->tpos_109, F->k_290) > F->up->ntoks_108)) {
F->result_ = rt_g_lit("", 0);
goto ret_;
}
F->result_ = (*(P135)rt_nil_check((*(P105)rt_nil_check(({ A104 ix1337 = F->up->toks_107; ix1337.p[rt_index(rt_add(F->up->tpos_109, F->k_290), ix1337.lo, ix1337.hi) - ix1337.lo]; }))).s_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_perror_293(struct f_greenc_1fr *up_, rt_gstr msg_292) {
  struct f_perror_293fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->msg_292 = cp_rt_gstr(msg_292);
f_fail_224(F->up, (*(P105)rt_nil_check(({ A104 ix1340 = F->up->toks_107; ix1340.p[rt_index(F->up->tpos_109, ix1340.lo, ix1340.hi) - ix1340.lo]; }))).line_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->msg_292, rt_g_lit(" (at ", 5)), (*(P135)rt_nil_check((*(P105)rt_nil_check(({ A104 ix1341 = F->up->toks_107; ix1341.p[rt_index(F->up->tpos_109, ix1341.lo, ix1341.hi) - ix1341.lo]; }))).s_))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_skip_294(struct f_greenc_1fr *up_) {
  struct f_skip_294fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->tpos_109 = rt_add(F->up->tpos_109, ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_kw_296(struct f_greenc_1fr *up_, rt_gstr w_295) {
  struct f_expect_kw_296fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_295 = cp_rt_gstr(w_295);
if ((!f_at_kw_283(F->up, F->w_295))) {
f_perror_293(F->up, cat_rt_gstr(rt_g_lit("expected ", 9), F->w_295));
}
F->up->tpos_109 = rt_add(F->up->tpos_109, ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_op_298(struct f_greenc_1fr *up_, rt_gstr w_297) {
  struct f_expect_op_298fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_297 = cp_rt_gstr(w_297);
if ((!f_at_op_285(F->up, F->w_297))) {
f_perror_293(F->up, cat_rt_gstr(rt_g_lit("expected ", 9), F->w_297));
}
F->up->tpos_109 = rt_add(F->up->tpos_109, ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_id_300(struct f_greenc_1fr *up_, P135 *res_299) {
  struct f_expect_id_300fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_299 = res_299;
if ((!f_at_kind_287(F->up, ((rt_int)1LL)))) {
f_perror_293(F->up, rt_g_lit("expected an identifier", 22));
}
F->up->tpos_109 = rt_add(F->up->tpos_109, ((rt_int)1LL));
(*F->res_299) = (*(P105)rt_nil_check(({ A104 ix1342 = F->up->toks_107; ix1342.p[rt_index(rt_sub(F->up->tpos_109, ((rt_int)1LL)), ix1342.lo, ix1342.hi) - ix1342.lo]; }))).s_;
goto ret_;
ret_:

  return;
}

static void f_name_node_302(struct f_greenc_1fr *up_, P169 *res_301) {
  struct f_name_node_302fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_301 = res_301;
F->x_1343 = NULL;
F->x_1343 = f_nn_274(F->up, ((rt_int)5LL), f_cur_line_281(F->up));
f_expect_id_300(F->up, &(*(P169)rt_nil_check(F->x_1343)).name_);
(*F->res_301) = F->x_1343;
goto ret_;
ret_:

  return;
}

static void f_id_list_304(struct f_greenc_1fr *up_, P169 *res_303) {
  struct f_id_list_304fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_303 = res_303;
F->head_1344 = NULL;
F->tail_1345 = NULL;
F->x_1346 = NULL;
f_name_node_302(F->up, &F->x_1346);
f_append_278(F->up, &F->head_1344, &F->tail_1345, F->x_1346);
while (f_at_op_285(F->up, rt_g_lit(",", 1))) {
f_skip_294(F->up);
f_name_node_302(F->up, &F->x_1346);
f_append_278(F->up, &F->head_1344, &F->tail_1345, F->x_1346);
}
L_end_1347: ;
(*F->res_303) = F->head_1344;
goto ret_;
ret_:

  return;
}

static P169 f_binop_309(struct f_greenc_1fr *up_, P135 op_305, P169 l_306, P169 r_307, rt_int line_308) {
  struct f_binop_309fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->op_305 = op_305;
F->l_306 = l_306;
F->r_307 = r_307;
F->line_308 = line_308;
F->x_1348 = NULL;
F->x_1348 = f_nn_274(F->up, ((rt_int)7LL), F->line_308);
(*(P169)rt_nil_check(F->x_1348)).name_ = F->op_305;
(*(P169)rt_nil_check(F->x_1348)).a_ = F->l_306;
(*(P169)rt_nil_check(F->x_1348)).b_ = F->r_307;
F->result_ = F->x_1348;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_expr_311(struct f_greenc_1fr *up_, P169 *res_310) {
  struct f_expr_311fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_310 = res_310;
F->l_1349 = NULL;
F->r_1350 = NULL;
F->op_1351 = NULL;
f_relation_315(F->up, &F->l_1349);
while (((f_at_kw_283(F->up, rt_g_lit("AND", 3)) || f_at_kw_283(F->up, rt_g_lit("OR", 2))) || f_at_kw_283(F->up, rt_g_lit("XOR", 3)))) {
F->op_1351 = (*(P105)rt_nil_check(({ A104 ix1354 = F->up->toks_107; ix1354.p[rt_index(F->up->tpos_109, ix1354.lo, ix1354.hi) - ix1354.lo]; }))).s_;
F->line_1352 = f_cur_line_281(F->up);
f_skip_294(F->up);
if ((eq_rt_gstr((*(P135)rt_nil_check(F->op_1351)), rt_g_lit("AND", 3)) && f_at_kw_283(F->up, rt_g_lit("THEN", 4)))) {
f_skip_294(F->up);
} else if ((eq_rt_gstr((*(P135)rt_nil_check(F->op_1351)), rt_g_lit("OR", 2)) && f_at_kw_283(F->up, rt_g_lit("ELSE", 4)))) {
f_skip_294(F->up);
}
f_relation_315(F->up, &F->r_1350);
F->l_1349 = f_binop_309(F->up, F->op_1351, F->l_1349, F->r_1350, F->line_1352);
}
L_end_1353: ;
(*F->res_310) = F->l_1349;
goto ret_;
ret_:

  return;
}

static int f_is_rel_313(struct f_greenc_1fr *up_, rt_gstr s_312) {
  struct f_is_rel_313fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_312 = cp_rt_gstr(s_312);
F->result_ = (((((eq_rt_gstr(F->s_312, rt_g_lit("=", 1)) || eq_rt_gstr(F->s_312, rt_g_lit("/=", 2))) || eq_rt_gstr(F->s_312, rt_g_lit("<", 1))) || eq_rt_gstr(F->s_312, rt_g_lit("<=", 2))) || eq_rt_gstr(F->s_312, rt_g_lit(">", 1))) || eq_rt_gstr(F->s_312, rt_g_lit(">=", 2)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_relation_315(struct f_greenc_1fr *up_, P169 *res_314) {
  struct f_relation_315fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_314 = res_314;
F->l_1355 = NULL;
F->r_1356 = NULL;
F->lo_1357 = NULL;
F->hi_1358 = NULL;
F->t_1359 = NULL;
F->op_1360 = NULL;
F->line_1361 = f_cur_line_281(F->up);
F->neg_1362 = 0;
f_simple_expr_317(F->up, &F->l_1355);
if ((f_at_kind_287(F->up, ((rt_int)3LL)) && f_is_rel_313(F->up, (*(P135)rt_nil_check((*(P105)rt_nil_check(({ A104 ix1364 = F->up->toks_107; ix1364.p[rt_index(F->up->tpos_109, ix1364.lo, ix1364.hi) - ix1364.lo]; }))).s_))))) {
F->op_1360 = (*(P105)rt_nil_check(({ A104 ix1365 = F->up->toks_107; ix1365.p[rt_index(F->up->tpos_109, ix1365.lo, ix1365.hi) - ix1365.lo]; }))).s_;
f_skip_294(F->up);
f_simple_expr_317(F->up, &F->r_1356);
F->l_1355 = f_binop_309(F->up, F->op_1360, F->l_1355, F->r_1356, F->line_1361);
(*F->res_314) = F->l_1355;
goto ret_;
}
if (((f_at_kw_283(F->up, rt_g_lit("NOT", 3)) && (f_kind_at_289(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_291(F->up, ((rt_int)1LL)), rt_g_lit("IN", 2)))) {
f_skip_294(F->up);
F->neg_1362 = 1;
}
if (f_at_kw_283(F->up, rt_g_lit("IN", 2))) {
f_skip_294(F->up);
f_simple_expr_317(F->up, &F->lo_1357);
f_expect_op_298(F->up, rt_g_lit("..", 2));
f_simple_expr_317(F->up, &F->hi_1358);
F->t_1359 = f_nn_274(F->up, ((rt_int)14LL), F->line_1361);
(*(P169)rt_nil_check(F->t_1359)).a_ = F->lo_1357;
(*(P169)rt_nil_check(F->t_1359)).b_ = F->hi_1358;
F->op_1360 = f_mk_203(F->up, rt_g_lit("IN", 2));
F->l_1355 = f_binop_309(F->up, F->op_1360, F->l_1355, F->t_1359, F->line_1361);
if (F->neg_1362) {
F->t_1359 = f_nn_274(F->up, ((rt_int)6LL), F->line_1361);
(*(P169)rt_nil_check(F->t_1359)).name_ = f_mk_203(F->up, rt_g_lit("NOT", 3));
(*(P169)rt_nil_check(F->t_1359)).a_ = F->l_1355;
(*F->res_314) = F->t_1359;
goto ret_;
}
}
(*F->res_314) = F->l_1355;
goto ret_;
ret_:

  return;
}

static void f_simple_expr_317(struct f_greenc_1fr *up_, P169 *res_316) {
  struct f_simple_expr_317fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_316 = res_316;
F->l_1366 = NULL;
F->r_1367 = NULL;
F->op_1368 = NULL;
F->line_1369 = f_cur_line_281(F->up);
if (((f_at_op_285(F->up, rt_g_lit("+", 1)) || f_at_op_285(F->up, rt_g_lit("-", 1))) || f_at_kw_283(F->up, rt_g_lit("NOT", 3)))) {
F->op_1368 = (*(P105)rt_nil_check(({ A104 ix1370 = F->up->toks_107; ix1370.p[rt_index(F->up->tpos_109, ix1370.lo, ix1370.hi) - ix1370.lo]; }))).s_;
f_skip_294(F->up);
f_term_319(F->up, &F->r_1367);
F->l_1366 = f_nn_274(F->up, ((rt_int)6LL), F->line_1369);
(*(P169)rt_nil_check(F->l_1366)).name_ = F->op_1368;
(*(P169)rt_nil_check(F->l_1366)).a_ = F->r_1367;
} else {
f_term_319(F->up, &F->l_1366);
}
while (((f_at_op_285(F->up, rt_g_lit("+", 1)) || f_at_op_285(F->up, rt_g_lit("-", 1))) || f_at_op_285(F->up, rt_g_lit("&", 1)))) {
F->op_1368 = (*(P105)rt_nil_check(({ A104 ix1372 = F->up->toks_107; ix1372.p[rt_index(F->up->tpos_109, ix1372.lo, ix1372.hi) - ix1372.lo]; }))).s_;
f_skip_294(F->up);
f_term_319(F->up, &F->r_1367);
F->l_1366 = f_binop_309(F->up, F->op_1368, F->l_1366, F->r_1367, F->line_1369);
}
L_end_1371: ;
(*F->res_316) = F->l_1366;
goto ret_;
ret_:

  return;
}

static void f_term_319(struct f_greenc_1fr *up_, P169 *res_318) {
  struct f_term_319fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_318 = res_318;
F->l_1373 = NULL;
F->r_1374 = NULL;
F->op_1375 = NULL;
F->line_1376 = f_cur_line_281(F->up);
f_factor_321(F->up, &F->l_1373);
while (((f_at_op_285(F->up, rt_g_lit("*", 1)) || f_at_op_285(F->up, rt_g_lit("/", 1))) || f_at_kw_283(F->up, rt_g_lit("MOD", 3)))) {
F->op_1375 = (*(P105)rt_nil_check(({ A104 ix1378 = F->up->toks_107; ix1378.p[rt_index(F->up->tpos_109, ix1378.lo, ix1378.hi) - ix1378.lo]; }))).s_;
f_skip_294(F->up);
f_factor_321(F->up, &F->r_1374);
F->l_1373 = f_binop_309(F->up, F->op_1375, F->l_1373, F->r_1374, F->line_1376);
}
L_end_1377: ;
(*F->res_318) = F->l_1373;
goto ret_;
ret_:

  return;
}

static void f_factor_321(struct f_greenc_1fr *up_, P169 *res_320) {
  struct f_factor_321fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_320 = res_320;
F->l_1379 = NULL;
F->r_1380 = NULL;
F->op_1381 = NULL;
F->line_1382 = f_cur_line_281(F->up);
f_primary_323(F->up, &F->l_1379);
if (f_at_op_285(F->up, rt_g_lit("**", 2))) {
F->op_1381 = (*(P105)rt_nil_check(({ A104 ix1383 = F->up->toks_107; ix1383.p[rt_index(F->up->tpos_109, ix1383.lo, ix1383.hi) - ix1383.lo]; }))).s_;
f_skip_294(F->up);
f_primary_323(F->up, &F->r_1380);
F->l_1379 = f_binop_309(F->up, F->op_1381, F->l_1379, F->r_1380, F->line_1382);
}
(*F->res_320) = F->l_1379;
goto ret_;
ret_:

  return;
}

static void f_primary_323(struct f_greenc_1fr *up_, P169 *res_322) {
  struct f_primary_323fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_322 = res_322;
F->x_1384 = NULL;
F->line_1385 = f_cur_line_281(F->up);
if (f_at_kind_287(F->up, ((rt_int)4LL))) {
F->x_1384 = f_nn_274(F->up, ((rt_int)1LL), F->line_1385);
(*(P169)rt_nil_check(F->x_1384)).ival_ = (*(P105)rt_nil_check(({ A104 ix1386 = F->up->toks_107; ix1386.p[rt_index(F->up->tpos_109, ix1386.lo, ix1386.hi) - ix1386.lo]; }))).ival_;
(*(P169)rt_nil_check(F->x_1384)).name_ = (*(P105)rt_nil_check(({ A104 ix1387 = F->up->toks_107; ix1387.p[rt_index(F->up->tpos_109, ix1387.lo, ix1387.hi) - ix1387.lo]; }))).s_;
f_skip_294(F->up);
(*F->res_322) = F->x_1384;
goto ret_;
}
if (f_at_kind_287(F->up, ((rt_int)5LL))) {
F->x_1384 = f_nn_274(F->up, ((rt_int)2LL), F->line_1385);
(*(P169)rt_nil_check(F->x_1384)).name_ = (*(P105)rt_nil_check(({ A104 ix1388 = F->up->toks_107; ix1388.p[rt_index(F->up->tpos_109, ix1388.lo, ix1388.hi) - ix1388.lo]; }))).s_;
f_skip_294(F->up);
(*F->res_322) = F->x_1384;
goto ret_;
}
if (f_at_kind_287(F->up, ((rt_int)6LL))) {
F->x_1384 = f_nn_274(F->up, ((rt_int)3LL), F->line_1385);
(*(P169)rt_nil_check(F->x_1384)).name_ = (*(P105)rt_nil_check(({ A104 ix1389 = F->up->toks_107; ix1389.p[rt_index(F->up->tpos_109, ix1389.lo, ix1389.hi) - ix1389.lo]; }))).s_;
f_skip_294(F->up);
(*F->res_322) = F->x_1384;
goto ret_;
}
if (f_at_kw_283(F->up, rt_g_lit("NULL", 4))) {
f_skip_294(F->up);
F->x_1384 = f_nn_274(F->up, ((rt_int)4LL), F->line_1385);
(*F->res_322) = F->x_1384;
goto ret_;
}
if (f_at_kw_283(F->up, rt_g_lit("NEW", 3))) {
f_skip_294(F->up);
F->x_1384 = f_nn_274(F->up, ((rt_int)11LL), F->line_1385);
f_expect_id_300(F->up, &(*(P169)rt_nil_check(F->x_1384)).name_);
if (f_at_op_285(F->up, rt_g_lit("(", 1))) {
f_agg_or_paren_325(F->up, &(*(P169)rt_nil_check(F->x_1384)).a_);
}
(*F->res_322) = F->x_1384;
goto ret_;
}
if (f_at_op_285(F->up, rt_g_lit("(", 1))) {
f_agg_or_paren_325(F->up, &F->x_1384);
(*F->res_322) = F->x_1384;
goto ret_;
}
if (f_at_kind_287(F->up, ((rt_int)1LL))) {
f_name_p_328(F->up, &F->x_1384);
(*F->res_322) = F->x_1384;
goto ret_;
}
f_perror_293(F->up, rt_g_lit("expected an expression", 22));
(*F->res_322) = NULL;
goto ret_;
ret_:

  return;
}

static void f_agg_or_paren_325(struct f_greenc_1fr *up_, P169 *res_324) {
  struct f_agg_or_paren_325fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_324 = res_324;
F->line_1390 = f_cur_line_281(F->up);
F->items_1391 = NULL;
F->itail_1392 = NULL;
F->it_1393 = NULL;
F->first_1394 = NULL;
F->keys_1395 = NULL;
F->ktail_1396 = NULL;
F->lab_1397 = NULL;
F->x_1398 = NULL;
F->more_1399 = 1;
f_expect_op_298(F->up, rt_g_lit("(", 1));
while (F->more_1399) {
F->it_1393 = f_nn_274(F->up, ((rt_int)13LL), F->line_1390);
if (f_at_kw_283(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_294(F->up);
f_expect_op_298(F->up, rt_g_lit("=>", 2));
F->lab_1397 = f_nn_274(F->up, ((rt_int)61LL), F->line_1390);
(*(P169)rt_nil_check(F->lab_1397)).flag_ = ((rt_int)1LL);
(*(P169)rt_nil_check(F->it_1393)).a_ = F->lab_1397;
f_expr_311(F->up, &(*(P169)rt_nil_check(F->it_1393)).b_);
} else {
f_expr_311(F->up, &F->first_1394);
if (((f_at_op_285(F->up, rt_g_lit("..", 2)) || f_at_op_285(F->up, rt_g_lit("|", 1))) || f_at_op_285(F->up, rt_g_lit("=>", 2)))) {
F->keys_1395 = NULL;
F->ktail_1396 = NULL;
for (;;) {
F->lab_1397 = f_nn_274(F->up, ((rt_int)61LL), F->line_1390);
(*(P169)rt_nil_check(F->lab_1397)).a_ = F->first_1394;
if (f_at_op_285(F->up, rt_g_lit("..", 2))) {
f_skip_294(F->up);
f_simple_expr_317(F->up, &(*(P169)rt_nil_check(F->lab_1397)).b_);
}
f_append_278(F->up, &F->keys_1395, &F->ktail_1396, F->lab_1397);
if ((!f_at_op_285(F->up, rt_g_lit("|", 1)))) {
goto L_end_1401;
}
f_skip_294(F->up);
f_simple_expr_317(F->up, &F->first_1394);
}
L_end_1401: ;
f_expect_op_298(F->up, rt_g_lit("=>", 2));
(*(P169)rt_nil_check(F->it_1393)).a_ = F->keys_1395;
f_expr_311(F->up, &(*(P169)rt_nil_check(F->it_1393)).b_);
} else {
(*(P169)rt_nil_check(F->it_1393)).b_ = F->first_1394;
}
}
f_append_278(F->up, &F->items_1391, &F->itail_1392, F->it_1393);
F->more_1399 = f_at_op_285(F->up, rt_g_lit(",", 1));
if (F->more_1399) {
f_skip_294(F->up);
}
}
L_end_1400: ;
f_expect_op_298(F->up, rt_g_lit(")", 1));
if ((((*(P169)rt_nil_check(F->items_1391)).next_ == NULL) && ((*(P169)rt_nil_check(F->items_1391)).a_ == NULL))) {
F->x_1398 = f_nn_274(F->up, ((rt_int)15LL), F->line_1390);
(*(P169)rt_nil_check(F->x_1398)).a_ = (*(P169)rt_nil_check(F->items_1391)).b_;
(*F->res_324) = F->x_1398;
goto ret_;
}
F->x_1398 = f_nn_274(F->up, ((rt_int)12LL), F->line_1390);
(*(P169)rt_nil_check(F->x_1398)).a_ = F->items_1391;
(*F->res_324) = F->x_1398;
goto ret_;
ret_:

  return;
}

static int f_aggregate_ahead_326(struct f_greenc_1fr *up_) {
  struct f_aggregate_ahead_326fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_1402 = ((rt_int)0LL);
F->k_1403 = ((rt_int)0LL);
for (;;) {
if ((rt_add(F->up->tpos_109, F->k_1403) > F->up->ntoks_108)) {
F->result_ = 0;
goto ret_;
}
{
F->t_1406 = NULL;
F->t_1406 = ({ A104 ix1407 = F->up->toks_107; ix1407.p[rt_index(rt_add(F->up->tpos_109, F->k_1403), ix1407.lo, ix1407.hi) - ix1407.lo]; });
if ((((*(P105)rt_nil_check(F->t_1406)).kind_ == ((rt_int)3LL)) && eq_rt_gstr((*(P135)rt_nil_check((*(P105)rt_nil_check(F->t_1406)).s_)), rt_g_lit("(", 1)))) {
F->d_1402 = rt_add(F->d_1402, ((rt_int)1LL));
} else if ((((*(P105)rt_nil_check(F->t_1406)).kind_ == ((rt_int)3LL)) && eq_rt_gstr((*(P135)rt_nil_check((*(P105)rt_nil_check(F->t_1406)).s_)), rt_g_lit(")", 1)))) {
F->d_1402 = rt_sub(F->d_1402, ((rt_int)1LL));
if ((F->d_1402 == ((rt_int)0LL))) {
F->result_ = 0;
goto ret_;
}
} else if (((F->d_1402 == ((rt_int)1LL)) && ((((*(P105)rt_nil_check(F->t_1406)).kind_ == ((rt_int)3LL)) && (eq_rt_gstr((*(P135)rt_nil_check((*(P105)rt_nil_check(F->t_1406)).s_)), rt_g_lit("=>", 2)) || eq_rt_gstr((*(P135)rt_nil_check((*(P105)rt_nil_check(F->t_1406)).s_)), rt_g_lit("|", 1)))) || (((*(P105)rt_nil_check(F->t_1406)).kind_ == ((rt_int)2LL)) && eq_rt_gstr((*(P135)rt_nil_check((*(P105)rt_nil_check(F->t_1406)).s_)), rt_g_lit("OTHERS", 6)))))) {
F->result_ = 1;
goto ret_;
} else if ((((*(P105)rt_nil_check(F->t_1406)).kind_ == ((rt_int)3LL)) && eq_rt_gstr((*(P135)rt_nil_check((*(P105)rt_nil_check(F->t_1406)).s_)), rt_g_lit(";", 1)))) {
F->result_ = 0;
goto ret_;
}

}
L_end_1405: ;
F->k_1403 = rt_add(F->k_1403, ((rt_int)1LL));
}
L_end_1404: ;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_name_p_328(struct f_greenc_1fr *up_, P169 *res_327) {
  struct f_name_p_328fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_327 = res_327;
F->p_1408 = NULL;
F->x_1409 = NULL;
F->args_1410 = NULL;
F->atail_1411 = NULL;
F->lo_1412 = NULL;
F->r_1413 = NULL;
F->line_1414 = f_cur_line_281(F->up);
f_name_node_302(F->up, &F->p_1408);
for (;;) {
if ((f_at_op_285(F->up, rt_g_lit("(", 1)) && f_aggregate_ahead_326(F->up))) {
F->x_1409 = f_nn_274(F->up, ((rt_int)8LL), F->line_1414);
(*(P169)rt_nil_check(F->x_1409)).a_ = F->p_1408;
f_agg_or_paren_325(F->up, &(*(P169)rt_nil_check(F->x_1409)).b_);
(*(P169)rt_nil_check(F->x_1409)).flag_ = ((rt_int)9LL);
F->p_1408 = F->x_1409;
} else if (f_at_op_285(F->up, rt_g_lit("(", 1))) {
f_skip_294(F->up);
F->args_1410 = NULL;
F->atail_1411 = NULL;
if ((!f_at_op_285(F->up, rt_g_lit(")", 1)))) {
F->more_1415 = 1;
while (F->more_1415) {
{
F->formal_1419 = NULL;
F->mark_1420 = ((rt_int)0LL);
if (((f_at_kind_287(F->up, ((rt_int)1LL)) && (f_kind_at_289(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (((eq_rt_gstr(f_text_at_291(F->up, ((rt_int)1LL)), rt_g_lit(":=", 2)) || eq_rt_gstr(f_text_at_291(F->up, ((rt_int)1LL)), rt_g_lit("=:", 2))) || eq_rt_gstr(f_text_at_291(F->up, ((rt_int)1LL)), rt_g_lit(":=:", 3))) || eq_rt_gstr(f_text_at_291(F->up, ((rt_int)1LL)), rt_g_lit("=>", 2))))) {
F->formal_1419 = (*(P105)rt_nil_check(({ A104 ix1421 = F->up->toks_107; ix1421.p[rt_index(F->up->tpos_109, ix1421.lo, ix1421.hi) - ix1421.lo]; }))).s_;
if (eq_rt_gstr(f_text_at_291(F->up, ((rt_int)1LL)), rt_g_lit(":=", 2))) {
F->mark_1420 = ((rt_int)1LL);
} else if (eq_rt_gstr(f_text_at_291(F->up, ((rt_int)1LL)), rt_g_lit("=:", 2))) {
F->mark_1420 = ((rt_int)3LL);
} else if (eq_rt_gstr(f_text_at_291(F->up, ((rt_int)1LL)), rt_g_lit(":=:", 3))) {
F->mark_1420 = ((rt_int)2LL);
} else {
F->mark_1420 = ((rt_int)4LL);
}
f_skip_294(F->up);
f_skip_294(F->up);
}
f_expr_311(F->up, &F->lo_1412);
if (f_at_op_285(F->up, rt_g_lit("..", 2))) {
f_skip_294(F->up);
F->r_1413 = f_nn_274(F->up, ((rt_int)14LL), F->line_1414);
(*(P169)rt_nil_check(F->r_1413)).a_ = F->lo_1412;
f_simple_expr_317(F->up, &(*(P169)rt_nil_check(F->r_1413)).b_);
F->lo_1412 = F->r_1413;
}
(*(P169)rt_nil_check(F->lo_1412)).formal_ = F->formal_1419;
(*(P169)rt_nil_check(F->lo_1412)).flag_ = F->mark_1420;
f_append_278(F->up, &F->args_1410, &F->atail_1411, F->lo_1412);

}
L_end_1418: ;
F->more_1415 = f_at_op_285(F->up, rt_g_lit(",", 1));
if (F->more_1415) {
f_skip_294(F->up);
}
}
L_end_1417: ;
}
f_expect_op_298(F->up, rt_g_lit(")", 1));
F->x_1409 = f_nn_274(F->up, ((rt_int)8LL), F->line_1414);
(*(P169)rt_nil_check(F->x_1409)).a_ = F->p_1408;
(*(P169)rt_nil_check(F->x_1409)).b_ = F->args_1410;
F->p_1408 = F->x_1409;
} else if (f_at_op_285(F->up, rt_g_lit(".", 1))) {
f_skip_294(F->up);
F->x_1409 = f_nn_274(F->up, ((rt_int)9LL), F->line_1414);
(*(P169)rt_nil_check(F->x_1409)).a_ = F->p_1408;
if (f_at_kw_283(F->up, rt_g_lit("ALL", 3))) {
f_skip_294(F->up);
(*(P169)rt_nil_check(F->x_1409)).name_ = f_mk_203(F->up, rt_g_lit("ALL", 3));
} else {
f_expect_id_300(F->up, &(*(P169)rt_nil_check(F->x_1409)).name_);
}
F->p_1408 = F->x_1409;
} else if (f_at_op_285(F->up, rt_g_lit("'", 1))) {
f_skip_294(F->up);
F->x_1409 = f_nn_274(F->up, ((rt_int)10LL), F->line_1414);
(*(P169)rt_nil_check(F->x_1409)).a_ = F->p_1408;
(*(P169)rt_nil_check(F->x_1409)).name_ = (*(P105)rt_nil_check(({ A104 ix1422 = F->up->toks_107; ix1422.p[rt_index(F->up->tpos_109, ix1422.lo, ix1422.hi) - ix1422.lo]; }))).s_;
f_skip_294(F->up);
if (f_at_op_285(F->up, rt_g_lit("(", 1))) {
f_skip_294(F->up);
f_expr_311(F->up, &(*(P169)rt_nil_check(F->x_1409)).b_);
f_expect_op_298(F->up, rt_g_lit(")", 1));
}
F->p_1408 = F->x_1409;
} else {
(*F->res_327) = F->p_1408;
goto ret_;
}
}
L_end_1416: ;
ret_:

  return;
}

static void f_component_list_330(struct f_greenc_1fr *up_, P169 *res_329) {
  struct f_component_list_330fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_329 = res_329;
F->comps_1423 = NULL;
F->ctail_1424 = NULL;
F->names_1425 = NULL;
F->st_1426 = NULL;
F->def_1427 = NULL;
F->cm_1428 = NULL;
F->v_1429 = NULL;
F->arm_1430 = NULL;
F->atail_1431 = NULL;
F->labs_1432 = NULL;
F->ltail_1433 = NULL;
F->l_1434 = NULL;
for (;;) {
if (f_at_kw_283(F->up, rt_g_lit("NULL", 4))) {
f_skip_294(F->up);
f_expect_op_298(F->up, rt_g_lit(";", 1));
} else if (f_at_kw_283(F->up, rt_g_lit("CASE", 4))) {
F->v_1429 = f_nn_274(F->up, ((rt_int)23LL), f_cur_line_281(F->up));
f_skip_294(F->up);
f_name_node_302(F->up, &(*(P169)rt_nil_check(F->v_1429)).a_);
f_expect_kw_296(F->up, rt_g_lit("OF", 2));
F->atail_1431 = NULL;
while (f_at_kw_283(F->up, rt_g_lit("WHEN", 4))) {
f_skip_294(F->up);
F->arm_1430 = f_nn_274(F->up, ((rt_int)60LL), f_cur_line_281(F->up));
F->labs_1432 = NULL;
F->ltail_1433 = NULL;
for (;;) {
if (f_at_kw_283(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_294(F->up);
(*(P169)rt_nil_check(F->arm_1430)).flag_ = ((rt_int)1LL);
} else {
F->l_1434 = f_nn_274(F->up, ((rt_int)61LL), f_cur_line_281(F->up));
f_simple_expr_317(F->up, &(*(P169)rt_nil_check(F->l_1434)).a_);
if (f_at_op_285(F->up, rt_g_lit("..", 2))) {
f_skip_294(F->up);
f_simple_expr_317(F->up, &(*(P169)rt_nil_check(F->l_1434)).b_);
}
f_append_278(F->up, &F->labs_1432, &F->ltail_1433, F->l_1434);
}
if ((!f_at_op_285(F->up, rt_g_lit("|", 1)))) {
goto L_end_1438;
}
f_skip_294(F->up);
}
L_end_1438: ;
f_expect_op_298(F->up, rt_g_lit("=>", 2));
(*(P169)rt_nil_check(F->arm_1430)).a_ = F->labs_1432;
f_component_list_330(F->up, &(*(P169)rt_nil_check(F->arm_1430)).b_);
f_append_278(F->up, &(*(P169)rt_nil_check(F->v_1429)).b_, &F->atail_1431, F->arm_1430);
}
L_end_1437: ;
f_expect_kw_296(F->up, rt_g_lit("END", 3));
f_expect_kw_296(F->up, rt_g_lit("CASE", 4));
f_expect_op_298(F->up, rt_g_lit(";", 1));
f_append_278(F->up, &F->comps_1423, &F->ctail_1424, F->v_1429);
} else if (f_at_kind_287(F->up, ((rt_int)1LL))) {
f_id_list_304(F->up, &F->names_1425);
f_expect_op_298(F->up, rt_g_lit(":", 1));
F->is_c_1435 = 0;
if (f_at_kw_283(F->up, rt_g_lit("CONSTANT", 8))) {
f_skip_294(F->up);
F->is_c_1435 = 1;
}
f_type_spec_336(F->up, &F->st_1426);
F->def_1427 = NULL;
if (f_at_op_285(F->up, rt_g_lit(":=", 2))) {
f_skip_294(F->up);
f_expr_311(F->up, &F->def_1427);
}
f_expect_op_298(F->up, rt_g_lit(";", 1));
while ((F->names_1425 != NULL)) {
F->cm_1428 = f_nn_274(F->up, ((rt_int)63LL), (*(P169)rt_nil_check(F->names_1425)).line_);
(*(P169)rt_nil_check(F->cm_1428)).name_ = (*(P169)rt_nil_check(F->names_1425)).name_;
(*(P169)rt_nil_check(F->cm_1428)).a_ = F->st_1426;
(*(P169)rt_nil_check(F->cm_1428)).b_ = F->def_1427;
if (F->is_c_1435) {
(*(P169)rt_nil_check(F->cm_1428)).flag_ = ((rt_int)1LL);
}
f_append_278(F->up, &F->comps_1423, &F->ctail_1424, F->cm_1428);
F->names_1425 = (*(P169)rt_nil_check(F->names_1425)).next_;
}
L_end_1439: ;
} else {
(*F->res_329) = F->comps_1423;
goto ret_;
}
}
L_end_1436: ;
ret_:

  return;
}

static void f_discrete_range_p_332(struct f_greenc_1fr *up_, P169 *res_331) {
  struct f_discrete_range_p_332fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_331 = res_331;
F->lo_1440 = NULL;
F->r_1441 = NULL;
F->line_1442 = f_cur_line_281(F->up);
if (((f_at_kind_287(F->up, ((rt_int)1LL)) && (f_kind_at_289(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_291(F->up, ((rt_int)1LL)), rt_g_lit("RANGE", 5)))) {
f_subtype_ind_334(F->up, &(*F->res_331));
goto ret_;
}
if ((((((f_at_kind_287(F->up, ((rt_int)1LL)) && (f_kind_at_289(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && eq_rt_gstr(f_text_at_291(F->up, ((rt_int)1LL)), rt_g_lit(".", 1))) && (f_kind_at_289(F->up, ((rt_int)2LL)) == ((rt_int)1LL))) && (f_kind_at_289(F->up, ((rt_int)3LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_291(F->up, ((rt_int)3LL)), rt_g_lit("RANGE", 5)))) {
f_subtype_ind_334(F->up, &(*F->res_331));
goto ret_;
}
f_simple_expr_317(F->up, &F->lo_1440);
if (f_at_op_285(F->up, rt_g_lit("..", 2))) {
f_skip_294(F->up);
F->r_1441 = f_nn_274(F->up, ((rt_int)14LL), F->line_1442);
(*(P169)rt_nil_check(F->r_1441)).a_ = F->lo_1440;
f_simple_expr_317(F->up, &(*(P169)rt_nil_check(F->r_1441)).b_);
(*F->res_331) = F->r_1441;
goto ret_;
}
(*F->res_331) = F->lo_1440;
goto ret_;
ret_:

  return;
}

static void f_subtype_ind_334(struct f_greenc_1fr *up_, P169 *res_333) {
  struct f_subtype_ind_334fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_333 = res_333;
F->f_1443 = NULL;
F->x_1444 = NULL;
F->r_1445 = NULL;
F->args_1446 = NULL;
F->atail_1447 = NULL;
F->lo_1448 = NULL;
F->line_1449 = f_cur_line_281(F->up);
F->more_1450 = 1;
F->x_1444 = f_nn_274(F->up, ((rt_int)80LL), F->line_1449);
f_expect_id_300(F->up, &(*(P169)rt_nil_check(F->x_1444)).name_);
while (f_at_op_285(F->up, rt_g_lit(".", 1))) {
f_skip_294(F->up);
(*(P169)rt_nil_check(F->x_1444)).tag_ = (*(P169)rt_nil_check(F->x_1444)).name_;
f_expect_id_300(F->up, &(*(P169)rt_nil_check(F->x_1444)).name_);
}
L_end_1451: ;
if (f_at_kw_283(F->up, rt_g_lit("RANGE", 5))) {
f_skip_294(F->up);
F->r_1445 = f_nn_274(F->up, ((rt_int)14LL), F->line_1449);
f_simple_expr_317(F->up, &(*(P169)rt_nil_check(F->r_1445)).a_);
f_expect_op_298(F->up, rt_g_lit("..", 2));
f_simple_expr_317(F->up, &(*(P169)rt_nil_check(F->r_1445)).b_);
(*(P169)rt_nil_check(F->x_1444)).a_ = F->r_1445;
(*(P169)rt_nil_check(F->x_1444)).flag_ = ((rt_int)1LL);
} else if (f_at_op_285(F->up, rt_g_lit("(", 1))) {
f_skip_294(F->up);
while (F->more_1450) {
if (((f_at_kind_287(F->up, ((rt_int)1LL)) && (f_kind_at_289(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && eq_rt_gstr(f_text_at_291(F->up, ((rt_int)1LL)), rt_g_lit("=>", 2)))) {
f_expect_id_300(F->up, &F->f_1443);
f_skip_294(F->up);
f_expr_311(F->up, &F->lo_1448);
(*(P169)rt_nil_check(F->lo_1448)).formal_ = F->f_1443;
} else {
f_discrete_range_p_332(F->up, &F->lo_1448);
}
f_append_278(F->up, &F->args_1446, &F->atail_1447, F->lo_1448);
F->more_1450 = f_at_op_285(F->up, rt_g_lit(",", 1));
if (F->more_1450) {
f_skip_294(F->up);
}
}
L_end_1452: ;
f_expect_op_298(F->up, rt_g_lit(")", 1));
(*(P169)rt_nil_check(F->x_1444)).a_ = F->args_1446;
(*(P169)rt_nil_check(F->x_1444)).flag_ = ((rt_int)2LL);
} else if ((f_at_kw_283(F->up, rt_g_lit("DIGITS", 6)) || f_at_kw_283(F->up, rt_g_lit("DELTA", 5)))) {
f_skip_294(F->up);
f_simple_expr_317(F->up, &(*(P169)rt_nil_check(F->x_1444)).b_);
(*(P169)rt_nil_check(F->x_1444)).flag_ = ((rt_int)3LL);
if (f_at_kw_283(F->up, rt_g_lit("RANGE", 5))) {
f_skip_294(F->up);
F->r_1445 = f_nn_274(F->up, ((rt_int)14LL), F->line_1449);
f_simple_expr_317(F->up, &(*(P169)rt_nil_check(F->r_1445)).a_);
f_expect_op_298(F->up, rt_g_lit("..", 2));
f_simple_expr_317(F->up, &(*(P169)rt_nil_check(F->r_1445)).b_);
(*(P169)rt_nil_check(F->x_1444)).a_ = F->r_1445;
}
}
(*F->res_333) = F->x_1444;
goto ret_;
ret_:

  return;
}

static void f_type_spec_336(struct f_greenc_1fr *up_, P169 *res_335) {
  struct f_type_spec_336fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_335 = res_335;
F->x_1453 = NULL;
if ((((((((f_at_op_285(F->up, rt_g_lit("(", 1)) || f_at_kw_283(F->up, rt_g_lit("ARRAY", 5))) || f_at_kw_283(F->up, rt_g_lit("RECORD", 6))) || f_at_kw_283(F->up, rt_g_lit("ACCESS", 6))) || f_at_kw_283(F->up, rt_g_lit("RANGE", 5))) || f_at_kw_283(F->up, rt_g_lit("DIGITS", 6))) || f_at_kw_283(F->up, rt_g_lit("DELTA", 5))) || f_at_kw_283(F->up, rt_g_lit("NEW", 3)))) {
f_type_def_338(F->up, &F->x_1453);
} else {
f_subtype_ind_334(F->up, &F->x_1453);
}
(*F->res_335) = F->x_1453;
goto ret_;
ret_:

  return;
}

static void f_type_def_338(struct f_greenc_1fr *up_, P169 *res_337) {
  struct f_type_def_338fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_337 = res_337;
F->x_1454 = NULL;
F->lits_1455 = NULL;
F->ltail_1456 = NULL;
F->l_1457 = NULL;
F->idx_1458 = NULL;
F->itail_1459 = NULL;
F->r_1460 = NULL;
F->comps_1461 = NULL;
F->ctail_1462 = NULL;
F->names_1463 = NULL;
F->st_1464 = NULL;
F->def_1465 = NULL;
F->cm_1466 = NULL;
F->line_1467 = f_cur_line_281(F->up);
F->more_1468 = 1;
if (f_at_op_285(F->up, rt_g_lit("(", 1))) {
f_skip_294(F->up);
F->x_1454 = f_nn_274(F->up, ((rt_int)70LL), F->line_1467);
while (F->more_1468) {
if (f_at_kind_287(F->up, ((rt_int)6LL))) {
F->l_1457 = f_nn_274(F->up, ((rt_int)3LL), F->line_1467);
(*(P169)rt_nil_check(F->l_1457)).name_ = (*(P105)rt_nil_check(({ A104 ix1470 = F->up->toks_107; ix1470.p[rt_index(F->up->tpos_109, ix1470.lo, ix1470.hi) - ix1470.lo]; }))).s_;
f_skip_294(F->up);
} else {
f_name_node_302(F->up, &F->l_1457);
}
f_append_278(F->up, &F->lits_1455, &F->ltail_1456, F->l_1457);
F->more_1468 = f_at_op_285(F->up, rt_g_lit(",", 1));
if (F->more_1468) {
f_skip_294(F->up);
}
}
L_end_1469: ;
f_expect_op_298(F->up, rt_g_lit(")", 1));
(*(P169)rt_nil_check(F->x_1454)).a_ = F->lits_1455;
(*F->res_337) = F->x_1454;
goto ret_;
}
if (f_at_kw_283(F->up, rt_g_lit("RANGE", 5))) {
f_skip_294(F->up);
F->x_1454 = f_nn_274(F->up, ((rt_int)71LL), F->line_1467);
f_simple_expr_317(F->up, &(*(P169)rt_nil_check(F->x_1454)).a_);
f_expect_op_298(F->up, rt_g_lit("..", 2));
f_simple_expr_317(F->up, &(*(P169)rt_nil_check(F->x_1454)).b_);
(*F->res_337) = F->x_1454;
goto ret_;
}
if ((f_at_kw_283(F->up, rt_g_lit("DIGITS", 6)) || f_at_kw_283(F->up, rt_g_lit("DELTA", 5)))) {
F->x_1454 = f_nn_274(F->up, ((rt_int)72LL), F->line_1467);
(*(P169)rt_nil_check(F->x_1454)).flag_ = ((rt_int)1LL);
if (f_at_kw_283(F->up, rt_g_lit("DELTA", 5))) {
(*(P169)rt_nil_check(F->x_1454)).flag_ = ((rt_int)2LL);
}
f_skip_294(F->up);
f_simple_expr_317(F->up, &(*(P169)rt_nil_check(F->x_1454)).a_);
if (f_at_kw_283(F->up, rt_g_lit("RANGE", 5))) {
f_skip_294(F->up);
F->r_1460 = f_nn_274(F->up, ((rt_int)14LL), F->line_1467);
f_simple_expr_317(F->up, &(*(P169)rt_nil_check(F->r_1460)).a_);
f_expect_op_298(F->up, rt_g_lit("..", 2));
f_simple_expr_317(F->up, &(*(P169)rt_nil_check(F->r_1460)).b_);
(*(P169)rt_nil_check(F->x_1454)).b_ = F->r_1460;
}
(*F->res_337) = F->x_1454;
goto ret_;
}
if (f_at_kw_283(F->up, rt_g_lit("ARRAY", 5))) {
f_skip_294(F->up);
F->x_1454 = f_nn_274(F->up, ((rt_int)73LL), F->line_1467);
f_expect_op_298(F->up, rt_g_lit("(", 1));
while (F->more_1468) {
if (((f_at_kind_287(F->up, ((rt_int)1LL)) && (f_kind_at_289(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (eq_rt_gstr(f_text_at_291(F->up, ((rt_int)1LL)), rt_g_lit(",", 1)) || eq_rt_gstr(f_text_at_291(F->up, ((rt_int)1LL)), rt_g_lit(")", 1))))) {
F->l_1457 = f_nn_274(F->up, ((rt_int)80LL), F->line_1467);
f_expect_id_300(F->up, &(*(P169)rt_nil_check(F->l_1457)).name_);
(*(P169)rt_nil_check(F->x_1454)).flag_ = ((rt_int)1LL);
} else {
f_discrete_range_p_332(F->up, &F->l_1457);
if ((((*(P169)rt_nil_check(F->l_1457)).kind_ != ((rt_int)14LL)) && ((*(P169)rt_nil_check(F->l_1457)).kind_ != ((rt_int)80LL)))) {
f_perror_293(F->up, rt_g_lit("an index is a discrete range or a type mark (RM79 3.6)", 54));
}
}
f_append_278(F->up, &F->idx_1458, &F->itail_1459, F->l_1457);
F->more_1468 = f_at_op_285(F->up, rt_g_lit(",", 1));
if (F->more_1468) {
f_skip_294(F->up);
}
}
L_end_1471: ;
f_expect_op_298(F->up, rt_g_lit(")", 1));
f_expect_kw_296(F->up, rt_g_lit("OF", 2));
(*(P169)rt_nil_check(F->x_1454)).a_ = F->idx_1458;
f_type_spec_336(F->up, &(*(P169)rt_nil_check(F->x_1454)).b_);
(*F->res_337) = F->x_1454;
goto ret_;
}
if (f_at_kw_283(F->up, rt_g_lit("RECORD", 6))) {
f_skip_294(F->up);
F->x_1454 = f_nn_274(F->up, ((rt_int)74LL), F->line_1467);
f_component_list_330(F->up, &(*(P169)rt_nil_check(F->x_1454)).a_);
f_expect_kw_296(F->up, rt_g_lit("END", 3));
f_expect_kw_296(F->up, rt_g_lit("RECORD", 6));
(*F->res_337) = F->x_1454;
goto ret_;
}
if (f_at_kw_283(F->up, rt_g_lit("ACCESS", 6))) {
f_skip_294(F->up);
F->x_1454 = f_nn_274(F->up, ((rt_int)75LL), F->line_1467);
f_type_spec_336(F->up, &(*(P169)rt_nil_check(F->x_1454)).a_);
(*F->res_337) = F->x_1454;
goto ret_;
}
if (f_at_kw_283(F->up, rt_g_lit("NEW", 3))) {
f_skip_294(F->up);
F->x_1454 = f_nn_274(F->up, ((rt_int)76LL), F->line_1467);
f_subtype_ind_334(F->up, &(*(P169)rt_nil_check(F->x_1454)).a_);
(*F->res_337) = F->x_1454;
goto ret_;
}
f_perror_293(F->up, rt_g_lit("expected a type definition", 26));
(*F->res_337) = NULL;
goto ret_;
ret_:

  return;
}

static void f_pragma_p_340(struct f_greenc_1fr *up_, P169 *res_339) {
  struct f_pragma_p_340fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_339 = res_339;
F->x_1472 = NULL;
F->a_1473 = NULL;
F->head_1474 = NULL;
F->tail_1475 = NULL;
F->x_1472 = f_nn_274(F->up, ((rt_int)56LL), f_cur_line_281(F->up));
f_expect_kw_296(F->up, rt_g_lit("PRAGMA", 6));
f_expect_id_300(F->up, &(*(P169)rt_nil_check(F->x_1472)).name_);
if (f_at_op_285(F->up, rt_g_lit("(", 1))) {
f_skip_294(F->up);
for (;;) {
if (f_at_kind_287(F->up, ((rt_int)1LL))) {
f_name_node_302(F->up, &F->a_1473);
} else if (((f_at_kind_287(F->up, ((rt_int)6LL)) || f_at_kind_287(F->up, ((rt_int)4LL))) || f_at_kind_287(F->up, ((rt_int)5LL)))) {
f_primary_323(F->up, &F->a_1473);
} else {
f_perror_293(F->up, rt_g_lit("a pragma argument is an identifier, a string or a number (RM79 2.7)", 67));
}
f_append_278(F->up, &F->head_1474, &F->tail_1475, F->a_1473);
if ((!f_at_op_285(F->up, rt_g_lit(",", 1)))) {
goto L_end_1476;
}
f_skip_294(F->up);
}
L_end_1476: ;
f_expect_op_298(F->up, rt_g_lit(")", 1));
}
f_expect_op_298(F->up, rt_g_lit(";", 1));
(*(P169)rt_nil_check(F->x_1472)).a_ = F->head_1474;
f_check_pragma_342(F->up, F->x_1472);
(*F->res_339) = F->x_1472;
ret_:

  return;
}

static void f_check_pragma_342(struct f_greenc_1fr *up_, P169 x_341) {
  struct f_check_pragma_342fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_341 = x_341;
F->p_1477 = cp_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->x_341)).name_)));
F->n_1478 = f_list_len_280(F->up, (*(P169)rt_nil_check(F->x_341)).a_);
F->a_1479 = NULL;
F->a_1479 = (*(P169)rt_nil_check(F->x_341)).a_;
if ((eq_rt_gstr(F->p_1477, rt_g_lit("PAGE", 4)) || eq_rt_gstr(F->p_1477, rt_g_lit("INLINE", 6)))) {
if ((F->n_1478 != ((rt_int)0LL))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->x_341)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1477), rt_g_lit(" takes no argument (RM79 App. B)", 32)));
}
} else if (((((eq_rt_gstr(F->p_1477, rt_g_lit("LIST", 4)) || eq_rt_gstr(F->p_1477, rt_g_lit("OPTIMIZE", 8))) || eq_rt_gstr(F->p_1477, rt_g_lit("CREATION", 8))) || eq_rt_gstr(F->p_1477, rt_g_lit("INTERFACE", 9))) || eq_rt_gstr(F->p_1477, rt_g_lit("SYSTEM", 6)))) {
if (((F->n_1478 != ((rt_int)1LL)) || ((*(P169)rt_nil_check(F->a_1479)).kind_ != ((rt_int)5LL)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->x_341)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1477), rt_g_lit(" takes one identifier (RM79 App. B)", 35)));
}
if (((eq_rt_gstr(F->p_1477, rt_g_lit("LIST", 4)) && (!eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->a_1479)).name_)), rt_g_lit("ON", 2)))) && (!eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->a_1479)).name_)), rt_g_lit("OFF", 3))))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->x_341)).line_, rt_g_lit("pragma LIST(ON) or LIST(OFF) (RM79 App. B)", 42));
} else if (((eq_rt_gstr(F->p_1477, rt_g_lit("OPTIMIZE", 8)) && (!eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->a_1479)).name_)), rt_g_lit("TIME", 4)))) && (!eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->a_1479)).name_)), rt_g_lit("SPACE", 5))))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->x_341)).line_, rt_g_lit("pragma OPTIMIZE(TIME) or OPTIMIZE(SPACE) (RM79 App. B)", 54));
} else if (((eq_rt_gstr(F->p_1477, rt_g_lit("CREATION", 8)) && (!eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->a_1479)).name_)), rt_g_lit("STATIC", 6)))) && (!eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->a_1479)).name_)), rt_g_lit("DYNAMIC", 7))))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->x_341)).line_, rt_g_lit("pragma CREATION(STATIC) or CREATION(DYNAMIC) (RM79 9.2)", 55));
}
if (eq_rt_gstr(F->p_1477, rt_g_lit("OPTIMIZE", 8))) {
F->up->conf_optimize_201 = (*(P169)rt_nil_check(F->a_1479)).name_;
} else if (eq_rt_gstr(F->p_1477, rt_g_lit("SYSTEM", 6))) {
F->up->conf_system_198 = (*(P169)rt_nil_check(F->a_1479)).name_;
}
} else if ((eq_rt_gstr(F->p_1477, rt_g_lit("STORAGE_UNIT", 12)) || eq_rt_gstr(F->p_1477, rt_g_lit("MEMORY_SIZE", 11)))) {
if (((F->n_1478 != ((rt_int)1LL)) || ((*(P169)rt_nil_check(F->a_1479)).kind_ != ((rt_int)1LL)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->x_341)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1477), rt_g_lit(" takes a number (RM79 13.7)", 27)));
}
if (eq_rt_gstr(F->p_1477, rt_g_lit("STORAGE_UNIT", 12))) {
F->up->conf_storage_unit_199 = (*(P169)rt_nil_check(F->a_1479)).ival_;
} else {
F->up->conf_memory_size_200 = (*(P169)rt_nil_check(F->a_1479)).ival_;
}
} else if ((eq_rt_gstr(F->p_1477, rt_g_lit("SUPPRESS", 8)) || eq_rt_gstr(F->p_1477, rt_g_lit("ENVIRONMENT", 11)))) {
if ((F->n_1478 == ((rt_int)0LL))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->x_341)).line_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1477), rt_g_lit(" names at least one ", 20)), rt_g_lit("unit or exception (RM79 App. B)", 31)));
}
while ((F->a_1479 != NULL)) {
if (((*(P169)rt_nil_check(F->a_1479)).kind_ != ((rt_int)5LL))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->x_341)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1477), rt_g_lit(" takes names (RM79 App. B)", 26)));
}
F->a_1479 = (*(P169)rt_nil_check(F->a_1479)).next_;
}
L_end_1480: ;
} else if (eq_rt_gstr(F->p_1477, rt_g_lit("INCLUDE", 7))) {
if (((F->n_1478 != ((rt_int)1LL)) || ((*(P169)rt_nil_check(F->a_1479)).kind_ != ((rt_int)3LL)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->x_341)).line_, rt_g_lit("pragma INCLUDE takes the name of a file (RM79 App. B)", 53));
}
}
ret_:

  return;
}

static void f_skip_visibility_343(struct f_greenc_1fr *up_) {
  struct f_skip_visibility_343fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->names_1481 = NULL;
f_skip_294(F->up);
if (f_at_op_285(F->up, rt_g_lit("(", 1))) {
f_skip_294(F->up);
f_id_list_304(F->up, &F->names_1481);
f_expect_op_298(F->up, rt_g_lit(")", 1));
}
ret_:

  return;
}

static void f_skip_representation_344(struct f_greenc_1fr *up_) {
  struct f_skip_representation_344fr *F = rt_alloc(sizeof *F);
F->up = up_;
while ((!f_at_kw_283(F->up, rt_g_lit("USE", 3)))) {
f_skip_294(F->up);
}
L_end_1482: ;
f_skip_294(F->up);
if (f_at_kw_283(F->up, rt_g_lit("RECORD", 6))) {
while ((!((f_at_kw_283(F->up, rt_g_lit("END", 3)) && (f_kind_at_289(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_291(F->up, ((rt_int)1LL)), rt_g_lit("RECORD", 6))))) {
f_skip_294(F->up);
}
L_end_1483: ;
f_skip_294(F->up);
f_skip_294(F->up);
}
while ((!f_at_op_285(F->up, rt_g_lit(";", 1)))) {
f_skip_294(F->up);
}
L_end_1484: ;
f_skip_294(F->up);
ret_:

  return;
}

static void f_decl_part_346(struct f_greenc_1fr *up_, P169 *res_345) {
  struct f_decl_part_346fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_345 = res_345;
F->head_1485 = NULL;
F->tail_1486 = NULL;
F->x_1487 = NULL;
F->names_1488 = NULL;
for (;;) {
if (f_at_kw_283(F->up, rt_g_lit("PRAGMA", 6))) {
f_pragma_p_340(F->up, &F->x_1487);
f_append_278(F->up, &F->head_1485, &F->tail_1486, F->x_1487);
} else if (f_at_kw_283(F->up, rt_g_lit("USE", 3))) {
f_skip_294(F->up);
F->x_1487 = f_nn_274(F->up, ((rt_int)55LL), f_cur_line_281(F->up));
f_id_list_304(F->up, &(*(P169)rt_nil_check(F->x_1487)).a_);
f_expect_op_298(F->up, rt_g_lit(";", 1));
f_append_278(F->up, &F->head_1485, &F->tail_1486, F->x_1487);
} else if (f_at_kw_283(F->up, rt_g_lit("RESTRICTED", 10))) {
f_skip_visibility_343(F->up);
} else if (f_at_kw_283(F->up, rt_g_lit("FOR", 3))) {
f_skip_representation_344(F->up);
} else if ((f_at_kw_283(F->up, rt_g_lit("TYPE", 4)) || f_at_kw_283(F->up, rt_g_lit("SUBTYPE", 7)))) {
f_type_decl_350(F->up, &F->x_1487);
f_append_278(F->up, &F->head_1485, &F->tail_1486, F->x_1487);
} else if ((f_at_kw_283(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_283(F->up, rt_g_lit("FUNCTION", 8)))) {
f_subprogram_356(F->up, &F->x_1487);
f_append_278(F->up, &F->head_1485, &F->tail_1486, F->x_1487);
} else if (f_at_kw_283(F->up, rt_g_lit("PACKAGE", 7))) {
f_package_p_362(F->up, &F->x_1487);
f_append_278(F->up, &F->head_1485, &F->tail_1486, F->x_1487);
} else if (f_at_kw_283(F->up, rt_g_lit("TASK", 4))) {
f_task_p_920(F->up, &F->x_1487);
f_append_278(F->up, &F->head_1485, &F->tail_1486, F->x_1487);
} else if (f_at_kw_283(F->up, rt_g_lit("GENERIC", 7))) {
f_generic_p_1050(F->up, &F->x_1487);
f_append_278(F->up, &F->head_1485, &F->tail_1486, F->x_1487);
} else if (f_at_kw_283(F->up, rt_g_lit("ENTRY", 5))) {
f_entry_p_922(F->up, &F->x_1487);
f_append_278(F->up, &F->head_1485, &F->tail_1486, F->x_1487);
} else if (((f_at_kind_287(F->up, ((rt_int)1LL)) && (f_kind_at_289(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (eq_rt_gstr(f_text_at_291(F->up, ((rt_int)1LL)), rt_g_lit(":", 1)) || eq_rt_gstr(f_text_at_291(F->up, ((rt_int)1LL)), rt_g_lit(",", 1))))) {
f_object_decl_348(F->up, &F->x_1487);
f_append_278(F->up, &F->head_1485, &F->tail_1486, F->x_1487);
} else {
(*F->res_345) = F->head_1485;
goto ret_;
}
}
L_end_1489: ;
ret_:

  return;
}

static void f_object_decl_348(struct f_greenc_1fr *up_, P169 *res_347) {
  struct f_object_decl_348fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_347 = res_347;
F->head_1490 = NULL;
F->tail_1491 = NULL;
F->names_1492 = NULL;
F->st_1493 = NULL;
F->init_1494 = NULL;
F->x_1495 = NULL;
F->line_1496 = f_cur_line_281(F->up);
F->is_const_1497 = 0;
f_id_list_304(F->up, &F->names_1492);
f_expect_op_298(F->up, rt_g_lit(":", 1));
if (f_at_kw_283(F->up, rt_g_lit("EXCEPTION", 9))) {
f_skip_294(F->up);
if (f_at_kw_283(F->up, rt_g_lit("RENAMES", 7))) {
f_skip_294(F->up);
F->x_1495 = f_nn_274(F->up, ((rt_int)46LL), F->line_1496);
(*(P169)rt_nil_check(F->x_1495)).name_ = (*(P169)rt_nil_check(F->names_1492)).name_;
f_name_p_328(F->up, &(*(P169)rt_nil_check(F->x_1495)).a_);
f_expect_op_298(F->up, rt_g_lit(";", 1));
(*F->res_347) = F->x_1495;
goto ret_;
}
f_expect_op_298(F->up, rt_g_lit(";", 1));
while ((F->names_1492 != NULL)) {
F->x_1495 = f_nn_274(F->up, ((rt_int)46LL), F->line_1496);
(*(P169)rt_nil_check(F->x_1495)).name_ = (*(P169)rt_nil_check(F->names_1492)).name_;
f_append_278(F->up, &F->head_1490, &F->tail_1491, F->x_1495);
F->names_1492 = (*(P169)rt_nil_check(F->names_1492)).next_;
}
L_end_1498: ;
(*F->res_347) = F->head_1490;
goto ret_;
}
if (f_at_kw_283(F->up, rt_g_lit("CONSTANT", 8))) {
f_skip_294(F->up);
F->is_const_1497 = 1;
}
f_type_spec_336(F->up, &F->st_1493);
if ((f_at_kw_283(F->up, rt_g_lit("RENAMES", 7)) && (!F->is_const_1497))) {
f_skip_294(F->up);
F->x_1495 = f_nn_274(F->up, ((rt_int)40LL), F->line_1496);
(*(P169)rt_nil_check(F->x_1495)).name_ = (*(P169)rt_nil_check(F->names_1492)).name_;
(*(P169)rt_nil_check(F->x_1495)).a_ = F->st_1493;
(*(P169)rt_nil_check(F->x_1495)).flag_ = ((rt_int)2LL);
f_expr_311(F->up, &(*(P169)rt_nil_check(F->x_1495)).b_);
f_expect_op_298(F->up, rt_g_lit(";", 1));
(*F->res_347) = F->x_1495;
goto ret_;
}
if (f_at_op_285(F->up, rt_g_lit(":=", 2))) {
f_skip_294(F->up);
f_expr_311(F->up, &F->init_1494);
}
f_expect_op_298(F->up, rt_g_lit(";", 1));
while ((F->names_1492 != NULL)) {
if (F->is_const_1497) {
F->x_1495 = f_nn_274(F->up, ((rt_int)41LL), F->line_1496);
} else {
F->x_1495 = f_nn_274(F->up, ((rt_int)40LL), F->line_1496);
}
(*(P169)rt_nil_check(F->x_1495)).name_ = (*(P169)rt_nil_check(F->names_1492)).name_;
(*(P169)rt_nil_check(F->x_1495)).a_ = F->st_1493;
(*(P169)rt_nil_check(F->x_1495)).b_ = F->init_1494;
if ((!(F->is_const_1497 && (F->init_1494 == NULL)))) {
f_append_278(F->up, &F->head_1490, &F->tail_1491, F->x_1495);
}
F->names_1492 = (*(P169)rt_nil_check(F->names_1492)).next_;
}
L_end_1499: ;
(*F->res_347) = F->head_1490;
goto ret_;
ret_:

  return;
}

static void f_type_decl_350(struct f_greenc_1fr *up_, P169 *res_349) {
  struct f_type_decl_350fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_349 = res_349;
F->x_1500 = NULL;
F->line_1501 = f_cur_line_281(F->up);
if (f_at_kw_283(F->up, rt_g_lit("SUBTYPE", 7))) {
f_skip_294(F->up);
F->x_1500 = f_nn_274(F->up, ((rt_int)43LL), F->line_1501);
f_expect_id_300(F->up, &(*(P169)rt_nil_check(F->x_1500)).name_);
f_expect_kw_296(F->up, rt_g_lit("IS", 2));
f_subtype_ind_334(F->up, &(*(P169)rt_nil_check(F->x_1500)).a_);
f_expect_op_298(F->up, rt_g_lit(";", 1));
(*F->res_349) = F->x_1500;
goto ret_;
}
f_expect_kw_296(F->up, rt_g_lit("TYPE", 4));
F->x_1500 = f_nn_274(F->up, ((rt_int)42LL), F->line_1501);
f_expect_id_300(F->up, &(*(P169)rt_nil_check(F->x_1500)).name_);
if (f_at_op_285(F->up, rt_g_lit(";", 1))) {
f_skip_294(F->up);
(*F->res_349) = NULL;
goto ret_;
}
f_expect_kw_296(F->up, rt_g_lit("IS", 2));
if (f_at_kw_283(F->up, rt_g_lit("PRIVATE", 7))) {
f_skip_294(F->up);
(*(P169)rt_nil_check(F->x_1500)).a_ = f_nn_274(F->up, ((rt_int)77LL), F->line_1501);
} else {
f_type_def_338(F->up, &(*(P169)rt_nil_check(F->x_1500)).a_);
}
f_expect_op_298(F->up, rt_g_lit(";", 1));
(*F->res_349) = F->x_1500;
goto ret_;
ret_:

  return;
}

static void f_formal_part_352(struct f_greenc_1fr *up_, P169 *res_351) {
  struct f_formal_part_352fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_351 = res_351;
F->head_1502 = NULL;
F->tail_1503 = NULL;
F->names_1504 = NULL;
F->st_1505 = NULL;
F->def_1506 = NULL;
F->p_1507 = NULL;
F->more_1509 = 1;
f_expect_op_298(F->up, rt_g_lit("(", 1));
while (F->more_1509) {
f_id_list_304(F->up, &F->names_1504);
f_expect_op_298(F->up, rt_g_lit(":", 1));
F->mode_1508 = ((rt_int)1LL);
if (f_at_kw_283(F->up, rt_g_lit("IN", 2))) {
f_skip_294(F->up);
if (f_at_kw_283(F->up, rt_g_lit("OUT", 3))) {
f_skip_294(F->up);
F->mode_1508 = ((rt_int)2LL);
}
} else if (f_at_kw_283(F->up, rt_g_lit("OUT", 3))) {
f_skip_294(F->up);
F->mode_1508 = ((rt_int)3LL);
}
f_subtype_ind_334(F->up, &F->st_1505);
F->def_1506 = NULL;
if (f_at_op_285(F->up, rt_g_lit(":=", 2))) {
f_skip_294(F->up);
f_expr_311(F->up, &F->def_1506);
}
while ((F->names_1504 != NULL)) {
F->p_1507 = f_nn_274(F->up, ((rt_int)47LL), (*(P169)rt_nil_check(F->names_1504)).line_);
(*(P169)rt_nil_check(F->p_1507)).name_ = (*(P169)rt_nil_check(F->names_1504)).name_;
(*(P169)rt_nil_check(F->p_1507)).ival_ = F->mode_1508;
(*(P169)rt_nil_check(F->p_1507)).a_ = F->st_1505;
(*(P169)rt_nil_check(F->p_1507)).b_ = F->def_1506;
f_append_278(F->up, &F->head_1502, &F->tail_1503, F->p_1507);
F->names_1504 = (*(P169)rt_nil_check(F->names_1504)).next_;
}
L_end_1511: ;
F->more_1509 = f_at_op_285(F->up, rt_g_lit(";", 1));
if (F->more_1509) {
f_skip_294(F->up);
}
}
L_end_1510: ;
f_expect_op_298(F->up, rt_g_lit(")", 1));
(*F->res_351) = F->head_1502;
goto ret_;
ret_:

  return;
}

static void f_designator_354(struct f_greenc_1fr *up_, P135 *res_353) {
  struct f_designator_354fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_353 = res_353;
if (f_at_kind_287(F->up, ((rt_int)6LL))) {
f_skip_294(F->up);
(*F->res_353) = f_mk_203(F->up, f_upper_s_216(F->up, (*(P135)rt_nil_check((*(P105)rt_nil_check(({ A104 ix1515 = F->up->toks_107; ix1515.p[rt_index(rt_sub(F->up->tpos_109, ((rt_int)1LL)), ix1515.lo, ix1515.hi) - ix1515.lo]; }))).s_))));
if (eq_rt_gstr((*(P135)rt_nil_check((*F->res_353))), rt_g_lit("/=", 2))) {
f_perror_293(F->up, rt_g_lit("\"/=\" cannot be declared: it follows the declaration of \"=\" (RM79 6.6.1)", 71));
}
if ((!f_is_operator_218(F->up, (*(P135)rt_nil_check((*F->res_353)))))) {
f_perror_293(F->up, cat_rt_gstr((*(P135)rt_nil_check((*F->res_353))), rt_g_lit(" is not an operator symbol (RM79 6.6.1)", 39)));
}
goto ret_;
}
f_expect_id_300(F->up, &(*F->res_353));
goto ret_;
ret_:

  return;
}

static void f_subprogram_356(struct f_greenc_1fr *up_, P169 *res_355) {
  struct f_subprogram_356fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_355 = res_355;
F->x_1516 = NULL;
F->line_1517 = f_cur_line_281(F->up);
F->is_proc_1518 = f_at_kw_283(F->up, rt_g_lit("PROCEDURE", 9));
f_skip_294(F->up);
if (F->is_proc_1518) {
F->x_1516 = f_nn_274(F->up, ((rt_int)44LL), F->line_1517);
} else {
F->x_1516 = f_nn_274(F->up, ((rt_int)45LL), F->line_1517);
}
f_designator_354(F->up, &(*(P169)rt_nil_check(F->x_1516)).name_);
if (((f_at_kw_283(F->up, rt_g_lit("IS", 2)) && (f_kind_at_289(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_291(F->up, ((rt_int)1LL)), rt_g_lit("NEW", 3)))) {
f_instantiation_1053(F->up, F->x_1516, &(*F->res_355));
goto ret_;
}
if (f_at_op_285(F->up, rt_g_lit("(", 1))) {
f_formal_part_352(F->up, &(*(P169)rt_nil_check(F->x_1516)).a_);
}
if (f_at_kw_283(F->up, rt_g_lit("RETURN", 6))) {
f_skip_294(F->up);
f_subtype_ind_334(F->up, &(*(P169)rt_nil_check(F->x_1516)).b_);
if (F->is_proc_1518) {
(*(P169)rt_nil_check(F->x_1516)).flag_ = ((rt_int)1LL);
}
} else if ((!F->is_proc_1518)) {
f_perror_293(F->up, rt_g_lit("a function needs a RETURN clause", 32));
}
if (f_at_op_285(F->up, rt_g_lit(";", 1))) {
f_skip_294(F->up);
(*(P169)rt_nil_check(F->x_1516)).ival_ = ((rt_int)1LL);
(*F->res_355) = F->x_1516;
goto ret_;
}
f_expect_kw_296(F->up, rt_g_lit("IS", 2));
if (f_at_kw_283(F->up, rt_g_lit("SEPARATE", 8))) {
f_perror_293(F->up, rt_g_lit("separate bodies are not handled", 31));
}
f_body_part_358(F->up, F->x_1516);
if ((f_at_kind_287(F->up, ((rt_int)1LL)) || f_at_kind_287(F->up, ((rt_int)6LL)))) {
if ((!eq_rt_gstr((*(P135)rt_nil_check((*(P105)rt_nil_check(({ A104 ix1519 = F->up->toks_107; ix1519.p[rt_index(F->up->tpos_109, ix1519.lo, ix1519.hi) - ix1519.lo]; }))).s_)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->x_1516)).name_))))) {
f_perror_293(F->up, cat_rt_gstr(rt_g_lit("the name after END does not match ", 34), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->x_1516)).name_))));
}
f_skip_294(F->up);
}
f_expect_op_298(F->up, rt_g_lit(";", 1));
(*F->res_355) = F->x_1516;
goto ret_;
ret_:

  return;
}

static void f_body_part_358(struct f_greenc_1fr *up_, P169 x_357) {
  struct f_body_part_358fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_357 = x_357;
f_decl_part_346(F->up, &(*(P169)rt_nil_check(F->x_357)).c_);
if (f_at_kw_283(F->up, rt_g_lit("BEGIN", 5))) {
f_skip_294(F->up);
F->up->saw_interface_183 = 0;
f_statements_365(F->up, &(*(P169)rt_nil_check(F->x_357)).d_);
if ((F->up->saw_interface_183 && ((*(P169)rt_nil_check(F->x_357)).d_ == NULL))) {
(*(P169)rt_nil_check(F->x_357)).tag_ = f_mk_203(F->up, rt_g_lit("INTERFACE", 9));
}
F->up->saw_interface_183 = 0;
}
if (f_at_kw_283(F->up, rt_g_lit("EXCEPTION", 9))) {
f_parse_handlers_360(F->up, &(*(P169)rt_nil_check(F->x_357)).e_);
}
f_expect_kw_296(F->up, rt_g_lit("END", 3));
ret_:

  return;
}

static void f_parse_handlers_360(struct f_greenc_1fr *up_, P169 *res_359) {
  struct f_parse_handlers_360fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_359 = res_359;
F->head_1520 = NULL;
F->tail_1521 = NULL;
F->h_1522 = NULL;
F->names_1523 = NULL;
F->ntail_1524 = NULL;
F->n_1525 = NULL;
f_expect_kw_296(F->up, rt_g_lit("EXCEPTION", 9));
while (f_at_kw_283(F->up, rt_g_lit("WHEN", 4))) {
f_skip_294(F->up);
F->h_1522 = f_nn_274(F->up, ((rt_int)62LL), f_cur_line_281(F->up));
F->names_1523 = NULL;
F->ntail_1524 = NULL;
for (;;) {
if (f_at_kw_283(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_294(F->up);
F->n_1525 = f_nn_274(F->up, ((rt_int)5LL), f_cur_line_281(F->up));
(*(P169)rt_nil_check(F->n_1525)).name_ = f_mk_203(F->up, rt_g_lit("OTHERS", 6));
} else {
f_name_node_302(F->up, &F->n_1525);
while (f_at_op_285(F->up, rt_g_lit(".", 1))) {
f_skip_294(F->up);
(*(P169)rt_nil_check(F->n_1525)).tag_ = (*(P169)rt_nil_check(F->n_1525)).name_;
f_expect_id_300(F->up, &(*(P169)rt_nil_check(F->n_1525)).name_);
}
L_end_1528: ;
}
f_append_278(F->up, &F->names_1523, &F->ntail_1524, F->n_1525);
if ((!f_at_op_285(F->up, rt_g_lit("|", 1)))) {
goto L_end_1527;
}
f_skip_294(F->up);
}
L_end_1527: ;
f_expect_op_298(F->up, rt_g_lit("=>", 2));
(*(P169)rt_nil_check(F->h_1522)).a_ = F->names_1523;
f_statements_365(F->up, &(*(P169)rt_nil_check(F->h_1522)).b_);
f_append_278(F->up, &F->head_1520, &F->tail_1521, F->h_1522);
}
L_end_1526: ;
(*F->res_359) = F->head_1520;
goto ret_;
ret_:

  return;
}

static void f_package_p_362(struct f_greenc_1fr *up_, P169 *res_361) {
  struct f_package_p_362fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_361 = res_361;
F->x_1529 = NULL;
F->line_1530 = f_cur_line_281(F->up);
f_expect_kw_296(F->up, rt_g_lit("PACKAGE", 7));
if (f_at_kw_283(F->up, rt_g_lit("BODY", 4))) {
f_skip_294(F->up);
F->x_1529 = f_nn_274(F->up, ((rt_int)49LL), F->line_1530);
f_expect_id_300(F->up, &(*(P169)rt_nil_check(F->x_1529)).name_);
f_expect_kw_296(F->up, rt_g_lit("IS", 2));
f_body_part_358(F->up, F->x_1529);
} else {
F->x_1529 = f_nn_274(F->up, ((rt_int)48LL), F->line_1530);
f_expect_id_300(F->up, &(*(P169)rt_nil_check(F->x_1529)).name_);
if (((f_at_kw_283(F->up, rt_g_lit("IS", 2)) && (f_kind_at_289(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_291(F->up, ((rt_int)1LL)), rt_g_lit("NEW", 3)))) {
f_instantiation_1053(F->up, F->x_1529, &(*F->res_361));
goto ret_;
}
f_expect_kw_296(F->up, rt_g_lit("IS", 2));
f_decl_part_346(F->up, &(*(P169)rt_nil_check(F->x_1529)).c_);
if (f_at_kw_283(F->up, rt_g_lit("PRIVATE", 7))) {
f_skip_294(F->up);
f_decl_part_346(F->up, &(*(P169)rt_nil_check(F->x_1529)).d_);
}
f_expect_kw_296(F->up, rt_g_lit("END", 3));
}
if (f_at_kind_287(F->up, ((rt_int)1LL))) {
f_skip_294(F->up);
}
f_expect_op_298(F->up, rt_g_lit(";", 1));
(*F->res_361) = F->x_1529;
goto ret_;
ret_:

  return;
}

static int f_at_statements_end_363(struct f_greenc_1fr *up_) {
  struct f_at_statements_end_363fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ((((((f_at_kw_283(F->up, rt_g_lit("END", 3)) || f_at_kw_283(F->up, rt_g_lit("ELSE", 4))) || f_at_kw_283(F->up, rt_g_lit("ELSIF", 5))) || f_at_kw_283(F->up, rt_g_lit("WHEN", 4))) || f_at_kw_283(F->up, rt_g_lit("EXCEPTION", 9))) || f_at_kw_283(F->up, rt_g_lit("OR", 2))) || f_at_kind_287(F->up, ((rt_int)0LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_statements_365(struct f_greenc_1fr *up_, P169 *res_364) {
  struct f_statements_365fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_364 = res_364;
F->head_1531 = NULL;
F->tail_1532 = NULL;
F->x_1533 = NULL;
while ((!f_at_statements_end_363(F->up))) {
if (f_at_kw_283(F->up, rt_g_lit("PRAGMA", 6))) {
f_pragma_p_340(F->up, &F->x_1533);
if (eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->x_1533)).name_)), rt_g_lit("INTERFACE", 9))) {
F->up->saw_interface_183 = 1;
}
} else {
f_statement_367(F->up, &F->x_1533);
f_append_278(F->up, &F->head_1531, &F->tail_1532, F->x_1533);
}
}
L_end_1534: ;
(*F->res_364) = F->head_1531;
goto ret_;
ret_:

  return;
}

static void f_statement_367(struct f_greenc_1fr *up_, P169 *res_366) {
  struct f_statement_367fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_366 = res_366;
F->x_1535 = NULL;
F->t_1536 = NULL;
F->line_1537 = f_cur_line_281(F->up);
F->label_1538 = NULL;
if (f_at_op_285(F->up, rt_g_lit("<<", 2))) {
f_skip_294(F->up);
f_expect_id_300(F->up, &F->label_1538);
f_expect_op_298(F->up, rt_g_lit(">>", 2));
}
if (f_at_kw_283(F->up, rt_g_lit("NULL", 4))) {
f_skip_294(F->up);
f_expect_op_298(F->up, rt_g_lit(";", 1));
F->x_1535 = f_nn_274(F->up, ((rt_int)31LL), F->line_1537);
(*F->res_366) = F->x_1535;
goto ret_;
} else if (f_at_kw_283(F->up, rt_g_lit("IF", 2))) {
f_if_stmt_371(F->up, &F->x_1535);
(*F->res_366) = F->x_1535;
goto ret_;
} else if (f_at_kw_283(F->up, rt_g_lit("CASE", 4))) {
f_case_stmt_373(F->up, &F->x_1535);
(*F->res_366) = F->x_1535;
goto ret_;
} else if (((f_at_kw_283(F->up, rt_g_lit("FOR", 3)) || f_at_kw_283(F->up, rt_g_lit("WHILE", 5))) || f_at_kw_283(F->up, rt_g_lit("LOOP", 4)))) {
f_loop_stmt_375(F->up, &F->x_1535);
(*(P169)rt_nil_check(F->x_1535)).tag_ = F->label_1538;
if (f_at_kind_287(F->up, ((rt_int)1LL))) {
if (((F->label_1538 == NULL) || (!eq_rt_gstr((*(P135)rt_nil_check((*(P105)rt_nil_check(({ A104 ix1539 = F->up->toks_107; ix1539.p[rt_index(F->up->tpos_109, ix1539.lo, ix1539.hi) - ix1539.lo]; }))).s_)), (*(P135)rt_nil_check(F->label_1538)))))) {
f_perror_293(F->up, rt_g_lit("the name after END LOOP does not match the label", 48));
}
f_skip_294(F->up);
}
f_expect_op_298(F->up, rt_g_lit(";", 1));
(*F->res_366) = F->x_1535;
goto ret_;
} else if ((f_at_kw_283(F->up, rt_g_lit("DECLARE", 7)) || f_at_kw_283(F->up, rt_g_lit("BEGIN", 5)))) {
F->x_1535 = f_nn_274(F->up, ((rt_int)25LL), F->line_1537);
(*(P169)rt_nil_check(F->x_1535)).tag_ = F->label_1538;
if (f_at_kw_283(F->up, rt_g_lit("DECLARE", 7))) {
f_skip_294(F->up);
f_decl_part_346(F->up, &(*(P169)rt_nil_check(F->x_1535)).a_);
}
f_expect_kw_296(F->up, rt_g_lit("BEGIN", 5));
f_statements_365(F->up, &(*(P169)rt_nil_check(F->x_1535)).b_);
if (f_at_kw_283(F->up, rt_g_lit("EXCEPTION", 9))) {
f_parse_handlers_360(F->up, &(*(P169)rt_nil_check(F->x_1535)).c_);
}
f_expect_kw_296(F->up, rt_g_lit("END", 3));
if (f_at_kind_287(F->up, ((rt_int)1LL))) {
f_skip_294(F->up);
}
f_expect_op_298(F->up, rt_g_lit(";", 1));
(*F->res_366) = F->x_1535;
goto ret_;
} else if (f_at_kw_283(F->up, rt_g_lit("EXIT", 4))) {
f_skip_294(F->up);
F->x_1535 = f_nn_274(F->up, ((rt_int)26LL), F->line_1537);
if (f_at_kind_287(F->up, ((rt_int)1LL))) {
f_expect_id_300(F->up, &(*(P169)rt_nil_check(F->x_1535)).name_);
}
if (f_at_kw_283(F->up, rt_g_lit("WHEN", 4))) {
f_skip_294(F->up);
f_expr_311(F->up, &(*(P169)rt_nil_check(F->x_1535)).a_);
}
f_expect_op_298(F->up, rt_g_lit(";", 1));
(*F->res_366) = F->x_1535;
goto ret_;
} else if (f_at_kw_283(F->up, rt_g_lit("RETURN", 6))) {
f_skip_294(F->up);
F->x_1535 = f_nn_274(F->up, ((rt_int)27LL), F->line_1537);
if ((!f_at_op_285(F->up, rt_g_lit(";", 1)))) {
f_expr_311(F->up, &(*(P169)rt_nil_check(F->x_1535)).a_);
}
f_expect_op_298(F->up, rt_g_lit(";", 1));
(*F->res_366) = F->x_1535;
goto ret_;
} else if (f_at_kw_283(F->up, rt_g_lit("RAISE", 5))) {
f_skip_294(F->up);
if (f_at_op_285(F->up, rt_g_lit(";", 1))) {
f_skip_294(F->up);
F->x_1535 = f_nn_274(F->up, ((rt_int)29LL), F->line_1537);
(*F->res_366) = F->x_1535;
goto ret_;
}
F->x_1535 = f_nn_274(F->up, ((rt_int)28LL), F->line_1537);
f_expect_id_300(F->up, &(*(P169)rt_nil_check(F->x_1535)).name_);
if (f_at_op_285(F->up, rt_g_lit("(", 1))) {
f_skip_294(F->up);
f_expr_311(F->up, &(*(P169)rt_nil_check(F->x_1535)).a_);
f_expect_op_298(F->up, rt_g_lit(")", 1));
}
while (f_at_op_285(F->up, rt_g_lit(".", 1))) {
f_skip_294(F->up);
(*(P169)rt_nil_check(F->x_1535)).tag_ = (*(P169)rt_nil_check(F->x_1535)).name_;
f_expect_id_300(F->up, &(*(P169)rt_nil_check(F->x_1535)).name_);
}
L_end_1540: ;
f_expect_op_298(F->up, rt_g_lit(";", 1));
(*F->res_366) = F->x_1535;
goto ret_;
} else if (f_at_kw_283(F->up, rt_g_lit("ASSERT", 6))) {
f_skip_294(F->up);
F->x_1535 = f_nn_274(F->up, ((rt_int)30LL), F->line_1537);
f_expr_311(F->up, &(*(P169)rt_nil_check(F->x_1535)).a_);
f_expect_op_298(F->up, rt_g_lit(";", 1));
(*F->res_366) = F->x_1535;
goto ret_;
} else if (f_at_kw_283(F->up, rt_g_lit("GOTO", 4))) {
f_perror_293(F->up, rt_g_lit("goto is not handled", 19));
}
f_task_statement_369(F->up, &F->x_1535);
if ((F->x_1535 != NULL)) {
(*F->res_366) = F->x_1535;
goto ret_;
}
f_name_p_328(F->up, &F->t_1536);
if (f_at_op_285(F->up, rt_g_lit(":=", 2))) {
f_skip_294(F->up);
F->x_1535 = f_nn_274(F->up, ((rt_int)20LL), F->line_1537);
(*(P169)rt_nil_check(F->x_1535)).a_ = F->t_1536;
f_expr_311(F->up, &(*(P169)rt_nil_check(F->x_1535)).b_);
} else {
F->x_1535 = f_nn_274(F->up, ((rt_int)21LL), F->line_1537);
(*(P169)rt_nil_check(F->x_1535)).a_ = F->t_1536;
}
f_expect_op_298(F->up, rt_g_lit(";", 1));
(*F->res_366) = F->x_1535;
goto ret_;
ret_:

  return;
}

static void f_task_statement_369(struct f_greenc_1fr *up_, P169 *res_368) {
  struct f_task_statement_369fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_368 = res_368;
f_parse_task_statement_930(F->up, &(*F->res_368));
ret_:

  return;
}

static void f_if_stmt_371(struct f_greenc_1fr *up_, P169 *res_370) {
  struct f_if_stmt_371fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_370 = res_370;
F->x_1541 = NULL;
F->arm_1542 = NULL;
F->head_1543 = NULL;
F->tail_1544 = NULL;
F->go_1545 = 1;
F->x_1541 = f_nn_274(F->up, ((rt_int)22LL), f_cur_line_281(F->up));
f_skip_294(F->up);
F->arm_1542 = f_nn_274(F->up, ((rt_int)60LL), f_cur_line_281(F->up));
f_expr_311(F->up, &(*(P169)rt_nil_check(F->arm_1542)).a_);
f_expect_kw_296(F->up, rt_g_lit("THEN", 4));
f_statements_365(F->up, &(*(P169)rt_nil_check(F->arm_1542)).b_);
f_append_278(F->up, &F->head_1543, &F->tail_1544, F->arm_1542);
while (F->go_1545) {
if (f_at_kw_283(F->up, rt_g_lit("ELSIF", 5))) {
f_skip_294(F->up);
F->arm_1542 = f_nn_274(F->up, ((rt_int)60LL), f_cur_line_281(F->up));
f_expr_311(F->up, &(*(P169)rt_nil_check(F->arm_1542)).a_);
f_expect_kw_296(F->up, rt_g_lit("THEN", 4));
f_statements_365(F->up, &(*(P169)rt_nil_check(F->arm_1542)).b_);
f_append_278(F->up, &F->head_1543, &F->tail_1544, F->arm_1542);
} else if (f_at_kw_283(F->up, rt_g_lit("ELSE", 4))) {
f_skip_294(F->up);
(*(P169)rt_nil_check(F->x_1541)).flag_ = ((rt_int)1LL);
f_statements_365(F->up, &(*(P169)rt_nil_check(F->x_1541)).b_);
} else {
F->go_1545 = 0;
}
}
L_end_1546: ;
f_expect_kw_296(F->up, rt_g_lit("END", 3));
f_expect_kw_296(F->up, rt_g_lit("IF", 2));
f_expect_op_298(F->up, rt_g_lit(";", 1));
(*(P169)rt_nil_check(F->x_1541)).a_ = F->head_1543;
(*F->res_370) = F->x_1541;
goto ret_;
ret_:

  return;
}

static void f_case_stmt_373(struct f_greenc_1fr *up_, P169 *res_372) {
  struct f_case_stmt_373fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_372 = res_372;
F->x_1547 = NULL;
F->arm_1548 = NULL;
F->head_1549 = NULL;
F->tail_1550 = NULL;
F->labs_1551 = NULL;
F->ltail_1552 = NULL;
F->l_1553 = NULL;
F->x_1547 = f_nn_274(F->up, ((rt_int)23LL), f_cur_line_281(F->up));
f_skip_294(F->up);
f_expr_311(F->up, &(*(P169)rt_nil_check(F->x_1547)).a_);
f_expect_kw_296(F->up, rt_g_lit("OF", 2));
while (f_at_kw_283(F->up, rt_g_lit("WHEN", 4))) {
f_skip_294(F->up);
F->labs_1551 = NULL;
F->ltail_1552 = NULL;
F->others_arm_1554 = 0;
for (;;) {
if (f_at_kw_283(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_294(F->up);
F->others_arm_1554 = 1;
} else {
F->l_1553 = f_nn_274(F->up, ((rt_int)61LL), f_cur_line_281(F->up));
f_simple_expr_317(F->up, &(*(P169)rt_nil_check(F->l_1553)).a_);
if (f_at_op_285(F->up, rt_g_lit("..", 2))) {
f_skip_294(F->up);
f_simple_expr_317(F->up, &(*(P169)rt_nil_check(F->l_1553)).b_);
}
f_append_278(F->up, &F->labs_1551, &F->ltail_1552, F->l_1553);
}
if ((!f_at_op_285(F->up, rt_g_lit("|", 1)))) {
goto L_end_1556;
}
f_skip_294(F->up);
}
L_end_1556: ;
f_expect_op_298(F->up, rt_g_lit("=>", 2));
if (F->others_arm_1554) {
(*(P169)rt_nil_check(F->x_1547)).flag_ = ((rt_int)1LL);
f_statements_365(F->up, &(*(P169)rt_nil_check(F->x_1547)).c_);
} else {
F->arm_1548 = f_nn_274(F->up, ((rt_int)60LL), f_cur_line_281(F->up));
(*(P169)rt_nil_check(F->arm_1548)).a_ = F->labs_1551;
f_statements_365(F->up, &(*(P169)rt_nil_check(F->arm_1548)).b_);
f_append_278(F->up, &F->head_1549, &F->tail_1550, F->arm_1548);
}
}
L_end_1555: ;
f_expect_kw_296(F->up, rt_g_lit("END", 3));
f_expect_kw_296(F->up, rt_g_lit("CASE", 4));
f_expect_op_298(F->up, rt_g_lit(";", 1));
(*(P169)rt_nil_check(F->x_1547)).b_ = F->head_1549;
(*F->res_372) = F->x_1547;
goto ret_;
ret_:

  return;
}

static void f_loop_stmt_375(struct f_greenc_1fr *up_, P169 *res_374) {
  struct f_loop_stmt_375fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_374 = res_374;
F->x_1557 = NULL;
F->r_1558 = NULL;
F->line_1559 = f_cur_line_281(F->up);
F->x_1557 = f_nn_274(F->up, ((rt_int)24LL), F->line_1559);
if (f_at_kw_283(F->up, rt_g_lit("FOR", 3))) {
f_skip_294(F->up);
(*(P169)rt_nil_check(F->x_1557)).flag_ = ((rt_int)2LL);
f_expect_id_300(F->up, &(*(P169)rt_nil_check(F->x_1557)).name_);
f_expect_kw_296(F->up, rt_g_lit("IN", 2));
if (f_at_kw_283(F->up, rt_g_lit("REVERSE", 7))) {
f_skip_294(F->up);
(*(P169)rt_nil_check(F->x_1557)).ival_ = ((rt_int)1LL);
}
if (((f_at_kind_287(F->up, ((rt_int)1LL)) && (f_kind_at_289(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_291(F->up, ((rt_int)1LL)), rt_g_lit("LOOP", 4)))) {
f_subtype_ind_334(F->up, &(*(P169)rt_nil_check(F->x_1557)).a_);
} else {
f_discrete_range_p_332(F->up, &(*(P169)rt_nil_check(F->x_1557)).a_);
}
} else if (f_at_kw_283(F->up, rt_g_lit("WHILE", 5))) {
f_skip_294(F->up);
(*(P169)rt_nil_check(F->x_1557)).flag_ = ((rt_int)1LL);
f_expr_311(F->up, &(*(P169)rt_nil_check(F->x_1557)).a_);
}
f_expect_kw_296(F->up, rt_g_lit("LOOP", 4));
f_statements_365(F->up, &(*(P169)rt_nil_check(F->x_1557)).b_);
f_expect_kw_296(F->up, rt_g_lit("END", 3));
f_expect_kw_296(F->up, rt_g_lit("LOOP", 4));
(*F->res_374) = F->x_1557;
goto ret_;
ret_:

  return;
}

static void f_compilation_377(struct f_greenc_1fr *up_, P169 *res_376) {
  struct f_compilation_377fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_376 = res_376;
F->head_1560 = NULL;
F->tail_1561 = NULL;
F->x_1562 = NULL;
while ((!f_at_kind_287(F->up, ((rt_int)0LL)))) {
if (f_at_kw_283(F->up, rt_g_lit("PRAGMA", 6))) {
f_pragma_p_340(F->up, &F->x_1562);
} else {
if (f_at_kw_283(F->up, rt_g_lit("RESTRICTED", 10))) {
f_skip_visibility_343(F->up);
}
if ((f_at_kw_283(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_283(F->up, rt_g_lit("FUNCTION", 8)))) {
f_subprogram_356(F->up, &F->x_1562);
} else if (f_at_kw_283(F->up, rt_g_lit("PACKAGE", 7))) {
f_package_p_362(F->up, &F->x_1562);
} else if (f_at_kw_283(F->up, rt_g_lit("TASK", 4))) {
f_task_p_920(F->up, &F->x_1562);
} else if (f_at_kw_283(F->up, rt_g_lit("GENERIC", 7))) {
f_generic_p_1050(F->up, &F->x_1562);
} else {
f_perror_293(F->up, rt_g_lit("a compilation unit is a subprogram, a package or a task", 55));
}
f_append_278(F->up, &F->head_1560, &F->tail_1561, F->x_1562);
}
}
L_end_1563: ;
(*F->res_376) = F->head_1560;
goto ret_;
ret_:

  return;
}

static rt_int f_hash_379(struct f_greenc_1fr *up_, rt_gstr s_378) {
  struct f_hash_379fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_378 = cp_rt_gstr(s_378);
F->h_1564 = ((rt_int)0LL);
{ rt_int lo1568 = ((rt_int)1LL), hi1569 = ({ rt_gstr at1566 = F->s_378; at1566.hi >= at1566.lo ? at1566.hi - at1566.lo + 1 : (rt_int)0; });
for (rt_int it1570 = lo1568; it1570 <= hi1569; it1570++) {
F->i_1567 = it1570;
F->h_1564 = rt_rem(rt_add(rt_mul(F->h_1564, ((rt_int)31LL)), ((rt_int)(({ rt_gstr ix1571 = F->s_378; ix1571.p[rt_index(F->i_1567, ix1571.lo, ix1571.hi) - ix1571.lo]; })) + 1)), ((rt_int)4093LL));
}
}
L_end_1565: ;
F->result_ = F->h_1564;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P112 f_lookup_381(struct f_greenc_1fr *up_, rt_gstr name_380) {
  struct f_lookup_381fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_380 = cp_rt_gstr(name_380);
F->y_1572 = NULL;
F->y_1572 = ({ A111 ix1573 = F->up->table_114; ix1573.p[rt_index(f_hash_379(F->up, F->name_380), ix1573.lo, ix1573.hi) - ix1573.lo]; });
while ((F->y_1572 != NULL)) {
if (eq_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1572)).name_)), F->name_380)) {
F->result_ = F->y_1572;
goto ret_;
}
F->y_1572 = (*(P112)rt_nil_check(F->y_1572)).chain_;
}
L_end_1574: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_task_384(struct f_greenc_1fr *up_, P112 a_382, P112 b_383) {
  struct f_same_task_384fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_382 = a_382;
F->b_383 = b_383;
if ((F->a_382 == F->b_383)) {
F->result_ = 1;
goto ret_;
} else if (((F->a_382 == NULL) || (F->b_383 == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->a_382)).cname_)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->b_383)).cname_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P112 f_lookup_entry_387(struct f_greenc_1fr *up_, rt_gstr name_385, P112 owner_386) {
  struct f_lookup_entry_387fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_385 = cp_rt_gstr(name_385);
F->owner_386 = owner_386;
F->y_1575 = NULL;
F->y_1575 = ({ A111 ix1576 = F->up->table_114; ix1576.p[rt_index(f_hash_379(F->up, F->name_385), ix1576.lo, ix1576.hi) - ix1576.lo]; });
while ((F->y_1575 != NULL)) {
if (((eq_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1575)).name_)), F->name_385) && ((*(P112)rt_nil_check(F->y_1575)).kind_ == ((rt_int)10LL))) && f_same_task_384(F->up, (*(P112)rt_nil_check(F->y_1575)).members_, F->owner_386))) {
F->result_ = F->y_1575;
goto ret_;
}
F->y_1575 = (*(P112)rt_nil_check(F->y_1575)).chain_;
}
L_end_1577: ;
F->result_ = f_lookup_381(F->up, F->name_385);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P112 f_lookup_decl_389(struct f_greenc_1fr *up_, P169 d_388) {
  struct f_lookup_decl_389fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_388 = d_388;
F->y_1578 = NULL;
F->y_1578 = ({ A111 ix1579 = F->up->table_114; ix1579.p[rt_index(f_hash_379(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->d_388)).name_))), ix1579.lo, ix1579.hi) - ix1579.lo]; });
while ((F->y_1578 != NULL)) {
if (((*(P112)rt_nil_check(F->y_1578)).decl_ == F->d_388)) {
F->result_ = F->y_1578;
goto ret_;
}
F->y_1578 = (*(P112)rt_nil_check(F->y_1578)).chain_;
}
L_end_1580: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_overloadable_391(struct f_greenc_1fr *up_, P112 y_390) {
  struct f_overloadable_391fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_390 = y_390;
F->result_ = (((((*(P112)rt_nil_check(F->y_390)).kind_ == ((rt_int)3LL)) || ((*(P112)rt_nil_check(F->y_390)).kind_ == ((rt_int)4LL))) || ((*(P112)rt_nil_check(F->y_390)).kind_ == ((rt_int)7LL))) || ((*(P112)rt_nil_check(F->y_390)).kind_ == ((rt_int)10LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_394(struct f_greenc_1fr *up_, P117 a_392, P117 b_393) {
  struct f_same_394fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_392 = a_392;
F->b_393 = b_393;
F->result_ = (F->a_392 == F->b_393);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P117 f_root_396(struct f_greenc_1fr *up_, P117 t_395) {
  struct f_root_396fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_395 = t_395;
F->r_1581 = NULL;
F->r_1581 = F->t_395;
while (((*(P117)rt_nil_check(F->r_1581)).parent_ != NULL)) {
F->r_1581 = (*(P117)rt_nil_check(F->r_1581)).parent_;
}
L_end_1582: ;
F->result_ = F->r_1581;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_derived_from_399(struct f_greenc_1fr *up_, P117 a_397, P117 b_398) {
  struct f_derived_from_399fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_397 = a_397;
F->b_398 = b_398;
F->r_1583 = NULL;
F->r_1583 = F->a_397;
while ((F->r_1583 != NULL)) {
if ((F->r_1583 == F->b_398)) {
F->result_ = 1;
goto ret_;
}
F->r_1583 = (*(P117)rt_nil_check(F->r_1583)).parent_;
}
L_end_1584: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_numeric_401(struct f_greenc_1fr *up_, P117 t_400) {
  struct f_is_numeric_401fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_400 = t_400;
F->result_ = ((((*(P117)rt_nil_check(F->t_400)).kind_ == ((rt_int)1LL)) || ((*(P117)rt_nil_check(F->t_400)).kind_ == ((rt_int)3LL))) || ((*(P117)rt_nil_check(F->t_400)).kind_ == ((rt_int)16LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_discrete_403(struct f_greenc_1fr *up_, P117 t_402) {
  struct f_is_discrete_403fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_402 = t_402;
F->result_ = (((((*(P117)rt_nil_check(F->t_402)).kind_ == ((rt_int)1LL)) || ((*(P117)rt_nil_check(F->t_402)).kind_ == ((rt_int)4LL))) || ((*(P117)rt_nil_check(F->t_402)).kind_ == ((rt_int)11LL))) || ((*(P117)rt_nil_check(F->t_402)).kind_ == ((rt_int)2LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_signature_406(struct f_greenc_1fr *up_, P1585 a_404, P1585 b_405) {
  struct f_same_signature_406fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_404 = a_404;
F->b_405 = b_405;
F->x_1587 = NULL;
F->x_1587 = F->a_404;
F->y_1588 = NULL;
F->y_1588 = F->b_405;
while (((F->x_1587 != NULL) && (F->y_1588 != NULL))) {
if (((!f_same_394(F->up, (*(P1585)rt_nil_check(F->x_1587)).t_, (*(P1585)rt_nil_check(F->y_1588)).t_)) || ((*(P1585)rt_nil_check(F->x_1587)).mode_ != (*(P1585)rt_nil_check(F->y_1588)).mode_))) {
F->result_ = 0;
goto ret_;
}
F->x_1587 = (*(P1585)rt_nil_check(F->x_1587)).next_;
F->y_1588 = (*(P1585)rt_nil_check(F->y_1588)).next_;
}
L_end_1589: ;
F->result_ = ((F->x_1587 == NULL) && (F->y_1588 == NULL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_define_409(struct f_greenc_1fr *up_, P112 y_407, rt_int line_408) {
  struct f_define_409fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_407 = y_407;
F->line_408 = line_408;
F->h_1590 = f_hash_379(F->up, (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_407)).name_)));
F->z_1591 = NULL;
F->z_1591 = ({ A111 ix1592 = F->up->table_114; ix1592.p[rt_index(F->h_1590, ix1592.lo, ix1592.hi) - ix1592.lo]; });
while ((F->z_1591 != NULL)) {
if (((((*(P112)rt_nil_check(F->z_1591)).depth_ == F->up->depth_115) && eq_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->z_1591)).name_)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_407)).name_)))) && (!((f_overloadable_391(F->up, F->y_407) && f_overloadable_391(F->up, F->z_1591)) && ((((*(P112)rt_nil_check(F->y_407)).kind_ != (*(P112)rt_nil_check(F->z_1591)).kind_) || (!f_same_signature_406(F->up, (*(P112)rt_nil_check(F->y_407)).params_, (*(P112)rt_nil_check(F->z_1591)).params_))) || (!f_same_394(F->up, (*(P112)rt_nil_check(F->y_407)).result_, (*(P112)rt_nil_check(F->z_1591)).result_))))))) {
f_fail_224(F->up, F->line_408, cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_407)).name_)), rt_g_lit(" is already declared in this declarative part", 45)));
}
F->z_1591 = (*(P112)rt_nil_check(F->z_1591)).chain_;
}
L_end_1593: ;
(*(P112)rt_nil_check(F->y_407)).depth_ = F->up->depth_115;
(*(P112)rt_nil_check(F->y_407)).chain_ = ({ A111 ix1594 = F->up->table_114; ix1594.p[rt_index(F->h_1590, ix1594.lo, ix1594.hi) - ix1594.lo]; });
(*({ A111 *ix1595 = &(F->up->table_114); &ix1595->p[rt_index(F->h_1590, ix1595->lo, ix1595->hi) - ix1595->lo]; })) = F->y_407;
(*(P112)rt_nil_check(F->y_407)).stack_ = F->up->scope_stack_116;
F->up->scope_stack_116 = F->y_407;
ret_:

  return;
}

static void f_open_scope_410(struct f_greenc_1fr *up_) {
  struct f_open_scope_410fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->depth_115 = rt_add(F->up->depth_115, ((rt_int)1LL));
ret_:

  return;
}

static void f_close_scope_411(struct f_greenc_1fr *up_) {
  struct f_close_scope_411fr *F = rt_alloc(sizeof *F);
F->up = up_;
while (((F->up->scope_stack_116 != NULL) && ((*(P112)rt_nil_check(F->up->scope_stack_116)).depth_ == F->up->depth_115))) {
(*({ A111 *ix1597 = &(F->up->table_114); &ix1597->p[rt_index(f_hash_379(F->up, (*(P135)rt_nil_check((*(P112)rt_nil_check(F->up->scope_stack_116)).name_))), ix1597->lo, ix1597->hi) - ix1597->lo]; })) = (*(P112)rt_nil_check(F->up->scope_stack_116)).chain_;
F->up->scope_stack_116 = (*(P112)rt_nil_check(F->up->scope_stack_116)).stack_;
}
L_end_1596: ;
F->up->depth_115 = rt_sub(F->up->depth_115, ((rt_int)1LL));
ret_:

  return;
}

static P112 f_new_sym_414(struct f_greenc_1fr *up_, rt_int kind_412, P135 name_413) {
  struct f_new_sym_414fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_412 = kind_412;
F->name_413 = name_413;
F->result_ = ({ R113 *cell1598 = rt_alloc(sizeof(R113)); *cell1598 = cp_R113(({ R113 ag1599; ag1599.kind_ = F->kind_412; ag1599.name_ = F->name_413; ag1599.t_ = NULL; ag1599.c_ = NULL; ag1599.access_path_ = NULL; ag1599.cname_ = NULL; ag1599.ro_ = 0; ag1599.mvalue_ = ((rt_int)0LL); ag1599.hasmv_ = 0; ag1599.decl_ = NULL; ag1599.params_ = NULL; ag1599.result_ = NULL; ag1599.depth_ = ((rt_int)0LL); ag1599.level_ = ((rt_int)0LL); ag1599.byref_ = 0; ag1599.vrp_ = 0; ag1599.hidden_ = 0; ag1599.from_use_ = 0; ag1599.members_ = NULL; ag1599.mnext_ = NULL; ag1599.chain_ = NULL; ag1599.stack_ = NULL; ag1599; })); (P112)cell1598; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P117 f_new_typ_416(struct f_greenc_1fr *up_, rt_int kind_415) {
  struct f_new_typ_416fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_415 = kind_415;
F->result_ = ({ R118 *cell1602 = rt_alloc(sizeof(R118)); *cell1602 = cp_R118(({ R118 ag1603; ag1603.kind_ = F->kind_415; ag1603.name_ = NULL; ag1603.lits_ = NULL; ag1603.elem_ = NULL; ag1603.idx_ = NULL; ag1603.elemcons_ = NULL; ag1603.tcons_ = NULL; ag1603.fields_ = NULL; ag1603.target_ = NULL; ag1603.decl_ = NULL; ag1603.cname_ = NULL; ag1603.forward_ = 0; ag1603.defined_ = 0; ag1603.priv_ = 0; ag1603.next_ = NULL; ag1603.idx2_ = NULL; ag1603.littab_ = NULL; ag1603.parent_ = NULL; ag1603.ndigits_ = ((rt_int)0LL); ag1603.fdelta_ = NULL; ag1603.fsmall_ = NULL; ag1603.dims_ = ((rt_int)0LL); ag1603.is_restricted_ = 0; ag1603; })); (P117)cell1602; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P173 f_new_cons_417(struct f_greenc_1fr *up_) {
  struct f_new_cons_417fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ({ R174 *cell1606 = rt_alloc(sizeof(R174)); *cell1606 = cp_R174(({ R174 ag1607; ag1607.lo_ = NULL; ag1607.hi_ = NULL; ag1607.slen_ = NULL; ag1607.mlo_ = ((rt_int)0LL); ag1607.mhi_ = ((rt_int)0LL); ag1607.hasm_ = 0; ag1607.lo2_ = NULL; ag1607.hi2_ = NULL; ag1607.acc_ = NULL; ag1607.inner_ = NULL; ag1607.dv_ = NULL; ag1607; })); (P173)cell1606; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_kind_name_419(struct f_greenc_1fr *up_, P117 t_418) {
  struct f_kind_name_419fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_418 = t_418;
if (((*(P117)rt_nil_check(F->t_418)).name_ != NULL)) {
F->result_ = (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_418)).name_));
goto ret_;
}
{ rt_int sel1608 = (*(P117)rt_nil_check(F->t_418)).kind_;
if (0 || sel1608 == ((rt_int)1LL)) {
F->result_ = rt_g_lit("INTEGER", 7);
goto ret_;
} else if (0 || sel1608 == ((rt_int)2LL)) {
F->result_ = rt_g_lit("BOOLEAN", 7);
goto ret_;
} else if (0 || sel1608 == ((rt_int)3LL)) {
F->result_ = rt_g_lit("FLOAT", 5);
goto ret_;
} else if (0 || sel1608 == ((rt_int)5LL)) {
F->result_ = rt_g_lit("STRING", 6);
goto ret_;
} else if (0 || sel1608 == ((rt_int)10LL)) {
F->result_ = rt_g_lit("null", 4);
goto ret_;
} else if (0 || sel1608 == ((rt_int)11LL)) {
F->result_ = rt_g_lit("CHARACTER", 9);
goto ret_;
} else if (0 || sel1608 == ((rt_int)16LL)) {
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

static void f_check_type_423(struct f_greenc_1fr *up_, P117 got_420, P117 want_421, rt_int line_422) {
  struct f_check_type_423fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->got_420 = got_420;
F->want_421 = want_421;
F->line_422 = line_422;
if ((F->want_421 == NULL)) {
goto ret_;
}
if ((((*(P117)rt_nil_check(F->got_420)).kind_ == ((rt_int)10LL)) && ((*(P117)rt_nil_check(F->want_421)).kind_ == ((rt_int)8LL)))) {
goto ret_;
}
if ((!f_same_394(F->up, F->got_420, F->want_421))) {
f_fail_224(F->up, F->line_422, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("type mismatch: ", 15), f_kind_name_419(F->up, F->got_420)), rt_g_lit(" where ", 7)), f_kind_name_419(F->up, F->want_421)), rt_g_lit(" is required", 12)));
}
ret_:

  return;
}

static rt_int f_field_count_425(struct f_greenc_1fr *up_, P117 t_424) {
  struct f_field_count_425fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_424 = t_424;
F->n_1609 = ((rt_int)0LL);
F->f_1610 = NULL;
F->f_1610 = (*(P117)rt_nil_check(F->t_424)).fields_;
while ((F->f_1610 != NULL)) {
F->n_1609 = rt_add(F->n_1609, ((rt_int)1LL));
F->f_1610 = (*(P1600)rt_nil_check(F->f_1610)).next_;
}
L_end_1611: ;
F->result_ = F->n_1609;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_ctype_428(struct f_greenc_1fr *up_, P117 t_426, P135 *r_427) {
  struct f_ctype_428fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_426 = t_426;
F->r_427 = r_427;
F->s_1612 = NULL;
{ rt_int sel1613 = (*(P117)rt_nil_check(F->t_426)).kind_;
if (0 || sel1613 == ((rt_int)1LL)) {
(*F->r_427) = f_mk_203(F->up, rt_g_lit("rt_int", 6));
} else if (0 || sel1613 == ((rt_int)2LL) || sel1613 == ((rt_int)4LL) || sel1613 == ((rt_int)11LL)) {
(*F->r_427) = f_mk_203(F->up, rt_g_lit("int", 3));
} else if (0 || sel1613 == ((rt_int)3LL) || sel1613 == ((rt_int)16LL)) {
(*F->r_427) = f_mk_203(F->up, rt_g_lit("double", 6));
} else if (0 || sel1613 == ((rt_int)5LL)) {
(*F->r_427) = f_mk_203(F->up, rt_g_lit("rstr", 4));
} else if (0 || sel1613 == ((rt_int)9LL)) {
(*F->r_427) = f_mk_203(F->up, rt_g_lit("void", 4));
} else if (0 || sel1613 == ((rt_int)13LL)) {
(*F->r_427) = f_mk_203(F->up, rt_g_lit("rt_act", 6));
} else if (0 || sel1613 == ((rt_int)14LL)) {
(*F->r_427) = f_mk_203(F->up, rt_g_lit("rt_taskdecl", 11));
} else if (0 || sel1613 == ((rt_int)15LL)) {
(*F->r_427) = f_mk_203(F->up, rt_g_lit("rt_entry", 8));
} else {
if (((*(P117)rt_nil_check(F->t_426)).cname_ == NULL)) {
f_declare_ctype_433(F->up, F->t_426);
} else if (((((*(P117)rt_nil_check(F->t_426)).kind_ == ((rt_int)7LL)) && (*(P117)rt_nil_check(F->t_426)).forward_) && (!(*(P117)rt_nil_check(F->t_426)).defined_))) {
(*(P117)rt_nil_check(F->t_426)).defined_ = 1;
f_field_decls_431(F->up, F->t_426, &F->s_1612);
f_put_to_228(F->up, F->up->out_types_123, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_426)).cname_))), rt_g_lit(" {", 2)), (*(P135)rt_nil_check(F->s_1612))), rt_g_lit(" };", 3)));
}
(*F->r_427) = (*(P117)rt_nil_check(F->t_426)).cname_;
}
}
ret_:

  return;
}

static void f_field_decls_431(struct f_greenc_1fr *up_, P117 t_429, P135 *r_430) {
  struct f_field_decls_431fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_429 = t_429;
F->r_430 = r_430;
F->f_1614 = NULL;
F->f_1614 = (*(P117)rt_nil_check(F->t_429)).fields_;
F->s_1615 = NULL;
F->ct_1616 = NULL;
F->s_1615 = f_mk_203(F->up, rt_g_lit(" int dummy_;", 12));
while ((F->f_1614 != NULL)) {
f_ctype_428(F->up, (*(P1600)rt_nil_check(F->f_1614)).t_, &F->ct_1616);
F->s_1615 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->s_1615)), one_rt_gstr(32)), (*(P135)rt_nil_check(F->ct_1616))), one_rt_gstr(32)), f_c_field_220(F->up, (*(P135)rt_nil_check((*(P1600)rt_nil_check(F->f_1614)).name_)))), one_rt_gstr(59)));
F->f_1614 = (*(P1600)rt_nil_check(F->f_1614)).next_;
}
L_end_1617: ;
(*F->r_430) = F->s_1615;
ret_:

  return;
}

static void f_declare_ctype_433(struct f_greenc_1fr *up_, P117 t_432) {
  struct f_declare_ctype_433fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_432 = t_432;
F->ct_1618 = NULL;
F->s_1619 = NULL;
F->target_1620 = NULL;
if (((*(P117)rt_nil_check(F->t_432)).kind_ == ((rt_int)8LL))) {
f_finish_ptr_534(F->up, F->t_432);
}
if (((*(P117)rt_nil_check(F->t_432)).kind_ == ((rt_int)6LL))) {
f_new_name_206(F->up, rt_g_lit("A", 1), &(*(P117)rt_nil_check(F->t_432)).cname_);
} else if (((*(P117)rt_nil_check(F->t_432)).kind_ == ((rt_int)7LL))) {
f_new_name_206(F->up, rt_g_lit("R", 1), &(*(P117)rt_nil_check(F->t_432)).cname_);
} else {
f_new_name_206(F->up, rt_g_lit("P", 1), &(*(P117)rt_nil_check(F->t_432)).cname_);
}
(*(P117)rt_nil_check(F->t_432)).next_ = F->up->all_types_119;
F->up->all_types_119 = F->t_432;
if (((*(P117)rt_nil_check(F->t_432)).kind_ == ((rt_int)8LL))) {
F->target_1620 = (*(P117)rt_nil_check(F->t_432)).target_;
if ((F->target_1620 == NULL)) {
f_fail_224(F->up, ((rt_int)0LL), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the designated type of ", 23), f_kind_name_419(F->up, F->t_432)), rt_g_lit(" is never declared", 18)));
}
if (((*(P117)rt_nil_check(F->target_1620)).kind_ == ((rt_int)7LL))) {
if (((*(P117)rt_nil_check(F->target_1620)).cname_ == NULL)) {
f_new_name_206(F->up, rt_g_lit("R", 1), &(*(P117)rt_nil_check(F->target_1620)).cname_);
(*(P117)rt_nil_check(F->target_1620)).next_ = F->up->all_types_119;
F->up->all_types_119 = F->target_1620;
f_put_to_228(F->up, F->up->out_types_123, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->target_1620)).cname_))), one_rt_gstr(32)), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->target_1620)).cname_))), one_rt_gstr(59)));
(*(P117)rt_nil_check(F->target_1620)).forward_ = 1;
}
f_put_to_228(F->up, F->up->out_types_123, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->target_1620)).cname_))), rt_g_lit(" *", 2)), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_432)).cname_))), one_rt_gstr(59)));
} else {
f_ctype_428(F->up, F->target_1620, &F->ct_1618);
f_put_to_228(F->up, F->up->out_types_123, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef ", 8), (*(P135)rt_nil_check(F->ct_1618))), rt_g_lit(" *", 2)), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_432)).cname_))), one_rt_gstr(59)));
}
} else if (((*(P117)rt_nil_check(F->t_432)).kind_ == ((rt_int)6LL))) {
f_elem_ctype_492(F->up, (*(P117)rt_nil_check(F->t_432)).elem_, &F->ct_1618);
f_put_to_228(F->up, F->up->out_types_123, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_432)).cname_))), one_rt_gstr(32)), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_432)).cname_))), one_rt_gstr(59)));
f_put_to_228(F->up, F->up->out_types_123, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_432)).cname_))), rt_g_lit(" { rt_int lo, hi, lo2, hi2; ", 28)), (*(P135)rt_nil_check(F->ct_1618))), rt_g_lit(" *p; };", 7)));
} else {
f_put_to_228(F->up, F->up->out_types_123, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_432)).cname_))), one_rt_gstr(32)), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_432)).cname_))), one_rt_gstr(59)));
(*(P117)rt_nil_check(F->t_432)).defined_ = 1;
f_field_decls_431(F->up, F->t_432, &F->s_1619);
f_put_to_228(F->up, F->up->out_types_123, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_432)).cname_))), rt_g_lit(" {", 2)), (*(P135)rt_nil_check(F->s_1619))), rt_g_lit(" };", 3)));
}
ret_:

  return;
}

static rt_int f_lit_index_436(struct f_greenc_1fr *up_, P169 lits_434, rt_gstr name_435) {
  struct f_lit_index_436fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lits_434 = lits_434;
F->name_435 = cp_rt_gstr(name_435);
F->i_1621 = ((rt_int)0LL);
F->l_1622 = NULL;
F->l_1622 = F->lits_434;
while ((F->l_1622 != NULL)) {
if (eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->l_1622)).name_)), F->name_435)) {
F->result_ = F->i_1621;
goto ret_;
}
F->i_1621 = rt_add(F->i_1621, ((rt_int)1LL));
F->l_1622 = (*(P169)rt_nil_check(F->l_1622)).next_;
}
L_end_1623: ;
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_manifest_440(struct f_greenc_1fr *up_, P169 e_437, rt_int *v_438, int *ok_439) {
  struct f_manifest_440fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_437 = e_437;
F->v_438 = v_438;
F->ok_439 = ok_439;
F->y_1627 = NULL;
(*F->ok_439) = 0;
(*F->v_438) = ((rt_int)0LL);
if (((*(P169)rt_nil_check(F->e_437)).kind_ == ((rt_int)1LL))) {
(*F->ok_439) = 1;
(*F->v_438) = (*(P169)rt_nil_check(F->e_437)).ival_;
} else if (((*(P169)rt_nil_check(F->e_437)).kind_ == ((rt_int)15LL))) {
f_manifest_440(F->up, (*(P169)rt_nil_check(F->e_437)).a_, &(*F->v_438), &(*F->ok_439));
} else if ((((*(P169)rt_nil_check(F->e_437)).kind_ == ((rt_int)6LL)) && eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_437)).name_)), rt_g_lit("-", 1)))) {
f_manifest_440(F->up, (*(P169)rt_nil_check(F->e_437)).a_, &F->a_1624, &(*F->ok_439));
(*F->v_438) = rt_neg(F->a_1624);
} else if ((((*(P169)rt_nil_check(F->e_437)).kind_ == ((rt_int)7LL)) && ((eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_437)).name_)), rt_g_lit("+", 1)) || eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_437)).name_)), rt_g_lit("-", 1))) || eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_437)).name_)), rt_g_lit("*", 1))))) {
f_manifest_440(F->up, (*(P169)rt_nil_check(F->e_437)).a_, &F->a_1624, &(*F->ok_439));
f_manifest_440(F->up, (*(P169)rt_nil_check(F->e_437)).b_, &F->b_1625, &F->ok2_1626);
(*F->ok_439) = ((*F->ok_439) && F->ok2_1626);
if ((*F->ok_439)) {
if (eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_437)).name_)), rt_g_lit("+", 1))) {
(*F->v_438) = rt_add(F->a_1624, F->b_1625);
} else if (eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_437)).name_)), rt_g_lit("-", 1))) {
(*F->v_438) = rt_sub(F->a_1624, F->b_1625);
} else {
(*F->v_438) = rt_mul(F->a_1624, F->b_1625);
}
}
} else if (((*(P169)rt_nil_check(F->e_437)).kind_ == ((rt_int)5LL))) {
F->y_1627 = f_lookup_381(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_437)).name_)));
if ((((F->y_1627 != NULL) && (((*(P112)rt_nil_check(F->y_1627)).kind_ == ((rt_int)2LL)) || ((*(P112)rt_nil_check(F->y_1627)).kind_ == ((rt_int)7LL)))) && (*(P112)rt_nil_check(F->y_1627)).hasmv_)) {
(*F->ok_439) = 1;
(*F->v_438) = (*(P112)rt_nil_check(F->y_1627)).mvalue_;
}
} else if (((((*(P169)rt_nil_check(F->e_437)).kind_ == ((rt_int)9LL)) && ((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_437)).a_)).kind_ == ((rt_int)5LL))) && f_is_package_869(F->up, (*(P169)rt_nil_check(F->e_437)).a_))) {
F->y_1627 = f_member_of_873(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_437)).a_)).name_)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_437)).name_)), (*(P169)rt_nil_check(F->e_437)).line_);
if ((((F->y_1627 != NULL) && (((*(P112)rt_nil_check(F->y_1627)).kind_ == ((rt_int)2LL)) || ((*(P112)rt_nil_check(F->y_1627)).kind_ == ((rt_int)7LL)))) && (*(P112)rt_nil_check(F->y_1627)).hasmv_)) {
(*F->ok_439) = 1;
(*F->v_438) = (*(P112)rt_nil_check(F->y_1627)).mvalue_;
}
} else if (((((*(P169)rt_nil_check(F->e_437)).kind_ == ((rt_int)10LL)) && ((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_437)).a_)).kind_ == ((rt_int)5LL))) && (eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_437)).name_)), rt_g_lit("FIRST", 5)) || eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_437)).name_)), rt_g_lit("LAST", 4))))) {
F->y_1627 = f_lookup_381(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_437)).a_)).name_)));
if (((((F->y_1627 != NULL) && ((*(P112)rt_nil_check(F->y_1627)).kind_ == ((rt_int)5LL))) && ((*(P112)rt_nil_check(F->y_1627)).c_ != NULL)) && (*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_1627)).c_)).hasm_)) {
(*F->ok_439) = 1;
if (eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_437)).name_)), rt_g_lit("FIRST", 5))) {
(*F->v_438) = (*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_1627)).c_)).mlo_;
} else {
(*F->v_438) = (*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_1627)).c_)).mhi_;
}
}
} else if (((((*(P169)rt_nil_check(F->e_437)).kind_ == ((rt_int)8LL)) && ((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_437)).a_)).kind_ == ((rt_int)5LL))) && (f_list_len_280(F->up, (*(P169)rt_nil_check(F->e_437)).b_) == ((rt_int)1LL)))) {
F->y_1627 = f_lookup_381(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_437)).a_)).name_)));
if (((((F->y_1627 != NULL) && ((*(P112)rt_nil_check(F->y_1627)).kind_ == ((rt_int)5LL))) && ((*(P112)rt_nil_check(F->y_1627)).t_ != NULL)) && ((*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_1627)).t_)).kind_ == ((rt_int)1LL)))) {
f_manifest_440(F->up, (*(P169)rt_nil_check(F->e_437)).b_, &(*F->v_438), &(*F->ok_439));
}
}
ret_:

  return;
}

static void f_resolve_444(struct f_greenc_1fr *up_, P169 st_441, P117 *t_442, P173 *c_443) {
  struct f_resolve_444fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_441 = st_441;
F->t_442 = t_442;
F->c_443 = c_443;
F->y_1628 = NULL;
F->dummy_1629 = NULL;
F->code_1630 = NULL;
F->r_1632 = NULL;
(*F->c_443) = f_new_cons_417(F->up);
if (((*(P169)rt_nil_check(F->st_441)).kind_ != ((rt_int)80LL))) {
f_type_definition_478(F->up, F->st_441, NULL, &(*F->t_442), &(*F->c_443));
goto ret_;
}
if (((*(P169)rt_nil_check(F->st_441)).tag_ != NULL)) {
F->y_1628 = f_member_of_873(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->st_441)).tag_)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->st_441)).name_)), (*(P169)rt_nil_check(F->st_441)).line_);
} else {
F->y_1628 = f_lookup_381(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->st_441)).name_)));
}
if (((F->y_1628 == NULL) || ((*(P112)rt_nil_check(F->y_1628)).kind_ != ((rt_int)5LL)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->st_441)).line_, cat_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->st_441)).name_)), rt_g_lit(" is not a type", 14)));
}
(*F->t_442) = (*(P112)rt_nil_check(F->y_1628)).t_;
if (((*(P112)rt_nil_check(F->y_1628)).c_ != NULL)) {
(*(P173)rt_nil_check((*F->c_443))).lo_ = (*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_1628)).c_)).lo_;
(*(P173)rt_nil_check((*F->c_443))).hi_ = (*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_1628)).c_)).hi_;
(*(P173)rt_nil_check((*F->c_443))).slen_ = (*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_1628)).c_)).slen_;
(*(P173)rt_nil_check((*F->c_443))).mlo_ = (*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_1628)).c_)).mlo_;
(*(P173)rt_nil_check((*F->c_443))).mhi_ = (*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_1628)).c_)).mhi_;
(*(P173)rt_nil_check((*F->c_443))).hasm_ = (*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_1628)).c_)).hasm_;
(*(P173)rt_nil_check((*F->c_443))).acc_ = (*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_1628)).c_)).acc_;
(*(P173)rt_nil_check((*F->c_443))).inner_ = (*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_1628)).c_)).inner_;
(*(P173)rt_nil_check((*F->c_443))).dv_ = (*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_1628)).c_)).dv_;
}
if (((*F->t_442) == NULL)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->st_441)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("the type ", 9), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->st_441)).name_))), rt_g_lit(" is used before its full declaration", 36)));
}
if (((*(P169)rt_nil_check(F->st_441)).flag_ == ((rt_int)3LL))) {
if ((((*(P117)rt_nil_check((*F->t_442))).kind_ != ((rt_int)3LL)) && ((*(P117)rt_nil_check((*F->t_442))).kind_ != ((rt_int)16LL)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->st_441)).line_, rt_g_lit("an accuracy constraint applies to a real type (RM79 3.5.5)", 58));
}
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->st_441)).b_, NULL, &F->dummy_1629, &(*(P173)rt_nil_check((*F->c_443))).acc_);
}
if ((((*(P169)rt_nil_check(F->st_441)).flag_ == ((rt_int)1LL)) || (((*(P169)rt_nil_check(F->st_441)).flag_ == ((rt_int)3LL)) && ((*(P169)rt_nil_check(F->st_441)).a_ != NULL)))) {
F->r_1632 = (*(P169)rt_nil_check(F->st_441)).a_;
if (((!f_is_numeric_401(F->up, (*F->t_442))) && (!f_is_discrete_403(F->up, (*F->t_442))))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->st_441)).line_, rt_g_lit("a range constraint applies to a scalar type (RM79 3.5)", 54));
}
f_range_of_462(F->up, F->r_1632, (*F->t_442), (*F->c_443));
} else if (((*(P169)rt_nil_check(F->st_441)).flag_ == ((rt_int)2LL))) {
f_constraint_list_448(F->up, F->st_441, (*F->t_442), (*F->c_443));
}
ret_:

  return;
}

static void f_constraint_list_448(struct f_greenc_1fr *up_, P169 st_445, P117 t_446, P173 c_447) {
  struct f_constraint_list_448fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_445 = st_445;
F->t_446 = t_446;
F->c_447 = c_447;
F->r_1633 = NULL;
F->r_1633 = (*(P169)rt_nil_check(F->st_445)).a_;
F->arrt_1634 = NULL;
F->arrt_1634 = F->t_446;
F->cc_1635 = NULL;
F->cc_1635 = F->c_447;
F->it_1636 = NULL;
if (((*(P117)rt_nil_check(F->t_446)).kind_ == ((rt_int)7LL))) {
f_discriminant_constraint_452(F->up, F->st_445, F->t_446, F->c_447);
goto ret_;
}
if (((*(P117)rt_nil_check(F->t_446)).kind_ != ((rt_int)6LL))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->st_445)).line_, rt_g_lit("this type takes no index constraint", 35));
}
if ((f_list_len_280(F->up, F->r_1633) != (*(P117)rt_nil_check(F->t_446)).dims_)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->st_445)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("an index constraint gives a range for each of the ", 50), rt_g_s2g(rt_str_of_int((*(P117)rt_nil_check(F->t_446)).dims_))), rt_g_lit(" indexes (RM79 3.6)", 19)));
}
while ((F->r_1633 != NULL)) {
if (((*(P169)rt_nil_check(F->r_1633)).formal_ != NULL)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->st_445)).line_, rt_g_lit("an index constraint is a list of discrete ranges (RM79 3.6)", 59));
}
f_discrete_bounds_458(F->up, F->r_1633, (*(P117)rt_nil_check(F->arrt_1634)).idx_, &F->it_1636, &(*(P173)rt_nil_check(F->cc_1635)).lo_, &(*(P173)rt_nil_check(F->cc_1635)).hi_);
f_check_type_423(F->up, F->it_1636, (*(P117)rt_nil_check(F->arrt_1634)).idx_, (*(P169)rt_nil_check(F->st_445)).line_);
(*(P173)rt_nil_check(F->cc_1635)).mlo_ = ((rt_int)0LL);
(*(P173)rt_nil_check(F->cc_1635)).mhi_ = ((rt_int)0LL);
(*(P173)rt_nil_check(F->cc_1635)).hasm_ = 0;
F->r_1633 = (*(P169)rt_nil_check(F->r_1633)).next_;
if ((F->r_1633 != NULL)) {
(*(P173)rt_nil_check(F->cc_1635)).inner_ = f_new_cons_417(F->up);
F->cc_1635 = (*(P173)rt_nil_check(F->cc_1635)).inner_;
F->arrt_1634 = (*(P117)rt_nil_check(F->arrt_1634)).elem_;
}
}
L_end_1637: ;
ret_:

  return;
}

static void f_discriminant_constraint_452(struct f_greenc_1fr *up_, P169 st_449, P117 t_450, P173 c_451) {
  struct f_discriminant_constraint_452fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_449 = st_449;
F->t_450 = t_450;
F->c_451 = c_451;
F->a_1638 = NULL;
F->a_1638 = (*(P169)rt_nil_check(F->st_449)).a_;
F->f_1639 = NULL;
F->f_1639 = (*(P117)rt_nil_check(F->t_450)).fields_;
F->vt_1640 = NULL;
F->v_1641 = NULL;
F->d_1642 = NULL;
F->tail_1643 = NULL;
(*(P173)rt_nil_check(F->c_451)).dv_ = NULL;
while ((F->a_1638 != NULL)) {
if (((*(P169)rt_nil_check(F->a_1638)).formal_ != NULL)) {
F->f_1639 = (*(P117)rt_nil_check(F->t_450)).fields_;
while (((F->f_1639 != NULL) && (!eq_rt_gstr((*(P135)rt_nil_check((*(P1600)rt_nil_check(F->f_1639)).name_)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->a_1638)).formal_)))))) {
F->f_1639 = (*(P1600)rt_nil_check(F->f_1639)).next_;
}
L_end_1645: ;
} else {
while (((F->f_1639 != NULL) && (!(*(P1600)rt_nil_check(F->f_1639)).is_discr_))) {
F->f_1639 = (*(P1600)rt_nil_check(F->f_1639)).next_;
}
L_end_1646: ;
}
if (((F->f_1639 == NULL) || (!(*(P1600)rt_nil_check(F->f_1639)).is_discr_))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->st_449)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("a discriminant constraint gives the values of discriminants of ", 63), f_kind_name_419(F->up, F->t_450)), rt_g_lit(" (RM79 3.7.3)", 13)));
}
f_gexpr_688(F->up, F->a_1638, (*(P1600)rt_nil_check(F->f_1639)).t_, &F->vt_1640, &F->v_1641);
f_check_type_423(F->up, F->vt_1640, (*(P1600)rt_nil_check(F->f_1639)).t_, (*(P169)rt_nil_check(F->st_449)).line_);
F->d_1642 = ({ R1605 *cell1647 = rt_alloc(sizeof(R1605)); *cell1647 = cp_R1605(({ R1605 ag1648; ag1648.name_ = (*(P1600)rt_nil_check(F->f_1639)).name_; ag1648.v_ = F->v_1641; ag1648.next_ = NULL; ag1648; })); (P1604)cell1647; });
if ((F->tail_1643 == NULL)) {
(*(P173)rt_nil_check(F->c_451)).dv_ = F->d_1642;
} else {
(*(P1604)rt_nil_check(F->tail_1643)).next_ = F->d_1642;
}
F->tail_1643 = F->d_1642;
if (((*(P169)rt_nil_check(F->a_1638)).formal_ == NULL)) {
F->f_1639 = (*(P1600)rt_nil_check(F->f_1639)).next_;
}
F->a_1638 = (*(P169)rt_nil_check(F->a_1638)).next_;
}
L_end_1644: ;
F->f_1639 = (*(P117)rt_nil_check(F->t_450)).fields_;
while ((F->f_1639 != NULL)) {
if ((*(P1600)rt_nil_check(F->f_1639)).is_discr_) {
F->d_1642 = (*(P173)rt_nil_check(F->c_451)).dv_;
while (((F->d_1642 != NULL) && (!eq_rt_gstr((*(P135)rt_nil_check((*(P1604)rt_nil_check(F->d_1642)).name_)), (*(P135)rt_nil_check((*(P1600)rt_nil_check(F->f_1639)).name_)))))) {
F->d_1642 = (*(P1604)rt_nil_check(F->d_1642)).next_;
}
L_end_1650: ;
if ((F->d_1642 == NULL)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->st_449)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("no value for discriminant ", 26), (*(P135)rt_nil_check((*(P1600)rt_nil_check(F->f_1639)).name_))), rt_g_lit(" (RM79 3.7.3)", 13)));
}
}
F->f_1639 = (*(P1600)rt_nil_check(F->f_1639)).next_;
}
L_end_1649: ;
ret_:

  return;
}

static void f_discrete_bounds_458(struct f_greenc_1fr *up_, P169 r_453, P117 want_454, P117 *t_455, P135 *lo_456, P135 *hi_457) {
  struct f_discrete_bounds_458fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_453 = r_453;
F->want_454 = want_454;
F->t_455 = t_455;
F->lo_456 = lo_456;
F->hi_457 = hi_457;
F->c_1651 = NULL;
F->y_1652 = NULL;
if (((*(P169)rt_nil_check(F->r_453)).kind_ == ((rt_int)14LL))) {
f_range_bounds_683(F->up, (*(P169)rt_nil_check(F->r_453)).a_, (*(P169)rt_nil_check(F->r_453)).b_, F->want_454, (*(P169)rt_nil_check(F->r_453)).line_, &(*F->t_455), &(*F->lo_456), &(*F->hi_457));
goto ret_;
}
if (((*(P169)rt_nil_check(F->r_453)).kind_ == ((rt_int)5LL))) {
F->y_1652 = f_lookup_381(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->r_453)).name_)));
if (((F->y_1652 == NULL) || ((*(P112)rt_nil_check(F->y_1652)).kind_ != ((rt_int)5LL)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->r_453)).line_, rt_g_lit("a discrete range is L .. H, T range L .. H or a type mark (RM79 3.6)", 68));
}
} else if (((*(P169)rt_nil_check(F->r_453)).kind_ != ((rt_int)80LL))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->r_453)).line_, rt_g_lit("a discrete range is L .. H, T range L .. H or a type mark (RM79 3.6)", 68));
}
if (((*(P169)rt_nil_check(F->r_453)).kind_ == ((rt_int)5LL))) {
(*F->t_455) = (*(P112)rt_nil_check(F->y_1652)).t_;
F->c_1651 = (*(P112)rt_nil_check(F->y_1652)).c_;
} else {
f_resolve_444(F->up, F->r_453, &(*F->t_455), &F->c_1651);
}
if (((F->c_1651 == NULL) || ((*(P173)rt_nil_check(F->c_1651)).lo_ == NULL))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->r_453)).line_, rt_g_lit("this type mark has no bounds to give a discrete range", 53));
}
(*F->lo_456) = (*(P173)rt_nil_check(F->c_1651)).lo_;
(*F->hi_457) = (*(P173)rt_nil_check(F->c_1651)).hi_;
ret_:

  return;
}

static void f_range_of_462(struct f_greenc_1fr *up_, P169 r_459, P117 t_460, P173 c_461) {
  struct f_range_of_462fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_459 = r_459;
F->t_460 = t_460;
F->c_461 = c_461;
F->dummy_1653 = NULL;
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->r_459)).a_, F->t_460, &F->dummy_1653, &(*(P173)rt_nil_check(F->c_461)).lo_);
f_check_type_423(F->up, F->dummy_1653, F->t_460, (*(P169)rt_nil_check(F->r_459)).line_);
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->r_459)).b_, F->t_460, &F->dummy_1653, &(*(P173)rt_nil_check(F->c_461)).hi_);
f_check_type_423(F->up, F->dummy_1653, F->t_460, (*(P169)rt_nil_check(F->r_459)).line_);
if (((*(P117)rt_nil_check(F->t_460)).kind_ == ((rt_int)16LL))) {
(*(P173)rt_nil_check(F->c_461)).lo_ = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_461)).lo_))), one_rt_gstr(41)));
(*(P173)rt_nil_check(F->c_461)).hi_ = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_461)).hi_))), one_rt_gstr(41)));
}
f_manifest_440(F->up, (*(P169)rt_nil_check(F->r_459)).a_, &(*(P173)rt_nil_check(F->c_461)).mlo_, &F->ok_1654);
(*(P173)rt_nil_check(F->c_461)).hasm_ = F->ok_1654;
f_manifest_440(F->up, (*(P169)rt_nil_check(F->r_459)).b_, &(*(P173)rt_nil_check(F->c_461)).mhi_, &F->ok_1654);
(*(P173)rt_nil_check(F->c_461)).hasm_ = ((*(P173)rt_nil_check(F->c_461)).hasm_ && F->ok_1654);
ret_:

  return;
}

static void f_fresh_typ_466(struct f_greenc_1fr *up_, rt_int kind_463, P135 name_464, P117 *t_465) {
  struct f_fresh_typ_466fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_463 = kind_463;
F->name_464 = name_464;
F->t_465 = t_465;
F->ph_1655 = NULL;
F->ph_1655 = F->up->completing_168;
F->up->completing_168 = NULL;
if ((F->ph_1655 == NULL)) {
(*F->t_465) = f_new_typ_416(F->up, F->kind_463);
(*(P117)rt_nil_check((*F->t_465))).name_ = F->name_464;
goto ret_;
}
as_R118(&(*(P117)rt_nil_check(F->ph_1655)), (*(P117)rt_nil_check(f_new_typ_416(F->up, F->kind_463))));
(*(P117)rt_nil_check(F->ph_1655)).name_ = F->name_464;
(*F->t_465) = F->ph_1655;
ret_:

  return;
}

static void f_inherit_470(struct f_greenc_1fr *up_, P117 parent_467, P117 t_468, rt_int line_469) {
  struct f_inherit_470fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->parent_467 = parent_467;
F->t_468 = t_468;
F->line_469 = line_469;
F->s_1656 = NULL;
F->s_1656 = F->up->scope_stack_116;
F->z_1657 = NULL;
F->p_1658 = NULL;
F->q_1659 = NULL;
F->tail_1660 = NULL;
F->news_1662 = NULL;
while ((F->s_1656 != NULL)) {
if ((((((*(P112)rt_nil_check(F->s_1656)).kind_ == ((rt_int)3LL)) || ((*(P112)rt_nil_check(F->s_1656)).kind_ == ((rt_int)4LL))) && (!(*(P112)rt_nil_check(F->s_1656)).hidden_)) && ((*(P112)rt_nil_check(F->s_1656)).members_ == NULL))) {
F->uses_1661 = f_same_394(F->up, (*(P112)rt_nil_check(F->s_1656)).result_, F->parent_467);
F->p_1658 = (*(P112)rt_nil_check(F->s_1656)).params_;
while ((F->p_1658 != NULL)) {
F->uses_1661 = (F->uses_1661 || f_same_394(F->up, (*(P1585)rt_nil_check(F->p_1658)).t_, F->parent_467));
F->p_1658 = (*(P1585)rt_nil_check(F->p_1658)).next_;
}
L_end_1664: ;
if (F->uses_1661) {
f_copy_sym_878(F->up, F->s_1656, &F->z_1657);
(*(P112)rt_nil_check(F->z_1657)).params_ = NULL;
F->tail_1660 = NULL;
F->p_1658 = (*(P112)rt_nil_check(F->s_1656)).params_;
while ((F->p_1658 != NULL)) {
F->q_1659 = ({ R1586 *cell1666 = rt_alloc(sizeof(R1586)); *cell1666 = cp_R1586(({ R1586 ag1667; ag1667.name_ = (*(P1585)rt_nil_check(F->p_1658)).name_; ag1667.mode_ = (*(P1585)rt_nil_check(F->p_1658)).mode_; ag1667.t_ = (*(P1585)rt_nil_check(F->p_1658)).t_; ag1667.c_ = (*(P1585)rt_nil_check(F->p_1658)).c_; ag1667.cfield_ = (*(P1585)rt_nil_check(F->p_1658)).cfield_; ag1667.dflt_ = (*(P1585)rt_nil_check(F->p_1658)).dflt_; ag1667.next_ = NULL; ag1667; })); (P1585)cell1666; });
if (f_same_394(F->up, (*(P1585)rt_nil_check(F->q_1659)).t_, F->parent_467)) {
(*(P1585)rt_nil_check(F->q_1659)).t_ = F->t_468;
}
if ((F->tail_1660 == NULL)) {
(*(P112)rt_nil_check(F->z_1657)).params_ = F->q_1659;
} else {
(*(P1585)rt_nil_check(F->tail_1660)).next_ = F->q_1659;
}
F->tail_1660 = F->q_1659;
F->p_1658 = (*(P1585)rt_nil_check(F->p_1658)).next_;
}
L_end_1665: ;
if (f_same_394(F->up, (*(P112)rt_nil_check(F->z_1657)).result_, F->parent_467)) {
(*(P112)rt_nil_check(F->z_1657)).result_ = F->t_468;
}
(*(P112)rt_nil_check(F->z_1657)).chain_ = F->news_1662;
F->news_1662 = F->z_1657;
}
}
F->s_1656 = (*(P112)rt_nil_check(F->s_1656)).stack_;
}
L_end_1663: ;
while ((F->news_1662 != NULL)) {
F->z_1657 = F->news_1662;
F->news_1662 = (*(P112)rt_nil_check(F->news_1662)).chain_;
(*(P112)rt_nil_check(F->z_1657)).chain_ = NULL;
f_define_409(F->up, F->z_1657, F->line_469);
}
L_end_1668: ;
ret_:

  return;
}

static void f_derive_literals_473(struct f_greenc_1fr *up_, P117 t_471, rt_int line_472) {
  struct f_derive_literals_473fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_471 = t_471;
F->line_472 = line_472;
F->l_1669 = NULL;
F->l_1669 = (*(P117)rt_nil_check(F->t_471)).lits_;
F->n_1670 = ((rt_int)0LL);
F->y_1671 = NULL;
while ((F->l_1669 != NULL)) {
if (((*(P169)rt_nil_check(F->l_1669)).kind_ == ((rt_int)5LL))) {
F->y_1671 = f_new_sym_414(F->up, ((rt_int)7LL), (*(P169)rt_nil_check(F->l_1669)).name_);
(*(P112)rt_nil_check(F->y_1671)).t_ = F->t_471;
(*(P112)rt_nil_check(F->y_1671)).result_ = F->t_471;
(*(P112)rt_nil_check(F->y_1671)).mvalue_ = F->n_1670;
(*(P112)rt_nil_check(F->y_1671)).hasmv_ = 1;
f_define_409(F->up, F->y_1671, F->line_472);
}
F->n_1670 = rt_add(F->n_1670, ((rt_int)1LL));
F->l_1669 = (*(P169)rt_nil_check(F->l_1669)).next_;
}
L_end_1672: ;
ret_:

  return;
}

static void f_type_definition_478(struct f_greenc_1fr *up_, P169 d_474, P135 name_475, P117 *t_476, P173 *c_477) {
  struct f_type_definition_478fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_474 = d_474;
F->name_475 = name_475;
F->t_476 = t_476;
F->c_477 = c_477;
F->dummy_1673 = NULL;
F->it_1674 = NULL;
F->ic_1675 = NULL;
F->l_1676 = NULL;
F->comp_1677 = NULL;
F->f_1678 = NULL;
F->tail_1679 = NULL;
F->y_1682 = NULL;
(*F->c_477) = f_new_cons_417(F->up);
{ rt_int sel1683 = (*(P169)rt_nil_check(F->d_474)).kind_;
if (0 || sel1683 == ((rt_int)70LL)) {
f_fresh_typ_466(F->up, ((rt_int)4LL), F->name_475, &(*F->t_476));
(*(P117)rt_nil_check((*F->t_476))).lits_ = (*(P169)rt_nil_check(F->d_474)).a_;
F->l_1676 = (*(P169)rt_nil_check(F->d_474)).a_;
F->n_1681 = ((rt_int)0LL);
while ((F->l_1676 != NULL)) {
if (((*(P169)rt_nil_check(F->l_1676)).kind_ == ((rt_int)5LL))) {
F->y_1682 = f_new_sym_414(F->up, ((rt_int)7LL), (*(P169)rt_nil_check(F->l_1676)).name_);
(*(P112)rt_nil_check(F->y_1682)).t_ = (*F->t_476);
(*(P112)rt_nil_check(F->y_1682)).result_ = (*F->t_476);
(*(P112)rt_nil_check(F->y_1682)).mvalue_ = F->n_1681;
(*(P112)rt_nil_check(F->y_1682)).hasmv_ = 1;
f_define_409(F->up, F->y_1682, (*(P169)rt_nil_check(F->l_1676)).line_);
}
F->n_1681 = rt_add(F->n_1681, ((rt_int)1LL));
F->l_1676 = (*(P169)rt_nil_check(F->l_1676)).next_;
}
L_end_1684: ;
(*(P173)rt_nil_check((*F->c_477))).lo_ = f_mk_203(F->up, rt_g_lit("0", 1));
(*(P173)rt_nil_check((*F->c_477))).hi_ = f_mk_203(F->up, rt_g_s2g(rt_str_of_int(rt_sub(F->n_1681, ((rt_int)1LL)))));
(*(P173)rt_nil_check((*F->c_477))).mlo_ = ((rt_int)0LL);
(*(P173)rt_nil_check((*F->c_477))).mhi_ = rt_sub(F->n_1681, ((rt_int)1LL));
(*(P173)rt_nil_check((*F->c_477))).hasm_ = 1;
} else if (0 || sel1683 == ((rt_int)71LL)) {
f_fresh_typ_466(F->up, ((rt_int)1LL), F->name_475, &(*F->t_476));
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->d_474)).a_, F->up->ty_int_151, &F->dummy_1673, &(*(P173)rt_nil_check((*F->c_477))).lo_);
if (((*(P117)rt_nil_check(F->dummy_1673)).kind_ != ((rt_int)1LL))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->d_474)).line_, rt_g_lit("the bounds of an integer type are integers (RM79 3.5.4)", 55));
}
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->d_474)).b_, F->up->ty_int_151, &F->dummy_1673, &(*(P173)rt_nil_check((*F->c_477))).hi_);
if (((*(P117)rt_nil_check(F->dummy_1673)).kind_ != ((rt_int)1LL))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->d_474)).line_, rt_g_lit("the bounds of an integer type are integers (RM79 3.5.4)", 55));
}
f_manifest_440(F->up, (*(P169)rt_nil_check(F->d_474)).a_, &(*(P173)rt_nil_check((*F->c_477))).mlo_, &F->ok_1680);
(*(P173)rt_nil_check((*F->c_477))).hasm_ = F->ok_1680;
f_manifest_440(F->up, (*(P169)rt_nil_check(F->d_474)).b_, &(*(P173)rt_nil_check((*F->c_477))).mhi_, &F->ok_1680);
(*(P173)rt_nil_check((*F->c_477))).hasm_ = ((*(P173)rt_nil_check((*F->c_477))).hasm_ && F->ok_1680);
(*(P117)rt_nil_check((*F->t_476))).parent_ = F->up->ty_int_151;
if (((*(P173)rt_nil_check((*F->c_477))).hasm_ && (((*(P173)rt_nil_check((*F->c_477))).mlo_ >= rt_neg(((rt_int)2147483648LL))) && ((*(P173)rt_nil_check((*F->c_477))).mhi_ <= ((rt_int)2147483647LL))))) {
(*(P117)rt_nil_check((*F->t_476))).parent_ = F->up->ty_short_162;
}
f_inherit_470(F->up, (*(P117)rt_nil_check((*F->t_476))).parent_, (*F->t_476), (*(P169)rt_nil_check(F->d_474)).line_);
} else if (0 || sel1683 == ((rt_int)72LL)) {
f_real_type_532(F->up, F->d_474, F->name_475, &(*F->t_476), &(*F->c_477));
} else if (0 || sel1683 == ((rt_int)73LL)) {
f_array_type_485(F->up, (*(P169)rt_nil_check(F->d_474)).a_, (*(P169)rt_nil_check(F->d_474)).b_, F->name_475, (*(P169)rt_nil_check(F->d_474)).line_, &(*F->t_476), &(*F->c_477));
} else if (0 || sel1683 == ((rt_int)74LL)) {
f_fresh_typ_466(F->up, ((rt_int)7LL), F->name_475, &(*F->t_476));
F->up->disc_syms_177 = NULL;
f_record_components_513(F->up, (*(P169)rt_nil_check(F->d_474)).a_, (*F->t_476), NULL, (*(P169)rt_nil_check(F->d_474)).line_);
while ((F->up->disc_syms_177 != NULL)) {
f_remove_sym_508(F->up, F->up->disc_syms_177);
F->up->disc_syms_177 = (*(P112)rt_nil_check(F->up->disc_syms_177)).mnext_;
}
L_end_1685: ;
} else if (0 || sel1683 == ((rt_int)75LL)) {
f_fresh_typ_466(F->up, ((rt_int)8LL), F->name_475, &(*F->t_476));
(*(P117)rt_nil_check((*F->t_476))).decl_ = (*(P169)rt_nil_check(F->d_474)).a_;
} else if (0 || sel1683 == ((rt_int)76LL)) {
f_derived_type_527(F->up, F->d_474, F->name_475, &(*F->t_476), &(*F->c_477));
} else {
f_fail_224(F->up, (*(P169)rt_nil_check(F->d_474)).line_, rt_g_lit("this type definition is not handled", 35));
}
}
ret_:

  return;
}

static void f_array_type_485(struct f_greenc_1fr *up_, P169 idx_479, P169 comp_480, P135 name_481, rt_int line_482, P117 *t_483, P173 *c_484) {
  struct f_array_type_485fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->idx_479 = idx_479;
F->comp_480 = comp_480;
F->name_481 = name_481;
F->line_482 = line_482;
F->t_483 = t_483;
F->c_484 = c_484;
F->l_1686 = NULL;
F->l_1686 = F->idx_479;
F->rowc_1687 = NULL;
F->ic_1688 = NULL;
F->it_1689 = NULL;
(*F->c_484) = f_new_cons_417(F->up);
f_fresh_typ_466(F->up, ((rt_int)6LL), F->name_481, &(*F->t_483));
(*(P117)rt_nil_check((*F->t_483))).dims_ = f_list_len_280(F->up, F->idx_479);
if (((*(P169)rt_nil_check(F->idx_479)).next_ == NULL)) {
f_resolve_444(F->up, F->comp_480, &(*(P117)rt_nil_check((*F->t_483))).elem_, &(*(P117)rt_nil_check((*F->t_483))).elemcons_);
} else {
if ((((*(P169)rt_nil_check(F->idx_479)).kind_ == ((rt_int)14LL)) != ((*(P169)rt_nil_check((*(P169)rt_nil_check(F->idx_479)).next_)).kind_ == ((rt_int)14LL)))) {
f_fail_224(F->up, F->line_482, rt_g_lit("the indexes of an array are all discrete ranges or all type marks (RM79 3.6)", 76));
}
f_array_type_485(F->up, (*(P169)rt_nil_check(F->idx_479)).next_, F->comp_480, NULL, F->line_482, &(*(P117)rt_nil_check((*F->t_483))).elem_, &F->rowc_1687);
if (((*(P173)rt_nil_check(F->rowc_1687)).lo_ != NULL)) {
(*(P117)rt_nil_check((*F->t_483))).elemcons_ = F->rowc_1687;
}
}
if (((*(P169)rt_nil_check(F->l_1686)).kind_ == ((rt_int)14LL))) {
f_discrete_bounds_458(F->up, F->l_1686, NULL, &(*(P117)rt_nil_check((*F->t_483))).idx_, &(*(P173)rt_nil_check((*F->c_484))).lo_, &(*(P173)rt_nil_check((*F->c_484))).hi_);
f_static_range_489(F->up, (*(P169)rt_nil_check(F->l_1686)).a_, (*(P169)rt_nil_check(F->l_1686)).b_, (*F->c_484));
} else if ((((*(P169)rt_nil_check(F->l_1686)).kind_ == ((rt_int)80LL)) && ((*(P169)rt_nil_check(F->l_1686)).flag_ == ((rt_int)1LL)))) {
f_discrete_bounds_458(F->up, F->l_1686, NULL, &(*(P117)rt_nil_check((*F->t_483))).idx_, &(*(P173)rt_nil_check((*F->c_484))).lo_, &(*(P173)rt_nil_check((*F->c_484))).hi_);
} else {
f_resolve_444(F->up, F->l_1686, &(*(P117)rt_nil_check((*F->t_483))).idx_, &F->ic_1688);
if ((((((*(P117)rt_nil_check((*(P117)rt_nil_check((*F->t_483))).idx_)).kind_ == ((rt_int)4LL)) || ((*(P117)rt_nil_check((*(P117)rt_nil_check((*F->t_483))).idx_)).kind_ == ((rt_int)11LL))) || ((*(P117)rt_nil_check((*(P117)rt_nil_check((*F->t_483))).idx_)).kind_ == ((rt_int)2LL))) || ((*(P173)rt_nil_check(F->ic_1688)).hasm_ && ((rt_sub((*(P173)rt_nil_check(F->ic_1688)).mhi_, (*(P173)rt_nil_check(F->ic_1688)).mlo_) >= ((rt_int)0LL)) && (rt_sub((*(P173)rt_nil_check(F->ic_1688)).mhi_, (*(P173)rt_nil_check(F->ic_1688)).mlo_) < ((rt_int)1000000LL)))))) {
(*(P173)rt_nil_check((*F->c_484))).lo_ = (*(P173)rt_nil_check(F->ic_1688)).lo_;
(*(P173)rt_nil_check((*F->c_484))).hi_ = (*(P173)rt_nil_check(F->ic_1688)).hi_;
(*(P173)rt_nil_check((*F->c_484))).mlo_ = (*(P173)rt_nil_check(F->ic_1688)).mlo_;
(*(P173)rt_nil_check((*F->c_484))).mhi_ = (*(P173)rt_nil_check(F->ic_1688)).mhi_;
(*(P173)rt_nil_check((*F->c_484))).hasm_ = (*(P173)rt_nil_check(F->ic_1688)).hasm_;
} else if (((*(P173)rt_nil_check(F->ic_1688)).lo_ != NULL)) {
(*(P117)rt_nil_check((*F->t_483))).tcons_ = f_new_cons_417(F->up);
(*(P173)rt_nil_check((*(P117)rt_nil_check((*F->t_483))).tcons_)).lo_ = (*(P173)rt_nil_check(F->ic_1688)).lo_;
}
}
if ((!f_is_discrete_403(F->up, (*(P117)rt_nil_check((*F->t_483))).idx_))) {
f_fail_224(F->up, F->line_482, rt_g_lit("an index is of a discrete type (RM79 3.6)", 41));
}
if (((*(P117)rt_nil_check((*F->t_483))).dims_ > ((rt_int)1LL))) {
(*(P173)rt_nil_check((*F->c_484))).inner_ = F->rowc_1687;
if ((((*(P173)rt_nil_check((*F->c_484))).lo_ == NULL) != ((*(P173)rt_nil_check(F->rowc_1687)).lo_ == NULL))) {
(*(P173)rt_nil_check((*F->c_484))).lo_ = NULL;
(*(P173)rt_nil_check((*F->c_484))).hi_ = NULL;
(*(P173)rt_nil_check((*F->c_484))).inner_ = NULL;
(*(P117)rt_nil_check((*F->t_483))).elemcons_ = NULL;
}
}
if (((*(P173)rt_nil_check((*F->c_484))).lo_ != NULL)) {
(*(P117)rt_nil_check((*F->t_483))).tcons_ = (*F->c_484);
}
ret_:

  return;
}

static void f_static_range_489(struct f_greenc_1fr *up_, P169 l_486, P169 h_487, P173 c_488) {
  struct f_static_range_489fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_486 = l_486;
F->h_487 = h_487;
F->c_488 = c_488;
f_manifest_440(F->up, F->l_486, &(*(P173)rt_nil_check(F->c_488)).mlo_, &F->ok_1690);
f_manifest_440(F->up, F->h_487, &(*(P173)rt_nil_check(F->c_488)).mhi_, &F->ok2_1691);
if ((f_is_char_lit_669(F->up, F->l_486) && f_is_char_lit_669(F->up, F->h_487))) {
(*(P173)rt_nil_check(F->c_488)).mlo_ = rt_sub(((rt_int)(({ rt_gstr ix1692 = (*(P135)rt_nil_check((*(P169)rt_nil_check(F->l_486)).name_)); ix1692.p[rt_index(((rt_int)1LL), ix1692.lo, ix1692.hi) - ix1692.lo]; })) + 1), ((rt_int)1LL));
(*(P173)rt_nil_check(F->c_488)).mhi_ = rt_sub(((rt_int)(({ rt_gstr ix1693 = (*(P135)rt_nil_check((*(P169)rt_nil_check(F->h_487)).name_)); ix1693.p[rt_index(((rt_int)1LL), ix1693.lo, ix1693.hi) - ix1693.lo]; })) + 1), ((rt_int)1LL));
F->ok_1690 = 1;
F->ok2_1691 = 1;
}
(*(P173)rt_nil_check(F->c_488)).hasm_ = (F->ok_1690 && F->ok2_1691);
ret_:

  return;
}

static void f_elem_ctype_492(struct f_greenc_1fr *up_, P117 t_490, P135 *r_491) {
  struct f_elem_ctype_492fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_490 = t_490;
F->r_491 = r_491;
if (((*(P117)rt_nil_check(F->t_490)).kind_ == ((rt_int)11LL))) {
(*F->r_491) = f_mk_203(F->up, rt_g_lit("unsigned char", 13));
} else {
f_ctype_428(F->up, F->t_490, &(*F->r_491));
}
ret_:

  return;
}

static void f_first_index_495(struct f_greenc_1fr *up_, P117 t_493, P135 *r_494) {
  struct f_first_index_495fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_493 = t_493;
F->r_494 = r_494;
if ((((*(P117)rt_nil_check(F->t_493)).tcons_ != NULL) && ((*(P173)rt_nil_check((*(P117)rt_nil_check(F->t_493)).tcons_)).lo_ != NULL))) {
(*F->r_494) = (*(P173)rt_nil_check((*(P117)rt_nil_check(F->t_493)).tcons_)).lo_;
} else if ((((*(P117)rt_nil_check(F->t_493)).idx_ != NULL) && ((*(P117)rt_nil_check((*(P117)rt_nil_check(F->t_493)).idx_)).kind_ == ((rt_int)1LL)))) {
(*F->r_494) = f_mk_203(F->up, rt_g_lit("1", 1));
} else {
(*F->r_494) = f_mk_203(F->up, rt_g_lit("0", 1));
}
ret_:

  return;
}

static int f_is_string_497(struct f_greenc_1fr *up_, P117 t_496) {
  struct f_is_string_497fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_496 = t_496;
F->result_ = (((F->t_496 != NULL) && ((*(P117)rt_nil_check(F->t_496)).kind_ == ((rt_int)6LL))) && f_derived_from_399(F->up, F->t_496, F->up->ty_string_155));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_subst_500(struct f_greenc_1fr *up_, rt_gstr s_498, rt_gstr r_499) {
  struct f_subst_500fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_498 = cp_rt_gstr(s_498);
F->r_499 = cp_rt_gstr(r_499);
{ rt_int lo1698 = ({ rt_gstr at1695 = F->s_498; at1695.lo; }), hi1699 = rt_sub(({ rt_gstr at1696 = F->s_498; at1696.hi; }), ((rt_int)1LL));
for (rt_int it1700 = lo1698; it1700 <= hi1699; it1700++) {
F->i_1697 = it1700;
if (((({ rt_gstr ix1701 = F->s_498; ix1701.p[rt_index(F->i_1697, ix1701.lo, ix1701.hi) - ix1701.lo]; }) == 64) && (({ rt_gstr ix1702 = F->s_498; ix1702.p[rt_index(rt_add(F->i_1697, ((rt_int)1LL)), ix1702.lo, ix1702.hi) - ix1702.lo]; }) == 64))) {
F->result_ = cat_rt_gstr(cat_rt_gstr(({ rt_gstr sl1704 = F->s_498; rt_int l_ = ({ rt_gstr at1703 = F->s_498; at1703.lo; }), h_ = rt_sub(F->i_1697, ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl1704.lo, sl1704.hi); rt_index(h_, sl1704.lo, sl1704.hi); } sl1704.p += l_ - sl1704.lo; sl1704.lo = l_; sl1704.hi = h_; sl1704; }), F->r_499), f_subst_500(F->up, ({ rt_gstr sl1708 = F->s_498; rt_int l_ = rt_add(F->i_1697, ((rt_int)2LL)), h_ = ({ rt_gstr at1707 = F->s_498; at1707.hi; }); if (l_ <= h_) { rt_index(l_, sl1708.lo, sl1708.hi); rt_index(h_, sl1708.lo, sl1708.hi); } sl1708.p += l_ - sl1708.lo; sl1708.lo = l_; sl1708.hi = h_; sl1708; }), F->r_499));
goto ret_;
}
}
}
L_end_1694: ;
F->result_ = F->s_498;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_mentions_record_502(struct f_greenc_1fr *up_, P135 s_501) {
  struct f_mentions_record_502fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_501 = s_501;
if ((F->s_501 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1712 = ((rt_int)1LL), hi1713 = rt_sub(({ rt_gstr at1710 = (*(P135)rt_nil_check(F->s_501)); at1710.hi >= at1710.lo ? at1710.hi - at1710.lo + 1 : (rt_int)0; }), ((rt_int)1LL));
for (rt_int it1714 = lo1712; it1714 <= hi1713; it1714++) {
F->i_1711 = it1714;
if (((({ rt_gstr ix1715 = (*(P135)rt_nil_check(F->s_501)); ix1715.p[rt_index(F->i_1711, ix1715.lo, ix1715.hi) - ix1715.lo]; }) == 64) && (({ rt_gstr ix1716 = (*(P135)rt_nil_check(F->s_501)); ix1716.p[rt_index(rt_add(F->i_1711, ((rt_int)1LL)), ix1716.lo, ix1716.hi) - ix1716.lo]; }) == 64))) {
F->result_ = 1;
goto ret_;
}
}
}
L_end_1709: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_subst_cons_506(struct f_greenc_1fr *up_, P173 c_503, rt_gstr r_504, P173 *res_505) {
  struct f_subst_cons_506fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_503 = c_503;
F->r_504 = cp_rt_gstr(r_504);
F->res_505 = res_505;
if (((F->c_503 == NULL) || (!(f_mentions_record_502(F->up, (*(P173)rt_nil_check(F->c_503)).lo_) || f_mentions_record_502(F->up, (*(P173)rt_nil_check(F->c_503)).hi_))))) {
(*F->res_505) = F->c_503;
goto ret_;
}
(*F->res_505) = f_new_cons_417(F->up);
as_R174(&(*(P173)rt_nil_check((*F->res_505))), (*(P173)rt_nil_check(F->c_503)));
(*(P173)rt_nil_check((*F->res_505))).lo_ = f_mk_203(F->up, f_subst_500(F->up, (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_503)).lo_)), F->r_504));
(*(P173)rt_nil_check((*F->res_505))).hi_ = f_mk_203(F->up, f_subst_500(F->up, (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_503)).hi_)), F->r_504));
ret_:

  return;
}

static void f_remove_sym_508(struct f_greenc_1fr *up_, P112 y_507) {
  struct f_remove_sym_508fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_507 = y_507;
F->h_1717 = f_hash_379(F->up, (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_507)).name_)));
F->p_1718 = NULL;
if ((({ A111 ix1719 = F->up->table_114; ix1719.p[rt_index(F->h_1717, ix1719.lo, ix1719.hi) - ix1719.lo]; }) == F->y_507)) {
(*({ A111 *ix1720 = &(F->up->table_114); &ix1720->p[rt_index(F->h_1717, ix1720->lo, ix1720->hi) - ix1720->lo]; })) = (*(P112)rt_nil_check(F->y_507)).chain_;
} else {
F->p_1718 = ({ A111 ix1721 = F->up->table_114; ix1721.p[rt_index(F->h_1717, ix1721.lo, ix1721.hi) - ix1721.lo]; });
while (((F->p_1718 != NULL) && ((*(P112)rt_nil_check(F->p_1718)).chain_ != F->y_507))) {
F->p_1718 = (*(P112)rt_nil_check(F->p_1718)).chain_;
}
L_end_1722: ;
if ((F->p_1718 != NULL)) {
(*(P112)rt_nil_check(F->p_1718)).chain_ = (*(P112)rt_nil_check(F->y_507)).chain_;
}
}
if ((F->up->scope_stack_116 == F->y_507)) {
F->up->scope_stack_116 = (*(P112)rt_nil_check(F->y_507)).stack_;
} else {
F->p_1718 = F->up->scope_stack_116;
while (((F->p_1718 != NULL) && ((*(P112)rt_nil_check(F->p_1718)).stack_ != F->y_507))) {
F->p_1718 = (*(P112)rt_nil_check(F->p_1718)).stack_;
}
L_end_1723: ;
if ((F->p_1718 != NULL)) {
(*(P112)rt_nil_check(F->p_1718)).stack_ = (*(P112)rt_nil_check(F->y_507)).stack_;
}
}
ret_:

  return;
}

static void f_record_components_513(struct f_greenc_1fr *up_, P169 list_509, P117 t_510, P1724 g_511, rt_int line_512) {
  struct f_record_components_513fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->list_509 = list_509;
F->t_510 = t_510;
F->g_511 = g_511;
F->line_512 = line_512;
F->comp_1726 = NULL;
F->comp_1726 = F->list_509;
F->f_1727 = NULL;
F->tail_1728 = NULL;
F->df_1729 = NULL;
F->prev_1730 = NULL;
F->pt_1731 = NULL;
F->vt_1732 = NULL;
F->pc_1733 = NULL;
F->y_1734 = NULL;
F->acc_1735 = NULL;
F->v_1736 = NULL;
F->x_1737 = NULL;
F->arm_1738 = NULL;
F->g2_1739 = NULL;
F->tail_1728 = (*(P117)rt_nil_check(F->t_510)).fields_;
while (((F->tail_1728 != NULL) && ((*(P1600)rt_nil_check(F->tail_1728)).next_ != NULL))) {
F->tail_1728 = (*(P1600)rt_nil_check(F->tail_1728)).next_;
}
L_end_1740: ;
while ((F->comp_1726 != NULL)) {
if (((*(P169)rt_nil_check(F->comp_1726)).kind_ == ((rt_int)23LL))) {
F->df_1729 = (*(P117)rt_nil_check(F->t_510)).fields_;
while (((F->df_1729 != NULL) && (!eq_rt_gstr((*(P135)rt_nil_check((*(P1600)rt_nil_check(F->df_1729)).name_)), (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->comp_1726)).a_)).name_)))))) {
F->df_1729 = (*(P1600)rt_nil_check(F->df_1729)).next_;
}
L_end_1742: ;
if (((F->df_1729 == NULL) || (!(*(P1600)rt_nil_check(F->df_1729)).is_discr_))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->comp_1726)).line_, cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->comp_1726)).a_)).name_)), rt_g_lit(" is not a discriminant: a constant component ", 45)), rt_g_lit("without a value (RM79 3.7.1)", 28)));
}
if ((!f_is_discrete_403(F->up, (*(P1600)rt_nil_check(F->df_1729)).t_))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->comp_1726)).line_, rt_g_lit("the discriminant of a variant part is of a discrete type (RM79 3.7.2)", 69));
}
F->arm_1738 = (*(P169)rt_nil_check(F->comp_1726)).b_;
while ((F->arm_1738 != NULL)) {
F->g2_1739 = ({ R1725 *cell1744 = rt_alloc(sizeof(R1725)); *cell1744 = cp_R1725(({ R1725 ag1745; ag1745.disc_ = (*(P1600)rt_nil_check(F->df_1729)).name_; ag1745.arm_ = F->arm_1738; ag1745.variant_ = F->comp_1726; ag1745.next_ = F->g_511; ag1745; })); (P1724)cell1744; });
f_record_components_513(F->up, (*(P169)rt_nil_check(F->arm_1738)).b_, F->t_510, F->g2_1739, F->line_512);
F->arm_1738 = (*(P169)rt_nil_check(F->arm_1738)).next_;
}
L_end_1743: ;
F->tail_1728 = (*(P117)rt_nil_check(F->t_510)).fields_;
while (((F->tail_1728 != NULL) && ((*(P1600)rt_nil_check(F->tail_1728)).next_ != NULL))) {
F->tail_1728 = (*(P1600)rt_nil_check(F->tail_1728)).next_;
}
L_end_1746: ;
} else {
if ((f_field_index_823(F->up, F->t_510, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->comp_1726)).name_))) != ((rt_int)0LL))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->comp_1726)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("component ", 10), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->comp_1726)).name_))), rt_g_lit(" is declared twice (RM79 3.7)", 29)));
}
F->f_1727 = ({ R1601 *cell1747 = rt_alloc(sizeof(R1601)); *cell1747 = cp_R1601(({ R1601 ag1748; ag1748.name_ = (*(P169)rt_nil_check(F->comp_1726)).name_; ag1748.t_ = NULL; ag1748.c_ = NULL; ag1748.next_ = NULL; ag1748.dflt_ = (*(P169)rt_nil_check(F->comp_1726)).b_; ag1748.is_const_ = ((*(P169)rt_nil_check(F->comp_1726)).flag_ == ((rt_int)1LL)); ag1748.is_discr_ = 0; ag1748.dsym_ = NULL; ag1748.guard_ = F->g_511; ag1748.cond_ = NULL; ag1748.dyn_ = 0; ag1748; })); (P1600)cell1747; });
if ((((*(P169)rt_nil_check(F->comp_1726)).a_ == F->prev_1730) && ((*(P169)rt_nil_check((*(P169)rt_nil_check(F->comp_1726)).a_)).kind_ != ((rt_int)80LL)))) {
(*(P1600)rt_nil_check(F->f_1727)).t_ = F->pt_1731;
(*(P1600)rt_nil_check(F->f_1727)).c_ = F->pc_1733;
} else {
f_resolve_444(F->up, (*(P169)rt_nil_check(F->comp_1726)).a_, &(*(P1600)rt_nil_check(F->f_1727)).t_, &(*(P1600)rt_nil_check(F->f_1727)).c_);
}
F->prev_1730 = (*(P169)rt_nil_check(F->comp_1726)).a_;
F->pt_1731 = (*(P1600)rt_nil_check(F->f_1727)).t_;
F->pc_1733 = (*(P1600)rt_nil_check(F->f_1727)).c_;
if ((((*(P1600)rt_nil_check(F->f_1727)).c_ != NULL) && (f_mentions_record_502(F->up, (*(P173)rt_nil_check((*(P1600)rt_nil_check(F->f_1727)).c_)).lo_) || f_mentions_record_502(F->up, (*(P173)rt_nil_check((*(P1600)rt_nil_check(F->f_1727)).c_)).hi_)))) {
(*(P1600)rt_nil_check(F->f_1727)).dyn_ = 1;
if (((*(P117)rt_nil_check((*(P1600)rt_nil_check(F->f_1727)).t_)).kind_ != ((rt_int)6LL))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->comp_1726)).line_, rt_g_lit("a discriminant is used only as an array bound or a variant selector (RM79 3.7.1)", 80));
}
if (((*(P117)rt_nil_check((*(P1600)rt_nil_check(F->f_1727)).t_)).tcons_ == (*(P1600)rt_nil_check(F->f_1727)).c_)) {
(*(P117)rt_nil_check((*(P1600)rt_nil_check(F->f_1727)).t_)).tcons_ = NULL;
}
}
if ((F->g_511 != NULL)) {
f_guard_cond_517(F->up, F->g_511, (*(P1600)rt_nil_check(F->f_1727)).t_, &F->x_1737);
(*(P1600)rt_nil_check(F->f_1727)).cond_ = F->x_1737;
}
if (((*(P169)rt_nil_check(F->comp_1726)).b_ != NULL)) {
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->comp_1726)).b_, (*(P1600)rt_nil_check(F->f_1727)).t_, &F->vt_1732, &F->v_1736);
f_check_type_423(F->up, F->vt_1732, (*(P1600)rt_nil_check(F->f_1727)).t_, (*(P169)rt_nil_check(F->comp_1726)).line_);
F->y_1734 = f_new_sym_414(F->up, ((rt_int)2LL), f_mk_203(F->up, rt_g_lit("dflt", 4)));
f_storage_565(F->up, rt_g_lit("dflt", 4), (*(P1600)rt_nil_check(F->f_1727)).t_, &F->acc_1735);
(*(P112)rt_nil_check(F->y_1734)).t_ = (*(P1600)rt_nil_check(F->f_1727)).t_;
(*(P112)rt_nil_check(F->y_1734)).c_ = (*(P1600)rt_nil_check(F->f_1727)).c_;
f_bind_568(F->up, F->y_1734, F->acc_1735);
if ((f_composite_540(F->up, (*(P1600)rt_nil_check(F->f_1727)).t_) && (((*(P1600)rt_nil_check(F->f_1727)).c_ == NULL) || ((*(P173)rt_nil_check((*(P1600)rt_nil_check(F->f_1727)).c_)).lo_ == NULL)))) {
f_copy_code_550(F->up, (*(P1600)rt_nil_check(F->f_1727)).t_, (*(P135)rt_nil_check(F->v_1736)), &F->x_1737);
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->acc_1735)), rt_g_lit(" = ", 3)), (*(P135)rt_nil_check(F->x_1737))), one_rt_gstr(59)));
} else {
f_init_storage_538(F->up, (*(P135)rt_nil_check(F->acc_1735)), (*(P1600)rt_nil_check(F->f_1727)).t_, (*(P1600)rt_nil_check(F->f_1727)).c_);
f_assign_code_546(F->up, (*(P135)rt_nil_check(F->acc_1735)), (*(P1600)rt_nil_check(F->f_1727)).t_, (*(P135)rt_nil_check(F->v_1736)), (*(P1600)rt_nil_check(F->f_1727)).c_, &F->x_1737);
f_emit_230(F->up, (*(P135)rt_nil_check(F->x_1737)));
}
(*(P1600)rt_nil_check(F->f_1727)).dsym_ = F->y_1734;
} else if ((*(P1600)rt_nil_check(F->f_1727)).is_const_) {
(*(P1600)rt_nil_check(F->f_1727)).is_discr_ = 1;
F->y_1734 = f_new_sym_414(F->up, ((rt_int)2LL), (*(P1600)rt_nil_check(F->f_1727)).name_);
(*(P112)rt_nil_check(F->y_1734)).t_ = (*(P1600)rt_nil_check(F->f_1727)).t_;
(*(P112)rt_nil_check(F->y_1734)).c_ = (*(P1600)rt_nil_check(F->f_1727)).c_;
(*(P112)rt_nil_check(F->y_1734)).ro_ = 1;
(*(P112)rt_nil_check(F->y_1734)).access_path_ = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(@@.", 4), f_c_field_220(F->up, (*(P135)rt_nil_check((*(P1600)rt_nil_check(F->f_1727)).name_)))), one_rt_gstr(41)));
F->up->depth_115 = rt_add(F->up->depth_115, ((rt_int)1LL));
f_define_409(F->up, F->y_1734, (*(P169)rt_nil_check(F->comp_1726)).line_);
F->up->depth_115 = rt_sub(F->up->depth_115, ((rt_int)1LL));
(*(P112)rt_nil_check(F->y_1734)).mnext_ = F->up->disc_syms_177;
F->up->disc_syms_177 = F->y_1734;
}
if ((F->tail_1728 == NULL)) {
(*(P117)rt_nil_check(F->t_510)).fields_ = F->f_1727;
} else {
(*(P1600)rt_nil_check(F->tail_1728)).next_ = F->f_1727;
}
F->tail_1728 = F->f_1727;
}
F->comp_1726 = (*(P169)rt_nil_check(F->comp_1726)).next_;
}
L_end_1741: ;
ret_:

  return;
}

static void f_guard_cond_517(struct f_greenc_1fr *up_, P1724 g_514, P117 t_515, P135 *r_516) {
  struct f_guard_cond_517fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->g_514 = g_514;
F->t_515 = t_515;
F->r_516 = r_516;
F->a_1749 = NULL;
F->l_1750 = NULL;
F->df_1751 = NULL;
F->x_1752 = NULL;
F->d_1753 = NULL;
F->dt_1754 = NULL;
F->vt_1755 = NULL;
F->lo_1756 = NULL;
F->hi_1757 = NULL;
(*F->r_516) = f_mk_203(F->up, rt_g_lit("1", 1));
if ((F->g_514 == NULL)) {
goto ret_;
}
F->d_1753 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(@@.", 4), f_c_field_220(F->up, (*(P135)rt_nil_check((*(P1724)rt_nil_check(F->g_514)).disc_)))), one_rt_gstr(41)));
F->df_1751 = NULL;
if (((*(P169)rt_nil_check((*(P1724)rt_nil_check(F->g_514)).arm_)).flag_ == ((rt_int)1LL))) {
F->x_1752 = f_mk_203(F->up, rt_g_lit("0", 1));
F->a_1749 = (*(P169)rt_nil_check((*(P1724)rt_nil_check(F->g_514)).variant_)).b_;
while ((F->a_1749 != NULL)) {
if ((F->a_1749 != (*(P1724)rt_nil_check(F->g_514)).arm_)) {
f_arm_test_522(F->up, F->a_1749, (*(P1724)rt_nil_check(F->g_514)).disc_, (*(P135)rt_nil_check(F->d_1753)), &F->x_1752);
}
F->a_1749 = (*(P169)rt_nil_check(F->a_1749)).next_;
}
L_end_1758: ;
F->x_1752 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("!(", 2), (*(P135)rt_nil_check(F->x_1752))), one_rt_gstr(41)));
} else {
F->x_1752 = f_mk_203(F->up, rt_g_lit("0", 1));
f_arm_test_522(F->up, (*(P1724)rt_nil_check(F->g_514)).arm_, (*(P1724)rt_nil_check(F->g_514)).disc_, (*(P135)rt_nil_check(F->d_1753)), &F->x_1752);
}
f_guard_cond_517(F->up, (*(P1724)rt_nil_check(F->g_514)).next_, F->t_515, &(*F->r_516));
(*F->r_516) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P135)rt_nil_check((*F->r_516)))), rt_g_lit(" && (", 5)), (*(P135)rt_nil_check(F->x_1752))), rt_g_lit("))", 2)));
ret_:

  return;
}

static void f_arm_test_522(struct f_greenc_1fr *up_, P169 arm_518, P135 dname_519, rt_gstr d_520, P135 *x_521) {
  struct f_arm_test_522fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->arm_518 = arm_518;
F->dname_519 = dname_519;
F->d_520 = cp_rt_gstr(d_520);
F->x_521 = x_521;
F->l_1759 = NULL;
F->l_1759 = (*(P169)rt_nil_check(F->arm_518)).a_;
F->y_1760 = NULL;
F->y_1760 = f_lookup_381(F->up, (*(P135)rt_nil_check(F->dname_519)));
F->dt_1761 = NULL;
F->vt_1762 = NULL;
F->lo_1763 = NULL;
F->hi_1764 = NULL;
F->dt_1761 = (*(P112)rt_nil_check(F->y_1760)).t_;
while ((F->l_1759 != NULL)) {
if (((*(P169)rt_nil_check(F->l_1759)).b_ == NULL)) {
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->l_1759)).a_, F->dt_1761, &F->vt_1762, &F->lo_1763);
f_check_type_423(F->up, F->vt_1762, F->dt_1761, (*(P169)rt_nil_check(F->l_1759)).line_);
(*F->x_521) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check((*F->x_521))), rt_g_lit(" || ", 4)), F->d_520), rt_g_lit(" == ", 4)), (*(P135)rt_nil_check(F->lo_1763))));
} else {
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->l_1759)).a_, F->dt_1761, &F->vt_1762, &F->lo_1763);
f_check_type_423(F->up, F->vt_1762, F->dt_1761, (*(P169)rt_nil_check(F->l_1759)).line_);
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->l_1759)).b_, F->dt_1761, &F->vt_1762, &F->hi_1764);
f_check_type_423(F->up, F->vt_1762, F->dt_1761, (*(P169)rt_nil_check(F->l_1759)).line_);
(*F->x_521) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check((*F->x_521))), rt_g_lit(" || (", 5)), F->d_520), rt_g_lit(" >= ", 4)), (*(P135)rt_nil_check(F->lo_1763))), rt_g_lit(" && ", 4)), F->d_520), rt_g_lit(" <= ", 4)), (*(P135)rt_nil_check(F->hi_1764))), one_rt_gstr(41)));
}
F->l_1759 = (*(P169)rt_nil_check(F->l_1759)).next_;
}
L_end_1765: ;
ret_:

  return;
}

static void f_derived_type_527(struct f_greenc_1fr *up_, P169 d_523, P135 name_524, P117 *t_525, P173 *c_526) {
  struct f_derived_type_527fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_523 = d_523;
F->name_524 = name_524;
F->t_525 = t_525;
F->c_526 = c_526;
F->pt_1766 = NULL;
F->ct_1767 = NULL;
F->ph_1768 = NULL;
F->ph_1768 = F->up->completing_168;
F->up->completing_168 = NULL;
f_resolve_444(F->up, (*(P169)rt_nil_check(F->d_523)).a_, &F->pt_1766, &(*F->c_526));
if ((((*(P117)rt_nil_check(F->pt_1766)).kind_ == ((rt_int)9LL)) && (*(P117)rt_nil_check(F->pt_1766)).priv_)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->d_523)).line_, rt_g_lit("a type cannot be derived from a private type before its full declaration", 72));
}
if ((f_composite_540(F->up, F->pt_1766) || ((*(P117)rt_nil_check(F->pt_1766)).kind_ == ((rt_int)8LL)))) {
f_ctype_428(F->up, F->pt_1766, &F->ct_1767);
}
if ((F->ph_1768 == NULL)) {
(*F->t_525) = f_new_typ_416(F->up, (*(P117)rt_nil_check(F->pt_1766)).kind_);
} else {
(*F->t_525) = F->ph_1768;
}
as_R118(&(*(P117)rt_nil_check((*F->t_525))), (*(P117)rt_nil_check(F->pt_1766)));
(*(P117)rt_nil_check((*F->t_525))).name_ = F->name_524;
(*(P117)rt_nil_check((*F->t_525))).parent_ = F->pt_1766;
(*(P117)rt_nil_check((*F->t_525))).next_ = NULL;
if (((*(P117)rt_nil_check((*F->t_525))).kind_ == ((rt_int)4LL))) {
f_derive_literals_473(F->up, (*F->t_525), (*(P169)rt_nil_check(F->d_523)).line_);
}
f_inherit_470(F->up, F->pt_1766, (*F->t_525), (*(P169)rt_nil_check(F->d_523)).line_);
ret_:

  return;
}

static void f_real_type_532(struct f_greenc_1fr *up_, P169 d_528, P135 name_529, P117 *t_530, P173 *c_531) {
  struct f_real_type_532fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_528 = d_528;
F->name_529 = name_529;
F->t_530 = t_530;
F->c_531 = c_531;
F->dt_1769 = NULL;
F->dv_1770 = NULL;
(*F->c_531) = f_new_cons_417(F->up);
if (((*(P169)rt_nil_check(F->d_528)).flag_ == ((rt_int)1LL))) {
f_manifest_440(F->up, (*(P169)rt_nil_check(F->d_528)).a_, &F->n_1771, &F->ok_1772);
if ((!F->ok_1772)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->d_528)).line_, rt_g_lit("the digits of a floating point type are static (RM79 3.5.5)", 59));
}
if (((F->n_1771 < ((rt_int)1LL)) || (F->n_1771 > ((rt_int)15LL)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->d_528)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("no predefined floating point type has ", 38), rt_g_s2g(rt_str_of_int(F->n_1771))), rt_g_lit(" digits", 7)));
}
f_fresh_typ_466(F->up, ((rt_int)3LL), F->name_529, &(*F->t_530));
(*(P117)rt_nil_check((*F->t_530))).ndigits_ = F->n_1771;
if ((F->n_1771 <= ((rt_int)6LL))) {
(*(P117)rt_nil_check((*F->t_530))).parent_ = F->up->ty_sfloat_164;
} else {
(*(P117)rt_nil_check((*F->t_530))).parent_ = F->up->ty_float_153;
}
} else {
if (((*(P169)rt_nil_check(F->d_528)).b_ == NULL)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->d_528)).line_, rt_g_lit("a fixed point type needs a range (RM79 3.5.5)", 45));
}
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->d_528)).a_, F->up->ty_float_153, &F->dt_1769, &F->dv_1770);
if (((*(P117)rt_nil_check(F->dt_1769)).kind_ != ((rt_int)3LL))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->d_528)).line_, rt_g_lit("the delta of a fixed point type is a real number (RM79 3.5.5)", 61));
}
f_fresh_typ_466(F->up, ((rt_int)16LL), F->name_529, &(*F->t_530));
(*(P117)rt_nil_check((*F->t_530))).fdelta_ = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P135)rt_nil_check(F->dv_1770))), one_rt_gstr(41)));
(*(P117)rt_nil_check((*F->t_530))).fsmall_ = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_small(", 11), (*(P135)rt_nil_check(F->dv_1770))), one_rt_gstr(41)));
}
if (((*(P169)rt_nil_check(F->d_528)).b_ != NULL)) {
f_range_of_462(F->up, (*(P169)rt_nil_check(F->d_528)).b_, (*F->t_530), (*F->c_531));
}
if (((*(P117)rt_nil_check((*F->t_530))).parent_ != NULL)) {
f_inherit_470(F->up, (*(P117)rt_nil_check((*F->t_530))).parent_, (*F->t_530), (*(P169)rt_nil_check(F->d_528)).line_);
}
ret_:

  return;
}

static void f_finish_ptr_534(struct f_greenc_1fr *up_, P117 t_533) {
  struct f_finish_ptr_534fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_533 = t_533;
F->c_1773 = NULL;
if ((((*(P117)rt_nil_check(F->t_533)).target_ == NULL) && ((*(P117)rt_nil_check(F->t_533)).decl_ != NULL))) {
f_resolve_444(F->up, (*(P117)rt_nil_check(F->t_533)).decl_, &(*(P117)rt_nil_check(F->t_533)).target_, &F->c_1773);
}
ret_:

  return;
}

static void f_init_storage_538(struct f_greenc_1fr *up_, rt_gstr lval_535, P117 t_536, P173 c_537) {
  struct f_init_storage_538fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lval_535 = cp_rt_gstr(lval_535);
F->t_536 = t_536;
F->c_537 = c_537;
F->ec_1774 = NULL;
F->fc_1775 = NULL;
F->d_1776 = NULL;
F->ct_1777 = NULL;
F->i_1778 = NULL;
F->v_1779 = NULL;
F->x_1780 = NULL;
F->vt_1781 = NULL;
F->f_1782 = NULL;
if (((*(P117)rt_nil_check(F->t_536)).kind_ == ((rt_int)8LL))) {
f_emit_230(F->up, cat_rt_gstr(F->lval_535, rt_g_lit(" = NULL;", 8)));
} else if (((*(P117)rt_nil_check(F->t_536)).kind_ == ((rt_int)6LL))) {
if (((F->c_537 == NULL) || ((*(P173)rt_nil_check(F->c_537)).lo_ == NULL))) {
f_fail_224(F->up, ((rt_int)0LL), rt_g_lit("an array object needs an index constraint (RM79 3.6)", 52));
}
f_elem_ctype_492(F->up, (*(P117)rt_nil_check(F->t_536)).elem_, &F->ct_1777);
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_535, rt_g_lit(".lo = ", 6)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_537)).lo_))), rt_g_lit("; ", 2)), F->lval_535), rt_g_lit(".hi = ", 6)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_537)).hi_))), one_rt_gstr(59)));
F->ec_1774 = (*(P117)rt_nil_check(F->t_536)).elemcons_;
if (((((*(P117)rt_nil_check(F->t_536)).dims_ > ((rt_int)1LL)) && ((*(P173)rt_nil_check(F->c_537)).inner_ != NULL)) && ((*(P173)rt_nil_check((*(P173)rt_nil_check(F->c_537)).inner_)).lo_ != NULL))) {
F->ec_1774 = (*(P173)rt_nil_check(F->c_537)).inner_;
}
if (((((*(P117)rt_nil_check(F->t_536)).dims_ > ((rt_int)1LL)) && (F->ec_1774 != NULL)) && ((*(P173)rt_nil_check(F->ec_1774)).lo_ != NULL))) {
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_535, rt_g_lit(".lo2 = ", 7)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->ec_1774)).lo_))), rt_g_lit("; ", 2)), F->lval_535), rt_g_lit(".hi2 = ", 7)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->ec_1774)).hi_))), one_rt_gstr(59)));
} else {
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_535, rt_g_lit(".lo2 = 1; ", 10)), F->lval_535), rt_g_lit(".hi2 = 1;", 9)));
}
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_535, rt_g_lit(".p = rt_alloc(sizeof(", 21)), (*(P135)rt_nil_check(F->ct_1777))), rt_g_lit(") * (size_t)G_CNT(", 18)), F->lval_535), rt_g_lit("));", 3)));
if ((((*(P117)rt_nil_check((*(P117)rt_nil_check(F->t_536)).elem_)).kind_ == ((rt_int)6LL)) || ((*(P117)rt_nil_check((*(P117)rt_nil_check(F->t_536)).elem_)).kind_ == ((rt_int)7LL)))) {
f_new_name_206(F->up, rt_g_lit("i", 1), &F->i_1778);
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P135)rt_nil_check(F->i_1778))), rt_g_lit(" = 0; ", 6)), (*(P135)rt_nil_check(F->i_1778))), rt_g_lit(" < G_CNT(", 9)), F->lval_535), rt_g_lit("); ", 3)), (*(P135)rt_nil_check(F->i_1778))), rt_g_lit("++) {", 5)));
f_init_storage_538(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_535, rt_g_lit(".p[", 3)), (*(P135)rt_nil_check(F->i_1778))), one_rt_gstr(93)), (*(P117)rt_nil_check(F->t_536)).elem_, F->ec_1774);
f_emit_230(F->up, rt_g_lit("}", 1));
}
} else if (((*(P117)rt_nil_check(F->t_536)).kind_ == ((rt_int)7LL))) {
if ((F->c_537 != NULL)) {
F->d_1776 = (*(P173)rt_nil_check(F->c_537)).dv_;
while ((F->d_1776 != NULL)) {
F->f_1782 = (*(P117)rt_nil_check(F->t_536)).fields_;
while ((!eq_rt_gstr((*(P135)rt_nil_check((*(P1600)rt_nil_check(F->f_1782)).name_)), (*(P135)rt_nil_check((*(P1604)rt_nil_check(F->d_1776)).name_))))) {
F->f_1782 = (*(P1600)rt_nil_check(F->f_1782)).next_;
}
L_end_1784: ;
f_assign_code_546(F->up, cat_rt_gstr(cat_rt_gstr(F->lval_535, one_rt_gstr(46)), f_c_field_220(F->up, (*(P135)rt_nil_check((*(P1600)rt_nil_check(F->f_1782)).name_)))), (*(P1600)rt_nil_check(F->f_1782)).t_, (*(P135)rt_nil_check((*(P1604)rt_nil_check(F->d_1776)).v_)), (*(P1600)rt_nil_check(F->f_1782)).c_, &F->x_1780);
f_emit_230(F->up, (*(P135)rt_nil_check(F->x_1780)));
F->d_1776 = (*(P1604)rt_nil_check(F->d_1776)).next_;
}
L_end_1783: ;
}
F->f_1782 = (*(P117)rt_nil_check(F->t_536)).fields_;
while ((F->f_1782 != NULL)) {
f_subst_cons_506(F->up, (*(P1600)rt_nil_check(F->f_1782)).c_, F->lval_535, &F->fc_1775);
if (((*(P1600)rt_nil_check(F->f_1782)).dyn_ && ((F->c_537 == NULL) || ((*(P173)rt_nil_check(F->c_537)).dv_ == NULL)))) {
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_535, one_rt_gstr(46)), f_c_field_220(F->up, (*(P135)rt_nil_check((*(P1600)rt_nil_check(F->f_1782)).name_)))), rt_g_lit(".lo = 1; ", 9)), F->lval_535), one_rt_gstr(46)), f_c_field_220(F->up, (*(P135)rt_nil_check((*(P1600)rt_nil_check(F->f_1782)).name_)))), rt_g_lit(".hi = 0; ", 9)), F->lval_535), one_rt_gstr(46)), f_c_field_220(F->up, (*(P135)rt_nil_check((*(P1600)rt_nil_check(F->f_1782)).name_)))), rt_g_lit(".lo2 = ", 7)), F->lval_535), one_rt_gstr(46)), f_c_field_220(F->up, (*(P135)rt_nil_check((*(P1600)rt_nil_check(F->f_1782)).name_)))), rt_g_lit(".hi2 = 1; ", 10)), F->lval_535), one_rt_gstr(46)), f_c_field_220(F->up, (*(P135)rt_nil_check((*(P1600)rt_nil_check(F->f_1782)).name_)))), rt_g_lit(".p = NULL;", 10)));
} else if ((!(*(P1600)rt_nil_check(F->f_1782)).is_discr_)) {
f_init_storage_538(F->up, cat_rt_gstr(cat_rt_gstr(F->lval_535, one_rt_gstr(46)), f_c_field_220(F->up, (*(P135)rt_nil_check((*(P1600)rt_nil_check(F->f_1782)).name_)))), (*(P1600)rt_nil_check(F->f_1782)).t_, F->fc_1775);
}
if (((*(P1600)rt_nil_check(F->f_1782)).dsym_ != NULL)) {
f_access_of_630(F->up, (*(P1600)rt_nil_check(F->f_1782)).dsym_, &F->v_1779);
f_assign_code_546(F->up, cat_rt_gstr(cat_rt_gstr(F->lval_535, one_rt_gstr(46)), f_c_field_220(F->up, (*(P135)rt_nil_check((*(P1600)rt_nil_check(F->f_1782)).name_)))), (*(P1600)rt_nil_check(F->f_1782)).t_, (*(P135)rt_nil_check(F->v_1779)), F->fc_1775, &F->x_1780);
f_emit_230(F->up, (*(P135)rt_nil_check(F->x_1780)));
}
F->f_1782 = (*(P1600)rt_nil_check(F->f_1782)).next_;
}
L_end_1785: ;
}
ret_:

  return;
}

static int f_composite_540(struct f_greenc_1fr *up_, P117 t_539) {
  struct f_composite_540fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_539 = t_539;
F->result_ = (((*(P117)rt_nil_check(F->t_539)).kind_ == ((rt_int)6LL)) || ((*(P117)rt_nil_check(F->t_539)).kind_ == ((rt_int)7LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_assign_code_546(struct f_greenc_1fr *up_, rt_gstr lval_541, P117 t_542, rt_gstr v_543, P173 c_544, P135 *r_545) {
  struct f_assign_code_546fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lval_541 = cp_rt_gstr(lval_541);
F->t_542 = t_542;
F->v_543 = cp_rt_gstr(v_543);
F->c_544 = c_544;
F->r_545 = r_545;
F->ct_1786 = NULL;
F->x_1787 = NULL;
F->d_1788 = NULL;
if (((((*(P117)rt_nil_check(F->t_542)).kind_ == ((rt_int)7LL)) && (F->c_544 != NULL)) && ((*(P173)rt_nil_check(F->c_544)).dv_ != NULL))) {
f_ctype_428(F->up, F->t_542, &F->ct_1786);
F->x_1787 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P135)rt_nil_check(F->ct_1786))), rt_g_lit(" dv_ = ", 7)), F->v_543), one_rt_gstr(59)));
F->d_1788 = (*(P173)rt_nil_check(F->c_544)).dv_;
while ((F->d_1788 != NULL)) {
F->x_1787 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->x_1787)), rt_g_lit(" if (dv_.", 9)), f_c_field_220(F->up, (*(P135)rt_nil_check((*(P1604)rt_nil_check(F->d_1788)).name_)))), rt_g_lit(" != (", 5)), (*(P135)rt_nil_check((*(P1604)rt_nil_check(F->d_1788)).v_))), rt_g_lit(")) rt_raise(RT_X_TAG);", 22)));
F->d_1788 = (*(P1604)rt_nil_check(F->d_1788)).next_;
}
L_end_1789: ;
(*F->r_545) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->x_1787)), rt_g_lit(" as_", 4)), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_542)).cname_))), rt_g_lit("(&", 2)), F->lval_541), rt_g_lit(", dv_); }", 9)));
} else if (f_composite_540(F->up, F->t_542)) {
f_ctype_428(F->up, F->t_542, &F->ct_1786);
(*F->r_545) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("as_", 3), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_542)).cname_))), rt_g_lit("(&", 2)), F->lval_541), rt_g_lit(", ", 2)), F->v_543), rt_g_lit(");", 2)));
} else if (((((((*(P117)rt_nil_check(F->t_542)).kind_ == ((rt_int)1LL)) || ((*(P117)rt_nil_check(F->t_542)).kind_ == ((rt_int)4LL))) || ((*(P117)rt_nil_check(F->t_542)).kind_ == ((rt_int)11LL))) && (F->c_544 != NULL)) && ((*(P173)rt_nil_check(F->c_544)).lo_ != NULL))) {
(*F->r_545) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_541, rt_g_lit(" = rt_range(", 12)), F->v_543), rt_g_lit(", ", 2)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_544)).lo_))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_544)).hi_))), rt_g_lit(");", 2)));
} else if ((((((*(P117)rt_nil_check(F->t_542)).kind_ == ((rt_int)3LL)) || ((*(P117)rt_nil_check(F->t_542)).kind_ == ((rt_int)16LL))) && (F->c_544 != NULL)) && ((*(P173)rt_nil_check(F->c_544)).lo_ != NULL))) {
(*F->r_545) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_541, rt_g_lit(" = rt_frange(", 13)), F->v_543), rt_g_lit(", ", 2)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_544)).lo_))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_544)).hi_))), rt_g_lit(");", 2)));
} else {
(*F->r_545) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_541, rt_g_lit(" = ", 3)), F->v_543), one_rt_gstr(59)));
}
ret_:

  return;
}

static void f_copy_code_550(struct f_greenc_1fr *up_, P117 t_547, rt_gstr v_548, P135 *r_549) {
  struct f_copy_code_550fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_547 = t_547;
F->v_548 = cp_rt_gstr(v_548);
F->r_549 = r_549;
F->ct_1790 = NULL;
if (f_composite_540(F->up, F->t_547)) {
f_ctype_428(F->up, F->t_547, &F->ct_1790);
(*F->r_549) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("cp_", 3), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_547)).cname_))), one_rt_gstr(40)), F->v_548), one_rt_gstr(41)));
} else {
(*F->r_549) = f_mk_203(F->up, F->v_548);
}
ret_:

  return;
}

static void f_eq_code_555(struct f_greenc_1fr *up_, P117 t_551, rt_gstr a_552, rt_gstr b_553, P135 *r_554) {
  struct f_eq_code_555fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_551 = t_551;
F->a_552 = cp_rt_gstr(a_552);
F->b_553 = cp_rt_gstr(b_553);
F->r_554 = r_554;
F->ct_1791 = NULL;
if (f_composite_540(F->up, F->t_551)) {
f_ctype_428(F->up, F->t_551, &F->ct_1791);
(*F->r_554) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("eq_", 3), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_551)).cname_))), one_rt_gstr(40)), F->a_552), rt_g_lit(", ", 2)), F->b_553), one_rt_gstr(41)));
} else {
(*F->r_554) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_552), rt_g_lit(" == ", 4)), F->b_553), one_rt_gstr(41)));
}
ret_:

  return;
}

static int f_seen_name_558(struct f_greenc_1fr *up_, P146 l_556, rt_gstr s_557) {
  struct f_seen_name_558fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_556 = l_556;
F->s_557 = cp_rt_gstr(s_557);
F->p_1792 = NULL;
F->p_1792 = F->l_556;
while ((F->p_1792 != NULL)) {
if (eq_rt_gstr((*(P135)rt_nil_check((*(P146)rt_nil_check(F->p_1792)).s_)), F->s_557)) {
F->result_ = 1;
goto ret_;
}
F->p_1792 = (*(P146)rt_nil_check(F->p_1792)).next_;
}
L_end_1793: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_emit_helpers_559(struct f_greenc_1fr *up_) {
  struct f_emit_helpers_559fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_1794 = NULL;
F->t_1794 = F->up->all_types_119;
F->et_1795 = NULL;
F->done_1796 = NULL;
F->l_1797 = NULL;
while ((F->t_1794 != NULL)) {
if ((f_composite_540(F->up, F->t_1794) && (!f_seen_name_558(F->up, F->done_1796, (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_1794)).cname_)))))) {
F->l_1797 = ({ R147 *cell1799 = rt_alloc(sizeof(R147)); *cell1799 = cp_R147(({ R147 ag1800; ag1800.s_ = (*(P117)rt_nil_check(F->t_1794)).cname_; ag1800.next_ = F->done_1796; ag1800; })); (P146)cell1799; });
F->done_1796 = F->l_1797;
f_put_to_228(F->up, F->up->out_helpers_125, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void as_", 15), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_1794)).cname_))), one_rt_gstr(40)), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_1794)).cname_))), rt_g_lit(" *d, ", 5)), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_1794)).cname_))), rt_g_lit(" s);", 4)));
f_put_to_228(F->up, F->up->out_helpers_125, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_1794)).cname_))), rt_g_lit(" cp_", 4)), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_1794)).cname_))), one_rt_gstr(40)), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_1794)).cname_))), rt_g_lit(" s);", 4)));
f_put_to_228(F->up, F->up->out_helpers_125, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int eq_", 14), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_1794)).cname_))), one_rt_gstr(40)), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_1794)).cname_))), rt_g_lit(" a, ", 4)), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_1794)).cname_))), rt_g_lit(" b);", 4)));
if ((((*(P117)rt_nil_check(F->t_1794)).kind_ == ((rt_int)6LL)) && ((*(P117)rt_nil_check(F->t_1794)).dims_ == ((rt_int)1LL)))) {
f_ctype_428(F->up, (*(P117)rt_nil_check(F->t_1794)).elem_, &F->et_1795);
f_put_to_228(F->up, F->up->out_helpers_125, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_1794)).cname_))), rt_g_lit(" cat_", 5)), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_1794)).cname_))), one_rt_gstr(40)), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_1794)).cname_))), rt_g_lit(" a, ", 4)), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_1794)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_228(F->up, F->up->out_helpers_125, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_1794)).cname_))), rt_g_lit(" one_", 5)), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_1794)).cname_))), one_rt_gstr(40)), (*(P135)rt_nil_check(F->et_1795))), rt_g_lit(" e);", 4)));
}
f_helper_bodies_561(F->up, F->t_1794);
}
F->t_1794 = (*(P117)rt_nil_check(F->t_1794)).next_;
}
L_end_1798: ;
ret_:

  return;
}

static void f_helper_bodies_561(struct f_greenc_1fr *up_, P117 t_560) {
  struct f_helper_bodies_561fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_560 = t_560;
F->c_1801 = NULL;
F->c_1801 = (*(P117)rt_nil_check(F->t_560)).cname_;
F->b_1802 = NULL;
F->b_1802 = F->up->out_funcs_128;
F->ct_1803 = NULL;
F->et_1804 = NULL;
F->x_1805 = NULL;
F->y_1806 = NULL;
F->conds_1807 = NULL;
F->f_1808 = NULL;
if (((*(P117)rt_nil_check(F->t_560)).kind_ == ((rt_int)6LL))) {
f_elem_ctype_492(F->up, (*(P117)rt_nil_check(F->t_560)).elem_, &F->ct_1803);
f_assign_code_546(F->up, rt_g_lit("d->p[i]", 7), (*(P117)rt_nil_check(F->t_560)).elem_, rt_g_lit("s.p[i]", 6), NULL, &F->x_1805);
f_put_to_228(F->up, F->b_1802, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void as_", 15), (*(P135)rt_nil_check(F->c_1801))), one_rt_gstr(40)), (*(P135)rt_nil_check(F->c_1801))), rt_g_lit(" *d, ", 5)), (*(P135)rt_nil_check(F->c_1801))), rt_g_lit(" s) {", 5)));
f_put_to_228(F->up, F->b_1802, rt_g_lit("  rt_int n = G_CNT(s);", 22));
f_put_to_228(F->up, F->b_1802, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, ", 49), f_q_221(F->up)), rt_g_lit("array length", 12)), f_q_221(F->up)), rt_g_lit(");", 2)));
f_put_to_228(F->up, F->b_1802, rt_g_lit("  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();", 79));
f_put_to_228(F->up, F->b_1802, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < n; i++) { ", 35), (*(P135)rt_nil_check(F->x_1805))), rt_g_lit(" }", 2)));
f_put_to_228(F->up, F->b_1802, rt_g_lit("}", 1));
f_copy_code_550(F->up, (*(P117)rt_nil_check(F->t_560)).elem_, rt_g_lit("s.p[i]", 6), &F->x_1805);
f_put_to_228(F->up, F->b_1802, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P135)rt_nil_check(F->c_1801))), rt_g_lit(" cp_", 4)), (*(P135)rt_nil_check(F->c_1801))), one_rt_gstr(40)), (*(P135)rt_nil_check(F->c_1801))), rt_g_lit(" s) {", 5)));
f_put_to_228(F->up, F->b_1802, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P135)rt_nil_check(F->c_1801))), rt_g_lit(" d = s; d.p = rt_alloc(sizeof(", 30)), (*(P135)rt_nil_check(F->ct_1803))), rt_g_lit(") * (size_t)G_CNT(s));", 22)));
f_put_to_228(F->up, F->b_1802, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = ", 49), (*(P135)rt_nil_check(F->x_1805))), one_rt_gstr(59)));
f_put_to_228(F->up, F->b_1802, rt_g_lit("  return d;", 11));
f_put_to_228(F->up, F->b_1802, rt_g_lit("}", 1));
f_eq_code_555(F->up, (*(P117)rt_nil_check(F->t_560)).elem_, rt_g_lit("a.p[i]", 6), rt_g_lit("b.p[i]", 6), &F->x_1805);
f_put_to_228(F->up, F->b_1802, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int eq_", 14), (*(P135)rt_nil_check(F->c_1801))), one_rt_gstr(40)), (*(P135)rt_nil_check(F->c_1801))), rt_g_lit(" a, ", 4)), (*(P135)rt_nil_check(F->c_1801))), rt_g_lit(" b) {", 5)));
f_put_to_228(F->up, F->b_1802, rt_g_lit("  if (G_CNT(a) != G_CNT(b)) return 0;", 37));
f_put_to_228(F->up, F->b_1802, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < G_CNT(a); i++) if (!(", 46), (*(P135)rt_nil_check(F->x_1805))), rt_g_lit(")) return 0;", 12)));
f_put_to_228(F->up, F->b_1802, rt_g_lit("  return 1;", 11));
f_put_to_228(F->up, F->b_1802, rt_g_lit("}", 1));
if (((*(P117)rt_nil_check(F->t_560)).dims_ == ((rt_int)1LL))) {
f_ctype_428(F->up, (*(P117)rt_nil_check(F->t_560)).elem_, &F->et_1804);
f_copy_code_550(F->up, (*(P117)rt_nil_check(F->t_560)).elem_, rt_g_lit("a.p[i]", 6), &F->x_1805);
f_copy_code_550(F->up, (*(P117)rt_nil_check(F->t_560)).elem_, rt_g_lit("b.p[i]", 6), &F->y_1806);
f_put_to_228(F->up, F->b_1802, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P135)rt_nil_check(F->c_1801))), rt_g_lit(" cat_", 5)), (*(P135)rt_nil_check(F->c_1801))), one_rt_gstr(40)), (*(P135)rt_nil_check(F->c_1801))), rt_g_lit(" a, ", 4)), (*(P135)rt_nil_check(F->c_1801))), rt_g_lit(" b) {", 5)));
f_put_to_228(F->up, F->b_1802, rt_g_lit("  rt_int na = G_CNT(a), nb = G_CNT(b);", 38));
f_put_to_228(F->up, F->b_1802, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P135)rt_nil_check(F->c_1801))), rt_g_lit(" r = na > 0 \? a : b;", 20)));
f_put_to_228(F->up, F->b_1802, rt_g_lit("  if (na == 0 && nb == 0) return a;", 35));
f_put_to_228(F->up, F->b_1802, rt_g_lit("  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;", 47));
f_put_to_228(F->up, F->b_1802, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  r.p = rt_alloc(sizeof(", 24), (*(P135)rt_nil_check(F->ct_1803))), rt_g_lit(") * (size_t)(na + nb));", 23)));
f_put_to_228(F->up, F->b_1802, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < na; i++) r.p[i] = ", 43), (*(P135)rt_nil_check(F->x_1805))), one_rt_gstr(59)));
f_put_to_228(F->up, F->b_1802, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < nb; i++) r.p[na + i] = ", 48), (*(P135)rt_nil_check(F->y_1806))), one_rt_gstr(59)));
f_put_to_228(F->up, F->b_1802, rt_g_lit("  return r;", 11));
f_put_to_228(F->up, F->b_1802, rt_g_lit("}", 1));
f_copy_code_550(F->up, (*(P117)rt_nil_check(F->t_560)).elem_, rt_g_lit("e", 1), &F->x_1805);
f_first_index_495(F->up, F->t_560, &F->y_1806);
f_put_to_228(F->up, F->b_1802, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P135)rt_nil_check(F->c_1801))), rt_g_lit(" one_", 5)), (*(P135)rt_nil_check(F->c_1801))), one_rt_gstr(40)), (*(P135)rt_nil_check(F->et_1804))), rt_g_lit(" e) {", 5)));
f_put_to_228(F->up, F->b_1802, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P135)rt_nil_check(F->c_1801))), rt_g_lit(" r; r.lo = r.hi = ", 18)), (*(P135)rt_nil_check(F->y_1806))), rt_g_lit("; r.lo2 = r.hi2 = 1;", 20)));
f_put_to_228(F->up, F->b_1802, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  r.p = rt_alloc(sizeof(", 24), (*(P135)rt_nil_check(F->ct_1803))), rt_g_lit(")); r.p[0] = ", 13)), (*(P135)rt_nil_check(F->x_1805))), one_rt_gstr(59)));
f_put_to_228(F->up, F->b_1802, rt_g_lit("  return r;", 11));
f_put_to_228(F->up, F->b_1802, rt_g_lit("}", 1));
}
} else {
f_put_to_228(F->up, F->b_1802, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void as_", 15), (*(P135)rt_nil_check(F->c_1801))), one_rt_gstr(40)), (*(P135)rt_nil_check(F->c_1801))), rt_g_lit(" *d, ", 5)), (*(P135)rt_nil_check(F->c_1801))), rt_g_lit(" s) {", 5)));
F->f_1808 = (*(P117)rt_nil_check(F->t_560)).fields_;
while ((F->f_1808 != NULL)) {
if (((*(P1600)rt_nil_check(F->f_1808)).dyn_ || ((*(P1600)rt_nil_check(F->f_1808)).cond_ != NULL))) {
f_copy_code_550(F->up, (*(P1600)rt_nil_check(F->f_1808)).t_, cat_rt_gstr(rt_g_lit("s.", 2), f_c_field_220(F->up, (*(P135)rt_nil_check((*(P1600)rt_nil_check(F->f_1808)).name_)))), &F->x_1805);
F->x_1805 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("d->", 3), f_c_field_220(F->up, (*(P135)rt_nil_check((*(P1600)rt_nil_check(F->f_1808)).name_)))), rt_g_lit(" = ", 3)), (*(P135)rt_nil_check(F->x_1805))), one_rt_gstr(59)));
if (((*(P1600)rt_nil_check(F->f_1808)).cond_ != NULL)) {
F->x_1805 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), f_subst_500(F->up, (*(P135)rt_nil_check((*(P1600)rt_nil_check(F->f_1808)).cond_)), rt_g_lit("s", 1))), rt_g_lit(") ", 2)), (*(P135)rt_nil_check(F->x_1805))));
}
} else {
f_assign_code_546(F->up, cat_rt_gstr(rt_g_lit("d->", 3), f_c_field_220(F->up, (*(P135)rt_nil_check((*(P1600)rt_nil_check(F->f_1808)).name_)))), (*(P1600)rt_nil_check(F->f_1808)).t_, cat_rt_gstr(rt_g_lit("s.", 2), f_c_field_220(F->up, (*(P135)rt_nil_check((*(P1600)rt_nil_check(F->f_1808)).name_)))), NULL, &F->x_1805);
}
f_put_to_228(F->up, F->b_1802, cat_rt_gstr(rt_g_lit("  ", 2), (*(P135)rt_nil_check(F->x_1805))));
F->f_1808 = (*(P1600)rt_nil_check(F->f_1808)).next_;
}
L_end_1809: ;
f_put_to_228(F->up, F->b_1802, rt_g_lit("}", 1));
f_put_to_228(F->up, F->b_1802, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P135)rt_nil_check(F->c_1801))), rt_g_lit(" cp_", 4)), (*(P135)rt_nil_check(F->c_1801))), one_rt_gstr(40)), (*(P135)rt_nil_check(F->c_1801))), rt_g_lit(" s) {", 5)));
f_put_to_228(F->up, F->b_1802, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P135)rt_nil_check(F->c_1801))), rt_g_lit(" d = s;", 7)));
F->conds_1807 = f_mk_203(F->up, rt_g_lit("1", 1));
F->f_1808 = (*(P117)rt_nil_check(F->t_560)).fields_;
while ((F->f_1808 != NULL)) {
f_copy_code_550(F->up, (*(P1600)rt_nil_check(F->f_1808)).t_, cat_rt_gstr(rt_g_lit("s.", 2), f_c_field_220(F->up, (*(P135)rt_nil_check((*(P1600)rt_nil_check(F->f_1808)).name_)))), &F->x_1805);
F->x_1805 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("d.", 2), f_c_field_220(F->up, (*(P135)rt_nil_check((*(P1600)rt_nil_check(F->f_1808)).name_)))), rt_g_lit(" = ", 3)), (*(P135)rt_nil_check(F->x_1805))), one_rt_gstr(59)));
f_eq_code_555(F->up, (*(P1600)rt_nil_check(F->f_1808)).t_, cat_rt_gstr(rt_g_lit("a.", 2), f_c_field_220(F->up, (*(P135)rt_nil_check((*(P1600)rt_nil_check(F->f_1808)).name_)))), cat_rt_gstr(rt_g_lit("b.", 2), f_c_field_220(F->up, (*(P135)rt_nil_check((*(P1600)rt_nil_check(F->f_1808)).name_)))), &F->y_1806);
if (((*(P1600)rt_nil_check(F->f_1808)).cond_ != NULL)) {
F->x_1805 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), f_subst_500(F->up, (*(P135)rt_nil_check((*(P1600)rt_nil_check(F->f_1808)).cond_)), rt_g_lit("s", 1))), rt_g_lit(") ", 2)), (*(P135)rt_nil_check(F->x_1805))));
F->y_1806 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!(", 3), f_subst_500(F->up, (*(P135)rt_nil_check((*(P1600)rt_nil_check(F->f_1808)).cond_)), rt_g_lit("a", 1))), rt_g_lit(") || ", 5)), (*(P135)rt_nil_check(F->y_1806))), one_rt_gstr(41)));
}
f_put_to_228(F->up, F->b_1802, cat_rt_gstr(rt_g_lit("  ", 2), (*(P135)rt_nil_check(F->x_1805))));
F->conds_1807 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->conds_1807)), rt_g_lit(" && ", 4)), (*(P135)rt_nil_check(F->y_1806))));
F->f_1808 = (*(P1600)rt_nil_check(F->f_1808)).next_;
}
L_end_1810: ;
f_put_to_228(F->up, F->b_1802, rt_g_lit("  return d;", 11));
f_put_to_228(F->up, F->b_1802, rt_g_lit("}", 1));
f_put_to_228(F->up, F->b_1802, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int eq_", 14), (*(P135)rt_nil_check(F->c_1801))), one_rt_gstr(40)), (*(P135)rt_nil_check(F->c_1801))), rt_g_lit(" a, ", 4)), (*(P135)rt_nil_check(F->c_1801))), rt_g_lit(" b) {", 5)));
f_put_to_228(F->up, F->b_1802, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  return ", 9), (*(P135)rt_nil_check(F->conds_1807))), one_rt_gstr(59)));
f_put_to_228(F->up, F->b_1802, rt_g_lit("}", 1));
}
ret_:

  return;
}

static void f_storage_565(struct f_greenc_1fr *up_, rt_gstr name_562, P117 t_563, P135 *access_code_564) {
  struct f_storage_565fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_562 = cp_rt_gstr(name_562);
F->t_563 = t_563;
F->access_code_564 = access_code_564;
F->ct_1811 = NULL;
F->g_1812 = NULL;
f_ctype_428(F->up, F->t_563, &F->ct_1811);
if ((!F->up->in_func_133)) {
f_new_name_206(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("g_", 2), f_lower_s_214(F->up, F->name_562)), one_rt_gstr(95)), &F->g_1812);
f_put_to_228(F->up, F->up->out_globals_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P135)rt_nil_check(F->ct_1811))), one_rt_gstr(32)), (*(P135)rt_nil_check(F->g_1812))), one_rt_gstr(59)));
F->up->st_field_136 = F->g_1812;
(*F->access_code_564) = F->g_1812;
} else {
f_new_name_206(F->up, cat_rt_gstr(f_lower_s_214(F->up, F->name_562), one_rt_gstr(95)), &F->g_1812);
f_put_to_228(F->up, F->up->fields_buf_132, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P135)rt_nil_check(F->ct_1811))), one_rt_gstr(32)), (*(P135)rt_nil_check(F->g_1812))), one_rt_gstr(59)));
F->up->st_field_136 = F->g_1812;
(*F->access_code_564) = f_mk_203(F->up, cat_rt_gstr(rt_g_lit("F->", 3), (*(P135)rt_nil_check(F->g_1812))));
}
ret_:

  return;
}

static void f_bind_568(struct f_greenc_1fr *up_, P112 y_566, P135 access_code_567) {
  struct f_bind_568fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_566 = y_566;
F->access_code_567 = access_code_567;
if (F->up->in_func_133) {
(*(P112)rt_nil_check(F->y_566)).level_ = F->up->cur_level_134;
(*(P112)rt_nil_check(F->y_566)).access_path_ = F->up->st_field_136;
} else {
(*(P112)rt_nil_check(F->y_566)).level_ = ((rt_int)0LL);
(*(P112)rt_nil_check(F->y_566)).access_path_ = F->access_code_567;
}
ret_:

  return;
}

static void f_declare_subprograms_570(struct f_greenc_1fr *up_, P169 from_569) {
  struct f_declare_subprograms_570fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->from_569 = from_569;
F->e_1813 = NULL;
F->e_1813 = F->from_569;
while ((F->e_1813 != NULL)) {
if (((((*(P169)rt_nil_check(F->e_1813)).kind_ == ((rt_int)44LL)) || ((*(P169)rt_nil_check(F->e_1813)).kind_ == ((rt_int)45LL))) && ((*(P169)rt_nil_check(F->e_1813)).ival_ == ((rt_int)0LL)))) {
f_declare_one_572(F->up, F->e_1813);
}
F->e_1813 = (*(P169)rt_nil_check(F->e_1813)).next_;
}
L_end_1814: ;
ret_:

  return;
}

static void f_declare_one_572(struct f_greenc_1fr *up_, P169 e_571) {
  struct f_declare_one_572fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_571 = e_571;
F->y_1815 = NULL;
F->z_1816 = NULL;
if (f_is_generic_name_1057(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_571)).name_)))) {
goto ret_;
}
f_build_subprogram_575(F->up, F->e_571, &F->y_1815);
F->z_1816 = ({ A111 ix1817 = F->up->table_114; ix1817.p[rt_index(f_hash_379(F->up, (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1815)).name_))), ix1817.lo, ix1817.hi) - ix1817.lo]; });
while ((F->z_1816 != NULL)) {
if (((((((eq_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->z_1816)).name_)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1815)).name_))) && (((*(P112)rt_nil_check(F->z_1816)).kind_ == ((rt_int)3LL)) || ((*(P112)rt_nil_check(F->z_1816)).kind_ == ((rt_int)4LL)))) && ((*(P112)rt_nil_check(F->z_1816)).decl_ != NULL)) && ((*(P169)rt_nil_check((*(P112)rt_nil_check(F->z_1816)).decl_)).ival_ == ((rt_int)1LL))) && ((*(P112)rt_nil_check(F->z_1816)).depth_ == F->up->depth_115)) && f_same_signature_406(F->up, (*(P112)rt_nil_check(F->z_1816)).params_, (*(P112)rt_nil_check(F->y_1815)).params_)) && f_same_394(F->up, (*(P112)rt_nil_check(F->z_1816)).result_, (*(P112)rt_nil_check(F->y_1815)).result_))) {
(*(P112)rt_nil_check(F->z_1816)).decl_ = F->e_571;
goto ret_;
}
F->z_1816 = (*(P112)rt_nil_check(F->z_1816)).chain_;
}
L_end_1818: ;
if ((F->up->cur_task_178 != NULL)) {
F->z_1816 = (*(P112)rt_nil_check(F->up->cur_task_178)).members_;
while ((F->z_1816 != NULL)) {
if ((((((eq_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->z_1816)).name_)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1815)).name_))) && (((*(P112)rt_nil_check(F->z_1816)).kind_ == ((rt_int)3LL)) || ((*(P112)rt_nil_check(F->z_1816)).kind_ == ((rt_int)4LL)))) && ((*(P112)rt_nil_check(F->z_1816)).decl_ != NULL)) && ((*(P169)rt_nil_check((*(P112)rt_nil_check(F->z_1816)).decl_)).ival_ == ((rt_int)1LL))) && f_same_signature_406(F->up, (*(P112)rt_nil_check(F->z_1816)).params_, (*(P112)rt_nil_check(F->y_1815)).params_)) && f_same_394(F->up, (*(P112)rt_nil_check(F->z_1816)).result_, (*(P112)rt_nil_check(F->y_1815)).result_))) {
(*(P112)rt_nil_check(F->y_1815)).cname_ = (*(P112)rt_nil_check(F->z_1816)).cname_;
(*(P112)rt_nil_check(F->z_1816)).decl_ = F->e_571;
goto L_end_1819;
}
F->z_1816 = (*(P112)rt_nil_check(F->z_1816)).mnext_;
}
L_end_1819: ;
}
f_define_409(F->up, F->y_1815, (*(P169)rt_nil_check(F->e_571)).line_);
ret_:

  return;
}

static void f_build_subprogram_575(struct f_greenc_1fr *up_, P169 d_573, P112 *y_574) {
  struct f_build_subprogram_575fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_573 = d_573;
F->y_574 = y_574;
F->p_1820 = NULL;
F->p_1820 = (*(P169)rt_nil_check(F->d_573)).a_;
F->pm_1821 = NULL;
F->tail_1822 = NULL;
F->rc_1823 = NULL;
F->k_1824 = ((rt_int)4LL);
if (((*(P169)rt_nil_check(F->d_573)).kind_ == ((rt_int)45LL))) {
F->k_1824 = ((rt_int)3LL);
}
(*F->y_574) = f_new_sym_414(F->up, F->k_1824, (*(P169)rt_nil_check(F->d_573)).name_);
while ((F->p_1820 != NULL)) {
F->pm_1821 = ({ R1586 *cell1826 = rt_alloc(sizeof(R1586)); *cell1826 = cp_R1586(({ R1586 ag1827; ag1827.name_ = (*(P169)rt_nil_check(F->p_1820)).name_; ag1827.mode_ = (*(P169)rt_nil_check(F->p_1820)).ival_; ag1827.t_ = NULL; ag1827.c_ = NULL; ag1827.cfield_ = NULL; ag1827.dflt_ = (*(P169)rt_nil_check(F->p_1820)).b_; ag1827.next_ = NULL; ag1827; })); (P1585)cell1826; });
f_resolve_444(F->up, (*(P169)rt_nil_check(F->p_1820)).a_, &(*(P1585)rt_nil_check(F->pm_1821)).t_, &(*(P1585)rt_nil_check(F->pm_1821)).c_);
f_new_name_206(F->up, cat_rt_gstr(f_lower_s_214(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->p_1820)).name_))), one_rt_gstr(95)), &(*(P1585)rt_nil_check(F->pm_1821)).cfield_);
if ((((*(P169)rt_nil_check(F->d_573)).kind_ == ((rt_int)45LL)) && ((*(P1585)rt_nil_check(F->pm_1821)).mode_ != ((rt_int)1LL)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->p_1820)).line_, rt_g_lit("a function can only have in parameters (RM79 6.5)", 49));
}
if ((((*(P169)rt_nil_check(F->d_573)).flag_ == ((rt_int)1LL)) && ((*(P1585)rt_nil_check(F->pm_1821)).mode_ != ((rt_int)1LL)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->p_1820)).line_, rt_g_lit("a value-returning procedure can only have in parameters (RM79 6.5)", 66));
}
if ((F->tail_1822 == NULL)) {
(*(P112)rt_nil_check((*F->y_574))).params_ = F->pm_1821;
} else {
(*(P1585)rt_nil_check(F->tail_1822)).next_ = F->pm_1821;
}
F->tail_1822 = F->pm_1821;
F->p_1820 = (*(P169)rt_nil_check(F->p_1820)).next_;
}
L_end_1825: ;
(*(P112)rt_nil_check((*F->y_574))).result_ = F->up->ty_void_156;
if (((*(P169)rt_nil_check(F->d_573)).b_ != NULL)) {
f_resolve_444(F->up, (*(P169)rt_nil_check(F->d_573)).b_, &(*(P112)rt_nil_check((*F->y_574))).result_, &F->rc_1823);
}
(*(P112)rt_nil_check((*F->y_574))).vrp_ = ((*(P169)rt_nil_check(F->d_573)).flag_ == ((rt_int)1LL));
f_new_name_206(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("f_", 2), f_c_ident_635(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->d_573)).name_)))), one_rt_gstr(95)), &(*(P112)rt_nil_check((*F->y_574))).cname_);
(*(P112)rt_nil_check((*F->y_574))).decl_ = F->d_573;
(*(P112)rt_nil_check((*F->y_574))).level_ = F->up->cur_level_134;
ret_:

  return;
}

static void f_decl_elements_577(struct f_greenc_1fr *up_, P169 decls_576) {
  struct f_decl_elements_577fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_576 = decls_576;
F->e_1828 = NULL;
F->e_1828 = F->decls_576;
F->declared_1829 = 0;
F->up->anon_node_171 = NULL;
while ((F->e_1828 != NULL)) {
if (((((*(P169)rt_nil_check(F->e_1828)).kind_ != ((rt_int)40LL)) && ((*(P169)rt_nil_check(F->e_1828)).kind_ != ((rt_int)41LL))) || ((*(P169)rt_nil_check(F->e_1828)).a_ != F->up->anon_node_171))) {
F->up->anon_node_171 = NULL;
}
if ((((((*(P169)rt_nil_check(F->e_1828)).kind_ == ((rt_int)44LL)) || ((*(P169)rt_nil_check(F->e_1828)).kind_ == ((rt_int)45LL))) && ((*(P169)rt_nil_check(F->e_1828)).ival_ != ((rt_int)1LL))) && (!F->declared_1829))) {
f_declare_subprograms_570(F->up, F->e_1828);
F->declared_1829 = 1;
}
f_decl_element_579(F->up, F->e_1828);
F->e_1828 = (*(P169)rt_nil_check(F->e_1828)).next_;
}
L_end_1830: ;
ret_:

  return;
}

static void f_decl_element_579(struct f_greenc_1fr *up_, P169 e_578) {
  struct f_decl_element_579fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_578 = e_578;
F->pd_1831 = NULL;
F->y_1832 = NULL;
F->z_1833 = NULL;
F->t_1834 = NULL;
F->vt_1835 = NULL;
F->c_1836 = NULL;
F->acc_1837 = NULL;
F->v_1838 = NULL;
F->x_1839 = NULL;
{ rt_int sel1841 = (*(P169)rt_nil_check(F->e_578)).kind_;
if (0 || sel1841 == ((rt_int)42LL)) {
F->y_1832 = f_lookup_381(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_578)).name_)));
if ((((((((F->y_1832 != NULL) && ((*(P112)rt_nil_check(F->y_1832)).kind_ == ((rt_int)5LL))) && ((*(P112)rt_nil_check(F->y_1832)).depth_ == F->up->depth_115)) && ((*(P112)rt_nil_check(F->y_1832)).t_ != NULL)) && (*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_1832)).t_)).priv_) && ((*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_1832)).t_)).kind_ == ((rt_int)9LL))) && ((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_578)).a_)).kind_ != ((rt_int)77LL)))) {
F->up->completing_168 = (*(P112)rt_nil_check(F->y_1832)).t_;
F->x_1839 = (*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_1832)).t_)).name_;
F->pd_1831 = (*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_1832)).t_)).decl_;
f_type_definition_478(F->up, (*(P169)rt_nil_check(F->e_578)).a_, (*(P169)rt_nil_check(F->e_578)).name_, &F->t_1834, &F->c_1836);
F->up->completing_168 = NULL;
if ((F->t_1834 != (*(P112)rt_nil_check(F->y_1832)).t_)) {
as_R118(&(*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_1832)).t_)), (*(P117)rt_nil_check(F->t_1834)));
}
(*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_1832)).t_)).name_ = F->x_1839;
(*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_1832)).t_)).priv_ = 1;
(*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_1832)).t_)).decl_ = F->pd_1831;
(*(P112)rt_nil_check(F->y_1832)).c_ = F->c_1836;
} else {
F->y_1832 = f_new_sym_414(F->up, ((rt_int)5LL), (*(P169)rt_nil_check(F->e_578)).name_);
(*(P112)rt_nil_check(F->y_1832)).decl_ = F->e_578;
f_define_409(F->up, F->y_1832, (*(P169)rt_nil_check(F->e_578)).line_);
if (((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_578)).a_)).kind_ == ((rt_int)77LL))) {
(*(P112)rt_nil_check(F->y_1832)).t_ = f_new_typ_416(F->up, ((rt_int)9LL));
(*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_1832)).t_)).name_ = (*(P169)rt_nil_check(F->e_578)).name_;
(*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_1832)).t_)).priv_ = 1;
(*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_1832)).t_)).decl_ = F->up->cur_pkg_189;
} else {
f_type_definition_478(F->up, (*(P169)rt_nil_check(F->e_578)).a_, (*(P169)rt_nil_check(F->e_578)).name_, &(*(P112)rt_nil_check(F->y_1832)).t_, &(*(P112)rt_nil_check(F->y_1832)).c_);
}
}
} else if (0 || sel1841 == ((rt_int)43LL)) {
F->y_1832 = f_new_sym_414(F->up, ((rt_int)5LL), (*(P169)rt_nil_check(F->e_578)).name_);
f_resolve_444(F->up, (*(P169)rt_nil_check(F->e_578)).a_, &(*(P112)rt_nil_check(F->y_1832)).t_, &(*(P112)rt_nil_check(F->y_1832)).c_);
f_define_409(F->up, F->y_1832, (*(P169)rt_nil_check(F->e_578)).line_);
} else if (0 || sel1841 == ((rt_int)40LL)) {
f_resolve_object_type_585(F->up, (*(P169)rt_nil_check(F->e_578)).a_, &F->t_1834, &F->c_1836);
F->y_1832 = f_new_sym_414(F->up, ((rt_int)1LL), (*(P169)rt_nil_check(F->e_578)).name_);
if (((*(P169)rt_nil_check(F->e_578)).flag_ == ((rt_int)2LL))) {
f_lvalue_647(F->up, (*(P169)rt_nil_check(F->e_578)).b_, &F->v_1838, &F->vt_1835, &F->c_1836, &(*(P112)rt_nil_check(F->y_1832)).ro_);
f_check_type_423(F->up, F->vt_1835, F->t_1834, (*(P169)rt_nil_check(F->e_578)).line_);
f_ctype_428(F->up, F->t_1834, &F->acc_1837);
f_new_name_206(F->up, cat_rt_gstr(f_lower_s_214(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_578)).name_))), one_rt_gstr(95)), &F->x_1839);
if (F->up->in_func_133) {
f_put_to_228(F->up, F->up->fields_buf_132, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P135)rt_nil_check(F->acc_1837))), rt_g_lit(" *", 2)), (*(P135)rt_nil_check(F->x_1839))), one_rt_gstr(59)));
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->", 3), (*(P135)rt_nil_check(F->x_1839))), rt_g_lit(" = &(", 5)), (*(P135)rt_nil_check(F->v_1838))), rt_g_lit(");", 2)));
(*(P112)rt_nil_check(F->y_1832)).byref_ = 1;
(*(P112)rt_nil_check(F->y_1832)).level_ = F->up->cur_level_134;
(*(P112)rt_nil_check(F->y_1832)).access_path_ = F->x_1839;
} else {
f_put_to_228(F->up, F->up->out_globals_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P135)rt_nil_check(F->acc_1837))), rt_g_lit(" *g_", 4)), (*(P135)rt_nil_check(F->x_1839))), one_rt_gstr(59)));
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("g_", 2), (*(P135)rt_nil_check(F->x_1839))), rt_g_lit(" = &(", 5)), (*(P135)rt_nil_check(F->v_1838))), rt_g_lit(");", 2)));
(*(P112)rt_nil_check(F->y_1832)).level_ = ((rt_int)0LL);
(*(P112)rt_nil_check(F->y_1832)).access_path_ = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*g_", 4), (*(P135)rt_nil_check(F->x_1839))), one_rt_gstr(41)));
}
(*(P112)rt_nil_check(F->y_1832)).t_ = F->vt_1835;
(*(P112)rt_nil_check(F->y_1832)).c_ = F->c_1836;
f_define_409(F->up, F->y_1832, (*(P169)rt_nil_check(F->e_578)).line_);
goto ret_;
}
if (((((*(P117)rt_nil_check(F->t_1834)).kind_ == ((rt_int)6LL)) && ((F->c_1836 == NULL) || ((*(P173)rt_nil_check(F->c_1836)).lo_ == NULL))) && ((*(P169)rt_nil_check(F->e_578)).b_ != NULL))) {
F->up->vrp_ok_194 = 1;
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->e_578)).b_, F->t_1834, &F->vt_1835, &F->v_1838);
F->up->vrp_ok_194 = 0;
f_check_type_423(F->up, F->vt_1835, F->t_1834, (*(P169)rt_nil_check(F->e_578)).line_);
f_storage_565(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_578)).name_)), F->t_1834, &F->acc_1837);
f_copy_code_550(F->up, F->t_1834, (*(P135)rt_nil_check(F->v_1838)), &F->x_1839);
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->acc_1837)), rt_g_lit(" = ", 3)), (*(P135)rt_nil_check(F->x_1839))), one_rt_gstr(59)));
} else {
f_storage_565(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_578)).name_)), F->t_1834, &F->acc_1837);
f_init_storage_538(F->up, (*(P135)rt_nil_check(F->acc_1837)), F->t_1834, F->c_1836);
if (((*(P169)rt_nil_check(F->e_578)).b_ != NULL)) {
F->up->vrp_ok_194 = 1;
if ((((*(P117)rt_nil_check(F->t_1834)).kind_ == ((rt_int)6LL)) && ((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_578)).b_)).kind_ == ((rt_int)12LL)))) {
F->up->agg_bounds_176 = F->acc_1837;
}
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->e_578)).b_, F->t_1834, &F->vt_1835, &F->v_1838);
F->up->agg_bounds_176 = NULL;
F->up->vrp_ok_194 = 0;
f_check_type_423(F->up, F->vt_1835, F->t_1834, (*(P169)rt_nil_check(F->e_578)).line_);
f_assign_code_546(F->up, (*(P135)rt_nil_check(F->acc_1837)), F->t_1834, (*(P135)rt_nil_check(F->v_1838)), F->c_1836, &F->x_1839);
f_emit_230(F->up, (*(P135)rt_nil_check(F->x_1839)));
}
}
(*(P112)rt_nil_check(F->y_1832)).t_ = F->t_1834;
(*(P112)rt_nil_check(F->y_1832)).c_ = F->c_1836;
f_bind_568(F->up, F->y_1832, F->acc_1837);
f_define_409(F->up, F->y_1832, (*(P169)rt_nil_check(F->e_578)).line_);
} else if (0 || sel1841 == ((rt_int)41LL)) {
f_resolve_object_type_585(F->up, (*(P169)rt_nil_check(F->e_578)).a_, &F->t_1834, &F->c_1836);
F->y_1832 = f_new_sym_414(F->up, ((rt_int)2LL), (*(P169)rt_nil_check(F->e_578)).name_);
F->up->vrp_ok_194 = 1;
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->e_578)).b_, F->t_1834, &F->vt_1835, &F->v_1838);
F->up->vrp_ok_194 = 0;
f_check_type_423(F->up, F->vt_1835, F->t_1834, (*(P169)rt_nil_check(F->e_578)).line_);
if (((*(P117)rt_nil_check(F->t_1834)).kind_ == ((rt_int)1LL))) {
f_manifest_440(F->up, (*(P169)rt_nil_check(F->e_578)).b_, &(*(P112)rt_nil_check(F->y_1832)).mvalue_, &F->ok_1840);
(*(P112)rt_nil_check(F->y_1832)).hasmv_ = F->ok_1840;
}
f_storage_565(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_578)).name_)), F->t_1834, &F->acc_1837);
f_copy_code_550(F->up, F->t_1834, (*(P135)rt_nil_check(F->v_1838)), &F->x_1839);
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->acc_1837)), rt_g_lit(" = ", 3)), (*(P135)rt_nil_check(F->x_1839))), one_rt_gstr(59)));
(*(P112)rt_nil_check(F->y_1832)).t_ = F->t_1834;
(*(P112)rt_nil_check(F->y_1832)).c_ = F->c_1836;
(*(P112)rt_nil_check(F->y_1832)).ro_ = 1;
f_bind_568(F->up, F->y_1832, F->acc_1837);
f_define_409(F->up, F->y_1832, (*(P169)rt_nil_check(F->e_578)).line_);
} else if (0 || sel1841 == ((rt_int)46LL)) {
if (((*(P169)rt_nil_check(F->e_578)).a_ != NULL)) {
if ((((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_578)).a_)).kind_ == ((rt_int)9LL)) && f_is_package_869(F->up, (*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_578)).a_)).a_))) {
F->y_1832 = f_member_of_873(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_578)).a_)).a_)).name_)), (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_578)).a_)).name_)), (*(P169)rt_nil_check(F->e_578)).line_);
} else if (((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_578)).a_)).kind_ == ((rt_int)5LL))) {
F->y_1832 = f_lookup_381(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_578)).a_)).name_)));
} else {
F->y_1832 = NULL;
}
if (((F->y_1832 == NULL) || ((*(P112)rt_nil_check(F->y_1832)).kind_ != ((rt_int)6LL)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_578)).line_, rt_g_lit("an exception is renamed only as an exception", 44));
}
f_copy_sym_878(F->up, F->y_1832, &F->z_1833);
(*(P112)rt_nil_check(F->z_1833)).name_ = (*(P169)rt_nil_check(F->e_578)).name_;
f_define_409(F->up, F->z_1833, (*(P169)rt_nil_check(F->e_578)).line_);
goto ret_;
}
F->y_1832 = f_new_sym_414(F->up, ((rt_int)6LL), (*(P169)rt_nil_check(F->e_578)).name_);
f_new_name_206(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("ex_", 3), f_lower_s_214(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_578)).name_)))), one_rt_gstr(95)), &(*(P112)rt_nil_check(F->y_1832)).cname_);
f_put_to_228(F->up, F->up->out_globals_127, cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int ", 11), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1832)).cname_))), one_rt_gstr(59)));
f_put_to_228(F->up, F->up->out_excs_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1832)).cname_))), rt_g_lit(" = rt_exc(", 10)), f_q_221(F->up)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_578)).name_))), f_q_221(F->up)), rt_g_lit(");", 2)));
f_define_409(F->up, F->y_1832, (*(P169)rt_nil_check(F->e_578)).line_);
} else if (0 || sel1841 == ((rt_int)44LL) || sel1841 == ((rt_int)45LL)) {
if (f_is_generic_name_1057(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_578)).name_)))) {
f_attach_generic_body_1059(F->up, F->e_578);
} else if (((*(P169)rt_nil_check(F->e_578)).ival_ == ((rt_int)1LL))) {
f_build_subprogram_575(F->up, F->e_578, &F->y_1832);
f_define_409(F->up, F->y_1832, (*(P169)rt_nil_check(F->e_578)).line_);
} else {
f_subprogram_body_590(F->up, F->e_578, f_lookup_decl_389(F->up, F->e_578));
}
} else if (0 || sel1841 == ((rt_int)55LL)) {
f_use_clause_890(F->up, F->e_578);
} else if (0 || sel1841 == ((rt_int)56LL)) {
f_pragma_decl_581(F->up, F->e_578);
} else {
f_other_decl_587(F->up, F->e_578);
}
}
ret_:

  return;
}

static void f_pragma_decl_581(struct f_greenc_1fr *up_, P169 e_580) {
  struct f_pragma_decl_581fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_580 = e_580;
ret_:

  return;
}

static void f_resolve_object_type_585(struct f_greenc_1fr *up_, P169 st_582, P117 *t_583, P173 *c_584) {
  struct f_resolve_object_type_585fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_582 = st_582;
F->t_583 = t_583;
F->c_584 = c_584;
if ((((*(P169)rt_nil_check(F->st_582)).kind_ != ((rt_int)80LL)) && (F->st_582 == F->up->anon_node_171))) {
(*F->t_583) = F->up->anon_typ_172;
(*F->c_584) = F->up->anon_cons_175;
goto ret_;
}
f_resolve_444(F->up, F->st_582, &(*F->t_583), &(*F->c_584));
if (((*(P169)rt_nil_check(F->st_582)).kind_ != ((rt_int)80LL))) {
F->up->anon_node_171 = F->st_582;
F->up->anon_typ_172 = (*F->t_583);
F->up->anon_cons_175 = (*F->c_584);
}
ret_:

  return;
}

static void f_other_decl_587(struct f_greenc_1fr *up_, P169 e_586) {
  struct f_other_decl_587fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_586 = e_586;
if (((*(P169)rt_nil_check(F->e_586)).kind_ == ((rt_int)48LL))) {
f_package_spec_883(F->up, F->e_586);
} else if (((*(P169)rt_nil_check(F->e_586)).kind_ == ((rt_int)49LL))) {
f_package_body_888(F->up, F->e_586);
} else {
f_task_decl_963(F->up, F->e_586);
}
ret_:

  return;
}

static void f_subprogram_body_590(struct f_greenc_1fr *up_, P169 d_588, P112 y_589) {
  struct f_subprogram_body_590fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_588 = d_588;
F->y_589 = y_589;
F->saved_code_1842 = NULL;
F->saved_code_1842 = F->up->code_131;
F->saved_fields_1843 = NULL;
F->saved_fields_1843 = F->up->fields_buf_132;
F->saved_in_1844 = F->up->in_func_133;
F->saved_sym_1845 = NULL;
F->saved_sym_1845 = F->up->func_sym_137;
F->saved_exits_1846 = NULL;
F->saved_exits_1846 = F->up->exits_140;
F->saved_frames_1847 = F->up->frames_145;
F->saved_handlers_1848 = NULL;
F->saved_handlers_1848 = F->up->handlers_148;
F->saved_cleanups_1849 = NULL;
F->saved_cleanups_1849 = F->up->cleanups_149;
F->saved_pure_1850 = NULL;
F->saved_pure_1850 = F->up->pure_sym_192;
F->aw_1851 = NULL;
F->saved_pdepth_1852 = F->up->pure_depth_193;
F->args_1853 = NULL;
F->head_1854 = NULL;
F->frame_1855 = NULL;
F->parent_1856 = NULL;
F->ct_1857 = NULL;
F->x_1858 = NULL;
F->pm_1859 = NULL;
F->pm_1859 = (*(P112)rt_nil_check(F->y_589)).params_;
F->p_1860 = NULL;
F->frame_1855 = f_mk_203(F->up, cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_589)).cname_)), rt_g_lit("fr", 2)));
if (F->up->in_func_133) {
F->parent_1856 = f_mk_203(F->up, cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->up->func_sym_137)).cname_)), rt_g_lit("fr", 2)));
}
F->up->code_131 = f_new_buffer_225(F->up);
F->up->fields_buf_132 = f_new_buffer_225(F->up);
F->up->in_func_133 = 1;
F->up->func_sym_137 = F->y_589;
F->up->exits_140 = NULL;
F->up->frames_145 = ((rt_int)0LL);
F->up->handlers_148 = NULL;
F->up->cleanups_149 = NULL;
F->up->cur_level_134 = rt_add(F->up->cur_level_134, ((rt_int)1LL));
F->args_1853 = f_mk_203(F->up, rt_g_lit("", 0));
f_open_scope_410(F->up);
if ((((*(P112)rt_nil_check(F->y_589)).kind_ == ((rt_int)3LL)) && (!(*(P112)rt_nil_check(F->y_589)).vrp_))) {
F->up->pure_sym_192 = F->y_589;
F->up->pure_depth_193 = F->up->depth_115;
}
if ((F->parent_1856 != NULL)) {
f_put_to_228(F->up, F->up->fields_buf_132, cat_rt_gstr(cat_rt_gstr(rt_g_lit(" struct ", 8), (*(P135)rt_nil_check(F->parent_1856))), rt_g_lit(" *up;", 5)));
F->args_1853 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P135)rt_nil_check(F->parent_1856))), rt_g_lit(" *up_", 5)));
f_emit_230(F->up, rt_g_lit("F->up = up_;", 12));
}
while ((F->pm_1859 != NULL)) {
f_ctype_428(F->up, (*(P1585)rt_nil_check(F->pm_1859)).t_, &F->ct_1857);
if ((({ rt_gstr at1862 = (*(P135)rt_nil_check(F->args_1853)); at1862.hi >= at1862.lo ? at1862.hi - at1862.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->args_1853 = f_mk_203(F->up, cat_rt_gstr((*(P135)rt_nil_check(F->args_1853)), rt_g_lit(", ", 2)));
}
if (((*(P1585)rt_nil_check(F->pm_1859)).mode_ == ((rt_int)1LL))) {
F->p_1860 = f_new_sym_414(F->up, ((rt_int)2LL), (*(P1585)rt_nil_check(F->pm_1859)).name_);
(*(P112)rt_nil_check(F->p_1860)).ro_ = 1;
f_put_to_228(F->up, F->up->fields_buf_132, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P135)rt_nil_check(F->ct_1857))), one_rt_gstr(32)), (*(P135)rt_nil_check((*(P1585)rt_nil_check(F->pm_1859)).cfield_))), one_rt_gstr(59)));
F->args_1853 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->args_1853)), (*(P135)rt_nil_check(F->ct_1857))), one_rt_gstr(32)), (*(P135)rt_nil_check((*(P1585)rt_nil_check(F->pm_1859)).cfield_))));
f_copy_code_550(F->up, (*(P1585)rt_nil_check(F->pm_1859)).t_, (*(P135)rt_nil_check((*(P1585)rt_nil_check(F->pm_1859)).cfield_)), &F->x_1858);
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->", 3), (*(P135)rt_nil_check((*(P1585)rt_nil_check(F->pm_1859)).cfield_))), rt_g_lit(" = ", 3)), (*(P135)rt_nil_check(F->x_1858))), one_rt_gstr(59)));
} else {
F->p_1860 = f_new_sym_414(F->up, ((rt_int)1LL), (*(P1585)rt_nil_check(F->pm_1859)).name_);
(*(P112)rt_nil_check(F->p_1860)).byref_ = 1;
f_put_to_228(F->up, F->up->fields_buf_132, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P135)rt_nil_check(F->ct_1857))), rt_g_lit(" *", 2)), (*(P135)rt_nil_check((*(P1585)rt_nil_check(F->pm_1859)).cfield_))), one_rt_gstr(59)));
F->args_1853 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->args_1853)), (*(P135)rt_nil_check(F->ct_1857))), rt_g_lit(" *", 2)), (*(P135)rt_nil_check((*(P1585)rt_nil_check(F->pm_1859)).cfield_))));
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->", 3), (*(P135)rt_nil_check((*(P1585)rt_nil_check(F->pm_1859)).cfield_))), rt_g_lit(" = ", 3)), (*(P135)rt_nil_check((*(P1585)rt_nil_check(F->pm_1859)).cfield_))), one_rt_gstr(59)));
}
(*(P112)rt_nil_check(F->p_1860)).access_path_ = (*(P1585)rt_nil_check(F->pm_1859)).cfield_;
(*(P112)rt_nil_check(F->p_1860)).t_ = (*(P1585)rt_nil_check(F->pm_1859)).t_;
(*(P112)rt_nil_check(F->p_1860)).c_ = (*(P1585)rt_nil_check(F->pm_1859)).c_;
(*(P112)rt_nil_check(F->p_1860)).level_ = F->up->cur_level_134;
f_define_409(F->up, F->p_1860, (*(P169)rt_nil_check(F->d_588)).line_);
F->pm_1859 = (*(P1585)rt_nil_check(F->pm_1859)).next_;
}
L_end_1861: ;
if (((*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_589)).result_)).kind_ != ((rt_int)9LL))) {
f_ctype_428(F->up, (*(P112)rt_nil_check(F->y_589)).result_, &F->ct_1857);
f_put_to_228(F->up, F->up->fields_buf_132, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P135)rt_nil_check(F->ct_1857))), rt_g_lit(" result_;", 9)));
}
f_decl_elements_577(F->up, (*(P169)rt_nil_check(F->d_588)).c_);
if (((((*(P169)rt_nil_check(F->d_588)).tag_ != NULL) && eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->d_588)).tag_)), rt_g_lit("INTERFACE", 9))) && ((*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_589)).result_)).kind_ == ((rt_int)9LL)))) {
F->x_1858 = f_mk_203(F->up, rt_g_lit("", 0));
F->pm_1859 = (*(P112)rt_nil_check(F->y_589)).params_;
while ((F->pm_1859 != NULL)) {
if ((({ rt_gstr at1864 = (*(P135)rt_nil_check(F->x_1858)); at1864.hi >= at1864.lo ? at1864.hi - at1864.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->x_1858 = f_mk_203(F->up, cat_rt_gstr((*(P135)rt_nil_check(F->x_1858)), rt_g_lit(", ", 2)));
}
if ((f_is_string_497(F->up, (*(P1585)rt_nil_check(F->pm_1859)).t_) && ((*(P1585)rt_nil_check(F->pm_1859)).mode_ == ((rt_int)1LL)))) {
F->x_1858 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->x_1858)), rt_g_lit("rt_g_g2s(F->", 12)), (*(P135)rt_nil_check((*(P1585)rt_nil_check(F->pm_1859)).cfield_))), one_rt_gstr(41)));
} else {
F->x_1858 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->x_1858)), rt_g_lit("F->", 3)), (*(P135)rt_nil_check((*(P1585)rt_nil_check(F->pm_1859)).cfield_))));
}
F->pm_1859 = (*(P1585)rt_nil_check(F->pm_1859)).next_;
}
L_end_1863: ;
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_", 5), f_lower_s_214(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->d_588)).name_)))), one_rt_gstr(40)), (*(P135)rt_nil_check(F->x_1858))), rt_g_lit(");", 2)));
} else {
f_guarded_601(F->up, (*(P169)rt_nil_check(F->d_588)).d_, (*(P169)rt_nil_check(F->d_588)).e_, (*(P169)rt_nil_check(F->d_588)).line_);
}
f_task_awaits_982(F->up, (*(P169)rt_nil_check(F->d_588)).c_, &F->aw_1851);
f_close_scope_411(F->up);
F->up->cur_level_134 = rt_sub(F->up->cur_level_134, ((rt_int)1LL));
if ((({ rt_gstr at1865 = (*(P135)rt_nil_check(F->args_1853)); at1865.hi >= at1865.lo ? at1865.hi - at1865.lo + 1 : (rt_int)0; }) == ((rt_int)0LL))) {
F->args_1853 = f_mk_203(F->up, rt_g_lit("void", 4));
}
f_ctype_428(F->up, (*(P112)rt_nil_check(F->y_589)).result_, &F->ct_1857);
F->head_1854 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P135)rt_nil_check(F->ct_1857))), one_rt_gstr(32)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_589)).cname_))), one_rt_gstr(40)), (*(P135)rt_nil_check(F->args_1853))), one_rt_gstr(41)));
f_put_to_228(F->up, F->up->out_protos_126, cat_rt_gstr((*(P135)rt_nil_check(F->head_1854)), one_rt_gstr(59)));
f_put_to_228(F->up, F->up->out_frames_124, cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P135)rt_nil_check(F->frame_1855))), rt_g_lit(" { int dummy;", 13)));
f_splice_235(F->up, F->up->out_frames_124, F->up->fields_buf_132);
f_put_to_228(F->up, F->up->out_frames_124, rt_g_lit("};", 2));
f_put_to_228(F->up, F->up->out_funcs_128, cat_rt_gstr((*(P135)rt_nil_check(F->head_1854)), rt_g_lit(" {", 2)));
f_put_to_228(F->up, F->up->out_funcs_128, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  struct ", 9), (*(P135)rt_nil_check(F->frame_1855))), rt_g_lit(" *F = rt_alloc(sizeof *F);", 26)));
if ((((*(P112)rt_nil_check(F->y_589)).kind_ == ((rt_int)4LL)) && ((*(P112)rt_nil_check(F->y_589)).access_path_ != NULL))) {
f_put_to_228(F->up, F->up->out_funcs_128, cat_rt_gstr(rt_g_lit("  ", 2), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_589)).access_path_))));
}
f_splice_235(F->up, F->up->out_funcs_128, F->up->code_131);
if (((*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_589)).result_)).kind_ != ((rt_int)9LL))) {
f_put_to_228(F->up, F->up->out_funcs_128, rt_g_lit("  rt_raise(RT_X_INIT);", 22));
f_put_to_228(F->up, F->up->out_funcs_128, rt_g_lit("ret_:", 5));
f_put_to_228(F->up, F->up->out_funcs_128, (*(P135)rt_nil_check(F->aw_1851)));
f_put_to_228(F->up, F->up->out_funcs_128, rt_g_lit("  return F->result_;", 20));
} else {
f_put_to_228(F->up, F->up->out_funcs_128, rt_g_lit("ret_:", 5));
f_put_to_228(F->up, F->up->out_funcs_128, (*(P135)rt_nil_check(F->aw_1851)));
f_put_to_228(F->up, F->up->out_funcs_128, rt_g_lit("  return;", 9));
}
f_put_to_228(F->up, F->up->out_funcs_128, rt_g_lit("}", 1));
f_put_to_228(F->up, F->up->out_funcs_128, rt_g_lit("", 0));
F->up->code_131 = F->saved_code_1842;
F->up->fields_buf_132 = F->saved_fields_1843;
F->up->in_func_133 = F->saved_in_1844;
F->up->func_sym_137 = F->saved_sym_1845;
F->up->exits_140 = F->saved_exits_1846;
F->up->frames_145 = F->saved_frames_1847;
F->up->handlers_148 = F->saved_handlers_1848;
F->up->cleanups_149 = F->saved_cleanups_1849;
F->up->pure_sym_192 = F->saved_pure_1850;
F->up->pure_depth_193 = F->saved_pdepth_1852;
ret_:

  return;
}

static void f_gen_statements_592(struct f_greenc_1fr *up_, P169 stmts_591) {
  struct f_gen_statements_592fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_591 = stmts_591;
F->s_1866 = NULL;
F->s_1866 = F->stmts_591;
while ((F->s_1866 != NULL)) {
f_gen_statement_607(F->up, F->s_1866);
F->s_1866 = (*(P169)rt_nil_check(F->s_1866)).next_;
}
L_end_1867: ;
ret_:

  return;
}

static void f_pop_frames_594(struct f_greenc_1fr *up_, rt_int upto_593) {
  struct f_pop_frames_594fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->upto_593 = upto_593;
F->i_1868 = F->up->frames_145;
F->c_1869 = NULL;
F->c_1869 = F->up->cleanups_149;
while ((F->i_1868 > F->upto_593)) {
f_emit_230(F->up, (*(P135)rt_nil_check((*(P146)rt_nil_check(F->c_1869)).s_)));
F->c_1869 = (*(P146)rt_nil_check(F->c_1869)).next_;
F->i_1868 = rt_sub(F->i_1868, ((rt_int)1LL));
}
L_end_1870: ;
ret_:

  return;
}

static void f_push_cleanup_596(struct f_greenc_1fr *up_, rt_gstr s_595) {
  struct f_push_cleanup_596fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_595 = cp_rt_gstr(s_595);
F->up->cleanups_149 = ({ R147 *cell1871 = rt_alloc(sizeof(R147)); *cell1871 = cp_R147(({ R147 ag1872; ag1872.s_ = NULL; ag1872.next_ = F->up->cleanups_149; ag1872; })); (P146)cell1871; });
(*(P146)rt_nil_check(F->up->cleanups_149)).s_ = f_mk_203(F->up, F->s_595);
F->up->frames_145 = rt_add(F->up->frames_145, ((rt_int)1LL));
ret_:

  return;
}

static void f_pop_cleanup_597(struct f_greenc_1fr *up_) {
  struct f_pop_cleanup_597fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->cleanups_149 = (*(P146)rt_nil_check(F->up->cleanups_149)).next_;
F->up->frames_145 = rt_sub(F->up->frames_145, ((rt_int)1LL));
ret_:

  return;
}

static void f_guarded_601(struct f_greenc_1fr *up_, P169 stmts_598, P169 hs_599, rt_int line_600) {
  struct f_guarded_601fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_598 = stmts_598;
F->hs_599 = hs_599;
F->line_600 = line_600;
F->f_1873 = NULL;
F->x_1874 = NULL;
F->h_1875 = NULL;
F->n_1876 = NULL;
F->first_1877 = 1;
F->has_others_1878 = 0;
F->conds_1879 = NULL;
if ((F->hs_599 == NULL)) {
f_gen_statements_592(F->up, F->stmts_598);
goto ret_;
}
f_new_name_206(F->up, rt_g_lit("xf", 2), &F->f_1873);
f_new_name_206(F->up, rt_g_lit("x", 1), &F->x_1874);
f_push_cleanup_596(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P135)rt_nil_check(F->f_1873))), rt_g_lit(");", 2)));
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_frame ", 11), (*(P135)rt_nil_check(F->f_1873))), one_rt_gstr(59)));
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (RT_TRY(", 11), (*(P135)rt_nil_check(F->f_1873))), rt_g_lit(")) {", 4)));
f_gen_statements_592(F->up, F->stmts_598);
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P135)rt_nil_check(F->f_1873))), rt_g_lit(");", 2)));
f_emit_230(F->up, rt_g_lit("} else {", 8));
f_pop_cleanup_597(F->up);
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P135)rt_nil_check(F->f_1873))), rt_g_lit(");", 2)));
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("int ", 4), (*(P135)rt_nil_check(F->x_1874))), rt_g_lit(" = rt_xcur;", 11)));
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (rt_g_aborted()) rt_raise(", 29), (*(P135)rt_nil_check(F->x_1874))), rt_g_lit(");", 2)));
F->up->handlers_148 = ({ R147 *cell1880 = rt_alloc(sizeof(R147)); *cell1880 = cp_R147(({ R147 ag1881; ag1881.s_ = F->x_1874; ag1881.next_ = F->up->handlers_148; ag1881; })); (P146)cell1880; });
F->h_1875 = F->hs_599;
while ((F->h_1875 != NULL)) {
F->n_1876 = (*(P169)rt_nil_check(F->h_1875)).a_;
F->conds_1879 = f_mk_203(F->up, rt_g_lit("0", 1));
while ((F->n_1876 != NULL)) {
if (eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->n_1876)).name_)), rt_g_lit("OTHERS", 6))) {
F->has_others_1878 = 1;
F->conds_1879 = f_mk_203(F->up, rt_g_lit("1", 1));
} else {
F->up->prefix_hint_190 = (*(P169)rt_nil_check(F->n_1876)).tag_;
f_exc_id_605(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->n_1876)).name_)), (*(P169)rt_nil_check(F->h_1875)).line_, &F->f_1873);
F->conds_1879 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->conds_1879)), rt_g_lit(" || ", 4)), (*(P135)rt_nil_check(F->x_1874))), rt_g_lit(" == ", 4)), (*(P135)rt_nil_check(F->f_1873))));
}
F->n_1876 = (*(P169)rt_nil_check(F->n_1876)).next_;
}
L_end_1883: ;
if (F->first_1877) {
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P135)rt_nil_check(F->conds_1879))), rt_g_lit(") {", 3)));
} else {
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P135)rt_nil_check(F->conds_1879))), rt_g_lit(") {", 3)));
}
F->first_1877 = 0;
f_gen_statements_592(F->up, (*(P169)rt_nil_check(F->h_1875)).b_);
F->h_1875 = (*(P169)rt_nil_check(F->h_1875)).next_;
}
L_end_1882: ;
if ((!F->has_others_1878)) {
f_emit_230(F->up, rt_g_lit("} else {", 8));
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_raise(", 9), (*(P135)rt_nil_check(F->x_1874))), rt_g_lit(");", 2)));
}
f_emit_230(F->up, rt_g_lit("}", 1));
F->up->handlers_148 = (*(P146)rt_nil_check(F->up->handlers_148)).next_;
f_emit_230(F->up, rt_g_lit("}", 1));
f_emit_230(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_exc_id_605(struct f_greenc_1fr *up_, rt_gstr name_602, rt_int line_603, P135 *r_604) {
  struct f_exc_id_605fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_602 = cp_rt_gstr(name_602);
F->line_603 = line_603;
F->r_604 = r_604;
F->y_1884 = NULL;
F->y_1884 = f_lookup_381(F->up, F->name_602);
if ((F->up->prefix_hint_190 != NULL)) {
F->y_1884 = f_member_of_873(F->up, (*(P135)rt_nil_check(F->up->prefix_hint_190)), F->name_602, F->line_603);
F->up->prefix_hint_190 = NULL;
}
if (((F->y_1884 == NULL) || ((*(P112)rt_nil_check(F->y_1884)).kind_ != ((rt_int)6LL)))) {
f_fail_224(F->up, F->line_603, cat_rt_gstr(F->name_602, rt_g_lit(" is not an exception", 20)));
}
(*F->r_604) = (*(P112)rt_nil_check(F->y_1884)).cname_;
ret_:

  return;
}

static void f_gen_statement_607(struct f_greenc_1fr *up_, P169 s_606) {
  struct f_gen_statement_607fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_606 = s_606;
F->t_1885 = NULL;
F->vt_1886 = NULL;
F->c_1887 = NULL;
F->lv_1888 = NULL;
F->v_1889 = NULL;
F->x_1890 = NULL;
{ rt_int sel1892 = (*(P169)rt_nil_check(F->s_606)).kind_;
if (0 || sel1892 == ((rt_int)20LL)) {
if (((((*(P169)rt_nil_check((*(P169)rt_nil_check(F->s_606)).a_)).kind_ == ((rt_int)8LL)) && ((*(P169)rt_nil_check((*(P169)rt_nil_check(F->s_606)).a_)).b_ != NULL)) && (((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->s_606)).a_)).b_)).kind_ == ((rt_int)14LL)) || ((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->s_606)).a_)).b_)).kind_ == ((rt_int)80LL))))) {
f_slice_assign_609(F->up, F->s_606);
goto ret_;
}
F->up->in_lv_path_195 = 1;
F->up->last_deref_196 = 0;
f_lvalue_647(F->up, (*(P169)rt_nil_check(F->s_606)).a_, &F->lv_1888, &F->t_1885, &F->c_1887, &F->ro_1891);
F->up->in_lv_path_195 = 0;
if (F->ro_1891) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->s_606)).line_, rt_g_lit("assignment to a constant or an in parameter", 43));
}
f_check_pure_target_1031(F->up, (*(P169)rt_nil_check(F->s_606)).a_, (*(P169)rt_nil_check(F->s_606)).line_);
F->up->vrp_ok_194 = 1;
if ((((*(P117)rt_nil_check(F->t_1885)).kind_ == ((rt_int)6LL)) && ((*(P169)rt_nil_check((*(P169)rt_nil_check(F->s_606)).b_)).kind_ == ((rt_int)12LL)))) {
F->up->agg_bounds_176 = F->lv_1888;
}
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->s_606)).b_, F->t_1885, &F->vt_1886, &F->v_1889);
F->up->agg_bounds_176 = NULL;
F->up->vrp_ok_194 = 0;
f_check_type_423(F->up, F->vt_1886, F->t_1885, (*(P169)rt_nil_check(F->s_606)).line_);
f_assign_code_546(F->up, (*(P135)rt_nil_check(F->lv_1888)), F->t_1885, (*(P135)rt_nil_check(F->v_1889)), F->c_1887, &F->x_1890);
f_emit_230(F->up, (*(P135)rt_nil_check(F->x_1890)));
} else if (0 || sel1892 == ((rt_int)21LL)) {
F->up->vrp_ok_194 = 1;
f_gen_call_611(F->up, F->s_606);
F->up->vrp_ok_194 = 0;
} else if (0 || sel1892 == ((rt_int)22LL)) {
f_gen_if_613(F->up, F->s_606);
} else if (0 || sel1892 == ((rt_int)23LL)) {
f_gen_case_615(F->up, F->s_606);
} else if (0 || sel1892 == ((rt_int)24LL)) {
f_gen_loop_621(F->up, F->s_606);
} else if (0 || sel1892 == ((rt_int)25LL)) {
f_gen_block_623(F->up, F->s_606);
} else if (0 || sel1892 == ((rt_int)26LL)) {
f_gen_exit_625(F->up, F->s_606);
} else if (0 || sel1892 == ((rt_int)27LL)) {
f_gen_return_627(F->up, F->s_606);
} else if (0 || sel1892 == ((rt_int)28LL)) {
if (((((*(P169)rt_nil_check(F->s_606)).tag_ != NULL) && f_is_task_name_936(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->s_606)).tag_)))) && eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->s_606)).name_)), rt_g_lit("FAILURE", 7)))) {
f_task_failure_984(F->up, F->s_606);
} else {
F->up->prefix_hint_190 = (*(P169)rt_nil_check(F->s_606)).tag_;
f_exc_id_605(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->s_606)).name_)), (*(P169)rt_nil_check(F->s_606)).line_, &F->x_1890);
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_raise(", 9), (*(P135)rt_nil_check(F->x_1890))), rt_g_lit(");", 2)));
}
} else if (0 || sel1892 == ((rt_int)29LL)) {
if ((F->up->handlers_148 == NULL)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->s_606)).line_, rt_g_lit("raise; outside an exception handler", 35));
}
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_raise(", 9), (*(P135)rt_nil_check((*(P146)rt_nil_check(F->up->handlers_148)).s_))), rt_g_lit(");", 2)));
} else if (0 || sel1892 == ((rt_int)30LL)) {
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->s_606)).a_, F->up->ty_bool_152, &F->vt_1886, &F->v_1889);
f_check_type_423(F->up, F->vt_1886, F->up->ty_bool_152, (*(P169)rt_nil_check(F->s_606)).line_);
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (!(", 6), (*(P135)rt_nil_check(F->v_1889))), rt_g_lit(")) rt_raise(RT_X_ASSERT);", 25)));
} else if (0 || sel1892 == ((rt_int)31LL)) {
} else {
f_task_statement_gen_1026(F->up, F->s_606);
}
}
ret_:

  return;
}

static void f_slice_assign_609(struct f_greenc_1fr *up_, P169 s_608) {
  struct f_slice_assign_609fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_608 = s_608;
F->lv_1893 = NULL;
F->v_1894 = NULL;
F->sl_1895 = NULL;
F->x_1896 = NULL;
F->t_1897 = NULL;
F->st_1898 = NULL;
F->vt_1899 = NULL;
F->c_1900 = NULL;
F->up->in_lv_path_195 = 1;
F->up->last_deref_196 = 0;
f_lvalue_647(F->up, (*(P169)rt_nil_check((*(P169)rt_nil_check(F->s_608)).a_)).a_, &F->lv_1893, &F->t_1897, &F->c_1900, &F->ro_1901);
F->up->in_lv_path_195 = 0;
if (F->ro_1901) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->s_608)).line_, rt_g_lit("assignment to a constant or an in parameter", 43));
}
f_check_pure_target_1031(F->up, (*(P169)rt_nil_check(F->s_608)).a_, (*(P169)rt_nil_check(F->s_608)).line_);
F->ro_1901 = 0;
f_index_on_665(F->up, (*(P135)rt_nil_check(F->lv_1893)), F->t_1897, (*(P169)rt_nil_check(F->s_608)).a_, &F->ro_1901, 0, &F->sl_1895, &F->st_1898, &F->c_1900);
F->up->vrp_ok_194 = 1;
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->s_608)).b_, F->st_1898, &F->vt_1899, &F->v_1894);
F->up->vrp_ok_194 = 0;
f_check_type_423(F->up, F->vt_1899, F->st_1898, (*(P169)rt_nil_check(F->s_608)).line_);
f_ctype_428(F->up, F->st_1898, &F->x_1896);
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P135)rt_nil_check(F->x_1896))), rt_g_lit(" sl_ = ", 7)), (*(P135)rt_nil_check(F->sl_1895))), rt_g_lit("; as_", 5)), (*(P135)rt_nil_check(F->x_1896))), rt_g_lit("(&sl_, ", 7)), (*(P135)rt_nil_check(F->v_1894))), rt_g_lit("); }", 4)));
ret_:

  return;
}

static void f_gen_call_611(struct f_greenc_1fr *up_, P169 s_610) {
  struct f_gen_call_611fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_610 = s_610;
F->c_1902 = NULL;
F->c_1902 = (*(P169)rt_nil_check(F->s_610)).a_;
F->t_1903 = NULL;
F->v_1904 = NULL;
if ((((*(P169)rt_nil_check(F->c_1902)).kind_ == ((rt_int)5LL)) || ((*(P169)rt_nil_check(F->c_1902)).kind_ == ((rt_int)9LL)))) {
F->c_1902 = f_nn_274(F->up, ((rt_int)8LL), (*(P169)rt_nil_check(F->s_610)).line_);
(*(P169)rt_nil_check(F->c_1902)).a_ = (*(P169)rt_nil_check(F->s_610)).a_;
}
if (((*(P169)rt_nil_check(F->c_1902)).kind_ != ((rt_int)8LL))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->s_610)).line_, rt_g_lit("not a procedure call", 20));
}
f_gcall_855(F->up, F->c_1902, 1, &F->t_1903, &F->v_1904);
f_emit_230(F->up, cat_rt_gstr((*(P135)rt_nil_check(F->v_1904)), one_rt_gstr(59)));
ret_:

  return;
}

static void f_gen_if_613(struct f_greenc_1fr *up_, P169 s_612) {
  struct f_gen_if_613fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_612 = s_612;
F->a_1905 = NULL;
F->a_1905 = (*(P169)rt_nil_check(F->s_612)).a_;
F->first_1906 = 1;
F->t_1907 = NULL;
F->v_1908 = NULL;
while ((F->a_1905 != NULL)) {
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->a_1905)).a_, F->up->ty_bool_152, &F->t_1907, &F->v_1908);
f_check_type_423(F->up, F->t_1907, F->up->ty_bool_152, (*(P169)rt_nil_check(F->s_612)).line_);
if (F->first_1906) {
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P135)rt_nil_check(F->v_1908))), rt_g_lit(") {", 3)));
} else {
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P135)rt_nil_check(F->v_1908))), rt_g_lit(") {", 3)));
}
F->first_1906 = 0;
f_gen_statements_592(F->up, (*(P169)rt_nil_check(F->a_1905)).b_);
F->a_1905 = (*(P169)rt_nil_check(F->a_1905)).next_;
}
L_end_1909: ;
if (((*(P169)rt_nil_check(F->s_612)).flag_ == ((rt_int)1LL))) {
f_emit_230(F->up, rt_g_lit("} else {", 8));
f_gen_statements_592(F->up, (*(P169)rt_nil_check(F->s_612)).b_);
}
f_emit_230(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_gen_case_615(struct f_greenc_1fr *up_, P169 s_614) {
  struct f_gen_case_615fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_614 = s_614;
F->st_1910 = NULL;
F->vt_1911 = NULL;
F->first_1912 = 1;
F->a_1913 = NULL;
F->a_1913 = (*(P169)rt_nil_check(F->s_614)).b_;
F->lab_1914 = NULL;
F->sel_1915 = NULL;
F->tmp_1916 = NULL;
F->ct_1917 = NULL;
F->conds_1918 = NULL;
F->v_1919 = NULL;
F->lo_1920 = NULL;
F->hi_1921 = NULL;
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->s_614)).a_, NULL, &F->st_1910, &F->sel_1915);
f_new_name_206(F->up, rt_g_lit("sel", 3), &F->tmp_1916);
f_ctype_428(F->up, F->st_1910, &F->ct_1917);
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P135)rt_nil_check(F->ct_1917))), one_rt_gstr(32)), (*(P135)rt_nil_check(F->tmp_1916))), rt_g_lit(" = ", 3)), (*(P135)rt_nil_check(F->sel_1915))), one_rt_gstr(59)));
while ((F->a_1913 != NULL)) {
F->lab_1914 = (*(P169)rt_nil_check(F->a_1913)).a_;
F->conds_1918 = f_mk_203(F->up, rt_g_lit("0", 1));
while ((F->lab_1914 != NULL)) {
if (((*(P169)rt_nil_check(F->lab_1914)).b_ == NULL)) {
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->lab_1914)).a_, F->st_1910, &F->vt_1911, &F->v_1919);
f_check_type_423(F->up, F->vt_1911, F->st_1910, (*(P169)rt_nil_check(F->s_614)).line_);
F->conds_1918 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->conds_1918)), rt_g_lit(" || ", 4)), (*(P135)rt_nil_check(F->tmp_1916))), rt_g_lit(" == ", 4)), (*(P135)rt_nil_check(F->v_1919))));
} else {
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->lab_1914)).a_, F->st_1910, &F->vt_1911, &F->lo_1920);
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->lab_1914)).b_, F->st_1910, &F->vt_1911, &F->hi_1921);
F->conds_1918 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->conds_1918)), rt_g_lit(" || (", 5)), (*(P135)rt_nil_check(F->tmp_1916))), rt_g_lit(" >= ", 4)), (*(P135)rt_nil_check(F->lo_1920))), rt_g_lit(" && ", 4)), (*(P135)rt_nil_check(F->tmp_1916))), rt_g_lit(" <= ", 4)), (*(P135)rt_nil_check(F->hi_1921))), one_rt_gstr(41)));
}
F->lab_1914 = (*(P169)rt_nil_check(F->lab_1914)).next_;
}
L_end_1923: ;
if (F->first_1912) {
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P135)rt_nil_check(F->conds_1918))), rt_g_lit(") {", 3)));
} else {
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P135)rt_nil_check(F->conds_1918))), rt_g_lit(") {", 3)));
}
F->first_1912 = 0;
f_gen_statements_592(F->up, (*(P169)rt_nil_check(F->a_1913)).b_);
F->a_1913 = (*(P169)rt_nil_check(F->a_1913)).next_;
}
L_end_1922: ;
if (F->first_1912) {
f_emit_230(F->up, rt_g_lit("{", 1));
} else {
f_emit_230(F->up, rt_g_lit("} else {", 8));
}
if (((*(P169)rt_nil_check(F->s_614)).flag_ == ((rt_int)1LL))) {
f_gen_statements_592(F->up, (*(P169)rt_nil_check(F->s_614)).c_);
} else {
f_emit_230(F->up, rt_g_lit("rt_raise(RT_X_CASE);", 20));
}
f_emit_230(F->up, rt_g_lit("}", 1));
f_emit_230(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_push_exit_619(struct f_greenc_1fr *up_, P135 match_616, int is_loop_617, P135 *label_618) {
  struct f_push_exit_619fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->match_616 = match_616;
F->is_loop_617 = is_loop_617;
F->label_618 = label_618;
f_new_name_206(F->up, rt_g_lit("L_end_", 6), &(*F->label_618));
F->up->exits_140 = ({ R139 *cell1924 = rt_alloc(sizeof(R139)); *cell1924 = cp_R139(({ R139 ag1925; ag1925.match_ = F->match_616; ag1925.label_ = (*F->label_618); ag1925.depth_ = F->up->frames_145; ag1925.is_loop_ = F->is_loop_617; ag1925.next_ = F->up->exits_140; ag1925; })); (P138)cell1924; });
ret_:

  return;
}

static void f_gen_loop_621(struct f_greenc_1fr *up_, P169 s_620) {
  struct f_gen_loop_621fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_620 = s_620;
F->t_1926 = NULL;
F->vt_1927 = NULL;
F->c_1928 = NULL;
F->label_1929 = NULL;
F->cond_1930 = NULL;
F->acc_1931 = NULL;
F->lov_1932 = NULL;
F->hiv_1933 = NULL;
F->it_1934 = NULL;
F->y_1935 = NULL;
F->r_1936 = NULL;
f_push_exit_619(F->up, (*(P169)rt_nil_check(F->s_620)).tag_, 1, &F->label_1929);
if (((*(P169)rt_nil_check(F->s_620)).flag_ == ((rt_int)0LL))) {
f_emit_230(F->up, rt_g_lit("for (;;) {", 10));
f_gen_statements_592(F->up, (*(P169)rt_nil_check(F->s_620)).b_);
f_emit_230(F->up, rt_g_lit("}", 1));
} else if (((*(P169)rt_nil_check(F->s_620)).flag_ == ((rt_int)1LL))) {
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->s_620)).a_, F->up->ty_bool_152, &F->vt_1927, &F->cond_1930);
f_check_type_423(F->up, F->vt_1927, F->up->ty_bool_152, (*(P169)rt_nil_check(F->s_620)).line_);
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("while (", 7), (*(P135)rt_nil_check(F->cond_1930))), rt_g_lit(") {", 3)));
f_gen_statements_592(F->up, (*(P169)rt_nil_check(F->s_620)).b_);
f_emit_230(F->up, rt_g_lit("}", 1));
} else {
F->r_1936 = (*(P169)rt_nil_check(F->s_620)).a_;
F->c_1928 = f_new_cons_417(F->up);
if (((*(P169)rt_nil_check(F->r_1936)).kind_ == ((rt_int)14LL))) {
f_range_bounds_683(F->up, (*(P169)rt_nil_check(F->r_1936)).a_, (*(P169)rt_nil_check(F->r_1936)).b_, NULL, (*(P169)rt_nil_check(F->s_620)).line_, &F->t_1926, &(*(P173)rt_nil_check(F->c_1928)).lo_, &(*(P173)rt_nil_check(F->c_1928)).hi_);
} else {
f_resolve_444(F->up, F->r_1936, &F->t_1926, &F->c_1928);
if (((*(P173)rt_nil_check(F->c_1928)).lo_ == NULL)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->s_620)).line_, rt_g_lit("a FOR loop needs a discrete range", 33));
}
}
if ((((((*(P117)rt_nil_check(F->t_1926)).kind_ != ((rt_int)1LL)) && ((*(P117)rt_nil_check(F->t_1926)).kind_ != ((rt_int)4LL))) && ((*(P117)rt_nil_check(F->t_1926)).kind_ != ((rt_int)11LL))) && ((*(P117)rt_nil_check(F->t_1926)).kind_ != ((rt_int)2LL)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->s_620)).line_, rt_g_lit("a FOR loop needs a discrete range (RM79 5.6)", 44));
}
f_storage_565(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->s_620)).name_)), F->t_1926, &F->acc_1931);
f_new_name_206(F->up, rt_g_lit("lo", 2), &F->lov_1932);
f_new_name_206(F->up, rt_g_lit("hi", 2), &F->hiv_1933);
f_new_name_206(F->up, rt_g_lit("it", 2), &F->it_1934);
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_int ", 9), (*(P135)rt_nil_check(F->lov_1932))), rt_g_lit(" = ", 3)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_1928)).lo_))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check(F->hiv_1933))), rt_g_lit(" = ", 3)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_1928)).hi_))), one_rt_gstr(59)));
if (((*(P169)rt_nil_check(F->s_620)).ival_ == ((rt_int)1LL))) {
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P135)rt_nil_check(F->it_1934))), rt_g_lit(" = ", 3)), (*(P135)rt_nil_check(F->hiv_1933))), rt_g_lit("; ", 2)), (*(P135)rt_nil_check(F->it_1934))), rt_g_lit(" >= ", 4)), (*(P135)rt_nil_check(F->lov_1932))), rt_g_lit("; ", 2)), (*(P135)rt_nil_check(F->it_1934))), rt_g_lit("--) {", 5)));
} else {
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P135)rt_nil_check(F->it_1934))), rt_g_lit(" = ", 3)), (*(P135)rt_nil_check(F->lov_1932))), rt_g_lit("; ", 2)), (*(P135)rt_nil_check(F->it_1934))), rt_g_lit(" <= ", 4)), (*(P135)rt_nil_check(F->hiv_1933))), rt_g_lit("; ", 2)), (*(P135)rt_nil_check(F->it_1934))), rt_g_lit("++) {", 5)));
}
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->acc_1931)), rt_g_lit(" = ", 3)), (*(P135)rt_nil_check(F->it_1934))), one_rt_gstr(59)));
f_open_scope_410(F->up);
F->y_1935 = f_new_sym_414(F->up, ((rt_int)2LL), (*(P169)rt_nil_check(F->s_620)).name_);
(*(P112)rt_nil_check(F->y_1935)).t_ = F->t_1926;
(*(P112)rt_nil_check(F->y_1935)).ro_ = 1;
f_bind_568(F->up, F->y_1935, F->acc_1931);
f_define_409(F->up, F->y_1935, (*(P169)rt_nil_check(F->s_620)).line_);
f_gen_statements_592(F->up, (*(P169)rt_nil_check(F->s_620)).b_);
f_close_scope_411(F->up);
f_emit_230(F->up, rt_g_lit("}", 1));
f_emit_230(F->up, rt_g_lit("}", 1));
}
F->up->exits_140 = (*(P138)rt_nil_check(F->up->exits_140)).next_;
f_emit_230(F->up, cat_rt_gstr((*(P135)rt_nil_check(F->label_1929)), rt_g_lit(": ;", 3)));
ret_:

  return;
}

static void f_gen_block_623(struct f_greenc_1fr *up_, P169 s_622) {
  struct f_gen_block_623fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_622 = s_622;
F->label_1937 = NULL;
F->aw_1938 = NULL;
f_push_exit_619(F->up, (*(P169)rt_nil_check(F->s_622)).tag_, 0, &F->label_1937);
f_emit_230(F->up, rt_g_lit("{", 1));
f_open_scope_410(F->up);
f_decl_elements_577(F->up, (*(P169)rt_nil_check(F->s_622)).a_);
f_guarded_601(F->up, (*(P169)rt_nil_check(F->s_622)).b_, (*(P169)rt_nil_check(F->s_622)).c_, (*(P169)rt_nil_check(F->s_622)).line_);
f_task_awaits_982(F->up, (*(P169)rt_nil_check(F->s_622)).a_, &F->aw_1938);
f_emit_230(F->up, (*(P135)rt_nil_check(F->aw_1938)));
f_close_scope_411(F->up);
f_emit_230(F->up, rt_g_lit("}", 1));
F->up->exits_140 = (*(P138)rt_nil_check(F->up->exits_140)).next_;
f_emit_230(F->up, cat_rt_gstr((*(P135)rt_nil_check(F->label_1937)), rt_g_lit(": ;", 3)));
ret_:

  return;
}

static void f_gen_exit_625(struct f_greenc_1fr *up_, P169 s_624) {
  struct f_gen_exit_625fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_624 = s_624;
F->x_1939 = NULL;
F->x_1939 = F->up->exits_140;
F->t_1940 = NULL;
F->v_1941 = NULL;
while ((F->x_1939 != NULL)) {
if (((F->up->accept_depth_179 > ((rt_int)0LL)) && (F->x_1939 == F->up->accept_exits_144))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->s_624)).line_, rt_g_lit("an exit statement cannot leave an accept statement (RM79 5.7)", 61));
}
if (((((*(P169)rt_nil_check(F->s_624)).name_ == NULL) && (*(P138)rt_nil_check(F->x_1939)).is_loop_) || ((((*(P169)rt_nil_check(F->s_624)).name_ != NULL) && ((*(P138)rt_nil_check(F->x_1939)).match_ != NULL)) && eq_rt_gstr((*(P135)rt_nil_check((*(P138)rt_nil_check(F->x_1939)).match_)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->s_624)).name_)))))) {
if (((*(P169)rt_nil_check(F->s_624)).a_ != NULL)) {
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->s_624)).a_, F->up->ty_bool_152, &F->t_1940, &F->v_1941);
f_check_type_423(F->up, F->t_1940, F->up->ty_bool_152, (*(P169)rt_nil_check(F->s_624)).line_);
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P135)rt_nil_check(F->v_1941))), rt_g_lit(") {", 3)));
}
f_pop_frames_594(F->up, (*(P138)rt_nil_check(F->x_1939)).depth_);
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("goto ", 5), (*(P135)rt_nil_check((*(P138)rt_nil_check(F->x_1939)).label_))), one_rt_gstr(59)));
if (((*(P169)rt_nil_check(F->s_624)).a_ != NULL)) {
f_emit_230(F->up, rt_g_lit("}", 1));
}
goto ret_;
}
F->x_1939 = (*(P138)rt_nil_check(F->x_1939)).next_;
}
L_end_1942: ;
if (((*(P169)rt_nil_check(F->s_624)).name_ == NULL)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->s_624)).line_, rt_g_lit("exit outside a loop", 19));
}
f_fail_224(F->up, (*(P169)rt_nil_check(F->s_624)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("exit ", 5), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->s_624)).name_))), rt_g_lit(" names no enclosing loop", 24)));
ret_:

  return;
}

static void f_gen_return_627(struct f_greenc_1fr *up_, P169 s_626) {
  struct f_gen_return_627fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_626 = s_626;
F->vt_1943 = NULL;
F->v_1944 = NULL;
if ((!F->up->in_func_133)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->s_626)).line_, rt_g_lit("return outside a subprogram", 27));
}
if ((F->up->accept_depth_179 > ((rt_int)0LL))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->s_626)).line_, rt_g_lit("a return statement cannot appear in an accept statement (RM79 5.3)", 66));
}
if (((*(P117)rt_nil_check((*(P112)rt_nil_check(F->up->func_sym_137)).result_)).kind_ == ((rt_int)9LL))) {
if (((*(P169)rt_nil_check(F->s_626)).a_ != NULL)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->s_626)).line_, rt_g_lit("a procedure returns no value", 28));
}
f_pop_frames_594(F->up, ((rt_int)0LL));
f_emit_230(F->up, rt_g_lit("goto ret_;", 10));
goto ret_;
}
if (((*(P169)rt_nil_check(F->s_626)).a_ == NULL)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->s_626)).line_, rt_g_lit("return needs a value here", 25));
}
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->s_626)).a_, (*(P112)rt_nil_check(F->up->func_sym_137)).result_, &F->vt_1943, &F->v_1944);
f_check_type_423(F->up, F->vt_1943, (*(P112)rt_nil_check(F->up->func_sym_137)).result_, (*(P169)rt_nil_check(F->s_626)).line_);
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->result_ = ", 13), (*(P135)rt_nil_check(F->v_1944))), one_rt_gstr(59)));
f_pop_frames_594(F->up, ((rt_int)0LL));
f_emit_230(F->up, rt_g_lit("goto ret_;", 10));
ret_:

  return;
}

static void f_access_of_630(struct f_greenc_1fr *up_, P112 y_628, P135 *r_629) {
  struct f_access_of_630fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_628 = y_628;
F->r_629 = r_629;
F->p_1945 = NULL;
if (((*(P112)rt_nil_check(F->y_628)).level_ <= ((rt_int)0LL))) {
(*F->r_629) = (*(P112)rt_nil_check(F->y_628)).access_path_;
goto ret_;
}
F->p_1945 = f_mk_203(F->up, rt_g_lit("F", 1));
{ rt_int lo1948 = ((rt_int)1LL), hi1949 = rt_sub(F->up->cur_level_134, (*(P112)rt_nil_check(F->y_628)).level_);
for (rt_int it1950 = lo1948; it1950 <= hi1949; it1950++) {
F->i_1947 = it1950;
F->p_1945 = f_mk_203(F->up, cat_rt_gstr((*(P135)rt_nil_check(F->p_1945)), rt_g_lit("->up", 4)));
}
}
L_end_1946: ;
if ((*(P112)rt_nil_check(F->y_628)).byref_) {
(*F->r_629) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*", 2), (*(P135)rt_nil_check(F->p_1945))), rt_g_lit("->", 2)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_628)).access_path_))), one_rt_gstr(41)));
} else {
(*F->r_629) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->p_1945)), rt_g_lit("->", 2)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_628)).access_path_))));
}
ret_:

  return;
}

static void f_link_to_633(struct f_greenc_1fr *up_, rt_int l_631, P135 *r_632) {
  struct f_link_to_633fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_631 = l_631;
F->r_632 = r_632;
(*F->r_632) = f_mk_203(F->up, rt_g_lit("F", 1));
{ rt_int lo1953 = ((rt_int)1LL), hi1954 = rt_sub(F->up->cur_level_134, F->l_631);
for (rt_int it1955 = lo1953; it1955 <= hi1954; it1955++) {
F->i_1952 = it1955;
(*F->r_632) = f_mk_203(F->up, cat_rt_gstr((*(P135)rt_nil_check((*F->r_632))), rt_g_lit("->up", 4)));
}
}
L_end_1951: ;
ret_:

  return;
}

static rt_gstr f_c_ident_635(struct f_greenc_1fr *up_, rt_gstr s_634) {
  struct f_c_ident_635fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_634 = cp_rt_gstr(s_634);
if (eq_rt_gstr(F->s_634, rt_g_lit("+", 1))) {
F->result_ = rt_g_lit("op_plus", 7);
goto ret_;
} else if (eq_rt_gstr(F->s_634, rt_g_lit("-", 1))) {
F->result_ = rt_g_lit("op_minus", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_634, rt_g_lit("*", 1))) {
F->result_ = rt_g_lit("op_times", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_634, rt_g_lit("/", 1))) {
F->result_ = rt_g_lit("op_slash", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_634, rt_g_lit("**", 2))) {
F->result_ = rt_g_lit("op_power", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_634, rt_g_lit("&", 1))) {
F->result_ = rt_g_lit("op_cat", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_634, rt_g_lit("=", 1))) {
F->result_ = rt_g_lit("op_eq", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_634, rt_g_lit("<", 1))) {
F->result_ = rt_g_lit("op_lt", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_634, rt_g_lit("<=", 2))) {
F->result_ = rt_g_lit("op_le", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_634, rt_g_lit(">", 1))) {
F->result_ = rt_g_lit("op_gt", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_634, rt_g_lit(">=", 2))) {
F->result_ = rt_g_lit("op_ge", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_634, rt_g_lit("MOD", 3))) {
F->result_ = rt_g_lit("op_mod", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_634, rt_g_lit("AND", 3))) {
F->result_ = rt_g_lit("op_and", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_634, rt_g_lit("OR", 2))) {
F->result_ = rt_g_lit("op_or", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_634, rt_g_lit("XOR", 3))) {
F->result_ = rt_g_lit("op_xor", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_634, rt_g_lit("NOT", 3))) {
F->result_ = rt_g_lit("op_not", 6);
goto ret_;
}
F->result_ = f_lower_s_214(F->up, F->s_634);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_deref_639(struct f_greenc_1fr *up_, rt_gstr base_636, P117 t_637, P135 *r_638) {
  struct f_deref_639fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_636 = cp_rt_gstr(base_636);
F->t_637 = t_637;
F->r_638 = r_638;
F->ct_1956 = NULL;
if (F->up->in_lv_path_195) {
F->up->last_deref_196 = 1;
}
f_ctype_428(F->up, F->t_637, &F->ct_1956);
(*F->r_638) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*(", 3), (*(P135)rt_nil_check(F->ct_1956))), rt_g_lit(")rt_nil_check(", 14)), F->base_636), rt_g_lit("))", 2)));
ret_:

  return;
}

static int f_is_object_641(struct f_greenc_1fr *up_, P169 e_640) {
  struct f_is_object_641fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_640 = e_640;
F->y_1957 = NULL;
if (((*(P169)rt_nil_check(F->e_640)).kind_ == ((rt_int)5LL))) {
F->y_1957 = f_lookup_381(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_640)).name_)));
F->result_ = ((F->y_1957 != NULL) && (((*(P112)rt_nil_check(F->y_1957)).kind_ == ((rt_int)1LL)) || ((*(P112)rt_nil_check(F->y_1957)).kind_ == ((rt_int)2LL))));
goto ret_;
} else if (((*(P169)rt_nil_check(F->e_640)).kind_ == ((rt_int)9LL))) {
F->result_ = f_is_object_641(F->up, (*(P169)rt_nil_check(F->e_640)).a_);
goto ret_;
} else if (((*(P169)rt_nil_check(F->e_640)).kind_ == ((rt_int)8LL))) {
if ((((*(P169)rt_nil_check(F->e_640)).b_ != NULL) && ((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_640)).b_)).kind_ == ((rt_int)14LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_object_641(F->up, (*(P169)rt_nil_check(F->e_640)).a_);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_lvalue_647(struct f_greenc_1fr *up_, P169 e_642, P135 *code_out_643, P117 *t_644, P173 *c_645, int *ro_646) {
  struct f_lvalue_647fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_642 = e_642;
F->code_out_643 = code_out_643;
F->t_644 = t_644;
F->c_645 = c_645;
F->ro_646 = ro_646;
F->y_1958 = NULL;
F->base_1959 = NULL;
F->bt_1960 = NULL;
F->bc_1961 = NULL;
if ((((*(P169)rt_nil_check(F->e_642)).kind_ == ((rt_int)5LL)) || (((*(P169)rt_nil_check(F->e_642)).kind_ == ((rt_int)9LL)) && f_is_package_869(F->up, (*(P169)rt_nil_check(F->e_642)).a_)))) {
if (((*(P169)rt_nil_check(F->e_642)).kind_ == ((rt_int)9LL))) {
F->y_1958 = f_member_of_873(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_642)).a_)).name_)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_642)).name_)), (*(P169)rt_nil_check(F->e_642)).line_);
} else {
F->y_1958 = f_lookup_381(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_642)).name_)));
}
if ((F->y_1958 == NULL)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_642)).line_, cat_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_642)).name_)), rt_g_lit(" is not declared", 16)));
}
if ((((*(P112)rt_nil_check(F->y_1958)).kind_ != ((rt_int)1LL)) && ((*(P112)rt_nil_check(F->y_1958)).kind_ != ((rt_int)2LL)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_642)).line_, cat_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_642)).name_)), rt_g_lit(" is not an object", 17)));
}
f_access_of_630(F->up, F->y_1958, &(*F->code_out_643));
(*F->t_644) = (*(P112)rt_nil_check(F->y_1958)).t_;
(*F->c_645) = (*(P112)rt_nil_check(F->y_1958)).c_;
(*F->ro_646) = (*(P112)rt_nil_check(F->y_1958)).ro_;
} else if (((*(P169)rt_nil_check(F->e_642)).kind_ == ((rt_int)15LL))) {
f_lvalue_647(F->up, (*(P169)rt_nil_check(F->e_642)).a_, &(*F->code_out_643), &(*F->t_644), &(*F->c_645), &(*F->ro_646));
} else if (((*(P169)rt_nil_check(F->e_642)).kind_ == ((rt_int)9LL))) {
f_lvalue_647(F->up, (*(P169)rt_nil_check(F->e_642)).a_, &F->base_1959, &F->bt_1960, &F->bc_1961, &(*F->ro_646));
f_select_on_656(F->up, (*(P135)rt_nil_check(F->base_1959)), F->bt_1960, F->e_642, &(*F->ro_646), 1, &(*F->code_out_643), &(*F->t_644), &(*F->c_645));
} else if (((*(P169)rt_nil_check(F->e_642)).kind_ == ((rt_int)8LL))) {
f_lvalue_647(F->up, (*(P169)rt_nil_check(F->e_642)).a_, &F->base_1959, &F->bt_1960, &F->bc_1961, &(*F->ro_646));
f_index_on_665(F->up, (*(P135)rt_nil_check(F->base_1959)), F->bt_1960, F->e_642, &(*F->ro_646), 1, &(*F->code_out_643), &(*F->t_644), &(*F->c_645));
} else {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_642)).line_, rt_g_lit("not an object", 13));
}
ret_:

  return;
}

static void f_select_on_656(struct f_greenc_1fr *up_, rt_gstr base_648, P117 bt_649, P169 e_650, int *ro_651, int lv_652, P135 *code_out_653, P117 *t_654, P173 *c_655) {
  struct f_select_on_656fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_648 = cp_rt_gstr(base_648);
F->bt_649 = bt_649;
F->e_650 = e_650;
F->ro_651 = ro_651;
F->lv_652 = lv_652;
F->code_out_653 = code_out_653;
F->t_654 = t_654;
F->c_655 = c_655;
F->f_1962 = NULL;
F->d_1963 = NULL;
F->ct_1964 = NULL;
F->tmp_1965 = NULL;
(*F->c_655) = F->up->no_cons_186;
if (((*(P117)rt_nil_check(F->bt_649)).kind_ == ((rt_int)8LL))) {
f_finish_ptr_534(F->up, F->bt_649);
f_deref_639(F->up, F->base_648, F->bt_649, &F->d_1963);
(*F->ro_651) = 0;
if (eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_650)).name_)), rt_g_lit("ALL", 3))) {
(*F->code_out_653) = F->d_1963;
(*F->t_654) = (*(P117)rt_nil_check(F->bt_649)).target_;
goto ret_;
}
f_select_on_656(F->up, (*(P135)rt_nil_check(F->d_1963)), (*(P117)rt_nil_check(F->bt_649)).target_, F->e_650, &(*F->ro_651), 1, &(*F->code_out_653), &(*F->t_654), &(*F->c_655));
goto ret_;
}
if (((*(P117)rt_nil_check(F->bt_649)).kind_ == ((rt_int)7LL))) {
if (((*(P117)rt_nil_check(F->bt_649)).priv_ && (!f_inside_package_875(F->up, (*(P117)rt_nil_check(F->bt_649)).decl_)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_650)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("the components of private type ", 31), f_kind_name_419(F->up, F->bt_649)), rt_g_lit(" are not visible here (RM79 7.4)", 32)));
}
F->f_1962 = (*(P117)rt_nil_check(F->bt_649)).fields_;
while ((F->f_1962 != NULL)) {
if (eq_rt_gstr((*(P135)rt_nil_check((*(P1600)rt_nil_check(F->f_1962)).name_)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_650)).name_)))) {
f_subst_cons_506(F->up, (*(P1600)rt_nil_check(F->f_1962)).c_, F->base_648, &(*F->c_655));
(*F->code_out_653) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(F->base_648, one_rt_gstr(46)), f_c_field_220(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_650)).name_)))));
(*F->t_654) = (*(P1600)rt_nil_check(F->f_1962)).t_;
if ((*(P1600)rt_nil_check(F->f_1962)).is_const_) {
(*F->ro_651) = 1;
}
if (((*(P1600)rt_nil_check(F->f_1962)).cond_ != NULL)) {
f_ctype_428(F->up, F->bt_649, &F->ct_1964);
f_new_name_206(F->up, rt_g_lit("vr", 2), &F->tmp_1965);
if (F->lv_652) {
(*F->code_out_653) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*({ ", 5), (*(P135)rt_nil_check(F->ct_1964))), rt_g_lit(" *", 2)), (*(P135)rt_nil_check(F->tmp_1965))), rt_g_lit(" = &(", 5)), F->base_648), rt_g_lit("); if (!(", 9)), f_subst_500(F->up, (*(P135)rt_nil_check((*(P1600)rt_nil_check(F->f_1962)).cond_)), cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*", 2), (*(P135)rt_nil_check(F->tmp_1965))), one_rt_gstr(41)))), rt_g_lit(")) rt_raise(RT_X_TAG); &", 24)), (*(P135)rt_nil_check(F->tmp_1965))), rt_g_lit("->", 2)), f_c_field_220(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_650)).name_)))), rt_g_lit("; }))", 5)));
} else {
(*F->code_out_653) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P135)rt_nil_check(F->ct_1964))), one_rt_gstr(32)), (*(P135)rt_nil_check(F->tmp_1965))), rt_g_lit(" = ", 3)), F->base_648), rt_g_lit("; if (!(", 8)), f_subst_500(F->up, (*(P135)rt_nil_check((*(P1600)rt_nil_check(F->f_1962)).cond_)), (*(P135)rt_nil_check(F->tmp_1965)))), rt_g_lit(")) rt_raise(RT_X_TAG); ", 23)), (*(P135)rt_nil_check(F->tmp_1965))), one_rt_gstr(46)), f_c_field_220(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_650)).name_)))), rt_g_lit("; })", 4)));
}
}
goto ret_;
}
F->f_1962 = (*(P1600)rt_nil_check(F->f_1962)).next_;
}
L_end_1966: ;
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_650)).line_, cat_rt_gstr(cat_rt_gstr(f_kind_name_419(F->up, F->bt_649), rt_g_lit(" has no component ", 18)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_650)).name_))));
}
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_650)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("cannot select ", 14), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_650)).name_))), rt_g_lit(" here", 5)));
ret_:

  return;
}

static void f_index_on_665(struct f_greenc_1fr *up_, rt_gstr base_657, P117 bt_658, P169 e_659, int *ro_660, int lv_661, P135 *code_out_662, P117 *t_663, P173 *c_664) {
  struct f_index_on_665fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_657 = cp_rt_gstr(base_657);
F->bt_658 = bt_658;
F->e_659 = e_659;
F->ro_660 = ro_660;
F->lv_661 = lv_661;
F->code_out_662 = code_out_662;
F->t_663 = t_663;
F->c_664 = c_664;
F->a_1967 = NULL;
F->a_1967 = (*(P169)rt_nil_check(F->e_659)).b_;
F->arrt_1968 = NULL;
F->arrt_1968 = F->bt_658;
F->acc_1969 = NULL;
F->acc_1969 = f_mk_203(F->up, F->base_657);
F->it_1970 = NULL;
F->i_1971 = NULL;
F->lo_1972 = NULL;
F->hi_1973 = NULL;
F->d_1974 = NULL;
F->ct_1975 = NULL;
F->tmp_1976 = NULL;
(*F->c_664) = F->up->no_cons_186;
if (((*(P117)rt_nil_check(F->bt_658)).kind_ == ((rt_int)8LL))) {
f_finish_ptr_534(F->up, F->bt_658);
f_deref_639(F->up, F->base_657, F->bt_658, &F->d_1974);
(*F->ro_660) = 0;
f_index_on_665(F->up, (*(P135)rt_nil_check(F->d_1974)), (*(P117)rt_nil_check(F->bt_658)).target_, F->e_659, &(*F->ro_660), F->lv_661, &(*F->code_out_662), &(*F->t_663), &(*F->c_664));
goto ret_;
}
if (((*(P117)rt_nil_check(F->bt_658)).kind_ != ((rt_int)6LL))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_659)).line_, rt_g_lit("cannot index this", 17));
}
if ((F->a_1967 == NULL)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_659)).line_, rt_g_lit("an index is required", 20));
}
if (((((*(P169)rt_nil_check(F->a_1967)).kind_ == ((rt_int)14LL)) || ((*(P169)rt_nil_check(F->a_1967)).kind_ == ((rt_int)80LL))) || (((*(P169)rt_nil_check(F->a_1967)).kind_ == ((rt_int)5LL)) && f_is_type_name_667(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->a_1967)).name_)))))) {
if ((((*(P169)rt_nil_check(F->a_1967)).next_ != NULL) || ((*(P117)rt_nil_check(F->bt_658)).dims_ != ((rt_int)1LL)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_659)).line_, rt_g_lit("a slice is taken of a one-dimensional array (RM79 4.3)", 54));
}
f_discrete_bounds_458(F->up, F->a_1967, (*(P117)rt_nil_check(F->bt_658)).idx_, &F->it_1970, &F->lo_1972, &F->hi_1973);
f_check_type_423(F->up, F->it_1970, (*(P117)rt_nil_check(F->bt_658)).idx_, (*(P169)rt_nil_check(F->e_659)).line_);
f_ctype_428(F->up, F->bt_658, &F->d_1974);
f_new_name_206(F->up, rt_g_lit("sl", 2), &F->tmp_1976);
(*F->code_out_662) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P135)rt_nil_check(F->d_1974))), one_rt_gstr(32)), (*(P135)rt_nil_check(F->tmp_1976))), rt_g_lit(" = ", 3)), F->base_657), rt_g_lit("; rt_int l_ = ", 14)), (*(P135)rt_nil_check(F->lo_1972))), rt_g_lit(", h_ = ", 7)), (*(P135)rt_nil_check(F->hi_1973))), rt_g_lit("; if (l_ <= h_) { rt_index(l_, ", 31)), (*(P135)rt_nil_check(F->tmp_1976))), rt_g_lit(".lo, ", 5)), (*(P135)rt_nil_check(F->tmp_1976))), rt_g_lit(".hi); ", 6)), rt_g_lit("rt_index(h_, ", 13)), (*(P135)rt_nil_check(F->tmp_1976))), rt_g_lit(".lo, ", 5)), (*(P135)rt_nil_check(F->tmp_1976))), rt_g_lit(".hi); } ", 8)), (*(P135)rt_nil_check(F->tmp_1976))), rt_g_lit(".p += l_ - ", 11)), (*(P135)rt_nil_check(F->tmp_1976))), rt_g_lit(".lo; ", 5)), (*(P135)rt_nil_check(F->tmp_1976))), rt_g_lit(".lo = l_; ", 10)), (*(P135)rt_nil_check(F->tmp_1976))), rt_g_lit(".hi = h_; ", 10)), (*(P135)rt_nil_check(F->tmp_1976))), rt_g_lit("; })", 4)));
(*F->t_663) = F->bt_658;
(*F->ro_660) = 1;
goto ret_;
}
if ((f_list_len_280(F->up, F->a_1967) > (*(P117)rt_nil_check(F->bt_658)).dims_)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_659)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("too many indexes for ", 21), f_kind_name_419(F->up, F->bt_658)), rt_g_lit(" (RM79 4.1.1)", 13)));
}
while ((F->a_1967 != NULL)) {
f_gexpr_688(F->up, F->a_1967, (*(P117)rt_nil_check(F->arrt_1968)).idx_, &F->it_1970, &F->i_1971);
f_check_type_423(F->up, F->it_1970, (*(P117)rt_nil_check(F->arrt_1968)).idx_, (*(P169)rt_nil_check(F->e_659)).line_);
f_ctype_428(F->up, F->arrt_1968, &F->ct_1975);
f_new_name_206(F->up, rt_g_lit("ix", 2), &F->tmp_1976);
if (F->lv_661) {
F->acc_1969 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*({ ", 5), (*(P135)rt_nil_check(F->ct_1975))), rt_g_lit(" *", 2)), (*(P135)rt_nil_check(F->tmp_1976))), rt_g_lit(" = &(", 5)), (*(P135)rt_nil_check(F->acc_1969))), rt_g_lit("); &", 4)), (*(P135)rt_nil_check(F->tmp_1976))), rt_g_lit("->p[rt_index(", 13)), (*(P135)rt_nil_check(F->i_1971))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check(F->tmp_1976))), rt_g_lit("->lo, ", 6)), (*(P135)rt_nil_check(F->tmp_1976))), rt_g_lit("->hi) - ", 8)), (*(P135)rt_nil_check(F->tmp_1976))), rt_g_lit("->lo]; }))", 10)));
} else {
F->acc_1969 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P135)rt_nil_check(F->ct_1975))), one_rt_gstr(32)), (*(P135)rt_nil_check(F->tmp_1976))), rt_g_lit(" = ", 3)), (*(P135)rt_nil_check(F->acc_1969))), rt_g_lit("; ", 2)), (*(P135)rt_nil_check(F->tmp_1976))), rt_g_lit(".p[rt_index(", 12)), (*(P135)rt_nil_check(F->i_1971))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check(F->tmp_1976))), rt_g_lit(".lo, ", 5)), (*(P135)rt_nil_check(F->tmp_1976))), rt_g_lit(".hi) - ", 7)), (*(P135)rt_nil_check(F->tmp_1976))), rt_g_lit(".lo]; })", 8)));
}
(*F->c_664) = (*(P117)rt_nil_check(F->arrt_1968)).elemcons_;
F->arrt_1968 = (*(P117)rt_nil_check(F->arrt_1968)).elem_;
F->a_1967 = (*(P169)rt_nil_check(F->a_1967)).next_;
}
L_end_1977: ;
(*F->code_out_662) = F->acc_1969;
(*F->t_663) = F->arrt_1968;
if ((!F->lv_661)) {
(*F->ro_660) = 1;
}
ret_:

  return;
}

static int f_is_type_name_667(struct f_greenc_1fr *up_, rt_gstr n_666) {
  struct f_is_type_name_667fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_666 = cp_rt_gstr(n_666);
F->y_1978 = NULL;
F->y_1978 = f_lookup_381(F->up, F->n_666);
F->result_ = ((F->y_1978 != NULL) && ((*(P112)rt_nil_check(F->y_1978)).kind_ == ((rt_int)5LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_char_lit_669(struct f_greenc_1fr *up_, P169 e_668) {
  struct f_is_char_lit_669fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_668 = e_668;
F->result_ = (((*(P169)rt_nil_check(F->e_668)).kind_ == ((rt_int)3LL)) && (({ rt_gstr at1979 = (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_668)).name_)); at1979.hi >= at1979.lo ? at1979.hi - at1979.lo + 1 : (rt_int)0; }) == ((rt_int)1LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_enum_lit_671(struct f_greenc_1fr *up_, P169 e_670) {
  struct f_is_enum_lit_671fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_670 = e_670;
F->y_1980 = NULL;
if (((*(P169)rt_nil_check(F->e_670)).kind_ != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->y_1980 = f_lookup_381(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_670)).name_)));
F->result_ = ((F->y_1980 != NULL) && ((*(P112)rt_nil_check(F->y_1980)).kind_ == ((rt_int)7LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_c_string_673(struct f_greenc_1fr *up_, rt_gstr s_672) {
  struct f_c_string_673fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_672 = cp_rt_gstr(s_672);
F->n_1981 = ((rt_int)0LL);
{ rt_int lo1985 = ((rt_int)1LL), hi1986 = ({ rt_gstr at1983 = F->s_672; at1983.hi >= at1983.lo ? at1983.hi - at1983.lo + 1 : (rt_int)0; });
for (rt_int it1987 = lo1985; it1987 <= hi1986; it1987++) {
F->i_1984 = it1987;
if ((((({ rt_gstr ix1988 = F->s_672; ix1988.p[rt_index(F->i_1984, ix1988.lo, ix1988.hi) - ix1988.lo]; }) == 34) || (({ rt_gstr ix1989 = F->s_672; ix1989.p[rt_index(F->i_1984, ix1989.lo, ix1989.hi) - ix1989.lo]; }) == 92)) || (({ rt_gstr ix1990 = F->s_672; ix1990.p[rt_index(F->i_1984, ix1990.lo, ix1990.hi) - ix1990.lo]; }) == 63))) {
F->n_1981 = rt_add(F->n_1981, ((rt_int)1LL));
}
}
}
L_end_1982: ;
{
F->r_1993.lo = ((rt_int)1LL); F->r_1993.hi = rt_add(rt_add(({ rt_gstr at1992 = F->s_672; at1992.hi >= at1992.lo ? at1992.hi - at1992.lo + 1 : (rt_int)0; }), F->n_1981), ((rt_int)2LL));
F->r_1993.lo2 = 1; F->r_1993.hi2 = 1;
F->r_1993.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->r_1993));
F->j_1994 = ((rt_int)1LL);
(*({ rt_gstr *ix1995 = &(F->r_1993); &ix1995->p[rt_index(((rt_int)1LL), ix1995->lo, ix1995->hi) - ix1995->lo]; })) = 34;
{ rt_int lo1999 = ((rt_int)1LL), hi2000 = ({ rt_gstr at1997 = F->s_672; at1997.hi >= at1997.lo ? at1997.hi - at1997.lo + 1 : (rt_int)0; });
for (rt_int it2001 = lo1999; it2001 <= hi2000; it2001++) {
F->i_1998 = it2001;
F->j_1994 = rt_add(F->j_1994, ((rt_int)1LL));
if ((((({ rt_gstr ix2002 = F->s_672; ix2002.p[rt_index(F->i_1998, ix2002.lo, ix2002.hi) - ix2002.lo]; }) == 34) || (({ rt_gstr ix2003 = F->s_672; ix2003.p[rt_index(F->i_1998, ix2003.lo, ix2003.hi) - ix2003.lo]; }) == 92)) || (({ rt_gstr ix2004 = F->s_672; ix2004.p[rt_index(F->i_1998, ix2004.lo, ix2004.hi) - ix2004.lo]; }) == 63))) {
(*({ rt_gstr *ix2005 = &(F->r_1993); &ix2005->p[rt_index(F->j_1994, ix2005->lo, ix2005->hi) - ix2005->lo]; })) = 92;
F->j_1994 = rt_add(F->j_1994, ((rt_int)1LL));
}
(*({ rt_gstr *ix2006 = &(F->r_1993); &ix2006->p[rt_index(F->j_1994, ix2006->lo, ix2006->hi) - ix2006->lo]; })) = ({ rt_gstr ix2007 = F->s_672; ix2007.p[rt_index(F->i_1998, ix2007.lo, ix2007.hi) - ix2007.lo]; });
}
}
L_end_1996: ;
(*({ rt_gstr *ix2008 = &(F->r_1993); &ix2008->p[rt_index(rt_add(F->j_1994, ((rt_int)1LL)), ix2008->lo, ix2008->hi) - ix2008->lo]; })) = 34;
F->result_ = F->r_1993;
goto ret_;

}
L_end_1991: ;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_literal_675(struct f_greenc_1fr *up_, P169 e_674) {
  struct f_is_literal_675fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_674 = e_674;
if (((((*(P169)rt_nil_check(F->e_674)).kind_ == ((rt_int)1LL)) || ((*(P169)rt_nil_check(F->e_674)).kind_ == ((rt_int)2LL))) || f_is_char_lit_669(F->up, F->e_674))) {
F->result_ = 1;
goto ret_;
} else if ((((*(P169)rt_nil_check(F->e_674)).kind_ == ((rt_int)15LL)) || (((*(P169)rt_nil_check(F->e_674)).kind_ == ((rt_int)6LL)) && (!eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_674)).name_)), rt_g_lit("NOT", 3)))))) {
F->result_ = f_is_literal_675(F->up, (*(P169)rt_nil_check(F->e_674)).a_);
goto ret_;
} else if ((((*(P169)rt_nil_check(F->e_674)).kind_ == ((rt_int)7LL)) && (((((eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_674)).name_)), rt_g_lit("+", 1)) || eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_674)).name_)), rt_g_lit("-", 1))) || eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_674)).name_)), rt_g_lit("*", 1))) || eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_674)).name_)), rt_g_lit("/", 1))) || eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_674)).name_)), rt_g_lit("**", 2))) || eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_674)).name_)), rt_g_lit("MOD", 3))))) {
F->result_ = (f_is_literal_675(F->up, (*(P169)rt_nil_check(F->e_674)).a_) && f_is_literal_675(F->up, (*(P169)rt_nil_check(F->e_674)).b_));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_range_bounds_683(struct f_greenc_1fr *up_, P169 l_676, P169 h_677, P117 want_678, rt_int line_679, P117 *t_680, P135 *lo_681, P135 *hi_682) {
  struct f_range_bounds_683fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_676 = l_676;
F->h_677 = h_677;
F->want_678 = want_678;
F->line_679 = line_679;
F->t_680 = t_680;
F->lo_681 = lo_681;
F->hi_682 = hi_682;
F->w_2009 = NULL;
F->w_2009 = F->want_678;
F->t2_2010 = NULL;
if ((((F->w_2009 == NULL) && f_is_char_lit_669(F->up, F->l_676)) && f_is_char_lit_669(F->up, F->h_677))) {
F->w_2009 = F->up->ty_char_154;
}
if ((((F->w_2009 == NULL) && f_is_literal_675(F->up, F->l_676)) && (!f_is_literal_675(F->up, F->h_677)))) {
f_gexpr_688(F->up, F->h_677, NULL, &(*F->t_680), &(*F->hi_682));
f_gexpr_688(F->up, F->l_676, (*F->t_680), &F->t2_2010, &(*F->lo_681));
f_check_type_423(F->up, F->t2_2010, (*F->t_680), F->line_679);
} else {
f_gexpr_688(F->up, F->l_676, F->w_2009, &(*F->t_680), &(*F->lo_681));
f_gexpr_688(F->up, F->h_677, (*F->t_680), &F->t2_2010, &(*F->hi_682));
f_check_type_423(F->up, F->t2_2010, (*F->t_680), F->line_679);
}
ret_:

  return;
}

static void f_gexpr_688(struct f_greenc_1fr *up_, P169 e_684, P117 want_685, P117 *t_686, P135 *r_687) {
  struct f_gexpr_688fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_684 = e_684;
F->want_685 = want_685;
F->t_686 = t_686;
F->r_687 = r_687;
F->y_2011 = NULL;
F->bt_2012 = NULL;
F->c_2013 = NULL;
F->base_2015 = NULL;
F->a_2016 = NULL;
F->nm_2017 = NULL;
F->saved_lv_2018 = F->up->in_lv_path_195;
F->up->in_lv_path_195 = 0;
f_gexpr_1_693(F->up, F->e_684, F->want_685, &(*F->t_686), &(*F->r_687));
F->up->in_lv_path_195 = F->saved_lv_2018;
ret_:

  return;
}

static void f_gexpr_1_693(struct f_greenc_1fr *up_, P169 e_689, P117 want_690, P117 *t_691, P135 *r_692) {
  struct f_gexpr_1_693fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_689 = e_689;
F->want_690 = want_690;
F->t_691 = t_691;
F->r_692 = r_692;
F->y_2019 = NULL;
F->bt_2020 = NULL;
F->c_2021 = NULL;
F->base_2023 = NULL;
F->a_2024 = NULL;
F->nm_2025 = NULL;
(*F->t_691) = F->up->ty_int_151;
{ rt_int sel2026 = (*(P169)rt_nil_check(F->e_689)).kind_;
if (0 || sel2026 == ((rt_int)1LL)) {
if (((F->want_690 != NULL) && ((*(P117)rt_nil_check(F->want_690)).kind_ == ((rt_int)1LL)))) {
(*F->t_691) = F->want_690;
}
(*F->r_692) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int((*(P169)rt_nil_check(F->e_689)).ival_))), rt_g_lit("LL)", 3)));
} else if (0 || sel2026 == ((rt_int)2LL)) {
(*F->t_691) = F->up->ty_float_153;
(*F->r_692) = (*(P169)rt_nil_check(F->e_689)).name_;
if (((F->want_690 != NULL) && ((*(P117)rt_nil_check(F->want_690)).kind_ == ((rt_int)3LL)))) {
(*F->t_691) = F->want_690;
} else if ((((F->want_690 != NULL) && ((*(P117)rt_nil_check(F->want_690)).kind_ == ((rt_int)16LL))) && ((*(P117)rt_nil_check(F->want_690)).fsmall_ != NULL))) {
(*F->t_691) = F->want_690;
(*F->r_692) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix(", 9), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_689)).name_))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->want_690)).fsmall_))), one_rt_gstr(41)));
}
} else if (0 || sel2026 == ((rt_int)3LL)) {
if (((f_is_char_lit_669(F->up, F->e_689) && (F->want_690 != NULL)) && (((*(P117)rt_nil_check(F->want_690)).kind_ == ((rt_int)11LL)) || ((*(P117)rt_nil_check(F->want_690)).kind_ == ((rt_int)4LL))))) {
f_char_literal_703(F->up, F->e_689, F->want_690, &(*F->t_691), &(*F->r_692));
} else if ((((((F->want_690 != NULL) && ((*(P117)rt_nil_check(F->want_690)).kind_ == ((rt_int)6LL))) && ((*(P117)rt_nil_check(F->want_690)).dims_ == ((rt_int)1LL))) && (((*(P117)rt_nil_check((*(P117)rt_nil_check(F->want_690)).elem_)).kind_ == ((rt_int)11LL)) || ((*(P117)rt_nil_check((*(P117)rt_nil_check(F->want_690)).elem_)).kind_ == ((rt_int)4LL)))) && (!f_is_string_497(F->up, F->want_690)))) {
f_string_aggregate_698(F->up, F->e_689, F->want_690, &(*F->t_691), &(*F->r_692));
} else {
(*F->t_691) = F->up->ty_string_155;
if (((F->want_690 != NULL) && f_is_string_497(F->up, F->want_690))) {
(*F->t_691) = F->want_690;
}
(*F->r_692) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_lit(", 9), f_c_string_673(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_689)).name_)))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(({ rt_gstr at2028 = (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_689)).name_)); at2028.hi >= at2028.lo ? at2028.hi - at2028.lo + 1 : (rt_int)0; })))), one_rt_gstr(41)));
}
} else if (0 || sel2026 == ((rt_int)4LL)) {
(*F->t_691) = F->up->ty_nil_157;
(*F->r_692) = f_mk_203(F->up, rt_g_lit("NULL", 4));
} else if (0 || sel2026 == ((rt_int)15LL)) {
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->e_689)).a_, F->want_690, &(*F->t_691), &(*F->r_692));
} else if (0 || sel2026 == ((rt_int)5LL)) {
f_gen_name_708(F->up, F->e_689, F->want_690, &(*F->t_691), &(*F->r_692));
} else if (0 || sel2026 == ((rt_int)6LL)) {
f_gen_unop_713(F->up, F->e_689, F->want_690, &(*F->t_691), &(*F->r_692));
} else if (0 || sel2026 == ((rt_int)7LL)) {
f_gen_binop_745(F->up, F->e_689, F->want_690, &(*F->t_691), &(*F->r_692));
} else if (0 || sel2026 == ((rt_int)8LL)) {
if (((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_689)).a_)).kind_ == ((rt_int)5LL))) {
F->y_2019 = f_lookup_381(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_689)).a_)).name_)));
if (((F->y_2019 == NULL) || ((((*(P112)rt_nil_check(F->y_2019)).kind_ == ((rt_int)3LL)) || ((*(P112)rt_nil_check(F->y_2019)).kind_ == ((rt_int)4LL))) || ((*(P112)rt_nil_check(F->y_2019)).kind_ == ((rt_int)10LL))))) {
F->up->call_want_191 = F->want_690;
f_gcall_855(F->up, F->e_689, 0, &(*F->t_691), &(*F->r_692));
goto ret_;
}
if (((*(P112)rt_nil_check(F->y_2019)).kind_ == ((rt_int)5LL))) {
f_conversion_750(F->up, F->e_689, F->y_2019, &(*F->t_691), &(*F->r_692));
goto ret_;
}
} else if ((((((((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_689)).a_)).kind_ == ((rt_int)9LL)) && ((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_689)).a_)).a_)).kind_ == ((rt_int)8LL))) && ((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_689)).a_)).a_)).a_)).kind_ == ((rt_int)5LL))) && f_is_task_name_936(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_689)).a_)).a_)).a_)).name_)))) && (f_member_of_873(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_689)).a_)).a_)).a_)).name_)), (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_689)).a_)).name_)), (*(P169)rt_nil_check(F->e_689)).line_) != NULL)) && ((*(P112)rt_nil_check(f_member_of_873(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_689)).a_)).a_)).a_)).name_)), (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_689)).a_)).name_)), (*(P169)rt_nil_check(F->e_689)).line_))).kind_ == ((rt_int)3LL)))) {
F->up->call_want_191 = F->want_690;
f_gcall_855(F->up, F->e_689, 0, &(*F->t_691), &(*F->r_692));
goto ret_;
} else if ((((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_689)).a_)).kind_ == ((rt_int)9LL)) && f_is_package_869(F->up, (*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_689)).a_)).a_))) {
F->y_2019 = f_member_of_873(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_689)).a_)).a_)).name_)), (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_689)).a_)).name_)), (*(P169)rt_nil_check(F->e_689)).line_);
if (((F->y_2019 != NULL) && ((((*(P112)rt_nil_check(F->y_2019)).kind_ == ((rt_int)3LL)) || ((*(P112)rt_nil_check(F->y_2019)).kind_ == ((rt_int)4LL))) || ((*(P112)rt_nil_check(F->y_2019)).kind_ == ((rt_int)10LL))))) {
F->up->call_want_191 = F->want_690;
f_gcall_855(F->up, F->e_689, 0, &(*F->t_691), &(*F->r_692));
goto ret_;
}
}
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->e_689)).a_, NULL, &F->bt_2020, &F->base_2023);
F->ro_2022 = 1;
f_index_on_665(F->up, (*(P135)rt_nil_check(F->base_2023)), F->bt_2020, F->e_689, &F->ro_2022, 0, &(*F->r_692), &(*F->t_691), &F->c_2021);
} else if (0 || sel2026 == ((rt_int)9LL)) {
if (f_is_package_869(F->up, (*(P169)rt_nil_check(F->e_689)).a_)) {
F->nm_2025 = f_nn_274(F->up, ((rt_int)5LL), (*(P169)rt_nil_check(F->e_689)).line_);
(*(P169)rt_nil_check(F->nm_2025)).name_ = (*(P169)rt_nil_check(F->e_689)).name_;
(*(P169)rt_nil_check(F->nm_2025)).tag_ = (*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_689)).a_)).name_;
f_gen_name_708(F->up, F->nm_2025, F->want_690, &(*F->t_691), &(*F->r_692));
goto ret_;
}
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->e_689)).a_, NULL, &F->bt_2020, &F->base_2023);
F->ro_2022 = 1;
f_select_on_656(F->up, (*(P135)rt_nil_check(F->base_2023)), F->bt_2020, F->e_689, &F->ro_2022, 0, &(*F->r_692), &(*F->t_691), &F->c_2021);
} else if (0 || sel2026 == ((rt_int)10LL)) {
f_gen_attr_766(F->up, F->e_689, F->want_690, &(*F->t_691), &(*F->r_692));
} else if (0 || sel2026 == ((rt_int)11LL)) {
f_allocator_796(F->up, F->e_689, F->want_690, &(*F->t_691), &(*F->r_692));
} else if (0 || sel2026 == ((rt_int)12LL)) {
f_aggregate_801(F->up, F->e_689, F->want_690, &(*F->t_691), &(*F->r_692));
} else {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_689)).line_, rt_g_lit("this expression is not handled", 30));
}
}
ret_:

  return;
}

static void f_string_aggregate_698(struct f_greenc_1fr *up_, P169 e_694, P117 want_695, P117 *t_696, P135 *r_697) {
  struct f_string_aggregate_698fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_694 = e_694;
F->want_695 = want_695;
F->t_696 = t_696;
F->r_697 = r_697;
F->ag_2029 = NULL;
F->it_2030 = NULL;
F->tail_2031 = NULL;
F->l_2032 = NULL;
F->ag_2029 = f_nn_274(F->up, ((rt_int)12LL), (*(P169)rt_nil_check(F->e_694)).line_);
{ rt_int lo2036 = ((rt_int)1LL), hi2037 = ({ rt_gstr at2034 = (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_694)).name_)); at2034.hi >= at2034.lo ? at2034.hi - at2034.lo + 1 : (rt_int)0; });
for (rt_int it2038 = lo2036; it2038 <= hi2037; it2038++) {
F->k_2035 = it2038;
F->l_2032 = f_nn_274(F->up, ((rt_int)3LL), (*(P169)rt_nil_check(F->e_694)).line_);
(*(P169)rt_nil_check(F->l_2032)).name_ = f_mk_203(F->up, ({ rt_gstr sl2040 = (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_694)).name_)); rt_int l_ = F->k_2035, h_ = F->k_2035; if (l_ <= h_) { rt_index(l_, sl2040.lo, sl2040.hi); rt_index(h_, sl2040.lo, sl2040.hi); } sl2040.p += l_ - sl2040.lo; sl2040.lo = l_; sl2040.hi = h_; sl2040; }));
F->it_2030 = f_nn_274(F->up, ((rt_int)13LL), (*(P169)rt_nil_check(F->e_694)).line_);
(*(P169)rt_nil_check(F->it_2030)).b_ = F->l_2032;
if ((F->tail_2031 == NULL)) {
(*(P169)rt_nil_check(F->ag_2029)).a_ = F->it_2030;
} else {
(*(P169)rt_nil_check(F->tail_2031)).next_ = F->it_2030;
}
F->tail_2031 = F->it_2030;
}
}
L_end_2033: ;
if (((*(P169)rt_nil_check(F->ag_2029)).a_ == NULL)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_694)).line_, cat_rt_gstr(rt_g_lit("an empty string is not an aggregate of ", 39), f_kind_name_419(F->up, F->want_695)));
}
f_aggregate_801(F->up, F->ag_2029, F->want_695, &(*F->t_696), &(*F->r_697));
ret_:

  return;
}

static void f_char_literal_703(struct f_greenc_1fr *up_, P169 e_699, P117 want_700, P117 *t_701, P135 *r_702) {
  struct f_char_literal_703fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_699 = e_699;
F->want_700 = want_700;
F->t_701 = t_701;
F->r_702 = r_702;
if (((*(P117)rt_nil_check(F->want_700)).kind_ == ((rt_int)11LL))) {
(*F->t_701) = F->want_700;
(*F->r_702) = f_mk_203(F->up, rt_g_s2g(rt_str_of_int(rt_sub(((rt_int)(({ rt_gstr ix2043 = (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_699)).name_)); ix2043.p[rt_index(((rt_int)1LL), ix2043.lo, ix2043.hi) - ix2043.lo]; })) + 1), ((rt_int)1LL)))));
goto ret_;
}
F->i_2041 = f_lit_index_436(F->up, (*(P117)rt_nil_check(F->want_700)).lits_, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_699)).name_)));
if ((F->i_2041 < ((rt_int)0LL))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_699)).line_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(34), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_699)).name_))), rt_g_lit("\" is not a literal of ", 22)), f_kind_name_419(F->up, F->want_700)));
}
(*F->t_701) = F->want_700;
(*F->r_702) = f_mk_203(F->up, rt_g_s2g(rt_str_of_int(F->i_2041)));
ret_:

  return;
}

static void f_gen_name_708(struct f_greenc_1fr *up_, P169 e_704, P117 want_705, P117 *t_706, P135 *r_707) {
  struct f_gen_name_708fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_704 = e_704;
F->want_705 = want_705;
F->t_706 = t_706;
F->r_707 = r_707;
F->y_2044 = NULL;
F->y_2044 = f_lookup_381(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_704)).name_)));
F->z_2045 = NULL;
F->call_2046 = NULL;
if (((*(P169)rt_nil_check(F->e_704)).tag_ != NULL)) {
F->y_2044 = f_member_of_873(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_704)).tag_)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_704)).name_)), (*(P169)rt_nil_check(F->e_704)).line_);
}
if ((F->y_2044 == NULL)) {
if ((eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_704)).name_)), rt_g_lit("PUT", 3)) || eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_704)).name_)), rt_g_lit("GET", 3)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_704)).line_, cat_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_704)).name_)), rt_g_lit(" needs an item", 14)));
}
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_704)).line_, cat_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_704)).name_)), rt_g_lit(" is not declared", 16)));
}
if ((((*(P112)rt_nil_check(F->y_2044)).kind_ == ((rt_int)2LL)) && (*(P112)rt_nil_check(F->y_2044)).hasmv_)) {
(*F->t_706) = (*(P112)rt_nil_check(F->y_2044)).t_;
(*F->r_707) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int((*(P112)rt_nil_check(F->y_2044)).mvalue_))), rt_g_lit("LL)", 3)));
goto ret_;
}
if ((((*(P112)rt_nil_check(F->y_2044)).kind_ == ((rt_int)1LL)) || ((*(P112)rt_nil_check(F->y_2044)).kind_ == ((rt_int)2LL)))) {
(*F->t_706) = (*(P112)rt_nil_check(F->y_2044)).t_;
f_access_of_630(F->up, F->y_2044, &(*F->r_707));
goto ret_;
}
if (((*(P112)rt_nil_check(F->y_2044)).kind_ == ((rt_int)7LL))) {
F->z_2045 = F->y_2044;
if ((F->want_705 != NULL)) {
while ((F->z_2045 != NULL)) {
if (((eq_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->z_2045)).name_)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_704)).name_))) && ((*(P112)rt_nil_check(F->z_2045)).kind_ == ((rt_int)7LL))) && f_same_394(F->up, (*(P112)rt_nil_check(F->z_2045)).t_, F->want_705))) {
goto L_end_2047;
}
F->z_2045 = (*(P112)rt_nil_check(F->z_2045)).chain_;
}
L_end_2047: ;
if ((F->z_2045 == NULL)) {
F->z_2045 = F->y_2044;
}
}
(*F->t_706) = (*(P112)rt_nil_check(F->z_2045)).t_;
(*F->r_707) = f_mk_203(F->up, rt_g_s2g(rt_str_of_int((*(P112)rt_nil_check(F->z_2045)).mvalue_)));
goto ret_;
}
if (((((*(P112)rt_nil_check(F->y_2044)).kind_ == ((rt_int)3LL)) || ((*(P112)rt_nil_check(F->y_2044)).kind_ == ((rt_int)4LL))) || ((*(P112)rt_nil_check(F->y_2044)).kind_ == ((rt_int)10LL)))) {
F->call_2046 = f_nn_274(F->up, ((rt_int)8LL), (*(P169)rt_nil_check(F->e_704)).line_);
(*(P169)rt_nil_check(F->call_2046)).a_ = F->e_704;
F->up->call_want_191 = F->want_705;
f_gcall_855(F->up, F->call_2046, 0, &(*F->t_706), &(*F->r_707));
goto ret_;
}
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_704)).line_, cat_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_704)).name_)), rt_g_lit(" cannot be used as a value", 26)));
ret_:

  return;
}

static void f_gen_unop_713(struct f_greenc_1fr *up_, P169 e_709, P117 want_710, P117 *t_711, P135 *r_712) {
  struct f_gen_unop_713fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_709 = e_709;
F->want_710 = want_710;
F->t_711 = t_711;
F->r_712 = r_712;
F->a_2048 = NULL;
f_user_operator_918(F->up, F->e_709, F->want_710, &(*F->t_711), &(*F->r_712), &F->done_2049);
if (F->done_2049) {
goto ret_;
}
if (eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_709)).name_)), rt_g_lit("NOT", 3))) {
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->e_709)).a_, F->up->ty_bool_152, &(*F->t_711), &F->a_2048);
f_check_type_423(F->up, (*F->t_711), F->up->ty_bool_152, (*(P169)rt_nil_check(F->e_709)).line_);
(*F->r_712) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!", 2), (*(P135)rt_nil_check(F->a_2048))), one_rt_gstr(41)));
goto ret_;
}
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->e_709)).a_, F->want_710, &(*F->t_711), &F->a_2048);
if ((!f_is_numeric_401(F->up, (*F->t_711)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_709)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("unary ", 6), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_709)).name_))), rt_g_lit(" applies to numeric values (RM79 4.5.4)", 39)));
}
if (eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_709)).name_)), rt_g_lit("+", 1))) {
(*F->r_712) = F->a_2048;
} else if ((((*(P117)rt_nil_check((*F->t_711))).kind_ == ((rt_int)3LL)) || ((*(P117)rt_nil_check((*F->t_711))).kind_ == ((rt_int)16LL)))) {
(*F->r_712) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(-", 2), (*(P135)rt_nil_check(F->a_2048))), one_rt_gstr(41)));
} else {
(*F->r_712) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_neg(", 7), (*(P135)rt_nil_check(F->a_2048))), one_rt_gstr(41)));
}
ret_:

  return;
}

static int f_short_int_715(struct f_greenc_1fr *up_, P117 t_714) {
  struct f_short_int_715fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_714 = t_714;
F->result_ = (((*(P117)rt_nil_check(F->t_714)).kind_ == ((rt_int)1LL)) && (f_root_396(F->up, F->t_714) == F->up->ty_short_162));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_float_kind_717(struct f_greenc_1fr *up_, P117 t_716) {
  struct f_float_kind_717fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_716 = t_716;
if ((f_root_396(F->up, F->t_716) == F->up->ty_sfloat_164)) {
F->result_ = rt_g_lit("1", 1);
goto ret_;
}
F->result_ = rt_g_lit("0", 1);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_catenation_722(struct f_greenc_1fr *up_, P169 e_718, P117 want_719, P117 *t_720, P135 *r_721) {
  struct f_catenation_722fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_718 = e_718;
F->want_719 = want_719;
F->t_720 = t_720;
F->r_721 = r_721;
F->arrt_2050 = NULL;
F->ta_2051 = NULL;
F->tb_2052 = NULL;
F->a_2053 = NULL;
F->b_2054 = NULL;
F->ct_2055 = NULL;
if ((((F->want_719 != NULL) && ((*(P117)rt_nil_check(F->want_719)).kind_ == ((rt_int)6LL))) && ((*(P117)rt_nil_check(F->want_719)).dims_ == ((rt_int)1LL)))) {
F->arrt_2050 = F->want_719;
} else {
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->e_718)).a_, NULL, &F->ta_2051, &F->a_2053);
if ((((*(P117)rt_nil_check(F->ta_2051)).kind_ == ((rt_int)6LL)) && ((*(P117)rt_nil_check(F->ta_2051)).dims_ == ((rt_int)1LL)))) {
F->arrt_2050 = F->ta_2051;
} else {
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->e_718)).b_, NULL, &F->tb_2052, &F->b_2054);
if ((((*(P117)rt_nil_check(F->tb_2052)).kind_ == ((rt_int)6LL)) && ((*(P117)rt_nil_check(F->tb_2052)).dims_ == ((rt_int)1LL)))) {
F->arrt_2050 = F->tb_2052;
} else if ((((*(P117)rt_nil_check(F->ta_2051)).kind_ == ((rt_int)11LL)) && ((*(P117)rt_nil_check(F->tb_2052)).kind_ == ((rt_int)11LL)))) {
F->arrt_2050 = F->up->ty_string_155;
} else {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_718)).line_, rt_g_lit("& catenates one-dimensional arrays and their components (RM79 4.5.3)", 68));
}
}
}
f_ctype_428(F->up, F->arrt_2050, &F->ct_2055);
f_cat_operand_727(F->up, (*(P169)rt_nil_check(F->e_718)).a_, F->arrt_2050, (*(P169)rt_nil_check(F->e_718)).line_, &F->a_2053);
f_cat_operand_727(F->up, (*(P169)rt_nil_check(F->e_718)).b_, F->arrt_2050, (*(P169)rt_nil_check(F->e_718)).line_, &F->b_2054);
(*F->t_720) = F->arrt_2050;
(*F->r_721) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("cat_", 4), (*(P135)rt_nil_check(F->ct_2055))), one_rt_gstr(40)), (*(P135)rt_nil_check(F->a_2053))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check(F->b_2054))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_cat_operand_727(struct f_greenc_1fr *up_, P169 x_723, P117 arrt_724, rt_int line_725, P135 *r_726) {
  struct f_cat_operand_727fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_723 = x_723;
F->arrt_724 = arrt_724;
F->line_725 = line_725;
F->r_726 = r_726;
F->tx_2056 = NULL;
F->ct_2057 = NULL;
if ((f_is_char_lit_669(F->up, F->x_723) && ((*(P117)rt_nil_check((*(P117)rt_nil_check(F->arrt_724)).elem_)).kind_ == ((rt_int)11LL)))) {
f_gexpr_688(F->up, F->x_723, (*(P117)rt_nil_check(F->arrt_724)).elem_, &F->tx_2056, &(*F->r_726));
} else {
f_gexpr_688(F->up, F->x_723, F->arrt_724, &F->tx_2056, &(*F->r_726));
}
if (f_same_394(F->up, F->tx_2056, F->arrt_724)) {
goto ret_;
}
if (f_same_394(F->up, F->tx_2056, (*(P117)rt_nil_check(F->arrt_724)).elem_)) {
f_ctype_428(F->up, F->arrt_724, &F->ct_2057);
(*F->r_726) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("one_", 4), (*(P135)rt_nil_check(F->ct_2057))), one_rt_gstr(40)), (*(P135)rt_nil_check((*F->r_726)))), one_rt_gstr(41)));
goto ret_;
}
f_fail_224(F->up, F->line_725, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("type mismatch: ", 15), f_kind_name_419(F->up, F->tx_2056)), rt_g_lit(" in a catenation of ", 20)), f_kind_name_419(F->up, F->arrt_724)), rt_g_lit(" (RM79 4.5.3)", 13)));
ret_:

  return;
}

static void f_arithmetic_732(struct f_greenc_1fr *up_, P169 e_728, P117 want_729, P117 *t_730, P135 *r_731) {
  struct f_arithmetic_732fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_728 = e_728;
F->want_729 = want_729;
F->t_730 = t_730;
F->r_731 = r_731;
F->op_2058 = cp_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_728)).name_)));
F->ta_2059 = NULL;
F->tb_2060 = NULL;
F->hint_2061 = NULL;
F->a_2062 = NULL;
F->b_2063 = NULL;
if (eq_rt_gstr(F->op_2058, rt_g_lit("**", 2))) {
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->e_728)).a_, F->want_729, &F->ta_2059, &F->a_2062);
F->hint_2061 = F->up->ty_int_151;
if (((*(P117)rt_nil_check(F->ta_2059)).kind_ == ((rt_int)1LL))) {
F->hint_2061 = F->ta_2059;
}
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->e_728)).b_, F->hint_2061, &F->tb_2060, &F->b_2063);
if (((*(P117)rt_nil_check(F->tb_2060)).kind_ != ((rt_int)1LL))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_728)).line_, rt_g_lit("the exponent of ** is an integer (RM79 4.5.6)", 45));
}
(*F->t_730) = F->ta_2059;
if (((*(P117)rt_nil_check(F->ta_2059)).kind_ == ((rt_int)1LL))) {
(*F->r_731) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_pow(", 7), (*(P135)rt_nil_check(F->a_2062))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check(F->b_2063))), one_rt_gstr(41)));
} else if (((*(P117)rt_nil_check(F->ta_2059)).kind_ == ((rt_int)3LL))) {
(*F->r_731) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fpow(", 10), (*(P135)rt_nil_check(F->a_2062))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check(F->b_2063))), rt_g_lit(", ", 2)), f_float_kind_717(F->up, F->ta_2059)), one_rt_gstr(41)));
} else {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_728)).line_, rt_g_lit("operator ** is defined for integer and floating point values (RM79 4.5.6)", 73));
}
} else {
if ((f_is_literal_675(F->up, (*(P169)rt_nil_check(F->e_728)).a_) && (!f_is_literal_675(F->up, (*(P169)rt_nil_check(F->e_728)).b_)))) {
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->e_728)).b_, F->want_729, &F->tb_2060, &F->b_2063);
F->hint_2061 = F->tb_2060;
if ((((*(P117)rt_nil_check(F->tb_2060)).kind_ == ((rt_int)16LL)) && (eq_rt_gstr(F->op_2058, rt_g_lit("*", 1)) || eq_rt_gstr(F->op_2058, rt_g_lit("/", 1))))) {
F->hint_2061 = F->up->ty_int_151;
}
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->e_728)).a_, F->hint_2061, &F->ta_2059, &F->a_2062);
} else {
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->e_728)).a_, F->want_729, &F->ta_2059, &F->a_2062);
F->hint_2061 = F->ta_2059;
if ((((((*(P117)rt_nil_check(F->ta_2059)).kind_ == ((rt_int)16LL)) && (eq_rt_gstr(F->op_2058, rt_g_lit("*", 1)) || eq_rt_gstr(F->op_2058, rt_g_lit("/", 1)))) && f_is_literal_675(F->up, (*(P169)rt_nil_check(F->e_728)).b_)) && ((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_728)).b_)).kind_ == ((rt_int)1LL)))) {
F->hint_2061 = F->up->ty_int_151;
}
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->e_728)).b_, F->hint_2061, &F->tb_2060, &F->b_2063);
}
if (((!f_is_numeric_401(F->up, F->ta_2059)) || (!f_is_numeric_401(F->up, F->tb_2060)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_728)).line_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2058), rt_g_lit(" needs numeric operands, not ", 29)), f_kind_name_419(F->up, F->ta_2059)), rt_g_lit(" and ", 5)), f_kind_name_419(F->up, F->tb_2060)));
}
if ((((*(P117)rt_nil_check(F->ta_2059)).kind_ == ((rt_int)16LL)) || ((*(P117)rt_nil_check(F->tb_2060)).kind_ == ((rt_int)16LL)))) {
f_fixed_operation_740(F->up, F->e_728, F->ta_2059, F->tb_2060, (*(P135)rt_nil_check(F->a_2062)), (*(P135)rt_nil_check(F->b_2063)), &(*F->t_730), &(*F->r_731));
goto ret_;
}
f_check_type_423(F->up, F->tb_2060, F->ta_2059, (*(P169)rt_nil_check(F->e_728)).line_);
(*F->t_730) = F->ta_2059;
if (((*(P117)rt_nil_check(F->ta_2059)).kind_ == ((rt_int)3LL))) {
if (eq_rt_gstr(F->op_2058, rt_g_lit("+", 1))) {
(*F->r_731) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fadd(", 10), (*(P135)rt_nil_check(F->a_2062))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check(F->b_2063))), rt_g_lit(", ", 2)), f_float_kind_717(F->up, F->ta_2059)), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2058, rt_g_lit("-", 1))) {
(*F->r_731) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fsub(", 10), (*(P135)rt_nil_check(F->a_2062))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check(F->b_2063))), rt_g_lit(", ", 2)), f_float_kind_717(F->up, F->ta_2059)), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2058, rt_g_lit("*", 1))) {
(*F->r_731) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fmul(", 10), (*(P135)rt_nil_check(F->a_2062))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check(F->b_2063))), rt_g_lit(", ", 2)), f_float_kind_717(F->up, F->ta_2059)), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2058, rt_g_lit("/", 1))) {
(*F->r_731) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fdiv(", 10), (*(P135)rt_nil_check(F->a_2062))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check(F->b_2063))), rt_g_lit(", ", 2)), f_float_kind_717(F->up, F->ta_2059)), one_rt_gstr(41)));
} else {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_728)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2058), rt_g_lit(" is not defined for real values (RM79 4.5.5)", 44)));
}
goto ret_;
}
if (eq_rt_gstr(F->op_2058, rt_g_lit("+", 1))) {
(*F->r_731) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_add(", 7), (*(P135)rt_nil_check(F->a_2062))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check(F->b_2063))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2058, rt_g_lit("-", 1))) {
(*F->r_731) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_sub(", 7), (*(P135)rt_nil_check(F->a_2062))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check(F->b_2063))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2058, rt_g_lit("*", 1))) {
(*F->r_731) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_mul(", 7), (*(P135)rt_nil_check(F->a_2062))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check(F->b_2063))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2058, rt_g_lit("/", 1))) {
(*F->r_731) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_quot(", 8), (*(P135)rt_nil_check(F->a_2062))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check(F->b_2063))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2058, rt_g_lit("MOD", 3))) {
(*F->r_731) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_rem(", 7), (*(P135)rt_nil_check(F->a_2062))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check(F->b_2063))), one_rt_gstr(41)));
} else {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_728)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2058), rt_g_lit(" is not defined for integers", 28)));
}
}
if (f_short_int_715(F->up, (*F->t_730))) {
(*F->r_731) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_short(", 11), (*(P135)rt_nil_check((*F->r_731)))), one_rt_gstr(41)));
}
ret_:

  return;
}

static void f_fixed_operation_740(struct f_greenc_1fr *up_, P169 e_733, P117 ta_734, P117 tb_735, rt_gstr a_736, rt_gstr b_737, P117 *t_738, P135 *r_739) {
  struct f_fixed_operation_740fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_733 = e_733;
F->ta_734 = ta_734;
F->tb_735 = tb_735;
F->a_736 = cp_rt_gstr(a_736);
F->b_737 = cp_rt_gstr(b_737);
F->t_738 = t_738;
F->r_739 = r_739;
F->op_2064 = cp_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_733)).name_)));
if ((eq_rt_gstr(F->op_2064, rt_g_lit("+", 1)) || eq_rt_gstr(F->op_2064, rt_g_lit("-", 1)))) {
f_check_type_423(F->up, F->tb_735, F->ta_734, (*(P169)rt_nil_check(F->e_733)).line_);
(*F->t_738) = F->ta_734;
(*F->r_739) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_736), one_rt_gstr(32)), F->op_2064), one_rt_gstr(32)), F->b_737), one_rt_gstr(41)));
} else if (((eq_rt_gstr(F->op_2064, rt_g_lit("*", 1)) && ((*(P117)rt_nil_check(F->ta_734)).kind_ == ((rt_int)16LL))) && ((*(P117)rt_nil_check(F->tb_735)).kind_ == ((rt_int)16LL)))) {
(*F->t_738) = F->up->ty_ufixed_167;
(*F->r_739) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_736), rt_g_lit(" * ", 3)), F->b_737), one_rt_gstr(41)));
} else if (((eq_rt_gstr(F->op_2064, rt_g_lit("/", 1)) && ((*(P117)rt_nil_check(F->ta_734)).kind_ == ((rt_int)16LL))) && ((*(P117)rt_nil_check(F->tb_735)).kind_ == ((rt_int)16LL)))) {
(*F->t_738) = F->up->ty_ufixed_167;
(*F->r_739) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fdiv(", 10), F->a_736), rt_g_lit(", ", 2)), F->b_737), rt_g_lit(", 0)", 4)));
} else if (((eq_rt_gstr(F->op_2064, rt_g_lit("*", 1)) && ((*(P117)rt_nil_check(F->ta_734)).kind_ == ((rt_int)16LL))) && ((*(P117)rt_nil_check(F->tb_735)).kind_ == ((rt_int)1LL)))) {
(*F->t_738) = F->ta_734;
(*F->r_739) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_736), rt_g_lit(" * (double)(", 12)), F->b_737), rt_g_lit("))", 2)));
} else if (((eq_rt_gstr(F->op_2064, rt_g_lit("*", 1)) && ((*(P117)rt_nil_check(F->ta_734)).kind_ == ((rt_int)1LL))) && ((*(P117)rt_nil_check(F->tb_735)).kind_ == ((rt_int)16LL)))) {
(*F->t_738) = F->tb_735;
(*F->r_739) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((double)(", 10), F->a_736), rt_g_lit(") * ", 4)), F->b_737), one_rt_gstr(41)));
} else if (((eq_rt_gstr(F->op_2064, rt_g_lit("/", 1)) && ((*(P117)rt_nil_check(F->ta_734)).kind_ == ((rt_int)16LL))) && ((*(P117)rt_nil_check(F->tb_735)).kind_ == ((rt_int)1LL)))) {
(*F->t_738) = F->ta_734;
(*F->r_739) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix(rt_g_fdiv(", 19), F->a_736), rt_g_lit(", (double)(", 11)), F->b_737), rt_g_lit("), 0), ", 7)), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->ta_734)).fsmall_))), one_rt_gstr(41)));
} else {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_733)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2064), rt_g_lit(" is not defined for these fixed point operands (RM79 4.5.5)", 59)));
}
ret_:

  return;
}

static void f_gen_binop_745(struct f_greenc_1fr *up_, P169 e_741, P117 want_742, P117 *t_743, P135 *r_744) {
  struct f_gen_binop_745fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_741 = e_741;
F->want_742 = want_742;
F->t_743 = t_743;
F->r_744 = r_744;
F->op_2065 = cp_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_741)).name_)));
F->ta_2066 = NULL;
F->tb_2067 = NULL;
F->hint_2068 = NULL;
F->ct_2069 = NULL;
F->a_2070 = NULL;
F->b_2071 = NULL;
F->x_2072 = NULL;
F->dummy_2073 = NULL;
(*F->t_743) = F->up->ty_bool_152;
f_user_operator_918(F->up, F->e_741, F->want_742, &(*F->t_743), &(*F->r_744), &F->done_2074);
if (F->done_2074) {
goto ret_;
}
if (((eq_rt_gstr(F->op_2065, rt_g_lit("AND", 3)) || eq_rt_gstr(F->op_2065, rt_g_lit("OR", 2))) || eq_rt_gstr(F->op_2065, rt_g_lit("XOR", 3)))) {
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->e_741)).a_, F->up->ty_bool_152, &F->ta_2066, &F->a_2070);
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->e_741)).b_, F->up->ty_bool_152, &F->tb_2067, &F->b_2071);
f_check_type_423(F->up, F->ta_2066, F->up->ty_bool_152, (*(P169)rt_nil_check(F->e_741)).line_);
f_check_type_423(F->up, F->tb_2067, F->up->ty_bool_152, (*(P169)rt_nil_check(F->e_741)).line_);
if (eq_rt_gstr(F->op_2065, rt_g_lit("AND", 3))) {
(*F->r_744) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P135)rt_nil_check(F->a_2070))), rt_g_lit(" && ", 4)), (*(P135)rt_nil_check(F->b_2071))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2065, rt_g_lit("OR", 2))) {
(*F->r_744) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P135)rt_nil_check(F->a_2070))), rt_g_lit(" || ", 4)), (*(P135)rt_nil_check(F->b_2071))), one_rt_gstr(41)));
} else {
(*F->r_744) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P135)rt_nil_check(F->a_2070))), rt_g_lit(" != ", 4)), (*(P135)rt_nil_check(F->b_2071))), one_rt_gstr(41)));
}
goto ret_;
}
if (eq_rt_gstr(F->op_2065, rt_g_lit("IN", 2))) {
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->e_741)).a_, NULL, &F->ta_2066, &F->a_2070);
f_gexpr_688(F->up, (*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_741)).b_)).a_, F->ta_2066, &F->tb_2067, &F->b_2071);
f_gexpr_688(F->up, (*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_741)).b_)).b_, F->ta_2066, &F->tb_2067, &F->x_2072);
(*F->r_744) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ rt_int m_ = ", 15), (*(P135)rt_nil_check(F->a_2070))), rt_g_lit("; m_ >= ", 8)), (*(P135)rt_nil_check(F->b_2071))), rt_g_lit(" && m_ <= ", 10)), (*(P135)rt_nil_check(F->x_2072))), rt_g_lit("; })", 4)));
goto ret_;
}
if (eq_rt_gstr(F->op_2065, rt_g_lit("&", 1))) {
f_catenation_722(F->up, F->e_741, F->want_742, &(*F->t_743), &(*F->r_744));
goto ret_;
}
if (f_is_rel_313(F->up, F->op_2065)) {
if (((((f_is_literal_675(F->up, (*(P169)rt_nil_check(F->e_741)).a_) || f_is_enum_lit_671(F->up, (*(P169)rt_nil_check(F->e_741)).a_)) || ((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_741)).a_)).kind_ == ((rt_int)4LL))) || ((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_741)).a_)).kind_ == ((rt_int)3LL))) || ((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_741)).a_)).kind_ == ((rt_int)12LL)))) {
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->e_741)).b_, NULL, &F->hint_2068, &F->dummy_2073);
}
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->e_741)).a_, F->hint_2068, &F->ta_2066, &F->a_2070);
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->e_741)).b_, F->ta_2066, &F->tb_2067, &F->b_2071);
F->ct_2069 = F->ta_2066;
if ((((*(P117)rt_nil_check(F->ta_2066)).kind_ != ((rt_int)10LL)) && ((*(P117)rt_nil_check(F->tb_2067)).kind_ != ((rt_int)10LL)))) {
f_check_type_423(F->up, F->tb_2067, F->ta_2066, (*(P169)rt_nil_check(F->e_741)).line_);
}
if (((*(P117)rt_nil_check(F->ta_2066)).kind_ == ((rt_int)10LL))) {
F->ct_2069 = F->tb_2067;
}
if (((((!eq_rt_gstr(F->op_2065, rt_g_lit("=", 1))) && (!eq_rt_gstr(F->op_2065, rt_g_lit("/=", 2)))) && (!f_is_numeric_401(F->up, F->ct_2069))) && (!f_is_discrete_403(F->up, F->ct_2069)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_741)).line_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2065), rt_g_lit(" is defined for scalar types, not for ", 38)), f_kind_name_419(F->up, F->ct_2069)), rt_g_lit(" (RM79 4.5.2)", 13)));
}
if (f_composite_540(F->up, F->ct_2069)) {
f_eq_code_555(F->up, F->ct_2069, (*(P135)rt_nil_check(F->a_2070)), (*(P135)rt_nil_check(F->b_2071)), &F->x_2072);
if (eq_rt_gstr(F->op_2065, rt_g_lit("=", 1))) {
(*F->r_744) = F->x_2072;
} else if (eq_rt_gstr(F->op_2065, rt_g_lit("/=", 2))) {
(*F->r_744) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!", 2), (*(P135)rt_nil_check(F->x_2072))), one_rt_gstr(41)));
} else {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_741)).line_, rt_g_lit("no ordering is defined for composite values", 43));
}
goto ret_;
}
if (eq_rt_gstr(F->op_2065, rt_g_lit("=", 1))) {
(*F->r_744) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P135)rt_nil_check(F->a_2070))), rt_g_lit(" == ", 4)), (*(P135)rt_nil_check(F->b_2071))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2065, rt_g_lit("/=", 2))) {
(*F->r_744) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P135)rt_nil_check(F->a_2070))), rt_g_lit(" != ", 4)), (*(P135)rt_nil_check(F->b_2071))), one_rt_gstr(41)));
} else {
(*F->r_744) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P135)rt_nil_check(F->a_2070))), one_rt_gstr(32)), F->op_2065), one_rt_gstr(32)), (*(P135)rt_nil_check(F->b_2071))), one_rt_gstr(41)));
}
goto ret_;
}
f_arithmetic_732(F->up, F->e_741, F->want_742, &(*F->t_743), &(*F->r_744));
ret_:

  return;
}

static void f_conversion_750(struct f_greenc_1fr *up_, P169 e_746, P112 y_747, P117 *t_748, P135 *r_749) {
  struct f_conversion_750fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_746 = e_746;
F->y_747 = y_747;
F->t_748 = t_748;
F->r_749 = r_749;
F->aty_2075 = NULL;
F->a_2076 = NULL;
F->ag_2077 = NULL;
F->it_2078 = NULL;
F->tail_2079 = NULL;
F->arg_2080 = NULL;
(*F->t_748) = (*(P112)rt_nil_check(F->y_747)).t_;
if ((((*(P169)rt_nil_check(F->e_746)).flag_ == ((rt_int)9LL)) || (f_list_len_280(F->up, (*(P169)rt_nil_check(F->e_746)).b_) > ((rt_int)1LL)))) {
if (((*(P169)rt_nil_check(F->e_746)).flag_ == ((rt_int)9LL))) {
F->ag_2077 = (*(P169)rt_nil_check(F->e_746)).b_;
} else {
F->ag_2077 = f_nn_274(F->up, ((rt_int)12LL), (*(P169)rt_nil_check(F->e_746)).line_);
F->arg_2080 = (*(P169)rt_nil_check(F->e_746)).b_;
while ((F->arg_2080 != NULL)) {
F->it_2078 = f_nn_274(F->up, ((rt_int)13LL), (*(P169)rt_nil_check(F->e_746)).line_);
(*(P169)rt_nil_check(F->it_2078)).b_ = F->arg_2080;
if (((*(P169)rt_nil_check(F->arg_2080)).formal_ != NULL)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_746)).line_, rt_g_lit("a named component of an aggregate is given with => (RM79 3.6.2)", 63));
}
if ((F->tail_2079 == NULL)) {
(*(P169)rt_nil_check(F->ag_2077)).a_ = F->it_2078;
} else {
(*(P169)rt_nil_check(F->tail_2079)).next_ = F->it_2078;
}
F->tail_2079 = F->it_2078;
F->arg_2080 = (*(P169)rt_nil_check(F->arg_2080)).next_;
}
L_end_2081: ;
}
if (((*(P169)rt_nil_check(F->ag_2077)).kind_ != ((rt_int)12LL))) {
f_gexpr_688(F->up, F->ag_2077, (*F->t_748), &F->aty_2075, &(*F->r_749));
f_check_type_423(F->up, F->aty_2075, (*F->t_748), (*(P169)rt_nil_check(F->e_746)).line_);
} else {
f_aggregate_801(F->up, F->ag_2077, (*F->t_748), &F->aty_2075, &(*F->r_749));
}
f_constrain_754(F->up, F->y_747, (*F->t_748), &(*F->r_749));
goto ret_;
}
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->e_746)).b_, (*F->t_748), &F->aty_2075, &F->a_2076);
if (((((*(P117)rt_nil_check((*F->t_748))).kind_ == ((rt_int)6LL)) && ((*(P117)rt_nil_check(F->aty_2075)).kind_ == ((rt_int)6LL))) && (!f_same_394(F->up, (*F->t_748), F->aty_2075)))) {
f_array_conversion_761(F->up, F->e_746, (*F->t_748), F->aty_2075, (*(P112)rt_nil_check(F->y_747)).c_, (*(P135)rt_nil_check(F->a_2076)), &(*F->r_749));
goto ret_;
}
if ((f_is_numeric_401(F->up, (*F->t_748)) && f_is_numeric_401(F->up, F->aty_2075))) {
if ((((*(P117)rt_nil_check((*F->t_748))).kind_ == ((rt_int)1LL)) && ((*(P117)rt_nil_check(F->aty_2075)).kind_ != ((rt_int)1LL)))) {
(*F->r_749) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_round(", 11), (*(P135)rt_nil_check(F->a_2076))), one_rt_gstr(41)));
} else if ((((*(P117)rt_nil_check((*F->t_748))).kind_ == ((rt_int)3LL)) && ((*(P117)rt_nil_check(F->aty_2075)).kind_ == ((rt_int)1LL)))) {
(*F->r_749) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((double)(", 10), (*(P135)rt_nil_check(F->a_2076))), rt_g_lit("))", 2)));
} else if ((((*(P117)rt_nil_check((*F->t_748))).kind_ == ((rt_int)16LL)) && ((*(P117)rt_nil_check((*F->t_748))).fsmall_ != NULL))) {
if (((*(P117)rt_nil_check(F->aty_2075)).kind_ == ((rt_int)1LL))) {
(*F->r_749) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix((double)(", 18), (*(P135)rt_nil_check(F->a_2076))), rt_g_lit("), ", 3)), (*(P135)rt_nil_check((*(P117)rt_nil_check((*F->t_748))).fsmall_))), one_rt_gstr(41)));
} else {
(*F->r_749) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix(", 9), (*(P135)rt_nil_check(F->a_2076))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check((*(P117)rt_nil_check((*F->t_748))).fsmall_))), one_rt_gstr(41)));
}
} else {
(*F->r_749) = F->a_2076;
}
} else if (((f_same_394(F->up, F->aty_2075, (*F->t_748)) || f_derived_from_399(F->up, F->aty_2075, (*F->t_748))) || f_derived_from_399(F->up, (*F->t_748), F->aty_2075))) {
(*F->r_749) = F->a_2076;
} else {
f_check_type_423(F->up, F->aty_2075, (*F->t_748), (*(P169)rt_nil_check(F->e_746)).line_);
(*F->r_749) = F->a_2076;
}
if (((((((*(P117)rt_nil_check((*F->t_748))).kind_ == ((rt_int)1LL)) || ((*(P117)rt_nil_check((*F->t_748))).kind_ == ((rt_int)4LL))) || ((*(P117)rt_nil_check((*F->t_748))).kind_ == ((rt_int)11LL))) && ((*(P112)rt_nil_check(F->y_747)).c_ != NULL)) && ((*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_747)).c_)).lo_ != NULL))) {
(*F->r_749) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P135)rt_nil_check((*F->r_749)))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check((*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_747)).c_)).lo_))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check((*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_747)).c_)).hi_))), one_rt_gstr(41)));
} else if ((((((*(P117)rt_nil_check((*F->t_748))).kind_ == ((rt_int)3LL)) || ((*(P117)rt_nil_check((*F->t_748))).kind_ == ((rt_int)16LL))) && ((*(P112)rt_nil_check(F->y_747)).c_ != NULL)) && ((*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_747)).c_)).lo_ != NULL))) {
(*F->r_749) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_frange(", 10), (*(P135)rt_nil_check((*F->r_749)))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check((*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_747)).c_)).lo_))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check((*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_747)).c_)).hi_))), one_rt_gstr(41)));
} else if (f_short_int_715(F->up, (*F->t_748))) {
(*F->r_749) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_short(", 11), (*(P135)rt_nil_check((*F->r_749)))), one_rt_gstr(41)));
}
ret_:

  return;
}

static void f_constrain_754(struct f_greenc_1fr *up_, P112 y_751, P117 t_752, P135 *r_753) {
  struct f_constrain_754fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_751 = y_751;
F->t_752 = t_752;
F->r_753 = r_753;
F->ct_2082 = NULL;
F->tmp_2083 = NULL;
if ((((*(P112)rt_nil_check(F->y_751)).c_ == NULL) || ((*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_751)).c_)).lo_ == NULL))) {
goto ret_;
}
if ((((*(P117)rt_nil_check(F->t_752)).kind_ == ((rt_int)6LL)) && (((*(P117)rt_nil_check(F->t_752)).tcons_ == NULL) || ((*(P173)rt_nil_check((*(P117)rt_nil_check(F->t_752)).tcons_)).hi_ == NULL)))) {
f_ctype_428(F->up, F->t_752, &F->ct_2082);
f_new_name_206(F->up, rt_g_lit("q", 1), &F->tmp_2083);
(*F->r_753) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P135)rt_nil_check(F->ct_2082))), one_rt_gstr(32)), (*(P135)rt_nil_check(F->tmp_2083))), rt_g_lit(" = ", 3)), (*(P135)rt_nil_check((*F->r_753)))), rt_g_lit("; rt_int l_ = ", 14)), (*(P135)rt_nil_check((*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_751)).c_)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P135)rt_nil_check((*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_751)).c_)).hi_))), rt_g_lit("; if (G_CNT(", 12)), (*(P135)rt_nil_check(F->tmp_2083))), rt_g_lit(") != (h_ >= l_ \? h_ - l_ + 1 : 0)) ", 35)), rt_g_lit("rt_raise_msg(RT_X_SUBTYPE, ", 27)), f_q_221(F->up)), rt_g_lit("array length", 12)), f_q_221(F->up)), rt_g_lit("); ", 3)), (*(P135)rt_nil_check(F->tmp_2083))), rt_g_lit(".lo = l_; ", 10)), (*(P135)rt_nil_check(F->tmp_2083))), rt_g_lit(".hi = h_; ", 10)), (*(P135)rt_nil_check(F->tmp_2083))), rt_g_lit("; })", 4)));
}
ret_:

  return;
}

static void f_array_conversion_761(struct f_greenc_1fr *up_, P169 e_755, P117 t_756, P117 aty_757, P173 c_758, rt_gstr a_759, P135 *r_760) {
  struct f_array_conversion_761fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_755 = e_755;
F->t_756 = t_756;
F->aty_757 = aty_757;
F->c_758 = c_758;
F->a_759 = cp_rt_gstr(a_759);
F->r_760 = r_760;
F->x_2084 = NULL;
F->y_2085 = NULL;
F->ct_2086 = NULL;
F->act_2087 = NULL;
F->et_2088 = NULL;
F->tmp_2089 = NULL;
F->s_2090 = NULL;
F->x_2084 = F->t_756;
F->y_2085 = F->aty_757;
if (((*(P117)rt_nil_check(F->t_756)).dims_ != (*(P117)rt_nil_check(F->aty_757)).dims_)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_755)).line_, rt_g_lit("no conversion between arrays of different dimensions (RM79 4.6)", 63));
}
{ rt_int lo2093 = ((rt_int)1LL), hi2094 = (*(P117)rt_nil_check(F->t_756)).dims_;
for (rt_int it2095 = lo2093; it2095 <= hi2094; it2095++) {
F->k_2092 = it2095;
if ((!((f_same_394(F->up, (*(P117)rt_nil_check(F->x_2084)).idx_, (*(P117)rt_nil_check(F->y_2085)).idx_) || f_derived_from_399(F->up, (*(P117)rt_nil_check(F->x_2084)).idx_, (*(P117)rt_nil_check(F->y_2085)).idx_)) || f_derived_from_399(F->up, (*(P117)rt_nil_check(F->y_2085)).idx_, (*(P117)rt_nil_check(F->x_2084)).idx_)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_755)).line_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no conversion from ", 19), f_kind_name_419(F->up, F->aty_757)), rt_g_lit(" to ", 4)), f_kind_name_419(F->up, F->t_756)), rt_g_lit(": the index types differ (RM79 4.6)", 35)));
}
F->x_2084 = (*(P117)rt_nil_check(F->x_2084)).elem_;
F->y_2085 = (*(P117)rt_nil_check(F->y_2085)).elem_;
}
}
L_end_2091: ;
if ((!((f_same_394(F->up, F->x_2084, F->y_2085) || f_derived_from_399(F->up, F->x_2084, F->y_2085)) || f_derived_from_399(F->up, F->y_2085, F->x_2084)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_755)).line_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no conversion from ", 19), f_kind_name_419(F->up, F->aty_757)), rt_g_lit(" to ", 4)), f_kind_name_419(F->up, F->t_756)), rt_g_lit(": the component types differ (RM79 4.6)", 39)));
}
f_ctype_428(F->up, F->t_756, &F->ct_2086);
f_ctype_428(F->up, F->aty_757, &F->act_2087);
f_elem_ctype_492(F->up, (*(P117)rt_nil_check(F->t_756)).elem_, &F->et_2088);
f_new_name_206(F->up, rt_g_lit("cv", 2), &F->tmp_2089);
(*F->r_760) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P135)rt_nil_check(F->act_2087))), rt_g_lit(" s_ = ", 6)), F->a_759), rt_g_lit("; ", 2)), (*(P135)rt_nil_check(F->ct_2086))), one_rt_gstr(32)), (*(P135)rt_nil_check(F->tmp_2089))), rt_g_lit("; ", 2)), (*(P135)rt_nil_check(F->tmp_2089))), rt_g_lit(".lo = s_.lo; ", 13)), (*(P135)rt_nil_check(F->tmp_2089))), rt_g_lit(".hi = s_.hi; ", 13)), (*(P135)rt_nil_check(F->tmp_2089))), rt_g_lit(".lo2 = s_.lo2; ", 15)), (*(P135)rt_nil_check(F->tmp_2089))), rt_g_lit(".hi2 = s_.hi2; ", 15)), (*(P135)rt_nil_check(F->tmp_2089))), rt_g_lit(".p = (", 6)), (*(P135)rt_nil_check(F->et_2088))), rt_g_lit(" *)s_.p; ", 9)), (*(P135)rt_nil_check(F->tmp_2089))), rt_g_lit("; })", 4)));
if ((((*(P117)rt_nil_check(F->t_756)).tcons_ != NULL) && ((*(P173)rt_nil_check((*(P117)rt_nil_check(F->t_756)).tcons_)).hi_ != NULL))) {
(*F->r_760) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P135)rt_nil_check(F->ct_2086))), one_rt_gstr(32)), (*(P135)rt_nil_check(F->tmp_2089))), rt_g_lit("x = ", 4)), (*(P135)rt_nil_check((*F->r_760)))), rt_g_lit("; rt_int l_ = ", 14)), (*(P135)rt_nil_check((*(P173)rt_nil_check((*(P117)rt_nil_check(F->t_756)).tcons_)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P135)rt_nil_check((*(P173)rt_nil_check((*(P117)rt_nil_check(F->t_756)).tcons_)).hi_))), rt_g_lit("; if (G_CNT(", 12)), (*(P135)rt_nil_check(F->tmp_2089))), rt_g_lit("x) != (h_ >= l_ \? h_ - l_ + 1 : 0)) ", 36)), rt_g_lit("rt_raise_msg(RT_X_SUBTYPE, ", 27)), f_q_221(F->up)), rt_g_lit("array length", 12)), f_q_221(F->up)), rt_g_lit("); ", 3)), (*(P135)rt_nil_check(F->tmp_2089))), rt_g_lit("x.lo = l_; ", 11)), (*(P135)rt_nil_check(F->tmp_2089))), rt_g_lit("x.hi = h_; ", 11)), (*(P135)rt_nil_check(F->tmp_2089))), rt_g_lit("x; })", 5)));
}
ret_:

  return;
}

static void f_gen_attr_766(struct f_greenc_1fr *up_, P169 e_762, P117 want_763, P117 *t_764, P135 *r_765) {
  struct f_gen_attr_766fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_762 = e_762;
F->want_763 = want_763;
F->t_764 = t_764;
F->r_765 = r_765;
F->a_2096 = cp_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_762)).name_)));
F->y_2097 = NULL;
F->tt_2098 = NULL;
F->aty_2099 = NULL;
F->v_2100 = NULL;
F->d_2101 = NULL;
F->c_2102 = NULL;
if (((((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_762)).a_)).kind_ == ((rt_int)8LL)) && ((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_762)).a_)).a_)).kind_ == ((rt_int)5LL))) && f_is_task_name_936(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_762)).a_)).a_)).name_))))) {
f_member_attr_1002(F->up, F->e_762, &(*F->t_764), &(*F->r_765));
goto ret_;
}
if (eq_rt_gstr(F->a_2096, rt_g_lit("ADDRESS", 7))) {
f_lvalue_647(F->up, (*(P169)rt_nil_check(F->e_762)).a_, &F->v_2100, &F->aty_2099, &F->c_2102, &F->ro_2104);
(*F->t_764) = F->up->ty_int_151;
(*F->r_765) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(intptr_t)&(", 21), (*(P135)rt_nil_check(F->v_2100))), rt_g_lit("))", 2)));
goto ret_;
}
if (((eq_rt_gstr(F->a_2096, rt_g_lit("COUNT", 5)) && ((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_762)).a_)).kind_ == ((rt_int)8LL))) && ((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_762)).a_)).a_)).kind_ == ((rt_int)5LL)))) {
F->y_2097 = f_lookup_381(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_762)).a_)).a_)).name_)));
if ((((F->y_2097 != NULL) && ((*(P112)rt_nil_check(F->y_2097)).kind_ == ((rt_int)10LL))) && ((*(P112)rt_nil_check(F->y_2097)).c_ != NULL))) {
if ((!f_same_task_384(F->up, (*(P112)rt_nil_check(F->y_2097)).members_, F->up->cur_task_178))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_762)).line_, rt_g_lit("E'COUNT is allowed only in the body of the task (RM79 9.9)", 58));
}
f_entry_path_958(F->up, F->y_2097, rt_g_lit("", 0), &F->v_2100);
f_gexpr_688(F->up, (*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_762)).a_)).b_, NULL, &F->aty_2099, &F->d_2101);
f_entry_family_slot_973(F->up, F->y_2097, (*(P135)rt_nil_check(F->v_2100)), (*(P135)rt_nil_check(F->d_2101)), &F->v_2100);
(*F->t_764) = F->up->ty_int_151;
(*F->r_765) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_entry_count(&", 16), (*(P135)rt_nil_check(F->v_2100))), one_rt_gstr(41)));
goto ret_;
}
}
if (((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_762)).a_)).kind_ == ((rt_int)5LL))) {
F->y_2097 = f_lookup_381(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_762)).a_)).name_)));
if ((((F->y_2097 == NULL) && eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_762)).a_)).name_)), rt_g_lit("SYSTEM", 6))) && eq_rt_gstr(F->a_2096, rt_g_lit("CLOCK", 5)))) {
(*F->t_764) = F->up->ty_time_166;
(*F->r_765) = f_mk_203(F->up, rt_g_lit("((double)rt_time())", 19));
goto ret_;
}
if ((((F->y_2097 == NULL) && eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_762)).a_)).name_)), rt_g_lit("SYSTEM", 6))) && (eq_rt_gstr(F->a_2096, rt_g_lit("MAX_PRIORITY", 12)) || eq_rt_gstr(F->a_2096, rt_g_lit("MIN_PRIORITY", 12))))) {
(*F->t_764) = F->up->ty_int_151;
if (eq_rt_gstr(F->a_2096, rt_g_lit("MAX_PRIORITY", 12))) {
(*F->r_765) = f_mk_203(F->up, rt_g_lit("((rt_int)255)", 13));
} else {
(*F->r_765) = f_mk_203(F->up, rt_g_lit("((rt_int)0)", 11));
}
goto ret_;
}
}
if (((F->y_2097 != NULL) && ((*(P112)rt_nil_check(F->y_2097)).kind_ == ((rt_int)5LL)))) {
F->tt_2098 = (*(P112)rt_nil_check(F->y_2097)).t_;
F->c_2102 = (*(P112)rt_nil_check(F->y_2097)).c_;
if (eq_rt_gstr(F->a_2096, rt_g_lit("SIZE", 4))) {
f_ctype_428(F->up, F->tt_2098, &F->d_2101);
(*F->t_764) = F->up->ty_int_151;
(*F->r_765) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(sizeof(", 17), (*(P135)rt_nil_check(F->d_2101))), rt_g_lit(") * 8))", 7)));
goto ret_;
}
if (eq_rt_gstr(F->a_2096, rt_g_lit("ORD", 3))) {
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->e_762)).b_, F->tt_2098, &F->aty_2099, &F->v_2100);
f_check_type_423(F->up, F->aty_2099, F->tt_2098, (*(P169)rt_nil_check(F->e_762)).line_);
(*F->t_764) = F->up->ty_int_151;
(*F->r_765) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(", 10), (*(P135)rt_nil_check(F->v_2100))), rt_g_lit(") + 1)", 6)));
goto ret_;
} else if ((eq_rt_gstr(F->a_2096, rt_g_lit("VAL", 3)) || eq_rt_gstr(F->a_2096, rt_g_lit("REP", 3)))) {
f_val_rep_791(F->up, F->e_762, F->tt_2098, F->c_2102, &(*F->t_764), &(*F->r_765));
goto ret_;
} else if ((eq_rt_gstr(F->a_2096, rt_g_lit("SUCC", 4)) || eq_rt_gstr(F->a_2096, rt_g_lit("PRED", 4)))) {
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->e_762)).b_, F->tt_2098, &F->aty_2099, &F->v_2100);
(*F->t_764) = F->tt_2098;
if (((*(P117)rt_nil_check(F->tt_2098)).kind_ == ((rt_int)1LL))) {
if (eq_rt_gstr(F->a_2096, rt_g_lit("SUCC", 4))) {
(*F->r_765) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_add(", 7), (*(P135)rt_nil_check(F->v_2100))), rt_g_lit(", 1)", 4)));
} else {
(*F->r_765) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_sub(", 7), (*(P135)rt_nil_check(F->v_2100))), rt_g_lit(", 1)", 4)));
}
} else if (eq_rt_gstr(F->a_2096, rt_g_lit("SUCC", 4))) {
(*F->r_765) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P135)rt_nil_check(F->v_2100))), rt_g_lit(" + 1, ", 6)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_2102)).lo_))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_2102)).hi_))), one_rt_gstr(41)));
} else {
(*F->r_765) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P135)rt_nil_check(F->v_2100))), rt_g_lit(" - 1, ", 6)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_2102)).lo_))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_2102)).hi_))), one_rt_gstr(41)));
}
goto ret_;
} else if ((((*(P117)rt_nil_check(F->tt_2098)).kind_ == ((rt_int)6LL)) && ((eq_rt_gstr(F->a_2096, rt_g_lit("FIRST", 5)) || eq_rt_gstr(F->a_2096, rt_g_lit("LAST", 4))) || eq_rt_gstr(F->a_2096, rt_g_lit("LENGTH", 6))))) {
f_type_array_attr_782(F->up, F->e_762, F->tt_2098, F->c_2102, &(*F->t_764), &(*F->r_765));
goto ret_;
} else if ((eq_rt_gstr(F->a_2096, rt_g_lit("FIRST", 5)) || eq_rt_gstr(F->a_2096, rt_g_lit("LAST", 4)))) {
(*F->t_764) = F->tt_2098;
if (((F->c_2102 != NULL) && ((*(P173)rt_nil_check(F->c_2102)).lo_ != NULL))) {
if (eq_rt_gstr(F->a_2096, rt_g_lit("FIRST", 5))) {
(*F->r_765) = (*(P173)rt_nil_check(F->c_2102)).lo_;
} else {
(*F->r_765) = (*(P173)rt_nil_check(F->c_2102)).hi_;
}
} else if (((*(P117)rt_nil_check(F->tt_2098)).kind_ == ((rt_int)1LL))) {
if (eq_rt_gstr(F->a_2096, rt_g_lit("FIRST", 5))) {
(*F->r_765) = f_mk_203(F->up, rt_g_lit("INT64_MIN", 9));
} else {
(*F->r_765) = f_mk_203(F->up, rt_g_lit("INT64_MAX", 9));
}
} else if ((((*(P117)rt_nil_check(F->tt_2098)).kind_ == ((rt_int)3LL)) && (f_root_396(F->up, F->tt_2098) == F->up->ty_sfloat_164))) {
if (eq_rt_gstr(F->a_2096, rt_g_lit("FIRST", 5))) {
(*F->r_765) = f_mk_203(F->up, rt_g_lit("(-3.40282347e+38)", 17));
} else {
(*F->r_765) = f_mk_203(F->up, rt_g_lit("3.40282347e+38", 14));
}
} else if (((*(P117)rt_nil_check(F->tt_2098)).kind_ == ((rt_int)3LL))) {
if (eq_rt_gstr(F->a_2096, rt_g_lit("FIRST", 5))) {
(*F->r_765) = f_mk_203(F->up, rt_g_lit("(-1.7976931348623157e+308)", 26));
} else {
(*F->r_765) = f_mk_203(F->up, rt_g_lit("1.7976931348623157e+308", 23));
}
} else {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_762)).line_, cat_rt_gstr(rt_g_lit("this type has no ", 17), F->a_2096));
}
goto ret_;
}
f_other_attr_998(F->up, F->e_762, F->y_2097, &(*F->t_764), &(*F->r_765));
goto ret_;
}
if (((F->y_2097 != NULL) && (((*(P112)rt_nil_check(F->y_2097)).kind_ != ((rt_int)1LL)) && ((*(P112)rt_nil_check(F->y_2097)).kind_ != ((rt_int)2LL))))) {
f_other_attr_998(F->up, F->e_762, F->y_2097, &(*F->t_764), &(*F->r_765));
goto ret_;
}
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->e_762)).a_, NULL, &F->tt_2098, &F->v_2100);
if (((*(P117)rt_nil_check(F->tt_2098)).kind_ == ((rt_int)8LL))) {
f_finish_ptr_534(F->up, F->tt_2098);
f_deref_639(F->up, (*(P135)rt_nil_check(F->v_2100)), F->tt_2098, &F->d_2101);
F->v_2100 = F->d_2101;
F->tt_2098 = (*(P117)rt_nil_check(F->tt_2098)).target_;
}
(*F->t_764) = F->up->ty_int_151;
if ((((*(P117)rt_nil_check(F->tt_2098)).kind_ == ((rt_int)6LL)) && ((eq_rt_gstr(F->a_2096, rt_g_lit("FIRST", 5)) || eq_rt_gstr(F->a_2096, rt_g_lit("LAST", 4))) || eq_rt_gstr(F->a_2096, rt_g_lit("LENGTH", 6))))) {
f_object_array_attr_776(F->up, F->e_762, F->tt_2098, (*(P135)rt_nil_check(F->v_2100)), &(*F->t_764), &(*F->r_765));
goto ret_;
}
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_762)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), F->a_2096), rt_g_lit(" is not handled here", 20)));
ret_:

  return;
}

static void f_attr_dim_770(struct f_greenc_1fr *up_, P169 e_767, P117 arrt_768, rt_int *n_769) {
  struct f_attr_dim_770fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_767 = e_767;
F->arrt_768 = arrt_768;
F->n_769 = n_769;
(*F->n_769) = ((rt_int)1LL);
if (((*(P169)rt_nil_check(F->e_767)).b_ != NULL)) {
f_manifest_440(F->up, (*(P169)rt_nil_check(F->e_767)).b_, &(*F->n_769), &F->ok_2105);
if ((!F->ok_2105)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_767)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("the index number of ", 20), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_767)).name_))), rt_g_lit("(N) is static (RM79 App. A)", 27)));
}
}
if ((((*F->n_769) < ((rt_int)1LL)) || ((*F->n_769) > (*(P117)rt_nil_check(F->arrt_768)).dims_))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_767)).line_, cat_rt_gstr(cat_rt_gstr(f_kind_name_419(F->up, F->arrt_768), rt_g_lit(" has no index ", 14)), rt_g_s2g(rt_str_of_int((*F->n_769)))));
}
ret_:

  return;
}

static void f_object_array_attr_776(struct f_greenc_1fr *up_, P169 e_771, P117 arrt_772, rt_gstr v_773, P117 *t_774, P135 *r_775) {
  struct f_object_array_attr_776fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_771 = e_771;
F->arrt_772 = arrt_772;
F->v_773 = cp_rt_gstr(v_773);
F->t_774 = t_774;
F->r_775 = r_775;
F->it_2107 = NULL;
F->it_2107 = F->arrt_772;
F->ct_2108 = NULL;
F->tmp_2109 = NULL;
F->p_2110 = NULL;
F->lo_2111 = NULL;
F->hi_2112 = NULL;
f_attr_dim_770(F->up, F->e_771, F->arrt_772, &F->n_2106);
f_ctype_428(F->up, F->arrt_772, &F->ct_2108);
f_new_name_206(F->up, rt_g_lit("at", 2), &F->tmp_2109);
F->p_2110 = F->tmp_2109;
{ rt_int lo2115 = ((rt_int)2LL), hi2116 = F->n_2106;
for (rt_int it2117 = lo2115; it2117 <= hi2116; it2117++) {
F->k_2114 = it2117;
F->it_2107 = (*(P117)rt_nil_check(F->it_2107)).elem_;
}
}
L_end_2113: ;
if ((F->n_2106 == ((rt_int)1LL))) {
F->lo_2111 = f_mk_203(F->up, cat_rt_gstr((*(P135)rt_nil_check(F->p_2110)), rt_g_lit(".lo", 3)));
F->hi_2112 = f_mk_203(F->up, cat_rt_gstr((*(P135)rt_nil_check(F->p_2110)), rt_g_lit(".hi", 3)));
} else {
{ rt_int lo2120 = ((rt_int)3LL), hi2121 = F->n_2106;
for (rt_int it2122 = lo2120; it2122 <= hi2121; it2122++) {
F->k_2119 = it2122;
F->p_2110 = f_mk_203(F->up, cat_rt_gstr((*(P135)rt_nil_check(F->p_2110)), rt_g_lit(".p[0]", 5)));
}
}
L_end_2118: ;
F->lo_2111 = f_mk_203(F->up, cat_rt_gstr((*(P135)rt_nil_check(F->p_2110)), rt_g_lit(".lo2", 4)));
F->hi_2112 = f_mk_203(F->up, cat_rt_gstr((*(P135)rt_nil_check(F->p_2110)), rt_g_lit(".hi2", 4)));
}
(*F->t_774) = (*(P117)rt_nil_check(F->it_2107)).idx_;
if (eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_771)).name_)), rt_g_lit("FIRST", 5))) {
(*F->r_775) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P135)rt_nil_check(F->ct_2108))), one_rt_gstr(32)), (*(P135)rt_nil_check(F->tmp_2109))), rt_g_lit(" = ", 3)), F->v_773), rt_g_lit("; ", 2)), (*(P135)rt_nil_check(F->lo_2111))), rt_g_lit("; })", 4)));
} else if (eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_771)).name_)), rt_g_lit("LAST", 4))) {
(*F->r_775) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P135)rt_nil_check(F->ct_2108))), one_rt_gstr(32)), (*(P135)rt_nil_check(F->tmp_2109))), rt_g_lit(" = ", 3)), F->v_773), rt_g_lit("; ", 2)), (*(P135)rt_nil_check(F->hi_2112))), rt_g_lit("; })", 4)));
} else {
(*F->t_774) = F->up->ty_int_151;
(*F->r_775) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P135)rt_nil_check(F->ct_2108))), one_rt_gstr(32)), (*(P135)rt_nil_check(F->tmp_2109))), rt_g_lit(" = ", 3)), F->v_773), rt_g_lit("; ", 2)), (*(P135)rt_nil_check(F->hi_2112))), rt_g_lit(" >= ", 4)), (*(P135)rt_nil_check(F->lo_2111))), rt_g_lit(" \? ", 3)), (*(P135)rt_nil_check(F->hi_2112))), rt_g_lit(" - ", 3)), (*(P135)rt_nil_check(F->lo_2111))), rt_g_lit(" + 1 : (rt_int)0; })", 20)));
}
ret_:

  return;
}

static void f_type_array_attr_782(struct f_greenc_1fr *up_, P169 e_777, P117 arrt_778, P173 c_779, P117 *t_780, P135 *r_781) {
  struct f_type_array_attr_782fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_777 = e_777;
F->arrt_778 = arrt_778;
F->c_779 = c_779;
F->t_780 = t_780;
F->r_781 = r_781;
F->it_2124 = NULL;
F->it_2124 = F->arrt_778;
F->cc_2125 = NULL;
F->cc_2125 = F->c_779;
f_attr_dim_770(F->up, F->e_777, F->arrt_778, &F->n_2123);
{ rt_int lo2128 = ((rt_int)2LL), hi2129 = F->n_2123;
for (rt_int it2130 = lo2128; it2130 <= hi2129; it2130++) {
F->k_2127 = it2130;
F->it_2124 = (*(P117)rt_nil_check(F->it_2124)).elem_;
if ((F->cc_2125 != NULL)) {
F->cc_2125 = (*(P173)rt_nil_check(F->cc_2125)).inner_;
}
}
}
L_end_2126: ;
if (((F->cc_2125 == NULL) || ((*(P173)rt_nil_check(F->cc_2125)).lo_ == NULL))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_777)).line_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the bounds of ", 14), f_kind_name_419(F->up, F->arrt_778)), rt_g_lit(" are not known here: ", 21)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_777)).name_))), rt_g_lit(" applies to an array type with bounds (RM79 3.6)", 48)));
}
(*F->t_780) = (*(P117)rt_nil_check(F->it_2124)).idx_;
if (eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_777)).name_)), rt_g_lit("FIRST", 5))) {
(*F->r_781) = (*(P173)rt_nil_check(F->cc_2125)).lo_;
} else if (eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_777)).name_)), rt_g_lit("LAST", 4))) {
(*F->r_781) = (*(P173)rt_nil_check(F->cc_2125)).hi_;
} else {
(*F->t_780) = F->up->ty_int_151;
(*F->r_781) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ rt_int l_ = ", 15), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->cc_2125)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->cc_2125)).hi_))), rt_g_lit("; h_ >= l_ \? h_ - l_ + 1 : (rt_int)0; })", 40)));
}
ret_:

  return;
}

static void f_lit_table_785(struct f_greenc_1fr *up_, P117 t_783, P135 *r_784) {
  struct f_lit_table_785fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_783 = t_783;
F->r_784 = r_784;
F->l_2131 = NULL;
F->l_2131 = (*(P117)rt_nil_check(F->t_783)).lits_;
F->s_2132 = NULL;
F->s_2132 = f_mk_203(F->up, rt_g_lit("", 0));
if (((*(P117)rt_nil_check(F->t_783)).littab_ == NULL)) {
f_new_name_206(F->up, rt_g_lit("lits", 4), &(*(P117)rt_nil_check(F->t_783)).littab_);
while ((F->l_2131 != NULL)) {
if ((({ rt_gstr at2134 = (*(P135)rt_nil_check(F->s_2132)); at2134.hi >= at2134.lo ? at2134.hi - at2134.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->s_2132 = f_mk_203(F->up, cat_rt_gstr((*(P135)rt_nil_check(F->s_2132)), rt_g_lit(", ", 2)));
}
if (((*(P169)rt_nil_check(F->l_2131)).kind_ == ((rt_int)3LL))) {
F->s_2132 = f_mk_203(F->up, cat_rt_gstr((*(P135)rt_nil_check(F->s_2132)), f_c_string_673(F->up, cat_rt_gstr(cat_rt_gstr(f_q_221(F->up), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->l_2131)).name_))), f_q_221(F->up)))));
} else {
F->s_2132 = f_mk_203(F->up, cat_rt_gstr((*(P135)rt_nil_check(F->s_2132)), f_c_string_673(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->l_2131)).name_)))));
}
F->l_2131 = (*(P169)rt_nil_check(F->l_2131)).next_;
}
L_end_2133: ;
f_put_to_228(F->up, F->up->out_types_123, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static const char *const ", 25), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_783)).littab_))), rt_g_lit("[] = {", 6)), (*(P135)rt_nil_check(F->s_2132))), rt_g_lit("};", 2)));
}
(*F->r_784) = (*(P117)rt_nil_check(F->t_783)).littab_;
ret_:

  return;
}

static void f_val_rep_791(struct f_greenc_1fr *up_, P169 e_786, P117 tt_787, P173 c_788, P117 *t_789, P135 *r_790) {
  struct f_val_rep_791fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_786 = e_786;
F->tt_787 = tt_787;
F->c_788 = c_788;
F->t_789 = t_789;
F->r_790 = r_790;
F->aty_2135 = NULL;
F->v_2136 = NULL;
F->lt_2137 = NULL;
if (((*(P169)rt_nil_check(F->e_786)).b_ == NULL)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_786)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_786)).name_))), rt_g_lit(" takes an argument", 18)));
}
if (eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_786)).name_)), rt_g_lit("REP", 3))) {
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->e_786)).b_, F->tt_787, &F->aty_2135, &F->v_2136);
f_check_type_423(F->up, F->aty_2135, F->tt_787, (*(P169)rt_nil_check(F->e_786)).line_);
(*F->t_789) = F->up->ty_string_155;
if (((*(P117)rt_nil_check(F->tt_787)).kind_ == ((rt_int)1LL))) {
(*F->r_790) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_str_of_int(", 14), (*(P135)rt_nil_check(F->v_2136))), one_rt_gstr(41)));
} else if (((*(P117)rt_nil_check(F->tt_787)).kind_ == ((rt_int)3LL))) {
(*F->r_790) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_image_float(", 17), (*(P135)rt_nil_check(F->v_2136))), one_rt_gstr(41)));
} else if (((*(P117)rt_nil_check(F->tt_787)).kind_ == ((rt_int)2LL))) {
(*F->r_790) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_bool_rep(", 14), (*(P135)rt_nil_check(F->v_2136))), one_rt_gstr(41)));
} else if (((*(P117)rt_nil_check(F->tt_787)).kind_ == ((rt_int)11LL))) {
(*F->r_790) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_char_rep(", 14), (*(P135)rt_nil_check(F->v_2136))), one_rt_gstr(41)));
} else if (((*(P117)rt_nil_check(F->tt_787)).kind_ == ((rt_int)4LL))) {
f_lit_table_785(F->up, F->tt_787, &F->lt_2137);
(*F->r_790) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_enum_rep(", 14), (*(P135)rt_nil_check(F->v_2136))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check(F->lt_2137))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(f_list_len_280(F->up, (*(P117)rt_nil_check(F->tt_787)).lits_)))), one_rt_gstr(41)));
} else {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_786)).line_, rt_g_lit("REP is an attribute of scalar types", 35));
}
(*F->r_790) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_s2g(", 9), (*(P135)rt_nil_check((*F->r_790)))), one_rt_gstr(41)));
goto ret_;
}
(*F->t_789) = F->tt_787;
if (((*(P117)rt_nil_check(F->tt_787)).kind_ == ((rt_int)1LL))) {
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->e_786)).b_, F->up->ty_string_155, &F->aty_2135, &F->v_2136);
f_check_type_423(F->up, F->aty_2135, F->up->ty_string_155, (*(P169)rt_nil_check(F->e_786)).line_);
(*F->r_790) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_int_of_str(rt_g_g2s(", 23), (*(P135)rt_nil_check(F->v_2136))), rt_g_lit("))", 2)));
if (((F->c_788 != NULL) && ((*(P173)rt_nil_check(F->c_788)).lo_ != NULL))) {
(*F->r_790) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P135)rt_nil_check((*F->r_790)))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_788)).lo_))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_788)).hi_))), one_rt_gstr(41)));
}
} else if (((*(P117)rt_nil_check(F->tt_787)).kind_ == ((rt_int)3LL))) {
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->e_786)).b_, F->up->ty_string_155, &F->aty_2135, &F->v_2136);
f_check_type_423(F->up, F->aty_2135, F->up->ty_string_155, (*(P169)rt_nil_check(F->e_786)).line_);
(*F->r_790) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_float_val(rt_g_g2s(", 24), (*(P135)rt_nil_check(F->v_2136))), rt_g_lit("))", 2)));
} else if (((((*(P117)rt_nil_check(F->tt_787)).kind_ == ((rt_int)2LL)) || ((*(P117)rt_nil_check(F->tt_787)).kind_ == ((rt_int)11LL))) || ((*(P117)rt_nil_check(F->tt_787)).kind_ == ((rt_int)4LL)))) {
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->e_786)).b_, NULL, &F->aty_2135, &F->v_2136);
if (f_is_string_497(F->up, F->aty_2135)) {
F->v_2136 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_g2s(", 9), (*(P135)rt_nil_check(F->v_2136))), one_rt_gstr(41)));
if (((*(P117)rt_nil_check(F->tt_787)).kind_ == ((rt_int)2LL))) {
F->v_2136 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_bool_val(", 14), (*(P135)rt_nil_check(F->v_2136))), one_rt_gstr(41)));
} else if (((*(P117)rt_nil_check(F->tt_787)).kind_ == ((rt_int)11LL))) {
F->v_2136 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_char_val(", 14), (*(P135)rt_nil_check(F->v_2136))), one_rt_gstr(41)));
} else {
f_lit_table_785(F->up, F->tt_787, &F->lt_2137);
F->v_2136 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_enum_val(", 14), (*(P135)rt_nil_check(F->v_2136))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check(F->lt_2137))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(f_list_len_280(F->up, (*(P117)rt_nil_check(F->tt_787)).lits_)))), one_rt_gstr(41)));
}
} else {
f_check_type_423(F->up, F->aty_2135, F->up->ty_int_151, (*(P169)rt_nil_check(F->e_786)).line_);
F->v_2136 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P135)rt_nil_check(F->v_2136))), rt_g_lit(" - 1)", 5)));
}
(*F->r_790) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P135)rt_nil_check(F->v_2136))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_788)).lo_))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_788)).hi_))), one_rt_gstr(41)));
} else {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_786)).line_, rt_g_lit("VAL is an attribute of scalar types", 35));
}
ret_:

  return;
}

static void f_allocator_796(struct f_greenc_1fr *up_, P169 e_792, P117 want_793, P117 *t_794, P135 *r_795) {
  struct f_allocator_796fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_792 = e_792;
F->want_793 = want_793;
F->t_794 = t_794;
F->r_795 = r_795;
F->y_2139 = NULL;
F->y_2139 = f_lookup_381(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_792)).name_)));
F->target_2140 = NULL;
F->vt_2141 = NULL;
F->ct_2142 = NULL;
F->pt_2143 = NULL;
F->cell_2144 = NULL;
F->v_2145 = NULL;
F->x_2146 = NULL;
if (((F->want_793 == NULL) || ((*(P117)rt_nil_check(F->want_793)).kind_ != ((rt_int)8LL)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_792)).line_, rt_g_lit("the access type of this allocator is not known here", 51));
}
if (((F->y_2139 == NULL) || ((*(P112)rt_nil_check(F->y_2139)).kind_ != ((rt_int)5LL)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_792)).line_, cat_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_792)).name_)), rt_g_lit(" is not a type", 14)));
}
f_finish_ptr_534(F->up, F->want_793);
F->target_2140 = (*(P117)rt_nil_check(F->want_793)).target_;
if ((!f_same_394(F->up, (*(P112)rt_nil_check(F->y_2139)).t_, F->want_793))) {
f_check_type_423(F->up, (*(P112)rt_nil_check(F->y_2139)).t_, F->target_2140, (*(P169)rt_nil_check(F->e_792)).line_);
}
f_ctype_428(F->up, F->target_2140, &F->ct_2142);
f_ctype_428(F->up, F->want_793, &F->pt_2143);
f_new_name_206(F->up, rt_g_lit("cell", 4), &F->cell_2144);
if (((*(P169)rt_nil_check(F->e_792)).a_ == NULL)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_792)).line_, rt_g_lit("an allocator gives the initial value: new T(...) (RM79 4.7)", 59));
}
if ((F->up->pure_sym_192 != NULL)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_792)).line_, rt_g_lit("an allocator cannot appear in a function body (RM79 6.5)", 56));
}
if (((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_792)).a_)).kind_ == ((rt_int)12LL))) {
f_aggregate_801(F->up, (*(P169)rt_nil_check(F->e_792)).a_, F->target_2140, &F->vt_2141, &F->v_2145);
} else {
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->e_792)).a_, F->target_2140, &F->vt_2141, &F->v_2145);
}
f_check_type_423(F->up, F->vt_2141, F->target_2140, (*(P169)rt_nil_check(F->e_792)).line_);
f_copy_code_550(F->up, F->target_2140, (*(P135)rt_nil_check(F->v_2145)), &F->x_2146);
(*F->t_794) = F->want_793;
(*F->r_795) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P135)rt_nil_check(F->ct_2142))), rt_g_lit(" *", 2)), (*(P135)rt_nil_check(F->cell_2144))), rt_g_lit(" = rt_alloc(sizeof(", 19)), (*(P135)rt_nil_check(F->ct_2142))), rt_g_lit(")); *", 5)), (*(P135)rt_nil_check(F->cell_2144))), rt_g_lit(" = ", 3)), (*(P135)rt_nil_check(F->x_2146))), rt_g_lit("; (", 3)), (*(P135)rt_nil_check(F->pt_2143))), one_rt_gstr(41)), (*(P135)rt_nil_check(F->cell_2144))), rt_g_lit("; })", 4)));
ret_:

  return;
}

static void f_aggregate_801(struct f_greenc_1fr *up_, P169 e_797, P117 want_798, P117 *t_799, P135 *r_800) {
  struct f_aggregate_801fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_797 = e_797;
F->want_798 = want_798;
F->t_799 = t_799;
F->r_800 = r_800;
F->b_2147 = NULL;
F->b_2147 = F->up->agg_bounds_176;
F->up->agg_bounds_176 = NULL;
if ((F->want_798 == NULL)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_797)).line_, rt_g_lit("the type of this aggregate is not known here: qualify it, T(...) (RM79 4.6)", 75));
}
(*F->t_799) = F->want_798;
if (((*(P117)rt_nil_check(F->want_798)).kind_ == ((rt_int)7LL))) {
f_record_aggregate_820(F->up, F->e_797, F->want_798, &(*F->r_800));
} else if (((*(P117)rt_nil_check(F->want_798)).kind_ == ((rt_int)6LL))) {
f_array_aggregate_838(F->up, F->e_797, F->want_798, F->b_2147, &(*F->r_800));
} else {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_797)).line_, cat_rt_gstr(rt_g_lit("an aggregate builds a record or an array, not ", 46), f_kind_name_419(F->up, F->want_798)));
}
ret_:

  return;
}

static void f_captured_804(struct f_greenc_1fr *up_, P121 b_802, P135 *r_803) {
  struct f_captured_804fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_802 = b_802;
F->r_803 = r_803;
F->l_2148 = NULL;
F->l_2148 = (*(P121)rt_nil_check(F->b_802)).head_;
(*F->r_803) = f_mk_203(F->up, rt_g_lit("", 0));
while ((F->l_2148 != NULL)) {
(*F->r_803) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check((*F->r_803))), one_rt_gstr(32)), (*(P135)rt_nil_check((*(P146)rt_nil_check(F->l_2148)).s_))));
F->l_2148 = (*(P146)rt_nil_check(F->l_2148)).next_;
}
L_end_2149: ;
ret_:

  return;
}

static P1600 f_field_at_807(struct f_greenc_1fr *up_, P117 rt_805, rt_int k_806) {
  struct f_field_at_807fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->rt_805 = rt_805;
F->k_806 = k_806;
F->f_2150 = NULL;
F->f_2150 = (*(P117)rt_nil_check(F->rt_805)).fields_;
{ rt_int lo2153 = ((rt_int)2LL), hi2154 = F->k_806;
for (rt_int it2155 = lo2153; it2155 <= hi2154; it2155++) {
F->i_2152 = it2155;
F->f_2150 = (*(P1600)rt_nil_check(F->f_2150)).next_;
}
}
L_end_2151: ;
F->result_ = F->f_2150;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P169 f_item_for_812(struct f_greenc_1fr *up_, P169 e_808, P117 rt_809, rt_int k_810, rt_int p_811) {
  struct f_item_for_812fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_808 = e_808;
F->rt_809 = rt_809;
F->k_810 = k_810;
F->p_811 = p_811;
F->it_2156 = NULL;
F->it_2156 = (*(P169)rt_nil_check(F->e_808)).a_;
F->lab_2157 = NULL;
F->n_2158 = ((rt_int)0LL);
while ((F->it_2156 != NULL)) {
if (((*(P169)rt_nil_check(F->it_2156)).a_ == NULL)) {
F->n_2158 = rt_add(F->n_2158, ((rt_int)1LL));
if ((F->n_2158 == F->p_811)) {
F->result_ = (*(P169)rt_nil_check(F->it_2156)).b_;
goto ret_;
}
} else {
F->lab_2157 = (*(P169)rt_nil_check(F->it_2156)).a_;
while ((F->lab_2157 != NULL)) {
if ((((*(P169)rt_nil_check(F->lab_2157)).flag_ == ((rt_int)1LL)) || (((*(P169)rt_nil_check((*(P169)rt_nil_check(F->lab_2157)).a_)).kind_ == ((rt_int)5LL)) && eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->lab_2157)).a_)).name_)), (*(P135)rt_nil_check((*(P1600)rt_nil_check(f_field_at_807(F->up, F->rt_809, F->k_810))).name_)))))) {
F->result_ = (*(P169)rt_nil_check(F->it_2156)).b_;
goto ret_;
}
F->lab_2157 = (*(P169)rt_nil_check(F->lab_2157)).next_;
}
L_end_2160: ;
}
F->it_2156 = (*(P169)rt_nil_check(F->it_2156)).next_;
}
L_end_2159: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_arm_holds_816(struct f_greenc_1fr *up_, P169 arm_813, rt_int v_814, int *res_815) {
  struct f_arm_holds_816fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->arm_813 = arm_813;
F->v_814 = v_814;
F->res_815 = res_815;
F->l_2161 = NULL;
F->l_2161 = (*(P169)rt_nil_check(F->arm_813)).a_;
(*F->res_815) = 0;
while ((F->l_2161 != NULL)) {
f_static_choice_833(F->up, (*(P169)rt_nil_check(F->l_2161)).a_, &F->lo_2162, &F->ok_2164);
F->hi_2163 = F->lo_2162;
if (((*(P169)rt_nil_check(F->l_2161)).b_ != NULL)) {
f_static_choice_833(F->up, (*(P169)rt_nil_check(F->l_2161)).b_, &F->hi_2163, &F->ok_2164);
}
if (((F->v_814 >= F->lo_2162) && (F->v_814 <= F->hi_2163))) {
(*F->res_815) = 1;
}
F->l_2161 = (*(P169)rt_nil_check(F->l_2161)).next_;
}
L_end_2165: ;
ret_:

  return;
}

static void f_record_aggregate_820(struct f_greenc_1fr *up_, P169 e_817, P117 rt_818, P135 *r_819) {
  struct f_record_aggregate_820fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_817 = e_817;
F->rt_818 = rt_818;
F->r_819 = r_819;
F->it_2166 = NULL;
F->it_2166 = (*(P169)rt_nil_check(F->e_817)).a_;
F->lab_2167 = NULL;
F->vn_2168 = NULL;
F->a_2169 = NULL;
F->f_2170 = NULL;
F->g_2171 = NULL;
F->n_2172 = f_field_count_425(F->up, F->rt_818);
F->done_2174.lo = ((rt_int)1LL); F->done_2174.hi = ((rt_int)200LL);
F->done_2174.lo2 = 1; F->done_2174.hi2 = 1;
F->done_2174.p = rt_alloc(sizeof(int) * (size_t)G_CNT(F->done_2174));
F->active_2175.lo = ((rt_int)1LL); F->active_2175.hi = ((rt_int)200LL);
F->active_2175.lo2 = 1; F->active_2175.hi2 = 1;
F->active_2175.p = rt_alloc(sizeof(int) * (size_t)G_CNT(F->active_2175));
F->dvs_2177.lo = ((rt_int)1LL); F->dvs_2177.hi = ((rt_int)200LL);
F->dvs_2177.lo2 = 1; F->dvs_2177.hi2 = 1;
F->dvs_2177.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->dvs_2177));
F->order_2179.lo = ((rt_int)1LL); F->order_2179.hi = ((rt_int)200LL);
F->order_2179.lo2 = 1; F->order_2179.hi2 = 1;
F->order_2179.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->order_2179));
F->norder_2180 = ((rt_int)0LL);
F->nung_2181 = ((rt_int)0LL);
F->k_2182 = ((rt_int)0LL);
F->d_2183 = ((rt_int)0LL);
F->npos_2184 = ((rt_int)0LL);
F->saved_2185 = NULL;
F->saved_2185 = F->up->code_131;
F->ct_2186 = NULL;
F->tmp_2187 = NULL;
F->parts_2188 = NULL;
F->named_2189 = 0;
F->ok_2190 = 0;
F->holds_2191 = 0;
if (((*(P117)rt_nil_check(F->rt_818)).priv_ && (!f_inside_package_875(F->up, (*(P117)rt_nil_check(F->rt_818)).decl_)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_817)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("an aggregate of private type ", 29), f_kind_name_419(F->up, F->rt_818)), rt_g_lit(" is not allowed here (RM79 7.4)", 31)));
}
if ((F->n_2172 > ((rt_int)200LL))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_817)).line_, rt_g_lit("a record of more than 200 components", 36));
}
F->f_2170 = (*(P117)rt_nil_check(F->rt_818)).fields_;
{ rt_int lo2194 = ((rt_int)1LL), hi2195 = F->n_2172;
for (rt_int it2196 = lo2194; it2196 <= hi2195; it2196++) {
F->i_2193 = it2196;
(*({ A2173 *ix2197 = &(F->done_2174); &ix2197->p[rt_index(F->i_2193, ix2197->lo, ix2197->hi) - ix2197->lo]; })) = 0;
(*({ A2173 *ix2198 = &(F->active_2175); &ix2198->p[rt_index(F->i_2193, ix2198->lo, ix2198->hi) - ix2198->lo]; })) = ((*(P1600)rt_nil_check(F->f_2170)).guard_ == NULL);
if (({ A2173 ix2199 = F->active_2175; ix2199.p[rt_index(F->i_2193, ix2199.lo, ix2199.hi) - ix2199.lo]; })) {
F->norder_2180 = rt_add(F->norder_2180, ((rt_int)1LL));
(*({ A2178 *ix2200 = &(F->order_2179); &ix2200->p[rt_index(F->norder_2180, ix2200->lo, ix2200->hi) - ix2200->lo]; })) = F->i_2193;
}
F->f_2170 = (*(P1600)rt_nil_check(F->f_2170)).next_;
}
}
L_end_2192: ;
F->nung_2181 = F->norder_2180;
{ rt_int lo2203 = ((rt_int)1LL), hi2204 = F->nung_2181;
for (rt_int it2205 = lo2203; it2205 <= hi2204; it2205++) {
F->p_2202 = it2205;
F->f_2170 = f_field_at_807(F->up, F->rt_818, ({ A2178 ix2207 = F->order_2179; ix2207.p[rt_index(F->p_2202, ix2207.lo, ix2207.hi) - ix2207.lo]; }));
if ((*(P1600)rt_nil_check(F->f_2170)).is_discr_) {
F->vn_2168 = f_item_for_812(F->up, F->e_817, F->rt_818, ({ A2178 ix2209 = F->order_2179; ix2209.p[rt_index(F->p_2202, ix2209.lo, ix2209.hi) - ix2209.lo]; }), F->p_2202);
if ((F->vn_2168 == NULL)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_817)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("no value for discriminant ", 26), (*(P135)rt_nil_check((*(P1600)rt_nil_check(F->f_2170)).name_))), rt_g_lit(" (RM79 3.7.3)", 13)));
}
f_static_choice_833(F->up, F->vn_2168, &(*({ A2176 *ix2213 = &(F->dvs_2177); &ix2213->p[rt_index(({ A2178 ix2212 = F->order_2179; ix2212.p[rt_index(F->p_2202, ix2212.lo, ix2212.hi) - ix2212.lo]; }), ix2213->lo, ix2213->hi) - ix2213->lo]; })), &F->ok_2190);
if (((!F->ok_2190) && f_is_enum_lit_671(F->up, F->vn_2168))) {
F->ok_2190 = 1;
(*({ A2176 *ix2215 = &(F->dvs_2177); &ix2215->p[rt_index(({ A2178 ix2214 = F->order_2179; ix2214.p[rt_index(F->p_2202, ix2214.lo, ix2214.hi) - ix2214.lo]; }), ix2215->lo, ix2215->hi) - ix2215->lo]; })) = (*(P112)rt_nil_check(f_lookup_381(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->vn_2168)).name_))))).mvalue_;
}
if (((!F->ok_2190) && ((*(P117)rt_nil_check(F->rt_818)).fields_ != NULL))) {
F->g_2171 = NULL;
F->d_2183 = ((rt_int)0LL);
F->a_2169 = NULL;
F->f_2170 = (*(P117)rt_nil_check(F->rt_818)).fields_;
while ((F->f_2170 != NULL)) {
F->g_2171 = (*(P1600)rt_nil_check(F->f_2170)).guard_;
while ((F->g_2171 != NULL)) {
if (eq_rt_gstr((*(P135)rt_nil_check((*(P1724)rt_nil_check(F->g_2171)).disc_)), (*(P135)rt_nil_check((*(P1600)rt_nil_check(f_field_at_807(F->up, F->rt_818, ({ A2178 ix2219 = F->order_2179; ix2219.p[rt_index(F->p_2202, ix2219.lo, ix2219.hi) - ix2219.lo]; })))).name_)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_817)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("the value of discriminant ", 26), (*(P135)rt_nil_check((*(P1724)rt_nil_check(F->g_2171)).disc_))), rt_g_lit(" in an aggregate is static (RM79 3.7.3)", 39)));
}
F->g_2171 = (*(P1724)rt_nil_check(F->g_2171)).next_;
}
L_end_2217: ;
F->f_2170 = (*(P1600)rt_nil_check(F->f_2170)).next_;
}
L_end_2216: ;
}
}
}
}
L_end_2201: ;
F->f_2170 = (*(P117)rt_nil_check(F->rt_818)).fields_;
{ rt_int lo2222 = ((rt_int)1LL), hi2223 = F->n_2172;
for (rt_int it2224 = lo2222; it2224 <= hi2223; it2224++) {
F->i_2221 = it2224;
if (((*(P1600)rt_nil_check(F->f_2170)).guard_ != NULL)) {
F->holds_2191 = 1;
F->g_2171 = (*(P1600)rt_nil_check(F->f_2170)).guard_;
while ((F->g_2171 != NULL)) {
F->d_2183 = f_field_index_823(F->up, F->rt_818, (*(P135)rt_nil_check((*(P1724)rt_nil_check(F->g_2171)).disc_)));
if (((*(P169)rt_nil_check((*(P1724)rt_nil_check(F->g_2171)).arm_)).flag_ == ((rt_int)1LL))) {
F->a_2169 = (*(P169)rt_nil_check((*(P1724)rt_nil_check(F->g_2171)).variant_)).b_;
while ((F->a_2169 != NULL)) {
if ((F->a_2169 != (*(P1724)rt_nil_check(F->g_2171)).arm_)) {
f_arm_holds_816(F->up, F->a_2169, ({ A2176 ix2228 = F->dvs_2177; ix2228.p[rt_index(F->d_2183, ix2228.lo, ix2228.hi) - ix2228.lo]; }), &F->ok_2190);
if (F->ok_2190) {
F->holds_2191 = 0;
}
}
F->a_2169 = (*(P169)rt_nil_check(F->a_2169)).next_;
}
L_end_2226: ;
} else {
f_arm_holds_816(F->up, (*(P1724)rt_nil_check(F->g_2171)).arm_, ({ A2176 ix2230 = F->dvs_2177; ix2230.p[rt_index(F->d_2183, ix2230.lo, ix2230.hi) - ix2230.lo]; }), &F->ok_2190);
if ((!F->ok_2190)) {
F->holds_2191 = 0;
}
}
F->g_2171 = (*(P1724)rt_nil_check(F->g_2171)).next_;
}
L_end_2225: ;
if (F->holds_2191) {
(*({ A2173 *ix2231 = &(F->active_2175); &ix2231->p[rt_index(F->i_2221, ix2231->lo, ix2231->hi) - ix2231->lo]; })) = 1;
F->norder_2180 = rt_add(F->norder_2180, ((rt_int)1LL));
(*({ A2178 *ix2232 = &(F->order_2179); &ix2232->p[rt_index(F->norder_2180, ix2232->lo, ix2232->hi) - ix2232->lo]; })) = F->i_2221;
}
}
F->f_2170 = (*(P1600)rt_nil_check(F->f_2170)).next_;
}
}
L_end_2220: ;
f_ctype_428(F->up, F->rt_818, &F->ct_2186);
f_new_name_206(F->up, rt_g_lit("ag", 2), &F->tmp_2187);
F->up->code_131 = f_new_buffer_225(F->up);
while ((F->it_2166 != NULL)) {
if (((*(P169)rt_nil_check(F->it_2166)).a_ == NULL)) {
if (F->named_2189) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_817)).line_, rt_g_lit("positional associations come before named ones (RM79 3.6.2)", 59));
}
F->npos_2184 = rt_add(F->npos_2184, ((rt_int)1LL));
if ((F->npos_2184 > F->norder_2180)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_817)).line_, cat_rt_gstr(rt_g_lit("too many components in an aggregate of ", 39), f_kind_name_419(F->up, F->rt_818)));
}
F->k_2182 = ({ A2178 ix2234 = F->order_2179; ix2234.p[rt_index(F->npos_2184, ix2234.lo, ix2234.hi) - ix2234.lo]; });
f_agg_component_829(F->up, (*(P135)rt_nil_check(F->tmp_2187)), F->rt_818, F->k_2182, (*(P169)rt_nil_check(F->it_2166)).b_, (*(P169)rt_nil_check(F->e_817)).line_);
(*({ A2173 *ix2235 = &(F->done_2174); &ix2235->p[rt_index(F->k_2182, ix2235->lo, ix2235->hi) - ix2235->lo]; })) = 1;
} else {
F->named_2189 = 1;
F->lab_2167 = (*(P169)rt_nil_check(F->it_2166)).a_;
while ((F->lab_2167 != NULL)) {
if (((*(P169)rt_nil_check(F->lab_2167)).flag_ == ((rt_int)1LL))) {
if (((*(P169)rt_nil_check(F->it_2166)).next_ != NULL)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_817)).line_, rt_g_lit("others comes last in an aggregate (RM79 3.6.2)", 46));
}
{ rt_int lo2239 = ((rt_int)1LL), hi2240 = F->n_2172;
for (rt_int it2241 = lo2239; it2241 <= hi2240; it2241++) {
F->i_2238 = it2241;
if ((({ A2173 ix2242 = F->active_2175; ix2242.p[rt_index(F->i_2238, ix2242.lo, ix2242.hi) - ix2242.lo]; }) && (!({ A2173 ix2243 = F->done_2174; ix2243.p[rt_index(F->i_2238, ix2243.lo, ix2243.hi) - ix2243.lo]; })))) {
f_agg_component_829(F->up, (*(P135)rt_nil_check(F->tmp_2187)), F->rt_818, F->i_2238, (*(P169)rt_nil_check(F->it_2166)).b_, (*(P169)rt_nil_check(F->e_817)).line_);
(*({ A2173 *ix2244 = &(F->done_2174); &ix2244->p[rt_index(F->i_2238, ix2244->lo, ix2244->hi) - ix2244->lo]; })) = 1;
}
}
}
L_end_2237: ;
} else {
if ((((*(P169)rt_nil_check((*(P169)rt_nil_check(F->lab_2167)).a_)).kind_ != ((rt_int)5LL)) || ((*(P169)rt_nil_check(F->lab_2167)).b_ != NULL))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_817)).line_, rt_g_lit("a choice in a record aggregate names a component (RM79 3.6.2)", 61));
}
F->k_2182 = f_field_index_823(F->up, F->rt_818, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->lab_2167)).a_)).name_)));
if ((F->k_2182 == ((rt_int)0LL))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_817)).line_, cat_rt_gstr(cat_rt_gstr(f_kind_name_419(F->up, F->rt_818), rt_g_lit(" has no component ", 18)), (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->lab_2167)).a_)).name_))));
}
if ((!({ A2173 ix2245 = F->active_2175; ix2245.p[rt_index(F->k_2182, ix2245.lo, ix2245.hi) - ix2245.lo]; }))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_817)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("component ", 10), (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->lab_2167)).a_)).name_))), rt_g_lit(" is not in the variant selected (RM79 3.7.3)", 44)));
}
if (({ A2173 ix2246 = F->done_2174; ix2246.p[rt_index(F->k_2182, ix2246.lo, ix2246.hi) - ix2246.lo]; })) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_817)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("component ", 10), (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->lab_2167)).a_)).name_))), rt_g_lit(" is given twice in an aggregate (RM79 3.6.2)", 44)));
}
f_agg_component_829(F->up, (*(P135)rt_nil_check(F->tmp_2187)), F->rt_818, F->k_2182, (*(P169)rt_nil_check(F->it_2166)).b_, (*(P169)rt_nil_check(F->e_817)).line_);
(*({ A2173 *ix2247 = &(F->done_2174); &ix2247->p[rt_index(F->k_2182, ix2247->lo, ix2247->hi) - ix2247->lo]; })) = 1;
}
F->lab_2167 = (*(P169)rt_nil_check(F->lab_2167)).next_;
}
L_end_2236: ;
}
F->it_2166 = (*(P169)rt_nil_check(F->it_2166)).next_;
}
L_end_2233: ;
F->f_2170 = (*(P117)rt_nil_check(F->rt_818)).fields_;
{ rt_int lo2250 = ((rt_int)1LL), hi2251 = F->n_2172;
for (rt_int it2252 = lo2250; it2252 <= hi2251; it2252++) {
F->i_2249 = it2252;
if ((({ A2173 ix2253 = F->active_2175; ix2253.p[rt_index(F->i_2249, ix2253.lo, ix2253.hi) - ix2253.lo]; }) && (!({ A2173 ix2254 = F->done_2174; ix2254.p[rt_index(F->i_2249, ix2254.lo, ix2254.hi) - ix2254.lo]; })))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_817)).line_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("an aggregate gives every component of ", 38), f_kind_name_419(F->up, F->rt_818)), rt_g_lit(": ", 2)), (*(P135)rt_nil_check((*(P1600)rt_nil_check(F->f_2170)).name_))), rt_g_lit(" is missing (RM79 3.6.2)", 24)));
}
F->f_2170 = (*(P1600)rt_nil_check(F->f_2170)).next_;
}
}
L_end_2248: ;
f_captured_804(F->up, F->up->code_131, &F->parts_2188);
F->up->code_131 = F->saved_2185;
(*F->r_819) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P135)rt_nil_check(F->ct_2186))), one_rt_gstr(32)), (*(P135)rt_nil_check(F->tmp_2187))), one_rt_gstr(59)), (*(P135)rt_nil_check(F->parts_2188))), one_rt_gstr(32)), (*(P135)rt_nil_check(F->tmp_2187))), rt_g_lit("; })", 4)));
ret_:

  return;
}

static rt_int f_field_index_823(struct f_greenc_1fr *up_, P117 rt_821, rt_gstr name_822) {
  struct f_field_index_823fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->rt_821 = rt_821;
F->name_822 = cp_rt_gstr(name_822);
F->f_2255 = NULL;
F->f_2255 = (*(P117)rt_nil_check(F->rt_821)).fields_;
F->k_2256 = ((rt_int)1LL);
while ((F->f_2255 != NULL)) {
if (eq_rt_gstr((*(P135)rt_nil_check((*(P1600)rt_nil_check(F->f_2255)).name_)), F->name_822)) {
F->result_ = F->k_2256;
goto ret_;
}
F->k_2256 = rt_add(F->k_2256, ((rt_int)1LL));
F->f_2255 = (*(P1600)rt_nil_check(F->f_2255)).next_;
}
L_end_2257: ;
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_agg_component_829(struct f_greenc_1fr *up_, rt_gstr tmp_824, P117 rt_825, rt_int k_826, P169 v_827, rt_int line_828) {
  struct f_agg_component_829fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->tmp_824 = cp_rt_gstr(tmp_824);
F->rt_825 = rt_825;
F->k_826 = k_826;
F->v_827 = v_827;
F->line_828 = line_828;
F->f_2258 = NULL;
F->f_2258 = (*(P117)rt_nil_check(F->rt_825)).fields_;
F->vt_2259 = NULL;
F->x_2260 = NULL;
F->y_2261 = NULL;
{ rt_int lo2264 = ((rt_int)2LL), hi2265 = F->k_826;
for (rt_int it2266 = lo2264; it2266 <= hi2265; it2266++) {
F->i_2263 = it2266;
F->f_2258 = (*(P1600)rt_nil_check(F->f_2258)).next_;
}
}
L_end_2262: ;
f_gexpr_688(F->up, F->v_827, (*(P1600)rt_nil_check(F->f_2258)).t_, &F->vt_2259, &F->x_2260);
f_check_type_423(F->up, F->vt_2259, (*(P1600)rt_nil_check(F->f_2258)).t_, F->line_828);
if ((((*(P117)rt_nil_check((*(P1600)rt_nil_check(F->f_2258)).t_)).kind_ == ((rt_int)6LL)) && (((*(P1600)rt_nil_check(F->f_2258)).c_ == NULL) || ((*(P173)rt_nil_check((*(P1600)rt_nil_check(F->f_2258)).c_)).lo_ == NULL)))) {
f_copy_code_550(F->up, (*(P1600)rt_nil_check(F->f_2258)).t_, (*(P135)rt_nil_check(F->x_2260)), &F->y_2261);
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->tmp_824, one_rt_gstr(46)), f_c_field_220(F->up, (*(P135)rt_nil_check((*(P1600)rt_nil_check(F->f_2258)).name_)))), rt_g_lit(" = ", 3)), (*(P135)rt_nil_check(F->y_2261))), one_rt_gstr(59)));
} else {
if (f_composite_540(F->up, (*(P1600)rt_nil_check(F->f_2258)).t_)) {
f_init_storage_538(F->up, cat_rt_gstr(cat_rt_gstr(F->tmp_824, one_rt_gstr(46)), f_c_field_220(F->up, (*(P135)rt_nil_check((*(P1600)rt_nil_check(F->f_2258)).name_)))), (*(P1600)rt_nil_check(F->f_2258)).t_, (*(P1600)rt_nil_check(F->f_2258)).c_);
}
f_assign_code_546(F->up, cat_rt_gstr(cat_rt_gstr(F->tmp_824, one_rt_gstr(46)), f_c_field_220(F->up, (*(P135)rt_nil_check((*(P1600)rt_nil_check(F->f_2258)).name_)))), (*(P1600)rt_nil_check(F->f_2258)).t_, (*(P135)rt_nil_check(F->x_2260)), (*(P1600)rt_nil_check(F->f_2258)).c_, &F->y_2261);
f_emit_230(F->up, (*(P135)rt_nil_check(F->y_2261)));
}
ret_:

  return;
}

static void f_static_choice_833(struct f_greenc_1fr *up_, P169 x_830, rt_int *v_831, int *ok_832) {
  struct f_static_choice_833fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_830 = x_830;
F->v_831 = v_831;
F->ok_832 = ok_832;
if (f_is_char_lit_669(F->up, F->x_830)) {
(*F->ok_832) = 1;
(*F->v_831) = rt_sub(((rt_int)(({ rt_gstr ix2267 = (*(P135)rt_nil_check((*(P169)rt_nil_check(F->x_830)).name_)); ix2267.p[rt_index(((rt_int)1LL), ix2267.lo, ix2267.hi) - ix2267.lo]; })) + 1), ((rt_int)1LL));
goto ret_;
}
f_manifest_440(F->up, F->x_830, &(*F->v_831), &(*F->ok_832));
ret_:

  return;
}

static void f_array_aggregate_838(struct f_greenc_1fr *up_, P169 e_834, P117 arrt_835, P135 bounds_836, P135 *r_837) {
  struct f_array_aggregate_838fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_834 = e_834;
F->arrt_835 = arrt_835;
F->bounds_836 = bounds_836;
F->r_837 = r_837;
F->it_2268 = NULL;
F->it_2268 = (*(P169)rt_nil_check(F->e_834)).a_;
F->lab_2269 = NULL;
F->others_it_2270 = NULL;
F->np_2271 = ((rt_int)0LL);
F->nnamed_2272 = ((rt_int)0LL);
F->clo_2273 = ((rt_int)0LL);
F->chi_2274 = ((rt_int)0LL);
F->v1_2275 = ((rt_int)0LL);
F->v2_2276 = ((rt_int)0LL);
F->all_static_2277 = 1;
F->ok_2278 = 1;
F->ok2_2279 = 1;
F->first_choice_2280 = 1;
F->vt_2281 = NULL;
F->ct_2282 = NULL;
F->et_2283 = NULL;
F->tmp_2284 = NULL;
F->lo_2285 = NULL;
F->hi_2286 = NULL;
F->v_2287 = NULL;
F->x_2288 = NULL;
F->parts_2289 = NULL;
F->fill_2290 = NULL;
F->rowb_2291 = NULL;
F->key_2292 = NULL;
F->khi_2293 = NULL;
F->saved_2294 = NULL;
F->saved_2294 = F->up->code_131;
f_ctype_428(F->up, F->arrt_835, &F->ct_2282);
f_elem_ctype_492(F->up, (*(P117)rt_nil_check(F->arrt_835)).elem_, &F->et_2283);
f_new_name_206(F->up, rt_g_lit("ag", 2), &F->tmp_2284);
while ((F->it_2268 != NULL)) {
if (((*(P169)rt_nil_check(F->it_2268)).a_ == NULL)) {
if (((F->nnamed_2272 > ((rt_int)0LL)) || (F->others_it_2270 != NULL))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_834)).line_, rt_g_lit("positional associations come before named ones (RM79 3.6.2)", 59));
}
F->np_2271 = rt_add(F->np_2271, ((rt_int)1LL));
} else if (((*(P169)rt_nil_check((*(P169)rt_nil_check(F->it_2268)).a_)).flag_ == ((rt_int)1LL))) {
if ((((*(P169)rt_nil_check(F->it_2268)).next_ != NULL) || ((*(P169)rt_nil_check((*(P169)rt_nil_check(F->it_2268)).a_)).next_ != NULL))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_834)).line_, rt_g_lit("others comes last in an aggregate (RM79 3.6.2)", 46));
}
F->others_it_2270 = F->it_2268;
} else {
F->nnamed_2272 = rt_add(F->nnamed_2272, ((rt_int)1LL));
F->lab_2269 = (*(P169)rt_nil_check(F->it_2268)).a_;
while ((F->lab_2269 != NULL)) {
f_static_choice_833(F->up, (*(P169)rt_nil_check(F->lab_2269)).a_, &F->v1_2275, &F->ok_2278);
F->v2_2276 = F->v1_2275;
if (((*(P169)rt_nil_check(F->lab_2269)).b_ != NULL)) {
f_static_choice_833(F->up, (*(P169)rt_nil_check(F->lab_2269)).b_, &F->v2_2276, &F->ok2_2279);
F->ok_2278 = (F->ok_2278 && F->ok2_2279);
}
if ((!F->ok_2278)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_834)).line_, rt_g_lit("a choice in an array aggregate is static (RM79 3.6.2)", 53));
}
if ((F->first_choice_2280 || (F->v1_2275 < F->clo_2273))) {
F->clo_2273 = F->v1_2275;
}
if ((F->first_choice_2280 || (F->v2_2276 > F->chi_2274))) {
F->chi_2274 = F->v2_2276;
}
F->first_choice_2280 = 0;
F->lab_2269 = (*(P169)rt_nil_check(F->lab_2269)).next_;
}
L_end_2296: ;
}
F->it_2268 = (*(P169)rt_nil_check(F->it_2268)).next_;
}
L_end_2295: ;
if (((F->np_2271 > ((rt_int)0LL)) && (F->nnamed_2272 > ((rt_int)0LL)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_834)).line_, rt_g_lit("an array aggregate is positional or named, with others last (RM79 3.6.2)", 72));
}
if ((F->nnamed_2272 > ((rt_int)0LL))) {
f_check_choices_846(F->up, F->e_834, F->arrt_835, (F->others_it_2270 != NULL));
}
if (((F->others_it_2270 == NULL) && (F->np_2271 > ((rt_int)0LL)))) {
f_first_index_495(F->up, F->arrt_835, &F->lo_2285);
F->hi_2286 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P135)rt_nil_check(F->lo_2285))), rt_g_lit(" + ", 3)), rt_g_s2g(rt_str_of_int(rt_sub(F->np_2271, ((rt_int)1LL))))), one_rt_gstr(41)));
} else if (((F->others_it_2270 == NULL) && (F->nnamed_2272 > ((rt_int)0LL)))) {
F->lo_2285 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(F->clo_2273))), rt_g_lit("LL)", 3)));
F->hi_2286 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(F->chi_2274))), rt_g_lit("LL)", 3)));
} else if ((((*(P117)rt_nil_check(F->arrt_835)).tcons_ != NULL) && ((*(P173)rt_nil_check((*(P117)rt_nil_check(F->arrt_835)).tcons_)).hi_ != NULL))) {
F->lo_2285 = (*(P173)rt_nil_check((*(P117)rt_nil_check(F->arrt_835)).tcons_)).lo_;
F->hi_2286 = (*(P173)rt_nil_check((*(P117)rt_nil_check(F->arrt_835)).tcons_)).hi_;
} else if ((F->bounds_836 != NULL)) {
F->lo_2285 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P135)rt_nil_check(F->bounds_836))), rt_g_lit(").lo", 4)));
F->hi_2286 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P135)rt_nil_check(F->bounds_836))), rt_g_lit(").hi", 4)));
} else {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_834)).line_, rt_g_lit("an aggregate with others needs bounds from its context (RM79 3.6.2)", 67));
}
if ((((*(P117)rt_nil_check(F->arrt_835)).dims_ > ((rt_int)1LL)) && (F->bounds_836 != NULL))) {
F->rowb_2291 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((struct { rt_int lo, hi; }){ (", 31), (*(P135)rt_nil_check(F->bounds_836))), rt_g_lit(").lo2, (", 8)), (*(P135)rt_nil_check(F->bounds_836))), rt_g_lit(").hi2 })", 8)));
}
F->up->code_131 = f_new_buffer_225(F->up);
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->tmp_2284)), rt_g_lit(".lo = ", 6)), (*(P135)rt_nil_check(F->lo_2285))), rt_g_lit("; ", 2)), (*(P135)rt_nil_check(F->tmp_2284))), rt_g_lit(".hi = ", 6)), (*(P135)rt_nil_check(F->hi_2286))), rt_g_lit("; ", 2)), (*(P135)rt_nil_check(F->tmp_2284))), rt_g_lit(".lo2 = ", 7)), (*(P135)rt_nil_check(F->tmp_2284))), rt_g_lit(".hi2 = 1;", 9)));
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->tmp_2284)), rt_g_lit(".p = rt_alloc(sizeof(", 21)), (*(P135)rt_nil_check(F->et_2283))), rt_g_lit(") * (size_t)(G_CNT(", 19)), (*(P135)rt_nil_check(F->tmp_2284))), rt_g_lit(") + 1));", 8)));
if (((F->np_2271 > ((rt_int)0LL)) && (F->others_it_2270 == NULL))) {
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (G_CNT(", 10), (*(P135)rt_nil_check(F->tmp_2284))), rt_g_lit(") != ", 5)), rt_g_s2g(rt_str_of_int(F->np_2271))), rt_g_lit(") rt_raise(RT_X_SUBSCRIPT);", 27)));
} else if ((F->np_2271 > ((rt_int)0LL))) {
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (G_CNT(", 10), (*(P135)rt_nil_check(F->tmp_2284))), rt_g_lit(") < ", 4)), rt_g_s2g(rt_str_of_int(F->np_2271))), rt_g_lit(") rt_raise(RT_X_SUBSCRIPT);", 27)));
}
if ((F->others_it_2270 != NULL)) {
F->up->agg_bounds_176 = F->rowb_2291;
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->others_it_2270)).b_, (*(P117)rt_nil_check(F->arrt_835)).elem_, &F->vt_2281, &F->v_2287);
F->up->agg_bounds_176 = NULL;
f_check_type_423(F->up, F->vt_2281, (*(P117)rt_nil_check(F->arrt_835)).elem_, (*(P169)rt_nil_check(F->e_834)).line_);
f_ctype_428(F->up, (*(P117)rt_nil_check(F->arrt_835)).elem_, &F->x_2288);
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P135)rt_nil_check(F->x_2288))), rt_g_lit(" o_ = ", 6)), (*(P135)rt_nil_check(F->v_2287))), rt_g_lit("; for (rt_int k_ = 0; k_ < G_CNT(", 33)), (*(P135)rt_nil_check(F->tmp_2284))), rt_g_lit("); k_++) {", 10)));
f_copy_code_550(F->up, (*(P117)rt_nil_check(F->arrt_835)).elem_, rt_g_lit("o_", 2), &F->x_2288);
f_element_store_842(F->up, cat_rt_gstr((*(P135)rt_nil_check(F->tmp_2284)), rt_g_lit(".p[k_]", 6)), F->arrt_835, (*(P135)rt_nil_check(F->x_2288)));
f_emit_230(F->up, rt_g_lit("} }", 3));
}
F->it_2268 = (*(P169)rt_nil_check(F->e_834)).a_;
F->np_2271 = ((rt_int)0LL);
while (((F->it_2268 != NULL) && (F->it_2268 != F->others_it_2270))) {
F->up->agg_bounds_176 = F->rowb_2291;
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->it_2268)).b_, (*(P117)rt_nil_check(F->arrt_835)).elem_, &F->vt_2281, &F->v_2287);
F->up->agg_bounds_176 = NULL;
f_check_type_423(F->up, F->vt_2281, (*(P117)rt_nil_check(F->arrt_835)).elem_, (*(P169)rt_nil_check(F->e_834)).line_);
f_copy_code_550(F->up, (*(P117)rt_nil_check(F->arrt_835)).elem_, (*(P135)rt_nil_check(F->v_2287)), &F->x_2288);
if (((*(P169)rt_nil_check(F->it_2268)).a_ == NULL)) {
f_element_store_842(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->tmp_2284)), rt_g_lit(".p[", 3)), rt_g_s2g(rt_str_of_int(F->np_2271))), one_rt_gstr(93)), F->arrt_835, (*(P135)rt_nil_check(F->x_2288)));
F->np_2271 = rt_add(F->np_2271, ((rt_int)1LL));
} else {
f_new_name_206(F->up, rt_g_lit("av", 2), &F->v_2287);
f_ctype_428(F->up, (*(P117)rt_nil_check(F->arrt_835)).elem_, &F->parts_2289);
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P135)rt_nil_check(F->parts_2289))), one_rt_gstr(32)), (*(P135)rt_nil_check(F->v_2287))), rt_g_lit(" = ", 3)), (*(P135)rt_nil_check(F->x_2288))), one_rt_gstr(59)));
F->lab_2269 = (*(P169)rt_nil_check(F->it_2268)).a_;
while ((F->lab_2269 != NULL)) {
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->lab_2269)).a_, (*(P117)rt_nil_check(F->arrt_835)).idx_, &F->vt_2281, &F->key_2292);
f_check_type_423(F->up, F->vt_2281, (*(P117)rt_nil_check(F->arrt_835)).idx_, (*(P169)rt_nil_check(F->e_834)).line_);
F->khi_2293 = F->key_2292;
if (((*(P169)rt_nil_check(F->lab_2269)).b_ != NULL)) {
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->lab_2269)).b_, (*(P117)rt_nil_check(F->arrt_835)).idx_, &F->vt_2281, &F->khi_2293);
f_check_type_423(F->up, F->vt_2281, (*(P117)rt_nil_check(F->arrt_835)).idx_, (*(P169)rt_nil_check(F->e_834)).line_);
}
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = ", 17), (*(P135)rt_nil_check(F->key_2292))), rt_g_lit("; k_ <= ", 8)), (*(P135)rt_nil_check(F->khi_2293))), rt_g_lit("; k_++) {", 9)));
f_copy_code_550(F->up, (*(P117)rt_nil_check(F->arrt_835)).elem_, (*(P135)rt_nil_check(F->v_2287)), &F->x_2288);
f_element_store_842(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->tmp_2284)), rt_g_lit(".p[rt_index(k_, ", 16)), (*(P135)rt_nil_check(F->tmp_2284))), rt_g_lit(".lo, ", 5)), (*(P135)rt_nil_check(F->tmp_2284))), rt_g_lit(".hi) - ", 7)), (*(P135)rt_nil_check(F->tmp_2284))), rt_g_lit(".lo]", 4)), F->arrt_835, (*(P135)rt_nil_check(F->x_2288)));
f_emit_230(F->up, rt_g_lit("}", 1));
F->lab_2269 = (*(P169)rt_nil_check(F->lab_2269)).next_;
}
L_end_2298: ;
f_emit_230(F->up, rt_g_lit("}", 1));
}
F->it_2268 = (*(P169)rt_nil_check(F->it_2268)).next_;
}
L_end_2297: ;
if (((*(P117)rt_nil_check(F->arrt_835)).dims_ > ((rt_int)1LL))) {
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (G_CNT(", 10), (*(P135)rt_nil_check(F->tmp_2284))), rt_g_lit(") > 0) { ", 9)), (*(P135)rt_nil_check(F->tmp_2284))), rt_g_lit(".lo2 = ", 7)), (*(P135)rt_nil_check(F->tmp_2284))), rt_g_lit(".p[0].lo; ", 10)), (*(P135)rt_nil_check(F->tmp_2284))), rt_g_lit(".hi2 = ", 7)), (*(P135)rt_nil_check(F->tmp_2284))), rt_g_lit(".p[0].hi; }", 11)));
}
f_captured_804(F->up, F->up->code_131, &F->parts_2289);
F->up->code_131 = F->saved_2294;
(*F->r_837) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P135)rt_nil_check(F->ct_2282))), one_rt_gstr(32)), (*(P135)rt_nil_check(F->tmp_2284))), one_rt_gstr(59)), (*(P135)rt_nil_check(F->parts_2289))), one_rt_gstr(32)), (*(P135)rt_nil_check(F->tmp_2284))), rt_g_lit("; })", 4)));
ret_:

  return;
}

static void f_element_store_842(struct f_greenc_1fr *up_, rt_gstr lv_839, P117 arrt_840, rt_gstr v_841) {
  struct f_element_store_842fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lv_839 = cp_rt_gstr(lv_839);
F->arrt_840 = arrt_840;
F->v_841 = cp_rt_gstr(v_841);
F->x_2299 = NULL;
if (((((*(P117)rt_nil_check(F->arrt_840)).elemcons_ != NULL) && ((*(P173)rt_nil_check((*(P117)rt_nil_check(F->arrt_840)).elemcons_)).lo_ != NULL)) && (!f_composite_540(F->up, (*(P117)rt_nil_check(F->arrt_840)).elem_)))) {
f_assign_code_546(F->up, F->lv_839, (*(P117)rt_nil_check(F->arrt_840)).elem_, F->v_841, (*(P117)rt_nil_check(F->arrt_840)).elemcons_, &F->x_2299);
f_emit_230(F->up, (*(P135)rt_nil_check(F->x_2299)));
} else {
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lv_839, rt_g_lit(" = ", 3)), F->v_841), one_rt_gstr(59)));
}
ret_:

  return;
}

static void f_check_choices_846(struct f_greenc_1fr *up_, P169 e_843, P117 arrt_844, int has_others_845) {
  struct f_check_choices_846fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_843 = e_843;
F->arrt_844 = arrt_844;
F->has_others_845 = has_others_845;
F->a_2300 = NULL;
F->b_2301 = NULL;
F->lab_2302 = NULL;
F->lab2_2303 = NULL;
F->lo1_2304 = ((rt_int)0LL);
F->hi1_2305 = ((rt_int)0LL);
F->lo2_2306 = ((rt_int)0LL);
F->hi2_2307 = ((rt_int)0LL);
F->count_2308 = ((rt_int)0LL);
F->a_2300 = (*(P169)rt_nil_check(F->e_843)).a_;
while ((F->a_2300 != NULL)) {
if ((((*(P169)rt_nil_check(F->a_2300)).a_ != NULL) && ((*(P169)rt_nil_check((*(P169)rt_nil_check(F->a_2300)).a_)).flag_ != ((rt_int)1LL)))) {
F->lab_2302 = (*(P169)rt_nil_check(F->a_2300)).a_;
while ((F->lab_2302 != NULL)) {
f_static_choice_833(F->up, (*(P169)rt_nil_check(F->lab_2302)).a_, &F->lo1_2304, &F->ok_2309);
F->hi1_2305 = F->lo1_2304;
if (((*(P169)rt_nil_check(F->lab_2302)).b_ != NULL)) {
f_static_choice_833(F->up, (*(P169)rt_nil_check(F->lab_2302)).b_, &F->hi1_2305, &F->ok_2309);
}
if ((F->hi1_2305 >= F->lo1_2304)) {
F->count_2308 = rt_add(F->count_2308, rt_add(rt_sub(F->hi1_2305, F->lo1_2304), ((rt_int)1LL)));
}
F->b_2301 = F->a_2300;
F->lab2_2303 = (*(P169)rt_nil_check(F->lab_2302)).next_;
while ((F->b_2301 != NULL)) {
if ((((*(P169)rt_nil_check(F->b_2301)).a_ != NULL) && ((*(P169)rt_nil_check((*(P169)rt_nil_check(F->b_2301)).a_)).flag_ != ((rt_int)1LL)))) {
if ((F->b_2301 != F->a_2300)) {
F->lab2_2303 = (*(P169)rt_nil_check(F->b_2301)).a_;
}
while ((F->lab2_2303 != NULL)) {
f_static_choice_833(F->up, (*(P169)rt_nil_check(F->lab2_2303)).a_, &F->lo2_2306, &F->ok_2309);
F->hi2_2307 = F->lo2_2306;
if (((*(P169)rt_nil_check(F->lab2_2303)).b_ != NULL)) {
f_static_choice_833(F->up, (*(P169)rt_nil_check(F->lab2_2303)).b_, &F->hi2_2307, &F->ok_2309);
}
if (((((F->lo1_2304 <= F->hi1_2305) && (F->lo2_2306 <= F->hi2_2307)) && (F->lo1_2304 <= F->hi2_2307)) && (F->lo2_2306 <= F->hi1_2305))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_843)).line_, rt_g_lit("an index is given twice in an aggregate (RM79 3.6.2)", 52));
}
F->lab2_2303 = (*(P169)rt_nil_check(F->lab2_2303)).next_;
}
L_end_2313: ;
}
F->b_2301 = (*(P169)rt_nil_check(F->b_2301)).next_;
F->lab2_2303 = NULL;
}
L_end_2312: ;
F->lab_2302 = (*(P169)rt_nil_check(F->lab_2302)).next_;
}
L_end_2311: ;
}
F->a_2300 = (*(P169)rt_nil_check(F->a_2300)).next_;
}
L_end_2310: ;
if ((((!F->has_others_845) && ((*(P117)rt_nil_check(F->arrt_844)).tcons_ != NULL)) && (*(P173)rt_nil_check((*(P117)rt_nil_check(F->arrt_844)).tcons_)).hasm_)) {
if ((F->count_2308 != rt_add(rt_sub((*(P173)rt_nil_check((*(P117)rt_nil_check(F->arrt_844)).tcons_)).mhi_, (*(P173)rt_nil_check((*(P117)rt_nil_check(F->arrt_844)).tcons_)).mlo_), ((rt_int)1LL)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_843)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("the choices of an aggregate cover every index of ", 49), f_kind_name_419(F->up, F->arrt_844)), rt_g_lit(" once, or others is given (RM79 3.6.2)", 38)));
}
}
ret_:

  return;
}

static P169 f_actual_for_850(struct f_greenc_1fr *up_, P169 args_847, P1585 pm_848, P1585 first_849) {
  struct f_actual_for_850fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->args_847 = args_847;
F->pm_848 = pm_848;
F->first_849 = first_849;
F->a_2314 = NULL;
F->a_2314 = F->args_847;
F->p_2315 = NULL;
F->p_2315 = F->first_849;
while (((F->a_2314 != NULL) && ((*(P169)rt_nil_check(F->a_2314)).formal_ == NULL))) {
if ((F->p_2315 == F->pm_848)) {
F->result_ = F->a_2314;
goto ret_;
}
F->p_2315 = (*(P1585)rt_nil_check(F->p_2315)).next_;
F->a_2314 = (*(P169)rt_nil_check(F->a_2314)).next_;
}
L_end_2316: ;
while ((F->a_2314 != NULL)) {
if ((((*(P169)rt_nil_check(F->a_2314)).formal_ != NULL) && eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->a_2314)).formal_)), (*(P135)rt_nil_check((*(P1585)rt_nil_check(F->pm_848)).name_))))) {
F->result_ = F->a_2314;
goto ret_;
}
F->a_2314 = (*(P169)rt_nil_check(F->a_2314)).next_;
}
L_end_2317: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_gcall_855(struct f_greenc_1fr *up_, P169 e_851, int is_stmt_852, P117 *t_853, P135 *r_854) {
  struct f_gcall_855fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_851 = e_851;
F->is_stmt_852 = is_stmt_852;
F->t_853 = t_853;
F->r_854 = r_854;
F->fn_2318 = NULL;
F->fn_2318 = (*(P169)rt_nil_check(F->e_851)).a_;
F->nm_2319 = NULL;
F->y_2320 = NULL;
F->args_2321 = NULL;
F->lv_2322 = NULL;
F->v_2323 = NULL;
F->ct_2324 = NULL;
F->x_2325 = NULL;
F->a_2326 = NULL;
F->pm_2327 = NULL;
F->lt_2328 = NULL;
F->vt_2329 = NULL;
F->lc_2330 = NULL;
if ((((*(P169)rt_nil_check(F->fn_2318)).kind_ == ((rt_int)9LL)) && f_is_package_869(F->up, (*(P169)rt_nil_check(F->fn_2318)).a_))) {
F->nm_2319 = f_nn_274(F->up, ((rt_int)5LL), (*(P169)rt_nil_check(F->fn_2318)).line_);
(*(P169)rt_nil_check(F->nm_2319)).name_ = (*(P169)rt_nil_check(F->fn_2318)).name_;
(*(P169)rt_nil_check(F->nm_2319)).tag_ = (*(P169)rt_nil_check((*(P169)rt_nil_check(F->fn_2318)).a_)).name_;
F->fn_2318 = F->nm_2319;
} else if ((((((*(P169)rt_nil_check(F->fn_2318)).kind_ == ((rt_int)9LL)) && ((*(P169)rt_nil_check((*(P169)rt_nil_check(F->fn_2318)).a_)).kind_ == ((rt_int)8LL))) && ((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->fn_2318)).a_)).a_)).kind_ == ((rt_int)5LL))) && f_is_task_name_936(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->fn_2318)).a_)).a_)).name_))))) {
F->y_2320 = f_member_of_873(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->fn_2318)).a_)).a_)).name_)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->fn_2318)).name_)), (*(P169)rt_nil_check(F->fn_2318)).line_);
if (((F->y_2320 != NULL) && (((*(P112)rt_nil_check(F->y_2320)).kind_ == ((rt_int)3LL)) || ((*(P112)rt_nil_check(F->y_2320)).kind_ == ((rt_int)4LL))))) {
f_resolve_member_overload_912(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->fn_2318)).a_)).a_)).name_)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->fn_2318)).name_)), (*(P169)rt_nil_check(F->e_851)).b_, F->is_stmt_852, F->up->call_want_191, (*(P169)rt_nil_check(F->e_851)).line_, &F->y_2320);
F->up->call_task_ix_182 = (*(P169)rt_nil_check((*(P169)rt_nil_check(F->fn_2318)).a_)).b_;
if ((F->is_stmt_852 && ((*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_2320)).result_)).kind_ != ((rt_int)9LL)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_851)).line_, cat_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->fn_2318)).name_)), rt_g_lit(" returns a value; it is not a procedure call", 44)));
}
f_gcall_with_860(F->up, F->e_851, F->y_2320, &(*F->t_853), &(*F->r_854));
goto ret_;
}
}
if (((*(P169)rt_nil_check(F->fn_2318)).kind_ != ((rt_int)5LL))) {
f_other_call_993(F->up, F->e_851, F->is_stmt_852, &(*F->t_853), &(*F->r_854));
goto ret_;
}
F->y_2320 = f_lookup_381(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->fn_2318)).name_)));
if (((*(P169)rt_nil_check(F->fn_2318)).tag_ != NULL)) {
F->y_2320 = f_member_of_873(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->fn_2318)).tag_)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->fn_2318)).name_)), (*(P169)rt_nil_check(F->fn_2318)).line_);
}
if ((F->y_2320 == NULL)) {
f_builtin_867(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->fn_2318)).name_)), (*(P169)rt_nil_check(F->e_851)).b_, (*(P169)rt_nil_check(F->e_851)).line_, F->is_stmt_852, &(*F->t_853), &(*F->r_854));
goto ret_;
}
if (((((*(P112)rt_nil_check(F->y_2320)).kind_ == ((rt_int)3LL)) || ((*(P112)rt_nil_check(F->y_2320)).kind_ == ((rt_int)4LL))) && ((*(P169)rt_nil_check(F->fn_2318)).tag_ == NULL))) {
f_resolve_overload_904(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->fn_2318)).name_)), (*(P169)rt_nil_check(F->e_851)).b_, F->is_stmt_852, F->up->call_want_191, (*(P169)rt_nil_check(F->e_851)).line_, &F->y_2320);
if ((F->y_2320 == NULL)) {
f_builtin_867(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->fn_2318)).name_)), (*(P169)rt_nil_check(F->e_851)).b_, (*(P169)rt_nil_check(F->e_851)).line_, F->is_stmt_852, &(*F->t_853), &(*F->r_854));
goto ret_;
}
} else if ((((*(P112)rt_nil_check(F->y_2320)).kind_ == ((rt_int)3LL)) || ((*(P112)rt_nil_check(F->y_2320)).kind_ == ((rt_int)4LL)))) {
f_resolve_member_overload_912(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->fn_2318)).tag_)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->fn_2318)).name_)), (*(P169)rt_nil_check(F->e_851)).b_, F->is_stmt_852, F->up->call_want_191, (*(P169)rt_nil_check(F->e_851)).line_, &F->y_2320);
}
if (((*(P112)rt_nil_check(F->y_2320)).kind_ == ((rt_int)10LL))) {
f_other_call_993(F->up, F->e_851, F->is_stmt_852, &(*F->t_853), &(*F->r_854));
goto ret_;
}
if ((((*(P112)rt_nil_check(F->y_2320)).kind_ != ((rt_int)3LL)) && ((*(P112)rt_nil_check(F->y_2320)).kind_ != ((rt_int)4LL)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_851)).line_, cat_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->fn_2318)).name_)), rt_g_lit(" cannot be called", 17)));
}
if ((F->is_stmt_852 && ((*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_2320)).result_)).kind_ != ((rt_int)9LL)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_851)).line_, cat_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->fn_2318)).name_)), rt_g_lit(" returns a value; it is not a procedure call", 44)));
}
if (((!F->is_stmt_852) && ((*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_2320)).result_)).kind_ == ((rt_int)9LL)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_851)).line_, cat_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->fn_2318)).name_)), rt_g_lit(" is a procedure, not a function", 31)));
}
f_gcall_with_860(F->up, F->e_851, F->y_2320, &(*F->t_853), &(*F->r_854));
ret_:

  return;
}

static void f_gcall_with_860(struct f_greenc_1fr *up_, P169 e_856, P112 y_857, P117 *t_858, P135 *r_859) {
  struct f_gcall_with_860fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_856 = e_856;
F->y_857 = y_857;
F->t_858 = t_858;
F->r_859 = r_859;
F->args_2332 = NULL;
F->lv_2333 = NULL;
F->v_2334 = NULL;
F->x1_2335 = NULL;
F->x2_2336 = NULL;
F->a_2337 = NULL;
F->pm_2338 = NULL;
F->lt_2339 = NULL;
F->vt_2340 = NULL;
F->lc_2341 = NULL;
f_check_call_rules_1048(F->up, F->e_856, F->y_857);
F->args_2332 = f_mk_203(F->up, rt_g_lit("", 0));
if (((((((*(P112)rt_nil_check(F->y_857)).kind_ == ((rt_int)3LL)) || ((*(P112)rt_nil_check(F->y_857)).kind_ == ((rt_int)4LL))) && ((*(P112)rt_nil_check(F->y_857)).access_path_ != NULL)) && ((*(P112)rt_nil_check(F->y_857)).members_ != NULL)) && ((*(P112)rt_nil_check((*(P112)rt_nil_check(F->y_857)).members_)).c_ != NULL))) {
if ((F->up->call_task_ix_182 == NULL)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_856)).line_, cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_857)).name_)), rt_g_lit(" needs the member of the family: F(I).", 38)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_857)).name_))));
}
f_gexpr_688(F->up, F->up->call_task_ix_182, (*(P112)rt_nil_check((*(P112)rt_nil_check(F->y_857)).members_)).t_, &F->vt_2340, &F->v_2334);
F->up->call_task_ix_182 = NULL;
f_path_at_934(F->up, (*(P112)rt_nil_check((*(P112)rt_nil_check(F->y_857)).members_)).level_, (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_857)).access_path_)), &F->lv_2333);
f_path_at_934(F->up, (*(P112)rt_nil_check((*(P112)rt_nil_check(F->y_857)).members_)).level_, cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check((*(P112)rt_nil_check(F->y_857)).members_)).cname_)), rt_g_lit("lo", 2)), &F->x1_2335);
f_path_at_934(F->up, (*(P112)rt_nil_check((*(P112)rt_nil_check(F->y_857)).members_)).level_, cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check((*(P112)rt_nil_check(F->y_857)).members_)).cname_)), rt_g_lit("hi", 2)), &F->x2_2336);
F->lv_2333 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->lv_2333)), rt_g_lit("[rt_index(", 10)), (*(P135)rt_nil_check(F->v_2334))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check(F->x1_2335))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check(F->x2_2336))), rt_g_lit(") - ", 4)), (*(P135)rt_nil_check(F->x1_2335))), one_rt_gstr(93)));
F->args_2332 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P135)rt_nil_check(F->lv_2333))), rt_g_lit(" \? ", 3)), (*(P135)rt_nil_check(F->lv_2333))), rt_g_lit(" : (rt_raise(RT_X_TASKING), (void *)0))", 39)));
} else if (((((*(P112)rt_nil_check(F->y_857)).kind_ == ((rt_int)3LL)) || ((*(P112)rt_nil_check(F->y_857)).kind_ == ((rt_int)4LL))) && ((*(P112)rt_nil_check(F->y_857)).access_path_ != NULL))) {
f_path_at_934(F->up, (*(P112)rt_nil_check((*(P112)rt_nil_check(F->y_857)).members_)).level_, (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_857)).access_path_)), &F->lv_2333);
F->args_2332 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P135)rt_nil_check(F->lv_2333))), rt_g_lit(" \? ", 3)), (*(P135)rt_nil_check(F->lv_2333))), rt_g_lit(" : (rt_raise(RT_X_TASKING), (void *)0))", 39)));
} else if (((*(P112)rt_nil_check(F->y_857)).level_ > ((rt_int)0LL))) {
f_link_to_633(F->up, (*(P112)rt_nil_check(F->y_857)).level_, &F->args_2332);
}
F->pm_2338 = (*(P112)rt_nil_check(F->y_857)).params_;
while ((F->pm_2338 != NULL)) {
F->a_2337 = f_actual_for_850(F->up, (*(P169)rt_nil_check(F->e_856)).b_, F->pm_2338, (*(P112)rt_nil_check(F->y_857)).params_);
if ((({ rt_gstr at2344 = (*(P135)rt_nil_check(F->args_2332)); at2344.hi >= at2344.lo ? at2344.hi - at2344.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->args_2332 = f_mk_203(F->up, cat_rt_gstr((*(P135)rt_nil_check(F->args_2332)), rt_g_lit(", ", 2)));
}
if ((F->a_2337 == NULL)) {
if ((((*(P1585)rt_nil_check(F->pm_2338)).dflt_ == NULL) || ((*(P1585)rt_nil_check(F->pm_2338)).mode_ != ((rt_int)1LL)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_856)).line_, cat_rt_gstr(rt_g_lit("no actual parameter for ", 24), (*(P135)rt_nil_check((*(P1585)rt_nil_check(F->pm_2338)).name_))));
}
f_gexpr_688(F->up, (*(P1585)rt_nil_check(F->pm_2338)).dflt_, (*(P1585)rt_nil_check(F->pm_2338)).t_, &F->vt_2340, &F->v_2334);
F->args_2332 = f_mk_203(F->up, cat_rt_gstr((*(P135)rt_nil_check(F->args_2332)), (*(P135)rt_nil_check(F->v_2334))));
} else {
if (((((*(P169)rt_nil_check(F->a_2337)).flag_ != ((rt_int)0LL)) && ((*(P169)rt_nil_check(F->a_2337)).flag_ != ((rt_int)4LL))) && ((*(P169)rt_nil_check(F->a_2337)).flag_ != (*(P1585)rt_nil_check(F->pm_2338)).mode_))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_856)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("the association of ", 19), (*(P135)rt_nil_check((*(P1585)rt_nil_check(F->pm_2338)).name_))), rt_g_lit(" does not match its mode", 24)));
}
if (((*(P1585)rt_nil_check(F->pm_2338)).mode_ == ((rt_int)1LL))) {
f_gexpr_688(F->up, F->a_2337, (*(P1585)rt_nil_check(F->pm_2338)).t_, &F->vt_2340, &F->v_2334);
f_check_type_423(F->up, F->vt_2340, (*(P1585)rt_nil_check(F->pm_2338)).t_, (*(P169)rt_nil_check(F->e_856)).line_);
if (((((*(P1585)rt_nil_check(F->pm_2338)).c_ != NULL) && ((*(P173)rt_nil_check((*(P1585)rt_nil_check(F->pm_2338)).c_)).lo_ != NULL)) && (((*(P117)rt_nil_check((*(P1585)rt_nil_check(F->pm_2338)).t_)).kind_ == ((rt_int)1LL)) || ((*(P117)rt_nil_check((*(P1585)rt_nil_check(F->pm_2338)).t_)).kind_ == ((rt_int)4LL))))) {
F->v_2334 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P135)rt_nil_check(F->v_2334))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check((*(P173)rt_nil_check((*(P1585)rt_nil_check(F->pm_2338)).c_)).lo_))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check((*(P173)rt_nil_check((*(P1585)rt_nil_check(F->pm_2338)).c_)).hi_))), one_rt_gstr(41)));
}
F->args_2332 = f_mk_203(F->up, cat_rt_gstr((*(P135)rt_nil_check(F->args_2332)), (*(P135)rt_nil_check(F->v_2334))));
} else {
f_lvalue_647(F->up, F->a_2337, &F->lv_2333, &F->lt_2339, &F->lc_2341, &F->ro_2342);
if (F->ro_2342) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_856)).line_, cat_rt_gstr((*(P135)rt_nil_check((*(P1585)rt_nil_check(F->pm_2338)).name_)), rt_g_lit(" needs a variable", 17)));
}
f_check_pure_target_1031(F->up, F->a_2337, (*(P169)rt_nil_check(F->e_856)).line_);
f_check_type_423(F->up, F->lt_2339, (*(P1585)rt_nil_check(F->pm_2338)).t_, (*(P169)rt_nil_check(F->e_856)).line_);
F->args_2332 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->args_2332)), one_rt_gstr(38)), (*(P135)rt_nil_check(F->lv_2333))));
}
}
F->pm_2338 = (*(P1585)rt_nil_check(F->pm_2338)).next_;
}
L_end_2343: ;
if (((f_list_len_280(F->up, (*(P169)rt_nil_check(F->e_856)).b_) > ((rt_int)0LL)) && ((*(P112)rt_nil_check(F->y_857)).params_ == NULL))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_856)).line_, cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_857)).name_)), rt_g_lit(" takes no parameters", 20)));
}
(*F->t_858) = (*(P112)rt_nil_check(F->y_857)).result_;
(*F->r_859) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_857)).cname_)), one_rt_gstr(40)), (*(P135)rt_nil_check(F->args_2332))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_builtin_867(struct f_greenc_1fr *up_, rt_gstr name_861, P169 args_862, rt_int line_863, int is_stmt_864, P117 *t_865, P135 *r_866) {
  struct f_builtin_867fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_861 = cp_rt_gstr(name_861);
F->args_862 = args_862;
F->line_863 = line_863;
F->is_stmt_864 = is_stmt_864;
F->t_865 = t_865;
F->r_866 = r_866;
F->aty_2345 = NULL;
F->lt_2346 = NULL;
F->a_2347 = NULL;
F->w_2348 = NULL;
F->lv_2349 = NULL;
F->lc_2350 = NULL;
(*F->t_865) = F->up->ty_void_156;
if (((F->up->pure_sym_192 != NULL) && (eq_rt_gstr(F->name_861, rt_g_lit("PUT", 3)) || eq_rt_gstr(F->name_861, rt_g_lit("GET", 3))))) {
f_fail_224(F->up, F->line_863, cat_rt_gstr(cat_rt_gstr(rt_g_lit("a function cannot do input-output: ", 35), F->name_861), rt_g_lit(" has side effects (RM79 6.5)", 28)));
}
if (eq_rt_gstr(F->name_861, rt_g_lit("PUT", 3))) {
if ((F->args_862 == NULL)) {
f_fail_224(F->up, F->line_863, rt_g_lit("PUT needs an item", 17));
}
f_gexpr_688(F->up, F->args_862, NULL, &F->aty_2345, &F->a_2347);
F->w_2348 = f_mk_203(F->up, rt_g_lit("0", 1));
if (((*(P169)rt_nil_check(F->args_862)).next_ != NULL)) {
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->args_862)).next_, F->up->ty_int_151, &F->lt_2346, &F->w_2348);
}
if (f_is_string_497(F->up, F->aty_2345)) {
(*F->r_866) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put(rt_g_g2s(", 18), (*(P135)rt_nil_check(F->a_2347))), rt_g_lit("))", 2)));
} else if (((*(P117)rt_nil_check(F->aty_2345)).kind_ == ((rt_int)11LL))) {
(*F->r_866) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_putc(", 10), (*(P135)rt_nil_check(F->a_2347))), one_rt_gstr(41)));
} else if (((*(P117)rt_nil_check(F->aty_2345)).kind_ == ((rt_int)1LL))) {
(*F->r_866) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put_int(", 13), (*(P135)rt_nil_check(F->a_2347))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check(F->w_2348))), one_rt_gstr(41)));
} else if (((*(P117)rt_nil_check(F->aty_2345)).kind_ == ((rt_int)2LL))) {
(*F->r_866) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put_bool(", 14), (*(P135)rt_nil_check(F->a_2347))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check(F->w_2348))), one_rt_gstr(41)));
} else if (((*(P117)rt_nil_check(F->aty_2345)).kind_ == ((rt_int)16LL))) {
f_fail_224(F->up, F->line_863, rt_g_lit("TEXT_IO has no PUT for a fixed point type: instantiate FIXED_IO (RM79 14.4)", 75));
} else if (((*(P117)rt_nil_check(F->aty_2345)).kind_ == ((rt_int)3LL))) {
(*F->r_866) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put_float(", 15), (*(P135)rt_nil_check(F->a_2347))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check(F->w_2348))), rt_g_lit(", 0)", 4)));
} else {
f_fail_224(F->up, F->line_863, rt_g_lit("PUT of this type is not handled", 31));
}
} else if (eq_rt_gstr(F->name_861, rt_g_lit("GET", 3))) {
f_lvalue_647(F->up, F->args_862, &F->lv_2349, &F->lt_2346, &F->lc_2350, &F->ro_2351);
if (((*(P117)rt_nil_check(F->lt_2346)).kind_ == ((rt_int)11LL))) {
(*F->r_866) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P135)rt_nil_check(F->lv_2349))), rt_g_lit(" = rt_g_getc())", 15)));
} else if (((*(P117)rt_nil_check(F->lt_2346)).kind_ == ((rt_int)1LL))) {
(*F->r_866) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P135)rt_nil_check(F->lv_2349))), rt_g_lit(" = rt_g_get_int())", 18)));
} else if (((*(P117)rt_nil_check(F->lt_2346)).kind_ == ((rt_int)3LL))) {
(*F->r_866) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P135)rt_nil_check(F->lv_2349))), rt_g_lit(" = rt_g_get_float())", 20)));
} else {
f_fail_224(F->up, F->line_863, rt_g_lit("GET of this type is not handled", 31));
}
} else if (eq_rt_gstr(F->name_861, rt_g_lit("ABS", 3))) {
f_gexpr_688(F->up, F->args_862, NULL, &(*F->t_865), &F->a_2347);
if (((*(P117)rt_nil_check((*F->t_865))).kind_ == ((rt_int)1LL))) {
(*F->r_866) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_abs(", 7), (*(P135)rt_nil_check(F->a_2347))), one_rt_gstr(41)));
} else if ((((*(P117)rt_nil_check((*F->t_865))).kind_ == ((rt_int)3LL)) || ((*(P117)rt_nil_check((*F->t_865))).kind_ == ((rt_int)16LL)))) {
(*F->r_866) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("fabs(", 5), (*(P135)rt_nil_check(F->a_2347))), one_rt_gstr(41)));
} else {
f_fail_224(F->up, F->line_863, rt_g_lit("ABS applies to numeric values (RM79 App. C)", 43));
}
} else {
f_task_builtin_1008(F->up, F->name_861, F->args_862, F->line_863, &(*F->t_865), &(*F->r_866));
}
ret_:

  return;
}

static int f_is_package_869(struct f_greenc_1fr *up_, P169 e_868) {
  struct f_is_package_869fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_868 = e_868;
F->y_2352 = NULL;
if (((*(P169)rt_nil_check(F->e_868)).kind_ != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->y_2352 = f_lookup_381(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_868)).name_)));
F->result_ = ((F->y_2352 != NULL) && (((*(P112)rt_nil_check(F->y_2352)).kind_ == ((rt_int)8LL)) || ((*(P112)rt_nil_check(F->y_2352)).kind_ == ((rt_int)9LL))));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P112 f_member_of_873(struct f_greenc_1fr *up_, rt_gstr p_870, rt_gstr name_871, rt_int line_872) {
  struct f_member_of_873fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_870 = cp_rt_gstr(p_870);
F->name_871 = cp_rt_gstr(name_871);
F->line_872 = line_872;
F->y_2353 = NULL;
F->y_2353 = f_lookup_381(F->up, F->p_870);
F->m_2354 = NULL;
if (((F->y_2353 == NULL) || (((*(P112)rt_nil_check(F->y_2353)).kind_ != ((rt_int)8LL)) && ((*(P112)rt_nil_check(F->y_2353)).kind_ != ((rt_int)9LL))))) {
F->result_ = NULL;
goto ret_;
}
F->m_2354 = (*(P112)rt_nil_check(F->y_2353)).members_;
while ((F->m_2354 != NULL)) {
if ((eq_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->m_2354)).name_)), F->name_871) && (!(*(P112)rt_nil_check(F->m_2354)).hidden_))) {
F->result_ = F->m_2354;
goto ret_;
}
F->m_2354 = (*(P112)rt_nil_check(F->m_2354)).mnext_;
}
L_end_2355: ;
if (((*(P112)rt_nil_check(F->y_2353)).kind_ == ((rt_int)9LL))) {
F->m_2354 = f_lookup_entry_387(F->up, F->name_871, F->y_2353);
if ((((F->m_2354 != NULL) && ((*(P112)rt_nil_check(F->m_2354)).kind_ == ((rt_int)10LL))) && f_same_task_384(F->up, (*(P112)rt_nil_check(F->m_2354)).members_, F->y_2353))) {
F->result_ = F->m_2354;
goto ret_;
}
}
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_inside_package_875(struct f_greenc_1fr *up_, P169 p_874) {
  struct f_inside_package_875fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_874 = p_874;
F->l_2356 = NULL;
F->l_2356 = F->up->pkg_stack_188;
if ((F->p_874 == NULL)) {
F->result_ = 1;
goto ret_;
}
while ((F->l_2356 != NULL)) {
if (eq_rt_gstr((*(P135)rt_nil_check((*(P146)rt_nil_check(F->l_2356)).s_)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->p_874)).name_)))) {
F->result_ = 1;
goto ret_;
}
F->l_2356 = (*(P146)rt_nil_check(F->l_2356)).next_;
}
L_end_2357: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_copy_sym_878(struct f_greenc_1fr *up_, P112 y_876, P112 *z_877) {
  struct f_copy_sym_878fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_876 = y_876;
F->z_877 = z_877;
(*F->z_877) = ({ R113 *cell2358 = rt_alloc(sizeof(R113)); *cell2358 = cp_R113(({ R113 ag2359; ag2359.kind_ = (*(P112)rt_nil_check(F->y_876)).kind_; ag2359.name_ = (*(P112)rt_nil_check(F->y_876)).name_; ag2359.t_ = (*(P112)rt_nil_check(F->y_876)).t_; ag2359.c_ = (*(P112)rt_nil_check(F->y_876)).c_; ag2359.access_path_ = (*(P112)rt_nil_check(F->y_876)).access_path_; ag2359.cname_ = (*(P112)rt_nil_check(F->y_876)).cname_; ag2359.ro_ = (*(P112)rt_nil_check(F->y_876)).ro_; ag2359.mvalue_ = (*(P112)rt_nil_check(F->y_876)).mvalue_; ag2359.hasmv_ = (*(P112)rt_nil_check(F->y_876)).hasmv_; ag2359.decl_ = (*(P112)rt_nil_check(F->y_876)).decl_; ag2359.params_ = (*(P112)rt_nil_check(F->y_876)).params_; ag2359.result_ = (*(P112)rt_nil_check(F->y_876)).result_; ag2359.depth_ = ((rt_int)0LL); ag2359.level_ = (*(P112)rt_nil_check(F->y_876)).level_; ag2359.byref_ = (*(P112)rt_nil_check(F->y_876)).byref_; ag2359.vrp_ = (*(P112)rt_nil_check(F->y_876)).vrp_; ag2359.hidden_ = (*(P112)rt_nil_check(F->y_876)).hidden_; ag2359.from_use_ = 0; ag2359.members_ = (*(P112)rt_nil_check(F->y_876)).members_; ag2359.mnext_ = NULL; ag2359.chain_ = NULL; ag2359.stack_ = NULL; ag2359; })); (P112)cell2358; });
ret_:

  return;
}

static void f_complete_private_881(struct f_greenc_1fr *up_, P117 ph_879, P117 full_880) {
  struct f_complete_private_881fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->ph_879 = ph_879;
F->full_880 = full_880;
F->n_2360 = NULL;
F->n_2360 = (*(P117)rt_nil_check(F->ph_879)).name_;
F->p_2361 = NULL;
F->p_2361 = (*(P117)rt_nil_check(F->ph_879)).decl_;
as_R118(&(*(P117)rt_nil_check(F->ph_879)), (*(P117)rt_nil_check(F->full_880)));
(*(P117)rt_nil_check(F->ph_879)).name_ = F->n_2360;
(*(P117)rt_nil_check(F->ph_879)).priv_ = 1;
(*(P117)rt_nil_check(F->ph_879)).decl_ = F->p_2361;
ret_:

  return;
}

static void f_package_spec_883(struct f_greenc_1fr *up_, P169 e_882) {
  struct f_package_spec_883fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_882 = e_882;
F->y_2362 = NULL;
F->m_2363 = NULL;
F->z_2364 = NULL;
F->saved_2365 = NULL;
F->saved_2365 = F->up->cur_pkg_189;
F->first_private_2366 = NULL;
F->y_2362 = f_new_sym_414(F->up, ((rt_int)8LL), (*(P169)rt_nil_check(F->e_882)).name_);
(*(P112)rt_nil_check(F->y_2362)).decl_ = F->e_882;
F->up->pkg_stack_188 = ({ R147 *cell2367 = rt_alloc(sizeof(R147)); *cell2367 = cp_R147(({ R147 ag2368; ag2368.s_ = (*(P169)rt_nil_check(F->e_882)).name_; ag2368.next_ = F->up->pkg_stack_188; ag2368; })); (P146)cell2367; });
F->up->cur_pkg_189 = F->e_882;
f_open_scope_410(F->up);
f_decl_elements_577(F->up, (*(P169)rt_nil_check(F->e_882)).c_);
F->first_private_2366 = F->up->scope_stack_116;
f_decl_elements_577(F->up, (*(P169)rt_nil_check(F->e_882)).d_);
F->m_2363 = F->up->scope_stack_116;
while (((F->m_2363 != NULL) && ((*(P112)rt_nil_check(F->m_2363)).depth_ == F->up->depth_115))) {
f_copy_sym_878(F->up, F->m_2363, &F->z_2364);
(*(P112)rt_nil_check(F->z_2364)).hidden_ = (f_hidden_from_886(F->up, F->m_2363, F->first_private_2366) || (*(P112)rt_nil_check(F->m_2363)).from_use_);
(*(P112)rt_nil_check(F->z_2364)).mnext_ = (*(P112)rt_nil_check(F->y_2362)).members_;
(*(P112)rt_nil_check(F->y_2362)).members_ = F->z_2364;
F->m_2363 = (*(P112)rt_nil_check(F->m_2363)).stack_;
}
L_end_2369: ;
f_close_scope_411(F->up);
F->up->pkg_stack_188 = (*(P146)rt_nil_check(F->up->pkg_stack_188)).next_;
F->up->cur_pkg_189 = F->saved_2365;
f_define_409(F->up, F->y_2362, (*(P169)rt_nil_check(F->e_882)).line_);
ret_:

  return;
}

static int f_hidden_from_886(struct f_greenc_1fr *up_, P112 m_884, P112 first_private_885) {
  struct f_hidden_from_886fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->m_884 = m_884;
F->first_private_885 = first_private_885;
F->p_2370 = NULL;
F->p_2370 = F->up->scope_stack_116;
while ((F->p_2370 != NULL)) {
if ((F->p_2370 == F->first_private_885)) {
F->result_ = 0;
goto ret_;
}
if ((F->p_2370 == F->m_884)) {
F->result_ = 1;
goto ret_;
}
F->p_2370 = (*(P112)rt_nil_check(F->p_2370)).stack_;
}
L_end_2371: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_package_body_888(struct f_greenc_1fr *up_, P169 e_887) {
  struct f_package_body_888fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_887 = e_887;
F->y_2372 = NULL;
F->y_2372 = f_lookup_381(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_887)).name_)));
F->m_2373 = NULL;
F->z_2374 = NULL;
F->saved_2375 = NULL;
F->saved_2375 = F->up->cur_pkg_189;
if (((F->y_2372 != NULL) && ((*(P112)rt_nil_check(F->y_2372)).kind_ == ((rt_int)11LL)))) {
f_attach_generic_body_1059(F->up, F->e_887);
goto ret_;
}
if (((F->y_2372 == NULL) || ((*(P112)rt_nil_check(F->y_2372)).kind_ != ((rt_int)8LL)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_887)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("package body ", 13), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_887)).name_))), rt_g_lit(" has no specification", 21)));
}
F->up->pkg_stack_188 = ({ R147 *cell2376 = rt_alloc(sizeof(R147)); *cell2376 = cp_R147(({ R147 ag2377; ag2377.s_ = (*(P169)rt_nil_check(F->e_887)).name_; ag2377.next_ = F->up->pkg_stack_188; ag2377; })); (P146)cell2376; });
F->up->cur_pkg_189 = (*(P112)rt_nil_check(F->y_2372)).decl_;
f_open_scope_410(F->up);
F->m_2373 = (*(P112)rt_nil_check(F->y_2372)).members_;
while ((F->m_2373 != NULL)) {
f_copy_sym_878(F->up, F->m_2373, &F->z_2374);
(*(P112)rt_nil_check(F->z_2374)).hidden_ = 0;
f_define_409(F->up, F->z_2374, (*(P169)rt_nil_check(F->e_887)).line_);
F->m_2373 = (*(P112)rt_nil_check(F->m_2373)).mnext_;
}
L_end_2378: ;
f_decl_elements_577(F->up, (*(P169)rt_nil_check(F->e_887)).c_);
F->m_2373 = (*(P112)rt_nil_check(F->y_2372)).members_;
while ((F->m_2373 != NULL)) {
if (((((*(P112)rt_nil_check(F->m_2373)).kind_ == ((rt_int)3LL)) || ((*(P112)rt_nil_check(F->m_2373)).kind_ == ((rt_int)4LL))) && ((*(P169)rt_nil_check((*(P112)rt_nil_check(F->m_2373)).decl_)).ival_ == ((rt_int)1LL)))) {
F->z_2374 = ({ A111 ix2380 = F->up->table_114; ix2380.p[rt_index(f_hash_379(F->up, (*(P135)rt_nil_check((*(P112)rt_nil_check(F->m_2373)).name_))), ix2380.lo, ix2380.hi) - ix2380.lo]; });
while ((F->z_2374 != NULL)) {
if (((*(P112)rt_nil_check(F->z_2374)).cname_ == (*(P112)rt_nil_check(F->m_2373)).cname_)) {
(*(P112)rt_nil_check(F->m_2373)).decl_ = (*(P112)rt_nil_check(F->z_2374)).decl_;
}
F->z_2374 = (*(P112)rt_nil_check(F->z_2374)).chain_;
}
L_end_2381: ;
if (((*(P169)rt_nil_check((*(P112)rt_nil_check(F->m_2373)).decl_)).ival_ == ((rt_int)1LL))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_887)).line_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no body for ", 12), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->m_2373)).name_))), rt_g_lit(" in package body ", 17)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_887)).name_))));
}
}
F->m_2373 = (*(P112)rt_nil_check(F->m_2373)).mnext_;
}
L_end_2379: ;
f_guarded_601(F->up, (*(P169)rt_nil_check(F->e_887)).d_, (*(P169)rt_nil_check(F->e_887)).e_, (*(P169)rt_nil_check(F->e_887)).line_);
f_close_scope_411(F->up);
F->up->pkg_stack_188 = (*(P146)rt_nil_check(F->up->pkg_stack_188)).next_;
F->up->cur_pkg_189 = F->saved_2375;
ret_:

  return;
}

static void f_use_clause_890(struct f_greenc_1fr *up_, P169 e_889) {
  struct f_use_clause_890fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_889 = e_889;
F->n_2382 = NULL;
F->n_2382 = (*(P169)rt_nil_check(F->e_889)).a_;
F->y_2383 = NULL;
F->m_2384 = NULL;
F->z_2385 = NULL;
F->old_2386 = NULL;
while ((F->n_2382 != NULL)) {
F->y_2383 = f_lookup_381(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->n_2382)).name_)));
if ((F->y_2383 == NULL)) {
if ((!eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->n_2382)).name_)), rt_g_lit("TEXT_IO", 7)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->n_2382)).line_, cat_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->n_2382)).name_)), rt_g_lit(" is not a package", 17)));
}
} else if ((((*(P112)rt_nil_check(F->y_2383)).kind_ != ((rt_int)8LL)) && ((*(P112)rt_nil_check(F->y_2383)).kind_ != ((rt_int)9LL)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->n_2382)).line_, cat_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->n_2382)).name_)), rt_g_lit(" is not a package or a task", 27)));
} else {
F->m_2384 = (*(P112)rt_nil_check(F->y_2383)).members_;
while ((F->m_2384 != NULL)) {
F->old_2386 = f_lookup_381(F->up, (*(P135)rt_nil_check((*(P112)rt_nil_check(F->m_2384)).name_)));
if (((!(*(P112)rt_nil_check(F->m_2384)).hidden_) && ((F->old_2386 == NULL) || ((((*(P112)rt_nil_check(F->old_2386)).depth_ < F->up->depth_115) && ((*(P112)rt_nil_check(F->old_2386)).kind_ != ((rt_int)1LL))) && ((*(P112)rt_nil_check(F->old_2386)).kind_ != ((rt_int)2LL)))))) {
f_copy_sym_878(F->up, F->m_2384, &F->z_2385);
(*(P112)rt_nil_check(F->z_2385)).from_use_ = 1;
f_define_409(F->up, F->z_2385, (*(P169)rt_nil_check(F->n_2382)).line_);
}
F->m_2384 = (*(P112)rt_nil_check(F->m_2384)).mnext_;
}
L_end_2388: ;
}
F->n_2382 = (*(P169)rt_nil_check(F->n_2382)).next_;
}
L_end_2387: ;
ret_:

  return;
}

static void f_fits_895(struct f_greenc_1fr *up_, P112 y_891, P169 args_892, P117 want_893, int *ok_894) {
  struct f_fits_895fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_891 = y_891;
F->args_892 = args_892;
F->want_893 = want_893;
F->ok_894 = ok_894;
F->pm_2389 = NULL;
F->pm_2389 = (*(P112)rt_nil_check(F->y_891)).params_;
F->a_2390 = NULL;
F->t_2391 = NULL;
F->c_2392 = NULL;
F->v_2393 = NULL;
F->saved_2395 = NULL;
F->saved_2395 = F->up->code_131;
F->used_2396 = ((rt_int)0LL);
(*F->ok_894) = 1;
F->up->trial_150 = rt_add(F->up->trial_150, ((rt_int)1LL));
F->up->code_131 = f_new_buffer_225(F->up);
{
{ rt_frame xf2398;
if (RT_TRY(xf2398)) {
while (((*F->ok_894) && (F->pm_2389 != NULL))) {
F->a_2390 = f_actual_for_850(F->up, F->args_892, F->pm_2389, (*(P112)rt_nil_check(F->y_891)).params_);
if ((F->a_2390 == NULL)) {
(*F->ok_894) = ((*(P1585)rt_nil_check(F->pm_2389)).dflt_ != NULL);
} else {
F->used_2396 = rt_add(F->used_2396, ((rt_int)1LL));
if (((((*(P169)rt_nil_check(F->a_2390)).flag_ != ((rt_int)0LL)) && ((*(P169)rt_nil_check(F->a_2390)).flag_ != ((rt_int)4LL))) && ((*(P169)rt_nil_check(F->a_2390)).flag_ != (*(P1585)rt_nil_check(F->pm_2389)).mode_))) {
(*F->ok_894) = 0;
} else if (((*(P1585)rt_nil_check(F->pm_2389)).mode_ == ((rt_int)1LL))) {
f_gexpr_688(F->up, F->a_2390, (*(P1585)rt_nil_check(F->pm_2389)).t_, &F->t_2391, &F->v_2393);
(*F->ok_894) = (f_same_394(F->up, F->t_2391, (*(P1585)rt_nil_check(F->pm_2389)).t_) || (((*(P117)rt_nil_check(F->t_2391)).kind_ == ((rt_int)10LL)) && ((*(P117)rt_nil_check((*(P1585)rt_nil_check(F->pm_2389)).t_)).kind_ == ((rt_int)8LL))));
} else {
f_lvalue_647(F->up, F->a_2390, &F->v_2393, &F->t_2391, &F->c_2392, &F->ro_2394);
(*F->ok_894) = f_same_394(F->up, F->t_2391, (*(P1585)rt_nil_check(F->pm_2389)).t_);
}
}
F->pm_2389 = (*(P1585)rt_nil_check(F->pm_2389)).next_;
}
L_end_2400: ;
if ((F->used_2396 != f_list_len_280(F->up, F->args_892))) {
(*F->ok_894) = 0;
}
if ((((*F->ok_894) && (F->want_893 != NULL)) && ((*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_891)).result_)).kind_ != ((rt_int)9LL)))) {
(*F->ok_894) = (f_same_394(F->up, (*(P112)rt_nil_check(F->y_891)).result_, F->want_893) || ((*(P117)rt_nil_check(F->want_893)).kind_ == ((rt_int)9LL)));
}
RT_POP(xf2398);
} else {
RT_POP(xf2398);
int x2399 = rt_xcur;
if (rt_g_aborted()) rt_raise(x2399);
if (0 || x2399 == ex_compile_error_103) {
(*F->ok_894) = 0;
} else {
rt_raise(x2399);
}
}
}

}
L_end_2397: ;
F->up->trial_150 = rt_sub(F->up->trial_150, ((rt_int)1LL));
F->up->code_131 = F->saved_2395;
ret_:

  return;
}

static int f_is_builtin_897(struct f_greenc_1fr *up_, rt_gstr n_896) {
  struct f_is_builtin_897fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_896 = cp_rt_gstr(n_896);
F->result_ = (((eq_rt_gstr(F->n_896, rt_g_lit("PUT", 3)) || eq_rt_gstr(F->n_896, rt_g_lit("GET", 3))) || eq_rt_gstr(F->n_896, rt_g_lit("ABS", 3))) || eq_rt_gstr(F->n_896, rt_g_lit("SET_PRIORITY", 12)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_resolve_overload_904(struct f_greenc_1fr *up_, rt_gstr name_898, P169 args_899, int is_stmt_900, P117 want_901, rt_int line_902, P112 *y_903) {
  struct f_resolve_overload_904fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_898 = cp_rt_gstr(name_898);
F->args_899 = args_899;
F->is_stmt_900 = is_stmt_900;
F->want_901 = want_901;
F->line_902 = line_902;
F->y_903 = y_903;
F->z_2401 = NULL;
F->z_2401 = ({ A111 ix2402 = F->up->table_114; ix2402.p[rt_index(f_hash_379(F->up, F->name_898), ix2402.lo, ix2402.hi) - ix2402.lo]; });
F->first_2403 = NULL;
F->n_2404 = ((rt_int)0LL);
{ rt_int lo2408 = ((rt_int)1LL), hi2409 = ((rt_int)2LL);
for (rt_int it2410 = lo2408; it2410 <= hi2409; it2410++) {
F->pass_2407 = it2410;
F->z_2401 = ({ A111 ix2411 = F->up->table_114; ix2411.p[rt_index(f_hash_379(F->up, F->name_898), ix2411.lo, ix2411.hi) - ix2411.lo]; });
F->n_2404 = ((rt_int)0LL);
while ((F->z_2401 != NULL)) {
if ((eq_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->z_2401)).name_)), F->name_898) && (((*(P112)rt_nil_check(F->z_2401)).kind_ == ((rt_int)3LL)) || ((*(P112)rt_nil_check(F->z_2401)).kind_ == ((rt_int)4LL))))) {
F->n_2404 = rt_add(F->n_2404, ((rt_int)1LL));
if ((F->first_2403 == NULL)) {
F->first_2403 = F->z_2401;
}
if ((((*(P117)rt_nil_check((*(P112)rt_nil_check(F->z_2401)).result_)).kind_ == ((rt_int)9LL)) == F->is_stmt_900)) {
if ((F->pass_2407 == ((rt_int)1LL))) {
f_fits_895(F->up, F->z_2401, F->args_899, F->want_901, &F->ok_2405);
} else {
f_fits_895(F->up, F->z_2401, F->args_899, NULL, &F->ok_2405);
}
if (F->ok_2405) {
(*F->y_903) = F->z_2401;
goto ret_;
}
}
}
F->z_2401 = (*(P112)rt_nil_check(F->z_2401)).chain_;
}
L_end_2412: ;
}
}
L_end_2406: ;
if (f_is_builtin_897(F->up, F->name_898)) {
(*F->y_903) = NULL;
goto ret_;
}
if ((F->n_2404 > ((rt_int)1LL))) {
f_fail_224(F->up, F->line_902, cat_rt_gstr(cat_rt_gstr(rt_g_lit("no declaration of ", 18), F->name_898), rt_g_lit(" fits these actual parameters", 29)));
}
(*F->y_903) = F->first_2403;
ret_:

  return;
}

static void f_resolve_member_overload_912(struct f_greenc_1fr *up_, rt_gstr p_905, rt_gstr name_906, P169 args_907, int is_stmt_908, P117 want_909, rt_int line_910, P112 *y_911) {
  struct f_resolve_member_overload_912fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_905 = cp_rt_gstr(p_905);
F->name_906 = cp_rt_gstr(name_906);
F->args_907 = args_907;
F->is_stmt_908 = is_stmt_908;
F->want_909 = want_909;
F->line_910 = line_910;
F->y_911 = y_911;
F->pk_2413 = NULL;
F->pk_2413 = f_lookup_381(F->up, F->p_905);
F->z_2414 = NULL;
F->n_2415 = ((rt_int)0LL);
if ((F->pk_2413 == NULL)) {
goto ret_;
}
{ rt_int lo2419 = ((rt_int)1LL), hi2420 = ((rt_int)2LL);
for (rt_int it2421 = lo2419; it2421 <= hi2420; it2421++) {
F->pass_2418 = it2421;
F->z_2414 = (*(P112)rt_nil_check(F->pk_2413)).members_;
F->n_2415 = ((rt_int)0LL);
while ((F->z_2414 != NULL)) {
if (((eq_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->z_2414)).name_)), F->name_906) && (((*(P112)rt_nil_check(F->z_2414)).kind_ == ((rt_int)3LL)) || ((*(P112)rt_nil_check(F->z_2414)).kind_ == ((rt_int)4LL)))) && (!(*(P112)rt_nil_check(F->z_2414)).hidden_))) {
F->n_2415 = rt_add(F->n_2415, ((rt_int)1LL));
if ((((*(P117)rt_nil_check((*(P112)rt_nil_check(F->z_2414)).result_)).kind_ == ((rt_int)9LL)) == F->is_stmt_908)) {
if ((F->pass_2418 == ((rt_int)1LL))) {
f_fits_895(F->up, F->z_2414, F->args_907, F->want_909, &F->ok_2416);
} else {
f_fits_895(F->up, F->z_2414, F->args_907, NULL, &F->ok_2416);
}
if (F->ok_2416) {
(*F->y_911) = F->z_2414;
goto ret_;
}
}
}
F->z_2414 = (*(P112)rt_nil_check(F->z_2414)).mnext_;
}
L_end_2422: ;
}
}
L_end_2417: ;
if ((F->n_2415 > ((rt_int)1LL))) {
f_fail_224(F->up, F->line_910, cat_rt_gstr(cat_rt_gstr(rt_g_lit("no declaration of ", 18), F->name_906), rt_g_lit(" fits these actual parameters", 29)));
}
ret_:

  return;
}

static void f_user_operator_918(struct f_greenc_1fr *up_, P169 e_913, P117 want_914, P117 *t_915, P135 *r_916, int *done_917) {
  struct f_user_operator_918fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_913 = e_913;
F->want_914 = want_914;
F->t_915 = t_915;
F->r_916 = r_916;
F->done_917 = done_917;
F->op_2423 = NULL;
F->op_2423 = (*(P169)rt_nil_check(F->e_913)).name_;
F->negate_2424 = 0;
F->y_2425 = NULL;
F->call_2426 = NULL;
F->fname_2427 = NULL;
F->l_2428 = NULL;
F->rt_2429 = NULL;
(*F->done_917) = 0;
if (eq_rt_gstr((*(P135)rt_nil_check(F->op_2423)), rt_g_lit("/=", 2))) {
F->op_2423 = f_mk_203(F->up, rt_g_lit("=", 1));
F->negate_2424 = 1;
}
if ((f_lookup_381(F->up, (*(P135)rt_nil_check(F->op_2423))) == NULL)) {
goto ret_;
}
F->l_2428 = f_nn_274(F->up, (*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_913)).a_)).kind_, (*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_913)).a_)).line_);
as_R170(&(*(P169)rt_nil_check(F->l_2428)), (*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_913)).a_)));
(*(P169)rt_nil_check(F->l_2428)).next_ = NULL;
(*(P169)rt_nil_check(F->l_2428)).formal_ = NULL;
(*(P169)rt_nil_check(F->l_2428)).flag_ = ((rt_int)0LL);
if (((*(P169)rt_nil_check(F->e_913)).kind_ == ((rt_int)7LL))) {
F->rt_2429 = f_nn_274(F->up, (*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_913)).b_)).kind_, (*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_913)).b_)).line_);
as_R170(&(*(P169)rt_nil_check(F->rt_2429)), (*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_913)).b_)));
(*(P169)rt_nil_check(F->rt_2429)).next_ = NULL;
(*(P169)rt_nil_check(F->rt_2429)).formal_ = NULL;
(*(P169)rt_nil_check(F->rt_2429)).flag_ = ((rt_int)0LL);
(*(P169)rt_nil_check(F->l_2428)).next_ = F->rt_2429;
}
F->y_2425 = ({ A111 ix2431 = F->up->table_114; ix2431.p[rt_index(f_hash_379(F->up, (*(P135)rt_nil_check(F->op_2423))), ix2431.lo, ix2431.hi) - ix2431.lo]; });
while ((F->y_2425 != NULL)) {
if ((eq_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2425)).name_)), (*(P135)rt_nil_check(F->op_2423))) && ((*(P112)rt_nil_check(F->y_2425)).kind_ == ((rt_int)3LL)))) {
f_fits_895(F->up, F->y_2425, F->l_2428, NULL, &F->ok_2430);
if (F->ok_2430) {
F->fname_2427 = f_nn_274(F->up, ((rt_int)5LL), (*(P169)rt_nil_check(F->e_913)).line_);
(*(P169)rt_nil_check(F->fname_2427)).name_ = F->op_2423;
F->call_2426 = f_nn_274(F->up, ((rt_int)8LL), (*(P169)rt_nil_check(F->e_913)).line_);
(*(P169)rt_nil_check(F->call_2426)).a_ = F->fname_2427;
(*(P169)rt_nil_check(F->call_2426)).b_ = F->l_2428;
F->up->call_want_191 = NULL;
f_gcall_with_860(F->up, F->call_2426, F->y_2425, &(*F->t_915), &(*F->r_916));
if (F->negate_2424) {
(*F->r_916) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!", 2), (*(P135)rt_nil_check((*F->r_916)))), one_rt_gstr(41)));
}
(*F->done_917) = 1;
goto ret_;
}
}
F->y_2425 = (*(P112)rt_nil_check(F->y_2425)).chain_;
}
L_end_2432: ;
ret_:

  return;
}

static void f_task_p_920(struct f_greenc_1fr *up_, P169 *res_919) {
  struct f_task_p_920fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_919 = res_919;
F->x_2433 = NULL;
F->r_2434 = NULL;
F->line_2435 = f_cur_line_281(F->up);
f_expect_kw_296(F->up, rt_g_lit("TASK", 4));
if (f_at_kw_283(F->up, rt_g_lit("BODY", 4))) {
f_skip_294(F->up);
F->x_2433 = f_nn_274(F->up, ((rt_int)51LL), F->line_2435);
f_expect_id_300(F->up, &(*(P169)rt_nil_check(F->x_2433)).name_);
f_expect_kw_296(F->up, rt_g_lit("IS", 2));
f_body_part_358(F->up, F->x_2433);
} else {
F->x_2433 = f_nn_274(F->up, ((rt_int)50LL), F->line_2435);
f_expect_id_300(F->up, &(*(P169)rt_nil_check(F->x_2433)).name_);
if (((f_at_kw_283(F->up, rt_g_lit("IS", 2)) && (f_kind_at_289(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_291(F->up, ((rt_int)1LL)), rt_g_lit("NEW", 3)))) {
f_instantiation_1053(F->up, F->x_2433, &(*F->res_919));
goto ret_;
}
if (f_at_op_285(F->up, rt_g_lit("(", 1))) {
f_skip_294(F->up);
f_discrete_range_p_332(F->up, &(*(P169)rt_nil_check(F->x_2433)).a_);
if (((*(P169)rt_nil_check((*(P169)rt_nil_check(F->x_2433)).a_)).kind_ == ((rt_int)5LL))) {
F->r_2434 = f_nn_274(F->up, ((rt_int)80LL), F->line_2435);
(*(P169)rt_nil_check(F->r_2434)).name_ = (*(P169)rt_nil_check((*(P169)rt_nil_check(F->x_2433)).a_)).name_;
(*(P169)rt_nil_check(F->x_2433)).a_ = F->r_2434;
}
f_expect_op_298(F->up, rt_g_lit(")", 1));
}
if (f_at_kw_283(F->up, rt_g_lit("IS", 2))) {
f_skip_294(F->up);
f_decl_part_346(F->up, &(*(P169)rt_nil_check(F->x_2433)).c_);
if (f_at_kw_283(F->up, rt_g_lit("PRIVATE", 7))) {
f_skip_294(F->up);
f_decl_part_346(F->up, &(*(P169)rt_nil_check(F->x_2433)).d_);
}
f_expect_kw_296(F->up, rt_g_lit("END", 3));
}
}
if (f_at_kind_287(F->up, ((rt_int)1LL))) {
f_skip_294(F->up);
}
f_expect_op_298(F->up, rt_g_lit(";", 1));
(*F->res_919) = F->x_2433;
ret_:

  return;
}

static void f_entry_p_922(struct f_greenc_1fr *up_, P169 *res_921) {
  struct f_entry_p_922fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_921 = res_921;
F->x_2436 = NULL;
f_expect_kw_296(F->up, rt_g_lit("ENTRY", 5));
F->x_2436 = f_nn_274(F->up, ((rt_int)52LL), f_cur_line_281(F->up));
f_expect_id_300(F->up, &(*(P169)rt_nil_check(F->x_2436)).name_);
if ((f_at_op_285(F->up, rt_g_lit("(", 1)) && (!((f_kind_at_289(F->up, ((rt_int)1LL)) == ((rt_int)1LL)) && (eq_rt_gstr(f_text_at_291(F->up, ((rt_int)2LL)), rt_g_lit(":", 1)) || eq_rt_gstr(f_text_at_291(F->up, ((rt_int)2LL)), rt_g_lit(",", 1))))))) {
f_skip_294(F->up);
if (((f_at_kind_287(F->up, ((rt_int)1LL)) && (f_kind_at_289(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && eq_rt_gstr(f_text_at_291(F->up, ((rt_int)1LL)), rt_g_lit(")", 1)))) {
f_subtype_ind_334(F->up, &(*(P169)rt_nil_check(F->x_2436)).b_);
} else {
f_discrete_range_p_332(F->up, &(*(P169)rt_nil_check(F->x_2436)).b_);
}
f_expect_op_298(F->up, rt_g_lit(")", 1));
}
if (f_at_op_285(F->up, rt_g_lit("(", 1))) {
f_formal_part_352(F->up, &(*(P169)rt_nil_check(F->x_2436)).a_);
}
f_expect_op_298(F->up, rt_g_lit(";", 1));
(*F->res_921) = F->x_2436;
ret_:

  return;
}

static void f_accept_p_924(struct f_greenc_1fr *up_, P169 *res_923) {
  struct f_accept_p_924fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_923 = res_923;
F->x_2437 = NULL;
f_expect_kw_296(F->up, rt_g_lit("ACCEPT", 6));
F->x_2437 = f_nn_274(F->up, ((rt_int)34LL), f_cur_line_281(F->up));
f_expect_id_300(F->up, &(*(P169)rt_nil_check(F->x_2437)).name_);
if ((f_at_op_285(F->up, rt_g_lit("(", 1)) && (!((f_kind_at_289(F->up, ((rt_int)1LL)) == ((rt_int)1LL)) && (eq_rt_gstr(f_text_at_291(F->up, ((rt_int)2LL)), rt_g_lit(":", 1)) || eq_rt_gstr(f_text_at_291(F->up, ((rt_int)2LL)), rt_g_lit(",", 1))))))) {
f_skip_294(F->up);
f_expr_311(F->up, &(*(P169)rt_nil_check(F->x_2437)).c_);
f_expect_op_298(F->up, rt_g_lit(")", 1));
}
if (f_at_op_285(F->up, rt_g_lit("(", 1))) {
f_formal_part_352(F->up, &(*(P169)rt_nil_check(F->x_2437)).a_);
}
if (f_at_kw_283(F->up, rt_g_lit("DO", 2))) {
f_skip_294(F->up);
(*(P169)rt_nil_check(F->x_2437)).flag_ = ((rt_int)1LL);
f_statements_365(F->up, &(*(P169)rt_nil_check(F->x_2437)).b_);
f_expect_kw_296(F->up, rt_g_lit("END", 3));
if (f_at_kind_287(F->up, ((rt_int)1LL))) {
f_skip_294(F->up);
}
}
f_expect_op_298(F->up, rt_g_lit(";", 1));
(*F->res_923) = F->x_2437;
ret_:

  return;
}

static void f_delay_p_926(struct f_greenc_1fr *up_, P169 *res_925) {
  struct f_delay_p_926fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_925 = res_925;
F->x_2438 = NULL;
f_expect_kw_296(F->up, rt_g_lit("DELAY", 5));
F->x_2438 = f_nn_274(F->up, ((rt_int)32LL), f_cur_line_281(F->up));
f_simple_expr_317(F->up, &(*(P169)rt_nil_check(F->x_2438)).a_);
f_expect_op_298(F->up, rt_g_lit(";", 1));
(*F->res_925) = F->x_2438;
ret_:

  return;
}

static void f_designators_928(struct f_greenc_1fr *up_, P169 *res_927) {
  struct f_designators_928fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_927 = res_927;
F->head_2439 = NULL;
F->tail_2440 = NULL;
F->n_2441 = NULL;
for (;;) {
f_name_p_328(F->up, &F->n_2441);
f_append_278(F->up, &F->head_2439, &F->tail_2440, F->n_2441);
if ((!f_at_op_285(F->up, rt_g_lit(",", 1)))) {
goto L_end_2442;
}
f_skip_294(F->up);
}
L_end_2442: ;
f_expect_op_298(F->up, rt_g_lit(";", 1));
(*F->res_927) = F->head_2439;
ret_:

  return;
}

static void f_parse_task_statement_930(struct f_greenc_1fr *up_, P169 *res_929) {
  struct f_parse_task_statement_930fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_929 = res_929;
F->x_2443 = NULL;
F->alt_2444 = NULL;
F->head_2445 = NULL;
F->tail_2446 = NULL;
F->line_2447 = f_cur_line_281(F->up);
(*F->res_929) = NULL;
if (f_at_kw_283(F->up, rt_g_lit("INITIATE", 8))) {
f_skip_294(F->up);
F->x_2443 = f_nn_274(F->up, ((rt_int)33LL), F->line_2447);
f_designators_928(F->up, &(*(P169)rt_nil_check(F->x_2443)).a_);
(*F->res_929) = F->x_2443;
} else if (f_at_kw_283(F->up, rt_g_lit("ABORT", 5))) {
f_skip_294(F->up);
F->x_2443 = f_nn_274(F->up, ((rt_int)36LL), F->line_2447);
f_designators_928(F->up, &(*(P169)rt_nil_check(F->x_2443)).a_);
(*F->res_929) = F->x_2443;
} else if (f_at_kw_283(F->up, rt_g_lit("DELAY", 5))) {
f_delay_p_926(F->up, &(*F->res_929));
} else if (f_at_kw_283(F->up, rt_g_lit("ACCEPT", 6))) {
f_accept_p_924(F->up, &(*F->res_929));
} else if (f_at_kw_283(F->up, rt_g_lit("SELECT", 6))) {
f_skip_294(F->up);
F->x_2443 = f_nn_274(F->up, ((rt_int)35LL), F->line_2447);
for (;;) {
F->alt_2444 = f_nn_274(F->up, ((rt_int)64LL), f_cur_line_281(F->up));
if (f_at_kw_283(F->up, rt_g_lit("WHEN", 4))) {
f_skip_294(F->up);
f_expr_311(F->up, &(*(P169)rt_nil_check(F->alt_2444)).a_);
f_expect_op_298(F->up, rt_g_lit("=>", 2));
}
if (f_at_kw_283(F->up, rt_g_lit("ACCEPT", 6))) {
f_accept_p_924(F->up, &(*(P169)rt_nil_check(F->alt_2444)).b_);
} else if (f_at_kw_283(F->up, rt_g_lit("DELAY", 5))) {
f_delay_p_926(F->up, &(*(P169)rt_nil_check(F->alt_2444)).b_);
} else {
f_perror_293(F->up, rt_g_lit("a select alternative starts with accept or delay", 48));
}
f_statements_365(F->up, &(*(P169)rt_nil_check(F->alt_2444)).c_);
f_append_278(F->up, &F->head_2445, &F->tail_2446, F->alt_2444);
if ((!f_at_kw_283(F->up, rt_g_lit("OR", 2)))) {
goto L_end_2448;
}
f_skip_294(F->up);
}
L_end_2448: ;
if (f_at_kw_283(F->up, rt_g_lit("ELSE", 4))) {
f_skip_294(F->up);
(*(P169)rt_nil_check(F->x_2443)).flag_ = ((rt_int)1LL);
f_statements_365(F->up, &(*(P169)rt_nil_check(F->x_2443)).b_);
}
f_expect_kw_296(F->up, rt_g_lit("END", 3));
f_expect_kw_296(F->up, rt_g_lit("SELECT", 6));
f_expect_op_298(F->up, rt_g_lit(";", 1));
(*(P169)rt_nil_check(F->x_2443)).a_ = F->head_2445;
(*F->res_929) = F->x_2443;
}
ret_:

  return;
}

static void f_path_at_934(struct f_greenc_1fr *up_, rt_int level_931, rt_gstr field_932, P135 *r_933) {
  struct f_path_at_934fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->level_931 = level_931;
F->field_932 = cp_rt_gstr(field_932);
F->r_933 = r_933;
if ((F->level_931 <= ((rt_int)0LL))) {
(*F->r_933) = f_mk_203(F->up, F->field_932);
goto ret_;
}
(*F->r_933) = f_mk_203(F->up, rt_g_lit("F", 1));
{ rt_int lo2451 = ((rt_int)1LL), hi2452 = rt_sub(F->up->cur_level_134, F->level_931);
for (rt_int it2453 = lo2451; it2453 <= hi2452; it2453++) {
F->i_2450 = it2453;
(*F->r_933) = f_mk_203(F->up, cat_rt_gstr((*(P135)rt_nil_check((*F->r_933))), rt_g_lit("->up", 4)));
}
}
L_end_2449: ;
(*F->r_933) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check((*F->r_933))), rt_g_lit("->", 2)), F->field_932));
ret_:

  return;
}

static int f_is_task_name_936(struct f_greenc_1fr *up_, rt_gstr n_935) {
  struct f_is_task_name_936fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_935 = cp_rt_gstr(n_935);
F->y_2454 = NULL;
F->y_2454 = f_lookup_381(F->up, F->n_935);
F->result_ = ((F->y_2454 != NULL) && ((*(P112)rt_nil_check(F->y_2454)).kind_ == ((rt_int)9LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_task_of_940(struct f_greenc_1fr *up_, P169 e_937, P112 *y_938, P169 *ix_939) {
  struct f_task_of_940fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_937 = e_937;
F->y_938 = y_938;
F->ix_939 = ix_939;
F->n_2455 = NULL;
F->n_2455 = F->e_937;
(*F->ix_939) = NULL;
if (((*(P169)rt_nil_check(F->e_937)).kind_ == ((rt_int)8LL))) {
F->n_2455 = (*(P169)rt_nil_check(F->e_937)).a_;
(*F->ix_939) = (*(P169)rt_nil_check(F->e_937)).b_;
}
if (((*(P169)rt_nil_check(F->n_2455)).kind_ != ((rt_int)5LL))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_937)).line_, rt_g_lit("a task name is required", 23));
}
(*F->y_938) = f_lookup_381(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->n_2455)).name_)));
if ((((*F->y_938) == NULL) || ((*(P112)rt_nil_check((*F->y_938))).kind_ != ((rt_int)9LL)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_937)).line_, cat_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->n_2455)).name_)), rt_g_lit(" is not a task", 14)));
}
if ((((*F->ix_939) != NULL) && ((*(P112)rt_nil_check((*F->y_938))).c_ == NULL))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_937)).line_, cat_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->n_2455)).name_)), rt_g_lit(" is not a task family", 21)));
}
ret_:

  return;
}

static void f_own_index_942(struct f_greenc_1fr *up_, P135 *r_941) {
  struct f_own_index_942fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_941 = r_941;
F->y_2456 = NULL;
F->y_2456 = f_lookup_381(F->up, rt_g_lit("INDEX_", 6));
if ((F->y_2456 == NULL)) {
f_fail_224(F->up, ((rt_int)0LL), rt_g_lit("not inside the body of a task family", 36));
}
f_access_of_630(F->up, F->y_2456, &(*F->r_941));
ret_:

  return;
}

static void f_member_947(struct f_greenc_1fr *up_, P112 y_943, rt_gstr arr_944, rt_gstr i_945, P135 *r_946) {
  struct f_member_947fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_943 = y_943;
F->arr_944 = cp_rt_gstr(arr_944);
F->i_945 = cp_rt_gstr(i_945);
F->r_946 = r_946;
F->lo_2457 = NULL;
F->hi_2458 = NULL;
f_path_at_934(F->up, (*(P112)rt_nil_check(F->y_943)).level_, cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_943)).cname_)), rt_g_lit("lo", 2)), &F->lo_2457);
f_path_at_934(F->up, (*(P112)rt_nil_check(F->y_943)).level_, cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_943)).cname_)), rt_g_lit("hi", 2)), &F->hi_2458);
(*F->r_946) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->arr_944, rt_g_lit("[rt_index(", 10)), F->i_945), rt_g_lit(", ", 2)), (*(P135)rt_nil_check(F->lo_2457))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check(F->hi_2458))), rt_g_lit(") - ", 4)), (*(P135)rt_nil_check(F->lo_2457))), one_rt_gstr(93)));
ret_:

  return;
}

static void f_act_path_950(struct f_greenc_1fr *up_, P112 y_948, P135 *r_949) {
  struct f_act_path_950fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_948 = y_948;
F->r_949 = r_949;
F->i_2459 = NULL;
f_path_at_934(F->up, (*(P112)rt_nil_check(F->y_948)).level_, cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_948)).cname_)), rt_g_lit("act", 3)), &(*F->r_949));
if (((*(P112)rt_nil_check(F->y_948)).c_ != NULL)) {
f_own_index_942(F->up, &F->i_2459);
f_member_947(F->up, F->y_948, (*(P135)rt_nil_check((*F->r_949))), (*(P135)rt_nil_check(F->i_2459)), &(*F->r_949));
}
ret_:

  return;
}

static void f_act_path_i_954(struct f_greenc_1fr *up_, P112 y_951, rt_gstr i_952, P135 *r_953) {
  struct f_act_path_i_954fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_951 = y_951;
F->i_952 = cp_rt_gstr(i_952);
F->r_953 = r_953;
f_path_at_934(F->up, (*(P112)rt_nil_check(F->y_951)).level_, cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_951)).cname_)), rt_g_lit("act", 3)), &(*F->r_953));
f_member_947(F->up, F->y_951, (*(P135)rt_nil_check((*F->r_953))), F->i_952, &(*F->r_953));
ret_:

  return;
}

static void f_entry_path_958(struct f_greenc_1fr *up_, P112 y_955, rt_gstr i_956, P135 *r_957) {
  struct f_entry_path_958fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_955 = y_955;
F->i_956 = cp_rt_gstr(i_956);
F->r_957 = r_957;
F->own_2460 = NULL;
f_path_at_934(F->up, (*(P112)rt_nil_check(F->y_955)).level_, (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_955)).access_path_)), &(*F->r_957));
if (((((*(P112)rt_nil_check(F->y_955)).members_ != NULL) && ((*(P112)rt_nil_check((*(P112)rt_nil_check(F->y_955)).members_)).c_ != NULL)) && (!(*(P112)rt_nil_check(F->y_955)).ro_))) {
if ((({ rt_gstr at2461 = F->i_956; at2461.hi >= at2461.lo ? at2461.hi - at2461.lo + 1 : (rt_int)0; }) == ((rt_int)0LL))) {
f_own_index_942(F->up, &F->own_2460);
f_member_947(F->up, (*(P112)rt_nil_check(F->y_955)).members_, (*(P135)rt_nil_check((*F->r_957))), (*(P135)rt_nil_check(F->own_2460)), &(*F->r_957));
} else {
f_member_947(F->up, (*(P112)rt_nil_check(F->y_955)).members_, (*(P135)rt_nil_check((*F->r_957))), F->i_956, &(*F->r_957));
}
}
ret_:

  return;
}

static void f_declare_slot_961(struct f_greenc_1fr *up_, rt_gstr ctype_name_959, rt_gstr field_960) {
  struct f_declare_slot_961fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->ctype_name_959 = cp_rt_gstr(ctype_name_959);
F->field_960 = cp_rt_gstr(field_960);
if (F->up->in_func_133) {
f_put_to_228(F->up, F->up->fields_buf_132, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), F->ctype_name_959), one_rt_gstr(32)), F->field_960), one_rt_gstr(59)));
} else {
f_put_to_228(F->up, F->up->out_globals_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), F->ctype_name_959), one_rt_gstr(32)), F->field_960), one_rt_gstr(59)));
}
ret_:

  return;
}

static void f_task_decl_963(struct f_greenc_1fr *up_, P169 e_962) {
  struct f_task_decl_963fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_962 = e_962;
if (((*(P169)rt_nil_check(F->e_962)).kind_ == ((rt_int)50LL))) {
f_task_spec_975(F->up, F->e_962);
} else if (((*(P169)rt_nil_check(F->e_962)).kind_ == ((rt_int)51LL))) {
f_task_body_979(F->up, F->e_962);
} else if (((*(P169)rt_nil_check(F->e_962)).kind_ == ((rt_int)52LL))) {
f_entry_decl_977(F->up, F->e_962);
} else {
f_generic_decl_1055(F->up, F->e_962);
}
ret_:

  return;
}

static void f_family_arg_struct_964(struct f_greenc_1fr *up_) {
  struct f_family_arg_struct_964fr *F = rt_alloc(sizeof *F);
F->up = up_;
if ((!F->up->famarg_done_180)) {
F->up->famarg_done_180 = 1;
f_put_to_228(F->up, F->up->out_types_123, rt_g_lit("struct rt_famarg { void *up; rt_int i; };", 41));
}
ret_:

  return;
}

static void f_family_bounds_968(struct f_greenc_1fr *up_, P169 b_965, P112 y_966, P135 x_967) {
  struct f_family_bounds_968fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_965 = b_965;
F->y_966 = y_966;
F->x_967 = x_967;
F->lo_2462 = NULL;
F->hi_2463 = NULL;
F->v_2464 = NULL;
F->d_2465 = NULL;
F->vt_2466 = NULL;
F->c_2467 = NULL;
(*(P112)rt_nil_check(F->y_966)).c_ = f_new_cons_417(F->up);
f_declare_slot_961(F->up, rt_g_lit("rt_entry *", 10), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_966)).access_path_)));
f_declare_slot_961(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_966)).cname_)), rt_g_lit("flo", 3)));
f_declare_slot_961(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_966)).cname_)), rt_g_lit("fhi", 3)));
f_path_at_934(F->up, (*(P112)rt_nil_check(F->y_966)).level_, cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_966)).cname_)), rt_g_lit("flo", 3)), &F->lo_2462);
f_path_at_934(F->up, (*(P112)rt_nil_check(F->y_966)).level_, cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_966)).cname_)), rt_g_lit("fhi", 3)), &F->hi_2463);
f_discrete_bounds_458(F->up, F->b_965, NULL, &F->vt_2466, &F->v_2464, &F->d_2465);
(*(P112)rt_nil_check(F->y_966)).t_ = F->vt_2466;
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->lo_2462)), rt_g_lit(" = ", 3)), (*(P135)rt_nil_check(F->v_2464))), rt_g_lit("; ", 2)), (*(P135)rt_nil_check(F->hi_2463))), rt_g_lit(" = ", 3)), (*(P135)rt_nil_check(F->d_2465))), one_rt_gstr(59)));
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->x_967)), rt_g_lit(" = rt_alloc(sizeof(rt_entry) * (size_t)(", 40)), (*(P135)rt_nil_check(F->hi_2463))), rt_g_lit(" >= ", 4)), (*(P135)rt_nil_check(F->lo_2462))), rt_g_lit(" \? ", 3)), (*(P135)rt_nil_check(F->hi_2463))), rt_g_lit(" - ", 3)), (*(P135)rt_nil_check(F->lo_2462))), rt_g_lit(" + 1 : 1));", 11)));
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = 0; k_ <= ", 26), (*(P135)rt_nil_check(F->hi_2463))), rt_g_lit(" - ", 3)), (*(P135)rt_nil_check(F->lo_2462))), rt_g_lit("; k_++) rt_entry_init(&", 23)), (*(P135)rt_nil_check(F->x_967))), rt_g_lit("[k_]);", 6)));
ret_:

  return;
}

static void f_entry_family_slot_973(struct f_greenc_1fr *up_, P112 y_969, rt_gstr base_970, rt_gstr i_971, P135 *r_972) {
  struct f_entry_family_slot_973fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_969 = y_969;
F->base_970 = cp_rt_gstr(base_970);
F->i_971 = cp_rt_gstr(i_971);
F->r_972 = r_972;
F->lo_2468 = NULL;
F->hi_2469 = NULL;
f_path_at_934(F->up, (*(P112)rt_nil_check(F->y_969)).level_, cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_969)).cname_)), rt_g_lit("flo", 3)), &F->lo_2468);
f_path_at_934(F->up, (*(P112)rt_nil_check(F->y_969)).level_, cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_969)).cname_)), rt_g_lit("fhi", 3)), &F->hi_2469);
(*F->r_972) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->base_970, rt_g_lit("[rt_index(", 10)), F->i_971), rt_g_lit(", ", 2)), (*(P135)rt_nil_check(F->lo_2468))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check(F->hi_2469))), rt_g_lit(") - ", 4)), (*(P135)rt_nil_check(F->lo_2468))), one_rt_gstr(93)));
ret_:

  return;
}

static void f_task_spec_975(struct f_greenc_1fr *up_, P169 e_974) {
  struct f_task_spec_975fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_974 = e_974;
F->has_procs_2470 = 0;
F->fields_2472 = NULL;
F->ct_2473 = NULL;
F->pm_2474 = NULL;
F->fp_2475 = NULL;
F->flo_2476 = NULL;
F->fhi_2477 = NULL;
F->y_2478 = NULL;
F->m_2479 = NULL;
F->z_2480 = NULL;
F->saved_2481 = NULL;
F->saved_2481 = F->up->cur_task_178;
F->d_2482 = NULL;
F->v_2483 = NULL;
F->p_2484 = NULL;
F->p2_2485 = NULL;
F->vt_2486 = NULL;
F->r_2487 = NULL;
F->y_2478 = f_new_sym_414(F->up, ((rt_int)9LL), (*(P169)rt_nil_check(F->e_974)).name_);
f_new_name_206(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("t_", 2), f_lower_s_214(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_974)).name_)))), one_rt_gstr(95)), &(*(P112)rt_nil_check(F->y_2478)).cname_);
(*(P112)rt_nil_check(F->y_2478)).decl_ = F->e_974;
if (F->up->in_func_133) {
(*(P112)rt_nil_check(F->y_2478)).level_ = F->up->cur_level_134;
}
(*(P112)rt_nil_check(F->y_2478)).access_path_ = (*(P112)rt_nil_check(F->y_2478)).cname_;
f_declare_slot_961(F->up, rt_g_lit("rt_taskdecl", 11), cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2478)).cname_)), rt_g_lit("decl", 4)));
if (((*(P169)rt_nil_check(F->e_974)).a_ != NULL)) {
(*(P112)rt_nil_check(F->y_2478)).c_ = f_new_cons_417(F->up);
f_declare_slot_961(F->up, rt_g_lit("rt_act *", 8), cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2478)).cname_)), rt_g_lit("act", 3)));
f_declare_slot_961(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2478)).cname_)), rt_g_lit("lo", 2)));
f_declare_slot_961(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2478)).cname_)), rt_g_lit("hi", 2)));
f_discrete_bounds_458(F->up, (*(P169)rt_nil_check(F->e_974)).a_, NULL, &F->vt_2486, &F->v_2483, &F->d_2482);
(*(P112)rt_nil_check(F->y_2478)).t_ = F->vt_2486;
f_path_at_934(F->up, (*(P112)rt_nil_check(F->y_2478)).level_, cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2478)).cname_)), rt_g_lit("lo", 2)), &F->p_2484);
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->p_2484)), rt_g_lit(" = ", 3)), (*(P135)rt_nil_check(F->v_2483))), one_rt_gstr(59)));
f_path_at_934(F->up, (*(P112)rt_nil_check(F->y_2478)).level_, cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2478)).cname_)), rt_g_lit("hi", 2)), &F->p2_2485);
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->p2_2485)), rt_g_lit(" = ", 3)), (*(P135)rt_nil_check(F->d_2482))), one_rt_gstr(59)));
f_path_at_934(F->up, (*(P112)rt_nil_check(F->y_2478)).level_, cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2478)).cname_)), rt_g_lit("act", 3)), &F->v_2483);
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->v_2483)), rt_g_lit(" = rt_alloc(sizeof(rt_act) * (size_t)(", 38)), (*(P135)rt_nil_check(F->p2_2485))), rt_g_lit(" >= ", 4)), (*(P135)rt_nil_check(F->p_2484))), rt_g_lit(" \? ", 3)), (*(P135)rt_nil_check(F->p2_2485))), rt_g_lit(" - ", 3)), (*(P135)rt_nil_check(F->p_2484))), rt_g_lit(" + 1 : 1));", 11)));
f_family_arg_struct_964(F->up);
} else {
f_declare_slot_961(F->up, rt_g_lit("rt_act", 6), cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2478)).cname_)), rt_g_lit("act", 3)));
}
f_put_to_228(F->up, F->up->out_protos_126, cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2478)).cname_))), rt_g_lit("run(void *a);", 13)));
if ((!F->up->in_func_133)) {
f_put_to_228(F->up, F->up->out_awaits_185, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  rt_await_decl(&", 17), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2478)).cname_))), rt_g_lit("decl);", 6)));
}
f_open_scope_410(F->up);
F->up->cur_task_178 = F->y_2478;
F->saved_defer_2471 = F->up->defer_entry_structs_184;
F->up->defer_entry_structs_184 = 1;
f_decl_elements_577(F->up, (*(P169)rt_nil_check(F->e_974)).c_);
f_decl_elements_577(F->up, (*(P169)rt_nil_check(F->e_974)).d_);
F->up->defer_entry_structs_184 = F->saved_defer_2471;
F->m_2479 = F->up->scope_stack_116;
while (((F->m_2479 != NULL) && ((*(P112)rt_nil_check(F->m_2479)).depth_ == F->up->depth_115))) {
if ((((*(P112)rt_nil_check(F->m_2479)).kind_ == ((rt_int)10LL)) && (!(*(P112)rt_nil_check(F->m_2479)).from_use_))) {
F->fields_2472 = f_mk_203(F->up, rt_g_lit(" int dummy_;", 12));
F->pm_2474 = (*(P112)rt_nil_check(F->m_2479)).params_;
while ((F->pm_2474 != NULL)) {
f_ctype_428(F->up, (*(P1585)rt_nil_check(F->pm_2474)).t_, &F->ct_2473);
if (((*(P1585)rt_nil_check(F->pm_2474)).mode_ == ((rt_int)1LL))) {
F->fields_2472 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->fields_2472)), one_rt_gstr(32)), (*(P135)rt_nil_check(F->ct_2473))), one_rt_gstr(32)), (*(P135)rt_nil_check((*(P1585)rt_nil_check(F->pm_2474)).cfield_))), one_rt_gstr(59)));
} else {
F->fields_2472 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->fields_2472)), one_rt_gstr(32)), (*(P135)rt_nil_check(F->ct_2473))), rt_g_lit(" *", 2)), (*(P135)rt_nil_check((*(P1585)rt_nil_check(F->pm_2474)).cfield_))), one_rt_gstr(59)));
}
F->pm_2474 = (*(P1585)rt_nil_check(F->pm_2474)).next_;
}
L_end_2489: ;
f_put_to_228(F->up, F->up->out_types_123, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->m_2479)).cname_))), rt_g_lit("p {", 3)), (*(P135)rt_nil_check(F->fields_2472))), rt_g_lit(" };", 3)));
}
F->m_2479 = (*(P112)rt_nil_check(F->m_2479)).stack_;
}
L_end_2488: ;
F->m_2479 = F->up->scope_stack_116;
while (((F->m_2479 != NULL) && ((*(P112)rt_nil_check(F->m_2479)).depth_ == F->up->depth_115))) {
if (((((*(P112)rt_nil_check(F->m_2479)).kind_ == ((rt_int)3LL)) || ((*(P112)rt_nil_check(F->m_2479)).kind_ == ((rt_int)4LL))) && (!(*(P112)rt_nil_check(F->m_2479)).from_use_))) {
if (((!F->has_procs_2470) && ((*(P112)rt_nil_check(F->y_2478)).c_ != NULL))) {
f_declare_slot_961(F->up, rt_g_lit("void **", 7), cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2478)).cname_)), rt_g_lit("frames", 6)));
f_path_at_934(F->up, (*(P112)rt_nil_check(F->y_2478)).level_, cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2478)).cname_)), rt_g_lit("frames", 6)), &F->fp_2475);
f_path_at_934(F->up, (*(P112)rt_nil_check(F->y_2478)).level_, cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2478)).cname_)), rt_g_lit("lo", 2)), &F->flo_2476);
f_path_at_934(F->up, (*(P112)rt_nil_check(F->y_2478)).level_, cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2478)).cname_)), rt_g_lit("hi", 2)), &F->fhi_2477);
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->fp_2475)), rt_g_lit(" = rt_alloc(sizeof(void *) * (size_t)(", 38)), (*(P135)rt_nil_check(F->fhi_2477))), rt_g_lit(" >= ", 4)), (*(P135)rt_nil_check(F->flo_2476))), rt_g_lit(" \? ", 3)), (*(P135)rt_nil_check(F->fhi_2477))), rt_g_lit(" - ", 3)), (*(P135)rt_nil_check(F->flo_2476))), rt_g_lit(" + 1 : 1));", 11)));
F->has_procs_2470 = 1;
} else if ((!F->has_procs_2470)) {
f_declare_slot_961(F->up, rt_g_lit("void *", 6), cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2478)).cname_)), rt_g_lit("frame", 5)));
f_path_at_934(F->up, (*(P112)rt_nil_check(F->y_2478)).level_, cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2478)).cname_)), rt_g_lit("frame", 5)), &F->fp_2475);
f_emit_230(F->up, cat_rt_gstr((*(P135)rt_nil_check(F->fp_2475)), rt_g_lit(" = NULL;", 8)));
F->has_procs_2470 = 1;
}
if (((*(P112)rt_nil_check(F->y_2478)).c_ != NULL)) {
(*(P112)rt_nil_check(F->m_2479)).access_path_ = f_mk_203(F->up, cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2478)).cname_)), rt_g_lit("frames", 6)));
} else {
(*(P112)rt_nil_check(F->m_2479)).access_path_ = f_mk_203(F->up, cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2478)).cname_)), rt_g_lit("frame", 5)));
}
(*(P112)rt_nil_check(F->m_2479)).members_ = F->y_2478;
}
f_copy_sym_878(F->up, F->m_2479, &F->z_2480);
(*(P112)rt_nil_check(F->z_2480)).hidden_ = (*(P112)rt_nil_check(F->m_2479)).from_use_;
(*(P112)rt_nil_check(F->z_2480)).mnext_ = (*(P112)rt_nil_check(F->y_2478)).members_;
(*(P112)rt_nil_check(F->y_2478)).members_ = F->z_2480;
F->m_2479 = (*(P112)rt_nil_check(F->m_2479)).stack_;
}
L_end_2490: ;
f_close_scope_411(F->up);
F->up->cur_task_178 = F->saved_2481;
f_define_409(F->up, F->y_2478, (*(P169)rt_nil_check(F->e_974)).line_);
ret_:

  return;
}

static void f_entry_decl_977(struct f_greenc_1fr *up_, P169 e_976) {
  struct f_entry_decl_977fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_976 = e_976;
F->y_2491 = NULL;
F->p_2492 = NULL;
F->p_2492 = (*(P169)rt_nil_check(F->e_976)).a_;
F->pm_2493 = NULL;
F->tail_2494 = NULL;
F->fields_2495 = NULL;
F->ct_2496 = NULL;
F->x_2497 = NULL;
F->lo_2498 = NULL;
F->hi_2499 = NULL;
if ((F->up->cur_task_178 == NULL)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_976)).line_, rt_g_lit("an entry is declared in a task (RM79 9.5)", 41));
}
F->y_2491 = f_new_sym_414(F->up, ((rt_int)10LL), (*(P169)rt_nil_check(F->e_976)).name_);
f_new_name_206(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("e_", 2), f_lower_s_214(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_976)).name_)))), one_rt_gstr(95)), &(*(P112)rt_nil_check(F->y_2491)).cname_);
F->fields_2495 = f_mk_203(F->up, rt_g_lit(" int dummy_;", 12));
while ((F->p_2492 != NULL)) {
F->pm_2493 = ({ R1586 *cell2501 = rt_alloc(sizeof(R1586)); *cell2501 = cp_R1586(({ R1586 ag2502; ag2502.name_ = (*(P169)rt_nil_check(F->p_2492)).name_; ag2502.mode_ = (*(P169)rt_nil_check(F->p_2492)).ival_; ag2502.t_ = NULL; ag2502.c_ = NULL; ag2502.cfield_ = NULL; ag2502.dflt_ = NULL; ag2502.next_ = NULL; ag2502; })); (P1585)cell2501; });
f_resolve_444(F->up, (*(P169)rt_nil_check(F->p_2492)).a_, &(*(P1585)rt_nil_check(F->pm_2493)).t_, &(*(P1585)rt_nil_check(F->pm_2493)).c_);
(*(P1585)rt_nil_check(F->pm_2493)).cfield_ = f_mk_203(F->up, f_c_field_220(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->p_2492)).name_))));
f_ctype_428(F->up, (*(P1585)rt_nil_check(F->pm_2493)).t_, &F->ct_2496);
if (((*(P1585)rt_nil_check(F->pm_2493)).mode_ == ((rt_int)1LL))) {
F->fields_2495 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->fields_2495)), one_rt_gstr(32)), (*(P135)rt_nil_check(F->ct_2496))), one_rt_gstr(32)), (*(P135)rt_nil_check((*(P1585)rt_nil_check(F->pm_2493)).cfield_))), one_rt_gstr(59)));
} else {
F->fields_2495 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->fields_2495)), one_rt_gstr(32)), (*(P135)rt_nil_check(F->ct_2496))), rt_g_lit(" *", 2)), (*(P135)rt_nil_check((*(P1585)rt_nil_check(F->pm_2493)).cfield_))), one_rt_gstr(59)));
}
if ((F->tail_2494 == NULL)) {
(*(P112)rt_nil_check(F->y_2491)).params_ = F->pm_2493;
} else {
(*(P1585)rt_nil_check(F->tail_2494)).next_ = F->pm_2493;
}
F->tail_2494 = F->pm_2493;
F->p_2492 = (*(P169)rt_nil_check(F->p_2492)).next_;
}
L_end_2500: ;
if ((!F->up->defer_entry_structs_184)) {
f_put_to_228(F->up, F->up->out_types_123, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2491)).cname_))), rt_g_lit("p {", 3)), (*(P135)rt_nil_check(F->fields_2495))), rt_g_lit(" };", 3)));
}
(*(P112)rt_nil_check(F->y_2491)).result_ = F->up->ty_void_156;
(*(P112)rt_nil_check(F->y_2491)).decl_ = F->e_976;
(*(P112)rt_nil_check(F->y_2491)).members_ = F->up->cur_task_178;
if (F->up->in_func_133) {
(*(P112)rt_nil_check(F->y_2491)).level_ = F->up->cur_level_134;
}
(*(P112)rt_nil_check(F->y_2491)).access_path_ = f_mk_203(F->up, cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2491)).cname_)), rt_g_lit("ent", 3)));
f_path_at_934(F->up, (*(P112)rt_nil_check(F->y_2491)).level_, (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2491)).access_path_)), &F->x_2497);
(*(P112)rt_nil_check(F->y_2491)).ro_ = ((((*(P112)rt_nil_check(F->up->cur_task_178)).c_ != NULL) && F->up->in_func_133) && (F->up->cur_level_134 > (*(P112)rt_nil_check(F->up->cur_task_178)).level_));
if (((*(P169)rt_nil_check(F->e_976)).b_ != NULL)) {
if ((((*(P112)rt_nil_check(F->up->cur_task_178)).c_ != NULL) && (!(*(P112)rt_nil_check(F->y_2491)).ro_))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_976)).line_, rt_g_lit("an entry family in a task family is not handled", 47));
}
f_family_bounds_968(F->up, (*(P169)rt_nil_check(F->e_976)).b_, F->y_2491, F->x_2497);
} else if ((((*(P112)rt_nil_check(F->up->cur_task_178)).c_ != NULL) && (!(*(P112)rt_nil_check(F->y_2491)).ro_))) {
f_declare_slot_961(F->up, rt_g_lit("rt_entry *", 10), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2491)).access_path_)));
f_path_at_934(F->up, (*(P112)rt_nil_check(F->up->cur_task_178)).level_, cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->up->cur_task_178)).cname_)), rt_g_lit("lo", 2)), &F->lo_2498);
f_path_at_934(F->up, (*(P112)rt_nil_check(F->up->cur_task_178)).level_, cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->up->cur_task_178)).cname_)), rt_g_lit("hi", 2)), &F->hi_2499);
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->x_2497)), rt_g_lit(" = rt_alloc(sizeof(rt_entry) * (size_t)(", 40)), (*(P135)rt_nil_check(F->hi_2499))), rt_g_lit(" >= ", 4)), (*(P135)rt_nil_check(F->lo_2498))), rt_g_lit(" \? ", 3)), (*(P135)rt_nil_check(F->hi_2499))), rt_g_lit(" - ", 3)), (*(P135)rt_nil_check(F->lo_2498))), rt_g_lit(" + 1 : 1));", 11)));
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = 0; k_ <= ", 26), (*(P135)rt_nil_check(F->hi_2499))), rt_g_lit(" - ", 3)), (*(P135)rt_nil_check(F->lo_2498))), rt_g_lit("; k_++) rt_entry_init(&", 23)), (*(P135)rt_nil_check(F->x_2497))), rt_g_lit("[k_]);", 6)));
} else {
f_declare_slot_961(F->up, rt_g_lit("rt_entry", 8), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2491)).access_path_)));
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_entry_init(&", 15), (*(P135)rt_nil_check(F->x_2497))), rt_g_lit(");", 2)));
}
f_define_409(F->up, F->y_2491, (*(P169)rt_nil_check(F->e_976)).line_);
ret_:

  return;
}

static void f_task_body_979(struct f_greenc_1fr *up_, P169 e_978) {
  struct f_task_body_979fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_978 = e_978;
F->y_2503 = NULL;
F->y_2503 = f_lookup_381(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_978)).name_)));
F->b_2504 = NULL;
F->m_2505 = NULL;
F->z_2506 = NULL;
F->upp_2507 = NULL;
F->saved_2508 = NULL;
F->saved_2508 = F->up->cur_task_178;
if (((F->y_2503 != NULL) && ((*(P112)rt_nil_check(F->y_2503)).kind_ == ((rt_int)11LL)))) {
f_attach_generic_body_1059(F->up, F->e_978);
goto ret_;
}
if (((F->y_2503 == NULL) || ((*(P112)rt_nil_check(F->y_2503)).kind_ != ((rt_int)9LL)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_978)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("task body ", 10), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_978)).name_))), rt_g_lit(" has no task specification", 26)));
}
F->b_2504 = f_new_sym_414(F->up, ((rt_int)4LL), (*(P169)rt_nil_check(F->e_978)).name_);
(*(P112)rt_nil_check(F->b_2504)).cname_ = f_mk_203(F->up, cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2503)).cname_)), rt_g_lit("body", 4)));
(*(P112)rt_nil_check(F->b_2504)).result_ = F->up->ty_void_156;
(*(P112)rt_nil_check(F->b_2504)).level_ = F->up->cur_level_134;
(*(P112)rt_nil_check(F->b_2504)).decl_ = F->e_978;
if (((*(P112)rt_nil_check(F->y_2503)).c_ != NULL)) {
(*(P112)rt_nil_check(F->b_2504)).params_ = ({ R1586 *cell2509 = rt_alloc(sizeof(R1586)); *cell2509 = cp_R1586(({ R1586 ag2510; ag2510.name_ = f_mk_203(F->up, rt_g_lit("INDEX_", 6)); ag2510.mode_ = ((rt_int)1LL); ag2510.t_ = F->up->ty_int_151; ag2510.c_ = NULL; ag2510.cfield_ = f_mk_203(F->up, rt_g_lit("index_", 6)); ag2510.dflt_ = NULL; ag2510.next_ = NULL; ag2510; })); (P1585)cell2509; });
}
f_open_scope_410(F->up);
F->m_2505 = (*(P112)rt_nil_check(F->y_2503)).members_;
while ((F->m_2505 != NULL)) {
f_copy_sym_878(F->up, F->m_2505, &F->z_2506);
f_define_409(F->up, F->z_2506, (*(P169)rt_nil_check(F->e_978)).line_);
if ((((((*(P112)rt_nil_check(F->m_2505)).kind_ == ((rt_int)3LL)) || ((*(P112)rt_nil_check(F->m_2505)).kind_ == ((rt_int)4LL))) && ((*(P112)rt_nil_check(F->m_2505)).access_path_ != NULL)) && f_same_task_384(F->up, (*(P112)rt_nil_check(F->m_2505)).members_, F->y_2503))) {
if (((*(P112)rt_nil_check(F->y_2503)).level_ > ((rt_int)0LL))) {
F->upp_2507 = f_mk_203(F->up, rt_g_lit("up_->", 5));
} else {
F->upp_2507 = f_mk_203(F->up, rt_g_lit("", 0));
}
if (((*(P112)rt_nil_check(F->y_2503)).c_ != NULL)) {
(*(P112)rt_nil_check(F->b_2504)).access_path_ = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->upp_2507)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->m_2505)).access_path_))), rt_g_lit("[index_ - ", 10)), (*(P135)rt_nil_check(F->upp_2507))), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2503)).cname_))), rt_g_lit("lo] = F;", 8)));
} else {
(*(P112)rt_nil_check(F->b_2504)).access_path_ = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->upp_2507)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->m_2505)).access_path_))), rt_g_lit(" = F;", 5)));
}
}
F->m_2505 = (*(P112)rt_nil_check(F->m_2505)).mnext_;
}
L_end_2511: ;
F->up->cur_task_178 = F->y_2503;
f_subprogram_body_590(F->up, F->e_978, F->b_2504);
F->up->cur_task_178 = F->saved_2508;
f_close_scope_411(F->up);
if ((((*(P112)rt_nil_check(F->y_2503)).c_ != NULL) && ((*(P112)rt_nil_check(F->b_2504)).level_ > ((rt_int)0LL)))) {
f_put_to_228(F->up, F->up->out_funcs_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2503)).cname_))), rt_g_lit("run(void *a) { struct rt_famarg *g = a; ", 40)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->b_2504)).cname_))), rt_g_lit("(g->up, g->i); }", 16)));
} else if (((*(P112)rt_nil_check(F->y_2503)).c_ != NULL)) {
f_put_to_228(F->up, F->up->out_funcs_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2503)).cname_))), rt_g_lit("run(void *a) { struct rt_famarg *g = a; ", 40)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->b_2504)).cname_))), rt_g_lit("(g->i); }", 9)));
} else if (((*(P112)rt_nil_check(F->b_2504)).level_ > ((rt_int)0LL))) {
f_put_to_228(F->up, F->up->out_funcs_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2503)).cname_))), rt_g_lit("run(void *a) { ", 15)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->b_2504)).cname_))), rt_g_lit("(a); }", 6)));
} else {
f_put_to_228(F->up, F->up->out_funcs_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2503)).cname_))), rt_g_lit("run(void *a) { (void)a; ", 24)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->b_2504)).cname_))), rt_g_lit("(); }", 5)));
}
ret_:

  return;
}

static void f_task_awaits_982(struct f_greenc_1fr *up_, P169 decls_980, P135 *aw_981) {
  struct f_task_awaits_982fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_980 = decls_980;
F->aw_981 = aw_981;
F->e_2512 = NULL;
F->e_2512 = F->decls_980;
F->y_2513 = NULL;
F->p_2514 = NULL;
(*F->aw_981) = f_mk_203(F->up, rt_g_lit("", 0));
while ((F->e_2512 != NULL)) {
if ((((*(P169)rt_nil_check(F->e_2512)).kind_ == ((rt_int)50LL)) || (((*(P169)rt_nil_check(F->e_2512)).kind_ == ((rt_int)53LL)) && ((*(P169)rt_nil_check(F->e_2512)).ival_ == ((rt_int)50LL))))) {
F->y_2513 = f_lookup_381(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_2512)).name_)));
f_path_at_934(F->up, (*(P112)rt_nil_check(F->y_2513)).level_, cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2513)).cname_)), rt_g_lit("decl", 4)), &F->p_2514);
(*F->aw_981) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check((*F->aw_981))), rt_g_lit(" rt_await_decl(&", 16)), (*(P135)rt_nil_check(F->p_2514))), rt_g_lit(");", 2)));
}
F->e_2512 = (*(P169)rt_nil_check(F->e_2512)).next_;
}
L_end_2515: ;
ret_:

  return;
}

static void f_task_failure_984(struct f_greenc_1fr *up_, P169 s_983) {
  struct f_task_failure_984fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_983 = s_983;
F->y_2516 = NULL;
F->y_2516 = f_lookup_381(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->s_983)).tag_)));
F->a_2517 = NULL;
F->i_2518 = NULL;
F->it_2519 = NULL;
if (((*(P169)rt_nil_check(F->s_983)).a_ != NULL)) {
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->s_983)).a_, (*(P112)rt_nil_check(F->y_2516)).t_, &F->it_2519, &F->i_2518);
f_act_path_i_954(F->up, F->y_2516, (*(P135)rt_nil_check(F->i_2518)), &F->a_2517);
} else {
f_act_path_950(F->up, F->y_2516, &F->a_2517);
}
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_exterminate(&", 16), (*(P135)rt_nil_check(F->a_2517))), rt_g_lit(");", 2)));
ret_:

  return;
}

static void f_entry_sym_988(struct f_greenc_1fr *up_, P169 e_985, P112 *y_986, P169 *ix_987) {
  struct f_entry_sym_988fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_985 = e_985;
F->y_986 = y_986;
F->ix_987 = ix_987;
F->t_2520 = NULL;
(*F->ix_987) = NULL;
F->up->fam_ix_181 = NULL;
if (((*(P169)rt_nil_check(F->e_985)).kind_ == ((rt_int)8LL))) {
f_entry_sym_988(F->up, (*(P169)rt_nil_check(F->e_985)).a_, &(*F->y_986), &(*F->ix_987));
if (((*(P112)rt_nil_check((*F->y_986))).c_ == NULL)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_985)).line_, cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check((*F->y_986))).name_)), rt_g_lit(" is not an entry family", 23)));
}
F->up->fam_ix_181 = (*(P169)rt_nil_check(F->e_985)).b_;
goto ret_;
}
if (((((*(P169)rt_nil_check(F->e_985)).kind_ == ((rt_int)9LL)) && ((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_985)).a_)).kind_ == ((rt_int)8LL))) && ((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_985)).a_)).a_)).kind_ == ((rt_int)5LL)))) {
F->t_2520 = f_lookup_381(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_985)).a_)).a_)).name_)));
if ((((F->t_2520 == NULL) || ((*(P112)rt_nil_check(F->t_2520)).kind_ != ((rt_int)9LL))) || ((*(P112)rt_nil_check(F->t_2520)).c_ == NULL))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_985)).line_, cat_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_985)).a_)).a_)).name_)), rt_g_lit(" is not a task family", 21)));
}
(*F->y_986) = f_member_of_873(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_985)).a_)).a_)).name_)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_985)).name_)), (*(P169)rt_nil_check(F->e_985)).line_);
(*F->ix_987) = (*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_985)).a_)).b_;
if ((((*F->y_986) == NULL) || ((*(P112)rt_nil_check((*F->y_986))).kind_ != ((rt_int)10LL)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_985)).line_, rt_g_lit("not an entry", 12));
}
goto ret_;
}
if (((*(P169)rt_nil_check(F->e_985)).kind_ == ((rt_int)5LL))) {
(*F->y_986) = f_lookup_381(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_985)).name_)));
if (((*(P169)rt_nil_check(F->e_985)).tag_ != NULL)) {
(*F->y_986) = f_member_of_873(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_985)).tag_)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_985)).name_)), (*(P169)rt_nil_check(F->e_985)).line_);
}
} else if ((((*(P169)rt_nil_check(F->e_985)).kind_ == ((rt_int)9LL)) && f_is_package_869(F->up, (*(P169)rt_nil_check(F->e_985)).a_))) {
(*F->y_986) = f_member_of_873(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_985)).a_)).name_)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_985)).name_)), (*(P169)rt_nil_check(F->e_985)).line_);
} else {
(*F->y_986) = NULL;
}
if ((((*F->y_986) == NULL) || ((*(P112)rt_nil_check((*F->y_986))).kind_ != ((rt_int)10LL)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_985)).line_, rt_g_lit("not an entry", 12));
}
ret_:

  return;
}

static void f_other_call_993(struct f_greenc_1fr *up_, P169 e_989, int is_stmt_990, P117 *t_991, P135 *r_992) {
  struct f_other_call_993fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_989 = e_989;
F->is_stmt_990 = is_stmt_990;
F->t_991 = t_991;
F->r_992 = r_992;
F->y_2521 = NULL;
F->pm_2522 = NULL;
F->a_2523 = NULL;
F->parts_2524 = NULL;
F->v_2525 = NULL;
F->lv_2526 = NULL;
F->ent_2527 = NULL;
F->act_2528 = NULL;
F->i_2529 = NULL;
F->vt_2530 = NULL;
F->lt_2531 = NULL;
F->lc_2532 = NULL;
F->ix_2534 = NULL;
F->fix_2535 = NULL;
F->args_node_2536 = NULL;
f_entry_sym_988(F->up, (*(P169)rt_nil_check(F->e_989)).a_, &F->y_2521, &F->ix_2534);
F->fix_2535 = F->up->fam_ix_181;
F->args_node_2536 = (*(P169)rt_nil_check(F->e_989)).b_;
if ((((*(P112)rt_nil_check(F->y_2521)).c_ != NULL) && (F->fix_2535 == NULL))) {
F->fix_2535 = (*(P169)rt_nil_check(F->e_989)).b_;
F->args_node_2536 = NULL;
}
F->i_2529 = f_mk_203(F->up, rt_g_lit("", 0));
if ((F->ix_2534 != NULL)) {
f_gexpr_688(F->up, F->ix_2534, F->up->ty_int_151, &F->vt_2530, &F->i_2529);
} else if (((((*(P112)rt_nil_check(F->y_2521)).members_ != NULL) && ((*(P112)rt_nil_check((*(P112)rt_nil_check(F->y_2521)).members_)).c_ != NULL)) && ((*(P112)rt_nil_check(F->y_2521)).members_ != F->up->cur_task_178))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_989)).line_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("a member of family ", 19), (*(P135)rt_nil_check((*(P112)rt_nil_check((*(P112)rt_nil_check(F->y_2521)).members_)).name_))), rt_g_lit(" must be named: F(I).", 21)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2521)).name_))));
}
if ((!F->is_stmt_990)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_989)).line_, rt_g_lit("an entry call is a statement", 28));
}
if ((F->up->pure_sym_192 != NULL)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_989)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->up->pure_sym_192)).name_))), rt_g_lit(" may not call an entry (RM79 6.5)", 33)));
}
f_entry_path_958(F->up, F->y_2521, (*(P135)rt_nil_check(F->i_2529)), &F->ent_2527);
if (((*(P112)rt_nil_check(F->y_2521)).c_ != NULL)) {
if ((F->fix_2535 == NULL)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_989)).line_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2521)).name_)), rt_g_lit(" is an entry family: name a member, ", 36)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2521)).name_))), rt_g_lit("(I)", 3)));
}
f_gexpr_688(F->up, F->fix_2535, NULL, &F->vt_2530, &F->v_2525);
f_entry_family_slot_973(F->up, F->y_2521, (*(P135)rt_nil_check(F->ent_2527)), (*(P135)rt_nil_check(F->v_2525)), &F->ent_2527);
}
F->parts_2524 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ struct ", 10), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2521)).cname_))), rt_g_lit("p p_;", 5)));
F->pm_2522 = (*(P112)rt_nil_check(F->y_2521)).params_;
while ((F->pm_2522 != NULL)) {
F->a_2523 = f_actual_for_850(F->up, F->args_node_2536, F->pm_2522, (*(P112)rt_nil_check(F->y_2521)).params_);
if ((F->a_2523 == NULL)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_989)).line_, cat_rt_gstr(rt_g_lit("no actual parameter for ", 24), (*(P135)rt_nil_check((*(P1585)rt_nil_check(F->pm_2522)).name_))));
}
if (((*(P1585)rt_nil_check(F->pm_2522)).mode_ == ((rt_int)1LL))) {
f_gexpr_688(F->up, F->a_2523, (*(P1585)rt_nil_check(F->pm_2522)).t_, &F->vt_2530, &F->v_2525);
f_check_type_423(F->up, F->vt_2530, (*(P1585)rt_nil_check(F->pm_2522)).t_, (*(P169)rt_nil_check(F->e_989)).line_);
F->parts_2524 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->parts_2524)), rt_g_lit(" p_.", 4)), (*(P135)rt_nil_check((*(P1585)rt_nil_check(F->pm_2522)).cfield_))), rt_g_lit(" = ", 3)), (*(P135)rt_nil_check(F->v_2525))), one_rt_gstr(59)));
} else {
f_lvalue_647(F->up, F->a_2523, &F->lv_2526, &F->lt_2531, &F->lc_2532, &F->ro_2533);
if (F->ro_2533) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_989)).line_, cat_rt_gstr((*(P135)rt_nil_check((*(P1585)rt_nil_check(F->pm_2522)).name_)), rt_g_lit(" needs a variable", 17)));
}
f_check_type_423(F->up, F->lt_2531, (*(P1585)rt_nil_check(F->pm_2522)).t_, (*(P169)rt_nil_check(F->e_989)).line_);
F->parts_2524 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->parts_2524)), rt_g_lit(" p_.", 4)), (*(P135)rt_nil_check((*(P1585)rt_nil_check(F->pm_2522)).cfield_))), rt_g_lit(" = &", 4)), (*(P135)rt_nil_check(F->lv_2526))), one_rt_gstr(59)));
}
F->pm_2522 = (*(P1585)rt_nil_check(F->pm_2522)).next_;
}
L_end_2537: ;
if ((((*(P112)rt_nil_check(F->y_2521)).members_ != NULL) && ((*(P112)rt_nil_check(F->y_2521)).members_ != F->up->cur_task_178))) {
if ((F->ix_2534 != NULL)) {
f_act_path_i_954(F->up, (*(P112)rt_nil_check(F->y_2521)).members_, (*(P135)rt_nil_check(F->i_2529)), &F->act_2528);
} else {
f_act_path_950(F->up, (*(P112)rt_nil_check(F->y_2521)).members_, &F->act_2528);
}
F->parts_2524 = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->parts_2524)), rt_g_lit(" if (!rt_is_active(&", 20)), (*(P135)rt_nil_check(F->act_2528))), rt_g_lit(")) rt_raise(RT_X_TASKING);", 26)));
}
(*F->t_991) = F->up->ty_void_156;
(*F->r_992) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->parts_2524)), rt_g_lit(" rt_entry_call(&", 16)), (*(P135)rt_nil_check(F->ent_2527))), rt_g_lit(", &p_); })", 10)));
ret_:

  return;
}

static void f_other_attr_998(struct f_greenc_1fr *up_, P169 e_994, P112 y_995, P117 *t_996, P135 *r_997) {
  struct f_other_attr_998fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_994 = e_994;
F->y_995 = y_995;
F->t_996 = t_996;
F->r_997 = r_997;
F->a_2538 = cp_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_994)).name_)));
F->p_2539 = NULL;
if ((((*(P112)rt_nil_check(F->y_995)).kind_ == ((rt_int)9LL)) && eq_rt_gstr(F->a_2538, rt_g_lit("INDEX", 5)))) {
if (((*(P112)rt_nil_check(F->y_995)).c_ == NULL)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_994)).line_, cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_995)).name_)), rt_g_lit(" is not a task family", 21)));
}
f_own_index_942(F->up, &F->p_2539);
(*F->t_996) = F->up->ty_int_151;
if (((*(P112)rt_nil_check(F->y_995)).t_ != NULL)) {
(*F->t_996) = (*(P112)rt_nil_check(F->y_995)).t_;
}
(*F->r_997) = F->p_2539;
} else if ((((*(P112)rt_nil_check(F->y_995)).kind_ == ((rt_int)9LL)) && eq_rt_gstr(F->a_2538, rt_g_lit("ACTIVE", 6)))) {
f_act_path_950(F->up, F->y_995, &F->p_2539);
(*F->t_996) = F->up->ty_bool_152;
(*F->r_997) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_is_active(&", 14), (*(P135)rt_nil_check(F->p_2539))), one_rt_gstr(41)));
} else if ((((*(P112)rt_nil_check(F->y_995)).kind_ == ((rt_int)9LL)) && eq_rt_gstr(F->a_2538, rt_g_lit("PRIORITY", 8)))) {
f_act_path_950(F->up, F->y_995, &F->p_2539);
(*F->t_996) = F->up->ty_int_151;
(*F->r_997) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_priority(&", 13), (*(P135)rt_nil_check(F->p_2539))), one_rt_gstr(41)));
} else if ((((*(P112)rt_nil_check(F->y_995)).kind_ == ((rt_int)10LL)) && eq_rt_gstr(F->a_2538, rt_g_lit("COUNT", 5)))) {
if (((*(P112)rt_nil_check(F->y_995)).members_ != F->up->cur_task_178)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_994)).line_, rt_g_lit("E'COUNT is allowed only in the body of the task (RM79 9.9)", 58));
}
f_entry_path_958(F->up, F->y_995, rt_g_lit("", 0), &F->p_2539);
(*F->t_996) = F->up->ty_int_151;
(*F->r_997) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_entry_count(&", 16), (*(P135)rt_nil_check(F->p_2539))), one_rt_gstr(41)));
} else {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_994)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), F->a_2538), rt_g_lit(" is not handled here", 20)));
(*F->t_996) = F->up->ty_int_151;
(*F->r_997) = NULL;
}
ret_:

  return;
}

static void f_member_attr_1002(struct f_greenc_1fr *up_, P169 e_999, P117 *t_1000, P135 *r_1001) {
  struct f_member_attr_1002fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_999 = e_999;
F->t_1000 = t_1000;
F->r_1001 = r_1001;
F->y_2540 = NULL;
F->ix_2541 = NULL;
F->i_2542 = NULL;
F->p_2543 = NULL;
F->vt_2544 = NULL;
f_task_of_940(F->up, (*(P169)rt_nil_check(F->e_999)).a_, &F->y_2540, &F->ix_2541);
f_gexpr_688(F->up, F->ix_2541, F->up->ty_int_151, &F->vt_2544, &F->i_2542);
f_act_path_i_954(F->up, F->y_2540, (*(P135)rt_nil_check(F->i_2542)), &F->p_2543);
if (eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_999)).name_)), rt_g_lit("ACTIVE", 6))) {
(*F->t_1000) = F->up->ty_bool_152;
(*F->r_1001) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_is_active(&", 14), (*(P135)rt_nil_check(F->p_2543))), one_rt_gstr(41)));
} else if (eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_999)).name_)), rt_g_lit("PRIORITY", 8))) {
(*F->t_1000) = F->up->ty_int_151;
(*F->r_1001) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_priority(&", 13), (*(P135)rt_nil_check(F->p_2543))), one_rt_gstr(41)));
} else {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_999)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_999)).name_))), rt_g_lit(" is not handled for a family member", 35)));
(*F->t_1000) = F->up->ty_int_151;
(*F->r_1001) = NULL;
}
ret_:

  return;
}

static void f_task_builtin_1008(struct f_greenc_1fr *up_, rt_gstr name_1003, P169 args_1004, rt_int line_1005, P117 *t_1006, P135 *r_1007) {
  struct f_task_builtin_1008fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1003 = cp_rt_gstr(name_1003);
F->args_1004 = args_1004;
F->line_1005 = line_1005;
F->t_1006 = t_1006;
F->r_1007 = r_1007;
F->vt_2545 = NULL;
F->v_2546 = NULL;
(*F->t_1006) = F->up->ty_void_156;
if (eq_rt_gstr(F->name_1003, rt_g_lit("SET_PRIORITY", 12))) {
f_gexpr_688(F->up, F->args_1004, F->up->ty_int_151, &F->vt_2545, &F->v_2546);
(*F->r_1007) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_set_priority(rt_me(), ", 25), (*(P135)rt_nil_check(F->v_2546))), one_rt_gstr(41)));
} else {
f_fail_224(F->up, F->line_1005, cat_rt_gstr(F->name_1003, rt_g_lit(" is not declared", 16)));
(*F->r_1007) = NULL;
}
ret_:

  return;
}

static void f_gen_accept_1010(struct f_greenc_1fr *up_, P169 s_1009) {
  struct f_gen_accept_1010fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1009 = s_1009;
F->y_2547 = NULL;
F->y_2547 = f_lookup_entry_387(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->s_1009)).name_)), F->up->cur_task_178);
F->saved_ax_2548 = NULL;
F->ent_2549 = NULL;
F->ep_2550 = NULL;
F->xf_2551 = NULL;
F->x_2552 = NULL;
F->pm_2553 = NULL;
F->f_2554 = NULL;
F->f_2554 = (*(P169)rt_nil_check(F->s_1009)).a_;
F->p_2555 = NULL;
if (((F->y_2547 == NULL) || ((*(P112)rt_nil_check(F->y_2547)).kind_ != ((rt_int)10LL)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->s_1009)).line_, cat_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->s_1009)).name_)), rt_g_lit(" is not an entry", 16)));
}
if ((!f_same_task_384(F->up, (*(P112)rt_nil_check(F->y_2547)).members_, F->up->cur_task_178))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->s_1009)).line_, rt_g_lit("a task accepts only its own entries (RM79 9.5)", 46));
}
f_entry_path_958(F->up, F->y_2547, rt_g_lit("", 0), &F->ent_2549);
f_member_slot_1014(F->up, F->y_2547, F->s_1009, &F->ent_2549);
if (((*(P169)rt_nil_check(F->s_1009)).flag_ == ((rt_int)0LL))) {
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_accept_begin(&", 19), (*(P135)rt_nil_check(F->ent_2549))), rt_g_lit("); rt_accept_end(&", 18)), (*(P135)rt_nil_check(F->ent_2549))), rt_g_lit(", 0, 0); }", 10)));
goto ret_;
}
f_new_name_206(F->up, rt_g_lit("ep", 2), &F->ep_2550);
f_new_name_206(F->up, rt_g_lit("xf", 2), &F->xf_2551);
f_new_name_206(F->up, rt_g_lit("x", 1), &F->x_2552);
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ struct ", 9), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2547)).cname_))), rt_g_lit("p *", 3)), (*(P135)rt_nil_check(F->ep_2550))), rt_g_lit(" = rt_accept_begin(&", 20)), (*(P135)rt_nil_check(F->ent_2549))), rt_g_lit(");", 2)));
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_frame ", 9), (*(P135)rt_nil_check(F->xf_2551))), one_rt_gstr(59)));
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (RT_TRY(", 11), (*(P135)rt_nil_check(F->xf_2551))), rt_g_lit(")) {", 4)));
f_push_cleanup_596(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P135)rt_nil_check(F->xf_2551))), rt_g_lit("); rt_accept_end(&", 18)), (*(P135)rt_nil_check(F->ent_2549))), rt_g_lit(", 0, 0);", 8)));
f_open_scope_410(F->up);
F->pm_2553 = (*(P112)rt_nil_check(F->y_2547)).params_;
while ((F->pm_2553 != NULL)) {
if (((*(P1585)rt_nil_check(F->pm_2553)).mode_ == ((rt_int)1LL))) {
F->p_2555 = f_new_sym_414(F->up, ((rt_int)2LL), (*(P1585)rt_nil_check(F->pm_2553)).name_);
(*(P112)rt_nil_check(F->p_2555)).ro_ = 1;
(*(P112)rt_nil_check(F->p_2555)).access_path_ = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P135)rt_nil_check(F->ep_2550))), rt_g_lit("->", 2)), (*(P135)rt_nil_check((*(P1585)rt_nil_check(F->pm_2553)).cfield_))), one_rt_gstr(41)));
} else {
F->p_2555 = f_new_sym_414(F->up, ((rt_int)1LL), (*(P1585)rt_nil_check(F->pm_2553)).name_);
(*(P112)rt_nil_check(F->p_2555)).access_path_ = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*", 2), (*(P135)rt_nil_check(F->ep_2550))), rt_g_lit("->", 2)), (*(P135)rt_nil_check((*(P1585)rt_nil_check(F->pm_2553)).cfield_))), one_rt_gstr(41)));
}
if ((F->f_2554 != NULL)) {
(*(P112)rt_nil_check(F->p_2555)).name_ = (*(P169)rt_nil_check(F->f_2554)).name_;
F->f_2554 = (*(P169)rt_nil_check(F->f_2554)).next_;
}
(*(P112)rt_nil_check(F->p_2555)).t_ = (*(P1585)rt_nil_check(F->pm_2553)).t_;
(*(P112)rt_nil_check(F->p_2555)).c_ = (*(P1585)rt_nil_check(F->pm_2553)).c_;
f_define_409(F->up, F->p_2555, (*(P169)rt_nil_check(F->s_1009)).line_);
F->pm_2553 = (*(P1585)rt_nil_check(F->pm_2553)).next_;
}
L_end_2556: ;
F->up->accept_depth_179 = rt_add(F->up->accept_depth_179, ((rt_int)1LL));
F->saved_ax_2548 = F->up->accept_exits_144;
F->up->accept_exits_144 = F->up->exits_140;
f_gen_statements_592(F->up, (*(P169)rt_nil_check(F->s_1009)).b_);
F->up->accept_exits_144 = F->saved_ax_2548;
F->up->accept_depth_179 = rt_sub(F->up->accept_depth_179, ((rt_int)1LL));
f_close_scope_411(F->up);
f_pop_cleanup_597(F->up);
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P135)rt_nil_check(F->xf_2551))), rt_g_lit("); rt_accept_end(&", 18)), (*(P135)rt_nil_check(F->ent_2549))), rt_g_lit(", 0, 0);", 8)));
f_emit_230(F->up, rt_g_lit("} else {", 8));
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P135)rt_nil_check(F->xf_2551))), rt_g_lit("); int ", 7)), (*(P135)rt_nil_check(F->x_2552))), rt_g_lit(" = rt_xcur; rt_accept_end(&", 27)), (*(P135)rt_nil_check(F->ent_2549))), rt_g_lit(", 1, ", 5)), (*(P135)rt_nil_check(F->x_2552))), rt_g_lit("); rt_raise(", 12)), (*(P135)rt_nil_check(F->x_2552))), rt_g_lit(");", 2)));
f_emit_230(F->up, rt_g_lit("}", 1));
f_emit_230(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_member_slot_1014(struct f_greenc_1fr *up_, P112 y_1011, P169 s_1012, P135 *ent_1013) {
  struct f_member_slot_1014fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1011 = y_1011;
F->s_1012 = s_1012;
F->ent_1013 = ent_1013;
F->vt_2557 = NULL;
F->v_2558 = NULL;
if (((*(P112)rt_nil_check(F->y_1011)).c_ != NULL)) {
if (((*(P169)rt_nil_check(F->s_1012)).c_ == NULL)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->s_1012)).line_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1011)).name_)), rt_g_lit(" is an entry family: accept ", 28)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1011)).name_))), rt_g_lit("(I)", 3)));
}
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->s_1012)).c_, NULL, &F->vt_2557, &F->v_2558);
f_entry_family_slot_973(F->up, F->y_1011, (*(P135)rt_nil_check((*F->ent_1013))), (*(P135)rt_nil_check(F->v_2558)), &(*F->ent_1013));
} else if (((*(P169)rt_nil_check(F->s_1012)).c_ != NULL)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->s_1012)).line_, cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1011)).name_)), rt_g_lit(" is not an entry family", 23)));
}
ret_:

  return;
}

static void f_gen_delay_ticks_1017(struct f_greenc_1fr *up_, P169 e_1015, P135 *r_1016) {
  struct f_gen_delay_ticks_1017fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1015 = e_1015;
F->r_1016 = r_1016;
F->vt_2559 = NULL;
F->v_2560 = NULL;
f_gexpr_688(F->up, F->e_1015, F->up->ty_time_166, &F->vt_2559, &F->v_2560);
f_check_type_423(F->up, F->vt_2559, F->up->ty_time_166, (*(P169)rt_nil_check(F->e_1015)).line_);
(*F->r_1016) = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(rt_int)llround(", 16), (*(P135)rt_nil_check(F->v_2560))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_gen_select_1019(struct f_greenc_1fr *up_, P169 s_1018) {
  struct f_gen_select_1019fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1018 = s_1018;
F->alt_2561 = NULL;
F->alt_2561 = (*(P169)rt_nil_check(F->s_1018)).a_;
F->n_2562 = ((rt_int)0LL);
F->has_delay_2564 = 0;
F->has_accept_2565 = 0;
F->al_2566 = NULL;
F->w_2567 = NULL;
F->g_2568 = NULL;
F->ent_2569 = NULL;
F->ticks_2570 = NULL;
F->vt_2571 = NULL;
F->y_2572 = NULL;
f_new_name_206(F->up, rt_g_lit("al", 2), &F->al_2566);
f_new_name_206(F->up, rt_g_lit("w", 1), &F->w_2567);
while ((F->alt_2561 != NULL)) {
F->n_2562 = rt_add(F->n_2562, ((rt_int)1LL));
if (((*(P169)rt_nil_check((*(P169)rt_nil_check(F->alt_2561)).b_)).kind_ == ((rt_int)32LL))) {
F->has_delay_2564 = 1;
} else {
F->has_accept_2565 = 1;
}
F->alt_2561 = (*(P169)rt_nil_check(F->alt_2561)).next_;
}
L_end_2573: ;
if ((((*(P169)rt_nil_check(F->s_1018)).flag_ == ((rt_int)1LL)) && F->has_delay_2564)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->s_1018)).line_, rt_g_lit("a select cannot have both delay alternatives and an else part (RM79 9.7)", 72));
}
if ((!F->has_accept_2565)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->s_1018)).line_, rt_g_lit("a select needs at least one accept alternative (RM79 9.7)", 57));
}
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_alt ", 9), (*(P135)rt_nil_check(F->al_2566))), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(rt_add(F->n_2562, ((rt_int)1LL))))), rt_g_lit("]; int open_ = 0;", 17)));
F->alt_2561 = (*(P169)rt_nil_check(F->s_1018)).a_;
F->i_2563 = ((rt_int)0LL);
while ((F->alt_2561 != NULL)) {
F->g_2568 = f_mk_203(F->up, rt_g_lit("1", 1));
if (((*(P169)rt_nil_check(F->alt_2561)).a_ != NULL)) {
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->alt_2561)).a_, F->up->ty_bool_152, &F->vt_2571, &F->g_2568);
f_check_type_423(F->up, F->vt_2571, F->up->ty_bool_152, (*(P169)rt_nil_check(F->alt_2561)).line_);
}
if (((*(P169)rt_nil_check((*(P169)rt_nil_check(F->alt_2561)).b_)).kind_ == ((rt_int)34LL))) {
F->y_2572 = f_lookup_entry_387(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->alt_2561)).b_)).name_)), F->up->cur_task_178);
if (((F->y_2572 == NULL) || ((*(P112)rt_nil_check(F->y_2572)).kind_ != ((rt_int)10LL)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->alt_2561)).line_, cat_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->alt_2561)).b_)).name_)), rt_g_lit(" is not an entry", 16)));
}
f_entry_path_958(F->up, F->y_2572, rt_g_lit("", 0), &F->ent_2569);
f_member_slot_1014(F->up, F->y_2572, (*(P169)rt_nil_check(F->alt_2561)).b_, &F->ent_2569);
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->al_2566)), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(F->i_2563))), rt_g_lit("] = (rt_alt){RT_ALT_ACCEPT, (", 29)), (*(P135)rt_nil_check(F->g_2568))), rt_g_lit("), &", 4)), (*(P135)rt_nil_check(F->ent_2569))), rt_g_lit(", NULL, 0};", 11)));
} else {
f_gen_delay_ticks_1017(F->up, (*(P169)rt_nil_check((*(P169)rt_nil_check(F->alt_2561)).b_)).a_, &F->ticks_2570);
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->al_2566)), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(F->i_2563))), rt_g_lit("] = (rt_alt){RT_ALT_DELAY, (", 28)), (*(P135)rt_nil_check(F->g_2568))), rt_g_lit("), NULL, NULL, ", 15)), (*(P135)rt_nil_check(F->ticks_2570))), rt_g_lit("};", 2)));
}
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("open_ |= ", 9), (*(P135)rt_nil_check(F->al_2566))), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(F->i_2563))), rt_g_lit("].open;", 7)));
F->i_2563 = rt_add(F->i_2563, ((rt_int)1LL));
F->alt_2561 = (*(P169)rt_nil_check(F->alt_2561)).next_;
}
L_end_2574: ;
if (((*(P169)rt_nil_check(F->s_1018)).flag_ == ((rt_int)1LL))) {
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->al_2566)), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(F->n_2562))), rt_g_lit("] = (rt_alt){RT_ALT_ELSE, 1, NULL, NULL, 0};", 44)));
F->n_2562 = rt_add(F->n_2562, ((rt_int)1LL));
} else {
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (!open_) rt_raise(rt_exc(", 28), f_q_221(F->up)), rt_g_lit("SELECT_ERROR", 12)), f_q_221(F->up)), rt_g_lit("));", 3)));
}
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("int ", 4), (*(P135)rt_nil_check(F->w_2567))), rt_g_lit(" = rt_wait(", 11)), rt_g_s2g(rt_str_of_int(F->n_2562))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check(F->al_2566))), rt_g_lit(");", 2)));
F->alt_2561 = (*(P169)rt_nil_check(F->s_1018)).a_;
F->i_2563 = ((rt_int)0LL);
while ((F->alt_2561 != NULL)) {
if ((F->i_2563 == ((rt_int)0LL))) {
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P135)rt_nil_check(F->w_2567))), rt_g_lit(" == 0) {", 8)));
} else {
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P135)rt_nil_check(F->w_2567))), rt_g_lit(" == ", 4)), rt_g_s2g(rt_str_of_int(F->i_2563))), rt_g_lit(") {", 3)));
}
if (((*(P169)rt_nil_check((*(P169)rt_nil_check(F->alt_2561)).b_)).kind_ == ((rt_int)34LL))) {
f_gen_accept_1010(F->up, (*(P169)rt_nil_check(F->alt_2561)).b_);
}
f_gen_statements_592(F->up, (*(P169)rt_nil_check(F->alt_2561)).c_);
F->i_2563 = rt_add(F->i_2563, ((rt_int)1LL));
F->alt_2561 = (*(P169)rt_nil_check(F->alt_2561)).next_;
}
L_end_2575: ;
if (((*(P169)rt_nil_check(F->s_1018)).flag_ == ((rt_int)1LL))) {
f_emit_230(F->up, rt_g_lit("} else {", 8));
f_gen_statements_592(F->up, (*(P169)rt_nil_check(F->s_1018)).b_);
}
f_emit_230(F->up, rt_g_lit("}", 1));
f_emit_230(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_family_range_1024(struct f_greenc_1fr *up_, P112 y_1020, P169 ix_1021, P135 *lo_1022, P135 *hi_1023) {
  struct f_family_range_1024fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1020 = y_1020;
F->ix_1021 = ix_1021;
F->lo_1022 = lo_1022;
F->hi_1023 = hi_1023;
F->vt_2576 = NULL;
if ((F->ix_1021 == NULL)) {
f_path_at_934(F->up, (*(P112)rt_nil_check(F->y_1020)).level_, cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1020)).cname_)), rt_g_lit("lo", 2)), &(*F->lo_1022));
f_path_at_934(F->up, (*(P112)rt_nil_check(F->y_1020)).level_, cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1020)).cname_)), rt_g_lit("hi", 2)), &(*F->hi_1023));
} else if (((*(P169)rt_nil_check(F->ix_1021)).kind_ == ((rt_int)14LL))) {
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->ix_1021)).a_, F->up->ty_int_151, &F->vt_2576, &(*F->lo_1022));
f_gexpr_688(F->up, (*(P169)rt_nil_check(F->ix_1021)).b_, F->up->ty_int_151, &F->vt_2576, &(*F->hi_1023));
} else {
f_gexpr_688(F->up, F->ix_1021, F->up->ty_int_151, &F->vt_2576, &(*F->lo_1022));
(*F->hi_1023) = (*F->lo_1022);
}
ret_:

  return;
}

static void f_task_statement_gen_1026(struct f_greenc_1fr *up_, P169 s_1025) {
  struct f_task_statement_gen_1026fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1025 = s_1025;
F->n_2577 = NULL;
F->ix_2578 = NULL;
F->y_2579 = NULL;
F->a_2580 = NULL;
F->d_2581 = NULL;
F->l_2582 = NULL;
F->ticks_2583 = NULL;
F->lo_2584 = NULL;
F->hi_2585 = NULL;
{ rt_int sel2586 = (*(P169)rt_nil_check(F->s_1025)).kind_;
if (0 || sel2586 == ((rt_int)32LL)) {
f_gen_delay_ticks_1017(F->up, (*(P169)rt_nil_check(F->s_1025)).a_, &F->ticks_2583);
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_delay(", 9), (*(P135)rt_nil_check(F->ticks_2583))), rt_g_lit(");", 2)));
} else if (0 || sel2586 == ((rt_int)33LL)) {
if ((F->up->accept_depth_179 > ((rt_int)0LL))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->s_1025)).line_, rt_g_lit("an accept body cannot initiate a task (RM79 9.5)", 48));
}
F->n_2577 = (*(P169)rt_nil_check(F->s_1025)).a_;
while ((F->n_2577 != NULL)) {
f_task_of_940(F->up, F->n_2577, &F->y_2579, &F->ix_2578);
f_path_at_934(F->up, (*(P112)rt_nil_check(F->y_2579)).level_, cat_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2579)).cname_)), rt_g_lit("decl", 4)), &F->d_2581);
if (((*(P112)rt_nil_check(F->y_2579)).level_ > ((rt_int)0LL))) {
f_link_to_633(F->up, (*(P112)rt_nil_check(F->y_2579)).level_, &F->l_2582);
} else {
F->l_2582 = f_mk_203(F->up, rt_g_lit("NULL", 4));
}
if (((*(P112)rt_nil_check(F->y_2579)).c_ == NULL)) {
f_act_path_950(F->up, F->y_2579, &F->a_2580);
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_create(&", 11), (*(P135)rt_nil_check(F->a_2580))), rt_g_lit(", &", 3)), (*(P135)rt_nil_check(F->d_2581))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2579)).cname_))), rt_g_lit("run, ", 5)), (*(P135)rt_nil_check(F->l_2582))), rt_g_lit(");", 2)));
} else {
f_family_range_1024(F->up, F->y_2579, F->ix_2578, &F->lo_2584, &F->hi_2585);
f_act_path_i_954(F->up, F->y_2579, rt_g_lit("k_", 2), &F->a_2580);
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = ", 17), (*(P135)rt_nil_check(F->lo_2584))), rt_g_lit("; k_ <= ", 8)), (*(P135)rt_nil_check(F->hi_2585))), rt_g_lit("; k_++) { struct rt_famarg *g_ = rt_alloc(sizeof *g_); g_->up = ", 64)), (*(P135)rt_nil_check(F->l_2582))), rt_g_lit("; g_->i = k_; rt_create(&", 25)), (*(P135)rt_nil_check(F->a_2580))), rt_g_lit(", &", 3)), (*(P135)rt_nil_check(F->d_2581))), rt_g_lit(", ", 2)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2579)).cname_))), rt_g_lit("run, g_); }", 11)));
}
F->n_2577 = (*(P169)rt_nil_check(F->n_2577)).next_;
}
L_end_2587: ;
} else if (0 || sel2586 == ((rt_int)34LL)) {
f_gen_accept_1010(F->up, F->s_1025);
} else if (0 || sel2586 == ((rt_int)35LL)) {
f_gen_select_1019(F->up, F->s_1025);
} else if (0 || sel2586 == ((rt_int)36LL)) {
F->n_2577 = (*(P169)rt_nil_check(F->s_1025)).a_;
while ((F->n_2577 != NULL)) {
f_task_of_940(F->up, F->n_2577, &F->y_2579, &F->ix_2578);
if (((*(P112)rt_nil_check(F->y_2579)).c_ == NULL)) {
f_act_path_950(F->up, F->y_2579, &F->a_2580);
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_abort(&", 12), (*(P135)rt_nil_check(F->a_2580))), rt_g_lit(");", 2)));
} else {
f_family_range_1024(F->up, F->y_2579, F->ix_2578, &F->lo_2584, &F->hi_2585);
f_act_path_i_954(F->up, F->y_2579, rt_g_lit("k_", 2), &F->a_2580);
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = ", 17), (*(P135)rt_nil_check(F->lo_2584))), rt_g_lit("; k_ <= ", 8)), (*(P135)rt_nil_check(F->hi_2585))), rt_g_lit("; k_++) rt_g_abort(&", 20)), (*(P135)rt_nil_check(F->a_2580))), rt_g_lit(");", 2)));
}
F->n_2577 = (*(P169)rt_nil_check(F->n_2577)).next_;
}
L_end_2588: ;
} else {
f_fail_224(F->up, (*(P169)rt_nil_check(F->s_1025)).line_, rt_g_lit("this statement is not handled", 29));
}
}
ret_:

  return;
}

static P169 f_root_name_1028(struct f_greenc_1fr *up_, P169 e_1027) {
  struct f_root_name_1028fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1027 = e_1027;
if (((*(P169)rt_nil_check(F->e_1027)).kind_ == ((rt_int)5LL))) {
F->result_ = F->e_1027;
goto ret_;
} else if (((((*(P169)rt_nil_check(F->e_1027)).kind_ == ((rt_int)9LL)) || ((*(P169)rt_nil_check(F->e_1027)).kind_ == ((rt_int)8LL))) || ((*(P169)rt_nil_check(F->e_1027)).kind_ == ((rt_int)15LL)))) {
F->result_ = f_root_name_1028(F->up, (*(P169)rt_nil_check(F->e_1027)).a_);
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_pure_target_1031(struct f_greenc_1fr *up_, P169 target_1029, rt_int line_1030) {
  struct f_check_pure_target_1031fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->target_1029 = target_1029;
F->line_1030 = line_1030;
F->n_2589 = NULL;
F->y_2590 = NULL;
if ((F->up->pure_sym_192 == NULL)) {
goto ret_;
}
if (F->up->last_deref_196) {
f_fail_224(F->up, F->line_1030, cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->up->pure_sym_192)).name_))), rt_g_lit(" may not change an object designated by an access value (RM79 6.5)", 66)));
}
F->n_2589 = f_root_name_1028(F->up, F->target_1029);
if ((F->n_2589 != NULL)) {
F->y_2590 = f_lookup_381(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->n_2589)).name_)));
if ((((F->y_2590 != NULL) && ((*(P112)rt_nil_check(F->y_2590)).kind_ == ((rt_int)1LL))) && ((*(P112)rt_nil_check(F->y_2590)).depth_ < F->up->pure_depth_193))) {
f_fail_224(F->up, F->line_1030, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->up->pure_sym_192)).name_))), rt_g_lit(" may not assign to ", 19)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->n_2589)).name_))), rt_g_lit(", which is not local to it (RM79 6.5)", 37)));
}
}
ret_:

  return;
}

static int f_assigns_nonlocal_1034(struct f_greenc_1fr *up_, P169 d_1032, rt_gstr name_1033) {
  struct f_assigns_nonlocal_1034fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_1032 = d_1032;
F->name_1033 = cp_rt_gstr(name_1033);
F->result_ = (f_scan_assigns_1045(F->up, (*(P169)rt_nil_check(F->d_1032)).d_, F->d_1032, F->name_1033) || f_scan_handlers_1041(F->up, (*(P169)rt_nil_check(F->d_1032)).e_, F->d_1032, F->name_1033));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_declares_1037(struct f_greenc_1fr *up_, P169 d_1035, rt_gstr name_1036) {
  struct f_declares_1037fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_1035 = d_1035;
F->name_1036 = cp_rt_gstr(name_1036);
F->p_2591 = NULL;
F->p_2591 = (*(P169)rt_nil_check(F->d_1035)).a_;
F->e_2592 = NULL;
F->e_2592 = (*(P169)rt_nil_check(F->d_1035)).c_;
while ((F->p_2591 != NULL)) {
if (eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->p_2591)).name_)), F->name_1036)) {
F->result_ = 1;
goto ret_;
}
F->p_2591 = (*(P169)rt_nil_check(F->p_2591)).next_;
}
L_end_2593: ;
while ((F->e_2592 != NULL)) {
if ((((*(P169)rt_nil_check(F->e_2592)).name_ != NULL) && eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_2592)).name_)), F->name_1036))) {
F->result_ = 1;
goto ret_;
}
F->e_2592 = (*(P169)rt_nil_check(F->e_2592)).next_;
}
L_end_2594: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_scan_handlers_1041(struct f_greenc_1fr *up_, P169 h_1038, P169 d_1039, rt_gstr name_1040) {
  struct f_scan_handlers_1041fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->h_1038 = h_1038;
F->d_1039 = d_1039;
F->name_1040 = cp_rt_gstr(name_1040);
F->p_2595 = NULL;
F->p_2595 = F->h_1038;
while ((F->p_2595 != NULL)) {
if (f_scan_assigns_1045(F->up, (*(P169)rt_nil_check(F->p_2595)).b_, F->d_1039, F->name_1040)) {
F->result_ = 1;
goto ret_;
}
F->p_2595 = (*(P169)rt_nil_check(F->p_2595)).next_;
}
L_end_2596: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_scan_assigns_1045(struct f_greenc_1fr *up_, P169 stmts_1042, P169 d_1043, rt_gstr name_1044) {
  struct f_scan_assigns_1045fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_1042 = stmts_1042;
F->d_1043 = d_1043;
F->name_1044 = cp_rt_gstr(name_1044);
F->s_2597 = NULL;
F->s_2597 = F->stmts_1042;
F->a_2598 = NULL;
F->r_2599 = NULL;
while ((F->s_2597 != NULL)) {
if (((*(P169)rt_nil_check(F->s_2597)).kind_ == ((rt_int)20LL))) {
F->r_2599 = f_root_name_1028(F->up, (*(P169)rt_nil_check(F->s_2597)).a_);
if ((((F->r_2599 != NULL) && eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->r_2599)).name_)), F->name_1044)) && (!f_declares_1037(F->up, F->d_1043, F->name_1044)))) {
F->result_ = 1;
goto ret_;
}
} else if (((*(P169)rt_nil_check(F->s_2597)).kind_ == ((rt_int)22LL))) {
F->a_2598 = (*(P169)rt_nil_check(F->s_2597)).a_;
while ((F->a_2598 != NULL)) {
if (f_scan_assigns_1045(F->up, (*(P169)rt_nil_check(F->a_2598)).b_, F->d_1043, F->name_1044)) {
F->result_ = 1;
goto ret_;
}
F->a_2598 = (*(P169)rt_nil_check(F->a_2598)).next_;
}
L_end_2601: ;
if (f_scan_assigns_1045(F->up, (*(P169)rt_nil_check(F->s_2597)).b_, F->d_1043, F->name_1044)) {
F->result_ = 1;
goto ret_;
}
} else if (((*(P169)rt_nil_check(F->s_2597)).kind_ == ((rt_int)23LL))) {
F->a_2598 = (*(P169)rt_nil_check(F->s_2597)).b_;
while ((F->a_2598 != NULL)) {
if (f_scan_assigns_1045(F->up, (*(P169)rt_nil_check(F->a_2598)).b_, F->d_1043, F->name_1044)) {
F->result_ = 1;
goto ret_;
}
F->a_2598 = (*(P169)rt_nil_check(F->a_2598)).next_;
}
L_end_2602: ;
if (f_scan_assigns_1045(F->up, (*(P169)rt_nil_check(F->s_2597)).c_, F->d_1043, F->name_1044)) {
F->result_ = 1;
goto ret_;
}
} else if (((*(P169)rt_nil_check(F->s_2597)).kind_ == ((rt_int)24LL))) {
if (f_scan_assigns_1045(F->up, (*(P169)rt_nil_check(F->s_2597)).b_, F->d_1043, F->name_1044)) {
F->result_ = 1;
goto ret_;
}
} else if (((*(P169)rt_nil_check(F->s_2597)).kind_ == ((rt_int)25LL))) {
if ((f_scan_assigns_1045(F->up, (*(P169)rt_nil_check(F->s_2597)).b_, F->d_1043, F->name_1044) || f_scan_handlers_1041(F->up, (*(P169)rt_nil_check(F->s_2597)).c_, F->d_1043, F->name_1044))) {
F->result_ = 1;
goto ret_;
}
}
F->s_2597 = (*(P169)rt_nil_check(F->s_2597)).next_;
}
L_end_2600: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_call_rules_1048(struct f_greenc_1fr *up_, P169 e_1046, P112 y_1047) {
  struct f_check_call_rules_1048fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1046 = e_1046;
F->y_1047 = y_1047;
F->z_2603 = NULL;
F->s_2604 = NULL;
if ((((F->up->pure_sym_192 != NULL) && (((*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_1047)).result_)).kind_ == ((rt_int)9LL)) || (*(P112)rt_nil_check(F->y_1047)).vrp_)) && ((*(P112)rt_nil_check(F->y_1047)).depth_ < F->up->pure_depth_193))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_1046)).line_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->up->pure_sym_192)).name_))), rt_g_lit(" may not call procedure ", 24)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1047)).name_))), rt_g_lit(": it could have side effects (RM79 6.5)", 39)));
}
if (((!(*(P112)rt_nil_check(F->y_1047)).vrp_) || (F->up->trial_150 > ((rt_int)0LL)))) {
goto ret_;
}
if ((!F->up->vrp_ok_194)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_1046)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("value-returning procedure ", 26), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1047)).name_))), rt_g_lit(" can be called only in an assignment, an initialization or a procedure call (RM79 6.5)", 86)));
}
F->s_2604 = F->up->scope_stack_116;
while ((F->s_2604 != NULL)) {
if ((((((*(P112)rt_nil_check(F->s_2604)).kind_ == ((rt_int)1LL)) && ((*(P112)rt_nil_check(F->s_2604)).depth_ <= (*(P112)rt_nil_check(F->y_1047)).depth_)) && (f_lookup_381(F->up, (*(P135)rt_nil_check((*(P112)rt_nil_check(F->s_2604)).name_))) == F->s_2604)) && f_assigns_nonlocal_1034(F->up, (*(P112)rt_nil_check(F->y_1047)).decl_, (*(P135)rt_nil_check((*(P112)rt_nil_check(F->s_2604)).name_))))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_1046)).line_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("value-returning procedure ", 26), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1047)).name_))), rt_g_lit(" assigns ", 9)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->s_2604)).name_))), rt_g_lit(", which is visible here; it can be called only outside its scope (RM79 6.5)", 75)));
}
F->s_2604 = (*(P112)rt_nil_check(F->s_2604)).stack_;
}
L_end_2605: ;
ret_:

  return;
}

static void f_generic_p_1050(struct f_greenc_1fr *up_, P169 *res_1049) {
  struct f_generic_p_1050fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1049 = res_1049;
F->x_2606 = NULL;
F->p_2607 = NULL;
F->head_2608 = NULL;
F->tail_2609 = NULL;
F->names_2610 = NULL;
F->st_2611 = NULL;
F->def_2612 = NULL;
F->sub_2613 = NULL;
F->def_name_text_2614 = NULL;
F->more_2615 = 1;
f_expect_kw_296(F->up, rt_g_lit("GENERIC", 7));
F->x_2606 = f_nn_274(F->up, ((rt_int)54LL), f_cur_line_281(F->up));
if (f_at_op_285(F->up, rt_g_lit("(", 1))) {
f_skip_294(F->up);
while (F->more_2615) {
if (f_at_kw_283(F->up, rt_g_lit("RESTRICTED", 10))) {
f_skip_294(F->up);
}
if (f_at_kw_283(F->up, rt_g_lit("TYPE", 4))) {
f_skip_294(F->up);
F->p_2607 = f_nn_274(F->up, ((rt_int)47LL), f_cur_line_281(F->up));
(*(P169)rt_nil_check(F->p_2607)).ival_ = ((rt_int)10LL);
f_expect_id_300(F->up, &(*(P169)rt_nil_check(F->p_2607)).name_);
f_append_278(F->up, &F->head_2608, &F->tail_2609, F->p_2607);
} else if ((f_at_kw_283(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_283(F->up, rt_g_lit("FUNCTION", 8)))) {
F->p_2607 = f_nn_274(F->up, ((rt_int)47LL), f_cur_line_281(F->up));
(*(P169)rt_nil_check(F->p_2607)).ival_ = ((rt_int)11LL);
if (f_at_kw_283(F->up, rt_g_lit("PROCEDURE", 9))) {
F->sub_2613 = f_nn_274(F->up, ((rt_int)44LL), f_cur_line_281(F->up));
} else {
F->sub_2613 = f_nn_274(F->up, ((rt_int)45LL), f_cur_line_281(F->up));
}
f_skip_294(F->up);
f_designator_354(F->up, &(*(P169)rt_nil_check(F->sub_2613)).name_);
if (f_at_op_285(F->up, rt_g_lit("(", 1))) {
f_formal_part_352(F->up, &(*(P169)rt_nil_check(F->sub_2613)).a_);
}
if (f_at_kw_283(F->up, rt_g_lit("RETURN", 6))) {
f_skip_294(F->up);
f_subtype_ind_334(F->up, &(*(P169)rt_nil_check(F->sub_2613)).b_);
}
(*(P169)rt_nil_check(F->sub_2613)).ival_ = ((rt_int)1LL);
(*(P169)rt_nil_check(F->p_2607)).name_ = (*(P169)rt_nil_check(F->sub_2613)).name_;
(*(P169)rt_nil_check(F->p_2607)).a_ = F->sub_2613;
if (f_at_kw_283(F->up, rt_g_lit("IS", 2))) {
f_skip_294(F->up);
if (f_at_kind_287(F->up, ((rt_int)6LL))) {
f_designator_354(F->up, &F->def_name_text_2614);
(*(P169)rt_nil_check(F->p_2607)).b_ = f_nn_274(F->up, ((rt_int)5LL), f_cur_line_281(F->up));
(*(P169)rt_nil_check((*(P169)rt_nil_check(F->p_2607)).b_)).name_ = F->def_name_text_2614;
} else {
f_name_p_328(F->up, &(*(P169)rt_nil_check(F->p_2607)).b_);
}
}
f_append_278(F->up, &F->head_2608, &F->tail_2609, F->p_2607);
} else {
f_id_list_304(F->up, &F->names_2610);
f_expect_op_298(F->up, rt_g_lit(":", 1));
if (f_at_kw_283(F->up, rt_g_lit("IN", 2))) {
f_skip_294(F->up);
}
f_subtype_ind_334(F->up, &F->st_2611);
F->def_2612 = NULL;
if (f_at_op_285(F->up, rt_g_lit(":=", 2))) {
f_skip_294(F->up);
f_expr_311(F->up, &F->def_2612);
}
while ((F->names_2610 != NULL)) {
F->p_2607 = f_nn_274(F->up, ((rt_int)47LL), (*(P169)rt_nil_check(F->names_2610)).line_);
(*(P169)rt_nil_check(F->p_2607)).ival_ = ((rt_int)1LL);
(*(P169)rt_nil_check(F->p_2607)).name_ = (*(P169)rt_nil_check(F->names_2610)).name_;
(*(P169)rt_nil_check(F->p_2607)).a_ = F->st_2611;
(*(P169)rt_nil_check(F->p_2607)).b_ = F->def_2612;
f_append_278(F->up, &F->head_2608, &F->tail_2609, F->p_2607);
F->names_2610 = (*(P169)rt_nil_check(F->names_2610)).next_;
}
L_end_2617: ;
}
F->more_2615 = f_at_op_285(F->up, rt_g_lit(";", 1));
if (F->more_2615) {
f_skip_294(F->up);
}
}
L_end_2616: ;
f_expect_op_298(F->up, rt_g_lit(")", 1));
}
if ((f_at_kw_283(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_283(F->up, rt_g_lit("FUNCTION", 8)))) {
f_subprogram_356(F->up, &(*(P169)rt_nil_check(F->x_2606)).b_);
} else if (f_at_kw_283(F->up, rt_g_lit("PACKAGE", 7))) {
f_package_p_362(F->up, &(*(P169)rt_nil_check(F->x_2606)).b_);
} else if (f_at_kw_283(F->up, rt_g_lit("TASK", 4))) {
f_task_p_920(F->up, &(*(P169)rt_nil_check(F->x_2606)).b_);
} else {
f_perror_293(F->up, rt_g_lit("a generic unit is a subprogram, a package or a task", 51));
}
(*(P169)rt_nil_check(F->x_2606)).a_ = F->head_2608;
(*(P169)rt_nil_check(F->x_2606)).name_ = (*(P169)rt_nil_check((*(P169)rt_nil_check(F->x_2606)).b_)).name_;
(*F->res_1049) = F->x_2606;
ret_:

  return;
}

static void f_instantiation_1053(struct f_greenc_1fr *up_, P169 x_1051, P169 *res_1052) {
  struct f_instantiation_1053fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_1051 = x_1051;
F->res_1052 = res_1052;
F->i_2618 = NULL;
F->head_2619 = NULL;
F->tail_2620 = NULL;
F->a_2621 = NULL;
F->formal_2622 = NULL;
F->more_2624 = 1;
f_expect_kw_296(F->up, rt_g_lit("IS", 2));
f_expect_kw_296(F->up, rt_g_lit("NEW", 3));
F->i_2618 = f_nn_274(F->up, ((rt_int)53LL), (*(P169)rt_nil_check(F->x_1051)).line_);
(*(P169)rt_nil_check(F->i_2618)).name_ = (*(P169)rt_nil_check(F->x_1051)).name_;
(*(P169)rt_nil_check(F->i_2618)).ival_ = (*(P169)rt_nil_check(F->x_1051)).kind_;
f_expect_id_300(F->up, &(*(P169)rt_nil_check(F->i_2618)).tag_);
if (f_at_op_285(F->up, rt_g_lit("(", 1))) {
f_skip_294(F->up);
while (F->more_2624) {
F->formal_2622 = NULL;
F->mark_2623 = ((rt_int)0LL);
if (((f_at_kind_287(F->up, ((rt_int)1LL)) && (f_kind_at_289(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_291(F->up, ((rt_int)1LL)), rt_g_lit("IS", 2)))) {
f_expect_id_300(F->up, &F->formal_2622);
f_skip_294(F->up);
F->mark_2623 = ((rt_int)5LL);
} else if (((f_at_kind_287(F->up, ((rt_int)1LL)) && (f_kind_at_289(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && ((eq_rt_gstr(f_text_at_291(F->up, ((rt_int)1LL)), rt_g_lit(":=", 2)) || eq_rt_gstr(f_text_at_291(F->up, ((rt_int)1LL)), rt_g_lit("=:", 2))) || eq_rt_gstr(f_text_at_291(F->up, ((rt_int)1LL)), rt_g_lit(":=:", 3))))) {
f_expect_id_300(F->up, &F->formal_2622);
f_skip_294(F->up);
F->mark_2623 = ((rt_int)1LL);
}
if ((f_at_kind_287(F->up, ((rt_int)6LL)) && (F->mark_2623 == ((rt_int)5LL)))) {
F->a_2621 = f_nn_274(F->up, ((rt_int)5LL), f_cur_line_281(F->up));
f_designator_354(F->up, &(*(P169)rt_nil_check(F->a_2621)).name_);
} else {
f_expr_311(F->up, &F->a_2621);
}
(*(P169)rt_nil_check(F->a_2621)).formal_ = F->formal_2622;
(*(P169)rt_nil_check(F->a_2621)).flag_ = F->mark_2623;
f_append_278(F->up, &F->head_2619, &F->tail_2620, F->a_2621);
F->more_2624 = f_at_op_285(F->up, rt_g_lit(",", 1));
if (F->more_2624) {
f_skip_294(F->up);
}
}
L_end_2625: ;
f_expect_op_298(F->up, rt_g_lit(")", 1));
}
f_expect_op_298(F->up, rt_g_lit(";", 1));
(*(P169)rt_nil_check(F->i_2618)).a_ = F->head_2619;
(*F->res_1052) = F->i_2618;
ret_:

  return;
}

static void f_generic_decl_1055(struct f_greenc_1fr *up_, P169 e_1054) {
  struct f_generic_decl_1055fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1054 = e_1054;
F->y_2626 = NULL;
if (((*(P169)rt_nil_check(F->e_1054)).kind_ == ((rt_int)54LL))) {
F->y_2626 = f_new_sym_414(F->up, ((rt_int)11LL), (*(P169)rt_nil_check(F->e_1054)).name_);
(*(P112)rt_nil_check(F->y_2626)).decl_ = F->e_1054;
f_define_409(F->up, F->y_2626, (*(P169)rt_nil_check(F->e_1054)).line_);
} else if (((*(P169)rt_nil_check(F->e_1054)).kind_ == ((rt_int)53LL))) {
f_instantiate_1072(F->up, F->e_1054);
} else {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_1054)).line_, rt_g_lit("this declaration is not handled", 31));
}
ret_:

  return;
}

static int f_is_generic_name_1057(struct f_greenc_1fr *up_, rt_gstr n_1056) {
  struct f_is_generic_name_1057fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1056 = cp_rt_gstr(n_1056);
F->y_2627 = NULL;
F->y_2627 = f_lookup_381(F->up, F->n_1056);
F->result_ = ((F->y_2627 != NULL) && ((*(P112)rt_nil_check(F->y_2627)).kind_ == ((rt_int)11LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_attach_generic_body_1059(struct f_greenc_1fr *up_, P169 e_1058) {
  struct f_attach_generic_body_1059fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1058 = e_1058;
F->y_2628 = NULL;
F->y_2628 = f_lookup_381(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_1058)).name_)));
(*(P169)rt_nil_check((*(P112)rt_nil_check(F->y_2628)).decl_)).c_ = F->e_1058;
F->up->generic_contexts_143 = ({ R142 *cell2629 = rt_alloc(sizeof(R142)); *cell2629 = cp_R142(({ R142 ag2630; ag2630.body_node_ = F->e_1058; ag2630.visible_ = F->up->scope_stack_116; ag2630.next_ = F->up->generic_contexts_143; ag2630; })); (P141)cell2629; });
ret_:

  return;
}

static void f_restore_generic_context_1062(struct f_greenc_1fr *up_, P169 body_node_1060, rt_int line_1061) {
  struct f_restore_generic_context_1062fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->body_node_1060 = body_node_1060;
F->line_1061 = line_1061;
F->ctx_2631 = NULL;
F->ctx_2631 = F->up->generic_contexts_143;
F->m_2632 = NULL;
F->z_2633 = NULL;
while (((F->ctx_2631 != NULL) && ((*(P141)rt_nil_check(F->ctx_2631)).body_node_ != F->body_node_1060))) {
F->ctx_2631 = (*(P141)rt_nil_check(F->ctx_2631)).next_;
}
L_end_2635: ;
if ((F->ctx_2631 == NULL)) {
goto ret_;
}
F->m_2632 = (*(P141)rt_nil_check(F->ctx_2631)).visible_;
while ((F->m_2632 != NULL)) {
if ((((*(P112)rt_nil_check(F->m_2632)).level_ <= ((rt_int)0LL)) && ((*(P112)rt_nil_check(F->m_2632)).kind_ != ((rt_int)11LL)))) {
F->z_2633 = ({ A111 ix2637 = F->up->table_114; ix2637.p[rt_index(f_hash_379(F->up, (*(P135)rt_nil_check((*(P112)rt_nil_check(F->m_2632)).name_))), ix2637.lo, ix2637.hi) - ix2637.lo]; });
F->seen_2634 = 0;
while ((F->z_2633 != NULL)) {
if ((((*(P112)rt_nil_check(F->z_2633)).depth_ == F->up->depth_115) && eq_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->z_2633)).name_)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->m_2632)).name_))))) {
F->seen_2634 = 1;
}
F->z_2633 = (*(P112)rt_nil_check(F->z_2633)).chain_;
}
L_end_2638: ;
if ((!F->seen_2634)) {
f_copy_sym_878(F->up, F->m_2632, &F->z_2633);
f_define_409(F->up, F->z_2633, F->line_1061);
}
}
F->m_2632 = (*(P112)rt_nil_check(F->m_2632)).stack_;
}
L_end_2636: ;
ret_:

  return;
}

static P169 f_gactual_1066(struct f_greenc_1fr *up_, P169 args_1063, rt_int nth_1064, rt_gstr name_1065) {
  struct f_gactual_1066fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->args_1063 = args_1063;
F->nth_1064 = nth_1064;
F->name_1065 = cp_rt_gstr(name_1065);
F->a_2639 = NULL;
F->a_2639 = F->args_1063;
F->i_2640 = ((rt_int)1LL);
while ((F->a_2639 != NULL)) {
if ((((*(P169)rt_nil_check(F->a_2639)).formal_ == NULL) && (F->i_2640 == F->nth_1064))) {
F->result_ = F->a_2639;
goto ret_;
}
if ((((*(P169)rt_nil_check(F->a_2639)).formal_ != NULL) && eq_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->a_2639)).formal_)), F->name_1065))) {
F->result_ = F->a_2639;
goto ret_;
}
if (((*(P169)rt_nil_check(F->a_2639)).formal_ == NULL)) {
F->i_2640 = rt_add(F->i_2640, ((rt_int)1LL));
}
F->a_2639 = (*(P169)rt_nil_check(F->a_2639)).next_;
}
L_end_2641: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_copy_node_1070(struct f_greenc_1fr *up_, P169 n_1067, P135 name_1068, P169 *r_1069) {
  struct f_copy_node_1070fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1067 = n_1067;
F->name_1068 = name_1068;
F->r_1069 = r_1069;
(*F->r_1069) = f_nn_274(F->up, (*(P169)rt_nil_check(F->n_1067)).kind_, (*(P169)rt_nil_check(F->n_1067)).line_);
as_R170(&(*(P169)rt_nil_check((*F->r_1069))), (*(P169)rt_nil_check(F->n_1067)));
(*(P169)rt_nil_check((*F->r_1069))).name_ = F->name_1068;
(*(P169)rt_nil_check((*F->r_1069))).next_ = NULL;
ret_:

  return;
}

static void f_instantiate_1072(struct f_greenc_1fr *up_, P169 e_1071) {
  struct f_instantiate_1072fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1071 = e_1071;
F->g_2642 = NULL;
F->g_2642 = f_lookup_381(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_1071)).tag_)));
F->gd_2643 = NULL;
F->pat_2644 = NULL;
F->f_2645 = NULL;
F->a_2646 = NULL;
F->cn_2647 = NULL;
F->y_2648 = NULL;
F->z_2649 = NULL;
F->fs_2650 = NULL;
F->nth_2651 = ((rt_int)1LL);
F->t_2652 = NULL;
F->vt_2653 = NULL;
F->c_2654 = NULL;
F->v_2655 = NULL;
F->acc_2656 = NULL;
F->x_2657 = NULL;
if (((F->g_2642 == NULL) || ((*(P112)rt_nil_check(F->g_2642)).kind_ != ((rt_int)11LL)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_1071)).line_, cat_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_1071)).tag_)), rt_g_lit(" is not a generic unit", 22)));
}
F->gd_2643 = (*(P112)rt_nil_check(F->g_2642)).decl_;
F->pat_2644 = (*(P169)rt_nil_check(F->gd_2643)).b_;
f_open_scope_410(F->up);
F->f_2645 = (*(P169)rt_nil_check(F->gd_2643)).a_;
while ((F->f_2645 != NULL)) {
F->a_2646 = f_gactual_1066(F->up, (*(P169)rt_nil_check(F->e_1071)).a_, F->nth_2651, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->f_2645)).name_)));
F->nth_2651 = rt_add(F->nth_2651, ((rt_int)1LL));
if (((*(P169)rt_nil_check(F->f_2645)).ival_ == ((rt_int)10LL))) {
if (((F->a_2646 == NULL) || ((*(P169)rt_nil_check(F->a_2646)).kind_ != ((rt_int)5LL)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_1071)).line_, cat_rt_gstr(rt_g_lit("a type is required for generic parameter ", 41), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->f_2645)).name_))));
}
F->y_2648 = f_lookup_381(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->a_2646)).name_)));
if (((F->y_2648 == NULL) || ((*(P112)rt_nil_check(F->y_2648)).kind_ != ((rt_int)5LL)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_1071)).line_, cat_rt_gstr((*(P135)rt_nil_check((*(P169)rt_nil_check(F->a_2646)).name_)), rt_g_lit(" is not a type", 14)));
}
f_copy_sym_878(F->up, F->y_2648, &F->z_2649);
(*(P112)rt_nil_check(F->z_2649)).name_ = (*(P169)rt_nil_check(F->f_2645)).name_;
f_define_409(F->up, F->z_2649, (*(P169)rt_nil_check(F->e_1071)).line_);
} else if (((*(P169)rt_nil_check(F->f_2645)).ival_ == ((rt_int)11LL))) {
if ((F->a_2646 == NULL)) {
F->a_2646 = (*(P169)rt_nil_check(F->f_2645)).b_;
}
if (((F->a_2646 == NULL) || ((*(P169)rt_nil_check(F->a_2646)).kind_ != ((rt_int)5LL)))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_1071)).line_, cat_rt_gstr(rt_g_lit("a subprogram is required for generic parameter ", 47), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->f_2645)).name_))));
}
f_build_subprogram_575(F->up, (*(P169)rt_nil_check(F->f_2645)).a_, &F->fs_2650);
F->y_2648 = ({ A111 ix2660 = F->up->table_114; ix2660.p[rt_index(f_hash_379(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->a_2646)).name_))), ix2660.lo, ix2660.hi) - ix2660.lo]; });
while (((F->y_2648 != NULL) && (!(((eq_rt_gstr((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_2648)).name_)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->a_2646)).name_))) && (((*(P112)rt_nil_check(F->y_2648)).kind_ == ((rt_int)3LL)) || ((*(P112)rt_nil_check(F->y_2648)).kind_ == ((rt_int)4LL)))) && f_same_signature_406(F->up, (*(P112)rt_nil_check(F->y_2648)).params_, (*(P112)rt_nil_check(F->fs_2650)).params_)) && f_same_394(F->up, (*(P112)rt_nil_check(F->y_2648)).result_, (*(P112)rt_nil_check(F->fs_2650)).result_))))) {
F->y_2648 = (*(P112)rt_nil_check(F->y_2648)).chain_;
}
L_end_2661: ;
if ((F->y_2648 == NULL)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_1071)).line_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no subprogram ", 14), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->a_2646)).name_))), rt_g_lit(" matches generic parameter ", 27)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->f_2645)).name_))));
}
f_copy_sym_878(F->up, F->y_2648, &F->z_2649);
(*(P112)rt_nil_check(F->z_2649)).name_ = (*(P169)rt_nil_check(F->f_2645)).name_;
f_define_409(F->up, F->z_2649, (*(P169)rt_nil_check(F->e_1071)).line_);
} else {
if ((F->a_2646 == NULL)) {
F->a_2646 = (*(P169)rt_nil_check(F->f_2645)).b_;
}
if ((F->a_2646 == NULL)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_1071)).line_, cat_rt_gstr(rt_g_lit("no actual for generic parameter ", 32), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->f_2645)).name_))));
}
f_resolve_444(F->up, (*(P169)rt_nil_check(F->f_2645)).a_, &F->t_2652, &F->c_2654);
f_gexpr_688(F->up, F->a_2646, F->t_2652, &F->vt_2653, &F->v_2655);
f_check_type_423(F->up, F->vt_2653, F->t_2652, (*(P169)rt_nil_check(F->e_1071)).line_);
F->z_2649 = f_new_sym_414(F->up, ((rt_int)2LL), (*(P169)rt_nil_check(F->f_2645)).name_);
f_storage_565(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->f_2645)).name_)), F->t_2652, &F->acc_2656);
f_copy_code_550(F->up, F->t_2652, (*(P135)rt_nil_check(F->v_2655)), &F->x_2657);
f_emit_230(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P135)rt_nil_check(F->acc_2656)), rt_g_lit(" = ", 3)), (*(P135)rt_nil_check(F->x_2657))), one_rt_gstr(59)));
(*(P112)rt_nil_check(F->z_2649)).t_ = F->t_2652;
(*(P112)rt_nil_check(F->z_2649)).c_ = F->c_2654;
(*(P112)rt_nil_check(F->z_2649)).ro_ = 1;
if (((*(P117)rt_nil_check(F->t_2652)).kind_ == ((rt_int)1LL))) {
f_manifest_440(F->up, F->a_2646, &(*(P112)rt_nil_check(F->z_2649)).mvalue_, &F->ok_2658);
(*(P112)rt_nil_check(F->z_2649)).hasmv_ = F->ok_2658;
}
f_bind_568(F->up, F->z_2649, F->acc_2656);
f_define_409(F->up, F->z_2649, (*(P169)rt_nil_check(F->e_1071)).line_);
}
F->f_2645 = (*(P169)rt_nil_check(F->f_2645)).next_;
}
L_end_2659: ;
if (((*(P169)rt_nil_check(F->gd_2643)).c_ != NULL)) {
f_restore_generic_context_1062(F->up, (*(P169)rt_nil_check(F->gd_2643)).c_, (*(P169)rt_nil_check(F->e_1071)).line_);
}
if ((((*(P169)rt_nil_check(F->pat_2644)).kind_ == ((rt_int)44LL)) || ((*(P169)rt_nil_check(F->pat_2644)).kind_ == ((rt_int)45LL)))) {
if (((*(P169)rt_nil_check(F->pat_2644)).ival_ == ((rt_int)1LL))) {
if (((*(P169)rt_nil_check(F->gd_2643)).c_ == NULL)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_1071)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("the body of generic ", 20), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_1071)).tag_))), rt_g_lit(" is not given before this instantiation", 39)));
}
F->pat_2644 = (*(P169)rt_nil_check(F->gd_2643)).c_;
}
f_copy_node_1070(F->up, F->pat_2644, (*(P169)rt_nil_check(F->e_1071)).name_, &F->cn_2647);
f_build_subprogram_575(F->up, F->cn_2647, &F->y_2648);
f_define_409(F->up, F->y_2648, (*(P169)rt_nil_check(F->e_1071)).line_);
f_subprogram_body_590(F->up, F->cn_2647, F->y_2648);
} else if (((*(P169)rt_nil_check(F->pat_2644)).kind_ == ((rt_int)48LL))) {
f_copy_node_1070(F->up, F->pat_2644, (*(P169)rt_nil_check(F->e_1071)).name_, &F->cn_2647);
f_package_spec_883(F->up, F->cn_2647);
F->y_2648 = f_lookup_381(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_1071)).name_)));
if (((*(P169)rt_nil_check(F->gd_2643)).c_ != NULL)) {
f_copy_node_1070(F->up, (*(P169)rt_nil_check(F->gd_2643)).c_, (*(P169)rt_nil_check(F->e_1071)).name_, &F->cn_2647);
f_package_body_888(F->up, F->cn_2647);
}
} else {
f_copy_node_1070(F->up, F->pat_2644, (*(P169)rt_nil_check(F->e_1071)).name_, &F->cn_2647);
f_task_spec_975(F->up, F->cn_2647);
F->y_2648 = f_lookup_381(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_1071)).name_)));
if (((*(P169)rt_nil_check(F->gd_2643)).c_ == NULL)) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->e_1071)).line_, cat_rt_gstr(cat_rt_gstr(rt_g_lit("the body of generic task ", 25), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_1071)).tag_))), rt_g_lit(" is not given before this instantiation", 39)));
}
f_copy_node_1070(F->up, (*(P169)rt_nil_check(F->gd_2643)).c_, (*(P169)rt_nil_check(F->e_1071)).name_, &F->cn_2647);
f_task_body_979(F->up, F->cn_2647);
}
f_close_scope_411(F->up);
f_define_409(F->up, F->y_2648, (*(P169)rt_nil_check(F->e_1071)).line_);
ret_:

  return;
}

static void f_predef_type_1077(struct f_greenc_1fr *up_, rt_gstr name_1073, P117 t_1074, rt_gstr lo_1075, rt_gstr hi_1076) {
  struct f_predef_type_1077fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1073 = cp_rt_gstr(name_1073);
F->t_1074 = t_1074;
F->lo_1075 = cp_rt_gstr(lo_1075);
F->hi_1076 = cp_rt_gstr(hi_1076);
F->y_2662 = NULL;
F->y_2662 = f_new_sym_414(F->up, ((rt_int)5LL), f_mk_203(F->up, F->name_1073));
(*(P112)rt_nil_check(F->y_2662)).t_ = F->t_1074;
if ((({ rt_gstr at2663 = F->lo_1075; at2663.hi >= at2663.lo ? at2663.hi - at2663.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
(*(P112)rt_nil_check(F->y_2662)).c_ = f_new_cons_417(F->up);
(*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_2662)).c_)).lo_ = f_mk_203(F->up, F->lo_1075);
(*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_2662)).c_)).hi_ = f_mk_203(F->up, F->hi_1076);
if (((({ rt_gstr at2664 = F->hi_1076; at2664.hi >= at2664.lo ? at2664.hi - at2664.lo + 1 : (rt_int)0; }) < ((rt_int)12LL)) && f_is_digit_210(F->up, ({ rt_gstr ix2668 = F->hi_1076; ix2668.p[rt_index(({ rt_gstr at2667 = F->hi_1076; at2667.lo; }), ix2668.lo, ix2668.hi) - ix2668.lo]; })))) {
(*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_2662)).c_)).mlo_ = rt_int_of_str(rt_g_g2s(F->lo_1075));
(*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_2662)).c_)).mhi_ = rt_int_of_str(rt_g_g2s(F->hi_1076));
(*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_2662)).c_)).hasm_ = 1;
}
}
f_define_409(F->up, F->y_2662, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_const_1081(struct f_greenc_1fr *up_, rt_gstr name_1078, P117 t_1079, rt_gstr code_text_1080) {
  struct f_predef_const_1081fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1078 = cp_rt_gstr(name_1078);
F->t_1079 = t_1079;
F->code_text_1080 = cp_rt_gstr(code_text_1080);
F->y_2669 = NULL;
F->y_2669 = f_new_sym_414(F->up, ((rt_int)2LL), f_mk_203(F->up, F->name_1078));
(*(P112)rt_nil_check(F->y_2669)).t_ = F->t_1079;
(*(P112)rt_nil_check(F->y_2669)).ro_ = 1;
(*(P112)rt_nil_check(F->y_2669)).access_path_ = f_mk_203(F->up, F->code_text_1080);
f_define_409(F->up, F->y_2669, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_exc_1083(struct f_greenc_1fr *up_, rt_gstr name_1082) {
  struct f_predef_exc_1083fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1082 = cp_rt_gstr(name_1082);
F->y_2670 = NULL;
F->y_2670 = f_new_sym_414(F->up, ((rt_int)6LL), f_mk_203(F->up, F->name_1082));
(*(P112)rt_nil_check(F->y_2670)).cname_ = f_mk_203(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_exc(", 7), f_q_221(F->up)), F->name_1082), f_q_221(F->up)), one_rt_gstr(41)));
f_define_409(F->up, F->y_2670, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_lit_1087(struct f_greenc_1fr *up_, rt_gstr name_1084, P117 t_1085, rt_int v_1086) {
  struct f_predef_lit_1087fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1084 = cp_rt_gstr(name_1084);
F->t_1085 = t_1085;
F->v_1086 = v_1086;
F->y_2671 = NULL;
F->y_2671 = f_new_sym_414(F->up, ((rt_int)7LL), f_mk_203(F->up, F->name_1084));
(*(P112)rt_nil_check(F->y_2671)).t_ = F->t_1085;
(*(P112)rt_nil_check(F->y_2671)).result_ = F->t_1085;
(*(P112)rt_nil_check(F->y_2671)).mvalue_ = F->v_1086;
(*(P112)rt_nil_check(F->y_2671)).hasmv_ = 1;
f_define_409(F->up, F->y_2671, ((rt_int)0LL));
ret_:

  return;
}

static void f_predefine_1088(struct f_greenc_1fr *up_) {
  struct f_predefine_1088fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->control_2672 = cp_rt_gstr(cat_rt_gstr(rt_g_lit("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE ", 60), rt_g_lit("DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US ", 55)));
F->start_2673 = ((rt_int)1LL);
F->code_no_2674 = ((rt_int)0LL);
f_predef_type_1077(F->up, rt_g_lit("INTEGER", 7), F->up->ty_int_151, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1077(F->up, rt_g_lit("SHORT_INTEGER", 13), F->up->ty_short_162, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1077(F->up, rt_g_lit("LONG_INTEGER", 12), F->up->ty_long_163, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1077(F->up, rt_g_lit("NATURAL", 7), F->up->ty_int_151, rt_g_lit("1", 1), rt_g_lit("INT64_MAX", 9));
f_predef_type_1077(F->up, rt_g_lit("PRIORITY", 8), F->up->ty_int_151, rt_g_lit("0", 1), rt_g_lit("255", 3));
f_predef_type_1077(F->up, rt_g_lit("BOOLEAN", 7), F->up->ty_bool_152, rt_g_lit("0", 1), rt_g_lit("1", 1));
f_predef_type_1077(F->up, rt_g_lit("CHARACTER", 9), F->up->ty_char_154, rt_g_lit("0", 1), rt_g_lit("127", 3));
f_predef_type_1077(F->up, rt_g_lit("STRING", 6), F->up->ty_string_155, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1077(F->up, rt_g_lit("FLOAT", 5), F->up->ty_float_153, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1077(F->up, rt_g_lit("SHORT_FLOAT", 11), F->up->ty_sfloat_164, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1077(F->up, rt_g_lit("LONG_FLOAT", 10), F->up->ty_lfloat_165, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1077(F->up, rt_g_lit("TIME", 4), F->up->ty_time_166, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_lit_1087(F->up, rt_g_lit("FALSE", 5), F->up->ty_bool_152, ((rt_int)0LL));
f_predef_lit_1087(F->up, rt_g_lit("TRUE", 4), F->up->ty_bool_152, ((rt_int)1LL));
{ rt_int lo2678 = ((rt_int)1LL), hi2679 = ({ rt_gstr at2676 = F->control_2672; at2676.hi >= at2676.lo ? at2676.hi - at2676.lo + 1 : (rt_int)0; });
for (rt_int it2680 = lo2678; it2680 <= hi2679; it2680++) {
F->i_2677 = it2680;
if ((({ rt_gstr ix2681 = F->control_2672; ix2681.p[rt_index(F->i_2677, ix2681.lo, ix2681.hi) - ix2681.lo]; }) == 32)) {
f_predef_const_1081(F->up, ({ rt_gstr sl2683 = F->control_2672; rt_int l_ = F->start_2673, h_ = rt_sub(F->i_2677, ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl2683.lo, sl2683.hi); rt_index(h_, sl2683.lo, sl2683.hi); } sl2683.p += l_ - sl2683.lo; sl2683.lo = l_; sl2683.hi = h_; sl2683; }), F->up->ty_char_154, rt_g_s2g(rt_str_of_int(F->code_no_2674)));
F->code_no_2674 = rt_add(F->code_no_2674, ((rt_int)1LL));
F->start_2673 = rt_add(F->i_2677, ((rt_int)1LL));
}
}
}
L_end_2675: ;
f_predef_const_1081(F->up, rt_g_lit("DEL", 3), F->up->ty_char_154, rt_g_lit("127", 3));
f_predef_const_1081(F->up, rt_g_lit("EXCLAM", 6), F->up->ty_char_154, rt_g_lit("33", 2));
f_predef_const_1081(F->up, rt_g_lit("DOLLAR", 6), F->up->ty_char_154, rt_g_lit("36", 2));
f_predef_const_1081(F->up, rt_g_lit("QUESTION", 8), F->up->ty_char_154, rt_g_lit("63", 2));
f_predef_const_1081(F->up, rt_g_lit("AT_SIGN", 7), F->up->ty_char_154, rt_g_lit("64", 2));
f_predef_const_1081(F->up, rt_g_lit("L_BRACKET", 9), F->up->ty_char_154, rt_g_lit("91", 2));
f_predef_const_1081(F->up, rt_g_lit("BACK_SLASH", 10), F->up->ty_char_154, rt_g_lit("92", 2));
f_predef_const_1081(F->up, rt_g_lit("R_BRACKET", 9), F->up->ty_char_154, rt_g_lit("93", 2));
f_predef_const_1081(F->up, rt_g_lit("CIRCUMFLEX", 10), F->up->ty_char_154, rt_g_lit("94", 2));
f_predef_const_1081(F->up, rt_g_lit("GRAVE", 5), F->up->ty_char_154, rt_g_lit("96", 2));
f_predef_const_1081(F->up, rt_g_lit("L_BRACE", 7), F->up->ty_char_154, rt_g_lit("123", 3));
f_predef_const_1081(F->up, rt_g_lit("R_BRACE", 7), F->up->ty_char_154, rt_g_lit("125", 3));
f_predef_const_1081(F->up, rt_g_lit("TILDE", 5), F->up->ty_char_154, rt_g_lit("126", 3));
{ rt_int lo2686 = ((rt_int)0LL), hi2687 = ((rt_int)25LL);
for (rt_int it2688 = lo2686; it2688 <= hi2687; it2688++) {
F->i_2685 = it2688;
f_predef_const_1081(F->up, cat_rt_gstr(rt_g_lit("LC_", 3), one_rt_gstr(rt_range((rt_add(((rt_int)66LL), F->i_2685) - 1), 0, 127))), F->up->ty_char_154, rt_g_s2g(rt_str_of_int(rt_add(((rt_int)97LL), F->i_2685))));
}
}
L_end_2684: ;
f_predef_const_1081(F->up, rt_g_lit("NEWLINE", 7), F->up->ty_string_155, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_lit(", 9), f_q_221(F->up)), rt_g_lit("\\n", 2)), f_q_221(F->up)), rt_g_lit(", 1)", 4)));
f_predef_const_1081(F->up, rt_g_lit("SECONDS", 7), F->up->ty_time_166, rt_g_lit("((double)RT_SECONDS)", 20));
f_predef_exc_1083(F->up, rt_g_lit("ACCESS_ERROR", 12));
f_predef_exc_1083(F->up, rt_g_lit("ASSERT_ERROR", 12));
f_predef_exc_1083(F->up, rt_g_lit("DISCRIMINANT_ERROR", 18));
f_predef_exc_1083(F->up, rt_g_lit("DIVIDE_ERROR", 12));
f_predef_exc_1083(F->up, rt_g_lit("FAILURE", 7));
f_predef_exc_1083(F->up, rt_g_lit("INDEX_ERROR", 11));
f_predef_exc_1083(F->up, rt_g_lit("INITIATE_ERROR", 14));
f_predef_exc_1083(F->up, rt_g_lit("NO_VALUE_ERROR", 14));
f_predef_exc_1083(F->up, rt_g_lit("OVERFLOW", 8));
f_predef_exc_1083(F->up, rt_g_lit("OVERLAP_ERROR", 13));
f_predef_exc_1083(F->up, rt_g_lit("RANGE_ERROR", 11));
f_predef_exc_1083(F->up, rt_g_lit("SELECT_ERROR", 12));
f_predef_exc_1083(F->up, rt_g_lit("STORAGE_OVERFLOW", 16));
f_predef_exc_1083(F->up, rt_g_lit("TASKING_ERROR", 13));
f_predef_exc_1083(F->up, rt_g_lit("UNDERFLOW", 9));
f_predef_exc_1083(F->up, rt_g_lit("END_OF_FILE", 11));
ret_:

  return;
}

static void f_translate_1090(struct f_greenc_1fr *up_, P169 u_1089) {
  struct f_translate_1090fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->u_1089 = u_1089;
F->p_2689 = NULL;
F->p_2689 = F->u_1089;
F->y_2690 = NULL;
f_open_scope_410(F->up);
while ((F->p_2689 != NULL)) {
if (((*(P169)rt_nil_check(F->p_2689)).next_ == NULL)) {
if ((((*(P169)rt_nil_check(F->p_2689)).kind_ != ((rt_int)44LL)) || ((*(P169)rt_nil_check(F->p_2689)).a_ != NULL))) {
f_fail_224(F->up, (*(P169)rt_nil_check(F->p_2689)).line_, rt_g_lit("the main program is a procedure without parameters", 50));
}
f_build_subprogram_575(F->up, F->p_2689, &F->y_2690);
f_define_409(F->up, F->y_2690, (*(P169)rt_nil_check(F->p_2689)).line_);
f_subprogram_body_590(F->up, F->p_2689, F->y_2690);
F->up->main_name_197 = (*(P112)rt_nil_check(F->y_2690)).cname_;
} else {
f_decl_element_579(F->up, F->p_2689);
}
F->p_2689 = (*(P169)rt_nil_check(F->p_2689)).next_;
}
L_end_2691: ;
ret_:

  return;
}

static void f_print_program_1091(struct f_greenc_1fr *up_) {
  struct f_print_program_1091fr *F = rt_alloc(sizeof *F);
F->up = up_;
f_emit_helpers_559(F->up);
rt_g_put(rt_g_g2s(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("#include ", 9), f_q_221(F->up)), rt_g_lit("paleo.h", 7)), f_q_221(F->up))));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
rt_g_put(rt_g_g2s(rt_g_lit("#include <math.h>", 17)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
f_print_buffer_232(F->up, F->up->out_types_123);
f_print_buffer_232(F->up, F->up->out_frames_124);
f_print_buffer_232(F->up, F->up->out_helpers_125);
f_print_buffer_232(F->up, F->up->out_protos_126);
f_print_buffer_232(F->up, F->up->out_globals_127);
f_print_buffer_232(F->up, F->up->out_funcs_128);
rt_g_put(rt_g_g2s(rt_g_lit("int main(int argc, char **argv) {", 33)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
rt_g_put(rt_g_g2s(rt_g_lit("  rt_init(argc, argv);", 22)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
rt_g_put(rt_g_g2s(rt_g_lit("  rt_set_lang(1);", 17)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
f_print_buffer_232(F->up, F->up->out_excs_130);
f_print_buffer_232(F->up, F->up->out_init_129);
rt_g_put(rt_g_g2s(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P135)rt_nil_check(F->up->main_name_197))), rt_g_lit("();", 3))));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
f_print_buffer_232(F->up, F->up->out_awaits_185);
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
F->toks_107.lo = ((rt_int)1LL); F->toks_107.hi = ((rt_int)1000000LL);
F->toks_107.lo2 = 1; F->toks_107.hi2 = 1;
F->toks_107.p = rt_alloc(sizeof(P105) * (size_t)G_CNT(F->toks_107));
F->ntoks_108 = ((rt_int)0LL);
F->tpos_109 = ((rt_int)1LL);
F->src_line_110 = ((rt_int)0LL);
F->table_114.lo = ((rt_int)0LL); F->table_114.hi = ((rt_int)4092LL);
F->table_114.lo2 = 1; F->table_114.hi2 = 1;
F->table_114.p = rt_alloc(sizeof(P112) * (size_t)G_CNT(F->table_114));
F->depth_115 = ((rt_int)0LL);
F->scope_stack_116 = NULL;
F->all_types_119 = NULL;
F->serial_120 = ((rt_int)0LL);
F->out_types_123 = NULL;
F->out_frames_124 = NULL;
F->out_helpers_125 = NULL;
F->out_protos_126 = NULL;
F->out_globals_127 = NULL;
F->out_funcs_128 = NULL;
F->out_init_129 = NULL;
F->out_excs_130 = NULL;
F->code_131 = NULL;
F->fields_buf_132 = NULL;
F->in_func_133 = 0;
F->cur_level_134 = ((rt_int)0LL);
F->st_field_136 = NULL;
F->func_sym_137 = NULL;
F->exits_140 = NULL;
F->generic_contexts_143 = NULL;
F->accept_exits_144 = NULL;
F->frames_145 = ((rt_int)0LL);
F->handlers_148 = NULL;
F->cleanups_149 = NULL;
F->trial_150 = ((rt_int)0LL);
F->ty_int_151 = NULL;
F->ty_bool_152 = NULL;
F->ty_float_153 = NULL;
F->ty_char_154 = NULL;
F->ty_string_155 = NULL;
F->ty_void_156 = NULL;
F->ty_nil_157 = NULL;
F->ty_univ_158 = NULL;
F->ty_act_159 = NULL;
F->ty_tdecl_160 = NULL;
F->ty_entry_161 = NULL;
F->ty_short_162 = NULL;
F->ty_long_163 = NULL;
F->ty_sfloat_164 = NULL;
F->ty_lfloat_165 = NULL;
F->ty_time_166 = NULL;
F->ty_ufixed_167 = NULL;
F->completing_168 = NULL;
F->anon_node_171 = NULL;
F->anon_typ_172 = NULL;
F->anon_cons_175 = NULL;
F->agg_bounds_176 = NULL;
F->disc_syms_177 = NULL;
F->cur_task_178 = NULL;
F->accept_depth_179 = ((rt_int)0LL);
F->famarg_done_180 = 0;
F->fam_ix_181 = NULL;
F->call_task_ix_182 = NULL;
F->saw_interface_183 = 0;
F->defer_entry_structs_184 = 0;
F->out_awaits_185 = NULL;
F->no_cons_186 = NULL;
F->units_187 = NULL;
F->pkg_stack_188 = NULL;
F->cur_pkg_189 = NULL;
F->prefix_hint_190 = NULL;
F->call_want_191 = NULL;
F->pure_sym_192 = NULL;
F->pure_depth_193 = ((rt_int)0LL);
F->vrp_ok_194 = 0;
F->in_lv_path_195 = 0;
F->last_deref_196 = 0;
F->main_name_197 = NULL;
F->conf_system_198 = NULL;
F->conf_storage_unit_199 = ((rt_int)8LL);
F->conf_memory_size_200 = ((rt_int)1048576LL);
F->conf_optimize_201 = NULL;
F->out_types_123 = f_new_buffer_225(F);
F->out_frames_124 = f_new_buffer_225(F);
F->out_helpers_125 = f_new_buffer_225(F);
F->out_protos_126 = f_new_buffer_225(F);
F->out_globals_127 = f_new_buffer_225(F);
F->out_funcs_128 = f_new_buffer_225(F);
F->out_init_129 = f_new_buffer_225(F);
F->out_excs_130 = f_new_buffer_225(F);
F->code_131 = F->out_init_129;
F->no_cons_186 = f_new_cons_417(F);
F->ty_int_151 = f_new_typ_416(F, ((rt_int)1LL));
F->ty_bool_152 = f_new_typ_416(F, ((rt_int)2LL));
F->ty_float_153 = f_new_typ_416(F, ((rt_int)3LL));
F->ty_char_154 = f_new_typ_416(F, ((rt_int)11LL));
F->ty_string_155 = f_new_typ_416(F, ((rt_int)6LL));
(*(P117)rt_nil_check(F->ty_string_155)).name_ = f_mk_203(F, rt_g_lit("STRING", 6));
(*(P117)rt_nil_check(F->ty_string_155)).cname_ = f_mk_203(F, rt_g_lit("rt_gstr", 7));
(*(P117)rt_nil_check(F->ty_string_155)).dims_ = ((rt_int)1LL);
(*(P117)rt_nil_check(F->ty_string_155)).elem_ = F->ty_char_154;
(*(P117)rt_nil_check(F->ty_string_155)).tcons_ = f_new_cons_417(F);
(*(P173)rt_nil_check((*(P117)rt_nil_check(F->ty_string_155)).tcons_)).lo_ = f_mk_203(F, rt_g_lit("1", 1));
F->ty_void_156 = f_new_typ_416(F, ((rt_int)9LL));
F->ty_nil_157 = f_new_typ_416(F, ((rt_int)10LL));
F->ty_act_159 = f_new_typ_416(F, ((rt_int)13LL));
F->ty_tdecl_160 = f_new_typ_416(F, ((rt_int)14LL));
F->ty_entry_161 = f_new_typ_416(F, ((rt_int)15LL));
(*(P117)rt_nil_check(F->ty_int_151)).name_ = f_mk_203(F, rt_g_lit("INTEGER", 7));
(*(P117)rt_nil_check(F->ty_string_155)).idx_ = F->ty_int_151;
(*(P117)rt_nil_check(F->ty_string_155)).next_ = F->all_types_119;
F->all_types_119 = F->ty_string_155;
(*(P117)rt_nil_check(F->ty_float_153)).name_ = f_mk_203(F, rt_g_lit("FLOAT", 5));
(*(P117)rt_nil_check(F->ty_float_153)).ndigits_ = ((rt_int)15LL);
F->ty_short_162 = f_new_typ_416(F, ((rt_int)1LL));
(*(P117)rt_nil_check(F->ty_short_162)).name_ = f_mk_203(F, rt_g_lit("SHORT_INTEGER", 13));
F->ty_long_163 = f_new_typ_416(F, ((rt_int)1LL));
(*(P117)rt_nil_check(F->ty_long_163)).name_ = f_mk_203(F, rt_g_lit("LONG_INTEGER", 12));
F->ty_sfloat_164 = f_new_typ_416(F, ((rt_int)3LL));
(*(P117)rt_nil_check(F->ty_sfloat_164)).name_ = f_mk_203(F, rt_g_lit("SHORT_FLOAT", 11));
(*(P117)rt_nil_check(F->ty_sfloat_164)).ndigits_ = ((rt_int)6LL);
F->ty_lfloat_165 = f_new_typ_416(F, ((rt_int)3LL));
(*(P117)rt_nil_check(F->ty_lfloat_165)).name_ = f_mk_203(F, rt_g_lit("LONG_FLOAT", 10));
(*(P117)rt_nil_check(F->ty_lfloat_165)).ndigits_ = ((rt_int)15LL);
F->ty_time_166 = f_new_typ_416(F, ((rt_int)3LL));
(*(P117)rt_nil_check(F->ty_time_166)).name_ = f_mk_203(F, rt_g_lit("TIME", 4));
(*(P117)rt_nil_check(F->ty_time_166)).ndigits_ = ((rt_int)15LL);
F->ty_ufixed_167 = f_new_typ_416(F, ((rt_int)16LL));
(*(P117)rt_nil_check(F->ty_ufixed_167)).name_ = f_mk_203(F, rt_g_lit("universal fixed", 15));
F->out_awaits_185 = f_new_buffer_225(F);
f_predefine_1088(F);
f_read_source_271(F);
f_compilation_377(F, &F->units_187);
if ((F->units_187 == NULL)) {
f_fail_224(F, ((rt_int)1LL), rt_g_lit("the compilation is empty", 24));
}
f_translate_1090(F, F->units_187);
f_print_program_1091(F);
ret_:

  return;
}

static void as_A2178(A2178 *d, A2178 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2178 cp_A2178(A2178 s) {
  A2178 d = s; d.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2178(A2178 a, A2178 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2178 cat_A2178(A2178 a, A2178 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2178 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2178 one_A2178(rt_int e) {
  A2178 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int)); r.p[0] = e;
  return r;
}
static void as_A2176(A2176 *d, A2176 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2176 cp_A2176(A2176 s) {
  A2176 d = s; d.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2176(A2176 a, A2176 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2176 cat_A2176(A2176 a, A2176 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2176 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2176 one_A2176(rt_int e) {
  A2176 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int)); r.p[0] = e;
  return r;
}
static void as_A2173(A2173 *d, A2173 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2173 cp_A2173(A2173 s) {
  A2173 d = s; d.p = rt_alloc(sizeof(int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2173(A2173 a, A2173 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2173 cat_A2173(A2173 a, A2173 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2173 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2173 one_A2173(int e) {
  A2173 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(int)); r.p[0] = e;
  return r;
}
static void as_R1725(R1725 *d, R1725 s) {
  d->disc_ = s.disc_;
  d->arm_ = s.arm_;
  d->variant_ = s.variant_;
  d->next_ = s.next_;
}
static R1725 cp_R1725(R1725 s) {
  R1725 d = s;
  d.disc_ = s.disc_;
  d.arm_ = s.arm_;
  d.variant_ = s.variant_;
  d.next_ = s.next_;
  return d;
}
static int eq_R1725(R1725 a, R1725 b) {
  return 1 && (a.disc_ == b.disc_) && (a.arm_ == b.arm_) && (a.variant_ == b.variant_) && (a.next_ == b.next_);
}
static void as_R1605(R1605 *d, R1605 s) {
  d->name_ = s.name_;
  d->v_ = s.v_;
  d->next_ = s.next_;
}
static R1605 cp_R1605(R1605 s) {
  R1605 d = s;
  d.name_ = s.name_;
  d.v_ = s.v_;
  d.next_ = s.next_;
  return d;
}
static int eq_R1605(R1605 a, R1605 b) {
  return 1 && (a.name_ == b.name_) && (a.v_ == b.v_) && (a.next_ == b.next_);
}
static void as_R1601(R1601 *d, R1601 s) {
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
static R1601 cp_R1601(R1601 s) {
  R1601 d = s;
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
static int eq_R1601(R1601 a, R1601 b) {
  return 1 && (a.name_ == b.name_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.next_ == b.next_) && (a.dflt_ == b.dflt_) && (a.is_const_ == b.is_const_) && (a.is_discr_ == b.is_discr_) && (a.dsym_ == b.dsym_) && (a.guard_ == b.guard_) && (a.cond_ == b.cond_) && (a.dyn_ == b.dyn_);
}
static void as_R1586(R1586 *d, R1586 s) {
  d->name_ = s.name_;
  d->mode_ = s.mode_;
  d->t_ = s.t_;
  d->c_ = s.c_;
  d->cfield_ = s.cfield_;
  d->dflt_ = s.dflt_;
  d->next_ = s.next_;
}
static R1586 cp_R1586(R1586 s) {
  R1586 d = s;
  d.name_ = s.name_;
  d.mode_ = s.mode_;
  d.t_ = s.t_;
  d.c_ = s.c_;
  d.cfield_ = s.cfield_;
  d.dflt_ = s.dflt_;
  d.next_ = s.next_;
  return d;
}
static int eq_R1586(R1586 a, R1586 b) {
  return 1 && (a.name_ == b.name_) && (a.mode_ == b.mode_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.cfield_ == b.cfield_) && (a.dflt_ == b.dflt_) && (a.next_ == b.next_);
}
static void as_R174(R174 *d, R174 s) {
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
static R174 cp_R174(R174 s) {
  R174 d = s;
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
static int eq_R174(R174 a, R174 b) {
  return 1 && (a.lo_ == b.lo_) && (a.hi_ == b.hi_) && (a.slen_ == b.slen_) && (a.mlo_ == b.mlo_) && (a.mhi_ == b.mhi_) && (a.hasm_ == b.hasm_) && (a.lo2_ == b.lo2_) && (a.hi2_ == b.hi2_) && (a.acc_ == b.acc_) && (a.inner_ == b.inner_) && (a.dv_ == b.dv_);
}
static void as_R170(R170 *d, R170 s) {
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
static R170 cp_R170(R170 s) {
  R170 d = s;
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
static int eq_R170(R170 a, R170 b) {
  return 1 && (a.kind_ == b.kind_) && (a.line_ == b.line_) && (a.ival_ == b.ival_) && (a.flag_ == b.flag_) && (a.name_ == b.name_) && (a.tag_ == b.tag_) && (a.a_ == b.a_) && (a.b_ == b.b_) && (a.c_ == b.c_) && (a.d_ == b.d_) && (a.e_ == b.e_) && (a.next_ == b.next_) && (a.formal_ == b.formal_);
}
static void as_R147(R147 *d, R147 s) {
  d->s_ = s.s_;
  d->next_ = s.next_;
}
static R147 cp_R147(R147 s) {
  R147 d = s;
  d.s_ = s.s_;
  d.next_ = s.next_;
  return d;
}
static int eq_R147(R147 a, R147 b) {
  return 1 && (a.s_ == b.s_) && (a.next_ == b.next_);
}
static void as_R142(R142 *d, R142 s) {
  d->body_node_ = s.body_node_;
  d->visible_ = s.visible_;
  d->next_ = s.next_;
}
static R142 cp_R142(R142 s) {
  R142 d = s;
  d.body_node_ = s.body_node_;
  d.visible_ = s.visible_;
  d.next_ = s.next_;
  return d;
}
static int eq_R142(R142 a, R142 b) {
  return 1 && (a.body_node_ == b.body_node_) && (a.visible_ == b.visible_) && (a.next_ == b.next_);
}
static void as_R139(R139 *d, R139 s) {
  d->match_ = s.match_;
  d->label_ = s.label_;
  d->depth_ = s.depth_;
  d->is_loop_ = s.is_loop_;
  d->next_ = s.next_;
}
static R139 cp_R139(R139 s) {
  R139 d = s;
  d.match_ = s.match_;
  d.label_ = s.label_;
  d.depth_ = s.depth_;
  d.is_loop_ = s.is_loop_;
  d.next_ = s.next_;
  return d;
}
static int eq_R139(R139 a, R139 b) {
  return 1 && (a.match_ == b.match_) && (a.label_ == b.label_) && (a.depth_ == b.depth_) && (a.is_loop_ == b.is_loop_) && (a.next_ == b.next_);
}
static void as_R122(R122 *d, R122 s) {
  d->head_ = s.head_;
  d->tail_ = s.tail_;
}
static R122 cp_R122(R122 s) {
  R122 d = s;
  d.head_ = s.head_;
  d.tail_ = s.tail_;
  return d;
}
static int eq_R122(R122 a, R122 b) {
  return 1 && (a.head_ == b.head_) && (a.tail_ == b.tail_);
}
static void as_R118(R118 *d, R118 s) {
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
static R118 cp_R118(R118 s) {
  R118 d = s;
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
static int eq_R118(R118 a, R118 b) {
  return 1 && (a.kind_ == b.kind_) && (a.name_ == b.name_) && (a.lits_ == b.lits_) && (a.elem_ == b.elem_) && (a.idx_ == b.idx_) && (a.elemcons_ == b.elemcons_) && (a.tcons_ == b.tcons_) && (a.fields_ == b.fields_) && (a.target_ == b.target_) && (a.decl_ == b.decl_) && (a.cname_ == b.cname_) && (a.forward_ == b.forward_) && (a.defined_ == b.defined_) && (a.priv_ == b.priv_) && (a.next_ == b.next_) && (a.idx2_ == b.idx2_) && (a.littab_ == b.littab_) && (a.parent_ == b.parent_) && (a.ndigits_ == b.ndigits_) && (a.fdelta_ == b.fdelta_) && (a.fsmall_ == b.fsmall_) && (a.dims_ == b.dims_) && (a.is_restricted_ == b.is_restricted_);
}
static void as_R113(R113 *d, R113 s) {
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
}
static R113 cp_R113(R113 s) {
  R113 d = s;
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
  return d;
}
static int eq_R113(R113 a, R113 b) {
  return 1 && (a.kind_ == b.kind_) && (a.name_ == b.name_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.access_path_ == b.access_path_) && (a.cname_ == b.cname_) && (a.ro_ == b.ro_) && (a.mvalue_ == b.mvalue_) && (a.hasmv_ == b.hasmv_) && (a.decl_ == b.decl_) && (a.params_ == b.params_) && (a.result_ == b.result_) && (a.depth_ == b.depth_) && (a.level_ == b.level_) && (a.byref_ == b.byref_) && (a.vrp_ == b.vrp_) && (a.hidden_ == b.hidden_) && (a.from_use_ == b.from_use_) && (a.members_ == b.members_) && (a.mnext_ == b.mnext_) && (a.chain_ == b.chain_) && (a.stack_ == b.stack_);
}
static void as_A111(A111 *d, A111 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A111 cp_A111(A111 s) {
  A111 d = s; d.p = rt_alloc(sizeof(P112) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A111(A111 a, A111 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A111 cat_A111(A111 a, A111 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A111 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(P112) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A111 one_A111(P112 e) {
  A111 r; r.lo = r.hi = 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(P112)); r.p[0] = e;
  return r;
}
static void as_R106(R106 *d, R106 s) {
  d->kind_ = s.kind_;
  d->line_ = s.line_;
  d->ival_ = s.ival_;
  d->s_ = s.s_;
}
static R106 cp_R106(R106 s) {
  R106 d = s;
  d.kind_ = s.kind_;
  d.line_ = s.line_;
  d.ival_ = s.ival_;
  d.s_ = s.s_;
  return d;
}
static int eq_R106(R106 a, R106 b) {
  return 1 && (a.kind_ == b.kind_) && (a.line_ == b.line_) && (a.ival_ == b.ival_) && (a.s_ == b.s_);
}
static void as_A104(A104 *d, A104 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A104 cp_A104(A104 s) {
  A104 d = s; d.p = rt_alloc(sizeof(P105) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A104(A104 a, A104 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A104 cat_A104(A104 a, A104 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A104 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(P105) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A104 one_A104(P105 e) {
  A104 r; r.lo = r.hi = 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(P105)); r.p[0] = e;
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
  ex_compile_error_103 = rt_exc("COMPILE_ERROR");
  f_greenc_1();
  rt_main_done();
  return 0;
}
