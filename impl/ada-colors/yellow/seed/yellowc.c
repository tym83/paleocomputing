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
struct yf1770;
struct yf1777;
struct yf1785;
struct yf1793;
struct yf1800;
struct yf1806;
struct yf1814;
struct yf1820;
struct yf1826;
struct yf1833;
struct yf1839;
struct yf1847;
struct yf1853;
struct yf1861;
struct yf1868;
struct yf1873;
struct yf1879;
struct yf1892;
struct yf1903;
struct yf1911;
struct yf1918;
struct yf2038;
struct yf2045;
struct yf2053;
struct yf2062;
struct yf2070;
struct yf2078;
struct yf2088;
struct yf2094;
struct yf2100;
struct yf2108;
struct yf2114;
struct yf2121;
struct yf2127;
struct yf2136;
struct yf2144;
struct yf2153;
struct yf2161;
struct yf2171;
struct yf2177;
struct yf2186;
struct yf2195;
struct yf2204;
struct yf2210;
struct yf2219;
struct yf2256;
struct yf2264;
struct yf2270;
struct yf2279;
struct yf2288;
struct yf2299;
struct yf2309;
struct yf2318;
struct yf2326;
struct yf2413;
struct yf2423;
struct yf2429;
struct yf2434;
struct yf2440;
struct yf2446;
struct yf2452;
struct yf2458;
struct yf2465;
struct yf2470;
struct yf2476;
struct yf2482;
struct yf2490;
struct yf2496;
struct yf2502;
struct yf2508;
struct yf2514;
struct yf2520;
struct yf2526;
struct yf2532;
struct yf2538;
struct yf2545;
struct yf2552;
struct yf2558;
struct yf2566;
struct yf2572;
struct yf2579;
struct yf2586;
struct yf2592;
struct yf2610;
struct yf2618;
struct yf2629;
struct yf2636;
struct yf2642;
struct yf2648;
struct yf2654;
struct yf2660;
struct yf2665;
struct yf2672;
struct yf2678;
struct yf2684;
struct yf2689;
struct yf2695;
struct yf2702;
struct yf2709;
struct yf2716;
struct yf2723;
struct yf2730;
struct yf2738;
struct yf2744;
struct yf2753;
struct yf2761;
struct yf2767;
struct yf2773;
struct yf2783;
struct yf2795;
struct yf2803;
struct yf2813;
struct yf2821;
struct yf2826;
struct yf2831;
struct yf2836;
struct yR95 { rt_int f_kind; rt_int f_line; rt_int f_ival; rt_int f_flag; rt_int f_name; rt_int f_text; void * f_a; void * f_b; void * f_c; void * f_d; void * f_e; void * f_next; void * f_rep; void * f_sym; };
struct yR100 { rt_int f_kind; rt_int f_tid; rt_int f_tname; rt_int f_lo; rt_int f_hi; rt_int f_mlo; rt_int f_mhi; rt_int f_hasm; rt_int f_scale; rt_int f_prec; void * f_elem; void * f_idx; rt_int f_nidx; void * f_link; void * f_lits; rt_int f_nlits; void * f_fields; void * f_selector; rt_int f_cname; rt_int f_dname; rt_int f_dlevel; rt_int f_deep; rt_int f_abstract; rt_int f_opaque; rt_int f_opaqueops; rt_int f_ordered; rt_int f_forward; rt_int f_fwdscope; void * f_monitor; rt_int f_serial; };
struct yR105 { rt_int f_name; void * f_rep; rt_int f_isconst; rt_int f_variant; void * f_labels; void * f_next; };
struct yR110 { rt_int f_name; rt_int f_cls; void * f_rep; rt_int f_cname; void * f_next; };
struct yR115 { rt_int f_kind; rt_int f_name; void * f_rep; rt_int f_cname; rt_int f_level; rt_int f_byref; rt_int f_readonly; rt_int f_mval; rt_int f_hasmv; void * f_params; rt_int f_nparams; void * f_ret; rt_int f_func; void * f_decl; rt_int f_depth; void * f_target; void * f_members; void * f_mnext; void * f_chain; void * f_stack; void * f_alt; void * f_monitor; rt_int f_serial; };
struct yR120 { void * f_syms; rt_int f_closed; void * f_module; rt_int f_level; void * f_deferred; void * f_up; };
struct yR125 { rt_int f_t; void * f_next; };
struct yR130 { void * f_head; void * f_tail; };
struct yf964 { void *up;
rt_int v2840;
rt_int c_2843;
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
rt_int lo2879;
rt_int hi2880;
rt_int c_2882;
};
struct yf1006 { void *up;
rt_int p1005;
rt_int v2888;
};
struct yf1012 { void *up;
rt_int p1011;
ydesc yd_2901;
yarr v2903;
rt_int v2905;
rt_int v2908;
};
struct yf1017 { void *up;
rt_int v2927;
rt_int lo2938;
rt_int hi2939;
rt_int c_2941;
};
struct yf1024 { void *up;
yarr p1023;
};
struct yf1031 { void *up;
rt_int p1029;
rt_int p1030;
rt_int v2952;
rt_int v2955;
rt_int v2957;
rt_int lo2962;
rt_int hi2963;
rt_int c_2965;
rt_int lo2983;
rt_int hi2984;
rt_int c_2986;
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
rt_int lo3014;
rt_int hi3015;
rt_int c_3017;
};
struct yf1059 { void *up;
rt_int p1056;
yarr p1058;
rt_int v3030;
rt_int lo3046;
rt_int hi3047;
rt_int c_3049;
};
struct yf1066 { void *up;
rt_int p1064;
rt_int p1065;
};
struct yf1073 { void *up;
yR130 * p1071;
rt_int p1072;
void * v3070;
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
rt_int v3084;
};
struct yf1113 { void *up;
yR130 p1112;
void * v3091;
};
struct yf1120 { void *up;
rt_int p1118;
rt_int p1119;
rt_int v3097;
};
struct yf1128 { void *up;
rt_int p1125;
yarr p1127;
};
struct yf1137 { void *up;
rt_int p1133;
rt_int p1134;
yarr p1136;
rt_int v3111;
};
struct yf1142 { void *up;
};
struct yf1149 { void *up;
yarr p1148;
rt_int v3119;
};
struct yf1178 { void *up;
rt_int v3123;
rt_int v3125;
rt_int v3127;
rt_int lo3144;
rt_int hi3145;
rt_int c_3147;
};
struct yf1183 { void *up;
unsigned char v3156;
};
struct yf1190 { void *up;
rt_int p1188;
rt_int p1189;
};
struct yf1196 { void *up;
rt_int p1195;
};
struct yf1201 { void *up;
rt_int v3173;
rt_int v3175;
};
struct yf1207 { void *up;
unsigned char p1206;
};
struct yf1214 { void *up;
yarr p1213;
};
struct yf1220 { void *up;
rt_int p1219;
rt_int v3204;
rt_int v3207;
rt_int v3209;
rt_int v3211;
rt_int v3213;
rt_int v3215;
rt_int v3218;
rt_int v3221;
rt_int v3224;
rt_int v3227;
rt_int v3230;
rt_int v3233;
rt_int lo3270;
rt_int hi3271;
rt_int c_3273;
rt_int lo3282;
rt_int hi3283;
rt_int c_3285;
rt_int lo3312;
rt_int hi3313;
rt_int c_3315;
rt_int lo3322;
rt_int hi3323;
rt_int c_3325;
};
struct yf1225 { void *up;
rt_int v3336;
rt_int v3338;
rt_int v3340;
rt_int v3342;
};
struct yf1230 { void *up;
unsigned char v3371;
rt_int v3373;
rt_int v3375;
rt_int v3377;
rt_int v3379;
rt_int v3381;
rt_int v3383;
rt_int v3385;
rt_int lo3457;
rt_int hi3458;
rt_int c_3460;
};
struct yf1248 { void *up;
rt_int p1246;
rt_int p1247;
void * v3476;
};
struct yf1256 { void *up;
void * * p1253;
void * * p1254;
void * p1255;
};
struct yf1262 { void *up;
void * p1261;
rt_int v3489;
void * v3492;
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
rt_int v3506;
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
rt_int v3529;
};
struct yf1318 { void *up;
rt_int p1317;
rt_int v3539;
};
struct yf1323 { void *up;
rt_int v3544;
};
struct yf1330 { void *up;
rt_int p1328;
rt_int p1329;
rt_int v3551;
};
struct yf1335 { void *up;
rt_int v3555;
};
struct yf1341 { void *up;
rt_int p1340;
void * v3565;
};
struct yf1346 { void *up;
void * v3572;
};
struct yf1351 { void *up;
void * v3577;
void * v3579;
void * v3581;
void * v3583;
rt_int v3585;
};
struct yf1356 { void *up;
rt_int v3594;
};
struct yf1361 { void *up;
void * v3600;
void * v3602;
void * v3604;
void * v3606;
};
struct yf1366 { void *up;
void * v3611;
void * v3613;
void * v3615;
void * v3617;
void * v3619;
};
struct yf1371 { void *up;
void * v3627;
void * v3629;
void * v3631;
};
struct yf1377 { void *up;
rt_int p1376;
void * v3637;
};
struct yf1383 { void *up;
rt_int p1382;
};
struct yf1390 { void *up;
void * * p1388;
void * * p1389;
rt_int v3658;
void * v3660;
void * v3662;
void * v3664;
};
struct yf1395 { void *up;
void * v3668;
void * v3670;
void * v3672;
rt_int v3674;
rt_int v3676;
rt_int v3678;
};
struct yf1401 { void *up;
void * p1400;
void * v3694;
void * v3696;
rt_int v3698;
};
struct yf1406 { void *up;
void * v3704;
};
struct yf1412 { void *up;
rt_int p1411;
rt_int v3716;
};
struct yf1417 { void *up;
rt_int v3724;
void * v3726;
};
struct yf1422 { void *up;
void * v3735;
void * v3737;
};
struct yf1427 { void *up;
void * v3741;
void * v3743;
void * v3745;
};
struct yf1432 { void *up;
void * v3750;
void * v3752;
void * v3754;
rt_int v3756;
};
struct yf1437 { void *up;
void * v3763;
void * v3765;
void * v3767;
void * v3769;
void * v3771;
void * v3773;
rt_int v3775;
rt_int v3777;
};
struct yf1442 { void *up;
void * v3794;
};
struct yf1447 { void *up;
rt_int v3799;
};
struct yf1453 { void *up;
rt_int p1452;
void * v3808;
void * v3810;
void * v3812;
rt_int v3814;
};
struct yf1458 { void *up;
void * v3822;
void * v3824;
void * v3826;
void * v3828;
void * v3830;
void * v3832;
rt_int v3834;
rt_int v3836;
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
void * v3890;
};
struct yf1509 { void *up;
rt_int p1507;
rt_int p1508;
rt_int v3896;
};
struct yf1514 { void *up;
void * v3900;
rt_int v3902;
rt_int v3904;
};
struct yf1519 { void *up;
void * v3908;
void * v3910;
rt_int v3912;
rt_int v3914;
};
struct yf1524 { void *up;
void * v3920;
rt_int v3922;
rt_int v3924;
};
struct yf1530 { void *up;
rt_int p1529;
rt_int v3930;
};
struct yf1535 { void *up;
void * v3935;
rt_int v3937;
rt_int v3939;
};
struct yf1540 { void *up;
void * v3943;
rt_int v3945;
rt_int v3947;
};
struct yf1545 { void *up;
void * v3968;
void * v3970;
void * v3972;
rt_int v3974;
};
struct yf1550 { void *up;
};
struct yf1555 { void *up;
void * v3981;
void * v3983;
};
struct yf1591 { void *up;
rt_int p1589;
rt_int p1590;
void * v3990;
};
struct yf1597 { void *up;
rt_int p1596;
void * v4005;
};
struct yf1602 { void *up;
void * v4011;
void * v4013;
void * v4015;
rt_int v4017;
};
struct yf1608 { void *up;
void * p1607;
};
struct yf1614 { void *up;
rt_int p1613;
void * v4029;
};
struct yf1620 { void *up;
rt_int p1619;
void * v4037;
};
struct yf1627 { void *up;
rt_int p1625;
rt_int p1626;
void * v4046;
void * v4048;
};
struct yf1633 { void *up;
void * p1632;
void * v4055;
};
struct yf1640 { void *up;
rt_int p1638;
void * p1639;
void * v4064;
};
struct yf1647 { void *up;
void * p1645;
rt_int p1646;
void * v4073;
rt_int v4075;
};
struct yf1654 { void *up;
rt_int p1652;
rt_int p1653;
rt_int v4083;
};
struct yf1660 { void *up;
rt_int p1659;
rt_int v4098;
};
struct yf1667 { void *up;
rt_int p1665;
rt_int p1666;
rt_int v4113;
};
struct yf1673 { void *up;
void * p1672;
rt_int v4122;
};
struct yf1679 { void *up;
void * p1678;
void * v4130;
};
struct yf1710 { void *up;
rt_int p1708;
rt_int p1709;
void * v4136;
};
struct yf1716 { void *up;
void * p1715;
void * v4161;
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
};
struct yf1758 { void *up;
void * p1757;
rt_int v4197;
};
struct yf1764 { void *up;
void * p1763;
rt_int v4222;
};
struct yf1770 { void *up;
void * p1769;
};
struct yf1777 { void *up;
void * p1775;
void * p1776;
};
struct yf1785 { void *up;
rt_int p1782;
void * p1783;
void * p1784;
rt_int v4267;
};
struct yf1793 { void *up;
rt_int p1790;
void * p1791;
void * p1792;
};
struct yf1800 { void *up;
void * p1798;
rt_int p1799;
};
struct yf1806 { void *up;
void * p1805;
};
struct yf1814 { void *up;
void * p1811;
yarr p1813;
rt_int v4289;
rt_int v4291;
};
struct yf1820 { void *up;
void * p1819;
};
struct yf1826 { void *up;
void * p1825;
};
struct yf1833 { void *up;
void * p1831;
void * p1832;
rt_int v4316;
rt_int v4318;
void * v4320;
void * v4322;
rt_int v4324;
rt_int v4326;
};
struct yf1839 { void *up;
void * p1838;
void * v4341;
void * v4343;
rt_int v4345;
};
struct yf1847 { void *up;
void * p1844;
rt_int p1845;
rt_int p1846;
};
struct yf1853 { void *up;
rt_int p1852;
rt_int v4360;
};
struct yf1861 { void *up;
void * p1858;
rt_int p1859;
rt_int p1860;
void * v4370;
void * v4372;
void * v4374;
void * v4376;
void * v4378;
rt_int v4380;
void * v4382;
rt_int v4384;
rt_int v4386;
};
struct yf1868 { void *up;
rt_int p1866;
void * p1867;
void * v4433;
void * v4435;
};
struct yf1873 { void *up;
void * v4439;
};
struct yf1879 { void *up;
void * p1878;
void * v4444;
rt_int v4446;
rt_int v4448;
};
struct yf1892 { void *up;
void * p1884;
void * * p1885;
rt_int p1886;
void * p1887;
rt_int p1888;
rt_int p1889;
void * p1890;
rt_int p1891;
void * v4473;
};
struct yf1903 { void *up;
void * p1897;
void * * p1898;
void * p1899;
rt_int p1900;
void * p1901;
rt_int p1902;
void * v4485;
void * v4487;
void * v4489;
};
struct yf1911 { void *up;
void * p1908;
void * p1909;
rt_int p1910;
void * v4497;
void * v4499;
void * v4501;
void * v4503;
rt_int v4505;
void * v4508;
rt_int v4510;
rt_int v4512;
};
struct yf1918 { void *up;
void * p1916;
rt_int p1917;
void * v4559;
};
struct yf2038 { void *up;
void * p2036;
rt_int p2037;
void * v4566;
rt_int v4568;
rt_int v4570;
rt_int v4572;
rt_int v4574;
rt_int lo4582;
rt_int hi4583;
rt_int c_4585;
};
struct yf2045 { void *up;
void * p2043;
void * p2044;
void * v4624;
void * v4626;
void * v4628;
rt_int v4630;
rt_int v4633;
};
struct yf2053 { void *up;
void * p2050;
rt_int p2051;
rt_int p2052;
rt_int v4658;
rt_int v4660;
};
struct yf2062 { void *up;
void * p2058;
rt_int p2059;
rt_int p2060;
rt_int * p2060_o;
rt_int p2061;
rt_int v4671;
rt_int v4673;
rt_int v4675;
ydesc yd_4682;
yarr v4684;
unsigned char v4686;
rt_int v4688;
rt_int lo4716;
rt_int hi4717;
rt_int c_4719;
};
struct yf2070 { void *up;
void * p2067;
rt_int p2068;
rt_int * p2068_o;
rt_int p2069;
rt_int * p2069_o;
void * v4754;
rt_int v4756;
rt_int v4758;
rt_int v4760;
rt_int v4762;
rt_int v4764;
void * v4766;
};
struct yf2078 { void *up;
rt_int p2075;
void * p2076;
void * p2077;
};
struct yf2088 { void *up;
rt_int p2083;
void * p2084;
rt_int p2085;
void * p2086;
rt_int p2087;
rt_int v4814;
rt_int v4816;
};
struct yf2094 { void *up;
void * p2093;
void * v4830;
void * v4832;
};
struct yf2100 { void *up;
void * p2099;
void * v4851;
void * v4853;
};
struct yf2108 { void *up;
void * p2105;
rt_int p2106;
rt_int * p2106_o;
void * p2107;
void * * p2107_o;
};
struct yf2114 { void *up;
rt_int p2113;
};
struct yf2121 { void *up;
void * p2119;
rt_int p2120;
void * v4871;
};
struct yf2127 { void *up;
void * p2126;
void * v4876;
};
struct yf2136 { void *up;
void * p2132;
void * p2133;
rt_int p2134;
rt_int * p2134_o;
void * p2135;
void * * p2135_o;
rt_int v4885;
void * v4887;
rt_int v4889;
rt_int v4891;
void * v4893;
void * v4895;
void * v4897;
rt_int v4899;
rt_int v4901;
};
struct yf2144 { void *up;
void * p2141;
void * p2142;
rt_int p2143;
void * v4943;
rt_int v4945;
rt_int v4947;
};
struct yf2153 { void *up;
void * p2149;
void * p2150;
rt_int p2151;
rt_int * p2151_o;
void * p2152;
void * * p2152_o;
void * v4959;
};
struct yf2161 { void *up;
void * p2158;
rt_int p2159;
rt_int * p2159_o;
void * p2160;
void * * p2160_o;
rt_int v4968;
rt_int v4970;
rt_int v4972;
void * v4974;
void * v4976;
void * v4978;
void * v4980;
rt_int v4982;
rt_int v4984;
};
struct yf2171 { void *up;
void * p2166;
rt_int p2167;
void * p2168;
rt_int p2169;
rt_int * p2169_o;
void * p2170;
void * * p2170_o;
};
struct yf2177 { void *up;
void * p2176;
void * v5019;
};
struct yf2186 { void *up;
yarr p2183;
rt_int p2184;
rt_int p2185;
};
struct yf2195 { void *up;
rt_int p2191;
yarr p2193;
rt_int p2194;
};
struct yf2204 { void *up;
rt_int p2200;
void * p2201;
rt_int p2202;
void * p2203;
rt_int v5047;
rt_int v5049;
void * v5051;
};
struct yf2210 { void *up;
void * p2209;
};
struct yf2219 { void *up;
void * p2215;
void * p2216;
rt_int p2217;
rt_int * p2217_o;
void * p2218;
void * * p2218_o;
rt_int v5081;
rt_int v5083;
rt_int v5085;
rt_int v5087;
void * v5089;
void * v5091;
void * v5093;
rt_int v5095;
};
struct yf2256 { void *up;
void * p2254;
void * p2255;
};
struct yf2264 { void *up;
void * p2261;
rt_int p2262;
rt_int p2263;
void * v5150;
void * v5152;
rt_int v5154;
rt_int v5156;
};
struct yf2270 { void *up;
void * p2269;
void * v5168;
};
struct yf2279 { void *up;
void * p2275;
void * p2276;
rt_int p2277;
rt_int * p2277_o;
rt_int p2278;
rt_int * p2278_o;
void * v5180;
void * v5182;
void * v5184;
};
struct yf2288 { void *up;
void * p2284;
rt_int p2285;
rt_int p2286;
rt_int p2287;
void * v5200;
rt_int v5202;
rt_int v5206;
};
struct yf2299 { void *up;
void * p2293;
rt_int p2294;
void * p2295;
void * p2296;
rt_int p2297;
rt_int * p2297_o;
void * p2298;
void * * p2298_o;
void * v5232;
void * v5234;
rt_int v5236;
rt_int v5238;
};
struct yf2309 { void *up;
void * p2304;
void * p2305;
rt_int p2306;
rt_int p2307;
rt_int * p2307_o;
void * p2308;
void * * p2308_o;
void * v5255;
void * v5257;
rt_int v5259;
rt_int v5261;
};
struct yf2318 { void *up;
void * p2314;
void * p2315;
rt_int p2316;
rt_int * p2316_o;
void * p2317;
void * * p2317_o;
void * v5273;
void * v5275;
rt_int v5277;
rt_int v5279;
rt_int v5281;
void * v5283;
rt_int v5285;
rt_int v5287;
rt_int v5289;
rt_int v5291;
rt_int v5293;
rt_int v5296;
void * v5298;
rt_int v5300;
};
struct yf2326 { void *up;
void * p2323;
rt_int p2324;
rt_int p2325;
void * v5362;
void * v5364;
rt_int v5366;
rt_int v5368;
};
struct yf2413 { void *up;
yarr p2411;
rt_int p2412;
rt_int v5377;
};
struct yf2423 { void *up;
yarr p2419;
rt_int p2420;
yarr p2422;
rt_int v5383;
};
struct yf2429 { void *up;
rt_int p2428;
};
struct yf2434 { void *up;
};
struct yf2440 { void *up;
rt_int p2439;
};
struct yf2446 { void *up;
void * p2445;
rt_int v5405;
rt_int v5407;
rt_int v5409;
void * v5411;
void * v5413;
rt_int v5415;
void * v5417;
rt_int v5419;
};
struct yf2452 { void *up;
void * p2451;
void * v5481;
};
struct yf2458 { void *up;
void * p2457;
rt_int v5485;
void * v5487;
};
struct yf2465 { void *up;
void * p2463;
void * p2464;
rt_int v5493;
rt_int v5495;
void * v5497;
void * v5499;
rt_int v5501;
};
struct yf2470 { void *up;
void * v5507;
rt_int v5509;
};
struct yf2476 { void *up;
void * p2475;
rt_int v5516;
rt_int v5518;
rt_int v5520;
rt_int v5522;
rt_int v5524;
rt_int v5526;
rt_int v5528;
void * v5530;
void * v5532;
void * v5534;
void * v5536;
rt_int v5538;
rt_int v5540;
rt_int v5542;
rt_int v5544;
void * v5546;
};
struct yf2482 { void *up;
void * p2481;
void * v5608;
rt_int v5610;
rt_int v5612;
rt_int v5614;
void * v5616;
};
struct yf2490 { void *up;
rt_int p2487;
rt_int p2488;
rt_int p2489;
};
struct yf2496 { void *up;
void * p2495;
rt_int v5648;
rt_int v5650;
rt_int v5652;
void * v5654;
void * v5656;
};
struct yf2502 { void *up;
void * p2501;
};
struct yf2508 { void *up;
void * p2507;
void * v5677;
};
struct yf2514 { void *up;
void * p2513;
void * v5692;
};
struct yf2520 { void *up;
void * p2519;
void * v5701;
void * v5703;
void * v5705;
};
struct yf2526 { void *up;
rt_int p2525;
rt_int v5710;
rt_int v5712;
rt_int lo5716;
rt_int hi5717;
rt_int c_5719;
};
struct yf2532 { void *up;
void * p2531;
void * v5729;
rt_int v5731;
rt_int v5733;
};
struct yf2538 { void *up;
void * p2537;
rt_int v5750;
};
struct yf2545 { void *up;
void * p2543;
rt_int p2544;
void * v5758;
void * v5760;
void * v5762;
void * v5764;
void * v5766;
void * v5768;
void * v5770;
rt_int v5772;
rt_int v5774;
};
struct yf2552 { void *up;
void * p2550;
void * p2551;
void * v5817;
void * v5819;
void * v5821;
rt_int v5823;
};
struct yf2558 { void *up;
void * p2557;
void * v5831;
yR130 v5833;
yR130 v5835;
rt_int v5837;
rt_int v5839;
rt_int v5841;
rt_int v5843;
rt_int v5845;
rt_int v5847;
rt_int v5849;
void * v5851;
rt_int v5853;
void * v5855;
void * v5857;
rt_int v5859;
rt_int v5861;
yR130 v5863;
};
struct yf2566 { void *up;
void * p2563;
void * p2564;
rt_int p2565;
};
struct yf2572 { void *up;
void * p2571;
rt_int v5926;
void * v5928;
void * v5930;
void * v5932;
void * v5934;
rt_int v5936;
rt_int v5938;
rt_int v5940;
};
struct yf2579 { void *up;
void * p2577;
void * p2578;
void * v5954;
};
struct yf2586 { void *up;
void * p2584;
void * p2585;
};
struct yf2592 { void *up;
void * p2591;
void * v5961;
void * v5963;
void * v5965;
void * v5967;
};
struct yf2610 { void *up;
rt_int p2608;
void * p2609;
void * v5972;
};
struct yf2618 { void *up;
void * * p2615;
void * p2616;
rt_int p2617;
void * v5979;
void * v5981;
void * v5983;
};
struct yf2629 { void *up;
void * p2626;
void * * p2627;
rt_int p2628;
void * v5994;
void * v5996;
void * v5998;
rt_int v6000;
void * v6002;
rt_int v6004;
};
struct yf2636 { void *up;
void * p2634;
rt_int p2635;
void * v6029;
void * v6031;
void * v6033;
};
struct yf2642 { void *up;
void * p2641;
void * v6038;
void * v6040;
void * v6042;
void * v6044;
void * v6046;
void * v6048;
void * v6050;
void * v6052;
void * v6054;
void * v6056;
rt_int v6058;
rt_int v6060;
rt_int v6062;
};
struct yf2648 { void *up;
void * p2647;
void * v6095;
};
struct yf2654 { void *up;
void * p2653;
void * v6099;
void * v6101;
void * v6103;
void * v6105;
rt_int v6107;
rt_int v6109;
rt_int v6111;
rt_int v6113;
void * v6115;
rt_int lo6123;
rt_int hi6124;
rt_int c_6126;
};
struct yf2660 { void *up;
void * p2659;
void * v6138;
void * v6140;
};
struct yf2665 { void *up;
void * v6146;
};
struct yf2672 { void *up;
void * p2670;
void * p2671;
rt_int v6157;
rt_int v6159;
rt_int v6161;
void * v6163;
rt_int v6165;
rt_int v6167;
rt_int v6169;
rt_int v6171;
rt_int v6173;
rt_int v6175;
void * v6177;
void * v6179;
};
struct yf2678 { void *up;
void * p2677;
};
struct yf2684 { void *up;
void * p2683;
rt_int v6239;
};
struct yf2689 { void *up;
};
struct yf2695 { void *up;
void * p2694;
};
struct yf2702 { void *up;
void * p2700;
rt_int p2701;
};
struct yf2709 { void *up;
void * p2707;
rt_int p2708;
rt_int v6274;
};
struct yf2716 { void *up;
void * p2714;
void * p2715;
rt_int v6286;
rt_int v6288;
rt_int v6290;
};
struct yf2723 { void *up;
void * p2721;
rt_int p2722;
void * v6299;
rt_int v6301;
};
struct yf2730 { void *up;
void * p2728;
rt_int p2729;
};
struct yf2738 { void *up;
yarr p2736;
rt_int p2737;
};
struct yf2744 { void *up;
rt_int p2743;
};
struct yf2753 { void *up;
void * p2749;
rt_int p2750;
rt_int p2751;
rt_int * p2751_o;
void * p2752;
void * * p2752_o;
rt_int v6328;
};
struct yf2761 { void *up;
void * p2758;
rt_int p2759;
rt_int * p2759_o;
void * p2760;
void * * p2760_o;
};
struct yf2767 { void *up;
void * p2766;
rt_int v6344;
void * v6346;
};
struct yf2773 { void *up;
void * p2772;
void * v6352;
rt_int v6355;
rt_int v6357;
rt_int v6359;
rt_int v6361;
rt_int v6363;
rt_int v6365;
unsigned char v6367;
void * v6369;
ydesc yd_6376;
yarr v6378;
};
struct yf2783 { void *up;
rt_int p2778;
void * p2779;
rt_int p2780;
rt_int p2781;
rt_int * p2781_o;
void * p2782;
void * * p2782_o;
rt_int v6417;
rt_int v6419;
rt_int v6421;
rt_int v6423;
rt_int v6425;
void * v6427;
void * v6429;
void * v6431;
void * v6433;
rt_int v6435;
rt_int v6437;
rt_int v6439;
rt_int v6441;
void * v6443;
rt_int v6445;
rt_int lo6458;
rt_int hi6459;
rt_int c_6461;
};
struct yf2795 { void *up;
yarr p2793;
void * p2794;
void * v6635;
};
struct yf2803 { void *up;
yarr p2801;
rt_int p2802;
void * v6641;
};
struct yf2813 { void *up;
yarr p2809;
yarr p2810;
yarr p2811;
rt_int p2812;
void * v6649;
void * v6651;
void * v6653;
};
struct yf2821 { void *up;
rt_int p2818;
yarr p2820;
void * v6662;
};
struct yf2826 { void *up;
};
struct yf2831 { void *up;
void * v6742;
};
struct yf2836 { void *up;
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
static rt_int v2027;
static rt_int v2030;
static void * v2033;
static ydesc yd_2228;
static yarr v2230;
static ydesc yd_2237;
static yarr v2239;
static ydesc yd_2246;
static yarr v2248;
static rt_int v2250;
static ydesc yd_2335;
static yarr v2337;
static rt_int v2339;
static rt_int v2342;
static ydesc yd_2350;
static yarr v2352;
static ydesc yd_2359;
static yarr v2361;
static rt_int v2363;
static ydesc yd_2371;
static yarr v2373;
static rt_int v2375;
static ydesc yd_2383;
static yarr v2385;
static yarr v2387;
static ydesc yd_2394;
static yarr v2396;
static rt_int v2398;
static rt_int v2401;
static void * v2404;
static rt_int v2406;
static void * v2596;
static ydesc yd_2603;
static yarr v2605;
static rt_int v2622;
static void * v2787;
static void * v2789;
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
static rt_int yr1750_HoldsSignal(void * a_p1751);
static rt_int yr1756_CType(void * a_p1757);
static rt_int yr1762_DescOf(void * a_p1763);
static void yr1768_NewDesc(void * a_p1769);
static rt_int yr1774_SameType(void * a_p1775, void * a_p1776);
static void yr1781_TypeClash(rt_int a_p1782, void * a_p1783, void * a_p1784);
static void yr1789_CheckType(rt_int a_p1790, void * a_p1791, void * a_p1792);
static void yr1797_CheckRepresented(void * a_p1798, rt_int a_p1799);
static rt_int yr1804_IsLiteralNode(void * a_p1805);
static void yr1810_StoreBounds(void * a_p1811, yarr a_p1813);
static rt_int yr1818_LoText(void * a_p1819);
static rt_int yr1824_HiText(void * a_p1825);
static void yr1830_Qualify(void * a_p1831, void * a_p1832);
static void yr1837_DefineLits(void * a_p1838);
static void yr1843_SetRange(void * a_p1844, rt_int a_p1845, rt_int a_p1846);
static rt_int yr1851_NewTid(rt_int a_p1852);
static void * yr1857_MakeRep(void * a_p1858, rt_int a_p1859, rt_int a_p1860);
static void yr1865_ResolvePending(rt_int a_p1866, void * a_p1867);
static void yr1872_CheckPending(void);
static void yr1877_BuildArrayDesc(void * a_p1878);
static void yr1883_AddField(void * a_p1884, void * * a_p1885, rt_int a_p1886, void * a_p1887, rt_int a_p1888, rt_int a_p1889, void * a_p1890, rt_int a_p1891);
static void yr1896_AddFields(void * a_p1897, void * * a_p1898, void * a_p1899, rt_int a_p1900, void * a_p1901, rt_int a_p1902);
static void yr1907_MakeRecord(void * a_p1908, void * a_p1909, rt_int a_p1910);
static void * yr1915_FindField(void * a_p1916, rt_int a_p1917);
static rt_int yr2035_CharOrd(void * a_p2036, rt_int a_p2037);
static void * yr2042_AlphabetFor(void * a_p2043, void * a_p2044);
static rt_int yr2049_CharValue(void * a_p2050, rt_int a_p2051, rt_int a_p2052);
static rt_int yr2057_StringCodes(void * a_p2058, rt_int a_p2059, rt_int * a_p2060, rt_int a_p2061);
static void yr2066_Manifest(void * a_p2067, rt_int * a_p2068, rt_int * a_p2069);
static rt_int yr2074_Convert(rt_int a_p2075, void * a_p2076, void * a_p2077);
static void yr2082_Store(rt_int a_p2083, void * a_p2084, rt_int a_p2085, void * a_p2086, rt_int a_p2087);
static rt_int yr2092_IsVariable(void * a_p2093);
static void yr2098_CheckPure(void * a_p2099);
static void yr2104_LValue(void * a_p2105, rt_int * a_p2106, void * * a_p2107);
static rt_int yr2112_Paren(rt_int a_p2113);
static void * yr2118_Lit(void * a_p2119, rt_int a_p2120);
static void * yr2125_Qualifier(void * a_p2126);
static void yr2131_Expr(void * a_p2132, void * a_p2133, rt_int * a_p2134, void * * a_p2135);
static rt_int yr2140_VariantTest(void * a_p2141, void * a_p2142, rt_int a_p2143);
static void yr2148_NameExpr(void * a_p2149, void * a_p2150, rt_int * a_p2151, void * * a_p2152);
static void yr2157_IndexExpr(void * a_p2158, rt_int * a_p2159, void * * a_p2160);
static void yr2165_NegExpr(void * a_p2166, rt_int a_p2167, void * a_p2168, rt_int * a_p2169, void * * a_p2170);
static void * yr2175_Unbounded(void * a_p2176);
static rt_int yr2181_Call2(yarr a_p2183, rt_int a_p2184, rt_int a_p2185);
static rt_int yr2190_Infix(rt_int a_p2191, yarr a_p2193, rt_int a_p2194);
static rt_int yr2199_EqCode(rt_int a_p2200, void * a_p2201, rt_int a_p2202, void * a_p2203);
static rt_int yr2208_IsOrdered(void * a_p2209);
static void yr2214_BinExpr(void * a_p2215, void * a_p2216, rt_int * a_p2217, void * * a_p2218);
static rt_int yr2253_Fits(void * a_p2254, void * a_p2255);
static void * yr2260_Choose(void * a_p2261, rt_int a_p2262, rt_int a_p2263);
static rt_int yr2268_HidesStandard(void * a_p2269);
static void yr2274_CompileArgs(void * a_p2275, void * a_p2276, rt_int * a_p2277, rt_int * a_p2278);
static rt_int yr2283_CallCode(void * a_p2284, rt_int a_p2285, rt_int a_p2286, rt_int a_p2287);
static rt_int yr2292_UserOp(void * a_p2293, rt_int a_p2294, void * a_p2295, void * a_p2296, rt_int * a_p2297, void * * a_p2298);
static void yr2303_CallExpr(void * a_p2304, void * a_p2305, rt_int a_p2306, rt_int * a_p2307, void * * a_p2308);
static void yr2313_Denote(void * a_p2314, void * a_p2315, rt_int * a_p2316, void * * a_p2317);
static rt_int yr2322_VariantOf(void * a_p2323, rt_int a_p2324, rt_int a_p2325);
static void yr2409_Emit2(yarr a_p2411, rt_int a_p2412);
static void yr2417_Emit3(yarr a_p2419, rt_int a_p2420, yarr a_p2422);
static void yr2427_PopTo(rt_int a_p2428);
static void yr2433_LeaveBlock(void);
static rt_int yr2438_RaiseCode(rt_int a_p2439);
static void yr2444_BlockStatements(void * a_p2445);
static void yr2450_Statements(void * a_p2451);
static rt_int yr2456_Cond(void * a_p2457);
static rt_int yr2462_Label(void * a_p2463, void * a_p2464);
static void yr2469_CopyOut(void);
static void yr2474_Statement(void * a_p2475);
static void yr2480_ForStatement(void * a_p2481);
static rt_int yr2486_Join(rt_int a_p2487, rt_int a_p2488, rt_int a_p2489);
static void yr2494_ReturnStatement(void * a_p2495);
static void yr2500_BeginStatement(void * a_p2501);
static void yr2506_PlaceLabel(void * a_p2507);
static void yr2512_GotoStatement(void * a_p2513);
static void yr2518_CheckLabels(void * a_p2519);
static rt_int yr2524_RoutineCName(rt_int a_p2525);
static void * yr2530_FormalRep(void * a_p2531);
static rt_int yr2536_ParamCType(void * a_p2537);
static void yr2542_RoutineHeader(void * a_p2543, rt_int a_p2544);
static void * yr2549_SameSignature(void * a_p2550, void * a_p2551);
static void yr2556_RoutineBody(void * a_p2557);
static void yr2562_DeclareStorage(void * a_p2563, void * a_p2564, rt_int a_p2565);
static void yr2570_SimpleDecl(void * a_p2571);
static void yr2576_NoteAlphabet(void * a_p2577, void * a_p2578);
static void yr2583_AtLocation(void * a_p2584, void * a_p2585);
static void yr2590_Declarations(void * a_p2591);
static void * yr2607_Alias(rt_int a_p2608, void * a_p2609);
static void yr2614_AddLits(void * * a_p2615, void * a_p2616, rt_int a_p2617);
static void yr2625_ResolveItem(void * a_p2626, void * * a_p2627, rt_int a_p2628);
static void yr2633_DefineAll(void * a_p2634, rt_int a_p2635);
static void yr2640_CompileModule(void * a_p2641);
static void yr2646_DeclareTemplate(void * a_p2647);
static void yr2652_Instantiate(void * a_p2653);
static void yr2658_DeclareProcess(void * a_p2659);
static void yr2664_AwaitProcesses(void);
static void yr2669_Activate(void * a_p2670, void * a_p2671);
static rt_int yr2676_MonitorPath(void * a_p2677);
static void yr2682_EnterMonitor(void * a_p2683);
static void yr2688_LeaveMonitor(void);
static void yr2693_TerminateStatement(void * a_p2694);
static void yr2699_DeclareSignal(void * a_p2700, rt_int a_p2701);
static void yr2706_DeclareSignalArray(void * a_p2707, rt_int a_p2708);
static void yr2713_DeviceSignal(void * a_p2714, void * a_p2715);
static void * yr2720_Arg(void * a_p2721, rt_int a_p2722);
static void yr2727_NArgs(void * a_p2728, rt_int a_p2729);
static rt_int yr2734_Call1(yarr a_p2736, rt_int a_p2737);
static rt_int yr2742_Addr(rt_int a_p2743);
static void yr2748_StdVar(void * a_p2749, rt_int a_p2750, rt_int * a_p2751, void * * a_p2752);
static void yr2757_NumArg(void * a_p2758, rt_int * a_p2759, void * * a_p2760);
static rt_int yr2765_IntArg(void * a_p2766);
static void yr2771_CodeInsert(void * a_p2772);
static void yr2777_StdCall(rt_int a_p2778, void * a_p2779, rt_int a_p2780, rt_int * a_p2781, void * * a_p2782);
static void yr2791_StdRep(yarr a_p2793, void * a_p2794);
static void yr2799_StdOp(yarr a_p2801, rt_int a_p2802);
static void * yr2807_LitList(yarr a_p2809, yarr a_p2810, yarr a_p2811, rt_int a_p2812);
static void * yr2817_Abstract(rt_int a_p2818, yarr a_p2820);
static void yr2825_Predefine(void);
static void yr2830_Translate(void);
static void yr2835_WriteProgram(void);
static void yr963_InitChars(void) {
struct yf964 F;
memset((void *)&F, 0, sizeof F);
F.v2840 = INT64_C(0);
{ rt_int hi2845 = 127;
for (rt_int i2844 = 0; i2844 <= hi2845; i2844++) { F.c_2843 = i2844;
((rt_int *)(v931).p)[y_ix1(v931, F.c_2843)] = F.v2840;
((unsigned char *)(v940).p)[y_ix1(v940, F.v2840)] = F.c_2843;
F.v2840 = rt_range(rt_add(F.v2840, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i2844 == hi2845) break;
}}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr968_IsLetter(unsigned char a_p969) {
struct yf970 F;
memset((void *)&F, 0, sizeof F);
F.p969 = a_p969;
{ rt_int rv2855 = ((((((F.p969 >= 65)) && ((F.p969 <= 90)))) || ((((F.p969 >= 97)) && ((F.p969 <= 122))))) || ((F.p969 == 95)));
return rv2855; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr974_IsDigit(unsigned char a_p975) {
struct yf976 F;
memset((void *)&F, 0, sizeof F);
F.p975 = a_p975;
{ rt_int rv2860 = (((F.p975 >= 48)) && ((F.p975 <= 57)));
return rv2860; }
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
F.lo2879 = y_low(F.p999, INT64_C(1));
F.hi2880 = y_high(F.p999, INT64_C(1));
{ rt_int hi2884 = F.hi2880;
for (rt_int i2883 = F.lo2879; i2883 <= hi2884; i2883++) { F.c_2882 = i2883;
yr991_SC(((unsigned char *)(F.p999).p)[y_ix1(F.p999, F.c_2882)]);
if (i2883 == hi2884) break;
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
F.v2888 = ((rt_int *)(v888).p)[y_ix1(v888, F.p1005)];
while ((F.v2888 < (rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1005)], ((rt_int *)(v890).p)[y_ix1(v890, F.p1005)])))) {
yr991_SC(((unsigned char *)(v883).p)[y_ix1(v883, F.v2888)]);
F.v2888 = rt_range(rt_add(F.v2888, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1010_SI(rt_int a_p1011) {
struct yf1012 F;
memset((void *)&F, 0, sizeof F);
F.p1011 = a_p1011;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(24)}; y_desc_array(&F.yd_2901, 1, lo, hi, &y_d_byte); }
y_init(&F.yd_2901, &F.v2903);
F.v2905 = INT64_C(0);
F.v2908 = F.p1011;
if ((F.v2908 < INT64_C(0))) {
yr991_SC(45);
F.v2908 = rt_range(rt_neg(F.v2908), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
for (;;) {
F.v2905 = rt_range(rt_add(F.v2905, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((unsigned char *)(F.v2903).p)[y_ix1(F.v2903, F.v2905)] = ((unsigned char *)(v940).p)[y_ix1(v940, rt_add((rt_mod(F.v2908, INT64_C(10))), INT64_C(48)))];
F.v2908 = rt_range(rt_div(F.v2908, INT64_C(10)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.v2908 == INT64_C(0))) {
goto yl_2912;
}
}
yl_2912: ;
while ((F.v2905 > INT64_C(0))) {
yr991_SC(((unsigned char *)(F.v2903).p)[y_ix1(F.v2903, F.v2905)]);
F.v2905 = rt_range(rt_sub(F.v2905, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1016_SE(void) {
struct yf1017 F;
memset((void *)&F, 0, sizeof F);
F.v2927 = ((rt_int *)(v919).p)[y_ix1(v919, v921)];
v921 = rt_range(rt_sub(v921, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v892 = rt_range(rt_add(v892, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v888).p)[y_ix1(v888, v892)] = rt_range(rt_add(v885, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v890).p)[y_ix1(v890, v892)] = rt_range(rt_sub(v909, F.v2927), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo2938 = rt_add(F.v2927, INT64_C(1));
F.hi2939 = v909;
{ rt_int hi2943 = F.hi2939;
for (rt_int i2942 = F.lo2938; i2942 <= hi2943; i2942++) { F.c_2941 = i2942;
yr980_PoolAdd(((unsigned char *)(v907).p)[y_ix1(v907, F.c_2941)]);
if (i2942 == hi2943) break;
}}
v909 = F.v2927;
{ rt_int rv2944 = rt_range(v892, INT64_C(0), INT64_C(4000000));
return rv2944; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1021_T(yarr a_p1023) {
struct yf1024 F;
memset((void *)&F, 0, sizeof F);
F.p1023 = a_p1023;
yr986_SB();
yr997_SA(F.p1023);
{ rt_int rv2947 = yr1016_SE();
return rv2947; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1028_Intern(rt_int a_p1029, rt_int a_p1030) {
struct yf1031 F;
memset((void *)&F, 0, sizeof F);
F.p1029 = a_p1029;
F.p1030 = a_p1030;
F.v2952 = INT64_C(0);
F.lo2962 = F.p1029;
F.hi2963 = rt_sub((rt_add(F.p1029, F.p1030)), INT64_C(1));
{ rt_int hi2967 = F.hi2963;
for (rt_int i2966 = F.lo2962; i2966 <= hi2967; i2966++) { F.c_2965 = i2966;
F.v2952 = rt_range(rt_mod((rt_add((rt_mul(F.v2952, INT64_C(31))), ((rt_int *)(v931).p)[y_ix1(v931, ((unsigned char *)(v883).p)[y_ix1(v883, F.c_2965)])])), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i2966 == hi2967) break;
}}
for (;;) {
if ((((rt_int *)(v895).p)[y_ix1(v895, F.v2952)] == INT64_C(0))) {
v892 = rt_range(rt_add(v892, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v888).p)[y_ix1(v888, v892)] = F.p1029;
((rt_int *)(v890).p)[y_ix1(v890, v892)] = F.p1030;
((rt_int *)(v895).p)[y_ix1(v895, F.v2952)] = rt_range(v892, INT64_C(0), INT64_C(4000000));
{ rt_int rv2977 = rt_range(v892, INT64_C(0), INT64_C(4000000));
return rv2977; }
}
F.v2955 = ((rt_int *)(v895).p)[y_ix1(v895, F.v2952)];
if ((((rt_int *)(v890).p)[y_ix1(v890, F.v2955)] == F.p1030)) {
F.v2957 = 1;
F.lo2983 = INT64_C(0);
F.hi2984 = rt_sub(F.p1030, INT64_C(1));
{ rt_int hi2988 = F.hi2984;
for (rt_int i2987 = F.lo2983; i2987 <= hi2988; i2987++) { F.c_2986 = i2987;
if ((!(((unsigned char *)(v883).p)[y_ix1(v883, rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.v2955)], F.c_2986))] == ((unsigned char *)(v883).p)[y_ix1(v883, rt_add(F.p1029, F.c_2986))]))) {
F.v2957 = 0;
}
if (i2987 == hi2988) break;
}}
if (F.v2957) {
{ rt_int rv2992 = rt_range(F.v2955, INT64_C(0), INT64_C(4000000));
return rv2992; }
}
}
F.v2952 = rt_range(rt_mod((rt_add(F.v2952, INT64_C(1))), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yl_2973: ;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1035_Name(rt_int a_p1036) {
struct yf1037 F;
memset((void *)&F, 0, sizeof F);
F.p1036 = a_p1036;
{ rt_int rv2999 = yr1028_Intern(((rt_int *)(v888).p)[y_ix1(v888, F.p1036)], ((rt_int *)(v890).p)[y_ix1(v890, F.p1036)]);
return rv2999; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1041_N(yarr a_p1043) {
struct yf1044 F;
memset((void *)&F, 0, sizeof F);
F.p1043 = a_p1043;
{ rt_int rv3002 = yr1035_Name(yr1021_T(F.p1043));
return rv3002; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1048_TEq(rt_int a_p1049, rt_int a_p1050) {
struct yf1051 F;
memset((void *)&F, 0, sizeof F);
F.p1049 = a_p1049;
F.p1050 = a_p1050;
if ((F.p1049 == F.p1050)) {
{ rt_int rv3007 = 1;
return rv3007; }
}
if ((!(((rt_int *)(v890).p)[y_ix1(v890, F.p1049)] == ((rt_int *)(v890).p)[y_ix1(v890, F.p1050)]))) {
{ rt_int rv3009 = 0;
return rv3009; }
}
F.lo3014 = INT64_C(0);
F.hi3015 = rt_sub(((rt_int *)(v890).p)[y_ix1(v890, F.p1049)], INT64_C(1));
{ rt_int hi3019 = F.hi3015;
for (rt_int i3018 = F.lo3014; i3018 <= hi3019; i3018++) { F.c_3017 = i3018;
if ((!(((unsigned char *)(v883).p)[y_ix1(v883, rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1049)], F.c_3017))] == ((unsigned char *)(v883).p)[y_ix1(v883, rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1050)], F.c_3017))]))) {
{ rt_int rv3023 = 0;
return rv3023; }
}
if (i3018 == hi3019) break;
}}
{ rt_int rv3025 = 1;
return rv3025; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1055_TStarts(rt_int a_p1056, yarr a_p1058) {
struct yf1059 F;
memset((void *)&F, 0, sizeof F);
F.p1056 = a_p1056;
F.p1058 = a_p1058;
F.v3030 = INT64_C(0);
if ((((rt_int *)(v890).p)[y_ix1(v890, F.p1056)] < (rt_add((rt_sub(y_high(F.p1058, INT64_C(1)), y_low(F.p1058, INT64_C(1)))), INT64_C(1))))) {
{ rt_int rv3040 = 0;
return rv3040; }
}
F.lo3046 = y_low(F.p1058, INT64_C(1));
F.hi3047 = y_high(F.p1058, INT64_C(1));
{ rt_int hi3051 = F.hi3047;
for (rt_int i3050 = F.lo3046; i3050 <= hi3051; i3050++) { F.c_3049 = i3050;
if ((!(((unsigned char *)(v883).p)[y_ix1(v883, rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1056)], F.v3030))] == ((unsigned char *)(F.p1058).p)[y_ix1(F.p1058, F.c_3049)]))) {
{ rt_int rv3054 = 0;
return rv3054; }
}
F.v3030 = rt_range(rt_add(F.v3030, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3050 == hi3051) break;
}}
{ rt_int rv3058 = 1;
return rv3058; }
rt_raise(Y_X_NO_RETURN);
}
static unsigned char yr1063_TChar(rt_int a_p1064, rt_int a_p1065) {
struct yf1066 F;
memset((void *)&F, 0, sizeof F);
F.p1064 = a_p1064;
F.p1065 = a_p1065;
{ unsigned char rv3065 = ((unsigned char *)(v883).p)[y_ix1(v883, rt_sub((rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1064)], F.p1065)), INT64_C(1)))];
return rv3065; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1070_Put(yR130 * a_p1071, rt_int a_p1072) {
struct yf1073 F;
memset((void *)&F, 0, sizeof F);
F.p1071 = a_p1071;
F.p1072 = a_p1072;
({ F.v3070 = rt_alloc(sizeof(yR125)); });
(*(yR125 *)rt_nil_check(F.v3070)) = ((yR125){ .f_t = F.p1072, .f_next = ((void *)0) });
if ((((*F.p1071)).f_head == ((void *)0))) {
((*F.p1071)).f_head = F.v3070;
} else {
((*(yR125 *)rt_nil_check(((*F.p1071)).f_tail))).f_next = F.v3070;
}
((*F.p1071)).f_tail = F.v3070;
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
F.v3084 = ((rt_int *)(v888).p)[y_ix1(v888, F.p1106)];
while ((F.v3084 < (rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1106)], ((rt_int *)(v890).p)[y_ix1(v890, F.p1106)])))) {
({ unsigned char pv = ((unsigned char *)(v883).p)[y_ix1(v883, F.v3084)]; y_put(&v881, &pv, sizeof pv); });
F.v3084 = rt_range(rt_add(F.v3084, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1111_WriteBuf(yR130 a_p1112) {
struct yf1113 F;
memset((void *)&F, 0, sizeof F);
F.p1112 = a_p1112;
F.v3091 = (F.p1112).f_head;
while ((!(F.v3091 == ((void *)0)))) {
yr1105_WriteTxt(((*(yR125 *)rt_nil_check(F.v3091))).f_t);
({ unsigned char pv = 10; y_put(&v881, &pv, sizeof pv); });
F.v3091 = ((*(yR125 *)rt_nil_check(F.v3091))).f_next;
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
F.v3097 = yr1016_SE();
yr1105_WriteTxt(F.v3097);
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
F.v3111 = yr1016_SE();
yr1117_Fail(F.p1133, F.v3111);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1141_NewSerial(void) {
struct yf1142 F;
memset((void *)&F, 0, sizeof F);
v924 = rt_range(rt_add(v924, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
{ rt_int rv3115 = v924;
return rv3115; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1146_Fresh(yarr a_p1148) {
struct yf1149 F;
memset((void *)&F, 0, sizeof F);
F.p1148 = a_p1148;
F.v3119 = yr1141_NewSerial();
yr986_SB();
yr997_SA(F.p1148);
yr1010_SI(F.v3119);
{ rt_int rv3120 = yr1016_SE();
return rv3120; }
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
F.v3127 = yr1016_SE();
v892 = INT64_C(0);
F.v3123 = ((rt_int *)(v888).p)[y_ix1(v888, F.v3127)];
F.lo3144 = ((rt_int *)(v888).p)[y_ix1(v888, F.v3127)];
F.hi3145 = rt_sub((rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.v3127)], ((rt_int *)(v890).p)[y_ix1(v890, F.v3127)])), INT64_C(1));
{ rt_int hi3149 = F.hi3145;
for (rt_int i3148 = F.lo3144; i3148 <= hi3149; i3148++) { F.c_3147 = i3148;
if ((((unsigned char *)(v883).p)[y_ix1(v883, F.c_3147)] == 32)) {
F.v3125 = yr1028_Intern(F.v3123, rt_range(rt_sub(F.c_3147, F.v3123), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v3123 = rt_range(rt_add(F.c_3147, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i3148 == hi3149) break;
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
({ unsigned char g; y_get(&v879, &g, sizeof g); F.v3156 = g; });
yr980_PoolAdd(F.v3156);
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
{ unsigned char rv3169 = 0;
return rv3169; }
}
{ unsigned char rv3170 = ((unsigned char *)(v883).p)[y_ix1(v883, F.p1195)];
return rv3170; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1200_EndsOperand(void) {
struct yf1201 F;
memset((void *)&F, 0, sizeof F);
if ((v1159 == INT64_C(0))) {
{ rt_int rv3178 = 0;
return rv3178; }
}
F.v3173 = ((rt_int *)(v1153).p)[y_ix1(v1153, v1159)];
F.v3175 = ((rt_int *)(v1155).p)[y_ix1(v1155, v1159)];
if ((((((((F.v3173 == v177)) || ((F.v3173 == v186))) || ((F.v3173 == v189))) || ((F.v3173 == v192))) || ((F.v3173 == v195))) || ((F.v3173 == v198)))) {
{ rt_int rv3180 = 1;
return rv3180; }
}
if ((F.v3173 == v183)) {
{ rt_int rv3181 = ((((F.v3175 == v567)) || ((F.v3175 == v573))) || ((F.v3175 == v588)));
return rv3181; }
}
if ((F.v3173 == v180)) {
{ rt_int rv3182 = (F.v3175 == v357);
return rv3182; }
}
{ rt_int rv3184 = 0;
return rv3184; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1205_DigitVal(unsigned char a_p1206) {
struct yf1207 F;
memset((void *)&F, 0, sizeof F);
F.p1206 = a_p1206;
if ((((F.p1206 >= 48)) && ((F.p1206 <= 57)))) {
{ rt_int rv3191 = rt_range(rt_sub(((rt_int *)(v931).p)[y_ix1(v931, F.p1206)], INT64_C(48)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return rv3191; }
}
if ((((F.p1206 >= 65)) && ((F.p1206 <= 70)))) {
{ rt_int rv3196 = rt_range(rt_sub(((rt_int *)(v931).p)[y_ix1(v931, F.p1206)], INT64_C(55)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return rv3196; }
}
{ rt_int rv3198 = INT64_C(99);
return rv3198; }
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
F.v3204 = INT64_C(10);
F.v3215 = 0;
F.v3218 = INT64_C(0);
F.v3221 = INT64_C(0);
F.v3224 = INT64_C(0);
F.v3227 = INT64_C(0);
F.v3230 = INT64_C(0);
if ((!(v1174 == INT64_C(0)))) {
F.v3204 = v1174;
}
v1174 = INT64_C(0);
F.v3207 = v1168;
while ((yr1205_DigitVal(yr1194_At(v1168)) < F.v3204)) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3209 = v1168;
F.v3211 = v1168;
F.v3213 = v1168;
if ((((yr1194_At(v1168) == 46)) && ((!(yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 46))))) {
F.v3215 = 1;
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3211 = v1168;
while ((yr1205_DigitVal(yr1194_At(v1168)) < F.v3204)) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3213 = v1168;
}
if ((yr1194_At(v1168) == 80)) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3227 = INT64_C(1);
if ((((((yr1194_At(v1168) == 45)) || ((yr1194_At(v1168) == 43)))) && yr974_IsDigit(yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))) {
if ((yr1194_At(v1168) == 45)) {
F.v3227 = INT64_C(-1);
}
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3224 = INT64_C(0);
while (yr974_IsDigit(yr1194_At(v1168))) {
F.v3224 = rt_range(rt_add((rt_mul(F.v3224, INT64_C(10))), yr1205_DigitVal(yr1194_At(v1168))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3224 = rt_range(rt_mul(F.v3224, F.v3227), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3218 = INT64_C(0);
F.lo3270 = F.v3207;
F.hi3271 = rt_sub(F.v3209, INT64_C(1));
{ rt_int hi3275 = F.hi3271;
for (rt_int i3274 = F.lo3270; i3274 <= hi3275; i3274++) { F.c_3273 = i3274;
F.v3218 = rt_range(rt_add((rt_mul(F.v3218, F.v3204)), yr1205_DigitVal(((unsigned char *)(v883).p)[y_ix1(v883, F.c_3273)])), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3274 == hi3275) break;
}}
F.v3230 = rt_range(rt_sub(F.v3213, F.v3211), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo3282 = F.v3211;
F.hi3283 = rt_sub(F.v3213, INT64_C(1));
{ rt_int hi3287 = F.hi3283;
for (rt_int i3286 = F.lo3282; i3286 <= hi3287; i3286++) { F.c_3285 = i3286;
F.v3218 = rt_range(rt_add((rt_mul(F.v3218, F.v3204)), yr1205_DigitVal(((unsigned char *)(v883).p)[y_ix1(v883, F.c_3285)])), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3286 == hi3287) break;
}}
yr986_SB();
yr997_SA(y_str("(", 1));
if (F.p1219) {
yr997_SA(y_str("-", 1));
}
yr997_SA(y_str("(double)", 8));
yr1010_SI(F.v3218);
yr997_SA(y_str(" * pow(", 7));
yr1010_SI(F.v3204);
yr997_SA(y_str(", ", 2));
yr1010_SI(rt_range(rt_sub(F.v3224, F.v3230), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr997_SA(y_str("))", 2));
F.v3233 = yr1016_SE();
yr1187_AddTok(v189, F.v3233);
return;
}
if (F.v3215) {
if ((!(F.v3204 == INT64_C(10)))) {
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
F.lo3312 = F.v3207;
F.hi3313 = rt_sub(v1168, INT64_C(1));
{ rt_int hi3317 = F.hi3313;
for (rt_int i3316 = F.lo3312; i3316 <= hi3317; i3316++) { F.c_3315 = i3316;
yr991_SC(((unsigned char *)(v883).p)[y_ix1(v883, F.c_3315)]);
if (i3316 == hi3317) break;
}}
F.v3233 = yr1016_SE();
yr1187_AddTok(v192, F.v3233);
return;
}
F.v3218 = INT64_C(0);
F.lo3322 = F.v3207;
F.hi3323 = rt_sub(F.v3209, INT64_C(1));
{ rt_int hi3327 = F.hi3323;
for (rt_int i3326 = F.lo3322; i3326 <= hi3327; i3326++) { F.c_3325 = i3326;
F.v3221 = yr1205_DigitVal(((unsigned char *)(v883).p)[y_ix1(v883, F.c_3325)]);
if ((F.v3218 > (rt_div((rt_sub(v876, F.v3221)), F.v3204)))) {
yr1211_LexError(y_str("integer literal too large", 25));
}
F.v3218 = rt_range(rt_add((rt_mul(F.v3218, F.v3204)), F.v3221), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3326 == hi3327) break;
}}
if (F.p1219) {
F.v3218 = rt_range(rt_neg(F.v3218), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yr1187_AddTok(v186, F.v3218);
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
F.v3338 = v1168;
F.v3340 = INT64_C(0);
F.v3342 = 1;
while (F.v3342) {
if (((((yr1194_At(F.v3338) == 32)) || ((yr1194_At(F.v3338) == 9))) || ((yr1194_At(F.v3338) == 13)))) {
F.v3338 = rt_range(rt_add(F.v3338, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr1194_At(F.v3338) == 10)) {
F.v3340 = rt_range(rt_add(F.v3340, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3338 = rt_range(rt_add(F.v3338, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v3342 = 0;
}
}
if ((!(yr1194_At(F.v3338) == 34))) {
goto yl_3343;
}
v1171 = rt_range(rt_add(v1171, F.v3340), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1168 = F.v3338;
}
yl_3343: ;
F.v3336 = yr1016_SE();
yr1187_AddTok(v198, F.v3336);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1229_Lex(void) {
struct yf1230 F;
memset((void *)&F, 0, sizeof F);
v1168 = v1162;
while ((v1168 <= v1165)) {
F.v3371 = ((unsigned char *)(v883).p)[y_ix1(v883, v1168)];
if ((F.v3371 == 10)) {
v1171 = rt_range(rt_add(v1171, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((((F.v3371 == 32)) || ((F.v3371 == 9))) || ((F.v3371 == 13))) || ((F.v3371 == 12)))) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v3371 == 40)) && ((yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 42)))) {
v1168 = rt_range(rt_add(v1168, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!((((yr1194_At(v1168) == 42)) && ((yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 41)))))) {
if ((((yr1194_At(v1168) == 10)) || ((v1168 > v1165)))) {
yr1211_LexError(y_str("a comment must close on its line", 32));
}
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1168 = rt_range(rt_add(v1168, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr974_IsDigit(F.v3371) || ((((v1174 == INT64_C(16))) && ((yr1205_DigitVal(F.v3371) < INT64_C(16))))))) {
yr1218_LexNumber(0);
} else if (((((((F.v3371 == 45)) || ((F.v3371 == 43)))) && (!yr1200_EndsOperand())) && ((yr974_IsDigit(yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || ((((v1174 == INT64_C(16))) && ((yr1205_DigitVal(yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) < INT64_C(16))))))))) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1218_LexNumber((F.v3371 == 45));
} else if (yr968_IsLetter(F.v3371)) {
F.v3373 = v1168;
while ((yr968_IsLetter(yr1194_At(v1168)) || yr974_IsDigit(yr1194_At(v1168)))) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3381 = yr1028_Intern(F.v3373, rt_range(rt_sub(v1168, F.v3373), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((F.v3381 == v222)) {
v1174 = INT64_C(2);
} else if ((F.v3381 == v225)) {
v1174 = INT64_C(8);
} else if ((F.v3381 == v228)) {
v1174 = INT64_C(10);
} else if ((F.v3381 == v231)) {
v1174 = INT64_C(16);
} else if ((F.v3381 <= v462)) {
yr1187_AddTok(v180, F.v3381);
} else {
yr1187_AddTok(v177, F.v3381);
}
} else if ((F.v3371 == 39)) {
F.v3373 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3375 = F.v3373;
while ((!(yr1194_At(F.v3375) == 39))) {
if (((((yr1194_At(F.v3375) == 10)) || ((yr1194_At(F.v3375) == 34))) || ((F.v3375 > v1165)))) {
yr1211_LexError(y_str("bad character literal", 21));
}
F.v3375 = rt_range(rt_add(F.v3375, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v3375 == F.v3373)) {
yr1211_LexError(y_str("empty character literal", 23));
}
F.v3381 = yr1028_Intern(F.v3373, rt_range(rt_sub(F.v3375, F.v3373), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1187_AddTok(v195, F.v3381);
v1168 = rt_range(rt_add(F.v3375, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v3371 == 34)) {
yr1224_LexString();
} else {
F.v3377 = INT64_C(0);
F.v3375 = rt_range(rt_add(v462, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((F.v3377 == INT64_C(0))) && ((F.v3375 <= v591)))) {
F.v3379 = ((rt_int *)(v890).p)[y_ix1(v890, F.v3375)];
F.v3385 = 1;
F.lo3457 = INT64_C(0);
F.hi3458 = rt_sub(F.v3379, INT64_C(1));
{ rt_int hi3462 = F.hi3458;
for (rt_int i3461 = F.lo3457; i3461 <= hi3462; i3461++) { F.c_3460 = i3461;
if ((!(yr1194_At(rt_range(rt_add(v1168, F.c_3460), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == ((unsigned char *)(v883).p)[y_ix1(v883, rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.v3375)], F.c_3460))]))) {
F.v3385 = 0;
}
if (i3461 == hi3462) break;
}}
if (F.v3385) {
F.v3377 = F.v3375;
}
F.v3375 = rt_range(rt_add(F.v3375, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v3377 == INT64_C(0))) {
yr1211_LexError(y_str("a character that is not in the language", 39));
}
yr1187_AddTok(v183, F.v3377);
v1168 = rt_range(rt_add(v1168, ((rt_int *)(v890).p)[y_ix1(v890, F.v3377)]), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
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
({ F.v3476 = rt_alloc(sizeof(yR95)); });
(*(yR95 *)rt_nil_check(F.v3476)) = ((yR95){ .f_kind = F.p1246, .f_line = F.p1247, .f_ival = INT64_C(0), .f_flag = INT64_C(0), .f_name = INT64_C(0), .f_text = INT64_C(0), .f_a = ((void *)0), .f_b = ((void *)0), .f_c = ((void *)0), .f_d = ((void *)0), .f_e = ((void *)0), .f_next = ((void *)0), .f_rep = ((void *)0), .f_sym = ((void *)0) });
{ void * rv3481 = F.v3476;
return rv3481; }
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
F.v3489 = INT64_C(0);
F.v3492 = F.p1261;
while ((!(F.v3492 == ((void *)0)))) {
F.v3489 = rt_range(rt_add(F.v3489, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3492 = ((*(yR95 *)rt_nil_check(F.v3492))).f_next;
}
{ rt_int rv3495 = F.v3489;
return rv3495; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1266_TK(void) {
struct yf1267 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv3497 = ((rt_int *)(v1153).p)[y_ix1(v1153, v1234)];
return rv3497; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1271_TV(void) {
struct yf1272 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv3499 = ((rt_int *)(v1155).p)[y_ix1(v1155, v1234)];
return rv3499; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1276_TLn(void) {
struct yf1277 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv3501 = ((rt_int *)(v1157).p)[y_ix1(v1157, v1234)];
return rv3501; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1281_IsAt(rt_int a_p1282, rt_int a_p1283) {
struct yf1284 F;
memset((void *)&F, 0, sizeof F);
F.p1282 = a_p1282;
F.p1283 = a_p1283;
F.v3506 = ((rt_int *)(v1153).p)[y_ix1(v1153, rt_add(v1234, F.p1282))];
{ rt_int rv3509 = (((((F.v3506 == v180)) || ((F.v3506 == v183)))) && ((((rt_int *)(v1155).p)[y_ix1(v1155, rt_add(v1234, F.p1282))] == F.p1283)));
return rv3509; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1288_Is(rt_int a_p1289) {
struct yf1290 F;
memset((void *)&F, 0, sizeof F);
F.p1289 = a_p1289;
{ rt_int rv3513 = yr1281_IsAt(INT64_C(0), F.p1289);
return rv3513; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1294_IsIdAt(rt_int a_p1295) {
struct yf1296 F;
memset((void *)&F, 0, sizeof F);
F.p1295 = a_p1295;
{ rt_int rv3517 = (((rt_int *)(v1153).p)[y_ix1(v1153, rt_add(v1234, F.p1295))] == v177);
return rv3517; }
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
{ rt_int rv3524 = 1;
return rv3524; }
}
{ rt_int rv3526 = 0;
return rv3526; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1311_TokText(void) {
struct yf1312 F;
memset((void *)&F, 0, sizeof F);
F.v3529 = yr1266_TK();
if ((((((F.v3529 == v177)) || ((F.v3529 == v180))) || ((F.v3529 == v183))) || ((F.v3529 == v195)))) {
{ rt_int rv3530 = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
return rv3530; }
}
if ((F.v3529 == v174)) {
{ rt_int rv3532 = yr1021_T(y_str("the end of the text", 19));
return rv3532; }
}
if ((F.v3529 == v186)) {
yr986_SB();
yr1010_SI(yr1271_TV());
{ rt_int rv3533 = yr1016_SE();
return rv3533; }
}
{ rt_int rv3535 = yr1021_T(y_str("a literal", 9));
return rv3535; }
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
F.v3539 = yr1016_SE();
yr1117_Fail(yr1276_TLn(), F.v3539);
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
F.v3544 = yr1016_SE();
yr1117_Fail(yr1276_TLn(), F.v3544);
}
F.v3544 = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
yr1300_Skip();
{ rt_int rv3546 = F.v3544;
return rv3546; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1327_CloseName(rt_int a_p1328, rt_int a_p1329) {
struct yf1330 F;
memset((void *)&F, 0, sizeof F);
F.p1328 = a_p1328;
F.p1329 = a_p1329;
if (((((yr1266_TK() == v177)) || ((yr1266_TK() == v180))) || ((yr1266_TK() == v183)))) {
F.v3551 = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
if ((F.v3551 == F.p1328)) {
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
F.v3555 = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
if ((yr1266_TK() == v177)) {
yr1300_Skip();
{ rt_int rv3556 = F.v3555;
return rv3556; }
}
if ((((yr1266_TK() == v180)) && (((((((((F.v3555 == v360)) || ((F.v3555 == v207))) || ((F.v3555 == v369))) || ((F.v3555 == v246))) || ((F.v3555 == v348))) || ((F.v3555 == v459))) || ((F.v3555 == v330)))))) {
yr1300_Skip();
{ rt_int rv3557 = F.v3555;
return rv3557; }
}
if (((((((((((((yr1266_TK() == v183)) && ((!(F.v3555 == v564)))) && ((!(F.v3555 == v567)))) && ((!(F.v3555 == v570)))) && ((!(F.v3555 == v573)))) && ((!(F.v3555 == v576)))) && ((!(F.v3555 == v579)))) && ((!(F.v3555 == v582)))) && ((!(F.v3555 == v585)))) && ((!(F.v3555 == v507)))) && ((!(F.v3555 == v504))))) {
yr1300_Skip();
{ rt_int rv3558 = F.v3555;
return rv3558; }
}
yr1124_FailS(yr1276_TLn(), y_str("expected a name", 15));
{ rt_int rv3561 = INT64_C(0);
return rv3561; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1339_IsLabel(rt_int a_p1340) {
struct yf1341 F;
memset((void *)&F, 0, sizeof F);
F.p1340 = a_p1340;
F.v3565 = v1237;
while ((!(F.v3565 == ((void *)0)))) {
if ((((*(yR95 *)rt_nil_check(F.v3565))).f_name == F.p1340)) {
{ rt_int rv3567 = 1;
return rv3567; }
}
F.v3565 = ((*(yR95 *)rt_nil_check(F.v3565))).f_next;
}
{ rt_int rv3569 = 0;
return rv3569; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1345_ImportItem(void) {
struct yf1346 F;
memset((void *)&F, 0, sizeof F);
F.v3572 = yr1245_NewNode(v597, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3572))).f_name = yr1334_ExtendedId();
if ((yr1294_IsIdAt(INT64_C(0)) && ((yr1271_TV() == v1239)))) {
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3572))).f_text = yr1322_Ident();
}
if (yr1305_Accept(v213)) {
((*(yR95 *)rt_nil_check(F.v3572))).f_ival = yr1334_ExtendedId();
}
{ void * rv3574 = F.v3572;
return rv3574; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1350_ParseModule(void) {
struct yf1351 F;
memset((void *)&F, 0, sizeof F);
F.v3577 = yr1245_NewNode(v594, yr1276_TLn());
F.v3579 = ((void *)0);
F.v3581 = ((void *)0);
F.v3583 = ((void *)0);
if (yr1305_Accept(v354)) {
((*(yR95 *)rt_nil_check(F.v3577))).f_flag = INT64_C(1);
} else {
yr1316_Expect(v351);
}
((*(yR95 *)rt_nil_check(F.v3577))).f_name = yr1322_Ident();
while (yr1305_Accept(v327)) {
for (;;) {
F.v3579 = yr1345_ImportItem();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3577))).f_a, &F.v3581, F.v3579);
if ((!yr1305_Accept(v576))) {
goto yl_3587;
}
}
yl_3587: ;
yr1316_Expect(v579);
}
while (yr1305_Accept(v306)) {
F.v3585 = INT64_C(0);
if ((((yr1288_Is(v366) || yr1288_Is(v444)) || yr1288_Is(v399)) || yr1288_Is(v453))) {
F.v3585 = yr1271_TV();
yr1300_Skip();
}
for (;;) {
F.v3579 = yr1345_ImportItem();
((*(yR95 *)rt_nil_check(F.v3579))).f_flag = F.v3585;
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3577))).f_b, &F.v3583, F.v3579);
if ((!yr1305_Accept(v576))) {
goto yl_3589;
}
}
yl_3589: ;
yr1316_Expect(v579);
}
((*(yR95 *)rt_nil_check(F.v3577))).f_c = yr1360_ParseBlock();
if ((((*(yR95 *)rt_nil_check(F.v3577))).f_flag == INT64_C(1))) {
yr1316_Expect(v279);
} else {
yr1316_Expect(v276);
}
yr1327_CloseName(((*(yR95 *)rt_nil_check(F.v3577))).f_name, ((*(yR95 *)rt_nil_check(F.v3577))).f_line);
{ void * rv3591 = F.v3577;
return rv3591; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1355_IsDeclWord(void) {
struct yf1356 F;
memset((void *)&F, 0, sizeof F);
if ((!(yr1266_TK() == v180))) {
{ rt_int rv3596 = 0;
return rv3596; }
}
F.v3594 = yr1271_TV();
{ rt_int rv3597 = (((((((((((((F.v3594 == v240)) || ((F.v3594 == v453))) || ((F.v3594 == v342))) || ((F.v3594 == v447))) || ((F.v3594 == v408))) || ((F.v3594 == v318))) || ((F.v3594 == v390))) || ((F.v3594 == v351))) || ((F.v3594 == v354))) || ((F.v3594 == v435))) || ((F.v3594 == v336))) || ((F.v3594 == v393)));
return rv3597; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1360_ParseBlock(void) {
struct yf1361 F;
memset((void *)&F, 0, sizeof F);
F.v3600 = yr1245_NewNode(v600, yr1276_TLn());
F.v3602 = ((void *)0);
F.v3604 = v1237;
while (yr1355_IsDeclWord()) {
yr1387_ParseDeclGroup(&((*(yR95 *)rt_nil_check(F.v3600))).f_a, &F.v3602);
while (yr1305_Accept(v579)) {
}
}
if (yr1288_Is(v300)) {
((*(yR95 *)rt_nil_check(F.v3600))).f_b = yr1365_ParseHandler();
F.v3606 = ((*(yR95 *)rt_nil_check(F.v3600))).f_b;
if (yr1305_Accept(v579)) {
}
}
((*(yR95 *)rt_nil_check(F.v3600))).f_c = yr1451_ParseStatements(1);
v1237 = F.v3604;
{ void * rv3608 = F.v3600;
return rv3608; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1365_ParseHandler(void) {
struct yf1366 F;
memset((void *)&F, 0, sizeof F);
F.v3611 = yr1245_NewNode(v603, yr1276_TLn());
F.v3613 = ((void *)0);
F.v3615 = ((void *)0);
F.v3617 = ((void *)0);
F.v3619 = ((void *)0);
yr1316_Expect(v300);
while (yr1305_Accept(v237)) {
F.v3613 = yr1245_NewNode(v606, yr1276_TLn());
F.v3619 = ((void *)0);
for (;;) {
F.v3617 = yr1245_NewNode(v639, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3617))).f_name = yr1322_Ident();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3613))).f_a, &F.v3619, F.v3617);
if ((!yr1305_Accept(v576))) {
goto yl_3620;
}
}
yl_3620: ;
yr1316_Expect(v504);
((*(yR95 *)rt_nil_check(F.v3613))).f_b = yr1451_ParseStatements(0);
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3611))).f_a, &F.v3615, F.v3613);
}
if (yr1305_Accept(v252)) {
((*(yR95 *)rt_nil_check(F.v3611))).f_flag = INT64_C(1);
((*(yR95 *)rt_nil_check(F.v3611))).f_b = yr1451_ParseStatements(0);
}
yr1316_Expect(v261);
{ void * rv3624 = F.v3611;
return rv3624; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1370_ParseNames(void) {
struct yf1371 F;
memset((void *)&F, 0, sizeof F);
F.v3627 = ((void *)0);
F.v3629 = ((void *)0);
F.v3631 = ((void *)0);
for (;;) {
F.v3631 = yr1245_NewNode(v639, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3631))).f_name = yr1322_Ident();
if (yr1305_Accept(v219)) {
((*(yR95 *)rt_nil_check(F.v3631))).f_a = yr1513_ParseExpr();
}
yr1252_Link(&F.v3627, &F.v3629, F.v3631);
if ((!yr1305_Accept(v576))) {
goto yl_3632;
}
}
yl_3632: ;
{ void * rv3633 = F.v3627;
return rv3633; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1375_SimpleEntry(rt_int a_p1376) {
struct yf1377 F;
memset((void *)&F, 0, sizeof F);
F.p1376 = a_p1376;
if ((F.p1376 == v240)) {
F.v3637 = yr1245_NewNode(v609, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3637))).f_a = yr1370_ParseNames();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3637))).f_b = yr1416_ParseRep();
yr1316_Expect(v555);
((*(yR95 *)rt_nil_check(F.v3637))).f_c = yr1513_ParseExpr();
} else if ((F.p1376 == v453)) {
F.v3637 = yr1245_NewNode(v612, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3637))).f_a = yr1370_ParseNames();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3637))).f_b = yr1416_ParseRep();
if (yr1305_Accept(v501)) {
((*(yR95 *)rt_nil_check(F.v3637))).f_c = yr1513_ParseExpr();
}
} else if ((F.p1376 == v447)) {
F.v3637 = yr1245_NewNode(v618, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3637))).f_name = yr1322_Ident();
yr1316_Expect(v555);
((*(yR95 *)rt_nil_check(F.v3637))).f_b = yr1436_ParseConcrete1();
} else {
F.v3637 = yr1245_NewNode(v621, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3637))).f_name = yr1322_Ident();
yr1316_Expect(v555);
((*(yR95 *)rt_nil_check(F.v3637))).f_b = yr1416_ParseRep();
}
{ void * rv3638 = F.v3637;
return rv3638; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1381_Continues(rt_int a_p1382) {
struct yf1383 F;
memset((void *)&F, 0, sizeof F);
F.p1382 = a_p1382;
if ((!((yr1288_Is(v579) && yr1294_IsIdAt(INT64_C(1)))))) {
{ rt_int rv3643 = 0;
return rv3643; }
}
if (yr1339_IsLabel(rt_range(((rt_int *)(v1155).p)[y_ix1(v1155, rt_add(v1234, INT64_C(1)))], INT64_C(0), INT64_C(4000000)))) {
{ rt_int rv3647 = 0;
return rv3647; }
}
if ((((F.p1382 == v240)) || ((F.p1382 == v453)))) {
{ rt_int rv3651 = ((yr1281_IsAt(INT64_C(2), v576) || yr1281_IsAt(INT64_C(2), v582)) || yr1281_IsAt(INT64_C(2), v219));
return rv3651; }
}
{ rt_int rv3653 = yr1281_IsAt(INT64_C(2), v555);
return rv3653; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1387_ParseDeclGroup(void * * a_p1388, void * * a_p1389) {
struct yf1390 F;
memset((void *)&F, 0, sizeof F);
F.p1388 = a_p1388;
F.p1389 = a_p1389;
F.v3658 = yr1271_TV();
if ((((((F.v3658 == v240)) || ((F.v3658 == v453))) || ((F.v3658 == v447))) || ((F.v3658 == v408)))) {
yr1300_Skip();
yr1252_Link(&(*F.p1388), &(*F.p1389), yr1375_SimpleEntry(F.v3658));
while (yr1381_Continues(F.v3658)) {
yr1300_Skip();
yr1252_Link(&(*F.p1388), &(*F.p1389), yr1375_SimpleEntry(F.v3658));
}
return;
}
if ((F.v3658 == v342)) {
F.v3660 = yr1245_NewNode(v615, yr1276_TLn());
yr1300_Skip();
F.v3664 = ((void *)0);
for (;;) {
F.v3662 = yr1245_NewNode(v639, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3662))).f_name = yr1322_Ident();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3660))).f_a, &F.v3664, F.v3662);
if ((!yr1305_Accept(v576))) {
goto yl_3665;
}
}
yl_3665: ;
F.v3662 = ((*(yR95 *)rt_nil_check(F.v3660))).f_a;
while ((!(F.v3662 == ((void *)0)))) {
((*(yR95 *)rt_nil_check(F.v3660))).f_b = yr1245_NewNode(v639, ((*(yR95 *)rt_nil_check(F.v3662))).f_line);
((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v3660))).f_b))).f_name = ((*(yR95 *)rt_nil_check(F.v3662))).f_name;
((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v3660))).f_b))).f_next = v1237;
v1237 = ((*(yR95 *)rt_nil_check(F.v3660))).f_b;
F.v3662 = ((*(yR95 *)rt_nil_check(F.v3662))).f_next;
}
((*(yR95 *)rt_nil_check(F.v3660))).f_b = ((void *)0);
yr1252_Link(&(*F.p1388), &(*F.p1389), F.v3660);
return;
}
yr1252_Link(&(*F.p1388), &(*F.p1389), yr1394_ParseDecl());
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1394_ParseDecl(void) {
struct yf1395 F;
memset((void *)&F, 0, sizeof F);
F.v3674 = yr1271_TV();
F.v3676 = yr1276_TLn();
if ((((F.v3674 == v318)) || ((F.v3674 == v390)))) {
F.v3668 = yr1245_NewNode(v624, F.v3676);
yr1300_Skip();
if ((F.v3674 == v318)) {
((*(yR95 *)rt_nil_check(F.v3668))).f_flag = INT64_C(1);
}
if ((yr1288_Is(v309) || yr1288_Is(v405))) {
((*(yR95 *)rt_nil_check(F.v3668))).f_ival = yr1271_TV();
yr1300_Skip();
}
((*(yR95 *)rt_nil_check(F.v3668))).f_name = yr1334_ExtendedId();
yr1399_ParseFormals(F.v3668);
if (yr1305_Accept(v333)) {
((*(yR95 *)rt_nil_check(F.v3668))).f_e = yr1245_NewNode(v639, F.v3676);
}
((*(yR95 *)rt_nil_check(F.v3668))).f_c = yr1360_ParseBlock();
if ((F.v3674 == v318)) {
yr1316_Expect(v267);
} else {
yr1316_Expect(v282);
}
yr1327_CloseName(((*(yR95 *)rt_nil_check(F.v3668))).f_name, F.v3676);
{ void * rv3680 = F.v3668;
return rv3680; }
}
if ((((F.v3674 == v351)) || ((F.v3674 == v354)))) {
{ void * rv3681 = yr1350_ParseModule();
return rv3681; }
}
if ((F.v3674 == v435)) {
F.v3668 = yr1245_NewNode(v630, F.v3676);
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3668))).f_name = yr1322_Ident();
yr1316_Expect(v564);
F.v3672 = ((void *)0);
for (;;) {
F.v3670 = yr1245_NewNode(v639, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3670))).f_name = yr1322_Ident();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3668))).f_a, &F.v3672, F.v3670);
if ((!yr1305_Accept(v576))) {
goto yl_3682;
}
}
yl_3682: ;
yr1316_Expect(v567);
F.v3678 = v1234;
((*(yR95 *)rt_nil_check(F.v3668))).f_b = yr1350_ParseModule();
((*(yR95 *)rt_nil_check(F.v3668))).f_ival = F.v3678;
((*(yR95 *)rt_nil_check(F.v3668))).f_flag = v1234;
yr1316_Expect(v294);
yr1327_CloseName(((*(yR95 *)rt_nil_check(F.v3668))).f_name, F.v3676);
{ void * rv3683 = F.v3668;
return rv3683; }
}
if ((F.v3674 == v336)) {
F.v3668 = yr1245_NewNode(v633, F.v3676);
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3668))).f_name = yr1322_Ident();
yr1316_Expect(v564);
F.v3672 = ((void *)0);
for (;;) {
F.v3670 = yr1245_NewNode(v639, yr1276_TLn());
if ((yr1266_TK() == v186)) {
((*(yR95 *)rt_nil_check(F.v3670))).f_flag = INT64_C(1);
((*(yR95 *)rt_nil_check(F.v3670))).f_ival = yr1271_TV();
yr1300_Skip();
} else {
((*(yR95 *)rt_nil_check(F.v3670))).f_name = yr1334_ExtendedId();
}
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3668))).f_a, &F.v3672, F.v3670);
if ((!yr1305_Accept(v576))) {
goto yl_3684;
}
}
yl_3684: ;
yr1316_Expect(v567);
{ void * rv3686 = F.v3668;
return rv3686; }
}
if ((F.v3674 == v393)) {
F.v3668 = yr1245_NewNode(v636, F.v3676);
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3668))).f_name = yr1322_Ident();
yr1399_ParseFormals(F.v3668);
if ((!(((*(yR95 *)rt_nil_check(F.v3668))).f_b == ((void *)0)))) {
yr1124_FailS(F.v3676, y_str("a process returns no value", 26));
}
if (yr1305_Accept(v387)) {
((*(yR95 *)rt_nil_check(F.v3668))).f_d = yr1513_ParseExpr();
}
if (yr1305_Accept(v339)) {
((*(yR95 *)rt_nil_check(F.v3668))).f_e = yr1513_ParseExpr();
}
if (yr1305_Accept(v429)) {
F.v3670 = yr1513_ParseExpr();
}
((*(yR95 *)rt_nil_check(F.v3668))).f_c = yr1360_ParseBlock();
yr1316_Expect(v285);
yr1327_CloseName(((*(yR95 *)rt_nil_check(F.v3668))).f_name, F.v3676);
{ void * rv3688 = F.v3668;
return rv3688; }
}
yr1124_FailS(F.v3676, y_str("expected a declaration", 22));
{ void * rv3690 = ((void *)0);
return rv3690; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1399_ParseFormals(void * a_p1400) {
struct yf1401 F;
memset((void *)&F, 0, sizeof F);
F.p1400 = a_p1400;
F.v3694 = ((void *)0);
F.v3696 = ((void *)0);
if (yr1305_Accept(v414)) {
((*(yR95 *)rt_nil_check(F.p1400))).f_b = yr1416_ParseRep();
}
yr1316_Expect(v564);
while ((!yr1288_Is(v567))) {
if (yr1305_Accept(v240)) {
F.v3698 = v867;
} else if (yr1305_Accept(v375)) {
F.v3698 = v870;
} else if (yr1305_Accept(v453)) {
F.v3698 = v873;
} else {
yr1124_FailS(yr1276_TLn(), y_str("a formal parameter is CONST, OUT or VAR", 39));
}
for (;;) {
F.v3694 = yr1245_NewNode(v627, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3694))).f_ival = F.v3698;
((*(yR95 *)rt_nil_check(F.v3694))).f_a = yr1370_ParseNames();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3694))).f_b = yr1405_ParseFormalRep();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.p1400))).f_a, &F.v3696, F.v3694);
if ((!((((yr1288_Is(v579) || yr1288_Is(v576))) && yr1294_IsIdAt(INT64_C(1)))))) {
goto yl_3700;
}
yr1300_Skip();
}
yl_3700: ;
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
F.v3704 = yr1245_NewNode(v666, yr1276_TLn());
yr1300_Skip();
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3704))).f_a = yr1513_ParseExpr();
yr1300_Skip();
yr1316_Expect(v363);
((*(yR95 *)rt_nil_check(F.v3704))).f_b = yr1416_ParseRep();
yr1316_Expect(v567);
{ void * rv3710 = F.v3704;
return rv3710; }
}
if (yr1288_Is(v432)) {
F.v3704 = yr1245_NewNode(v669, yr1276_TLn());
yr1300_Skip();
{ void * rv3711 = F.v3704;
return rv3711; }
}
{ void * rv3712 = yr1416_ParseRep();
return rv3712; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1410_IsStructWord(rt_int a_p1411) {
struct yf1412 F;
memset((void *)&F, 0, sizeof F);
F.p1411 = a_p1411;
F.v3716 = ((rt_int *)(v1155).p)[y_ix1(v1155, rt_add(v1234, F.p1411))];
if ((!(((rt_int *)(v1153).p)[y_ix1(v1153, rt_add(v1234, F.p1411))] == v180))) {
{ rt_int rv3720 = 0;
return rv3720; }
}
{ rt_int rv3721 = (((((((((F.v3716 == v450)) || ((F.v3716 == v372))) || ((F.v3716 == v204))) || ((F.v3716 == v210))) || ((F.v3716 == v402))) || ((F.v3716 == v312))) || ((F.v3716 == v381))) || ((F.v3716 == v423)));
return rv3721; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1416_ParseRep(void) {
struct yf1417 F;
memset((void *)&F, 0, sizeof F);
if ((yr1294_IsIdAt(INT64_C(0)) && ((yr1410_IsStructWord(INT64_C(1)) || ((yr1294_IsIdAt(INT64_C(1)) && yr1281_IsAt(INT64_C(2), v570))))))) {
F.v3724 = yr1322_Ident();
F.v3726 = yr1421_ParseConcrete();
((*(yR95 *)rt_nil_check(F.v3726))).f_text = F.v3724;
{ void * rv3731 = F.v3726;
return rv3731; }
}
{ void * rv3732 = yr1421_ParseConcrete();
return rv3732; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1421_ParseConcrete(void) {
struct yf1422 F;
memset((void *)&F, 0, sizeof F);
F.v3735 = yr1436_ParseConcrete1();
if (yr1305_Accept(v378)) {
if (((((yr1266_TK() == v186)) || ((yr1266_TK() == v177))) || yr1288_Is(v564))) {
F.v3737 = yr1518_ParseSimple();
}
}
if (yr1305_Accept(v201)) {
F.v3737 = yr1518_ParseSimple();
}
{ void * rv3738 = F.v3735;
return rv3738; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1426_ParseIds(void) {
struct yf1427 F;
memset((void *)&F, 0, sizeof F);
F.v3741 = ((void *)0);
F.v3743 = ((void *)0);
F.v3745 = ((void *)0);
for (;;) {
F.v3745 = yr1245_NewNode(v639, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3745))).f_name = yr1322_Ident();
yr1252_Link(&F.v3741, &F.v3743, F.v3745);
if ((!yr1305_Accept(v576))) {
goto yl_3746;
}
}
yl_3746: ;
{ void * rv3747 = F.v3741;
return rv3747; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1431_ParseFieldGroups(void) {
struct yf1432 F;
memset((void *)&F, 0, sizeof F);
F.v3750 = ((void *)0);
F.v3752 = ((void *)0);
F.v3754 = ((void *)0);
while ((yr1288_Is(v240) || yr1288_Is(v453))) {
F.v3756 = yr1271_TV();
yr1300_Skip();
for (;;) {
F.v3754 = yr1245_NewNode(v675, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3754))).f_ival = F.v3756;
((*(yR95 *)rt_nil_check(F.v3754))).f_a = yr1370_ParseNames();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3754))).f_b = yr1416_ParseRep();
yr1252_Link(&F.v3750, &F.v3752, F.v3754);
if ((!((yr1288_Is(v579) && yr1294_IsIdAt(INT64_C(1)))))) {
goto yl_3757;
}
yr1300_Skip();
}
yl_3757: ;
if ((!yr1305_Accept(v579))) {
{ void * rv3759 = F.v3750;
return rv3759; }
}
}
{ void * rv3760 = F.v3750;
return rv3760; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1436_ParseConcrete1(void) {
struct yf1437 F;
memset((void *)&F, 0, sizeof F);
F.v3777 = yr1276_TLn();
if ((yr1266_TK() == v177)) {
F.v3763 = yr1245_NewNode(v642, F.v3777);
((*(yR95 *)rt_nil_check(F.v3763))).f_name = yr1322_Ident();
((*(yR95 *)rt_nil_check(F.v3763))).f_a = yr1441_ParseQualifier();
{ void * rv3778 = F.v3763;
return rv3778; }
}
if ((!(yr1266_TK() == v180))) {
yr1124_FailS(F.v3777, y_str("expected a representation", 25));
}
F.v3775 = yr1271_TV();
if ((((F.v3775 == v450)) || ((F.v3775 == v372)))) {
F.v3763 = yr1245_NewNode(v645, F.v3777);
if ((F.v3775 == v372)) {
((*(yR95 *)rt_nil_check(F.v3763))).f_flag = INT64_C(1);
}
yr1300_Skip();
yr1316_Expect(v564);
((*(yR95 *)rt_nil_check(F.v3763))).f_a = yr1426_ParseIds();
yr1316_Expect(v567);
((*(yR95 *)rt_nil_check(F.v3763))).f_b = yr1441_ParseQualifier();
{ void * rv3781 = F.v3763;
return rv3781; }
}
if ((F.v3775 == v204)) {
F.v3763 = yr1245_NewNode(v648, F.v3777);
yr1300_Skip();
yr1316_Expect(v564);
F.v3773 = ((void *)0);
for (;;) {
if ((!(yr1266_TK() == v195))) {
yr1124_FailS(yr1276_TLn(), y_str("an ALPHABET lists character literals", 36));
}
F.v3771 = yr1245_NewNode(v738, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3771))).f_text = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
yr1300_Skip();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3763))).f_a, &F.v3773, F.v3771);
if ((!yr1305_Accept(v576))) {
goto yl_3782;
}
}
yl_3782: ;
yr1316_Expect(v567);
((*(yR95 *)rt_nil_check(F.v3763))).f_b = yr1441_ParseQualifier();
{ void * rv3784 = F.v3763;
return rv3784; }
}
if ((F.v3775 == v210)) {
F.v3763 = yr1245_NewNode(v651, F.v3777);
yr1300_Skip();
yr1316_Expect(v564);
F.v3773 = ((void *)0);
for (;;) {
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3763))).f_a, &F.v3773, yr1416_ParseRep());
if ((!yr1305_Accept(v576))) {
goto yl_3785;
}
}
yl_3785: ;
yr1316_Expect(v363);
((*(yR95 *)rt_nil_check(F.v3763))).f_b = yr1416_ParseRep();
yr1316_Expect(v567);
{ void * rv3786 = F.v3763;
return rv3786; }
}
if ((F.v3775 == v402)) {
F.v3763 = yr1245_NewNode(v654, F.v3777);
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3763))).f_a = yr1431_ParseFieldGroups();
if (yr1305_Accept(v420)) {
F.v3765 = yr1245_NewNode(v678, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3765))).f_name = yr1322_Ident();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3765))).f_b = yr1416_ParseRep();
F.v3769 = ((void *)0);
while (yr1305_Accept(v237)) {
F.v3767 = yr1245_NewNode(v681, yr1276_TLn());
F.v3773 = ((void *)0);
for (;;) {
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3767))).f_a, &F.v3773, yr1513_ParseExpr());
if ((!yr1305_Accept(v576))) {
goto yl_3787;
}
}
yl_3787: ;
yr1316_Expect(v504);
((*(yR95 *)rt_nil_check(F.v3767))).f_b = yr1431_ParseFieldGroups();
while (yr1305_Accept(v579)) {
}
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3765))).f_a, &F.v3769, F.v3767);
}
yr1316_Expect(v291);
if (yr1305_Accept(v579)) {
}
((*(yR95 *)rt_nil_check(F.v3763))).f_b = F.v3765;
}
yr1316_Expect(v288);
{ void * rv3788 = F.v3763;
return rv3788; }
}
if (((((F.v3775 == v312)) || ((F.v3775 == v381))) || ((F.v3775 == v423)))) {
if ((F.v3775 == v312)) {
F.v3763 = yr1245_NewNode(v657, F.v3777);
} else if ((F.v3775 == v381)) {
F.v3763 = yr1245_NewNode(v660, F.v3777);
} else {
F.v3763 = yr1245_NewNode(v663, F.v3777);
}
yr1300_Skip();
yr1316_Expect(v564);
((*(yR95 *)rt_nil_check(F.v3763))).f_a = yr1416_ParseRep();
yr1316_Expect(v567);
{ void * rv3789 = F.v3763;
return rv3789; }
}
yr1124_FailS(F.v3777, y_str("expected a representation", 25));
{ void * rv3791 = ((void *)0);
return rv3791; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1441_ParseQualifier(void) {
struct yf1442 F;
memset((void *)&F, 0, sizeof F);
if ((!yr1288_Is(v570))) {
{ void * rv3795 = ((void *)0);
return rv3795; }
}
F.v3794 = yr1245_NewNode(v672, yr1276_TLn());
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3794))).f_a = yr1513_ParseExpr();
yr1316_Expect(v507);
((*(yR95 *)rt_nil_check(F.v3794))).f_b = yr1513_ParseExpr();
yr1316_Expect(v573);
if (yr1305_Accept(v417)) {
((*(yR95 *)rt_nil_check(F.v3794))).f_c = yr1518_ParseSimple();
} else if (yr1305_Accept(v384)) {
((*(yR95 *)rt_nil_check(F.v3794))).f_d = yr1518_ParseSimple();
}
{ void * rv3796 = F.v3794;
return rv3796; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1446_IsStop(void) {
struct yf1447 F;
memset((void *)&F, 0, sizeof F);
if ((yr1266_TK() == v174)) {
{ rt_int rv3801 = 1;
return rv3801; }
}
if ((!(yr1266_TK() == v180))) {
{ rt_int rv3803 = 0;
return rv3803; }
}
F.v3799 = yr1271_TV();
{ rt_int rv3804 = ((((((((((((((((F.v3799 == v255)) || ((F.v3799 == v252))) || ((F.v3799 == v270))) || ((F.v3799 == v237))) || ((F.v3799 == v291))) || ((F.v3799 == v297))) || ((F.v3799 == v264))) || ((F.v3799 == v273))) || ((F.v3799 == v258))) || ((F.v3799 == v261))) || ((F.v3799 == v282))) || ((F.v3799 == v267))) || ((F.v3799 == v285))) || ((F.v3799 == v276))) || ((F.v3799 == v279)));
return rv3804; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1451_ParseStatements(rt_int a_p1452) {
struct yf1453 F;
memset((void *)&F, 0, sizeof F);
F.p1452 = a_p1452;
F.v3808 = ((void *)0);
F.v3810 = ((void *)0);
F.v3812 = ((void *)0);
for (;;) {
while (yr1305_Accept(v579)) {
}
if (yr1446_IsStop()) {
goto yl_3815;
}
F.v3814 = INT64_C(0);
if (((F.p1452 && yr1294_IsIdAt(INT64_C(0))) && yr1281_IsAt(INT64_C(1), v582))) {
F.v3814 = yr1322_Ident();
yr1300_Skip();
}
F.v3812 = yr1457_ParseStatement();
((*(yR95 *)rt_nil_check(F.v3812))).f_text = F.v3814;
yr1252_Link(&F.v3808, &F.v3810, F.v3812);
if ((!yr1288_Is(v579))) {
goto yl_3815;
}
}
yl_3815: ;
{ void * rv3819 = F.v3808;
return rv3819; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1457_ParseStatement(void) {
struct yf1458 F;
memset((void *)&F, 0, sizeof F);
F.v3836 = yr1276_TLn();
if ((yr1266_TK() == v180)) {
F.v3834 = yr1271_TV();
if ((F.v3834 == v216)) {
yr1300_Skip();
F.v3822 = yr1245_NewNode(v690, F.v3836);
((*(yR95 *)rt_nil_check(F.v3822))).f_a = yr1513_ParseExpr();
{ void * rv3837 = F.v3822;
return rv3837; }
}
if ((F.v3834 == v321)) {
yr1300_Skip();
F.v3822 = yr1245_NewNode(v693, F.v3836);
((*(yR95 *)rt_nil_check(F.v3822))).f_name = yr1322_Ident();
{ void * rv3838 = F.v3822;
return rv3838; }
}
if ((F.v3834 == v303)) {
yr1300_Skip();
F.v3822 = yr1245_NewNode(v696, F.v3836);
((*(yR95 *)rt_nil_check(F.v3822))).f_name = yr1322_Ident();
{ void * rv3839 = F.v3822;
return rv3839; }
}
if ((F.v3834 == v411)) {
yr1300_Skip();
F.v3822 = yr1245_NewNode(v699, F.v3836);
if ((!((yr1288_Is(v579) || yr1446_IsStop())))) {
((*(yR95 *)rt_nil_check(F.v3822))).f_a = yr1513_ParseExpr();
}
{ void * rv3840 = F.v3822;
return rv3840; }
}
if ((F.v3834 == v438)) {
yr1300_Skip();
{ void * rv3841 = yr1245_NewNode(v702, F.v3836);
return rv3841; }
}
if ((F.v3834 == v396)) {
yr1300_Skip();
F.v3822 = yr1245_NewNode(v705, F.v3836);
if (yr1294_IsIdAt(INT64_C(0))) {
((*(yR95 *)rt_nil_check(F.v3822))).f_name = yr1322_Ident();
}
{ void * rv3843 = F.v3822;
return rv3843; }
}
if ((F.v3834 == v324)) {
yr1300_Skip();
F.v3822 = yr1245_NewNode(v708, F.v3836);
F.v3826 = ((void *)0);
F.v3824 = yr1245_NewNode(v726, F.v3836);
((*(yR95 *)rt_nil_check(F.v3824))).f_a = yr1513_ParseExpr();
yr1316_Expect(v441);
((*(yR95 *)rt_nil_check(F.v3824))).f_b = yr1451_ParseStatements(0);
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3822))).f_a, &F.v3826, F.v3824);
while (yr1288_Is(v255)) {
F.v3824 = yr1245_NewNode(v726, yr1276_TLn());
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3824))).f_a = yr1513_ParseExpr();
yr1316_Expect(v441);
((*(yR95 *)rt_nil_check(F.v3824))).f_b = yr1451_ParseStatements(0);
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3822))).f_a, &F.v3826, F.v3824);
}
if (yr1305_Accept(v252)) {
((*(yR95 *)rt_nil_check(F.v3822))).f_flag = INT64_C(1);
((*(yR95 *)rt_nil_check(F.v3822))).f_b = yr1451_ParseStatements(0);
}
yr1316_Expect(v270);
{ void * rv3848 = F.v3822;
return rv3848; }
}
if ((F.v3834 == v420)) {
yr1300_Skip();
F.v3822 = yr1245_NewNode(v711, F.v3836);
((*(yR95 *)rt_nil_check(F.v3822))).f_a = yr1513_ParseExpr();
F.v3826 = ((void *)0);
while (yr1288_Is(v237)) {
F.v3824 = yr1245_NewNode(v726, yr1276_TLn());
yr1300_Skip();
F.v3830 = ((void *)0);
for (;;) {
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3824))).f_a, &F.v3830, yr1513_ParseExpr());
if ((!yr1305_Accept(v576))) {
goto yl_3849;
}
}
yl_3849: ;
yr1316_Expect(v504);
((*(yR95 *)rt_nil_check(F.v3824))).f_b = yr1451_ParseStatements(0);
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3822))).f_b, &F.v3826, F.v3824);
}
if (yr1305_Accept(v252)) {
((*(yR95 *)rt_nil_check(F.v3822))).f_flag = INT64_C(1);
((*(yR95 *)rt_nil_check(F.v3822))).f_c = yr1451_ParseStatements(0);
}
yr1316_Expect(v291);
{ void * rv3853 = F.v3822;
return rv3853; }
}
if ((F.v3834 == v456)) {
yr1300_Skip();
F.v3822 = yr1245_NewNode(v714, F.v3836);
((*(yR95 *)rt_nil_check(F.v3822))).f_a = yr1513_ParseExpr();
yr1316_Expect(v249);
((*(yR95 *)rt_nil_check(F.v3822))).f_b = yr1451_ParseStatements(0);
yr1316_Expect(v297);
{ void * rv3855 = F.v3822;
return rv3855; }
}
if ((F.v3834 == v315)) {
yr1300_Skip();
F.v3822 = yr1245_NewNode(v717, F.v3836);
((*(yR95 *)rt_nil_check(F.v3822))).f_name = yr1322_Ident();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3822))).f_a = yr1416_ParseRep();
yr1316_Expect(v249);
((*(yR95 *)rt_nil_check(F.v3822))).f_b = yr1451_ParseStatements(0);
yr1316_Expect(v264);
{ void * rv3857 = F.v3822;
return rv3857; }
}
if ((F.v3834 == v345)) {
yr1300_Skip();
F.v3822 = yr1245_NewNode(v720, F.v3836);
((*(yR95 *)rt_nil_check(F.v3822))).f_name = yr1322_Ident();
((*(yR95 *)rt_nil_check(F.v3822))).f_b = yr1451_ParseStatements(0);
yr1316_Expect(v273);
yr1327_CloseName(((*(yR95 *)rt_nil_check(F.v3822))).f_name, F.v3836);
{ void * rv3859 = F.v3822;
return rv3859; }
}
if ((((F.v3834 == v234)) || ((F.v3834 == v426)))) {
F.v3822 = yr1245_NewNode(v723, F.v3836);
if (yr1305_Accept(v426)) {
((*(yR95 *)rt_nil_check(F.v3822))).f_flag = INT64_C(1);
}
yr1316_Expect(v234);
((*(yR95 *)rt_nil_check(F.v3822))).f_a = yr1360_ParseBlock();
yr1316_Expect(v258);
{ void * rv3861 = F.v3822;
return rv3861; }
}
}
F.v3832 = yr1544_ParseDesignator();
if (yr1305_Accept(v501)) {
F.v3822 = yr1245_NewNode(v684, F.v3836);
((*(yR95 *)rt_nil_check(F.v3822))).f_a = F.v3832;
((*(yR95 *)rt_nil_check(F.v3822))).f_b = yr1513_ParseExpr();
{ void * rv3862 = F.v3822;
return rv3862; }
}
if ((!(((*(yR95 *)rt_nil_check(F.v3832))).f_kind == v750))) {
yr1124_FailS(F.v3836, y_str("expected a statement", 20));
}
F.v3822 = yr1245_NewNode(v687, F.v3836);
((*(yR95 *)rt_nil_check(F.v3822))).f_a = F.v3832;
{ void * rv3864 = F.v3822;
return rv3864; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1462_OpAt(void) {
struct yf1463 F;
memset((void *)&F, 0, sizeof F);
if ((((yr1266_TK() == v183)) || ((yr1266_TK() == v180)))) {
{ rt_int rv3866 = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
return rv3866; }
}
{ rt_int rv3868 = INT64_C(0);
return rv3868; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1467_IsRel(rt_int a_p1468) {
struct yf1469 F;
memset((void *)&F, 0, sizeof F);
F.p1468 = a_p1468;
{ rt_int rv3871 = ((((((((((((((((((((F.p1468 == v330)) || ((F.p1468 == v540))) || ((F.p1468 == v555))) || ((F.p1468 == v558))) || ((F.p1468 == v510))) || ((F.p1468 == v561))) || ((F.p1468 == v513))) || ((F.p1468 == v516))) || ((F.p1468 == v471))) || ((F.p1468 == v519))) || ((F.p1468 == v474))) || ((F.p1468 == v522))) || ((F.p1468 == v483))) || ((F.p1468 == v477))) || ((F.p1468 == v465))) || ((F.p1468 == v525))) || ((F.p1468 == v486))) || ((F.p1468 == v480))) || ((F.p1468 == v468)));
return rv3871; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1473_IsAssocMul(rt_int a_p1474) {
struct yf1475 F;
memset((void *)&F, 0, sizeof F);
F.p1474 = a_p1474;
{ rt_int rv3874 = (((F.p1474 == v549)) || ((F.p1474 == v207)));
return rv3874; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1479_IsNonAssocMul(rt_int a_p1480) {
struct yf1481 F;
memset((void *)&F, 0, sizeof F);
F.p1480 = a_p1480;
{ rt_int rv3877 = ((((((((F.p1480 == v552)) || ((F.p1480 == v246))) || ((F.p1480 == v348))) || ((F.p1480 == v528))) || ((F.p1480 == v489))) || ((F.p1480 == v531))) || ((F.p1480 == v492)));
return rv3877; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1485_IsAssocAdd(rt_int a_p1486) {
struct yf1487 F;
memset((void *)&F, 0, sizeof F);
F.p1486 = a_p1486;
{ rt_int rv3880 = (((F.p1486 == v543)) || ((F.p1486 == v369)));
return rv3880; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1491_IsNonAssocAdd(rt_int a_p1492) {
struct yf1493 F;
memset((void *)&F, 0, sizeof F);
F.p1492 = a_p1492;
{ rt_int rv3883 = (((((((F.p1492 == v546)) || ((F.p1492 == v459))) || ((F.p1492 == v534))) || ((F.p1492 == v495))) || ((F.p1492 == v537))) || ((F.p1492 == v498)));
return rv3883; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1497_Bin(rt_int a_p1498, void * a_p1499, void * a_p1500, rt_int a_p1501) {
struct yf1502 F;
memset((void *)&F, 0, sizeof F);
F.p1498 = a_p1498;
F.p1499 = a_p1499;
F.p1500 = a_p1500;
F.p1501 = a_p1501;
F.v3890 = yr1245_NewNode(v768, F.p1501);
((*(yR95 *)rt_nil_check(F.v3890))).f_name = F.p1498;
((*(yR95 *)rt_nil_check(F.v3890))).f_a = F.p1499;
((*(yR95 *)rt_nil_check(F.v3890))).f_b = F.p1500;
{ void * rv3891 = F.v3890;
return rv3891; }
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
F.v3896 = yr1016_SE();
yr1117_Fail(F.p1508, F.v3896);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1513_ParseExpr(void) {
struct yf1514 F;
memset((void *)&F, 0, sizeof F);
F.v3904 = yr1276_TLn();
F.v3900 = yr1518_ParseSimple();
F.v3902 = yr1462_OpAt();
if (yr1467_IsRel(F.v3902)) {
yr1300_Skip();
F.v3900 = yr1497_Bin(F.v3902, F.v3900, yr1518_ParseSimple(), F.v3904);
if (yr1467_IsRel(yr1462_OpAt())) {
yr1506_NeedParens(F.v3902, F.v3904);
}
}
{ void * rv3905 = F.v3900;
return rv3905; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1518_ParseSimple(void) {
struct yf1519 F;
memset((void *)&F, 0, sizeof F);
F.v3914 = yr1276_TLn();
if (yr1288_Is(v546)) {
yr1300_Skip();
F.v3910 = yr1245_NewNode(v765, F.v3914);
((*(yR95 *)rt_nil_check(F.v3910))).f_a = yr1523_ParseTerm();
F.v3912 = yr1462_OpAt();
if ((yr1485_IsAssocAdd(F.v3912) || yr1491_IsNonAssocAdd(F.v3912))) {
yr1506_NeedParens(rt_range(v546, INT64_C(0), INT64_C(4000000)), F.v3914);
}
{ void * rv3915 = F.v3910;
return rv3915; }
}
F.v3908 = yr1523_ParseTerm();
F.v3912 = yr1462_OpAt();
if (yr1491_IsNonAssocAdd(F.v3912)) {
yr1300_Skip();
F.v3908 = yr1497_Bin(F.v3912, F.v3908, yr1523_ParseTerm(), F.v3914);
if ((yr1485_IsAssocAdd(yr1462_OpAt()) || yr1491_IsNonAssocAdd(yr1462_OpAt()))) {
yr1506_NeedParens(F.v3912, F.v3914);
}
{ void * rv3916 = F.v3908;
return rv3916; }
}
while (yr1485_IsAssocAdd(F.v3912)) {
yr1300_Skip();
F.v3908 = yr1497_Bin(F.v3912, F.v3908, yr1523_ParseTerm(), F.v3914);
if (yr1491_IsNonAssocAdd(yr1462_OpAt())) {
yr1506_NeedParens(yr1462_OpAt(), F.v3914);
}
F.v3912 = yr1462_OpAt();
}
{ void * rv3917 = F.v3908;
return rv3917; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1523_ParseTerm(void) {
struct yf1524 F;
memset((void *)&F, 0, sizeof F);
F.v3924 = yr1276_TLn();
F.v3920 = yr1539_ParseFactor();
F.v3922 = yr1462_OpAt();
if (yr1479_IsNonAssocMul(F.v3922)) {
yr1300_Skip();
F.v3920 = yr1497_Bin(F.v3922, F.v3920, yr1539_ParseFactor(), F.v3924);
if ((yr1473_IsAssocMul(yr1462_OpAt()) || yr1479_IsNonAssocMul(yr1462_OpAt()))) {
yr1506_NeedParens(F.v3922, F.v3924);
}
{ void * rv3925 = F.v3920;
return rv3925; }
}
while (yr1473_IsAssocMul(F.v3922)) {
yr1300_Skip();
F.v3920 = yr1497_Bin(F.v3922, F.v3920, yr1539_ParseFactor(), F.v3924);
if (yr1479_IsNonAssocMul(yr1462_OpAt())) {
yr1506_NeedParens(yr1462_OpAt(), F.v3924);
}
F.v3922 = yr1462_OpAt();
}
{ void * rv3926 = F.v3920;
return rv3926; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1528_IsLiteralAt(rt_int a_p1529) {
struct yf1530 F;
memset((void *)&F, 0, sizeof F);
F.p1529 = a_p1529;
F.v3930 = ((rt_int *)(v1153).p)[y_ix1(v1153, rt_add(v1234, F.p1529))];
{ rt_int rv3932 = (((((((F.v3930 == v186)) || ((F.v3930 == v189))) || ((F.v3930 == v192))) || ((F.v3930 == v195))) || ((F.v3930 == v198))) || yr1281_IsAt(F.p1529, v357));
return rv3932; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1534_ParseLiteral(void) {
struct yf1535 F;
memset((void *)&F, 0, sizeof F);
F.v3937 = yr1266_TK();
F.v3939 = yr1276_TLn();
if ((F.v3937 == v186)) {
F.v3935 = yr1245_NewNode(v729, F.v3939);
((*(yR95 *)rt_nil_check(F.v3935))).f_ival = yr1271_TV();
} else if ((F.v3937 == v189)) {
F.v3935 = yr1245_NewNode(v732, F.v3939);
((*(yR95 *)rt_nil_check(F.v3935))).f_text = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v3937 == v192)) {
F.v3935 = yr1245_NewNode(v735, F.v3939);
((*(yR95 *)rt_nil_check(F.v3935))).f_text = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v3937 == v195)) {
F.v3935 = yr1245_NewNode(v738, F.v3939);
((*(yR95 *)rt_nil_check(F.v3935))).f_text = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v3937 == v198)) {
F.v3935 = yr1245_NewNode(v741, F.v3939);
((*(yR95 *)rt_nil_check(F.v3935))).f_text = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
} else {
F.v3935 = yr1245_NewNode(v744, F.v3939);
}
yr1300_Skip();
{ void * rv3940 = F.v3935;
return rv3940; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1539_ParseFactor(void) {
struct yf1540 F;
memset((void *)&F, 0, sizeof F);
F.v3947 = yr1276_TLn();
if (yr1288_Is(v360)) {
yr1300_Skip();
F.v3943 = yr1245_NewNode(v762, F.v3947);
((*(yR95 *)rt_nil_check(F.v3943))).f_a = yr1539_ParseFactor();
{ void * rv3948 = F.v3943;
return rv3948; }
}
if (yr1288_Is(v564)) {
yr1300_Skip();
F.v3943 = yr1245_NewNode(v771, F.v3947);
((*(yR95 *)rt_nil_check(F.v3943))).f_a = yr1513_ParseExpr();
yr1316_Expect(v567);
{ void * rv3949 = F.v3943;
return rv3949; }
}
if (yr1528_IsLiteralAt(INT64_C(0))) {
{ void * rv3951 = yr1534_ParseLiteral();
return rv3951; }
}
if (yr1294_IsIdAt(INT64_C(0))) {
if ((yr1528_IsLiteralAt(INT64_C(1)) || ((yr1294_IsIdAt(INT64_C(1)) && (!((((((yr1281_IsAt(INT64_C(2), v564) || yr1281_IsAt(INT64_C(2), v570)) || yr1281_IsAt(INT64_C(2), v585)) || yr1281_IsAt(INT64_C(2), v588)) || yr1281_IsAt(INT64_C(2), v501)) || yr1281_IsAt(INT64_C(2), v582)))))))) {
F.v3945 = yr1322_Ident();
if (yr1294_IsIdAt(INT64_C(0))) {
F.v3943 = yr1245_NewNode(v747, F.v3947);
((*(yR95 *)rt_nil_check(F.v3943))).f_name = yr1322_Ident();
} else {
F.v3943 = yr1534_ParseLiteral();
}
((*(yR95 *)rt_nil_check(F.v3943))).f_d = yr1245_NewNode(v639, F.v3947);
((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v3943))).f_d))).f_name = F.v3945;
{ void * rv3962 = F.v3943;
return rv3962; }
}
{ void * rv3963 = yr1544_ParseDesignator();
return rv3963; }
}
yr1132_FailN(F.v3947, yr1311_TokText(), y_str(" cannot begin an operand", 24));
{ void * rv3965 = ((void *)0);
return rv3965; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1544_ParseDesignator(void) {
struct yf1545 F;
memset((void *)&F, 0, sizeof F);
F.v3974 = yr1276_TLn();
F.v3968 = yr1245_NewNode(v747, F.v3974);
((*(yR95 *)rt_nil_check(F.v3968))).f_name = yr1322_Ident();
if (yr1305_Accept(v564)) {
((*(yR95 *)rt_nil_check(F.v3968))).f_kind = v750;
F.v3972 = ((void *)0);
while ((!yr1288_Is(v567))) {
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3968))).f_a, &F.v3972, yr1513_ParseExpr());
if ((!yr1305_Accept(v576))) {
yr1549_EXIT_ARGS();
}
}
yr1316_Expect(v567);
}
for (;;) {
if (yr1305_Accept(v585)) {
F.v3970 = yr1245_NewNode(v753, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3970))).f_a = F.v3968;
((*(yR95 *)rt_nil_check(F.v3970))).f_name = yr1322_Ident();
F.v3968 = F.v3970;
} else if (yr1305_Accept(v570)) {
F.v3970 = yr1245_NewNode(v756, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3970))).f_a = F.v3968;
F.v3972 = ((void *)0);
for (;;) {
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3970))).f_b, &F.v3972, yr1513_ParseExpr());
if ((!yr1305_Accept(v576))) {
goto yl_3976;
}
}
yl_3976: ;
yr1316_Expect(v573);
F.v3968 = F.v3970;
} else if (yr1305_Accept(v588)) {
F.v3970 = yr1245_NewNode(v759, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3970))).f_a = F.v3968;
F.v3968 = F.v3970;
} else {
goto yl_3975;
}
}
yl_3975: ;
{ void * rv3977 = F.v3968;
return rv3977; }
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
F.v3981 = ((void *)0);
F.v3983 = ((void *)0);
while ((!(yr1266_TK() == v174))) {
if ((!((yr1288_Is(v351) || yr1288_Is(v354))))) {
yr1124_FailS(yr1276_TLn(), y_str("a segment is a module (XIII.A)", 30));
}
yr1252_Link(&F.v3981, &F.v3983, yr1350_ParseModule());
while (yr1305_Accept(v579)) {
}
}
{ void * rv3985 = F.v3981;
return rv3985; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1588_NewSym(rt_int a_p1589, rt_int a_p1590) {
struct yf1591 F;
memset((void *)&F, 0, sizeof F);
F.p1589 = a_p1589;
F.p1590 = a_p1590;
({ F.v3990 = rt_alloc(sizeof(yR115)); });
(*(yR115 *)rt_nil_check(F.v3990)) = ((yR115){ .f_kind = F.p1589, .f_name = F.p1590, .f_rep = ((void *)0), .f_cname = INT64_C(0), .f_level = INT64_C(0), .f_byref = 0, .f_readonly = 0, .f_mval = INT64_C(0), .f_hasmv = 0, .f_params = ((void *)0), .f_nparams = INT64_C(0), .f_ret = ((void *)0), .f_func = 0, .f_decl = ((void *)0), .f_depth = INT64_C(0), .f_target = ((void *)0), .f_members = ((void *)0), .f_mnext = ((void *)0), .f_chain = ((void *)0), .f_stack = ((void *)0), .f_alt = ((void *)0), .f_monitor = ((void *)0), .f_serial = INT64_C(0) });
((*(yR115 *)rt_nil_check(F.v3990))).f_serial = yr1141_NewSerial();
{ void * rv4001 = F.v3990;
return rv4001; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1595_OpenScope(rt_int a_p1596) {
struct yf1597 F;
memset((void *)&F, 0, sizeof F);
F.p1596 = a_p1596;
({ F.v4005 = rt_alloc(sizeof(yR120)); });
(*(yR120 *)rt_nil_check(F.v4005)) = ((yR120){ .f_syms = ((void *)0), .f_closed = F.p1596, .f_module = ((void *)0), .f_level = v1576, .f_deferred = ((void *)0), .f_up = ((void *)0) });
if ((v1570 >= INT64_C(0))) {
((*(yR120 *)rt_nil_check(F.v4005))).f_up = ((void * *)(v1568).p)[y_ix1(v1568, v1570)];
}
v1570 = rt_range(rt_add(v1570, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1568).p)[y_ix1(v1568, v1570)] = F.v4005;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1601_CloseScope(void) {
struct yf1602 F;
memset((void *)&F, 0, sizeof F);
F.v4011 = ((*(yR120 *)rt_nil_check(((void * *)(v1568).p)[y_ix1(v1568, v1570)]))).f_syms;
while ((!(F.v4011 == ((void *)0)))) {
F.v4017 = rt_range(rt_mod(((*(yR115 *)rt_nil_check(F.v4011))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4013 = ((void * *)(v1559).p)[y_ix1(v1559, F.v4017)];
F.v4015 = ((void *)0);
while ((((!(F.v4013 == ((void *)0)))) && ((!(F.v4013 == F.v4011))))) {
F.v4015 = F.v4013;
F.v4013 = ((*(yR115 *)rt_nil_check(F.v4013))).f_chain;
}
if ((F.v4013 == F.v4011)) {
if ((F.v4015 == ((void *)0))) {
((void * *)(v1559).p)[y_ix1(v1559, F.v4017)] = ((*(yR115 *)rt_nil_check(F.v4011))).f_chain;
} else {
((*(yR115 *)rt_nil_check(F.v4015))).f_chain = ((*(yR115 *)rt_nil_check(F.v4011))).f_chain;
}
}
F.v4011 = ((*(yR115 *)rt_nil_check(F.v4011))).f_stack;
}
v1570 = rt_range(rt_sub(v1570, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1606_Visible(void * a_p1607) {
struct yf1608 F;
memset((void *)&F, 0, sizeof F);
F.p1607 = a_p1607;
{ rt_int rv4025 = (((((*(yR115 *)rt_nil_check(F.p1607))).f_depth >= v1573)) || ((((*(yR115 *)rt_nil_check(F.p1607))).f_depth == INT64_C(0))));
return rv4025; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1612_Find(rt_int a_p1613) {
struct yf1614 F;
memset((void *)&F, 0, sizeof F);
F.p1613 = a_p1613;
F.v4029 = ((void * *)(v1559).p)[y_ix1(v1559, rt_mod(F.p1613, INT64_C(8192)))];
while ((!(F.v4029 == ((void *)0)))) {
if ((((((*(yR115 *)rt_nil_check(F.v4029))).f_name == F.p1613)) && yr1606_Visible(F.v4029))) {
{ void * rv4032 = F.v4029;
return rv4032; }
}
F.v4029 = ((*(yR115 *)rt_nil_check(F.v4029))).f_chain;
}
{ void * rv4033 = ((void *)0);
return rv4033; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1618_FindHere(rt_int a_p1619) {
struct yf1620 F;
memset((void *)&F, 0, sizeof F);
F.p1619 = a_p1619;
F.v4037 = ((void * *)(v1559).p)[y_ix1(v1559, rt_mod(F.p1619, INT64_C(8192)))];
while ((!(F.v4037 == ((void *)0)))) {
if ((((((*(yR115 *)rt_nil_check(F.v4037))).f_name == F.p1619)) && ((((*(yR115 *)rt_nil_check(F.v4037))).f_depth == v1570)))) {
{ void * rv4040 = F.v4037;
return rv4040; }
}
F.v4037 = ((*(yR115 *)rt_nil_check(F.v4037))).f_chain;
}
{ void * rv4041 = ((void *)0);
return rv4041; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1624_Lookup(rt_int a_p1625, rt_int a_p1626) {
struct yf1627 F;
memset((void *)&F, 0, sizeof F);
F.p1625 = a_p1625;
F.p1626 = a_p1626;
F.v4046 = yr1612_Find(F.p1625);
if ((F.v4046 == ((void *)0))) {
yr1132_FailN(F.p1626, F.p1625, y_str(" is not declared here", 21));
}
if ((((*(yR115 *)rt_nil_check(F.v4046))).f_kind == v864)) {
F.v4048 = ((*(yR115 *)rt_nil_check(F.v4046))).f_chain;
while ((!(F.v4048 == ((void *)0)))) {
if (((((((((*(yR115 *)rt_nil_check(F.v4048))).f_name == F.p1625)) && ((((*(yR115 *)rt_nil_check(F.v4048))).f_depth == ((*(yR115 *)rt_nil_check(F.v4046))).f_depth))) && ((((*(yR115 *)rt_nil_check(F.v4048))).f_kind == v864))) && ((!(yr1677_Real(F.v4048) == yr1677_Real(F.v4046))))) && ((!(((*(yR115 *)rt_nil_check(yr1677_Real(F.v4046)))).f_kind == v843))))) {
yr1132_FailN(F.p1626, F.p1625, y_str(" is exported here by two modules: name it with FROM (X.B.4)", 59));
}
F.v4048 = ((*(yR115 *)rt_nil_check(F.v4048))).f_chain;
}
}
{ void * rv4051 = F.v4046;
return rv4051; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1631_Ambiguous(void * a_p1632) {
struct yf1633 F;
memset((void *)&F, 0, sizeof F);
F.p1632 = a_p1632;
F.v4055 = ((*(yR115 *)rt_nil_check(F.p1632))).f_chain;
while ((!(F.v4055 == ((void *)0)))) {
if ((((((((*(yR115 *)rt_nil_check(F.v4055))).f_name == ((*(yR115 *)rt_nil_check(F.p1632))).f_name)) && yr1606_Visible(F.v4055)) && ((((*(yR115 *)rt_nil_check(F.v4055))).f_kind == v843))) && ((!(((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4055))).f_rep))).f_tid == ((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.p1632))).f_rep))).f_tid))))) {
{ rt_int rv4057 = 1;
return rv4057; }
}
F.v4055 = ((*(yR115 *)rt_nil_check(F.v4055))).f_chain;
}
{ rt_int rv4059 = 0;
return rv4059; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1637_FindLit(rt_int a_p1638, void * a_p1639) {
struct yf1640 F;
memset((void *)&F, 0, sizeof F);
F.p1638 = a_p1638;
F.p1639 = a_p1639;
F.v4064 = ((void * *)(v1559).p)[y_ix1(v1559, rt_mod(F.p1638, INT64_C(8192)))];
while ((!(F.v4064 == ((void *)0)))) {
if ((((*(yR115 *)rt_nil_check(F.v4064))).f_name == F.p1638)) {
if ((((((*(yR115 *)rt_nil_check(yr1677_Real(F.v4064)))).f_kind == v843)) && ((((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(yr1677_Real(F.v4064)))).f_rep))).f_tid == ((*(yR100 *)rt_nil_check(F.p1639))).f_tid)))) {
{ void * rv4067 = F.v4064;
return rv4067; }
}
}
F.v4064 = ((*(yR115 *)rt_nil_check(F.v4064))).f_chain;
}
{ void * rv4068 = ((void *)0);
return rv4068; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1644_Define(void * a_p1645, rt_int a_p1646) {
struct yf1647 F;
memset((void *)&F, 0, sizeof F);
F.p1645 = a_p1645;
F.p1646 = a_p1646;
F.v4073 = yr1618_FindHere(((*(yR115 *)rt_nil_check(F.p1645))).f_name);
F.v4075 = rt_range(rt_mod(((*(yR115 *)rt_nil_check(F.p1645))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((((!(F.v4073 == ((void *)0)))) && (!((((((*(yR115 *)rt_nil_check(F.v4073))).f_kind == v843)) && ((((*(yR115 *)rt_nil_check(F.p1645))).f_kind == v843)))))) && (!(((((((*(yR115 *)rt_nil_check(F.p1645))).f_kind == v846)) && ((!(((*(yR115 *)rt_nil_check(F.p1645))).f_alt == ((void *)0))))) && ((((*(yR115 *)rt_nil_check(F.p1645))).f_alt == yr1677_Real(F.v4073))))))) && (!((((((*(yR115 *)rt_nil_check(F.p1645))).f_kind == v864)) && ((((*(yR115 *)rt_nil_check(F.v4073))).f_kind == v864))))))) {
yr1132_FailN(F.p1646, ((*(yR115 *)rt_nil_check(F.p1645))).f_name, y_str(" is declared twice in this scope", 32));
}
((*(yR115 *)rt_nil_check(F.p1645))).f_depth = v1570;
((*(yR115 *)rt_nil_check(F.p1645))).f_chain = ((void * *)(v1559).p)[y_ix1(v1559, F.v4075)];
((void * *)(v1559).p)[y_ix1(v1559, F.v4075)] = F.p1645;
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
F.v4083 = rt_range(rt_sub(v1576, F.p1652), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.p1652 == INT64_C(0))) {
{ rt_int rv4086 = F.p1653;
return rv4086; }
}
yr986_SB();
if ((F.v4083 == INT64_C(0))) {
yr997_SA(y_str("F.", 2));
} else {
yr997_SA(y_str("F.up->", 6));
while ((F.v4083 > INT64_C(1))) {
yr997_SA(y_str("up->", 4));
F.v4083 = rt_range(rt_sub(F.v4083, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1004_ST(F.p1653);
{ rt_int rv4094 = yr1016_SE();
return rv4094; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1658_FramePtr(rt_int a_p1659) {
struct yf1660 F;
memset((void *)&F, 0, sizeof F);
F.p1659 = a_p1659;
F.v4098 = rt_range(rt_sub(v1576, F.p1659), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.v4098 == INT64_C(0))) {
{ rt_int rv4102 = yr1021_T(y_str("&F", 2));
return rv4102; }
}
yr986_SB();
yr997_SA(y_str("F.up", 4));
while ((F.v4098 > INT64_C(1))) {
yr997_SA(y_str("->up", 4));
F.v4098 = rt_range(rt_sub(F.v4098, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv4108 = yr1016_SE();
return rv4108; }
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
F.v4113 = yr1016_SE();
if ((v1576 == INT64_C(0))) {
yr1070_Put(&v948, F.v4113);
} else {
yr1070_Put(&v958, F.v4113);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1671_SymPath(void * a_p1672) {
struct yf1673 F;
memset((void *)&F, 0, sizeof F);
F.p1672 = a_p1672;
F.v4122 = yr1651_Path(((*(yR115 *)rt_nil_check(F.p1672))).f_level, ((*(yR115 *)rt_nil_check(F.p1672))).f_cname);
if (((*(yR115 *)rt_nil_check(F.p1672))).f_byref) {
yr986_SB();
yr997_SA(y_str("(*", 2));
yr1004_ST(F.v4122);
yr997_SA(y_str(")", 1));
{ rt_int rv4125 = yr1016_SE();
return rv4125; }
}
{ rt_int rv4126 = F.v4122;
return rv4126; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1677_Real(void * a_p1678) {
struct yf1679 F;
memset((void *)&F, 0, sizeof F);
F.p1678 = a_p1678;
F.v4130 = F.p1678;
while ((((*(yR115 *)rt_nil_check(F.v4130))).f_kind == v864)) {
F.v4130 = ((*(yR115 *)rt_nil_check(F.v4130))).f_target;
}
{ void * rv4131 = F.v4130;
return rv4131; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1707_NewRep(rt_int a_p1708, rt_int a_p1709) {
struct yf1710 F;
memset((void *)&F, 0, sizeof F);
F.p1708 = a_p1708;
F.p1709 = a_p1709;
({ F.v4136 = rt_alloc(sizeof(yR100)); });
(*(yR100 *)rt_nil_check(F.v4136)) = ((yR100){ .f_kind = F.p1708, .f_tid = F.p1709, .f_tname = F.p1709, .f_lo = INT64_C(0), .f_hi = INT64_C(0), .f_mlo = INT64_C(0), .f_mhi = INT64_C(0), .f_hasm = 0, .f_scale = INT64_C(0), .f_prec = INT64_C(0), .f_elem = ((void *)0), .f_idx = ((void *)0), .f_nidx = INT64_C(0), .f_link = ((void *)0), .f_lits = ((void *)0), .f_nlits = INT64_C(0), .f_fields = ((void *)0), .f_selector = ((void *)0), .f_cname = INT64_C(0), .f_dname = INT64_C(0), .f_dlevel = INT64_C(0), .f_deep = 0, .f_abstract = 0, .f_opaque = 0, .f_opaqueops = INT64_C(0), .f_ordered = 0, .f_forward = INT64_C(0), .f_fwdscope = INT64_C(0), .f_monitor = ((void *)0), .f_serial = INT64_C(0) });
((*(yR100 *)rt_nil_check(F.v4136))).f_serial = yr1141_NewSerial();
{ void * rv4157 = F.v4136;
return rv4157; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1714_CopyRep(void * a_p1715) {
struct yf1716 F;
memset((void *)&F, 0, sizeof F);
F.p1715 = a_p1715;
({ F.v4161 = rt_alloc(sizeof(yR100)); });
(*(yR100 *)rt_nil_check(F.v4161)) = (*(yR100 *)rt_nil_check(F.p1715));
((*(yR100 *)rt_nil_check(F.v4161))).f_serial = yr1141_NewSerial();
{ void * rv4162 = F.v4161;
return rv4162; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1720_IsDiscrete(void * a_p1721) {
struct yf1722 F;
memset((void *)&F, 0, sizeof F);
F.p1721 = a_p1721;
{ rt_int rv4165 = (((((((*(yR100 *)rt_nil_check(F.p1721))).f_kind == v774)) || ((((*(yR100 *)rt_nil_check(F.p1721))).f_kind == v783))) || ((((*(yR100 *)rt_nil_check(F.p1721))).f_kind == v786))) || ((((*(yR100 *)rt_nil_check(F.p1721))).f_kind == v789)));
return rv4165; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1726_IsNumeric(void * a_p1727) {
struct yf1728 F;
memset((void *)&F, 0, sizeof F);
F.p1727 = a_p1727;
{ rt_int rv4168 = ((((((*(yR100 *)rt_nil_check(F.p1727))).f_kind == v774)) || ((((*(yR100 *)rt_nil_check(F.p1727))).f_kind == v777))) || ((((*(yR100 *)rt_nil_check(F.p1727))).f_kind == v780)));
return rv4168; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1732_IsArrayLike(void * a_p1733) {
struct yf1734 F;
memset((void *)&F, 0, sizeof F);
F.p1733 = a_p1733;
{ rt_int rv4171 = ((((((*(yR100 *)rt_nil_check(F.p1733))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.p1733))).f_kind == v813))) || ((((*(yR100 *)rt_nil_check(F.p1733))).f_kind == v816)));
return rv4171; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1738_IsString(void * a_p1739) {
struct yf1740 F;
memset((void *)&F, 0, sizeof F);
F.p1739 = a_p1739;
if ((((*(yR100 *)rt_nil_check(F.p1739))).f_kind == v816)) {
{ rt_int rv4175 = 1;
return rv4175; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1739))).f_kind == v792)) && ((((*(yR100 *)rt_nil_check(F.p1739))).f_nidx == INT64_C(1))))) {
{ rt_int rv4177 = (((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p1739))).f_elem))).f_kind == v789);
return rv4177; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1739))).f_kind == v813)) && ((((*(yR100 *)rt_nil_check(F.p1739))).f_nidx == INT64_C(1))))) {
{ rt_int rv4179 = (((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p1739))).f_elem))).f_kind == v789);
return rv4179; }
}
{ rt_int rv4181 = 0;
return rv4181; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1744_Deep(void * a_p1745) {
struct yf1746 F;
memset((void *)&F, 0, sizeof F);
F.p1745 = a_p1745;
if (((((((*(yR100 *)rt_nil_check(F.p1745))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.p1745))).f_kind == v813))) || ((((*(yR100 *)rt_nil_check(F.p1745))).f_kind == v816)))) {
{ rt_int rv4185 = 1;
return rv4185; }
}
{ rt_int rv4186 = (((((*(yR100 *)rt_nil_check(F.p1745))).f_kind == v795)) && ((*(yR100 *)rt_nil_check(F.p1745))).f_deep);
return rv4186; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1750_HoldsSignal(void * a_p1751) {
struct yf1752 F;
memset((void *)&F, 0, sizeof F);
F.p1751 = a_p1751;
if ((!(((*(yR100 *)rt_nil_check(F.p1751))).f_kind == v792))) {
{ rt_int rv4190 = 0;
return rv4190; }
}
if ((((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p1751))).f_elem))).f_kind == v807)) {
{ rt_int rv4192 = 1;
return rv4192; }
}
{ rt_int rv4193 = yr1750_HoldsSignal(((*(yR100 *)rt_nil_check(F.p1751))).f_elem);
return rv4193; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1756_CType(void * a_p1757) {
struct yf1758 F;
memset((void *)&F, 0, sizeof F);
F.p1757 = a_p1757;
F.v4197 = ((*(yR100 *)rt_nil_check(F.p1757))).f_kind;
if (((((F.v4197 == v774)) || ((F.v4197 == v783))) || ((F.v4197 == v786)))) {
{ rt_int rv4199 = yr1021_T(y_str("rt_int", 6));
return rv4199; }
}
if ((F.v4197 == v789)) {
{ rt_int rv4201 = yr1021_T(y_str("unsigned char", 13));
return rv4201; }
}
if ((((F.v4197 == v780)) || ((F.v4197 == v777)))) {
{ rt_int rv4203 = yr1021_T(y_str("double", 6));
return rv4203; }
}
if (((((F.v4197 == v792)) || ((F.v4197 == v813))) || ((F.v4197 == v816)))) {
{ rt_int rv4205 = yr1021_T(y_str("yarr", 4));
return rv4205; }
}
if ((F.v4197 == v795)) {
{ rt_int rv4206 = ((*(yR100 *)rt_nil_check(F.p1757))).f_cname;
return rv4206; }
}
if ((((F.v4197 == v798)) || ((F.v4197 == v819)))) {
{ rt_int rv4208 = yr1021_T(y_str("void *", 6));
return rv4208; }
}
if ((F.v4197 == v801)) {
{ rt_int rv4210 = yr1021_T(y_str("yfile *", 7));
return rv4210; }
}
if ((F.v4197 == v804)) {
{ rt_int rv4212 = yr1021_T(y_str("yset", 4));
return rv4212; }
}
if ((F.v4197 == v807)) {
{ rt_int rv4214 = yr1021_T(y_str("ysig", 4));
return rv4214; }
}
if ((F.v4197 == v810)) {
{ rt_int rv4216 = yr1021_T(y_str("rt_lock", 7));
return rv4216; }
}
{ rt_int rv4218 = yr1021_T(y_str("void", 4));
return rv4218; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1762_DescOf(void * a_p1763) {
struct yf1764 F;
memset((void *)&F, 0, sizeof F);
F.p1763 = a_p1763;
F.v4222 = ((*(yR100 *)rt_nil_check(F.p1763))).f_kind;
if (((((F.v4222 == v774)) || ((F.v4222 == v783))) || ((F.v4222 == v786)))) {
{ rt_int rv4224 = yr1021_T(y_str("&y_d_int", 8));
return rv4224; }
}
if ((F.v4222 == v789)) {
{ rt_int rv4226 = yr1021_T(y_str("&y_d_byte", 9));
return rv4226; }
}
if ((((F.v4222 == v780)) || ((F.v4222 == v777)))) {
{ rt_int rv4228 = yr1021_T(y_str("&y_d_float", 10));
return rv4228; }
}
if ((((F.v4222 == v798)) || ((F.v4222 == v819)))) {
{ rt_int rv4230 = yr1021_T(y_str("&y_d_ptr", 8));
return rv4230; }
}
if ((F.v4222 == v804)) {
{ rt_int rv4232 = yr1021_T(y_str("&y_d_set", 8));
return rv4232; }
}
if ((((F.v4222 == v792)) || ((F.v4222 == v795)))) {
yr986_SB();
yr997_SA(y_str("&", 1));
yr1004_ST(yr1651_Path(((*(yR100 *)rt_nil_check(F.p1763))).f_dlevel, ((*(yR100 *)rt_nil_check(F.p1763))).f_dname));
{ rt_int rv4234 = yr1016_SE();
return rv4234; }
}
if ((F.v4222 == v816)) {
{ rt_int rv4236 = yr1021_T(y_str("&y_d_str", 8));
return rv4236; }
}
if ((F.v4222 == v807)) {
{ rt_int rv4238 = yr1021_T(y_str("&y_d_sig", 8));
return rv4238; }
}
{ rt_int rv4240 = yr1021_T(y_str("&y_d_opaque", 11));
return rv4240; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1768_NewDesc(void * a_p1769) {
struct yf1770 F;
memset((void *)&F, 0, sizeof F);
F.p1769 = a_p1769;
((*(yR100 *)rt_nil_check(F.p1769))).f_dname = yr1146_Fresh(y_str("yd_", 3));
((*(yR100 *)rt_nil_check(F.p1769))).f_dlevel = v1576;
yr1664_DeclStorage(yr1021_T(y_str("ydesc", 5)), ((*(yR100 *)rt_nil_check(F.p1769))).f_dname);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1774_SameType(void * a_p1775, void * a_p1776) {
struct yf1777 F;
memset((void *)&F, 0, sizeof F);
F.p1775 = a_p1775;
F.p1776 = a_p1776;
if ((((*(yR100 *)rt_nil_check(F.p1775))).f_tid == ((*(yR100 *)rt_nil_check(F.p1776))).f_tid)) {
{ rt_int rv4249 = 1;
return rv4249; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1775))).f_kind == v816)) && yr1738_IsString(F.p1776))) {
{ rt_int rv4251 = 1;
return rv4251; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1776))).f_kind == v816)) && yr1738_IsString(F.p1775))) {
{ rt_int rv4253 = 1;
return rv4253; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1775))).f_kind == v819)) && ((((*(yR100 *)rt_nil_check(F.p1776))).f_kind == v798)))) {
{ rt_int rv4255 = 1;
return rv4255; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1776))).f_kind == v819)) && ((((*(yR100 *)rt_nil_check(F.p1775))).f_kind == v798)))) {
{ rt_int rv4257 = 1;
return rv4257; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1775))).f_kind == v828)) || ((((*(yR100 *)rt_nil_check(F.p1776))).f_kind == v828)))) {
{ rt_int rv4259 = 1;
return rv4259; }
}
{ rt_int rv4261 = 0;
return rv4261; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1781_TypeClash(rt_int a_p1782, void * a_p1783, void * a_p1784) {
struct yf1785 F;
memset((void *)&F, 0, sizeof F);
F.p1782 = a_p1782;
F.p1783 = a_p1783;
F.p1784 = a_p1784;
yr986_SB();
yr997_SA(y_str("type conflict: ", 15));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1783))).f_tname);
yr997_SA(y_str(" expected, ", 11));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1784))).f_tname);
yr997_SA(y_str(" found", 6));
F.v4267 = yr1016_SE();
yr1117_Fail(F.p1782, F.v4267);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1789_CheckType(rt_int a_p1790, void * a_p1791, void * a_p1792) {
struct yf1793 F;
memset((void *)&F, 0, sizeof F);
F.p1790 = a_p1790;
F.p1791 = a_p1791;
F.p1792 = a_p1792;
if ((!yr1774_SameType(F.p1791, F.p1792))) {
yr1781_TypeClash(F.p1790, F.p1791, F.p1792);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1797_CheckRepresented(void * a_p1798, rt_int a_p1799) {
struct yf1800 F;
memset((void *)&F, 0, sizeof F);
F.p1798 = a_p1798;
F.p1799 = a_p1799;
if (((*(yR100 *)rt_nil_check(F.p1798))).f_abstract) {
yr1132_FailN(F.p1799, ((*(yR100 *)rt_nil_check(F.p1798))).f_tname, y_str(" is a type, not a representation (VI.A.1)", 41));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1804_IsLiteralNode(void * a_p1805) {
struct yf1806 F;
memset((void *)&F, 0, sizeof F);
F.p1805 = a_p1805;
if ((((((((*(yR95 *)rt_nil_check(F.p1805))).f_kind == v729)) || ((((*(yR95 *)rt_nil_check(F.p1805))).f_kind == v735))) || ((((*(yR95 *)rt_nil_check(F.p1805))).f_kind == v732))) || ((((*(yR95 *)rt_nil_check(F.p1805))).f_kind == v738)))) {
{ rt_int rv4281 = (((*(yR95 *)rt_nil_check(F.p1805))).f_d == ((void *)0));
return rv4281; }
}
if ((((((*(yR95 *)rt_nil_check(F.p1805))).f_kind == v765)) || ((((*(yR95 *)rt_nil_check(F.p1805))).f_kind == v771)))) {
{ rt_int rv4282 = yr1804_IsLiteralNode(((*(yR95 *)rt_nil_check(F.p1805))).f_a);
return rv4282; }
}
{ rt_int rv4284 = 0;
return rv4284; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1810_StoreBounds(void * a_p1811, yarr a_p1813) {
struct yf1814 F;
memset((void *)&F, 0, sizeof F);
F.p1811 = a_p1811;
F.p1813 = a_p1813;
F.v4289 = yr1146_Fresh(y_str("lo", 2));
F.v4291 = yr1146_Fresh(y_str("hi", 2));
yr1664_DeclStorage(yr1021_T(F.p1813), F.v4289);
yr1664_DeclStorage(yr1021_T(F.p1813), F.v4291);
yr1092_Emit(yr2486_Join(yr1651_Path(v1576, F.v4289), yr1021_T(y_str(" = ", 3)), yr2486_Join(((*(yR100 *)rt_nil_check(F.p1811))).f_lo, yr1021_T(y_str(";", 1)), INT64_C(0))));
yr1092_Emit(yr2486_Join(yr1651_Path(v1576, F.v4291), yr1021_T(y_str(" = ", 3)), yr2486_Join(((*(yR100 *)rt_nil_check(F.p1811))).f_hi, yr1021_T(y_str(";", 1)), INT64_C(0))));
((*(yR100 *)rt_nil_check(F.p1811))).f_lo = F.v4289;
((*(yR100 *)rt_nil_check(F.p1811))).f_hi = F.v4291;
((*(yR100 *)rt_nil_check(F.p1811))).f_dname = F.v4289;
((*(yR100 *)rt_nil_check(F.p1811))).f_dlevel = v1576;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1818_LoText(void * a_p1819) {
struct yf1820 F;
memset((void *)&F, 0, sizeof F);
F.p1819 = a_p1819;
if ((((((!(((*(yR100 *)rt_nil_check(F.p1819))).f_dname == INT64_C(0)))) && ((!(((*(yR100 *)rt_nil_check(F.p1819))).f_lo == INT64_C(0))))) && ((!(((*(yR100 *)rt_nil_check(F.p1819))).f_kind == v792)))) && ((!(((*(yR100 *)rt_nil_check(F.p1819))).f_kind == v795))))) {
{ rt_int rv4304 = yr1651_Path(((*(yR100 *)rt_nil_check(F.p1819))).f_dlevel, ((*(yR100 *)rt_nil_check(F.p1819))).f_lo);
return rv4304; }
}
{ rt_int rv4305 = ((*(yR100 *)rt_nil_check(F.p1819))).f_lo;
return rv4305; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1824_HiText(void * a_p1825) {
struct yf1826 F;
memset((void *)&F, 0, sizeof F);
F.p1825 = a_p1825;
if ((((((!(((*(yR100 *)rt_nil_check(F.p1825))).f_dname == INT64_C(0)))) && ((!(((*(yR100 *)rt_nil_check(F.p1825))).f_hi == INT64_C(0))))) && ((!(((*(yR100 *)rt_nil_check(F.p1825))).f_kind == v792)))) && ((!(((*(yR100 *)rt_nil_check(F.p1825))).f_kind == v795))))) {
{ rt_int rv4310 = yr1651_Path(((*(yR100 *)rt_nil_check(F.p1825))).f_dlevel, ((*(yR100 *)rt_nil_check(F.p1825))).f_hi);
return rv4310; }
}
{ rt_int rv4311 = ((*(yR100 *)rt_nil_check(F.p1825))).f_hi;
return rv4311; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1830_Qualify(void * a_p1831, void * a_p1832) {
struct yf1833 F;
memset((void *)&F, 0, sizeof F);
F.p1831 = a_p1831;
F.p1832 = a_p1832;
yr2131_Expr(((*(yR95 *)rt_nil_check(F.p1832))).f_a, F.p1831, &F.v4316, &F.v4320);
yr2131_Expr(((*(yR95 *)rt_nil_check(F.p1832))).f_b, F.p1831, &F.v4318, &F.v4322);
if ((((((*(yR100 *)rt_nil_check(F.p1831))).f_kind == v780)) || ((((*(yR100 *)rt_nil_check(F.p1831))).f_kind == v777)))) {
yr1789_CheckType(((*(yR95 *)rt_nil_check(F.p1832))).f_line, F.p1831, F.v4320);
yr1789_CheckType(((*(yR95 *)rt_nil_check(F.p1832))).f_line, F.p1831, F.v4322);
((*(yR100 *)rt_nil_check(F.p1831))).f_lo = F.v4316;
((*(yR100 *)rt_nil_check(F.p1831))).f_hi = F.v4318;
((*(yR100 *)rt_nil_check(F.p1831))).f_dname = INT64_C(0);
if ((!((yr1804_IsLiteralNode(((*(yR95 *)rt_nil_check(F.p1832))).f_a) && yr1804_IsLiteralNode(((*(yR95 *)rt_nil_check(F.p1832))).f_b))))) {
yr1810_StoreBounds(F.p1831, y_str("double", 6));
}
if ((((*(yR100 *)rt_nil_check(F.p1831))).f_kind == v780)) {
if ((((*(yR95 *)rt_nil_check(F.p1832))).f_d == ((void *)0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1832))).f_line, y_str("FLOATING needs PRECISION (VI.A.1.c)", 35));
}
yr2066_Manifest(((*(yR95 *)rt_nil_check(F.p1832))).f_d, &F.v4324, &F.v4326);
if ((!F.v4324)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1832))).f_line, y_str("PRECISION is a manifest constant", 32));
}
yr986_SB();
yr1010_SI(F.v4326);
((*(yR100 *)rt_nil_check(F.p1831))).f_prec = yr1016_SE();
} else {
if ((((*(yR95 *)rt_nil_check(F.p1832))).f_c == ((void *)0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1832))).f_line, y_str("FIXED needs SCALE (VI.A.1.b)", 28));
}
yr2131_Expr(((*(yR95 *)rt_nil_check(F.p1832))).f_c, F.p1831, &((*(yR100 *)rt_nil_check(F.p1831))).f_scale, &F.v4320);
}
((*(yR100 *)rt_nil_check(F.p1831))).f_abstract = 0;
return;
}
if ((!yr1720_IsDiscrete(F.p1831))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1832))).f_line, y_str("only a scalar or integer representation takes a range", 53));
}
if ((((!(((*(yR95 *)rt_nil_check(F.p1832))).f_c == ((void *)0)))) || ((!(((*(yR95 *)rt_nil_check(F.p1832))).f_d == ((void *)0)))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1832))).f_line, y_str("SCALE and PRECISION qualify numbers", 35));
}
yr1789_CheckType(((*(yR95 *)rt_nil_check(F.p1832))).f_line, F.p1831, F.v4320);
yr1789_CheckType(((*(yR95 *)rt_nil_check(F.p1832))).f_line, F.p1831, F.v4322);
((*(yR100 *)rt_nil_check(F.p1831))).f_lo = F.v4316;
((*(yR100 *)rt_nil_check(F.p1831))).f_hi = F.v4318;
yr2066_Manifest(((*(yR95 *)rt_nil_check(F.p1832))).f_a, &F.v4324, &((*(yR100 *)rt_nil_check(F.p1831))).f_mlo);
((*(yR100 *)rt_nil_check(F.p1831))).f_hasm = F.v4324;
yr2066_Manifest(((*(yR95 *)rt_nil_check(F.p1832))).f_b, &F.v4324, &((*(yR100 *)rt_nil_check(F.p1831))).f_mhi);
((*(yR100 *)rt_nil_check(F.p1831))).f_hasm = (((*(yR100 *)rt_nil_check(F.p1831))).f_hasm && F.v4324);
((*(yR100 *)rt_nil_check(F.p1831))).f_abstract = 0;
((*(yR100 *)rt_nil_check(F.p1831))).f_dname = INT64_C(0);
if ((!((*(yR100 *)rt_nil_check(F.p1831))).f_hasm)) {
yr1810_StoreBounds(F.p1831, y_str("rt_int", 6));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1837_DefineLits(void * a_p1838) {
struct yf1839 F;
memset((void *)&F, 0, sizeof F);
F.p1838 = a_p1838;
F.v4341 = ((*(yR100 *)rt_nil_check(F.p1838))).f_lits;
F.v4345 = INT64_C(0);
while ((!(F.v4341 == ((void *)0)))) {
if ((!(yr1612_Find(((*(yR95 *)rt_nil_check(F.v4341))).f_name) == ((void *)0)))) {
F.v4343 = yr1612_Find(((*(yR95 *)rt_nil_check(F.v4341))).f_name);
if ((((!(((*(yR115 *)rt_nil_check(F.v4343))).f_kind == v843))) && ((((*(yR115 *)rt_nil_check(F.v4343))).f_depth == v1570)))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.v4341))).f_line, ((*(yR95 *)rt_nil_check(F.v4341))).f_name, y_str(" is declared twice in this scope", 32));
}
}
F.v4343 = yr1588_NewSym(v843, ((*(yR95 *)rt_nil_check(F.v4341))).f_name);
((*(yR115 *)rt_nil_check(F.v4343))).f_rep = F.p1838;
((*(yR115 *)rt_nil_check(F.v4343))).f_mval = F.v4345;
((*(yR115 *)rt_nil_check(F.v4343))).f_hasmv = 1;
yr1644_Define(F.v4343, ((*(yR95 *)rt_nil_check(F.v4341))).f_line);
F.v4345 = rt_range(rt_add(F.v4345, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4341 = ((*(yR95 *)rt_nil_check(F.v4341))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1843_SetRange(void * a_p1844, rt_int a_p1845, rt_int a_p1846) {
struct yf1847 F;
memset((void *)&F, 0, sizeof F);
F.p1844 = a_p1844;
F.p1845 = a_p1845;
F.p1846 = a_p1846;
yr986_SB();
yr1010_SI(F.p1845);
((*(yR100 *)rt_nil_check(F.p1844))).f_lo = yr1016_SE();
yr986_SB();
yr1010_SI(F.p1846);
((*(yR100 *)rt_nil_check(F.p1844))).f_hi = yr1016_SE();
((*(yR100 *)rt_nil_check(F.p1844))).f_mlo = F.p1845;
((*(yR100 *)rt_nil_check(F.p1844))).f_mhi = F.p1846;
((*(yR100 *)rt_nil_check(F.p1844))).f_hasm = 1;
((*(yR100 *)rt_nil_check(F.p1844))).f_dname = INT64_C(0);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1851_NewTid(rt_int a_p1852) {
struct yf1853 F;
memset((void *)&F, 0, sizeof F);
F.p1852 = a_p1852;
F.v4360 = yr1141_NewSerial();
yr986_SB();
if ((!(F.p1852 == INT64_C(0)))) {
yr1004_ST(F.p1852);
} else {
yr997_SA(y_str("anonymous", 9));
}
yr997_SA(y_str("#", 1));
yr1010_SI(F.v4360);
{ rt_int rv4364 = yr1016_SE();
return rv4364; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1857_MakeRep(void * a_p1858, rt_int a_p1859, rt_int a_p1860) {
struct yf1861 F;
memset((void *)&F, 0, sizeof F);
F.p1858 = a_p1858;
F.p1859 = a_p1859;
F.p1860 = a_p1860;
F.v4380 = ((*(yR95 *)rt_nil_check(F.p1858))).f_kind;
F.v4384 = INT64_C(0);
F.v4386 = F.p1859;
if ((!(((*(yR95 *)rt_nil_check(F.p1858))).f_text == INT64_C(0)))) {
F.v4378 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(F.p1858))).f_text, ((*(yR95 *)rt_nil_check(F.p1858))).f_line));
if ((((!(((*(yR115 *)rt_nil_check(F.v4378))).f_kind == v840))) && ((!(((*(yR115 *)rt_nil_check(F.v4378))).f_kind == v837))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p1858))).f_line, ((*(yR95 *)rt_nil_check(F.p1858))).f_text, y_str(" is not a type", 14));
}
F.v4384 = ((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4378))).f_rep))).f_tid;
F.v4386 = ((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4378))).f_rep))).f_tname;
}
if ((F.v4380 == v642)) {
F.v4378 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(F.p1858))).f_name, ((*(yR95 *)rt_nil_check(F.p1858))).f_line));
if ((((!(((*(yR115 *)rt_nil_check(F.v4378))).f_kind == v840))) && ((!(((*(yR115 *)rt_nil_check(F.v4378))).f_kind == v837))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p1858))).f_line, ((*(yR95 *)rt_nil_check(F.p1858))).f_name, y_str(" is not a representation", 24));
}
F.v4370 = ((*(yR115 *)rt_nil_check(F.v4378))).f_rep;
if ((!(((*(yR95 *)rt_nil_check(F.p1858))).f_a == ((void *)0)))) {
F.v4370 = yr1714_CopyRep(F.v4370);
yr1830_Qualify(F.v4370, ((*(yR95 *)rt_nil_check(F.p1858))).f_a);
}
{ void * rv4391 = F.v4370;
return rv4391; }
}
if ((F.v4384 == INT64_C(0))) {
F.v4384 = yr1851_NewTid(F.p1859);
if ((F.v4386 == INT64_C(0))) {
F.v4386 = F.v4384;
}
}
if ((F.v4380 == v645)) {
F.v4370 = yr1707_NewRep(v786, F.v4384);
((*(yR100 *)rt_nil_check(F.v4370))).f_tname = F.v4386;
((*(yR100 *)rt_nil_check(F.v4370))).f_ordered = (((*(yR95 *)rt_nil_check(F.p1858))).f_flag == INT64_C(1));
((*(yR100 *)rt_nil_check(F.v4370))).f_lits = ((*(yR95 *)rt_nil_check(F.p1858))).f_a;
((*(yR100 *)rt_nil_check(F.v4370))).f_nlits = yr1260_Count(((*(yR95 *)rt_nil_check(F.p1858))).f_a);
yr1843_SetRange(F.v4370, INT64_C(0), rt_range(rt_sub(((*(yR100 *)rt_nil_check(F.v4370))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1837_DefineLits(F.v4370);
if ((!(((*(yR95 *)rt_nil_check(F.p1858))).f_b == ((void *)0)))) {
yr1830_Qualify(F.v4370, ((*(yR95 *)rt_nil_check(F.p1858))).f_b);
}
{ void * rv4398 = F.v4370;
return rv4398; }
}
if ((F.v4380 == v648)) {
F.v4370 = yr1707_NewRep(v789, F.v4384);
((*(yR100 *)rt_nil_check(F.v4370))).f_tname = F.v4386;
((*(yR100 *)rt_nil_check(F.v4370))).f_ordered = 1;
((*(yR100 *)rt_nil_check(F.v4370))).f_lits = ((*(yR95 *)rt_nil_check(F.p1858))).f_a;
((*(yR100 *)rt_nil_check(F.v4370))).f_nlits = yr1260_Count(((*(yR95 *)rt_nil_check(F.p1858))).f_a);
if ((((*(yR100 *)rt_nil_check(F.v4370))).f_nlits > INT64_C(256))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1858))).f_line, y_str("this implementation takes alphabets of up to 256 characters", 59));
}
yr1843_SetRange(F.v4370, INT64_C(0), rt_range(rt_sub(((*(yR100 *)rt_nil_check(F.v4370))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((!(((*(yR95 *)rt_nil_check(F.p1858))).f_b == ((void *)0)))) {
yr1830_Qualify(F.v4370, ((*(yR95 *)rt_nil_check(F.p1858))).f_b);
}
{ void * rv4405 = F.v4370;
return rv4405; }
}
if ((F.v4380 == v651)) {
F.v4370 = yr1707_NewRep(v792, F.v4384);
((*(yR100 *)rt_nil_check(F.v4370))).f_tname = F.v4386;
F.v4382 = ((*(yR95 *)rt_nil_check(F.p1858))).f_a;
F.v4376 = ((void *)0);
while ((!(F.v4382 == ((void *)0)))) {
F.v4374 = yr1714_CopyRep(yr1857_MakeRep(F.v4382, INT64_C(0), 0));
if ((!yr1720_IsDiscrete(F.v4374))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v4382))).f_line, y_str("an index is an integer or scalar representation", 47));
}
yr1797_CheckRepresented(F.v4374, ((*(yR95 *)rt_nil_check(F.v4382))).f_line);
((*(yR100 *)rt_nil_check(F.v4374))).f_link = ((void *)0);
if ((F.v4376 == ((void *)0))) {
((*(yR100 *)rt_nil_check(F.v4370))).f_idx = F.v4374;
} else {
((*(yR100 *)rt_nil_check(F.v4376))).f_link = F.v4374;
}
F.v4376 = F.v4374;
((*(yR100 *)rt_nil_check(F.v4370))).f_nidx = rt_range(rt_add(((*(yR100 *)rt_nil_check(F.v4370))).f_nidx, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4382 = ((*(yR95 *)rt_nil_check(F.v4382))).f_next;
}
if ((((*(yR100 *)rt_nil_check(F.v4370))).f_nidx > INT64_C(4))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1858))).f_line, y_str("this implementation takes arrays of up to 4 dimensions", 54));
}
((*(yR100 *)rt_nil_check(F.v4370))).f_elem = yr1857_MakeRep(((*(yR95 *)rt_nil_check(F.p1858))).f_b, INT64_C(0), F.p1860);
if ((!F.p1860)) {
yr1797_CheckRepresented(((*(yR100 *)rt_nil_check(F.v4370))).f_elem, ((*(yR95 *)rt_nil_check(F.p1858))).f_line);
yr1877_BuildArrayDesc(F.v4370);
} else {
((*(yR100 *)rt_nil_check(F.v4370))).f_abstract = ((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.v4370))).f_elem))).f_abstract;
if ((!((*(yR100 *)rt_nil_check(F.v4370))).f_abstract)) {
yr1877_BuildArrayDesc(F.v4370);
}
}
((*(yR100 *)rt_nil_check(F.v4370))).f_deep = 1;
{ void * rv4415 = F.v4370;
return rv4415; }
}
if ((F.v4380 == v654)) {
F.v4370 = yr1707_NewRep(v795, F.v4384);
((*(yR100 *)rt_nil_check(F.v4370))).f_tname = F.v4386;
yr1907_MakeRecord(F.v4370, F.p1858, F.p1860);
{ void * rv4416 = F.v4370;
return rv4416; }
}
if (((((F.v4380 == v660)) || ((F.v4380 == v657))) || ((F.v4380 == v663)))) {
if ((F.v4380 == v660)) {
F.v4370 = yr1707_NewRep(v798, F.v4384);
((*(yR100 *)rt_nil_check(F.v4370))).f_tname = F.v4386;
if (((((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p1858))).f_a))).f_kind == v642)) && ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p1858))).f_a))).f_a == ((void *)0)))) && ((yr1612_Find(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p1858))).f_a))).f_name) == ((void *)0))))) {
((*(yR100 *)rt_nil_check(F.v4370))).f_forward = ((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p1858))).f_a))).f_name;
((*(yR100 *)rt_nil_check(F.v4370))).f_fwdscope = v1570;
F.v4382 = yr1245_NewNode(v639, ((*(yR95 *)rt_nil_check(F.p1858))).f_line);
((*(yR95 *)rt_nil_check(F.v4382))).f_rep = F.v4370;
((*(yR95 *)rt_nil_check(F.v4382))).f_next = v1705;
v1705 = F.v4382;
{ void * rv4417 = F.v4370;
return rv4417; }
}
((*(yR100 *)rt_nil_check(F.v4370))).f_elem = yr1857_MakeRep(((*(yR95 *)rt_nil_check(F.p1858))).f_a, INT64_C(0), 0);
{ void * rv4420 = F.v4370;
return rv4420; }
}
if ((F.v4380 == v657)) {
F.v4370 = yr1707_NewRep(v801, F.v4384);
((*(yR100 *)rt_nil_check(F.v4370))).f_tname = F.v4386;
((*(yR100 *)rt_nil_check(F.v4370))).f_elem = yr1857_MakeRep(((*(yR95 *)rt_nil_check(F.p1858))).f_a, INT64_C(0), F.p1860);
{ void * rv4422 = F.v4370;
return rv4422; }
}
F.v4370 = yr1707_NewRep(v804, F.v4384);
((*(yR100 *)rt_nil_check(F.v4370))).f_tname = F.v4386;
((*(yR100 *)rt_nil_check(F.v4370))).f_elem = yr1857_MakeRep(((*(yR95 *)rt_nil_check(F.p1858))).f_a, INT64_C(0), 0);
if ((!yr1720_IsDiscrete(((*(yR100 *)rt_nil_check(F.v4370))).f_elem))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1858))).f_line, y_str("a set is of an integer or scalar representation", 47));
}
yr1797_CheckRepresented(((*(yR100 *)rt_nil_check(F.v4370))).f_elem, ((*(yR95 *)rt_nil_check(F.p1858))).f_line);
{ void * rv4426 = F.v4370;
return rv4426; }
}
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1858))).f_line, y_str("this representation is not translated", 37));
{ void * rv4428 = ((void *)0);
return rv4428; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1865_ResolvePending(rt_int a_p1866, void * a_p1867) {
struct yf1868 F;
memset((void *)&F, 0, sizeof F);
F.p1866 = a_p1866;
F.p1867 = a_p1867;
F.v4433 = v1705;
F.v4435 = ((void *)0);
while ((!(F.v4433 == ((void *)0)))) {
if ((((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4433))).f_rep))).f_forward == F.p1866)) {
((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4433))).f_rep))).f_elem = F.p1867;
((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4433))).f_rep))).f_forward = INT64_C(0);
if ((F.v4435 == ((void *)0))) {
v1705 = ((*(yR95 *)rt_nil_check(F.v4433))).f_next;
} else {
((*(yR95 *)rt_nil_check(F.v4435))).f_next = ((*(yR95 *)rt_nil_check(F.v4433))).f_next;
}
} else {
F.v4435 = F.v4433;
}
F.v4433 = ((*(yR95 *)rt_nil_check(F.v4433))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1872_CheckPending(void) {
struct yf1873 F;
memset((void *)&F, 0, sizeof F);
F.v4439 = v1705;
while ((!(F.v4439 == ((void *)0)))) {
if ((((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4439))).f_rep))).f_fwdscope >= v1570)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.v4439))).f_line, ((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4439))).f_rep))).f_forward, y_str(" is named by a pointer but not declared", 39));
}
F.v4439 = ((*(yR95 *)rt_nil_check(F.v4439))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1877_BuildArrayDesc(void * a_p1878) {
struct yf1879 F;
memset((void *)&F, 0, sizeof F);
F.p1878 = a_p1878;
yr1768_NewDesc(F.p1878);
yr986_SB();
yr997_SA(y_str("{ rt_int lo[", 12));
yr1010_SI(((*(yR100 *)rt_nil_check(F.p1878))).f_nidx);
yr997_SA(y_str("] = {", 5));
F.v4444 = ((*(yR100 *)rt_nil_check(F.p1878))).f_idx;
F.v4448 = 1;
while ((!(F.v4444 == ((void *)0)))) {
if ((!F.v4448)) {
yr997_SA(y_str(", ", 2));
}
F.v4448 = 0;
yr1004_ST(yr1818_LoText(F.v4444));
F.v4444 = ((*(yR100 *)rt_nil_check(F.v4444))).f_link;
}
yr997_SA(y_str("}, hi[", 6));
yr1010_SI(((*(yR100 *)rt_nil_check(F.p1878))).f_nidx);
yr997_SA(y_str("] = {", 5));
F.v4444 = ((*(yR100 *)rt_nil_check(F.p1878))).f_idx;
F.v4448 = 1;
while ((!(F.v4444 == ((void *)0)))) {
if ((!F.v4448)) {
yr997_SA(y_str(", ", 2));
}
F.v4448 = 0;
yr1004_ST(yr1824_HiText(F.v4444));
F.v4444 = ((*(yR100 *)rt_nil_check(F.v4444))).f_link;
}
yr997_SA(y_str("}; y_desc_array(", 16));
yr1004_ST(yr1762_DescOf(F.p1878));
yr997_SA(y_str(", ", 2));
yr1010_SI(((*(yR100 *)rt_nil_check(F.p1878))).f_nidx);
yr997_SA(y_str(", lo, hi, ", 10));
yr1004_ST(yr1762_DescOf(((*(yR100 *)rt_nil_check(F.p1878))).f_elem));
yr997_SA(y_str("); }", 4));
F.v4446 = yr1016_SE();
yr1092_Emit(F.v4446);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1883_AddField(void * a_p1884, void * * a_p1885, rt_int a_p1886, void * a_p1887, rt_int a_p1888, rt_int a_p1889, void * a_p1890, rt_int a_p1891) {
struct yf1892 F;
memset((void *)&F, 0, sizeof F);
F.p1884 = a_p1884;
F.p1885 = a_p1885;
F.p1886 = a_p1886;
F.p1887 = a_p1887;
F.p1888 = a_p1888;
F.p1889 = a_p1889;
F.p1890 = a_p1890;
F.p1891 = a_p1891;
F.v4473 = ((*(yR100 *)rt_nil_check(F.p1884))).f_fields;
while ((!(F.v4473 == ((void *)0)))) {
if ((((*(yR105 *)rt_nil_check(F.v4473))).f_name == F.p1886)) {
yr1132_FailN(F.p1891, F.p1886, y_str(" is a component twice", 21));
}
F.v4473 = ((*(yR105 *)rt_nil_check(F.v4473))).f_next;
}
({ F.v4473 = rt_alloc(sizeof(yR105)); });
(*(yR105 *)rt_nil_check(F.v4473)) = ((yR105){ .f_name = F.p1886, .f_rep = F.p1887, .f_isconst = F.p1888, .f_variant = F.p1889, .f_labels = F.p1890, .f_next = ((void *)0) });
if (((*F.p1885) == ((void *)0))) {
((*(yR100 *)rt_nil_check(F.p1884))).f_fields = F.v4473;
} else {
((*(yR105 *)rt_nil_check((*F.p1885)))).f_next = F.v4473;
}
(*F.p1885) = F.v4473;
if (yr1744_Deep(F.p1887)) {
((*(yR100 *)rt_nil_check(F.p1884))).f_deep = 1;
}
if (((*(yR100 *)rt_nil_check(F.p1887))).f_abstract) {
((*(yR100 *)rt_nil_check(F.p1884))).f_abstract = 1;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1896_AddFields(void * a_p1897, void * * a_p1898, void * a_p1899, rt_int a_p1900, void * a_p1901, rt_int a_p1902) {
struct yf1903 F;
memset((void *)&F, 0, sizeof F);
F.p1897 = a_p1897;
F.p1898 = a_p1898;
F.p1899 = a_p1899;
F.p1900 = a_p1900;
F.p1901 = a_p1901;
F.p1902 = a_p1902;
F.v4485 = F.p1899;
F.v4487 = F.p1899;
while ((!(F.v4485 == ((void *)0)))) {
F.v4489 = yr1857_MakeRep(((*(yR95 *)rt_nil_check(F.v4485))).f_b, INT64_C(0), F.p1902);
if ((!F.p1902)) {
yr1797_CheckRepresented(F.v4489, ((*(yR95 *)rt_nil_check(F.v4485))).f_line);
}
if ((((((*(yR100 *)rt_nil_check(F.v4489))).f_kind == v807)) || ((((*(yR100 *)rt_nil_check(F.v4489))).f_kind == v801)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v4485))).f_line, y_str("this implementation does not keep signals or files in records", 61));
}
F.v4487 = ((*(yR95 *)rt_nil_check(F.v4485))).f_a;
while ((!(F.v4487 == ((void *)0)))) {
yr1883_AddField(F.p1897, &(*F.p1898), ((*(yR95 *)rt_nil_check(F.v4487))).f_name, F.v4489, (((*(yR95 *)rt_nil_check(F.v4485))).f_ival == v240), F.p1900, F.p1901, ((*(yR95 *)rt_nil_check(F.v4487))).f_line);
F.v4487 = ((*(yR95 *)rt_nil_check(F.v4487))).f_next;
}
F.v4485 = ((*(yR95 *)rt_nil_check(F.v4485))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1907_MakeRecord(void * a_p1908, void * a_p1909, rt_int a_p1910) {
struct yf1911 F;
memset((void *)&F, 0, sizeof F);
F.p1908 = a_p1908;
F.p1909 = a_p1909;
F.p1910 = a_p1910;
F.v4497 = ((void *)0);
F.v4505 = INT64_C(0);
F.v4512 = INT64_C(0);
yr1896_AddFields(F.p1908, &F.v4497, ((*(yR95 *)rt_nil_check(F.p1909))).f_a, INT64_C(0), ((void *)0), F.p1910);
if ((!(((*(yR95 *)rt_nil_check(F.p1909))).f_b == ((void *)0)))) {
F.v4499 = ((*(yR95 *)rt_nil_check(F.p1909))).f_b;
F.v4503 = yr1857_MakeRep(((*(yR95 *)rt_nil_check(F.v4499))).f_b, INT64_C(0), 0);
if ((!yr1720_IsDiscrete(F.v4503))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v4499))).f_line, y_str("the case-selection component is integer or scalar", 49));
}
yr1883_AddField(F.p1908, &F.v4497, ((*(yR95 *)rt_nil_check(F.v4499))).f_name, F.v4503, 1, INT64_C(0), ((void *)0), ((*(yR95 *)rt_nil_check(F.v4499))).f_line);
((*(yR100 *)rt_nil_check(F.p1908))).f_selector = F.v4497;
F.v4501 = ((*(yR95 *)rt_nil_check(F.v4499))).f_a;
while ((!(F.v4501 == ((void *)0)))) {
F.v4505 = rt_range(rt_add(F.v4505, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1896_AddFields(F.p1908, &F.v4497, ((*(yR95 *)rt_nil_check(F.v4501))).f_b, F.v4505, ((*(yR95 *)rt_nil_check(F.v4501))).f_a, F.p1910);
F.v4501 = ((*(yR95 *)rt_nil_check(F.v4501))).f_next;
}
}
if ((F.p1910 && ((*(yR100 *)rt_nil_check(F.p1908))).f_abstract)) {
return;
}
((*(yR100 *)rt_nil_check(F.p1908))).f_abstract = 0;
((*(yR100 *)rt_nil_check(F.p1908))).f_cname = yr1146_Fresh(y_str("yR", 2));
yr986_SB();
yr997_SA(y_str("typedef struct ", 15));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1908))).f_cname);
yr997_SA(y_str(" ", 1));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1908))).f_cname);
yr997_SA(y_str(";", 1));
F.v4510 = yr1016_SE();
yr1070_Put(&v942, F.v4510);
yr986_SB();
yr997_SA(y_str("struct ", 7));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1908))).f_cname);
yr997_SA(y_str(" {", 2));
F.v4508 = ((*(yR100 *)rt_nil_check(F.p1908))).f_fields;
while ((!(F.v4508 == ((void *)0)))) {
yr997_SA(y_str(" ", 1));
yr1004_ST(yr1756_CType(((*(yR105 *)rt_nil_check(F.v4508))).f_rep));
yr997_SA(y_str(" f_", 3));
yr1004_ST(((*(yR105 *)rt_nil_check(F.v4508))).f_name);
yr997_SA(y_str(";", 1));
F.v4512 = rt_range(rt_add(F.v4512, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4508 = ((*(yR105 *)rt_nil_check(F.v4508))).f_next;
}
if ((F.v4512 == INT64_C(0))) {
yr997_SA(y_str(" int empty_;", 12));
}
yr997_SA(y_str(" };", 3));
F.v4510 = yr1016_SE();
yr1070_Put(&v944, F.v4510);
yr1768_NewDesc(F.p1908);
yr986_SB();
yr997_SA(y_str("{ static const size_t o[] = {", 29));
F.v4508 = ((*(yR100 *)rt_nil_check(F.p1908))).f_fields;
while ((!(F.v4508 == ((void *)0)))) {
yr997_SA(y_str("offsetof(", 9));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1908))).f_cname);
yr997_SA(y_str(", f_", 4));
yr1004_ST(((*(yR105 *)rt_nil_check(F.v4508))).f_name);
yr997_SA(y_str("), ", 3));
F.v4508 = ((*(yR105 *)rt_nil_check(F.v4508))).f_next;
}
yr997_SA(y_str("0}; const ydesc **f = rt_alloc(", 31));
yr1010_SI(rt_range(rt_add(F.v4512, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr997_SA(y_str(" * sizeof *f);", 14));
F.v4505 = INT64_C(0);
F.v4508 = ((*(yR100 *)rt_nil_check(F.p1908))).f_fields;
while ((!(F.v4508 == ((void *)0)))) {
yr997_SA(y_str(" f[", 3));
yr1010_SI(F.v4505);
yr997_SA(y_str("] = ", 4));
yr1004_ST(yr1762_DescOf(((*(yR105 *)rt_nil_check(F.v4508))).f_rep));
yr997_SA(y_str(";", 1));
F.v4505 = rt_range(rt_add(F.v4505, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4508 = ((*(yR105 *)rt_nil_check(F.v4508))).f_next;
}
yr997_SA(y_str(" y_desc_record(", 15));
yr1004_ST(yr1762_DescOf(F.p1908));
yr997_SA(y_str(", sizeof(", 9));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1908))).f_cname);
yr997_SA(y_str("), ", 3));
yr1010_SI(F.v4512);
yr997_SA(y_str(", o, (const ydesc *const *)f); }", 32));
F.v4510 = yr1016_SE();
yr1092_Emit(F.v4510);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1915_FindField(void * a_p1916, rt_int a_p1917) {
struct yf1918 F;
memset((void *)&F, 0, sizeof F);
F.p1916 = a_p1916;
F.p1917 = a_p1917;
F.v4559 = ((*(yR100 *)rt_nil_check(F.p1916))).f_fields;
while ((!(F.v4559 == ((void *)0)))) {
if ((((*(yR105 *)rt_nil_check(F.v4559))).f_name == F.p1917)) {
{ void * rv4560 = F.v4559;
return rv4560; }
}
F.v4559 = ((*(yR105 *)rt_nil_check(F.v4559))).f_next;
}
{ void * rv4561 = ((void *)0);
return rv4561; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2035_CharOrd(void * a_p2036, rt_int a_p2037) {
struct yf2038 F;
memset((void *)&F, 0, sizeof F);
F.p2036 = a_p2036;
F.p2037 = a_p2037;
if ((((*(yR100 *)rt_nil_check(F.p2036))).f_tid == ((*(yR100 *)rt_nil_check(v1687))).f_tid)) {
if ((((rt_int *)(v890).p)[y_ix1(v890, F.p2037)] == INT64_C(1))) {
{ rt_int rv4577 = ((rt_int *)(v931).p)[y_ix1(v931, yr1063_TChar(F.p2037, INT64_C(1)))];
return rv4577; }
}
F.v4568 = INT64_C(0);
F.v4572 = INT64_C(1);
F.lo4582 = INT64_C(1);
F.hi4583 = ((rt_int *)(v890).p)[y_ix1(v890, v2030)];
{ rt_int hi4587 = F.hi4583;
for (rt_int i4586 = F.lo4582; i4586 <= hi4587; i4586++) { F.c_4585 = i4586;
if ((yr1063_TChar(v2030, rt_range(F.c_4585, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 32)) {
F.v4574 = yr1028_Intern(rt_range(rt_add(((rt_int *)(v888).p)[y_ix1(v888, v2030)], (rt_sub(F.v4572, INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub(F.c_4585, F.v4572), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((F.v4574 == F.p2037)) {
if ((F.v4568 < INT64_C(32))) {
{ rt_int rv4594 = F.v4568;
return rv4594; }
}
if ((F.v4568 == INT64_C(32))) {
{ rt_int rv4597 = INT64_C(32);
return rv4597; }
}
if ((F.v4568 == INT64_C(33))) {
{ rt_int rv4600 = INT64_C(127);
return rv4600; }
}
if ((F.v4568 == INT64_C(34))) {
{ rt_int rv4603 = INT64_C(39);
return rv4603; }
}
{ rt_int rv4605 = INT64_C(34);
return rv4605; }
}
F.v4568 = rt_range(rt_add(F.v4568, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4572 = rt_range(rt_add(F.c_4585, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i4586 == hi4587) break;
}}
{ rt_int rv4611 = INT64_C(-1);
return rv4611; }
}
if ((!(((*(yR100 *)rt_nil_check(F.p2036))).f_kind == v789))) {
{ rt_int rv4613 = INT64_C(-1);
return rv4613; }
}
F.v4566 = ((*(yR100 *)rt_nil_check(F.p2036))).f_lits;
F.v4570 = INT64_C(0);
while ((!(F.v4566 == ((void *)0)))) {
if (yr1048_TEq(((*(yR95 *)rt_nil_check(F.v4566))).f_text, F.p2037)) {
{ rt_int rv4615 = F.v4570;
return rv4615; }
}
F.v4570 = rt_range(rt_add(F.v4570, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4566 = ((*(yR95 *)rt_nil_check(F.v4566))).f_next;
}
{ rt_int rv4619 = INT64_C(-1);
return rv4619; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2042_AlphabetFor(void * a_p2043, void * a_p2044) {
struct yf2045 F;
memset((void *)&F, 0, sizeof F);
F.p2043 = a_p2043;
F.p2044 = a_p2044;
F.v4628 = ((void *)0);
F.v4630 = INT64_C(0);
F.v4633 = INT64_C(0);
if ((!(((*(yR95 *)rt_nil_check(F.p2043))).f_d == ((void *)0)))) {
F.v4624 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2043))).f_d))).f_name, ((*(yR95 *)rt_nil_check(F.p2043))).f_line));
if ((((((!(((*(yR115 *)rt_nil_check(F.v4624))).f_kind == v837))) && ((!(((*(yR115 *)rt_nil_check(F.v4624))).f_kind == v840))))) || ((!(((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4624))).f_rep))).f_kind == v789))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2043))).f_line, ((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2043))).f_d))).f_name, y_str(" is not an alphabet", 19));
}
{ void * rv4636 = ((*(yR115 *)rt_nil_check(F.v4624))).f_rep;
return rv4636; }
}
F.v4633 = INT64_C(1);
if ((((((*(yR95 *)rt_nil_check(F.p2043))).f_kind == v741)) || ((yr2035_CharOrd(v1687, ((*(yR95 *)rt_nil_check(F.p2043))).f_text) >= INT64_C(0))))) {
F.v4630 = INT64_C(1);
F.v4628 = v1687;
}
F.v4626 = v2033;
while ((!(F.v4626 == ((void *)0)))) {
F.v4624 = yr1612_Find(((*(yR95 *)rt_nil_check(F.v4626))).f_name);
if ((!(F.v4624 == ((void *)0)))) {
F.v4624 = yr1677_Real(F.v4624);
if ((((((((*(yR115 *)rt_nil_check(F.v4624))).f_kind == v837)) || ((((*(yR115 *)rt_nil_check(F.v4624))).f_kind == v840)))) && ((((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4624))).f_rep))).f_tid == ((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4626))).f_rep))).f_tid)))) {
F.v4633 = rt_range(rt_add(F.v4633, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((((*(yR95 *)rt_nil_check(F.p2043))).f_kind == v738)) && ((yr2035_CharOrd(((*(yR95 *)rt_nil_check(F.v4626))).f_rep, ((*(yR95 *)rt_nil_check(F.p2043))).f_text) >= INT64_C(0))))) {
F.v4630 = rt_range(rt_add(F.v4630, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4628 = ((*(yR95 *)rt_nil_check(F.v4626))).f_rep;
}
}
}
F.v4626 = ((*(yR95 *)rt_nil_check(F.v4626))).f_next;
}
if ((((((*(yR95 *)rt_nil_check(F.p2043))).f_kind == v741)) && ((F.v4633 > INT64_C(1))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2043))).f_line, y_str("a string in a scope with two alphabets is qualified by its alphabet (VI.A.3)", 76));
}
if ((F.v4630 > INT64_C(1))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2043))).f_line, yr2486_Join(yr1021_T(y_str("'", 1)), ((*(yR95 *)rt_nil_check(F.p2043))).f_text, yr1021_T(y_str("'", 1))), y_str(" is a character of two alphabets here: qualify it (VI.A.3)", 58));
}
if ((F.v4628 == ((void *)0))) {
{ void * rv4651 = v1687;
return rv4651; }
}
{ void * rv4652 = F.v4628;
return rv4652; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2049_CharValue(void * a_p2050, rt_int a_p2051, rt_int a_p2052) {
struct yf2053 F;
memset((void *)&F, 0, sizeof F);
F.p2050 = a_p2050;
F.p2051 = a_p2051;
F.p2052 = a_p2052;
F.v4658 = yr2035_CharOrd(F.p2050, F.p2051);
if ((F.v4658 < INT64_C(0))) {
yr986_SB();
yr997_SA(y_str("'", 1));
yr1004_ST(F.p2051);
yr997_SA(y_str("' is not a character of ", 24));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p2050))).f_tname);
F.v4660 = yr1016_SE();
yr1117_Fail(F.p2052, F.v4660);
}
{ rt_int rv4664 = F.v4658;
return rv4664; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2057_StringCodes(void * a_p2058, rt_int a_p2059, rt_int * a_p2060, rt_int a_p2061) {
struct yf2062 F;
memset((void *)&F, 0, sizeof F);
F.p2058 = a_p2058;
F.p2059 = a_p2059;
F.p2060_o = a_p2060;
F.p2061 = a_p2061;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&F.yd_4682, 1, lo, hi, &y_d_int); }
y_init(&F.yd_4682, &F.v4684);
F.p2060 = INT64_C(0);
F.v4671 = INT64_C(1);
while ((F.v4671 <= ((rt_int *)(v890).p)[y_ix1(v890, F.p2059)])) {
F.v4686 = yr1063_TChar(F.p2059, F.v4671);
if ((F.v4686 == 39)) {
F.v4673 = rt_range(rt_add(F.v4671, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1063_TChar(F.p2059, F.v4673) == 39))) {
F.v4673 = rt_range(rt_add(F.v4673, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v4688 = yr1028_Intern(rt_range(rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p2059)], F.v4671), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v4673, F.v4671)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v4675 = yr2049_CharValue(F.p2058, F.v4688, F.p2061);
F.v4671 = rt_range(rt_add(F.v4673, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v4688 = yr1028_Intern(rt_range(rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p2059)], (rt_sub(F.v4671, INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), INT64_C(1));
F.v4675 = yr2049_CharValue(F.p2058, F.v4688, F.p2061);
F.v4671 = rt_range(rt_add(F.v4671, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.p2060 >= INT64_C(4096))) {
yr1124_FailS(F.p2061, y_str("string literal too long", 23));
}
F.p2060 = rt_range(rt_add(F.p2060, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(F.v4684).p)[y_ix1(F.v4684, F.p2060)] = F.v4675;
}
yr986_SB();
yr991_SC(34);
F.lo4716 = INT64_C(1);
F.hi4717 = F.p2060;
{ rt_int hi4721 = F.hi4717;
for (rt_int i4720 = F.lo4716; i4720 <= hi4721; i4720++) { F.c_4719 = i4720;
F.v4675 = ((rt_int *)(F.v4684).p)[y_ix1(F.v4684, F.c_4719)];
if ((((F.v4675 == INT64_C(34))) || ((F.v4675 == INT64_C(92))))) {
yr991_SC(92);
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, F.v4675)]);
} else if (((((F.v4675 >= INT64_C(32))) && ((F.v4675 < INT64_C(127)))) && (((((!(F.v4675 == INT64_C(63)))) || ((F.c_4719 == INT64_C(1)))) || ((!(((rt_int *)(F.v4684).p)[y_ix1(F.v4684, rt_sub(F.c_4719, INT64_C(1)))] == INT64_C(63)))))))) {
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, F.v4675)]);
} else {
yr991_SC(92);
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, rt_add(INT64_C(48), (rt_div(F.v4675, INT64_C(64)))))]);
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, rt_add(INT64_C(48), (rt_mod((rt_div(F.v4675, INT64_C(8))), INT64_C(8)))))]);
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, rt_add(INT64_C(48), (rt_mod(F.v4675, INT64_C(8)))))]);
}
if (i4720 == hi4721) break;
}}
yr991_SC(34);
{ rt_int rv4748 = yr1016_SE();
(*F.p2060_o) = F.p2060;
return rv4748; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2066_Manifest(void * a_p2067, rt_int * a_p2068, rt_int * a_p2069) {
struct yf2070 F;
memset((void *)&F, 0, sizeof F);
F.p2067 = a_p2067;
F.p2068_o = a_p2068;
F.p2069_o = a_p2069;
F.p2068 = 0;
F.p2069 = INT64_C(0);
if ((((*(yR95 *)rt_nil_check(F.p2067))).f_kind == v729)) {
F.p2068 = 1;
F.p2069 = ((*(yR95 *)rt_nil_check(F.p2067))).f_ival;
(*F.p2068_o) = F.p2068;
(*F.p2069_o) = F.p2069;
return;
}
if ((((*(yR95 *)rt_nil_check(F.p2067))).f_kind == v738)) {
F.v4766 = yr2042_AlphabetFor(F.p2067, ((void *)0));
F.p2069 = yr2035_CharOrd(F.v4766, ((*(yR95 *)rt_nil_check(F.p2067))).f_text);
F.p2068 = (F.p2069 >= INT64_C(0));
(*F.p2068_o) = F.p2068;
(*F.p2069_o) = F.p2069;
return;
}
if ((((*(yR95 *)rt_nil_check(F.p2067))).f_kind == v747)) {
if ((!(((*(yR95 *)rt_nil_check(F.p2067))).f_d == ((void *)0)))) {
F.v4754 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2067))).f_d))).f_name, ((*(yR95 *)rt_nil_check(F.p2067))).f_line));
F.v4754 = yr1637_FindLit(((*(yR95 *)rt_nil_check(F.p2067))).f_name, ((*(yR115 *)rt_nil_check(F.v4754))).f_rep);
} else {
F.v4754 = yr1612_Find(((*(yR95 *)rt_nil_check(F.p2067))).f_name);
}
if ((F.v4754 == ((void *)0))) {
(*F.p2068_o) = F.p2068;
(*F.p2069_o) = F.p2069;
return;
}
F.v4754 = yr1677_Real(F.v4754);
if ((((((((*(yR115 *)rt_nil_check(F.v4754))).f_kind == v843)) || ((((*(yR115 *)rt_nil_check(F.v4754))).f_kind == v834)))) && ((*(yR115 *)rt_nil_check(F.v4754))).f_hasmv)) {
F.p2068 = 1;
F.p2069 = ((*(yR115 *)rt_nil_check(F.v4754))).f_mval;
}
(*F.p2068_o) = F.p2068;
(*F.p2069_o) = F.p2069;
return;
}
if ((((*(yR95 *)rt_nil_check(F.p2067))).f_kind == v771)) {
yr2066_Manifest(((*(yR95 *)rt_nil_check(F.p2067))).f_a, &F.p2068, &F.p2069);
(*F.p2068_o) = F.p2068;
(*F.p2069_o) = F.p2069;
return;
}
if ((((*(yR95 *)rt_nil_check(F.p2067))).f_kind == v765)) {
yr2066_Manifest(((*(yR95 *)rt_nil_check(F.p2067))).f_a, &F.p2068, &F.p2069);
F.p2069 = rt_range(rt_neg(F.p2069), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2068_o) = F.p2068;
(*F.p2069_o) = F.p2069;
return;
}
if ((((*(yR95 *)rt_nil_check(F.p2067))).f_kind == v768)) {
yr2066_Manifest(((*(yR95 *)rt_nil_check(F.p2067))).f_a, &F.v4760, &F.v4756);
yr2066_Manifest(((*(yR95 *)rt_nil_check(F.p2067))).f_b, &F.v4762, &F.v4758);
if ((!((F.v4760 && F.v4762)))) {
(*F.p2068_o) = F.p2068;
(*F.p2069_o) = F.p2069;
return;
}
F.v4764 = ((*(yR95 *)rt_nil_check(F.p2067))).f_name;
F.p2068 = 1;
if ((F.v4764 == v543)) {
F.p2069 = rt_range(rt_add(F.v4756, F.v4758), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v4764 == v546)) {
F.p2069 = rt_range(rt_sub(F.v4756, F.v4758), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v4764 == v549)) {
F.p2069 = rt_range(rt_mul(F.v4756, F.v4758), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v4764 == v246)) && ((!(F.v4758 == INT64_C(0)))))) {
F.p2069 = rt_range(rt_div(F.v4756, F.v4758), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v4764 == v348)) && ((!(F.v4758 == INT64_C(0)))))) {
F.p2069 = rt_range(rt_mod(F.v4756, F.v4758), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.p2068 = 0;
}
(*F.p2068_o) = F.p2068;
(*F.p2069_o) = F.p2069;
return;
}
(*F.p2068_o) = F.p2068;
(*F.p2069_o) = F.p2069;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2074_Convert(rt_int a_p2075, void * a_p2076, void * a_p2077) {
struct yf2078 F;
memset((void *)&F, 0, sizeof F);
F.p2075 = a_p2075;
F.p2076 = a_p2076;
F.p2077 = a_p2077;
if ((yr1720_IsDiscrete(F.p2076) && ((!(((*(yR100 *)rt_nil_check(F.p2076))).f_lo == INT64_C(0)))))) {
if ((((((*(yR100 *)rt_nil_check(F.p2076))).f_hasm && ((*(yR100 *)rt_nil_check(F.p2077))).f_hasm) && ((((*(yR100 *)rt_nil_check(F.p2076))).f_mlo <= ((*(yR100 *)rt_nil_check(F.p2077))).f_mlo))) && ((((*(yR100 *)rt_nil_check(F.p2077))).f_mhi <= ((*(yR100 *)rt_nil_check(F.p2076))).f_mhi)))) {
{ rt_int rv4787 = F.p2075;
return rv4787; }
}
yr986_SB();
yr997_SA(y_str("rt_range(", 9));
yr1004_ST(F.p2075);
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1818_LoText(F.p2076));
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1824_HiText(F.p2076));
yr997_SA(y_str(")", 1));
{ rt_int rv4792 = yr1016_SE();
return rv4792; }
}
if ((((((*(yR100 *)rt_nil_check(F.p2076))).f_kind == v780)) && ((!(((*(yR100 *)rt_nil_check(F.p2076))).f_lo == INT64_C(0)))))) {
yr986_SB();
yr997_SA(y_str("rt_frange(", 10));
yr1004_ST(F.p2075);
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1818_LoText(F.p2076));
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1824_HiText(F.p2076));
yr997_SA(y_str(")", 1));
{ rt_int rv4798 = yr1016_SE();
return rv4798; }
}
if ((((((*(yR100 *)rt_nil_check(F.p2076))).f_kind == v777)) && ((!(((*(yR100 *)rt_nil_check(F.p2076))).f_lo == INT64_C(0)))))) {
yr986_SB();
yr997_SA(y_str("y_fixed(", 8));
yr1004_ST(F.p2075);
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1818_LoText(F.p2076));
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1824_HiText(F.p2076));
yr997_SA(y_str(", ", 2));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p2076))).f_scale);
yr997_SA(y_str(")", 1));
{ rt_int rv4805 = yr1016_SE();
return rv4805; }
}
{ rt_int rv4806 = F.p2075;
return rv4806; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2082_Store(rt_int a_p2083, void * a_p2084, rt_int a_p2085, void * a_p2086, rt_int a_p2087) {
struct yf2088 F;
memset((void *)&F, 0, sizeof F);
F.p2083 = a_p2083;
F.p2084 = a_p2084;
F.p2085 = a_p2085;
F.p2086 = a_p2086;
F.p2087 = a_p2087;
yr1789_CheckType(F.p2087, F.p2084, F.p2086);
if (yr1744_Deep(F.p2084)) {
F.v4816 = yr1146_Fresh(y_str("t", 1));
yr986_SB();
yr997_SA(y_str("{ ", 2));
yr1004_ST(yr1756_CType(F.p2084));
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v4816);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.p2085);
yr997_SA(y_str("; y_store(", 10));
yr1004_ST(yr1762_DescOf(F.p2084));
yr997_SA(y_str(", &", 3));
yr1004_ST(F.p2083);
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v4816);
yr997_SA(y_str("); }", 4));
F.v4814 = yr1016_SE();
yr1092_Emit(F.v4814);
return;
}
yr986_SB();
yr1004_ST(F.p2083);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2074_Convert(F.p2085, F.p2084, F.p2086));
yr997_SA(y_str(";", 1));
F.v4814 = yr1016_SE();
yr1092_Emit(F.v4814);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2092_IsVariable(void * a_p2093) {
struct yf2094 F;
memset((void *)&F, 0, sizeof F);
F.p2093 = a_p2093;
if ((((*(yR95 *)rt_nil_check(F.p2093))).f_kind == v747)) {
F.v4830 = yr1612_Find(((*(yR95 *)rt_nil_check(F.p2093))).f_name);
if ((F.v4830 == ((void *)0))) {
{ rt_int rv4834 = 0;
return rv4834; }
}
if (((*(yR115 *)rt_nil_check(F.v4830))).f_readonly) {
{ rt_int rv4836 = 0;
return rv4836; }
}
{ rt_int rv4837 = (((*(yR115 *)rt_nil_check(yr1677_Real(F.v4830)))).f_kind == v831);
return rv4837; }
}
if ((((*(yR95 *)rt_nil_check(F.p2093))).f_kind == v759)) {
{ rt_int rv4839 = (((*(yR95 *)rt_nil_check(F.p2093))).f_flag == INT64_C(0));
return rv4839; }
}
if ((((*(yR95 *)rt_nil_check(F.p2093))).f_kind == v756)) {
{ rt_int rv4840 = yr2092_IsVariable(((*(yR95 *)rt_nil_check(F.p2093))).f_a);
return rv4840; }
}
if ((((*(yR95 *)rt_nil_check(F.p2093))).f_kind == v753)) {
if ((!yr2092_IsVariable(((*(yR95 *)rt_nil_check(F.p2093))).f_a))) {
{ rt_int rv4842 = 0;
return rv4842; }
}
F.v4832 = yr1915_FindField(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2093))).f_a))).f_rep, ((*(yR95 *)rt_nil_check(F.p2093))).f_name);
if ((F.v4832 == ((void *)0))) {
{ rt_int rv4844 = 0;
return rv4844; }
}
{ rt_int rv4845 = (!((*(yR105 *)rt_nil_check(F.v4832))).f_isconst);
return rv4845; }
}
{ rt_int rv4847 = 0;
return rv4847; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2098_CheckPure(void * a_p2099) {
struct yf2100 F;
memset((void *)&F, 0, sizeof F);
F.p2099 = a_p2099;
F.v4851 = F.p2099;
if ((v2404 == ((void *)0))) {
return;
}
if ((!((*(yR115 *)rt_nil_check(v2404))).f_func)) {
return;
}
while ((((((*(yR95 *)rt_nil_check(F.v4851))).f_kind == v753)) || ((((*(yR95 *)rt_nil_check(F.v4851))).f_kind == v756)))) {
F.v4851 = ((*(yR95 *)rt_nil_check(F.v4851))).f_a;
}
if ((((*(yR95 *)rt_nil_check(F.v4851))).f_kind == v759)) {
if ((((*(yR95 *)rt_nil_check(F.v4851))).f_flag == INT64_C(0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2099))).f_line, y_str("a FUNCTION does not assign to a dynamic variable (X.A.4)", 56));
}
return;
}
if ((((*(yR95 *)rt_nil_check(F.v4851))).f_kind == v747)) {
F.v4853 = yr1612_Find(((*(yR95 *)rt_nil_check(F.v4851))).f_name);
if ((!(F.v4853 == ((void *)0)))) {
F.v4853 = yr1677_Real(F.v4853);
if ((((*(yR115 *)rt_nil_check(F.v4853))).f_level < ((*(yR115 *)rt_nil_check(v2404))).f_level)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2099))).f_line, ((*(yR95 *)rt_nil_check(F.v4851))).f_name, y_str(" is not local: a FUNCTION assigns only to its locals (X.A.4)", 60));
}
}
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2104_LValue(void * a_p2105, rt_int * a_p2106, void * * a_p2107) {
struct yf2108 F;
memset((void *)&F, 0, sizeof F);
F.p2105 = a_p2105;
F.p2106_o = a_p2106;
F.p2107_o = a_p2107;
yr2131_Expr(F.p2105, ((void *)0), &F.p2106, &F.p2107);
if ((!yr2092_IsVariable(F.p2105))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2105))).f_line, y_str("a variable is needed here (IX.A.1)", 34));
}
(*F.p2106_o) = F.p2106;
(*F.p2107_o) = F.p2107;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2112_Paren(rt_int a_p2113) {
struct yf2114 F;
memset((void *)&F, 0, sizeof F);
F.p2113 = a_p2113;
yr986_SB();
yr997_SA(y_str("(", 1));
yr1004_ST(F.p2113);
yr997_SA(y_str(")", 1));
{ rt_int rv4866 = yr1016_SE();
return rv4866; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2118_Lit(void * a_p2119, rt_int a_p2120) {
struct yf2121 F;
memset((void *)&F, 0, sizeof F);
F.p2119 = a_p2119;
F.p2120 = a_p2120;
F.v4871 = yr1714_CopyRep(F.p2119);
yr1843_SetRange(F.v4871, F.p2120, F.p2120);
((*(yR100 *)rt_nil_check(F.v4871))).f_elem = F.p2119;
{ void * rv4872 = F.v4871;
return rv4872; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2125_Qualifier(void * a_p2126) {
struct yf2127 F;
memset((void *)&F, 0, sizeof F);
F.p2126 = a_p2126;
F.v4876 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2126))).f_d))).f_name, ((*(yR95 *)rt_nil_check(F.p2126))).f_line));
if ((((!(((*(yR115 *)rt_nil_check(F.v4876))).f_kind == v837))) && ((!(((*(yR115 *)rt_nil_check(F.v4876))).f_kind == v840))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2126))).f_line, ((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2126))).f_d))).f_name, y_str(" is not a type", 14));
}
{ void * rv4878 = ((*(yR115 *)rt_nil_check(F.v4876))).f_rep;
return rv4878; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2131_Expr(void * a_p2132, void * a_p2133, rt_int * a_p2134, void * * a_p2135) {
struct yf2136 F;
memset((void *)&F, 0, sizeof F);
F.p2132 = a_p2132;
F.p2133 = a_p2133;
F.p2134_o = a_p2134;
F.p2135_o = a_p2135;
F.v4885 = ((*(yR95 *)rt_nil_check(F.p2132))).f_kind;
v960 = ((*(yR95 *)rt_nil_check(F.p2132))).f_line;
if ((F.v4885 == v771)) {
yr2131_Expr(((*(yR95 *)rt_nil_check(F.p2132))).f_a, F.p2133, &F.v4889, &F.p2135);
F.p2134 = yr2112_Paren(F.v4889);
} else if ((F.v4885 == v729)) {
F.p2135 = yr2118_Lit(v1683, ((*(yR95 *)rt_nil_check(F.p2132))).f_ival);
if ((!(((*(yR95 *)rt_nil_check(F.p2132))).f_d == ((void *)0)))) {
F.v4895 = yr2125_Qualifier(F.p2132);
if ((!(((*(yR100 *)rt_nil_check(F.v4895))).f_kind == v774))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2132))).f_line, y_str("an integer literal qualified by a type that is not INTEGER", 58));
}
((*(yR100 *)rt_nil_check(F.p2135))).f_tid = ((*(yR100 *)rt_nil_check(F.v4895))).f_tid;
((*(yR100 *)rt_nil_check(F.p2135))).f_tname = ((*(yR100 *)rt_nil_check(F.v4895))).f_tname;
}
yr986_SB();
yr997_SA(y_str("INT64_C(", 8));
yr1010_SI(((*(yR95 *)rt_nil_check(F.p2132))).f_ival);
yr997_SA(y_str(")", 1));
F.p2134 = yr1016_SE();
} else if ((F.v4885 == v738)) {
F.v4895 = yr2042_AlphabetFor(F.p2132, F.p2133);
F.v4901 = yr2049_CharValue(F.v4895, ((*(yR95 *)rt_nil_check(F.p2132))).f_text, ((*(yR95 *)rt_nil_check(F.p2132))).f_line);
F.p2135 = yr2118_Lit(F.v4895, F.v4901);
yr986_SB();
yr1010_SI(F.v4901);
F.p2134 = yr1016_SE();
} else if ((F.v4885 == v741)) {
F.v4895 = yr2042_AlphabetFor(F.p2132, F.p2133);
F.v4889 = yr2057_StringCodes(F.v4895, ((*(yR95 *)rt_nil_check(F.p2132))).f_text, &F.v4899, ((*(yR95 *)rt_nil_check(F.p2132))).f_line);
F.p2135 = yr1707_NewRep(v816, yr1021_T(y_str("string", 6)));
((*(yR100 *)rt_nil_check(F.p2135))).f_tname = yr1021_T(y_str("a string literal", 16));
((*(yR100 *)rt_nil_check(F.p2135))).f_elem = F.v4895;
((*(yR100 *)rt_nil_check(F.p2135))).f_nidx = INT64_C(1);
((*(yR100 *)rt_nil_check(F.p2135))).f_nlits = F.v4899;
yr986_SB();
yr997_SA(y_str("y_str(", 6));
yr1004_ST(F.v4889);
yr997_SA(y_str(", ", 2));
yr1010_SI(F.v4899);
yr997_SA(y_str(")", 1));
F.p2134 = yr1016_SE();
} else if ((F.v4885 == v735)) {
F.p2135 = v1695;
if ((!(((*(yR95 *)rt_nil_check(F.p2132))).f_d == ((void *)0)))) {
F.p2135 = yr2125_Qualifier(F.p2132);
}
F.p2134 = yr2112_Paren(((*(yR95 *)rt_nil_check(F.p2132))).f_text);
} else if ((F.v4885 == v732)) {
F.p2135 = v1697;
if ((!(((*(yR95 *)rt_nil_check(F.p2132))).f_d == ((void *)0)))) {
F.p2135 = yr2125_Qualifier(F.p2132);
}
F.p2134 = ((*(yR95 *)rt_nil_check(F.p2132))).f_text;
} else if ((F.v4885 == v744)) {
if ((((*(yR95 *)rt_nil_check(F.p2132))).f_d == ((void *)0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2132))).f_line, y_str("NIL is qualified by the name of a pointer type (VI.B.4)", 55));
}
F.p2135 = yr2125_Qualifier(F.p2132);
if ((!(((*(yR100 *)rt_nil_check(F.p2135))).f_kind == v798))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2132))).f_line, y_str("NIL of a type that is not a pointer", 35));
}
F.p2134 = yr1021_T(y_str("((void *)0)", 11));
} else if ((F.v4885 == v747)) {
if ((!(((*(yR95 *)rt_nil_check(F.p2132))).f_d == ((void *)0)))) {
F.v4895 = yr2125_Qualifier(F.p2132);
F.v4887 = yr1637_FindLit(((*(yR95 *)rt_nil_check(F.p2132))).f_name, F.v4895);
if ((F.v4887 == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2132))).f_line, ((*(yR95 *)rt_nil_check(F.p2132))).f_name, y_str(" is not a literal of that type", 30));
}
} else {
F.v4887 = yr1624_Lookup(((*(yR95 *)rt_nil_check(F.p2132))).f_name, ((*(yR95 *)rt_nil_check(F.p2132))).f_line);
}
yr2148_NameExpr(F.p2132, F.v4887, &F.p2134, &F.p2135);
} else if ((F.v4885 == v750)) {
yr2303_CallExpr(F.p2132, F.p2133, 0, &F.p2134, &F.p2135);
} else if ((F.v4885 == v753)) {
yr2131_Expr(((*(yR95 *)rt_nil_check(F.p2132))).f_a, ((void *)0), &F.v4889, &F.v4895);
((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2132))).f_a))).f_rep = F.v4895;
if ((!(((*(yR100 *)rt_nil_check(F.v4895))).f_kind == v795))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2132))).f_line, ((*(yR95 *)rt_nil_check(F.p2132))).f_name, y_str(": a component of something that is not a record", 47));
}
if (((*(yR100 *)rt_nil_check(F.v4895))).f_opaque) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2132))).f_line, ((*(yR100 *)rt_nil_check(F.v4895))).f_tname, y_str(" is exported opaquely: its components are hidden (X.B.3)", 56));
}
F.v4897 = yr1915_FindField(F.v4895, ((*(yR95 *)rt_nil_check(F.p2132))).f_name);
if ((F.v4897 == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2132))).f_line, ((*(yR95 *)rt_nil_check(F.p2132))).f_name, y_str(" is not a component of this record", 34));
}
F.p2135 = ((*(yR105 *)rt_nil_check(F.v4897))).f_rep;
if ((!(((*(yR105 *)rt_nil_check(F.v4897))).f_variant == INT64_C(0)))) {
F.v4891 = yr1146_Fresh(y_str("vr", 2));
yr986_SB();
yr997_SA(y_str("(*({ ", 5));
yr1004_ST(yr1756_CType(F.v4895));
yr997_SA(y_str(" *", 2));
yr1004_ST(F.v4891);
yr997_SA(y_str(" = &", 4));
yr1004_ST(yr2112_Paren(F.v4889));
yr997_SA(y_str("; if (!(", 8));
yr1004_ST(yr2140_VariantTest(F.v4895, F.v4897, F.v4891));
yr997_SA(y_str(")) rt_raise(RT_X_TAG); &", 24));
yr1004_ST(F.v4891);
yr997_SA(y_str("->f_", 4));
yr1004_ST(((*(yR95 *)rt_nil_check(F.p2132))).f_name);
yr997_SA(y_str("; }))", 5));
F.p2134 = yr1016_SE();
} else {
yr986_SB();
yr1004_ST(yr2112_Paren(F.v4889));
yr997_SA(y_str(".f_", 3));
yr1004_ST(((*(yR95 *)rt_nil_check(F.p2132))).f_name);
F.p2134 = yr1016_SE();
}
} else if ((((F.v4885 == v759)) && yr2292_UserOp(F.p2132, rt_range(v588, INT64_C(0), INT64_C(4000000)), ((*(yR95 *)rt_nil_check(F.p2132))).f_a, ((void *)0), &F.p2134, &F.p2135))) {
((*(yR95 *)rt_nil_check(F.p2132))).f_flag = INT64_C(1);
} else if ((F.v4885 == v759)) {
yr2131_Expr(((*(yR95 *)rt_nil_check(F.p2132))).f_a, ((void *)0), &F.v4889, &F.v4895);
if ((!(((*(yR100 *)rt_nil_check(F.v4895))).f_kind == v798))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2132))).f_line, y_str("^ of something that is not a pointer", 36));
}
if ((((*(yR100 *)rt_nil_check(F.v4895))).f_elem == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2132))).f_line, ((*(yR100 *)rt_nil_check(F.v4895))).f_forward, y_str(" is not declared", 16));
}
F.p2135 = ((*(yR100 *)rt_nil_check(F.v4895))).f_elem;
yr986_SB();
yr997_SA(y_str("(*(", 3));
yr1004_ST(yr1756_CType(F.p2135));
yr997_SA(y_str(" *)rt_nil_check(", 16));
yr1004_ST(F.v4889);
yr997_SA(y_str("))", 2));
F.p2134 = yr1016_SE();
} else if ((F.v4885 == v756)) {
yr2157_IndexExpr(F.p2132, &F.p2134, &F.p2135);
} else if ((F.v4885 == v762)) {
yr2131_Expr(((*(yR95 *)rt_nil_check(F.p2132))).f_a, v1685, &F.v4889, &F.v4895);
yr1789_CheckType(((*(yR95 *)rt_nil_check(F.p2132))).f_line, v1685, F.v4895);
F.p2135 = v1685;
yr986_SB();
yr997_SA(y_str("(!", 2));
yr1004_ST(F.v4889);
yr997_SA(y_str(")", 1));
F.p2134 = yr1016_SE();
} else if ((F.v4885 == v765)) {
if ((!yr2292_UserOp(F.p2132, rt_range(v546, INT64_C(0), INT64_C(4000000)), ((*(yR95 *)rt_nil_check(F.p2132))).f_a, ((void *)0), &F.p2134, &F.p2135))) {
yr2131_Expr(((*(yR95 *)rt_nil_check(F.p2132))).f_a, F.p2133, &F.v4889, &F.v4895);
yr2165_NegExpr(F.p2132, F.v4889, F.v4895, &F.p2134, &F.p2135);
}
} else if ((F.v4885 == v768)) {
yr2214_BinExpr(F.p2132, F.p2133, &F.p2134, &F.p2135);
} else {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2132))).f_line, y_str("not an expression", 17));
}
((*(yR95 *)rt_nil_check(F.p2132))).f_rep = F.p2135;
(*F.p2134_o) = F.p2134;
(*F.p2135_o) = F.p2135;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2140_VariantTest(void * a_p2141, void * a_p2142, rt_int a_p2143) {
struct yf2144 F;
memset((void *)&F, 0, sizeof F);
F.p2141 = a_p2141;
F.p2142 = a_p2142;
F.p2143 = a_p2143;
F.v4943 = ((*(yR105 *)rt_nil_check(F.p2142))).f_labels;
yr986_SB();
yr997_SA(y_str("0", 1));
while ((!(F.v4943 == ((void *)0)))) {
yr2066_Manifest(F.v4943, &F.v4945, &F.v4947);
yr997_SA(y_str(" || ", 4));
yr1004_ST(F.p2143);
yr997_SA(y_str("->f_", 4));
yr1004_ST(((*(yR105 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p2141))).f_selector))).f_name);
yr997_SA(y_str(" == ", 4));
yr1010_SI(F.v4947);
F.v4943 = ((*(yR95 *)rt_nil_check(F.v4943))).f_next;
}
{ rt_int rv4952 = yr1016_SE();
return rv4952; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2148_NameExpr(void * a_p2149, void * a_p2150, rt_int * a_p2151, void * * a_p2152) {
struct yf2153 F;
memset((void *)&F, 0, sizeof F);
F.p2149 = a_p2149;
F.p2150 = a_p2150;
F.p2151_o = a_p2151;
F.p2152_o = a_p2152;
F.v4959 = yr1677_Real(F.p2150);
if ((((*(yR115 *)rt_nil_check(F.v4959))).f_kind == v843)) {
if ((((((*(yR95 *)rt_nil_check(F.p2149))).f_d == ((void *)0))) && yr1631_Ambiguous(F.v4959))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2149))).f_line, ((*(yR95 *)rt_nil_check(F.p2149))).f_name, y_str(" names values of two types here: qualify it (VI.A.3)", 52));
}
F.p2152 = yr2118_Lit(((*(yR115 *)rt_nil_check(F.v4959))).f_rep, ((*(yR115 *)rt_nil_check(F.v4959))).f_mval);
yr986_SB();
yr1010_SI(((*(yR115 *)rt_nil_check(F.v4959))).f_mval);
F.p2151 = yr1016_SE();
(*F.p2151_o) = F.p2151;
(*F.p2152_o) = F.p2152;
return;
}
if ((((((*(yR115 *)rt_nil_check(F.v4959))).f_kind == v831)) || ((((*(yR115 *)rt_nil_check(F.v4959))).f_kind == v834)))) {
F.p2152 = ((*(yR115 *)rt_nil_check(F.v4959))).f_rep;
F.p2151 = yr1671_SymPath(F.v4959);
(*F.p2151_o) = F.p2151;
(*F.p2152_o) = F.p2152;
return;
}
if ((((*(yR115 *)rt_nil_check(F.v4959))).f_kind == v846)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2149))).f_line, ((*(yR95 *)rt_nil_check(F.p2149))).f_name, y_str(" is a routine: a call needs ()", 30));
}
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2149))).f_line, ((*(yR95 *)rt_nil_check(F.p2149))).f_name, y_str(" is not a value", 15));
(*F.p2151_o) = F.p2151;
(*F.p2152_o) = F.p2152;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2157_IndexExpr(void * a_p2158, rt_int * a_p2159, void * * a_p2160) {
struct yf2161 F;
memset((void *)&F, 0, sizeof F);
F.p2158 = a_p2158;
F.p2159_o = a_p2159;
F.p2160_o = a_p2160;
yr2131_Expr(((*(yR95 *)rt_nil_check(F.p2158))).f_a, ((void *)0), &F.v4968, &F.v4974);
if ((!yr1732_IsArrayLike(F.v4974))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2158))).f_line, y_str("[] of something that is not an array", 36));
}
F.v4982 = yr1260_Count(((*(yR95 *)rt_nil_check(F.p2158))).f_b);
if ((!(F.v4982 == ((*(yR100 *)rt_nil_check(F.v4974))).f_nidx))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2158))).f_line, y_str("the number of subscripts is not the number of dimensions", 56));
}
F.p2160 = ((*(yR100 *)rt_nil_check(F.v4974))).f_elem;
F.v4984 = (((((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2158))).f_a))).f_kind == v747)) || ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2158))).f_a))).f_kind == v753))) || ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2158))).f_a))).f_kind == v756))) || ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2158))).f_a))).f_kind == v759)));
if (F.v4984) {
F.v4972 = F.v4968;
} else {
F.v4972 = yr1146_Fresh(y_str("ya", 2));
}
yr986_SB();
if ((!F.v4984)) {
yr997_SA(y_str("(*({ yarr ", 10));
yr1004_ST(F.v4972);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.v4968);
yr997_SA(y_str("; &", 3));
}
yr997_SA(y_str("((", 2));
yr1004_ST(yr1756_CType(F.p2160));
yr997_SA(y_str(" *)(", 4));
yr1004_ST(F.v4972);
yr997_SA(y_str(").p)[y_ix", 9));
yr1010_SI(F.v4982);
yr997_SA(y_str("(", 1));
yr1004_ST(F.v4972);
F.p2159 = yr1016_SE();
F.v4980 = ((*(yR95 *)rt_nil_check(F.p2158))).f_b;
F.v4978 = ((*(yR100 *)rt_nil_check(F.v4974))).f_idx;
while ((!(F.v4980 == ((void *)0)))) {
yr2131_Expr(F.v4980, F.v4978, &F.v4970, &F.v4976);
if ((((!(F.v4978 == ((void *)0)))) && ((((*(yR100 *)rt_nil_check(F.v4974))).f_kind == v792)))) {
yr1789_CheckType(((*(yR95 *)rt_nil_check(F.v4980))).f_line, F.v4978, F.v4976);
} else if ((!((((((*(yR100 *)rt_nil_check(F.v4976))).f_kind == v774)) || yr1720_IsDiscrete(F.v4976))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v4980))).f_line, y_str("a subscript is an integer or scalar value", 41));
}
yr986_SB();
yr1004_ST(F.p2159);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v4970);
F.p2159 = yr1016_SE();
if ((!(F.v4978 == ((void *)0)))) {
F.v4978 = ((*(yR100 *)rt_nil_check(F.v4978))).f_link;
}
F.v4980 = ((*(yR95 *)rt_nil_check(F.v4980))).f_next;
}
yr986_SB();
yr1004_ST(F.p2159);
yr997_SA(y_str(")]", 2));
if ((!F.v4984)) {
yr997_SA(y_str("; }))", 5));
}
F.p2159 = yr1016_SE();
(*F.p2159_o) = F.p2159;
(*F.p2160_o) = F.p2160;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2165_NegExpr(void * a_p2166, rt_int a_p2167, void * a_p2168, rt_int * a_p2169, void * * a_p2170) {
struct yf2171 F;
memset((void *)&F, 0, sizeof F);
F.p2166 = a_p2166;
F.p2167 = a_p2167;
F.p2168 = a_p2168;
F.p2169_o = a_p2169;
F.p2170_o = a_p2170;
yr986_SB();
if ((((*(yR100 *)rt_nil_check(F.p2168))).f_kind == v774)) {
F.p2170 = yr1714_CopyRep(F.p2168);
((*(yR100 *)rt_nil_check(F.p2170))).f_lo = INT64_C(0);
((*(yR100 *)rt_nil_check(F.p2170))).f_hasm = 0;
yr997_SA(y_str("rt_neg(", 7));
yr1004_ST(F.p2167);
yr997_SA(y_str(")", 1));
} else if ((((((*(yR100 *)rt_nil_check(F.p2168))).f_kind == v780)) || ((((*(yR100 *)rt_nil_check(F.p2168))).f_kind == v777)))) {
F.p2170 = yr1714_CopyRep(F.p2168);
((*(yR100 *)rt_nil_check(F.p2170))).f_lo = INT64_C(0);
yr997_SA(y_str("(-", 2));
yr1004_ST(F.p2167);
yr997_SA(y_str(")", 1));
} else if ((((*(yR100 *)rt_nil_check(F.p2168))).f_kind == v804)) {
F.p2170 = F.p2168;
yr997_SA(y_str("y_set_compl(", 12));
yr1004_ST(F.p2167);
yr997_SA(y_str(")", 1));
} else {
v897 = 0;
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2166))).f_line, y_str("- of something that is not a number or a set", 44));
}
F.p2169 = yr1016_SE();
(*F.p2169_o) = F.p2169;
(*F.p2170_o) = F.p2170;
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2175_Unbounded(void * a_p2176) {
struct yf2177 F;
memset((void *)&F, 0, sizeof F);
F.p2176 = a_p2176;
F.v5019 = yr1714_CopyRep(F.p2176);
((*(yR100 *)rt_nil_check(F.v5019))).f_lo = INT64_C(0);
((*(yR100 *)rt_nil_check(F.v5019))).f_hi = INT64_C(0);
((*(yR100 *)rt_nil_check(F.v5019))).f_hasm = 0;
{ void * rv5023 = F.v5019;
return rv5023; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2181_Call2(yarr a_p2183, rt_int a_p2184, rt_int a_p2185) {
struct yf2186 F;
memset((void *)&F, 0, sizeof F);
F.p2183 = a_p2183;
F.p2184 = a_p2184;
F.p2185 = a_p2185;
yr986_SB();
yr997_SA(F.p2183);
yr997_SA(y_str("(", 1));
yr1004_ST(F.p2184);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.p2185);
yr997_SA(y_str(")", 1));
{ rt_int rv5031 = yr1016_SE();
return rv5031; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2190_Infix(rt_int a_p2191, yarr a_p2193, rt_int a_p2194) {
struct yf2195 F;
memset((void *)&F, 0, sizeof F);
F.p2191 = a_p2191;
F.p2193 = a_p2193;
F.p2194 = a_p2194;
yr986_SB();
yr997_SA(y_str("(", 1));
yr1004_ST(F.p2191);
yr997_SA(y_str(" ", 1));
yr997_SA(F.p2193);
yr997_SA(y_str(" ", 1));
yr1004_ST(F.p2194);
yr997_SA(y_str(")", 1));
{ rt_int rv5040 = yr1016_SE();
return rv5040; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2199_EqCode(rt_int a_p2200, void * a_p2201, rt_int a_p2202, void * a_p2203) {
struct yf2204 F;
memset((void *)&F, 0, sizeof F);
F.p2200 = a_p2200;
F.p2201 = a_p2201;
F.p2202 = a_p2202;
F.p2203 = a_p2203;
F.v5051 = F.p2201;
if ((((*(yR100 *)rt_nil_check(F.p2201))).f_kind == v816)) {
F.v5051 = F.p2203;
}
if ((((((((*(yR100 *)rt_nil_check(F.v5051))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.v5051))).f_kind == v795))) || ((((*(yR100 *)rt_nil_check(F.v5051))).f_kind == v813))) || ((((*(yR100 *)rt_nil_check(F.v5051))).f_kind == v816)))) {
F.v5047 = yr1146_Fresh(y_str("e", 1));
F.v5049 = yr1146_Fresh(y_str("e", 1));
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(yr1756_CType(F.v5051));
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v5047);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.p2200);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v5049);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.p2202);
yr997_SA(y_str("; y_eq(", 7));
if ((((((*(yR100 *)rt_nil_check(F.v5051))).f_kind == v813)) || ((((*(yR100 *)rt_nil_check(F.v5051))).f_kind == v816)))) {
yr997_SA(y_str("y_desc_vector(", 14));
yr1004_ST(yr1762_DescOf(((*(yR100 *)rt_nil_check(F.v5051))).f_elem));
yr997_SA(y_str(")", 1));
} else {
yr1004_ST(yr1762_DescOf(F.v5051));
}
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v5047);
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v5049);
yr997_SA(y_str("); })", 5));
{ rt_int rv5065 = yr1016_SE();
return rv5065; }
}
if ((((*(yR100 *)rt_nil_check(F.v5051))).f_kind == v804)) {
{ rt_int rv5067 = yr2181_Call2(y_str("y_set_eq", 8), F.p2200, F.p2202);
return rv5067; }
}
{ rt_int rv5069 = yr2190_Infix(F.p2200, y_str("==", 2), F.p2202);
return rv5069; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2208_IsOrdered(void * a_p2209) {
struct yf2210 F;
memset((void *)&F, 0, sizeof F);
F.p2209 = a_p2209;
if ((((((((*(yR100 *)rt_nil_check(F.p2209))).f_kind == v774)) || ((((*(yR100 *)rt_nil_check(F.p2209))).f_kind == v780))) || ((((*(yR100 *)rt_nil_check(F.p2209))).f_kind == v777))) || ((((*(yR100 *)rt_nil_check(F.p2209))).f_kind == v789)))) {
{ rt_int rv5073 = 1;
return rv5073; }
}
{ rt_int rv5074 = (((((*(yR100 *)rt_nil_check(F.p2209))).f_kind == v786)) && ((*(yR100 *)rt_nil_check(F.p2209))).f_ordered);
return rv5074; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2214_BinExpr(void * a_p2215, void * a_p2216, rt_int * a_p2217, void * * a_p2218) {
struct yf2219 F;
memset((void *)&F, 0, sizeof F);
F.p2215 = a_p2215;
F.p2216 = a_p2216;
F.p2217_o = a_p2217;
F.p2218_o = a_p2218;
F.v5081 = ((*(yR95 *)rt_nil_check(F.p2215))).f_name;
if (yr2292_UserOp(F.p2215, F.v5081, ((*(yR95 *)rt_nil_check(F.p2215))).f_a, ((*(yR95 *)rt_nil_check(F.p2215))).f_b, &F.p2217, &F.p2218)) {
(*F.p2217_o) = F.p2217;
(*F.p2218_o) = F.p2218;
return;
}
if ((((F.v5081 == v207)) || ((F.v5081 == v369)))) {
yr2131_Expr(((*(yR95 *)rt_nil_check(F.p2215))).f_a, v1685, &F.v5083, &F.v5089);
yr1789_CheckType(((*(yR95 *)rt_nil_check(F.p2215))).f_line, v1685, F.v5089);
yr2131_Expr(((*(yR95 *)rt_nil_check(F.p2215))).f_b, v1685, &F.v5085, &F.v5091);
yr1789_CheckType(((*(yR95 *)rt_nil_check(F.p2215))).f_line, v1685, F.v5091);
F.p2218 = v1685;
if ((F.v5081 == v207)) {
F.p2217 = yr2190_Infix(F.v5083, y_str("&&", 2), F.v5085);
} else {
F.p2217 = yr2190_Infix(F.v5083, y_str("||", 2), F.v5085);
}
(*F.p2217_o) = F.p2217;
(*F.p2218_o) = F.p2218;
return;
}
if ((F.v5081 == v330)) {
yr2131_Expr(((*(yR95 *)rt_nil_check(F.p2215))).f_b, ((void *)0), &F.v5085, &F.v5091);
if ((!(((*(yR100 *)rt_nil_check(F.v5091))).f_kind == v804))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2215))).f_line, y_str("IN needs a set on its right", 27));
}
yr2131_Expr(((*(yR95 *)rt_nil_check(F.p2215))).f_a, ((*(yR100 *)rt_nil_check(F.v5091))).f_elem, &F.v5083, &F.v5089);
yr1789_CheckType(((*(yR95 *)rt_nil_check(F.p2215))).f_line, ((*(yR100 *)rt_nil_check(F.v5091))).f_elem, F.v5089);
F.p2218 = v1685;
F.p2217 = yr2181_Call2(y_str("y_set_in", 8), F.v5083, F.v5085);
(*F.p2217_o) = F.p2217;
(*F.p2218_o) = F.p2218;
return;
}
F.v5093 = ((void *)0);
if (((((((((!(F.p2216 == ((void *)0)))) && ((!(F.v5081 == v555)))) && ((!(F.v5081 == v540)))) && ((!(F.v5081 == v558)))) && ((!(F.v5081 == v510)))) && ((!(F.v5081 == v561)))) && ((!(F.v5081 == v513))))) {
F.v5093 = F.p2216;
}
yr2131_Expr(((*(yR95 *)rt_nil_check(F.p2215))).f_a, F.v5093, &F.v5083, &F.v5089);
yr2131_Expr(((*(yR95 *)rt_nil_check(F.p2215))).f_b, F.v5089, &F.v5085, &F.v5091);
if ((((F.v5081 == v555)) || ((F.v5081 == v540)))) {
yr1789_CheckType(((*(yR95 *)rt_nil_check(F.p2215))).f_line, F.v5089, F.v5091);
if (((((((*(yR100 *)rt_nil_check(F.v5089))).f_kind == v807)) || ((((*(yR100 *)rt_nil_check(F.v5089))).f_kind == v801))) || ((((*(yR100 *)rt_nil_check(F.v5089))).f_kind == v810)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2215))).f_line, y_str("= and # are not defined for signals, files and semaphores", 57));
}
if ((((*(yR100 *)rt_nil_check(F.v5089))).f_opaque && (((rt_div(((*(yR100 *)rt_nil_check(F.v5089))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2215))).f_line, ((*(yR100 *)rt_nil_check(F.v5089))).f_tname, y_str(" is opaque here: = is not exported (X.B.3)", 42));
}
F.p2218 = v1685;
F.p2217 = yr2199_EqCode(F.v5083, F.v5089, F.v5085, F.v5091);
if ((F.v5081 == v540)) {
yr986_SB();
yr997_SA(y_str("(!", 2));
yr1004_ST(F.p2217);
yr997_SA(y_str(")", 1));
F.p2217 = yr1016_SE();
}
(*F.p2217_o) = F.p2217;
(*F.p2218_o) = F.p2218;
return;
}
if ((((((F.v5081 == v558)) || ((F.v5081 == v510))) || ((F.v5081 == v561))) || ((F.v5081 == v513)))) {
yr1789_CheckType(((*(yR95 *)rt_nil_check(F.p2215))).f_line, F.v5089, F.v5091);
if ((!yr2208_IsOrdered(F.v5089))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2215))).f_line, y_str("< <= > >= apply to ordered values (VIII.A.1)", 44));
}
F.p2218 = v1685;
if ((F.v5081 == v558)) {
F.p2217 = yr2190_Infix(F.v5083, y_str("<", 1), F.v5085);
} else if ((F.v5081 == v510)) {
F.p2217 = yr2190_Infix(F.v5083, y_str("<=", 2), F.v5085);
} else if ((F.v5081 == v561)) {
F.p2217 = yr2190_Infix(F.v5083, y_str(">", 1), F.v5085);
} else {
F.p2217 = yr2190_Infix(F.v5083, y_str(">=", 2), F.v5085);
}
(*F.p2217_o) = F.p2217;
(*F.p2218_o) = F.p2218;
return;
}
yr1789_CheckType(((*(yR95 *)rt_nil_check(F.p2215))).f_line, F.v5089, F.v5091);
F.v5095 = ((*(yR100 *)rt_nil_check(F.v5089))).f_kind;
if ((((*(yR100 *)rt_nil_check(F.v5089))).f_kind == v816)) {
F.v5095 = ((*(yR100 *)rt_nil_check(F.v5091))).f_kind;
}
if ((F.v5081 == v459)) {
if ((F.v5095 == v783)) {
F.p2218 = v1685;
F.p2217 = yr2190_Infix(F.v5083, y_str("!=", 2), F.v5085);
} else if ((F.v5095 == v804)) {
F.p2218 = F.v5089;
F.p2217 = yr2181_Call2(y_str("y_set_xor", 9), F.v5083, F.v5085);
} else {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2215))).f_line, y_str("XOR applies to BOOLEAN values and sets", 38));
}
(*F.p2217_o) = F.p2217;
(*F.p2218_o) = F.p2218;
return;
}
if ((F.v5095 == v804)) {
F.p2218 = F.v5089;
if ((F.v5081 == v543)) {
F.p2217 = yr2181_Call2(y_str("y_set_union", 11), F.v5083, F.v5085);
} else if ((F.v5081 == v546)) {
F.p2217 = yr2181_Call2(y_str("y_set_diff", 10), F.v5083, F.v5085);
} else if ((F.v5081 == v549)) {
F.p2217 = yr2181_Call2(y_str("y_set_inter", 11), F.v5083, F.v5085);
} else {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2215))).f_line, y_str("this operator does not apply to sets", 36));
}
(*F.p2217_o) = F.p2217;
(*F.p2218_o) = F.p2218;
return;
}
if ((F.v5095 == v774)) {
F.p2218 = yr2175_Unbounded(F.v5089);
if ((F.v5081 == v543)) {
F.p2217 = yr2181_Call2(y_str("rt_add", 6), F.v5083, F.v5085);
} else if ((F.v5081 == v546)) {
F.p2217 = yr2181_Call2(y_str("rt_sub", 6), F.v5083, F.v5085);
} else if ((F.v5081 == v549)) {
F.p2217 = yr2181_Call2(y_str("rt_mul", 6), F.v5083, F.v5085);
} else if ((F.v5081 == v246)) {
F.p2217 = yr2181_Call2(y_str("rt_div", 6), F.v5083, F.v5085);
} else if ((F.v5081 == v348)) {
F.p2217 = yr2181_Call2(y_str("rt_mod", 6), F.v5083, F.v5085);
} else if ((F.v5081 == v552)) {
F.p2218 = v1695;
yr986_SB();
yr997_SA(y_str("rt_fdiv((double)(", 17));
yr1004_ST(F.v5083);
yr997_SA(y_str("), (double)(", 12));
yr1004_ST(F.v5085);
yr997_SA(y_str("))", 2));
F.p2217 = yr1016_SE();
} else {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2215))).f_line, F.v5081, y_str(" is a free operator: no definition of it is visible (VIII.A)", 60));
}
(*F.p2217_o) = F.p2217;
(*F.p2218_o) = F.p2218;
return;
}
if ((((F.v5095 == v780)) || ((F.v5095 == v777)))) {
F.p2218 = yr2175_Unbounded(F.v5089);
if ((F.v5081 == v543)) {
F.p2217 = yr2190_Infix(F.v5083, y_str("+", 1), F.v5085);
} else if ((F.v5081 == v546)) {
F.p2217 = yr2190_Infix(F.v5083, y_str("-", 1), F.v5085);
} else if ((F.v5081 == v549)) {
F.p2217 = yr2190_Infix(F.v5083, y_str("*", 1), F.v5085);
} else if ((F.v5081 == v552)) {
F.p2218 = v1695;
F.p2217 = yr2181_Call2(y_str("rt_fdiv", 7), F.v5083, F.v5085);
} else {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2215))).f_line, F.v5081, y_str(" does not apply to these numbers", 32));
}
(*F.p2217_o) = F.p2217;
(*F.p2218_o) = F.p2218;
return;
}
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2215))).f_line, F.v5081, y_str(" does not apply to these values", 31));
(*F.p2217_o) = F.p2217;
(*F.p2218_o) = F.p2218;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2253_Fits(void * a_p2254, void * a_p2255) {
struct yf2256 F;
memset((void *)&F, 0, sizeof F);
F.p2254 = a_p2254;
F.p2255 = a_p2255;
if ((((*(yR100 *)rt_nil_check(F.p2254))).f_kind == v813)) {
if ((!yr1732_IsArrayLike(F.p2255))) {
{ rt_int rv5138 = 0;
return rv5138; }
}
if ((!(((*(yR100 *)rt_nil_check(F.p2255))).f_nidx == ((*(yR100 *)rt_nil_check(F.p2254))).f_nidx))) {
{ rt_int rv5140 = 0;
return rv5140; }
}
{ rt_int rv5141 = yr1774_SameType(((*(yR100 *)rt_nil_check(F.p2254))).f_elem, ((*(yR100 *)rt_nil_check(F.p2255))).f_elem);
return rv5141; }
}
if ((((*(yR100 *)rt_nil_check(F.p2254))).f_kind == v825)) {
{ rt_int rv5143 = 1;
return rv5143; }
}
{ rt_int rv5144 = yr1774_SameType(F.p2254, F.p2255);
return rv5144; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2260_Choose(void * a_p2261, rt_int a_p2262, rt_int a_p2263) {
struct yf2264 F;
memset((void *)&F, 0, sizeof F);
F.p2261 = a_p2261;
F.p2262 = a_p2262;
F.p2263 = a_p2263;
F.v5150 = F.p2261;
while ((!(F.v5150 == ((void *)0)))) {
if ((((*(yR115 *)rt_nil_check(F.v5150))).f_nparams == F.p2263)) {
F.v5154 = 1;
F.v5152 = ((*(yR115 *)rt_nil_check(F.v5150))).f_params;
F.v5156 = INT64_C(1);
while ((!(F.v5152 == ((void *)0)))) {
if ((!yr2253_Fits(((*(yR110 *)rt_nil_check(F.v5152))).f_rep, ((void * *)(v2239).p)[y_ix1(v2239, rt_add(F.p2262, F.v5156))]))) {
F.v5154 = 0;
}
F.v5156 = rt_range(rt_add(F.v5156, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5152 = ((*(yR110 *)rt_nil_check(F.v5152))).f_next;
}
if (F.v5154) {
{ void * rv5163 = F.v5150;
return rv5163; }
}
}
F.v5150 = ((*(yR115 *)rt_nil_check(F.v5150))).f_alt;
}
{ void * rv5164 = ((void *)0);
return rv5164; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2268_HidesStandard(void * a_p2269) {
struct yf2270 F;
memset((void *)&F, 0, sizeof F);
F.p2269 = a_p2269;
F.v5168 = F.p2269;
while ((!(F.v5168 == ((void *)0)))) {
if ((((!(((*(yR115 *)rt_nil_check(F.v5168))).f_decl == ((void *)0)))) && ((((*(yR95 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5168))).f_decl))).f_ival == INT64_C(0))))) {
{ rt_int rv5171 = 1;
return rv5171; }
}
F.v5168 = ((*(yR115 *)rt_nil_check(F.v5168))).f_alt;
}
{ rt_int rv5173 = 0;
return rv5173; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2274_CompileArgs(void * a_p2275, void * a_p2276, rt_int * a_p2277, rt_int * a_p2278) {
struct yf2279 F;
memset((void *)&F, 0, sizeof F);
F.p2275 = a_p2275;
F.p2276 = a_p2276;
F.p2277_o = a_p2277;
F.p2278_o = a_p2278;
F.v5180 = F.p2275;
F.v5182 = ((void *)0);
F.p2277 = v2250;
F.p2278 = INT64_C(0);
if ((!(F.p2276 == ((void *)0)))) {
F.v5182 = ((*(yR115 *)rt_nil_check(F.p2276))).f_params;
}
while ((!(F.v5180 == ((void *)0)))) {
if ((v2250 >= INT64_C(4000))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v5180))).f_line, y_str("calls nested too deeply", 23));
}
F.p2278 = rt_range(rt_add(F.p2278, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v2250 = rt_range(rt_add(F.p2277, F.p2278), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5184 = ((void *)0);
if ((!(F.v5182 == ((void *)0)))) {
F.v5184 = ((*(yR110 *)rt_nil_check(F.v5182))).f_rep;
F.v5182 = ((*(yR110 *)rt_nil_check(F.v5182))).f_next;
}
yr2131_Expr(F.v5180, F.v5184, &((rt_int *)(v2230).p)[y_ix1(v2230, rt_add(F.p2277, F.p2278))], &((void * *)(v2239).p)[y_ix1(v2239, rt_add(F.p2277, F.p2278))]);
((void * *)(v2248).p)[y_ix1(v2248, rt_add(F.p2277, F.p2278))] = F.v5180;
F.v5180 = ((*(yR95 *)rt_nil_check(F.v5180))).f_next;
}
(*F.p2277_o) = F.p2277;
(*F.p2278_o) = F.p2278;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2283_CallCode(void * a_p2284, rt_int a_p2285, rt_int a_p2286, rt_int a_p2287) {
struct yf2288 F;
memset((void *)&F, 0, sizeof F);
F.p2284 = a_p2284;
F.p2285 = a_p2285;
F.p2286 = a_p2286;
F.p2287 = a_p2287;
F.v5200 = ((*(yR115 *)rt_nil_check(F.p2284))).f_params;
F.v5202 = rt_range(rt_add(F.p2285, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5206 = 1;
if ((!(F.p2286 == ((*(yR115 *)rt_nil_check(F.p2284))).f_nparams))) {
yr1132_FailN(F.p2287, ((*(yR115 *)rt_nil_check(F.p2284))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
yr986_SB();
yr1004_ST(((*(yR115 *)rt_nil_check(F.p2284))).f_cname);
yr997_SA(y_str("(", 1));
if ((((*(yR115 *)rt_nil_check(F.p2284))).f_level > INT64_C(1))) {
yr1004_ST(yr1658_FramePtr(rt_range(rt_sub(((*(yR115 *)rt_nil_check(F.p2284))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v5206 = 0;
}
while ((!(F.v5200 == ((void *)0)))) {
if ((!F.v5206)) {
yr997_SA(y_str(", ", 2));
}
F.v5206 = 0;
if ((!yr2253_Fits(((*(yR110 *)rt_nil_check(F.v5200))).f_rep, ((void * *)(v2239).p)[y_ix1(v2239, F.v5202)]))) {
v897 = 0;
yr1781_TypeClash(((*(yR95 *)rt_nil_check(((void * *)(v2248).p)[y_ix1(v2248, F.v5202)]))).f_line, ((*(yR110 *)rt_nil_check(F.v5200))).f_rep, ((void * *)(v2239).p)[y_ix1(v2239, F.v5202)]);
}
if ((((*(yR110 *)rt_nil_check(F.v5200))).f_cls == v867)) {
yr1004_ST(yr2074_Convert(((rt_int *)(v2230).p)[y_ix1(v2230, F.v5202)], ((*(yR110 *)rt_nil_check(F.v5200))).f_rep, ((void * *)(v2239).p)[y_ix1(v2239, F.v5202)]));
} else {
if ((!yr2092_IsVariable(((void * *)(v2248).p)[y_ix1(v2248, F.v5202)]))) {
v897 = 0;
yr1132_FailN(((*(yR95 *)rt_nil_check(((void * *)(v2248).p)[y_ix1(v2248, F.v5202)]))).f_line, ((*(yR110 *)rt_nil_check(F.v5200))).f_name, y_str(": the actual of a VAR or OUT parameter must be a variable", 57));
}
yr2098_CheckPure(((void * *)(v2248).p)[y_ix1(v2248, F.v5202)]);
yr997_SA(y_str("&", 1));
yr1004_ST(((rt_int *)(v2230).p)[y_ix1(v2230, F.v5202)]);
}
F.v5202 = rt_range(rt_add(F.v5202, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5200 = ((*(yR110 *)rt_nil_check(F.v5200))).f_next;
}
yr997_SA(y_str(")", 1));
v2250 = F.p2285;
{ rt_int rv5223 = yr1016_SE();
return rv5223; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2292_UserOp(void * a_p2293, rt_int a_p2294, void * a_p2295, void * a_p2296, rt_int * a_p2297, void * * a_p2298) {
struct yf2299 F;
memset((void *)&F, 0, sizeof F);
F.p2293 = a_p2293;
F.p2294 = a_p2294;
F.p2295 = a_p2295;
F.p2296 = a_p2296;
F.p2297_o = a_p2297;
F.p2298_o = a_p2298;
F.v5232 = yr1612_Find(F.p2294);
if ((F.v5232 == ((void *)0))) {
{ rt_int rv5240 = 0;
(*F.p2297_o) = F.p2297;
(*F.p2298_o) = F.p2298;
return rv5240; }
}
F.v5232 = yr1677_Real(F.v5232);
if ((!(((*(yR115 *)rt_nil_check(F.v5232))).f_kind == v846))) {
{ rt_int rv5242 = 0;
(*F.p2297_o) = F.p2297;
(*F.p2298_o) = F.p2298;
return rv5242; }
}
((*(yR95 *)rt_nil_check(F.p2295))).f_next = F.p2296;
if ((!(F.p2296 == ((void *)0)))) {
((*(yR95 *)rt_nil_check(F.p2296))).f_next = ((void *)0);
}
yr2274_CompileArgs(F.p2295, ((void *)0), &F.v5236, &F.v5238);
F.v5234 = yr2260_Choose(F.v5232, F.v5236, F.v5238);
if ((F.v5234 == ((void *)0))) {
v2250 = F.v5236;
if (yr2268_HidesStandard(F.v5232)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2293))).f_line, F.p2294, y_str(": no definition takes operands of these types", 45));
}
{ rt_int rv5245 = 0;
(*F.p2297_o) = F.p2297;
(*F.p2298_o) = F.p2298;
return rv5245; }
}
F.p2297 = yr2283_CallCode(F.v5234, F.v5236, F.v5238, ((*(yR95 *)rt_nil_check(F.p2293))).f_line);
F.p2298 = ((*(yR115 *)rt_nil_check(F.v5234))).f_ret;
{ rt_int rv5247 = 1;
(*F.p2297_o) = F.p2297;
(*F.p2298_o) = F.p2298;
return rv5247; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2303_CallExpr(void * a_p2304, void * a_p2305, rt_int a_p2306, rt_int * a_p2307, void * * a_p2308) {
struct yf2309 F;
memset((void *)&F, 0, sizeof F);
F.p2304 = a_p2304;
F.p2305 = a_p2305;
F.p2306 = a_p2306;
F.p2307_o = a_p2307;
F.p2308_o = a_p2308;
F.v5255 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(F.p2304))).f_name, ((*(yR95 *)rt_nil_check(F.p2304))).f_line));
if ((((*(yR115 *)rt_nil_check(F.v5255))).f_kind == v861)) {
yr2777_StdCall(((*(yR115 *)rt_nil_check(F.v5255))).f_mval, F.p2304, F.p2306, &F.p2307, &F.p2308);
(*F.p2307_o) = F.p2307;
(*F.p2308_o) = F.p2308;
return;
}
if ((((((*(yR115 *)rt_nil_check(F.v5255))).f_kind == v837)) || ((((*(yR115 *)rt_nil_check(F.v5255))).f_kind == v840)))) {
if (F.p2306) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2304))).f_line, y_str("a value is not a statement", 26));
}
yr2313_Denote(((*(yR115 *)rt_nil_check(F.v5255))).f_rep, F.p2304, &F.p2307, &F.p2308);
(*F.p2307_o) = F.p2307;
(*F.p2308_o) = F.p2308;
return;
}
if ((!(((*(yR115 *)rt_nil_check(F.v5255))).f_kind == v846))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2304))).f_line, ((*(yR95 *)rt_nil_check(F.p2304))).f_name, y_str(" is not a routine", 17));
}
if ((((*(yR115 *)rt_nil_check(F.v5255))).f_alt == ((void *)0))) {
yr2274_CompileArgs(((*(yR95 *)rt_nil_check(F.p2304))).f_a, F.v5255, &F.v5259, &F.v5261);
F.v5257 = F.v5255;
} else {
yr2274_CompileArgs(((*(yR95 *)rt_nil_check(F.p2304))).f_a, ((void *)0), &F.v5259, &F.v5261);
F.v5257 = yr2260_Choose(F.v5255, F.v5259, F.v5261);
if ((F.v5257 == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2304))).f_line, ((*(yR95 *)rt_nil_check(F.p2304))).f_name, y_str(": no definition takes actuals of these types", 44));
}
}
F.p2307 = yr2283_CallCode(F.v5257, F.v5259, F.v5261, ((*(yR95 *)rt_nil_check(F.p2304))).f_line);
F.p2308 = ((*(yR115 *)rt_nil_check(F.v5257))).f_ret;
if ((F.p2306 && ((!(((*(yR100 *)rt_nil_check(F.p2308))).f_kind == v822))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2304))).f_line, ((*(yR95 *)rt_nil_check(F.p2304))).f_name, y_str(" returns a value: it is called in an expression (IX.A.2)", 56));
}
if (((!F.p2306) && ((((*(yR100 *)rt_nil_check(F.p2308))).f_kind == v822)))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2304))).f_line, ((*(yR95 *)rt_nil_check(F.p2304))).f_name, y_str(" returns no value", 17));
}
(*F.p2307_o) = F.p2307;
(*F.p2308_o) = F.p2308;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2313_Denote(void * a_p2314, void * a_p2315, rt_int * a_p2316, void * * a_p2317) {
struct yf2318 F;
memset((void *)&F, 0, sizeof F);
F.p2314 = a_p2314;
F.p2315 = a_p2315;
F.p2316_o = a_p2316;
F.p2317_o = a_p2317;
F.v5273 = ((*(yR95 *)rt_nil_check(F.p2315))).f_a;
F.v5293 = INT64_C(0);
F.v5300 = 1;
F.p2317 = F.p2314;
if (((*(yR100 *)rt_nil_check(F.p2314))).f_abstract) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2315))).f_line, ((*(yR100 *)rt_nil_check(F.p2314))).f_tname, y_str(" has no representation to denote a value of", 43));
}
if ((((*(yR100 *)rt_nil_check(F.p2314))).f_kind == v795)) {
if (((*(yR100 *)rt_nil_check(F.p2314))).f_opaque) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2315))).f_line, ((*(yR100 *)rt_nil_check(F.p2314))).f_tname, y_str(" is opaque here (X.B.3)", 23));
}
yr986_SB();
yr997_SA(y_str("((", 2));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p2314))).f_cname);
yr997_SA(y_str("){ ", 3));
F.v5279 = yr1016_SE();
F.v5275 = ((*(yR100 *)rt_nil_check(F.p2314))).f_fields;
while ((!(F.v5275 == ((void *)0)))) {
if ((((((*(yR105 *)rt_nil_check(F.v5275))).f_variant == INT64_C(0))) || ((((*(yR105 *)rt_nil_check(F.v5275))).f_variant == F.v5293)))) {
if ((F.v5273 == ((void *)0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2315))).f_line, y_str("too few components in this record value", 39));
}
yr2131_Expr(F.v5273, ((*(yR105 *)rt_nil_check(F.v5275))).f_rep, &F.v5277, &F.v5283);
yr1789_CheckType(((*(yR95 *)rt_nil_check(F.v5273))).f_line, ((*(yR105 *)rt_nil_check(F.v5275))).f_rep, F.v5283);
if ((F.v5275 == ((*(yR100 *)rt_nil_check(F.p2314))).f_selector)) {
yr2066_Manifest(F.v5273, &F.v5291, &F.v5296);
if ((!F.v5291)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v5273))).f_line, y_str("the case-selection value is a manifest constant", 47));
}
F.v5293 = yr2322_VariantOf(F.p2314, F.v5296, ((*(yR95 *)rt_nil_check(F.v5273))).f_line);
}
yr986_SB();
yr1004_ST(F.v5279);
if ((!F.v5300)) {
yr997_SA(y_str(", ", 2));
}
F.v5300 = 0;
yr997_SA(y_str(".f_", 3));
yr1004_ST(((*(yR105 *)rt_nil_check(F.v5275))).f_name);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2074_Convert(F.v5277, ((*(yR105 *)rt_nil_check(F.v5275))).f_rep, F.v5283));
F.v5279 = yr1016_SE();
F.v5273 = ((*(yR95 *)rt_nil_check(F.v5273))).f_next;
}
F.v5275 = ((*(yR105 *)rt_nil_check(F.v5275))).f_next;
}
if ((!(F.v5273 == ((void *)0)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2315))).f_line, y_str("too many components in this record value", 40));
}
yr986_SB();
yr1004_ST(F.v5279);
yr997_SA(y_str(" })", 3));
F.p2316 = yr1016_SE();
(*F.p2316_o) = F.p2316;
(*F.p2317_o) = F.p2317;
return;
}
if ((((*(yR100 *)rt_nil_check(F.p2314))).f_kind == v792)) {
F.v5285 = yr1260_Count(F.v5273);
F.v5279 = yr1146_Fresh(y_str("da", 2));
if ((F.v5285 == INT64_C(1))) {
yr2131_Expr(F.v5273, ((*(yR100 *)rt_nil_check(F.p2314))).f_elem, &F.v5277, &F.v5283);
yr1789_CheckType(((*(yR95 *)rt_nil_check(F.v5273))).f_line, ((*(yR100 *)rt_nil_check(F.p2314))).f_elem, F.v5283);
F.v5281 = yr1146_Fresh(y_str("dv", 2));
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(yr1756_CType(((*(yR100 *)rt_nil_check(F.p2314))).f_elem));
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v5281);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2074_Convert(F.v5277, ((*(yR100 *)rt_nil_check(F.p2314))).f_elem, F.v5283));
yr997_SA(y_str("; y_fill(", 9));
yr1004_ST(yr1762_DescOf(F.p2314));
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v5281);
yr997_SA(y_str("); })", 5));
F.p2316 = yr1016_SE();
(*F.p2316_o) = F.p2316;
(*F.p2317_o) = F.p2317;
return;
}
yr986_SB();
yr997_SA(y_str("({ yarr ", 8));
yr1004_ST(F.v5279);
yr997_SA(y_str("; y_init(", 9));
yr1004_ST(yr1762_DescOf(F.p2314));
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v5279);
yr997_SA(y_str("); if (y_count(", 15));
yr1004_ST(F.v5279);
yr997_SA(y_str(", ", 2));
yr1010_SI(((*(yR100 *)rt_nil_check(F.p2314))).f_nidx);
yr997_SA(y_str(") != ", 5));
yr1010_SI(F.v5285);
yr997_SA(y_str(") rt_raise_msg(RT_X_RANGE, ", 27));
yr991_SC(34);
yr997_SA(y_str("wrong number of components", 26));
yr991_SC(34);
yr997_SA(y_str(");", 2));
F.p2316 = yr1016_SE();
F.v5289 = INT64_C(0);
while ((!(F.v5273 == ((void *)0)))) {
yr2131_Expr(F.v5273, ((*(yR100 *)rt_nil_check(F.p2314))).f_elem, &F.v5277, &F.v5283);
yr1789_CheckType(((*(yR95 *)rt_nil_check(F.v5273))).f_line, ((*(yR100 *)rt_nil_check(F.p2314))).f_elem, F.v5283);
yr986_SB();
yr1004_ST(F.p2316);
if (yr1744_Deep(((*(yR100 *)rt_nil_check(F.p2314))).f_elem)) {
yr997_SA(y_str(" { ", 3));
yr1004_ST(yr1756_CType(((*(yR100 *)rt_nil_check(F.p2314))).f_elem));
yr997_SA(y_str(" dv = ", 6));
yr1004_ST(F.v5277);
yr997_SA(y_str("; y_copy(", 9));
yr1004_ST(yr1762_DescOf(((*(yR100 *)rt_nil_check(F.p2314))).f_elem));
yr997_SA(y_str(", &((", 5));
yr1004_ST(yr1756_CType(((*(yR100 *)rt_nil_check(F.p2314))).f_elem));
yr997_SA(y_str(" *)", 3));
yr1004_ST(F.v5279);
yr997_SA(y_str(".p)[", 4));
yr1010_SI(F.v5289);
yr997_SA(y_str("], &dv); }", 10));
} else {
yr997_SA(y_str(" ((", 3));
yr1004_ST(yr1756_CType(((*(yR100 *)rt_nil_check(F.p2314))).f_elem));
yr997_SA(y_str(" *)", 3));
yr1004_ST(F.v5279);
yr997_SA(y_str(".p)[", 4));
yr1010_SI(F.v5289);
yr997_SA(y_str("] = ", 4));
yr1004_ST(yr2074_Convert(F.v5277, ((*(yR100 *)rt_nil_check(F.p2314))).f_elem, F.v5283));
yr997_SA(y_str(";", 1));
}
F.p2316 = yr1016_SE();
F.v5289 = rt_range(rt_add(F.v5289, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5273 = ((*(yR95 *)rt_nil_check(F.v5273))).f_next;
}
yr986_SB();
yr1004_ST(F.p2316);
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v5279);
yr997_SA(y_str("; })", 4));
F.p2316 = yr1016_SE();
(*F.p2316_o) = F.p2316;
(*F.p2317_o) = F.p2317;
return;
}
if ((((*(yR100 *)rt_nil_check(F.p2314))).f_kind == v804)) {
yr986_SB();
yr997_SA(y_str("y_set_new(", 10));
yr1004_ST(yr1818_LoText(((*(yR100 *)rt_nil_check(F.p2314))).f_elem));
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1824_HiText(((*(yR100 *)rt_nil_check(F.p2314))).f_elem));
yr997_SA(y_str(")", 1));
F.p2316 = yr1016_SE();
while ((!(F.v5273 == ((void *)0)))) {
yr2131_Expr(F.v5273, ((*(yR100 *)rt_nil_check(F.p2314))).f_elem, &F.v5277, &F.v5283);
yr1789_CheckType(((*(yR95 *)rt_nil_check(F.v5273))).f_line, ((*(yR100 *)rt_nil_check(F.p2314))).f_elem, F.v5283);
F.p2316 = yr2181_Call2(y_str("y_set_add", 9), F.p2316, F.v5277);
F.v5273 = ((*(yR95 *)rt_nil_check(F.v5273))).f_next;
}
(*F.p2316_o) = F.p2316;
(*F.p2317_o) = F.p2317;
return;
}
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2315))).f_line, ((*(yR100 *)rt_nil_check(F.p2314))).f_tname, y_str(" has no denotations of values", 29));
(*F.p2316_o) = F.p2316;
(*F.p2317_o) = F.p2317;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2322_VariantOf(void * a_p2323, rt_int a_p2324, rt_int a_p2325) {
struct yf2326 F;
memset((void *)&F, 0, sizeof F);
F.p2323 = a_p2323;
F.p2324 = a_p2324;
F.p2325 = a_p2325;
F.v5362 = ((*(yR100 *)rt_nil_check(F.p2323))).f_fields;
while ((!(F.v5362 == ((void *)0)))) {
if ((!(((*(yR105 *)rt_nil_check(F.v5362))).f_variant == INT64_C(0)))) {
F.v5364 = ((*(yR105 *)rt_nil_check(F.v5362))).f_labels;
while ((!(F.v5364 == ((void *)0)))) {
yr2066_Manifest(F.v5364, &F.v5366, &F.v5368);
if ((F.v5366 && ((F.v5368 == F.p2324)))) {
{ rt_int rv5370 = ((*(yR105 *)rt_nil_check(F.v5362))).f_variant;
return rv5370; }
}
F.v5364 = ((*(yR95 *)rt_nil_check(F.v5364))).f_next;
}
}
F.v5362 = ((*(yR105 *)rt_nil_check(F.v5362))).f_next;
}
{ rt_int rv5372 = INT64_C(-1);
return rv5372; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2409_Emit2(yarr a_p2411, rt_int a_p2412) {
struct yf2413 F;
memset((void *)&F, 0, sizeof F);
F.p2411 = a_p2411;
F.p2412 = a_p2412;
yr986_SB();
yr997_SA(F.p2411);
yr1004_ST(F.p2412);
F.v5377 = yr1016_SE();
yr1092_Emit(F.v5377);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2417_Emit3(yarr a_p2419, rt_int a_p2420, yarr a_p2422) {
struct yf2423 F;
memset((void *)&F, 0, sizeof F);
F.p2419 = a_p2419;
F.p2420 = a_p2420;
F.p2422 = a_p2422;
yr986_SB();
yr997_SA(F.p2419);
yr1004_ST(F.p2420);
yr997_SA(F.p2422);
F.v5383 = yr1016_SE();
yr1092_Emit(F.v5383);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2427_PopTo(rt_int a_p2428) {
struct yf2429 F;
memset((void *)&F, 0, sizeof F);
F.p2428 = a_p2428;
if ((v2339 > F.p2428)) {
yr2417_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v2337).p)[y_ix1(v2337, rt_add(F.p2428, INT64_C(1)))], y_str(".prev;", 6));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2433_LeaveBlock(void) {
struct yf2434 F;
memset((void *)&F, 0, sizeof F);
if ((v2363 > INT64_C(0))) {
if ((!(((rt_int *)(v2352).p)[y_ix1(v2352, v2363)] == INT64_C(0)))) {
yr2417_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v2352).p)[y_ix1(v2352, v2363)], y_str(".prev;", 6));
}
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2438_RaiseCode(rt_int a_p2439) {
struct yf2440 F;
memset((void *)&F, 0, sizeof F);
F.p2439 = a_p2439;
yr986_SB();
yr997_SA(y_str("rt_raise(rt_exc(", 16));
yr991_SC(34);
yr1004_ST(F.p2439);
yr991_SC(34);
yr997_SA(y_str("));", 3));
{ rt_int rv5401 = yr1016_SE();
return rv5401; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2444_BlockStatements(void * a_p2445) {
struct yf2446 F;
memset((void *)&F, 0, sizeof F);
F.p2445 = a_p2445;
F.v5417 = ((*(yR95 *)rt_nil_check(F.p2445))).f_a;
F.v5419 = INT64_C(0);
while ((!(F.v5417 == ((void *)0)))) {
if ((((((*(yR95 *)rt_nil_check(F.v5417))).f_kind == v615)) && ((F.v5419 == INT64_C(0))))) {
F.v5419 = yr1146_Fresh(y_str("xs", 2));
yr2417_Emit3(y_str("rt_frame *", 10), F.v5419, y_str(" = rt_xtop;", 11));
}
F.v5417 = ((*(yR95 *)rt_nil_check(F.v5417))).f_next;
}
if ((((*(yR95 *)rt_nil_check(F.p2445))).f_b == ((void *)0))) {
v2363 = rt_range(rt_add(v2363, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2352).p)[y_ix1(v2352, v2363)] = INT64_C(0);
((rt_int *)(v2361).p)[y_ix1(v2361, v2363)] = F.v5419;
yr2450_Statements(((*(yR95 *)rt_nil_check(F.p2445))).f_c);
v2363 = rt_range(rt_sub(v2363, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr2518_CheckLabels(((*(yR95 *)rt_nil_check(F.p2445))).f_a);
return;
}
v2406 = 1;
F.v5405 = yr1146_Fresh(y_str("xf", 2));
yr2417_Emit3(y_str("{ rt_frame ", 11), F.v5405, y_str(";", 1));
yr2417_Emit3(y_str("if (RT_TRY(", 11), F.v5405, y_str(")) {", 4));
v2339 = rt_range(rt_add(v2339, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2337).p)[y_ix1(v2337, v2339)] = F.v5405;
v2363 = rt_range(rt_add(v2363, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2352).p)[y_ix1(v2352, v2363)] = F.v5405;
((rt_int *)(v2361).p)[y_ix1(v2361, v2363)] = F.v5419;
yr2450_Statements(((*(yR95 *)rt_nil_check(F.p2445))).f_c);
v2363 = rt_range(rt_sub(v2363, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v2339 = rt_range(rt_sub(v2339, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr2518_CheckLabels(((*(yR95 *)rt_nil_check(F.p2445))).f_a);
yr2417_Emit3(y_str("RT_POP(", 7), F.v5405, y_str(");", 2));
yr1098_EmitS(y_str("} else {", 8));
yr2417_Emit3(y_str("RT_POP(", 7), F.v5405, y_str(");", 2));
F.v5407 = yr1146_Fresh(y_str("xc", 2));
yr2417_Emit3(y_str("int ", 4), F.v5407, y_str(" = rt_xcur;", 11));
v2363 = rt_range(rt_add(v2363, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2352).p)[y_ix1(v2352, v2363)] = INT64_C(0);
((rt_int *)(v2361).p)[y_ix1(v2361, v2363)] = INT64_C(0);
v2375 = rt_range(rt_add(v2375, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2373).p)[y_ix1(v2373, v2375)] = F.v5407;
F.v5415 = 1;
F.v5411 = ((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2445))).f_b))).f_a;
while ((!(F.v5411 == ((void *)0)))) {
yr986_SB();
if (F.v5415) {
yr997_SA(y_str("if (", 4));
} else {
yr997_SA(y_str("} else if (", 11));
}
F.v5415 = 0;
F.v5413 = ((*(yR95 *)rt_nil_check(F.v5411))).f_a;
while ((!(F.v5413 == ((void *)0)))) {
yr1004_ST(F.v5407);
yr997_SA(y_str(" == rt_exc(", 11));
yr991_SC(34);
yr1004_ST(((*(yR95 *)rt_nil_check(F.v5413))).f_name);
yr991_SC(34);
yr997_SA(y_str(")", 1));
if ((!(((*(yR95 *)rt_nil_check(F.v5413))).f_next == ((void *)0)))) {
yr997_SA(y_str(" || ", 4));
}
F.v5413 = ((*(yR95 *)rt_nil_check(F.v5413))).f_next;
}
yr997_SA(y_str(") {", 3));
F.v5409 = yr1016_SE();
yr1092_Emit(F.v5409);
yr2450_Statements(((*(yR95 *)rt_nil_check(F.v5411))).f_b);
F.v5411 = ((*(yR95 *)rt_nil_check(F.v5411))).f_next;
}
if ((!F.v5415)) {
yr1098_EmitS(y_str("} else {", 8));
}
if ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2445))).f_b))).f_flag == INT64_C(1))) {
yr2450_Statements(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2445))).f_b))).f_b);
} else {
yr2417_Emit3(y_str("rt_raise(", 9), F.v5407, y_str(");", 2));
}
if ((!F.v5415)) {
yr1098_EmitS(y_str("}", 1));
}
v2375 = rt_range(rt_sub(v2375, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v2363 = rt_range(rt_sub(v2363, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1098_EmitS(y_str("}}", 2));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2450_Statements(void * a_p2451) {
struct yf2452 F;
memset((void *)&F, 0, sizeof F);
F.p2451 = a_p2451;
F.v5481 = F.p2451;
while ((!(F.v5481 == ((void *)0)))) {
yr2474_Statement(F.v5481);
F.v5481 = ((*(yR95 *)rt_nil_check(F.v5481))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2456_Cond(void * a_p2457) {
struct yf2458 F;
memset((void *)&F, 0, sizeof F);
F.p2457 = a_p2457;
yr2131_Expr(F.p2457, v1685, &F.v5485, &F.v5487);
yr1789_CheckType(((*(yR95 *)rt_nil_check(F.p2457))).f_line, v1685, F.v5487);
{ rt_int rv5488 = F.v5485;
return rv5488; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2462_Label(void * a_p2463, void * a_p2464) {
struct yf2465 F;
memset((void *)&F, 0, sizeof F);
F.p2463 = a_p2463;
F.p2464 = a_p2464;
if (((((((*(yR95 *)rt_nil_check(F.p2463))).f_kind == v747)) && ((((*(yR95 *)rt_nil_check(F.p2463))).f_d == ((void *)0)))) && ((((*(yR100 *)rt_nil_check(F.p2464))).f_kind == v786)))) {
F.v5497 = yr1637_FindLit(((*(yR95 *)rt_nil_check(F.p2463))).f_name, F.p2464);
if ((!(F.v5497 == ((void *)0)))) {
{ rt_int rv5502 = ((*(yR115 *)rt_nil_check(yr1677_Real(F.v5497)))).f_mval;
return rv5502; }
}
}
yr2131_Expr(F.p2463, F.p2464, &F.v5501, &F.v5499);
yr1789_CheckType(((*(yR95 *)rt_nil_check(F.p2463))).f_line, F.p2464, F.v5499);
yr2066_Manifest(F.p2463, &F.v5493, &F.v5495);
if ((!F.v5493)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2463))).f_line, y_str("a CASE label is a manifest constant (IX.B.1)", 44));
}
{ rt_int rv5504 = F.v5495;
return rv5504; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2469_CopyOut(void) {
struct yf2470 F;
memset((void *)&F, 0, sizeof F);
if ((v2404 == ((void *)0))) {
return;
}
F.v5507 = ((*(yR115 *)rt_nil_check(v2404))).f_params;
while ((!(F.v5507 == ((void *)0)))) {
if ((((*(yR110 *)rt_nil_check(F.v5507))).f_cls == v870)) {
yr986_SB();
yr997_SA(y_str("(*F.", 4));
yr1004_ST(((*(yR110 *)rt_nil_check(F.v5507))).f_cname);
yr997_SA(y_str("_o)", 3));
F.v5509 = yr1016_SE();
yr2082_Store(F.v5509, ((*(yR110 *)rt_nil_check(F.v5507))).f_rep, yr1651_Path(v1576, ((*(yR110 *)rt_nil_check(F.v5507))).f_cname), ((*(yR110 *)rt_nil_check(F.v5507))).f_rep, INT64_C(0));
}
F.v5507 = ((*(yR110 *)rt_nil_check(F.v5507))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2474_Statement(void * a_p2475) {
struct yf2476 F;
memset((void *)&F, 0, sizeof F);
F.p2475 = a_p2475;
F.v5516 = ((*(yR95 *)rt_nil_check(F.p2475))).f_kind;
v960 = ((*(yR95 *)rt_nil_check(F.p2475))).f_line;
if ((!(((*(yR95 *)rt_nil_check(F.p2475))).f_text == INT64_C(0)))) {
yr2506_PlaceLabel(F.p2475);
}
if ((F.v5516 == v684)) {
yr2104_LValue(((*(yR95 *)rt_nil_check(F.p2475))).f_a, &F.v5518, &F.v5530);
yr2098_CheckPure(((*(yR95 *)rt_nil_check(F.p2475))).f_a);
if ((((((*(yR100 *)rt_nil_check(F.v5530))).f_kind == v807)) || yr1750_HoldsSignal(F.v5530))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2475))).f_line, y_str("assignment is not defined for signals (VI.A.1.d)", 48));
}
if ((((((*(yR100 *)rt_nil_check(F.v5530))).f_kind == v801)) || ((((*(yR100 *)rt_nil_check(F.v5530))).f_kind == v810)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2475))).f_line, y_str("assignment is not defined for files and semaphores (VII.B)", 58));
}
if ((((*(yR100 *)rt_nil_check(F.v5530))).f_opaque && (((rt_mod(((*(yR100 *)rt_nil_check(F.v5530))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2475))).f_line, ((*(yR100 *)rt_nil_check(F.v5530))).f_tname, y_str(" is opaque here: := is not exported (X.B.3)", 43));
}
yr2131_Expr(((*(yR95 *)rt_nil_check(F.p2475))).f_b, F.v5530, &F.v5520, &F.v5532);
yr2082_Store(F.v5518, F.v5530, F.v5520, F.v5532, ((*(yR95 *)rt_nil_check(F.p2475))).f_line);
} else if ((F.v5516 == v687)) {
F.v5546 = yr1612_Find(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2475))).f_a))).f_name);
if ((!(F.v5546 == ((void *)0)))) {
F.v5546 = yr1677_Real(F.v5546);
}
if ((((!(F.v5546 == ((void *)0)))) && ((((*(yR115 *)rt_nil_check(F.v5546))).f_kind == v855)))) {
yr2669_Activate(((*(yR95 *)rt_nil_check(F.p2475))).f_a, F.v5546);
} else {
yr2303_CallExpr(((*(yR95 *)rt_nil_check(F.p2475))).f_a, ((void *)0), 1, &F.v5518, &F.v5530);
yr2409_Emit2(y_str("", 0), F.v5518);
yr986_SB();
yr1004_ST(F.v5518);
yr997_SA(y_str(";", 1));
F.v5522 = yr1016_SE();
((*(yR125 *)rt_nil_check((v956).f_tail))).f_t = F.v5522;
}
} else if ((F.v5516 == v708)) {
F.v5538 = 1;
F.v5534 = ((*(yR95 *)rt_nil_check(F.p2475))).f_a;
while ((!(F.v5534 == ((void *)0)))) {
F.v5518 = yr2456_Cond(((*(yR95 *)rt_nil_check(F.v5534))).f_a);
if (F.v5538) {
yr2417_Emit3(y_str("if (", 4), F.v5518, y_str(") {", 3));
} else {
yr2417_Emit3(y_str("} else if (", 11), F.v5518, y_str(") {", 3));
}
F.v5538 = 0;
yr2450_Statements(((*(yR95 *)rt_nil_check(F.v5534))).f_b);
F.v5534 = ((*(yR95 *)rt_nil_check(F.v5534))).f_next;
}
if ((((*(yR95 *)rt_nil_check(F.p2475))).f_flag == INT64_C(1))) {
yr1098_EmitS(y_str("} else {", 8));
yr2450_Statements(((*(yR95 *)rt_nil_check(F.p2475))).f_b);
}
yr1098_EmitS(y_str("}", 1));
} else if ((F.v5516 == v714)) {
F.v5518 = yr2456_Cond(((*(yR95 *)rt_nil_check(F.p2475))).f_a);
yr2417_Emit3(y_str("while (", 7), F.v5518, y_str(") {", 3));
yr2450_Statements(((*(yR95 *)rt_nil_check(F.p2475))).f_b);
yr1098_EmitS(y_str("}", 1));
} else if ((F.v5516 == v720)) {
F.v5524 = yr1146_Fresh(y_str("yl_", 3));
v2398 = rt_range(rt_add(v2398, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2385).p)[y_ix1(v2385, v2398)] = ((*(yR95 *)rt_nil_check(F.p2475))).f_name;
((rt_int *)(v2387).p)[y_ix1(v2387, v2398)] = F.v5524;
((rt_int *)(v2396).p)[y_ix1(v2396, v2398)] = v2339;
yr1098_EmitS(y_str("for (;;) {", 10));
yr2450_Statements(((*(yR95 *)rt_nil_check(F.p2475))).f_b);
yr1098_EmitS(y_str("}", 1));
yr2417_Emit3(y_str("", 0), F.v5524, y_str(": ;", 3));
v2398 = rt_range(rt_sub(v2398, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v5516 == v696)) {
F.v5540 = 0;
F.v5542 = v2398;
while ((((F.v5542 > v2401)) && (!F.v5540))) {
if ((((rt_int *)(v2385).p)[y_ix1(v2385, F.v5542)] == ((*(yR95 *)rt_nil_check(F.p2475))).f_name)) {
F.v5540 = 1;
yr2427_PopTo(((rt_int *)(v2396).p)[y_ix1(v2396, F.v5542)]);
yr2417_Emit3(y_str("goto ", 5), ((rt_int *)(v2387).p)[y_ix1(v2387, F.v5542)], y_str(";", 1));
}
F.v5542 = rt_range(rt_sub(F.v5542, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((!F.v5540)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2475))).f_line, ((*(yR95 *)rt_nil_check(F.p2475))).f_name, y_str(": EXIT names no LOOP around it here (IX.A.5)", 44));
}
} else if ((F.v5516 == v717)) {
yr2480_ForStatement(F.p2475);
} else if ((F.v5516 == v711)) {
yr2131_Expr(((*(yR95 *)rt_nil_check(F.p2475))).f_a, ((void *)0), &F.v5518, &F.v5530);
if ((!yr1720_IsDiscrete(F.v5530))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2475))).f_line, y_str("SELECT on a value that is not integer or scalar", 47));
}
yr2417_Emit3(y_str("switch (", 8), F.v5518, y_str(") {", 3));
F.v5534 = ((*(yR95 *)rt_nil_check(F.p2475))).f_b;
while ((!(F.v5534 == ((void *)0)))) {
F.v5536 = ((*(yR95 *)rt_nil_check(F.v5534))).f_a;
while ((!(F.v5536 == ((void *)0)))) {
F.v5544 = yr2462_Label(F.v5536, F.v5530);
yr986_SB();
yr997_SA(y_str("case ", 5));
yr1010_SI(F.v5544);
yr997_SA(y_str(":", 1));
F.v5522 = yr1016_SE();
yr1092_Emit(F.v5522);
F.v5536 = ((*(yR95 *)rt_nil_check(F.v5536))).f_next;
}
yr1098_EmitS(y_str("{", 1));
yr2450_Statements(((*(yR95 *)rt_nil_check(F.v5534))).f_b);
yr1098_EmitS(y_str("} break;", 8));
F.v5534 = ((*(yR95 *)rt_nil_check(F.v5534))).f_next;
}
yr1098_EmitS(y_str("default: {", 10));
if ((((*(yR95 *)rt_nil_check(F.p2475))).f_flag == INT64_C(1))) {
yr2450_Statements(((*(yR95 *)rt_nil_check(F.p2475))).f_c);
}
yr1098_EmitS(y_str("} break;", 8));
yr1098_EmitS(y_str("}", 1));
} else if ((F.v5516 == v699)) {
yr2494_ReturnStatement(F.p2475);
} else if ((F.v5516 == v705)) {
if ((((*(yR95 *)rt_nil_check(F.p2475))).f_name == INT64_C(0))) {
if ((v2375 == INT64_C(0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2475))).f_line, y_str("PROPAGATE_EXCEPTION without a name is used in a handler (IX.A.8)", 64));
}
yr2417_Emit3(y_str("rt_raise(", 9), ((rt_int *)(v2373).p)[y_ix1(v2373, v2375)], y_str(");", 2));
} else {
yr2433_LeaveBlock();
yr1092_Emit(yr2438_RaiseCode(((*(yR95 *)rt_nil_check(F.p2475))).f_name));
}
} else if ((F.v5516 == v690)) {
F.v5518 = yr2456_Cond(((*(yR95 *)rt_nil_check(F.p2475))).f_a);
yr2417_Emit3(y_str("if (!(", 6), F.v5518, y_str(")) {", 4));
yr2433_LeaveBlock();
yr1098_EmitS(y_str("rt_raise(RT_X_ASSERT); }", 24));
} else if ((F.v5516 == v723)) {
yr2500_BeginStatement(F.p2475);
} else if ((F.v5516 == v702)) {
yr2693_TerminateStatement(F.p2475);
} else if ((F.v5516 == v693)) {
yr2512_GotoStatement(F.p2475);
} else {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2475))).f_line, y_str("not a statement", 15));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2480_ForStatement(void * a_p2481) {
struct yf2482 F;
memset((void *)&F, 0, sizeof F);
F.p2481 = a_p2481;
F.v5608 = yr1857_MakeRep(((*(yR95 *)rt_nil_check(F.p2481))).f_a, INT64_C(0), 0);
if ((!yr1720_IsDiscrete(F.v5608))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2481))).f_line, y_str("FOR goes over an integer or scalar representation", 49));
}
yr1797_CheckRepresented(F.v5608, ((*(yR95 *)rt_nil_check(F.p2481))).f_line);
yr1595_OpenScope(0);
F.v5616 = yr1588_NewSym(v834, ((*(yR95 *)rt_nil_check(F.p2481))).f_name);
((*(yR115 *)rt_nil_check(F.v5616))).f_rep = F.v5608;
((*(yR115 *)rt_nil_check(F.v5616))).f_level = v1576;
((*(yR115 *)rt_nil_check(F.v5616))).f_cname = yr1146_Fresh(y_str("c_", 2));
yr1664_DeclStorage(yr1021_T(y_str("rt_int", 6)), ((*(yR115 *)rt_nil_check(F.v5616))).f_cname);
yr1644_Define(F.v5616, ((*(yR95 *)rt_nil_check(F.p2481))).f_line);
F.v5610 = yr1146_Fresh(y_str("i", 1));
F.v5612 = yr1146_Fresh(y_str("hi", 2));
yr986_SB();
yr997_SA(y_str("{ rt_int ", 9));
yr1004_ST(F.v5612);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr1824_HiText(F.v5608));
yr997_SA(y_str(";", 1));
F.v5614 = yr1016_SE();
yr1092_Emit(F.v5614);
yr986_SB();
yr997_SA(y_str("for (rt_int ", 12));
yr1004_ST(F.v5610);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr1818_LoText(F.v5608));
yr997_SA(y_str("; ", 2));
yr1004_ST(F.v5610);
yr997_SA(y_str(" <= ", 4));
yr1004_ST(F.v5612);
yr997_SA(y_str("; ", 2));
yr1004_ST(F.v5610);
yr997_SA(y_str("++) { ", 6));
yr1004_ST(yr1671_SymPath(F.v5616));
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.v5610);
yr997_SA(y_str(";", 1));
F.v5614 = yr1016_SE();
yr1092_Emit(F.v5614);
yr2450_Statements(((*(yR95 *)rt_nil_check(F.p2481))).f_b);
yr2417_Emit3(y_str("if (", 4), F.v5610, y_str(" == ", 4));
((*(yR125 *)rt_nil_check((v956).f_tail))).f_t = yr2486_Join(((*(yR125 *)rt_nil_check((v956).f_tail))).f_t, F.v5612, yr1021_T(y_str(") break;", 8)));
yr1098_EmitS(y_str("}}", 2));
yr1601_CloseScope();
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2486_Join(rt_int a_p2487, rt_int a_p2488, rt_int a_p2489) {
struct yf2490 F;
memset((void *)&F, 0, sizeof F);
F.p2487 = a_p2487;
F.p2488 = a_p2488;
F.p2489 = a_p2489;
yr986_SB();
yr1004_ST(F.p2487);
yr1004_ST(F.p2488);
yr1004_ST(F.p2489);
{ rt_int rv5644 = yr1016_SE();
return rv5644; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2494_ReturnStatement(void * a_p2495) {
struct yf2496 F;
memset((void *)&F, 0, sizeof F);
F.p2495 = a_p2495;
if ((v2404 == ((void *)0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2495))).f_line, y_str("RETURN outside a routine (IX.A.6)", 33));
}
if ((((*(yR115 *)rt_nil_check(v2404))).f_kind == v855)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2495))).f_line, y_str("a process ends with TERMINATE_PROCESS (IX.A.7)", 46));
}
F.v5656 = ((*(yR115 *)rt_nil_check(v2404))).f_ret;
if ((((*(yR95 *)rt_nil_check(F.p2495))).f_a == ((void *)0))) {
if ((!(((*(yR100 *)rt_nil_check(F.v5656))).f_kind == v822))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2495))).f_line, y_str("RETURN needs a value here (IX.A.6)", 34));
}
yr2469_CopyOut();
yr2688_LeaveMonitor();
yr2427_PopTo(v2342);
yr1098_EmitS(y_str("return;", 7));
return;
}
if ((((*(yR100 *)rt_nil_check(F.v5656))).f_kind == v822)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2495))).f_line, y_str("this routine returns no value (IX.A.6)", 38));
}
yr2131_Expr(((*(yR95 *)rt_nil_check(F.p2495))).f_a, F.v5656, &F.v5648, &F.v5654);
yr1789_CheckType(((*(yR95 *)rt_nil_check(F.p2495))).f_line, F.v5656, F.v5654);
F.v5652 = yr1146_Fresh(y_str("rv", 2));
yr986_SB();
yr997_SA(y_str("{ ", 2));
yr1004_ST(yr1756_CType(F.v5656));
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v5652);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2074_Convert(F.v5648, F.v5656, F.v5654));
yr997_SA(y_str(";", 1));
F.v5650 = yr1016_SE();
yr1092_Emit(F.v5650);
yr2469_CopyOut();
yr2688_LeaveMonitor();
yr2427_PopTo(v2342);
yr2417_Emit3(y_str("return ", 7), F.v5652, y_str("; }", 3));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2500_BeginStatement(void * a_p2501) {
struct yf2502 F;
memset((void *)&F, 0, sizeof F);
F.p2501 = a_p2501;
yr1098_EmitS(y_str("{", 1));
yr1595_OpenScope(0);
yr2590_Declarations(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2501))).f_a))).f_a);
yr2444_BlockStatements(((*(yR95 *)rt_nil_check(F.p2501))).f_a);
yr2664_AwaitProcesses();
yr1601_CloseScope();
yr1098_EmitS(y_str("}", 1));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2506_PlaceLabel(void * a_p2507) {
struct yf2508 F;
memset((void *)&F, 0, sizeof F);
F.p2507 = a_p2507;
F.v5677 = yr1618_FindHere(((*(yR95 *)rt_nil_check(F.p2507))).f_text);
if ((((F.v5677 == ((void *)0))) || ((!(((*(yR115 *)rt_nil_check(F.v5677))).f_kind == v858))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2507))).f_line, ((*(yR95 *)rt_nil_check(F.p2507))).f_text, y_str(" labels a statement but is not declared by LABEL in this block (VII.C)", 70));
}
if (((*(yR115 *)rt_nil_check(F.v5677))).f_hasmv) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2507))).f_line, ((*(yR95 *)rt_nil_check(F.p2507))).f_text, y_str(" labels two statements", 22));
}
((*(yR115 *)rt_nil_check(F.v5677))).f_hasmv = 1;
yr2417_Emit3(y_str("", 0), ((*(yR115 *)rt_nil_check(F.v5677))).f_cname, y_str(": ;", 3));
if ((!(((rt_int *)(v2352).p)[y_ix1(v2352, v2363)] == INT64_C(0)))) {
yr2417_Emit3(y_str("rt_xtop = &", 11), ((rt_int *)(v2352).p)[y_ix1(v2352, v2363)], y_str(";", 1));
} else if ((!(((rt_int *)(v2361).p)[y_ix1(v2361, v2363)] == INT64_C(0)))) {
yr2417_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v2361).p)[y_ix1(v2361, v2363)], y_str(";", 1));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2512_GotoStatement(void * a_p2513) {
struct yf2514 F;
memset((void *)&F, 0, sizeof F);
F.p2513 = a_p2513;
F.v5692 = yr1624_Lookup(((*(yR95 *)rt_nil_check(F.p2513))).f_name, ((*(yR95 *)rt_nil_check(F.p2513))).f_line);
if ((!(((*(yR115 *)rt_nil_check(F.v5692))).f_kind == v858))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2513))).f_line, ((*(yR95 *)rt_nil_check(F.p2513))).f_name, y_str(" is not a label", 15));
}
if ((!(((*(yR115 *)rt_nil_check(F.v5692))).f_level == v1576))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2513))).f_line, ((*(yR95 *)rt_nil_check(F.p2513))).f_name, y_str(": GOTO does not leave a routine or process (IX.A.4)", 51));
}
((*(yR115 *)rt_nil_check(F.v5692))).f_readonly = 1;
yr2417_Emit3(y_str("goto ", 5), ((*(yR115 *)rt_nil_check(F.v5692))).f_cname, y_str(";", 1));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2518_CheckLabels(void * a_p2519) {
struct yf2520 F;
memset((void *)&F, 0, sizeof F);
F.p2519 = a_p2519;
F.v5701 = F.p2519;
while ((!(F.v5701 == ((void *)0)))) {
if ((((*(yR95 *)rt_nil_check(F.v5701))).f_kind == v615)) {
F.v5703 = ((*(yR95 *)rt_nil_check(F.v5701))).f_a;
while ((!(F.v5703 == ((void *)0)))) {
F.v5705 = yr1618_FindHere(((*(yR95 *)rt_nil_check(F.v5703))).f_name);
if ((((((!(F.v5705 == ((void *)0)))) && ((((*(yR115 *)rt_nil_check(F.v5705))).f_kind == v858))) && ((*(yR115 *)rt_nil_check(F.v5705))).f_readonly) && (!((*(yR115 *)rt_nil_check(F.v5705))).f_hasmv))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.v5703))).f_line, ((*(yR95 *)rt_nil_check(F.v5703))).f_name, y_str(" is the target of a GOTO but labels no statement of its block", 61));
}
F.v5703 = ((*(yR95 *)rt_nil_check(F.v5703))).f_next;
}
}
F.v5701 = ((*(yR95 *)rt_nil_check(F.v5701))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2524_RoutineCName(rt_int a_p2525) {
struct yf2526 F;
memset((void *)&F, 0, sizeof F);
F.p2525 = a_p2525;
F.v5710 = yr1141_NewSerial();
F.v5712 = 1;
F.lo5716 = INT64_C(1);
F.hi5717 = ((rt_int *)(v890).p)[y_ix1(v890, F.p2525)];
{ rt_int hi5721 = F.hi5717;
for (rt_int i5720 = F.lo5716; i5720 <= hi5721; i5720++) { F.c_5719 = i5720;
if ((!((yr968_IsLetter(yr1063_TChar(F.p2525, rt_range(F.c_5719, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || yr974_IsDigit(yr1063_TChar(F.p2525, rt_range(F.c_5719, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))))) {
F.v5712 = 0;
}
if (i5720 == hi5721) break;
}}
yr986_SB();
yr997_SA(y_str("yr", 2));
yr1010_SI(F.v5710);
if (F.v5712) {
yr997_SA(y_str("_", 1));
yr1004_ST(F.p2525);
}
{ rt_int rv5725 = yr1016_SE();
return rv5725; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2530_FormalRep(void * a_p2531) {
struct yf2532 F;
memset((void *)&F, 0, sizeof F);
F.p2531 = a_p2531;
if ((((*(yR95 *)rt_nil_check(F.p2531))).f_kind == v666)) {
yr2066_Manifest(((*(yR95 *)rt_nil_check(F.p2531))).f_a, &F.v5731, &F.v5733);
if ((((!F.v5731) || ((F.v5733 < INT64_C(1)))) || ((F.v5733 > INT64_C(4))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2531))).f_line, y_str("DIMENSIONS is a manifest constant from 1 to 4", 45));
}
F.v5729 = yr1707_NewRep(v813, yr1021_T(y_str("length-unresolved array", 23)));
((*(yR100 *)rt_nil_check(F.v5729))).f_nidx = F.v5733;
((*(yR100 *)rt_nil_check(F.v5729))).f_elem = yr1857_MakeRep(((*(yR95 *)rt_nil_check(F.p2531))).f_b, INT64_C(0), 0);
yr1797_CheckRepresented(((*(yR100 *)rt_nil_check(F.v5729))).f_elem, ((*(yR95 *)rt_nil_check(F.p2531))).f_line);
((*(yR100 *)rt_nil_check(F.v5729))).f_deep = 1;
{ void * rv5741 = F.v5729;
return rv5741; }
}
if ((((*(yR95 *)rt_nil_check(F.p2531))).f_kind == v669)) {
{ void * rv5743 = yr1707_NewRep(v825, yr1021_T(y_str("SPACE", 5)));
return rv5743; }
}
F.v5729 = yr1857_MakeRep(F.p2531, INT64_C(0), 0);
yr1797_CheckRepresented(F.v5729, ((*(yR95 *)rt_nil_check(F.p2531))).f_line);
{ void * rv5746 = F.v5729;
return rv5746; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2536_ParamCType(void * a_p2537) {
struct yf2538 F;
memset((void *)&F, 0, sizeof F);
F.p2537 = a_p2537;
F.v5750 = yr1756_CType(((*(yR110 *)rt_nil_check(F.p2537))).f_rep);
if ((((*(yR110 *)rt_nil_check(F.p2537))).f_cls == v867)) {
{ rt_int rv5751 = F.v5750;
return rv5751; }
}
yr986_SB();
yr1004_ST(F.v5750);
yr997_SA(y_str(" *", 2));
{ rt_int rv5753 = yr1016_SE();
return rv5753; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2542_RoutineHeader(void * a_p2543, rt_int a_p2544) {
struct yf2545 F;
memset((void *)&F, 0, sizeof F);
F.p2543 = a_p2543;
F.p2544 = a_p2544;
F.v5774 = 1;
F.v5758 = yr1588_NewSym(F.p2544, ((*(yR95 *)rt_nil_check(F.p2543))).f_name);
((*(yR115 *)rt_nil_check(F.v5758))).f_decl = F.p2543;
((*(yR115 *)rt_nil_check(F.v5758))).f_func = (((*(yR95 *)rt_nil_check(F.p2543))).f_flag == INT64_C(1));
((*(yR115 *)rt_nil_check(F.v5758))).f_level = rt_range(rt_add(v1576, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR115 *)rt_nil_check(F.v5758))).f_cname = yr2524_RoutineCName(((*(yR95 *)rt_nil_check(F.p2543))).f_name);
if ((!(((*(yR95 *)rt_nil_check(F.p2543))).f_b == ((void *)0)))) {
((*(yR115 *)rt_nil_check(F.v5758))).f_ret = yr1857_MakeRep(((*(yR95 *)rt_nil_check(F.p2543))).f_b, INT64_C(0), 0);
yr1797_CheckRepresented(((*(yR115 *)rt_nil_check(F.v5758))).f_ret, ((*(yR95 *)rt_nil_check(F.p2543))).f_line);
} else {
((*(yR115 *)rt_nil_check(F.v5758))).f_ret = v1689;
if (((*(yR115 *)rt_nil_check(F.v5758))).f_func) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2543))).f_line, ((*(yR95 *)rt_nil_check(F.p2543))).f_name, y_str(": a FUNCTION has a RETURNS clause (X.A)", 39));
}
}
F.v5768 = ((void *)0);
F.v5762 = ((*(yR95 *)rt_nil_check(F.p2543))).f_a;
while ((!(F.v5762 == ((void *)0)))) {
F.v5770 = yr2530_FormalRep(((*(yR95 *)rt_nil_check(F.v5762))).f_b);
if ((((*(yR115 *)rt_nil_check(F.v5758))).f_func && ((!(((*(yR95 *)rt_nil_check(F.v5762))).f_ival == v867))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.v5762))).f_line, ((*(yR95 *)rt_nil_check(F.p2543))).f_name, y_str(": the parameters of a FUNCTION are CONST (X.A.2)", 48));
}
if ((((F.p2544 == v855)) && ((((*(yR95 *)rt_nil_check(F.v5762))).f_ival == v870)))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.v5762))).f_line, ((*(yR95 *)rt_nil_check(F.p2543))).f_name, y_str(": a process has no OUT parameters", 33));
}
F.v5764 = ((*(yR95 *)rt_nil_check(F.v5762))).f_a;
while ((!(F.v5764 == ((void *)0)))) {
({ F.v5766 = rt_alloc(sizeof(yR110)); });
(*(yR110 *)rt_nil_check(F.v5766)) = ((yR110){ .f_name = ((*(yR95 *)rt_nil_check(F.v5764))).f_name, .f_cls = ((*(yR95 *)rt_nil_check(F.v5762))).f_ival, .f_rep = F.v5770, .f_cname = yr1146_Fresh(y_str("p", 1)), .f_next = ((void *)0) });
if ((F.v5768 == ((void *)0))) {
((*(yR115 *)rt_nil_check(F.v5758))).f_params = F.v5766;
} else {
((*(yR110 *)rt_nil_check(F.v5768))).f_next = F.v5766;
}
F.v5768 = F.v5766;
((*(yR115 *)rt_nil_check(F.v5758))).f_nparams = rt_range(rt_add(((*(yR115 *)rt_nil_check(F.v5758))).f_nparams, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5764 = ((*(yR95 *)rt_nil_check(F.v5764))).f_next;
}
F.v5762 = ((*(yR95 *)rt_nil_check(F.v5762))).f_next;
}
F.v5760 = yr1612_Find(((*(yR95 *)rt_nil_check(F.p2543))).f_name);
if ((!(F.v5760 == ((void *)0)))) {
F.v5760 = yr1677_Real(F.v5760);
}
if (((((!(((*(yR95 *)rt_nil_check(F.p2543))).f_ival == INT64_C(0)))) && ((!(F.v5760 == ((void *)0))))) && ((((*(yR115 *)rt_nil_check(F.v5760))).f_kind == v846)))) {
((*(yR115 *)rt_nil_check(F.v5758))).f_alt = F.v5760;
if ((((((*(yR95 *)rt_nil_check(F.p2543))).f_ival == v309)) && ((!(yr2549_SameSignature(F.v5758, F.v5760) == ((void *)0)))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2543))).f_line, ((*(yR95 *)rt_nil_check(F.p2543))).f_name, y_str(" EXTENDS a definition for the same parameter types: use REPLACES", 64));
}
if ((((((*(yR95 *)rt_nil_check(F.p2543))).f_ival == v405)) && ((yr2549_SameSignature(F.v5758, F.v5760) == ((void *)0))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2543))).f_line, ((*(yR95 *)rt_nil_check(F.p2543))).f_name, y_str(" REPLACES no definition for these parameter types", 49));
}
}
((*(yR95 *)rt_nil_check(F.p2543))).f_sym = F.v5758;
yr1644_Define(F.v5758, ((*(yR95 *)rt_nil_check(F.p2543))).f_line);
((rt_int *)(v1586).p)[y_ix1(v1586, ((*(yR115 *)rt_nil_check(F.v5758))).f_level)] = yr1146_Fresh(y_str("yf", 2));
((*(yR115 *)rt_nil_check(F.v5758))).f_members = yr1588_NewSym(v861, ((rt_int *)(v1586).p)[y_ix1(v1586, ((*(yR115 *)rt_nil_check(F.v5758))).f_level)]);
yr986_SB();
yr997_SA(y_str("struct ", 7));
yr1004_ST(((rt_int *)(v1586).p)[y_ix1(v1586, ((*(yR115 *)rt_nil_check(F.v5758))).f_level)]);
yr997_SA(y_str(";", 1));
F.v5772 = yr1016_SE();
yr1070_Put(&v942, F.v5772);
yr986_SB();
yr997_SA(y_str("static ", 7));
if ((F.p2544 == v855)) {
yr997_SA(y_str("void", 4));
} else {
yr1004_ST(yr1756_CType(((*(yR115 *)rt_nil_check(F.v5758))).f_ret));
}
yr997_SA(y_str(" ", 1));
yr1004_ST(((*(yR115 *)rt_nil_check(F.v5758))).f_cname);
yr997_SA(y_str("(", 1));
F.v5772 = yr1016_SE();
if ((F.p2544 == v855)) {
F.v5772 = yr2486_Join(F.v5772, yr1021_T(y_str("void *arg", 9)), INT64_C(0));
F.v5774 = 0;
} else if ((v1576 > INT64_C(0))) {
yr986_SB();
yr1004_ST(F.v5772);
yr997_SA(y_str("struct ", 7));
yr1004_ST(((rt_int *)(v1586).p)[y_ix1(v1586, v1576)]);
yr997_SA(y_str(" *up", 4));
F.v5772 = yr1016_SE();
F.v5774 = 0;
}
F.v5766 = ((*(yR115 *)rt_nil_check(F.v5758))).f_params;
while ((((!(F.v5766 == ((void *)0)))) && ((!(F.p2544 == v855))))) {
yr986_SB();
yr1004_ST(F.v5772);
if ((!F.v5774)) {
yr997_SA(y_str(", ", 2));
}
F.v5774 = 0;
yr1004_ST(yr2536_ParamCType(F.v5766));
yr997_SA(y_str(" a_", 3));
yr1004_ST(((*(yR110 *)rt_nil_check(F.v5766))).f_cname);
F.v5772 = yr1016_SE();
F.v5766 = ((*(yR110 *)rt_nil_check(F.v5766))).f_next;
}
if (F.v5774) {
F.v5772 = yr2486_Join(F.v5772, yr1021_T(y_str("void", 4)), INT64_C(0));
}
F.v5772 = yr2486_Join(F.v5772, yr1021_T(y_str(")", 1)), INT64_C(0));
((*(yR115 *)rt_nil_check(F.v5758))).f_mnext = yr1588_NewSym(v861, F.v5772);
yr1070_Put(&v950, yr2486_Join(F.v5772, yr1021_T(y_str(";", 1)), INT64_C(0)));
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2549_SameSignature(void * a_p2550, void * a_p2551) {
struct yf2552 F;
memset((void *)&F, 0, sizeof F);
F.p2550 = a_p2550;
F.p2551 = a_p2551;
F.v5817 = F.p2551;
while ((!(F.v5817 == ((void *)0)))) {
if ((((*(yR115 *)rt_nil_check(F.v5817))).f_nparams == ((*(yR115 *)rt_nil_check(F.p2550))).f_nparams)) {
F.v5823 = 1;
F.v5819 = ((*(yR115 *)rt_nil_check(F.p2550))).f_params;
F.v5821 = ((*(yR115 *)rt_nil_check(F.v5817))).f_params;
while ((!(F.v5819 == ((void *)0)))) {
if ((!yr1774_SameType(((*(yR110 *)rt_nil_check(F.v5819))).f_rep, ((*(yR110 *)rt_nil_check(F.v5821))).f_rep))) {
F.v5823 = 0;
}
F.v5819 = ((*(yR110 *)rt_nil_check(F.v5819))).f_next;
F.v5821 = ((*(yR110 *)rt_nil_check(F.v5821))).f_next;
}
if (F.v5823) {
{ void * rv5826 = F.v5817;
return rv5826; }
}
}
F.v5817 = ((*(yR115 *)rt_nil_check(F.v5817))).f_alt;
}
{ void * rv5827 = ((void *)0);
return rv5827; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2556_RoutineBody(void * a_p2557) {
struct yf2558 F;
memset((void *)&F, 0, sizeof F);
F.p2557 = a_p2557;
F.v5831 = ((*(yR95 *)rt_nil_check(F.p2557))).f_sym;
F.v5833 = v956;
F.v5835 = v958;
F.v5837 = v1576;
F.v5839 = v2339;
F.v5841 = v2342;
F.v5843 = v2363;
F.v5845 = v2375;
F.v5847 = v2398;
F.v5849 = v2401;
F.v5851 = v2404;
F.v5853 = v2406;
v956 = ((yR130){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v958 = ((yR130){ .f_head = ((void *)0), .f_tail = ((void *)0) });
F.v5863 = ((yR130){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v1576 = ((*(yR115 *)rt_nil_check(F.v5831))).f_level;
F.v5859 = ((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5831))).f_members))).f_name;
((rt_int *)(v1586).p)[y_ix1(v1586, v1576)] = F.v5859;
v2342 = v2339;
v2401 = v2398;
v2375 = INT64_C(0);
v2404 = F.v5831;
v2406 = 0;
yr1595_OpenScope(0);
F.v5855 = ((*(yR115 *)rt_nil_check(F.v5831))).f_params;
while ((!(F.v5855 == ((void *)0)))) {
if ((((*(yR110 *)rt_nil_check(F.v5855))).f_cls == v867)) {
F.v5857 = yr1588_NewSym(v834, ((*(yR110 *)rt_nil_check(F.v5855))).f_name);
} else {
F.v5857 = yr1588_NewSym(v831, ((*(yR110 *)rt_nil_check(F.v5855))).f_name);
}
((*(yR115 *)rt_nil_check(F.v5857))).f_rep = ((*(yR110 *)rt_nil_check(F.v5855))).f_rep;
((*(yR115 *)rt_nil_check(F.v5857))).f_level = v1576;
((*(yR115 *)rt_nil_check(F.v5857))).f_cname = ((*(yR110 *)rt_nil_check(F.v5855))).f_cname;
if ((((*(yR115 *)rt_nil_check(F.v5831))).f_kind == v855)) {
((*(yR115 *)rt_nil_check(F.v5857))).f_byref = (((*(yR110 *)rt_nil_check(F.v5855))).f_cls == v873);
yr1664_DeclStorage(yr2536_ParamCType(F.v5855), ((*(yR110 *)rt_nil_check(F.v5855))).f_cname);
} else if ((((*(yR110 *)rt_nil_check(F.v5855))).f_cls == v873)) {
((*(yR115 *)rt_nil_check(F.v5857))).f_byref = 1;
yr1664_DeclStorage(yr2536_ParamCType(F.v5855), ((*(yR110 *)rt_nil_check(F.v5855))).f_cname);
yr1092_Emit(yr2486_Join(yr1021_T(y_str("F.", 2)), ((*(yR110 *)rt_nil_check(F.v5855))).f_cname, yr2486_Join(yr1021_T(y_str(" = a_", 5)), ((*(yR110 *)rt_nil_check(F.v5855))).f_cname, yr1021_T(y_str(";", 1)))));
} else if ((((*(yR110 *)rt_nil_check(F.v5855))).f_cls == v870)) {
yr1664_DeclStorage(yr1756_CType(((*(yR110 *)rt_nil_check(F.v5855))).f_rep), ((*(yR110 *)rt_nil_check(F.v5855))).f_cname);
yr1664_DeclStorage(yr2536_ParamCType(F.v5855), yr2486_Join(((*(yR110 *)rt_nil_check(F.v5855))).f_cname, yr1021_T(y_str("_o", 2)), INT64_C(0)));
yr1092_Emit(yr2486_Join(yr1021_T(y_str("F.", 2)), ((*(yR110 *)rt_nil_check(F.v5855))).f_cname, yr2486_Join(yr1021_T(y_str("_o = a_", 7)), ((*(yR110 *)rt_nil_check(F.v5855))).f_cname, yr1021_T(y_str(";", 1)))));
if ((yr1744_Deep(((*(yR110 *)rt_nil_check(F.v5855))).f_rep) && ((!(((*(yR100 *)rt_nil_check(((*(yR110 *)rt_nil_check(F.v5855))).f_rep))).f_kind == v813))))) {
yr1092_Emit(yr2486_Join(yr1021_T(y_str("y_init(", 7)), yr1762_DescOf(((*(yR110 *)rt_nil_check(F.v5855))).f_rep), yr2486_Join(yr1021_T(y_str(", &F.", 5)), ((*(yR110 *)rt_nil_check(F.v5855))).f_cname, yr1021_T(y_str(");", 2)))));
}
if ((((*(yR100 *)rt_nil_check(((*(yR110 *)rt_nil_check(F.v5855))).f_rep))).f_kind == v813)) {
yr1092_Emit(yr2486_Join(yr1021_T(y_str("F.", 2)), ((*(yR110 *)rt_nil_check(F.v5855))).f_cname, yr2486_Join(yr1021_T(y_str(" = *a_", 6)), ((*(yR110 *)rt_nil_check(F.v5855))).f_cname, yr1021_T(y_str(";", 1)))));
}
} else {
yr1664_DeclStorage(yr1756_CType(((*(yR110 *)rt_nil_check(F.v5855))).f_rep), ((*(yR110 *)rt_nil_check(F.v5855))).f_cname);
yr1092_Emit(yr2486_Join(yr1021_T(y_str("F.", 2)), ((*(yR110 *)rt_nil_check(F.v5855))).f_cname, yr2486_Join(yr1021_T(y_str(" = a_", 5)), ((*(yR110 *)rt_nil_check(F.v5855))).f_cname, yr1021_T(y_str(";", 1)))));
}
yr1644_Define(F.v5857, ((*(yR95 *)rt_nil_check(F.p2557))).f_line);
F.v5855 = ((*(yR110 *)rt_nil_check(F.v5855))).f_next;
}
yr2682_EnterMonitor(F.v5831);
yr2590_Declarations(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2557))).f_c))).f_a);
yr2444_BlockStatements(((*(yR95 *)rt_nil_check(F.p2557))).f_c);
if ((((*(yR115 *)rt_nil_check(F.v5831))).f_kind == v855)) {
yr1098_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
} else {
yr1098_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
}
yr2664_AwaitProcesses();
yr1601_CloseScope();
yr986_SB();
yr997_SA(y_str("struct ", 7));
yr1004_ST(F.v5859);
yr997_SA(y_str(" {", 2));
if ((v1576 > INT64_C(1))) {
yr997_SA(y_str(" struct ", 8));
yr1004_ST(((rt_int *)(v1586).p)[y_ix1(v1586, rt_sub(v1576, INT64_C(1)))]);
yr997_SA(y_str(" *up;", 5));
} else {
yr997_SA(y_str(" void *up;", 10));
}
F.v5861 = yr1016_SE();
yr1070_Put(&v946, F.v5861);
yr1085_Append(&v946, &v958);
yr1077_PutS(&v946, y_str("};", 2));
yr1070_Put(&F.v5863, yr2486_Join(((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5831))).f_mnext))).f_name, yr1021_T(y_str(" {", 2)), INT64_C(0)));
if (v2406) {
yr1077_PutS(&F.v5863, y_str("volatile", 8));
}
yr1070_Put(&F.v5863, yr2486_Join(yr1021_T(y_str("struct ", 7)), F.v5859, yr1021_T(y_str(" F;", 3))));
yr1077_PutS(&F.v5863, y_str("memset((void *)&F, 0, sizeof F);", 32));
if ((((*(yR115 *)rt_nil_check(F.v5831))).f_kind == v855)) {
yr1070_Put(&F.v5863, yr2486_Join(yr1021_T(y_str("F = *(struct ", 13)), F.v5859, yr1021_T(y_str(" *)arg;", 7))));
} else if ((v1576 > INT64_C(1))) {
yr1077_PutS(&F.v5863, y_str("F.up = up;", 10));
}
yr1085_Append(&F.v5863, &v956);
yr1077_PutS(&F.v5863, y_str("}", 1));
yr1085_Append(&v952, &F.v5863);
v956 = F.v5833;
v958 = F.v5835;
v1576 = F.v5837;
((rt_int *)(v1586).p)[y_ix1(v1586, v1576)] = yr1146_Fresh(y_str("unused", 6));
if ((!(F.v5851 == ((void *)0)))) {
((rt_int *)(v1586).p)[y_ix1(v1586, v1576)] = ((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5851))).f_members))).f_name;
}
v2339 = F.v5839;
v2342 = F.v5841;
v2363 = F.v5843;
v2375 = F.v5845;
v2398 = F.v5847;
v2401 = F.v5849;
v2404 = F.v5851;
v2406 = F.v5853;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2562_DeclareStorage(void * a_p2563, void * a_p2564, rt_int a_p2565) {
struct yf2566 F;
memset((void *)&F, 0, sizeof F);
F.p2563 = a_p2563;
F.p2564 = a_p2564;
F.p2565 = a_p2565;
((*(yR115 *)rt_nil_check(F.p2563))).f_rep = F.p2564;
((*(yR115 *)rt_nil_check(F.p2563))).f_level = v1576;
((*(yR115 *)rt_nil_check(F.p2563))).f_cname = yr1146_Fresh(y_str("v", 1));
yr1664_DeclStorage(yr1756_CType(F.p2564), ((*(yR115 *)rt_nil_check(F.p2563))).f_cname);
if (yr1744_Deep(F.p2564)) {
yr1092_Emit(yr2486_Join(yr1021_T(y_str("y_init(", 7)), yr1762_DescOf(F.p2564), yr2486_Join(yr1021_T(y_str(", &", 3)), yr1671_SymPath(F.p2563), yr1021_T(y_str(");", 2)))));
}
if ((((*(yR100 *)rt_nil_check(F.p2564))).f_kind == v804)) {
yr1092_Emit(yr2486_Join(yr1671_SymPath(F.p2563), yr1021_T(y_str(" = y_set_new(", 13)), yr2486_Join(yr1818_LoText(((*(yR100 *)rt_nil_check(F.p2564))).f_elem), yr1021_T(y_str(", ", 2)), yr2486_Join(yr1824_HiText(((*(yR100 *)rt_nil_check(F.p2564))).f_elem), yr1021_T(y_str(");", 2)), INT64_C(0)))));
}
if ((((*(yR100 *)rt_nil_check(F.p2564))).f_kind == v807)) {
yr2699_DeclareSignal(F.p2563, F.p2565);
}
if (yr1750_HoldsSignal(F.p2564)) {
if ((!(((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p2564))).f_elem))).f_kind == v807))) {
yr1124_FailS(F.p2565, y_str("this implementation keeps signals in arrays whose components are signals", 72));
}
yr2706_DeclareSignalArray(F.p2563, F.p2565);
}
if ((((*(yR100 *)rt_nil_check(F.p2564))).f_kind == v810)) {
yr1092_Emit(yr2486_Join(yr1021_T(y_str("rt_lock_init(&", 14)), yr1671_SymPath(F.p2563), yr1021_T(y_str(");", 2))));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2570_SimpleDecl(void * a_p2571) {
struct yf2572 F;
memset((void *)&F, 0, sizeof F);
F.p2571 = a_p2571;
F.v5926 = ((*(yR95 *)rt_nil_check(F.p2571))).f_kind;
if ((((F.v5926 == v609)) || ((F.v5926 == v612)))) {
F.v5928 = yr1857_MakeRep(((*(yR95 *)rt_nil_check(F.p2571))).f_b, INT64_C(0), 0);
yr1797_CheckRepresented(F.v5928, ((*(yR95 *)rt_nil_check(F.p2571))).f_line);
if ((((F.v5926 == v609)) && (((((((*(yR100 *)rt_nil_check(F.v5928))).f_kind == v807)) || ((((*(yR100 *)rt_nil_check(F.v5928))).f_kind == v801))) || ((((*(yR100 *)rt_nil_check(F.v5928))).f_kind == v810)))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2571))).f_line, y_str("signals, files and semaphores are variables (VII.B)", 51));
}
F.v5932 = ((*(yR95 *)rt_nil_check(F.p2571))).f_a;
while ((!(F.v5932 == ((void *)0)))) {
if ((F.v5926 == v609)) {
F.v5934 = yr1588_NewSym(v834, ((*(yR95 *)rt_nil_check(F.v5932))).f_name);
} else {
F.v5934 = yr1588_NewSym(v831, ((*(yR95 *)rt_nil_check(F.v5932))).f_name);
}
yr2562_DeclareStorage(F.v5934, F.v5928, ((*(yR95 *)rt_nil_check(F.p2571))).f_line);
if ((!(((*(yR95 *)rt_nil_check(F.p2571))).f_c == ((void *)0)))) {
yr2131_Expr(((*(yR95 *)rt_nil_check(F.p2571))).f_c, F.v5928, &F.v5936, &F.v5930);
yr2082_Store(yr1671_SymPath(F.v5934), F.v5928, F.v5936, F.v5930, ((*(yR95 *)rt_nil_check(F.p2571))).f_line);
if ((F.v5926 == v609)) {
yr2066_Manifest(((*(yR95 *)rt_nil_check(F.p2571))).f_c, &F.v5938, &F.v5940);
if ((F.v5938 && yr1720_IsDiscrete(F.v5928))) {
((*(yR115 *)rt_nil_check(F.v5934))).f_hasmv = 1;
((*(yR115 *)rt_nil_check(F.v5934))).f_mval = F.v5940;
}
}
}
if ((!(((*(yR95 *)rt_nil_check(F.v5932))).f_a == ((void *)0)))) {
yr2583_AtLocation(F.v5934, ((*(yR95 *)rt_nil_check(F.v5932))).f_a);
}
yr1644_Define(F.v5934, ((*(yR95 *)rt_nil_check(F.v5932))).f_line);
F.v5932 = ((*(yR95 *)rt_nil_check(F.v5932))).f_next;
}
return;
}
if ((F.v5926 == v621)) {
F.v5928 = yr1857_MakeRep(((*(yR95 *)rt_nil_check(F.p2571))).f_b, ((*(yR95 *)rt_nil_check(F.p2571))).f_name, 0);
yr1797_CheckRepresented(F.v5928, ((*(yR95 *)rt_nil_check(F.p2571))).f_line);
F.v5934 = yr1588_NewSym(v837, ((*(yR95 *)rt_nil_check(F.p2571))).f_name);
((*(yR115 *)rt_nil_check(F.v5934))).f_rep = F.v5928;
yr1644_Define(F.v5934, ((*(yR95 *)rt_nil_check(F.p2571))).f_line);
yr1865_ResolvePending(((*(yR95 *)rt_nil_check(F.p2571))).f_name, F.v5928);
yr2576_NoteAlphabet(F.p2571, F.v5928);
return;
}
if ((F.v5926 == v618)) {
F.v5928 = yr1857_MakeRep(((*(yR95 *)rt_nil_check(F.p2571))).f_b, ((*(yR95 *)rt_nil_check(F.p2571))).f_name, 1);
if ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2571))).f_b))).f_kind == v642)) {
F.v5928 = yr1714_CopyRep(F.v5928);
((*(yR100 *)rt_nil_check(F.v5928))).f_tid = yr1851_NewTid(((*(yR95 *)rt_nil_check(F.p2571))).f_name);
((*(yR100 *)rt_nil_check(F.v5928))).f_tname = ((*(yR95 *)rt_nil_check(F.p2571))).f_name;
if (((((((*(yR100 *)rt_nil_check(F.v5928))).f_kind == v774)) || ((((*(yR100 *)rt_nil_check(F.v5928))).f_kind == v777))) || ((((*(yR100 *)rt_nil_check(F.v5928))).f_kind == v780)))) {
if ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2571))).f_b))).f_a == ((void *)0))) {
((*(yR100 *)rt_nil_check(F.v5928))).f_abstract = 1;
}
}
}
F.v5934 = yr1588_NewSym(v840, ((*(yR95 *)rt_nil_check(F.p2571))).f_name);
((*(yR115 *)rt_nil_check(F.v5934))).f_rep = F.v5928;
yr1644_Define(F.v5934, ((*(yR95 *)rt_nil_check(F.p2571))).f_line);
yr1865_ResolvePending(((*(yR95 *)rt_nil_check(F.p2571))).f_name, F.v5928);
yr2576_NoteAlphabet(F.p2571, F.v5928);
return;
}
if ((F.v5926 == v615)) {
F.v5932 = ((*(yR95 *)rt_nil_check(F.p2571))).f_a;
while ((!(F.v5932 == ((void *)0)))) {
F.v5934 = yr1588_NewSym(v858, ((*(yR95 *)rt_nil_check(F.v5932))).f_name);
((*(yR115 *)rt_nil_check(F.v5934))).f_level = v1576;
((*(yR115 *)rt_nil_check(F.v5934))).f_cname = yr1146_Fresh(y_str("lab", 3));
yr1644_Define(F.v5934, ((*(yR95 *)rt_nil_check(F.v5932))).f_line);
F.v5932 = ((*(yR95 *)rt_nil_check(F.v5932))).f_next;
}
return;
}
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2571))).f_line, y_str("not a simple declaration", 24));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2576_NoteAlphabet(void * a_p2577, void * a_p2578) {
struct yf2579 F;
memset((void *)&F, 0, sizeof F);
F.p2577 = a_p2577;
F.p2578 = a_p2578;
if ((((((*(yR100 *)rt_nil_check(F.p2578))).f_kind == v789)) && ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2577))).f_b))).f_kind == v648)))) {
F.v5954 = yr1245_NewNode(v639, ((*(yR95 *)rt_nil_check(F.p2577))).f_line);
((*(yR95 *)rt_nil_check(F.v5954))).f_name = ((*(yR95 *)rt_nil_check(F.p2577))).f_name;
((*(yR95 *)rt_nil_check(F.v5954))).f_rep = F.p2578;
((*(yR95 *)rt_nil_check(F.v5954))).f_next = v2033;
v2033 = F.v5954;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2583_AtLocation(void * a_p2584, void * a_p2585) {
struct yf2586 F;
memset((void *)&F, 0, sizeof F);
F.p2584 = a_p2584;
F.p2585 = a_p2585;
if ((((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.p2584))).f_rep))).f_kind == v807)) {
yr2713_DeviceSignal(F.p2584, F.p2585);
return;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2590_Declarations(void * a_p2591) {
struct yf2592 F;
memset((void *)&F, 0, sizeof F);
F.p2591 = a_p2591;
F.v5961 = F.p2591;
F.v5963 = ((void *)0);
F.v5965 = ((void *)0);
F.v5967 = ((void *)0);
while ((!(F.v5961 == ((void *)0)))) {
v960 = ((*(yR95 *)rt_nil_check(F.v5961))).f_line;
if ((((((*(yR95 *)rt_nil_check(F.v5961))).f_kind == v624)) || ((((*(yR95 *)rt_nil_check(F.v5961))).f_kind == v636)))) {
if ((((*(yR95 *)rt_nil_check(F.v5961))).f_kind == v624)) {
yr2542_RoutineHeader(F.v5961, v846);
} else {
yr2542_RoutineHeader(F.v5961, v855);
}
F.v5967 = yr1245_NewNode(v639, ((*(yR95 *)rt_nil_check(F.v5961))).f_line);
((*(yR95 *)rt_nil_check(F.v5967))).f_a = F.v5961;
yr1252_Link(&F.v5963, &F.v5965, F.v5967);
if ((((*(yR95 *)rt_nil_check(F.v5961))).f_kind == v636)) {
yr2658_DeclareProcess(F.v5961);
}
} else if (((((*(yR95 *)rt_nil_check(F.v5961))).f_kind == v594))) {
yr2640_CompileModule(F.v5961);
} else if ((((*(yR95 *)rt_nil_check(F.v5961))).f_kind == v630)) {
yr2646_DeclareTemplate(F.v5961);
} else if ((((*(yR95 *)rt_nil_check(F.v5961))).f_kind == v633)) {
yr2652_Instantiate(F.v5961);
} else {
yr2570_SimpleDecl(F.v5961);
}
F.v5961 = ((*(yR95 *)rt_nil_check(F.v5961))).f_next;
}
yr1872_CheckPending();
F.v5967 = F.v5963;
while ((!(F.v5967 == ((void *)0)))) {
yr2556_RoutineBody(((*(yR95 *)rt_nil_check(F.v5967))).f_a);
F.v5967 = ((*(yR95 *)rt_nil_check(F.v5967))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2607_Alias(rt_int a_p2608, void * a_p2609) {
struct yf2610 F;
memset((void *)&F, 0, sizeof F);
F.p2608 = a_p2608;
F.p2609 = a_p2609;
F.v5972 = yr1588_NewSym(v864, F.p2608);
((*(yR115 *)rt_nil_check(F.v5972))).f_target = F.p2609;
((*(yR115 *)rt_nil_check(F.v5972))).f_readonly = ((*(yR115 *)rt_nil_check(F.p2609))).f_readonly;
{ void * rv5973 = F.v5972;
return rv5973; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2614_AddLits(void * * a_p2615, void * a_p2616, rt_int a_p2617) {
struct yf2618 F;
memset((void *)&F, 0, sizeof F);
F.p2615 = a_p2615;
F.p2616 = a_p2616;
F.p2617 = a_p2617;
if ((((F.p2617 > INT64_C(8))) || ((*(yR100 *)rt_nil_check(F.p2616))).f_opaque)) {
return;
}
if ((((*(yR100 *)rt_nil_check(F.p2616))).f_kind == v786)) {
F.v5979 = ((*(yR100 *)rt_nil_check(F.p2616))).f_lits;
while ((!(F.v5979 == ((void *)0)))) {
F.v5981 = yr1637_FindLit(((*(yR95 *)rt_nil_check(F.v5979))).f_name, F.p2616);
if ((!(F.v5981 == ((void *)0)))) {
F.v5981 = yr2607_Alias(((*(yR95 *)rt_nil_check(F.v5979))).f_name, F.v5981);
((*(yR115 *)rt_nil_check(F.v5981))).f_mnext = (*F.p2615);
(*F.p2615) = F.v5981;
}
F.v5979 = ((*(yR95 *)rt_nil_check(F.v5979))).f_next;
}
} else if ((((*(yR100 *)rt_nil_check(F.p2616))).f_kind == v795)) {
F.v5983 = ((*(yR100 *)rt_nil_check(F.p2616))).f_fields;
while ((!(F.v5983 == ((void *)0)))) {
yr2614_AddLits(&(*F.p2615), ((*(yR105 *)rt_nil_check(F.v5983))).f_rep, rt_range(rt_add(F.p2617, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v5983 = ((*(yR105 *)rt_nil_check(F.v5983))).f_next;
}
} else if (((((((*(yR100 *)rt_nil_check(F.p2616))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.p2616))).f_kind == v804))) || ((((*(yR100 *)rt_nil_check(F.p2616))).f_kind == v801)))) {
yr2614_AddLits(&(*F.p2615), ((*(yR100 *)rt_nil_check(F.p2616))).f_elem, rt_range(rt_add(F.p2617, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2625_ResolveItem(void * a_p2626, void * * a_p2627, rt_int a_p2628) {
struct yf2629 F;
memset((void *)&F, 0, sizeof F);
F.p2626 = a_p2626;
F.p2627 = a_p2627;
F.p2628 = a_p2628;
F.v6004 = ((*(yR95 *)rt_nil_check(F.p2626))).f_flag;
if (((F.p2628 && ((((*(yR95 *)rt_nil_check(F.p2626))).f_text == INT64_C(0)))) && (((((((*(yR95 *)rt_nil_check(F.p2626))).f_name == v501)) || ((((*(yR95 *)rt_nil_check(F.p2626))).f_name == v555))) || ((((*(yR95 *)rt_nil_check(F.p2626))).f_name == v540)))))) {
if ((yr1618_FindHere(((*(yR95 *)rt_nil_check(F.p2626))).f_name) == ((void *)0))) {
return;
}
}
if ((!(((*(yR95 *)rt_nil_check(F.p2626))).f_text == INT64_C(0)))) {
F.v5996 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(F.p2626))).f_text, ((*(yR95 *)rt_nil_check(F.p2626))).f_line));
if ((!(((*(yR115 *)rt_nil_check(F.v5996))).f_kind == v849))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2626))).f_line, ((*(yR95 *)rt_nil_check(F.p2626))).f_text, y_str(" is not a module", 16));
}
F.v5994 = ((*(yR115 *)rt_nil_check(F.v5996))).f_members;
while ((((!(F.v5994 == ((void *)0)))) && ((!(((*(yR115 *)rt_nil_check(F.v5994))).f_name == ((*(yR95 *)rt_nil_check(F.p2626))).f_name))))) {
F.v5994 = ((*(yR115 *)rt_nil_check(F.v5994))).f_mnext;
}
if ((F.v5994 == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2626))).f_line, ((*(yR95 *)rt_nil_check(F.p2626))).f_name, y_str(" is not exported by that module", 31));
}
} else {
if (F.p2628) {
F.v5994 = yr1618_FindHere(((*(yR95 *)rt_nil_check(F.p2626))).f_name);
} else {
F.v5994 = yr1612_Find(((*(yR95 *)rt_nil_check(F.p2626))).f_name);
}
if ((F.v5994 == ((void *)0))) {
if (F.p2628) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2626))).f_line, ((*(yR95 *)rt_nil_check(F.p2626))).f_name, y_str(" is not declared in this module", 31));
} else {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2626))).f_line, ((*(yR95 *)rt_nil_check(F.p2626))).f_name, y_str(" is not declared around this module (X.B.2)", 43));
}
}
}
F.v6000 = ((*(yR95 *)rt_nil_check(F.p2626))).f_name;
if ((!(((*(yR95 *)rt_nil_check(F.p2626))).f_ival == INT64_C(0)))) {
F.v6000 = rt_range(((*(yR95 *)rt_nil_check(F.p2626))).f_ival, INT64_C(0), INT64_C(4000000));
}
F.v5996 = yr1677_Real(F.v5994);
if ((((((*(yR115 *)rt_nil_check(F.v5996))).f_kind == v849)) && ((((*(yR95 *)rt_nil_check(F.p2626))).f_text == INT64_C(0))))) {
if ((((!(F.v6004 == INT64_C(0)))) || ((!(((*(yR95 *)rt_nil_check(F.p2626))).f_ival == INT64_C(0)))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2626))).f_line, y_str("a module name in a list takes no attribute and no AS (X.B.3)", 60));
}
F.v5998 = ((*(yR115 *)rt_nil_check(F.v5996))).f_members;
while ((!(F.v5998 == ((void *)0)))) {
F.v5994 = yr2607_Alias(((*(yR115 *)rt_nil_check(F.v5998))).f_name, F.v5998);
((*(yR115 *)rt_nil_check(F.v5994))).f_mnext = (*F.p2627);
(*F.p2627) = F.v5994;
F.v5998 = ((*(yR115 *)rt_nil_check(F.v5998))).f_mnext;
}
if ((!F.p2628)) {
F.v5994 = yr2607_Alias(((*(yR115 *)rt_nil_check(F.v5996))).f_name, F.v5996);
((*(yR115 *)rt_nil_check(F.v5994))).f_mnext = (*F.p2627);
(*F.p2627) = F.v5994;
}
return;
}
F.v5998 = yr2607_Alias(F.v6000, F.v5994);
if (F.p2628) {
if ((((((*(yR115 *)rt_nil_check(F.v5996))).f_kind == v837)) || ((((*(yR115 *)rt_nil_check(F.v5996))).f_kind == v840)))) {
if ((((F.v6004 == v399)) || ((F.v6004 == v453)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2626))).f_line, y_str("READONLY and VAR are for variables", 34));
}
if ((((!(F.v6004 == v444))) || ((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5996))).f_rep))).f_opaque)) {
F.v6002 = yr1714_CopyRep(((*(yR115 *)rt_nil_check(F.v5996))).f_rep);
((*(yR100 *)rt_nil_check(F.v6002))).f_opaque = 1;
((*(yR100 *)rt_nil_check(F.v6002))).f_opaqueops = v2622;
((*(yR115 *)rt_nil_check(F.v5998))).f_target = yr1588_NewSym(((*(yR115 *)rt_nil_check(F.v5996))).f_kind, ((*(yR115 *)rt_nil_check(F.v5996))).f_name);
((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5998))).f_target))).f_rep = F.v6002;
((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5998))).f_target))).f_decl = ((*(yR115 *)rt_nil_check(F.v5996))).f_decl;
} else {
yr2614_AddLits(&(*F.p2627), ((*(yR115 *)rt_nil_check(F.v5996))).f_rep, INT64_C(0));
}
} else if ((((*(yR115 *)rt_nil_check(F.v5996))).f_kind == v831)) {
if ((((F.v6004 == v366)) || ((F.v6004 == v444)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2626))).f_line, y_str("OPAQUE and TRANSPARENT are for types", 36));
}
if ((!(F.v6004 == v453))) {
((*(yR115 *)rt_nil_check(F.v5998))).f_readonly = 1;
}
} else if ((!(F.v6004 == INT64_C(0)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2626))).f_line, y_str("an attribute is for a type, a representation or a variable", 58));
}
if ((((((*(yR115 *)rt_nil_check(F.v5996))).f_kind == v831)) && ((((((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5996))).f_rep))).f_kind == v807)) || yr1750_HoldsSignal(((*(yR115 *)rt_nil_check(F.v5996))).f_rep))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2626))).f_line, y_str("a signal may not be exported from its monitor (X.E.4)", 53));
}
} else if ((((((*(yR115 *)rt_nil_check(F.v5996))).f_kind == v837)) || ((((*(yR115 *)rt_nil_check(F.v5996))).f_kind == v840)))) {
yr2614_AddLits(&(*F.p2627), ((*(yR115 *)rt_nil_check(F.v5996))).f_rep, INT64_C(0));
}
((*(yR115 *)rt_nil_check(F.v5998))).f_mnext = (*F.p2627);
(*F.p2627) = F.v5998;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2633_DefineAll(void * a_p2634, rt_int a_p2635) {
struct yf2636 F;
memset((void *)&F, 0, sizeof F);
F.p2634 = a_p2634;
F.p2635 = a_p2635;
F.v6029 = F.p2634;
F.v6031 = F.p2634;
F.v6033 = F.p2634;
while ((!(F.v6029 == ((void *)0)))) {
F.v6031 = ((*(yR115 *)rt_nil_check(F.v6029))).f_mnext;
F.v6033 = yr1618_FindHere(((*(yR115 *)rt_nil_check(F.v6029))).f_name);
if ((((F.v6033 == ((void *)0))) || ((!(yr1677_Real(F.v6033) == yr1677_Real(F.v6029)))))) {
if (((((!(F.v6033 == ((void *)0)))) && ((((*(yR115 *)rt_nil_check(yr1677_Real(F.v6029)))).f_kind == v843))) && ((((*(yR115 *)rt_nil_check(yr1677_Real(F.v6033)))).f_kind == v843)))) {
yr1644_Define(F.v6029, F.p2635);
} else if ((F.v6033 == ((void *)0))) {
yr1644_Define(F.v6029, F.p2635);
} else {
yr1132_FailN(F.p2635, ((*(yR115 *)rt_nil_check(F.v6029))).f_name, y_str(" comes into this scope twice", 28));
}
}
F.v6029 = F.v6031;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2640_CompileModule(void * a_p2641) {
struct yf2642 F;
memset((void *)&F, 0, sizeof F);
F.p2641 = a_p2641;
F.v6062 = 0;
F.v6038 = ((void *)0);
F.v6054 = ((*(yR95 *)rt_nil_check(F.p2641))).f_a;
while ((!(F.v6054 == ((void *)0)))) {
yr2625_ResolveItem(F.v6054, &F.v6038, 0);
F.v6054 = ((*(yR95 *)rt_nil_check(F.v6054))).f_next;
}
F.v6048 = v2596;
if ((((((*(yR95 *)rt_nil_check(F.p2641))).f_flag == INT64_C(1))) && ((v2596 == ((void *)0))))) {
F.v6050 = yr1588_NewSym(v831, ((*(yR95 *)rt_nil_check(F.p2641))).f_name);
((*(yR115 *)rt_nil_check(F.v6050))).f_level = v1576;
((*(yR115 *)rt_nil_check(F.v6050))).f_cname = yr1146_Fresh(y_str("mon", 3));
((*(yR115 *)rt_nil_check(F.v6050))).f_rep = v1689;
yr1664_DeclStorage(yr1021_T(y_str("ymon", 4)), ((*(yR115 *)rt_nil_check(F.v6050))).f_cname);
yr1092_Emit(yr2486_Join(yr1021_T(y_str("y_mon_init(&", 12)), yr1651_Path(v1576, ((*(yR115 *)rt_nil_check(F.v6050))).f_cname), yr1021_T(y_str(");", 2))));
v2596 = F.v6050;
F.v6062 = 1;
}
yr1595_OpenScope(1);
((void * *)(v2605).p)[y_ix1(v2605, v1570)] = ((void *)0);
F.v6058 = v1573;
v1573 = v1570;
yr2633_DefineAll(F.v6038, ((*(yR95 *)rt_nil_check(F.p2641))).f_line);
yr2590_Declarations(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2641))).f_c))).f_a);
if (F.v6062) {
yr1092_Emit(yr2486_Join(yr1021_T(y_str("y_mon_enter(&", 13)), yr1651_Path(((*(yR115 *)rt_nil_check(v2596))).f_level, ((*(yR115 *)rt_nil_check(v2596))).f_cname), yr1021_T(y_str(");", 2))));
}
v2363 = rt_range(rt_add(v2363, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2352).p)[y_ix1(v2352, v2363)] = INT64_C(0);
yr2444_BlockStatements(((*(yR95 *)rt_nil_check(F.p2641))).f_c);
v2363 = rt_range(rt_sub(v2363, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (F.v6062) {
yr1092_Emit(yr2486_Join(yr1021_T(y_str("y_mon_leave(&", 13)), yr1651_Path(((*(yR115 *)rt_nil_check(v2596))).f_level, ((*(yR115 *)rt_nil_check(v2596))).f_cname), yr1021_T(y_str(");", 2))));
}
v2622 = INT64_C(0);
F.v6054 = ((*(yR95 *)rt_nil_check(F.p2641))).f_b;
while ((!(F.v6054 == ((void *)0)))) {
if ((((((*(yR95 *)rt_nil_check(F.v6054))).f_text == INT64_C(0))) && ((yr1618_FindHere(((*(yR95 *)rt_nil_check(F.v6054))).f_name) == ((void *)0))))) {
if ((((*(yR95 *)rt_nil_check(F.v6054))).f_name == v501)) {
v2622 = rt_range(rt_add(v2622, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((((((*(yR95 *)rt_nil_check(F.v6054))).f_name == v555)) || ((((*(yR95 *)rt_nil_check(F.v6054))).f_name == v540)))) {
if (((rt_div(v2622, INT64_C(2))) == INT64_C(0))) {
v2622 = rt_range(rt_add(v2622, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
}
F.v6054 = ((*(yR95 *)rt_nil_check(F.v6054))).f_next;
}
F.v6040 = ((void *)0);
F.v6054 = ((*(yR95 *)rt_nil_check(F.p2641))).f_b;
while ((!(F.v6054 == ((void *)0)))) {
yr2625_ResolveItem(F.v6054, &F.v6040, 1);
F.v6054 = ((*(yR95 *)rt_nil_check(F.v6054))).f_next;
}
F.v6056 = ((void * *)(v2605).p)[y_ix1(v2605, v1570)];
v1573 = F.v6058;
yr1601_CloseScope();
while ((!(F.v6056 == ((void *)0)))) {
F.v6054 = ((*(yR95 *)rt_nil_check(F.v6056))).f_next;
((*(yR95 *)rt_nil_check(F.v6056))).f_next = ((void * *)(v2605).p)[y_ix1(v2605, v1570)];
((void * *)(v2605).p)[y_ix1(v2605, v1570)] = F.v6056;
F.v6056 = F.v6054;
}
v2596 = F.v6048;
F.v6044 = yr1588_NewSym(v849, ((*(yR95 *)rt_nil_check(F.p2641))).f_name);
((*(yR115 *)rt_nil_check(F.v6044))).f_members = F.v6040;
yr1644_Define(F.v6044, ((*(yR95 *)rt_nil_check(F.p2641))).f_line);
F.v6046 = F.v6040;
F.v6040 = ((void *)0);
while ((!(F.v6046 == ((void *)0)))) {
F.v6052 = ((*(yR115 *)rt_nil_check(F.v6046))).f_mnext;
F.v6042 = yr2607_Alias(((*(yR115 *)rt_nil_check(F.v6046))).f_name, F.v6046);
((*(yR115 *)rt_nil_check(F.v6042))).f_readonly = ((*(yR115 *)rt_nil_check(F.v6046))).f_readonly;
((*(yR115 *)rt_nil_check(F.v6042))).f_mnext = F.v6040;
F.v6040 = F.v6042;
F.v6046 = F.v6052;
}
((*(yR115 *)rt_nil_check(F.v6044))).f_members = F.v6040;
F.v6046 = F.v6040;
while ((!(F.v6046 == ((void *)0)))) {
F.v6052 = yr2607_Alias(((*(yR115 *)rt_nil_check(F.v6046))).f_name, F.v6046);
((*(yR115 *)rt_nil_check(F.v6052))).f_readonly = ((*(yR115 *)rt_nil_check(F.v6046))).f_readonly;
if ((yr1618_FindHere(((*(yR115 *)rt_nil_check(F.v6046))).f_name) == ((void *)0))) {
yr1644_Define(F.v6052, ((*(yR95 *)rt_nil_check(F.p2641))).f_line);
} else if ((((((*(yR115 *)rt_nil_check(yr1618_FindHere(((*(yR115 *)rt_nil_check(F.v6046))).f_name)))).f_kind == v864)) && ((!(yr1677_Real(yr1618_FindHere(((*(yR115 *)rt_nil_check(F.v6046))).f_name)) == yr1677_Real(F.v6046)))))) {
yr1644_Define(F.v6052, ((*(yR95 *)rt_nil_check(F.p2641))).f_line);
} else if ((!(((*(yR115 *)rt_nil_check(yr1677_Real(F.v6046)))).f_kind == v843))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2641))).f_line, ((*(yR115 *)rt_nil_check(F.v6046))).f_name, y_str(" is exported into a scope that has it already", 45));
}
F.v6046 = ((*(yR115 *)rt_nil_check(F.v6046))).f_mnext;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2646_DeclareTemplate(void * a_p2647) {
struct yf2648 F;
memset((void *)&F, 0, sizeof F);
F.p2647 = a_p2647;
F.v6095 = yr1588_NewSym(v852, ((*(yR95 *)rt_nil_check(F.p2647))).f_name);
((*(yR115 *)rt_nil_check(F.v6095))).f_decl = F.p2647;
yr1644_Define(F.v6095, ((*(yR95 *)rt_nil_check(F.p2647))).f_line);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2652_Instantiate(void * a_p2653) {
struct yf2654 F;
memset((void *)&F, 0, sizeof F);
F.p2653 = a_p2653;
F.v6099 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(F.p2653))).f_name, ((*(yR95 *)rt_nil_check(F.p2653))).f_line));
if ((!(((*(yR115 *)rt_nil_check(F.v6099))).f_kind == v852))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2653))).f_line, ((*(yR95 *)rt_nil_check(F.p2653))).f_name, y_str(" is not a template", 18));
}
F.v6101 = ((*(yR115 *)rt_nil_check(F.v6099))).f_decl;
if ((!(yr1260_Count(((*(yR95 *)rt_nil_check(F.v6101))).f_a) == yr1260_Count(((*(yR95 *)rt_nil_check(F.p2653))).f_a)))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2653))).f_line, ((*(yR95 *)rt_nil_check(F.p2653))).f_name, y_str(": the number of actuals is wrong", 32));
}
F.v6107 = rt_range(rt_add(v1159, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo6123 = ((*(yR95 *)rt_nil_check(F.v6101))).f_ival;
F.hi6124 = rt_sub(((*(yR95 *)rt_nil_check(F.v6101))).f_flag, INT64_C(1));
{ rt_int hi6128 = F.hi6124;
for (rt_int i6127 = F.lo6123; i6127 <= hi6128; i6127++) { F.c_6126 = i6127;
F.v6111 = ((rt_int *)(v1153).p)[y_ix1(v1153, F.c_6126)];
F.v6113 = ((rt_int *)(v1155).p)[y_ix1(v1155, F.c_6126)];
if ((F.v6111 == v177)) {
F.v6103 = ((*(yR95 *)rt_nil_check(F.v6101))).f_a;
F.v6105 = ((*(yR95 *)rt_nil_check(F.p2653))).f_a;
while ((!(F.v6103 == ((void *)0)))) {
if ((((((*(yR95 *)rt_nil_check(F.v6103))).f_name == F.v6113)) && ((F.v6111 == v177)))) {
if ((((*(yR95 *)rt_nil_check(F.v6105))).f_flag == INT64_C(1))) {
F.v6111 = v186;
F.v6113 = ((*(yR95 *)rt_nil_check(F.v6105))).f_ival;
} else {
F.v6113 = ((*(yR95 *)rt_nil_check(F.v6105))).f_name;
if ((F.v6113 <= v462)) {
F.v6111 = v180;
} else if ((F.v6113 <= v591)) {
F.v6111 = v183;
}
}
}
F.v6103 = ((*(yR95 *)rt_nil_check(F.v6103))).f_next;
F.v6105 = ((*(yR95 *)rt_nil_check(F.v6105))).f_next;
}
}
v1159 = rt_range(rt_add(v1159, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1153).p)[y_ix1(v1153, v1159)] = F.v6111;
((rt_int *)(v1155).p)[y_ix1(v1155, v1159)] = F.v6113;
((rt_int *)(v1157).p)[y_ix1(v1157, v1159)] = ((rt_int *)(v1157).p)[y_ix1(v1157, F.c_6126)];
if (i6127 == hi6128) break;
}}
v1159 = rt_range(rt_add(v1159, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1153).p)[y_ix1(v1153, v1159)] = v174;
((rt_int *)(v1155).p)[y_ix1(v1155, v1159)] = INT64_C(0);
((rt_int *)(v1157).p)[y_ix1(v1157, v1159)] = ((*(yR95 *)rt_nil_check(F.p2653))).f_line;
F.v6109 = v1234;
v1234 = F.v6107;
F.v6115 = yr1350_ParseModule();
v1234 = F.v6109;
yr2640_CompileModule(F.v6115);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2658_DeclareProcess(void * a_p2659) {
struct yf2660 F;
memset((void *)&F, 0, sizeof F);
F.p2659 = a_p2659;
F.v6138 = ((*(yR95 *)rt_nil_check(F.p2659))).f_sym;
((*(yR115 *)rt_nil_check(F.v6138))).f_monitor = v2596;
yr1664_DeclStorage(yr1021_T(y_str("rt_taskdecl", 11)), yr2486_Join(((*(yR115 *)rt_nil_check(F.v6138))).f_cname, yr1021_T(y_str("_d", 2)), INT64_C(0)));
F.v6140 = yr1245_NewNode(v639, ((*(yR95 *)rt_nil_check(F.p2659))).f_line);
((*(yR95 *)rt_nil_check(F.v6140))).f_sym = F.v6138;
((*(yR95 *)rt_nil_check(F.v6140))).f_next = ((void * *)(v2605).p)[y_ix1(v2605, v1570)];
((void * *)(v2605).p)[y_ix1(v2605, v1570)] = F.v6140;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2664_AwaitProcesses(void) {
struct yf2665 F;
memset((void *)&F, 0, sizeof F);
F.v6146 = ((void * *)(v2605).p)[y_ix1(v2605, v1570)];
while ((!(F.v6146 == ((void *)0)))) {
yr1092_Emit(yr2486_Join(yr1021_T(y_str("rt_await_decl(&", 15)), yr1651_Path(rt_range(rt_sub(((*(yR115 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v6146))).f_sym))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr2486_Join(((*(yR115 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v6146))).f_sym))).f_cname, yr1021_T(y_str("_d", 2)), INT64_C(0))), yr1021_T(y_str(");", 2))));
F.v6146 = ((*(yR95 *)rt_nil_check(F.v6146))).f_next;
}
((void * *)(v2605).p)[y_ix1(v2605, v1570)] = ((void *)0);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2669_Activate(void * a_p2670, void * a_p2671) {
struct yf2672 F;
memset((void *)&F, 0, sizeof F);
F.p2670 = a_p2670;
F.p2671 = a_p2671;
F.v6177 = ((*(yR115 *)rt_nil_check(F.p2671))).f_decl;
yr2274_CompileArgs(((*(yR95 *)rt_nil_check(F.p2670))).f_a, F.p2671, &F.v6157, &F.v6159);
if ((!(F.v6159 == ((*(yR115 *)rt_nil_check(F.p2671))).f_nparams))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2670))).f_line, ((*(yR115 *)rt_nil_check(F.p2671))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
F.v6165 = yr1146_Fresh(y_str("pf", 2));
yr1092_Emit(yr2486_Join(yr1021_T(y_str("{ struct ", 9)), ((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.p2671))).f_members))).f_name, yr2486_Join(yr1021_T(y_str(" *", 2)), F.v6165, yr2486_Join(yr1021_T(y_str(" = rt_alloc(sizeof *", 20)), F.v6165, yr1021_T(y_str(");", 2))))));
if ((((*(yR115 *)rt_nil_check(F.p2671))).f_level > INT64_C(1))) {
yr1092_Emit(yr2486_Join(F.v6165, yr1021_T(y_str("->up = ", 7)), yr2486_Join(yr1658_FramePtr(rt_range(rt_sub(((*(yR115 *)rt_nil_check(F.p2671))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))), yr1021_T(y_str(";", 1)), INT64_C(0))));
}
F.v6163 = ((*(yR115 *)rt_nil_check(F.p2671))).f_params;
F.v6161 = rt_range(rt_add(F.v6157, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(F.v6163 == ((void *)0)))) {
if ((!yr2253_Fits(((*(yR110 *)rt_nil_check(F.v6163))).f_rep, ((void * *)(v2239).p)[y_ix1(v2239, F.v6161)]))) {
yr1781_TypeClash(((*(yR95 *)rt_nil_check(((void * *)(v2248).p)[y_ix1(v2248, F.v6161)]))).f_line, ((*(yR110 *)rt_nil_check(F.v6163))).f_rep, ((void * *)(v2239).p)[y_ix1(v2239, F.v6161)]);
}
F.v6171 = yr2486_Join(F.v6165, yr1021_T(y_str("->", 2)), ((*(yR110 *)rt_nil_check(F.v6163))).f_cname);
if ((((*(yR110 *)rt_nil_check(F.v6163))).f_cls == v873)) {
if ((!yr2092_IsVariable(((void * *)(v2248).p)[y_ix1(v2248, F.v6161)]))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(((void * *)(v2248).p)[y_ix1(v2248, F.v6161)]))).f_line, ((*(yR110 *)rt_nil_check(F.v6163))).f_name, y_str(": the actual of a VAR parameter must be a variable", 50));
}
yr1092_Emit(yr2486_Join(F.v6171, yr1021_T(y_str(" = &", 4)), yr2486_Join(((rt_int *)(v2230).p)[y_ix1(v2230, F.v6161)], yr1021_T(y_str(";", 1)), INT64_C(0))));
} else if (yr1744_Deep(((*(yR110 *)rt_nil_check(F.v6163))).f_rep)) {
F.v6167 = yr1146_Fresh(y_str("t", 1));
yr1092_Emit(yr2486_Join(yr1021_T(y_str("{ ", 2)), yr1756_CType(((*(yR110 *)rt_nil_check(F.v6163))).f_rep), yr2486_Join(yr1021_T(y_str(" ", 1)), F.v6167, yr2486_Join(yr1021_T(y_str(" = ", 3)), ((rt_int *)(v2230).p)[y_ix1(v2230, F.v6161)], yr1021_T(y_str(";", 1))))));
if ((((*(yR100 *)rt_nil_check(((*(yR110 *)rt_nil_check(F.v6163))).f_rep))).f_kind == v813)) {
yr1092_Emit(yr2486_Join(yr1021_T(y_str("y_copy(y_desc_vector(", 21)), yr1762_DescOf(((*(yR100 *)rt_nil_check(((*(yR110 *)rt_nil_check(F.v6163))).f_rep))).f_elem), yr2486_Join(yr1021_T(y_str("), &", 4)), F.v6171, yr2486_Join(yr1021_T(y_str(", &", 3)), F.v6167, yr1021_T(y_str("); }", 4))))));
} else {
yr1092_Emit(yr2486_Join(yr1021_T(y_str("y_copy(", 7)), yr1762_DescOf(((*(yR110 *)rt_nil_check(F.v6163))).f_rep), yr2486_Join(yr1021_T(y_str(", &", 3)), F.v6171, yr2486_Join(yr1021_T(y_str(", &", 3)), F.v6167, yr1021_T(y_str("); }", 4))))));
}
} else {
yr1092_Emit(yr2486_Join(F.v6171, yr1021_T(y_str(" = ", 3)), yr2486_Join(yr2074_Convert(((rt_int *)(v2230).p)[y_ix1(v2230, F.v6161)], ((*(yR110 *)rt_nil_check(F.v6163))).f_rep, ((void * *)(v2239).p)[y_ix1(v2239, F.v6161)]), yr1021_T(y_str(";", 1)), INT64_C(0))));
}
F.v6161 = rt_range(rt_add(F.v6161, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6163 = ((*(yR110 *)rt_nil_check(F.v6163))).f_next;
}
v2250 = F.v6157;
F.v6173 = yr1021_T(y_str("0", 1));
if ((!(((*(yR95 *)rt_nil_check(F.v6177))).f_e == ((void *)0)))) {
yr2131_Expr(((*(yR95 *)rt_nil_check(F.v6177))).f_e, v1683, &F.v6173, &F.v6179);
yr1789_CheckType(((*(yR95 *)rt_nil_check(F.v6177))).f_line, v1683, F.v6179);
}
F.v6175 = yr1021_T(y_str("0, 0", 4));
if ((!(((*(yR95 *)rt_nil_check(F.v6177))).f_d == ((void *)0)))) {
yr2131_Expr(((*(yR95 *)rt_nil_check(F.v6177))).f_d, v1683, &F.v6169, &F.v6179);
yr1789_CheckType(((*(yR95 *)rt_nil_check(F.v6177))).f_line, v1683, F.v6179);
F.v6175 = yr2486_Join(yr1021_T(y_str("1, ", 3)), F.v6169, INT64_C(0));
}
yr986_SB();
yr997_SA(y_str("y_create(&", 10));
yr1004_ST(yr1651_Path(rt_range(rt_sub(((*(yR115 *)rt_nil_check(F.p2671))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr2486_Join(((*(yR115 *)rt_nil_check(F.p2671))).f_cname, yr1021_T(y_str("_d", 2)), INT64_C(0))));
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6173);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6175);
yr997_SA(y_str(", ", 2));
yr1004_ST(((*(yR115 *)rt_nil_check(F.p2671))).f_cname);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6165);
yr997_SA(y_str("); }", 4));
F.v6167 = yr1016_SE();
yr1092_Emit(F.v6167);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2676_MonitorPath(void * a_p2677) {
struct yf2678 F;
memset((void *)&F, 0, sizeof F);
F.p2677 = a_p2677;
{ rt_int rv6235 = yr2486_Join(yr1021_T(y_str("&", 1)), yr1651_Path(((*(yR115 *)rt_nil_check(F.p2677))).f_level, ((*(yR115 *)rt_nil_check(F.p2677))).f_cname), INT64_C(0));
return rv6235; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2682_EnterMonitor(void * a_p2683) {
struct yf2684 F;
memset((void *)&F, 0, sizeof F);
F.p2683 = a_p2683;
if ((((*(yR115 *)rt_nil_check(F.p2683))).f_kind == v846)) {
((*(yR115 *)rt_nil_check(F.p2683))).f_monitor = v2596;
}
if ((((*(yR115 *)rt_nil_check(F.p2683))).f_monitor == ((void *)0))) {
return;
}
yr1092_Emit(yr2486_Join(yr1021_T(y_str("y_mon_enter(", 12)), yr2676_MonitorPath(((*(yR115 *)rt_nil_check(F.p2683))).f_monitor), yr1021_T(y_str(");", 2))));
F.v6239 = yr1146_Fresh(y_str("mf", 2));
v2406 = 1;
yr1092_Emit(yr2486_Join(yr1021_T(y_str("rt_frame ", 9)), F.v6239, yr1021_T(y_str(";", 1))));
yr986_SB();
yr997_SA(y_str("if (!RT_TRY(", 12));
yr1004_ST(F.v6239);
yr997_SA(y_str(")) { RT_POP(", 12));
yr1004_ST(F.v6239);
yr997_SA(y_str("); ", 3));
if ((((*(yR115 *)rt_nil_check(F.p2683))).f_kind == v855)) {
yr997_SA(y_str("y_mon_drop(", 11));
} else {
yr997_SA(y_str("y_mon_leave(", 12));
}
yr1004_ST(yr2676_MonitorPath(((*(yR115 *)rt_nil_check(F.p2683))).f_monitor));
yr997_SA(y_str("); rt_raise(rt_xcur); }", 23));
yr1092_Emit(yr1016_SE());
v2339 = rt_range(rt_add(v2339, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2337).p)[y_ix1(v2337, v2339)] = F.v6239;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2688_LeaveMonitor(void) {
struct yf2689 F;
memset((void *)&F, 0, sizeof F);
if ((v2404 == ((void *)0))) {
return;
}
if ((((*(yR115 *)rt_nil_check(v2404))).f_monitor == ((void *)0))) {
return;
}
if ((((*(yR115 *)rt_nil_check(v2404))).f_kind == v855)) {
yr1092_Emit(yr2486_Join(yr1021_T(y_str("y_mon_drop(", 11)), yr2676_MonitorPath(((*(yR115 *)rt_nil_check(v2404))).f_monitor), yr1021_T(y_str(");", 2))));
} else {
yr1092_Emit(yr2486_Join(yr1021_T(y_str("y_mon_leave(", 12)), yr2676_MonitorPath(((*(yR115 *)rt_nil_check(v2404))).f_monitor), yr1021_T(y_str(");", 2))));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2693_TerminateStatement(void * a_p2694) {
struct yf2695 F;
memset((void *)&F, 0, sizeof F);
F.p2694 = a_p2694;
if ((((v2404 == ((void *)0))) || ((!(((*(yR115 *)rt_nil_check(v2404))).f_kind == v855))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2694))).f_line, y_str("TERMINATE_PROCESS ends a process (IX.A.7)", 41));
}
yr2664_AwaitProcesses();
yr2688_LeaveMonitor();
yr2427_PopTo(v2342);
yr1098_EmitS(y_str("return;", 7));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2699_DeclareSignal(void * a_p2700, rt_int a_p2701) {
struct yf2702 F;
memset((void *)&F, 0, sizeof F);
F.p2700 = a_p2700;
F.p2701 = a_p2701;
if ((v2596 == ((void *)0))) {
yr1124_FailS(F.p2701, y_str("signal variables are declared in a monitor (X.E.4)", 50));
}
((*(yR115 *)rt_nil_check(F.p2700))).f_rep = yr1714_CopyRep(((*(yR115 *)rt_nil_check(F.p2700))).f_rep);
((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.p2700))).f_rep))).f_monitor = v2596;
yr1092_Emit(yr2486_Join(yr1021_T(y_str("y_sig_init(&", 12)), yr1671_SymPath(F.p2700), yr2486_Join(yr1021_T(y_str(", ", 2)), yr2676_MonitorPath(v2596), yr1021_T(y_str(");", 2)))));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2706_DeclareSignalArray(void * a_p2707, rt_int a_p2708) {
struct yf2709 F;
memset((void *)&F, 0, sizeof F);
F.p2707 = a_p2707;
F.p2708 = a_p2708;
if ((v2596 == ((void *)0))) {
yr1124_FailS(F.p2708, y_str("signal variables are declared in a monitor (X.E.4)", 50));
}
yr986_SB();
yr997_SA(y_str("{ rt_int yk, yn = y_count(", 26));
yr1004_ST(yr1671_SymPath(F.p2707));
yr997_SA(y_str(", ", 2));
yr1010_SI(((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.p2707))).f_rep))).f_nidx);
yr997_SA(y_str("); for (yk = 0; yk < yn; yk++) y_sig_init((ysig *)y_elem_at(", 60));
yr1004_ST(yr1671_SymPath(F.p2707));
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1762_DescOf(((*(yR115 *)rt_nil_check(F.p2707))).f_rep));
yr997_SA(y_str(", yk), ", 7));
yr1004_ST(yr2676_MonitorPath(v2596));
yr997_SA(y_str("); }", 4));
F.v6274 = yr1016_SE();
yr1092_Emit(F.v6274);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2713_DeviceSignal(void * a_p2714, void * a_p2715) {
struct yf2716 F;
memset((void *)&F, 0, sizeof F);
F.p2714 = a_p2714;
F.p2715 = a_p2715;
yr2066_Manifest(F.p2715, &F.v6286, &F.v6288);
if ((!F.v6286)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2715))).f_line, y_str("an AT location is a manifest constant (XIV.VII)", 47));
}
yr986_SB();
yr997_SA(y_str("y_device(&", 10));
yr1004_ST(yr1671_SymPath(F.p2714));
yr997_SA(y_str(", ", 2));
yr1010_SI(F.v6288);
yr997_SA(y_str(");", 2));
F.v6290 = yr1016_SE();
yr1092_Emit(F.v6290);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2720_Arg(void * a_p2721, rt_int a_p2722) {
struct yf2723 F;
memset((void *)&F, 0, sizeof F);
F.p2721 = a_p2721;
F.p2722 = a_p2722;
F.v6299 = ((*(yR95 *)rt_nil_check(F.p2721))).f_a;
F.v6301 = INT64_C(1);
while ((((!(F.v6299 == ((void *)0)))) && ((F.v6301 < F.p2722)))) {
F.v6299 = ((*(yR95 *)rt_nil_check(F.v6299))).f_next;
F.v6301 = rt_range(rt_add(F.v6301, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v6299 == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2721))).f_line, ((*(yR95 *)rt_nil_check(F.p2721))).f_name, y_str(": too few actual parameters", 27));
}
{ void * rv6306 = F.v6299;
return rv6306; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2727_NArgs(void * a_p2728, rt_int a_p2729) {
struct yf2730 F;
memset((void *)&F, 0, sizeof F);
F.p2728 = a_p2728;
F.p2729 = a_p2729;
if ((!(yr1260_Count(((*(yR95 *)rt_nil_check(F.p2728))).f_a) == F.p2729))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2728))).f_line, ((*(yR95 *)rt_nil_check(F.p2728))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2734_Call1(yarr a_p2736, rt_int a_p2737) {
struct yf2738 F;
memset((void *)&F, 0, sizeof F);
F.p2736 = a_p2736;
F.p2737 = a_p2737;
yr986_SB();
yr997_SA(F.p2736);
yr997_SA(y_str("(", 1));
yr1004_ST(F.p2737);
yr997_SA(y_str(")", 1));
{ rt_int rv6316 = yr1016_SE();
return rv6316; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2742_Addr(rt_int a_p2743) {
struct yf2744 F;
memset((void *)&F, 0, sizeof F);
F.p2743 = a_p2743;
{ rt_int rv6321 = yr2486_Join(yr1021_T(y_str("&", 1)), F.p2743, INT64_C(0));
return rv6321; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2748_StdVar(void * a_p2749, rt_int a_p2750, rt_int * a_p2751, void * * a_p2752) {
struct yf2753 F;
memset((void *)&F, 0, sizeof F);
F.p2749 = a_p2749;
F.p2750 = a_p2750;
F.p2751_o = a_p2751;
F.p2752_o = a_p2752;
yr2104_LValue(F.p2749, &F.p2751, &F.p2752);
if ((((!(F.p2750 == v828))) && ((!(((*(yR100 *)rt_nil_check(F.p2752))).f_kind == F.p2750))))) {
yr986_SB();
yr997_SA(y_str("a ", 2));
if ((F.p2750 == v801)) {
yr997_SA(y_str("file", 4));
} else if ((F.p2750 == v807)) {
yr997_SA(y_str("signal", 6));
} else if ((F.p2750 == v810)) {
yr997_SA(y_str("SEMAPHORE", 9));
} else if ((F.p2750 == v798)) {
yr997_SA(y_str("pointer", 7));
} else {
yr997_SA(y_str("variable", 8));
}
yr997_SA(y_str(" is needed here", 15));
F.v6328 = yr1016_SE();
yr1117_Fail(((*(yR95 *)rt_nil_check(F.p2749))).f_line, F.v6328);
}
(*F.p2751_o) = F.p2751;
(*F.p2752_o) = F.p2752;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2757_NumArg(void * a_p2758, rt_int * a_p2759, void * * a_p2760) {
struct yf2761 F;
memset((void *)&F, 0, sizeof F);
F.p2758 = a_p2758;
F.p2759_o = a_p2759;
F.p2760_o = a_p2760;
yr2131_Expr(F.p2758, ((void *)0), &F.p2759, &F.p2760);
if ((!yr1726_IsNumeric(F.p2760))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2758))).f_line, y_str("a number is needed here", 23));
}
(*F.p2759_o) = F.p2759;
(*F.p2760_o) = F.p2760;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2765_IntArg(void * a_p2766) {
struct yf2767 F;
memset((void *)&F, 0, sizeof F);
F.p2766 = a_p2766;
yr2131_Expr(F.p2766, v1683, &F.v6344, &F.v6346);
if ((!(((*(yR100 *)rt_nil_check(F.v6346))).f_kind == v774))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2766))).f_line, y_str("an integer is needed here", 25));
}
{ rt_int rv6348 = F.v6344;
return rv6348; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2771_CodeInsert(void * a_p2772) {
struct yf2773 F;
memset((void *)&F, 0, sizeof F);
F.p2772 = a_p2772;
F.v6352 = yr2720_Arg(F.p2772, INT64_C(1));
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1)}; y_desc_array(&F.yd_6376, 1, lo, hi, &y_d_int); }
y_init(&F.yd_6376, &F.v6378);
if ((!(((*(yR95 *)rt_nil_check(F.v6352))).f_kind == v741))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2772))).f_line, y_str("a code insert takes a string literal (XIV.XI.5)", 47));
}
F.v6355 = ((*(yR95 *)rt_nil_check(F.v6352))).f_text;
F.v6365 = ((rt_int *)(v890).p)[y_ix1(v890, F.v6355)];
yr986_SB();
F.v6361 = INT64_C(1);
while ((F.v6361 <= F.v6365)) {
F.v6367 = yr1063_TChar(F.v6355, F.v6361);
if ((F.v6367 == 39)) {
F.v6363 = rt_range(rt_add(F.v6361, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1063_TChar(F.v6355, F.v6363) == 39))) {
F.v6363 = rt_range(rt_add(F.v6363, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v6357 = yr1028_Intern(rt_range(rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.v6355)], F.v6361), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v6363, F.v6361)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, yr2049_CharValue(v1687, F.v6357, ((*(yR95 *)rt_nil_check(F.p2772))).f_line))]);
F.v6361 = rt_range(rt_add(F.v6363, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v6367 == 36)) {
F.v6363 = rt_range(rt_add(F.v6361, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((F.v6363 <= F.v6365)) && ((yr968_IsLetter(yr1063_TChar(F.v6355, F.v6363)) || yr974_IsDigit(yr1063_TChar(F.v6355, F.v6363)))))) {
F.v6363 = rt_range(rt_add(F.v6363, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v6357 = yr1028_Intern(rt_range(rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.v6355)], F.v6361), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v6363, F.v6361)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v6369 = yr1612_Find(F.v6357);
if ((F.v6369 == ((void *)0))) {
v909 = INT64_C(0);
v921 = INT64_C(0);
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2772))).f_line, F.v6357, y_str(" in a code insert is not declared here", 38));
}
F.v6369 = yr1677_Real(F.v6369);
if ((((!(((*(yR115 *)rt_nil_check(F.v6369))).f_kind == v831))) && ((!(((*(yR115 *)rt_nil_check(F.v6369))).f_kind == v834))))) {
v909 = INT64_C(0);
v921 = INT64_C(0);
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2772))).f_line, F.v6357, y_str(" in a code insert is not a variable or constant", 47));
}
yr1004_ST(yr2112_Paren(yr1671_SymPath(F.v6369)));
F.v6361 = F.v6363;
} else {
yr991_SC(F.v6367);
F.v6361 = rt_range(rt_add(F.v6361, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
F.v6359 = yr1016_SE();
yr1092_Emit(F.v6359);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2777_StdCall(rt_int a_p2778, void * a_p2779, rt_int a_p2780, rt_int * a_p2781, void * * a_p2782) {
struct yf2783 F;
memset((void *)&F, 0, sizeof F);
F.p2778 = a_p2778;
F.p2779 = a_p2779;
F.p2780 = a_p2780;
F.p2781_o = a_p2781;
F.p2782_o = a_p2782;
F.p2782 = v1689;
F.p2781 = yr1021_T(y_str("((void)0)", 9));
F.v6445 = ((((((((((((((((F.p2778 == v1940)) || ((F.p2778 == v1943))) || ((F.p2778 == v1946))) || ((F.p2778 == v1949))) || ((F.p2778 == v1952))) || ((F.p2778 == v1958))) || ((F.p2778 == v1967))) || ((F.p2778 == v1973))) || ((F.p2778 == v1976))) || ((F.p2778 == v2000))) || ((F.p2778 == v2003))) || ((F.p2778 == v2012))) || ((F.p2778 == v2015))) || ((F.p2778 == v2018))) || ((F.p2778 == v2021)));
if ((F.p2780 && (!F.v6445))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2779))).f_line, ((*(yR95 *)rt_nil_check(F.p2779))).f_name, y_str(" returns a value: it is called in an expression", 47));
}
if (((!F.p2780) && F.v6445)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2779))).f_line, ((*(yR95 *)rt_nil_check(F.p2779))).f_name, y_str(" returns no value", 17));
}
if ((((F.p2778 == v1922)) || ((F.p2778 == v1925)))) {
yr2727_NArgs(F.p2779, INT64_C(2));
yr2131_Expr(yr2720_Arg(F.p2779, INT64_C(1)), ((void *)0), &F.v6417, &F.v6427);
if ((!yr1732_IsArrayLike(F.v6427))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2779))).f_line, ((*(yR95 *)rt_nil_check(F.p2779))).f_name, y_str(" of something that is not an array", 34));
}
F.v6419 = yr2765_IntArg(yr2720_Arg(F.p2779, INT64_C(2)));
yr2066_Manifest(yr2720_Arg(F.p2779, INT64_C(2)), &F.v6441, &F.v6439);
F.p2782 = yr2175_Unbounded(v1683);
if ((F.v6441 && ((((*(yR100 *)rt_nil_check(F.v6427))).f_kind == v792)))) {
if ((((F.v6439 < INT64_C(1))) || ((F.v6439 > ((*(yR100 *)rt_nil_check(F.v6427))).f_nidx)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2779))).f_line, y_str("no such dimension", 17));
}
F.v6433 = ((*(yR100 *)rt_nil_check(F.v6427))).f_idx;
F.lo6458 = INT64_C(2);
F.hi6459 = F.v6439;
{ rt_int hi6463 = F.hi6459;
for (rt_int i6462 = F.lo6458; i6462 <= hi6463; i6462++) { F.c_6461 = i6462;
F.v6433 = ((*(yR100 *)rt_nil_check(F.v6433))).f_link;
if (i6462 == hi6463) break;
}}
F.p2782 = F.v6433;
}
if ((F.p2778 == v1922)) {
F.p2781 = yr2181_Call2(y_str("y_low", 5), F.v6417, F.v6419);
} else {
F.p2781 = yr2181_Call2(y_str("y_high", 6), F.v6417, F.v6419);
}
(*F.p2781_o) = F.p2781;
(*F.p2782_o) = F.p2782;
return;
}
if ((((((F.p2778 == v1928)) || ((F.p2778 == v1931))) || ((F.p2778 == v1934))) || ((F.p2778 == v1937)))) {
yr2727_NArgs(F.p2779, INT64_C(1));
yr2131_Expr(yr2720_Arg(F.p2779, INT64_C(1)), ((void *)0), &F.v6417, &F.v6427);
if ((!yr1720_IsDiscrete(F.v6427))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2779))).f_line, ((*(yR95 *)rt_nil_check(F.p2779))).f_name, y_str(" of something that is not integer or scalar", 43));
}
if ((!(((*(yR100 *)rt_nil_check(F.v6427))).f_elem == ((void *)0)))) {
F.v6427 = ((*(yR100 *)rt_nil_check(F.v6427))).f_elem;
}
if ((((((F.p2778 == v1934)) || ((F.p2778 == v1937)))) && ((((*(yR100 *)rt_nil_check(F.v6427))).f_kind == v774)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2779))).f_line, y_str("FIRST and LAST apply to ordered enumerations and alphabets (XI)", 63));
}
if ((((((*(yR100 *)rt_nil_check(F.v6427))).f_kind == v786)) && (!((*(yR100 *)rt_nil_check(F.v6427))).f_ordered))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2779))).f_line, ((*(yR95 *)rt_nil_check(F.p2779))).f_name, y_str(" applies to ordered enumerations (XI)", 37));
}
F.p2782 = yr2175_Unbounded(F.v6427);
if ((F.p2778 == v1934)) {
F.p2781 = yr1818_LoText(F.v6427);
} else if ((F.p2778 == v1937)) {
F.p2781 = yr1824_HiText(F.v6427);
} else {
yr986_SB();
if ((!(((*(yR100 *)rt_nil_check(F.v6427))).f_lo == INT64_C(0)))) {
yr997_SA(y_str("rt_range(", 9));
}
if ((F.p2778 == v1928)) {
yr997_SA(y_str("rt_add(", 7));
} else {
yr997_SA(y_str("rt_sub(", 7));
}
yr1004_ST(F.v6417);
yr997_SA(y_str(", 1)", 4));
if ((!(((*(yR100 *)rt_nil_check(F.v6427))).f_lo == INT64_C(0)))) {
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1818_LoText(F.v6427));
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1824_HiText(F.v6427));
yr997_SA(y_str(")", 1));
}
F.p2781 = yr1016_SE();
}
if ((!(((*(yR100 *)rt_nil_check(F.v6427))).f_kind == v774))) {
F.p2782 = F.v6427;
}
(*F.p2781_o) = F.p2781;
(*F.p2782_o) = F.p2782;
return;
}
if ((F.p2778 == v1940)) {
yr2727_NArgs(F.p2779, INT64_C(1));
yr2748_StdVar(yr2720_Arg(F.p2779, INT64_C(1)), v798, &F.v6417, &F.v6427);
if ((((*(yR100 *)rt_nil_check(F.v6427))).f_elem == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2779))).f_line, ((*(yR100 *)rt_nil_check(F.v6427))).f_forward, y_str(" is not declared", 16));
}
F.v6433 = ((*(yR100 *)rt_nil_check(F.v6427))).f_elem;
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(F.v6417);
yr997_SA(y_str(" = rt_alloc(sizeof(", 19));
yr1004_ST(yr1756_CType(F.v6433));
yr997_SA(y_str("));", 3));
if (yr1744_Deep(F.v6433)) {
yr997_SA(y_str(" y_init(", 8));
yr1004_ST(yr1762_DescOf(F.v6433));
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6417);
yr997_SA(y_str(");", 2));
}
yr997_SA(y_str(" })", 3));
F.p2781 = yr1016_SE();
(*F.p2781_o) = F.p2781;
(*F.p2782_o) = F.p2782;
return;
}
if ((F.p2778 == v2018)) {
yr2727_NArgs(F.p2779, INT64_C(1));
yr2748_StdVar(yr2720_Arg(F.p2779, INT64_C(1)), v798, &F.v6417, &F.v6427);
F.p2781 = yr2486_Join(yr1021_T(y_str("({ free(", 8)), F.v6417, yr2486_Join(yr1021_T(y_str("); ", 3)), F.v6417, yr1021_T(y_str(" = 0; })", 8))));
(*F.p2781_o) = F.p2781;
(*F.p2782_o) = F.p2782;
return;
}
if ((F.p2778 == v1943)) {
yr2727_NArgs(F.p2779, INT64_C(3));
yr2748_StdVar(yr2720_Arg(F.p2779, INT64_C(1)), v801, &F.v6417, &F.v6427);
yr2131_Expr(yr2720_Arg(F.p2779, INT64_C(2)), v1687, &F.v6419, &F.v6429);
if ((!yr1738_IsString(F.v6429))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2779))).f_line, y_str("OPEN takes the name of the file as a string (XII.A)", 51));
}
yr2131_Expr(yr2720_Arg(F.p2779, INT64_C(3)), v2787, &F.v6421, &F.v6431);
yr1789_CheckType(((*(yR95 *)rt_nil_check(F.p2779))).f_line, v2787, F.v6431);
yr986_SB();
yr997_SA(y_str("y_open(&", 8));
yr1004_ST(F.v6417);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6419);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6421);
yr997_SA(y_str(")", 1));
F.p2781 = yr1016_SE();
(*F.p2781_o) = F.p2781;
(*F.p2782_o) = F.p2782;
return;
}
if ((((F.p2778 == v1946)) || ((F.p2778 == v1955)))) {
yr2727_NArgs(F.p2779, INT64_C(1));
yr2748_StdVar(yr2720_Arg(F.p2779, INT64_C(1)), v801, &F.v6417, &F.v6427);
if ((F.p2778 == v1946)) {
F.p2781 = yr2734_Call1(y_str("y_close", 7), yr2742_Addr(F.v6417));
} else {
F.p2782 = v1685;
F.p2781 = yr2734_Call1(y_str("y_check_eof", 11), yr2742_Addr(F.v6417));
}
(*F.p2781_o) = F.p2781;
(*F.p2782_o) = F.p2782;
return;
}
if ((F.p2778 == v1949)) {
yr2727_NArgs(F.p2779, INT64_C(2));
yr2748_StdVar(yr2720_Arg(F.p2779, INT64_C(1)), v801, &F.v6417, &F.v6427);
yr2748_StdVar(yr2720_Arg(F.p2779, INT64_C(2)), v828, &F.v6419, &F.v6429);
yr1789_CheckType(((*(yR95 *)rt_nil_check(F.p2779))).f_line, ((*(yR100 *)rt_nil_check(F.v6427))).f_elem, F.v6429);
if ((yr1744_Deep(F.v6429) || ((((*(yR100 *)rt_nil_check(F.v6429))).f_kind == v798)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2779))).f_line, y_str("files of this implementation hold no arrays or pointers", 55));
}
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(yr1756_CType(F.v6429));
yr997_SA(y_str(" g; y_get(&", 11));
yr1004_ST(F.v6417);
yr997_SA(y_str(", &g, sizeof g); ", 17));
yr1004_ST(F.v6419);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2074_Convert(yr1021_T(y_str("g", 1)), F.v6429, ((*(yR100 *)rt_nil_check(F.v6427))).f_elem));
yr997_SA(y_str("; })", 4));
F.p2781 = yr1016_SE();
(*F.p2781_o) = F.p2781;
(*F.p2782_o) = F.p2782;
return;
}
if ((F.p2778 == v1952)) {
yr2727_NArgs(F.p2779, INT64_C(2));
yr2748_StdVar(yr2720_Arg(F.p2779, INT64_C(1)), v801, &F.v6417, &F.v6427);
yr2131_Expr(yr2720_Arg(F.p2779, INT64_C(2)), ((*(yR100 *)rt_nil_check(F.v6427))).f_elem, &F.v6419, &F.v6429);
yr1789_CheckType(((*(yR95 *)rt_nil_check(F.p2779))).f_line, ((*(yR100 *)rt_nil_check(F.v6427))).f_elem, F.v6429);
if ((yr1744_Deep(F.v6429) || ((((*(yR100 *)rt_nil_check(F.v6429))).f_kind == v798)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2779))).f_line, y_str("files of this implementation hold no arrays or pointers", 55));
}
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(yr1756_CType(((*(yR100 *)rt_nil_check(F.v6427))).f_elem));
yr997_SA(y_str(" pv = ", 6));
yr1004_ST(yr2074_Convert(F.v6419, ((*(yR100 *)rt_nil_check(F.v6427))).f_elem, F.v6429));
yr997_SA(y_str("; y_put(&", 9));
yr1004_ST(F.v6417);
yr997_SA(y_str(", &pv, sizeof pv); })", 21));
F.p2781 = yr1016_SE();
(*F.p2781_o) = F.p2781;
(*F.p2782_o) = F.p2782;
return;
}
if ((F.p2778 == v1958)) {
F.v6435 = yr1260_Count(((*(yR95 *)rt_nil_check(F.p2779))).f_a);
if ((((F.v6435 < INT64_C(5))) || ((!((rt_mod((rt_sub(F.v6435, INT64_C(2))), INT64_C(3))) == INT64_C(0)))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2779))).f_line, y_str("MOVE takes an object, an index and triples", 42));
}
yr2748_StdVar(yr2720_Arg(F.p2779, INT64_C(1)), v828, &F.v6417, &F.v6427);
if (((!((((((*(yR100 *)rt_nil_check(F.v6427))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.v6427))).f_kind == v813))))) || ((!(((*(yR100 *)rt_nil_check(F.v6427))).f_nidx == INT64_C(1)))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2779))).f_line, y_str("MOVE works on one-dimensional arrays", 36));
}
F.v6419 = yr2765_IntArg(yr2720_Arg(F.p2779, INT64_C(2)));
F.v6425 = yr1146_Fresh(y_str("at", 2));
yr986_SB();
yr997_SA(y_str("({ rt_int ", 10));
yr1004_ST(F.v6425);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.v6419);
yr997_SA(y_str(";", 1));
F.p2781 = yr1016_SE();
F.v6437 = INT64_C(3);
while ((F.v6437 < F.v6435)) {
yr2131_Expr(yr2720_Arg(F.p2779, F.v6437), ((*(yR100 *)rt_nil_check(F.v6427))).f_elem, &F.v6421, &F.v6431);
if (((!yr1732_IsArrayLike(F.v6431)) || (!yr1774_SameType(((*(yR100 *)rt_nil_check(F.v6427))).f_elem, ((*(yR100 *)rt_nil_check(F.v6431))).f_elem)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2779))).f_line, y_str("MOVE: the components differ in type", 35));
}
F.v6423 = yr2765_IntArg(yr2720_Arg(F.p2779, rt_range(rt_add(F.v6437, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v6419 = yr2765_IntArg(yr2720_Arg(F.p2779, rt_range(rt_add(F.v6437, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr986_SB();
yr1004_ST(F.p2781);
yr997_SA(y_str(" { rt_int mi = ", 15));
yr1004_ST(F.v6423);
yr997_SA(y_str(", mj = ", 7));
yr1004_ST(F.v6419);
yr997_SA(y_str("; y_move(&", 10));
yr1004_ST(F.v6417);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6425);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6421);
yr997_SA(y_str(", mi, mj, ", 10));
yr1004_ST(yr1762_DescOf(((*(yR100 *)rt_nil_check(F.v6427))).f_elem));
yr997_SA(y_str("); if (mj >= mi) ", 17));
yr1004_ST(F.v6425);
yr997_SA(y_str(" += mj - mi + 1; }", 18));
F.p2781 = yr1016_SE();
F.v6437 = rt_range(rt_add(F.v6437, INT64_C(3)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.p2781 = yr2486_Join(F.p2781, yr1021_T(y_str(" })", 3)), INT64_C(0));
(*F.p2781_o) = F.p2781;
(*F.p2782_o) = F.p2782;
return;
}
if ((((F.p2778 == v1961)) || ((F.p2778 == v1964)))) {
yr2727_NArgs(F.p2779, INT64_C(2));
F.v6417 = yr2456_Cond(yr2720_Arg(F.p2779, INT64_C(1)));
F.v6419 = yr2456_Cond(yr2720_Arg(F.p2779, INT64_C(2)));
F.p2782 = v1685;
if ((F.p2778 == v1961)) {
F.p2781 = yr2190_Infix(yr2112_Paren(yr2190_Infix(F.v6417, y_str("!=", 2), yr1021_T(y_str("0", 1)))), y_str("&", 1), yr2112_Paren(yr2190_Infix(F.v6419, y_str("!=", 2), yr1021_T(y_str("0", 1)))));
} else {
F.p2781 = yr2190_Infix(yr2112_Paren(yr2190_Infix(F.v6417, y_str("!=", 2), yr1021_T(y_str("0", 1)))), y_str("|", 1), yr2112_Paren(yr2190_Infix(F.v6419, y_str("!=", 2), yr1021_T(y_str("0", 1)))));
}
(*F.p2781_o) = F.p2781;
(*F.p2782_o) = F.p2782;
return;
}
if ((F.p2778 == v1967)) {
yr2727_NArgs(F.p2779, INT64_C(1));
F.p2781 = yr2734_Call1(y_str("rt_delay", 8), yr2765_IntArg(yr2720_Arg(F.p2779, INT64_C(1))));
(*F.p2781_o) = F.p2781;
(*F.p2782_o) = F.p2782;
return;
}
if ((F.p2778 == v1970)) {
yr2727_NArgs(F.p2779, INT64_C(0));
F.p2782 = yr2175_Unbounded(v1683);
F.p2781 = yr1021_T(y_str("rt_time()", 9));
(*F.p2781_o) = F.p2781;
(*F.p2782_o) = F.p2782;
return;
}
if (((((F.p2778 == v1973)) || ((F.p2778 == v1976))) || ((F.p2778 == v1979)))) {
yr2748_StdVar(yr2720_Arg(F.p2779, INT64_C(1)), v807, &F.v6417, &F.v6427);
if ((F.p2778 == v1973)) {
if ((yr1260_Count(((*(yR95 *)rt_nil_check(F.p2779))).f_a) == INT64_C(1))) {
F.v6419 = yr1021_T(y_str("1", 1));
} else {
yr2727_NArgs(F.p2779, INT64_C(2));
F.v6419 = yr2765_IntArg(yr2720_Arg(F.p2779, INT64_C(2)));
}
F.p2781 = yr2181_Call2(y_str("y_wait", 6), yr2742_Addr(F.v6417), F.v6419);
} else {
yr2727_NArgs(F.p2779, INT64_C(1));
if ((F.p2778 == v1976)) {
F.p2781 = yr2734_Call1(y_str("y_send", 6), yr2742_Addr(F.v6417));
} else {
F.p2782 = v1685;
F.p2781 = yr2734_Call1(y_str("y_awaited", 9), yr2742_Addr(F.v6417));
}
}
(*F.p2781_o) = F.p2781;
(*F.p2782_o) = F.p2782;
return;
}
if (((((F.p2778 == v1982)) || ((F.p2778 == v1985))) || ((F.p2778 == v1988)))) {
yr2727_NArgs(F.p2779, INT64_C(1));
yr2757_NumArg(yr2720_Arg(F.p2779, INT64_C(1)), &F.v6417, &F.v6427);
F.p2782 = yr2175_Unbounded(v1683);
if ((((*(yR100 *)rt_nil_check(F.v6427))).f_kind == v774)) {
F.p2781 = F.v6417;
} else if ((F.p2778 == v1982)) {
F.p2781 = yr2734_Call1(y_str("y_floor", 7), F.v6417);
} else if ((F.p2778 == v1985)) {
F.p2781 = yr2734_Call1(y_str("y_ceiling", 9), F.v6417);
} else {
F.p2781 = yr2734_Call1(y_str("y_near_integer", 14), F.v6417);
}
(*F.p2781_o) = F.p2781;
(*F.p2782_o) = F.p2782;
return;
}
if ((F.p2778 == v1994)) {
yr2727_NArgs(F.p2779, INT64_C(1));
yr2757_NumArg(yr2720_Arg(F.p2779, INT64_C(1)), &F.v6417, &F.v6427);
F.p2782 = v1695;
F.p2781 = yr2486_Join(yr1021_T(y_str("((double)(", 10)), F.v6417, yr1021_T(y_str("))", 2)));
(*F.p2781_o) = F.p2781;
(*F.p2782_o) = F.p2782;
return;
}
if ((F.p2778 == v1991)) {
yr2727_NArgs(F.p2779, INT64_C(2));
yr2757_NumArg(yr2720_Arg(F.p2779, INT64_C(1)), &F.v6417, &F.v6427);
yr2757_NumArg(yr2720_Arg(F.p2779, INT64_C(2)), &F.v6419, &F.v6429);
F.p2782 = v1697;
F.p2781 = yr2181_Call2(y_str("y_near_fixed", 12), yr2486_Join(yr1021_T(y_str("(double)(", 9)), F.v6417, yr1021_T(y_str(")", 1))), F.v6419);
(*F.p2781_o) = F.p2781;
(*F.p2782_o) = F.p2782;
return;
}
if ((F.p2778 == v1997)) {
yr2727_NArgs(F.p2779, INT64_C(3));
yr2757_NumArg(yr2720_Arg(F.p2779, INT64_C(1)), &F.v6417, &F.v6427);
yr2757_NumArg(yr2720_Arg(F.p2779, INT64_C(2)), &F.v6419, &F.v6429);
yr2757_NumArg(yr2720_Arg(F.p2779, INT64_C(3)), &F.v6421, &F.v6431);
F.p2782 = v1697;
F.p2781 = yr2486_Join(yr1021_T(y_str("y_fixed_div(", 12)), F.v6417, yr2486_Join(yr1021_T(y_str(", ", 2)), F.v6419, yr2486_Join(yr1021_T(y_str(", ", 2)), F.v6421, yr1021_T(y_str(")", 1)))));
(*F.p2781_o) = F.p2781;
(*F.p2782_o) = F.p2782;
return;
}
if (((((F.p2778 == v2000)) || ((F.p2778 == v2003))) || ((F.p2778 == v2006)))) {
yr2727_NArgs(F.p2779, INT64_C(1));
yr2748_StdVar(yr2720_Arg(F.p2779, INT64_C(1)), v810, &F.v6417, &F.v6427);
if ((F.p2778 == v2000)) {
F.p2781 = yr2734_Call1(y_str("rt_region_enter", 15), yr2742_Addr(F.v6417));
} else if ((F.p2778 == v2003)) {
F.p2781 = yr2734_Call1(y_str("rt_region_leave", 15), yr2742_Addr(F.v6417));
} else {
F.p2782 = v1685;
F.p2781 = yr2734_Call1(y_str("y_cond_claim", 12), yr2742_Addr(F.v6417));
}
(*F.p2781_o) = F.p2781;
(*F.p2782_o) = F.p2782;
return;
}
if ((F.p2778 == v2009)) {
yr2727_NArgs(F.p2779, INT64_C(0));
F.p2782 = yr2175_Unbounded(v1683);
F.p2781 = yr1021_T(y_str("y_self()", 8));
(*F.p2781_o) = F.p2781;
(*F.p2782_o) = F.p2782;
return;
}
if ((F.p2778 == v2012)) {
yr2727_NArgs(F.p2779, INT64_C(2));
F.p2781 = yr2181_Call2(y_str("y_change_priority", 17), yr2765_IntArg(yr2720_Arg(F.p2779, INT64_C(1))), yr2765_IntArg(yr2720_Arg(F.p2779, INT64_C(2))));
(*F.p2781_o) = F.p2781;
(*F.p2782_o) = F.p2782;
return;
}
if ((F.p2778 == v2015)) {
yr2727_NArgs(F.p2779, INT64_C(1));
F.p2781 = yr2734_Call1(y_str("y_raise_termination", 19), yr2765_IntArg(yr2720_Arg(F.p2779, INT64_C(1))));
(*F.p2781_o) = F.p2781;
(*F.p2782_o) = F.p2782;
return;
}
if ((F.p2778 == v2021)) {
yr2727_NArgs(F.p2779, INT64_C(1));
yr2771_CodeInsert(F.p2779);
(*F.p2781_o) = F.p2781;
(*F.p2782_o) = F.p2782;
return;
}
if ((((F.p2778 == v2024)) || ((F.p2778 == v2027)))) {
yr2727_NArgs(F.p2779, INT64_C(1));
yr2131_Expr(yr2720_Arg(F.p2779, INT64_C(1)), ((void *)0), &F.v6417, &F.v6427);
F.p2782 = yr2175_Unbounded(v1683);
if ((F.p2778 == v2024)) {
F.p2781 = yr2486_Join(yr1021_T(y_str("((rt_int)(intptr_t)&(", 21)), F.v6417, yr1021_T(y_str("))", 2)));
} else {
F.p2781 = yr2486_Join(yr1021_T(y_str("((rt_int)sizeof(", 16)), F.v6417, yr1021_T(y_str("))", 2)));
}
(*F.p2781_o) = F.p2781;
(*F.p2782_o) = F.p2782;
return;
}
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2779))).f_line, ((*(yR95 *)rt_nil_check(F.p2779))).f_name, y_str(" is not translated", 18));
(*F.p2781_o) = F.p2781;
(*F.p2782_o) = F.p2782;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2791_StdRep(yarr a_p2793, void * a_p2794) {
struct yf2795 F;
memset((void *)&F, 0, sizeof F);
F.p2793 = a_p2793;
F.p2794 = a_p2794;
F.v6635 = yr1588_NewSym(v840, yr1041_N(F.p2793));
((*(yR115 *)rt_nil_check(F.v6635))).f_rep = F.p2794;
yr1644_Define(F.v6635, INT64_C(0));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2799_StdOp(yarr a_p2801, rt_int a_p2802) {
struct yf2803 F;
memset((void *)&F, 0, sizeof F);
F.p2801 = a_p2801;
F.p2802 = a_p2802;
F.v6641 = yr1588_NewSym(v861, yr1041_N(F.p2801));
((*(yR115 *)rt_nil_check(F.v6641))).f_mval = F.p2802;
yr1644_Define(F.v6641, INT64_C(0));
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2807_LitList(yarr a_p2809, yarr a_p2810, yarr a_p2811, rt_int a_p2812) {
struct yf2813 F;
memset((void *)&F, 0, sizeof F);
F.p2809 = a_p2809;
F.p2810 = a_p2810;
F.p2811 = a_p2811;
F.p2812 = a_p2812;
F.v6649 = ((void *)0);
F.v6651 = ((void *)0);
F.v6653 = ((void *)0);
F.v6653 = yr1245_NewNode(v639, INT64_C(0));
((*(yR95 *)rt_nil_check(F.v6653))).f_name = yr1041_N(F.p2809);
yr1252_Link(&F.v6649, &F.v6651, F.v6653);
F.v6653 = yr1245_NewNode(v639, INT64_C(0));
((*(yR95 *)rt_nil_check(F.v6653))).f_name = yr1041_N(F.p2810);
yr1252_Link(&F.v6649, &F.v6651, F.v6653);
if (F.p2812) {
F.v6653 = yr1245_NewNode(v639, INT64_C(0));
((*(yR95 *)rt_nil_check(F.v6653))).f_name = yr1041_N(F.p2811);
yr1252_Link(&F.v6649, &F.v6651, F.v6653);
}
{ void * rv6657 = F.v6649;
return rv6657; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2817_Abstract(rt_int a_p2818, yarr a_p2820) {
struct yf2821 F;
memset((void *)&F, 0, sizeof F);
F.p2818 = a_p2818;
F.p2820 = a_p2820;
F.v6662 = yr1707_NewRep(F.p2818, yr1041_N(F.p2820));
((*(yR100 *)rt_nil_check(F.v6662))).f_abstract = 1;
{ void * rv6664 = F.v6662;
return rv6664; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2825_Predefine(void) {
struct yf2826 F;
memset((void *)&F, 0, sizeof F);
yr1595_OpenScope(0);
((void * *)(v2605).p)[y_ix1(v2605, v1570)] = ((void *)0);
v1683 = yr2817_Abstract(v774, y_str("INTEGER", 7));
v1697 = yr2817_Abstract(v777, y_str("FIXED", 5));
v1695 = yr2817_Abstract(v780, y_str("FLOATING", 8));
v1699 = yr1707_NewRep(v807, yr1041_N(y_str("SIGNAL", 6)));
v1701 = yr1707_NewRep(v810, yr1041_N(y_str("SEMAPHORE", 9)));
v1689 = yr1707_NewRep(v822, yr1041_N(y_str("no value", 8)));
v1703 = yr1707_NewRep(v828, yr1041_N(y_str("any", 3)));
v1685 = yr1707_NewRep(v783, yr1041_N(y_str("BOOLEAN", 7)));
((*(yR100 *)rt_nil_check(v1685))).f_lits = yr2807_LitList(y_str("FALSE", 5), y_str("TRUE", 4), y_str("", 0), 0);
((*(yR100 *)rt_nil_check(v1685))).f_nlits = INT64_C(2);
yr1843_SetRange(v1685, INT64_C(0), INT64_C(1));
yr1837_DefineLits(v1685);
v1687 = yr1707_NewRep(v789, yr1041_N(y_str("ASCII", 5)));
((*(yR100 *)rt_nil_check(v1687))).f_ordered = 1;
((*(yR100 *)rt_nil_check(v1687))).f_nlits = INT64_C(128);
yr1843_SetRange(v1687, INT64_C(0), INT64_C(127));
v2787 = yr1707_NewRep(v786, yr1041_N(y_str("OPEN_MODE", 9)));
((*(yR100 *)rt_nil_check(v2787))).f_lits = yr2807_LitList(y_str("READ", 4), y_str("WRITE", 5), y_str("APPEND", 6), 1);
((*(yR100 *)rt_nil_check(v2787))).f_nlits = INT64_C(3);
yr1843_SetRange(v2787, INT64_C(0), INT64_C(2));
yr1837_DefineLits(v2787);
yr2791_StdRep(y_str("INTEGER", 7), v1683);
yr2791_StdRep(y_str("FIXED", 5), v1697);
yr2791_StdRep(y_str("FLOATING", 8), v1695);
yr2791_StdRep(y_str("BOOLEAN", 7), v1685);
yr2791_StdRep(y_str("SIGNAL", 6), v1699);
yr2791_StdRep(y_str("SEMAPHORE", 9), v1701);
yr2791_StdRep(y_str("ASCII", 5), v1687);
yr2791_StdRep(y_str("STANDARD_ALPHABET", 17), v1687);
yr2791_StdRep(y_str("OPEN_MODE", 9), v2787);
yr2799_StdOp(y_str("LOW", 3), v1922);
yr2799_StdOp(y_str("HIGH", 4), v1925);
yr2799_StdOp(y_str("SUCC", 4), v1928);
yr2799_StdOp(y_str("PRED", 4), v1931);
yr2799_StdOp(y_str("FIRST", 5), v1934);
yr2799_StdOp(y_str("LAST", 4), v1937);
yr2799_StdOp(y_str("NEW", 3), v1940);
yr2799_StdOp(y_str("OPEN", 4), v1943);
yr2799_StdOp(y_str("CLOSE", 5), v1946);
yr2799_StdOp(y_str("GET", 3), v1949);
yr2799_StdOp(y_str("PUT", 3), v1952);
yr2799_StdOp(y_str("CHECK_EOF", 9), v1955);
yr2799_StdOp(y_str("MOVE", 4), v1958);
yr2799_StdOp(y_str("AND_LONG", 8), v1961);
yr2799_StdOp(y_str("OR_LONG", 7), v1964);
yr2799_StdOp(y_str("DELAY", 5), v1967);
yr2799_StdOp(y_str("CLOCK_TIME", 10), v1970);
yr2799_StdOp(y_str("WAIT", 4), v1973);
yr2799_StdOp(y_str("SEND", 4), v1976);
yr2799_StdOp(y_str("AWAITED", 7), v1979);
yr2799_StdOp(y_str("FLOOR", 5), v1982);
yr2799_StdOp(y_str("CEILING", 7), v1985);
yr2799_StdOp(y_str("NEAR_INTEGER", 12), v1988);
yr2799_StdOp(y_str("NEAR_FIXED", 10), v1991);
yr2799_StdOp(y_str("NEAR_FLOATING", 13), v1994);
yr2799_StdOp(y_str("FIXED_DIV", 9), v1997);
yr2799_StdOp(y_str("CLAIM", 5), v2000);
yr2799_StdOp(y_str("RELEASE", 7), v2003);
yr2799_StdOp(y_str("CONDITIONAL_CLAIM", 17), v2006);
yr2799_StdOp(y_str("PROCESS_IDENTITY", 16), v2009);
yr2799_StdOp(y_str("CHANGE_PRIORITY", 15), v2012);
yr2799_StdOp(y_str("RAISE_PROCESS_TERMINATION", 25), v2015);
yr2799_StdOp(y_str("FREE_POINTER", 12), v2018);
yr2799_StdOp(y_str("C_CODE_INSERT", 13), v2021);
yr2799_StdOp(y_str("ADDR", 4), v2024);
yr2799_StdOp(y_str("EXTENT", 6), v2027);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2830_Translate(void) {
struct yf2831 F;
memset((void *)&F, 0, sizeof F);
F.v6742 = v2789;
yr1595_OpenScope(0);
((void * *)(v2605).p)[y_ix1(v2605, v1570)] = ((void *)0);
v1576 = INT64_C(0);
while ((!(F.v6742 == ((void *)0)))) {
yr2640_CompileModule(F.v6742);
F.v6742 = ((*(yR95 *)rt_nil_check(F.v6742))).f_next;
}
yr2664_AwaitProcesses();
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2835_WriteProgram(void) {
struct yf2836 F;
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
v1922 = INT64_C(1);
v1925 = INT64_C(2);
v1928 = INT64_C(3);
v1931 = INT64_C(4);
v1934 = INT64_C(5);
v1937 = INT64_C(6);
v1940 = INT64_C(7);
v1943 = INT64_C(8);
v1946 = INT64_C(9);
v1949 = INT64_C(10);
v1952 = INT64_C(11);
v1955 = INT64_C(12);
v1958 = INT64_C(13);
v1961 = INT64_C(14);
v1964 = INT64_C(15);
v1967 = INT64_C(16);
v1970 = INT64_C(17);
v1973 = INT64_C(18);
v1976 = INT64_C(19);
v1979 = INT64_C(20);
v1982 = INT64_C(21);
v1985 = INT64_C(22);
v1988 = INT64_C(23);
v1991 = INT64_C(24);
v1994 = INT64_C(25);
v1997 = INT64_C(26);
v2000 = INT64_C(27);
v2003 = INT64_C(28);
v2006 = INT64_C(29);
v2009 = INT64_C(30);
v2012 = INT64_C(31);
v2015 = INT64_C(32);
v2018 = INT64_C(33);
v2021 = INT64_C(34);
v2024 = INT64_C(35);
v2027 = INT64_C(36);
v2030 = INT64_C(0);
v2033 = ((void *)0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_2228, 1, lo, hi, &y_d_int); }
y_init(&yd_2228, &v2230);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_2237, 1, lo, hi, &y_d_ptr); }
y_init(&yd_2237, &v2239);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_2246, 1, lo, hi, &y_d_ptr); }
y_init(&yd_2246, &v2248);
v2250 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2335, 1, lo, hi, &y_d_int); }
y_init(&yd_2335, &v2337);
v2339 = INT64_C(0);
v2342 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2350, 1, lo, hi, &y_d_int); }
y_init(&yd_2350, &v2352);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2359, 1, lo, hi, &y_d_int); }
y_init(&yd_2359, &v2361);
v2363 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2371, 1, lo, hi, &y_d_int); }
y_init(&yd_2371, &v2373);
v2375 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2383, 1, lo, hi, &y_d_int); }
y_init(&yd_2383, &v2385);
y_init(&yd_2383, &v2387);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2394, 1, lo, hi, &y_d_int); }
y_init(&yd_2394, &v2396);
v2398 = INT64_C(0);
v2401 = INT64_C(0);
v2404 = ((void *)0);
v2406 = 0;
v2596 = ((void *)0);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_2603, 1, lo, hi, &y_d_ptr); }
y_init(&yd_2603, &v2605);
v2622 = INT64_C(0);
yr963_InitChars();
yr1177_InitWords();
v1239 = yr1041_N(y_str("FROM", 4));
v1242 = yr1041_N(y_str("DIMENSION", 9));
v2030 = yr1021_T(y_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP DEL SQ DQ ", 128));
y_open(&v881, y_str("OUTPUT", 6), 1);
yr1182_ReadSource();
yr1229_Lex();
v2789 = yr1554_ParseProgram();
yr2825_Predefine();
yr2830_Translate();
yr2835_WriteProgram();
y_close(&v881);
}
int main(int argc, char **argv) {
y_lang();
rt_init(argc, argv);
y_elaborate();
rt_main_done();
return 0;
}
