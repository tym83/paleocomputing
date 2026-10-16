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
struct yf964;
struct yf970;
struct yf976;
struct yf982;
struct yf987;
struct yf993;
struct yf1000;
struct yf1006;
struct yf1012;
struct yf1017;
struct yf1024;
struct yf1031;
struct yf1037;
struct yf1044;
struct yf1051;
struct yf1059;
struct yf1066;
struct yf1073;
struct yf1081;
struct yf1088;
struct yf1094;
struct yf1101;
struct yf1107;
struct yf1113;
struct yf1120;
struct yf1128;
struct yf1137;
struct yf1142;
struct yf1149;
struct yf1178;
struct yf1183;
struct yf1190;
struct yf1196;
struct yf1201;
struct yf1207;
struct yf1214;
struct yf1220;
struct yf1225;
struct yf1230;
struct yf1248;
struct yf1256;
struct yf1262;
struct yf1267;
struct yf1272;
struct yf1277;
struct yf1284;
struct yf1290;
struct yf1296;
struct yf1301;
struct yf1307;
struct yf1312;
struct yf1318;
struct yf1323;
struct yf1330;
struct yf1335;
struct yf1341;
struct yf1346;
struct yf1351;
struct yf1356;
struct yf1361;
struct yf1366;
struct yf1371;
struct yf1377;
struct yf1383;
struct yf1390;
struct yf1395;
struct yf1401;
struct yf1406;
struct yf1412;
struct yf1417;
struct yf1422;
struct yf1427;
struct yf1432;
struct yf1437;
struct yf1442;
struct yf1447;
struct yf1453;
struct yf1458;
struct yf1463;
struct yf1469;
struct yf1475;
struct yf1481;
struct yf1487;
struct yf1493;
struct yf1502;
struct yf1509;
struct yf1514;
struct yf1519;
struct yf1524;
struct yf1530;
struct yf1535;
struct yf1540;
struct yf1545;
struct yf1550;
struct yf1555;
struct yf1591;
struct yf1597;
struct yf1602;
struct yf1608;
struct yf1614;
struct yf1620;
struct yf1627;
struct yf1633;
struct yf1640;
struct yf1647;
struct yf1654;
struct yf1660;
struct yf1667;
struct yf1673;
struct yf1679;
struct yf1710;
struct yf1716;
struct yf1722;
struct yf1728;
struct yf1734;
struct yf1740;
struct yf1746;
struct yf1752;
struct yf1758;
struct yf1764;
struct yf1771;
struct yf1779;
struct yf1787;
struct yf1794;
struct yf1801;
struct yf1807;
struct yf1815;
struct yf1821;
struct yf1829;
struct yf1836;
struct yf1841;
struct yf1847;
struct yf1860;
struct yf1871;
struct yf1879;
struct yf1886;
struct yf2004;
struct yf2011;
struct yf2019;
struct yf2028;
struct yf2036;
struct yf2044;
struct yf2054;
struct yf2060;
struct yf2068;
struct yf2074;
struct yf2081;
struct yf2087;
struct yf2096;
struct yf2104;
struct yf2113;
struct yf2121;
struct yf2131;
struct yf2137;
struct yf2146;
struct yf2155;
struct yf2164;
struct yf2170;
struct yf2179;
struct yf2216;
struct yf2224;
struct yf2230;
struct yf2239;
struct yf2248;
struct yf2259;
struct yf2269;
struct yf2278;
struct yf2286;
struct yf2364;
struct yf2374;
struct yf2380;
struct yf2385;
struct yf2391;
struct yf2397;
struct yf2403;
struct yf2409;
struct yf2416;
struct yf2421;
struct yf2427;
struct yf2433;
struct yf2441;
struct yf2447;
struct yf2453;
struct yf2459;
struct yf2465;
struct yf2471;
struct yf2478;
struct yf2485;
struct yf2491;
struct yf2499;
struct yf2505;
struct yf2512;
struct yf2518;
struct yf2536;
struct yf2544;
struct yf2555;
struct yf2562;
struct yf2568;
struct yf2574;
struct yf2580;
struct yf2586;
struct yf2591;
struct yf2598;
struct yf2604;
struct yf2610;
struct yf2615;
struct yf2621;
struct yf2628;
struct yf2635;
struct yf2642;
struct yf2649;
struct yf2657;
struct yf2663;
struct yf2672;
struct yf2680;
struct yf2686;
struct yf2692;
struct yf2702;
struct yf2714;
struct yf2722;
struct yf2732;
struct yf2740;
struct yf2745;
struct yf2750;
struct yf2755;
struct yR95 { rt_int f_kind; rt_int f_line; rt_int f_ival; rt_int f_flag; rt_int f_name; rt_int f_text; void * f_a; void * f_b; void * f_c; void * f_d; void * f_e; void * f_next; void * f_rep; void * f_sym; };
struct yR100 { rt_int f_kind; rt_int f_tid; rt_int f_tname; rt_int f_lo; rt_int f_hi; rt_int f_mlo; rt_int f_mhi; rt_int f_hasm; rt_int f_scale; rt_int f_prec; void * f_elem; void * f_idx; rt_int f_nidx; void * f_link; void * f_lits; rt_int f_nlits; void * f_fields; void * f_selector; rt_int f_cname; rt_int f_dname; rt_int f_dlevel; rt_int f_deep; rt_int f_abstract; rt_int f_opaque; rt_int f_opaqueops; rt_int f_ordered; rt_int f_forward; rt_int f_fwdscope; void * f_monitor; rt_int f_serial; };
struct yR105 { rt_int f_name; void * f_rep; rt_int f_isconst; rt_int f_variant; void * f_labels; void * f_next; };
struct yR110 { rt_int f_name; rt_int f_cls; void * f_rep; rt_int f_cname; void * f_next; };
struct yR115 { rt_int f_kind; rt_int f_name; void * f_rep; rt_int f_cname; rt_int f_level; rt_int f_byref; rt_int f_readonly; rt_int f_mval; rt_int f_hasmv; void * f_params; rt_int f_nparams; void * f_ret; rt_int f_func; void * f_decl; rt_int f_depth; void * f_target; void * f_members; void * f_mnext; void * f_chain; void * f_stack; void * f_alt; void * f_monitor; rt_int f_serial; };
struct yR120 { void * f_syms; rt_int f_closed; void * f_module; rt_int f_level; void * f_deferred; void * f_up; };
struct yR125 { rt_int f_t; void * f_next; };
struct yR130 { void * f_head; void * f_tail; };
struct yf964 { void *up;
rt_int v2759;
rt_int c_2762;
};
struct yf970 { void *up;
unsigned char p969;
};
struct yf976 { void *up;
unsigned char p975;
};
struct yf982 { void *up;
unsigned char p981;
};
struct yf987 { void *up;
};
struct yf993 { void *up;
unsigned char p992;
};
struct yf1000 { void *up;
yarr p999;
rt_int c_2799;
};
struct yf1006 { void *up;
rt_int p1005;
rt_int v2805;
};
struct yf1012 { void *up;
rt_int p1011;
ydesc yd_2818;
yarr v2820;
rt_int v2822;
rt_int v2825;
};
struct yf1017 { void *up;
rt_int v2844;
rt_int c_2856;
};
struct yf1024 { void *up;
yarr p1023;
};
struct yf1031 { void *up;
rt_int p1029;
rt_int p1030;
rt_int v2867;
rt_int v2870;
rt_int v2872;
rt_int c_2878;
rt_int c_2897;
};
struct yf1037 { void *up;
rt_int p1036;
};
struct yf1044 { void *up;
yarr p1043;
};
struct yf1051 { void *up;
rt_int p1049;
rt_int p1050;
rt_int c_2926;
};
struct yf1059 { void *up;
rt_int p1056;
yarr p1058;
rt_int v2939;
rt_int c_2956;
};
struct yf1066 { void *up;
rt_int p1064;
rt_int p1065;
};
struct yf1073 { void *up;
yR130 * p1071;
rt_int p1072;
void * v2977;
};
struct yf1081 { void *up;
yR130 * p1078;
yarr p1080;
};
struct yf1088 { void *up;
yR130 * p1086;
yR130 * p1087;
};
struct yf1094 { void *up;
rt_int p1093;
};
struct yf1101 { void *up;
yarr p1100;
};
struct yf1107 { void *up;
rt_int p1106;
rt_int v2991;
};
struct yf1113 { void *up;
yR130 p1112;
void * v2998;
};
struct yf1120 { void *up;
rt_int p1118;
rt_int p1119;
rt_int v3004;
};
struct yf1128 { void *up;
rt_int p1125;
yarr p1127;
};
struct yf1137 { void *up;
rt_int p1133;
rt_int p1134;
yarr p1136;
rt_int v3018;
};
struct yf1142 { void *up;
};
struct yf1149 { void *up;
yarr p1148;
rt_int v3026;
};
struct yf1178 { void *up;
rt_int v3030;
rt_int v3032;
rt_int v3034;
rt_int c_3052;
};
struct yf1183 { void *up;
unsigned char v3061;
};
struct yf1190 { void *up;
rt_int p1188;
rt_int p1189;
};
struct yf1196 { void *up;
rt_int p1195;
};
struct yf1201 { void *up;
rt_int v3078;
rt_int v3080;
};
struct yf1207 { void *up;
unsigned char p1206;
};
struct yf1214 { void *up;
yarr p1213;
};
struct yf1220 { void *up;
rt_int p1219;
rt_int v3109;
rt_int v3112;
rt_int v3114;
rt_int v3116;
rt_int v3118;
rt_int v3120;
rt_int v3123;
rt_int v3126;
rt_int v3129;
rt_int v3132;
rt_int v3135;
rt_int v3138;
rt_int c_3176;
rt_int c_3186;
rt_int c_3214;
rt_int c_3222;
};
struct yf1225 { void *up;
rt_int v3233;
rt_int v3235;
rt_int v3237;
rt_int v3239;
};
struct yf1230 { void *up;
unsigned char v3268;
rt_int v3270;
rt_int v3272;
rt_int v3274;
rt_int v3276;
rt_int v3278;
rt_int v3280;
rt_int v3282;
rt_int c_3355;
};
struct yf1248 { void *up;
rt_int p1246;
rt_int p1247;
void * v3371;
};
struct yf1256 { void *up;
void * * p1253;
void * * p1254;
void * p1255;
};
struct yf1262 { void *up;
void * p1261;
rt_int v3384;
void * v3387;
};
struct yf1267 { void *up;
};
struct yf1272 { void *up;
};
struct yf1277 { void *up;
};
struct yf1284 { void *up;
rt_int p1282;
rt_int p1283;
rt_int v3401;
};
struct yf1290 { void *up;
rt_int p1289;
};
struct yf1296 { void *up;
rt_int p1295;
};
struct yf1301 { void *up;
};
struct yf1307 { void *up;
rt_int p1306;
};
struct yf1312 { void *up;
rt_int v3424;
};
struct yf1318 { void *up;
rt_int p1317;
rt_int v3434;
};
struct yf1323 { void *up;
rt_int v3439;
};
struct yf1330 { void *up;
rt_int p1328;
rt_int p1329;
rt_int v3446;
};
struct yf1335 { void *up;
rt_int v3450;
};
struct yf1341 { void *up;
rt_int p1340;
void * v3460;
};
struct yf1346 { void *up;
void * v3467;
};
struct yf1351 { void *up;
void * v3472;
void * v3474;
void * v3476;
void * v3478;
rt_int v3480;
};
struct yf1356 { void *up;
rt_int v3489;
};
struct yf1361 { void *up;
void * v3495;
void * v3497;
void * v3499;
void * v3501;
};
struct yf1366 { void *up;
void * v3506;
void * v3508;
void * v3510;
void * v3512;
void * v3514;
};
struct yf1371 { void *up;
void * v3522;
void * v3524;
void * v3526;
};
struct yf1377 { void *up;
rt_int p1376;
void * v3532;
};
struct yf1383 { void *up;
rt_int p1382;
};
struct yf1390 { void *up;
void * * p1388;
void * * p1389;
rt_int v3553;
void * v3555;
void * v3557;
void * v3559;
};
struct yf1395 { void *up;
void * v3563;
void * v3565;
void * v3567;
rt_int v3569;
rt_int v3571;
rt_int v3573;
};
struct yf1401 { void *up;
void * p1400;
void * v3589;
void * v3591;
rt_int v3593;
};
struct yf1406 { void *up;
void * v3599;
};
struct yf1412 { void *up;
rt_int p1411;
rt_int v3611;
};
struct yf1417 { void *up;
rt_int v3619;
void * v3621;
};
struct yf1422 { void *up;
void * v3630;
void * v3632;
};
struct yf1427 { void *up;
void * v3636;
void * v3638;
void * v3640;
};
struct yf1432 { void *up;
void * v3645;
void * v3647;
void * v3649;
rt_int v3651;
};
struct yf1437 { void *up;
void * v3658;
void * v3660;
void * v3662;
void * v3664;
void * v3666;
void * v3668;
rt_int v3670;
rt_int v3672;
};
struct yf1442 { void *up;
void * v3689;
};
struct yf1447 { void *up;
rt_int v3694;
};
struct yf1453 { void *up;
rt_int p1452;
void * v3703;
void * v3705;
void * v3707;
rt_int v3709;
};
struct yf1458 { void *up;
void * v3717;
void * v3719;
void * v3721;
void * v3723;
void * v3725;
void * v3727;
rt_int v3729;
rt_int v3731;
};
struct yf1463 { void *up;
};
struct yf1469 { void *up;
rt_int p1468;
};
struct yf1475 { void *up;
rt_int p1474;
};
struct yf1481 { void *up;
rt_int p1480;
};
struct yf1487 { void *up;
rt_int p1486;
};
struct yf1493 { void *up;
rt_int p1492;
};
struct yf1502 { void *up;
rt_int p1498;
void * p1499;
void * p1500;
rt_int p1501;
void * v3785;
};
struct yf1509 { void *up;
rt_int p1507;
rt_int p1508;
rt_int v3791;
};
struct yf1514 { void *up;
void * v3795;
rt_int v3797;
rt_int v3799;
};
struct yf1519 { void *up;
void * v3803;
void * v3805;
rt_int v3807;
rt_int v3809;
};
struct yf1524 { void *up;
void * v3815;
rt_int v3817;
rt_int v3819;
};
struct yf1530 { void *up;
rt_int p1529;
rt_int v3825;
};
struct yf1535 { void *up;
void * v3830;
rt_int v3832;
rt_int v3834;
};
struct yf1540 { void *up;
void * v3838;
rt_int v3840;
rt_int v3842;
};
struct yf1545 { void *up;
void * v3863;
void * v3865;
void * v3867;
rt_int v3869;
};
struct yf1550 { void *up;
};
struct yf1555 { void *up;
void * v3876;
void * v3878;
};
struct yf1591 { void *up;
rt_int p1589;
rt_int p1590;
void * v3885;
};
struct yf1597 { void *up;
rt_int p1596;
void * v3900;
};
struct yf1602 { void *up;
void * v3906;
void * v3908;
void * v3910;
rt_int v3912;
};
struct yf1608 { void *up;
void * p1607;
};
struct yf1614 { void *up;
rt_int p1613;
void * v3924;
};
struct yf1620 { void *up;
rt_int p1619;
void * v3932;
};
struct yf1627 { void *up;
rt_int p1625;
rt_int p1626;
void * v3941;
void * v3943;
};
struct yf1633 { void *up;
void * p1632;
void * v3950;
};
struct yf1640 { void *up;
rt_int p1638;
void * p1639;
void * v3959;
};
struct yf1647 { void *up;
void * p1645;
rt_int p1646;
void * v3968;
rt_int v3970;
};
struct yf1654 { void *up;
rt_int p1652;
rt_int p1653;
rt_int v3978;
};
struct yf1660 { void *up;
rt_int p1659;
rt_int v3993;
};
struct yf1667 { void *up;
rt_int p1665;
rt_int p1666;
rt_int v4008;
};
struct yf1673 { void *up;
void * p1672;
rt_int v4017;
};
struct yf1679 { void *up;
void * p1678;
void * v4025;
};
struct yf1710 { void *up;
rt_int p1708;
rt_int p1709;
void * v4031;
};
struct yf1716 { void *up;
void * p1715;
void * v4056;
};
struct yf1722 { void *up;
void * p1721;
};
struct yf1728 { void *up;
void * p1727;
};
struct yf1734 { void *up;
void * p1733;
};
struct yf1740 { void *up;
void * p1739;
};
struct yf1746 { void *up;
void * p1745;
};
struct yf1752 { void *up;
void * p1751;
rt_int v4085;
};
struct yf1758 { void *up;
void * p1757;
rt_int v4110;
};
struct yf1764 { void *up;
void * p1763;
};
struct yf1771 { void *up;
void * p1769;
void * p1770;
};
struct yf1779 { void *up;
rt_int p1776;
void * p1777;
void * p1778;
rt_int v4153;
};
struct yf1787 { void *up;
rt_int p1784;
void * p1785;
void * p1786;
};
struct yf1794 { void *up;
void * p1792;
rt_int p1793;
};
struct yf1801 { void *up;
void * p1799;
void * p1800;
rt_int v4169;
rt_int v4171;
void * v4173;
void * v4175;
rt_int v4177;
rt_int v4179;
};
struct yf1807 { void *up;
void * p1806;
void * v4190;
void * v4192;
rt_int v4194;
};
struct yf1815 { void *up;
void * p1812;
rt_int p1813;
rt_int p1814;
};
struct yf1821 { void *up;
rt_int p1820;
rt_int v4208;
};
struct yf1829 { void *up;
void * p1826;
rt_int p1827;
rt_int p1828;
void * v4218;
void * v4220;
void * v4222;
void * v4224;
void * v4226;
rt_int v4228;
void * v4230;
rt_int v4232;
rt_int v4234;
};
struct yf1836 { void *up;
rt_int p1834;
void * p1835;
void * v4281;
void * v4283;
};
struct yf1841 { void *up;
void * v4287;
};
struct yf1847 { void *up;
void * p1846;
void * v4292;
rt_int v4294;
rt_int v4296;
};
struct yf1860 { void *up;
void * p1852;
void * * p1853;
rt_int p1854;
void * p1855;
rt_int p1856;
rt_int p1857;
void * p1858;
rt_int p1859;
void * v4321;
};
struct yf1871 { void *up;
void * p1865;
void * * p1866;
void * p1867;
rt_int p1868;
void * p1869;
rt_int p1870;
void * v4333;
void * v4335;
void * v4337;
};
struct yf1879 { void *up;
void * p1876;
void * p1877;
rt_int p1878;
void * v4345;
void * v4347;
void * v4349;
void * v4351;
rt_int v4353;
void * v4356;
rt_int v4358;
rt_int v4360;
};
struct yf1886 { void *up;
void * p1884;
rt_int p1885;
void * v4407;
};
struct yf2004 { void *up;
void * p2002;
rt_int p2003;
void * v4414;
rt_int v4416;
rt_int v4418;
rt_int v4420;
rt_int v4422;
rt_int c_4431;
};
struct yf2011 { void *up;
void * p2009;
void * p2010;
void * v4470;
};
struct yf2019 { void *up;
void * p2016;
rt_int p2017;
rt_int p2018;
rt_int v4481;
rt_int v4483;
};
struct yf2028 { void *up;
void * p2024;
rt_int p2025;
rt_int p2026;
rt_int * p2026_o;
rt_int p2027;
rt_int v4494;
rt_int v4496;
rt_int v4498;
ydesc yd_4505;
yarr v4507;
unsigned char v4509;
rt_int v4511;
rt_int c_4540;
};
struct yf2036 { void *up;
void * p2033;
rt_int p2034;
rt_int * p2034_o;
rt_int p2035;
rt_int * p2035_o;
void * v4575;
rt_int v4577;
rt_int v4579;
rt_int v4581;
rt_int v4583;
rt_int v4585;
void * v4587;
};
struct yf2044 { void *up;
rt_int p2041;
void * p2042;
void * p2043;
};
struct yf2054 { void *up;
rt_int p2049;
void * p2050;
rt_int p2051;
void * p2052;
rt_int p2053;
rt_int v4635;
rt_int v4637;
};
struct yf2060 { void *up;
void * p2059;
void * v4651;
void * v4653;
};
struct yf2068 { void *up;
void * p2065;
rt_int p2066;
rt_int * p2066_o;
void * p2067;
void * * p2067_o;
};
struct yf2074 { void *up;
rt_int p2073;
};
struct yf2081 { void *up;
void * p2079;
rt_int p2080;
void * v4683;
};
struct yf2087 { void *up;
void * p2086;
void * v4688;
};
struct yf2096 { void *up;
void * p2092;
void * p2093;
rt_int p2094;
rt_int * p2094_o;
void * p2095;
void * * p2095_o;
rt_int v4697;
void * v4699;
rt_int v4701;
rt_int v4703;
void * v4705;
void * v4707;
void * v4709;
rt_int v4711;
rt_int v4713;
};
struct yf2104 { void *up;
void * p2101;
void * p2102;
rt_int p2103;
void * v4754;
rt_int v4756;
rt_int v4758;
};
struct yf2113 { void *up;
void * p2109;
void * p2110;
rt_int p2111;
rt_int * p2111_o;
void * p2112;
void * * p2112_o;
void * v4770;
};
struct yf2121 { void *up;
void * p2118;
rt_int p2119;
rt_int * p2119_o;
void * p2120;
void * * p2120_o;
rt_int v4779;
rt_int v4781;
rt_int v4783;
void * v4785;
void * v4787;
void * v4789;
void * v4791;
rt_int v4793;
rt_int v4795;
};
struct yf2131 { void *up;
void * p2126;
rt_int p2127;
void * p2128;
rt_int p2129;
rt_int * p2129_o;
void * p2130;
void * * p2130_o;
};
struct yf2137 { void *up;
void * p2136;
void * v4830;
};
struct yf2146 { void *up;
yarr p2143;
rt_int p2144;
rt_int p2145;
};
struct yf2155 { void *up;
rt_int p2151;
yarr p2153;
rt_int p2154;
};
struct yf2164 { void *up;
rt_int p2160;
void * p2161;
rt_int p2162;
void * p2163;
rt_int v4858;
rt_int v4860;
void * v4862;
};
struct yf2170 { void *up;
void * p2169;
};
struct yf2179 { void *up;
void * p2175;
void * p2176;
rt_int p2177;
rt_int * p2177_o;
void * p2178;
void * * p2178_o;
rt_int v4892;
rt_int v4894;
rt_int v4896;
rt_int v4898;
void * v4900;
void * v4902;
void * v4904;
rt_int v4906;
};
struct yf2216 { void *up;
void * p2214;
void * p2215;
};
struct yf2224 { void *up;
void * p2221;
rt_int p2222;
rt_int p2223;
void * v4961;
void * v4963;
rt_int v4965;
rt_int v4967;
};
struct yf2230 { void *up;
void * p2229;
void * v4979;
};
struct yf2239 { void *up;
void * p2235;
void * p2236;
rt_int p2237;
rt_int * p2237_o;
rt_int p2238;
rt_int * p2238_o;
void * v4991;
void * v4993;
void * v4995;
};
struct yf2248 { void *up;
void * p2244;
rt_int p2245;
rt_int p2246;
rt_int p2247;
void * v5011;
rt_int v5013;
rt_int v5017;
};
struct yf2259 { void *up;
void * p2253;
rt_int p2254;
void * p2255;
void * p2256;
rt_int p2257;
rt_int * p2257_o;
void * p2258;
void * * p2258_o;
void * v5043;
void * v5045;
rt_int v5047;
rt_int v5049;
};
struct yf2269 { void *up;
void * p2264;
void * p2265;
rt_int p2266;
rt_int p2267;
rt_int * p2267_o;
void * p2268;
void * * p2268_o;
void * v5066;
void * v5068;
rt_int v5070;
rt_int v5072;
};
struct yf2278 { void *up;
void * p2274;
void * p2275;
rt_int p2276;
rt_int * p2276_o;
void * p2277;
void * * p2277_o;
void * v5084;
void * v5086;
rt_int v5088;
rt_int v5090;
rt_int v5092;
void * v5094;
rt_int v5096;
rt_int v5098;
rt_int v5100;
rt_int v5102;
rt_int v5104;
rt_int v5107;
void * v5109;
rt_int v5111;
};
struct yf2286 { void *up;
void * p2283;
rt_int p2284;
rt_int p2285;
void * v5173;
void * v5175;
rt_int v5177;
rt_int v5179;
};
struct yf2364 { void *up;
yarr p2362;
rt_int p2363;
rt_int v5188;
};
struct yf2374 { void *up;
yarr p2370;
rt_int p2371;
yarr p2373;
rt_int v5194;
};
struct yf2380 { void *up;
rt_int p2379;
};
struct yf2385 { void *up;
};
struct yf2391 { void *up;
rt_int p2390;
};
struct yf2397 { void *up;
void * p2396;
rt_int v5216;
rt_int v5218;
rt_int v5220;
void * v5222;
void * v5224;
rt_int v5226;
};
struct yf2403 { void *up;
void * p2402;
void * v5282;
};
struct yf2409 { void *up;
void * p2408;
rt_int v5286;
void * v5288;
};
struct yf2416 { void *up;
void * p2414;
void * p2415;
rt_int v5294;
rt_int v5296;
void * v5298;
void * v5300;
rt_int v5302;
};
struct yf2421 { void *up;
void * v5308;
rt_int v5310;
};
struct yf2427 { void *up;
void * p2426;
rt_int v5317;
rt_int v5319;
rt_int v5321;
rt_int v5323;
rt_int v5325;
rt_int v5327;
rt_int v5329;
void * v5331;
void * v5333;
void * v5335;
void * v5337;
rt_int v5339;
rt_int v5341;
rt_int v5343;
rt_int v5345;
void * v5347;
};
struct yf2433 { void *up;
void * p2432;
void * v5411;
rt_int v5413;
rt_int v5415;
rt_int v5417;
void * v5419;
};
struct yf2441 { void *up;
rt_int p2438;
rt_int p2439;
rt_int p2440;
};
struct yf2447 { void *up;
void * p2446;
rt_int v5451;
rt_int v5453;
rt_int v5455;
void * v5457;
void * v5459;
};
struct yf2453 { void *up;
void * p2452;
};
struct yf2459 { void *up;
rt_int p2458;
rt_int v5480;
rt_int v5482;
rt_int c_5487;
};
struct yf2465 { void *up;
void * p2464;
void * v5497;
rt_int v5499;
rt_int v5501;
};
struct yf2471 { void *up;
void * p2470;
rt_int v5518;
};
struct yf2478 { void *up;
void * p2476;
rt_int p2477;
void * v5526;
void * v5528;
void * v5530;
void * v5532;
void * v5534;
void * v5536;
void * v5538;
rt_int v5540;
rt_int v5542;
};
struct yf2485 { void *up;
void * p2483;
void * p2484;
void * v5585;
void * v5587;
void * v5589;
rt_int v5591;
};
struct yf2491 { void *up;
void * p2490;
void * v5599;
yR130 v5601;
yR130 v5603;
rt_int v5605;
rt_int v5607;
rt_int v5609;
rt_int v5611;
rt_int v5613;
rt_int v5615;
rt_int v5617;
void * v5619;
rt_int v5621;
void * v5623;
void * v5625;
rt_int v5627;
rt_int v5629;
yR130 v5631;
};
struct yf2499 { void *up;
void * p2496;
void * p2497;
rt_int p2498;
};
struct yf2505 { void *up;
void * p2504;
rt_int v5693;
void * v5695;
void * v5697;
void * v5699;
void * v5701;
rt_int v5703;
rt_int v5705;
rt_int v5707;
};
struct yf2512 { void *up;
void * p2510;
void * p2511;
};
struct yf2518 { void *up;
void * p2517;
void * v5723;
void * v5725;
void * v5727;
void * v5729;
};
struct yf2536 { void *up;
rt_int p2534;
void * p2535;
void * v5734;
};
struct yf2544 { void *up;
void * * p2541;
void * p2542;
rt_int p2543;
void * v5741;
void * v5743;
void * v5745;
};
struct yf2555 { void *up;
void * p2552;
void * * p2553;
rt_int p2554;
void * v5756;
void * v5758;
void * v5760;
rt_int v5762;
void * v5764;
rt_int v5766;
};
struct yf2562 { void *up;
void * p2560;
rt_int p2561;
void * v5791;
void * v5793;
void * v5795;
};
struct yf2568 { void *up;
void * p2567;
void * v5800;
void * v5802;
void * v5804;
void * v5806;
void * v5808;
void * v5810;
void * v5812;
void * v5814;
void * v5816;
void * v5818;
rt_int v5820;
rt_int v5822;
rt_int v5824;
};
struct yf2574 { void *up;
void * p2573;
void * v5857;
};
struct yf2580 { void *up;
void * p2579;
void * v5861;
void * v5863;
void * v5865;
void * v5867;
rt_int v5869;
rt_int v5871;
rt_int v5873;
rt_int v5875;
void * v5877;
rt_int c_5886;
};
struct yf2586 { void *up;
void * p2585;
void * v5898;
void * v5900;
};
struct yf2591 { void *up;
void * v5906;
};
struct yf2598 { void *up;
void * p2596;
void * p2597;
rt_int v5917;
rt_int v5919;
rt_int v5921;
void * v5923;
rt_int v5925;
rt_int v5927;
rt_int v5929;
rt_int v5931;
rt_int v5933;
rt_int v5935;
void * v5937;
void * v5939;
};
struct yf2604 { void *up;
void * p2603;
};
struct yf2610 { void *up;
void * p2609;
rt_int v5999;
};
struct yf2615 { void *up;
};
struct yf2621 { void *up;
void * p2620;
};
struct yf2628 { void *up;
void * p2626;
rt_int p2627;
};
struct yf2635 { void *up;
void * p2633;
void * p2634;
rt_int v6034;
rt_int v6036;
};
struct yf2642 { void *up;
void * p2640;
rt_int p2641;
void * v6042;
rt_int v6044;
};
struct yf2649 { void *up;
void * p2647;
rt_int p2648;
};
struct yf2657 { void *up;
yarr p2655;
rt_int p2656;
};
struct yf2663 { void *up;
rt_int p2662;
};
struct yf2672 { void *up;
void * p2668;
rt_int p2669;
rt_int p2670;
rt_int * p2670_o;
void * p2671;
void * * p2671_o;
rt_int v6071;
};
struct yf2680 { void *up;
void * p2677;
rt_int p2678;
rt_int * p2678_o;
void * p2679;
void * * p2679_o;
};
struct yf2686 { void *up;
void * p2685;
rt_int v6087;
void * v6089;
};
struct yf2692 { void *up;
void * p2691;
void * v6095;
rt_int v6098;
rt_int v6100;
rt_int v6102;
rt_int v6104;
rt_int v6106;
rt_int v6108;
unsigned char v6110;
void * v6112;
ydesc yd_6119;
yarr v6121;
};
struct yf2702 { void *up;
rt_int p2697;
void * p2698;
rt_int p2699;
rt_int p2700;
rt_int * p2700_o;
void * p2701;
void * * p2701_o;
rt_int v6160;
rt_int v6162;
rt_int v6164;
rt_int v6166;
rt_int v6168;
void * v6170;
void * v6172;
void * v6174;
void * v6176;
rt_int v6178;
rt_int v6180;
rt_int v6182;
rt_int v6184;
void * v6186;
rt_int v6188;
rt_int c_6202;
};
struct yf2714 { void *up;
yarr p2712;
void * p2713;
void * v6376;
};
struct yf2722 { void *up;
yarr p2720;
rt_int p2721;
void * v6382;
};
struct yf2732 { void *up;
yarr p2728;
yarr p2729;
yarr p2730;
rt_int p2731;
void * v6390;
void * v6392;
void * v6394;
};
struct yf2740 { void *up;
rt_int p2737;
yarr p2739;
void * v6403;
};
struct yf2745 { void *up;
};
struct yf2750 { void *up;
void * v6483;
};
struct yf2755 { void *up;
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
static rt_int v876;
static yfile * v879;
static yfile * v881;
static yarr v883;
static rt_int v885;
static yarr v888;
static yarr v890;
static rt_int v892;
static yarr v895;
static rt_int v897;
static ydesc yd_905;
static yarr v907;
static rt_int v909;
static ydesc yd_917;
static yarr v919;
static rt_int v921;
static rt_int v924;
static ydesc yd_929;
static yarr v931;
static ydesc yd_938;
static yarr v940;
static yR130 v942;
static yR130 v944;
static yR130 v946;
static yR130 v948;
static yR130 v950;
static yR130 v952;
static yR130 v954;
static yR130 v956;
static yR130 v958;
static rt_int v960;
static yarr v1153;
static yarr v1155;
static yarr v1157;
static rt_int v1159;
static rt_int v1162;
static rt_int v1165;
static rt_int v1168;
static rt_int v1171;
static rt_int v1174;
static rt_int v1234;
static void * v1237;
static rt_int v1239;
static rt_int v1242;
static yarr v1559;
static ydesc yd_1566;
static yarr v1568;
static rt_int v1570;
static rt_int v1573;
static rt_int v1576;
static ydesc yd_1584;
static yarr v1586;
static void * v1683;
static void * v1685;
static void * v1687;
static void * v1689;
static void * v1691;
static void * v1693;
static void * v1695;
static void * v1697;
static void * v1699;
static void * v1701;
static void * v1703;
static void * v1705;
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
static rt_int v1998;
static ydesc yd_2188;
static yarr v2190;
static ydesc yd_2197;
static yarr v2199;
static ydesc yd_2206;
static yarr v2208;
static rt_int v2210;
static ydesc yd_2295;
static yarr v2297;
static rt_int v2299;
static rt_int v2302;
static ydesc yd_2310;
static yarr v2312;
static rt_int v2314;
static ydesc yd_2322;
static yarr v2324;
static rt_int v2326;
static ydesc yd_2334;
static yarr v2336;
static yarr v2338;
static ydesc yd_2345;
static yarr v2347;
static rt_int v2349;
static rt_int v2352;
static void * v2355;
static rt_int v2357;
static void * v2522;
static ydesc yd_2529;
static yarr v2531;
static rt_int v2548;
static void * v2706;
static void * v2708;
static void yr963_InitChars(void);
static rt_int yr968_IsLetter(unsigned char a_p969);
static rt_int yr974_IsDigit(unsigned char a_p975);
static void yr980_PoolAdd(unsigned char a_p981);
static void yr986_SB(void);
static void yr991_SC(unsigned char a_p992);
static void yr997_SA(yarr a_p999);
static void yr1004_ST(rt_int a_p1005);
static void yr1010_SI(rt_int a_p1011);
static rt_int yr1016_SE(void);
static rt_int yr1021_T(yarr a_p1023);
static rt_int yr1028_Intern(rt_int a_p1029, rt_int a_p1030);
static rt_int yr1035_Name(rt_int a_p1036);
static rt_int yr1041_N(yarr a_p1043);
static rt_int yr1048_TEq(rt_int a_p1049, rt_int a_p1050);
static rt_int yr1055_TStarts(rt_int a_p1056, yarr a_p1058);
static unsigned char yr1063_TChar(rt_int a_p1064, rt_int a_p1065);
static void yr1070_Put(yR130 * a_p1071, rt_int a_p1072);
static void yr1077_PutS(yR130 * a_p1078, yarr a_p1080);
static void yr1085_Append(yR130 * a_p1086, yR130 * a_p1087);
static void yr1092_Emit(rt_int a_p1093);
static void yr1098_EmitS(yarr a_p1100);
static void yr1105_WriteTxt(rt_int a_p1106);
static void yr1111_WriteBuf(yR130 a_p1112);
static void yr1117_Fail(rt_int a_p1118, rt_int a_p1119);
static void yr1124_FailS(rt_int a_p1125, yarr a_p1127);
static void yr1132_FailN(rt_int a_p1133, rt_int a_p1134, yarr a_p1136);
static rt_int yr1141_NewSerial(void);
static rt_int yr1146_Fresh(yarr a_p1148);
static void yr1177_InitWords(void);
static void yr1182_ReadSource(void);
static void yr1187_AddTok(rt_int a_p1188, rt_int a_p1189);
static unsigned char yr1194_At(rt_int a_p1195);
static rt_int yr1200_EndsOperand(void);
static rt_int yr1205_DigitVal(unsigned char a_p1206);
static void yr1211_LexError(yarr a_p1213);
static void yr1218_LexNumber(rt_int a_p1219);
static void yr1224_LexString(void);
static void yr1229_Lex(void);
static void * yr1245_NewNode(rt_int a_p1246, rt_int a_p1247);
static void yr1252_Link(void * * a_p1253, void * * a_p1254, void * a_p1255);
static rt_int yr1260_Count(void * a_p1261);
static rt_int yr1266_TK(void);
static rt_int yr1271_TV(void);
static rt_int yr1276_TLn(void);
static rt_int yr1281_IsAt(rt_int a_p1282, rt_int a_p1283);
static rt_int yr1288_Is(rt_int a_p1289);
static rt_int yr1294_IsIdAt(rt_int a_p1295);
static void yr1300_Skip(void);
static rt_int yr1305_Accept(rt_int a_p1306);
static rt_int yr1311_TokText(void);
static void yr1316_Expect(rt_int a_p1317);
static rt_int yr1322_Ident(void);
static void yr1327_CloseName(rt_int a_p1328, rt_int a_p1329);
static rt_int yr1334_ExtendedId(void);
static rt_int yr1339_IsLabel(rt_int a_p1340);
static void * yr1345_ImportItem(void);
static void * yr1350_ParseModule(void);
static rt_int yr1355_IsDeclWord(void);
static void * yr1360_ParseBlock(void);
static void * yr1365_ParseHandler(void);
static void * yr1370_ParseNames(void);
static void * yr1375_SimpleEntry(rt_int a_p1376);
static rt_int yr1381_Continues(rt_int a_p1382);
static void yr1387_ParseDeclGroup(void * * a_p1388, void * * a_p1389);
static void * yr1394_ParseDecl(void);
static void yr1399_ParseFormals(void * a_p1400);
static void * yr1405_ParseFormalRep(void);
static rt_int yr1410_IsStructWord(rt_int a_p1411);
static void * yr1416_ParseRep(void);
static void * yr1421_ParseConcrete(void);
static void * yr1426_ParseIds(void);
static void * yr1431_ParseFieldGroups(void);
static void * yr1436_ParseConcrete1(void);
static void * yr1441_ParseQualifier(void);
static rt_int yr1446_IsStop(void);
static void * yr1451_ParseStatements(rt_int a_p1452);
static void * yr1457_ParseStatement(void);
static rt_int yr1462_OpAt(void);
static rt_int yr1467_IsRel(rt_int a_p1468);
static rt_int yr1473_IsAssocMul(rt_int a_p1474);
static rt_int yr1479_IsNonAssocMul(rt_int a_p1480);
static rt_int yr1485_IsAssocAdd(rt_int a_p1486);
static rt_int yr1491_IsNonAssocAdd(rt_int a_p1492);
static void * yr1497_Bin(rt_int a_p1498, void * a_p1499, void * a_p1500, rt_int a_p1501);
static void yr1506_NeedParens(rt_int a_p1507, rt_int a_p1508);
static void * yr1513_ParseExpr(void);
static void * yr1518_ParseSimple(void);
static void * yr1523_ParseTerm(void);
static rt_int yr1528_IsLiteralAt(rt_int a_p1529);
static void * yr1534_ParseLiteral(void);
static void * yr1539_ParseFactor(void);
static void * yr1544_ParseDesignator(void);
static void yr1549_EXIT_ARGS(void);
static void * yr1554_ParseProgram(void);
static void * yr1588_NewSym(rt_int a_p1589, rt_int a_p1590);
static void yr1595_OpenScope(rt_int a_p1596);
static void yr1601_CloseScope(void);
static rt_int yr1606_Visible(void * a_p1607);
static void * yr1612_Find(rt_int a_p1613);
static void * yr1618_FindHere(rt_int a_p1619);
static void * yr1624_Lookup(rt_int a_p1625, rt_int a_p1626);
static rt_int yr1631_Ambiguous(void * a_p1632);
static void * yr1637_FindLit(rt_int a_p1638, void * a_p1639);
static void yr1644_Define(void * a_p1645, rt_int a_p1646);
static rt_int yr1651_Path(rt_int a_p1652, rt_int a_p1653);
static rt_int yr1658_FramePtr(rt_int a_p1659);
static void yr1664_DeclStorage(rt_int a_p1665, rt_int a_p1666);
static rt_int yr1671_SymPath(void * a_p1672);
static void * yr1677_Real(void * a_p1678);
static void * yr1707_NewRep(rt_int a_p1708, rt_int a_p1709);
static void * yr1714_CopyRep(void * a_p1715);
static rt_int yr1720_IsDiscrete(void * a_p1721);
static rt_int yr1726_IsNumeric(void * a_p1727);
static rt_int yr1732_IsArrayLike(void * a_p1733);
static rt_int yr1738_IsString(void * a_p1739);
static rt_int yr1744_Deep(void * a_p1745);
static rt_int yr1750_CType(void * a_p1751);
static rt_int yr1756_DescOf(void * a_p1757);
static void yr1762_NewDesc(void * a_p1763);
static rt_int yr1768_SameType(void * a_p1769, void * a_p1770);
static void yr1775_TypeClash(rt_int a_p1776, void * a_p1777, void * a_p1778);
static void yr1783_CheckType(rt_int a_p1784, void * a_p1785, void * a_p1786);
static void yr1791_CheckRepresented(void * a_p1792, rt_int a_p1793);
static void yr1798_Qualify(void * a_p1799, void * a_p1800);
static void yr1805_DefineLits(void * a_p1806);
static void yr1811_SetRange(void * a_p1812, rt_int a_p1813, rt_int a_p1814);
static rt_int yr1819_NewTid(rt_int a_p1820);
static void * yr1825_MakeRep(void * a_p1826, rt_int a_p1827, rt_int a_p1828);
static void yr1833_ResolvePending(rt_int a_p1834, void * a_p1835);
static void yr1840_CheckPending(void);
static void yr1845_BuildArrayDesc(void * a_p1846);
static void yr1851_AddField(void * a_p1852, void * * a_p1853, rt_int a_p1854, void * a_p1855, rt_int a_p1856, rt_int a_p1857, void * a_p1858, rt_int a_p1859);
static void yr1864_AddFields(void * a_p1865, void * * a_p1866, void * a_p1867, rt_int a_p1868, void * a_p1869, rt_int a_p1870);
static void yr1875_MakeRecord(void * a_p1876, void * a_p1877, rt_int a_p1878);
static void * yr1883_FindField(void * a_p1884, rt_int a_p1885);
static rt_int yr2001_CharOrd(void * a_p2002, rt_int a_p2003);
static void * yr2008_AlphabetFor(void * a_p2009, void * a_p2010);
static rt_int yr2015_CharValue(void * a_p2016, rt_int a_p2017, rt_int a_p2018);
static rt_int yr2023_StringCodes(void * a_p2024, rt_int a_p2025, rt_int * a_p2026, rt_int a_p2027);
static void yr2032_Manifest(void * a_p2033, rt_int * a_p2034, rt_int * a_p2035);
static rt_int yr2040_Convert(rt_int a_p2041, void * a_p2042, void * a_p2043);
static void yr2048_Store(rt_int a_p2049, void * a_p2050, rt_int a_p2051, void * a_p2052, rt_int a_p2053);
static rt_int yr2058_IsVariable(void * a_p2059);
static void yr2064_LValue(void * a_p2065, rt_int * a_p2066, void * * a_p2067);
static rt_int yr2072_Paren(rt_int a_p2073);
static void * yr2078_Lit(void * a_p2079, rt_int a_p2080);
static void * yr2085_Qualifier(void * a_p2086);
static void yr2091_Expr(void * a_p2092, void * a_p2093, rt_int * a_p2094, void * * a_p2095);
static rt_int yr2100_VariantTest(void * a_p2101, void * a_p2102, rt_int a_p2103);
static void yr2108_NameExpr(void * a_p2109, void * a_p2110, rt_int * a_p2111, void * * a_p2112);
static void yr2117_IndexExpr(void * a_p2118, rt_int * a_p2119, void * * a_p2120);
static void yr2125_NegExpr(void * a_p2126, rt_int a_p2127, void * a_p2128, rt_int * a_p2129, void * * a_p2130);
static void * yr2135_Unbounded(void * a_p2136);
static rt_int yr2141_Call2(yarr a_p2143, rt_int a_p2144, rt_int a_p2145);
static rt_int yr2150_Infix(rt_int a_p2151, yarr a_p2153, rt_int a_p2154);
static rt_int yr2159_EqCode(rt_int a_p2160, void * a_p2161, rt_int a_p2162, void * a_p2163);
static rt_int yr2168_IsOrdered(void * a_p2169);
static void yr2174_BinExpr(void * a_p2175, void * a_p2176, rt_int * a_p2177, void * * a_p2178);
static rt_int yr2213_Fits(void * a_p2214, void * a_p2215);
static void * yr2220_Choose(void * a_p2221, rt_int a_p2222, rt_int a_p2223);
static rt_int yr2228_HidesStandard(void * a_p2229);
static void yr2234_CompileArgs(void * a_p2235, void * a_p2236, rt_int * a_p2237, rt_int * a_p2238);
static rt_int yr2243_CallCode(void * a_p2244, rt_int a_p2245, rt_int a_p2246, rt_int a_p2247);
static rt_int yr2252_UserOp(void * a_p2253, rt_int a_p2254, void * a_p2255, void * a_p2256, rt_int * a_p2257, void * * a_p2258);
static void yr2263_CallExpr(void * a_p2264, void * a_p2265, rt_int a_p2266, rt_int * a_p2267, void * * a_p2268);
static void yr2273_Denote(void * a_p2274, void * a_p2275, rt_int * a_p2276, void * * a_p2277);
static rt_int yr2282_VariantOf(void * a_p2283, rt_int a_p2284, rt_int a_p2285);
static void yr2360_Emit2(yarr a_p2362, rt_int a_p2363);
static void yr2368_Emit3(yarr a_p2370, rt_int a_p2371, yarr a_p2373);
static void yr2378_PopTo(rt_int a_p2379);
static void yr2384_LeaveBlock(void);
static rt_int yr2389_RaiseCode(rt_int a_p2390);
static void yr2395_BlockStatements(void * a_p2396);
static void yr2401_Statements(void * a_p2402);
static rt_int yr2407_Cond(void * a_p2408);
static rt_int yr2413_Label(void * a_p2414, void * a_p2415);
static void yr2420_CopyOut(void);
static void yr2425_Statement(void * a_p2426);
static void yr2431_ForStatement(void * a_p2432);
static rt_int yr2437_Join(rt_int a_p2438, rt_int a_p2439, rt_int a_p2440);
static void yr2445_ReturnStatement(void * a_p2446);
static void yr2451_BeginStatement(void * a_p2452);
static rt_int yr2457_RoutineCName(rt_int a_p2458);
static void * yr2463_FormalRep(void * a_p2464);
static rt_int yr2469_ParamCType(void * a_p2470);
static void yr2475_RoutineHeader(void * a_p2476, rt_int a_p2477);
static void * yr2482_SameSignature(void * a_p2483, void * a_p2484);
static void yr2489_RoutineBody(void * a_p2490);
static void yr2495_DeclareStorage(void * a_p2496, void * a_p2497, rt_int a_p2498);
static void yr2503_SimpleDecl(void * a_p2504);
static void yr2509_AtLocation(void * a_p2510, void * a_p2511);
static void yr2516_Declarations(void * a_p2517);
static void * yr2533_Alias(rt_int a_p2534, void * a_p2535);
static void yr2540_AddLits(void * * a_p2541, void * a_p2542, rt_int a_p2543);
static void yr2551_ResolveItem(void * a_p2552, void * * a_p2553, rt_int a_p2554);
static void yr2559_DefineAll(void * a_p2560, rt_int a_p2561);
static void yr2566_CompileModule(void * a_p2567);
static void yr2572_DeclareTemplate(void * a_p2573);
static void yr2578_Instantiate(void * a_p2579);
static void yr2584_DeclareProcess(void * a_p2585);
static void yr2590_AwaitProcesses(void);
static void yr2595_Activate(void * a_p2596, void * a_p2597);
static rt_int yr2602_MonitorPath(void * a_p2603);
static void yr2608_EnterMonitor(void * a_p2609);
static void yr2614_LeaveMonitor(void);
static void yr2619_TerminateStatement(void * a_p2620);
static void yr2625_DeclareSignal(void * a_p2626, rt_int a_p2627);
static void yr2632_DeviceSignal(void * a_p2633, void * a_p2634);
static void * yr2639_Arg(void * a_p2640, rt_int a_p2641);
static void yr2646_NArgs(void * a_p2647, rt_int a_p2648);
static rt_int yr2653_Call1(yarr a_p2655, rt_int a_p2656);
static rt_int yr2661_Addr(rt_int a_p2662);
static void yr2667_StdVar(void * a_p2668, rt_int a_p2669, rt_int * a_p2670, void * * a_p2671);
static void yr2676_NumArg(void * a_p2677, rt_int * a_p2678, void * * a_p2679);
static rt_int yr2684_IntArg(void * a_p2685);
static void yr2690_CodeInsert(void * a_p2691);
static void yr2696_StdCall(rt_int a_p2697, void * a_p2698, rt_int a_p2699, rt_int * a_p2700, void * * a_p2701);
static void yr2710_StdRep(yarr a_p2712, void * a_p2713);
static void yr2718_StdOp(yarr a_p2720, rt_int a_p2721);
static void * yr2726_LitList(yarr a_p2728, yarr a_p2729, yarr a_p2730, rt_int a_p2731);
static void * yr2736_Abstract(rt_int a_p2737, yarr a_p2739);
static void yr2744_Predefine(void);
static void yr2749_Translate(void);
static void yr2754_WriteProgram(void);
static void yr963_InitChars(void) {
struct yf964 F;
memset((void *)&F, 0, sizeof F);
F.v2759 = INT64_C(0);
{ rt_int hi2764 = 127;
for (rt_int i2763 = 0; i2763 <= hi2764; i2763++) { F.c_2762 = i2763;
((rt_int *)(v931).p)[y_ix1(v931, F.c_2762)] = F.v2759;
((unsigned char *)(v940).p)[y_ix1(v940, F.v2759)] = F.c_2762;
F.v2759 = rt_range(rt_add(F.v2759, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i2763 == hi2764) break;
}}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr968_IsLetter(unsigned char a_p969) {
struct yf970 F;
memset((void *)&F, 0, sizeof F);
F.p969 = a_p969;
{ rt_int rv2774 = ((((((F.p969 >= 65)) && ((F.p969 <= 90)))) || ((((F.p969 >= 97)) && ((F.p969 <= 122))))) || ((F.p969 == 95)));
return rv2774; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr974_IsDigit(unsigned char a_p975) {
struct yf976 F;
memset((void *)&F, 0, sizeof F);
F.p975 = a_p975;
{ rt_int rv2779 = (((F.p975 >= 48)) && ((F.p975 <= 57)));
return rv2779; }
rt_raise(Y_X_NO_RETURN);
}
static void yr980_PoolAdd(unsigned char a_p981) {
struct yf982 F;
memset((void *)&F, 0, sizeof F);
F.p981 = a_p981;
v885 = rt_range(rt_add(v885, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((unsigned char *)(v883).p)[y_ix1(v883, v885)] = F.p981;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr986_SB(void) {
struct yf987 F;
memset((void *)&F, 0, sizeof F);
v921 = rt_range(rt_add(v921, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v919).p)[y_ix1(v919, v921)] = v909;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr991_SC(unsigned char a_p992) {
struct yf993 F;
memset((void *)&F, 0, sizeof F);
F.p992 = a_p992;
v909 = rt_range(rt_add(v909, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((unsigned char *)(v907).p)[y_ix1(v907, v909)] = F.p992;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr997_SA(yarr a_p999) {
struct yf1000 F;
memset((void *)&F, 0, sizeof F);
F.p999 = a_p999;
{ rt_int hi2801 = y_high(F.p999, INT64_C(1));
for (rt_int i2800 = y_low(F.p999, INT64_C(1)); i2800 <= hi2801; i2800++) { F.c_2799 = i2800;
yr991_SC(((unsigned char *)(F.p999).p)[y_ix1(F.p999, F.c_2799)]);
if (i2800 == hi2801) break;
}}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1004_ST(rt_int a_p1005) {
struct yf1006 F;
memset((void *)&F, 0, sizeof F);
F.p1005 = a_p1005;
if ((F.p1005 == INT64_C(0))) {
return;
}
F.v2805 = ((rt_int *)(v888).p)[y_ix1(v888, F.p1005)];
while ((F.v2805 < (rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1005)], ((rt_int *)(v890).p)[y_ix1(v890, F.p1005)])))) {
yr991_SC(((unsigned char *)(v883).p)[y_ix1(v883, F.v2805)]);
F.v2805 = rt_range(rt_add(F.v2805, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1010_SI(rt_int a_p1011) {
struct yf1012 F;
memset((void *)&F, 0, sizeof F);
F.p1011 = a_p1011;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(24)}; y_desc_array(&F.yd_2818, 1, lo, hi, &y_d_byte); }
y_init(&F.yd_2818, &F.v2820);
F.v2822 = INT64_C(0);
F.v2825 = F.p1011;
if ((F.v2825 < INT64_C(0))) {
yr991_SC(45);
F.v2825 = rt_range(rt_neg(F.v2825), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
for (;;) {
F.v2822 = rt_range(rt_add(F.v2822, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((unsigned char *)(F.v2820).p)[y_ix1(F.v2820, F.v2822)] = ((unsigned char *)(v940).p)[y_ix1(v940, rt_add((rt_mod(F.v2825, INT64_C(10))), INT64_C(48)))];
F.v2825 = rt_range(rt_div(F.v2825, INT64_C(10)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.v2825 == INT64_C(0))) {
goto yl_2829;
}
}
yl_2829: ;
while ((F.v2822 > INT64_C(0))) {
yr991_SC(((unsigned char *)(F.v2820).p)[y_ix1(F.v2820, F.v2822)]);
F.v2822 = rt_range(rt_sub(F.v2822, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1016_SE(void) {
struct yf1017 F;
memset((void *)&F, 0, sizeof F);
F.v2844 = ((rt_int *)(v919).p)[y_ix1(v919, v921)];
v921 = rt_range(rt_sub(v921, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v892 = rt_range(rt_add(v892, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v888).p)[y_ix1(v888, v892)] = rt_range(rt_add(v885, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v890).p)[y_ix1(v890, v892)] = rt_range(rt_sub(v909, F.v2844), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
{ rt_int hi2858 = v909;
for (rt_int i2857 = rt_add(F.v2844, INT64_C(1)); i2857 <= hi2858; i2857++) { F.c_2856 = i2857;
yr980_PoolAdd(((unsigned char *)(v907).p)[y_ix1(v907, F.c_2856)]);
if (i2857 == hi2858) break;
}}
v909 = F.v2844;
{ rt_int rv2859 = rt_range(v892, INT64_C(0), INT64_C(4000000));
return rv2859; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1021_T(yarr a_p1023) {
struct yf1024 F;
memset((void *)&F, 0, sizeof F);
F.p1023 = a_p1023;
yr986_SB();
yr997_SA(F.p1023);
{ rt_int rv2862 = yr1016_SE();
return rv2862; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1028_Intern(rt_int a_p1029, rt_int a_p1030) {
struct yf1031 F;
memset((void *)&F, 0, sizeof F);
F.p1029 = a_p1029;
F.p1030 = a_p1030;
F.v2867 = INT64_C(0);
{ rt_int hi2880 = rt_sub((rt_add(F.p1029, F.p1030)), INT64_C(1));
for (rt_int i2879 = F.p1029; i2879 <= hi2880; i2879++) { F.c_2878 = i2879;
F.v2867 = rt_range(rt_mod((rt_add((rt_mul(F.v2867, INT64_C(31))), ((rt_int *)(v931).p)[y_ix1(v931, ((unsigned char *)(v883).p)[y_ix1(v883, F.c_2878)])])), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i2879 == hi2880) break;
}}
for (;;) {
if ((((rt_int *)(v895).p)[y_ix1(v895, F.v2867)] == INT64_C(0))) {
v892 = rt_range(rt_add(v892, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v888).p)[y_ix1(v888, v892)] = F.p1029;
((rt_int *)(v890).p)[y_ix1(v890, v892)] = F.p1030;
((rt_int *)(v895).p)[y_ix1(v895, F.v2867)] = rt_range(v892, INT64_C(0), INT64_C(4000000));
{ rt_int rv2890 = rt_range(v892, INT64_C(0), INT64_C(4000000));
return rv2890; }
}
F.v2870 = ((rt_int *)(v895).p)[y_ix1(v895, F.v2867)];
if ((((rt_int *)(v890).p)[y_ix1(v890, F.v2870)] == F.p1030)) {
F.v2872 = 1;
{ rt_int hi2899 = rt_sub(F.p1030, INT64_C(1));
for (rt_int i2898 = INT64_C(0); i2898 <= hi2899; i2898++) { F.c_2897 = i2898;
if ((!(((unsigned char *)(v883).p)[y_ix1(v883, rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.v2870)], F.c_2897))] == ((unsigned char *)(v883).p)[y_ix1(v883, rt_add(F.p1029, F.c_2897))]))) {
F.v2872 = 0;
}
if (i2898 == hi2899) break;
}}
if (F.v2872) {
{ rt_int rv2903 = rt_range(F.v2870, INT64_C(0), INT64_C(4000000));
return rv2903; }
}
}
F.v2867 = rt_range(rt_mod((rt_add(F.v2867, INT64_C(1))), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yl_2886: ;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1035_Name(rt_int a_p1036) {
struct yf1037 F;
memset((void *)&F, 0, sizeof F);
F.p1036 = a_p1036;
{ rt_int rv2910 = yr1028_Intern(((rt_int *)(v888).p)[y_ix1(v888, F.p1036)], ((rt_int *)(v890).p)[y_ix1(v890, F.p1036)]);
return rv2910; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1041_N(yarr a_p1043) {
struct yf1044 F;
memset((void *)&F, 0, sizeof F);
F.p1043 = a_p1043;
{ rt_int rv2913 = yr1035_Name(yr1021_T(F.p1043));
return rv2913; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1048_TEq(rt_int a_p1049, rt_int a_p1050) {
struct yf1051 F;
memset((void *)&F, 0, sizeof F);
F.p1049 = a_p1049;
F.p1050 = a_p1050;
if ((F.p1049 == F.p1050)) {
{ rt_int rv2918 = 1;
return rv2918; }
}
if ((!(((rt_int *)(v890).p)[y_ix1(v890, F.p1049)] == ((rt_int *)(v890).p)[y_ix1(v890, F.p1050)]))) {
{ rt_int rv2920 = 0;
return rv2920; }
}
{ rt_int hi2928 = rt_sub(((rt_int *)(v890).p)[y_ix1(v890, F.p1049)], INT64_C(1));
for (rt_int i2927 = INT64_C(0); i2927 <= hi2928; i2927++) { F.c_2926 = i2927;
if ((!(((unsigned char *)(v883).p)[y_ix1(v883, rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1049)], F.c_2926))] == ((unsigned char *)(v883).p)[y_ix1(v883, rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1050)], F.c_2926))]))) {
{ rt_int rv2932 = 0;
return rv2932; }
}
if (i2927 == hi2928) break;
}}
{ rt_int rv2934 = 1;
return rv2934; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1055_TStarts(rt_int a_p1056, yarr a_p1058) {
struct yf1059 F;
memset((void *)&F, 0, sizeof F);
F.p1056 = a_p1056;
F.p1058 = a_p1058;
F.v2939 = INT64_C(0);
if ((((rt_int *)(v890).p)[y_ix1(v890, F.p1056)] < (rt_add((rt_sub(y_high(F.p1058, INT64_C(1)), y_low(F.p1058, INT64_C(1)))), INT64_C(1))))) {
{ rt_int rv2949 = 0;
return rv2949; }
}
{ rt_int hi2958 = y_high(F.p1058, INT64_C(1));
for (rt_int i2957 = y_low(F.p1058, INT64_C(1)); i2957 <= hi2958; i2957++) { F.c_2956 = i2957;
if ((!(((unsigned char *)(v883).p)[y_ix1(v883, rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1056)], F.v2939))] == ((unsigned char *)(F.p1058).p)[y_ix1(F.p1058, F.c_2956)]))) {
{ rt_int rv2961 = 0;
return rv2961; }
}
F.v2939 = rt_range(rt_add(F.v2939, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i2957 == hi2958) break;
}}
{ rt_int rv2965 = 1;
return rv2965; }
rt_raise(Y_X_NO_RETURN);
}
static unsigned char yr1063_TChar(rt_int a_p1064, rt_int a_p1065) {
struct yf1066 F;
memset((void *)&F, 0, sizeof F);
F.p1064 = a_p1064;
F.p1065 = a_p1065;
{ unsigned char rv2972 = ((unsigned char *)(v883).p)[y_ix1(v883, rt_sub((rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1064)], F.p1065)), INT64_C(1)))];
return rv2972; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1070_Put(yR130 * a_p1071, rt_int a_p1072) {
struct yf1073 F;
memset((void *)&F, 0, sizeof F);
F.p1071 = a_p1071;
F.p1072 = a_p1072;
({ F.v2977 = rt_alloc(sizeof(yR125)); });
(*(yR125 *)rt_nil_check(F.v2977)) = ((yR125){ .f_t = F.p1072, .f_next = ((void *)0) });
if ((((*F.p1071)).f_head == ((void *)0))) {
((*F.p1071)).f_head = F.v2977;
} else {
((*(yR125 *)rt_nil_check(((*F.p1071)).f_tail))).f_next = F.v2977;
}
((*F.p1071)).f_tail = F.v2977;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1077_PutS(yR130 * a_p1078, yarr a_p1080) {
struct yf1081 F;
memset((void *)&F, 0, sizeof F);
F.p1078 = a_p1078;
F.p1080 = a_p1080;
yr1070_Put(&(*F.p1078), yr1021_T(F.p1080));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1085_Append(yR130 * a_p1086, yR130 * a_p1087) {
struct yf1088 F;
memset((void *)&F, 0, sizeof F);
F.p1086 = a_p1086;
F.p1087 = a_p1087;
if ((((*F.p1087)).f_head == ((void *)0))) {
return;
}
if ((((*F.p1086)).f_head == ((void *)0))) {
((*F.p1086)).f_head = ((*F.p1087)).f_head;
} else {
((*(yR125 *)rt_nil_check(((*F.p1086)).f_tail))).f_next = ((*F.p1087)).f_head;
}
((*F.p1086)).f_tail = ((*F.p1087)).f_tail;
((*F.p1087)).f_head = ((void *)0);
((*F.p1087)).f_tail = ((void *)0);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1092_Emit(rt_int a_p1093) {
struct yf1094 F;
memset((void *)&F, 0, sizeof F);
F.p1093 = a_p1093;
yr1070_Put(&v956, F.p1093);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1098_EmitS(yarr a_p1100) {
struct yf1101 F;
memset((void *)&F, 0, sizeof F);
F.p1100 = a_p1100;
yr1070_Put(&v956, yr1021_T(F.p1100));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1105_WriteTxt(rt_int a_p1106) {
struct yf1107 F;
memset((void *)&F, 0, sizeof F);
F.p1106 = a_p1106;
F.v2991 = ((rt_int *)(v888).p)[y_ix1(v888, F.p1106)];
while ((F.v2991 < (rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1106)], ((rt_int *)(v890).p)[y_ix1(v890, F.p1106)])))) {
({ unsigned char pv = ((unsigned char *)(v883).p)[y_ix1(v883, F.v2991)]; y_put(&v881, &pv, sizeof pv); });
F.v2991 = rt_range(rt_add(F.v2991, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1111_WriteBuf(yR130 a_p1112) {
struct yf1113 F;
memset((void *)&F, 0, sizeof F);
F.p1112 = a_p1112;
F.v2998 = (F.p1112).f_head;
while ((!(F.v2998 == ((void *)0)))) {
yr1105_WriteTxt(((*(yR125 *)rt_nil_check(F.v2998))).f_t);
({ unsigned char pv = 10; y_put(&v881, &pv, sizeof pv); });
F.v2998 = ((*(yR125 *)rt_nil_check(F.v2998))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1117_Fail(rt_int a_p1118, rt_int a_p1119) {
struct yf1120 F;
memset((void *)&F, 0, sizeof F);
F.p1118 = a_p1118;
F.p1119 = a_p1119;
v921 = INT64_C(0);
v909 = INT64_C(0);
yr986_SB();
yr997_SA(y_str("line ", 5));
yr1010_SI(F.p1118);
yr997_SA(y_str(": ", 2));
yr1004_ST(F.p1119);
F.v3004 = yr1016_SE();
yr1105_WriteTxt(F.v3004);
({ unsigned char pv = 10; y_put(&v881, &pv, sizeof pv); });
y_close(&v881);
rt_raise(rt_exc("translation_error"));
rt_raise(Y_X_NO_RETURN);
}
static void yr1124_FailS(rt_int a_p1125, yarr a_p1127) {
struct yf1128 F;
memset((void *)&F, 0, sizeof F);
F.p1125 = a_p1125;
F.p1127 = a_p1127;
yr1117_Fail(F.p1125, yr1021_T(F.p1127));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1132_FailN(rt_int a_p1133, rt_int a_p1134, yarr a_p1136) {
struct yf1137 F;
memset((void *)&F, 0, sizeof F);
F.p1133 = a_p1133;
F.p1134 = a_p1134;
F.p1136 = a_p1136;
yr986_SB();
yr1004_ST(F.p1134);
yr997_SA(F.p1136);
F.v3018 = yr1016_SE();
yr1117_Fail(F.p1133, F.v3018);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1141_NewSerial(void) {
struct yf1142 F;
memset((void *)&F, 0, sizeof F);
v924 = rt_range(rt_add(v924, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
{ rt_int rv3022 = v924;
return rv3022; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1146_Fresh(yarr a_p1148) {
struct yf1149 F;
memset((void *)&F, 0, sizeof F);
F.p1148 = a_p1148;
F.v3026 = yr1141_NewSerial();
yr986_SB();
yr997_SA(F.p1148);
yr1010_SI(F.v3026);
{ rt_int rv3027 = yr1016_SE();
return rv3027; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1177_InitWords(void) {
struct yf1178 F;
memset((void *)&F, 0, sizeof F);
yr986_SB();
yr997_SA(y_str("ALIGNMENT ALPHABET AND ARRAY AS ASSERT AT BASE2 BASE8 BASE10 BASE16 BEGIN CASE ", 79));
yr997_SA(y_str("CONST DIMENSIONS DIV DO ELSE ELSIF END ENDEXCEPTION ENDFOR ENDFUNCTION ENDIF ", 77));
yr997_SA(y_str("ENDLOOP ENDMODULE ENDMONITOR ENDPROCEDURE ENDPROCESS ENDRECORD ENDSELECT ", 73));
yr997_SA(y_str("ENDTEMPLATE ENDWHILE EXCEPTION EXIT EXPORT EXTENDS FILE FOR FUNCTION GOTO IF ", 77));
yr997_SA(y_str("IMPORT IN INLINE INSTANCE INSTANCES LABEL LOOP MOD MODULE MONITOR NIL NOT OF ", 77));
yr997_SA(y_str("OPAQUE OR ORDERED OUT PACKED POINTER PRECISION PRIORITY PROCEDURE PROCESS ", 74));
yr997_SA(y_str("PROPAGATE_EXCEPTION READONLY RECORD REPLACES REPRESENTATION RETURN RETURNS ", 75));
yr997_SA(y_str("SCALE SELECT SET SIMULATED_TIME SIZE SPACE TEMPLATE TERMINATE_PROCESS THEN ", 75));
yr997_SA(y_str("TRANSPARENT TYPE UNORDERED VAR WHILE XOR ", 41));
yr997_SA(y_str("<<<= >>>= ### === <<< >>> <<= >>= *** /// --- +++ := => .. <= >= ## == << >> ", 77));
yr997_SA(y_str("** // -- ++ # + - * / = < > ( ) [ ] , ; : . ^ ", 46));
F.v3034 = yr1016_SE();
v892 = INT64_C(0);
F.v3030 = ((rt_int *)(v888).p)[y_ix1(v888, F.v3034)];
{ rt_int hi3054 = rt_sub((rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.v3034)], ((rt_int *)(v890).p)[y_ix1(v890, F.v3034)])), INT64_C(1));
for (rt_int i3053 = ((rt_int *)(v888).p)[y_ix1(v888, F.v3034)]; i3053 <= hi3054; i3053++) { F.c_3052 = i3053;
if ((((unsigned char *)(v883).p)[y_ix1(v883, F.c_3052)] == 32)) {
F.v3032 = yr1028_Intern(F.v3030, rt_range(rt_sub(F.c_3052, F.v3030), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v3030 = rt_range(rt_add(F.c_3052, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i3053 == hi3054) break;
}}
if ((!(v892 == v591))) {
rt_raise(rt_exc("word_table"));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1182_ReadSource(void) {
struct yf1183 F;
memset((void *)&F, 0, sizeof F);
y_open(&v879, y_str("INPUT", 5), 0);
v1162 = rt_range(rt_add(v885, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!y_check_eof(&v879))) {
({ unsigned char g; y_get(&v879, &g, sizeof g); F.v3061 = g; });
yr980_PoolAdd(F.v3061);
}
v1165 = v885;
y_close(&v879);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1187_AddTok(rt_int a_p1188, rt_int a_p1189) {
struct yf1190 F;
memset((void *)&F, 0, sizeof F);
F.p1188 = a_p1188;
F.p1189 = a_p1189;
v1159 = rt_range(rt_add(v1159, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1153).p)[y_ix1(v1153, v1159)] = F.p1188;
((rt_int *)(v1155).p)[y_ix1(v1155, v1159)] = F.p1189;
((rt_int *)(v1157).p)[y_ix1(v1157, v1159)] = v1171;
return;
rt_raise(Y_X_NO_RETURN);
}
static unsigned char yr1194_At(rt_int a_p1195) {
struct yf1196 F;
memset((void *)&F, 0, sizeof F);
F.p1195 = a_p1195;
if ((F.p1195 > v1165)) {
{ unsigned char rv3074 = 0;
return rv3074; }
}
{ unsigned char rv3075 = ((unsigned char *)(v883).p)[y_ix1(v883, F.p1195)];
return rv3075; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1200_EndsOperand(void) {
struct yf1201 F;
memset((void *)&F, 0, sizeof F);
if ((v1159 == INT64_C(0))) {
{ rt_int rv3083 = 0;
return rv3083; }
}
F.v3078 = ((rt_int *)(v1153).p)[y_ix1(v1153, v1159)];
F.v3080 = ((rt_int *)(v1155).p)[y_ix1(v1155, v1159)];
if ((((((((F.v3078 == v177)) || ((F.v3078 == v186))) || ((F.v3078 == v189))) || ((F.v3078 == v192))) || ((F.v3078 == v195))) || ((F.v3078 == v198)))) {
{ rt_int rv3085 = 1;
return rv3085; }
}
if ((F.v3078 == v183)) {
{ rt_int rv3086 = ((((F.v3080 == v567)) || ((F.v3080 == v573))) || ((F.v3080 == v588)));
return rv3086; }
}
if ((F.v3078 == v180)) {
{ rt_int rv3087 = (F.v3080 == v357);
return rv3087; }
}
{ rt_int rv3089 = 0;
return rv3089; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1205_DigitVal(unsigned char a_p1206) {
struct yf1207 F;
memset((void *)&F, 0, sizeof F);
F.p1206 = a_p1206;
if ((((F.p1206 >= 48)) && ((F.p1206 <= 57)))) {
{ rt_int rv3096 = rt_range(rt_sub(((rt_int *)(v931).p)[y_ix1(v931, F.p1206)], INT64_C(48)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return rv3096; }
}
if ((((F.p1206 >= 65)) && ((F.p1206 <= 70)))) {
{ rt_int rv3101 = rt_range(rt_sub(((rt_int *)(v931).p)[y_ix1(v931, F.p1206)], INT64_C(55)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return rv3101; }
}
{ rt_int rv3103 = INT64_C(99);
return rv3103; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1211_LexError(yarr a_p1213) {
struct yf1214 F;
memset((void *)&F, 0, sizeof F);
F.p1213 = a_p1213;
yr1124_FailS(v1171, F.p1213);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1218_LexNumber(rt_int a_p1219) {
struct yf1220 F;
memset((void *)&F, 0, sizeof F);
F.p1219 = a_p1219;
F.v3109 = INT64_C(10);
F.v3120 = 0;
F.v3123 = INT64_C(0);
F.v3126 = INT64_C(0);
F.v3129 = INT64_C(0);
F.v3132 = INT64_C(0);
F.v3135 = INT64_C(0);
if ((!(v1174 == INT64_C(0)))) {
F.v3109 = v1174;
}
v1174 = INT64_C(0);
F.v3112 = v1168;
while ((yr1205_DigitVal(yr1194_At(v1168)) < F.v3109)) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3114 = v1168;
F.v3116 = v1168;
F.v3118 = v1168;
if ((((yr1194_At(v1168) == 46)) && ((!(yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 46))))) {
F.v3120 = 1;
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3116 = v1168;
while ((yr1205_DigitVal(yr1194_At(v1168)) < F.v3109)) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3118 = v1168;
}
if ((yr1194_At(v1168) == 80)) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3132 = INT64_C(1);
if ((((((yr1194_At(v1168) == 45)) || ((yr1194_At(v1168) == 43)))) && yr974_IsDigit(yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))) {
if ((yr1194_At(v1168) == 45)) {
F.v3132 = INT64_C(-1);
}
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3129 = INT64_C(0);
while (yr974_IsDigit(yr1194_At(v1168))) {
F.v3129 = rt_range(rt_add((rt_mul(F.v3129, INT64_C(10))), yr1205_DigitVal(yr1194_At(v1168))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3129 = rt_range(rt_mul(F.v3129, F.v3132), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3123 = INT64_C(0);
{ rt_int hi3178 = rt_sub(F.v3114, INT64_C(1));
for (rt_int i3177 = F.v3112; i3177 <= hi3178; i3177++) { F.c_3176 = i3177;
F.v3123 = rt_range(rt_add((rt_mul(F.v3123, F.v3109)), yr1205_DigitVal(((unsigned char *)(v883).p)[y_ix1(v883, F.c_3176)])), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3177 == hi3178) break;
}}
F.v3135 = rt_range(rt_sub(F.v3118, F.v3116), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
{ rt_int hi3188 = rt_sub(F.v3118, INT64_C(1));
for (rt_int i3187 = F.v3116; i3187 <= hi3188; i3187++) { F.c_3186 = i3187;
F.v3123 = rt_range(rt_add((rt_mul(F.v3123, F.v3109)), yr1205_DigitVal(((unsigned char *)(v883).p)[y_ix1(v883, F.c_3186)])), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3187 == hi3188) break;
}}
yr986_SB();
yr997_SA(y_str("(", 1));
if (F.p1219) {
yr997_SA(y_str("-", 1));
}
yr997_SA(y_str("(double)", 8));
yr1010_SI(F.v3123);
yr997_SA(y_str(" * pow(", 7));
yr1010_SI(F.v3109);
yr997_SA(y_str(", ", 2));
yr1010_SI(rt_range(rt_sub(F.v3129, F.v3135), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr997_SA(y_str("))", 2));
F.v3138 = yr1016_SE();
yr1187_AddTok(v189, F.v3138);
return;
}
if (F.v3120) {
if ((!(F.v3109 == INT64_C(10)))) {
yr1211_LexError(y_str("a floating-point literal is decimal", 35));
}
if ((yr1194_At(v1168) == 69)) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((yr1194_At(v1168) == 45)) || ((yr1194_At(v1168) == 43)))) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
while (yr974_IsDigit(yr1194_At(v1168))) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr986_SB();
if (F.p1219) {
yr997_SA(y_str("-", 1));
}
{ rt_int hi3216 = rt_sub(v1168, INT64_C(1));
for (rt_int i3215 = F.v3112; i3215 <= hi3216; i3215++) { F.c_3214 = i3215;
yr991_SC(((unsigned char *)(v883).p)[y_ix1(v883, F.c_3214)]);
if (i3215 == hi3216) break;
}}
F.v3138 = yr1016_SE();
yr1187_AddTok(v192, F.v3138);
return;
}
F.v3123 = INT64_C(0);
{ rt_int hi3224 = rt_sub(F.v3114, INT64_C(1));
for (rt_int i3223 = F.v3112; i3223 <= hi3224; i3223++) { F.c_3222 = i3223;
F.v3126 = yr1205_DigitVal(((unsigned char *)(v883).p)[y_ix1(v883, F.c_3222)]);
if ((F.v3123 > (rt_div((rt_sub(v876, F.v3126)), F.v3109)))) {
yr1211_LexError(y_str("integer literal too large", 25));
}
F.v3123 = rt_range(rt_add((rt_mul(F.v3123, F.v3109)), F.v3126), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3223 == hi3224) break;
}}
if (F.p1219) {
F.v3123 = rt_range(rt_neg(F.v3123), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yr1187_AddTok(v186, F.v3123);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1224_LexString(void) {
struct yf1225 F;
memset((void *)&F, 0, sizeof F);
yr986_SB();
for (;;) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1194_At(v1168) == 34))) {
if ((((yr1194_At(v1168) == 10)) || ((v1168 > v1165)))) {
v897 = 0;
yr1211_LexError(y_str("a string must close on its line", 31));
}
yr991_SC(yr1194_At(v1168));
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3235 = v1168;
F.v3237 = INT64_C(0);
F.v3239 = 1;
while (F.v3239) {
if (((((yr1194_At(F.v3235) == 32)) || ((yr1194_At(F.v3235) == 9))) || ((yr1194_At(F.v3235) == 13)))) {
F.v3235 = rt_range(rt_add(F.v3235, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr1194_At(F.v3235) == 10)) {
F.v3237 = rt_range(rt_add(F.v3237, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3235 = rt_range(rt_add(F.v3235, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v3239 = 0;
}
}
if ((!(yr1194_At(F.v3235) == 34))) {
goto yl_3240;
}
v1171 = rt_range(rt_add(v1171, F.v3237), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1168 = F.v3235;
}
yl_3240: ;
F.v3233 = yr1016_SE();
yr1187_AddTok(v198, F.v3233);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1229_Lex(void) {
struct yf1230 F;
memset((void *)&F, 0, sizeof F);
v1168 = v1162;
while ((v1168 <= v1165)) {
F.v3268 = ((unsigned char *)(v883).p)[y_ix1(v883, v1168)];
if ((F.v3268 == 10)) {
v1171 = rt_range(rt_add(v1171, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((((F.v3268 == 32)) || ((F.v3268 == 9))) || ((F.v3268 == 13))) || ((F.v3268 == 12)))) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v3268 == 40)) && ((yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 42)))) {
v1168 = rt_range(rt_add(v1168, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!((((yr1194_At(v1168) == 42)) && ((yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 41)))))) {
if ((((yr1194_At(v1168) == 10)) || ((v1168 > v1165)))) {
yr1211_LexError(y_str("a comment must close on its line", 32));
}
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1168 = rt_range(rt_add(v1168, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr974_IsDigit(F.v3268) || ((((v1174 == INT64_C(16))) && ((yr1205_DigitVal(F.v3268) < INT64_C(16))))))) {
yr1218_LexNumber(0);
} else if (((((((F.v3268 == 45)) || ((F.v3268 == 43)))) && (!yr1200_EndsOperand())) && ((yr974_IsDigit(yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || ((((v1174 == INT64_C(16))) && ((yr1205_DigitVal(yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) < INT64_C(16))))))))) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1218_LexNumber((F.v3268 == 45));
} else if (yr968_IsLetter(F.v3268)) {
F.v3270 = v1168;
while ((yr968_IsLetter(yr1194_At(v1168)) || yr974_IsDigit(yr1194_At(v1168)))) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3278 = yr1028_Intern(F.v3270, rt_range(rt_sub(v1168, F.v3270), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((F.v3278 == v222)) {
v1174 = INT64_C(2);
} else if ((F.v3278 == v225)) {
v1174 = INT64_C(8);
} else if ((F.v3278 == v228)) {
v1174 = INT64_C(10);
} else if ((F.v3278 == v231)) {
v1174 = INT64_C(16);
} else if ((F.v3278 <= v462)) {
yr1187_AddTok(v180, F.v3278);
} else {
yr1187_AddTok(v177, F.v3278);
}
} else if ((F.v3268 == 39)) {
F.v3270 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3272 = F.v3270;
while ((!(yr1194_At(F.v3272) == 39))) {
if (((((yr1194_At(F.v3272) == 10)) || ((yr1194_At(F.v3272) == 34))) || ((F.v3272 > v1165)))) {
yr1211_LexError(y_str("bad character literal", 21));
}
F.v3272 = rt_range(rt_add(F.v3272, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v3272 == F.v3270)) {
yr1211_LexError(y_str("empty character literal", 23));
}
F.v3278 = yr1028_Intern(F.v3270, rt_range(rt_sub(F.v3272, F.v3270), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1187_AddTok(v195, F.v3278);
v1168 = rt_range(rt_add(F.v3272, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v3268 == 34)) {
yr1224_LexString();
} else {
F.v3274 = INT64_C(0);
F.v3272 = rt_range(rt_add(v462, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((F.v3274 == INT64_C(0))) && ((F.v3272 <= v591)))) {
F.v3276 = ((rt_int *)(v890).p)[y_ix1(v890, F.v3272)];
F.v3282 = 1;
{ rt_int hi3357 = rt_sub(F.v3276, INT64_C(1));
for (rt_int i3356 = INT64_C(0); i3356 <= hi3357; i3356++) { F.c_3355 = i3356;
if ((!(yr1194_At(rt_range(rt_add(v1168, F.c_3355), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == ((unsigned char *)(v883).p)[y_ix1(v883, rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.v3272)], F.c_3355))]))) {
F.v3282 = 0;
}
if (i3356 == hi3357) break;
}}
if (F.v3282) {
F.v3274 = F.v3272;
}
F.v3272 = rt_range(rt_add(F.v3272, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v3274 == INT64_C(0))) {
yr1211_LexError(y_str("a character that is not in the language", 39));
}
yr1187_AddTok(v183, F.v3274);
v1168 = rt_range(rt_add(v1168, ((rt_int *)(v890).p)[y_ix1(v890, F.v3274)]), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1187_AddTok(v174, INT64_C(0));
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1245_NewNode(rt_int a_p1246, rt_int a_p1247) {
struct yf1248 F;
memset((void *)&F, 0, sizeof F);
F.p1246 = a_p1246;
F.p1247 = a_p1247;
({ F.v3371 = rt_alloc(sizeof(yR95)); });
(*(yR95 *)rt_nil_check(F.v3371)) = ((yR95){ .f_kind = F.p1246, .f_line = F.p1247, .f_ival = INT64_C(0), .f_flag = INT64_C(0), .f_name = INT64_C(0), .f_text = INT64_C(0), .f_a = ((void *)0), .f_b = ((void *)0), .f_c = ((void *)0), .f_d = ((void *)0), .f_e = ((void *)0), .f_next = ((void *)0), .f_rep = ((void *)0), .f_sym = ((void *)0) });
{ void * rv3376 = F.v3371;
return rv3376; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1252_Link(void * * a_p1253, void * * a_p1254, void * a_p1255) {
struct yf1256 F;
memset((void *)&F, 0, sizeof F);
F.p1253 = a_p1253;
F.p1254 = a_p1254;
F.p1255 = a_p1255;
if (((*F.p1253) == ((void *)0))) {
(*F.p1253) = F.p1255;
} else {
((*(yR95 *)rt_nil_check((*F.p1254)))).f_next = F.p1255;
}
(*F.p1254) = F.p1255;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1260_Count(void * a_p1261) {
struct yf1262 F;
memset((void *)&F, 0, sizeof F);
F.p1261 = a_p1261;
F.v3384 = INT64_C(0);
F.v3387 = F.p1261;
while ((!(F.v3387 == ((void *)0)))) {
F.v3384 = rt_range(rt_add(F.v3384, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3387 = ((*(yR95 *)rt_nil_check(F.v3387))).f_next;
}
{ rt_int rv3390 = F.v3384;
return rv3390; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1266_TK(void) {
struct yf1267 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv3392 = ((rt_int *)(v1153).p)[y_ix1(v1153, v1234)];
return rv3392; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1271_TV(void) {
struct yf1272 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv3394 = ((rt_int *)(v1155).p)[y_ix1(v1155, v1234)];
return rv3394; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1276_TLn(void) {
struct yf1277 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv3396 = ((rt_int *)(v1157).p)[y_ix1(v1157, v1234)];
return rv3396; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1281_IsAt(rt_int a_p1282, rt_int a_p1283) {
struct yf1284 F;
memset((void *)&F, 0, sizeof F);
F.p1282 = a_p1282;
F.p1283 = a_p1283;
F.v3401 = ((rt_int *)(v1153).p)[y_ix1(v1153, rt_add(v1234, F.p1282))];
{ rt_int rv3404 = (((((F.v3401 == v180)) || ((F.v3401 == v183)))) && ((((rt_int *)(v1155).p)[y_ix1(v1155, rt_add(v1234, F.p1282))] == F.p1283)));
return rv3404; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1288_Is(rt_int a_p1289) {
struct yf1290 F;
memset((void *)&F, 0, sizeof F);
F.p1289 = a_p1289;
{ rt_int rv3408 = yr1281_IsAt(INT64_C(0), F.p1289);
return rv3408; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1294_IsIdAt(rt_int a_p1295) {
struct yf1296 F;
memset((void *)&F, 0, sizeof F);
F.p1295 = a_p1295;
{ rt_int rv3412 = (((rt_int *)(v1153).p)[y_ix1(v1153, rt_add(v1234, F.p1295))] == v177);
return rv3412; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1300_Skip(void) {
struct yf1301 F;
memset((void *)&F, 0, sizeof F);
if ((!(((rt_int *)(v1153).p)[y_ix1(v1153, v1234)] == v174))) {
v1234 = rt_range(rt_add(v1234, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1305_Accept(rt_int a_p1306) {
struct yf1307 F;
memset((void *)&F, 0, sizeof F);
F.p1306 = a_p1306;
if (yr1288_Is(F.p1306)) {
yr1300_Skip();
{ rt_int rv3419 = 1;
return rv3419; }
}
{ rt_int rv3421 = 0;
return rv3421; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1311_TokText(void) {
struct yf1312 F;
memset((void *)&F, 0, sizeof F);
F.v3424 = yr1266_TK();
if ((((((F.v3424 == v177)) || ((F.v3424 == v180))) || ((F.v3424 == v183))) || ((F.v3424 == v195)))) {
{ rt_int rv3425 = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
return rv3425; }
}
if ((F.v3424 == v174)) {
{ rt_int rv3427 = yr1021_T(y_str("the end of the text", 19));
return rv3427; }
}
if ((F.v3424 == v186)) {
yr986_SB();
yr1010_SI(yr1271_TV());
{ rt_int rv3428 = yr1016_SE();
return rv3428; }
}
{ rt_int rv3430 = yr1021_T(y_str("a literal", 9));
return rv3430; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1316_Expect(rt_int a_p1317) {
struct yf1318 F;
memset((void *)&F, 0, sizeof F);
F.p1317 = a_p1317;
if ((!yr1305_Accept(F.p1317))) {
yr986_SB();
yr997_SA(y_str("expected ", 9));
yr1004_ST(rt_range(F.p1317, INT64_C(0), INT64_C(4000000)));
yr997_SA(y_str(", found ", 8));
yr1004_ST(yr1311_TokText());
F.v3434 = yr1016_SE();
yr1117_Fail(yr1276_TLn(), F.v3434);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1322_Ident(void) {
struct yf1323 F;
memset((void *)&F, 0, sizeof F);
if ((!(yr1266_TK() == v177))) {
yr986_SB();
yr997_SA(y_str("expected an identifier, found ", 30));
yr1004_ST(yr1311_TokText());
F.v3439 = yr1016_SE();
yr1117_Fail(yr1276_TLn(), F.v3439);
}
F.v3439 = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
yr1300_Skip();
{ rt_int rv3441 = F.v3439;
return rv3441; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1327_CloseName(rt_int a_p1328, rt_int a_p1329) {
struct yf1330 F;
memset((void *)&F, 0, sizeof F);
F.p1328 = a_p1328;
F.p1329 = a_p1329;
if (((((yr1266_TK() == v177)) || ((yr1266_TK() == v180))) || ((yr1266_TK() == v183)))) {
F.v3446 = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
if ((F.v3446 == F.p1328)) {
yr1300_Skip();
return;
}
}
yr1132_FailN(F.p1329, F.p1328, y_str(" is closed with another name", 28));
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1334_ExtendedId(void) {
struct yf1335 F;
memset((void *)&F, 0, sizeof F);
F.v3450 = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
if ((yr1266_TK() == v177)) {
yr1300_Skip();
{ rt_int rv3451 = F.v3450;
return rv3451; }
}
if ((((yr1266_TK() == v180)) && (((((((((F.v3450 == v360)) || ((F.v3450 == v207))) || ((F.v3450 == v369))) || ((F.v3450 == v246))) || ((F.v3450 == v348))) || ((F.v3450 == v459))) || ((F.v3450 == v330)))))) {
yr1300_Skip();
{ rt_int rv3452 = F.v3450;
return rv3452; }
}
if (((((((((((((yr1266_TK() == v183)) && ((!(F.v3450 == v564)))) && ((!(F.v3450 == v567)))) && ((!(F.v3450 == v570)))) && ((!(F.v3450 == v573)))) && ((!(F.v3450 == v576)))) && ((!(F.v3450 == v579)))) && ((!(F.v3450 == v582)))) && ((!(F.v3450 == v585)))) && ((!(F.v3450 == v507)))) && ((!(F.v3450 == v504))))) {
yr1300_Skip();
{ rt_int rv3453 = F.v3450;
return rv3453; }
}
yr1124_FailS(yr1276_TLn(), y_str("expected a name", 15));
{ rt_int rv3456 = INT64_C(0);
return rv3456; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1339_IsLabel(rt_int a_p1340) {
struct yf1341 F;
memset((void *)&F, 0, sizeof F);
F.p1340 = a_p1340;
F.v3460 = v1237;
while ((!(F.v3460 == ((void *)0)))) {
if ((((*(yR95 *)rt_nil_check(F.v3460))).f_name == F.p1340)) {
{ rt_int rv3462 = 1;
return rv3462; }
}
F.v3460 = ((*(yR95 *)rt_nil_check(F.v3460))).f_next;
}
{ rt_int rv3464 = 0;
return rv3464; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1345_ImportItem(void) {
struct yf1346 F;
memset((void *)&F, 0, sizeof F);
F.v3467 = yr1245_NewNode(v597, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3467))).f_name = yr1334_ExtendedId();
if ((yr1294_IsIdAt(INT64_C(0)) && ((yr1271_TV() == v1239)))) {
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3467))).f_text = yr1322_Ident();
}
if (yr1305_Accept(v213)) {
((*(yR95 *)rt_nil_check(F.v3467))).f_ival = yr1334_ExtendedId();
}
{ void * rv3469 = F.v3467;
return rv3469; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1350_ParseModule(void) {
struct yf1351 F;
memset((void *)&F, 0, sizeof F);
F.v3472 = yr1245_NewNode(v594, yr1276_TLn());
F.v3474 = ((void *)0);
F.v3476 = ((void *)0);
F.v3478 = ((void *)0);
if (yr1305_Accept(v354)) {
((*(yR95 *)rt_nil_check(F.v3472))).f_flag = INT64_C(1);
} else {
yr1316_Expect(v351);
}
((*(yR95 *)rt_nil_check(F.v3472))).f_name = yr1322_Ident();
while (yr1305_Accept(v327)) {
for (;;) {
F.v3474 = yr1345_ImportItem();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3472))).f_a, &F.v3476, F.v3474);
if ((!yr1305_Accept(v576))) {
goto yl_3482;
}
}
yl_3482: ;
yr1316_Expect(v579);
}
while (yr1305_Accept(v306)) {
F.v3480 = INT64_C(0);
if ((((yr1288_Is(v366) || yr1288_Is(v444)) || yr1288_Is(v399)) || yr1288_Is(v453))) {
F.v3480 = yr1271_TV();
yr1300_Skip();
}
for (;;) {
F.v3474 = yr1345_ImportItem();
((*(yR95 *)rt_nil_check(F.v3474))).f_flag = F.v3480;
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3472))).f_b, &F.v3478, F.v3474);
if ((!yr1305_Accept(v576))) {
goto yl_3484;
}
}
yl_3484: ;
yr1316_Expect(v579);
}
((*(yR95 *)rt_nil_check(F.v3472))).f_c = yr1360_ParseBlock();
if ((((*(yR95 *)rt_nil_check(F.v3472))).f_flag == INT64_C(1))) {
yr1316_Expect(v279);
} else {
yr1316_Expect(v276);
}
yr1327_CloseName(((*(yR95 *)rt_nil_check(F.v3472))).f_name, ((*(yR95 *)rt_nil_check(F.v3472))).f_line);
{ void * rv3486 = F.v3472;
return rv3486; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1355_IsDeclWord(void) {
struct yf1356 F;
memset((void *)&F, 0, sizeof F);
if ((!(yr1266_TK() == v180))) {
{ rt_int rv3491 = 0;
return rv3491; }
}
F.v3489 = yr1271_TV();
{ rt_int rv3492 = (((((((((((((F.v3489 == v240)) || ((F.v3489 == v453))) || ((F.v3489 == v342))) || ((F.v3489 == v447))) || ((F.v3489 == v408))) || ((F.v3489 == v318))) || ((F.v3489 == v390))) || ((F.v3489 == v351))) || ((F.v3489 == v354))) || ((F.v3489 == v435))) || ((F.v3489 == v336))) || ((F.v3489 == v393)));
return rv3492; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1360_ParseBlock(void) {
struct yf1361 F;
memset((void *)&F, 0, sizeof F);
F.v3495 = yr1245_NewNode(v600, yr1276_TLn());
F.v3497 = ((void *)0);
F.v3499 = v1237;
while (yr1355_IsDeclWord()) {
yr1387_ParseDeclGroup(&((*(yR95 *)rt_nil_check(F.v3495))).f_a, &F.v3497);
while (yr1305_Accept(v579)) {
}
}
if (yr1288_Is(v300)) {
((*(yR95 *)rt_nil_check(F.v3495))).f_b = yr1365_ParseHandler();
F.v3501 = ((*(yR95 *)rt_nil_check(F.v3495))).f_b;
if (yr1305_Accept(v579)) {
}
}
((*(yR95 *)rt_nil_check(F.v3495))).f_c = yr1451_ParseStatements(1);
v1237 = F.v3499;
{ void * rv3503 = F.v3495;
return rv3503; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1365_ParseHandler(void) {
struct yf1366 F;
memset((void *)&F, 0, sizeof F);
F.v3506 = yr1245_NewNode(v603, yr1276_TLn());
F.v3508 = ((void *)0);
F.v3510 = ((void *)0);
F.v3512 = ((void *)0);
F.v3514 = ((void *)0);
yr1316_Expect(v300);
while (yr1305_Accept(v237)) {
F.v3508 = yr1245_NewNode(v606, yr1276_TLn());
F.v3514 = ((void *)0);
for (;;) {
F.v3512 = yr1245_NewNode(v639, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3512))).f_name = yr1322_Ident();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3508))).f_a, &F.v3514, F.v3512);
if ((!yr1305_Accept(v576))) {
goto yl_3515;
}
}
yl_3515: ;
yr1316_Expect(v504);
((*(yR95 *)rt_nil_check(F.v3508))).f_b = yr1451_ParseStatements(0);
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3506))).f_a, &F.v3510, F.v3508);
}
if (yr1305_Accept(v252)) {
((*(yR95 *)rt_nil_check(F.v3506))).f_flag = INT64_C(1);
((*(yR95 *)rt_nil_check(F.v3506))).f_b = yr1451_ParseStatements(0);
}
yr1316_Expect(v261);
{ void * rv3519 = F.v3506;
return rv3519; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1370_ParseNames(void) {
struct yf1371 F;
memset((void *)&F, 0, sizeof F);
F.v3522 = ((void *)0);
F.v3524 = ((void *)0);
F.v3526 = ((void *)0);
for (;;) {
F.v3526 = yr1245_NewNode(v639, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3526))).f_name = yr1322_Ident();
if (yr1305_Accept(v219)) {
((*(yR95 *)rt_nil_check(F.v3526))).f_a = yr1513_ParseExpr();
}
yr1252_Link(&F.v3522, &F.v3524, F.v3526);
if ((!yr1305_Accept(v576))) {
goto yl_3527;
}
}
yl_3527: ;
{ void * rv3528 = F.v3522;
return rv3528; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1375_SimpleEntry(rt_int a_p1376) {
struct yf1377 F;
memset((void *)&F, 0, sizeof F);
F.p1376 = a_p1376;
if ((F.p1376 == v240)) {
F.v3532 = yr1245_NewNode(v609, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3532))).f_a = yr1370_ParseNames();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3532))).f_b = yr1416_ParseRep();
yr1316_Expect(v555);
((*(yR95 *)rt_nil_check(F.v3532))).f_c = yr1513_ParseExpr();
} else if ((F.p1376 == v453)) {
F.v3532 = yr1245_NewNode(v612, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3532))).f_a = yr1370_ParseNames();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3532))).f_b = yr1416_ParseRep();
if (yr1305_Accept(v501)) {
((*(yR95 *)rt_nil_check(F.v3532))).f_c = yr1513_ParseExpr();
}
} else if ((F.p1376 == v447)) {
F.v3532 = yr1245_NewNode(v618, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3532))).f_name = yr1322_Ident();
yr1316_Expect(v555);
((*(yR95 *)rt_nil_check(F.v3532))).f_b = yr1436_ParseConcrete1();
} else {
F.v3532 = yr1245_NewNode(v621, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3532))).f_name = yr1322_Ident();
yr1316_Expect(v555);
((*(yR95 *)rt_nil_check(F.v3532))).f_b = yr1416_ParseRep();
}
{ void * rv3533 = F.v3532;
return rv3533; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1381_Continues(rt_int a_p1382) {
struct yf1383 F;
memset((void *)&F, 0, sizeof F);
F.p1382 = a_p1382;
if ((!((yr1288_Is(v579) && yr1294_IsIdAt(INT64_C(1)))))) {
{ rt_int rv3538 = 0;
return rv3538; }
}
if (yr1339_IsLabel(rt_range(((rt_int *)(v1155).p)[y_ix1(v1155, rt_add(v1234, INT64_C(1)))], INT64_C(0), INT64_C(4000000)))) {
{ rt_int rv3542 = 0;
return rv3542; }
}
if ((((F.p1382 == v240)) || ((F.p1382 == v453)))) {
{ rt_int rv3546 = ((yr1281_IsAt(INT64_C(2), v576) || yr1281_IsAt(INT64_C(2), v582)) || yr1281_IsAt(INT64_C(2), v219));
return rv3546; }
}
{ rt_int rv3548 = yr1281_IsAt(INT64_C(2), v555);
return rv3548; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1387_ParseDeclGroup(void * * a_p1388, void * * a_p1389) {
struct yf1390 F;
memset((void *)&F, 0, sizeof F);
F.p1388 = a_p1388;
F.p1389 = a_p1389;
F.v3553 = yr1271_TV();
if ((((((F.v3553 == v240)) || ((F.v3553 == v453))) || ((F.v3553 == v447))) || ((F.v3553 == v408)))) {
yr1300_Skip();
yr1252_Link(&(*F.p1388), &(*F.p1389), yr1375_SimpleEntry(F.v3553));
while (yr1381_Continues(F.v3553)) {
yr1300_Skip();
yr1252_Link(&(*F.p1388), &(*F.p1389), yr1375_SimpleEntry(F.v3553));
}
return;
}
if ((F.v3553 == v342)) {
F.v3555 = yr1245_NewNode(v615, yr1276_TLn());
yr1300_Skip();
F.v3559 = ((void *)0);
for (;;) {
F.v3557 = yr1245_NewNode(v639, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3557))).f_name = yr1322_Ident();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3555))).f_a, &F.v3559, F.v3557);
if ((!yr1305_Accept(v576))) {
goto yl_3560;
}
}
yl_3560: ;
F.v3557 = ((*(yR95 *)rt_nil_check(F.v3555))).f_a;
while ((!(F.v3557 == ((void *)0)))) {
((*(yR95 *)rt_nil_check(F.v3555))).f_b = yr1245_NewNode(v639, ((*(yR95 *)rt_nil_check(F.v3557))).f_line);
((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v3555))).f_b))).f_name = ((*(yR95 *)rt_nil_check(F.v3557))).f_name;
((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v3555))).f_b))).f_next = v1237;
v1237 = ((*(yR95 *)rt_nil_check(F.v3555))).f_b;
F.v3557 = ((*(yR95 *)rt_nil_check(F.v3557))).f_next;
}
((*(yR95 *)rt_nil_check(F.v3555))).f_b = ((void *)0);
yr1252_Link(&(*F.p1388), &(*F.p1389), F.v3555);
return;
}
yr1252_Link(&(*F.p1388), &(*F.p1389), yr1394_ParseDecl());
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1394_ParseDecl(void) {
struct yf1395 F;
memset((void *)&F, 0, sizeof F);
F.v3569 = yr1271_TV();
F.v3571 = yr1276_TLn();
if ((((F.v3569 == v318)) || ((F.v3569 == v390)))) {
F.v3563 = yr1245_NewNode(v624, F.v3571);
yr1300_Skip();
if ((F.v3569 == v318)) {
((*(yR95 *)rt_nil_check(F.v3563))).f_flag = INT64_C(1);
}
if ((yr1288_Is(v309) || yr1288_Is(v405))) {
((*(yR95 *)rt_nil_check(F.v3563))).f_ival = yr1271_TV();
yr1300_Skip();
}
((*(yR95 *)rt_nil_check(F.v3563))).f_name = yr1334_ExtendedId();
yr1399_ParseFormals(F.v3563);
if (yr1305_Accept(v333)) {
((*(yR95 *)rt_nil_check(F.v3563))).f_e = yr1245_NewNode(v639, F.v3571);
}
((*(yR95 *)rt_nil_check(F.v3563))).f_c = yr1360_ParseBlock();
if ((F.v3569 == v318)) {
yr1316_Expect(v267);
} else {
yr1316_Expect(v282);
}
yr1327_CloseName(((*(yR95 *)rt_nil_check(F.v3563))).f_name, F.v3571);
{ void * rv3575 = F.v3563;
return rv3575; }
}
if ((((F.v3569 == v351)) || ((F.v3569 == v354)))) {
{ void * rv3576 = yr1350_ParseModule();
return rv3576; }
}
if ((F.v3569 == v435)) {
F.v3563 = yr1245_NewNode(v630, F.v3571);
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3563))).f_name = yr1322_Ident();
yr1316_Expect(v564);
F.v3567 = ((void *)0);
for (;;) {
F.v3565 = yr1245_NewNode(v639, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3565))).f_name = yr1322_Ident();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3563))).f_a, &F.v3567, F.v3565);
if ((!yr1305_Accept(v576))) {
goto yl_3577;
}
}
yl_3577: ;
yr1316_Expect(v567);
F.v3573 = v1234;
((*(yR95 *)rt_nil_check(F.v3563))).f_b = yr1350_ParseModule();
((*(yR95 *)rt_nil_check(F.v3563))).f_ival = F.v3573;
((*(yR95 *)rt_nil_check(F.v3563))).f_flag = v1234;
yr1316_Expect(v294);
yr1327_CloseName(((*(yR95 *)rt_nil_check(F.v3563))).f_name, F.v3571);
{ void * rv3578 = F.v3563;
return rv3578; }
}
if ((F.v3569 == v336)) {
F.v3563 = yr1245_NewNode(v633, F.v3571);
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3563))).f_name = yr1322_Ident();
yr1316_Expect(v564);
F.v3567 = ((void *)0);
for (;;) {
F.v3565 = yr1245_NewNode(v639, yr1276_TLn());
if ((yr1266_TK() == v186)) {
((*(yR95 *)rt_nil_check(F.v3565))).f_flag = INT64_C(1);
((*(yR95 *)rt_nil_check(F.v3565))).f_ival = yr1271_TV();
yr1300_Skip();
} else {
((*(yR95 *)rt_nil_check(F.v3565))).f_name = yr1334_ExtendedId();
}
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3563))).f_a, &F.v3567, F.v3565);
if ((!yr1305_Accept(v576))) {
goto yl_3579;
}
}
yl_3579: ;
yr1316_Expect(v567);
{ void * rv3581 = F.v3563;
return rv3581; }
}
if ((F.v3569 == v393)) {
F.v3563 = yr1245_NewNode(v636, F.v3571);
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3563))).f_name = yr1322_Ident();
yr1399_ParseFormals(F.v3563);
if ((!(((*(yR95 *)rt_nil_check(F.v3563))).f_b == ((void *)0)))) {
yr1124_FailS(F.v3571, y_str("a process returns no value", 26));
}
if (yr1305_Accept(v387)) {
((*(yR95 *)rt_nil_check(F.v3563))).f_d = yr1513_ParseExpr();
}
if (yr1305_Accept(v339)) {
((*(yR95 *)rt_nil_check(F.v3563))).f_e = yr1513_ParseExpr();
}
if (yr1305_Accept(v429)) {
F.v3565 = yr1513_ParseExpr();
}
((*(yR95 *)rt_nil_check(F.v3563))).f_c = yr1360_ParseBlock();
yr1316_Expect(v285);
yr1327_CloseName(((*(yR95 *)rt_nil_check(F.v3563))).f_name, F.v3571);
{ void * rv3583 = F.v3563;
return rv3583; }
}
yr1124_FailS(F.v3571, y_str("expected a declaration", 22));
{ void * rv3585 = ((void *)0);
return rv3585; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1399_ParseFormals(void * a_p1400) {
struct yf1401 F;
memset((void *)&F, 0, sizeof F);
F.p1400 = a_p1400;
F.v3589 = ((void *)0);
F.v3591 = ((void *)0);
if (yr1305_Accept(v414)) {
((*(yR95 *)rt_nil_check(F.p1400))).f_b = yr1416_ParseRep();
}
yr1316_Expect(v564);
while ((!yr1288_Is(v567))) {
if (yr1305_Accept(v240)) {
F.v3593 = v867;
} else if (yr1305_Accept(v375)) {
F.v3593 = v870;
} else if (yr1305_Accept(v453)) {
F.v3593 = v873;
} else {
yr1124_FailS(yr1276_TLn(), y_str("a formal parameter is CONST, OUT or VAR", 39));
}
for (;;) {
F.v3589 = yr1245_NewNode(v627, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3589))).f_ival = F.v3593;
((*(yR95 *)rt_nil_check(F.v3589))).f_a = yr1370_ParseNames();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3589))).f_b = yr1405_ParseFormalRep();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.p1400))).f_a, &F.v3591, F.v3589);
if ((!((((yr1288_Is(v579) || yr1288_Is(v576))) && yr1294_IsIdAt(INT64_C(1)))))) {
goto yl_3595;
}
yr1300_Skip();
}
yl_3595: ;
if ((!yr1305_Accept(v579))) {
if ((!yr1305_Accept(v576))) {
yr1316_Expect(v567);
return;
}
}
}
yr1316_Expect(v567);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1405_ParseFormalRep(void) {
struct yf1406 F;
memset((void *)&F, 0, sizeof F);
if (((yr1288_Is(v210) && yr1281_IsAt(INT64_C(1), v564)) && ((yr1281_IsAt(INT64_C(3), v243) || ((yr1294_IsIdAt(INT64_C(3)) && ((((rt_int *)(v1155).p)[y_ix1(v1155, rt_add(v1234, INT64_C(3)))] == v1242)))))))) {
F.v3599 = yr1245_NewNode(v666, yr1276_TLn());
yr1300_Skip();
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3599))).f_a = yr1513_ParseExpr();
yr1300_Skip();
yr1316_Expect(v363);
((*(yR95 *)rt_nil_check(F.v3599))).f_b = yr1416_ParseRep();
yr1316_Expect(v567);
{ void * rv3605 = F.v3599;
return rv3605; }
}
if (yr1288_Is(v432)) {
F.v3599 = yr1245_NewNode(v669, yr1276_TLn());
yr1300_Skip();
{ void * rv3606 = F.v3599;
return rv3606; }
}
{ void * rv3607 = yr1416_ParseRep();
return rv3607; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1410_IsStructWord(rt_int a_p1411) {
struct yf1412 F;
memset((void *)&F, 0, sizeof F);
F.p1411 = a_p1411;
F.v3611 = ((rt_int *)(v1155).p)[y_ix1(v1155, rt_add(v1234, F.p1411))];
if ((!(((rt_int *)(v1153).p)[y_ix1(v1153, rt_add(v1234, F.p1411))] == v180))) {
{ rt_int rv3615 = 0;
return rv3615; }
}
{ rt_int rv3616 = (((((((((F.v3611 == v450)) || ((F.v3611 == v372))) || ((F.v3611 == v204))) || ((F.v3611 == v210))) || ((F.v3611 == v402))) || ((F.v3611 == v312))) || ((F.v3611 == v381))) || ((F.v3611 == v423)));
return rv3616; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1416_ParseRep(void) {
struct yf1417 F;
memset((void *)&F, 0, sizeof F);
if ((yr1294_IsIdAt(INT64_C(0)) && ((yr1410_IsStructWord(INT64_C(1)) || ((yr1294_IsIdAt(INT64_C(1)) && yr1281_IsAt(INT64_C(2), v570))))))) {
F.v3619 = yr1322_Ident();
F.v3621 = yr1421_ParseConcrete();
((*(yR95 *)rt_nil_check(F.v3621))).f_text = F.v3619;
{ void * rv3626 = F.v3621;
return rv3626; }
}
{ void * rv3627 = yr1421_ParseConcrete();
return rv3627; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1421_ParseConcrete(void) {
struct yf1422 F;
memset((void *)&F, 0, sizeof F);
F.v3630 = yr1436_ParseConcrete1();
if (yr1305_Accept(v378)) {
if (((((yr1266_TK() == v186)) || ((yr1266_TK() == v177))) || yr1288_Is(v564))) {
F.v3632 = yr1518_ParseSimple();
}
}
if (yr1305_Accept(v201)) {
F.v3632 = yr1518_ParseSimple();
}
{ void * rv3633 = F.v3630;
return rv3633; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1426_ParseIds(void) {
struct yf1427 F;
memset((void *)&F, 0, sizeof F);
F.v3636 = ((void *)0);
F.v3638 = ((void *)0);
F.v3640 = ((void *)0);
for (;;) {
F.v3640 = yr1245_NewNode(v639, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3640))).f_name = yr1322_Ident();
yr1252_Link(&F.v3636, &F.v3638, F.v3640);
if ((!yr1305_Accept(v576))) {
goto yl_3641;
}
}
yl_3641: ;
{ void * rv3642 = F.v3636;
return rv3642; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1431_ParseFieldGroups(void) {
struct yf1432 F;
memset((void *)&F, 0, sizeof F);
F.v3645 = ((void *)0);
F.v3647 = ((void *)0);
F.v3649 = ((void *)0);
while ((yr1288_Is(v240) || yr1288_Is(v453))) {
F.v3651 = yr1271_TV();
yr1300_Skip();
for (;;) {
F.v3649 = yr1245_NewNode(v675, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3649))).f_ival = F.v3651;
((*(yR95 *)rt_nil_check(F.v3649))).f_a = yr1370_ParseNames();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3649))).f_b = yr1416_ParseRep();
yr1252_Link(&F.v3645, &F.v3647, F.v3649);
if ((!((yr1288_Is(v579) && yr1294_IsIdAt(INT64_C(1)))))) {
goto yl_3652;
}
yr1300_Skip();
}
yl_3652: ;
if ((!yr1305_Accept(v579))) {
{ void * rv3654 = F.v3645;
return rv3654; }
}
}
{ void * rv3655 = F.v3645;
return rv3655; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1436_ParseConcrete1(void) {
struct yf1437 F;
memset((void *)&F, 0, sizeof F);
F.v3672 = yr1276_TLn();
if ((yr1266_TK() == v177)) {
F.v3658 = yr1245_NewNode(v642, F.v3672);
((*(yR95 *)rt_nil_check(F.v3658))).f_name = yr1322_Ident();
((*(yR95 *)rt_nil_check(F.v3658))).f_a = yr1441_ParseQualifier();
{ void * rv3673 = F.v3658;
return rv3673; }
}
if ((!(yr1266_TK() == v180))) {
yr1124_FailS(F.v3672, y_str("expected a representation", 25));
}
F.v3670 = yr1271_TV();
if ((((F.v3670 == v450)) || ((F.v3670 == v372)))) {
F.v3658 = yr1245_NewNode(v645, F.v3672);
if ((F.v3670 == v372)) {
((*(yR95 *)rt_nil_check(F.v3658))).f_flag = INT64_C(1);
}
yr1300_Skip();
yr1316_Expect(v564);
((*(yR95 *)rt_nil_check(F.v3658))).f_a = yr1426_ParseIds();
yr1316_Expect(v567);
((*(yR95 *)rt_nil_check(F.v3658))).f_b = yr1441_ParseQualifier();
{ void * rv3676 = F.v3658;
return rv3676; }
}
if ((F.v3670 == v204)) {
F.v3658 = yr1245_NewNode(v648, F.v3672);
yr1300_Skip();
yr1316_Expect(v564);
F.v3668 = ((void *)0);
for (;;) {
if ((!(yr1266_TK() == v195))) {
yr1124_FailS(yr1276_TLn(), y_str("an ALPHABET lists character literals", 36));
}
F.v3666 = yr1245_NewNode(v738, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3666))).f_text = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
yr1300_Skip();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3658))).f_a, &F.v3668, F.v3666);
if ((!yr1305_Accept(v576))) {
goto yl_3677;
}
}
yl_3677: ;
yr1316_Expect(v567);
((*(yR95 *)rt_nil_check(F.v3658))).f_b = yr1441_ParseQualifier();
{ void * rv3679 = F.v3658;
return rv3679; }
}
if ((F.v3670 == v210)) {
F.v3658 = yr1245_NewNode(v651, F.v3672);
yr1300_Skip();
yr1316_Expect(v564);
F.v3668 = ((void *)0);
for (;;) {
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3658))).f_a, &F.v3668, yr1416_ParseRep());
if ((!yr1305_Accept(v576))) {
goto yl_3680;
}
}
yl_3680: ;
yr1316_Expect(v363);
((*(yR95 *)rt_nil_check(F.v3658))).f_b = yr1416_ParseRep();
yr1316_Expect(v567);
{ void * rv3681 = F.v3658;
return rv3681; }
}
if ((F.v3670 == v402)) {
F.v3658 = yr1245_NewNode(v654, F.v3672);
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3658))).f_a = yr1431_ParseFieldGroups();
if (yr1305_Accept(v420)) {
F.v3660 = yr1245_NewNode(v678, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3660))).f_name = yr1322_Ident();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3660))).f_b = yr1416_ParseRep();
F.v3664 = ((void *)0);
while (yr1305_Accept(v237)) {
F.v3662 = yr1245_NewNode(v681, yr1276_TLn());
F.v3668 = ((void *)0);
for (;;) {
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3662))).f_a, &F.v3668, yr1513_ParseExpr());
if ((!yr1305_Accept(v576))) {
goto yl_3682;
}
}
yl_3682: ;
yr1316_Expect(v504);
((*(yR95 *)rt_nil_check(F.v3662))).f_b = yr1431_ParseFieldGroups();
while (yr1305_Accept(v579)) {
}
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3660))).f_a, &F.v3664, F.v3662);
}
yr1316_Expect(v291);
if (yr1305_Accept(v579)) {
}
((*(yR95 *)rt_nil_check(F.v3658))).f_b = F.v3660;
}
yr1316_Expect(v288);
{ void * rv3683 = F.v3658;
return rv3683; }
}
if (((((F.v3670 == v312)) || ((F.v3670 == v381))) || ((F.v3670 == v423)))) {
if ((F.v3670 == v312)) {
F.v3658 = yr1245_NewNode(v657, F.v3672);
} else if ((F.v3670 == v381)) {
F.v3658 = yr1245_NewNode(v660, F.v3672);
} else {
F.v3658 = yr1245_NewNode(v663, F.v3672);
}
yr1300_Skip();
yr1316_Expect(v564);
((*(yR95 *)rt_nil_check(F.v3658))).f_a = yr1416_ParseRep();
yr1316_Expect(v567);
{ void * rv3684 = F.v3658;
return rv3684; }
}
yr1124_FailS(F.v3672, y_str("expected a representation", 25));
{ void * rv3686 = ((void *)0);
return rv3686; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1441_ParseQualifier(void) {
struct yf1442 F;
memset((void *)&F, 0, sizeof F);
if ((!yr1288_Is(v570))) {
{ void * rv3690 = ((void *)0);
return rv3690; }
}
F.v3689 = yr1245_NewNode(v672, yr1276_TLn());
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3689))).f_a = yr1513_ParseExpr();
yr1316_Expect(v507);
((*(yR95 *)rt_nil_check(F.v3689))).f_b = yr1513_ParseExpr();
yr1316_Expect(v573);
if (yr1305_Accept(v417)) {
((*(yR95 *)rt_nil_check(F.v3689))).f_c = yr1518_ParseSimple();
} else if (yr1305_Accept(v384)) {
((*(yR95 *)rt_nil_check(F.v3689))).f_d = yr1518_ParseSimple();
}
{ void * rv3691 = F.v3689;
return rv3691; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1446_IsStop(void) {
struct yf1447 F;
memset((void *)&F, 0, sizeof F);
if ((yr1266_TK() == v174)) {
{ rt_int rv3696 = 1;
return rv3696; }
}
if ((!(yr1266_TK() == v180))) {
{ rt_int rv3698 = 0;
return rv3698; }
}
F.v3694 = yr1271_TV();
{ rt_int rv3699 = ((((((((((((((((F.v3694 == v255)) || ((F.v3694 == v252))) || ((F.v3694 == v270))) || ((F.v3694 == v237))) || ((F.v3694 == v291))) || ((F.v3694 == v297))) || ((F.v3694 == v264))) || ((F.v3694 == v273))) || ((F.v3694 == v258))) || ((F.v3694 == v261))) || ((F.v3694 == v282))) || ((F.v3694 == v267))) || ((F.v3694 == v285))) || ((F.v3694 == v276))) || ((F.v3694 == v279)));
return rv3699; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1451_ParseStatements(rt_int a_p1452) {
struct yf1453 F;
memset((void *)&F, 0, sizeof F);
F.p1452 = a_p1452;
F.v3703 = ((void *)0);
F.v3705 = ((void *)0);
F.v3707 = ((void *)0);
for (;;) {
while (yr1305_Accept(v579)) {
}
if (yr1446_IsStop()) {
goto yl_3710;
}
F.v3709 = INT64_C(0);
if (((F.p1452 && yr1294_IsIdAt(INT64_C(0))) && yr1281_IsAt(INT64_C(1), v582))) {
F.v3709 = yr1322_Ident();
yr1300_Skip();
}
F.v3707 = yr1457_ParseStatement();
((*(yR95 *)rt_nil_check(F.v3707))).f_text = F.v3709;
yr1252_Link(&F.v3703, &F.v3705, F.v3707);
if ((!yr1288_Is(v579))) {
goto yl_3710;
}
}
yl_3710: ;
{ void * rv3714 = F.v3703;
return rv3714; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1457_ParseStatement(void) {
struct yf1458 F;
memset((void *)&F, 0, sizeof F);
F.v3731 = yr1276_TLn();
if ((yr1266_TK() == v180)) {
F.v3729 = yr1271_TV();
if ((F.v3729 == v216)) {
yr1300_Skip();
F.v3717 = yr1245_NewNode(v690, F.v3731);
((*(yR95 *)rt_nil_check(F.v3717))).f_a = yr1513_ParseExpr();
{ void * rv3732 = F.v3717;
return rv3732; }
}
if ((F.v3729 == v321)) {
yr1300_Skip();
F.v3717 = yr1245_NewNode(v693, F.v3731);
((*(yR95 *)rt_nil_check(F.v3717))).f_name = yr1322_Ident();
{ void * rv3733 = F.v3717;
return rv3733; }
}
if ((F.v3729 == v303)) {
yr1300_Skip();
F.v3717 = yr1245_NewNode(v696, F.v3731);
((*(yR95 *)rt_nil_check(F.v3717))).f_name = yr1322_Ident();
{ void * rv3734 = F.v3717;
return rv3734; }
}
if ((F.v3729 == v411)) {
yr1300_Skip();
F.v3717 = yr1245_NewNode(v699, F.v3731);
if ((!((yr1288_Is(v579) || yr1446_IsStop())))) {
((*(yR95 *)rt_nil_check(F.v3717))).f_a = yr1513_ParseExpr();
}
{ void * rv3735 = F.v3717;
return rv3735; }
}
if ((F.v3729 == v438)) {
yr1300_Skip();
{ void * rv3736 = yr1245_NewNode(v702, F.v3731);
return rv3736; }
}
if ((F.v3729 == v396)) {
yr1300_Skip();
F.v3717 = yr1245_NewNode(v705, F.v3731);
if (yr1294_IsIdAt(INT64_C(0))) {
((*(yR95 *)rt_nil_check(F.v3717))).f_name = yr1322_Ident();
}
{ void * rv3738 = F.v3717;
return rv3738; }
}
if ((F.v3729 == v324)) {
yr1300_Skip();
F.v3717 = yr1245_NewNode(v708, F.v3731);
F.v3721 = ((void *)0);
F.v3719 = yr1245_NewNode(v726, F.v3731);
((*(yR95 *)rt_nil_check(F.v3719))).f_a = yr1513_ParseExpr();
yr1316_Expect(v441);
((*(yR95 *)rt_nil_check(F.v3719))).f_b = yr1451_ParseStatements(0);
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3717))).f_a, &F.v3721, F.v3719);
while (yr1288_Is(v255)) {
F.v3719 = yr1245_NewNode(v726, yr1276_TLn());
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3719))).f_a = yr1513_ParseExpr();
yr1316_Expect(v441);
((*(yR95 *)rt_nil_check(F.v3719))).f_b = yr1451_ParseStatements(0);
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3717))).f_a, &F.v3721, F.v3719);
}
if (yr1305_Accept(v252)) {
((*(yR95 *)rt_nil_check(F.v3717))).f_flag = INT64_C(1);
((*(yR95 *)rt_nil_check(F.v3717))).f_b = yr1451_ParseStatements(0);
}
yr1316_Expect(v270);
{ void * rv3743 = F.v3717;
return rv3743; }
}
if ((F.v3729 == v420)) {
yr1300_Skip();
F.v3717 = yr1245_NewNode(v711, F.v3731);
((*(yR95 *)rt_nil_check(F.v3717))).f_a = yr1513_ParseExpr();
F.v3721 = ((void *)0);
while (yr1288_Is(v237)) {
F.v3719 = yr1245_NewNode(v726, yr1276_TLn());
yr1300_Skip();
F.v3725 = ((void *)0);
for (;;) {
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3719))).f_a, &F.v3725, yr1513_ParseExpr());
if ((!yr1305_Accept(v576))) {
goto yl_3744;
}
}
yl_3744: ;
yr1316_Expect(v504);
((*(yR95 *)rt_nil_check(F.v3719))).f_b = yr1451_ParseStatements(0);
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3717))).f_b, &F.v3721, F.v3719);
}
if (yr1305_Accept(v252)) {
((*(yR95 *)rt_nil_check(F.v3717))).f_flag = INT64_C(1);
((*(yR95 *)rt_nil_check(F.v3717))).f_c = yr1451_ParseStatements(0);
}
yr1316_Expect(v291);
{ void * rv3748 = F.v3717;
return rv3748; }
}
if ((F.v3729 == v456)) {
yr1300_Skip();
F.v3717 = yr1245_NewNode(v714, F.v3731);
((*(yR95 *)rt_nil_check(F.v3717))).f_a = yr1513_ParseExpr();
yr1316_Expect(v249);
((*(yR95 *)rt_nil_check(F.v3717))).f_b = yr1451_ParseStatements(0);
yr1316_Expect(v297);
{ void * rv3750 = F.v3717;
return rv3750; }
}
if ((F.v3729 == v315)) {
yr1300_Skip();
F.v3717 = yr1245_NewNode(v717, F.v3731);
((*(yR95 *)rt_nil_check(F.v3717))).f_name = yr1322_Ident();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3717))).f_a = yr1416_ParseRep();
yr1316_Expect(v249);
((*(yR95 *)rt_nil_check(F.v3717))).f_b = yr1451_ParseStatements(0);
yr1316_Expect(v264);
{ void * rv3752 = F.v3717;
return rv3752; }
}
if ((F.v3729 == v345)) {
yr1300_Skip();
F.v3717 = yr1245_NewNode(v720, F.v3731);
((*(yR95 *)rt_nil_check(F.v3717))).f_name = yr1322_Ident();
((*(yR95 *)rt_nil_check(F.v3717))).f_b = yr1451_ParseStatements(0);
yr1316_Expect(v273);
yr1327_CloseName(((*(yR95 *)rt_nil_check(F.v3717))).f_name, F.v3731);
{ void * rv3754 = F.v3717;
return rv3754; }
}
if ((((F.v3729 == v234)) || ((F.v3729 == v426)))) {
F.v3717 = yr1245_NewNode(v723, F.v3731);
if (yr1305_Accept(v426)) {
((*(yR95 *)rt_nil_check(F.v3717))).f_flag = INT64_C(1);
}
yr1316_Expect(v234);
((*(yR95 *)rt_nil_check(F.v3717))).f_a = yr1360_ParseBlock();
yr1316_Expect(v258);
{ void * rv3756 = F.v3717;
return rv3756; }
}
}
F.v3727 = yr1544_ParseDesignator();
if (yr1305_Accept(v501)) {
F.v3717 = yr1245_NewNode(v684, F.v3731);
((*(yR95 *)rt_nil_check(F.v3717))).f_a = F.v3727;
((*(yR95 *)rt_nil_check(F.v3717))).f_b = yr1513_ParseExpr();
{ void * rv3757 = F.v3717;
return rv3757; }
}
if ((!(((*(yR95 *)rt_nil_check(F.v3727))).f_kind == v750))) {
yr1124_FailS(F.v3731, y_str("expected a statement", 20));
}
F.v3717 = yr1245_NewNode(v687, F.v3731);
((*(yR95 *)rt_nil_check(F.v3717))).f_a = F.v3727;
{ void * rv3759 = F.v3717;
return rv3759; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1462_OpAt(void) {
struct yf1463 F;
memset((void *)&F, 0, sizeof F);
if ((((yr1266_TK() == v183)) || ((yr1266_TK() == v180)))) {
{ rt_int rv3761 = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
return rv3761; }
}
{ rt_int rv3763 = INT64_C(0);
return rv3763; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1467_IsRel(rt_int a_p1468) {
struct yf1469 F;
memset((void *)&F, 0, sizeof F);
F.p1468 = a_p1468;
{ rt_int rv3766 = ((((((((((((((((((((F.p1468 == v330)) || ((F.p1468 == v540))) || ((F.p1468 == v555))) || ((F.p1468 == v558))) || ((F.p1468 == v510))) || ((F.p1468 == v561))) || ((F.p1468 == v513))) || ((F.p1468 == v516))) || ((F.p1468 == v471))) || ((F.p1468 == v519))) || ((F.p1468 == v474))) || ((F.p1468 == v522))) || ((F.p1468 == v483))) || ((F.p1468 == v477))) || ((F.p1468 == v465))) || ((F.p1468 == v525))) || ((F.p1468 == v486))) || ((F.p1468 == v480))) || ((F.p1468 == v468)));
return rv3766; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1473_IsAssocMul(rt_int a_p1474) {
struct yf1475 F;
memset((void *)&F, 0, sizeof F);
F.p1474 = a_p1474;
{ rt_int rv3769 = (((F.p1474 == v549)) || ((F.p1474 == v207)));
return rv3769; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1479_IsNonAssocMul(rt_int a_p1480) {
struct yf1481 F;
memset((void *)&F, 0, sizeof F);
F.p1480 = a_p1480;
{ rt_int rv3772 = ((((((((F.p1480 == v552)) || ((F.p1480 == v246))) || ((F.p1480 == v348))) || ((F.p1480 == v528))) || ((F.p1480 == v489))) || ((F.p1480 == v531))) || ((F.p1480 == v492)));
return rv3772; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1485_IsAssocAdd(rt_int a_p1486) {
struct yf1487 F;
memset((void *)&F, 0, sizeof F);
F.p1486 = a_p1486;
{ rt_int rv3775 = (((F.p1486 == v543)) || ((F.p1486 == v369)));
return rv3775; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1491_IsNonAssocAdd(rt_int a_p1492) {
struct yf1493 F;
memset((void *)&F, 0, sizeof F);
F.p1492 = a_p1492;
{ rt_int rv3778 = (((((((F.p1492 == v546)) || ((F.p1492 == v459))) || ((F.p1492 == v534))) || ((F.p1492 == v495))) || ((F.p1492 == v537))) || ((F.p1492 == v498)));
return rv3778; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1497_Bin(rt_int a_p1498, void * a_p1499, void * a_p1500, rt_int a_p1501) {
struct yf1502 F;
memset((void *)&F, 0, sizeof F);
F.p1498 = a_p1498;
F.p1499 = a_p1499;
F.p1500 = a_p1500;
F.p1501 = a_p1501;
F.v3785 = yr1245_NewNode(v768, F.p1501);
((*(yR95 *)rt_nil_check(F.v3785))).f_name = F.p1498;
((*(yR95 *)rt_nil_check(F.v3785))).f_a = F.p1499;
((*(yR95 *)rt_nil_check(F.v3785))).f_b = F.p1500;
{ void * rv3786 = F.v3785;
return rv3786; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1506_NeedParens(rt_int a_p1507, rt_int a_p1508) {
struct yf1509 F;
memset((void *)&F, 0, sizeof F);
F.p1507 = a_p1507;
F.p1508 = a_p1508;
yr986_SB();
yr1004_ST(F.p1507);
yr997_SA(y_str(" next to another operator of its level needs parentheses (VIII.A)", 65));
F.v3791 = yr1016_SE();
yr1117_Fail(F.p1508, F.v3791);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1513_ParseExpr(void) {
struct yf1514 F;
memset((void *)&F, 0, sizeof F);
F.v3799 = yr1276_TLn();
F.v3795 = yr1518_ParseSimple();
F.v3797 = yr1462_OpAt();
if (yr1467_IsRel(F.v3797)) {
yr1300_Skip();
F.v3795 = yr1497_Bin(F.v3797, F.v3795, yr1518_ParseSimple(), F.v3799);
if (yr1467_IsRel(yr1462_OpAt())) {
yr1506_NeedParens(F.v3797, F.v3799);
}
}
{ void * rv3800 = F.v3795;
return rv3800; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1518_ParseSimple(void) {
struct yf1519 F;
memset((void *)&F, 0, sizeof F);
F.v3809 = yr1276_TLn();
if (yr1288_Is(v546)) {
yr1300_Skip();
F.v3805 = yr1245_NewNode(v765, F.v3809);
((*(yR95 *)rt_nil_check(F.v3805))).f_a = yr1523_ParseTerm();
F.v3807 = yr1462_OpAt();
if ((yr1485_IsAssocAdd(F.v3807) || yr1491_IsNonAssocAdd(F.v3807))) {
yr1506_NeedParens(rt_range(v546, INT64_C(0), INT64_C(4000000)), F.v3809);
}
{ void * rv3810 = F.v3805;
return rv3810; }
}
F.v3803 = yr1523_ParseTerm();
F.v3807 = yr1462_OpAt();
if (yr1491_IsNonAssocAdd(F.v3807)) {
yr1300_Skip();
F.v3803 = yr1497_Bin(F.v3807, F.v3803, yr1523_ParseTerm(), F.v3809);
if ((yr1485_IsAssocAdd(yr1462_OpAt()) || yr1491_IsNonAssocAdd(yr1462_OpAt()))) {
yr1506_NeedParens(F.v3807, F.v3809);
}
{ void * rv3811 = F.v3803;
return rv3811; }
}
while (yr1485_IsAssocAdd(F.v3807)) {
yr1300_Skip();
F.v3803 = yr1497_Bin(F.v3807, F.v3803, yr1523_ParseTerm(), F.v3809);
if (yr1491_IsNonAssocAdd(yr1462_OpAt())) {
yr1506_NeedParens(yr1462_OpAt(), F.v3809);
}
F.v3807 = yr1462_OpAt();
}
{ void * rv3812 = F.v3803;
return rv3812; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1523_ParseTerm(void) {
struct yf1524 F;
memset((void *)&F, 0, sizeof F);
F.v3819 = yr1276_TLn();
F.v3815 = yr1539_ParseFactor();
F.v3817 = yr1462_OpAt();
if (yr1479_IsNonAssocMul(F.v3817)) {
yr1300_Skip();
F.v3815 = yr1497_Bin(F.v3817, F.v3815, yr1539_ParseFactor(), F.v3819);
if ((yr1473_IsAssocMul(yr1462_OpAt()) || yr1479_IsNonAssocMul(yr1462_OpAt()))) {
yr1506_NeedParens(F.v3817, F.v3819);
}
{ void * rv3820 = F.v3815;
return rv3820; }
}
while (yr1473_IsAssocMul(F.v3817)) {
yr1300_Skip();
F.v3815 = yr1497_Bin(F.v3817, F.v3815, yr1539_ParseFactor(), F.v3819);
if (yr1479_IsNonAssocMul(yr1462_OpAt())) {
yr1506_NeedParens(yr1462_OpAt(), F.v3819);
}
F.v3817 = yr1462_OpAt();
}
{ void * rv3821 = F.v3815;
return rv3821; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1528_IsLiteralAt(rt_int a_p1529) {
struct yf1530 F;
memset((void *)&F, 0, sizeof F);
F.p1529 = a_p1529;
F.v3825 = ((rt_int *)(v1153).p)[y_ix1(v1153, rt_add(v1234, F.p1529))];
{ rt_int rv3827 = (((((((F.v3825 == v186)) || ((F.v3825 == v189))) || ((F.v3825 == v192))) || ((F.v3825 == v195))) || ((F.v3825 == v198))) || yr1281_IsAt(F.p1529, v357));
return rv3827; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1534_ParseLiteral(void) {
struct yf1535 F;
memset((void *)&F, 0, sizeof F);
F.v3832 = yr1266_TK();
F.v3834 = yr1276_TLn();
if ((F.v3832 == v186)) {
F.v3830 = yr1245_NewNode(v729, F.v3834);
((*(yR95 *)rt_nil_check(F.v3830))).f_ival = yr1271_TV();
} else if ((F.v3832 == v189)) {
F.v3830 = yr1245_NewNode(v732, F.v3834);
((*(yR95 *)rt_nil_check(F.v3830))).f_text = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v3832 == v192)) {
F.v3830 = yr1245_NewNode(v735, F.v3834);
((*(yR95 *)rt_nil_check(F.v3830))).f_text = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v3832 == v195)) {
F.v3830 = yr1245_NewNode(v738, F.v3834);
((*(yR95 *)rt_nil_check(F.v3830))).f_text = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v3832 == v198)) {
F.v3830 = yr1245_NewNode(v741, F.v3834);
((*(yR95 *)rt_nil_check(F.v3830))).f_text = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
} else {
F.v3830 = yr1245_NewNode(v744, F.v3834);
}
yr1300_Skip();
{ void * rv3835 = F.v3830;
return rv3835; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1539_ParseFactor(void) {
struct yf1540 F;
memset((void *)&F, 0, sizeof F);
F.v3842 = yr1276_TLn();
if (yr1288_Is(v360)) {
yr1300_Skip();
F.v3838 = yr1245_NewNode(v762, F.v3842);
((*(yR95 *)rt_nil_check(F.v3838))).f_a = yr1539_ParseFactor();
{ void * rv3843 = F.v3838;
return rv3843; }
}
if (yr1288_Is(v564)) {
yr1300_Skip();
F.v3838 = yr1245_NewNode(v771, F.v3842);
((*(yR95 *)rt_nil_check(F.v3838))).f_a = yr1513_ParseExpr();
yr1316_Expect(v567);
{ void * rv3844 = F.v3838;
return rv3844; }
}
if (yr1528_IsLiteralAt(INT64_C(0))) {
{ void * rv3846 = yr1534_ParseLiteral();
return rv3846; }
}
if (yr1294_IsIdAt(INT64_C(0))) {
if ((yr1528_IsLiteralAt(INT64_C(1)) || ((yr1294_IsIdAt(INT64_C(1)) && (!((((((yr1281_IsAt(INT64_C(2), v564) || yr1281_IsAt(INT64_C(2), v570)) || yr1281_IsAt(INT64_C(2), v585)) || yr1281_IsAt(INT64_C(2), v588)) || yr1281_IsAt(INT64_C(2), v501)) || yr1281_IsAt(INT64_C(2), v582)))))))) {
F.v3840 = yr1322_Ident();
if (yr1294_IsIdAt(INT64_C(0))) {
F.v3838 = yr1245_NewNode(v747, F.v3842);
((*(yR95 *)rt_nil_check(F.v3838))).f_name = yr1322_Ident();
} else {
F.v3838 = yr1534_ParseLiteral();
}
((*(yR95 *)rt_nil_check(F.v3838))).f_d = yr1245_NewNode(v639, F.v3842);
((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v3838))).f_d))).f_name = F.v3840;
{ void * rv3857 = F.v3838;
return rv3857; }
}
{ void * rv3858 = yr1544_ParseDesignator();
return rv3858; }
}
yr1132_FailN(F.v3842, yr1311_TokText(), y_str(" cannot begin an operand", 24));
{ void * rv3860 = ((void *)0);
return rv3860; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1544_ParseDesignator(void) {
struct yf1545 F;
memset((void *)&F, 0, sizeof F);
F.v3869 = yr1276_TLn();
F.v3863 = yr1245_NewNode(v747, F.v3869);
((*(yR95 *)rt_nil_check(F.v3863))).f_name = yr1322_Ident();
if (yr1305_Accept(v564)) {
((*(yR95 *)rt_nil_check(F.v3863))).f_kind = v750;
F.v3867 = ((void *)0);
while ((!yr1288_Is(v567))) {
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3863))).f_a, &F.v3867, yr1513_ParseExpr());
if ((!yr1305_Accept(v576))) {
yr1549_EXIT_ARGS();
}
}
yr1316_Expect(v567);
}
for (;;) {
if (yr1305_Accept(v585)) {
F.v3865 = yr1245_NewNode(v753, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3865))).f_a = F.v3863;
((*(yR95 *)rt_nil_check(F.v3865))).f_name = yr1322_Ident();
F.v3863 = F.v3865;
} else if (yr1305_Accept(v570)) {
F.v3865 = yr1245_NewNode(v756, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3865))).f_a = F.v3863;
F.v3867 = ((void *)0);
for (;;) {
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3865))).f_b, &F.v3867, yr1513_ParseExpr());
if ((!yr1305_Accept(v576))) {
goto yl_3871;
}
}
yl_3871: ;
yr1316_Expect(v573);
F.v3863 = F.v3865;
} else if (yr1305_Accept(v588)) {
F.v3865 = yr1245_NewNode(v759, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3865))).f_a = F.v3863;
F.v3863 = F.v3865;
} else {
goto yl_3870;
}
}
yl_3870: ;
{ void * rv3872 = F.v3863;
return rv3872; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1549_EXIT_ARGS(void) {
struct yf1550 F;
memset((void *)&F, 0, sizeof F);
if ((!yr1288_Is(v567))) {
yr1316_Expect(v567);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1554_ParseProgram(void) {
struct yf1555 F;
memset((void *)&F, 0, sizeof F);
F.v3876 = ((void *)0);
F.v3878 = ((void *)0);
while ((!(yr1266_TK() == v174))) {
if ((!((yr1288_Is(v351) || yr1288_Is(v354))))) {
yr1124_FailS(yr1276_TLn(), y_str("a segment is a module (XIII.A)", 30));
}
yr1252_Link(&F.v3876, &F.v3878, yr1350_ParseModule());
while (yr1305_Accept(v579)) {
}
}
{ void * rv3880 = F.v3876;
return rv3880; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1588_NewSym(rt_int a_p1589, rt_int a_p1590) {
struct yf1591 F;
memset((void *)&F, 0, sizeof F);
F.p1589 = a_p1589;
F.p1590 = a_p1590;
({ F.v3885 = rt_alloc(sizeof(yR115)); });
(*(yR115 *)rt_nil_check(F.v3885)) = ((yR115){ .f_kind = F.p1589, .f_name = F.p1590, .f_rep = ((void *)0), .f_cname = INT64_C(0), .f_level = INT64_C(0), .f_byref = 0, .f_readonly = 0, .f_mval = INT64_C(0), .f_hasmv = 0, .f_params = ((void *)0), .f_nparams = INT64_C(0), .f_ret = ((void *)0), .f_func = 0, .f_decl = ((void *)0), .f_depth = INT64_C(0), .f_target = ((void *)0), .f_members = ((void *)0), .f_mnext = ((void *)0), .f_chain = ((void *)0), .f_stack = ((void *)0), .f_alt = ((void *)0), .f_monitor = ((void *)0), .f_serial = INT64_C(0) });
((*(yR115 *)rt_nil_check(F.v3885))).f_serial = yr1141_NewSerial();
{ void * rv3896 = F.v3885;
return rv3896; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1595_OpenScope(rt_int a_p1596) {
struct yf1597 F;
memset((void *)&F, 0, sizeof F);
F.p1596 = a_p1596;
({ F.v3900 = rt_alloc(sizeof(yR120)); });
(*(yR120 *)rt_nil_check(F.v3900)) = ((yR120){ .f_syms = ((void *)0), .f_closed = F.p1596, .f_module = ((void *)0), .f_level = v1576, .f_deferred = ((void *)0), .f_up = ((void *)0) });
if ((v1570 >= INT64_C(0))) {
((*(yR120 *)rt_nil_check(F.v3900))).f_up = ((void * *)(v1568).p)[y_ix1(v1568, v1570)];
}
v1570 = rt_range(rt_add(v1570, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1568).p)[y_ix1(v1568, v1570)] = F.v3900;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1601_CloseScope(void) {
struct yf1602 F;
memset((void *)&F, 0, sizeof F);
F.v3906 = ((*(yR120 *)rt_nil_check(((void * *)(v1568).p)[y_ix1(v1568, v1570)]))).f_syms;
while ((!(F.v3906 == ((void *)0)))) {
F.v3912 = rt_range(rt_mod(((*(yR115 *)rt_nil_check(F.v3906))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3908 = ((void * *)(v1559).p)[y_ix1(v1559, F.v3912)];
F.v3910 = ((void *)0);
while ((((!(F.v3908 == ((void *)0)))) && ((!(F.v3908 == F.v3906))))) {
F.v3910 = F.v3908;
F.v3908 = ((*(yR115 *)rt_nil_check(F.v3908))).f_chain;
}
if ((F.v3908 == F.v3906)) {
if ((F.v3910 == ((void *)0))) {
((void * *)(v1559).p)[y_ix1(v1559, F.v3912)] = ((*(yR115 *)rt_nil_check(F.v3906))).f_chain;
} else {
((*(yR115 *)rt_nil_check(F.v3910))).f_chain = ((*(yR115 *)rt_nil_check(F.v3906))).f_chain;
}
}
F.v3906 = ((*(yR115 *)rt_nil_check(F.v3906))).f_stack;
}
v1570 = rt_range(rt_sub(v1570, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1606_Visible(void * a_p1607) {
struct yf1608 F;
memset((void *)&F, 0, sizeof F);
F.p1607 = a_p1607;
{ rt_int rv3920 = (((((*(yR115 *)rt_nil_check(F.p1607))).f_depth >= v1573)) || ((((*(yR115 *)rt_nil_check(F.p1607))).f_depth == INT64_C(0))));
return rv3920; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1612_Find(rt_int a_p1613) {
struct yf1614 F;
memset((void *)&F, 0, sizeof F);
F.p1613 = a_p1613;
F.v3924 = ((void * *)(v1559).p)[y_ix1(v1559, rt_mod(F.p1613, INT64_C(8192)))];
while ((!(F.v3924 == ((void *)0)))) {
if ((((((*(yR115 *)rt_nil_check(F.v3924))).f_name == F.p1613)) && yr1606_Visible(F.v3924))) {
{ void * rv3927 = F.v3924;
return rv3927; }
}
F.v3924 = ((*(yR115 *)rt_nil_check(F.v3924))).f_chain;
}
{ void * rv3928 = ((void *)0);
return rv3928; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1618_FindHere(rt_int a_p1619) {
struct yf1620 F;
memset((void *)&F, 0, sizeof F);
F.p1619 = a_p1619;
F.v3932 = ((void * *)(v1559).p)[y_ix1(v1559, rt_mod(F.p1619, INT64_C(8192)))];
while ((!(F.v3932 == ((void *)0)))) {
if ((((((*(yR115 *)rt_nil_check(F.v3932))).f_name == F.p1619)) && ((((*(yR115 *)rt_nil_check(F.v3932))).f_depth == v1570)))) {
{ void * rv3935 = F.v3932;
return rv3935; }
}
F.v3932 = ((*(yR115 *)rt_nil_check(F.v3932))).f_chain;
}
{ void * rv3936 = ((void *)0);
return rv3936; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1624_Lookup(rt_int a_p1625, rt_int a_p1626) {
struct yf1627 F;
memset((void *)&F, 0, sizeof F);
F.p1625 = a_p1625;
F.p1626 = a_p1626;
F.v3941 = yr1612_Find(F.p1625);
if ((F.v3941 == ((void *)0))) {
yr1132_FailN(F.p1626, F.p1625, y_str(" is not declared here", 21));
}
if ((((*(yR115 *)rt_nil_check(F.v3941))).f_kind == v864)) {
F.v3943 = ((*(yR115 *)rt_nil_check(F.v3941))).f_chain;
while ((!(F.v3943 == ((void *)0)))) {
if (((((((((*(yR115 *)rt_nil_check(F.v3943))).f_name == F.p1625)) && ((((*(yR115 *)rt_nil_check(F.v3943))).f_depth == ((*(yR115 *)rt_nil_check(F.v3941))).f_depth))) && ((((*(yR115 *)rt_nil_check(F.v3943))).f_kind == v864))) && ((!(yr1677_Real(F.v3943) == yr1677_Real(F.v3941))))) && ((!(((*(yR115 *)rt_nil_check(yr1677_Real(F.v3941)))).f_kind == v843))))) {
yr1132_FailN(F.p1626, F.p1625, y_str(" is exported here by two modules: name it with FROM (X.B.4)", 59));
}
F.v3943 = ((*(yR115 *)rt_nil_check(F.v3943))).f_chain;
}
}
{ void * rv3946 = F.v3941;
return rv3946; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1631_Ambiguous(void * a_p1632) {
struct yf1633 F;
memset((void *)&F, 0, sizeof F);
F.p1632 = a_p1632;
F.v3950 = ((*(yR115 *)rt_nil_check(F.p1632))).f_chain;
while ((!(F.v3950 == ((void *)0)))) {
if ((((((((*(yR115 *)rt_nil_check(F.v3950))).f_name == ((*(yR115 *)rt_nil_check(F.p1632))).f_name)) && yr1606_Visible(F.v3950)) && ((((*(yR115 *)rt_nil_check(F.v3950))).f_kind == v843))) && ((!(((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v3950))).f_rep))).f_tid == ((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.p1632))).f_rep))).f_tid))))) {
{ rt_int rv3952 = 1;
return rv3952; }
}
F.v3950 = ((*(yR115 *)rt_nil_check(F.v3950))).f_chain;
}
{ rt_int rv3954 = 0;
return rv3954; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1637_FindLit(rt_int a_p1638, void * a_p1639) {
struct yf1640 F;
memset((void *)&F, 0, sizeof F);
F.p1638 = a_p1638;
F.p1639 = a_p1639;
F.v3959 = ((void * *)(v1559).p)[y_ix1(v1559, rt_mod(F.p1638, INT64_C(8192)))];
while ((!(F.v3959 == ((void *)0)))) {
if (((((((*(yR115 *)rt_nil_check(F.v3959))).f_name == F.p1638)) && ((((*(yR115 *)rt_nil_check(F.v3959))).f_kind == v843))) && ((((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v3959))).f_rep))).f_tid == ((*(yR100 *)rt_nil_check(F.p1639))).f_tid)))) {
{ void * rv3962 = F.v3959;
return rv3962; }
}
F.v3959 = ((*(yR115 *)rt_nil_check(F.v3959))).f_chain;
}
{ void * rv3963 = ((void *)0);
return rv3963; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1644_Define(void * a_p1645, rt_int a_p1646) {
struct yf1647 F;
memset((void *)&F, 0, sizeof F);
F.p1645 = a_p1645;
F.p1646 = a_p1646;
F.v3968 = yr1618_FindHere(((*(yR115 *)rt_nil_check(F.p1645))).f_name);
F.v3970 = rt_range(rt_mod(((*(yR115 *)rt_nil_check(F.p1645))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((((!(F.v3968 == ((void *)0)))) && (!((((((*(yR115 *)rt_nil_check(F.v3968))).f_kind == v843)) && ((((*(yR115 *)rt_nil_check(F.p1645))).f_kind == v843)))))) && (!((((((*(yR115 *)rt_nil_check(F.p1645))).f_kind == v846)) && ((((*(yR115 *)rt_nil_check(F.p1645))).f_alt == F.v3968)))))) && (!((((((*(yR115 *)rt_nil_check(F.p1645))).f_kind == v864)) && ((((*(yR115 *)rt_nil_check(F.v3968))).f_kind == v864))))))) {
yr1132_FailN(F.p1646, ((*(yR115 *)rt_nil_check(F.p1645))).f_name, y_str(" is declared twice in this scope", 32));
}
((*(yR115 *)rt_nil_check(F.p1645))).f_depth = v1570;
((*(yR115 *)rt_nil_check(F.p1645))).f_chain = ((void * *)(v1559).p)[y_ix1(v1559, F.v3970)];
((void * *)(v1559).p)[y_ix1(v1559, F.v3970)] = F.p1645;
((*(yR115 *)rt_nil_check(F.p1645))).f_stack = ((*(yR120 *)rt_nil_check(((void * *)(v1568).p)[y_ix1(v1568, v1570)]))).f_syms;
((*(yR120 *)rt_nil_check(((void * *)(v1568).p)[y_ix1(v1568, v1570)]))).f_syms = F.p1645;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1651_Path(rt_int a_p1652, rt_int a_p1653) {
struct yf1654 F;
memset((void *)&F, 0, sizeof F);
F.p1652 = a_p1652;
F.p1653 = a_p1653;
F.v3978 = rt_range(rt_sub(v1576, F.p1652), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.p1652 == INT64_C(0))) {
{ rt_int rv3981 = F.p1653;
return rv3981; }
}
yr986_SB();
if ((F.v3978 == INT64_C(0))) {
yr997_SA(y_str("F.", 2));
} else {
yr997_SA(y_str("F.up->", 6));
while ((F.v3978 > INT64_C(1))) {
yr997_SA(y_str("up->", 4));
F.v3978 = rt_range(rt_sub(F.v3978, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1004_ST(F.p1653);
{ rt_int rv3989 = yr1016_SE();
return rv3989; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1658_FramePtr(rt_int a_p1659) {
struct yf1660 F;
memset((void *)&F, 0, sizeof F);
F.p1659 = a_p1659;
F.v3993 = rt_range(rt_sub(v1576, F.p1659), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.v3993 == INT64_C(0))) {
{ rt_int rv3997 = yr1021_T(y_str("&F", 2));
return rv3997; }
}
yr986_SB();
yr997_SA(y_str("F.up", 4));
while ((F.v3993 > INT64_C(1))) {
yr997_SA(y_str("->up", 4));
F.v3993 = rt_range(rt_sub(F.v3993, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv4003 = yr1016_SE();
return rv4003; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1664_DeclStorage(rt_int a_p1665, rt_int a_p1666) {
struct yf1667 F;
memset((void *)&F, 0, sizeof F);
F.p1665 = a_p1665;
F.p1666 = a_p1666;
yr986_SB();
if ((v1576 == INT64_C(0))) {
yr997_SA(y_str("static ", 7));
}
yr1004_ST(F.p1665);
yr997_SA(y_str(" ", 1));
yr1004_ST(F.p1666);
yr997_SA(y_str(";", 1));
F.v4008 = yr1016_SE();
if ((v1576 == INT64_C(0))) {
yr1070_Put(&v948, F.v4008);
} else {
yr1070_Put(&v958, F.v4008);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1671_SymPath(void * a_p1672) {
struct yf1673 F;
memset((void *)&F, 0, sizeof F);
F.p1672 = a_p1672;
F.v4017 = yr1651_Path(((*(yR115 *)rt_nil_check(F.p1672))).f_level, ((*(yR115 *)rt_nil_check(F.p1672))).f_cname);
if (((*(yR115 *)rt_nil_check(F.p1672))).f_byref) {
yr986_SB();
yr997_SA(y_str("(*", 2));
yr1004_ST(F.v4017);
yr997_SA(y_str(")", 1));
{ rt_int rv4020 = yr1016_SE();
return rv4020; }
}
{ rt_int rv4021 = F.v4017;
return rv4021; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1677_Real(void * a_p1678) {
struct yf1679 F;
memset((void *)&F, 0, sizeof F);
F.p1678 = a_p1678;
F.v4025 = F.p1678;
while ((((*(yR115 *)rt_nil_check(F.v4025))).f_kind == v864)) {
F.v4025 = ((*(yR115 *)rt_nil_check(F.v4025))).f_target;
}
{ void * rv4026 = F.v4025;
return rv4026; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1707_NewRep(rt_int a_p1708, rt_int a_p1709) {
struct yf1710 F;
memset((void *)&F, 0, sizeof F);
F.p1708 = a_p1708;
F.p1709 = a_p1709;
({ F.v4031 = rt_alloc(sizeof(yR100)); });
(*(yR100 *)rt_nil_check(F.v4031)) = ((yR100){ .f_kind = F.p1708, .f_tid = F.p1709, .f_tname = F.p1709, .f_lo = INT64_C(0), .f_hi = INT64_C(0), .f_mlo = INT64_C(0), .f_mhi = INT64_C(0), .f_hasm = 0, .f_scale = INT64_C(0), .f_prec = INT64_C(0), .f_elem = ((void *)0), .f_idx = ((void *)0), .f_nidx = INT64_C(0), .f_link = ((void *)0), .f_lits = ((void *)0), .f_nlits = INT64_C(0), .f_fields = ((void *)0), .f_selector = ((void *)0), .f_cname = INT64_C(0), .f_dname = INT64_C(0), .f_dlevel = INT64_C(0), .f_deep = 0, .f_abstract = 0, .f_opaque = 0, .f_opaqueops = INT64_C(0), .f_ordered = 0, .f_forward = INT64_C(0), .f_fwdscope = INT64_C(0), .f_monitor = ((void *)0), .f_serial = INT64_C(0) });
((*(yR100 *)rt_nil_check(F.v4031))).f_serial = yr1141_NewSerial();
{ void * rv4052 = F.v4031;
return rv4052; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1714_CopyRep(void * a_p1715) {
struct yf1716 F;
memset((void *)&F, 0, sizeof F);
F.p1715 = a_p1715;
({ F.v4056 = rt_alloc(sizeof(yR100)); });
(*(yR100 *)rt_nil_check(F.v4056)) = (*(yR100 *)rt_nil_check(F.p1715));
((*(yR100 *)rt_nil_check(F.v4056))).f_serial = yr1141_NewSerial();
{ void * rv4057 = F.v4056;
return rv4057; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1720_IsDiscrete(void * a_p1721) {
struct yf1722 F;
memset((void *)&F, 0, sizeof F);
F.p1721 = a_p1721;
{ rt_int rv4060 = (((((((*(yR100 *)rt_nil_check(F.p1721))).f_kind == v774)) || ((((*(yR100 *)rt_nil_check(F.p1721))).f_kind == v783))) || ((((*(yR100 *)rt_nil_check(F.p1721))).f_kind == v786))) || ((((*(yR100 *)rt_nil_check(F.p1721))).f_kind == v789)));
return rv4060; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1726_IsNumeric(void * a_p1727) {
struct yf1728 F;
memset((void *)&F, 0, sizeof F);
F.p1727 = a_p1727;
{ rt_int rv4063 = ((((((*(yR100 *)rt_nil_check(F.p1727))).f_kind == v774)) || ((((*(yR100 *)rt_nil_check(F.p1727))).f_kind == v777))) || ((((*(yR100 *)rt_nil_check(F.p1727))).f_kind == v780)));
return rv4063; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1732_IsArrayLike(void * a_p1733) {
struct yf1734 F;
memset((void *)&F, 0, sizeof F);
F.p1733 = a_p1733;
{ rt_int rv4066 = ((((((*(yR100 *)rt_nil_check(F.p1733))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.p1733))).f_kind == v813))) || ((((*(yR100 *)rt_nil_check(F.p1733))).f_kind == v816)));
return rv4066; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1738_IsString(void * a_p1739) {
struct yf1740 F;
memset((void *)&F, 0, sizeof F);
F.p1739 = a_p1739;
if ((((*(yR100 *)rt_nil_check(F.p1739))).f_kind == v816)) {
{ rt_int rv4070 = 1;
return rv4070; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1739))).f_kind == v792)) && ((((*(yR100 *)rt_nil_check(F.p1739))).f_nidx == INT64_C(1))))) {
{ rt_int rv4072 = (((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p1739))).f_elem))).f_kind == v789);
return rv4072; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1739))).f_kind == v813)) && ((((*(yR100 *)rt_nil_check(F.p1739))).f_nidx == INT64_C(1))))) {
{ rt_int rv4074 = (((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p1739))).f_elem))).f_kind == v789);
return rv4074; }
}
{ rt_int rv4076 = 0;
return rv4076; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1744_Deep(void * a_p1745) {
struct yf1746 F;
memset((void *)&F, 0, sizeof F);
F.p1745 = a_p1745;
if (((((((*(yR100 *)rt_nil_check(F.p1745))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.p1745))).f_kind == v813))) || ((((*(yR100 *)rt_nil_check(F.p1745))).f_kind == v816)))) {
{ rt_int rv4080 = 1;
return rv4080; }
}
{ rt_int rv4081 = (((((*(yR100 *)rt_nil_check(F.p1745))).f_kind == v795)) && ((*(yR100 *)rt_nil_check(F.p1745))).f_deep);
return rv4081; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1750_CType(void * a_p1751) {
struct yf1752 F;
memset((void *)&F, 0, sizeof F);
F.p1751 = a_p1751;
F.v4085 = ((*(yR100 *)rt_nil_check(F.p1751))).f_kind;
if (((((F.v4085 == v774)) || ((F.v4085 == v783))) || ((F.v4085 == v786)))) {
{ rt_int rv4087 = yr1021_T(y_str("rt_int", 6));
return rv4087; }
}
if ((F.v4085 == v789)) {
{ rt_int rv4089 = yr1021_T(y_str("unsigned char", 13));
return rv4089; }
}
if ((((F.v4085 == v780)) || ((F.v4085 == v777)))) {
{ rt_int rv4091 = yr1021_T(y_str("double", 6));
return rv4091; }
}
if (((((F.v4085 == v792)) || ((F.v4085 == v813))) || ((F.v4085 == v816)))) {
{ rt_int rv4093 = yr1021_T(y_str("yarr", 4));
return rv4093; }
}
if ((F.v4085 == v795)) {
{ rt_int rv4094 = ((*(yR100 *)rt_nil_check(F.p1751))).f_cname;
return rv4094; }
}
if ((((F.v4085 == v798)) || ((F.v4085 == v819)))) {
{ rt_int rv4096 = yr1021_T(y_str("void *", 6));
return rv4096; }
}
if ((F.v4085 == v801)) {
{ rt_int rv4098 = yr1021_T(y_str("yfile *", 7));
return rv4098; }
}
if ((F.v4085 == v804)) {
{ rt_int rv4100 = yr1021_T(y_str("yset", 4));
return rv4100; }
}
if ((F.v4085 == v807)) {
{ rt_int rv4102 = yr1021_T(y_str("ysig", 4));
return rv4102; }
}
if ((F.v4085 == v810)) {
{ rt_int rv4104 = yr1021_T(y_str("rt_lock", 7));
return rv4104; }
}
{ rt_int rv4106 = yr1021_T(y_str("void", 4));
return rv4106; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1756_DescOf(void * a_p1757) {
struct yf1758 F;
memset((void *)&F, 0, sizeof F);
F.p1757 = a_p1757;
F.v4110 = ((*(yR100 *)rt_nil_check(F.p1757))).f_kind;
if (((((F.v4110 == v774)) || ((F.v4110 == v783))) || ((F.v4110 == v786)))) {
{ rt_int rv4112 = yr1021_T(y_str("&y_d_int", 8));
return rv4112; }
}
if ((F.v4110 == v789)) {
{ rt_int rv4114 = yr1021_T(y_str("&y_d_byte", 9));
return rv4114; }
}
if ((((F.v4110 == v780)) || ((F.v4110 == v777)))) {
{ rt_int rv4116 = yr1021_T(y_str("&y_d_float", 10));
return rv4116; }
}
if ((((F.v4110 == v798)) || ((F.v4110 == v819)))) {
{ rt_int rv4118 = yr1021_T(y_str("&y_d_ptr", 8));
return rv4118; }
}
if ((F.v4110 == v804)) {
{ rt_int rv4120 = yr1021_T(y_str("&y_d_set", 8));
return rv4120; }
}
if ((((F.v4110 == v792)) || ((F.v4110 == v795)))) {
yr986_SB();
yr997_SA(y_str("&", 1));
yr1004_ST(yr1651_Path(((*(yR100 *)rt_nil_check(F.p1757))).f_dlevel, ((*(yR100 *)rt_nil_check(F.p1757))).f_dname));
{ rt_int rv4122 = yr1016_SE();
return rv4122; }
}
if ((F.v4110 == v816)) {
{ rt_int rv4124 = yr1021_T(y_str("&y_d_str", 8));
return rv4124; }
}
{ rt_int rv4126 = yr1021_T(y_str("&y_d_opaque", 11));
return rv4126; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1762_NewDesc(void * a_p1763) {
struct yf1764 F;
memset((void *)&F, 0, sizeof F);
F.p1763 = a_p1763;
((*(yR100 *)rt_nil_check(F.p1763))).f_dname = yr1146_Fresh(y_str("yd_", 3));
((*(yR100 *)rt_nil_check(F.p1763))).f_dlevel = v1576;
yr1664_DeclStorage(yr1021_T(y_str("ydesc", 5)), ((*(yR100 *)rt_nil_check(F.p1763))).f_dname);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1768_SameType(void * a_p1769, void * a_p1770) {
struct yf1771 F;
memset((void *)&F, 0, sizeof F);
F.p1769 = a_p1769;
F.p1770 = a_p1770;
if ((((*(yR100 *)rt_nil_check(F.p1769))).f_tid == ((*(yR100 *)rt_nil_check(F.p1770))).f_tid)) {
{ rt_int rv4135 = 1;
return rv4135; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1769))).f_kind == v816)) && yr1738_IsString(F.p1770))) {
{ rt_int rv4137 = 1;
return rv4137; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1770))).f_kind == v816)) && yr1738_IsString(F.p1769))) {
{ rt_int rv4139 = 1;
return rv4139; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1769))).f_kind == v819)) && ((((*(yR100 *)rt_nil_check(F.p1770))).f_kind == v798)))) {
{ rt_int rv4141 = 1;
return rv4141; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1770))).f_kind == v819)) && ((((*(yR100 *)rt_nil_check(F.p1769))).f_kind == v798)))) {
{ rt_int rv4143 = 1;
return rv4143; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1769))).f_kind == v828)) || ((((*(yR100 *)rt_nil_check(F.p1770))).f_kind == v828)))) {
{ rt_int rv4145 = 1;
return rv4145; }
}
{ rt_int rv4147 = 0;
return rv4147; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1775_TypeClash(rt_int a_p1776, void * a_p1777, void * a_p1778) {
struct yf1779 F;
memset((void *)&F, 0, sizeof F);
F.p1776 = a_p1776;
F.p1777 = a_p1777;
F.p1778 = a_p1778;
yr986_SB();
yr997_SA(y_str("type conflict: ", 15));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1777))).f_tname);
yr997_SA(y_str(" expected, ", 11));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1778))).f_tname);
yr997_SA(y_str(" found", 6));
F.v4153 = yr1016_SE();
yr1117_Fail(F.p1776, F.v4153);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1783_CheckType(rt_int a_p1784, void * a_p1785, void * a_p1786) {
struct yf1787 F;
memset((void *)&F, 0, sizeof F);
F.p1784 = a_p1784;
F.p1785 = a_p1785;
F.p1786 = a_p1786;
if ((!yr1768_SameType(F.p1785, F.p1786))) {
yr1775_TypeClash(F.p1784, F.p1785, F.p1786);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1791_CheckRepresented(void * a_p1792, rt_int a_p1793) {
struct yf1794 F;
memset((void *)&F, 0, sizeof F);
F.p1792 = a_p1792;
F.p1793 = a_p1793;
if (((*(yR100 *)rt_nil_check(F.p1792))).f_abstract) {
yr1132_FailN(F.p1793, ((*(yR100 *)rt_nil_check(F.p1792))).f_tname, y_str(" is a type, not a representation (VI.A.1)", 41));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1798_Qualify(void * a_p1799, void * a_p1800) {
struct yf1801 F;
memset((void *)&F, 0, sizeof F);
F.p1799 = a_p1799;
F.p1800 = a_p1800;
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p1800))).f_a, F.p1799, &F.v4169, &F.v4173);
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p1800))).f_b, F.p1799, &F.v4171, &F.v4175);
if ((((((*(yR100 *)rt_nil_check(F.p1799))).f_kind == v780)) || ((((*(yR100 *)rt_nil_check(F.p1799))).f_kind == v777)))) {
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p1800))).f_line, F.p1799, F.v4173);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p1800))).f_line, F.p1799, F.v4175);
((*(yR100 *)rt_nil_check(F.p1799))).f_lo = F.v4169;
((*(yR100 *)rt_nil_check(F.p1799))).f_hi = F.v4171;
if ((((*(yR100 *)rt_nil_check(F.p1799))).f_kind == v780)) {
if ((((*(yR95 *)rt_nil_check(F.p1800))).f_d == ((void *)0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1800))).f_line, y_str("FLOATING needs PRECISION (VI.A.1.c)", 35));
}
yr2032_Manifest(((*(yR95 *)rt_nil_check(F.p1800))).f_d, &F.v4177, &F.v4179);
if ((!F.v4177)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1800))).f_line, y_str("PRECISION is a manifest constant", 32));
}
yr986_SB();
yr1010_SI(F.v4179);
((*(yR100 *)rt_nil_check(F.p1799))).f_prec = yr1016_SE();
} else {
if ((((*(yR95 *)rt_nil_check(F.p1800))).f_c == ((void *)0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1800))).f_line, y_str("FIXED needs SCALE (VI.A.1.b)", 28));
}
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p1800))).f_c, F.p1799, &((*(yR100 *)rt_nil_check(F.p1799))).f_scale, &F.v4173);
}
((*(yR100 *)rt_nil_check(F.p1799))).f_abstract = 0;
return;
}
if ((!yr1720_IsDiscrete(F.p1799))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1800))).f_line, y_str("only a scalar or integer representation takes a range", 53));
}
if ((((!(((*(yR95 *)rt_nil_check(F.p1800))).f_c == ((void *)0)))) || ((!(((*(yR95 *)rt_nil_check(F.p1800))).f_d == ((void *)0)))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1800))).f_line, y_str("SCALE and PRECISION qualify numbers", 35));
}
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p1800))).f_line, F.p1799, F.v4173);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p1800))).f_line, F.p1799, F.v4175);
((*(yR100 *)rt_nil_check(F.p1799))).f_lo = F.v4169;
((*(yR100 *)rt_nil_check(F.p1799))).f_hi = F.v4171;
yr2032_Manifest(((*(yR95 *)rt_nil_check(F.p1800))).f_a, &F.v4177, &((*(yR100 *)rt_nil_check(F.p1799))).f_mlo);
((*(yR100 *)rt_nil_check(F.p1799))).f_hasm = F.v4177;
yr2032_Manifest(((*(yR95 *)rt_nil_check(F.p1800))).f_b, &F.v4177, &((*(yR100 *)rt_nil_check(F.p1799))).f_mhi);
((*(yR100 *)rt_nil_check(F.p1799))).f_hasm = (((*(yR100 *)rt_nil_check(F.p1799))).f_hasm && F.v4177);
((*(yR100 *)rt_nil_check(F.p1799))).f_abstract = 0;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1805_DefineLits(void * a_p1806) {
struct yf1807 F;
memset((void *)&F, 0, sizeof F);
F.p1806 = a_p1806;
F.v4190 = ((*(yR100 *)rt_nil_check(F.p1806))).f_lits;
F.v4194 = INT64_C(0);
while ((!(F.v4190 == ((void *)0)))) {
if ((!(yr1612_Find(((*(yR95 *)rt_nil_check(F.v4190))).f_name) == ((void *)0)))) {
F.v4192 = yr1612_Find(((*(yR95 *)rt_nil_check(F.v4190))).f_name);
if ((((!(((*(yR115 *)rt_nil_check(F.v4192))).f_kind == v843))) && ((((*(yR115 *)rt_nil_check(F.v4192))).f_depth == v1570)))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.v4190))).f_line, ((*(yR95 *)rt_nil_check(F.v4190))).f_name, y_str(" is declared twice in this scope", 32));
}
}
F.v4192 = yr1588_NewSym(v843, ((*(yR95 *)rt_nil_check(F.v4190))).f_name);
((*(yR115 *)rt_nil_check(F.v4192))).f_rep = F.p1806;
((*(yR115 *)rt_nil_check(F.v4192))).f_mval = F.v4194;
((*(yR115 *)rt_nil_check(F.v4192))).f_hasmv = 1;
yr1644_Define(F.v4192, ((*(yR95 *)rt_nil_check(F.v4190))).f_line);
F.v4194 = rt_range(rt_add(F.v4194, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4190 = ((*(yR95 *)rt_nil_check(F.v4190))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1811_SetRange(void * a_p1812, rt_int a_p1813, rt_int a_p1814) {
struct yf1815 F;
memset((void *)&F, 0, sizeof F);
F.p1812 = a_p1812;
F.p1813 = a_p1813;
F.p1814 = a_p1814;
yr986_SB();
yr1010_SI(F.p1813);
((*(yR100 *)rt_nil_check(F.p1812))).f_lo = yr1016_SE();
yr986_SB();
yr1010_SI(F.p1814);
((*(yR100 *)rt_nil_check(F.p1812))).f_hi = yr1016_SE();
((*(yR100 *)rt_nil_check(F.p1812))).f_mlo = F.p1813;
((*(yR100 *)rt_nil_check(F.p1812))).f_mhi = F.p1814;
((*(yR100 *)rt_nil_check(F.p1812))).f_hasm = 1;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1819_NewTid(rt_int a_p1820) {
struct yf1821 F;
memset((void *)&F, 0, sizeof F);
F.p1820 = a_p1820;
F.v4208 = yr1141_NewSerial();
yr986_SB();
if ((!(F.p1820 == INT64_C(0)))) {
yr1004_ST(F.p1820);
} else {
yr997_SA(y_str("anonymous", 9));
}
yr997_SA(y_str("#", 1));
yr1010_SI(F.v4208);
{ rt_int rv4212 = yr1016_SE();
return rv4212; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1825_MakeRep(void * a_p1826, rt_int a_p1827, rt_int a_p1828) {
struct yf1829 F;
memset((void *)&F, 0, sizeof F);
F.p1826 = a_p1826;
F.p1827 = a_p1827;
F.p1828 = a_p1828;
F.v4228 = ((*(yR95 *)rt_nil_check(F.p1826))).f_kind;
F.v4232 = INT64_C(0);
F.v4234 = F.p1827;
if ((!(((*(yR95 *)rt_nil_check(F.p1826))).f_text == INT64_C(0)))) {
F.v4226 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(F.p1826))).f_text, ((*(yR95 *)rt_nil_check(F.p1826))).f_line));
if ((((!(((*(yR115 *)rt_nil_check(F.v4226))).f_kind == v840))) && ((!(((*(yR115 *)rt_nil_check(F.v4226))).f_kind == v837))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p1826))).f_line, ((*(yR95 *)rt_nil_check(F.p1826))).f_text, y_str(" is not a type", 14));
}
F.v4232 = ((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4226))).f_rep))).f_tid;
F.v4234 = ((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4226))).f_rep))).f_tname;
}
if ((F.v4228 == v642)) {
F.v4226 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(F.p1826))).f_name, ((*(yR95 *)rt_nil_check(F.p1826))).f_line));
if ((((!(((*(yR115 *)rt_nil_check(F.v4226))).f_kind == v840))) && ((!(((*(yR115 *)rt_nil_check(F.v4226))).f_kind == v837))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p1826))).f_line, ((*(yR95 *)rt_nil_check(F.p1826))).f_name, y_str(" is not a representation", 24));
}
F.v4218 = ((*(yR115 *)rt_nil_check(F.v4226))).f_rep;
if ((!(((*(yR95 *)rt_nil_check(F.p1826))).f_a == ((void *)0)))) {
F.v4218 = yr1714_CopyRep(F.v4218);
yr1798_Qualify(F.v4218, ((*(yR95 *)rt_nil_check(F.p1826))).f_a);
}
{ void * rv4239 = F.v4218;
return rv4239; }
}
if ((F.v4232 == INT64_C(0))) {
F.v4232 = yr1819_NewTid(F.p1827);
if ((F.v4234 == INT64_C(0))) {
F.v4234 = F.v4232;
}
}
if ((F.v4228 == v645)) {
F.v4218 = yr1707_NewRep(v786, F.v4232);
((*(yR100 *)rt_nil_check(F.v4218))).f_tname = F.v4234;
((*(yR100 *)rt_nil_check(F.v4218))).f_ordered = (((*(yR95 *)rt_nil_check(F.p1826))).f_flag == INT64_C(1));
((*(yR100 *)rt_nil_check(F.v4218))).f_lits = ((*(yR95 *)rt_nil_check(F.p1826))).f_a;
((*(yR100 *)rt_nil_check(F.v4218))).f_nlits = yr1260_Count(((*(yR95 *)rt_nil_check(F.p1826))).f_a);
yr1811_SetRange(F.v4218, INT64_C(0), rt_range(rt_sub(((*(yR100 *)rt_nil_check(F.v4218))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1805_DefineLits(F.v4218);
if ((!(((*(yR95 *)rt_nil_check(F.p1826))).f_b == ((void *)0)))) {
yr1798_Qualify(F.v4218, ((*(yR95 *)rt_nil_check(F.p1826))).f_b);
}
{ void * rv4246 = F.v4218;
return rv4246; }
}
if ((F.v4228 == v648)) {
F.v4218 = yr1707_NewRep(v789, F.v4232);
((*(yR100 *)rt_nil_check(F.v4218))).f_tname = F.v4234;
((*(yR100 *)rt_nil_check(F.v4218))).f_ordered = 1;
((*(yR100 *)rt_nil_check(F.v4218))).f_lits = ((*(yR95 *)rt_nil_check(F.p1826))).f_a;
((*(yR100 *)rt_nil_check(F.v4218))).f_nlits = yr1260_Count(((*(yR95 *)rt_nil_check(F.p1826))).f_a);
if ((((*(yR100 *)rt_nil_check(F.v4218))).f_nlits > INT64_C(256))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1826))).f_line, y_str("this implementation takes alphabets of up to 256 characters", 59));
}
yr1811_SetRange(F.v4218, INT64_C(0), rt_range(rt_sub(((*(yR100 *)rt_nil_check(F.v4218))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((!(((*(yR95 *)rt_nil_check(F.p1826))).f_b == ((void *)0)))) {
yr1798_Qualify(F.v4218, ((*(yR95 *)rt_nil_check(F.p1826))).f_b);
}
{ void * rv4253 = F.v4218;
return rv4253; }
}
if ((F.v4228 == v651)) {
F.v4218 = yr1707_NewRep(v792, F.v4232);
((*(yR100 *)rt_nil_check(F.v4218))).f_tname = F.v4234;
F.v4230 = ((*(yR95 *)rt_nil_check(F.p1826))).f_a;
F.v4224 = ((void *)0);
while ((!(F.v4230 == ((void *)0)))) {
F.v4222 = yr1714_CopyRep(yr1825_MakeRep(F.v4230, INT64_C(0), 0));
if ((!yr1720_IsDiscrete(F.v4222))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v4230))).f_line, y_str("an index is an integer or scalar representation", 47));
}
yr1791_CheckRepresented(F.v4222, ((*(yR95 *)rt_nil_check(F.v4230))).f_line);
((*(yR100 *)rt_nil_check(F.v4222))).f_link = ((void *)0);
if ((F.v4224 == ((void *)0))) {
((*(yR100 *)rt_nil_check(F.v4218))).f_idx = F.v4222;
} else {
((*(yR100 *)rt_nil_check(F.v4224))).f_link = F.v4222;
}
F.v4224 = F.v4222;
((*(yR100 *)rt_nil_check(F.v4218))).f_nidx = rt_range(rt_add(((*(yR100 *)rt_nil_check(F.v4218))).f_nidx, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4230 = ((*(yR95 *)rt_nil_check(F.v4230))).f_next;
}
if ((((*(yR100 *)rt_nil_check(F.v4218))).f_nidx > INT64_C(4))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1826))).f_line, y_str("this implementation takes arrays of up to 4 dimensions", 54));
}
((*(yR100 *)rt_nil_check(F.v4218))).f_elem = yr1825_MakeRep(((*(yR95 *)rt_nil_check(F.p1826))).f_b, INT64_C(0), F.p1828);
if ((!F.p1828)) {
yr1791_CheckRepresented(((*(yR100 *)rt_nil_check(F.v4218))).f_elem, ((*(yR95 *)rt_nil_check(F.p1826))).f_line);
yr1845_BuildArrayDesc(F.v4218);
} else {
((*(yR100 *)rt_nil_check(F.v4218))).f_abstract = ((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.v4218))).f_elem))).f_abstract;
if ((!((*(yR100 *)rt_nil_check(F.v4218))).f_abstract)) {
yr1845_BuildArrayDesc(F.v4218);
}
}
((*(yR100 *)rt_nil_check(F.v4218))).f_deep = 1;
{ void * rv4263 = F.v4218;
return rv4263; }
}
if ((F.v4228 == v654)) {
F.v4218 = yr1707_NewRep(v795, F.v4232);
((*(yR100 *)rt_nil_check(F.v4218))).f_tname = F.v4234;
yr1875_MakeRecord(F.v4218, F.p1826, F.p1828);
{ void * rv4264 = F.v4218;
return rv4264; }
}
if (((((F.v4228 == v660)) || ((F.v4228 == v657))) || ((F.v4228 == v663)))) {
if ((F.v4228 == v660)) {
F.v4218 = yr1707_NewRep(v798, F.v4232);
((*(yR100 *)rt_nil_check(F.v4218))).f_tname = F.v4234;
if (((((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p1826))).f_a))).f_kind == v642)) && ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p1826))).f_a))).f_a == ((void *)0)))) && ((yr1612_Find(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p1826))).f_a))).f_name) == ((void *)0))))) {
((*(yR100 *)rt_nil_check(F.v4218))).f_forward = ((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p1826))).f_a))).f_name;
((*(yR100 *)rt_nil_check(F.v4218))).f_fwdscope = v1570;
F.v4230 = yr1245_NewNode(v639, ((*(yR95 *)rt_nil_check(F.p1826))).f_line);
((*(yR95 *)rt_nil_check(F.v4230))).f_rep = F.v4218;
((*(yR95 *)rt_nil_check(F.v4230))).f_next = v1705;
v1705 = F.v4230;
{ void * rv4265 = F.v4218;
return rv4265; }
}
((*(yR100 *)rt_nil_check(F.v4218))).f_elem = yr1825_MakeRep(((*(yR95 *)rt_nil_check(F.p1826))).f_a, INT64_C(0), 0);
{ void * rv4268 = F.v4218;
return rv4268; }
}
if ((F.v4228 == v657)) {
F.v4218 = yr1707_NewRep(v801, F.v4232);
((*(yR100 *)rt_nil_check(F.v4218))).f_tname = F.v4234;
((*(yR100 *)rt_nil_check(F.v4218))).f_elem = yr1825_MakeRep(((*(yR95 *)rt_nil_check(F.p1826))).f_a, INT64_C(0), F.p1828);
{ void * rv4270 = F.v4218;
return rv4270; }
}
F.v4218 = yr1707_NewRep(v804, F.v4232);
((*(yR100 *)rt_nil_check(F.v4218))).f_tname = F.v4234;
((*(yR100 *)rt_nil_check(F.v4218))).f_elem = yr1825_MakeRep(((*(yR95 *)rt_nil_check(F.p1826))).f_a, INT64_C(0), 0);
if ((!yr1720_IsDiscrete(((*(yR100 *)rt_nil_check(F.v4218))).f_elem))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1826))).f_line, y_str("a set is of an integer or scalar representation", 47));
}
yr1791_CheckRepresented(((*(yR100 *)rt_nil_check(F.v4218))).f_elem, ((*(yR95 *)rt_nil_check(F.p1826))).f_line);
{ void * rv4274 = F.v4218;
return rv4274; }
}
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1826))).f_line, y_str("this representation is not translated", 37));
{ void * rv4276 = ((void *)0);
return rv4276; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1833_ResolvePending(rt_int a_p1834, void * a_p1835) {
struct yf1836 F;
memset((void *)&F, 0, sizeof F);
F.p1834 = a_p1834;
F.p1835 = a_p1835;
F.v4281 = v1705;
F.v4283 = ((void *)0);
while ((!(F.v4281 == ((void *)0)))) {
if ((((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4281))).f_rep))).f_forward == F.p1834)) {
((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4281))).f_rep))).f_elem = F.p1835;
((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4281))).f_rep))).f_forward = INT64_C(0);
if ((F.v4283 == ((void *)0))) {
v1705 = ((*(yR95 *)rt_nil_check(F.v4281))).f_next;
} else {
((*(yR95 *)rt_nil_check(F.v4283))).f_next = ((*(yR95 *)rt_nil_check(F.v4281))).f_next;
}
} else {
F.v4283 = F.v4281;
}
F.v4281 = ((*(yR95 *)rt_nil_check(F.v4281))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1840_CheckPending(void) {
struct yf1841 F;
memset((void *)&F, 0, sizeof F);
F.v4287 = v1705;
while ((!(F.v4287 == ((void *)0)))) {
if ((((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4287))).f_rep))).f_fwdscope >= v1570)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.v4287))).f_line, ((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4287))).f_rep))).f_forward, y_str(" is named by a pointer but not declared", 39));
}
F.v4287 = ((*(yR95 *)rt_nil_check(F.v4287))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1845_BuildArrayDesc(void * a_p1846) {
struct yf1847 F;
memset((void *)&F, 0, sizeof F);
F.p1846 = a_p1846;
yr1762_NewDesc(F.p1846);
yr986_SB();
yr997_SA(y_str("{ rt_int lo[", 12));
yr1010_SI(((*(yR100 *)rt_nil_check(F.p1846))).f_nidx);
yr997_SA(y_str("] = {", 5));
F.v4292 = ((*(yR100 *)rt_nil_check(F.p1846))).f_idx;
F.v4296 = 1;
while ((!(F.v4292 == ((void *)0)))) {
if ((!F.v4296)) {
yr997_SA(y_str(", ", 2));
}
F.v4296 = 0;
yr1004_ST(((*(yR100 *)rt_nil_check(F.v4292))).f_lo);
F.v4292 = ((*(yR100 *)rt_nil_check(F.v4292))).f_link;
}
yr997_SA(y_str("}, hi[", 6));
yr1010_SI(((*(yR100 *)rt_nil_check(F.p1846))).f_nidx);
yr997_SA(y_str("] = {", 5));
F.v4292 = ((*(yR100 *)rt_nil_check(F.p1846))).f_idx;
F.v4296 = 1;
while ((!(F.v4292 == ((void *)0)))) {
if ((!F.v4296)) {
yr997_SA(y_str(", ", 2));
}
F.v4296 = 0;
yr1004_ST(((*(yR100 *)rt_nil_check(F.v4292))).f_hi);
F.v4292 = ((*(yR100 *)rt_nil_check(F.v4292))).f_link;
}
yr997_SA(y_str("}; y_desc_array(", 16));
yr1004_ST(yr1756_DescOf(F.p1846));
yr997_SA(y_str(", ", 2));
yr1010_SI(((*(yR100 *)rt_nil_check(F.p1846))).f_nidx);
yr997_SA(y_str(", lo, hi, ", 10));
yr1004_ST(yr1756_DescOf(((*(yR100 *)rt_nil_check(F.p1846))).f_elem));
yr997_SA(y_str("); }", 4));
F.v4294 = yr1016_SE();
yr1092_Emit(F.v4294);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1851_AddField(void * a_p1852, void * * a_p1853, rt_int a_p1854, void * a_p1855, rt_int a_p1856, rt_int a_p1857, void * a_p1858, rt_int a_p1859) {
struct yf1860 F;
memset((void *)&F, 0, sizeof F);
F.p1852 = a_p1852;
F.p1853 = a_p1853;
F.p1854 = a_p1854;
F.p1855 = a_p1855;
F.p1856 = a_p1856;
F.p1857 = a_p1857;
F.p1858 = a_p1858;
F.p1859 = a_p1859;
F.v4321 = ((*(yR100 *)rt_nil_check(F.p1852))).f_fields;
while ((!(F.v4321 == ((void *)0)))) {
if ((((*(yR105 *)rt_nil_check(F.v4321))).f_name == F.p1854)) {
yr1132_FailN(F.p1859, F.p1854, y_str(" is a component twice", 21));
}
F.v4321 = ((*(yR105 *)rt_nil_check(F.v4321))).f_next;
}
({ F.v4321 = rt_alloc(sizeof(yR105)); });
(*(yR105 *)rt_nil_check(F.v4321)) = ((yR105){ .f_name = F.p1854, .f_rep = F.p1855, .f_isconst = F.p1856, .f_variant = F.p1857, .f_labels = F.p1858, .f_next = ((void *)0) });
if (((*F.p1853) == ((void *)0))) {
((*(yR100 *)rt_nil_check(F.p1852))).f_fields = F.v4321;
} else {
((*(yR105 *)rt_nil_check((*F.p1853)))).f_next = F.v4321;
}
(*F.p1853) = F.v4321;
if (yr1744_Deep(F.p1855)) {
((*(yR100 *)rt_nil_check(F.p1852))).f_deep = 1;
}
if (((*(yR100 *)rt_nil_check(F.p1855))).f_abstract) {
((*(yR100 *)rt_nil_check(F.p1852))).f_abstract = 1;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1864_AddFields(void * a_p1865, void * * a_p1866, void * a_p1867, rt_int a_p1868, void * a_p1869, rt_int a_p1870) {
struct yf1871 F;
memset((void *)&F, 0, sizeof F);
F.p1865 = a_p1865;
F.p1866 = a_p1866;
F.p1867 = a_p1867;
F.p1868 = a_p1868;
F.p1869 = a_p1869;
F.p1870 = a_p1870;
F.v4333 = F.p1867;
F.v4335 = F.p1867;
while ((!(F.v4333 == ((void *)0)))) {
F.v4337 = yr1825_MakeRep(((*(yR95 *)rt_nil_check(F.v4333))).f_b, INT64_C(0), F.p1870);
if ((!F.p1870)) {
yr1791_CheckRepresented(F.v4337, ((*(yR95 *)rt_nil_check(F.v4333))).f_line);
}
if ((((((*(yR100 *)rt_nil_check(F.v4337))).f_kind == v807)) || ((((*(yR100 *)rt_nil_check(F.v4337))).f_kind == v801)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v4333))).f_line, y_str("this implementation does not keep signals or files in records", 61));
}
F.v4335 = ((*(yR95 *)rt_nil_check(F.v4333))).f_a;
while ((!(F.v4335 == ((void *)0)))) {
yr1851_AddField(F.p1865, &(*F.p1866), ((*(yR95 *)rt_nil_check(F.v4335))).f_name, F.v4337, (((*(yR95 *)rt_nil_check(F.v4333))).f_ival == v240), F.p1868, F.p1869, ((*(yR95 *)rt_nil_check(F.v4335))).f_line);
F.v4335 = ((*(yR95 *)rt_nil_check(F.v4335))).f_next;
}
F.v4333 = ((*(yR95 *)rt_nil_check(F.v4333))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1875_MakeRecord(void * a_p1876, void * a_p1877, rt_int a_p1878) {
struct yf1879 F;
memset((void *)&F, 0, sizeof F);
F.p1876 = a_p1876;
F.p1877 = a_p1877;
F.p1878 = a_p1878;
F.v4345 = ((void *)0);
F.v4353 = INT64_C(0);
F.v4360 = INT64_C(0);
yr1864_AddFields(F.p1876, &F.v4345, ((*(yR95 *)rt_nil_check(F.p1877))).f_a, INT64_C(0), ((void *)0), F.p1878);
if ((!(((*(yR95 *)rt_nil_check(F.p1877))).f_b == ((void *)0)))) {
F.v4347 = ((*(yR95 *)rt_nil_check(F.p1877))).f_b;
F.v4351 = yr1825_MakeRep(((*(yR95 *)rt_nil_check(F.v4347))).f_b, INT64_C(0), 0);
if ((!yr1720_IsDiscrete(F.v4351))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v4347))).f_line, y_str("the case-selection component is integer or scalar", 49));
}
yr1851_AddField(F.p1876, &F.v4345, ((*(yR95 *)rt_nil_check(F.v4347))).f_name, F.v4351, 1, INT64_C(0), ((void *)0), ((*(yR95 *)rt_nil_check(F.v4347))).f_line);
((*(yR100 *)rt_nil_check(F.p1876))).f_selector = F.v4345;
F.v4349 = ((*(yR95 *)rt_nil_check(F.v4347))).f_a;
while ((!(F.v4349 == ((void *)0)))) {
F.v4353 = rt_range(rt_add(F.v4353, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1864_AddFields(F.p1876, &F.v4345, ((*(yR95 *)rt_nil_check(F.v4349))).f_b, F.v4353, ((*(yR95 *)rt_nil_check(F.v4349))).f_a, F.p1878);
F.v4349 = ((*(yR95 *)rt_nil_check(F.v4349))).f_next;
}
}
if ((F.p1878 && ((*(yR100 *)rt_nil_check(F.p1876))).f_abstract)) {
return;
}
((*(yR100 *)rt_nil_check(F.p1876))).f_abstract = 0;
((*(yR100 *)rt_nil_check(F.p1876))).f_cname = yr1146_Fresh(y_str("yR", 2));
yr986_SB();
yr997_SA(y_str("typedef struct ", 15));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1876))).f_cname);
yr997_SA(y_str(" ", 1));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1876))).f_cname);
yr997_SA(y_str(";", 1));
F.v4358 = yr1016_SE();
yr1070_Put(&v942, F.v4358);
yr986_SB();
yr997_SA(y_str("struct ", 7));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1876))).f_cname);
yr997_SA(y_str(" {", 2));
F.v4356 = ((*(yR100 *)rt_nil_check(F.p1876))).f_fields;
while ((!(F.v4356 == ((void *)0)))) {
yr997_SA(y_str(" ", 1));
yr1004_ST(yr1750_CType(((*(yR105 *)rt_nil_check(F.v4356))).f_rep));
yr997_SA(y_str(" f_", 3));
yr1004_ST(((*(yR105 *)rt_nil_check(F.v4356))).f_name);
yr997_SA(y_str(";", 1));
F.v4360 = rt_range(rt_add(F.v4360, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4356 = ((*(yR105 *)rt_nil_check(F.v4356))).f_next;
}
if ((F.v4360 == INT64_C(0))) {
yr997_SA(y_str(" int empty_;", 12));
}
yr997_SA(y_str(" };", 3));
F.v4358 = yr1016_SE();
yr1070_Put(&v944, F.v4358);
yr1762_NewDesc(F.p1876);
yr986_SB();
yr997_SA(y_str("{ static const size_t o[] = {", 29));
F.v4356 = ((*(yR100 *)rt_nil_check(F.p1876))).f_fields;
while ((!(F.v4356 == ((void *)0)))) {
yr997_SA(y_str("offsetof(", 9));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1876))).f_cname);
yr997_SA(y_str(", f_", 4));
yr1004_ST(((*(yR105 *)rt_nil_check(F.v4356))).f_name);
yr997_SA(y_str("), ", 3));
F.v4356 = ((*(yR105 *)rt_nil_check(F.v4356))).f_next;
}
yr997_SA(y_str("0}; const ydesc **f = rt_alloc(", 31));
yr1010_SI(rt_range(rt_add(F.v4360, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr997_SA(y_str(" * sizeof *f);", 14));
F.v4353 = INT64_C(0);
F.v4356 = ((*(yR100 *)rt_nil_check(F.p1876))).f_fields;
while ((!(F.v4356 == ((void *)0)))) {
yr997_SA(y_str(" f[", 3));
yr1010_SI(F.v4353);
yr997_SA(y_str("] = ", 4));
yr1004_ST(yr1756_DescOf(((*(yR105 *)rt_nil_check(F.v4356))).f_rep));
yr997_SA(y_str(";", 1));
F.v4353 = rt_range(rt_add(F.v4353, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4356 = ((*(yR105 *)rt_nil_check(F.v4356))).f_next;
}
yr997_SA(y_str(" y_desc_record(", 15));
yr1004_ST(yr1756_DescOf(F.p1876));
yr997_SA(y_str(", sizeof(", 9));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1876))).f_cname);
yr997_SA(y_str("), ", 3));
yr1010_SI(F.v4360);
yr997_SA(y_str(", o, (const ydesc *const *)f); }", 32));
F.v4358 = yr1016_SE();
yr1092_Emit(F.v4358);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1883_FindField(void * a_p1884, rt_int a_p1885) {
struct yf1886 F;
memset((void *)&F, 0, sizeof F);
F.p1884 = a_p1884;
F.p1885 = a_p1885;
F.v4407 = ((*(yR100 *)rt_nil_check(F.p1884))).f_fields;
while ((!(F.v4407 == ((void *)0)))) {
if ((((*(yR105 *)rt_nil_check(F.v4407))).f_name == F.p1885)) {
{ void * rv4408 = F.v4407;
return rv4408; }
}
F.v4407 = ((*(yR105 *)rt_nil_check(F.v4407))).f_next;
}
{ void * rv4409 = ((void *)0);
return rv4409; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2001_CharOrd(void * a_p2002, rt_int a_p2003) {
struct yf2004 F;
memset((void *)&F, 0, sizeof F);
F.p2002 = a_p2002;
F.p2003 = a_p2003;
if ((((*(yR100 *)rt_nil_check(F.p2002))).f_tid == ((*(yR100 *)rt_nil_check(v1687))).f_tid)) {
if ((((rt_int *)(v890).p)[y_ix1(v890, F.p2003)] == INT64_C(1))) {
{ rt_int rv4425 = ((rt_int *)(v931).p)[y_ix1(v931, yr1063_TChar(F.p2003, INT64_C(1)))];
return rv4425; }
}
F.v4416 = INT64_C(0);
F.v4420 = INT64_C(1);
{ rt_int hi4433 = ((rt_int *)(v890).p)[y_ix1(v890, v1998)];
for (rt_int i4432 = INT64_C(1); i4432 <= hi4433; i4432++) { F.c_4431 = i4432;
if ((yr1063_TChar(v1998, rt_range(F.c_4431, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 32)) {
F.v4422 = yr1028_Intern(rt_range(rt_add(((rt_int *)(v888).p)[y_ix1(v888, v1998)], (rt_sub(F.v4420, INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub(F.c_4431, F.v4420), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((F.v4422 == F.p2003)) {
if ((F.v4416 < INT64_C(32))) {
{ rt_int rv4440 = F.v4416;
return rv4440; }
}
if ((F.v4416 == INT64_C(32))) {
{ rt_int rv4443 = INT64_C(32);
return rv4443; }
}
if ((F.v4416 == INT64_C(33))) {
{ rt_int rv4446 = INT64_C(127);
return rv4446; }
}
if ((F.v4416 == INT64_C(34))) {
{ rt_int rv4449 = INT64_C(39);
return rv4449; }
}
{ rt_int rv4451 = INT64_C(34);
return rv4451; }
}
F.v4416 = rt_range(rt_add(F.v4416, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4420 = rt_range(rt_add(F.c_4431, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i4432 == hi4433) break;
}}
{ rt_int rv4457 = INT64_C(-1);
return rv4457; }
}
if ((!(((*(yR100 *)rt_nil_check(F.p2002))).f_kind == v789))) {
{ rt_int rv4459 = INT64_C(-1);
return rv4459; }
}
F.v4414 = ((*(yR100 *)rt_nil_check(F.p2002))).f_lits;
F.v4418 = INT64_C(0);
while ((!(F.v4414 == ((void *)0)))) {
if (yr1048_TEq(((*(yR95 *)rt_nil_check(F.v4414))).f_text, F.p2003)) {
{ rt_int rv4461 = F.v4418;
return rv4461; }
}
F.v4418 = rt_range(rt_add(F.v4418, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4414 = ((*(yR95 *)rt_nil_check(F.v4414))).f_next;
}
{ rt_int rv4465 = INT64_C(-1);
return rv4465; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2008_AlphabetFor(void * a_p2009, void * a_p2010) {
struct yf2011 F;
memset((void *)&F, 0, sizeof F);
F.p2009 = a_p2009;
F.p2010 = a_p2010;
if ((!(((*(yR95 *)rt_nil_check(F.p2009))).f_d == ((void *)0)))) {
F.v4470 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2009))).f_d))).f_name, ((*(yR95 *)rt_nil_check(F.p2009))).f_line));
if ((((((!(((*(yR115 *)rt_nil_check(F.v4470))).f_kind == v837))) && ((!(((*(yR115 *)rt_nil_check(F.v4470))).f_kind == v840))))) || ((!(((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4470))).f_rep))).f_kind == v789))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2009))).f_line, ((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2009))).f_d))).f_name, y_str(" is not an alphabet", 19));
}
{ void * rv4472 = ((*(yR115 *)rt_nil_check(F.v4470))).f_rep;
return rv4472; }
}
if ((!(F.p2010 == ((void *)0)))) {
if ((((*(yR100 *)rt_nil_check(F.p2010))).f_kind == v789)) {
{ void * rv4473 = F.p2010;
return rv4473; }
}
if ((yr1732_IsArrayLike(F.p2010) && ((!(((*(yR100 *)rt_nil_check(F.p2010))).f_elem == ((void *)0)))))) {
if ((((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p2010))).f_elem))).f_kind == v789)) {
{ void * rv4474 = ((*(yR100 *)rt_nil_check(F.p2010))).f_elem;
return rv4474; }
}
}
}
{ void * rv4475 = v1687;
return rv4475; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2015_CharValue(void * a_p2016, rt_int a_p2017, rt_int a_p2018) {
struct yf2019 F;
memset((void *)&F, 0, sizeof F);
F.p2016 = a_p2016;
F.p2017 = a_p2017;
F.p2018 = a_p2018;
F.v4481 = yr2001_CharOrd(F.p2016, F.p2017);
if ((F.v4481 < INT64_C(0))) {
yr986_SB();
yr997_SA(y_str("'", 1));
yr1004_ST(F.p2017);
yr997_SA(y_str("' is not a character of ", 24));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p2016))).f_tname);
F.v4483 = yr1016_SE();
yr1117_Fail(F.p2018, F.v4483);
}
{ rt_int rv4487 = F.v4481;
return rv4487; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2023_StringCodes(void * a_p2024, rt_int a_p2025, rt_int * a_p2026, rt_int a_p2027) {
struct yf2028 F;
memset((void *)&F, 0, sizeof F);
F.p2024 = a_p2024;
F.p2025 = a_p2025;
F.p2026_o = a_p2026;
F.p2027 = a_p2027;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&F.yd_4505, 1, lo, hi, &y_d_int); }
y_init(&F.yd_4505, &F.v4507);
F.p2026 = INT64_C(0);
F.v4494 = INT64_C(1);
while ((F.v4494 <= ((rt_int *)(v890).p)[y_ix1(v890, F.p2025)])) {
F.v4509 = yr1063_TChar(F.p2025, F.v4494);
if ((F.v4509 == 39)) {
F.v4496 = rt_range(rt_add(F.v4494, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1063_TChar(F.p2025, F.v4496) == 39))) {
F.v4496 = rt_range(rt_add(F.v4496, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v4511 = yr1028_Intern(rt_range(rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p2025)], F.v4494), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v4496, F.v4494)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v4498 = yr2015_CharValue(F.p2024, F.v4511, F.p2027);
F.v4494 = rt_range(rt_add(F.v4496, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v4511 = yr1028_Intern(rt_range(rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p2025)], (rt_sub(F.v4494, INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), INT64_C(1));
F.v4498 = yr2015_CharValue(F.p2024, F.v4511, F.p2027);
F.v4494 = rt_range(rt_add(F.v4494, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.p2026 >= INT64_C(4096))) {
yr1124_FailS(F.p2027, y_str("string literal too long", 23));
}
F.p2026 = rt_range(rt_add(F.p2026, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(F.v4507).p)[y_ix1(F.v4507, F.p2026)] = F.v4498;
}
yr986_SB();
yr991_SC(34);
{ rt_int hi4542 = F.p2026;
for (rt_int i4541 = INT64_C(1); i4541 <= hi4542; i4541++) { F.c_4540 = i4541;
F.v4498 = ((rt_int *)(F.v4507).p)[y_ix1(F.v4507, F.c_4540)];
if ((((F.v4498 == INT64_C(34))) || ((F.v4498 == INT64_C(92))))) {
yr991_SC(92);
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, F.v4498)]);
} else if (((((F.v4498 >= INT64_C(32))) && ((F.v4498 < INT64_C(127)))) && (((((!(F.v4498 == INT64_C(63)))) || ((F.c_4540 == INT64_C(1)))) || ((!(((rt_int *)(F.v4507).p)[y_ix1(F.v4507, rt_sub(F.c_4540, INT64_C(1)))] == INT64_C(63)))))))) {
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, F.v4498)]);
} else {
yr991_SC(92);
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, rt_add(INT64_C(48), (rt_div(F.v4498, INT64_C(64)))))]);
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, rt_add(INT64_C(48), (rt_mod((rt_div(F.v4498, INT64_C(8))), INT64_C(8)))))]);
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, rt_add(INT64_C(48), (rt_mod(F.v4498, INT64_C(8)))))]);
}
if (i4541 == hi4542) break;
}}
yr991_SC(34);
{ rt_int rv4569 = yr1016_SE();
(*F.p2026_o) = F.p2026;
return rv4569; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2032_Manifest(void * a_p2033, rt_int * a_p2034, rt_int * a_p2035) {
struct yf2036 F;
memset((void *)&F, 0, sizeof F);
F.p2033 = a_p2033;
F.p2034_o = a_p2034;
F.p2035_o = a_p2035;
F.p2034 = 0;
F.p2035 = INT64_C(0);
if ((((*(yR95 *)rt_nil_check(F.p2033))).f_kind == v729)) {
F.p2034 = 1;
F.p2035 = ((*(yR95 *)rt_nil_check(F.p2033))).f_ival;
(*F.p2034_o) = F.p2034;
(*F.p2035_o) = F.p2035;
return;
}
if ((((*(yR95 *)rt_nil_check(F.p2033))).f_kind == v738)) {
F.v4587 = yr2008_AlphabetFor(F.p2033, ((void *)0));
F.p2035 = yr2001_CharOrd(F.v4587, ((*(yR95 *)rt_nil_check(F.p2033))).f_text);
F.p2034 = (F.p2035 >= INT64_C(0));
(*F.p2034_o) = F.p2034;
(*F.p2035_o) = F.p2035;
return;
}
if ((((*(yR95 *)rt_nil_check(F.p2033))).f_kind == v747)) {
if ((!(((*(yR95 *)rt_nil_check(F.p2033))).f_d == ((void *)0)))) {
F.v4575 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2033))).f_d))).f_name, ((*(yR95 *)rt_nil_check(F.p2033))).f_line));
F.v4575 = yr1637_FindLit(((*(yR95 *)rt_nil_check(F.p2033))).f_name, ((*(yR115 *)rt_nil_check(F.v4575))).f_rep);
} else {
F.v4575 = yr1612_Find(((*(yR95 *)rt_nil_check(F.p2033))).f_name);
}
if ((F.v4575 == ((void *)0))) {
(*F.p2034_o) = F.p2034;
(*F.p2035_o) = F.p2035;
return;
}
F.v4575 = yr1677_Real(F.v4575);
if ((((((((*(yR115 *)rt_nil_check(F.v4575))).f_kind == v843)) || ((((*(yR115 *)rt_nil_check(F.v4575))).f_kind == v834)))) && ((*(yR115 *)rt_nil_check(F.v4575))).f_hasmv)) {
F.p2034 = 1;
F.p2035 = ((*(yR115 *)rt_nil_check(F.v4575))).f_mval;
}
(*F.p2034_o) = F.p2034;
(*F.p2035_o) = F.p2035;
return;
}
if ((((*(yR95 *)rt_nil_check(F.p2033))).f_kind == v771)) {
yr2032_Manifest(((*(yR95 *)rt_nil_check(F.p2033))).f_a, &F.p2034, &F.p2035);
(*F.p2034_o) = F.p2034;
(*F.p2035_o) = F.p2035;
return;
}
if ((((*(yR95 *)rt_nil_check(F.p2033))).f_kind == v765)) {
yr2032_Manifest(((*(yR95 *)rt_nil_check(F.p2033))).f_a, &F.p2034, &F.p2035);
F.p2035 = rt_range(rt_neg(F.p2035), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2034_o) = F.p2034;
(*F.p2035_o) = F.p2035;
return;
}
if ((((*(yR95 *)rt_nil_check(F.p2033))).f_kind == v768)) {
yr2032_Manifest(((*(yR95 *)rt_nil_check(F.p2033))).f_a, &F.v4581, &F.v4577);
yr2032_Manifest(((*(yR95 *)rt_nil_check(F.p2033))).f_b, &F.v4583, &F.v4579);
if ((!((F.v4581 && F.v4583)))) {
(*F.p2034_o) = F.p2034;
(*F.p2035_o) = F.p2035;
return;
}
F.v4585 = ((*(yR95 *)rt_nil_check(F.p2033))).f_name;
F.p2034 = 1;
if ((F.v4585 == v543)) {
F.p2035 = rt_range(rt_add(F.v4577, F.v4579), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v4585 == v546)) {
F.p2035 = rt_range(rt_sub(F.v4577, F.v4579), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v4585 == v549)) {
F.p2035 = rt_range(rt_mul(F.v4577, F.v4579), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v4585 == v246)) && ((!(F.v4579 == INT64_C(0)))))) {
F.p2035 = rt_range(rt_div(F.v4577, F.v4579), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v4585 == v348)) && ((!(F.v4579 == INT64_C(0)))))) {
F.p2035 = rt_range(rt_mod(F.v4577, F.v4579), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.p2034 = 0;
}
(*F.p2034_o) = F.p2034;
(*F.p2035_o) = F.p2035;
return;
}
(*F.p2034_o) = F.p2034;
(*F.p2035_o) = F.p2035;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2040_Convert(rt_int a_p2041, void * a_p2042, void * a_p2043) {
struct yf2044 F;
memset((void *)&F, 0, sizeof F);
F.p2041 = a_p2041;
F.p2042 = a_p2042;
F.p2043 = a_p2043;
if ((yr1720_IsDiscrete(F.p2042) && ((!(((*(yR100 *)rt_nil_check(F.p2042))).f_lo == INT64_C(0)))))) {
if ((((((*(yR100 *)rt_nil_check(F.p2042))).f_hasm && ((*(yR100 *)rt_nil_check(F.p2043))).f_hasm) && ((((*(yR100 *)rt_nil_check(F.p2042))).f_mlo <= ((*(yR100 *)rt_nil_check(F.p2043))).f_mlo))) && ((((*(yR100 *)rt_nil_check(F.p2043))).f_mhi <= ((*(yR100 *)rt_nil_check(F.p2042))).f_mhi)))) {
{ rt_int rv4608 = F.p2041;
return rv4608; }
}
yr986_SB();
yr997_SA(y_str("rt_range(", 9));
yr1004_ST(F.p2041);
yr997_SA(y_str(", ", 2));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p2042))).f_lo);
yr997_SA(y_str(", ", 2));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p2042))).f_hi);
yr997_SA(y_str(")", 1));
{ rt_int rv4613 = yr1016_SE();
return rv4613; }
}
if ((((((*(yR100 *)rt_nil_check(F.p2042))).f_kind == v780)) && ((!(((*(yR100 *)rt_nil_check(F.p2042))).f_lo == INT64_C(0)))))) {
yr986_SB();
yr997_SA(y_str("rt_frange(", 10));
yr1004_ST(F.p2041);
yr997_SA(y_str(", ", 2));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p2042))).f_lo);
yr997_SA(y_str(", ", 2));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p2042))).f_hi);
yr997_SA(y_str(")", 1));
{ rt_int rv4619 = yr1016_SE();
return rv4619; }
}
if ((((((*(yR100 *)rt_nil_check(F.p2042))).f_kind == v777)) && ((!(((*(yR100 *)rt_nil_check(F.p2042))).f_lo == INT64_C(0)))))) {
yr986_SB();
yr997_SA(y_str("y_fixed(", 8));
yr1004_ST(F.p2041);
yr997_SA(y_str(", ", 2));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p2042))).f_lo);
yr997_SA(y_str(", ", 2));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p2042))).f_hi);
yr997_SA(y_str(", ", 2));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p2042))).f_scale);
yr997_SA(y_str(")", 1));
{ rt_int rv4626 = yr1016_SE();
return rv4626; }
}
{ rt_int rv4627 = F.p2041;
return rv4627; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2048_Store(rt_int a_p2049, void * a_p2050, rt_int a_p2051, void * a_p2052, rt_int a_p2053) {
struct yf2054 F;
memset((void *)&F, 0, sizeof F);
F.p2049 = a_p2049;
F.p2050 = a_p2050;
F.p2051 = a_p2051;
F.p2052 = a_p2052;
F.p2053 = a_p2053;
yr1783_CheckType(F.p2053, F.p2050, F.p2052);
if (yr1744_Deep(F.p2050)) {
F.v4637 = yr1146_Fresh(y_str("t", 1));
yr986_SB();
yr997_SA(y_str("{ ", 2));
yr1004_ST(yr1750_CType(F.p2050));
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v4637);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.p2051);
yr997_SA(y_str("; y_store(", 10));
yr1004_ST(yr1756_DescOf(F.p2050));
yr997_SA(y_str(", &", 3));
yr1004_ST(F.p2049);
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v4637);
yr997_SA(y_str("); }", 4));
F.v4635 = yr1016_SE();
yr1092_Emit(F.v4635);
return;
}
yr986_SB();
yr1004_ST(F.p2049);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2040_Convert(F.p2051, F.p2050, F.p2052));
yr997_SA(y_str(";", 1));
F.v4635 = yr1016_SE();
yr1092_Emit(F.v4635);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2058_IsVariable(void * a_p2059) {
struct yf2060 F;
memset((void *)&F, 0, sizeof F);
F.p2059 = a_p2059;
if ((((*(yR95 *)rt_nil_check(F.p2059))).f_kind == v747)) {
F.v4651 = yr1612_Find(((*(yR95 *)rt_nil_check(F.p2059))).f_name);
if ((F.v4651 == ((void *)0))) {
{ rt_int rv4655 = 0;
return rv4655; }
}
if (((*(yR115 *)rt_nil_check(F.v4651))).f_readonly) {
{ rt_int rv4657 = 0;
return rv4657; }
}
{ rt_int rv4658 = (((*(yR115 *)rt_nil_check(yr1677_Real(F.v4651)))).f_kind == v831);
return rv4658; }
}
if ((((*(yR95 *)rt_nil_check(F.p2059))).f_kind == v759)) {
{ rt_int rv4660 = 1;
return rv4660; }
}
if ((((*(yR95 *)rt_nil_check(F.p2059))).f_kind == v756)) {
{ rt_int rv4661 = yr2058_IsVariable(((*(yR95 *)rt_nil_check(F.p2059))).f_a);
return rv4661; }
}
if ((((*(yR95 *)rt_nil_check(F.p2059))).f_kind == v753)) {
if ((!yr2058_IsVariable(((*(yR95 *)rt_nil_check(F.p2059))).f_a))) {
{ rt_int rv4663 = 0;
return rv4663; }
}
F.v4653 = yr1883_FindField(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2059))).f_a))).f_rep, ((*(yR95 *)rt_nil_check(F.p2059))).f_name);
if ((F.v4653 == ((void *)0))) {
{ rt_int rv4665 = 0;
return rv4665; }
}
{ rt_int rv4666 = (!((*(yR105 *)rt_nil_check(F.v4653))).f_isconst);
return rv4666; }
}
{ rt_int rv4668 = 0;
return rv4668; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2064_LValue(void * a_p2065, rt_int * a_p2066, void * * a_p2067) {
struct yf2068 F;
memset((void *)&F, 0, sizeof F);
F.p2065 = a_p2065;
F.p2066_o = a_p2066;
F.p2067_o = a_p2067;
yr2091_Expr(F.p2065, ((void *)0), &F.p2066, &F.p2067);
if ((!yr2058_IsVariable(F.p2065))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2065))).f_line, y_str("a variable is needed here (IX.A.1)", 34));
}
(*F.p2066_o) = F.p2066;
(*F.p2067_o) = F.p2067;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2072_Paren(rt_int a_p2073) {
struct yf2074 F;
memset((void *)&F, 0, sizeof F);
F.p2073 = a_p2073;
yr986_SB();
yr997_SA(y_str("(", 1));
yr1004_ST(F.p2073);
yr997_SA(y_str(")", 1));
{ rt_int rv4678 = yr1016_SE();
return rv4678; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2078_Lit(void * a_p2079, rt_int a_p2080) {
struct yf2081 F;
memset((void *)&F, 0, sizeof F);
F.p2079 = a_p2079;
F.p2080 = a_p2080;
F.v4683 = yr1714_CopyRep(F.p2079);
yr1811_SetRange(F.v4683, F.p2080, F.p2080);
((*(yR100 *)rt_nil_check(F.v4683))).f_elem = F.p2079;
{ void * rv4684 = F.v4683;
return rv4684; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2085_Qualifier(void * a_p2086) {
struct yf2087 F;
memset((void *)&F, 0, sizeof F);
F.p2086 = a_p2086;
F.v4688 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2086))).f_d))).f_name, ((*(yR95 *)rt_nil_check(F.p2086))).f_line));
if ((((!(((*(yR115 *)rt_nil_check(F.v4688))).f_kind == v837))) && ((!(((*(yR115 *)rt_nil_check(F.v4688))).f_kind == v840))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2086))).f_line, ((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2086))).f_d))).f_name, y_str(" is not a type", 14));
}
{ void * rv4690 = ((*(yR115 *)rt_nil_check(F.v4688))).f_rep;
return rv4690; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2091_Expr(void * a_p2092, void * a_p2093, rt_int * a_p2094, void * * a_p2095) {
struct yf2096 F;
memset((void *)&F, 0, sizeof F);
F.p2092 = a_p2092;
F.p2093 = a_p2093;
F.p2094_o = a_p2094;
F.p2095_o = a_p2095;
F.v4697 = ((*(yR95 *)rt_nil_check(F.p2092))).f_kind;
v960 = ((*(yR95 *)rt_nil_check(F.p2092))).f_line;
if ((F.v4697 == v771)) {
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p2092))).f_a, F.p2093, &F.v4701, &F.p2095);
F.p2094 = yr2072_Paren(F.v4701);
} else if ((F.v4697 == v729)) {
F.p2095 = yr2078_Lit(v1683, ((*(yR95 *)rt_nil_check(F.p2092))).f_ival);
if ((!(((*(yR95 *)rt_nil_check(F.p2092))).f_d == ((void *)0)))) {
F.v4707 = yr2085_Qualifier(F.p2092);
if ((!(((*(yR100 *)rt_nil_check(F.v4707))).f_kind == v774))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2092))).f_line, y_str("an integer literal qualified by a type that is not INTEGER", 58));
}
((*(yR100 *)rt_nil_check(F.p2095))).f_tid = ((*(yR100 *)rt_nil_check(F.v4707))).f_tid;
((*(yR100 *)rt_nil_check(F.p2095))).f_tname = ((*(yR100 *)rt_nil_check(F.v4707))).f_tname;
}
yr986_SB();
yr997_SA(y_str("INT64_C(", 8));
yr1010_SI(((*(yR95 *)rt_nil_check(F.p2092))).f_ival);
yr997_SA(y_str(")", 1));
F.p2094 = yr1016_SE();
} else if ((F.v4697 == v738)) {
F.v4707 = yr2008_AlphabetFor(F.p2092, F.p2093);
F.v4713 = yr2015_CharValue(F.v4707, ((*(yR95 *)rt_nil_check(F.p2092))).f_text, ((*(yR95 *)rt_nil_check(F.p2092))).f_line);
F.p2095 = yr2078_Lit(F.v4707, F.v4713);
yr986_SB();
yr1010_SI(F.v4713);
F.p2094 = yr1016_SE();
} else if ((F.v4697 == v741)) {
F.v4707 = yr2008_AlphabetFor(F.p2092, F.p2093);
F.v4701 = yr2023_StringCodes(F.v4707, ((*(yR95 *)rt_nil_check(F.p2092))).f_text, &F.v4711, ((*(yR95 *)rt_nil_check(F.p2092))).f_line);
F.p2095 = yr1707_NewRep(v816, yr1021_T(y_str("string", 6)));
((*(yR100 *)rt_nil_check(F.p2095))).f_tname = yr1021_T(y_str("a string literal", 16));
((*(yR100 *)rt_nil_check(F.p2095))).f_elem = F.v4707;
((*(yR100 *)rt_nil_check(F.p2095))).f_nidx = INT64_C(1);
((*(yR100 *)rt_nil_check(F.p2095))).f_nlits = F.v4711;
yr986_SB();
yr997_SA(y_str("y_str(", 6));
yr1004_ST(F.v4701);
yr997_SA(y_str(", ", 2));
yr1010_SI(F.v4711);
yr997_SA(y_str(")", 1));
F.p2094 = yr1016_SE();
} else if ((F.v4697 == v735)) {
F.p2095 = v1695;
if ((!(((*(yR95 *)rt_nil_check(F.p2092))).f_d == ((void *)0)))) {
F.p2095 = yr2085_Qualifier(F.p2092);
}
F.p2094 = yr2072_Paren(((*(yR95 *)rt_nil_check(F.p2092))).f_text);
} else if ((F.v4697 == v732)) {
F.p2095 = v1697;
if ((!(((*(yR95 *)rt_nil_check(F.p2092))).f_d == ((void *)0)))) {
F.p2095 = yr2085_Qualifier(F.p2092);
}
F.p2094 = ((*(yR95 *)rt_nil_check(F.p2092))).f_text;
} else if ((F.v4697 == v744)) {
if ((((*(yR95 *)rt_nil_check(F.p2092))).f_d == ((void *)0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2092))).f_line, y_str("NIL is qualified by the name of a pointer type (VI.B.4)", 55));
}
F.p2095 = yr2085_Qualifier(F.p2092);
if ((!(((*(yR100 *)rt_nil_check(F.p2095))).f_kind == v798))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2092))).f_line, y_str("NIL of a type that is not a pointer", 35));
}
F.p2094 = yr1021_T(y_str("((void *)0)", 11));
} else if ((F.v4697 == v747)) {
if ((!(((*(yR95 *)rt_nil_check(F.p2092))).f_d == ((void *)0)))) {
F.v4707 = yr2085_Qualifier(F.p2092);
F.v4699 = yr1637_FindLit(((*(yR95 *)rt_nil_check(F.p2092))).f_name, F.v4707);
if ((F.v4699 == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2092))).f_line, ((*(yR95 *)rt_nil_check(F.p2092))).f_name, y_str(" is not a literal of that type", 30));
}
} else {
F.v4699 = yr1624_Lookup(((*(yR95 *)rt_nil_check(F.p2092))).f_name, ((*(yR95 *)rt_nil_check(F.p2092))).f_line);
}
yr2108_NameExpr(F.p2092, F.v4699, &F.p2094, &F.p2095);
} else if ((F.v4697 == v750)) {
yr2263_CallExpr(F.p2092, F.p2093, 0, &F.p2094, &F.p2095);
} else if ((F.v4697 == v753)) {
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p2092))).f_a, ((void *)0), &F.v4701, &F.v4707);
((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2092))).f_a))).f_rep = F.v4707;
if ((!(((*(yR100 *)rt_nil_check(F.v4707))).f_kind == v795))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2092))).f_line, ((*(yR95 *)rt_nil_check(F.p2092))).f_name, y_str(": a component of something that is not a record", 47));
}
if (((*(yR100 *)rt_nil_check(F.v4707))).f_opaque) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2092))).f_line, ((*(yR100 *)rt_nil_check(F.v4707))).f_tname, y_str(" is exported opaquely: its components are hidden (X.B.3)", 56));
}
F.v4709 = yr1883_FindField(F.v4707, ((*(yR95 *)rt_nil_check(F.p2092))).f_name);
if ((F.v4709 == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2092))).f_line, ((*(yR95 *)rt_nil_check(F.p2092))).f_name, y_str(" is not a component of this record", 34));
}
F.p2095 = ((*(yR105 *)rt_nil_check(F.v4709))).f_rep;
if ((!(((*(yR105 *)rt_nil_check(F.v4709))).f_variant == INT64_C(0)))) {
F.v4703 = yr1146_Fresh(y_str("vr", 2));
yr986_SB();
yr997_SA(y_str("(*({ ", 5));
yr1004_ST(yr1750_CType(F.v4707));
yr997_SA(y_str(" *", 2));
yr1004_ST(F.v4703);
yr997_SA(y_str(" = &", 4));
yr1004_ST(yr2072_Paren(F.v4701));
yr997_SA(y_str("; if (!(", 8));
yr1004_ST(yr2100_VariantTest(F.v4707, F.v4709, F.v4703));
yr997_SA(y_str(")) rt_raise(RT_X_TAG); &", 24));
yr1004_ST(F.v4703);
yr997_SA(y_str("->f_", 4));
yr1004_ST(((*(yR95 *)rt_nil_check(F.p2092))).f_name);
yr997_SA(y_str("; }))", 5));
F.p2094 = yr1016_SE();
} else {
yr986_SB();
yr1004_ST(yr2072_Paren(F.v4701));
yr997_SA(y_str(".f_", 3));
yr1004_ST(((*(yR95 *)rt_nil_check(F.p2092))).f_name);
F.p2094 = yr1016_SE();
}
} else if ((F.v4697 == v759)) {
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p2092))).f_a, ((void *)0), &F.v4701, &F.v4707);
if ((!(((*(yR100 *)rt_nil_check(F.v4707))).f_kind == v798))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2092))).f_line, y_str("^ of something that is not a pointer", 36));
}
if ((((*(yR100 *)rt_nil_check(F.v4707))).f_elem == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2092))).f_line, ((*(yR100 *)rt_nil_check(F.v4707))).f_forward, y_str(" is not declared", 16));
}
F.p2095 = ((*(yR100 *)rt_nil_check(F.v4707))).f_elem;
yr986_SB();
yr997_SA(y_str("(*(", 3));
yr1004_ST(yr1750_CType(F.p2095));
yr997_SA(y_str(" *)rt_nil_check(", 16));
yr1004_ST(F.v4701);
yr997_SA(y_str("))", 2));
F.p2094 = yr1016_SE();
} else if ((F.v4697 == v756)) {
yr2117_IndexExpr(F.p2092, &F.p2094, &F.p2095);
} else if ((F.v4697 == v762)) {
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p2092))).f_a, v1685, &F.v4701, &F.v4707);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2092))).f_line, v1685, F.v4707);
F.p2095 = v1685;
yr986_SB();
yr997_SA(y_str("(!", 2));
yr1004_ST(F.v4701);
yr997_SA(y_str(")", 1));
F.p2094 = yr1016_SE();
} else if ((F.v4697 == v765)) {
if ((!yr2252_UserOp(F.p2092, rt_range(v546, INT64_C(0), INT64_C(4000000)), ((*(yR95 *)rt_nil_check(F.p2092))).f_a, ((void *)0), &F.p2094, &F.p2095))) {
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p2092))).f_a, F.p2093, &F.v4701, &F.v4707);
yr2125_NegExpr(F.p2092, F.v4701, F.v4707, &F.p2094, &F.p2095);
}
} else if ((F.v4697 == v768)) {
yr2174_BinExpr(F.p2092, F.p2093, &F.p2094, &F.p2095);
} else {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2092))).f_line, y_str("not an expression", 17));
}
((*(yR95 *)rt_nil_check(F.p2092))).f_rep = F.p2095;
(*F.p2094_o) = F.p2094;
(*F.p2095_o) = F.p2095;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2100_VariantTest(void * a_p2101, void * a_p2102, rt_int a_p2103) {
struct yf2104 F;
memset((void *)&F, 0, sizeof F);
F.p2101 = a_p2101;
F.p2102 = a_p2102;
F.p2103 = a_p2103;
F.v4754 = ((*(yR105 *)rt_nil_check(F.p2102))).f_labels;
yr986_SB();
yr997_SA(y_str("0", 1));
while ((!(F.v4754 == ((void *)0)))) {
yr2032_Manifest(F.v4754, &F.v4756, &F.v4758);
yr997_SA(y_str(" || ", 4));
yr1004_ST(F.p2103);
yr997_SA(y_str("->f_", 4));
yr1004_ST(((*(yR105 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p2101))).f_selector))).f_name);
yr997_SA(y_str(" == ", 4));
yr1010_SI(F.v4758);
F.v4754 = ((*(yR95 *)rt_nil_check(F.v4754))).f_next;
}
{ rt_int rv4763 = yr1016_SE();
return rv4763; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2108_NameExpr(void * a_p2109, void * a_p2110, rt_int * a_p2111, void * * a_p2112) {
struct yf2113 F;
memset((void *)&F, 0, sizeof F);
F.p2109 = a_p2109;
F.p2110 = a_p2110;
F.p2111_o = a_p2111;
F.p2112_o = a_p2112;
F.v4770 = yr1677_Real(F.p2110);
if ((((*(yR115 *)rt_nil_check(F.v4770))).f_kind == v843)) {
if ((((((*(yR95 *)rt_nil_check(F.p2109))).f_d == ((void *)0))) && yr1631_Ambiguous(F.v4770))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2109))).f_line, ((*(yR95 *)rt_nil_check(F.p2109))).f_name, y_str(" names values of two types here: qualify it (VI.A.3)", 52));
}
F.p2112 = yr2078_Lit(((*(yR115 *)rt_nil_check(F.v4770))).f_rep, ((*(yR115 *)rt_nil_check(F.v4770))).f_mval);
yr986_SB();
yr1010_SI(((*(yR115 *)rt_nil_check(F.v4770))).f_mval);
F.p2111 = yr1016_SE();
(*F.p2111_o) = F.p2111;
(*F.p2112_o) = F.p2112;
return;
}
if ((((((*(yR115 *)rt_nil_check(F.v4770))).f_kind == v831)) || ((((*(yR115 *)rt_nil_check(F.v4770))).f_kind == v834)))) {
F.p2112 = ((*(yR115 *)rt_nil_check(F.v4770))).f_rep;
F.p2111 = yr1671_SymPath(F.v4770);
(*F.p2111_o) = F.p2111;
(*F.p2112_o) = F.p2112;
return;
}
if ((((*(yR115 *)rt_nil_check(F.v4770))).f_kind == v846)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2109))).f_line, ((*(yR95 *)rt_nil_check(F.p2109))).f_name, y_str(" is a routine: a call needs ()", 30));
}
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2109))).f_line, ((*(yR95 *)rt_nil_check(F.p2109))).f_name, y_str(" is not a value", 15));
(*F.p2111_o) = F.p2111;
(*F.p2112_o) = F.p2112;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2117_IndexExpr(void * a_p2118, rt_int * a_p2119, void * * a_p2120) {
struct yf2121 F;
memset((void *)&F, 0, sizeof F);
F.p2118 = a_p2118;
F.p2119_o = a_p2119;
F.p2120_o = a_p2120;
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p2118))).f_a, ((void *)0), &F.v4779, &F.v4785);
if ((!yr1732_IsArrayLike(F.v4785))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2118))).f_line, y_str("[] of something that is not an array", 36));
}
F.v4793 = yr1260_Count(((*(yR95 *)rt_nil_check(F.p2118))).f_b);
if ((!(F.v4793 == ((*(yR100 *)rt_nil_check(F.v4785))).f_nidx))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2118))).f_line, y_str("the number of subscripts is not the number of dimensions", 56));
}
F.p2120 = ((*(yR100 *)rt_nil_check(F.v4785))).f_elem;
F.v4795 = (((((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2118))).f_a))).f_kind == v747)) || ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2118))).f_a))).f_kind == v753))) || ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2118))).f_a))).f_kind == v756))) || ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2118))).f_a))).f_kind == v759)));
if (F.v4795) {
F.v4783 = F.v4779;
} else {
F.v4783 = yr1146_Fresh(y_str("ya", 2));
}
yr986_SB();
if ((!F.v4795)) {
yr997_SA(y_str("(*({ yarr ", 10));
yr1004_ST(F.v4783);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.v4779);
yr997_SA(y_str("; &", 3));
}
yr997_SA(y_str("((", 2));
yr1004_ST(yr1750_CType(F.p2120));
yr997_SA(y_str(" *)(", 4));
yr1004_ST(F.v4783);
yr997_SA(y_str(").p)[y_ix", 9));
yr1010_SI(F.v4793);
yr997_SA(y_str("(", 1));
yr1004_ST(F.v4783);
F.p2119 = yr1016_SE();
F.v4791 = ((*(yR95 *)rt_nil_check(F.p2118))).f_b;
F.v4789 = ((*(yR100 *)rt_nil_check(F.v4785))).f_idx;
while ((!(F.v4791 == ((void *)0)))) {
yr2091_Expr(F.v4791, F.v4789, &F.v4781, &F.v4787);
if ((((!(F.v4789 == ((void *)0)))) && ((((*(yR100 *)rt_nil_check(F.v4785))).f_kind == v792)))) {
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.v4791))).f_line, F.v4789, F.v4787);
} else if ((!((((((*(yR100 *)rt_nil_check(F.v4787))).f_kind == v774)) || yr1720_IsDiscrete(F.v4787))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v4791))).f_line, y_str("a subscript is an integer or scalar value", 41));
}
yr986_SB();
yr1004_ST(F.p2119);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v4781);
F.p2119 = yr1016_SE();
if ((!(F.v4789 == ((void *)0)))) {
F.v4789 = ((*(yR100 *)rt_nil_check(F.v4789))).f_link;
}
F.v4791 = ((*(yR95 *)rt_nil_check(F.v4791))).f_next;
}
yr986_SB();
yr1004_ST(F.p2119);
yr997_SA(y_str(")]", 2));
if ((!F.v4795)) {
yr997_SA(y_str("; }))", 5));
}
F.p2119 = yr1016_SE();
(*F.p2119_o) = F.p2119;
(*F.p2120_o) = F.p2120;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2125_NegExpr(void * a_p2126, rt_int a_p2127, void * a_p2128, rt_int * a_p2129, void * * a_p2130) {
struct yf2131 F;
memset((void *)&F, 0, sizeof F);
F.p2126 = a_p2126;
F.p2127 = a_p2127;
F.p2128 = a_p2128;
F.p2129_o = a_p2129;
F.p2130_o = a_p2130;
yr986_SB();
if ((((*(yR100 *)rt_nil_check(F.p2128))).f_kind == v774)) {
F.p2130 = yr1714_CopyRep(F.p2128);
((*(yR100 *)rt_nil_check(F.p2130))).f_lo = INT64_C(0);
((*(yR100 *)rt_nil_check(F.p2130))).f_hasm = 0;
yr997_SA(y_str("rt_neg(", 7));
yr1004_ST(F.p2127);
yr997_SA(y_str(")", 1));
} else if ((((((*(yR100 *)rt_nil_check(F.p2128))).f_kind == v780)) || ((((*(yR100 *)rt_nil_check(F.p2128))).f_kind == v777)))) {
F.p2130 = yr1714_CopyRep(F.p2128);
((*(yR100 *)rt_nil_check(F.p2130))).f_lo = INT64_C(0);
yr997_SA(y_str("(-", 2));
yr1004_ST(F.p2127);
yr997_SA(y_str(")", 1));
} else if ((((*(yR100 *)rt_nil_check(F.p2128))).f_kind == v804)) {
F.p2130 = F.p2128;
yr997_SA(y_str("y_set_compl(", 12));
yr1004_ST(F.p2127);
yr997_SA(y_str(")", 1));
} else {
v897 = 0;
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2126))).f_line, y_str("- of something that is not a number or a set", 44));
}
F.p2129 = yr1016_SE();
(*F.p2129_o) = F.p2129;
(*F.p2130_o) = F.p2130;
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2135_Unbounded(void * a_p2136) {
struct yf2137 F;
memset((void *)&F, 0, sizeof F);
F.p2136 = a_p2136;
F.v4830 = yr1714_CopyRep(F.p2136);
((*(yR100 *)rt_nil_check(F.v4830))).f_lo = INT64_C(0);
((*(yR100 *)rt_nil_check(F.v4830))).f_hi = INT64_C(0);
((*(yR100 *)rt_nil_check(F.v4830))).f_hasm = 0;
{ void * rv4834 = F.v4830;
return rv4834; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2141_Call2(yarr a_p2143, rt_int a_p2144, rt_int a_p2145) {
struct yf2146 F;
memset((void *)&F, 0, sizeof F);
F.p2143 = a_p2143;
F.p2144 = a_p2144;
F.p2145 = a_p2145;
yr986_SB();
yr997_SA(F.p2143);
yr997_SA(y_str("(", 1));
yr1004_ST(F.p2144);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.p2145);
yr997_SA(y_str(")", 1));
{ rt_int rv4842 = yr1016_SE();
return rv4842; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2150_Infix(rt_int a_p2151, yarr a_p2153, rt_int a_p2154) {
struct yf2155 F;
memset((void *)&F, 0, sizeof F);
F.p2151 = a_p2151;
F.p2153 = a_p2153;
F.p2154 = a_p2154;
yr986_SB();
yr997_SA(y_str("(", 1));
yr1004_ST(F.p2151);
yr997_SA(y_str(" ", 1));
yr997_SA(F.p2153);
yr997_SA(y_str(" ", 1));
yr1004_ST(F.p2154);
yr997_SA(y_str(")", 1));
{ rt_int rv4851 = yr1016_SE();
return rv4851; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2159_EqCode(rt_int a_p2160, void * a_p2161, rt_int a_p2162, void * a_p2163) {
struct yf2164 F;
memset((void *)&F, 0, sizeof F);
F.p2160 = a_p2160;
F.p2161 = a_p2161;
F.p2162 = a_p2162;
F.p2163 = a_p2163;
F.v4862 = F.p2161;
if ((((*(yR100 *)rt_nil_check(F.p2161))).f_kind == v816)) {
F.v4862 = F.p2163;
}
if ((((((((*(yR100 *)rt_nil_check(F.v4862))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.v4862))).f_kind == v795))) || ((((*(yR100 *)rt_nil_check(F.v4862))).f_kind == v813))) || ((((*(yR100 *)rt_nil_check(F.v4862))).f_kind == v816)))) {
F.v4858 = yr1146_Fresh(y_str("e", 1));
F.v4860 = yr1146_Fresh(y_str("e", 1));
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(yr1750_CType(F.v4862));
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v4858);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.p2160);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v4860);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.p2162);
yr997_SA(y_str("; y_eq(", 7));
if ((((((*(yR100 *)rt_nil_check(F.v4862))).f_kind == v813)) || ((((*(yR100 *)rt_nil_check(F.v4862))).f_kind == v816)))) {
yr997_SA(y_str("y_desc_vector(", 14));
yr1004_ST(yr1756_DescOf(((*(yR100 *)rt_nil_check(F.v4862))).f_elem));
yr997_SA(y_str(")", 1));
} else {
yr1004_ST(yr1756_DescOf(F.v4862));
}
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v4858);
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v4860);
yr997_SA(y_str("); })", 5));
{ rt_int rv4876 = yr1016_SE();
return rv4876; }
}
if ((((*(yR100 *)rt_nil_check(F.v4862))).f_kind == v804)) {
{ rt_int rv4878 = yr2141_Call2(y_str("y_set_eq", 8), F.p2160, F.p2162);
return rv4878; }
}
{ rt_int rv4880 = yr2150_Infix(F.p2160, y_str("==", 2), F.p2162);
return rv4880; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2168_IsOrdered(void * a_p2169) {
struct yf2170 F;
memset((void *)&F, 0, sizeof F);
F.p2169 = a_p2169;
if ((((((((*(yR100 *)rt_nil_check(F.p2169))).f_kind == v774)) || ((((*(yR100 *)rt_nil_check(F.p2169))).f_kind == v780))) || ((((*(yR100 *)rt_nil_check(F.p2169))).f_kind == v777))) || ((((*(yR100 *)rt_nil_check(F.p2169))).f_kind == v789)))) {
{ rt_int rv4884 = 1;
return rv4884; }
}
{ rt_int rv4885 = (((((*(yR100 *)rt_nil_check(F.p2169))).f_kind == v786)) && ((*(yR100 *)rt_nil_check(F.p2169))).f_ordered);
return rv4885; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2174_BinExpr(void * a_p2175, void * a_p2176, rt_int * a_p2177, void * * a_p2178) {
struct yf2179 F;
memset((void *)&F, 0, sizeof F);
F.p2175 = a_p2175;
F.p2176 = a_p2176;
F.p2177_o = a_p2177;
F.p2178_o = a_p2178;
F.v4892 = ((*(yR95 *)rt_nil_check(F.p2175))).f_name;
if (yr2252_UserOp(F.p2175, F.v4892, ((*(yR95 *)rt_nil_check(F.p2175))).f_a, ((*(yR95 *)rt_nil_check(F.p2175))).f_b, &F.p2177, &F.p2178)) {
(*F.p2177_o) = F.p2177;
(*F.p2178_o) = F.p2178;
return;
}
if ((((F.v4892 == v207)) || ((F.v4892 == v369)))) {
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p2175))).f_a, v1685, &F.v4894, &F.v4900);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2175))).f_line, v1685, F.v4900);
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p2175))).f_b, v1685, &F.v4896, &F.v4902);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2175))).f_line, v1685, F.v4902);
F.p2178 = v1685;
if ((F.v4892 == v207)) {
F.p2177 = yr2150_Infix(F.v4894, y_str("&&", 2), F.v4896);
} else {
F.p2177 = yr2150_Infix(F.v4894, y_str("||", 2), F.v4896);
}
(*F.p2177_o) = F.p2177;
(*F.p2178_o) = F.p2178;
return;
}
if ((F.v4892 == v330)) {
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p2175))).f_b, ((void *)0), &F.v4896, &F.v4902);
if ((!(((*(yR100 *)rt_nil_check(F.v4902))).f_kind == v804))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2175))).f_line, y_str("IN needs a set on its right", 27));
}
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p2175))).f_a, ((*(yR100 *)rt_nil_check(F.v4902))).f_elem, &F.v4894, &F.v4900);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2175))).f_line, ((*(yR100 *)rt_nil_check(F.v4902))).f_elem, F.v4900);
F.p2178 = v1685;
F.p2177 = yr2141_Call2(y_str("y_set_in", 8), F.v4894, F.v4896);
(*F.p2177_o) = F.p2177;
(*F.p2178_o) = F.p2178;
return;
}
F.v4904 = ((void *)0);
if (((((((((!(F.p2176 == ((void *)0)))) && ((!(F.v4892 == v555)))) && ((!(F.v4892 == v540)))) && ((!(F.v4892 == v558)))) && ((!(F.v4892 == v510)))) && ((!(F.v4892 == v561)))) && ((!(F.v4892 == v513))))) {
F.v4904 = F.p2176;
}
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p2175))).f_a, F.v4904, &F.v4894, &F.v4900);
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p2175))).f_b, F.v4900, &F.v4896, &F.v4902);
if ((((F.v4892 == v555)) || ((F.v4892 == v540)))) {
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2175))).f_line, F.v4900, F.v4902);
if (((((((*(yR100 *)rt_nil_check(F.v4900))).f_kind == v807)) || ((((*(yR100 *)rt_nil_check(F.v4900))).f_kind == v801))) || ((((*(yR100 *)rt_nil_check(F.v4900))).f_kind == v810)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2175))).f_line, y_str("= and # are not defined for signals, files and semaphores", 57));
}
if ((((*(yR100 *)rt_nil_check(F.v4900))).f_opaque && (((rt_div(((*(yR100 *)rt_nil_check(F.v4900))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2175))).f_line, ((*(yR100 *)rt_nil_check(F.v4900))).f_tname, y_str(" is opaque here: = is not exported (X.B.3)", 42));
}
F.p2178 = v1685;
F.p2177 = yr2159_EqCode(F.v4894, F.v4900, F.v4896, F.v4902);
if ((F.v4892 == v540)) {
yr986_SB();
yr997_SA(y_str("(!", 2));
yr1004_ST(F.p2177);
yr997_SA(y_str(")", 1));
F.p2177 = yr1016_SE();
}
(*F.p2177_o) = F.p2177;
(*F.p2178_o) = F.p2178;
return;
}
if ((((((F.v4892 == v558)) || ((F.v4892 == v510))) || ((F.v4892 == v561))) || ((F.v4892 == v513)))) {
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2175))).f_line, F.v4900, F.v4902);
if ((!yr2168_IsOrdered(F.v4900))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2175))).f_line, y_str("< <= > >= apply to ordered values (VIII.A.1)", 44));
}
F.p2178 = v1685;
if ((F.v4892 == v558)) {
F.p2177 = yr2150_Infix(F.v4894, y_str("<", 1), F.v4896);
} else if ((F.v4892 == v510)) {
F.p2177 = yr2150_Infix(F.v4894, y_str("<=", 2), F.v4896);
} else if ((F.v4892 == v561)) {
F.p2177 = yr2150_Infix(F.v4894, y_str(">", 1), F.v4896);
} else {
F.p2177 = yr2150_Infix(F.v4894, y_str(">=", 2), F.v4896);
}
(*F.p2177_o) = F.p2177;
(*F.p2178_o) = F.p2178;
return;
}
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2175))).f_line, F.v4900, F.v4902);
F.v4906 = ((*(yR100 *)rt_nil_check(F.v4900))).f_kind;
if ((((*(yR100 *)rt_nil_check(F.v4900))).f_kind == v816)) {
F.v4906 = ((*(yR100 *)rt_nil_check(F.v4902))).f_kind;
}
if ((F.v4892 == v459)) {
if ((F.v4906 == v783)) {
F.p2178 = v1685;
F.p2177 = yr2150_Infix(F.v4894, y_str("!=", 2), F.v4896);
} else if ((F.v4906 == v804)) {
F.p2178 = F.v4900;
F.p2177 = yr2141_Call2(y_str("y_set_xor", 9), F.v4894, F.v4896);
} else {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2175))).f_line, y_str("XOR applies to BOOLEAN values and sets", 38));
}
(*F.p2177_o) = F.p2177;
(*F.p2178_o) = F.p2178;
return;
}
if ((F.v4906 == v804)) {
F.p2178 = F.v4900;
if ((F.v4892 == v543)) {
F.p2177 = yr2141_Call2(y_str("y_set_union", 11), F.v4894, F.v4896);
} else if ((F.v4892 == v546)) {
F.p2177 = yr2141_Call2(y_str("y_set_diff", 10), F.v4894, F.v4896);
} else if ((F.v4892 == v549)) {
F.p2177 = yr2141_Call2(y_str("y_set_inter", 11), F.v4894, F.v4896);
} else {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2175))).f_line, y_str("this operator does not apply to sets", 36));
}
(*F.p2177_o) = F.p2177;
(*F.p2178_o) = F.p2178;
return;
}
if ((F.v4906 == v774)) {
F.p2178 = yr2135_Unbounded(F.v4900);
if ((F.v4892 == v543)) {
F.p2177 = yr2141_Call2(y_str("rt_add", 6), F.v4894, F.v4896);
} else if ((F.v4892 == v546)) {
F.p2177 = yr2141_Call2(y_str("rt_sub", 6), F.v4894, F.v4896);
} else if ((F.v4892 == v549)) {
F.p2177 = yr2141_Call2(y_str("rt_mul", 6), F.v4894, F.v4896);
} else if ((F.v4892 == v246)) {
F.p2177 = yr2141_Call2(y_str("rt_div", 6), F.v4894, F.v4896);
} else if ((F.v4892 == v348)) {
F.p2177 = yr2141_Call2(y_str("rt_mod", 6), F.v4894, F.v4896);
} else if ((F.v4892 == v552)) {
F.p2178 = v1695;
yr986_SB();
yr997_SA(y_str("rt_fdiv((double)(", 17));
yr1004_ST(F.v4894);
yr997_SA(y_str("), (double)(", 12));
yr1004_ST(F.v4896);
yr997_SA(y_str("))", 2));
F.p2177 = yr1016_SE();
} else {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2175))).f_line, F.v4892, y_str(" is a free operator: no definition of it is visible (VIII.A)", 60));
}
(*F.p2177_o) = F.p2177;
(*F.p2178_o) = F.p2178;
return;
}
if ((((F.v4906 == v780)) || ((F.v4906 == v777)))) {
F.p2178 = yr2135_Unbounded(F.v4900);
if ((F.v4892 == v543)) {
F.p2177 = yr2150_Infix(F.v4894, y_str("+", 1), F.v4896);
} else if ((F.v4892 == v546)) {
F.p2177 = yr2150_Infix(F.v4894, y_str("-", 1), F.v4896);
} else if ((F.v4892 == v549)) {
F.p2177 = yr2150_Infix(F.v4894, y_str("*", 1), F.v4896);
} else if ((F.v4892 == v552)) {
F.p2178 = v1695;
F.p2177 = yr2141_Call2(y_str("rt_fdiv", 7), F.v4894, F.v4896);
} else {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2175))).f_line, F.v4892, y_str(" does not apply to these numbers", 32));
}
(*F.p2177_o) = F.p2177;
(*F.p2178_o) = F.p2178;
return;
}
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2175))).f_line, F.v4892, y_str(" does not apply to these values", 31));
(*F.p2177_o) = F.p2177;
(*F.p2178_o) = F.p2178;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2213_Fits(void * a_p2214, void * a_p2215) {
struct yf2216 F;
memset((void *)&F, 0, sizeof F);
F.p2214 = a_p2214;
F.p2215 = a_p2215;
if ((((*(yR100 *)rt_nil_check(F.p2214))).f_kind == v813)) {
if ((!yr1732_IsArrayLike(F.p2215))) {
{ rt_int rv4949 = 0;
return rv4949; }
}
if ((!(((*(yR100 *)rt_nil_check(F.p2215))).f_nidx == ((*(yR100 *)rt_nil_check(F.p2214))).f_nidx))) {
{ rt_int rv4951 = 0;
return rv4951; }
}
{ rt_int rv4952 = yr1768_SameType(((*(yR100 *)rt_nil_check(F.p2214))).f_elem, ((*(yR100 *)rt_nil_check(F.p2215))).f_elem);
return rv4952; }
}
if ((((*(yR100 *)rt_nil_check(F.p2214))).f_kind == v825)) {
{ rt_int rv4954 = 1;
return rv4954; }
}
{ rt_int rv4955 = yr1768_SameType(F.p2214, F.p2215);
return rv4955; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2220_Choose(void * a_p2221, rt_int a_p2222, rt_int a_p2223) {
struct yf2224 F;
memset((void *)&F, 0, sizeof F);
F.p2221 = a_p2221;
F.p2222 = a_p2222;
F.p2223 = a_p2223;
F.v4961 = F.p2221;
while ((!(F.v4961 == ((void *)0)))) {
if ((((*(yR115 *)rt_nil_check(F.v4961))).f_nparams == F.p2223)) {
F.v4965 = 1;
F.v4963 = ((*(yR115 *)rt_nil_check(F.v4961))).f_params;
F.v4967 = INT64_C(1);
while ((!(F.v4963 == ((void *)0)))) {
if ((!yr2213_Fits(((*(yR110 *)rt_nil_check(F.v4963))).f_rep, ((void * *)(v2199).p)[y_ix1(v2199, rt_add(F.p2222, F.v4967))]))) {
F.v4965 = 0;
}
F.v4967 = rt_range(rt_add(F.v4967, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4963 = ((*(yR110 *)rt_nil_check(F.v4963))).f_next;
}
if (F.v4965) {
{ void * rv4974 = F.v4961;
return rv4974; }
}
}
F.v4961 = ((*(yR115 *)rt_nil_check(F.v4961))).f_alt;
}
{ void * rv4975 = ((void *)0);
return rv4975; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2228_HidesStandard(void * a_p2229) {
struct yf2230 F;
memset((void *)&F, 0, sizeof F);
F.p2229 = a_p2229;
F.v4979 = F.p2229;
while ((!(F.v4979 == ((void *)0)))) {
if ((((!(((*(yR115 *)rt_nil_check(F.v4979))).f_decl == ((void *)0)))) && ((((*(yR95 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4979))).f_decl))).f_ival == INT64_C(0))))) {
{ rt_int rv4982 = 1;
return rv4982; }
}
F.v4979 = ((*(yR115 *)rt_nil_check(F.v4979))).f_alt;
}
{ rt_int rv4984 = 0;
return rv4984; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2234_CompileArgs(void * a_p2235, void * a_p2236, rt_int * a_p2237, rt_int * a_p2238) {
struct yf2239 F;
memset((void *)&F, 0, sizeof F);
F.p2235 = a_p2235;
F.p2236 = a_p2236;
F.p2237_o = a_p2237;
F.p2238_o = a_p2238;
F.v4991 = F.p2235;
F.v4993 = ((void *)0);
F.p2237 = v2210;
F.p2238 = INT64_C(0);
if ((!(F.p2236 == ((void *)0)))) {
F.v4993 = ((*(yR115 *)rt_nil_check(F.p2236))).f_params;
}
while ((!(F.v4991 == ((void *)0)))) {
if ((v2210 >= INT64_C(4000))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v4991))).f_line, y_str("calls nested too deeply", 23));
}
F.p2238 = rt_range(rt_add(F.p2238, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v2210 = rt_range(rt_add(F.p2237, F.p2238), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4995 = ((void *)0);
if ((!(F.v4993 == ((void *)0)))) {
F.v4995 = ((*(yR110 *)rt_nil_check(F.v4993))).f_rep;
F.v4993 = ((*(yR110 *)rt_nil_check(F.v4993))).f_next;
}
yr2091_Expr(F.v4991, F.v4995, &((rt_int *)(v2190).p)[y_ix1(v2190, rt_add(F.p2237, F.p2238))], &((void * *)(v2199).p)[y_ix1(v2199, rt_add(F.p2237, F.p2238))]);
((void * *)(v2208).p)[y_ix1(v2208, rt_add(F.p2237, F.p2238))] = F.v4991;
F.v4991 = ((*(yR95 *)rt_nil_check(F.v4991))).f_next;
}
(*F.p2237_o) = F.p2237;
(*F.p2238_o) = F.p2238;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2243_CallCode(void * a_p2244, rt_int a_p2245, rt_int a_p2246, rt_int a_p2247) {
struct yf2248 F;
memset((void *)&F, 0, sizeof F);
F.p2244 = a_p2244;
F.p2245 = a_p2245;
F.p2246 = a_p2246;
F.p2247 = a_p2247;
F.v5011 = ((*(yR115 *)rt_nil_check(F.p2244))).f_params;
F.v5013 = rt_range(rt_add(F.p2245, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5017 = 1;
if ((!(F.p2246 == ((*(yR115 *)rt_nil_check(F.p2244))).f_nparams))) {
yr1132_FailN(F.p2247, ((*(yR115 *)rt_nil_check(F.p2244))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
yr986_SB();
yr1004_ST(((*(yR115 *)rt_nil_check(F.p2244))).f_cname);
yr997_SA(y_str("(", 1));
if ((((*(yR115 *)rt_nil_check(F.p2244))).f_level > INT64_C(1))) {
yr1004_ST(yr1658_FramePtr(rt_range(rt_sub(((*(yR115 *)rt_nil_check(F.p2244))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v5017 = 0;
}
while ((!(F.v5011 == ((void *)0)))) {
if ((!F.v5017)) {
yr997_SA(y_str(", ", 2));
}
F.v5017 = 0;
if ((!yr2213_Fits(((*(yR110 *)rt_nil_check(F.v5011))).f_rep, ((void * *)(v2199).p)[y_ix1(v2199, F.v5013)]))) {
v897 = 0;
yr1775_TypeClash(((*(yR95 *)rt_nil_check(((void * *)(v2208).p)[y_ix1(v2208, F.v5013)]))).f_line, ((*(yR110 *)rt_nil_check(F.v5011))).f_rep, ((void * *)(v2199).p)[y_ix1(v2199, F.v5013)]);
}
if ((((*(yR110 *)rt_nil_check(F.v5011))).f_cls == v867)) {
yr1004_ST(yr2040_Convert(((rt_int *)(v2190).p)[y_ix1(v2190, F.v5013)], ((*(yR110 *)rt_nil_check(F.v5011))).f_rep, ((void * *)(v2199).p)[y_ix1(v2199, F.v5013)]));
} else {
if ((!yr2058_IsVariable(((void * *)(v2208).p)[y_ix1(v2208, F.v5013)]))) {
v897 = 0;
yr1132_FailN(((*(yR95 *)rt_nil_check(((void * *)(v2208).p)[y_ix1(v2208, F.v5013)]))).f_line, ((*(yR110 *)rt_nil_check(F.v5011))).f_name, y_str(": the actual of a VAR or OUT parameter must be a variable", 57));
}
yr997_SA(y_str("&", 1));
yr1004_ST(((rt_int *)(v2190).p)[y_ix1(v2190, F.v5013)]);
}
F.v5013 = rt_range(rt_add(F.v5013, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5011 = ((*(yR110 *)rt_nil_check(F.v5011))).f_next;
}
yr997_SA(y_str(")", 1));
v2210 = F.p2245;
{ rt_int rv5034 = yr1016_SE();
return rv5034; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2252_UserOp(void * a_p2253, rt_int a_p2254, void * a_p2255, void * a_p2256, rt_int * a_p2257, void * * a_p2258) {
struct yf2259 F;
memset((void *)&F, 0, sizeof F);
F.p2253 = a_p2253;
F.p2254 = a_p2254;
F.p2255 = a_p2255;
F.p2256 = a_p2256;
F.p2257_o = a_p2257;
F.p2258_o = a_p2258;
F.v5043 = yr1612_Find(F.p2254);
if ((F.v5043 == ((void *)0))) {
{ rt_int rv5051 = 0;
(*F.p2257_o) = F.p2257;
(*F.p2258_o) = F.p2258;
return rv5051; }
}
F.v5043 = yr1677_Real(F.v5043);
if ((!(((*(yR115 *)rt_nil_check(F.v5043))).f_kind == v846))) {
{ rt_int rv5053 = 0;
(*F.p2257_o) = F.p2257;
(*F.p2258_o) = F.p2258;
return rv5053; }
}
((*(yR95 *)rt_nil_check(F.p2255))).f_next = F.p2256;
if ((!(F.p2256 == ((void *)0)))) {
((*(yR95 *)rt_nil_check(F.p2256))).f_next = ((void *)0);
}
yr2234_CompileArgs(F.p2255, ((void *)0), &F.v5047, &F.v5049);
F.v5045 = yr2220_Choose(F.v5043, F.v5047, F.v5049);
if ((F.v5045 == ((void *)0))) {
v2210 = F.v5047;
if (yr2228_HidesStandard(F.v5043)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2253))).f_line, F.p2254, y_str(": no definition takes operands of these types", 45));
}
{ rt_int rv5056 = 0;
(*F.p2257_o) = F.p2257;
(*F.p2258_o) = F.p2258;
return rv5056; }
}
F.p2257 = yr2243_CallCode(F.v5045, F.v5047, F.v5049, ((*(yR95 *)rt_nil_check(F.p2253))).f_line);
F.p2258 = ((*(yR115 *)rt_nil_check(F.v5045))).f_ret;
{ rt_int rv5058 = 1;
(*F.p2257_o) = F.p2257;
(*F.p2258_o) = F.p2258;
return rv5058; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2263_CallExpr(void * a_p2264, void * a_p2265, rt_int a_p2266, rt_int * a_p2267, void * * a_p2268) {
struct yf2269 F;
memset((void *)&F, 0, sizeof F);
F.p2264 = a_p2264;
F.p2265 = a_p2265;
F.p2266 = a_p2266;
F.p2267_o = a_p2267;
F.p2268_o = a_p2268;
F.v5066 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(F.p2264))).f_name, ((*(yR95 *)rt_nil_check(F.p2264))).f_line));
if ((((*(yR115 *)rt_nil_check(F.v5066))).f_kind == v861)) {
yr2696_StdCall(((*(yR115 *)rt_nil_check(F.v5066))).f_mval, F.p2264, F.p2266, &F.p2267, &F.p2268);
(*F.p2267_o) = F.p2267;
(*F.p2268_o) = F.p2268;
return;
}
if ((((((*(yR115 *)rt_nil_check(F.v5066))).f_kind == v837)) || ((((*(yR115 *)rt_nil_check(F.v5066))).f_kind == v840)))) {
if (F.p2266) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2264))).f_line, y_str("a value is not a statement", 26));
}
yr2273_Denote(((*(yR115 *)rt_nil_check(F.v5066))).f_rep, F.p2264, &F.p2267, &F.p2268);
(*F.p2267_o) = F.p2267;
(*F.p2268_o) = F.p2268;
return;
}
if ((!(((*(yR115 *)rt_nil_check(F.v5066))).f_kind == v846))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2264))).f_line, ((*(yR95 *)rt_nil_check(F.p2264))).f_name, y_str(" is not a routine", 17));
}
if ((((*(yR115 *)rt_nil_check(F.v5066))).f_alt == ((void *)0))) {
yr2234_CompileArgs(((*(yR95 *)rt_nil_check(F.p2264))).f_a, F.v5066, &F.v5070, &F.v5072);
F.v5068 = F.v5066;
} else {
yr2234_CompileArgs(((*(yR95 *)rt_nil_check(F.p2264))).f_a, ((void *)0), &F.v5070, &F.v5072);
F.v5068 = yr2220_Choose(F.v5066, F.v5070, F.v5072);
if ((F.v5068 == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2264))).f_line, ((*(yR95 *)rt_nil_check(F.p2264))).f_name, y_str(": no definition takes actuals of these types", 44));
}
}
F.p2267 = yr2243_CallCode(F.v5068, F.v5070, F.v5072, ((*(yR95 *)rt_nil_check(F.p2264))).f_line);
F.p2268 = ((*(yR115 *)rt_nil_check(F.v5068))).f_ret;
if ((F.p2266 && ((!(((*(yR100 *)rt_nil_check(F.p2268))).f_kind == v822))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2264))).f_line, ((*(yR95 *)rt_nil_check(F.p2264))).f_name, y_str(" returns a value: it is called in an expression (IX.A.2)", 56));
}
if (((!F.p2266) && ((((*(yR100 *)rt_nil_check(F.p2268))).f_kind == v822)))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2264))).f_line, ((*(yR95 *)rt_nil_check(F.p2264))).f_name, y_str(" returns no value", 17));
}
(*F.p2267_o) = F.p2267;
(*F.p2268_o) = F.p2268;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2273_Denote(void * a_p2274, void * a_p2275, rt_int * a_p2276, void * * a_p2277) {
struct yf2278 F;
memset((void *)&F, 0, sizeof F);
F.p2274 = a_p2274;
F.p2275 = a_p2275;
F.p2276_o = a_p2276;
F.p2277_o = a_p2277;
F.v5084 = ((*(yR95 *)rt_nil_check(F.p2275))).f_a;
F.v5104 = INT64_C(0);
F.v5111 = 1;
F.p2277 = F.p2274;
if (((*(yR100 *)rt_nil_check(F.p2274))).f_abstract) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2275))).f_line, ((*(yR100 *)rt_nil_check(F.p2274))).f_tname, y_str(" has no representation to denote a value of", 43));
}
if ((((*(yR100 *)rt_nil_check(F.p2274))).f_kind == v795)) {
if (((*(yR100 *)rt_nil_check(F.p2274))).f_opaque) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2275))).f_line, ((*(yR100 *)rt_nil_check(F.p2274))).f_tname, y_str(" is opaque here (X.B.3)", 23));
}
yr986_SB();
yr997_SA(y_str("((", 2));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p2274))).f_cname);
yr997_SA(y_str("){ ", 3));
F.v5090 = yr1016_SE();
F.v5086 = ((*(yR100 *)rt_nil_check(F.p2274))).f_fields;
while ((!(F.v5086 == ((void *)0)))) {
if ((((((*(yR105 *)rt_nil_check(F.v5086))).f_variant == INT64_C(0))) || ((((*(yR105 *)rt_nil_check(F.v5086))).f_variant == F.v5104)))) {
if ((F.v5084 == ((void *)0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2275))).f_line, y_str("too few components in this record value", 39));
}
yr2091_Expr(F.v5084, ((*(yR105 *)rt_nil_check(F.v5086))).f_rep, &F.v5088, &F.v5094);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.v5084))).f_line, ((*(yR105 *)rt_nil_check(F.v5086))).f_rep, F.v5094);
if ((F.v5086 == ((*(yR100 *)rt_nil_check(F.p2274))).f_selector)) {
yr2032_Manifest(F.v5084, &F.v5102, &F.v5107);
if ((!F.v5102)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v5084))).f_line, y_str("the case-selection value is a manifest constant", 47));
}
F.v5104 = yr2282_VariantOf(F.p2274, F.v5107, ((*(yR95 *)rt_nil_check(F.v5084))).f_line);
}
yr986_SB();
yr1004_ST(F.v5090);
if ((!F.v5111)) {
yr997_SA(y_str(", ", 2));
}
F.v5111 = 0;
yr997_SA(y_str(".f_", 3));
yr1004_ST(((*(yR105 *)rt_nil_check(F.v5086))).f_name);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2040_Convert(F.v5088, ((*(yR105 *)rt_nil_check(F.v5086))).f_rep, F.v5094));
F.v5090 = yr1016_SE();
F.v5084 = ((*(yR95 *)rt_nil_check(F.v5084))).f_next;
}
F.v5086 = ((*(yR105 *)rt_nil_check(F.v5086))).f_next;
}
if ((!(F.v5084 == ((void *)0)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2275))).f_line, y_str("too many components in this record value", 40));
}
yr986_SB();
yr1004_ST(F.v5090);
yr997_SA(y_str(" })", 3));
F.p2276 = yr1016_SE();
(*F.p2276_o) = F.p2276;
(*F.p2277_o) = F.p2277;
return;
}
if ((((*(yR100 *)rt_nil_check(F.p2274))).f_kind == v792)) {
F.v5096 = yr1260_Count(F.v5084);
F.v5090 = yr1146_Fresh(y_str("da", 2));
if ((F.v5096 == INT64_C(1))) {
yr2091_Expr(F.v5084, ((*(yR100 *)rt_nil_check(F.p2274))).f_elem, &F.v5088, &F.v5094);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.v5084))).f_line, ((*(yR100 *)rt_nil_check(F.p2274))).f_elem, F.v5094);
F.v5092 = yr1146_Fresh(y_str("dv", 2));
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(yr1750_CType(((*(yR100 *)rt_nil_check(F.p2274))).f_elem));
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v5092);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2040_Convert(F.v5088, ((*(yR100 *)rt_nil_check(F.p2274))).f_elem, F.v5094));
yr997_SA(y_str("; y_fill(", 9));
yr1004_ST(yr1756_DescOf(F.p2274));
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v5092);
yr997_SA(y_str("); })", 5));
F.p2276 = yr1016_SE();
(*F.p2276_o) = F.p2276;
(*F.p2277_o) = F.p2277;
return;
}
yr986_SB();
yr997_SA(y_str("({ yarr ", 8));
yr1004_ST(F.v5090);
yr997_SA(y_str("; y_init(", 9));
yr1004_ST(yr1756_DescOf(F.p2274));
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v5090);
yr997_SA(y_str("); if (y_count(", 15));
yr1004_ST(F.v5090);
yr997_SA(y_str(", ", 2));
yr1010_SI(((*(yR100 *)rt_nil_check(F.p2274))).f_nidx);
yr997_SA(y_str(") != ", 5));
yr1010_SI(F.v5096);
yr997_SA(y_str(") rt_raise_msg(RT_X_RANGE, ", 27));
yr991_SC(34);
yr997_SA(y_str("wrong number of components", 26));
yr991_SC(34);
yr997_SA(y_str(");", 2));
F.p2276 = yr1016_SE();
F.v5100 = INT64_C(0);
while ((!(F.v5084 == ((void *)0)))) {
yr2091_Expr(F.v5084, ((*(yR100 *)rt_nil_check(F.p2274))).f_elem, &F.v5088, &F.v5094);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.v5084))).f_line, ((*(yR100 *)rt_nil_check(F.p2274))).f_elem, F.v5094);
yr986_SB();
yr1004_ST(F.p2276);
if (yr1744_Deep(((*(yR100 *)rt_nil_check(F.p2274))).f_elem)) {
yr997_SA(y_str(" { ", 3));
yr1004_ST(yr1750_CType(((*(yR100 *)rt_nil_check(F.p2274))).f_elem));
yr997_SA(y_str(" dv = ", 6));
yr1004_ST(F.v5088);
yr997_SA(y_str("; y_copy(", 9));
yr1004_ST(yr1756_DescOf(((*(yR100 *)rt_nil_check(F.p2274))).f_elem));
yr997_SA(y_str(", &((", 5));
yr1004_ST(yr1750_CType(((*(yR100 *)rt_nil_check(F.p2274))).f_elem));
yr997_SA(y_str(" *)", 3));
yr1004_ST(F.v5090);
yr997_SA(y_str(".p)[", 4));
yr1010_SI(F.v5100);
yr997_SA(y_str("], &dv); }", 10));
} else {
yr997_SA(y_str(" ((", 3));
yr1004_ST(yr1750_CType(((*(yR100 *)rt_nil_check(F.p2274))).f_elem));
yr997_SA(y_str(" *)", 3));
yr1004_ST(F.v5090);
yr997_SA(y_str(".p)[", 4));
yr1010_SI(F.v5100);
yr997_SA(y_str("] = ", 4));
yr1004_ST(yr2040_Convert(F.v5088, ((*(yR100 *)rt_nil_check(F.p2274))).f_elem, F.v5094));
yr997_SA(y_str(";", 1));
}
F.p2276 = yr1016_SE();
F.v5100 = rt_range(rt_add(F.v5100, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5084 = ((*(yR95 *)rt_nil_check(F.v5084))).f_next;
}
yr986_SB();
yr1004_ST(F.p2276);
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v5090);
yr997_SA(y_str("; })", 4));
F.p2276 = yr1016_SE();
(*F.p2276_o) = F.p2276;
(*F.p2277_o) = F.p2277;
return;
}
if ((((*(yR100 *)rt_nil_check(F.p2274))).f_kind == v804)) {
yr986_SB();
yr997_SA(y_str("y_set_new(", 10));
yr1004_ST(((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p2274))).f_elem))).f_lo);
yr997_SA(y_str(", ", 2));
yr1004_ST(((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p2274))).f_elem))).f_hi);
yr997_SA(y_str(")", 1));
F.p2276 = yr1016_SE();
while ((!(F.v5084 == ((void *)0)))) {
yr2091_Expr(F.v5084, ((*(yR100 *)rt_nil_check(F.p2274))).f_elem, &F.v5088, &F.v5094);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.v5084))).f_line, ((*(yR100 *)rt_nil_check(F.p2274))).f_elem, F.v5094);
F.p2276 = yr2141_Call2(y_str("y_set_add", 9), F.p2276, F.v5088);
F.v5084 = ((*(yR95 *)rt_nil_check(F.v5084))).f_next;
}
(*F.p2276_o) = F.p2276;
(*F.p2277_o) = F.p2277;
return;
}
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2275))).f_line, ((*(yR100 *)rt_nil_check(F.p2274))).f_tname, y_str(" has no denotations of values", 29));
(*F.p2276_o) = F.p2276;
(*F.p2277_o) = F.p2277;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2282_VariantOf(void * a_p2283, rt_int a_p2284, rt_int a_p2285) {
struct yf2286 F;
memset((void *)&F, 0, sizeof F);
F.p2283 = a_p2283;
F.p2284 = a_p2284;
F.p2285 = a_p2285;
F.v5173 = ((*(yR100 *)rt_nil_check(F.p2283))).f_fields;
while ((!(F.v5173 == ((void *)0)))) {
if ((!(((*(yR105 *)rt_nil_check(F.v5173))).f_variant == INT64_C(0)))) {
F.v5175 = ((*(yR105 *)rt_nil_check(F.v5173))).f_labels;
while ((!(F.v5175 == ((void *)0)))) {
yr2032_Manifest(F.v5175, &F.v5177, &F.v5179);
if ((F.v5177 && ((F.v5179 == F.p2284)))) {
{ rt_int rv5181 = ((*(yR105 *)rt_nil_check(F.v5173))).f_variant;
return rv5181; }
}
F.v5175 = ((*(yR95 *)rt_nil_check(F.v5175))).f_next;
}
}
F.v5173 = ((*(yR105 *)rt_nil_check(F.v5173))).f_next;
}
{ rt_int rv5183 = INT64_C(-1);
return rv5183; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2360_Emit2(yarr a_p2362, rt_int a_p2363) {
struct yf2364 F;
memset((void *)&F, 0, sizeof F);
F.p2362 = a_p2362;
F.p2363 = a_p2363;
yr986_SB();
yr997_SA(F.p2362);
yr1004_ST(F.p2363);
F.v5188 = yr1016_SE();
yr1092_Emit(F.v5188);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2368_Emit3(yarr a_p2370, rt_int a_p2371, yarr a_p2373) {
struct yf2374 F;
memset((void *)&F, 0, sizeof F);
F.p2370 = a_p2370;
F.p2371 = a_p2371;
F.p2373 = a_p2373;
yr986_SB();
yr997_SA(F.p2370);
yr1004_ST(F.p2371);
yr997_SA(F.p2373);
F.v5194 = yr1016_SE();
yr1092_Emit(F.v5194);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2378_PopTo(rt_int a_p2379) {
struct yf2380 F;
memset((void *)&F, 0, sizeof F);
F.p2379 = a_p2379;
if ((v2299 > F.p2379)) {
yr2368_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v2297).p)[y_ix1(v2297, rt_add(F.p2379, INT64_C(1)))], y_str(".prev;", 6));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2384_LeaveBlock(void) {
struct yf2385 F;
memset((void *)&F, 0, sizeof F);
if ((v2314 > INT64_C(0))) {
if ((!(((rt_int *)(v2312).p)[y_ix1(v2312, v2314)] == INT64_C(0)))) {
yr2368_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v2312).p)[y_ix1(v2312, v2314)], y_str(".prev;", 6));
}
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2389_RaiseCode(rt_int a_p2390) {
struct yf2391 F;
memset((void *)&F, 0, sizeof F);
F.p2390 = a_p2390;
yr986_SB();
yr997_SA(y_str("rt_raise(rt_exc(", 16));
yr991_SC(34);
yr1004_ST(F.p2390);
yr991_SC(34);
yr997_SA(y_str("));", 3));
{ rt_int rv5212 = yr1016_SE();
return rv5212; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2395_BlockStatements(void * a_p2396) {
struct yf2397 F;
memset((void *)&F, 0, sizeof F);
F.p2396 = a_p2396;
if ((((*(yR95 *)rt_nil_check(F.p2396))).f_b == ((void *)0))) {
v2314 = rt_range(rt_add(v2314, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2312).p)[y_ix1(v2312, v2314)] = INT64_C(0);
yr2401_Statements(((*(yR95 *)rt_nil_check(F.p2396))).f_c);
v2314 = rt_range(rt_sub(v2314, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return;
}
v2357 = 1;
F.v5216 = yr1146_Fresh(y_str("xf", 2));
yr2368_Emit3(y_str("{ rt_frame ", 11), F.v5216, y_str(";", 1));
yr2368_Emit3(y_str("if (RT_TRY(", 11), F.v5216, y_str(")) {", 4));
v2299 = rt_range(rt_add(v2299, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2297).p)[y_ix1(v2297, v2299)] = F.v5216;
v2314 = rt_range(rt_add(v2314, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2312).p)[y_ix1(v2312, v2314)] = F.v5216;
yr2401_Statements(((*(yR95 *)rt_nil_check(F.p2396))).f_c);
v2314 = rt_range(rt_sub(v2314, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v2299 = rt_range(rt_sub(v2299, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr2368_Emit3(y_str("RT_POP(", 7), F.v5216, y_str(");", 2));
yr1098_EmitS(y_str("} else {", 8));
yr2368_Emit3(y_str("RT_POP(", 7), F.v5216, y_str(");", 2));
F.v5218 = yr1146_Fresh(y_str("xc", 2));
yr2368_Emit3(y_str("int ", 4), F.v5218, y_str(" = rt_xcur;", 11));
v2314 = rt_range(rt_add(v2314, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2312).p)[y_ix1(v2312, v2314)] = INT64_C(0);
v2326 = rt_range(rt_add(v2326, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2324).p)[y_ix1(v2324, v2326)] = F.v5218;
F.v5226 = 1;
F.v5222 = ((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2396))).f_b))).f_a;
while ((!(F.v5222 == ((void *)0)))) {
yr986_SB();
if (F.v5226) {
yr997_SA(y_str("if (", 4));
} else {
yr997_SA(y_str("} else if (", 11));
}
F.v5226 = 0;
F.v5224 = ((*(yR95 *)rt_nil_check(F.v5222))).f_a;
while ((!(F.v5224 == ((void *)0)))) {
yr1004_ST(F.v5218);
yr997_SA(y_str(" == rt_exc(", 11));
yr991_SC(34);
yr1004_ST(((*(yR95 *)rt_nil_check(F.v5224))).f_name);
yr991_SC(34);
yr997_SA(y_str(")", 1));
if ((!(((*(yR95 *)rt_nil_check(F.v5224))).f_next == ((void *)0)))) {
yr997_SA(y_str(" || ", 4));
}
F.v5224 = ((*(yR95 *)rt_nil_check(F.v5224))).f_next;
}
yr997_SA(y_str(") {", 3));
F.v5220 = yr1016_SE();
yr1092_Emit(F.v5220);
yr2401_Statements(((*(yR95 *)rt_nil_check(F.v5222))).f_b);
F.v5222 = ((*(yR95 *)rt_nil_check(F.v5222))).f_next;
}
if ((!F.v5226)) {
yr1098_EmitS(y_str("} else {", 8));
}
if ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2396))).f_b))).f_flag == INT64_C(1))) {
yr2401_Statements(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2396))).f_b))).f_b);
} else {
yr2368_Emit3(y_str("rt_raise(", 9), F.v5218, y_str(");", 2));
}
if ((!F.v5226)) {
yr1098_EmitS(y_str("}", 1));
}
v2326 = rt_range(rt_sub(v2326, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v2314 = rt_range(rt_sub(v2314, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1098_EmitS(y_str("}}", 2));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2401_Statements(void * a_p2402) {
struct yf2403 F;
memset((void *)&F, 0, sizeof F);
F.p2402 = a_p2402;
F.v5282 = F.p2402;
while ((!(F.v5282 == ((void *)0)))) {
yr2425_Statement(F.v5282);
F.v5282 = ((*(yR95 *)rt_nil_check(F.v5282))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2407_Cond(void * a_p2408) {
struct yf2409 F;
memset((void *)&F, 0, sizeof F);
F.p2408 = a_p2408;
yr2091_Expr(F.p2408, v1685, &F.v5286, &F.v5288);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2408))).f_line, v1685, F.v5288);
{ rt_int rv5289 = F.v5286;
return rv5289; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2413_Label(void * a_p2414, void * a_p2415) {
struct yf2416 F;
memset((void *)&F, 0, sizeof F);
F.p2414 = a_p2414;
F.p2415 = a_p2415;
if (((((((*(yR95 *)rt_nil_check(F.p2414))).f_kind == v747)) && ((((*(yR95 *)rt_nil_check(F.p2414))).f_d == ((void *)0)))) && ((((*(yR100 *)rt_nil_check(F.p2415))).f_kind == v786)))) {
F.v5298 = yr1637_FindLit(((*(yR95 *)rt_nil_check(F.p2414))).f_name, F.p2415);
if ((!(F.v5298 == ((void *)0)))) {
{ rt_int rv5303 = ((*(yR115 *)rt_nil_check(F.v5298))).f_mval;
return rv5303; }
}
}
yr2091_Expr(F.p2414, F.p2415, &F.v5302, &F.v5300);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2414))).f_line, F.p2415, F.v5300);
yr2032_Manifest(F.p2414, &F.v5294, &F.v5296);
if ((!F.v5294)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2414))).f_line, y_str("a CASE label is a manifest constant (IX.B.1)", 44));
}
{ rt_int rv5305 = F.v5296;
return rv5305; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2420_CopyOut(void) {
struct yf2421 F;
memset((void *)&F, 0, sizeof F);
if ((v2355 == ((void *)0))) {
return;
}
F.v5308 = ((*(yR115 *)rt_nil_check(v2355))).f_params;
while ((!(F.v5308 == ((void *)0)))) {
if ((((*(yR110 *)rt_nil_check(F.v5308))).f_cls == v870)) {
yr986_SB();
yr997_SA(y_str("(*F.", 4));
yr1004_ST(((*(yR110 *)rt_nil_check(F.v5308))).f_cname);
yr997_SA(y_str("_o)", 3));
F.v5310 = yr1016_SE();
yr2048_Store(F.v5310, ((*(yR110 *)rt_nil_check(F.v5308))).f_rep, yr1651_Path(v1576, ((*(yR110 *)rt_nil_check(F.v5308))).f_cname), ((*(yR110 *)rt_nil_check(F.v5308))).f_rep, INT64_C(0));
}
F.v5308 = ((*(yR110 *)rt_nil_check(F.v5308))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2425_Statement(void * a_p2426) {
struct yf2427 F;
memset((void *)&F, 0, sizeof F);
F.p2426 = a_p2426;
F.v5317 = ((*(yR95 *)rt_nil_check(F.p2426))).f_kind;
v960 = ((*(yR95 *)rt_nil_check(F.p2426))).f_line;
if ((!(((*(yR95 *)rt_nil_check(F.p2426))).f_text == INT64_C(0)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2426))).f_line, y_str("this translator has no labelled statements yet", 46));
}
if ((F.v5317 == v684)) {
yr2064_LValue(((*(yR95 *)rt_nil_check(F.p2426))).f_a, &F.v5319, &F.v5331);
if ((((*(yR100 *)rt_nil_check(F.v5331))).f_kind == v807)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2426))).f_line, y_str("assignment is not defined for signals (VI.A.1.d)", 48));
}
if ((((((*(yR100 *)rt_nil_check(F.v5331))).f_kind == v801)) || ((((*(yR100 *)rt_nil_check(F.v5331))).f_kind == v810)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2426))).f_line, y_str("assignment is not defined for files and semaphores (VII.B)", 58));
}
if ((((*(yR100 *)rt_nil_check(F.v5331))).f_opaque && (((rt_mod(((*(yR100 *)rt_nil_check(F.v5331))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2426))).f_line, ((*(yR100 *)rt_nil_check(F.v5331))).f_tname, y_str(" is opaque here: := is not exported (X.B.3)", 43));
}
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p2426))).f_b, F.v5331, &F.v5321, &F.v5333);
yr2048_Store(F.v5319, F.v5331, F.v5321, F.v5333, ((*(yR95 *)rt_nil_check(F.p2426))).f_line);
} else if ((F.v5317 == v687)) {
F.v5347 = yr1612_Find(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2426))).f_a))).f_name);
if ((!(F.v5347 == ((void *)0)))) {
F.v5347 = yr1677_Real(F.v5347);
}
if ((((!(F.v5347 == ((void *)0)))) && ((((*(yR115 *)rt_nil_check(F.v5347))).f_kind == v855)))) {
yr2595_Activate(((*(yR95 *)rt_nil_check(F.p2426))).f_a, F.v5347);
} else {
yr2263_CallExpr(((*(yR95 *)rt_nil_check(F.p2426))).f_a, ((void *)0), 1, &F.v5319, &F.v5331);
yr2360_Emit2(y_str("", 0), F.v5319);
yr986_SB();
yr1004_ST(F.v5319);
yr997_SA(y_str(";", 1));
F.v5323 = yr1016_SE();
((*(yR125 *)rt_nil_check((v956).f_tail))).f_t = F.v5323;
}
} else if ((F.v5317 == v708)) {
F.v5339 = 1;
F.v5335 = ((*(yR95 *)rt_nil_check(F.p2426))).f_a;
while ((!(F.v5335 == ((void *)0)))) {
F.v5319 = yr2407_Cond(((*(yR95 *)rt_nil_check(F.v5335))).f_a);
if (F.v5339) {
yr2368_Emit3(y_str("if (", 4), F.v5319, y_str(") {", 3));
} else {
yr2368_Emit3(y_str("} else if (", 11), F.v5319, y_str(") {", 3));
}
F.v5339 = 0;
yr2401_Statements(((*(yR95 *)rt_nil_check(F.v5335))).f_b);
F.v5335 = ((*(yR95 *)rt_nil_check(F.v5335))).f_next;
}
if ((((*(yR95 *)rt_nil_check(F.p2426))).f_flag == INT64_C(1))) {
yr1098_EmitS(y_str("} else {", 8));
yr2401_Statements(((*(yR95 *)rt_nil_check(F.p2426))).f_b);
}
yr1098_EmitS(y_str("}", 1));
} else if ((F.v5317 == v714)) {
F.v5319 = yr2407_Cond(((*(yR95 *)rt_nil_check(F.p2426))).f_a);
yr2368_Emit3(y_str("while (", 7), F.v5319, y_str(") {", 3));
yr2401_Statements(((*(yR95 *)rt_nil_check(F.p2426))).f_b);
yr1098_EmitS(y_str("}", 1));
} else if ((F.v5317 == v720)) {
F.v5325 = yr1146_Fresh(y_str("yl_", 3));
v2349 = rt_range(rt_add(v2349, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2336).p)[y_ix1(v2336, v2349)] = ((*(yR95 *)rt_nil_check(F.p2426))).f_name;
((rt_int *)(v2338).p)[y_ix1(v2338, v2349)] = F.v5325;
((rt_int *)(v2347).p)[y_ix1(v2347, v2349)] = v2299;
yr1098_EmitS(y_str("for (;;) {", 10));
yr2401_Statements(((*(yR95 *)rt_nil_check(F.p2426))).f_b);
yr1098_EmitS(y_str("}", 1));
yr2368_Emit3(y_str("", 0), F.v5325, y_str(": ;", 3));
v2349 = rt_range(rt_sub(v2349, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v5317 == v696)) {
F.v5341 = 0;
F.v5343 = v2349;
while ((((F.v5343 > v2352)) && (!F.v5341))) {
if ((((rt_int *)(v2336).p)[y_ix1(v2336, F.v5343)] == ((*(yR95 *)rt_nil_check(F.p2426))).f_name)) {
F.v5341 = 1;
yr2378_PopTo(((rt_int *)(v2347).p)[y_ix1(v2347, F.v5343)]);
yr2368_Emit3(y_str("goto ", 5), ((rt_int *)(v2338).p)[y_ix1(v2338, F.v5343)], y_str(";", 1));
}
F.v5343 = rt_range(rt_sub(F.v5343, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((!F.v5341)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2426))).f_line, ((*(yR95 *)rt_nil_check(F.p2426))).f_name, y_str(": EXIT names no LOOP around it here (IX.A.5)", 44));
}
} else if ((F.v5317 == v717)) {
yr2431_ForStatement(F.p2426);
} else if ((F.v5317 == v711)) {
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p2426))).f_a, ((void *)0), &F.v5319, &F.v5331);
if ((!yr1720_IsDiscrete(F.v5331))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2426))).f_line, y_str("SELECT on a value that is not integer or scalar", 47));
}
yr2368_Emit3(y_str("switch (", 8), F.v5319, y_str(") {", 3));
F.v5335 = ((*(yR95 *)rt_nil_check(F.p2426))).f_b;
while ((!(F.v5335 == ((void *)0)))) {
F.v5337 = ((*(yR95 *)rt_nil_check(F.v5335))).f_a;
while ((!(F.v5337 == ((void *)0)))) {
F.v5345 = yr2413_Label(F.v5337, F.v5331);
yr986_SB();
yr997_SA(y_str("case ", 5));
yr1010_SI(F.v5345);
yr997_SA(y_str(":", 1));
F.v5323 = yr1016_SE();
yr1092_Emit(F.v5323);
F.v5337 = ((*(yR95 *)rt_nil_check(F.v5337))).f_next;
}
yr1098_EmitS(y_str("{", 1));
yr2401_Statements(((*(yR95 *)rt_nil_check(F.v5335))).f_b);
yr1098_EmitS(y_str("} break;", 8));
F.v5335 = ((*(yR95 *)rt_nil_check(F.v5335))).f_next;
}
yr1098_EmitS(y_str("default: {", 10));
if ((((*(yR95 *)rt_nil_check(F.p2426))).f_flag == INT64_C(1))) {
yr2401_Statements(((*(yR95 *)rt_nil_check(F.p2426))).f_c);
}
yr1098_EmitS(y_str("} break;", 8));
yr1098_EmitS(y_str("}", 1));
} else if ((F.v5317 == v699)) {
yr2445_ReturnStatement(F.p2426);
} else if ((F.v5317 == v705)) {
if ((((*(yR95 *)rt_nil_check(F.p2426))).f_name == INT64_C(0))) {
if ((v2326 == INT64_C(0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2426))).f_line, y_str("PROPAGATE_EXCEPTION without a name is used in a handler (IX.A.8)", 64));
}
yr2368_Emit3(y_str("rt_raise(", 9), ((rt_int *)(v2324).p)[y_ix1(v2324, v2326)], y_str(");", 2));
} else {
yr2384_LeaveBlock();
yr1092_Emit(yr2389_RaiseCode(((*(yR95 *)rt_nil_check(F.p2426))).f_name));
}
} else if ((F.v5317 == v690)) {
F.v5319 = yr2407_Cond(((*(yR95 *)rt_nil_check(F.p2426))).f_a);
yr2368_Emit3(y_str("if (!(", 6), F.v5319, y_str(")) {", 4));
yr2384_LeaveBlock();
yr1098_EmitS(y_str("rt_raise(RT_X_ASSERT); }", 24));
} else if ((F.v5317 == v723)) {
yr2451_BeginStatement(F.p2426);
} else if ((F.v5317 == v702)) {
yr2619_TerminateStatement(F.p2426);
} else if ((F.v5317 == v693)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2426))).f_line, y_str("this translator has no GOTO yet", 31));
} else {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2426))).f_line, y_str("not a statement", 15));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2431_ForStatement(void * a_p2432) {
struct yf2433 F;
memset((void *)&F, 0, sizeof F);
F.p2432 = a_p2432;
F.v5411 = yr1825_MakeRep(((*(yR95 *)rt_nil_check(F.p2432))).f_a, INT64_C(0), 0);
if ((!yr1720_IsDiscrete(F.v5411))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2432))).f_line, y_str("FOR goes over an integer or scalar representation", 49));
}
yr1791_CheckRepresented(F.v5411, ((*(yR95 *)rt_nil_check(F.p2432))).f_line);
yr1595_OpenScope(0);
F.v5419 = yr1588_NewSym(v834, ((*(yR95 *)rt_nil_check(F.p2432))).f_name);
((*(yR115 *)rt_nil_check(F.v5419))).f_rep = F.v5411;
((*(yR115 *)rt_nil_check(F.v5419))).f_level = v1576;
((*(yR115 *)rt_nil_check(F.v5419))).f_cname = yr1146_Fresh(y_str("c_", 2));
yr1664_DeclStorage(yr1021_T(y_str("rt_int", 6)), ((*(yR115 *)rt_nil_check(F.v5419))).f_cname);
yr1644_Define(F.v5419, ((*(yR95 *)rt_nil_check(F.p2432))).f_line);
F.v5413 = yr1146_Fresh(y_str("i", 1));
F.v5415 = yr1146_Fresh(y_str("hi", 2));
yr986_SB();
yr997_SA(y_str("{ rt_int ", 9));
yr1004_ST(F.v5415);
yr997_SA(y_str(" = ", 3));
yr1004_ST(((*(yR100 *)rt_nil_check(F.v5411))).f_hi);
yr997_SA(y_str(";", 1));
F.v5417 = yr1016_SE();
yr1092_Emit(F.v5417);
yr986_SB();
yr997_SA(y_str("for (rt_int ", 12));
yr1004_ST(F.v5413);
yr997_SA(y_str(" = ", 3));
yr1004_ST(((*(yR100 *)rt_nil_check(F.v5411))).f_lo);
yr997_SA(y_str("; ", 2));
yr1004_ST(F.v5413);
yr997_SA(y_str(" <= ", 4));
yr1004_ST(F.v5415);
yr997_SA(y_str("; ", 2));
yr1004_ST(F.v5413);
yr997_SA(y_str("++) { ", 6));
yr1004_ST(yr1671_SymPath(F.v5419));
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.v5413);
yr997_SA(y_str(";", 1));
F.v5417 = yr1016_SE();
yr1092_Emit(F.v5417);
yr2401_Statements(((*(yR95 *)rt_nil_check(F.p2432))).f_b);
yr2368_Emit3(y_str("if (", 4), F.v5413, y_str(" == ", 4));
((*(yR125 *)rt_nil_check((v956).f_tail))).f_t = yr2437_Join(((*(yR125 *)rt_nil_check((v956).f_tail))).f_t, F.v5415, yr1021_T(y_str(") break;", 8)));
yr1098_EmitS(y_str("}}", 2));
yr1601_CloseScope();
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2437_Join(rt_int a_p2438, rt_int a_p2439, rt_int a_p2440) {
struct yf2441 F;
memset((void *)&F, 0, sizeof F);
F.p2438 = a_p2438;
F.p2439 = a_p2439;
F.p2440 = a_p2440;
yr986_SB();
yr1004_ST(F.p2438);
yr1004_ST(F.p2439);
yr1004_ST(F.p2440);
{ rt_int rv5447 = yr1016_SE();
return rv5447; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2445_ReturnStatement(void * a_p2446) {
struct yf2447 F;
memset((void *)&F, 0, sizeof F);
F.p2446 = a_p2446;
if ((v2355 == ((void *)0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2446))).f_line, y_str("RETURN outside a routine (IX.A.6)", 33));
}
if ((((*(yR115 *)rt_nil_check(v2355))).f_kind == v855)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2446))).f_line, y_str("a process ends with TERMINATE_PROCESS (IX.A.7)", 46));
}
F.v5459 = ((*(yR115 *)rt_nil_check(v2355))).f_ret;
if ((((*(yR95 *)rt_nil_check(F.p2446))).f_a == ((void *)0))) {
if ((!(((*(yR100 *)rt_nil_check(F.v5459))).f_kind == v822))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2446))).f_line, y_str("RETURN needs a value here (IX.A.6)", 34));
}
yr2420_CopyOut();
yr2614_LeaveMonitor();
yr2378_PopTo(v2302);
yr1098_EmitS(y_str("return;", 7));
return;
}
if ((((*(yR100 *)rt_nil_check(F.v5459))).f_kind == v822)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2446))).f_line, y_str("this routine returns no value (IX.A.6)", 38));
}
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p2446))).f_a, F.v5459, &F.v5451, &F.v5457);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2446))).f_line, F.v5459, F.v5457);
F.v5455 = yr1146_Fresh(y_str("rv", 2));
yr986_SB();
yr997_SA(y_str("{ ", 2));
yr1004_ST(yr1750_CType(F.v5459));
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v5455);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2040_Convert(F.v5451, F.v5459, F.v5457));
yr997_SA(y_str(";", 1));
F.v5453 = yr1016_SE();
yr1092_Emit(F.v5453);
yr2420_CopyOut();
yr2614_LeaveMonitor();
yr2378_PopTo(v2302);
yr2368_Emit3(y_str("return ", 7), F.v5455, y_str("; }", 3));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2451_BeginStatement(void * a_p2452) {
struct yf2453 F;
memset((void *)&F, 0, sizeof F);
F.p2452 = a_p2452;
yr1098_EmitS(y_str("{", 1));
yr1595_OpenScope(0);
yr2516_Declarations(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2452))).f_a))).f_a);
yr2395_BlockStatements(((*(yR95 *)rt_nil_check(F.p2452))).f_a);
yr2590_AwaitProcesses();
yr1601_CloseScope();
yr1098_EmitS(y_str("}", 1));
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2457_RoutineCName(rt_int a_p2458) {
struct yf2459 F;
memset((void *)&F, 0, sizeof F);
F.p2458 = a_p2458;
F.v5480 = yr1141_NewSerial();
F.v5482 = 1;
{ rt_int hi5489 = ((rt_int *)(v890).p)[y_ix1(v890, F.p2458)];
for (rt_int i5488 = INT64_C(1); i5488 <= hi5489; i5488++) { F.c_5487 = i5488;
if ((!((yr968_IsLetter(yr1063_TChar(F.p2458, rt_range(F.c_5487, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || yr974_IsDigit(yr1063_TChar(F.p2458, rt_range(F.c_5487, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))))) {
F.v5482 = 0;
}
if (i5488 == hi5489) break;
}}
yr986_SB();
yr997_SA(y_str("yr", 2));
yr1010_SI(F.v5480);
if (F.v5482) {
yr997_SA(y_str("_", 1));
yr1004_ST(F.p2458);
}
{ rt_int rv5493 = yr1016_SE();
return rv5493; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2463_FormalRep(void * a_p2464) {
struct yf2465 F;
memset((void *)&F, 0, sizeof F);
F.p2464 = a_p2464;
if ((((*(yR95 *)rt_nil_check(F.p2464))).f_kind == v666)) {
yr2032_Manifest(((*(yR95 *)rt_nil_check(F.p2464))).f_a, &F.v5499, &F.v5501);
if ((((!F.v5499) || ((F.v5501 < INT64_C(1)))) || ((F.v5501 > INT64_C(4))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2464))).f_line, y_str("DIMENSIONS is a manifest constant from 1 to 4", 45));
}
F.v5497 = yr1707_NewRep(v813, yr1021_T(y_str("length-unresolved array", 23)));
((*(yR100 *)rt_nil_check(F.v5497))).f_nidx = F.v5501;
((*(yR100 *)rt_nil_check(F.v5497))).f_elem = yr1825_MakeRep(((*(yR95 *)rt_nil_check(F.p2464))).f_b, INT64_C(0), 0);
yr1791_CheckRepresented(((*(yR100 *)rt_nil_check(F.v5497))).f_elem, ((*(yR95 *)rt_nil_check(F.p2464))).f_line);
((*(yR100 *)rt_nil_check(F.v5497))).f_deep = 1;
{ void * rv5509 = F.v5497;
return rv5509; }
}
if ((((*(yR95 *)rt_nil_check(F.p2464))).f_kind == v669)) {
{ void * rv5511 = yr1707_NewRep(v825, yr1021_T(y_str("SPACE", 5)));
return rv5511; }
}
F.v5497 = yr1825_MakeRep(F.p2464, INT64_C(0), 0);
yr1791_CheckRepresented(F.v5497, ((*(yR95 *)rt_nil_check(F.p2464))).f_line);
{ void * rv5514 = F.v5497;
return rv5514; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2469_ParamCType(void * a_p2470) {
struct yf2471 F;
memset((void *)&F, 0, sizeof F);
F.p2470 = a_p2470;
F.v5518 = yr1750_CType(((*(yR110 *)rt_nil_check(F.p2470))).f_rep);
if ((((*(yR110 *)rt_nil_check(F.p2470))).f_cls == v867)) {
{ rt_int rv5519 = F.v5518;
return rv5519; }
}
yr986_SB();
yr1004_ST(F.v5518);
yr997_SA(y_str(" *", 2));
{ rt_int rv5521 = yr1016_SE();
return rv5521; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2475_RoutineHeader(void * a_p2476, rt_int a_p2477) {
struct yf2478 F;
memset((void *)&F, 0, sizeof F);
F.p2476 = a_p2476;
F.p2477 = a_p2477;
F.v5542 = 1;
F.v5526 = yr1588_NewSym(F.p2477, ((*(yR95 *)rt_nil_check(F.p2476))).f_name);
((*(yR115 *)rt_nil_check(F.v5526))).f_decl = F.p2476;
((*(yR115 *)rt_nil_check(F.v5526))).f_func = (((*(yR95 *)rt_nil_check(F.p2476))).f_flag == INT64_C(1));
((*(yR115 *)rt_nil_check(F.v5526))).f_level = rt_range(rt_add(v1576, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR115 *)rt_nil_check(F.v5526))).f_cname = yr2457_RoutineCName(((*(yR95 *)rt_nil_check(F.p2476))).f_name);
if ((!(((*(yR95 *)rt_nil_check(F.p2476))).f_b == ((void *)0)))) {
((*(yR115 *)rt_nil_check(F.v5526))).f_ret = yr1825_MakeRep(((*(yR95 *)rt_nil_check(F.p2476))).f_b, INT64_C(0), 0);
yr1791_CheckRepresented(((*(yR115 *)rt_nil_check(F.v5526))).f_ret, ((*(yR95 *)rt_nil_check(F.p2476))).f_line);
} else {
((*(yR115 *)rt_nil_check(F.v5526))).f_ret = v1689;
if (((*(yR115 *)rt_nil_check(F.v5526))).f_func) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2476))).f_line, ((*(yR95 *)rt_nil_check(F.p2476))).f_name, y_str(": a FUNCTION has a RETURNS clause (X.A)", 39));
}
}
F.v5536 = ((void *)0);
F.v5530 = ((*(yR95 *)rt_nil_check(F.p2476))).f_a;
while ((!(F.v5530 == ((void *)0)))) {
F.v5538 = yr2463_FormalRep(((*(yR95 *)rt_nil_check(F.v5530))).f_b);
if ((((*(yR115 *)rt_nil_check(F.v5526))).f_func && ((!(((*(yR95 *)rt_nil_check(F.v5530))).f_ival == v867))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.v5530))).f_line, ((*(yR95 *)rt_nil_check(F.p2476))).f_name, y_str(": the parameters of a FUNCTION are CONST (X.A.2)", 48));
}
if ((((F.p2477 == v855)) && ((((*(yR95 *)rt_nil_check(F.v5530))).f_ival == v870)))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.v5530))).f_line, ((*(yR95 *)rt_nil_check(F.p2476))).f_name, y_str(": a process has no OUT parameters", 33));
}
F.v5532 = ((*(yR95 *)rt_nil_check(F.v5530))).f_a;
while ((!(F.v5532 == ((void *)0)))) {
({ F.v5534 = rt_alloc(sizeof(yR110)); });
(*(yR110 *)rt_nil_check(F.v5534)) = ((yR110){ .f_name = ((*(yR95 *)rt_nil_check(F.v5532))).f_name, .f_cls = ((*(yR95 *)rt_nil_check(F.v5530))).f_ival, .f_rep = F.v5538, .f_cname = yr1146_Fresh(y_str("p", 1)), .f_next = ((void *)0) });
if ((F.v5536 == ((void *)0))) {
((*(yR115 *)rt_nil_check(F.v5526))).f_params = F.v5534;
} else {
((*(yR110 *)rt_nil_check(F.v5536))).f_next = F.v5534;
}
F.v5536 = F.v5534;
((*(yR115 *)rt_nil_check(F.v5526))).f_nparams = rt_range(rt_add(((*(yR115 *)rt_nil_check(F.v5526))).f_nparams, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5532 = ((*(yR95 *)rt_nil_check(F.v5532))).f_next;
}
F.v5530 = ((*(yR95 *)rt_nil_check(F.v5530))).f_next;
}
F.v5528 = yr1612_Find(((*(yR95 *)rt_nil_check(F.p2476))).f_name);
if ((!(F.v5528 == ((void *)0)))) {
F.v5528 = yr1677_Real(F.v5528);
}
if (((((!(((*(yR95 *)rt_nil_check(F.p2476))).f_ival == INT64_C(0)))) && ((!(F.v5528 == ((void *)0))))) && ((((*(yR115 *)rt_nil_check(F.v5528))).f_kind == v846)))) {
((*(yR115 *)rt_nil_check(F.v5526))).f_alt = F.v5528;
if ((((((*(yR95 *)rt_nil_check(F.p2476))).f_ival == v309)) && ((!(yr2482_SameSignature(F.v5526, F.v5528) == ((void *)0)))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2476))).f_line, ((*(yR95 *)rt_nil_check(F.p2476))).f_name, y_str(" EXTENDS a definition for the same parameter types: use REPLACES", 64));
}
if ((((((*(yR95 *)rt_nil_check(F.p2476))).f_ival == v405)) && ((yr2482_SameSignature(F.v5526, F.v5528) == ((void *)0))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2476))).f_line, ((*(yR95 *)rt_nil_check(F.p2476))).f_name, y_str(" REPLACES no definition for these parameter types", 49));
}
}
((*(yR95 *)rt_nil_check(F.p2476))).f_sym = F.v5526;
yr1644_Define(F.v5526, ((*(yR95 *)rt_nil_check(F.p2476))).f_line);
((rt_int *)(v1586).p)[y_ix1(v1586, ((*(yR115 *)rt_nil_check(F.v5526))).f_level)] = yr1146_Fresh(y_str("yf", 2));
((*(yR115 *)rt_nil_check(F.v5526))).f_members = yr1588_NewSym(v861, ((rt_int *)(v1586).p)[y_ix1(v1586, ((*(yR115 *)rt_nil_check(F.v5526))).f_level)]);
yr986_SB();
yr997_SA(y_str("struct ", 7));
yr1004_ST(((rt_int *)(v1586).p)[y_ix1(v1586, ((*(yR115 *)rt_nil_check(F.v5526))).f_level)]);
yr997_SA(y_str(";", 1));
F.v5540 = yr1016_SE();
yr1070_Put(&v942, F.v5540);
yr986_SB();
yr997_SA(y_str("static ", 7));
if ((F.p2477 == v855)) {
yr997_SA(y_str("void", 4));
} else {
yr1004_ST(yr1750_CType(((*(yR115 *)rt_nil_check(F.v5526))).f_ret));
}
yr997_SA(y_str(" ", 1));
yr1004_ST(((*(yR115 *)rt_nil_check(F.v5526))).f_cname);
yr997_SA(y_str("(", 1));
F.v5540 = yr1016_SE();
if ((F.p2477 == v855)) {
F.v5540 = yr2437_Join(F.v5540, yr1021_T(y_str("void *arg", 9)), INT64_C(0));
F.v5542 = 0;
} else if ((v1576 > INT64_C(0))) {
yr986_SB();
yr1004_ST(F.v5540);
yr997_SA(y_str("struct ", 7));
yr1004_ST(((rt_int *)(v1586).p)[y_ix1(v1586, v1576)]);
yr997_SA(y_str(" *up", 4));
F.v5540 = yr1016_SE();
F.v5542 = 0;
}
F.v5534 = ((*(yR115 *)rt_nil_check(F.v5526))).f_params;
while ((((!(F.v5534 == ((void *)0)))) && ((!(F.p2477 == v855))))) {
yr986_SB();
yr1004_ST(F.v5540);
if ((!F.v5542)) {
yr997_SA(y_str(", ", 2));
}
F.v5542 = 0;
yr1004_ST(yr2469_ParamCType(F.v5534));
yr997_SA(y_str(" a_", 3));
yr1004_ST(((*(yR110 *)rt_nil_check(F.v5534))).f_cname);
F.v5540 = yr1016_SE();
F.v5534 = ((*(yR110 *)rt_nil_check(F.v5534))).f_next;
}
if (F.v5542) {
F.v5540 = yr2437_Join(F.v5540, yr1021_T(y_str("void", 4)), INT64_C(0));
}
F.v5540 = yr2437_Join(F.v5540, yr1021_T(y_str(")", 1)), INT64_C(0));
((*(yR115 *)rt_nil_check(F.v5526))).f_mnext = yr1588_NewSym(v861, F.v5540);
yr1070_Put(&v950, yr2437_Join(F.v5540, yr1021_T(y_str(";", 1)), INT64_C(0)));
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2482_SameSignature(void * a_p2483, void * a_p2484) {
struct yf2485 F;
memset((void *)&F, 0, sizeof F);
F.p2483 = a_p2483;
F.p2484 = a_p2484;
F.v5585 = F.p2484;
while ((!(F.v5585 == ((void *)0)))) {
if ((((*(yR115 *)rt_nil_check(F.v5585))).f_nparams == ((*(yR115 *)rt_nil_check(F.p2483))).f_nparams)) {
F.v5591 = 1;
F.v5587 = ((*(yR115 *)rt_nil_check(F.p2483))).f_params;
F.v5589 = ((*(yR115 *)rt_nil_check(F.v5585))).f_params;
while ((!(F.v5587 == ((void *)0)))) {
if ((!yr1768_SameType(((*(yR110 *)rt_nil_check(F.v5587))).f_rep, ((*(yR110 *)rt_nil_check(F.v5589))).f_rep))) {
F.v5591 = 0;
}
F.v5587 = ((*(yR110 *)rt_nil_check(F.v5587))).f_next;
F.v5589 = ((*(yR110 *)rt_nil_check(F.v5589))).f_next;
}
if (F.v5591) {
{ void * rv5594 = F.v5585;
return rv5594; }
}
}
F.v5585 = ((*(yR115 *)rt_nil_check(F.v5585))).f_alt;
}
{ void * rv5595 = ((void *)0);
return rv5595; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2489_RoutineBody(void * a_p2490) {
struct yf2491 F;
memset((void *)&F, 0, sizeof F);
F.p2490 = a_p2490;
F.v5599 = ((*(yR95 *)rt_nil_check(F.p2490))).f_sym;
F.v5601 = v956;
F.v5603 = v958;
F.v5605 = v1576;
F.v5607 = v2299;
F.v5609 = v2302;
F.v5611 = v2314;
F.v5613 = v2326;
F.v5615 = v2349;
F.v5617 = v2352;
F.v5619 = v2355;
F.v5621 = v2357;
v956 = ((yR130){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v958 = ((yR130){ .f_head = ((void *)0), .f_tail = ((void *)0) });
F.v5631 = ((yR130){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v1576 = ((*(yR115 *)rt_nil_check(F.v5599))).f_level;
F.v5627 = ((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5599))).f_members))).f_name;
((rt_int *)(v1586).p)[y_ix1(v1586, v1576)] = F.v5627;
v2302 = v2299;
v2352 = v2349;
v2326 = INT64_C(0);
v2355 = F.v5599;
v2357 = 0;
yr1595_OpenScope(0);
F.v5623 = ((*(yR115 *)rt_nil_check(F.v5599))).f_params;
while ((!(F.v5623 == ((void *)0)))) {
if ((((*(yR110 *)rt_nil_check(F.v5623))).f_cls == v867)) {
F.v5625 = yr1588_NewSym(v834, ((*(yR110 *)rt_nil_check(F.v5623))).f_name);
} else {
F.v5625 = yr1588_NewSym(v831, ((*(yR110 *)rt_nil_check(F.v5623))).f_name);
}
((*(yR115 *)rt_nil_check(F.v5625))).f_rep = ((*(yR110 *)rt_nil_check(F.v5623))).f_rep;
((*(yR115 *)rt_nil_check(F.v5625))).f_level = v1576;
((*(yR115 *)rt_nil_check(F.v5625))).f_cname = ((*(yR110 *)rt_nil_check(F.v5623))).f_cname;
if ((((*(yR115 *)rt_nil_check(F.v5599))).f_kind == v855)) {
((*(yR115 *)rt_nil_check(F.v5625))).f_byref = (((*(yR110 *)rt_nil_check(F.v5623))).f_cls == v873);
yr1664_DeclStorage(yr2469_ParamCType(F.v5623), ((*(yR110 *)rt_nil_check(F.v5623))).f_cname);
} else if ((((*(yR110 *)rt_nil_check(F.v5623))).f_cls == v873)) {
((*(yR115 *)rt_nil_check(F.v5625))).f_byref = 1;
yr1664_DeclStorage(yr2469_ParamCType(F.v5623), ((*(yR110 *)rt_nil_check(F.v5623))).f_cname);
yr1092_Emit(yr2437_Join(yr1021_T(y_str("F.", 2)), ((*(yR110 *)rt_nil_check(F.v5623))).f_cname, yr2437_Join(yr1021_T(y_str(" = a_", 5)), ((*(yR110 *)rt_nil_check(F.v5623))).f_cname, yr1021_T(y_str(";", 1)))));
} else if ((((*(yR110 *)rt_nil_check(F.v5623))).f_cls == v870)) {
yr1664_DeclStorage(yr1750_CType(((*(yR110 *)rt_nil_check(F.v5623))).f_rep), ((*(yR110 *)rt_nil_check(F.v5623))).f_cname);
yr1664_DeclStorage(yr2469_ParamCType(F.v5623), yr2437_Join(((*(yR110 *)rt_nil_check(F.v5623))).f_cname, yr1021_T(y_str("_o", 2)), INT64_C(0)));
yr1092_Emit(yr2437_Join(yr1021_T(y_str("F.", 2)), ((*(yR110 *)rt_nil_check(F.v5623))).f_cname, yr2437_Join(yr1021_T(y_str("_o = a_", 7)), ((*(yR110 *)rt_nil_check(F.v5623))).f_cname, yr1021_T(y_str(";", 1)))));
if ((yr1744_Deep(((*(yR110 *)rt_nil_check(F.v5623))).f_rep) && ((!(((*(yR100 *)rt_nil_check(((*(yR110 *)rt_nil_check(F.v5623))).f_rep))).f_kind == v813))))) {
yr1092_Emit(yr2437_Join(yr1021_T(y_str("y_init(", 7)), yr1756_DescOf(((*(yR110 *)rt_nil_check(F.v5623))).f_rep), yr2437_Join(yr1021_T(y_str(", &F.", 5)), ((*(yR110 *)rt_nil_check(F.v5623))).f_cname, yr1021_T(y_str(");", 2)))));
}
if ((((*(yR100 *)rt_nil_check(((*(yR110 *)rt_nil_check(F.v5623))).f_rep))).f_kind == v813)) {
yr1092_Emit(yr2437_Join(yr1021_T(y_str("F.", 2)), ((*(yR110 *)rt_nil_check(F.v5623))).f_cname, yr2437_Join(yr1021_T(y_str(" = *a_", 6)), ((*(yR110 *)rt_nil_check(F.v5623))).f_cname, yr1021_T(y_str(";", 1)))));
}
} else {
yr1664_DeclStorage(yr1750_CType(((*(yR110 *)rt_nil_check(F.v5623))).f_rep), ((*(yR110 *)rt_nil_check(F.v5623))).f_cname);
yr1092_Emit(yr2437_Join(yr1021_T(y_str("F.", 2)), ((*(yR110 *)rt_nil_check(F.v5623))).f_cname, yr2437_Join(yr1021_T(y_str(" = a_", 5)), ((*(yR110 *)rt_nil_check(F.v5623))).f_cname, yr1021_T(y_str(";", 1)))));
}
yr1644_Define(F.v5625, ((*(yR95 *)rt_nil_check(F.p2490))).f_line);
F.v5623 = ((*(yR110 *)rt_nil_check(F.v5623))).f_next;
}
yr2608_EnterMonitor(F.v5599);
yr2516_Declarations(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2490))).f_c))).f_a);
yr2395_BlockStatements(((*(yR95 *)rt_nil_check(F.p2490))).f_c);
if ((((*(yR115 *)rt_nil_check(F.v5599))).f_kind == v855)) {
yr1098_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
} else {
yr1098_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
}
yr2590_AwaitProcesses();
yr1601_CloseScope();
yr986_SB();
yr997_SA(y_str("struct ", 7));
yr1004_ST(F.v5627);
yr997_SA(y_str(" {", 2));
if ((v1576 > INT64_C(1))) {
yr997_SA(y_str(" struct ", 8));
yr1004_ST(((rt_int *)(v1586).p)[y_ix1(v1586, rt_sub(v1576, INT64_C(1)))]);
yr997_SA(y_str(" *up;", 5));
} else {
yr997_SA(y_str(" void *up;", 10));
}
F.v5629 = yr1016_SE();
yr1070_Put(&v946, F.v5629);
yr1085_Append(&v946, &v958);
yr1077_PutS(&v946, y_str("};", 2));
yr1070_Put(&F.v5631, yr2437_Join(((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5599))).f_mnext))).f_name, yr1021_T(y_str(" {", 2)), INT64_C(0)));
if (v2357) {
yr1077_PutS(&F.v5631, y_str("volatile", 8));
}
yr1070_Put(&F.v5631, yr2437_Join(yr1021_T(y_str("struct ", 7)), F.v5627, yr1021_T(y_str(" F;", 3))));
yr1077_PutS(&F.v5631, y_str("memset((void *)&F, 0, sizeof F);", 32));
if ((((*(yR115 *)rt_nil_check(F.v5599))).f_kind == v855)) {
yr1070_Put(&F.v5631, yr2437_Join(yr1021_T(y_str("F = *(struct ", 13)), F.v5627, yr1021_T(y_str(" *)arg;", 7))));
} else if ((v1576 > INT64_C(1))) {
yr1077_PutS(&F.v5631, y_str("F.up = up;", 10));
}
yr1085_Append(&F.v5631, &v956);
yr1077_PutS(&F.v5631, y_str("}", 1));
yr1085_Append(&v952, &F.v5631);
v956 = F.v5601;
v958 = F.v5603;
v1576 = F.v5605;
((rt_int *)(v1586).p)[y_ix1(v1586, v1576)] = yr1146_Fresh(y_str("unused", 6));
if ((!(F.v5619 == ((void *)0)))) {
((rt_int *)(v1586).p)[y_ix1(v1586, v1576)] = ((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5619))).f_members))).f_name;
}
v2299 = F.v5607;
v2302 = F.v5609;
v2314 = F.v5611;
v2326 = F.v5613;
v2349 = F.v5615;
v2352 = F.v5617;
v2355 = F.v5619;
v2357 = F.v5621;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2495_DeclareStorage(void * a_p2496, void * a_p2497, rt_int a_p2498) {
struct yf2499 F;
memset((void *)&F, 0, sizeof F);
F.p2496 = a_p2496;
F.p2497 = a_p2497;
F.p2498 = a_p2498;
((*(yR115 *)rt_nil_check(F.p2496))).f_rep = F.p2497;
((*(yR115 *)rt_nil_check(F.p2496))).f_level = v1576;
((*(yR115 *)rt_nil_check(F.p2496))).f_cname = yr1146_Fresh(y_str("v", 1));
yr1664_DeclStorage(yr1750_CType(F.p2497), ((*(yR115 *)rt_nil_check(F.p2496))).f_cname);
if (yr1744_Deep(F.p2497)) {
yr1092_Emit(yr2437_Join(yr1021_T(y_str("y_init(", 7)), yr1756_DescOf(F.p2497), yr2437_Join(yr1021_T(y_str(", &", 3)), yr1671_SymPath(F.p2496), yr1021_T(y_str(");", 2)))));
}
if ((((*(yR100 *)rt_nil_check(F.p2497))).f_kind == v804)) {
yr1092_Emit(yr2437_Join(yr1671_SymPath(F.p2496), yr1021_T(y_str(" = y_set_new(", 13)), yr2437_Join(((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p2497))).f_elem))).f_lo, yr1021_T(y_str(", ", 2)), yr2437_Join(((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p2497))).f_elem))).f_hi, yr1021_T(y_str(");", 2)), INT64_C(0)))));
}
if ((((*(yR100 *)rt_nil_check(F.p2497))).f_kind == v807)) {
yr2625_DeclareSignal(F.p2496, F.p2498);
}
if ((((*(yR100 *)rt_nil_check(F.p2497))).f_kind == v810)) {
yr1092_Emit(yr2437_Join(yr1021_T(y_str("rt_lock_init(&", 14)), yr1671_SymPath(F.p2496), yr1021_T(y_str(");", 2))));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2503_SimpleDecl(void * a_p2504) {
struct yf2505 F;
memset((void *)&F, 0, sizeof F);
F.p2504 = a_p2504;
F.v5693 = ((*(yR95 *)rt_nil_check(F.p2504))).f_kind;
if ((((F.v5693 == v609)) || ((F.v5693 == v612)))) {
F.v5695 = yr1825_MakeRep(((*(yR95 *)rt_nil_check(F.p2504))).f_b, INT64_C(0), 0);
yr1791_CheckRepresented(F.v5695, ((*(yR95 *)rt_nil_check(F.p2504))).f_line);
if ((((F.v5693 == v609)) && (((((((*(yR100 *)rt_nil_check(F.v5695))).f_kind == v807)) || ((((*(yR100 *)rt_nil_check(F.v5695))).f_kind == v801))) || ((((*(yR100 *)rt_nil_check(F.v5695))).f_kind == v810)))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2504))).f_line, y_str("signals, files and semaphores are variables (VII.B)", 51));
}
F.v5699 = ((*(yR95 *)rt_nil_check(F.p2504))).f_a;
while ((!(F.v5699 == ((void *)0)))) {
if ((F.v5693 == v609)) {
F.v5701 = yr1588_NewSym(v834, ((*(yR95 *)rt_nil_check(F.v5699))).f_name);
} else {
F.v5701 = yr1588_NewSym(v831, ((*(yR95 *)rt_nil_check(F.v5699))).f_name);
}
yr2495_DeclareStorage(F.v5701, F.v5695, ((*(yR95 *)rt_nil_check(F.p2504))).f_line);
if ((!(((*(yR95 *)rt_nil_check(F.p2504))).f_c == ((void *)0)))) {
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p2504))).f_c, F.v5695, &F.v5703, &F.v5697);
yr2048_Store(yr1671_SymPath(F.v5701), F.v5695, F.v5703, F.v5697, ((*(yR95 *)rt_nil_check(F.p2504))).f_line);
if ((F.v5693 == v609)) {
yr2032_Manifest(((*(yR95 *)rt_nil_check(F.p2504))).f_c, &F.v5705, &F.v5707);
if ((F.v5705 && yr1720_IsDiscrete(F.v5695))) {
((*(yR115 *)rt_nil_check(F.v5701))).f_hasmv = 1;
((*(yR115 *)rt_nil_check(F.v5701))).f_mval = F.v5707;
}
}
}
if ((!(((*(yR95 *)rt_nil_check(F.v5699))).f_a == ((void *)0)))) {
yr2509_AtLocation(F.v5701, ((*(yR95 *)rt_nil_check(F.v5699))).f_a);
}
yr1644_Define(F.v5701, ((*(yR95 *)rt_nil_check(F.v5699))).f_line);
F.v5699 = ((*(yR95 *)rt_nil_check(F.v5699))).f_next;
}
return;
}
if ((F.v5693 == v621)) {
F.v5695 = yr1825_MakeRep(((*(yR95 *)rt_nil_check(F.p2504))).f_b, ((*(yR95 *)rt_nil_check(F.p2504))).f_name, 0);
yr1791_CheckRepresented(F.v5695, ((*(yR95 *)rt_nil_check(F.p2504))).f_line);
F.v5701 = yr1588_NewSym(v837, ((*(yR95 *)rt_nil_check(F.p2504))).f_name);
((*(yR115 *)rt_nil_check(F.v5701))).f_rep = F.v5695;
yr1644_Define(F.v5701, ((*(yR95 *)rt_nil_check(F.p2504))).f_line);
yr1833_ResolvePending(((*(yR95 *)rt_nil_check(F.p2504))).f_name, F.v5695);
return;
}
if ((F.v5693 == v618)) {
F.v5695 = yr1825_MakeRep(((*(yR95 *)rt_nil_check(F.p2504))).f_b, ((*(yR95 *)rt_nil_check(F.p2504))).f_name, 1);
if ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2504))).f_b))).f_kind == v642)) {
F.v5695 = yr1714_CopyRep(F.v5695);
((*(yR100 *)rt_nil_check(F.v5695))).f_tid = yr1819_NewTid(((*(yR95 *)rt_nil_check(F.p2504))).f_name);
((*(yR100 *)rt_nil_check(F.v5695))).f_tname = ((*(yR95 *)rt_nil_check(F.p2504))).f_name;
if (((((((*(yR100 *)rt_nil_check(F.v5695))).f_kind == v774)) || ((((*(yR100 *)rt_nil_check(F.v5695))).f_kind == v777))) || ((((*(yR100 *)rt_nil_check(F.v5695))).f_kind == v780)))) {
if ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2504))).f_b))).f_a == ((void *)0))) {
((*(yR100 *)rt_nil_check(F.v5695))).f_abstract = 1;
}
}
}
F.v5701 = yr1588_NewSym(v840, ((*(yR95 *)rt_nil_check(F.p2504))).f_name);
((*(yR115 *)rt_nil_check(F.v5701))).f_rep = F.v5695;
yr1644_Define(F.v5701, ((*(yR95 *)rt_nil_check(F.p2504))).f_line);
yr1833_ResolvePending(((*(yR95 *)rt_nil_check(F.p2504))).f_name, F.v5695);
return;
}
if ((F.v5693 == v615)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2504))).f_line, y_str("this translator has no labels yet", 33));
return;
}
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2504))).f_line, y_str("not a simple declaration", 24));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2509_AtLocation(void * a_p2510, void * a_p2511) {
struct yf2512 F;
memset((void *)&F, 0, sizeof F);
F.p2510 = a_p2510;
F.p2511 = a_p2511;
if ((((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.p2510))).f_rep))).f_kind == v807)) {
yr2632_DeviceSignal(F.p2510, F.p2511);
return;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2516_Declarations(void * a_p2517) {
struct yf2518 F;
memset((void *)&F, 0, sizeof F);
F.p2517 = a_p2517;
F.v5723 = F.p2517;
F.v5725 = ((void *)0);
F.v5727 = ((void *)0);
F.v5729 = ((void *)0);
while ((!(F.v5723 == ((void *)0)))) {
v960 = ((*(yR95 *)rt_nil_check(F.v5723))).f_line;
if ((((((*(yR95 *)rt_nil_check(F.v5723))).f_kind == v624)) || ((((*(yR95 *)rt_nil_check(F.v5723))).f_kind == v636)))) {
if ((((*(yR95 *)rt_nil_check(F.v5723))).f_kind == v624)) {
yr2475_RoutineHeader(F.v5723, v846);
} else {
yr2475_RoutineHeader(F.v5723, v855);
}
F.v5729 = yr1245_NewNode(v639, ((*(yR95 *)rt_nil_check(F.v5723))).f_line);
((*(yR95 *)rt_nil_check(F.v5729))).f_a = F.v5723;
yr1252_Link(&F.v5725, &F.v5727, F.v5729);
if ((((*(yR95 *)rt_nil_check(F.v5723))).f_kind == v636)) {
yr2584_DeclareProcess(F.v5723);
}
} else if (((((*(yR95 *)rt_nil_check(F.v5723))).f_kind == v594))) {
yr2566_CompileModule(F.v5723);
} else if ((((*(yR95 *)rt_nil_check(F.v5723))).f_kind == v630)) {
yr2572_DeclareTemplate(F.v5723);
} else if ((((*(yR95 *)rt_nil_check(F.v5723))).f_kind == v633)) {
yr2578_Instantiate(F.v5723);
} else {
yr2503_SimpleDecl(F.v5723);
}
F.v5723 = ((*(yR95 *)rt_nil_check(F.v5723))).f_next;
}
yr1840_CheckPending();
F.v5729 = F.v5725;
while ((!(F.v5729 == ((void *)0)))) {
yr2489_RoutineBody(((*(yR95 *)rt_nil_check(F.v5729))).f_a);
F.v5729 = ((*(yR95 *)rt_nil_check(F.v5729))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2533_Alias(rt_int a_p2534, void * a_p2535) {
struct yf2536 F;
memset((void *)&F, 0, sizeof F);
F.p2534 = a_p2534;
F.p2535 = a_p2535;
F.v5734 = yr1588_NewSym(v864, F.p2534);
((*(yR115 *)rt_nil_check(F.v5734))).f_target = F.p2535;
((*(yR115 *)rt_nil_check(F.v5734))).f_readonly = ((*(yR115 *)rt_nil_check(F.p2535))).f_readonly;
{ void * rv5735 = F.v5734;
return rv5735; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2540_AddLits(void * * a_p2541, void * a_p2542, rt_int a_p2543) {
struct yf2544 F;
memset((void *)&F, 0, sizeof F);
F.p2541 = a_p2541;
F.p2542 = a_p2542;
F.p2543 = a_p2543;
if ((((F.p2543 > INT64_C(8))) || ((*(yR100 *)rt_nil_check(F.p2542))).f_opaque)) {
return;
}
if ((((*(yR100 *)rt_nil_check(F.p2542))).f_kind == v786)) {
F.v5741 = ((*(yR100 *)rt_nil_check(F.p2542))).f_lits;
while ((!(F.v5741 == ((void *)0)))) {
F.v5743 = yr1637_FindLit(((*(yR95 *)rt_nil_check(F.v5741))).f_name, F.p2542);
if ((!(F.v5743 == ((void *)0)))) {
F.v5743 = yr2533_Alias(((*(yR95 *)rt_nil_check(F.v5741))).f_name, F.v5743);
((*(yR115 *)rt_nil_check(F.v5743))).f_mnext = (*F.p2541);
(*F.p2541) = F.v5743;
}
F.v5741 = ((*(yR95 *)rt_nil_check(F.v5741))).f_next;
}
} else if ((((*(yR100 *)rt_nil_check(F.p2542))).f_kind == v795)) {
F.v5745 = ((*(yR100 *)rt_nil_check(F.p2542))).f_fields;
while ((!(F.v5745 == ((void *)0)))) {
yr2540_AddLits(&(*F.p2541), ((*(yR105 *)rt_nil_check(F.v5745))).f_rep, rt_range(rt_add(F.p2543, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v5745 = ((*(yR105 *)rt_nil_check(F.v5745))).f_next;
}
} else if (((((((*(yR100 *)rt_nil_check(F.p2542))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.p2542))).f_kind == v804))) || ((((*(yR100 *)rt_nil_check(F.p2542))).f_kind == v801)))) {
yr2540_AddLits(&(*F.p2541), ((*(yR100 *)rt_nil_check(F.p2542))).f_elem, rt_range(rt_add(F.p2543, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2551_ResolveItem(void * a_p2552, void * * a_p2553, rt_int a_p2554) {
struct yf2555 F;
memset((void *)&F, 0, sizeof F);
F.p2552 = a_p2552;
F.p2553 = a_p2553;
F.p2554 = a_p2554;
F.v5766 = ((*(yR95 *)rt_nil_check(F.p2552))).f_flag;
if (((F.p2554 && ((((*(yR95 *)rt_nil_check(F.p2552))).f_text == INT64_C(0)))) && (((((((*(yR95 *)rt_nil_check(F.p2552))).f_name == v501)) || ((((*(yR95 *)rt_nil_check(F.p2552))).f_name == v555))) || ((((*(yR95 *)rt_nil_check(F.p2552))).f_name == v540)))))) {
if ((yr1618_FindHere(((*(yR95 *)rt_nil_check(F.p2552))).f_name) == ((void *)0))) {
return;
}
}
if ((!(((*(yR95 *)rt_nil_check(F.p2552))).f_text == INT64_C(0)))) {
F.v5758 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(F.p2552))).f_text, ((*(yR95 *)rt_nil_check(F.p2552))).f_line));
if ((!(((*(yR115 *)rt_nil_check(F.v5758))).f_kind == v849))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2552))).f_line, ((*(yR95 *)rt_nil_check(F.p2552))).f_text, y_str(" is not a module", 16));
}
F.v5756 = ((*(yR115 *)rt_nil_check(F.v5758))).f_members;
while ((((!(F.v5756 == ((void *)0)))) && ((!(((*(yR115 *)rt_nil_check(F.v5756))).f_name == ((*(yR95 *)rt_nil_check(F.p2552))).f_name))))) {
F.v5756 = ((*(yR115 *)rt_nil_check(F.v5756))).f_mnext;
}
if ((F.v5756 == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2552))).f_line, ((*(yR95 *)rt_nil_check(F.p2552))).f_name, y_str(" is not exported by that module", 31));
}
} else {
if (F.p2554) {
F.v5756 = yr1618_FindHere(((*(yR95 *)rt_nil_check(F.p2552))).f_name);
} else {
F.v5756 = yr1612_Find(((*(yR95 *)rt_nil_check(F.p2552))).f_name);
}
if ((F.v5756 == ((void *)0))) {
if (F.p2554) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2552))).f_line, ((*(yR95 *)rt_nil_check(F.p2552))).f_name, y_str(" is not declared in this module", 31));
} else {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2552))).f_line, ((*(yR95 *)rt_nil_check(F.p2552))).f_name, y_str(" is not declared around this module (X.B.2)", 43));
}
}
}
F.v5762 = ((*(yR95 *)rt_nil_check(F.p2552))).f_name;
if ((!(((*(yR95 *)rt_nil_check(F.p2552))).f_ival == INT64_C(0)))) {
F.v5762 = rt_range(((*(yR95 *)rt_nil_check(F.p2552))).f_ival, INT64_C(0), INT64_C(4000000));
}
F.v5758 = yr1677_Real(F.v5756);
if ((((((*(yR115 *)rt_nil_check(F.v5758))).f_kind == v849)) && ((((*(yR95 *)rt_nil_check(F.p2552))).f_text == INT64_C(0))))) {
if ((((!(F.v5766 == INT64_C(0)))) || ((!(((*(yR95 *)rt_nil_check(F.p2552))).f_ival == INT64_C(0)))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2552))).f_line, y_str("a module name in a list takes no attribute and no AS (X.B.3)", 60));
}
F.v5760 = ((*(yR115 *)rt_nil_check(F.v5758))).f_members;
while ((!(F.v5760 == ((void *)0)))) {
F.v5756 = yr2533_Alias(((*(yR115 *)rt_nil_check(F.v5760))).f_name, F.v5760);
((*(yR115 *)rt_nil_check(F.v5756))).f_mnext = (*F.p2553);
(*F.p2553) = F.v5756;
F.v5760 = ((*(yR115 *)rt_nil_check(F.v5760))).f_mnext;
}
return;
}
F.v5760 = yr2533_Alias(F.v5762, F.v5756);
if (F.p2554) {
if ((((((*(yR115 *)rt_nil_check(F.v5758))).f_kind == v837)) || ((((*(yR115 *)rt_nil_check(F.v5758))).f_kind == v840)))) {
if ((((F.v5766 == v399)) || ((F.v5766 == v453)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2552))).f_line, y_str("READONLY and VAR are for variables", 34));
}
if ((((!(F.v5766 == v444))) || ((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5758))).f_rep))).f_opaque)) {
F.v5764 = yr1714_CopyRep(((*(yR115 *)rt_nil_check(F.v5758))).f_rep);
((*(yR100 *)rt_nil_check(F.v5764))).f_opaque = 1;
((*(yR100 *)rt_nil_check(F.v5764))).f_opaqueops = v2548;
((*(yR115 *)rt_nil_check(F.v5760))).f_target = yr1588_NewSym(((*(yR115 *)rt_nil_check(F.v5758))).f_kind, ((*(yR115 *)rt_nil_check(F.v5758))).f_name);
((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5760))).f_target))).f_rep = F.v5764;
((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5760))).f_target))).f_decl = ((*(yR115 *)rt_nil_check(F.v5758))).f_decl;
} else {
yr2540_AddLits(&(*F.p2553), ((*(yR115 *)rt_nil_check(F.v5758))).f_rep, INT64_C(0));
}
} else if ((((*(yR115 *)rt_nil_check(F.v5758))).f_kind == v831)) {
if ((((F.v5766 == v366)) || ((F.v5766 == v444)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2552))).f_line, y_str("OPAQUE and TRANSPARENT are for types", 36));
}
if ((!(F.v5766 == v453))) {
((*(yR115 *)rt_nil_check(F.v5760))).f_readonly = 1;
}
} else if ((!(F.v5766 == INT64_C(0)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2552))).f_line, y_str("an attribute is for a type, a representation or a variable", 58));
}
if ((((((*(yR115 *)rt_nil_check(F.v5758))).f_kind == v831)) && ((((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5758))).f_rep))).f_kind == v807)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2552))).f_line, y_str("a signal may not be exported from its monitor (X.E.4)", 53));
}
} else if ((((((*(yR115 *)rt_nil_check(F.v5758))).f_kind == v837)) || ((((*(yR115 *)rt_nil_check(F.v5758))).f_kind == v840)))) {
yr2540_AddLits(&(*F.p2553), ((*(yR115 *)rt_nil_check(F.v5758))).f_rep, INT64_C(0));
}
((*(yR115 *)rt_nil_check(F.v5760))).f_mnext = (*F.p2553);
(*F.p2553) = F.v5760;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2559_DefineAll(void * a_p2560, rt_int a_p2561) {
struct yf2562 F;
memset((void *)&F, 0, sizeof F);
F.p2560 = a_p2560;
F.p2561 = a_p2561;
F.v5791 = F.p2560;
F.v5793 = F.p2560;
F.v5795 = F.p2560;
while ((!(F.v5791 == ((void *)0)))) {
F.v5793 = ((*(yR115 *)rt_nil_check(F.v5791))).f_mnext;
F.v5795 = yr1618_FindHere(((*(yR115 *)rt_nil_check(F.v5791))).f_name);
if ((((F.v5795 == ((void *)0))) || ((!(yr1677_Real(F.v5795) == yr1677_Real(F.v5791)))))) {
if (((((!(F.v5795 == ((void *)0)))) && ((((*(yR115 *)rt_nil_check(yr1677_Real(F.v5791)))).f_kind == v843))) && ((((*(yR115 *)rt_nil_check(yr1677_Real(F.v5795)))).f_kind == v843)))) {
yr1644_Define(F.v5791, F.p2561);
} else if ((F.v5795 == ((void *)0))) {
yr1644_Define(F.v5791, F.p2561);
} else {
yr1132_FailN(F.p2561, ((*(yR115 *)rt_nil_check(F.v5791))).f_name, y_str(" comes into this scope twice", 28));
}
}
F.v5791 = F.v5793;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2566_CompileModule(void * a_p2567) {
struct yf2568 F;
memset((void *)&F, 0, sizeof F);
F.p2567 = a_p2567;
F.v5824 = 0;
F.v5800 = ((void *)0);
F.v5816 = ((*(yR95 *)rt_nil_check(F.p2567))).f_a;
while ((!(F.v5816 == ((void *)0)))) {
yr2551_ResolveItem(F.v5816, &F.v5800, 0);
F.v5816 = ((*(yR95 *)rt_nil_check(F.v5816))).f_next;
}
F.v5810 = v2522;
if ((((((*(yR95 *)rt_nil_check(F.p2567))).f_flag == INT64_C(1))) && ((v2522 == ((void *)0))))) {
F.v5812 = yr1588_NewSym(v831, ((*(yR95 *)rt_nil_check(F.p2567))).f_name);
((*(yR115 *)rt_nil_check(F.v5812))).f_level = v1576;
((*(yR115 *)rt_nil_check(F.v5812))).f_cname = yr1146_Fresh(y_str("mon", 3));
((*(yR115 *)rt_nil_check(F.v5812))).f_rep = v1689;
yr1664_DeclStorage(yr1021_T(y_str("ymon", 4)), ((*(yR115 *)rt_nil_check(F.v5812))).f_cname);
yr1092_Emit(yr2437_Join(yr1021_T(y_str("y_mon_init(&", 12)), yr1651_Path(v1576, ((*(yR115 *)rt_nil_check(F.v5812))).f_cname), yr1021_T(y_str(");", 2))));
v2522 = F.v5812;
F.v5824 = 1;
}
yr1595_OpenScope(1);
((void * *)(v2531).p)[y_ix1(v2531, v1570)] = ((void *)0);
F.v5820 = v1573;
v1573 = v1570;
yr2559_DefineAll(F.v5800, ((*(yR95 *)rt_nil_check(F.p2567))).f_line);
yr2516_Declarations(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2567))).f_c))).f_a);
if (F.v5824) {
yr1092_Emit(yr2437_Join(yr1021_T(y_str("y_mon_enter(&", 13)), yr1651_Path(((*(yR115 *)rt_nil_check(v2522))).f_level, ((*(yR115 *)rt_nil_check(v2522))).f_cname), yr1021_T(y_str(");", 2))));
}
v2314 = rt_range(rt_add(v2314, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2312).p)[y_ix1(v2312, v2314)] = INT64_C(0);
yr2395_BlockStatements(((*(yR95 *)rt_nil_check(F.p2567))).f_c);
v2314 = rt_range(rt_sub(v2314, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (F.v5824) {
yr1092_Emit(yr2437_Join(yr1021_T(y_str("y_mon_leave(&", 13)), yr1651_Path(((*(yR115 *)rt_nil_check(v2522))).f_level, ((*(yR115 *)rt_nil_check(v2522))).f_cname), yr1021_T(y_str(");", 2))));
}
v2548 = INT64_C(0);
F.v5816 = ((*(yR95 *)rt_nil_check(F.p2567))).f_b;
while ((!(F.v5816 == ((void *)0)))) {
if ((((((*(yR95 *)rt_nil_check(F.v5816))).f_text == INT64_C(0))) && ((yr1618_FindHere(((*(yR95 *)rt_nil_check(F.v5816))).f_name) == ((void *)0))))) {
if ((((*(yR95 *)rt_nil_check(F.v5816))).f_name == v501)) {
v2548 = rt_range(rt_add(v2548, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((((((*(yR95 *)rt_nil_check(F.v5816))).f_name == v555)) || ((((*(yR95 *)rt_nil_check(F.v5816))).f_name == v540)))) {
if (((rt_div(v2548, INT64_C(2))) == INT64_C(0))) {
v2548 = rt_range(rt_add(v2548, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
}
F.v5816 = ((*(yR95 *)rt_nil_check(F.v5816))).f_next;
}
F.v5802 = ((void *)0);
F.v5816 = ((*(yR95 *)rt_nil_check(F.p2567))).f_b;
while ((!(F.v5816 == ((void *)0)))) {
yr2551_ResolveItem(F.v5816, &F.v5802, 1);
F.v5816 = ((*(yR95 *)rt_nil_check(F.v5816))).f_next;
}
F.v5818 = ((void * *)(v2531).p)[y_ix1(v2531, v1570)];
v1573 = F.v5820;
yr1601_CloseScope();
while ((!(F.v5818 == ((void *)0)))) {
F.v5816 = ((*(yR95 *)rt_nil_check(F.v5818))).f_next;
((*(yR95 *)rt_nil_check(F.v5818))).f_next = ((void * *)(v2531).p)[y_ix1(v2531, v1570)];
((void * *)(v2531).p)[y_ix1(v2531, v1570)] = F.v5818;
F.v5818 = F.v5816;
}
v2522 = F.v5810;
F.v5806 = yr1588_NewSym(v849, ((*(yR95 *)rt_nil_check(F.p2567))).f_name);
((*(yR115 *)rt_nil_check(F.v5806))).f_members = F.v5802;
yr1644_Define(F.v5806, ((*(yR95 *)rt_nil_check(F.p2567))).f_line);
F.v5808 = F.v5802;
F.v5802 = ((void *)0);
while ((!(F.v5808 == ((void *)0)))) {
F.v5814 = ((*(yR115 *)rt_nil_check(F.v5808))).f_mnext;
F.v5804 = yr2533_Alias(((*(yR115 *)rt_nil_check(F.v5808))).f_name, F.v5808);
((*(yR115 *)rt_nil_check(F.v5804))).f_readonly = ((*(yR115 *)rt_nil_check(F.v5808))).f_readonly;
((*(yR115 *)rt_nil_check(F.v5804))).f_mnext = F.v5802;
F.v5802 = F.v5804;
F.v5808 = F.v5814;
}
((*(yR115 *)rt_nil_check(F.v5806))).f_members = F.v5802;
F.v5808 = F.v5802;
while ((!(F.v5808 == ((void *)0)))) {
F.v5814 = yr2533_Alias(((*(yR115 *)rt_nil_check(F.v5808))).f_name, F.v5808);
((*(yR115 *)rt_nil_check(F.v5814))).f_readonly = ((*(yR115 *)rt_nil_check(F.v5808))).f_readonly;
if ((yr1618_FindHere(((*(yR115 *)rt_nil_check(F.v5808))).f_name) == ((void *)0))) {
yr1644_Define(F.v5814, ((*(yR95 *)rt_nil_check(F.p2567))).f_line);
} else if ((((((*(yR115 *)rt_nil_check(yr1618_FindHere(((*(yR115 *)rt_nil_check(F.v5808))).f_name)))).f_kind == v864)) && ((!(yr1677_Real(yr1618_FindHere(((*(yR115 *)rt_nil_check(F.v5808))).f_name)) == yr1677_Real(F.v5808)))))) {
yr1644_Define(F.v5814, ((*(yR95 *)rt_nil_check(F.p2567))).f_line);
} else if ((!(((*(yR115 *)rt_nil_check(yr1677_Real(F.v5808)))).f_kind == v843))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2567))).f_line, ((*(yR115 *)rt_nil_check(F.v5808))).f_name, y_str(" is exported into a scope that has it already", 45));
}
F.v5808 = ((*(yR115 *)rt_nil_check(F.v5808))).f_mnext;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2572_DeclareTemplate(void * a_p2573) {
struct yf2574 F;
memset((void *)&F, 0, sizeof F);
F.p2573 = a_p2573;
F.v5857 = yr1588_NewSym(v852, ((*(yR95 *)rt_nil_check(F.p2573))).f_name);
((*(yR115 *)rt_nil_check(F.v5857))).f_decl = F.p2573;
yr1644_Define(F.v5857, ((*(yR95 *)rt_nil_check(F.p2573))).f_line);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2578_Instantiate(void * a_p2579) {
struct yf2580 F;
memset((void *)&F, 0, sizeof F);
F.p2579 = a_p2579;
F.v5861 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(F.p2579))).f_name, ((*(yR95 *)rt_nil_check(F.p2579))).f_line));
if ((!(((*(yR115 *)rt_nil_check(F.v5861))).f_kind == v852))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2579))).f_line, ((*(yR95 *)rt_nil_check(F.p2579))).f_name, y_str(" is not a template", 18));
}
F.v5863 = ((*(yR115 *)rt_nil_check(F.v5861))).f_decl;
if ((!(yr1260_Count(((*(yR95 *)rt_nil_check(F.v5863))).f_a) == yr1260_Count(((*(yR95 *)rt_nil_check(F.p2579))).f_a)))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2579))).f_line, ((*(yR95 *)rt_nil_check(F.p2579))).f_name, y_str(": the number of actuals is wrong", 32));
}
F.v5869 = rt_range(rt_add(v1159, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
{ rt_int hi5888 = rt_sub(((*(yR95 *)rt_nil_check(F.v5863))).f_flag, INT64_C(1));
for (rt_int i5887 = ((*(yR95 *)rt_nil_check(F.v5863))).f_ival; i5887 <= hi5888; i5887++) { F.c_5886 = i5887;
F.v5873 = ((rt_int *)(v1153).p)[y_ix1(v1153, F.c_5886)];
F.v5875 = ((rt_int *)(v1155).p)[y_ix1(v1155, F.c_5886)];
if ((F.v5873 == v177)) {
F.v5865 = ((*(yR95 *)rt_nil_check(F.v5863))).f_a;
F.v5867 = ((*(yR95 *)rt_nil_check(F.p2579))).f_a;
while ((!(F.v5865 == ((void *)0)))) {
if ((((((*(yR95 *)rt_nil_check(F.v5865))).f_name == F.v5875)) && ((F.v5873 == v177)))) {
if ((((*(yR95 *)rt_nil_check(F.v5867))).f_flag == INT64_C(1))) {
F.v5873 = v186;
F.v5875 = ((*(yR95 *)rt_nil_check(F.v5867))).f_ival;
} else {
F.v5875 = ((*(yR95 *)rt_nil_check(F.v5867))).f_name;
if ((F.v5875 <= v462)) {
F.v5873 = v180;
} else if ((F.v5875 <= v591)) {
F.v5873 = v183;
}
}
}
F.v5865 = ((*(yR95 *)rt_nil_check(F.v5865))).f_next;
F.v5867 = ((*(yR95 *)rt_nil_check(F.v5867))).f_next;
}
}
v1159 = rt_range(rt_add(v1159, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1153).p)[y_ix1(v1153, v1159)] = F.v5873;
((rt_int *)(v1155).p)[y_ix1(v1155, v1159)] = F.v5875;
((rt_int *)(v1157).p)[y_ix1(v1157, v1159)] = ((rt_int *)(v1157).p)[y_ix1(v1157, F.c_5886)];
if (i5887 == hi5888) break;
}}
v1159 = rt_range(rt_add(v1159, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1153).p)[y_ix1(v1153, v1159)] = v174;
((rt_int *)(v1155).p)[y_ix1(v1155, v1159)] = INT64_C(0);
((rt_int *)(v1157).p)[y_ix1(v1157, v1159)] = ((*(yR95 *)rt_nil_check(F.p2579))).f_line;
F.v5871 = v1234;
v1234 = F.v5869;
F.v5877 = yr1350_ParseModule();
v1234 = F.v5871;
yr2566_CompileModule(F.v5877);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2584_DeclareProcess(void * a_p2585) {
struct yf2586 F;
memset((void *)&F, 0, sizeof F);
F.p2585 = a_p2585;
F.v5898 = ((*(yR95 *)rt_nil_check(F.p2585))).f_sym;
((*(yR115 *)rt_nil_check(F.v5898))).f_monitor = v2522;
yr1664_DeclStorage(yr1021_T(y_str("rt_taskdecl", 11)), yr2437_Join(((*(yR115 *)rt_nil_check(F.v5898))).f_cname, yr1021_T(y_str("_d", 2)), INT64_C(0)));
F.v5900 = yr1245_NewNode(v639, ((*(yR95 *)rt_nil_check(F.p2585))).f_line);
((*(yR95 *)rt_nil_check(F.v5900))).f_sym = F.v5898;
((*(yR95 *)rt_nil_check(F.v5900))).f_next = ((void * *)(v2531).p)[y_ix1(v2531, v1570)];
((void * *)(v2531).p)[y_ix1(v2531, v1570)] = F.v5900;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2590_AwaitProcesses(void) {
struct yf2591 F;
memset((void *)&F, 0, sizeof F);
F.v5906 = ((void * *)(v2531).p)[y_ix1(v2531, v1570)];
while ((!(F.v5906 == ((void *)0)))) {
yr1092_Emit(yr2437_Join(yr1021_T(y_str("rt_await_decl(&", 15)), yr1651_Path(rt_range(rt_sub(((*(yR115 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v5906))).f_sym))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr2437_Join(((*(yR115 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v5906))).f_sym))).f_cname, yr1021_T(y_str("_d", 2)), INT64_C(0))), yr1021_T(y_str(");", 2))));
F.v5906 = ((*(yR95 *)rt_nil_check(F.v5906))).f_next;
}
((void * *)(v2531).p)[y_ix1(v2531, v1570)] = ((void *)0);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2595_Activate(void * a_p2596, void * a_p2597) {
struct yf2598 F;
memset((void *)&F, 0, sizeof F);
F.p2596 = a_p2596;
F.p2597 = a_p2597;
F.v5937 = ((*(yR115 *)rt_nil_check(F.p2597))).f_decl;
yr2234_CompileArgs(((*(yR95 *)rt_nil_check(F.p2596))).f_a, F.p2597, &F.v5917, &F.v5919);
if ((!(F.v5919 == ((*(yR115 *)rt_nil_check(F.p2597))).f_nparams))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2596))).f_line, ((*(yR115 *)rt_nil_check(F.p2597))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
F.v5925 = yr1146_Fresh(y_str("pf", 2));
yr1092_Emit(yr2437_Join(yr1021_T(y_str("{ struct ", 9)), ((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.p2597))).f_members))).f_name, yr2437_Join(yr1021_T(y_str(" *", 2)), F.v5925, yr2437_Join(yr1021_T(y_str(" = rt_alloc(sizeof *", 20)), F.v5925, yr1021_T(y_str(");", 2))))));
if ((((*(yR115 *)rt_nil_check(F.p2597))).f_level > INT64_C(1))) {
yr1092_Emit(yr2437_Join(F.v5925, yr1021_T(y_str("->up = ", 7)), yr2437_Join(yr1658_FramePtr(rt_range(rt_sub(((*(yR115 *)rt_nil_check(F.p2597))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))), yr1021_T(y_str(";", 1)), INT64_C(0))));
}
F.v5923 = ((*(yR115 *)rt_nil_check(F.p2597))).f_params;
F.v5921 = rt_range(rt_add(F.v5917, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(F.v5923 == ((void *)0)))) {
if ((!yr2213_Fits(((*(yR110 *)rt_nil_check(F.v5923))).f_rep, ((void * *)(v2199).p)[y_ix1(v2199, F.v5921)]))) {
yr1775_TypeClash(((*(yR95 *)rt_nil_check(((void * *)(v2208).p)[y_ix1(v2208, F.v5921)]))).f_line, ((*(yR110 *)rt_nil_check(F.v5923))).f_rep, ((void * *)(v2199).p)[y_ix1(v2199, F.v5921)]);
}
F.v5931 = yr2437_Join(F.v5925, yr1021_T(y_str("->", 2)), ((*(yR110 *)rt_nil_check(F.v5923))).f_cname);
if ((((*(yR110 *)rt_nil_check(F.v5923))).f_cls == v873)) {
if ((!yr2058_IsVariable(((void * *)(v2208).p)[y_ix1(v2208, F.v5921)]))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(((void * *)(v2208).p)[y_ix1(v2208, F.v5921)]))).f_line, ((*(yR110 *)rt_nil_check(F.v5923))).f_name, y_str(": the actual of a VAR parameter must be a variable", 50));
}
yr1092_Emit(yr2437_Join(F.v5931, yr1021_T(y_str(" = &", 4)), yr2437_Join(((rt_int *)(v2190).p)[y_ix1(v2190, F.v5921)], yr1021_T(y_str(";", 1)), INT64_C(0))));
} else if (yr1744_Deep(((*(yR110 *)rt_nil_check(F.v5923))).f_rep)) {
F.v5927 = yr1146_Fresh(y_str("t", 1));
yr1092_Emit(yr2437_Join(yr1021_T(y_str("{ ", 2)), yr1750_CType(((*(yR110 *)rt_nil_check(F.v5923))).f_rep), yr2437_Join(yr1021_T(y_str(" ", 1)), F.v5927, yr2437_Join(yr1021_T(y_str(" = ", 3)), ((rt_int *)(v2190).p)[y_ix1(v2190, F.v5921)], yr1021_T(y_str(";", 1))))));
if ((((*(yR100 *)rt_nil_check(((*(yR110 *)rt_nil_check(F.v5923))).f_rep))).f_kind == v813)) {
yr1092_Emit(yr2437_Join(yr1021_T(y_str("y_copy(y_desc_vector(", 21)), yr1756_DescOf(((*(yR100 *)rt_nil_check(((*(yR110 *)rt_nil_check(F.v5923))).f_rep))).f_elem), yr2437_Join(yr1021_T(y_str("), &", 4)), F.v5931, yr2437_Join(yr1021_T(y_str(", &", 3)), F.v5927, yr1021_T(y_str("); }", 4))))));
} else {
yr1092_Emit(yr2437_Join(yr1021_T(y_str("y_copy(", 7)), yr1756_DescOf(((*(yR110 *)rt_nil_check(F.v5923))).f_rep), yr2437_Join(yr1021_T(y_str(", &", 3)), F.v5931, yr2437_Join(yr1021_T(y_str(", &", 3)), F.v5927, yr1021_T(y_str("); }", 4))))));
}
} else {
yr1092_Emit(yr2437_Join(F.v5931, yr1021_T(y_str(" = ", 3)), yr2437_Join(yr2040_Convert(((rt_int *)(v2190).p)[y_ix1(v2190, F.v5921)], ((*(yR110 *)rt_nil_check(F.v5923))).f_rep, ((void * *)(v2199).p)[y_ix1(v2199, F.v5921)]), yr1021_T(y_str(";", 1)), INT64_C(0))));
}
F.v5921 = rt_range(rt_add(F.v5921, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5923 = ((*(yR110 *)rt_nil_check(F.v5923))).f_next;
}
v2210 = F.v5917;
F.v5933 = yr1021_T(y_str("0", 1));
if ((!(((*(yR95 *)rt_nil_check(F.v5937))).f_e == ((void *)0)))) {
yr2091_Expr(((*(yR95 *)rt_nil_check(F.v5937))).f_e, v1683, &F.v5933, &F.v5939);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.v5937))).f_line, v1683, F.v5939);
}
F.v5935 = yr1021_T(y_str("0, 0", 4));
if ((!(((*(yR95 *)rt_nil_check(F.v5937))).f_d == ((void *)0)))) {
yr2091_Expr(((*(yR95 *)rt_nil_check(F.v5937))).f_d, v1683, &F.v5929, &F.v5939);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.v5937))).f_line, v1683, F.v5939);
F.v5935 = yr2437_Join(yr1021_T(y_str("1, ", 3)), F.v5929, INT64_C(0));
}
yr986_SB();
yr997_SA(y_str("y_create(&", 10));
yr1004_ST(yr1651_Path(rt_range(rt_sub(((*(yR115 *)rt_nil_check(F.p2597))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr2437_Join(((*(yR115 *)rt_nil_check(F.p2597))).f_cname, yr1021_T(y_str("_d", 2)), INT64_C(0))));
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v5933);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v5935);
yr997_SA(y_str(", ", 2));
yr1004_ST(((*(yR115 *)rt_nil_check(F.p2597))).f_cname);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v5925);
yr997_SA(y_str("); }", 4));
F.v5927 = yr1016_SE();
yr1092_Emit(F.v5927);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2602_MonitorPath(void * a_p2603) {
struct yf2604 F;
memset((void *)&F, 0, sizeof F);
F.p2603 = a_p2603;
{ rt_int rv5995 = yr2437_Join(yr1021_T(y_str("&", 1)), yr1651_Path(((*(yR115 *)rt_nil_check(F.p2603))).f_level, ((*(yR115 *)rt_nil_check(F.p2603))).f_cname), INT64_C(0));
return rv5995; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2608_EnterMonitor(void * a_p2609) {
struct yf2610 F;
memset((void *)&F, 0, sizeof F);
F.p2609 = a_p2609;
if ((((*(yR115 *)rt_nil_check(F.p2609))).f_kind == v846)) {
((*(yR115 *)rt_nil_check(F.p2609))).f_monitor = v2522;
}
if ((((*(yR115 *)rt_nil_check(F.p2609))).f_monitor == ((void *)0))) {
return;
}
yr1092_Emit(yr2437_Join(yr1021_T(y_str("y_mon_enter(", 12)), yr2602_MonitorPath(((*(yR115 *)rt_nil_check(F.p2609))).f_monitor), yr1021_T(y_str(");", 2))));
F.v5999 = yr1146_Fresh(y_str("mf", 2));
v2357 = 1;
yr1092_Emit(yr2437_Join(yr1021_T(y_str("rt_frame ", 9)), F.v5999, yr1021_T(y_str(";", 1))));
yr986_SB();
yr997_SA(y_str("if (!RT_TRY(", 12));
yr1004_ST(F.v5999);
yr997_SA(y_str(")) { RT_POP(", 12));
yr1004_ST(F.v5999);
yr997_SA(y_str("); ", 3));
if ((((*(yR115 *)rt_nil_check(F.p2609))).f_kind == v855)) {
yr997_SA(y_str("y_mon_drop(", 11));
} else {
yr997_SA(y_str("y_mon_leave(", 12));
}
yr1004_ST(yr2602_MonitorPath(((*(yR115 *)rt_nil_check(F.p2609))).f_monitor));
yr997_SA(y_str("); rt_raise(rt_xcur); }", 23));
yr1092_Emit(yr1016_SE());
v2299 = rt_range(rt_add(v2299, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2297).p)[y_ix1(v2297, v2299)] = F.v5999;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2614_LeaveMonitor(void) {
struct yf2615 F;
memset((void *)&F, 0, sizeof F);
if ((v2355 == ((void *)0))) {
return;
}
if ((((*(yR115 *)rt_nil_check(v2355))).f_monitor == ((void *)0))) {
return;
}
if ((((*(yR115 *)rt_nil_check(v2355))).f_kind == v855)) {
yr1092_Emit(yr2437_Join(yr1021_T(y_str("y_mon_drop(", 11)), yr2602_MonitorPath(((*(yR115 *)rt_nil_check(v2355))).f_monitor), yr1021_T(y_str(");", 2))));
} else {
yr1092_Emit(yr2437_Join(yr1021_T(y_str("y_mon_leave(", 12)), yr2602_MonitorPath(((*(yR115 *)rt_nil_check(v2355))).f_monitor), yr1021_T(y_str(");", 2))));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2619_TerminateStatement(void * a_p2620) {
struct yf2621 F;
memset((void *)&F, 0, sizeof F);
F.p2620 = a_p2620;
if ((((v2355 == ((void *)0))) || ((!(((*(yR115 *)rt_nil_check(v2355))).f_kind == v855))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2620))).f_line, y_str("TERMINATE_PROCESS ends a process (IX.A.7)", 41));
}
yr2590_AwaitProcesses();
yr2614_LeaveMonitor();
yr2378_PopTo(v2302);
yr1098_EmitS(y_str("return;", 7));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2625_DeclareSignal(void * a_p2626, rt_int a_p2627) {
struct yf2628 F;
memset((void *)&F, 0, sizeof F);
F.p2626 = a_p2626;
F.p2627 = a_p2627;
if ((v2522 == ((void *)0))) {
yr1124_FailS(F.p2627, y_str("signal variables are declared in a monitor (X.E.4)", 50));
}
((*(yR115 *)rt_nil_check(F.p2626))).f_rep = yr1714_CopyRep(((*(yR115 *)rt_nil_check(F.p2626))).f_rep);
((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.p2626))).f_rep))).f_monitor = v2522;
yr1092_Emit(yr2437_Join(yr1021_T(y_str("y_sig_init(&", 12)), yr1671_SymPath(F.p2626), yr2437_Join(yr1021_T(y_str(", ", 2)), yr2602_MonitorPath(v2522), yr1021_T(y_str(");", 2)))));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2632_DeviceSignal(void * a_p2633, void * a_p2634) {
struct yf2635 F;
memset((void *)&F, 0, sizeof F);
F.p2633 = a_p2633;
F.p2634 = a_p2634;
yr2032_Manifest(F.p2634, &F.v6034, &F.v6036);
if ((!F.v6034)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2634))).f_line, y_str("an AT location is a manifest constant (XIV.VII)", 47));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2639_Arg(void * a_p2640, rt_int a_p2641) {
struct yf2642 F;
memset((void *)&F, 0, sizeof F);
F.p2640 = a_p2640;
F.p2641 = a_p2641;
F.v6042 = ((*(yR95 *)rt_nil_check(F.p2640))).f_a;
F.v6044 = INT64_C(1);
while ((((!(F.v6042 == ((void *)0)))) && ((F.v6044 < F.p2641)))) {
F.v6042 = ((*(yR95 *)rt_nil_check(F.v6042))).f_next;
F.v6044 = rt_range(rt_add(F.v6044, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v6042 == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2640))).f_line, ((*(yR95 *)rt_nil_check(F.p2640))).f_name, y_str(": too few actual parameters", 27));
}
{ void * rv6049 = F.v6042;
return rv6049; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2646_NArgs(void * a_p2647, rt_int a_p2648) {
struct yf2649 F;
memset((void *)&F, 0, sizeof F);
F.p2647 = a_p2647;
F.p2648 = a_p2648;
if ((!(yr1260_Count(((*(yR95 *)rt_nil_check(F.p2647))).f_a) == F.p2648))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2647))).f_line, ((*(yR95 *)rt_nil_check(F.p2647))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2653_Call1(yarr a_p2655, rt_int a_p2656) {
struct yf2657 F;
memset((void *)&F, 0, sizeof F);
F.p2655 = a_p2655;
F.p2656 = a_p2656;
yr986_SB();
yr997_SA(F.p2655);
yr997_SA(y_str("(", 1));
yr1004_ST(F.p2656);
yr997_SA(y_str(")", 1));
{ rt_int rv6059 = yr1016_SE();
return rv6059; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2661_Addr(rt_int a_p2662) {
struct yf2663 F;
memset((void *)&F, 0, sizeof F);
F.p2662 = a_p2662;
{ rt_int rv6064 = yr2437_Join(yr1021_T(y_str("&", 1)), F.p2662, INT64_C(0));
return rv6064; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2667_StdVar(void * a_p2668, rt_int a_p2669, rt_int * a_p2670, void * * a_p2671) {
struct yf2672 F;
memset((void *)&F, 0, sizeof F);
F.p2668 = a_p2668;
F.p2669 = a_p2669;
F.p2670_o = a_p2670;
F.p2671_o = a_p2671;
yr2064_LValue(F.p2668, &F.p2670, &F.p2671);
if ((((!(F.p2669 == v828))) && ((!(((*(yR100 *)rt_nil_check(F.p2671))).f_kind == F.p2669))))) {
yr986_SB();
yr997_SA(y_str("a ", 2));
if ((F.p2669 == v801)) {
yr997_SA(y_str("file", 4));
} else if ((F.p2669 == v807)) {
yr997_SA(y_str("signal", 6));
} else if ((F.p2669 == v810)) {
yr997_SA(y_str("SEMAPHORE", 9));
} else if ((F.p2669 == v798)) {
yr997_SA(y_str("pointer", 7));
} else {
yr997_SA(y_str("variable", 8));
}
yr997_SA(y_str(" is needed here", 15));
F.v6071 = yr1016_SE();
yr1117_Fail(((*(yR95 *)rt_nil_check(F.p2668))).f_line, F.v6071);
}
(*F.p2670_o) = F.p2670;
(*F.p2671_o) = F.p2671;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2676_NumArg(void * a_p2677, rt_int * a_p2678, void * * a_p2679) {
struct yf2680 F;
memset((void *)&F, 0, sizeof F);
F.p2677 = a_p2677;
F.p2678_o = a_p2678;
F.p2679_o = a_p2679;
yr2091_Expr(F.p2677, ((void *)0), &F.p2678, &F.p2679);
if ((!yr1726_IsNumeric(F.p2679))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2677))).f_line, y_str("a number is needed here", 23));
}
(*F.p2678_o) = F.p2678;
(*F.p2679_o) = F.p2679;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2684_IntArg(void * a_p2685) {
struct yf2686 F;
memset((void *)&F, 0, sizeof F);
F.p2685 = a_p2685;
yr2091_Expr(F.p2685, v1683, &F.v6087, &F.v6089);
if ((!(((*(yR100 *)rt_nil_check(F.v6089))).f_kind == v774))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2685))).f_line, y_str("an integer is needed here", 25));
}
{ rt_int rv6091 = F.v6087;
return rv6091; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2690_CodeInsert(void * a_p2691) {
struct yf2692 F;
memset((void *)&F, 0, sizeof F);
F.p2691 = a_p2691;
F.v6095 = yr2639_Arg(F.p2691, INT64_C(1));
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1)}; y_desc_array(&F.yd_6119, 1, lo, hi, &y_d_int); }
y_init(&F.yd_6119, &F.v6121);
if ((!(((*(yR95 *)rt_nil_check(F.v6095))).f_kind == v741))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2691))).f_line, y_str("a code insert takes a string literal (XIV.XI.5)", 47));
}
F.v6098 = ((*(yR95 *)rt_nil_check(F.v6095))).f_text;
F.v6108 = ((rt_int *)(v890).p)[y_ix1(v890, F.v6098)];
yr986_SB();
F.v6104 = INT64_C(1);
while ((F.v6104 <= F.v6108)) {
F.v6110 = yr1063_TChar(F.v6098, F.v6104);
if ((F.v6110 == 39)) {
F.v6106 = rt_range(rt_add(F.v6104, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1063_TChar(F.v6098, F.v6106) == 39))) {
F.v6106 = rt_range(rt_add(F.v6106, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v6100 = yr1028_Intern(rt_range(rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.v6098)], F.v6104), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v6106, F.v6104)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, yr2015_CharValue(v1687, F.v6100, ((*(yR95 *)rt_nil_check(F.p2691))).f_line))]);
F.v6104 = rt_range(rt_add(F.v6106, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v6110 == 36)) {
F.v6106 = rt_range(rt_add(F.v6104, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((F.v6106 <= F.v6108)) && ((yr968_IsLetter(yr1063_TChar(F.v6098, F.v6106)) || yr974_IsDigit(yr1063_TChar(F.v6098, F.v6106)))))) {
F.v6106 = rt_range(rt_add(F.v6106, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v6100 = yr1028_Intern(rt_range(rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.v6098)], F.v6104), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v6106, F.v6104)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v6112 = yr1612_Find(F.v6100);
if ((F.v6112 == ((void *)0))) {
v909 = INT64_C(0);
v921 = INT64_C(0);
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2691))).f_line, F.v6100, y_str(" in a code insert is not declared here", 38));
}
F.v6112 = yr1677_Real(F.v6112);
if ((((!(((*(yR115 *)rt_nil_check(F.v6112))).f_kind == v831))) && ((!(((*(yR115 *)rt_nil_check(F.v6112))).f_kind == v834))))) {
v909 = INT64_C(0);
v921 = INT64_C(0);
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2691))).f_line, F.v6100, y_str(" in a code insert is not a variable or constant", 47));
}
yr1004_ST(yr2072_Paren(yr1671_SymPath(F.v6112)));
F.v6104 = F.v6106;
} else {
yr991_SC(F.v6110);
F.v6104 = rt_range(rt_add(F.v6104, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
F.v6102 = yr1016_SE();
yr1092_Emit(F.v6102);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2696_StdCall(rt_int a_p2697, void * a_p2698, rt_int a_p2699, rt_int * a_p2700, void * * a_p2701) {
struct yf2702 F;
memset((void *)&F, 0, sizeof F);
F.p2697 = a_p2697;
F.p2698 = a_p2698;
F.p2699 = a_p2699;
F.p2700_o = a_p2700;
F.p2701_o = a_p2701;
F.p2701 = v1689;
F.p2700 = yr1021_T(y_str("((void)0)", 9));
F.v6188 = ((((((((((((((((F.p2697 == v1908)) || ((F.p2697 == v1911))) || ((F.p2697 == v1914))) || ((F.p2697 == v1917))) || ((F.p2697 == v1920))) || ((F.p2697 == v1926))) || ((F.p2697 == v1935))) || ((F.p2697 == v1941))) || ((F.p2697 == v1944))) || ((F.p2697 == v1968))) || ((F.p2697 == v1971))) || ((F.p2697 == v1980))) || ((F.p2697 == v1983))) || ((F.p2697 == v1986))) || ((F.p2697 == v1989)));
if ((F.p2699 && (!F.v6188))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2698))).f_line, ((*(yR95 *)rt_nil_check(F.p2698))).f_name, y_str(" returns a value: it is called in an expression", 47));
}
if (((!F.p2699) && F.v6188)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2698))).f_line, ((*(yR95 *)rt_nil_check(F.p2698))).f_name, y_str(" returns no value", 17));
}
if ((((F.p2697 == v1890)) || ((F.p2697 == v1893)))) {
yr2646_NArgs(F.p2698, INT64_C(2));
yr2091_Expr(yr2639_Arg(F.p2698, INT64_C(1)), ((void *)0), &F.v6160, &F.v6170);
if ((!yr1732_IsArrayLike(F.v6170))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2698))).f_line, ((*(yR95 *)rt_nil_check(F.p2698))).f_name, y_str(" of something that is not an array", 34));
}
F.v6162 = yr2684_IntArg(yr2639_Arg(F.p2698, INT64_C(2)));
yr2032_Manifest(yr2639_Arg(F.p2698, INT64_C(2)), &F.v6184, &F.v6182);
F.p2701 = yr2135_Unbounded(v1683);
if ((F.v6184 && ((((*(yR100 *)rt_nil_check(F.v6170))).f_kind == v792)))) {
if ((((F.v6182 < INT64_C(1))) || ((F.v6182 > ((*(yR100 *)rt_nil_check(F.v6170))).f_nidx)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2698))).f_line, y_str("no such dimension", 17));
}
F.v6176 = ((*(yR100 *)rt_nil_check(F.v6170))).f_idx;
{ rt_int hi6204 = F.v6182;
for (rt_int i6203 = INT64_C(2); i6203 <= hi6204; i6203++) { F.c_6202 = i6203;
F.v6176 = ((*(yR100 *)rt_nil_check(F.v6176))).f_link;
if (i6203 == hi6204) break;
}}
F.p2701 = F.v6176;
}
if ((F.p2697 == v1890)) {
F.p2700 = yr2141_Call2(y_str("y_low", 5), F.v6160, F.v6162);
} else {
F.p2700 = yr2141_Call2(y_str("y_high", 6), F.v6160, F.v6162);
}
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
return;
}
if ((((((F.p2697 == v1896)) || ((F.p2697 == v1899))) || ((F.p2697 == v1902))) || ((F.p2697 == v1905)))) {
yr2646_NArgs(F.p2698, INT64_C(1));
yr2091_Expr(yr2639_Arg(F.p2698, INT64_C(1)), ((void *)0), &F.v6160, &F.v6170);
if ((!yr1720_IsDiscrete(F.v6170))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2698))).f_line, ((*(yR95 *)rt_nil_check(F.p2698))).f_name, y_str(" of something that is not integer or scalar", 43));
}
if ((!(((*(yR100 *)rt_nil_check(F.v6170))).f_elem == ((void *)0)))) {
F.v6170 = ((*(yR100 *)rt_nil_check(F.v6170))).f_elem;
}
if ((((((F.p2697 == v1902)) || ((F.p2697 == v1905)))) && ((((*(yR100 *)rt_nil_check(F.v6170))).f_kind == v774)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2698))).f_line, y_str("FIRST and LAST apply to ordered enumerations and alphabets (XI)", 63));
}
if ((((((*(yR100 *)rt_nil_check(F.v6170))).f_kind == v786)) && (!((*(yR100 *)rt_nil_check(F.v6170))).f_ordered))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2698))).f_line, ((*(yR95 *)rt_nil_check(F.p2698))).f_name, y_str(" applies to ordered enumerations (XI)", 37));
}
F.p2701 = yr2135_Unbounded(F.v6170);
if ((F.p2697 == v1902)) {
F.p2700 = ((*(yR100 *)rt_nil_check(F.v6170))).f_lo;
} else if ((F.p2697 == v1905)) {
F.p2700 = ((*(yR100 *)rt_nil_check(F.v6170))).f_hi;
} else {
yr986_SB();
if ((!(((*(yR100 *)rt_nil_check(F.v6170))).f_lo == INT64_C(0)))) {
yr997_SA(y_str("rt_range(", 9));
}
if ((F.p2697 == v1896)) {
yr997_SA(y_str("rt_add(", 7));
} else {
yr997_SA(y_str("rt_sub(", 7));
}
yr1004_ST(F.v6160);
yr997_SA(y_str(", 1)", 4));
if ((!(((*(yR100 *)rt_nil_check(F.v6170))).f_lo == INT64_C(0)))) {
yr997_SA(y_str(", ", 2));
yr1004_ST(((*(yR100 *)rt_nil_check(F.v6170))).f_lo);
yr997_SA(y_str(", ", 2));
yr1004_ST(((*(yR100 *)rt_nil_check(F.v6170))).f_hi);
yr997_SA(y_str(")", 1));
}
F.p2700 = yr1016_SE();
}
if ((!(((*(yR100 *)rt_nil_check(F.v6170))).f_kind == v774))) {
F.p2701 = F.v6170;
}
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
return;
}
if ((F.p2697 == v1908)) {
yr2646_NArgs(F.p2698, INT64_C(1));
yr2667_StdVar(yr2639_Arg(F.p2698, INT64_C(1)), v798, &F.v6160, &F.v6170);
if ((((*(yR100 *)rt_nil_check(F.v6170))).f_elem == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2698))).f_line, ((*(yR100 *)rt_nil_check(F.v6170))).f_forward, y_str(" is not declared", 16));
}
F.v6176 = ((*(yR100 *)rt_nil_check(F.v6170))).f_elem;
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(F.v6160);
yr997_SA(y_str(" = rt_alloc(sizeof(", 19));
yr1004_ST(yr1750_CType(F.v6176));
yr997_SA(y_str("));", 3));
if (yr1744_Deep(F.v6176)) {
yr997_SA(y_str(" y_init(", 8));
yr1004_ST(yr1756_DescOf(F.v6176));
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6160);
yr997_SA(y_str(");", 2));
}
yr997_SA(y_str(" })", 3));
F.p2700 = yr1016_SE();
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
return;
}
if ((F.p2697 == v1986)) {
yr2646_NArgs(F.p2698, INT64_C(1));
yr2667_StdVar(yr2639_Arg(F.p2698, INT64_C(1)), v798, &F.v6160, &F.v6170);
F.p2700 = yr2437_Join(yr1021_T(y_str("({ free(", 8)), F.v6160, yr2437_Join(yr1021_T(y_str("); ", 3)), F.v6160, yr1021_T(y_str(" = 0; })", 8))));
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
return;
}
if ((F.p2697 == v1911)) {
yr2646_NArgs(F.p2698, INT64_C(3));
yr2667_StdVar(yr2639_Arg(F.p2698, INT64_C(1)), v801, &F.v6160, &F.v6170);
yr2091_Expr(yr2639_Arg(F.p2698, INT64_C(2)), v1687, &F.v6162, &F.v6172);
if ((!yr1738_IsString(F.v6172))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2698))).f_line, y_str("OPEN takes the name of the file as a string (XII.A)", 51));
}
yr2091_Expr(yr2639_Arg(F.p2698, INT64_C(3)), v2706, &F.v6164, &F.v6174);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2698))).f_line, v2706, F.v6174);
yr986_SB();
yr997_SA(y_str("y_open(&", 8));
yr1004_ST(F.v6160);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6162);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6164);
yr997_SA(y_str(")", 1));
F.p2700 = yr1016_SE();
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
return;
}
if ((((F.p2697 == v1914)) || ((F.p2697 == v1923)))) {
yr2646_NArgs(F.p2698, INT64_C(1));
yr2667_StdVar(yr2639_Arg(F.p2698, INT64_C(1)), v801, &F.v6160, &F.v6170);
if ((F.p2697 == v1914)) {
F.p2700 = yr2653_Call1(y_str("y_close", 7), yr2661_Addr(F.v6160));
} else {
F.p2701 = v1685;
F.p2700 = yr2653_Call1(y_str("y_check_eof", 11), yr2661_Addr(F.v6160));
}
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
return;
}
if ((F.p2697 == v1917)) {
yr2646_NArgs(F.p2698, INT64_C(2));
yr2667_StdVar(yr2639_Arg(F.p2698, INT64_C(1)), v801, &F.v6160, &F.v6170);
yr2667_StdVar(yr2639_Arg(F.p2698, INT64_C(2)), v828, &F.v6162, &F.v6172);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2698))).f_line, ((*(yR100 *)rt_nil_check(F.v6170))).f_elem, F.v6172);
if ((yr1744_Deep(F.v6172) || ((((*(yR100 *)rt_nil_check(F.v6172))).f_kind == v798)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2698))).f_line, y_str("files of this implementation hold no arrays or pointers", 55));
}
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(yr1750_CType(F.v6172));
yr997_SA(y_str(" g; y_get(&", 11));
yr1004_ST(F.v6160);
yr997_SA(y_str(", &g, sizeof g); ", 17));
yr1004_ST(F.v6162);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2040_Convert(yr1021_T(y_str("g", 1)), F.v6172, ((*(yR100 *)rt_nil_check(F.v6170))).f_elem));
yr997_SA(y_str("; })", 4));
F.p2700 = yr1016_SE();
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
return;
}
if ((F.p2697 == v1920)) {
yr2646_NArgs(F.p2698, INT64_C(2));
yr2667_StdVar(yr2639_Arg(F.p2698, INT64_C(1)), v801, &F.v6160, &F.v6170);
yr2091_Expr(yr2639_Arg(F.p2698, INT64_C(2)), ((*(yR100 *)rt_nil_check(F.v6170))).f_elem, &F.v6162, &F.v6172);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2698))).f_line, ((*(yR100 *)rt_nil_check(F.v6170))).f_elem, F.v6172);
if ((yr1744_Deep(F.v6172) || ((((*(yR100 *)rt_nil_check(F.v6172))).f_kind == v798)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2698))).f_line, y_str("files of this implementation hold no arrays or pointers", 55));
}
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(yr1750_CType(((*(yR100 *)rt_nil_check(F.v6170))).f_elem));
yr997_SA(y_str(" pv = ", 6));
yr1004_ST(yr2040_Convert(F.v6162, ((*(yR100 *)rt_nil_check(F.v6170))).f_elem, F.v6172));
yr997_SA(y_str("; y_put(&", 9));
yr1004_ST(F.v6160);
yr997_SA(y_str(", &pv, sizeof pv); })", 21));
F.p2700 = yr1016_SE();
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
return;
}
if ((F.p2697 == v1926)) {
F.v6178 = yr1260_Count(((*(yR95 *)rt_nil_check(F.p2698))).f_a);
if ((((F.v6178 < INT64_C(5))) || ((!((rt_mod((rt_sub(F.v6178, INT64_C(2))), INT64_C(3))) == INT64_C(0)))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2698))).f_line, y_str("MOVE takes an object, an index and triples", 42));
}
yr2667_StdVar(yr2639_Arg(F.p2698, INT64_C(1)), v828, &F.v6160, &F.v6170);
if (((!((((((*(yR100 *)rt_nil_check(F.v6170))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.v6170))).f_kind == v813))))) || ((!(((*(yR100 *)rt_nil_check(F.v6170))).f_nidx == INT64_C(1)))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2698))).f_line, y_str("MOVE works on one-dimensional arrays", 36));
}
F.v6162 = yr2684_IntArg(yr2639_Arg(F.p2698, INT64_C(2)));
F.v6168 = yr1146_Fresh(y_str("at", 2));
yr986_SB();
yr997_SA(y_str("({ rt_int ", 10));
yr1004_ST(F.v6168);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.v6162);
yr997_SA(y_str(";", 1));
F.p2700 = yr1016_SE();
F.v6180 = INT64_C(3);
while ((F.v6180 < F.v6178)) {
yr2091_Expr(yr2639_Arg(F.p2698, F.v6180), ((*(yR100 *)rt_nil_check(F.v6170))).f_elem, &F.v6164, &F.v6174);
if (((!yr1732_IsArrayLike(F.v6174)) || (!yr1768_SameType(((*(yR100 *)rt_nil_check(F.v6170))).f_elem, ((*(yR100 *)rt_nil_check(F.v6174))).f_elem)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2698))).f_line, y_str("MOVE: the components differ in type", 35));
}
F.v6166 = yr2684_IntArg(yr2639_Arg(F.p2698, rt_range(rt_add(F.v6180, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v6162 = yr2684_IntArg(yr2639_Arg(F.p2698, rt_range(rt_add(F.v6180, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr986_SB();
yr1004_ST(F.p2700);
yr997_SA(y_str(" { rt_int mi = ", 15));
yr1004_ST(F.v6166);
yr997_SA(y_str(", mj = ", 7));
yr1004_ST(F.v6162);
yr997_SA(y_str("; y_move(&", 10));
yr1004_ST(F.v6160);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6168);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6164);
yr997_SA(y_str(", mi, mj, ", 10));
yr1004_ST(yr1756_DescOf(((*(yR100 *)rt_nil_check(F.v6170))).f_elem));
yr997_SA(y_str("); if (mj >= mi) ", 17));
yr1004_ST(F.v6168);
yr997_SA(y_str(" += mj - mi + 1; }", 18));
F.p2700 = yr1016_SE();
F.v6180 = rt_range(rt_add(F.v6180, INT64_C(3)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.p2700 = yr2437_Join(F.p2700, yr1021_T(y_str(" })", 3)), INT64_C(0));
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
return;
}
if ((((F.p2697 == v1929)) || ((F.p2697 == v1932)))) {
yr2646_NArgs(F.p2698, INT64_C(2));
F.v6160 = yr2407_Cond(yr2639_Arg(F.p2698, INT64_C(1)));
F.v6162 = yr2407_Cond(yr2639_Arg(F.p2698, INT64_C(2)));
F.p2701 = v1685;
if ((F.p2697 == v1929)) {
F.p2700 = yr2150_Infix(yr2072_Paren(yr2150_Infix(F.v6160, y_str("!=", 2), yr1021_T(y_str("0", 1)))), y_str("&", 1), yr2072_Paren(yr2150_Infix(F.v6162, y_str("!=", 2), yr1021_T(y_str("0", 1)))));
} else {
F.p2700 = yr2150_Infix(yr2072_Paren(yr2150_Infix(F.v6160, y_str("!=", 2), yr1021_T(y_str("0", 1)))), y_str("|", 1), yr2072_Paren(yr2150_Infix(F.v6162, y_str("!=", 2), yr1021_T(y_str("0", 1)))));
}
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
return;
}
if ((F.p2697 == v1935)) {
yr2646_NArgs(F.p2698, INT64_C(1));
F.p2700 = yr2653_Call1(y_str("rt_delay", 8), yr2684_IntArg(yr2639_Arg(F.p2698, INT64_C(1))));
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
return;
}
if ((F.p2697 == v1938)) {
yr2646_NArgs(F.p2698, INT64_C(0));
F.p2701 = yr2135_Unbounded(v1683);
F.p2700 = yr1021_T(y_str("rt_time()", 9));
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
return;
}
if (((((F.p2697 == v1941)) || ((F.p2697 == v1944))) || ((F.p2697 == v1947)))) {
yr2667_StdVar(yr2639_Arg(F.p2698, INT64_C(1)), v807, &F.v6160, &F.v6170);
if ((F.p2697 == v1941)) {
if ((yr1260_Count(((*(yR95 *)rt_nil_check(F.p2698))).f_a) == INT64_C(1))) {
F.v6162 = yr1021_T(y_str("1", 1));
} else {
yr2646_NArgs(F.p2698, INT64_C(2));
F.v6162 = yr2684_IntArg(yr2639_Arg(F.p2698, INT64_C(2)));
}
F.p2700 = yr2141_Call2(y_str("y_wait", 6), yr2661_Addr(F.v6160), F.v6162);
} else {
yr2646_NArgs(F.p2698, INT64_C(1));
if ((F.p2697 == v1944)) {
F.p2700 = yr2653_Call1(y_str("y_send", 6), yr2661_Addr(F.v6160));
} else {
F.p2701 = v1685;
F.p2700 = yr2653_Call1(y_str("y_awaited", 9), yr2661_Addr(F.v6160));
}
}
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
return;
}
if (((((F.p2697 == v1950)) || ((F.p2697 == v1953))) || ((F.p2697 == v1956)))) {
yr2646_NArgs(F.p2698, INT64_C(1));
yr2676_NumArg(yr2639_Arg(F.p2698, INT64_C(1)), &F.v6160, &F.v6170);
F.p2701 = yr2135_Unbounded(v1683);
if ((((*(yR100 *)rt_nil_check(F.v6170))).f_kind == v774)) {
F.p2700 = F.v6160;
} else if ((F.p2697 == v1950)) {
F.p2700 = yr2653_Call1(y_str("y_floor", 7), F.v6160);
} else if ((F.p2697 == v1953)) {
F.p2700 = yr2653_Call1(y_str("y_ceiling", 9), F.v6160);
} else {
F.p2700 = yr2653_Call1(y_str("y_near_integer", 14), F.v6160);
}
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
return;
}
if ((F.p2697 == v1962)) {
yr2646_NArgs(F.p2698, INT64_C(1));
yr2676_NumArg(yr2639_Arg(F.p2698, INT64_C(1)), &F.v6160, &F.v6170);
F.p2701 = v1695;
F.p2700 = yr2437_Join(yr1021_T(y_str("((double)(", 10)), F.v6160, yr1021_T(y_str("))", 2)));
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
return;
}
if ((F.p2697 == v1959)) {
yr2646_NArgs(F.p2698, INT64_C(2));
yr2676_NumArg(yr2639_Arg(F.p2698, INT64_C(1)), &F.v6160, &F.v6170);
yr2676_NumArg(yr2639_Arg(F.p2698, INT64_C(2)), &F.v6162, &F.v6172);
F.p2701 = v1697;
F.p2700 = yr2141_Call2(y_str("y_near_fixed", 12), yr2437_Join(yr1021_T(y_str("(double)(", 9)), F.v6160, yr1021_T(y_str(")", 1))), F.v6162);
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
return;
}
if ((F.p2697 == v1965)) {
yr2646_NArgs(F.p2698, INT64_C(3));
yr2676_NumArg(yr2639_Arg(F.p2698, INT64_C(1)), &F.v6160, &F.v6170);
yr2676_NumArg(yr2639_Arg(F.p2698, INT64_C(2)), &F.v6162, &F.v6172);
yr2676_NumArg(yr2639_Arg(F.p2698, INT64_C(3)), &F.v6164, &F.v6174);
F.p2701 = v1697;
F.p2700 = yr2437_Join(yr1021_T(y_str("y_fixed_div(", 12)), F.v6160, yr2437_Join(yr1021_T(y_str(", ", 2)), F.v6162, yr2437_Join(yr1021_T(y_str(", ", 2)), F.v6164, yr1021_T(y_str(")", 1)))));
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
return;
}
if (((((F.p2697 == v1968)) || ((F.p2697 == v1971))) || ((F.p2697 == v1974)))) {
yr2646_NArgs(F.p2698, INT64_C(1));
yr2667_StdVar(yr2639_Arg(F.p2698, INT64_C(1)), v810, &F.v6160, &F.v6170);
if ((F.p2697 == v1968)) {
F.p2700 = yr2653_Call1(y_str("rt_region_enter", 15), yr2661_Addr(F.v6160));
} else if ((F.p2697 == v1971)) {
F.p2700 = yr2653_Call1(y_str("rt_region_leave", 15), yr2661_Addr(F.v6160));
} else {
F.p2701 = v1685;
F.p2700 = yr2653_Call1(y_str("y_cond_claim", 12), yr2661_Addr(F.v6160));
}
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
return;
}
if ((F.p2697 == v1977)) {
yr2646_NArgs(F.p2698, INT64_C(0));
F.p2701 = yr2135_Unbounded(v1683);
F.p2700 = yr1021_T(y_str("y_self()", 8));
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
return;
}
if ((F.p2697 == v1980)) {
yr2646_NArgs(F.p2698, INT64_C(2));
F.p2700 = yr2141_Call2(y_str("y_change_priority", 17), yr2684_IntArg(yr2639_Arg(F.p2698, INT64_C(1))), yr2684_IntArg(yr2639_Arg(F.p2698, INT64_C(2))));
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
return;
}
if ((F.p2697 == v1983)) {
yr2646_NArgs(F.p2698, INT64_C(1));
F.p2700 = yr2653_Call1(y_str("y_raise_termination", 19), yr2684_IntArg(yr2639_Arg(F.p2698, INT64_C(1))));
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
return;
}
if ((F.p2697 == v1989)) {
yr2646_NArgs(F.p2698, INT64_C(1));
yr2690_CodeInsert(F.p2698);
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
return;
}
if ((((F.p2697 == v1992)) || ((F.p2697 == v1995)))) {
yr2646_NArgs(F.p2698, INT64_C(1));
yr2091_Expr(yr2639_Arg(F.p2698, INT64_C(1)), ((void *)0), &F.v6160, &F.v6170);
F.p2701 = yr2135_Unbounded(v1683);
if ((F.p2697 == v1992)) {
F.p2700 = yr2437_Join(yr1021_T(y_str("((rt_int)(intptr_t)&(", 21)), F.v6160, yr1021_T(y_str("))", 2)));
} else {
F.p2700 = yr2437_Join(yr1021_T(y_str("((rt_int)sizeof(", 16)), F.v6160, yr1021_T(y_str("))", 2)));
}
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
return;
}
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2698))).f_line, ((*(yR95 *)rt_nil_check(F.p2698))).f_name, y_str(" is not translated", 18));
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2710_StdRep(yarr a_p2712, void * a_p2713) {
struct yf2714 F;
memset((void *)&F, 0, sizeof F);
F.p2712 = a_p2712;
F.p2713 = a_p2713;
F.v6376 = yr1588_NewSym(v840, yr1041_N(F.p2712));
((*(yR115 *)rt_nil_check(F.v6376))).f_rep = F.p2713;
yr1644_Define(F.v6376, INT64_C(0));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2718_StdOp(yarr a_p2720, rt_int a_p2721) {
struct yf2722 F;
memset((void *)&F, 0, sizeof F);
F.p2720 = a_p2720;
F.p2721 = a_p2721;
F.v6382 = yr1588_NewSym(v861, yr1041_N(F.p2720));
((*(yR115 *)rt_nil_check(F.v6382))).f_mval = F.p2721;
yr1644_Define(F.v6382, INT64_C(0));
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2726_LitList(yarr a_p2728, yarr a_p2729, yarr a_p2730, rt_int a_p2731) {
struct yf2732 F;
memset((void *)&F, 0, sizeof F);
F.p2728 = a_p2728;
F.p2729 = a_p2729;
F.p2730 = a_p2730;
F.p2731 = a_p2731;
F.v6390 = ((void *)0);
F.v6392 = ((void *)0);
F.v6394 = ((void *)0);
F.v6394 = yr1245_NewNode(v639, INT64_C(0));
((*(yR95 *)rt_nil_check(F.v6394))).f_name = yr1041_N(F.p2728);
yr1252_Link(&F.v6390, &F.v6392, F.v6394);
F.v6394 = yr1245_NewNode(v639, INT64_C(0));
((*(yR95 *)rt_nil_check(F.v6394))).f_name = yr1041_N(F.p2729);
yr1252_Link(&F.v6390, &F.v6392, F.v6394);
if (F.p2731) {
F.v6394 = yr1245_NewNode(v639, INT64_C(0));
((*(yR95 *)rt_nil_check(F.v6394))).f_name = yr1041_N(F.p2730);
yr1252_Link(&F.v6390, &F.v6392, F.v6394);
}
{ void * rv6398 = F.v6390;
return rv6398; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2736_Abstract(rt_int a_p2737, yarr a_p2739) {
struct yf2740 F;
memset((void *)&F, 0, sizeof F);
F.p2737 = a_p2737;
F.p2739 = a_p2739;
F.v6403 = yr1707_NewRep(F.p2737, yr1041_N(F.p2739));
((*(yR100 *)rt_nil_check(F.v6403))).f_abstract = 1;
{ void * rv6405 = F.v6403;
return rv6405; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2744_Predefine(void) {
struct yf2745 F;
memset((void *)&F, 0, sizeof F);
yr1595_OpenScope(0);
((void * *)(v2531).p)[y_ix1(v2531, v1570)] = ((void *)0);
v1683 = yr2736_Abstract(v774, y_str("INTEGER", 7));
v1697 = yr2736_Abstract(v777, y_str("FIXED", 5));
v1695 = yr2736_Abstract(v780, y_str("FLOATING", 8));
v1699 = yr1707_NewRep(v807, yr1041_N(y_str("SIGNAL", 6)));
v1701 = yr1707_NewRep(v810, yr1041_N(y_str("SEMAPHORE", 9)));
v1689 = yr1707_NewRep(v822, yr1041_N(y_str("no value", 8)));
v1703 = yr1707_NewRep(v828, yr1041_N(y_str("any", 3)));
v1685 = yr1707_NewRep(v783, yr1041_N(y_str("BOOLEAN", 7)));
((*(yR100 *)rt_nil_check(v1685))).f_lits = yr2726_LitList(y_str("FALSE", 5), y_str("TRUE", 4), y_str("", 0), 0);
((*(yR100 *)rt_nil_check(v1685))).f_nlits = INT64_C(2);
yr1811_SetRange(v1685, INT64_C(0), INT64_C(1));
yr1805_DefineLits(v1685);
v1687 = yr1707_NewRep(v789, yr1041_N(y_str("ASCII", 5)));
((*(yR100 *)rt_nil_check(v1687))).f_ordered = 1;
((*(yR100 *)rt_nil_check(v1687))).f_nlits = INT64_C(128);
yr1811_SetRange(v1687, INT64_C(0), INT64_C(127));
v2706 = yr1707_NewRep(v786, yr1041_N(y_str("OPEN_MODE", 9)));
((*(yR100 *)rt_nil_check(v2706))).f_lits = yr2726_LitList(y_str("READ", 4), y_str("WRITE", 5), y_str("APPEND", 6), 1);
((*(yR100 *)rt_nil_check(v2706))).f_nlits = INT64_C(3);
yr1811_SetRange(v2706, INT64_C(0), INT64_C(2));
yr1805_DefineLits(v2706);
yr2710_StdRep(y_str("INTEGER", 7), v1683);
yr2710_StdRep(y_str("FIXED", 5), v1697);
yr2710_StdRep(y_str("FLOATING", 8), v1695);
yr2710_StdRep(y_str("BOOLEAN", 7), v1685);
yr2710_StdRep(y_str("SIGNAL", 6), v1699);
yr2710_StdRep(y_str("SEMAPHORE", 9), v1701);
yr2710_StdRep(y_str("ASCII", 5), v1687);
yr2710_StdRep(y_str("STANDARD_ALPHABET", 17), v1687);
yr2710_StdRep(y_str("OPEN_MODE", 9), v2706);
yr2718_StdOp(y_str("LOW", 3), v1890);
yr2718_StdOp(y_str("HIGH", 4), v1893);
yr2718_StdOp(y_str("SUCC", 4), v1896);
yr2718_StdOp(y_str("PRED", 4), v1899);
yr2718_StdOp(y_str("FIRST", 5), v1902);
yr2718_StdOp(y_str("LAST", 4), v1905);
yr2718_StdOp(y_str("NEW", 3), v1908);
yr2718_StdOp(y_str("OPEN", 4), v1911);
yr2718_StdOp(y_str("CLOSE", 5), v1914);
yr2718_StdOp(y_str("GET", 3), v1917);
yr2718_StdOp(y_str("PUT", 3), v1920);
yr2718_StdOp(y_str("CHECK_EOF", 9), v1923);
yr2718_StdOp(y_str("MOVE", 4), v1926);
yr2718_StdOp(y_str("AND_LONG", 8), v1929);
yr2718_StdOp(y_str("OR_LONG", 7), v1932);
yr2718_StdOp(y_str("DELAY", 5), v1935);
yr2718_StdOp(y_str("CLOCK_TIME", 10), v1938);
yr2718_StdOp(y_str("WAIT", 4), v1941);
yr2718_StdOp(y_str("SEND", 4), v1944);
yr2718_StdOp(y_str("AWAITED", 7), v1947);
yr2718_StdOp(y_str("FLOOR", 5), v1950);
yr2718_StdOp(y_str("CEILING", 7), v1953);
yr2718_StdOp(y_str("NEAR_INTEGER", 12), v1956);
yr2718_StdOp(y_str("NEAR_FIXED", 10), v1959);
yr2718_StdOp(y_str("NEAR_FLOATING", 13), v1962);
yr2718_StdOp(y_str("FIXED_DIV", 9), v1965);
yr2718_StdOp(y_str("CLAIM", 5), v1968);
yr2718_StdOp(y_str("RELEASE", 7), v1971);
yr2718_StdOp(y_str("CONDITIONAL_CLAIM", 17), v1974);
yr2718_StdOp(y_str("PROCESS_IDENTITY", 16), v1977);
yr2718_StdOp(y_str("CHANGE_PRIORITY", 15), v1980);
yr2718_StdOp(y_str("RAISE_PROCESS_TERMINATION", 25), v1983);
yr2718_StdOp(y_str("FREE_POINTER", 12), v1986);
yr2718_StdOp(y_str("C_CODE_INSERT", 13), v1989);
yr2718_StdOp(y_str("ADDR", 4), v1992);
yr2718_StdOp(y_str("EXTENT", 6), v1995);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2749_Translate(void) {
struct yf2750 F;
memset((void *)&F, 0, sizeof F);
F.v6483 = v2708;
yr1595_OpenScope(0);
((void * *)(v2531).p)[y_ix1(v2531, v1570)] = ((void *)0);
v1576 = INT64_C(0);
while ((!(F.v6483 == ((void *)0)))) {
yr2566_CompileModule(F.v6483);
F.v6483 = ((*(yR95 *)rt_nil_check(F.v6483))).f_next;
}
yr2590_AwaitProcesses();
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2754_WriteProgram(void) {
struct yf2755 F;
memset((void *)&F, 0, sizeof F);
yr1077_PutS(&v954, y_str("static void y_elaborate(void) {", 31));
yr1085_Append(&v954, &v956);
yr1077_PutS(&v954, y_str("}", 1));
yr1077_PutS(&v954, y_str("int main(int argc, char **argv) {", 33));
yr1077_PutS(&v954, y_str("y_lang();", 9));
yr1077_PutS(&v954, y_str("rt_init(argc, argv);", 20));
yr1077_PutS(&v954, y_str("y_elaborate();", 14));
yr1077_PutS(&v954, y_str("rt_main_done();", 15));
yr1077_PutS(&v954, y_str("return 0;", 9));
yr1077_PutS(&v954, y_str("}", 1));
yr1105_WriteTxt(yr1021_T(y_str("#include \"paleo.h\"", 18)));
({ unsigned char pv = 10; y_put(&v881, &pv, sizeof pv); });
yr1105_WriteTxt(yr1021_T(y_str("#include <math.h>", 17)));
({ unsigned char pv = 10; y_put(&v881, &pv, sizeof pv); });
yr1105_WriteTxt(yr1021_T(y_str("#include <string.h>", 19)));
({ unsigned char pv = 10; y_put(&v881, &pv, sizeof pv); });
yr1105_WriteTxt(yr1021_T(y_str("#include <stdlib.h>", 19)));
({ unsigned char pv = 10; y_put(&v881, &pv, sizeof pv); });
yr1111_WriteBuf(v942);
yr1111_WriteBuf(v944);
yr1111_WriteBuf(v946);
yr1111_WriteBuf(v948);
yr1111_WriteBuf(v950);
yr1111_WriteBuf(v952);
yr1111_WriteBuf(v954);
return;
rt_raise(Y_X_NO_RETURN);
}
static void y_elaborate(void) {
{ static const size_t o[] = {offsetof(yR95, f_kind), offsetof(yR95, f_line), offsetof(yR95, f_ival), offsetof(yR95, f_flag), offsetof(yR95, f_name), offsetof(yR95, f_text), offsetof(yR95, f_a), offsetof(yR95, f_b), offsetof(yR95, f_c), offsetof(yR95, f_d), offsetof(yR95, f_e), offsetof(yR95, f_next), offsetof(yR95, f_rep), offsetof(yR95, f_sym), 0}; const ydesc **f = rt_alloc(15 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_int; f[2] = &y_d_int; f[3] = &y_d_int; f[4] = &y_d_int; f[5] = &y_d_int; f[6] = &y_d_ptr; f[7] = &y_d_ptr; f[8] = &y_d_ptr; f[9] = &y_d_ptr; f[10] = &y_d_ptr; f[11] = &y_d_ptr; f[12] = &y_d_ptr; f[13] = &y_d_ptr; y_desc_record(&yd_96, sizeof(yR95), 14, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR100, f_kind), offsetof(yR100, f_tid), offsetof(yR100, f_tname), offsetof(yR100, f_lo), offsetof(yR100, f_hi), offsetof(yR100, f_mlo), offsetof(yR100, f_mhi), offsetof(yR100, f_hasm), offsetof(yR100, f_scale), offsetof(yR100, f_prec), offsetof(yR100, f_elem), offsetof(yR100, f_idx), offsetof(yR100, f_nidx), offsetof(yR100, f_link), offsetof(yR100, f_lits), offsetof(yR100, f_nlits), offsetof(yR100, f_fields), offsetof(yR100, f_selector), offsetof(yR100, f_cname), offsetof(yR100, f_dname), offsetof(yR100, f_dlevel), offsetof(yR100, f_deep), offsetof(yR100, f_abstract), offsetof(yR100, f_opaque), offsetof(yR100, f_opaqueops), offsetof(yR100, f_ordered), offsetof(yR100, f_forward), offsetof(yR100, f_fwdscope), offsetof(yR100, f_monitor), offsetof(yR100, f_serial), 0}; const ydesc **f = rt_alloc(31 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_int; f[2] = &y_d_int; f[3] = &y_d_int; f[4] = &y_d_int; f[5] = &y_d_int; f[6] = &y_d_int; f[7] = &y_d_int; f[8] = &y_d_int; f[9] = &y_d_int; f[10] = &y_d_ptr; f[11] = &y_d_ptr; f[12] = &y_d_int; f[13] = &y_d_ptr; f[14] = &y_d_ptr; f[15] = &y_d_int; f[16] = &y_d_ptr; f[17] = &y_d_ptr; f[18] = &y_d_int; f[19] = &y_d_int; f[20] = &y_d_int; f[21] = &y_d_int; f[22] = &y_d_int; f[23] = &y_d_int; f[24] = &y_d_int; f[25] = &y_d_int; f[26] = &y_d_int; f[27] = &y_d_int; f[28] = &y_d_ptr; f[29] = &y_d_int; y_desc_record(&yd_101, sizeof(yR100), 30, o, (const ydesc *const *)f); }
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
v876 = INT64_C(9223372036854775807);
y_init(&yd_139, &v883);
v885 = INT64_C(0);
y_init(&yd_147, &v888);
y_init(&yd_147, &v890);
v892 = INT64_C(0);
y_init(&yd_163, &v895);
v897 = 0;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4000000)}; y_desc_array(&yd_905, 1, lo, hi, &y_d_byte); }
y_init(&yd_905, &v907);
v909 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4000)}; y_desc_array(&yd_917, 1, lo, hi, &y_d_int); }
y_init(&yd_917, &v919);
v921 = INT64_C(0);
v924 = INT64_C(0);
{ rt_int lo[1] = {0}, hi[1] = {127}; y_desc_array(&yd_929, 1, lo, hi, &y_d_int); }
y_init(&yd_929, &v931);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(127)}; y_desc_array(&yd_938, 1, lo, hi, &y_d_byte); }
y_init(&yd_938, &v940);
v960 = INT64_C(0);
y_init(&yd_155, &v1153);
y_init(&yd_155, &v1155);
y_init(&yd_155, &v1157);
v1159 = INT64_C(0);
v1162 = INT64_C(0);
v1165 = INT64_C(0);
v1168 = INT64_C(0);
v1171 = INT64_C(1);
v1174 = INT64_C(0);
v1234 = INT64_C(1);
v1237 = ((void *)0);
v1239 = INT64_C(0);
v1242 = INT64_C(0);
y_init(&yd_171, &v1559);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1566, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1566, &v1568);
v1570 = INT64_C(-1);
v1573 = INT64_C(0);
v1576 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1584, 1, lo, hi, &y_d_int); }
y_init(&yd_1584, &v1586);
v1705 = ((void *)0);
v1890 = INT64_C(1);
v1893 = INT64_C(2);
v1896 = INT64_C(3);
v1899 = INT64_C(4);
v1902 = INT64_C(5);
v1905 = INT64_C(6);
v1908 = INT64_C(7);
v1911 = INT64_C(8);
v1914 = INT64_C(9);
v1917 = INT64_C(10);
v1920 = INT64_C(11);
v1923 = INT64_C(12);
v1926 = INT64_C(13);
v1929 = INT64_C(14);
v1932 = INT64_C(15);
v1935 = INT64_C(16);
v1938 = INT64_C(17);
v1941 = INT64_C(18);
v1944 = INT64_C(19);
v1947 = INT64_C(20);
v1950 = INT64_C(21);
v1953 = INT64_C(22);
v1956 = INT64_C(23);
v1959 = INT64_C(24);
v1962 = INT64_C(25);
v1965 = INT64_C(26);
v1968 = INT64_C(27);
v1971 = INT64_C(28);
v1974 = INT64_C(29);
v1977 = INT64_C(30);
v1980 = INT64_C(31);
v1983 = INT64_C(32);
v1986 = INT64_C(33);
v1989 = INT64_C(34);
v1992 = INT64_C(35);
v1995 = INT64_C(36);
v1998 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_2188, 1, lo, hi, &y_d_int); }
y_init(&yd_2188, &v2190);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_2197, 1, lo, hi, &y_d_ptr); }
y_init(&yd_2197, &v2199);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_2206, 1, lo, hi, &y_d_ptr); }
y_init(&yd_2206, &v2208);
v2210 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2295, 1, lo, hi, &y_d_int); }
y_init(&yd_2295, &v2297);
v2299 = INT64_C(0);
v2302 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2310, 1, lo, hi, &y_d_int); }
y_init(&yd_2310, &v2312);
v2314 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2322, 1, lo, hi, &y_d_int); }
y_init(&yd_2322, &v2324);
v2326 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2334, 1, lo, hi, &y_d_int); }
y_init(&yd_2334, &v2336);
y_init(&yd_2334, &v2338);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2345, 1, lo, hi, &y_d_int); }
y_init(&yd_2345, &v2347);
v2349 = INT64_C(0);
v2352 = INT64_C(0);
v2355 = ((void *)0);
v2357 = 0;
v2522 = ((void *)0);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_2529, 1, lo, hi, &y_d_ptr); }
y_init(&yd_2529, &v2531);
v2548 = INT64_C(0);
yr963_InitChars();
yr1177_InitWords();
v1239 = yr1041_N(y_str("FROM", 4));
v1242 = yr1041_N(y_str("DIMENSION", 9));
v1998 = yr1021_T(y_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP DEL SQ DQ ", 128));
y_open(&v881, y_str("OUTPUT", 6), 1);
yr1182_ReadSource();
yr1229_Lex();
v2708 = yr1554_ParseProgram();
yr2744_Predefine();
yr2749_Translate();
yr2754_WriteProgram();
y_close(&v881);
}
int main(int argc, char **argv) {
y_lang();
rt_init(argc, argv);
y_elaborate();
rt_main_done();
return 0;
}
