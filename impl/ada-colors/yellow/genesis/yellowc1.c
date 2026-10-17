#include "paleo.h"
#include <math.h>
#include <string.h>
#include <stdlib.h>
typedef struct yR95 yR95;
typedef struct yR100 yR100;
typedef struct yR105 yR105;
typedef struct yR110 yR110;
typedef struct yR115 yR115;
typedef struct yR120 yR120;
typedef struct yR125 yR125;
typedef struct yR130 yR130;
struct yf961;
struct yf967;
struct yf973;
struct yf979;
struct yf984;
struct yf990;
struct yf997;
struct yf1003;
struct yf1009;
struct yf1014;
struct yf1021;
struct yf1028;
struct yf1034;
struct yf1041;
struct yf1048;
struct yf1056;
struct yf1063;
struct yf1070;
struct yf1078;
struct yf1085;
struct yf1091;
struct yf1098;
struct yf1104;
struct yf1110;
struct yf1117;
struct yf1125;
struct yf1134;
struct yf1139;
struct yf1146;
struct yf1175;
struct yf1180;
struct yf1187;
struct yf1193;
struct yf1198;
struct yf1204;
struct yf1211;
struct yf1217;
struct yf1222;
struct yf1227;
struct yf1245;
struct yf1253;
struct yf1259;
struct yf1264;
struct yf1269;
struct yf1274;
struct yf1281;
struct yf1287;
struct yf1293;
struct yf1298;
struct yf1304;
struct yf1309;
struct yf1315;
struct yf1320;
struct yf1327;
struct yf1332;
struct yf1338;
struct yf1343;
struct yf1348;
struct yf1353;
struct yf1358;
struct yf1363;
struct yf1368;
struct yf1374;
struct yf1380;
struct yf1387;
struct yf1392;
struct yf1398;
struct yf1403;
struct yf1409;
struct yf1414;
struct yf1419;
struct yf1424;
struct yf1429;
struct yf1434;
struct yf1439;
struct yf1444;
struct yf1450;
struct yf1455;
struct yf1460;
struct yf1466;
struct yf1472;
struct yf1478;
struct yf1484;
struct yf1490;
struct yf1499;
struct yf1506;
struct yf1511;
struct yf1516;
struct yf1521;
struct yf1527;
struct yf1532;
struct yf1537;
struct yf1542;
struct yf1547;
struct yf1552;
struct yf1588;
struct yf1594;
struct yf1599;
struct yf1605;
struct yf1611;
struct yf1617;
struct yf1624;
struct yf1630;
struct yf1637;
struct yf1644;
struct yf1651;
struct yf1657;
struct yf1664;
struct yf1670;
struct yf1676;
struct yf1707;
struct yf1713;
struct yf1719;
struct yf1725;
struct yf1731;
struct yf1737;
struct yf1743;
struct yf1749;
struct yf1755;
struct yf1761;
struct yf1768;
struct yf1776;
struct yf1784;
struct yf1791;
struct yf1798;
struct yf1804;
struct yf1812;
struct yf1818;
struct yf1826;
struct yf1833;
struct yf1838;
struct yf1844;
struct yf1857;
struct yf1868;
struct yf1876;
struct yf1883;
struct yf2001;
struct yf2008;
struct yf2016;
struct yf2025;
struct yf2033;
struct yf2041;
struct yf2051;
struct yf2057;
struct yf2065;
struct yf2071;
struct yf2078;
struct yf2084;
struct yf2093;
struct yf2101;
struct yf2110;
struct yf2118;
struct yf2128;
struct yf2134;
struct yf2143;
struct yf2152;
struct yf2161;
struct yf2167;
struct yf2176;
struct yf2213;
struct yf2221;
struct yf2227;
struct yf2236;
struct yf2245;
struct yf2256;
struct yf2266;
struct yf2275;
struct yf2283;
struct yf2361;
struct yf2371;
struct yf2377;
struct yf2382;
struct yf2388;
struct yf2394;
struct yf2400;
struct yf2406;
struct yf2413;
struct yf2418;
struct yf2424;
struct yf2430;
struct yf2438;
struct yf2444;
struct yf2450;
struct yf2456;
struct yf2462;
struct yf2468;
struct yf2475;
struct yf2482;
struct yf2488;
struct yf2496;
struct yf2502;
struct yf2509;
struct yf2515;
struct yf2533;
struct yf2541;
struct yf2549;
struct yf2556;
struct yf2562;
struct yf2568;
struct yf2574;
struct yf2580;
struct yf2585;
struct yf2592;
struct yf2598;
struct yf2604;
struct yf2609;
struct yf2615;
struct yf2622;
struct yf2629;
struct yf2636;
struct yf2643;
struct yf2651;
struct yf2657;
struct yf2666;
struct yf2674;
struct yf2680;
struct yf2686;
struct yf2696;
struct yf2708;
struct yf2716;
struct yf2726;
struct yf2734;
struct yf2739;
struct yf2744;
struct yf2749;
struct yR95 { rt_int f_kind; rt_int f_line; rt_int f_ival; rt_int f_flag; rt_int f_name; rt_int f_text; void * f_a; void * f_b; void * f_c; void * f_d; void * f_e; void * f_next; void * f_rep; void * f_sym; };
struct yR100 { rt_int f_kind; rt_int f_tid; rt_int f_tname; rt_int f_lo; rt_int f_hi; rt_int f_mlo; rt_int f_mhi; rt_int f_hasm; rt_int f_scale; rt_int f_prec; void * f_elem; void * f_idx; rt_int f_nidx; void * f_link; void * f_lits; rt_int f_nlits; void * f_fields; void * f_selector; rt_int f_cname; rt_int f_dname; rt_int f_dlevel; rt_int f_deep; rt_int f_abstract; rt_int f_opaque; rt_int f_ordered; rt_int f_forward; rt_int f_fwdscope; void * f_monitor; rt_int f_serial; };
struct yR105 { rt_int f_name; void * f_rep; rt_int f_isconst; rt_int f_variant; void * f_labels; void * f_next; };
struct yR110 { rt_int f_name; rt_int f_cls; void * f_rep; rt_int f_cname; void * f_next; };
struct yR115 { rt_int f_kind; rt_int f_name; void * f_rep; rt_int f_cname; rt_int f_level; rt_int f_byref; rt_int f_readonly; rt_int f_mval; rt_int f_hasmv; void * f_params; rt_int f_nparams; void * f_ret; rt_int f_func; void * f_decl; rt_int f_depth; void * f_target; void * f_members; void * f_mnext; void * f_chain; void * f_stack; void * f_alt; void * f_monitor; rt_int f_serial; };
struct yR120 { void * f_syms; rt_int f_closed; void * f_module; rt_int f_level; void * f_deferred; void * f_up; };
struct yR125 { rt_int f_t; void * f_next; };
struct yR130 { void * f_head; void * f_tail; };
struct yf961 { void *up;
rt_int v2753;
rt_int c_2756;
};
struct yf967 { void *up;
unsigned char p966;
};
struct yf973 { void *up;
unsigned char p972;
};
struct yf979 { void *up;
unsigned char p978;
};
struct yf984 { void *up;
};
struct yf990 { void *up;
unsigned char p989;
};
struct yf997 { void *up;
yarr p996;
rt_int c_2793;
};
struct yf1003 { void *up;
rt_int p1002;
rt_int v2799;
};
struct yf1009 { void *up;
rt_int p1008;
ydesc yd_2812;
yarr v2814;
rt_int v2816;
rt_int v2819;
};
struct yf1014 { void *up;
rt_int v2838;
rt_int c_2850;
};
struct yf1021 { void *up;
yarr p1020;
};
struct yf1028 { void *up;
rt_int p1026;
rt_int p1027;
rt_int v2861;
rt_int v2864;
rt_int v2866;
rt_int c_2872;
rt_int c_2891;
};
struct yf1034 { void *up;
rt_int p1033;
};
struct yf1041 { void *up;
yarr p1040;
};
struct yf1048 { void *up;
rt_int p1046;
rt_int p1047;
rt_int c_2920;
};
struct yf1056 { void *up;
rt_int p1053;
yarr p1055;
rt_int v2933;
rt_int c_2950;
};
struct yf1063 { void *up;
rt_int p1061;
rt_int p1062;
};
struct yf1070 { void *up;
yR130 * p1068;
rt_int p1069;
void * v2971;
};
struct yf1078 { void *up;
yR130 * p1075;
yarr p1077;
};
struct yf1085 { void *up;
yR130 * p1083;
yR130 * p1084;
};
struct yf1091 { void *up;
rt_int p1090;
};
struct yf1098 { void *up;
yarr p1097;
};
struct yf1104 { void *up;
rt_int p1103;
rt_int v2985;
};
struct yf1110 { void *up;
yR130 p1109;
void * v2992;
};
struct yf1117 { void *up;
rt_int p1115;
rt_int p1116;
rt_int v2998;
};
struct yf1125 { void *up;
rt_int p1122;
yarr p1124;
};
struct yf1134 { void *up;
rt_int p1130;
rt_int p1131;
yarr p1133;
rt_int v3012;
};
struct yf1139 { void *up;
};
struct yf1146 { void *up;
yarr p1145;
rt_int v3020;
};
struct yf1175 { void *up;
rt_int v3024;
rt_int v3026;
rt_int v3028;
rt_int c_3046;
};
struct yf1180 { void *up;
unsigned char v3055;
};
struct yf1187 { void *up;
rt_int p1185;
rt_int p1186;
};
struct yf1193 { void *up;
rt_int p1192;
};
struct yf1198 { void *up;
rt_int v3072;
rt_int v3074;
};
struct yf1204 { void *up;
unsigned char p1203;
};
struct yf1211 { void *up;
yarr p1210;
};
struct yf1217 { void *up;
rt_int p1216;
rt_int v3103;
rt_int v3106;
rt_int v3108;
rt_int v3110;
rt_int v3112;
rt_int v3114;
rt_int v3117;
rt_int v3120;
rt_int v3123;
rt_int v3126;
rt_int v3129;
rt_int v3132;
rt_int c_3170;
rt_int c_3180;
rt_int c_3208;
rt_int c_3216;
};
struct yf1222 { void *up;
rt_int v3227;
rt_int v3229;
rt_int v3231;
rt_int v3233;
};
struct yf1227 { void *up;
unsigned char v3262;
rt_int v3264;
rt_int v3266;
rt_int v3268;
rt_int v3270;
rt_int v3272;
rt_int v3274;
rt_int v3276;
rt_int c_3349;
};
struct yf1245 { void *up;
rt_int p1243;
rt_int p1244;
void * v3365;
};
struct yf1253 { void *up;
void * * p1250;
void * * p1251;
void * p1252;
};
struct yf1259 { void *up;
void * p1258;
rt_int v3378;
void * v3381;
};
struct yf1264 { void *up;
};
struct yf1269 { void *up;
};
struct yf1274 { void *up;
};
struct yf1281 { void *up;
rt_int p1279;
rt_int p1280;
rt_int v3395;
};
struct yf1287 { void *up;
rt_int p1286;
};
struct yf1293 { void *up;
rt_int p1292;
};
struct yf1298 { void *up;
};
struct yf1304 { void *up;
rt_int p1303;
};
struct yf1309 { void *up;
rt_int v3418;
};
struct yf1315 { void *up;
rt_int p1314;
rt_int v3428;
};
struct yf1320 { void *up;
rt_int v3433;
};
struct yf1327 { void *up;
rt_int p1325;
rt_int p1326;
rt_int v3440;
};
struct yf1332 { void *up;
rt_int v3444;
};
struct yf1338 { void *up;
rt_int p1337;
void * v3454;
};
struct yf1343 { void *up;
void * v3461;
};
struct yf1348 { void *up;
void * v3466;
void * v3468;
void * v3470;
void * v3472;
rt_int v3474;
};
struct yf1353 { void *up;
rt_int v3483;
};
struct yf1358 { void *up;
void * v3489;
void * v3491;
void * v3493;
void * v3495;
};
struct yf1363 { void *up;
void * v3500;
void * v3502;
void * v3504;
void * v3506;
void * v3508;
};
struct yf1368 { void *up;
void * v3516;
void * v3518;
void * v3520;
};
struct yf1374 { void *up;
rt_int p1373;
void * v3526;
};
struct yf1380 { void *up;
rt_int p1379;
};
struct yf1387 { void *up;
void * * p1385;
void * * p1386;
rt_int v3546;
void * v3548;
void * v3550;
void * v3552;
};
struct yf1392 { void *up;
void * v3556;
void * v3558;
void * v3560;
rt_int v3562;
rt_int v3564;
rt_int v3566;
};
struct yf1398 { void *up;
void * p1397;
void * v3581;
void * v3583;
rt_int v3585;
};
struct yf1403 { void *up;
void * v3591;
};
struct yf1409 { void *up;
rt_int p1408;
rt_int v3603;
};
struct yf1414 { void *up;
rt_int v3611;
void * v3613;
};
struct yf1419 { void *up;
void * v3622;
void * v3624;
};
struct yf1424 { void *up;
void * v3628;
void * v3630;
void * v3632;
};
struct yf1429 { void *up;
void * v3637;
void * v3639;
void * v3641;
rt_int v3643;
};
struct yf1434 { void *up;
void * v3650;
void * v3652;
void * v3654;
void * v3656;
void * v3658;
void * v3660;
rt_int v3662;
rt_int v3664;
};
struct yf1439 { void *up;
void * v3681;
};
struct yf1444 { void *up;
rt_int v3686;
};
struct yf1450 { void *up;
rt_int p1449;
void * v3695;
void * v3697;
void * v3699;
rt_int v3701;
};
struct yf1455 { void *up;
void * v3709;
void * v3711;
void * v3713;
void * v3715;
void * v3717;
void * v3719;
rt_int v3721;
rt_int v3723;
};
struct yf1460 { void *up;
};
struct yf1466 { void *up;
rt_int p1465;
};
struct yf1472 { void *up;
rt_int p1471;
};
struct yf1478 { void *up;
rt_int p1477;
};
struct yf1484 { void *up;
rt_int p1483;
};
struct yf1490 { void *up;
rt_int p1489;
};
struct yf1499 { void *up;
rt_int p1495;
void * p1496;
void * p1497;
rt_int p1498;
void * v3777;
};
struct yf1506 { void *up;
rt_int p1504;
rt_int p1505;
rt_int v3783;
};
struct yf1511 { void *up;
void * v3787;
rt_int v3789;
rt_int v3791;
};
struct yf1516 { void *up;
void * v3795;
void * v3797;
rt_int v3799;
rt_int v3801;
};
struct yf1521 { void *up;
void * v3807;
rt_int v3809;
rt_int v3811;
};
struct yf1527 { void *up;
rt_int p1526;
rt_int v3817;
};
struct yf1532 { void *up;
void * v3822;
rt_int v3824;
rt_int v3826;
};
struct yf1537 { void *up;
void * v3830;
rt_int v3832;
rt_int v3834;
};
struct yf1542 { void *up;
void * v3855;
void * v3857;
void * v3859;
rt_int v3861;
};
struct yf1547 { void *up;
};
struct yf1552 { void *up;
void * v3868;
void * v3870;
};
struct yf1588 { void *up;
rt_int p1586;
rt_int p1587;
void * v3877;
};
struct yf1594 { void *up;
rt_int p1593;
void * v3892;
};
struct yf1599 { void *up;
void * v3898;
void * v3900;
void * v3902;
rt_int v3904;
};
struct yf1605 { void *up;
void * p1604;
};
struct yf1611 { void *up;
rt_int p1610;
void * v3916;
};
struct yf1617 { void *up;
rt_int p1616;
void * v3924;
};
struct yf1624 { void *up;
rt_int p1622;
rt_int p1623;
void * v3933;
};
struct yf1630 { void *up;
void * p1629;
void * v3939;
};
struct yf1637 { void *up;
rt_int p1635;
void * p1636;
void * v3948;
};
struct yf1644 { void *up;
void * p1642;
rt_int p1643;
void * v3957;
rt_int v3959;
};
struct yf1651 { void *up;
rt_int p1649;
rt_int p1650;
rt_int v3967;
};
struct yf1657 { void *up;
rt_int p1656;
rt_int v3982;
};
struct yf1664 { void *up;
rt_int p1662;
rt_int p1663;
rt_int v3997;
};
struct yf1670 { void *up;
void * p1669;
rt_int v4006;
};
struct yf1676 { void *up;
void * p1675;
void * v4014;
};
struct yf1707 { void *up;
rt_int p1705;
rt_int p1706;
void * v4020;
};
struct yf1713 { void *up;
void * p1712;
void * v4044;
};
struct yf1719 { void *up;
void * p1718;
};
struct yf1725 { void *up;
void * p1724;
};
struct yf1731 { void *up;
void * p1730;
};
struct yf1737 { void *up;
void * p1736;
};
struct yf1743 { void *up;
void * p1742;
};
struct yf1749 { void *up;
void * p1748;
rt_int v4073;
};
struct yf1755 { void *up;
void * p1754;
rt_int v4098;
};
struct yf1761 { void *up;
void * p1760;
};
struct yf1768 { void *up;
void * p1766;
void * p1767;
};
struct yf1776 { void *up;
rt_int p1773;
void * p1774;
void * p1775;
rt_int v4141;
};
struct yf1784 { void *up;
rt_int p1781;
void * p1782;
void * p1783;
};
struct yf1791 { void *up;
void * p1789;
rt_int p1790;
};
struct yf1798 { void *up;
void * p1796;
void * p1797;
rt_int v4157;
rt_int v4159;
void * v4161;
void * v4163;
rt_int v4165;
rt_int v4167;
};
struct yf1804 { void *up;
void * p1803;
void * v4178;
void * v4180;
rt_int v4182;
};
struct yf1812 { void *up;
void * p1809;
rt_int p1810;
rt_int p1811;
};
struct yf1818 { void *up;
rt_int p1817;
rt_int v4196;
};
struct yf1826 { void *up;
void * p1823;
rt_int p1824;
rt_int p1825;
void * v4206;
void * v4208;
void * v4210;
void * v4212;
void * v4214;
rt_int v4216;
void * v4218;
rt_int v4220;
rt_int v4222;
};
struct yf1833 { void *up;
rt_int p1831;
void * p1832;
void * v4269;
void * v4271;
};
struct yf1838 { void *up;
void * v4275;
};
struct yf1844 { void *up;
void * p1843;
void * v4280;
rt_int v4282;
rt_int v4284;
};
struct yf1857 { void *up;
void * p1849;
void * * p1850;
rt_int p1851;
void * p1852;
rt_int p1853;
rt_int p1854;
void * p1855;
rt_int p1856;
void * v4309;
};
struct yf1868 { void *up;
void * p1862;
void * * p1863;
void * p1864;
rt_int p1865;
void * p1866;
rt_int p1867;
void * v4321;
void * v4323;
void * v4325;
};
struct yf1876 { void *up;
void * p1873;
void * p1874;
rt_int p1875;
void * v4333;
void * v4335;
void * v4337;
void * v4339;
rt_int v4341;
void * v4344;
rt_int v4346;
rt_int v4348;
};
struct yf1883 { void *up;
void * p1881;
rt_int p1882;
void * v4395;
};
struct yf2001 { void *up;
void * p1999;
rt_int p2000;
void * v4402;
rt_int v4404;
rt_int v4406;
rt_int v4408;
rt_int v4410;
rt_int c_4419;
};
struct yf2008 { void *up;
void * p2006;
void * p2007;
void * v4458;
};
struct yf2016 { void *up;
void * p2013;
rt_int p2014;
rt_int p2015;
rt_int v4469;
rt_int v4471;
};
struct yf2025 { void *up;
void * p2021;
rt_int p2022;
rt_int p2023;
rt_int * p2023_o;
rt_int p2024;
rt_int v4482;
rt_int v4484;
rt_int v4486;
ydesc yd_4493;
yarr v4495;
unsigned char v4497;
rt_int v4499;
rt_int c_4528;
};
struct yf2033 { void *up;
void * p2030;
rt_int p2031;
rt_int * p2031_o;
rt_int p2032;
rt_int * p2032_o;
void * v4563;
rt_int v4565;
rt_int v4567;
rt_int v4569;
rt_int v4571;
rt_int v4573;
void * v4575;
};
struct yf2041 { void *up;
rt_int p2038;
void * p2039;
void * p2040;
};
struct yf2051 { void *up;
rt_int p2046;
void * p2047;
rt_int p2048;
void * p2049;
rt_int p2050;
rt_int v4623;
rt_int v4625;
};
struct yf2057 { void *up;
void * p2056;
void * v4639;
void * v4641;
};
struct yf2065 { void *up;
void * p2062;
rt_int p2063;
rt_int * p2063_o;
void * p2064;
void * * p2064_o;
};
struct yf2071 { void *up;
rt_int p2070;
};
struct yf2078 { void *up;
void * p2076;
rt_int p2077;
void * v4671;
};
struct yf2084 { void *up;
void * p2083;
void * v4676;
};
struct yf2093 { void *up;
void * p2089;
void * p2090;
rt_int p2091;
rt_int * p2091_o;
void * p2092;
void * * p2092_o;
rt_int v4685;
void * v4687;
rt_int v4689;
rt_int v4691;
void * v4693;
void * v4695;
void * v4697;
rt_int v4699;
rt_int v4701;
};
struct yf2101 { void *up;
void * p2098;
void * p2099;
rt_int p2100;
void * v4742;
rt_int v4744;
rt_int v4746;
};
struct yf2110 { void *up;
void * p2106;
void * p2107;
rt_int p2108;
rt_int * p2108_o;
void * p2109;
void * * p2109_o;
void * v4758;
};
struct yf2118 { void *up;
void * p2115;
rt_int p2116;
rt_int * p2116_o;
void * p2117;
void * * p2117_o;
rt_int v4767;
rt_int v4769;
rt_int v4771;
void * v4773;
void * v4775;
void * v4777;
void * v4779;
rt_int v4781;
rt_int v4783;
};
struct yf2128 { void *up;
void * p2123;
rt_int p2124;
void * p2125;
rt_int p2126;
rt_int * p2126_o;
void * p2127;
void * * p2127_o;
};
struct yf2134 { void *up;
void * p2133;
void * v4818;
};
struct yf2143 { void *up;
yarr p2140;
rt_int p2141;
rt_int p2142;
};
struct yf2152 { void *up;
rt_int p2148;
yarr p2150;
rt_int p2151;
};
struct yf2161 { void *up;
rt_int p2157;
void * p2158;
rt_int p2159;
void * p2160;
rt_int v4846;
rt_int v4848;
void * v4850;
};
struct yf2167 { void *up;
void * p2166;
};
struct yf2176 { void *up;
void * p2172;
void * p2173;
rt_int p2174;
rt_int * p2174_o;
void * p2175;
void * * p2175_o;
rt_int v4880;
rt_int v4882;
rt_int v4884;
rt_int v4886;
void * v4888;
void * v4890;
void * v4892;
rt_int v4894;
};
struct yf2213 { void *up;
void * p2211;
void * p2212;
};
struct yf2221 { void *up;
void * p2218;
rt_int p2219;
rt_int p2220;
void * v4946;
void * v4948;
rt_int v4950;
rt_int v4952;
};
struct yf2227 { void *up;
void * p2226;
void * v4964;
};
struct yf2236 { void *up;
void * p2232;
void * p2233;
rt_int p2234;
rt_int * p2234_o;
rt_int p2235;
rt_int * p2235_o;
void * v4976;
void * v4978;
void * v4980;
};
struct yf2245 { void *up;
void * p2241;
rt_int p2242;
rt_int p2243;
rt_int p2244;
void * v4996;
rt_int v4998;
rt_int v5002;
};
struct yf2256 { void *up;
void * p2250;
rt_int p2251;
void * p2252;
void * p2253;
rt_int p2254;
rt_int * p2254_o;
void * p2255;
void * * p2255_o;
void * v5028;
void * v5030;
rt_int v5032;
rt_int v5034;
};
struct yf2266 { void *up;
void * p2261;
void * p2262;
rt_int p2263;
rt_int p2264;
rt_int * p2264_o;
void * p2265;
void * * p2265_o;
void * v5051;
void * v5053;
rt_int v5055;
rt_int v5057;
};
struct yf2275 { void *up;
void * p2271;
void * p2272;
rt_int p2273;
rt_int * p2273_o;
void * p2274;
void * * p2274_o;
void * v5069;
void * v5071;
rt_int v5073;
rt_int v5075;
rt_int v5077;
void * v5079;
rt_int v5081;
rt_int v5083;
rt_int v5085;
rt_int v5087;
rt_int v5089;
rt_int v5092;
void * v5094;
rt_int v5096;
};
struct yf2283 { void *up;
void * p2280;
rt_int p2281;
rt_int p2282;
void * v5158;
void * v5160;
rt_int v5162;
rt_int v5164;
};
struct yf2361 { void *up;
yarr p2359;
rt_int p2360;
rt_int v5173;
};
struct yf2371 { void *up;
yarr p2367;
rt_int p2368;
yarr p2370;
rt_int v5179;
};
struct yf2377 { void *up;
rt_int p2376;
};
struct yf2382 { void *up;
};
struct yf2388 { void *up;
rt_int p2387;
};
struct yf2394 { void *up;
void * p2393;
rt_int v5201;
rt_int v5203;
rt_int v5205;
void * v5207;
void * v5209;
rt_int v5211;
};
struct yf2400 { void *up;
void * p2399;
void * v5267;
};
struct yf2406 { void *up;
void * p2405;
rt_int v5271;
void * v5273;
};
struct yf2413 { void *up;
void * p2411;
void * p2412;
rt_int v5279;
rt_int v5281;
void * v5283;
void * v5285;
rt_int v5287;
};
struct yf2418 { void *up;
void * v5293;
rt_int v5295;
};
struct yf2424 { void *up;
void * p2423;
rt_int v5302;
rt_int v5304;
rt_int v5306;
rt_int v5308;
rt_int v5310;
rt_int v5312;
rt_int v5314;
void * v5316;
void * v5318;
void * v5320;
void * v5322;
rt_int v5324;
rt_int v5326;
rt_int v5328;
rt_int v5330;
void * v5332;
};
struct yf2430 { void *up;
void * p2429;
void * v5393;
rt_int v5395;
rt_int v5397;
rt_int v5399;
void * v5401;
};
struct yf2438 { void *up;
rt_int p2435;
rt_int p2436;
rt_int p2437;
};
struct yf2444 { void *up;
void * p2443;
rt_int v5433;
rt_int v5435;
rt_int v5437;
void * v5439;
void * v5441;
};
struct yf2450 { void *up;
void * p2449;
};
struct yf2456 { void *up;
rt_int p2455;
rt_int v5462;
rt_int v5464;
rt_int c_5469;
};
struct yf2462 { void *up;
void * p2461;
void * v5479;
rt_int v5481;
rt_int v5483;
};
struct yf2468 { void *up;
void * p2467;
rt_int v5500;
};
struct yf2475 { void *up;
void * p2473;
rt_int p2474;
void * v5508;
void * v5510;
void * v5512;
void * v5514;
void * v5516;
void * v5518;
void * v5520;
rt_int v5522;
rt_int v5524;
};
struct yf2482 { void *up;
void * p2480;
void * p2481;
void * v5567;
void * v5569;
void * v5571;
rt_int v5573;
};
struct yf2488 { void *up;
void * p2487;
void * v5581;
yR130 v5583;
yR130 v5585;
rt_int v5587;
rt_int v5589;
rt_int v5591;
rt_int v5593;
rt_int v5595;
rt_int v5597;
rt_int v5599;
void * v5601;
rt_int v5603;
void * v5605;
void * v5607;
rt_int v5609;
rt_int v5611;
yR130 v5613;
};
struct yf2496 { void *up;
void * p2493;
void * p2494;
rt_int p2495;
};
struct yf2502 { void *up;
void * p2501;
rt_int v5675;
void * v5677;
void * v5679;
void * v5681;
void * v5683;
rt_int v5685;
rt_int v5687;
rt_int v5689;
};
struct yf2509 { void *up;
void * p2507;
void * p2508;
};
struct yf2515 { void *up;
void * p2514;
void * v5705;
void * v5707;
void * v5709;
void * v5711;
};
struct yf2533 { void *up;
rt_int p2531;
void * p2532;
void * v5716;
};
struct yf2541 { void *up;
void * * p2538;
void * p2539;
rt_int p2540;
void * v5723;
void * v5725;
void * v5727;
};
struct yf2549 { void *up;
void * p2546;
void * * p2547;
rt_int p2548;
void * v5738;
void * v5740;
void * v5742;
rt_int v5744;
void * v5746;
rt_int v5748;
};
struct yf2556 { void *up;
void * p2554;
rt_int p2555;
void * v5772;
void * v5774;
void * v5776;
};
struct yf2562 { void *up;
void * p2561;
void * v5781;
void * v5783;
void * v5785;
void * v5787;
void * v5789;
void * v5791;
void * v5793;
void * v5795;
void * v5797;
void * v5799;
rt_int v5801;
rt_int v5803;
rt_int v5805;
};
struct yf2568 { void *up;
void * p2567;
void * v5829;
};
struct yf2574 { void *up;
void * p2573;
void * v5833;
void * v5835;
void * v5837;
void * v5839;
rt_int v5841;
rt_int v5843;
rt_int v5845;
rt_int v5847;
void * v5849;
rt_int c_5858;
};
struct yf2580 { void *up;
void * p2579;
void * v5869;
void * v5871;
};
struct yf2585 { void *up;
void * v5877;
};
struct yf2592 { void *up;
void * p2590;
void * p2591;
rt_int v5888;
rt_int v5890;
rt_int v5892;
void * v5894;
rt_int v5896;
rt_int v5898;
rt_int v5900;
rt_int v5902;
rt_int v5904;
rt_int v5906;
void * v5908;
void * v5910;
};
struct yf2598 { void *up;
void * p2597;
};
struct yf2604 { void *up;
void * p2603;
rt_int v5970;
};
struct yf2609 { void *up;
};
struct yf2615 { void *up;
void * p2614;
};
struct yf2622 { void *up;
void * p2620;
rt_int p2621;
};
struct yf2629 { void *up;
void * p2627;
void * p2628;
rt_int v6005;
rt_int v6007;
};
struct yf2636 { void *up;
void * p2634;
rt_int p2635;
void * v6013;
rt_int v6015;
};
struct yf2643 { void *up;
void * p2641;
rt_int p2642;
};
struct yf2651 { void *up;
yarr p2649;
rt_int p2650;
};
struct yf2657 { void *up;
rt_int p2656;
};
struct yf2666 { void *up;
void * p2662;
rt_int p2663;
rt_int p2664;
rt_int * p2664_o;
void * p2665;
void * * p2665_o;
rt_int v6042;
};
struct yf2674 { void *up;
void * p2671;
rt_int p2672;
rt_int * p2672_o;
void * p2673;
void * * p2673_o;
};
struct yf2680 { void *up;
void * p2679;
rt_int v6058;
void * v6060;
};
struct yf2686 { void *up;
void * p2685;
void * v6066;
rt_int v6069;
rt_int v6071;
rt_int v6073;
rt_int v6075;
rt_int v6077;
rt_int v6079;
unsigned char v6081;
void * v6083;
ydesc yd_6090;
yarr v6092;
};
struct yf2696 { void *up;
rt_int p2691;
void * p2692;
rt_int p2693;
rt_int p2694;
rt_int * p2694_o;
void * p2695;
void * * p2695_o;
rt_int v6131;
rt_int v6133;
rt_int v6135;
rt_int v6137;
rt_int v6139;
void * v6141;
void * v6143;
void * v6145;
void * v6147;
rt_int v6149;
rt_int v6151;
rt_int v6153;
rt_int v6155;
void * v6157;
rt_int v6159;
rt_int c_6173;
};
struct yf2708 { void *up;
yarr p2706;
void * p2707;
void * v6347;
};
struct yf2716 { void *up;
yarr p2714;
rt_int p2715;
void * v6353;
};
struct yf2726 { void *up;
yarr p2722;
yarr p2723;
yarr p2724;
rt_int p2725;
void * v6361;
void * v6363;
void * v6365;
};
struct yf2734 { void *up;
rt_int p2731;
yarr p2733;
void * v6374;
};
struct yf2739 { void *up;
};
struct yf2744 { void *up;
void * v6454;
};
struct yf2749 { void *up;
};
static ydesc yd_96;
static ydesc yd_101;
static ydesc yd_106;
static ydesc yd_111;
static ydesc yd_116;
static ydesc yd_121;
static ydesc yd_126;
static ydesc yd_131;
static ydesc yd_139;
static ydesc yd_147;
static ydesc yd_155;
static ydesc yd_163;
static ydesc yd_171;
static rt_int v174;
static rt_int v177;
static rt_int v180;
static rt_int v183;
static rt_int v186;
static rt_int v189;
static rt_int v192;
static rt_int v195;
static rt_int v198;
static rt_int v201;
static rt_int v204;
static rt_int v207;
static rt_int v210;
static rt_int v213;
static rt_int v216;
static rt_int v219;
static rt_int v222;
static rt_int v225;
static rt_int v228;
static rt_int v231;
static rt_int v234;
static rt_int v237;
static rt_int v240;
static rt_int v243;
static rt_int v246;
static rt_int v249;
static rt_int v252;
static rt_int v255;
static rt_int v258;
static rt_int v261;
static rt_int v264;
static rt_int v267;
static rt_int v270;
static rt_int v273;
static rt_int v276;
static rt_int v279;
static rt_int v282;
static rt_int v285;
static rt_int v288;
static rt_int v291;
static rt_int v294;
static rt_int v297;
static rt_int v300;
static rt_int v303;
static rt_int v306;
static rt_int v309;
static rt_int v312;
static rt_int v315;
static rt_int v318;
static rt_int v321;
static rt_int v324;
static rt_int v327;
static rt_int v330;
static rt_int v333;
static rt_int v336;
static rt_int v339;
static rt_int v342;
static rt_int v345;
static rt_int v348;
static rt_int v351;
static rt_int v354;
static rt_int v357;
static rt_int v360;
static rt_int v363;
static rt_int v366;
static rt_int v369;
static rt_int v372;
static rt_int v375;
static rt_int v378;
static rt_int v381;
static rt_int v384;
static rt_int v387;
static rt_int v390;
static rt_int v393;
static rt_int v396;
static rt_int v399;
static rt_int v402;
static rt_int v405;
static rt_int v408;
static rt_int v411;
static rt_int v414;
static rt_int v417;
static rt_int v420;
static rt_int v423;
static rt_int v426;
static rt_int v429;
static rt_int v432;
static rt_int v435;
static rt_int v438;
static rt_int v441;
static rt_int v444;
static rt_int v447;
static rt_int v450;
static rt_int v453;
static rt_int v456;
static rt_int v459;
static rt_int v462;
static rt_int v465;
static rt_int v468;
static rt_int v471;
static rt_int v474;
static rt_int v477;
static rt_int v480;
static rt_int v483;
static rt_int v486;
static rt_int v489;
static rt_int v492;
static rt_int v495;
static rt_int v498;
static rt_int v501;
static rt_int v504;
static rt_int v507;
static rt_int v510;
static rt_int v513;
static rt_int v516;
static rt_int v519;
static rt_int v522;
static rt_int v525;
static rt_int v528;
static rt_int v531;
static rt_int v534;
static rt_int v537;
static rt_int v540;
static rt_int v543;
static rt_int v546;
static rt_int v549;
static rt_int v552;
static rt_int v555;
static rt_int v558;
static rt_int v561;
static rt_int v564;
static rt_int v567;
static rt_int v570;
static rt_int v573;
static rt_int v576;
static rt_int v579;
static rt_int v582;
static rt_int v585;
static rt_int v588;
static rt_int v591;
static rt_int v594;
static rt_int v597;
static rt_int v600;
static rt_int v603;
static rt_int v606;
static rt_int v609;
static rt_int v612;
static rt_int v615;
static rt_int v618;
static rt_int v621;
static rt_int v624;
static rt_int v627;
static rt_int v630;
static rt_int v633;
static rt_int v636;
static rt_int v639;
static rt_int v642;
static rt_int v645;
static rt_int v648;
static rt_int v651;
static rt_int v654;
static rt_int v657;
static rt_int v660;
static rt_int v663;
static rt_int v666;
static rt_int v669;
static rt_int v672;
static rt_int v675;
static rt_int v678;
static rt_int v681;
static rt_int v684;
static rt_int v687;
static rt_int v690;
static rt_int v693;
static rt_int v696;
static rt_int v699;
static rt_int v702;
static rt_int v705;
static rt_int v708;
static rt_int v711;
static rt_int v714;
static rt_int v717;
static rt_int v720;
static rt_int v723;
static rt_int v726;
static rt_int v729;
static rt_int v732;
static rt_int v735;
static rt_int v738;
static rt_int v741;
static rt_int v744;
static rt_int v747;
static rt_int v750;
static rt_int v753;
static rt_int v756;
static rt_int v759;
static rt_int v762;
static rt_int v765;
static rt_int v768;
static rt_int v771;
static rt_int v774;
static rt_int v777;
static rt_int v780;
static rt_int v783;
static rt_int v786;
static rt_int v789;
static rt_int v792;
static rt_int v795;
static rt_int v798;
static rt_int v801;
static rt_int v804;
static rt_int v807;
static rt_int v810;
static rt_int v813;
static rt_int v816;
static rt_int v819;
static rt_int v822;
static rt_int v825;
static rt_int v828;
static rt_int v831;
static rt_int v834;
static rt_int v837;
static rt_int v840;
static rt_int v843;
static rt_int v846;
static rt_int v849;
static rt_int v852;
static rt_int v855;
static rt_int v858;
static rt_int v861;
static rt_int v864;
static rt_int v867;
static rt_int v870;
static rt_int v873;
static yfile * v876;
static yfile * v878;
static yarr v880;
static rt_int v882;
static yarr v885;
static yarr v887;
static rt_int v889;
static yarr v892;
static rt_int v894;
static ydesc yd_902;
static yarr v904;
static rt_int v906;
static ydesc yd_914;
static yarr v916;
static rt_int v918;
static rt_int v921;
static ydesc yd_926;
static yarr v928;
static ydesc yd_935;
static yarr v937;
static yR130 v939;
static yR130 v941;
static yR130 v943;
static yR130 v945;
static yR130 v947;
static yR130 v949;
static yR130 v951;
static yR130 v953;
static yR130 v955;
static rt_int v957;
static yarr v1150;
static yarr v1152;
static yarr v1154;
static rt_int v1156;
static rt_int v1159;
static rt_int v1162;
static rt_int v1165;
static rt_int v1168;
static rt_int v1171;
static rt_int v1231;
static void * v1234;
static rt_int v1236;
static rt_int v1239;
static yarr v1556;
static ydesc yd_1563;
static yarr v1565;
static rt_int v1567;
static rt_int v1570;
static rt_int v1573;
static ydesc yd_1581;
static yarr v1583;
static void * v1680;
static void * v1682;
static void * v1684;
static void * v1686;
static void * v1688;
static void * v1690;
static void * v1692;
static void * v1694;
static void * v1696;
static void * v1698;
static void * v1700;
static void * v1702;
static rt_int v1887;
static rt_int v1890;
static rt_int v1893;
static rt_int v1896;
static rt_int v1899;
static rt_int v1902;
static rt_int v1905;
static rt_int v1908;
static rt_int v1911;
static rt_int v1914;
static rt_int v1917;
static rt_int v1920;
static rt_int v1923;
static rt_int v1926;
static rt_int v1929;
static rt_int v1932;
static rt_int v1935;
static rt_int v1938;
static rt_int v1941;
static rt_int v1944;
static rt_int v1947;
static rt_int v1950;
static rt_int v1953;
static rt_int v1956;
static rt_int v1959;
static rt_int v1962;
static rt_int v1965;
static rt_int v1968;
static rt_int v1971;
static rt_int v1974;
static rt_int v1977;
static rt_int v1980;
static rt_int v1983;
static rt_int v1986;
static rt_int v1989;
static rt_int v1992;
static rt_int v1995;
static ydesc yd_2185;
static yarr v2187;
static ydesc yd_2194;
static yarr v2196;
static ydesc yd_2203;
static yarr v2205;
static rt_int v2207;
static ydesc yd_2292;
static yarr v2294;
static rt_int v2296;
static rt_int v2299;
static ydesc yd_2307;
static yarr v2309;
static rt_int v2311;
static ydesc yd_2319;
static yarr v2321;
static rt_int v2323;
static ydesc yd_2331;
static yarr v2333;
static yarr v2335;
static ydesc yd_2342;
static yarr v2344;
static rt_int v2346;
static rt_int v2349;
static void * v2352;
static rt_int v2354;
static void * v2519;
static ydesc yd_2526;
static yarr v2528;
static void * v2700;
static void * v2702;
static void yr960_InitChars(void);
static rt_int yr965_IsLetter(unsigned char a_p966);
static rt_int yr971_IsDigit(unsigned char a_p972);
static void yr977_PoolAdd(unsigned char a_p978);
static void yr983_SB(void);
static void yr988_SC(unsigned char a_p989);
static void yr994_SA(yarr a_p996);
static void yr1001_ST(rt_int a_p1002);
static void yr1007_SI(rt_int a_p1008);
static rt_int yr1013_SE(void);
static rt_int yr1018_T(yarr a_p1020);
static rt_int yr1025_Intern(rt_int a_p1026, rt_int a_p1027);
static rt_int yr1032_Name(rt_int a_p1033);
static rt_int yr1038_N(yarr a_p1040);
static rt_int yr1045_TEq(rt_int a_p1046, rt_int a_p1047);
static rt_int yr1052_TStarts(rt_int a_p1053, yarr a_p1055);
static unsigned char yr1060_TChar(rt_int a_p1061, rt_int a_p1062);
static void yr1067_Put(yR130 * a_p1068, rt_int a_p1069);
static void yr1074_PutS(yR130 * a_p1075, yarr a_p1077);
static void yr1082_Append(yR130 * a_p1083, yR130 * a_p1084);
static void yr1089_Emit(rt_int a_p1090);
static void yr1095_EmitS(yarr a_p1097);
static void yr1102_WriteTxt(rt_int a_p1103);
static void yr1108_WriteBuf(yR130 a_p1109);
static void yr1114_Fail(rt_int a_p1115, rt_int a_p1116);
static void yr1121_FailS(rt_int a_p1122, yarr a_p1124);
static void yr1129_FailN(rt_int a_p1130, rt_int a_p1131, yarr a_p1133);
static rt_int yr1138_NewSerial(void);
static rt_int yr1143_Fresh(yarr a_p1145);
static void yr1174_InitWords(void);
static void yr1179_ReadSource(void);
static void yr1184_AddTok(rt_int a_p1185, rt_int a_p1186);
static unsigned char yr1191_At(rt_int a_p1192);
static rt_int yr1197_EndsOperand(void);
static rt_int yr1202_DigitVal(unsigned char a_p1203);
static void yr1208_LexError(yarr a_p1210);
static void yr1215_LexNumber(rt_int a_p1216);
static void yr1221_LexString(void);
static void yr1226_Lex(void);
static void * yr1242_NewNode(rt_int a_p1243, rt_int a_p1244);
static void yr1249_Link(void * * a_p1250, void * * a_p1251, void * a_p1252);
static rt_int yr1257_Count(void * a_p1258);
static rt_int yr1263_TK(void);
static rt_int yr1268_TV(void);
static rt_int yr1273_TLn(void);
static rt_int yr1278_IsAt(rt_int a_p1279, rt_int a_p1280);
static rt_int yr1285_Is(rt_int a_p1286);
static rt_int yr1291_IsIdAt(rt_int a_p1292);
static void yr1297_Skip(void);
static rt_int yr1302_Accept(rt_int a_p1303);
static rt_int yr1308_TokText(void);
static void yr1313_Expect(rt_int a_p1314);
static rt_int yr1319_Ident(void);
static void yr1324_CloseName(rt_int a_p1325, rt_int a_p1326);
static rt_int yr1331_ExtendedId(void);
static rt_int yr1336_IsLabel(rt_int a_p1337);
static void * yr1342_ImportItem(void);
static void * yr1347_ParseModule(void);
static rt_int yr1352_IsDeclWord(void);
static void * yr1357_ParseBlock(void);
static void * yr1362_ParseHandler(void);
static void * yr1367_ParseNames(void);
static void * yr1372_SimpleEntry(rt_int a_p1373);
static rt_int yr1378_Continues(rt_int a_p1379);
static void yr1384_ParseDeclGroup(void * * a_p1385, void * * a_p1386);
static void * yr1391_ParseDecl(void);
static void yr1396_ParseFormals(void * a_p1397);
static void * yr1402_ParseFormalRep(void);
static rt_int yr1407_IsStructWord(rt_int a_p1408);
static void * yr1413_ParseRep(void);
static void * yr1418_ParseConcrete(void);
static void * yr1423_ParseIds(void);
static void * yr1428_ParseFieldGroups(void);
static void * yr1433_ParseConcrete1(void);
static void * yr1438_ParseQualifier(void);
static rt_int yr1443_IsStop(void);
static void * yr1448_ParseStatements(rt_int a_p1449);
static void * yr1454_ParseStatement(void);
static rt_int yr1459_OpAt(void);
static rt_int yr1464_IsRel(rt_int a_p1465);
static rt_int yr1470_IsAssocMul(rt_int a_p1471);
static rt_int yr1476_IsNonAssocMul(rt_int a_p1477);
static rt_int yr1482_IsAssocAdd(rt_int a_p1483);
static rt_int yr1488_IsNonAssocAdd(rt_int a_p1489);
static void * yr1494_Bin(rt_int a_p1495, void * a_p1496, void * a_p1497, rt_int a_p1498);
static void yr1503_NeedParens(rt_int a_p1504, rt_int a_p1505);
static void * yr1510_ParseExpr(void);
static void * yr1515_ParseSimple(void);
static void * yr1520_ParseTerm(void);
static rt_int yr1525_IsLiteralAt(rt_int a_p1526);
static void * yr1531_ParseLiteral(void);
static void * yr1536_ParseFactor(void);
static void * yr1541_ParseDesignator(void);
static void yr1546_EXIT_ARGS(void);
static void * yr1551_ParseProgram(void);
static void * yr1585_NewSym(rt_int a_p1586, rt_int a_p1587);
static void yr1592_OpenScope(rt_int a_p1593);
static void yr1598_CloseScope(void);
static rt_int yr1603_Visible(void * a_p1604);
static void * yr1609_Find(rt_int a_p1610);
static void * yr1615_FindHere(rt_int a_p1616);
static void * yr1621_Lookup(rt_int a_p1622, rt_int a_p1623);
static rt_int yr1628_Ambiguous(void * a_p1629);
static void * yr1634_FindLit(rt_int a_p1635, void * a_p1636);
static void yr1641_Define(void * a_p1642, rt_int a_p1643);
static rt_int yr1648_Path(rt_int a_p1649, rt_int a_p1650);
static rt_int yr1655_FramePtr(rt_int a_p1656);
static void yr1661_DeclStorage(rt_int a_p1662, rt_int a_p1663);
static rt_int yr1668_SymPath(void * a_p1669);
static void * yr1674_Real(void * a_p1675);
static void * yr1704_NewRep(rt_int a_p1705, rt_int a_p1706);
static void * yr1711_CopyRep(void * a_p1712);
static rt_int yr1717_IsDiscrete(void * a_p1718);
static rt_int yr1723_IsNumeric(void * a_p1724);
static rt_int yr1729_IsArrayLike(void * a_p1730);
static rt_int yr1735_IsString(void * a_p1736);
static rt_int yr1741_Deep(void * a_p1742);
static rt_int yr1747_CType(void * a_p1748);
static rt_int yr1753_DescOf(void * a_p1754);
static void yr1759_NewDesc(void * a_p1760);
static rt_int yr1765_SameType(void * a_p1766, void * a_p1767);
static void yr1772_TypeClash(rt_int a_p1773, void * a_p1774, void * a_p1775);
static void yr1780_CheckType(rt_int a_p1781, void * a_p1782, void * a_p1783);
static void yr1788_CheckRepresented(void * a_p1789, rt_int a_p1790);
static void yr1795_Qualify(void * a_p1796, void * a_p1797);
static void yr1802_DefineLits(void * a_p1803);
static void yr1808_SetRange(void * a_p1809, rt_int a_p1810, rt_int a_p1811);
static rt_int yr1816_NewTid(rt_int a_p1817);
static void * yr1822_MakeRep(void * a_p1823, rt_int a_p1824, rt_int a_p1825);
static void yr1830_ResolvePending(rt_int a_p1831, void * a_p1832);
static void yr1837_CheckPending(void);
static void yr1842_BuildArrayDesc(void * a_p1843);
static void yr1848_AddField(void * a_p1849, void * * a_p1850, rt_int a_p1851, void * a_p1852, rt_int a_p1853, rt_int a_p1854, void * a_p1855, rt_int a_p1856);
static void yr1861_AddFields(void * a_p1862, void * * a_p1863, void * a_p1864, rt_int a_p1865, void * a_p1866, rt_int a_p1867);
static void yr1872_MakeRecord(void * a_p1873, void * a_p1874, rt_int a_p1875);
static void * yr1880_FindField(void * a_p1881, rt_int a_p1882);
static rt_int yr1998_CharOrd(void * a_p1999, rt_int a_p2000);
static void * yr2005_AlphabetFor(void * a_p2006, void * a_p2007);
static rt_int yr2012_CharValue(void * a_p2013, rt_int a_p2014, rt_int a_p2015);
static rt_int yr2020_StringCodes(void * a_p2021, rt_int a_p2022, rt_int * a_p2023, rt_int a_p2024);
static void yr2029_Manifest(void * a_p2030, rt_int * a_p2031, rt_int * a_p2032);
static rt_int yr2037_Convert(rt_int a_p2038, void * a_p2039, void * a_p2040);
static void yr2045_Store(rt_int a_p2046, void * a_p2047, rt_int a_p2048, void * a_p2049, rt_int a_p2050);
static rt_int yr2055_IsVariable(void * a_p2056);
static void yr2061_LValue(void * a_p2062, rt_int * a_p2063, void * * a_p2064);
static rt_int yr2069_Paren(rt_int a_p2070);
static void * yr2075_Lit(void * a_p2076, rt_int a_p2077);
static void * yr2082_Qualifier(void * a_p2083);
static void yr2088_Expr(void * a_p2089, void * a_p2090, rt_int * a_p2091, void * * a_p2092);
static rt_int yr2097_VariantTest(void * a_p2098, void * a_p2099, rt_int a_p2100);
static void yr2105_NameExpr(void * a_p2106, void * a_p2107, rt_int * a_p2108, void * * a_p2109);
static void yr2114_IndexExpr(void * a_p2115, rt_int * a_p2116, void * * a_p2117);
static void yr2122_NegExpr(void * a_p2123, rt_int a_p2124, void * a_p2125, rt_int * a_p2126, void * * a_p2127);
static void * yr2132_Unbounded(void * a_p2133);
static rt_int yr2138_Call2(yarr a_p2140, rt_int a_p2141, rt_int a_p2142);
static rt_int yr2147_Infix(rt_int a_p2148, yarr a_p2150, rt_int a_p2151);
static rt_int yr2156_EqCode(rt_int a_p2157, void * a_p2158, rt_int a_p2159, void * a_p2160);
static rt_int yr2165_IsOrdered(void * a_p2166);
static void yr2171_BinExpr(void * a_p2172, void * a_p2173, rt_int * a_p2174, void * * a_p2175);
static rt_int yr2210_Fits(void * a_p2211, void * a_p2212);
static void * yr2217_Choose(void * a_p2218, rt_int a_p2219, rt_int a_p2220);
static rt_int yr2225_HidesStandard(void * a_p2226);
static void yr2231_CompileArgs(void * a_p2232, void * a_p2233, rt_int * a_p2234, rt_int * a_p2235);
static rt_int yr2240_CallCode(void * a_p2241, rt_int a_p2242, rt_int a_p2243, rt_int a_p2244);
static rt_int yr2249_UserOp(void * a_p2250, rt_int a_p2251, void * a_p2252, void * a_p2253, rt_int * a_p2254, void * * a_p2255);
static void yr2260_CallExpr(void * a_p2261, void * a_p2262, rt_int a_p2263, rt_int * a_p2264, void * * a_p2265);
static void yr2270_Denote(void * a_p2271, void * a_p2272, rt_int * a_p2273, void * * a_p2274);
static rt_int yr2279_VariantOf(void * a_p2280, rt_int a_p2281, rt_int a_p2282);
static void yr2357_Emit2(yarr a_p2359, rt_int a_p2360);
static void yr2365_Emit3(yarr a_p2367, rt_int a_p2368, yarr a_p2370);
static void yr2375_PopTo(rt_int a_p2376);
static void yr2381_LeaveBlock(void);
static rt_int yr2386_RaiseCode(rt_int a_p2387);
static void yr2392_BlockStatements(void * a_p2393);
static void yr2398_Statements(void * a_p2399);
static rt_int yr2404_Cond(void * a_p2405);
static rt_int yr2410_Label(void * a_p2411, void * a_p2412);
static void yr2417_CopyOut(void);
static void yr2422_Statement(void * a_p2423);
static void yr2428_ForStatement(void * a_p2429);
static rt_int yr2434_Join(rt_int a_p2435, rt_int a_p2436, rt_int a_p2437);
static void yr2442_ReturnStatement(void * a_p2443);
static void yr2448_BeginStatement(void * a_p2449);
static rt_int yr2454_RoutineCName(rt_int a_p2455);
static void * yr2460_FormalRep(void * a_p2461);
static rt_int yr2466_ParamCType(void * a_p2467);
static void yr2472_RoutineHeader(void * a_p2473, rt_int a_p2474);
static void * yr2479_SameSignature(void * a_p2480, void * a_p2481);
static void yr2486_RoutineBody(void * a_p2487);
static void yr2492_DeclareStorage(void * a_p2493, void * a_p2494, rt_int a_p2495);
static void yr2500_SimpleDecl(void * a_p2501);
static void yr2506_AtLocation(void * a_p2507, void * a_p2508);
static void yr2513_Declarations(void * a_p2514);
static void * yr2530_Alias(rt_int a_p2531, void * a_p2532);
static void yr2537_AddLits(void * * a_p2538, void * a_p2539, rt_int a_p2540);
static void yr2545_ResolveItem(void * a_p2546, void * * a_p2547, rt_int a_p2548);
static void yr2553_DefineAll(void * a_p2554, rt_int a_p2555);
static void yr2560_CompileModule(void * a_p2561);
static void yr2566_DeclareTemplate(void * a_p2567);
static void yr2572_Instantiate(void * a_p2573);
static void yr2578_DeclareProcess(void * a_p2579);
static void yr2584_AwaitProcesses(void);
static void yr2589_Activate(void * a_p2590, void * a_p2591);
static rt_int yr2596_MonitorPath(void * a_p2597);
static void yr2602_EnterMonitor(void * a_p2603);
static void yr2608_LeaveMonitor(void);
static void yr2613_TerminateStatement(void * a_p2614);
static void yr2619_DeclareSignal(void * a_p2620, rt_int a_p2621);
static void yr2626_DeviceSignal(void * a_p2627, void * a_p2628);
static void * yr2633_Arg(void * a_p2634, rt_int a_p2635);
static void yr2640_NArgs(void * a_p2641, rt_int a_p2642);
static rt_int yr2647_Call1(yarr a_p2649, rt_int a_p2650);
static rt_int yr2655_Addr(rt_int a_p2656);
static void yr2661_StdVar(void * a_p2662, rt_int a_p2663, rt_int * a_p2664, void * * a_p2665);
static void yr2670_NumArg(void * a_p2671, rt_int * a_p2672, void * * a_p2673);
static rt_int yr2678_IntArg(void * a_p2679);
static void yr2684_CodeInsert(void * a_p2685);
static void yr2690_StdCall(rt_int a_p2691, void * a_p2692, rt_int a_p2693, rt_int * a_p2694, void * * a_p2695);
static void yr2704_StdRep(yarr a_p2706, void * a_p2707);
static void yr2712_StdOp(yarr a_p2714, rt_int a_p2715);
static void * yr2720_LitList(yarr a_p2722, yarr a_p2723, yarr a_p2724, rt_int a_p2725);
static void * yr2730_Abstract(rt_int a_p2731, yarr a_p2733);
static void yr2738_Predefine(void);
static void yr2743_Translate(void);
static void yr2748_WriteProgram(void);
static void yr960_InitChars(void) {
struct yf961 F;
memset((void *)&F, 0, sizeof F);
F.v2753 = INT64_C(0);
{ rt_int hi2758 = 127;
for (rt_int i2757 = 0; i2757 <= hi2758; i2757++) { F.c_2756 = i2757;
((rt_int *)(v928).p)[y_ix1(v928, F.c_2756)] = F.v2753;
((unsigned char *)(v937).p)[y_ix1(v937, F.v2753)] = F.c_2756;
F.v2753 = rt_range(rt_add(F.v2753, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
if (i2757 == hi2758) break;
}}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr965_IsLetter(unsigned char a_p966) {
struct yf967 F;
memset((void *)&F, 0, sizeof F);
F.p966 = a_p966;
{ rt_int rv2768 = ((((((F.p966 >= 65)) && ((F.p966 <= 90)))) || ((((F.p966 >= 97)) && ((F.p966 <= 122))))) || ((F.p966 == 95)));
return rv2768; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr971_IsDigit(unsigned char a_p972) {
struct yf973 F;
memset((void *)&F, 0, sizeof F);
F.p972 = a_p972;
{ rt_int rv2773 = (((F.p972 >= 48)) && ((F.p972 <= 57)));
return rv2773; }
rt_raise(Y_X_NO_RETURN);
}
static void yr977_PoolAdd(unsigned char a_p978) {
struct yf979 F;
memset((void *)&F, 0, sizeof F);
F.p978 = a_p978;
v882 = rt_range(rt_add(v882, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
((unsigned char *)(v880).p)[y_ix1(v880, v882)] = F.p978;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr983_SB(void) {
struct yf984 F;
memset((void *)&F, 0, sizeof F);
v918 = rt_range(rt_add(v918, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
((rt_int *)(v916).p)[y_ix1(v916, v918)] = v906;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr988_SC(unsigned char a_p989) {
struct yf990 F;
memset((void *)&F, 0, sizeof F);
F.p989 = a_p989;
v906 = rt_range(rt_add(v906, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
((unsigned char *)(v904).p)[y_ix1(v904, v906)] = F.p989;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr994_SA(yarr a_p996) {
struct yf997 F;
memset((void *)&F, 0, sizeof F);
F.p996 = a_p996;
{ rt_int hi2795 = y_high(F.p996, INT64_C(1));
for (rt_int i2794 = y_low(F.p996, INT64_C(1)); i2794 <= hi2795; i2794++) { F.c_2793 = i2794;
yr988_SC(((unsigned char *)(F.p996).p)[y_ix1(F.p996, F.c_2793)]);
if (i2794 == hi2795) break;
}}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1001_ST(rt_int a_p1002) {
struct yf1003 F;
memset((void *)&F, 0, sizeof F);
F.p1002 = a_p1002;
if ((F.p1002 == INT64_C(0))) {
return;
}
F.v2799 = ((rt_int *)(v885).p)[y_ix1(v885, F.p1002)];
while ((F.v2799 < (rt_add(((rt_int *)(v885).p)[y_ix1(v885, F.p1002)], ((rt_int *)(v887).p)[y_ix1(v887, F.p1002)])))) {
yr988_SC(((unsigned char *)(v880).p)[y_ix1(v880, F.v2799)]);
F.v2799 = rt_range(rt_add(F.v2799, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1007_SI(rt_int a_p1008) {
struct yf1009 F;
memset((void *)&F, 0, sizeof F);
F.p1008 = a_p1008;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(24)}; y_desc_array(&F.yd_2812, 1, lo, hi, &y_d_byte); }
y_init(&F.yd_2812, &F.v2814);
F.v2816 = INT64_C(0);
F.v2819 = F.p1008;
if ((F.v2819 < INT64_C(0))) {
yr988_SC(45);
F.v2819 = rt_range(rt_neg(F.v2819), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
}
for (;;) {
F.v2816 = rt_range(rt_add(F.v2816, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
((unsigned char *)(F.v2814).p)[y_ix1(F.v2814, F.v2816)] = ((unsigned char *)(v937).p)[y_ix1(v937, rt_add((rt_mod(F.v2819, INT64_C(10))), INT64_C(48)))];
F.v2819 = rt_range(rt_div(F.v2819, INT64_C(10)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
if ((F.v2819 == INT64_C(0))) {
goto yl_2823;
}
}
yl_2823: ;
while ((F.v2816 > INT64_C(0))) {
yr988_SC(((unsigned char *)(F.v2814).p)[y_ix1(F.v2814, F.v2816)]);
F.v2816 = rt_range(rt_sub(F.v2816, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1013_SE(void) {
struct yf1014 F;
memset((void *)&F, 0, sizeof F);
F.v2838 = ((rt_int *)(v916).p)[y_ix1(v916, v918)];
v918 = rt_range(rt_sub(v918, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
v889 = rt_range(rt_add(v889, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
((rt_int *)(v885).p)[y_ix1(v885, v889)] = rt_range(rt_add(v882, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
((rt_int *)(v887).p)[y_ix1(v887, v889)] = rt_range(rt_sub(v906, F.v2838), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
{ rt_int hi2852 = v906;
for (rt_int i2851 = rt_add(F.v2838, INT64_C(1)); i2851 <= hi2852; i2851++) { F.c_2850 = i2851;
yr977_PoolAdd(((unsigned char *)(v904).p)[y_ix1(v904, F.c_2850)]);
if (i2851 == hi2852) break;
}}
v906 = F.v2838;
{ rt_int rv2853 = rt_range(v889, INT64_C(0), INT64_C(4000000));
return rv2853; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1018_T(yarr a_p1020) {
struct yf1021 F;
memset((void *)&F, 0, sizeof F);
F.p1020 = a_p1020;
yr983_SB();
yr994_SA(F.p1020);
{ rt_int rv2856 = yr1013_SE();
return rv2856; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1025_Intern(rt_int a_p1026, rt_int a_p1027) {
struct yf1028 F;
memset((void *)&F, 0, sizeof F);
F.p1026 = a_p1026;
F.p1027 = a_p1027;
F.v2861 = INT64_C(0);
{ rt_int hi2874 = rt_sub((rt_add(F.p1026, F.p1027)), INT64_C(1));
for (rt_int i2873 = F.p1026; i2873 <= hi2874; i2873++) { F.c_2872 = i2873;
F.v2861 = rt_range(rt_mod((rt_add((rt_mul(F.v2861, INT64_C(31))), ((rt_int *)(v928).p)[y_ix1(v928, ((unsigned char *)(v880).p)[y_ix1(v880, F.c_2872)])])), INT64_C(262144)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
if (i2873 == hi2874) break;
}}
for (;;) {
if ((((rt_int *)(v892).p)[y_ix1(v892, F.v2861)] == INT64_C(0))) {
v889 = rt_range(rt_add(v889, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
((rt_int *)(v885).p)[y_ix1(v885, v889)] = F.p1026;
((rt_int *)(v887).p)[y_ix1(v887, v889)] = F.p1027;
((rt_int *)(v892).p)[y_ix1(v892, F.v2861)] = rt_range(v889, INT64_C(0), INT64_C(4000000));
{ rt_int rv2884 = rt_range(v889, INT64_C(0), INT64_C(4000000));
return rv2884; }
}
F.v2864 = ((rt_int *)(v892).p)[y_ix1(v892, F.v2861)];
if ((((rt_int *)(v887).p)[y_ix1(v887, F.v2864)] == F.p1027)) {
F.v2866 = 1;
{ rt_int hi2893 = rt_sub(F.p1027, INT64_C(1));
for (rt_int i2892 = INT64_C(0); i2892 <= hi2893; i2892++) { F.c_2891 = i2892;
if ((!(((unsigned char *)(v880).p)[y_ix1(v880, rt_add(((rt_int *)(v885).p)[y_ix1(v885, F.v2864)], F.c_2891))] == ((unsigned char *)(v880).p)[y_ix1(v880, rt_add(F.p1026, F.c_2891))]))) {
F.v2866 = 0;
}
if (i2892 == hi2893) break;
}}
if (F.v2866) {
{ rt_int rv2897 = rt_range(F.v2864, INT64_C(0), INT64_C(4000000));
return rv2897; }
}
}
F.v2861 = rt_range(rt_mod((rt_add(F.v2861, INT64_C(1))), INT64_C(262144)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
}
yl_2880: ;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1032_Name(rt_int a_p1033) {
struct yf1034 F;
memset((void *)&F, 0, sizeof F);
F.p1033 = a_p1033;
{ rt_int rv2904 = yr1025_Intern(((rt_int *)(v885).p)[y_ix1(v885, F.p1033)], ((rt_int *)(v887).p)[y_ix1(v887, F.p1033)]);
return rv2904; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1038_N(yarr a_p1040) {
struct yf1041 F;
memset((void *)&F, 0, sizeof F);
F.p1040 = a_p1040;
{ rt_int rv2907 = yr1032_Name(yr1018_T(F.p1040));
return rv2907; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1045_TEq(rt_int a_p1046, rt_int a_p1047) {
struct yf1048 F;
memset((void *)&F, 0, sizeof F);
F.p1046 = a_p1046;
F.p1047 = a_p1047;
if ((F.p1046 == F.p1047)) {
{ rt_int rv2912 = 1;
return rv2912; }
}
if ((!(((rt_int *)(v887).p)[y_ix1(v887, F.p1046)] == ((rt_int *)(v887).p)[y_ix1(v887, F.p1047)]))) {
{ rt_int rv2914 = 0;
return rv2914; }
}
{ rt_int hi2922 = rt_sub(((rt_int *)(v887).p)[y_ix1(v887, F.p1046)], INT64_C(1));
for (rt_int i2921 = INT64_C(0); i2921 <= hi2922; i2921++) { F.c_2920 = i2921;
if ((!(((unsigned char *)(v880).p)[y_ix1(v880, rt_add(((rt_int *)(v885).p)[y_ix1(v885, F.p1046)], F.c_2920))] == ((unsigned char *)(v880).p)[y_ix1(v880, rt_add(((rt_int *)(v885).p)[y_ix1(v885, F.p1047)], F.c_2920))]))) {
{ rt_int rv2926 = 0;
return rv2926; }
}
if (i2921 == hi2922) break;
}}
{ rt_int rv2928 = 1;
return rv2928; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1052_TStarts(rt_int a_p1053, yarr a_p1055) {
struct yf1056 F;
memset((void *)&F, 0, sizeof F);
F.p1053 = a_p1053;
F.p1055 = a_p1055;
F.v2933 = INT64_C(0);
if ((((rt_int *)(v887).p)[y_ix1(v887, F.p1053)] < (rt_add((rt_sub(y_high(F.p1055, INT64_C(1)), y_low(F.p1055, INT64_C(1)))), INT64_C(1))))) {
{ rt_int rv2943 = 0;
return rv2943; }
}
{ rt_int hi2952 = y_high(F.p1055, INT64_C(1));
for (rt_int i2951 = y_low(F.p1055, INT64_C(1)); i2951 <= hi2952; i2951++) { F.c_2950 = i2951;
if ((!(((unsigned char *)(v880).p)[y_ix1(v880, rt_add(((rt_int *)(v885).p)[y_ix1(v885, F.p1053)], F.v2933))] == ((unsigned char *)(F.p1055).p)[y_ix1(F.p1055, F.c_2950)]))) {
{ rt_int rv2955 = 0;
return rv2955; }
}
F.v2933 = rt_range(rt_add(F.v2933, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
if (i2951 == hi2952) break;
}}
{ rt_int rv2959 = 1;
return rv2959; }
rt_raise(Y_X_NO_RETURN);
}
static unsigned char yr1060_TChar(rt_int a_p1061, rt_int a_p1062) {
struct yf1063 F;
memset((void *)&F, 0, sizeof F);
F.p1061 = a_p1061;
F.p1062 = a_p1062;
{ unsigned char rv2966 = ((unsigned char *)(v880).p)[y_ix1(v880, rt_sub((rt_add(((rt_int *)(v885).p)[y_ix1(v885, F.p1061)], F.p1062)), INT64_C(1)))];
return rv2966; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1067_Put(yR130 * a_p1068, rt_int a_p1069) {
struct yf1070 F;
memset((void *)&F, 0, sizeof F);
F.p1068 = a_p1068;
F.p1069 = a_p1069;
({ F.v2971 = rt_alloc(sizeof(yR125)); });
(*(yR125 *)rt_nil_check(F.v2971)) = ((yR125){ .f_t = F.p1069, .f_next = ((void *)0) });
if ((((*F.p1068)).f_head == ((void *)0))) {
((*F.p1068)).f_head = F.v2971;
} else {
((*(yR125 *)rt_nil_check(((*F.p1068)).f_tail))).f_next = F.v2971;
}
((*F.p1068)).f_tail = F.v2971;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1074_PutS(yR130 * a_p1075, yarr a_p1077) {
struct yf1078 F;
memset((void *)&F, 0, sizeof F);
F.p1075 = a_p1075;
F.p1077 = a_p1077;
yr1067_Put(&(*F.p1075), yr1018_T(F.p1077));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1082_Append(yR130 * a_p1083, yR130 * a_p1084) {
struct yf1085 F;
memset((void *)&F, 0, sizeof F);
F.p1083 = a_p1083;
F.p1084 = a_p1084;
if ((((*F.p1084)).f_head == ((void *)0))) {
return;
}
if ((((*F.p1083)).f_head == ((void *)0))) {
((*F.p1083)).f_head = ((*F.p1084)).f_head;
} else {
((*(yR125 *)rt_nil_check(((*F.p1083)).f_tail))).f_next = ((*F.p1084)).f_head;
}
((*F.p1083)).f_tail = ((*F.p1084)).f_tail;
((*F.p1084)).f_head = ((void *)0);
((*F.p1084)).f_tail = ((void *)0);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1089_Emit(rt_int a_p1090) {
struct yf1091 F;
memset((void *)&F, 0, sizeof F);
F.p1090 = a_p1090;
yr1067_Put(&v953, F.p1090);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1095_EmitS(yarr a_p1097) {
struct yf1098 F;
memset((void *)&F, 0, sizeof F);
F.p1097 = a_p1097;
yr1067_Put(&v953, yr1018_T(F.p1097));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1102_WriteTxt(rt_int a_p1103) {
struct yf1104 F;
memset((void *)&F, 0, sizeof F);
F.p1103 = a_p1103;
F.v2985 = ((rt_int *)(v885).p)[y_ix1(v885, F.p1103)];
while ((F.v2985 < (rt_add(((rt_int *)(v885).p)[y_ix1(v885, F.p1103)], ((rt_int *)(v887).p)[y_ix1(v887, F.p1103)])))) {
({ unsigned char pv = ((unsigned char *)(v880).p)[y_ix1(v880, F.v2985)]; y_put(&v878, &pv, sizeof pv); });
F.v2985 = rt_range(rt_add(F.v2985, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1108_WriteBuf(yR130 a_p1109) {
struct yf1110 F;
memset((void *)&F, 0, sizeof F);
F.p1109 = a_p1109;
F.v2992 = (F.p1109).f_head;
while ((!(F.v2992 == ((void *)0)))) {
yr1102_WriteTxt(((*(yR125 *)rt_nil_check(F.v2992))).f_t);
({ unsigned char pv = 10; y_put(&v878, &pv, sizeof pv); });
F.v2992 = ((*(yR125 *)rt_nil_check(F.v2992))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1114_Fail(rt_int a_p1115, rt_int a_p1116) {
struct yf1117 F;
memset((void *)&F, 0, sizeof F);
F.p1115 = a_p1115;
F.p1116 = a_p1116;
v918 = INT64_C(0);
v906 = INT64_C(0);
yr983_SB();
yr994_SA(y_str("line ", 5));
yr1007_SI(F.p1115);
yr994_SA(y_str(": ", 2));
yr1001_ST(F.p1116);
F.v2998 = yr1013_SE();
yr1102_WriteTxt(F.v2998);
({ unsigned char pv = 10; y_put(&v878, &pv, sizeof pv); });
y_close(&v878);
rt_raise(rt_exc("translation_error"));
rt_raise(Y_X_NO_RETURN);
}
static void yr1121_FailS(rt_int a_p1122, yarr a_p1124) {
struct yf1125 F;
memset((void *)&F, 0, sizeof F);
F.p1122 = a_p1122;
F.p1124 = a_p1124;
yr1114_Fail(F.p1122, yr1018_T(F.p1124));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1129_FailN(rt_int a_p1130, rt_int a_p1131, yarr a_p1133) {
struct yf1134 F;
memset((void *)&F, 0, sizeof F);
F.p1130 = a_p1130;
F.p1131 = a_p1131;
F.p1133 = a_p1133;
yr983_SB();
yr1001_ST(F.p1131);
yr994_SA(F.p1133);
F.v3012 = yr1013_SE();
yr1114_Fail(F.p1130, F.v3012);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1138_NewSerial(void) {
struct yf1139 F;
memset((void *)&F, 0, sizeof F);
v921 = rt_range(rt_add(v921, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
{ rt_int rv3016 = v921;
return rv3016; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1143_Fresh(yarr a_p1145) {
struct yf1146 F;
memset((void *)&F, 0, sizeof F);
F.p1145 = a_p1145;
F.v3020 = yr1138_NewSerial();
yr983_SB();
yr994_SA(F.p1145);
yr1007_SI(F.v3020);
{ rt_int rv3021 = yr1013_SE();
return rv3021; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1174_InitWords(void) {
struct yf1175 F;
memset((void *)&F, 0, sizeof F);
yr983_SB();
yr994_SA(y_str("ALIGNMENT ALPHABET AND ARRAY AS ASSERT AT BASE2 BASE8 BASE10 BASE16 BEGIN CASE ", 79));
yr994_SA(y_str("CONST DIMENSIONS DIV DO ELSE ELSIF END ENDEXCEPTION ENDFOR ENDFUNCTION ENDIF ", 77));
yr994_SA(y_str("ENDLOOP ENDMODULE ENDMONITOR ENDPROCEDURE ENDPROCESS ENDRECORD ENDSELECT ", 73));
yr994_SA(y_str("ENDTEMPLATE ENDWHILE EXCEPTION EXIT EXPORT EXTENDS FILE FOR FUNCTION GOTO IF ", 77));
yr994_SA(y_str("IMPORT IN INLINE INSTANCE INSTANCES LABEL LOOP MOD MODULE MONITOR NIL NOT OF ", 77));
yr994_SA(y_str("OPAQUE OR ORDERED OUT PACKED POINTER PRECISION PRIORITY PROCEDURE PROCESS ", 74));
yr994_SA(y_str("PROPAGATE_EXCEPTION READONLY RECORD REPLACES REPRESENTATION RETURN RETURNS ", 75));
yr994_SA(y_str("SCALE SELECT SET SIMULATED_TIME SIZE SPACE TEMPLATE TERMINATE_PROCESS THEN ", 75));
yr994_SA(y_str("TRANSPARENT TYPE UNORDERED VAR WHILE XOR ", 41));
yr994_SA(y_str("<<<= >>>= ### === <<< >>> <<= >>= *** /// --- +++ := -> .. <= >= ## == << >> ", 77));
yr994_SA(y_str("** // -- ++ # + - * / = < > ( ) [ ] , ; : . ^ ", 46));
F.v3028 = yr1013_SE();
v889 = INT64_C(0);
F.v3024 = ((rt_int *)(v885).p)[y_ix1(v885, F.v3028)];
{ rt_int hi3048 = rt_sub((rt_add(((rt_int *)(v885).p)[y_ix1(v885, F.v3028)], ((rt_int *)(v887).p)[y_ix1(v887, F.v3028)])), INT64_C(1));
for (rt_int i3047 = ((rt_int *)(v885).p)[y_ix1(v885, F.v3028)]; i3047 <= hi3048; i3047++) { F.c_3046 = i3047;
if ((((unsigned char *)(v880).p)[y_ix1(v880, F.c_3046)] == 32)) {
F.v3026 = yr1025_Intern(F.v3024, rt_range(rt_sub(F.c_3046, F.v3024), INT64_C(-4611686018427387904), INT64_C(4611686018427387904)));
F.v3024 = rt_range(rt_add(F.c_3046, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
}
if (i3047 == hi3048) break;
}}
if ((!(v889 == v591))) {
rt_raise(rt_exc("word_table"));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1179_ReadSource(void) {
struct yf1180 F;
memset((void *)&F, 0, sizeof F);
y_open(&v876, y_str("INPUT", 5), 0);
v1159 = rt_range(rt_add(v882, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
while ((!y_check_eof(&v876))) {
({ unsigned char g; y_get(&v876, &g, sizeof g); F.v3055 = g; });
yr977_PoolAdd(F.v3055);
}
v1162 = v882;
y_close(&v876);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1184_AddTok(rt_int a_p1185, rt_int a_p1186) {
struct yf1187 F;
memset((void *)&F, 0, sizeof F);
F.p1185 = a_p1185;
F.p1186 = a_p1186;
v1156 = rt_range(rt_add(v1156, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
((rt_int *)(v1150).p)[y_ix1(v1150, v1156)] = F.p1185;
((rt_int *)(v1152).p)[y_ix1(v1152, v1156)] = F.p1186;
((rt_int *)(v1154).p)[y_ix1(v1154, v1156)] = v1168;
return;
rt_raise(Y_X_NO_RETURN);
}
static unsigned char yr1191_At(rt_int a_p1192) {
struct yf1193 F;
memset((void *)&F, 0, sizeof F);
F.p1192 = a_p1192;
if ((F.p1192 > v1162)) {
{ unsigned char rv3068 = 0;
return rv3068; }
}
{ unsigned char rv3069 = ((unsigned char *)(v880).p)[y_ix1(v880, F.p1192)];
return rv3069; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1197_EndsOperand(void) {
struct yf1198 F;
memset((void *)&F, 0, sizeof F);
if ((v1156 == INT64_C(0))) {
{ rt_int rv3077 = 0;
return rv3077; }
}
F.v3072 = ((rt_int *)(v1150).p)[y_ix1(v1150, v1156)];
F.v3074 = ((rt_int *)(v1152).p)[y_ix1(v1152, v1156)];
if ((((((((F.v3072 == v177)) || ((F.v3072 == v186))) || ((F.v3072 == v189))) || ((F.v3072 == v192))) || ((F.v3072 == v195))) || ((F.v3072 == v198)))) {
{ rt_int rv3079 = 1;
return rv3079; }
}
if ((F.v3072 == v183)) {
{ rt_int rv3080 = ((((F.v3074 == v567)) || ((F.v3074 == v573))) || ((F.v3074 == v588)));
return rv3080; }
}
if ((F.v3072 == v180)) {
{ rt_int rv3081 = (F.v3074 == v357);
return rv3081; }
}
{ rt_int rv3083 = 0;
return rv3083; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1202_DigitVal(unsigned char a_p1203) {
struct yf1204 F;
memset((void *)&F, 0, sizeof F);
F.p1203 = a_p1203;
if ((((F.p1203 >= 48)) && ((F.p1203 <= 57)))) {
{ rt_int rv3090 = rt_range(rt_sub(((rt_int *)(v928).p)[y_ix1(v928, F.p1203)], INT64_C(48)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
return rv3090; }
}
if ((((F.p1203 >= 65)) && ((F.p1203 <= 70)))) {
{ rt_int rv3095 = rt_range(rt_sub(((rt_int *)(v928).p)[y_ix1(v928, F.p1203)], INT64_C(55)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
return rv3095; }
}
{ rt_int rv3097 = INT64_C(99);
return rv3097; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1208_LexError(yarr a_p1210) {
struct yf1211 F;
memset((void *)&F, 0, sizeof F);
F.p1210 = a_p1210;
yr1121_FailS(v1168, F.p1210);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1215_LexNumber(rt_int a_p1216) {
struct yf1217 F;
memset((void *)&F, 0, sizeof F);
F.p1216 = a_p1216;
F.v3103 = INT64_C(10);
F.v3114 = 0;
F.v3117 = INT64_C(0);
F.v3120 = INT64_C(0);
F.v3123 = INT64_C(0);
F.v3126 = INT64_C(0);
F.v3129 = INT64_C(0);
if ((!(v1171 == INT64_C(0)))) {
F.v3103 = v1171;
}
v1171 = INT64_C(0);
F.v3106 = v1165;
while ((yr1202_DigitVal(yr1191_At(v1165)) < F.v3103)) {
v1165 = rt_range(rt_add(v1165, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
}
F.v3108 = v1165;
F.v3110 = v1165;
F.v3112 = v1165;
if ((((yr1191_At(v1165) == 46)) && ((!(yr1191_At(rt_range(rt_add(v1165, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904))) == 46))))) {
F.v3114 = 1;
v1165 = rt_range(rt_add(v1165, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
F.v3110 = v1165;
while ((yr1202_DigitVal(yr1191_At(v1165)) < F.v3103)) {
v1165 = rt_range(rt_add(v1165, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
}
F.v3112 = v1165;
}
if ((yr1191_At(v1165) == 80)) {
v1165 = rt_range(rt_add(v1165, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
F.v3126 = INT64_C(1);
if ((((((yr1191_At(v1165) == 45)) || ((yr1191_At(v1165) == 43)))) && yr971_IsDigit(yr1191_At(rt_range(rt_add(v1165, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904)))))) {
if ((yr1191_At(v1165) == 45)) {
F.v3126 = INT64_C(-1);
}
v1165 = rt_range(rt_add(v1165, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
}
F.v3123 = INT64_C(0);
while (yr971_IsDigit(yr1191_At(v1165))) {
F.v3123 = rt_range(rt_add((rt_mul(F.v3123, INT64_C(10))), yr1202_DigitVal(yr1191_At(v1165))), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
v1165 = rt_range(rt_add(v1165, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
}
F.v3123 = rt_range(rt_mul(F.v3123, F.v3126), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
F.v3117 = INT64_C(0);
{ rt_int hi3172 = rt_sub(F.v3108, INT64_C(1));
for (rt_int i3171 = F.v3106; i3171 <= hi3172; i3171++) { F.c_3170 = i3171;
F.v3117 = rt_range(rt_add((rt_mul(F.v3117, F.v3103)), yr1202_DigitVal(((unsigned char *)(v880).p)[y_ix1(v880, F.c_3170)])), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
if (i3171 == hi3172) break;
}}
F.v3129 = rt_range(rt_sub(F.v3112, F.v3110), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
{ rt_int hi3182 = rt_sub(F.v3112, INT64_C(1));
for (rt_int i3181 = F.v3110; i3181 <= hi3182; i3181++) { F.c_3180 = i3181;
F.v3117 = rt_range(rt_add((rt_mul(F.v3117, F.v3103)), yr1202_DigitVal(((unsigned char *)(v880).p)[y_ix1(v880, F.c_3180)])), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
if (i3181 == hi3182) break;
}}
yr983_SB();
yr994_SA(y_str("(", 1));
if (F.p1216) {
yr994_SA(y_str("-", 1));
}
yr994_SA(y_str("(double)", 8));
yr1007_SI(F.v3117);
yr994_SA(y_str(" * pow(", 7));
yr1007_SI(F.v3103);
yr994_SA(y_str(", ", 2));
yr1007_SI(rt_range(rt_sub(F.v3123, F.v3129), INT64_C(-4611686018427387904), INT64_C(4611686018427387904)));
yr994_SA(y_str("))", 2));
F.v3132 = yr1013_SE();
yr1184_AddTok(v189, F.v3132);
return;
}
if (F.v3114) {
if ((!(F.v3103 == INT64_C(10)))) {
yr1208_LexError(y_str("a floating-point literal is decimal", 35));
}
if ((yr1191_At(v1165) == 69)) {
v1165 = rt_range(rt_add(v1165, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
if ((((yr1191_At(v1165) == 45)) || ((yr1191_At(v1165) == 43)))) {
v1165 = rt_range(rt_add(v1165, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
}
while (yr971_IsDigit(yr1191_At(v1165))) {
v1165 = rt_range(rt_add(v1165, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
}
}
yr983_SB();
if (F.p1216) {
yr994_SA(y_str("-", 1));
}
{ rt_int hi3210 = rt_sub(v1165, INT64_C(1));
for (rt_int i3209 = F.v3106; i3209 <= hi3210; i3209++) { F.c_3208 = i3209;
yr988_SC(((unsigned char *)(v880).p)[y_ix1(v880, F.c_3208)]);
if (i3209 == hi3210) break;
}}
F.v3132 = yr1013_SE();
yr1184_AddTok(v192, F.v3132);
return;
}
F.v3117 = INT64_C(0);
{ rt_int hi3218 = rt_sub(F.v3108, INT64_C(1));
for (rt_int i3217 = F.v3106; i3217 <= hi3218; i3217++) { F.c_3216 = i3217;
F.v3120 = yr1202_DigitVal(((unsigned char *)(v880).p)[y_ix1(v880, F.c_3216)]);
if ((F.v3117 > (rt_div(INT64_C(4611686018427387903), F.v3103)))) {
yr1208_LexError(y_str("integer literal too large", 25));
}
F.v3117 = rt_range(rt_add((rt_mul(F.v3117, F.v3103)), F.v3120), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
if (i3217 == hi3218) break;
}}
if (F.p1216) {
F.v3117 = rt_range(rt_neg(F.v3117), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
}
yr1184_AddTok(v186, F.v3117);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1221_LexString(void) {
struct yf1222 F;
memset((void *)&F, 0, sizeof F);
yr983_SB();
for (;;) {
v1165 = rt_range(rt_add(v1165, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
while ((!(yr1191_At(v1165) == 34))) {
if ((((yr1191_At(v1165) == 10)) || ((v1165 > v1162)))) {
v894 = 0;
yr1208_LexError(y_str("a string must close on its line", 31));
}
yr988_SC(yr1191_At(v1165));
v1165 = rt_range(rt_add(v1165, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
}
v1165 = rt_range(rt_add(v1165, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
F.v3229 = v1165;
F.v3231 = INT64_C(0);
F.v3233 = 1;
while (F.v3233) {
if (((((yr1191_At(F.v3229) == 32)) || ((yr1191_At(F.v3229) == 9))) || ((yr1191_At(F.v3229) == 13)))) {
F.v3229 = rt_range(rt_add(F.v3229, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
} else if ((yr1191_At(F.v3229) == 10)) {
F.v3231 = rt_range(rt_add(F.v3231, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
F.v3229 = rt_range(rt_add(F.v3229, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
} else {
F.v3233 = 0;
}
}
if ((!(yr1191_At(F.v3229) == 34))) {
goto yl_3234;
}
v1168 = rt_range(rt_add(v1168, F.v3231), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
v1165 = F.v3229;
}
yl_3234: ;
F.v3227 = yr1013_SE();
yr1184_AddTok(v198, F.v3227);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1226_Lex(void) {
struct yf1227 F;
memset((void *)&F, 0, sizeof F);
v1165 = v1159;
while ((v1165 <= v1162)) {
F.v3262 = ((unsigned char *)(v880).p)[y_ix1(v880, v1165)];
if ((F.v3262 == 10)) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
v1165 = rt_range(rt_add(v1165, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
} else if ((((((F.v3262 == 32)) || ((F.v3262 == 9))) || ((F.v3262 == 13))) || ((F.v3262 == 12)))) {
v1165 = rt_range(rt_add(v1165, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
} else if ((((F.v3262 == 40)) && ((yr1191_At(rt_range(rt_add(v1165, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904))) == 42)))) {
v1165 = rt_range(rt_add(v1165, INT64_C(2)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
while ((!((((yr1191_At(v1165) == 42)) && ((yr1191_At(rt_range(rt_add(v1165, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904))) == 41)))))) {
if ((((yr1191_At(v1165) == 10)) || ((v1165 > v1162)))) {
yr1208_LexError(y_str("a comment must close on its line", 32));
}
v1165 = rt_range(rt_add(v1165, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
}
v1165 = rt_range(rt_add(v1165, INT64_C(2)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
} else if ((yr971_IsDigit(F.v3262) || ((((v1171 == INT64_C(16))) && ((yr1202_DigitVal(F.v3262) < INT64_C(16))))))) {
yr1215_LexNumber(0);
} else if (((((((F.v3262 == 45)) || ((F.v3262 == 43)))) && (!yr1197_EndsOperand())) && ((yr971_IsDigit(yr1191_At(rt_range(rt_add(v1165, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904)))) || ((((v1171 == INT64_C(16))) && ((yr1202_DigitVal(yr1191_At(rt_range(rt_add(v1165, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904)))) < INT64_C(16))))))))) {
v1165 = rt_range(rt_add(v1165, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
yr1215_LexNumber((F.v3262 == 45));
} else if (yr965_IsLetter(F.v3262)) {
F.v3264 = v1165;
while ((yr965_IsLetter(yr1191_At(v1165)) || yr971_IsDigit(yr1191_At(v1165)))) {
v1165 = rt_range(rt_add(v1165, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
}
F.v3272 = yr1025_Intern(F.v3264, rt_range(rt_sub(v1165, F.v3264), INT64_C(-4611686018427387904), INT64_C(4611686018427387904)));
if ((F.v3272 == v222)) {
v1171 = INT64_C(2);
} else if ((F.v3272 == v225)) {
v1171 = INT64_C(8);
} else if ((F.v3272 == v228)) {
v1171 = INT64_C(10);
} else if ((F.v3272 == v231)) {
v1171 = INT64_C(16);
} else if ((F.v3272 <= v462)) {
yr1184_AddTok(v180, F.v3272);
} else {
yr1184_AddTok(v177, F.v3272);
}
} else if ((F.v3262 == 39)) {
F.v3264 = rt_range(rt_add(v1165, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
F.v3266 = F.v3264;
while ((!(yr1191_At(F.v3266) == 39))) {
if (((((yr1191_At(F.v3266) == 10)) || ((yr1191_At(F.v3266) == 34))) || ((F.v3266 > v1162)))) {
yr1208_LexError(y_str("bad character literal", 21));
}
F.v3266 = rt_range(rt_add(F.v3266, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
}
if ((F.v3266 == F.v3264)) {
yr1208_LexError(y_str("empty character literal", 23));
}
F.v3272 = yr1025_Intern(F.v3264, rt_range(rt_sub(F.v3266, F.v3264), INT64_C(-4611686018427387904), INT64_C(4611686018427387904)));
yr1184_AddTok(v195, F.v3272);
v1165 = rt_range(rt_add(F.v3266, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
} else if ((F.v3262 == 34)) {
yr1221_LexString();
} else {
F.v3268 = INT64_C(0);
F.v3266 = rt_range(rt_add(v462, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
while ((((F.v3268 == INT64_C(0))) && ((F.v3266 <= v591)))) {
F.v3270 = ((rt_int *)(v887).p)[y_ix1(v887, F.v3266)];
F.v3276 = 1;
{ rt_int hi3351 = rt_sub(F.v3270, INT64_C(1));
for (rt_int i3350 = INT64_C(0); i3350 <= hi3351; i3350++) { F.c_3349 = i3350;
if ((!(yr1191_At(rt_range(rt_add(v1165, F.c_3349), INT64_C(-4611686018427387904), INT64_C(4611686018427387904))) == ((unsigned char *)(v880).p)[y_ix1(v880, rt_add(((rt_int *)(v885).p)[y_ix1(v885, F.v3266)], F.c_3349))]))) {
F.v3276 = 0;
}
if (i3350 == hi3351) break;
}}
if (F.v3276) {
F.v3268 = F.v3266;
}
F.v3266 = rt_range(rt_add(F.v3266, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
}
if ((F.v3268 == INT64_C(0))) {
yr1208_LexError(y_str("a character that is not in the language", 39));
}
yr1184_AddTok(v183, F.v3268);
v1165 = rt_range(rt_add(v1165, ((rt_int *)(v887).p)[y_ix1(v887, F.v3268)]), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
}
}
yr1184_AddTok(v174, INT64_C(0));
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1242_NewNode(rt_int a_p1243, rt_int a_p1244) {
struct yf1245 F;
memset((void *)&F, 0, sizeof F);
F.p1243 = a_p1243;
F.p1244 = a_p1244;
({ F.v3365 = rt_alloc(sizeof(yR95)); });
(*(yR95 *)rt_nil_check(F.v3365)) = ((yR95){ .f_kind = F.p1243, .f_line = F.p1244, .f_ival = INT64_C(0), .f_flag = INT64_C(0), .f_name = INT64_C(0), .f_text = INT64_C(0), .f_a = ((void *)0), .f_b = ((void *)0), .f_c = ((void *)0), .f_d = ((void *)0), .f_e = ((void *)0), .f_next = ((void *)0), .f_rep = ((void *)0), .f_sym = ((void *)0) });
{ void * rv3370 = F.v3365;
return rv3370; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1249_Link(void * * a_p1250, void * * a_p1251, void * a_p1252) {
struct yf1253 F;
memset((void *)&F, 0, sizeof F);
F.p1250 = a_p1250;
F.p1251 = a_p1251;
F.p1252 = a_p1252;
if (((*F.p1250) == ((void *)0))) {
(*F.p1250) = F.p1252;
} else {
((*(yR95 *)rt_nil_check((*F.p1251)))).f_next = F.p1252;
}
(*F.p1251) = F.p1252;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1257_Count(void * a_p1258) {
struct yf1259 F;
memset((void *)&F, 0, sizeof F);
F.p1258 = a_p1258;
F.v3378 = INT64_C(0);
F.v3381 = F.p1258;
while ((!(F.v3381 == ((void *)0)))) {
F.v3378 = rt_range(rt_add(F.v3378, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
F.v3381 = ((*(yR95 *)rt_nil_check(F.v3381))).f_next;
}
{ rt_int rv3384 = F.v3378;
return rv3384; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1263_TK(void) {
struct yf1264 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv3386 = ((rt_int *)(v1150).p)[y_ix1(v1150, v1231)];
return rv3386; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1268_TV(void) {
struct yf1269 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv3388 = ((rt_int *)(v1152).p)[y_ix1(v1152, v1231)];
return rv3388; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1273_TLn(void) {
struct yf1274 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv3390 = ((rt_int *)(v1154).p)[y_ix1(v1154, v1231)];
return rv3390; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1278_IsAt(rt_int a_p1279, rt_int a_p1280) {
struct yf1281 F;
memset((void *)&F, 0, sizeof F);
F.p1279 = a_p1279;
F.p1280 = a_p1280;
F.v3395 = ((rt_int *)(v1150).p)[y_ix1(v1150, rt_add(v1231, F.p1279))];
{ rt_int rv3398 = (((((F.v3395 == v180)) || ((F.v3395 == v183)))) && ((((rt_int *)(v1152).p)[y_ix1(v1152, rt_add(v1231, F.p1279))] == F.p1280)));
return rv3398; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1285_Is(rt_int a_p1286) {
struct yf1287 F;
memset((void *)&F, 0, sizeof F);
F.p1286 = a_p1286;
{ rt_int rv3402 = yr1278_IsAt(INT64_C(0), F.p1286);
return rv3402; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1291_IsIdAt(rt_int a_p1292) {
struct yf1293 F;
memset((void *)&F, 0, sizeof F);
F.p1292 = a_p1292;
{ rt_int rv3406 = (((rt_int *)(v1150).p)[y_ix1(v1150, rt_add(v1231, F.p1292))] == v177);
return rv3406; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1297_Skip(void) {
struct yf1298 F;
memset((void *)&F, 0, sizeof F);
if ((!(((rt_int *)(v1150).p)[y_ix1(v1150, v1231)] == v174))) {
v1231 = rt_range(rt_add(v1231, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1302_Accept(rt_int a_p1303) {
struct yf1304 F;
memset((void *)&F, 0, sizeof F);
F.p1303 = a_p1303;
if (yr1285_Is(F.p1303)) {
yr1297_Skip();
{ rt_int rv3413 = 1;
return rv3413; }
}
{ rt_int rv3415 = 0;
return rv3415; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1308_TokText(void) {
struct yf1309 F;
memset((void *)&F, 0, sizeof F);
F.v3418 = yr1263_TK();
if ((((((F.v3418 == v177)) || ((F.v3418 == v180))) || ((F.v3418 == v183))) || ((F.v3418 == v195)))) {
{ rt_int rv3419 = rt_range(yr1268_TV(), INT64_C(0), INT64_C(4000000));
return rv3419; }
}
if ((F.v3418 == v174)) {
{ rt_int rv3421 = yr1018_T(y_str("the end of the text", 19));
return rv3421; }
}
if ((F.v3418 == v186)) {
yr983_SB();
yr1007_SI(yr1268_TV());
{ rt_int rv3422 = yr1013_SE();
return rv3422; }
}
{ rt_int rv3424 = yr1018_T(y_str("a literal", 9));
return rv3424; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1313_Expect(rt_int a_p1314) {
struct yf1315 F;
memset((void *)&F, 0, sizeof F);
F.p1314 = a_p1314;
if ((!yr1302_Accept(F.p1314))) {
yr983_SB();
yr994_SA(y_str("expected ", 9));
yr1001_ST(rt_range(F.p1314, INT64_C(0), INT64_C(4000000)));
yr994_SA(y_str(", found ", 8));
yr1001_ST(yr1308_TokText());
F.v3428 = yr1013_SE();
yr1114_Fail(yr1273_TLn(), F.v3428);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1319_Ident(void) {
struct yf1320 F;
memset((void *)&F, 0, sizeof F);
if ((!(yr1263_TK() == v177))) {
yr983_SB();
yr994_SA(y_str("expected an identifier, found ", 30));
yr1001_ST(yr1308_TokText());
F.v3433 = yr1013_SE();
yr1114_Fail(yr1273_TLn(), F.v3433);
}
F.v3433 = rt_range(yr1268_TV(), INT64_C(0), INT64_C(4000000));
yr1297_Skip();
{ rt_int rv3435 = F.v3433;
return rv3435; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1324_CloseName(rt_int a_p1325, rt_int a_p1326) {
struct yf1327 F;
memset((void *)&F, 0, sizeof F);
F.p1325 = a_p1325;
F.p1326 = a_p1326;
if (((((yr1263_TK() == v177)) || ((yr1263_TK() == v180))) || ((yr1263_TK() == v183)))) {
F.v3440 = rt_range(yr1268_TV(), INT64_C(0), INT64_C(4000000));
if ((F.v3440 == F.p1325)) {
yr1297_Skip();
return;
}
}
yr1129_FailN(F.p1326, F.p1325, y_str(" is closed with another name", 28));
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1331_ExtendedId(void) {
struct yf1332 F;
memset((void *)&F, 0, sizeof F);
F.v3444 = rt_range(yr1268_TV(), INT64_C(0), INT64_C(4000000));
if ((yr1263_TK() == v177)) {
yr1297_Skip();
{ rt_int rv3445 = F.v3444;
return rv3445; }
}
if ((((yr1263_TK() == v180)) && (((((((((F.v3444 == v360)) || ((F.v3444 == v207))) || ((F.v3444 == v369))) || ((F.v3444 == v246))) || ((F.v3444 == v348))) || ((F.v3444 == v459))) || ((F.v3444 == v330)))))) {
yr1297_Skip();
{ rt_int rv3446 = F.v3444;
return rv3446; }
}
if (((((((((((((yr1263_TK() == v183)) && ((!(F.v3444 == v564)))) && ((!(F.v3444 == v567)))) && ((!(F.v3444 == v570)))) && ((!(F.v3444 == v573)))) && ((!(F.v3444 == v576)))) && ((!(F.v3444 == v579)))) && ((!(F.v3444 == v582)))) && ((!(F.v3444 == v585)))) && ((!(F.v3444 == v507)))) && ((!(F.v3444 == v504))))) {
yr1297_Skip();
{ rt_int rv3447 = F.v3444;
return rv3447; }
}
yr1121_FailS(yr1273_TLn(), y_str("expected a name", 15));
{ rt_int rv3450 = INT64_C(0);
return rv3450; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1336_IsLabel(rt_int a_p1337) {
struct yf1338 F;
memset((void *)&F, 0, sizeof F);
F.p1337 = a_p1337;
F.v3454 = v1234;
while ((!(F.v3454 == ((void *)0)))) {
if ((((*(yR95 *)rt_nil_check(F.v3454))).f_name == F.p1337)) {
{ rt_int rv3456 = 1;
return rv3456; }
}
F.v3454 = ((*(yR95 *)rt_nil_check(F.v3454))).f_next;
}
{ rt_int rv3458 = 0;
return rv3458; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1342_ImportItem(void) {
struct yf1343 F;
memset((void *)&F, 0, sizeof F);
F.v3461 = yr1242_NewNode(v597, yr1273_TLn());
((*(yR95 *)rt_nil_check(F.v3461))).f_name = yr1331_ExtendedId();
if ((yr1291_IsIdAt(INT64_C(0)) && ((yr1268_TV() == v1236)))) {
yr1297_Skip();
((*(yR95 *)rt_nil_check(F.v3461))).f_text = yr1319_Ident();
}
if (yr1302_Accept(v213)) {
((*(yR95 *)rt_nil_check(F.v3461))).f_ival = yr1331_ExtendedId();
}
{ void * rv3463 = F.v3461;
return rv3463; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1347_ParseModule(void) {
struct yf1348 F;
memset((void *)&F, 0, sizeof F);
F.v3466 = yr1242_NewNode(v594, yr1273_TLn());
F.v3468 = ((void *)0);
F.v3470 = ((void *)0);
F.v3472 = ((void *)0);
if (yr1302_Accept(v354)) {
((*(yR95 *)rt_nil_check(F.v3466))).f_flag = INT64_C(1);
} else {
yr1313_Expect(v351);
}
((*(yR95 *)rt_nil_check(F.v3466))).f_name = yr1319_Ident();
while (yr1302_Accept(v327)) {
for (;;) {
F.v3468 = yr1342_ImportItem();
yr1249_Link(&((*(yR95 *)rt_nil_check(F.v3466))).f_a, &F.v3470, F.v3468);
if ((!yr1302_Accept(v576))) {
goto yl_3476;
}
}
yl_3476: ;
yr1313_Expect(v579);
}
while (yr1302_Accept(v306)) {
F.v3474 = INT64_C(0);
if ((((yr1285_Is(v366) || yr1285_Is(v444)) || yr1285_Is(v399)) || yr1285_Is(v453))) {
F.v3474 = yr1268_TV();
yr1297_Skip();
}
for (;;) {
F.v3468 = yr1342_ImportItem();
((*(yR95 *)rt_nil_check(F.v3468))).f_flag = F.v3474;
yr1249_Link(&((*(yR95 *)rt_nil_check(F.v3466))).f_b, &F.v3472, F.v3468);
if ((!yr1302_Accept(v576))) {
goto yl_3478;
}
}
yl_3478: ;
yr1313_Expect(v579);
}
((*(yR95 *)rt_nil_check(F.v3466))).f_c = yr1357_ParseBlock();
if ((((*(yR95 *)rt_nil_check(F.v3466))).f_flag == INT64_C(1))) {
yr1313_Expect(v279);
} else {
yr1313_Expect(v276);
}
yr1324_CloseName(((*(yR95 *)rt_nil_check(F.v3466))).f_name, ((*(yR95 *)rt_nil_check(F.v3466))).f_line);
{ void * rv3480 = F.v3466;
return rv3480; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1352_IsDeclWord(void) {
struct yf1353 F;
memset((void *)&F, 0, sizeof F);
if ((!(yr1263_TK() == v180))) {
{ rt_int rv3485 = 0;
return rv3485; }
}
F.v3483 = yr1268_TV();
{ rt_int rv3486 = (((((((((((((F.v3483 == v240)) || ((F.v3483 == v453))) || ((F.v3483 == v342))) || ((F.v3483 == v447))) || ((F.v3483 == v408))) || ((F.v3483 == v318))) || ((F.v3483 == v390))) || ((F.v3483 == v351))) || ((F.v3483 == v354))) || ((F.v3483 == v435))) || ((F.v3483 == v336))) || ((F.v3483 == v393)));
return rv3486; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1357_ParseBlock(void) {
struct yf1358 F;
memset((void *)&F, 0, sizeof F);
F.v3489 = yr1242_NewNode(v600, yr1273_TLn());
F.v3491 = ((void *)0);
F.v3493 = v1234;
while (yr1352_IsDeclWord()) {
yr1384_ParseDeclGroup(&((*(yR95 *)rt_nil_check(F.v3489))).f_a, &F.v3491);
while (yr1302_Accept(v579)) {
}
}
if (yr1285_Is(v300)) {
((*(yR95 *)rt_nil_check(F.v3489))).f_b = yr1362_ParseHandler();
F.v3495 = ((*(yR95 *)rt_nil_check(F.v3489))).f_b;
if (yr1302_Accept(v579)) {
}
}
((*(yR95 *)rt_nil_check(F.v3489))).f_c = yr1448_ParseStatements(1);
v1234 = F.v3493;
{ void * rv3497 = F.v3489;
return rv3497; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1362_ParseHandler(void) {
struct yf1363 F;
memset((void *)&F, 0, sizeof F);
F.v3500 = yr1242_NewNode(v603, yr1273_TLn());
F.v3502 = ((void *)0);
F.v3504 = ((void *)0);
F.v3506 = ((void *)0);
F.v3508 = ((void *)0);
yr1313_Expect(v300);
while (yr1302_Accept(v237)) {
F.v3502 = yr1242_NewNode(v606, yr1273_TLn());
F.v3508 = ((void *)0);
for (;;) {
F.v3506 = yr1242_NewNode(v639, yr1273_TLn());
((*(yR95 *)rt_nil_check(F.v3506))).f_name = yr1319_Ident();
yr1249_Link(&((*(yR95 *)rt_nil_check(F.v3502))).f_a, &F.v3508, F.v3506);
if ((!yr1302_Accept(v576))) {
goto yl_3509;
}
}
yl_3509: ;
yr1313_Expect(v504);
((*(yR95 *)rt_nil_check(F.v3502))).f_b = yr1448_ParseStatements(0);
yr1249_Link(&((*(yR95 *)rt_nil_check(F.v3500))).f_a, &F.v3504, F.v3502);
}
if (yr1302_Accept(v252)) {
((*(yR95 *)rt_nil_check(F.v3500))).f_flag = INT64_C(1);
((*(yR95 *)rt_nil_check(F.v3500))).f_b = yr1448_ParseStatements(0);
}
yr1313_Expect(v261);
{ void * rv3513 = F.v3500;
return rv3513; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1367_ParseNames(void) {
struct yf1368 F;
memset((void *)&F, 0, sizeof F);
F.v3516 = ((void *)0);
F.v3518 = ((void *)0);
F.v3520 = ((void *)0);
for (;;) {
F.v3520 = yr1242_NewNode(v639, yr1273_TLn());
((*(yR95 *)rt_nil_check(F.v3520))).f_name = yr1319_Ident();
if (yr1302_Accept(v219)) {
((*(yR95 *)rt_nil_check(F.v3520))).f_a = yr1510_ParseExpr();
}
yr1249_Link(&F.v3516, &F.v3518, F.v3520);
if ((!yr1302_Accept(v576))) {
goto yl_3521;
}
}
yl_3521: ;
{ void * rv3522 = F.v3516;
return rv3522; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1372_SimpleEntry(rt_int a_p1373) {
struct yf1374 F;
memset((void *)&F, 0, sizeof F);
F.p1373 = a_p1373;
if ((F.p1373 == v240)) {
F.v3526 = yr1242_NewNode(v609, yr1273_TLn());
((*(yR95 *)rt_nil_check(F.v3526))).f_a = yr1367_ParseNames();
yr1313_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3526))).f_b = yr1413_ParseRep();
yr1313_Expect(v555);
((*(yR95 *)rt_nil_check(F.v3526))).f_c = yr1510_ParseExpr();
} else if ((F.p1373 == v453)) {
F.v3526 = yr1242_NewNode(v612, yr1273_TLn());
((*(yR95 *)rt_nil_check(F.v3526))).f_a = yr1367_ParseNames();
yr1313_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3526))).f_b = yr1413_ParseRep();
if (yr1302_Accept(v501)) {
((*(yR95 *)rt_nil_check(F.v3526))).f_c = yr1510_ParseExpr();
}
} else if ((F.p1373 == v447)) {
F.v3526 = yr1242_NewNode(v618, yr1273_TLn());
((*(yR95 *)rt_nil_check(F.v3526))).f_name = yr1319_Ident();
yr1313_Expect(v555);
((*(yR95 *)rt_nil_check(F.v3526))).f_b = yr1433_ParseConcrete1();
} else {
F.v3526 = yr1242_NewNode(v621, yr1273_TLn());
((*(yR95 *)rt_nil_check(F.v3526))).f_name = yr1319_Ident();
yr1313_Expect(v555);
((*(yR95 *)rt_nil_check(F.v3526))).f_b = yr1413_ParseRep();
}
{ void * rv3527 = F.v3526;
return rv3527; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1378_Continues(rt_int a_p1379) {
struct yf1380 F;
memset((void *)&F, 0, sizeof F);
F.p1379 = a_p1379;
if ((!((yr1285_Is(v579) && yr1291_IsIdAt(INT64_C(1)))))) {
{ rt_int rv3532 = 0;
return rv3532; }
}
if (yr1336_IsLabel(rt_range(((rt_int *)(v1152).p)[y_ix1(v1152, rt_add(v1231, INT64_C(1)))], INT64_C(0), INT64_C(4000000)))) {
{ rt_int rv3536 = 0;
return rv3536; }
}
if ((((F.p1379 == v240)) || ((F.p1379 == v453)))) {
{ rt_int rv3539 = (yr1278_IsAt(INT64_C(2), v576) || yr1278_IsAt(INT64_C(2), v582));
return rv3539; }
}
{ rt_int rv3541 = yr1278_IsAt(INT64_C(2), v555);
return rv3541; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1384_ParseDeclGroup(void * * a_p1385, void * * a_p1386) {
struct yf1387 F;
memset((void *)&F, 0, sizeof F);
F.p1385 = a_p1385;
F.p1386 = a_p1386;
F.v3546 = yr1268_TV();
if ((((((F.v3546 == v240)) || ((F.v3546 == v453))) || ((F.v3546 == v447))) || ((F.v3546 == v408)))) {
yr1297_Skip();
yr1249_Link(&(*F.p1385), &(*F.p1386), yr1372_SimpleEntry(F.v3546));
while (yr1378_Continues(F.v3546)) {
yr1297_Skip();
yr1249_Link(&(*F.p1385), &(*F.p1386), yr1372_SimpleEntry(F.v3546));
}
return;
}
if ((F.v3546 == v342)) {
F.v3548 = yr1242_NewNode(v615, yr1273_TLn());
yr1297_Skip();
F.v3552 = ((void *)0);
for (;;) {
F.v3550 = yr1242_NewNode(v639, yr1273_TLn());
((*(yR95 *)rt_nil_check(F.v3550))).f_name = yr1319_Ident();
yr1249_Link(&((*(yR95 *)rt_nil_check(F.v3548))).f_a, &F.v3552, F.v3550);
if ((!yr1302_Accept(v576))) {
goto yl_3553;
}
}
yl_3553: ;
F.v3550 = ((*(yR95 *)rt_nil_check(F.v3548))).f_a;
while ((!(F.v3550 == ((void *)0)))) {
((*(yR95 *)rt_nil_check(F.v3548))).f_b = yr1242_NewNode(v639, ((*(yR95 *)rt_nil_check(F.v3550))).f_line);
((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v3548))).f_b))).f_name = ((*(yR95 *)rt_nil_check(F.v3550))).f_name;
((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v3548))).f_b))).f_next = v1234;
v1234 = ((*(yR95 *)rt_nil_check(F.v3548))).f_b;
F.v3550 = ((*(yR95 *)rt_nil_check(F.v3550))).f_next;
}
((*(yR95 *)rt_nil_check(F.v3548))).f_b = ((void *)0);
yr1249_Link(&(*F.p1385), &(*F.p1386), F.v3548);
return;
}
yr1249_Link(&(*F.p1385), &(*F.p1386), yr1391_ParseDecl());
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1391_ParseDecl(void) {
struct yf1392 F;
memset((void *)&F, 0, sizeof F);
F.v3562 = yr1268_TV();
F.v3564 = yr1273_TLn();
if ((((F.v3562 == v318)) || ((F.v3562 == v390)))) {
F.v3556 = yr1242_NewNode(v624, F.v3564);
yr1297_Skip();
if ((F.v3562 == v318)) {
((*(yR95 *)rt_nil_check(F.v3556))).f_flag = INT64_C(1);
}
if ((yr1285_Is(v309) || yr1285_Is(v405))) {
((*(yR95 *)rt_nil_check(F.v3556))).f_ival = yr1268_TV();
yr1297_Skip();
}
((*(yR95 *)rt_nil_check(F.v3556))).f_name = yr1331_ExtendedId();
yr1396_ParseFormals(F.v3556);
if (yr1302_Accept(v333)) {
((*(yR95 *)rt_nil_check(F.v3556))).f_e = yr1242_NewNode(v639, F.v3564);
}
((*(yR95 *)rt_nil_check(F.v3556))).f_c = yr1357_ParseBlock();
if ((F.v3562 == v318)) {
yr1313_Expect(v267);
} else {
yr1313_Expect(v282);
}
yr1324_CloseName(((*(yR95 *)rt_nil_check(F.v3556))).f_name, F.v3564);
{ void * rv3568 = F.v3556;
return rv3568; }
}
if ((((F.v3562 == v351)) || ((F.v3562 == v354)))) {
{ void * rv3569 = yr1347_ParseModule();
return rv3569; }
}
if ((F.v3562 == v435)) {
F.v3556 = yr1242_NewNode(v630, F.v3564);
yr1297_Skip();
((*(yR95 *)rt_nil_check(F.v3556))).f_name = yr1319_Ident();
yr1313_Expect(v564);
F.v3560 = ((void *)0);
for (;;) {
F.v3558 = yr1242_NewNode(v639, yr1273_TLn());
((*(yR95 *)rt_nil_check(F.v3558))).f_name = yr1319_Ident();
yr1249_Link(&((*(yR95 *)rt_nil_check(F.v3556))).f_a, &F.v3560, F.v3558);
if ((!yr1302_Accept(v576))) {
goto yl_3570;
}
}
yl_3570: ;
yr1313_Expect(v567);
F.v3566 = v1231;
((*(yR95 *)rt_nil_check(F.v3556))).f_b = yr1347_ParseModule();
((*(yR95 *)rt_nil_check(F.v3556))).f_ival = F.v3566;
((*(yR95 *)rt_nil_check(F.v3556))).f_flag = v1231;
yr1313_Expect(v294);
yr1324_CloseName(((*(yR95 *)rt_nil_check(F.v3556))).f_name, F.v3564);
{ void * rv3571 = F.v3556;
return rv3571; }
}
if ((F.v3562 == v336)) {
F.v3556 = yr1242_NewNode(v633, F.v3564);
yr1297_Skip();
((*(yR95 *)rt_nil_check(F.v3556))).f_name = yr1319_Ident();
yr1313_Expect(v564);
F.v3560 = ((void *)0);
for (;;) {
F.v3558 = yr1242_NewNode(v639, yr1273_TLn());
((*(yR95 *)rt_nil_check(F.v3558))).f_name = yr1331_ExtendedId();
yr1249_Link(&((*(yR95 *)rt_nil_check(F.v3556))).f_a, &F.v3560, F.v3558);
if ((!yr1302_Accept(v576))) {
goto yl_3572;
}
}
yl_3572: ;
yr1313_Expect(v567);
{ void * rv3573 = F.v3556;
return rv3573; }
}
if ((F.v3562 == v393)) {
F.v3556 = yr1242_NewNode(v636, F.v3564);
yr1297_Skip();
((*(yR95 *)rt_nil_check(F.v3556))).f_name = yr1319_Ident();
yr1396_ParseFormals(F.v3556);
if ((!(((*(yR95 *)rt_nil_check(F.v3556))).f_b == ((void *)0)))) {
yr1121_FailS(F.v3564, y_str("a process returns no value", 26));
}
if (yr1302_Accept(v387)) {
((*(yR95 *)rt_nil_check(F.v3556))).f_d = yr1510_ParseExpr();
}
if (yr1302_Accept(v339)) {
((*(yR95 *)rt_nil_check(F.v3556))).f_e = yr1510_ParseExpr();
}
if (yr1302_Accept(v429)) {
F.v3558 = yr1510_ParseExpr();
}
((*(yR95 *)rt_nil_check(F.v3556))).f_c = yr1357_ParseBlock();
yr1313_Expect(v285);
yr1324_CloseName(((*(yR95 *)rt_nil_check(F.v3556))).f_name, F.v3564);
{ void * rv3575 = F.v3556;
return rv3575; }
}
yr1121_FailS(F.v3564, y_str("expected a declaration", 22));
{ void * rv3577 = ((void *)0);
return rv3577; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1396_ParseFormals(void * a_p1397) {
struct yf1398 F;
memset((void *)&F, 0, sizeof F);
F.p1397 = a_p1397;
F.v3581 = ((void *)0);
F.v3583 = ((void *)0);
if (yr1302_Accept(v414)) {
((*(yR95 *)rt_nil_check(F.p1397))).f_b = yr1413_ParseRep();
}
yr1313_Expect(v564);
while ((!yr1285_Is(v567))) {
if (yr1302_Accept(v240)) {
F.v3585 = v867;
} else if (yr1302_Accept(v375)) {
F.v3585 = v870;
} else if (yr1302_Accept(v453)) {
F.v3585 = v873;
} else {
yr1121_FailS(yr1273_TLn(), y_str("a formal parameter is CONST, OUT or VAR", 39));
}
for (;;) {
F.v3581 = yr1242_NewNode(v627, yr1273_TLn());
((*(yR95 *)rt_nil_check(F.v3581))).f_ival = F.v3585;
((*(yR95 *)rt_nil_check(F.v3581))).f_a = yr1367_ParseNames();
yr1313_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3581))).f_b = yr1402_ParseFormalRep();
yr1249_Link(&((*(yR95 *)rt_nil_check(F.p1397))).f_a, &F.v3583, F.v3581);
if ((!((((yr1285_Is(v579) || yr1285_Is(v576))) && yr1291_IsIdAt(INT64_C(1)))))) {
goto yl_3587;
}
yr1297_Skip();
}
yl_3587: ;
if ((!yr1302_Accept(v579))) {
if ((!yr1302_Accept(v576))) {
yr1313_Expect(v567);
return;
}
}
}
yr1313_Expect(v567);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1402_ParseFormalRep(void) {
struct yf1403 F;
memset((void *)&F, 0, sizeof F);
if (((yr1285_Is(v210) && yr1278_IsAt(INT64_C(1), v564)) && ((yr1278_IsAt(INT64_C(3), v243) || ((yr1291_IsIdAt(INT64_C(3)) && ((((rt_int *)(v1152).p)[y_ix1(v1152, rt_add(v1231, INT64_C(3)))] == v1239)))))))) {
F.v3591 = yr1242_NewNode(v666, yr1273_TLn());
yr1297_Skip();
yr1297_Skip();
((*(yR95 *)rt_nil_check(F.v3591))).f_a = yr1510_ParseExpr();
yr1297_Skip();
yr1313_Expect(v363);
((*(yR95 *)rt_nil_check(F.v3591))).f_b = yr1413_ParseRep();
yr1313_Expect(v567);
{ void * rv3597 = F.v3591;
return rv3597; }
}
if (yr1285_Is(v432)) {
F.v3591 = yr1242_NewNode(v669, yr1273_TLn());
yr1297_Skip();
{ void * rv3598 = F.v3591;
return rv3598; }
}
{ void * rv3599 = yr1413_ParseRep();
return rv3599; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1407_IsStructWord(rt_int a_p1408) {
struct yf1409 F;
memset((void *)&F, 0, sizeof F);
F.p1408 = a_p1408;
F.v3603 = ((rt_int *)(v1152).p)[y_ix1(v1152, rt_add(v1231, F.p1408))];
if ((!(((rt_int *)(v1150).p)[y_ix1(v1150, rt_add(v1231, F.p1408))] == v180))) {
{ rt_int rv3607 = 0;
return rv3607; }
}
{ rt_int rv3608 = (((((((((F.v3603 == v450)) || ((F.v3603 == v372))) || ((F.v3603 == v204))) || ((F.v3603 == v210))) || ((F.v3603 == v402))) || ((F.v3603 == v312))) || ((F.v3603 == v381))) || ((F.v3603 == v423)));
return rv3608; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1413_ParseRep(void) {
struct yf1414 F;
memset((void *)&F, 0, sizeof F);
if ((yr1291_IsIdAt(INT64_C(0)) && ((yr1407_IsStructWord(INT64_C(1)) || ((yr1291_IsIdAt(INT64_C(1)) && yr1278_IsAt(INT64_C(2), v570))))))) {
F.v3611 = yr1319_Ident();
F.v3613 = yr1418_ParseConcrete();
((*(yR95 *)rt_nil_check(F.v3613))).f_text = F.v3611;
{ void * rv3618 = F.v3613;
return rv3618; }
}
{ void * rv3619 = yr1418_ParseConcrete();
return rv3619; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1418_ParseConcrete(void) {
struct yf1419 F;
memset((void *)&F, 0, sizeof F);
F.v3622 = yr1433_ParseConcrete1();
if (yr1302_Accept(v378)) {
if (((((yr1263_TK() == v186)) || ((yr1263_TK() == v177))) || yr1285_Is(v564))) {
F.v3624 = yr1510_ParseExpr();
}
}
if (yr1302_Accept(v201)) {
F.v3624 = yr1510_ParseExpr();
}
{ void * rv3625 = F.v3622;
return rv3625; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1423_ParseIds(void) {
struct yf1424 F;
memset((void *)&F, 0, sizeof F);
F.v3628 = ((void *)0);
F.v3630 = ((void *)0);
F.v3632 = ((void *)0);
for (;;) {
F.v3632 = yr1242_NewNode(v639, yr1273_TLn());
((*(yR95 *)rt_nil_check(F.v3632))).f_name = yr1319_Ident();
yr1249_Link(&F.v3628, &F.v3630, F.v3632);
if ((!yr1302_Accept(v576))) {
goto yl_3633;
}
}
yl_3633: ;
{ void * rv3634 = F.v3628;
return rv3634; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1428_ParseFieldGroups(void) {
struct yf1429 F;
memset((void *)&F, 0, sizeof F);
F.v3637 = ((void *)0);
F.v3639 = ((void *)0);
F.v3641 = ((void *)0);
while ((yr1285_Is(v240) || yr1285_Is(v453))) {
F.v3643 = yr1268_TV();
yr1297_Skip();
for (;;) {
F.v3641 = yr1242_NewNode(v675, yr1273_TLn());
((*(yR95 *)rt_nil_check(F.v3641))).f_ival = F.v3643;
((*(yR95 *)rt_nil_check(F.v3641))).f_a = yr1367_ParseNames();
yr1313_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3641))).f_b = yr1413_ParseRep();
yr1249_Link(&F.v3637, &F.v3639, F.v3641);
if ((!((yr1285_Is(v579) && yr1291_IsIdAt(INT64_C(1)))))) {
goto yl_3644;
}
yr1297_Skip();
}
yl_3644: ;
if ((!yr1302_Accept(v579))) {
{ void * rv3646 = F.v3637;
return rv3646; }
}
}
{ void * rv3647 = F.v3637;
return rv3647; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1433_ParseConcrete1(void) {
struct yf1434 F;
memset((void *)&F, 0, sizeof F);
F.v3664 = yr1273_TLn();
if ((yr1263_TK() == v177)) {
F.v3650 = yr1242_NewNode(v642, F.v3664);
((*(yR95 *)rt_nil_check(F.v3650))).f_name = yr1319_Ident();
((*(yR95 *)rt_nil_check(F.v3650))).f_a = yr1438_ParseQualifier();
{ void * rv3665 = F.v3650;
return rv3665; }
}
if ((!(yr1263_TK() == v180))) {
yr1121_FailS(F.v3664, y_str("expected a representation", 25));
}
F.v3662 = yr1268_TV();
if ((((F.v3662 == v450)) || ((F.v3662 == v372)))) {
F.v3650 = yr1242_NewNode(v645, F.v3664);
if ((F.v3662 == v372)) {
((*(yR95 *)rt_nil_check(F.v3650))).f_flag = INT64_C(1);
}
yr1297_Skip();
yr1313_Expect(v564);
((*(yR95 *)rt_nil_check(F.v3650))).f_a = yr1423_ParseIds();
yr1313_Expect(v567);
((*(yR95 *)rt_nil_check(F.v3650))).f_b = yr1438_ParseQualifier();
{ void * rv3668 = F.v3650;
return rv3668; }
}
if ((F.v3662 == v204)) {
F.v3650 = yr1242_NewNode(v648, F.v3664);
yr1297_Skip();
yr1313_Expect(v564);
F.v3660 = ((void *)0);
for (;;) {
if ((!(yr1263_TK() == v195))) {
yr1121_FailS(yr1273_TLn(), y_str("an ALPHABET lists character literals", 36));
}
F.v3658 = yr1242_NewNode(v738, yr1273_TLn());
((*(yR95 *)rt_nil_check(F.v3658))).f_text = rt_range(yr1268_TV(), INT64_C(0), INT64_C(4000000));
yr1297_Skip();
yr1249_Link(&((*(yR95 *)rt_nil_check(F.v3650))).f_a, &F.v3660, F.v3658);
if ((!yr1302_Accept(v576))) {
goto yl_3669;
}
}
yl_3669: ;
yr1313_Expect(v567);
((*(yR95 *)rt_nil_check(F.v3650))).f_b = yr1438_ParseQualifier();
{ void * rv3671 = F.v3650;
return rv3671; }
}
if ((F.v3662 == v210)) {
F.v3650 = yr1242_NewNode(v651, F.v3664);
yr1297_Skip();
yr1313_Expect(v564);
F.v3660 = ((void *)0);
for (;;) {
yr1249_Link(&((*(yR95 *)rt_nil_check(F.v3650))).f_a, &F.v3660, yr1413_ParseRep());
if ((!yr1302_Accept(v576))) {
goto yl_3672;
}
}
yl_3672: ;
yr1313_Expect(v363);
((*(yR95 *)rt_nil_check(F.v3650))).f_b = yr1413_ParseRep();
yr1313_Expect(v567);
{ void * rv3673 = F.v3650;
return rv3673; }
}
if ((F.v3662 == v402)) {
F.v3650 = yr1242_NewNode(v654, F.v3664);
yr1297_Skip();
((*(yR95 *)rt_nil_check(F.v3650))).f_a = yr1428_ParseFieldGroups();
if (yr1302_Accept(v420)) {
F.v3652 = yr1242_NewNode(v678, yr1273_TLn());
((*(yR95 *)rt_nil_check(F.v3652))).f_name = yr1319_Ident();
yr1313_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3652))).f_b = yr1413_ParseRep();
F.v3656 = ((void *)0);
while (yr1302_Accept(v237)) {
F.v3654 = yr1242_NewNode(v681, yr1273_TLn());
F.v3660 = ((void *)0);
for (;;) {
yr1249_Link(&((*(yR95 *)rt_nil_check(F.v3654))).f_a, &F.v3660, yr1510_ParseExpr());
if ((!yr1302_Accept(v576))) {
goto yl_3674;
}
}
yl_3674: ;
yr1313_Expect(v504);
((*(yR95 *)rt_nil_check(F.v3654))).f_b = yr1428_ParseFieldGroups();
while (yr1302_Accept(v579)) {
}
yr1249_Link(&((*(yR95 *)rt_nil_check(F.v3652))).f_a, &F.v3656, F.v3654);
}
yr1313_Expect(v291);
if (yr1302_Accept(v579)) {
}
((*(yR95 *)rt_nil_check(F.v3650))).f_b = F.v3652;
}
yr1313_Expect(v288);
{ void * rv3675 = F.v3650;
return rv3675; }
}
if (((((F.v3662 == v312)) || ((F.v3662 == v381))) || ((F.v3662 == v423)))) {
if ((F.v3662 == v312)) {
F.v3650 = yr1242_NewNode(v657, F.v3664);
} else if ((F.v3662 == v381)) {
F.v3650 = yr1242_NewNode(v660, F.v3664);
} else {
F.v3650 = yr1242_NewNode(v663, F.v3664);
}
yr1297_Skip();
yr1313_Expect(v564);
((*(yR95 *)rt_nil_check(F.v3650))).f_a = yr1413_ParseRep();
yr1313_Expect(v567);
{ void * rv3676 = F.v3650;
return rv3676; }
}
yr1121_FailS(F.v3664, y_str("expected a representation", 25));
{ void * rv3678 = ((void *)0);
return rv3678; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1438_ParseQualifier(void) {
struct yf1439 F;
memset((void *)&F, 0, sizeof F);
if ((!yr1285_Is(v570))) {
{ void * rv3682 = ((void *)0);
return rv3682; }
}
F.v3681 = yr1242_NewNode(v672, yr1273_TLn());
yr1297_Skip();
((*(yR95 *)rt_nil_check(F.v3681))).f_a = yr1510_ParseExpr();
yr1313_Expect(v507);
((*(yR95 *)rt_nil_check(F.v3681))).f_b = yr1510_ParseExpr();
yr1313_Expect(v573);
if (yr1302_Accept(v417)) {
((*(yR95 *)rt_nil_check(F.v3681))).f_c = yr1510_ParseExpr();
} else if (yr1302_Accept(v384)) {
((*(yR95 *)rt_nil_check(F.v3681))).f_d = yr1510_ParseExpr();
}
{ void * rv3683 = F.v3681;
return rv3683; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1443_IsStop(void) {
struct yf1444 F;
memset((void *)&F, 0, sizeof F);
if ((yr1263_TK() == v174)) {
{ rt_int rv3688 = 1;
return rv3688; }
}
if ((!(yr1263_TK() == v180))) {
{ rt_int rv3690 = 0;
return rv3690; }
}
F.v3686 = yr1268_TV();
{ rt_int rv3691 = ((((((((((((((((F.v3686 == v255)) || ((F.v3686 == v252))) || ((F.v3686 == v270))) || ((F.v3686 == v237))) || ((F.v3686 == v291))) || ((F.v3686 == v297))) || ((F.v3686 == v264))) || ((F.v3686 == v273))) || ((F.v3686 == v258))) || ((F.v3686 == v261))) || ((F.v3686 == v282))) || ((F.v3686 == v267))) || ((F.v3686 == v285))) || ((F.v3686 == v276))) || ((F.v3686 == v279)));
return rv3691; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1448_ParseStatements(rt_int a_p1449) {
struct yf1450 F;
memset((void *)&F, 0, sizeof F);
F.p1449 = a_p1449;
F.v3695 = ((void *)0);
F.v3697 = ((void *)0);
F.v3699 = ((void *)0);
for (;;) {
while (yr1302_Accept(v579)) {
}
if (yr1443_IsStop()) {
goto yl_3702;
}
F.v3701 = INT64_C(0);
if (((F.p1449 && yr1291_IsIdAt(INT64_C(0))) && yr1278_IsAt(INT64_C(1), v582))) {
F.v3701 = yr1319_Ident();
yr1297_Skip();
}
F.v3699 = yr1454_ParseStatement();
((*(yR95 *)rt_nil_check(F.v3699))).f_text = F.v3701;
yr1249_Link(&F.v3695, &F.v3697, F.v3699);
if ((!yr1285_Is(v579))) {
goto yl_3702;
}
}
yl_3702: ;
{ void * rv3706 = F.v3695;
return rv3706; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1454_ParseStatement(void) {
struct yf1455 F;
memset((void *)&F, 0, sizeof F);
F.v3723 = yr1273_TLn();
if ((yr1263_TK() == v180)) {
F.v3721 = yr1268_TV();
if ((F.v3721 == v216)) {
yr1297_Skip();
F.v3709 = yr1242_NewNode(v690, F.v3723);
((*(yR95 *)rt_nil_check(F.v3709))).f_a = yr1510_ParseExpr();
{ void * rv3724 = F.v3709;
return rv3724; }
}
if ((F.v3721 == v321)) {
yr1297_Skip();
F.v3709 = yr1242_NewNode(v693, F.v3723);
((*(yR95 *)rt_nil_check(F.v3709))).f_name = yr1319_Ident();
{ void * rv3725 = F.v3709;
return rv3725; }
}
if ((F.v3721 == v303)) {
yr1297_Skip();
F.v3709 = yr1242_NewNode(v696, F.v3723);
((*(yR95 *)rt_nil_check(F.v3709))).f_name = yr1319_Ident();
{ void * rv3726 = F.v3709;
return rv3726; }
}
if ((F.v3721 == v411)) {
yr1297_Skip();
F.v3709 = yr1242_NewNode(v699, F.v3723);
if ((!((yr1285_Is(v579) || yr1443_IsStop())))) {
((*(yR95 *)rt_nil_check(F.v3709))).f_a = yr1510_ParseExpr();
}
{ void * rv3727 = F.v3709;
return rv3727; }
}
if ((F.v3721 == v438)) {
yr1297_Skip();
{ void * rv3728 = yr1242_NewNode(v702, F.v3723);
return rv3728; }
}
if ((F.v3721 == v396)) {
yr1297_Skip();
F.v3709 = yr1242_NewNode(v705, F.v3723);
if (yr1291_IsIdAt(INT64_C(0))) {
((*(yR95 *)rt_nil_check(F.v3709))).f_name = yr1319_Ident();
}
{ void * rv3730 = F.v3709;
return rv3730; }
}
if ((F.v3721 == v324)) {
yr1297_Skip();
F.v3709 = yr1242_NewNode(v708, F.v3723);
F.v3713 = ((void *)0);
F.v3711 = yr1242_NewNode(v726, F.v3723);
((*(yR95 *)rt_nil_check(F.v3711))).f_a = yr1510_ParseExpr();
yr1313_Expect(v441);
((*(yR95 *)rt_nil_check(F.v3711))).f_b = yr1448_ParseStatements(0);
yr1249_Link(&((*(yR95 *)rt_nil_check(F.v3709))).f_a, &F.v3713, F.v3711);
while (yr1285_Is(v255)) {
F.v3711 = yr1242_NewNode(v726, yr1273_TLn());
yr1297_Skip();
((*(yR95 *)rt_nil_check(F.v3711))).f_a = yr1510_ParseExpr();
yr1313_Expect(v441);
((*(yR95 *)rt_nil_check(F.v3711))).f_b = yr1448_ParseStatements(0);
yr1249_Link(&((*(yR95 *)rt_nil_check(F.v3709))).f_a, &F.v3713, F.v3711);
}
if (yr1302_Accept(v252)) {
((*(yR95 *)rt_nil_check(F.v3709))).f_flag = INT64_C(1);
((*(yR95 *)rt_nil_check(F.v3709))).f_b = yr1448_ParseStatements(0);
}
yr1313_Expect(v270);
{ void * rv3735 = F.v3709;
return rv3735; }
}
if ((F.v3721 == v420)) {
yr1297_Skip();
F.v3709 = yr1242_NewNode(v711, F.v3723);
((*(yR95 *)rt_nil_check(F.v3709))).f_a = yr1510_ParseExpr();
F.v3713 = ((void *)0);
while (yr1285_Is(v237)) {
F.v3711 = yr1242_NewNode(v726, yr1273_TLn());
yr1297_Skip();
F.v3717 = ((void *)0);
for (;;) {
yr1249_Link(&((*(yR95 *)rt_nil_check(F.v3711))).f_a, &F.v3717, yr1510_ParseExpr());
if ((!yr1302_Accept(v576))) {
goto yl_3736;
}
}
yl_3736: ;
yr1313_Expect(v504);
((*(yR95 *)rt_nil_check(F.v3711))).f_b = yr1448_ParseStatements(0);
yr1249_Link(&((*(yR95 *)rt_nil_check(F.v3709))).f_b, &F.v3713, F.v3711);
}
if (yr1302_Accept(v252)) {
((*(yR95 *)rt_nil_check(F.v3709))).f_flag = INT64_C(1);
((*(yR95 *)rt_nil_check(F.v3709))).f_c = yr1448_ParseStatements(0);
}
yr1313_Expect(v291);
{ void * rv3740 = F.v3709;
return rv3740; }
}
if ((F.v3721 == v456)) {
yr1297_Skip();
F.v3709 = yr1242_NewNode(v714, F.v3723);
((*(yR95 *)rt_nil_check(F.v3709))).f_a = yr1510_ParseExpr();
yr1313_Expect(v249);
((*(yR95 *)rt_nil_check(F.v3709))).f_b = yr1448_ParseStatements(0);
yr1313_Expect(v297);
{ void * rv3742 = F.v3709;
return rv3742; }
}
if ((F.v3721 == v315)) {
yr1297_Skip();
F.v3709 = yr1242_NewNode(v717, F.v3723);
((*(yR95 *)rt_nil_check(F.v3709))).f_name = yr1319_Ident();
yr1313_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3709))).f_a = yr1413_ParseRep();
yr1313_Expect(v249);
((*(yR95 *)rt_nil_check(F.v3709))).f_b = yr1448_ParseStatements(0);
yr1313_Expect(v264);
{ void * rv3744 = F.v3709;
return rv3744; }
}
if ((F.v3721 == v345)) {
yr1297_Skip();
F.v3709 = yr1242_NewNode(v720, F.v3723);
((*(yR95 *)rt_nil_check(F.v3709))).f_name = yr1319_Ident();
((*(yR95 *)rt_nil_check(F.v3709))).f_b = yr1448_ParseStatements(0);
yr1313_Expect(v273);
yr1324_CloseName(((*(yR95 *)rt_nil_check(F.v3709))).f_name, F.v3723);
{ void * rv3746 = F.v3709;
return rv3746; }
}
if ((((F.v3721 == v234)) || ((F.v3721 == v426)))) {
F.v3709 = yr1242_NewNode(v723, F.v3723);
if (yr1302_Accept(v426)) {
((*(yR95 *)rt_nil_check(F.v3709))).f_flag = INT64_C(1);
}
yr1313_Expect(v234);
((*(yR95 *)rt_nil_check(F.v3709))).f_a = yr1357_ParseBlock();
yr1313_Expect(v258);
{ void * rv3748 = F.v3709;
return rv3748; }
}
}
F.v3719 = yr1541_ParseDesignator();
if (yr1302_Accept(v501)) {
F.v3709 = yr1242_NewNode(v684, F.v3723);
((*(yR95 *)rt_nil_check(F.v3709))).f_a = F.v3719;
((*(yR95 *)rt_nil_check(F.v3709))).f_b = yr1510_ParseExpr();
{ void * rv3749 = F.v3709;
return rv3749; }
}
if ((!(((*(yR95 *)rt_nil_check(F.v3719))).f_kind == v750))) {
yr1121_FailS(F.v3723, y_str("expected a statement", 20));
}
F.v3709 = yr1242_NewNode(v687, F.v3723);
((*(yR95 *)rt_nil_check(F.v3709))).f_a = F.v3719;
{ void * rv3751 = F.v3709;
return rv3751; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1459_OpAt(void) {
struct yf1460 F;
memset((void *)&F, 0, sizeof F);
if ((((yr1263_TK() == v183)) || ((yr1263_TK() == v180)))) {
{ rt_int rv3753 = rt_range(yr1268_TV(), INT64_C(0), INT64_C(4000000));
return rv3753; }
}
{ rt_int rv3755 = INT64_C(0);
return rv3755; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1464_IsRel(rt_int a_p1465) {
struct yf1466 F;
memset((void *)&F, 0, sizeof F);
F.p1465 = a_p1465;
{ rt_int rv3758 = ((((((((((((((((((((F.p1465 == v330)) || ((F.p1465 == v540))) || ((F.p1465 == v555))) || ((F.p1465 == v558))) || ((F.p1465 == v510))) || ((F.p1465 == v561))) || ((F.p1465 == v513))) || ((F.p1465 == v516))) || ((F.p1465 == v471))) || ((F.p1465 == v519))) || ((F.p1465 == v474))) || ((F.p1465 == v522))) || ((F.p1465 == v483))) || ((F.p1465 == v477))) || ((F.p1465 == v465))) || ((F.p1465 == v525))) || ((F.p1465 == v486))) || ((F.p1465 == v480))) || ((F.p1465 == v468)));
return rv3758; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1470_IsAssocMul(rt_int a_p1471) {
struct yf1472 F;
memset((void *)&F, 0, sizeof F);
F.p1471 = a_p1471;
{ rt_int rv3761 = (((F.p1471 == v549)) || ((F.p1471 == v207)));
return rv3761; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1476_IsNonAssocMul(rt_int a_p1477) {
struct yf1478 F;
memset((void *)&F, 0, sizeof F);
F.p1477 = a_p1477;
{ rt_int rv3764 = ((((((((F.p1477 == v552)) || ((F.p1477 == v246))) || ((F.p1477 == v348))) || ((F.p1477 == v528))) || ((F.p1477 == v489))) || ((F.p1477 == v531))) || ((F.p1477 == v492)));
return rv3764; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1482_IsAssocAdd(rt_int a_p1483) {
struct yf1484 F;
memset((void *)&F, 0, sizeof F);
F.p1483 = a_p1483;
{ rt_int rv3767 = (((F.p1483 == v543)) || ((F.p1483 == v369)));
return rv3767; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1488_IsNonAssocAdd(rt_int a_p1489) {
struct yf1490 F;
memset((void *)&F, 0, sizeof F);
F.p1489 = a_p1489;
{ rt_int rv3770 = (((((((F.p1489 == v546)) || ((F.p1489 == v459))) || ((F.p1489 == v534))) || ((F.p1489 == v495))) || ((F.p1489 == v537))) || ((F.p1489 == v498)));
return rv3770; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1494_Bin(rt_int a_p1495, void * a_p1496, void * a_p1497, rt_int a_p1498) {
struct yf1499 F;
memset((void *)&F, 0, sizeof F);
F.p1495 = a_p1495;
F.p1496 = a_p1496;
F.p1497 = a_p1497;
F.p1498 = a_p1498;
F.v3777 = yr1242_NewNode(v768, F.p1498);
((*(yR95 *)rt_nil_check(F.v3777))).f_name = F.p1495;
((*(yR95 *)rt_nil_check(F.v3777))).f_a = F.p1496;
((*(yR95 *)rt_nil_check(F.v3777))).f_b = F.p1497;
{ void * rv3778 = F.v3777;
return rv3778; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1503_NeedParens(rt_int a_p1504, rt_int a_p1505) {
struct yf1506 F;
memset((void *)&F, 0, sizeof F);
F.p1504 = a_p1504;
F.p1505 = a_p1505;
yr983_SB();
yr1001_ST(F.p1504);
yr994_SA(y_str(" next to another operator of its level needs parentheses (VIII.A)", 65));
F.v3783 = yr1013_SE();
yr1114_Fail(F.p1505, F.v3783);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1510_ParseExpr(void) {
struct yf1511 F;
memset((void *)&F, 0, sizeof F);
F.v3791 = yr1273_TLn();
F.v3787 = yr1515_ParseSimple();
F.v3789 = yr1459_OpAt();
if (yr1464_IsRel(F.v3789)) {
yr1297_Skip();
F.v3787 = yr1494_Bin(F.v3789, F.v3787, yr1515_ParseSimple(), F.v3791);
if (yr1464_IsRel(yr1459_OpAt())) {
yr1503_NeedParens(F.v3789, F.v3791);
}
}
{ void * rv3792 = F.v3787;
return rv3792; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1515_ParseSimple(void) {
struct yf1516 F;
memset((void *)&F, 0, sizeof F);
F.v3801 = yr1273_TLn();
if (yr1285_Is(v546)) {
yr1297_Skip();
F.v3797 = yr1242_NewNode(v765, F.v3801);
((*(yR95 *)rt_nil_check(F.v3797))).f_a = yr1520_ParseTerm();
F.v3799 = yr1459_OpAt();
if ((yr1482_IsAssocAdd(F.v3799) || yr1488_IsNonAssocAdd(F.v3799))) {
yr1503_NeedParens(rt_range(v546, INT64_C(0), INT64_C(4000000)), F.v3801);
}
{ void * rv3802 = F.v3797;
return rv3802; }
}
F.v3795 = yr1520_ParseTerm();
F.v3799 = yr1459_OpAt();
if (yr1488_IsNonAssocAdd(F.v3799)) {
yr1297_Skip();
F.v3795 = yr1494_Bin(F.v3799, F.v3795, yr1520_ParseTerm(), F.v3801);
if ((yr1482_IsAssocAdd(yr1459_OpAt()) || yr1488_IsNonAssocAdd(yr1459_OpAt()))) {
yr1503_NeedParens(F.v3799, F.v3801);
}
{ void * rv3803 = F.v3795;
return rv3803; }
}
while (yr1482_IsAssocAdd(F.v3799)) {
yr1297_Skip();
F.v3795 = yr1494_Bin(F.v3799, F.v3795, yr1520_ParseTerm(), F.v3801);
if (yr1488_IsNonAssocAdd(yr1459_OpAt())) {
yr1503_NeedParens(yr1459_OpAt(), F.v3801);
}
F.v3799 = yr1459_OpAt();
}
{ void * rv3804 = F.v3795;
return rv3804; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1520_ParseTerm(void) {
struct yf1521 F;
memset((void *)&F, 0, sizeof F);
F.v3811 = yr1273_TLn();
F.v3807 = yr1536_ParseFactor();
F.v3809 = yr1459_OpAt();
if (yr1476_IsNonAssocMul(F.v3809)) {
yr1297_Skip();
F.v3807 = yr1494_Bin(F.v3809, F.v3807, yr1536_ParseFactor(), F.v3811);
if ((yr1470_IsAssocMul(yr1459_OpAt()) || yr1476_IsNonAssocMul(yr1459_OpAt()))) {
yr1503_NeedParens(F.v3809, F.v3811);
}
{ void * rv3812 = F.v3807;
return rv3812; }
}
while (yr1470_IsAssocMul(F.v3809)) {
yr1297_Skip();
F.v3807 = yr1494_Bin(F.v3809, F.v3807, yr1536_ParseFactor(), F.v3811);
if (yr1476_IsNonAssocMul(yr1459_OpAt())) {
yr1503_NeedParens(yr1459_OpAt(), F.v3811);
}
F.v3809 = yr1459_OpAt();
}
{ void * rv3813 = F.v3807;
return rv3813; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1525_IsLiteralAt(rt_int a_p1526) {
struct yf1527 F;
memset((void *)&F, 0, sizeof F);
F.p1526 = a_p1526;
F.v3817 = ((rt_int *)(v1150).p)[y_ix1(v1150, rt_add(v1231, F.p1526))];
{ rt_int rv3819 = (((((((F.v3817 == v186)) || ((F.v3817 == v189))) || ((F.v3817 == v192))) || ((F.v3817 == v195))) || ((F.v3817 == v198))) || yr1278_IsAt(F.p1526, v357));
return rv3819; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1531_ParseLiteral(void) {
struct yf1532 F;
memset((void *)&F, 0, sizeof F);
F.v3824 = yr1263_TK();
F.v3826 = yr1273_TLn();
if ((F.v3824 == v186)) {
F.v3822 = yr1242_NewNode(v729, F.v3826);
((*(yR95 *)rt_nil_check(F.v3822))).f_ival = yr1268_TV();
} else if ((F.v3824 == v189)) {
F.v3822 = yr1242_NewNode(v732, F.v3826);
((*(yR95 *)rt_nil_check(F.v3822))).f_text = rt_range(yr1268_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v3824 == v192)) {
F.v3822 = yr1242_NewNode(v735, F.v3826);
((*(yR95 *)rt_nil_check(F.v3822))).f_text = rt_range(yr1268_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v3824 == v195)) {
F.v3822 = yr1242_NewNode(v738, F.v3826);
((*(yR95 *)rt_nil_check(F.v3822))).f_text = rt_range(yr1268_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v3824 == v198)) {
F.v3822 = yr1242_NewNode(v741, F.v3826);
((*(yR95 *)rt_nil_check(F.v3822))).f_text = rt_range(yr1268_TV(), INT64_C(0), INT64_C(4000000));
} else {
F.v3822 = yr1242_NewNode(v744, F.v3826);
}
yr1297_Skip();
{ void * rv3827 = F.v3822;
return rv3827; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1536_ParseFactor(void) {
struct yf1537 F;
memset((void *)&F, 0, sizeof F);
F.v3834 = yr1273_TLn();
if (yr1285_Is(v360)) {
yr1297_Skip();
F.v3830 = yr1242_NewNode(v762, F.v3834);
((*(yR95 *)rt_nil_check(F.v3830))).f_a = yr1536_ParseFactor();
{ void * rv3835 = F.v3830;
return rv3835; }
}
if (yr1285_Is(v564)) {
yr1297_Skip();
F.v3830 = yr1242_NewNode(v771, F.v3834);
((*(yR95 *)rt_nil_check(F.v3830))).f_a = yr1510_ParseExpr();
yr1313_Expect(v567);
{ void * rv3836 = F.v3830;
return rv3836; }
}
if (yr1525_IsLiteralAt(INT64_C(0))) {
{ void * rv3838 = yr1531_ParseLiteral();
return rv3838; }
}
if (yr1291_IsIdAt(INT64_C(0))) {
if ((yr1525_IsLiteralAt(INT64_C(1)) || ((yr1291_IsIdAt(INT64_C(1)) && (!((((((yr1278_IsAt(INT64_C(2), v564) || yr1278_IsAt(INT64_C(2), v570)) || yr1278_IsAt(INT64_C(2), v585)) || yr1278_IsAt(INT64_C(2), v588)) || yr1278_IsAt(INT64_C(2), v501)) || yr1278_IsAt(INT64_C(2), v582)))))))) {
F.v3832 = yr1319_Ident();
if (yr1291_IsIdAt(INT64_C(0))) {
F.v3830 = yr1242_NewNode(v747, F.v3834);
((*(yR95 *)rt_nil_check(F.v3830))).f_name = yr1319_Ident();
} else {
F.v3830 = yr1531_ParseLiteral();
}
((*(yR95 *)rt_nil_check(F.v3830))).f_d = yr1242_NewNode(v639, F.v3834);
((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v3830))).f_d))).f_name = F.v3832;
{ void * rv3849 = F.v3830;
return rv3849; }
}
{ void * rv3850 = yr1541_ParseDesignator();
return rv3850; }
}
yr1129_FailN(F.v3834, yr1308_TokText(), y_str(" cannot begin an operand", 24));
{ void * rv3852 = ((void *)0);
return rv3852; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1541_ParseDesignator(void) {
struct yf1542 F;
memset((void *)&F, 0, sizeof F);
F.v3861 = yr1273_TLn();
F.v3855 = yr1242_NewNode(v747, F.v3861);
((*(yR95 *)rt_nil_check(F.v3855))).f_name = yr1319_Ident();
if (yr1302_Accept(v564)) {
((*(yR95 *)rt_nil_check(F.v3855))).f_kind = v750;
F.v3859 = ((void *)0);
while ((!yr1285_Is(v567))) {
yr1249_Link(&((*(yR95 *)rt_nil_check(F.v3855))).f_a, &F.v3859, yr1510_ParseExpr());
if ((!yr1302_Accept(v576))) {
yr1546_EXIT_ARGS();
}
}
yr1313_Expect(v567);
}
for (;;) {
if (yr1302_Accept(v585)) {
F.v3857 = yr1242_NewNode(v753, yr1273_TLn());
((*(yR95 *)rt_nil_check(F.v3857))).f_a = F.v3855;
((*(yR95 *)rt_nil_check(F.v3857))).f_name = yr1319_Ident();
F.v3855 = F.v3857;
} else if (yr1302_Accept(v570)) {
F.v3857 = yr1242_NewNode(v756, yr1273_TLn());
((*(yR95 *)rt_nil_check(F.v3857))).f_a = F.v3855;
F.v3859 = ((void *)0);
for (;;) {
yr1249_Link(&((*(yR95 *)rt_nil_check(F.v3857))).f_b, &F.v3859, yr1510_ParseExpr());
if ((!yr1302_Accept(v576))) {
goto yl_3863;
}
}
yl_3863: ;
yr1313_Expect(v573);
F.v3855 = F.v3857;
} else if (yr1302_Accept(v588)) {
F.v3857 = yr1242_NewNode(v759, yr1273_TLn());
((*(yR95 *)rt_nil_check(F.v3857))).f_a = F.v3855;
F.v3855 = F.v3857;
} else {
goto yl_3862;
}
}
yl_3862: ;
{ void * rv3864 = F.v3855;
return rv3864; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1546_EXIT_ARGS(void) {
struct yf1547 F;
memset((void *)&F, 0, sizeof F);
if ((!yr1285_Is(v567))) {
yr1313_Expect(v567);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1551_ParseProgram(void) {
struct yf1552 F;
memset((void *)&F, 0, sizeof F);
F.v3868 = ((void *)0);
F.v3870 = ((void *)0);
while ((!(yr1263_TK() == v174))) {
if ((!((yr1285_Is(v351) || yr1285_Is(v354))))) {
yr1121_FailS(yr1273_TLn(), y_str("a segment is a module (XIII.A)", 30));
}
yr1249_Link(&F.v3868, &F.v3870, yr1347_ParseModule());
while (yr1302_Accept(v579)) {
}
}
{ void * rv3872 = F.v3868;
return rv3872; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1585_NewSym(rt_int a_p1586, rt_int a_p1587) {
struct yf1588 F;
memset((void *)&F, 0, sizeof F);
F.p1586 = a_p1586;
F.p1587 = a_p1587;
({ F.v3877 = rt_alloc(sizeof(yR115)); });
(*(yR115 *)rt_nil_check(F.v3877)) = ((yR115){ .f_kind = F.p1586, .f_name = F.p1587, .f_rep = ((void *)0), .f_cname = INT64_C(0), .f_level = INT64_C(0), .f_byref = 0, .f_readonly = 0, .f_mval = INT64_C(0), .f_hasmv = 0, .f_params = ((void *)0), .f_nparams = INT64_C(0), .f_ret = ((void *)0), .f_func = 0, .f_decl = ((void *)0), .f_depth = INT64_C(0), .f_target = ((void *)0), .f_members = ((void *)0), .f_mnext = ((void *)0), .f_chain = ((void *)0), .f_stack = ((void *)0), .f_alt = ((void *)0), .f_monitor = ((void *)0), .f_serial = INT64_C(0) });
((*(yR115 *)rt_nil_check(F.v3877))).f_serial = yr1138_NewSerial();
{ void * rv3888 = F.v3877;
return rv3888; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1592_OpenScope(rt_int a_p1593) {
struct yf1594 F;
memset((void *)&F, 0, sizeof F);
F.p1593 = a_p1593;
({ F.v3892 = rt_alloc(sizeof(yR120)); });
(*(yR120 *)rt_nil_check(F.v3892)) = ((yR120){ .f_syms = ((void *)0), .f_closed = F.p1593, .f_module = ((void *)0), .f_level = v1573, .f_deferred = ((void *)0), .f_up = ((void *)0) });
if ((v1567 >= INT64_C(0))) {
((*(yR120 *)rt_nil_check(F.v3892))).f_up = ((void * *)(v1565).p)[y_ix1(v1565, v1567)];
}
v1567 = rt_range(rt_add(v1567, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
((void * *)(v1565).p)[y_ix1(v1565, v1567)] = F.v3892;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1598_CloseScope(void) {
struct yf1599 F;
memset((void *)&F, 0, sizeof F);
F.v3898 = ((*(yR120 *)rt_nil_check(((void * *)(v1565).p)[y_ix1(v1565, v1567)]))).f_syms;
while ((!(F.v3898 == ((void *)0)))) {
F.v3904 = rt_range(rt_mod(((*(yR115 *)rt_nil_check(F.v3898))).f_name, INT64_C(8192)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
F.v3900 = ((void * *)(v1556).p)[y_ix1(v1556, F.v3904)];
F.v3902 = ((void *)0);
while ((((!(F.v3900 == ((void *)0)))) && ((!(F.v3900 == F.v3898))))) {
F.v3902 = F.v3900;
F.v3900 = ((*(yR115 *)rt_nil_check(F.v3900))).f_chain;
}
if ((F.v3900 == F.v3898)) {
if ((F.v3902 == ((void *)0))) {
((void * *)(v1556).p)[y_ix1(v1556, F.v3904)] = ((*(yR115 *)rt_nil_check(F.v3898))).f_chain;
} else {
((*(yR115 *)rt_nil_check(F.v3902))).f_chain = ((*(yR115 *)rt_nil_check(F.v3898))).f_chain;
}
}
F.v3898 = ((*(yR115 *)rt_nil_check(F.v3898))).f_stack;
}
v1567 = rt_range(rt_sub(v1567, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1603_Visible(void * a_p1604) {
struct yf1605 F;
memset((void *)&F, 0, sizeof F);
F.p1604 = a_p1604;
{ rt_int rv3912 = (((((*(yR115 *)rt_nil_check(F.p1604))).f_depth >= v1570)) || ((((*(yR115 *)rt_nil_check(F.p1604))).f_depth == INT64_C(0))));
return rv3912; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1609_Find(rt_int a_p1610) {
struct yf1611 F;
memset((void *)&F, 0, sizeof F);
F.p1610 = a_p1610;
F.v3916 = ((void * *)(v1556).p)[y_ix1(v1556, rt_mod(F.p1610, INT64_C(8192)))];
while ((!(F.v3916 == ((void *)0)))) {
if ((((((*(yR115 *)rt_nil_check(F.v3916))).f_name == F.p1610)) && yr1603_Visible(F.v3916))) {
{ void * rv3919 = F.v3916;
return rv3919; }
}
F.v3916 = ((*(yR115 *)rt_nil_check(F.v3916))).f_chain;
}
{ void * rv3920 = ((void *)0);
return rv3920; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1615_FindHere(rt_int a_p1616) {
struct yf1617 F;
memset((void *)&F, 0, sizeof F);
F.p1616 = a_p1616;
F.v3924 = ((void * *)(v1556).p)[y_ix1(v1556, rt_mod(F.p1616, INT64_C(8192)))];
while ((!(F.v3924 == ((void *)0)))) {
if ((((((*(yR115 *)rt_nil_check(F.v3924))).f_name == F.p1616)) && ((((*(yR115 *)rt_nil_check(F.v3924))).f_depth == v1567)))) {
{ void * rv3927 = F.v3924;
return rv3927; }
}
F.v3924 = ((*(yR115 *)rt_nil_check(F.v3924))).f_chain;
}
{ void * rv3928 = ((void *)0);
return rv3928; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1621_Lookup(rt_int a_p1622, rt_int a_p1623) {
struct yf1624 F;
memset((void *)&F, 0, sizeof F);
F.p1622 = a_p1622;
F.p1623 = a_p1623;
F.v3933 = yr1609_Find(F.p1622);
if ((F.v3933 == ((void *)0))) {
yr1129_FailN(F.p1623, F.p1622, y_str(" is not declared here", 21));
}
{ void * rv3935 = F.v3933;
return rv3935; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1628_Ambiguous(void * a_p1629) {
struct yf1630 F;
memset((void *)&F, 0, sizeof F);
F.p1629 = a_p1629;
F.v3939 = ((*(yR115 *)rt_nil_check(F.p1629))).f_chain;
while ((!(F.v3939 == ((void *)0)))) {
if ((((((((*(yR115 *)rt_nil_check(F.v3939))).f_name == ((*(yR115 *)rt_nil_check(F.p1629))).f_name)) && yr1603_Visible(F.v3939)) && ((((*(yR115 *)rt_nil_check(F.v3939))).f_kind == v843))) && ((!(((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v3939))).f_rep))).f_tid == ((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.p1629))).f_rep))).f_tid))))) {
{ rt_int rv3941 = 1;
return rv3941; }
}
F.v3939 = ((*(yR115 *)rt_nil_check(F.v3939))).f_chain;
}
{ rt_int rv3943 = 0;
return rv3943; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1634_FindLit(rt_int a_p1635, void * a_p1636) {
struct yf1637 F;
memset((void *)&F, 0, sizeof F);
F.p1635 = a_p1635;
F.p1636 = a_p1636;
F.v3948 = ((void * *)(v1556).p)[y_ix1(v1556, rt_mod(F.p1635, INT64_C(8192)))];
while ((!(F.v3948 == ((void *)0)))) {
if (((((((*(yR115 *)rt_nil_check(F.v3948))).f_name == F.p1635)) && ((((*(yR115 *)rt_nil_check(F.v3948))).f_kind == v843))) && ((((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v3948))).f_rep))).f_tid == ((*(yR100 *)rt_nil_check(F.p1636))).f_tid)))) {
{ void * rv3951 = F.v3948;
return rv3951; }
}
F.v3948 = ((*(yR115 *)rt_nil_check(F.v3948))).f_chain;
}
{ void * rv3952 = ((void *)0);
return rv3952; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1641_Define(void * a_p1642, rt_int a_p1643) {
struct yf1644 F;
memset((void *)&F, 0, sizeof F);
F.p1642 = a_p1642;
F.p1643 = a_p1643;
F.v3957 = yr1615_FindHere(((*(yR115 *)rt_nil_check(F.p1642))).f_name);
F.v3959 = rt_range(rt_mod(((*(yR115 *)rt_nil_check(F.p1642))).f_name, INT64_C(8192)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
if ((((!(F.v3957 == ((void *)0)))) && (!((((((*(yR115 *)rt_nil_check(F.v3957))).f_kind == v843)) && ((((*(yR115 *)rt_nil_check(F.p1642))).f_kind == v843))))))) {
yr1129_FailN(F.p1643, ((*(yR115 *)rt_nil_check(F.p1642))).f_name, y_str(" is declared twice in this scope", 32));
}
((*(yR115 *)rt_nil_check(F.p1642))).f_depth = v1567;
((*(yR115 *)rt_nil_check(F.p1642))).f_chain = ((void * *)(v1556).p)[y_ix1(v1556, F.v3959)];
((void * *)(v1556).p)[y_ix1(v1556, F.v3959)] = F.p1642;
((*(yR115 *)rt_nil_check(F.p1642))).f_stack = ((*(yR120 *)rt_nil_check(((void * *)(v1565).p)[y_ix1(v1565, v1567)]))).f_syms;
((*(yR120 *)rt_nil_check(((void * *)(v1565).p)[y_ix1(v1565, v1567)]))).f_syms = F.p1642;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1648_Path(rt_int a_p1649, rt_int a_p1650) {
struct yf1651 F;
memset((void *)&F, 0, sizeof F);
F.p1649 = a_p1649;
F.p1650 = a_p1650;
F.v3967 = rt_range(rt_sub(v1573, F.p1649), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
if ((F.p1649 == INT64_C(0))) {
{ rt_int rv3970 = F.p1650;
return rv3970; }
}
yr983_SB();
if ((F.v3967 == INT64_C(0))) {
yr994_SA(y_str("F.", 2));
} else {
yr994_SA(y_str("F.up->", 6));
while ((F.v3967 > INT64_C(1))) {
yr994_SA(y_str("up->", 4));
F.v3967 = rt_range(rt_sub(F.v3967, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
}
}
yr1001_ST(F.p1650);
{ rt_int rv3978 = yr1013_SE();
return rv3978; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1655_FramePtr(rt_int a_p1656) {
struct yf1657 F;
memset((void *)&F, 0, sizeof F);
F.p1656 = a_p1656;
F.v3982 = rt_range(rt_sub(v1573, F.p1656), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
if ((F.v3982 == INT64_C(0))) {
{ rt_int rv3986 = yr1018_T(y_str("&F", 2));
return rv3986; }
}
yr983_SB();
yr994_SA(y_str("F.up", 4));
while ((F.v3982 > INT64_C(1))) {
yr994_SA(y_str("->up", 4));
F.v3982 = rt_range(rt_sub(F.v3982, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
}
{ rt_int rv3992 = yr1013_SE();
return rv3992; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1661_DeclStorage(rt_int a_p1662, rt_int a_p1663) {
struct yf1664 F;
memset((void *)&F, 0, sizeof F);
F.p1662 = a_p1662;
F.p1663 = a_p1663;
yr983_SB();
if ((v1573 == INT64_C(0))) {
yr994_SA(y_str("static ", 7));
}
yr1001_ST(F.p1662);
yr994_SA(y_str(" ", 1));
yr1001_ST(F.p1663);
yr994_SA(y_str(";", 1));
F.v3997 = yr1013_SE();
if ((v1573 == INT64_C(0))) {
yr1067_Put(&v945, F.v3997);
} else {
yr1067_Put(&v955, F.v3997);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1668_SymPath(void * a_p1669) {
struct yf1670 F;
memset((void *)&F, 0, sizeof F);
F.p1669 = a_p1669;
F.v4006 = yr1648_Path(((*(yR115 *)rt_nil_check(F.p1669))).f_level, ((*(yR115 *)rt_nil_check(F.p1669))).f_cname);
if (((*(yR115 *)rt_nil_check(F.p1669))).f_byref) {
yr983_SB();
yr994_SA(y_str("(*", 2));
yr1001_ST(F.v4006);
yr994_SA(y_str(")", 1));
{ rt_int rv4009 = yr1013_SE();
return rv4009; }
}
{ rt_int rv4010 = F.v4006;
return rv4010; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1674_Real(void * a_p1675) {
struct yf1676 F;
memset((void *)&F, 0, sizeof F);
F.p1675 = a_p1675;
F.v4014 = F.p1675;
while ((((*(yR115 *)rt_nil_check(F.v4014))).f_kind == v864)) {
F.v4014 = ((*(yR115 *)rt_nil_check(F.v4014))).f_target;
}
{ void * rv4015 = F.v4014;
return rv4015; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1704_NewRep(rt_int a_p1705, rt_int a_p1706) {
struct yf1707 F;
memset((void *)&F, 0, sizeof F);
F.p1705 = a_p1705;
F.p1706 = a_p1706;
({ F.v4020 = rt_alloc(sizeof(yR100)); });
(*(yR100 *)rt_nil_check(F.v4020)) = ((yR100){ .f_kind = F.p1705, .f_tid = F.p1706, .f_tname = F.p1706, .f_lo = INT64_C(0), .f_hi = INT64_C(0), .f_mlo = INT64_C(0), .f_mhi = INT64_C(0), .f_hasm = 0, .f_scale = INT64_C(0), .f_prec = INT64_C(0), .f_elem = ((void *)0), .f_idx = ((void *)0), .f_nidx = INT64_C(0), .f_link = ((void *)0), .f_lits = ((void *)0), .f_nlits = INT64_C(0), .f_fields = ((void *)0), .f_selector = ((void *)0), .f_cname = INT64_C(0), .f_dname = INT64_C(0), .f_dlevel = INT64_C(0), .f_deep = 0, .f_abstract = 0, .f_opaque = 0, .f_ordered = 0, .f_forward = INT64_C(0), .f_fwdscope = INT64_C(0), .f_monitor = ((void *)0), .f_serial = INT64_C(0) });
((*(yR100 *)rt_nil_check(F.v4020))).f_serial = yr1138_NewSerial();
{ void * rv4040 = F.v4020;
return rv4040; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1711_CopyRep(void * a_p1712) {
struct yf1713 F;
memset((void *)&F, 0, sizeof F);
F.p1712 = a_p1712;
({ F.v4044 = rt_alloc(sizeof(yR100)); });
(*(yR100 *)rt_nil_check(F.v4044)) = (*(yR100 *)rt_nil_check(F.p1712));
((*(yR100 *)rt_nil_check(F.v4044))).f_serial = yr1138_NewSerial();
{ void * rv4045 = F.v4044;
return rv4045; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1717_IsDiscrete(void * a_p1718) {
struct yf1719 F;
memset((void *)&F, 0, sizeof F);
F.p1718 = a_p1718;
{ rt_int rv4048 = (((((((*(yR100 *)rt_nil_check(F.p1718))).f_kind == v774)) || ((((*(yR100 *)rt_nil_check(F.p1718))).f_kind == v783))) || ((((*(yR100 *)rt_nil_check(F.p1718))).f_kind == v786))) || ((((*(yR100 *)rt_nil_check(F.p1718))).f_kind == v789)));
return rv4048; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1723_IsNumeric(void * a_p1724) {
struct yf1725 F;
memset((void *)&F, 0, sizeof F);
F.p1724 = a_p1724;
{ rt_int rv4051 = ((((((*(yR100 *)rt_nil_check(F.p1724))).f_kind == v774)) || ((((*(yR100 *)rt_nil_check(F.p1724))).f_kind == v777))) || ((((*(yR100 *)rt_nil_check(F.p1724))).f_kind == v780)));
return rv4051; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1729_IsArrayLike(void * a_p1730) {
struct yf1731 F;
memset((void *)&F, 0, sizeof F);
F.p1730 = a_p1730;
{ rt_int rv4054 = ((((((*(yR100 *)rt_nil_check(F.p1730))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.p1730))).f_kind == v813))) || ((((*(yR100 *)rt_nil_check(F.p1730))).f_kind == v816)));
return rv4054; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1735_IsString(void * a_p1736) {
struct yf1737 F;
memset((void *)&F, 0, sizeof F);
F.p1736 = a_p1736;
if ((((*(yR100 *)rt_nil_check(F.p1736))).f_kind == v816)) {
{ rt_int rv4058 = 1;
return rv4058; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1736))).f_kind == v792)) && ((((*(yR100 *)rt_nil_check(F.p1736))).f_nidx == INT64_C(1))))) {
{ rt_int rv4060 = (((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p1736))).f_elem))).f_kind == v789);
return rv4060; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1736))).f_kind == v813)) && ((((*(yR100 *)rt_nil_check(F.p1736))).f_nidx == INT64_C(1))))) {
{ rt_int rv4062 = (((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p1736))).f_elem))).f_kind == v789);
return rv4062; }
}
{ rt_int rv4064 = 0;
return rv4064; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1741_Deep(void * a_p1742) {
struct yf1743 F;
memset((void *)&F, 0, sizeof F);
F.p1742 = a_p1742;
if (((((((*(yR100 *)rt_nil_check(F.p1742))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.p1742))).f_kind == v813))) || ((((*(yR100 *)rt_nil_check(F.p1742))).f_kind == v816)))) {
{ rt_int rv4068 = 1;
return rv4068; }
}
{ rt_int rv4069 = (((((*(yR100 *)rt_nil_check(F.p1742))).f_kind == v795)) && ((*(yR100 *)rt_nil_check(F.p1742))).f_deep);
return rv4069; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1747_CType(void * a_p1748) {
struct yf1749 F;
memset((void *)&F, 0, sizeof F);
F.p1748 = a_p1748;
F.v4073 = ((*(yR100 *)rt_nil_check(F.p1748))).f_kind;
if (((((F.v4073 == v774)) || ((F.v4073 == v783))) || ((F.v4073 == v786)))) {
{ rt_int rv4075 = yr1018_T(y_str("rt_int", 6));
return rv4075; }
}
if ((F.v4073 == v789)) {
{ rt_int rv4077 = yr1018_T(y_str("unsigned char", 13));
return rv4077; }
}
if ((((F.v4073 == v780)) || ((F.v4073 == v777)))) {
{ rt_int rv4079 = yr1018_T(y_str("double", 6));
return rv4079; }
}
if (((((F.v4073 == v792)) || ((F.v4073 == v813))) || ((F.v4073 == v816)))) {
{ rt_int rv4081 = yr1018_T(y_str("yarr", 4));
return rv4081; }
}
if ((F.v4073 == v795)) {
{ rt_int rv4082 = ((*(yR100 *)rt_nil_check(F.p1748))).f_cname;
return rv4082; }
}
if ((((F.v4073 == v798)) || ((F.v4073 == v819)))) {
{ rt_int rv4084 = yr1018_T(y_str("void *", 6));
return rv4084; }
}
if ((F.v4073 == v801)) {
{ rt_int rv4086 = yr1018_T(y_str("yfile *", 7));
return rv4086; }
}
if ((F.v4073 == v804)) {
{ rt_int rv4088 = yr1018_T(y_str("yset", 4));
return rv4088; }
}
if ((F.v4073 == v807)) {
{ rt_int rv4090 = yr1018_T(y_str("ysig", 4));
return rv4090; }
}
if ((F.v4073 == v810)) {
{ rt_int rv4092 = yr1018_T(y_str("rt_lock", 7));
return rv4092; }
}
{ rt_int rv4094 = yr1018_T(y_str("void", 4));
return rv4094; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1753_DescOf(void * a_p1754) {
struct yf1755 F;
memset((void *)&F, 0, sizeof F);
F.p1754 = a_p1754;
F.v4098 = ((*(yR100 *)rt_nil_check(F.p1754))).f_kind;
if (((((F.v4098 == v774)) || ((F.v4098 == v783))) || ((F.v4098 == v786)))) {
{ rt_int rv4100 = yr1018_T(y_str("&y_d_int", 8));
return rv4100; }
}
if ((F.v4098 == v789)) {
{ rt_int rv4102 = yr1018_T(y_str("&y_d_byte", 9));
return rv4102; }
}
if ((((F.v4098 == v780)) || ((F.v4098 == v777)))) {
{ rt_int rv4104 = yr1018_T(y_str("&y_d_float", 10));
return rv4104; }
}
if ((((F.v4098 == v798)) || ((F.v4098 == v819)))) {
{ rt_int rv4106 = yr1018_T(y_str("&y_d_ptr", 8));
return rv4106; }
}
if ((F.v4098 == v804)) {
{ rt_int rv4108 = yr1018_T(y_str("&y_d_set", 8));
return rv4108; }
}
if ((((F.v4098 == v792)) || ((F.v4098 == v795)))) {
yr983_SB();
yr994_SA(y_str("&", 1));
yr1001_ST(yr1648_Path(((*(yR100 *)rt_nil_check(F.p1754))).f_dlevel, ((*(yR100 *)rt_nil_check(F.p1754))).f_dname));
{ rt_int rv4110 = yr1013_SE();
return rv4110; }
}
if ((F.v4098 == v816)) {
{ rt_int rv4112 = yr1018_T(y_str("&y_d_str", 8));
return rv4112; }
}
{ rt_int rv4114 = yr1018_T(y_str("&y_d_opaque", 11));
return rv4114; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1759_NewDesc(void * a_p1760) {
struct yf1761 F;
memset((void *)&F, 0, sizeof F);
F.p1760 = a_p1760;
((*(yR100 *)rt_nil_check(F.p1760))).f_dname = yr1143_Fresh(y_str("yd_", 3));
((*(yR100 *)rt_nil_check(F.p1760))).f_dlevel = v1573;
yr1661_DeclStorage(yr1018_T(y_str("ydesc", 5)), ((*(yR100 *)rt_nil_check(F.p1760))).f_dname);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1765_SameType(void * a_p1766, void * a_p1767) {
struct yf1768 F;
memset((void *)&F, 0, sizeof F);
F.p1766 = a_p1766;
F.p1767 = a_p1767;
if ((((*(yR100 *)rt_nil_check(F.p1766))).f_tid == ((*(yR100 *)rt_nil_check(F.p1767))).f_tid)) {
{ rt_int rv4123 = 1;
return rv4123; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1766))).f_kind == v816)) && yr1735_IsString(F.p1767))) {
{ rt_int rv4125 = 1;
return rv4125; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1767))).f_kind == v816)) && yr1735_IsString(F.p1766))) {
{ rt_int rv4127 = 1;
return rv4127; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1766))).f_kind == v819)) && ((((*(yR100 *)rt_nil_check(F.p1767))).f_kind == v798)))) {
{ rt_int rv4129 = 1;
return rv4129; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1767))).f_kind == v819)) && ((((*(yR100 *)rt_nil_check(F.p1766))).f_kind == v798)))) {
{ rt_int rv4131 = 1;
return rv4131; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1766))).f_kind == v828)) || ((((*(yR100 *)rt_nil_check(F.p1767))).f_kind == v828)))) {
{ rt_int rv4133 = 1;
return rv4133; }
}
{ rt_int rv4135 = 0;
return rv4135; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1772_TypeClash(rt_int a_p1773, void * a_p1774, void * a_p1775) {
struct yf1776 F;
memset((void *)&F, 0, sizeof F);
F.p1773 = a_p1773;
F.p1774 = a_p1774;
F.p1775 = a_p1775;
yr983_SB();
yr994_SA(y_str("type conflict: ", 15));
yr1001_ST(((*(yR100 *)rt_nil_check(F.p1774))).f_tname);
yr994_SA(y_str(" expected, ", 11));
yr1001_ST(((*(yR100 *)rt_nil_check(F.p1775))).f_tname);
yr994_SA(y_str(" found", 6));
F.v4141 = yr1013_SE();
yr1114_Fail(F.p1773, F.v4141);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1780_CheckType(rt_int a_p1781, void * a_p1782, void * a_p1783) {
struct yf1784 F;
memset((void *)&F, 0, sizeof F);
F.p1781 = a_p1781;
F.p1782 = a_p1782;
F.p1783 = a_p1783;
if ((!yr1765_SameType(F.p1782, F.p1783))) {
yr1772_TypeClash(F.p1781, F.p1782, F.p1783);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1788_CheckRepresented(void * a_p1789, rt_int a_p1790) {
struct yf1791 F;
memset((void *)&F, 0, sizeof F);
F.p1789 = a_p1789;
F.p1790 = a_p1790;
if (((*(yR100 *)rt_nil_check(F.p1789))).f_abstract) {
yr1129_FailN(F.p1790, ((*(yR100 *)rt_nil_check(F.p1789))).f_tname, y_str(" is a type, not a representation (VI.A.1)", 41));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1795_Qualify(void * a_p1796, void * a_p1797) {
struct yf1798 F;
memset((void *)&F, 0, sizeof F);
F.p1796 = a_p1796;
F.p1797 = a_p1797;
yr2088_Expr(((*(yR95 *)rt_nil_check(F.p1797))).f_a, F.p1796, &F.v4157, &F.v4161);
yr2088_Expr(((*(yR95 *)rt_nil_check(F.p1797))).f_b, F.p1796, &F.v4159, &F.v4163);
if ((((((*(yR100 *)rt_nil_check(F.p1796))).f_kind == v780)) || ((((*(yR100 *)rt_nil_check(F.p1796))).f_kind == v777)))) {
yr1780_CheckType(((*(yR95 *)rt_nil_check(F.p1797))).f_line, F.p1796, F.v4161);
yr1780_CheckType(((*(yR95 *)rt_nil_check(F.p1797))).f_line, F.p1796, F.v4163);
((*(yR100 *)rt_nil_check(F.p1796))).f_lo = F.v4157;
((*(yR100 *)rt_nil_check(F.p1796))).f_hi = F.v4159;
if ((((*(yR100 *)rt_nil_check(F.p1796))).f_kind == v780)) {
if ((((*(yR95 *)rt_nil_check(F.p1797))).f_d == ((void *)0))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p1797))).f_line, y_str("FLOATING needs PRECISION (VI.A.1.c)", 35));
}
yr2029_Manifest(((*(yR95 *)rt_nil_check(F.p1797))).f_d, &F.v4165, &F.v4167);
if ((!F.v4165)) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p1797))).f_line, y_str("PRECISION is a manifest constant", 32));
}
yr983_SB();
yr1007_SI(F.v4167);
((*(yR100 *)rt_nil_check(F.p1796))).f_prec = yr1013_SE();
} else {
if ((((*(yR95 *)rt_nil_check(F.p1797))).f_c == ((void *)0))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p1797))).f_line, y_str("FIXED needs SCALE (VI.A.1.b)", 28));
}
yr2088_Expr(((*(yR95 *)rt_nil_check(F.p1797))).f_c, F.p1796, &((*(yR100 *)rt_nil_check(F.p1796))).f_scale, &F.v4161);
}
((*(yR100 *)rt_nil_check(F.p1796))).f_abstract = 0;
return;
}
if ((!yr1717_IsDiscrete(F.p1796))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p1797))).f_line, y_str("only a scalar or integer representation takes a range", 53));
}
if ((((!(((*(yR95 *)rt_nil_check(F.p1797))).f_c == ((void *)0)))) || ((!(((*(yR95 *)rt_nil_check(F.p1797))).f_d == ((void *)0)))))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p1797))).f_line, y_str("SCALE and PRECISION qualify numbers", 35));
}
yr1780_CheckType(((*(yR95 *)rt_nil_check(F.p1797))).f_line, F.p1796, F.v4161);
yr1780_CheckType(((*(yR95 *)rt_nil_check(F.p1797))).f_line, F.p1796, F.v4163);
((*(yR100 *)rt_nil_check(F.p1796))).f_lo = F.v4157;
((*(yR100 *)rt_nil_check(F.p1796))).f_hi = F.v4159;
yr2029_Manifest(((*(yR95 *)rt_nil_check(F.p1797))).f_a, &F.v4165, &((*(yR100 *)rt_nil_check(F.p1796))).f_mlo);
((*(yR100 *)rt_nil_check(F.p1796))).f_hasm = F.v4165;
yr2029_Manifest(((*(yR95 *)rt_nil_check(F.p1797))).f_b, &F.v4165, &((*(yR100 *)rt_nil_check(F.p1796))).f_mhi);
((*(yR100 *)rt_nil_check(F.p1796))).f_hasm = (((*(yR100 *)rt_nil_check(F.p1796))).f_hasm && F.v4165);
((*(yR100 *)rt_nil_check(F.p1796))).f_abstract = 0;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1802_DefineLits(void * a_p1803) {
struct yf1804 F;
memset((void *)&F, 0, sizeof F);
F.p1803 = a_p1803;
F.v4178 = ((*(yR100 *)rt_nil_check(F.p1803))).f_lits;
F.v4182 = INT64_C(0);
while ((!(F.v4178 == ((void *)0)))) {
if ((!(yr1609_Find(((*(yR95 *)rt_nil_check(F.v4178))).f_name) == ((void *)0)))) {
F.v4180 = yr1609_Find(((*(yR95 *)rt_nil_check(F.v4178))).f_name);
if ((((!(((*(yR115 *)rt_nil_check(F.v4180))).f_kind == v843))) && ((((*(yR115 *)rt_nil_check(F.v4180))).f_depth == v1567)))) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.v4178))).f_line, ((*(yR95 *)rt_nil_check(F.v4178))).f_name, y_str(" is declared twice in this scope", 32));
}
}
F.v4180 = yr1585_NewSym(v843, ((*(yR95 *)rt_nil_check(F.v4178))).f_name);
((*(yR115 *)rt_nil_check(F.v4180))).f_rep = F.p1803;
((*(yR115 *)rt_nil_check(F.v4180))).f_mval = F.v4182;
((*(yR115 *)rt_nil_check(F.v4180))).f_hasmv = 1;
yr1641_Define(F.v4180, ((*(yR95 *)rt_nil_check(F.v4178))).f_line);
F.v4182 = rt_range(rt_add(F.v4182, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
F.v4178 = ((*(yR95 *)rt_nil_check(F.v4178))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1808_SetRange(void * a_p1809, rt_int a_p1810, rt_int a_p1811) {
struct yf1812 F;
memset((void *)&F, 0, sizeof F);
F.p1809 = a_p1809;
F.p1810 = a_p1810;
F.p1811 = a_p1811;
yr983_SB();
yr1007_SI(F.p1810);
((*(yR100 *)rt_nil_check(F.p1809))).f_lo = yr1013_SE();
yr983_SB();
yr1007_SI(F.p1811);
((*(yR100 *)rt_nil_check(F.p1809))).f_hi = yr1013_SE();
((*(yR100 *)rt_nil_check(F.p1809))).f_mlo = F.p1810;
((*(yR100 *)rt_nil_check(F.p1809))).f_mhi = F.p1811;
((*(yR100 *)rt_nil_check(F.p1809))).f_hasm = 1;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1816_NewTid(rt_int a_p1817) {
struct yf1818 F;
memset((void *)&F, 0, sizeof F);
F.p1817 = a_p1817;
F.v4196 = yr1138_NewSerial();
yr983_SB();
if ((!(F.p1817 == INT64_C(0)))) {
yr1001_ST(F.p1817);
} else {
yr994_SA(y_str("anonymous", 9));
}
yr994_SA(y_str("#", 1));
yr1007_SI(F.v4196);
{ rt_int rv4200 = yr1013_SE();
return rv4200; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1822_MakeRep(void * a_p1823, rt_int a_p1824, rt_int a_p1825) {
struct yf1826 F;
memset((void *)&F, 0, sizeof F);
F.p1823 = a_p1823;
F.p1824 = a_p1824;
F.p1825 = a_p1825;
F.v4216 = ((*(yR95 *)rt_nil_check(F.p1823))).f_kind;
F.v4220 = INT64_C(0);
F.v4222 = F.p1824;
if ((!(((*(yR95 *)rt_nil_check(F.p1823))).f_text == INT64_C(0)))) {
F.v4214 = yr1674_Real(yr1621_Lookup(((*(yR95 *)rt_nil_check(F.p1823))).f_text, ((*(yR95 *)rt_nil_check(F.p1823))).f_line));
if ((((!(((*(yR115 *)rt_nil_check(F.v4214))).f_kind == v840))) && ((!(((*(yR115 *)rt_nil_check(F.v4214))).f_kind == v837))))) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p1823))).f_line, ((*(yR95 *)rt_nil_check(F.p1823))).f_text, y_str(" is not a type", 14));
}
F.v4220 = ((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4214))).f_rep))).f_tid;
F.v4222 = ((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4214))).f_rep))).f_tname;
}
if ((F.v4216 == v642)) {
F.v4214 = yr1674_Real(yr1621_Lookup(((*(yR95 *)rt_nil_check(F.p1823))).f_name, ((*(yR95 *)rt_nil_check(F.p1823))).f_line));
if ((((!(((*(yR115 *)rt_nil_check(F.v4214))).f_kind == v840))) && ((!(((*(yR115 *)rt_nil_check(F.v4214))).f_kind == v837))))) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p1823))).f_line, ((*(yR95 *)rt_nil_check(F.p1823))).f_name, y_str(" is not a representation", 24));
}
F.v4206 = ((*(yR115 *)rt_nil_check(F.v4214))).f_rep;
if ((!(((*(yR95 *)rt_nil_check(F.p1823))).f_a == ((void *)0)))) {
F.v4206 = yr1711_CopyRep(F.v4206);
yr1795_Qualify(F.v4206, ((*(yR95 *)rt_nil_check(F.p1823))).f_a);
}
{ void * rv4227 = F.v4206;
return rv4227; }
}
if ((F.v4220 == INT64_C(0))) {
F.v4220 = yr1816_NewTid(F.p1824);
if ((F.v4222 == INT64_C(0))) {
F.v4222 = F.v4220;
}
}
if ((F.v4216 == v645)) {
F.v4206 = yr1704_NewRep(v786, F.v4220);
((*(yR100 *)rt_nil_check(F.v4206))).f_tname = F.v4222;
((*(yR100 *)rt_nil_check(F.v4206))).f_ordered = (((*(yR95 *)rt_nil_check(F.p1823))).f_flag == INT64_C(1));
((*(yR100 *)rt_nil_check(F.v4206))).f_lits = ((*(yR95 *)rt_nil_check(F.p1823))).f_a;
((*(yR100 *)rt_nil_check(F.v4206))).f_nlits = yr1257_Count(((*(yR95 *)rt_nil_check(F.p1823))).f_a);
yr1808_SetRange(F.v4206, INT64_C(0), rt_range(rt_sub(((*(yR100 *)rt_nil_check(F.v4206))).f_nlits, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904)));
yr1802_DefineLits(F.v4206);
if ((!(((*(yR95 *)rt_nil_check(F.p1823))).f_b == ((void *)0)))) {
yr1795_Qualify(F.v4206, ((*(yR95 *)rt_nil_check(F.p1823))).f_b);
}
{ void * rv4234 = F.v4206;
return rv4234; }
}
if ((F.v4216 == v648)) {
F.v4206 = yr1704_NewRep(v789, F.v4220);
((*(yR100 *)rt_nil_check(F.v4206))).f_tname = F.v4222;
((*(yR100 *)rt_nil_check(F.v4206))).f_ordered = 1;
((*(yR100 *)rt_nil_check(F.v4206))).f_lits = ((*(yR95 *)rt_nil_check(F.p1823))).f_a;
((*(yR100 *)rt_nil_check(F.v4206))).f_nlits = yr1257_Count(((*(yR95 *)rt_nil_check(F.p1823))).f_a);
if ((((*(yR100 *)rt_nil_check(F.v4206))).f_nlits > INT64_C(256))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p1823))).f_line, y_str("this implementation takes alphabets of up to 256 characters", 59));
}
yr1808_SetRange(F.v4206, INT64_C(0), rt_range(rt_sub(((*(yR100 *)rt_nil_check(F.v4206))).f_nlits, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904)));
if ((!(((*(yR95 *)rt_nil_check(F.p1823))).f_b == ((void *)0)))) {
yr1795_Qualify(F.v4206, ((*(yR95 *)rt_nil_check(F.p1823))).f_b);
}
{ void * rv4241 = F.v4206;
return rv4241; }
}
if ((F.v4216 == v651)) {
F.v4206 = yr1704_NewRep(v792, F.v4220);
((*(yR100 *)rt_nil_check(F.v4206))).f_tname = F.v4222;
F.v4218 = ((*(yR95 *)rt_nil_check(F.p1823))).f_a;
F.v4212 = ((void *)0);
while ((!(F.v4218 == ((void *)0)))) {
F.v4210 = yr1711_CopyRep(yr1822_MakeRep(F.v4218, INT64_C(0), 0));
if ((!yr1717_IsDiscrete(F.v4210))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.v4218))).f_line, y_str("an index is an integer or scalar representation", 47));
}
yr1788_CheckRepresented(F.v4210, ((*(yR95 *)rt_nil_check(F.v4218))).f_line);
((*(yR100 *)rt_nil_check(F.v4210))).f_link = ((void *)0);
if ((F.v4212 == ((void *)0))) {
((*(yR100 *)rt_nil_check(F.v4206))).f_idx = F.v4210;
} else {
((*(yR100 *)rt_nil_check(F.v4212))).f_link = F.v4210;
}
F.v4212 = F.v4210;
((*(yR100 *)rt_nil_check(F.v4206))).f_nidx = rt_range(rt_add(((*(yR100 *)rt_nil_check(F.v4206))).f_nidx, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
F.v4218 = ((*(yR95 *)rt_nil_check(F.v4218))).f_next;
}
if ((((*(yR100 *)rt_nil_check(F.v4206))).f_nidx > INT64_C(4))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p1823))).f_line, y_str("this implementation takes arrays of up to 4 dimensions", 54));
}
((*(yR100 *)rt_nil_check(F.v4206))).f_elem = yr1822_MakeRep(((*(yR95 *)rt_nil_check(F.p1823))).f_b, INT64_C(0), F.p1825);
if ((!F.p1825)) {
yr1788_CheckRepresented(((*(yR100 *)rt_nil_check(F.v4206))).f_elem, ((*(yR95 *)rt_nil_check(F.p1823))).f_line);
yr1842_BuildArrayDesc(F.v4206);
} else {
((*(yR100 *)rt_nil_check(F.v4206))).f_abstract = ((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.v4206))).f_elem))).f_abstract;
if ((!((*(yR100 *)rt_nil_check(F.v4206))).f_abstract)) {
yr1842_BuildArrayDesc(F.v4206);
}
}
((*(yR100 *)rt_nil_check(F.v4206))).f_deep = 1;
{ void * rv4251 = F.v4206;
return rv4251; }
}
if ((F.v4216 == v654)) {
F.v4206 = yr1704_NewRep(v795, F.v4220);
((*(yR100 *)rt_nil_check(F.v4206))).f_tname = F.v4222;
yr1872_MakeRecord(F.v4206, F.p1823, F.p1825);
{ void * rv4252 = F.v4206;
return rv4252; }
}
if (((((F.v4216 == v660)) || ((F.v4216 == v657))) || ((F.v4216 == v663)))) {
if ((F.v4216 == v660)) {
F.v4206 = yr1704_NewRep(v798, F.v4220);
((*(yR100 *)rt_nil_check(F.v4206))).f_tname = F.v4222;
if (((((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p1823))).f_a))).f_kind == v642)) && ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p1823))).f_a))).f_a == ((void *)0)))) && ((yr1609_Find(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p1823))).f_a))).f_name) == ((void *)0))))) {
((*(yR100 *)rt_nil_check(F.v4206))).f_forward = ((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p1823))).f_a))).f_name;
((*(yR100 *)rt_nil_check(F.v4206))).f_fwdscope = v1567;
F.v4218 = yr1242_NewNode(v639, ((*(yR95 *)rt_nil_check(F.p1823))).f_line);
((*(yR95 *)rt_nil_check(F.v4218))).f_rep = F.v4206;
((*(yR95 *)rt_nil_check(F.v4218))).f_next = v1702;
v1702 = F.v4218;
{ void * rv4253 = F.v4206;
return rv4253; }
}
((*(yR100 *)rt_nil_check(F.v4206))).f_elem = yr1822_MakeRep(((*(yR95 *)rt_nil_check(F.p1823))).f_a, INT64_C(0), 0);
{ void * rv4256 = F.v4206;
return rv4256; }
}
if ((F.v4216 == v657)) {
F.v4206 = yr1704_NewRep(v801, F.v4220);
((*(yR100 *)rt_nil_check(F.v4206))).f_tname = F.v4222;
((*(yR100 *)rt_nil_check(F.v4206))).f_elem = yr1822_MakeRep(((*(yR95 *)rt_nil_check(F.p1823))).f_a, INT64_C(0), F.p1825);
{ void * rv4258 = F.v4206;
return rv4258; }
}
F.v4206 = yr1704_NewRep(v804, F.v4220);
((*(yR100 *)rt_nil_check(F.v4206))).f_tname = F.v4222;
((*(yR100 *)rt_nil_check(F.v4206))).f_elem = yr1822_MakeRep(((*(yR95 *)rt_nil_check(F.p1823))).f_a, INT64_C(0), 0);
if ((!yr1717_IsDiscrete(((*(yR100 *)rt_nil_check(F.v4206))).f_elem))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p1823))).f_line, y_str("a set is of an integer or scalar representation", 47));
}
yr1788_CheckRepresented(((*(yR100 *)rt_nil_check(F.v4206))).f_elem, ((*(yR95 *)rt_nil_check(F.p1823))).f_line);
{ void * rv4262 = F.v4206;
return rv4262; }
}
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p1823))).f_line, y_str("this representation is not translated", 37));
{ void * rv4264 = ((void *)0);
return rv4264; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1830_ResolvePending(rt_int a_p1831, void * a_p1832) {
struct yf1833 F;
memset((void *)&F, 0, sizeof F);
F.p1831 = a_p1831;
F.p1832 = a_p1832;
F.v4269 = v1702;
F.v4271 = ((void *)0);
while ((!(F.v4269 == ((void *)0)))) {
if ((((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4269))).f_rep))).f_forward == F.p1831)) {
((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4269))).f_rep))).f_elem = F.p1832;
((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4269))).f_rep))).f_forward = INT64_C(0);
if ((F.v4271 == ((void *)0))) {
v1702 = ((*(yR95 *)rt_nil_check(F.v4269))).f_next;
} else {
((*(yR95 *)rt_nil_check(F.v4271))).f_next = ((*(yR95 *)rt_nil_check(F.v4269))).f_next;
}
} else {
F.v4271 = F.v4269;
}
F.v4269 = ((*(yR95 *)rt_nil_check(F.v4269))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1837_CheckPending(void) {
struct yf1838 F;
memset((void *)&F, 0, sizeof F);
F.v4275 = v1702;
while ((!(F.v4275 == ((void *)0)))) {
if ((((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4275))).f_rep))).f_fwdscope >= v1567)) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.v4275))).f_line, ((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4275))).f_rep))).f_forward, y_str(" is named by a pointer but not declared", 39));
}
F.v4275 = ((*(yR95 *)rt_nil_check(F.v4275))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1842_BuildArrayDesc(void * a_p1843) {
struct yf1844 F;
memset((void *)&F, 0, sizeof F);
F.p1843 = a_p1843;
yr1759_NewDesc(F.p1843);
yr983_SB();
yr994_SA(y_str("{ rt_int lo[", 12));
yr1007_SI(((*(yR100 *)rt_nil_check(F.p1843))).f_nidx);
yr994_SA(y_str("] = {", 5));
F.v4280 = ((*(yR100 *)rt_nil_check(F.p1843))).f_idx;
F.v4284 = 1;
while ((!(F.v4280 == ((void *)0)))) {
if ((!F.v4284)) {
yr994_SA(y_str(", ", 2));
}
F.v4284 = 0;
yr1001_ST(((*(yR100 *)rt_nil_check(F.v4280))).f_lo);
F.v4280 = ((*(yR100 *)rt_nil_check(F.v4280))).f_link;
}
yr994_SA(y_str("}, hi[", 6));
yr1007_SI(((*(yR100 *)rt_nil_check(F.p1843))).f_nidx);
yr994_SA(y_str("] = {", 5));
F.v4280 = ((*(yR100 *)rt_nil_check(F.p1843))).f_idx;
F.v4284 = 1;
while ((!(F.v4280 == ((void *)0)))) {
if ((!F.v4284)) {
yr994_SA(y_str(", ", 2));
}
F.v4284 = 0;
yr1001_ST(((*(yR100 *)rt_nil_check(F.v4280))).f_hi);
F.v4280 = ((*(yR100 *)rt_nil_check(F.v4280))).f_link;
}
yr994_SA(y_str("}; y_desc_array(", 16));
yr1001_ST(yr1753_DescOf(F.p1843));
yr994_SA(y_str(", ", 2));
yr1007_SI(((*(yR100 *)rt_nil_check(F.p1843))).f_nidx);
yr994_SA(y_str(", lo, hi, ", 10));
yr1001_ST(yr1753_DescOf(((*(yR100 *)rt_nil_check(F.p1843))).f_elem));
yr994_SA(y_str("); }", 4));
F.v4282 = yr1013_SE();
yr1089_Emit(F.v4282);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1848_AddField(void * a_p1849, void * * a_p1850, rt_int a_p1851, void * a_p1852, rt_int a_p1853, rt_int a_p1854, void * a_p1855, rt_int a_p1856) {
struct yf1857 F;
memset((void *)&F, 0, sizeof F);
F.p1849 = a_p1849;
F.p1850 = a_p1850;
F.p1851 = a_p1851;
F.p1852 = a_p1852;
F.p1853 = a_p1853;
F.p1854 = a_p1854;
F.p1855 = a_p1855;
F.p1856 = a_p1856;
F.v4309 = ((*(yR100 *)rt_nil_check(F.p1849))).f_fields;
while ((!(F.v4309 == ((void *)0)))) {
if ((((*(yR105 *)rt_nil_check(F.v4309))).f_name == F.p1851)) {
yr1129_FailN(F.p1856, F.p1851, y_str(" is a component twice", 21));
}
F.v4309 = ((*(yR105 *)rt_nil_check(F.v4309))).f_next;
}
({ F.v4309 = rt_alloc(sizeof(yR105)); });
(*(yR105 *)rt_nil_check(F.v4309)) = ((yR105){ .f_name = F.p1851, .f_rep = F.p1852, .f_isconst = F.p1853, .f_variant = F.p1854, .f_labels = F.p1855, .f_next = ((void *)0) });
if (((*F.p1850) == ((void *)0))) {
((*(yR100 *)rt_nil_check(F.p1849))).f_fields = F.v4309;
} else {
((*(yR105 *)rt_nil_check((*F.p1850)))).f_next = F.v4309;
}
(*F.p1850) = F.v4309;
if (yr1741_Deep(F.p1852)) {
((*(yR100 *)rt_nil_check(F.p1849))).f_deep = 1;
}
if (((*(yR100 *)rt_nil_check(F.p1852))).f_abstract) {
((*(yR100 *)rt_nil_check(F.p1849))).f_abstract = 1;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1861_AddFields(void * a_p1862, void * * a_p1863, void * a_p1864, rt_int a_p1865, void * a_p1866, rt_int a_p1867) {
struct yf1868 F;
memset((void *)&F, 0, sizeof F);
F.p1862 = a_p1862;
F.p1863 = a_p1863;
F.p1864 = a_p1864;
F.p1865 = a_p1865;
F.p1866 = a_p1866;
F.p1867 = a_p1867;
F.v4321 = F.p1864;
F.v4323 = F.p1864;
while ((!(F.v4321 == ((void *)0)))) {
F.v4325 = yr1822_MakeRep(((*(yR95 *)rt_nil_check(F.v4321))).f_b, INT64_C(0), F.p1867);
if ((!F.p1867)) {
yr1788_CheckRepresented(F.v4325, ((*(yR95 *)rt_nil_check(F.v4321))).f_line);
}
if ((((((*(yR100 *)rt_nil_check(F.v4325))).f_kind == v807)) || ((((*(yR100 *)rt_nil_check(F.v4325))).f_kind == v801)))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.v4321))).f_line, y_str("this implementation does not keep signals or files in records", 61));
}
F.v4323 = ((*(yR95 *)rt_nil_check(F.v4321))).f_a;
while ((!(F.v4323 == ((void *)0)))) {
yr1848_AddField(F.p1862, &(*F.p1863), ((*(yR95 *)rt_nil_check(F.v4323))).f_name, F.v4325, (((*(yR95 *)rt_nil_check(F.v4321))).f_ival == v240), F.p1865, F.p1866, ((*(yR95 *)rt_nil_check(F.v4323))).f_line);
F.v4323 = ((*(yR95 *)rt_nil_check(F.v4323))).f_next;
}
F.v4321 = ((*(yR95 *)rt_nil_check(F.v4321))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1872_MakeRecord(void * a_p1873, void * a_p1874, rt_int a_p1875) {
struct yf1876 F;
memset((void *)&F, 0, sizeof F);
F.p1873 = a_p1873;
F.p1874 = a_p1874;
F.p1875 = a_p1875;
F.v4333 = ((void *)0);
F.v4341 = INT64_C(0);
F.v4348 = INT64_C(0);
yr1861_AddFields(F.p1873, &F.v4333, ((*(yR95 *)rt_nil_check(F.p1874))).f_a, INT64_C(0), ((void *)0), F.p1875);
if ((!(((*(yR95 *)rt_nil_check(F.p1874))).f_b == ((void *)0)))) {
F.v4335 = ((*(yR95 *)rt_nil_check(F.p1874))).f_b;
F.v4339 = yr1822_MakeRep(((*(yR95 *)rt_nil_check(F.v4335))).f_b, INT64_C(0), 0);
if ((!yr1717_IsDiscrete(F.v4339))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.v4335))).f_line, y_str("the case-selection component is integer or scalar", 49));
}
yr1848_AddField(F.p1873, &F.v4333, ((*(yR95 *)rt_nil_check(F.v4335))).f_name, F.v4339, 1, INT64_C(0), ((void *)0), ((*(yR95 *)rt_nil_check(F.v4335))).f_line);
((*(yR100 *)rt_nil_check(F.p1873))).f_selector = F.v4333;
F.v4337 = ((*(yR95 *)rt_nil_check(F.v4335))).f_a;
while ((!(F.v4337 == ((void *)0)))) {
F.v4341 = rt_range(rt_add(F.v4341, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
yr1861_AddFields(F.p1873, &F.v4333, ((*(yR95 *)rt_nil_check(F.v4337))).f_b, F.v4341, ((*(yR95 *)rt_nil_check(F.v4337))).f_a, F.p1875);
F.v4337 = ((*(yR95 *)rt_nil_check(F.v4337))).f_next;
}
}
if ((F.p1875 && ((*(yR100 *)rt_nil_check(F.p1873))).f_abstract)) {
return;
}
((*(yR100 *)rt_nil_check(F.p1873))).f_abstract = 0;
((*(yR100 *)rt_nil_check(F.p1873))).f_cname = yr1143_Fresh(y_str("yR", 2));
yr983_SB();
yr994_SA(y_str("typedef struct ", 15));
yr1001_ST(((*(yR100 *)rt_nil_check(F.p1873))).f_cname);
yr994_SA(y_str(" ", 1));
yr1001_ST(((*(yR100 *)rt_nil_check(F.p1873))).f_cname);
yr994_SA(y_str(";", 1));
F.v4346 = yr1013_SE();
yr1067_Put(&v939, F.v4346);
yr983_SB();
yr994_SA(y_str("struct ", 7));
yr1001_ST(((*(yR100 *)rt_nil_check(F.p1873))).f_cname);
yr994_SA(y_str(" {", 2));
F.v4344 = ((*(yR100 *)rt_nil_check(F.p1873))).f_fields;
while ((!(F.v4344 == ((void *)0)))) {
yr994_SA(y_str(" ", 1));
yr1001_ST(yr1747_CType(((*(yR105 *)rt_nil_check(F.v4344))).f_rep));
yr994_SA(y_str(" f_", 3));
yr1001_ST(((*(yR105 *)rt_nil_check(F.v4344))).f_name);
yr994_SA(y_str(";", 1));
F.v4348 = rt_range(rt_add(F.v4348, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
F.v4344 = ((*(yR105 *)rt_nil_check(F.v4344))).f_next;
}
if ((F.v4348 == INT64_C(0))) {
yr994_SA(y_str(" int empty_;", 12));
}
yr994_SA(y_str(" };", 3));
F.v4346 = yr1013_SE();
yr1067_Put(&v941, F.v4346);
yr1759_NewDesc(F.p1873);
yr983_SB();
yr994_SA(y_str("{ static const size_t o[] = {", 29));
F.v4344 = ((*(yR100 *)rt_nil_check(F.p1873))).f_fields;
while ((!(F.v4344 == ((void *)0)))) {
yr994_SA(y_str("offsetof(", 9));
yr1001_ST(((*(yR100 *)rt_nil_check(F.p1873))).f_cname);
yr994_SA(y_str(", f_", 4));
yr1001_ST(((*(yR105 *)rt_nil_check(F.v4344))).f_name);
yr994_SA(y_str("), ", 3));
F.v4344 = ((*(yR105 *)rt_nil_check(F.v4344))).f_next;
}
yr994_SA(y_str("0}; const ydesc **f = rt_alloc(", 31));
yr1007_SI(rt_range(rt_add(F.v4348, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904)));
yr994_SA(y_str(" * sizeof *f);", 14));
F.v4341 = INT64_C(0);
F.v4344 = ((*(yR100 *)rt_nil_check(F.p1873))).f_fields;
while ((!(F.v4344 == ((void *)0)))) {
yr994_SA(y_str(" f[", 3));
yr1007_SI(F.v4341);
yr994_SA(y_str("] = ", 4));
yr1001_ST(yr1753_DescOf(((*(yR105 *)rt_nil_check(F.v4344))).f_rep));
yr994_SA(y_str(";", 1));
F.v4341 = rt_range(rt_add(F.v4341, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
F.v4344 = ((*(yR105 *)rt_nil_check(F.v4344))).f_next;
}
yr994_SA(y_str(" y_desc_record(", 15));
yr1001_ST(yr1753_DescOf(F.p1873));
yr994_SA(y_str(", sizeof(", 9));
yr1001_ST(((*(yR100 *)rt_nil_check(F.p1873))).f_cname);
yr994_SA(y_str("), ", 3));
yr1007_SI(F.v4348);
yr994_SA(y_str(", o, (const ydesc *const *)f); }", 32));
F.v4346 = yr1013_SE();
yr1089_Emit(F.v4346);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1880_FindField(void * a_p1881, rt_int a_p1882) {
struct yf1883 F;
memset((void *)&F, 0, sizeof F);
F.p1881 = a_p1881;
F.p1882 = a_p1882;
F.v4395 = ((*(yR100 *)rt_nil_check(F.p1881))).f_fields;
while ((!(F.v4395 == ((void *)0)))) {
if ((((*(yR105 *)rt_nil_check(F.v4395))).f_name == F.p1882)) {
{ void * rv4396 = F.v4395;
return rv4396; }
}
F.v4395 = ((*(yR105 *)rt_nil_check(F.v4395))).f_next;
}
{ void * rv4397 = ((void *)0);
return rv4397; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1998_CharOrd(void * a_p1999, rt_int a_p2000) {
struct yf2001 F;
memset((void *)&F, 0, sizeof F);
F.p1999 = a_p1999;
F.p2000 = a_p2000;
if ((((*(yR100 *)rt_nil_check(F.p1999))).f_tid == ((*(yR100 *)rt_nil_check(v1684))).f_tid)) {
if ((((rt_int *)(v887).p)[y_ix1(v887, F.p2000)] == INT64_C(1))) {
{ rt_int rv4413 = ((rt_int *)(v928).p)[y_ix1(v928, yr1060_TChar(F.p2000, INT64_C(1)))];
return rv4413; }
}
F.v4404 = INT64_C(0);
F.v4408 = INT64_C(1);
{ rt_int hi4421 = ((rt_int *)(v887).p)[y_ix1(v887, v1995)];
for (rt_int i4420 = INT64_C(1); i4420 <= hi4421; i4420++) { F.c_4419 = i4420;
if ((yr1060_TChar(v1995, rt_range(F.c_4419, INT64_C(-4611686018427387904), INT64_C(4611686018427387904))) == 32)) {
F.v4410 = yr1025_Intern(rt_range(rt_add(((rt_int *)(v885).p)[y_ix1(v885, v1995)], (rt_sub(F.v4408, INT64_C(1)))), INT64_C(-4611686018427387904), INT64_C(4611686018427387904)), rt_range(rt_sub(F.c_4419, F.v4408), INT64_C(-4611686018427387904), INT64_C(4611686018427387904)));
if ((F.v4410 == F.p2000)) {
if ((F.v4404 < INT64_C(32))) {
{ rt_int rv4428 = F.v4404;
return rv4428; }
}
if ((F.v4404 == INT64_C(32))) {
{ rt_int rv4431 = INT64_C(32);
return rv4431; }
}
if ((F.v4404 == INT64_C(33))) {
{ rt_int rv4434 = INT64_C(127);
return rv4434; }
}
if ((F.v4404 == INT64_C(34))) {
{ rt_int rv4437 = INT64_C(39);
return rv4437; }
}
{ rt_int rv4439 = INT64_C(34);
return rv4439; }
}
F.v4404 = rt_range(rt_add(F.v4404, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
F.v4408 = rt_range(rt_add(F.c_4419, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
}
if (i4420 == hi4421) break;
}}
{ rt_int rv4445 = INT64_C(-1);
return rv4445; }
}
if ((!(((*(yR100 *)rt_nil_check(F.p1999))).f_kind == v789))) {
{ rt_int rv4447 = INT64_C(-1);
return rv4447; }
}
F.v4402 = ((*(yR100 *)rt_nil_check(F.p1999))).f_lits;
F.v4406 = INT64_C(0);
while ((!(F.v4402 == ((void *)0)))) {
if (yr1045_TEq(((*(yR95 *)rt_nil_check(F.v4402))).f_text, F.p2000)) {
{ rt_int rv4449 = F.v4406;
return rv4449; }
}
F.v4406 = rt_range(rt_add(F.v4406, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
F.v4402 = ((*(yR95 *)rt_nil_check(F.v4402))).f_next;
}
{ rt_int rv4453 = INT64_C(-1);
return rv4453; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2005_AlphabetFor(void * a_p2006, void * a_p2007) {
struct yf2008 F;
memset((void *)&F, 0, sizeof F);
F.p2006 = a_p2006;
F.p2007 = a_p2007;
if ((!(((*(yR95 *)rt_nil_check(F.p2006))).f_d == ((void *)0)))) {
F.v4458 = yr1674_Real(yr1621_Lookup(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2006))).f_d))).f_name, ((*(yR95 *)rt_nil_check(F.p2006))).f_line));
if ((((((!(((*(yR115 *)rt_nil_check(F.v4458))).f_kind == v837))) && ((!(((*(yR115 *)rt_nil_check(F.v4458))).f_kind == v840))))) || ((!(((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4458))).f_rep))).f_kind == v789))))) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2006))).f_line, ((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2006))).f_d))).f_name, y_str(" is not an alphabet", 19));
}
{ void * rv4460 = ((*(yR115 *)rt_nil_check(F.v4458))).f_rep;
return rv4460; }
}
if ((!(F.p2007 == ((void *)0)))) {
if ((((*(yR100 *)rt_nil_check(F.p2007))).f_kind == v789)) {
{ void * rv4461 = F.p2007;
return rv4461; }
}
if ((yr1729_IsArrayLike(F.p2007) && ((!(((*(yR100 *)rt_nil_check(F.p2007))).f_elem == ((void *)0)))))) {
if ((((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p2007))).f_elem))).f_kind == v789)) {
{ void * rv4462 = ((*(yR100 *)rt_nil_check(F.p2007))).f_elem;
return rv4462; }
}
}
}
{ void * rv4463 = v1684;
return rv4463; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2012_CharValue(void * a_p2013, rt_int a_p2014, rt_int a_p2015) {
struct yf2016 F;
memset((void *)&F, 0, sizeof F);
F.p2013 = a_p2013;
F.p2014 = a_p2014;
F.p2015 = a_p2015;
F.v4469 = yr1998_CharOrd(F.p2013, F.p2014);
if ((F.v4469 < INT64_C(0))) {
yr983_SB();
yr994_SA(y_str("'", 1));
yr1001_ST(F.p2014);
yr994_SA(y_str("' is not a character of ", 24));
yr1001_ST(((*(yR100 *)rt_nil_check(F.p2013))).f_tname);
F.v4471 = yr1013_SE();
yr1114_Fail(F.p2015, F.v4471);
}
{ rt_int rv4475 = F.v4469;
return rv4475; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2020_StringCodes(void * a_p2021, rt_int a_p2022, rt_int * a_p2023, rt_int a_p2024) {
struct yf2025 F;
memset((void *)&F, 0, sizeof F);
F.p2021 = a_p2021;
F.p2022 = a_p2022;
F.p2023_o = a_p2023;
F.p2024 = a_p2024;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&F.yd_4493, 1, lo, hi, &y_d_int); }
y_init(&F.yd_4493, &F.v4495);
F.p2023 = INT64_C(0);
F.v4482 = INT64_C(1);
while ((F.v4482 <= ((rt_int *)(v887).p)[y_ix1(v887, F.p2022)])) {
F.v4497 = yr1060_TChar(F.p2022, F.v4482);
if ((F.v4497 == 39)) {
F.v4484 = rt_range(rt_add(F.v4482, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
while ((!(yr1060_TChar(F.p2022, F.v4484) == 39))) {
F.v4484 = rt_range(rt_add(F.v4484, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
}
F.v4499 = yr1025_Intern(rt_range(rt_add(((rt_int *)(v885).p)[y_ix1(v885, F.p2022)], F.v4482), INT64_C(-4611686018427387904), INT64_C(4611686018427387904)), rt_range(rt_sub((rt_sub(F.v4484, F.v4482)), INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904)));
F.v4486 = yr2012_CharValue(F.p2021, F.v4499, F.p2024);
F.v4482 = rt_range(rt_add(F.v4484, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
} else {
F.v4499 = yr1025_Intern(rt_range(rt_add(((rt_int *)(v885).p)[y_ix1(v885, F.p2022)], (rt_sub(F.v4482, INT64_C(1)))), INT64_C(-4611686018427387904), INT64_C(4611686018427387904)), INT64_C(1));
F.v4486 = yr2012_CharValue(F.p2021, F.v4499, F.p2024);
F.v4482 = rt_range(rt_add(F.v4482, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
}
if ((F.p2023 >= INT64_C(4096))) {
yr1121_FailS(F.p2024, y_str("string literal too long", 23));
}
F.p2023 = rt_range(rt_add(F.p2023, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
((rt_int *)(F.v4495).p)[y_ix1(F.v4495, F.p2023)] = F.v4486;
}
yr983_SB();
yr988_SC(34);
{ rt_int hi4530 = F.p2023;
for (rt_int i4529 = INT64_C(1); i4529 <= hi4530; i4529++) { F.c_4528 = i4529;
F.v4486 = ((rt_int *)(F.v4495).p)[y_ix1(F.v4495, F.c_4528)];
if ((((F.v4486 == INT64_C(34))) || ((F.v4486 == INT64_C(92))))) {
yr988_SC(92);
yr988_SC(((unsigned char *)(v937).p)[y_ix1(v937, F.v4486)]);
} else if (((((F.v4486 >= INT64_C(32))) && ((F.v4486 < INT64_C(127)))) && (((((!(F.v4486 == INT64_C(63)))) || ((F.c_4528 == INT64_C(1)))) || ((!(((rt_int *)(F.v4495).p)[y_ix1(F.v4495, rt_sub(F.c_4528, INT64_C(1)))] == INT64_C(63)))))))) {
yr988_SC(((unsigned char *)(v937).p)[y_ix1(v937, F.v4486)]);
} else {
yr988_SC(92);
yr988_SC(((unsigned char *)(v937).p)[y_ix1(v937, rt_add(INT64_C(48), (rt_div(F.v4486, INT64_C(64)))))]);
yr988_SC(((unsigned char *)(v937).p)[y_ix1(v937, rt_add(INT64_C(48), (rt_mod((rt_div(F.v4486, INT64_C(8))), INT64_C(8)))))]);
yr988_SC(((unsigned char *)(v937).p)[y_ix1(v937, rt_add(INT64_C(48), (rt_mod(F.v4486, INT64_C(8)))))]);
}
if (i4529 == hi4530) break;
}}
yr988_SC(34);
{ rt_int rv4557 = yr1013_SE();
(*F.p2023_o) = F.p2023;
return rv4557; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2029_Manifest(void * a_p2030, rt_int * a_p2031, rt_int * a_p2032) {
struct yf2033 F;
memset((void *)&F, 0, sizeof F);
F.p2030 = a_p2030;
F.p2031_o = a_p2031;
F.p2032_o = a_p2032;
F.p2031 = 0;
F.p2032 = INT64_C(0);
if ((((*(yR95 *)rt_nil_check(F.p2030))).f_kind == v729)) {
F.p2031 = 1;
F.p2032 = ((*(yR95 *)rt_nil_check(F.p2030))).f_ival;
(*F.p2031_o) = F.p2031;
(*F.p2032_o) = F.p2032;
return;
}
if ((((*(yR95 *)rt_nil_check(F.p2030))).f_kind == v738)) {
F.v4575 = yr2005_AlphabetFor(F.p2030, ((void *)0));
F.p2032 = yr1998_CharOrd(F.v4575, ((*(yR95 *)rt_nil_check(F.p2030))).f_text);
F.p2031 = (F.p2032 >= INT64_C(0));
(*F.p2031_o) = F.p2031;
(*F.p2032_o) = F.p2032;
return;
}
if ((((*(yR95 *)rt_nil_check(F.p2030))).f_kind == v747)) {
if ((!(((*(yR95 *)rt_nil_check(F.p2030))).f_d == ((void *)0)))) {
F.v4563 = yr1674_Real(yr1621_Lookup(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2030))).f_d))).f_name, ((*(yR95 *)rt_nil_check(F.p2030))).f_line));
F.v4563 = yr1634_FindLit(((*(yR95 *)rt_nil_check(F.p2030))).f_name, ((*(yR115 *)rt_nil_check(F.v4563))).f_rep);
} else {
F.v4563 = yr1609_Find(((*(yR95 *)rt_nil_check(F.p2030))).f_name);
}
if ((F.v4563 == ((void *)0))) {
(*F.p2031_o) = F.p2031;
(*F.p2032_o) = F.p2032;
return;
}
F.v4563 = yr1674_Real(F.v4563);
if ((((((((*(yR115 *)rt_nil_check(F.v4563))).f_kind == v843)) || ((((*(yR115 *)rt_nil_check(F.v4563))).f_kind == v834)))) && ((*(yR115 *)rt_nil_check(F.v4563))).f_hasmv)) {
F.p2031 = 1;
F.p2032 = ((*(yR115 *)rt_nil_check(F.v4563))).f_mval;
}
(*F.p2031_o) = F.p2031;
(*F.p2032_o) = F.p2032;
return;
}
if ((((*(yR95 *)rt_nil_check(F.p2030))).f_kind == v771)) {
yr2029_Manifest(((*(yR95 *)rt_nil_check(F.p2030))).f_a, &F.p2031, &F.p2032);
(*F.p2031_o) = F.p2031;
(*F.p2032_o) = F.p2032;
return;
}
if ((((*(yR95 *)rt_nil_check(F.p2030))).f_kind == v765)) {
yr2029_Manifest(((*(yR95 *)rt_nil_check(F.p2030))).f_a, &F.p2031, &F.p2032);
F.p2032 = rt_range(rt_neg(F.p2032), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
(*F.p2031_o) = F.p2031;
(*F.p2032_o) = F.p2032;
return;
}
if ((((*(yR95 *)rt_nil_check(F.p2030))).f_kind == v768)) {
yr2029_Manifest(((*(yR95 *)rt_nil_check(F.p2030))).f_a, &F.v4569, &F.v4565);
yr2029_Manifest(((*(yR95 *)rt_nil_check(F.p2030))).f_b, &F.v4571, &F.v4567);
if ((!((F.v4569 && F.v4571)))) {
(*F.p2031_o) = F.p2031;
(*F.p2032_o) = F.p2032;
return;
}
F.v4573 = ((*(yR95 *)rt_nil_check(F.p2030))).f_name;
F.p2031 = 1;
if ((F.v4573 == v543)) {
F.p2032 = rt_range(rt_add(F.v4565, F.v4567), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
} else if ((F.v4573 == v546)) {
F.p2032 = rt_range(rt_sub(F.v4565, F.v4567), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
} else if ((F.v4573 == v549)) {
F.p2032 = rt_range(rt_mul(F.v4565, F.v4567), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
} else if ((((F.v4573 == v246)) && ((!(F.v4567 == INT64_C(0)))))) {
F.p2032 = rt_range(rt_div(F.v4565, F.v4567), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
} else if ((((F.v4573 == v348)) && ((!(F.v4567 == INT64_C(0)))))) {
F.p2032 = rt_range(rt_mod(F.v4565, F.v4567), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
} else {
F.p2031 = 0;
}
(*F.p2031_o) = F.p2031;
(*F.p2032_o) = F.p2032;
return;
}
(*F.p2031_o) = F.p2031;
(*F.p2032_o) = F.p2032;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2037_Convert(rt_int a_p2038, void * a_p2039, void * a_p2040) {
struct yf2041 F;
memset((void *)&F, 0, sizeof F);
F.p2038 = a_p2038;
F.p2039 = a_p2039;
F.p2040 = a_p2040;
if ((yr1717_IsDiscrete(F.p2039) && ((!(((*(yR100 *)rt_nil_check(F.p2039))).f_lo == INT64_C(0)))))) {
if ((((((*(yR100 *)rt_nil_check(F.p2039))).f_hasm && ((*(yR100 *)rt_nil_check(F.p2040))).f_hasm) && ((((*(yR100 *)rt_nil_check(F.p2039))).f_mlo <= ((*(yR100 *)rt_nil_check(F.p2040))).f_mlo))) && ((((*(yR100 *)rt_nil_check(F.p2040))).f_mhi <= ((*(yR100 *)rt_nil_check(F.p2039))).f_mhi)))) {
{ rt_int rv4596 = F.p2038;
return rv4596; }
}
yr983_SB();
yr994_SA(y_str("rt_range(", 9));
yr1001_ST(F.p2038);
yr994_SA(y_str(", ", 2));
yr1001_ST(((*(yR100 *)rt_nil_check(F.p2039))).f_lo);
yr994_SA(y_str(", ", 2));
yr1001_ST(((*(yR100 *)rt_nil_check(F.p2039))).f_hi);
yr994_SA(y_str(")", 1));
{ rt_int rv4601 = yr1013_SE();
return rv4601; }
}
if ((((((*(yR100 *)rt_nil_check(F.p2039))).f_kind == v780)) && ((!(((*(yR100 *)rt_nil_check(F.p2039))).f_lo == INT64_C(0)))))) {
yr983_SB();
yr994_SA(y_str("rt_frange(", 10));
yr1001_ST(F.p2038);
yr994_SA(y_str(", ", 2));
yr1001_ST(((*(yR100 *)rt_nil_check(F.p2039))).f_lo);
yr994_SA(y_str(", ", 2));
yr1001_ST(((*(yR100 *)rt_nil_check(F.p2039))).f_hi);
yr994_SA(y_str(")", 1));
{ rt_int rv4607 = yr1013_SE();
return rv4607; }
}
if ((((((*(yR100 *)rt_nil_check(F.p2039))).f_kind == v777)) && ((!(((*(yR100 *)rt_nil_check(F.p2039))).f_lo == INT64_C(0)))))) {
yr983_SB();
yr994_SA(y_str("y_fixed(", 8));
yr1001_ST(F.p2038);
yr994_SA(y_str(", ", 2));
yr1001_ST(((*(yR100 *)rt_nil_check(F.p2039))).f_lo);
yr994_SA(y_str(", ", 2));
yr1001_ST(((*(yR100 *)rt_nil_check(F.p2039))).f_hi);
yr994_SA(y_str(", ", 2));
yr1001_ST(((*(yR100 *)rt_nil_check(F.p2039))).f_scale);
yr994_SA(y_str(")", 1));
{ rt_int rv4614 = yr1013_SE();
return rv4614; }
}
{ rt_int rv4615 = F.p2038;
return rv4615; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2045_Store(rt_int a_p2046, void * a_p2047, rt_int a_p2048, void * a_p2049, rt_int a_p2050) {
struct yf2051 F;
memset((void *)&F, 0, sizeof F);
F.p2046 = a_p2046;
F.p2047 = a_p2047;
F.p2048 = a_p2048;
F.p2049 = a_p2049;
F.p2050 = a_p2050;
yr1780_CheckType(F.p2050, F.p2047, F.p2049);
if (yr1741_Deep(F.p2047)) {
F.v4625 = yr1143_Fresh(y_str("t", 1));
yr983_SB();
yr994_SA(y_str("{ ", 2));
yr1001_ST(yr1747_CType(F.p2047));
yr994_SA(y_str(" ", 1));
yr1001_ST(F.v4625);
yr994_SA(y_str(" = ", 3));
yr1001_ST(F.p2048);
yr994_SA(y_str("; y_store(", 10));
yr1001_ST(yr1753_DescOf(F.p2047));
yr994_SA(y_str(", &", 3));
yr1001_ST(F.p2046);
yr994_SA(y_str(", &", 3));
yr1001_ST(F.v4625);
yr994_SA(y_str("); }", 4));
F.v4623 = yr1013_SE();
yr1089_Emit(F.v4623);
return;
}
yr983_SB();
yr1001_ST(F.p2046);
yr994_SA(y_str(" = ", 3));
yr1001_ST(yr2037_Convert(F.p2048, F.p2047, F.p2049));
yr994_SA(y_str(";", 1));
F.v4623 = yr1013_SE();
yr1089_Emit(F.v4623);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2055_IsVariable(void * a_p2056) {
struct yf2057 F;
memset((void *)&F, 0, sizeof F);
F.p2056 = a_p2056;
if ((((*(yR95 *)rt_nil_check(F.p2056))).f_kind == v747)) {
F.v4639 = yr1609_Find(((*(yR95 *)rt_nil_check(F.p2056))).f_name);
if ((F.v4639 == ((void *)0))) {
{ rt_int rv4643 = 0;
return rv4643; }
}
if (((*(yR115 *)rt_nil_check(F.v4639))).f_readonly) {
{ rt_int rv4645 = 0;
return rv4645; }
}
{ rt_int rv4646 = (((*(yR115 *)rt_nil_check(yr1674_Real(F.v4639)))).f_kind == v831);
return rv4646; }
}
if ((((*(yR95 *)rt_nil_check(F.p2056))).f_kind == v759)) {
{ rt_int rv4648 = 1;
return rv4648; }
}
if ((((*(yR95 *)rt_nil_check(F.p2056))).f_kind == v756)) {
{ rt_int rv4649 = yr2055_IsVariable(((*(yR95 *)rt_nil_check(F.p2056))).f_a);
return rv4649; }
}
if ((((*(yR95 *)rt_nil_check(F.p2056))).f_kind == v753)) {
if ((!yr2055_IsVariable(((*(yR95 *)rt_nil_check(F.p2056))).f_a))) {
{ rt_int rv4651 = 0;
return rv4651; }
}
F.v4641 = yr1880_FindField(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2056))).f_a))).f_rep, ((*(yR95 *)rt_nil_check(F.p2056))).f_name);
if ((F.v4641 == ((void *)0))) {
{ rt_int rv4653 = 0;
return rv4653; }
}
{ rt_int rv4654 = (!((*(yR105 *)rt_nil_check(F.v4641))).f_isconst);
return rv4654; }
}
{ rt_int rv4656 = 0;
return rv4656; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2061_LValue(void * a_p2062, rt_int * a_p2063, void * * a_p2064) {
struct yf2065 F;
memset((void *)&F, 0, sizeof F);
F.p2062 = a_p2062;
F.p2063_o = a_p2063;
F.p2064_o = a_p2064;
yr2088_Expr(F.p2062, ((void *)0), &F.p2063, &F.p2064);
if ((!yr2055_IsVariable(F.p2062))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2062))).f_line, y_str("a variable is needed here (IX.A.1)", 34));
}
(*F.p2063_o) = F.p2063;
(*F.p2064_o) = F.p2064;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2069_Paren(rt_int a_p2070) {
struct yf2071 F;
memset((void *)&F, 0, sizeof F);
F.p2070 = a_p2070;
yr983_SB();
yr994_SA(y_str("(", 1));
yr1001_ST(F.p2070);
yr994_SA(y_str(")", 1));
{ rt_int rv4666 = yr1013_SE();
return rv4666; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2075_Lit(void * a_p2076, rt_int a_p2077) {
struct yf2078 F;
memset((void *)&F, 0, sizeof F);
F.p2076 = a_p2076;
F.p2077 = a_p2077;
F.v4671 = yr1711_CopyRep(F.p2076);
yr1808_SetRange(F.v4671, F.p2077, F.p2077);
{ void * rv4672 = F.v4671;
return rv4672; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2082_Qualifier(void * a_p2083) {
struct yf2084 F;
memset((void *)&F, 0, sizeof F);
F.p2083 = a_p2083;
F.v4676 = yr1674_Real(yr1621_Lookup(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2083))).f_d))).f_name, ((*(yR95 *)rt_nil_check(F.p2083))).f_line));
if ((((!(((*(yR115 *)rt_nil_check(F.v4676))).f_kind == v837))) && ((!(((*(yR115 *)rt_nil_check(F.v4676))).f_kind == v840))))) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2083))).f_line, ((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2083))).f_d))).f_name, y_str(" is not a type", 14));
}
{ void * rv4678 = ((*(yR115 *)rt_nil_check(F.v4676))).f_rep;
return rv4678; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2088_Expr(void * a_p2089, void * a_p2090, rt_int * a_p2091, void * * a_p2092) {
struct yf2093 F;
memset((void *)&F, 0, sizeof F);
F.p2089 = a_p2089;
F.p2090 = a_p2090;
F.p2091_o = a_p2091;
F.p2092_o = a_p2092;
F.v4685 = ((*(yR95 *)rt_nil_check(F.p2089))).f_kind;
v957 = ((*(yR95 *)rt_nil_check(F.p2089))).f_line;
if ((F.v4685 == v771)) {
yr2088_Expr(((*(yR95 *)rt_nil_check(F.p2089))).f_a, F.p2090, &F.v4689, &F.p2092);
F.p2091 = yr2069_Paren(F.v4689);
} else if ((F.v4685 == v729)) {
F.p2092 = yr2075_Lit(v1680, ((*(yR95 *)rt_nil_check(F.p2089))).f_ival);
if ((!(((*(yR95 *)rt_nil_check(F.p2089))).f_d == ((void *)0)))) {
F.v4695 = yr2082_Qualifier(F.p2089);
if ((!(((*(yR100 *)rt_nil_check(F.v4695))).f_kind == v774))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2089))).f_line, y_str("an integer literal qualified by a type that is not INTEGER", 58));
}
((*(yR100 *)rt_nil_check(F.p2092))).f_tid = ((*(yR100 *)rt_nil_check(F.v4695))).f_tid;
((*(yR100 *)rt_nil_check(F.p2092))).f_tname = ((*(yR100 *)rt_nil_check(F.v4695))).f_tname;
}
yr983_SB();
yr994_SA(y_str("INT64_C(", 8));
yr1007_SI(((*(yR95 *)rt_nil_check(F.p2089))).f_ival);
yr994_SA(y_str(")", 1));
F.p2091 = yr1013_SE();
} else if ((F.v4685 == v738)) {
F.v4695 = yr2005_AlphabetFor(F.p2089, F.p2090);
F.v4701 = yr2012_CharValue(F.v4695, ((*(yR95 *)rt_nil_check(F.p2089))).f_text, ((*(yR95 *)rt_nil_check(F.p2089))).f_line);
F.p2092 = yr2075_Lit(F.v4695, F.v4701);
yr983_SB();
yr1007_SI(F.v4701);
F.p2091 = yr1013_SE();
} else if ((F.v4685 == v741)) {
F.v4695 = yr2005_AlphabetFor(F.p2089, F.p2090);
F.v4689 = yr2020_StringCodes(F.v4695, ((*(yR95 *)rt_nil_check(F.p2089))).f_text, &F.v4699, ((*(yR95 *)rt_nil_check(F.p2089))).f_line);
F.p2092 = yr1704_NewRep(v816, yr1018_T(y_str("string", 6)));
((*(yR100 *)rt_nil_check(F.p2092))).f_tname = yr1018_T(y_str("a string literal", 16));
((*(yR100 *)rt_nil_check(F.p2092))).f_elem = F.v4695;
((*(yR100 *)rt_nil_check(F.p2092))).f_nidx = INT64_C(1);
((*(yR100 *)rt_nil_check(F.p2092))).f_nlits = F.v4699;
yr983_SB();
yr994_SA(y_str("y_str(", 6));
yr1001_ST(F.v4689);
yr994_SA(y_str(", ", 2));
yr1007_SI(F.v4699);
yr994_SA(y_str(")", 1));
F.p2091 = yr1013_SE();
} else if ((F.v4685 == v735)) {
F.p2092 = v1692;
if ((!(((*(yR95 *)rt_nil_check(F.p2089))).f_d == ((void *)0)))) {
F.p2092 = yr2082_Qualifier(F.p2089);
}
F.p2091 = yr2069_Paren(((*(yR95 *)rt_nil_check(F.p2089))).f_text);
} else if ((F.v4685 == v732)) {
F.p2092 = v1694;
if ((!(((*(yR95 *)rt_nil_check(F.p2089))).f_d == ((void *)0)))) {
F.p2092 = yr2082_Qualifier(F.p2089);
}
F.p2091 = ((*(yR95 *)rt_nil_check(F.p2089))).f_text;
} else if ((F.v4685 == v744)) {
if ((((*(yR95 *)rt_nil_check(F.p2089))).f_d == ((void *)0))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2089))).f_line, y_str("NIL is qualified by the name of a pointer type (VI.B.4)", 55));
}
F.p2092 = yr2082_Qualifier(F.p2089);
if ((!(((*(yR100 *)rt_nil_check(F.p2092))).f_kind == v798))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2089))).f_line, y_str("NIL of a type that is not a pointer", 35));
}
F.p2091 = yr1018_T(y_str("((void *)0)", 11));
} else if ((F.v4685 == v747)) {
if ((!(((*(yR95 *)rt_nil_check(F.p2089))).f_d == ((void *)0)))) {
F.v4695 = yr2082_Qualifier(F.p2089);
F.v4687 = yr1634_FindLit(((*(yR95 *)rt_nil_check(F.p2089))).f_name, F.v4695);
if ((F.v4687 == ((void *)0))) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2089))).f_line, ((*(yR95 *)rt_nil_check(F.p2089))).f_name, y_str(" is not a literal of that type", 30));
}
} else {
F.v4687 = yr1621_Lookup(((*(yR95 *)rt_nil_check(F.p2089))).f_name, ((*(yR95 *)rt_nil_check(F.p2089))).f_line);
}
yr2105_NameExpr(F.p2089, F.v4687, &F.p2091, &F.p2092);
} else if ((F.v4685 == v750)) {
yr2260_CallExpr(F.p2089, F.p2090, 0, &F.p2091, &F.p2092);
} else if ((F.v4685 == v753)) {
yr2088_Expr(((*(yR95 *)rt_nil_check(F.p2089))).f_a, ((void *)0), &F.v4689, &F.v4695);
((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2089))).f_a))).f_rep = F.v4695;
if ((!(((*(yR100 *)rt_nil_check(F.v4695))).f_kind == v795))) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2089))).f_line, ((*(yR95 *)rt_nil_check(F.p2089))).f_name, y_str(": a component of something that is not a record", 47));
}
if (((*(yR100 *)rt_nil_check(F.v4695))).f_opaque) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2089))).f_line, ((*(yR100 *)rt_nil_check(F.v4695))).f_tname, y_str(" is exported opaquely: its components are hidden (X.B.3)", 56));
}
F.v4697 = yr1880_FindField(F.v4695, ((*(yR95 *)rt_nil_check(F.p2089))).f_name);
if ((F.v4697 == ((void *)0))) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2089))).f_line, ((*(yR95 *)rt_nil_check(F.p2089))).f_name, y_str(" is not a component of this record", 34));
}
F.p2092 = ((*(yR105 *)rt_nil_check(F.v4697))).f_rep;
if ((!(((*(yR105 *)rt_nil_check(F.v4697))).f_variant == INT64_C(0)))) {
F.v4691 = yr1143_Fresh(y_str("vr", 2));
yr983_SB();
yr994_SA(y_str("(*({ ", 5));
yr1001_ST(yr1747_CType(F.v4695));
yr994_SA(y_str(" *", 2));
yr1001_ST(F.v4691);
yr994_SA(y_str(" = &", 4));
yr1001_ST(yr2069_Paren(F.v4689));
yr994_SA(y_str("; if (!(", 8));
yr1001_ST(yr2097_VariantTest(F.v4695, F.v4697, F.v4691));
yr994_SA(y_str(")) rt_raise(RT_X_TAG); &", 24));
yr1001_ST(F.v4691);
yr994_SA(y_str("->f_", 4));
yr1001_ST(((*(yR95 *)rt_nil_check(F.p2089))).f_name);
yr994_SA(y_str("; }))", 5));
F.p2091 = yr1013_SE();
} else {
yr983_SB();
yr1001_ST(yr2069_Paren(F.v4689));
yr994_SA(y_str(".f_", 3));
yr1001_ST(((*(yR95 *)rt_nil_check(F.p2089))).f_name);
F.p2091 = yr1013_SE();
}
} else if ((F.v4685 == v759)) {
yr2088_Expr(((*(yR95 *)rt_nil_check(F.p2089))).f_a, ((void *)0), &F.v4689, &F.v4695);
if ((!(((*(yR100 *)rt_nil_check(F.v4695))).f_kind == v798))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2089))).f_line, y_str("^ of something that is not a pointer", 36));
}
if ((((*(yR100 *)rt_nil_check(F.v4695))).f_elem == ((void *)0))) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2089))).f_line, ((*(yR100 *)rt_nil_check(F.v4695))).f_forward, y_str(" is not declared", 16));
}
F.p2092 = ((*(yR100 *)rt_nil_check(F.v4695))).f_elem;
yr983_SB();
yr994_SA(y_str("(*(", 3));
yr1001_ST(yr1747_CType(F.p2092));
yr994_SA(y_str(" *)rt_nil_check(", 16));
yr1001_ST(F.v4689);
yr994_SA(y_str("))", 2));
F.p2091 = yr1013_SE();
} else if ((F.v4685 == v756)) {
yr2114_IndexExpr(F.p2089, &F.p2091, &F.p2092);
} else if ((F.v4685 == v762)) {
yr2088_Expr(((*(yR95 *)rt_nil_check(F.p2089))).f_a, v1682, &F.v4689, &F.v4695);
yr1780_CheckType(((*(yR95 *)rt_nil_check(F.p2089))).f_line, v1682, F.v4695);
F.p2092 = v1682;
yr983_SB();
yr994_SA(y_str("(!", 2));
yr1001_ST(F.v4689);
yr994_SA(y_str(")", 1));
F.p2091 = yr1013_SE();
} else if ((F.v4685 == v765)) {
if ((!yr2249_UserOp(F.p2089, rt_range(v546, INT64_C(0), INT64_C(4000000)), ((*(yR95 *)rt_nil_check(F.p2089))).f_a, ((void *)0), &F.p2091, &F.p2092))) {
yr2088_Expr(((*(yR95 *)rt_nil_check(F.p2089))).f_a, F.p2090, &F.v4689, &F.v4695);
yr2122_NegExpr(F.p2089, F.v4689, F.v4695, &F.p2091, &F.p2092);
}
} else if ((F.v4685 == v768)) {
yr2171_BinExpr(F.p2089, F.p2090, &F.p2091, &F.p2092);
} else {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2089))).f_line, y_str("not an expression", 17));
}
((*(yR95 *)rt_nil_check(F.p2089))).f_rep = F.p2092;
(*F.p2091_o) = F.p2091;
(*F.p2092_o) = F.p2092;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2097_VariantTest(void * a_p2098, void * a_p2099, rt_int a_p2100) {
struct yf2101 F;
memset((void *)&F, 0, sizeof F);
F.p2098 = a_p2098;
F.p2099 = a_p2099;
F.p2100 = a_p2100;
F.v4742 = ((*(yR105 *)rt_nil_check(F.p2099))).f_labels;
yr983_SB();
yr994_SA(y_str("0", 1));
while ((!(F.v4742 == ((void *)0)))) {
yr2029_Manifest(F.v4742, &F.v4744, &F.v4746);
yr994_SA(y_str(" || ", 4));
yr1001_ST(F.p2100);
yr994_SA(y_str("->f_", 4));
yr1001_ST(((*(yR105 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p2098))).f_selector))).f_name);
yr994_SA(y_str(" == ", 4));
yr1007_SI(F.v4746);
F.v4742 = ((*(yR95 *)rt_nil_check(F.v4742))).f_next;
}
{ rt_int rv4751 = yr1013_SE();
return rv4751; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2105_NameExpr(void * a_p2106, void * a_p2107, rt_int * a_p2108, void * * a_p2109) {
struct yf2110 F;
memset((void *)&F, 0, sizeof F);
F.p2106 = a_p2106;
F.p2107 = a_p2107;
F.p2108_o = a_p2108;
F.p2109_o = a_p2109;
F.v4758 = yr1674_Real(F.p2107);
if ((((*(yR115 *)rt_nil_check(F.v4758))).f_kind == v843)) {
if ((((((*(yR95 *)rt_nil_check(F.p2106))).f_d == ((void *)0))) && yr1628_Ambiguous(F.v4758))) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2106))).f_line, ((*(yR95 *)rt_nil_check(F.p2106))).f_name, y_str(" names values of two types here: qualify it (VI.A.3)", 52));
}
F.p2109 = yr2075_Lit(((*(yR115 *)rt_nil_check(F.v4758))).f_rep, ((*(yR115 *)rt_nil_check(F.v4758))).f_mval);
yr983_SB();
yr1007_SI(((*(yR115 *)rt_nil_check(F.v4758))).f_mval);
F.p2108 = yr1013_SE();
(*F.p2108_o) = F.p2108;
(*F.p2109_o) = F.p2109;
return;
}
if ((((((*(yR115 *)rt_nil_check(F.v4758))).f_kind == v831)) || ((((*(yR115 *)rt_nil_check(F.v4758))).f_kind == v834)))) {
F.p2109 = ((*(yR115 *)rt_nil_check(F.v4758))).f_rep;
F.p2108 = yr1668_SymPath(F.v4758);
(*F.p2108_o) = F.p2108;
(*F.p2109_o) = F.p2109;
return;
}
if ((((*(yR115 *)rt_nil_check(F.v4758))).f_kind == v846)) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2106))).f_line, ((*(yR95 *)rt_nil_check(F.p2106))).f_name, y_str(" is a routine: a call needs ()", 30));
}
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2106))).f_line, ((*(yR95 *)rt_nil_check(F.p2106))).f_name, y_str(" is not a value", 15));
(*F.p2108_o) = F.p2108;
(*F.p2109_o) = F.p2109;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2114_IndexExpr(void * a_p2115, rt_int * a_p2116, void * * a_p2117) {
struct yf2118 F;
memset((void *)&F, 0, sizeof F);
F.p2115 = a_p2115;
F.p2116_o = a_p2116;
F.p2117_o = a_p2117;
yr2088_Expr(((*(yR95 *)rt_nil_check(F.p2115))).f_a, ((void *)0), &F.v4767, &F.v4773);
if ((!yr1729_IsArrayLike(F.v4773))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2115))).f_line, y_str("[] of something that is not an array", 36));
}
F.v4781 = yr1257_Count(((*(yR95 *)rt_nil_check(F.p2115))).f_b);
if ((!(F.v4781 == ((*(yR100 *)rt_nil_check(F.v4773))).f_nidx))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2115))).f_line, y_str("the number of subscripts is not the number of dimensions", 56));
}
F.p2117 = ((*(yR100 *)rt_nil_check(F.v4773))).f_elem;
F.v4783 = (((((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2115))).f_a))).f_kind == v747)) || ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2115))).f_a))).f_kind == v753))) || ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2115))).f_a))).f_kind == v756))) || ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2115))).f_a))).f_kind == v759)));
if (F.v4783) {
F.v4771 = F.v4767;
} else {
F.v4771 = yr1143_Fresh(y_str("ya", 2));
}
yr983_SB();
if ((!F.v4783)) {
yr994_SA(y_str("(*({ yarr ", 10));
yr1001_ST(F.v4771);
yr994_SA(y_str(" = ", 3));
yr1001_ST(F.v4767);
yr994_SA(y_str("; &", 3));
}
yr994_SA(y_str("((", 2));
yr1001_ST(yr1747_CType(F.p2117));
yr994_SA(y_str(" *)(", 4));
yr1001_ST(F.v4771);
yr994_SA(y_str(").p)[y_ix", 9));
yr1007_SI(F.v4781);
yr994_SA(y_str("(", 1));
yr1001_ST(F.v4771);
F.p2116 = yr1013_SE();
F.v4779 = ((*(yR95 *)rt_nil_check(F.p2115))).f_b;
F.v4777 = ((*(yR100 *)rt_nil_check(F.v4773))).f_idx;
while ((!(F.v4779 == ((void *)0)))) {
yr2088_Expr(F.v4779, F.v4777, &F.v4769, &F.v4775);
if ((((!(F.v4777 == ((void *)0)))) && ((((*(yR100 *)rt_nil_check(F.v4773))).f_kind == v792)))) {
yr1780_CheckType(((*(yR95 *)rt_nil_check(F.v4779))).f_line, F.v4777, F.v4775);
} else if ((!((((((*(yR100 *)rt_nil_check(F.v4775))).f_kind == v774)) || yr1717_IsDiscrete(F.v4775))))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.v4779))).f_line, y_str("a subscript is an integer or scalar value", 41));
}
yr983_SB();
yr1001_ST(F.p2116);
yr994_SA(y_str(", ", 2));
yr1001_ST(F.v4769);
F.p2116 = yr1013_SE();
if ((!(F.v4777 == ((void *)0)))) {
F.v4777 = ((*(yR100 *)rt_nil_check(F.v4777))).f_link;
}
F.v4779 = ((*(yR95 *)rt_nil_check(F.v4779))).f_next;
}
yr983_SB();
yr1001_ST(F.p2116);
yr994_SA(y_str(")]", 2));
if ((!F.v4783)) {
yr994_SA(y_str("; }))", 5));
}
F.p2116 = yr1013_SE();
(*F.p2116_o) = F.p2116;
(*F.p2117_o) = F.p2117;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2122_NegExpr(void * a_p2123, rt_int a_p2124, void * a_p2125, rt_int * a_p2126, void * * a_p2127) {
struct yf2128 F;
memset((void *)&F, 0, sizeof F);
F.p2123 = a_p2123;
F.p2124 = a_p2124;
F.p2125 = a_p2125;
F.p2126_o = a_p2126;
F.p2127_o = a_p2127;
yr983_SB();
if ((((*(yR100 *)rt_nil_check(F.p2125))).f_kind == v774)) {
F.p2127 = yr1711_CopyRep(F.p2125);
((*(yR100 *)rt_nil_check(F.p2127))).f_lo = INT64_C(0);
((*(yR100 *)rt_nil_check(F.p2127))).f_hasm = 0;
yr994_SA(y_str("rt_neg(", 7));
yr1001_ST(F.p2124);
yr994_SA(y_str(")", 1));
} else if ((((((*(yR100 *)rt_nil_check(F.p2125))).f_kind == v780)) || ((((*(yR100 *)rt_nil_check(F.p2125))).f_kind == v777)))) {
F.p2127 = yr1711_CopyRep(F.p2125);
((*(yR100 *)rt_nil_check(F.p2127))).f_lo = INT64_C(0);
yr994_SA(y_str("(-", 2));
yr1001_ST(F.p2124);
yr994_SA(y_str(")", 1));
} else if ((((*(yR100 *)rt_nil_check(F.p2125))).f_kind == v804)) {
F.p2127 = F.p2125;
yr994_SA(y_str("y_set_compl(", 12));
yr1001_ST(F.p2124);
yr994_SA(y_str(")", 1));
} else {
v894 = 0;
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2123))).f_line, y_str("- of something that is not a number or a set", 44));
}
F.p2126 = yr1013_SE();
(*F.p2126_o) = F.p2126;
(*F.p2127_o) = F.p2127;
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2132_Unbounded(void * a_p2133) {
struct yf2134 F;
memset((void *)&F, 0, sizeof F);
F.p2133 = a_p2133;
F.v4818 = yr1711_CopyRep(F.p2133);
((*(yR100 *)rt_nil_check(F.v4818))).f_lo = INT64_C(0);
((*(yR100 *)rt_nil_check(F.v4818))).f_hi = INT64_C(0);
((*(yR100 *)rt_nil_check(F.v4818))).f_hasm = 0;
{ void * rv4822 = F.v4818;
return rv4822; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2138_Call2(yarr a_p2140, rt_int a_p2141, rt_int a_p2142) {
struct yf2143 F;
memset((void *)&F, 0, sizeof F);
F.p2140 = a_p2140;
F.p2141 = a_p2141;
F.p2142 = a_p2142;
yr983_SB();
yr994_SA(F.p2140);
yr994_SA(y_str("(", 1));
yr1001_ST(F.p2141);
yr994_SA(y_str(", ", 2));
yr1001_ST(F.p2142);
yr994_SA(y_str(")", 1));
{ rt_int rv4830 = yr1013_SE();
return rv4830; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2147_Infix(rt_int a_p2148, yarr a_p2150, rt_int a_p2151) {
struct yf2152 F;
memset((void *)&F, 0, sizeof F);
F.p2148 = a_p2148;
F.p2150 = a_p2150;
F.p2151 = a_p2151;
yr983_SB();
yr994_SA(y_str("(", 1));
yr1001_ST(F.p2148);
yr994_SA(y_str(" ", 1));
yr994_SA(F.p2150);
yr994_SA(y_str(" ", 1));
yr1001_ST(F.p2151);
yr994_SA(y_str(")", 1));
{ rt_int rv4839 = yr1013_SE();
return rv4839; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2156_EqCode(rt_int a_p2157, void * a_p2158, rt_int a_p2159, void * a_p2160) {
struct yf2161 F;
memset((void *)&F, 0, sizeof F);
F.p2157 = a_p2157;
F.p2158 = a_p2158;
F.p2159 = a_p2159;
F.p2160 = a_p2160;
F.v4850 = F.p2158;
if ((((*(yR100 *)rt_nil_check(F.p2158))).f_kind == v816)) {
F.v4850 = F.p2160;
}
if ((((((((*(yR100 *)rt_nil_check(F.v4850))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.v4850))).f_kind == v795))) || ((((*(yR100 *)rt_nil_check(F.v4850))).f_kind == v813))) || ((((*(yR100 *)rt_nil_check(F.v4850))).f_kind == v816)))) {
F.v4846 = yr1143_Fresh(y_str("e", 1));
F.v4848 = yr1143_Fresh(y_str("e", 1));
yr983_SB();
yr994_SA(y_str("({ ", 3));
yr1001_ST(yr1747_CType(F.v4850));
yr994_SA(y_str(" ", 1));
yr1001_ST(F.v4846);
yr994_SA(y_str(" = ", 3));
yr1001_ST(F.p2157);
yr994_SA(y_str(", ", 2));
yr1001_ST(F.v4848);
yr994_SA(y_str(" = ", 3));
yr1001_ST(F.p2159);
yr994_SA(y_str("; y_eq(", 7));
if ((((((*(yR100 *)rt_nil_check(F.v4850))).f_kind == v813)) || ((((*(yR100 *)rt_nil_check(F.v4850))).f_kind == v816)))) {
yr994_SA(y_str("y_desc_vector(", 14));
yr1001_ST(yr1753_DescOf(((*(yR100 *)rt_nil_check(F.v4850))).f_elem));
yr994_SA(y_str(")", 1));
} else {
yr1001_ST(yr1753_DescOf(F.v4850));
}
yr994_SA(y_str(", &", 3));
yr1001_ST(F.v4846);
yr994_SA(y_str(", &", 3));
yr1001_ST(F.v4848);
yr994_SA(y_str("); })", 5));
{ rt_int rv4864 = yr1013_SE();
return rv4864; }
}
if ((((*(yR100 *)rt_nil_check(F.v4850))).f_kind == v804)) {
{ rt_int rv4866 = yr2138_Call2(y_str("y_set_eq", 8), F.p2157, F.p2159);
return rv4866; }
}
{ rt_int rv4868 = yr2147_Infix(F.p2157, y_str("==", 2), F.p2159);
return rv4868; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2165_IsOrdered(void * a_p2166) {
struct yf2167 F;
memset((void *)&F, 0, sizeof F);
F.p2166 = a_p2166;
if ((((((((*(yR100 *)rt_nil_check(F.p2166))).f_kind == v774)) || ((((*(yR100 *)rt_nil_check(F.p2166))).f_kind == v780))) || ((((*(yR100 *)rt_nil_check(F.p2166))).f_kind == v777))) || ((((*(yR100 *)rt_nil_check(F.p2166))).f_kind == v789)))) {
{ rt_int rv4872 = 1;
return rv4872; }
}
{ rt_int rv4873 = (((((*(yR100 *)rt_nil_check(F.p2166))).f_kind == v786)) && ((*(yR100 *)rt_nil_check(F.p2166))).f_ordered);
return rv4873; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2171_BinExpr(void * a_p2172, void * a_p2173, rt_int * a_p2174, void * * a_p2175) {
struct yf2176 F;
memset((void *)&F, 0, sizeof F);
F.p2172 = a_p2172;
F.p2173 = a_p2173;
F.p2174_o = a_p2174;
F.p2175_o = a_p2175;
F.v4880 = ((*(yR95 *)rt_nil_check(F.p2172))).f_name;
if (yr2249_UserOp(F.p2172, F.v4880, ((*(yR95 *)rt_nil_check(F.p2172))).f_a, ((*(yR95 *)rt_nil_check(F.p2172))).f_b, &F.p2174, &F.p2175)) {
(*F.p2174_o) = F.p2174;
(*F.p2175_o) = F.p2175;
return;
}
if ((((F.v4880 == v207)) || ((F.v4880 == v369)))) {
yr2088_Expr(((*(yR95 *)rt_nil_check(F.p2172))).f_a, v1682, &F.v4882, &F.v4888);
yr1780_CheckType(((*(yR95 *)rt_nil_check(F.p2172))).f_line, v1682, F.v4888);
yr2088_Expr(((*(yR95 *)rt_nil_check(F.p2172))).f_b, v1682, &F.v4884, &F.v4890);
yr1780_CheckType(((*(yR95 *)rt_nil_check(F.p2172))).f_line, v1682, F.v4890);
F.p2175 = v1682;
if ((F.v4880 == v207)) {
F.p2174 = yr2147_Infix(F.v4882, y_str("&&", 2), F.v4884);
} else {
F.p2174 = yr2147_Infix(F.v4882, y_str("||", 2), F.v4884);
}
(*F.p2174_o) = F.p2174;
(*F.p2175_o) = F.p2175;
return;
}
if ((F.v4880 == v330)) {
yr2088_Expr(((*(yR95 *)rt_nil_check(F.p2172))).f_b, ((void *)0), &F.v4884, &F.v4890);
if ((!(((*(yR100 *)rt_nil_check(F.v4890))).f_kind == v804))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2172))).f_line, y_str("IN needs a set on its right", 27));
}
yr2088_Expr(((*(yR95 *)rt_nil_check(F.p2172))).f_a, ((*(yR100 *)rt_nil_check(F.v4890))).f_elem, &F.v4882, &F.v4888);
yr1780_CheckType(((*(yR95 *)rt_nil_check(F.p2172))).f_line, ((*(yR100 *)rt_nil_check(F.v4890))).f_elem, F.v4888);
F.p2175 = v1682;
F.p2174 = yr2138_Call2(y_str("y_set_in", 8), F.v4882, F.v4884);
(*F.p2174_o) = F.p2174;
(*F.p2175_o) = F.p2175;
return;
}
F.v4892 = ((void *)0);
if (((((((((!(F.p2173 == ((void *)0)))) && ((!(F.v4880 == v555)))) && ((!(F.v4880 == v540)))) && ((!(F.v4880 == v558)))) && ((!(F.v4880 == v510)))) && ((!(F.v4880 == v561)))) && ((!(F.v4880 == v513))))) {
F.v4892 = F.p2173;
}
yr2088_Expr(((*(yR95 *)rt_nil_check(F.p2172))).f_a, F.v4892, &F.v4882, &F.v4888);
yr2088_Expr(((*(yR95 *)rt_nil_check(F.p2172))).f_b, F.v4888, &F.v4884, &F.v4890);
if ((((F.v4880 == v555)) || ((F.v4880 == v540)))) {
yr1780_CheckType(((*(yR95 *)rt_nil_check(F.p2172))).f_line, F.v4888, F.v4890);
if (((((((*(yR100 *)rt_nil_check(F.v4888))).f_kind == v807)) || ((((*(yR100 *)rt_nil_check(F.v4888))).f_kind == v801))) || ((((*(yR100 *)rt_nil_check(F.v4888))).f_kind == v810)))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2172))).f_line, y_str("= and # are not defined for signals, files and semaphores", 57));
}
if (((*(yR100 *)rt_nil_check(F.v4888))).f_opaque) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2172))).f_line, ((*(yR100 *)rt_nil_check(F.v4888))).f_tname, y_str(" is opaque here: = is not exported (X.B.3)", 42));
}
F.p2175 = v1682;
F.p2174 = yr2156_EqCode(F.v4882, F.v4888, F.v4884, F.v4890);
if ((F.v4880 == v540)) {
yr983_SB();
yr994_SA(y_str("(!", 2));
yr1001_ST(F.p2174);
yr994_SA(y_str(")", 1));
F.p2174 = yr1013_SE();
}
(*F.p2174_o) = F.p2174;
(*F.p2175_o) = F.p2175;
return;
}
if ((((((F.v4880 == v558)) || ((F.v4880 == v510))) || ((F.v4880 == v561))) || ((F.v4880 == v513)))) {
yr1780_CheckType(((*(yR95 *)rt_nil_check(F.p2172))).f_line, F.v4888, F.v4890);
if ((!yr2165_IsOrdered(F.v4888))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2172))).f_line, y_str("< <= > >= apply to ordered values (VIII.A.1)", 44));
}
F.p2175 = v1682;
if ((F.v4880 == v558)) {
F.p2174 = yr2147_Infix(F.v4882, y_str("<", 1), F.v4884);
} else if ((F.v4880 == v510)) {
F.p2174 = yr2147_Infix(F.v4882, y_str("<=", 2), F.v4884);
} else if ((F.v4880 == v561)) {
F.p2174 = yr2147_Infix(F.v4882, y_str(">", 1), F.v4884);
} else {
F.p2174 = yr2147_Infix(F.v4882, y_str(">=", 2), F.v4884);
}
(*F.p2174_o) = F.p2174;
(*F.p2175_o) = F.p2175;
return;
}
yr1780_CheckType(((*(yR95 *)rt_nil_check(F.p2172))).f_line, F.v4888, F.v4890);
F.v4894 = ((*(yR100 *)rt_nil_check(F.v4888))).f_kind;
if ((((*(yR100 *)rt_nil_check(F.v4888))).f_kind == v816)) {
F.v4894 = ((*(yR100 *)rt_nil_check(F.v4890))).f_kind;
}
if ((F.v4880 == v459)) {
if ((F.v4894 == v783)) {
F.p2175 = v1682;
F.p2174 = yr2147_Infix(F.v4882, y_str("!=", 2), F.v4884);
} else if ((F.v4894 == v804)) {
F.p2175 = F.v4888;
F.p2174 = yr2138_Call2(y_str("y_set_xor", 9), F.v4882, F.v4884);
} else {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2172))).f_line, y_str("XOR applies to BOOLEAN values and sets", 38));
}
(*F.p2174_o) = F.p2174;
(*F.p2175_o) = F.p2175;
return;
}
if ((F.v4894 == v804)) {
F.p2175 = F.v4888;
if ((F.v4880 == v543)) {
F.p2174 = yr2138_Call2(y_str("y_set_union", 11), F.v4882, F.v4884);
} else if ((F.v4880 == v546)) {
F.p2174 = yr2138_Call2(y_str("y_set_diff", 10), F.v4882, F.v4884);
} else if ((F.v4880 == v549)) {
F.p2174 = yr2138_Call2(y_str("y_set_inter", 11), F.v4882, F.v4884);
} else {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2172))).f_line, y_str("this operator does not apply to sets", 36));
}
(*F.p2174_o) = F.p2174;
(*F.p2175_o) = F.p2175;
return;
}
if ((F.v4894 == v774)) {
F.p2175 = yr2132_Unbounded(F.v4888);
if ((F.v4880 == v543)) {
F.p2174 = yr2138_Call2(y_str("rt_add", 6), F.v4882, F.v4884);
} else if ((F.v4880 == v546)) {
F.p2174 = yr2138_Call2(y_str("rt_sub", 6), F.v4882, F.v4884);
} else if ((F.v4880 == v549)) {
F.p2174 = yr2138_Call2(y_str("rt_mul", 6), F.v4882, F.v4884);
} else if ((F.v4880 == v246)) {
F.p2174 = yr2138_Call2(y_str("rt_div", 6), F.v4882, F.v4884);
} else if ((F.v4880 == v348)) {
F.p2174 = yr2138_Call2(y_str("rt_mod", 6), F.v4882, F.v4884);
} else if ((F.v4880 == v552)) {
F.p2175 = v1692;
yr983_SB();
yr994_SA(y_str("rt_fdiv((double)(", 17));
yr1001_ST(F.v4882);
yr994_SA(y_str("), (double)(", 12));
yr1001_ST(F.v4884);
yr994_SA(y_str("))", 2));
F.p2174 = yr1013_SE();
} else {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2172))).f_line, F.v4880, y_str(" is a free operator: no definition of it is visible (VIII.A)", 60));
}
(*F.p2174_o) = F.p2174;
(*F.p2175_o) = F.p2175;
return;
}
if ((((F.v4894 == v780)) || ((F.v4894 == v777)))) {
F.p2175 = yr2132_Unbounded(F.v4888);
if ((F.v4880 == v543)) {
F.p2174 = yr2147_Infix(F.v4882, y_str("+", 1), F.v4884);
} else if ((F.v4880 == v546)) {
F.p2174 = yr2147_Infix(F.v4882, y_str("-", 1), F.v4884);
} else if ((F.v4880 == v549)) {
F.p2174 = yr2147_Infix(F.v4882, y_str("*", 1), F.v4884);
} else if ((F.v4880 == v552)) {
F.p2175 = v1692;
F.p2174 = yr2138_Call2(y_str("rt_fdiv", 7), F.v4882, F.v4884);
} else {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2172))).f_line, F.v4880, y_str(" does not apply to these numbers", 32));
}
(*F.p2174_o) = F.p2174;
(*F.p2175_o) = F.p2175;
return;
}
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2172))).f_line, F.v4880, y_str(" does not apply to these values", 31));
(*F.p2174_o) = F.p2174;
(*F.p2175_o) = F.p2175;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2210_Fits(void * a_p2211, void * a_p2212) {
struct yf2213 F;
memset((void *)&F, 0, sizeof F);
F.p2211 = a_p2211;
F.p2212 = a_p2212;
if ((((*(yR100 *)rt_nil_check(F.p2211))).f_kind == v813)) {
if ((!yr1729_IsArrayLike(F.p2212))) {
{ rt_int rv4934 = 0;
return rv4934; }
}
if ((!(((*(yR100 *)rt_nil_check(F.p2212))).f_nidx == ((*(yR100 *)rt_nil_check(F.p2211))).f_nidx))) {
{ rt_int rv4936 = 0;
return rv4936; }
}
{ rt_int rv4937 = yr1765_SameType(((*(yR100 *)rt_nil_check(F.p2211))).f_elem, ((*(yR100 *)rt_nil_check(F.p2212))).f_elem);
return rv4937; }
}
if ((((*(yR100 *)rt_nil_check(F.p2211))).f_kind == v825)) {
{ rt_int rv4939 = 1;
return rv4939; }
}
{ rt_int rv4940 = yr1765_SameType(F.p2211, F.p2212);
return rv4940; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2217_Choose(void * a_p2218, rt_int a_p2219, rt_int a_p2220) {
struct yf2221 F;
memset((void *)&F, 0, sizeof F);
F.p2218 = a_p2218;
F.p2219 = a_p2219;
F.p2220 = a_p2220;
F.v4946 = F.p2218;
while ((!(F.v4946 == ((void *)0)))) {
if ((((*(yR115 *)rt_nil_check(F.v4946))).f_nparams == F.p2220)) {
F.v4950 = 1;
F.v4948 = ((*(yR115 *)rt_nil_check(F.v4946))).f_params;
F.v4952 = INT64_C(1);
while ((!(F.v4948 == ((void *)0)))) {
if ((!yr2210_Fits(((*(yR110 *)rt_nil_check(F.v4948))).f_rep, ((void * *)(v2196).p)[y_ix1(v2196, rt_add(F.p2219, F.v4952))]))) {
F.v4950 = 0;
}
F.v4952 = rt_range(rt_add(F.v4952, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
F.v4948 = ((*(yR110 *)rt_nil_check(F.v4948))).f_next;
}
if (F.v4950) {
{ void * rv4959 = F.v4946;
return rv4959; }
}
}
F.v4946 = ((*(yR115 *)rt_nil_check(F.v4946))).f_alt;
}
{ void * rv4960 = ((void *)0);
return rv4960; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2225_HidesStandard(void * a_p2226) {
struct yf2227 F;
memset((void *)&F, 0, sizeof F);
F.p2226 = a_p2226;
F.v4964 = F.p2226;
while ((!(F.v4964 == ((void *)0)))) {
if ((((!(((*(yR115 *)rt_nil_check(F.v4964))).f_decl == ((void *)0)))) && ((((*(yR95 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4964))).f_decl))).f_ival == INT64_C(0))))) {
{ rt_int rv4967 = 1;
return rv4967; }
}
F.v4964 = ((*(yR115 *)rt_nil_check(F.v4964))).f_alt;
}
{ rt_int rv4969 = 0;
return rv4969; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2231_CompileArgs(void * a_p2232, void * a_p2233, rt_int * a_p2234, rt_int * a_p2235) {
struct yf2236 F;
memset((void *)&F, 0, sizeof F);
F.p2232 = a_p2232;
F.p2233 = a_p2233;
F.p2234_o = a_p2234;
F.p2235_o = a_p2235;
F.v4976 = F.p2232;
F.v4978 = ((void *)0);
F.p2234 = v2207;
F.p2235 = INT64_C(0);
if ((!(F.p2233 == ((void *)0)))) {
F.v4978 = ((*(yR115 *)rt_nil_check(F.p2233))).f_params;
}
while ((!(F.v4976 == ((void *)0)))) {
if ((v2207 >= INT64_C(4000))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.v4976))).f_line, y_str("calls nested too deeply", 23));
}
F.p2235 = rt_range(rt_add(F.p2235, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
v2207 = rt_range(rt_add(F.p2234, F.p2235), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
F.v4980 = ((void *)0);
if ((!(F.v4978 == ((void *)0)))) {
F.v4980 = ((*(yR110 *)rt_nil_check(F.v4978))).f_rep;
F.v4978 = ((*(yR110 *)rt_nil_check(F.v4978))).f_next;
}
yr2088_Expr(F.v4976, F.v4980, &((rt_int *)(v2187).p)[y_ix1(v2187, rt_add(F.p2234, F.p2235))], &((void * *)(v2196).p)[y_ix1(v2196, rt_add(F.p2234, F.p2235))]);
((void * *)(v2205).p)[y_ix1(v2205, rt_add(F.p2234, F.p2235))] = F.v4976;
F.v4976 = ((*(yR95 *)rt_nil_check(F.v4976))).f_next;
}
(*F.p2234_o) = F.p2234;
(*F.p2235_o) = F.p2235;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2240_CallCode(void * a_p2241, rt_int a_p2242, rt_int a_p2243, rt_int a_p2244) {
struct yf2245 F;
memset((void *)&F, 0, sizeof F);
F.p2241 = a_p2241;
F.p2242 = a_p2242;
F.p2243 = a_p2243;
F.p2244 = a_p2244;
F.v4996 = ((*(yR115 *)rt_nil_check(F.p2241))).f_params;
F.v4998 = rt_range(rt_add(F.p2242, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
F.v5002 = 1;
if ((!(F.p2243 == ((*(yR115 *)rt_nil_check(F.p2241))).f_nparams))) {
yr1129_FailN(F.p2244, ((*(yR115 *)rt_nil_check(F.p2241))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
yr983_SB();
yr1001_ST(((*(yR115 *)rt_nil_check(F.p2241))).f_cname);
yr994_SA(y_str("(", 1));
if ((((*(yR115 *)rt_nil_check(F.p2241))).f_level > INT64_C(1))) {
yr1001_ST(yr1655_FramePtr(rt_range(rt_sub(((*(yR115 *)rt_nil_check(F.p2241))).f_level, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904))));
F.v5002 = 0;
}
while ((!(F.v4996 == ((void *)0)))) {
if ((!F.v5002)) {
yr994_SA(y_str(", ", 2));
}
F.v5002 = 0;
if ((!yr2210_Fits(((*(yR110 *)rt_nil_check(F.v4996))).f_rep, ((void * *)(v2196).p)[y_ix1(v2196, F.v4998)]))) {
v894 = 0;
yr1772_TypeClash(((*(yR95 *)rt_nil_check(((void * *)(v2205).p)[y_ix1(v2205, F.v4998)]))).f_line, ((*(yR110 *)rt_nil_check(F.v4996))).f_rep, ((void * *)(v2196).p)[y_ix1(v2196, F.v4998)]);
}
if ((((*(yR110 *)rt_nil_check(F.v4996))).f_cls == v867)) {
yr1001_ST(yr2037_Convert(((rt_int *)(v2187).p)[y_ix1(v2187, F.v4998)], ((*(yR110 *)rt_nil_check(F.v4996))).f_rep, ((void * *)(v2196).p)[y_ix1(v2196, F.v4998)]));
} else {
if ((!yr2055_IsVariable(((void * *)(v2205).p)[y_ix1(v2205, F.v4998)]))) {
v894 = 0;
yr1129_FailN(((*(yR95 *)rt_nil_check(((void * *)(v2205).p)[y_ix1(v2205, F.v4998)]))).f_line, ((*(yR110 *)rt_nil_check(F.v4996))).f_name, y_str(": the actual of a VAR or OUT parameter must be a variable", 57));
}
yr994_SA(y_str("&", 1));
yr1001_ST(((rt_int *)(v2187).p)[y_ix1(v2187, F.v4998)]);
}
F.v4998 = rt_range(rt_add(F.v4998, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
F.v4996 = ((*(yR110 *)rt_nil_check(F.v4996))).f_next;
}
yr994_SA(y_str(")", 1));
v2207 = F.p2242;
{ rt_int rv5019 = yr1013_SE();
return rv5019; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2249_UserOp(void * a_p2250, rt_int a_p2251, void * a_p2252, void * a_p2253, rt_int * a_p2254, void * * a_p2255) {
struct yf2256 F;
memset((void *)&F, 0, sizeof F);
F.p2250 = a_p2250;
F.p2251 = a_p2251;
F.p2252 = a_p2252;
F.p2253 = a_p2253;
F.p2254_o = a_p2254;
F.p2255_o = a_p2255;
F.v5028 = yr1609_Find(F.p2251);
if ((F.v5028 == ((void *)0))) {
{ rt_int rv5036 = 0;
(*F.p2254_o) = F.p2254;
(*F.p2255_o) = F.p2255;
return rv5036; }
}
F.v5028 = yr1674_Real(F.v5028);
if ((!(((*(yR115 *)rt_nil_check(F.v5028))).f_kind == v846))) {
{ rt_int rv5038 = 0;
(*F.p2254_o) = F.p2254;
(*F.p2255_o) = F.p2255;
return rv5038; }
}
((*(yR95 *)rt_nil_check(F.p2252))).f_next = F.p2253;
if ((!(F.p2253 == ((void *)0)))) {
((*(yR95 *)rt_nil_check(F.p2253))).f_next = ((void *)0);
}
yr2231_CompileArgs(F.p2252, ((void *)0), &F.v5032, &F.v5034);
F.v5030 = yr2217_Choose(F.v5028, F.v5032, F.v5034);
if ((F.v5030 == ((void *)0))) {
v2207 = F.v5032;
if (yr2225_HidesStandard(F.v5028)) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2250))).f_line, F.p2251, y_str(": no definition takes operands of these types", 45));
}
{ rt_int rv5041 = 0;
(*F.p2254_o) = F.p2254;
(*F.p2255_o) = F.p2255;
return rv5041; }
}
F.p2254 = yr2240_CallCode(F.v5030, F.v5032, F.v5034, ((*(yR95 *)rt_nil_check(F.p2250))).f_line);
F.p2255 = ((*(yR115 *)rt_nil_check(F.v5030))).f_ret;
{ rt_int rv5043 = 1;
(*F.p2254_o) = F.p2254;
(*F.p2255_o) = F.p2255;
return rv5043; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2260_CallExpr(void * a_p2261, void * a_p2262, rt_int a_p2263, rt_int * a_p2264, void * * a_p2265) {
struct yf2266 F;
memset((void *)&F, 0, sizeof F);
F.p2261 = a_p2261;
F.p2262 = a_p2262;
F.p2263 = a_p2263;
F.p2264_o = a_p2264;
F.p2265_o = a_p2265;
F.v5051 = yr1674_Real(yr1621_Lookup(((*(yR95 *)rt_nil_check(F.p2261))).f_name, ((*(yR95 *)rt_nil_check(F.p2261))).f_line));
if ((((*(yR115 *)rt_nil_check(F.v5051))).f_kind == v861)) {
yr2690_StdCall(((*(yR115 *)rt_nil_check(F.v5051))).f_mval, F.p2261, F.p2263, &F.p2264, &F.p2265);
(*F.p2264_o) = F.p2264;
(*F.p2265_o) = F.p2265;
return;
}
if ((((((*(yR115 *)rt_nil_check(F.v5051))).f_kind == v837)) || ((((*(yR115 *)rt_nil_check(F.v5051))).f_kind == v840)))) {
if (F.p2263) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2261))).f_line, y_str("a value is not a statement", 26));
}
yr2270_Denote(((*(yR115 *)rt_nil_check(F.v5051))).f_rep, F.p2261, &F.p2264, &F.p2265);
(*F.p2264_o) = F.p2264;
(*F.p2265_o) = F.p2265;
return;
}
if ((!(((*(yR115 *)rt_nil_check(F.v5051))).f_kind == v846))) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2261))).f_line, ((*(yR95 *)rt_nil_check(F.p2261))).f_name, y_str(" is not a routine", 17));
}
if ((((*(yR115 *)rt_nil_check(F.v5051))).f_alt == ((void *)0))) {
yr2231_CompileArgs(((*(yR95 *)rt_nil_check(F.p2261))).f_a, F.v5051, &F.v5055, &F.v5057);
F.v5053 = F.v5051;
} else {
yr2231_CompileArgs(((*(yR95 *)rt_nil_check(F.p2261))).f_a, ((void *)0), &F.v5055, &F.v5057);
F.v5053 = yr2217_Choose(F.v5051, F.v5055, F.v5057);
if ((F.v5053 == ((void *)0))) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2261))).f_line, ((*(yR95 *)rt_nil_check(F.p2261))).f_name, y_str(": no definition takes actuals of these types", 44));
}
}
F.p2264 = yr2240_CallCode(F.v5053, F.v5055, F.v5057, ((*(yR95 *)rt_nil_check(F.p2261))).f_line);
F.p2265 = ((*(yR115 *)rt_nil_check(F.v5053))).f_ret;
if ((F.p2263 && ((!(((*(yR100 *)rt_nil_check(F.p2265))).f_kind == v822))))) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2261))).f_line, ((*(yR95 *)rt_nil_check(F.p2261))).f_name, y_str(" returns a value: it is called in an expression (IX.A.2)", 56));
}
if (((!F.p2263) && ((((*(yR100 *)rt_nil_check(F.p2265))).f_kind == v822)))) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2261))).f_line, ((*(yR95 *)rt_nil_check(F.p2261))).f_name, y_str(" returns no value", 17));
}
(*F.p2264_o) = F.p2264;
(*F.p2265_o) = F.p2265;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2270_Denote(void * a_p2271, void * a_p2272, rt_int * a_p2273, void * * a_p2274) {
struct yf2275 F;
memset((void *)&F, 0, sizeof F);
F.p2271 = a_p2271;
F.p2272 = a_p2272;
F.p2273_o = a_p2273;
F.p2274_o = a_p2274;
F.v5069 = ((*(yR95 *)rt_nil_check(F.p2272))).f_a;
F.v5089 = INT64_C(0);
F.v5096 = 1;
F.p2274 = F.p2271;
if (((*(yR100 *)rt_nil_check(F.p2271))).f_abstract) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2272))).f_line, ((*(yR100 *)rt_nil_check(F.p2271))).f_tname, y_str(" has no representation to denote a value of", 43));
}
if ((((*(yR100 *)rt_nil_check(F.p2271))).f_kind == v795)) {
if (((*(yR100 *)rt_nil_check(F.p2271))).f_opaque) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2272))).f_line, ((*(yR100 *)rt_nil_check(F.p2271))).f_tname, y_str(" is opaque here (X.B.3)", 23));
}
yr983_SB();
yr994_SA(y_str("((", 2));
yr1001_ST(((*(yR100 *)rt_nil_check(F.p2271))).f_cname);
yr994_SA(y_str("){ ", 3));
F.v5075 = yr1013_SE();
F.v5071 = ((*(yR100 *)rt_nil_check(F.p2271))).f_fields;
while ((!(F.v5071 == ((void *)0)))) {
if ((((((*(yR105 *)rt_nil_check(F.v5071))).f_variant == INT64_C(0))) || ((((*(yR105 *)rt_nil_check(F.v5071))).f_variant == F.v5089)))) {
if ((F.v5069 == ((void *)0))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2272))).f_line, y_str("too few components in this record value", 39));
}
yr2088_Expr(F.v5069, ((*(yR105 *)rt_nil_check(F.v5071))).f_rep, &F.v5073, &F.v5079);
yr1780_CheckType(((*(yR95 *)rt_nil_check(F.v5069))).f_line, ((*(yR105 *)rt_nil_check(F.v5071))).f_rep, F.v5079);
if ((F.v5071 == ((*(yR100 *)rt_nil_check(F.p2271))).f_selector)) {
yr2029_Manifest(F.v5069, &F.v5087, &F.v5092);
if ((!F.v5087)) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.v5069))).f_line, y_str("the case-selection value is a manifest constant", 47));
}
F.v5089 = yr2279_VariantOf(F.p2271, F.v5092, ((*(yR95 *)rt_nil_check(F.v5069))).f_line);
}
yr983_SB();
yr1001_ST(F.v5075);
if ((!F.v5096)) {
yr994_SA(y_str(", ", 2));
}
F.v5096 = 0;
yr994_SA(y_str(".f_", 3));
yr1001_ST(((*(yR105 *)rt_nil_check(F.v5071))).f_name);
yr994_SA(y_str(" = ", 3));
yr1001_ST(yr2037_Convert(F.v5073, ((*(yR105 *)rt_nil_check(F.v5071))).f_rep, F.v5079));
F.v5075 = yr1013_SE();
F.v5069 = ((*(yR95 *)rt_nil_check(F.v5069))).f_next;
}
F.v5071 = ((*(yR105 *)rt_nil_check(F.v5071))).f_next;
}
if ((!(F.v5069 == ((void *)0)))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2272))).f_line, y_str("too many components in this record value", 40));
}
yr983_SB();
yr1001_ST(F.v5075);
yr994_SA(y_str(" })", 3));
F.p2273 = yr1013_SE();
(*F.p2273_o) = F.p2273;
(*F.p2274_o) = F.p2274;
return;
}
if ((((*(yR100 *)rt_nil_check(F.p2271))).f_kind == v792)) {
F.v5081 = yr1257_Count(F.v5069);
F.v5075 = yr1143_Fresh(y_str("da", 2));
if ((F.v5081 == INT64_C(1))) {
yr2088_Expr(F.v5069, ((*(yR100 *)rt_nil_check(F.p2271))).f_elem, &F.v5073, &F.v5079);
yr1780_CheckType(((*(yR95 *)rt_nil_check(F.v5069))).f_line, ((*(yR100 *)rt_nil_check(F.p2271))).f_elem, F.v5079);
F.v5077 = yr1143_Fresh(y_str("dv", 2));
yr983_SB();
yr994_SA(y_str("({ ", 3));
yr1001_ST(yr1747_CType(((*(yR100 *)rt_nil_check(F.p2271))).f_elem));
yr994_SA(y_str(" ", 1));
yr1001_ST(F.v5077);
yr994_SA(y_str(" = ", 3));
yr1001_ST(yr2037_Convert(F.v5073, ((*(yR100 *)rt_nil_check(F.p2271))).f_elem, F.v5079));
yr994_SA(y_str("; y_fill(", 9));
yr1001_ST(yr1753_DescOf(F.p2271));
yr994_SA(y_str(", &", 3));
yr1001_ST(F.v5077);
yr994_SA(y_str("); })", 5));
F.p2273 = yr1013_SE();
(*F.p2273_o) = F.p2273;
(*F.p2274_o) = F.p2274;
return;
}
yr983_SB();
yr994_SA(y_str("({ yarr ", 8));
yr1001_ST(F.v5075);
yr994_SA(y_str("; y_init(", 9));
yr1001_ST(yr1753_DescOf(F.p2271));
yr994_SA(y_str(", &", 3));
yr1001_ST(F.v5075);
yr994_SA(y_str("); if (y_count(", 15));
yr1001_ST(F.v5075);
yr994_SA(y_str(", ", 2));
yr1007_SI(((*(yR100 *)rt_nil_check(F.p2271))).f_nidx);
yr994_SA(y_str(") != ", 5));
yr1007_SI(F.v5081);
yr994_SA(y_str(") rt_raise_msg(RT_X_RANGE, ", 27));
yr988_SC(34);
yr994_SA(y_str("wrong number of components", 26));
yr988_SC(34);
yr994_SA(y_str(");", 2));
F.p2273 = yr1013_SE();
F.v5085 = INT64_C(0);
while ((!(F.v5069 == ((void *)0)))) {
yr2088_Expr(F.v5069, ((*(yR100 *)rt_nil_check(F.p2271))).f_elem, &F.v5073, &F.v5079);
yr1780_CheckType(((*(yR95 *)rt_nil_check(F.v5069))).f_line, ((*(yR100 *)rt_nil_check(F.p2271))).f_elem, F.v5079);
yr983_SB();
yr1001_ST(F.p2273);
if (yr1741_Deep(((*(yR100 *)rt_nil_check(F.p2271))).f_elem)) {
yr994_SA(y_str(" { ", 3));
yr1001_ST(yr1747_CType(((*(yR100 *)rt_nil_check(F.p2271))).f_elem));
yr994_SA(y_str(" dv = ", 6));
yr1001_ST(F.v5073);
yr994_SA(y_str("; y_copy(", 9));
yr1001_ST(yr1753_DescOf(((*(yR100 *)rt_nil_check(F.p2271))).f_elem));
yr994_SA(y_str(", &((", 5));
yr1001_ST(yr1747_CType(((*(yR100 *)rt_nil_check(F.p2271))).f_elem));
yr994_SA(y_str(" *)", 3));
yr1001_ST(F.v5075);
yr994_SA(y_str(".p)[", 4));
yr1007_SI(F.v5085);
yr994_SA(y_str("], &dv); }", 10));
} else {
yr994_SA(y_str(" ((", 3));
yr1001_ST(yr1747_CType(((*(yR100 *)rt_nil_check(F.p2271))).f_elem));
yr994_SA(y_str(" *)", 3));
yr1001_ST(F.v5075);
yr994_SA(y_str(".p)[", 4));
yr1007_SI(F.v5085);
yr994_SA(y_str("] = ", 4));
yr1001_ST(yr2037_Convert(F.v5073, ((*(yR100 *)rt_nil_check(F.p2271))).f_elem, F.v5079));
yr994_SA(y_str(";", 1));
}
F.p2273 = yr1013_SE();
F.v5085 = rt_range(rt_add(F.v5085, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
F.v5069 = ((*(yR95 *)rt_nil_check(F.v5069))).f_next;
}
yr983_SB();
yr1001_ST(F.p2273);
yr994_SA(y_str(" ", 1));
yr1001_ST(F.v5075);
yr994_SA(y_str("; })", 4));
F.p2273 = yr1013_SE();
(*F.p2273_o) = F.p2273;
(*F.p2274_o) = F.p2274;
return;
}
if ((((*(yR100 *)rt_nil_check(F.p2271))).f_kind == v804)) {
yr983_SB();
yr994_SA(y_str("y_set_new(", 10));
yr1001_ST(((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p2271))).f_elem))).f_lo);
yr994_SA(y_str(", ", 2));
yr1001_ST(((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p2271))).f_elem))).f_hi);
yr994_SA(y_str(")", 1));
F.p2273 = yr1013_SE();
while ((!(F.v5069 == ((void *)0)))) {
yr2088_Expr(F.v5069, ((*(yR100 *)rt_nil_check(F.p2271))).f_elem, &F.v5073, &F.v5079);
yr1780_CheckType(((*(yR95 *)rt_nil_check(F.v5069))).f_line, ((*(yR100 *)rt_nil_check(F.p2271))).f_elem, F.v5079);
F.p2273 = yr2138_Call2(y_str("y_set_add", 9), F.p2273, F.v5073);
F.v5069 = ((*(yR95 *)rt_nil_check(F.v5069))).f_next;
}
(*F.p2273_o) = F.p2273;
(*F.p2274_o) = F.p2274;
return;
}
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2272))).f_line, ((*(yR100 *)rt_nil_check(F.p2271))).f_tname, y_str(" has no denotations of values", 29));
(*F.p2273_o) = F.p2273;
(*F.p2274_o) = F.p2274;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2279_VariantOf(void * a_p2280, rt_int a_p2281, rt_int a_p2282) {
struct yf2283 F;
memset((void *)&F, 0, sizeof F);
F.p2280 = a_p2280;
F.p2281 = a_p2281;
F.p2282 = a_p2282;
F.v5158 = ((*(yR100 *)rt_nil_check(F.p2280))).f_fields;
while ((!(F.v5158 == ((void *)0)))) {
if ((!(((*(yR105 *)rt_nil_check(F.v5158))).f_variant == INT64_C(0)))) {
F.v5160 = ((*(yR105 *)rt_nil_check(F.v5158))).f_labels;
while ((!(F.v5160 == ((void *)0)))) {
yr2029_Manifest(F.v5160, &F.v5162, &F.v5164);
if ((F.v5162 && ((F.v5164 == F.p2281)))) {
{ rt_int rv5166 = ((*(yR105 *)rt_nil_check(F.v5158))).f_variant;
return rv5166; }
}
F.v5160 = ((*(yR95 *)rt_nil_check(F.v5160))).f_next;
}
}
F.v5158 = ((*(yR105 *)rt_nil_check(F.v5158))).f_next;
}
{ rt_int rv5168 = INT64_C(-1);
return rv5168; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2357_Emit2(yarr a_p2359, rt_int a_p2360) {
struct yf2361 F;
memset((void *)&F, 0, sizeof F);
F.p2359 = a_p2359;
F.p2360 = a_p2360;
yr983_SB();
yr994_SA(F.p2359);
yr1001_ST(F.p2360);
F.v5173 = yr1013_SE();
yr1089_Emit(F.v5173);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2365_Emit3(yarr a_p2367, rt_int a_p2368, yarr a_p2370) {
struct yf2371 F;
memset((void *)&F, 0, sizeof F);
F.p2367 = a_p2367;
F.p2368 = a_p2368;
F.p2370 = a_p2370;
yr983_SB();
yr994_SA(F.p2367);
yr1001_ST(F.p2368);
yr994_SA(F.p2370);
F.v5179 = yr1013_SE();
yr1089_Emit(F.v5179);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2375_PopTo(rt_int a_p2376) {
struct yf2377 F;
memset((void *)&F, 0, sizeof F);
F.p2376 = a_p2376;
if ((v2296 > F.p2376)) {
yr2365_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v2294).p)[y_ix1(v2294, rt_add(F.p2376, INT64_C(1)))], y_str(".prev;", 6));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2381_LeaveBlock(void) {
struct yf2382 F;
memset((void *)&F, 0, sizeof F);
if ((v2311 > INT64_C(0))) {
if ((!(((rt_int *)(v2309).p)[y_ix1(v2309, v2311)] == INT64_C(0)))) {
yr2365_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v2309).p)[y_ix1(v2309, v2311)], y_str(".prev;", 6));
}
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2386_RaiseCode(rt_int a_p2387) {
struct yf2388 F;
memset((void *)&F, 0, sizeof F);
F.p2387 = a_p2387;
yr983_SB();
yr994_SA(y_str("rt_raise(rt_exc(", 16));
yr988_SC(34);
yr1001_ST(F.p2387);
yr988_SC(34);
yr994_SA(y_str("));", 3));
{ rt_int rv5197 = yr1013_SE();
return rv5197; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2392_BlockStatements(void * a_p2393) {
struct yf2394 F;
memset((void *)&F, 0, sizeof F);
F.p2393 = a_p2393;
if ((((*(yR95 *)rt_nil_check(F.p2393))).f_b == ((void *)0))) {
v2311 = rt_range(rt_add(v2311, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
((rt_int *)(v2309).p)[y_ix1(v2309, v2311)] = INT64_C(0);
yr2398_Statements(((*(yR95 *)rt_nil_check(F.p2393))).f_c);
v2311 = rt_range(rt_sub(v2311, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
return;
}
v2354 = 1;
F.v5201 = yr1143_Fresh(y_str("xf", 2));
yr2365_Emit3(y_str("{ rt_frame ", 11), F.v5201, y_str(";", 1));
yr2365_Emit3(y_str("if (RT_TRY(", 11), F.v5201, y_str(")) {", 4));
v2296 = rt_range(rt_add(v2296, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
((rt_int *)(v2294).p)[y_ix1(v2294, v2296)] = F.v5201;
v2311 = rt_range(rt_add(v2311, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
((rt_int *)(v2309).p)[y_ix1(v2309, v2311)] = F.v5201;
yr2398_Statements(((*(yR95 *)rt_nil_check(F.p2393))).f_c);
v2311 = rt_range(rt_sub(v2311, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
v2296 = rt_range(rt_sub(v2296, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
yr2365_Emit3(y_str("RT_POP(", 7), F.v5201, y_str(");", 2));
yr1095_EmitS(y_str("} else {", 8));
yr2365_Emit3(y_str("RT_POP(", 7), F.v5201, y_str(");", 2));
F.v5203 = yr1143_Fresh(y_str("xc", 2));
yr2365_Emit3(y_str("int ", 4), F.v5203, y_str(" = rt_xcur;", 11));
v2311 = rt_range(rt_add(v2311, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
((rt_int *)(v2309).p)[y_ix1(v2309, v2311)] = INT64_C(0);
v2323 = rt_range(rt_add(v2323, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
((rt_int *)(v2321).p)[y_ix1(v2321, v2323)] = F.v5203;
F.v5211 = 1;
F.v5207 = ((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2393))).f_b))).f_a;
while ((!(F.v5207 == ((void *)0)))) {
yr983_SB();
if (F.v5211) {
yr994_SA(y_str("if (", 4));
} else {
yr994_SA(y_str("} else if (", 11));
}
F.v5211 = 0;
F.v5209 = ((*(yR95 *)rt_nil_check(F.v5207))).f_a;
while ((!(F.v5209 == ((void *)0)))) {
yr1001_ST(F.v5203);
yr994_SA(y_str(" == rt_exc(", 11));
yr988_SC(34);
yr1001_ST(((*(yR95 *)rt_nil_check(F.v5209))).f_name);
yr988_SC(34);
yr994_SA(y_str(")", 1));
if ((!(((*(yR95 *)rt_nil_check(F.v5209))).f_next == ((void *)0)))) {
yr994_SA(y_str(" || ", 4));
}
F.v5209 = ((*(yR95 *)rt_nil_check(F.v5209))).f_next;
}
yr994_SA(y_str(") {", 3));
F.v5205 = yr1013_SE();
yr1089_Emit(F.v5205);
yr2398_Statements(((*(yR95 *)rt_nil_check(F.v5207))).f_b);
F.v5207 = ((*(yR95 *)rt_nil_check(F.v5207))).f_next;
}
if ((!F.v5211)) {
yr1095_EmitS(y_str("} else {", 8));
}
if ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2393))).f_b))).f_flag == INT64_C(1))) {
yr2398_Statements(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2393))).f_b))).f_b);
} else {
yr2365_Emit3(y_str("rt_raise(", 9), F.v5203, y_str(");", 2));
}
if ((!F.v5211)) {
yr1095_EmitS(y_str("}", 1));
}
v2323 = rt_range(rt_sub(v2323, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
v2311 = rt_range(rt_sub(v2311, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
yr1095_EmitS(y_str("}}", 2));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2398_Statements(void * a_p2399) {
struct yf2400 F;
memset((void *)&F, 0, sizeof F);
F.p2399 = a_p2399;
F.v5267 = F.p2399;
while ((!(F.v5267 == ((void *)0)))) {
yr2422_Statement(F.v5267);
F.v5267 = ((*(yR95 *)rt_nil_check(F.v5267))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2404_Cond(void * a_p2405) {
struct yf2406 F;
memset((void *)&F, 0, sizeof F);
F.p2405 = a_p2405;
yr2088_Expr(F.p2405, v1682, &F.v5271, &F.v5273);
yr1780_CheckType(((*(yR95 *)rt_nil_check(F.p2405))).f_line, v1682, F.v5273);
{ rt_int rv5274 = F.v5271;
return rv5274; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2410_Label(void * a_p2411, void * a_p2412) {
struct yf2413 F;
memset((void *)&F, 0, sizeof F);
F.p2411 = a_p2411;
F.p2412 = a_p2412;
if (((((((*(yR95 *)rt_nil_check(F.p2411))).f_kind == v747)) && ((((*(yR95 *)rt_nil_check(F.p2411))).f_d == ((void *)0)))) && ((((*(yR100 *)rt_nil_check(F.p2412))).f_kind == v786)))) {
F.v5283 = yr1634_FindLit(((*(yR95 *)rt_nil_check(F.p2411))).f_name, F.p2412);
if ((!(F.v5283 == ((void *)0)))) {
{ rt_int rv5288 = ((*(yR115 *)rt_nil_check(F.v5283))).f_mval;
return rv5288; }
}
}
yr2088_Expr(F.p2411, F.p2412, &F.v5287, &F.v5285);
yr1780_CheckType(((*(yR95 *)rt_nil_check(F.p2411))).f_line, F.p2412, F.v5285);
yr2029_Manifest(F.p2411, &F.v5279, &F.v5281);
if ((!F.v5279)) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2411))).f_line, y_str("a CASE label is a manifest constant (IX.B.1)", 44));
}
{ rt_int rv5290 = F.v5281;
return rv5290; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2417_CopyOut(void) {
struct yf2418 F;
memset((void *)&F, 0, sizeof F);
if ((v2352 == ((void *)0))) {
return;
}
F.v5293 = ((*(yR115 *)rt_nil_check(v2352))).f_params;
while ((!(F.v5293 == ((void *)0)))) {
if ((((*(yR110 *)rt_nil_check(F.v5293))).f_cls == v870)) {
yr983_SB();
yr994_SA(y_str("(*F.", 4));
yr1001_ST(((*(yR110 *)rt_nil_check(F.v5293))).f_cname);
yr994_SA(y_str("_o)", 3));
F.v5295 = yr1013_SE();
yr2045_Store(F.v5295, ((*(yR110 *)rt_nil_check(F.v5293))).f_rep, yr1648_Path(v1573, ((*(yR110 *)rt_nil_check(F.v5293))).f_cname), ((*(yR110 *)rt_nil_check(F.v5293))).f_rep, INT64_C(0));
}
F.v5293 = ((*(yR110 *)rt_nil_check(F.v5293))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2422_Statement(void * a_p2423) {
struct yf2424 F;
memset((void *)&F, 0, sizeof F);
F.p2423 = a_p2423;
F.v5302 = ((*(yR95 *)rt_nil_check(F.p2423))).f_kind;
v957 = ((*(yR95 *)rt_nil_check(F.p2423))).f_line;
if ((!(((*(yR95 *)rt_nil_check(F.p2423))).f_text == INT64_C(0)))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2423))).f_line, y_str("this translator has no labelled statements yet", 46));
}
if ((F.v5302 == v684)) {
yr2061_LValue(((*(yR95 *)rt_nil_check(F.p2423))).f_a, &F.v5304, &F.v5316);
if ((((*(yR100 *)rt_nil_check(F.v5316))).f_kind == v807)) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2423))).f_line, y_str("assignment is not defined for signals (VI.A.1.d)", 48));
}
if ((((((*(yR100 *)rt_nil_check(F.v5316))).f_kind == v801)) || ((((*(yR100 *)rt_nil_check(F.v5316))).f_kind == v810)))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2423))).f_line, y_str("assignment is not defined for files and semaphores (VII.B)", 58));
}
if (((*(yR100 *)rt_nil_check(F.v5316))).f_opaque) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2423))).f_line, ((*(yR100 *)rt_nil_check(F.v5316))).f_tname, y_str(" is opaque here: := is not exported (X.B.3)", 43));
}
yr2088_Expr(((*(yR95 *)rt_nil_check(F.p2423))).f_b, F.v5316, &F.v5306, &F.v5318);
yr2045_Store(F.v5304, F.v5316, F.v5306, F.v5318, ((*(yR95 *)rt_nil_check(F.p2423))).f_line);
} else if ((F.v5302 == v687)) {
F.v5332 = yr1609_Find(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2423))).f_a))).f_name);
if ((!(F.v5332 == ((void *)0)))) {
F.v5332 = yr1674_Real(F.v5332);
}
if ((((!(F.v5332 == ((void *)0)))) && ((((*(yR115 *)rt_nil_check(F.v5332))).f_kind == v855)))) {
yr2589_Activate(((*(yR95 *)rt_nil_check(F.p2423))).f_a, F.v5332);
} else {
yr2260_CallExpr(((*(yR95 *)rt_nil_check(F.p2423))).f_a, ((void *)0), 1, &F.v5304, &F.v5316);
yr2357_Emit2(y_str("", 0), F.v5304);
yr983_SB();
yr1001_ST(F.v5304);
yr994_SA(y_str(";", 1));
F.v5308 = yr1013_SE();
((*(yR125 *)rt_nil_check((v953).f_tail))).f_t = F.v5308;
}
} else if ((F.v5302 == v708)) {
F.v5324 = 1;
F.v5320 = ((*(yR95 *)rt_nil_check(F.p2423))).f_a;
while ((!(F.v5320 == ((void *)0)))) {
F.v5304 = yr2404_Cond(((*(yR95 *)rt_nil_check(F.v5320))).f_a);
if (F.v5324) {
yr2365_Emit3(y_str("if (", 4), F.v5304, y_str(") {", 3));
} else {
yr2365_Emit3(y_str("} else if (", 11), F.v5304, y_str(") {", 3));
}
F.v5324 = 0;
yr2398_Statements(((*(yR95 *)rt_nil_check(F.v5320))).f_b);
F.v5320 = ((*(yR95 *)rt_nil_check(F.v5320))).f_next;
}
if ((((*(yR95 *)rt_nil_check(F.p2423))).f_flag == INT64_C(1))) {
yr1095_EmitS(y_str("} else {", 8));
yr2398_Statements(((*(yR95 *)rt_nil_check(F.p2423))).f_b);
}
yr1095_EmitS(y_str("}", 1));
} else if ((F.v5302 == v714)) {
F.v5304 = yr2404_Cond(((*(yR95 *)rt_nil_check(F.p2423))).f_a);
yr2365_Emit3(y_str("while (", 7), F.v5304, y_str(") {", 3));
yr2398_Statements(((*(yR95 *)rt_nil_check(F.p2423))).f_b);
yr1095_EmitS(y_str("}", 1));
} else if ((F.v5302 == v720)) {
F.v5310 = yr1143_Fresh(y_str("yl_", 3));
v2346 = rt_range(rt_add(v2346, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
((rt_int *)(v2333).p)[y_ix1(v2333, v2346)] = ((*(yR95 *)rt_nil_check(F.p2423))).f_name;
((rt_int *)(v2335).p)[y_ix1(v2335, v2346)] = F.v5310;
((rt_int *)(v2344).p)[y_ix1(v2344, v2346)] = v2296;
yr1095_EmitS(y_str("for (;;) {", 10));
yr2398_Statements(((*(yR95 *)rt_nil_check(F.p2423))).f_b);
yr1095_EmitS(y_str("}", 1));
yr2365_Emit3(y_str("", 0), F.v5310, y_str(": ;", 3));
v2346 = rt_range(rt_sub(v2346, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
} else if ((F.v5302 == v696)) {
F.v5326 = 0;
F.v5328 = v2346;
while ((((F.v5328 > v2349)) && (!F.v5326))) {
if ((((rt_int *)(v2333).p)[y_ix1(v2333, F.v5328)] == ((*(yR95 *)rt_nil_check(F.p2423))).f_name)) {
F.v5326 = 1;
yr2375_PopTo(((rt_int *)(v2344).p)[y_ix1(v2344, F.v5328)]);
yr2365_Emit3(y_str("goto ", 5), ((rt_int *)(v2335).p)[y_ix1(v2335, F.v5328)], y_str(";", 1));
}
F.v5328 = rt_range(rt_sub(F.v5328, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
}
if ((!F.v5326)) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2423))).f_line, ((*(yR95 *)rt_nil_check(F.p2423))).f_name, y_str(": EXIT names no LOOP around it here (IX.A.5)", 44));
}
} else if ((F.v5302 == v717)) {
yr2428_ForStatement(F.p2423);
} else if ((F.v5302 == v711)) {
yr2088_Expr(((*(yR95 *)rt_nil_check(F.p2423))).f_a, ((void *)0), &F.v5304, &F.v5316);
if ((!yr1717_IsDiscrete(F.v5316))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2423))).f_line, y_str("SELECT on a value that is not integer or scalar", 47));
}
yr2365_Emit3(y_str("switch (", 8), F.v5304, y_str(") {", 3));
F.v5320 = ((*(yR95 *)rt_nil_check(F.p2423))).f_b;
while ((!(F.v5320 == ((void *)0)))) {
F.v5322 = ((*(yR95 *)rt_nil_check(F.v5320))).f_a;
while ((!(F.v5322 == ((void *)0)))) {
F.v5330 = yr2410_Label(F.v5322, F.v5316);
yr983_SB();
yr994_SA(y_str("case ", 5));
yr1007_SI(F.v5330);
yr994_SA(y_str(":", 1));
F.v5308 = yr1013_SE();
yr1089_Emit(F.v5308);
F.v5322 = ((*(yR95 *)rt_nil_check(F.v5322))).f_next;
}
yr1095_EmitS(y_str("{", 1));
yr2398_Statements(((*(yR95 *)rt_nil_check(F.v5320))).f_b);
yr1095_EmitS(y_str("} break;", 8));
F.v5320 = ((*(yR95 *)rt_nil_check(F.v5320))).f_next;
}
yr1095_EmitS(y_str("default: {", 10));
if ((((*(yR95 *)rt_nil_check(F.p2423))).f_flag == INT64_C(1))) {
yr2398_Statements(((*(yR95 *)rt_nil_check(F.p2423))).f_c);
}
yr1095_EmitS(y_str("} break;", 8));
yr1095_EmitS(y_str("}", 1));
} else if ((F.v5302 == v699)) {
yr2442_ReturnStatement(F.p2423);
} else if ((F.v5302 == v705)) {
if ((((*(yR95 *)rt_nil_check(F.p2423))).f_name == INT64_C(0))) {
if ((v2323 == INT64_C(0))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2423))).f_line, y_str("PROPAGATE_EXCEPTION without a name is used in a handler (IX.A.8)", 64));
}
yr2365_Emit3(y_str("rt_raise(", 9), ((rt_int *)(v2321).p)[y_ix1(v2321, v2323)], y_str(");", 2));
} else {
yr2381_LeaveBlock();
yr1089_Emit(yr2386_RaiseCode(((*(yR95 *)rt_nil_check(F.p2423))).f_name));
}
} else if ((F.v5302 == v690)) {
F.v5304 = yr2404_Cond(((*(yR95 *)rt_nil_check(F.p2423))).f_a);
yr2365_Emit3(y_str("if (!(", 6), F.v5304, y_str(")) {", 4));
yr2381_LeaveBlock();
yr1095_EmitS(y_str("rt_raise(RT_X_ASSERT); }", 24));
} else if ((F.v5302 == v723)) {
yr2448_BeginStatement(F.p2423);
} else if ((F.v5302 == v702)) {
yr2613_TerminateStatement(F.p2423);
} else if ((F.v5302 == v693)) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2423))).f_line, y_str("this translator has no GOTO yet", 31));
} else {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2423))).f_line, y_str("not a statement", 15));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2428_ForStatement(void * a_p2429) {
struct yf2430 F;
memset((void *)&F, 0, sizeof F);
F.p2429 = a_p2429;
F.v5393 = yr1822_MakeRep(((*(yR95 *)rt_nil_check(F.p2429))).f_a, INT64_C(0), 0);
if ((!yr1717_IsDiscrete(F.v5393))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2429))).f_line, y_str("FOR goes over an integer or scalar representation", 49));
}
yr1788_CheckRepresented(F.v5393, ((*(yR95 *)rt_nil_check(F.p2429))).f_line);
yr1592_OpenScope(0);
F.v5401 = yr1585_NewSym(v834, ((*(yR95 *)rt_nil_check(F.p2429))).f_name);
((*(yR115 *)rt_nil_check(F.v5401))).f_rep = F.v5393;
((*(yR115 *)rt_nil_check(F.v5401))).f_level = v1573;
((*(yR115 *)rt_nil_check(F.v5401))).f_cname = yr1143_Fresh(y_str("c_", 2));
yr1661_DeclStorage(yr1018_T(y_str("rt_int", 6)), ((*(yR115 *)rt_nil_check(F.v5401))).f_cname);
yr1641_Define(F.v5401, ((*(yR95 *)rt_nil_check(F.p2429))).f_line);
F.v5395 = yr1143_Fresh(y_str("i", 1));
F.v5397 = yr1143_Fresh(y_str("hi", 2));
yr983_SB();
yr994_SA(y_str("{ rt_int ", 9));
yr1001_ST(F.v5397);
yr994_SA(y_str(" = ", 3));
yr1001_ST(((*(yR100 *)rt_nil_check(F.v5393))).f_hi);
yr994_SA(y_str(";", 1));
F.v5399 = yr1013_SE();
yr1089_Emit(F.v5399);
yr983_SB();
yr994_SA(y_str("for (rt_int ", 12));
yr1001_ST(F.v5395);
yr994_SA(y_str(" = ", 3));
yr1001_ST(((*(yR100 *)rt_nil_check(F.v5393))).f_lo);
yr994_SA(y_str("; ", 2));
yr1001_ST(F.v5395);
yr994_SA(y_str(" <= ", 4));
yr1001_ST(F.v5397);
yr994_SA(y_str("; ", 2));
yr1001_ST(F.v5395);
yr994_SA(y_str("++) { ", 6));
yr1001_ST(yr1668_SymPath(F.v5401));
yr994_SA(y_str(" = ", 3));
yr1001_ST(F.v5395);
yr994_SA(y_str(";", 1));
F.v5399 = yr1013_SE();
yr1089_Emit(F.v5399);
yr2398_Statements(((*(yR95 *)rt_nil_check(F.p2429))).f_b);
yr2365_Emit3(y_str("if (", 4), F.v5395, y_str(" == ", 4));
((*(yR125 *)rt_nil_check((v953).f_tail))).f_t = yr2434_Join(((*(yR125 *)rt_nil_check((v953).f_tail))).f_t, F.v5397, yr1018_T(y_str(") break;", 8)));
yr1095_EmitS(y_str("}}", 2));
yr1598_CloseScope();
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2434_Join(rt_int a_p2435, rt_int a_p2436, rt_int a_p2437) {
struct yf2438 F;
memset((void *)&F, 0, sizeof F);
F.p2435 = a_p2435;
F.p2436 = a_p2436;
F.p2437 = a_p2437;
yr983_SB();
yr1001_ST(F.p2435);
yr1001_ST(F.p2436);
yr1001_ST(F.p2437);
{ rt_int rv5429 = yr1013_SE();
return rv5429; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2442_ReturnStatement(void * a_p2443) {
struct yf2444 F;
memset((void *)&F, 0, sizeof F);
F.p2443 = a_p2443;
if ((v2352 == ((void *)0))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2443))).f_line, y_str("RETURN outside a routine (IX.A.6)", 33));
}
if ((((*(yR115 *)rt_nil_check(v2352))).f_kind == v855)) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2443))).f_line, y_str("a process ends with TERMINATE_PROCESS (IX.A.7)", 46));
}
F.v5441 = ((*(yR115 *)rt_nil_check(v2352))).f_ret;
if ((((*(yR95 *)rt_nil_check(F.p2443))).f_a == ((void *)0))) {
if ((!(((*(yR100 *)rt_nil_check(F.v5441))).f_kind == v822))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2443))).f_line, y_str("RETURN needs a value here (IX.A.6)", 34));
}
yr2417_CopyOut();
yr2608_LeaveMonitor();
yr2375_PopTo(v2299);
yr1095_EmitS(y_str("return;", 7));
return;
}
if ((((*(yR100 *)rt_nil_check(F.v5441))).f_kind == v822)) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2443))).f_line, y_str("this routine returns no value (IX.A.6)", 38));
}
yr2088_Expr(((*(yR95 *)rt_nil_check(F.p2443))).f_a, F.v5441, &F.v5433, &F.v5439);
yr1780_CheckType(((*(yR95 *)rt_nil_check(F.p2443))).f_line, F.v5441, F.v5439);
F.v5437 = yr1143_Fresh(y_str("rv", 2));
yr983_SB();
yr994_SA(y_str("{ ", 2));
yr1001_ST(yr1747_CType(F.v5441));
yr994_SA(y_str(" ", 1));
yr1001_ST(F.v5437);
yr994_SA(y_str(" = ", 3));
yr1001_ST(yr2037_Convert(F.v5433, F.v5441, F.v5439));
yr994_SA(y_str(";", 1));
F.v5435 = yr1013_SE();
yr1089_Emit(F.v5435);
yr2417_CopyOut();
yr2608_LeaveMonitor();
yr2375_PopTo(v2299);
yr2365_Emit3(y_str("return ", 7), F.v5437, y_str("; }", 3));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2448_BeginStatement(void * a_p2449) {
struct yf2450 F;
memset((void *)&F, 0, sizeof F);
F.p2449 = a_p2449;
yr1095_EmitS(y_str("{", 1));
yr1592_OpenScope(0);
yr2513_Declarations(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2449))).f_a))).f_a);
yr2392_BlockStatements(((*(yR95 *)rt_nil_check(F.p2449))).f_a);
yr2584_AwaitProcesses();
yr1598_CloseScope();
yr1095_EmitS(y_str("}", 1));
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2454_RoutineCName(rt_int a_p2455) {
struct yf2456 F;
memset((void *)&F, 0, sizeof F);
F.p2455 = a_p2455;
F.v5462 = yr1138_NewSerial();
F.v5464 = 1;
{ rt_int hi5471 = ((rt_int *)(v887).p)[y_ix1(v887, F.p2455)];
for (rt_int i5470 = INT64_C(1); i5470 <= hi5471; i5470++) { F.c_5469 = i5470;
if ((!((yr965_IsLetter(yr1060_TChar(F.p2455, rt_range(F.c_5469, INT64_C(-4611686018427387904), INT64_C(4611686018427387904)))) || yr971_IsDigit(yr1060_TChar(F.p2455, rt_range(F.c_5469, INT64_C(-4611686018427387904), INT64_C(4611686018427387904)))))))) {
F.v5464 = 0;
}
if (i5470 == hi5471) break;
}}
yr983_SB();
yr994_SA(y_str("yr", 2));
yr1007_SI(F.v5462);
if (F.v5464) {
yr994_SA(y_str("_", 1));
yr1001_ST(F.p2455);
}
{ rt_int rv5475 = yr1013_SE();
return rv5475; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2460_FormalRep(void * a_p2461) {
struct yf2462 F;
memset((void *)&F, 0, sizeof F);
F.p2461 = a_p2461;
if ((((*(yR95 *)rt_nil_check(F.p2461))).f_kind == v666)) {
yr2029_Manifest(((*(yR95 *)rt_nil_check(F.p2461))).f_a, &F.v5481, &F.v5483);
if ((((!F.v5481) || ((F.v5483 < INT64_C(1)))) || ((F.v5483 > INT64_C(4))))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2461))).f_line, y_str("DIMENSIONS is a manifest constant from 1 to 4", 45));
}
F.v5479 = yr1704_NewRep(v813, yr1018_T(y_str("length-unresolved array", 23)));
((*(yR100 *)rt_nil_check(F.v5479))).f_nidx = F.v5483;
((*(yR100 *)rt_nil_check(F.v5479))).f_elem = yr1822_MakeRep(((*(yR95 *)rt_nil_check(F.p2461))).f_b, INT64_C(0), 0);
yr1788_CheckRepresented(((*(yR100 *)rt_nil_check(F.v5479))).f_elem, ((*(yR95 *)rt_nil_check(F.p2461))).f_line);
((*(yR100 *)rt_nil_check(F.v5479))).f_deep = 1;
{ void * rv5491 = F.v5479;
return rv5491; }
}
if ((((*(yR95 *)rt_nil_check(F.p2461))).f_kind == v669)) {
{ void * rv5493 = yr1704_NewRep(v825, yr1018_T(y_str("SPACE", 5)));
return rv5493; }
}
F.v5479 = yr1822_MakeRep(F.p2461, INT64_C(0), 0);
yr1788_CheckRepresented(F.v5479, ((*(yR95 *)rt_nil_check(F.p2461))).f_line);
{ void * rv5496 = F.v5479;
return rv5496; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2466_ParamCType(void * a_p2467) {
struct yf2468 F;
memset((void *)&F, 0, sizeof F);
F.p2467 = a_p2467;
F.v5500 = yr1747_CType(((*(yR110 *)rt_nil_check(F.p2467))).f_rep);
if ((((*(yR110 *)rt_nil_check(F.p2467))).f_cls == v867)) {
{ rt_int rv5501 = F.v5500;
return rv5501; }
}
yr983_SB();
yr1001_ST(F.v5500);
yr994_SA(y_str(" *", 2));
{ rt_int rv5503 = yr1013_SE();
return rv5503; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2472_RoutineHeader(void * a_p2473, rt_int a_p2474) {
struct yf2475 F;
memset((void *)&F, 0, sizeof F);
F.p2473 = a_p2473;
F.p2474 = a_p2474;
F.v5524 = 1;
F.v5508 = yr1585_NewSym(F.p2474, ((*(yR95 *)rt_nil_check(F.p2473))).f_name);
((*(yR115 *)rt_nil_check(F.v5508))).f_decl = F.p2473;
((*(yR115 *)rt_nil_check(F.v5508))).f_func = (((*(yR95 *)rt_nil_check(F.p2473))).f_flag == INT64_C(1));
((*(yR115 *)rt_nil_check(F.v5508))).f_level = rt_range(rt_add(v1573, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
((*(yR115 *)rt_nil_check(F.v5508))).f_cname = yr2454_RoutineCName(((*(yR95 *)rt_nil_check(F.p2473))).f_name);
if ((!(((*(yR95 *)rt_nil_check(F.p2473))).f_b == ((void *)0)))) {
((*(yR115 *)rt_nil_check(F.v5508))).f_ret = yr1822_MakeRep(((*(yR95 *)rt_nil_check(F.p2473))).f_b, INT64_C(0), 0);
yr1788_CheckRepresented(((*(yR115 *)rt_nil_check(F.v5508))).f_ret, ((*(yR95 *)rt_nil_check(F.p2473))).f_line);
} else {
((*(yR115 *)rt_nil_check(F.v5508))).f_ret = v1686;
if (((*(yR115 *)rt_nil_check(F.v5508))).f_func) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2473))).f_line, ((*(yR95 *)rt_nil_check(F.p2473))).f_name, y_str(": a FUNCTION has a RETURNS clause (X.A)", 39));
}
}
F.v5518 = ((void *)0);
F.v5512 = ((*(yR95 *)rt_nil_check(F.p2473))).f_a;
while ((!(F.v5512 == ((void *)0)))) {
F.v5520 = yr2460_FormalRep(((*(yR95 *)rt_nil_check(F.v5512))).f_b);
if ((((*(yR115 *)rt_nil_check(F.v5508))).f_func && ((!(((*(yR95 *)rt_nil_check(F.v5512))).f_ival == v867))))) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.v5512))).f_line, ((*(yR95 *)rt_nil_check(F.p2473))).f_name, y_str(": the parameters of a FUNCTION are CONST (X.A.2)", 48));
}
if ((((F.p2474 == v855)) && ((((*(yR95 *)rt_nil_check(F.v5512))).f_ival == v870)))) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.v5512))).f_line, ((*(yR95 *)rt_nil_check(F.p2473))).f_name, y_str(": a process has no OUT parameters", 33));
}
F.v5514 = ((*(yR95 *)rt_nil_check(F.v5512))).f_a;
while ((!(F.v5514 == ((void *)0)))) {
({ F.v5516 = rt_alloc(sizeof(yR110)); });
(*(yR110 *)rt_nil_check(F.v5516)) = ((yR110){ .f_name = ((*(yR95 *)rt_nil_check(F.v5514))).f_name, .f_cls = ((*(yR95 *)rt_nil_check(F.v5512))).f_ival, .f_rep = F.v5520, .f_cname = yr1143_Fresh(y_str("p", 1)), .f_next = ((void *)0) });
if ((F.v5518 == ((void *)0))) {
((*(yR115 *)rt_nil_check(F.v5508))).f_params = F.v5516;
} else {
((*(yR110 *)rt_nil_check(F.v5518))).f_next = F.v5516;
}
F.v5518 = F.v5516;
((*(yR115 *)rt_nil_check(F.v5508))).f_nparams = rt_range(rt_add(((*(yR115 *)rt_nil_check(F.v5508))).f_nparams, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
F.v5514 = ((*(yR95 *)rt_nil_check(F.v5514))).f_next;
}
F.v5512 = ((*(yR95 *)rt_nil_check(F.v5512))).f_next;
}
F.v5510 = yr1609_Find(((*(yR95 *)rt_nil_check(F.p2473))).f_name);
if ((!(F.v5510 == ((void *)0)))) {
F.v5510 = yr1674_Real(F.v5510);
}
if (((((!(((*(yR95 *)rt_nil_check(F.p2473))).f_ival == INT64_C(0)))) && ((!(F.v5510 == ((void *)0))))) && ((((*(yR115 *)rt_nil_check(F.v5510))).f_kind == v846)))) {
((*(yR115 *)rt_nil_check(F.v5508))).f_alt = F.v5510;
if ((((((*(yR95 *)rt_nil_check(F.p2473))).f_ival == v309)) && ((!(yr2479_SameSignature(F.v5508, F.v5510) == ((void *)0)))))) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2473))).f_line, ((*(yR95 *)rt_nil_check(F.p2473))).f_name, y_str(" EXTENDS a definition for the same parameter types: use REPLACES", 64));
}
if ((((((*(yR95 *)rt_nil_check(F.p2473))).f_ival == v405)) && ((yr2479_SameSignature(F.v5508, F.v5510) == ((void *)0))))) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2473))).f_line, ((*(yR95 *)rt_nil_check(F.p2473))).f_name, y_str(" REPLACES no definition for these parameter types", 49));
}
}
((*(yR95 *)rt_nil_check(F.p2473))).f_sym = F.v5508;
yr1641_Define(F.v5508, ((*(yR95 *)rt_nil_check(F.p2473))).f_line);
((rt_int *)(v1583).p)[y_ix1(v1583, ((*(yR115 *)rt_nil_check(F.v5508))).f_level)] = yr1143_Fresh(y_str("yf", 2));
((*(yR115 *)rt_nil_check(F.v5508))).f_members = yr1585_NewSym(v861, ((rt_int *)(v1583).p)[y_ix1(v1583, ((*(yR115 *)rt_nil_check(F.v5508))).f_level)]);
yr983_SB();
yr994_SA(y_str("struct ", 7));
yr1001_ST(((rt_int *)(v1583).p)[y_ix1(v1583, ((*(yR115 *)rt_nil_check(F.v5508))).f_level)]);
yr994_SA(y_str(";", 1));
F.v5522 = yr1013_SE();
yr1067_Put(&v939, F.v5522);
yr983_SB();
yr994_SA(y_str("static ", 7));
if ((F.p2474 == v855)) {
yr994_SA(y_str("void", 4));
} else {
yr1001_ST(yr1747_CType(((*(yR115 *)rt_nil_check(F.v5508))).f_ret));
}
yr994_SA(y_str(" ", 1));
yr1001_ST(((*(yR115 *)rt_nil_check(F.v5508))).f_cname);
yr994_SA(y_str("(", 1));
F.v5522 = yr1013_SE();
if ((F.p2474 == v855)) {
F.v5522 = yr2434_Join(F.v5522, yr1018_T(y_str("void *arg", 9)), INT64_C(0));
F.v5524 = 0;
} else if ((v1573 > INT64_C(0))) {
yr983_SB();
yr1001_ST(F.v5522);
yr994_SA(y_str("struct ", 7));
yr1001_ST(((rt_int *)(v1583).p)[y_ix1(v1583, v1573)]);
yr994_SA(y_str(" *up", 4));
F.v5522 = yr1013_SE();
F.v5524 = 0;
}
F.v5516 = ((*(yR115 *)rt_nil_check(F.v5508))).f_params;
while ((((!(F.v5516 == ((void *)0)))) && ((!(F.p2474 == v855))))) {
yr983_SB();
yr1001_ST(F.v5522);
if ((!F.v5524)) {
yr994_SA(y_str(", ", 2));
}
F.v5524 = 0;
yr1001_ST(yr2466_ParamCType(F.v5516));
yr994_SA(y_str(" a_", 3));
yr1001_ST(((*(yR110 *)rt_nil_check(F.v5516))).f_cname);
F.v5522 = yr1013_SE();
F.v5516 = ((*(yR110 *)rt_nil_check(F.v5516))).f_next;
}
if (F.v5524) {
F.v5522 = yr2434_Join(F.v5522, yr1018_T(y_str("void", 4)), INT64_C(0));
}
F.v5522 = yr2434_Join(F.v5522, yr1018_T(y_str(")", 1)), INT64_C(0));
((*(yR115 *)rt_nil_check(F.v5508))).f_mnext = yr1585_NewSym(v861, F.v5522);
yr1067_Put(&v947, yr2434_Join(F.v5522, yr1018_T(y_str(";", 1)), INT64_C(0)));
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2479_SameSignature(void * a_p2480, void * a_p2481) {
struct yf2482 F;
memset((void *)&F, 0, sizeof F);
F.p2480 = a_p2480;
F.p2481 = a_p2481;
F.v5567 = F.p2481;
while ((!(F.v5567 == ((void *)0)))) {
if ((((*(yR115 *)rt_nil_check(F.v5567))).f_nparams == ((*(yR115 *)rt_nil_check(F.p2480))).f_nparams)) {
F.v5573 = 1;
F.v5569 = ((*(yR115 *)rt_nil_check(F.p2480))).f_params;
F.v5571 = ((*(yR115 *)rt_nil_check(F.v5567))).f_params;
while ((!(F.v5569 == ((void *)0)))) {
if ((!yr1765_SameType(((*(yR110 *)rt_nil_check(F.v5569))).f_rep, ((*(yR110 *)rt_nil_check(F.v5571))).f_rep))) {
F.v5573 = 0;
}
F.v5569 = ((*(yR110 *)rt_nil_check(F.v5569))).f_next;
F.v5571 = ((*(yR110 *)rt_nil_check(F.v5571))).f_next;
}
if (F.v5573) {
{ void * rv5576 = F.v5567;
return rv5576; }
}
}
F.v5567 = ((*(yR115 *)rt_nil_check(F.v5567))).f_alt;
}
{ void * rv5577 = ((void *)0);
return rv5577; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2486_RoutineBody(void * a_p2487) {
struct yf2488 F;
memset((void *)&F, 0, sizeof F);
F.p2487 = a_p2487;
F.v5581 = ((*(yR95 *)rt_nil_check(F.p2487))).f_sym;
F.v5583 = v953;
F.v5585 = v955;
F.v5587 = v1573;
F.v5589 = v2296;
F.v5591 = v2299;
F.v5593 = v2311;
F.v5595 = v2323;
F.v5597 = v2346;
F.v5599 = v2349;
F.v5601 = v2352;
F.v5603 = v2354;
v953 = ((yR130){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v955 = ((yR130){ .f_head = ((void *)0), .f_tail = ((void *)0) });
F.v5613 = ((yR130){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v1573 = ((*(yR115 *)rt_nil_check(F.v5581))).f_level;
F.v5609 = ((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5581))).f_members))).f_name;
((rt_int *)(v1583).p)[y_ix1(v1583, v1573)] = F.v5609;
v2299 = v2296;
v2349 = v2346;
v2323 = INT64_C(0);
v2352 = F.v5581;
v2354 = 0;
yr1592_OpenScope(0);
F.v5605 = ((*(yR115 *)rt_nil_check(F.v5581))).f_params;
while ((!(F.v5605 == ((void *)0)))) {
if ((((*(yR110 *)rt_nil_check(F.v5605))).f_cls == v867)) {
F.v5607 = yr1585_NewSym(v834, ((*(yR110 *)rt_nil_check(F.v5605))).f_name);
} else {
F.v5607 = yr1585_NewSym(v831, ((*(yR110 *)rt_nil_check(F.v5605))).f_name);
}
((*(yR115 *)rt_nil_check(F.v5607))).f_rep = ((*(yR110 *)rt_nil_check(F.v5605))).f_rep;
((*(yR115 *)rt_nil_check(F.v5607))).f_level = v1573;
((*(yR115 *)rt_nil_check(F.v5607))).f_cname = ((*(yR110 *)rt_nil_check(F.v5605))).f_cname;
if ((((*(yR115 *)rt_nil_check(F.v5581))).f_kind == v855)) {
((*(yR115 *)rt_nil_check(F.v5607))).f_byref = (((*(yR110 *)rt_nil_check(F.v5605))).f_cls == v873);
yr1661_DeclStorage(yr2466_ParamCType(F.v5605), ((*(yR110 *)rt_nil_check(F.v5605))).f_cname);
} else if ((((*(yR110 *)rt_nil_check(F.v5605))).f_cls == v873)) {
((*(yR115 *)rt_nil_check(F.v5607))).f_byref = 1;
yr1661_DeclStorage(yr2466_ParamCType(F.v5605), ((*(yR110 *)rt_nil_check(F.v5605))).f_cname);
yr1089_Emit(yr2434_Join(yr1018_T(y_str("F.", 2)), ((*(yR110 *)rt_nil_check(F.v5605))).f_cname, yr2434_Join(yr1018_T(y_str(" = a_", 5)), ((*(yR110 *)rt_nil_check(F.v5605))).f_cname, yr1018_T(y_str(";", 1)))));
} else if ((((*(yR110 *)rt_nil_check(F.v5605))).f_cls == v870)) {
yr1661_DeclStorage(yr1747_CType(((*(yR110 *)rt_nil_check(F.v5605))).f_rep), ((*(yR110 *)rt_nil_check(F.v5605))).f_cname);
yr1661_DeclStorage(yr2466_ParamCType(F.v5605), yr2434_Join(((*(yR110 *)rt_nil_check(F.v5605))).f_cname, yr1018_T(y_str("_o", 2)), INT64_C(0)));
yr1089_Emit(yr2434_Join(yr1018_T(y_str("F.", 2)), ((*(yR110 *)rt_nil_check(F.v5605))).f_cname, yr2434_Join(yr1018_T(y_str("_o = a_", 7)), ((*(yR110 *)rt_nil_check(F.v5605))).f_cname, yr1018_T(y_str(";", 1)))));
if ((yr1741_Deep(((*(yR110 *)rt_nil_check(F.v5605))).f_rep) && ((!(((*(yR100 *)rt_nil_check(((*(yR110 *)rt_nil_check(F.v5605))).f_rep))).f_kind == v813))))) {
yr1089_Emit(yr2434_Join(yr1018_T(y_str("y_init(", 7)), yr1753_DescOf(((*(yR110 *)rt_nil_check(F.v5605))).f_rep), yr2434_Join(yr1018_T(y_str(", &F.", 5)), ((*(yR110 *)rt_nil_check(F.v5605))).f_cname, yr1018_T(y_str(");", 2)))));
}
if ((((*(yR100 *)rt_nil_check(((*(yR110 *)rt_nil_check(F.v5605))).f_rep))).f_kind == v813)) {
yr1089_Emit(yr2434_Join(yr1018_T(y_str("F.", 2)), ((*(yR110 *)rt_nil_check(F.v5605))).f_cname, yr2434_Join(yr1018_T(y_str(" = *a_", 6)), ((*(yR110 *)rt_nil_check(F.v5605))).f_cname, yr1018_T(y_str(";", 1)))));
}
} else {
yr1661_DeclStorage(yr1747_CType(((*(yR110 *)rt_nil_check(F.v5605))).f_rep), ((*(yR110 *)rt_nil_check(F.v5605))).f_cname);
yr1089_Emit(yr2434_Join(yr1018_T(y_str("F.", 2)), ((*(yR110 *)rt_nil_check(F.v5605))).f_cname, yr2434_Join(yr1018_T(y_str(" = a_", 5)), ((*(yR110 *)rt_nil_check(F.v5605))).f_cname, yr1018_T(y_str(";", 1)))));
}
yr1641_Define(F.v5607, ((*(yR95 *)rt_nil_check(F.p2487))).f_line);
F.v5605 = ((*(yR110 *)rt_nil_check(F.v5605))).f_next;
}
yr2602_EnterMonitor(F.v5581);
yr2513_Declarations(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2487))).f_c))).f_a);
yr2392_BlockStatements(((*(yR95 *)rt_nil_check(F.p2487))).f_c);
if ((((*(yR115 *)rt_nil_check(F.v5581))).f_kind == v855)) {
yr1095_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
} else {
yr1095_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
}
yr2584_AwaitProcesses();
yr1598_CloseScope();
yr983_SB();
yr994_SA(y_str("struct ", 7));
yr1001_ST(F.v5609);
yr994_SA(y_str(" {", 2));
if ((v1573 > INT64_C(1))) {
yr994_SA(y_str(" struct ", 8));
yr1001_ST(((rt_int *)(v1583).p)[y_ix1(v1583, rt_sub(v1573, INT64_C(1)))]);
yr994_SA(y_str(" *up;", 5));
} else {
yr994_SA(y_str(" void *up;", 10));
}
F.v5611 = yr1013_SE();
yr1067_Put(&v943, F.v5611);
yr1082_Append(&v943, &v955);
yr1074_PutS(&v943, y_str("};", 2));
yr1067_Put(&F.v5613, yr2434_Join(((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5581))).f_mnext))).f_name, yr1018_T(y_str(" {", 2)), INT64_C(0)));
if (v2354) {
yr1074_PutS(&F.v5613, y_str("volatile", 8));
}
yr1067_Put(&F.v5613, yr2434_Join(yr1018_T(y_str("struct ", 7)), F.v5609, yr1018_T(y_str(" F;", 3))));
yr1074_PutS(&F.v5613, y_str("memset((void *)&F, 0, sizeof F);", 32));
if ((((*(yR115 *)rt_nil_check(F.v5581))).f_kind == v855)) {
yr1067_Put(&F.v5613, yr2434_Join(yr1018_T(y_str("F = *(struct ", 13)), F.v5609, yr1018_T(y_str(" *)arg;", 7))));
} else if ((v1573 > INT64_C(1))) {
yr1074_PutS(&F.v5613, y_str("F.up = up;", 10));
}
yr1082_Append(&F.v5613, &v953);
yr1074_PutS(&F.v5613, y_str("}", 1));
yr1082_Append(&v949, &F.v5613);
v953 = F.v5583;
v955 = F.v5585;
v1573 = F.v5587;
((rt_int *)(v1583).p)[y_ix1(v1583, v1573)] = yr1143_Fresh(y_str("unused", 6));
if ((!(F.v5601 == ((void *)0)))) {
((rt_int *)(v1583).p)[y_ix1(v1583, v1573)] = ((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5601))).f_members))).f_name;
}
v2296 = F.v5589;
v2299 = F.v5591;
v2311 = F.v5593;
v2323 = F.v5595;
v2346 = F.v5597;
v2349 = F.v5599;
v2352 = F.v5601;
v2354 = F.v5603;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2492_DeclareStorage(void * a_p2493, void * a_p2494, rt_int a_p2495) {
struct yf2496 F;
memset((void *)&F, 0, sizeof F);
F.p2493 = a_p2493;
F.p2494 = a_p2494;
F.p2495 = a_p2495;
((*(yR115 *)rt_nil_check(F.p2493))).f_rep = F.p2494;
((*(yR115 *)rt_nil_check(F.p2493))).f_level = v1573;
((*(yR115 *)rt_nil_check(F.p2493))).f_cname = yr1143_Fresh(y_str("v", 1));
yr1661_DeclStorage(yr1747_CType(F.p2494), ((*(yR115 *)rt_nil_check(F.p2493))).f_cname);
if (yr1741_Deep(F.p2494)) {
yr1089_Emit(yr2434_Join(yr1018_T(y_str("y_init(", 7)), yr1753_DescOf(F.p2494), yr2434_Join(yr1018_T(y_str(", &", 3)), yr1668_SymPath(F.p2493), yr1018_T(y_str(");", 2)))));
}
if ((((*(yR100 *)rt_nil_check(F.p2494))).f_kind == v804)) {
yr1089_Emit(yr2434_Join(yr1668_SymPath(F.p2493), yr1018_T(y_str(" = y_set_new(", 13)), yr2434_Join(((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p2494))).f_elem))).f_lo, yr1018_T(y_str(", ", 2)), yr2434_Join(((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p2494))).f_elem))).f_hi, yr1018_T(y_str(");", 2)), INT64_C(0)))));
}
if ((((*(yR100 *)rt_nil_check(F.p2494))).f_kind == v807)) {
yr2619_DeclareSignal(F.p2493, F.p2495);
}
if ((((*(yR100 *)rt_nil_check(F.p2494))).f_kind == v810)) {
yr1089_Emit(yr2434_Join(yr1018_T(y_str("rt_lock_init(&", 14)), yr1668_SymPath(F.p2493), yr1018_T(y_str(");", 2))));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2500_SimpleDecl(void * a_p2501) {
struct yf2502 F;
memset((void *)&F, 0, sizeof F);
F.p2501 = a_p2501;
F.v5675 = ((*(yR95 *)rt_nil_check(F.p2501))).f_kind;
if ((((F.v5675 == v609)) || ((F.v5675 == v612)))) {
F.v5677 = yr1822_MakeRep(((*(yR95 *)rt_nil_check(F.p2501))).f_b, INT64_C(0), 0);
yr1788_CheckRepresented(F.v5677, ((*(yR95 *)rt_nil_check(F.p2501))).f_line);
if ((((F.v5675 == v609)) && (((((((*(yR100 *)rt_nil_check(F.v5677))).f_kind == v807)) || ((((*(yR100 *)rt_nil_check(F.v5677))).f_kind == v801))) || ((((*(yR100 *)rt_nil_check(F.v5677))).f_kind == v810)))))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2501))).f_line, y_str("signals, files and semaphores are variables (VII.B)", 51));
}
F.v5681 = ((*(yR95 *)rt_nil_check(F.p2501))).f_a;
while ((!(F.v5681 == ((void *)0)))) {
if ((F.v5675 == v609)) {
F.v5683 = yr1585_NewSym(v834, ((*(yR95 *)rt_nil_check(F.v5681))).f_name);
} else {
F.v5683 = yr1585_NewSym(v831, ((*(yR95 *)rt_nil_check(F.v5681))).f_name);
}
yr2492_DeclareStorage(F.v5683, F.v5677, ((*(yR95 *)rt_nil_check(F.p2501))).f_line);
if ((!(((*(yR95 *)rt_nil_check(F.p2501))).f_c == ((void *)0)))) {
yr2088_Expr(((*(yR95 *)rt_nil_check(F.p2501))).f_c, F.v5677, &F.v5685, &F.v5679);
yr2045_Store(yr1668_SymPath(F.v5683), F.v5677, F.v5685, F.v5679, ((*(yR95 *)rt_nil_check(F.p2501))).f_line);
if ((F.v5675 == v609)) {
yr2029_Manifest(((*(yR95 *)rt_nil_check(F.p2501))).f_c, &F.v5687, &F.v5689);
if ((F.v5687 && yr1717_IsDiscrete(F.v5677))) {
((*(yR115 *)rt_nil_check(F.v5683))).f_hasmv = 1;
((*(yR115 *)rt_nil_check(F.v5683))).f_mval = F.v5689;
}
}
}
if ((!(((*(yR95 *)rt_nil_check(F.v5681))).f_a == ((void *)0)))) {
yr2506_AtLocation(F.v5683, ((*(yR95 *)rt_nil_check(F.v5681))).f_a);
}
yr1641_Define(F.v5683, ((*(yR95 *)rt_nil_check(F.v5681))).f_line);
F.v5681 = ((*(yR95 *)rt_nil_check(F.v5681))).f_next;
}
return;
}
if ((F.v5675 == v621)) {
F.v5677 = yr1822_MakeRep(((*(yR95 *)rt_nil_check(F.p2501))).f_b, ((*(yR95 *)rt_nil_check(F.p2501))).f_name, 0);
yr1788_CheckRepresented(F.v5677, ((*(yR95 *)rt_nil_check(F.p2501))).f_line);
F.v5683 = yr1585_NewSym(v837, ((*(yR95 *)rt_nil_check(F.p2501))).f_name);
((*(yR115 *)rt_nil_check(F.v5683))).f_rep = F.v5677;
yr1641_Define(F.v5683, ((*(yR95 *)rt_nil_check(F.p2501))).f_line);
yr1830_ResolvePending(((*(yR95 *)rt_nil_check(F.p2501))).f_name, F.v5677);
return;
}
if ((F.v5675 == v618)) {
F.v5677 = yr1822_MakeRep(((*(yR95 *)rt_nil_check(F.p2501))).f_b, ((*(yR95 *)rt_nil_check(F.p2501))).f_name, 1);
if ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2501))).f_b))).f_kind == v642)) {
F.v5677 = yr1711_CopyRep(F.v5677);
((*(yR100 *)rt_nil_check(F.v5677))).f_tid = yr1816_NewTid(((*(yR95 *)rt_nil_check(F.p2501))).f_name);
((*(yR100 *)rt_nil_check(F.v5677))).f_tname = ((*(yR95 *)rt_nil_check(F.p2501))).f_name;
if (((((((*(yR100 *)rt_nil_check(F.v5677))).f_kind == v774)) || ((((*(yR100 *)rt_nil_check(F.v5677))).f_kind == v777))) || ((((*(yR100 *)rt_nil_check(F.v5677))).f_kind == v780)))) {
if ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2501))).f_b))).f_a == ((void *)0))) {
((*(yR100 *)rt_nil_check(F.v5677))).f_abstract = 1;
}
}
}
F.v5683 = yr1585_NewSym(v840, ((*(yR95 *)rt_nil_check(F.p2501))).f_name);
((*(yR115 *)rt_nil_check(F.v5683))).f_rep = F.v5677;
yr1641_Define(F.v5683, ((*(yR95 *)rt_nil_check(F.p2501))).f_line);
yr1830_ResolvePending(((*(yR95 *)rt_nil_check(F.p2501))).f_name, F.v5677);
return;
}
if ((F.v5675 == v615)) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2501))).f_line, y_str("this translator has no labels yet", 33));
return;
}
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2501))).f_line, y_str("not a simple declaration", 24));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2506_AtLocation(void * a_p2507, void * a_p2508) {
struct yf2509 F;
memset((void *)&F, 0, sizeof F);
F.p2507 = a_p2507;
F.p2508 = a_p2508;
if ((((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.p2507))).f_rep))).f_kind == v807)) {
yr2626_DeviceSignal(F.p2507, F.p2508);
return;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2513_Declarations(void * a_p2514) {
struct yf2515 F;
memset((void *)&F, 0, sizeof F);
F.p2514 = a_p2514;
F.v5705 = F.p2514;
F.v5707 = ((void *)0);
F.v5709 = ((void *)0);
F.v5711 = ((void *)0);
while ((!(F.v5705 == ((void *)0)))) {
v957 = ((*(yR95 *)rt_nil_check(F.v5705))).f_line;
if ((((((*(yR95 *)rt_nil_check(F.v5705))).f_kind == v624)) || ((((*(yR95 *)rt_nil_check(F.v5705))).f_kind == v636)))) {
if ((((*(yR95 *)rt_nil_check(F.v5705))).f_kind == v624)) {
yr2472_RoutineHeader(F.v5705, v846);
} else {
yr2472_RoutineHeader(F.v5705, v855);
}
F.v5711 = yr1242_NewNode(v639, ((*(yR95 *)rt_nil_check(F.v5705))).f_line);
((*(yR95 *)rt_nil_check(F.v5711))).f_a = F.v5705;
yr1249_Link(&F.v5707, &F.v5709, F.v5711);
if ((((*(yR95 *)rt_nil_check(F.v5705))).f_kind == v636)) {
yr2578_DeclareProcess(F.v5705);
}
} else if (((((*(yR95 *)rt_nil_check(F.v5705))).f_kind == v594))) {
yr2560_CompileModule(F.v5705);
} else if ((((*(yR95 *)rt_nil_check(F.v5705))).f_kind == v630)) {
yr2566_DeclareTemplate(F.v5705);
} else if ((((*(yR95 *)rt_nil_check(F.v5705))).f_kind == v633)) {
yr2572_Instantiate(F.v5705);
} else {
yr2500_SimpleDecl(F.v5705);
}
F.v5705 = ((*(yR95 *)rt_nil_check(F.v5705))).f_next;
}
yr1837_CheckPending();
F.v5711 = F.v5707;
while ((!(F.v5711 == ((void *)0)))) {
yr2486_RoutineBody(((*(yR95 *)rt_nil_check(F.v5711))).f_a);
F.v5711 = ((*(yR95 *)rt_nil_check(F.v5711))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2530_Alias(rt_int a_p2531, void * a_p2532) {
struct yf2533 F;
memset((void *)&F, 0, sizeof F);
F.p2531 = a_p2531;
F.p2532 = a_p2532;
F.v5716 = yr1585_NewSym(v864, F.p2531);
((*(yR115 *)rt_nil_check(F.v5716))).f_target = F.p2532;
((*(yR115 *)rt_nil_check(F.v5716))).f_readonly = ((*(yR115 *)rt_nil_check(F.p2532))).f_readonly;
{ void * rv5717 = F.v5716;
return rv5717; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2537_AddLits(void * * a_p2538, void * a_p2539, rt_int a_p2540) {
struct yf2541 F;
memset((void *)&F, 0, sizeof F);
F.p2538 = a_p2538;
F.p2539 = a_p2539;
F.p2540 = a_p2540;
if ((((F.p2540 > INT64_C(8))) || ((*(yR100 *)rt_nil_check(F.p2539))).f_opaque)) {
return;
}
if ((((*(yR100 *)rt_nil_check(F.p2539))).f_kind == v786)) {
F.v5723 = ((*(yR100 *)rt_nil_check(F.p2539))).f_lits;
while ((!(F.v5723 == ((void *)0)))) {
F.v5725 = yr1634_FindLit(((*(yR95 *)rt_nil_check(F.v5723))).f_name, F.p2539);
if ((!(F.v5725 == ((void *)0)))) {
F.v5725 = yr2530_Alias(((*(yR95 *)rt_nil_check(F.v5723))).f_name, F.v5725);
((*(yR115 *)rt_nil_check(F.v5725))).f_mnext = (*F.p2538);
(*F.p2538) = F.v5725;
}
F.v5723 = ((*(yR95 *)rt_nil_check(F.v5723))).f_next;
}
} else if ((((*(yR100 *)rt_nil_check(F.p2539))).f_kind == v795)) {
F.v5727 = ((*(yR100 *)rt_nil_check(F.p2539))).f_fields;
while ((!(F.v5727 == ((void *)0)))) {
yr2537_AddLits(&(*F.p2538), ((*(yR105 *)rt_nil_check(F.v5727))).f_rep, rt_range(rt_add(F.p2540, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904)));
F.v5727 = ((*(yR105 *)rt_nil_check(F.v5727))).f_next;
}
} else if (((((((*(yR100 *)rt_nil_check(F.p2539))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.p2539))).f_kind == v804))) || ((((*(yR100 *)rt_nil_check(F.p2539))).f_kind == v801)))) {
yr2537_AddLits(&(*F.p2538), ((*(yR100 *)rt_nil_check(F.p2539))).f_elem, rt_range(rt_add(F.p2540, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904)));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2545_ResolveItem(void * a_p2546, void * * a_p2547, rt_int a_p2548) {
struct yf2549 F;
memset((void *)&F, 0, sizeof F);
F.p2546 = a_p2546;
F.p2547 = a_p2547;
F.p2548 = a_p2548;
F.v5748 = ((*(yR95 *)rt_nil_check(F.p2546))).f_flag;
if ((!(((*(yR95 *)rt_nil_check(F.p2546))).f_text == INT64_C(0)))) {
F.v5740 = yr1674_Real(yr1621_Lookup(((*(yR95 *)rt_nil_check(F.p2546))).f_text, ((*(yR95 *)rt_nil_check(F.p2546))).f_line));
if ((!(((*(yR115 *)rt_nil_check(F.v5740))).f_kind == v849))) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2546))).f_line, ((*(yR95 *)rt_nil_check(F.p2546))).f_text, y_str(" is not a module", 16));
}
F.v5738 = ((*(yR115 *)rt_nil_check(F.v5740))).f_members;
while ((((!(F.v5738 == ((void *)0)))) && ((!(((*(yR115 *)rt_nil_check(F.v5738))).f_name == ((*(yR95 *)rt_nil_check(F.p2546))).f_name))))) {
F.v5738 = ((*(yR115 *)rt_nil_check(F.v5738))).f_mnext;
}
if ((F.v5738 == ((void *)0))) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2546))).f_line, ((*(yR95 *)rt_nil_check(F.p2546))).f_name, y_str(" is not exported by that module", 31));
}
} else {
if (F.p2548) {
F.v5738 = yr1615_FindHere(((*(yR95 *)rt_nil_check(F.p2546))).f_name);
} else {
F.v5738 = yr1609_Find(((*(yR95 *)rt_nil_check(F.p2546))).f_name);
}
if ((F.v5738 == ((void *)0))) {
if (F.p2548) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2546))).f_line, ((*(yR95 *)rt_nil_check(F.p2546))).f_name, y_str(" is not declared in this module", 31));
} else {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2546))).f_line, ((*(yR95 *)rt_nil_check(F.p2546))).f_name, y_str(" is not declared around this module (X.B.2)", 43));
}
}
}
F.v5744 = ((*(yR95 *)rt_nil_check(F.p2546))).f_name;
if ((!(((*(yR95 *)rt_nil_check(F.p2546))).f_ival == INT64_C(0)))) {
F.v5744 = rt_range(((*(yR95 *)rt_nil_check(F.p2546))).f_ival, INT64_C(0), INT64_C(4000000));
}
F.v5740 = yr1674_Real(F.v5738);
if ((((((*(yR115 *)rt_nil_check(F.v5740))).f_kind == v849)) && ((((*(yR95 *)rt_nil_check(F.p2546))).f_text == INT64_C(0))))) {
if ((((!(F.v5748 == INT64_C(0)))) || ((!(((*(yR95 *)rt_nil_check(F.p2546))).f_ival == INT64_C(0)))))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2546))).f_line, y_str("a module name in a list takes no attribute and no AS (X.B.3)", 60));
}
F.v5742 = ((*(yR115 *)rt_nil_check(F.v5740))).f_members;
while ((!(F.v5742 == ((void *)0)))) {
F.v5738 = yr2530_Alias(((*(yR115 *)rt_nil_check(F.v5742))).f_name, F.v5742);
((*(yR115 *)rt_nil_check(F.v5738))).f_mnext = (*F.p2547);
(*F.p2547) = F.v5738;
F.v5742 = ((*(yR115 *)rt_nil_check(F.v5742))).f_mnext;
}
return;
}
F.v5742 = yr2530_Alias(F.v5744, F.v5738);
if (F.p2548) {
if ((((((*(yR115 *)rt_nil_check(F.v5740))).f_kind == v837)) || ((((*(yR115 *)rt_nil_check(F.v5740))).f_kind == v840)))) {
if ((((F.v5748 == v399)) || ((F.v5748 == v453)))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2546))).f_line, y_str("READONLY and VAR are for variables", 34));
}
if ((((!(F.v5748 == v444))) || ((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5740))).f_rep))).f_opaque)) {
F.v5746 = yr1711_CopyRep(((*(yR115 *)rt_nil_check(F.v5740))).f_rep);
((*(yR100 *)rt_nil_check(F.v5746))).f_opaque = 1;
((*(yR115 *)rt_nil_check(F.v5742))).f_target = yr1585_NewSym(((*(yR115 *)rt_nil_check(F.v5740))).f_kind, ((*(yR115 *)rt_nil_check(F.v5740))).f_name);
((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5742))).f_target))).f_rep = F.v5746;
((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5742))).f_target))).f_decl = ((*(yR115 *)rt_nil_check(F.v5740))).f_decl;
} else {
yr2537_AddLits(&(*F.p2547), ((*(yR115 *)rt_nil_check(F.v5740))).f_rep, INT64_C(0));
}
} else if ((((*(yR115 *)rt_nil_check(F.v5740))).f_kind == v831)) {
if ((((F.v5748 == v366)) || ((F.v5748 == v444)))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2546))).f_line, y_str("OPAQUE and TRANSPARENT are for types", 36));
}
if ((!(F.v5748 == v453))) {
((*(yR115 *)rt_nil_check(F.v5742))).f_readonly = 1;
}
} else if ((!(F.v5748 == INT64_C(0)))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2546))).f_line, y_str("an attribute is for a type, a representation or a variable", 58));
}
if ((((((*(yR115 *)rt_nil_check(F.v5740))).f_kind == v831)) && ((((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5740))).f_rep))).f_kind == v807)))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2546))).f_line, y_str("a signal may not be exported from its monitor (X.E.4)", 53));
}
} else if ((((((*(yR115 *)rt_nil_check(F.v5740))).f_kind == v837)) || ((((*(yR115 *)rt_nil_check(F.v5740))).f_kind == v840)))) {
yr2537_AddLits(&(*F.p2547), ((*(yR115 *)rt_nil_check(F.v5740))).f_rep, INT64_C(0));
}
((*(yR115 *)rt_nil_check(F.v5742))).f_mnext = (*F.p2547);
(*F.p2547) = F.v5742;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2553_DefineAll(void * a_p2554, rt_int a_p2555) {
struct yf2556 F;
memset((void *)&F, 0, sizeof F);
F.p2554 = a_p2554;
F.p2555 = a_p2555;
F.v5772 = F.p2554;
F.v5774 = F.p2554;
F.v5776 = F.p2554;
while ((!(F.v5772 == ((void *)0)))) {
F.v5774 = ((*(yR115 *)rt_nil_check(F.v5772))).f_mnext;
F.v5776 = yr1615_FindHere(((*(yR115 *)rt_nil_check(F.v5772))).f_name);
if ((((F.v5776 == ((void *)0))) || ((!(yr1674_Real(F.v5776) == yr1674_Real(F.v5772)))))) {
if (((((!(F.v5776 == ((void *)0)))) && ((((*(yR115 *)rt_nil_check(yr1674_Real(F.v5772)))).f_kind == v843))) && ((((*(yR115 *)rt_nil_check(yr1674_Real(F.v5776)))).f_kind == v843)))) {
yr1641_Define(F.v5772, F.p2555);
} else if ((F.v5776 == ((void *)0))) {
yr1641_Define(F.v5772, F.p2555);
} else {
yr1129_FailN(F.p2555, ((*(yR115 *)rt_nil_check(F.v5772))).f_name, y_str(" comes into this scope twice", 28));
}
}
F.v5772 = F.v5774;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2560_CompileModule(void * a_p2561) {
struct yf2562 F;
memset((void *)&F, 0, sizeof F);
F.p2561 = a_p2561;
F.v5805 = 0;
F.v5781 = ((void *)0);
F.v5797 = ((*(yR95 *)rt_nil_check(F.p2561))).f_a;
while ((!(F.v5797 == ((void *)0)))) {
yr2545_ResolveItem(F.v5797, &F.v5781, 0);
F.v5797 = ((*(yR95 *)rt_nil_check(F.v5797))).f_next;
}
F.v5791 = v2519;
if ((((((*(yR95 *)rt_nil_check(F.p2561))).f_flag == INT64_C(1))) && ((v2519 == ((void *)0))))) {
F.v5793 = yr1585_NewSym(v831, ((*(yR95 *)rt_nil_check(F.p2561))).f_name);
((*(yR115 *)rt_nil_check(F.v5793))).f_level = v1573;
((*(yR115 *)rt_nil_check(F.v5793))).f_cname = yr1143_Fresh(y_str("mon", 3));
((*(yR115 *)rt_nil_check(F.v5793))).f_rep = v1686;
yr1661_DeclStorage(yr1018_T(y_str("ymon", 4)), ((*(yR115 *)rt_nil_check(F.v5793))).f_cname);
yr1089_Emit(yr2434_Join(yr1018_T(y_str("y_mon_init(&", 12)), yr1648_Path(v1573, ((*(yR115 *)rt_nil_check(F.v5793))).f_cname), yr1018_T(y_str(");", 2))));
v2519 = F.v5793;
F.v5805 = 1;
}
yr1592_OpenScope(1);
((void * *)(v2528).p)[y_ix1(v2528, v1567)] = ((void *)0);
F.v5801 = v1570;
v1570 = v1567;
yr2553_DefineAll(F.v5781, ((*(yR95 *)rt_nil_check(F.p2561))).f_line);
yr2513_Declarations(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2561))).f_c))).f_a);
if (F.v5805) {
yr1089_Emit(yr2434_Join(yr1018_T(y_str("y_mon_enter(&", 13)), yr1648_Path(((*(yR115 *)rt_nil_check(v2519))).f_level, ((*(yR115 *)rt_nil_check(v2519))).f_cname), yr1018_T(y_str(");", 2))));
}
v2311 = rt_range(rt_add(v2311, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
((rt_int *)(v2309).p)[y_ix1(v2309, v2311)] = INT64_C(0);
yr2392_BlockStatements(((*(yR95 *)rt_nil_check(F.p2561))).f_c);
v2311 = rt_range(rt_sub(v2311, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
if (F.v5805) {
yr1089_Emit(yr2434_Join(yr1018_T(y_str("y_mon_leave(&", 13)), yr1648_Path(((*(yR115 *)rt_nil_check(v2519))).f_level, ((*(yR115 *)rt_nil_check(v2519))).f_cname), yr1018_T(y_str(");", 2))));
}
F.v5783 = ((void *)0);
F.v5797 = ((*(yR95 *)rt_nil_check(F.p2561))).f_b;
while ((!(F.v5797 == ((void *)0)))) {
yr2545_ResolveItem(F.v5797, &F.v5783, 1);
F.v5797 = ((*(yR95 *)rt_nil_check(F.v5797))).f_next;
}
F.v5799 = ((void * *)(v2528).p)[y_ix1(v2528, v1567)];
v1570 = F.v5801;
yr1598_CloseScope();
while ((!(F.v5799 == ((void *)0)))) {
F.v5797 = ((*(yR95 *)rt_nil_check(F.v5799))).f_next;
((*(yR95 *)rt_nil_check(F.v5799))).f_next = ((void * *)(v2528).p)[y_ix1(v2528, v1567)];
((void * *)(v2528).p)[y_ix1(v2528, v1567)] = F.v5799;
F.v5799 = F.v5797;
}
v2519 = F.v5791;
F.v5787 = yr1585_NewSym(v849, ((*(yR95 *)rt_nil_check(F.p2561))).f_name);
((*(yR115 *)rt_nil_check(F.v5787))).f_members = F.v5783;
yr1641_Define(F.v5787, ((*(yR95 *)rt_nil_check(F.p2561))).f_line);
F.v5789 = F.v5783;
F.v5783 = ((void *)0);
while ((!(F.v5789 == ((void *)0)))) {
F.v5795 = ((*(yR115 *)rt_nil_check(F.v5789))).f_mnext;
F.v5785 = yr2530_Alias(((*(yR115 *)rt_nil_check(F.v5789))).f_name, F.v5789);
((*(yR115 *)rt_nil_check(F.v5785))).f_readonly = ((*(yR115 *)rt_nil_check(F.v5789))).f_readonly;
((*(yR115 *)rt_nil_check(F.v5785))).f_mnext = F.v5783;
F.v5783 = F.v5785;
F.v5789 = F.v5795;
}
((*(yR115 *)rt_nil_check(F.v5787))).f_members = F.v5783;
F.v5789 = F.v5783;
while ((!(F.v5789 == ((void *)0)))) {
F.v5795 = yr2530_Alias(((*(yR115 *)rt_nil_check(F.v5789))).f_name, F.v5789);
((*(yR115 *)rt_nil_check(F.v5795))).f_readonly = ((*(yR115 *)rt_nil_check(F.v5789))).f_readonly;
if ((yr1615_FindHere(((*(yR115 *)rt_nil_check(F.v5789))).f_name) == ((void *)0))) {
yr1641_Define(F.v5795, ((*(yR95 *)rt_nil_check(F.p2561))).f_line);
} else if ((!(((*(yR115 *)rt_nil_check(yr1674_Real(F.v5789)))).f_kind == v843))) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2561))).f_line, ((*(yR115 *)rt_nil_check(F.v5789))).f_name, y_str(" is exported into a scope that has it already", 45));
}
F.v5789 = ((*(yR115 *)rt_nil_check(F.v5789))).f_mnext;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2566_DeclareTemplate(void * a_p2567) {
struct yf2568 F;
memset((void *)&F, 0, sizeof F);
F.p2567 = a_p2567;
F.v5829 = yr1585_NewSym(v852, ((*(yR95 *)rt_nil_check(F.p2567))).f_name);
((*(yR115 *)rt_nil_check(F.v5829))).f_decl = F.p2567;
yr1641_Define(F.v5829, ((*(yR95 *)rt_nil_check(F.p2567))).f_line);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2572_Instantiate(void * a_p2573) {
struct yf2574 F;
memset((void *)&F, 0, sizeof F);
F.p2573 = a_p2573;
F.v5833 = yr1674_Real(yr1621_Lookup(((*(yR95 *)rt_nil_check(F.p2573))).f_name, ((*(yR95 *)rt_nil_check(F.p2573))).f_line));
if ((!(((*(yR115 *)rt_nil_check(F.v5833))).f_kind == v852))) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2573))).f_line, ((*(yR95 *)rt_nil_check(F.p2573))).f_name, y_str(" is not a template", 18));
}
F.v5835 = ((*(yR115 *)rt_nil_check(F.v5833))).f_decl;
if ((!(yr1257_Count(((*(yR95 *)rt_nil_check(F.v5835))).f_a) == yr1257_Count(((*(yR95 *)rt_nil_check(F.p2573))).f_a)))) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2573))).f_line, ((*(yR95 *)rt_nil_check(F.p2573))).f_name, y_str(": the number of actuals is wrong", 32));
}
F.v5841 = rt_range(rt_add(v1156, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
{ rt_int hi5860 = rt_sub(((*(yR95 *)rt_nil_check(F.v5835))).f_flag, INT64_C(1));
for (rt_int i5859 = ((*(yR95 *)rt_nil_check(F.v5835))).f_ival; i5859 <= hi5860; i5859++) { F.c_5858 = i5859;
F.v5845 = ((rt_int *)(v1150).p)[y_ix1(v1150, F.c_5858)];
F.v5847 = ((rt_int *)(v1152).p)[y_ix1(v1152, F.c_5858)];
if ((F.v5845 == v177)) {
F.v5837 = ((*(yR95 *)rt_nil_check(F.v5835))).f_a;
F.v5839 = ((*(yR95 *)rt_nil_check(F.p2573))).f_a;
while ((!(F.v5837 == ((void *)0)))) {
if ((((*(yR95 *)rt_nil_check(F.v5837))).f_name == F.v5847)) {
F.v5847 = ((*(yR95 *)rt_nil_check(F.v5839))).f_name;
if ((F.v5847 <= v462)) {
F.v5845 = v180;
} else if ((F.v5847 <= v591)) {
F.v5845 = v183;
}
}
F.v5837 = ((*(yR95 *)rt_nil_check(F.v5837))).f_next;
F.v5839 = ((*(yR95 *)rt_nil_check(F.v5839))).f_next;
}
}
v1156 = rt_range(rt_add(v1156, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
((rt_int *)(v1150).p)[y_ix1(v1150, v1156)] = F.v5845;
((rt_int *)(v1152).p)[y_ix1(v1152, v1156)] = F.v5847;
((rt_int *)(v1154).p)[y_ix1(v1154, v1156)] = ((rt_int *)(v1154).p)[y_ix1(v1154, F.c_5858)];
if (i5859 == hi5860) break;
}}
v1156 = rt_range(rt_add(v1156, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
((rt_int *)(v1150).p)[y_ix1(v1150, v1156)] = v174;
((rt_int *)(v1152).p)[y_ix1(v1152, v1156)] = INT64_C(0);
((rt_int *)(v1154).p)[y_ix1(v1154, v1156)] = ((*(yR95 *)rt_nil_check(F.p2573))).f_line;
F.v5843 = v1231;
v1231 = F.v5841;
F.v5849 = yr1347_ParseModule();
v1231 = F.v5843;
yr2560_CompileModule(F.v5849);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2578_DeclareProcess(void * a_p2579) {
struct yf2580 F;
memset((void *)&F, 0, sizeof F);
F.p2579 = a_p2579;
F.v5869 = ((*(yR95 *)rt_nil_check(F.p2579))).f_sym;
((*(yR115 *)rt_nil_check(F.v5869))).f_monitor = v2519;
yr1661_DeclStorage(yr1018_T(y_str("rt_taskdecl", 11)), yr2434_Join(((*(yR115 *)rt_nil_check(F.v5869))).f_cname, yr1018_T(y_str("_d", 2)), INT64_C(0)));
F.v5871 = yr1242_NewNode(v639, ((*(yR95 *)rt_nil_check(F.p2579))).f_line);
((*(yR95 *)rt_nil_check(F.v5871))).f_sym = F.v5869;
((*(yR95 *)rt_nil_check(F.v5871))).f_next = ((void * *)(v2528).p)[y_ix1(v2528, v1567)];
((void * *)(v2528).p)[y_ix1(v2528, v1567)] = F.v5871;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2584_AwaitProcesses(void) {
struct yf2585 F;
memset((void *)&F, 0, sizeof F);
F.v5877 = ((void * *)(v2528).p)[y_ix1(v2528, v1567)];
while ((!(F.v5877 == ((void *)0)))) {
yr1089_Emit(yr2434_Join(yr1018_T(y_str("rt_await_decl(&", 15)), yr1648_Path(rt_range(rt_sub(((*(yR115 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v5877))).f_sym))).f_level, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904)), yr2434_Join(((*(yR115 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v5877))).f_sym))).f_cname, yr1018_T(y_str("_d", 2)), INT64_C(0))), yr1018_T(y_str(");", 2))));
F.v5877 = ((*(yR95 *)rt_nil_check(F.v5877))).f_next;
}
((void * *)(v2528).p)[y_ix1(v2528, v1567)] = ((void *)0);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2589_Activate(void * a_p2590, void * a_p2591) {
struct yf2592 F;
memset((void *)&F, 0, sizeof F);
F.p2590 = a_p2590;
F.p2591 = a_p2591;
F.v5908 = ((*(yR115 *)rt_nil_check(F.p2591))).f_decl;
yr2231_CompileArgs(((*(yR95 *)rt_nil_check(F.p2590))).f_a, F.p2591, &F.v5888, &F.v5890);
if ((!(F.v5890 == ((*(yR115 *)rt_nil_check(F.p2591))).f_nparams))) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2590))).f_line, ((*(yR115 *)rt_nil_check(F.p2591))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
F.v5896 = yr1143_Fresh(y_str("pf", 2));
yr1089_Emit(yr2434_Join(yr1018_T(y_str("{ struct ", 9)), ((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.p2591))).f_members))).f_name, yr2434_Join(yr1018_T(y_str(" *", 2)), F.v5896, yr2434_Join(yr1018_T(y_str(" = rt_alloc(sizeof *", 20)), F.v5896, yr1018_T(y_str(");", 2))))));
if ((((*(yR115 *)rt_nil_check(F.p2591))).f_level > INT64_C(1))) {
yr1089_Emit(yr2434_Join(F.v5896, yr1018_T(y_str("->up = ", 7)), yr2434_Join(yr1655_FramePtr(rt_range(rt_sub(((*(yR115 *)rt_nil_check(F.p2591))).f_level, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904))), yr1018_T(y_str(";", 1)), INT64_C(0))));
}
F.v5894 = ((*(yR115 *)rt_nil_check(F.p2591))).f_params;
F.v5892 = rt_range(rt_add(F.v5888, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
while ((!(F.v5894 == ((void *)0)))) {
if ((!yr2210_Fits(((*(yR110 *)rt_nil_check(F.v5894))).f_rep, ((void * *)(v2196).p)[y_ix1(v2196, F.v5892)]))) {
yr1772_TypeClash(((*(yR95 *)rt_nil_check(((void * *)(v2205).p)[y_ix1(v2205, F.v5892)]))).f_line, ((*(yR110 *)rt_nil_check(F.v5894))).f_rep, ((void * *)(v2196).p)[y_ix1(v2196, F.v5892)]);
}
F.v5902 = yr2434_Join(F.v5896, yr1018_T(y_str("->", 2)), ((*(yR110 *)rt_nil_check(F.v5894))).f_cname);
if ((((*(yR110 *)rt_nil_check(F.v5894))).f_cls == v873)) {
if ((!yr2055_IsVariable(((void * *)(v2205).p)[y_ix1(v2205, F.v5892)]))) {
yr1129_FailN(((*(yR95 *)rt_nil_check(((void * *)(v2205).p)[y_ix1(v2205, F.v5892)]))).f_line, ((*(yR110 *)rt_nil_check(F.v5894))).f_name, y_str(": the actual of a VAR parameter must be a variable", 50));
}
yr1089_Emit(yr2434_Join(F.v5902, yr1018_T(y_str(" = &", 4)), yr2434_Join(((rt_int *)(v2187).p)[y_ix1(v2187, F.v5892)], yr1018_T(y_str(";", 1)), INT64_C(0))));
} else if (yr1741_Deep(((*(yR110 *)rt_nil_check(F.v5894))).f_rep)) {
F.v5898 = yr1143_Fresh(y_str("t", 1));
yr1089_Emit(yr2434_Join(yr1018_T(y_str("{ ", 2)), yr1747_CType(((*(yR110 *)rt_nil_check(F.v5894))).f_rep), yr2434_Join(yr1018_T(y_str(" ", 1)), F.v5898, yr2434_Join(yr1018_T(y_str(" = ", 3)), ((rt_int *)(v2187).p)[y_ix1(v2187, F.v5892)], yr1018_T(y_str(";", 1))))));
if ((((*(yR100 *)rt_nil_check(((*(yR110 *)rt_nil_check(F.v5894))).f_rep))).f_kind == v813)) {
yr1089_Emit(yr2434_Join(yr1018_T(y_str("y_copy(y_desc_vector(", 21)), yr1753_DescOf(((*(yR100 *)rt_nil_check(((*(yR110 *)rt_nil_check(F.v5894))).f_rep))).f_elem), yr2434_Join(yr1018_T(y_str("), &", 4)), F.v5902, yr2434_Join(yr1018_T(y_str(", &", 3)), F.v5898, yr1018_T(y_str("); }", 4))))));
} else {
yr1089_Emit(yr2434_Join(yr1018_T(y_str("y_copy(", 7)), yr1753_DescOf(((*(yR110 *)rt_nil_check(F.v5894))).f_rep), yr2434_Join(yr1018_T(y_str(", &", 3)), F.v5902, yr2434_Join(yr1018_T(y_str(", &", 3)), F.v5898, yr1018_T(y_str("); }", 4))))));
}
} else {
yr1089_Emit(yr2434_Join(F.v5902, yr1018_T(y_str(" = ", 3)), yr2434_Join(yr2037_Convert(((rt_int *)(v2187).p)[y_ix1(v2187, F.v5892)], ((*(yR110 *)rt_nil_check(F.v5894))).f_rep, ((void * *)(v2196).p)[y_ix1(v2196, F.v5892)]), yr1018_T(y_str(";", 1)), INT64_C(0))));
}
F.v5892 = rt_range(rt_add(F.v5892, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
F.v5894 = ((*(yR110 *)rt_nil_check(F.v5894))).f_next;
}
v2207 = F.v5888;
F.v5904 = yr1018_T(y_str("0", 1));
if ((!(((*(yR95 *)rt_nil_check(F.v5908))).f_e == ((void *)0)))) {
yr2088_Expr(((*(yR95 *)rt_nil_check(F.v5908))).f_e, v1680, &F.v5904, &F.v5910);
yr1780_CheckType(((*(yR95 *)rt_nil_check(F.v5908))).f_line, v1680, F.v5910);
}
F.v5906 = yr1018_T(y_str("0, 0", 4));
if ((!(((*(yR95 *)rt_nil_check(F.v5908))).f_d == ((void *)0)))) {
yr2088_Expr(((*(yR95 *)rt_nil_check(F.v5908))).f_d, v1680, &F.v5900, &F.v5910);
yr1780_CheckType(((*(yR95 *)rt_nil_check(F.v5908))).f_line, v1680, F.v5910);
F.v5906 = yr2434_Join(yr1018_T(y_str("1, ", 3)), F.v5900, INT64_C(0));
}
yr983_SB();
yr994_SA(y_str("y_create(&", 10));
yr1001_ST(yr1648_Path(rt_range(rt_sub(((*(yR115 *)rt_nil_check(F.p2591))).f_level, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904)), yr2434_Join(((*(yR115 *)rt_nil_check(F.p2591))).f_cname, yr1018_T(y_str("_d", 2)), INT64_C(0))));
yr994_SA(y_str(", ", 2));
yr1001_ST(F.v5904);
yr994_SA(y_str(", ", 2));
yr1001_ST(F.v5906);
yr994_SA(y_str(", ", 2));
yr1001_ST(((*(yR115 *)rt_nil_check(F.p2591))).f_cname);
yr994_SA(y_str(", ", 2));
yr1001_ST(F.v5896);
yr994_SA(y_str("); }", 4));
F.v5898 = yr1013_SE();
yr1089_Emit(F.v5898);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2596_MonitorPath(void * a_p2597) {
struct yf2598 F;
memset((void *)&F, 0, sizeof F);
F.p2597 = a_p2597;
{ rt_int rv5966 = yr2434_Join(yr1018_T(y_str("&", 1)), yr1648_Path(((*(yR115 *)rt_nil_check(F.p2597))).f_level, ((*(yR115 *)rt_nil_check(F.p2597))).f_cname), INT64_C(0));
return rv5966; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2602_EnterMonitor(void * a_p2603) {
struct yf2604 F;
memset((void *)&F, 0, sizeof F);
F.p2603 = a_p2603;
if ((((*(yR115 *)rt_nil_check(F.p2603))).f_kind == v846)) {
((*(yR115 *)rt_nil_check(F.p2603))).f_monitor = v2519;
}
if ((((*(yR115 *)rt_nil_check(F.p2603))).f_monitor == ((void *)0))) {
return;
}
yr1089_Emit(yr2434_Join(yr1018_T(y_str("y_mon_enter(", 12)), yr2596_MonitorPath(((*(yR115 *)rt_nil_check(F.p2603))).f_monitor), yr1018_T(y_str(");", 2))));
F.v5970 = yr1143_Fresh(y_str("mf", 2));
v2354 = 1;
yr1089_Emit(yr2434_Join(yr1018_T(y_str("rt_frame ", 9)), F.v5970, yr1018_T(y_str(";", 1))));
yr983_SB();
yr994_SA(y_str("if (!RT_TRY(", 12));
yr1001_ST(F.v5970);
yr994_SA(y_str(")) { RT_POP(", 12));
yr1001_ST(F.v5970);
yr994_SA(y_str("); ", 3));
if ((((*(yR115 *)rt_nil_check(F.p2603))).f_kind == v855)) {
yr994_SA(y_str("y_mon_drop(", 11));
} else {
yr994_SA(y_str("y_mon_leave(", 12));
}
yr1001_ST(yr2596_MonitorPath(((*(yR115 *)rt_nil_check(F.p2603))).f_monitor));
yr994_SA(y_str("); rt_raise(rt_xcur); }", 23));
yr1089_Emit(yr1013_SE());
v2296 = rt_range(rt_add(v2296, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
((rt_int *)(v2294).p)[y_ix1(v2294, v2296)] = F.v5970;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2608_LeaveMonitor(void) {
struct yf2609 F;
memset((void *)&F, 0, sizeof F);
if ((v2352 == ((void *)0))) {
return;
}
if ((((*(yR115 *)rt_nil_check(v2352))).f_monitor == ((void *)0))) {
return;
}
if ((((*(yR115 *)rt_nil_check(v2352))).f_kind == v855)) {
yr1089_Emit(yr2434_Join(yr1018_T(y_str("y_mon_drop(", 11)), yr2596_MonitorPath(((*(yR115 *)rt_nil_check(v2352))).f_monitor), yr1018_T(y_str(");", 2))));
} else {
yr1089_Emit(yr2434_Join(yr1018_T(y_str("y_mon_leave(", 12)), yr2596_MonitorPath(((*(yR115 *)rt_nil_check(v2352))).f_monitor), yr1018_T(y_str(");", 2))));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2613_TerminateStatement(void * a_p2614) {
struct yf2615 F;
memset((void *)&F, 0, sizeof F);
F.p2614 = a_p2614;
if ((((v2352 == ((void *)0))) || ((!(((*(yR115 *)rt_nil_check(v2352))).f_kind == v855))))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2614))).f_line, y_str("TERMINATE_PROCESS ends a process (IX.A.7)", 41));
}
yr2584_AwaitProcesses();
yr2608_LeaveMonitor();
yr2375_PopTo(v2299);
yr1095_EmitS(y_str("return;", 7));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2619_DeclareSignal(void * a_p2620, rt_int a_p2621) {
struct yf2622 F;
memset((void *)&F, 0, sizeof F);
F.p2620 = a_p2620;
F.p2621 = a_p2621;
if ((v2519 == ((void *)0))) {
yr1121_FailS(F.p2621, y_str("signal variables are declared in a monitor (X.E.4)", 50));
}
((*(yR115 *)rt_nil_check(F.p2620))).f_rep = yr1711_CopyRep(((*(yR115 *)rt_nil_check(F.p2620))).f_rep);
((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.p2620))).f_rep))).f_monitor = v2519;
yr1089_Emit(yr2434_Join(yr1018_T(y_str("y_sig_init(&", 12)), yr1668_SymPath(F.p2620), yr2434_Join(yr1018_T(y_str(", ", 2)), yr2596_MonitorPath(v2519), yr1018_T(y_str(");", 2)))));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2626_DeviceSignal(void * a_p2627, void * a_p2628) {
struct yf2629 F;
memset((void *)&F, 0, sizeof F);
F.p2627 = a_p2627;
F.p2628 = a_p2628;
yr2029_Manifest(F.p2628, &F.v6005, &F.v6007);
if ((!F.v6005)) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2628))).f_line, y_str("an AT location is a manifest constant (XIV.VII)", 47));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2633_Arg(void * a_p2634, rt_int a_p2635) {
struct yf2636 F;
memset((void *)&F, 0, sizeof F);
F.p2634 = a_p2634;
F.p2635 = a_p2635;
F.v6013 = ((*(yR95 *)rt_nil_check(F.p2634))).f_a;
F.v6015 = INT64_C(1);
while ((((!(F.v6013 == ((void *)0)))) && ((F.v6015 < F.p2635)))) {
F.v6013 = ((*(yR95 *)rt_nil_check(F.v6013))).f_next;
F.v6015 = rt_range(rt_add(F.v6015, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
}
if ((F.v6013 == ((void *)0))) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2634))).f_line, ((*(yR95 *)rt_nil_check(F.p2634))).f_name, y_str(": too few actual parameters", 27));
}
{ void * rv6020 = F.v6013;
return rv6020; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2640_NArgs(void * a_p2641, rt_int a_p2642) {
struct yf2643 F;
memset((void *)&F, 0, sizeof F);
F.p2641 = a_p2641;
F.p2642 = a_p2642;
if ((!(yr1257_Count(((*(yR95 *)rt_nil_check(F.p2641))).f_a) == F.p2642))) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2641))).f_line, ((*(yR95 *)rt_nil_check(F.p2641))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2647_Call1(yarr a_p2649, rt_int a_p2650) {
struct yf2651 F;
memset((void *)&F, 0, sizeof F);
F.p2649 = a_p2649;
F.p2650 = a_p2650;
yr983_SB();
yr994_SA(F.p2649);
yr994_SA(y_str("(", 1));
yr1001_ST(F.p2650);
yr994_SA(y_str(")", 1));
{ rt_int rv6030 = yr1013_SE();
return rv6030; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2655_Addr(rt_int a_p2656) {
struct yf2657 F;
memset((void *)&F, 0, sizeof F);
F.p2656 = a_p2656;
{ rt_int rv6035 = yr2434_Join(yr1018_T(y_str("&", 1)), F.p2656, INT64_C(0));
return rv6035; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2661_StdVar(void * a_p2662, rt_int a_p2663, rt_int * a_p2664, void * * a_p2665) {
struct yf2666 F;
memset((void *)&F, 0, sizeof F);
F.p2662 = a_p2662;
F.p2663 = a_p2663;
F.p2664_o = a_p2664;
F.p2665_o = a_p2665;
yr2061_LValue(F.p2662, &F.p2664, &F.p2665);
if ((((!(F.p2663 == v828))) && ((!(((*(yR100 *)rt_nil_check(F.p2665))).f_kind == F.p2663))))) {
yr983_SB();
yr994_SA(y_str("a ", 2));
if ((F.p2663 == v801)) {
yr994_SA(y_str("file", 4));
} else if ((F.p2663 == v807)) {
yr994_SA(y_str("signal", 6));
} else if ((F.p2663 == v810)) {
yr994_SA(y_str("SEMAPHORE", 9));
} else if ((F.p2663 == v798)) {
yr994_SA(y_str("pointer", 7));
} else {
yr994_SA(y_str("variable", 8));
}
yr994_SA(y_str(" is needed here", 15));
F.v6042 = yr1013_SE();
yr1114_Fail(((*(yR95 *)rt_nil_check(F.p2662))).f_line, F.v6042);
}
(*F.p2664_o) = F.p2664;
(*F.p2665_o) = F.p2665;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2670_NumArg(void * a_p2671, rt_int * a_p2672, void * * a_p2673) {
struct yf2674 F;
memset((void *)&F, 0, sizeof F);
F.p2671 = a_p2671;
F.p2672_o = a_p2672;
F.p2673_o = a_p2673;
yr2088_Expr(F.p2671, ((void *)0), &F.p2672, &F.p2673);
if ((!yr1723_IsNumeric(F.p2673))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2671))).f_line, y_str("a number is needed here", 23));
}
(*F.p2672_o) = F.p2672;
(*F.p2673_o) = F.p2673;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2678_IntArg(void * a_p2679) {
struct yf2680 F;
memset((void *)&F, 0, sizeof F);
F.p2679 = a_p2679;
yr2088_Expr(F.p2679, v1680, &F.v6058, &F.v6060);
if ((!(((*(yR100 *)rt_nil_check(F.v6060))).f_kind == v774))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2679))).f_line, y_str("an integer is needed here", 25));
}
{ rt_int rv6062 = F.v6058;
return rv6062; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2684_CodeInsert(void * a_p2685) {
struct yf2686 F;
memset((void *)&F, 0, sizeof F);
F.p2685 = a_p2685;
F.v6066 = yr2633_Arg(F.p2685, INT64_C(1));
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1)}; y_desc_array(&F.yd_6090, 1, lo, hi, &y_d_int); }
y_init(&F.yd_6090, &F.v6092);
if ((!(((*(yR95 *)rt_nil_check(F.v6066))).f_kind == v741))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2685))).f_line, y_str("a code insert takes a string literal (XIV.XI.5)", 47));
}
F.v6069 = ((*(yR95 *)rt_nil_check(F.v6066))).f_text;
F.v6079 = ((rt_int *)(v887).p)[y_ix1(v887, F.v6069)];
yr983_SB();
F.v6075 = INT64_C(1);
while ((F.v6075 <= F.v6079)) {
F.v6081 = yr1060_TChar(F.v6069, F.v6075);
if ((F.v6081 == 39)) {
F.v6077 = rt_range(rt_add(F.v6075, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
while ((!(yr1060_TChar(F.v6069, F.v6077) == 39))) {
F.v6077 = rt_range(rt_add(F.v6077, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
}
F.v6071 = yr1025_Intern(rt_range(rt_add(((rt_int *)(v885).p)[y_ix1(v885, F.v6069)], F.v6075), INT64_C(-4611686018427387904), INT64_C(4611686018427387904)), rt_range(rt_sub((rt_sub(F.v6077, F.v6075)), INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904)));
yr988_SC(((unsigned char *)(v937).p)[y_ix1(v937, yr2012_CharValue(v1684, F.v6071, ((*(yR95 *)rt_nil_check(F.p2685))).f_line))]);
F.v6075 = rt_range(rt_add(F.v6077, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
} else if ((F.v6081 == 36)) {
F.v6077 = rt_range(rt_add(F.v6075, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
while ((((F.v6077 <= F.v6079)) && ((yr965_IsLetter(yr1060_TChar(F.v6069, F.v6077)) || yr971_IsDigit(yr1060_TChar(F.v6069, F.v6077)))))) {
F.v6077 = rt_range(rt_add(F.v6077, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
}
F.v6071 = yr1025_Intern(rt_range(rt_add(((rt_int *)(v885).p)[y_ix1(v885, F.v6069)], F.v6075), INT64_C(-4611686018427387904), INT64_C(4611686018427387904)), rt_range(rt_sub((rt_sub(F.v6077, F.v6075)), INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904)));
F.v6083 = yr1609_Find(F.v6071);
if ((F.v6083 == ((void *)0))) {
v906 = INT64_C(0);
v918 = INT64_C(0);
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2685))).f_line, F.v6071, y_str(" in a code insert is not declared here", 38));
}
F.v6083 = yr1674_Real(F.v6083);
if ((((!(((*(yR115 *)rt_nil_check(F.v6083))).f_kind == v831))) && ((!(((*(yR115 *)rt_nil_check(F.v6083))).f_kind == v834))))) {
v906 = INT64_C(0);
v918 = INT64_C(0);
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2685))).f_line, F.v6071, y_str(" in a code insert is not a variable or constant", 47));
}
yr1001_ST(yr2069_Paren(yr1668_SymPath(F.v6083)));
F.v6075 = F.v6077;
} else {
yr988_SC(F.v6081);
F.v6075 = rt_range(rt_add(F.v6075, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
}
}
F.v6073 = yr1013_SE();
yr1089_Emit(F.v6073);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2690_StdCall(rt_int a_p2691, void * a_p2692, rt_int a_p2693, rt_int * a_p2694, void * * a_p2695) {
struct yf2696 F;
memset((void *)&F, 0, sizeof F);
F.p2691 = a_p2691;
F.p2692 = a_p2692;
F.p2693 = a_p2693;
F.p2694_o = a_p2694;
F.p2695_o = a_p2695;
F.p2695 = v1686;
F.p2694 = yr1018_T(y_str("((void)0)", 9));
F.v6159 = ((((((((((((((((F.p2691 == v1905)) || ((F.p2691 == v1908))) || ((F.p2691 == v1911))) || ((F.p2691 == v1914))) || ((F.p2691 == v1917))) || ((F.p2691 == v1923))) || ((F.p2691 == v1932))) || ((F.p2691 == v1938))) || ((F.p2691 == v1941))) || ((F.p2691 == v1965))) || ((F.p2691 == v1968))) || ((F.p2691 == v1977))) || ((F.p2691 == v1980))) || ((F.p2691 == v1983))) || ((F.p2691 == v1986)));
if ((F.p2693 && (!F.v6159))) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2692))).f_line, ((*(yR95 *)rt_nil_check(F.p2692))).f_name, y_str(" returns a value: it is called in an expression", 47));
}
if (((!F.p2693) && F.v6159)) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2692))).f_line, ((*(yR95 *)rt_nil_check(F.p2692))).f_name, y_str(" returns no value", 17));
}
if ((((F.p2691 == v1887)) || ((F.p2691 == v1890)))) {
yr2640_NArgs(F.p2692, INT64_C(2));
yr2088_Expr(yr2633_Arg(F.p2692, INT64_C(1)), ((void *)0), &F.v6131, &F.v6141);
if ((!yr1729_IsArrayLike(F.v6141))) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2692))).f_line, ((*(yR95 *)rt_nil_check(F.p2692))).f_name, y_str(" of something that is not an array", 34));
}
F.v6133 = yr2678_IntArg(yr2633_Arg(F.p2692, INT64_C(2)));
yr2029_Manifest(yr2633_Arg(F.p2692, INT64_C(2)), &F.v6155, &F.v6153);
F.p2695 = yr2132_Unbounded(v1680);
if ((F.v6155 && ((((*(yR100 *)rt_nil_check(F.v6141))).f_kind == v792)))) {
if ((((F.v6153 < INT64_C(1))) || ((F.v6153 > ((*(yR100 *)rt_nil_check(F.v6141))).f_nidx)))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2692))).f_line, y_str("no such dimension", 17));
}
F.v6147 = ((*(yR100 *)rt_nil_check(F.v6141))).f_idx;
{ rt_int hi6175 = F.v6153;
for (rt_int i6174 = INT64_C(2); i6174 <= hi6175; i6174++) { F.c_6173 = i6174;
F.v6147 = ((*(yR100 *)rt_nil_check(F.v6147))).f_link;
if (i6174 == hi6175) break;
}}
F.p2695 = F.v6147;
}
if ((F.p2691 == v1887)) {
F.p2694 = yr2138_Call2(y_str("y_low", 5), F.v6131, F.v6133);
} else {
F.p2694 = yr2138_Call2(y_str("y_high", 6), F.v6131, F.v6133);
}
(*F.p2694_o) = F.p2694;
(*F.p2695_o) = F.p2695;
return;
}
if ((((((F.p2691 == v1893)) || ((F.p2691 == v1896))) || ((F.p2691 == v1899))) || ((F.p2691 == v1902)))) {
yr2640_NArgs(F.p2692, INT64_C(1));
yr2088_Expr(yr2633_Arg(F.p2692, INT64_C(1)), ((void *)0), &F.v6131, &F.v6141);
if ((!yr1717_IsDiscrete(F.v6141))) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2692))).f_line, ((*(yR95 *)rt_nil_check(F.p2692))).f_name, y_str(" of something that is not integer or scalar", 43));
}
if ((((((F.p2691 == v1899)) || ((F.p2691 == v1902)))) && ((((*(yR100 *)rt_nil_check(F.v6141))).f_kind == v774)))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2692))).f_line, y_str("FIRST and LAST apply to ordered enumerations and alphabets (XI)", 63));
}
if ((((((*(yR100 *)rt_nil_check(F.v6141))).f_kind == v786)) && (!((*(yR100 *)rt_nil_check(F.v6141))).f_ordered))) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2692))).f_line, ((*(yR95 *)rt_nil_check(F.p2692))).f_name, y_str(" applies to ordered enumerations (XI)", 37));
}
F.p2695 = yr2132_Unbounded(F.v6141);
if ((F.p2691 == v1899)) {
F.p2694 = ((*(yR100 *)rt_nil_check(F.v6141))).f_lo;
} else if ((F.p2691 == v1902)) {
F.p2694 = ((*(yR100 *)rt_nil_check(F.v6141))).f_hi;
} else {
yr983_SB();
if ((!(((*(yR100 *)rt_nil_check(F.v6141))).f_lo == INT64_C(0)))) {
yr994_SA(y_str("rt_range(", 9));
}
if ((F.p2691 == v1893)) {
yr994_SA(y_str("rt_add(", 7));
} else {
yr994_SA(y_str("rt_sub(", 7));
}
yr1001_ST(F.v6131);
yr994_SA(y_str(", 1)", 4));
if ((!(((*(yR100 *)rt_nil_check(F.v6141))).f_lo == INT64_C(0)))) {
yr994_SA(y_str(", ", 2));
yr1001_ST(((*(yR100 *)rt_nil_check(F.v6141))).f_lo);
yr994_SA(y_str(", ", 2));
yr1001_ST(((*(yR100 *)rt_nil_check(F.v6141))).f_hi);
yr994_SA(y_str(")", 1));
}
F.p2694 = yr1013_SE();
}
if ((!(((*(yR100 *)rt_nil_check(F.v6141))).f_kind == v774))) {
F.p2695 = F.v6141;
}
(*F.p2694_o) = F.p2694;
(*F.p2695_o) = F.p2695;
return;
}
if ((F.p2691 == v1905)) {
yr2640_NArgs(F.p2692, INT64_C(1));
yr2661_StdVar(yr2633_Arg(F.p2692, INT64_C(1)), v798, &F.v6131, &F.v6141);
if ((((*(yR100 *)rt_nil_check(F.v6141))).f_elem == ((void *)0))) {
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2692))).f_line, ((*(yR100 *)rt_nil_check(F.v6141))).f_forward, y_str(" is not declared", 16));
}
F.v6147 = ((*(yR100 *)rt_nil_check(F.v6141))).f_elem;
yr983_SB();
yr994_SA(y_str("({ ", 3));
yr1001_ST(F.v6131);
yr994_SA(y_str(" = rt_alloc(sizeof(", 19));
yr1001_ST(yr1747_CType(F.v6147));
yr994_SA(y_str("));", 3));
if (yr1741_Deep(F.v6147)) {
yr994_SA(y_str(" y_init(", 8));
yr1001_ST(yr1753_DescOf(F.v6147));
yr994_SA(y_str(", ", 2));
yr1001_ST(F.v6131);
yr994_SA(y_str(");", 2));
}
yr994_SA(y_str(" })", 3));
F.p2694 = yr1013_SE();
(*F.p2694_o) = F.p2694;
(*F.p2695_o) = F.p2695;
return;
}
if ((F.p2691 == v1983)) {
yr2640_NArgs(F.p2692, INT64_C(1));
yr2661_StdVar(yr2633_Arg(F.p2692, INT64_C(1)), v798, &F.v6131, &F.v6141);
F.p2694 = yr2434_Join(yr1018_T(y_str("({ free(", 8)), F.v6131, yr2434_Join(yr1018_T(y_str("); ", 3)), F.v6131, yr1018_T(y_str(" = 0; })", 8))));
(*F.p2694_o) = F.p2694;
(*F.p2695_o) = F.p2695;
return;
}
if ((F.p2691 == v1908)) {
yr2640_NArgs(F.p2692, INT64_C(3));
yr2661_StdVar(yr2633_Arg(F.p2692, INT64_C(1)), v801, &F.v6131, &F.v6141);
yr2088_Expr(yr2633_Arg(F.p2692, INT64_C(2)), v1684, &F.v6133, &F.v6143);
if ((!yr1735_IsString(F.v6143))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2692))).f_line, y_str("OPEN takes the name of the file as a string (XII.A)", 51));
}
yr2088_Expr(yr2633_Arg(F.p2692, INT64_C(3)), v2700, &F.v6135, &F.v6145);
yr1780_CheckType(((*(yR95 *)rt_nil_check(F.p2692))).f_line, v2700, F.v6145);
yr983_SB();
yr994_SA(y_str("y_open(&", 8));
yr1001_ST(F.v6131);
yr994_SA(y_str(", ", 2));
yr1001_ST(F.v6133);
yr994_SA(y_str(", ", 2));
yr1001_ST(F.v6135);
yr994_SA(y_str(")", 1));
F.p2694 = yr1013_SE();
(*F.p2694_o) = F.p2694;
(*F.p2695_o) = F.p2695;
return;
}
if ((((F.p2691 == v1911)) || ((F.p2691 == v1920)))) {
yr2640_NArgs(F.p2692, INT64_C(1));
yr2661_StdVar(yr2633_Arg(F.p2692, INT64_C(1)), v801, &F.v6131, &F.v6141);
if ((F.p2691 == v1911)) {
F.p2694 = yr2647_Call1(y_str("y_close", 7), yr2655_Addr(F.v6131));
} else {
F.p2695 = v1682;
F.p2694 = yr2647_Call1(y_str("y_check_eof", 11), yr2655_Addr(F.v6131));
}
(*F.p2694_o) = F.p2694;
(*F.p2695_o) = F.p2695;
return;
}
if ((F.p2691 == v1914)) {
yr2640_NArgs(F.p2692, INT64_C(2));
yr2661_StdVar(yr2633_Arg(F.p2692, INT64_C(1)), v801, &F.v6131, &F.v6141);
yr2661_StdVar(yr2633_Arg(F.p2692, INT64_C(2)), v828, &F.v6133, &F.v6143);
yr1780_CheckType(((*(yR95 *)rt_nil_check(F.p2692))).f_line, ((*(yR100 *)rt_nil_check(F.v6141))).f_elem, F.v6143);
if ((yr1741_Deep(F.v6143) || ((((*(yR100 *)rt_nil_check(F.v6143))).f_kind == v798)))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2692))).f_line, y_str("files of this implementation hold no arrays or pointers", 55));
}
yr983_SB();
yr994_SA(y_str("({ ", 3));
yr1001_ST(yr1747_CType(F.v6143));
yr994_SA(y_str(" g; y_get(&", 11));
yr1001_ST(F.v6131);
yr994_SA(y_str(", &g, sizeof g); ", 17));
yr1001_ST(F.v6133);
yr994_SA(y_str(" = ", 3));
yr1001_ST(yr2037_Convert(yr1018_T(y_str("g", 1)), F.v6143, ((*(yR100 *)rt_nil_check(F.v6141))).f_elem));
yr994_SA(y_str("; })", 4));
F.p2694 = yr1013_SE();
(*F.p2694_o) = F.p2694;
(*F.p2695_o) = F.p2695;
return;
}
if ((F.p2691 == v1917)) {
yr2640_NArgs(F.p2692, INT64_C(2));
yr2661_StdVar(yr2633_Arg(F.p2692, INT64_C(1)), v801, &F.v6131, &F.v6141);
yr2088_Expr(yr2633_Arg(F.p2692, INT64_C(2)), ((*(yR100 *)rt_nil_check(F.v6141))).f_elem, &F.v6133, &F.v6143);
yr1780_CheckType(((*(yR95 *)rt_nil_check(F.p2692))).f_line, ((*(yR100 *)rt_nil_check(F.v6141))).f_elem, F.v6143);
if ((yr1741_Deep(F.v6143) || ((((*(yR100 *)rt_nil_check(F.v6143))).f_kind == v798)))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2692))).f_line, y_str("files of this implementation hold no arrays or pointers", 55));
}
yr983_SB();
yr994_SA(y_str("({ ", 3));
yr1001_ST(yr1747_CType(((*(yR100 *)rt_nil_check(F.v6141))).f_elem));
yr994_SA(y_str(" pv = ", 6));
yr1001_ST(yr2037_Convert(F.v6133, ((*(yR100 *)rt_nil_check(F.v6141))).f_elem, F.v6143));
yr994_SA(y_str("; y_put(&", 9));
yr1001_ST(F.v6131);
yr994_SA(y_str(", &pv, sizeof pv); })", 21));
F.p2694 = yr1013_SE();
(*F.p2694_o) = F.p2694;
(*F.p2695_o) = F.p2695;
return;
}
if ((F.p2691 == v1923)) {
F.v6149 = yr1257_Count(((*(yR95 *)rt_nil_check(F.p2692))).f_a);
if ((((F.v6149 < INT64_C(5))) || ((!((rt_mod((rt_sub(F.v6149, INT64_C(2))), INT64_C(3))) == INT64_C(0)))))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2692))).f_line, y_str("MOVE takes an object, an index and triples", 42));
}
yr2661_StdVar(yr2633_Arg(F.p2692, INT64_C(1)), v828, &F.v6131, &F.v6141);
if (((!((((((*(yR100 *)rt_nil_check(F.v6141))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.v6141))).f_kind == v813))))) || ((!(((*(yR100 *)rt_nil_check(F.v6141))).f_nidx == INT64_C(1)))))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2692))).f_line, y_str("MOVE works on one-dimensional arrays", 36));
}
F.v6133 = yr2678_IntArg(yr2633_Arg(F.p2692, INT64_C(2)));
F.v6139 = yr1143_Fresh(y_str("at", 2));
yr983_SB();
yr994_SA(y_str("({ rt_int ", 10));
yr1001_ST(F.v6139);
yr994_SA(y_str(" = ", 3));
yr1001_ST(F.v6133);
yr994_SA(y_str(";", 1));
F.p2694 = yr1013_SE();
F.v6151 = INT64_C(3);
while ((F.v6151 < F.v6149)) {
yr2088_Expr(yr2633_Arg(F.p2692, F.v6151), ((*(yR100 *)rt_nil_check(F.v6141))).f_elem, &F.v6135, &F.v6145);
if (((!yr1729_IsArrayLike(F.v6145)) || (!yr1765_SameType(((*(yR100 *)rt_nil_check(F.v6141))).f_elem, ((*(yR100 *)rt_nil_check(F.v6145))).f_elem)))) {
yr1121_FailS(((*(yR95 *)rt_nil_check(F.p2692))).f_line, y_str("MOVE: the components differ in type", 35));
}
F.v6137 = yr2678_IntArg(yr2633_Arg(F.p2692, rt_range(rt_add(F.v6151, INT64_C(1)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904))));
F.v6133 = yr2678_IntArg(yr2633_Arg(F.p2692, rt_range(rt_add(F.v6151, INT64_C(2)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904))));
yr983_SB();
yr1001_ST(F.p2694);
yr994_SA(y_str(" { rt_int mi = ", 15));
yr1001_ST(F.v6137);
yr994_SA(y_str(", mj = ", 7));
yr1001_ST(F.v6133);
yr994_SA(y_str("; y_move(&", 10));
yr1001_ST(F.v6131);
yr994_SA(y_str(", ", 2));
yr1001_ST(F.v6139);
yr994_SA(y_str(", ", 2));
yr1001_ST(F.v6135);
yr994_SA(y_str(", mi, mj, ", 10));
yr1001_ST(yr1753_DescOf(((*(yR100 *)rt_nil_check(F.v6141))).f_elem));
yr994_SA(y_str("); if (mj >= mi) ", 17));
yr1001_ST(F.v6139);
yr994_SA(y_str(" += mj - mi + 1; }", 18));
F.p2694 = yr1013_SE();
F.v6151 = rt_range(rt_add(F.v6151, INT64_C(3)), INT64_C(-4611686018427387904), INT64_C(4611686018427387904));
}
F.p2694 = yr2434_Join(F.p2694, yr1018_T(y_str(" })", 3)), INT64_C(0));
(*F.p2694_o) = F.p2694;
(*F.p2695_o) = F.p2695;
return;
}
if ((((F.p2691 == v1926)) || ((F.p2691 == v1929)))) {
yr2640_NArgs(F.p2692, INT64_C(2));
F.v6131 = yr2404_Cond(yr2633_Arg(F.p2692, INT64_C(1)));
F.v6133 = yr2404_Cond(yr2633_Arg(F.p2692, INT64_C(2)));
F.p2695 = v1682;
if ((F.p2691 == v1926)) {
F.p2694 = yr2147_Infix(yr2069_Paren(yr2147_Infix(F.v6131, y_str("!=", 2), yr1018_T(y_str("0", 1)))), y_str("&", 1), yr2069_Paren(yr2147_Infix(F.v6133, y_str("!=", 2), yr1018_T(y_str("0", 1)))));
} else {
F.p2694 = yr2147_Infix(yr2069_Paren(yr2147_Infix(F.v6131, y_str("!=", 2), yr1018_T(y_str("0", 1)))), y_str("|", 1), yr2069_Paren(yr2147_Infix(F.v6133, y_str("!=", 2), yr1018_T(y_str("0", 1)))));
}
(*F.p2694_o) = F.p2694;
(*F.p2695_o) = F.p2695;
return;
}
if ((F.p2691 == v1932)) {
yr2640_NArgs(F.p2692, INT64_C(1));
F.p2694 = yr2647_Call1(y_str("rt_delay", 8), yr2678_IntArg(yr2633_Arg(F.p2692, INT64_C(1))));
(*F.p2694_o) = F.p2694;
(*F.p2695_o) = F.p2695;
return;
}
if ((F.p2691 == v1935)) {
yr2640_NArgs(F.p2692, INT64_C(0));
F.p2695 = yr2132_Unbounded(v1680);
F.p2694 = yr1018_T(y_str("rt_time()", 9));
(*F.p2694_o) = F.p2694;
(*F.p2695_o) = F.p2695;
return;
}
if (((((F.p2691 == v1938)) || ((F.p2691 == v1941))) || ((F.p2691 == v1944)))) {
yr2661_StdVar(yr2633_Arg(F.p2692, INT64_C(1)), v807, &F.v6131, &F.v6141);
if ((F.p2691 == v1938)) {
if ((yr1257_Count(((*(yR95 *)rt_nil_check(F.p2692))).f_a) == INT64_C(1))) {
F.v6133 = yr1018_T(y_str("1", 1));
} else {
yr2640_NArgs(F.p2692, INT64_C(2));
F.v6133 = yr2678_IntArg(yr2633_Arg(F.p2692, INT64_C(2)));
}
F.p2694 = yr2138_Call2(y_str("y_wait", 6), yr2655_Addr(F.v6131), F.v6133);
} else {
yr2640_NArgs(F.p2692, INT64_C(1));
if ((F.p2691 == v1941)) {
F.p2694 = yr2647_Call1(y_str("y_send", 6), yr2655_Addr(F.v6131));
} else {
F.p2695 = v1682;
F.p2694 = yr2647_Call1(y_str("y_awaited", 9), yr2655_Addr(F.v6131));
}
}
(*F.p2694_o) = F.p2694;
(*F.p2695_o) = F.p2695;
return;
}
if (((((F.p2691 == v1947)) || ((F.p2691 == v1950))) || ((F.p2691 == v1953)))) {
yr2640_NArgs(F.p2692, INT64_C(1));
yr2670_NumArg(yr2633_Arg(F.p2692, INT64_C(1)), &F.v6131, &F.v6141);
F.p2695 = yr2132_Unbounded(v1680);
if ((((*(yR100 *)rt_nil_check(F.v6141))).f_kind == v774)) {
F.p2694 = F.v6131;
} else if ((F.p2691 == v1947)) {
F.p2694 = yr2647_Call1(y_str("y_floor", 7), F.v6131);
} else if ((F.p2691 == v1950)) {
F.p2694 = yr2647_Call1(y_str("y_ceiling", 9), F.v6131);
} else {
F.p2694 = yr2647_Call1(y_str("y_near_integer", 14), F.v6131);
}
(*F.p2694_o) = F.p2694;
(*F.p2695_o) = F.p2695;
return;
}
if ((F.p2691 == v1959)) {
yr2640_NArgs(F.p2692, INT64_C(1));
yr2670_NumArg(yr2633_Arg(F.p2692, INT64_C(1)), &F.v6131, &F.v6141);
F.p2695 = v1692;
F.p2694 = yr2434_Join(yr1018_T(y_str("((double)(", 10)), F.v6131, yr1018_T(y_str("))", 2)));
(*F.p2694_o) = F.p2694;
(*F.p2695_o) = F.p2695;
return;
}
if ((F.p2691 == v1956)) {
yr2640_NArgs(F.p2692, INT64_C(2));
yr2670_NumArg(yr2633_Arg(F.p2692, INT64_C(1)), &F.v6131, &F.v6141);
yr2670_NumArg(yr2633_Arg(F.p2692, INT64_C(2)), &F.v6133, &F.v6143);
F.p2695 = v1694;
F.p2694 = yr2138_Call2(y_str("y_near_fixed", 12), yr2434_Join(yr1018_T(y_str("(double)(", 9)), F.v6131, yr1018_T(y_str(")", 1))), F.v6133);
(*F.p2694_o) = F.p2694;
(*F.p2695_o) = F.p2695;
return;
}
if ((F.p2691 == v1962)) {
yr2640_NArgs(F.p2692, INT64_C(3));
yr2670_NumArg(yr2633_Arg(F.p2692, INT64_C(1)), &F.v6131, &F.v6141);
yr2670_NumArg(yr2633_Arg(F.p2692, INT64_C(2)), &F.v6133, &F.v6143);
yr2670_NumArg(yr2633_Arg(F.p2692, INT64_C(3)), &F.v6135, &F.v6145);
F.p2695 = v1694;
F.p2694 = yr2434_Join(yr1018_T(y_str("y_fixed_div(", 12)), F.v6131, yr2434_Join(yr1018_T(y_str(", ", 2)), F.v6133, yr2434_Join(yr1018_T(y_str(", ", 2)), F.v6135, yr1018_T(y_str(")", 1)))));
(*F.p2694_o) = F.p2694;
(*F.p2695_o) = F.p2695;
return;
}
if (((((F.p2691 == v1965)) || ((F.p2691 == v1968))) || ((F.p2691 == v1971)))) {
yr2640_NArgs(F.p2692, INT64_C(1));
yr2661_StdVar(yr2633_Arg(F.p2692, INT64_C(1)), v810, &F.v6131, &F.v6141);
if ((F.p2691 == v1965)) {
F.p2694 = yr2647_Call1(y_str("rt_region_enter", 15), yr2655_Addr(F.v6131));
} else if ((F.p2691 == v1968)) {
F.p2694 = yr2647_Call1(y_str("rt_region_leave", 15), yr2655_Addr(F.v6131));
} else {
F.p2695 = v1682;
F.p2694 = yr2647_Call1(y_str("y_cond_claim", 12), yr2655_Addr(F.v6131));
}
(*F.p2694_o) = F.p2694;
(*F.p2695_o) = F.p2695;
return;
}
if ((F.p2691 == v1974)) {
yr2640_NArgs(F.p2692, INT64_C(0));
F.p2695 = yr2132_Unbounded(v1680);
F.p2694 = yr1018_T(y_str("y_self()", 8));
(*F.p2694_o) = F.p2694;
(*F.p2695_o) = F.p2695;
return;
}
if ((F.p2691 == v1977)) {
yr2640_NArgs(F.p2692, INT64_C(2));
F.p2694 = yr2138_Call2(y_str("y_change_priority", 17), yr2678_IntArg(yr2633_Arg(F.p2692, INT64_C(1))), yr2678_IntArg(yr2633_Arg(F.p2692, INT64_C(2))));
(*F.p2694_o) = F.p2694;
(*F.p2695_o) = F.p2695;
return;
}
if ((F.p2691 == v1980)) {
yr2640_NArgs(F.p2692, INT64_C(1));
F.p2694 = yr2647_Call1(y_str("y_raise_termination", 19), yr2678_IntArg(yr2633_Arg(F.p2692, INT64_C(1))));
(*F.p2694_o) = F.p2694;
(*F.p2695_o) = F.p2695;
return;
}
if ((F.p2691 == v1986)) {
yr2640_NArgs(F.p2692, INT64_C(1));
yr2684_CodeInsert(F.p2692);
(*F.p2694_o) = F.p2694;
(*F.p2695_o) = F.p2695;
return;
}
if ((((F.p2691 == v1989)) || ((F.p2691 == v1992)))) {
yr2640_NArgs(F.p2692, INT64_C(1));
yr2088_Expr(yr2633_Arg(F.p2692, INT64_C(1)), ((void *)0), &F.v6131, &F.v6141);
F.p2695 = yr2132_Unbounded(v1680);
if ((F.p2691 == v1989)) {
F.p2694 = yr2434_Join(yr1018_T(y_str("((rt_int)(intptr_t)&(", 21)), F.v6131, yr1018_T(y_str("))", 2)));
} else {
F.p2694 = yr2434_Join(yr1018_T(y_str("((rt_int)sizeof(", 16)), F.v6131, yr1018_T(y_str("))", 2)));
}
(*F.p2694_o) = F.p2694;
(*F.p2695_o) = F.p2695;
return;
}
yr1129_FailN(((*(yR95 *)rt_nil_check(F.p2692))).f_line, ((*(yR95 *)rt_nil_check(F.p2692))).f_name, y_str(" is not translated", 18));
(*F.p2694_o) = F.p2694;
(*F.p2695_o) = F.p2695;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2704_StdRep(yarr a_p2706, void * a_p2707) {
struct yf2708 F;
memset((void *)&F, 0, sizeof F);
F.p2706 = a_p2706;
F.p2707 = a_p2707;
F.v6347 = yr1585_NewSym(v840, yr1038_N(F.p2706));
((*(yR115 *)rt_nil_check(F.v6347))).f_rep = F.p2707;
yr1641_Define(F.v6347, INT64_C(0));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2712_StdOp(yarr a_p2714, rt_int a_p2715) {
struct yf2716 F;
memset((void *)&F, 0, sizeof F);
F.p2714 = a_p2714;
F.p2715 = a_p2715;
F.v6353 = yr1585_NewSym(v861, yr1038_N(F.p2714));
((*(yR115 *)rt_nil_check(F.v6353))).f_mval = F.p2715;
yr1641_Define(F.v6353, INT64_C(0));
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2720_LitList(yarr a_p2722, yarr a_p2723, yarr a_p2724, rt_int a_p2725) {
struct yf2726 F;
memset((void *)&F, 0, sizeof F);
F.p2722 = a_p2722;
F.p2723 = a_p2723;
F.p2724 = a_p2724;
F.p2725 = a_p2725;
F.v6361 = ((void *)0);
F.v6363 = ((void *)0);
F.v6365 = ((void *)0);
F.v6365 = yr1242_NewNode(v639, INT64_C(0));
((*(yR95 *)rt_nil_check(F.v6365))).f_name = yr1038_N(F.p2722);
yr1249_Link(&F.v6361, &F.v6363, F.v6365);
F.v6365 = yr1242_NewNode(v639, INT64_C(0));
((*(yR95 *)rt_nil_check(F.v6365))).f_name = yr1038_N(F.p2723);
yr1249_Link(&F.v6361, &F.v6363, F.v6365);
if (F.p2725) {
F.v6365 = yr1242_NewNode(v639, INT64_C(0));
((*(yR95 *)rt_nil_check(F.v6365))).f_name = yr1038_N(F.p2724);
yr1249_Link(&F.v6361, &F.v6363, F.v6365);
}
{ void * rv6369 = F.v6361;
return rv6369; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2730_Abstract(rt_int a_p2731, yarr a_p2733) {
struct yf2734 F;
memset((void *)&F, 0, sizeof F);
F.p2731 = a_p2731;
F.p2733 = a_p2733;
F.v6374 = yr1704_NewRep(F.p2731, yr1038_N(F.p2733));
((*(yR100 *)rt_nil_check(F.v6374))).f_abstract = 1;
{ void * rv6376 = F.v6374;
return rv6376; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2738_Predefine(void) {
struct yf2739 F;
memset((void *)&F, 0, sizeof F);
yr1592_OpenScope(0);
((void * *)(v2528).p)[y_ix1(v2528, v1567)] = ((void *)0);
v1680 = yr2730_Abstract(v774, y_str("INTEGER", 7));
v1694 = yr2730_Abstract(v777, y_str("FIXED", 5));
v1692 = yr2730_Abstract(v780, y_str("FLOATING", 8));
v1696 = yr1704_NewRep(v807, yr1038_N(y_str("SIGNAL", 6)));
v1698 = yr1704_NewRep(v810, yr1038_N(y_str("SEMAPHORE", 9)));
v1686 = yr1704_NewRep(v822, yr1038_N(y_str("no value", 8)));
v1700 = yr1704_NewRep(v828, yr1038_N(y_str("any", 3)));
v1682 = yr1704_NewRep(v783, yr1038_N(y_str("BOOLEAN", 7)));
((*(yR100 *)rt_nil_check(v1682))).f_lits = yr2720_LitList(y_str("FALSE", 5), y_str("TRUE", 4), y_str("", 0), 0);
((*(yR100 *)rt_nil_check(v1682))).f_nlits = INT64_C(2);
yr1808_SetRange(v1682, INT64_C(0), INT64_C(1));
yr1802_DefineLits(v1682);
v1684 = yr1704_NewRep(v789, yr1038_N(y_str("ASCII", 5)));
((*(yR100 *)rt_nil_check(v1684))).f_ordered = 1;
((*(yR100 *)rt_nil_check(v1684))).f_nlits = INT64_C(128);
yr1808_SetRange(v1684, INT64_C(0), INT64_C(127));
v2700 = yr1704_NewRep(v786, yr1038_N(y_str("OPEN_MODE", 9)));
((*(yR100 *)rt_nil_check(v2700))).f_lits = yr2720_LitList(y_str("READ", 4), y_str("WRITE", 5), y_str("APPEND", 6), 1);
((*(yR100 *)rt_nil_check(v2700))).f_nlits = INT64_C(3);
yr1808_SetRange(v2700, INT64_C(0), INT64_C(2));
yr1802_DefineLits(v2700);
yr2704_StdRep(y_str("INTEGER", 7), v1680);
yr2704_StdRep(y_str("FIXED", 5), v1694);
yr2704_StdRep(y_str("FLOATING", 8), v1692);
yr2704_StdRep(y_str("BOOLEAN", 7), v1682);
yr2704_StdRep(y_str("SIGNAL", 6), v1696);
yr2704_StdRep(y_str("SEMAPHORE", 9), v1698);
yr2704_StdRep(y_str("ASCII", 5), v1684);
yr2704_StdRep(y_str("STANDARD_ALPHABET", 17), v1684);
yr2704_StdRep(y_str("OPEN_MODE", 9), v2700);
yr2712_StdOp(y_str("LOW", 3), v1887);
yr2712_StdOp(y_str("HIGH", 4), v1890);
yr2712_StdOp(y_str("SUCC", 4), v1893);
yr2712_StdOp(y_str("PRED", 4), v1896);
yr2712_StdOp(y_str("FIRST", 5), v1899);
yr2712_StdOp(y_str("LAST", 4), v1902);
yr2712_StdOp(y_str("NEW", 3), v1905);
yr2712_StdOp(y_str("OPEN", 4), v1908);
yr2712_StdOp(y_str("CLOSE", 5), v1911);
yr2712_StdOp(y_str("GET", 3), v1914);
yr2712_StdOp(y_str("PUT", 3), v1917);
yr2712_StdOp(y_str("CHECK_EOF", 9), v1920);
yr2712_StdOp(y_str("MOVE", 4), v1923);
yr2712_StdOp(y_str("AND_LONG", 8), v1926);
yr2712_StdOp(y_str("OR_LONG", 7), v1929);
yr2712_StdOp(y_str("DELAY", 5), v1932);
yr2712_StdOp(y_str("CLOCK_TIME", 10), v1935);
yr2712_StdOp(y_str("WAIT", 4), v1938);
yr2712_StdOp(y_str("SEND", 4), v1941);
yr2712_StdOp(y_str("AWAITED", 7), v1944);
yr2712_StdOp(y_str("FLOOR", 5), v1947);
yr2712_StdOp(y_str("CEILING", 7), v1950);
yr2712_StdOp(y_str("NEAR_INTEGER", 12), v1953);
yr2712_StdOp(y_str("NEAR_FIXED", 10), v1956);
yr2712_StdOp(y_str("NEAR_FLOATING", 13), v1959);
yr2712_StdOp(y_str("FIXED_DIV", 9), v1962);
yr2712_StdOp(y_str("CLAIM", 5), v1965);
yr2712_StdOp(y_str("RELEASE", 7), v1968);
yr2712_StdOp(y_str("CONDITIONAL_CLAIM", 17), v1971);
yr2712_StdOp(y_str("PROCESS_IDENTITY", 16), v1974);
yr2712_StdOp(y_str("CHANGE_PRIORITY", 15), v1977);
yr2712_StdOp(y_str("RAISE_PROCESS_TERMINATION", 25), v1980);
yr2712_StdOp(y_str("FREE_POINTER", 12), v1983);
yr2712_StdOp(y_str("C_CODE_INSERT", 13), v1986);
yr2712_StdOp(y_str("ADDR", 4), v1989);
yr2712_StdOp(y_str("EXTENT", 6), v1992);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2743_Translate(void) {
struct yf2744 F;
memset((void *)&F, 0, sizeof F);
F.v6454 = v2702;
yr1592_OpenScope(0);
((void * *)(v2528).p)[y_ix1(v2528, v1567)] = ((void *)0);
v1573 = INT64_C(0);
while ((!(F.v6454 == ((void *)0)))) {
yr2560_CompileModule(F.v6454);
F.v6454 = ((*(yR95 *)rt_nil_check(F.v6454))).f_next;
}
yr2584_AwaitProcesses();
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2748_WriteProgram(void) {
struct yf2749 F;
memset((void *)&F, 0, sizeof F);
yr1074_PutS(&v951, y_str("static void y_elaborate(void) {", 31));
yr1082_Append(&v951, &v953);
yr1074_PutS(&v951, y_str("}", 1));
yr1074_PutS(&v951, y_str("int main(int argc, char **argv) {", 33));
yr1074_PutS(&v951, y_str("y_lang();", 9));
yr1074_PutS(&v951, y_str("rt_init(argc, argv);", 20));
yr1074_PutS(&v951, y_str("y_elaborate();", 14));
yr1074_PutS(&v951, y_str("rt_main_done();", 15));
yr1074_PutS(&v951, y_str("return 0;", 9));
yr1074_PutS(&v951, y_str("}", 1));
yr1102_WriteTxt(yr1018_T(y_str("#include \"paleo.h\"", 18)));
({ unsigned char pv = 10; y_put(&v878, &pv, sizeof pv); });
yr1102_WriteTxt(yr1018_T(y_str("#include <math.h>", 17)));
({ unsigned char pv = 10; y_put(&v878, &pv, sizeof pv); });
yr1102_WriteTxt(yr1018_T(y_str("#include <string.h>", 19)));
({ unsigned char pv = 10; y_put(&v878, &pv, sizeof pv); });
yr1102_WriteTxt(yr1018_T(y_str("#include <stdlib.h>", 19)));
({ unsigned char pv = 10; y_put(&v878, &pv, sizeof pv); });
yr1108_WriteBuf(v939);
yr1108_WriteBuf(v941);
yr1108_WriteBuf(v943);
yr1108_WriteBuf(v945);
yr1108_WriteBuf(v947);
yr1108_WriteBuf(v949);
yr1108_WriteBuf(v951);
return;
rt_raise(Y_X_NO_RETURN);
}
static void y_elaborate(void) {
{ static const size_t o[] = {offsetof(yR95, f_kind), offsetof(yR95, f_line), offsetof(yR95, f_ival), offsetof(yR95, f_flag), offsetof(yR95, f_name), offsetof(yR95, f_text), offsetof(yR95, f_a), offsetof(yR95, f_b), offsetof(yR95, f_c), offsetof(yR95, f_d), offsetof(yR95, f_e), offsetof(yR95, f_next), offsetof(yR95, f_rep), offsetof(yR95, f_sym), 0}; const ydesc **f = rt_alloc(15 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_int; f[2] = &y_d_int; f[3] = &y_d_int; f[4] = &y_d_int; f[5] = &y_d_int; f[6] = &y_d_ptr; f[7] = &y_d_ptr; f[8] = &y_d_ptr; f[9] = &y_d_ptr; f[10] = &y_d_ptr; f[11] = &y_d_ptr; f[12] = &y_d_ptr; f[13] = &y_d_ptr; y_desc_record(&yd_96, sizeof(yR95), 14, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR100, f_kind), offsetof(yR100, f_tid), offsetof(yR100, f_tname), offsetof(yR100, f_lo), offsetof(yR100, f_hi), offsetof(yR100, f_mlo), offsetof(yR100, f_mhi), offsetof(yR100, f_hasm), offsetof(yR100, f_scale), offsetof(yR100, f_prec), offsetof(yR100, f_elem), offsetof(yR100, f_idx), offsetof(yR100, f_nidx), offsetof(yR100, f_link), offsetof(yR100, f_lits), offsetof(yR100, f_nlits), offsetof(yR100, f_fields), offsetof(yR100, f_selector), offsetof(yR100, f_cname), offsetof(yR100, f_dname), offsetof(yR100, f_dlevel), offsetof(yR100, f_deep), offsetof(yR100, f_abstract), offsetof(yR100, f_opaque), offsetof(yR100, f_ordered), offsetof(yR100, f_forward), offsetof(yR100, f_fwdscope), offsetof(yR100, f_monitor), offsetof(yR100, f_serial), 0}; const ydesc **f = rt_alloc(30 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_int; f[2] = &y_d_int; f[3] = &y_d_int; f[4] = &y_d_int; f[5] = &y_d_int; f[6] = &y_d_int; f[7] = &y_d_int; f[8] = &y_d_int; f[9] = &y_d_int; f[10] = &y_d_ptr; f[11] = &y_d_ptr; f[12] = &y_d_int; f[13] = &y_d_ptr; f[14] = &y_d_ptr; f[15] = &y_d_int; f[16] = &y_d_ptr; f[17] = &y_d_ptr; f[18] = &y_d_int; f[19] = &y_d_int; f[20] = &y_d_int; f[21] = &y_d_int; f[22] = &y_d_int; f[23] = &y_d_int; f[24] = &y_d_int; f[25] = &y_d_int; f[26] = &y_d_int; f[27] = &y_d_ptr; f[28] = &y_d_int; y_desc_record(&yd_101, sizeof(yR100), 29, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR105, f_name), offsetof(yR105, f_rep), offsetof(yR105, f_isconst), offsetof(yR105, f_variant), offsetof(yR105, f_labels), offsetof(yR105, f_next), 0}; const ydesc **f = rt_alloc(7 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_ptr; f[2] = &y_d_int; f[3] = &y_d_int; f[4] = &y_d_ptr; f[5] = &y_d_ptr; y_desc_record(&yd_106, sizeof(yR105), 6, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR110, f_name), offsetof(yR110, f_cls), offsetof(yR110, f_rep), offsetof(yR110, f_cname), offsetof(yR110, f_next), 0}; const ydesc **f = rt_alloc(6 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_int; f[2] = &y_d_ptr; f[3] = &y_d_int; f[4] = &y_d_ptr; y_desc_record(&yd_111, sizeof(yR110), 5, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR115, f_kind), offsetof(yR115, f_name), offsetof(yR115, f_rep), offsetof(yR115, f_cname), offsetof(yR115, f_level), offsetof(yR115, f_byref), offsetof(yR115, f_readonly), offsetof(yR115, f_mval), offsetof(yR115, f_hasmv), offsetof(yR115, f_params), offsetof(yR115, f_nparams), offsetof(yR115, f_ret), offsetof(yR115, f_func), offsetof(yR115, f_decl), offsetof(yR115, f_depth), offsetof(yR115, f_target), offsetof(yR115, f_members), offsetof(yR115, f_mnext), offsetof(yR115, f_chain), offsetof(yR115, f_stack), offsetof(yR115, f_alt), offsetof(yR115, f_monitor), offsetof(yR115, f_serial), 0}; const ydesc **f = rt_alloc(24 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_int; f[2] = &y_d_ptr; f[3] = &y_d_int; f[4] = &y_d_int; f[5] = &y_d_int; f[6] = &y_d_int; f[7] = &y_d_int; f[8] = &y_d_int; f[9] = &y_d_ptr; f[10] = &y_d_int; f[11] = &y_d_ptr; f[12] = &y_d_int; f[13] = &y_d_ptr; f[14] = &y_d_int; f[15] = &y_d_ptr; f[16] = &y_d_ptr; f[17] = &y_d_ptr; f[18] = &y_d_ptr; f[19] = &y_d_ptr; f[20] = &y_d_ptr; f[21] = &y_d_ptr; f[22] = &y_d_int; y_desc_record(&yd_116, sizeof(yR115), 23, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR120, f_syms), offsetof(yR120, f_closed), offsetof(yR120, f_module), offsetof(yR120, f_level), offsetof(yR120, f_deferred), offsetof(yR120, f_up), 0}; const ydesc **f = rt_alloc(7 * sizeof *f); f[0] = &y_d_ptr; f[1] = &y_d_int; f[2] = &y_d_ptr; f[3] = &y_d_int; f[4] = &y_d_ptr; f[5] = &y_d_ptr; y_desc_record(&yd_121, sizeof(yR120), 6, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR125, f_t), offsetof(yR125, f_next), 0}; const ydesc **f = rt_alloc(3 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_ptr; y_desc_record(&yd_126, sizeof(yR125), 2, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR130, f_head), offsetof(yR130, f_tail), 0}; const ydesc **f = rt_alloc(3 * sizeof *f); f[0] = &y_d_ptr; f[1] = &y_d_ptr; y_desc_record(&yd_131, sizeof(yR130), 2, o, (const ydesc *const *)f); }
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(64000000)}; y_desc_array(&yd_139, 1, lo, hi, &y_d_byte); }
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4000000)}; y_desc_array(&yd_147, 1, lo, hi, &y_d_int); }
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(2000000)}; y_desc_array(&yd_155, 1, lo, hi, &y_d_int); }
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(262143)}; y_desc_array(&yd_163, 1, lo, hi, &y_d_int); }
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(8191)}; y_desc_array(&yd_171, 1, lo, hi, &y_d_ptr); }
v174 = INT64_C(0);
v177 = INT64_C(1);
v180 = INT64_C(2);
v183 = INT64_C(3);
v186 = INT64_C(4);
v189 = INT64_C(5);
v192 = INT64_C(6);
v195 = INT64_C(7);
v198 = INT64_C(8);
v201 = INT64_C(1);
v204 = INT64_C(2);
v207 = INT64_C(3);
v210 = INT64_C(4);
v213 = INT64_C(5);
v216 = INT64_C(6);
v219 = INT64_C(7);
v222 = INT64_C(8);
v225 = INT64_C(9);
v228 = INT64_C(10);
v231 = INT64_C(11);
v234 = INT64_C(12);
v237 = INT64_C(13);
v240 = INT64_C(14);
v243 = INT64_C(15);
v246 = INT64_C(16);
v249 = INT64_C(17);
v252 = INT64_C(18);
v255 = INT64_C(19);
v258 = INT64_C(20);
v261 = INT64_C(21);
v264 = INT64_C(22);
v267 = INT64_C(23);
v270 = INT64_C(24);
v273 = INT64_C(25);
v276 = INT64_C(26);
v279 = INT64_C(27);
v282 = INT64_C(28);
v285 = INT64_C(29);
v288 = INT64_C(30);
v291 = INT64_C(31);
v294 = INT64_C(32);
v297 = INT64_C(33);
v300 = INT64_C(34);
v303 = INT64_C(35);
v306 = INT64_C(36);
v309 = INT64_C(37);
v312 = INT64_C(38);
v315 = INT64_C(39);
v318 = INT64_C(40);
v321 = INT64_C(41);
v324 = INT64_C(42);
v327 = INT64_C(43);
v330 = INT64_C(44);
v333 = INT64_C(45);
v336 = INT64_C(46);
v339 = INT64_C(47);
v342 = INT64_C(48);
v345 = INT64_C(49);
v348 = INT64_C(50);
v351 = INT64_C(51);
v354 = INT64_C(52);
v357 = INT64_C(53);
v360 = INT64_C(54);
v363 = INT64_C(55);
v366 = INT64_C(56);
v369 = INT64_C(57);
v372 = INT64_C(58);
v375 = INT64_C(59);
v378 = INT64_C(60);
v381 = INT64_C(61);
v384 = INT64_C(62);
v387 = INT64_C(63);
v390 = INT64_C(64);
v393 = INT64_C(65);
v396 = INT64_C(66);
v399 = INT64_C(67);
v402 = INT64_C(68);
v405 = INT64_C(69);
v408 = INT64_C(70);
v411 = INT64_C(71);
v414 = INT64_C(72);
v417 = INT64_C(73);
v420 = INT64_C(74);
v423 = INT64_C(75);
v426 = INT64_C(76);
v429 = INT64_C(77);
v432 = INT64_C(78);
v435 = INT64_C(79);
v438 = INT64_C(80);
v441 = INT64_C(81);
v444 = INT64_C(82);
v447 = INT64_C(83);
v450 = INT64_C(84);
v453 = INT64_C(85);
v456 = INT64_C(86);
v459 = INT64_C(87);
v462 = INT64_C(87);
v465 = INT64_C(88);
v468 = INT64_C(89);
v471 = INT64_C(90);
v474 = INT64_C(91);
v477 = INT64_C(92);
v480 = INT64_C(93);
v483 = INT64_C(94);
v486 = INT64_C(95);
v489 = INT64_C(96);
v492 = INT64_C(97);
v495 = INT64_C(98);
v498 = INT64_C(99);
v501 = INT64_C(100);
v504 = INT64_C(101);
v507 = INT64_C(102);
v510 = INT64_C(103);
v513 = INT64_C(104);
v516 = INT64_C(105);
v519 = INT64_C(106);
v522 = INT64_C(107);
v525 = INT64_C(108);
v528 = INT64_C(109);
v531 = INT64_C(110);
v534 = INT64_C(111);
v537 = INT64_C(112);
v540 = INT64_C(113);
v543 = INT64_C(114);
v546 = INT64_C(115);
v549 = INT64_C(116);
v552 = INT64_C(117);
v555 = INT64_C(118);
v558 = INT64_C(119);
v561 = INT64_C(120);
v564 = INT64_C(121);
v567 = INT64_C(122);
v570 = INT64_C(123);
v573 = INT64_C(124);
v576 = INT64_C(125);
v579 = INT64_C(126);
v582 = INT64_C(127);
v585 = INT64_C(128);
v588 = INT64_C(129);
v591 = INT64_C(129);
v594 = INT64_C(1);
v597 = INT64_C(2);
v600 = INT64_C(3);
v603 = INT64_C(4);
v606 = INT64_C(5);
v609 = INT64_C(6);
v612 = INT64_C(7);
v615 = INT64_C(8);
v618 = INT64_C(9);
v621 = INT64_C(10);
v624 = INT64_C(11);
v627 = INT64_C(12);
v630 = INT64_C(13);
v633 = INT64_C(14);
v636 = INT64_C(15);
v639 = INT64_C(16);
v642 = INT64_C(20);
v645 = INT64_C(21);
v648 = INT64_C(22);
v651 = INT64_C(23);
v654 = INT64_C(24);
v657 = INT64_C(25);
v660 = INT64_C(26);
v663 = INT64_C(27);
v666 = INT64_C(28);
v669 = INT64_C(29);
v672 = INT64_C(30);
v675 = INT64_C(31);
v678 = INT64_C(32);
v681 = INT64_C(33);
v684 = INT64_C(40);
v687 = INT64_C(41);
v690 = INT64_C(42);
v693 = INT64_C(43);
v696 = INT64_C(44);
v699 = INT64_C(45);
v702 = INT64_C(46);
v705 = INT64_C(47);
v708 = INT64_C(48);
v711 = INT64_C(49);
v714 = INT64_C(50);
v717 = INT64_C(51);
v720 = INT64_C(52);
v723 = INT64_C(53);
v726 = INT64_C(54);
v729 = INT64_C(60);
v732 = INT64_C(61);
v735 = INT64_C(62);
v738 = INT64_C(63);
v741 = INT64_C(64);
v744 = INT64_C(65);
v747 = INT64_C(66);
v750 = INT64_C(67);
v753 = INT64_C(68);
v756 = INT64_C(69);
v759 = INT64_C(70);
v762 = INT64_C(71);
v765 = INT64_C(72);
v768 = INT64_C(73);
v771 = INT64_C(74);
v774 = INT64_C(1);
v777 = INT64_C(2);
v780 = INT64_C(3);
v783 = INT64_C(4);
v786 = INT64_C(5);
v789 = INT64_C(6);
v792 = INT64_C(7);
v795 = INT64_C(8);
v798 = INT64_C(9);
v801 = INT64_C(10);
v804 = INT64_C(11);
v807 = INT64_C(12);
v810 = INT64_C(13);
v813 = INT64_C(14);
v816 = INT64_C(15);
v819 = INT64_C(16);
v822 = INT64_C(17);
v825 = INT64_C(18);
v828 = INT64_C(19);
v831 = INT64_C(1);
v834 = INT64_C(2);
v837 = INT64_C(3);
v840 = INT64_C(4);
v843 = INT64_C(5);
v846 = INT64_C(6);
v849 = INT64_C(7);
v852 = INT64_C(8);
v855 = INT64_C(9);
v858 = INT64_C(10);
v861 = INT64_C(11);
v864 = INT64_C(12);
v867 = INT64_C(1);
v870 = INT64_C(2);
v873 = INT64_C(3);
y_init(&yd_139, &v880);
v882 = INT64_C(0);
y_init(&yd_147, &v885);
y_init(&yd_147, &v887);
v889 = INT64_C(0);
y_init(&yd_163, &v892);
v894 = 0;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4000000)}; y_desc_array(&yd_902, 1, lo, hi, &y_d_byte); }
y_init(&yd_902, &v904);
v906 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4000)}; y_desc_array(&yd_914, 1, lo, hi, &y_d_int); }
y_init(&yd_914, &v916);
v918 = INT64_C(0);
v921 = INT64_C(0);
{ rt_int lo[1] = {0}, hi[1] = {127}; y_desc_array(&yd_926, 1, lo, hi, &y_d_int); }
y_init(&yd_926, &v928);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(127)}; y_desc_array(&yd_935, 1, lo, hi, &y_d_byte); }
y_init(&yd_935, &v937);
v957 = INT64_C(0);
y_init(&yd_155, &v1150);
y_init(&yd_155, &v1152);
y_init(&yd_155, &v1154);
v1156 = INT64_C(0);
v1159 = INT64_C(0);
v1162 = INT64_C(0);
v1165 = INT64_C(0);
v1168 = INT64_C(1);
v1171 = INT64_C(0);
v1231 = INT64_C(1);
v1234 = ((void *)0);
v1236 = INT64_C(0);
v1239 = INT64_C(0);
y_init(&yd_171, &v1556);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1563, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1563, &v1565);
v1567 = INT64_C(-1);
v1570 = INT64_C(0);
v1573 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1581, 1, lo, hi, &y_d_int); }
y_init(&yd_1581, &v1583);
v1702 = ((void *)0);
v1887 = INT64_C(1);
v1890 = INT64_C(2);
v1893 = INT64_C(3);
v1896 = INT64_C(4);
v1899 = INT64_C(5);
v1902 = INT64_C(6);
v1905 = INT64_C(7);
v1908 = INT64_C(8);
v1911 = INT64_C(9);
v1914 = INT64_C(10);
v1917 = INT64_C(11);
v1920 = INT64_C(12);
v1923 = INT64_C(13);
v1926 = INT64_C(14);
v1929 = INT64_C(15);
v1932 = INT64_C(16);
v1935 = INT64_C(17);
v1938 = INT64_C(18);
v1941 = INT64_C(19);
v1944 = INT64_C(20);
v1947 = INT64_C(21);
v1950 = INT64_C(22);
v1953 = INT64_C(23);
v1956 = INT64_C(24);
v1959 = INT64_C(25);
v1962 = INT64_C(26);
v1965 = INT64_C(27);
v1968 = INT64_C(28);
v1971 = INT64_C(29);
v1974 = INT64_C(30);
v1977 = INT64_C(31);
v1980 = INT64_C(32);
v1983 = INT64_C(33);
v1986 = INT64_C(34);
v1989 = INT64_C(35);
v1992 = INT64_C(36);
v1995 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_2185, 1, lo, hi, &y_d_int); }
y_init(&yd_2185, &v2187);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_2194, 1, lo, hi, &y_d_ptr); }
y_init(&yd_2194, &v2196);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_2203, 1, lo, hi, &y_d_ptr); }
y_init(&yd_2203, &v2205);
v2207 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2292, 1, lo, hi, &y_d_int); }
y_init(&yd_2292, &v2294);
v2296 = INT64_C(0);
v2299 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2307, 1, lo, hi, &y_d_int); }
y_init(&yd_2307, &v2309);
v2311 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2319, 1, lo, hi, &y_d_int); }
y_init(&yd_2319, &v2321);
v2323 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2331, 1, lo, hi, &y_d_int); }
y_init(&yd_2331, &v2333);
y_init(&yd_2331, &v2335);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2342, 1, lo, hi, &y_d_int); }
y_init(&yd_2342, &v2344);
v2346 = INT64_C(0);
v2349 = INT64_C(0);
v2352 = ((void *)0);
v2354 = 0;
v2519 = ((void *)0);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_2526, 1, lo, hi, &y_d_ptr); }
y_init(&yd_2526, &v2528);
yr960_InitChars();
yr1174_InitWords();
v1236 = yr1038_N(y_str("FROM", 4));
v1239 = yr1038_N(y_str("DIMENSION", 9));
v1995 = yr1018_T(y_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP DEL SQ DQ ", 128));
y_open(&v878, y_str("OUTPUT", 6), 1);
yr1179_ReadSource();
yr1226_Lex();
v2702 = yr1551_ParseProgram();
yr2738_Predefine();
yr2743_Translate();
yr2748_WriteProgram();
y_close(&v878);
}
int main(int argc, char **argv) {
y_lang();
rt_init(argc, argv);
y_elaborate();
rt_main_done();
return 0;
}
