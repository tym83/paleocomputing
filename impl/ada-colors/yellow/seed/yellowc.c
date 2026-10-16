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
struct yf2552;
struct yf2559;
struct yf2565;
struct yf2571;
struct yf2577;
struct yf2583;
struct yf2588;
struct yf2595;
struct yf2601;
struct yf2607;
struct yf2612;
struct yf2618;
struct yf2625;
struct yf2632;
struct yf2639;
struct yf2646;
struct yf2654;
struct yf2660;
struct yf2669;
struct yf2677;
struct yf2683;
struct yf2689;
struct yf2699;
struct yf2711;
struct yf2719;
struct yf2729;
struct yf2737;
struct yf2742;
struct yf2747;
struct yf2752;
struct yR95 { rt_int f_kind; rt_int f_line; rt_int f_ival; rt_int f_flag; rt_int f_name; rt_int f_text; void * f_a; void * f_b; void * f_c; void * f_d; void * f_e; void * f_next; void * f_rep; void * f_sym; };
struct yR100 { rt_int f_kind; rt_int f_tid; rt_int f_tname; rt_int f_lo; rt_int f_hi; rt_int f_mlo; rt_int f_mhi; rt_int f_hasm; rt_int f_scale; rt_int f_prec; void * f_elem; void * f_idx; rt_int f_nidx; void * f_link; void * f_lits; rt_int f_nlits; void * f_fields; void * f_selector; rt_int f_cname; rt_int f_dname; rt_int f_dlevel; rt_int f_deep; rt_int f_abstract; rt_int f_opaque; rt_int f_ordered; rt_int f_forward; rt_int f_fwdscope; void * f_monitor; rt_int f_serial; };
struct yR105 { rt_int f_name; void * f_rep; rt_int f_isconst; rt_int f_variant; void * f_labels; void * f_next; };
struct yR110 { rt_int f_name; rt_int f_cls; void * f_rep; rt_int f_cname; void * f_next; };
struct yR115 { rt_int f_kind; rt_int f_name; void * f_rep; rt_int f_cname; rt_int f_level; rt_int f_byref; rt_int f_readonly; rt_int f_mval; rt_int f_hasmv; void * f_params; rt_int f_nparams; void * f_ret; rt_int f_func; void * f_decl; rt_int f_depth; void * f_target; void * f_members; void * f_mnext; void * f_chain; void * f_stack; void * f_alt; void * f_monitor; rt_int f_serial; };
struct yR120 { void * f_syms; rt_int f_closed; void * f_module; rt_int f_level; void * f_deferred; void * f_up; };
struct yR125 { rt_int f_t; void * f_next; };
struct yR130 { void * f_head; void * f_tail; };
struct yf964 { void *up;
rt_int v2756;
rt_int c_2759;
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
rt_int c_2796;
};
struct yf1006 { void *up;
rt_int p1005;
rt_int v2802;
};
struct yf1012 { void *up;
rt_int p1011;
ydesc yd_2815;
yarr v2817;
rt_int v2819;
rt_int v2822;
};
struct yf1017 { void *up;
rt_int v2841;
rt_int c_2853;
};
struct yf1024 { void *up;
yarr p1023;
};
struct yf1031 { void *up;
rt_int p1029;
rt_int p1030;
rt_int v2864;
rt_int v2867;
rt_int v2869;
rt_int c_2875;
rt_int c_2894;
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
rt_int c_2923;
};
struct yf1059 { void *up;
rt_int p1056;
yarr p1058;
rt_int v2936;
rt_int c_2953;
};
struct yf1066 { void *up;
rt_int p1064;
rt_int p1065;
};
struct yf1073 { void *up;
yR130 * p1071;
rt_int p1072;
void * v2974;
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
rt_int v2988;
};
struct yf1113 { void *up;
yR130 p1112;
void * v2995;
};
struct yf1120 { void *up;
rt_int p1118;
rt_int p1119;
rt_int v3001;
};
struct yf1128 { void *up;
rt_int p1125;
yarr p1127;
};
struct yf1137 { void *up;
rt_int p1133;
rt_int p1134;
yarr p1136;
rt_int v3015;
};
struct yf1142 { void *up;
};
struct yf1149 { void *up;
yarr p1148;
rt_int v3023;
};
struct yf1178 { void *up;
rt_int v3027;
rt_int v3029;
rt_int v3031;
rt_int c_3049;
};
struct yf1183 { void *up;
unsigned char v3058;
};
struct yf1190 { void *up;
rt_int p1188;
rt_int p1189;
};
struct yf1196 { void *up;
rt_int p1195;
};
struct yf1201 { void *up;
rt_int v3075;
rt_int v3077;
};
struct yf1207 { void *up;
unsigned char p1206;
};
struct yf1214 { void *up;
yarr p1213;
};
struct yf1220 { void *up;
rt_int p1219;
rt_int v3106;
rt_int v3109;
rt_int v3111;
rt_int v3113;
rt_int v3115;
rt_int v3117;
rt_int v3120;
rt_int v3123;
rt_int v3126;
rt_int v3129;
rt_int v3132;
rt_int v3135;
rt_int c_3173;
rt_int c_3183;
rt_int c_3211;
rt_int c_3219;
};
struct yf1225 { void *up;
rt_int v3230;
rt_int v3232;
rt_int v3234;
rt_int v3236;
};
struct yf1230 { void *up;
unsigned char v3265;
rt_int v3267;
rt_int v3269;
rt_int v3271;
rt_int v3273;
rt_int v3275;
rt_int v3277;
rt_int v3279;
rt_int c_3352;
};
struct yf1248 { void *up;
rt_int p1246;
rt_int p1247;
void * v3368;
};
struct yf1256 { void *up;
void * * p1253;
void * * p1254;
void * p1255;
};
struct yf1262 { void *up;
void * p1261;
rt_int v3381;
void * v3384;
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
rt_int v3398;
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
rt_int v3421;
};
struct yf1318 { void *up;
rt_int p1317;
rt_int v3431;
};
struct yf1323 { void *up;
rt_int v3436;
};
struct yf1330 { void *up;
rt_int p1328;
rt_int p1329;
rt_int v3443;
};
struct yf1335 { void *up;
rt_int v3447;
};
struct yf1341 { void *up;
rt_int p1340;
void * v3457;
};
struct yf1346 { void *up;
void * v3464;
};
struct yf1351 { void *up;
void * v3469;
void * v3471;
void * v3473;
void * v3475;
rt_int v3477;
};
struct yf1356 { void *up;
rt_int v3486;
};
struct yf1361 { void *up;
void * v3492;
void * v3494;
void * v3496;
void * v3498;
};
struct yf1366 { void *up;
void * v3503;
void * v3505;
void * v3507;
void * v3509;
void * v3511;
};
struct yf1371 { void *up;
void * v3519;
void * v3521;
void * v3523;
};
struct yf1377 { void *up;
rt_int p1376;
void * v3529;
};
struct yf1383 { void *up;
rt_int p1382;
};
struct yf1390 { void *up;
void * * p1388;
void * * p1389;
rt_int v3549;
void * v3551;
void * v3553;
void * v3555;
};
struct yf1395 { void *up;
void * v3559;
void * v3561;
void * v3563;
rt_int v3565;
rt_int v3567;
rt_int v3569;
};
struct yf1401 { void *up;
void * p1400;
void * v3584;
void * v3586;
rt_int v3588;
};
struct yf1406 { void *up;
void * v3594;
};
struct yf1412 { void *up;
rt_int p1411;
rt_int v3606;
};
struct yf1417 { void *up;
rt_int v3614;
void * v3616;
};
struct yf1422 { void *up;
void * v3625;
void * v3627;
};
struct yf1427 { void *up;
void * v3631;
void * v3633;
void * v3635;
};
struct yf1432 { void *up;
void * v3640;
void * v3642;
void * v3644;
rt_int v3646;
};
struct yf1437 { void *up;
void * v3653;
void * v3655;
void * v3657;
void * v3659;
void * v3661;
void * v3663;
rt_int v3665;
rt_int v3667;
};
struct yf1442 { void *up;
void * v3684;
};
struct yf1447 { void *up;
rt_int v3689;
};
struct yf1453 { void *up;
rt_int p1452;
void * v3698;
void * v3700;
void * v3702;
rt_int v3704;
};
struct yf1458 { void *up;
void * v3712;
void * v3714;
void * v3716;
void * v3718;
void * v3720;
void * v3722;
rt_int v3724;
rt_int v3726;
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
void * v3780;
};
struct yf1509 { void *up;
rt_int p1507;
rt_int p1508;
rt_int v3786;
};
struct yf1514 { void *up;
void * v3790;
rt_int v3792;
rt_int v3794;
};
struct yf1519 { void *up;
void * v3798;
void * v3800;
rt_int v3802;
rt_int v3804;
};
struct yf1524 { void *up;
void * v3810;
rt_int v3812;
rt_int v3814;
};
struct yf1530 { void *up;
rt_int p1529;
rt_int v3820;
};
struct yf1535 { void *up;
void * v3825;
rt_int v3827;
rt_int v3829;
};
struct yf1540 { void *up;
void * v3833;
rt_int v3835;
rt_int v3837;
};
struct yf1545 { void *up;
void * v3858;
void * v3860;
void * v3862;
rt_int v3864;
};
struct yf1550 { void *up;
};
struct yf1555 { void *up;
void * v3871;
void * v3873;
};
struct yf1591 { void *up;
rt_int p1589;
rt_int p1590;
void * v3880;
};
struct yf1597 { void *up;
rt_int p1596;
void * v3895;
};
struct yf1602 { void *up;
void * v3901;
void * v3903;
void * v3905;
rt_int v3907;
};
struct yf1608 { void *up;
void * p1607;
};
struct yf1614 { void *up;
rt_int p1613;
void * v3919;
};
struct yf1620 { void *up;
rt_int p1619;
void * v3927;
};
struct yf1627 { void *up;
rt_int p1625;
rt_int p1626;
void * v3936;
};
struct yf1633 { void *up;
void * p1632;
void * v3942;
};
struct yf1640 { void *up;
rt_int p1638;
void * p1639;
void * v3951;
};
struct yf1647 { void *up;
void * p1645;
rt_int p1646;
void * v3960;
rt_int v3962;
};
struct yf1654 { void *up;
rt_int p1652;
rt_int p1653;
rt_int v3970;
};
struct yf1660 { void *up;
rt_int p1659;
rt_int v3985;
};
struct yf1667 { void *up;
rt_int p1665;
rt_int p1666;
rt_int v4000;
};
struct yf1673 { void *up;
void * p1672;
rt_int v4009;
};
struct yf1679 { void *up;
void * p1678;
void * v4017;
};
struct yf1710 { void *up;
rt_int p1708;
rt_int p1709;
void * v4023;
};
struct yf1716 { void *up;
void * p1715;
void * v4047;
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
rt_int v4076;
};
struct yf1758 { void *up;
void * p1757;
rt_int v4101;
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
rt_int v4144;
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
rt_int v4160;
rt_int v4162;
void * v4164;
void * v4166;
rt_int v4168;
rt_int v4170;
};
struct yf1807 { void *up;
void * p1806;
void * v4181;
void * v4183;
rt_int v4185;
};
struct yf1815 { void *up;
void * p1812;
rt_int p1813;
rt_int p1814;
};
struct yf1821 { void *up;
rt_int p1820;
rt_int v4199;
};
struct yf1829 { void *up;
void * p1826;
rt_int p1827;
rt_int p1828;
void * v4209;
void * v4211;
void * v4213;
void * v4215;
void * v4217;
rt_int v4219;
void * v4221;
rt_int v4223;
rt_int v4225;
};
struct yf1836 { void *up;
rt_int p1834;
void * p1835;
void * v4272;
void * v4274;
};
struct yf1841 { void *up;
void * v4278;
};
struct yf1847 { void *up;
void * p1846;
void * v4283;
rt_int v4285;
rt_int v4287;
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
void * v4312;
};
struct yf1871 { void *up;
void * p1865;
void * * p1866;
void * p1867;
rt_int p1868;
void * p1869;
rt_int p1870;
void * v4324;
void * v4326;
void * v4328;
};
struct yf1879 { void *up;
void * p1876;
void * p1877;
rt_int p1878;
void * v4336;
void * v4338;
void * v4340;
void * v4342;
rt_int v4344;
void * v4347;
rt_int v4349;
rt_int v4351;
};
struct yf1886 { void *up;
void * p1884;
rt_int p1885;
void * v4398;
};
struct yf2004 { void *up;
void * p2002;
rt_int p2003;
void * v4405;
rt_int v4407;
rt_int v4409;
rt_int v4411;
rt_int v4413;
rt_int c_4422;
};
struct yf2011 { void *up;
void * p2009;
void * p2010;
void * v4461;
};
struct yf2019 { void *up;
void * p2016;
rt_int p2017;
rt_int p2018;
rt_int v4472;
rt_int v4474;
};
struct yf2028 { void *up;
void * p2024;
rt_int p2025;
rt_int p2026;
rt_int * p2026_o;
rt_int p2027;
rt_int v4485;
rt_int v4487;
rt_int v4489;
ydesc yd_4496;
yarr v4498;
unsigned char v4500;
rt_int v4502;
rt_int c_4531;
};
struct yf2036 { void *up;
void * p2033;
rt_int p2034;
rt_int * p2034_o;
rt_int p2035;
rt_int * p2035_o;
void * v4566;
rt_int v4568;
rt_int v4570;
rt_int v4572;
rt_int v4574;
rt_int v4576;
void * v4578;
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
rt_int v4626;
rt_int v4628;
};
struct yf2060 { void *up;
void * p2059;
void * v4642;
void * v4644;
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
void * v4674;
};
struct yf2087 { void *up;
void * p2086;
void * v4679;
};
struct yf2096 { void *up;
void * p2092;
void * p2093;
rt_int p2094;
rt_int * p2094_o;
void * p2095;
void * * p2095_o;
rt_int v4688;
void * v4690;
rt_int v4692;
rt_int v4694;
void * v4696;
void * v4698;
void * v4700;
rt_int v4702;
rt_int v4704;
};
struct yf2104 { void *up;
void * p2101;
void * p2102;
rt_int p2103;
void * v4745;
rt_int v4747;
rt_int v4749;
};
struct yf2113 { void *up;
void * p2109;
void * p2110;
rt_int p2111;
rt_int * p2111_o;
void * p2112;
void * * p2112_o;
void * v4761;
};
struct yf2121 { void *up;
void * p2118;
rt_int p2119;
rt_int * p2119_o;
void * p2120;
void * * p2120_o;
rt_int v4770;
rt_int v4772;
rt_int v4774;
void * v4776;
void * v4778;
void * v4780;
void * v4782;
rt_int v4784;
rt_int v4786;
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
void * v4821;
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
rt_int v4849;
rt_int v4851;
void * v4853;
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
rt_int v4883;
rt_int v4885;
rt_int v4887;
rt_int v4889;
void * v4891;
void * v4893;
void * v4895;
rt_int v4897;
};
struct yf2216 { void *up;
void * p2214;
void * p2215;
};
struct yf2224 { void *up;
void * p2221;
rt_int p2222;
rt_int p2223;
void * v4949;
void * v4951;
rt_int v4953;
rt_int v4955;
};
struct yf2230 { void *up;
void * p2229;
void * v4967;
};
struct yf2239 { void *up;
void * p2235;
void * p2236;
rt_int p2237;
rt_int * p2237_o;
rt_int p2238;
rt_int * p2238_o;
void * v4979;
void * v4981;
void * v4983;
};
struct yf2248 { void *up;
void * p2244;
rt_int p2245;
rt_int p2246;
rt_int p2247;
void * v4999;
rt_int v5001;
rt_int v5005;
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
void * v5031;
void * v5033;
rt_int v5035;
rt_int v5037;
};
struct yf2269 { void *up;
void * p2264;
void * p2265;
rt_int p2266;
rt_int p2267;
rt_int * p2267_o;
void * p2268;
void * * p2268_o;
void * v5054;
void * v5056;
rt_int v5058;
rt_int v5060;
};
struct yf2278 { void *up;
void * p2274;
void * p2275;
rt_int p2276;
rt_int * p2276_o;
void * p2277;
void * * p2277_o;
void * v5072;
void * v5074;
rt_int v5076;
rt_int v5078;
rt_int v5080;
void * v5082;
rt_int v5084;
rt_int v5086;
rt_int v5088;
rt_int v5090;
rt_int v5092;
rt_int v5095;
void * v5097;
rt_int v5099;
};
struct yf2286 { void *up;
void * p2283;
rt_int p2284;
rt_int p2285;
void * v5161;
void * v5163;
rt_int v5165;
rt_int v5167;
};
struct yf2364 { void *up;
yarr p2362;
rt_int p2363;
rt_int v5176;
};
struct yf2374 { void *up;
yarr p2370;
rt_int p2371;
yarr p2373;
rt_int v5182;
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
rt_int v5204;
rt_int v5206;
rt_int v5208;
void * v5210;
void * v5212;
rt_int v5214;
};
struct yf2403 { void *up;
void * p2402;
void * v5270;
};
struct yf2409 { void *up;
void * p2408;
rt_int v5274;
void * v5276;
};
struct yf2416 { void *up;
void * p2414;
void * p2415;
rt_int v5282;
rt_int v5284;
void * v5286;
void * v5288;
rt_int v5290;
};
struct yf2421 { void *up;
void * v5296;
rt_int v5298;
};
struct yf2427 { void *up;
void * p2426;
rt_int v5305;
rt_int v5307;
rt_int v5309;
rt_int v5311;
rt_int v5313;
rt_int v5315;
rt_int v5317;
void * v5319;
void * v5321;
void * v5323;
void * v5325;
rt_int v5327;
rt_int v5329;
rt_int v5331;
rt_int v5333;
void * v5335;
};
struct yf2433 { void *up;
void * p2432;
void * v5396;
rt_int v5398;
rt_int v5400;
rt_int v5402;
void * v5404;
};
struct yf2441 { void *up;
rt_int p2438;
rt_int p2439;
rt_int p2440;
};
struct yf2447 { void *up;
void * p2446;
rt_int v5436;
rt_int v5438;
rt_int v5440;
void * v5442;
void * v5444;
};
struct yf2453 { void *up;
void * p2452;
};
struct yf2459 { void *up;
rt_int p2458;
rt_int v5465;
rt_int v5467;
rt_int c_5472;
};
struct yf2465 { void *up;
void * p2464;
void * v5482;
rt_int v5484;
rt_int v5486;
};
struct yf2471 { void *up;
void * p2470;
rt_int v5503;
};
struct yf2478 { void *up;
void * p2476;
rt_int p2477;
void * v5511;
void * v5513;
void * v5515;
void * v5517;
void * v5519;
void * v5521;
void * v5523;
rt_int v5525;
rt_int v5527;
};
struct yf2485 { void *up;
void * p2483;
void * p2484;
void * v5570;
void * v5572;
void * v5574;
rt_int v5576;
};
struct yf2491 { void *up;
void * p2490;
void * v5584;
yR130 v5586;
yR130 v5588;
rt_int v5590;
rt_int v5592;
rt_int v5594;
rt_int v5596;
rt_int v5598;
rt_int v5600;
rt_int v5602;
void * v5604;
rt_int v5606;
void * v5608;
void * v5610;
rt_int v5612;
rt_int v5614;
yR130 v5616;
};
struct yf2499 { void *up;
void * p2496;
void * p2497;
rt_int p2498;
};
struct yf2505 { void *up;
void * p2504;
rt_int v5678;
void * v5680;
void * v5682;
void * v5684;
void * v5686;
rt_int v5688;
rt_int v5690;
rt_int v5692;
};
struct yf2512 { void *up;
void * p2510;
void * p2511;
};
struct yf2518 { void *up;
void * p2517;
void * v5708;
void * v5710;
void * v5712;
void * v5714;
};
struct yf2536 { void *up;
rt_int p2534;
void * p2535;
void * v5719;
};
struct yf2544 { void *up;
void * * p2541;
void * p2542;
rt_int p2543;
void * v5726;
void * v5728;
void * v5730;
};
struct yf2552 { void *up;
void * p2549;
void * * p2550;
rt_int p2551;
void * v5741;
void * v5743;
void * v5745;
rt_int v5747;
void * v5749;
rt_int v5751;
};
struct yf2559 { void *up;
void * p2557;
rt_int p2558;
void * v5775;
void * v5777;
void * v5779;
};
struct yf2565 { void *up;
void * p2564;
void * v5784;
void * v5786;
void * v5788;
void * v5790;
void * v5792;
void * v5794;
void * v5796;
void * v5798;
void * v5800;
void * v5802;
rt_int v5804;
rt_int v5806;
rt_int v5808;
};
struct yf2571 { void *up;
void * p2570;
void * v5832;
};
struct yf2577 { void *up;
void * p2576;
void * v5836;
void * v5838;
void * v5840;
void * v5842;
rt_int v5844;
rt_int v5846;
rt_int v5848;
rt_int v5850;
void * v5852;
rt_int c_5861;
};
struct yf2583 { void *up;
void * p2582;
void * v5872;
void * v5874;
};
struct yf2588 { void *up;
void * v5880;
};
struct yf2595 { void *up;
void * p2593;
void * p2594;
rt_int v5891;
rt_int v5893;
rt_int v5895;
void * v5897;
rt_int v5899;
rt_int v5901;
rt_int v5903;
rt_int v5905;
rt_int v5907;
rt_int v5909;
void * v5911;
void * v5913;
};
struct yf2601 { void *up;
void * p2600;
};
struct yf2607 { void *up;
void * p2606;
rt_int v5973;
};
struct yf2612 { void *up;
};
struct yf2618 { void *up;
void * p2617;
};
struct yf2625 { void *up;
void * p2623;
rt_int p2624;
};
struct yf2632 { void *up;
void * p2630;
void * p2631;
rt_int v6008;
rt_int v6010;
};
struct yf2639 { void *up;
void * p2637;
rt_int p2638;
void * v6016;
rt_int v6018;
};
struct yf2646 { void *up;
void * p2644;
rt_int p2645;
};
struct yf2654 { void *up;
yarr p2652;
rt_int p2653;
};
struct yf2660 { void *up;
rt_int p2659;
};
struct yf2669 { void *up;
void * p2665;
rt_int p2666;
rt_int p2667;
rt_int * p2667_o;
void * p2668;
void * * p2668_o;
rt_int v6045;
};
struct yf2677 { void *up;
void * p2674;
rt_int p2675;
rt_int * p2675_o;
void * p2676;
void * * p2676_o;
};
struct yf2683 { void *up;
void * p2682;
rt_int v6061;
void * v6063;
};
struct yf2689 { void *up;
void * p2688;
void * v6069;
rt_int v6072;
rt_int v6074;
rt_int v6076;
rt_int v6078;
rt_int v6080;
rt_int v6082;
unsigned char v6084;
void * v6086;
ydesc yd_6093;
yarr v6095;
};
struct yf2699 { void *up;
rt_int p2694;
void * p2695;
rt_int p2696;
rt_int p2697;
rt_int * p2697_o;
void * p2698;
void * * p2698_o;
rt_int v6134;
rt_int v6136;
rt_int v6138;
rt_int v6140;
rt_int v6142;
void * v6144;
void * v6146;
void * v6148;
void * v6150;
rt_int v6152;
rt_int v6154;
rt_int v6156;
rt_int v6158;
void * v6160;
rt_int v6162;
rt_int c_6176;
};
struct yf2711 { void *up;
yarr p2709;
void * p2710;
void * v6350;
};
struct yf2719 { void *up;
yarr p2717;
rt_int p2718;
void * v6356;
};
struct yf2729 { void *up;
yarr p2725;
yarr p2726;
yarr p2727;
rt_int p2728;
void * v6364;
void * v6366;
void * v6368;
};
struct yf2737 { void *up;
rt_int p2734;
yarr p2736;
void * v6377;
};
struct yf2742 { void *up;
};
struct yf2747 { void *up;
void * v6457;
};
struct yf2752 { void *up;
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
static void * v2703;
static void * v2705;
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
static void yr2548_ResolveItem(void * a_p2549, void * * a_p2550, rt_int a_p2551);
static void yr2556_DefineAll(void * a_p2557, rt_int a_p2558);
static void yr2563_CompileModule(void * a_p2564);
static void yr2569_DeclareTemplate(void * a_p2570);
static void yr2575_Instantiate(void * a_p2576);
static void yr2581_DeclareProcess(void * a_p2582);
static void yr2587_AwaitProcesses(void);
static void yr2592_Activate(void * a_p2593, void * a_p2594);
static rt_int yr2599_MonitorPath(void * a_p2600);
static void yr2605_EnterMonitor(void * a_p2606);
static void yr2611_LeaveMonitor(void);
static void yr2616_TerminateStatement(void * a_p2617);
static void yr2622_DeclareSignal(void * a_p2623, rt_int a_p2624);
static void yr2629_DeviceSignal(void * a_p2630, void * a_p2631);
static void * yr2636_Arg(void * a_p2637, rt_int a_p2638);
static void yr2643_NArgs(void * a_p2644, rt_int a_p2645);
static rt_int yr2650_Call1(yarr a_p2652, rt_int a_p2653);
static rt_int yr2658_Addr(rt_int a_p2659);
static void yr2664_StdVar(void * a_p2665, rt_int a_p2666, rt_int * a_p2667, void * * a_p2668);
static void yr2673_NumArg(void * a_p2674, rt_int * a_p2675, void * * a_p2676);
static rt_int yr2681_IntArg(void * a_p2682);
static void yr2687_CodeInsert(void * a_p2688);
static void yr2693_StdCall(rt_int a_p2694, void * a_p2695, rt_int a_p2696, rt_int * a_p2697, void * * a_p2698);
static void yr2707_StdRep(yarr a_p2709, void * a_p2710);
static void yr2715_StdOp(yarr a_p2717, rt_int a_p2718);
static void * yr2723_LitList(yarr a_p2725, yarr a_p2726, yarr a_p2727, rt_int a_p2728);
static void * yr2733_Abstract(rt_int a_p2734, yarr a_p2736);
static void yr2741_Predefine(void);
static void yr2746_Translate(void);
static void yr2751_WriteProgram(void);
static void yr963_InitChars(void) {
struct yf964 F;
memset((void *)&F, 0, sizeof F);
F.v2756 = INT64_C(0);
{ rt_int hi2761 = 127;
for (rt_int i2760 = 0; i2760 <= hi2761; i2760++) { F.c_2759 = i2760;
((rt_int *)(v931).p)[y_ix1(v931, F.c_2759)] = F.v2756;
((unsigned char *)(v940).p)[y_ix1(v940, F.v2756)] = F.c_2759;
F.v2756 = rt_range(rt_add(F.v2756, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i2760 == hi2761) break;
}}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr968_IsLetter(unsigned char a_p969) {
struct yf970 F;
memset((void *)&F, 0, sizeof F);
F.p969 = a_p969;
{ rt_int rv2771 = ((((((F.p969 >= 65)) && ((F.p969 <= 90)))) || ((((F.p969 >= 97)) && ((F.p969 <= 122))))) || ((F.p969 == 95)));
return rv2771; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr974_IsDigit(unsigned char a_p975) {
struct yf976 F;
memset((void *)&F, 0, sizeof F);
F.p975 = a_p975;
{ rt_int rv2776 = (((F.p975 >= 48)) && ((F.p975 <= 57)));
return rv2776; }
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
{ rt_int hi2798 = y_high(F.p999, INT64_C(1));
for (rt_int i2797 = y_low(F.p999, INT64_C(1)); i2797 <= hi2798; i2797++) { F.c_2796 = i2797;
yr991_SC(((unsigned char *)(F.p999).p)[y_ix1(F.p999, F.c_2796)]);
if (i2797 == hi2798) break;
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
F.v2802 = ((rt_int *)(v888).p)[y_ix1(v888, F.p1005)];
while ((F.v2802 < (rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1005)], ((rt_int *)(v890).p)[y_ix1(v890, F.p1005)])))) {
yr991_SC(((unsigned char *)(v883).p)[y_ix1(v883, F.v2802)]);
F.v2802 = rt_range(rt_add(F.v2802, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1010_SI(rt_int a_p1011) {
struct yf1012 F;
memset((void *)&F, 0, sizeof F);
F.p1011 = a_p1011;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(24)}; y_desc_array(&F.yd_2815, 1, lo, hi, &y_d_byte); }
y_init(&F.yd_2815, &F.v2817);
F.v2819 = INT64_C(0);
F.v2822 = F.p1011;
if ((F.v2822 < INT64_C(0))) {
yr991_SC(45);
F.v2822 = rt_range(rt_neg(F.v2822), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
for (;;) {
F.v2819 = rt_range(rt_add(F.v2819, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((unsigned char *)(F.v2817).p)[y_ix1(F.v2817, F.v2819)] = ((unsigned char *)(v940).p)[y_ix1(v940, rt_add((rt_mod(F.v2822, INT64_C(10))), INT64_C(48)))];
F.v2822 = rt_range(rt_div(F.v2822, INT64_C(10)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.v2822 == INT64_C(0))) {
goto yl_2826;
}
}
yl_2826: ;
while ((F.v2819 > INT64_C(0))) {
yr991_SC(((unsigned char *)(F.v2817).p)[y_ix1(F.v2817, F.v2819)]);
F.v2819 = rt_range(rt_sub(F.v2819, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1016_SE(void) {
struct yf1017 F;
memset((void *)&F, 0, sizeof F);
F.v2841 = ((rt_int *)(v919).p)[y_ix1(v919, v921)];
v921 = rt_range(rt_sub(v921, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v892 = rt_range(rt_add(v892, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v888).p)[y_ix1(v888, v892)] = rt_range(rt_add(v885, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v890).p)[y_ix1(v890, v892)] = rt_range(rt_sub(v909, F.v2841), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
{ rt_int hi2855 = v909;
for (rt_int i2854 = rt_add(F.v2841, INT64_C(1)); i2854 <= hi2855; i2854++) { F.c_2853 = i2854;
yr980_PoolAdd(((unsigned char *)(v907).p)[y_ix1(v907, F.c_2853)]);
if (i2854 == hi2855) break;
}}
v909 = F.v2841;
{ rt_int rv2856 = rt_range(v892, INT64_C(0), INT64_C(4000000));
return rv2856; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1021_T(yarr a_p1023) {
struct yf1024 F;
memset((void *)&F, 0, sizeof F);
F.p1023 = a_p1023;
yr986_SB();
yr997_SA(F.p1023);
{ rt_int rv2859 = yr1016_SE();
return rv2859; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1028_Intern(rt_int a_p1029, rt_int a_p1030) {
struct yf1031 F;
memset((void *)&F, 0, sizeof F);
F.p1029 = a_p1029;
F.p1030 = a_p1030;
F.v2864 = INT64_C(0);
{ rt_int hi2877 = rt_sub((rt_add(F.p1029, F.p1030)), INT64_C(1));
for (rt_int i2876 = F.p1029; i2876 <= hi2877; i2876++) { F.c_2875 = i2876;
F.v2864 = rt_range(rt_mod((rt_add((rt_mul(F.v2864, INT64_C(31))), ((rt_int *)(v931).p)[y_ix1(v931, ((unsigned char *)(v883).p)[y_ix1(v883, F.c_2875)])])), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i2876 == hi2877) break;
}}
for (;;) {
if ((((rt_int *)(v895).p)[y_ix1(v895, F.v2864)] == INT64_C(0))) {
v892 = rt_range(rt_add(v892, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v888).p)[y_ix1(v888, v892)] = F.p1029;
((rt_int *)(v890).p)[y_ix1(v890, v892)] = F.p1030;
((rt_int *)(v895).p)[y_ix1(v895, F.v2864)] = rt_range(v892, INT64_C(0), INT64_C(4000000));
{ rt_int rv2887 = rt_range(v892, INT64_C(0), INT64_C(4000000));
return rv2887; }
}
F.v2867 = ((rt_int *)(v895).p)[y_ix1(v895, F.v2864)];
if ((((rt_int *)(v890).p)[y_ix1(v890, F.v2867)] == F.p1030)) {
F.v2869 = 1;
{ rt_int hi2896 = rt_sub(F.p1030, INT64_C(1));
for (rt_int i2895 = INT64_C(0); i2895 <= hi2896; i2895++) { F.c_2894 = i2895;
if ((!(((unsigned char *)(v883).p)[y_ix1(v883, rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.v2867)], F.c_2894))] == ((unsigned char *)(v883).p)[y_ix1(v883, rt_add(F.p1029, F.c_2894))]))) {
F.v2869 = 0;
}
if (i2895 == hi2896) break;
}}
if (F.v2869) {
{ rt_int rv2900 = rt_range(F.v2867, INT64_C(0), INT64_C(4000000));
return rv2900; }
}
}
F.v2864 = rt_range(rt_mod((rt_add(F.v2864, INT64_C(1))), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yl_2883: ;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1035_Name(rt_int a_p1036) {
struct yf1037 F;
memset((void *)&F, 0, sizeof F);
F.p1036 = a_p1036;
{ rt_int rv2907 = yr1028_Intern(((rt_int *)(v888).p)[y_ix1(v888, F.p1036)], ((rt_int *)(v890).p)[y_ix1(v890, F.p1036)]);
return rv2907; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1041_N(yarr a_p1043) {
struct yf1044 F;
memset((void *)&F, 0, sizeof F);
F.p1043 = a_p1043;
{ rt_int rv2910 = yr1035_Name(yr1021_T(F.p1043));
return rv2910; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1048_TEq(rt_int a_p1049, rt_int a_p1050) {
struct yf1051 F;
memset((void *)&F, 0, sizeof F);
F.p1049 = a_p1049;
F.p1050 = a_p1050;
if ((F.p1049 == F.p1050)) {
{ rt_int rv2915 = 1;
return rv2915; }
}
if ((!(((rt_int *)(v890).p)[y_ix1(v890, F.p1049)] == ((rt_int *)(v890).p)[y_ix1(v890, F.p1050)]))) {
{ rt_int rv2917 = 0;
return rv2917; }
}
{ rt_int hi2925 = rt_sub(((rt_int *)(v890).p)[y_ix1(v890, F.p1049)], INT64_C(1));
for (rt_int i2924 = INT64_C(0); i2924 <= hi2925; i2924++) { F.c_2923 = i2924;
if ((!(((unsigned char *)(v883).p)[y_ix1(v883, rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1049)], F.c_2923))] == ((unsigned char *)(v883).p)[y_ix1(v883, rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1050)], F.c_2923))]))) {
{ rt_int rv2929 = 0;
return rv2929; }
}
if (i2924 == hi2925) break;
}}
{ rt_int rv2931 = 1;
return rv2931; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1055_TStarts(rt_int a_p1056, yarr a_p1058) {
struct yf1059 F;
memset((void *)&F, 0, sizeof F);
F.p1056 = a_p1056;
F.p1058 = a_p1058;
F.v2936 = INT64_C(0);
if ((((rt_int *)(v890).p)[y_ix1(v890, F.p1056)] < (rt_add((rt_sub(y_high(F.p1058, INT64_C(1)), y_low(F.p1058, INT64_C(1)))), INT64_C(1))))) {
{ rt_int rv2946 = 0;
return rv2946; }
}
{ rt_int hi2955 = y_high(F.p1058, INT64_C(1));
for (rt_int i2954 = y_low(F.p1058, INT64_C(1)); i2954 <= hi2955; i2954++) { F.c_2953 = i2954;
if ((!(((unsigned char *)(v883).p)[y_ix1(v883, rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1056)], F.v2936))] == ((unsigned char *)(F.p1058).p)[y_ix1(F.p1058, F.c_2953)]))) {
{ rt_int rv2958 = 0;
return rv2958; }
}
F.v2936 = rt_range(rt_add(F.v2936, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i2954 == hi2955) break;
}}
{ rt_int rv2962 = 1;
return rv2962; }
rt_raise(Y_X_NO_RETURN);
}
static unsigned char yr1063_TChar(rt_int a_p1064, rt_int a_p1065) {
struct yf1066 F;
memset((void *)&F, 0, sizeof F);
F.p1064 = a_p1064;
F.p1065 = a_p1065;
{ unsigned char rv2969 = ((unsigned char *)(v883).p)[y_ix1(v883, rt_sub((rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1064)], F.p1065)), INT64_C(1)))];
return rv2969; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1070_Put(yR130 * a_p1071, rt_int a_p1072) {
struct yf1073 F;
memset((void *)&F, 0, sizeof F);
F.p1071 = a_p1071;
F.p1072 = a_p1072;
({ F.v2974 = rt_alloc(sizeof(yR125)); });
(*(yR125 *)rt_nil_check(F.v2974)) = ((yR125){ .f_t = F.p1072, .f_next = ((void *)0) });
if ((((*F.p1071)).f_head == ((void *)0))) {
((*F.p1071)).f_head = F.v2974;
} else {
((*(yR125 *)rt_nil_check(((*F.p1071)).f_tail))).f_next = F.v2974;
}
((*F.p1071)).f_tail = F.v2974;
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
F.v2988 = ((rt_int *)(v888).p)[y_ix1(v888, F.p1106)];
while ((F.v2988 < (rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1106)], ((rt_int *)(v890).p)[y_ix1(v890, F.p1106)])))) {
({ unsigned char pv = ((unsigned char *)(v883).p)[y_ix1(v883, F.v2988)]; y_put(&v881, &pv, sizeof pv); });
F.v2988 = rt_range(rt_add(F.v2988, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1111_WriteBuf(yR130 a_p1112) {
struct yf1113 F;
memset((void *)&F, 0, sizeof F);
F.p1112 = a_p1112;
F.v2995 = (F.p1112).f_head;
while ((!(F.v2995 == ((void *)0)))) {
yr1105_WriteTxt(((*(yR125 *)rt_nil_check(F.v2995))).f_t);
({ unsigned char pv = 10; y_put(&v881, &pv, sizeof pv); });
F.v2995 = ((*(yR125 *)rt_nil_check(F.v2995))).f_next;
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
F.v3001 = yr1016_SE();
yr1105_WriteTxt(F.v3001);
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
F.v3015 = yr1016_SE();
yr1117_Fail(F.p1133, F.v3015);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1141_NewSerial(void) {
struct yf1142 F;
memset((void *)&F, 0, sizeof F);
v924 = rt_range(rt_add(v924, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
{ rt_int rv3019 = v924;
return rv3019; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1146_Fresh(yarr a_p1148) {
struct yf1149 F;
memset((void *)&F, 0, sizeof F);
F.p1148 = a_p1148;
F.v3023 = yr1141_NewSerial();
yr986_SB();
yr997_SA(F.p1148);
yr1010_SI(F.v3023);
{ rt_int rv3024 = yr1016_SE();
return rv3024; }
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
yr997_SA(y_str("<<<= >>>= ### === <<< >>> <<= >>= *** /// --- +++ := -> .. <= >= ## == << >> ", 77));
yr997_SA(y_str("** // -- ++ # + - * / = < > ( ) [ ] , ; : . ^ ", 46));
F.v3031 = yr1016_SE();
v892 = INT64_C(0);
F.v3027 = ((rt_int *)(v888).p)[y_ix1(v888, F.v3031)];
{ rt_int hi3051 = rt_sub((rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.v3031)], ((rt_int *)(v890).p)[y_ix1(v890, F.v3031)])), INT64_C(1));
for (rt_int i3050 = ((rt_int *)(v888).p)[y_ix1(v888, F.v3031)]; i3050 <= hi3051; i3050++) { F.c_3049 = i3050;
if ((((unsigned char *)(v883).p)[y_ix1(v883, F.c_3049)] == 32)) {
F.v3029 = yr1028_Intern(F.v3027, rt_range(rt_sub(F.c_3049, F.v3027), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v3027 = rt_range(rt_add(F.c_3049, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i3050 == hi3051) break;
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
({ unsigned char g; y_get(&v879, &g, sizeof g); F.v3058 = g; });
yr980_PoolAdd(F.v3058);
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
{ unsigned char rv3071 = 0;
return rv3071; }
}
{ unsigned char rv3072 = ((unsigned char *)(v883).p)[y_ix1(v883, F.p1195)];
return rv3072; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1200_EndsOperand(void) {
struct yf1201 F;
memset((void *)&F, 0, sizeof F);
if ((v1159 == INT64_C(0))) {
{ rt_int rv3080 = 0;
return rv3080; }
}
F.v3075 = ((rt_int *)(v1153).p)[y_ix1(v1153, v1159)];
F.v3077 = ((rt_int *)(v1155).p)[y_ix1(v1155, v1159)];
if ((((((((F.v3075 == v177)) || ((F.v3075 == v186))) || ((F.v3075 == v189))) || ((F.v3075 == v192))) || ((F.v3075 == v195))) || ((F.v3075 == v198)))) {
{ rt_int rv3082 = 1;
return rv3082; }
}
if ((F.v3075 == v183)) {
{ rt_int rv3083 = ((((F.v3077 == v567)) || ((F.v3077 == v573))) || ((F.v3077 == v588)));
return rv3083; }
}
if ((F.v3075 == v180)) {
{ rt_int rv3084 = (F.v3077 == v357);
return rv3084; }
}
{ rt_int rv3086 = 0;
return rv3086; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1205_DigitVal(unsigned char a_p1206) {
struct yf1207 F;
memset((void *)&F, 0, sizeof F);
F.p1206 = a_p1206;
if ((((F.p1206 >= 48)) && ((F.p1206 <= 57)))) {
{ rt_int rv3093 = rt_range(rt_sub(((rt_int *)(v931).p)[y_ix1(v931, F.p1206)], INT64_C(48)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return rv3093; }
}
if ((((F.p1206 >= 65)) && ((F.p1206 <= 70)))) {
{ rt_int rv3098 = rt_range(rt_sub(((rt_int *)(v931).p)[y_ix1(v931, F.p1206)], INT64_C(55)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return rv3098; }
}
{ rt_int rv3100 = INT64_C(99);
return rv3100; }
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
F.v3106 = INT64_C(10);
F.v3117 = 0;
F.v3120 = INT64_C(0);
F.v3123 = INT64_C(0);
F.v3126 = INT64_C(0);
F.v3129 = INT64_C(0);
F.v3132 = INT64_C(0);
if ((!(v1174 == INT64_C(0)))) {
F.v3106 = v1174;
}
v1174 = INT64_C(0);
F.v3109 = v1168;
while ((yr1205_DigitVal(yr1194_At(v1168)) < F.v3106)) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3111 = v1168;
F.v3113 = v1168;
F.v3115 = v1168;
if ((((yr1194_At(v1168) == 46)) && ((!(yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 46))))) {
F.v3117 = 1;
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3113 = v1168;
while ((yr1205_DigitVal(yr1194_At(v1168)) < F.v3106)) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3115 = v1168;
}
if ((yr1194_At(v1168) == 80)) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3129 = INT64_C(1);
if ((((((yr1194_At(v1168) == 45)) || ((yr1194_At(v1168) == 43)))) && yr974_IsDigit(yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))) {
if ((yr1194_At(v1168) == 45)) {
F.v3129 = INT64_C(-1);
}
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3126 = INT64_C(0);
while (yr974_IsDigit(yr1194_At(v1168))) {
F.v3126 = rt_range(rt_add((rt_mul(F.v3126, INT64_C(10))), yr1205_DigitVal(yr1194_At(v1168))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3126 = rt_range(rt_mul(F.v3126, F.v3129), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3120 = INT64_C(0);
{ rt_int hi3175 = rt_sub(F.v3111, INT64_C(1));
for (rt_int i3174 = F.v3109; i3174 <= hi3175; i3174++) { F.c_3173 = i3174;
F.v3120 = rt_range(rt_add((rt_mul(F.v3120, F.v3106)), yr1205_DigitVal(((unsigned char *)(v883).p)[y_ix1(v883, F.c_3173)])), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3174 == hi3175) break;
}}
F.v3132 = rt_range(rt_sub(F.v3115, F.v3113), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
{ rt_int hi3185 = rt_sub(F.v3115, INT64_C(1));
for (rt_int i3184 = F.v3113; i3184 <= hi3185; i3184++) { F.c_3183 = i3184;
F.v3120 = rt_range(rt_add((rt_mul(F.v3120, F.v3106)), yr1205_DigitVal(((unsigned char *)(v883).p)[y_ix1(v883, F.c_3183)])), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3184 == hi3185) break;
}}
yr986_SB();
yr997_SA(y_str("(", 1));
if (F.p1219) {
yr997_SA(y_str("-", 1));
}
yr997_SA(y_str("(double)", 8));
yr1010_SI(F.v3120);
yr997_SA(y_str(" * pow(", 7));
yr1010_SI(F.v3106);
yr997_SA(y_str(", ", 2));
yr1010_SI(rt_range(rt_sub(F.v3126, F.v3132), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr997_SA(y_str("))", 2));
F.v3135 = yr1016_SE();
yr1187_AddTok(v189, F.v3135);
return;
}
if (F.v3117) {
if ((!(F.v3106 == INT64_C(10)))) {
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
{ rt_int hi3213 = rt_sub(v1168, INT64_C(1));
for (rt_int i3212 = F.v3109; i3212 <= hi3213; i3212++) { F.c_3211 = i3212;
yr991_SC(((unsigned char *)(v883).p)[y_ix1(v883, F.c_3211)]);
if (i3212 == hi3213) break;
}}
F.v3135 = yr1016_SE();
yr1187_AddTok(v192, F.v3135);
return;
}
F.v3120 = INT64_C(0);
{ rt_int hi3221 = rt_sub(F.v3111, INT64_C(1));
for (rt_int i3220 = F.v3109; i3220 <= hi3221; i3220++) { F.c_3219 = i3220;
F.v3123 = yr1205_DigitVal(((unsigned char *)(v883).p)[y_ix1(v883, F.c_3219)]);
if ((F.v3120 > (rt_div((rt_sub(v876, F.v3123)), F.v3106)))) {
yr1211_LexError(y_str("integer literal too large", 25));
}
F.v3120 = rt_range(rt_add((rt_mul(F.v3120, F.v3106)), F.v3123), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3220 == hi3221) break;
}}
if (F.p1219) {
F.v3120 = rt_range(rt_neg(F.v3120), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yr1187_AddTok(v186, F.v3120);
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
F.v3232 = v1168;
F.v3234 = INT64_C(0);
F.v3236 = 1;
while (F.v3236) {
if (((((yr1194_At(F.v3232) == 32)) || ((yr1194_At(F.v3232) == 9))) || ((yr1194_At(F.v3232) == 13)))) {
F.v3232 = rt_range(rt_add(F.v3232, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr1194_At(F.v3232) == 10)) {
F.v3234 = rt_range(rt_add(F.v3234, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3232 = rt_range(rt_add(F.v3232, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v3236 = 0;
}
}
if ((!(yr1194_At(F.v3232) == 34))) {
goto yl_3237;
}
v1171 = rt_range(rt_add(v1171, F.v3234), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1168 = F.v3232;
}
yl_3237: ;
F.v3230 = yr1016_SE();
yr1187_AddTok(v198, F.v3230);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1229_Lex(void) {
struct yf1230 F;
memset((void *)&F, 0, sizeof F);
v1168 = v1162;
while ((v1168 <= v1165)) {
F.v3265 = ((unsigned char *)(v883).p)[y_ix1(v883, v1168)];
if ((F.v3265 == 10)) {
v1171 = rt_range(rt_add(v1171, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((((F.v3265 == 32)) || ((F.v3265 == 9))) || ((F.v3265 == 13))) || ((F.v3265 == 12)))) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v3265 == 40)) && ((yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 42)))) {
v1168 = rt_range(rt_add(v1168, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!((((yr1194_At(v1168) == 42)) && ((yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 41)))))) {
if ((((yr1194_At(v1168) == 10)) || ((v1168 > v1165)))) {
yr1211_LexError(y_str("a comment must close on its line", 32));
}
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1168 = rt_range(rt_add(v1168, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr974_IsDigit(F.v3265) || ((((v1174 == INT64_C(16))) && ((yr1205_DigitVal(F.v3265) < INT64_C(16))))))) {
yr1218_LexNumber(0);
} else if (((((((F.v3265 == 45)) || ((F.v3265 == 43)))) && (!yr1200_EndsOperand())) && ((yr974_IsDigit(yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || ((((v1174 == INT64_C(16))) && ((yr1205_DigitVal(yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) < INT64_C(16))))))))) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1218_LexNumber((F.v3265 == 45));
} else if (yr968_IsLetter(F.v3265)) {
F.v3267 = v1168;
while ((yr968_IsLetter(yr1194_At(v1168)) || yr974_IsDigit(yr1194_At(v1168)))) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3275 = yr1028_Intern(F.v3267, rt_range(rt_sub(v1168, F.v3267), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((F.v3275 == v222)) {
v1174 = INT64_C(2);
} else if ((F.v3275 == v225)) {
v1174 = INT64_C(8);
} else if ((F.v3275 == v228)) {
v1174 = INT64_C(10);
} else if ((F.v3275 == v231)) {
v1174 = INT64_C(16);
} else if ((F.v3275 <= v462)) {
yr1187_AddTok(v180, F.v3275);
} else {
yr1187_AddTok(v177, F.v3275);
}
} else if ((F.v3265 == 39)) {
F.v3267 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3269 = F.v3267;
while ((!(yr1194_At(F.v3269) == 39))) {
if (((((yr1194_At(F.v3269) == 10)) || ((yr1194_At(F.v3269) == 34))) || ((F.v3269 > v1165)))) {
yr1211_LexError(y_str("bad character literal", 21));
}
F.v3269 = rt_range(rt_add(F.v3269, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v3269 == F.v3267)) {
yr1211_LexError(y_str("empty character literal", 23));
}
F.v3275 = yr1028_Intern(F.v3267, rt_range(rt_sub(F.v3269, F.v3267), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1187_AddTok(v195, F.v3275);
v1168 = rt_range(rt_add(F.v3269, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v3265 == 34)) {
yr1224_LexString();
} else {
F.v3271 = INT64_C(0);
F.v3269 = rt_range(rt_add(v462, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((F.v3271 == INT64_C(0))) && ((F.v3269 <= v591)))) {
F.v3273 = ((rt_int *)(v890).p)[y_ix1(v890, F.v3269)];
F.v3279 = 1;
{ rt_int hi3354 = rt_sub(F.v3273, INT64_C(1));
for (rt_int i3353 = INT64_C(0); i3353 <= hi3354; i3353++) { F.c_3352 = i3353;
if ((!(yr1194_At(rt_range(rt_add(v1168, F.c_3352), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == ((unsigned char *)(v883).p)[y_ix1(v883, rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.v3269)], F.c_3352))]))) {
F.v3279 = 0;
}
if (i3353 == hi3354) break;
}}
if (F.v3279) {
F.v3271 = F.v3269;
}
F.v3269 = rt_range(rt_add(F.v3269, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v3271 == INT64_C(0))) {
yr1211_LexError(y_str("a character that is not in the language", 39));
}
yr1187_AddTok(v183, F.v3271);
v1168 = rt_range(rt_add(v1168, ((rt_int *)(v890).p)[y_ix1(v890, F.v3271)]), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
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
({ F.v3368 = rt_alloc(sizeof(yR95)); });
(*(yR95 *)rt_nil_check(F.v3368)) = ((yR95){ .f_kind = F.p1246, .f_line = F.p1247, .f_ival = INT64_C(0), .f_flag = INT64_C(0), .f_name = INT64_C(0), .f_text = INT64_C(0), .f_a = ((void *)0), .f_b = ((void *)0), .f_c = ((void *)0), .f_d = ((void *)0), .f_e = ((void *)0), .f_next = ((void *)0), .f_rep = ((void *)0), .f_sym = ((void *)0) });
{ void * rv3373 = F.v3368;
return rv3373; }
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
F.v3381 = INT64_C(0);
F.v3384 = F.p1261;
while ((!(F.v3384 == ((void *)0)))) {
F.v3381 = rt_range(rt_add(F.v3381, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3384 = ((*(yR95 *)rt_nil_check(F.v3384))).f_next;
}
{ rt_int rv3387 = F.v3381;
return rv3387; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1266_TK(void) {
struct yf1267 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv3389 = ((rt_int *)(v1153).p)[y_ix1(v1153, v1234)];
return rv3389; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1271_TV(void) {
struct yf1272 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv3391 = ((rt_int *)(v1155).p)[y_ix1(v1155, v1234)];
return rv3391; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1276_TLn(void) {
struct yf1277 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv3393 = ((rt_int *)(v1157).p)[y_ix1(v1157, v1234)];
return rv3393; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1281_IsAt(rt_int a_p1282, rt_int a_p1283) {
struct yf1284 F;
memset((void *)&F, 0, sizeof F);
F.p1282 = a_p1282;
F.p1283 = a_p1283;
F.v3398 = ((rt_int *)(v1153).p)[y_ix1(v1153, rt_add(v1234, F.p1282))];
{ rt_int rv3401 = (((((F.v3398 == v180)) || ((F.v3398 == v183)))) && ((((rt_int *)(v1155).p)[y_ix1(v1155, rt_add(v1234, F.p1282))] == F.p1283)));
return rv3401; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1288_Is(rt_int a_p1289) {
struct yf1290 F;
memset((void *)&F, 0, sizeof F);
F.p1289 = a_p1289;
{ rt_int rv3405 = yr1281_IsAt(INT64_C(0), F.p1289);
return rv3405; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1294_IsIdAt(rt_int a_p1295) {
struct yf1296 F;
memset((void *)&F, 0, sizeof F);
F.p1295 = a_p1295;
{ rt_int rv3409 = (((rt_int *)(v1153).p)[y_ix1(v1153, rt_add(v1234, F.p1295))] == v177);
return rv3409; }
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
{ rt_int rv3416 = 1;
return rv3416; }
}
{ rt_int rv3418 = 0;
return rv3418; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1311_TokText(void) {
struct yf1312 F;
memset((void *)&F, 0, sizeof F);
F.v3421 = yr1266_TK();
if ((((((F.v3421 == v177)) || ((F.v3421 == v180))) || ((F.v3421 == v183))) || ((F.v3421 == v195)))) {
{ rt_int rv3422 = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
return rv3422; }
}
if ((F.v3421 == v174)) {
{ rt_int rv3424 = yr1021_T(y_str("the end of the text", 19));
return rv3424; }
}
if ((F.v3421 == v186)) {
yr986_SB();
yr1010_SI(yr1271_TV());
{ rt_int rv3425 = yr1016_SE();
return rv3425; }
}
{ rt_int rv3427 = yr1021_T(y_str("a literal", 9));
return rv3427; }
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
F.v3431 = yr1016_SE();
yr1117_Fail(yr1276_TLn(), F.v3431);
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
F.v3436 = yr1016_SE();
yr1117_Fail(yr1276_TLn(), F.v3436);
}
F.v3436 = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
yr1300_Skip();
{ rt_int rv3438 = F.v3436;
return rv3438; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1327_CloseName(rt_int a_p1328, rt_int a_p1329) {
struct yf1330 F;
memset((void *)&F, 0, sizeof F);
F.p1328 = a_p1328;
F.p1329 = a_p1329;
if (((((yr1266_TK() == v177)) || ((yr1266_TK() == v180))) || ((yr1266_TK() == v183)))) {
F.v3443 = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
if ((F.v3443 == F.p1328)) {
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
F.v3447 = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
if ((yr1266_TK() == v177)) {
yr1300_Skip();
{ rt_int rv3448 = F.v3447;
return rv3448; }
}
if ((((yr1266_TK() == v180)) && (((((((((F.v3447 == v360)) || ((F.v3447 == v207))) || ((F.v3447 == v369))) || ((F.v3447 == v246))) || ((F.v3447 == v348))) || ((F.v3447 == v459))) || ((F.v3447 == v330)))))) {
yr1300_Skip();
{ rt_int rv3449 = F.v3447;
return rv3449; }
}
if (((((((((((((yr1266_TK() == v183)) && ((!(F.v3447 == v564)))) && ((!(F.v3447 == v567)))) && ((!(F.v3447 == v570)))) && ((!(F.v3447 == v573)))) && ((!(F.v3447 == v576)))) && ((!(F.v3447 == v579)))) && ((!(F.v3447 == v582)))) && ((!(F.v3447 == v585)))) && ((!(F.v3447 == v507)))) && ((!(F.v3447 == v504))))) {
yr1300_Skip();
{ rt_int rv3450 = F.v3447;
return rv3450; }
}
yr1124_FailS(yr1276_TLn(), y_str("expected a name", 15));
{ rt_int rv3453 = INT64_C(0);
return rv3453; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1339_IsLabel(rt_int a_p1340) {
struct yf1341 F;
memset((void *)&F, 0, sizeof F);
F.p1340 = a_p1340;
F.v3457 = v1237;
while ((!(F.v3457 == ((void *)0)))) {
if ((((*(yR95 *)rt_nil_check(F.v3457))).f_name == F.p1340)) {
{ rt_int rv3459 = 1;
return rv3459; }
}
F.v3457 = ((*(yR95 *)rt_nil_check(F.v3457))).f_next;
}
{ rt_int rv3461 = 0;
return rv3461; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1345_ImportItem(void) {
struct yf1346 F;
memset((void *)&F, 0, sizeof F);
F.v3464 = yr1245_NewNode(v597, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3464))).f_name = yr1334_ExtendedId();
if ((yr1294_IsIdAt(INT64_C(0)) && ((yr1271_TV() == v1239)))) {
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3464))).f_text = yr1322_Ident();
}
if (yr1305_Accept(v213)) {
((*(yR95 *)rt_nil_check(F.v3464))).f_ival = yr1334_ExtendedId();
}
{ void * rv3466 = F.v3464;
return rv3466; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1350_ParseModule(void) {
struct yf1351 F;
memset((void *)&F, 0, sizeof F);
F.v3469 = yr1245_NewNode(v594, yr1276_TLn());
F.v3471 = ((void *)0);
F.v3473 = ((void *)0);
F.v3475 = ((void *)0);
if (yr1305_Accept(v354)) {
((*(yR95 *)rt_nil_check(F.v3469))).f_flag = INT64_C(1);
} else {
yr1316_Expect(v351);
}
((*(yR95 *)rt_nil_check(F.v3469))).f_name = yr1322_Ident();
while (yr1305_Accept(v327)) {
for (;;) {
F.v3471 = yr1345_ImportItem();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3469))).f_a, &F.v3473, F.v3471);
if ((!yr1305_Accept(v576))) {
goto yl_3479;
}
}
yl_3479: ;
yr1316_Expect(v579);
}
while (yr1305_Accept(v306)) {
F.v3477 = INT64_C(0);
if ((((yr1288_Is(v366) || yr1288_Is(v444)) || yr1288_Is(v399)) || yr1288_Is(v453))) {
F.v3477 = yr1271_TV();
yr1300_Skip();
}
for (;;) {
F.v3471 = yr1345_ImportItem();
((*(yR95 *)rt_nil_check(F.v3471))).f_flag = F.v3477;
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3469))).f_b, &F.v3475, F.v3471);
if ((!yr1305_Accept(v576))) {
goto yl_3481;
}
}
yl_3481: ;
yr1316_Expect(v579);
}
((*(yR95 *)rt_nil_check(F.v3469))).f_c = yr1360_ParseBlock();
if ((((*(yR95 *)rt_nil_check(F.v3469))).f_flag == INT64_C(1))) {
yr1316_Expect(v279);
} else {
yr1316_Expect(v276);
}
yr1327_CloseName(((*(yR95 *)rt_nil_check(F.v3469))).f_name, ((*(yR95 *)rt_nil_check(F.v3469))).f_line);
{ void * rv3483 = F.v3469;
return rv3483; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1355_IsDeclWord(void) {
struct yf1356 F;
memset((void *)&F, 0, sizeof F);
if ((!(yr1266_TK() == v180))) {
{ rt_int rv3488 = 0;
return rv3488; }
}
F.v3486 = yr1271_TV();
{ rt_int rv3489 = (((((((((((((F.v3486 == v240)) || ((F.v3486 == v453))) || ((F.v3486 == v342))) || ((F.v3486 == v447))) || ((F.v3486 == v408))) || ((F.v3486 == v318))) || ((F.v3486 == v390))) || ((F.v3486 == v351))) || ((F.v3486 == v354))) || ((F.v3486 == v435))) || ((F.v3486 == v336))) || ((F.v3486 == v393)));
return rv3489; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1360_ParseBlock(void) {
struct yf1361 F;
memset((void *)&F, 0, sizeof F);
F.v3492 = yr1245_NewNode(v600, yr1276_TLn());
F.v3494 = ((void *)0);
F.v3496 = v1237;
while (yr1355_IsDeclWord()) {
yr1387_ParseDeclGroup(&((*(yR95 *)rt_nil_check(F.v3492))).f_a, &F.v3494);
while (yr1305_Accept(v579)) {
}
}
if (yr1288_Is(v300)) {
((*(yR95 *)rt_nil_check(F.v3492))).f_b = yr1365_ParseHandler();
F.v3498 = ((*(yR95 *)rt_nil_check(F.v3492))).f_b;
if (yr1305_Accept(v579)) {
}
}
((*(yR95 *)rt_nil_check(F.v3492))).f_c = yr1451_ParseStatements(1);
v1237 = F.v3496;
{ void * rv3500 = F.v3492;
return rv3500; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1365_ParseHandler(void) {
struct yf1366 F;
memset((void *)&F, 0, sizeof F);
F.v3503 = yr1245_NewNode(v603, yr1276_TLn());
F.v3505 = ((void *)0);
F.v3507 = ((void *)0);
F.v3509 = ((void *)0);
F.v3511 = ((void *)0);
yr1316_Expect(v300);
while (yr1305_Accept(v237)) {
F.v3505 = yr1245_NewNode(v606, yr1276_TLn());
F.v3511 = ((void *)0);
for (;;) {
F.v3509 = yr1245_NewNode(v639, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3509))).f_name = yr1322_Ident();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3505))).f_a, &F.v3511, F.v3509);
if ((!yr1305_Accept(v576))) {
goto yl_3512;
}
}
yl_3512: ;
yr1316_Expect(v504);
((*(yR95 *)rt_nil_check(F.v3505))).f_b = yr1451_ParseStatements(0);
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3503))).f_a, &F.v3507, F.v3505);
}
if (yr1305_Accept(v252)) {
((*(yR95 *)rt_nil_check(F.v3503))).f_flag = INT64_C(1);
((*(yR95 *)rt_nil_check(F.v3503))).f_b = yr1451_ParseStatements(0);
}
yr1316_Expect(v261);
{ void * rv3516 = F.v3503;
return rv3516; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1370_ParseNames(void) {
struct yf1371 F;
memset((void *)&F, 0, sizeof F);
F.v3519 = ((void *)0);
F.v3521 = ((void *)0);
F.v3523 = ((void *)0);
for (;;) {
F.v3523 = yr1245_NewNode(v639, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3523))).f_name = yr1322_Ident();
if (yr1305_Accept(v219)) {
((*(yR95 *)rt_nil_check(F.v3523))).f_a = yr1513_ParseExpr();
}
yr1252_Link(&F.v3519, &F.v3521, F.v3523);
if ((!yr1305_Accept(v576))) {
goto yl_3524;
}
}
yl_3524: ;
{ void * rv3525 = F.v3519;
return rv3525; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1375_SimpleEntry(rt_int a_p1376) {
struct yf1377 F;
memset((void *)&F, 0, sizeof F);
F.p1376 = a_p1376;
if ((F.p1376 == v240)) {
F.v3529 = yr1245_NewNode(v609, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3529))).f_a = yr1370_ParseNames();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3529))).f_b = yr1416_ParseRep();
yr1316_Expect(v555);
((*(yR95 *)rt_nil_check(F.v3529))).f_c = yr1513_ParseExpr();
} else if ((F.p1376 == v453)) {
F.v3529 = yr1245_NewNode(v612, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3529))).f_a = yr1370_ParseNames();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3529))).f_b = yr1416_ParseRep();
if (yr1305_Accept(v501)) {
((*(yR95 *)rt_nil_check(F.v3529))).f_c = yr1513_ParseExpr();
}
} else if ((F.p1376 == v447)) {
F.v3529 = yr1245_NewNode(v618, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3529))).f_name = yr1322_Ident();
yr1316_Expect(v555);
((*(yR95 *)rt_nil_check(F.v3529))).f_b = yr1436_ParseConcrete1();
} else {
F.v3529 = yr1245_NewNode(v621, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3529))).f_name = yr1322_Ident();
yr1316_Expect(v555);
((*(yR95 *)rt_nil_check(F.v3529))).f_b = yr1416_ParseRep();
}
{ void * rv3530 = F.v3529;
return rv3530; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1381_Continues(rt_int a_p1382) {
struct yf1383 F;
memset((void *)&F, 0, sizeof F);
F.p1382 = a_p1382;
if ((!((yr1288_Is(v579) && yr1294_IsIdAt(INT64_C(1)))))) {
{ rt_int rv3535 = 0;
return rv3535; }
}
if (yr1339_IsLabel(rt_range(((rt_int *)(v1155).p)[y_ix1(v1155, rt_add(v1234, INT64_C(1)))], INT64_C(0), INT64_C(4000000)))) {
{ rt_int rv3539 = 0;
return rv3539; }
}
if ((((F.p1382 == v240)) || ((F.p1382 == v453)))) {
{ rt_int rv3542 = (yr1281_IsAt(INT64_C(2), v576) || yr1281_IsAt(INT64_C(2), v582));
return rv3542; }
}
{ rt_int rv3544 = yr1281_IsAt(INT64_C(2), v555);
return rv3544; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1387_ParseDeclGroup(void * * a_p1388, void * * a_p1389) {
struct yf1390 F;
memset((void *)&F, 0, sizeof F);
F.p1388 = a_p1388;
F.p1389 = a_p1389;
F.v3549 = yr1271_TV();
if ((((((F.v3549 == v240)) || ((F.v3549 == v453))) || ((F.v3549 == v447))) || ((F.v3549 == v408)))) {
yr1300_Skip();
yr1252_Link(&(*F.p1388), &(*F.p1389), yr1375_SimpleEntry(F.v3549));
while (yr1381_Continues(F.v3549)) {
yr1300_Skip();
yr1252_Link(&(*F.p1388), &(*F.p1389), yr1375_SimpleEntry(F.v3549));
}
return;
}
if ((F.v3549 == v342)) {
F.v3551 = yr1245_NewNode(v615, yr1276_TLn());
yr1300_Skip();
F.v3555 = ((void *)0);
for (;;) {
F.v3553 = yr1245_NewNode(v639, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3553))).f_name = yr1322_Ident();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3551))).f_a, &F.v3555, F.v3553);
if ((!yr1305_Accept(v576))) {
goto yl_3556;
}
}
yl_3556: ;
F.v3553 = ((*(yR95 *)rt_nil_check(F.v3551))).f_a;
while ((!(F.v3553 == ((void *)0)))) {
((*(yR95 *)rt_nil_check(F.v3551))).f_b = yr1245_NewNode(v639, ((*(yR95 *)rt_nil_check(F.v3553))).f_line);
((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v3551))).f_b))).f_name = ((*(yR95 *)rt_nil_check(F.v3553))).f_name;
((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v3551))).f_b))).f_next = v1237;
v1237 = ((*(yR95 *)rt_nil_check(F.v3551))).f_b;
F.v3553 = ((*(yR95 *)rt_nil_check(F.v3553))).f_next;
}
((*(yR95 *)rt_nil_check(F.v3551))).f_b = ((void *)0);
yr1252_Link(&(*F.p1388), &(*F.p1389), F.v3551);
return;
}
yr1252_Link(&(*F.p1388), &(*F.p1389), yr1394_ParseDecl());
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1394_ParseDecl(void) {
struct yf1395 F;
memset((void *)&F, 0, sizeof F);
F.v3565 = yr1271_TV();
F.v3567 = yr1276_TLn();
if ((((F.v3565 == v318)) || ((F.v3565 == v390)))) {
F.v3559 = yr1245_NewNode(v624, F.v3567);
yr1300_Skip();
if ((F.v3565 == v318)) {
((*(yR95 *)rt_nil_check(F.v3559))).f_flag = INT64_C(1);
}
if ((yr1288_Is(v309) || yr1288_Is(v405))) {
((*(yR95 *)rt_nil_check(F.v3559))).f_ival = yr1271_TV();
yr1300_Skip();
}
((*(yR95 *)rt_nil_check(F.v3559))).f_name = yr1334_ExtendedId();
yr1399_ParseFormals(F.v3559);
if (yr1305_Accept(v333)) {
((*(yR95 *)rt_nil_check(F.v3559))).f_e = yr1245_NewNode(v639, F.v3567);
}
((*(yR95 *)rt_nil_check(F.v3559))).f_c = yr1360_ParseBlock();
if ((F.v3565 == v318)) {
yr1316_Expect(v267);
} else {
yr1316_Expect(v282);
}
yr1327_CloseName(((*(yR95 *)rt_nil_check(F.v3559))).f_name, F.v3567);
{ void * rv3571 = F.v3559;
return rv3571; }
}
if ((((F.v3565 == v351)) || ((F.v3565 == v354)))) {
{ void * rv3572 = yr1350_ParseModule();
return rv3572; }
}
if ((F.v3565 == v435)) {
F.v3559 = yr1245_NewNode(v630, F.v3567);
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3559))).f_name = yr1322_Ident();
yr1316_Expect(v564);
F.v3563 = ((void *)0);
for (;;) {
F.v3561 = yr1245_NewNode(v639, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3561))).f_name = yr1322_Ident();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3559))).f_a, &F.v3563, F.v3561);
if ((!yr1305_Accept(v576))) {
goto yl_3573;
}
}
yl_3573: ;
yr1316_Expect(v567);
F.v3569 = v1234;
((*(yR95 *)rt_nil_check(F.v3559))).f_b = yr1350_ParseModule();
((*(yR95 *)rt_nil_check(F.v3559))).f_ival = F.v3569;
((*(yR95 *)rt_nil_check(F.v3559))).f_flag = v1234;
yr1316_Expect(v294);
yr1327_CloseName(((*(yR95 *)rt_nil_check(F.v3559))).f_name, F.v3567);
{ void * rv3574 = F.v3559;
return rv3574; }
}
if ((F.v3565 == v336)) {
F.v3559 = yr1245_NewNode(v633, F.v3567);
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3559))).f_name = yr1322_Ident();
yr1316_Expect(v564);
F.v3563 = ((void *)0);
for (;;) {
F.v3561 = yr1245_NewNode(v639, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3561))).f_name = yr1334_ExtendedId();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3559))).f_a, &F.v3563, F.v3561);
if ((!yr1305_Accept(v576))) {
goto yl_3575;
}
}
yl_3575: ;
yr1316_Expect(v567);
{ void * rv3576 = F.v3559;
return rv3576; }
}
if ((F.v3565 == v393)) {
F.v3559 = yr1245_NewNode(v636, F.v3567);
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3559))).f_name = yr1322_Ident();
yr1399_ParseFormals(F.v3559);
if ((!(((*(yR95 *)rt_nil_check(F.v3559))).f_b == ((void *)0)))) {
yr1124_FailS(F.v3567, y_str("a process returns no value", 26));
}
if (yr1305_Accept(v387)) {
((*(yR95 *)rt_nil_check(F.v3559))).f_d = yr1513_ParseExpr();
}
if (yr1305_Accept(v339)) {
((*(yR95 *)rt_nil_check(F.v3559))).f_e = yr1513_ParseExpr();
}
if (yr1305_Accept(v429)) {
F.v3561 = yr1513_ParseExpr();
}
((*(yR95 *)rt_nil_check(F.v3559))).f_c = yr1360_ParseBlock();
yr1316_Expect(v285);
yr1327_CloseName(((*(yR95 *)rt_nil_check(F.v3559))).f_name, F.v3567);
{ void * rv3578 = F.v3559;
return rv3578; }
}
yr1124_FailS(F.v3567, y_str("expected a declaration", 22));
{ void * rv3580 = ((void *)0);
return rv3580; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1399_ParseFormals(void * a_p1400) {
struct yf1401 F;
memset((void *)&F, 0, sizeof F);
F.p1400 = a_p1400;
F.v3584 = ((void *)0);
F.v3586 = ((void *)0);
if (yr1305_Accept(v414)) {
((*(yR95 *)rt_nil_check(F.p1400))).f_b = yr1416_ParseRep();
}
yr1316_Expect(v564);
while ((!yr1288_Is(v567))) {
if (yr1305_Accept(v240)) {
F.v3588 = v867;
} else if (yr1305_Accept(v375)) {
F.v3588 = v870;
} else if (yr1305_Accept(v453)) {
F.v3588 = v873;
} else {
yr1124_FailS(yr1276_TLn(), y_str("a formal parameter is CONST, OUT or VAR", 39));
}
for (;;) {
F.v3584 = yr1245_NewNode(v627, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3584))).f_ival = F.v3588;
((*(yR95 *)rt_nil_check(F.v3584))).f_a = yr1370_ParseNames();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3584))).f_b = yr1405_ParseFormalRep();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.p1400))).f_a, &F.v3586, F.v3584);
if ((!((((yr1288_Is(v579) || yr1288_Is(v576))) && yr1294_IsIdAt(INT64_C(1)))))) {
goto yl_3590;
}
yr1300_Skip();
}
yl_3590: ;
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
F.v3594 = yr1245_NewNode(v666, yr1276_TLn());
yr1300_Skip();
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3594))).f_a = yr1513_ParseExpr();
yr1300_Skip();
yr1316_Expect(v363);
((*(yR95 *)rt_nil_check(F.v3594))).f_b = yr1416_ParseRep();
yr1316_Expect(v567);
{ void * rv3600 = F.v3594;
return rv3600; }
}
if (yr1288_Is(v432)) {
F.v3594 = yr1245_NewNode(v669, yr1276_TLn());
yr1300_Skip();
{ void * rv3601 = F.v3594;
return rv3601; }
}
{ void * rv3602 = yr1416_ParseRep();
return rv3602; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1410_IsStructWord(rt_int a_p1411) {
struct yf1412 F;
memset((void *)&F, 0, sizeof F);
F.p1411 = a_p1411;
F.v3606 = ((rt_int *)(v1155).p)[y_ix1(v1155, rt_add(v1234, F.p1411))];
if ((!(((rt_int *)(v1153).p)[y_ix1(v1153, rt_add(v1234, F.p1411))] == v180))) {
{ rt_int rv3610 = 0;
return rv3610; }
}
{ rt_int rv3611 = (((((((((F.v3606 == v450)) || ((F.v3606 == v372))) || ((F.v3606 == v204))) || ((F.v3606 == v210))) || ((F.v3606 == v402))) || ((F.v3606 == v312))) || ((F.v3606 == v381))) || ((F.v3606 == v423)));
return rv3611; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1416_ParseRep(void) {
struct yf1417 F;
memset((void *)&F, 0, sizeof F);
if ((yr1294_IsIdAt(INT64_C(0)) && ((yr1410_IsStructWord(INT64_C(1)) || ((yr1294_IsIdAt(INT64_C(1)) && yr1281_IsAt(INT64_C(2), v570))))))) {
F.v3614 = yr1322_Ident();
F.v3616 = yr1421_ParseConcrete();
((*(yR95 *)rt_nil_check(F.v3616))).f_text = F.v3614;
{ void * rv3621 = F.v3616;
return rv3621; }
}
{ void * rv3622 = yr1421_ParseConcrete();
return rv3622; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1421_ParseConcrete(void) {
struct yf1422 F;
memset((void *)&F, 0, sizeof F);
F.v3625 = yr1436_ParseConcrete1();
if (yr1305_Accept(v378)) {
if (((((yr1266_TK() == v186)) || ((yr1266_TK() == v177))) || yr1288_Is(v564))) {
F.v3627 = yr1513_ParseExpr();
}
}
if (yr1305_Accept(v201)) {
F.v3627 = yr1513_ParseExpr();
}
{ void * rv3628 = F.v3625;
return rv3628; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1426_ParseIds(void) {
struct yf1427 F;
memset((void *)&F, 0, sizeof F);
F.v3631 = ((void *)0);
F.v3633 = ((void *)0);
F.v3635 = ((void *)0);
for (;;) {
F.v3635 = yr1245_NewNode(v639, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3635))).f_name = yr1322_Ident();
yr1252_Link(&F.v3631, &F.v3633, F.v3635);
if ((!yr1305_Accept(v576))) {
goto yl_3636;
}
}
yl_3636: ;
{ void * rv3637 = F.v3631;
return rv3637; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1431_ParseFieldGroups(void) {
struct yf1432 F;
memset((void *)&F, 0, sizeof F);
F.v3640 = ((void *)0);
F.v3642 = ((void *)0);
F.v3644 = ((void *)0);
while ((yr1288_Is(v240) || yr1288_Is(v453))) {
F.v3646 = yr1271_TV();
yr1300_Skip();
for (;;) {
F.v3644 = yr1245_NewNode(v675, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3644))).f_ival = F.v3646;
((*(yR95 *)rt_nil_check(F.v3644))).f_a = yr1370_ParseNames();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3644))).f_b = yr1416_ParseRep();
yr1252_Link(&F.v3640, &F.v3642, F.v3644);
if ((!((yr1288_Is(v579) && yr1294_IsIdAt(INT64_C(1)))))) {
goto yl_3647;
}
yr1300_Skip();
}
yl_3647: ;
if ((!yr1305_Accept(v579))) {
{ void * rv3649 = F.v3640;
return rv3649; }
}
}
{ void * rv3650 = F.v3640;
return rv3650; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1436_ParseConcrete1(void) {
struct yf1437 F;
memset((void *)&F, 0, sizeof F);
F.v3667 = yr1276_TLn();
if ((yr1266_TK() == v177)) {
F.v3653 = yr1245_NewNode(v642, F.v3667);
((*(yR95 *)rt_nil_check(F.v3653))).f_name = yr1322_Ident();
((*(yR95 *)rt_nil_check(F.v3653))).f_a = yr1441_ParseQualifier();
{ void * rv3668 = F.v3653;
return rv3668; }
}
if ((!(yr1266_TK() == v180))) {
yr1124_FailS(F.v3667, y_str("expected a representation", 25));
}
F.v3665 = yr1271_TV();
if ((((F.v3665 == v450)) || ((F.v3665 == v372)))) {
F.v3653 = yr1245_NewNode(v645, F.v3667);
if ((F.v3665 == v372)) {
((*(yR95 *)rt_nil_check(F.v3653))).f_flag = INT64_C(1);
}
yr1300_Skip();
yr1316_Expect(v564);
((*(yR95 *)rt_nil_check(F.v3653))).f_a = yr1426_ParseIds();
yr1316_Expect(v567);
((*(yR95 *)rt_nil_check(F.v3653))).f_b = yr1441_ParseQualifier();
{ void * rv3671 = F.v3653;
return rv3671; }
}
if ((F.v3665 == v204)) {
F.v3653 = yr1245_NewNode(v648, F.v3667);
yr1300_Skip();
yr1316_Expect(v564);
F.v3663 = ((void *)0);
for (;;) {
if ((!(yr1266_TK() == v195))) {
yr1124_FailS(yr1276_TLn(), y_str("an ALPHABET lists character literals", 36));
}
F.v3661 = yr1245_NewNode(v738, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3661))).f_text = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
yr1300_Skip();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3653))).f_a, &F.v3663, F.v3661);
if ((!yr1305_Accept(v576))) {
goto yl_3672;
}
}
yl_3672: ;
yr1316_Expect(v567);
((*(yR95 *)rt_nil_check(F.v3653))).f_b = yr1441_ParseQualifier();
{ void * rv3674 = F.v3653;
return rv3674; }
}
if ((F.v3665 == v210)) {
F.v3653 = yr1245_NewNode(v651, F.v3667);
yr1300_Skip();
yr1316_Expect(v564);
F.v3663 = ((void *)0);
for (;;) {
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3653))).f_a, &F.v3663, yr1416_ParseRep());
if ((!yr1305_Accept(v576))) {
goto yl_3675;
}
}
yl_3675: ;
yr1316_Expect(v363);
((*(yR95 *)rt_nil_check(F.v3653))).f_b = yr1416_ParseRep();
yr1316_Expect(v567);
{ void * rv3676 = F.v3653;
return rv3676; }
}
if ((F.v3665 == v402)) {
F.v3653 = yr1245_NewNode(v654, F.v3667);
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3653))).f_a = yr1431_ParseFieldGroups();
if (yr1305_Accept(v420)) {
F.v3655 = yr1245_NewNode(v678, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3655))).f_name = yr1322_Ident();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3655))).f_b = yr1416_ParseRep();
F.v3659 = ((void *)0);
while (yr1305_Accept(v237)) {
F.v3657 = yr1245_NewNode(v681, yr1276_TLn());
F.v3663 = ((void *)0);
for (;;) {
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3657))).f_a, &F.v3663, yr1513_ParseExpr());
if ((!yr1305_Accept(v576))) {
goto yl_3677;
}
}
yl_3677: ;
yr1316_Expect(v504);
((*(yR95 *)rt_nil_check(F.v3657))).f_b = yr1431_ParseFieldGroups();
while (yr1305_Accept(v579)) {
}
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3655))).f_a, &F.v3659, F.v3657);
}
yr1316_Expect(v291);
if (yr1305_Accept(v579)) {
}
((*(yR95 *)rt_nil_check(F.v3653))).f_b = F.v3655;
}
yr1316_Expect(v288);
{ void * rv3678 = F.v3653;
return rv3678; }
}
if (((((F.v3665 == v312)) || ((F.v3665 == v381))) || ((F.v3665 == v423)))) {
if ((F.v3665 == v312)) {
F.v3653 = yr1245_NewNode(v657, F.v3667);
} else if ((F.v3665 == v381)) {
F.v3653 = yr1245_NewNode(v660, F.v3667);
} else {
F.v3653 = yr1245_NewNode(v663, F.v3667);
}
yr1300_Skip();
yr1316_Expect(v564);
((*(yR95 *)rt_nil_check(F.v3653))).f_a = yr1416_ParseRep();
yr1316_Expect(v567);
{ void * rv3679 = F.v3653;
return rv3679; }
}
yr1124_FailS(F.v3667, y_str("expected a representation", 25));
{ void * rv3681 = ((void *)0);
return rv3681; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1441_ParseQualifier(void) {
struct yf1442 F;
memset((void *)&F, 0, sizeof F);
if ((!yr1288_Is(v570))) {
{ void * rv3685 = ((void *)0);
return rv3685; }
}
F.v3684 = yr1245_NewNode(v672, yr1276_TLn());
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3684))).f_a = yr1513_ParseExpr();
yr1316_Expect(v507);
((*(yR95 *)rt_nil_check(F.v3684))).f_b = yr1513_ParseExpr();
yr1316_Expect(v573);
if (yr1305_Accept(v417)) {
((*(yR95 *)rt_nil_check(F.v3684))).f_c = yr1513_ParseExpr();
} else if (yr1305_Accept(v384)) {
((*(yR95 *)rt_nil_check(F.v3684))).f_d = yr1513_ParseExpr();
}
{ void * rv3686 = F.v3684;
return rv3686; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1446_IsStop(void) {
struct yf1447 F;
memset((void *)&F, 0, sizeof F);
if ((yr1266_TK() == v174)) {
{ rt_int rv3691 = 1;
return rv3691; }
}
if ((!(yr1266_TK() == v180))) {
{ rt_int rv3693 = 0;
return rv3693; }
}
F.v3689 = yr1271_TV();
{ rt_int rv3694 = ((((((((((((((((F.v3689 == v255)) || ((F.v3689 == v252))) || ((F.v3689 == v270))) || ((F.v3689 == v237))) || ((F.v3689 == v291))) || ((F.v3689 == v297))) || ((F.v3689 == v264))) || ((F.v3689 == v273))) || ((F.v3689 == v258))) || ((F.v3689 == v261))) || ((F.v3689 == v282))) || ((F.v3689 == v267))) || ((F.v3689 == v285))) || ((F.v3689 == v276))) || ((F.v3689 == v279)));
return rv3694; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1451_ParseStatements(rt_int a_p1452) {
struct yf1453 F;
memset((void *)&F, 0, sizeof F);
F.p1452 = a_p1452;
F.v3698 = ((void *)0);
F.v3700 = ((void *)0);
F.v3702 = ((void *)0);
for (;;) {
while (yr1305_Accept(v579)) {
}
if (yr1446_IsStop()) {
goto yl_3705;
}
F.v3704 = INT64_C(0);
if (((F.p1452 && yr1294_IsIdAt(INT64_C(0))) && yr1281_IsAt(INT64_C(1), v582))) {
F.v3704 = yr1322_Ident();
yr1300_Skip();
}
F.v3702 = yr1457_ParseStatement();
((*(yR95 *)rt_nil_check(F.v3702))).f_text = F.v3704;
yr1252_Link(&F.v3698, &F.v3700, F.v3702);
if ((!yr1288_Is(v579))) {
goto yl_3705;
}
}
yl_3705: ;
{ void * rv3709 = F.v3698;
return rv3709; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1457_ParseStatement(void) {
struct yf1458 F;
memset((void *)&F, 0, sizeof F);
F.v3726 = yr1276_TLn();
if ((yr1266_TK() == v180)) {
F.v3724 = yr1271_TV();
if ((F.v3724 == v216)) {
yr1300_Skip();
F.v3712 = yr1245_NewNode(v690, F.v3726);
((*(yR95 *)rt_nil_check(F.v3712))).f_a = yr1513_ParseExpr();
{ void * rv3727 = F.v3712;
return rv3727; }
}
if ((F.v3724 == v321)) {
yr1300_Skip();
F.v3712 = yr1245_NewNode(v693, F.v3726);
((*(yR95 *)rt_nil_check(F.v3712))).f_name = yr1322_Ident();
{ void * rv3728 = F.v3712;
return rv3728; }
}
if ((F.v3724 == v303)) {
yr1300_Skip();
F.v3712 = yr1245_NewNode(v696, F.v3726);
((*(yR95 *)rt_nil_check(F.v3712))).f_name = yr1322_Ident();
{ void * rv3729 = F.v3712;
return rv3729; }
}
if ((F.v3724 == v411)) {
yr1300_Skip();
F.v3712 = yr1245_NewNode(v699, F.v3726);
if ((!((yr1288_Is(v579) || yr1446_IsStop())))) {
((*(yR95 *)rt_nil_check(F.v3712))).f_a = yr1513_ParseExpr();
}
{ void * rv3730 = F.v3712;
return rv3730; }
}
if ((F.v3724 == v438)) {
yr1300_Skip();
{ void * rv3731 = yr1245_NewNode(v702, F.v3726);
return rv3731; }
}
if ((F.v3724 == v396)) {
yr1300_Skip();
F.v3712 = yr1245_NewNode(v705, F.v3726);
if (yr1294_IsIdAt(INT64_C(0))) {
((*(yR95 *)rt_nil_check(F.v3712))).f_name = yr1322_Ident();
}
{ void * rv3733 = F.v3712;
return rv3733; }
}
if ((F.v3724 == v324)) {
yr1300_Skip();
F.v3712 = yr1245_NewNode(v708, F.v3726);
F.v3716 = ((void *)0);
F.v3714 = yr1245_NewNode(v726, F.v3726);
((*(yR95 *)rt_nil_check(F.v3714))).f_a = yr1513_ParseExpr();
yr1316_Expect(v441);
((*(yR95 *)rt_nil_check(F.v3714))).f_b = yr1451_ParseStatements(0);
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3712))).f_a, &F.v3716, F.v3714);
while (yr1288_Is(v255)) {
F.v3714 = yr1245_NewNode(v726, yr1276_TLn());
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3714))).f_a = yr1513_ParseExpr();
yr1316_Expect(v441);
((*(yR95 *)rt_nil_check(F.v3714))).f_b = yr1451_ParseStatements(0);
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3712))).f_a, &F.v3716, F.v3714);
}
if (yr1305_Accept(v252)) {
((*(yR95 *)rt_nil_check(F.v3712))).f_flag = INT64_C(1);
((*(yR95 *)rt_nil_check(F.v3712))).f_b = yr1451_ParseStatements(0);
}
yr1316_Expect(v270);
{ void * rv3738 = F.v3712;
return rv3738; }
}
if ((F.v3724 == v420)) {
yr1300_Skip();
F.v3712 = yr1245_NewNode(v711, F.v3726);
((*(yR95 *)rt_nil_check(F.v3712))).f_a = yr1513_ParseExpr();
F.v3716 = ((void *)0);
while (yr1288_Is(v237)) {
F.v3714 = yr1245_NewNode(v726, yr1276_TLn());
yr1300_Skip();
F.v3720 = ((void *)0);
for (;;) {
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3714))).f_a, &F.v3720, yr1513_ParseExpr());
if ((!yr1305_Accept(v576))) {
goto yl_3739;
}
}
yl_3739: ;
yr1316_Expect(v504);
((*(yR95 *)rt_nil_check(F.v3714))).f_b = yr1451_ParseStatements(0);
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3712))).f_b, &F.v3716, F.v3714);
}
if (yr1305_Accept(v252)) {
((*(yR95 *)rt_nil_check(F.v3712))).f_flag = INT64_C(1);
((*(yR95 *)rt_nil_check(F.v3712))).f_c = yr1451_ParseStatements(0);
}
yr1316_Expect(v291);
{ void * rv3743 = F.v3712;
return rv3743; }
}
if ((F.v3724 == v456)) {
yr1300_Skip();
F.v3712 = yr1245_NewNode(v714, F.v3726);
((*(yR95 *)rt_nil_check(F.v3712))).f_a = yr1513_ParseExpr();
yr1316_Expect(v249);
((*(yR95 *)rt_nil_check(F.v3712))).f_b = yr1451_ParseStatements(0);
yr1316_Expect(v297);
{ void * rv3745 = F.v3712;
return rv3745; }
}
if ((F.v3724 == v315)) {
yr1300_Skip();
F.v3712 = yr1245_NewNode(v717, F.v3726);
((*(yR95 *)rt_nil_check(F.v3712))).f_name = yr1322_Ident();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3712))).f_a = yr1416_ParseRep();
yr1316_Expect(v249);
((*(yR95 *)rt_nil_check(F.v3712))).f_b = yr1451_ParseStatements(0);
yr1316_Expect(v264);
{ void * rv3747 = F.v3712;
return rv3747; }
}
if ((F.v3724 == v345)) {
yr1300_Skip();
F.v3712 = yr1245_NewNode(v720, F.v3726);
((*(yR95 *)rt_nil_check(F.v3712))).f_name = yr1322_Ident();
((*(yR95 *)rt_nil_check(F.v3712))).f_b = yr1451_ParseStatements(0);
yr1316_Expect(v273);
yr1327_CloseName(((*(yR95 *)rt_nil_check(F.v3712))).f_name, F.v3726);
{ void * rv3749 = F.v3712;
return rv3749; }
}
if ((((F.v3724 == v234)) || ((F.v3724 == v426)))) {
F.v3712 = yr1245_NewNode(v723, F.v3726);
if (yr1305_Accept(v426)) {
((*(yR95 *)rt_nil_check(F.v3712))).f_flag = INT64_C(1);
}
yr1316_Expect(v234);
((*(yR95 *)rt_nil_check(F.v3712))).f_a = yr1360_ParseBlock();
yr1316_Expect(v258);
{ void * rv3751 = F.v3712;
return rv3751; }
}
}
F.v3722 = yr1544_ParseDesignator();
if (yr1305_Accept(v501)) {
F.v3712 = yr1245_NewNode(v684, F.v3726);
((*(yR95 *)rt_nil_check(F.v3712))).f_a = F.v3722;
((*(yR95 *)rt_nil_check(F.v3712))).f_b = yr1513_ParseExpr();
{ void * rv3752 = F.v3712;
return rv3752; }
}
if ((!(((*(yR95 *)rt_nil_check(F.v3722))).f_kind == v750))) {
yr1124_FailS(F.v3726, y_str("expected a statement", 20));
}
F.v3712 = yr1245_NewNode(v687, F.v3726);
((*(yR95 *)rt_nil_check(F.v3712))).f_a = F.v3722;
{ void * rv3754 = F.v3712;
return rv3754; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1462_OpAt(void) {
struct yf1463 F;
memset((void *)&F, 0, sizeof F);
if ((((yr1266_TK() == v183)) || ((yr1266_TK() == v180)))) {
{ rt_int rv3756 = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
return rv3756; }
}
{ rt_int rv3758 = INT64_C(0);
return rv3758; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1467_IsRel(rt_int a_p1468) {
struct yf1469 F;
memset((void *)&F, 0, sizeof F);
F.p1468 = a_p1468;
{ rt_int rv3761 = ((((((((((((((((((((F.p1468 == v330)) || ((F.p1468 == v540))) || ((F.p1468 == v555))) || ((F.p1468 == v558))) || ((F.p1468 == v510))) || ((F.p1468 == v561))) || ((F.p1468 == v513))) || ((F.p1468 == v516))) || ((F.p1468 == v471))) || ((F.p1468 == v519))) || ((F.p1468 == v474))) || ((F.p1468 == v522))) || ((F.p1468 == v483))) || ((F.p1468 == v477))) || ((F.p1468 == v465))) || ((F.p1468 == v525))) || ((F.p1468 == v486))) || ((F.p1468 == v480))) || ((F.p1468 == v468)));
return rv3761; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1473_IsAssocMul(rt_int a_p1474) {
struct yf1475 F;
memset((void *)&F, 0, sizeof F);
F.p1474 = a_p1474;
{ rt_int rv3764 = (((F.p1474 == v549)) || ((F.p1474 == v207)));
return rv3764; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1479_IsNonAssocMul(rt_int a_p1480) {
struct yf1481 F;
memset((void *)&F, 0, sizeof F);
F.p1480 = a_p1480;
{ rt_int rv3767 = ((((((((F.p1480 == v552)) || ((F.p1480 == v246))) || ((F.p1480 == v348))) || ((F.p1480 == v528))) || ((F.p1480 == v489))) || ((F.p1480 == v531))) || ((F.p1480 == v492)));
return rv3767; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1485_IsAssocAdd(rt_int a_p1486) {
struct yf1487 F;
memset((void *)&F, 0, sizeof F);
F.p1486 = a_p1486;
{ rt_int rv3770 = (((F.p1486 == v543)) || ((F.p1486 == v369)));
return rv3770; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1491_IsNonAssocAdd(rt_int a_p1492) {
struct yf1493 F;
memset((void *)&F, 0, sizeof F);
F.p1492 = a_p1492;
{ rt_int rv3773 = (((((((F.p1492 == v546)) || ((F.p1492 == v459))) || ((F.p1492 == v534))) || ((F.p1492 == v495))) || ((F.p1492 == v537))) || ((F.p1492 == v498)));
return rv3773; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1497_Bin(rt_int a_p1498, void * a_p1499, void * a_p1500, rt_int a_p1501) {
struct yf1502 F;
memset((void *)&F, 0, sizeof F);
F.p1498 = a_p1498;
F.p1499 = a_p1499;
F.p1500 = a_p1500;
F.p1501 = a_p1501;
F.v3780 = yr1245_NewNode(v768, F.p1501);
((*(yR95 *)rt_nil_check(F.v3780))).f_name = F.p1498;
((*(yR95 *)rt_nil_check(F.v3780))).f_a = F.p1499;
((*(yR95 *)rt_nil_check(F.v3780))).f_b = F.p1500;
{ void * rv3781 = F.v3780;
return rv3781; }
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
F.v3786 = yr1016_SE();
yr1117_Fail(F.p1508, F.v3786);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1513_ParseExpr(void) {
struct yf1514 F;
memset((void *)&F, 0, sizeof F);
F.v3794 = yr1276_TLn();
F.v3790 = yr1518_ParseSimple();
F.v3792 = yr1462_OpAt();
if (yr1467_IsRel(F.v3792)) {
yr1300_Skip();
F.v3790 = yr1497_Bin(F.v3792, F.v3790, yr1518_ParseSimple(), F.v3794);
if (yr1467_IsRel(yr1462_OpAt())) {
yr1506_NeedParens(F.v3792, F.v3794);
}
}
{ void * rv3795 = F.v3790;
return rv3795; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1518_ParseSimple(void) {
struct yf1519 F;
memset((void *)&F, 0, sizeof F);
F.v3804 = yr1276_TLn();
if (yr1288_Is(v546)) {
yr1300_Skip();
F.v3800 = yr1245_NewNode(v765, F.v3804);
((*(yR95 *)rt_nil_check(F.v3800))).f_a = yr1523_ParseTerm();
F.v3802 = yr1462_OpAt();
if ((yr1485_IsAssocAdd(F.v3802) || yr1491_IsNonAssocAdd(F.v3802))) {
yr1506_NeedParens(rt_range(v546, INT64_C(0), INT64_C(4000000)), F.v3804);
}
{ void * rv3805 = F.v3800;
return rv3805; }
}
F.v3798 = yr1523_ParseTerm();
F.v3802 = yr1462_OpAt();
if (yr1491_IsNonAssocAdd(F.v3802)) {
yr1300_Skip();
F.v3798 = yr1497_Bin(F.v3802, F.v3798, yr1523_ParseTerm(), F.v3804);
if ((yr1485_IsAssocAdd(yr1462_OpAt()) || yr1491_IsNonAssocAdd(yr1462_OpAt()))) {
yr1506_NeedParens(F.v3802, F.v3804);
}
{ void * rv3806 = F.v3798;
return rv3806; }
}
while (yr1485_IsAssocAdd(F.v3802)) {
yr1300_Skip();
F.v3798 = yr1497_Bin(F.v3802, F.v3798, yr1523_ParseTerm(), F.v3804);
if (yr1491_IsNonAssocAdd(yr1462_OpAt())) {
yr1506_NeedParens(yr1462_OpAt(), F.v3804);
}
F.v3802 = yr1462_OpAt();
}
{ void * rv3807 = F.v3798;
return rv3807; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1523_ParseTerm(void) {
struct yf1524 F;
memset((void *)&F, 0, sizeof F);
F.v3814 = yr1276_TLn();
F.v3810 = yr1539_ParseFactor();
F.v3812 = yr1462_OpAt();
if (yr1479_IsNonAssocMul(F.v3812)) {
yr1300_Skip();
F.v3810 = yr1497_Bin(F.v3812, F.v3810, yr1539_ParseFactor(), F.v3814);
if ((yr1473_IsAssocMul(yr1462_OpAt()) || yr1479_IsNonAssocMul(yr1462_OpAt()))) {
yr1506_NeedParens(F.v3812, F.v3814);
}
{ void * rv3815 = F.v3810;
return rv3815; }
}
while (yr1473_IsAssocMul(F.v3812)) {
yr1300_Skip();
F.v3810 = yr1497_Bin(F.v3812, F.v3810, yr1539_ParseFactor(), F.v3814);
if (yr1479_IsNonAssocMul(yr1462_OpAt())) {
yr1506_NeedParens(yr1462_OpAt(), F.v3814);
}
F.v3812 = yr1462_OpAt();
}
{ void * rv3816 = F.v3810;
return rv3816; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1528_IsLiteralAt(rt_int a_p1529) {
struct yf1530 F;
memset((void *)&F, 0, sizeof F);
F.p1529 = a_p1529;
F.v3820 = ((rt_int *)(v1153).p)[y_ix1(v1153, rt_add(v1234, F.p1529))];
{ rt_int rv3822 = (((((((F.v3820 == v186)) || ((F.v3820 == v189))) || ((F.v3820 == v192))) || ((F.v3820 == v195))) || ((F.v3820 == v198))) || yr1281_IsAt(F.p1529, v357));
return rv3822; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1534_ParseLiteral(void) {
struct yf1535 F;
memset((void *)&F, 0, sizeof F);
F.v3827 = yr1266_TK();
F.v3829 = yr1276_TLn();
if ((F.v3827 == v186)) {
F.v3825 = yr1245_NewNode(v729, F.v3829);
((*(yR95 *)rt_nil_check(F.v3825))).f_ival = yr1271_TV();
} else if ((F.v3827 == v189)) {
F.v3825 = yr1245_NewNode(v732, F.v3829);
((*(yR95 *)rt_nil_check(F.v3825))).f_text = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v3827 == v192)) {
F.v3825 = yr1245_NewNode(v735, F.v3829);
((*(yR95 *)rt_nil_check(F.v3825))).f_text = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v3827 == v195)) {
F.v3825 = yr1245_NewNode(v738, F.v3829);
((*(yR95 *)rt_nil_check(F.v3825))).f_text = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v3827 == v198)) {
F.v3825 = yr1245_NewNode(v741, F.v3829);
((*(yR95 *)rt_nil_check(F.v3825))).f_text = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
} else {
F.v3825 = yr1245_NewNode(v744, F.v3829);
}
yr1300_Skip();
{ void * rv3830 = F.v3825;
return rv3830; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1539_ParseFactor(void) {
struct yf1540 F;
memset((void *)&F, 0, sizeof F);
F.v3837 = yr1276_TLn();
if (yr1288_Is(v360)) {
yr1300_Skip();
F.v3833 = yr1245_NewNode(v762, F.v3837);
((*(yR95 *)rt_nil_check(F.v3833))).f_a = yr1539_ParseFactor();
{ void * rv3838 = F.v3833;
return rv3838; }
}
if (yr1288_Is(v564)) {
yr1300_Skip();
F.v3833 = yr1245_NewNode(v771, F.v3837);
((*(yR95 *)rt_nil_check(F.v3833))).f_a = yr1513_ParseExpr();
yr1316_Expect(v567);
{ void * rv3839 = F.v3833;
return rv3839; }
}
if (yr1528_IsLiteralAt(INT64_C(0))) {
{ void * rv3841 = yr1534_ParseLiteral();
return rv3841; }
}
if (yr1294_IsIdAt(INT64_C(0))) {
if ((yr1528_IsLiteralAt(INT64_C(1)) || ((yr1294_IsIdAt(INT64_C(1)) && (!((((((yr1281_IsAt(INT64_C(2), v564) || yr1281_IsAt(INT64_C(2), v570)) || yr1281_IsAt(INT64_C(2), v585)) || yr1281_IsAt(INT64_C(2), v588)) || yr1281_IsAt(INT64_C(2), v501)) || yr1281_IsAt(INT64_C(2), v582)))))))) {
F.v3835 = yr1322_Ident();
if (yr1294_IsIdAt(INT64_C(0))) {
F.v3833 = yr1245_NewNode(v747, F.v3837);
((*(yR95 *)rt_nil_check(F.v3833))).f_name = yr1322_Ident();
} else {
F.v3833 = yr1534_ParseLiteral();
}
((*(yR95 *)rt_nil_check(F.v3833))).f_d = yr1245_NewNode(v639, F.v3837);
((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v3833))).f_d))).f_name = F.v3835;
{ void * rv3852 = F.v3833;
return rv3852; }
}
{ void * rv3853 = yr1544_ParseDesignator();
return rv3853; }
}
yr1132_FailN(F.v3837, yr1311_TokText(), y_str(" cannot begin an operand", 24));
{ void * rv3855 = ((void *)0);
return rv3855; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1544_ParseDesignator(void) {
struct yf1545 F;
memset((void *)&F, 0, sizeof F);
F.v3864 = yr1276_TLn();
F.v3858 = yr1245_NewNode(v747, F.v3864);
((*(yR95 *)rt_nil_check(F.v3858))).f_name = yr1322_Ident();
if (yr1305_Accept(v564)) {
((*(yR95 *)rt_nil_check(F.v3858))).f_kind = v750;
F.v3862 = ((void *)0);
while ((!yr1288_Is(v567))) {
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3858))).f_a, &F.v3862, yr1513_ParseExpr());
if ((!yr1305_Accept(v576))) {
yr1549_EXIT_ARGS();
}
}
yr1316_Expect(v567);
}
for (;;) {
if (yr1305_Accept(v585)) {
F.v3860 = yr1245_NewNode(v753, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3860))).f_a = F.v3858;
((*(yR95 *)rt_nil_check(F.v3860))).f_name = yr1322_Ident();
F.v3858 = F.v3860;
} else if (yr1305_Accept(v570)) {
F.v3860 = yr1245_NewNode(v756, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3860))).f_a = F.v3858;
F.v3862 = ((void *)0);
for (;;) {
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3860))).f_b, &F.v3862, yr1513_ParseExpr());
if ((!yr1305_Accept(v576))) {
goto yl_3866;
}
}
yl_3866: ;
yr1316_Expect(v573);
F.v3858 = F.v3860;
} else if (yr1305_Accept(v588)) {
F.v3860 = yr1245_NewNode(v759, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3860))).f_a = F.v3858;
F.v3858 = F.v3860;
} else {
goto yl_3865;
}
}
yl_3865: ;
{ void * rv3867 = F.v3858;
return rv3867; }
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
F.v3871 = ((void *)0);
F.v3873 = ((void *)0);
while ((!(yr1266_TK() == v174))) {
if ((!((yr1288_Is(v351) || yr1288_Is(v354))))) {
yr1124_FailS(yr1276_TLn(), y_str("a segment is a module (XIII.A)", 30));
}
yr1252_Link(&F.v3871, &F.v3873, yr1350_ParseModule());
while (yr1305_Accept(v579)) {
}
}
{ void * rv3875 = F.v3871;
return rv3875; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1588_NewSym(rt_int a_p1589, rt_int a_p1590) {
struct yf1591 F;
memset((void *)&F, 0, sizeof F);
F.p1589 = a_p1589;
F.p1590 = a_p1590;
({ F.v3880 = rt_alloc(sizeof(yR115)); });
(*(yR115 *)rt_nil_check(F.v3880)) = ((yR115){ .f_kind = F.p1589, .f_name = F.p1590, .f_rep = ((void *)0), .f_cname = INT64_C(0), .f_level = INT64_C(0), .f_byref = 0, .f_readonly = 0, .f_mval = INT64_C(0), .f_hasmv = 0, .f_params = ((void *)0), .f_nparams = INT64_C(0), .f_ret = ((void *)0), .f_func = 0, .f_decl = ((void *)0), .f_depth = INT64_C(0), .f_target = ((void *)0), .f_members = ((void *)0), .f_mnext = ((void *)0), .f_chain = ((void *)0), .f_stack = ((void *)0), .f_alt = ((void *)0), .f_monitor = ((void *)0), .f_serial = INT64_C(0) });
((*(yR115 *)rt_nil_check(F.v3880))).f_serial = yr1141_NewSerial();
{ void * rv3891 = F.v3880;
return rv3891; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1595_OpenScope(rt_int a_p1596) {
struct yf1597 F;
memset((void *)&F, 0, sizeof F);
F.p1596 = a_p1596;
({ F.v3895 = rt_alloc(sizeof(yR120)); });
(*(yR120 *)rt_nil_check(F.v3895)) = ((yR120){ .f_syms = ((void *)0), .f_closed = F.p1596, .f_module = ((void *)0), .f_level = v1576, .f_deferred = ((void *)0), .f_up = ((void *)0) });
if ((v1570 >= INT64_C(0))) {
((*(yR120 *)rt_nil_check(F.v3895))).f_up = ((void * *)(v1568).p)[y_ix1(v1568, v1570)];
}
v1570 = rt_range(rt_add(v1570, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1568).p)[y_ix1(v1568, v1570)] = F.v3895;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1601_CloseScope(void) {
struct yf1602 F;
memset((void *)&F, 0, sizeof F);
F.v3901 = ((*(yR120 *)rt_nil_check(((void * *)(v1568).p)[y_ix1(v1568, v1570)]))).f_syms;
while ((!(F.v3901 == ((void *)0)))) {
F.v3907 = rt_range(rt_mod(((*(yR115 *)rt_nil_check(F.v3901))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3903 = ((void * *)(v1559).p)[y_ix1(v1559, F.v3907)];
F.v3905 = ((void *)0);
while ((((!(F.v3903 == ((void *)0)))) && ((!(F.v3903 == F.v3901))))) {
F.v3905 = F.v3903;
F.v3903 = ((*(yR115 *)rt_nil_check(F.v3903))).f_chain;
}
if ((F.v3903 == F.v3901)) {
if ((F.v3905 == ((void *)0))) {
((void * *)(v1559).p)[y_ix1(v1559, F.v3907)] = ((*(yR115 *)rt_nil_check(F.v3901))).f_chain;
} else {
((*(yR115 *)rt_nil_check(F.v3905))).f_chain = ((*(yR115 *)rt_nil_check(F.v3901))).f_chain;
}
}
F.v3901 = ((*(yR115 *)rt_nil_check(F.v3901))).f_stack;
}
v1570 = rt_range(rt_sub(v1570, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1606_Visible(void * a_p1607) {
struct yf1608 F;
memset((void *)&F, 0, sizeof F);
F.p1607 = a_p1607;
{ rt_int rv3915 = (((((*(yR115 *)rt_nil_check(F.p1607))).f_depth >= v1573)) || ((((*(yR115 *)rt_nil_check(F.p1607))).f_depth == INT64_C(0))));
return rv3915; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1612_Find(rt_int a_p1613) {
struct yf1614 F;
memset((void *)&F, 0, sizeof F);
F.p1613 = a_p1613;
F.v3919 = ((void * *)(v1559).p)[y_ix1(v1559, rt_mod(F.p1613, INT64_C(8192)))];
while ((!(F.v3919 == ((void *)0)))) {
if ((((((*(yR115 *)rt_nil_check(F.v3919))).f_name == F.p1613)) && yr1606_Visible(F.v3919))) {
{ void * rv3922 = F.v3919;
return rv3922; }
}
F.v3919 = ((*(yR115 *)rt_nil_check(F.v3919))).f_chain;
}
{ void * rv3923 = ((void *)0);
return rv3923; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1618_FindHere(rt_int a_p1619) {
struct yf1620 F;
memset((void *)&F, 0, sizeof F);
F.p1619 = a_p1619;
F.v3927 = ((void * *)(v1559).p)[y_ix1(v1559, rt_mod(F.p1619, INT64_C(8192)))];
while ((!(F.v3927 == ((void *)0)))) {
if ((((((*(yR115 *)rt_nil_check(F.v3927))).f_name == F.p1619)) && ((((*(yR115 *)rt_nil_check(F.v3927))).f_depth == v1570)))) {
{ void * rv3930 = F.v3927;
return rv3930; }
}
F.v3927 = ((*(yR115 *)rt_nil_check(F.v3927))).f_chain;
}
{ void * rv3931 = ((void *)0);
return rv3931; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1624_Lookup(rt_int a_p1625, rt_int a_p1626) {
struct yf1627 F;
memset((void *)&F, 0, sizeof F);
F.p1625 = a_p1625;
F.p1626 = a_p1626;
F.v3936 = yr1612_Find(F.p1625);
if ((F.v3936 == ((void *)0))) {
yr1132_FailN(F.p1626, F.p1625, y_str(" is not declared here", 21));
}
{ void * rv3938 = F.v3936;
return rv3938; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1631_Ambiguous(void * a_p1632) {
struct yf1633 F;
memset((void *)&F, 0, sizeof F);
F.p1632 = a_p1632;
F.v3942 = ((*(yR115 *)rt_nil_check(F.p1632))).f_chain;
while ((!(F.v3942 == ((void *)0)))) {
if ((((((((*(yR115 *)rt_nil_check(F.v3942))).f_name == ((*(yR115 *)rt_nil_check(F.p1632))).f_name)) && yr1606_Visible(F.v3942)) && ((((*(yR115 *)rt_nil_check(F.v3942))).f_kind == v843))) && ((!(((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v3942))).f_rep))).f_tid == ((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.p1632))).f_rep))).f_tid))))) {
{ rt_int rv3944 = 1;
return rv3944; }
}
F.v3942 = ((*(yR115 *)rt_nil_check(F.v3942))).f_chain;
}
{ rt_int rv3946 = 0;
return rv3946; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1637_FindLit(rt_int a_p1638, void * a_p1639) {
struct yf1640 F;
memset((void *)&F, 0, sizeof F);
F.p1638 = a_p1638;
F.p1639 = a_p1639;
F.v3951 = ((void * *)(v1559).p)[y_ix1(v1559, rt_mod(F.p1638, INT64_C(8192)))];
while ((!(F.v3951 == ((void *)0)))) {
if (((((((*(yR115 *)rt_nil_check(F.v3951))).f_name == F.p1638)) && ((((*(yR115 *)rt_nil_check(F.v3951))).f_kind == v843))) && ((((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v3951))).f_rep))).f_tid == ((*(yR100 *)rt_nil_check(F.p1639))).f_tid)))) {
{ void * rv3954 = F.v3951;
return rv3954; }
}
F.v3951 = ((*(yR115 *)rt_nil_check(F.v3951))).f_chain;
}
{ void * rv3955 = ((void *)0);
return rv3955; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1644_Define(void * a_p1645, rt_int a_p1646) {
struct yf1647 F;
memset((void *)&F, 0, sizeof F);
F.p1645 = a_p1645;
F.p1646 = a_p1646;
F.v3960 = yr1618_FindHere(((*(yR115 *)rt_nil_check(F.p1645))).f_name);
F.v3962 = rt_range(rt_mod(((*(yR115 *)rt_nil_check(F.p1645))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (((((!(F.v3960 == ((void *)0)))) && (!((((((*(yR115 *)rt_nil_check(F.v3960))).f_kind == v843)) && ((((*(yR115 *)rt_nil_check(F.p1645))).f_kind == v843)))))) && (!((((((*(yR115 *)rt_nil_check(F.p1645))).f_kind == v846)) && ((((*(yR115 *)rt_nil_check(F.p1645))).f_alt == F.v3960))))))) {
yr1132_FailN(F.p1646, ((*(yR115 *)rt_nil_check(F.p1645))).f_name, y_str(" is declared twice in this scope", 32));
}
((*(yR115 *)rt_nil_check(F.p1645))).f_depth = v1570;
((*(yR115 *)rt_nil_check(F.p1645))).f_chain = ((void * *)(v1559).p)[y_ix1(v1559, F.v3962)];
((void * *)(v1559).p)[y_ix1(v1559, F.v3962)] = F.p1645;
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
F.v3970 = rt_range(rt_sub(v1576, F.p1652), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.p1652 == INT64_C(0))) {
{ rt_int rv3973 = F.p1653;
return rv3973; }
}
yr986_SB();
if ((F.v3970 == INT64_C(0))) {
yr997_SA(y_str("F.", 2));
} else {
yr997_SA(y_str("F.up->", 6));
while ((F.v3970 > INT64_C(1))) {
yr997_SA(y_str("up->", 4));
F.v3970 = rt_range(rt_sub(F.v3970, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1004_ST(F.p1653);
{ rt_int rv3981 = yr1016_SE();
return rv3981; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1658_FramePtr(rt_int a_p1659) {
struct yf1660 F;
memset((void *)&F, 0, sizeof F);
F.p1659 = a_p1659;
F.v3985 = rt_range(rt_sub(v1576, F.p1659), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.v3985 == INT64_C(0))) {
{ rt_int rv3989 = yr1021_T(y_str("&F", 2));
return rv3989; }
}
yr986_SB();
yr997_SA(y_str("F.up", 4));
while ((F.v3985 > INT64_C(1))) {
yr997_SA(y_str("->up", 4));
F.v3985 = rt_range(rt_sub(F.v3985, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv3995 = yr1016_SE();
return rv3995; }
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
F.v4000 = yr1016_SE();
if ((v1576 == INT64_C(0))) {
yr1070_Put(&v948, F.v4000);
} else {
yr1070_Put(&v958, F.v4000);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1671_SymPath(void * a_p1672) {
struct yf1673 F;
memset((void *)&F, 0, sizeof F);
F.p1672 = a_p1672;
F.v4009 = yr1651_Path(((*(yR115 *)rt_nil_check(F.p1672))).f_level, ((*(yR115 *)rt_nil_check(F.p1672))).f_cname);
if (((*(yR115 *)rt_nil_check(F.p1672))).f_byref) {
yr986_SB();
yr997_SA(y_str("(*", 2));
yr1004_ST(F.v4009);
yr997_SA(y_str(")", 1));
{ rt_int rv4012 = yr1016_SE();
return rv4012; }
}
{ rt_int rv4013 = F.v4009;
return rv4013; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1677_Real(void * a_p1678) {
struct yf1679 F;
memset((void *)&F, 0, sizeof F);
F.p1678 = a_p1678;
F.v4017 = F.p1678;
while ((((*(yR115 *)rt_nil_check(F.v4017))).f_kind == v864)) {
F.v4017 = ((*(yR115 *)rt_nil_check(F.v4017))).f_target;
}
{ void * rv4018 = F.v4017;
return rv4018; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1707_NewRep(rt_int a_p1708, rt_int a_p1709) {
struct yf1710 F;
memset((void *)&F, 0, sizeof F);
F.p1708 = a_p1708;
F.p1709 = a_p1709;
({ F.v4023 = rt_alloc(sizeof(yR100)); });
(*(yR100 *)rt_nil_check(F.v4023)) = ((yR100){ .f_kind = F.p1708, .f_tid = F.p1709, .f_tname = F.p1709, .f_lo = INT64_C(0), .f_hi = INT64_C(0), .f_mlo = INT64_C(0), .f_mhi = INT64_C(0), .f_hasm = 0, .f_scale = INT64_C(0), .f_prec = INT64_C(0), .f_elem = ((void *)0), .f_idx = ((void *)0), .f_nidx = INT64_C(0), .f_link = ((void *)0), .f_lits = ((void *)0), .f_nlits = INT64_C(0), .f_fields = ((void *)0), .f_selector = ((void *)0), .f_cname = INT64_C(0), .f_dname = INT64_C(0), .f_dlevel = INT64_C(0), .f_deep = 0, .f_abstract = 0, .f_opaque = 0, .f_ordered = 0, .f_forward = INT64_C(0), .f_fwdscope = INT64_C(0), .f_monitor = ((void *)0), .f_serial = INT64_C(0) });
((*(yR100 *)rt_nil_check(F.v4023))).f_serial = yr1141_NewSerial();
{ void * rv4043 = F.v4023;
return rv4043; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1714_CopyRep(void * a_p1715) {
struct yf1716 F;
memset((void *)&F, 0, sizeof F);
F.p1715 = a_p1715;
({ F.v4047 = rt_alloc(sizeof(yR100)); });
(*(yR100 *)rt_nil_check(F.v4047)) = (*(yR100 *)rt_nil_check(F.p1715));
((*(yR100 *)rt_nil_check(F.v4047))).f_serial = yr1141_NewSerial();
{ void * rv4048 = F.v4047;
return rv4048; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1720_IsDiscrete(void * a_p1721) {
struct yf1722 F;
memset((void *)&F, 0, sizeof F);
F.p1721 = a_p1721;
{ rt_int rv4051 = (((((((*(yR100 *)rt_nil_check(F.p1721))).f_kind == v774)) || ((((*(yR100 *)rt_nil_check(F.p1721))).f_kind == v783))) || ((((*(yR100 *)rt_nil_check(F.p1721))).f_kind == v786))) || ((((*(yR100 *)rt_nil_check(F.p1721))).f_kind == v789)));
return rv4051; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1726_IsNumeric(void * a_p1727) {
struct yf1728 F;
memset((void *)&F, 0, sizeof F);
F.p1727 = a_p1727;
{ rt_int rv4054 = ((((((*(yR100 *)rt_nil_check(F.p1727))).f_kind == v774)) || ((((*(yR100 *)rt_nil_check(F.p1727))).f_kind == v777))) || ((((*(yR100 *)rt_nil_check(F.p1727))).f_kind == v780)));
return rv4054; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1732_IsArrayLike(void * a_p1733) {
struct yf1734 F;
memset((void *)&F, 0, sizeof F);
F.p1733 = a_p1733;
{ rt_int rv4057 = ((((((*(yR100 *)rt_nil_check(F.p1733))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.p1733))).f_kind == v813))) || ((((*(yR100 *)rt_nil_check(F.p1733))).f_kind == v816)));
return rv4057; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1738_IsString(void * a_p1739) {
struct yf1740 F;
memset((void *)&F, 0, sizeof F);
F.p1739 = a_p1739;
if ((((*(yR100 *)rt_nil_check(F.p1739))).f_kind == v816)) {
{ rt_int rv4061 = 1;
return rv4061; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1739))).f_kind == v792)) && ((((*(yR100 *)rt_nil_check(F.p1739))).f_nidx == INT64_C(1))))) {
{ rt_int rv4063 = (((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p1739))).f_elem))).f_kind == v789);
return rv4063; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1739))).f_kind == v813)) && ((((*(yR100 *)rt_nil_check(F.p1739))).f_nidx == INT64_C(1))))) {
{ rt_int rv4065 = (((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p1739))).f_elem))).f_kind == v789);
return rv4065; }
}
{ rt_int rv4067 = 0;
return rv4067; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1744_Deep(void * a_p1745) {
struct yf1746 F;
memset((void *)&F, 0, sizeof F);
F.p1745 = a_p1745;
if (((((((*(yR100 *)rt_nil_check(F.p1745))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.p1745))).f_kind == v813))) || ((((*(yR100 *)rt_nil_check(F.p1745))).f_kind == v816)))) {
{ rt_int rv4071 = 1;
return rv4071; }
}
{ rt_int rv4072 = (((((*(yR100 *)rt_nil_check(F.p1745))).f_kind == v795)) && ((*(yR100 *)rt_nil_check(F.p1745))).f_deep);
return rv4072; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1750_CType(void * a_p1751) {
struct yf1752 F;
memset((void *)&F, 0, sizeof F);
F.p1751 = a_p1751;
F.v4076 = ((*(yR100 *)rt_nil_check(F.p1751))).f_kind;
if (((((F.v4076 == v774)) || ((F.v4076 == v783))) || ((F.v4076 == v786)))) {
{ rt_int rv4078 = yr1021_T(y_str("rt_int", 6));
return rv4078; }
}
if ((F.v4076 == v789)) {
{ rt_int rv4080 = yr1021_T(y_str("unsigned char", 13));
return rv4080; }
}
if ((((F.v4076 == v780)) || ((F.v4076 == v777)))) {
{ rt_int rv4082 = yr1021_T(y_str("double", 6));
return rv4082; }
}
if (((((F.v4076 == v792)) || ((F.v4076 == v813))) || ((F.v4076 == v816)))) {
{ rt_int rv4084 = yr1021_T(y_str("yarr", 4));
return rv4084; }
}
if ((F.v4076 == v795)) {
{ rt_int rv4085 = ((*(yR100 *)rt_nil_check(F.p1751))).f_cname;
return rv4085; }
}
if ((((F.v4076 == v798)) || ((F.v4076 == v819)))) {
{ rt_int rv4087 = yr1021_T(y_str("void *", 6));
return rv4087; }
}
if ((F.v4076 == v801)) {
{ rt_int rv4089 = yr1021_T(y_str("yfile *", 7));
return rv4089; }
}
if ((F.v4076 == v804)) {
{ rt_int rv4091 = yr1021_T(y_str("yset", 4));
return rv4091; }
}
if ((F.v4076 == v807)) {
{ rt_int rv4093 = yr1021_T(y_str("ysig", 4));
return rv4093; }
}
if ((F.v4076 == v810)) {
{ rt_int rv4095 = yr1021_T(y_str("rt_lock", 7));
return rv4095; }
}
{ rt_int rv4097 = yr1021_T(y_str("void", 4));
return rv4097; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1756_DescOf(void * a_p1757) {
struct yf1758 F;
memset((void *)&F, 0, sizeof F);
F.p1757 = a_p1757;
F.v4101 = ((*(yR100 *)rt_nil_check(F.p1757))).f_kind;
if (((((F.v4101 == v774)) || ((F.v4101 == v783))) || ((F.v4101 == v786)))) {
{ rt_int rv4103 = yr1021_T(y_str("&y_d_int", 8));
return rv4103; }
}
if ((F.v4101 == v789)) {
{ rt_int rv4105 = yr1021_T(y_str("&y_d_byte", 9));
return rv4105; }
}
if ((((F.v4101 == v780)) || ((F.v4101 == v777)))) {
{ rt_int rv4107 = yr1021_T(y_str("&y_d_float", 10));
return rv4107; }
}
if ((((F.v4101 == v798)) || ((F.v4101 == v819)))) {
{ rt_int rv4109 = yr1021_T(y_str("&y_d_ptr", 8));
return rv4109; }
}
if ((F.v4101 == v804)) {
{ rt_int rv4111 = yr1021_T(y_str("&y_d_set", 8));
return rv4111; }
}
if ((((F.v4101 == v792)) || ((F.v4101 == v795)))) {
yr986_SB();
yr997_SA(y_str("&", 1));
yr1004_ST(yr1651_Path(((*(yR100 *)rt_nil_check(F.p1757))).f_dlevel, ((*(yR100 *)rt_nil_check(F.p1757))).f_dname));
{ rt_int rv4113 = yr1016_SE();
return rv4113; }
}
if ((F.v4101 == v816)) {
{ rt_int rv4115 = yr1021_T(y_str("&y_d_str", 8));
return rv4115; }
}
{ rt_int rv4117 = yr1021_T(y_str("&y_d_opaque", 11));
return rv4117; }
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
{ rt_int rv4126 = 1;
return rv4126; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1769))).f_kind == v816)) && yr1738_IsString(F.p1770))) {
{ rt_int rv4128 = 1;
return rv4128; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1770))).f_kind == v816)) && yr1738_IsString(F.p1769))) {
{ rt_int rv4130 = 1;
return rv4130; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1769))).f_kind == v819)) && ((((*(yR100 *)rt_nil_check(F.p1770))).f_kind == v798)))) {
{ rt_int rv4132 = 1;
return rv4132; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1770))).f_kind == v819)) && ((((*(yR100 *)rt_nil_check(F.p1769))).f_kind == v798)))) {
{ rt_int rv4134 = 1;
return rv4134; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1769))).f_kind == v828)) || ((((*(yR100 *)rt_nil_check(F.p1770))).f_kind == v828)))) {
{ rt_int rv4136 = 1;
return rv4136; }
}
{ rt_int rv4138 = 0;
return rv4138; }
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
F.v4144 = yr1016_SE();
yr1117_Fail(F.p1776, F.v4144);
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
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p1800))).f_a, F.p1799, &F.v4160, &F.v4164);
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p1800))).f_b, F.p1799, &F.v4162, &F.v4166);
if ((((((*(yR100 *)rt_nil_check(F.p1799))).f_kind == v780)) || ((((*(yR100 *)rt_nil_check(F.p1799))).f_kind == v777)))) {
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p1800))).f_line, F.p1799, F.v4164);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p1800))).f_line, F.p1799, F.v4166);
((*(yR100 *)rt_nil_check(F.p1799))).f_lo = F.v4160;
((*(yR100 *)rt_nil_check(F.p1799))).f_hi = F.v4162;
if ((((*(yR100 *)rt_nil_check(F.p1799))).f_kind == v780)) {
if ((((*(yR95 *)rt_nil_check(F.p1800))).f_d == ((void *)0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1800))).f_line, y_str("FLOATING needs PRECISION (VI.A.1.c)", 35));
}
yr2032_Manifest(((*(yR95 *)rt_nil_check(F.p1800))).f_d, &F.v4168, &F.v4170);
if ((!F.v4168)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1800))).f_line, y_str("PRECISION is a manifest constant", 32));
}
yr986_SB();
yr1010_SI(F.v4170);
((*(yR100 *)rt_nil_check(F.p1799))).f_prec = yr1016_SE();
} else {
if ((((*(yR95 *)rt_nil_check(F.p1800))).f_c == ((void *)0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1800))).f_line, y_str("FIXED needs SCALE (VI.A.1.b)", 28));
}
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p1800))).f_c, F.p1799, &((*(yR100 *)rt_nil_check(F.p1799))).f_scale, &F.v4164);
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
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p1800))).f_line, F.p1799, F.v4164);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p1800))).f_line, F.p1799, F.v4166);
((*(yR100 *)rt_nil_check(F.p1799))).f_lo = F.v4160;
((*(yR100 *)rt_nil_check(F.p1799))).f_hi = F.v4162;
yr2032_Manifest(((*(yR95 *)rt_nil_check(F.p1800))).f_a, &F.v4168, &((*(yR100 *)rt_nil_check(F.p1799))).f_mlo);
((*(yR100 *)rt_nil_check(F.p1799))).f_hasm = F.v4168;
yr2032_Manifest(((*(yR95 *)rt_nil_check(F.p1800))).f_b, &F.v4168, &((*(yR100 *)rt_nil_check(F.p1799))).f_mhi);
((*(yR100 *)rt_nil_check(F.p1799))).f_hasm = (((*(yR100 *)rt_nil_check(F.p1799))).f_hasm && F.v4168);
((*(yR100 *)rt_nil_check(F.p1799))).f_abstract = 0;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1805_DefineLits(void * a_p1806) {
struct yf1807 F;
memset((void *)&F, 0, sizeof F);
F.p1806 = a_p1806;
F.v4181 = ((*(yR100 *)rt_nil_check(F.p1806))).f_lits;
F.v4185 = INT64_C(0);
while ((!(F.v4181 == ((void *)0)))) {
if ((!(yr1612_Find(((*(yR95 *)rt_nil_check(F.v4181))).f_name) == ((void *)0)))) {
F.v4183 = yr1612_Find(((*(yR95 *)rt_nil_check(F.v4181))).f_name);
if ((((!(((*(yR115 *)rt_nil_check(F.v4183))).f_kind == v843))) && ((((*(yR115 *)rt_nil_check(F.v4183))).f_depth == v1570)))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.v4181))).f_line, ((*(yR95 *)rt_nil_check(F.v4181))).f_name, y_str(" is declared twice in this scope", 32));
}
}
F.v4183 = yr1588_NewSym(v843, ((*(yR95 *)rt_nil_check(F.v4181))).f_name);
((*(yR115 *)rt_nil_check(F.v4183))).f_rep = F.p1806;
((*(yR115 *)rt_nil_check(F.v4183))).f_mval = F.v4185;
((*(yR115 *)rt_nil_check(F.v4183))).f_hasmv = 1;
yr1644_Define(F.v4183, ((*(yR95 *)rt_nil_check(F.v4181))).f_line);
F.v4185 = rt_range(rt_add(F.v4185, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4181 = ((*(yR95 *)rt_nil_check(F.v4181))).f_next;
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
F.v4199 = yr1141_NewSerial();
yr986_SB();
if ((!(F.p1820 == INT64_C(0)))) {
yr1004_ST(F.p1820);
} else {
yr997_SA(y_str("anonymous", 9));
}
yr997_SA(y_str("#", 1));
yr1010_SI(F.v4199);
{ rt_int rv4203 = yr1016_SE();
return rv4203; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1825_MakeRep(void * a_p1826, rt_int a_p1827, rt_int a_p1828) {
struct yf1829 F;
memset((void *)&F, 0, sizeof F);
F.p1826 = a_p1826;
F.p1827 = a_p1827;
F.p1828 = a_p1828;
F.v4219 = ((*(yR95 *)rt_nil_check(F.p1826))).f_kind;
F.v4223 = INT64_C(0);
F.v4225 = F.p1827;
if ((!(((*(yR95 *)rt_nil_check(F.p1826))).f_text == INT64_C(0)))) {
F.v4217 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(F.p1826))).f_text, ((*(yR95 *)rt_nil_check(F.p1826))).f_line));
if ((((!(((*(yR115 *)rt_nil_check(F.v4217))).f_kind == v840))) && ((!(((*(yR115 *)rt_nil_check(F.v4217))).f_kind == v837))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p1826))).f_line, ((*(yR95 *)rt_nil_check(F.p1826))).f_text, y_str(" is not a type", 14));
}
F.v4223 = ((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4217))).f_rep))).f_tid;
F.v4225 = ((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4217))).f_rep))).f_tname;
}
if ((F.v4219 == v642)) {
F.v4217 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(F.p1826))).f_name, ((*(yR95 *)rt_nil_check(F.p1826))).f_line));
if ((((!(((*(yR115 *)rt_nil_check(F.v4217))).f_kind == v840))) && ((!(((*(yR115 *)rt_nil_check(F.v4217))).f_kind == v837))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p1826))).f_line, ((*(yR95 *)rt_nil_check(F.p1826))).f_name, y_str(" is not a representation", 24));
}
F.v4209 = ((*(yR115 *)rt_nil_check(F.v4217))).f_rep;
if ((!(((*(yR95 *)rt_nil_check(F.p1826))).f_a == ((void *)0)))) {
F.v4209 = yr1714_CopyRep(F.v4209);
yr1798_Qualify(F.v4209, ((*(yR95 *)rt_nil_check(F.p1826))).f_a);
}
{ void * rv4230 = F.v4209;
return rv4230; }
}
if ((F.v4223 == INT64_C(0))) {
F.v4223 = yr1819_NewTid(F.p1827);
if ((F.v4225 == INT64_C(0))) {
F.v4225 = F.v4223;
}
}
if ((F.v4219 == v645)) {
F.v4209 = yr1707_NewRep(v786, F.v4223);
((*(yR100 *)rt_nil_check(F.v4209))).f_tname = F.v4225;
((*(yR100 *)rt_nil_check(F.v4209))).f_ordered = (((*(yR95 *)rt_nil_check(F.p1826))).f_flag == INT64_C(1));
((*(yR100 *)rt_nil_check(F.v4209))).f_lits = ((*(yR95 *)rt_nil_check(F.p1826))).f_a;
((*(yR100 *)rt_nil_check(F.v4209))).f_nlits = yr1260_Count(((*(yR95 *)rt_nil_check(F.p1826))).f_a);
yr1811_SetRange(F.v4209, INT64_C(0), rt_range(rt_sub(((*(yR100 *)rt_nil_check(F.v4209))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1805_DefineLits(F.v4209);
if ((!(((*(yR95 *)rt_nil_check(F.p1826))).f_b == ((void *)0)))) {
yr1798_Qualify(F.v4209, ((*(yR95 *)rt_nil_check(F.p1826))).f_b);
}
{ void * rv4237 = F.v4209;
return rv4237; }
}
if ((F.v4219 == v648)) {
F.v4209 = yr1707_NewRep(v789, F.v4223);
((*(yR100 *)rt_nil_check(F.v4209))).f_tname = F.v4225;
((*(yR100 *)rt_nil_check(F.v4209))).f_ordered = 1;
((*(yR100 *)rt_nil_check(F.v4209))).f_lits = ((*(yR95 *)rt_nil_check(F.p1826))).f_a;
((*(yR100 *)rt_nil_check(F.v4209))).f_nlits = yr1260_Count(((*(yR95 *)rt_nil_check(F.p1826))).f_a);
if ((((*(yR100 *)rt_nil_check(F.v4209))).f_nlits > INT64_C(256))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1826))).f_line, y_str("this implementation takes alphabets of up to 256 characters", 59));
}
yr1811_SetRange(F.v4209, INT64_C(0), rt_range(rt_sub(((*(yR100 *)rt_nil_check(F.v4209))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((!(((*(yR95 *)rt_nil_check(F.p1826))).f_b == ((void *)0)))) {
yr1798_Qualify(F.v4209, ((*(yR95 *)rt_nil_check(F.p1826))).f_b);
}
{ void * rv4244 = F.v4209;
return rv4244; }
}
if ((F.v4219 == v651)) {
F.v4209 = yr1707_NewRep(v792, F.v4223);
((*(yR100 *)rt_nil_check(F.v4209))).f_tname = F.v4225;
F.v4221 = ((*(yR95 *)rt_nil_check(F.p1826))).f_a;
F.v4215 = ((void *)0);
while ((!(F.v4221 == ((void *)0)))) {
F.v4213 = yr1714_CopyRep(yr1825_MakeRep(F.v4221, INT64_C(0), 0));
if ((!yr1720_IsDiscrete(F.v4213))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v4221))).f_line, y_str("an index is an integer or scalar representation", 47));
}
yr1791_CheckRepresented(F.v4213, ((*(yR95 *)rt_nil_check(F.v4221))).f_line);
((*(yR100 *)rt_nil_check(F.v4213))).f_link = ((void *)0);
if ((F.v4215 == ((void *)0))) {
((*(yR100 *)rt_nil_check(F.v4209))).f_idx = F.v4213;
} else {
((*(yR100 *)rt_nil_check(F.v4215))).f_link = F.v4213;
}
F.v4215 = F.v4213;
((*(yR100 *)rt_nil_check(F.v4209))).f_nidx = rt_range(rt_add(((*(yR100 *)rt_nil_check(F.v4209))).f_nidx, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4221 = ((*(yR95 *)rt_nil_check(F.v4221))).f_next;
}
if ((((*(yR100 *)rt_nil_check(F.v4209))).f_nidx > INT64_C(4))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1826))).f_line, y_str("this implementation takes arrays of up to 4 dimensions", 54));
}
((*(yR100 *)rt_nil_check(F.v4209))).f_elem = yr1825_MakeRep(((*(yR95 *)rt_nil_check(F.p1826))).f_b, INT64_C(0), F.p1828);
if ((!F.p1828)) {
yr1791_CheckRepresented(((*(yR100 *)rt_nil_check(F.v4209))).f_elem, ((*(yR95 *)rt_nil_check(F.p1826))).f_line);
yr1845_BuildArrayDesc(F.v4209);
} else {
((*(yR100 *)rt_nil_check(F.v4209))).f_abstract = ((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.v4209))).f_elem))).f_abstract;
if ((!((*(yR100 *)rt_nil_check(F.v4209))).f_abstract)) {
yr1845_BuildArrayDesc(F.v4209);
}
}
((*(yR100 *)rt_nil_check(F.v4209))).f_deep = 1;
{ void * rv4254 = F.v4209;
return rv4254; }
}
if ((F.v4219 == v654)) {
F.v4209 = yr1707_NewRep(v795, F.v4223);
((*(yR100 *)rt_nil_check(F.v4209))).f_tname = F.v4225;
yr1875_MakeRecord(F.v4209, F.p1826, F.p1828);
{ void * rv4255 = F.v4209;
return rv4255; }
}
if (((((F.v4219 == v660)) || ((F.v4219 == v657))) || ((F.v4219 == v663)))) {
if ((F.v4219 == v660)) {
F.v4209 = yr1707_NewRep(v798, F.v4223);
((*(yR100 *)rt_nil_check(F.v4209))).f_tname = F.v4225;
if (((((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p1826))).f_a))).f_kind == v642)) && ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p1826))).f_a))).f_a == ((void *)0)))) && ((yr1612_Find(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p1826))).f_a))).f_name) == ((void *)0))))) {
((*(yR100 *)rt_nil_check(F.v4209))).f_forward = ((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p1826))).f_a))).f_name;
((*(yR100 *)rt_nil_check(F.v4209))).f_fwdscope = v1570;
F.v4221 = yr1245_NewNode(v639, ((*(yR95 *)rt_nil_check(F.p1826))).f_line);
((*(yR95 *)rt_nil_check(F.v4221))).f_rep = F.v4209;
((*(yR95 *)rt_nil_check(F.v4221))).f_next = v1705;
v1705 = F.v4221;
{ void * rv4256 = F.v4209;
return rv4256; }
}
((*(yR100 *)rt_nil_check(F.v4209))).f_elem = yr1825_MakeRep(((*(yR95 *)rt_nil_check(F.p1826))).f_a, INT64_C(0), 0);
{ void * rv4259 = F.v4209;
return rv4259; }
}
if ((F.v4219 == v657)) {
F.v4209 = yr1707_NewRep(v801, F.v4223);
((*(yR100 *)rt_nil_check(F.v4209))).f_tname = F.v4225;
((*(yR100 *)rt_nil_check(F.v4209))).f_elem = yr1825_MakeRep(((*(yR95 *)rt_nil_check(F.p1826))).f_a, INT64_C(0), F.p1828);
{ void * rv4261 = F.v4209;
return rv4261; }
}
F.v4209 = yr1707_NewRep(v804, F.v4223);
((*(yR100 *)rt_nil_check(F.v4209))).f_tname = F.v4225;
((*(yR100 *)rt_nil_check(F.v4209))).f_elem = yr1825_MakeRep(((*(yR95 *)rt_nil_check(F.p1826))).f_a, INT64_C(0), 0);
if ((!yr1720_IsDiscrete(((*(yR100 *)rt_nil_check(F.v4209))).f_elem))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1826))).f_line, y_str("a set is of an integer or scalar representation", 47));
}
yr1791_CheckRepresented(((*(yR100 *)rt_nil_check(F.v4209))).f_elem, ((*(yR95 *)rt_nil_check(F.p1826))).f_line);
{ void * rv4265 = F.v4209;
return rv4265; }
}
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1826))).f_line, y_str("this representation is not translated", 37));
{ void * rv4267 = ((void *)0);
return rv4267; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1833_ResolvePending(rt_int a_p1834, void * a_p1835) {
struct yf1836 F;
memset((void *)&F, 0, sizeof F);
F.p1834 = a_p1834;
F.p1835 = a_p1835;
F.v4272 = v1705;
F.v4274 = ((void *)0);
while ((!(F.v4272 == ((void *)0)))) {
if ((((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4272))).f_rep))).f_forward == F.p1834)) {
((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4272))).f_rep))).f_elem = F.p1835;
((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4272))).f_rep))).f_forward = INT64_C(0);
if ((F.v4274 == ((void *)0))) {
v1705 = ((*(yR95 *)rt_nil_check(F.v4272))).f_next;
} else {
((*(yR95 *)rt_nil_check(F.v4274))).f_next = ((*(yR95 *)rt_nil_check(F.v4272))).f_next;
}
} else {
F.v4274 = F.v4272;
}
F.v4272 = ((*(yR95 *)rt_nil_check(F.v4272))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1840_CheckPending(void) {
struct yf1841 F;
memset((void *)&F, 0, sizeof F);
F.v4278 = v1705;
while ((!(F.v4278 == ((void *)0)))) {
if ((((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4278))).f_rep))).f_fwdscope >= v1570)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.v4278))).f_line, ((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4278))).f_rep))).f_forward, y_str(" is named by a pointer but not declared", 39));
}
F.v4278 = ((*(yR95 *)rt_nil_check(F.v4278))).f_next;
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
F.v4283 = ((*(yR100 *)rt_nil_check(F.p1846))).f_idx;
F.v4287 = 1;
while ((!(F.v4283 == ((void *)0)))) {
if ((!F.v4287)) {
yr997_SA(y_str(", ", 2));
}
F.v4287 = 0;
yr1004_ST(((*(yR100 *)rt_nil_check(F.v4283))).f_lo);
F.v4283 = ((*(yR100 *)rt_nil_check(F.v4283))).f_link;
}
yr997_SA(y_str("}, hi[", 6));
yr1010_SI(((*(yR100 *)rt_nil_check(F.p1846))).f_nidx);
yr997_SA(y_str("] = {", 5));
F.v4283 = ((*(yR100 *)rt_nil_check(F.p1846))).f_idx;
F.v4287 = 1;
while ((!(F.v4283 == ((void *)0)))) {
if ((!F.v4287)) {
yr997_SA(y_str(", ", 2));
}
F.v4287 = 0;
yr1004_ST(((*(yR100 *)rt_nil_check(F.v4283))).f_hi);
F.v4283 = ((*(yR100 *)rt_nil_check(F.v4283))).f_link;
}
yr997_SA(y_str("}; y_desc_array(", 16));
yr1004_ST(yr1756_DescOf(F.p1846));
yr997_SA(y_str(", ", 2));
yr1010_SI(((*(yR100 *)rt_nil_check(F.p1846))).f_nidx);
yr997_SA(y_str(", lo, hi, ", 10));
yr1004_ST(yr1756_DescOf(((*(yR100 *)rt_nil_check(F.p1846))).f_elem));
yr997_SA(y_str("); }", 4));
F.v4285 = yr1016_SE();
yr1092_Emit(F.v4285);
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
F.v4312 = ((*(yR100 *)rt_nil_check(F.p1852))).f_fields;
while ((!(F.v4312 == ((void *)0)))) {
if ((((*(yR105 *)rt_nil_check(F.v4312))).f_name == F.p1854)) {
yr1132_FailN(F.p1859, F.p1854, y_str(" is a component twice", 21));
}
F.v4312 = ((*(yR105 *)rt_nil_check(F.v4312))).f_next;
}
({ F.v4312 = rt_alloc(sizeof(yR105)); });
(*(yR105 *)rt_nil_check(F.v4312)) = ((yR105){ .f_name = F.p1854, .f_rep = F.p1855, .f_isconst = F.p1856, .f_variant = F.p1857, .f_labels = F.p1858, .f_next = ((void *)0) });
if (((*F.p1853) == ((void *)0))) {
((*(yR100 *)rt_nil_check(F.p1852))).f_fields = F.v4312;
} else {
((*(yR105 *)rt_nil_check((*F.p1853)))).f_next = F.v4312;
}
(*F.p1853) = F.v4312;
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
F.v4324 = F.p1867;
F.v4326 = F.p1867;
while ((!(F.v4324 == ((void *)0)))) {
F.v4328 = yr1825_MakeRep(((*(yR95 *)rt_nil_check(F.v4324))).f_b, INT64_C(0), F.p1870);
if ((!F.p1870)) {
yr1791_CheckRepresented(F.v4328, ((*(yR95 *)rt_nil_check(F.v4324))).f_line);
}
if ((((((*(yR100 *)rt_nil_check(F.v4328))).f_kind == v807)) || ((((*(yR100 *)rt_nil_check(F.v4328))).f_kind == v801)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v4324))).f_line, y_str("this implementation does not keep signals or files in records", 61));
}
F.v4326 = ((*(yR95 *)rt_nil_check(F.v4324))).f_a;
while ((!(F.v4326 == ((void *)0)))) {
yr1851_AddField(F.p1865, &(*F.p1866), ((*(yR95 *)rt_nil_check(F.v4326))).f_name, F.v4328, (((*(yR95 *)rt_nil_check(F.v4324))).f_ival == v240), F.p1868, F.p1869, ((*(yR95 *)rt_nil_check(F.v4326))).f_line);
F.v4326 = ((*(yR95 *)rt_nil_check(F.v4326))).f_next;
}
F.v4324 = ((*(yR95 *)rt_nil_check(F.v4324))).f_next;
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
F.v4336 = ((void *)0);
F.v4344 = INT64_C(0);
F.v4351 = INT64_C(0);
yr1864_AddFields(F.p1876, &F.v4336, ((*(yR95 *)rt_nil_check(F.p1877))).f_a, INT64_C(0), ((void *)0), F.p1878);
if ((!(((*(yR95 *)rt_nil_check(F.p1877))).f_b == ((void *)0)))) {
F.v4338 = ((*(yR95 *)rt_nil_check(F.p1877))).f_b;
F.v4342 = yr1825_MakeRep(((*(yR95 *)rt_nil_check(F.v4338))).f_b, INT64_C(0), 0);
if ((!yr1720_IsDiscrete(F.v4342))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v4338))).f_line, y_str("the case-selection component is integer or scalar", 49));
}
yr1851_AddField(F.p1876, &F.v4336, ((*(yR95 *)rt_nil_check(F.v4338))).f_name, F.v4342, 1, INT64_C(0), ((void *)0), ((*(yR95 *)rt_nil_check(F.v4338))).f_line);
((*(yR100 *)rt_nil_check(F.p1876))).f_selector = F.v4336;
F.v4340 = ((*(yR95 *)rt_nil_check(F.v4338))).f_a;
while ((!(F.v4340 == ((void *)0)))) {
F.v4344 = rt_range(rt_add(F.v4344, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1864_AddFields(F.p1876, &F.v4336, ((*(yR95 *)rt_nil_check(F.v4340))).f_b, F.v4344, ((*(yR95 *)rt_nil_check(F.v4340))).f_a, F.p1878);
F.v4340 = ((*(yR95 *)rt_nil_check(F.v4340))).f_next;
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
F.v4349 = yr1016_SE();
yr1070_Put(&v942, F.v4349);
yr986_SB();
yr997_SA(y_str("struct ", 7));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1876))).f_cname);
yr997_SA(y_str(" {", 2));
F.v4347 = ((*(yR100 *)rt_nil_check(F.p1876))).f_fields;
while ((!(F.v4347 == ((void *)0)))) {
yr997_SA(y_str(" ", 1));
yr1004_ST(yr1750_CType(((*(yR105 *)rt_nil_check(F.v4347))).f_rep));
yr997_SA(y_str(" f_", 3));
yr1004_ST(((*(yR105 *)rt_nil_check(F.v4347))).f_name);
yr997_SA(y_str(";", 1));
F.v4351 = rt_range(rt_add(F.v4351, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4347 = ((*(yR105 *)rt_nil_check(F.v4347))).f_next;
}
if ((F.v4351 == INT64_C(0))) {
yr997_SA(y_str(" int empty_;", 12));
}
yr997_SA(y_str(" };", 3));
F.v4349 = yr1016_SE();
yr1070_Put(&v944, F.v4349);
yr1762_NewDesc(F.p1876);
yr986_SB();
yr997_SA(y_str("{ static const size_t o[] = {", 29));
F.v4347 = ((*(yR100 *)rt_nil_check(F.p1876))).f_fields;
while ((!(F.v4347 == ((void *)0)))) {
yr997_SA(y_str("offsetof(", 9));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1876))).f_cname);
yr997_SA(y_str(", f_", 4));
yr1004_ST(((*(yR105 *)rt_nil_check(F.v4347))).f_name);
yr997_SA(y_str("), ", 3));
F.v4347 = ((*(yR105 *)rt_nil_check(F.v4347))).f_next;
}
yr997_SA(y_str("0}; const ydesc **f = rt_alloc(", 31));
yr1010_SI(rt_range(rt_add(F.v4351, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr997_SA(y_str(" * sizeof *f);", 14));
F.v4344 = INT64_C(0);
F.v4347 = ((*(yR100 *)rt_nil_check(F.p1876))).f_fields;
while ((!(F.v4347 == ((void *)0)))) {
yr997_SA(y_str(" f[", 3));
yr1010_SI(F.v4344);
yr997_SA(y_str("] = ", 4));
yr1004_ST(yr1756_DescOf(((*(yR105 *)rt_nil_check(F.v4347))).f_rep));
yr997_SA(y_str(";", 1));
F.v4344 = rt_range(rt_add(F.v4344, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4347 = ((*(yR105 *)rt_nil_check(F.v4347))).f_next;
}
yr997_SA(y_str(" y_desc_record(", 15));
yr1004_ST(yr1756_DescOf(F.p1876));
yr997_SA(y_str(", sizeof(", 9));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1876))).f_cname);
yr997_SA(y_str("), ", 3));
yr1010_SI(F.v4351);
yr997_SA(y_str(", o, (const ydesc *const *)f); }", 32));
F.v4349 = yr1016_SE();
yr1092_Emit(F.v4349);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1883_FindField(void * a_p1884, rt_int a_p1885) {
struct yf1886 F;
memset((void *)&F, 0, sizeof F);
F.p1884 = a_p1884;
F.p1885 = a_p1885;
F.v4398 = ((*(yR100 *)rt_nil_check(F.p1884))).f_fields;
while ((!(F.v4398 == ((void *)0)))) {
if ((((*(yR105 *)rt_nil_check(F.v4398))).f_name == F.p1885)) {
{ void * rv4399 = F.v4398;
return rv4399; }
}
F.v4398 = ((*(yR105 *)rt_nil_check(F.v4398))).f_next;
}
{ void * rv4400 = ((void *)0);
return rv4400; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2001_CharOrd(void * a_p2002, rt_int a_p2003) {
struct yf2004 F;
memset((void *)&F, 0, sizeof F);
F.p2002 = a_p2002;
F.p2003 = a_p2003;
if ((((*(yR100 *)rt_nil_check(F.p2002))).f_tid == ((*(yR100 *)rt_nil_check(v1687))).f_tid)) {
if ((((rt_int *)(v890).p)[y_ix1(v890, F.p2003)] == INT64_C(1))) {
{ rt_int rv4416 = ((rt_int *)(v931).p)[y_ix1(v931, yr1063_TChar(F.p2003, INT64_C(1)))];
return rv4416; }
}
F.v4407 = INT64_C(0);
F.v4411 = INT64_C(1);
{ rt_int hi4424 = ((rt_int *)(v890).p)[y_ix1(v890, v1998)];
for (rt_int i4423 = INT64_C(1); i4423 <= hi4424; i4423++) { F.c_4422 = i4423;
if ((yr1063_TChar(v1998, rt_range(F.c_4422, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 32)) {
F.v4413 = yr1028_Intern(rt_range(rt_add(((rt_int *)(v888).p)[y_ix1(v888, v1998)], (rt_sub(F.v4411, INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub(F.c_4422, F.v4411), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((F.v4413 == F.p2003)) {
if ((F.v4407 < INT64_C(32))) {
{ rt_int rv4431 = F.v4407;
return rv4431; }
}
if ((F.v4407 == INT64_C(32))) {
{ rt_int rv4434 = INT64_C(32);
return rv4434; }
}
if ((F.v4407 == INT64_C(33))) {
{ rt_int rv4437 = INT64_C(127);
return rv4437; }
}
if ((F.v4407 == INT64_C(34))) {
{ rt_int rv4440 = INT64_C(39);
return rv4440; }
}
{ rt_int rv4442 = INT64_C(34);
return rv4442; }
}
F.v4407 = rt_range(rt_add(F.v4407, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4411 = rt_range(rt_add(F.c_4422, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i4423 == hi4424) break;
}}
{ rt_int rv4448 = INT64_C(-1);
return rv4448; }
}
if ((!(((*(yR100 *)rt_nil_check(F.p2002))).f_kind == v789))) {
{ rt_int rv4450 = INT64_C(-1);
return rv4450; }
}
F.v4405 = ((*(yR100 *)rt_nil_check(F.p2002))).f_lits;
F.v4409 = INT64_C(0);
while ((!(F.v4405 == ((void *)0)))) {
if (yr1048_TEq(((*(yR95 *)rt_nil_check(F.v4405))).f_text, F.p2003)) {
{ rt_int rv4452 = F.v4409;
return rv4452; }
}
F.v4409 = rt_range(rt_add(F.v4409, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4405 = ((*(yR95 *)rt_nil_check(F.v4405))).f_next;
}
{ rt_int rv4456 = INT64_C(-1);
return rv4456; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2008_AlphabetFor(void * a_p2009, void * a_p2010) {
struct yf2011 F;
memset((void *)&F, 0, sizeof F);
F.p2009 = a_p2009;
F.p2010 = a_p2010;
if ((!(((*(yR95 *)rt_nil_check(F.p2009))).f_d == ((void *)0)))) {
F.v4461 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2009))).f_d))).f_name, ((*(yR95 *)rt_nil_check(F.p2009))).f_line));
if ((((((!(((*(yR115 *)rt_nil_check(F.v4461))).f_kind == v837))) && ((!(((*(yR115 *)rt_nil_check(F.v4461))).f_kind == v840))))) || ((!(((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4461))).f_rep))).f_kind == v789))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2009))).f_line, ((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2009))).f_d))).f_name, y_str(" is not an alphabet", 19));
}
{ void * rv4463 = ((*(yR115 *)rt_nil_check(F.v4461))).f_rep;
return rv4463; }
}
if ((!(F.p2010 == ((void *)0)))) {
if ((((*(yR100 *)rt_nil_check(F.p2010))).f_kind == v789)) {
{ void * rv4464 = F.p2010;
return rv4464; }
}
if ((yr1732_IsArrayLike(F.p2010) && ((!(((*(yR100 *)rt_nil_check(F.p2010))).f_elem == ((void *)0)))))) {
if ((((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p2010))).f_elem))).f_kind == v789)) {
{ void * rv4465 = ((*(yR100 *)rt_nil_check(F.p2010))).f_elem;
return rv4465; }
}
}
}
{ void * rv4466 = v1687;
return rv4466; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2015_CharValue(void * a_p2016, rt_int a_p2017, rt_int a_p2018) {
struct yf2019 F;
memset((void *)&F, 0, sizeof F);
F.p2016 = a_p2016;
F.p2017 = a_p2017;
F.p2018 = a_p2018;
F.v4472 = yr2001_CharOrd(F.p2016, F.p2017);
if ((F.v4472 < INT64_C(0))) {
yr986_SB();
yr997_SA(y_str("'", 1));
yr1004_ST(F.p2017);
yr997_SA(y_str("' is not a character of ", 24));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p2016))).f_tname);
F.v4474 = yr1016_SE();
yr1117_Fail(F.p2018, F.v4474);
}
{ rt_int rv4478 = F.v4472;
return rv4478; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2023_StringCodes(void * a_p2024, rt_int a_p2025, rt_int * a_p2026, rt_int a_p2027) {
struct yf2028 F;
memset((void *)&F, 0, sizeof F);
F.p2024 = a_p2024;
F.p2025 = a_p2025;
F.p2026_o = a_p2026;
F.p2027 = a_p2027;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&F.yd_4496, 1, lo, hi, &y_d_int); }
y_init(&F.yd_4496, &F.v4498);
F.p2026 = INT64_C(0);
F.v4485 = INT64_C(1);
while ((F.v4485 <= ((rt_int *)(v890).p)[y_ix1(v890, F.p2025)])) {
F.v4500 = yr1063_TChar(F.p2025, F.v4485);
if ((F.v4500 == 39)) {
F.v4487 = rt_range(rt_add(F.v4485, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1063_TChar(F.p2025, F.v4487) == 39))) {
F.v4487 = rt_range(rt_add(F.v4487, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v4502 = yr1028_Intern(rt_range(rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p2025)], F.v4485), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v4487, F.v4485)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v4489 = yr2015_CharValue(F.p2024, F.v4502, F.p2027);
F.v4485 = rt_range(rt_add(F.v4487, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v4502 = yr1028_Intern(rt_range(rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p2025)], (rt_sub(F.v4485, INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), INT64_C(1));
F.v4489 = yr2015_CharValue(F.p2024, F.v4502, F.p2027);
F.v4485 = rt_range(rt_add(F.v4485, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.p2026 >= INT64_C(4096))) {
yr1124_FailS(F.p2027, y_str("string literal too long", 23));
}
F.p2026 = rt_range(rt_add(F.p2026, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(F.v4498).p)[y_ix1(F.v4498, F.p2026)] = F.v4489;
}
yr986_SB();
yr991_SC(34);
{ rt_int hi4533 = F.p2026;
for (rt_int i4532 = INT64_C(1); i4532 <= hi4533; i4532++) { F.c_4531 = i4532;
F.v4489 = ((rt_int *)(F.v4498).p)[y_ix1(F.v4498, F.c_4531)];
if ((((F.v4489 == INT64_C(34))) || ((F.v4489 == INT64_C(92))))) {
yr991_SC(92);
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, F.v4489)]);
} else if (((((F.v4489 >= INT64_C(32))) && ((F.v4489 < INT64_C(127)))) && (((((!(F.v4489 == INT64_C(63)))) || ((F.c_4531 == INT64_C(1)))) || ((!(((rt_int *)(F.v4498).p)[y_ix1(F.v4498, rt_sub(F.c_4531, INT64_C(1)))] == INT64_C(63)))))))) {
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, F.v4489)]);
} else {
yr991_SC(92);
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, rt_add(INT64_C(48), (rt_div(F.v4489, INT64_C(64)))))]);
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, rt_add(INT64_C(48), (rt_mod((rt_div(F.v4489, INT64_C(8))), INT64_C(8)))))]);
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, rt_add(INT64_C(48), (rt_mod(F.v4489, INT64_C(8)))))]);
}
if (i4532 == hi4533) break;
}}
yr991_SC(34);
{ rt_int rv4560 = yr1016_SE();
(*F.p2026_o) = F.p2026;
return rv4560; }
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
F.v4578 = yr2008_AlphabetFor(F.p2033, ((void *)0));
F.p2035 = yr2001_CharOrd(F.v4578, ((*(yR95 *)rt_nil_check(F.p2033))).f_text);
F.p2034 = (F.p2035 >= INT64_C(0));
(*F.p2034_o) = F.p2034;
(*F.p2035_o) = F.p2035;
return;
}
if ((((*(yR95 *)rt_nil_check(F.p2033))).f_kind == v747)) {
if ((!(((*(yR95 *)rt_nil_check(F.p2033))).f_d == ((void *)0)))) {
F.v4566 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2033))).f_d))).f_name, ((*(yR95 *)rt_nil_check(F.p2033))).f_line));
F.v4566 = yr1637_FindLit(((*(yR95 *)rt_nil_check(F.p2033))).f_name, ((*(yR115 *)rt_nil_check(F.v4566))).f_rep);
} else {
F.v4566 = yr1612_Find(((*(yR95 *)rt_nil_check(F.p2033))).f_name);
}
if ((F.v4566 == ((void *)0))) {
(*F.p2034_o) = F.p2034;
(*F.p2035_o) = F.p2035;
return;
}
F.v4566 = yr1677_Real(F.v4566);
if ((((((((*(yR115 *)rt_nil_check(F.v4566))).f_kind == v843)) || ((((*(yR115 *)rt_nil_check(F.v4566))).f_kind == v834)))) && ((*(yR115 *)rt_nil_check(F.v4566))).f_hasmv)) {
F.p2034 = 1;
F.p2035 = ((*(yR115 *)rt_nil_check(F.v4566))).f_mval;
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
yr2032_Manifest(((*(yR95 *)rt_nil_check(F.p2033))).f_a, &F.v4572, &F.v4568);
yr2032_Manifest(((*(yR95 *)rt_nil_check(F.p2033))).f_b, &F.v4574, &F.v4570);
if ((!((F.v4572 && F.v4574)))) {
(*F.p2034_o) = F.p2034;
(*F.p2035_o) = F.p2035;
return;
}
F.v4576 = ((*(yR95 *)rt_nil_check(F.p2033))).f_name;
F.p2034 = 1;
if ((F.v4576 == v543)) {
F.p2035 = rt_range(rt_add(F.v4568, F.v4570), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v4576 == v546)) {
F.p2035 = rt_range(rt_sub(F.v4568, F.v4570), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v4576 == v549)) {
F.p2035 = rt_range(rt_mul(F.v4568, F.v4570), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v4576 == v246)) && ((!(F.v4570 == INT64_C(0)))))) {
F.p2035 = rt_range(rt_div(F.v4568, F.v4570), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v4576 == v348)) && ((!(F.v4570 == INT64_C(0)))))) {
F.p2035 = rt_range(rt_mod(F.v4568, F.v4570), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
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
{ rt_int rv4599 = F.p2041;
return rv4599; }
}
yr986_SB();
yr997_SA(y_str("rt_range(", 9));
yr1004_ST(F.p2041);
yr997_SA(y_str(", ", 2));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p2042))).f_lo);
yr997_SA(y_str(", ", 2));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p2042))).f_hi);
yr997_SA(y_str(")", 1));
{ rt_int rv4604 = yr1016_SE();
return rv4604; }
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
{ rt_int rv4610 = yr1016_SE();
return rv4610; }
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
{ rt_int rv4617 = yr1016_SE();
return rv4617; }
}
{ rt_int rv4618 = F.p2041;
return rv4618; }
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
F.v4628 = yr1146_Fresh(y_str("t", 1));
yr986_SB();
yr997_SA(y_str("{ ", 2));
yr1004_ST(yr1750_CType(F.p2050));
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v4628);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.p2051);
yr997_SA(y_str("; y_store(", 10));
yr1004_ST(yr1756_DescOf(F.p2050));
yr997_SA(y_str(", &", 3));
yr1004_ST(F.p2049);
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v4628);
yr997_SA(y_str("); }", 4));
F.v4626 = yr1016_SE();
yr1092_Emit(F.v4626);
return;
}
yr986_SB();
yr1004_ST(F.p2049);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2040_Convert(F.p2051, F.p2050, F.p2052));
yr997_SA(y_str(";", 1));
F.v4626 = yr1016_SE();
yr1092_Emit(F.v4626);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2058_IsVariable(void * a_p2059) {
struct yf2060 F;
memset((void *)&F, 0, sizeof F);
F.p2059 = a_p2059;
if ((((*(yR95 *)rt_nil_check(F.p2059))).f_kind == v747)) {
F.v4642 = yr1612_Find(((*(yR95 *)rt_nil_check(F.p2059))).f_name);
if ((F.v4642 == ((void *)0))) {
{ rt_int rv4646 = 0;
return rv4646; }
}
if (((*(yR115 *)rt_nil_check(F.v4642))).f_readonly) {
{ rt_int rv4648 = 0;
return rv4648; }
}
{ rt_int rv4649 = (((*(yR115 *)rt_nil_check(yr1677_Real(F.v4642)))).f_kind == v831);
return rv4649; }
}
if ((((*(yR95 *)rt_nil_check(F.p2059))).f_kind == v759)) {
{ rt_int rv4651 = 1;
return rv4651; }
}
if ((((*(yR95 *)rt_nil_check(F.p2059))).f_kind == v756)) {
{ rt_int rv4652 = yr2058_IsVariable(((*(yR95 *)rt_nil_check(F.p2059))).f_a);
return rv4652; }
}
if ((((*(yR95 *)rt_nil_check(F.p2059))).f_kind == v753)) {
if ((!yr2058_IsVariable(((*(yR95 *)rt_nil_check(F.p2059))).f_a))) {
{ rt_int rv4654 = 0;
return rv4654; }
}
F.v4644 = yr1883_FindField(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2059))).f_a))).f_rep, ((*(yR95 *)rt_nil_check(F.p2059))).f_name);
if ((F.v4644 == ((void *)0))) {
{ rt_int rv4656 = 0;
return rv4656; }
}
{ rt_int rv4657 = (!((*(yR105 *)rt_nil_check(F.v4644))).f_isconst);
return rv4657; }
}
{ rt_int rv4659 = 0;
return rv4659; }
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
{ rt_int rv4669 = yr1016_SE();
return rv4669; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2078_Lit(void * a_p2079, rt_int a_p2080) {
struct yf2081 F;
memset((void *)&F, 0, sizeof F);
F.p2079 = a_p2079;
F.p2080 = a_p2080;
F.v4674 = yr1714_CopyRep(F.p2079);
yr1811_SetRange(F.v4674, F.p2080, F.p2080);
{ void * rv4675 = F.v4674;
return rv4675; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2085_Qualifier(void * a_p2086) {
struct yf2087 F;
memset((void *)&F, 0, sizeof F);
F.p2086 = a_p2086;
F.v4679 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2086))).f_d))).f_name, ((*(yR95 *)rt_nil_check(F.p2086))).f_line));
if ((((!(((*(yR115 *)rt_nil_check(F.v4679))).f_kind == v837))) && ((!(((*(yR115 *)rt_nil_check(F.v4679))).f_kind == v840))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2086))).f_line, ((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2086))).f_d))).f_name, y_str(" is not a type", 14));
}
{ void * rv4681 = ((*(yR115 *)rt_nil_check(F.v4679))).f_rep;
return rv4681; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2091_Expr(void * a_p2092, void * a_p2093, rt_int * a_p2094, void * * a_p2095) {
struct yf2096 F;
memset((void *)&F, 0, sizeof F);
F.p2092 = a_p2092;
F.p2093 = a_p2093;
F.p2094_o = a_p2094;
F.p2095_o = a_p2095;
F.v4688 = ((*(yR95 *)rt_nil_check(F.p2092))).f_kind;
v960 = ((*(yR95 *)rt_nil_check(F.p2092))).f_line;
if ((F.v4688 == v771)) {
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p2092))).f_a, F.p2093, &F.v4692, &F.p2095);
F.p2094 = yr2072_Paren(F.v4692);
} else if ((F.v4688 == v729)) {
F.p2095 = yr2078_Lit(v1683, ((*(yR95 *)rt_nil_check(F.p2092))).f_ival);
if ((!(((*(yR95 *)rt_nil_check(F.p2092))).f_d == ((void *)0)))) {
F.v4698 = yr2085_Qualifier(F.p2092);
if ((!(((*(yR100 *)rt_nil_check(F.v4698))).f_kind == v774))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2092))).f_line, y_str("an integer literal qualified by a type that is not INTEGER", 58));
}
((*(yR100 *)rt_nil_check(F.p2095))).f_tid = ((*(yR100 *)rt_nil_check(F.v4698))).f_tid;
((*(yR100 *)rt_nil_check(F.p2095))).f_tname = ((*(yR100 *)rt_nil_check(F.v4698))).f_tname;
}
yr986_SB();
yr997_SA(y_str("INT64_C(", 8));
yr1010_SI(((*(yR95 *)rt_nil_check(F.p2092))).f_ival);
yr997_SA(y_str(")", 1));
F.p2094 = yr1016_SE();
} else if ((F.v4688 == v738)) {
F.v4698 = yr2008_AlphabetFor(F.p2092, F.p2093);
F.v4704 = yr2015_CharValue(F.v4698, ((*(yR95 *)rt_nil_check(F.p2092))).f_text, ((*(yR95 *)rt_nil_check(F.p2092))).f_line);
F.p2095 = yr2078_Lit(F.v4698, F.v4704);
yr986_SB();
yr1010_SI(F.v4704);
F.p2094 = yr1016_SE();
} else if ((F.v4688 == v741)) {
F.v4698 = yr2008_AlphabetFor(F.p2092, F.p2093);
F.v4692 = yr2023_StringCodes(F.v4698, ((*(yR95 *)rt_nil_check(F.p2092))).f_text, &F.v4702, ((*(yR95 *)rt_nil_check(F.p2092))).f_line);
F.p2095 = yr1707_NewRep(v816, yr1021_T(y_str("string", 6)));
((*(yR100 *)rt_nil_check(F.p2095))).f_tname = yr1021_T(y_str("a string literal", 16));
((*(yR100 *)rt_nil_check(F.p2095))).f_elem = F.v4698;
((*(yR100 *)rt_nil_check(F.p2095))).f_nidx = INT64_C(1);
((*(yR100 *)rt_nil_check(F.p2095))).f_nlits = F.v4702;
yr986_SB();
yr997_SA(y_str("y_str(", 6));
yr1004_ST(F.v4692);
yr997_SA(y_str(", ", 2));
yr1010_SI(F.v4702);
yr997_SA(y_str(")", 1));
F.p2094 = yr1016_SE();
} else if ((F.v4688 == v735)) {
F.p2095 = v1695;
if ((!(((*(yR95 *)rt_nil_check(F.p2092))).f_d == ((void *)0)))) {
F.p2095 = yr2085_Qualifier(F.p2092);
}
F.p2094 = yr2072_Paren(((*(yR95 *)rt_nil_check(F.p2092))).f_text);
} else if ((F.v4688 == v732)) {
F.p2095 = v1697;
if ((!(((*(yR95 *)rt_nil_check(F.p2092))).f_d == ((void *)0)))) {
F.p2095 = yr2085_Qualifier(F.p2092);
}
F.p2094 = ((*(yR95 *)rt_nil_check(F.p2092))).f_text;
} else if ((F.v4688 == v744)) {
if ((((*(yR95 *)rt_nil_check(F.p2092))).f_d == ((void *)0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2092))).f_line, y_str("NIL is qualified by the name of a pointer type (VI.B.4)", 55));
}
F.p2095 = yr2085_Qualifier(F.p2092);
if ((!(((*(yR100 *)rt_nil_check(F.p2095))).f_kind == v798))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2092))).f_line, y_str("NIL of a type that is not a pointer", 35));
}
F.p2094 = yr1021_T(y_str("((void *)0)", 11));
} else if ((F.v4688 == v747)) {
if ((!(((*(yR95 *)rt_nil_check(F.p2092))).f_d == ((void *)0)))) {
F.v4698 = yr2085_Qualifier(F.p2092);
F.v4690 = yr1637_FindLit(((*(yR95 *)rt_nil_check(F.p2092))).f_name, F.v4698);
if ((F.v4690 == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2092))).f_line, ((*(yR95 *)rt_nil_check(F.p2092))).f_name, y_str(" is not a literal of that type", 30));
}
} else {
F.v4690 = yr1624_Lookup(((*(yR95 *)rt_nil_check(F.p2092))).f_name, ((*(yR95 *)rt_nil_check(F.p2092))).f_line);
}
yr2108_NameExpr(F.p2092, F.v4690, &F.p2094, &F.p2095);
} else if ((F.v4688 == v750)) {
yr2263_CallExpr(F.p2092, F.p2093, 0, &F.p2094, &F.p2095);
} else if ((F.v4688 == v753)) {
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p2092))).f_a, ((void *)0), &F.v4692, &F.v4698);
((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2092))).f_a))).f_rep = F.v4698;
if ((!(((*(yR100 *)rt_nil_check(F.v4698))).f_kind == v795))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2092))).f_line, ((*(yR95 *)rt_nil_check(F.p2092))).f_name, y_str(": a component of something that is not a record", 47));
}
if (((*(yR100 *)rt_nil_check(F.v4698))).f_opaque) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2092))).f_line, ((*(yR100 *)rt_nil_check(F.v4698))).f_tname, y_str(" is exported opaquely: its components are hidden (X.B.3)", 56));
}
F.v4700 = yr1883_FindField(F.v4698, ((*(yR95 *)rt_nil_check(F.p2092))).f_name);
if ((F.v4700 == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2092))).f_line, ((*(yR95 *)rt_nil_check(F.p2092))).f_name, y_str(" is not a component of this record", 34));
}
F.p2095 = ((*(yR105 *)rt_nil_check(F.v4700))).f_rep;
if ((!(((*(yR105 *)rt_nil_check(F.v4700))).f_variant == INT64_C(0)))) {
F.v4694 = yr1146_Fresh(y_str("vr", 2));
yr986_SB();
yr997_SA(y_str("(*({ ", 5));
yr1004_ST(yr1750_CType(F.v4698));
yr997_SA(y_str(" *", 2));
yr1004_ST(F.v4694);
yr997_SA(y_str(" = &", 4));
yr1004_ST(yr2072_Paren(F.v4692));
yr997_SA(y_str("; if (!(", 8));
yr1004_ST(yr2100_VariantTest(F.v4698, F.v4700, F.v4694));
yr997_SA(y_str(")) rt_raise(RT_X_TAG); &", 24));
yr1004_ST(F.v4694);
yr997_SA(y_str("->f_", 4));
yr1004_ST(((*(yR95 *)rt_nil_check(F.p2092))).f_name);
yr997_SA(y_str("; }))", 5));
F.p2094 = yr1016_SE();
} else {
yr986_SB();
yr1004_ST(yr2072_Paren(F.v4692));
yr997_SA(y_str(".f_", 3));
yr1004_ST(((*(yR95 *)rt_nil_check(F.p2092))).f_name);
F.p2094 = yr1016_SE();
}
} else if ((F.v4688 == v759)) {
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p2092))).f_a, ((void *)0), &F.v4692, &F.v4698);
if ((!(((*(yR100 *)rt_nil_check(F.v4698))).f_kind == v798))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2092))).f_line, y_str("^ of something that is not a pointer", 36));
}
if ((((*(yR100 *)rt_nil_check(F.v4698))).f_elem == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2092))).f_line, ((*(yR100 *)rt_nil_check(F.v4698))).f_forward, y_str(" is not declared", 16));
}
F.p2095 = ((*(yR100 *)rt_nil_check(F.v4698))).f_elem;
yr986_SB();
yr997_SA(y_str("(*(", 3));
yr1004_ST(yr1750_CType(F.p2095));
yr997_SA(y_str(" *)rt_nil_check(", 16));
yr1004_ST(F.v4692);
yr997_SA(y_str("))", 2));
F.p2094 = yr1016_SE();
} else if ((F.v4688 == v756)) {
yr2117_IndexExpr(F.p2092, &F.p2094, &F.p2095);
} else if ((F.v4688 == v762)) {
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p2092))).f_a, v1685, &F.v4692, &F.v4698);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2092))).f_line, v1685, F.v4698);
F.p2095 = v1685;
yr986_SB();
yr997_SA(y_str("(!", 2));
yr1004_ST(F.v4692);
yr997_SA(y_str(")", 1));
F.p2094 = yr1016_SE();
} else if ((F.v4688 == v765)) {
if ((!yr2252_UserOp(F.p2092, rt_range(v546, INT64_C(0), INT64_C(4000000)), ((*(yR95 *)rt_nil_check(F.p2092))).f_a, ((void *)0), &F.p2094, &F.p2095))) {
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p2092))).f_a, F.p2093, &F.v4692, &F.v4698);
yr2125_NegExpr(F.p2092, F.v4692, F.v4698, &F.p2094, &F.p2095);
}
} else if ((F.v4688 == v768)) {
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
F.v4745 = ((*(yR105 *)rt_nil_check(F.p2102))).f_labels;
yr986_SB();
yr997_SA(y_str("0", 1));
while ((!(F.v4745 == ((void *)0)))) {
yr2032_Manifest(F.v4745, &F.v4747, &F.v4749);
yr997_SA(y_str(" || ", 4));
yr1004_ST(F.p2103);
yr997_SA(y_str("->f_", 4));
yr1004_ST(((*(yR105 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p2101))).f_selector))).f_name);
yr997_SA(y_str(" == ", 4));
yr1010_SI(F.v4749);
F.v4745 = ((*(yR95 *)rt_nil_check(F.v4745))).f_next;
}
{ rt_int rv4754 = yr1016_SE();
return rv4754; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2108_NameExpr(void * a_p2109, void * a_p2110, rt_int * a_p2111, void * * a_p2112) {
struct yf2113 F;
memset((void *)&F, 0, sizeof F);
F.p2109 = a_p2109;
F.p2110 = a_p2110;
F.p2111_o = a_p2111;
F.p2112_o = a_p2112;
F.v4761 = yr1677_Real(F.p2110);
if ((((*(yR115 *)rt_nil_check(F.v4761))).f_kind == v843)) {
if ((((((*(yR95 *)rt_nil_check(F.p2109))).f_d == ((void *)0))) && yr1631_Ambiguous(F.v4761))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2109))).f_line, ((*(yR95 *)rt_nil_check(F.p2109))).f_name, y_str(" names values of two types here: qualify it (VI.A.3)", 52));
}
F.p2112 = yr2078_Lit(((*(yR115 *)rt_nil_check(F.v4761))).f_rep, ((*(yR115 *)rt_nil_check(F.v4761))).f_mval);
yr986_SB();
yr1010_SI(((*(yR115 *)rt_nil_check(F.v4761))).f_mval);
F.p2111 = yr1016_SE();
(*F.p2111_o) = F.p2111;
(*F.p2112_o) = F.p2112;
return;
}
if ((((((*(yR115 *)rt_nil_check(F.v4761))).f_kind == v831)) || ((((*(yR115 *)rt_nil_check(F.v4761))).f_kind == v834)))) {
F.p2112 = ((*(yR115 *)rt_nil_check(F.v4761))).f_rep;
F.p2111 = yr1671_SymPath(F.v4761);
(*F.p2111_o) = F.p2111;
(*F.p2112_o) = F.p2112;
return;
}
if ((((*(yR115 *)rt_nil_check(F.v4761))).f_kind == v846)) {
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
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p2118))).f_a, ((void *)0), &F.v4770, &F.v4776);
if ((!yr1732_IsArrayLike(F.v4776))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2118))).f_line, y_str("[] of something that is not an array", 36));
}
F.v4784 = yr1260_Count(((*(yR95 *)rt_nil_check(F.p2118))).f_b);
if ((!(F.v4784 == ((*(yR100 *)rt_nil_check(F.v4776))).f_nidx))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2118))).f_line, y_str("the number of subscripts is not the number of dimensions", 56));
}
F.p2120 = ((*(yR100 *)rt_nil_check(F.v4776))).f_elem;
F.v4786 = (((((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2118))).f_a))).f_kind == v747)) || ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2118))).f_a))).f_kind == v753))) || ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2118))).f_a))).f_kind == v756))) || ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2118))).f_a))).f_kind == v759)));
if (F.v4786) {
F.v4774 = F.v4770;
} else {
F.v4774 = yr1146_Fresh(y_str("ya", 2));
}
yr986_SB();
if ((!F.v4786)) {
yr997_SA(y_str("(*({ yarr ", 10));
yr1004_ST(F.v4774);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.v4770);
yr997_SA(y_str("; &", 3));
}
yr997_SA(y_str("((", 2));
yr1004_ST(yr1750_CType(F.p2120));
yr997_SA(y_str(" *)(", 4));
yr1004_ST(F.v4774);
yr997_SA(y_str(").p)[y_ix", 9));
yr1010_SI(F.v4784);
yr997_SA(y_str("(", 1));
yr1004_ST(F.v4774);
F.p2119 = yr1016_SE();
F.v4782 = ((*(yR95 *)rt_nil_check(F.p2118))).f_b;
F.v4780 = ((*(yR100 *)rt_nil_check(F.v4776))).f_idx;
while ((!(F.v4782 == ((void *)0)))) {
yr2091_Expr(F.v4782, F.v4780, &F.v4772, &F.v4778);
if ((((!(F.v4780 == ((void *)0)))) && ((((*(yR100 *)rt_nil_check(F.v4776))).f_kind == v792)))) {
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.v4782))).f_line, F.v4780, F.v4778);
} else if ((!((((((*(yR100 *)rt_nil_check(F.v4778))).f_kind == v774)) || yr1720_IsDiscrete(F.v4778))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v4782))).f_line, y_str("a subscript is an integer or scalar value", 41));
}
yr986_SB();
yr1004_ST(F.p2119);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v4772);
F.p2119 = yr1016_SE();
if ((!(F.v4780 == ((void *)0)))) {
F.v4780 = ((*(yR100 *)rt_nil_check(F.v4780))).f_link;
}
F.v4782 = ((*(yR95 *)rt_nil_check(F.v4782))).f_next;
}
yr986_SB();
yr1004_ST(F.p2119);
yr997_SA(y_str(")]", 2));
if ((!F.v4786)) {
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
F.v4821 = yr1714_CopyRep(F.p2136);
((*(yR100 *)rt_nil_check(F.v4821))).f_lo = INT64_C(0);
((*(yR100 *)rt_nil_check(F.v4821))).f_hi = INT64_C(0);
((*(yR100 *)rt_nil_check(F.v4821))).f_hasm = 0;
{ void * rv4825 = F.v4821;
return rv4825; }
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
{ rt_int rv4833 = yr1016_SE();
return rv4833; }
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
{ rt_int rv4842 = yr1016_SE();
return rv4842; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2159_EqCode(rt_int a_p2160, void * a_p2161, rt_int a_p2162, void * a_p2163) {
struct yf2164 F;
memset((void *)&F, 0, sizeof F);
F.p2160 = a_p2160;
F.p2161 = a_p2161;
F.p2162 = a_p2162;
F.p2163 = a_p2163;
F.v4853 = F.p2161;
if ((((*(yR100 *)rt_nil_check(F.p2161))).f_kind == v816)) {
F.v4853 = F.p2163;
}
if ((((((((*(yR100 *)rt_nil_check(F.v4853))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.v4853))).f_kind == v795))) || ((((*(yR100 *)rt_nil_check(F.v4853))).f_kind == v813))) || ((((*(yR100 *)rt_nil_check(F.v4853))).f_kind == v816)))) {
F.v4849 = yr1146_Fresh(y_str("e", 1));
F.v4851 = yr1146_Fresh(y_str("e", 1));
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(yr1750_CType(F.v4853));
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v4849);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.p2160);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v4851);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.p2162);
yr997_SA(y_str("; y_eq(", 7));
if ((((((*(yR100 *)rt_nil_check(F.v4853))).f_kind == v813)) || ((((*(yR100 *)rt_nil_check(F.v4853))).f_kind == v816)))) {
yr997_SA(y_str("y_desc_vector(", 14));
yr1004_ST(yr1756_DescOf(((*(yR100 *)rt_nil_check(F.v4853))).f_elem));
yr997_SA(y_str(")", 1));
} else {
yr1004_ST(yr1756_DescOf(F.v4853));
}
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v4849);
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v4851);
yr997_SA(y_str("); })", 5));
{ rt_int rv4867 = yr1016_SE();
return rv4867; }
}
if ((((*(yR100 *)rt_nil_check(F.v4853))).f_kind == v804)) {
{ rt_int rv4869 = yr2141_Call2(y_str("y_set_eq", 8), F.p2160, F.p2162);
return rv4869; }
}
{ rt_int rv4871 = yr2150_Infix(F.p2160, y_str("==", 2), F.p2162);
return rv4871; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2168_IsOrdered(void * a_p2169) {
struct yf2170 F;
memset((void *)&F, 0, sizeof F);
F.p2169 = a_p2169;
if ((((((((*(yR100 *)rt_nil_check(F.p2169))).f_kind == v774)) || ((((*(yR100 *)rt_nil_check(F.p2169))).f_kind == v780))) || ((((*(yR100 *)rt_nil_check(F.p2169))).f_kind == v777))) || ((((*(yR100 *)rt_nil_check(F.p2169))).f_kind == v789)))) {
{ rt_int rv4875 = 1;
return rv4875; }
}
{ rt_int rv4876 = (((((*(yR100 *)rt_nil_check(F.p2169))).f_kind == v786)) && ((*(yR100 *)rt_nil_check(F.p2169))).f_ordered);
return rv4876; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2174_BinExpr(void * a_p2175, void * a_p2176, rt_int * a_p2177, void * * a_p2178) {
struct yf2179 F;
memset((void *)&F, 0, sizeof F);
F.p2175 = a_p2175;
F.p2176 = a_p2176;
F.p2177_o = a_p2177;
F.p2178_o = a_p2178;
F.v4883 = ((*(yR95 *)rt_nil_check(F.p2175))).f_name;
if (yr2252_UserOp(F.p2175, F.v4883, ((*(yR95 *)rt_nil_check(F.p2175))).f_a, ((*(yR95 *)rt_nil_check(F.p2175))).f_b, &F.p2177, &F.p2178)) {
(*F.p2177_o) = F.p2177;
(*F.p2178_o) = F.p2178;
return;
}
if ((((F.v4883 == v207)) || ((F.v4883 == v369)))) {
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p2175))).f_a, v1685, &F.v4885, &F.v4891);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2175))).f_line, v1685, F.v4891);
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p2175))).f_b, v1685, &F.v4887, &F.v4893);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2175))).f_line, v1685, F.v4893);
F.p2178 = v1685;
if ((F.v4883 == v207)) {
F.p2177 = yr2150_Infix(F.v4885, y_str("&&", 2), F.v4887);
} else {
F.p2177 = yr2150_Infix(F.v4885, y_str("||", 2), F.v4887);
}
(*F.p2177_o) = F.p2177;
(*F.p2178_o) = F.p2178;
return;
}
if ((F.v4883 == v330)) {
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p2175))).f_b, ((void *)0), &F.v4887, &F.v4893);
if ((!(((*(yR100 *)rt_nil_check(F.v4893))).f_kind == v804))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2175))).f_line, y_str("IN needs a set on its right", 27));
}
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p2175))).f_a, ((*(yR100 *)rt_nil_check(F.v4893))).f_elem, &F.v4885, &F.v4891);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2175))).f_line, ((*(yR100 *)rt_nil_check(F.v4893))).f_elem, F.v4891);
F.p2178 = v1685;
F.p2177 = yr2141_Call2(y_str("y_set_in", 8), F.v4885, F.v4887);
(*F.p2177_o) = F.p2177;
(*F.p2178_o) = F.p2178;
return;
}
F.v4895 = ((void *)0);
if (((((((((!(F.p2176 == ((void *)0)))) && ((!(F.v4883 == v555)))) && ((!(F.v4883 == v540)))) && ((!(F.v4883 == v558)))) && ((!(F.v4883 == v510)))) && ((!(F.v4883 == v561)))) && ((!(F.v4883 == v513))))) {
F.v4895 = F.p2176;
}
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p2175))).f_a, F.v4895, &F.v4885, &F.v4891);
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p2175))).f_b, F.v4891, &F.v4887, &F.v4893);
if ((((F.v4883 == v555)) || ((F.v4883 == v540)))) {
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2175))).f_line, F.v4891, F.v4893);
if (((((((*(yR100 *)rt_nil_check(F.v4891))).f_kind == v807)) || ((((*(yR100 *)rt_nil_check(F.v4891))).f_kind == v801))) || ((((*(yR100 *)rt_nil_check(F.v4891))).f_kind == v810)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2175))).f_line, y_str("= and # are not defined for signals, files and semaphores", 57));
}
if (((*(yR100 *)rt_nil_check(F.v4891))).f_opaque) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2175))).f_line, ((*(yR100 *)rt_nil_check(F.v4891))).f_tname, y_str(" is opaque here: = is not exported (X.B.3)", 42));
}
F.p2178 = v1685;
F.p2177 = yr2159_EqCode(F.v4885, F.v4891, F.v4887, F.v4893);
if ((F.v4883 == v540)) {
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
if ((((((F.v4883 == v558)) || ((F.v4883 == v510))) || ((F.v4883 == v561))) || ((F.v4883 == v513)))) {
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2175))).f_line, F.v4891, F.v4893);
if ((!yr2168_IsOrdered(F.v4891))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2175))).f_line, y_str("< <= > >= apply to ordered values (VIII.A.1)", 44));
}
F.p2178 = v1685;
if ((F.v4883 == v558)) {
F.p2177 = yr2150_Infix(F.v4885, y_str("<", 1), F.v4887);
} else if ((F.v4883 == v510)) {
F.p2177 = yr2150_Infix(F.v4885, y_str("<=", 2), F.v4887);
} else if ((F.v4883 == v561)) {
F.p2177 = yr2150_Infix(F.v4885, y_str(">", 1), F.v4887);
} else {
F.p2177 = yr2150_Infix(F.v4885, y_str(">=", 2), F.v4887);
}
(*F.p2177_o) = F.p2177;
(*F.p2178_o) = F.p2178;
return;
}
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2175))).f_line, F.v4891, F.v4893);
F.v4897 = ((*(yR100 *)rt_nil_check(F.v4891))).f_kind;
if ((((*(yR100 *)rt_nil_check(F.v4891))).f_kind == v816)) {
F.v4897 = ((*(yR100 *)rt_nil_check(F.v4893))).f_kind;
}
if ((F.v4883 == v459)) {
if ((F.v4897 == v783)) {
F.p2178 = v1685;
F.p2177 = yr2150_Infix(F.v4885, y_str("!=", 2), F.v4887);
} else if ((F.v4897 == v804)) {
F.p2178 = F.v4891;
F.p2177 = yr2141_Call2(y_str("y_set_xor", 9), F.v4885, F.v4887);
} else {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2175))).f_line, y_str("XOR applies to BOOLEAN values and sets", 38));
}
(*F.p2177_o) = F.p2177;
(*F.p2178_o) = F.p2178;
return;
}
if ((F.v4897 == v804)) {
F.p2178 = F.v4891;
if ((F.v4883 == v543)) {
F.p2177 = yr2141_Call2(y_str("y_set_union", 11), F.v4885, F.v4887);
} else if ((F.v4883 == v546)) {
F.p2177 = yr2141_Call2(y_str("y_set_diff", 10), F.v4885, F.v4887);
} else if ((F.v4883 == v549)) {
F.p2177 = yr2141_Call2(y_str("y_set_inter", 11), F.v4885, F.v4887);
} else {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2175))).f_line, y_str("this operator does not apply to sets", 36));
}
(*F.p2177_o) = F.p2177;
(*F.p2178_o) = F.p2178;
return;
}
if ((F.v4897 == v774)) {
F.p2178 = yr2135_Unbounded(F.v4891);
if ((F.v4883 == v543)) {
F.p2177 = yr2141_Call2(y_str("rt_add", 6), F.v4885, F.v4887);
} else if ((F.v4883 == v546)) {
F.p2177 = yr2141_Call2(y_str("rt_sub", 6), F.v4885, F.v4887);
} else if ((F.v4883 == v549)) {
F.p2177 = yr2141_Call2(y_str("rt_mul", 6), F.v4885, F.v4887);
} else if ((F.v4883 == v246)) {
F.p2177 = yr2141_Call2(y_str("rt_div", 6), F.v4885, F.v4887);
} else if ((F.v4883 == v348)) {
F.p2177 = yr2141_Call2(y_str("rt_mod", 6), F.v4885, F.v4887);
} else if ((F.v4883 == v552)) {
F.p2178 = v1695;
yr986_SB();
yr997_SA(y_str("rt_fdiv((double)(", 17));
yr1004_ST(F.v4885);
yr997_SA(y_str("), (double)(", 12));
yr1004_ST(F.v4887);
yr997_SA(y_str("))", 2));
F.p2177 = yr1016_SE();
} else {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2175))).f_line, F.v4883, y_str(" is a free operator: no definition of it is visible (VIII.A)", 60));
}
(*F.p2177_o) = F.p2177;
(*F.p2178_o) = F.p2178;
return;
}
if ((((F.v4897 == v780)) || ((F.v4897 == v777)))) {
F.p2178 = yr2135_Unbounded(F.v4891);
if ((F.v4883 == v543)) {
F.p2177 = yr2150_Infix(F.v4885, y_str("+", 1), F.v4887);
} else if ((F.v4883 == v546)) {
F.p2177 = yr2150_Infix(F.v4885, y_str("-", 1), F.v4887);
} else if ((F.v4883 == v549)) {
F.p2177 = yr2150_Infix(F.v4885, y_str("*", 1), F.v4887);
} else if ((F.v4883 == v552)) {
F.p2178 = v1695;
F.p2177 = yr2141_Call2(y_str("rt_fdiv", 7), F.v4885, F.v4887);
} else {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2175))).f_line, F.v4883, y_str(" does not apply to these numbers", 32));
}
(*F.p2177_o) = F.p2177;
(*F.p2178_o) = F.p2178;
return;
}
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2175))).f_line, F.v4883, y_str(" does not apply to these values", 31));
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
{ rt_int rv4937 = 0;
return rv4937; }
}
if ((!(((*(yR100 *)rt_nil_check(F.p2215))).f_nidx == ((*(yR100 *)rt_nil_check(F.p2214))).f_nidx))) {
{ rt_int rv4939 = 0;
return rv4939; }
}
{ rt_int rv4940 = yr1768_SameType(((*(yR100 *)rt_nil_check(F.p2214))).f_elem, ((*(yR100 *)rt_nil_check(F.p2215))).f_elem);
return rv4940; }
}
if ((((*(yR100 *)rt_nil_check(F.p2214))).f_kind == v825)) {
{ rt_int rv4942 = 1;
return rv4942; }
}
{ rt_int rv4943 = yr1768_SameType(F.p2214, F.p2215);
return rv4943; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2220_Choose(void * a_p2221, rt_int a_p2222, rt_int a_p2223) {
struct yf2224 F;
memset((void *)&F, 0, sizeof F);
F.p2221 = a_p2221;
F.p2222 = a_p2222;
F.p2223 = a_p2223;
F.v4949 = F.p2221;
while ((!(F.v4949 == ((void *)0)))) {
if ((((*(yR115 *)rt_nil_check(F.v4949))).f_nparams == F.p2223)) {
F.v4953 = 1;
F.v4951 = ((*(yR115 *)rt_nil_check(F.v4949))).f_params;
F.v4955 = INT64_C(1);
while ((!(F.v4951 == ((void *)0)))) {
if ((!yr2213_Fits(((*(yR110 *)rt_nil_check(F.v4951))).f_rep, ((void * *)(v2199).p)[y_ix1(v2199, rt_add(F.p2222, F.v4955))]))) {
F.v4953 = 0;
}
F.v4955 = rt_range(rt_add(F.v4955, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4951 = ((*(yR110 *)rt_nil_check(F.v4951))).f_next;
}
if (F.v4953) {
{ void * rv4962 = F.v4949;
return rv4962; }
}
}
F.v4949 = ((*(yR115 *)rt_nil_check(F.v4949))).f_alt;
}
{ void * rv4963 = ((void *)0);
return rv4963; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2228_HidesStandard(void * a_p2229) {
struct yf2230 F;
memset((void *)&F, 0, sizeof F);
F.p2229 = a_p2229;
F.v4967 = F.p2229;
while ((!(F.v4967 == ((void *)0)))) {
if ((((!(((*(yR115 *)rt_nil_check(F.v4967))).f_decl == ((void *)0)))) && ((((*(yR95 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4967))).f_decl))).f_ival == INT64_C(0))))) {
{ rt_int rv4970 = 1;
return rv4970; }
}
F.v4967 = ((*(yR115 *)rt_nil_check(F.v4967))).f_alt;
}
{ rt_int rv4972 = 0;
return rv4972; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2234_CompileArgs(void * a_p2235, void * a_p2236, rt_int * a_p2237, rt_int * a_p2238) {
struct yf2239 F;
memset((void *)&F, 0, sizeof F);
F.p2235 = a_p2235;
F.p2236 = a_p2236;
F.p2237_o = a_p2237;
F.p2238_o = a_p2238;
F.v4979 = F.p2235;
F.v4981 = ((void *)0);
F.p2237 = v2210;
F.p2238 = INT64_C(0);
if ((!(F.p2236 == ((void *)0)))) {
F.v4981 = ((*(yR115 *)rt_nil_check(F.p2236))).f_params;
}
while ((!(F.v4979 == ((void *)0)))) {
if ((v2210 >= INT64_C(4000))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v4979))).f_line, y_str("calls nested too deeply", 23));
}
F.p2238 = rt_range(rt_add(F.p2238, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v2210 = rt_range(rt_add(F.p2237, F.p2238), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4983 = ((void *)0);
if ((!(F.v4981 == ((void *)0)))) {
F.v4983 = ((*(yR110 *)rt_nil_check(F.v4981))).f_rep;
F.v4981 = ((*(yR110 *)rt_nil_check(F.v4981))).f_next;
}
yr2091_Expr(F.v4979, F.v4983, &((rt_int *)(v2190).p)[y_ix1(v2190, rt_add(F.p2237, F.p2238))], &((void * *)(v2199).p)[y_ix1(v2199, rt_add(F.p2237, F.p2238))]);
((void * *)(v2208).p)[y_ix1(v2208, rt_add(F.p2237, F.p2238))] = F.v4979;
F.v4979 = ((*(yR95 *)rt_nil_check(F.v4979))).f_next;
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
F.v4999 = ((*(yR115 *)rt_nil_check(F.p2244))).f_params;
F.v5001 = rt_range(rt_add(F.p2245, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5005 = 1;
if ((!(F.p2246 == ((*(yR115 *)rt_nil_check(F.p2244))).f_nparams))) {
yr1132_FailN(F.p2247, ((*(yR115 *)rt_nil_check(F.p2244))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
yr986_SB();
yr1004_ST(((*(yR115 *)rt_nil_check(F.p2244))).f_cname);
yr997_SA(y_str("(", 1));
if ((((*(yR115 *)rt_nil_check(F.p2244))).f_level > INT64_C(1))) {
yr1004_ST(yr1658_FramePtr(rt_range(rt_sub(((*(yR115 *)rt_nil_check(F.p2244))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v5005 = 0;
}
while ((!(F.v4999 == ((void *)0)))) {
if ((!F.v5005)) {
yr997_SA(y_str(", ", 2));
}
F.v5005 = 0;
if ((!yr2213_Fits(((*(yR110 *)rt_nil_check(F.v4999))).f_rep, ((void * *)(v2199).p)[y_ix1(v2199, F.v5001)]))) {
v897 = 0;
yr1775_TypeClash(((*(yR95 *)rt_nil_check(((void * *)(v2208).p)[y_ix1(v2208, F.v5001)]))).f_line, ((*(yR110 *)rt_nil_check(F.v4999))).f_rep, ((void * *)(v2199).p)[y_ix1(v2199, F.v5001)]);
}
if ((((*(yR110 *)rt_nil_check(F.v4999))).f_cls == v867)) {
yr1004_ST(yr2040_Convert(((rt_int *)(v2190).p)[y_ix1(v2190, F.v5001)], ((*(yR110 *)rt_nil_check(F.v4999))).f_rep, ((void * *)(v2199).p)[y_ix1(v2199, F.v5001)]));
} else {
if ((!yr2058_IsVariable(((void * *)(v2208).p)[y_ix1(v2208, F.v5001)]))) {
v897 = 0;
yr1132_FailN(((*(yR95 *)rt_nil_check(((void * *)(v2208).p)[y_ix1(v2208, F.v5001)]))).f_line, ((*(yR110 *)rt_nil_check(F.v4999))).f_name, y_str(": the actual of a VAR or OUT parameter must be a variable", 57));
}
yr997_SA(y_str("&", 1));
yr1004_ST(((rt_int *)(v2190).p)[y_ix1(v2190, F.v5001)]);
}
F.v5001 = rt_range(rt_add(F.v5001, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4999 = ((*(yR110 *)rt_nil_check(F.v4999))).f_next;
}
yr997_SA(y_str(")", 1));
v2210 = F.p2245;
{ rt_int rv5022 = yr1016_SE();
return rv5022; }
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
F.v5031 = yr1612_Find(F.p2254);
if ((F.v5031 == ((void *)0))) {
{ rt_int rv5039 = 0;
(*F.p2257_o) = F.p2257;
(*F.p2258_o) = F.p2258;
return rv5039; }
}
F.v5031 = yr1677_Real(F.v5031);
if ((!(((*(yR115 *)rt_nil_check(F.v5031))).f_kind == v846))) {
{ rt_int rv5041 = 0;
(*F.p2257_o) = F.p2257;
(*F.p2258_o) = F.p2258;
return rv5041; }
}
((*(yR95 *)rt_nil_check(F.p2255))).f_next = F.p2256;
if ((!(F.p2256 == ((void *)0)))) {
((*(yR95 *)rt_nil_check(F.p2256))).f_next = ((void *)0);
}
yr2234_CompileArgs(F.p2255, ((void *)0), &F.v5035, &F.v5037);
F.v5033 = yr2220_Choose(F.v5031, F.v5035, F.v5037);
if ((F.v5033 == ((void *)0))) {
v2210 = F.v5035;
if (yr2228_HidesStandard(F.v5031)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2253))).f_line, F.p2254, y_str(": no definition takes operands of these types", 45));
}
{ rt_int rv5044 = 0;
(*F.p2257_o) = F.p2257;
(*F.p2258_o) = F.p2258;
return rv5044; }
}
F.p2257 = yr2243_CallCode(F.v5033, F.v5035, F.v5037, ((*(yR95 *)rt_nil_check(F.p2253))).f_line);
F.p2258 = ((*(yR115 *)rt_nil_check(F.v5033))).f_ret;
{ rt_int rv5046 = 1;
(*F.p2257_o) = F.p2257;
(*F.p2258_o) = F.p2258;
return rv5046; }
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
F.v5054 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(F.p2264))).f_name, ((*(yR95 *)rt_nil_check(F.p2264))).f_line));
if ((((*(yR115 *)rt_nil_check(F.v5054))).f_kind == v861)) {
yr2693_StdCall(((*(yR115 *)rt_nil_check(F.v5054))).f_mval, F.p2264, F.p2266, &F.p2267, &F.p2268);
(*F.p2267_o) = F.p2267;
(*F.p2268_o) = F.p2268;
return;
}
if ((((((*(yR115 *)rt_nil_check(F.v5054))).f_kind == v837)) || ((((*(yR115 *)rt_nil_check(F.v5054))).f_kind == v840)))) {
if (F.p2266) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2264))).f_line, y_str("a value is not a statement", 26));
}
yr2273_Denote(((*(yR115 *)rt_nil_check(F.v5054))).f_rep, F.p2264, &F.p2267, &F.p2268);
(*F.p2267_o) = F.p2267;
(*F.p2268_o) = F.p2268;
return;
}
if ((!(((*(yR115 *)rt_nil_check(F.v5054))).f_kind == v846))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2264))).f_line, ((*(yR95 *)rt_nil_check(F.p2264))).f_name, y_str(" is not a routine", 17));
}
if ((((*(yR115 *)rt_nil_check(F.v5054))).f_alt == ((void *)0))) {
yr2234_CompileArgs(((*(yR95 *)rt_nil_check(F.p2264))).f_a, F.v5054, &F.v5058, &F.v5060);
F.v5056 = F.v5054;
} else {
yr2234_CompileArgs(((*(yR95 *)rt_nil_check(F.p2264))).f_a, ((void *)0), &F.v5058, &F.v5060);
F.v5056 = yr2220_Choose(F.v5054, F.v5058, F.v5060);
if ((F.v5056 == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2264))).f_line, ((*(yR95 *)rt_nil_check(F.p2264))).f_name, y_str(": no definition takes actuals of these types", 44));
}
}
F.p2267 = yr2243_CallCode(F.v5056, F.v5058, F.v5060, ((*(yR95 *)rt_nil_check(F.p2264))).f_line);
F.p2268 = ((*(yR115 *)rt_nil_check(F.v5056))).f_ret;
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
F.v5072 = ((*(yR95 *)rt_nil_check(F.p2275))).f_a;
F.v5092 = INT64_C(0);
F.v5099 = 1;
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
F.v5078 = yr1016_SE();
F.v5074 = ((*(yR100 *)rt_nil_check(F.p2274))).f_fields;
while ((!(F.v5074 == ((void *)0)))) {
if ((((((*(yR105 *)rt_nil_check(F.v5074))).f_variant == INT64_C(0))) || ((((*(yR105 *)rt_nil_check(F.v5074))).f_variant == F.v5092)))) {
if ((F.v5072 == ((void *)0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2275))).f_line, y_str("too few components in this record value", 39));
}
yr2091_Expr(F.v5072, ((*(yR105 *)rt_nil_check(F.v5074))).f_rep, &F.v5076, &F.v5082);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.v5072))).f_line, ((*(yR105 *)rt_nil_check(F.v5074))).f_rep, F.v5082);
if ((F.v5074 == ((*(yR100 *)rt_nil_check(F.p2274))).f_selector)) {
yr2032_Manifest(F.v5072, &F.v5090, &F.v5095);
if ((!F.v5090)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v5072))).f_line, y_str("the case-selection value is a manifest constant", 47));
}
F.v5092 = yr2282_VariantOf(F.p2274, F.v5095, ((*(yR95 *)rt_nil_check(F.v5072))).f_line);
}
yr986_SB();
yr1004_ST(F.v5078);
if ((!F.v5099)) {
yr997_SA(y_str(", ", 2));
}
F.v5099 = 0;
yr997_SA(y_str(".f_", 3));
yr1004_ST(((*(yR105 *)rt_nil_check(F.v5074))).f_name);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2040_Convert(F.v5076, ((*(yR105 *)rt_nil_check(F.v5074))).f_rep, F.v5082));
F.v5078 = yr1016_SE();
F.v5072 = ((*(yR95 *)rt_nil_check(F.v5072))).f_next;
}
F.v5074 = ((*(yR105 *)rt_nil_check(F.v5074))).f_next;
}
if ((!(F.v5072 == ((void *)0)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2275))).f_line, y_str("too many components in this record value", 40));
}
yr986_SB();
yr1004_ST(F.v5078);
yr997_SA(y_str(" })", 3));
F.p2276 = yr1016_SE();
(*F.p2276_o) = F.p2276;
(*F.p2277_o) = F.p2277;
return;
}
if ((((*(yR100 *)rt_nil_check(F.p2274))).f_kind == v792)) {
F.v5084 = yr1260_Count(F.v5072);
F.v5078 = yr1146_Fresh(y_str("da", 2));
if ((F.v5084 == INT64_C(1))) {
yr2091_Expr(F.v5072, ((*(yR100 *)rt_nil_check(F.p2274))).f_elem, &F.v5076, &F.v5082);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.v5072))).f_line, ((*(yR100 *)rt_nil_check(F.p2274))).f_elem, F.v5082);
F.v5080 = yr1146_Fresh(y_str("dv", 2));
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(yr1750_CType(((*(yR100 *)rt_nil_check(F.p2274))).f_elem));
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v5080);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2040_Convert(F.v5076, ((*(yR100 *)rt_nil_check(F.p2274))).f_elem, F.v5082));
yr997_SA(y_str("; y_fill(", 9));
yr1004_ST(yr1756_DescOf(F.p2274));
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v5080);
yr997_SA(y_str("); })", 5));
F.p2276 = yr1016_SE();
(*F.p2276_o) = F.p2276;
(*F.p2277_o) = F.p2277;
return;
}
yr986_SB();
yr997_SA(y_str("({ yarr ", 8));
yr1004_ST(F.v5078);
yr997_SA(y_str("; y_init(", 9));
yr1004_ST(yr1756_DescOf(F.p2274));
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v5078);
yr997_SA(y_str("); if (y_count(", 15));
yr1004_ST(F.v5078);
yr997_SA(y_str(", ", 2));
yr1010_SI(((*(yR100 *)rt_nil_check(F.p2274))).f_nidx);
yr997_SA(y_str(") != ", 5));
yr1010_SI(F.v5084);
yr997_SA(y_str(") rt_raise_msg(RT_X_RANGE, ", 27));
yr991_SC(34);
yr997_SA(y_str("wrong number of components", 26));
yr991_SC(34);
yr997_SA(y_str(");", 2));
F.p2276 = yr1016_SE();
F.v5088 = INT64_C(0);
while ((!(F.v5072 == ((void *)0)))) {
yr2091_Expr(F.v5072, ((*(yR100 *)rt_nil_check(F.p2274))).f_elem, &F.v5076, &F.v5082);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.v5072))).f_line, ((*(yR100 *)rt_nil_check(F.p2274))).f_elem, F.v5082);
yr986_SB();
yr1004_ST(F.p2276);
if (yr1744_Deep(((*(yR100 *)rt_nil_check(F.p2274))).f_elem)) {
yr997_SA(y_str(" { ", 3));
yr1004_ST(yr1750_CType(((*(yR100 *)rt_nil_check(F.p2274))).f_elem));
yr997_SA(y_str(" dv = ", 6));
yr1004_ST(F.v5076);
yr997_SA(y_str("; y_copy(", 9));
yr1004_ST(yr1756_DescOf(((*(yR100 *)rt_nil_check(F.p2274))).f_elem));
yr997_SA(y_str(", &((", 5));
yr1004_ST(yr1750_CType(((*(yR100 *)rt_nil_check(F.p2274))).f_elem));
yr997_SA(y_str(" *)", 3));
yr1004_ST(F.v5078);
yr997_SA(y_str(".p)[", 4));
yr1010_SI(F.v5088);
yr997_SA(y_str("], &dv); }", 10));
} else {
yr997_SA(y_str(" ((", 3));
yr1004_ST(yr1750_CType(((*(yR100 *)rt_nil_check(F.p2274))).f_elem));
yr997_SA(y_str(" *)", 3));
yr1004_ST(F.v5078);
yr997_SA(y_str(".p)[", 4));
yr1010_SI(F.v5088);
yr997_SA(y_str("] = ", 4));
yr1004_ST(yr2040_Convert(F.v5076, ((*(yR100 *)rt_nil_check(F.p2274))).f_elem, F.v5082));
yr997_SA(y_str(";", 1));
}
F.p2276 = yr1016_SE();
F.v5088 = rt_range(rt_add(F.v5088, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5072 = ((*(yR95 *)rt_nil_check(F.v5072))).f_next;
}
yr986_SB();
yr1004_ST(F.p2276);
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v5078);
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
while ((!(F.v5072 == ((void *)0)))) {
yr2091_Expr(F.v5072, ((*(yR100 *)rt_nil_check(F.p2274))).f_elem, &F.v5076, &F.v5082);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.v5072))).f_line, ((*(yR100 *)rt_nil_check(F.p2274))).f_elem, F.v5082);
F.p2276 = yr2141_Call2(y_str("y_set_add", 9), F.p2276, F.v5076);
F.v5072 = ((*(yR95 *)rt_nil_check(F.v5072))).f_next;
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
F.v5161 = ((*(yR100 *)rt_nil_check(F.p2283))).f_fields;
while ((!(F.v5161 == ((void *)0)))) {
if ((!(((*(yR105 *)rt_nil_check(F.v5161))).f_variant == INT64_C(0)))) {
F.v5163 = ((*(yR105 *)rt_nil_check(F.v5161))).f_labels;
while ((!(F.v5163 == ((void *)0)))) {
yr2032_Manifest(F.v5163, &F.v5165, &F.v5167);
if ((F.v5165 && ((F.v5167 == F.p2284)))) {
{ rt_int rv5169 = ((*(yR105 *)rt_nil_check(F.v5161))).f_variant;
return rv5169; }
}
F.v5163 = ((*(yR95 *)rt_nil_check(F.v5163))).f_next;
}
}
F.v5161 = ((*(yR105 *)rt_nil_check(F.v5161))).f_next;
}
{ rt_int rv5171 = INT64_C(-1);
return rv5171; }
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
F.v5176 = yr1016_SE();
yr1092_Emit(F.v5176);
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
F.v5182 = yr1016_SE();
yr1092_Emit(F.v5182);
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
{ rt_int rv5200 = yr1016_SE();
return rv5200; }
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
F.v5204 = yr1146_Fresh(y_str("xf", 2));
yr2368_Emit3(y_str("{ rt_frame ", 11), F.v5204, y_str(";", 1));
yr2368_Emit3(y_str("if (RT_TRY(", 11), F.v5204, y_str(")) {", 4));
v2299 = rt_range(rt_add(v2299, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2297).p)[y_ix1(v2297, v2299)] = F.v5204;
v2314 = rt_range(rt_add(v2314, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2312).p)[y_ix1(v2312, v2314)] = F.v5204;
yr2401_Statements(((*(yR95 *)rt_nil_check(F.p2396))).f_c);
v2314 = rt_range(rt_sub(v2314, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v2299 = rt_range(rt_sub(v2299, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr2368_Emit3(y_str("RT_POP(", 7), F.v5204, y_str(");", 2));
yr1098_EmitS(y_str("} else {", 8));
yr2368_Emit3(y_str("RT_POP(", 7), F.v5204, y_str(");", 2));
F.v5206 = yr1146_Fresh(y_str("xc", 2));
yr2368_Emit3(y_str("int ", 4), F.v5206, y_str(" = rt_xcur;", 11));
v2314 = rt_range(rt_add(v2314, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2312).p)[y_ix1(v2312, v2314)] = INT64_C(0);
v2326 = rt_range(rt_add(v2326, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2324).p)[y_ix1(v2324, v2326)] = F.v5206;
F.v5214 = 1;
F.v5210 = ((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2396))).f_b))).f_a;
while ((!(F.v5210 == ((void *)0)))) {
yr986_SB();
if (F.v5214) {
yr997_SA(y_str("if (", 4));
} else {
yr997_SA(y_str("} else if (", 11));
}
F.v5214 = 0;
F.v5212 = ((*(yR95 *)rt_nil_check(F.v5210))).f_a;
while ((!(F.v5212 == ((void *)0)))) {
yr1004_ST(F.v5206);
yr997_SA(y_str(" == rt_exc(", 11));
yr991_SC(34);
yr1004_ST(((*(yR95 *)rt_nil_check(F.v5212))).f_name);
yr991_SC(34);
yr997_SA(y_str(")", 1));
if ((!(((*(yR95 *)rt_nil_check(F.v5212))).f_next == ((void *)0)))) {
yr997_SA(y_str(" || ", 4));
}
F.v5212 = ((*(yR95 *)rt_nil_check(F.v5212))).f_next;
}
yr997_SA(y_str(") {", 3));
F.v5208 = yr1016_SE();
yr1092_Emit(F.v5208);
yr2401_Statements(((*(yR95 *)rt_nil_check(F.v5210))).f_b);
F.v5210 = ((*(yR95 *)rt_nil_check(F.v5210))).f_next;
}
if ((!F.v5214)) {
yr1098_EmitS(y_str("} else {", 8));
}
if ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2396))).f_b))).f_flag == INT64_C(1))) {
yr2401_Statements(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2396))).f_b))).f_b);
} else {
yr2368_Emit3(y_str("rt_raise(", 9), F.v5206, y_str(");", 2));
}
if ((!F.v5214)) {
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
F.v5270 = F.p2402;
while ((!(F.v5270 == ((void *)0)))) {
yr2425_Statement(F.v5270);
F.v5270 = ((*(yR95 *)rt_nil_check(F.v5270))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2407_Cond(void * a_p2408) {
struct yf2409 F;
memset((void *)&F, 0, sizeof F);
F.p2408 = a_p2408;
yr2091_Expr(F.p2408, v1685, &F.v5274, &F.v5276);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2408))).f_line, v1685, F.v5276);
{ rt_int rv5277 = F.v5274;
return rv5277; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2413_Label(void * a_p2414, void * a_p2415) {
struct yf2416 F;
memset((void *)&F, 0, sizeof F);
F.p2414 = a_p2414;
F.p2415 = a_p2415;
if (((((((*(yR95 *)rt_nil_check(F.p2414))).f_kind == v747)) && ((((*(yR95 *)rt_nil_check(F.p2414))).f_d == ((void *)0)))) && ((((*(yR100 *)rt_nil_check(F.p2415))).f_kind == v786)))) {
F.v5286 = yr1637_FindLit(((*(yR95 *)rt_nil_check(F.p2414))).f_name, F.p2415);
if ((!(F.v5286 == ((void *)0)))) {
{ rt_int rv5291 = ((*(yR115 *)rt_nil_check(F.v5286))).f_mval;
return rv5291; }
}
}
yr2091_Expr(F.p2414, F.p2415, &F.v5290, &F.v5288);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2414))).f_line, F.p2415, F.v5288);
yr2032_Manifest(F.p2414, &F.v5282, &F.v5284);
if ((!F.v5282)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2414))).f_line, y_str("a CASE label is a manifest constant (IX.B.1)", 44));
}
{ rt_int rv5293 = F.v5284;
return rv5293; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2420_CopyOut(void) {
struct yf2421 F;
memset((void *)&F, 0, sizeof F);
if ((v2355 == ((void *)0))) {
return;
}
F.v5296 = ((*(yR115 *)rt_nil_check(v2355))).f_params;
while ((!(F.v5296 == ((void *)0)))) {
if ((((*(yR110 *)rt_nil_check(F.v5296))).f_cls == v870)) {
yr986_SB();
yr997_SA(y_str("(*F.", 4));
yr1004_ST(((*(yR110 *)rt_nil_check(F.v5296))).f_cname);
yr997_SA(y_str("_o)", 3));
F.v5298 = yr1016_SE();
yr2048_Store(F.v5298, ((*(yR110 *)rt_nil_check(F.v5296))).f_rep, yr1651_Path(v1576, ((*(yR110 *)rt_nil_check(F.v5296))).f_cname), ((*(yR110 *)rt_nil_check(F.v5296))).f_rep, INT64_C(0));
}
F.v5296 = ((*(yR110 *)rt_nil_check(F.v5296))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2425_Statement(void * a_p2426) {
struct yf2427 F;
memset((void *)&F, 0, sizeof F);
F.p2426 = a_p2426;
F.v5305 = ((*(yR95 *)rt_nil_check(F.p2426))).f_kind;
v960 = ((*(yR95 *)rt_nil_check(F.p2426))).f_line;
if ((!(((*(yR95 *)rt_nil_check(F.p2426))).f_text == INT64_C(0)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2426))).f_line, y_str("this translator has no labelled statements yet", 46));
}
if ((F.v5305 == v684)) {
yr2064_LValue(((*(yR95 *)rt_nil_check(F.p2426))).f_a, &F.v5307, &F.v5319);
if ((((*(yR100 *)rt_nil_check(F.v5319))).f_kind == v807)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2426))).f_line, y_str("assignment is not defined for signals (VI.A.1.d)", 48));
}
if ((((((*(yR100 *)rt_nil_check(F.v5319))).f_kind == v801)) || ((((*(yR100 *)rt_nil_check(F.v5319))).f_kind == v810)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2426))).f_line, y_str("assignment is not defined for files and semaphores (VII.B)", 58));
}
if (((*(yR100 *)rt_nil_check(F.v5319))).f_opaque) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2426))).f_line, ((*(yR100 *)rt_nil_check(F.v5319))).f_tname, y_str(" is opaque here: := is not exported (X.B.3)", 43));
}
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p2426))).f_b, F.v5319, &F.v5309, &F.v5321);
yr2048_Store(F.v5307, F.v5319, F.v5309, F.v5321, ((*(yR95 *)rt_nil_check(F.p2426))).f_line);
} else if ((F.v5305 == v687)) {
F.v5335 = yr1612_Find(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2426))).f_a))).f_name);
if ((!(F.v5335 == ((void *)0)))) {
F.v5335 = yr1677_Real(F.v5335);
}
if ((((!(F.v5335 == ((void *)0)))) && ((((*(yR115 *)rt_nil_check(F.v5335))).f_kind == v855)))) {
yr2592_Activate(((*(yR95 *)rt_nil_check(F.p2426))).f_a, F.v5335);
} else {
yr2263_CallExpr(((*(yR95 *)rt_nil_check(F.p2426))).f_a, ((void *)0), 1, &F.v5307, &F.v5319);
yr2360_Emit2(y_str("", 0), F.v5307);
yr986_SB();
yr1004_ST(F.v5307);
yr997_SA(y_str(";", 1));
F.v5311 = yr1016_SE();
((*(yR125 *)rt_nil_check((v956).f_tail))).f_t = F.v5311;
}
} else if ((F.v5305 == v708)) {
F.v5327 = 1;
F.v5323 = ((*(yR95 *)rt_nil_check(F.p2426))).f_a;
while ((!(F.v5323 == ((void *)0)))) {
F.v5307 = yr2407_Cond(((*(yR95 *)rt_nil_check(F.v5323))).f_a);
if (F.v5327) {
yr2368_Emit3(y_str("if (", 4), F.v5307, y_str(") {", 3));
} else {
yr2368_Emit3(y_str("} else if (", 11), F.v5307, y_str(") {", 3));
}
F.v5327 = 0;
yr2401_Statements(((*(yR95 *)rt_nil_check(F.v5323))).f_b);
F.v5323 = ((*(yR95 *)rt_nil_check(F.v5323))).f_next;
}
if ((((*(yR95 *)rt_nil_check(F.p2426))).f_flag == INT64_C(1))) {
yr1098_EmitS(y_str("} else {", 8));
yr2401_Statements(((*(yR95 *)rt_nil_check(F.p2426))).f_b);
}
yr1098_EmitS(y_str("}", 1));
} else if ((F.v5305 == v714)) {
F.v5307 = yr2407_Cond(((*(yR95 *)rt_nil_check(F.p2426))).f_a);
yr2368_Emit3(y_str("while (", 7), F.v5307, y_str(") {", 3));
yr2401_Statements(((*(yR95 *)rt_nil_check(F.p2426))).f_b);
yr1098_EmitS(y_str("}", 1));
} else if ((F.v5305 == v720)) {
F.v5313 = yr1146_Fresh(y_str("yl_", 3));
v2349 = rt_range(rt_add(v2349, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2336).p)[y_ix1(v2336, v2349)] = ((*(yR95 *)rt_nil_check(F.p2426))).f_name;
((rt_int *)(v2338).p)[y_ix1(v2338, v2349)] = F.v5313;
((rt_int *)(v2347).p)[y_ix1(v2347, v2349)] = v2299;
yr1098_EmitS(y_str("for (;;) {", 10));
yr2401_Statements(((*(yR95 *)rt_nil_check(F.p2426))).f_b);
yr1098_EmitS(y_str("}", 1));
yr2368_Emit3(y_str("", 0), F.v5313, y_str(": ;", 3));
v2349 = rt_range(rt_sub(v2349, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v5305 == v696)) {
F.v5329 = 0;
F.v5331 = v2349;
while ((((F.v5331 > v2352)) && (!F.v5329))) {
if ((((rt_int *)(v2336).p)[y_ix1(v2336, F.v5331)] == ((*(yR95 *)rt_nil_check(F.p2426))).f_name)) {
F.v5329 = 1;
yr2378_PopTo(((rt_int *)(v2347).p)[y_ix1(v2347, F.v5331)]);
yr2368_Emit3(y_str("goto ", 5), ((rt_int *)(v2338).p)[y_ix1(v2338, F.v5331)], y_str(";", 1));
}
F.v5331 = rt_range(rt_sub(F.v5331, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((!F.v5329)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2426))).f_line, ((*(yR95 *)rt_nil_check(F.p2426))).f_name, y_str(": EXIT names no LOOP around it here (IX.A.5)", 44));
}
} else if ((F.v5305 == v717)) {
yr2431_ForStatement(F.p2426);
} else if ((F.v5305 == v711)) {
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p2426))).f_a, ((void *)0), &F.v5307, &F.v5319);
if ((!yr1720_IsDiscrete(F.v5319))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2426))).f_line, y_str("SELECT on a value that is not integer or scalar", 47));
}
yr2368_Emit3(y_str("switch (", 8), F.v5307, y_str(") {", 3));
F.v5323 = ((*(yR95 *)rt_nil_check(F.p2426))).f_b;
while ((!(F.v5323 == ((void *)0)))) {
F.v5325 = ((*(yR95 *)rt_nil_check(F.v5323))).f_a;
while ((!(F.v5325 == ((void *)0)))) {
F.v5333 = yr2413_Label(F.v5325, F.v5319);
yr986_SB();
yr997_SA(y_str("case ", 5));
yr1010_SI(F.v5333);
yr997_SA(y_str(":", 1));
F.v5311 = yr1016_SE();
yr1092_Emit(F.v5311);
F.v5325 = ((*(yR95 *)rt_nil_check(F.v5325))).f_next;
}
yr1098_EmitS(y_str("{", 1));
yr2401_Statements(((*(yR95 *)rt_nil_check(F.v5323))).f_b);
yr1098_EmitS(y_str("} break;", 8));
F.v5323 = ((*(yR95 *)rt_nil_check(F.v5323))).f_next;
}
yr1098_EmitS(y_str("default: {", 10));
if ((((*(yR95 *)rt_nil_check(F.p2426))).f_flag == INT64_C(1))) {
yr2401_Statements(((*(yR95 *)rt_nil_check(F.p2426))).f_c);
}
yr1098_EmitS(y_str("} break;", 8));
yr1098_EmitS(y_str("}", 1));
} else if ((F.v5305 == v699)) {
yr2445_ReturnStatement(F.p2426);
} else if ((F.v5305 == v705)) {
if ((((*(yR95 *)rt_nil_check(F.p2426))).f_name == INT64_C(0))) {
if ((v2326 == INT64_C(0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2426))).f_line, y_str("PROPAGATE_EXCEPTION without a name is used in a handler (IX.A.8)", 64));
}
yr2368_Emit3(y_str("rt_raise(", 9), ((rt_int *)(v2324).p)[y_ix1(v2324, v2326)], y_str(");", 2));
} else {
yr2384_LeaveBlock();
yr1092_Emit(yr2389_RaiseCode(((*(yR95 *)rt_nil_check(F.p2426))).f_name));
}
} else if ((F.v5305 == v690)) {
F.v5307 = yr2407_Cond(((*(yR95 *)rt_nil_check(F.p2426))).f_a);
yr2368_Emit3(y_str("if (!(", 6), F.v5307, y_str(")) {", 4));
yr2384_LeaveBlock();
yr1098_EmitS(y_str("rt_raise(RT_X_ASSERT); }", 24));
} else if ((F.v5305 == v723)) {
yr2451_BeginStatement(F.p2426);
} else if ((F.v5305 == v702)) {
yr2616_TerminateStatement(F.p2426);
} else if ((F.v5305 == v693)) {
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
F.v5396 = yr1825_MakeRep(((*(yR95 *)rt_nil_check(F.p2432))).f_a, INT64_C(0), 0);
if ((!yr1720_IsDiscrete(F.v5396))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2432))).f_line, y_str("FOR goes over an integer or scalar representation", 49));
}
yr1791_CheckRepresented(F.v5396, ((*(yR95 *)rt_nil_check(F.p2432))).f_line);
yr1595_OpenScope(0);
F.v5404 = yr1588_NewSym(v834, ((*(yR95 *)rt_nil_check(F.p2432))).f_name);
((*(yR115 *)rt_nil_check(F.v5404))).f_rep = F.v5396;
((*(yR115 *)rt_nil_check(F.v5404))).f_level = v1576;
((*(yR115 *)rt_nil_check(F.v5404))).f_cname = yr1146_Fresh(y_str("c_", 2));
yr1664_DeclStorage(yr1021_T(y_str("rt_int", 6)), ((*(yR115 *)rt_nil_check(F.v5404))).f_cname);
yr1644_Define(F.v5404, ((*(yR95 *)rt_nil_check(F.p2432))).f_line);
F.v5398 = yr1146_Fresh(y_str("i", 1));
F.v5400 = yr1146_Fresh(y_str("hi", 2));
yr986_SB();
yr997_SA(y_str("{ rt_int ", 9));
yr1004_ST(F.v5400);
yr997_SA(y_str(" = ", 3));
yr1004_ST(((*(yR100 *)rt_nil_check(F.v5396))).f_hi);
yr997_SA(y_str(";", 1));
F.v5402 = yr1016_SE();
yr1092_Emit(F.v5402);
yr986_SB();
yr997_SA(y_str("for (rt_int ", 12));
yr1004_ST(F.v5398);
yr997_SA(y_str(" = ", 3));
yr1004_ST(((*(yR100 *)rt_nil_check(F.v5396))).f_lo);
yr997_SA(y_str("; ", 2));
yr1004_ST(F.v5398);
yr997_SA(y_str(" <= ", 4));
yr1004_ST(F.v5400);
yr997_SA(y_str("; ", 2));
yr1004_ST(F.v5398);
yr997_SA(y_str("++) { ", 6));
yr1004_ST(yr1671_SymPath(F.v5404));
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.v5398);
yr997_SA(y_str(";", 1));
F.v5402 = yr1016_SE();
yr1092_Emit(F.v5402);
yr2401_Statements(((*(yR95 *)rt_nil_check(F.p2432))).f_b);
yr2368_Emit3(y_str("if (", 4), F.v5398, y_str(" == ", 4));
((*(yR125 *)rt_nil_check((v956).f_tail))).f_t = yr2437_Join(((*(yR125 *)rt_nil_check((v956).f_tail))).f_t, F.v5400, yr1021_T(y_str(") break;", 8)));
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
{ rt_int rv5432 = yr1016_SE();
return rv5432; }
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
F.v5444 = ((*(yR115 *)rt_nil_check(v2355))).f_ret;
if ((((*(yR95 *)rt_nil_check(F.p2446))).f_a == ((void *)0))) {
if ((!(((*(yR100 *)rt_nil_check(F.v5444))).f_kind == v822))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2446))).f_line, y_str("RETURN needs a value here (IX.A.6)", 34));
}
yr2420_CopyOut();
yr2611_LeaveMonitor();
yr2378_PopTo(v2302);
yr1098_EmitS(y_str("return;", 7));
return;
}
if ((((*(yR100 *)rt_nil_check(F.v5444))).f_kind == v822)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2446))).f_line, y_str("this routine returns no value (IX.A.6)", 38));
}
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p2446))).f_a, F.v5444, &F.v5436, &F.v5442);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2446))).f_line, F.v5444, F.v5442);
F.v5440 = yr1146_Fresh(y_str("rv", 2));
yr986_SB();
yr997_SA(y_str("{ ", 2));
yr1004_ST(yr1750_CType(F.v5444));
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v5440);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2040_Convert(F.v5436, F.v5444, F.v5442));
yr997_SA(y_str(";", 1));
F.v5438 = yr1016_SE();
yr1092_Emit(F.v5438);
yr2420_CopyOut();
yr2611_LeaveMonitor();
yr2378_PopTo(v2302);
yr2368_Emit3(y_str("return ", 7), F.v5440, y_str("; }", 3));
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
yr2587_AwaitProcesses();
yr1601_CloseScope();
yr1098_EmitS(y_str("}", 1));
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2457_RoutineCName(rt_int a_p2458) {
struct yf2459 F;
memset((void *)&F, 0, sizeof F);
F.p2458 = a_p2458;
F.v5465 = yr1141_NewSerial();
F.v5467 = 1;
{ rt_int hi5474 = ((rt_int *)(v890).p)[y_ix1(v890, F.p2458)];
for (rt_int i5473 = INT64_C(1); i5473 <= hi5474; i5473++) { F.c_5472 = i5473;
if ((!((yr968_IsLetter(yr1063_TChar(F.p2458, rt_range(F.c_5472, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || yr974_IsDigit(yr1063_TChar(F.p2458, rt_range(F.c_5472, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))))) {
F.v5467 = 0;
}
if (i5473 == hi5474) break;
}}
yr986_SB();
yr997_SA(y_str("yr", 2));
yr1010_SI(F.v5465);
if (F.v5467) {
yr997_SA(y_str("_", 1));
yr1004_ST(F.p2458);
}
{ rt_int rv5478 = yr1016_SE();
return rv5478; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2463_FormalRep(void * a_p2464) {
struct yf2465 F;
memset((void *)&F, 0, sizeof F);
F.p2464 = a_p2464;
if ((((*(yR95 *)rt_nil_check(F.p2464))).f_kind == v666)) {
yr2032_Manifest(((*(yR95 *)rt_nil_check(F.p2464))).f_a, &F.v5484, &F.v5486);
if ((((!F.v5484) || ((F.v5486 < INT64_C(1)))) || ((F.v5486 > INT64_C(4))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2464))).f_line, y_str("DIMENSIONS is a manifest constant from 1 to 4", 45));
}
F.v5482 = yr1707_NewRep(v813, yr1021_T(y_str("length-unresolved array", 23)));
((*(yR100 *)rt_nil_check(F.v5482))).f_nidx = F.v5486;
((*(yR100 *)rt_nil_check(F.v5482))).f_elem = yr1825_MakeRep(((*(yR95 *)rt_nil_check(F.p2464))).f_b, INT64_C(0), 0);
yr1791_CheckRepresented(((*(yR100 *)rt_nil_check(F.v5482))).f_elem, ((*(yR95 *)rt_nil_check(F.p2464))).f_line);
((*(yR100 *)rt_nil_check(F.v5482))).f_deep = 1;
{ void * rv5494 = F.v5482;
return rv5494; }
}
if ((((*(yR95 *)rt_nil_check(F.p2464))).f_kind == v669)) {
{ void * rv5496 = yr1707_NewRep(v825, yr1021_T(y_str("SPACE", 5)));
return rv5496; }
}
F.v5482 = yr1825_MakeRep(F.p2464, INT64_C(0), 0);
yr1791_CheckRepresented(F.v5482, ((*(yR95 *)rt_nil_check(F.p2464))).f_line);
{ void * rv5499 = F.v5482;
return rv5499; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2469_ParamCType(void * a_p2470) {
struct yf2471 F;
memset((void *)&F, 0, sizeof F);
F.p2470 = a_p2470;
F.v5503 = yr1750_CType(((*(yR110 *)rt_nil_check(F.p2470))).f_rep);
if ((((*(yR110 *)rt_nil_check(F.p2470))).f_cls == v867)) {
{ rt_int rv5504 = F.v5503;
return rv5504; }
}
yr986_SB();
yr1004_ST(F.v5503);
yr997_SA(y_str(" *", 2));
{ rt_int rv5506 = yr1016_SE();
return rv5506; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2475_RoutineHeader(void * a_p2476, rt_int a_p2477) {
struct yf2478 F;
memset((void *)&F, 0, sizeof F);
F.p2476 = a_p2476;
F.p2477 = a_p2477;
F.v5527 = 1;
F.v5511 = yr1588_NewSym(F.p2477, ((*(yR95 *)rt_nil_check(F.p2476))).f_name);
((*(yR115 *)rt_nil_check(F.v5511))).f_decl = F.p2476;
((*(yR115 *)rt_nil_check(F.v5511))).f_func = (((*(yR95 *)rt_nil_check(F.p2476))).f_flag == INT64_C(1));
((*(yR115 *)rt_nil_check(F.v5511))).f_level = rt_range(rt_add(v1576, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR115 *)rt_nil_check(F.v5511))).f_cname = yr2457_RoutineCName(((*(yR95 *)rt_nil_check(F.p2476))).f_name);
if ((!(((*(yR95 *)rt_nil_check(F.p2476))).f_b == ((void *)0)))) {
((*(yR115 *)rt_nil_check(F.v5511))).f_ret = yr1825_MakeRep(((*(yR95 *)rt_nil_check(F.p2476))).f_b, INT64_C(0), 0);
yr1791_CheckRepresented(((*(yR115 *)rt_nil_check(F.v5511))).f_ret, ((*(yR95 *)rt_nil_check(F.p2476))).f_line);
} else {
((*(yR115 *)rt_nil_check(F.v5511))).f_ret = v1689;
if (((*(yR115 *)rt_nil_check(F.v5511))).f_func) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2476))).f_line, ((*(yR95 *)rt_nil_check(F.p2476))).f_name, y_str(": a FUNCTION has a RETURNS clause (X.A)", 39));
}
}
F.v5521 = ((void *)0);
F.v5515 = ((*(yR95 *)rt_nil_check(F.p2476))).f_a;
while ((!(F.v5515 == ((void *)0)))) {
F.v5523 = yr2463_FormalRep(((*(yR95 *)rt_nil_check(F.v5515))).f_b);
if ((((*(yR115 *)rt_nil_check(F.v5511))).f_func && ((!(((*(yR95 *)rt_nil_check(F.v5515))).f_ival == v867))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.v5515))).f_line, ((*(yR95 *)rt_nil_check(F.p2476))).f_name, y_str(": the parameters of a FUNCTION are CONST (X.A.2)", 48));
}
if ((((F.p2477 == v855)) && ((((*(yR95 *)rt_nil_check(F.v5515))).f_ival == v870)))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.v5515))).f_line, ((*(yR95 *)rt_nil_check(F.p2476))).f_name, y_str(": a process has no OUT parameters", 33));
}
F.v5517 = ((*(yR95 *)rt_nil_check(F.v5515))).f_a;
while ((!(F.v5517 == ((void *)0)))) {
({ F.v5519 = rt_alloc(sizeof(yR110)); });
(*(yR110 *)rt_nil_check(F.v5519)) = ((yR110){ .f_name = ((*(yR95 *)rt_nil_check(F.v5517))).f_name, .f_cls = ((*(yR95 *)rt_nil_check(F.v5515))).f_ival, .f_rep = F.v5523, .f_cname = yr1146_Fresh(y_str("p", 1)), .f_next = ((void *)0) });
if ((F.v5521 == ((void *)0))) {
((*(yR115 *)rt_nil_check(F.v5511))).f_params = F.v5519;
} else {
((*(yR110 *)rt_nil_check(F.v5521))).f_next = F.v5519;
}
F.v5521 = F.v5519;
((*(yR115 *)rt_nil_check(F.v5511))).f_nparams = rt_range(rt_add(((*(yR115 *)rt_nil_check(F.v5511))).f_nparams, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5517 = ((*(yR95 *)rt_nil_check(F.v5517))).f_next;
}
F.v5515 = ((*(yR95 *)rt_nil_check(F.v5515))).f_next;
}
F.v5513 = yr1612_Find(((*(yR95 *)rt_nil_check(F.p2476))).f_name);
if ((!(F.v5513 == ((void *)0)))) {
F.v5513 = yr1677_Real(F.v5513);
}
if (((((!(((*(yR95 *)rt_nil_check(F.p2476))).f_ival == INT64_C(0)))) && ((!(F.v5513 == ((void *)0))))) && ((((*(yR115 *)rt_nil_check(F.v5513))).f_kind == v846)))) {
((*(yR115 *)rt_nil_check(F.v5511))).f_alt = F.v5513;
if ((((((*(yR95 *)rt_nil_check(F.p2476))).f_ival == v309)) && ((!(yr2482_SameSignature(F.v5511, F.v5513) == ((void *)0)))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2476))).f_line, ((*(yR95 *)rt_nil_check(F.p2476))).f_name, y_str(" EXTENDS a definition for the same parameter types: use REPLACES", 64));
}
if ((((((*(yR95 *)rt_nil_check(F.p2476))).f_ival == v405)) && ((yr2482_SameSignature(F.v5511, F.v5513) == ((void *)0))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2476))).f_line, ((*(yR95 *)rt_nil_check(F.p2476))).f_name, y_str(" REPLACES no definition for these parameter types", 49));
}
}
((*(yR95 *)rt_nil_check(F.p2476))).f_sym = F.v5511;
yr1644_Define(F.v5511, ((*(yR95 *)rt_nil_check(F.p2476))).f_line);
((rt_int *)(v1586).p)[y_ix1(v1586, ((*(yR115 *)rt_nil_check(F.v5511))).f_level)] = yr1146_Fresh(y_str("yf", 2));
((*(yR115 *)rt_nil_check(F.v5511))).f_members = yr1588_NewSym(v861, ((rt_int *)(v1586).p)[y_ix1(v1586, ((*(yR115 *)rt_nil_check(F.v5511))).f_level)]);
yr986_SB();
yr997_SA(y_str("struct ", 7));
yr1004_ST(((rt_int *)(v1586).p)[y_ix1(v1586, ((*(yR115 *)rt_nil_check(F.v5511))).f_level)]);
yr997_SA(y_str(";", 1));
F.v5525 = yr1016_SE();
yr1070_Put(&v942, F.v5525);
yr986_SB();
yr997_SA(y_str("static ", 7));
if ((F.p2477 == v855)) {
yr997_SA(y_str("void", 4));
} else {
yr1004_ST(yr1750_CType(((*(yR115 *)rt_nil_check(F.v5511))).f_ret));
}
yr997_SA(y_str(" ", 1));
yr1004_ST(((*(yR115 *)rt_nil_check(F.v5511))).f_cname);
yr997_SA(y_str("(", 1));
F.v5525 = yr1016_SE();
if ((F.p2477 == v855)) {
F.v5525 = yr2437_Join(F.v5525, yr1021_T(y_str("void *arg", 9)), INT64_C(0));
F.v5527 = 0;
} else if ((v1576 > INT64_C(0))) {
yr986_SB();
yr1004_ST(F.v5525);
yr997_SA(y_str("struct ", 7));
yr1004_ST(((rt_int *)(v1586).p)[y_ix1(v1586, v1576)]);
yr997_SA(y_str(" *up", 4));
F.v5525 = yr1016_SE();
F.v5527 = 0;
}
F.v5519 = ((*(yR115 *)rt_nil_check(F.v5511))).f_params;
while ((((!(F.v5519 == ((void *)0)))) && ((!(F.p2477 == v855))))) {
yr986_SB();
yr1004_ST(F.v5525);
if ((!F.v5527)) {
yr997_SA(y_str(", ", 2));
}
F.v5527 = 0;
yr1004_ST(yr2469_ParamCType(F.v5519));
yr997_SA(y_str(" a_", 3));
yr1004_ST(((*(yR110 *)rt_nil_check(F.v5519))).f_cname);
F.v5525 = yr1016_SE();
F.v5519 = ((*(yR110 *)rt_nil_check(F.v5519))).f_next;
}
if (F.v5527) {
F.v5525 = yr2437_Join(F.v5525, yr1021_T(y_str("void", 4)), INT64_C(0));
}
F.v5525 = yr2437_Join(F.v5525, yr1021_T(y_str(")", 1)), INT64_C(0));
((*(yR115 *)rt_nil_check(F.v5511))).f_mnext = yr1588_NewSym(v861, F.v5525);
yr1070_Put(&v950, yr2437_Join(F.v5525, yr1021_T(y_str(";", 1)), INT64_C(0)));
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2482_SameSignature(void * a_p2483, void * a_p2484) {
struct yf2485 F;
memset((void *)&F, 0, sizeof F);
F.p2483 = a_p2483;
F.p2484 = a_p2484;
F.v5570 = F.p2484;
while ((!(F.v5570 == ((void *)0)))) {
if ((((*(yR115 *)rt_nil_check(F.v5570))).f_nparams == ((*(yR115 *)rt_nil_check(F.p2483))).f_nparams)) {
F.v5576 = 1;
F.v5572 = ((*(yR115 *)rt_nil_check(F.p2483))).f_params;
F.v5574 = ((*(yR115 *)rt_nil_check(F.v5570))).f_params;
while ((!(F.v5572 == ((void *)0)))) {
if ((!yr1768_SameType(((*(yR110 *)rt_nil_check(F.v5572))).f_rep, ((*(yR110 *)rt_nil_check(F.v5574))).f_rep))) {
F.v5576 = 0;
}
F.v5572 = ((*(yR110 *)rt_nil_check(F.v5572))).f_next;
F.v5574 = ((*(yR110 *)rt_nil_check(F.v5574))).f_next;
}
if (F.v5576) {
{ void * rv5579 = F.v5570;
return rv5579; }
}
}
F.v5570 = ((*(yR115 *)rt_nil_check(F.v5570))).f_alt;
}
{ void * rv5580 = ((void *)0);
return rv5580; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2489_RoutineBody(void * a_p2490) {
struct yf2491 F;
memset((void *)&F, 0, sizeof F);
F.p2490 = a_p2490;
F.v5584 = ((*(yR95 *)rt_nil_check(F.p2490))).f_sym;
F.v5586 = v956;
F.v5588 = v958;
F.v5590 = v1576;
F.v5592 = v2299;
F.v5594 = v2302;
F.v5596 = v2314;
F.v5598 = v2326;
F.v5600 = v2349;
F.v5602 = v2352;
F.v5604 = v2355;
F.v5606 = v2357;
v956 = ((yR130){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v958 = ((yR130){ .f_head = ((void *)0), .f_tail = ((void *)0) });
F.v5616 = ((yR130){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v1576 = ((*(yR115 *)rt_nil_check(F.v5584))).f_level;
F.v5612 = ((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5584))).f_members))).f_name;
((rt_int *)(v1586).p)[y_ix1(v1586, v1576)] = F.v5612;
v2302 = v2299;
v2352 = v2349;
v2326 = INT64_C(0);
v2355 = F.v5584;
v2357 = 0;
yr1595_OpenScope(0);
F.v5608 = ((*(yR115 *)rt_nil_check(F.v5584))).f_params;
while ((!(F.v5608 == ((void *)0)))) {
if ((((*(yR110 *)rt_nil_check(F.v5608))).f_cls == v867)) {
F.v5610 = yr1588_NewSym(v834, ((*(yR110 *)rt_nil_check(F.v5608))).f_name);
} else {
F.v5610 = yr1588_NewSym(v831, ((*(yR110 *)rt_nil_check(F.v5608))).f_name);
}
((*(yR115 *)rt_nil_check(F.v5610))).f_rep = ((*(yR110 *)rt_nil_check(F.v5608))).f_rep;
((*(yR115 *)rt_nil_check(F.v5610))).f_level = v1576;
((*(yR115 *)rt_nil_check(F.v5610))).f_cname = ((*(yR110 *)rt_nil_check(F.v5608))).f_cname;
if ((((*(yR115 *)rt_nil_check(F.v5584))).f_kind == v855)) {
((*(yR115 *)rt_nil_check(F.v5610))).f_byref = (((*(yR110 *)rt_nil_check(F.v5608))).f_cls == v873);
yr1664_DeclStorage(yr2469_ParamCType(F.v5608), ((*(yR110 *)rt_nil_check(F.v5608))).f_cname);
} else if ((((*(yR110 *)rt_nil_check(F.v5608))).f_cls == v873)) {
((*(yR115 *)rt_nil_check(F.v5610))).f_byref = 1;
yr1664_DeclStorage(yr2469_ParamCType(F.v5608), ((*(yR110 *)rt_nil_check(F.v5608))).f_cname);
yr1092_Emit(yr2437_Join(yr1021_T(y_str("F.", 2)), ((*(yR110 *)rt_nil_check(F.v5608))).f_cname, yr2437_Join(yr1021_T(y_str(" = a_", 5)), ((*(yR110 *)rt_nil_check(F.v5608))).f_cname, yr1021_T(y_str(";", 1)))));
} else if ((((*(yR110 *)rt_nil_check(F.v5608))).f_cls == v870)) {
yr1664_DeclStorage(yr1750_CType(((*(yR110 *)rt_nil_check(F.v5608))).f_rep), ((*(yR110 *)rt_nil_check(F.v5608))).f_cname);
yr1664_DeclStorage(yr2469_ParamCType(F.v5608), yr2437_Join(((*(yR110 *)rt_nil_check(F.v5608))).f_cname, yr1021_T(y_str("_o", 2)), INT64_C(0)));
yr1092_Emit(yr2437_Join(yr1021_T(y_str("F.", 2)), ((*(yR110 *)rt_nil_check(F.v5608))).f_cname, yr2437_Join(yr1021_T(y_str("_o = a_", 7)), ((*(yR110 *)rt_nil_check(F.v5608))).f_cname, yr1021_T(y_str(";", 1)))));
if ((yr1744_Deep(((*(yR110 *)rt_nil_check(F.v5608))).f_rep) && ((!(((*(yR100 *)rt_nil_check(((*(yR110 *)rt_nil_check(F.v5608))).f_rep))).f_kind == v813))))) {
yr1092_Emit(yr2437_Join(yr1021_T(y_str("y_init(", 7)), yr1756_DescOf(((*(yR110 *)rt_nil_check(F.v5608))).f_rep), yr2437_Join(yr1021_T(y_str(", &F.", 5)), ((*(yR110 *)rt_nil_check(F.v5608))).f_cname, yr1021_T(y_str(");", 2)))));
}
if ((((*(yR100 *)rt_nil_check(((*(yR110 *)rt_nil_check(F.v5608))).f_rep))).f_kind == v813)) {
yr1092_Emit(yr2437_Join(yr1021_T(y_str("F.", 2)), ((*(yR110 *)rt_nil_check(F.v5608))).f_cname, yr2437_Join(yr1021_T(y_str(" = *a_", 6)), ((*(yR110 *)rt_nil_check(F.v5608))).f_cname, yr1021_T(y_str(";", 1)))));
}
} else {
yr1664_DeclStorage(yr1750_CType(((*(yR110 *)rt_nil_check(F.v5608))).f_rep), ((*(yR110 *)rt_nil_check(F.v5608))).f_cname);
yr1092_Emit(yr2437_Join(yr1021_T(y_str("F.", 2)), ((*(yR110 *)rt_nil_check(F.v5608))).f_cname, yr2437_Join(yr1021_T(y_str(" = a_", 5)), ((*(yR110 *)rt_nil_check(F.v5608))).f_cname, yr1021_T(y_str(";", 1)))));
}
yr1644_Define(F.v5610, ((*(yR95 *)rt_nil_check(F.p2490))).f_line);
F.v5608 = ((*(yR110 *)rt_nil_check(F.v5608))).f_next;
}
yr2605_EnterMonitor(F.v5584);
yr2516_Declarations(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2490))).f_c))).f_a);
yr2395_BlockStatements(((*(yR95 *)rt_nil_check(F.p2490))).f_c);
if ((((*(yR115 *)rt_nil_check(F.v5584))).f_kind == v855)) {
yr1098_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
} else {
yr1098_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
}
yr2587_AwaitProcesses();
yr1601_CloseScope();
yr986_SB();
yr997_SA(y_str("struct ", 7));
yr1004_ST(F.v5612);
yr997_SA(y_str(" {", 2));
if ((v1576 > INT64_C(1))) {
yr997_SA(y_str(" struct ", 8));
yr1004_ST(((rt_int *)(v1586).p)[y_ix1(v1586, rt_sub(v1576, INT64_C(1)))]);
yr997_SA(y_str(" *up;", 5));
} else {
yr997_SA(y_str(" void *up;", 10));
}
F.v5614 = yr1016_SE();
yr1070_Put(&v946, F.v5614);
yr1085_Append(&v946, &v958);
yr1077_PutS(&v946, y_str("};", 2));
yr1070_Put(&F.v5616, yr2437_Join(((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5584))).f_mnext))).f_name, yr1021_T(y_str(" {", 2)), INT64_C(0)));
if (v2357) {
yr1077_PutS(&F.v5616, y_str("volatile", 8));
}
yr1070_Put(&F.v5616, yr2437_Join(yr1021_T(y_str("struct ", 7)), F.v5612, yr1021_T(y_str(" F;", 3))));
yr1077_PutS(&F.v5616, y_str("memset((void *)&F, 0, sizeof F);", 32));
if ((((*(yR115 *)rt_nil_check(F.v5584))).f_kind == v855)) {
yr1070_Put(&F.v5616, yr2437_Join(yr1021_T(y_str("F = *(struct ", 13)), F.v5612, yr1021_T(y_str(" *)arg;", 7))));
} else if ((v1576 > INT64_C(1))) {
yr1077_PutS(&F.v5616, y_str("F.up = up;", 10));
}
yr1085_Append(&F.v5616, &v956);
yr1077_PutS(&F.v5616, y_str("}", 1));
yr1085_Append(&v952, &F.v5616);
v956 = F.v5586;
v958 = F.v5588;
v1576 = F.v5590;
((rt_int *)(v1586).p)[y_ix1(v1586, v1576)] = yr1146_Fresh(y_str("unused", 6));
if ((!(F.v5604 == ((void *)0)))) {
((rt_int *)(v1586).p)[y_ix1(v1586, v1576)] = ((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5604))).f_members))).f_name;
}
v2299 = F.v5592;
v2302 = F.v5594;
v2314 = F.v5596;
v2326 = F.v5598;
v2349 = F.v5600;
v2352 = F.v5602;
v2355 = F.v5604;
v2357 = F.v5606;
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
yr2622_DeclareSignal(F.p2496, F.p2498);
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
F.v5678 = ((*(yR95 *)rt_nil_check(F.p2504))).f_kind;
if ((((F.v5678 == v609)) || ((F.v5678 == v612)))) {
F.v5680 = yr1825_MakeRep(((*(yR95 *)rt_nil_check(F.p2504))).f_b, INT64_C(0), 0);
yr1791_CheckRepresented(F.v5680, ((*(yR95 *)rt_nil_check(F.p2504))).f_line);
if ((((F.v5678 == v609)) && (((((((*(yR100 *)rt_nil_check(F.v5680))).f_kind == v807)) || ((((*(yR100 *)rt_nil_check(F.v5680))).f_kind == v801))) || ((((*(yR100 *)rt_nil_check(F.v5680))).f_kind == v810)))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2504))).f_line, y_str("signals, files and semaphores are variables (VII.B)", 51));
}
F.v5684 = ((*(yR95 *)rt_nil_check(F.p2504))).f_a;
while ((!(F.v5684 == ((void *)0)))) {
if ((F.v5678 == v609)) {
F.v5686 = yr1588_NewSym(v834, ((*(yR95 *)rt_nil_check(F.v5684))).f_name);
} else {
F.v5686 = yr1588_NewSym(v831, ((*(yR95 *)rt_nil_check(F.v5684))).f_name);
}
yr2495_DeclareStorage(F.v5686, F.v5680, ((*(yR95 *)rt_nil_check(F.p2504))).f_line);
if ((!(((*(yR95 *)rt_nil_check(F.p2504))).f_c == ((void *)0)))) {
yr2091_Expr(((*(yR95 *)rt_nil_check(F.p2504))).f_c, F.v5680, &F.v5688, &F.v5682);
yr2048_Store(yr1671_SymPath(F.v5686), F.v5680, F.v5688, F.v5682, ((*(yR95 *)rt_nil_check(F.p2504))).f_line);
if ((F.v5678 == v609)) {
yr2032_Manifest(((*(yR95 *)rt_nil_check(F.p2504))).f_c, &F.v5690, &F.v5692);
if ((F.v5690 && yr1720_IsDiscrete(F.v5680))) {
((*(yR115 *)rt_nil_check(F.v5686))).f_hasmv = 1;
((*(yR115 *)rt_nil_check(F.v5686))).f_mval = F.v5692;
}
}
}
if ((!(((*(yR95 *)rt_nil_check(F.v5684))).f_a == ((void *)0)))) {
yr2509_AtLocation(F.v5686, ((*(yR95 *)rt_nil_check(F.v5684))).f_a);
}
yr1644_Define(F.v5686, ((*(yR95 *)rt_nil_check(F.v5684))).f_line);
F.v5684 = ((*(yR95 *)rt_nil_check(F.v5684))).f_next;
}
return;
}
if ((F.v5678 == v621)) {
F.v5680 = yr1825_MakeRep(((*(yR95 *)rt_nil_check(F.p2504))).f_b, ((*(yR95 *)rt_nil_check(F.p2504))).f_name, 0);
yr1791_CheckRepresented(F.v5680, ((*(yR95 *)rt_nil_check(F.p2504))).f_line);
F.v5686 = yr1588_NewSym(v837, ((*(yR95 *)rt_nil_check(F.p2504))).f_name);
((*(yR115 *)rt_nil_check(F.v5686))).f_rep = F.v5680;
yr1644_Define(F.v5686, ((*(yR95 *)rt_nil_check(F.p2504))).f_line);
yr1833_ResolvePending(((*(yR95 *)rt_nil_check(F.p2504))).f_name, F.v5680);
return;
}
if ((F.v5678 == v618)) {
F.v5680 = yr1825_MakeRep(((*(yR95 *)rt_nil_check(F.p2504))).f_b, ((*(yR95 *)rt_nil_check(F.p2504))).f_name, 1);
if ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2504))).f_b))).f_kind == v642)) {
F.v5680 = yr1714_CopyRep(F.v5680);
((*(yR100 *)rt_nil_check(F.v5680))).f_tid = yr1819_NewTid(((*(yR95 *)rt_nil_check(F.p2504))).f_name);
((*(yR100 *)rt_nil_check(F.v5680))).f_tname = ((*(yR95 *)rt_nil_check(F.p2504))).f_name;
if (((((((*(yR100 *)rt_nil_check(F.v5680))).f_kind == v774)) || ((((*(yR100 *)rt_nil_check(F.v5680))).f_kind == v777))) || ((((*(yR100 *)rt_nil_check(F.v5680))).f_kind == v780)))) {
if ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2504))).f_b))).f_a == ((void *)0))) {
((*(yR100 *)rt_nil_check(F.v5680))).f_abstract = 1;
}
}
}
F.v5686 = yr1588_NewSym(v840, ((*(yR95 *)rt_nil_check(F.p2504))).f_name);
((*(yR115 *)rt_nil_check(F.v5686))).f_rep = F.v5680;
yr1644_Define(F.v5686, ((*(yR95 *)rt_nil_check(F.p2504))).f_line);
yr1833_ResolvePending(((*(yR95 *)rt_nil_check(F.p2504))).f_name, F.v5680);
return;
}
if ((F.v5678 == v615)) {
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
yr2629_DeviceSignal(F.p2510, F.p2511);
return;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2516_Declarations(void * a_p2517) {
struct yf2518 F;
memset((void *)&F, 0, sizeof F);
F.p2517 = a_p2517;
F.v5708 = F.p2517;
F.v5710 = ((void *)0);
F.v5712 = ((void *)0);
F.v5714 = ((void *)0);
while ((!(F.v5708 == ((void *)0)))) {
v960 = ((*(yR95 *)rt_nil_check(F.v5708))).f_line;
if ((((((*(yR95 *)rt_nil_check(F.v5708))).f_kind == v624)) || ((((*(yR95 *)rt_nil_check(F.v5708))).f_kind == v636)))) {
if ((((*(yR95 *)rt_nil_check(F.v5708))).f_kind == v624)) {
yr2475_RoutineHeader(F.v5708, v846);
} else {
yr2475_RoutineHeader(F.v5708, v855);
}
F.v5714 = yr1245_NewNode(v639, ((*(yR95 *)rt_nil_check(F.v5708))).f_line);
((*(yR95 *)rt_nil_check(F.v5714))).f_a = F.v5708;
yr1252_Link(&F.v5710, &F.v5712, F.v5714);
if ((((*(yR95 *)rt_nil_check(F.v5708))).f_kind == v636)) {
yr2581_DeclareProcess(F.v5708);
}
} else if (((((*(yR95 *)rt_nil_check(F.v5708))).f_kind == v594))) {
yr2563_CompileModule(F.v5708);
} else if ((((*(yR95 *)rt_nil_check(F.v5708))).f_kind == v630)) {
yr2569_DeclareTemplate(F.v5708);
} else if ((((*(yR95 *)rt_nil_check(F.v5708))).f_kind == v633)) {
yr2575_Instantiate(F.v5708);
} else {
yr2503_SimpleDecl(F.v5708);
}
F.v5708 = ((*(yR95 *)rt_nil_check(F.v5708))).f_next;
}
yr1840_CheckPending();
F.v5714 = F.v5710;
while ((!(F.v5714 == ((void *)0)))) {
yr2489_RoutineBody(((*(yR95 *)rt_nil_check(F.v5714))).f_a);
F.v5714 = ((*(yR95 *)rt_nil_check(F.v5714))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2533_Alias(rt_int a_p2534, void * a_p2535) {
struct yf2536 F;
memset((void *)&F, 0, sizeof F);
F.p2534 = a_p2534;
F.p2535 = a_p2535;
F.v5719 = yr1588_NewSym(v864, F.p2534);
((*(yR115 *)rt_nil_check(F.v5719))).f_target = F.p2535;
((*(yR115 *)rt_nil_check(F.v5719))).f_readonly = ((*(yR115 *)rt_nil_check(F.p2535))).f_readonly;
{ void * rv5720 = F.v5719;
return rv5720; }
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
F.v5726 = ((*(yR100 *)rt_nil_check(F.p2542))).f_lits;
while ((!(F.v5726 == ((void *)0)))) {
F.v5728 = yr1637_FindLit(((*(yR95 *)rt_nil_check(F.v5726))).f_name, F.p2542);
if ((!(F.v5728 == ((void *)0)))) {
F.v5728 = yr2533_Alias(((*(yR95 *)rt_nil_check(F.v5726))).f_name, F.v5728);
((*(yR115 *)rt_nil_check(F.v5728))).f_mnext = (*F.p2541);
(*F.p2541) = F.v5728;
}
F.v5726 = ((*(yR95 *)rt_nil_check(F.v5726))).f_next;
}
} else if ((((*(yR100 *)rt_nil_check(F.p2542))).f_kind == v795)) {
F.v5730 = ((*(yR100 *)rt_nil_check(F.p2542))).f_fields;
while ((!(F.v5730 == ((void *)0)))) {
yr2540_AddLits(&(*F.p2541), ((*(yR105 *)rt_nil_check(F.v5730))).f_rep, rt_range(rt_add(F.p2543, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v5730 = ((*(yR105 *)rt_nil_check(F.v5730))).f_next;
}
} else if (((((((*(yR100 *)rt_nil_check(F.p2542))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.p2542))).f_kind == v804))) || ((((*(yR100 *)rt_nil_check(F.p2542))).f_kind == v801)))) {
yr2540_AddLits(&(*F.p2541), ((*(yR100 *)rt_nil_check(F.p2542))).f_elem, rt_range(rt_add(F.p2543, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2548_ResolveItem(void * a_p2549, void * * a_p2550, rt_int a_p2551) {
struct yf2552 F;
memset((void *)&F, 0, sizeof F);
F.p2549 = a_p2549;
F.p2550 = a_p2550;
F.p2551 = a_p2551;
F.v5751 = ((*(yR95 *)rt_nil_check(F.p2549))).f_flag;
if ((!(((*(yR95 *)rt_nil_check(F.p2549))).f_text == INT64_C(0)))) {
F.v5743 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(F.p2549))).f_text, ((*(yR95 *)rt_nil_check(F.p2549))).f_line));
if ((!(((*(yR115 *)rt_nil_check(F.v5743))).f_kind == v849))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2549))).f_line, ((*(yR95 *)rt_nil_check(F.p2549))).f_text, y_str(" is not a module", 16));
}
F.v5741 = ((*(yR115 *)rt_nil_check(F.v5743))).f_members;
while ((((!(F.v5741 == ((void *)0)))) && ((!(((*(yR115 *)rt_nil_check(F.v5741))).f_name == ((*(yR95 *)rt_nil_check(F.p2549))).f_name))))) {
F.v5741 = ((*(yR115 *)rt_nil_check(F.v5741))).f_mnext;
}
if ((F.v5741 == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2549))).f_line, ((*(yR95 *)rt_nil_check(F.p2549))).f_name, y_str(" is not exported by that module", 31));
}
} else {
if (F.p2551) {
F.v5741 = yr1618_FindHere(((*(yR95 *)rt_nil_check(F.p2549))).f_name);
} else {
F.v5741 = yr1612_Find(((*(yR95 *)rt_nil_check(F.p2549))).f_name);
}
if ((F.v5741 == ((void *)0))) {
if (F.p2551) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2549))).f_line, ((*(yR95 *)rt_nil_check(F.p2549))).f_name, y_str(" is not declared in this module", 31));
} else {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2549))).f_line, ((*(yR95 *)rt_nil_check(F.p2549))).f_name, y_str(" is not declared around this module (X.B.2)", 43));
}
}
}
F.v5747 = ((*(yR95 *)rt_nil_check(F.p2549))).f_name;
if ((!(((*(yR95 *)rt_nil_check(F.p2549))).f_ival == INT64_C(0)))) {
F.v5747 = rt_range(((*(yR95 *)rt_nil_check(F.p2549))).f_ival, INT64_C(0), INT64_C(4000000));
}
F.v5743 = yr1677_Real(F.v5741);
if ((((((*(yR115 *)rt_nil_check(F.v5743))).f_kind == v849)) && ((((*(yR95 *)rt_nil_check(F.p2549))).f_text == INT64_C(0))))) {
if ((((!(F.v5751 == INT64_C(0)))) || ((!(((*(yR95 *)rt_nil_check(F.p2549))).f_ival == INT64_C(0)))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2549))).f_line, y_str("a module name in a list takes no attribute and no AS (X.B.3)", 60));
}
F.v5745 = ((*(yR115 *)rt_nil_check(F.v5743))).f_members;
while ((!(F.v5745 == ((void *)0)))) {
F.v5741 = yr2533_Alias(((*(yR115 *)rt_nil_check(F.v5745))).f_name, F.v5745);
((*(yR115 *)rt_nil_check(F.v5741))).f_mnext = (*F.p2550);
(*F.p2550) = F.v5741;
F.v5745 = ((*(yR115 *)rt_nil_check(F.v5745))).f_mnext;
}
return;
}
F.v5745 = yr2533_Alias(F.v5747, F.v5741);
if (F.p2551) {
if ((((((*(yR115 *)rt_nil_check(F.v5743))).f_kind == v837)) || ((((*(yR115 *)rt_nil_check(F.v5743))).f_kind == v840)))) {
if ((((F.v5751 == v399)) || ((F.v5751 == v453)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2549))).f_line, y_str("READONLY and VAR are for variables", 34));
}
if ((((!(F.v5751 == v444))) || ((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5743))).f_rep))).f_opaque)) {
F.v5749 = yr1714_CopyRep(((*(yR115 *)rt_nil_check(F.v5743))).f_rep);
((*(yR100 *)rt_nil_check(F.v5749))).f_opaque = 1;
((*(yR115 *)rt_nil_check(F.v5745))).f_target = yr1588_NewSym(((*(yR115 *)rt_nil_check(F.v5743))).f_kind, ((*(yR115 *)rt_nil_check(F.v5743))).f_name);
((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5745))).f_target))).f_rep = F.v5749;
((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5745))).f_target))).f_decl = ((*(yR115 *)rt_nil_check(F.v5743))).f_decl;
} else {
yr2540_AddLits(&(*F.p2550), ((*(yR115 *)rt_nil_check(F.v5743))).f_rep, INT64_C(0));
}
} else if ((((*(yR115 *)rt_nil_check(F.v5743))).f_kind == v831)) {
if ((((F.v5751 == v366)) || ((F.v5751 == v444)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2549))).f_line, y_str("OPAQUE and TRANSPARENT are for types", 36));
}
if ((!(F.v5751 == v453))) {
((*(yR115 *)rt_nil_check(F.v5745))).f_readonly = 1;
}
} else if ((!(F.v5751 == INT64_C(0)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2549))).f_line, y_str("an attribute is for a type, a representation or a variable", 58));
}
if ((((((*(yR115 *)rt_nil_check(F.v5743))).f_kind == v831)) && ((((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5743))).f_rep))).f_kind == v807)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2549))).f_line, y_str("a signal may not be exported from its monitor (X.E.4)", 53));
}
} else if ((((((*(yR115 *)rt_nil_check(F.v5743))).f_kind == v837)) || ((((*(yR115 *)rt_nil_check(F.v5743))).f_kind == v840)))) {
yr2540_AddLits(&(*F.p2550), ((*(yR115 *)rt_nil_check(F.v5743))).f_rep, INT64_C(0));
}
((*(yR115 *)rt_nil_check(F.v5745))).f_mnext = (*F.p2550);
(*F.p2550) = F.v5745;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2556_DefineAll(void * a_p2557, rt_int a_p2558) {
struct yf2559 F;
memset((void *)&F, 0, sizeof F);
F.p2557 = a_p2557;
F.p2558 = a_p2558;
F.v5775 = F.p2557;
F.v5777 = F.p2557;
F.v5779 = F.p2557;
while ((!(F.v5775 == ((void *)0)))) {
F.v5777 = ((*(yR115 *)rt_nil_check(F.v5775))).f_mnext;
F.v5779 = yr1618_FindHere(((*(yR115 *)rt_nil_check(F.v5775))).f_name);
if ((((F.v5779 == ((void *)0))) || ((!(yr1677_Real(F.v5779) == yr1677_Real(F.v5775)))))) {
if (((((!(F.v5779 == ((void *)0)))) && ((((*(yR115 *)rt_nil_check(yr1677_Real(F.v5775)))).f_kind == v843))) && ((((*(yR115 *)rt_nil_check(yr1677_Real(F.v5779)))).f_kind == v843)))) {
yr1644_Define(F.v5775, F.p2558);
} else if ((F.v5779 == ((void *)0))) {
yr1644_Define(F.v5775, F.p2558);
} else {
yr1132_FailN(F.p2558, ((*(yR115 *)rt_nil_check(F.v5775))).f_name, y_str(" comes into this scope twice", 28));
}
}
F.v5775 = F.v5777;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2563_CompileModule(void * a_p2564) {
struct yf2565 F;
memset((void *)&F, 0, sizeof F);
F.p2564 = a_p2564;
F.v5808 = 0;
F.v5784 = ((void *)0);
F.v5800 = ((*(yR95 *)rt_nil_check(F.p2564))).f_a;
while ((!(F.v5800 == ((void *)0)))) {
yr2548_ResolveItem(F.v5800, &F.v5784, 0);
F.v5800 = ((*(yR95 *)rt_nil_check(F.v5800))).f_next;
}
F.v5794 = v2522;
if ((((((*(yR95 *)rt_nil_check(F.p2564))).f_flag == INT64_C(1))) && ((v2522 == ((void *)0))))) {
F.v5796 = yr1588_NewSym(v831, ((*(yR95 *)rt_nil_check(F.p2564))).f_name);
((*(yR115 *)rt_nil_check(F.v5796))).f_level = v1576;
((*(yR115 *)rt_nil_check(F.v5796))).f_cname = yr1146_Fresh(y_str("mon", 3));
((*(yR115 *)rt_nil_check(F.v5796))).f_rep = v1689;
yr1664_DeclStorage(yr1021_T(y_str("ymon", 4)), ((*(yR115 *)rt_nil_check(F.v5796))).f_cname);
yr1092_Emit(yr2437_Join(yr1021_T(y_str("y_mon_init(&", 12)), yr1651_Path(v1576, ((*(yR115 *)rt_nil_check(F.v5796))).f_cname), yr1021_T(y_str(");", 2))));
v2522 = F.v5796;
F.v5808 = 1;
}
yr1595_OpenScope(1);
((void * *)(v2531).p)[y_ix1(v2531, v1570)] = ((void *)0);
F.v5804 = v1573;
v1573 = v1570;
yr2556_DefineAll(F.v5784, ((*(yR95 *)rt_nil_check(F.p2564))).f_line);
yr2516_Declarations(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2564))).f_c))).f_a);
if (F.v5808) {
yr1092_Emit(yr2437_Join(yr1021_T(y_str("y_mon_enter(&", 13)), yr1651_Path(((*(yR115 *)rt_nil_check(v2522))).f_level, ((*(yR115 *)rt_nil_check(v2522))).f_cname), yr1021_T(y_str(");", 2))));
}
v2314 = rt_range(rt_add(v2314, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2312).p)[y_ix1(v2312, v2314)] = INT64_C(0);
yr2395_BlockStatements(((*(yR95 *)rt_nil_check(F.p2564))).f_c);
v2314 = rt_range(rt_sub(v2314, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (F.v5808) {
yr1092_Emit(yr2437_Join(yr1021_T(y_str("y_mon_leave(&", 13)), yr1651_Path(((*(yR115 *)rt_nil_check(v2522))).f_level, ((*(yR115 *)rt_nil_check(v2522))).f_cname), yr1021_T(y_str(");", 2))));
}
F.v5786 = ((void *)0);
F.v5800 = ((*(yR95 *)rt_nil_check(F.p2564))).f_b;
while ((!(F.v5800 == ((void *)0)))) {
yr2548_ResolveItem(F.v5800, &F.v5786, 1);
F.v5800 = ((*(yR95 *)rt_nil_check(F.v5800))).f_next;
}
F.v5802 = ((void * *)(v2531).p)[y_ix1(v2531, v1570)];
v1573 = F.v5804;
yr1601_CloseScope();
while ((!(F.v5802 == ((void *)0)))) {
F.v5800 = ((*(yR95 *)rt_nil_check(F.v5802))).f_next;
((*(yR95 *)rt_nil_check(F.v5802))).f_next = ((void * *)(v2531).p)[y_ix1(v2531, v1570)];
((void * *)(v2531).p)[y_ix1(v2531, v1570)] = F.v5802;
F.v5802 = F.v5800;
}
v2522 = F.v5794;
F.v5790 = yr1588_NewSym(v849, ((*(yR95 *)rt_nil_check(F.p2564))).f_name);
((*(yR115 *)rt_nil_check(F.v5790))).f_members = F.v5786;
yr1644_Define(F.v5790, ((*(yR95 *)rt_nil_check(F.p2564))).f_line);
F.v5792 = F.v5786;
F.v5786 = ((void *)0);
while ((!(F.v5792 == ((void *)0)))) {
F.v5798 = ((*(yR115 *)rt_nil_check(F.v5792))).f_mnext;
F.v5788 = yr2533_Alias(((*(yR115 *)rt_nil_check(F.v5792))).f_name, F.v5792);
((*(yR115 *)rt_nil_check(F.v5788))).f_readonly = ((*(yR115 *)rt_nil_check(F.v5792))).f_readonly;
((*(yR115 *)rt_nil_check(F.v5788))).f_mnext = F.v5786;
F.v5786 = F.v5788;
F.v5792 = F.v5798;
}
((*(yR115 *)rt_nil_check(F.v5790))).f_members = F.v5786;
F.v5792 = F.v5786;
while ((!(F.v5792 == ((void *)0)))) {
F.v5798 = yr2533_Alias(((*(yR115 *)rt_nil_check(F.v5792))).f_name, F.v5792);
((*(yR115 *)rt_nil_check(F.v5798))).f_readonly = ((*(yR115 *)rt_nil_check(F.v5792))).f_readonly;
if ((yr1618_FindHere(((*(yR115 *)rt_nil_check(F.v5792))).f_name) == ((void *)0))) {
yr1644_Define(F.v5798, ((*(yR95 *)rt_nil_check(F.p2564))).f_line);
} else if ((!(((*(yR115 *)rt_nil_check(yr1677_Real(F.v5792)))).f_kind == v843))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2564))).f_line, ((*(yR115 *)rt_nil_check(F.v5792))).f_name, y_str(" is exported into a scope that has it already", 45));
}
F.v5792 = ((*(yR115 *)rt_nil_check(F.v5792))).f_mnext;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2569_DeclareTemplate(void * a_p2570) {
struct yf2571 F;
memset((void *)&F, 0, sizeof F);
F.p2570 = a_p2570;
F.v5832 = yr1588_NewSym(v852, ((*(yR95 *)rt_nil_check(F.p2570))).f_name);
((*(yR115 *)rt_nil_check(F.v5832))).f_decl = F.p2570;
yr1644_Define(F.v5832, ((*(yR95 *)rt_nil_check(F.p2570))).f_line);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2575_Instantiate(void * a_p2576) {
struct yf2577 F;
memset((void *)&F, 0, sizeof F);
F.p2576 = a_p2576;
F.v5836 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(F.p2576))).f_name, ((*(yR95 *)rt_nil_check(F.p2576))).f_line));
if ((!(((*(yR115 *)rt_nil_check(F.v5836))).f_kind == v852))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2576))).f_line, ((*(yR95 *)rt_nil_check(F.p2576))).f_name, y_str(" is not a template", 18));
}
F.v5838 = ((*(yR115 *)rt_nil_check(F.v5836))).f_decl;
if ((!(yr1260_Count(((*(yR95 *)rt_nil_check(F.v5838))).f_a) == yr1260_Count(((*(yR95 *)rt_nil_check(F.p2576))).f_a)))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2576))).f_line, ((*(yR95 *)rt_nil_check(F.p2576))).f_name, y_str(": the number of actuals is wrong", 32));
}
F.v5844 = rt_range(rt_add(v1159, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
{ rt_int hi5863 = rt_sub(((*(yR95 *)rt_nil_check(F.v5838))).f_flag, INT64_C(1));
for (rt_int i5862 = ((*(yR95 *)rt_nil_check(F.v5838))).f_ival; i5862 <= hi5863; i5862++) { F.c_5861 = i5862;
F.v5848 = ((rt_int *)(v1153).p)[y_ix1(v1153, F.c_5861)];
F.v5850 = ((rt_int *)(v1155).p)[y_ix1(v1155, F.c_5861)];
if ((F.v5848 == v177)) {
F.v5840 = ((*(yR95 *)rt_nil_check(F.v5838))).f_a;
F.v5842 = ((*(yR95 *)rt_nil_check(F.p2576))).f_a;
while ((!(F.v5840 == ((void *)0)))) {
if ((((*(yR95 *)rt_nil_check(F.v5840))).f_name == F.v5850)) {
F.v5850 = ((*(yR95 *)rt_nil_check(F.v5842))).f_name;
if ((F.v5850 <= v462)) {
F.v5848 = v180;
} else if ((F.v5850 <= v591)) {
F.v5848 = v183;
}
}
F.v5840 = ((*(yR95 *)rt_nil_check(F.v5840))).f_next;
F.v5842 = ((*(yR95 *)rt_nil_check(F.v5842))).f_next;
}
}
v1159 = rt_range(rt_add(v1159, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1153).p)[y_ix1(v1153, v1159)] = F.v5848;
((rt_int *)(v1155).p)[y_ix1(v1155, v1159)] = F.v5850;
((rt_int *)(v1157).p)[y_ix1(v1157, v1159)] = ((rt_int *)(v1157).p)[y_ix1(v1157, F.c_5861)];
if (i5862 == hi5863) break;
}}
v1159 = rt_range(rt_add(v1159, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1153).p)[y_ix1(v1153, v1159)] = v174;
((rt_int *)(v1155).p)[y_ix1(v1155, v1159)] = INT64_C(0);
((rt_int *)(v1157).p)[y_ix1(v1157, v1159)] = ((*(yR95 *)rt_nil_check(F.p2576))).f_line;
F.v5846 = v1234;
v1234 = F.v5844;
F.v5852 = yr1350_ParseModule();
v1234 = F.v5846;
yr2563_CompileModule(F.v5852);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2581_DeclareProcess(void * a_p2582) {
struct yf2583 F;
memset((void *)&F, 0, sizeof F);
F.p2582 = a_p2582;
F.v5872 = ((*(yR95 *)rt_nil_check(F.p2582))).f_sym;
((*(yR115 *)rt_nil_check(F.v5872))).f_monitor = v2522;
yr1664_DeclStorage(yr1021_T(y_str("rt_taskdecl", 11)), yr2437_Join(((*(yR115 *)rt_nil_check(F.v5872))).f_cname, yr1021_T(y_str("_d", 2)), INT64_C(0)));
F.v5874 = yr1245_NewNode(v639, ((*(yR95 *)rt_nil_check(F.p2582))).f_line);
((*(yR95 *)rt_nil_check(F.v5874))).f_sym = F.v5872;
((*(yR95 *)rt_nil_check(F.v5874))).f_next = ((void * *)(v2531).p)[y_ix1(v2531, v1570)];
((void * *)(v2531).p)[y_ix1(v2531, v1570)] = F.v5874;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2587_AwaitProcesses(void) {
struct yf2588 F;
memset((void *)&F, 0, sizeof F);
F.v5880 = ((void * *)(v2531).p)[y_ix1(v2531, v1570)];
while ((!(F.v5880 == ((void *)0)))) {
yr1092_Emit(yr2437_Join(yr1021_T(y_str("rt_await_decl(&", 15)), yr1651_Path(rt_range(rt_sub(((*(yR115 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v5880))).f_sym))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr2437_Join(((*(yR115 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v5880))).f_sym))).f_cname, yr1021_T(y_str("_d", 2)), INT64_C(0))), yr1021_T(y_str(");", 2))));
F.v5880 = ((*(yR95 *)rt_nil_check(F.v5880))).f_next;
}
((void * *)(v2531).p)[y_ix1(v2531, v1570)] = ((void *)0);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2592_Activate(void * a_p2593, void * a_p2594) {
struct yf2595 F;
memset((void *)&F, 0, sizeof F);
F.p2593 = a_p2593;
F.p2594 = a_p2594;
F.v5911 = ((*(yR115 *)rt_nil_check(F.p2594))).f_decl;
yr2234_CompileArgs(((*(yR95 *)rt_nil_check(F.p2593))).f_a, F.p2594, &F.v5891, &F.v5893);
if ((!(F.v5893 == ((*(yR115 *)rt_nil_check(F.p2594))).f_nparams))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2593))).f_line, ((*(yR115 *)rt_nil_check(F.p2594))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
F.v5899 = yr1146_Fresh(y_str("pf", 2));
yr1092_Emit(yr2437_Join(yr1021_T(y_str("{ struct ", 9)), ((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.p2594))).f_members))).f_name, yr2437_Join(yr1021_T(y_str(" *", 2)), F.v5899, yr2437_Join(yr1021_T(y_str(" = rt_alloc(sizeof *", 20)), F.v5899, yr1021_T(y_str(");", 2))))));
if ((((*(yR115 *)rt_nil_check(F.p2594))).f_level > INT64_C(1))) {
yr1092_Emit(yr2437_Join(F.v5899, yr1021_T(y_str("->up = ", 7)), yr2437_Join(yr1658_FramePtr(rt_range(rt_sub(((*(yR115 *)rt_nil_check(F.p2594))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))), yr1021_T(y_str(";", 1)), INT64_C(0))));
}
F.v5897 = ((*(yR115 *)rt_nil_check(F.p2594))).f_params;
F.v5895 = rt_range(rt_add(F.v5891, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(F.v5897 == ((void *)0)))) {
if ((!yr2213_Fits(((*(yR110 *)rt_nil_check(F.v5897))).f_rep, ((void * *)(v2199).p)[y_ix1(v2199, F.v5895)]))) {
yr1775_TypeClash(((*(yR95 *)rt_nil_check(((void * *)(v2208).p)[y_ix1(v2208, F.v5895)]))).f_line, ((*(yR110 *)rt_nil_check(F.v5897))).f_rep, ((void * *)(v2199).p)[y_ix1(v2199, F.v5895)]);
}
F.v5905 = yr2437_Join(F.v5899, yr1021_T(y_str("->", 2)), ((*(yR110 *)rt_nil_check(F.v5897))).f_cname);
if ((((*(yR110 *)rt_nil_check(F.v5897))).f_cls == v873)) {
if ((!yr2058_IsVariable(((void * *)(v2208).p)[y_ix1(v2208, F.v5895)]))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(((void * *)(v2208).p)[y_ix1(v2208, F.v5895)]))).f_line, ((*(yR110 *)rt_nil_check(F.v5897))).f_name, y_str(": the actual of a VAR parameter must be a variable", 50));
}
yr1092_Emit(yr2437_Join(F.v5905, yr1021_T(y_str(" = &", 4)), yr2437_Join(((rt_int *)(v2190).p)[y_ix1(v2190, F.v5895)], yr1021_T(y_str(";", 1)), INT64_C(0))));
} else if (yr1744_Deep(((*(yR110 *)rt_nil_check(F.v5897))).f_rep)) {
F.v5901 = yr1146_Fresh(y_str("t", 1));
yr1092_Emit(yr2437_Join(yr1021_T(y_str("{ ", 2)), yr1750_CType(((*(yR110 *)rt_nil_check(F.v5897))).f_rep), yr2437_Join(yr1021_T(y_str(" ", 1)), F.v5901, yr2437_Join(yr1021_T(y_str(" = ", 3)), ((rt_int *)(v2190).p)[y_ix1(v2190, F.v5895)], yr1021_T(y_str(";", 1))))));
if ((((*(yR100 *)rt_nil_check(((*(yR110 *)rt_nil_check(F.v5897))).f_rep))).f_kind == v813)) {
yr1092_Emit(yr2437_Join(yr1021_T(y_str("y_copy(y_desc_vector(", 21)), yr1756_DescOf(((*(yR100 *)rt_nil_check(((*(yR110 *)rt_nil_check(F.v5897))).f_rep))).f_elem), yr2437_Join(yr1021_T(y_str("), &", 4)), F.v5905, yr2437_Join(yr1021_T(y_str(", &", 3)), F.v5901, yr1021_T(y_str("); }", 4))))));
} else {
yr1092_Emit(yr2437_Join(yr1021_T(y_str("y_copy(", 7)), yr1756_DescOf(((*(yR110 *)rt_nil_check(F.v5897))).f_rep), yr2437_Join(yr1021_T(y_str(", &", 3)), F.v5905, yr2437_Join(yr1021_T(y_str(", &", 3)), F.v5901, yr1021_T(y_str("); }", 4))))));
}
} else {
yr1092_Emit(yr2437_Join(F.v5905, yr1021_T(y_str(" = ", 3)), yr2437_Join(yr2040_Convert(((rt_int *)(v2190).p)[y_ix1(v2190, F.v5895)], ((*(yR110 *)rt_nil_check(F.v5897))).f_rep, ((void * *)(v2199).p)[y_ix1(v2199, F.v5895)]), yr1021_T(y_str(";", 1)), INT64_C(0))));
}
F.v5895 = rt_range(rt_add(F.v5895, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5897 = ((*(yR110 *)rt_nil_check(F.v5897))).f_next;
}
v2210 = F.v5891;
F.v5907 = yr1021_T(y_str("0", 1));
if ((!(((*(yR95 *)rt_nil_check(F.v5911))).f_e == ((void *)0)))) {
yr2091_Expr(((*(yR95 *)rt_nil_check(F.v5911))).f_e, v1683, &F.v5907, &F.v5913);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.v5911))).f_line, v1683, F.v5913);
}
F.v5909 = yr1021_T(y_str("0, 0", 4));
if ((!(((*(yR95 *)rt_nil_check(F.v5911))).f_d == ((void *)0)))) {
yr2091_Expr(((*(yR95 *)rt_nil_check(F.v5911))).f_d, v1683, &F.v5903, &F.v5913);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.v5911))).f_line, v1683, F.v5913);
F.v5909 = yr2437_Join(yr1021_T(y_str("1, ", 3)), F.v5903, INT64_C(0));
}
yr986_SB();
yr997_SA(y_str("y_create(&", 10));
yr1004_ST(yr1651_Path(rt_range(rt_sub(((*(yR115 *)rt_nil_check(F.p2594))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr2437_Join(((*(yR115 *)rt_nil_check(F.p2594))).f_cname, yr1021_T(y_str("_d", 2)), INT64_C(0))));
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v5907);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v5909);
yr997_SA(y_str(", ", 2));
yr1004_ST(((*(yR115 *)rt_nil_check(F.p2594))).f_cname);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v5899);
yr997_SA(y_str("); }", 4));
F.v5901 = yr1016_SE();
yr1092_Emit(F.v5901);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2599_MonitorPath(void * a_p2600) {
struct yf2601 F;
memset((void *)&F, 0, sizeof F);
F.p2600 = a_p2600;
{ rt_int rv5969 = yr2437_Join(yr1021_T(y_str("&", 1)), yr1651_Path(((*(yR115 *)rt_nil_check(F.p2600))).f_level, ((*(yR115 *)rt_nil_check(F.p2600))).f_cname), INT64_C(0));
return rv5969; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2605_EnterMonitor(void * a_p2606) {
struct yf2607 F;
memset((void *)&F, 0, sizeof F);
F.p2606 = a_p2606;
if ((((*(yR115 *)rt_nil_check(F.p2606))).f_kind == v846)) {
((*(yR115 *)rt_nil_check(F.p2606))).f_monitor = v2522;
}
if ((((*(yR115 *)rt_nil_check(F.p2606))).f_monitor == ((void *)0))) {
return;
}
yr1092_Emit(yr2437_Join(yr1021_T(y_str("y_mon_enter(", 12)), yr2599_MonitorPath(((*(yR115 *)rt_nil_check(F.p2606))).f_monitor), yr1021_T(y_str(");", 2))));
F.v5973 = yr1146_Fresh(y_str("mf", 2));
v2357 = 1;
yr1092_Emit(yr2437_Join(yr1021_T(y_str("rt_frame ", 9)), F.v5973, yr1021_T(y_str(";", 1))));
yr986_SB();
yr997_SA(y_str("if (!RT_TRY(", 12));
yr1004_ST(F.v5973);
yr997_SA(y_str(")) { RT_POP(", 12));
yr1004_ST(F.v5973);
yr997_SA(y_str("); ", 3));
if ((((*(yR115 *)rt_nil_check(F.p2606))).f_kind == v855)) {
yr997_SA(y_str("y_mon_drop(", 11));
} else {
yr997_SA(y_str("y_mon_leave(", 12));
}
yr1004_ST(yr2599_MonitorPath(((*(yR115 *)rt_nil_check(F.p2606))).f_monitor));
yr997_SA(y_str("); rt_raise(rt_xcur); }", 23));
yr1092_Emit(yr1016_SE());
v2299 = rt_range(rt_add(v2299, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2297).p)[y_ix1(v2297, v2299)] = F.v5973;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2611_LeaveMonitor(void) {
struct yf2612 F;
memset((void *)&F, 0, sizeof F);
if ((v2355 == ((void *)0))) {
return;
}
if ((((*(yR115 *)rt_nil_check(v2355))).f_monitor == ((void *)0))) {
return;
}
if ((((*(yR115 *)rt_nil_check(v2355))).f_kind == v855)) {
yr1092_Emit(yr2437_Join(yr1021_T(y_str("y_mon_drop(", 11)), yr2599_MonitorPath(((*(yR115 *)rt_nil_check(v2355))).f_monitor), yr1021_T(y_str(");", 2))));
} else {
yr1092_Emit(yr2437_Join(yr1021_T(y_str("y_mon_leave(", 12)), yr2599_MonitorPath(((*(yR115 *)rt_nil_check(v2355))).f_monitor), yr1021_T(y_str(");", 2))));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2616_TerminateStatement(void * a_p2617) {
struct yf2618 F;
memset((void *)&F, 0, sizeof F);
F.p2617 = a_p2617;
if ((((v2355 == ((void *)0))) || ((!(((*(yR115 *)rt_nil_check(v2355))).f_kind == v855))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2617))).f_line, y_str("TERMINATE_PROCESS ends a process (IX.A.7)", 41));
}
yr2587_AwaitProcesses();
yr2611_LeaveMonitor();
yr2378_PopTo(v2302);
yr1098_EmitS(y_str("return;", 7));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2622_DeclareSignal(void * a_p2623, rt_int a_p2624) {
struct yf2625 F;
memset((void *)&F, 0, sizeof F);
F.p2623 = a_p2623;
F.p2624 = a_p2624;
if ((v2522 == ((void *)0))) {
yr1124_FailS(F.p2624, y_str("signal variables are declared in a monitor (X.E.4)", 50));
}
((*(yR115 *)rt_nil_check(F.p2623))).f_rep = yr1714_CopyRep(((*(yR115 *)rt_nil_check(F.p2623))).f_rep);
((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.p2623))).f_rep))).f_monitor = v2522;
yr1092_Emit(yr2437_Join(yr1021_T(y_str("y_sig_init(&", 12)), yr1671_SymPath(F.p2623), yr2437_Join(yr1021_T(y_str(", ", 2)), yr2599_MonitorPath(v2522), yr1021_T(y_str(");", 2)))));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2629_DeviceSignal(void * a_p2630, void * a_p2631) {
struct yf2632 F;
memset((void *)&F, 0, sizeof F);
F.p2630 = a_p2630;
F.p2631 = a_p2631;
yr2032_Manifest(F.p2631, &F.v6008, &F.v6010);
if ((!F.v6008)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2631))).f_line, y_str("an AT location is a manifest constant (XIV.VII)", 47));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2636_Arg(void * a_p2637, rt_int a_p2638) {
struct yf2639 F;
memset((void *)&F, 0, sizeof F);
F.p2637 = a_p2637;
F.p2638 = a_p2638;
F.v6016 = ((*(yR95 *)rt_nil_check(F.p2637))).f_a;
F.v6018 = INT64_C(1);
while ((((!(F.v6016 == ((void *)0)))) && ((F.v6018 < F.p2638)))) {
F.v6016 = ((*(yR95 *)rt_nil_check(F.v6016))).f_next;
F.v6018 = rt_range(rt_add(F.v6018, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v6016 == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2637))).f_line, ((*(yR95 *)rt_nil_check(F.p2637))).f_name, y_str(": too few actual parameters", 27));
}
{ void * rv6023 = F.v6016;
return rv6023; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2643_NArgs(void * a_p2644, rt_int a_p2645) {
struct yf2646 F;
memset((void *)&F, 0, sizeof F);
F.p2644 = a_p2644;
F.p2645 = a_p2645;
if ((!(yr1260_Count(((*(yR95 *)rt_nil_check(F.p2644))).f_a) == F.p2645))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2644))).f_line, ((*(yR95 *)rt_nil_check(F.p2644))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2650_Call1(yarr a_p2652, rt_int a_p2653) {
struct yf2654 F;
memset((void *)&F, 0, sizeof F);
F.p2652 = a_p2652;
F.p2653 = a_p2653;
yr986_SB();
yr997_SA(F.p2652);
yr997_SA(y_str("(", 1));
yr1004_ST(F.p2653);
yr997_SA(y_str(")", 1));
{ rt_int rv6033 = yr1016_SE();
return rv6033; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2658_Addr(rt_int a_p2659) {
struct yf2660 F;
memset((void *)&F, 0, sizeof F);
F.p2659 = a_p2659;
{ rt_int rv6038 = yr2437_Join(yr1021_T(y_str("&", 1)), F.p2659, INT64_C(0));
return rv6038; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2664_StdVar(void * a_p2665, rt_int a_p2666, rt_int * a_p2667, void * * a_p2668) {
struct yf2669 F;
memset((void *)&F, 0, sizeof F);
F.p2665 = a_p2665;
F.p2666 = a_p2666;
F.p2667_o = a_p2667;
F.p2668_o = a_p2668;
yr2064_LValue(F.p2665, &F.p2667, &F.p2668);
if ((((!(F.p2666 == v828))) && ((!(((*(yR100 *)rt_nil_check(F.p2668))).f_kind == F.p2666))))) {
yr986_SB();
yr997_SA(y_str("a ", 2));
if ((F.p2666 == v801)) {
yr997_SA(y_str("file", 4));
} else if ((F.p2666 == v807)) {
yr997_SA(y_str("signal", 6));
} else if ((F.p2666 == v810)) {
yr997_SA(y_str("SEMAPHORE", 9));
} else if ((F.p2666 == v798)) {
yr997_SA(y_str("pointer", 7));
} else {
yr997_SA(y_str("variable", 8));
}
yr997_SA(y_str(" is needed here", 15));
F.v6045 = yr1016_SE();
yr1117_Fail(((*(yR95 *)rt_nil_check(F.p2665))).f_line, F.v6045);
}
(*F.p2667_o) = F.p2667;
(*F.p2668_o) = F.p2668;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2673_NumArg(void * a_p2674, rt_int * a_p2675, void * * a_p2676) {
struct yf2677 F;
memset((void *)&F, 0, sizeof F);
F.p2674 = a_p2674;
F.p2675_o = a_p2675;
F.p2676_o = a_p2676;
yr2091_Expr(F.p2674, ((void *)0), &F.p2675, &F.p2676);
if ((!yr1726_IsNumeric(F.p2676))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2674))).f_line, y_str("a number is needed here", 23));
}
(*F.p2675_o) = F.p2675;
(*F.p2676_o) = F.p2676;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2681_IntArg(void * a_p2682) {
struct yf2683 F;
memset((void *)&F, 0, sizeof F);
F.p2682 = a_p2682;
yr2091_Expr(F.p2682, v1683, &F.v6061, &F.v6063);
if ((!(((*(yR100 *)rt_nil_check(F.v6063))).f_kind == v774))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2682))).f_line, y_str("an integer is needed here", 25));
}
{ rt_int rv6065 = F.v6061;
return rv6065; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2687_CodeInsert(void * a_p2688) {
struct yf2689 F;
memset((void *)&F, 0, sizeof F);
F.p2688 = a_p2688;
F.v6069 = yr2636_Arg(F.p2688, INT64_C(1));
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1)}; y_desc_array(&F.yd_6093, 1, lo, hi, &y_d_int); }
y_init(&F.yd_6093, &F.v6095);
if ((!(((*(yR95 *)rt_nil_check(F.v6069))).f_kind == v741))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2688))).f_line, y_str("a code insert takes a string literal (XIV.XI.5)", 47));
}
F.v6072 = ((*(yR95 *)rt_nil_check(F.v6069))).f_text;
F.v6082 = ((rt_int *)(v890).p)[y_ix1(v890, F.v6072)];
yr986_SB();
F.v6078 = INT64_C(1);
while ((F.v6078 <= F.v6082)) {
F.v6084 = yr1063_TChar(F.v6072, F.v6078);
if ((F.v6084 == 39)) {
F.v6080 = rt_range(rt_add(F.v6078, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1063_TChar(F.v6072, F.v6080) == 39))) {
F.v6080 = rt_range(rt_add(F.v6080, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v6074 = yr1028_Intern(rt_range(rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.v6072)], F.v6078), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v6080, F.v6078)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, yr2015_CharValue(v1687, F.v6074, ((*(yR95 *)rt_nil_check(F.p2688))).f_line))]);
F.v6078 = rt_range(rt_add(F.v6080, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v6084 == 36)) {
F.v6080 = rt_range(rt_add(F.v6078, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((F.v6080 <= F.v6082)) && ((yr968_IsLetter(yr1063_TChar(F.v6072, F.v6080)) || yr974_IsDigit(yr1063_TChar(F.v6072, F.v6080)))))) {
F.v6080 = rt_range(rt_add(F.v6080, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v6074 = yr1028_Intern(rt_range(rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.v6072)], F.v6078), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v6080, F.v6078)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v6086 = yr1612_Find(F.v6074);
if ((F.v6086 == ((void *)0))) {
v909 = INT64_C(0);
v921 = INT64_C(0);
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2688))).f_line, F.v6074, y_str(" in a code insert is not declared here", 38));
}
F.v6086 = yr1677_Real(F.v6086);
if ((((!(((*(yR115 *)rt_nil_check(F.v6086))).f_kind == v831))) && ((!(((*(yR115 *)rt_nil_check(F.v6086))).f_kind == v834))))) {
v909 = INT64_C(0);
v921 = INT64_C(0);
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2688))).f_line, F.v6074, y_str(" in a code insert is not a variable or constant", 47));
}
yr1004_ST(yr2072_Paren(yr1671_SymPath(F.v6086)));
F.v6078 = F.v6080;
} else {
yr991_SC(F.v6084);
F.v6078 = rt_range(rt_add(F.v6078, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
F.v6076 = yr1016_SE();
yr1092_Emit(F.v6076);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2693_StdCall(rt_int a_p2694, void * a_p2695, rt_int a_p2696, rt_int * a_p2697, void * * a_p2698) {
struct yf2699 F;
memset((void *)&F, 0, sizeof F);
F.p2694 = a_p2694;
F.p2695 = a_p2695;
F.p2696 = a_p2696;
F.p2697_o = a_p2697;
F.p2698_o = a_p2698;
F.p2698 = v1689;
F.p2697 = yr1021_T(y_str("((void)0)", 9));
F.v6162 = ((((((((((((((((F.p2694 == v1908)) || ((F.p2694 == v1911))) || ((F.p2694 == v1914))) || ((F.p2694 == v1917))) || ((F.p2694 == v1920))) || ((F.p2694 == v1926))) || ((F.p2694 == v1935))) || ((F.p2694 == v1941))) || ((F.p2694 == v1944))) || ((F.p2694 == v1968))) || ((F.p2694 == v1971))) || ((F.p2694 == v1980))) || ((F.p2694 == v1983))) || ((F.p2694 == v1986))) || ((F.p2694 == v1989)));
if ((F.p2696 && (!F.v6162))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2695))).f_line, ((*(yR95 *)rt_nil_check(F.p2695))).f_name, y_str(" returns a value: it is called in an expression", 47));
}
if (((!F.p2696) && F.v6162)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2695))).f_line, ((*(yR95 *)rt_nil_check(F.p2695))).f_name, y_str(" returns no value", 17));
}
if ((((F.p2694 == v1890)) || ((F.p2694 == v1893)))) {
yr2643_NArgs(F.p2695, INT64_C(2));
yr2091_Expr(yr2636_Arg(F.p2695, INT64_C(1)), ((void *)0), &F.v6134, &F.v6144);
if ((!yr1732_IsArrayLike(F.v6144))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2695))).f_line, ((*(yR95 *)rt_nil_check(F.p2695))).f_name, y_str(" of something that is not an array", 34));
}
F.v6136 = yr2681_IntArg(yr2636_Arg(F.p2695, INT64_C(2)));
yr2032_Manifest(yr2636_Arg(F.p2695, INT64_C(2)), &F.v6158, &F.v6156);
F.p2698 = yr2135_Unbounded(v1683);
if ((F.v6158 && ((((*(yR100 *)rt_nil_check(F.v6144))).f_kind == v792)))) {
if ((((F.v6156 < INT64_C(1))) || ((F.v6156 > ((*(yR100 *)rt_nil_check(F.v6144))).f_nidx)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2695))).f_line, y_str("no such dimension", 17));
}
F.v6150 = ((*(yR100 *)rt_nil_check(F.v6144))).f_idx;
{ rt_int hi6178 = F.v6156;
for (rt_int i6177 = INT64_C(2); i6177 <= hi6178; i6177++) { F.c_6176 = i6177;
F.v6150 = ((*(yR100 *)rt_nil_check(F.v6150))).f_link;
if (i6177 == hi6178) break;
}}
F.p2698 = F.v6150;
}
if ((F.p2694 == v1890)) {
F.p2697 = yr2141_Call2(y_str("y_low", 5), F.v6134, F.v6136);
} else {
F.p2697 = yr2141_Call2(y_str("y_high", 6), F.v6134, F.v6136);
}
(*F.p2697_o) = F.p2697;
(*F.p2698_o) = F.p2698;
return;
}
if ((((((F.p2694 == v1896)) || ((F.p2694 == v1899))) || ((F.p2694 == v1902))) || ((F.p2694 == v1905)))) {
yr2643_NArgs(F.p2695, INT64_C(1));
yr2091_Expr(yr2636_Arg(F.p2695, INT64_C(1)), ((void *)0), &F.v6134, &F.v6144);
if ((!yr1720_IsDiscrete(F.v6144))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2695))).f_line, ((*(yR95 *)rt_nil_check(F.p2695))).f_name, y_str(" of something that is not integer or scalar", 43));
}
if ((((((F.p2694 == v1902)) || ((F.p2694 == v1905)))) && ((((*(yR100 *)rt_nil_check(F.v6144))).f_kind == v774)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2695))).f_line, y_str("FIRST and LAST apply to ordered enumerations and alphabets (XI)", 63));
}
if ((((((*(yR100 *)rt_nil_check(F.v6144))).f_kind == v786)) && (!((*(yR100 *)rt_nil_check(F.v6144))).f_ordered))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2695))).f_line, ((*(yR95 *)rt_nil_check(F.p2695))).f_name, y_str(" applies to ordered enumerations (XI)", 37));
}
F.p2698 = yr2135_Unbounded(F.v6144);
if ((F.p2694 == v1902)) {
F.p2697 = ((*(yR100 *)rt_nil_check(F.v6144))).f_lo;
} else if ((F.p2694 == v1905)) {
F.p2697 = ((*(yR100 *)rt_nil_check(F.v6144))).f_hi;
} else {
yr986_SB();
if ((!(((*(yR100 *)rt_nil_check(F.v6144))).f_lo == INT64_C(0)))) {
yr997_SA(y_str("rt_range(", 9));
}
if ((F.p2694 == v1896)) {
yr997_SA(y_str("rt_add(", 7));
} else {
yr997_SA(y_str("rt_sub(", 7));
}
yr1004_ST(F.v6134);
yr997_SA(y_str(", 1)", 4));
if ((!(((*(yR100 *)rt_nil_check(F.v6144))).f_lo == INT64_C(0)))) {
yr997_SA(y_str(", ", 2));
yr1004_ST(((*(yR100 *)rt_nil_check(F.v6144))).f_lo);
yr997_SA(y_str(", ", 2));
yr1004_ST(((*(yR100 *)rt_nil_check(F.v6144))).f_hi);
yr997_SA(y_str(")", 1));
}
F.p2697 = yr1016_SE();
}
if ((!(((*(yR100 *)rt_nil_check(F.v6144))).f_kind == v774))) {
F.p2698 = F.v6144;
}
(*F.p2697_o) = F.p2697;
(*F.p2698_o) = F.p2698;
return;
}
if ((F.p2694 == v1908)) {
yr2643_NArgs(F.p2695, INT64_C(1));
yr2664_StdVar(yr2636_Arg(F.p2695, INT64_C(1)), v798, &F.v6134, &F.v6144);
if ((((*(yR100 *)rt_nil_check(F.v6144))).f_elem == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2695))).f_line, ((*(yR100 *)rt_nil_check(F.v6144))).f_forward, y_str(" is not declared", 16));
}
F.v6150 = ((*(yR100 *)rt_nil_check(F.v6144))).f_elem;
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(F.v6134);
yr997_SA(y_str(" = rt_alloc(sizeof(", 19));
yr1004_ST(yr1750_CType(F.v6150));
yr997_SA(y_str("));", 3));
if (yr1744_Deep(F.v6150)) {
yr997_SA(y_str(" y_init(", 8));
yr1004_ST(yr1756_DescOf(F.v6150));
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6134);
yr997_SA(y_str(");", 2));
}
yr997_SA(y_str(" })", 3));
F.p2697 = yr1016_SE();
(*F.p2697_o) = F.p2697;
(*F.p2698_o) = F.p2698;
return;
}
if ((F.p2694 == v1986)) {
yr2643_NArgs(F.p2695, INT64_C(1));
yr2664_StdVar(yr2636_Arg(F.p2695, INT64_C(1)), v798, &F.v6134, &F.v6144);
F.p2697 = yr2437_Join(yr1021_T(y_str("({ free(", 8)), F.v6134, yr2437_Join(yr1021_T(y_str("); ", 3)), F.v6134, yr1021_T(y_str(" = 0; })", 8))));
(*F.p2697_o) = F.p2697;
(*F.p2698_o) = F.p2698;
return;
}
if ((F.p2694 == v1911)) {
yr2643_NArgs(F.p2695, INT64_C(3));
yr2664_StdVar(yr2636_Arg(F.p2695, INT64_C(1)), v801, &F.v6134, &F.v6144);
yr2091_Expr(yr2636_Arg(F.p2695, INT64_C(2)), v1687, &F.v6136, &F.v6146);
if ((!yr1738_IsString(F.v6146))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2695))).f_line, y_str("OPEN takes the name of the file as a string (XII.A)", 51));
}
yr2091_Expr(yr2636_Arg(F.p2695, INT64_C(3)), v2703, &F.v6138, &F.v6148);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2695))).f_line, v2703, F.v6148);
yr986_SB();
yr997_SA(y_str("y_open(&", 8));
yr1004_ST(F.v6134);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6136);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6138);
yr997_SA(y_str(")", 1));
F.p2697 = yr1016_SE();
(*F.p2697_o) = F.p2697;
(*F.p2698_o) = F.p2698;
return;
}
if ((((F.p2694 == v1914)) || ((F.p2694 == v1923)))) {
yr2643_NArgs(F.p2695, INT64_C(1));
yr2664_StdVar(yr2636_Arg(F.p2695, INT64_C(1)), v801, &F.v6134, &F.v6144);
if ((F.p2694 == v1914)) {
F.p2697 = yr2650_Call1(y_str("y_close", 7), yr2658_Addr(F.v6134));
} else {
F.p2698 = v1685;
F.p2697 = yr2650_Call1(y_str("y_check_eof", 11), yr2658_Addr(F.v6134));
}
(*F.p2697_o) = F.p2697;
(*F.p2698_o) = F.p2698;
return;
}
if ((F.p2694 == v1917)) {
yr2643_NArgs(F.p2695, INT64_C(2));
yr2664_StdVar(yr2636_Arg(F.p2695, INT64_C(1)), v801, &F.v6134, &F.v6144);
yr2664_StdVar(yr2636_Arg(F.p2695, INT64_C(2)), v828, &F.v6136, &F.v6146);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2695))).f_line, ((*(yR100 *)rt_nil_check(F.v6144))).f_elem, F.v6146);
if ((yr1744_Deep(F.v6146) || ((((*(yR100 *)rt_nil_check(F.v6146))).f_kind == v798)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2695))).f_line, y_str("files of this implementation hold no arrays or pointers", 55));
}
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(yr1750_CType(F.v6146));
yr997_SA(y_str(" g; y_get(&", 11));
yr1004_ST(F.v6134);
yr997_SA(y_str(", &g, sizeof g); ", 17));
yr1004_ST(F.v6136);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2040_Convert(yr1021_T(y_str("g", 1)), F.v6146, ((*(yR100 *)rt_nil_check(F.v6144))).f_elem));
yr997_SA(y_str("; })", 4));
F.p2697 = yr1016_SE();
(*F.p2697_o) = F.p2697;
(*F.p2698_o) = F.p2698;
return;
}
if ((F.p2694 == v1920)) {
yr2643_NArgs(F.p2695, INT64_C(2));
yr2664_StdVar(yr2636_Arg(F.p2695, INT64_C(1)), v801, &F.v6134, &F.v6144);
yr2091_Expr(yr2636_Arg(F.p2695, INT64_C(2)), ((*(yR100 *)rt_nil_check(F.v6144))).f_elem, &F.v6136, &F.v6146);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2695))).f_line, ((*(yR100 *)rt_nil_check(F.v6144))).f_elem, F.v6146);
if ((yr1744_Deep(F.v6146) || ((((*(yR100 *)rt_nil_check(F.v6146))).f_kind == v798)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2695))).f_line, y_str("files of this implementation hold no arrays or pointers", 55));
}
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(yr1750_CType(((*(yR100 *)rt_nil_check(F.v6144))).f_elem));
yr997_SA(y_str(" pv = ", 6));
yr1004_ST(yr2040_Convert(F.v6136, ((*(yR100 *)rt_nil_check(F.v6144))).f_elem, F.v6146));
yr997_SA(y_str("; y_put(&", 9));
yr1004_ST(F.v6134);
yr997_SA(y_str(", &pv, sizeof pv); })", 21));
F.p2697 = yr1016_SE();
(*F.p2697_o) = F.p2697;
(*F.p2698_o) = F.p2698;
return;
}
if ((F.p2694 == v1926)) {
F.v6152 = yr1260_Count(((*(yR95 *)rt_nil_check(F.p2695))).f_a);
if ((((F.v6152 < INT64_C(5))) || ((!((rt_mod((rt_sub(F.v6152, INT64_C(2))), INT64_C(3))) == INT64_C(0)))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2695))).f_line, y_str("MOVE takes an object, an index and triples", 42));
}
yr2664_StdVar(yr2636_Arg(F.p2695, INT64_C(1)), v828, &F.v6134, &F.v6144);
if (((!((((((*(yR100 *)rt_nil_check(F.v6144))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.v6144))).f_kind == v813))))) || ((!(((*(yR100 *)rt_nil_check(F.v6144))).f_nidx == INT64_C(1)))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2695))).f_line, y_str("MOVE works on one-dimensional arrays", 36));
}
F.v6136 = yr2681_IntArg(yr2636_Arg(F.p2695, INT64_C(2)));
F.v6142 = yr1146_Fresh(y_str("at", 2));
yr986_SB();
yr997_SA(y_str("({ rt_int ", 10));
yr1004_ST(F.v6142);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.v6136);
yr997_SA(y_str(";", 1));
F.p2697 = yr1016_SE();
F.v6154 = INT64_C(3);
while ((F.v6154 < F.v6152)) {
yr2091_Expr(yr2636_Arg(F.p2695, F.v6154), ((*(yR100 *)rt_nil_check(F.v6144))).f_elem, &F.v6138, &F.v6148);
if (((!yr1732_IsArrayLike(F.v6148)) || (!yr1768_SameType(((*(yR100 *)rt_nil_check(F.v6144))).f_elem, ((*(yR100 *)rt_nil_check(F.v6148))).f_elem)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2695))).f_line, y_str("MOVE: the components differ in type", 35));
}
F.v6140 = yr2681_IntArg(yr2636_Arg(F.p2695, rt_range(rt_add(F.v6154, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v6136 = yr2681_IntArg(yr2636_Arg(F.p2695, rt_range(rt_add(F.v6154, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr986_SB();
yr1004_ST(F.p2697);
yr997_SA(y_str(" { rt_int mi = ", 15));
yr1004_ST(F.v6140);
yr997_SA(y_str(", mj = ", 7));
yr1004_ST(F.v6136);
yr997_SA(y_str("; y_move(&", 10));
yr1004_ST(F.v6134);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6142);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6138);
yr997_SA(y_str(", mi, mj, ", 10));
yr1004_ST(yr1756_DescOf(((*(yR100 *)rt_nil_check(F.v6144))).f_elem));
yr997_SA(y_str("); if (mj >= mi) ", 17));
yr1004_ST(F.v6142);
yr997_SA(y_str(" += mj - mi + 1; }", 18));
F.p2697 = yr1016_SE();
F.v6154 = rt_range(rt_add(F.v6154, INT64_C(3)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.p2697 = yr2437_Join(F.p2697, yr1021_T(y_str(" })", 3)), INT64_C(0));
(*F.p2697_o) = F.p2697;
(*F.p2698_o) = F.p2698;
return;
}
if ((((F.p2694 == v1929)) || ((F.p2694 == v1932)))) {
yr2643_NArgs(F.p2695, INT64_C(2));
F.v6134 = yr2407_Cond(yr2636_Arg(F.p2695, INT64_C(1)));
F.v6136 = yr2407_Cond(yr2636_Arg(F.p2695, INT64_C(2)));
F.p2698 = v1685;
if ((F.p2694 == v1929)) {
F.p2697 = yr2150_Infix(yr2072_Paren(yr2150_Infix(F.v6134, y_str("!=", 2), yr1021_T(y_str("0", 1)))), y_str("&", 1), yr2072_Paren(yr2150_Infix(F.v6136, y_str("!=", 2), yr1021_T(y_str("0", 1)))));
} else {
F.p2697 = yr2150_Infix(yr2072_Paren(yr2150_Infix(F.v6134, y_str("!=", 2), yr1021_T(y_str("0", 1)))), y_str("|", 1), yr2072_Paren(yr2150_Infix(F.v6136, y_str("!=", 2), yr1021_T(y_str("0", 1)))));
}
(*F.p2697_o) = F.p2697;
(*F.p2698_o) = F.p2698;
return;
}
if ((F.p2694 == v1935)) {
yr2643_NArgs(F.p2695, INT64_C(1));
F.p2697 = yr2650_Call1(y_str("rt_delay", 8), yr2681_IntArg(yr2636_Arg(F.p2695, INT64_C(1))));
(*F.p2697_o) = F.p2697;
(*F.p2698_o) = F.p2698;
return;
}
if ((F.p2694 == v1938)) {
yr2643_NArgs(F.p2695, INT64_C(0));
F.p2698 = yr2135_Unbounded(v1683);
F.p2697 = yr1021_T(y_str("rt_time()", 9));
(*F.p2697_o) = F.p2697;
(*F.p2698_o) = F.p2698;
return;
}
if (((((F.p2694 == v1941)) || ((F.p2694 == v1944))) || ((F.p2694 == v1947)))) {
yr2664_StdVar(yr2636_Arg(F.p2695, INT64_C(1)), v807, &F.v6134, &F.v6144);
if ((F.p2694 == v1941)) {
if ((yr1260_Count(((*(yR95 *)rt_nil_check(F.p2695))).f_a) == INT64_C(1))) {
F.v6136 = yr1021_T(y_str("1", 1));
} else {
yr2643_NArgs(F.p2695, INT64_C(2));
F.v6136 = yr2681_IntArg(yr2636_Arg(F.p2695, INT64_C(2)));
}
F.p2697 = yr2141_Call2(y_str("y_wait", 6), yr2658_Addr(F.v6134), F.v6136);
} else {
yr2643_NArgs(F.p2695, INT64_C(1));
if ((F.p2694 == v1944)) {
F.p2697 = yr2650_Call1(y_str("y_send", 6), yr2658_Addr(F.v6134));
} else {
F.p2698 = v1685;
F.p2697 = yr2650_Call1(y_str("y_awaited", 9), yr2658_Addr(F.v6134));
}
}
(*F.p2697_o) = F.p2697;
(*F.p2698_o) = F.p2698;
return;
}
if (((((F.p2694 == v1950)) || ((F.p2694 == v1953))) || ((F.p2694 == v1956)))) {
yr2643_NArgs(F.p2695, INT64_C(1));
yr2673_NumArg(yr2636_Arg(F.p2695, INT64_C(1)), &F.v6134, &F.v6144);
F.p2698 = yr2135_Unbounded(v1683);
if ((((*(yR100 *)rt_nil_check(F.v6144))).f_kind == v774)) {
F.p2697 = F.v6134;
} else if ((F.p2694 == v1950)) {
F.p2697 = yr2650_Call1(y_str("y_floor", 7), F.v6134);
} else if ((F.p2694 == v1953)) {
F.p2697 = yr2650_Call1(y_str("y_ceiling", 9), F.v6134);
} else {
F.p2697 = yr2650_Call1(y_str("y_near_integer", 14), F.v6134);
}
(*F.p2697_o) = F.p2697;
(*F.p2698_o) = F.p2698;
return;
}
if ((F.p2694 == v1962)) {
yr2643_NArgs(F.p2695, INT64_C(1));
yr2673_NumArg(yr2636_Arg(F.p2695, INT64_C(1)), &F.v6134, &F.v6144);
F.p2698 = v1695;
F.p2697 = yr2437_Join(yr1021_T(y_str("((double)(", 10)), F.v6134, yr1021_T(y_str("))", 2)));
(*F.p2697_o) = F.p2697;
(*F.p2698_o) = F.p2698;
return;
}
if ((F.p2694 == v1959)) {
yr2643_NArgs(F.p2695, INT64_C(2));
yr2673_NumArg(yr2636_Arg(F.p2695, INT64_C(1)), &F.v6134, &F.v6144);
yr2673_NumArg(yr2636_Arg(F.p2695, INT64_C(2)), &F.v6136, &F.v6146);
F.p2698 = v1697;
F.p2697 = yr2141_Call2(y_str("y_near_fixed", 12), yr2437_Join(yr1021_T(y_str("(double)(", 9)), F.v6134, yr1021_T(y_str(")", 1))), F.v6136);
(*F.p2697_o) = F.p2697;
(*F.p2698_o) = F.p2698;
return;
}
if ((F.p2694 == v1965)) {
yr2643_NArgs(F.p2695, INT64_C(3));
yr2673_NumArg(yr2636_Arg(F.p2695, INT64_C(1)), &F.v6134, &F.v6144);
yr2673_NumArg(yr2636_Arg(F.p2695, INT64_C(2)), &F.v6136, &F.v6146);
yr2673_NumArg(yr2636_Arg(F.p2695, INT64_C(3)), &F.v6138, &F.v6148);
F.p2698 = v1697;
F.p2697 = yr2437_Join(yr1021_T(y_str("y_fixed_div(", 12)), F.v6134, yr2437_Join(yr1021_T(y_str(", ", 2)), F.v6136, yr2437_Join(yr1021_T(y_str(", ", 2)), F.v6138, yr1021_T(y_str(")", 1)))));
(*F.p2697_o) = F.p2697;
(*F.p2698_o) = F.p2698;
return;
}
if (((((F.p2694 == v1968)) || ((F.p2694 == v1971))) || ((F.p2694 == v1974)))) {
yr2643_NArgs(F.p2695, INT64_C(1));
yr2664_StdVar(yr2636_Arg(F.p2695, INT64_C(1)), v810, &F.v6134, &F.v6144);
if ((F.p2694 == v1968)) {
F.p2697 = yr2650_Call1(y_str("rt_region_enter", 15), yr2658_Addr(F.v6134));
} else if ((F.p2694 == v1971)) {
F.p2697 = yr2650_Call1(y_str("rt_region_leave", 15), yr2658_Addr(F.v6134));
} else {
F.p2698 = v1685;
F.p2697 = yr2650_Call1(y_str("y_cond_claim", 12), yr2658_Addr(F.v6134));
}
(*F.p2697_o) = F.p2697;
(*F.p2698_o) = F.p2698;
return;
}
if ((F.p2694 == v1977)) {
yr2643_NArgs(F.p2695, INT64_C(0));
F.p2698 = yr2135_Unbounded(v1683);
F.p2697 = yr1021_T(y_str("y_self()", 8));
(*F.p2697_o) = F.p2697;
(*F.p2698_o) = F.p2698;
return;
}
if ((F.p2694 == v1980)) {
yr2643_NArgs(F.p2695, INT64_C(2));
F.p2697 = yr2141_Call2(y_str("y_change_priority", 17), yr2681_IntArg(yr2636_Arg(F.p2695, INT64_C(1))), yr2681_IntArg(yr2636_Arg(F.p2695, INT64_C(2))));
(*F.p2697_o) = F.p2697;
(*F.p2698_o) = F.p2698;
return;
}
if ((F.p2694 == v1983)) {
yr2643_NArgs(F.p2695, INT64_C(1));
F.p2697 = yr2650_Call1(y_str("y_raise_termination", 19), yr2681_IntArg(yr2636_Arg(F.p2695, INT64_C(1))));
(*F.p2697_o) = F.p2697;
(*F.p2698_o) = F.p2698;
return;
}
if ((F.p2694 == v1989)) {
yr2643_NArgs(F.p2695, INT64_C(1));
yr2687_CodeInsert(F.p2695);
(*F.p2697_o) = F.p2697;
(*F.p2698_o) = F.p2698;
return;
}
if ((((F.p2694 == v1992)) || ((F.p2694 == v1995)))) {
yr2643_NArgs(F.p2695, INT64_C(1));
yr2091_Expr(yr2636_Arg(F.p2695, INT64_C(1)), ((void *)0), &F.v6134, &F.v6144);
F.p2698 = yr2135_Unbounded(v1683);
if ((F.p2694 == v1992)) {
F.p2697 = yr2437_Join(yr1021_T(y_str("((rt_int)(intptr_t)&(", 21)), F.v6134, yr1021_T(y_str("))", 2)));
} else {
F.p2697 = yr2437_Join(yr1021_T(y_str("((rt_int)sizeof(", 16)), F.v6134, yr1021_T(y_str("))", 2)));
}
(*F.p2697_o) = F.p2697;
(*F.p2698_o) = F.p2698;
return;
}
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2695))).f_line, ((*(yR95 *)rt_nil_check(F.p2695))).f_name, y_str(" is not translated", 18));
(*F.p2697_o) = F.p2697;
(*F.p2698_o) = F.p2698;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2707_StdRep(yarr a_p2709, void * a_p2710) {
struct yf2711 F;
memset((void *)&F, 0, sizeof F);
F.p2709 = a_p2709;
F.p2710 = a_p2710;
F.v6350 = yr1588_NewSym(v840, yr1041_N(F.p2709));
((*(yR115 *)rt_nil_check(F.v6350))).f_rep = F.p2710;
yr1644_Define(F.v6350, INT64_C(0));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2715_StdOp(yarr a_p2717, rt_int a_p2718) {
struct yf2719 F;
memset((void *)&F, 0, sizeof F);
F.p2717 = a_p2717;
F.p2718 = a_p2718;
F.v6356 = yr1588_NewSym(v861, yr1041_N(F.p2717));
((*(yR115 *)rt_nil_check(F.v6356))).f_mval = F.p2718;
yr1644_Define(F.v6356, INT64_C(0));
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2723_LitList(yarr a_p2725, yarr a_p2726, yarr a_p2727, rt_int a_p2728) {
struct yf2729 F;
memset((void *)&F, 0, sizeof F);
F.p2725 = a_p2725;
F.p2726 = a_p2726;
F.p2727 = a_p2727;
F.p2728 = a_p2728;
F.v6364 = ((void *)0);
F.v6366 = ((void *)0);
F.v6368 = ((void *)0);
F.v6368 = yr1245_NewNode(v639, INT64_C(0));
((*(yR95 *)rt_nil_check(F.v6368))).f_name = yr1041_N(F.p2725);
yr1252_Link(&F.v6364, &F.v6366, F.v6368);
F.v6368 = yr1245_NewNode(v639, INT64_C(0));
((*(yR95 *)rt_nil_check(F.v6368))).f_name = yr1041_N(F.p2726);
yr1252_Link(&F.v6364, &F.v6366, F.v6368);
if (F.p2728) {
F.v6368 = yr1245_NewNode(v639, INT64_C(0));
((*(yR95 *)rt_nil_check(F.v6368))).f_name = yr1041_N(F.p2727);
yr1252_Link(&F.v6364, &F.v6366, F.v6368);
}
{ void * rv6372 = F.v6364;
return rv6372; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2733_Abstract(rt_int a_p2734, yarr a_p2736) {
struct yf2737 F;
memset((void *)&F, 0, sizeof F);
F.p2734 = a_p2734;
F.p2736 = a_p2736;
F.v6377 = yr1707_NewRep(F.p2734, yr1041_N(F.p2736));
((*(yR100 *)rt_nil_check(F.v6377))).f_abstract = 1;
{ void * rv6379 = F.v6377;
return rv6379; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2741_Predefine(void) {
struct yf2742 F;
memset((void *)&F, 0, sizeof F);
yr1595_OpenScope(0);
((void * *)(v2531).p)[y_ix1(v2531, v1570)] = ((void *)0);
v1683 = yr2733_Abstract(v774, y_str("INTEGER", 7));
v1697 = yr2733_Abstract(v777, y_str("FIXED", 5));
v1695 = yr2733_Abstract(v780, y_str("FLOATING", 8));
v1699 = yr1707_NewRep(v807, yr1041_N(y_str("SIGNAL", 6)));
v1701 = yr1707_NewRep(v810, yr1041_N(y_str("SEMAPHORE", 9)));
v1689 = yr1707_NewRep(v822, yr1041_N(y_str("no value", 8)));
v1703 = yr1707_NewRep(v828, yr1041_N(y_str("any", 3)));
v1685 = yr1707_NewRep(v783, yr1041_N(y_str("BOOLEAN", 7)));
((*(yR100 *)rt_nil_check(v1685))).f_lits = yr2723_LitList(y_str("FALSE", 5), y_str("TRUE", 4), y_str("", 0), 0);
((*(yR100 *)rt_nil_check(v1685))).f_nlits = INT64_C(2);
yr1811_SetRange(v1685, INT64_C(0), INT64_C(1));
yr1805_DefineLits(v1685);
v1687 = yr1707_NewRep(v789, yr1041_N(y_str("ASCII", 5)));
((*(yR100 *)rt_nil_check(v1687))).f_ordered = 1;
((*(yR100 *)rt_nil_check(v1687))).f_nlits = INT64_C(128);
yr1811_SetRange(v1687, INT64_C(0), INT64_C(127));
v2703 = yr1707_NewRep(v786, yr1041_N(y_str("OPEN_MODE", 9)));
((*(yR100 *)rt_nil_check(v2703))).f_lits = yr2723_LitList(y_str("READ", 4), y_str("WRITE", 5), y_str("APPEND", 6), 1);
((*(yR100 *)rt_nil_check(v2703))).f_nlits = INT64_C(3);
yr1811_SetRange(v2703, INT64_C(0), INT64_C(2));
yr1805_DefineLits(v2703);
yr2707_StdRep(y_str("INTEGER", 7), v1683);
yr2707_StdRep(y_str("FIXED", 5), v1697);
yr2707_StdRep(y_str("FLOATING", 8), v1695);
yr2707_StdRep(y_str("BOOLEAN", 7), v1685);
yr2707_StdRep(y_str("SIGNAL", 6), v1699);
yr2707_StdRep(y_str("SEMAPHORE", 9), v1701);
yr2707_StdRep(y_str("ASCII", 5), v1687);
yr2707_StdRep(y_str("STANDARD_ALPHABET", 17), v1687);
yr2707_StdRep(y_str("OPEN_MODE", 9), v2703);
yr2715_StdOp(y_str("LOW", 3), v1890);
yr2715_StdOp(y_str("HIGH", 4), v1893);
yr2715_StdOp(y_str("SUCC", 4), v1896);
yr2715_StdOp(y_str("PRED", 4), v1899);
yr2715_StdOp(y_str("FIRST", 5), v1902);
yr2715_StdOp(y_str("LAST", 4), v1905);
yr2715_StdOp(y_str("NEW", 3), v1908);
yr2715_StdOp(y_str("OPEN", 4), v1911);
yr2715_StdOp(y_str("CLOSE", 5), v1914);
yr2715_StdOp(y_str("GET", 3), v1917);
yr2715_StdOp(y_str("PUT", 3), v1920);
yr2715_StdOp(y_str("CHECK_EOF", 9), v1923);
yr2715_StdOp(y_str("MOVE", 4), v1926);
yr2715_StdOp(y_str("AND_LONG", 8), v1929);
yr2715_StdOp(y_str("OR_LONG", 7), v1932);
yr2715_StdOp(y_str("DELAY", 5), v1935);
yr2715_StdOp(y_str("CLOCK_TIME", 10), v1938);
yr2715_StdOp(y_str("WAIT", 4), v1941);
yr2715_StdOp(y_str("SEND", 4), v1944);
yr2715_StdOp(y_str("AWAITED", 7), v1947);
yr2715_StdOp(y_str("FLOOR", 5), v1950);
yr2715_StdOp(y_str("CEILING", 7), v1953);
yr2715_StdOp(y_str("NEAR_INTEGER", 12), v1956);
yr2715_StdOp(y_str("NEAR_FIXED", 10), v1959);
yr2715_StdOp(y_str("NEAR_FLOATING", 13), v1962);
yr2715_StdOp(y_str("FIXED_DIV", 9), v1965);
yr2715_StdOp(y_str("CLAIM", 5), v1968);
yr2715_StdOp(y_str("RELEASE", 7), v1971);
yr2715_StdOp(y_str("CONDITIONAL_CLAIM", 17), v1974);
yr2715_StdOp(y_str("PROCESS_IDENTITY", 16), v1977);
yr2715_StdOp(y_str("CHANGE_PRIORITY", 15), v1980);
yr2715_StdOp(y_str("RAISE_PROCESS_TERMINATION", 25), v1983);
yr2715_StdOp(y_str("FREE_POINTER", 12), v1986);
yr2715_StdOp(y_str("C_CODE_INSERT", 13), v1989);
yr2715_StdOp(y_str("ADDR", 4), v1992);
yr2715_StdOp(y_str("EXTENT", 6), v1995);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2746_Translate(void) {
struct yf2747 F;
memset((void *)&F, 0, sizeof F);
F.v6457 = v2705;
yr1595_OpenScope(0);
((void * *)(v2531).p)[y_ix1(v2531, v1570)] = ((void *)0);
v1576 = INT64_C(0);
while ((!(F.v6457 == ((void *)0)))) {
yr2563_CompileModule(F.v6457);
F.v6457 = ((*(yR95 *)rt_nil_check(F.v6457))).f_next;
}
yr2587_AwaitProcesses();
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2751_WriteProgram(void) {
struct yf2752 F;
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
yr963_InitChars();
yr1177_InitWords();
v1239 = yr1041_N(y_str("FROM", 4));
v1242 = yr1041_N(y_str("DIMENSION", 9));
v1998 = yr1021_T(y_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP DEL SQ DQ ", 128));
y_open(&v881, y_str("OUTPUT", 6), 1);
yr1182_ReadSource();
yr1229_Lex();
v2705 = yr1554_ParseProgram();
yr2741_Predefine();
yr2746_Translate();
yr2751_WriteProgram();
y_close(&v881);
}
int main(int argc, char **argv) {
y_lang();
rt_init(argc, argv);
y_elaborate();
rt_main_done();
return 0;
}
