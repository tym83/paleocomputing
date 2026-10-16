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
struct yf1800;
struct yf1808;
struct yf1814;
struct yf1820;
struct yf1827;
struct yf1833;
struct yf1841;
struct yf1847;
struct yf1855;
struct yf1862;
struct yf1867;
struct yf1873;
struct yf1886;
struct yf1897;
struct yf1905;
struct yf1912;
struct yf2032;
struct yf2039;
struct yf2047;
struct yf2056;
struct yf2064;
struct yf2072;
struct yf2082;
struct yf2088;
struct yf2096;
struct yf2102;
struct yf2109;
struct yf2115;
struct yf2124;
struct yf2132;
struct yf2141;
struct yf2149;
struct yf2159;
struct yf2165;
struct yf2174;
struct yf2183;
struct yf2192;
struct yf2198;
struct yf2207;
struct yf2244;
struct yf2252;
struct yf2258;
struct yf2267;
struct yf2276;
struct yf2287;
struct yf2297;
struct yf2306;
struct yf2314;
struct yf2392;
struct yf2402;
struct yf2408;
struct yf2413;
struct yf2419;
struct yf2425;
struct yf2431;
struct yf2437;
struct yf2444;
struct yf2449;
struct yf2455;
struct yf2461;
struct yf2469;
struct yf2475;
struct yf2481;
struct yf2487;
struct yf2493;
struct yf2499;
struct yf2506;
struct yf2513;
struct yf2519;
struct yf2527;
struct yf2533;
struct yf2540;
struct yf2547;
struct yf2553;
struct yf2571;
struct yf2579;
struct yf2590;
struct yf2597;
struct yf2603;
struct yf2609;
struct yf2615;
struct yf2621;
struct yf2626;
struct yf2633;
struct yf2639;
struct yf2645;
struct yf2650;
struct yf2656;
struct yf2663;
struct yf2670;
struct yf2677;
struct yf2684;
struct yf2692;
struct yf2698;
struct yf2707;
struct yf2715;
struct yf2721;
struct yf2727;
struct yf2737;
struct yf2749;
struct yf2757;
struct yf2767;
struct yf2775;
struct yf2780;
struct yf2785;
struct yf2790;
struct yR95 { rt_int f_kind; rt_int f_line; rt_int f_ival; rt_int f_flag; rt_int f_name; rt_int f_text; void * f_a; void * f_b; void * f_c; void * f_d; void * f_e; void * f_next; void * f_rep; void * f_sym; };
struct yR100 { rt_int f_kind; rt_int f_tid; rt_int f_tname; rt_int f_lo; rt_int f_hi; rt_int f_mlo; rt_int f_mhi; rt_int f_hasm; rt_int f_scale; rt_int f_prec; void * f_elem; void * f_idx; rt_int f_nidx; void * f_link; void * f_lits; rt_int f_nlits; void * f_fields; void * f_selector; rt_int f_cname; rt_int f_dname; rt_int f_dlevel; rt_int f_deep; rt_int f_abstract; rt_int f_opaque; rt_int f_opaqueops; rt_int f_ordered; rt_int f_forward; rt_int f_fwdscope; void * f_monitor; rt_int f_serial; };
struct yR105 { rt_int f_name; void * f_rep; rt_int f_isconst; rt_int f_variant; void * f_labels; void * f_next; };
struct yR110 { rt_int f_name; rt_int f_cls; void * f_rep; rt_int f_cname; void * f_next; };
struct yR115 { rt_int f_kind; rt_int f_name; void * f_rep; rt_int f_cname; rt_int f_level; rt_int f_byref; rt_int f_readonly; rt_int f_mval; rt_int f_hasmv; void * f_params; rt_int f_nparams; void * f_ret; rt_int f_func; void * f_decl; rt_int f_depth; void * f_target; void * f_members; void * f_mnext; void * f_chain; void * f_stack; void * f_alt; void * f_monitor; rt_int f_serial; };
struct yR120 { void * f_syms; rt_int f_closed; void * f_module; rt_int f_level; void * f_deferred; void * f_up; };
struct yR125 { rt_int f_t; void * f_next; };
struct yR130 { void * f_head; void * f_tail; };
struct yf964 { void *up;
rt_int v2794;
rt_int c_2797;
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
rt_int lo2833;
rt_int hi2834;
rt_int c_2836;
};
struct yf1006 { void *up;
rt_int p1005;
rt_int v2842;
};
struct yf1012 { void *up;
rt_int p1011;
ydesc yd_2855;
yarr v2857;
rt_int v2859;
rt_int v2862;
};
struct yf1017 { void *up;
rt_int v2881;
rt_int lo2892;
rt_int hi2893;
rt_int c_2895;
};
struct yf1024 { void *up;
yarr p1023;
};
struct yf1031 { void *up;
rt_int p1029;
rt_int p1030;
rt_int v2906;
rt_int v2909;
rt_int v2911;
rt_int lo2916;
rt_int hi2917;
rt_int c_2919;
rt_int lo2937;
rt_int hi2938;
rt_int c_2940;
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
rt_int lo2968;
rt_int hi2969;
rt_int c_2971;
};
struct yf1059 { void *up;
rt_int p1056;
yarr p1058;
rt_int v2984;
rt_int lo3000;
rt_int hi3001;
rt_int c_3003;
};
struct yf1066 { void *up;
rt_int p1064;
rt_int p1065;
};
struct yf1073 { void *up;
yR130 * p1071;
rt_int p1072;
void * v3024;
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
rt_int v3038;
};
struct yf1113 { void *up;
yR130 p1112;
void * v3045;
};
struct yf1120 { void *up;
rt_int p1118;
rt_int p1119;
rt_int v3051;
};
struct yf1128 { void *up;
rt_int p1125;
yarr p1127;
};
struct yf1137 { void *up;
rt_int p1133;
rt_int p1134;
yarr p1136;
rt_int v3065;
};
struct yf1142 { void *up;
};
struct yf1149 { void *up;
yarr p1148;
rt_int v3073;
};
struct yf1178 { void *up;
rt_int v3077;
rt_int v3079;
rt_int v3081;
rt_int lo3098;
rt_int hi3099;
rt_int c_3101;
};
struct yf1183 { void *up;
unsigned char v3110;
};
struct yf1190 { void *up;
rt_int p1188;
rt_int p1189;
};
struct yf1196 { void *up;
rt_int p1195;
};
struct yf1201 { void *up;
rt_int v3127;
rt_int v3129;
};
struct yf1207 { void *up;
unsigned char p1206;
};
struct yf1214 { void *up;
yarr p1213;
};
struct yf1220 { void *up;
rt_int p1219;
rt_int v3158;
rt_int v3161;
rt_int v3163;
rt_int v3165;
rt_int v3167;
rt_int v3169;
rt_int v3172;
rt_int v3175;
rt_int v3178;
rt_int v3181;
rt_int v3184;
rt_int v3187;
rt_int lo3224;
rt_int hi3225;
rt_int c_3227;
rt_int lo3236;
rt_int hi3237;
rt_int c_3239;
rt_int lo3266;
rt_int hi3267;
rt_int c_3269;
rt_int lo3276;
rt_int hi3277;
rt_int c_3279;
};
struct yf1225 { void *up;
rt_int v3290;
rt_int v3292;
rt_int v3294;
rt_int v3296;
};
struct yf1230 { void *up;
unsigned char v3325;
rt_int v3327;
rt_int v3329;
rt_int v3331;
rt_int v3333;
rt_int v3335;
rt_int v3337;
rt_int v3339;
rt_int lo3411;
rt_int hi3412;
rt_int c_3414;
};
struct yf1248 { void *up;
rt_int p1246;
rt_int p1247;
void * v3430;
};
struct yf1256 { void *up;
void * * p1253;
void * * p1254;
void * p1255;
};
struct yf1262 { void *up;
void * p1261;
rt_int v3443;
void * v3446;
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
rt_int v3460;
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
rt_int v3483;
};
struct yf1318 { void *up;
rt_int p1317;
rt_int v3493;
};
struct yf1323 { void *up;
rt_int v3498;
};
struct yf1330 { void *up;
rt_int p1328;
rt_int p1329;
rt_int v3505;
};
struct yf1335 { void *up;
rt_int v3509;
};
struct yf1341 { void *up;
rt_int p1340;
void * v3519;
};
struct yf1346 { void *up;
void * v3526;
};
struct yf1351 { void *up;
void * v3531;
void * v3533;
void * v3535;
void * v3537;
rt_int v3539;
};
struct yf1356 { void *up;
rt_int v3548;
};
struct yf1361 { void *up;
void * v3554;
void * v3556;
void * v3558;
void * v3560;
};
struct yf1366 { void *up;
void * v3565;
void * v3567;
void * v3569;
void * v3571;
void * v3573;
};
struct yf1371 { void *up;
void * v3581;
void * v3583;
void * v3585;
};
struct yf1377 { void *up;
rt_int p1376;
void * v3591;
};
struct yf1383 { void *up;
rt_int p1382;
};
struct yf1390 { void *up;
void * * p1388;
void * * p1389;
rt_int v3612;
void * v3614;
void * v3616;
void * v3618;
};
struct yf1395 { void *up;
void * v3622;
void * v3624;
void * v3626;
rt_int v3628;
rt_int v3630;
rt_int v3632;
};
struct yf1401 { void *up;
void * p1400;
void * v3648;
void * v3650;
rt_int v3652;
};
struct yf1406 { void *up;
void * v3658;
};
struct yf1412 { void *up;
rt_int p1411;
rt_int v3670;
};
struct yf1417 { void *up;
rt_int v3678;
void * v3680;
};
struct yf1422 { void *up;
void * v3689;
void * v3691;
};
struct yf1427 { void *up;
void * v3695;
void * v3697;
void * v3699;
};
struct yf1432 { void *up;
void * v3704;
void * v3706;
void * v3708;
rt_int v3710;
};
struct yf1437 { void *up;
void * v3717;
void * v3719;
void * v3721;
void * v3723;
void * v3725;
void * v3727;
rt_int v3729;
rt_int v3731;
};
struct yf1442 { void *up;
void * v3748;
};
struct yf1447 { void *up;
rt_int v3753;
};
struct yf1453 { void *up;
rt_int p1452;
void * v3762;
void * v3764;
void * v3766;
rt_int v3768;
};
struct yf1458 { void *up;
void * v3776;
void * v3778;
void * v3780;
void * v3782;
void * v3784;
void * v3786;
rt_int v3788;
rt_int v3790;
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
void * v3844;
};
struct yf1509 { void *up;
rt_int p1507;
rt_int p1508;
rt_int v3850;
};
struct yf1514 { void *up;
void * v3854;
rt_int v3856;
rt_int v3858;
};
struct yf1519 { void *up;
void * v3862;
void * v3864;
rt_int v3866;
rt_int v3868;
};
struct yf1524 { void *up;
void * v3874;
rt_int v3876;
rt_int v3878;
};
struct yf1530 { void *up;
rt_int p1529;
rt_int v3884;
};
struct yf1535 { void *up;
void * v3889;
rt_int v3891;
rt_int v3893;
};
struct yf1540 { void *up;
void * v3897;
rt_int v3899;
rt_int v3901;
};
struct yf1545 { void *up;
void * v3922;
void * v3924;
void * v3926;
rt_int v3928;
};
struct yf1550 { void *up;
};
struct yf1555 { void *up;
void * v3935;
void * v3937;
};
struct yf1591 { void *up;
rt_int p1589;
rt_int p1590;
void * v3944;
};
struct yf1597 { void *up;
rt_int p1596;
void * v3959;
};
struct yf1602 { void *up;
void * v3965;
void * v3967;
void * v3969;
rt_int v3971;
};
struct yf1608 { void *up;
void * p1607;
};
struct yf1614 { void *up;
rt_int p1613;
void * v3983;
};
struct yf1620 { void *up;
rt_int p1619;
void * v3991;
};
struct yf1627 { void *up;
rt_int p1625;
rt_int p1626;
void * v4000;
void * v4002;
};
struct yf1633 { void *up;
void * p1632;
void * v4009;
};
struct yf1640 { void *up;
rt_int p1638;
void * p1639;
void * v4018;
};
struct yf1647 { void *up;
void * p1645;
rt_int p1646;
void * v4027;
rt_int v4029;
};
struct yf1654 { void *up;
rt_int p1652;
rt_int p1653;
rt_int v4037;
};
struct yf1660 { void *up;
rt_int p1659;
rt_int v4052;
};
struct yf1667 { void *up;
rt_int p1665;
rt_int p1666;
rt_int v4067;
};
struct yf1673 { void *up;
void * p1672;
rt_int v4076;
};
struct yf1679 { void *up;
void * p1678;
void * v4084;
};
struct yf1710 { void *up;
rt_int p1708;
rt_int p1709;
void * v4090;
};
struct yf1716 { void *up;
void * p1715;
void * v4115;
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
rt_int v4144;
};
struct yf1758 { void *up;
void * p1757;
rt_int v4169;
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
rt_int v4212;
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
struct yf1800 { void *up;
void * p1799;
};
struct yf1808 { void *up;
void * p1805;
yarr p1807;
rt_int v4234;
rt_int v4236;
};
struct yf1814 { void *up;
void * p1813;
};
struct yf1820 { void *up;
void * p1819;
};
struct yf1827 { void *up;
void * p1825;
void * p1826;
rt_int v4261;
rt_int v4263;
void * v4265;
void * v4267;
rt_int v4269;
rt_int v4271;
};
struct yf1833 { void *up;
void * p1832;
void * v4286;
void * v4288;
rt_int v4290;
};
struct yf1841 { void *up;
void * p1838;
rt_int p1839;
rt_int p1840;
};
struct yf1847 { void *up;
rt_int p1846;
rt_int v4305;
};
struct yf1855 { void *up;
void * p1852;
rt_int p1853;
rt_int p1854;
void * v4315;
void * v4317;
void * v4319;
void * v4321;
void * v4323;
rt_int v4325;
void * v4327;
rt_int v4329;
rt_int v4331;
};
struct yf1862 { void *up;
rt_int p1860;
void * p1861;
void * v4378;
void * v4380;
};
struct yf1867 { void *up;
void * v4384;
};
struct yf1873 { void *up;
void * p1872;
void * v4389;
rt_int v4391;
rt_int v4393;
};
struct yf1886 { void *up;
void * p1878;
void * * p1879;
rt_int p1880;
void * p1881;
rt_int p1882;
rt_int p1883;
void * p1884;
rt_int p1885;
void * v4418;
};
struct yf1897 { void *up;
void * p1891;
void * * p1892;
void * p1893;
rt_int p1894;
void * p1895;
rt_int p1896;
void * v4430;
void * v4432;
void * v4434;
};
struct yf1905 { void *up;
void * p1902;
void * p1903;
rt_int p1904;
void * v4442;
void * v4444;
void * v4446;
void * v4448;
rt_int v4450;
void * v4453;
rt_int v4455;
rt_int v4457;
};
struct yf1912 { void *up;
void * p1910;
rt_int p1911;
void * v4504;
};
struct yf2032 { void *up;
void * p2030;
rt_int p2031;
void * v4511;
rt_int v4513;
rt_int v4515;
rt_int v4517;
rt_int v4519;
rt_int lo4527;
rt_int hi4528;
rt_int c_4530;
};
struct yf2039 { void *up;
void * p2037;
void * p2038;
void * v4569;
void * v4571;
void * v4573;
rt_int v4575;
rt_int v4578;
};
struct yf2047 { void *up;
void * p2044;
rt_int p2045;
rt_int p2046;
rt_int v4603;
rt_int v4605;
};
struct yf2056 { void *up;
void * p2052;
rt_int p2053;
rt_int p2054;
rt_int * p2054_o;
rt_int p2055;
rt_int v4616;
rt_int v4618;
rt_int v4620;
ydesc yd_4627;
yarr v4629;
unsigned char v4631;
rt_int v4633;
rt_int lo4661;
rt_int hi4662;
rt_int c_4664;
};
struct yf2064 { void *up;
void * p2061;
rt_int p2062;
rt_int * p2062_o;
rt_int p2063;
rt_int * p2063_o;
void * v4699;
rt_int v4701;
rt_int v4703;
rt_int v4705;
rt_int v4707;
rt_int v4709;
void * v4711;
};
struct yf2072 { void *up;
rt_int p2069;
void * p2070;
void * p2071;
};
struct yf2082 { void *up;
rt_int p2077;
void * p2078;
rt_int p2079;
void * p2080;
rt_int p2081;
rt_int v4759;
rt_int v4761;
};
struct yf2088 { void *up;
void * p2087;
void * v4775;
void * v4777;
};
struct yf2096 { void *up;
void * p2093;
rt_int p2094;
rt_int * p2094_o;
void * p2095;
void * * p2095_o;
};
struct yf2102 { void *up;
rt_int p2101;
};
struct yf2109 { void *up;
void * p2107;
rt_int p2108;
void * v4807;
};
struct yf2115 { void *up;
void * p2114;
void * v4812;
};
struct yf2124 { void *up;
void * p2120;
void * p2121;
rt_int p2122;
rt_int * p2122_o;
void * p2123;
void * * p2123_o;
rt_int v4821;
void * v4823;
rt_int v4825;
rt_int v4827;
void * v4829;
void * v4831;
void * v4833;
rt_int v4835;
rt_int v4837;
};
struct yf2132 { void *up;
void * p2129;
void * p2130;
rt_int p2131;
void * v4878;
rt_int v4880;
rt_int v4882;
};
struct yf2141 { void *up;
void * p2137;
void * p2138;
rt_int p2139;
rt_int * p2139_o;
void * p2140;
void * * p2140_o;
void * v4894;
};
struct yf2149 { void *up;
void * p2146;
rt_int p2147;
rt_int * p2147_o;
void * p2148;
void * * p2148_o;
rt_int v4903;
rt_int v4905;
rt_int v4907;
void * v4909;
void * v4911;
void * v4913;
void * v4915;
rt_int v4917;
rt_int v4919;
};
struct yf2159 { void *up;
void * p2154;
rt_int p2155;
void * p2156;
rt_int p2157;
rt_int * p2157_o;
void * p2158;
void * * p2158_o;
};
struct yf2165 { void *up;
void * p2164;
void * v4954;
};
struct yf2174 { void *up;
yarr p2171;
rt_int p2172;
rt_int p2173;
};
struct yf2183 { void *up;
rt_int p2179;
yarr p2181;
rt_int p2182;
};
struct yf2192 { void *up;
rt_int p2188;
void * p2189;
rt_int p2190;
void * p2191;
rt_int v4982;
rt_int v4984;
void * v4986;
};
struct yf2198 { void *up;
void * p2197;
};
struct yf2207 { void *up;
void * p2203;
void * p2204;
rt_int p2205;
rt_int * p2205_o;
void * p2206;
void * * p2206_o;
rt_int v5016;
rt_int v5018;
rt_int v5020;
rt_int v5022;
void * v5024;
void * v5026;
void * v5028;
rt_int v5030;
};
struct yf2244 { void *up;
void * p2242;
void * p2243;
};
struct yf2252 { void *up;
void * p2249;
rt_int p2250;
rt_int p2251;
void * v5085;
void * v5087;
rt_int v5089;
rt_int v5091;
};
struct yf2258 { void *up;
void * p2257;
void * v5103;
};
struct yf2267 { void *up;
void * p2263;
void * p2264;
rt_int p2265;
rt_int * p2265_o;
rt_int p2266;
rt_int * p2266_o;
void * v5115;
void * v5117;
void * v5119;
};
struct yf2276 { void *up;
void * p2272;
rt_int p2273;
rt_int p2274;
rt_int p2275;
void * v5135;
rt_int v5137;
rt_int v5141;
};
struct yf2287 { void *up;
void * p2281;
rt_int p2282;
void * p2283;
void * p2284;
rt_int p2285;
rt_int * p2285_o;
void * p2286;
void * * p2286_o;
void * v5167;
void * v5169;
rt_int v5171;
rt_int v5173;
};
struct yf2297 { void *up;
void * p2292;
void * p2293;
rt_int p2294;
rt_int p2295;
rt_int * p2295_o;
void * p2296;
void * * p2296_o;
void * v5190;
void * v5192;
rt_int v5194;
rt_int v5196;
};
struct yf2306 { void *up;
void * p2302;
void * p2303;
rt_int p2304;
rt_int * p2304_o;
void * p2305;
void * * p2305_o;
void * v5208;
void * v5210;
rt_int v5212;
rt_int v5214;
rt_int v5216;
void * v5218;
rt_int v5220;
rt_int v5222;
rt_int v5224;
rt_int v5226;
rt_int v5228;
rt_int v5231;
void * v5233;
rt_int v5235;
};
struct yf2314 { void *up;
void * p2311;
rt_int p2312;
rt_int p2313;
void * v5297;
void * v5299;
rt_int v5301;
rt_int v5303;
};
struct yf2392 { void *up;
yarr p2390;
rt_int p2391;
rt_int v5312;
};
struct yf2402 { void *up;
yarr p2398;
rt_int p2399;
yarr p2401;
rt_int v5318;
};
struct yf2408 { void *up;
rt_int p2407;
};
struct yf2413 { void *up;
};
struct yf2419 { void *up;
rt_int p2418;
};
struct yf2425 { void *up;
void * p2424;
rt_int v5340;
rt_int v5342;
rt_int v5344;
void * v5346;
void * v5348;
rt_int v5350;
};
struct yf2431 { void *up;
void * p2430;
void * v5406;
};
struct yf2437 { void *up;
void * p2436;
rt_int v5410;
void * v5412;
};
struct yf2444 { void *up;
void * p2442;
void * p2443;
rt_int v5418;
rt_int v5420;
void * v5422;
void * v5424;
rt_int v5426;
};
struct yf2449 { void *up;
void * v5432;
rt_int v5434;
};
struct yf2455 { void *up;
void * p2454;
rt_int v5441;
rt_int v5443;
rt_int v5445;
rt_int v5447;
rt_int v5449;
rt_int v5451;
rt_int v5453;
void * v5455;
void * v5457;
void * v5459;
void * v5461;
rt_int v5463;
rt_int v5465;
rt_int v5467;
rt_int v5469;
void * v5471;
};
struct yf2461 { void *up;
void * p2460;
void * v5535;
rt_int v5537;
rt_int v5539;
rt_int v5541;
void * v5543;
};
struct yf2469 { void *up;
rt_int p2466;
rt_int p2467;
rt_int p2468;
};
struct yf2475 { void *up;
void * p2474;
rt_int v5575;
rt_int v5577;
rt_int v5579;
void * v5581;
void * v5583;
};
struct yf2481 { void *up;
void * p2480;
};
struct yf2487 { void *up;
rt_int p2486;
rt_int v5604;
rt_int v5606;
rt_int lo5610;
rt_int hi5611;
rt_int c_5613;
};
struct yf2493 { void *up;
void * p2492;
void * v5623;
rt_int v5625;
rt_int v5627;
};
struct yf2499 { void *up;
void * p2498;
rt_int v5644;
};
struct yf2506 { void *up;
void * p2504;
rt_int p2505;
void * v5652;
void * v5654;
void * v5656;
void * v5658;
void * v5660;
void * v5662;
void * v5664;
rt_int v5666;
rt_int v5668;
};
struct yf2513 { void *up;
void * p2511;
void * p2512;
void * v5711;
void * v5713;
void * v5715;
rt_int v5717;
};
struct yf2519 { void *up;
void * p2518;
void * v5725;
yR130 v5727;
yR130 v5729;
rt_int v5731;
rt_int v5733;
rt_int v5735;
rt_int v5737;
rt_int v5739;
rt_int v5741;
rt_int v5743;
void * v5745;
rt_int v5747;
void * v5749;
void * v5751;
rt_int v5753;
rt_int v5755;
yR130 v5757;
};
struct yf2527 { void *up;
void * p2524;
void * p2525;
rt_int p2526;
};
struct yf2533 { void *up;
void * p2532;
rt_int v5819;
void * v5821;
void * v5823;
void * v5825;
void * v5827;
rt_int v5829;
rt_int v5831;
rt_int v5833;
};
struct yf2540 { void *up;
void * p2538;
void * p2539;
void * v5847;
};
struct yf2547 { void *up;
void * p2545;
void * p2546;
};
struct yf2553 { void *up;
void * p2552;
void * v5854;
void * v5856;
void * v5858;
void * v5860;
};
struct yf2571 { void *up;
rt_int p2569;
void * p2570;
void * v5865;
};
struct yf2579 { void *up;
void * * p2576;
void * p2577;
rt_int p2578;
void * v5872;
void * v5874;
void * v5876;
};
struct yf2590 { void *up;
void * p2587;
void * * p2588;
rt_int p2589;
void * v5887;
void * v5889;
void * v5891;
rt_int v5893;
void * v5895;
rt_int v5897;
};
struct yf2597 { void *up;
void * p2595;
rt_int p2596;
void * v5922;
void * v5924;
void * v5926;
};
struct yf2603 { void *up;
void * p2602;
void * v5931;
void * v5933;
void * v5935;
void * v5937;
void * v5939;
void * v5941;
void * v5943;
void * v5945;
void * v5947;
void * v5949;
rt_int v5951;
rt_int v5953;
rt_int v5955;
};
struct yf2609 { void *up;
void * p2608;
void * v5988;
};
struct yf2615 { void *up;
void * p2614;
void * v5992;
void * v5994;
void * v5996;
void * v5998;
rt_int v6000;
rt_int v6002;
rt_int v6004;
rt_int v6006;
void * v6008;
rt_int lo6016;
rt_int hi6017;
rt_int c_6019;
};
struct yf2621 { void *up;
void * p2620;
void * v6031;
void * v6033;
};
struct yf2626 { void *up;
void * v6039;
};
struct yf2633 { void *up;
void * p2631;
void * p2632;
rt_int v6050;
rt_int v6052;
rt_int v6054;
void * v6056;
rt_int v6058;
rt_int v6060;
rt_int v6062;
rt_int v6064;
rt_int v6066;
rt_int v6068;
void * v6070;
void * v6072;
};
struct yf2639 { void *up;
void * p2638;
};
struct yf2645 { void *up;
void * p2644;
rt_int v6132;
};
struct yf2650 { void *up;
};
struct yf2656 { void *up;
void * p2655;
};
struct yf2663 { void *up;
void * p2661;
rt_int p2662;
};
struct yf2670 { void *up;
void * p2668;
void * p2669;
rt_int v6167;
rt_int v6169;
rt_int v6171;
};
struct yf2677 { void *up;
void * p2675;
rt_int p2676;
void * v6180;
rt_int v6182;
};
struct yf2684 { void *up;
void * p2682;
rt_int p2683;
};
struct yf2692 { void *up;
yarr p2690;
rt_int p2691;
};
struct yf2698 { void *up;
rt_int p2697;
};
struct yf2707 { void *up;
void * p2703;
rt_int p2704;
rt_int p2705;
rt_int * p2705_o;
void * p2706;
void * * p2706_o;
rt_int v6209;
};
struct yf2715 { void *up;
void * p2712;
rt_int p2713;
rt_int * p2713_o;
void * p2714;
void * * p2714_o;
};
struct yf2721 { void *up;
void * p2720;
rt_int v6225;
void * v6227;
};
struct yf2727 { void *up;
void * p2726;
void * v6233;
rt_int v6236;
rt_int v6238;
rt_int v6240;
rt_int v6242;
rt_int v6244;
rt_int v6246;
unsigned char v6248;
void * v6250;
ydesc yd_6257;
yarr v6259;
};
struct yf2737 { void *up;
rt_int p2732;
void * p2733;
rt_int p2734;
rt_int p2735;
rt_int * p2735_o;
void * p2736;
void * * p2736_o;
rt_int v6298;
rt_int v6300;
rt_int v6302;
rt_int v6304;
rt_int v6306;
void * v6308;
void * v6310;
void * v6312;
void * v6314;
rt_int v6316;
rt_int v6318;
rt_int v6320;
rt_int v6322;
void * v6324;
rt_int v6326;
rt_int lo6339;
rt_int hi6340;
rt_int c_6342;
};
struct yf2749 { void *up;
yarr p2747;
void * p2748;
void * v6516;
};
struct yf2757 { void *up;
yarr p2755;
rt_int p2756;
void * v6522;
};
struct yf2767 { void *up;
yarr p2763;
yarr p2764;
yarr p2765;
rt_int p2766;
void * v6530;
void * v6532;
void * v6534;
};
struct yf2775 { void *up;
rt_int p2772;
yarr p2774;
void * v6543;
};
struct yf2780 { void *up;
};
struct yf2785 { void *up;
void * v6623;
};
struct yf2790 { void *up;
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
static rt_int v1916;
static rt_int v1919;
static rt_int v1922;
static rt_int v1925;
static rt_int v1928;
static rt_int v1931;
static rt_int v1934;
static rt_int v1937;
static rt_int v1940;
static rt_int v1943;
static rt_int v1946;
static rt_int v1949;
static rt_int v1952;
static rt_int v1955;
static rt_int v1958;
static rt_int v1961;
static rt_int v1964;
static rt_int v1967;
static rt_int v1970;
static rt_int v1973;
static rt_int v1976;
static rt_int v1979;
static rt_int v1982;
static rt_int v1985;
static rt_int v1988;
static rt_int v1991;
static rt_int v1994;
static rt_int v1997;
static rt_int v2000;
static rt_int v2003;
static rt_int v2006;
static rt_int v2009;
static rt_int v2012;
static rt_int v2015;
static rt_int v2018;
static rt_int v2021;
static rt_int v2024;
static void * v2027;
static ydesc yd_2216;
static yarr v2218;
static ydesc yd_2225;
static yarr v2227;
static ydesc yd_2234;
static yarr v2236;
static rt_int v2238;
static ydesc yd_2323;
static yarr v2325;
static rt_int v2327;
static rt_int v2330;
static ydesc yd_2338;
static yarr v2340;
static rt_int v2342;
static ydesc yd_2350;
static yarr v2352;
static rt_int v2354;
static ydesc yd_2362;
static yarr v2364;
static yarr v2366;
static ydesc yd_2373;
static yarr v2375;
static rt_int v2377;
static rt_int v2380;
static void * v2383;
static rt_int v2385;
static void * v2557;
static ydesc yd_2564;
static yarr v2566;
static rt_int v2583;
static void * v2741;
static void * v2743;
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
static rt_int yr1798_IsLiteralNode(void * a_p1799);
static void yr1804_StoreBounds(void * a_p1805, yarr a_p1807);
static rt_int yr1812_LoText(void * a_p1813);
static rt_int yr1818_HiText(void * a_p1819);
static void yr1824_Qualify(void * a_p1825, void * a_p1826);
static void yr1831_DefineLits(void * a_p1832);
static void yr1837_SetRange(void * a_p1838, rt_int a_p1839, rt_int a_p1840);
static rt_int yr1845_NewTid(rt_int a_p1846);
static void * yr1851_MakeRep(void * a_p1852, rt_int a_p1853, rt_int a_p1854);
static void yr1859_ResolvePending(rt_int a_p1860, void * a_p1861);
static void yr1866_CheckPending(void);
static void yr1871_BuildArrayDesc(void * a_p1872);
static void yr1877_AddField(void * a_p1878, void * * a_p1879, rt_int a_p1880, void * a_p1881, rt_int a_p1882, rt_int a_p1883, void * a_p1884, rt_int a_p1885);
static void yr1890_AddFields(void * a_p1891, void * * a_p1892, void * a_p1893, rt_int a_p1894, void * a_p1895, rt_int a_p1896);
static void yr1901_MakeRecord(void * a_p1902, void * a_p1903, rt_int a_p1904);
static void * yr1909_FindField(void * a_p1910, rt_int a_p1911);
static rt_int yr2029_CharOrd(void * a_p2030, rt_int a_p2031);
static void * yr2036_AlphabetFor(void * a_p2037, void * a_p2038);
static rt_int yr2043_CharValue(void * a_p2044, rt_int a_p2045, rt_int a_p2046);
static rt_int yr2051_StringCodes(void * a_p2052, rt_int a_p2053, rt_int * a_p2054, rt_int a_p2055);
static void yr2060_Manifest(void * a_p2061, rt_int * a_p2062, rt_int * a_p2063);
static rt_int yr2068_Convert(rt_int a_p2069, void * a_p2070, void * a_p2071);
static void yr2076_Store(rt_int a_p2077, void * a_p2078, rt_int a_p2079, void * a_p2080, rt_int a_p2081);
static rt_int yr2086_IsVariable(void * a_p2087);
static void yr2092_LValue(void * a_p2093, rt_int * a_p2094, void * * a_p2095);
static rt_int yr2100_Paren(rt_int a_p2101);
static void * yr2106_Lit(void * a_p2107, rt_int a_p2108);
static void * yr2113_Qualifier(void * a_p2114);
static void yr2119_Expr(void * a_p2120, void * a_p2121, rt_int * a_p2122, void * * a_p2123);
static rt_int yr2128_VariantTest(void * a_p2129, void * a_p2130, rt_int a_p2131);
static void yr2136_NameExpr(void * a_p2137, void * a_p2138, rt_int * a_p2139, void * * a_p2140);
static void yr2145_IndexExpr(void * a_p2146, rt_int * a_p2147, void * * a_p2148);
static void yr2153_NegExpr(void * a_p2154, rt_int a_p2155, void * a_p2156, rt_int * a_p2157, void * * a_p2158);
static void * yr2163_Unbounded(void * a_p2164);
static rt_int yr2169_Call2(yarr a_p2171, rt_int a_p2172, rt_int a_p2173);
static rt_int yr2178_Infix(rt_int a_p2179, yarr a_p2181, rt_int a_p2182);
static rt_int yr2187_EqCode(rt_int a_p2188, void * a_p2189, rt_int a_p2190, void * a_p2191);
static rt_int yr2196_IsOrdered(void * a_p2197);
static void yr2202_BinExpr(void * a_p2203, void * a_p2204, rt_int * a_p2205, void * * a_p2206);
static rt_int yr2241_Fits(void * a_p2242, void * a_p2243);
static void * yr2248_Choose(void * a_p2249, rt_int a_p2250, rt_int a_p2251);
static rt_int yr2256_HidesStandard(void * a_p2257);
static void yr2262_CompileArgs(void * a_p2263, void * a_p2264, rt_int * a_p2265, rt_int * a_p2266);
static rt_int yr2271_CallCode(void * a_p2272, rt_int a_p2273, rt_int a_p2274, rt_int a_p2275);
static rt_int yr2280_UserOp(void * a_p2281, rt_int a_p2282, void * a_p2283, void * a_p2284, rt_int * a_p2285, void * * a_p2286);
static void yr2291_CallExpr(void * a_p2292, void * a_p2293, rt_int a_p2294, rt_int * a_p2295, void * * a_p2296);
static void yr2301_Denote(void * a_p2302, void * a_p2303, rt_int * a_p2304, void * * a_p2305);
static rt_int yr2310_VariantOf(void * a_p2311, rt_int a_p2312, rt_int a_p2313);
static void yr2388_Emit2(yarr a_p2390, rt_int a_p2391);
static void yr2396_Emit3(yarr a_p2398, rt_int a_p2399, yarr a_p2401);
static void yr2406_PopTo(rt_int a_p2407);
static void yr2412_LeaveBlock(void);
static rt_int yr2417_RaiseCode(rt_int a_p2418);
static void yr2423_BlockStatements(void * a_p2424);
static void yr2429_Statements(void * a_p2430);
static rt_int yr2435_Cond(void * a_p2436);
static rt_int yr2441_Label(void * a_p2442, void * a_p2443);
static void yr2448_CopyOut(void);
static void yr2453_Statement(void * a_p2454);
static void yr2459_ForStatement(void * a_p2460);
static rt_int yr2465_Join(rt_int a_p2466, rt_int a_p2467, rt_int a_p2468);
static void yr2473_ReturnStatement(void * a_p2474);
static void yr2479_BeginStatement(void * a_p2480);
static rt_int yr2485_RoutineCName(rt_int a_p2486);
static void * yr2491_FormalRep(void * a_p2492);
static rt_int yr2497_ParamCType(void * a_p2498);
static void yr2503_RoutineHeader(void * a_p2504, rt_int a_p2505);
static void * yr2510_SameSignature(void * a_p2511, void * a_p2512);
static void yr2517_RoutineBody(void * a_p2518);
static void yr2523_DeclareStorage(void * a_p2524, void * a_p2525, rt_int a_p2526);
static void yr2531_SimpleDecl(void * a_p2532);
static void yr2537_NoteAlphabet(void * a_p2538, void * a_p2539);
static void yr2544_AtLocation(void * a_p2545, void * a_p2546);
static void yr2551_Declarations(void * a_p2552);
static void * yr2568_Alias(rt_int a_p2569, void * a_p2570);
static void yr2575_AddLits(void * * a_p2576, void * a_p2577, rt_int a_p2578);
static void yr2586_ResolveItem(void * a_p2587, void * * a_p2588, rt_int a_p2589);
static void yr2594_DefineAll(void * a_p2595, rt_int a_p2596);
static void yr2601_CompileModule(void * a_p2602);
static void yr2607_DeclareTemplate(void * a_p2608);
static void yr2613_Instantiate(void * a_p2614);
static void yr2619_DeclareProcess(void * a_p2620);
static void yr2625_AwaitProcesses(void);
static void yr2630_Activate(void * a_p2631, void * a_p2632);
static rt_int yr2637_MonitorPath(void * a_p2638);
static void yr2643_EnterMonitor(void * a_p2644);
static void yr2649_LeaveMonitor(void);
static void yr2654_TerminateStatement(void * a_p2655);
static void yr2660_DeclareSignal(void * a_p2661, rt_int a_p2662);
static void yr2667_DeviceSignal(void * a_p2668, void * a_p2669);
static void * yr2674_Arg(void * a_p2675, rt_int a_p2676);
static void yr2681_NArgs(void * a_p2682, rt_int a_p2683);
static rt_int yr2688_Call1(yarr a_p2690, rt_int a_p2691);
static rt_int yr2696_Addr(rt_int a_p2697);
static void yr2702_StdVar(void * a_p2703, rt_int a_p2704, rt_int * a_p2705, void * * a_p2706);
static void yr2711_NumArg(void * a_p2712, rt_int * a_p2713, void * * a_p2714);
static rt_int yr2719_IntArg(void * a_p2720);
static void yr2725_CodeInsert(void * a_p2726);
static void yr2731_StdCall(rt_int a_p2732, void * a_p2733, rt_int a_p2734, rt_int * a_p2735, void * * a_p2736);
static void yr2745_StdRep(yarr a_p2747, void * a_p2748);
static void yr2753_StdOp(yarr a_p2755, rt_int a_p2756);
static void * yr2761_LitList(yarr a_p2763, yarr a_p2764, yarr a_p2765, rt_int a_p2766);
static void * yr2771_Abstract(rt_int a_p2772, yarr a_p2774);
static void yr2779_Predefine(void);
static void yr2784_Translate(void);
static void yr2789_WriteProgram(void);
static void yr963_InitChars(void) {
struct yf964 F;
memset((void *)&F, 0, sizeof F);
F.v2794 = INT64_C(0);
{ rt_int hi2799 = 127;
for (rt_int i2798 = 0; i2798 <= hi2799; i2798++) { F.c_2797 = i2798;
((rt_int *)(v931).p)[y_ix1(v931, F.c_2797)] = F.v2794;
((unsigned char *)(v940).p)[y_ix1(v940, F.v2794)] = F.c_2797;
F.v2794 = rt_range(rt_add(F.v2794, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i2798 == hi2799) break;
}}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr968_IsLetter(unsigned char a_p969) {
struct yf970 F;
memset((void *)&F, 0, sizeof F);
F.p969 = a_p969;
{ rt_int rv2809 = ((((((F.p969 >= 65)) && ((F.p969 <= 90)))) || ((((F.p969 >= 97)) && ((F.p969 <= 122))))) || ((F.p969 == 95)));
return rv2809; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr974_IsDigit(unsigned char a_p975) {
struct yf976 F;
memset((void *)&F, 0, sizeof F);
F.p975 = a_p975;
{ rt_int rv2814 = (((F.p975 >= 48)) && ((F.p975 <= 57)));
return rv2814; }
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
F.lo2833 = y_low(F.p999, INT64_C(1));
F.hi2834 = y_high(F.p999, INT64_C(1));
{ rt_int hi2838 = F.hi2834;
for (rt_int i2837 = F.lo2833; i2837 <= hi2838; i2837++) { F.c_2836 = i2837;
yr991_SC(((unsigned char *)(F.p999).p)[y_ix1(F.p999, F.c_2836)]);
if (i2837 == hi2838) break;
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
F.v2842 = ((rt_int *)(v888).p)[y_ix1(v888, F.p1005)];
while ((F.v2842 < (rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1005)], ((rt_int *)(v890).p)[y_ix1(v890, F.p1005)])))) {
yr991_SC(((unsigned char *)(v883).p)[y_ix1(v883, F.v2842)]);
F.v2842 = rt_range(rt_add(F.v2842, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1010_SI(rt_int a_p1011) {
struct yf1012 F;
memset((void *)&F, 0, sizeof F);
F.p1011 = a_p1011;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(24)}; y_desc_array(&F.yd_2855, 1, lo, hi, &y_d_byte); }
y_init(&F.yd_2855, &F.v2857);
F.v2859 = INT64_C(0);
F.v2862 = F.p1011;
if ((F.v2862 < INT64_C(0))) {
yr991_SC(45);
F.v2862 = rt_range(rt_neg(F.v2862), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
for (;;) {
F.v2859 = rt_range(rt_add(F.v2859, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((unsigned char *)(F.v2857).p)[y_ix1(F.v2857, F.v2859)] = ((unsigned char *)(v940).p)[y_ix1(v940, rt_add((rt_mod(F.v2862, INT64_C(10))), INT64_C(48)))];
F.v2862 = rt_range(rt_div(F.v2862, INT64_C(10)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.v2862 == INT64_C(0))) {
goto yl_2866;
}
}
yl_2866: ;
while ((F.v2859 > INT64_C(0))) {
yr991_SC(((unsigned char *)(F.v2857).p)[y_ix1(F.v2857, F.v2859)]);
F.v2859 = rt_range(rt_sub(F.v2859, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1016_SE(void) {
struct yf1017 F;
memset((void *)&F, 0, sizeof F);
F.v2881 = ((rt_int *)(v919).p)[y_ix1(v919, v921)];
v921 = rt_range(rt_sub(v921, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v892 = rt_range(rt_add(v892, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v888).p)[y_ix1(v888, v892)] = rt_range(rt_add(v885, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v890).p)[y_ix1(v890, v892)] = rt_range(rt_sub(v909, F.v2881), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo2892 = rt_add(F.v2881, INT64_C(1));
F.hi2893 = v909;
{ rt_int hi2897 = F.hi2893;
for (rt_int i2896 = F.lo2892; i2896 <= hi2897; i2896++) { F.c_2895 = i2896;
yr980_PoolAdd(((unsigned char *)(v907).p)[y_ix1(v907, F.c_2895)]);
if (i2896 == hi2897) break;
}}
v909 = F.v2881;
{ rt_int rv2898 = rt_range(v892, INT64_C(0), INT64_C(4000000));
return rv2898; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1021_T(yarr a_p1023) {
struct yf1024 F;
memset((void *)&F, 0, sizeof F);
F.p1023 = a_p1023;
yr986_SB();
yr997_SA(F.p1023);
{ rt_int rv2901 = yr1016_SE();
return rv2901; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1028_Intern(rt_int a_p1029, rt_int a_p1030) {
struct yf1031 F;
memset((void *)&F, 0, sizeof F);
F.p1029 = a_p1029;
F.p1030 = a_p1030;
F.v2906 = INT64_C(0);
F.lo2916 = F.p1029;
F.hi2917 = rt_sub((rt_add(F.p1029, F.p1030)), INT64_C(1));
{ rt_int hi2921 = F.hi2917;
for (rt_int i2920 = F.lo2916; i2920 <= hi2921; i2920++) { F.c_2919 = i2920;
F.v2906 = rt_range(rt_mod((rt_add((rt_mul(F.v2906, INT64_C(31))), ((rt_int *)(v931).p)[y_ix1(v931, ((unsigned char *)(v883).p)[y_ix1(v883, F.c_2919)])])), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i2920 == hi2921) break;
}}
for (;;) {
if ((((rt_int *)(v895).p)[y_ix1(v895, F.v2906)] == INT64_C(0))) {
v892 = rt_range(rt_add(v892, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v888).p)[y_ix1(v888, v892)] = F.p1029;
((rt_int *)(v890).p)[y_ix1(v890, v892)] = F.p1030;
((rt_int *)(v895).p)[y_ix1(v895, F.v2906)] = rt_range(v892, INT64_C(0), INT64_C(4000000));
{ rt_int rv2931 = rt_range(v892, INT64_C(0), INT64_C(4000000));
return rv2931; }
}
F.v2909 = ((rt_int *)(v895).p)[y_ix1(v895, F.v2906)];
if ((((rt_int *)(v890).p)[y_ix1(v890, F.v2909)] == F.p1030)) {
F.v2911 = 1;
F.lo2937 = INT64_C(0);
F.hi2938 = rt_sub(F.p1030, INT64_C(1));
{ rt_int hi2942 = F.hi2938;
for (rt_int i2941 = F.lo2937; i2941 <= hi2942; i2941++) { F.c_2940 = i2941;
if ((!(((unsigned char *)(v883).p)[y_ix1(v883, rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.v2909)], F.c_2940))] == ((unsigned char *)(v883).p)[y_ix1(v883, rt_add(F.p1029, F.c_2940))]))) {
F.v2911 = 0;
}
if (i2941 == hi2942) break;
}}
if (F.v2911) {
{ rt_int rv2946 = rt_range(F.v2909, INT64_C(0), INT64_C(4000000));
return rv2946; }
}
}
F.v2906 = rt_range(rt_mod((rt_add(F.v2906, INT64_C(1))), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yl_2927: ;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1035_Name(rt_int a_p1036) {
struct yf1037 F;
memset((void *)&F, 0, sizeof F);
F.p1036 = a_p1036;
{ rt_int rv2953 = yr1028_Intern(((rt_int *)(v888).p)[y_ix1(v888, F.p1036)], ((rt_int *)(v890).p)[y_ix1(v890, F.p1036)]);
return rv2953; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1041_N(yarr a_p1043) {
struct yf1044 F;
memset((void *)&F, 0, sizeof F);
F.p1043 = a_p1043;
{ rt_int rv2956 = yr1035_Name(yr1021_T(F.p1043));
return rv2956; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1048_TEq(rt_int a_p1049, rt_int a_p1050) {
struct yf1051 F;
memset((void *)&F, 0, sizeof F);
F.p1049 = a_p1049;
F.p1050 = a_p1050;
if ((F.p1049 == F.p1050)) {
{ rt_int rv2961 = 1;
return rv2961; }
}
if ((!(((rt_int *)(v890).p)[y_ix1(v890, F.p1049)] == ((rt_int *)(v890).p)[y_ix1(v890, F.p1050)]))) {
{ rt_int rv2963 = 0;
return rv2963; }
}
F.lo2968 = INT64_C(0);
F.hi2969 = rt_sub(((rt_int *)(v890).p)[y_ix1(v890, F.p1049)], INT64_C(1));
{ rt_int hi2973 = F.hi2969;
for (rt_int i2972 = F.lo2968; i2972 <= hi2973; i2972++) { F.c_2971 = i2972;
if ((!(((unsigned char *)(v883).p)[y_ix1(v883, rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1049)], F.c_2971))] == ((unsigned char *)(v883).p)[y_ix1(v883, rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1050)], F.c_2971))]))) {
{ rt_int rv2977 = 0;
return rv2977; }
}
if (i2972 == hi2973) break;
}}
{ rt_int rv2979 = 1;
return rv2979; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1055_TStarts(rt_int a_p1056, yarr a_p1058) {
struct yf1059 F;
memset((void *)&F, 0, sizeof F);
F.p1056 = a_p1056;
F.p1058 = a_p1058;
F.v2984 = INT64_C(0);
if ((((rt_int *)(v890).p)[y_ix1(v890, F.p1056)] < (rt_add((rt_sub(y_high(F.p1058, INT64_C(1)), y_low(F.p1058, INT64_C(1)))), INT64_C(1))))) {
{ rt_int rv2994 = 0;
return rv2994; }
}
F.lo3000 = y_low(F.p1058, INT64_C(1));
F.hi3001 = y_high(F.p1058, INT64_C(1));
{ rt_int hi3005 = F.hi3001;
for (rt_int i3004 = F.lo3000; i3004 <= hi3005; i3004++) { F.c_3003 = i3004;
if ((!(((unsigned char *)(v883).p)[y_ix1(v883, rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1056)], F.v2984))] == ((unsigned char *)(F.p1058).p)[y_ix1(F.p1058, F.c_3003)]))) {
{ rt_int rv3008 = 0;
return rv3008; }
}
F.v2984 = rt_range(rt_add(F.v2984, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3004 == hi3005) break;
}}
{ rt_int rv3012 = 1;
return rv3012; }
rt_raise(Y_X_NO_RETURN);
}
static unsigned char yr1063_TChar(rt_int a_p1064, rt_int a_p1065) {
struct yf1066 F;
memset((void *)&F, 0, sizeof F);
F.p1064 = a_p1064;
F.p1065 = a_p1065;
{ unsigned char rv3019 = ((unsigned char *)(v883).p)[y_ix1(v883, rt_sub((rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1064)], F.p1065)), INT64_C(1)))];
return rv3019; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1070_Put(yR130 * a_p1071, rt_int a_p1072) {
struct yf1073 F;
memset((void *)&F, 0, sizeof F);
F.p1071 = a_p1071;
F.p1072 = a_p1072;
({ F.v3024 = rt_alloc(sizeof(yR125)); });
(*(yR125 *)rt_nil_check(F.v3024)) = ((yR125){ .f_t = F.p1072, .f_next = ((void *)0) });
if ((((*F.p1071)).f_head == ((void *)0))) {
((*F.p1071)).f_head = F.v3024;
} else {
((*(yR125 *)rt_nil_check(((*F.p1071)).f_tail))).f_next = F.v3024;
}
((*F.p1071)).f_tail = F.v3024;
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
F.v3038 = ((rt_int *)(v888).p)[y_ix1(v888, F.p1106)];
while ((F.v3038 < (rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1106)], ((rt_int *)(v890).p)[y_ix1(v890, F.p1106)])))) {
({ unsigned char pv = ((unsigned char *)(v883).p)[y_ix1(v883, F.v3038)]; y_put(&v881, &pv, sizeof pv); });
F.v3038 = rt_range(rt_add(F.v3038, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1111_WriteBuf(yR130 a_p1112) {
struct yf1113 F;
memset((void *)&F, 0, sizeof F);
F.p1112 = a_p1112;
F.v3045 = (F.p1112).f_head;
while ((!(F.v3045 == ((void *)0)))) {
yr1105_WriteTxt(((*(yR125 *)rt_nil_check(F.v3045))).f_t);
({ unsigned char pv = 10; y_put(&v881, &pv, sizeof pv); });
F.v3045 = ((*(yR125 *)rt_nil_check(F.v3045))).f_next;
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
F.v3051 = yr1016_SE();
yr1105_WriteTxt(F.v3051);
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
F.v3065 = yr1016_SE();
yr1117_Fail(F.p1133, F.v3065);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1141_NewSerial(void) {
struct yf1142 F;
memset((void *)&F, 0, sizeof F);
v924 = rt_range(rt_add(v924, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
{ rt_int rv3069 = v924;
return rv3069; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1146_Fresh(yarr a_p1148) {
struct yf1149 F;
memset((void *)&F, 0, sizeof F);
F.p1148 = a_p1148;
F.v3073 = yr1141_NewSerial();
yr986_SB();
yr997_SA(F.p1148);
yr1010_SI(F.v3073);
{ rt_int rv3074 = yr1016_SE();
return rv3074; }
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
F.v3081 = yr1016_SE();
v892 = INT64_C(0);
F.v3077 = ((rt_int *)(v888).p)[y_ix1(v888, F.v3081)];
F.lo3098 = ((rt_int *)(v888).p)[y_ix1(v888, F.v3081)];
F.hi3099 = rt_sub((rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.v3081)], ((rt_int *)(v890).p)[y_ix1(v890, F.v3081)])), INT64_C(1));
{ rt_int hi3103 = F.hi3099;
for (rt_int i3102 = F.lo3098; i3102 <= hi3103; i3102++) { F.c_3101 = i3102;
if ((((unsigned char *)(v883).p)[y_ix1(v883, F.c_3101)] == 32)) {
F.v3079 = yr1028_Intern(F.v3077, rt_range(rt_sub(F.c_3101, F.v3077), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v3077 = rt_range(rt_add(F.c_3101, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i3102 == hi3103) break;
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
({ unsigned char g; y_get(&v879, &g, sizeof g); F.v3110 = g; });
yr980_PoolAdd(F.v3110);
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
{ unsigned char rv3123 = 0;
return rv3123; }
}
{ unsigned char rv3124 = ((unsigned char *)(v883).p)[y_ix1(v883, F.p1195)];
return rv3124; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1200_EndsOperand(void) {
struct yf1201 F;
memset((void *)&F, 0, sizeof F);
if ((v1159 == INT64_C(0))) {
{ rt_int rv3132 = 0;
return rv3132; }
}
F.v3127 = ((rt_int *)(v1153).p)[y_ix1(v1153, v1159)];
F.v3129 = ((rt_int *)(v1155).p)[y_ix1(v1155, v1159)];
if ((((((((F.v3127 == v177)) || ((F.v3127 == v186))) || ((F.v3127 == v189))) || ((F.v3127 == v192))) || ((F.v3127 == v195))) || ((F.v3127 == v198)))) {
{ rt_int rv3134 = 1;
return rv3134; }
}
if ((F.v3127 == v183)) {
{ rt_int rv3135 = ((((F.v3129 == v567)) || ((F.v3129 == v573))) || ((F.v3129 == v588)));
return rv3135; }
}
if ((F.v3127 == v180)) {
{ rt_int rv3136 = (F.v3129 == v357);
return rv3136; }
}
{ rt_int rv3138 = 0;
return rv3138; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1205_DigitVal(unsigned char a_p1206) {
struct yf1207 F;
memset((void *)&F, 0, sizeof F);
F.p1206 = a_p1206;
if ((((F.p1206 >= 48)) && ((F.p1206 <= 57)))) {
{ rt_int rv3145 = rt_range(rt_sub(((rt_int *)(v931).p)[y_ix1(v931, F.p1206)], INT64_C(48)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return rv3145; }
}
if ((((F.p1206 >= 65)) && ((F.p1206 <= 70)))) {
{ rt_int rv3150 = rt_range(rt_sub(((rt_int *)(v931).p)[y_ix1(v931, F.p1206)], INT64_C(55)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return rv3150; }
}
{ rt_int rv3152 = INT64_C(99);
return rv3152; }
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
F.v3158 = INT64_C(10);
F.v3169 = 0;
F.v3172 = INT64_C(0);
F.v3175 = INT64_C(0);
F.v3178 = INT64_C(0);
F.v3181 = INT64_C(0);
F.v3184 = INT64_C(0);
if ((!(v1174 == INT64_C(0)))) {
F.v3158 = v1174;
}
v1174 = INT64_C(0);
F.v3161 = v1168;
while ((yr1205_DigitVal(yr1194_At(v1168)) < F.v3158)) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3163 = v1168;
F.v3165 = v1168;
F.v3167 = v1168;
if ((((yr1194_At(v1168) == 46)) && ((!(yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 46))))) {
F.v3169 = 1;
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3165 = v1168;
while ((yr1205_DigitVal(yr1194_At(v1168)) < F.v3158)) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3167 = v1168;
}
if ((yr1194_At(v1168) == 80)) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3181 = INT64_C(1);
if ((((((yr1194_At(v1168) == 45)) || ((yr1194_At(v1168) == 43)))) && yr974_IsDigit(yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))) {
if ((yr1194_At(v1168) == 45)) {
F.v3181 = INT64_C(-1);
}
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3178 = INT64_C(0);
while (yr974_IsDigit(yr1194_At(v1168))) {
F.v3178 = rt_range(rt_add((rt_mul(F.v3178, INT64_C(10))), yr1205_DigitVal(yr1194_At(v1168))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3178 = rt_range(rt_mul(F.v3178, F.v3181), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3172 = INT64_C(0);
F.lo3224 = F.v3161;
F.hi3225 = rt_sub(F.v3163, INT64_C(1));
{ rt_int hi3229 = F.hi3225;
for (rt_int i3228 = F.lo3224; i3228 <= hi3229; i3228++) { F.c_3227 = i3228;
F.v3172 = rt_range(rt_add((rt_mul(F.v3172, F.v3158)), yr1205_DigitVal(((unsigned char *)(v883).p)[y_ix1(v883, F.c_3227)])), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3228 == hi3229) break;
}}
F.v3184 = rt_range(rt_sub(F.v3167, F.v3165), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo3236 = F.v3165;
F.hi3237 = rt_sub(F.v3167, INT64_C(1));
{ rt_int hi3241 = F.hi3237;
for (rt_int i3240 = F.lo3236; i3240 <= hi3241; i3240++) { F.c_3239 = i3240;
F.v3172 = rt_range(rt_add((rt_mul(F.v3172, F.v3158)), yr1205_DigitVal(((unsigned char *)(v883).p)[y_ix1(v883, F.c_3239)])), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3240 == hi3241) break;
}}
yr986_SB();
yr997_SA(y_str("(", 1));
if (F.p1219) {
yr997_SA(y_str("-", 1));
}
yr997_SA(y_str("(double)", 8));
yr1010_SI(F.v3172);
yr997_SA(y_str(" * pow(", 7));
yr1010_SI(F.v3158);
yr997_SA(y_str(", ", 2));
yr1010_SI(rt_range(rt_sub(F.v3178, F.v3184), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr997_SA(y_str("))", 2));
F.v3187 = yr1016_SE();
yr1187_AddTok(v189, F.v3187);
return;
}
if (F.v3169) {
if ((!(F.v3158 == INT64_C(10)))) {
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
F.lo3266 = F.v3161;
F.hi3267 = rt_sub(v1168, INT64_C(1));
{ rt_int hi3271 = F.hi3267;
for (rt_int i3270 = F.lo3266; i3270 <= hi3271; i3270++) { F.c_3269 = i3270;
yr991_SC(((unsigned char *)(v883).p)[y_ix1(v883, F.c_3269)]);
if (i3270 == hi3271) break;
}}
F.v3187 = yr1016_SE();
yr1187_AddTok(v192, F.v3187);
return;
}
F.v3172 = INT64_C(0);
F.lo3276 = F.v3161;
F.hi3277 = rt_sub(F.v3163, INT64_C(1));
{ rt_int hi3281 = F.hi3277;
for (rt_int i3280 = F.lo3276; i3280 <= hi3281; i3280++) { F.c_3279 = i3280;
F.v3175 = yr1205_DigitVal(((unsigned char *)(v883).p)[y_ix1(v883, F.c_3279)]);
if ((F.v3172 > (rt_div((rt_sub(v876, F.v3175)), F.v3158)))) {
yr1211_LexError(y_str("integer literal too large", 25));
}
F.v3172 = rt_range(rt_add((rt_mul(F.v3172, F.v3158)), F.v3175), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3280 == hi3281) break;
}}
if (F.p1219) {
F.v3172 = rt_range(rt_neg(F.v3172), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yr1187_AddTok(v186, F.v3172);
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
F.v3292 = v1168;
F.v3294 = INT64_C(0);
F.v3296 = 1;
while (F.v3296) {
if (((((yr1194_At(F.v3292) == 32)) || ((yr1194_At(F.v3292) == 9))) || ((yr1194_At(F.v3292) == 13)))) {
F.v3292 = rt_range(rt_add(F.v3292, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr1194_At(F.v3292) == 10)) {
F.v3294 = rt_range(rt_add(F.v3294, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3292 = rt_range(rt_add(F.v3292, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v3296 = 0;
}
}
if ((!(yr1194_At(F.v3292) == 34))) {
goto yl_3297;
}
v1171 = rt_range(rt_add(v1171, F.v3294), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1168 = F.v3292;
}
yl_3297: ;
F.v3290 = yr1016_SE();
yr1187_AddTok(v198, F.v3290);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1229_Lex(void) {
struct yf1230 F;
memset((void *)&F, 0, sizeof F);
v1168 = v1162;
while ((v1168 <= v1165)) {
F.v3325 = ((unsigned char *)(v883).p)[y_ix1(v883, v1168)];
if ((F.v3325 == 10)) {
v1171 = rt_range(rt_add(v1171, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((((F.v3325 == 32)) || ((F.v3325 == 9))) || ((F.v3325 == 13))) || ((F.v3325 == 12)))) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v3325 == 40)) && ((yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 42)))) {
v1168 = rt_range(rt_add(v1168, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!((((yr1194_At(v1168) == 42)) && ((yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 41)))))) {
if ((((yr1194_At(v1168) == 10)) || ((v1168 > v1165)))) {
yr1211_LexError(y_str("a comment must close on its line", 32));
}
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1168 = rt_range(rt_add(v1168, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr974_IsDigit(F.v3325) || ((((v1174 == INT64_C(16))) && ((yr1205_DigitVal(F.v3325) < INT64_C(16))))))) {
yr1218_LexNumber(0);
} else if (((((((F.v3325 == 45)) || ((F.v3325 == 43)))) && (!yr1200_EndsOperand())) && ((yr974_IsDigit(yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || ((((v1174 == INT64_C(16))) && ((yr1205_DigitVal(yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) < INT64_C(16))))))))) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1218_LexNumber((F.v3325 == 45));
} else if (yr968_IsLetter(F.v3325)) {
F.v3327 = v1168;
while ((yr968_IsLetter(yr1194_At(v1168)) || yr974_IsDigit(yr1194_At(v1168)))) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3335 = yr1028_Intern(F.v3327, rt_range(rt_sub(v1168, F.v3327), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((F.v3335 == v222)) {
v1174 = INT64_C(2);
} else if ((F.v3335 == v225)) {
v1174 = INT64_C(8);
} else if ((F.v3335 == v228)) {
v1174 = INT64_C(10);
} else if ((F.v3335 == v231)) {
v1174 = INT64_C(16);
} else if ((F.v3335 <= v462)) {
yr1187_AddTok(v180, F.v3335);
} else {
yr1187_AddTok(v177, F.v3335);
}
} else if ((F.v3325 == 39)) {
F.v3327 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3329 = F.v3327;
while ((!(yr1194_At(F.v3329) == 39))) {
if (((((yr1194_At(F.v3329) == 10)) || ((yr1194_At(F.v3329) == 34))) || ((F.v3329 > v1165)))) {
yr1211_LexError(y_str("bad character literal", 21));
}
F.v3329 = rt_range(rt_add(F.v3329, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v3329 == F.v3327)) {
yr1211_LexError(y_str("empty character literal", 23));
}
F.v3335 = yr1028_Intern(F.v3327, rt_range(rt_sub(F.v3329, F.v3327), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1187_AddTok(v195, F.v3335);
v1168 = rt_range(rt_add(F.v3329, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v3325 == 34)) {
yr1224_LexString();
} else {
F.v3331 = INT64_C(0);
F.v3329 = rt_range(rt_add(v462, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((F.v3331 == INT64_C(0))) && ((F.v3329 <= v591)))) {
F.v3333 = ((rt_int *)(v890).p)[y_ix1(v890, F.v3329)];
F.v3339 = 1;
F.lo3411 = INT64_C(0);
F.hi3412 = rt_sub(F.v3333, INT64_C(1));
{ rt_int hi3416 = F.hi3412;
for (rt_int i3415 = F.lo3411; i3415 <= hi3416; i3415++) { F.c_3414 = i3415;
if ((!(yr1194_At(rt_range(rt_add(v1168, F.c_3414), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == ((unsigned char *)(v883).p)[y_ix1(v883, rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.v3329)], F.c_3414))]))) {
F.v3339 = 0;
}
if (i3415 == hi3416) break;
}}
if (F.v3339) {
F.v3331 = F.v3329;
}
F.v3329 = rt_range(rt_add(F.v3329, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v3331 == INT64_C(0))) {
yr1211_LexError(y_str("a character that is not in the language", 39));
}
yr1187_AddTok(v183, F.v3331);
v1168 = rt_range(rt_add(v1168, ((rt_int *)(v890).p)[y_ix1(v890, F.v3331)]), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
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
({ F.v3430 = rt_alloc(sizeof(yR95)); });
(*(yR95 *)rt_nil_check(F.v3430)) = ((yR95){ .f_kind = F.p1246, .f_line = F.p1247, .f_ival = INT64_C(0), .f_flag = INT64_C(0), .f_name = INT64_C(0), .f_text = INT64_C(0), .f_a = ((void *)0), .f_b = ((void *)0), .f_c = ((void *)0), .f_d = ((void *)0), .f_e = ((void *)0), .f_next = ((void *)0), .f_rep = ((void *)0), .f_sym = ((void *)0) });
{ void * rv3435 = F.v3430;
return rv3435; }
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
F.v3443 = INT64_C(0);
F.v3446 = F.p1261;
while ((!(F.v3446 == ((void *)0)))) {
F.v3443 = rt_range(rt_add(F.v3443, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3446 = ((*(yR95 *)rt_nil_check(F.v3446))).f_next;
}
{ rt_int rv3449 = F.v3443;
return rv3449; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1266_TK(void) {
struct yf1267 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv3451 = ((rt_int *)(v1153).p)[y_ix1(v1153, v1234)];
return rv3451; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1271_TV(void) {
struct yf1272 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv3453 = ((rt_int *)(v1155).p)[y_ix1(v1155, v1234)];
return rv3453; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1276_TLn(void) {
struct yf1277 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv3455 = ((rt_int *)(v1157).p)[y_ix1(v1157, v1234)];
return rv3455; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1281_IsAt(rt_int a_p1282, rt_int a_p1283) {
struct yf1284 F;
memset((void *)&F, 0, sizeof F);
F.p1282 = a_p1282;
F.p1283 = a_p1283;
F.v3460 = ((rt_int *)(v1153).p)[y_ix1(v1153, rt_add(v1234, F.p1282))];
{ rt_int rv3463 = (((((F.v3460 == v180)) || ((F.v3460 == v183)))) && ((((rt_int *)(v1155).p)[y_ix1(v1155, rt_add(v1234, F.p1282))] == F.p1283)));
return rv3463; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1288_Is(rt_int a_p1289) {
struct yf1290 F;
memset((void *)&F, 0, sizeof F);
F.p1289 = a_p1289;
{ rt_int rv3467 = yr1281_IsAt(INT64_C(0), F.p1289);
return rv3467; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1294_IsIdAt(rt_int a_p1295) {
struct yf1296 F;
memset((void *)&F, 0, sizeof F);
F.p1295 = a_p1295;
{ rt_int rv3471 = (((rt_int *)(v1153).p)[y_ix1(v1153, rt_add(v1234, F.p1295))] == v177);
return rv3471; }
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
{ rt_int rv3478 = 1;
return rv3478; }
}
{ rt_int rv3480 = 0;
return rv3480; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1311_TokText(void) {
struct yf1312 F;
memset((void *)&F, 0, sizeof F);
F.v3483 = yr1266_TK();
if ((((((F.v3483 == v177)) || ((F.v3483 == v180))) || ((F.v3483 == v183))) || ((F.v3483 == v195)))) {
{ rt_int rv3484 = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
return rv3484; }
}
if ((F.v3483 == v174)) {
{ rt_int rv3486 = yr1021_T(y_str("the end of the text", 19));
return rv3486; }
}
if ((F.v3483 == v186)) {
yr986_SB();
yr1010_SI(yr1271_TV());
{ rt_int rv3487 = yr1016_SE();
return rv3487; }
}
{ rt_int rv3489 = yr1021_T(y_str("a literal", 9));
return rv3489; }
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
F.v3493 = yr1016_SE();
yr1117_Fail(yr1276_TLn(), F.v3493);
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
F.v3498 = yr1016_SE();
yr1117_Fail(yr1276_TLn(), F.v3498);
}
F.v3498 = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
yr1300_Skip();
{ rt_int rv3500 = F.v3498;
return rv3500; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1327_CloseName(rt_int a_p1328, rt_int a_p1329) {
struct yf1330 F;
memset((void *)&F, 0, sizeof F);
F.p1328 = a_p1328;
F.p1329 = a_p1329;
if (((((yr1266_TK() == v177)) || ((yr1266_TK() == v180))) || ((yr1266_TK() == v183)))) {
F.v3505 = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
if ((F.v3505 == F.p1328)) {
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
F.v3509 = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
if ((yr1266_TK() == v177)) {
yr1300_Skip();
{ rt_int rv3510 = F.v3509;
return rv3510; }
}
if ((((yr1266_TK() == v180)) && (((((((((F.v3509 == v360)) || ((F.v3509 == v207))) || ((F.v3509 == v369))) || ((F.v3509 == v246))) || ((F.v3509 == v348))) || ((F.v3509 == v459))) || ((F.v3509 == v330)))))) {
yr1300_Skip();
{ rt_int rv3511 = F.v3509;
return rv3511; }
}
if (((((((((((((yr1266_TK() == v183)) && ((!(F.v3509 == v564)))) && ((!(F.v3509 == v567)))) && ((!(F.v3509 == v570)))) && ((!(F.v3509 == v573)))) && ((!(F.v3509 == v576)))) && ((!(F.v3509 == v579)))) && ((!(F.v3509 == v582)))) && ((!(F.v3509 == v585)))) && ((!(F.v3509 == v507)))) && ((!(F.v3509 == v504))))) {
yr1300_Skip();
{ rt_int rv3512 = F.v3509;
return rv3512; }
}
yr1124_FailS(yr1276_TLn(), y_str("expected a name", 15));
{ rt_int rv3515 = INT64_C(0);
return rv3515; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1339_IsLabel(rt_int a_p1340) {
struct yf1341 F;
memset((void *)&F, 0, sizeof F);
F.p1340 = a_p1340;
F.v3519 = v1237;
while ((!(F.v3519 == ((void *)0)))) {
if ((((*(yR95 *)rt_nil_check(F.v3519))).f_name == F.p1340)) {
{ rt_int rv3521 = 1;
return rv3521; }
}
F.v3519 = ((*(yR95 *)rt_nil_check(F.v3519))).f_next;
}
{ rt_int rv3523 = 0;
return rv3523; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1345_ImportItem(void) {
struct yf1346 F;
memset((void *)&F, 0, sizeof F);
F.v3526 = yr1245_NewNode(v597, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3526))).f_name = yr1334_ExtendedId();
if ((yr1294_IsIdAt(INT64_C(0)) && ((yr1271_TV() == v1239)))) {
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3526))).f_text = yr1322_Ident();
}
if (yr1305_Accept(v213)) {
((*(yR95 *)rt_nil_check(F.v3526))).f_ival = yr1334_ExtendedId();
}
{ void * rv3528 = F.v3526;
return rv3528; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1350_ParseModule(void) {
struct yf1351 F;
memset((void *)&F, 0, sizeof F);
F.v3531 = yr1245_NewNode(v594, yr1276_TLn());
F.v3533 = ((void *)0);
F.v3535 = ((void *)0);
F.v3537 = ((void *)0);
if (yr1305_Accept(v354)) {
((*(yR95 *)rt_nil_check(F.v3531))).f_flag = INT64_C(1);
} else {
yr1316_Expect(v351);
}
((*(yR95 *)rt_nil_check(F.v3531))).f_name = yr1322_Ident();
while (yr1305_Accept(v327)) {
for (;;) {
F.v3533 = yr1345_ImportItem();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3531))).f_a, &F.v3535, F.v3533);
if ((!yr1305_Accept(v576))) {
goto yl_3541;
}
}
yl_3541: ;
yr1316_Expect(v579);
}
while (yr1305_Accept(v306)) {
F.v3539 = INT64_C(0);
if ((((yr1288_Is(v366) || yr1288_Is(v444)) || yr1288_Is(v399)) || yr1288_Is(v453))) {
F.v3539 = yr1271_TV();
yr1300_Skip();
}
for (;;) {
F.v3533 = yr1345_ImportItem();
((*(yR95 *)rt_nil_check(F.v3533))).f_flag = F.v3539;
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3531))).f_b, &F.v3537, F.v3533);
if ((!yr1305_Accept(v576))) {
goto yl_3543;
}
}
yl_3543: ;
yr1316_Expect(v579);
}
((*(yR95 *)rt_nil_check(F.v3531))).f_c = yr1360_ParseBlock();
if ((((*(yR95 *)rt_nil_check(F.v3531))).f_flag == INT64_C(1))) {
yr1316_Expect(v279);
} else {
yr1316_Expect(v276);
}
yr1327_CloseName(((*(yR95 *)rt_nil_check(F.v3531))).f_name, ((*(yR95 *)rt_nil_check(F.v3531))).f_line);
{ void * rv3545 = F.v3531;
return rv3545; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1355_IsDeclWord(void) {
struct yf1356 F;
memset((void *)&F, 0, sizeof F);
if ((!(yr1266_TK() == v180))) {
{ rt_int rv3550 = 0;
return rv3550; }
}
F.v3548 = yr1271_TV();
{ rt_int rv3551 = (((((((((((((F.v3548 == v240)) || ((F.v3548 == v453))) || ((F.v3548 == v342))) || ((F.v3548 == v447))) || ((F.v3548 == v408))) || ((F.v3548 == v318))) || ((F.v3548 == v390))) || ((F.v3548 == v351))) || ((F.v3548 == v354))) || ((F.v3548 == v435))) || ((F.v3548 == v336))) || ((F.v3548 == v393)));
return rv3551; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1360_ParseBlock(void) {
struct yf1361 F;
memset((void *)&F, 0, sizeof F);
F.v3554 = yr1245_NewNode(v600, yr1276_TLn());
F.v3556 = ((void *)0);
F.v3558 = v1237;
while (yr1355_IsDeclWord()) {
yr1387_ParseDeclGroup(&((*(yR95 *)rt_nil_check(F.v3554))).f_a, &F.v3556);
while (yr1305_Accept(v579)) {
}
}
if (yr1288_Is(v300)) {
((*(yR95 *)rt_nil_check(F.v3554))).f_b = yr1365_ParseHandler();
F.v3560 = ((*(yR95 *)rt_nil_check(F.v3554))).f_b;
if (yr1305_Accept(v579)) {
}
}
((*(yR95 *)rt_nil_check(F.v3554))).f_c = yr1451_ParseStatements(1);
v1237 = F.v3558;
{ void * rv3562 = F.v3554;
return rv3562; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1365_ParseHandler(void) {
struct yf1366 F;
memset((void *)&F, 0, sizeof F);
F.v3565 = yr1245_NewNode(v603, yr1276_TLn());
F.v3567 = ((void *)0);
F.v3569 = ((void *)0);
F.v3571 = ((void *)0);
F.v3573 = ((void *)0);
yr1316_Expect(v300);
while (yr1305_Accept(v237)) {
F.v3567 = yr1245_NewNode(v606, yr1276_TLn());
F.v3573 = ((void *)0);
for (;;) {
F.v3571 = yr1245_NewNode(v639, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3571))).f_name = yr1322_Ident();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3567))).f_a, &F.v3573, F.v3571);
if ((!yr1305_Accept(v576))) {
goto yl_3574;
}
}
yl_3574: ;
yr1316_Expect(v504);
((*(yR95 *)rt_nil_check(F.v3567))).f_b = yr1451_ParseStatements(0);
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3565))).f_a, &F.v3569, F.v3567);
}
if (yr1305_Accept(v252)) {
((*(yR95 *)rt_nil_check(F.v3565))).f_flag = INT64_C(1);
((*(yR95 *)rt_nil_check(F.v3565))).f_b = yr1451_ParseStatements(0);
}
yr1316_Expect(v261);
{ void * rv3578 = F.v3565;
return rv3578; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1370_ParseNames(void) {
struct yf1371 F;
memset((void *)&F, 0, sizeof F);
F.v3581 = ((void *)0);
F.v3583 = ((void *)0);
F.v3585 = ((void *)0);
for (;;) {
F.v3585 = yr1245_NewNode(v639, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3585))).f_name = yr1322_Ident();
if (yr1305_Accept(v219)) {
((*(yR95 *)rt_nil_check(F.v3585))).f_a = yr1513_ParseExpr();
}
yr1252_Link(&F.v3581, &F.v3583, F.v3585);
if ((!yr1305_Accept(v576))) {
goto yl_3586;
}
}
yl_3586: ;
{ void * rv3587 = F.v3581;
return rv3587; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1375_SimpleEntry(rt_int a_p1376) {
struct yf1377 F;
memset((void *)&F, 0, sizeof F);
F.p1376 = a_p1376;
if ((F.p1376 == v240)) {
F.v3591 = yr1245_NewNode(v609, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3591))).f_a = yr1370_ParseNames();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3591))).f_b = yr1416_ParseRep();
yr1316_Expect(v555);
((*(yR95 *)rt_nil_check(F.v3591))).f_c = yr1513_ParseExpr();
} else if ((F.p1376 == v453)) {
F.v3591 = yr1245_NewNode(v612, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3591))).f_a = yr1370_ParseNames();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3591))).f_b = yr1416_ParseRep();
if (yr1305_Accept(v501)) {
((*(yR95 *)rt_nil_check(F.v3591))).f_c = yr1513_ParseExpr();
}
} else if ((F.p1376 == v447)) {
F.v3591 = yr1245_NewNode(v618, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3591))).f_name = yr1322_Ident();
yr1316_Expect(v555);
((*(yR95 *)rt_nil_check(F.v3591))).f_b = yr1436_ParseConcrete1();
} else {
F.v3591 = yr1245_NewNode(v621, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3591))).f_name = yr1322_Ident();
yr1316_Expect(v555);
((*(yR95 *)rt_nil_check(F.v3591))).f_b = yr1416_ParseRep();
}
{ void * rv3592 = F.v3591;
return rv3592; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1381_Continues(rt_int a_p1382) {
struct yf1383 F;
memset((void *)&F, 0, sizeof F);
F.p1382 = a_p1382;
if ((!((yr1288_Is(v579) && yr1294_IsIdAt(INT64_C(1)))))) {
{ rt_int rv3597 = 0;
return rv3597; }
}
if (yr1339_IsLabel(rt_range(((rt_int *)(v1155).p)[y_ix1(v1155, rt_add(v1234, INT64_C(1)))], INT64_C(0), INT64_C(4000000)))) {
{ rt_int rv3601 = 0;
return rv3601; }
}
if ((((F.p1382 == v240)) || ((F.p1382 == v453)))) {
{ rt_int rv3605 = ((yr1281_IsAt(INT64_C(2), v576) || yr1281_IsAt(INT64_C(2), v582)) || yr1281_IsAt(INT64_C(2), v219));
return rv3605; }
}
{ rt_int rv3607 = yr1281_IsAt(INT64_C(2), v555);
return rv3607; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1387_ParseDeclGroup(void * * a_p1388, void * * a_p1389) {
struct yf1390 F;
memset((void *)&F, 0, sizeof F);
F.p1388 = a_p1388;
F.p1389 = a_p1389;
F.v3612 = yr1271_TV();
if ((((((F.v3612 == v240)) || ((F.v3612 == v453))) || ((F.v3612 == v447))) || ((F.v3612 == v408)))) {
yr1300_Skip();
yr1252_Link(&(*F.p1388), &(*F.p1389), yr1375_SimpleEntry(F.v3612));
while (yr1381_Continues(F.v3612)) {
yr1300_Skip();
yr1252_Link(&(*F.p1388), &(*F.p1389), yr1375_SimpleEntry(F.v3612));
}
return;
}
if ((F.v3612 == v342)) {
F.v3614 = yr1245_NewNode(v615, yr1276_TLn());
yr1300_Skip();
F.v3618 = ((void *)0);
for (;;) {
F.v3616 = yr1245_NewNode(v639, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3616))).f_name = yr1322_Ident();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3614))).f_a, &F.v3618, F.v3616);
if ((!yr1305_Accept(v576))) {
goto yl_3619;
}
}
yl_3619: ;
F.v3616 = ((*(yR95 *)rt_nil_check(F.v3614))).f_a;
while ((!(F.v3616 == ((void *)0)))) {
((*(yR95 *)rt_nil_check(F.v3614))).f_b = yr1245_NewNode(v639, ((*(yR95 *)rt_nil_check(F.v3616))).f_line);
((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v3614))).f_b))).f_name = ((*(yR95 *)rt_nil_check(F.v3616))).f_name;
((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v3614))).f_b))).f_next = v1237;
v1237 = ((*(yR95 *)rt_nil_check(F.v3614))).f_b;
F.v3616 = ((*(yR95 *)rt_nil_check(F.v3616))).f_next;
}
((*(yR95 *)rt_nil_check(F.v3614))).f_b = ((void *)0);
yr1252_Link(&(*F.p1388), &(*F.p1389), F.v3614);
return;
}
yr1252_Link(&(*F.p1388), &(*F.p1389), yr1394_ParseDecl());
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1394_ParseDecl(void) {
struct yf1395 F;
memset((void *)&F, 0, sizeof F);
F.v3628 = yr1271_TV();
F.v3630 = yr1276_TLn();
if ((((F.v3628 == v318)) || ((F.v3628 == v390)))) {
F.v3622 = yr1245_NewNode(v624, F.v3630);
yr1300_Skip();
if ((F.v3628 == v318)) {
((*(yR95 *)rt_nil_check(F.v3622))).f_flag = INT64_C(1);
}
if ((yr1288_Is(v309) || yr1288_Is(v405))) {
((*(yR95 *)rt_nil_check(F.v3622))).f_ival = yr1271_TV();
yr1300_Skip();
}
((*(yR95 *)rt_nil_check(F.v3622))).f_name = yr1334_ExtendedId();
yr1399_ParseFormals(F.v3622);
if (yr1305_Accept(v333)) {
((*(yR95 *)rt_nil_check(F.v3622))).f_e = yr1245_NewNode(v639, F.v3630);
}
((*(yR95 *)rt_nil_check(F.v3622))).f_c = yr1360_ParseBlock();
if ((F.v3628 == v318)) {
yr1316_Expect(v267);
} else {
yr1316_Expect(v282);
}
yr1327_CloseName(((*(yR95 *)rt_nil_check(F.v3622))).f_name, F.v3630);
{ void * rv3634 = F.v3622;
return rv3634; }
}
if ((((F.v3628 == v351)) || ((F.v3628 == v354)))) {
{ void * rv3635 = yr1350_ParseModule();
return rv3635; }
}
if ((F.v3628 == v435)) {
F.v3622 = yr1245_NewNode(v630, F.v3630);
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3622))).f_name = yr1322_Ident();
yr1316_Expect(v564);
F.v3626 = ((void *)0);
for (;;) {
F.v3624 = yr1245_NewNode(v639, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3624))).f_name = yr1322_Ident();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3622))).f_a, &F.v3626, F.v3624);
if ((!yr1305_Accept(v576))) {
goto yl_3636;
}
}
yl_3636: ;
yr1316_Expect(v567);
F.v3632 = v1234;
((*(yR95 *)rt_nil_check(F.v3622))).f_b = yr1350_ParseModule();
((*(yR95 *)rt_nil_check(F.v3622))).f_ival = F.v3632;
((*(yR95 *)rt_nil_check(F.v3622))).f_flag = v1234;
yr1316_Expect(v294);
yr1327_CloseName(((*(yR95 *)rt_nil_check(F.v3622))).f_name, F.v3630);
{ void * rv3637 = F.v3622;
return rv3637; }
}
if ((F.v3628 == v336)) {
F.v3622 = yr1245_NewNode(v633, F.v3630);
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3622))).f_name = yr1322_Ident();
yr1316_Expect(v564);
F.v3626 = ((void *)0);
for (;;) {
F.v3624 = yr1245_NewNode(v639, yr1276_TLn());
if ((yr1266_TK() == v186)) {
((*(yR95 *)rt_nil_check(F.v3624))).f_flag = INT64_C(1);
((*(yR95 *)rt_nil_check(F.v3624))).f_ival = yr1271_TV();
yr1300_Skip();
} else {
((*(yR95 *)rt_nil_check(F.v3624))).f_name = yr1334_ExtendedId();
}
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3622))).f_a, &F.v3626, F.v3624);
if ((!yr1305_Accept(v576))) {
goto yl_3638;
}
}
yl_3638: ;
yr1316_Expect(v567);
{ void * rv3640 = F.v3622;
return rv3640; }
}
if ((F.v3628 == v393)) {
F.v3622 = yr1245_NewNode(v636, F.v3630);
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3622))).f_name = yr1322_Ident();
yr1399_ParseFormals(F.v3622);
if ((!(((*(yR95 *)rt_nil_check(F.v3622))).f_b == ((void *)0)))) {
yr1124_FailS(F.v3630, y_str("a process returns no value", 26));
}
if (yr1305_Accept(v387)) {
((*(yR95 *)rt_nil_check(F.v3622))).f_d = yr1513_ParseExpr();
}
if (yr1305_Accept(v339)) {
((*(yR95 *)rt_nil_check(F.v3622))).f_e = yr1513_ParseExpr();
}
if (yr1305_Accept(v429)) {
F.v3624 = yr1513_ParseExpr();
}
((*(yR95 *)rt_nil_check(F.v3622))).f_c = yr1360_ParseBlock();
yr1316_Expect(v285);
yr1327_CloseName(((*(yR95 *)rt_nil_check(F.v3622))).f_name, F.v3630);
{ void * rv3642 = F.v3622;
return rv3642; }
}
yr1124_FailS(F.v3630, y_str("expected a declaration", 22));
{ void * rv3644 = ((void *)0);
return rv3644; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1399_ParseFormals(void * a_p1400) {
struct yf1401 F;
memset((void *)&F, 0, sizeof F);
F.p1400 = a_p1400;
F.v3648 = ((void *)0);
F.v3650 = ((void *)0);
if (yr1305_Accept(v414)) {
((*(yR95 *)rt_nil_check(F.p1400))).f_b = yr1416_ParseRep();
}
yr1316_Expect(v564);
while ((!yr1288_Is(v567))) {
if (yr1305_Accept(v240)) {
F.v3652 = v867;
} else if (yr1305_Accept(v375)) {
F.v3652 = v870;
} else if (yr1305_Accept(v453)) {
F.v3652 = v873;
} else {
yr1124_FailS(yr1276_TLn(), y_str("a formal parameter is CONST, OUT or VAR", 39));
}
for (;;) {
F.v3648 = yr1245_NewNode(v627, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3648))).f_ival = F.v3652;
((*(yR95 *)rt_nil_check(F.v3648))).f_a = yr1370_ParseNames();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3648))).f_b = yr1405_ParseFormalRep();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.p1400))).f_a, &F.v3650, F.v3648);
if ((!((((yr1288_Is(v579) || yr1288_Is(v576))) && yr1294_IsIdAt(INT64_C(1)))))) {
goto yl_3654;
}
yr1300_Skip();
}
yl_3654: ;
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
F.v3658 = yr1245_NewNode(v666, yr1276_TLn());
yr1300_Skip();
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3658))).f_a = yr1513_ParseExpr();
yr1300_Skip();
yr1316_Expect(v363);
((*(yR95 *)rt_nil_check(F.v3658))).f_b = yr1416_ParseRep();
yr1316_Expect(v567);
{ void * rv3664 = F.v3658;
return rv3664; }
}
if (yr1288_Is(v432)) {
F.v3658 = yr1245_NewNode(v669, yr1276_TLn());
yr1300_Skip();
{ void * rv3665 = F.v3658;
return rv3665; }
}
{ void * rv3666 = yr1416_ParseRep();
return rv3666; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1410_IsStructWord(rt_int a_p1411) {
struct yf1412 F;
memset((void *)&F, 0, sizeof F);
F.p1411 = a_p1411;
F.v3670 = ((rt_int *)(v1155).p)[y_ix1(v1155, rt_add(v1234, F.p1411))];
if ((!(((rt_int *)(v1153).p)[y_ix1(v1153, rt_add(v1234, F.p1411))] == v180))) {
{ rt_int rv3674 = 0;
return rv3674; }
}
{ rt_int rv3675 = (((((((((F.v3670 == v450)) || ((F.v3670 == v372))) || ((F.v3670 == v204))) || ((F.v3670 == v210))) || ((F.v3670 == v402))) || ((F.v3670 == v312))) || ((F.v3670 == v381))) || ((F.v3670 == v423)));
return rv3675; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1416_ParseRep(void) {
struct yf1417 F;
memset((void *)&F, 0, sizeof F);
if ((yr1294_IsIdAt(INT64_C(0)) && ((yr1410_IsStructWord(INT64_C(1)) || ((yr1294_IsIdAt(INT64_C(1)) && yr1281_IsAt(INT64_C(2), v570))))))) {
F.v3678 = yr1322_Ident();
F.v3680 = yr1421_ParseConcrete();
((*(yR95 *)rt_nil_check(F.v3680))).f_text = F.v3678;
{ void * rv3685 = F.v3680;
return rv3685; }
}
{ void * rv3686 = yr1421_ParseConcrete();
return rv3686; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1421_ParseConcrete(void) {
struct yf1422 F;
memset((void *)&F, 0, sizeof F);
F.v3689 = yr1436_ParseConcrete1();
if (yr1305_Accept(v378)) {
if (((((yr1266_TK() == v186)) || ((yr1266_TK() == v177))) || yr1288_Is(v564))) {
F.v3691 = yr1518_ParseSimple();
}
}
if (yr1305_Accept(v201)) {
F.v3691 = yr1518_ParseSimple();
}
{ void * rv3692 = F.v3689;
return rv3692; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1426_ParseIds(void) {
struct yf1427 F;
memset((void *)&F, 0, sizeof F);
F.v3695 = ((void *)0);
F.v3697 = ((void *)0);
F.v3699 = ((void *)0);
for (;;) {
F.v3699 = yr1245_NewNode(v639, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3699))).f_name = yr1322_Ident();
yr1252_Link(&F.v3695, &F.v3697, F.v3699);
if ((!yr1305_Accept(v576))) {
goto yl_3700;
}
}
yl_3700: ;
{ void * rv3701 = F.v3695;
return rv3701; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1431_ParseFieldGroups(void) {
struct yf1432 F;
memset((void *)&F, 0, sizeof F);
F.v3704 = ((void *)0);
F.v3706 = ((void *)0);
F.v3708 = ((void *)0);
while ((yr1288_Is(v240) || yr1288_Is(v453))) {
F.v3710 = yr1271_TV();
yr1300_Skip();
for (;;) {
F.v3708 = yr1245_NewNode(v675, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3708))).f_ival = F.v3710;
((*(yR95 *)rt_nil_check(F.v3708))).f_a = yr1370_ParseNames();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3708))).f_b = yr1416_ParseRep();
yr1252_Link(&F.v3704, &F.v3706, F.v3708);
if ((!((yr1288_Is(v579) && yr1294_IsIdAt(INT64_C(1)))))) {
goto yl_3711;
}
yr1300_Skip();
}
yl_3711: ;
if ((!yr1305_Accept(v579))) {
{ void * rv3713 = F.v3704;
return rv3713; }
}
}
{ void * rv3714 = F.v3704;
return rv3714; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1436_ParseConcrete1(void) {
struct yf1437 F;
memset((void *)&F, 0, sizeof F);
F.v3731 = yr1276_TLn();
if ((yr1266_TK() == v177)) {
F.v3717 = yr1245_NewNode(v642, F.v3731);
((*(yR95 *)rt_nil_check(F.v3717))).f_name = yr1322_Ident();
((*(yR95 *)rt_nil_check(F.v3717))).f_a = yr1441_ParseQualifier();
{ void * rv3732 = F.v3717;
return rv3732; }
}
if ((!(yr1266_TK() == v180))) {
yr1124_FailS(F.v3731, y_str("expected a representation", 25));
}
F.v3729 = yr1271_TV();
if ((((F.v3729 == v450)) || ((F.v3729 == v372)))) {
F.v3717 = yr1245_NewNode(v645, F.v3731);
if ((F.v3729 == v372)) {
((*(yR95 *)rt_nil_check(F.v3717))).f_flag = INT64_C(1);
}
yr1300_Skip();
yr1316_Expect(v564);
((*(yR95 *)rt_nil_check(F.v3717))).f_a = yr1426_ParseIds();
yr1316_Expect(v567);
((*(yR95 *)rt_nil_check(F.v3717))).f_b = yr1441_ParseQualifier();
{ void * rv3735 = F.v3717;
return rv3735; }
}
if ((F.v3729 == v204)) {
F.v3717 = yr1245_NewNode(v648, F.v3731);
yr1300_Skip();
yr1316_Expect(v564);
F.v3727 = ((void *)0);
for (;;) {
if ((!(yr1266_TK() == v195))) {
yr1124_FailS(yr1276_TLn(), y_str("an ALPHABET lists character literals", 36));
}
F.v3725 = yr1245_NewNode(v738, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3725))).f_text = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
yr1300_Skip();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3717))).f_a, &F.v3727, F.v3725);
if ((!yr1305_Accept(v576))) {
goto yl_3736;
}
}
yl_3736: ;
yr1316_Expect(v567);
((*(yR95 *)rt_nil_check(F.v3717))).f_b = yr1441_ParseQualifier();
{ void * rv3738 = F.v3717;
return rv3738; }
}
if ((F.v3729 == v210)) {
F.v3717 = yr1245_NewNode(v651, F.v3731);
yr1300_Skip();
yr1316_Expect(v564);
F.v3727 = ((void *)0);
for (;;) {
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3717))).f_a, &F.v3727, yr1416_ParseRep());
if ((!yr1305_Accept(v576))) {
goto yl_3739;
}
}
yl_3739: ;
yr1316_Expect(v363);
((*(yR95 *)rt_nil_check(F.v3717))).f_b = yr1416_ParseRep();
yr1316_Expect(v567);
{ void * rv3740 = F.v3717;
return rv3740; }
}
if ((F.v3729 == v402)) {
F.v3717 = yr1245_NewNode(v654, F.v3731);
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3717))).f_a = yr1431_ParseFieldGroups();
if (yr1305_Accept(v420)) {
F.v3719 = yr1245_NewNode(v678, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3719))).f_name = yr1322_Ident();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3719))).f_b = yr1416_ParseRep();
F.v3723 = ((void *)0);
while (yr1305_Accept(v237)) {
F.v3721 = yr1245_NewNode(v681, yr1276_TLn());
F.v3727 = ((void *)0);
for (;;) {
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3721))).f_a, &F.v3727, yr1513_ParseExpr());
if ((!yr1305_Accept(v576))) {
goto yl_3741;
}
}
yl_3741: ;
yr1316_Expect(v504);
((*(yR95 *)rt_nil_check(F.v3721))).f_b = yr1431_ParseFieldGroups();
while (yr1305_Accept(v579)) {
}
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3719))).f_a, &F.v3723, F.v3721);
}
yr1316_Expect(v291);
if (yr1305_Accept(v579)) {
}
((*(yR95 *)rt_nil_check(F.v3717))).f_b = F.v3719;
}
yr1316_Expect(v288);
{ void * rv3742 = F.v3717;
return rv3742; }
}
if (((((F.v3729 == v312)) || ((F.v3729 == v381))) || ((F.v3729 == v423)))) {
if ((F.v3729 == v312)) {
F.v3717 = yr1245_NewNode(v657, F.v3731);
} else if ((F.v3729 == v381)) {
F.v3717 = yr1245_NewNode(v660, F.v3731);
} else {
F.v3717 = yr1245_NewNode(v663, F.v3731);
}
yr1300_Skip();
yr1316_Expect(v564);
((*(yR95 *)rt_nil_check(F.v3717))).f_a = yr1416_ParseRep();
yr1316_Expect(v567);
{ void * rv3743 = F.v3717;
return rv3743; }
}
yr1124_FailS(F.v3731, y_str("expected a representation", 25));
{ void * rv3745 = ((void *)0);
return rv3745; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1441_ParseQualifier(void) {
struct yf1442 F;
memset((void *)&F, 0, sizeof F);
if ((!yr1288_Is(v570))) {
{ void * rv3749 = ((void *)0);
return rv3749; }
}
F.v3748 = yr1245_NewNode(v672, yr1276_TLn());
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3748))).f_a = yr1513_ParseExpr();
yr1316_Expect(v507);
((*(yR95 *)rt_nil_check(F.v3748))).f_b = yr1513_ParseExpr();
yr1316_Expect(v573);
if (yr1305_Accept(v417)) {
((*(yR95 *)rt_nil_check(F.v3748))).f_c = yr1518_ParseSimple();
} else if (yr1305_Accept(v384)) {
((*(yR95 *)rt_nil_check(F.v3748))).f_d = yr1518_ParseSimple();
}
{ void * rv3750 = F.v3748;
return rv3750; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1446_IsStop(void) {
struct yf1447 F;
memset((void *)&F, 0, sizeof F);
if ((yr1266_TK() == v174)) {
{ rt_int rv3755 = 1;
return rv3755; }
}
if ((!(yr1266_TK() == v180))) {
{ rt_int rv3757 = 0;
return rv3757; }
}
F.v3753 = yr1271_TV();
{ rt_int rv3758 = ((((((((((((((((F.v3753 == v255)) || ((F.v3753 == v252))) || ((F.v3753 == v270))) || ((F.v3753 == v237))) || ((F.v3753 == v291))) || ((F.v3753 == v297))) || ((F.v3753 == v264))) || ((F.v3753 == v273))) || ((F.v3753 == v258))) || ((F.v3753 == v261))) || ((F.v3753 == v282))) || ((F.v3753 == v267))) || ((F.v3753 == v285))) || ((F.v3753 == v276))) || ((F.v3753 == v279)));
return rv3758; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1451_ParseStatements(rt_int a_p1452) {
struct yf1453 F;
memset((void *)&F, 0, sizeof F);
F.p1452 = a_p1452;
F.v3762 = ((void *)0);
F.v3764 = ((void *)0);
F.v3766 = ((void *)0);
for (;;) {
while (yr1305_Accept(v579)) {
}
if (yr1446_IsStop()) {
goto yl_3769;
}
F.v3768 = INT64_C(0);
if (((F.p1452 && yr1294_IsIdAt(INT64_C(0))) && yr1281_IsAt(INT64_C(1), v582))) {
F.v3768 = yr1322_Ident();
yr1300_Skip();
}
F.v3766 = yr1457_ParseStatement();
((*(yR95 *)rt_nil_check(F.v3766))).f_text = F.v3768;
yr1252_Link(&F.v3762, &F.v3764, F.v3766);
if ((!yr1288_Is(v579))) {
goto yl_3769;
}
}
yl_3769: ;
{ void * rv3773 = F.v3762;
return rv3773; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1457_ParseStatement(void) {
struct yf1458 F;
memset((void *)&F, 0, sizeof F);
F.v3790 = yr1276_TLn();
if ((yr1266_TK() == v180)) {
F.v3788 = yr1271_TV();
if ((F.v3788 == v216)) {
yr1300_Skip();
F.v3776 = yr1245_NewNode(v690, F.v3790);
((*(yR95 *)rt_nil_check(F.v3776))).f_a = yr1513_ParseExpr();
{ void * rv3791 = F.v3776;
return rv3791; }
}
if ((F.v3788 == v321)) {
yr1300_Skip();
F.v3776 = yr1245_NewNode(v693, F.v3790);
((*(yR95 *)rt_nil_check(F.v3776))).f_name = yr1322_Ident();
{ void * rv3792 = F.v3776;
return rv3792; }
}
if ((F.v3788 == v303)) {
yr1300_Skip();
F.v3776 = yr1245_NewNode(v696, F.v3790);
((*(yR95 *)rt_nil_check(F.v3776))).f_name = yr1322_Ident();
{ void * rv3793 = F.v3776;
return rv3793; }
}
if ((F.v3788 == v411)) {
yr1300_Skip();
F.v3776 = yr1245_NewNode(v699, F.v3790);
if ((!((yr1288_Is(v579) || yr1446_IsStop())))) {
((*(yR95 *)rt_nil_check(F.v3776))).f_a = yr1513_ParseExpr();
}
{ void * rv3794 = F.v3776;
return rv3794; }
}
if ((F.v3788 == v438)) {
yr1300_Skip();
{ void * rv3795 = yr1245_NewNode(v702, F.v3790);
return rv3795; }
}
if ((F.v3788 == v396)) {
yr1300_Skip();
F.v3776 = yr1245_NewNode(v705, F.v3790);
if (yr1294_IsIdAt(INT64_C(0))) {
((*(yR95 *)rt_nil_check(F.v3776))).f_name = yr1322_Ident();
}
{ void * rv3797 = F.v3776;
return rv3797; }
}
if ((F.v3788 == v324)) {
yr1300_Skip();
F.v3776 = yr1245_NewNode(v708, F.v3790);
F.v3780 = ((void *)0);
F.v3778 = yr1245_NewNode(v726, F.v3790);
((*(yR95 *)rt_nil_check(F.v3778))).f_a = yr1513_ParseExpr();
yr1316_Expect(v441);
((*(yR95 *)rt_nil_check(F.v3778))).f_b = yr1451_ParseStatements(0);
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3776))).f_a, &F.v3780, F.v3778);
while (yr1288_Is(v255)) {
F.v3778 = yr1245_NewNode(v726, yr1276_TLn());
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3778))).f_a = yr1513_ParseExpr();
yr1316_Expect(v441);
((*(yR95 *)rt_nil_check(F.v3778))).f_b = yr1451_ParseStatements(0);
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3776))).f_a, &F.v3780, F.v3778);
}
if (yr1305_Accept(v252)) {
((*(yR95 *)rt_nil_check(F.v3776))).f_flag = INT64_C(1);
((*(yR95 *)rt_nil_check(F.v3776))).f_b = yr1451_ParseStatements(0);
}
yr1316_Expect(v270);
{ void * rv3802 = F.v3776;
return rv3802; }
}
if ((F.v3788 == v420)) {
yr1300_Skip();
F.v3776 = yr1245_NewNode(v711, F.v3790);
((*(yR95 *)rt_nil_check(F.v3776))).f_a = yr1513_ParseExpr();
F.v3780 = ((void *)0);
while (yr1288_Is(v237)) {
F.v3778 = yr1245_NewNode(v726, yr1276_TLn());
yr1300_Skip();
F.v3784 = ((void *)0);
for (;;) {
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3778))).f_a, &F.v3784, yr1513_ParseExpr());
if ((!yr1305_Accept(v576))) {
goto yl_3803;
}
}
yl_3803: ;
yr1316_Expect(v504);
((*(yR95 *)rt_nil_check(F.v3778))).f_b = yr1451_ParseStatements(0);
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3776))).f_b, &F.v3780, F.v3778);
}
if (yr1305_Accept(v252)) {
((*(yR95 *)rt_nil_check(F.v3776))).f_flag = INT64_C(1);
((*(yR95 *)rt_nil_check(F.v3776))).f_c = yr1451_ParseStatements(0);
}
yr1316_Expect(v291);
{ void * rv3807 = F.v3776;
return rv3807; }
}
if ((F.v3788 == v456)) {
yr1300_Skip();
F.v3776 = yr1245_NewNode(v714, F.v3790);
((*(yR95 *)rt_nil_check(F.v3776))).f_a = yr1513_ParseExpr();
yr1316_Expect(v249);
((*(yR95 *)rt_nil_check(F.v3776))).f_b = yr1451_ParseStatements(0);
yr1316_Expect(v297);
{ void * rv3809 = F.v3776;
return rv3809; }
}
if ((F.v3788 == v315)) {
yr1300_Skip();
F.v3776 = yr1245_NewNode(v717, F.v3790);
((*(yR95 *)rt_nil_check(F.v3776))).f_name = yr1322_Ident();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3776))).f_a = yr1416_ParseRep();
yr1316_Expect(v249);
((*(yR95 *)rt_nil_check(F.v3776))).f_b = yr1451_ParseStatements(0);
yr1316_Expect(v264);
{ void * rv3811 = F.v3776;
return rv3811; }
}
if ((F.v3788 == v345)) {
yr1300_Skip();
F.v3776 = yr1245_NewNode(v720, F.v3790);
((*(yR95 *)rt_nil_check(F.v3776))).f_name = yr1322_Ident();
((*(yR95 *)rt_nil_check(F.v3776))).f_b = yr1451_ParseStatements(0);
yr1316_Expect(v273);
yr1327_CloseName(((*(yR95 *)rt_nil_check(F.v3776))).f_name, F.v3790);
{ void * rv3813 = F.v3776;
return rv3813; }
}
if ((((F.v3788 == v234)) || ((F.v3788 == v426)))) {
F.v3776 = yr1245_NewNode(v723, F.v3790);
if (yr1305_Accept(v426)) {
((*(yR95 *)rt_nil_check(F.v3776))).f_flag = INT64_C(1);
}
yr1316_Expect(v234);
((*(yR95 *)rt_nil_check(F.v3776))).f_a = yr1360_ParseBlock();
yr1316_Expect(v258);
{ void * rv3815 = F.v3776;
return rv3815; }
}
}
F.v3786 = yr1544_ParseDesignator();
if (yr1305_Accept(v501)) {
F.v3776 = yr1245_NewNode(v684, F.v3790);
((*(yR95 *)rt_nil_check(F.v3776))).f_a = F.v3786;
((*(yR95 *)rt_nil_check(F.v3776))).f_b = yr1513_ParseExpr();
{ void * rv3816 = F.v3776;
return rv3816; }
}
if ((!(((*(yR95 *)rt_nil_check(F.v3786))).f_kind == v750))) {
yr1124_FailS(F.v3790, y_str("expected a statement", 20));
}
F.v3776 = yr1245_NewNode(v687, F.v3790);
((*(yR95 *)rt_nil_check(F.v3776))).f_a = F.v3786;
{ void * rv3818 = F.v3776;
return rv3818; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1462_OpAt(void) {
struct yf1463 F;
memset((void *)&F, 0, sizeof F);
if ((((yr1266_TK() == v183)) || ((yr1266_TK() == v180)))) {
{ rt_int rv3820 = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
return rv3820; }
}
{ rt_int rv3822 = INT64_C(0);
return rv3822; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1467_IsRel(rt_int a_p1468) {
struct yf1469 F;
memset((void *)&F, 0, sizeof F);
F.p1468 = a_p1468;
{ rt_int rv3825 = ((((((((((((((((((((F.p1468 == v330)) || ((F.p1468 == v540))) || ((F.p1468 == v555))) || ((F.p1468 == v558))) || ((F.p1468 == v510))) || ((F.p1468 == v561))) || ((F.p1468 == v513))) || ((F.p1468 == v516))) || ((F.p1468 == v471))) || ((F.p1468 == v519))) || ((F.p1468 == v474))) || ((F.p1468 == v522))) || ((F.p1468 == v483))) || ((F.p1468 == v477))) || ((F.p1468 == v465))) || ((F.p1468 == v525))) || ((F.p1468 == v486))) || ((F.p1468 == v480))) || ((F.p1468 == v468)));
return rv3825; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1473_IsAssocMul(rt_int a_p1474) {
struct yf1475 F;
memset((void *)&F, 0, sizeof F);
F.p1474 = a_p1474;
{ rt_int rv3828 = (((F.p1474 == v549)) || ((F.p1474 == v207)));
return rv3828; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1479_IsNonAssocMul(rt_int a_p1480) {
struct yf1481 F;
memset((void *)&F, 0, sizeof F);
F.p1480 = a_p1480;
{ rt_int rv3831 = ((((((((F.p1480 == v552)) || ((F.p1480 == v246))) || ((F.p1480 == v348))) || ((F.p1480 == v528))) || ((F.p1480 == v489))) || ((F.p1480 == v531))) || ((F.p1480 == v492)));
return rv3831; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1485_IsAssocAdd(rt_int a_p1486) {
struct yf1487 F;
memset((void *)&F, 0, sizeof F);
F.p1486 = a_p1486;
{ rt_int rv3834 = (((F.p1486 == v543)) || ((F.p1486 == v369)));
return rv3834; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1491_IsNonAssocAdd(rt_int a_p1492) {
struct yf1493 F;
memset((void *)&F, 0, sizeof F);
F.p1492 = a_p1492;
{ rt_int rv3837 = (((((((F.p1492 == v546)) || ((F.p1492 == v459))) || ((F.p1492 == v534))) || ((F.p1492 == v495))) || ((F.p1492 == v537))) || ((F.p1492 == v498)));
return rv3837; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1497_Bin(rt_int a_p1498, void * a_p1499, void * a_p1500, rt_int a_p1501) {
struct yf1502 F;
memset((void *)&F, 0, sizeof F);
F.p1498 = a_p1498;
F.p1499 = a_p1499;
F.p1500 = a_p1500;
F.p1501 = a_p1501;
F.v3844 = yr1245_NewNode(v768, F.p1501);
((*(yR95 *)rt_nil_check(F.v3844))).f_name = F.p1498;
((*(yR95 *)rt_nil_check(F.v3844))).f_a = F.p1499;
((*(yR95 *)rt_nil_check(F.v3844))).f_b = F.p1500;
{ void * rv3845 = F.v3844;
return rv3845; }
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
F.v3850 = yr1016_SE();
yr1117_Fail(F.p1508, F.v3850);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1513_ParseExpr(void) {
struct yf1514 F;
memset((void *)&F, 0, sizeof F);
F.v3858 = yr1276_TLn();
F.v3854 = yr1518_ParseSimple();
F.v3856 = yr1462_OpAt();
if (yr1467_IsRel(F.v3856)) {
yr1300_Skip();
F.v3854 = yr1497_Bin(F.v3856, F.v3854, yr1518_ParseSimple(), F.v3858);
if (yr1467_IsRel(yr1462_OpAt())) {
yr1506_NeedParens(F.v3856, F.v3858);
}
}
{ void * rv3859 = F.v3854;
return rv3859; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1518_ParseSimple(void) {
struct yf1519 F;
memset((void *)&F, 0, sizeof F);
F.v3868 = yr1276_TLn();
if (yr1288_Is(v546)) {
yr1300_Skip();
F.v3864 = yr1245_NewNode(v765, F.v3868);
((*(yR95 *)rt_nil_check(F.v3864))).f_a = yr1523_ParseTerm();
F.v3866 = yr1462_OpAt();
if ((yr1485_IsAssocAdd(F.v3866) || yr1491_IsNonAssocAdd(F.v3866))) {
yr1506_NeedParens(rt_range(v546, INT64_C(0), INT64_C(4000000)), F.v3868);
}
{ void * rv3869 = F.v3864;
return rv3869; }
}
F.v3862 = yr1523_ParseTerm();
F.v3866 = yr1462_OpAt();
if (yr1491_IsNonAssocAdd(F.v3866)) {
yr1300_Skip();
F.v3862 = yr1497_Bin(F.v3866, F.v3862, yr1523_ParseTerm(), F.v3868);
if ((yr1485_IsAssocAdd(yr1462_OpAt()) || yr1491_IsNonAssocAdd(yr1462_OpAt()))) {
yr1506_NeedParens(F.v3866, F.v3868);
}
{ void * rv3870 = F.v3862;
return rv3870; }
}
while (yr1485_IsAssocAdd(F.v3866)) {
yr1300_Skip();
F.v3862 = yr1497_Bin(F.v3866, F.v3862, yr1523_ParseTerm(), F.v3868);
if (yr1491_IsNonAssocAdd(yr1462_OpAt())) {
yr1506_NeedParens(yr1462_OpAt(), F.v3868);
}
F.v3866 = yr1462_OpAt();
}
{ void * rv3871 = F.v3862;
return rv3871; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1523_ParseTerm(void) {
struct yf1524 F;
memset((void *)&F, 0, sizeof F);
F.v3878 = yr1276_TLn();
F.v3874 = yr1539_ParseFactor();
F.v3876 = yr1462_OpAt();
if (yr1479_IsNonAssocMul(F.v3876)) {
yr1300_Skip();
F.v3874 = yr1497_Bin(F.v3876, F.v3874, yr1539_ParseFactor(), F.v3878);
if ((yr1473_IsAssocMul(yr1462_OpAt()) || yr1479_IsNonAssocMul(yr1462_OpAt()))) {
yr1506_NeedParens(F.v3876, F.v3878);
}
{ void * rv3879 = F.v3874;
return rv3879; }
}
while (yr1473_IsAssocMul(F.v3876)) {
yr1300_Skip();
F.v3874 = yr1497_Bin(F.v3876, F.v3874, yr1539_ParseFactor(), F.v3878);
if (yr1479_IsNonAssocMul(yr1462_OpAt())) {
yr1506_NeedParens(yr1462_OpAt(), F.v3878);
}
F.v3876 = yr1462_OpAt();
}
{ void * rv3880 = F.v3874;
return rv3880; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1528_IsLiteralAt(rt_int a_p1529) {
struct yf1530 F;
memset((void *)&F, 0, sizeof F);
F.p1529 = a_p1529;
F.v3884 = ((rt_int *)(v1153).p)[y_ix1(v1153, rt_add(v1234, F.p1529))];
{ rt_int rv3886 = (((((((F.v3884 == v186)) || ((F.v3884 == v189))) || ((F.v3884 == v192))) || ((F.v3884 == v195))) || ((F.v3884 == v198))) || yr1281_IsAt(F.p1529, v357));
return rv3886; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1534_ParseLiteral(void) {
struct yf1535 F;
memset((void *)&F, 0, sizeof F);
F.v3891 = yr1266_TK();
F.v3893 = yr1276_TLn();
if ((F.v3891 == v186)) {
F.v3889 = yr1245_NewNode(v729, F.v3893);
((*(yR95 *)rt_nil_check(F.v3889))).f_ival = yr1271_TV();
} else if ((F.v3891 == v189)) {
F.v3889 = yr1245_NewNode(v732, F.v3893);
((*(yR95 *)rt_nil_check(F.v3889))).f_text = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v3891 == v192)) {
F.v3889 = yr1245_NewNode(v735, F.v3893);
((*(yR95 *)rt_nil_check(F.v3889))).f_text = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v3891 == v195)) {
F.v3889 = yr1245_NewNode(v738, F.v3893);
((*(yR95 *)rt_nil_check(F.v3889))).f_text = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v3891 == v198)) {
F.v3889 = yr1245_NewNode(v741, F.v3893);
((*(yR95 *)rt_nil_check(F.v3889))).f_text = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
} else {
F.v3889 = yr1245_NewNode(v744, F.v3893);
}
yr1300_Skip();
{ void * rv3894 = F.v3889;
return rv3894; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1539_ParseFactor(void) {
struct yf1540 F;
memset((void *)&F, 0, sizeof F);
F.v3901 = yr1276_TLn();
if (yr1288_Is(v360)) {
yr1300_Skip();
F.v3897 = yr1245_NewNode(v762, F.v3901);
((*(yR95 *)rt_nil_check(F.v3897))).f_a = yr1539_ParseFactor();
{ void * rv3902 = F.v3897;
return rv3902; }
}
if (yr1288_Is(v564)) {
yr1300_Skip();
F.v3897 = yr1245_NewNode(v771, F.v3901);
((*(yR95 *)rt_nil_check(F.v3897))).f_a = yr1513_ParseExpr();
yr1316_Expect(v567);
{ void * rv3903 = F.v3897;
return rv3903; }
}
if (yr1528_IsLiteralAt(INT64_C(0))) {
{ void * rv3905 = yr1534_ParseLiteral();
return rv3905; }
}
if (yr1294_IsIdAt(INT64_C(0))) {
if ((yr1528_IsLiteralAt(INT64_C(1)) || ((yr1294_IsIdAt(INT64_C(1)) && (!((((((yr1281_IsAt(INT64_C(2), v564) || yr1281_IsAt(INT64_C(2), v570)) || yr1281_IsAt(INT64_C(2), v585)) || yr1281_IsAt(INT64_C(2), v588)) || yr1281_IsAt(INT64_C(2), v501)) || yr1281_IsAt(INT64_C(2), v582)))))))) {
F.v3899 = yr1322_Ident();
if (yr1294_IsIdAt(INT64_C(0))) {
F.v3897 = yr1245_NewNode(v747, F.v3901);
((*(yR95 *)rt_nil_check(F.v3897))).f_name = yr1322_Ident();
} else {
F.v3897 = yr1534_ParseLiteral();
}
((*(yR95 *)rt_nil_check(F.v3897))).f_d = yr1245_NewNode(v639, F.v3901);
((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v3897))).f_d))).f_name = F.v3899;
{ void * rv3916 = F.v3897;
return rv3916; }
}
{ void * rv3917 = yr1544_ParseDesignator();
return rv3917; }
}
yr1132_FailN(F.v3901, yr1311_TokText(), y_str(" cannot begin an operand", 24));
{ void * rv3919 = ((void *)0);
return rv3919; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1544_ParseDesignator(void) {
struct yf1545 F;
memset((void *)&F, 0, sizeof F);
F.v3928 = yr1276_TLn();
F.v3922 = yr1245_NewNode(v747, F.v3928);
((*(yR95 *)rt_nil_check(F.v3922))).f_name = yr1322_Ident();
if (yr1305_Accept(v564)) {
((*(yR95 *)rt_nil_check(F.v3922))).f_kind = v750;
F.v3926 = ((void *)0);
while ((!yr1288_Is(v567))) {
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3922))).f_a, &F.v3926, yr1513_ParseExpr());
if ((!yr1305_Accept(v576))) {
yr1549_EXIT_ARGS();
}
}
yr1316_Expect(v567);
}
for (;;) {
if (yr1305_Accept(v585)) {
F.v3924 = yr1245_NewNode(v753, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3924))).f_a = F.v3922;
((*(yR95 *)rt_nil_check(F.v3924))).f_name = yr1322_Ident();
F.v3922 = F.v3924;
} else if (yr1305_Accept(v570)) {
F.v3924 = yr1245_NewNode(v756, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3924))).f_a = F.v3922;
F.v3926 = ((void *)0);
for (;;) {
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3924))).f_b, &F.v3926, yr1513_ParseExpr());
if ((!yr1305_Accept(v576))) {
goto yl_3930;
}
}
yl_3930: ;
yr1316_Expect(v573);
F.v3922 = F.v3924;
} else if (yr1305_Accept(v588)) {
F.v3924 = yr1245_NewNode(v759, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3924))).f_a = F.v3922;
F.v3922 = F.v3924;
} else {
goto yl_3929;
}
}
yl_3929: ;
{ void * rv3931 = F.v3922;
return rv3931; }
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
F.v3935 = ((void *)0);
F.v3937 = ((void *)0);
while ((!(yr1266_TK() == v174))) {
if ((!((yr1288_Is(v351) || yr1288_Is(v354))))) {
yr1124_FailS(yr1276_TLn(), y_str("a segment is a module (XIII.A)", 30));
}
yr1252_Link(&F.v3935, &F.v3937, yr1350_ParseModule());
while (yr1305_Accept(v579)) {
}
}
{ void * rv3939 = F.v3935;
return rv3939; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1588_NewSym(rt_int a_p1589, rt_int a_p1590) {
struct yf1591 F;
memset((void *)&F, 0, sizeof F);
F.p1589 = a_p1589;
F.p1590 = a_p1590;
({ F.v3944 = rt_alloc(sizeof(yR115)); });
(*(yR115 *)rt_nil_check(F.v3944)) = ((yR115){ .f_kind = F.p1589, .f_name = F.p1590, .f_rep = ((void *)0), .f_cname = INT64_C(0), .f_level = INT64_C(0), .f_byref = 0, .f_readonly = 0, .f_mval = INT64_C(0), .f_hasmv = 0, .f_params = ((void *)0), .f_nparams = INT64_C(0), .f_ret = ((void *)0), .f_func = 0, .f_decl = ((void *)0), .f_depth = INT64_C(0), .f_target = ((void *)0), .f_members = ((void *)0), .f_mnext = ((void *)0), .f_chain = ((void *)0), .f_stack = ((void *)0), .f_alt = ((void *)0), .f_monitor = ((void *)0), .f_serial = INT64_C(0) });
((*(yR115 *)rt_nil_check(F.v3944))).f_serial = yr1141_NewSerial();
{ void * rv3955 = F.v3944;
return rv3955; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1595_OpenScope(rt_int a_p1596) {
struct yf1597 F;
memset((void *)&F, 0, sizeof F);
F.p1596 = a_p1596;
({ F.v3959 = rt_alloc(sizeof(yR120)); });
(*(yR120 *)rt_nil_check(F.v3959)) = ((yR120){ .f_syms = ((void *)0), .f_closed = F.p1596, .f_module = ((void *)0), .f_level = v1576, .f_deferred = ((void *)0), .f_up = ((void *)0) });
if ((v1570 >= INT64_C(0))) {
((*(yR120 *)rt_nil_check(F.v3959))).f_up = ((void * *)(v1568).p)[y_ix1(v1568, v1570)];
}
v1570 = rt_range(rt_add(v1570, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1568).p)[y_ix1(v1568, v1570)] = F.v3959;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1601_CloseScope(void) {
struct yf1602 F;
memset((void *)&F, 0, sizeof F);
F.v3965 = ((*(yR120 *)rt_nil_check(((void * *)(v1568).p)[y_ix1(v1568, v1570)]))).f_syms;
while ((!(F.v3965 == ((void *)0)))) {
F.v3971 = rt_range(rt_mod(((*(yR115 *)rt_nil_check(F.v3965))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3967 = ((void * *)(v1559).p)[y_ix1(v1559, F.v3971)];
F.v3969 = ((void *)0);
while ((((!(F.v3967 == ((void *)0)))) && ((!(F.v3967 == F.v3965))))) {
F.v3969 = F.v3967;
F.v3967 = ((*(yR115 *)rt_nil_check(F.v3967))).f_chain;
}
if ((F.v3967 == F.v3965)) {
if ((F.v3969 == ((void *)0))) {
((void * *)(v1559).p)[y_ix1(v1559, F.v3971)] = ((*(yR115 *)rt_nil_check(F.v3965))).f_chain;
} else {
((*(yR115 *)rt_nil_check(F.v3969))).f_chain = ((*(yR115 *)rt_nil_check(F.v3965))).f_chain;
}
}
F.v3965 = ((*(yR115 *)rt_nil_check(F.v3965))).f_stack;
}
v1570 = rt_range(rt_sub(v1570, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1606_Visible(void * a_p1607) {
struct yf1608 F;
memset((void *)&F, 0, sizeof F);
F.p1607 = a_p1607;
{ rt_int rv3979 = (((((*(yR115 *)rt_nil_check(F.p1607))).f_depth >= v1573)) || ((((*(yR115 *)rt_nil_check(F.p1607))).f_depth == INT64_C(0))));
return rv3979; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1612_Find(rt_int a_p1613) {
struct yf1614 F;
memset((void *)&F, 0, sizeof F);
F.p1613 = a_p1613;
F.v3983 = ((void * *)(v1559).p)[y_ix1(v1559, rt_mod(F.p1613, INT64_C(8192)))];
while ((!(F.v3983 == ((void *)0)))) {
if ((((((*(yR115 *)rt_nil_check(F.v3983))).f_name == F.p1613)) && yr1606_Visible(F.v3983))) {
{ void * rv3986 = F.v3983;
return rv3986; }
}
F.v3983 = ((*(yR115 *)rt_nil_check(F.v3983))).f_chain;
}
{ void * rv3987 = ((void *)0);
return rv3987; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1618_FindHere(rt_int a_p1619) {
struct yf1620 F;
memset((void *)&F, 0, sizeof F);
F.p1619 = a_p1619;
F.v3991 = ((void * *)(v1559).p)[y_ix1(v1559, rt_mod(F.p1619, INT64_C(8192)))];
while ((!(F.v3991 == ((void *)0)))) {
if ((((((*(yR115 *)rt_nil_check(F.v3991))).f_name == F.p1619)) && ((((*(yR115 *)rt_nil_check(F.v3991))).f_depth == v1570)))) {
{ void * rv3994 = F.v3991;
return rv3994; }
}
F.v3991 = ((*(yR115 *)rt_nil_check(F.v3991))).f_chain;
}
{ void * rv3995 = ((void *)0);
return rv3995; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1624_Lookup(rt_int a_p1625, rt_int a_p1626) {
struct yf1627 F;
memset((void *)&F, 0, sizeof F);
F.p1625 = a_p1625;
F.p1626 = a_p1626;
F.v4000 = yr1612_Find(F.p1625);
if ((F.v4000 == ((void *)0))) {
yr1132_FailN(F.p1626, F.p1625, y_str(" is not declared here", 21));
}
if ((((*(yR115 *)rt_nil_check(F.v4000))).f_kind == v864)) {
F.v4002 = ((*(yR115 *)rt_nil_check(F.v4000))).f_chain;
while ((!(F.v4002 == ((void *)0)))) {
if (((((((((*(yR115 *)rt_nil_check(F.v4002))).f_name == F.p1625)) && ((((*(yR115 *)rt_nil_check(F.v4002))).f_depth == ((*(yR115 *)rt_nil_check(F.v4000))).f_depth))) && ((((*(yR115 *)rt_nil_check(F.v4002))).f_kind == v864))) && ((!(yr1677_Real(F.v4002) == yr1677_Real(F.v4000))))) && ((!(((*(yR115 *)rt_nil_check(yr1677_Real(F.v4000)))).f_kind == v843))))) {
yr1132_FailN(F.p1626, F.p1625, y_str(" is exported here by two modules: name it with FROM (X.B.4)", 59));
}
F.v4002 = ((*(yR115 *)rt_nil_check(F.v4002))).f_chain;
}
}
{ void * rv4005 = F.v4000;
return rv4005; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1631_Ambiguous(void * a_p1632) {
struct yf1633 F;
memset((void *)&F, 0, sizeof F);
F.p1632 = a_p1632;
F.v4009 = ((*(yR115 *)rt_nil_check(F.p1632))).f_chain;
while ((!(F.v4009 == ((void *)0)))) {
if ((((((((*(yR115 *)rt_nil_check(F.v4009))).f_name == ((*(yR115 *)rt_nil_check(F.p1632))).f_name)) && yr1606_Visible(F.v4009)) && ((((*(yR115 *)rt_nil_check(F.v4009))).f_kind == v843))) && ((!(((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4009))).f_rep))).f_tid == ((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.p1632))).f_rep))).f_tid))))) {
{ rt_int rv4011 = 1;
return rv4011; }
}
F.v4009 = ((*(yR115 *)rt_nil_check(F.v4009))).f_chain;
}
{ rt_int rv4013 = 0;
return rv4013; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1637_FindLit(rt_int a_p1638, void * a_p1639) {
struct yf1640 F;
memset((void *)&F, 0, sizeof F);
F.p1638 = a_p1638;
F.p1639 = a_p1639;
F.v4018 = ((void * *)(v1559).p)[y_ix1(v1559, rt_mod(F.p1638, INT64_C(8192)))];
while ((!(F.v4018 == ((void *)0)))) {
if ((((*(yR115 *)rt_nil_check(F.v4018))).f_name == F.p1638)) {
if ((((((*(yR115 *)rt_nil_check(yr1677_Real(F.v4018)))).f_kind == v843)) && ((((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(yr1677_Real(F.v4018)))).f_rep))).f_tid == ((*(yR100 *)rt_nil_check(F.p1639))).f_tid)))) {
{ void * rv4021 = F.v4018;
return rv4021; }
}
}
F.v4018 = ((*(yR115 *)rt_nil_check(F.v4018))).f_chain;
}
{ void * rv4022 = ((void *)0);
return rv4022; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1644_Define(void * a_p1645, rt_int a_p1646) {
struct yf1647 F;
memset((void *)&F, 0, sizeof F);
F.p1645 = a_p1645;
F.p1646 = a_p1646;
F.v4027 = yr1618_FindHere(((*(yR115 *)rt_nil_check(F.p1645))).f_name);
F.v4029 = rt_range(rt_mod(((*(yR115 *)rt_nil_check(F.p1645))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((((!(F.v4027 == ((void *)0)))) && (!((((((*(yR115 *)rt_nil_check(F.v4027))).f_kind == v843)) && ((((*(yR115 *)rt_nil_check(F.p1645))).f_kind == v843)))))) && (!((((((*(yR115 *)rt_nil_check(F.p1645))).f_kind == v846)) && ((((*(yR115 *)rt_nil_check(F.p1645))).f_alt == F.v4027)))))) && (!((((((*(yR115 *)rt_nil_check(F.p1645))).f_kind == v864)) && ((((*(yR115 *)rt_nil_check(F.v4027))).f_kind == v864))))))) {
yr1132_FailN(F.p1646, ((*(yR115 *)rt_nil_check(F.p1645))).f_name, y_str(" is declared twice in this scope", 32));
}
((*(yR115 *)rt_nil_check(F.p1645))).f_depth = v1570;
((*(yR115 *)rt_nil_check(F.p1645))).f_chain = ((void * *)(v1559).p)[y_ix1(v1559, F.v4029)];
((void * *)(v1559).p)[y_ix1(v1559, F.v4029)] = F.p1645;
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
F.v4037 = rt_range(rt_sub(v1576, F.p1652), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.p1652 == INT64_C(0))) {
{ rt_int rv4040 = F.p1653;
return rv4040; }
}
yr986_SB();
if ((F.v4037 == INT64_C(0))) {
yr997_SA(y_str("F.", 2));
} else {
yr997_SA(y_str("F.up->", 6));
while ((F.v4037 > INT64_C(1))) {
yr997_SA(y_str("up->", 4));
F.v4037 = rt_range(rt_sub(F.v4037, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1004_ST(F.p1653);
{ rt_int rv4048 = yr1016_SE();
return rv4048; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1658_FramePtr(rt_int a_p1659) {
struct yf1660 F;
memset((void *)&F, 0, sizeof F);
F.p1659 = a_p1659;
F.v4052 = rt_range(rt_sub(v1576, F.p1659), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.v4052 == INT64_C(0))) {
{ rt_int rv4056 = yr1021_T(y_str("&F", 2));
return rv4056; }
}
yr986_SB();
yr997_SA(y_str("F.up", 4));
while ((F.v4052 > INT64_C(1))) {
yr997_SA(y_str("->up", 4));
F.v4052 = rt_range(rt_sub(F.v4052, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv4062 = yr1016_SE();
return rv4062; }
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
F.v4067 = yr1016_SE();
if ((v1576 == INT64_C(0))) {
yr1070_Put(&v948, F.v4067);
} else {
yr1070_Put(&v958, F.v4067);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1671_SymPath(void * a_p1672) {
struct yf1673 F;
memset((void *)&F, 0, sizeof F);
F.p1672 = a_p1672;
F.v4076 = yr1651_Path(((*(yR115 *)rt_nil_check(F.p1672))).f_level, ((*(yR115 *)rt_nil_check(F.p1672))).f_cname);
if (((*(yR115 *)rt_nil_check(F.p1672))).f_byref) {
yr986_SB();
yr997_SA(y_str("(*", 2));
yr1004_ST(F.v4076);
yr997_SA(y_str(")", 1));
{ rt_int rv4079 = yr1016_SE();
return rv4079; }
}
{ rt_int rv4080 = F.v4076;
return rv4080; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1677_Real(void * a_p1678) {
struct yf1679 F;
memset((void *)&F, 0, sizeof F);
F.p1678 = a_p1678;
F.v4084 = F.p1678;
while ((((*(yR115 *)rt_nil_check(F.v4084))).f_kind == v864)) {
F.v4084 = ((*(yR115 *)rt_nil_check(F.v4084))).f_target;
}
{ void * rv4085 = F.v4084;
return rv4085; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1707_NewRep(rt_int a_p1708, rt_int a_p1709) {
struct yf1710 F;
memset((void *)&F, 0, sizeof F);
F.p1708 = a_p1708;
F.p1709 = a_p1709;
({ F.v4090 = rt_alloc(sizeof(yR100)); });
(*(yR100 *)rt_nil_check(F.v4090)) = ((yR100){ .f_kind = F.p1708, .f_tid = F.p1709, .f_tname = F.p1709, .f_lo = INT64_C(0), .f_hi = INT64_C(0), .f_mlo = INT64_C(0), .f_mhi = INT64_C(0), .f_hasm = 0, .f_scale = INT64_C(0), .f_prec = INT64_C(0), .f_elem = ((void *)0), .f_idx = ((void *)0), .f_nidx = INT64_C(0), .f_link = ((void *)0), .f_lits = ((void *)0), .f_nlits = INT64_C(0), .f_fields = ((void *)0), .f_selector = ((void *)0), .f_cname = INT64_C(0), .f_dname = INT64_C(0), .f_dlevel = INT64_C(0), .f_deep = 0, .f_abstract = 0, .f_opaque = 0, .f_opaqueops = INT64_C(0), .f_ordered = 0, .f_forward = INT64_C(0), .f_fwdscope = INT64_C(0), .f_monitor = ((void *)0), .f_serial = INT64_C(0) });
((*(yR100 *)rt_nil_check(F.v4090))).f_serial = yr1141_NewSerial();
{ void * rv4111 = F.v4090;
return rv4111; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1714_CopyRep(void * a_p1715) {
struct yf1716 F;
memset((void *)&F, 0, sizeof F);
F.p1715 = a_p1715;
({ F.v4115 = rt_alloc(sizeof(yR100)); });
(*(yR100 *)rt_nil_check(F.v4115)) = (*(yR100 *)rt_nil_check(F.p1715));
((*(yR100 *)rt_nil_check(F.v4115))).f_serial = yr1141_NewSerial();
{ void * rv4116 = F.v4115;
return rv4116; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1720_IsDiscrete(void * a_p1721) {
struct yf1722 F;
memset((void *)&F, 0, sizeof F);
F.p1721 = a_p1721;
{ rt_int rv4119 = (((((((*(yR100 *)rt_nil_check(F.p1721))).f_kind == v774)) || ((((*(yR100 *)rt_nil_check(F.p1721))).f_kind == v783))) || ((((*(yR100 *)rt_nil_check(F.p1721))).f_kind == v786))) || ((((*(yR100 *)rt_nil_check(F.p1721))).f_kind == v789)));
return rv4119; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1726_IsNumeric(void * a_p1727) {
struct yf1728 F;
memset((void *)&F, 0, sizeof F);
F.p1727 = a_p1727;
{ rt_int rv4122 = ((((((*(yR100 *)rt_nil_check(F.p1727))).f_kind == v774)) || ((((*(yR100 *)rt_nil_check(F.p1727))).f_kind == v777))) || ((((*(yR100 *)rt_nil_check(F.p1727))).f_kind == v780)));
return rv4122; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1732_IsArrayLike(void * a_p1733) {
struct yf1734 F;
memset((void *)&F, 0, sizeof F);
F.p1733 = a_p1733;
{ rt_int rv4125 = ((((((*(yR100 *)rt_nil_check(F.p1733))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.p1733))).f_kind == v813))) || ((((*(yR100 *)rt_nil_check(F.p1733))).f_kind == v816)));
return rv4125; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1738_IsString(void * a_p1739) {
struct yf1740 F;
memset((void *)&F, 0, sizeof F);
F.p1739 = a_p1739;
if ((((*(yR100 *)rt_nil_check(F.p1739))).f_kind == v816)) {
{ rt_int rv4129 = 1;
return rv4129; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1739))).f_kind == v792)) && ((((*(yR100 *)rt_nil_check(F.p1739))).f_nidx == INT64_C(1))))) {
{ rt_int rv4131 = (((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p1739))).f_elem))).f_kind == v789);
return rv4131; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1739))).f_kind == v813)) && ((((*(yR100 *)rt_nil_check(F.p1739))).f_nidx == INT64_C(1))))) {
{ rt_int rv4133 = (((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p1739))).f_elem))).f_kind == v789);
return rv4133; }
}
{ rt_int rv4135 = 0;
return rv4135; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1744_Deep(void * a_p1745) {
struct yf1746 F;
memset((void *)&F, 0, sizeof F);
F.p1745 = a_p1745;
if (((((((*(yR100 *)rt_nil_check(F.p1745))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.p1745))).f_kind == v813))) || ((((*(yR100 *)rt_nil_check(F.p1745))).f_kind == v816)))) {
{ rt_int rv4139 = 1;
return rv4139; }
}
{ rt_int rv4140 = (((((*(yR100 *)rt_nil_check(F.p1745))).f_kind == v795)) && ((*(yR100 *)rt_nil_check(F.p1745))).f_deep);
return rv4140; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1750_CType(void * a_p1751) {
struct yf1752 F;
memset((void *)&F, 0, sizeof F);
F.p1751 = a_p1751;
F.v4144 = ((*(yR100 *)rt_nil_check(F.p1751))).f_kind;
if (((((F.v4144 == v774)) || ((F.v4144 == v783))) || ((F.v4144 == v786)))) {
{ rt_int rv4146 = yr1021_T(y_str("rt_int", 6));
return rv4146; }
}
if ((F.v4144 == v789)) {
{ rt_int rv4148 = yr1021_T(y_str("unsigned char", 13));
return rv4148; }
}
if ((((F.v4144 == v780)) || ((F.v4144 == v777)))) {
{ rt_int rv4150 = yr1021_T(y_str("double", 6));
return rv4150; }
}
if (((((F.v4144 == v792)) || ((F.v4144 == v813))) || ((F.v4144 == v816)))) {
{ rt_int rv4152 = yr1021_T(y_str("yarr", 4));
return rv4152; }
}
if ((F.v4144 == v795)) {
{ rt_int rv4153 = ((*(yR100 *)rt_nil_check(F.p1751))).f_cname;
return rv4153; }
}
if ((((F.v4144 == v798)) || ((F.v4144 == v819)))) {
{ rt_int rv4155 = yr1021_T(y_str("void *", 6));
return rv4155; }
}
if ((F.v4144 == v801)) {
{ rt_int rv4157 = yr1021_T(y_str("yfile *", 7));
return rv4157; }
}
if ((F.v4144 == v804)) {
{ rt_int rv4159 = yr1021_T(y_str("yset", 4));
return rv4159; }
}
if ((F.v4144 == v807)) {
{ rt_int rv4161 = yr1021_T(y_str("ysig", 4));
return rv4161; }
}
if ((F.v4144 == v810)) {
{ rt_int rv4163 = yr1021_T(y_str("rt_lock", 7));
return rv4163; }
}
{ rt_int rv4165 = yr1021_T(y_str("void", 4));
return rv4165; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1756_DescOf(void * a_p1757) {
struct yf1758 F;
memset((void *)&F, 0, sizeof F);
F.p1757 = a_p1757;
F.v4169 = ((*(yR100 *)rt_nil_check(F.p1757))).f_kind;
if (((((F.v4169 == v774)) || ((F.v4169 == v783))) || ((F.v4169 == v786)))) {
{ rt_int rv4171 = yr1021_T(y_str("&y_d_int", 8));
return rv4171; }
}
if ((F.v4169 == v789)) {
{ rt_int rv4173 = yr1021_T(y_str("&y_d_byte", 9));
return rv4173; }
}
if ((((F.v4169 == v780)) || ((F.v4169 == v777)))) {
{ rt_int rv4175 = yr1021_T(y_str("&y_d_float", 10));
return rv4175; }
}
if ((((F.v4169 == v798)) || ((F.v4169 == v819)))) {
{ rt_int rv4177 = yr1021_T(y_str("&y_d_ptr", 8));
return rv4177; }
}
if ((F.v4169 == v804)) {
{ rt_int rv4179 = yr1021_T(y_str("&y_d_set", 8));
return rv4179; }
}
if ((((F.v4169 == v792)) || ((F.v4169 == v795)))) {
yr986_SB();
yr997_SA(y_str("&", 1));
yr1004_ST(yr1651_Path(((*(yR100 *)rt_nil_check(F.p1757))).f_dlevel, ((*(yR100 *)rt_nil_check(F.p1757))).f_dname));
{ rt_int rv4181 = yr1016_SE();
return rv4181; }
}
if ((F.v4169 == v816)) {
{ rt_int rv4183 = yr1021_T(y_str("&y_d_str", 8));
return rv4183; }
}
{ rt_int rv4185 = yr1021_T(y_str("&y_d_opaque", 11));
return rv4185; }
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
{ rt_int rv4194 = 1;
return rv4194; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1769))).f_kind == v816)) && yr1738_IsString(F.p1770))) {
{ rt_int rv4196 = 1;
return rv4196; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1770))).f_kind == v816)) && yr1738_IsString(F.p1769))) {
{ rt_int rv4198 = 1;
return rv4198; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1769))).f_kind == v819)) && ((((*(yR100 *)rt_nil_check(F.p1770))).f_kind == v798)))) {
{ rt_int rv4200 = 1;
return rv4200; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1770))).f_kind == v819)) && ((((*(yR100 *)rt_nil_check(F.p1769))).f_kind == v798)))) {
{ rt_int rv4202 = 1;
return rv4202; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1769))).f_kind == v828)) || ((((*(yR100 *)rt_nil_check(F.p1770))).f_kind == v828)))) {
{ rt_int rv4204 = 1;
return rv4204; }
}
{ rt_int rv4206 = 0;
return rv4206; }
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
F.v4212 = yr1016_SE();
yr1117_Fail(F.p1776, F.v4212);
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
static rt_int yr1798_IsLiteralNode(void * a_p1799) {
struct yf1800 F;
memset((void *)&F, 0, sizeof F);
F.p1799 = a_p1799;
if ((((((((*(yR95 *)rt_nil_check(F.p1799))).f_kind == v729)) || ((((*(yR95 *)rt_nil_check(F.p1799))).f_kind == v735))) || ((((*(yR95 *)rt_nil_check(F.p1799))).f_kind == v732))) || ((((*(yR95 *)rt_nil_check(F.p1799))).f_kind == v738)))) {
{ rt_int rv4226 = (((*(yR95 *)rt_nil_check(F.p1799))).f_d == ((void *)0));
return rv4226; }
}
if ((((((*(yR95 *)rt_nil_check(F.p1799))).f_kind == v765)) || ((((*(yR95 *)rt_nil_check(F.p1799))).f_kind == v771)))) {
{ rt_int rv4227 = yr1798_IsLiteralNode(((*(yR95 *)rt_nil_check(F.p1799))).f_a);
return rv4227; }
}
{ rt_int rv4229 = 0;
return rv4229; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1804_StoreBounds(void * a_p1805, yarr a_p1807) {
struct yf1808 F;
memset((void *)&F, 0, sizeof F);
F.p1805 = a_p1805;
F.p1807 = a_p1807;
F.v4234 = yr1146_Fresh(y_str("lo", 2));
F.v4236 = yr1146_Fresh(y_str("hi", 2));
yr1664_DeclStorage(yr1021_T(F.p1807), F.v4234);
yr1664_DeclStorage(yr1021_T(F.p1807), F.v4236);
yr1092_Emit(yr2465_Join(yr1651_Path(v1576, F.v4234), yr1021_T(y_str(" = ", 3)), yr2465_Join(((*(yR100 *)rt_nil_check(F.p1805))).f_lo, yr1021_T(y_str(";", 1)), INT64_C(0))));
yr1092_Emit(yr2465_Join(yr1651_Path(v1576, F.v4236), yr1021_T(y_str(" = ", 3)), yr2465_Join(((*(yR100 *)rt_nil_check(F.p1805))).f_hi, yr1021_T(y_str(";", 1)), INT64_C(0))));
((*(yR100 *)rt_nil_check(F.p1805))).f_lo = F.v4234;
((*(yR100 *)rt_nil_check(F.p1805))).f_hi = F.v4236;
((*(yR100 *)rt_nil_check(F.p1805))).f_dname = F.v4234;
((*(yR100 *)rt_nil_check(F.p1805))).f_dlevel = v1576;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1812_LoText(void * a_p1813) {
struct yf1814 F;
memset((void *)&F, 0, sizeof F);
F.p1813 = a_p1813;
if ((((((!(((*(yR100 *)rt_nil_check(F.p1813))).f_dname == INT64_C(0)))) && ((!(((*(yR100 *)rt_nil_check(F.p1813))).f_lo == INT64_C(0))))) && ((!(((*(yR100 *)rt_nil_check(F.p1813))).f_kind == v792)))) && ((!(((*(yR100 *)rt_nil_check(F.p1813))).f_kind == v795))))) {
{ rt_int rv4249 = yr1651_Path(((*(yR100 *)rt_nil_check(F.p1813))).f_dlevel, ((*(yR100 *)rt_nil_check(F.p1813))).f_lo);
return rv4249; }
}
{ rt_int rv4250 = ((*(yR100 *)rt_nil_check(F.p1813))).f_lo;
return rv4250; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1818_HiText(void * a_p1819) {
struct yf1820 F;
memset((void *)&F, 0, sizeof F);
F.p1819 = a_p1819;
if ((((((!(((*(yR100 *)rt_nil_check(F.p1819))).f_dname == INT64_C(0)))) && ((!(((*(yR100 *)rt_nil_check(F.p1819))).f_hi == INT64_C(0))))) && ((!(((*(yR100 *)rt_nil_check(F.p1819))).f_kind == v792)))) && ((!(((*(yR100 *)rt_nil_check(F.p1819))).f_kind == v795))))) {
{ rt_int rv4255 = yr1651_Path(((*(yR100 *)rt_nil_check(F.p1819))).f_dlevel, ((*(yR100 *)rt_nil_check(F.p1819))).f_hi);
return rv4255; }
}
{ rt_int rv4256 = ((*(yR100 *)rt_nil_check(F.p1819))).f_hi;
return rv4256; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1824_Qualify(void * a_p1825, void * a_p1826) {
struct yf1827 F;
memset((void *)&F, 0, sizeof F);
F.p1825 = a_p1825;
F.p1826 = a_p1826;
yr2119_Expr(((*(yR95 *)rt_nil_check(F.p1826))).f_a, F.p1825, &F.v4261, &F.v4265);
yr2119_Expr(((*(yR95 *)rt_nil_check(F.p1826))).f_b, F.p1825, &F.v4263, &F.v4267);
if ((((((*(yR100 *)rt_nil_check(F.p1825))).f_kind == v780)) || ((((*(yR100 *)rt_nil_check(F.p1825))).f_kind == v777)))) {
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p1826))).f_line, F.p1825, F.v4265);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p1826))).f_line, F.p1825, F.v4267);
((*(yR100 *)rt_nil_check(F.p1825))).f_lo = F.v4261;
((*(yR100 *)rt_nil_check(F.p1825))).f_hi = F.v4263;
((*(yR100 *)rt_nil_check(F.p1825))).f_dname = INT64_C(0);
if ((!((yr1798_IsLiteralNode(((*(yR95 *)rt_nil_check(F.p1826))).f_a) && yr1798_IsLiteralNode(((*(yR95 *)rt_nil_check(F.p1826))).f_b))))) {
yr1804_StoreBounds(F.p1825, y_str("double", 6));
}
if ((((*(yR100 *)rt_nil_check(F.p1825))).f_kind == v780)) {
if ((((*(yR95 *)rt_nil_check(F.p1826))).f_d == ((void *)0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1826))).f_line, y_str("FLOATING needs PRECISION (VI.A.1.c)", 35));
}
yr2060_Manifest(((*(yR95 *)rt_nil_check(F.p1826))).f_d, &F.v4269, &F.v4271);
if ((!F.v4269)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1826))).f_line, y_str("PRECISION is a manifest constant", 32));
}
yr986_SB();
yr1010_SI(F.v4271);
((*(yR100 *)rt_nil_check(F.p1825))).f_prec = yr1016_SE();
} else {
if ((((*(yR95 *)rt_nil_check(F.p1826))).f_c == ((void *)0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1826))).f_line, y_str("FIXED needs SCALE (VI.A.1.b)", 28));
}
yr2119_Expr(((*(yR95 *)rt_nil_check(F.p1826))).f_c, F.p1825, &((*(yR100 *)rt_nil_check(F.p1825))).f_scale, &F.v4265);
}
((*(yR100 *)rt_nil_check(F.p1825))).f_abstract = 0;
return;
}
if ((!yr1720_IsDiscrete(F.p1825))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1826))).f_line, y_str("only a scalar or integer representation takes a range", 53));
}
if ((((!(((*(yR95 *)rt_nil_check(F.p1826))).f_c == ((void *)0)))) || ((!(((*(yR95 *)rt_nil_check(F.p1826))).f_d == ((void *)0)))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1826))).f_line, y_str("SCALE and PRECISION qualify numbers", 35));
}
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p1826))).f_line, F.p1825, F.v4265);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p1826))).f_line, F.p1825, F.v4267);
((*(yR100 *)rt_nil_check(F.p1825))).f_lo = F.v4261;
((*(yR100 *)rt_nil_check(F.p1825))).f_hi = F.v4263;
yr2060_Manifest(((*(yR95 *)rt_nil_check(F.p1826))).f_a, &F.v4269, &((*(yR100 *)rt_nil_check(F.p1825))).f_mlo);
((*(yR100 *)rt_nil_check(F.p1825))).f_hasm = F.v4269;
yr2060_Manifest(((*(yR95 *)rt_nil_check(F.p1826))).f_b, &F.v4269, &((*(yR100 *)rt_nil_check(F.p1825))).f_mhi);
((*(yR100 *)rt_nil_check(F.p1825))).f_hasm = (((*(yR100 *)rt_nil_check(F.p1825))).f_hasm && F.v4269);
((*(yR100 *)rt_nil_check(F.p1825))).f_abstract = 0;
((*(yR100 *)rt_nil_check(F.p1825))).f_dname = INT64_C(0);
if ((!((*(yR100 *)rt_nil_check(F.p1825))).f_hasm)) {
yr1804_StoreBounds(F.p1825, y_str("rt_int", 6));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1831_DefineLits(void * a_p1832) {
struct yf1833 F;
memset((void *)&F, 0, sizeof F);
F.p1832 = a_p1832;
F.v4286 = ((*(yR100 *)rt_nil_check(F.p1832))).f_lits;
F.v4290 = INT64_C(0);
while ((!(F.v4286 == ((void *)0)))) {
if ((!(yr1612_Find(((*(yR95 *)rt_nil_check(F.v4286))).f_name) == ((void *)0)))) {
F.v4288 = yr1612_Find(((*(yR95 *)rt_nil_check(F.v4286))).f_name);
if ((((!(((*(yR115 *)rt_nil_check(F.v4288))).f_kind == v843))) && ((((*(yR115 *)rt_nil_check(F.v4288))).f_depth == v1570)))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.v4286))).f_line, ((*(yR95 *)rt_nil_check(F.v4286))).f_name, y_str(" is declared twice in this scope", 32));
}
}
F.v4288 = yr1588_NewSym(v843, ((*(yR95 *)rt_nil_check(F.v4286))).f_name);
((*(yR115 *)rt_nil_check(F.v4288))).f_rep = F.p1832;
((*(yR115 *)rt_nil_check(F.v4288))).f_mval = F.v4290;
((*(yR115 *)rt_nil_check(F.v4288))).f_hasmv = 1;
yr1644_Define(F.v4288, ((*(yR95 *)rt_nil_check(F.v4286))).f_line);
F.v4290 = rt_range(rt_add(F.v4290, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4286 = ((*(yR95 *)rt_nil_check(F.v4286))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1837_SetRange(void * a_p1838, rt_int a_p1839, rt_int a_p1840) {
struct yf1841 F;
memset((void *)&F, 0, sizeof F);
F.p1838 = a_p1838;
F.p1839 = a_p1839;
F.p1840 = a_p1840;
yr986_SB();
yr1010_SI(F.p1839);
((*(yR100 *)rt_nil_check(F.p1838))).f_lo = yr1016_SE();
yr986_SB();
yr1010_SI(F.p1840);
((*(yR100 *)rt_nil_check(F.p1838))).f_hi = yr1016_SE();
((*(yR100 *)rt_nil_check(F.p1838))).f_mlo = F.p1839;
((*(yR100 *)rt_nil_check(F.p1838))).f_mhi = F.p1840;
((*(yR100 *)rt_nil_check(F.p1838))).f_hasm = 1;
((*(yR100 *)rt_nil_check(F.p1838))).f_dname = INT64_C(0);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1845_NewTid(rt_int a_p1846) {
struct yf1847 F;
memset((void *)&F, 0, sizeof F);
F.p1846 = a_p1846;
F.v4305 = yr1141_NewSerial();
yr986_SB();
if ((!(F.p1846 == INT64_C(0)))) {
yr1004_ST(F.p1846);
} else {
yr997_SA(y_str("anonymous", 9));
}
yr997_SA(y_str("#", 1));
yr1010_SI(F.v4305);
{ rt_int rv4309 = yr1016_SE();
return rv4309; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1851_MakeRep(void * a_p1852, rt_int a_p1853, rt_int a_p1854) {
struct yf1855 F;
memset((void *)&F, 0, sizeof F);
F.p1852 = a_p1852;
F.p1853 = a_p1853;
F.p1854 = a_p1854;
F.v4325 = ((*(yR95 *)rt_nil_check(F.p1852))).f_kind;
F.v4329 = INT64_C(0);
F.v4331 = F.p1853;
if ((!(((*(yR95 *)rt_nil_check(F.p1852))).f_text == INT64_C(0)))) {
F.v4323 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(F.p1852))).f_text, ((*(yR95 *)rt_nil_check(F.p1852))).f_line));
if ((((!(((*(yR115 *)rt_nil_check(F.v4323))).f_kind == v840))) && ((!(((*(yR115 *)rt_nil_check(F.v4323))).f_kind == v837))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p1852))).f_line, ((*(yR95 *)rt_nil_check(F.p1852))).f_text, y_str(" is not a type", 14));
}
F.v4329 = ((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4323))).f_rep))).f_tid;
F.v4331 = ((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4323))).f_rep))).f_tname;
}
if ((F.v4325 == v642)) {
F.v4323 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(F.p1852))).f_name, ((*(yR95 *)rt_nil_check(F.p1852))).f_line));
if ((((!(((*(yR115 *)rt_nil_check(F.v4323))).f_kind == v840))) && ((!(((*(yR115 *)rt_nil_check(F.v4323))).f_kind == v837))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p1852))).f_line, ((*(yR95 *)rt_nil_check(F.p1852))).f_name, y_str(" is not a representation", 24));
}
F.v4315 = ((*(yR115 *)rt_nil_check(F.v4323))).f_rep;
if ((!(((*(yR95 *)rt_nil_check(F.p1852))).f_a == ((void *)0)))) {
F.v4315 = yr1714_CopyRep(F.v4315);
yr1824_Qualify(F.v4315, ((*(yR95 *)rt_nil_check(F.p1852))).f_a);
}
{ void * rv4336 = F.v4315;
return rv4336; }
}
if ((F.v4329 == INT64_C(0))) {
F.v4329 = yr1845_NewTid(F.p1853);
if ((F.v4331 == INT64_C(0))) {
F.v4331 = F.v4329;
}
}
if ((F.v4325 == v645)) {
F.v4315 = yr1707_NewRep(v786, F.v4329);
((*(yR100 *)rt_nil_check(F.v4315))).f_tname = F.v4331;
((*(yR100 *)rt_nil_check(F.v4315))).f_ordered = (((*(yR95 *)rt_nil_check(F.p1852))).f_flag == INT64_C(1));
((*(yR100 *)rt_nil_check(F.v4315))).f_lits = ((*(yR95 *)rt_nil_check(F.p1852))).f_a;
((*(yR100 *)rt_nil_check(F.v4315))).f_nlits = yr1260_Count(((*(yR95 *)rt_nil_check(F.p1852))).f_a);
yr1837_SetRange(F.v4315, INT64_C(0), rt_range(rt_sub(((*(yR100 *)rt_nil_check(F.v4315))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1831_DefineLits(F.v4315);
if ((!(((*(yR95 *)rt_nil_check(F.p1852))).f_b == ((void *)0)))) {
yr1824_Qualify(F.v4315, ((*(yR95 *)rt_nil_check(F.p1852))).f_b);
}
{ void * rv4343 = F.v4315;
return rv4343; }
}
if ((F.v4325 == v648)) {
F.v4315 = yr1707_NewRep(v789, F.v4329);
((*(yR100 *)rt_nil_check(F.v4315))).f_tname = F.v4331;
((*(yR100 *)rt_nil_check(F.v4315))).f_ordered = 1;
((*(yR100 *)rt_nil_check(F.v4315))).f_lits = ((*(yR95 *)rt_nil_check(F.p1852))).f_a;
((*(yR100 *)rt_nil_check(F.v4315))).f_nlits = yr1260_Count(((*(yR95 *)rt_nil_check(F.p1852))).f_a);
if ((((*(yR100 *)rt_nil_check(F.v4315))).f_nlits > INT64_C(256))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1852))).f_line, y_str("this implementation takes alphabets of up to 256 characters", 59));
}
yr1837_SetRange(F.v4315, INT64_C(0), rt_range(rt_sub(((*(yR100 *)rt_nil_check(F.v4315))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((!(((*(yR95 *)rt_nil_check(F.p1852))).f_b == ((void *)0)))) {
yr1824_Qualify(F.v4315, ((*(yR95 *)rt_nil_check(F.p1852))).f_b);
}
{ void * rv4350 = F.v4315;
return rv4350; }
}
if ((F.v4325 == v651)) {
F.v4315 = yr1707_NewRep(v792, F.v4329);
((*(yR100 *)rt_nil_check(F.v4315))).f_tname = F.v4331;
F.v4327 = ((*(yR95 *)rt_nil_check(F.p1852))).f_a;
F.v4321 = ((void *)0);
while ((!(F.v4327 == ((void *)0)))) {
F.v4319 = yr1714_CopyRep(yr1851_MakeRep(F.v4327, INT64_C(0), 0));
if ((!yr1720_IsDiscrete(F.v4319))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v4327))).f_line, y_str("an index is an integer or scalar representation", 47));
}
yr1791_CheckRepresented(F.v4319, ((*(yR95 *)rt_nil_check(F.v4327))).f_line);
((*(yR100 *)rt_nil_check(F.v4319))).f_link = ((void *)0);
if ((F.v4321 == ((void *)0))) {
((*(yR100 *)rt_nil_check(F.v4315))).f_idx = F.v4319;
} else {
((*(yR100 *)rt_nil_check(F.v4321))).f_link = F.v4319;
}
F.v4321 = F.v4319;
((*(yR100 *)rt_nil_check(F.v4315))).f_nidx = rt_range(rt_add(((*(yR100 *)rt_nil_check(F.v4315))).f_nidx, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4327 = ((*(yR95 *)rt_nil_check(F.v4327))).f_next;
}
if ((((*(yR100 *)rt_nil_check(F.v4315))).f_nidx > INT64_C(4))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1852))).f_line, y_str("this implementation takes arrays of up to 4 dimensions", 54));
}
((*(yR100 *)rt_nil_check(F.v4315))).f_elem = yr1851_MakeRep(((*(yR95 *)rt_nil_check(F.p1852))).f_b, INT64_C(0), F.p1854);
if ((!F.p1854)) {
yr1791_CheckRepresented(((*(yR100 *)rt_nil_check(F.v4315))).f_elem, ((*(yR95 *)rt_nil_check(F.p1852))).f_line);
yr1871_BuildArrayDesc(F.v4315);
} else {
((*(yR100 *)rt_nil_check(F.v4315))).f_abstract = ((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.v4315))).f_elem))).f_abstract;
if ((!((*(yR100 *)rt_nil_check(F.v4315))).f_abstract)) {
yr1871_BuildArrayDesc(F.v4315);
}
}
((*(yR100 *)rt_nil_check(F.v4315))).f_deep = 1;
{ void * rv4360 = F.v4315;
return rv4360; }
}
if ((F.v4325 == v654)) {
F.v4315 = yr1707_NewRep(v795, F.v4329);
((*(yR100 *)rt_nil_check(F.v4315))).f_tname = F.v4331;
yr1901_MakeRecord(F.v4315, F.p1852, F.p1854);
{ void * rv4361 = F.v4315;
return rv4361; }
}
if (((((F.v4325 == v660)) || ((F.v4325 == v657))) || ((F.v4325 == v663)))) {
if ((F.v4325 == v660)) {
F.v4315 = yr1707_NewRep(v798, F.v4329);
((*(yR100 *)rt_nil_check(F.v4315))).f_tname = F.v4331;
if (((((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p1852))).f_a))).f_kind == v642)) && ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p1852))).f_a))).f_a == ((void *)0)))) && ((yr1612_Find(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p1852))).f_a))).f_name) == ((void *)0))))) {
((*(yR100 *)rt_nil_check(F.v4315))).f_forward = ((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p1852))).f_a))).f_name;
((*(yR100 *)rt_nil_check(F.v4315))).f_fwdscope = v1570;
F.v4327 = yr1245_NewNode(v639, ((*(yR95 *)rt_nil_check(F.p1852))).f_line);
((*(yR95 *)rt_nil_check(F.v4327))).f_rep = F.v4315;
((*(yR95 *)rt_nil_check(F.v4327))).f_next = v1705;
v1705 = F.v4327;
{ void * rv4362 = F.v4315;
return rv4362; }
}
((*(yR100 *)rt_nil_check(F.v4315))).f_elem = yr1851_MakeRep(((*(yR95 *)rt_nil_check(F.p1852))).f_a, INT64_C(0), 0);
{ void * rv4365 = F.v4315;
return rv4365; }
}
if ((F.v4325 == v657)) {
F.v4315 = yr1707_NewRep(v801, F.v4329);
((*(yR100 *)rt_nil_check(F.v4315))).f_tname = F.v4331;
((*(yR100 *)rt_nil_check(F.v4315))).f_elem = yr1851_MakeRep(((*(yR95 *)rt_nil_check(F.p1852))).f_a, INT64_C(0), F.p1854);
{ void * rv4367 = F.v4315;
return rv4367; }
}
F.v4315 = yr1707_NewRep(v804, F.v4329);
((*(yR100 *)rt_nil_check(F.v4315))).f_tname = F.v4331;
((*(yR100 *)rt_nil_check(F.v4315))).f_elem = yr1851_MakeRep(((*(yR95 *)rt_nil_check(F.p1852))).f_a, INT64_C(0), 0);
if ((!yr1720_IsDiscrete(((*(yR100 *)rt_nil_check(F.v4315))).f_elem))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1852))).f_line, y_str("a set is of an integer or scalar representation", 47));
}
yr1791_CheckRepresented(((*(yR100 *)rt_nil_check(F.v4315))).f_elem, ((*(yR95 *)rt_nil_check(F.p1852))).f_line);
{ void * rv4371 = F.v4315;
return rv4371; }
}
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1852))).f_line, y_str("this representation is not translated", 37));
{ void * rv4373 = ((void *)0);
return rv4373; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1859_ResolvePending(rt_int a_p1860, void * a_p1861) {
struct yf1862 F;
memset((void *)&F, 0, sizeof F);
F.p1860 = a_p1860;
F.p1861 = a_p1861;
F.v4378 = v1705;
F.v4380 = ((void *)0);
while ((!(F.v4378 == ((void *)0)))) {
if ((((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4378))).f_rep))).f_forward == F.p1860)) {
((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4378))).f_rep))).f_elem = F.p1861;
((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4378))).f_rep))).f_forward = INT64_C(0);
if ((F.v4380 == ((void *)0))) {
v1705 = ((*(yR95 *)rt_nil_check(F.v4378))).f_next;
} else {
((*(yR95 *)rt_nil_check(F.v4380))).f_next = ((*(yR95 *)rt_nil_check(F.v4378))).f_next;
}
} else {
F.v4380 = F.v4378;
}
F.v4378 = ((*(yR95 *)rt_nil_check(F.v4378))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1866_CheckPending(void) {
struct yf1867 F;
memset((void *)&F, 0, sizeof F);
F.v4384 = v1705;
while ((!(F.v4384 == ((void *)0)))) {
if ((((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4384))).f_rep))).f_fwdscope >= v1570)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.v4384))).f_line, ((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4384))).f_rep))).f_forward, y_str(" is named by a pointer but not declared", 39));
}
F.v4384 = ((*(yR95 *)rt_nil_check(F.v4384))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1871_BuildArrayDesc(void * a_p1872) {
struct yf1873 F;
memset((void *)&F, 0, sizeof F);
F.p1872 = a_p1872;
yr1762_NewDesc(F.p1872);
yr986_SB();
yr997_SA(y_str("{ rt_int lo[", 12));
yr1010_SI(((*(yR100 *)rt_nil_check(F.p1872))).f_nidx);
yr997_SA(y_str("] = {", 5));
F.v4389 = ((*(yR100 *)rt_nil_check(F.p1872))).f_idx;
F.v4393 = 1;
while ((!(F.v4389 == ((void *)0)))) {
if ((!F.v4393)) {
yr997_SA(y_str(", ", 2));
}
F.v4393 = 0;
yr1004_ST(yr1812_LoText(F.v4389));
F.v4389 = ((*(yR100 *)rt_nil_check(F.v4389))).f_link;
}
yr997_SA(y_str("}, hi[", 6));
yr1010_SI(((*(yR100 *)rt_nil_check(F.p1872))).f_nidx);
yr997_SA(y_str("] = {", 5));
F.v4389 = ((*(yR100 *)rt_nil_check(F.p1872))).f_idx;
F.v4393 = 1;
while ((!(F.v4389 == ((void *)0)))) {
if ((!F.v4393)) {
yr997_SA(y_str(", ", 2));
}
F.v4393 = 0;
yr1004_ST(yr1818_HiText(F.v4389));
F.v4389 = ((*(yR100 *)rt_nil_check(F.v4389))).f_link;
}
yr997_SA(y_str("}; y_desc_array(", 16));
yr1004_ST(yr1756_DescOf(F.p1872));
yr997_SA(y_str(", ", 2));
yr1010_SI(((*(yR100 *)rt_nil_check(F.p1872))).f_nidx);
yr997_SA(y_str(", lo, hi, ", 10));
yr1004_ST(yr1756_DescOf(((*(yR100 *)rt_nil_check(F.p1872))).f_elem));
yr997_SA(y_str("); }", 4));
F.v4391 = yr1016_SE();
yr1092_Emit(F.v4391);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1877_AddField(void * a_p1878, void * * a_p1879, rt_int a_p1880, void * a_p1881, rt_int a_p1882, rt_int a_p1883, void * a_p1884, rt_int a_p1885) {
struct yf1886 F;
memset((void *)&F, 0, sizeof F);
F.p1878 = a_p1878;
F.p1879 = a_p1879;
F.p1880 = a_p1880;
F.p1881 = a_p1881;
F.p1882 = a_p1882;
F.p1883 = a_p1883;
F.p1884 = a_p1884;
F.p1885 = a_p1885;
F.v4418 = ((*(yR100 *)rt_nil_check(F.p1878))).f_fields;
while ((!(F.v4418 == ((void *)0)))) {
if ((((*(yR105 *)rt_nil_check(F.v4418))).f_name == F.p1880)) {
yr1132_FailN(F.p1885, F.p1880, y_str(" is a component twice", 21));
}
F.v4418 = ((*(yR105 *)rt_nil_check(F.v4418))).f_next;
}
({ F.v4418 = rt_alloc(sizeof(yR105)); });
(*(yR105 *)rt_nil_check(F.v4418)) = ((yR105){ .f_name = F.p1880, .f_rep = F.p1881, .f_isconst = F.p1882, .f_variant = F.p1883, .f_labels = F.p1884, .f_next = ((void *)0) });
if (((*F.p1879) == ((void *)0))) {
((*(yR100 *)rt_nil_check(F.p1878))).f_fields = F.v4418;
} else {
((*(yR105 *)rt_nil_check((*F.p1879)))).f_next = F.v4418;
}
(*F.p1879) = F.v4418;
if (yr1744_Deep(F.p1881)) {
((*(yR100 *)rt_nil_check(F.p1878))).f_deep = 1;
}
if (((*(yR100 *)rt_nil_check(F.p1881))).f_abstract) {
((*(yR100 *)rt_nil_check(F.p1878))).f_abstract = 1;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1890_AddFields(void * a_p1891, void * * a_p1892, void * a_p1893, rt_int a_p1894, void * a_p1895, rt_int a_p1896) {
struct yf1897 F;
memset((void *)&F, 0, sizeof F);
F.p1891 = a_p1891;
F.p1892 = a_p1892;
F.p1893 = a_p1893;
F.p1894 = a_p1894;
F.p1895 = a_p1895;
F.p1896 = a_p1896;
F.v4430 = F.p1893;
F.v4432 = F.p1893;
while ((!(F.v4430 == ((void *)0)))) {
F.v4434 = yr1851_MakeRep(((*(yR95 *)rt_nil_check(F.v4430))).f_b, INT64_C(0), F.p1896);
if ((!F.p1896)) {
yr1791_CheckRepresented(F.v4434, ((*(yR95 *)rt_nil_check(F.v4430))).f_line);
}
if ((((((*(yR100 *)rt_nil_check(F.v4434))).f_kind == v807)) || ((((*(yR100 *)rt_nil_check(F.v4434))).f_kind == v801)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v4430))).f_line, y_str("this implementation does not keep signals or files in records", 61));
}
F.v4432 = ((*(yR95 *)rt_nil_check(F.v4430))).f_a;
while ((!(F.v4432 == ((void *)0)))) {
yr1877_AddField(F.p1891, &(*F.p1892), ((*(yR95 *)rt_nil_check(F.v4432))).f_name, F.v4434, (((*(yR95 *)rt_nil_check(F.v4430))).f_ival == v240), F.p1894, F.p1895, ((*(yR95 *)rt_nil_check(F.v4432))).f_line);
F.v4432 = ((*(yR95 *)rt_nil_check(F.v4432))).f_next;
}
F.v4430 = ((*(yR95 *)rt_nil_check(F.v4430))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1901_MakeRecord(void * a_p1902, void * a_p1903, rt_int a_p1904) {
struct yf1905 F;
memset((void *)&F, 0, sizeof F);
F.p1902 = a_p1902;
F.p1903 = a_p1903;
F.p1904 = a_p1904;
F.v4442 = ((void *)0);
F.v4450 = INT64_C(0);
F.v4457 = INT64_C(0);
yr1890_AddFields(F.p1902, &F.v4442, ((*(yR95 *)rt_nil_check(F.p1903))).f_a, INT64_C(0), ((void *)0), F.p1904);
if ((!(((*(yR95 *)rt_nil_check(F.p1903))).f_b == ((void *)0)))) {
F.v4444 = ((*(yR95 *)rt_nil_check(F.p1903))).f_b;
F.v4448 = yr1851_MakeRep(((*(yR95 *)rt_nil_check(F.v4444))).f_b, INT64_C(0), 0);
if ((!yr1720_IsDiscrete(F.v4448))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v4444))).f_line, y_str("the case-selection component is integer or scalar", 49));
}
yr1877_AddField(F.p1902, &F.v4442, ((*(yR95 *)rt_nil_check(F.v4444))).f_name, F.v4448, 1, INT64_C(0), ((void *)0), ((*(yR95 *)rt_nil_check(F.v4444))).f_line);
((*(yR100 *)rt_nil_check(F.p1902))).f_selector = F.v4442;
F.v4446 = ((*(yR95 *)rt_nil_check(F.v4444))).f_a;
while ((!(F.v4446 == ((void *)0)))) {
F.v4450 = rt_range(rt_add(F.v4450, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1890_AddFields(F.p1902, &F.v4442, ((*(yR95 *)rt_nil_check(F.v4446))).f_b, F.v4450, ((*(yR95 *)rt_nil_check(F.v4446))).f_a, F.p1904);
F.v4446 = ((*(yR95 *)rt_nil_check(F.v4446))).f_next;
}
}
if ((F.p1904 && ((*(yR100 *)rt_nil_check(F.p1902))).f_abstract)) {
return;
}
((*(yR100 *)rt_nil_check(F.p1902))).f_abstract = 0;
((*(yR100 *)rt_nil_check(F.p1902))).f_cname = yr1146_Fresh(y_str("yR", 2));
yr986_SB();
yr997_SA(y_str("typedef struct ", 15));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1902))).f_cname);
yr997_SA(y_str(" ", 1));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1902))).f_cname);
yr997_SA(y_str(";", 1));
F.v4455 = yr1016_SE();
yr1070_Put(&v942, F.v4455);
yr986_SB();
yr997_SA(y_str("struct ", 7));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1902))).f_cname);
yr997_SA(y_str(" {", 2));
F.v4453 = ((*(yR100 *)rt_nil_check(F.p1902))).f_fields;
while ((!(F.v4453 == ((void *)0)))) {
yr997_SA(y_str(" ", 1));
yr1004_ST(yr1750_CType(((*(yR105 *)rt_nil_check(F.v4453))).f_rep));
yr997_SA(y_str(" f_", 3));
yr1004_ST(((*(yR105 *)rt_nil_check(F.v4453))).f_name);
yr997_SA(y_str(";", 1));
F.v4457 = rt_range(rt_add(F.v4457, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4453 = ((*(yR105 *)rt_nil_check(F.v4453))).f_next;
}
if ((F.v4457 == INT64_C(0))) {
yr997_SA(y_str(" int empty_;", 12));
}
yr997_SA(y_str(" };", 3));
F.v4455 = yr1016_SE();
yr1070_Put(&v944, F.v4455);
yr1762_NewDesc(F.p1902);
yr986_SB();
yr997_SA(y_str("{ static const size_t o[] = {", 29));
F.v4453 = ((*(yR100 *)rt_nil_check(F.p1902))).f_fields;
while ((!(F.v4453 == ((void *)0)))) {
yr997_SA(y_str("offsetof(", 9));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1902))).f_cname);
yr997_SA(y_str(", f_", 4));
yr1004_ST(((*(yR105 *)rt_nil_check(F.v4453))).f_name);
yr997_SA(y_str("), ", 3));
F.v4453 = ((*(yR105 *)rt_nil_check(F.v4453))).f_next;
}
yr997_SA(y_str("0}; const ydesc **f = rt_alloc(", 31));
yr1010_SI(rt_range(rt_add(F.v4457, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr997_SA(y_str(" * sizeof *f);", 14));
F.v4450 = INT64_C(0);
F.v4453 = ((*(yR100 *)rt_nil_check(F.p1902))).f_fields;
while ((!(F.v4453 == ((void *)0)))) {
yr997_SA(y_str(" f[", 3));
yr1010_SI(F.v4450);
yr997_SA(y_str("] = ", 4));
yr1004_ST(yr1756_DescOf(((*(yR105 *)rt_nil_check(F.v4453))).f_rep));
yr997_SA(y_str(";", 1));
F.v4450 = rt_range(rt_add(F.v4450, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4453 = ((*(yR105 *)rt_nil_check(F.v4453))).f_next;
}
yr997_SA(y_str(" y_desc_record(", 15));
yr1004_ST(yr1756_DescOf(F.p1902));
yr997_SA(y_str(", sizeof(", 9));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1902))).f_cname);
yr997_SA(y_str("), ", 3));
yr1010_SI(F.v4457);
yr997_SA(y_str(", o, (const ydesc *const *)f); }", 32));
F.v4455 = yr1016_SE();
yr1092_Emit(F.v4455);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1909_FindField(void * a_p1910, rt_int a_p1911) {
struct yf1912 F;
memset((void *)&F, 0, sizeof F);
F.p1910 = a_p1910;
F.p1911 = a_p1911;
F.v4504 = ((*(yR100 *)rt_nil_check(F.p1910))).f_fields;
while ((!(F.v4504 == ((void *)0)))) {
if ((((*(yR105 *)rt_nil_check(F.v4504))).f_name == F.p1911)) {
{ void * rv4505 = F.v4504;
return rv4505; }
}
F.v4504 = ((*(yR105 *)rt_nil_check(F.v4504))).f_next;
}
{ void * rv4506 = ((void *)0);
return rv4506; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2029_CharOrd(void * a_p2030, rt_int a_p2031) {
struct yf2032 F;
memset((void *)&F, 0, sizeof F);
F.p2030 = a_p2030;
F.p2031 = a_p2031;
if ((((*(yR100 *)rt_nil_check(F.p2030))).f_tid == ((*(yR100 *)rt_nil_check(v1687))).f_tid)) {
if ((((rt_int *)(v890).p)[y_ix1(v890, F.p2031)] == INT64_C(1))) {
{ rt_int rv4522 = ((rt_int *)(v931).p)[y_ix1(v931, yr1063_TChar(F.p2031, INT64_C(1)))];
return rv4522; }
}
F.v4513 = INT64_C(0);
F.v4517 = INT64_C(1);
F.lo4527 = INT64_C(1);
F.hi4528 = ((rt_int *)(v890).p)[y_ix1(v890, v2024)];
{ rt_int hi4532 = F.hi4528;
for (rt_int i4531 = F.lo4527; i4531 <= hi4532; i4531++) { F.c_4530 = i4531;
if ((yr1063_TChar(v2024, rt_range(F.c_4530, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 32)) {
F.v4519 = yr1028_Intern(rt_range(rt_add(((rt_int *)(v888).p)[y_ix1(v888, v2024)], (rt_sub(F.v4517, INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub(F.c_4530, F.v4517), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((F.v4519 == F.p2031)) {
if ((F.v4513 < INT64_C(32))) {
{ rt_int rv4539 = F.v4513;
return rv4539; }
}
if ((F.v4513 == INT64_C(32))) {
{ rt_int rv4542 = INT64_C(32);
return rv4542; }
}
if ((F.v4513 == INT64_C(33))) {
{ rt_int rv4545 = INT64_C(127);
return rv4545; }
}
if ((F.v4513 == INT64_C(34))) {
{ rt_int rv4548 = INT64_C(39);
return rv4548; }
}
{ rt_int rv4550 = INT64_C(34);
return rv4550; }
}
F.v4513 = rt_range(rt_add(F.v4513, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4517 = rt_range(rt_add(F.c_4530, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i4531 == hi4532) break;
}}
{ rt_int rv4556 = INT64_C(-1);
return rv4556; }
}
if ((!(((*(yR100 *)rt_nil_check(F.p2030))).f_kind == v789))) {
{ rt_int rv4558 = INT64_C(-1);
return rv4558; }
}
F.v4511 = ((*(yR100 *)rt_nil_check(F.p2030))).f_lits;
F.v4515 = INT64_C(0);
while ((!(F.v4511 == ((void *)0)))) {
if (yr1048_TEq(((*(yR95 *)rt_nil_check(F.v4511))).f_text, F.p2031)) {
{ rt_int rv4560 = F.v4515;
return rv4560; }
}
F.v4515 = rt_range(rt_add(F.v4515, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4511 = ((*(yR95 *)rt_nil_check(F.v4511))).f_next;
}
{ rt_int rv4564 = INT64_C(-1);
return rv4564; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2036_AlphabetFor(void * a_p2037, void * a_p2038) {
struct yf2039 F;
memset((void *)&F, 0, sizeof F);
F.p2037 = a_p2037;
F.p2038 = a_p2038;
F.v4573 = ((void *)0);
F.v4575 = INT64_C(0);
F.v4578 = INT64_C(0);
if ((!(((*(yR95 *)rt_nil_check(F.p2037))).f_d == ((void *)0)))) {
F.v4569 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2037))).f_d))).f_name, ((*(yR95 *)rt_nil_check(F.p2037))).f_line));
if ((((((!(((*(yR115 *)rt_nil_check(F.v4569))).f_kind == v837))) && ((!(((*(yR115 *)rt_nil_check(F.v4569))).f_kind == v840))))) || ((!(((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4569))).f_rep))).f_kind == v789))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2037))).f_line, ((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2037))).f_d))).f_name, y_str(" is not an alphabet", 19));
}
{ void * rv4581 = ((*(yR115 *)rt_nil_check(F.v4569))).f_rep;
return rv4581; }
}
F.v4578 = INT64_C(1);
if ((((((*(yR95 *)rt_nil_check(F.p2037))).f_kind == v741)) || ((yr2029_CharOrd(v1687, ((*(yR95 *)rt_nil_check(F.p2037))).f_text) >= INT64_C(0))))) {
F.v4575 = INT64_C(1);
F.v4573 = v1687;
}
F.v4571 = v2027;
while ((!(F.v4571 == ((void *)0)))) {
F.v4569 = yr1612_Find(((*(yR95 *)rt_nil_check(F.v4571))).f_name);
if ((!(F.v4569 == ((void *)0)))) {
F.v4569 = yr1677_Real(F.v4569);
if ((((((((*(yR115 *)rt_nil_check(F.v4569))).f_kind == v837)) || ((((*(yR115 *)rt_nil_check(F.v4569))).f_kind == v840)))) && ((((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4569))).f_rep))).f_tid == ((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4571))).f_rep))).f_tid)))) {
F.v4578 = rt_range(rt_add(F.v4578, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((((*(yR95 *)rt_nil_check(F.p2037))).f_kind == v738)) && ((yr2029_CharOrd(((*(yR95 *)rt_nil_check(F.v4571))).f_rep, ((*(yR95 *)rt_nil_check(F.p2037))).f_text) >= INT64_C(0))))) {
F.v4575 = rt_range(rt_add(F.v4575, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4573 = ((*(yR95 *)rt_nil_check(F.v4571))).f_rep;
}
}
}
F.v4571 = ((*(yR95 *)rt_nil_check(F.v4571))).f_next;
}
if ((((((*(yR95 *)rt_nil_check(F.p2037))).f_kind == v741)) && ((F.v4578 > INT64_C(1))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2037))).f_line, y_str("a string in a scope with two alphabets is qualified by its alphabet (VI.A.3)", 76));
}
if ((F.v4575 > INT64_C(1))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2037))).f_line, yr2465_Join(yr1021_T(y_str("'", 1)), ((*(yR95 *)rt_nil_check(F.p2037))).f_text, yr1021_T(y_str("'", 1))), y_str(" is a character of two alphabets here: qualify it (VI.A.3)", 58));
}
if ((F.v4573 == ((void *)0))) {
{ void * rv4596 = v1687;
return rv4596; }
}
{ void * rv4597 = F.v4573;
return rv4597; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2043_CharValue(void * a_p2044, rt_int a_p2045, rt_int a_p2046) {
struct yf2047 F;
memset((void *)&F, 0, sizeof F);
F.p2044 = a_p2044;
F.p2045 = a_p2045;
F.p2046 = a_p2046;
F.v4603 = yr2029_CharOrd(F.p2044, F.p2045);
if ((F.v4603 < INT64_C(0))) {
yr986_SB();
yr997_SA(y_str("'", 1));
yr1004_ST(F.p2045);
yr997_SA(y_str("' is not a character of ", 24));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p2044))).f_tname);
F.v4605 = yr1016_SE();
yr1117_Fail(F.p2046, F.v4605);
}
{ rt_int rv4609 = F.v4603;
return rv4609; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2051_StringCodes(void * a_p2052, rt_int a_p2053, rt_int * a_p2054, rt_int a_p2055) {
struct yf2056 F;
memset((void *)&F, 0, sizeof F);
F.p2052 = a_p2052;
F.p2053 = a_p2053;
F.p2054_o = a_p2054;
F.p2055 = a_p2055;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&F.yd_4627, 1, lo, hi, &y_d_int); }
y_init(&F.yd_4627, &F.v4629);
F.p2054 = INT64_C(0);
F.v4616 = INT64_C(1);
while ((F.v4616 <= ((rt_int *)(v890).p)[y_ix1(v890, F.p2053)])) {
F.v4631 = yr1063_TChar(F.p2053, F.v4616);
if ((F.v4631 == 39)) {
F.v4618 = rt_range(rt_add(F.v4616, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1063_TChar(F.p2053, F.v4618) == 39))) {
F.v4618 = rt_range(rt_add(F.v4618, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v4633 = yr1028_Intern(rt_range(rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p2053)], F.v4616), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v4618, F.v4616)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v4620 = yr2043_CharValue(F.p2052, F.v4633, F.p2055);
F.v4616 = rt_range(rt_add(F.v4618, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v4633 = yr1028_Intern(rt_range(rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p2053)], (rt_sub(F.v4616, INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), INT64_C(1));
F.v4620 = yr2043_CharValue(F.p2052, F.v4633, F.p2055);
F.v4616 = rt_range(rt_add(F.v4616, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.p2054 >= INT64_C(4096))) {
yr1124_FailS(F.p2055, y_str("string literal too long", 23));
}
F.p2054 = rt_range(rt_add(F.p2054, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(F.v4629).p)[y_ix1(F.v4629, F.p2054)] = F.v4620;
}
yr986_SB();
yr991_SC(34);
F.lo4661 = INT64_C(1);
F.hi4662 = F.p2054;
{ rt_int hi4666 = F.hi4662;
for (rt_int i4665 = F.lo4661; i4665 <= hi4666; i4665++) { F.c_4664 = i4665;
F.v4620 = ((rt_int *)(F.v4629).p)[y_ix1(F.v4629, F.c_4664)];
if ((((F.v4620 == INT64_C(34))) || ((F.v4620 == INT64_C(92))))) {
yr991_SC(92);
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, F.v4620)]);
} else if (((((F.v4620 >= INT64_C(32))) && ((F.v4620 < INT64_C(127)))) && (((((!(F.v4620 == INT64_C(63)))) || ((F.c_4664 == INT64_C(1)))) || ((!(((rt_int *)(F.v4629).p)[y_ix1(F.v4629, rt_sub(F.c_4664, INT64_C(1)))] == INT64_C(63)))))))) {
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, F.v4620)]);
} else {
yr991_SC(92);
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, rt_add(INT64_C(48), (rt_div(F.v4620, INT64_C(64)))))]);
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, rt_add(INT64_C(48), (rt_mod((rt_div(F.v4620, INT64_C(8))), INT64_C(8)))))]);
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, rt_add(INT64_C(48), (rt_mod(F.v4620, INT64_C(8)))))]);
}
if (i4665 == hi4666) break;
}}
yr991_SC(34);
{ rt_int rv4693 = yr1016_SE();
(*F.p2054_o) = F.p2054;
return rv4693; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2060_Manifest(void * a_p2061, rt_int * a_p2062, rt_int * a_p2063) {
struct yf2064 F;
memset((void *)&F, 0, sizeof F);
F.p2061 = a_p2061;
F.p2062_o = a_p2062;
F.p2063_o = a_p2063;
F.p2062 = 0;
F.p2063 = INT64_C(0);
if ((((*(yR95 *)rt_nil_check(F.p2061))).f_kind == v729)) {
F.p2062 = 1;
F.p2063 = ((*(yR95 *)rt_nil_check(F.p2061))).f_ival;
(*F.p2062_o) = F.p2062;
(*F.p2063_o) = F.p2063;
return;
}
if ((((*(yR95 *)rt_nil_check(F.p2061))).f_kind == v738)) {
F.v4711 = yr2036_AlphabetFor(F.p2061, ((void *)0));
F.p2063 = yr2029_CharOrd(F.v4711, ((*(yR95 *)rt_nil_check(F.p2061))).f_text);
F.p2062 = (F.p2063 >= INT64_C(0));
(*F.p2062_o) = F.p2062;
(*F.p2063_o) = F.p2063;
return;
}
if ((((*(yR95 *)rt_nil_check(F.p2061))).f_kind == v747)) {
if ((!(((*(yR95 *)rt_nil_check(F.p2061))).f_d == ((void *)0)))) {
F.v4699 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2061))).f_d))).f_name, ((*(yR95 *)rt_nil_check(F.p2061))).f_line));
F.v4699 = yr1637_FindLit(((*(yR95 *)rt_nil_check(F.p2061))).f_name, ((*(yR115 *)rt_nil_check(F.v4699))).f_rep);
} else {
F.v4699 = yr1612_Find(((*(yR95 *)rt_nil_check(F.p2061))).f_name);
}
if ((F.v4699 == ((void *)0))) {
(*F.p2062_o) = F.p2062;
(*F.p2063_o) = F.p2063;
return;
}
F.v4699 = yr1677_Real(F.v4699);
if ((((((((*(yR115 *)rt_nil_check(F.v4699))).f_kind == v843)) || ((((*(yR115 *)rt_nil_check(F.v4699))).f_kind == v834)))) && ((*(yR115 *)rt_nil_check(F.v4699))).f_hasmv)) {
F.p2062 = 1;
F.p2063 = ((*(yR115 *)rt_nil_check(F.v4699))).f_mval;
}
(*F.p2062_o) = F.p2062;
(*F.p2063_o) = F.p2063;
return;
}
if ((((*(yR95 *)rt_nil_check(F.p2061))).f_kind == v771)) {
yr2060_Manifest(((*(yR95 *)rt_nil_check(F.p2061))).f_a, &F.p2062, &F.p2063);
(*F.p2062_o) = F.p2062;
(*F.p2063_o) = F.p2063;
return;
}
if ((((*(yR95 *)rt_nil_check(F.p2061))).f_kind == v765)) {
yr2060_Manifest(((*(yR95 *)rt_nil_check(F.p2061))).f_a, &F.p2062, &F.p2063);
F.p2063 = rt_range(rt_neg(F.p2063), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2062_o) = F.p2062;
(*F.p2063_o) = F.p2063;
return;
}
if ((((*(yR95 *)rt_nil_check(F.p2061))).f_kind == v768)) {
yr2060_Manifest(((*(yR95 *)rt_nil_check(F.p2061))).f_a, &F.v4705, &F.v4701);
yr2060_Manifest(((*(yR95 *)rt_nil_check(F.p2061))).f_b, &F.v4707, &F.v4703);
if ((!((F.v4705 && F.v4707)))) {
(*F.p2062_o) = F.p2062;
(*F.p2063_o) = F.p2063;
return;
}
F.v4709 = ((*(yR95 *)rt_nil_check(F.p2061))).f_name;
F.p2062 = 1;
if ((F.v4709 == v543)) {
F.p2063 = rt_range(rt_add(F.v4701, F.v4703), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v4709 == v546)) {
F.p2063 = rt_range(rt_sub(F.v4701, F.v4703), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v4709 == v549)) {
F.p2063 = rt_range(rt_mul(F.v4701, F.v4703), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v4709 == v246)) && ((!(F.v4703 == INT64_C(0)))))) {
F.p2063 = rt_range(rt_div(F.v4701, F.v4703), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v4709 == v348)) && ((!(F.v4703 == INT64_C(0)))))) {
F.p2063 = rt_range(rt_mod(F.v4701, F.v4703), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.p2062 = 0;
}
(*F.p2062_o) = F.p2062;
(*F.p2063_o) = F.p2063;
return;
}
(*F.p2062_o) = F.p2062;
(*F.p2063_o) = F.p2063;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2068_Convert(rt_int a_p2069, void * a_p2070, void * a_p2071) {
struct yf2072 F;
memset((void *)&F, 0, sizeof F);
F.p2069 = a_p2069;
F.p2070 = a_p2070;
F.p2071 = a_p2071;
if ((yr1720_IsDiscrete(F.p2070) && ((!(((*(yR100 *)rt_nil_check(F.p2070))).f_lo == INT64_C(0)))))) {
if ((((((*(yR100 *)rt_nil_check(F.p2070))).f_hasm && ((*(yR100 *)rt_nil_check(F.p2071))).f_hasm) && ((((*(yR100 *)rt_nil_check(F.p2070))).f_mlo <= ((*(yR100 *)rt_nil_check(F.p2071))).f_mlo))) && ((((*(yR100 *)rt_nil_check(F.p2071))).f_mhi <= ((*(yR100 *)rt_nil_check(F.p2070))).f_mhi)))) {
{ rt_int rv4732 = F.p2069;
return rv4732; }
}
yr986_SB();
yr997_SA(y_str("rt_range(", 9));
yr1004_ST(F.p2069);
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1812_LoText(F.p2070));
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1818_HiText(F.p2070));
yr997_SA(y_str(")", 1));
{ rt_int rv4737 = yr1016_SE();
return rv4737; }
}
if ((((((*(yR100 *)rt_nil_check(F.p2070))).f_kind == v780)) && ((!(((*(yR100 *)rt_nil_check(F.p2070))).f_lo == INT64_C(0)))))) {
yr986_SB();
yr997_SA(y_str("rt_frange(", 10));
yr1004_ST(F.p2069);
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1812_LoText(F.p2070));
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1818_HiText(F.p2070));
yr997_SA(y_str(")", 1));
{ rt_int rv4743 = yr1016_SE();
return rv4743; }
}
if ((((((*(yR100 *)rt_nil_check(F.p2070))).f_kind == v777)) && ((!(((*(yR100 *)rt_nil_check(F.p2070))).f_lo == INT64_C(0)))))) {
yr986_SB();
yr997_SA(y_str("y_fixed(", 8));
yr1004_ST(F.p2069);
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1812_LoText(F.p2070));
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1818_HiText(F.p2070));
yr997_SA(y_str(", ", 2));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p2070))).f_scale);
yr997_SA(y_str(")", 1));
{ rt_int rv4750 = yr1016_SE();
return rv4750; }
}
{ rt_int rv4751 = F.p2069;
return rv4751; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2076_Store(rt_int a_p2077, void * a_p2078, rt_int a_p2079, void * a_p2080, rt_int a_p2081) {
struct yf2082 F;
memset((void *)&F, 0, sizeof F);
F.p2077 = a_p2077;
F.p2078 = a_p2078;
F.p2079 = a_p2079;
F.p2080 = a_p2080;
F.p2081 = a_p2081;
yr1783_CheckType(F.p2081, F.p2078, F.p2080);
if (yr1744_Deep(F.p2078)) {
F.v4761 = yr1146_Fresh(y_str("t", 1));
yr986_SB();
yr997_SA(y_str("{ ", 2));
yr1004_ST(yr1750_CType(F.p2078));
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v4761);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.p2079);
yr997_SA(y_str("; y_store(", 10));
yr1004_ST(yr1756_DescOf(F.p2078));
yr997_SA(y_str(", &", 3));
yr1004_ST(F.p2077);
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v4761);
yr997_SA(y_str("); }", 4));
F.v4759 = yr1016_SE();
yr1092_Emit(F.v4759);
return;
}
yr986_SB();
yr1004_ST(F.p2077);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2068_Convert(F.p2079, F.p2078, F.p2080));
yr997_SA(y_str(";", 1));
F.v4759 = yr1016_SE();
yr1092_Emit(F.v4759);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2086_IsVariable(void * a_p2087) {
struct yf2088 F;
memset((void *)&F, 0, sizeof F);
F.p2087 = a_p2087;
if ((((*(yR95 *)rt_nil_check(F.p2087))).f_kind == v747)) {
F.v4775 = yr1612_Find(((*(yR95 *)rt_nil_check(F.p2087))).f_name);
if ((F.v4775 == ((void *)0))) {
{ rt_int rv4779 = 0;
return rv4779; }
}
if (((*(yR115 *)rt_nil_check(F.v4775))).f_readonly) {
{ rt_int rv4781 = 0;
return rv4781; }
}
{ rt_int rv4782 = (((*(yR115 *)rt_nil_check(yr1677_Real(F.v4775)))).f_kind == v831);
return rv4782; }
}
if ((((*(yR95 *)rt_nil_check(F.p2087))).f_kind == v759)) {
{ rt_int rv4784 = 1;
return rv4784; }
}
if ((((*(yR95 *)rt_nil_check(F.p2087))).f_kind == v756)) {
{ rt_int rv4785 = yr2086_IsVariable(((*(yR95 *)rt_nil_check(F.p2087))).f_a);
return rv4785; }
}
if ((((*(yR95 *)rt_nil_check(F.p2087))).f_kind == v753)) {
if ((!yr2086_IsVariable(((*(yR95 *)rt_nil_check(F.p2087))).f_a))) {
{ rt_int rv4787 = 0;
return rv4787; }
}
F.v4777 = yr1909_FindField(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2087))).f_a))).f_rep, ((*(yR95 *)rt_nil_check(F.p2087))).f_name);
if ((F.v4777 == ((void *)0))) {
{ rt_int rv4789 = 0;
return rv4789; }
}
{ rt_int rv4790 = (!((*(yR105 *)rt_nil_check(F.v4777))).f_isconst);
return rv4790; }
}
{ rt_int rv4792 = 0;
return rv4792; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2092_LValue(void * a_p2093, rt_int * a_p2094, void * * a_p2095) {
struct yf2096 F;
memset((void *)&F, 0, sizeof F);
F.p2093 = a_p2093;
F.p2094_o = a_p2094;
F.p2095_o = a_p2095;
yr2119_Expr(F.p2093, ((void *)0), &F.p2094, &F.p2095);
if ((!yr2086_IsVariable(F.p2093))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2093))).f_line, y_str("a variable is needed here (IX.A.1)", 34));
}
(*F.p2094_o) = F.p2094;
(*F.p2095_o) = F.p2095;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2100_Paren(rt_int a_p2101) {
struct yf2102 F;
memset((void *)&F, 0, sizeof F);
F.p2101 = a_p2101;
yr986_SB();
yr997_SA(y_str("(", 1));
yr1004_ST(F.p2101);
yr997_SA(y_str(")", 1));
{ rt_int rv4802 = yr1016_SE();
return rv4802; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2106_Lit(void * a_p2107, rt_int a_p2108) {
struct yf2109 F;
memset((void *)&F, 0, sizeof F);
F.p2107 = a_p2107;
F.p2108 = a_p2108;
F.v4807 = yr1714_CopyRep(F.p2107);
yr1837_SetRange(F.v4807, F.p2108, F.p2108);
((*(yR100 *)rt_nil_check(F.v4807))).f_elem = F.p2107;
{ void * rv4808 = F.v4807;
return rv4808; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2113_Qualifier(void * a_p2114) {
struct yf2115 F;
memset((void *)&F, 0, sizeof F);
F.p2114 = a_p2114;
F.v4812 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2114))).f_d))).f_name, ((*(yR95 *)rt_nil_check(F.p2114))).f_line));
if ((((!(((*(yR115 *)rt_nil_check(F.v4812))).f_kind == v837))) && ((!(((*(yR115 *)rt_nil_check(F.v4812))).f_kind == v840))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2114))).f_line, ((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2114))).f_d))).f_name, y_str(" is not a type", 14));
}
{ void * rv4814 = ((*(yR115 *)rt_nil_check(F.v4812))).f_rep;
return rv4814; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2119_Expr(void * a_p2120, void * a_p2121, rt_int * a_p2122, void * * a_p2123) {
struct yf2124 F;
memset((void *)&F, 0, sizeof F);
F.p2120 = a_p2120;
F.p2121 = a_p2121;
F.p2122_o = a_p2122;
F.p2123_o = a_p2123;
F.v4821 = ((*(yR95 *)rt_nil_check(F.p2120))).f_kind;
v960 = ((*(yR95 *)rt_nil_check(F.p2120))).f_line;
if ((F.v4821 == v771)) {
yr2119_Expr(((*(yR95 *)rt_nil_check(F.p2120))).f_a, F.p2121, &F.v4825, &F.p2123);
F.p2122 = yr2100_Paren(F.v4825);
} else if ((F.v4821 == v729)) {
F.p2123 = yr2106_Lit(v1683, ((*(yR95 *)rt_nil_check(F.p2120))).f_ival);
if ((!(((*(yR95 *)rt_nil_check(F.p2120))).f_d == ((void *)0)))) {
F.v4831 = yr2113_Qualifier(F.p2120);
if ((!(((*(yR100 *)rt_nil_check(F.v4831))).f_kind == v774))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2120))).f_line, y_str("an integer literal qualified by a type that is not INTEGER", 58));
}
((*(yR100 *)rt_nil_check(F.p2123))).f_tid = ((*(yR100 *)rt_nil_check(F.v4831))).f_tid;
((*(yR100 *)rt_nil_check(F.p2123))).f_tname = ((*(yR100 *)rt_nil_check(F.v4831))).f_tname;
}
yr986_SB();
yr997_SA(y_str("INT64_C(", 8));
yr1010_SI(((*(yR95 *)rt_nil_check(F.p2120))).f_ival);
yr997_SA(y_str(")", 1));
F.p2122 = yr1016_SE();
} else if ((F.v4821 == v738)) {
F.v4831 = yr2036_AlphabetFor(F.p2120, F.p2121);
F.v4837 = yr2043_CharValue(F.v4831, ((*(yR95 *)rt_nil_check(F.p2120))).f_text, ((*(yR95 *)rt_nil_check(F.p2120))).f_line);
F.p2123 = yr2106_Lit(F.v4831, F.v4837);
yr986_SB();
yr1010_SI(F.v4837);
F.p2122 = yr1016_SE();
} else if ((F.v4821 == v741)) {
F.v4831 = yr2036_AlphabetFor(F.p2120, F.p2121);
F.v4825 = yr2051_StringCodes(F.v4831, ((*(yR95 *)rt_nil_check(F.p2120))).f_text, &F.v4835, ((*(yR95 *)rt_nil_check(F.p2120))).f_line);
F.p2123 = yr1707_NewRep(v816, yr1021_T(y_str("string", 6)));
((*(yR100 *)rt_nil_check(F.p2123))).f_tname = yr1021_T(y_str("a string literal", 16));
((*(yR100 *)rt_nil_check(F.p2123))).f_elem = F.v4831;
((*(yR100 *)rt_nil_check(F.p2123))).f_nidx = INT64_C(1);
((*(yR100 *)rt_nil_check(F.p2123))).f_nlits = F.v4835;
yr986_SB();
yr997_SA(y_str("y_str(", 6));
yr1004_ST(F.v4825);
yr997_SA(y_str(", ", 2));
yr1010_SI(F.v4835);
yr997_SA(y_str(")", 1));
F.p2122 = yr1016_SE();
} else if ((F.v4821 == v735)) {
F.p2123 = v1695;
if ((!(((*(yR95 *)rt_nil_check(F.p2120))).f_d == ((void *)0)))) {
F.p2123 = yr2113_Qualifier(F.p2120);
}
F.p2122 = yr2100_Paren(((*(yR95 *)rt_nil_check(F.p2120))).f_text);
} else if ((F.v4821 == v732)) {
F.p2123 = v1697;
if ((!(((*(yR95 *)rt_nil_check(F.p2120))).f_d == ((void *)0)))) {
F.p2123 = yr2113_Qualifier(F.p2120);
}
F.p2122 = ((*(yR95 *)rt_nil_check(F.p2120))).f_text;
} else if ((F.v4821 == v744)) {
if ((((*(yR95 *)rt_nil_check(F.p2120))).f_d == ((void *)0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2120))).f_line, y_str("NIL is qualified by the name of a pointer type (VI.B.4)", 55));
}
F.p2123 = yr2113_Qualifier(F.p2120);
if ((!(((*(yR100 *)rt_nil_check(F.p2123))).f_kind == v798))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2120))).f_line, y_str("NIL of a type that is not a pointer", 35));
}
F.p2122 = yr1021_T(y_str("((void *)0)", 11));
} else if ((F.v4821 == v747)) {
if ((!(((*(yR95 *)rt_nil_check(F.p2120))).f_d == ((void *)0)))) {
F.v4831 = yr2113_Qualifier(F.p2120);
F.v4823 = yr1637_FindLit(((*(yR95 *)rt_nil_check(F.p2120))).f_name, F.v4831);
if ((F.v4823 == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2120))).f_line, ((*(yR95 *)rt_nil_check(F.p2120))).f_name, y_str(" is not a literal of that type", 30));
}
} else {
F.v4823 = yr1624_Lookup(((*(yR95 *)rt_nil_check(F.p2120))).f_name, ((*(yR95 *)rt_nil_check(F.p2120))).f_line);
}
yr2136_NameExpr(F.p2120, F.v4823, &F.p2122, &F.p2123);
} else if ((F.v4821 == v750)) {
yr2291_CallExpr(F.p2120, F.p2121, 0, &F.p2122, &F.p2123);
} else if ((F.v4821 == v753)) {
yr2119_Expr(((*(yR95 *)rt_nil_check(F.p2120))).f_a, ((void *)0), &F.v4825, &F.v4831);
((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2120))).f_a))).f_rep = F.v4831;
if ((!(((*(yR100 *)rt_nil_check(F.v4831))).f_kind == v795))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2120))).f_line, ((*(yR95 *)rt_nil_check(F.p2120))).f_name, y_str(": a component of something that is not a record", 47));
}
if (((*(yR100 *)rt_nil_check(F.v4831))).f_opaque) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2120))).f_line, ((*(yR100 *)rt_nil_check(F.v4831))).f_tname, y_str(" is exported opaquely: its components are hidden (X.B.3)", 56));
}
F.v4833 = yr1909_FindField(F.v4831, ((*(yR95 *)rt_nil_check(F.p2120))).f_name);
if ((F.v4833 == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2120))).f_line, ((*(yR95 *)rt_nil_check(F.p2120))).f_name, y_str(" is not a component of this record", 34));
}
F.p2123 = ((*(yR105 *)rt_nil_check(F.v4833))).f_rep;
if ((!(((*(yR105 *)rt_nil_check(F.v4833))).f_variant == INT64_C(0)))) {
F.v4827 = yr1146_Fresh(y_str("vr", 2));
yr986_SB();
yr997_SA(y_str("(*({ ", 5));
yr1004_ST(yr1750_CType(F.v4831));
yr997_SA(y_str(" *", 2));
yr1004_ST(F.v4827);
yr997_SA(y_str(" = &", 4));
yr1004_ST(yr2100_Paren(F.v4825));
yr997_SA(y_str("; if (!(", 8));
yr1004_ST(yr2128_VariantTest(F.v4831, F.v4833, F.v4827));
yr997_SA(y_str(")) rt_raise(RT_X_TAG); &", 24));
yr1004_ST(F.v4827);
yr997_SA(y_str("->f_", 4));
yr1004_ST(((*(yR95 *)rt_nil_check(F.p2120))).f_name);
yr997_SA(y_str("; }))", 5));
F.p2122 = yr1016_SE();
} else {
yr986_SB();
yr1004_ST(yr2100_Paren(F.v4825));
yr997_SA(y_str(".f_", 3));
yr1004_ST(((*(yR95 *)rt_nil_check(F.p2120))).f_name);
F.p2122 = yr1016_SE();
}
} else if ((F.v4821 == v759)) {
yr2119_Expr(((*(yR95 *)rt_nil_check(F.p2120))).f_a, ((void *)0), &F.v4825, &F.v4831);
if ((!(((*(yR100 *)rt_nil_check(F.v4831))).f_kind == v798))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2120))).f_line, y_str("^ of something that is not a pointer", 36));
}
if ((((*(yR100 *)rt_nil_check(F.v4831))).f_elem == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2120))).f_line, ((*(yR100 *)rt_nil_check(F.v4831))).f_forward, y_str(" is not declared", 16));
}
F.p2123 = ((*(yR100 *)rt_nil_check(F.v4831))).f_elem;
yr986_SB();
yr997_SA(y_str("(*(", 3));
yr1004_ST(yr1750_CType(F.p2123));
yr997_SA(y_str(" *)rt_nil_check(", 16));
yr1004_ST(F.v4825);
yr997_SA(y_str("))", 2));
F.p2122 = yr1016_SE();
} else if ((F.v4821 == v756)) {
yr2145_IndexExpr(F.p2120, &F.p2122, &F.p2123);
} else if ((F.v4821 == v762)) {
yr2119_Expr(((*(yR95 *)rt_nil_check(F.p2120))).f_a, v1685, &F.v4825, &F.v4831);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2120))).f_line, v1685, F.v4831);
F.p2123 = v1685;
yr986_SB();
yr997_SA(y_str("(!", 2));
yr1004_ST(F.v4825);
yr997_SA(y_str(")", 1));
F.p2122 = yr1016_SE();
} else if ((F.v4821 == v765)) {
if ((!yr2280_UserOp(F.p2120, rt_range(v546, INT64_C(0), INT64_C(4000000)), ((*(yR95 *)rt_nil_check(F.p2120))).f_a, ((void *)0), &F.p2122, &F.p2123))) {
yr2119_Expr(((*(yR95 *)rt_nil_check(F.p2120))).f_a, F.p2121, &F.v4825, &F.v4831);
yr2153_NegExpr(F.p2120, F.v4825, F.v4831, &F.p2122, &F.p2123);
}
} else if ((F.v4821 == v768)) {
yr2202_BinExpr(F.p2120, F.p2121, &F.p2122, &F.p2123);
} else {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2120))).f_line, y_str("not an expression", 17));
}
((*(yR95 *)rt_nil_check(F.p2120))).f_rep = F.p2123;
(*F.p2122_o) = F.p2122;
(*F.p2123_o) = F.p2123;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2128_VariantTest(void * a_p2129, void * a_p2130, rt_int a_p2131) {
struct yf2132 F;
memset((void *)&F, 0, sizeof F);
F.p2129 = a_p2129;
F.p2130 = a_p2130;
F.p2131 = a_p2131;
F.v4878 = ((*(yR105 *)rt_nil_check(F.p2130))).f_labels;
yr986_SB();
yr997_SA(y_str("0", 1));
while ((!(F.v4878 == ((void *)0)))) {
yr2060_Manifest(F.v4878, &F.v4880, &F.v4882);
yr997_SA(y_str(" || ", 4));
yr1004_ST(F.p2131);
yr997_SA(y_str("->f_", 4));
yr1004_ST(((*(yR105 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p2129))).f_selector))).f_name);
yr997_SA(y_str(" == ", 4));
yr1010_SI(F.v4882);
F.v4878 = ((*(yR95 *)rt_nil_check(F.v4878))).f_next;
}
{ rt_int rv4887 = yr1016_SE();
return rv4887; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2136_NameExpr(void * a_p2137, void * a_p2138, rt_int * a_p2139, void * * a_p2140) {
struct yf2141 F;
memset((void *)&F, 0, sizeof F);
F.p2137 = a_p2137;
F.p2138 = a_p2138;
F.p2139_o = a_p2139;
F.p2140_o = a_p2140;
F.v4894 = yr1677_Real(F.p2138);
if ((((*(yR115 *)rt_nil_check(F.v4894))).f_kind == v843)) {
if ((((((*(yR95 *)rt_nil_check(F.p2137))).f_d == ((void *)0))) && yr1631_Ambiguous(F.v4894))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2137))).f_line, ((*(yR95 *)rt_nil_check(F.p2137))).f_name, y_str(" names values of two types here: qualify it (VI.A.3)", 52));
}
F.p2140 = yr2106_Lit(((*(yR115 *)rt_nil_check(F.v4894))).f_rep, ((*(yR115 *)rt_nil_check(F.v4894))).f_mval);
yr986_SB();
yr1010_SI(((*(yR115 *)rt_nil_check(F.v4894))).f_mval);
F.p2139 = yr1016_SE();
(*F.p2139_o) = F.p2139;
(*F.p2140_o) = F.p2140;
return;
}
if ((((((*(yR115 *)rt_nil_check(F.v4894))).f_kind == v831)) || ((((*(yR115 *)rt_nil_check(F.v4894))).f_kind == v834)))) {
F.p2140 = ((*(yR115 *)rt_nil_check(F.v4894))).f_rep;
F.p2139 = yr1671_SymPath(F.v4894);
(*F.p2139_o) = F.p2139;
(*F.p2140_o) = F.p2140;
return;
}
if ((((*(yR115 *)rt_nil_check(F.v4894))).f_kind == v846)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2137))).f_line, ((*(yR95 *)rt_nil_check(F.p2137))).f_name, y_str(" is a routine: a call needs ()", 30));
}
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2137))).f_line, ((*(yR95 *)rt_nil_check(F.p2137))).f_name, y_str(" is not a value", 15));
(*F.p2139_o) = F.p2139;
(*F.p2140_o) = F.p2140;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2145_IndexExpr(void * a_p2146, rt_int * a_p2147, void * * a_p2148) {
struct yf2149 F;
memset((void *)&F, 0, sizeof F);
F.p2146 = a_p2146;
F.p2147_o = a_p2147;
F.p2148_o = a_p2148;
yr2119_Expr(((*(yR95 *)rt_nil_check(F.p2146))).f_a, ((void *)0), &F.v4903, &F.v4909);
if ((!yr1732_IsArrayLike(F.v4909))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2146))).f_line, y_str("[] of something that is not an array", 36));
}
F.v4917 = yr1260_Count(((*(yR95 *)rt_nil_check(F.p2146))).f_b);
if ((!(F.v4917 == ((*(yR100 *)rt_nil_check(F.v4909))).f_nidx))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2146))).f_line, y_str("the number of subscripts is not the number of dimensions", 56));
}
F.p2148 = ((*(yR100 *)rt_nil_check(F.v4909))).f_elem;
F.v4919 = (((((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2146))).f_a))).f_kind == v747)) || ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2146))).f_a))).f_kind == v753))) || ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2146))).f_a))).f_kind == v756))) || ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2146))).f_a))).f_kind == v759)));
if (F.v4919) {
F.v4907 = F.v4903;
} else {
F.v4907 = yr1146_Fresh(y_str("ya", 2));
}
yr986_SB();
if ((!F.v4919)) {
yr997_SA(y_str("(*({ yarr ", 10));
yr1004_ST(F.v4907);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.v4903);
yr997_SA(y_str("; &", 3));
}
yr997_SA(y_str("((", 2));
yr1004_ST(yr1750_CType(F.p2148));
yr997_SA(y_str(" *)(", 4));
yr1004_ST(F.v4907);
yr997_SA(y_str(").p)[y_ix", 9));
yr1010_SI(F.v4917);
yr997_SA(y_str("(", 1));
yr1004_ST(F.v4907);
F.p2147 = yr1016_SE();
F.v4915 = ((*(yR95 *)rt_nil_check(F.p2146))).f_b;
F.v4913 = ((*(yR100 *)rt_nil_check(F.v4909))).f_idx;
while ((!(F.v4915 == ((void *)0)))) {
yr2119_Expr(F.v4915, F.v4913, &F.v4905, &F.v4911);
if ((((!(F.v4913 == ((void *)0)))) && ((((*(yR100 *)rt_nil_check(F.v4909))).f_kind == v792)))) {
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.v4915))).f_line, F.v4913, F.v4911);
} else if ((!((((((*(yR100 *)rt_nil_check(F.v4911))).f_kind == v774)) || yr1720_IsDiscrete(F.v4911))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v4915))).f_line, y_str("a subscript is an integer or scalar value", 41));
}
yr986_SB();
yr1004_ST(F.p2147);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v4905);
F.p2147 = yr1016_SE();
if ((!(F.v4913 == ((void *)0)))) {
F.v4913 = ((*(yR100 *)rt_nil_check(F.v4913))).f_link;
}
F.v4915 = ((*(yR95 *)rt_nil_check(F.v4915))).f_next;
}
yr986_SB();
yr1004_ST(F.p2147);
yr997_SA(y_str(")]", 2));
if ((!F.v4919)) {
yr997_SA(y_str("; }))", 5));
}
F.p2147 = yr1016_SE();
(*F.p2147_o) = F.p2147;
(*F.p2148_o) = F.p2148;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2153_NegExpr(void * a_p2154, rt_int a_p2155, void * a_p2156, rt_int * a_p2157, void * * a_p2158) {
struct yf2159 F;
memset((void *)&F, 0, sizeof F);
F.p2154 = a_p2154;
F.p2155 = a_p2155;
F.p2156 = a_p2156;
F.p2157_o = a_p2157;
F.p2158_o = a_p2158;
yr986_SB();
if ((((*(yR100 *)rt_nil_check(F.p2156))).f_kind == v774)) {
F.p2158 = yr1714_CopyRep(F.p2156);
((*(yR100 *)rt_nil_check(F.p2158))).f_lo = INT64_C(0);
((*(yR100 *)rt_nil_check(F.p2158))).f_hasm = 0;
yr997_SA(y_str("rt_neg(", 7));
yr1004_ST(F.p2155);
yr997_SA(y_str(")", 1));
} else if ((((((*(yR100 *)rt_nil_check(F.p2156))).f_kind == v780)) || ((((*(yR100 *)rt_nil_check(F.p2156))).f_kind == v777)))) {
F.p2158 = yr1714_CopyRep(F.p2156);
((*(yR100 *)rt_nil_check(F.p2158))).f_lo = INT64_C(0);
yr997_SA(y_str("(-", 2));
yr1004_ST(F.p2155);
yr997_SA(y_str(")", 1));
} else if ((((*(yR100 *)rt_nil_check(F.p2156))).f_kind == v804)) {
F.p2158 = F.p2156;
yr997_SA(y_str("y_set_compl(", 12));
yr1004_ST(F.p2155);
yr997_SA(y_str(")", 1));
} else {
v897 = 0;
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2154))).f_line, y_str("- of something that is not a number or a set", 44));
}
F.p2157 = yr1016_SE();
(*F.p2157_o) = F.p2157;
(*F.p2158_o) = F.p2158;
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2163_Unbounded(void * a_p2164) {
struct yf2165 F;
memset((void *)&F, 0, sizeof F);
F.p2164 = a_p2164;
F.v4954 = yr1714_CopyRep(F.p2164);
((*(yR100 *)rt_nil_check(F.v4954))).f_lo = INT64_C(0);
((*(yR100 *)rt_nil_check(F.v4954))).f_hi = INT64_C(0);
((*(yR100 *)rt_nil_check(F.v4954))).f_hasm = 0;
{ void * rv4958 = F.v4954;
return rv4958; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2169_Call2(yarr a_p2171, rt_int a_p2172, rt_int a_p2173) {
struct yf2174 F;
memset((void *)&F, 0, sizeof F);
F.p2171 = a_p2171;
F.p2172 = a_p2172;
F.p2173 = a_p2173;
yr986_SB();
yr997_SA(F.p2171);
yr997_SA(y_str("(", 1));
yr1004_ST(F.p2172);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.p2173);
yr997_SA(y_str(")", 1));
{ rt_int rv4966 = yr1016_SE();
return rv4966; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2178_Infix(rt_int a_p2179, yarr a_p2181, rt_int a_p2182) {
struct yf2183 F;
memset((void *)&F, 0, sizeof F);
F.p2179 = a_p2179;
F.p2181 = a_p2181;
F.p2182 = a_p2182;
yr986_SB();
yr997_SA(y_str("(", 1));
yr1004_ST(F.p2179);
yr997_SA(y_str(" ", 1));
yr997_SA(F.p2181);
yr997_SA(y_str(" ", 1));
yr1004_ST(F.p2182);
yr997_SA(y_str(")", 1));
{ rt_int rv4975 = yr1016_SE();
return rv4975; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2187_EqCode(rt_int a_p2188, void * a_p2189, rt_int a_p2190, void * a_p2191) {
struct yf2192 F;
memset((void *)&F, 0, sizeof F);
F.p2188 = a_p2188;
F.p2189 = a_p2189;
F.p2190 = a_p2190;
F.p2191 = a_p2191;
F.v4986 = F.p2189;
if ((((*(yR100 *)rt_nil_check(F.p2189))).f_kind == v816)) {
F.v4986 = F.p2191;
}
if ((((((((*(yR100 *)rt_nil_check(F.v4986))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.v4986))).f_kind == v795))) || ((((*(yR100 *)rt_nil_check(F.v4986))).f_kind == v813))) || ((((*(yR100 *)rt_nil_check(F.v4986))).f_kind == v816)))) {
F.v4982 = yr1146_Fresh(y_str("e", 1));
F.v4984 = yr1146_Fresh(y_str("e", 1));
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(yr1750_CType(F.v4986));
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v4982);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.p2188);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v4984);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.p2190);
yr997_SA(y_str("; y_eq(", 7));
if ((((((*(yR100 *)rt_nil_check(F.v4986))).f_kind == v813)) || ((((*(yR100 *)rt_nil_check(F.v4986))).f_kind == v816)))) {
yr997_SA(y_str("y_desc_vector(", 14));
yr1004_ST(yr1756_DescOf(((*(yR100 *)rt_nil_check(F.v4986))).f_elem));
yr997_SA(y_str(")", 1));
} else {
yr1004_ST(yr1756_DescOf(F.v4986));
}
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v4982);
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v4984);
yr997_SA(y_str("); })", 5));
{ rt_int rv5000 = yr1016_SE();
return rv5000; }
}
if ((((*(yR100 *)rt_nil_check(F.v4986))).f_kind == v804)) {
{ rt_int rv5002 = yr2169_Call2(y_str("y_set_eq", 8), F.p2188, F.p2190);
return rv5002; }
}
{ rt_int rv5004 = yr2178_Infix(F.p2188, y_str("==", 2), F.p2190);
return rv5004; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2196_IsOrdered(void * a_p2197) {
struct yf2198 F;
memset((void *)&F, 0, sizeof F);
F.p2197 = a_p2197;
if ((((((((*(yR100 *)rt_nil_check(F.p2197))).f_kind == v774)) || ((((*(yR100 *)rt_nil_check(F.p2197))).f_kind == v780))) || ((((*(yR100 *)rt_nil_check(F.p2197))).f_kind == v777))) || ((((*(yR100 *)rt_nil_check(F.p2197))).f_kind == v789)))) {
{ rt_int rv5008 = 1;
return rv5008; }
}
{ rt_int rv5009 = (((((*(yR100 *)rt_nil_check(F.p2197))).f_kind == v786)) && ((*(yR100 *)rt_nil_check(F.p2197))).f_ordered);
return rv5009; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2202_BinExpr(void * a_p2203, void * a_p2204, rt_int * a_p2205, void * * a_p2206) {
struct yf2207 F;
memset((void *)&F, 0, sizeof F);
F.p2203 = a_p2203;
F.p2204 = a_p2204;
F.p2205_o = a_p2205;
F.p2206_o = a_p2206;
F.v5016 = ((*(yR95 *)rt_nil_check(F.p2203))).f_name;
if (yr2280_UserOp(F.p2203, F.v5016, ((*(yR95 *)rt_nil_check(F.p2203))).f_a, ((*(yR95 *)rt_nil_check(F.p2203))).f_b, &F.p2205, &F.p2206)) {
(*F.p2205_o) = F.p2205;
(*F.p2206_o) = F.p2206;
return;
}
if ((((F.v5016 == v207)) || ((F.v5016 == v369)))) {
yr2119_Expr(((*(yR95 *)rt_nil_check(F.p2203))).f_a, v1685, &F.v5018, &F.v5024);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2203))).f_line, v1685, F.v5024);
yr2119_Expr(((*(yR95 *)rt_nil_check(F.p2203))).f_b, v1685, &F.v5020, &F.v5026);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2203))).f_line, v1685, F.v5026);
F.p2206 = v1685;
if ((F.v5016 == v207)) {
F.p2205 = yr2178_Infix(F.v5018, y_str("&&", 2), F.v5020);
} else {
F.p2205 = yr2178_Infix(F.v5018, y_str("||", 2), F.v5020);
}
(*F.p2205_o) = F.p2205;
(*F.p2206_o) = F.p2206;
return;
}
if ((F.v5016 == v330)) {
yr2119_Expr(((*(yR95 *)rt_nil_check(F.p2203))).f_b, ((void *)0), &F.v5020, &F.v5026);
if ((!(((*(yR100 *)rt_nil_check(F.v5026))).f_kind == v804))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2203))).f_line, y_str("IN needs a set on its right", 27));
}
yr2119_Expr(((*(yR95 *)rt_nil_check(F.p2203))).f_a, ((*(yR100 *)rt_nil_check(F.v5026))).f_elem, &F.v5018, &F.v5024);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2203))).f_line, ((*(yR100 *)rt_nil_check(F.v5026))).f_elem, F.v5024);
F.p2206 = v1685;
F.p2205 = yr2169_Call2(y_str("y_set_in", 8), F.v5018, F.v5020);
(*F.p2205_o) = F.p2205;
(*F.p2206_o) = F.p2206;
return;
}
F.v5028 = ((void *)0);
if (((((((((!(F.p2204 == ((void *)0)))) && ((!(F.v5016 == v555)))) && ((!(F.v5016 == v540)))) && ((!(F.v5016 == v558)))) && ((!(F.v5016 == v510)))) && ((!(F.v5016 == v561)))) && ((!(F.v5016 == v513))))) {
F.v5028 = F.p2204;
}
yr2119_Expr(((*(yR95 *)rt_nil_check(F.p2203))).f_a, F.v5028, &F.v5018, &F.v5024);
yr2119_Expr(((*(yR95 *)rt_nil_check(F.p2203))).f_b, F.v5024, &F.v5020, &F.v5026);
if ((((F.v5016 == v555)) || ((F.v5016 == v540)))) {
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2203))).f_line, F.v5024, F.v5026);
if (((((((*(yR100 *)rt_nil_check(F.v5024))).f_kind == v807)) || ((((*(yR100 *)rt_nil_check(F.v5024))).f_kind == v801))) || ((((*(yR100 *)rt_nil_check(F.v5024))).f_kind == v810)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2203))).f_line, y_str("= and # are not defined for signals, files and semaphores", 57));
}
if ((((*(yR100 *)rt_nil_check(F.v5024))).f_opaque && (((rt_div(((*(yR100 *)rt_nil_check(F.v5024))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2203))).f_line, ((*(yR100 *)rt_nil_check(F.v5024))).f_tname, y_str(" is opaque here: = is not exported (X.B.3)", 42));
}
F.p2206 = v1685;
F.p2205 = yr2187_EqCode(F.v5018, F.v5024, F.v5020, F.v5026);
if ((F.v5016 == v540)) {
yr986_SB();
yr997_SA(y_str("(!", 2));
yr1004_ST(F.p2205);
yr997_SA(y_str(")", 1));
F.p2205 = yr1016_SE();
}
(*F.p2205_o) = F.p2205;
(*F.p2206_o) = F.p2206;
return;
}
if ((((((F.v5016 == v558)) || ((F.v5016 == v510))) || ((F.v5016 == v561))) || ((F.v5016 == v513)))) {
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2203))).f_line, F.v5024, F.v5026);
if ((!yr2196_IsOrdered(F.v5024))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2203))).f_line, y_str("< <= > >= apply to ordered values (VIII.A.1)", 44));
}
F.p2206 = v1685;
if ((F.v5016 == v558)) {
F.p2205 = yr2178_Infix(F.v5018, y_str("<", 1), F.v5020);
} else if ((F.v5016 == v510)) {
F.p2205 = yr2178_Infix(F.v5018, y_str("<=", 2), F.v5020);
} else if ((F.v5016 == v561)) {
F.p2205 = yr2178_Infix(F.v5018, y_str(">", 1), F.v5020);
} else {
F.p2205 = yr2178_Infix(F.v5018, y_str(">=", 2), F.v5020);
}
(*F.p2205_o) = F.p2205;
(*F.p2206_o) = F.p2206;
return;
}
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2203))).f_line, F.v5024, F.v5026);
F.v5030 = ((*(yR100 *)rt_nil_check(F.v5024))).f_kind;
if ((((*(yR100 *)rt_nil_check(F.v5024))).f_kind == v816)) {
F.v5030 = ((*(yR100 *)rt_nil_check(F.v5026))).f_kind;
}
if ((F.v5016 == v459)) {
if ((F.v5030 == v783)) {
F.p2206 = v1685;
F.p2205 = yr2178_Infix(F.v5018, y_str("!=", 2), F.v5020);
} else if ((F.v5030 == v804)) {
F.p2206 = F.v5024;
F.p2205 = yr2169_Call2(y_str("y_set_xor", 9), F.v5018, F.v5020);
} else {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2203))).f_line, y_str("XOR applies to BOOLEAN values and sets", 38));
}
(*F.p2205_o) = F.p2205;
(*F.p2206_o) = F.p2206;
return;
}
if ((F.v5030 == v804)) {
F.p2206 = F.v5024;
if ((F.v5016 == v543)) {
F.p2205 = yr2169_Call2(y_str("y_set_union", 11), F.v5018, F.v5020);
} else if ((F.v5016 == v546)) {
F.p2205 = yr2169_Call2(y_str("y_set_diff", 10), F.v5018, F.v5020);
} else if ((F.v5016 == v549)) {
F.p2205 = yr2169_Call2(y_str("y_set_inter", 11), F.v5018, F.v5020);
} else {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2203))).f_line, y_str("this operator does not apply to sets", 36));
}
(*F.p2205_o) = F.p2205;
(*F.p2206_o) = F.p2206;
return;
}
if ((F.v5030 == v774)) {
F.p2206 = yr2163_Unbounded(F.v5024);
if ((F.v5016 == v543)) {
F.p2205 = yr2169_Call2(y_str("rt_add", 6), F.v5018, F.v5020);
} else if ((F.v5016 == v546)) {
F.p2205 = yr2169_Call2(y_str("rt_sub", 6), F.v5018, F.v5020);
} else if ((F.v5016 == v549)) {
F.p2205 = yr2169_Call2(y_str("rt_mul", 6), F.v5018, F.v5020);
} else if ((F.v5016 == v246)) {
F.p2205 = yr2169_Call2(y_str("rt_div", 6), F.v5018, F.v5020);
} else if ((F.v5016 == v348)) {
F.p2205 = yr2169_Call2(y_str("rt_mod", 6), F.v5018, F.v5020);
} else if ((F.v5016 == v552)) {
F.p2206 = v1695;
yr986_SB();
yr997_SA(y_str("rt_fdiv((double)(", 17));
yr1004_ST(F.v5018);
yr997_SA(y_str("), (double)(", 12));
yr1004_ST(F.v5020);
yr997_SA(y_str("))", 2));
F.p2205 = yr1016_SE();
} else {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2203))).f_line, F.v5016, y_str(" is a free operator: no definition of it is visible (VIII.A)", 60));
}
(*F.p2205_o) = F.p2205;
(*F.p2206_o) = F.p2206;
return;
}
if ((((F.v5030 == v780)) || ((F.v5030 == v777)))) {
F.p2206 = yr2163_Unbounded(F.v5024);
if ((F.v5016 == v543)) {
F.p2205 = yr2178_Infix(F.v5018, y_str("+", 1), F.v5020);
} else if ((F.v5016 == v546)) {
F.p2205 = yr2178_Infix(F.v5018, y_str("-", 1), F.v5020);
} else if ((F.v5016 == v549)) {
F.p2205 = yr2178_Infix(F.v5018, y_str("*", 1), F.v5020);
} else if ((F.v5016 == v552)) {
F.p2206 = v1695;
F.p2205 = yr2169_Call2(y_str("rt_fdiv", 7), F.v5018, F.v5020);
} else {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2203))).f_line, F.v5016, y_str(" does not apply to these numbers", 32));
}
(*F.p2205_o) = F.p2205;
(*F.p2206_o) = F.p2206;
return;
}
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2203))).f_line, F.v5016, y_str(" does not apply to these values", 31));
(*F.p2205_o) = F.p2205;
(*F.p2206_o) = F.p2206;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2241_Fits(void * a_p2242, void * a_p2243) {
struct yf2244 F;
memset((void *)&F, 0, sizeof F);
F.p2242 = a_p2242;
F.p2243 = a_p2243;
if ((((*(yR100 *)rt_nil_check(F.p2242))).f_kind == v813)) {
if ((!yr1732_IsArrayLike(F.p2243))) {
{ rt_int rv5073 = 0;
return rv5073; }
}
if ((!(((*(yR100 *)rt_nil_check(F.p2243))).f_nidx == ((*(yR100 *)rt_nil_check(F.p2242))).f_nidx))) {
{ rt_int rv5075 = 0;
return rv5075; }
}
{ rt_int rv5076 = yr1768_SameType(((*(yR100 *)rt_nil_check(F.p2242))).f_elem, ((*(yR100 *)rt_nil_check(F.p2243))).f_elem);
return rv5076; }
}
if ((((*(yR100 *)rt_nil_check(F.p2242))).f_kind == v825)) {
{ rt_int rv5078 = 1;
return rv5078; }
}
{ rt_int rv5079 = yr1768_SameType(F.p2242, F.p2243);
return rv5079; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2248_Choose(void * a_p2249, rt_int a_p2250, rt_int a_p2251) {
struct yf2252 F;
memset((void *)&F, 0, sizeof F);
F.p2249 = a_p2249;
F.p2250 = a_p2250;
F.p2251 = a_p2251;
F.v5085 = F.p2249;
while ((!(F.v5085 == ((void *)0)))) {
if ((((*(yR115 *)rt_nil_check(F.v5085))).f_nparams == F.p2251)) {
F.v5089 = 1;
F.v5087 = ((*(yR115 *)rt_nil_check(F.v5085))).f_params;
F.v5091 = INT64_C(1);
while ((!(F.v5087 == ((void *)0)))) {
if ((!yr2241_Fits(((*(yR110 *)rt_nil_check(F.v5087))).f_rep, ((void * *)(v2227).p)[y_ix1(v2227, rt_add(F.p2250, F.v5091))]))) {
F.v5089 = 0;
}
F.v5091 = rt_range(rt_add(F.v5091, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5087 = ((*(yR110 *)rt_nil_check(F.v5087))).f_next;
}
if (F.v5089) {
{ void * rv5098 = F.v5085;
return rv5098; }
}
}
F.v5085 = ((*(yR115 *)rt_nil_check(F.v5085))).f_alt;
}
{ void * rv5099 = ((void *)0);
return rv5099; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2256_HidesStandard(void * a_p2257) {
struct yf2258 F;
memset((void *)&F, 0, sizeof F);
F.p2257 = a_p2257;
F.v5103 = F.p2257;
while ((!(F.v5103 == ((void *)0)))) {
if ((((!(((*(yR115 *)rt_nil_check(F.v5103))).f_decl == ((void *)0)))) && ((((*(yR95 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5103))).f_decl))).f_ival == INT64_C(0))))) {
{ rt_int rv5106 = 1;
return rv5106; }
}
F.v5103 = ((*(yR115 *)rt_nil_check(F.v5103))).f_alt;
}
{ rt_int rv5108 = 0;
return rv5108; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2262_CompileArgs(void * a_p2263, void * a_p2264, rt_int * a_p2265, rt_int * a_p2266) {
struct yf2267 F;
memset((void *)&F, 0, sizeof F);
F.p2263 = a_p2263;
F.p2264 = a_p2264;
F.p2265_o = a_p2265;
F.p2266_o = a_p2266;
F.v5115 = F.p2263;
F.v5117 = ((void *)0);
F.p2265 = v2238;
F.p2266 = INT64_C(0);
if ((!(F.p2264 == ((void *)0)))) {
F.v5117 = ((*(yR115 *)rt_nil_check(F.p2264))).f_params;
}
while ((!(F.v5115 == ((void *)0)))) {
if ((v2238 >= INT64_C(4000))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v5115))).f_line, y_str("calls nested too deeply", 23));
}
F.p2266 = rt_range(rt_add(F.p2266, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v2238 = rt_range(rt_add(F.p2265, F.p2266), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5119 = ((void *)0);
if ((!(F.v5117 == ((void *)0)))) {
F.v5119 = ((*(yR110 *)rt_nil_check(F.v5117))).f_rep;
F.v5117 = ((*(yR110 *)rt_nil_check(F.v5117))).f_next;
}
yr2119_Expr(F.v5115, F.v5119, &((rt_int *)(v2218).p)[y_ix1(v2218, rt_add(F.p2265, F.p2266))], &((void * *)(v2227).p)[y_ix1(v2227, rt_add(F.p2265, F.p2266))]);
((void * *)(v2236).p)[y_ix1(v2236, rt_add(F.p2265, F.p2266))] = F.v5115;
F.v5115 = ((*(yR95 *)rt_nil_check(F.v5115))).f_next;
}
(*F.p2265_o) = F.p2265;
(*F.p2266_o) = F.p2266;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2271_CallCode(void * a_p2272, rt_int a_p2273, rt_int a_p2274, rt_int a_p2275) {
struct yf2276 F;
memset((void *)&F, 0, sizeof F);
F.p2272 = a_p2272;
F.p2273 = a_p2273;
F.p2274 = a_p2274;
F.p2275 = a_p2275;
F.v5135 = ((*(yR115 *)rt_nil_check(F.p2272))).f_params;
F.v5137 = rt_range(rt_add(F.p2273, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5141 = 1;
if ((!(F.p2274 == ((*(yR115 *)rt_nil_check(F.p2272))).f_nparams))) {
yr1132_FailN(F.p2275, ((*(yR115 *)rt_nil_check(F.p2272))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
yr986_SB();
yr1004_ST(((*(yR115 *)rt_nil_check(F.p2272))).f_cname);
yr997_SA(y_str("(", 1));
if ((((*(yR115 *)rt_nil_check(F.p2272))).f_level > INT64_C(1))) {
yr1004_ST(yr1658_FramePtr(rt_range(rt_sub(((*(yR115 *)rt_nil_check(F.p2272))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v5141 = 0;
}
while ((!(F.v5135 == ((void *)0)))) {
if ((!F.v5141)) {
yr997_SA(y_str(", ", 2));
}
F.v5141 = 0;
if ((!yr2241_Fits(((*(yR110 *)rt_nil_check(F.v5135))).f_rep, ((void * *)(v2227).p)[y_ix1(v2227, F.v5137)]))) {
v897 = 0;
yr1775_TypeClash(((*(yR95 *)rt_nil_check(((void * *)(v2236).p)[y_ix1(v2236, F.v5137)]))).f_line, ((*(yR110 *)rt_nil_check(F.v5135))).f_rep, ((void * *)(v2227).p)[y_ix1(v2227, F.v5137)]);
}
if ((((*(yR110 *)rt_nil_check(F.v5135))).f_cls == v867)) {
yr1004_ST(yr2068_Convert(((rt_int *)(v2218).p)[y_ix1(v2218, F.v5137)], ((*(yR110 *)rt_nil_check(F.v5135))).f_rep, ((void * *)(v2227).p)[y_ix1(v2227, F.v5137)]));
} else {
if ((!yr2086_IsVariable(((void * *)(v2236).p)[y_ix1(v2236, F.v5137)]))) {
v897 = 0;
yr1132_FailN(((*(yR95 *)rt_nil_check(((void * *)(v2236).p)[y_ix1(v2236, F.v5137)]))).f_line, ((*(yR110 *)rt_nil_check(F.v5135))).f_name, y_str(": the actual of a VAR or OUT parameter must be a variable", 57));
}
yr997_SA(y_str("&", 1));
yr1004_ST(((rt_int *)(v2218).p)[y_ix1(v2218, F.v5137)]);
}
F.v5137 = rt_range(rt_add(F.v5137, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5135 = ((*(yR110 *)rt_nil_check(F.v5135))).f_next;
}
yr997_SA(y_str(")", 1));
v2238 = F.p2273;
{ rt_int rv5158 = yr1016_SE();
return rv5158; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2280_UserOp(void * a_p2281, rt_int a_p2282, void * a_p2283, void * a_p2284, rt_int * a_p2285, void * * a_p2286) {
struct yf2287 F;
memset((void *)&F, 0, sizeof F);
F.p2281 = a_p2281;
F.p2282 = a_p2282;
F.p2283 = a_p2283;
F.p2284 = a_p2284;
F.p2285_o = a_p2285;
F.p2286_o = a_p2286;
F.v5167 = yr1612_Find(F.p2282);
if ((F.v5167 == ((void *)0))) {
{ rt_int rv5175 = 0;
(*F.p2285_o) = F.p2285;
(*F.p2286_o) = F.p2286;
return rv5175; }
}
F.v5167 = yr1677_Real(F.v5167);
if ((!(((*(yR115 *)rt_nil_check(F.v5167))).f_kind == v846))) {
{ rt_int rv5177 = 0;
(*F.p2285_o) = F.p2285;
(*F.p2286_o) = F.p2286;
return rv5177; }
}
((*(yR95 *)rt_nil_check(F.p2283))).f_next = F.p2284;
if ((!(F.p2284 == ((void *)0)))) {
((*(yR95 *)rt_nil_check(F.p2284))).f_next = ((void *)0);
}
yr2262_CompileArgs(F.p2283, ((void *)0), &F.v5171, &F.v5173);
F.v5169 = yr2248_Choose(F.v5167, F.v5171, F.v5173);
if ((F.v5169 == ((void *)0))) {
v2238 = F.v5171;
if (yr2256_HidesStandard(F.v5167)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2281))).f_line, F.p2282, y_str(": no definition takes operands of these types", 45));
}
{ rt_int rv5180 = 0;
(*F.p2285_o) = F.p2285;
(*F.p2286_o) = F.p2286;
return rv5180; }
}
F.p2285 = yr2271_CallCode(F.v5169, F.v5171, F.v5173, ((*(yR95 *)rt_nil_check(F.p2281))).f_line);
F.p2286 = ((*(yR115 *)rt_nil_check(F.v5169))).f_ret;
{ rt_int rv5182 = 1;
(*F.p2285_o) = F.p2285;
(*F.p2286_o) = F.p2286;
return rv5182; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2291_CallExpr(void * a_p2292, void * a_p2293, rt_int a_p2294, rt_int * a_p2295, void * * a_p2296) {
struct yf2297 F;
memset((void *)&F, 0, sizeof F);
F.p2292 = a_p2292;
F.p2293 = a_p2293;
F.p2294 = a_p2294;
F.p2295_o = a_p2295;
F.p2296_o = a_p2296;
F.v5190 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(F.p2292))).f_name, ((*(yR95 *)rt_nil_check(F.p2292))).f_line));
if ((((*(yR115 *)rt_nil_check(F.v5190))).f_kind == v861)) {
yr2731_StdCall(((*(yR115 *)rt_nil_check(F.v5190))).f_mval, F.p2292, F.p2294, &F.p2295, &F.p2296);
(*F.p2295_o) = F.p2295;
(*F.p2296_o) = F.p2296;
return;
}
if ((((((*(yR115 *)rt_nil_check(F.v5190))).f_kind == v837)) || ((((*(yR115 *)rt_nil_check(F.v5190))).f_kind == v840)))) {
if (F.p2294) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2292))).f_line, y_str("a value is not a statement", 26));
}
yr2301_Denote(((*(yR115 *)rt_nil_check(F.v5190))).f_rep, F.p2292, &F.p2295, &F.p2296);
(*F.p2295_o) = F.p2295;
(*F.p2296_o) = F.p2296;
return;
}
if ((!(((*(yR115 *)rt_nil_check(F.v5190))).f_kind == v846))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2292))).f_line, ((*(yR95 *)rt_nil_check(F.p2292))).f_name, y_str(" is not a routine", 17));
}
if ((((*(yR115 *)rt_nil_check(F.v5190))).f_alt == ((void *)0))) {
yr2262_CompileArgs(((*(yR95 *)rt_nil_check(F.p2292))).f_a, F.v5190, &F.v5194, &F.v5196);
F.v5192 = F.v5190;
} else {
yr2262_CompileArgs(((*(yR95 *)rt_nil_check(F.p2292))).f_a, ((void *)0), &F.v5194, &F.v5196);
F.v5192 = yr2248_Choose(F.v5190, F.v5194, F.v5196);
if ((F.v5192 == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2292))).f_line, ((*(yR95 *)rt_nil_check(F.p2292))).f_name, y_str(": no definition takes actuals of these types", 44));
}
}
F.p2295 = yr2271_CallCode(F.v5192, F.v5194, F.v5196, ((*(yR95 *)rt_nil_check(F.p2292))).f_line);
F.p2296 = ((*(yR115 *)rt_nil_check(F.v5192))).f_ret;
if ((F.p2294 && ((!(((*(yR100 *)rt_nil_check(F.p2296))).f_kind == v822))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2292))).f_line, ((*(yR95 *)rt_nil_check(F.p2292))).f_name, y_str(" returns a value: it is called in an expression (IX.A.2)", 56));
}
if (((!F.p2294) && ((((*(yR100 *)rt_nil_check(F.p2296))).f_kind == v822)))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2292))).f_line, ((*(yR95 *)rt_nil_check(F.p2292))).f_name, y_str(" returns no value", 17));
}
(*F.p2295_o) = F.p2295;
(*F.p2296_o) = F.p2296;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2301_Denote(void * a_p2302, void * a_p2303, rt_int * a_p2304, void * * a_p2305) {
struct yf2306 F;
memset((void *)&F, 0, sizeof F);
F.p2302 = a_p2302;
F.p2303 = a_p2303;
F.p2304_o = a_p2304;
F.p2305_o = a_p2305;
F.v5208 = ((*(yR95 *)rt_nil_check(F.p2303))).f_a;
F.v5228 = INT64_C(0);
F.v5235 = 1;
F.p2305 = F.p2302;
if (((*(yR100 *)rt_nil_check(F.p2302))).f_abstract) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2303))).f_line, ((*(yR100 *)rt_nil_check(F.p2302))).f_tname, y_str(" has no representation to denote a value of", 43));
}
if ((((*(yR100 *)rt_nil_check(F.p2302))).f_kind == v795)) {
if (((*(yR100 *)rt_nil_check(F.p2302))).f_opaque) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2303))).f_line, ((*(yR100 *)rt_nil_check(F.p2302))).f_tname, y_str(" is opaque here (X.B.3)", 23));
}
yr986_SB();
yr997_SA(y_str("((", 2));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p2302))).f_cname);
yr997_SA(y_str("){ ", 3));
F.v5214 = yr1016_SE();
F.v5210 = ((*(yR100 *)rt_nil_check(F.p2302))).f_fields;
while ((!(F.v5210 == ((void *)0)))) {
if ((((((*(yR105 *)rt_nil_check(F.v5210))).f_variant == INT64_C(0))) || ((((*(yR105 *)rt_nil_check(F.v5210))).f_variant == F.v5228)))) {
if ((F.v5208 == ((void *)0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2303))).f_line, y_str("too few components in this record value", 39));
}
yr2119_Expr(F.v5208, ((*(yR105 *)rt_nil_check(F.v5210))).f_rep, &F.v5212, &F.v5218);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.v5208))).f_line, ((*(yR105 *)rt_nil_check(F.v5210))).f_rep, F.v5218);
if ((F.v5210 == ((*(yR100 *)rt_nil_check(F.p2302))).f_selector)) {
yr2060_Manifest(F.v5208, &F.v5226, &F.v5231);
if ((!F.v5226)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v5208))).f_line, y_str("the case-selection value is a manifest constant", 47));
}
F.v5228 = yr2310_VariantOf(F.p2302, F.v5231, ((*(yR95 *)rt_nil_check(F.v5208))).f_line);
}
yr986_SB();
yr1004_ST(F.v5214);
if ((!F.v5235)) {
yr997_SA(y_str(", ", 2));
}
F.v5235 = 0;
yr997_SA(y_str(".f_", 3));
yr1004_ST(((*(yR105 *)rt_nil_check(F.v5210))).f_name);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2068_Convert(F.v5212, ((*(yR105 *)rt_nil_check(F.v5210))).f_rep, F.v5218));
F.v5214 = yr1016_SE();
F.v5208 = ((*(yR95 *)rt_nil_check(F.v5208))).f_next;
}
F.v5210 = ((*(yR105 *)rt_nil_check(F.v5210))).f_next;
}
if ((!(F.v5208 == ((void *)0)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2303))).f_line, y_str("too many components in this record value", 40));
}
yr986_SB();
yr1004_ST(F.v5214);
yr997_SA(y_str(" })", 3));
F.p2304 = yr1016_SE();
(*F.p2304_o) = F.p2304;
(*F.p2305_o) = F.p2305;
return;
}
if ((((*(yR100 *)rt_nil_check(F.p2302))).f_kind == v792)) {
F.v5220 = yr1260_Count(F.v5208);
F.v5214 = yr1146_Fresh(y_str("da", 2));
if ((F.v5220 == INT64_C(1))) {
yr2119_Expr(F.v5208, ((*(yR100 *)rt_nil_check(F.p2302))).f_elem, &F.v5212, &F.v5218);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.v5208))).f_line, ((*(yR100 *)rt_nil_check(F.p2302))).f_elem, F.v5218);
F.v5216 = yr1146_Fresh(y_str("dv", 2));
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(yr1750_CType(((*(yR100 *)rt_nil_check(F.p2302))).f_elem));
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v5216);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2068_Convert(F.v5212, ((*(yR100 *)rt_nil_check(F.p2302))).f_elem, F.v5218));
yr997_SA(y_str("; y_fill(", 9));
yr1004_ST(yr1756_DescOf(F.p2302));
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v5216);
yr997_SA(y_str("); })", 5));
F.p2304 = yr1016_SE();
(*F.p2304_o) = F.p2304;
(*F.p2305_o) = F.p2305;
return;
}
yr986_SB();
yr997_SA(y_str("({ yarr ", 8));
yr1004_ST(F.v5214);
yr997_SA(y_str("; y_init(", 9));
yr1004_ST(yr1756_DescOf(F.p2302));
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v5214);
yr997_SA(y_str("); if (y_count(", 15));
yr1004_ST(F.v5214);
yr997_SA(y_str(", ", 2));
yr1010_SI(((*(yR100 *)rt_nil_check(F.p2302))).f_nidx);
yr997_SA(y_str(") != ", 5));
yr1010_SI(F.v5220);
yr997_SA(y_str(") rt_raise_msg(RT_X_RANGE, ", 27));
yr991_SC(34);
yr997_SA(y_str("wrong number of components", 26));
yr991_SC(34);
yr997_SA(y_str(");", 2));
F.p2304 = yr1016_SE();
F.v5224 = INT64_C(0);
while ((!(F.v5208 == ((void *)0)))) {
yr2119_Expr(F.v5208, ((*(yR100 *)rt_nil_check(F.p2302))).f_elem, &F.v5212, &F.v5218);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.v5208))).f_line, ((*(yR100 *)rt_nil_check(F.p2302))).f_elem, F.v5218);
yr986_SB();
yr1004_ST(F.p2304);
if (yr1744_Deep(((*(yR100 *)rt_nil_check(F.p2302))).f_elem)) {
yr997_SA(y_str(" { ", 3));
yr1004_ST(yr1750_CType(((*(yR100 *)rt_nil_check(F.p2302))).f_elem));
yr997_SA(y_str(" dv = ", 6));
yr1004_ST(F.v5212);
yr997_SA(y_str("; y_copy(", 9));
yr1004_ST(yr1756_DescOf(((*(yR100 *)rt_nil_check(F.p2302))).f_elem));
yr997_SA(y_str(", &((", 5));
yr1004_ST(yr1750_CType(((*(yR100 *)rt_nil_check(F.p2302))).f_elem));
yr997_SA(y_str(" *)", 3));
yr1004_ST(F.v5214);
yr997_SA(y_str(".p)[", 4));
yr1010_SI(F.v5224);
yr997_SA(y_str("], &dv); }", 10));
} else {
yr997_SA(y_str(" ((", 3));
yr1004_ST(yr1750_CType(((*(yR100 *)rt_nil_check(F.p2302))).f_elem));
yr997_SA(y_str(" *)", 3));
yr1004_ST(F.v5214);
yr997_SA(y_str(".p)[", 4));
yr1010_SI(F.v5224);
yr997_SA(y_str("] = ", 4));
yr1004_ST(yr2068_Convert(F.v5212, ((*(yR100 *)rt_nil_check(F.p2302))).f_elem, F.v5218));
yr997_SA(y_str(";", 1));
}
F.p2304 = yr1016_SE();
F.v5224 = rt_range(rt_add(F.v5224, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5208 = ((*(yR95 *)rt_nil_check(F.v5208))).f_next;
}
yr986_SB();
yr1004_ST(F.p2304);
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v5214);
yr997_SA(y_str("; })", 4));
F.p2304 = yr1016_SE();
(*F.p2304_o) = F.p2304;
(*F.p2305_o) = F.p2305;
return;
}
if ((((*(yR100 *)rt_nil_check(F.p2302))).f_kind == v804)) {
yr986_SB();
yr997_SA(y_str("y_set_new(", 10));
yr1004_ST(yr1812_LoText(((*(yR100 *)rt_nil_check(F.p2302))).f_elem));
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1818_HiText(((*(yR100 *)rt_nil_check(F.p2302))).f_elem));
yr997_SA(y_str(")", 1));
F.p2304 = yr1016_SE();
while ((!(F.v5208 == ((void *)0)))) {
yr2119_Expr(F.v5208, ((*(yR100 *)rt_nil_check(F.p2302))).f_elem, &F.v5212, &F.v5218);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.v5208))).f_line, ((*(yR100 *)rt_nil_check(F.p2302))).f_elem, F.v5218);
F.p2304 = yr2169_Call2(y_str("y_set_add", 9), F.p2304, F.v5212);
F.v5208 = ((*(yR95 *)rt_nil_check(F.v5208))).f_next;
}
(*F.p2304_o) = F.p2304;
(*F.p2305_o) = F.p2305;
return;
}
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2303))).f_line, ((*(yR100 *)rt_nil_check(F.p2302))).f_tname, y_str(" has no denotations of values", 29));
(*F.p2304_o) = F.p2304;
(*F.p2305_o) = F.p2305;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2310_VariantOf(void * a_p2311, rt_int a_p2312, rt_int a_p2313) {
struct yf2314 F;
memset((void *)&F, 0, sizeof F);
F.p2311 = a_p2311;
F.p2312 = a_p2312;
F.p2313 = a_p2313;
F.v5297 = ((*(yR100 *)rt_nil_check(F.p2311))).f_fields;
while ((!(F.v5297 == ((void *)0)))) {
if ((!(((*(yR105 *)rt_nil_check(F.v5297))).f_variant == INT64_C(0)))) {
F.v5299 = ((*(yR105 *)rt_nil_check(F.v5297))).f_labels;
while ((!(F.v5299 == ((void *)0)))) {
yr2060_Manifest(F.v5299, &F.v5301, &F.v5303);
if ((F.v5301 && ((F.v5303 == F.p2312)))) {
{ rt_int rv5305 = ((*(yR105 *)rt_nil_check(F.v5297))).f_variant;
return rv5305; }
}
F.v5299 = ((*(yR95 *)rt_nil_check(F.v5299))).f_next;
}
}
F.v5297 = ((*(yR105 *)rt_nil_check(F.v5297))).f_next;
}
{ rt_int rv5307 = INT64_C(-1);
return rv5307; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2388_Emit2(yarr a_p2390, rt_int a_p2391) {
struct yf2392 F;
memset((void *)&F, 0, sizeof F);
F.p2390 = a_p2390;
F.p2391 = a_p2391;
yr986_SB();
yr997_SA(F.p2390);
yr1004_ST(F.p2391);
F.v5312 = yr1016_SE();
yr1092_Emit(F.v5312);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2396_Emit3(yarr a_p2398, rt_int a_p2399, yarr a_p2401) {
struct yf2402 F;
memset((void *)&F, 0, sizeof F);
F.p2398 = a_p2398;
F.p2399 = a_p2399;
F.p2401 = a_p2401;
yr986_SB();
yr997_SA(F.p2398);
yr1004_ST(F.p2399);
yr997_SA(F.p2401);
F.v5318 = yr1016_SE();
yr1092_Emit(F.v5318);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2406_PopTo(rt_int a_p2407) {
struct yf2408 F;
memset((void *)&F, 0, sizeof F);
F.p2407 = a_p2407;
if ((v2327 > F.p2407)) {
yr2396_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v2325).p)[y_ix1(v2325, rt_add(F.p2407, INT64_C(1)))], y_str(".prev;", 6));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2412_LeaveBlock(void) {
struct yf2413 F;
memset((void *)&F, 0, sizeof F);
if ((v2342 > INT64_C(0))) {
if ((!(((rt_int *)(v2340).p)[y_ix1(v2340, v2342)] == INT64_C(0)))) {
yr2396_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v2340).p)[y_ix1(v2340, v2342)], y_str(".prev;", 6));
}
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2417_RaiseCode(rt_int a_p2418) {
struct yf2419 F;
memset((void *)&F, 0, sizeof F);
F.p2418 = a_p2418;
yr986_SB();
yr997_SA(y_str("rt_raise(rt_exc(", 16));
yr991_SC(34);
yr1004_ST(F.p2418);
yr991_SC(34);
yr997_SA(y_str("));", 3));
{ rt_int rv5336 = yr1016_SE();
return rv5336; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2423_BlockStatements(void * a_p2424) {
struct yf2425 F;
memset((void *)&F, 0, sizeof F);
F.p2424 = a_p2424;
if ((((*(yR95 *)rt_nil_check(F.p2424))).f_b == ((void *)0))) {
v2342 = rt_range(rt_add(v2342, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2340).p)[y_ix1(v2340, v2342)] = INT64_C(0);
yr2429_Statements(((*(yR95 *)rt_nil_check(F.p2424))).f_c);
v2342 = rt_range(rt_sub(v2342, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return;
}
v2385 = 1;
F.v5340 = yr1146_Fresh(y_str("xf", 2));
yr2396_Emit3(y_str("{ rt_frame ", 11), F.v5340, y_str(";", 1));
yr2396_Emit3(y_str("if (RT_TRY(", 11), F.v5340, y_str(")) {", 4));
v2327 = rt_range(rt_add(v2327, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2325).p)[y_ix1(v2325, v2327)] = F.v5340;
v2342 = rt_range(rt_add(v2342, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2340).p)[y_ix1(v2340, v2342)] = F.v5340;
yr2429_Statements(((*(yR95 *)rt_nil_check(F.p2424))).f_c);
v2342 = rt_range(rt_sub(v2342, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v2327 = rt_range(rt_sub(v2327, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr2396_Emit3(y_str("RT_POP(", 7), F.v5340, y_str(");", 2));
yr1098_EmitS(y_str("} else {", 8));
yr2396_Emit3(y_str("RT_POP(", 7), F.v5340, y_str(");", 2));
F.v5342 = yr1146_Fresh(y_str("xc", 2));
yr2396_Emit3(y_str("int ", 4), F.v5342, y_str(" = rt_xcur;", 11));
v2342 = rt_range(rt_add(v2342, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2340).p)[y_ix1(v2340, v2342)] = INT64_C(0);
v2354 = rt_range(rt_add(v2354, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2352).p)[y_ix1(v2352, v2354)] = F.v5342;
F.v5350 = 1;
F.v5346 = ((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2424))).f_b))).f_a;
while ((!(F.v5346 == ((void *)0)))) {
yr986_SB();
if (F.v5350) {
yr997_SA(y_str("if (", 4));
} else {
yr997_SA(y_str("} else if (", 11));
}
F.v5350 = 0;
F.v5348 = ((*(yR95 *)rt_nil_check(F.v5346))).f_a;
while ((!(F.v5348 == ((void *)0)))) {
yr1004_ST(F.v5342);
yr997_SA(y_str(" == rt_exc(", 11));
yr991_SC(34);
yr1004_ST(((*(yR95 *)rt_nil_check(F.v5348))).f_name);
yr991_SC(34);
yr997_SA(y_str(")", 1));
if ((!(((*(yR95 *)rt_nil_check(F.v5348))).f_next == ((void *)0)))) {
yr997_SA(y_str(" || ", 4));
}
F.v5348 = ((*(yR95 *)rt_nil_check(F.v5348))).f_next;
}
yr997_SA(y_str(") {", 3));
F.v5344 = yr1016_SE();
yr1092_Emit(F.v5344);
yr2429_Statements(((*(yR95 *)rt_nil_check(F.v5346))).f_b);
F.v5346 = ((*(yR95 *)rt_nil_check(F.v5346))).f_next;
}
if ((!F.v5350)) {
yr1098_EmitS(y_str("} else {", 8));
}
if ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2424))).f_b))).f_flag == INT64_C(1))) {
yr2429_Statements(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2424))).f_b))).f_b);
} else {
yr2396_Emit3(y_str("rt_raise(", 9), F.v5342, y_str(");", 2));
}
if ((!F.v5350)) {
yr1098_EmitS(y_str("}", 1));
}
v2354 = rt_range(rt_sub(v2354, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v2342 = rt_range(rt_sub(v2342, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1098_EmitS(y_str("}}", 2));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2429_Statements(void * a_p2430) {
struct yf2431 F;
memset((void *)&F, 0, sizeof F);
F.p2430 = a_p2430;
F.v5406 = F.p2430;
while ((!(F.v5406 == ((void *)0)))) {
yr2453_Statement(F.v5406);
F.v5406 = ((*(yR95 *)rt_nil_check(F.v5406))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2435_Cond(void * a_p2436) {
struct yf2437 F;
memset((void *)&F, 0, sizeof F);
F.p2436 = a_p2436;
yr2119_Expr(F.p2436, v1685, &F.v5410, &F.v5412);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2436))).f_line, v1685, F.v5412);
{ rt_int rv5413 = F.v5410;
return rv5413; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2441_Label(void * a_p2442, void * a_p2443) {
struct yf2444 F;
memset((void *)&F, 0, sizeof F);
F.p2442 = a_p2442;
F.p2443 = a_p2443;
if (((((((*(yR95 *)rt_nil_check(F.p2442))).f_kind == v747)) && ((((*(yR95 *)rt_nil_check(F.p2442))).f_d == ((void *)0)))) && ((((*(yR100 *)rt_nil_check(F.p2443))).f_kind == v786)))) {
F.v5422 = yr1637_FindLit(((*(yR95 *)rt_nil_check(F.p2442))).f_name, F.p2443);
if ((!(F.v5422 == ((void *)0)))) {
{ rt_int rv5427 = ((*(yR115 *)rt_nil_check(yr1677_Real(F.v5422)))).f_mval;
return rv5427; }
}
}
yr2119_Expr(F.p2442, F.p2443, &F.v5426, &F.v5424);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2442))).f_line, F.p2443, F.v5424);
yr2060_Manifest(F.p2442, &F.v5418, &F.v5420);
if ((!F.v5418)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2442))).f_line, y_str("a CASE label is a manifest constant (IX.B.1)", 44));
}
{ rt_int rv5429 = F.v5420;
return rv5429; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2448_CopyOut(void) {
struct yf2449 F;
memset((void *)&F, 0, sizeof F);
if ((v2383 == ((void *)0))) {
return;
}
F.v5432 = ((*(yR115 *)rt_nil_check(v2383))).f_params;
while ((!(F.v5432 == ((void *)0)))) {
if ((((*(yR110 *)rt_nil_check(F.v5432))).f_cls == v870)) {
yr986_SB();
yr997_SA(y_str("(*F.", 4));
yr1004_ST(((*(yR110 *)rt_nil_check(F.v5432))).f_cname);
yr997_SA(y_str("_o)", 3));
F.v5434 = yr1016_SE();
yr2076_Store(F.v5434, ((*(yR110 *)rt_nil_check(F.v5432))).f_rep, yr1651_Path(v1576, ((*(yR110 *)rt_nil_check(F.v5432))).f_cname), ((*(yR110 *)rt_nil_check(F.v5432))).f_rep, INT64_C(0));
}
F.v5432 = ((*(yR110 *)rt_nil_check(F.v5432))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2453_Statement(void * a_p2454) {
struct yf2455 F;
memset((void *)&F, 0, sizeof F);
F.p2454 = a_p2454;
F.v5441 = ((*(yR95 *)rt_nil_check(F.p2454))).f_kind;
v960 = ((*(yR95 *)rt_nil_check(F.p2454))).f_line;
if ((!(((*(yR95 *)rt_nil_check(F.p2454))).f_text == INT64_C(0)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2454))).f_line, y_str("this translator has no labelled statements yet", 46));
}
if ((F.v5441 == v684)) {
yr2092_LValue(((*(yR95 *)rt_nil_check(F.p2454))).f_a, &F.v5443, &F.v5455);
if ((((*(yR100 *)rt_nil_check(F.v5455))).f_kind == v807)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2454))).f_line, y_str("assignment is not defined for signals (VI.A.1.d)", 48));
}
if ((((((*(yR100 *)rt_nil_check(F.v5455))).f_kind == v801)) || ((((*(yR100 *)rt_nil_check(F.v5455))).f_kind == v810)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2454))).f_line, y_str("assignment is not defined for files and semaphores (VII.B)", 58));
}
if ((((*(yR100 *)rt_nil_check(F.v5455))).f_opaque && (((rt_mod(((*(yR100 *)rt_nil_check(F.v5455))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2454))).f_line, ((*(yR100 *)rt_nil_check(F.v5455))).f_tname, y_str(" is opaque here: := is not exported (X.B.3)", 43));
}
yr2119_Expr(((*(yR95 *)rt_nil_check(F.p2454))).f_b, F.v5455, &F.v5445, &F.v5457);
yr2076_Store(F.v5443, F.v5455, F.v5445, F.v5457, ((*(yR95 *)rt_nil_check(F.p2454))).f_line);
} else if ((F.v5441 == v687)) {
F.v5471 = yr1612_Find(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2454))).f_a))).f_name);
if ((!(F.v5471 == ((void *)0)))) {
F.v5471 = yr1677_Real(F.v5471);
}
if ((((!(F.v5471 == ((void *)0)))) && ((((*(yR115 *)rt_nil_check(F.v5471))).f_kind == v855)))) {
yr2630_Activate(((*(yR95 *)rt_nil_check(F.p2454))).f_a, F.v5471);
} else {
yr2291_CallExpr(((*(yR95 *)rt_nil_check(F.p2454))).f_a, ((void *)0), 1, &F.v5443, &F.v5455);
yr2388_Emit2(y_str("", 0), F.v5443);
yr986_SB();
yr1004_ST(F.v5443);
yr997_SA(y_str(";", 1));
F.v5447 = yr1016_SE();
((*(yR125 *)rt_nil_check((v956).f_tail))).f_t = F.v5447;
}
} else if ((F.v5441 == v708)) {
F.v5463 = 1;
F.v5459 = ((*(yR95 *)rt_nil_check(F.p2454))).f_a;
while ((!(F.v5459 == ((void *)0)))) {
F.v5443 = yr2435_Cond(((*(yR95 *)rt_nil_check(F.v5459))).f_a);
if (F.v5463) {
yr2396_Emit3(y_str("if (", 4), F.v5443, y_str(") {", 3));
} else {
yr2396_Emit3(y_str("} else if (", 11), F.v5443, y_str(") {", 3));
}
F.v5463 = 0;
yr2429_Statements(((*(yR95 *)rt_nil_check(F.v5459))).f_b);
F.v5459 = ((*(yR95 *)rt_nil_check(F.v5459))).f_next;
}
if ((((*(yR95 *)rt_nil_check(F.p2454))).f_flag == INT64_C(1))) {
yr1098_EmitS(y_str("} else {", 8));
yr2429_Statements(((*(yR95 *)rt_nil_check(F.p2454))).f_b);
}
yr1098_EmitS(y_str("}", 1));
} else if ((F.v5441 == v714)) {
F.v5443 = yr2435_Cond(((*(yR95 *)rt_nil_check(F.p2454))).f_a);
yr2396_Emit3(y_str("while (", 7), F.v5443, y_str(") {", 3));
yr2429_Statements(((*(yR95 *)rt_nil_check(F.p2454))).f_b);
yr1098_EmitS(y_str("}", 1));
} else if ((F.v5441 == v720)) {
F.v5449 = yr1146_Fresh(y_str("yl_", 3));
v2377 = rt_range(rt_add(v2377, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2364).p)[y_ix1(v2364, v2377)] = ((*(yR95 *)rt_nil_check(F.p2454))).f_name;
((rt_int *)(v2366).p)[y_ix1(v2366, v2377)] = F.v5449;
((rt_int *)(v2375).p)[y_ix1(v2375, v2377)] = v2327;
yr1098_EmitS(y_str("for (;;) {", 10));
yr2429_Statements(((*(yR95 *)rt_nil_check(F.p2454))).f_b);
yr1098_EmitS(y_str("}", 1));
yr2396_Emit3(y_str("", 0), F.v5449, y_str(": ;", 3));
v2377 = rt_range(rt_sub(v2377, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v5441 == v696)) {
F.v5465 = 0;
F.v5467 = v2377;
while ((((F.v5467 > v2380)) && (!F.v5465))) {
if ((((rt_int *)(v2364).p)[y_ix1(v2364, F.v5467)] == ((*(yR95 *)rt_nil_check(F.p2454))).f_name)) {
F.v5465 = 1;
yr2406_PopTo(((rt_int *)(v2375).p)[y_ix1(v2375, F.v5467)]);
yr2396_Emit3(y_str("goto ", 5), ((rt_int *)(v2366).p)[y_ix1(v2366, F.v5467)], y_str(";", 1));
}
F.v5467 = rt_range(rt_sub(F.v5467, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((!F.v5465)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2454))).f_line, ((*(yR95 *)rt_nil_check(F.p2454))).f_name, y_str(": EXIT names no LOOP around it here (IX.A.5)", 44));
}
} else if ((F.v5441 == v717)) {
yr2459_ForStatement(F.p2454);
} else if ((F.v5441 == v711)) {
yr2119_Expr(((*(yR95 *)rt_nil_check(F.p2454))).f_a, ((void *)0), &F.v5443, &F.v5455);
if ((!yr1720_IsDiscrete(F.v5455))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2454))).f_line, y_str("SELECT on a value that is not integer or scalar", 47));
}
yr2396_Emit3(y_str("switch (", 8), F.v5443, y_str(") {", 3));
F.v5459 = ((*(yR95 *)rt_nil_check(F.p2454))).f_b;
while ((!(F.v5459 == ((void *)0)))) {
F.v5461 = ((*(yR95 *)rt_nil_check(F.v5459))).f_a;
while ((!(F.v5461 == ((void *)0)))) {
F.v5469 = yr2441_Label(F.v5461, F.v5455);
yr986_SB();
yr997_SA(y_str("case ", 5));
yr1010_SI(F.v5469);
yr997_SA(y_str(":", 1));
F.v5447 = yr1016_SE();
yr1092_Emit(F.v5447);
F.v5461 = ((*(yR95 *)rt_nil_check(F.v5461))).f_next;
}
yr1098_EmitS(y_str("{", 1));
yr2429_Statements(((*(yR95 *)rt_nil_check(F.v5459))).f_b);
yr1098_EmitS(y_str("} break;", 8));
F.v5459 = ((*(yR95 *)rt_nil_check(F.v5459))).f_next;
}
yr1098_EmitS(y_str("default: {", 10));
if ((((*(yR95 *)rt_nil_check(F.p2454))).f_flag == INT64_C(1))) {
yr2429_Statements(((*(yR95 *)rt_nil_check(F.p2454))).f_c);
}
yr1098_EmitS(y_str("} break;", 8));
yr1098_EmitS(y_str("}", 1));
} else if ((F.v5441 == v699)) {
yr2473_ReturnStatement(F.p2454);
} else if ((F.v5441 == v705)) {
if ((((*(yR95 *)rt_nil_check(F.p2454))).f_name == INT64_C(0))) {
if ((v2354 == INT64_C(0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2454))).f_line, y_str("PROPAGATE_EXCEPTION without a name is used in a handler (IX.A.8)", 64));
}
yr2396_Emit3(y_str("rt_raise(", 9), ((rt_int *)(v2352).p)[y_ix1(v2352, v2354)], y_str(");", 2));
} else {
yr2412_LeaveBlock();
yr1092_Emit(yr2417_RaiseCode(((*(yR95 *)rt_nil_check(F.p2454))).f_name));
}
} else if ((F.v5441 == v690)) {
F.v5443 = yr2435_Cond(((*(yR95 *)rt_nil_check(F.p2454))).f_a);
yr2396_Emit3(y_str("if (!(", 6), F.v5443, y_str(")) {", 4));
yr2412_LeaveBlock();
yr1098_EmitS(y_str("rt_raise(RT_X_ASSERT); }", 24));
} else if ((F.v5441 == v723)) {
yr2479_BeginStatement(F.p2454);
} else if ((F.v5441 == v702)) {
yr2654_TerminateStatement(F.p2454);
} else if ((F.v5441 == v693)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2454))).f_line, y_str("this translator has no GOTO yet", 31));
} else {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2454))).f_line, y_str("not a statement", 15));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2459_ForStatement(void * a_p2460) {
struct yf2461 F;
memset((void *)&F, 0, sizeof F);
F.p2460 = a_p2460;
F.v5535 = yr1851_MakeRep(((*(yR95 *)rt_nil_check(F.p2460))).f_a, INT64_C(0), 0);
if ((!yr1720_IsDiscrete(F.v5535))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2460))).f_line, y_str("FOR goes over an integer or scalar representation", 49));
}
yr1791_CheckRepresented(F.v5535, ((*(yR95 *)rt_nil_check(F.p2460))).f_line);
yr1595_OpenScope(0);
F.v5543 = yr1588_NewSym(v834, ((*(yR95 *)rt_nil_check(F.p2460))).f_name);
((*(yR115 *)rt_nil_check(F.v5543))).f_rep = F.v5535;
((*(yR115 *)rt_nil_check(F.v5543))).f_level = v1576;
((*(yR115 *)rt_nil_check(F.v5543))).f_cname = yr1146_Fresh(y_str("c_", 2));
yr1664_DeclStorage(yr1021_T(y_str("rt_int", 6)), ((*(yR115 *)rt_nil_check(F.v5543))).f_cname);
yr1644_Define(F.v5543, ((*(yR95 *)rt_nil_check(F.p2460))).f_line);
F.v5537 = yr1146_Fresh(y_str("i", 1));
F.v5539 = yr1146_Fresh(y_str("hi", 2));
yr986_SB();
yr997_SA(y_str("{ rt_int ", 9));
yr1004_ST(F.v5539);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr1818_HiText(F.v5535));
yr997_SA(y_str(";", 1));
F.v5541 = yr1016_SE();
yr1092_Emit(F.v5541);
yr986_SB();
yr997_SA(y_str("for (rt_int ", 12));
yr1004_ST(F.v5537);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr1812_LoText(F.v5535));
yr997_SA(y_str("; ", 2));
yr1004_ST(F.v5537);
yr997_SA(y_str(" <= ", 4));
yr1004_ST(F.v5539);
yr997_SA(y_str("; ", 2));
yr1004_ST(F.v5537);
yr997_SA(y_str("++) { ", 6));
yr1004_ST(yr1671_SymPath(F.v5543));
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.v5537);
yr997_SA(y_str(";", 1));
F.v5541 = yr1016_SE();
yr1092_Emit(F.v5541);
yr2429_Statements(((*(yR95 *)rt_nil_check(F.p2460))).f_b);
yr2396_Emit3(y_str("if (", 4), F.v5537, y_str(" == ", 4));
((*(yR125 *)rt_nil_check((v956).f_tail))).f_t = yr2465_Join(((*(yR125 *)rt_nil_check((v956).f_tail))).f_t, F.v5539, yr1021_T(y_str(") break;", 8)));
yr1098_EmitS(y_str("}}", 2));
yr1601_CloseScope();
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2465_Join(rt_int a_p2466, rt_int a_p2467, rt_int a_p2468) {
struct yf2469 F;
memset((void *)&F, 0, sizeof F);
F.p2466 = a_p2466;
F.p2467 = a_p2467;
F.p2468 = a_p2468;
yr986_SB();
yr1004_ST(F.p2466);
yr1004_ST(F.p2467);
yr1004_ST(F.p2468);
{ rt_int rv5571 = yr1016_SE();
return rv5571; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2473_ReturnStatement(void * a_p2474) {
struct yf2475 F;
memset((void *)&F, 0, sizeof F);
F.p2474 = a_p2474;
if ((v2383 == ((void *)0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2474))).f_line, y_str("RETURN outside a routine (IX.A.6)", 33));
}
if ((((*(yR115 *)rt_nil_check(v2383))).f_kind == v855)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2474))).f_line, y_str("a process ends with TERMINATE_PROCESS (IX.A.7)", 46));
}
F.v5583 = ((*(yR115 *)rt_nil_check(v2383))).f_ret;
if ((((*(yR95 *)rt_nil_check(F.p2474))).f_a == ((void *)0))) {
if ((!(((*(yR100 *)rt_nil_check(F.v5583))).f_kind == v822))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2474))).f_line, y_str("RETURN needs a value here (IX.A.6)", 34));
}
yr2448_CopyOut();
yr2649_LeaveMonitor();
yr2406_PopTo(v2330);
yr1098_EmitS(y_str("return;", 7));
return;
}
if ((((*(yR100 *)rt_nil_check(F.v5583))).f_kind == v822)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2474))).f_line, y_str("this routine returns no value (IX.A.6)", 38));
}
yr2119_Expr(((*(yR95 *)rt_nil_check(F.p2474))).f_a, F.v5583, &F.v5575, &F.v5581);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2474))).f_line, F.v5583, F.v5581);
F.v5579 = yr1146_Fresh(y_str("rv", 2));
yr986_SB();
yr997_SA(y_str("{ ", 2));
yr1004_ST(yr1750_CType(F.v5583));
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v5579);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2068_Convert(F.v5575, F.v5583, F.v5581));
yr997_SA(y_str(";", 1));
F.v5577 = yr1016_SE();
yr1092_Emit(F.v5577);
yr2448_CopyOut();
yr2649_LeaveMonitor();
yr2406_PopTo(v2330);
yr2396_Emit3(y_str("return ", 7), F.v5579, y_str("; }", 3));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2479_BeginStatement(void * a_p2480) {
struct yf2481 F;
memset((void *)&F, 0, sizeof F);
F.p2480 = a_p2480;
yr1098_EmitS(y_str("{", 1));
yr1595_OpenScope(0);
yr2551_Declarations(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2480))).f_a))).f_a);
yr2423_BlockStatements(((*(yR95 *)rt_nil_check(F.p2480))).f_a);
yr2625_AwaitProcesses();
yr1601_CloseScope();
yr1098_EmitS(y_str("}", 1));
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2485_RoutineCName(rt_int a_p2486) {
struct yf2487 F;
memset((void *)&F, 0, sizeof F);
F.p2486 = a_p2486;
F.v5604 = yr1141_NewSerial();
F.v5606 = 1;
F.lo5610 = INT64_C(1);
F.hi5611 = ((rt_int *)(v890).p)[y_ix1(v890, F.p2486)];
{ rt_int hi5615 = F.hi5611;
for (rt_int i5614 = F.lo5610; i5614 <= hi5615; i5614++) { F.c_5613 = i5614;
if ((!((yr968_IsLetter(yr1063_TChar(F.p2486, rt_range(F.c_5613, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || yr974_IsDigit(yr1063_TChar(F.p2486, rt_range(F.c_5613, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))))) {
F.v5606 = 0;
}
if (i5614 == hi5615) break;
}}
yr986_SB();
yr997_SA(y_str("yr", 2));
yr1010_SI(F.v5604);
if (F.v5606) {
yr997_SA(y_str("_", 1));
yr1004_ST(F.p2486);
}
{ rt_int rv5619 = yr1016_SE();
return rv5619; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2491_FormalRep(void * a_p2492) {
struct yf2493 F;
memset((void *)&F, 0, sizeof F);
F.p2492 = a_p2492;
if ((((*(yR95 *)rt_nil_check(F.p2492))).f_kind == v666)) {
yr2060_Manifest(((*(yR95 *)rt_nil_check(F.p2492))).f_a, &F.v5625, &F.v5627);
if ((((!F.v5625) || ((F.v5627 < INT64_C(1)))) || ((F.v5627 > INT64_C(4))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2492))).f_line, y_str("DIMENSIONS is a manifest constant from 1 to 4", 45));
}
F.v5623 = yr1707_NewRep(v813, yr1021_T(y_str("length-unresolved array", 23)));
((*(yR100 *)rt_nil_check(F.v5623))).f_nidx = F.v5627;
((*(yR100 *)rt_nil_check(F.v5623))).f_elem = yr1851_MakeRep(((*(yR95 *)rt_nil_check(F.p2492))).f_b, INT64_C(0), 0);
yr1791_CheckRepresented(((*(yR100 *)rt_nil_check(F.v5623))).f_elem, ((*(yR95 *)rt_nil_check(F.p2492))).f_line);
((*(yR100 *)rt_nil_check(F.v5623))).f_deep = 1;
{ void * rv5635 = F.v5623;
return rv5635; }
}
if ((((*(yR95 *)rt_nil_check(F.p2492))).f_kind == v669)) {
{ void * rv5637 = yr1707_NewRep(v825, yr1021_T(y_str("SPACE", 5)));
return rv5637; }
}
F.v5623 = yr1851_MakeRep(F.p2492, INT64_C(0), 0);
yr1791_CheckRepresented(F.v5623, ((*(yR95 *)rt_nil_check(F.p2492))).f_line);
{ void * rv5640 = F.v5623;
return rv5640; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2497_ParamCType(void * a_p2498) {
struct yf2499 F;
memset((void *)&F, 0, sizeof F);
F.p2498 = a_p2498;
F.v5644 = yr1750_CType(((*(yR110 *)rt_nil_check(F.p2498))).f_rep);
if ((((*(yR110 *)rt_nil_check(F.p2498))).f_cls == v867)) {
{ rt_int rv5645 = F.v5644;
return rv5645; }
}
yr986_SB();
yr1004_ST(F.v5644);
yr997_SA(y_str(" *", 2));
{ rt_int rv5647 = yr1016_SE();
return rv5647; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2503_RoutineHeader(void * a_p2504, rt_int a_p2505) {
struct yf2506 F;
memset((void *)&F, 0, sizeof F);
F.p2504 = a_p2504;
F.p2505 = a_p2505;
F.v5668 = 1;
F.v5652 = yr1588_NewSym(F.p2505, ((*(yR95 *)rt_nil_check(F.p2504))).f_name);
((*(yR115 *)rt_nil_check(F.v5652))).f_decl = F.p2504;
((*(yR115 *)rt_nil_check(F.v5652))).f_func = (((*(yR95 *)rt_nil_check(F.p2504))).f_flag == INT64_C(1));
((*(yR115 *)rt_nil_check(F.v5652))).f_level = rt_range(rt_add(v1576, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR115 *)rt_nil_check(F.v5652))).f_cname = yr2485_RoutineCName(((*(yR95 *)rt_nil_check(F.p2504))).f_name);
if ((!(((*(yR95 *)rt_nil_check(F.p2504))).f_b == ((void *)0)))) {
((*(yR115 *)rt_nil_check(F.v5652))).f_ret = yr1851_MakeRep(((*(yR95 *)rt_nil_check(F.p2504))).f_b, INT64_C(0), 0);
yr1791_CheckRepresented(((*(yR115 *)rt_nil_check(F.v5652))).f_ret, ((*(yR95 *)rt_nil_check(F.p2504))).f_line);
} else {
((*(yR115 *)rt_nil_check(F.v5652))).f_ret = v1689;
if (((*(yR115 *)rt_nil_check(F.v5652))).f_func) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2504))).f_line, ((*(yR95 *)rt_nil_check(F.p2504))).f_name, y_str(": a FUNCTION has a RETURNS clause (X.A)", 39));
}
}
F.v5662 = ((void *)0);
F.v5656 = ((*(yR95 *)rt_nil_check(F.p2504))).f_a;
while ((!(F.v5656 == ((void *)0)))) {
F.v5664 = yr2491_FormalRep(((*(yR95 *)rt_nil_check(F.v5656))).f_b);
if ((((*(yR115 *)rt_nil_check(F.v5652))).f_func && ((!(((*(yR95 *)rt_nil_check(F.v5656))).f_ival == v867))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.v5656))).f_line, ((*(yR95 *)rt_nil_check(F.p2504))).f_name, y_str(": the parameters of a FUNCTION are CONST (X.A.2)", 48));
}
if ((((F.p2505 == v855)) && ((((*(yR95 *)rt_nil_check(F.v5656))).f_ival == v870)))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.v5656))).f_line, ((*(yR95 *)rt_nil_check(F.p2504))).f_name, y_str(": a process has no OUT parameters", 33));
}
F.v5658 = ((*(yR95 *)rt_nil_check(F.v5656))).f_a;
while ((!(F.v5658 == ((void *)0)))) {
({ F.v5660 = rt_alloc(sizeof(yR110)); });
(*(yR110 *)rt_nil_check(F.v5660)) = ((yR110){ .f_name = ((*(yR95 *)rt_nil_check(F.v5658))).f_name, .f_cls = ((*(yR95 *)rt_nil_check(F.v5656))).f_ival, .f_rep = F.v5664, .f_cname = yr1146_Fresh(y_str("p", 1)), .f_next = ((void *)0) });
if ((F.v5662 == ((void *)0))) {
((*(yR115 *)rt_nil_check(F.v5652))).f_params = F.v5660;
} else {
((*(yR110 *)rt_nil_check(F.v5662))).f_next = F.v5660;
}
F.v5662 = F.v5660;
((*(yR115 *)rt_nil_check(F.v5652))).f_nparams = rt_range(rt_add(((*(yR115 *)rt_nil_check(F.v5652))).f_nparams, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5658 = ((*(yR95 *)rt_nil_check(F.v5658))).f_next;
}
F.v5656 = ((*(yR95 *)rt_nil_check(F.v5656))).f_next;
}
F.v5654 = yr1612_Find(((*(yR95 *)rt_nil_check(F.p2504))).f_name);
if ((!(F.v5654 == ((void *)0)))) {
F.v5654 = yr1677_Real(F.v5654);
}
if (((((!(((*(yR95 *)rt_nil_check(F.p2504))).f_ival == INT64_C(0)))) && ((!(F.v5654 == ((void *)0))))) && ((((*(yR115 *)rt_nil_check(F.v5654))).f_kind == v846)))) {
((*(yR115 *)rt_nil_check(F.v5652))).f_alt = F.v5654;
if ((((((*(yR95 *)rt_nil_check(F.p2504))).f_ival == v309)) && ((!(yr2510_SameSignature(F.v5652, F.v5654) == ((void *)0)))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2504))).f_line, ((*(yR95 *)rt_nil_check(F.p2504))).f_name, y_str(" EXTENDS a definition for the same parameter types: use REPLACES", 64));
}
if ((((((*(yR95 *)rt_nil_check(F.p2504))).f_ival == v405)) && ((yr2510_SameSignature(F.v5652, F.v5654) == ((void *)0))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2504))).f_line, ((*(yR95 *)rt_nil_check(F.p2504))).f_name, y_str(" REPLACES no definition for these parameter types", 49));
}
}
((*(yR95 *)rt_nil_check(F.p2504))).f_sym = F.v5652;
yr1644_Define(F.v5652, ((*(yR95 *)rt_nil_check(F.p2504))).f_line);
((rt_int *)(v1586).p)[y_ix1(v1586, ((*(yR115 *)rt_nil_check(F.v5652))).f_level)] = yr1146_Fresh(y_str("yf", 2));
((*(yR115 *)rt_nil_check(F.v5652))).f_members = yr1588_NewSym(v861, ((rt_int *)(v1586).p)[y_ix1(v1586, ((*(yR115 *)rt_nil_check(F.v5652))).f_level)]);
yr986_SB();
yr997_SA(y_str("struct ", 7));
yr1004_ST(((rt_int *)(v1586).p)[y_ix1(v1586, ((*(yR115 *)rt_nil_check(F.v5652))).f_level)]);
yr997_SA(y_str(";", 1));
F.v5666 = yr1016_SE();
yr1070_Put(&v942, F.v5666);
yr986_SB();
yr997_SA(y_str("static ", 7));
if ((F.p2505 == v855)) {
yr997_SA(y_str("void", 4));
} else {
yr1004_ST(yr1750_CType(((*(yR115 *)rt_nil_check(F.v5652))).f_ret));
}
yr997_SA(y_str(" ", 1));
yr1004_ST(((*(yR115 *)rt_nil_check(F.v5652))).f_cname);
yr997_SA(y_str("(", 1));
F.v5666 = yr1016_SE();
if ((F.p2505 == v855)) {
F.v5666 = yr2465_Join(F.v5666, yr1021_T(y_str("void *arg", 9)), INT64_C(0));
F.v5668 = 0;
} else if ((v1576 > INT64_C(0))) {
yr986_SB();
yr1004_ST(F.v5666);
yr997_SA(y_str("struct ", 7));
yr1004_ST(((rt_int *)(v1586).p)[y_ix1(v1586, v1576)]);
yr997_SA(y_str(" *up", 4));
F.v5666 = yr1016_SE();
F.v5668 = 0;
}
F.v5660 = ((*(yR115 *)rt_nil_check(F.v5652))).f_params;
while ((((!(F.v5660 == ((void *)0)))) && ((!(F.p2505 == v855))))) {
yr986_SB();
yr1004_ST(F.v5666);
if ((!F.v5668)) {
yr997_SA(y_str(", ", 2));
}
F.v5668 = 0;
yr1004_ST(yr2497_ParamCType(F.v5660));
yr997_SA(y_str(" a_", 3));
yr1004_ST(((*(yR110 *)rt_nil_check(F.v5660))).f_cname);
F.v5666 = yr1016_SE();
F.v5660 = ((*(yR110 *)rt_nil_check(F.v5660))).f_next;
}
if (F.v5668) {
F.v5666 = yr2465_Join(F.v5666, yr1021_T(y_str("void", 4)), INT64_C(0));
}
F.v5666 = yr2465_Join(F.v5666, yr1021_T(y_str(")", 1)), INT64_C(0));
((*(yR115 *)rt_nil_check(F.v5652))).f_mnext = yr1588_NewSym(v861, F.v5666);
yr1070_Put(&v950, yr2465_Join(F.v5666, yr1021_T(y_str(";", 1)), INT64_C(0)));
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2510_SameSignature(void * a_p2511, void * a_p2512) {
struct yf2513 F;
memset((void *)&F, 0, sizeof F);
F.p2511 = a_p2511;
F.p2512 = a_p2512;
F.v5711 = F.p2512;
while ((!(F.v5711 == ((void *)0)))) {
if ((((*(yR115 *)rt_nil_check(F.v5711))).f_nparams == ((*(yR115 *)rt_nil_check(F.p2511))).f_nparams)) {
F.v5717 = 1;
F.v5713 = ((*(yR115 *)rt_nil_check(F.p2511))).f_params;
F.v5715 = ((*(yR115 *)rt_nil_check(F.v5711))).f_params;
while ((!(F.v5713 == ((void *)0)))) {
if ((!yr1768_SameType(((*(yR110 *)rt_nil_check(F.v5713))).f_rep, ((*(yR110 *)rt_nil_check(F.v5715))).f_rep))) {
F.v5717 = 0;
}
F.v5713 = ((*(yR110 *)rt_nil_check(F.v5713))).f_next;
F.v5715 = ((*(yR110 *)rt_nil_check(F.v5715))).f_next;
}
if (F.v5717) {
{ void * rv5720 = F.v5711;
return rv5720; }
}
}
F.v5711 = ((*(yR115 *)rt_nil_check(F.v5711))).f_alt;
}
{ void * rv5721 = ((void *)0);
return rv5721; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2517_RoutineBody(void * a_p2518) {
struct yf2519 F;
memset((void *)&F, 0, sizeof F);
F.p2518 = a_p2518;
F.v5725 = ((*(yR95 *)rt_nil_check(F.p2518))).f_sym;
F.v5727 = v956;
F.v5729 = v958;
F.v5731 = v1576;
F.v5733 = v2327;
F.v5735 = v2330;
F.v5737 = v2342;
F.v5739 = v2354;
F.v5741 = v2377;
F.v5743 = v2380;
F.v5745 = v2383;
F.v5747 = v2385;
v956 = ((yR130){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v958 = ((yR130){ .f_head = ((void *)0), .f_tail = ((void *)0) });
F.v5757 = ((yR130){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v1576 = ((*(yR115 *)rt_nil_check(F.v5725))).f_level;
F.v5753 = ((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5725))).f_members))).f_name;
((rt_int *)(v1586).p)[y_ix1(v1586, v1576)] = F.v5753;
v2330 = v2327;
v2380 = v2377;
v2354 = INT64_C(0);
v2383 = F.v5725;
v2385 = 0;
yr1595_OpenScope(0);
F.v5749 = ((*(yR115 *)rt_nil_check(F.v5725))).f_params;
while ((!(F.v5749 == ((void *)0)))) {
if ((((*(yR110 *)rt_nil_check(F.v5749))).f_cls == v867)) {
F.v5751 = yr1588_NewSym(v834, ((*(yR110 *)rt_nil_check(F.v5749))).f_name);
} else {
F.v5751 = yr1588_NewSym(v831, ((*(yR110 *)rt_nil_check(F.v5749))).f_name);
}
((*(yR115 *)rt_nil_check(F.v5751))).f_rep = ((*(yR110 *)rt_nil_check(F.v5749))).f_rep;
((*(yR115 *)rt_nil_check(F.v5751))).f_level = v1576;
((*(yR115 *)rt_nil_check(F.v5751))).f_cname = ((*(yR110 *)rt_nil_check(F.v5749))).f_cname;
if ((((*(yR115 *)rt_nil_check(F.v5725))).f_kind == v855)) {
((*(yR115 *)rt_nil_check(F.v5751))).f_byref = (((*(yR110 *)rt_nil_check(F.v5749))).f_cls == v873);
yr1664_DeclStorage(yr2497_ParamCType(F.v5749), ((*(yR110 *)rt_nil_check(F.v5749))).f_cname);
} else if ((((*(yR110 *)rt_nil_check(F.v5749))).f_cls == v873)) {
((*(yR115 *)rt_nil_check(F.v5751))).f_byref = 1;
yr1664_DeclStorage(yr2497_ParamCType(F.v5749), ((*(yR110 *)rt_nil_check(F.v5749))).f_cname);
yr1092_Emit(yr2465_Join(yr1021_T(y_str("F.", 2)), ((*(yR110 *)rt_nil_check(F.v5749))).f_cname, yr2465_Join(yr1021_T(y_str(" = a_", 5)), ((*(yR110 *)rt_nil_check(F.v5749))).f_cname, yr1021_T(y_str(";", 1)))));
} else if ((((*(yR110 *)rt_nil_check(F.v5749))).f_cls == v870)) {
yr1664_DeclStorage(yr1750_CType(((*(yR110 *)rt_nil_check(F.v5749))).f_rep), ((*(yR110 *)rt_nil_check(F.v5749))).f_cname);
yr1664_DeclStorage(yr2497_ParamCType(F.v5749), yr2465_Join(((*(yR110 *)rt_nil_check(F.v5749))).f_cname, yr1021_T(y_str("_o", 2)), INT64_C(0)));
yr1092_Emit(yr2465_Join(yr1021_T(y_str("F.", 2)), ((*(yR110 *)rt_nil_check(F.v5749))).f_cname, yr2465_Join(yr1021_T(y_str("_o = a_", 7)), ((*(yR110 *)rt_nil_check(F.v5749))).f_cname, yr1021_T(y_str(";", 1)))));
if ((yr1744_Deep(((*(yR110 *)rt_nil_check(F.v5749))).f_rep) && ((!(((*(yR100 *)rt_nil_check(((*(yR110 *)rt_nil_check(F.v5749))).f_rep))).f_kind == v813))))) {
yr1092_Emit(yr2465_Join(yr1021_T(y_str("y_init(", 7)), yr1756_DescOf(((*(yR110 *)rt_nil_check(F.v5749))).f_rep), yr2465_Join(yr1021_T(y_str(", &F.", 5)), ((*(yR110 *)rt_nil_check(F.v5749))).f_cname, yr1021_T(y_str(");", 2)))));
}
if ((((*(yR100 *)rt_nil_check(((*(yR110 *)rt_nil_check(F.v5749))).f_rep))).f_kind == v813)) {
yr1092_Emit(yr2465_Join(yr1021_T(y_str("F.", 2)), ((*(yR110 *)rt_nil_check(F.v5749))).f_cname, yr2465_Join(yr1021_T(y_str(" = *a_", 6)), ((*(yR110 *)rt_nil_check(F.v5749))).f_cname, yr1021_T(y_str(";", 1)))));
}
} else {
yr1664_DeclStorage(yr1750_CType(((*(yR110 *)rt_nil_check(F.v5749))).f_rep), ((*(yR110 *)rt_nil_check(F.v5749))).f_cname);
yr1092_Emit(yr2465_Join(yr1021_T(y_str("F.", 2)), ((*(yR110 *)rt_nil_check(F.v5749))).f_cname, yr2465_Join(yr1021_T(y_str(" = a_", 5)), ((*(yR110 *)rt_nil_check(F.v5749))).f_cname, yr1021_T(y_str(";", 1)))));
}
yr1644_Define(F.v5751, ((*(yR95 *)rt_nil_check(F.p2518))).f_line);
F.v5749 = ((*(yR110 *)rt_nil_check(F.v5749))).f_next;
}
yr2643_EnterMonitor(F.v5725);
yr2551_Declarations(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2518))).f_c))).f_a);
yr2423_BlockStatements(((*(yR95 *)rt_nil_check(F.p2518))).f_c);
if ((((*(yR115 *)rt_nil_check(F.v5725))).f_kind == v855)) {
yr1098_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
} else {
yr1098_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
}
yr2625_AwaitProcesses();
yr1601_CloseScope();
yr986_SB();
yr997_SA(y_str("struct ", 7));
yr1004_ST(F.v5753);
yr997_SA(y_str(" {", 2));
if ((v1576 > INT64_C(1))) {
yr997_SA(y_str(" struct ", 8));
yr1004_ST(((rt_int *)(v1586).p)[y_ix1(v1586, rt_sub(v1576, INT64_C(1)))]);
yr997_SA(y_str(" *up;", 5));
} else {
yr997_SA(y_str(" void *up;", 10));
}
F.v5755 = yr1016_SE();
yr1070_Put(&v946, F.v5755);
yr1085_Append(&v946, &v958);
yr1077_PutS(&v946, y_str("};", 2));
yr1070_Put(&F.v5757, yr2465_Join(((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5725))).f_mnext))).f_name, yr1021_T(y_str(" {", 2)), INT64_C(0)));
if (v2385) {
yr1077_PutS(&F.v5757, y_str("volatile", 8));
}
yr1070_Put(&F.v5757, yr2465_Join(yr1021_T(y_str("struct ", 7)), F.v5753, yr1021_T(y_str(" F;", 3))));
yr1077_PutS(&F.v5757, y_str("memset((void *)&F, 0, sizeof F);", 32));
if ((((*(yR115 *)rt_nil_check(F.v5725))).f_kind == v855)) {
yr1070_Put(&F.v5757, yr2465_Join(yr1021_T(y_str("F = *(struct ", 13)), F.v5753, yr1021_T(y_str(" *)arg;", 7))));
} else if ((v1576 > INT64_C(1))) {
yr1077_PutS(&F.v5757, y_str("F.up = up;", 10));
}
yr1085_Append(&F.v5757, &v956);
yr1077_PutS(&F.v5757, y_str("}", 1));
yr1085_Append(&v952, &F.v5757);
v956 = F.v5727;
v958 = F.v5729;
v1576 = F.v5731;
((rt_int *)(v1586).p)[y_ix1(v1586, v1576)] = yr1146_Fresh(y_str("unused", 6));
if ((!(F.v5745 == ((void *)0)))) {
((rt_int *)(v1586).p)[y_ix1(v1586, v1576)] = ((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5745))).f_members))).f_name;
}
v2327 = F.v5733;
v2330 = F.v5735;
v2342 = F.v5737;
v2354 = F.v5739;
v2377 = F.v5741;
v2380 = F.v5743;
v2383 = F.v5745;
v2385 = F.v5747;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2523_DeclareStorage(void * a_p2524, void * a_p2525, rt_int a_p2526) {
struct yf2527 F;
memset((void *)&F, 0, sizeof F);
F.p2524 = a_p2524;
F.p2525 = a_p2525;
F.p2526 = a_p2526;
((*(yR115 *)rt_nil_check(F.p2524))).f_rep = F.p2525;
((*(yR115 *)rt_nil_check(F.p2524))).f_level = v1576;
((*(yR115 *)rt_nil_check(F.p2524))).f_cname = yr1146_Fresh(y_str("v", 1));
yr1664_DeclStorage(yr1750_CType(F.p2525), ((*(yR115 *)rt_nil_check(F.p2524))).f_cname);
if (yr1744_Deep(F.p2525)) {
yr1092_Emit(yr2465_Join(yr1021_T(y_str("y_init(", 7)), yr1756_DescOf(F.p2525), yr2465_Join(yr1021_T(y_str(", &", 3)), yr1671_SymPath(F.p2524), yr1021_T(y_str(");", 2)))));
}
if ((((*(yR100 *)rt_nil_check(F.p2525))).f_kind == v804)) {
yr1092_Emit(yr2465_Join(yr1671_SymPath(F.p2524), yr1021_T(y_str(" = y_set_new(", 13)), yr2465_Join(yr1812_LoText(((*(yR100 *)rt_nil_check(F.p2525))).f_elem), yr1021_T(y_str(", ", 2)), yr2465_Join(yr1818_HiText(((*(yR100 *)rt_nil_check(F.p2525))).f_elem), yr1021_T(y_str(");", 2)), INT64_C(0)))));
}
if ((((*(yR100 *)rt_nil_check(F.p2525))).f_kind == v807)) {
yr2660_DeclareSignal(F.p2524, F.p2526);
}
if ((((*(yR100 *)rt_nil_check(F.p2525))).f_kind == v810)) {
yr1092_Emit(yr2465_Join(yr1021_T(y_str("rt_lock_init(&", 14)), yr1671_SymPath(F.p2524), yr1021_T(y_str(");", 2))));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2531_SimpleDecl(void * a_p2532) {
struct yf2533 F;
memset((void *)&F, 0, sizeof F);
F.p2532 = a_p2532;
F.v5819 = ((*(yR95 *)rt_nil_check(F.p2532))).f_kind;
if ((((F.v5819 == v609)) || ((F.v5819 == v612)))) {
F.v5821 = yr1851_MakeRep(((*(yR95 *)rt_nil_check(F.p2532))).f_b, INT64_C(0), 0);
yr1791_CheckRepresented(F.v5821, ((*(yR95 *)rt_nil_check(F.p2532))).f_line);
if ((((F.v5819 == v609)) && (((((((*(yR100 *)rt_nil_check(F.v5821))).f_kind == v807)) || ((((*(yR100 *)rt_nil_check(F.v5821))).f_kind == v801))) || ((((*(yR100 *)rt_nil_check(F.v5821))).f_kind == v810)))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2532))).f_line, y_str("signals, files and semaphores are variables (VII.B)", 51));
}
F.v5825 = ((*(yR95 *)rt_nil_check(F.p2532))).f_a;
while ((!(F.v5825 == ((void *)0)))) {
if ((F.v5819 == v609)) {
F.v5827 = yr1588_NewSym(v834, ((*(yR95 *)rt_nil_check(F.v5825))).f_name);
} else {
F.v5827 = yr1588_NewSym(v831, ((*(yR95 *)rt_nil_check(F.v5825))).f_name);
}
yr2523_DeclareStorage(F.v5827, F.v5821, ((*(yR95 *)rt_nil_check(F.p2532))).f_line);
if ((!(((*(yR95 *)rt_nil_check(F.p2532))).f_c == ((void *)0)))) {
yr2119_Expr(((*(yR95 *)rt_nil_check(F.p2532))).f_c, F.v5821, &F.v5829, &F.v5823);
yr2076_Store(yr1671_SymPath(F.v5827), F.v5821, F.v5829, F.v5823, ((*(yR95 *)rt_nil_check(F.p2532))).f_line);
if ((F.v5819 == v609)) {
yr2060_Manifest(((*(yR95 *)rt_nil_check(F.p2532))).f_c, &F.v5831, &F.v5833);
if ((F.v5831 && yr1720_IsDiscrete(F.v5821))) {
((*(yR115 *)rt_nil_check(F.v5827))).f_hasmv = 1;
((*(yR115 *)rt_nil_check(F.v5827))).f_mval = F.v5833;
}
}
}
if ((!(((*(yR95 *)rt_nil_check(F.v5825))).f_a == ((void *)0)))) {
yr2544_AtLocation(F.v5827, ((*(yR95 *)rt_nil_check(F.v5825))).f_a);
}
yr1644_Define(F.v5827, ((*(yR95 *)rt_nil_check(F.v5825))).f_line);
F.v5825 = ((*(yR95 *)rt_nil_check(F.v5825))).f_next;
}
return;
}
if ((F.v5819 == v621)) {
F.v5821 = yr1851_MakeRep(((*(yR95 *)rt_nil_check(F.p2532))).f_b, ((*(yR95 *)rt_nil_check(F.p2532))).f_name, 0);
yr1791_CheckRepresented(F.v5821, ((*(yR95 *)rt_nil_check(F.p2532))).f_line);
F.v5827 = yr1588_NewSym(v837, ((*(yR95 *)rt_nil_check(F.p2532))).f_name);
((*(yR115 *)rt_nil_check(F.v5827))).f_rep = F.v5821;
yr1644_Define(F.v5827, ((*(yR95 *)rt_nil_check(F.p2532))).f_line);
yr1859_ResolvePending(((*(yR95 *)rt_nil_check(F.p2532))).f_name, F.v5821);
yr2537_NoteAlphabet(F.p2532, F.v5821);
return;
}
if ((F.v5819 == v618)) {
F.v5821 = yr1851_MakeRep(((*(yR95 *)rt_nil_check(F.p2532))).f_b, ((*(yR95 *)rt_nil_check(F.p2532))).f_name, 1);
if ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2532))).f_b))).f_kind == v642)) {
F.v5821 = yr1714_CopyRep(F.v5821);
((*(yR100 *)rt_nil_check(F.v5821))).f_tid = yr1845_NewTid(((*(yR95 *)rt_nil_check(F.p2532))).f_name);
((*(yR100 *)rt_nil_check(F.v5821))).f_tname = ((*(yR95 *)rt_nil_check(F.p2532))).f_name;
if (((((((*(yR100 *)rt_nil_check(F.v5821))).f_kind == v774)) || ((((*(yR100 *)rt_nil_check(F.v5821))).f_kind == v777))) || ((((*(yR100 *)rt_nil_check(F.v5821))).f_kind == v780)))) {
if ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2532))).f_b))).f_a == ((void *)0))) {
((*(yR100 *)rt_nil_check(F.v5821))).f_abstract = 1;
}
}
}
F.v5827 = yr1588_NewSym(v840, ((*(yR95 *)rt_nil_check(F.p2532))).f_name);
((*(yR115 *)rt_nil_check(F.v5827))).f_rep = F.v5821;
yr1644_Define(F.v5827, ((*(yR95 *)rt_nil_check(F.p2532))).f_line);
yr1859_ResolvePending(((*(yR95 *)rt_nil_check(F.p2532))).f_name, F.v5821);
yr2537_NoteAlphabet(F.p2532, F.v5821);
return;
}
if ((F.v5819 == v615)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2532))).f_line, y_str("this translator has no labels yet", 33));
return;
}
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2532))).f_line, y_str("not a simple declaration", 24));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2537_NoteAlphabet(void * a_p2538, void * a_p2539) {
struct yf2540 F;
memset((void *)&F, 0, sizeof F);
F.p2538 = a_p2538;
F.p2539 = a_p2539;
if ((((((*(yR100 *)rt_nil_check(F.p2539))).f_kind == v789)) && ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2538))).f_b))).f_kind == v648)))) {
F.v5847 = yr1245_NewNode(v639, ((*(yR95 *)rt_nil_check(F.p2538))).f_line);
((*(yR95 *)rt_nil_check(F.v5847))).f_name = ((*(yR95 *)rt_nil_check(F.p2538))).f_name;
((*(yR95 *)rt_nil_check(F.v5847))).f_rep = F.p2539;
((*(yR95 *)rt_nil_check(F.v5847))).f_next = v2027;
v2027 = F.v5847;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2544_AtLocation(void * a_p2545, void * a_p2546) {
struct yf2547 F;
memset((void *)&F, 0, sizeof F);
F.p2545 = a_p2545;
F.p2546 = a_p2546;
if ((((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.p2545))).f_rep))).f_kind == v807)) {
yr2667_DeviceSignal(F.p2545, F.p2546);
return;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2551_Declarations(void * a_p2552) {
struct yf2553 F;
memset((void *)&F, 0, sizeof F);
F.p2552 = a_p2552;
F.v5854 = F.p2552;
F.v5856 = ((void *)0);
F.v5858 = ((void *)0);
F.v5860 = ((void *)0);
while ((!(F.v5854 == ((void *)0)))) {
v960 = ((*(yR95 *)rt_nil_check(F.v5854))).f_line;
if ((((((*(yR95 *)rt_nil_check(F.v5854))).f_kind == v624)) || ((((*(yR95 *)rt_nil_check(F.v5854))).f_kind == v636)))) {
if ((((*(yR95 *)rt_nil_check(F.v5854))).f_kind == v624)) {
yr2503_RoutineHeader(F.v5854, v846);
} else {
yr2503_RoutineHeader(F.v5854, v855);
}
F.v5860 = yr1245_NewNode(v639, ((*(yR95 *)rt_nil_check(F.v5854))).f_line);
((*(yR95 *)rt_nil_check(F.v5860))).f_a = F.v5854;
yr1252_Link(&F.v5856, &F.v5858, F.v5860);
if ((((*(yR95 *)rt_nil_check(F.v5854))).f_kind == v636)) {
yr2619_DeclareProcess(F.v5854);
}
} else if (((((*(yR95 *)rt_nil_check(F.v5854))).f_kind == v594))) {
yr2601_CompileModule(F.v5854);
} else if ((((*(yR95 *)rt_nil_check(F.v5854))).f_kind == v630)) {
yr2607_DeclareTemplate(F.v5854);
} else if ((((*(yR95 *)rt_nil_check(F.v5854))).f_kind == v633)) {
yr2613_Instantiate(F.v5854);
} else {
yr2531_SimpleDecl(F.v5854);
}
F.v5854 = ((*(yR95 *)rt_nil_check(F.v5854))).f_next;
}
yr1866_CheckPending();
F.v5860 = F.v5856;
while ((!(F.v5860 == ((void *)0)))) {
yr2517_RoutineBody(((*(yR95 *)rt_nil_check(F.v5860))).f_a);
F.v5860 = ((*(yR95 *)rt_nil_check(F.v5860))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2568_Alias(rt_int a_p2569, void * a_p2570) {
struct yf2571 F;
memset((void *)&F, 0, sizeof F);
F.p2569 = a_p2569;
F.p2570 = a_p2570;
F.v5865 = yr1588_NewSym(v864, F.p2569);
((*(yR115 *)rt_nil_check(F.v5865))).f_target = F.p2570;
((*(yR115 *)rt_nil_check(F.v5865))).f_readonly = ((*(yR115 *)rt_nil_check(F.p2570))).f_readonly;
{ void * rv5866 = F.v5865;
return rv5866; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2575_AddLits(void * * a_p2576, void * a_p2577, rt_int a_p2578) {
struct yf2579 F;
memset((void *)&F, 0, sizeof F);
F.p2576 = a_p2576;
F.p2577 = a_p2577;
F.p2578 = a_p2578;
if ((((F.p2578 > INT64_C(8))) || ((*(yR100 *)rt_nil_check(F.p2577))).f_opaque)) {
return;
}
if ((((*(yR100 *)rt_nil_check(F.p2577))).f_kind == v786)) {
F.v5872 = ((*(yR100 *)rt_nil_check(F.p2577))).f_lits;
while ((!(F.v5872 == ((void *)0)))) {
F.v5874 = yr1637_FindLit(((*(yR95 *)rt_nil_check(F.v5872))).f_name, F.p2577);
if ((!(F.v5874 == ((void *)0)))) {
F.v5874 = yr2568_Alias(((*(yR95 *)rt_nil_check(F.v5872))).f_name, F.v5874);
((*(yR115 *)rt_nil_check(F.v5874))).f_mnext = (*F.p2576);
(*F.p2576) = F.v5874;
}
F.v5872 = ((*(yR95 *)rt_nil_check(F.v5872))).f_next;
}
} else if ((((*(yR100 *)rt_nil_check(F.p2577))).f_kind == v795)) {
F.v5876 = ((*(yR100 *)rt_nil_check(F.p2577))).f_fields;
while ((!(F.v5876 == ((void *)0)))) {
yr2575_AddLits(&(*F.p2576), ((*(yR105 *)rt_nil_check(F.v5876))).f_rep, rt_range(rt_add(F.p2578, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v5876 = ((*(yR105 *)rt_nil_check(F.v5876))).f_next;
}
} else if (((((((*(yR100 *)rt_nil_check(F.p2577))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.p2577))).f_kind == v804))) || ((((*(yR100 *)rt_nil_check(F.p2577))).f_kind == v801)))) {
yr2575_AddLits(&(*F.p2576), ((*(yR100 *)rt_nil_check(F.p2577))).f_elem, rt_range(rt_add(F.p2578, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2586_ResolveItem(void * a_p2587, void * * a_p2588, rt_int a_p2589) {
struct yf2590 F;
memset((void *)&F, 0, sizeof F);
F.p2587 = a_p2587;
F.p2588 = a_p2588;
F.p2589 = a_p2589;
F.v5897 = ((*(yR95 *)rt_nil_check(F.p2587))).f_flag;
if (((F.p2589 && ((((*(yR95 *)rt_nil_check(F.p2587))).f_text == INT64_C(0)))) && (((((((*(yR95 *)rt_nil_check(F.p2587))).f_name == v501)) || ((((*(yR95 *)rt_nil_check(F.p2587))).f_name == v555))) || ((((*(yR95 *)rt_nil_check(F.p2587))).f_name == v540)))))) {
if ((yr1618_FindHere(((*(yR95 *)rt_nil_check(F.p2587))).f_name) == ((void *)0))) {
return;
}
}
if ((!(((*(yR95 *)rt_nil_check(F.p2587))).f_text == INT64_C(0)))) {
F.v5889 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(F.p2587))).f_text, ((*(yR95 *)rt_nil_check(F.p2587))).f_line));
if ((!(((*(yR115 *)rt_nil_check(F.v5889))).f_kind == v849))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2587))).f_line, ((*(yR95 *)rt_nil_check(F.p2587))).f_text, y_str(" is not a module", 16));
}
F.v5887 = ((*(yR115 *)rt_nil_check(F.v5889))).f_members;
while ((((!(F.v5887 == ((void *)0)))) && ((!(((*(yR115 *)rt_nil_check(F.v5887))).f_name == ((*(yR95 *)rt_nil_check(F.p2587))).f_name))))) {
F.v5887 = ((*(yR115 *)rt_nil_check(F.v5887))).f_mnext;
}
if ((F.v5887 == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2587))).f_line, ((*(yR95 *)rt_nil_check(F.p2587))).f_name, y_str(" is not exported by that module", 31));
}
} else {
if (F.p2589) {
F.v5887 = yr1618_FindHere(((*(yR95 *)rt_nil_check(F.p2587))).f_name);
} else {
F.v5887 = yr1612_Find(((*(yR95 *)rt_nil_check(F.p2587))).f_name);
}
if ((F.v5887 == ((void *)0))) {
if (F.p2589) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2587))).f_line, ((*(yR95 *)rt_nil_check(F.p2587))).f_name, y_str(" is not declared in this module", 31));
} else {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2587))).f_line, ((*(yR95 *)rt_nil_check(F.p2587))).f_name, y_str(" is not declared around this module (X.B.2)", 43));
}
}
}
F.v5893 = ((*(yR95 *)rt_nil_check(F.p2587))).f_name;
if ((!(((*(yR95 *)rt_nil_check(F.p2587))).f_ival == INT64_C(0)))) {
F.v5893 = rt_range(((*(yR95 *)rt_nil_check(F.p2587))).f_ival, INT64_C(0), INT64_C(4000000));
}
F.v5889 = yr1677_Real(F.v5887);
if ((((((*(yR115 *)rt_nil_check(F.v5889))).f_kind == v849)) && ((((*(yR95 *)rt_nil_check(F.p2587))).f_text == INT64_C(0))))) {
if ((((!(F.v5897 == INT64_C(0)))) || ((!(((*(yR95 *)rt_nil_check(F.p2587))).f_ival == INT64_C(0)))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2587))).f_line, y_str("a module name in a list takes no attribute and no AS (X.B.3)", 60));
}
F.v5891 = ((*(yR115 *)rt_nil_check(F.v5889))).f_members;
while ((!(F.v5891 == ((void *)0)))) {
F.v5887 = yr2568_Alias(((*(yR115 *)rt_nil_check(F.v5891))).f_name, F.v5891);
((*(yR115 *)rt_nil_check(F.v5887))).f_mnext = (*F.p2588);
(*F.p2588) = F.v5887;
F.v5891 = ((*(yR115 *)rt_nil_check(F.v5891))).f_mnext;
}
if ((!F.p2589)) {
F.v5887 = yr2568_Alias(((*(yR115 *)rt_nil_check(F.v5889))).f_name, F.v5889);
((*(yR115 *)rt_nil_check(F.v5887))).f_mnext = (*F.p2588);
(*F.p2588) = F.v5887;
}
return;
}
F.v5891 = yr2568_Alias(F.v5893, F.v5887);
if (F.p2589) {
if ((((((*(yR115 *)rt_nil_check(F.v5889))).f_kind == v837)) || ((((*(yR115 *)rt_nil_check(F.v5889))).f_kind == v840)))) {
if ((((F.v5897 == v399)) || ((F.v5897 == v453)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2587))).f_line, y_str("READONLY and VAR are for variables", 34));
}
if ((((!(F.v5897 == v444))) || ((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5889))).f_rep))).f_opaque)) {
F.v5895 = yr1714_CopyRep(((*(yR115 *)rt_nil_check(F.v5889))).f_rep);
((*(yR100 *)rt_nil_check(F.v5895))).f_opaque = 1;
((*(yR100 *)rt_nil_check(F.v5895))).f_opaqueops = v2583;
((*(yR115 *)rt_nil_check(F.v5891))).f_target = yr1588_NewSym(((*(yR115 *)rt_nil_check(F.v5889))).f_kind, ((*(yR115 *)rt_nil_check(F.v5889))).f_name);
((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5891))).f_target))).f_rep = F.v5895;
((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5891))).f_target))).f_decl = ((*(yR115 *)rt_nil_check(F.v5889))).f_decl;
} else {
yr2575_AddLits(&(*F.p2588), ((*(yR115 *)rt_nil_check(F.v5889))).f_rep, INT64_C(0));
}
} else if ((((*(yR115 *)rt_nil_check(F.v5889))).f_kind == v831)) {
if ((((F.v5897 == v366)) || ((F.v5897 == v444)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2587))).f_line, y_str("OPAQUE and TRANSPARENT are for types", 36));
}
if ((!(F.v5897 == v453))) {
((*(yR115 *)rt_nil_check(F.v5891))).f_readonly = 1;
}
} else if ((!(F.v5897 == INT64_C(0)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2587))).f_line, y_str("an attribute is for a type, a representation or a variable", 58));
}
if ((((((*(yR115 *)rt_nil_check(F.v5889))).f_kind == v831)) && ((((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5889))).f_rep))).f_kind == v807)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2587))).f_line, y_str("a signal may not be exported from its monitor (X.E.4)", 53));
}
} else if ((((((*(yR115 *)rt_nil_check(F.v5889))).f_kind == v837)) || ((((*(yR115 *)rt_nil_check(F.v5889))).f_kind == v840)))) {
yr2575_AddLits(&(*F.p2588), ((*(yR115 *)rt_nil_check(F.v5889))).f_rep, INT64_C(0));
}
((*(yR115 *)rt_nil_check(F.v5891))).f_mnext = (*F.p2588);
(*F.p2588) = F.v5891;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2594_DefineAll(void * a_p2595, rt_int a_p2596) {
struct yf2597 F;
memset((void *)&F, 0, sizeof F);
F.p2595 = a_p2595;
F.p2596 = a_p2596;
F.v5922 = F.p2595;
F.v5924 = F.p2595;
F.v5926 = F.p2595;
while ((!(F.v5922 == ((void *)0)))) {
F.v5924 = ((*(yR115 *)rt_nil_check(F.v5922))).f_mnext;
F.v5926 = yr1618_FindHere(((*(yR115 *)rt_nil_check(F.v5922))).f_name);
if ((((F.v5926 == ((void *)0))) || ((!(yr1677_Real(F.v5926) == yr1677_Real(F.v5922)))))) {
if (((((!(F.v5926 == ((void *)0)))) && ((((*(yR115 *)rt_nil_check(yr1677_Real(F.v5922)))).f_kind == v843))) && ((((*(yR115 *)rt_nil_check(yr1677_Real(F.v5926)))).f_kind == v843)))) {
yr1644_Define(F.v5922, F.p2596);
} else if ((F.v5926 == ((void *)0))) {
yr1644_Define(F.v5922, F.p2596);
} else {
yr1132_FailN(F.p2596, ((*(yR115 *)rt_nil_check(F.v5922))).f_name, y_str(" comes into this scope twice", 28));
}
}
F.v5922 = F.v5924;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2601_CompileModule(void * a_p2602) {
struct yf2603 F;
memset((void *)&F, 0, sizeof F);
F.p2602 = a_p2602;
F.v5955 = 0;
F.v5931 = ((void *)0);
F.v5947 = ((*(yR95 *)rt_nil_check(F.p2602))).f_a;
while ((!(F.v5947 == ((void *)0)))) {
yr2586_ResolveItem(F.v5947, &F.v5931, 0);
F.v5947 = ((*(yR95 *)rt_nil_check(F.v5947))).f_next;
}
F.v5941 = v2557;
if ((((((*(yR95 *)rt_nil_check(F.p2602))).f_flag == INT64_C(1))) && ((v2557 == ((void *)0))))) {
F.v5943 = yr1588_NewSym(v831, ((*(yR95 *)rt_nil_check(F.p2602))).f_name);
((*(yR115 *)rt_nil_check(F.v5943))).f_level = v1576;
((*(yR115 *)rt_nil_check(F.v5943))).f_cname = yr1146_Fresh(y_str("mon", 3));
((*(yR115 *)rt_nil_check(F.v5943))).f_rep = v1689;
yr1664_DeclStorage(yr1021_T(y_str("ymon", 4)), ((*(yR115 *)rt_nil_check(F.v5943))).f_cname);
yr1092_Emit(yr2465_Join(yr1021_T(y_str("y_mon_init(&", 12)), yr1651_Path(v1576, ((*(yR115 *)rt_nil_check(F.v5943))).f_cname), yr1021_T(y_str(");", 2))));
v2557 = F.v5943;
F.v5955 = 1;
}
yr1595_OpenScope(1);
((void * *)(v2566).p)[y_ix1(v2566, v1570)] = ((void *)0);
F.v5951 = v1573;
v1573 = v1570;
yr2594_DefineAll(F.v5931, ((*(yR95 *)rt_nil_check(F.p2602))).f_line);
yr2551_Declarations(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2602))).f_c))).f_a);
if (F.v5955) {
yr1092_Emit(yr2465_Join(yr1021_T(y_str("y_mon_enter(&", 13)), yr1651_Path(((*(yR115 *)rt_nil_check(v2557))).f_level, ((*(yR115 *)rt_nil_check(v2557))).f_cname), yr1021_T(y_str(");", 2))));
}
v2342 = rt_range(rt_add(v2342, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2340).p)[y_ix1(v2340, v2342)] = INT64_C(0);
yr2423_BlockStatements(((*(yR95 *)rt_nil_check(F.p2602))).f_c);
v2342 = rt_range(rt_sub(v2342, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (F.v5955) {
yr1092_Emit(yr2465_Join(yr1021_T(y_str("y_mon_leave(&", 13)), yr1651_Path(((*(yR115 *)rt_nil_check(v2557))).f_level, ((*(yR115 *)rt_nil_check(v2557))).f_cname), yr1021_T(y_str(");", 2))));
}
v2583 = INT64_C(0);
F.v5947 = ((*(yR95 *)rt_nil_check(F.p2602))).f_b;
while ((!(F.v5947 == ((void *)0)))) {
if ((((((*(yR95 *)rt_nil_check(F.v5947))).f_text == INT64_C(0))) && ((yr1618_FindHere(((*(yR95 *)rt_nil_check(F.v5947))).f_name) == ((void *)0))))) {
if ((((*(yR95 *)rt_nil_check(F.v5947))).f_name == v501)) {
v2583 = rt_range(rt_add(v2583, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((((((*(yR95 *)rt_nil_check(F.v5947))).f_name == v555)) || ((((*(yR95 *)rt_nil_check(F.v5947))).f_name == v540)))) {
if (((rt_div(v2583, INT64_C(2))) == INT64_C(0))) {
v2583 = rt_range(rt_add(v2583, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
}
F.v5947 = ((*(yR95 *)rt_nil_check(F.v5947))).f_next;
}
F.v5933 = ((void *)0);
F.v5947 = ((*(yR95 *)rt_nil_check(F.p2602))).f_b;
while ((!(F.v5947 == ((void *)0)))) {
yr2586_ResolveItem(F.v5947, &F.v5933, 1);
F.v5947 = ((*(yR95 *)rt_nil_check(F.v5947))).f_next;
}
F.v5949 = ((void * *)(v2566).p)[y_ix1(v2566, v1570)];
v1573 = F.v5951;
yr1601_CloseScope();
while ((!(F.v5949 == ((void *)0)))) {
F.v5947 = ((*(yR95 *)rt_nil_check(F.v5949))).f_next;
((*(yR95 *)rt_nil_check(F.v5949))).f_next = ((void * *)(v2566).p)[y_ix1(v2566, v1570)];
((void * *)(v2566).p)[y_ix1(v2566, v1570)] = F.v5949;
F.v5949 = F.v5947;
}
v2557 = F.v5941;
F.v5937 = yr1588_NewSym(v849, ((*(yR95 *)rt_nil_check(F.p2602))).f_name);
((*(yR115 *)rt_nil_check(F.v5937))).f_members = F.v5933;
yr1644_Define(F.v5937, ((*(yR95 *)rt_nil_check(F.p2602))).f_line);
F.v5939 = F.v5933;
F.v5933 = ((void *)0);
while ((!(F.v5939 == ((void *)0)))) {
F.v5945 = ((*(yR115 *)rt_nil_check(F.v5939))).f_mnext;
F.v5935 = yr2568_Alias(((*(yR115 *)rt_nil_check(F.v5939))).f_name, F.v5939);
((*(yR115 *)rt_nil_check(F.v5935))).f_readonly = ((*(yR115 *)rt_nil_check(F.v5939))).f_readonly;
((*(yR115 *)rt_nil_check(F.v5935))).f_mnext = F.v5933;
F.v5933 = F.v5935;
F.v5939 = F.v5945;
}
((*(yR115 *)rt_nil_check(F.v5937))).f_members = F.v5933;
F.v5939 = F.v5933;
while ((!(F.v5939 == ((void *)0)))) {
F.v5945 = yr2568_Alias(((*(yR115 *)rt_nil_check(F.v5939))).f_name, F.v5939);
((*(yR115 *)rt_nil_check(F.v5945))).f_readonly = ((*(yR115 *)rt_nil_check(F.v5939))).f_readonly;
if ((yr1618_FindHere(((*(yR115 *)rt_nil_check(F.v5939))).f_name) == ((void *)0))) {
yr1644_Define(F.v5945, ((*(yR95 *)rt_nil_check(F.p2602))).f_line);
} else if ((((((*(yR115 *)rt_nil_check(yr1618_FindHere(((*(yR115 *)rt_nil_check(F.v5939))).f_name)))).f_kind == v864)) && ((!(yr1677_Real(yr1618_FindHere(((*(yR115 *)rt_nil_check(F.v5939))).f_name)) == yr1677_Real(F.v5939)))))) {
yr1644_Define(F.v5945, ((*(yR95 *)rt_nil_check(F.p2602))).f_line);
} else if ((!(((*(yR115 *)rt_nil_check(yr1677_Real(F.v5939)))).f_kind == v843))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2602))).f_line, ((*(yR115 *)rt_nil_check(F.v5939))).f_name, y_str(" is exported into a scope that has it already", 45));
}
F.v5939 = ((*(yR115 *)rt_nil_check(F.v5939))).f_mnext;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2607_DeclareTemplate(void * a_p2608) {
struct yf2609 F;
memset((void *)&F, 0, sizeof F);
F.p2608 = a_p2608;
F.v5988 = yr1588_NewSym(v852, ((*(yR95 *)rt_nil_check(F.p2608))).f_name);
((*(yR115 *)rt_nil_check(F.v5988))).f_decl = F.p2608;
yr1644_Define(F.v5988, ((*(yR95 *)rt_nil_check(F.p2608))).f_line);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2613_Instantiate(void * a_p2614) {
struct yf2615 F;
memset((void *)&F, 0, sizeof F);
F.p2614 = a_p2614;
F.v5992 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(F.p2614))).f_name, ((*(yR95 *)rt_nil_check(F.p2614))).f_line));
if ((!(((*(yR115 *)rt_nil_check(F.v5992))).f_kind == v852))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2614))).f_line, ((*(yR95 *)rt_nil_check(F.p2614))).f_name, y_str(" is not a template", 18));
}
F.v5994 = ((*(yR115 *)rt_nil_check(F.v5992))).f_decl;
if ((!(yr1260_Count(((*(yR95 *)rt_nil_check(F.v5994))).f_a) == yr1260_Count(((*(yR95 *)rt_nil_check(F.p2614))).f_a)))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2614))).f_line, ((*(yR95 *)rt_nil_check(F.p2614))).f_name, y_str(": the number of actuals is wrong", 32));
}
F.v6000 = rt_range(rt_add(v1159, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo6016 = ((*(yR95 *)rt_nil_check(F.v5994))).f_ival;
F.hi6017 = rt_sub(((*(yR95 *)rt_nil_check(F.v5994))).f_flag, INT64_C(1));
{ rt_int hi6021 = F.hi6017;
for (rt_int i6020 = F.lo6016; i6020 <= hi6021; i6020++) { F.c_6019 = i6020;
F.v6004 = ((rt_int *)(v1153).p)[y_ix1(v1153, F.c_6019)];
F.v6006 = ((rt_int *)(v1155).p)[y_ix1(v1155, F.c_6019)];
if ((F.v6004 == v177)) {
F.v5996 = ((*(yR95 *)rt_nil_check(F.v5994))).f_a;
F.v5998 = ((*(yR95 *)rt_nil_check(F.p2614))).f_a;
while ((!(F.v5996 == ((void *)0)))) {
if ((((((*(yR95 *)rt_nil_check(F.v5996))).f_name == F.v6006)) && ((F.v6004 == v177)))) {
if ((((*(yR95 *)rt_nil_check(F.v5998))).f_flag == INT64_C(1))) {
F.v6004 = v186;
F.v6006 = ((*(yR95 *)rt_nil_check(F.v5998))).f_ival;
} else {
F.v6006 = ((*(yR95 *)rt_nil_check(F.v5998))).f_name;
if ((F.v6006 <= v462)) {
F.v6004 = v180;
} else if ((F.v6006 <= v591)) {
F.v6004 = v183;
}
}
}
F.v5996 = ((*(yR95 *)rt_nil_check(F.v5996))).f_next;
F.v5998 = ((*(yR95 *)rt_nil_check(F.v5998))).f_next;
}
}
v1159 = rt_range(rt_add(v1159, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1153).p)[y_ix1(v1153, v1159)] = F.v6004;
((rt_int *)(v1155).p)[y_ix1(v1155, v1159)] = F.v6006;
((rt_int *)(v1157).p)[y_ix1(v1157, v1159)] = ((rt_int *)(v1157).p)[y_ix1(v1157, F.c_6019)];
if (i6020 == hi6021) break;
}}
v1159 = rt_range(rt_add(v1159, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1153).p)[y_ix1(v1153, v1159)] = v174;
((rt_int *)(v1155).p)[y_ix1(v1155, v1159)] = INT64_C(0);
((rt_int *)(v1157).p)[y_ix1(v1157, v1159)] = ((*(yR95 *)rt_nil_check(F.p2614))).f_line;
F.v6002 = v1234;
v1234 = F.v6000;
F.v6008 = yr1350_ParseModule();
v1234 = F.v6002;
yr2601_CompileModule(F.v6008);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2619_DeclareProcess(void * a_p2620) {
struct yf2621 F;
memset((void *)&F, 0, sizeof F);
F.p2620 = a_p2620;
F.v6031 = ((*(yR95 *)rt_nil_check(F.p2620))).f_sym;
((*(yR115 *)rt_nil_check(F.v6031))).f_monitor = v2557;
yr1664_DeclStorage(yr1021_T(y_str("rt_taskdecl", 11)), yr2465_Join(((*(yR115 *)rt_nil_check(F.v6031))).f_cname, yr1021_T(y_str("_d", 2)), INT64_C(0)));
F.v6033 = yr1245_NewNode(v639, ((*(yR95 *)rt_nil_check(F.p2620))).f_line);
((*(yR95 *)rt_nil_check(F.v6033))).f_sym = F.v6031;
((*(yR95 *)rt_nil_check(F.v6033))).f_next = ((void * *)(v2566).p)[y_ix1(v2566, v1570)];
((void * *)(v2566).p)[y_ix1(v2566, v1570)] = F.v6033;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2625_AwaitProcesses(void) {
struct yf2626 F;
memset((void *)&F, 0, sizeof F);
F.v6039 = ((void * *)(v2566).p)[y_ix1(v2566, v1570)];
while ((!(F.v6039 == ((void *)0)))) {
yr1092_Emit(yr2465_Join(yr1021_T(y_str("rt_await_decl(&", 15)), yr1651_Path(rt_range(rt_sub(((*(yR115 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v6039))).f_sym))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr2465_Join(((*(yR115 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v6039))).f_sym))).f_cname, yr1021_T(y_str("_d", 2)), INT64_C(0))), yr1021_T(y_str(");", 2))));
F.v6039 = ((*(yR95 *)rt_nil_check(F.v6039))).f_next;
}
((void * *)(v2566).p)[y_ix1(v2566, v1570)] = ((void *)0);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2630_Activate(void * a_p2631, void * a_p2632) {
struct yf2633 F;
memset((void *)&F, 0, sizeof F);
F.p2631 = a_p2631;
F.p2632 = a_p2632;
F.v6070 = ((*(yR115 *)rt_nil_check(F.p2632))).f_decl;
yr2262_CompileArgs(((*(yR95 *)rt_nil_check(F.p2631))).f_a, F.p2632, &F.v6050, &F.v6052);
if ((!(F.v6052 == ((*(yR115 *)rt_nil_check(F.p2632))).f_nparams))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2631))).f_line, ((*(yR115 *)rt_nil_check(F.p2632))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
F.v6058 = yr1146_Fresh(y_str("pf", 2));
yr1092_Emit(yr2465_Join(yr1021_T(y_str("{ struct ", 9)), ((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.p2632))).f_members))).f_name, yr2465_Join(yr1021_T(y_str(" *", 2)), F.v6058, yr2465_Join(yr1021_T(y_str(" = rt_alloc(sizeof *", 20)), F.v6058, yr1021_T(y_str(");", 2))))));
if ((((*(yR115 *)rt_nil_check(F.p2632))).f_level > INT64_C(1))) {
yr1092_Emit(yr2465_Join(F.v6058, yr1021_T(y_str("->up = ", 7)), yr2465_Join(yr1658_FramePtr(rt_range(rt_sub(((*(yR115 *)rt_nil_check(F.p2632))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))), yr1021_T(y_str(";", 1)), INT64_C(0))));
}
F.v6056 = ((*(yR115 *)rt_nil_check(F.p2632))).f_params;
F.v6054 = rt_range(rt_add(F.v6050, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(F.v6056 == ((void *)0)))) {
if ((!yr2241_Fits(((*(yR110 *)rt_nil_check(F.v6056))).f_rep, ((void * *)(v2227).p)[y_ix1(v2227, F.v6054)]))) {
yr1775_TypeClash(((*(yR95 *)rt_nil_check(((void * *)(v2236).p)[y_ix1(v2236, F.v6054)]))).f_line, ((*(yR110 *)rt_nil_check(F.v6056))).f_rep, ((void * *)(v2227).p)[y_ix1(v2227, F.v6054)]);
}
F.v6064 = yr2465_Join(F.v6058, yr1021_T(y_str("->", 2)), ((*(yR110 *)rt_nil_check(F.v6056))).f_cname);
if ((((*(yR110 *)rt_nil_check(F.v6056))).f_cls == v873)) {
if ((!yr2086_IsVariable(((void * *)(v2236).p)[y_ix1(v2236, F.v6054)]))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(((void * *)(v2236).p)[y_ix1(v2236, F.v6054)]))).f_line, ((*(yR110 *)rt_nil_check(F.v6056))).f_name, y_str(": the actual of a VAR parameter must be a variable", 50));
}
yr1092_Emit(yr2465_Join(F.v6064, yr1021_T(y_str(" = &", 4)), yr2465_Join(((rt_int *)(v2218).p)[y_ix1(v2218, F.v6054)], yr1021_T(y_str(";", 1)), INT64_C(0))));
} else if (yr1744_Deep(((*(yR110 *)rt_nil_check(F.v6056))).f_rep)) {
F.v6060 = yr1146_Fresh(y_str("t", 1));
yr1092_Emit(yr2465_Join(yr1021_T(y_str("{ ", 2)), yr1750_CType(((*(yR110 *)rt_nil_check(F.v6056))).f_rep), yr2465_Join(yr1021_T(y_str(" ", 1)), F.v6060, yr2465_Join(yr1021_T(y_str(" = ", 3)), ((rt_int *)(v2218).p)[y_ix1(v2218, F.v6054)], yr1021_T(y_str(";", 1))))));
if ((((*(yR100 *)rt_nil_check(((*(yR110 *)rt_nil_check(F.v6056))).f_rep))).f_kind == v813)) {
yr1092_Emit(yr2465_Join(yr1021_T(y_str("y_copy(y_desc_vector(", 21)), yr1756_DescOf(((*(yR100 *)rt_nil_check(((*(yR110 *)rt_nil_check(F.v6056))).f_rep))).f_elem), yr2465_Join(yr1021_T(y_str("), &", 4)), F.v6064, yr2465_Join(yr1021_T(y_str(", &", 3)), F.v6060, yr1021_T(y_str("); }", 4))))));
} else {
yr1092_Emit(yr2465_Join(yr1021_T(y_str("y_copy(", 7)), yr1756_DescOf(((*(yR110 *)rt_nil_check(F.v6056))).f_rep), yr2465_Join(yr1021_T(y_str(", &", 3)), F.v6064, yr2465_Join(yr1021_T(y_str(", &", 3)), F.v6060, yr1021_T(y_str("); }", 4))))));
}
} else {
yr1092_Emit(yr2465_Join(F.v6064, yr1021_T(y_str(" = ", 3)), yr2465_Join(yr2068_Convert(((rt_int *)(v2218).p)[y_ix1(v2218, F.v6054)], ((*(yR110 *)rt_nil_check(F.v6056))).f_rep, ((void * *)(v2227).p)[y_ix1(v2227, F.v6054)]), yr1021_T(y_str(";", 1)), INT64_C(0))));
}
F.v6054 = rt_range(rt_add(F.v6054, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6056 = ((*(yR110 *)rt_nil_check(F.v6056))).f_next;
}
v2238 = F.v6050;
F.v6066 = yr1021_T(y_str("0", 1));
if ((!(((*(yR95 *)rt_nil_check(F.v6070))).f_e == ((void *)0)))) {
yr2119_Expr(((*(yR95 *)rt_nil_check(F.v6070))).f_e, v1683, &F.v6066, &F.v6072);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.v6070))).f_line, v1683, F.v6072);
}
F.v6068 = yr1021_T(y_str("0, 0", 4));
if ((!(((*(yR95 *)rt_nil_check(F.v6070))).f_d == ((void *)0)))) {
yr2119_Expr(((*(yR95 *)rt_nil_check(F.v6070))).f_d, v1683, &F.v6062, &F.v6072);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.v6070))).f_line, v1683, F.v6072);
F.v6068 = yr2465_Join(yr1021_T(y_str("1, ", 3)), F.v6062, INT64_C(0));
}
yr986_SB();
yr997_SA(y_str("y_create(&", 10));
yr1004_ST(yr1651_Path(rt_range(rt_sub(((*(yR115 *)rt_nil_check(F.p2632))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr2465_Join(((*(yR115 *)rt_nil_check(F.p2632))).f_cname, yr1021_T(y_str("_d", 2)), INT64_C(0))));
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6066);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6068);
yr997_SA(y_str(", ", 2));
yr1004_ST(((*(yR115 *)rt_nil_check(F.p2632))).f_cname);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6058);
yr997_SA(y_str("); }", 4));
F.v6060 = yr1016_SE();
yr1092_Emit(F.v6060);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2637_MonitorPath(void * a_p2638) {
struct yf2639 F;
memset((void *)&F, 0, sizeof F);
F.p2638 = a_p2638;
{ rt_int rv6128 = yr2465_Join(yr1021_T(y_str("&", 1)), yr1651_Path(((*(yR115 *)rt_nil_check(F.p2638))).f_level, ((*(yR115 *)rt_nil_check(F.p2638))).f_cname), INT64_C(0));
return rv6128; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2643_EnterMonitor(void * a_p2644) {
struct yf2645 F;
memset((void *)&F, 0, sizeof F);
F.p2644 = a_p2644;
if ((((*(yR115 *)rt_nil_check(F.p2644))).f_kind == v846)) {
((*(yR115 *)rt_nil_check(F.p2644))).f_monitor = v2557;
}
if ((((*(yR115 *)rt_nil_check(F.p2644))).f_monitor == ((void *)0))) {
return;
}
yr1092_Emit(yr2465_Join(yr1021_T(y_str("y_mon_enter(", 12)), yr2637_MonitorPath(((*(yR115 *)rt_nil_check(F.p2644))).f_monitor), yr1021_T(y_str(");", 2))));
F.v6132 = yr1146_Fresh(y_str("mf", 2));
v2385 = 1;
yr1092_Emit(yr2465_Join(yr1021_T(y_str("rt_frame ", 9)), F.v6132, yr1021_T(y_str(";", 1))));
yr986_SB();
yr997_SA(y_str("if (!RT_TRY(", 12));
yr1004_ST(F.v6132);
yr997_SA(y_str(")) { RT_POP(", 12));
yr1004_ST(F.v6132);
yr997_SA(y_str("); ", 3));
if ((((*(yR115 *)rt_nil_check(F.p2644))).f_kind == v855)) {
yr997_SA(y_str("y_mon_drop(", 11));
} else {
yr997_SA(y_str("y_mon_leave(", 12));
}
yr1004_ST(yr2637_MonitorPath(((*(yR115 *)rt_nil_check(F.p2644))).f_monitor));
yr997_SA(y_str("); rt_raise(rt_xcur); }", 23));
yr1092_Emit(yr1016_SE());
v2327 = rt_range(rt_add(v2327, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2325).p)[y_ix1(v2325, v2327)] = F.v6132;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2649_LeaveMonitor(void) {
struct yf2650 F;
memset((void *)&F, 0, sizeof F);
if ((v2383 == ((void *)0))) {
return;
}
if ((((*(yR115 *)rt_nil_check(v2383))).f_monitor == ((void *)0))) {
return;
}
if ((((*(yR115 *)rt_nil_check(v2383))).f_kind == v855)) {
yr1092_Emit(yr2465_Join(yr1021_T(y_str("y_mon_drop(", 11)), yr2637_MonitorPath(((*(yR115 *)rt_nil_check(v2383))).f_monitor), yr1021_T(y_str(");", 2))));
} else {
yr1092_Emit(yr2465_Join(yr1021_T(y_str("y_mon_leave(", 12)), yr2637_MonitorPath(((*(yR115 *)rt_nil_check(v2383))).f_monitor), yr1021_T(y_str(");", 2))));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2654_TerminateStatement(void * a_p2655) {
struct yf2656 F;
memset((void *)&F, 0, sizeof F);
F.p2655 = a_p2655;
if ((((v2383 == ((void *)0))) || ((!(((*(yR115 *)rt_nil_check(v2383))).f_kind == v855))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2655))).f_line, y_str("TERMINATE_PROCESS ends a process (IX.A.7)", 41));
}
yr2625_AwaitProcesses();
yr2649_LeaveMonitor();
yr2406_PopTo(v2330);
yr1098_EmitS(y_str("return;", 7));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2660_DeclareSignal(void * a_p2661, rt_int a_p2662) {
struct yf2663 F;
memset((void *)&F, 0, sizeof F);
F.p2661 = a_p2661;
F.p2662 = a_p2662;
if ((v2557 == ((void *)0))) {
yr1124_FailS(F.p2662, y_str("signal variables are declared in a monitor (X.E.4)", 50));
}
((*(yR115 *)rt_nil_check(F.p2661))).f_rep = yr1714_CopyRep(((*(yR115 *)rt_nil_check(F.p2661))).f_rep);
((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.p2661))).f_rep))).f_monitor = v2557;
yr1092_Emit(yr2465_Join(yr1021_T(y_str("y_sig_init(&", 12)), yr1671_SymPath(F.p2661), yr2465_Join(yr1021_T(y_str(", ", 2)), yr2637_MonitorPath(v2557), yr1021_T(y_str(");", 2)))));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2667_DeviceSignal(void * a_p2668, void * a_p2669) {
struct yf2670 F;
memset((void *)&F, 0, sizeof F);
F.p2668 = a_p2668;
F.p2669 = a_p2669;
yr2060_Manifest(F.p2669, &F.v6167, &F.v6169);
if ((!F.v6167)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2669))).f_line, y_str("an AT location is a manifest constant (XIV.VII)", 47));
}
yr986_SB();
yr997_SA(y_str("y_device(&", 10));
yr1004_ST(yr1671_SymPath(F.p2668));
yr997_SA(y_str(", ", 2));
yr1010_SI(F.v6169);
yr997_SA(y_str(");", 2));
F.v6171 = yr1016_SE();
yr1092_Emit(F.v6171);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2674_Arg(void * a_p2675, rt_int a_p2676) {
struct yf2677 F;
memset((void *)&F, 0, sizeof F);
F.p2675 = a_p2675;
F.p2676 = a_p2676;
F.v6180 = ((*(yR95 *)rt_nil_check(F.p2675))).f_a;
F.v6182 = INT64_C(1);
while ((((!(F.v6180 == ((void *)0)))) && ((F.v6182 < F.p2676)))) {
F.v6180 = ((*(yR95 *)rt_nil_check(F.v6180))).f_next;
F.v6182 = rt_range(rt_add(F.v6182, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v6180 == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2675))).f_line, ((*(yR95 *)rt_nil_check(F.p2675))).f_name, y_str(": too few actual parameters", 27));
}
{ void * rv6187 = F.v6180;
return rv6187; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2681_NArgs(void * a_p2682, rt_int a_p2683) {
struct yf2684 F;
memset((void *)&F, 0, sizeof F);
F.p2682 = a_p2682;
F.p2683 = a_p2683;
if ((!(yr1260_Count(((*(yR95 *)rt_nil_check(F.p2682))).f_a) == F.p2683))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2682))).f_line, ((*(yR95 *)rt_nil_check(F.p2682))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2688_Call1(yarr a_p2690, rt_int a_p2691) {
struct yf2692 F;
memset((void *)&F, 0, sizeof F);
F.p2690 = a_p2690;
F.p2691 = a_p2691;
yr986_SB();
yr997_SA(F.p2690);
yr997_SA(y_str("(", 1));
yr1004_ST(F.p2691);
yr997_SA(y_str(")", 1));
{ rt_int rv6197 = yr1016_SE();
return rv6197; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2696_Addr(rt_int a_p2697) {
struct yf2698 F;
memset((void *)&F, 0, sizeof F);
F.p2697 = a_p2697;
{ rt_int rv6202 = yr2465_Join(yr1021_T(y_str("&", 1)), F.p2697, INT64_C(0));
return rv6202; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2702_StdVar(void * a_p2703, rt_int a_p2704, rt_int * a_p2705, void * * a_p2706) {
struct yf2707 F;
memset((void *)&F, 0, sizeof F);
F.p2703 = a_p2703;
F.p2704 = a_p2704;
F.p2705_o = a_p2705;
F.p2706_o = a_p2706;
yr2092_LValue(F.p2703, &F.p2705, &F.p2706);
if ((((!(F.p2704 == v828))) && ((!(((*(yR100 *)rt_nil_check(F.p2706))).f_kind == F.p2704))))) {
yr986_SB();
yr997_SA(y_str("a ", 2));
if ((F.p2704 == v801)) {
yr997_SA(y_str("file", 4));
} else if ((F.p2704 == v807)) {
yr997_SA(y_str("signal", 6));
} else if ((F.p2704 == v810)) {
yr997_SA(y_str("SEMAPHORE", 9));
} else if ((F.p2704 == v798)) {
yr997_SA(y_str("pointer", 7));
} else {
yr997_SA(y_str("variable", 8));
}
yr997_SA(y_str(" is needed here", 15));
F.v6209 = yr1016_SE();
yr1117_Fail(((*(yR95 *)rt_nil_check(F.p2703))).f_line, F.v6209);
}
(*F.p2705_o) = F.p2705;
(*F.p2706_o) = F.p2706;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2711_NumArg(void * a_p2712, rt_int * a_p2713, void * * a_p2714) {
struct yf2715 F;
memset((void *)&F, 0, sizeof F);
F.p2712 = a_p2712;
F.p2713_o = a_p2713;
F.p2714_o = a_p2714;
yr2119_Expr(F.p2712, ((void *)0), &F.p2713, &F.p2714);
if ((!yr1726_IsNumeric(F.p2714))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2712))).f_line, y_str("a number is needed here", 23));
}
(*F.p2713_o) = F.p2713;
(*F.p2714_o) = F.p2714;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2719_IntArg(void * a_p2720) {
struct yf2721 F;
memset((void *)&F, 0, sizeof F);
F.p2720 = a_p2720;
yr2119_Expr(F.p2720, v1683, &F.v6225, &F.v6227);
if ((!(((*(yR100 *)rt_nil_check(F.v6227))).f_kind == v774))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2720))).f_line, y_str("an integer is needed here", 25));
}
{ rt_int rv6229 = F.v6225;
return rv6229; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2725_CodeInsert(void * a_p2726) {
struct yf2727 F;
memset((void *)&F, 0, sizeof F);
F.p2726 = a_p2726;
F.v6233 = yr2674_Arg(F.p2726, INT64_C(1));
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1)}; y_desc_array(&F.yd_6257, 1, lo, hi, &y_d_int); }
y_init(&F.yd_6257, &F.v6259);
if ((!(((*(yR95 *)rt_nil_check(F.v6233))).f_kind == v741))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2726))).f_line, y_str("a code insert takes a string literal (XIV.XI.5)", 47));
}
F.v6236 = ((*(yR95 *)rt_nil_check(F.v6233))).f_text;
F.v6246 = ((rt_int *)(v890).p)[y_ix1(v890, F.v6236)];
yr986_SB();
F.v6242 = INT64_C(1);
while ((F.v6242 <= F.v6246)) {
F.v6248 = yr1063_TChar(F.v6236, F.v6242);
if ((F.v6248 == 39)) {
F.v6244 = rt_range(rt_add(F.v6242, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1063_TChar(F.v6236, F.v6244) == 39))) {
F.v6244 = rt_range(rt_add(F.v6244, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v6238 = yr1028_Intern(rt_range(rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.v6236)], F.v6242), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v6244, F.v6242)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, yr2043_CharValue(v1687, F.v6238, ((*(yR95 *)rt_nil_check(F.p2726))).f_line))]);
F.v6242 = rt_range(rt_add(F.v6244, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v6248 == 36)) {
F.v6244 = rt_range(rt_add(F.v6242, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((F.v6244 <= F.v6246)) && ((yr968_IsLetter(yr1063_TChar(F.v6236, F.v6244)) || yr974_IsDigit(yr1063_TChar(F.v6236, F.v6244)))))) {
F.v6244 = rt_range(rt_add(F.v6244, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v6238 = yr1028_Intern(rt_range(rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.v6236)], F.v6242), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v6244, F.v6242)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v6250 = yr1612_Find(F.v6238);
if ((F.v6250 == ((void *)0))) {
v909 = INT64_C(0);
v921 = INT64_C(0);
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2726))).f_line, F.v6238, y_str(" in a code insert is not declared here", 38));
}
F.v6250 = yr1677_Real(F.v6250);
if ((((!(((*(yR115 *)rt_nil_check(F.v6250))).f_kind == v831))) && ((!(((*(yR115 *)rt_nil_check(F.v6250))).f_kind == v834))))) {
v909 = INT64_C(0);
v921 = INT64_C(0);
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2726))).f_line, F.v6238, y_str(" in a code insert is not a variable or constant", 47));
}
yr1004_ST(yr2100_Paren(yr1671_SymPath(F.v6250)));
F.v6242 = F.v6244;
} else {
yr991_SC(F.v6248);
F.v6242 = rt_range(rt_add(F.v6242, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
F.v6240 = yr1016_SE();
yr1092_Emit(F.v6240);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2731_StdCall(rt_int a_p2732, void * a_p2733, rt_int a_p2734, rt_int * a_p2735, void * * a_p2736) {
struct yf2737 F;
memset((void *)&F, 0, sizeof F);
F.p2732 = a_p2732;
F.p2733 = a_p2733;
F.p2734 = a_p2734;
F.p2735_o = a_p2735;
F.p2736_o = a_p2736;
F.p2736 = v1689;
F.p2735 = yr1021_T(y_str("((void)0)", 9));
F.v6326 = ((((((((((((((((F.p2732 == v1934)) || ((F.p2732 == v1937))) || ((F.p2732 == v1940))) || ((F.p2732 == v1943))) || ((F.p2732 == v1946))) || ((F.p2732 == v1952))) || ((F.p2732 == v1961))) || ((F.p2732 == v1967))) || ((F.p2732 == v1970))) || ((F.p2732 == v1994))) || ((F.p2732 == v1997))) || ((F.p2732 == v2006))) || ((F.p2732 == v2009))) || ((F.p2732 == v2012))) || ((F.p2732 == v2015)));
if ((F.p2734 && (!F.v6326))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2733))).f_line, ((*(yR95 *)rt_nil_check(F.p2733))).f_name, y_str(" returns a value: it is called in an expression", 47));
}
if (((!F.p2734) && F.v6326)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2733))).f_line, ((*(yR95 *)rt_nil_check(F.p2733))).f_name, y_str(" returns no value", 17));
}
if ((((F.p2732 == v1916)) || ((F.p2732 == v1919)))) {
yr2681_NArgs(F.p2733, INT64_C(2));
yr2119_Expr(yr2674_Arg(F.p2733, INT64_C(1)), ((void *)0), &F.v6298, &F.v6308);
if ((!yr1732_IsArrayLike(F.v6308))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2733))).f_line, ((*(yR95 *)rt_nil_check(F.p2733))).f_name, y_str(" of something that is not an array", 34));
}
F.v6300 = yr2719_IntArg(yr2674_Arg(F.p2733, INT64_C(2)));
yr2060_Manifest(yr2674_Arg(F.p2733, INT64_C(2)), &F.v6322, &F.v6320);
F.p2736 = yr2163_Unbounded(v1683);
if ((F.v6322 && ((((*(yR100 *)rt_nil_check(F.v6308))).f_kind == v792)))) {
if ((((F.v6320 < INT64_C(1))) || ((F.v6320 > ((*(yR100 *)rt_nil_check(F.v6308))).f_nidx)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2733))).f_line, y_str("no such dimension", 17));
}
F.v6314 = ((*(yR100 *)rt_nil_check(F.v6308))).f_idx;
F.lo6339 = INT64_C(2);
F.hi6340 = F.v6320;
{ rt_int hi6344 = F.hi6340;
for (rt_int i6343 = F.lo6339; i6343 <= hi6344; i6343++) { F.c_6342 = i6343;
F.v6314 = ((*(yR100 *)rt_nil_check(F.v6314))).f_link;
if (i6343 == hi6344) break;
}}
F.p2736 = F.v6314;
}
if ((F.p2732 == v1916)) {
F.p2735 = yr2169_Call2(y_str("y_low", 5), F.v6298, F.v6300);
} else {
F.p2735 = yr2169_Call2(y_str("y_high", 6), F.v6298, F.v6300);
}
(*F.p2735_o) = F.p2735;
(*F.p2736_o) = F.p2736;
return;
}
if ((((((F.p2732 == v1922)) || ((F.p2732 == v1925))) || ((F.p2732 == v1928))) || ((F.p2732 == v1931)))) {
yr2681_NArgs(F.p2733, INT64_C(1));
yr2119_Expr(yr2674_Arg(F.p2733, INT64_C(1)), ((void *)0), &F.v6298, &F.v6308);
if ((!yr1720_IsDiscrete(F.v6308))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2733))).f_line, ((*(yR95 *)rt_nil_check(F.p2733))).f_name, y_str(" of something that is not integer or scalar", 43));
}
if ((!(((*(yR100 *)rt_nil_check(F.v6308))).f_elem == ((void *)0)))) {
F.v6308 = ((*(yR100 *)rt_nil_check(F.v6308))).f_elem;
}
if ((((((F.p2732 == v1928)) || ((F.p2732 == v1931)))) && ((((*(yR100 *)rt_nil_check(F.v6308))).f_kind == v774)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2733))).f_line, y_str("FIRST and LAST apply to ordered enumerations and alphabets (XI)", 63));
}
if ((((((*(yR100 *)rt_nil_check(F.v6308))).f_kind == v786)) && (!((*(yR100 *)rt_nil_check(F.v6308))).f_ordered))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2733))).f_line, ((*(yR95 *)rt_nil_check(F.p2733))).f_name, y_str(" applies to ordered enumerations (XI)", 37));
}
F.p2736 = yr2163_Unbounded(F.v6308);
if ((F.p2732 == v1928)) {
F.p2735 = yr1812_LoText(F.v6308);
} else if ((F.p2732 == v1931)) {
F.p2735 = yr1818_HiText(F.v6308);
} else {
yr986_SB();
if ((!(((*(yR100 *)rt_nil_check(F.v6308))).f_lo == INT64_C(0)))) {
yr997_SA(y_str("rt_range(", 9));
}
if ((F.p2732 == v1922)) {
yr997_SA(y_str("rt_add(", 7));
} else {
yr997_SA(y_str("rt_sub(", 7));
}
yr1004_ST(F.v6298);
yr997_SA(y_str(", 1)", 4));
if ((!(((*(yR100 *)rt_nil_check(F.v6308))).f_lo == INT64_C(0)))) {
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1812_LoText(F.v6308));
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1818_HiText(F.v6308));
yr997_SA(y_str(")", 1));
}
F.p2735 = yr1016_SE();
}
if ((!(((*(yR100 *)rt_nil_check(F.v6308))).f_kind == v774))) {
F.p2736 = F.v6308;
}
(*F.p2735_o) = F.p2735;
(*F.p2736_o) = F.p2736;
return;
}
if ((F.p2732 == v1934)) {
yr2681_NArgs(F.p2733, INT64_C(1));
yr2702_StdVar(yr2674_Arg(F.p2733, INT64_C(1)), v798, &F.v6298, &F.v6308);
if ((((*(yR100 *)rt_nil_check(F.v6308))).f_elem == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2733))).f_line, ((*(yR100 *)rt_nil_check(F.v6308))).f_forward, y_str(" is not declared", 16));
}
F.v6314 = ((*(yR100 *)rt_nil_check(F.v6308))).f_elem;
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(F.v6298);
yr997_SA(y_str(" = rt_alloc(sizeof(", 19));
yr1004_ST(yr1750_CType(F.v6314));
yr997_SA(y_str("));", 3));
if (yr1744_Deep(F.v6314)) {
yr997_SA(y_str(" y_init(", 8));
yr1004_ST(yr1756_DescOf(F.v6314));
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6298);
yr997_SA(y_str(");", 2));
}
yr997_SA(y_str(" })", 3));
F.p2735 = yr1016_SE();
(*F.p2735_o) = F.p2735;
(*F.p2736_o) = F.p2736;
return;
}
if ((F.p2732 == v2012)) {
yr2681_NArgs(F.p2733, INT64_C(1));
yr2702_StdVar(yr2674_Arg(F.p2733, INT64_C(1)), v798, &F.v6298, &F.v6308);
F.p2735 = yr2465_Join(yr1021_T(y_str("({ free(", 8)), F.v6298, yr2465_Join(yr1021_T(y_str("); ", 3)), F.v6298, yr1021_T(y_str(" = 0; })", 8))));
(*F.p2735_o) = F.p2735;
(*F.p2736_o) = F.p2736;
return;
}
if ((F.p2732 == v1937)) {
yr2681_NArgs(F.p2733, INT64_C(3));
yr2702_StdVar(yr2674_Arg(F.p2733, INT64_C(1)), v801, &F.v6298, &F.v6308);
yr2119_Expr(yr2674_Arg(F.p2733, INT64_C(2)), v1687, &F.v6300, &F.v6310);
if ((!yr1738_IsString(F.v6310))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2733))).f_line, y_str("OPEN takes the name of the file as a string (XII.A)", 51));
}
yr2119_Expr(yr2674_Arg(F.p2733, INT64_C(3)), v2741, &F.v6302, &F.v6312);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2733))).f_line, v2741, F.v6312);
yr986_SB();
yr997_SA(y_str("y_open(&", 8));
yr1004_ST(F.v6298);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6300);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6302);
yr997_SA(y_str(")", 1));
F.p2735 = yr1016_SE();
(*F.p2735_o) = F.p2735;
(*F.p2736_o) = F.p2736;
return;
}
if ((((F.p2732 == v1940)) || ((F.p2732 == v1949)))) {
yr2681_NArgs(F.p2733, INT64_C(1));
yr2702_StdVar(yr2674_Arg(F.p2733, INT64_C(1)), v801, &F.v6298, &F.v6308);
if ((F.p2732 == v1940)) {
F.p2735 = yr2688_Call1(y_str("y_close", 7), yr2696_Addr(F.v6298));
} else {
F.p2736 = v1685;
F.p2735 = yr2688_Call1(y_str("y_check_eof", 11), yr2696_Addr(F.v6298));
}
(*F.p2735_o) = F.p2735;
(*F.p2736_o) = F.p2736;
return;
}
if ((F.p2732 == v1943)) {
yr2681_NArgs(F.p2733, INT64_C(2));
yr2702_StdVar(yr2674_Arg(F.p2733, INT64_C(1)), v801, &F.v6298, &F.v6308);
yr2702_StdVar(yr2674_Arg(F.p2733, INT64_C(2)), v828, &F.v6300, &F.v6310);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2733))).f_line, ((*(yR100 *)rt_nil_check(F.v6308))).f_elem, F.v6310);
if ((yr1744_Deep(F.v6310) || ((((*(yR100 *)rt_nil_check(F.v6310))).f_kind == v798)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2733))).f_line, y_str("files of this implementation hold no arrays or pointers", 55));
}
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(yr1750_CType(F.v6310));
yr997_SA(y_str(" g; y_get(&", 11));
yr1004_ST(F.v6298);
yr997_SA(y_str(", &g, sizeof g); ", 17));
yr1004_ST(F.v6300);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2068_Convert(yr1021_T(y_str("g", 1)), F.v6310, ((*(yR100 *)rt_nil_check(F.v6308))).f_elem));
yr997_SA(y_str("; })", 4));
F.p2735 = yr1016_SE();
(*F.p2735_o) = F.p2735;
(*F.p2736_o) = F.p2736;
return;
}
if ((F.p2732 == v1946)) {
yr2681_NArgs(F.p2733, INT64_C(2));
yr2702_StdVar(yr2674_Arg(F.p2733, INT64_C(1)), v801, &F.v6298, &F.v6308);
yr2119_Expr(yr2674_Arg(F.p2733, INT64_C(2)), ((*(yR100 *)rt_nil_check(F.v6308))).f_elem, &F.v6300, &F.v6310);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2733))).f_line, ((*(yR100 *)rt_nil_check(F.v6308))).f_elem, F.v6310);
if ((yr1744_Deep(F.v6310) || ((((*(yR100 *)rt_nil_check(F.v6310))).f_kind == v798)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2733))).f_line, y_str("files of this implementation hold no arrays or pointers", 55));
}
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(yr1750_CType(((*(yR100 *)rt_nil_check(F.v6308))).f_elem));
yr997_SA(y_str(" pv = ", 6));
yr1004_ST(yr2068_Convert(F.v6300, ((*(yR100 *)rt_nil_check(F.v6308))).f_elem, F.v6310));
yr997_SA(y_str("; y_put(&", 9));
yr1004_ST(F.v6298);
yr997_SA(y_str(", &pv, sizeof pv); })", 21));
F.p2735 = yr1016_SE();
(*F.p2735_o) = F.p2735;
(*F.p2736_o) = F.p2736;
return;
}
if ((F.p2732 == v1952)) {
F.v6316 = yr1260_Count(((*(yR95 *)rt_nil_check(F.p2733))).f_a);
if ((((F.v6316 < INT64_C(5))) || ((!((rt_mod((rt_sub(F.v6316, INT64_C(2))), INT64_C(3))) == INT64_C(0)))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2733))).f_line, y_str("MOVE takes an object, an index and triples", 42));
}
yr2702_StdVar(yr2674_Arg(F.p2733, INT64_C(1)), v828, &F.v6298, &F.v6308);
if (((!((((((*(yR100 *)rt_nil_check(F.v6308))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.v6308))).f_kind == v813))))) || ((!(((*(yR100 *)rt_nil_check(F.v6308))).f_nidx == INT64_C(1)))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2733))).f_line, y_str("MOVE works on one-dimensional arrays", 36));
}
F.v6300 = yr2719_IntArg(yr2674_Arg(F.p2733, INT64_C(2)));
F.v6306 = yr1146_Fresh(y_str("at", 2));
yr986_SB();
yr997_SA(y_str("({ rt_int ", 10));
yr1004_ST(F.v6306);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.v6300);
yr997_SA(y_str(";", 1));
F.p2735 = yr1016_SE();
F.v6318 = INT64_C(3);
while ((F.v6318 < F.v6316)) {
yr2119_Expr(yr2674_Arg(F.p2733, F.v6318), ((*(yR100 *)rt_nil_check(F.v6308))).f_elem, &F.v6302, &F.v6312);
if (((!yr1732_IsArrayLike(F.v6312)) || (!yr1768_SameType(((*(yR100 *)rt_nil_check(F.v6308))).f_elem, ((*(yR100 *)rt_nil_check(F.v6312))).f_elem)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2733))).f_line, y_str("MOVE: the components differ in type", 35));
}
F.v6304 = yr2719_IntArg(yr2674_Arg(F.p2733, rt_range(rt_add(F.v6318, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v6300 = yr2719_IntArg(yr2674_Arg(F.p2733, rt_range(rt_add(F.v6318, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr986_SB();
yr1004_ST(F.p2735);
yr997_SA(y_str(" { rt_int mi = ", 15));
yr1004_ST(F.v6304);
yr997_SA(y_str(", mj = ", 7));
yr1004_ST(F.v6300);
yr997_SA(y_str("; y_move(&", 10));
yr1004_ST(F.v6298);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6306);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6302);
yr997_SA(y_str(", mi, mj, ", 10));
yr1004_ST(yr1756_DescOf(((*(yR100 *)rt_nil_check(F.v6308))).f_elem));
yr997_SA(y_str("); if (mj >= mi) ", 17));
yr1004_ST(F.v6306);
yr997_SA(y_str(" += mj - mi + 1; }", 18));
F.p2735 = yr1016_SE();
F.v6318 = rt_range(rt_add(F.v6318, INT64_C(3)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.p2735 = yr2465_Join(F.p2735, yr1021_T(y_str(" })", 3)), INT64_C(0));
(*F.p2735_o) = F.p2735;
(*F.p2736_o) = F.p2736;
return;
}
if ((((F.p2732 == v1955)) || ((F.p2732 == v1958)))) {
yr2681_NArgs(F.p2733, INT64_C(2));
F.v6298 = yr2435_Cond(yr2674_Arg(F.p2733, INT64_C(1)));
F.v6300 = yr2435_Cond(yr2674_Arg(F.p2733, INT64_C(2)));
F.p2736 = v1685;
if ((F.p2732 == v1955)) {
F.p2735 = yr2178_Infix(yr2100_Paren(yr2178_Infix(F.v6298, y_str("!=", 2), yr1021_T(y_str("0", 1)))), y_str("&", 1), yr2100_Paren(yr2178_Infix(F.v6300, y_str("!=", 2), yr1021_T(y_str("0", 1)))));
} else {
F.p2735 = yr2178_Infix(yr2100_Paren(yr2178_Infix(F.v6298, y_str("!=", 2), yr1021_T(y_str("0", 1)))), y_str("|", 1), yr2100_Paren(yr2178_Infix(F.v6300, y_str("!=", 2), yr1021_T(y_str("0", 1)))));
}
(*F.p2735_o) = F.p2735;
(*F.p2736_o) = F.p2736;
return;
}
if ((F.p2732 == v1961)) {
yr2681_NArgs(F.p2733, INT64_C(1));
F.p2735 = yr2688_Call1(y_str("rt_delay", 8), yr2719_IntArg(yr2674_Arg(F.p2733, INT64_C(1))));
(*F.p2735_o) = F.p2735;
(*F.p2736_o) = F.p2736;
return;
}
if ((F.p2732 == v1964)) {
yr2681_NArgs(F.p2733, INT64_C(0));
F.p2736 = yr2163_Unbounded(v1683);
F.p2735 = yr1021_T(y_str("rt_time()", 9));
(*F.p2735_o) = F.p2735;
(*F.p2736_o) = F.p2736;
return;
}
if (((((F.p2732 == v1967)) || ((F.p2732 == v1970))) || ((F.p2732 == v1973)))) {
yr2702_StdVar(yr2674_Arg(F.p2733, INT64_C(1)), v807, &F.v6298, &F.v6308);
if ((F.p2732 == v1967)) {
if ((yr1260_Count(((*(yR95 *)rt_nil_check(F.p2733))).f_a) == INT64_C(1))) {
F.v6300 = yr1021_T(y_str("1", 1));
} else {
yr2681_NArgs(F.p2733, INT64_C(2));
F.v6300 = yr2719_IntArg(yr2674_Arg(F.p2733, INT64_C(2)));
}
F.p2735 = yr2169_Call2(y_str("y_wait", 6), yr2696_Addr(F.v6298), F.v6300);
} else {
yr2681_NArgs(F.p2733, INT64_C(1));
if ((F.p2732 == v1970)) {
F.p2735 = yr2688_Call1(y_str("y_send", 6), yr2696_Addr(F.v6298));
} else {
F.p2736 = v1685;
F.p2735 = yr2688_Call1(y_str("y_awaited", 9), yr2696_Addr(F.v6298));
}
}
(*F.p2735_o) = F.p2735;
(*F.p2736_o) = F.p2736;
return;
}
if (((((F.p2732 == v1976)) || ((F.p2732 == v1979))) || ((F.p2732 == v1982)))) {
yr2681_NArgs(F.p2733, INT64_C(1));
yr2711_NumArg(yr2674_Arg(F.p2733, INT64_C(1)), &F.v6298, &F.v6308);
F.p2736 = yr2163_Unbounded(v1683);
if ((((*(yR100 *)rt_nil_check(F.v6308))).f_kind == v774)) {
F.p2735 = F.v6298;
} else if ((F.p2732 == v1976)) {
F.p2735 = yr2688_Call1(y_str("y_floor", 7), F.v6298);
} else if ((F.p2732 == v1979)) {
F.p2735 = yr2688_Call1(y_str("y_ceiling", 9), F.v6298);
} else {
F.p2735 = yr2688_Call1(y_str("y_near_integer", 14), F.v6298);
}
(*F.p2735_o) = F.p2735;
(*F.p2736_o) = F.p2736;
return;
}
if ((F.p2732 == v1988)) {
yr2681_NArgs(F.p2733, INT64_C(1));
yr2711_NumArg(yr2674_Arg(F.p2733, INT64_C(1)), &F.v6298, &F.v6308);
F.p2736 = v1695;
F.p2735 = yr2465_Join(yr1021_T(y_str("((double)(", 10)), F.v6298, yr1021_T(y_str("))", 2)));
(*F.p2735_o) = F.p2735;
(*F.p2736_o) = F.p2736;
return;
}
if ((F.p2732 == v1985)) {
yr2681_NArgs(F.p2733, INT64_C(2));
yr2711_NumArg(yr2674_Arg(F.p2733, INT64_C(1)), &F.v6298, &F.v6308);
yr2711_NumArg(yr2674_Arg(F.p2733, INT64_C(2)), &F.v6300, &F.v6310);
F.p2736 = v1697;
F.p2735 = yr2169_Call2(y_str("y_near_fixed", 12), yr2465_Join(yr1021_T(y_str("(double)(", 9)), F.v6298, yr1021_T(y_str(")", 1))), F.v6300);
(*F.p2735_o) = F.p2735;
(*F.p2736_o) = F.p2736;
return;
}
if ((F.p2732 == v1991)) {
yr2681_NArgs(F.p2733, INT64_C(3));
yr2711_NumArg(yr2674_Arg(F.p2733, INT64_C(1)), &F.v6298, &F.v6308);
yr2711_NumArg(yr2674_Arg(F.p2733, INT64_C(2)), &F.v6300, &F.v6310);
yr2711_NumArg(yr2674_Arg(F.p2733, INT64_C(3)), &F.v6302, &F.v6312);
F.p2736 = v1697;
F.p2735 = yr2465_Join(yr1021_T(y_str("y_fixed_div(", 12)), F.v6298, yr2465_Join(yr1021_T(y_str(", ", 2)), F.v6300, yr2465_Join(yr1021_T(y_str(", ", 2)), F.v6302, yr1021_T(y_str(")", 1)))));
(*F.p2735_o) = F.p2735;
(*F.p2736_o) = F.p2736;
return;
}
if (((((F.p2732 == v1994)) || ((F.p2732 == v1997))) || ((F.p2732 == v2000)))) {
yr2681_NArgs(F.p2733, INT64_C(1));
yr2702_StdVar(yr2674_Arg(F.p2733, INT64_C(1)), v810, &F.v6298, &F.v6308);
if ((F.p2732 == v1994)) {
F.p2735 = yr2688_Call1(y_str("rt_region_enter", 15), yr2696_Addr(F.v6298));
} else if ((F.p2732 == v1997)) {
F.p2735 = yr2688_Call1(y_str("rt_region_leave", 15), yr2696_Addr(F.v6298));
} else {
F.p2736 = v1685;
F.p2735 = yr2688_Call1(y_str("y_cond_claim", 12), yr2696_Addr(F.v6298));
}
(*F.p2735_o) = F.p2735;
(*F.p2736_o) = F.p2736;
return;
}
if ((F.p2732 == v2003)) {
yr2681_NArgs(F.p2733, INT64_C(0));
F.p2736 = yr2163_Unbounded(v1683);
F.p2735 = yr1021_T(y_str("y_self()", 8));
(*F.p2735_o) = F.p2735;
(*F.p2736_o) = F.p2736;
return;
}
if ((F.p2732 == v2006)) {
yr2681_NArgs(F.p2733, INT64_C(2));
F.p2735 = yr2169_Call2(y_str("y_change_priority", 17), yr2719_IntArg(yr2674_Arg(F.p2733, INT64_C(1))), yr2719_IntArg(yr2674_Arg(F.p2733, INT64_C(2))));
(*F.p2735_o) = F.p2735;
(*F.p2736_o) = F.p2736;
return;
}
if ((F.p2732 == v2009)) {
yr2681_NArgs(F.p2733, INT64_C(1));
F.p2735 = yr2688_Call1(y_str("y_raise_termination", 19), yr2719_IntArg(yr2674_Arg(F.p2733, INT64_C(1))));
(*F.p2735_o) = F.p2735;
(*F.p2736_o) = F.p2736;
return;
}
if ((F.p2732 == v2015)) {
yr2681_NArgs(F.p2733, INT64_C(1));
yr2725_CodeInsert(F.p2733);
(*F.p2735_o) = F.p2735;
(*F.p2736_o) = F.p2736;
return;
}
if ((((F.p2732 == v2018)) || ((F.p2732 == v2021)))) {
yr2681_NArgs(F.p2733, INT64_C(1));
yr2119_Expr(yr2674_Arg(F.p2733, INT64_C(1)), ((void *)0), &F.v6298, &F.v6308);
F.p2736 = yr2163_Unbounded(v1683);
if ((F.p2732 == v2018)) {
F.p2735 = yr2465_Join(yr1021_T(y_str("((rt_int)(intptr_t)&(", 21)), F.v6298, yr1021_T(y_str("))", 2)));
} else {
F.p2735 = yr2465_Join(yr1021_T(y_str("((rt_int)sizeof(", 16)), F.v6298, yr1021_T(y_str("))", 2)));
}
(*F.p2735_o) = F.p2735;
(*F.p2736_o) = F.p2736;
return;
}
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2733))).f_line, ((*(yR95 *)rt_nil_check(F.p2733))).f_name, y_str(" is not translated", 18));
(*F.p2735_o) = F.p2735;
(*F.p2736_o) = F.p2736;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2745_StdRep(yarr a_p2747, void * a_p2748) {
struct yf2749 F;
memset((void *)&F, 0, sizeof F);
F.p2747 = a_p2747;
F.p2748 = a_p2748;
F.v6516 = yr1588_NewSym(v840, yr1041_N(F.p2747));
((*(yR115 *)rt_nil_check(F.v6516))).f_rep = F.p2748;
yr1644_Define(F.v6516, INT64_C(0));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2753_StdOp(yarr a_p2755, rt_int a_p2756) {
struct yf2757 F;
memset((void *)&F, 0, sizeof F);
F.p2755 = a_p2755;
F.p2756 = a_p2756;
F.v6522 = yr1588_NewSym(v861, yr1041_N(F.p2755));
((*(yR115 *)rt_nil_check(F.v6522))).f_mval = F.p2756;
yr1644_Define(F.v6522, INT64_C(0));
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2761_LitList(yarr a_p2763, yarr a_p2764, yarr a_p2765, rt_int a_p2766) {
struct yf2767 F;
memset((void *)&F, 0, sizeof F);
F.p2763 = a_p2763;
F.p2764 = a_p2764;
F.p2765 = a_p2765;
F.p2766 = a_p2766;
F.v6530 = ((void *)0);
F.v6532 = ((void *)0);
F.v6534 = ((void *)0);
F.v6534 = yr1245_NewNode(v639, INT64_C(0));
((*(yR95 *)rt_nil_check(F.v6534))).f_name = yr1041_N(F.p2763);
yr1252_Link(&F.v6530, &F.v6532, F.v6534);
F.v6534 = yr1245_NewNode(v639, INT64_C(0));
((*(yR95 *)rt_nil_check(F.v6534))).f_name = yr1041_N(F.p2764);
yr1252_Link(&F.v6530, &F.v6532, F.v6534);
if (F.p2766) {
F.v6534 = yr1245_NewNode(v639, INT64_C(0));
((*(yR95 *)rt_nil_check(F.v6534))).f_name = yr1041_N(F.p2765);
yr1252_Link(&F.v6530, &F.v6532, F.v6534);
}
{ void * rv6538 = F.v6530;
return rv6538; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2771_Abstract(rt_int a_p2772, yarr a_p2774) {
struct yf2775 F;
memset((void *)&F, 0, sizeof F);
F.p2772 = a_p2772;
F.p2774 = a_p2774;
F.v6543 = yr1707_NewRep(F.p2772, yr1041_N(F.p2774));
((*(yR100 *)rt_nil_check(F.v6543))).f_abstract = 1;
{ void * rv6545 = F.v6543;
return rv6545; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2779_Predefine(void) {
struct yf2780 F;
memset((void *)&F, 0, sizeof F);
yr1595_OpenScope(0);
((void * *)(v2566).p)[y_ix1(v2566, v1570)] = ((void *)0);
v1683 = yr2771_Abstract(v774, y_str("INTEGER", 7));
v1697 = yr2771_Abstract(v777, y_str("FIXED", 5));
v1695 = yr2771_Abstract(v780, y_str("FLOATING", 8));
v1699 = yr1707_NewRep(v807, yr1041_N(y_str("SIGNAL", 6)));
v1701 = yr1707_NewRep(v810, yr1041_N(y_str("SEMAPHORE", 9)));
v1689 = yr1707_NewRep(v822, yr1041_N(y_str("no value", 8)));
v1703 = yr1707_NewRep(v828, yr1041_N(y_str("any", 3)));
v1685 = yr1707_NewRep(v783, yr1041_N(y_str("BOOLEAN", 7)));
((*(yR100 *)rt_nil_check(v1685))).f_lits = yr2761_LitList(y_str("FALSE", 5), y_str("TRUE", 4), y_str("", 0), 0);
((*(yR100 *)rt_nil_check(v1685))).f_nlits = INT64_C(2);
yr1837_SetRange(v1685, INT64_C(0), INT64_C(1));
yr1831_DefineLits(v1685);
v1687 = yr1707_NewRep(v789, yr1041_N(y_str("ASCII", 5)));
((*(yR100 *)rt_nil_check(v1687))).f_ordered = 1;
((*(yR100 *)rt_nil_check(v1687))).f_nlits = INT64_C(128);
yr1837_SetRange(v1687, INT64_C(0), INT64_C(127));
v2741 = yr1707_NewRep(v786, yr1041_N(y_str("OPEN_MODE", 9)));
((*(yR100 *)rt_nil_check(v2741))).f_lits = yr2761_LitList(y_str("READ", 4), y_str("WRITE", 5), y_str("APPEND", 6), 1);
((*(yR100 *)rt_nil_check(v2741))).f_nlits = INT64_C(3);
yr1837_SetRange(v2741, INT64_C(0), INT64_C(2));
yr1831_DefineLits(v2741);
yr2745_StdRep(y_str("INTEGER", 7), v1683);
yr2745_StdRep(y_str("FIXED", 5), v1697);
yr2745_StdRep(y_str("FLOATING", 8), v1695);
yr2745_StdRep(y_str("BOOLEAN", 7), v1685);
yr2745_StdRep(y_str("SIGNAL", 6), v1699);
yr2745_StdRep(y_str("SEMAPHORE", 9), v1701);
yr2745_StdRep(y_str("ASCII", 5), v1687);
yr2745_StdRep(y_str("STANDARD_ALPHABET", 17), v1687);
yr2745_StdRep(y_str("OPEN_MODE", 9), v2741);
yr2753_StdOp(y_str("LOW", 3), v1916);
yr2753_StdOp(y_str("HIGH", 4), v1919);
yr2753_StdOp(y_str("SUCC", 4), v1922);
yr2753_StdOp(y_str("PRED", 4), v1925);
yr2753_StdOp(y_str("FIRST", 5), v1928);
yr2753_StdOp(y_str("LAST", 4), v1931);
yr2753_StdOp(y_str("NEW", 3), v1934);
yr2753_StdOp(y_str("OPEN", 4), v1937);
yr2753_StdOp(y_str("CLOSE", 5), v1940);
yr2753_StdOp(y_str("GET", 3), v1943);
yr2753_StdOp(y_str("PUT", 3), v1946);
yr2753_StdOp(y_str("CHECK_EOF", 9), v1949);
yr2753_StdOp(y_str("MOVE", 4), v1952);
yr2753_StdOp(y_str("AND_LONG", 8), v1955);
yr2753_StdOp(y_str("OR_LONG", 7), v1958);
yr2753_StdOp(y_str("DELAY", 5), v1961);
yr2753_StdOp(y_str("CLOCK_TIME", 10), v1964);
yr2753_StdOp(y_str("WAIT", 4), v1967);
yr2753_StdOp(y_str("SEND", 4), v1970);
yr2753_StdOp(y_str("AWAITED", 7), v1973);
yr2753_StdOp(y_str("FLOOR", 5), v1976);
yr2753_StdOp(y_str("CEILING", 7), v1979);
yr2753_StdOp(y_str("NEAR_INTEGER", 12), v1982);
yr2753_StdOp(y_str("NEAR_FIXED", 10), v1985);
yr2753_StdOp(y_str("NEAR_FLOATING", 13), v1988);
yr2753_StdOp(y_str("FIXED_DIV", 9), v1991);
yr2753_StdOp(y_str("CLAIM", 5), v1994);
yr2753_StdOp(y_str("RELEASE", 7), v1997);
yr2753_StdOp(y_str("CONDITIONAL_CLAIM", 17), v2000);
yr2753_StdOp(y_str("PROCESS_IDENTITY", 16), v2003);
yr2753_StdOp(y_str("CHANGE_PRIORITY", 15), v2006);
yr2753_StdOp(y_str("RAISE_PROCESS_TERMINATION", 25), v2009);
yr2753_StdOp(y_str("FREE_POINTER", 12), v2012);
yr2753_StdOp(y_str("C_CODE_INSERT", 13), v2015);
yr2753_StdOp(y_str("ADDR", 4), v2018);
yr2753_StdOp(y_str("EXTENT", 6), v2021);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2784_Translate(void) {
struct yf2785 F;
memset((void *)&F, 0, sizeof F);
F.v6623 = v2743;
yr1595_OpenScope(0);
((void * *)(v2566).p)[y_ix1(v2566, v1570)] = ((void *)0);
v1576 = INT64_C(0);
while ((!(F.v6623 == ((void *)0)))) {
yr2601_CompileModule(F.v6623);
F.v6623 = ((*(yR95 *)rt_nil_check(F.v6623))).f_next;
}
yr2625_AwaitProcesses();
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2789_WriteProgram(void) {
struct yf2790 F;
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
v1916 = INT64_C(1);
v1919 = INT64_C(2);
v1922 = INT64_C(3);
v1925 = INT64_C(4);
v1928 = INT64_C(5);
v1931 = INT64_C(6);
v1934 = INT64_C(7);
v1937 = INT64_C(8);
v1940 = INT64_C(9);
v1943 = INT64_C(10);
v1946 = INT64_C(11);
v1949 = INT64_C(12);
v1952 = INT64_C(13);
v1955 = INT64_C(14);
v1958 = INT64_C(15);
v1961 = INT64_C(16);
v1964 = INT64_C(17);
v1967 = INT64_C(18);
v1970 = INT64_C(19);
v1973 = INT64_C(20);
v1976 = INT64_C(21);
v1979 = INT64_C(22);
v1982 = INT64_C(23);
v1985 = INT64_C(24);
v1988 = INT64_C(25);
v1991 = INT64_C(26);
v1994 = INT64_C(27);
v1997 = INT64_C(28);
v2000 = INT64_C(29);
v2003 = INT64_C(30);
v2006 = INT64_C(31);
v2009 = INT64_C(32);
v2012 = INT64_C(33);
v2015 = INT64_C(34);
v2018 = INT64_C(35);
v2021 = INT64_C(36);
v2024 = INT64_C(0);
v2027 = ((void *)0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_2216, 1, lo, hi, &y_d_int); }
y_init(&yd_2216, &v2218);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_2225, 1, lo, hi, &y_d_ptr); }
y_init(&yd_2225, &v2227);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_2234, 1, lo, hi, &y_d_ptr); }
y_init(&yd_2234, &v2236);
v2238 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2323, 1, lo, hi, &y_d_int); }
y_init(&yd_2323, &v2325);
v2327 = INT64_C(0);
v2330 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2338, 1, lo, hi, &y_d_int); }
y_init(&yd_2338, &v2340);
v2342 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2350, 1, lo, hi, &y_d_int); }
y_init(&yd_2350, &v2352);
v2354 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2362, 1, lo, hi, &y_d_int); }
y_init(&yd_2362, &v2364);
y_init(&yd_2362, &v2366);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2373, 1, lo, hi, &y_d_int); }
y_init(&yd_2373, &v2375);
v2377 = INT64_C(0);
v2380 = INT64_C(0);
v2383 = ((void *)0);
v2385 = 0;
v2557 = ((void *)0);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_2564, 1, lo, hi, &y_d_ptr); }
y_init(&yd_2564, &v2566);
v2583 = INT64_C(0);
yr963_InitChars();
yr1177_InitWords();
v1239 = yr1041_N(y_str("FROM", 4));
v1242 = yr1041_N(y_str("DIMENSION", 9));
v2024 = yr1021_T(y_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP DEL SQ DQ ", 128));
y_open(&v881, y_str("OUTPUT", 6), 1);
yr1182_ReadSource();
yr1229_Lex();
v2743 = yr1554_ParseProgram();
yr2779_Predefine();
yr2784_Translate();
yr2789_WriteProgram();
y_close(&v881);
}
int main(int argc, char **argv) {
y_lang();
rt_init(argc, argv);
y_elaborate();
rt_main_done();
return 0;
}
