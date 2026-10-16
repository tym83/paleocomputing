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
struct yf2094;
struct yf2102;
struct yf2108;
struct yf2115;
struct yf2121;
struct yf2130;
struct yf2138;
struct yf2147;
struct yf2155;
struct yf2165;
struct yf2171;
struct yf2180;
struct yf2189;
struct yf2198;
struct yf2204;
struct yf2213;
struct yf2250;
struct yf2258;
struct yf2264;
struct yf2273;
struct yf2282;
struct yf2293;
struct yf2303;
struct yf2312;
struct yf2320;
struct yf2407;
struct yf2417;
struct yf2423;
struct yf2428;
struct yf2434;
struct yf2440;
struct yf2446;
struct yf2452;
struct yf2459;
struct yf2464;
struct yf2470;
struct yf2476;
struct yf2484;
struct yf2490;
struct yf2496;
struct yf2502;
struct yf2508;
struct yf2514;
struct yf2520;
struct yf2526;
struct yf2532;
struct yf2539;
struct yf2546;
struct yf2552;
struct yf2560;
struct yf2566;
struct yf2573;
struct yf2580;
struct yf2586;
struct yf2604;
struct yf2612;
struct yf2623;
struct yf2630;
struct yf2636;
struct yf2642;
struct yf2648;
struct yf2654;
struct yf2659;
struct yf2666;
struct yf2672;
struct yf2678;
struct yf2683;
struct yf2689;
struct yf2696;
struct yf2703;
struct yf2710;
struct yf2717;
struct yf2725;
struct yf2731;
struct yf2740;
struct yf2748;
struct yf2754;
struct yf2760;
struct yf2770;
struct yf2782;
struct yf2790;
struct yf2800;
struct yf2808;
struct yf2813;
struct yf2818;
struct yf2823;
struct yR95 { rt_int f_kind; rt_int f_line; rt_int f_ival; rt_int f_flag; rt_int f_name; rt_int f_text; void * f_a; void * f_b; void * f_c; void * f_d; void * f_e; void * f_next; void * f_rep; void * f_sym; };
struct yR100 { rt_int f_kind; rt_int f_tid; rt_int f_tname; rt_int f_lo; rt_int f_hi; rt_int f_mlo; rt_int f_mhi; rt_int f_hasm; rt_int f_scale; rt_int f_prec; void * f_elem; void * f_idx; rt_int f_nidx; void * f_link; void * f_lits; rt_int f_nlits; void * f_fields; void * f_selector; rt_int f_cname; rt_int f_dname; rt_int f_dlevel; rt_int f_deep; rt_int f_abstract; rt_int f_opaque; rt_int f_opaqueops; rt_int f_ordered; rt_int f_forward; rt_int f_fwdscope; void * f_monitor; rt_int f_serial; };
struct yR105 { rt_int f_name; void * f_rep; rt_int f_isconst; rt_int f_variant; void * f_labels; void * f_next; };
struct yR110 { rt_int f_name; rt_int f_cls; void * f_rep; rt_int f_cname; void * f_next; };
struct yR115 { rt_int f_kind; rt_int f_name; void * f_rep; rt_int f_cname; rt_int f_level; rt_int f_byref; rt_int f_readonly; rt_int f_mval; rt_int f_hasmv; void * f_params; rt_int f_nparams; void * f_ret; rt_int f_func; void * f_decl; rt_int f_depth; void * f_target; void * f_members; void * f_mnext; void * f_chain; void * f_stack; void * f_alt; void * f_monitor; rt_int f_serial; };
struct yR120 { void * f_syms; rt_int f_closed; void * f_module; rt_int f_level; void * f_deferred; void * f_up; };
struct yR125 { rt_int f_t; void * f_next; };
struct yR130 { void * f_head; void * f_tail; };
struct yf964 { void *up;
rt_int v2827;
rt_int c_2830;
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
rt_int lo2866;
rt_int hi2867;
rt_int c_2869;
};
struct yf1006 { void *up;
rt_int p1005;
rt_int v2875;
};
struct yf1012 { void *up;
rt_int p1011;
ydesc yd_2888;
yarr v2890;
rt_int v2892;
rt_int v2895;
};
struct yf1017 { void *up;
rt_int v2914;
rt_int lo2925;
rt_int hi2926;
rt_int c_2928;
};
struct yf1024 { void *up;
yarr p1023;
};
struct yf1031 { void *up;
rt_int p1029;
rt_int p1030;
rt_int v2939;
rt_int v2942;
rt_int v2944;
rt_int lo2949;
rt_int hi2950;
rt_int c_2952;
rt_int lo2970;
rt_int hi2971;
rt_int c_2973;
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
rt_int lo3001;
rt_int hi3002;
rt_int c_3004;
};
struct yf1059 { void *up;
rt_int p1056;
yarr p1058;
rt_int v3017;
rt_int lo3033;
rt_int hi3034;
rt_int c_3036;
};
struct yf1066 { void *up;
rt_int p1064;
rt_int p1065;
};
struct yf1073 { void *up;
yR130 * p1071;
rt_int p1072;
void * v3057;
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
rt_int v3071;
};
struct yf1113 { void *up;
yR130 p1112;
void * v3078;
};
struct yf1120 { void *up;
rt_int p1118;
rt_int p1119;
rt_int v3084;
};
struct yf1128 { void *up;
rt_int p1125;
yarr p1127;
};
struct yf1137 { void *up;
rt_int p1133;
rt_int p1134;
yarr p1136;
rt_int v3098;
};
struct yf1142 { void *up;
};
struct yf1149 { void *up;
yarr p1148;
rt_int v3106;
};
struct yf1178 { void *up;
rt_int v3110;
rt_int v3112;
rt_int v3114;
rt_int lo3131;
rt_int hi3132;
rt_int c_3134;
};
struct yf1183 { void *up;
unsigned char v3143;
};
struct yf1190 { void *up;
rt_int p1188;
rt_int p1189;
};
struct yf1196 { void *up;
rt_int p1195;
};
struct yf1201 { void *up;
rt_int v3160;
rt_int v3162;
};
struct yf1207 { void *up;
unsigned char p1206;
};
struct yf1214 { void *up;
yarr p1213;
};
struct yf1220 { void *up;
rt_int p1219;
rt_int v3191;
rt_int v3194;
rt_int v3196;
rt_int v3198;
rt_int v3200;
rt_int v3202;
rt_int v3205;
rt_int v3208;
rt_int v3211;
rt_int v3214;
rt_int v3217;
rt_int v3220;
rt_int lo3257;
rt_int hi3258;
rt_int c_3260;
rt_int lo3269;
rt_int hi3270;
rt_int c_3272;
rt_int lo3299;
rt_int hi3300;
rt_int c_3302;
rt_int lo3309;
rt_int hi3310;
rt_int c_3312;
};
struct yf1225 { void *up;
rt_int v3323;
rt_int v3325;
rt_int v3327;
rt_int v3329;
};
struct yf1230 { void *up;
unsigned char v3358;
rt_int v3360;
rt_int v3362;
rt_int v3364;
rt_int v3366;
rt_int v3368;
rt_int v3370;
rt_int v3372;
rt_int lo3444;
rt_int hi3445;
rt_int c_3447;
};
struct yf1248 { void *up;
rt_int p1246;
rt_int p1247;
void * v3463;
};
struct yf1256 { void *up;
void * * p1253;
void * * p1254;
void * p1255;
};
struct yf1262 { void *up;
void * p1261;
rt_int v3476;
void * v3479;
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
rt_int v3493;
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
rt_int v3516;
};
struct yf1318 { void *up;
rt_int p1317;
rt_int v3526;
};
struct yf1323 { void *up;
rt_int v3531;
};
struct yf1330 { void *up;
rt_int p1328;
rt_int p1329;
rt_int v3538;
};
struct yf1335 { void *up;
rt_int v3542;
};
struct yf1341 { void *up;
rt_int p1340;
void * v3552;
};
struct yf1346 { void *up;
void * v3559;
};
struct yf1351 { void *up;
void * v3564;
void * v3566;
void * v3568;
void * v3570;
rt_int v3572;
};
struct yf1356 { void *up;
rt_int v3581;
};
struct yf1361 { void *up;
void * v3587;
void * v3589;
void * v3591;
void * v3593;
};
struct yf1366 { void *up;
void * v3598;
void * v3600;
void * v3602;
void * v3604;
void * v3606;
};
struct yf1371 { void *up;
void * v3614;
void * v3616;
void * v3618;
};
struct yf1377 { void *up;
rt_int p1376;
void * v3624;
};
struct yf1383 { void *up;
rt_int p1382;
};
struct yf1390 { void *up;
void * * p1388;
void * * p1389;
rt_int v3645;
void * v3647;
void * v3649;
void * v3651;
};
struct yf1395 { void *up;
void * v3655;
void * v3657;
void * v3659;
rt_int v3661;
rt_int v3663;
rt_int v3665;
};
struct yf1401 { void *up;
void * p1400;
void * v3681;
void * v3683;
rt_int v3685;
};
struct yf1406 { void *up;
void * v3691;
};
struct yf1412 { void *up;
rt_int p1411;
rt_int v3703;
};
struct yf1417 { void *up;
rt_int v3711;
void * v3713;
};
struct yf1422 { void *up;
void * v3722;
void * v3724;
};
struct yf1427 { void *up;
void * v3728;
void * v3730;
void * v3732;
};
struct yf1432 { void *up;
void * v3737;
void * v3739;
void * v3741;
rt_int v3743;
};
struct yf1437 { void *up;
void * v3750;
void * v3752;
void * v3754;
void * v3756;
void * v3758;
void * v3760;
rt_int v3762;
rt_int v3764;
};
struct yf1442 { void *up;
void * v3781;
};
struct yf1447 { void *up;
rt_int v3786;
};
struct yf1453 { void *up;
rt_int p1452;
void * v3795;
void * v3797;
void * v3799;
rt_int v3801;
};
struct yf1458 { void *up;
void * v3809;
void * v3811;
void * v3813;
void * v3815;
void * v3817;
void * v3819;
rt_int v3821;
rt_int v3823;
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
void * v3877;
};
struct yf1509 { void *up;
rt_int p1507;
rt_int p1508;
rt_int v3883;
};
struct yf1514 { void *up;
void * v3887;
rt_int v3889;
rt_int v3891;
};
struct yf1519 { void *up;
void * v3895;
void * v3897;
rt_int v3899;
rt_int v3901;
};
struct yf1524 { void *up;
void * v3907;
rt_int v3909;
rt_int v3911;
};
struct yf1530 { void *up;
rt_int p1529;
rt_int v3917;
};
struct yf1535 { void *up;
void * v3922;
rt_int v3924;
rt_int v3926;
};
struct yf1540 { void *up;
void * v3930;
rt_int v3932;
rt_int v3934;
};
struct yf1545 { void *up;
void * v3955;
void * v3957;
void * v3959;
rt_int v3961;
};
struct yf1550 { void *up;
};
struct yf1555 { void *up;
void * v3968;
void * v3970;
};
struct yf1591 { void *up;
rt_int p1589;
rt_int p1590;
void * v3977;
};
struct yf1597 { void *up;
rt_int p1596;
void * v3992;
};
struct yf1602 { void *up;
void * v3998;
void * v4000;
void * v4002;
rt_int v4004;
};
struct yf1608 { void *up;
void * p1607;
};
struct yf1614 { void *up;
rt_int p1613;
void * v4016;
};
struct yf1620 { void *up;
rt_int p1619;
void * v4024;
};
struct yf1627 { void *up;
rt_int p1625;
rt_int p1626;
void * v4033;
void * v4035;
};
struct yf1633 { void *up;
void * p1632;
void * v4042;
};
struct yf1640 { void *up;
rt_int p1638;
void * p1639;
void * v4051;
};
struct yf1647 { void *up;
void * p1645;
rt_int p1646;
void * v4060;
rt_int v4062;
};
struct yf1654 { void *up;
rt_int p1652;
rt_int p1653;
rt_int v4070;
};
struct yf1660 { void *up;
rt_int p1659;
rt_int v4085;
};
struct yf1667 { void *up;
rt_int p1665;
rt_int p1666;
rt_int v4100;
};
struct yf1673 { void *up;
void * p1672;
rt_int v4109;
};
struct yf1679 { void *up;
void * p1678;
void * v4117;
};
struct yf1710 { void *up;
rt_int p1708;
rt_int p1709;
void * v4123;
};
struct yf1716 { void *up;
void * p1715;
void * v4148;
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
rt_int v4177;
};
struct yf1758 { void *up;
void * p1757;
rt_int v4202;
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
rt_int v4245;
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
rt_int v4267;
rt_int v4269;
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
rt_int v4294;
rt_int v4296;
void * v4298;
void * v4300;
rt_int v4302;
rt_int v4304;
};
struct yf1833 { void *up;
void * p1832;
void * v4319;
void * v4321;
rt_int v4323;
};
struct yf1841 { void *up;
void * p1838;
rt_int p1839;
rt_int p1840;
};
struct yf1847 { void *up;
rt_int p1846;
rt_int v4338;
};
struct yf1855 { void *up;
void * p1852;
rt_int p1853;
rt_int p1854;
void * v4348;
void * v4350;
void * v4352;
void * v4354;
void * v4356;
rt_int v4358;
void * v4360;
rt_int v4362;
rt_int v4364;
};
struct yf1862 { void *up;
rt_int p1860;
void * p1861;
void * v4411;
void * v4413;
};
struct yf1867 { void *up;
void * v4417;
};
struct yf1873 { void *up;
void * p1872;
void * v4422;
rt_int v4424;
rt_int v4426;
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
void * v4451;
};
struct yf1897 { void *up;
void * p1891;
void * * p1892;
void * p1893;
rt_int p1894;
void * p1895;
rt_int p1896;
void * v4463;
void * v4465;
void * v4467;
};
struct yf1905 { void *up;
void * p1902;
void * p1903;
rt_int p1904;
void * v4475;
void * v4477;
void * v4479;
void * v4481;
rt_int v4483;
void * v4486;
rt_int v4488;
rt_int v4490;
};
struct yf1912 { void *up;
void * p1910;
rt_int p1911;
void * v4537;
};
struct yf2032 { void *up;
void * p2030;
rt_int p2031;
void * v4544;
rt_int v4546;
rt_int v4548;
rt_int v4550;
rt_int v4552;
rt_int lo4560;
rt_int hi4561;
rt_int c_4563;
};
struct yf2039 { void *up;
void * p2037;
void * p2038;
void * v4602;
void * v4604;
void * v4606;
rt_int v4608;
rt_int v4611;
};
struct yf2047 { void *up;
void * p2044;
rt_int p2045;
rt_int p2046;
rt_int v4636;
rt_int v4638;
};
struct yf2056 { void *up;
void * p2052;
rt_int p2053;
rt_int p2054;
rt_int * p2054_o;
rt_int p2055;
rt_int v4649;
rt_int v4651;
rt_int v4653;
ydesc yd_4660;
yarr v4662;
unsigned char v4664;
rt_int v4666;
rt_int lo4694;
rt_int hi4695;
rt_int c_4697;
};
struct yf2064 { void *up;
void * p2061;
rt_int p2062;
rt_int * p2062_o;
rt_int p2063;
rt_int * p2063_o;
void * v4732;
rt_int v4734;
rt_int v4736;
rt_int v4738;
rt_int v4740;
rt_int v4742;
void * v4744;
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
rt_int v4792;
rt_int v4794;
};
struct yf2088 { void *up;
void * p2087;
void * v4808;
void * v4810;
};
struct yf2094 { void *up;
void * p2093;
void * v4829;
void * v4831;
};
struct yf2102 { void *up;
void * p2099;
rt_int p2100;
rt_int * p2100_o;
void * p2101;
void * * p2101_o;
};
struct yf2108 { void *up;
rt_int p2107;
};
struct yf2115 { void *up;
void * p2113;
rt_int p2114;
void * v4849;
};
struct yf2121 { void *up;
void * p2120;
void * v4854;
};
struct yf2130 { void *up;
void * p2126;
void * p2127;
rt_int p2128;
rt_int * p2128_o;
void * p2129;
void * * p2129_o;
rt_int v4863;
void * v4865;
rt_int v4867;
rt_int v4869;
void * v4871;
void * v4873;
void * v4875;
rt_int v4877;
rt_int v4879;
};
struct yf2138 { void *up;
void * p2135;
void * p2136;
rt_int p2137;
void * v4921;
rt_int v4923;
rt_int v4925;
};
struct yf2147 { void *up;
void * p2143;
void * p2144;
rt_int p2145;
rt_int * p2145_o;
void * p2146;
void * * p2146_o;
void * v4937;
};
struct yf2155 { void *up;
void * p2152;
rt_int p2153;
rt_int * p2153_o;
void * p2154;
void * * p2154_o;
rt_int v4946;
rt_int v4948;
rt_int v4950;
void * v4952;
void * v4954;
void * v4956;
void * v4958;
rt_int v4960;
rt_int v4962;
};
struct yf2165 { void *up;
void * p2160;
rt_int p2161;
void * p2162;
rt_int p2163;
rt_int * p2163_o;
void * p2164;
void * * p2164_o;
};
struct yf2171 { void *up;
void * p2170;
void * v4997;
};
struct yf2180 { void *up;
yarr p2177;
rt_int p2178;
rt_int p2179;
};
struct yf2189 { void *up;
rt_int p2185;
yarr p2187;
rt_int p2188;
};
struct yf2198 { void *up;
rt_int p2194;
void * p2195;
rt_int p2196;
void * p2197;
rt_int v5025;
rt_int v5027;
void * v5029;
};
struct yf2204 { void *up;
void * p2203;
};
struct yf2213 { void *up;
void * p2209;
void * p2210;
rt_int p2211;
rt_int * p2211_o;
void * p2212;
void * * p2212_o;
rt_int v5059;
rt_int v5061;
rt_int v5063;
rt_int v5065;
void * v5067;
void * v5069;
void * v5071;
rt_int v5073;
};
struct yf2250 { void *up;
void * p2248;
void * p2249;
};
struct yf2258 { void *up;
void * p2255;
rt_int p2256;
rt_int p2257;
void * v5128;
void * v5130;
rt_int v5132;
rt_int v5134;
};
struct yf2264 { void *up;
void * p2263;
void * v5146;
};
struct yf2273 { void *up;
void * p2269;
void * p2270;
rt_int p2271;
rt_int * p2271_o;
rt_int p2272;
rt_int * p2272_o;
void * v5158;
void * v5160;
void * v5162;
};
struct yf2282 { void *up;
void * p2278;
rt_int p2279;
rt_int p2280;
rt_int p2281;
void * v5178;
rt_int v5180;
rt_int v5184;
};
struct yf2293 { void *up;
void * p2287;
rt_int p2288;
void * p2289;
void * p2290;
rt_int p2291;
rt_int * p2291_o;
void * p2292;
void * * p2292_o;
void * v5210;
void * v5212;
rt_int v5214;
rt_int v5216;
};
struct yf2303 { void *up;
void * p2298;
void * p2299;
rt_int p2300;
rt_int p2301;
rt_int * p2301_o;
void * p2302;
void * * p2302_o;
void * v5233;
void * v5235;
rt_int v5237;
rt_int v5239;
};
struct yf2312 { void *up;
void * p2308;
void * p2309;
rt_int p2310;
rt_int * p2310_o;
void * p2311;
void * * p2311_o;
void * v5251;
void * v5253;
rt_int v5255;
rt_int v5257;
rt_int v5259;
void * v5261;
rt_int v5263;
rt_int v5265;
rt_int v5267;
rt_int v5269;
rt_int v5271;
rt_int v5274;
void * v5276;
rt_int v5278;
};
struct yf2320 { void *up;
void * p2317;
rt_int p2318;
rt_int p2319;
void * v5340;
void * v5342;
rt_int v5344;
rt_int v5346;
};
struct yf2407 { void *up;
yarr p2405;
rt_int p2406;
rt_int v5355;
};
struct yf2417 { void *up;
yarr p2413;
rt_int p2414;
yarr p2416;
rt_int v5361;
};
struct yf2423 { void *up;
rt_int p2422;
};
struct yf2428 { void *up;
};
struct yf2434 { void *up;
rt_int p2433;
};
struct yf2440 { void *up;
void * p2439;
rt_int v5383;
rt_int v5385;
rt_int v5387;
void * v5389;
void * v5391;
rt_int v5393;
void * v5395;
rt_int v5397;
};
struct yf2446 { void *up;
void * p2445;
void * v5459;
};
struct yf2452 { void *up;
void * p2451;
rt_int v5463;
void * v5465;
};
struct yf2459 { void *up;
void * p2457;
void * p2458;
rt_int v5471;
rt_int v5473;
void * v5475;
void * v5477;
rt_int v5479;
};
struct yf2464 { void *up;
void * v5485;
rt_int v5487;
};
struct yf2470 { void *up;
void * p2469;
rt_int v5494;
rt_int v5496;
rt_int v5498;
rt_int v5500;
rt_int v5502;
rt_int v5504;
rt_int v5506;
void * v5508;
void * v5510;
void * v5512;
void * v5514;
rt_int v5516;
rt_int v5518;
rt_int v5520;
rt_int v5522;
void * v5524;
};
struct yf2476 { void *up;
void * p2475;
void * v5586;
rt_int v5588;
rt_int v5590;
rt_int v5592;
void * v5594;
};
struct yf2484 { void *up;
rt_int p2481;
rt_int p2482;
rt_int p2483;
};
struct yf2490 { void *up;
void * p2489;
rt_int v5626;
rt_int v5628;
rt_int v5630;
void * v5632;
void * v5634;
};
struct yf2496 { void *up;
void * p2495;
};
struct yf2502 { void *up;
void * p2501;
void * v5655;
};
struct yf2508 { void *up;
void * p2507;
void * v5670;
};
struct yf2514 { void *up;
void * p2513;
void * v5679;
void * v5681;
void * v5683;
};
struct yf2520 { void *up;
rt_int p2519;
rt_int v5688;
rt_int v5690;
rt_int lo5694;
rt_int hi5695;
rt_int c_5697;
};
struct yf2526 { void *up;
void * p2525;
void * v5707;
rt_int v5709;
rt_int v5711;
};
struct yf2532 { void *up;
void * p2531;
rt_int v5728;
};
struct yf2539 { void *up;
void * p2537;
rt_int p2538;
void * v5736;
void * v5738;
void * v5740;
void * v5742;
void * v5744;
void * v5746;
void * v5748;
rt_int v5750;
rt_int v5752;
};
struct yf2546 { void *up;
void * p2544;
void * p2545;
void * v5795;
void * v5797;
void * v5799;
rt_int v5801;
};
struct yf2552 { void *up;
void * p2551;
void * v5809;
yR130 v5811;
yR130 v5813;
rt_int v5815;
rt_int v5817;
rt_int v5819;
rt_int v5821;
rt_int v5823;
rt_int v5825;
rt_int v5827;
void * v5829;
rt_int v5831;
void * v5833;
void * v5835;
rt_int v5837;
rt_int v5839;
yR130 v5841;
};
struct yf2560 { void *up;
void * p2557;
void * p2558;
rt_int p2559;
};
struct yf2566 { void *up;
void * p2565;
rt_int v5903;
void * v5905;
void * v5907;
void * v5909;
void * v5911;
rt_int v5913;
rt_int v5915;
rt_int v5917;
};
struct yf2573 { void *up;
void * p2571;
void * p2572;
void * v5931;
};
struct yf2580 { void *up;
void * p2578;
void * p2579;
};
struct yf2586 { void *up;
void * p2585;
void * v5938;
void * v5940;
void * v5942;
void * v5944;
};
struct yf2604 { void *up;
rt_int p2602;
void * p2603;
void * v5949;
};
struct yf2612 { void *up;
void * * p2609;
void * p2610;
rt_int p2611;
void * v5956;
void * v5958;
void * v5960;
};
struct yf2623 { void *up;
void * p2620;
void * * p2621;
rt_int p2622;
void * v5971;
void * v5973;
void * v5975;
rt_int v5977;
void * v5979;
rt_int v5981;
};
struct yf2630 { void *up;
void * p2628;
rt_int p2629;
void * v6006;
void * v6008;
void * v6010;
};
struct yf2636 { void *up;
void * p2635;
void * v6015;
void * v6017;
void * v6019;
void * v6021;
void * v6023;
void * v6025;
void * v6027;
void * v6029;
void * v6031;
void * v6033;
rt_int v6035;
rt_int v6037;
rt_int v6039;
};
struct yf2642 { void *up;
void * p2641;
void * v6072;
};
struct yf2648 { void *up;
void * p2647;
void * v6076;
void * v6078;
void * v6080;
void * v6082;
rt_int v6084;
rt_int v6086;
rt_int v6088;
rt_int v6090;
void * v6092;
rt_int lo6100;
rt_int hi6101;
rt_int c_6103;
};
struct yf2654 { void *up;
void * p2653;
void * v6115;
void * v6117;
};
struct yf2659 { void *up;
void * v6123;
};
struct yf2666 { void *up;
void * p2664;
void * p2665;
rt_int v6134;
rt_int v6136;
rt_int v6138;
void * v6140;
rt_int v6142;
rt_int v6144;
rt_int v6146;
rt_int v6148;
rt_int v6150;
rt_int v6152;
void * v6154;
void * v6156;
};
struct yf2672 { void *up;
void * p2671;
};
struct yf2678 { void *up;
void * p2677;
rt_int v6216;
};
struct yf2683 { void *up;
};
struct yf2689 { void *up;
void * p2688;
};
struct yf2696 { void *up;
void * p2694;
rt_int p2695;
};
struct yf2703 { void *up;
void * p2701;
void * p2702;
rt_int v6251;
rt_int v6253;
rt_int v6255;
};
struct yf2710 { void *up;
void * p2708;
rt_int p2709;
void * v6264;
rt_int v6266;
};
struct yf2717 { void *up;
void * p2715;
rt_int p2716;
};
struct yf2725 { void *up;
yarr p2723;
rt_int p2724;
};
struct yf2731 { void *up;
rt_int p2730;
};
struct yf2740 { void *up;
void * p2736;
rt_int p2737;
rt_int p2738;
rt_int * p2738_o;
void * p2739;
void * * p2739_o;
rt_int v6293;
};
struct yf2748 { void *up;
void * p2745;
rt_int p2746;
rt_int * p2746_o;
void * p2747;
void * * p2747_o;
};
struct yf2754 { void *up;
void * p2753;
rt_int v6309;
void * v6311;
};
struct yf2760 { void *up;
void * p2759;
void * v6317;
rt_int v6320;
rt_int v6322;
rt_int v6324;
rt_int v6326;
rt_int v6328;
rt_int v6330;
unsigned char v6332;
void * v6334;
ydesc yd_6341;
yarr v6343;
};
struct yf2770 { void *up;
rt_int p2765;
void * p2766;
rt_int p2767;
rt_int p2768;
rt_int * p2768_o;
void * p2769;
void * * p2769_o;
rt_int v6382;
rt_int v6384;
rt_int v6386;
rt_int v6388;
rt_int v6390;
void * v6392;
void * v6394;
void * v6396;
void * v6398;
rt_int v6400;
rt_int v6402;
rt_int v6404;
rt_int v6406;
void * v6408;
rt_int v6410;
rt_int lo6423;
rt_int hi6424;
rt_int c_6426;
};
struct yf2782 { void *up;
yarr p2780;
void * p2781;
void * v6600;
};
struct yf2790 { void *up;
yarr p2788;
rt_int p2789;
void * v6606;
};
struct yf2800 { void *up;
yarr p2796;
yarr p2797;
yarr p2798;
rt_int p2799;
void * v6614;
void * v6616;
void * v6618;
};
struct yf2808 { void *up;
rt_int p2805;
yarr p2807;
void * v6627;
};
struct yf2813 { void *up;
};
struct yf2818 { void *up;
void * v6707;
};
struct yf2823 { void *up;
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
static ydesc yd_2222;
static yarr v2224;
static ydesc yd_2231;
static yarr v2233;
static ydesc yd_2240;
static yarr v2242;
static rt_int v2244;
static ydesc yd_2329;
static yarr v2331;
static rt_int v2333;
static rt_int v2336;
static ydesc yd_2344;
static yarr v2346;
static ydesc yd_2353;
static yarr v2355;
static rt_int v2357;
static ydesc yd_2365;
static yarr v2367;
static rt_int v2369;
static ydesc yd_2377;
static yarr v2379;
static yarr v2381;
static ydesc yd_2388;
static yarr v2390;
static rt_int v2392;
static rt_int v2395;
static void * v2398;
static rt_int v2400;
static void * v2590;
static ydesc yd_2597;
static yarr v2599;
static rt_int v2616;
static void * v2774;
static void * v2776;
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
static void yr2092_CheckPure(void * a_p2093);
static void yr2098_LValue(void * a_p2099, rt_int * a_p2100, void * * a_p2101);
static rt_int yr2106_Paren(rt_int a_p2107);
static void * yr2112_Lit(void * a_p2113, rt_int a_p2114);
static void * yr2119_Qualifier(void * a_p2120);
static void yr2125_Expr(void * a_p2126, void * a_p2127, rt_int * a_p2128, void * * a_p2129);
static rt_int yr2134_VariantTest(void * a_p2135, void * a_p2136, rt_int a_p2137);
static void yr2142_NameExpr(void * a_p2143, void * a_p2144, rt_int * a_p2145, void * * a_p2146);
static void yr2151_IndexExpr(void * a_p2152, rt_int * a_p2153, void * * a_p2154);
static void yr2159_NegExpr(void * a_p2160, rt_int a_p2161, void * a_p2162, rt_int * a_p2163, void * * a_p2164);
static void * yr2169_Unbounded(void * a_p2170);
static rt_int yr2175_Call2(yarr a_p2177, rt_int a_p2178, rt_int a_p2179);
static rt_int yr2184_Infix(rt_int a_p2185, yarr a_p2187, rt_int a_p2188);
static rt_int yr2193_EqCode(rt_int a_p2194, void * a_p2195, rt_int a_p2196, void * a_p2197);
static rt_int yr2202_IsOrdered(void * a_p2203);
static void yr2208_BinExpr(void * a_p2209, void * a_p2210, rt_int * a_p2211, void * * a_p2212);
static rt_int yr2247_Fits(void * a_p2248, void * a_p2249);
static void * yr2254_Choose(void * a_p2255, rt_int a_p2256, rt_int a_p2257);
static rt_int yr2262_HidesStandard(void * a_p2263);
static void yr2268_CompileArgs(void * a_p2269, void * a_p2270, rt_int * a_p2271, rt_int * a_p2272);
static rt_int yr2277_CallCode(void * a_p2278, rt_int a_p2279, rt_int a_p2280, rt_int a_p2281);
static rt_int yr2286_UserOp(void * a_p2287, rt_int a_p2288, void * a_p2289, void * a_p2290, rt_int * a_p2291, void * * a_p2292);
static void yr2297_CallExpr(void * a_p2298, void * a_p2299, rt_int a_p2300, rt_int * a_p2301, void * * a_p2302);
static void yr2307_Denote(void * a_p2308, void * a_p2309, rt_int * a_p2310, void * * a_p2311);
static rt_int yr2316_VariantOf(void * a_p2317, rt_int a_p2318, rt_int a_p2319);
static void yr2403_Emit2(yarr a_p2405, rt_int a_p2406);
static void yr2411_Emit3(yarr a_p2413, rt_int a_p2414, yarr a_p2416);
static void yr2421_PopTo(rt_int a_p2422);
static void yr2427_LeaveBlock(void);
static rt_int yr2432_RaiseCode(rt_int a_p2433);
static void yr2438_BlockStatements(void * a_p2439);
static void yr2444_Statements(void * a_p2445);
static rt_int yr2450_Cond(void * a_p2451);
static rt_int yr2456_Label(void * a_p2457, void * a_p2458);
static void yr2463_CopyOut(void);
static void yr2468_Statement(void * a_p2469);
static void yr2474_ForStatement(void * a_p2475);
static rt_int yr2480_Join(rt_int a_p2481, rt_int a_p2482, rt_int a_p2483);
static void yr2488_ReturnStatement(void * a_p2489);
static void yr2494_BeginStatement(void * a_p2495);
static void yr2500_PlaceLabel(void * a_p2501);
static void yr2506_GotoStatement(void * a_p2507);
static void yr2512_CheckLabels(void * a_p2513);
static rt_int yr2518_RoutineCName(rt_int a_p2519);
static void * yr2524_FormalRep(void * a_p2525);
static rt_int yr2530_ParamCType(void * a_p2531);
static void yr2536_RoutineHeader(void * a_p2537, rt_int a_p2538);
static void * yr2543_SameSignature(void * a_p2544, void * a_p2545);
static void yr2550_RoutineBody(void * a_p2551);
static void yr2556_DeclareStorage(void * a_p2557, void * a_p2558, rt_int a_p2559);
static void yr2564_SimpleDecl(void * a_p2565);
static void yr2570_NoteAlphabet(void * a_p2571, void * a_p2572);
static void yr2577_AtLocation(void * a_p2578, void * a_p2579);
static void yr2584_Declarations(void * a_p2585);
static void * yr2601_Alias(rt_int a_p2602, void * a_p2603);
static void yr2608_AddLits(void * * a_p2609, void * a_p2610, rt_int a_p2611);
static void yr2619_ResolveItem(void * a_p2620, void * * a_p2621, rt_int a_p2622);
static void yr2627_DefineAll(void * a_p2628, rt_int a_p2629);
static void yr2634_CompileModule(void * a_p2635);
static void yr2640_DeclareTemplate(void * a_p2641);
static void yr2646_Instantiate(void * a_p2647);
static void yr2652_DeclareProcess(void * a_p2653);
static void yr2658_AwaitProcesses(void);
static void yr2663_Activate(void * a_p2664, void * a_p2665);
static rt_int yr2670_MonitorPath(void * a_p2671);
static void yr2676_EnterMonitor(void * a_p2677);
static void yr2682_LeaveMonitor(void);
static void yr2687_TerminateStatement(void * a_p2688);
static void yr2693_DeclareSignal(void * a_p2694, rt_int a_p2695);
static void yr2700_DeviceSignal(void * a_p2701, void * a_p2702);
static void * yr2707_Arg(void * a_p2708, rt_int a_p2709);
static void yr2714_NArgs(void * a_p2715, rt_int a_p2716);
static rt_int yr2721_Call1(yarr a_p2723, rt_int a_p2724);
static rt_int yr2729_Addr(rt_int a_p2730);
static void yr2735_StdVar(void * a_p2736, rt_int a_p2737, rt_int * a_p2738, void * * a_p2739);
static void yr2744_NumArg(void * a_p2745, rt_int * a_p2746, void * * a_p2747);
static rt_int yr2752_IntArg(void * a_p2753);
static void yr2758_CodeInsert(void * a_p2759);
static void yr2764_StdCall(rt_int a_p2765, void * a_p2766, rt_int a_p2767, rt_int * a_p2768, void * * a_p2769);
static void yr2778_StdRep(yarr a_p2780, void * a_p2781);
static void yr2786_StdOp(yarr a_p2788, rt_int a_p2789);
static void * yr2794_LitList(yarr a_p2796, yarr a_p2797, yarr a_p2798, rt_int a_p2799);
static void * yr2804_Abstract(rt_int a_p2805, yarr a_p2807);
static void yr2812_Predefine(void);
static void yr2817_Translate(void);
static void yr2822_WriteProgram(void);
static void yr963_InitChars(void) {
struct yf964 F;
memset((void *)&F, 0, sizeof F);
F.v2827 = INT64_C(0);
{ rt_int hi2832 = 127;
for (rt_int i2831 = 0; i2831 <= hi2832; i2831++) { F.c_2830 = i2831;
((rt_int *)(v931).p)[y_ix1(v931, F.c_2830)] = F.v2827;
((unsigned char *)(v940).p)[y_ix1(v940, F.v2827)] = F.c_2830;
F.v2827 = rt_range(rt_add(F.v2827, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i2831 == hi2832) break;
}}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr968_IsLetter(unsigned char a_p969) {
struct yf970 F;
memset((void *)&F, 0, sizeof F);
F.p969 = a_p969;
{ rt_int rv2842 = ((((((F.p969 >= 65)) && ((F.p969 <= 90)))) || ((((F.p969 >= 97)) && ((F.p969 <= 122))))) || ((F.p969 == 95)));
return rv2842; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr974_IsDigit(unsigned char a_p975) {
struct yf976 F;
memset((void *)&F, 0, sizeof F);
F.p975 = a_p975;
{ rt_int rv2847 = (((F.p975 >= 48)) && ((F.p975 <= 57)));
return rv2847; }
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
F.lo2866 = y_low(F.p999, INT64_C(1));
F.hi2867 = y_high(F.p999, INT64_C(1));
{ rt_int hi2871 = F.hi2867;
for (rt_int i2870 = F.lo2866; i2870 <= hi2871; i2870++) { F.c_2869 = i2870;
yr991_SC(((unsigned char *)(F.p999).p)[y_ix1(F.p999, F.c_2869)]);
if (i2870 == hi2871) break;
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
F.v2875 = ((rt_int *)(v888).p)[y_ix1(v888, F.p1005)];
while ((F.v2875 < (rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1005)], ((rt_int *)(v890).p)[y_ix1(v890, F.p1005)])))) {
yr991_SC(((unsigned char *)(v883).p)[y_ix1(v883, F.v2875)]);
F.v2875 = rt_range(rt_add(F.v2875, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1010_SI(rt_int a_p1011) {
struct yf1012 F;
memset((void *)&F, 0, sizeof F);
F.p1011 = a_p1011;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(24)}; y_desc_array(&F.yd_2888, 1, lo, hi, &y_d_byte); }
y_init(&F.yd_2888, &F.v2890);
F.v2892 = INT64_C(0);
F.v2895 = F.p1011;
if ((F.v2895 < INT64_C(0))) {
yr991_SC(45);
F.v2895 = rt_range(rt_neg(F.v2895), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
for (;;) {
F.v2892 = rt_range(rt_add(F.v2892, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((unsigned char *)(F.v2890).p)[y_ix1(F.v2890, F.v2892)] = ((unsigned char *)(v940).p)[y_ix1(v940, rt_add((rt_mod(F.v2895, INT64_C(10))), INT64_C(48)))];
F.v2895 = rt_range(rt_div(F.v2895, INT64_C(10)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.v2895 == INT64_C(0))) {
goto yl_2899;
}
}
yl_2899: ;
while ((F.v2892 > INT64_C(0))) {
yr991_SC(((unsigned char *)(F.v2890).p)[y_ix1(F.v2890, F.v2892)]);
F.v2892 = rt_range(rt_sub(F.v2892, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1016_SE(void) {
struct yf1017 F;
memset((void *)&F, 0, sizeof F);
F.v2914 = ((rt_int *)(v919).p)[y_ix1(v919, v921)];
v921 = rt_range(rt_sub(v921, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v892 = rt_range(rt_add(v892, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v888).p)[y_ix1(v888, v892)] = rt_range(rt_add(v885, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v890).p)[y_ix1(v890, v892)] = rt_range(rt_sub(v909, F.v2914), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo2925 = rt_add(F.v2914, INT64_C(1));
F.hi2926 = v909;
{ rt_int hi2930 = F.hi2926;
for (rt_int i2929 = F.lo2925; i2929 <= hi2930; i2929++) { F.c_2928 = i2929;
yr980_PoolAdd(((unsigned char *)(v907).p)[y_ix1(v907, F.c_2928)]);
if (i2929 == hi2930) break;
}}
v909 = F.v2914;
{ rt_int rv2931 = rt_range(v892, INT64_C(0), INT64_C(4000000));
return rv2931; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1021_T(yarr a_p1023) {
struct yf1024 F;
memset((void *)&F, 0, sizeof F);
F.p1023 = a_p1023;
yr986_SB();
yr997_SA(F.p1023);
{ rt_int rv2934 = yr1016_SE();
return rv2934; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1028_Intern(rt_int a_p1029, rt_int a_p1030) {
struct yf1031 F;
memset((void *)&F, 0, sizeof F);
F.p1029 = a_p1029;
F.p1030 = a_p1030;
F.v2939 = INT64_C(0);
F.lo2949 = F.p1029;
F.hi2950 = rt_sub((rt_add(F.p1029, F.p1030)), INT64_C(1));
{ rt_int hi2954 = F.hi2950;
for (rt_int i2953 = F.lo2949; i2953 <= hi2954; i2953++) { F.c_2952 = i2953;
F.v2939 = rt_range(rt_mod((rt_add((rt_mul(F.v2939, INT64_C(31))), ((rt_int *)(v931).p)[y_ix1(v931, ((unsigned char *)(v883).p)[y_ix1(v883, F.c_2952)])])), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i2953 == hi2954) break;
}}
for (;;) {
if ((((rt_int *)(v895).p)[y_ix1(v895, F.v2939)] == INT64_C(0))) {
v892 = rt_range(rt_add(v892, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v888).p)[y_ix1(v888, v892)] = F.p1029;
((rt_int *)(v890).p)[y_ix1(v890, v892)] = F.p1030;
((rt_int *)(v895).p)[y_ix1(v895, F.v2939)] = rt_range(v892, INT64_C(0), INT64_C(4000000));
{ rt_int rv2964 = rt_range(v892, INT64_C(0), INT64_C(4000000));
return rv2964; }
}
F.v2942 = ((rt_int *)(v895).p)[y_ix1(v895, F.v2939)];
if ((((rt_int *)(v890).p)[y_ix1(v890, F.v2942)] == F.p1030)) {
F.v2944 = 1;
F.lo2970 = INT64_C(0);
F.hi2971 = rt_sub(F.p1030, INT64_C(1));
{ rt_int hi2975 = F.hi2971;
for (rt_int i2974 = F.lo2970; i2974 <= hi2975; i2974++) { F.c_2973 = i2974;
if ((!(((unsigned char *)(v883).p)[y_ix1(v883, rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.v2942)], F.c_2973))] == ((unsigned char *)(v883).p)[y_ix1(v883, rt_add(F.p1029, F.c_2973))]))) {
F.v2944 = 0;
}
if (i2974 == hi2975) break;
}}
if (F.v2944) {
{ rt_int rv2979 = rt_range(F.v2942, INT64_C(0), INT64_C(4000000));
return rv2979; }
}
}
F.v2939 = rt_range(rt_mod((rt_add(F.v2939, INT64_C(1))), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yl_2960: ;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1035_Name(rt_int a_p1036) {
struct yf1037 F;
memset((void *)&F, 0, sizeof F);
F.p1036 = a_p1036;
{ rt_int rv2986 = yr1028_Intern(((rt_int *)(v888).p)[y_ix1(v888, F.p1036)], ((rt_int *)(v890).p)[y_ix1(v890, F.p1036)]);
return rv2986; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1041_N(yarr a_p1043) {
struct yf1044 F;
memset((void *)&F, 0, sizeof F);
F.p1043 = a_p1043;
{ rt_int rv2989 = yr1035_Name(yr1021_T(F.p1043));
return rv2989; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1048_TEq(rt_int a_p1049, rt_int a_p1050) {
struct yf1051 F;
memset((void *)&F, 0, sizeof F);
F.p1049 = a_p1049;
F.p1050 = a_p1050;
if ((F.p1049 == F.p1050)) {
{ rt_int rv2994 = 1;
return rv2994; }
}
if ((!(((rt_int *)(v890).p)[y_ix1(v890, F.p1049)] == ((rt_int *)(v890).p)[y_ix1(v890, F.p1050)]))) {
{ rt_int rv2996 = 0;
return rv2996; }
}
F.lo3001 = INT64_C(0);
F.hi3002 = rt_sub(((rt_int *)(v890).p)[y_ix1(v890, F.p1049)], INT64_C(1));
{ rt_int hi3006 = F.hi3002;
for (rt_int i3005 = F.lo3001; i3005 <= hi3006; i3005++) { F.c_3004 = i3005;
if ((!(((unsigned char *)(v883).p)[y_ix1(v883, rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1049)], F.c_3004))] == ((unsigned char *)(v883).p)[y_ix1(v883, rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1050)], F.c_3004))]))) {
{ rt_int rv3010 = 0;
return rv3010; }
}
if (i3005 == hi3006) break;
}}
{ rt_int rv3012 = 1;
return rv3012; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1055_TStarts(rt_int a_p1056, yarr a_p1058) {
struct yf1059 F;
memset((void *)&F, 0, sizeof F);
F.p1056 = a_p1056;
F.p1058 = a_p1058;
F.v3017 = INT64_C(0);
if ((((rt_int *)(v890).p)[y_ix1(v890, F.p1056)] < (rt_add((rt_sub(y_high(F.p1058, INT64_C(1)), y_low(F.p1058, INT64_C(1)))), INT64_C(1))))) {
{ rt_int rv3027 = 0;
return rv3027; }
}
F.lo3033 = y_low(F.p1058, INT64_C(1));
F.hi3034 = y_high(F.p1058, INT64_C(1));
{ rt_int hi3038 = F.hi3034;
for (rt_int i3037 = F.lo3033; i3037 <= hi3038; i3037++) { F.c_3036 = i3037;
if ((!(((unsigned char *)(v883).p)[y_ix1(v883, rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1056)], F.v3017))] == ((unsigned char *)(F.p1058).p)[y_ix1(F.p1058, F.c_3036)]))) {
{ rt_int rv3041 = 0;
return rv3041; }
}
F.v3017 = rt_range(rt_add(F.v3017, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3037 == hi3038) break;
}}
{ rt_int rv3045 = 1;
return rv3045; }
rt_raise(Y_X_NO_RETURN);
}
static unsigned char yr1063_TChar(rt_int a_p1064, rt_int a_p1065) {
struct yf1066 F;
memset((void *)&F, 0, sizeof F);
F.p1064 = a_p1064;
F.p1065 = a_p1065;
{ unsigned char rv3052 = ((unsigned char *)(v883).p)[y_ix1(v883, rt_sub((rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1064)], F.p1065)), INT64_C(1)))];
return rv3052; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1070_Put(yR130 * a_p1071, rt_int a_p1072) {
struct yf1073 F;
memset((void *)&F, 0, sizeof F);
F.p1071 = a_p1071;
F.p1072 = a_p1072;
({ F.v3057 = rt_alloc(sizeof(yR125)); });
(*(yR125 *)rt_nil_check(F.v3057)) = ((yR125){ .f_t = F.p1072, .f_next = ((void *)0) });
if ((((*F.p1071)).f_head == ((void *)0))) {
((*F.p1071)).f_head = F.v3057;
} else {
((*(yR125 *)rt_nil_check(((*F.p1071)).f_tail))).f_next = F.v3057;
}
((*F.p1071)).f_tail = F.v3057;
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
F.v3071 = ((rt_int *)(v888).p)[y_ix1(v888, F.p1106)];
while ((F.v3071 < (rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1106)], ((rt_int *)(v890).p)[y_ix1(v890, F.p1106)])))) {
({ unsigned char pv = ((unsigned char *)(v883).p)[y_ix1(v883, F.v3071)]; y_put(&v881, &pv, sizeof pv); });
F.v3071 = rt_range(rt_add(F.v3071, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1111_WriteBuf(yR130 a_p1112) {
struct yf1113 F;
memset((void *)&F, 0, sizeof F);
F.p1112 = a_p1112;
F.v3078 = (F.p1112).f_head;
while ((!(F.v3078 == ((void *)0)))) {
yr1105_WriteTxt(((*(yR125 *)rt_nil_check(F.v3078))).f_t);
({ unsigned char pv = 10; y_put(&v881, &pv, sizeof pv); });
F.v3078 = ((*(yR125 *)rt_nil_check(F.v3078))).f_next;
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
F.v3084 = yr1016_SE();
yr1105_WriteTxt(F.v3084);
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
F.v3098 = yr1016_SE();
yr1117_Fail(F.p1133, F.v3098);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1141_NewSerial(void) {
struct yf1142 F;
memset((void *)&F, 0, sizeof F);
v924 = rt_range(rt_add(v924, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
{ rt_int rv3102 = v924;
return rv3102; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1146_Fresh(yarr a_p1148) {
struct yf1149 F;
memset((void *)&F, 0, sizeof F);
F.p1148 = a_p1148;
F.v3106 = yr1141_NewSerial();
yr986_SB();
yr997_SA(F.p1148);
yr1010_SI(F.v3106);
{ rt_int rv3107 = yr1016_SE();
return rv3107; }
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
F.v3114 = yr1016_SE();
v892 = INT64_C(0);
F.v3110 = ((rt_int *)(v888).p)[y_ix1(v888, F.v3114)];
F.lo3131 = ((rt_int *)(v888).p)[y_ix1(v888, F.v3114)];
F.hi3132 = rt_sub((rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.v3114)], ((rt_int *)(v890).p)[y_ix1(v890, F.v3114)])), INT64_C(1));
{ rt_int hi3136 = F.hi3132;
for (rt_int i3135 = F.lo3131; i3135 <= hi3136; i3135++) { F.c_3134 = i3135;
if ((((unsigned char *)(v883).p)[y_ix1(v883, F.c_3134)] == 32)) {
F.v3112 = yr1028_Intern(F.v3110, rt_range(rt_sub(F.c_3134, F.v3110), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v3110 = rt_range(rt_add(F.c_3134, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i3135 == hi3136) break;
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
({ unsigned char g; y_get(&v879, &g, sizeof g); F.v3143 = g; });
yr980_PoolAdd(F.v3143);
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
{ unsigned char rv3156 = 0;
return rv3156; }
}
{ unsigned char rv3157 = ((unsigned char *)(v883).p)[y_ix1(v883, F.p1195)];
return rv3157; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1200_EndsOperand(void) {
struct yf1201 F;
memset((void *)&F, 0, sizeof F);
if ((v1159 == INT64_C(0))) {
{ rt_int rv3165 = 0;
return rv3165; }
}
F.v3160 = ((rt_int *)(v1153).p)[y_ix1(v1153, v1159)];
F.v3162 = ((rt_int *)(v1155).p)[y_ix1(v1155, v1159)];
if ((((((((F.v3160 == v177)) || ((F.v3160 == v186))) || ((F.v3160 == v189))) || ((F.v3160 == v192))) || ((F.v3160 == v195))) || ((F.v3160 == v198)))) {
{ rt_int rv3167 = 1;
return rv3167; }
}
if ((F.v3160 == v183)) {
{ rt_int rv3168 = ((((F.v3162 == v567)) || ((F.v3162 == v573))) || ((F.v3162 == v588)));
return rv3168; }
}
if ((F.v3160 == v180)) {
{ rt_int rv3169 = (F.v3162 == v357);
return rv3169; }
}
{ rt_int rv3171 = 0;
return rv3171; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1205_DigitVal(unsigned char a_p1206) {
struct yf1207 F;
memset((void *)&F, 0, sizeof F);
F.p1206 = a_p1206;
if ((((F.p1206 >= 48)) && ((F.p1206 <= 57)))) {
{ rt_int rv3178 = rt_range(rt_sub(((rt_int *)(v931).p)[y_ix1(v931, F.p1206)], INT64_C(48)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return rv3178; }
}
if ((((F.p1206 >= 65)) && ((F.p1206 <= 70)))) {
{ rt_int rv3183 = rt_range(rt_sub(((rt_int *)(v931).p)[y_ix1(v931, F.p1206)], INT64_C(55)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return rv3183; }
}
{ rt_int rv3185 = INT64_C(99);
return rv3185; }
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
F.v3191 = INT64_C(10);
F.v3202 = 0;
F.v3205 = INT64_C(0);
F.v3208 = INT64_C(0);
F.v3211 = INT64_C(0);
F.v3214 = INT64_C(0);
F.v3217 = INT64_C(0);
if ((!(v1174 == INT64_C(0)))) {
F.v3191 = v1174;
}
v1174 = INT64_C(0);
F.v3194 = v1168;
while ((yr1205_DigitVal(yr1194_At(v1168)) < F.v3191)) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3196 = v1168;
F.v3198 = v1168;
F.v3200 = v1168;
if ((((yr1194_At(v1168) == 46)) && ((!(yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 46))))) {
F.v3202 = 1;
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3198 = v1168;
while ((yr1205_DigitVal(yr1194_At(v1168)) < F.v3191)) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3200 = v1168;
}
if ((yr1194_At(v1168) == 80)) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3214 = INT64_C(1);
if ((((((yr1194_At(v1168) == 45)) || ((yr1194_At(v1168) == 43)))) && yr974_IsDigit(yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))) {
if ((yr1194_At(v1168) == 45)) {
F.v3214 = INT64_C(-1);
}
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3211 = INT64_C(0);
while (yr974_IsDigit(yr1194_At(v1168))) {
F.v3211 = rt_range(rt_add((rt_mul(F.v3211, INT64_C(10))), yr1205_DigitVal(yr1194_At(v1168))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3211 = rt_range(rt_mul(F.v3211, F.v3214), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3205 = INT64_C(0);
F.lo3257 = F.v3194;
F.hi3258 = rt_sub(F.v3196, INT64_C(1));
{ rt_int hi3262 = F.hi3258;
for (rt_int i3261 = F.lo3257; i3261 <= hi3262; i3261++) { F.c_3260 = i3261;
F.v3205 = rt_range(rt_add((rt_mul(F.v3205, F.v3191)), yr1205_DigitVal(((unsigned char *)(v883).p)[y_ix1(v883, F.c_3260)])), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3261 == hi3262) break;
}}
F.v3217 = rt_range(rt_sub(F.v3200, F.v3198), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo3269 = F.v3198;
F.hi3270 = rt_sub(F.v3200, INT64_C(1));
{ rt_int hi3274 = F.hi3270;
for (rt_int i3273 = F.lo3269; i3273 <= hi3274; i3273++) { F.c_3272 = i3273;
F.v3205 = rt_range(rt_add((rt_mul(F.v3205, F.v3191)), yr1205_DigitVal(((unsigned char *)(v883).p)[y_ix1(v883, F.c_3272)])), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3273 == hi3274) break;
}}
yr986_SB();
yr997_SA(y_str("(", 1));
if (F.p1219) {
yr997_SA(y_str("-", 1));
}
yr997_SA(y_str("(double)", 8));
yr1010_SI(F.v3205);
yr997_SA(y_str(" * pow(", 7));
yr1010_SI(F.v3191);
yr997_SA(y_str(", ", 2));
yr1010_SI(rt_range(rt_sub(F.v3211, F.v3217), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr997_SA(y_str("))", 2));
F.v3220 = yr1016_SE();
yr1187_AddTok(v189, F.v3220);
return;
}
if (F.v3202) {
if ((!(F.v3191 == INT64_C(10)))) {
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
F.lo3299 = F.v3194;
F.hi3300 = rt_sub(v1168, INT64_C(1));
{ rt_int hi3304 = F.hi3300;
for (rt_int i3303 = F.lo3299; i3303 <= hi3304; i3303++) { F.c_3302 = i3303;
yr991_SC(((unsigned char *)(v883).p)[y_ix1(v883, F.c_3302)]);
if (i3303 == hi3304) break;
}}
F.v3220 = yr1016_SE();
yr1187_AddTok(v192, F.v3220);
return;
}
F.v3205 = INT64_C(0);
F.lo3309 = F.v3194;
F.hi3310 = rt_sub(F.v3196, INT64_C(1));
{ rt_int hi3314 = F.hi3310;
for (rt_int i3313 = F.lo3309; i3313 <= hi3314; i3313++) { F.c_3312 = i3313;
F.v3208 = yr1205_DigitVal(((unsigned char *)(v883).p)[y_ix1(v883, F.c_3312)]);
if ((F.v3205 > (rt_div((rt_sub(v876, F.v3208)), F.v3191)))) {
yr1211_LexError(y_str("integer literal too large", 25));
}
F.v3205 = rt_range(rt_add((rt_mul(F.v3205, F.v3191)), F.v3208), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3313 == hi3314) break;
}}
if (F.p1219) {
F.v3205 = rt_range(rt_neg(F.v3205), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yr1187_AddTok(v186, F.v3205);
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
F.v3325 = v1168;
F.v3327 = INT64_C(0);
F.v3329 = 1;
while (F.v3329) {
if (((((yr1194_At(F.v3325) == 32)) || ((yr1194_At(F.v3325) == 9))) || ((yr1194_At(F.v3325) == 13)))) {
F.v3325 = rt_range(rt_add(F.v3325, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr1194_At(F.v3325) == 10)) {
F.v3327 = rt_range(rt_add(F.v3327, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3325 = rt_range(rt_add(F.v3325, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v3329 = 0;
}
}
if ((!(yr1194_At(F.v3325) == 34))) {
goto yl_3330;
}
v1171 = rt_range(rt_add(v1171, F.v3327), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1168 = F.v3325;
}
yl_3330: ;
F.v3323 = yr1016_SE();
yr1187_AddTok(v198, F.v3323);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1229_Lex(void) {
struct yf1230 F;
memset((void *)&F, 0, sizeof F);
v1168 = v1162;
while ((v1168 <= v1165)) {
F.v3358 = ((unsigned char *)(v883).p)[y_ix1(v883, v1168)];
if ((F.v3358 == 10)) {
v1171 = rt_range(rt_add(v1171, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((((F.v3358 == 32)) || ((F.v3358 == 9))) || ((F.v3358 == 13))) || ((F.v3358 == 12)))) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v3358 == 40)) && ((yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 42)))) {
v1168 = rt_range(rt_add(v1168, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!((((yr1194_At(v1168) == 42)) && ((yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 41)))))) {
if ((((yr1194_At(v1168) == 10)) || ((v1168 > v1165)))) {
yr1211_LexError(y_str("a comment must close on its line", 32));
}
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1168 = rt_range(rt_add(v1168, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr974_IsDigit(F.v3358) || ((((v1174 == INT64_C(16))) && ((yr1205_DigitVal(F.v3358) < INT64_C(16))))))) {
yr1218_LexNumber(0);
} else if (((((((F.v3358 == 45)) || ((F.v3358 == 43)))) && (!yr1200_EndsOperand())) && ((yr974_IsDigit(yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || ((((v1174 == INT64_C(16))) && ((yr1205_DigitVal(yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) < INT64_C(16))))))))) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1218_LexNumber((F.v3358 == 45));
} else if (yr968_IsLetter(F.v3358)) {
F.v3360 = v1168;
while ((yr968_IsLetter(yr1194_At(v1168)) || yr974_IsDigit(yr1194_At(v1168)))) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3368 = yr1028_Intern(F.v3360, rt_range(rt_sub(v1168, F.v3360), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((F.v3368 == v222)) {
v1174 = INT64_C(2);
} else if ((F.v3368 == v225)) {
v1174 = INT64_C(8);
} else if ((F.v3368 == v228)) {
v1174 = INT64_C(10);
} else if ((F.v3368 == v231)) {
v1174 = INT64_C(16);
} else if ((F.v3368 <= v462)) {
yr1187_AddTok(v180, F.v3368);
} else {
yr1187_AddTok(v177, F.v3368);
}
} else if ((F.v3358 == 39)) {
F.v3360 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3362 = F.v3360;
while ((!(yr1194_At(F.v3362) == 39))) {
if (((((yr1194_At(F.v3362) == 10)) || ((yr1194_At(F.v3362) == 34))) || ((F.v3362 > v1165)))) {
yr1211_LexError(y_str("bad character literal", 21));
}
F.v3362 = rt_range(rt_add(F.v3362, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v3362 == F.v3360)) {
yr1211_LexError(y_str("empty character literal", 23));
}
F.v3368 = yr1028_Intern(F.v3360, rt_range(rt_sub(F.v3362, F.v3360), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1187_AddTok(v195, F.v3368);
v1168 = rt_range(rt_add(F.v3362, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v3358 == 34)) {
yr1224_LexString();
} else {
F.v3364 = INT64_C(0);
F.v3362 = rt_range(rt_add(v462, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((F.v3364 == INT64_C(0))) && ((F.v3362 <= v591)))) {
F.v3366 = ((rt_int *)(v890).p)[y_ix1(v890, F.v3362)];
F.v3372 = 1;
F.lo3444 = INT64_C(0);
F.hi3445 = rt_sub(F.v3366, INT64_C(1));
{ rt_int hi3449 = F.hi3445;
for (rt_int i3448 = F.lo3444; i3448 <= hi3449; i3448++) { F.c_3447 = i3448;
if ((!(yr1194_At(rt_range(rt_add(v1168, F.c_3447), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == ((unsigned char *)(v883).p)[y_ix1(v883, rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.v3362)], F.c_3447))]))) {
F.v3372 = 0;
}
if (i3448 == hi3449) break;
}}
if (F.v3372) {
F.v3364 = F.v3362;
}
F.v3362 = rt_range(rt_add(F.v3362, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v3364 == INT64_C(0))) {
yr1211_LexError(y_str("a character that is not in the language", 39));
}
yr1187_AddTok(v183, F.v3364);
v1168 = rt_range(rt_add(v1168, ((rt_int *)(v890).p)[y_ix1(v890, F.v3364)]), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
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
({ F.v3463 = rt_alloc(sizeof(yR95)); });
(*(yR95 *)rt_nil_check(F.v3463)) = ((yR95){ .f_kind = F.p1246, .f_line = F.p1247, .f_ival = INT64_C(0), .f_flag = INT64_C(0), .f_name = INT64_C(0), .f_text = INT64_C(0), .f_a = ((void *)0), .f_b = ((void *)0), .f_c = ((void *)0), .f_d = ((void *)0), .f_e = ((void *)0), .f_next = ((void *)0), .f_rep = ((void *)0), .f_sym = ((void *)0) });
{ void * rv3468 = F.v3463;
return rv3468; }
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
F.v3476 = INT64_C(0);
F.v3479 = F.p1261;
while ((!(F.v3479 == ((void *)0)))) {
F.v3476 = rt_range(rt_add(F.v3476, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3479 = ((*(yR95 *)rt_nil_check(F.v3479))).f_next;
}
{ rt_int rv3482 = F.v3476;
return rv3482; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1266_TK(void) {
struct yf1267 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv3484 = ((rt_int *)(v1153).p)[y_ix1(v1153, v1234)];
return rv3484; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1271_TV(void) {
struct yf1272 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv3486 = ((rt_int *)(v1155).p)[y_ix1(v1155, v1234)];
return rv3486; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1276_TLn(void) {
struct yf1277 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv3488 = ((rt_int *)(v1157).p)[y_ix1(v1157, v1234)];
return rv3488; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1281_IsAt(rt_int a_p1282, rt_int a_p1283) {
struct yf1284 F;
memset((void *)&F, 0, sizeof F);
F.p1282 = a_p1282;
F.p1283 = a_p1283;
F.v3493 = ((rt_int *)(v1153).p)[y_ix1(v1153, rt_add(v1234, F.p1282))];
{ rt_int rv3496 = (((((F.v3493 == v180)) || ((F.v3493 == v183)))) && ((((rt_int *)(v1155).p)[y_ix1(v1155, rt_add(v1234, F.p1282))] == F.p1283)));
return rv3496; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1288_Is(rt_int a_p1289) {
struct yf1290 F;
memset((void *)&F, 0, sizeof F);
F.p1289 = a_p1289;
{ rt_int rv3500 = yr1281_IsAt(INT64_C(0), F.p1289);
return rv3500; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1294_IsIdAt(rt_int a_p1295) {
struct yf1296 F;
memset((void *)&F, 0, sizeof F);
F.p1295 = a_p1295;
{ rt_int rv3504 = (((rt_int *)(v1153).p)[y_ix1(v1153, rt_add(v1234, F.p1295))] == v177);
return rv3504; }
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
{ rt_int rv3511 = 1;
return rv3511; }
}
{ rt_int rv3513 = 0;
return rv3513; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1311_TokText(void) {
struct yf1312 F;
memset((void *)&F, 0, sizeof F);
F.v3516 = yr1266_TK();
if ((((((F.v3516 == v177)) || ((F.v3516 == v180))) || ((F.v3516 == v183))) || ((F.v3516 == v195)))) {
{ rt_int rv3517 = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
return rv3517; }
}
if ((F.v3516 == v174)) {
{ rt_int rv3519 = yr1021_T(y_str("the end of the text", 19));
return rv3519; }
}
if ((F.v3516 == v186)) {
yr986_SB();
yr1010_SI(yr1271_TV());
{ rt_int rv3520 = yr1016_SE();
return rv3520; }
}
{ rt_int rv3522 = yr1021_T(y_str("a literal", 9));
return rv3522; }
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
F.v3526 = yr1016_SE();
yr1117_Fail(yr1276_TLn(), F.v3526);
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
F.v3531 = yr1016_SE();
yr1117_Fail(yr1276_TLn(), F.v3531);
}
F.v3531 = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
yr1300_Skip();
{ rt_int rv3533 = F.v3531;
return rv3533; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1327_CloseName(rt_int a_p1328, rt_int a_p1329) {
struct yf1330 F;
memset((void *)&F, 0, sizeof F);
F.p1328 = a_p1328;
F.p1329 = a_p1329;
if (((((yr1266_TK() == v177)) || ((yr1266_TK() == v180))) || ((yr1266_TK() == v183)))) {
F.v3538 = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
if ((F.v3538 == F.p1328)) {
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
F.v3542 = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
if ((yr1266_TK() == v177)) {
yr1300_Skip();
{ rt_int rv3543 = F.v3542;
return rv3543; }
}
if ((((yr1266_TK() == v180)) && (((((((((F.v3542 == v360)) || ((F.v3542 == v207))) || ((F.v3542 == v369))) || ((F.v3542 == v246))) || ((F.v3542 == v348))) || ((F.v3542 == v459))) || ((F.v3542 == v330)))))) {
yr1300_Skip();
{ rt_int rv3544 = F.v3542;
return rv3544; }
}
if (((((((((((((yr1266_TK() == v183)) && ((!(F.v3542 == v564)))) && ((!(F.v3542 == v567)))) && ((!(F.v3542 == v570)))) && ((!(F.v3542 == v573)))) && ((!(F.v3542 == v576)))) && ((!(F.v3542 == v579)))) && ((!(F.v3542 == v582)))) && ((!(F.v3542 == v585)))) && ((!(F.v3542 == v507)))) && ((!(F.v3542 == v504))))) {
yr1300_Skip();
{ rt_int rv3545 = F.v3542;
return rv3545; }
}
yr1124_FailS(yr1276_TLn(), y_str("expected a name", 15));
{ rt_int rv3548 = INT64_C(0);
return rv3548; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1339_IsLabel(rt_int a_p1340) {
struct yf1341 F;
memset((void *)&F, 0, sizeof F);
F.p1340 = a_p1340;
F.v3552 = v1237;
while ((!(F.v3552 == ((void *)0)))) {
if ((((*(yR95 *)rt_nil_check(F.v3552))).f_name == F.p1340)) {
{ rt_int rv3554 = 1;
return rv3554; }
}
F.v3552 = ((*(yR95 *)rt_nil_check(F.v3552))).f_next;
}
{ rt_int rv3556 = 0;
return rv3556; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1345_ImportItem(void) {
struct yf1346 F;
memset((void *)&F, 0, sizeof F);
F.v3559 = yr1245_NewNode(v597, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3559))).f_name = yr1334_ExtendedId();
if ((yr1294_IsIdAt(INT64_C(0)) && ((yr1271_TV() == v1239)))) {
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3559))).f_text = yr1322_Ident();
}
if (yr1305_Accept(v213)) {
((*(yR95 *)rt_nil_check(F.v3559))).f_ival = yr1334_ExtendedId();
}
{ void * rv3561 = F.v3559;
return rv3561; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1350_ParseModule(void) {
struct yf1351 F;
memset((void *)&F, 0, sizeof F);
F.v3564 = yr1245_NewNode(v594, yr1276_TLn());
F.v3566 = ((void *)0);
F.v3568 = ((void *)0);
F.v3570 = ((void *)0);
if (yr1305_Accept(v354)) {
((*(yR95 *)rt_nil_check(F.v3564))).f_flag = INT64_C(1);
} else {
yr1316_Expect(v351);
}
((*(yR95 *)rt_nil_check(F.v3564))).f_name = yr1322_Ident();
while (yr1305_Accept(v327)) {
for (;;) {
F.v3566 = yr1345_ImportItem();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3564))).f_a, &F.v3568, F.v3566);
if ((!yr1305_Accept(v576))) {
goto yl_3574;
}
}
yl_3574: ;
yr1316_Expect(v579);
}
while (yr1305_Accept(v306)) {
F.v3572 = INT64_C(0);
if ((((yr1288_Is(v366) || yr1288_Is(v444)) || yr1288_Is(v399)) || yr1288_Is(v453))) {
F.v3572 = yr1271_TV();
yr1300_Skip();
}
for (;;) {
F.v3566 = yr1345_ImportItem();
((*(yR95 *)rt_nil_check(F.v3566))).f_flag = F.v3572;
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3564))).f_b, &F.v3570, F.v3566);
if ((!yr1305_Accept(v576))) {
goto yl_3576;
}
}
yl_3576: ;
yr1316_Expect(v579);
}
((*(yR95 *)rt_nil_check(F.v3564))).f_c = yr1360_ParseBlock();
if ((((*(yR95 *)rt_nil_check(F.v3564))).f_flag == INT64_C(1))) {
yr1316_Expect(v279);
} else {
yr1316_Expect(v276);
}
yr1327_CloseName(((*(yR95 *)rt_nil_check(F.v3564))).f_name, ((*(yR95 *)rt_nil_check(F.v3564))).f_line);
{ void * rv3578 = F.v3564;
return rv3578; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1355_IsDeclWord(void) {
struct yf1356 F;
memset((void *)&F, 0, sizeof F);
if ((!(yr1266_TK() == v180))) {
{ rt_int rv3583 = 0;
return rv3583; }
}
F.v3581 = yr1271_TV();
{ rt_int rv3584 = (((((((((((((F.v3581 == v240)) || ((F.v3581 == v453))) || ((F.v3581 == v342))) || ((F.v3581 == v447))) || ((F.v3581 == v408))) || ((F.v3581 == v318))) || ((F.v3581 == v390))) || ((F.v3581 == v351))) || ((F.v3581 == v354))) || ((F.v3581 == v435))) || ((F.v3581 == v336))) || ((F.v3581 == v393)));
return rv3584; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1360_ParseBlock(void) {
struct yf1361 F;
memset((void *)&F, 0, sizeof F);
F.v3587 = yr1245_NewNode(v600, yr1276_TLn());
F.v3589 = ((void *)0);
F.v3591 = v1237;
while (yr1355_IsDeclWord()) {
yr1387_ParseDeclGroup(&((*(yR95 *)rt_nil_check(F.v3587))).f_a, &F.v3589);
while (yr1305_Accept(v579)) {
}
}
if (yr1288_Is(v300)) {
((*(yR95 *)rt_nil_check(F.v3587))).f_b = yr1365_ParseHandler();
F.v3593 = ((*(yR95 *)rt_nil_check(F.v3587))).f_b;
if (yr1305_Accept(v579)) {
}
}
((*(yR95 *)rt_nil_check(F.v3587))).f_c = yr1451_ParseStatements(1);
v1237 = F.v3591;
{ void * rv3595 = F.v3587;
return rv3595; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1365_ParseHandler(void) {
struct yf1366 F;
memset((void *)&F, 0, sizeof F);
F.v3598 = yr1245_NewNode(v603, yr1276_TLn());
F.v3600 = ((void *)0);
F.v3602 = ((void *)0);
F.v3604 = ((void *)0);
F.v3606 = ((void *)0);
yr1316_Expect(v300);
while (yr1305_Accept(v237)) {
F.v3600 = yr1245_NewNode(v606, yr1276_TLn());
F.v3606 = ((void *)0);
for (;;) {
F.v3604 = yr1245_NewNode(v639, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3604))).f_name = yr1322_Ident();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3600))).f_a, &F.v3606, F.v3604);
if ((!yr1305_Accept(v576))) {
goto yl_3607;
}
}
yl_3607: ;
yr1316_Expect(v504);
((*(yR95 *)rt_nil_check(F.v3600))).f_b = yr1451_ParseStatements(0);
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3598))).f_a, &F.v3602, F.v3600);
}
if (yr1305_Accept(v252)) {
((*(yR95 *)rt_nil_check(F.v3598))).f_flag = INT64_C(1);
((*(yR95 *)rt_nil_check(F.v3598))).f_b = yr1451_ParseStatements(0);
}
yr1316_Expect(v261);
{ void * rv3611 = F.v3598;
return rv3611; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1370_ParseNames(void) {
struct yf1371 F;
memset((void *)&F, 0, sizeof F);
F.v3614 = ((void *)0);
F.v3616 = ((void *)0);
F.v3618 = ((void *)0);
for (;;) {
F.v3618 = yr1245_NewNode(v639, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3618))).f_name = yr1322_Ident();
if (yr1305_Accept(v219)) {
((*(yR95 *)rt_nil_check(F.v3618))).f_a = yr1513_ParseExpr();
}
yr1252_Link(&F.v3614, &F.v3616, F.v3618);
if ((!yr1305_Accept(v576))) {
goto yl_3619;
}
}
yl_3619: ;
{ void * rv3620 = F.v3614;
return rv3620; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1375_SimpleEntry(rt_int a_p1376) {
struct yf1377 F;
memset((void *)&F, 0, sizeof F);
F.p1376 = a_p1376;
if ((F.p1376 == v240)) {
F.v3624 = yr1245_NewNode(v609, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3624))).f_a = yr1370_ParseNames();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3624))).f_b = yr1416_ParseRep();
yr1316_Expect(v555);
((*(yR95 *)rt_nil_check(F.v3624))).f_c = yr1513_ParseExpr();
} else if ((F.p1376 == v453)) {
F.v3624 = yr1245_NewNode(v612, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3624))).f_a = yr1370_ParseNames();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3624))).f_b = yr1416_ParseRep();
if (yr1305_Accept(v501)) {
((*(yR95 *)rt_nil_check(F.v3624))).f_c = yr1513_ParseExpr();
}
} else if ((F.p1376 == v447)) {
F.v3624 = yr1245_NewNode(v618, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3624))).f_name = yr1322_Ident();
yr1316_Expect(v555);
((*(yR95 *)rt_nil_check(F.v3624))).f_b = yr1436_ParseConcrete1();
} else {
F.v3624 = yr1245_NewNode(v621, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3624))).f_name = yr1322_Ident();
yr1316_Expect(v555);
((*(yR95 *)rt_nil_check(F.v3624))).f_b = yr1416_ParseRep();
}
{ void * rv3625 = F.v3624;
return rv3625; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1381_Continues(rt_int a_p1382) {
struct yf1383 F;
memset((void *)&F, 0, sizeof F);
F.p1382 = a_p1382;
if ((!((yr1288_Is(v579) && yr1294_IsIdAt(INT64_C(1)))))) {
{ rt_int rv3630 = 0;
return rv3630; }
}
if (yr1339_IsLabel(rt_range(((rt_int *)(v1155).p)[y_ix1(v1155, rt_add(v1234, INT64_C(1)))], INT64_C(0), INT64_C(4000000)))) {
{ rt_int rv3634 = 0;
return rv3634; }
}
if ((((F.p1382 == v240)) || ((F.p1382 == v453)))) {
{ rt_int rv3638 = ((yr1281_IsAt(INT64_C(2), v576) || yr1281_IsAt(INT64_C(2), v582)) || yr1281_IsAt(INT64_C(2), v219));
return rv3638; }
}
{ rt_int rv3640 = yr1281_IsAt(INT64_C(2), v555);
return rv3640; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1387_ParseDeclGroup(void * * a_p1388, void * * a_p1389) {
struct yf1390 F;
memset((void *)&F, 0, sizeof F);
F.p1388 = a_p1388;
F.p1389 = a_p1389;
F.v3645 = yr1271_TV();
if ((((((F.v3645 == v240)) || ((F.v3645 == v453))) || ((F.v3645 == v447))) || ((F.v3645 == v408)))) {
yr1300_Skip();
yr1252_Link(&(*F.p1388), &(*F.p1389), yr1375_SimpleEntry(F.v3645));
while (yr1381_Continues(F.v3645)) {
yr1300_Skip();
yr1252_Link(&(*F.p1388), &(*F.p1389), yr1375_SimpleEntry(F.v3645));
}
return;
}
if ((F.v3645 == v342)) {
F.v3647 = yr1245_NewNode(v615, yr1276_TLn());
yr1300_Skip();
F.v3651 = ((void *)0);
for (;;) {
F.v3649 = yr1245_NewNode(v639, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3649))).f_name = yr1322_Ident();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3647))).f_a, &F.v3651, F.v3649);
if ((!yr1305_Accept(v576))) {
goto yl_3652;
}
}
yl_3652: ;
F.v3649 = ((*(yR95 *)rt_nil_check(F.v3647))).f_a;
while ((!(F.v3649 == ((void *)0)))) {
((*(yR95 *)rt_nil_check(F.v3647))).f_b = yr1245_NewNode(v639, ((*(yR95 *)rt_nil_check(F.v3649))).f_line);
((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v3647))).f_b))).f_name = ((*(yR95 *)rt_nil_check(F.v3649))).f_name;
((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v3647))).f_b))).f_next = v1237;
v1237 = ((*(yR95 *)rt_nil_check(F.v3647))).f_b;
F.v3649 = ((*(yR95 *)rt_nil_check(F.v3649))).f_next;
}
((*(yR95 *)rt_nil_check(F.v3647))).f_b = ((void *)0);
yr1252_Link(&(*F.p1388), &(*F.p1389), F.v3647);
return;
}
yr1252_Link(&(*F.p1388), &(*F.p1389), yr1394_ParseDecl());
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1394_ParseDecl(void) {
struct yf1395 F;
memset((void *)&F, 0, sizeof F);
F.v3661 = yr1271_TV();
F.v3663 = yr1276_TLn();
if ((((F.v3661 == v318)) || ((F.v3661 == v390)))) {
F.v3655 = yr1245_NewNode(v624, F.v3663);
yr1300_Skip();
if ((F.v3661 == v318)) {
((*(yR95 *)rt_nil_check(F.v3655))).f_flag = INT64_C(1);
}
if ((yr1288_Is(v309) || yr1288_Is(v405))) {
((*(yR95 *)rt_nil_check(F.v3655))).f_ival = yr1271_TV();
yr1300_Skip();
}
((*(yR95 *)rt_nil_check(F.v3655))).f_name = yr1334_ExtendedId();
yr1399_ParseFormals(F.v3655);
if (yr1305_Accept(v333)) {
((*(yR95 *)rt_nil_check(F.v3655))).f_e = yr1245_NewNode(v639, F.v3663);
}
((*(yR95 *)rt_nil_check(F.v3655))).f_c = yr1360_ParseBlock();
if ((F.v3661 == v318)) {
yr1316_Expect(v267);
} else {
yr1316_Expect(v282);
}
yr1327_CloseName(((*(yR95 *)rt_nil_check(F.v3655))).f_name, F.v3663);
{ void * rv3667 = F.v3655;
return rv3667; }
}
if ((((F.v3661 == v351)) || ((F.v3661 == v354)))) {
{ void * rv3668 = yr1350_ParseModule();
return rv3668; }
}
if ((F.v3661 == v435)) {
F.v3655 = yr1245_NewNode(v630, F.v3663);
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3655))).f_name = yr1322_Ident();
yr1316_Expect(v564);
F.v3659 = ((void *)0);
for (;;) {
F.v3657 = yr1245_NewNode(v639, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3657))).f_name = yr1322_Ident();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3655))).f_a, &F.v3659, F.v3657);
if ((!yr1305_Accept(v576))) {
goto yl_3669;
}
}
yl_3669: ;
yr1316_Expect(v567);
F.v3665 = v1234;
((*(yR95 *)rt_nil_check(F.v3655))).f_b = yr1350_ParseModule();
((*(yR95 *)rt_nil_check(F.v3655))).f_ival = F.v3665;
((*(yR95 *)rt_nil_check(F.v3655))).f_flag = v1234;
yr1316_Expect(v294);
yr1327_CloseName(((*(yR95 *)rt_nil_check(F.v3655))).f_name, F.v3663);
{ void * rv3670 = F.v3655;
return rv3670; }
}
if ((F.v3661 == v336)) {
F.v3655 = yr1245_NewNode(v633, F.v3663);
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3655))).f_name = yr1322_Ident();
yr1316_Expect(v564);
F.v3659 = ((void *)0);
for (;;) {
F.v3657 = yr1245_NewNode(v639, yr1276_TLn());
if ((yr1266_TK() == v186)) {
((*(yR95 *)rt_nil_check(F.v3657))).f_flag = INT64_C(1);
((*(yR95 *)rt_nil_check(F.v3657))).f_ival = yr1271_TV();
yr1300_Skip();
} else {
((*(yR95 *)rt_nil_check(F.v3657))).f_name = yr1334_ExtendedId();
}
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3655))).f_a, &F.v3659, F.v3657);
if ((!yr1305_Accept(v576))) {
goto yl_3671;
}
}
yl_3671: ;
yr1316_Expect(v567);
{ void * rv3673 = F.v3655;
return rv3673; }
}
if ((F.v3661 == v393)) {
F.v3655 = yr1245_NewNode(v636, F.v3663);
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3655))).f_name = yr1322_Ident();
yr1399_ParseFormals(F.v3655);
if ((!(((*(yR95 *)rt_nil_check(F.v3655))).f_b == ((void *)0)))) {
yr1124_FailS(F.v3663, y_str("a process returns no value", 26));
}
if (yr1305_Accept(v387)) {
((*(yR95 *)rt_nil_check(F.v3655))).f_d = yr1513_ParseExpr();
}
if (yr1305_Accept(v339)) {
((*(yR95 *)rt_nil_check(F.v3655))).f_e = yr1513_ParseExpr();
}
if (yr1305_Accept(v429)) {
F.v3657 = yr1513_ParseExpr();
}
((*(yR95 *)rt_nil_check(F.v3655))).f_c = yr1360_ParseBlock();
yr1316_Expect(v285);
yr1327_CloseName(((*(yR95 *)rt_nil_check(F.v3655))).f_name, F.v3663);
{ void * rv3675 = F.v3655;
return rv3675; }
}
yr1124_FailS(F.v3663, y_str("expected a declaration", 22));
{ void * rv3677 = ((void *)0);
return rv3677; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1399_ParseFormals(void * a_p1400) {
struct yf1401 F;
memset((void *)&F, 0, sizeof F);
F.p1400 = a_p1400;
F.v3681 = ((void *)0);
F.v3683 = ((void *)0);
if (yr1305_Accept(v414)) {
((*(yR95 *)rt_nil_check(F.p1400))).f_b = yr1416_ParseRep();
}
yr1316_Expect(v564);
while ((!yr1288_Is(v567))) {
if (yr1305_Accept(v240)) {
F.v3685 = v867;
} else if (yr1305_Accept(v375)) {
F.v3685 = v870;
} else if (yr1305_Accept(v453)) {
F.v3685 = v873;
} else {
yr1124_FailS(yr1276_TLn(), y_str("a formal parameter is CONST, OUT or VAR", 39));
}
for (;;) {
F.v3681 = yr1245_NewNode(v627, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3681))).f_ival = F.v3685;
((*(yR95 *)rt_nil_check(F.v3681))).f_a = yr1370_ParseNames();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3681))).f_b = yr1405_ParseFormalRep();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.p1400))).f_a, &F.v3683, F.v3681);
if ((!((((yr1288_Is(v579) || yr1288_Is(v576))) && yr1294_IsIdAt(INT64_C(1)))))) {
goto yl_3687;
}
yr1300_Skip();
}
yl_3687: ;
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
F.v3691 = yr1245_NewNode(v666, yr1276_TLn());
yr1300_Skip();
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3691))).f_a = yr1513_ParseExpr();
yr1300_Skip();
yr1316_Expect(v363);
((*(yR95 *)rt_nil_check(F.v3691))).f_b = yr1416_ParseRep();
yr1316_Expect(v567);
{ void * rv3697 = F.v3691;
return rv3697; }
}
if (yr1288_Is(v432)) {
F.v3691 = yr1245_NewNode(v669, yr1276_TLn());
yr1300_Skip();
{ void * rv3698 = F.v3691;
return rv3698; }
}
{ void * rv3699 = yr1416_ParseRep();
return rv3699; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1410_IsStructWord(rt_int a_p1411) {
struct yf1412 F;
memset((void *)&F, 0, sizeof F);
F.p1411 = a_p1411;
F.v3703 = ((rt_int *)(v1155).p)[y_ix1(v1155, rt_add(v1234, F.p1411))];
if ((!(((rt_int *)(v1153).p)[y_ix1(v1153, rt_add(v1234, F.p1411))] == v180))) {
{ rt_int rv3707 = 0;
return rv3707; }
}
{ rt_int rv3708 = (((((((((F.v3703 == v450)) || ((F.v3703 == v372))) || ((F.v3703 == v204))) || ((F.v3703 == v210))) || ((F.v3703 == v402))) || ((F.v3703 == v312))) || ((F.v3703 == v381))) || ((F.v3703 == v423)));
return rv3708; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1416_ParseRep(void) {
struct yf1417 F;
memset((void *)&F, 0, sizeof F);
if ((yr1294_IsIdAt(INT64_C(0)) && ((yr1410_IsStructWord(INT64_C(1)) || ((yr1294_IsIdAt(INT64_C(1)) && yr1281_IsAt(INT64_C(2), v570))))))) {
F.v3711 = yr1322_Ident();
F.v3713 = yr1421_ParseConcrete();
((*(yR95 *)rt_nil_check(F.v3713))).f_text = F.v3711;
{ void * rv3718 = F.v3713;
return rv3718; }
}
{ void * rv3719 = yr1421_ParseConcrete();
return rv3719; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1421_ParseConcrete(void) {
struct yf1422 F;
memset((void *)&F, 0, sizeof F);
F.v3722 = yr1436_ParseConcrete1();
if (yr1305_Accept(v378)) {
if (((((yr1266_TK() == v186)) || ((yr1266_TK() == v177))) || yr1288_Is(v564))) {
F.v3724 = yr1518_ParseSimple();
}
}
if (yr1305_Accept(v201)) {
F.v3724 = yr1518_ParseSimple();
}
{ void * rv3725 = F.v3722;
return rv3725; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1426_ParseIds(void) {
struct yf1427 F;
memset((void *)&F, 0, sizeof F);
F.v3728 = ((void *)0);
F.v3730 = ((void *)0);
F.v3732 = ((void *)0);
for (;;) {
F.v3732 = yr1245_NewNode(v639, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3732))).f_name = yr1322_Ident();
yr1252_Link(&F.v3728, &F.v3730, F.v3732);
if ((!yr1305_Accept(v576))) {
goto yl_3733;
}
}
yl_3733: ;
{ void * rv3734 = F.v3728;
return rv3734; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1431_ParseFieldGroups(void) {
struct yf1432 F;
memset((void *)&F, 0, sizeof F);
F.v3737 = ((void *)0);
F.v3739 = ((void *)0);
F.v3741 = ((void *)0);
while ((yr1288_Is(v240) || yr1288_Is(v453))) {
F.v3743 = yr1271_TV();
yr1300_Skip();
for (;;) {
F.v3741 = yr1245_NewNode(v675, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3741))).f_ival = F.v3743;
((*(yR95 *)rt_nil_check(F.v3741))).f_a = yr1370_ParseNames();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3741))).f_b = yr1416_ParseRep();
yr1252_Link(&F.v3737, &F.v3739, F.v3741);
if ((!((yr1288_Is(v579) && yr1294_IsIdAt(INT64_C(1)))))) {
goto yl_3744;
}
yr1300_Skip();
}
yl_3744: ;
if ((!yr1305_Accept(v579))) {
{ void * rv3746 = F.v3737;
return rv3746; }
}
}
{ void * rv3747 = F.v3737;
return rv3747; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1436_ParseConcrete1(void) {
struct yf1437 F;
memset((void *)&F, 0, sizeof F);
F.v3764 = yr1276_TLn();
if ((yr1266_TK() == v177)) {
F.v3750 = yr1245_NewNode(v642, F.v3764);
((*(yR95 *)rt_nil_check(F.v3750))).f_name = yr1322_Ident();
((*(yR95 *)rt_nil_check(F.v3750))).f_a = yr1441_ParseQualifier();
{ void * rv3765 = F.v3750;
return rv3765; }
}
if ((!(yr1266_TK() == v180))) {
yr1124_FailS(F.v3764, y_str("expected a representation", 25));
}
F.v3762 = yr1271_TV();
if ((((F.v3762 == v450)) || ((F.v3762 == v372)))) {
F.v3750 = yr1245_NewNode(v645, F.v3764);
if ((F.v3762 == v372)) {
((*(yR95 *)rt_nil_check(F.v3750))).f_flag = INT64_C(1);
}
yr1300_Skip();
yr1316_Expect(v564);
((*(yR95 *)rt_nil_check(F.v3750))).f_a = yr1426_ParseIds();
yr1316_Expect(v567);
((*(yR95 *)rt_nil_check(F.v3750))).f_b = yr1441_ParseQualifier();
{ void * rv3768 = F.v3750;
return rv3768; }
}
if ((F.v3762 == v204)) {
F.v3750 = yr1245_NewNode(v648, F.v3764);
yr1300_Skip();
yr1316_Expect(v564);
F.v3760 = ((void *)0);
for (;;) {
if ((!(yr1266_TK() == v195))) {
yr1124_FailS(yr1276_TLn(), y_str("an ALPHABET lists character literals", 36));
}
F.v3758 = yr1245_NewNode(v738, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3758))).f_text = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
yr1300_Skip();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3750))).f_a, &F.v3760, F.v3758);
if ((!yr1305_Accept(v576))) {
goto yl_3769;
}
}
yl_3769: ;
yr1316_Expect(v567);
((*(yR95 *)rt_nil_check(F.v3750))).f_b = yr1441_ParseQualifier();
{ void * rv3771 = F.v3750;
return rv3771; }
}
if ((F.v3762 == v210)) {
F.v3750 = yr1245_NewNode(v651, F.v3764);
yr1300_Skip();
yr1316_Expect(v564);
F.v3760 = ((void *)0);
for (;;) {
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3750))).f_a, &F.v3760, yr1416_ParseRep());
if ((!yr1305_Accept(v576))) {
goto yl_3772;
}
}
yl_3772: ;
yr1316_Expect(v363);
((*(yR95 *)rt_nil_check(F.v3750))).f_b = yr1416_ParseRep();
yr1316_Expect(v567);
{ void * rv3773 = F.v3750;
return rv3773; }
}
if ((F.v3762 == v402)) {
F.v3750 = yr1245_NewNode(v654, F.v3764);
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3750))).f_a = yr1431_ParseFieldGroups();
if (yr1305_Accept(v420)) {
F.v3752 = yr1245_NewNode(v678, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3752))).f_name = yr1322_Ident();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3752))).f_b = yr1416_ParseRep();
F.v3756 = ((void *)0);
while (yr1305_Accept(v237)) {
F.v3754 = yr1245_NewNode(v681, yr1276_TLn());
F.v3760 = ((void *)0);
for (;;) {
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3754))).f_a, &F.v3760, yr1513_ParseExpr());
if ((!yr1305_Accept(v576))) {
goto yl_3774;
}
}
yl_3774: ;
yr1316_Expect(v504);
((*(yR95 *)rt_nil_check(F.v3754))).f_b = yr1431_ParseFieldGroups();
while (yr1305_Accept(v579)) {
}
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3752))).f_a, &F.v3756, F.v3754);
}
yr1316_Expect(v291);
if (yr1305_Accept(v579)) {
}
((*(yR95 *)rt_nil_check(F.v3750))).f_b = F.v3752;
}
yr1316_Expect(v288);
{ void * rv3775 = F.v3750;
return rv3775; }
}
if (((((F.v3762 == v312)) || ((F.v3762 == v381))) || ((F.v3762 == v423)))) {
if ((F.v3762 == v312)) {
F.v3750 = yr1245_NewNode(v657, F.v3764);
} else if ((F.v3762 == v381)) {
F.v3750 = yr1245_NewNode(v660, F.v3764);
} else {
F.v3750 = yr1245_NewNode(v663, F.v3764);
}
yr1300_Skip();
yr1316_Expect(v564);
((*(yR95 *)rt_nil_check(F.v3750))).f_a = yr1416_ParseRep();
yr1316_Expect(v567);
{ void * rv3776 = F.v3750;
return rv3776; }
}
yr1124_FailS(F.v3764, y_str("expected a representation", 25));
{ void * rv3778 = ((void *)0);
return rv3778; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1441_ParseQualifier(void) {
struct yf1442 F;
memset((void *)&F, 0, sizeof F);
if ((!yr1288_Is(v570))) {
{ void * rv3782 = ((void *)0);
return rv3782; }
}
F.v3781 = yr1245_NewNode(v672, yr1276_TLn());
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3781))).f_a = yr1513_ParseExpr();
yr1316_Expect(v507);
((*(yR95 *)rt_nil_check(F.v3781))).f_b = yr1513_ParseExpr();
yr1316_Expect(v573);
if (yr1305_Accept(v417)) {
((*(yR95 *)rt_nil_check(F.v3781))).f_c = yr1518_ParseSimple();
} else if (yr1305_Accept(v384)) {
((*(yR95 *)rt_nil_check(F.v3781))).f_d = yr1518_ParseSimple();
}
{ void * rv3783 = F.v3781;
return rv3783; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1446_IsStop(void) {
struct yf1447 F;
memset((void *)&F, 0, sizeof F);
if ((yr1266_TK() == v174)) {
{ rt_int rv3788 = 1;
return rv3788; }
}
if ((!(yr1266_TK() == v180))) {
{ rt_int rv3790 = 0;
return rv3790; }
}
F.v3786 = yr1271_TV();
{ rt_int rv3791 = ((((((((((((((((F.v3786 == v255)) || ((F.v3786 == v252))) || ((F.v3786 == v270))) || ((F.v3786 == v237))) || ((F.v3786 == v291))) || ((F.v3786 == v297))) || ((F.v3786 == v264))) || ((F.v3786 == v273))) || ((F.v3786 == v258))) || ((F.v3786 == v261))) || ((F.v3786 == v282))) || ((F.v3786 == v267))) || ((F.v3786 == v285))) || ((F.v3786 == v276))) || ((F.v3786 == v279)));
return rv3791; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1451_ParseStatements(rt_int a_p1452) {
struct yf1453 F;
memset((void *)&F, 0, sizeof F);
F.p1452 = a_p1452;
F.v3795 = ((void *)0);
F.v3797 = ((void *)0);
F.v3799 = ((void *)0);
for (;;) {
while (yr1305_Accept(v579)) {
}
if (yr1446_IsStop()) {
goto yl_3802;
}
F.v3801 = INT64_C(0);
if (((F.p1452 && yr1294_IsIdAt(INT64_C(0))) && yr1281_IsAt(INT64_C(1), v582))) {
F.v3801 = yr1322_Ident();
yr1300_Skip();
}
F.v3799 = yr1457_ParseStatement();
((*(yR95 *)rt_nil_check(F.v3799))).f_text = F.v3801;
yr1252_Link(&F.v3795, &F.v3797, F.v3799);
if ((!yr1288_Is(v579))) {
goto yl_3802;
}
}
yl_3802: ;
{ void * rv3806 = F.v3795;
return rv3806; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1457_ParseStatement(void) {
struct yf1458 F;
memset((void *)&F, 0, sizeof F);
F.v3823 = yr1276_TLn();
if ((yr1266_TK() == v180)) {
F.v3821 = yr1271_TV();
if ((F.v3821 == v216)) {
yr1300_Skip();
F.v3809 = yr1245_NewNode(v690, F.v3823);
((*(yR95 *)rt_nil_check(F.v3809))).f_a = yr1513_ParseExpr();
{ void * rv3824 = F.v3809;
return rv3824; }
}
if ((F.v3821 == v321)) {
yr1300_Skip();
F.v3809 = yr1245_NewNode(v693, F.v3823);
((*(yR95 *)rt_nil_check(F.v3809))).f_name = yr1322_Ident();
{ void * rv3825 = F.v3809;
return rv3825; }
}
if ((F.v3821 == v303)) {
yr1300_Skip();
F.v3809 = yr1245_NewNode(v696, F.v3823);
((*(yR95 *)rt_nil_check(F.v3809))).f_name = yr1322_Ident();
{ void * rv3826 = F.v3809;
return rv3826; }
}
if ((F.v3821 == v411)) {
yr1300_Skip();
F.v3809 = yr1245_NewNode(v699, F.v3823);
if ((!((yr1288_Is(v579) || yr1446_IsStop())))) {
((*(yR95 *)rt_nil_check(F.v3809))).f_a = yr1513_ParseExpr();
}
{ void * rv3827 = F.v3809;
return rv3827; }
}
if ((F.v3821 == v438)) {
yr1300_Skip();
{ void * rv3828 = yr1245_NewNode(v702, F.v3823);
return rv3828; }
}
if ((F.v3821 == v396)) {
yr1300_Skip();
F.v3809 = yr1245_NewNode(v705, F.v3823);
if (yr1294_IsIdAt(INT64_C(0))) {
((*(yR95 *)rt_nil_check(F.v3809))).f_name = yr1322_Ident();
}
{ void * rv3830 = F.v3809;
return rv3830; }
}
if ((F.v3821 == v324)) {
yr1300_Skip();
F.v3809 = yr1245_NewNode(v708, F.v3823);
F.v3813 = ((void *)0);
F.v3811 = yr1245_NewNode(v726, F.v3823);
((*(yR95 *)rt_nil_check(F.v3811))).f_a = yr1513_ParseExpr();
yr1316_Expect(v441);
((*(yR95 *)rt_nil_check(F.v3811))).f_b = yr1451_ParseStatements(0);
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3809))).f_a, &F.v3813, F.v3811);
while (yr1288_Is(v255)) {
F.v3811 = yr1245_NewNode(v726, yr1276_TLn());
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3811))).f_a = yr1513_ParseExpr();
yr1316_Expect(v441);
((*(yR95 *)rt_nil_check(F.v3811))).f_b = yr1451_ParseStatements(0);
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3809))).f_a, &F.v3813, F.v3811);
}
if (yr1305_Accept(v252)) {
((*(yR95 *)rt_nil_check(F.v3809))).f_flag = INT64_C(1);
((*(yR95 *)rt_nil_check(F.v3809))).f_b = yr1451_ParseStatements(0);
}
yr1316_Expect(v270);
{ void * rv3835 = F.v3809;
return rv3835; }
}
if ((F.v3821 == v420)) {
yr1300_Skip();
F.v3809 = yr1245_NewNode(v711, F.v3823);
((*(yR95 *)rt_nil_check(F.v3809))).f_a = yr1513_ParseExpr();
F.v3813 = ((void *)0);
while (yr1288_Is(v237)) {
F.v3811 = yr1245_NewNode(v726, yr1276_TLn());
yr1300_Skip();
F.v3817 = ((void *)0);
for (;;) {
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3811))).f_a, &F.v3817, yr1513_ParseExpr());
if ((!yr1305_Accept(v576))) {
goto yl_3836;
}
}
yl_3836: ;
yr1316_Expect(v504);
((*(yR95 *)rt_nil_check(F.v3811))).f_b = yr1451_ParseStatements(0);
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3809))).f_b, &F.v3813, F.v3811);
}
if (yr1305_Accept(v252)) {
((*(yR95 *)rt_nil_check(F.v3809))).f_flag = INT64_C(1);
((*(yR95 *)rt_nil_check(F.v3809))).f_c = yr1451_ParseStatements(0);
}
yr1316_Expect(v291);
{ void * rv3840 = F.v3809;
return rv3840; }
}
if ((F.v3821 == v456)) {
yr1300_Skip();
F.v3809 = yr1245_NewNode(v714, F.v3823);
((*(yR95 *)rt_nil_check(F.v3809))).f_a = yr1513_ParseExpr();
yr1316_Expect(v249);
((*(yR95 *)rt_nil_check(F.v3809))).f_b = yr1451_ParseStatements(0);
yr1316_Expect(v297);
{ void * rv3842 = F.v3809;
return rv3842; }
}
if ((F.v3821 == v315)) {
yr1300_Skip();
F.v3809 = yr1245_NewNode(v717, F.v3823);
((*(yR95 *)rt_nil_check(F.v3809))).f_name = yr1322_Ident();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3809))).f_a = yr1416_ParseRep();
yr1316_Expect(v249);
((*(yR95 *)rt_nil_check(F.v3809))).f_b = yr1451_ParseStatements(0);
yr1316_Expect(v264);
{ void * rv3844 = F.v3809;
return rv3844; }
}
if ((F.v3821 == v345)) {
yr1300_Skip();
F.v3809 = yr1245_NewNode(v720, F.v3823);
((*(yR95 *)rt_nil_check(F.v3809))).f_name = yr1322_Ident();
((*(yR95 *)rt_nil_check(F.v3809))).f_b = yr1451_ParseStatements(0);
yr1316_Expect(v273);
yr1327_CloseName(((*(yR95 *)rt_nil_check(F.v3809))).f_name, F.v3823);
{ void * rv3846 = F.v3809;
return rv3846; }
}
if ((((F.v3821 == v234)) || ((F.v3821 == v426)))) {
F.v3809 = yr1245_NewNode(v723, F.v3823);
if (yr1305_Accept(v426)) {
((*(yR95 *)rt_nil_check(F.v3809))).f_flag = INT64_C(1);
}
yr1316_Expect(v234);
((*(yR95 *)rt_nil_check(F.v3809))).f_a = yr1360_ParseBlock();
yr1316_Expect(v258);
{ void * rv3848 = F.v3809;
return rv3848; }
}
}
F.v3819 = yr1544_ParseDesignator();
if (yr1305_Accept(v501)) {
F.v3809 = yr1245_NewNode(v684, F.v3823);
((*(yR95 *)rt_nil_check(F.v3809))).f_a = F.v3819;
((*(yR95 *)rt_nil_check(F.v3809))).f_b = yr1513_ParseExpr();
{ void * rv3849 = F.v3809;
return rv3849; }
}
if ((!(((*(yR95 *)rt_nil_check(F.v3819))).f_kind == v750))) {
yr1124_FailS(F.v3823, y_str("expected a statement", 20));
}
F.v3809 = yr1245_NewNode(v687, F.v3823);
((*(yR95 *)rt_nil_check(F.v3809))).f_a = F.v3819;
{ void * rv3851 = F.v3809;
return rv3851; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1462_OpAt(void) {
struct yf1463 F;
memset((void *)&F, 0, sizeof F);
if ((((yr1266_TK() == v183)) || ((yr1266_TK() == v180)))) {
{ rt_int rv3853 = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
return rv3853; }
}
{ rt_int rv3855 = INT64_C(0);
return rv3855; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1467_IsRel(rt_int a_p1468) {
struct yf1469 F;
memset((void *)&F, 0, sizeof F);
F.p1468 = a_p1468;
{ rt_int rv3858 = ((((((((((((((((((((F.p1468 == v330)) || ((F.p1468 == v540))) || ((F.p1468 == v555))) || ((F.p1468 == v558))) || ((F.p1468 == v510))) || ((F.p1468 == v561))) || ((F.p1468 == v513))) || ((F.p1468 == v516))) || ((F.p1468 == v471))) || ((F.p1468 == v519))) || ((F.p1468 == v474))) || ((F.p1468 == v522))) || ((F.p1468 == v483))) || ((F.p1468 == v477))) || ((F.p1468 == v465))) || ((F.p1468 == v525))) || ((F.p1468 == v486))) || ((F.p1468 == v480))) || ((F.p1468 == v468)));
return rv3858; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1473_IsAssocMul(rt_int a_p1474) {
struct yf1475 F;
memset((void *)&F, 0, sizeof F);
F.p1474 = a_p1474;
{ rt_int rv3861 = (((F.p1474 == v549)) || ((F.p1474 == v207)));
return rv3861; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1479_IsNonAssocMul(rt_int a_p1480) {
struct yf1481 F;
memset((void *)&F, 0, sizeof F);
F.p1480 = a_p1480;
{ rt_int rv3864 = ((((((((F.p1480 == v552)) || ((F.p1480 == v246))) || ((F.p1480 == v348))) || ((F.p1480 == v528))) || ((F.p1480 == v489))) || ((F.p1480 == v531))) || ((F.p1480 == v492)));
return rv3864; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1485_IsAssocAdd(rt_int a_p1486) {
struct yf1487 F;
memset((void *)&F, 0, sizeof F);
F.p1486 = a_p1486;
{ rt_int rv3867 = (((F.p1486 == v543)) || ((F.p1486 == v369)));
return rv3867; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1491_IsNonAssocAdd(rt_int a_p1492) {
struct yf1493 F;
memset((void *)&F, 0, sizeof F);
F.p1492 = a_p1492;
{ rt_int rv3870 = (((((((F.p1492 == v546)) || ((F.p1492 == v459))) || ((F.p1492 == v534))) || ((F.p1492 == v495))) || ((F.p1492 == v537))) || ((F.p1492 == v498)));
return rv3870; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1497_Bin(rt_int a_p1498, void * a_p1499, void * a_p1500, rt_int a_p1501) {
struct yf1502 F;
memset((void *)&F, 0, sizeof F);
F.p1498 = a_p1498;
F.p1499 = a_p1499;
F.p1500 = a_p1500;
F.p1501 = a_p1501;
F.v3877 = yr1245_NewNode(v768, F.p1501);
((*(yR95 *)rt_nil_check(F.v3877))).f_name = F.p1498;
((*(yR95 *)rt_nil_check(F.v3877))).f_a = F.p1499;
((*(yR95 *)rt_nil_check(F.v3877))).f_b = F.p1500;
{ void * rv3878 = F.v3877;
return rv3878; }
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
F.v3883 = yr1016_SE();
yr1117_Fail(F.p1508, F.v3883);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1513_ParseExpr(void) {
struct yf1514 F;
memset((void *)&F, 0, sizeof F);
F.v3891 = yr1276_TLn();
F.v3887 = yr1518_ParseSimple();
F.v3889 = yr1462_OpAt();
if (yr1467_IsRel(F.v3889)) {
yr1300_Skip();
F.v3887 = yr1497_Bin(F.v3889, F.v3887, yr1518_ParseSimple(), F.v3891);
if (yr1467_IsRel(yr1462_OpAt())) {
yr1506_NeedParens(F.v3889, F.v3891);
}
}
{ void * rv3892 = F.v3887;
return rv3892; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1518_ParseSimple(void) {
struct yf1519 F;
memset((void *)&F, 0, sizeof F);
F.v3901 = yr1276_TLn();
if (yr1288_Is(v546)) {
yr1300_Skip();
F.v3897 = yr1245_NewNode(v765, F.v3901);
((*(yR95 *)rt_nil_check(F.v3897))).f_a = yr1523_ParseTerm();
F.v3899 = yr1462_OpAt();
if ((yr1485_IsAssocAdd(F.v3899) || yr1491_IsNonAssocAdd(F.v3899))) {
yr1506_NeedParens(rt_range(v546, INT64_C(0), INT64_C(4000000)), F.v3901);
}
{ void * rv3902 = F.v3897;
return rv3902; }
}
F.v3895 = yr1523_ParseTerm();
F.v3899 = yr1462_OpAt();
if (yr1491_IsNonAssocAdd(F.v3899)) {
yr1300_Skip();
F.v3895 = yr1497_Bin(F.v3899, F.v3895, yr1523_ParseTerm(), F.v3901);
if ((yr1485_IsAssocAdd(yr1462_OpAt()) || yr1491_IsNonAssocAdd(yr1462_OpAt()))) {
yr1506_NeedParens(F.v3899, F.v3901);
}
{ void * rv3903 = F.v3895;
return rv3903; }
}
while (yr1485_IsAssocAdd(F.v3899)) {
yr1300_Skip();
F.v3895 = yr1497_Bin(F.v3899, F.v3895, yr1523_ParseTerm(), F.v3901);
if (yr1491_IsNonAssocAdd(yr1462_OpAt())) {
yr1506_NeedParens(yr1462_OpAt(), F.v3901);
}
F.v3899 = yr1462_OpAt();
}
{ void * rv3904 = F.v3895;
return rv3904; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1523_ParseTerm(void) {
struct yf1524 F;
memset((void *)&F, 0, sizeof F);
F.v3911 = yr1276_TLn();
F.v3907 = yr1539_ParseFactor();
F.v3909 = yr1462_OpAt();
if (yr1479_IsNonAssocMul(F.v3909)) {
yr1300_Skip();
F.v3907 = yr1497_Bin(F.v3909, F.v3907, yr1539_ParseFactor(), F.v3911);
if ((yr1473_IsAssocMul(yr1462_OpAt()) || yr1479_IsNonAssocMul(yr1462_OpAt()))) {
yr1506_NeedParens(F.v3909, F.v3911);
}
{ void * rv3912 = F.v3907;
return rv3912; }
}
while (yr1473_IsAssocMul(F.v3909)) {
yr1300_Skip();
F.v3907 = yr1497_Bin(F.v3909, F.v3907, yr1539_ParseFactor(), F.v3911);
if (yr1479_IsNonAssocMul(yr1462_OpAt())) {
yr1506_NeedParens(yr1462_OpAt(), F.v3911);
}
F.v3909 = yr1462_OpAt();
}
{ void * rv3913 = F.v3907;
return rv3913; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1528_IsLiteralAt(rt_int a_p1529) {
struct yf1530 F;
memset((void *)&F, 0, sizeof F);
F.p1529 = a_p1529;
F.v3917 = ((rt_int *)(v1153).p)[y_ix1(v1153, rt_add(v1234, F.p1529))];
{ rt_int rv3919 = (((((((F.v3917 == v186)) || ((F.v3917 == v189))) || ((F.v3917 == v192))) || ((F.v3917 == v195))) || ((F.v3917 == v198))) || yr1281_IsAt(F.p1529, v357));
return rv3919; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1534_ParseLiteral(void) {
struct yf1535 F;
memset((void *)&F, 0, sizeof F);
F.v3924 = yr1266_TK();
F.v3926 = yr1276_TLn();
if ((F.v3924 == v186)) {
F.v3922 = yr1245_NewNode(v729, F.v3926);
((*(yR95 *)rt_nil_check(F.v3922))).f_ival = yr1271_TV();
} else if ((F.v3924 == v189)) {
F.v3922 = yr1245_NewNode(v732, F.v3926);
((*(yR95 *)rt_nil_check(F.v3922))).f_text = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v3924 == v192)) {
F.v3922 = yr1245_NewNode(v735, F.v3926);
((*(yR95 *)rt_nil_check(F.v3922))).f_text = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v3924 == v195)) {
F.v3922 = yr1245_NewNode(v738, F.v3926);
((*(yR95 *)rt_nil_check(F.v3922))).f_text = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v3924 == v198)) {
F.v3922 = yr1245_NewNode(v741, F.v3926);
((*(yR95 *)rt_nil_check(F.v3922))).f_text = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
} else {
F.v3922 = yr1245_NewNode(v744, F.v3926);
}
yr1300_Skip();
{ void * rv3927 = F.v3922;
return rv3927; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1539_ParseFactor(void) {
struct yf1540 F;
memset((void *)&F, 0, sizeof F);
F.v3934 = yr1276_TLn();
if (yr1288_Is(v360)) {
yr1300_Skip();
F.v3930 = yr1245_NewNode(v762, F.v3934);
((*(yR95 *)rt_nil_check(F.v3930))).f_a = yr1539_ParseFactor();
{ void * rv3935 = F.v3930;
return rv3935; }
}
if (yr1288_Is(v564)) {
yr1300_Skip();
F.v3930 = yr1245_NewNode(v771, F.v3934);
((*(yR95 *)rt_nil_check(F.v3930))).f_a = yr1513_ParseExpr();
yr1316_Expect(v567);
{ void * rv3936 = F.v3930;
return rv3936; }
}
if (yr1528_IsLiteralAt(INT64_C(0))) {
{ void * rv3938 = yr1534_ParseLiteral();
return rv3938; }
}
if (yr1294_IsIdAt(INT64_C(0))) {
if ((yr1528_IsLiteralAt(INT64_C(1)) || ((yr1294_IsIdAt(INT64_C(1)) && (!((((((yr1281_IsAt(INT64_C(2), v564) || yr1281_IsAt(INT64_C(2), v570)) || yr1281_IsAt(INT64_C(2), v585)) || yr1281_IsAt(INT64_C(2), v588)) || yr1281_IsAt(INT64_C(2), v501)) || yr1281_IsAt(INT64_C(2), v582)))))))) {
F.v3932 = yr1322_Ident();
if (yr1294_IsIdAt(INT64_C(0))) {
F.v3930 = yr1245_NewNode(v747, F.v3934);
((*(yR95 *)rt_nil_check(F.v3930))).f_name = yr1322_Ident();
} else {
F.v3930 = yr1534_ParseLiteral();
}
((*(yR95 *)rt_nil_check(F.v3930))).f_d = yr1245_NewNode(v639, F.v3934);
((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v3930))).f_d))).f_name = F.v3932;
{ void * rv3949 = F.v3930;
return rv3949; }
}
{ void * rv3950 = yr1544_ParseDesignator();
return rv3950; }
}
yr1132_FailN(F.v3934, yr1311_TokText(), y_str(" cannot begin an operand", 24));
{ void * rv3952 = ((void *)0);
return rv3952; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1544_ParseDesignator(void) {
struct yf1545 F;
memset((void *)&F, 0, sizeof F);
F.v3961 = yr1276_TLn();
F.v3955 = yr1245_NewNode(v747, F.v3961);
((*(yR95 *)rt_nil_check(F.v3955))).f_name = yr1322_Ident();
if (yr1305_Accept(v564)) {
((*(yR95 *)rt_nil_check(F.v3955))).f_kind = v750;
F.v3959 = ((void *)0);
while ((!yr1288_Is(v567))) {
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3955))).f_a, &F.v3959, yr1513_ParseExpr());
if ((!yr1305_Accept(v576))) {
yr1549_EXIT_ARGS();
}
}
yr1316_Expect(v567);
}
for (;;) {
if (yr1305_Accept(v585)) {
F.v3957 = yr1245_NewNode(v753, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3957))).f_a = F.v3955;
((*(yR95 *)rt_nil_check(F.v3957))).f_name = yr1322_Ident();
F.v3955 = F.v3957;
} else if (yr1305_Accept(v570)) {
F.v3957 = yr1245_NewNode(v756, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3957))).f_a = F.v3955;
F.v3959 = ((void *)0);
for (;;) {
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3957))).f_b, &F.v3959, yr1513_ParseExpr());
if ((!yr1305_Accept(v576))) {
goto yl_3963;
}
}
yl_3963: ;
yr1316_Expect(v573);
F.v3955 = F.v3957;
} else if (yr1305_Accept(v588)) {
F.v3957 = yr1245_NewNode(v759, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3957))).f_a = F.v3955;
F.v3955 = F.v3957;
} else {
goto yl_3962;
}
}
yl_3962: ;
{ void * rv3964 = F.v3955;
return rv3964; }
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
F.v3968 = ((void *)0);
F.v3970 = ((void *)0);
while ((!(yr1266_TK() == v174))) {
if ((!((yr1288_Is(v351) || yr1288_Is(v354))))) {
yr1124_FailS(yr1276_TLn(), y_str("a segment is a module (XIII.A)", 30));
}
yr1252_Link(&F.v3968, &F.v3970, yr1350_ParseModule());
while (yr1305_Accept(v579)) {
}
}
{ void * rv3972 = F.v3968;
return rv3972; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1588_NewSym(rt_int a_p1589, rt_int a_p1590) {
struct yf1591 F;
memset((void *)&F, 0, sizeof F);
F.p1589 = a_p1589;
F.p1590 = a_p1590;
({ F.v3977 = rt_alloc(sizeof(yR115)); });
(*(yR115 *)rt_nil_check(F.v3977)) = ((yR115){ .f_kind = F.p1589, .f_name = F.p1590, .f_rep = ((void *)0), .f_cname = INT64_C(0), .f_level = INT64_C(0), .f_byref = 0, .f_readonly = 0, .f_mval = INT64_C(0), .f_hasmv = 0, .f_params = ((void *)0), .f_nparams = INT64_C(0), .f_ret = ((void *)0), .f_func = 0, .f_decl = ((void *)0), .f_depth = INT64_C(0), .f_target = ((void *)0), .f_members = ((void *)0), .f_mnext = ((void *)0), .f_chain = ((void *)0), .f_stack = ((void *)0), .f_alt = ((void *)0), .f_monitor = ((void *)0), .f_serial = INT64_C(0) });
((*(yR115 *)rt_nil_check(F.v3977))).f_serial = yr1141_NewSerial();
{ void * rv3988 = F.v3977;
return rv3988; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1595_OpenScope(rt_int a_p1596) {
struct yf1597 F;
memset((void *)&F, 0, sizeof F);
F.p1596 = a_p1596;
({ F.v3992 = rt_alloc(sizeof(yR120)); });
(*(yR120 *)rt_nil_check(F.v3992)) = ((yR120){ .f_syms = ((void *)0), .f_closed = F.p1596, .f_module = ((void *)0), .f_level = v1576, .f_deferred = ((void *)0), .f_up = ((void *)0) });
if ((v1570 >= INT64_C(0))) {
((*(yR120 *)rt_nil_check(F.v3992))).f_up = ((void * *)(v1568).p)[y_ix1(v1568, v1570)];
}
v1570 = rt_range(rt_add(v1570, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1568).p)[y_ix1(v1568, v1570)] = F.v3992;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1601_CloseScope(void) {
struct yf1602 F;
memset((void *)&F, 0, sizeof F);
F.v3998 = ((*(yR120 *)rt_nil_check(((void * *)(v1568).p)[y_ix1(v1568, v1570)]))).f_syms;
while ((!(F.v3998 == ((void *)0)))) {
F.v4004 = rt_range(rt_mod(((*(yR115 *)rt_nil_check(F.v3998))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4000 = ((void * *)(v1559).p)[y_ix1(v1559, F.v4004)];
F.v4002 = ((void *)0);
while ((((!(F.v4000 == ((void *)0)))) && ((!(F.v4000 == F.v3998))))) {
F.v4002 = F.v4000;
F.v4000 = ((*(yR115 *)rt_nil_check(F.v4000))).f_chain;
}
if ((F.v4000 == F.v3998)) {
if ((F.v4002 == ((void *)0))) {
((void * *)(v1559).p)[y_ix1(v1559, F.v4004)] = ((*(yR115 *)rt_nil_check(F.v3998))).f_chain;
} else {
((*(yR115 *)rt_nil_check(F.v4002))).f_chain = ((*(yR115 *)rt_nil_check(F.v3998))).f_chain;
}
}
F.v3998 = ((*(yR115 *)rt_nil_check(F.v3998))).f_stack;
}
v1570 = rt_range(rt_sub(v1570, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1606_Visible(void * a_p1607) {
struct yf1608 F;
memset((void *)&F, 0, sizeof F);
F.p1607 = a_p1607;
{ rt_int rv4012 = (((((*(yR115 *)rt_nil_check(F.p1607))).f_depth >= v1573)) || ((((*(yR115 *)rt_nil_check(F.p1607))).f_depth == INT64_C(0))));
return rv4012; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1612_Find(rt_int a_p1613) {
struct yf1614 F;
memset((void *)&F, 0, sizeof F);
F.p1613 = a_p1613;
F.v4016 = ((void * *)(v1559).p)[y_ix1(v1559, rt_mod(F.p1613, INT64_C(8192)))];
while ((!(F.v4016 == ((void *)0)))) {
if ((((((*(yR115 *)rt_nil_check(F.v4016))).f_name == F.p1613)) && yr1606_Visible(F.v4016))) {
{ void * rv4019 = F.v4016;
return rv4019; }
}
F.v4016 = ((*(yR115 *)rt_nil_check(F.v4016))).f_chain;
}
{ void * rv4020 = ((void *)0);
return rv4020; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1618_FindHere(rt_int a_p1619) {
struct yf1620 F;
memset((void *)&F, 0, sizeof F);
F.p1619 = a_p1619;
F.v4024 = ((void * *)(v1559).p)[y_ix1(v1559, rt_mod(F.p1619, INT64_C(8192)))];
while ((!(F.v4024 == ((void *)0)))) {
if ((((((*(yR115 *)rt_nil_check(F.v4024))).f_name == F.p1619)) && ((((*(yR115 *)rt_nil_check(F.v4024))).f_depth == v1570)))) {
{ void * rv4027 = F.v4024;
return rv4027; }
}
F.v4024 = ((*(yR115 *)rt_nil_check(F.v4024))).f_chain;
}
{ void * rv4028 = ((void *)0);
return rv4028; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1624_Lookup(rt_int a_p1625, rt_int a_p1626) {
struct yf1627 F;
memset((void *)&F, 0, sizeof F);
F.p1625 = a_p1625;
F.p1626 = a_p1626;
F.v4033 = yr1612_Find(F.p1625);
if ((F.v4033 == ((void *)0))) {
yr1132_FailN(F.p1626, F.p1625, y_str(" is not declared here", 21));
}
if ((((*(yR115 *)rt_nil_check(F.v4033))).f_kind == v864)) {
F.v4035 = ((*(yR115 *)rt_nil_check(F.v4033))).f_chain;
while ((!(F.v4035 == ((void *)0)))) {
if (((((((((*(yR115 *)rt_nil_check(F.v4035))).f_name == F.p1625)) && ((((*(yR115 *)rt_nil_check(F.v4035))).f_depth == ((*(yR115 *)rt_nil_check(F.v4033))).f_depth))) && ((((*(yR115 *)rt_nil_check(F.v4035))).f_kind == v864))) && ((!(yr1677_Real(F.v4035) == yr1677_Real(F.v4033))))) && ((!(((*(yR115 *)rt_nil_check(yr1677_Real(F.v4033)))).f_kind == v843))))) {
yr1132_FailN(F.p1626, F.p1625, y_str(" is exported here by two modules: name it with FROM (X.B.4)", 59));
}
F.v4035 = ((*(yR115 *)rt_nil_check(F.v4035))).f_chain;
}
}
{ void * rv4038 = F.v4033;
return rv4038; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1631_Ambiguous(void * a_p1632) {
struct yf1633 F;
memset((void *)&F, 0, sizeof F);
F.p1632 = a_p1632;
F.v4042 = ((*(yR115 *)rt_nil_check(F.p1632))).f_chain;
while ((!(F.v4042 == ((void *)0)))) {
if ((((((((*(yR115 *)rt_nil_check(F.v4042))).f_name == ((*(yR115 *)rt_nil_check(F.p1632))).f_name)) && yr1606_Visible(F.v4042)) && ((((*(yR115 *)rt_nil_check(F.v4042))).f_kind == v843))) && ((!(((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4042))).f_rep))).f_tid == ((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.p1632))).f_rep))).f_tid))))) {
{ rt_int rv4044 = 1;
return rv4044; }
}
F.v4042 = ((*(yR115 *)rt_nil_check(F.v4042))).f_chain;
}
{ rt_int rv4046 = 0;
return rv4046; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1637_FindLit(rt_int a_p1638, void * a_p1639) {
struct yf1640 F;
memset((void *)&F, 0, sizeof F);
F.p1638 = a_p1638;
F.p1639 = a_p1639;
F.v4051 = ((void * *)(v1559).p)[y_ix1(v1559, rt_mod(F.p1638, INT64_C(8192)))];
while ((!(F.v4051 == ((void *)0)))) {
if ((((*(yR115 *)rt_nil_check(F.v4051))).f_name == F.p1638)) {
if ((((((*(yR115 *)rt_nil_check(yr1677_Real(F.v4051)))).f_kind == v843)) && ((((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(yr1677_Real(F.v4051)))).f_rep))).f_tid == ((*(yR100 *)rt_nil_check(F.p1639))).f_tid)))) {
{ void * rv4054 = F.v4051;
return rv4054; }
}
}
F.v4051 = ((*(yR115 *)rt_nil_check(F.v4051))).f_chain;
}
{ void * rv4055 = ((void *)0);
return rv4055; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1644_Define(void * a_p1645, rt_int a_p1646) {
struct yf1647 F;
memset((void *)&F, 0, sizeof F);
F.p1645 = a_p1645;
F.p1646 = a_p1646;
F.v4060 = yr1618_FindHere(((*(yR115 *)rt_nil_check(F.p1645))).f_name);
F.v4062 = rt_range(rt_mod(((*(yR115 *)rt_nil_check(F.p1645))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((((!(F.v4060 == ((void *)0)))) && (!((((((*(yR115 *)rt_nil_check(F.v4060))).f_kind == v843)) && ((((*(yR115 *)rt_nil_check(F.p1645))).f_kind == v843)))))) && (!(((((((*(yR115 *)rt_nil_check(F.p1645))).f_kind == v846)) && ((!(((*(yR115 *)rt_nil_check(F.p1645))).f_alt == ((void *)0))))) && ((((*(yR115 *)rt_nil_check(F.p1645))).f_alt == yr1677_Real(F.v4060))))))) && (!((((((*(yR115 *)rt_nil_check(F.p1645))).f_kind == v864)) && ((((*(yR115 *)rt_nil_check(F.v4060))).f_kind == v864))))))) {
yr1132_FailN(F.p1646, ((*(yR115 *)rt_nil_check(F.p1645))).f_name, y_str(" is declared twice in this scope", 32));
}
((*(yR115 *)rt_nil_check(F.p1645))).f_depth = v1570;
((*(yR115 *)rt_nil_check(F.p1645))).f_chain = ((void * *)(v1559).p)[y_ix1(v1559, F.v4062)];
((void * *)(v1559).p)[y_ix1(v1559, F.v4062)] = F.p1645;
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
F.v4070 = rt_range(rt_sub(v1576, F.p1652), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.p1652 == INT64_C(0))) {
{ rt_int rv4073 = F.p1653;
return rv4073; }
}
yr986_SB();
if ((F.v4070 == INT64_C(0))) {
yr997_SA(y_str("F.", 2));
} else {
yr997_SA(y_str("F.up->", 6));
while ((F.v4070 > INT64_C(1))) {
yr997_SA(y_str("up->", 4));
F.v4070 = rt_range(rt_sub(F.v4070, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1004_ST(F.p1653);
{ rt_int rv4081 = yr1016_SE();
return rv4081; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1658_FramePtr(rt_int a_p1659) {
struct yf1660 F;
memset((void *)&F, 0, sizeof F);
F.p1659 = a_p1659;
F.v4085 = rt_range(rt_sub(v1576, F.p1659), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.v4085 == INT64_C(0))) {
{ rt_int rv4089 = yr1021_T(y_str("&F", 2));
return rv4089; }
}
yr986_SB();
yr997_SA(y_str("F.up", 4));
while ((F.v4085 > INT64_C(1))) {
yr997_SA(y_str("->up", 4));
F.v4085 = rt_range(rt_sub(F.v4085, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv4095 = yr1016_SE();
return rv4095; }
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
F.v4100 = yr1016_SE();
if ((v1576 == INT64_C(0))) {
yr1070_Put(&v948, F.v4100);
} else {
yr1070_Put(&v958, F.v4100);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1671_SymPath(void * a_p1672) {
struct yf1673 F;
memset((void *)&F, 0, sizeof F);
F.p1672 = a_p1672;
F.v4109 = yr1651_Path(((*(yR115 *)rt_nil_check(F.p1672))).f_level, ((*(yR115 *)rt_nil_check(F.p1672))).f_cname);
if (((*(yR115 *)rt_nil_check(F.p1672))).f_byref) {
yr986_SB();
yr997_SA(y_str("(*", 2));
yr1004_ST(F.v4109);
yr997_SA(y_str(")", 1));
{ rt_int rv4112 = yr1016_SE();
return rv4112; }
}
{ rt_int rv4113 = F.v4109;
return rv4113; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1677_Real(void * a_p1678) {
struct yf1679 F;
memset((void *)&F, 0, sizeof F);
F.p1678 = a_p1678;
F.v4117 = F.p1678;
while ((((*(yR115 *)rt_nil_check(F.v4117))).f_kind == v864)) {
F.v4117 = ((*(yR115 *)rt_nil_check(F.v4117))).f_target;
}
{ void * rv4118 = F.v4117;
return rv4118; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1707_NewRep(rt_int a_p1708, rt_int a_p1709) {
struct yf1710 F;
memset((void *)&F, 0, sizeof F);
F.p1708 = a_p1708;
F.p1709 = a_p1709;
({ F.v4123 = rt_alloc(sizeof(yR100)); });
(*(yR100 *)rt_nil_check(F.v4123)) = ((yR100){ .f_kind = F.p1708, .f_tid = F.p1709, .f_tname = F.p1709, .f_lo = INT64_C(0), .f_hi = INT64_C(0), .f_mlo = INT64_C(0), .f_mhi = INT64_C(0), .f_hasm = 0, .f_scale = INT64_C(0), .f_prec = INT64_C(0), .f_elem = ((void *)0), .f_idx = ((void *)0), .f_nidx = INT64_C(0), .f_link = ((void *)0), .f_lits = ((void *)0), .f_nlits = INT64_C(0), .f_fields = ((void *)0), .f_selector = ((void *)0), .f_cname = INT64_C(0), .f_dname = INT64_C(0), .f_dlevel = INT64_C(0), .f_deep = 0, .f_abstract = 0, .f_opaque = 0, .f_opaqueops = INT64_C(0), .f_ordered = 0, .f_forward = INT64_C(0), .f_fwdscope = INT64_C(0), .f_monitor = ((void *)0), .f_serial = INT64_C(0) });
((*(yR100 *)rt_nil_check(F.v4123))).f_serial = yr1141_NewSerial();
{ void * rv4144 = F.v4123;
return rv4144; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1714_CopyRep(void * a_p1715) {
struct yf1716 F;
memset((void *)&F, 0, sizeof F);
F.p1715 = a_p1715;
({ F.v4148 = rt_alloc(sizeof(yR100)); });
(*(yR100 *)rt_nil_check(F.v4148)) = (*(yR100 *)rt_nil_check(F.p1715));
((*(yR100 *)rt_nil_check(F.v4148))).f_serial = yr1141_NewSerial();
{ void * rv4149 = F.v4148;
return rv4149; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1720_IsDiscrete(void * a_p1721) {
struct yf1722 F;
memset((void *)&F, 0, sizeof F);
F.p1721 = a_p1721;
{ rt_int rv4152 = (((((((*(yR100 *)rt_nil_check(F.p1721))).f_kind == v774)) || ((((*(yR100 *)rt_nil_check(F.p1721))).f_kind == v783))) || ((((*(yR100 *)rt_nil_check(F.p1721))).f_kind == v786))) || ((((*(yR100 *)rt_nil_check(F.p1721))).f_kind == v789)));
return rv4152; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1726_IsNumeric(void * a_p1727) {
struct yf1728 F;
memset((void *)&F, 0, sizeof F);
F.p1727 = a_p1727;
{ rt_int rv4155 = ((((((*(yR100 *)rt_nil_check(F.p1727))).f_kind == v774)) || ((((*(yR100 *)rt_nil_check(F.p1727))).f_kind == v777))) || ((((*(yR100 *)rt_nil_check(F.p1727))).f_kind == v780)));
return rv4155; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1732_IsArrayLike(void * a_p1733) {
struct yf1734 F;
memset((void *)&F, 0, sizeof F);
F.p1733 = a_p1733;
{ rt_int rv4158 = ((((((*(yR100 *)rt_nil_check(F.p1733))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.p1733))).f_kind == v813))) || ((((*(yR100 *)rt_nil_check(F.p1733))).f_kind == v816)));
return rv4158; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1738_IsString(void * a_p1739) {
struct yf1740 F;
memset((void *)&F, 0, sizeof F);
F.p1739 = a_p1739;
if ((((*(yR100 *)rt_nil_check(F.p1739))).f_kind == v816)) {
{ rt_int rv4162 = 1;
return rv4162; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1739))).f_kind == v792)) && ((((*(yR100 *)rt_nil_check(F.p1739))).f_nidx == INT64_C(1))))) {
{ rt_int rv4164 = (((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p1739))).f_elem))).f_kind == v789);
return rv4164; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1739))).f_kind == v813)) && ((((*(yR100 *)rt_nil_check(F.p1739))).f_nidx == INT64_C(1))))) {
{ rt_int rv4166 = (((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p1739))).f_elem))).f_kind == v789);
return rv4166; }
}
{ rt_int rv4168 = 0;
return rv4168; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1744_Deep(void * a_p1745) {
struct yf1746 F;
memset((void *)&F, 0, sizeof F);
F.p1745 = a_p1745;
if (((((((*(yR100 *)rt_nil_check(F.p1745))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.p1745))).f_kind == v813))) || ((((*(yR100 *)rt_nil_check(F.p1745))).f_kind == v816)))) {
{ rt_int rv4172 = 1;
return rv4172; }
}
{ rt_int rv4173 = (((((*(yR100 *)rt_nil_check(F.p1745))).f_kind == v795)) && ((*(yR100 *)rt_nil_check(F.p1745))).f_deep);
return rv4173; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1750_CType(void * a_p1751) {
struct yf1752 F;
memset((void *)&F, 0, sizeof F);
F.p1751 = a_p1751;
F.v4177 = ((*(yR100 *)rt_nil_check(F.p1751))).f_kind;
if (((((F.v4177 == v774)) || ((F.v4177 == v783))) || ((F.v4177 == v786)))) {
{ rt_int rv4179 = yr1021_T(y_str("rt_int", 6));
return rv4179; }
}
if ((F.v4177 == v789)) {
{ rt_int rv4181 = yr1021_T(y_str("unsigned char", 13));
return rv4181; }
}
if ((((F.v4177 == v780)) || ((F.v4177 == v777)))) {
{ rt_int rv4183 = yr1021_T(y_str("double", 6));
return rv4183; }
}
if (((((F.v4177 == v792)) || ((F.v4177 == v813))) || ((F.v4177 == v816)))) {
{ rt_int rv4185 = yr1021_T(y_str("yarr", 4));
return rv4185; }
}
if ((F.v4177 == v795)) {
{ rt_int rv4186 = ((*(yR100 *)rt_nil_check(F.p1751))).f_cname;
return rv4186; }
}
if ((((F.v4177 == v798)) || ((F.v4177 == v819)))) {
{ rt_int rv4188 = yr1021_T(y_str("void *", 6));
return rv4188; }
}
if ((F.v4177 == v801)) {
{ rt_int rv4190 = yr1021_T(y_str("yfile *", 7));
return rv4190; }
}
if ((F.v4177 == v804)) {
{ rt_int rv4192 = yr1021_T(y_str("yset", 4));
return rv4192; }
}
if ((F.v4177 == v807)) {
{ rt_int rv4194 = yr1021_T(y_str("ysig", 4));
return rv4194; }
}
if ((F.v4177 == v810)) {
{ rt_int rv4196 = yr1021_T(y_str("rt_lock", 7));
return rv4196; }
}
{ rt_int rv4198 = yr1021_T(y_str("void", 4));
return rv4198; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1756_DescOf(void * a_p1757) {
struct yf1758 F;
memset((void *)&F, 0, sizeof F);
F.p1757 = a_p1757;
F.v4202 = ((*(yR100 *)rt_nil_check(F.p1757))).f_kind;
if (((((F.v4202 == v774)) || ((F.v4202 == v783))) || ((F.v4202 == v786)))) {
{ rt_int rv4204 = yr1021_T(y_str("&y_d_int", 8));
return rv4204; }
}
if ((F.v4202 == v789)) {
{ rt_int rv4206 = yr1021_T(y_str("&y_d_byte", 9));
return rv4206; }
}
if ((((F.v4202 == v780)) || ((F.v4202 == v777)))) {
{ rt_int rv4208 = yr1021_T(y_str("&y_d_float", 10));
return rv4208; }
}
if ((((F.v4202 == v798)) || ((F.v4202 == v819)))) {
{ rt_int rv4210 = yr1021_T(y_str("&y_d_ptr", 8));
return rv4210; }
}
if ((F.v4202 == v804)) {
{ rt_int rv4212 = yr1021_T(y_str("&y_d_set", 8));
return rv4212; }
}
if ((((F.v4202 == v792)) || ((F.v4202 == v795)))) {
yr986_SB();
yr997_SA(y_str("&", 1));
yr1004_ST(yr1651_Path(((*(yR100 *)rt_nil_check(F.p1757))).f_dlevel, ((*(yR100 *)rt_nil_check(F.p1757))).f_dname));
{ rt_int rv4214 = yr1016_SE();
return rv4214; }
}
if ((F.v4202 == v816)) {
{ rt_int rv4216 = yr1021_T(y_str("&y_d_str", 8));
return rv4216; }
}
{ rt_int rv4218 = yr1021_T(y_str("&y_d_opaque", 11));
return rv4218; }
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
{ rt_int rv4227 = 1;
return rv4227; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1769))).f_kind == v816)) && yr1738_IsString(F.p1770))) {
{ rt_int rv4229 = 1;
return rv4229; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1770))).f_kind == v816)) && yr1738_IsString(F.p1769))) {
{ rt_int rv4231 = 1;
return rv4231; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1769))).f_kind == v819)) && ((((*(yR100 *)rt_nil_check(F.p1770))).f_kind == v798)))) {
{ rt_int rv4233 = 1;
return rv4233; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1770))).f_kind == v819)) && ((((*(yR100 *)rt_nil_check(F.p1769))).f_kind == v798)))) {
{ rt_int rv4235 = 1;
return rv4235; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1769))).f_kind == v828)) || ((((*(yR100 *)rt_nil_check(F.p1770))).f_kind == v828)))) {
{ rt_int rv4237 = 1;
return rv4237; }
}
{ rt_int rv4239 = 0;
return rv4239; }
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
F.v4245 = yr1016_SE();
yr1117_Fail(F.p1776, F.v4245);
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
{ rt_int rv4259 = (((*(yR95 *)rt_nil_check(F.p1799))).f_d == ((void *)0));
return rv4259; }
}
if ((((((*(yR95 *)rt_nil_check(F.p1799))).f_kind == v765)) || ((((*(yR95 *)rt_nil_check(F.p1799))).f_kind == v771)))) {
{ rt_int rv4260 = yr1798_IsLiteralNode(((*(yR95 *)rt_nil_check(F.p1799))).f_a);
return rv4260; }
}
{ rt_int rv4262 = 0;
return rv4262; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1804_StoreBounds(void * a_p1805, yarr a_p1807) {
struct yf1808 F;
memset((void *)&F, 0, sizeof F);
F.p1805 = a_p1805;
F.p1807 = a_p1807;
F.v4267 = yr1146_Fresh(y_str("lo", 2));
F.v4269 = yr1146_Fresh(y_str("hi", 2));
yr1664_DeclStorage(yr1021_T(F.p1807), F.v4267);
yr1664_DeclStorage(yr1021_T(F.p1807), F.v4269);
yr1092_Emit(yr2480_Join(yr1651_Path(v1576, F.v4267), yr1021_T(y_str(" = ", 3)), yr2480_Join(((*(yR100 *)rt_nil_check(F.p1805))).f_lo, yr1021_T(y_str(";", 1)), INT64_C(0))));
yr1092_Emit(yr2480_Join(yr1651_Path(v1576, F.v4269), yr1021_T(y_str(" = ", 3)), yr2480_Join(((*(yR100 *)rt_nil_check(F.p1805))).f_hi, yr1021_T(y_str(";", 1)), INT64_C(0))));
((*(yR100 *)rt_nil_check(F.p1805))).f_lo = F.v4267;
((*(yR100 *)rt_nil_check(F.p1805))).f_hi = F.v4269;
((*(yR100 *)rt_nil_check(F.p1805))).f_dname = F.v4267;
((*(yR100 *)rt_nil_check(F.p1805))).f_dlevel = v1576;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1812_LoText(void * a_p1813) {
struct yf1814 F;
memset((void *)&F, 0, sizeof F);
F.p1813 = a_p1813;
if ((((((!(((*(yR100 *)rt_nil_check(F.p1813))).f_dname == INT64_C(0)))) && ((!(((*(yR100 *)rt_nil_check(F.p1813))).f_lo == INT64_C(0))))) && ((!(((*(yR100 *)rt_nil_check(F.p1813))).f_kind == v792)))) && ((!(((*(yR100 *)rt_nil_check(F.p1813))).f_kind == v795))))) {
{ rt_int rv4282 = yr1651_Path(((*(yR100 *)rt_nil_check(F.p1813))).f_dlevel, ((*(yR100 *)rt_nil_check(F.p1813))).f_lo);
return rv4282; }
}
{ rt_int rv4283 = ((*(yR100 *)rt_nil_check(F.p1813))).f_lo;
return rv4283; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1818_HiText(void * a_p1819) {
struct yf1820 F;
memset((void *)&F, 0, sizeof F);
F.p1819 = a_p1819;
if ((((((!(((*(yR100 *)rt_nil_check(F.p1819))).f_dname == INT64_C(0)))) && ((!(((*(yR100 *)rt_nil_check(F.p1819))).f_hi == INT64_C(0))))) && ((!(((*(yR100 *)rt_nil_check(F.p1819))).f_kind == v792)))) && ((!(((*(yR100 *)rt_nil_check(F.p1819))).f_kind == v795))))) {
{ rt_int rv4288 = yr1651_Path(((*(yR100 *)rt_nil_check(F.p1819))).f_dlevel, ((*(yR100 *)rt_nil_check(F.p1819))).f_hi);
return rv4288; }
}
{ rt_int rv4289 = ((*(yR100 *)rt_nil_check(F.p1819))).f_hi;
return rv4289; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1824_Qualify(void * a_p1825, void * a_p1826) {
struct yf1827 F;
memset((void *)&F, 0, sizeof F);
F.p1825 = a_p1825;
F.p1826 = a_p1826;
yr2125_Expr(((*(yR95 *)rt_nil_check(F.p1826))).f_a, F.p1825, &F.v4294, &F.v4298);
yr2125_Expr(((*(yR95 *)rt_nil_check(F.p1826))).f_b, F.p1825, &F.v4296, &F.v4300);
if ((((((*(yR100 *)rt_nil_check(F.p1825))).f_kind == v780)) || ((((*(yR100 *)rt_nil_check(F.p1825))).f_kind == v777)))) {
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p1826))).f_line, F.p1825, F.v4298);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p1826))).f_line, F.p1825, F.v4300);
((*(yR100 *)rt_nil_check(F.p1825))).f_lo = F.v4294;
((*(yR100 *)rt_nil_check(F.p1825))).f_hi = F.v4296;
((*(yR100 *)rt_nil_check(F.p1825))).f_dname = INT64_C(0);
if ((!((yr1798_IsLiteralNode(((*(yR95 *)rt_nil_check(F.p1826))).f_a) && yr1798_IsLiteralNode(((*(yR95 *)rt_nil_check(F.p1826))).f_b))))) {
yr1804_StoreBounds(F.p1825, y_str("double", 6));
}
if ((((*(yR100 *)rt_nil_check(F.p1825))).f_kind == v780)) {
if ((((*(yR95 *)rt_nil_check(F.p1826))).f_d == ((void *)0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1826))).f_line, y_str("FLOATING needs PRECISION (VI.A.1.c)", 35));
}
yr2060_Manifest(((*(yR95 *)rt_nil_check(F.p1826))).f_d, &F.v4302, &F.v4304);
if ((!F.v4302)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1826))).f_line, y_str("PRECISION is a manifest constant", 32));
}
yr986_SB();
yr1010_SI(F.v4304);
((*(yR100 *)rt_nil_check(F.p1825))).f_prec = yr1016_SE();
} else {
if ((((*(yR95 *)rt_nil_check(F.p1826))).f_c == ((void *)0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1826))).f_line, y_str("FIXED needs SCALE (VI.A.1.b)", 28));
}
yr2125_Expr(((*(yR95 *)rt_nil_check(F.p1826))).f_c, F.p1825, &((*(yR100 *)rt_nil_check(F.p1825))).f_scale, &F.v4298);
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
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p1826))).f_line, F.p1825, F.v4298);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p1826))).f_line, F.p1825, F.v4300);
((*(yR100 *)rt_nil_check(F.p1825))).f_lo = F.v4294;
((*(yR100 *)rt_nil_check(F.p1825))).f_hi = F.v4296;
yr2060_Manifest(((*(yR95 *)rt_nil_check(F.p1826))).f_a, &F.v4302, &((*(yR100 *)rt_nil_check(F.p1825))).f_mlo);
((*(yR100 *)rt_nil_check(F.p1825))).f_hasm = F.v4302;
yr2060_Manifest(((*(yR95 *)rt_nil_check(F.p1826))).f_b, &F.v4302, &((*(yR100 *)rt_nil_check(F.p1825))).f_mhi);
((*(yR100 *)rt_nil_check(F.p1825))).f_hasm = (((*(yR100 *)rt_nil_check(F.p1825))).f_hasm && F.v4302);
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
F.v4319 = ((*(yR100 *)rt_nil_check(F.p1832))).f_lits;
F.v4323 = INT64_C(0);
while ((!(F.v4319 == ((void *)0)))) {
if ((!(yr1612_Find(((*(yR95 *)rt_nil_check(F.v4319))).f_name) == ((void *)0)))) {
F.v4321 = yr1612_Find(((*(yR95 *)rt_nil_check(F.v4319))).f_name);
if ((((!(((*(yR115 *)rt_nil_check(F.v4321))).f_kind == v843))) && ((((*(yR115 *)rt_nil_check(F.v4321))).f_depth == v1570)))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.v4319))).f_line, ((*(yR95 *)rt_nil_check(F.v4319))).f_name, y_str(" is declared twice in this scope", 32));
}
}
F.v4321 = yr1588_NewSym(v843, ((*(yR95 *)rt_nil_check(F.v4319))).f_name);
((*(yR115 *)rt_nil_check(F.v4321))).f_rep = F.p1832;
((*(yR115 *)rt_nil_check(F.v4321))).f_mval = F.v4323;
((*(yR115 *)rt_nil_check(F.v4321))).f_hasmv = 1;
yr1644_Define(F.v4321, ((*(yR95 *)rt_nil_check(F.v4319))).f_line);
F.v4323 = rt_range(rt_add(F.v4323, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4319 = ((*(yR95 *)rt_nil_check(F.v4319))).f_next;
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
F.v4338 = yr1141_NewSerial();
yr986_SB();
if ((!(F.p1846 == INT64_C(0)))) {
yr1004_ST(F.p1846);
} else {
yr997_SA(y_str("anonymous", 9));
}
yr997_SA(y_str("#", 1));
yr1010_SI(F.v4338);
{ rt_int rv4342 = yr1016_SE();
return rv4342; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1851_MakeRep(void * a_p1852, rt_int a_p1853, rt_int a_p1854) {
struct yf1855 F;
memset((void *)&F, 0, sizeof F);
F.p1852 = a_p1852;
F.p1853 = a_p1853;
F.p1854 = a_p1854;
F.v4358 = ((*(yR95 *)rt_nil_check(F.p1852))).f_kind;
F.v4362 = INT64_C(0);
F.v4364 = F.p1853;
if ((!(((*(yR95 *)rt_nil_check(F.p1852))).f_text == INT64_C(0)))) {
F.v4356 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(F.p1852))).f_text, ((*(yR95 *)rt_nil_check(F.p1852))).f_line));
if ((((!(((*(yR115 *)rt_nil_check(F.v4356))).f_kind == v840))) && ((!(((*(yR115 *)rt_nil_check(F.v4356))).f_kind == v837))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p1852))).f_line, ((*(yR95 *)rt_nil_check(F.p1852))).f_text, y_str(" is not a type", 14));
}
F.v4362 = ((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4356))).f_rep))).f_tid;
F.v4364 = ((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4356))).f_rep))).f_tname;
}
if ((F.v4358 == v642)) {
F.v4356 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(F.p1852))).f_name, ((*(yR95 *)rt_nil_check(F.p1852))).f_line));
if ((((!(((*(yR115 *)rt_nil_check(F.v4356))).f_kind == v840))) && ((!(((*(yR115 *)rt_nil_check(F.v4356))).f_kind == v837))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p1852))).f_line, ((*(yR95 *)rt_nil_check(F.p1852))).f_name, y_str(" is not a representation", 24));
}
F.v4348 = ((*(yR115 *)rt_nil_check(F.v4356))).f_rep;
if ((!(((*(yR95 *)rt_nil_check(F.p1852))).f_a == ((void *)0)))) {
F.v4348 = yr1714_CopyRep(F.v4348);
yr1824_Qualify(F.v4348, ((*(yR95 *)rt_nil_check(F.p1852))).f_a);
}
{ void * rv4369 = F.v4348;
return rv4369; }
}
if ((F.v4362 == INT64_C(0))) {
F.v4362 = yr1845_NewTid(F.p1853);
if ((F.v4364 == INT64_C(0))) {
F.v4364 = F.v4362;
}
}
if ((F.v4358 == v645)) {
F.v4348 = yr1707_NewRep(v786, F.v4362);
((*(yR100 *)rt_nil_check(F.v4348))).f_tname = F.v4364;
((*(yR100 *)rt_nil_check(F.v4348))).f_ordered = (((*(yR95 *)rt_nil_check(F.p1852))).f_flag == INT64_C(1));
((*(yR100 *)rt_nil_check(F.v4348))).f_lits = ((*(yR95 *)rt_nil_check(F.p1852))).f_a;
((*(yR100 *)rt_nil_check(F.v4348))).f_nlits = yr1260_Count(((*(yR95 *)rt_nil_check(F.p1852))).f_a);
yr1837_SetRange(F.v4348, INT64_C(0), rt_range(rt_sub(((*(yR100 *)rt_nil_check(F.v4348))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1831_DefineLits(F.v4348);
if ((!(((*(yR95 *)rt_nil_check(F.p1852))).f_b == ((void *)0)))) {
yr1824_Qualify(F.v4348, ((*(yR95 *)rt_nil_check(F.p1852))).f_b);
}
{ void * rv4376 = F.v4348;
return rv4376; }
}
if ((F.v4358 == v648)) {
F.v4348 = yr1707_NewRep(v789, F.v4362);
((*(yR100 *)rt_nil_check(F.v4348))).f_tname = F.v4364;
((*(yR100 *)rt_nil_check(F.v4348))).f_ordered = 1;
((*(yR100 *)rt_nil_check(F.v4348))).f_lits = ((*(yR95 *)rt_nil_check(F.p1852))).f_a;
((*(yR100 *)rt_nil_check(F.v4348))).f_nlits = yr1260_Count(((*(yR95 *)rt_nil_check(F.p1852))).f_a);
if ((((*(yR100 *)rt_nil_check(F.v4348))).f_nlits > INT64_C(256))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1852))).f_line, y_str("this implementation takes alphabets of up to 256 characters", 59));
}
yr1837_SetRange(F.v4348, INT64_C(0), rt_range(rt_sub(((*(yR100 *)rt_nil_check(F.v4348))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((!(((*(yR95 *)rt_nil_check(F.p1852))).f_b == ((void *)0)))) {
yr1824_Qualify(F.v4348, ((*(yR95 *)rt_nil_check(F.p1852))).f_b);
}
{ void * rv4383 = F.v4348;
return rv4383; }
}
if ((F.v4358 == v651)) {
F.v4348 = yr1707_NewRep(v792, F.v4362);
((*(yR100 *)rt_nil_check(F.v4348))).f_tname = F.v4364;
F.v4360 = ((*(yR95 *)rt_nil_check(F.p1852))).f_a;
F.v4354 = ((void *)0);
while ((!(F.v4360 == ((void *)0)))) {
F.v4352 = yr1714_CopyRep(yr1851_MakeRep(F.v4360, INT64_C(0), 0));
if ((!yr1720_IsDiscrete(F.v4352))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v4360))).f_line, y_str("an index is an integer or scalar representation", 47));
}
yr1791_CheckRepresented(F.v4352, ((*(yR95 *)rt_nil_check(F.v4360))).f_line);
((*(yR100 *)rt_nil_check(F.v4352))).f_link = ((void *)0);
if ((F.v4354 == ((void *)0))) {
((*(yR100 *)rt_nil_check(F.v4348))).f_idx = F.v4352;
} else {
((*(yR100 *)rt_nil_check(F.v4354))).f_link = F.v4352;
}
F.v4354 = F.v4352;
((*(yR100 *)rt_nil_check(F.v4348))).f_nidx = rt_range(rt_add(((*(yR100 *)rt_nil_check(F.v4348))).f_nidx, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4360 = ((*(yR95 *)rt_nil_check(F.v4360))).f_next;
}
if ((((*(yR100 *)rt_nil_check(F.v4348))).f_nidx > INT64_C(4))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1852))).f_line, y_str("this implementation takes arrays of up to 4 dimensions", 54));
}
((*(yR100 *)rt_nil_check(F.v4348))).f_elem = yr1851_MakeRep(((*(yR95 *)rt_nil_check(F.p1852))).f_b, INT64_C(0), F.p1854);
if ((!F.p1854)) {
yr1791_CheckRepresented(((*(yR100 *)rt_nil_check(F.v4348))).f_elem, ((*(yR95 *)rt_nil_check(F.p1852))).f_line);
yr1871_BuildArrayDesc(F.v4348);
} else {
((*(yR100 *)rt_nil_check(F.v4348))).f_abstract = ((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.v4348))).f_elem))).f_abstract;
if ((!((*(yR100 *)rt_nil_check(F.v4348))).f_abstract)) {
yr1871_BuildArrayDesc(F.v4348);
}
}
((*(yR100 *)rt_nil_check(F.v4348))).f_deep = 1;
{ void * rv4393 = F.v4348;
return rv4393; }
}
if ((F.v4358 == v654)) {
F.v4348 = yr1707_NewRep(v795, F.v4362);
((*(yR100 *)rt_nil_check(F.v4348))).f_tname = F.v4364;
yr1901_MakeRecord(F.v4348, F.p1852, F.p1854);
{ void * rv4394 = F.v4348;
return rv4394; }
}
if (((((F.v4358 == v660)) || ((F.v4358 == v657))) || ((F.v4358 == v663)))) {
if ((F.v4358 == v660)) {
F.v4348 = yr1707_NewRep(v798, F.v4362);
((*(yR100 *)rt_nil_check(F.v4348))).f_tname = F.v4364;
if (((((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p1852))).f_a))).f_kind == v642)) && ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p1852))).f_a))).f_a == ((void *)0)))) && ((yr1612_Find(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p1852))).f_a))).f_name) == ((void *)0))))) {
((*(yR100 *)rt_nil_check(F.v4348))).f_forward = ((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p1852))).f_a))).f_name;
((*(yR100 *)rt_nil_check(F.v4348))).f_fwdscope = v1570;
F.v4360 = yr1245_NewNode(v639, ((*(yR95 *)rt_nil_check(F.p1852))).f_line);
((*(yR95 *)rt_nil_check(F.v4360))).f_rep = F.v4348;
((*(yR95 *)rt_nil_check(F.v4360))).f_next = v1705;
v1705 = F.v4360;
{ void * rv4395 = F.v4348;
return rv4395; }
}
((*(yR100 *)rt_nil_check(F.v4348))).f_elem = yr1851_MakeRep(((*(yR95 *)rt_nil_check(F.p1852))).f_a, INT64_C(0), 0);
{ void * rv4398 = F.v4348;
return rv4398; }
}
if ((F.v4358 == v657)) {
F.v4348 = yr1707_NewRep(v801, F.v4362);
((*(yR100 *)rt_nil_check(F.v4348))).f_tname = F.v4364;
((*(yR100 *)rt_nil_check(F.v4348))).f_elem = yr1851_MakeRep(((*(yR95 *)rt_nil_check(F.p1852))).f_a, INT64_C(0), F.p1854);
{ void * rv4400 = F.v4348;
return rv4400; }
}
F.v4348 = yr1707_NewRep(v804, F.v4362);
((*(yR100 *)rt_nil_check(F.v4348))).f_tname = F.v4364;
((*(yR100 *)rt_nil_check(F.v4348))).f_elem = yr1851_MakeRep(((*(yR95 *)rt_nil_check(F.p1852))).f_a, INT64_C(0), 0);
if ((!yr1720_IsDiscrete(((*(yR100 *)rt_nil_check(F.v4348))).f_elem))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1852))).f_line, y_str("a set is of an integer or scalar representation", 47));
}
yr1791_CheckRepresented(((*(yR100 *)rt_nil_check(F.v4348))).f_elem, ((*(yR95 *)rt_nil_check(F.p1852))).f_line);
{ void * rv4404 = F.v4348;
return rv4404; }
}
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1852))).f_line, y_str("this representation is not translated", 37));
{ void * rv4406 = ((void *)0);
return rv4406; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1859_ResolvePending(rt_int a_p1860, void * a_p1861) {
struct yf1862 F;
memset((void *)&F, 0, sizeof F);
F.p1860 = a_p1860;
F.p1861 = a_p1861;
F.v4411 = v1705;
F.v4413 = ((void *)0);
while ((!(F.v4411 == ((void *)0)))) {
if ((((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4411))).f_rep))).f_forward == F.p1860)) {
((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4411))).f_rep))).f_elem = F.p1861;
((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4411))).f_rep))).f_forward = INT64_C(0);
if ((F.v4413 == ((void *)0))) {
v1705 = ((*(yR95 *)rt_nil_check(F.v4411))).f_next;
} else {
((*(yR95 *)rt_nil_check(F.v4413))).f_next = ((*(yR95 *)rt_nil_check(F.v4411))).f_next;
}
} else {
F.v4413 = F.v4411;
}
F.v4411 = ((*(yR95 *)rt_nil_check(F.v4411))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1866_CheckPending(void) {
struct yf1867 F;
memset((void *)&F, 0, sizeof F);
F.v4417 = v1705;
while ((!(F.v4417 == ((void *)0)))) {
if ((((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4417))).f_rep))).f_fwdscope >= v1570)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.v4417))).f_line, ((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4417))).f_rep))).f_forward, y_str(" is named by a pointer but not declared", 39));
}
F.v4417 = ((*(yR95 *)rt_nil_check(F.v4417))).f_next;
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
F.v4422 = ((*(yR100 *)rt_nil_check(F.p1872))).f_idx;
F.v4426 = 1;
while ((!(F.v4422 == ((void *)0)))) {
if ((!F.v4426)) {
yr997_SA(y_str(", ", 2));
}
F.v4426 = 0;
yr1004_ST(yr1812_LoText(F.v4422));
F.v4422 = ((*(yR100 *)rt_nil_check(F.v4422))).f_link;
}
yr997_SA(y_str("}, hi[", 6));
yr1010_SI(((*(yR100 *)rt_nil_check(F.p1872))).f_nidx);
yr997_SA(y_str("] = {", 5));
F.v4422 = ((*(yR100 *)rt_nil_check(F.p1872))).f_idx;
F.v4426 = 1;
while ((!(F.v4422 == ((void *)0)))) {
if ((!F.v4426)) {
yr997_SA(y_str(", ", 2));
}
F.v4426 = 0;
yr1004_ST(yr1818_HiText(F.v4422));
F.v4422 = ((*(yR100 *)rt_nil_check(F.v4422))).f_link;
}
yr997_SA(y_str("}; y_desc_array(", 16));
yr1004_ST(yr1756_DescOf(F.p1872));
yr997_SA(y_str(", ", 2));
yr1010_SI(((*(yR100 *)rt_nil_check(F.p1872))).f_nidx);
yr997_SA(y_str(", lo, hi, ", 10));
yr1004_ST(yr1756_DescOf(((*(yR100 *)rt_nil_check(F.p1872))).f_elem));
yr997_SA(y_str("); }", 4));
F.v4424 = yr1016_SE();
yr1092_Emit(F.v4424);
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
F.v4451 = ((*(yR100 *)rt_nil_check(F.p1878))).f_fields;
while ((!(F.v4451 == ((void *)0)))) {
if ((((*(yR105 *)rt_nil_check(F.v4451))).f_name == F.p1880)) {
yr1132_FailN(F.p1885, F.p1880, y_str(" is a component twice", 21));
}
F.v4451 = ((*(yR105 *)rt_nil_check(F.v4451))).f_next;
}
({ F.v4451 = rt_alloc(sizeof(yR105)); });
(*(yR105 *)rt_nil_check(F.v4451)) = ((yR105){ .f_name = F.p1880, .f_rep = F.p1881, .f_isconst = F.p1882, .f_variant = F.p1883, .f_labels = F.p1884, .f_next = ((void *)0) });
if (((*F.p1879) == ((void *)0))) {
((*(yR100 *)rt_nil_check(F.p1878))).f_fields = F.v4451;
} else {
((*(yR105 *)rt_nil_check((*F.p1879)))).f_next = F.v4451;
}
(*F.p1879) = F.v4451;
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
F.v4463 = F.p1893;
F.v4465 = F.p1893;
while ((!(F.v4463 == ((void *)0)))) {
F.v4467 = yr1851_MakeRep(((*(yR95 *)rt_nil_check(F.v4463))).f_b, INT64_C(0), F.p1896);
if ((!F.p1896)) {
yr1791_CheckRepresented(F.v4467, ((*(yR95 *)rt_nil_check(F.v4463))).f_line);
}
if ((((((*(yR100 *)rt_nil_check(F.v4467))).f_kind == v807)) || ((((*(yR100 *)rt_nil_check(F.v4467))).f_kind == v801)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v4463))).f_line, y_str("this implementation does not keep signals or files in records", 61));
}
F.v4465 = ((*(yR95 *)rt_nil_check(F.v4463))).f_a;
while ((!(F.v4465 == ((void *)0)))) {
yr1877_AddField(F.p1891, &(*F.p1892), ((*(yR95 *)rt_nil_check(F.v4465))).f_name, F.v4467, (((*(yR95 *)rt_nil_check(F.v4463))).f_ival == v240), F.p1894, F.p1895, ((*(yR95 *)rt_nil_check(F.v4465))).f_line);
F.v4465 = ((*(yR95 *)rt_nil_check(F.v4465))).f_next;
}
F.v4463 = ((*(yR95 *)rt_nil_check(F.v4463))).f_next;
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
F.v4475 = ((void *)0);
F.v4483 = INT64_C(0);
F.v4490 = INT64_C(0);
yr1890_AddFields(F.p1902, &F.v4475, ((*(yR95 *)rt_nil_check(F.p1903))).f_a, INT64_C(0), ((void *)0), F.p1904);
if ((!(((*(yR95 *)rt_nil_check(F.p1903))).f_b == ((void *)0)))) {
F.v4477 = ((*(yR95 *)rt_nil_check(F.p1903))).f_b;
F.v4481 = yr1851_MakeRep(((*(yR95 *)rt_nil_check(F.v4477))).f_b, INT64_C(0), 0);
if ((!yr1720_IsDiscrete(F.v4481))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v4477))).f_line, y_str("the case-selection component is integer or scalar", 49));
}
yr1877_AddField(F.p1902, &F.v4475, ((*(yR95 *)rt_nil_check(F.v4477))).f_name, F.v4481, 1, INT64_C(0), ((void *)0), ((*(yR95 *)rt_nil_check(F.v4477))).f_line);
((*(yR100 *)rt_nil_check(F.p1902))).f_selector = F.v4475;
F.v4479 = ((*(yR95 *)rt_nil_check(F.v4477))).f_a;
while ((!(F.v4479 == ((void *)0)))) {
F.v4483 = rt_range(rt_add(F.v4483, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1890_AddFields(F.p1902, &F.v4475, ((*(yR95 *)rt_nil_check(F.v4479))).f_b, F.v4483, ((*(yR95 *)rt_nil_check(F.v4479))).f_a, F.p1904);
F.v4479 = ((*(yR95 *)rt_nil_check(F.v4479))).f_next;
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
F.v4488 = yr1016_SE();
yr1070_Put(&v942, F.v4488);
yr986_SB();
yr997_SA(y_str("struct ", 7));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1902))).f_cname);
yr997_SA(y_str(" {", 2));
F.v4486 = ((*(yR100 *)rt_nil_check(F.p1902))).f_fields;
while ((!(F.v4486 == ((void *)0)))) {
yr997_SA(y_str(" ", 1));
yr1004_ST(yr1750_CType(((*(yR105 *)rt_nil_check(F.v4486))).f_rep));
yr997_SA(y_str(" f_", 3));
yr1004_ST(((*(yR105 *)rt_nil_check(F.v4486))).f_name);
yr997_SA(y_str(";", 1));
F.v4490 = rt_range(rt_add(F.v4490, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4486 = ((*(yR105 *)rt_nil_check(F.v4486))).f_next;
}
if ((F.v4490 == INT64_C(0))) {
yr997_SA(y_str(" int empty_;", 12));
}
yr997_SA(y_str(" };", 3));
F.v4488 = yr1016_SE();
yr1070_Put(&v944, F.v4488);
yr1762_NewDesc(F.p1902);
yr986_SB();
yr997_SA(y_str("{ static const size_t o[] = {", 29));
F.v4486 = ((*(yR100 *)rt_nil_check(F.p1902))).f_fields;
while ((!(F.v4486 == ((void *)0)))) {
yr997_SA(y_str("offsetof(", 9));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1902))).f_cname);
yr997_SA(y_str(", f_", 4));
yr1004_ST(((*(yR105 *)rt_nil_check(F.v4486))).f_name);
yr997_SA(y_str("), ", 3));
F.v4486 = ((*(yR105 *)rt_nil_check(F.v4486))).f_next;
}
yr997_SA(y_str("0}; const ydesc **f = rt_alloc(", 31));
yr1010_SI(rt_range(rt_add(F.v4490, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr997_SA(y_str(" * sizeof *f);", 14));
F.v4483 = INT64_C(0);
F.v4486 = ((*(yR100 *)rt_nil_check(F.p1902))).f_fields;
while ((!(F.v4486 == ((void *)0)))) {
yr997_SA(y_str(" f[", 3));
yr1010_SI(F.v4483);
yr997_SA(y_str("] = ", 4));
yr1004_ST(yr1756_DescOf(((*(yR105 *)rt_nil_check(F.v4486))).f_rep));
yr997_SA(y_str(";", 1));
F.v4483 = rt_range(rt_add(F.v4483, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4486 = ((*(yR105 *)rt_nil_check(F.v4486))).f_next;
}
yr997_SA(y_str(" y_desc_record(", 15));
yr1004_ST(yr1756_DescOf(F.p1902));
yr997_SA(y_str(", sizeof(", 9));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1902))).f_cname);
yr997_SA(y_str("), ", 3));
yr1010_SI(F.v4490);
yr997_SA(y_str(", o, (const ydesc *const *)f); }", 32));
F.v4488 = yr1016_SE();
yr1092_Emit(F.v4488);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1909_FindField(void * a_p1910, rt_int a_p1911) {
struct yf1912 F;
memset((void *)&F, 0, sizeof F);
F.p1910 = a_p1910;
F.p1911 = a_p1911;
F.v4537 = ((*(yR100 *)rt_nil_check(F.p1910))).f_fields;
while ((!(F.v4537 == ((void *)0)))) {
if ((((*(yR105 *)rt_nil_check(F.v4537))).f_name == F.p1911)) {
{ void * rv4538 = F.v4537;
return rv4538; }
}
F.v4537 = ((*(yR105 *)rt_nil_check(F.v4537))).f_next;
}
{ void * rv4539 = ((void *)0);
return rv4539; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2029_CharOrd(void * a_p2030, rt_int a_p2031) {
struct yf2032 F;
memset((void *)&F, 0, sizeof F);
F.p2030 = a_p2030;
F.p2031 = a_p2031;
if ((((*(yR100 *)rt_nil_check(F.p2030))).f_tid == ((*(yR100 *)rt_nil_check(v1687))).f_tid)) {
if ((((rt_int *)(v890).p)[y_ix1(v890, F.p2031)] == INT64_C(1))) {
{ rt_int rv4555 = ((rt_int *)(v931).p)[y_ix1(v931, yr1063_TChar(F.p2031, INT64_C(1)))];
return rv4555; }
}
F.v4546 = INT64_C(0);
F.v4550 = INT64_C(1);
F.lo4560 = INT64_C(1);
F.hi4561 = ((rt_int *)(v890).p)[y_ix1(v890, v2024)];
{ rt_int hi4565 = F.hi4561;
for (rt_int i4564 = F.lo4560; i4564 <= hi4565; i4564++) { F.c_4563 = i4564;
if ((yr1063_TChar(v2024, rt_range(F.c_4563, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 32)) {
F.v4552 = yr1028_Intern(rt_range(rt_add(((rt_int *)(v888).p)[y_ix1(v888, v2024)], (rt_sub(F.v4550, INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub(F.c_4563, F.v4550), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((F.v4552 == F.p2031)) {
if ((F.v4546 < INT64_C(32))) {
{ rt_int rv4572 = F.v4546;
return rv4572; }
}
if ((F.v4546 == INT64_C(32))) {
{ rt_int rv4575 = INT64_C(32);
return rv4575; }
}
if ((F.v4546 == INT64_C(33))) {
{ rt_int rv4578 = INT64_C(127);
return rv4578; }
}
if ((F.v4546 == INT64_C(34))) {
{ rt_int rv4581 = INT64_C(39);
return rv4581; }
}
{ rt_int rv4583 = INT64_C(34);
return rv4583; }
}
F.v4546 = rt_range(rt_add(F.v4546, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4550 = rt_range(rt_add(F.c_4563, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i4564 == hi4565) break;
}}
{ rt_int rv4589 = INT64_C(-1);
return rv4589; }
}
if ((!(((*(yR100 *)rt_nil_check(F.p2030))).f_kind == v789))) {
{ rt_int rv4591 = INT64_C(-1);
return rv4591; }
}
F.v4544 = ((*(yR100 *)rt_nil_check(F.p2030))).f_lits;
F.v4548 = INT64_C(0);
while ((!(F.v4544 == ((void *)0)))) {
if (yr1048_TEq(((*(yR95 *)rt_nil_check(F.v4544))).f_text, F.p2031)) {
{ rt_int rv4593 = F.v4548;
return rv4593; }
}
F.v4548 = rt_range(rt_add(F.v4548, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4544 = ((*(yR95 *)rt_nil_check(F.v4544))).f_next;
}
{ rt_int rv4597 = INT64_C(-1);
return rv4597; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2036_AlphabetFor(void * a_p2037, void * a_p2038) {
struct yf2039 F;
memset((void *)&F, 0, sizeof F);
F.p2037 = a_p2037;
F.p2038 = a_p2038;
F.v4606 = ((void *)0);
F.v4608 = INT64_C(0);
F.v4611 = INT64_C(0);
if ((!(((*(yR95 *)rt_nil_check(F.p2037))).f_d == ((void *)0)))) {
F.v4602 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2037))).f_d))).f_name, ((*(yR95 *)rt_nil_check(F.p2037))).f_line));
if ((((((!(((*(yR115 *)rt_nil_check(F.v4602))).f_kind == v837))) && ((!(((*(yR115 *)rt_nil_check(F.v4602))).f_kind == v840))))) || ((!(((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4602))).f_rep))).f_kind == v789))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2037))).f_line, ((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2037))).f_d))).f_name, y_str(" is not an alphabet", 19));
}
{ void * rv4614 = ((*(yR115 *)rt_nil_check(F.v4602))).f_rep;
return rv4614; }
}
F.v4611 = INT64_C(1);
if ((((((*(yR95 *)rt_nil_check(F.p2037))).f_kind == v741)) || ((yr2029_CharOrd(v1687, ((*(yR95 *)rt_nil_check(F.p2037))).f_text) >= INT64_C(0))))) {
F.v4608 = INT64_C(1);
F.v4606 = v1687;
}
F.v4604 = v2027;
while ((!(F.v4604 == ((void *)0)))) {
F.v4602 = yr1612_Find(((*(yR95 *)rt_nil_check(F.v4604))).f_name);
if ((!(F.v4602 == ((void *)0)))) {
F.v4602 = yr1677_Real(F.v4602);
if ((((((((*(yR115 *)rt_nil_check(F.v4602))).f_kind == v837)) || ((((*(yR115 *)rt_nil_check(F.v4602))).f_kind == v840)))) && ((((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4602))).f_rep))).f_tid == ((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4604))).f_rep))).f_tid)))) {
F.v4611 = rt_range(rt_add(F.v4611, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((((*(yR95 *)rt_nil_check(F.p2037))).f_kind == v738)) && ((yr2029_CharOrd(((*(yR95 *)rt_nil_check(F.v4604))).f_rep, ((*(yR95 *)rt_nil_check(F.p2037))).f_text) >= INT64_C(0))))) {
F.v4608 = rt_range(rt_add(F.v4608, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4606 = ((*(yR95 *)rt_nil_check(F.v4604))).f_rep;
}
}
}
F.v4604 = ((*(yR95 *)rt_nil_check(F.v4604))).f_next;
}
if ((((((*(yR95 *)rt_nil_check(F.p2037))).f_kind == v741)) && ((F.v4611 > INT64_C(1))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2037))).f_line, y_str("a string in a scope with two alphabets is qualified by its alphabet (VI.A.3)", 76));
}
if ((F.v4608 > INT64_C(1))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2037))).f_line, yr2480_Join(yr1021_T(y_str("'", 1)), ((*(yR95 *)rt_nil_check(F.p2037))).f_text, yr1021_T(y_str("'", 1))), y_str(" is a character of two alphabets here: qualify it (VI.A.3)", 58));
}
if ((F.v4606 == ((void *)0))) {
{ void * rv4629 = v1687;
return rv4629; }
}
{ void * rv4630 = F.v4606;
return rv4630; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2043_CharValue(void * a_p2044, rt_int a_p2045, rt_int a_p2046) {
struct yf2047 F;
memset((void *)&F, 0, sizeof F);
F.p2044 = a_p2044;
F.p2045 = a_p2045;
F.p2046 = a_p2046;
F.v4636 = yr2029_CharOrd(F.p2044, F.p2045);
if ((F.v4636 < INT64_C(0))) {
yr986_SB();
yr997_SA(y_str("'", 1));
yr1004_ST(F.p2045);
yr997_SA(y_str("' is not a character of ", 24));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p2044))).f_tname);
F.v4638 = yr1016_SE();
yr1117_Fail(F.p2046, F.v4638);
}
{ rt_int rv4642 = F.v4636;
return rv4642; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2051_StringCodes(void * a_p2052, rt_int a_p2053, rt_int * a_p2054, rt_int a_p2055) {
struct yf2056 F;
memset((void *)&F, 0, sizeof F);
F.p2052 = a_p2052;
F.p2053 = a_p2053;
F.p2054_o = a_p2054;
F.p2055 = a_p2055;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&F.yd_4660, 1, lo, hi, &y_d_int); }
y_init(&F.yd_4660, &F.v4662);
F.p2054 = INT64_C(0);
F.v4649 = INT64_C(1);
while ((F.v4649 <= ((rt_int *)(v890).p)[y_ix1(v890, F.p2053)])) {
F.v4664 = yr1063_TChar(F.p2053, F.v4649);
if ((F.v4664 == 39)) {
F.v4651 = rt_range(rt_add(F.v4649, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1063_TChar(F.p2053, F.v4651) == 39))) {
F.v4651 = rt_range(rt_add(F.v4651, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v4666 = yr1028_Intern(rt_range(rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p2053)], F.v4649), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v4651, F.v4649)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v4653 = yr2043_CharValue(F.p2052, F.v4666, F.p2055);
F.v4649 = rt_range(rt_add(F.v4651, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v4666 = yr1028_Intern(rt_range(rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p2053)], (rt_sub(F.v4649, INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), INT64_C(1));
F.v4653 = yr2043_CharValue(F.p2052, F.v4666, F.p2055);
F.v4649 = rt_range(rt_add(F.v4649, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.p2054 >= INT64_C(4096))) {
yr1124_FailS(F.p2055, y_str("string literal too long", 23));
}
F.p2054 = rt_range(rt_add(F.p2054, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(F.v4662).p)[y_ix1(F.v4662, F.p2054)] = F.v4653;
}
yr986_SB();
yr991_SC(34);
F.lo4694 = INT64_C(1);
F.hi4695 = F.p2054;
{ rt_int hi4699 = F.hi4695;
for (rt_int i4698 = F.lo4694; i4698 <= hi4699; i4698++) { F.c_4697 = i4698;
F.v4653 = ((rt_int *)(F.v4662).p)[y_ix1(F.v4662, F.c_4697)];
if ((((F.v4653 == INT64_C(34))) || ((F.v4653 == INT64_C(92))))) {
yr991_SC(92);
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, F.v4653)]);
} else if (((((F.v4653 >= INT64_C(32))) && ((F.v4653 < INT64_C(127)))) && (((((!(F.v4653 == INT64_C(63)))) || ((F.c_4697 == INT64_C(1)))) || ((!(((rt_int *)(F.v4662).p)[y_ix1(F.v4662, rt_sub(F.c_4697, INT64_C(1)))] == INT64_C(63)))))))) {
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, F.v4653)]);
} else {
yr991_SC(92);
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, rt_add(INT64_C(48), (rt_div(F.v4653, INT64_C(64)))))]);
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, rt_add(INT64_C(48), (rt_mod((rt_div(F.v4653, INT64_C(8))), INT64_C(8)))))]);
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, rt_add(INT64_C(48), (rt_mod(F.v4653, INT64_C(8)))))]);
}
if (i4698 == hi4699) break;
}}
yr991_SC(34);
{ rt_int rv4726 = yr1016_SE();
(*F.p2054_o) = F.p2054;
return rv4726; }
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
F.v4744 = yr2036_AlphabetFor(F.p2061, ((void *)0));
F.p2063 = yr2029_CharOrd(F.v4744, ((*(yR95 *)rt_nil_check(F.p2061))).f_text);
F.p2062 = (F.p2063 >= INT64_C(0));
(*F.p2062_o) = F.p2062;
(*F.p2063_o) = F.p2063;
return;
}
if ((((*(yR95 *)rt_nil_check(F.p2061))).f_kind == v747)) {
if ((!(((*(yR95 *)rt_nil_check(F.p2061))).f_d == ((void *)0)))) {
F.v4732 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2061))).f_d))).f_name, ((*(yR95 *)rt_nil_check(F.p2061))).f_line));
F.v4732 = yr1637_FindLit(((*(yR95 *)rt_nil_check(F.p2061))).f_name, ((*(yR115 *)rt_nil_check(F.v4732))).f_rep);
} else {
F.v4732 = yr1612_Find(((*(yR95 *)rt_nil_check(F.p2061))).f_name);
}
if ((F.v4732 == ((void *)0))) {
(*F.p2062_o) = F.p2062;
(*F.p2063_o) = F.p2063;
return;
}
F.v4732 = yr1677_Real(F.v4732);
if ((((((((*(yR115 *)rt_nil_check(F.v4732))).f_kind == v843)) || ((((*(yR115 *)rt_nil_check(F.v4732))).f_kind == v834)))) && ((*(yR115 *)rt_nil_check(F.v4732))).f_hasmv)) {
F.p2062 = 1;
F.p2063 = ((*(yR115 *)rt_nil_check(F.v4732))).f_mval;
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
yr2060_Manifest(((*(yR95 *)rt_nil_check(F.p2061))).f_a, &F.v4738, &F.v4734);
yr2060_Manifest(((*(yR95 *)rt_nil_check(F.p2061))).f_b, &F.v4740, &F.v4736);
if ((!((F.v4738 && F.v4740)))) {
(*F.p2062_o) = F.p2062;
(*F.p2063_o) = F.p2063;
return;
}
F.v4742 = ((*(yR95 *)rt_nil_check(F.p2061))).f_name;
F.p2062 = 1;
if ((F.v4742 == v543)) {
F.p2063 = rt_range(rt_add(F.v4734, F.v4736), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v4742 == v546)) {
F.p2063 = rt_range(rt_sub(F.v4734, F.v4736), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v4742 == v549)) {
F.p2063 = rt_range(rt_mul(F.v4734, F.v4736), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v4742 == v246)) && ((!(F.v4736 == INT64_C(0)))))) {
F.p2063 = rt_range(rt_div(F.v4734, F.v4736), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v4742 == v348)) && ((!(F.v4736 == INT64_C(0)))))) {
F.p2063 = rt_range(rt_mod(F.v4734, F.v4736), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
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
{ rt_int rv4765 = F.p2069;
return rv4765; }
}
yr986_SB();
yr997_SA(y_str("rt_range(", 9));
yr1004_ST(F.p2069);
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1812_LoText(F.p2070));
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1818_HiText(F.p2070));
yr997_SA(y_str(")", 1));
{ rt_int rv4770 = yr1016_SE();
return rv4770; }
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
{ rt_int rv4776 = yr1016_SE();
return rv4776; }
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
{ rt_int rv4783 = yr1016_SE();
return rv4783; }
}
{ rt_int rv4784 = F.p2069;
return rv4784; }
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
F.v4794 = yr1146_Fresh(y_str("t", 1));
yr986_SB();
yr997_SA(y_str("{ ", 2));
yr1004_ST(yr1750_CType(F.p2078));
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v4794);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.p2079);
yr997_SA(y_str("; y_store(", 10));
yr1004_ST(yr1756_DescOf(F.p2078));
yr997_SA(y_str(", &", 3));
yr1004_ST(F.p2077);
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v4794);
yr997_SA(y_str("); }", 4));
F.v4792 = yr1016_SE();
yr1092_Emit(F.v4792);
return;
}
yr986_SB();
yr1004_ST(F.p2077);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2068_Convert(F.p2079, F.p2078, F.p2080));
yr997_SA(y_str(";", 1));
F.v4792 = yr1016_SE();
yr1092_Emit(F.v4792);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2086_IsVariable(void * a_p2087) {
struct yf2088 F;
memset((void *)&F, 0, sizeof F);
F.p2087 = a_p2087;
if ((((*(yR95 *)rt_nil_check(F.p2087))).f_kind == v747)) {
F.v4808 = yr1612_Find(((*(yR95 *)rt_nil_check(F.p2087))).f_name);
if ((F.v4808 == ((void *)0))) {
{ rt_int rv4812 = 0;
return rv4812; }
}
if (((*(yR115 *)rt_nil_check(F.v4808))).f_readonly) {
{ rt_int rv4814 = 0;
return rv4814; }
}
{ rt_int rv4815 = (((*(yR115 *)rt_nil_check(yr1677_Real(F.v4808)))).f_kind == v831);
return rv4815; }
}
if ((((*(yR95 *)rt_nil_check(F.p2087))).f_kind == v759)) {
{ rt_int rv4817 = (((*(yR95 *)rt_nil_check(F.p2087))).f_flag == INT64_C(0));
return rv4817; }
}
if ((((*(yR95 *)rt_nil_check(F.p2087))).f_kind == v756)) {
{ rt_int rv4818 = yr2086_IsVariable(((*(yR95 *)rt_nil_check(F.p2087))).f_a);
return rv4818; }
}
if ((((*(yR95 *)rt_nil_check(F.p2087))).f_kind == v753)) {
if ((!yr2086_IsVariable(((*(yR95 *)rt_nil_check(F.p2087))).f_a))) {
{ rt_int rv4820 = 0;
return rv4820; }
}
F.v4810 = yr1909_FindField(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2087))).f_a))).f_rep, ((*(yR95 *)rt_nil_check(F.p2087))).f_name);
if ((F.v4810 == ((void *)0))) {
{ rt_int rv4822 = 0;
return rv4822; }
}
{ rt_int rv4823 = (!((*(yR105 *)rt_nil_check(F.v4810))).f_isconst);
return rv4823; }
}
{ rt_int rv4825 = 0;
return rv4825; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2092_CheckPure(void * a_p2093) {
struct yf2094 F;
memset((void *)&F, 0, sizeof F);
F.p2093 = a_p2093;
F.v4829 = F.p2093;
if ((v2398 == ((void *)0))) {
return;
}
if ((!((*(yR115 *)rt_nil_check(v2398))).f_func)) {
return;
}
while ((((((*(yR95 *)rt_nil_check(F.v4829))).f_kind == v753)) || ((((*(yR95 *)rt_nil_check(F.v4829))).f_kind == v756)))) {
F.v4829 = ((*(yR95 *)rt_nil_check(F.v4829))).f_a;
}
if ((((*(yR95 *)rt_nil_check(F.v4829))).f_kind == v759)) {
if ((((*(yR95 *)rt_nil_check(F.v4829))).f_flag == INT64_C(0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2093))).f_line, y_str("a FUNCTION does not assign to a dynamic variable (X.A.4)", 56));
}
return;
}
if ((((*(yR95 *)rt_nil_check(F.v4829))).f_kind == v747)) {
F.v4831 = yr1612_Find(((*(yR95 *)rt_nil_check(F.v4829))).f_name);
if ((!(F.v4831 == ((void *)0)))) {
F.v4831 = yr1677_Real(F.v4831);
if ((((*(yR115 *)rt_nil_check(F.v4831))).f_level < ((*(yR115 *)rt_nil_check(v2398))).f_level)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2093))).f_line, ((*(yR95 *)rt_nil_check(F.v4829))).f_name, y_str(" is not local: a FUNCTION assigns only to its locals (X.A.4)", 60));
}
}
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2098_LValue(void * a_p2099, rt_int * a_p2100, void * * a_p2101) {
struct yf2102 F;
memset((void *)&F, 0, sizeof F);
F.p2099 = a_p2099;
F.p2100_o = a_p2100;
F.p2101_o = a_p2101;
yr2125_Expr(F.p2099, ((void *)0), &F.p2100, &F.p2101);
if ((!yr2086_IsVariable(F.p2099))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2099))).f_line, y_str("a variable is needed here (IX.A.1)", 34));
}
(*F.p2100_o) = F.p2100;
(*F.p2101_o) = F.p2101;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2106_Paren(rt_int a_p2107) {
struct yf2108 F;
memset((void *)&F, 0, sizeof F);
F.p2107 = a_p2107;
yr986_SB();
yr997_SA(y_str("(", 1));
yr1004_ST(F.p2107);
yr997_SA(y_str(")", 1));
{ rt_int rv4844 = yr1016_SE();
return rv4844; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2112_Lit(void * a_p2113, rt_int a_p2114) {
struct yf2115 F;
memset((void *)&F, 0, sizeof F);
F.p2113 = a_p2113;
F.p2114 = a_p2114;
F.v4849 = yr1714_CopyRep(F.p2113);
yr1837_SetRange(F.v4849, F.p2114, F.p2114);
((*(yR100 *)rt_nil_check(F.v4849))).f_elem = F.p2113;
{ void * rv4850 = F.v4849;
return rv4850; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2119_Qualifier(void * a_p2120) {
struct yf2121 F;
memset((void *)&F, 0, sizeof F);
F.p2120 = a_p2120;
F.v4854 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2120))).f_d))).f_name, ((*(yR95 *)rt_nil_check(F.p2120))).f_line));
if ((((!(((*(yR115 *)rt_nil_check(F.v4854))).f_kind == v837))) && ((!(((*(yR115 *)rt_nil_check(F.v4854))).f_kind == v840))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2120))).f_line, ((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2120))).f_d))).f_name, y_str(" is not a type", 14));
}
{ void * rv4856 = ((*(yR115 *)rt_nil_check(F.v4854))).f_rep;
return rv4856; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2125_Expr(void * a_p2126, void * a_p2127, rt_int * a_p2128, void * * a_p2129) {
struct yf2130 F;
memset((void *)&F, 0, sizeof F);
F.p2126 = a_p2126;
F.p2127 = a_p2127;
F.p2128_o = a_p2128;
F.p2129_o = a_p2129;
F.v4863 = ((*(yR95 *)rt_nil_check(F.p2126))).f_kind;
v960 = ((*(yR95 *)rt_nil_check(F.p2126))).f_line;
if ((F.v4863 == v771)) {
yr2125_Expr(((*(yR95 *)rt_nil_check(F.p2126))).f_a, F.p2127, &F.v4867, &F.p2129);
F.p2128 = yr2106_Paren(F.v4867);
} else if ((F.v4863 == v729)) {
F.p2129 = yr2112_Lit(v1683, ((*(yR95 *)rt_nil_check(F.p2126))).f_ival);
if ((!(((*(yR95 *)rt_nil_check(F.p2126))).f_d == ((void *)0)))) {
F.v4873 = yr2119_Qualifier(F.p2126);
if ((!(((*(yR100 *)rt_nil_check(F.v4873))).f_kind == v774))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2126))).f_line, y_str("an integer literal qualified by a type that is not INTEGER", 58));
}
((*(yR100 *)rt_nil_check(F.p2129))).f_tid = ((*(yR100 *)rt_nil_check(F.v4873))).f_tid;
((*(yR100 *)rt_nil_check(F.p2129))).f_tname = ((*(yR100 *)rt_nil_check(F.v4873))).f_tname;
}
yr986_SB();
yr997_SA(y_str("INT64_C(", 8));
yr1010_SI(((*(yR95 *)rt_nil_check(F.p2126))).f_ival);
yr997_SA(y_str(")", 1));
F.p2128 = yr1016_SE();
} else if ((F.v4863 == v738)) {
F.v4873 = yr2036_AlphabetFor(F.p2126, F.p2127);
F.v4879 = yr2043_CharValue(F.v4873, ((*(yR95 *)rt_nil_check(F.p2126))).f_text, ((*(yR95 *)rt_nil_check(F.p2126))).f_line);
F.p2129 = yr2112_Lit(F.v4873, F.v4879);
yr986_SB();
yr1010_SI(F.v4879);
F.p2128 = yr1016_SE();
} else if ((F.v4863 == v741)) {
F.v4873 = yr2036_AlphabetFor(F.p2126, F.p2127);
F.v4867 = yr2051_StringCodes(F.v4873, ((*(yR95 *)rt_nil_check(F.p2126))).f_text, &F.v4877, ((*(yR95 *)rt_nil_check(F.p2126))).f_line);
F.p2129 = yr1707_NewRep(v816, yr1021_T(y_str("string", 6)));
((*(yR100 *)rt_nil_check(F.p2129))).f_tname = yr1021_T(y_str("a string literal", 16));
((*(yR100 *)rt_nil_check(F.p2129))).f_elem = F.v4873;
((*(yR100 *)rt_nil_check(F.p2129))).f_nidx = INT64_C(1);
((*(yR100 *)rt_nil_check(F.p2129))).f_nlits = F.v4877;
yr986_SB();
yr997_SA(y_str("y_str(", 6));
yr1004_ST(F.v4867);
yr997_SA(y_str(", ", 2));
yr1010_SI(F.v4877);
yr997_SA(y_str(")", 1));
F.p2128 = yr1016_SE();
} else if ((F.v4863 == v735)) {
F.p2129 = v1695;
if ((!(((*(yR95 *)rt_nil_check(F.p2126))).f_d == ((void *)0)))) {
F.p2129 = yr2119_Qualifier(F.p2126);
}
F.p2128 = yr2106_Paren(((*(yR95 *)rt_nil_check(F.p2126))).f_text);
} else if ((F.v4863 == v732)) {
F.p2129 = v1697;
if ((!(((*(yR95 *)rt_nil_check(F.p2126))).f_d == ((void *)0)))) {
F.p2129 = yr2119_Qualifier(F.p2126);
}
F.p2128 = ((*(yR95 *)rt_nil_check(F.p2126))).f_text;
} else if ((F.v4863 == v744)) {
if ((((*(yR95 *)rt_nil_check(F.p2126))).f_d == ((void *)0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2126))).f_line, y_str("NIL is qualified by the name of a pointer type (VI.B.4)", 55));
}
F.p2129 = yr2119_Qualifier(F.p2126);
if ((!(((*(yR100 *)rt_nil_check(F.p2129))).f_kind == v798))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2126))).f_line, y_str("NIL of a type that is not a pointer", 35));
}
F.p2128 = yr1021_T(y_str("((void *)0)", 11));
} else if ((F.v4863 == v747)) {
if ((!(((*(yR95 *)rt_nil_check(F.p2126))).f_d == ((void *)0)))) {
F.v4873 = yr2119_Qualifier(F.p2126);
F.v4865 = yr1637_FindLit(((*(yR95 *)rt_nil_check(F.p2126))).f_name, F.v4873);
if ((F.v4865 == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2126))).f_line, ((*(yR95 *)rt_nil_check(F.p2126))).f_name, y_str(" is not a literal of that type", 30));
}
} else {
F.v4865 = yr1624_Lookup(((*(yR95 *)rt_nil_check(F.p2126))).f_name, ((*(yR95 *)rt_nil_check(F.p2126))).f_line);
}
yr2142_NameExpr(F.p2126, F.v4865, &F.p2128, &F.p2129);
} else if ((F.v4863 == v750)) {
yr2297_CallExpr(F.p2126, F.p2127, 0, &F.p2128, &F.p2129);
} else if ((F.v4863 == v753)) {
yr2125_Expr(((*(yR95 *)rt_nil_check(F.p2126))).f_a, ((void *)0), &F.v4867, &F.v4873);
((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2126))).f_a))).f_rep = F.v4873;
if ((!(((*(yR100 *)rt_nil_check(F.v4873))).f_kind == v795))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2126))).f_line, ((*(yR95 *)rt_nil_check(F.p2126))).f_name, y_str(": a component of something that is not a record", 47));
}
if (((*(yR100 *)rt_nil_check(F.v4873))).f_opaque) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2126))).f_line, ((*(yR100 *)rt_nil_check(F.v4873))).f_tname, y_str(" is exported opaquely: its components are hidden (X.B.3)", 56));
}
F.v4875 = yr1909_FindField(F.v4873, ((*(yR95 *)rt_nil_check(F.p2126))).f_name);
if ((F.v4875 == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2126))).f_line, ((*(yR95 *)rt_nil_check(F.p2126))).f_name, y_str(" is not a component of this record", 34));
}
F.p2129 = ((*(yR105 *)rt_nil_check(F.v4875))).f_rep;
if ((!(((*(yR105 *)rt_nil_check(F.v4875))).f_variant == INT64_C(0)))) {
F.v4869 = yr1146_Fresh(y_str("vr", 2));
yr986_SB();
yr997_SA(y_str("(*({ ", 5));
yr1004_ST(yr1750_CType(F.v4873));
yr997_SA(y_str(" *", 2));
yr1004_ST(F.v4869);
yr997_SA(y_str(" = &", 4));
yr1004_ST(yr2106_Paren(F.v4867));
yr997_SA(y_str("; if (!(", 8));
yr1004_ST(yr2134_VariantTest(F.v4873, F.v4875, F.v4869));
yr997_SA(y_str(")) rt_raise(RT_X_TAG); &", 24));
yr1004_ST(F.v4869);
yr997_SA(y_str("->f_", 4));
yr1004_ST(((*(yR95 *)rt_nil_check(F.p2126))).f_name);
yr997_SA(y_str("; }))", 5));
F.p2128 = yr1016_SE();
} else {
yr986_SB();
yr1004_ST(yr2106_Paren(F.v4867));
yr997_SA(y_str(".f_", 3));
yr1004_ST(((*(yR95 *)rt_nil_check(F.p2126))).f_name);
F.p2128 = yr1016_SE();
}
} else if ((((F.v4863 == v759)) && yr2286_UserOp(F.p2126, rt_range(v588, INT64_C(0), INT64_C(4000000)), ((*(yR95 *)rt_nil_check(F.p2126))).f_a, ((void *)0), &F.p2128, &F.p2129))) {
((*(yR95 *)rt_nil_check(F.p2126))).f_flag = INT64_C(1);
} else if ((F.v4863 == v759)) {
yr2125_Expr(((*(yR95 *)rt_nil_check(F.p2126))).f_a, ((void *)0), &F.v4867, &F.v4873);
if ((!(((*(yR100 *)rt_nil_check(F.v4873))).f_kind == v798))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2126))).f_line, y_str("^ of something that is not a pointer", 36));
}
if ((((*(yR100 *)rt_nil_check(F.v4873))).f_elem == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2126))).f_line, ((*(yR100 *)rt_nil_check(F.v4873))).f_forward, y_str(" is not declared", 16));
}
F.p2129 = ((*(yR100 *)rt_nil_check(F.v4873))).f_elem;
yr986_SB();
yr997_SA(y_str("(*(", 3));
yr1004_ST(yr1750_CType(F.p2129));
yr997_SA(y_str(" *)rt_nil_check(", 16));
yr1004_ST(F.v4867);
yr997_SA(y_str("))", 2));
F.p2128 = yr1016_SE();
} else if ((F.v4863 == v756)) {
yr2151_IndexExpr(F.p2126, &F.p2128, &F.p2129);
} else if ((F.v4863 == v762)) {
yr2125_Expr(((*(yR95 *)rt_nil_check(F.p2126))).f_a, v1685, &F.v4867, &F.v4873);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2126))).f_line, v1685, F.v4873);
F.p2129 = v1685;
yr986_SB();
yr997_SA(y_str("(!", 2));
yr1004_ST(F.v4867);
yr997_SA(y_str(")", 1));
F.p2128 = yr1016_SE();
} else if ((F.v4863 == v765)) {
if ((!yr2286_UserOp(F.p2126, rt_range(v546, INT64_C(0), INT64_C(4000000)), ((*(yR95 *)rt_nil_check(F.p2126))).f_a, ((void *)0), &F.p2128, &F.p2129))) {
yr2125_Expr(((*(yR95 *)rt_nil_check(F.p2126))).f_a, F.p2127, &F.v4867, &F.v4873);
yr2159_NegExpr(F.p2126, F.v4867, F.v4873, &F.p2128, &F.p2129);
}
} else if ((F.v4863 == v768)) {
yr2208_BinExpr(F.p2126, F.p2127, &F.p2128, &F.p2129);
} else {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2126))).f_line, y_str("not an expression", 17));
}
((*(yR95 *)rt_nil_check(F.p2126))).f_rep = F.p2129;
(*F.p2128_o) = F.p2128;
(*F.p2129_o) = F.p2129;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2134_VariantTest(void * a_p2135, void * a_p2136, rt_int a_p2137) {
struct yf2138 F;
memset((void *)&F, 0, sizeof F);
F.p2135 = a_p2135;
F.p2136 = a_p2136;
F.p2137 = a_p2137;
F.v4921 = ((*(yR105 *)rt_nil_check(F.p2136))).f_labels;
yr986_SB();
yr997_SA(y_str("0", 1));
while ((!(F.v4921 == ((void *)0)))) {
yr2060_Manifest(F.v4921, &F.v4923, &F.v4925);
yr997_SA(y_str(" || ", 4));
yr1004_ST(F.p2137);
yr997_SA(y_str("->f_", 4));
yr1004_ST(((*(yR105 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p2135))).f_selector))).f_name);
yr997_SA(y_str(" == ", 4));
yr1010_SI(F.v4925);
F.v4921 = ((*(yR95 *)rt_nil_check(F.v4921))).f_next;
}
{ rt_int rv4930 = yr1016_SE();
return rv4930; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2142_NameExpr(void * a_p2143, void * a_p2144, rt_int * a_p2145, void * * a_p2146) {
struct yf2147 F;
memset((void *)&F, 0, sizeof F);
F.p2143 = a_p2143;
F.p2144 = a_p2144;
F.p2145_o = a_p2145;
F.p2146_o = a_p2146;
F.v4937 = yr1677_Real(F.p2144);
if ((((*(yR115 *)rt_nil_check(F.v4937))).f_kind == v843)) {
if ((((((*(yR95 *)rt_nil_check(F.p2143))).f_d == ((void *)0))) && yr1631_Ambiguous(F.v4937))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2143))).f_line, ((*(yR95 *)rt_nil_check(F.p2143))).f_name, y_str(" names values of two types here: qualify it (VI.A.3)", 52));
}
F.p2146 = yr2112_Lit(((*(yR115 *)rt_nil_check(F.v4937))).f_rep, ((*(yR115 *)rt_nil_check(F.v4937))).f_mval);
yr986_SB();
yr1010_SI(((*(yR115 *)rt_nil_check(F.v4937))).f_mval);
F.p2145 = yr1016_SE();
(*F.p2145_o) = F.p2145;
(*F.p2146_o) = F.p2146;
return;
}
if ((((((*(yR115 *)rt_nil_check(F.v4937))).f_kind == v831)) || ((((*(yR115 *)rt_nil_check(F.v4937))).f_kind == v834)))) {
F.p2146 = ((*(yR115 *)rt_nil_check(F.v4937))).f_rep;
F.p2145 = yr1671_SymPath(F.v4937);
(*F.p2145_o) = F.p2145;
(*F.p2146_o) = F.p2146;
return;
}
if ((((*(yR115 *)rt_nil_check(F.v4937))).f_kind == v846)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2143))).f_line, ((*(yR95 *)rt_nil_check(F.p2143))).f_name, y_str(" is a routine: a call needs ()", 30));
}
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2143))).f_line, ((*(yR95 *)rt_nil_check(F.p2143))).f_name, y_str(" is not a value", 15));
(*F.p2145_o) = F.p2145;
(*F.p2146_o) = F.p2146;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2151_IndexExpr(void * a_p2152, rt_int * a_p2153, void * * a_p2154) {
struct yf2155 F;
memset((void *)&F, 0, sizeof F);
F.p2152 = a_p2152;
F.p2153_o = a_p2153;
F.p2154_o = a_p2154;
yr2125_Expr(((*(yR95 *)rt_nil_check(F.p2152))).f_a, ((void *)0), &F.v4946, &F.v4952);
if ((!yr1732_IsArrayLike(F.v4952))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2152))).f_line, y_str("[] of something that is not an array", 36));
}
F.v4960 = yr1260_Count(((*(yR95 *)rt_nil_check(F.p2152))).f_b);
if ((!(F.v4960 == ((*(yR100 *)rt_nil_check(F.v4952))).f_nidx))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2152))).f_line, y_str("the number of subscripts is not the number of dimensions", 56));
}
F.p2154 = ((*(yR100 *)rt_nil_check(F.v4952))).f_elem;
F.v4962 = (((((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2152))).f_a))).f_kind == v747)) || ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2152))).f_a))).f_kind == v753))) || ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2152))).f_a))).f_kind == v756))) || ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2152))).f_a))).f_kind == v759)));
if (F.v4962) {
F.v4950 = F.v4946;
} else {
F.v4950 = yr1146_Fresh(y_str("ya", 2));
}
yr986_SB();
if ((!F.v4962)) {
yr997_SA(y_str("(*({ yarr ", 10));
yr1004_ST(F.v4950);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.v4946);
yr997_SA(y_str("; &", 3));
}
yr997_SA(y_str("((", 2));
yr1004_ST(yr1750_CType(F.p2154));
yr997_SA(y_str(" *)(", 4));
yr1004_ST(F.v4950);
yr997_SA(y_str(").p)[y_ix", 9));
yr1010_SI(F.v4960);
yr997_SA(y_str("(", 1));
yr1004_ST(F.v4950);
F.p2153 = yr1016_SE();
F.v4958 = ((*(yR95 *)rt_nil_check(F.p2152))).f_b;
F.v4956 = ((*(yR100 *)rt_nil_check(F.v4952))).f_idx;
while ((!(F.v4958 == ((void *)0)))) {
yr2125_Expr(F.v4958, F.v4956, &F.v4948, &F.v4954);
if ((((!(F.v4956 == ((void *)0)))) && ((((*(yR100 *)rt_nil_check(F.v4952))).f_kind == v792)))) {
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.v4958))).f_line, F.v4956, F.v4954);
} else if ((!((((((*(yR100 *)rt_nil_check(F.v4954))).f_kind == v774)) || yr1720_IsDiscrete(F.v4954))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v4958))).f_line, y_str("a subscript is an integer or scalar value", 41));
}
yr986_SB();
yr1004_ST(F.p2153);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v4948);
F.p2153 = yr1016_SE();
if ((!(F.v4956 == ((void *)0)))) {
F.v4956 = ((*(yR100 *)rt_nil_check(F.v4956))).f_link;
}
F.v4958 = ((*(yR95 *)rt_nil_check(F.v4958))).f_next;
}
yr986_SB();
yr1004_ST(F.p2153);
yr997_SA(y_str(")]", 2));
if ((!F.v4962)) {
yr997_SA(y_str("; }))", 5));
}
F.p2153 = yr1016_SE();
(*F.p2153_o) = F.p2153;
(*F.p2154_o) = F.p2154;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2159_NegExpr(void * a_p2160, rt_int a_p2161, void * a_p2162, rt_int * a_p2163, void * * a_p2164) {
struct yf2165 F;
memset((void *)&F, 0, sizeof F);
F.p2160 = a_p2160;
F.p2161 = a_p2161;
F.p2162 = a_p2162;
F.p2163_o = a_p2163;
F.p2164_o = a_p2164;
yr986_SB();
if ((((*(yR100 *)rt_nil_check(F.p2162))).f_kind == v774)) {
F.p2164 = yr1714_CopyRep(F.p2162);
((*(yR100 *)rt_nil_check(F.p2164))).f_lo = INT64_C(0);
((*(yR100 *)rt_nil_check(F.p2164))).f_hasm = 0;
yr997_SA(y_str("rt_neg(", 7));
yr1004_ST(F.p2161);
yr997_SA(y_str(")", 1));
} else if ((((((*(yR100 *)rt_nil_check(F.p2162))).f_kind == v780)) || ((((*(yR100 *)rt_nil_check(F.p2162))).f_kind == v777)))) {
F.p2164 = yr1714_CopyRep(F.p2162);
((*(yR100 *)rt_nil_check(F.p2164))).f_lo = INT64_C(0);
yr997_SA(y_str("(-", 2));
yr1004_ST(F.p2161);
yr997_SA(y_str(")", 1));
} else if ((((*(yR100 *)rt_nil_check(F.p2162))).f_kind == v804)) {
F.p2164 = F.p2162;
yr997_SA(y_str("y_set_compl(", 12));
yr1004_ST(F.p2161);
yr997_SA(y_str(")", 1));
} else {
v897 = 0;
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2160))).f_line, y_str("- of something that is not a number or a set", 44));
}
F.p2163 = yr1016_SE();
(*F.p2163_o) = F.p2163;
(*F.p2164_o) = F.p2164;
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2169_Unbounded(void * a_p2170) {
struct yf2171 F;
memset((void *)&F, 0, sizeof F);
F.p2170 = a_p2170;
F.v4997 = yr1714_CopyRep(F.p2170);
((*(yR100 *)rt_nil_check(F.v4997))).f_lo = INT64_C(0);
((*(yR100 *)rt_nil_check(F.v4997))).f_hi = INT64_C(0);
((*(yR100 *)rt_nil_check(F.v4997))).f_hasm = 0;
{ void * rv5001 = F.v4997;
return rv5001; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2175_Call2(yarr a_p2177, rt_int a_p2178, rt_int a_p2179) {
struct yf2180 F;
memset((void *)&F, 0, sizeof F);
F.p2177 = a_p2177;
F.p2178 = a_p2178;
F.p2179 = a_p2179;
yr986_SB();
yr997_SA(F.p2177);
yr997_SA(y_str("(", 1));
yr1004_ST(F.p2178);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.p2179);
yr997_SA(y_str(")", 1));
{ rt_int rv5009 = yr1016_SE();
return rv5009; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2184_Infix(rt_int a_p2185, yarr a_p2187, rt_int a_p2188) {
struct yf2189 F;
memset((void *)&F, 0, sizeof F);
F.p2185 = a_p2185;
F.p2187 = a_p2187;
F.p2188 = a_p2188;
yr986_SB();
yr997_SA(y_str("(", 1));
yr1004_ST(F.p2185);
yr997_SA(y_str(" ", 1));
yr997_SA(F.p2187);
yr997_SA(y_str(" ", 1));
yr1004_ST(F.p2188);
yr997_SA(y_str(")", 1));
{ rt_int rv5018 = yr1016_SE();
return rv5018; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2193_EqCode(rt_int a_p2194, void * a_p2195, rt_int a_p2196, void * a_p2197) {
struct yf2198 F;
memset((void *)&F, 0, sizeof F);
F.p2194 = a_p2194;
F.p2195 = a_p2195;
F.p2196 = a_p2196;
F.p2197 = a_p2197;
F.v5029 = F.p2195;
if ((((*(yR100 *)rt_nil_check(F.p2195))).f_kind == v816)) {
F.v5029 = F.p2197;
}
if ((((((((*(yR100 *)rt_nil_check(F.v5029))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.v5029))).f_kind == v795))) || ((((*(yR100 *)rt_nil_check(F.v5029))).f_kind == v813))) || ((((*(yR100 *)rt_nil_check(F.v5029))).f_kind == v816)))) {
F.v5025 = yr1146_Fresh(y_str("e", 1));
F.v5027 = yr1146_Fresh(y_str("e", 1));
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(yr1750_CType(F.v5029));
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v5025);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.p2194);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v5027);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.p2196);
yr997_SA(y_str("; y_eq(", 7));
if ((((((*(yR100 *)rt_nil_check(F.v5029))).f_kind == v813)) || ((((*(yR100 *)rt_nil_check(F.v5029))).f_kind == v816)))) {
yr997_SA(y_str("y_desc_vector(", 14));
yr1004_ST(yr1756_DescOf(((*(yR100 *)rt_nil_check(F.v5029))).f_elem));
yr997_SA(y_str(")", 1));
} else {
yr1004_ST(yr1756_DescOf(F.v5029));
}
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v5025);
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v5027);
yr997_SA(y_str("); })", 5));
{ rt_int rv5043 = yr1016_SE();
return rv5043; }
}
if ((((*(yR100 *)rt_nil_check(F.v5029))).f_kind == v804)) {
{ rt_int rv5045 = yr2175_Call2(y_str("y_set_eq", 8), F.p2194, F.p2196);
return rv5045; }
}
{ rt_int rv5047 = yr2184_Infix(F.p2194, y_str("==", 2), F.p2196);
return rv5047; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2202_IsOrdered(void * a_p2203) {
struct yf2204 F;
memset((void *)&F, 0, sizeof F);
F.p2203 = a_p2203;
if ((((((((*(yR100 *)rt_nil_check(F.p2203))).f_kind == v774)) || ((((*(yR100 *)rt_nil_check(F.p2203))).f_kind == v780))) || ((((*(yR100 *)rt_nil_check(F.p2203))).f_kind == v777))) || ((((*(yR100 *)rt_nil_check(F.p2203))).f_kind == v789)))) {
{ rt_int rv5051 = 1;
return rv5051; }
}
{ rt_int rv5052 = (((((*(yR100 *)rt_nil_check(F.p2203))).f_kind == v786)) && ((*(yR100 *)rt_nil_check(F.p2203))).f_ordered);
return rv5052; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2208_BinExpr(void * a_p2209, void * a_p2210, rt_int * a_p2211, void * * a_p2212) {
struct yf2213 F;
memset((void *)&F, 0, sizeof F);
F.p2209 = a_p2209;
F.p2210 = a_p2210;
F.p2211_o = a_p2211;
F.p2212_o = a_p2212;
F.v5059 = ((*(yR95 *)rt_nil_check(F.p2209))).f_name;
if (yr2286_UserOp(F.p2209, F.v5059, ((*(yR95 *)rt_nil_check(F.p2209))).f_a, ((*(yR95 *)rt_nil_check(F.p2209))).f_b, &F.p2211, &F.p2212)) {
(*F.p2211_o) = F.p2211;
(*F.p2212_o) = F.p2212;
return;
}
if ((((F.v5059 == v207)) || ((F.v5059 == v369)))) {
yr2125_Expr(((*(yR95 *)rt_nil_check(F.p2209))).f_a, v1685, &F.v5061, &F.v5067);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2209))).f_line, v1685, F.v5067);
yr2125_Expr(((*(yR95 *)rt_nil_check(F.p2209))).f_b, v1685, &F.v5063, &F.v5069);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2209))).f_line, v1685, F.v5069);
F.p2212 = v1685;
if ((F.v5059 == v207)) {
F.p2211 = yr2184_Infix(F.v5061, y_str("&&", 2), F.v5063);
} else {
F.p2211 = yr2184_Infix(F.v5061, y_str("||", 2), F.v5063);
}
(*F.p2211_o) = F.p2211;
(*F.p2212_o) = F.p2212;
return;
}
if ((F.v5059 == v330)) {
yr2125_Expr(((*(yR95 *)rt_nil_check(F.p2209))).f_b, ((void *)0), &F.v5063, &F.v5069);
if ((!(((*(yR100 *)rt_nil_check(F.v5069))).f_kind == v804))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2209))).f_line, y_str("IN needs a set on its right", 27));
}
yr2125_Expr(((*(yR95 *)rt_nil_check(F.p2209))).f_a, ((*(yR100 *)rt_nil_check(F.v5069))).f_elem, &F.v5061, &F.v5067);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2209))).f_line, ((*(yR100 *)rt_nil_check(F.v5069))).f_elem, F.v5067);
F.p2212 = v1685;
F.p2211 = yr2175_Call2(y_str("y_set_in", 8), F.v5061, F.v5063);
(*F.p2211_o) = F.p2211;
(*F.p2212_o) = F.p2212;
return;
}
F.v5071 = ((void *)0);
if (((((((((!(F.p2210 == ((void *)0)))) && ((!(F.v5059 == v555)))) && ((!(F.v5059 == v540)))) && ((!(F.v5059 == v558)))) && ((!(F.v5059 == v510)))) && ((!(F.v5059 == v561)))) && ((!(F.v5059 == v513))))) {
F.v5071 = F.p2210;
}
yr2125_Expr(((*(yR95 *)rt_nil_check(F.p2209))).f_a, F.v5071, &F.v5061, &F.v5067);
yr2125_Expr(((*(yR95 *)rt_nil_check(F.p2209))).f_b, F.v5067, &F.v5063, &F.v5069);
if ((((F.v5059 == v555)) || ((F.v5059 == v540)))) {
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2209))).f_line, F.v5067, F.v5069);
if (((((((*(yR100 *)rt_nil_check(F.v5067))).f_kind == v807)) || ((((*(yR100 *)rt_nil_check(F.v5067))).f_kind == v801))) || ((((*(yR100 *)rt_nil_check(F.v5067))).f_kind == v810)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2209))).f_line, y_str("= and # are not defined for signals, files and semaphores", 57));
}
if ((((*(yR100 *)rt_nil_check(F.v5067))).f_opaque && (((rt_div(((*(yR100 *)rt_nil_check(F.v5067))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2209))).f_line, ((*(yR100 *)rt_nil_check(F.v5067))).f_tname, y_str(" is opaque here: = is not exported (X.B.3)", 42));
}
F.p2212 = v1685;
F.p2211 = yr2193_EqCode(F.v5061, F.v5067, F.v5063, F.v5069);
if ((F.v5059 == v540)) {
yr986_SB();
yr997_SA(y_str("(!", 2));
yr1004_ST(F.p2211);
yr997_SA(y_str(")", 1));
F.p2211 = yr1016_SE();
}
(*F.p2211_o) = F.p2211;
(*F.p2212_o) = F.p2212;
return;
}
if ((((((F.v5059 == v558)) || ((F.v5059 == v510))) || ((F.v5059 == v561))) || ((F.v5059 == v513)))) {
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2209))).f_line, F.v5067, F.v5069);
if ((!yr2202_IsOrdered(F.v5067))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2209))).f_line, y_str("< <= > >= apply to ordered values (VIII.A.1)", 44));
}
F.p2212 = v1685;
if ((F.v5059 == v558)) {
F.p2211 = yr2184_Infix(F.v5061, y_str("<", 1), F.v5063);
} else if ((F.v5059 == v510)) {
F.p2211 = yr2184_Infix(F.v5061, y_str("<=", 2), F.v5063);
} else if ((F.v5059 == v561)) {
F.p2211 = yr2184_Infix(F.v5061, y_str(">", 1), F.v5063);
} else {
F.p2211 = yr2184_Infix(F.v5061, y_str(">=", 2), F.v5063);
}
(*F.p2211_o) = F.p2211;
(*F.p2212_o) = F.p2212;
return;
}
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2209))).f_line, F.v5067, F.v5069);
F.v5073 = ((*(yR100 *)rt_nil_check(F.v5067))).f_kind;
if ((((*(yR100 *)rt_nil_check(F.v5067))).f_kind == v816)) {
F.v5073 = ((*(yR100 *)rt_nil_check(F.v5069))).f_kind;
}
if ((F.v5059 == v459)) {
if ((F.v5073 == v783)) {
F.p2212 = v1685;
F.p2211 = yr2184_Infix(F.v5061, y_str("!=", 2), F.v5063);
} else if ((F.v5073 == v804)) {
F.p2212 = F.v5067;
F.p2211 = yr2175_Call2(y_str("y_set_xor", 9), F.v5061, F.v5063);
} else {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2209))).f_line, y_str("XOR applies to BOOLEAN values and sets", 38));
}
(*F.p2211_o) = F.p2211;
(*F.p2212_o) = F.p2212;
return;
}
if ((F.v5073 == v804)) {
F.p2212 = F.v5067;
if ((F.v5059 == v543)) {
F.p2211 = yr2175_Call2(y_str("y_set_union", 11), F.v5061, F.v5063);
} else if ((F.v5059 == v546)) {
F.p2211 = yr2175_Call2(y_str("y_set_diff", 10), F.v5061, F.v5063);
} else if ((F.v5059 == v549)) {
F.p2211 = yr2175_Call2(y_str("y_set_inter", 11), F.v5061, F.v5063);
} else {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2209))).f_line, y_str("this operator does not apply to sets", 36));
}
(*F.p2211_o) = F.p2211;
(*F.p2212_o) = F.p2212;
return;
}
if ((F.v5073 == v774)) {
F.p2212 = yr2169_Unbounded(F.v5067);
if ((F.v5059 == v543)) {
F.p2211 = yr2175_Call2(y_str("rt_add", 6), F.v5061, F.v5063);
} else if ((F.v5059 == v546)) {
F.p2211 = yr2175_Call2(y_str("rt_sub", 6), F.v5061, F.v5063);
} else if ((F.v5059 == v549)) {
F.p2211 = yr2175_Call2(y_str("rt_mul", 6), F.v5061, F.v5063);
} else if ((F.v5059 == v246)) {
F.p2211 = yr2175_Call2(y_str("rt_div", 6), F.v5061, F.v5063);
} else if ((F.v5059 == v348)) {
F.p2211 = yr2175_Call2(y_str("rt_mod", 6), F.v5061, F.v5063);
} else if ((F.v5059 == v552)) {
F.p2212 = v1695;
yr986_SB();
yr997_SA(y_str("rt_fdiv((double)(", 17));
yr1004_ST(F.v5061);
yr997_SA(y_str("), (double)(", 12));
yr1004_ST(F.v5063);
yr997_SA(y_str("))", 2));
F.p2211 = yr1016_SE();
} else {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2209))).f_line, F.v5059, y_str(" is a free operator: no definition of it is visible (VIII.A)", 60));
}
(*F.p2211_o) = F.p2211;
(*F.p2212_o) = F.p2212;
return;
}
if ((((F.v5073 == v780)) || ((F.v5073 == v777)))) {
F.p2212 = yr2169_Unbounded(F.v5067);
if ((F.v5059 == v543)) {
F.p2211 = yr2184_Infix(F.v5061, y_str("+", 1), F.v5063);
} else if ((F.v5059 == v546)) {
F.p2211 = yr2184_Infix(F.v5061, y_str("-", 1), F.v5063);
} else if ((F.v5059 == v549)) {
F.p2211 = yr2184_Infix(F.v5061, y_str("*", 1), F.v5063);
} else if ((F.v5059 == v552)) {
F.p2212 = v1695;
F.p2211 = yr2175_Call2(y_str("rt_fdiv", 7), F.v5061, F.v5063);
} else {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2209))).f_line, F.v5059, y_str(" does not apply to these numbers", 32));
}
(*F.p2211_o) = F.p2211;
(*F.p2212_o) = F.p2212;
return;
}
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2209))).f_line, F.v5059, y_str(" does not apply to these values", 31));
(*F.p2211_o) = F.p2211;
(*F.p2212_o) = F.p2212;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2247_Fits(void * a_p2248, void * a_p2249) {
struct yf2250 F;
memset((void *)&F, 0, sizeof F);
F.p2248 = a_p2248;
F.p2249 = a_p2249;
if ((((*(yR100 *)rt_nil_check(F.p2248))).f_kind == v813)) {
if ((!yr1732_IsArrayLike(F.p2249))) {
{ rt_int rv5116 = 0;
return rv5116; }
}
if ((!(((*(yR100 *)rt_nil_check(F.p2249))).f_nidx == ((*(yR100 *)rt_nil_check(F.p2248))).f_nidx))) {
{ rt_int rv5118 = 0;
return rv5118; }
}
{ rt_int rv5119 = yr1768_SameType(((*(yR100 *)rt_nil_check(F.p2248))).f_elem, ((*(yR100 *)rt_nil_check(F.p2249))).f_elem);
return rv5119; }
}
if ((((*(yR100 *)rt_nil_check(F.p2248))).f_kind == v825)) {
{ rt_int rv5121 = 1;
return rv5121; }
}
{ rt_int rv5122 = yr1768_SameType(F.p2248, F.p2249);
return rv5122; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2254_Choose(void * a_p2255, rt_int a_p2256, rt_int a_p2257) {
struct yf2258 F;
memset((void *)&F, 0, sizeof F);
F.p2255 = a_p2255;
F.p2256 = a_p2256;
F.p2257 = a_p2257;
F.v5128 = F.p2255;
while ((!(F.v5128 == ((void *)0)))) {
if ((((*(yR115 *)rt_nil_check(F.v5128))).f_nparams == F.p2257)) {
F.v5132 = 1;
F.v5130 = ((*(yR115 *)rt_nil_check(F.v5128))).f_params;
F.v5134 = INT64_C(1);
while ((!(F.v5130 == ((void *)0)))) {
if ((!yr2247_Fits(((*(yR110 *)rt_nil_check(F.v5130))).f_rep, ((void * *)(v2233).p)[y_ix1(v2233, rt_add(F.p2256, F.v5134))]))) {
F.v5132 = 0;
}
F.v5134 = rt_range(rt_add(F.v5134, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5130 = ((*(yR110 *)rt_nil_check(F.v5130))).f_next;
}
if (F.v5132) {
{ void * rv5141 = F.v5128;
return rv5141; }
}
}
F.v5128 = ((*(yR115 *)rt_nil_check(F.v5128))).f_alt;
}
{ void * rv5142 = ((void *)0);
return rv5142; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2262_HidesStandard(void * a_p2263) {
struct yf2264 F;
memset((void *)&F, 0, sizeof F);
F.p2263 = a_p2263;
F.v5146 = F.p2263;
while ((!(F.v5146 == ((void *)0)))) {
if ((((!(((*(yR115 *)rt_nil_check(F.v5146))).f_decl == ((void *)0)))) && ((((*(yR95 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5146))).f_decl))).f_ival == INT64_C(0))))) {
{ rt_int rv5149 = 1;
return rv5149; }
}
F.v5146 = ((*(yR115 *)rt_nil_check(F.v5146))).f_alt;
}
{ rt_int rv5151 = 0;
return rv5151; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2268_CompileArgs(void * a_p2269, void * a_p2270, rt_int * a_p2271, rt_int * a_p2272) {
struct yf2273 F;
memset((void *)&F, 0, sizeof F);
F.p2269 = a_p2269;
F.p2270 = a_p2270;
F.p2271_o = a_p2271;
F.p2272_o = a_p2272;
F.v5158 = F.p2269;
F.v5160 = ((void *)0);
F.p2271 = v2244;
F.p2272 = INT64_C(0);
if ((!(F.p2270 == ((void *)0)))) {
F.v5160 = ((*(yR115 *)rt_nil_check(F.p2270))).f_params;
}
while ((!(F.v5158 == ((void *)0)))) {
if ((v2244 >= INT64_C(4000))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v5158))).f_line, y_str("calls nested too deeply", 23));
}
F.p2272 = rt_range(rt_add(F.p2272, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v2244 = rt_range(rt_add(F.p2271, F.p2272), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5162 = ((void *)0);
if ((!(F.v5160 == ((void *)0)))) {
F.v5162 = ((*(yR110 *)rt_nil_check(F.v5160))).f_rep;
F.v5160 = ((*(yR110 *)rt_nil_check(F.v5160))).f_next;
}
yr2125_Expr(F.v5158, F.v5162, &((rt_int *)(v2224).p)[y_ix1(v2224, rt_add(F.p2271, F.p2272))], &((void * *)(v2233).p)[y_ix1(v2233, rt_add(F.p2271, F.p2272))]);
((void * *)(v2242).p)[y_ix1(v2242, rt_add(F.p2271, F.p2272))] = F.v5158;
F.v5158 = ((*(yR95 *)rt_nil_check(F.v5158))).f_next;
}
(*F.p2271_o) = F.p2271;
(*F.p2272_o) = F.p2272;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2277_CallCode(void * a_p2278, rt_int a_p2279, rt_int a_p2280, rt_int a_p2281) {
struct yf2282 F;
memset((void *)&F, 0, sizeof F);
F.p2278 = a_p2278;
F.p2279 = a_p2279;
F.p2280 = a_p2280;
F.p2281 = a_p2281;
F.v5178 = ((*(yR115 *)rt_nil_check(F.p2278))).f_params;
F.v5180 = rt_range(rt_add(F.p2279, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5184 = 1;
if ((!(F.p2280 == ((*(yR115 *)rt_nil_check(F.p2278))).f_nparams))) {
yr1132_FailN(F.p2281, ((*(yR115 *)rt_nil_check(F.p2278))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
yr986_SB();
yr1004_ST(((*(yR115 *)rt_nil_check(F.p2278))).f_cname);
yr997_SA(y_str("(", 1));
if ((((*(yR115 *)rt_nil_check(F.p2278))).f_level > INT64_C(1))) {
yr1004_ST(yr1658_FramePtr(rt_range(rt_sub(((*(yR115 *)rt_nil_check(F.p2278))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v5184 = 0;
}
while ((!(F.v5178 == ((void *)0)))) {
if ((!F.v5184)) {
yr997_SA(y_str(", ", 2));
}
F.v5184 = 0;
if ((!yr2247_Fits(((*(yR110 *)rt_nil_check(F.v5178))).f_rep, ((void * *)(v2233).p)[y_ix1(v2233, F.v5180)]))) {
v897 = 0;
yr1775_TypeClash(((*(yR95 *)rt_nil_check(((void * *)(v2242).p)[y_ix1(v2242, F.v5180)]))).f_line, ((*(yR110 *)rt_nil_check(F.v5178))).f_rep, ((void * *)(v2233).p)[y_ix1(v2233, F.v5180)]);
}
if ((((*(yR110 *)rt_nil_check(F.v5178))).f_cls == v867)) {
yr1004_ST(yr2068_Convert(((rt_int *)(v2224).p)[y_ix1(v2224, F.v5180)], ((*(yR110 *)rt_nil_check(F.v5178))).f_rep, ((void * *)(v2233).p)[y_ix1(v2233, F.v5180)]));
} else {
if ((!yr2086_IsVariable(((void * *)(v2242).p)[y_ix1(v2242, F.v5180)]))) {
v897 = 0;
yr1132_FailN(((*(yR95 *)rt_nil_check(((void * *)(v2242).p)[y_ix1(v2242, F.v5180)]))).f_line, ((*(yR110 *)rt_nil_check(F.v5178))).f_name, y_str(": the actual of a VAR or OUT parameter must be a variable", 57));
}
yr2092_CheckPure(((void * *)(v2242).p)[y_ix1(v2242, F.v5180)]);
yr997_SA(y_str("&", 1));
yr1004_ST(((rt_int *)(v2224).p)[y_ix1(v2224, F.v5180)]);
}
F.v5180 = rt_range(rt_add(F.v5180, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5178 = ((*(yR110 *)rt_nil_check(F.v5178))).f_next;
}
yr997_SA(y_str(")", 1));
v2244 = F.p2279;
{ rt_int rv5201 = yr1016_SE();
return rv5201; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2286_UserOp(void * a_p2287, rt_int a_p2288, void * a_p2289, void * a_p2290, rt_int * a_p2291, void * * a_p2292) {
struct yf2293 F;
memset((void *)&F, 0, sizeof F);
F.p2287 = a_p2287;
F.p2288 = a_p2288;
F.p2289 = a_p2289;
F.p2290 = a_p2290;
F.p2291_o = a_p2291;
F.p2292_o = a_p2292;
F.v5210 = yr1612_Find(F.p2288);
if ((F.v5210 == ((void *)0))) {
{ rt_int rv5218 = 0;
(*F.p2291_o) = F.p2291;
(*F.p2292_o) = F.p2292;
return rv5218; }
}
F.v5210 = yr1677_Real(F.v5210);
if ((!(((*(yR115 *)rt_nil_check(F.v5210))).f_kind == v846))) {
{ rt_int rv5220 = 0;
(*F.p2291_o) = F.p2291;
(*F.p2292_o) = F.p2292;
return rv5220; }
}
((*(yR95 *)rt_nil_check(F.p2289))).f_next = F.p2290;
if ((!(F.p2290 == ((void *)0)))) {
((*(yR95 *)rt_nil_check(F.p2290))).f_next = ((void *)0);
}
yr2268_CompileArgs(F.p2289, ((void *)0), &F.v5214, &F.v5216);
F.v5212 = yr2254_Choose(F.v5210, F.v5214, F.v5216);
if ((F.v5212 == ((void *)0))) {
v2244 = F.v5214;
if (yr2262_HidesStandard(F.v5210)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2287))).f_line, F.p2288, y_str(": no definition takes operands of these types", 45));
}
{ rt_int rv5223 = 0;
(*F.p2291_o) = F.p2291;
(*F.p2292_o) = F.p2292;
return rv5223; }
}
F.p2291 = yr2277_CallCode(F.v5212, F.v5214, F.v5216, ((*(yR95 *)rt_nil_check(F.p2287))).f_line);
F.p2292 = ((*(yR115 *)rt_nil_check(F.v5212))).f_ret;
{ rt_int rv5225 = 1;
(*F.p2291_o) = F.p2291;
(*F.p2292_o) = F.p2292;
return rv5225; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2297_CallExpr(void * a_p2298, void * a_p2299, rt_int a_p2300, rt_int * a_p2301, void * * a_p2302) {
struct yf2303 F;
memset((void *)&F, 0, sizeof F);
F.p2298 = a_p2298;
F.p2299 = a_p2299;
F.p2300 = a_p2300;
F.p2301_o = a_p2301;
F.p2302_o = a_p2302;
F.v5233 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(F.p2298))).f_name, ((*(yR95 *)rt_nil_check(F.p2298))).f_line));
if ((((*(yR115 *)rt_nil_check(F.v5233))).f_kind == v861)) {
yr2764_StdCall(((*(yR115 *)rt_nil_check(F.v5233))).f_mval, F.p2298, F.p2300, &F.p2301, &F.p2302);
(*F.p2301_o) = F.p2301;
(*F.p2302_o) = F.p2302;
return;
}
if ((((((*(yR115 *)rt_nil_check(F.v5233))).f_kind == v837)) || ((((*(yR115 *)rt_nil_check(F.v5233))).f_kind == v840)))) {
if (F.p2300) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2298))).f_line, y_str("a value is not a statement", 26));
}
yr2307_Denote(((*(yR115 *)rt_nil_check(F.v5233))).f_rep, F.p2298, &F.p2301, &F.p2302);
(*F.p2301_o) = F.p2301;
(*F.p2302_o) = F.p2302;
return;
}
if ((!(((*(yR115 *)rt_nil_check(F.v5233))).f_kind == v846))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2298))).f_line, ((*(yR95 *)rt_nil_check(F.p2298))).f_name, y_str(" is not a routine", 17));
}
if ((((*(yR115 *)rt_nil_check(F.v5233))).f_alt == ((void *)0))) {
yr2268_CompileArgs(((*(yR95 *)rt_nil_check(F.p2298))).f_a, F.v5233, &F.v5237, &F.v5239);
F.v5235 = F.v5233;
} else {
yr2268_CompileArgs(((*(yR95 *)rt_nil_check(F.p2298))).f_a, ((void *)0), &F.v5237, &F.v5239);
F.v5235 = yr2254_Choose(F.v5233, F.v5237, F.v5239);
if ((F.v5235 == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2298))).f_line, ((*(yR95 *)rt_nil_check(F.p2298))).f_name, y_str(": no definition takes actuals of these types", 44));
}
}
F.p2301 = yr2277_CallCode(F.v5235, F.v5237, F.v5239, ((*(yR95 *)rt_nil_check(F.p2298))).f_line);
F.p2302 = ((*(yR115 *)rt_nil_check(F.v5235))).f_ret;
if ((F.p2300 && ((!(((*(yR100 *)rt_nil_check(F.p2302))).f_kind == v822))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2298))).f_line, ((*(yR95 *)rt_nil_check(F.p2298))).f_name, y_str(" returns a value: it is called in an expression (IX.A.2)", 56));
}
if (((!F.p2300) && ((((*(yR100 *)rt_nil_check(F.p2302))).f_kind == v822)))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2298))).f_line, ((*(yR95 *)rt_nil_check(F.p2298))).f_name, y_str(" returns no value", 17));
}
(*F.p2301_o) = F.p2301;
(*F.p2302_o) = F.p2302;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2307_Denote(void * a_p2308, void * a_p2309, rt_int * a_p2310, void * * a_p2311) {
struct yf2312 F;
memset((void *)&F, 0, sizeof F);
F.p2308 = a_p2308;
F.p2309 = a_p2309;
F.p2310_o = a_p2310;
F.p2311_o = a_p2311;
F.v5251 = ((*(yR95 *)rt_nil_check(F.p2309))).f_a;
F.v5271 = INT64_C(0);
F.v5278 = 1;
F.p2311 = F.p2308;
if (((*(yR100 *)rt_nil_check(F.p2308))).f_abstract) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2309))).f_line, ((*(yR100 *)rt_nil_check(F.p2308))).f_tname, y_str(" has no representation to denote a value of", 43));
}
if ((((*(yR100 *)rt_nil_check(F.p2308))).f_kind == v795)) {
if (((*(yR100 *)rt_nil_check(F.p2308))).f_opaque) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2309))).f_line, ((*(yR100 *)rt_nil_check(F.p2308))).f_tname, y_str(" is opaque here (X.B.3)", 23));
}
yr986_SB();
yr997_SA(y_str("((", 2));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p2308))).f_cname);
yr997_SA(y_str("){ ", 3));
F.v5257 = yr1016_SE();
F.v5253 = ((*(yR100 *)rt_nil_check(F.p2308))).f_fields;
while ((!(F.v5253 == ((void *)0)))) {
if ((((((*(yR105 *)rt_nil_check(F.v5253))).f_variant == INT64_C(0))) || ((((*(yR105 *)rt_nil_check(F.v5253))).f_variant == F.v5271)))) {
if ((F.v5251 == ((void *)0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2309))).f_line, y_str("too few components in this record value", 39));
}
yr2125_Expr(F.v5251, ((*(yR105 *)rt_nil_check(F.v5253))).f_rep, &F.v5255, &F.v5261);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.v5251))).f_line, ((*(yR105 *)rt_nil_check(F.v5253))).f_rep, F.v5261);
if ((F.v5253 == ((*(yR100 *)rt_nil_check(F.p2308))).f_selector)) {
yr2060_Manifest(F.v5251, &F.v5269, &F.v5274);
if ((!F.v5269)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v5251))).f_line, y_str("the case-selection value is a manifest constant", 47));
}
F.v5271 = yr2316_VariantOf(F.p2308, F.v5274, ((*(yR95 *)rt_nil_check(F.v5251))).f_line);
}
yr986_SB();
yr1004_ST(F.v5257);
if ((!F.v5278)) {
yr997_SA(y_str(", ", 2));
}
F.v5278 = 0;
yr997_SA(y_str(".f_", 3));
yr1004_ST(((*(yR105 *)rt_nil_check(F.v5253))).f_name);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2068_Convert(F.v5255, ((*(yR105 *)rt_nil_check(F.v5253))).f_rep, F.v5261));
F.v5257 = yr1016_SE();
F.v5251 = ((*(yR95 *)rt_nil_check(F.v5251))).f_next;
}
F.v5253 = ((*(yR105 *)rt_nil_check(F.v5253))).f_next;
}
if ((!(F.v5251 == ((void *)0)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2309))).f_line, y_str("too many components in this record value", 40));
}
yr986_SB();
yr1004_ST(F.v5257);
yr997_SA(y_str(" })", 3));
F.p2310 = yr1016_SE();
(*F.p2310_o) = F.p2310;
(*F.p2311_o) = F.p2311;
return;
}
if ((((*(yR100 *)rt_nil_check(F.p2308))).f_kind == v792)) {
F.v5263 = yr1260_Count(F.v5251);
F.v5257 = yr1146_Fresh(y_str("da", 2));
if ((F.v5263 == INT64_C(1))) {
yr2125_Expr(F.v5251, ((*(yR100 *)rt_nil_check(F.p2308))).f_elem, &F.v5255, &F.v5261);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.v5251))).f_line, ((*(yR100 *)rt_nil_check(F.p2308))).f_elem, F.v5261);
F.v5259 = yr1146_Fresh(y_str("dv", 2));
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(yr1750_CType(((*(yR100 *)rt_nil_check(F.p2308))).f_elem));
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v5259);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2068_Convert(F.v5255, ((*(yR100 *)rt_nil_check(F.p2308))).f_elem, F.v5261));
yr997_SA(y_str("; y_fill(", 9));
yr1004_ST(yr1756_DescOf(F.p2308));
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v5259);
yr997_SA(y_str("); })", 5));
F.p2310 = yr1016_SE();
(*F.p2310_o) = F.p2310;
(*F.p2311_o) = F.p2311;
return;
}
yr986_SB();
yr997_SA(y_str("({ yarr ", 8));
yr1004_ST(F.v5257);
yr997_SA(y_str("; y_init(", 9));
yr1004_ST(yr1756_DescOf(F.p2308));
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v5257);
yr997_SA(y_str("); if (y_count(", 15));
yr1004_ST(F.v5257);
yr997_SA(y_str(", ", 2));
yr1010_SI(((*(yR100 *)rt_nil_check(F.p2308))).f_nidx);
yr997_SA(y_str(") != ", 5));
yr1010_SI(F.v5263);
yr997_SA(y_str(") rt_raise_msg(RT_X_RANGE, ", 27));
yr991_SC(34);
yr997_SA(y_str("wrong number of components", 26));
yr991_SC(34);
yr997_SA(y_str(");", 2));
F.p2310 = yr1016_SE();
F.v5267 = INT64_C(0);
while ((!(F.v5251 == ((void *)0)))) {
yr2125_Expr(F.v5251, ((*(yR100 *)rt_nil_check(F.p2308))).f_elem, &F.v5255, &F.v5261);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.v5251))).f_line, ((*(yR100 *)rt_nil_check(F.p2308))).f_elem, F.v5261);
yr986_SB();
yr1004_ST(F.p2310);
if (yr1744_Deep(((*(yR100 *)rt_nil_check(F.p2308))).f_elem)) {
yr997_SA(y_str(" { ", 3));
yr1004_ST(yr1750_CType(((*(yR100 *)rt_nil_check(F.p2308))).f_elem));
yr997_SA(y_str(" dv = ", 6));
yr1004_ST(F.v5255);
yr997_SA(y_str("; y_copy(", 9));
yr1004_ST(yr1756_DescOf(((*(yR100 *)rt_nil_check(F.p2308))).f_elem));
yr997_SA(y_str(", &((", 5));
yr1004_ST(yr1750_CType(((*(yR100 *)rt_nil_check(F.p2308))).f_elem));
yr997_SA(y_str(" *)", 3));
yr1004_ST(F.v5257);
yr997_SA(y_str(".p)[", 4));
yr1010_SI(F.v5267);
yr997_SA(y_str("], &dv); }", 10));
} else {
yr997_SA(y_str(" ((", 3));
yr1004_ST(yr1750_CType(((*(yR100 *)rt_nil_check(F.p2308))).f_elem));
yr997_SA(y_str(" *)", 3));
yr1004_ST(F.v5257);
yr997_SA(y_str(".p)[", 4));
yr1010_SI(F.v5267);
yr997_SA(y_str("] = ", 4));
yr1004_ST(yr2068_Convert(F.v5255, ((*(yR100 *)rt_nil_check(F.p2308))).f_elem, F.v5261));
yr997_SA(y_str(";", 1));
}
F.p2310 = yr1016_SE();
F.v5267 = rt_range(rt_add(F.v5267, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5251 = ((*(yR95 *)rt_nil_check(F.v5251))).f_next;
}
yr986_SB();
yr1004_ST(F.p2310);
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v5257);
yr997_SA(y_str("; })", 4));
F.p2310 = yr1016_SE();
(*F.p2310_o) = F.p2310;
(*F.p2311_o) = F.p2311;
return;
}
if ((((*(yR100 *)rt_nil_check(F.p2308))).f_kind == v804)) {
yr986_SB();
yr997_SA(y_str("y_set_new(", 10));
yr1004_ST(yr1812_LoText(((*(yR100 *)rt_nil_check(F.p2308))).f_elem));
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1818_HiText(((*(yR100 *)rt_nil_check(F.p2308))).f_elem));
yr997_SA(y_str(")", 1));
F.p2310 = yr1016_SE();
while ((!(F.v5251 == ((void *)0)))) {
yr2125_Expr(F.v5251, ((*(yR100 *)rt_nil_check(F.p2308))).f_elem, &F.v5255, &F.v5261);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.v5251))).f_line, ((*(yR100 *)rt_nil_check(F.p2308))).f_elem, F.v5261);
F.p2310 = yr2175_Call2(y_str("y_set_add", 9), F.p2310, F.v5255);
F.v5251 = ((*(yR95 *)rt_nil_check(F.v5251))).f_next;
}
(*F.p2310_o) = F.p2310;
(*F.p2311_o) = F.p2311;
return;
}
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2309))).f_line, ((*(yR100 *)rt_nil_check(F.p2308))).f_tname, y_str(" has no denotations of values", 29));
(*F.p2310_o) = F.p2310;
(*F.p2311_o) = F.p2311;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2316_VariantOf(void * a_p2317, rt_int a_p2318, rt_int a_p2319) {
struct yf2320 F;
memset((void *)&F, 0, sizeof F);
F.p2317 = a_p2317;
F.p2318 = a_p2318;
F.p2319 = a_p2319;
F.v5340 = ((*(yR100 *)rt_nil_check(F.p2317))).f_fields;
while ((!(F.v5340 == ((void *)0)))) {
if ((!(((*(yR105 *)rt_nil_check(F.v5340))).f_variant == INT64_C(0)))) {
F.v5342 = ((*(yR105 *)rt_nil_check(F.v5340))).f_labels;
while ((!(F.v5342 == ((void *)0)))) {
yr2060_Manifest(F.v5342, &F.v5344, &F.v5346);
if ((F.v5344 && ((F.v5346 == F.p2318)))) {
{ rt_int rv5348 = ((*(yR105 *)rt_nil_check(F.v5340))).f_variant;
return rv5348; }
}
F.v5342 = ((*(yR95 *)rt_nil_check(F.v5342))).f_next;
}
}
F.v5340 = ((*(yR105 *)rt_nil_check(F.v5340))).f_next;
}
{ rt_int rv5350 = INT64_C(-1);
return rv5350; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2403_Emit2(yarr a_p2405, rt_int a_p2406) {
struct yf2407 F;
memset((void *)&F, 0, sizeof F);
F.p2405 = a_p2405;
F.p2406 = a_p2406;
yr986_SB();
yr997_SA(F.p2405);
yr1004_ST(F.p2406);
F.v5355 = yr1016_SE();
yr1092_Emit(F.v5355);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2411_Emit3(yarr a_p2413, rt_int a_p2414, yarr a_p2416) {
struct yf2417 F;
memset((void *)&F, 0, sizeof F);
F.p2413 = a_p2413;
F.p2414 = a_p2414;
F.p2416 = a_p2416;
yr986_SB();
yr997_SA(F.p2413);
yr1004_ST(F.p2414);
yr997_SA(F.p2416);
F.v5361 = yr1016_SE();
yr1092_Emit(F.v5361);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2421_PopTo(rt_int a_p2422) {
struct yf2423 F;
memset((void *)&F, 0, sizeof F);
F.p2422 = a_p2422;
if ((v2333 > F.p2422)) {
yr2411_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v2331).p)[y_ix1(v2331, rt_add(F.p2422, INT64_C(1)))], y_str(".prev;", 6));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2427_LeaveBlock(void) {
struct yf2428 F;
memset((void *)&F, 0, sizeof F);
if ((v2357 > INT64_C(0))) {
if ((!(((rt_int *)(v2346).p)[y_ix1(v2346, v2357)] == INT64_C(0)))) {
yr2411_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v2346).p)[y_ix1(v2346, v2357)], y_str(".prev;", 6));
}
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2432_RaiseCode(rt_int a_p2433) {
struct yf2434 F;
memset((void *)&F, 0, sizeof F);
F.p2433 = a_p2433;
yr986_SB();
yr997_SA(y_str("rt_raise(rt_exc(", 16));
yr991_SC(34);
yr1004_ST(F.p2433);
yr991_SC(34);
yr997_SA(y_str("));", 3));
{ rt_int rv5379 = yr1016_SE();
return rv5379; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2438_BlockStatements(void * a_p2439) {
struct yf2440 F;
memset((void *)&F, 0, sizeof F);
F.p2439 = a_p2439;
F.v5395 = ((*(yR95 *)rt_nil_check(F.p2439))).f_a;
F.v5397 = INT64_C(0);
while ((!(F.v5395 == ((void *)0)))) {
if ((((((*(yR95 *)rt_nil_check(F.v5395))).f_kind == v615)) && ((F.v5397 == INT64_C(0))))) {
F.v5397 = yr1146_Fresh(y_str("xs", 2));
yr2411_Emit3(y_str("rt_frame *", 10), F.v5397, y_str(" = rt_xtop;", 11));
}
F.v5395 = ((*(yR95 *)rt_nil_check(F.v5395))).f_next;
}
if ((((*(yR95 *)rt_nil_check(F.p2439))).f_b == ((void *)0))) {
v2357 = rt_range(rt_add(v2357, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2346).p)[y_ix1(v2346, v2357)] = INT64_C(0);
((rt_int *)(v2355).p)[y_ix1(v2355, v2357)] = F.v5397;
yr2444_Statements(((*(yR95 *)rt_nil_check(F.p2439))).f_c);
v2357 = rt_range(rt_sub(v2357, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr2512_CheckLabels(((*(yR95 *)rt_nil_check(F.p2439))).f_a);
return;
}
v2400 = 1;
F.v5383 = yr1146_Fresh(y_str("xf", 2));
yr2411_Emit3(y_str("{ rt_frame ", 11), F.v5383, y_str(";", 1));
yr2411_Emit3(y_str("if (RT_TRY(", 11), F.v5383, y_str(")) {", 4));
v2333 = rt_range(rt_add(v2333, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2331).p)[y_ix1(v2331, v2333)] = F.v5383;
v2357 = rt_range(rt_add(v2357, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2346).p)[y_ix1(v2346, v2357)] = F.v5383;
((rt_int *)(v2355).p)[y_ix1(v2355, v2357)] = F.v5397;
yr2444_Statements(((*(yR95 *)rt_nil_check(F.p2439))).f_c);
v2357 = rt_range(rt_sub(v2357, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v2333 = rt_range(rt_sub(v2333, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr2512_CheckLabels(((*(yR95 *)rt_nil_check(F.p2439))).f_a);
yr2411_Emit3(y_str("RT_POP(", 7), F.v5383, y_str(");", 2));
yr1098_EmitS(y_str("} else {", 8));
yr2411_Emit3(y_str("RT_POP(", 7), F.v5383, y_str(");", 2));
F.v5385 = yr1146_Fresh(y_str("xc", 2));
yr2411_Emit3(y_str("int ", 4), F.v5385, y_str(" = rt_xcur;", 11));
v2357 = rt_range(rt_add(v2357, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2346).p)[y_ix1(v2346, v2357)] = INT64_C(0);
((rt_int *)(v2355).p)[y_ix1(v2355, v2357)] = INT64_C(0);
v2369 = rt_range(rt_add(v2369, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2367).p)[y_ix1(v2367, v2369)] = F.v5385;
F.v5393 = 1;
F.v5389 = ((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2439))).f_b))).f_a;
while ((!(F.v5389 == ((void *)0)))) {
yr986_SB();
if (F.v5393) {
yr997_SA(y_str("if (", 4));
} else {
yr997_SA(y_str("} else if (", 11));
}
F.v5393 = 0;
F.v5391 = ((*(yR95 *)rt_nil_check(F.v5389))).f_a;
while ((!(F.v5391 == ((void *)0)))) {
yr1004_ST(F.v5385);
yr997_SA(y_str(" == rt_exc(", 11));
yr991_SC(34);
yr1004_ST(((*(yR95 *)rt_nil_check(F.v5391))).f_name);
yr991_SC(34);
yr997_SA(y_str(")", 1));
if ((!(((*(yR95 *)rt_nil_check(F.v5391))).f_next == ((void *)0)))) {
yr997_SA(y_str(" || ", 4));
}
F.v5391 = ((*(yR95 *)rt_nil_check(F.v5391))).f_next;
}
yr997_SA(y_str(") {", 3));
F.v5387 = yr1016_SE();
yr1092_Emit(F.v5387);
yr2444_Statements(((*(yR95 *)rt_nil_check(F.v5389))).f_b);
F.v5389 = ((*(yR95 *)rt_nil_check(F.v5389))).f_next;
}
if ((!F.v5393)) {
yr1098_EmitS(y_str("} else {", 8));
}
if ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2439))).f_b))).f_flag == INT64_C(1))) {
yr2444_Statements(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2439))).f_b))).f_b);
} else {
yr2411_Emit3(y_str("rt_raise(", 9), F.v5385, y_str(");", 2));
}
if ((!F.v5393)) {
yr1098_EmitS(y_str("}", 1));
}
v2369 = rt_range(rt_sub(v2369, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v2357 = rt_range(rt_sub(v2357, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1098_EmitS(y_str("}}", 2));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2444_Statements(void * a_p2445) {
struct yf2446 F;
memset((void *)&F, 0, sizeof F);
F.p2445 = a_p2445;
F.v5459 = F.p2445;
while ((!(F.v5459 == ((void *)0)))) {
yr2468_Statement(F.v5459);
F.v5459 = ((*(yR95 *)rt_nil_check(F.v5459))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2450_Cond(void * a_p2451) {
struct yf2452 F;
memset((void *)&F, 0, sizeof F);
F.p2451 = a_p2451;
yr2125_Expr(F.p2451, v1685, &F.v5463, &F.v5465);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2451))).f_line, v1685, F.v5465);
{ rt_int rv5466 = F.v5463;
return rv5466; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2456_Label(void * a_p2457, void * a_p2458) {
struct yf2459 F;
memset((void *)&F, 0, sizeof F);
F.p2457 = a_p2457;
F.p2458 = a_p2458;
if (((((((*(yR95 *)rt_nil_check(F.p2457))).f_kind == v747)) && ((((*(yR95 *)rt_nil_check(F.p2457))).f_d == ((void *)0)))) && ((((*(yR100 *)rt_nil_check(F.p2458))).f_kind == v786)))) {
F.v5475 = yr1637_FindLit(((*(yR95 *)rt_nil_check(F.p2457))).f_name, F.p2458);
if ((!(F.v5475 == ((void *)0)))) {
{ rt_int rv5480 = ((*(yR115 *)rt_nil_check(yr1677_Real(F.v5475)))).f_mval;
return rv5480; }
}
}
yr2125_Expr(F.p2457, F.p2458, &F.v5479, &F.v5477);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2457))).f_line, F.p2458, F.v5477);
yr2060_Manifest(F.p2457, &F.v5471, &F.v5473);
if ((!F.v5471)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2457))).f_line, y_str("a CASE label is a manifest constant (IX.B.1)", 44));
}
{ rt_int rv5482 = F.v5473;
return rv5482; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2463_CopyOut(void) {
struct yf2464 F;
memset((void *)&F, 0, sizeof F);
if ((v2398 == ((void *)0))) {
return;
}
F.v5485 = ((*(yR115 *)rt_nil_check(v2398))).f_params;
while ((!(F.v5485 == ((void *)0)))) {
if ((((*(yR110 *)rt_nil_check(F.v5485))).f_cls == v870)) {
yr986_SB();
yr997_SA(y_str("(*F.", 4));
yr1004_ST(((*(yR110 *)rt_nil_check(F.v5485))).f_cname);
yr997_SA(y_str("_o)", 3));
F.v5487 = yr1016_SE();
yr2076_Store(F.v5487, ((*(yR110 *)rt_nil_check(F.v5485))).f_rep, yr1651_Path(v1576, ((*(yR110 *)rt_nil_check(F.v5485))).f_cname), ((*(yR110 *)rt_nil_check(F.v5485))).f_rep, INT64_C(0));
}
F.v5485 = ((*(yR110 *)rt_nil_check(F.v5485))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2468_Statement(void * a_p2469) {
struct yf2470 F;
memset((void *)&F, 0, sizeof F);
F.p2469 = a_p2469;
F.v5494 = ((*(yR95 *)rt_nil_check(F.p2469))).f_kind;
v960 = ((*(yR95 *)rt_nil_check(F.p2469))).f_line;
if ((!(((*(yR95 *)rt_nil_check(F.p2469))).f_text == INT64_C(0)))) {
yr2500_PlaceLabel(F.p2469);
}
if ((F.v5494 == v684)) {
yr2098_LValue(((*(yR95 *)rt_nil_check(F.p2469))).f_a, &F.v5496, &F.v5508);
yr2092_CheckPure(((*(yR95 *)rt_nil_check(F.p2469))).f_a);
if ((((*(yR100 *)rt_nil_check(F.v5508))).f_kind == v807)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2469))).f_line, y_str("assignment is not defined for signals (VI.A.1.d)", 48));
}
if ((((((*(yR100 *)rt_nil_check(F.v5508))).f_kind == v801)) || ((((*(yR100 *)rt_nil_check(F.v5508))).f_kind == v810)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2469))).f_line, y_str("assignment is not defined for files and semaphores (VII.B)", 58));
}
if ((((*(yR100 *)rt_nil_check(F.v5508))).f_opaque && (((rt_mod(((*(yR100 *)rt_nil_check(F.v5508))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2469))).f_line, ((*(yR100 *)rt_nil_check(F.v5508))).f_tname, y_str(" is opaque here: := is not exported (X.B.3)", 43));
}
yr2125_Expr(((*(yR95 *)rt_nil_check(F.p2469))).f_b, F.v5508, &F.v5498, &F.v5510);
yr2076_Store(F.v5496, F.v5508, F.v5498, F.v5510, ((*(yR95 *)rt_nil_check(F.p2469))).f_line);
} else if ((F.v5494 == v687)) {
F.v5524 = yr1612_Find(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2469))).f_a))).f_name);
if ((!(F.v5524 == ((void *)0)))) {
F.v5524 = yr1677_Real(F.v5524);
}
if ((((!(F.v5524 == ((void *)0)))) && ((((*(yR115 *)rt_nil_check(F.v5524))).f_kind == v855)))) {
yr2663_Activate(((*(yR95 *)rt_nil_check(F.p2469))).f_a, F.v5524);
} else {
yr2297_CallExpr(((*(yR95 *)rt_nil_check(F.p2469))).f_a, ((void *)0), 1, &F.v5496, &F.v5508);
yr2403_Emit2(y_str("", 0), F.v5496);
yr986_SB();
yr1004_ST(F.v5496);
yr997_SA(y_str(";", 1));
F.v5500 = yr1016_SE();
((*(yR125 *)rt_nil_check((v956).f_tail))).f_t = F.v5500;
}
} else if ((F.v5494 == v708)) {
F.v5516 = 1;
F.v5512 = ((*(yR95 *)rt_nil_check(F.p2469))).f_a;
while ((!(F.v5512 == ((void *)0)))) {
F.v5496 = yr2450_Cond(((*(yR95 *)rt_nil_check(F.v5512))).f_a);
if (F.v5516) {
yr2411_Emit3(y_str("if (", 4), F.v5496, y_str(") {", 3));
} else {
yr2411_Emit3(y_str("} else if (", 11), F.v5496, y_str(") {", 3));
}
F.v5516 = 0;
yr2444_Statements(((*(yR95 *)rt_nil_check(F.v5512))).f_b);
F.v5512 = ((*(yR95 *)rt_nil_check(F.v5512))).f_next;
}
if ((((*(yR95 *)rt_nil_check(F.p2469))).f_flag == INT64_C(1))) {
yr1098_EmitS(y_str("} else {", 8));
yr2444_Statements(((*(yR95 *)rt_nil_check(F.p2469))).f_b);
}
yr1098_EmitS(y_str("}", 1));
} else if ((F.v5494 == v714)) {
F.v5496 = yr2450_Cond(((*(yR95 *)rt_nil_check(F.p2469))).f_a);
yr2411_Emit3(y_str("while (", 7), F.v5496, y_str(") {", 3));
yr2444_Statements(((*(yR95 *)rt_nil_check(F.p2469))).f_b);
yr1098_EmitS(y_str("}", 1));
} else if ((F.v5494 == v720)) {
F.v5502 = yr1146_Fresh(y_str("yl_", 3));
v2392 = rt_range(rt_add(v2392, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2379).p)[y_ix1(v2379, v2392)] = ((*(yR95 *)rt_nil_check(F.p2469))).f_name;
((rt_int *)(v2381).p)[y_ix1(v2381, v2392)] = F.v5502;
((rt_int *)(v2390).p)[y_ix1(v2390, v2392)] = v2333;
yr1098_EmitS(y_str("for (;;) {", 10));
yr2444_Statements(((*(yR95 *)rt_nil_check(F.p2469))).f_b);
yr1098_EmitS(y_str("}", 1));
yr2411_Emit3(y_str("", 0), F.v5502, y_str(": ;", 3));
v2392 = rt_range(rt_sub(v2392, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v5494 == v696)) {
F.v5518 = 0;
F.v5520 = v2392;
while ((((F.v5520 > v2395)) && (!F.v5518))) {
if ((((rt_int *)(v2379).p)[y_ix1(v2379, F.v5520)] == ((*(yR95 *)rt_nil_check(F.p2469))).f_name)) {
F.v5518 = 1;
yr2421_PopTo(((rt_int *)(v2390).p)[y_ix1(v2390, F.v5520)]);
yr2411_Emit3(y_str("goto ", 5), ((rt_int *)(v2381).p)[y_ix1(v2381, F.v5520)], y_str(";", 1));
}
F.v5520 = rt_range(rt_sub(F.v5520, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((!F.v5518)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2469))).f_line, ((*(yR95 *)rt_nil_check(F.p2469))).f_name, y_str(": EXIT names no LOOP around it here (IX.A.5)", 44));
}
} else if ((F.v5494 == v717)) {
yr2474_ForStatement(F.p2469);
} else if ((F.v5494 == v711)) {
yr2125_Expr(((*(yR95 *)rt_nil_check(F.p2469))).f_a, ((void *)0), &F.v5496, &F.v5508);
if ((!yr1720_IsDiscrete(F.v5508))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2469))).f_line, y_str("SELECT on a value that is not integer or scalar", 47));
}
yr2411_Emit3(y_str("switch (", 8), F.v5496, y_str(") {", 3));
F.v5512 = ((*(yR95 *)rt_nil_check(F.p2469))).f_b;
while ((!(F.v5512 == ((void *)0)))) {
F.v5514 = ((*(yR95 *)rt_nil_check(F.v5512))).f_a;
while ((!(F.v5514 == ((void *)0)))) {
F.v5522 = yr2456_Label(F.v5514, F.v5508);
yr986_SB();
yr997_SA(y_str("case ", 5));
yr1010_SI(F.v5522);
yr997_SA(y_str(":", 1));
F.v5500 = yr1016_SE();
yr1092_Emit(F.v5500);
F.v5514 = ((*(yR95 *)rt_nil_check(F.v5514))).f_next;
}
yr1098_EmitS(y_str("{", 1));
yr2444_Statements(((*(yR95 *)rt_nil_check(F.v5512))).f_b);
yr1098_EmitS(y_str("} break;", 8));
F.v5512 = ((*(yR95 *)rt_nil_check(F.v5512))).f_next;
}
yr1098_EmitS(y_str("default: {", 10));
if ((((*(yR95 *)rt_nil_check(F.p2469))).f_flag == INT64_C(1))) {
yr2444_Statements(((*(yR95 *)rt_nil_check(F.p2469))).f_c);
}
yr1098_EmitS(y_str("} break;", 8));
yr1098_EmitS(y_str("}", 1));
} else if ((F.v5494 == v699)) {
yr2488_ReturnStatement(F.p2469);
} else if ((F.v5494 == v705)) {
if ((((*(yR95 *)rt_nil_check(F.p2469))).f_name == INT64_C(0))) {
if ((v2369 == INT64_C(0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2469))).f_line, y_str("PROPAGATE_EXCEPTION without a name is used in a handler (IX.A.8)", 64));
}
yr2411_Emit3(y_str("rt_raise(", 9), ((rt_int *)(v2367).p)[y_ix1(v2367, v2369)], y_str(");", 2));
} else {
yr2427_LeaveBlock();
yr1092_Emit(yr2432_RaiseCode(((*(yR95 *)rt_nil_check(F.p2469))).f_name));
}
} else if ((F.v5494 == v690)) {
F.v5496 = yr2450_Cond(((*(yR95 *)rt_nil_check(F.p2469))).f_a);
yr2411_Emit3(y_str("if (!(", 6), F.v5496, y_str(")) {", 4));
yr2427_LeaveBlock();
yr1098_EmitS(y_str("rt_raise(RT_X_ASSERT); }", 24));
} else if ((F.v5494 == v723)) {
yr2494_BeginStatement(F.p2469);
} else if ((F.v5494 == v702)) {
yr2687_TerminateStatement(F.p2469);
} else if ((F.v5494 == v693)) {
yr2506_GotoStatement(F.p2469);
} else {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2469))).f_line, y_str("not a statement", 15));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2474_ForStatement(void * a_p2475) {
struct yf2476 F;
memset((void *)&F, 0, sizeof F);
F.p2475 = a_p2475;
F.v5586 = yr1851_MakeRep(((*(yR95 *)rt_nil_check(F.p2475))).f_a, INT64_C(0), 0);
if ((!yr1720_IsDiscrete(F.v5586))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2475))).f_line, y_str("FOR goes over an integer or scalar representation", 49));
}
yr1791_CheckRepresented(F.v5586, ((*(yR95 *)rt_nil_check(F.p2475))).f_line);
yr1595_OpenScope(0);
F.v5594 = yr1588_NewSym(v834, ((*(yR95 *)rt_nil_check(F.p2475))).f_name);
((*(yR115 *)rt_nil_check(F.v5594))).f_rep = F.v5586;
((*(yR115 *)rt_nil_check(F.v5594))).f_level = v1576;
((*(yR115 *)rt_nil_check(F.v5594))).f_cname = yr1146_Fresh(y_str("c_", 2));
yr1664_DeclStorage(yr1021_T(y_str("rt_int", 6)), ((*(yR115 *)rt_nil_check(F.v5594))).f_cname);
yr1644_Define(F.v5594, ((*(yR95 *)rt_nil_check(F.p2475))).f_line);
F.v5588 = yr1146_Fresh(y_str("i", 1));
F.v5590 = yr1146_Fresh(y_str("hi", 2));
yr986_SB();
yr997_SA(y_str("{ rt_int ", 9));
yr1004_ST(F.v5590);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr1818_HiText(F.v5586));
yr997_SA(y_str(";", 1));
F.v5592 = yr1016_SE();
yr1092_Emit(F.v5592);
yr986_SB();
yr997_SA(y_str("for (rt_int ", 12));
yr1004_ST(F.v5588);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr1812_LoText(F.v5586));
yr997_SA(y_str("; ", 2));
yr1004_ST(F.v5588);
yr997_SA(y_str(" <= ", 4));
yr1004_ST(F.v5590);
yr997_SA(y_str("; ", 2));
yr1004_ST(F.v5588);
yr997_SA(y_str("++) { ", 6));
yr1004_ST(yr1671_SymPath(F.v5594));
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.v5588);
yr997_SA(y_str(";", 1));
F.v5592 = yr1016_SE();
yr1092_Emit(F.v5592);
yr2444_Statements(((*(yR95 *)rt_nil_check(F.p2475))).f_b);
yr2411_Emit3(y_str("if (", 4), F.v5588, y_str(" == ", 4));
((*(yR125 *)rt_nil_check((v956).f_tail))).f_t = yr2480_Join(((*(yR125 *)rt_nil_check((v956).f_tail))).f_t, F.v5590, yr1021_T(y_str(") break;", 8)));
yr1098_EmitS(y_str("}}", 2));
yr1601_CloseScope();
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2480_Join(rt_int a_p2481, rt_int a_p2482, rt_int a_p2483) {
struct yf2484 F;
memset((void *)&F, 0, sizeof F);
F.p2481 = a_p2481;
F.p2482 = a_p2482;
F.p2483 = a_p2483;
yr986_SB();
yr1004_ST(F.p2481);
yr1004_ST(F.p2482);
yr1004_ST(F.p2483);
{ rt_int rv5622 = yr1016_SE();
return rv5622; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2488_ReturnStatement(void * a_p2489) {
struct yf2490 F;
memset((void *)&F, 0, sizeof F);
F.p2489 = a_p2489;
if ((v2398 == ((void *)0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2489))).f_line, y_str("RETURN outside a routine (IX.A.6)", 33));
}
if ((((*(yR115 *)rt_nil_check(v2398))).f_kind == v855)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2489))).f_line, y_str("a process ends with TERMINATE_PROCESS (IX.A.7)", 46));
}
F.v5634 = ((*(yR115 *)rt_nil_check(v2398))).f_ret;
if ((((*(yR95 *)rt_nil_check(F.p2489))).f_a == ((void *)0))) {
if ((!(((*(yR100 *)rt_nil_check(F.v5634))).f_kind == v822))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2489))).f_line, y_str("RETURN needs a value here (IX.A.6)", 34));
}
yr2463_CopyOut();
yr2682_LeaveMonitor();
yr2421_PopTo(v2336);
yr1098_EmitS(y_str("return;", 7));
return;
}
if ((((*(yR100 *)rt_nil_check(F.v5634))).f_kind == v822)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2489))).f_line, y_str("this routine returns no value (IX.A.6)", 38));
}
yr2125_Expr(((*(yR95 *)rt_nil_check(F.p2489))).f_a, F.v5634, &F.v5626, &F.v5632);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2489))).f_line, F.v5634, F.v5632);
F.v5630 = yr1146_Fresh(y_str("rv", 2));
yr986_SB();
yr997_SA(y_str("{ ", 2));
yr1004_ST(yr1750_CType(F.v5634));
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v5630);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2068_Convert(F.v5626, F.v5634, F.v5632));
yr997_SA(y_str(";", 1));
F.v5628 = yr1016_SE();
yr1092_Emit(F.v5628);
yr2463_CopyOut();
yr2682_LeaveMonitor();
yr2421_PopTo(v2336);
yr2411_Emit3(y_str("return ", 7), F.v5630, y_str("; }", 3));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2494_BeginStatement(void * a_p2495) {
struct yf2496 F;
memset((void *)&F, 0, sizeof F);
F.p2495 = a_p2495;
yr1098_EmitS(y_str("{", 1));
yr1595_OpenScope(0);
yr2584_Declarations(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2495))).f_a))).f_a);
yr2438_BlockStatements(((*(yR95 *)rt_nil_check(F.p2495))).f_a);
yr2658_AwaitProcesses();
yr1601_CloseScope();
yr1098_EmitS(y_str("}", 1));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2500_PlaceLabel(void * a_p2501) {
struct yf2502 F;
memset((void *)&F, 0, sizeof F);
F.p2501 = a_p2501;
F.v5655 = yr1618_FindHere(((*(yR95 *)rt_nil_check(F.p2501))).f_text);
if ((((F.v5655 == ((void *)0))) || ((!(((*(yR115 *)rt_nil_check(F.v5655))).f_kind == v858))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2501))).f_line, ((*(yR95 *)rt_nil_check(F.p2501))).f_text, y_str(" labels a statement but is not declared by LABEL in this block (VII.C)", 70));
}
if (((*(yR115 *)rt_nil_check(F.v5655))).f_hasmv) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2501))).f_line, ((*(yR95 *)rt_nil_check(F.p2501))).f_text, y_str(" labels two statements", 22));
}
((*(yR115 *)rt_nil_check(F.v5655))).f_hasmv = 1;
yr2411_Emit3(y_str("", 0), ((*(yR115 *)rt_nil_check(F.v5655))).f_cname, y_str(": ;", 3));
if ((!(((rt_int *)(v2346).p)[y_ix1(v2346, v2357)] == INT64_C(0)))) {
yr2411_Emit3(y_str("rt_xtop = &", 11), ((rt_int *)(v2346).p)[y_ix1(v2346, v2357)], y_str(";", 1));
} else if ((!(((rt_int *)(v2355).p)[y_ix1(v2355, v2357)] == INT64_C(0)))) {
yr2411_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v2355).p)[y_ix1(v2355, v2357)], y_str(";", 1));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2506_GotoStatement(void * a_p2507) {
struct yf2508 F;
memset((void *)&F, 0, sizeof F);
F.p2507 = a_p2507;
F.v5670 = yr1624_Lookup(((*(yR95 *)rt_nil_check(F.p2507))).f_name, ((*(yR95 *)rt_nil_check(F.p2507))).f_line);
if ((!(((*(yR115 *)rt_nil_check(F.v5670))).f_kind == v858))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2507))).f_line, ((*(yR95 *)rt_nil_check(F.p2507))).f_name, y_str(" is not a label", 15));
}
if ((!(((*(yR115 *)rt_nil_check(F.v5670))).f_level == v1576))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2507))).f_line, ((*(yR95 *)rt_nil_check(F.p2507))).f_name, y_str(": GOTO does not leave a routine or process (IX.A.4)", 51));
}
((*(yR115 *)rt_nil_check(F.v5670))).f_readonly = 1;
yr2411_Emit3(y_str("goto ", 5), ((*(yR115 *)rt_nil_check(F.v5670))).f_cname, y_str(";", 1));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2512_CheckLabels(void * a_p2513) {
struct yf2514 F;
memset((void *)&F, 0, sizeof F);
F.p2513 = a_p2513;
F.v5679 = F.p2513;
while ((!(F.v5679 == ((void *)0)))) {
if ((((*(yR95 *)rt_nil_check(F.v5679))).f_kind == v615)) {
F.v5681 = ((*(yR95 *)rt_nil_check(F.v5679))).f_a;
while ((!(F.v5681 == ((void *)0)))) {
F.v5683 = yr1618_FindHere(((*(yR95 *)rt_nil_check(F.v5681))).f_name);
if ((((((!(F.v5683 == ((void *)0)))) && ((((*(yR115 *)rt_nil_check(F.v5683))).f_kind == v858))) && ((*(yR115 *)rt_nil_check(F.v5683))).f_readonly) && (!((*(yR115 *)rt_nil_check(F.v5683))).f_hasmv))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.v5681))).f_line, ((*(yR95 *)rt_nil_check(F.v5681))).f_name, y_str(" is the target of a GOTO but labels no statement of its block", 61));
}
F.v5681 = ((*(yR95 *)rt_nil_check(F.v5681))).f_next;
}
}
F.v5679 = ((*(yR95 *)rt_nil_check(F.v5679))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2518_RoutineCName(rt_int a_p2519) {
struct yf2520 F;
memset((void *)&F, 0, sizeof F);
F.p2519 = a_p2519;
F.v5688 = yr1141_NewSerial();
F.v5690 = 1;
F.lo5694 = INT64_C(1);
F.hi5695 = ((rt_int *)(v890).p)[y_ix1(v890, F.p2519)];
{ rt_int hi5699 = F.hi5695;
for (rt_int i5698 = F.lo5694; i5698 <= hi5699; i5698++) { F.c_5697 = i5698;
if ((!((yr968_IsLetter(yr1063_TChar(F.p2519, rt_range(F.c_5697, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || yr974_IsDigit(yr1063_TChar(F.p2519, rt_range(F.c_5697, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))))) {
F.v5690 = 0;
}
if (i5698 == hi5699) break;
}}
yr986_SB();
yr997_SA(y_str("yr", 2));
yr1010_SI(F.v5688);
if (F.v5690) {
yr997_SA(y_str("_", 1));
yr1004_ST(F.p2519);
}
{ rt_int rv5703 = yr1016_SE();
return rv5703; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2524_FormalRep(void * a_p2525) {
struct yf2526 F;
memset((void *)&F, 0, sizeof F);
F.p2525 = a_p2525;
if ((((*(yR95 *)rt_nil_check(F.p2525))).f_kind == v666)) {
yr2060_Manifest(((*(yR95 *)rt_nil_check(F.p2525))).f_a, &F.v5709, &F.v5711);
if ((((!F.v5709) || ((F.v5711 < INT64_C(1)))) || ((F.v5711 > INT64_C(4))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2525))).f_line, y_str("DIMENSIONS is a manifest constant from 1 to 4", 45));
}
F.v5707 = yr1707_NewRep(v813, yr1021_T(y_str("length-unresolved array", 23)));
((*(yR100 *)rt_nil_check(F.v5707))).f_nidx = F.v5711;
((*(yR100 *)rt_nil_check(F.v5707))).f_elem = yr1851_MakeRep(((*(yR95 *)rt_nil_check(F.p2525))).f_b, INT64_C(0), 0);
yr1791_CheckRepresented(((*(yR100 *)rt_nil_check(F.v5707))).f_elem, ((*(yR95 *)rt_nil_check(F.p2525))).f_line);
((*(yR100 *)rt_nil_check(F.v5707))).f_deep = 1;
{ void * rv5719 = F.v5707;
return rv5719; }
}
if ((((*(yR95 *)rt_nil_check(F.p2525))).f_kind == v669)) {
{ void * rv5721 = yr1707_NewRep(v825, yr1021_T(y_str("SPACE", 5)));
return rv5721; }
}
F.v5707 = yr1851_MakeRep(F.p2525, INT64_C(0), 0);
yr1791_CheckRepresented(F.v5707, ((*(yR95 *)rt_nil_check(F.p2525))).f_line);
{ void * rv5724 = F.v5707;
return rv5724; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2530_ParamCType(void * a_p2531) {
struct yf2532 F;
memset((void *)&F, 0, sizeof F);
F.p2531 = a_p2531;
F.v5728 = yr1750_CType(((*(yR110 *)rt_nil_check(F.p2531))).f_rep);
if ((((*(yR110 *)rt_nil_check(F.p2531))).f_cls == v867)) {
{ rt_int rv5729 = F.v5728;
return rv5729; }
}
yr986_SB();
yr1004_ST(F.v5728);
yr997_SA(y_str(" *", 2));
{ rt_int rv5731 = yr1016_SE();
return rv5731; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2536_RoutineHeader(void * a_p2537, rt_int a_p2538) {
struct yf2539 F;
memset((void *)&F, 0, sizeof F);
F.p2537 = a_p2537;
F.p2538 = a_p2538;
F.v5752 = 1;
F.v5736 = yr1588_NewSym(F.p2538, ((*(yR95 *)rt_nil_check(F.p2537))).f_name);
((*(yR115 *)rt_nil_check(F.v5736))).f_decl = F.p2537;
((*(yR115 *)rt_nil_check(F.v5736))).f_func = (((*(yR95 *)rt_nil_check(F.p2537))).f_flag == INT64_C(1));
((*(yR115 *)rt_nil_check(F.v5736))).f_level = rt_range(rt_add(v1576, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR115 *)rt_nil_check(F.v5736))).f_cname = yr2518_RoutineCName(((*(yR95 *)rt_nil_check(F.p2537))).f_name);
if ((!(((*(yR95 *)rt_nil_check(F.p2537))).f_b == ((void *)0)))) {
((*(yR115 *)rt_nil_check(F.v5736))).f_ret = yr1851_MakeRep(((*(yR95 *)rt_nil_check(F.p2537))).f_b, INT64_C(0), 0);
yr1791_CheckRepresented(((*(yR115 *)rt_nil_check(F.v5736))).f_ret, ((*(yR95 *)rt_nil_check(F.p2537))).f_line);
} else {
((*(yR115 *)rt_nil_check(F.v5736))).f_ret = v1689;
if (((*(yR115 *)rt_nil_check(F.v5736))).f_func) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2537))).f_line, ((*(yR95 *)rt_nil_check(F.p2537))).f_name, y_str(": a FUNCTION has a RETURNS clause (X.A)", 39));
}
}
F.v5746 = ((void *)0);
F.v5740 = ((*(yR95 *)rt_nil_check(F.p2537))).f_a;
while ((!(F.v5740 == ((void *)0)))) {
F.v5748 = yr2524_FormalRep(((*(yR95 *)rt_nil_check(F.v5740))).f_b);
if ((((*(yR115 *)rt_nil_check(F.v5736))).f_func && ((!(((*(yR95 *)rt_nil_check(F.v5740))).f_ival == v867))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.v5740))).f_line, ((*(yR95 *)rt_nil_check(F.p2537))).f_name, y_str(": the parameters of a FUNCTION are CONST (X.A.2)", 48));
}
if ((((F.p2538 == v855)) && ((((*(yR95 *)rt_nil_check(F.v5740))).f_ival == v870)))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.v5740))).f_line, ((*(yR95 *)rt_nil_check(F.p2537))).f_name, y_str(": a process has no OUT parameters", 33));
}
F.v5742 = ((*(yR95 *)rt_nil_check(F.v5740))).f_a;
while ((!(F.v5742 == ((void *)0)))) {
({ F.v5744 = rt_alloc(sizeof(yR110)); });
(*(yR110 *)rt_nil_check(F.v5744)) = ((yR110){ .f_name = ((*(yR95 *)rt_nil_check(F.v5742))).f_name, .f_cls = ((*(yR95 *)rt_nil_check(F.v5740))).f_ival, .f_rep = F.v5748, .f_cname = yr1146_Fresh(y_str("p", 1)), .f_next = ((void *)0) });
if ((F.v5746 == ((void *)0))) {
((*(yR115 *)rt_nil_check(F.v5736))).f_params = F.v5744;
} else {
((*(yR110 *)rt_nil_check(F.v5746))).f_next = F.v5744;
}
F.v5746 = F.v5744;
((*(yR115 *)rt_nil_check(F.v5736))).f_nparams = rt_range(rt_add(((*(yR115 *)rt_nil_check(F.v5736))).f_nparams, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5742 = ((*(yR95 *)rt_nil_check(F.v5742))).f_next;
}
F.v5740 = ((*(yR95 *)rt_nil_check(F.v5740))).f_next;
}
F.v5738 = yr1612_Find(((*(yR95 *)rt_nil_check(F.p2537))).f_name);
if ((!(F.v5738 == ((void *)0)))) {
F.v5738 = yr1677_Real(F.v5738);
}
if (((((!(((*(yR95 *)rt_nil_check(F.p2537))).f_ival == INT64_C(0)))) && ((!(F.v5738 == ((void *)0))))) && ((((*(yR115 *)rt_nil_check(F.v5738))).f_kind == v846)))) {
((*(yR115 *)rt_nil_check(F.v5736))).f_alt = F.v5738;
if ((((((*(yR95 *)rt_nil_check(F.p2537))).f_ival == v309)) && ((!(yr2543_SameSignature(F.v5736, F.v5738) == ((void *)0)))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2537))).f_line, ((*(yR95 *)rt_nil_check(F.p2537))).f_name, y_str(" EXTENDS a definition for the same parameter types: use REPLACES", 64));
}
if ((((((*(yR95 *)rt_nil_check(F.p2537))).f_ival == v405)) && ((yr2543_SameSignature(F.v5736, F.v5738) == ((void *)0))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2537))).f_line, ((*(yR95 *)rt_nil_check(F.p2537))).f_name, y_str(" REPLACES no definition for these parameter types", 49));
}
}
((*(yR95 *)rt_nil_check(F.p2537))).f_sym = F.v5736;
yr1644_Define(F.v5736, ((*(yR95 *)rt_nil_check(F.p2537))).f_line);
((rt_int *)(v1586).p)[y_ix1(v1586, ((*(yR115 *)rt_nil_check(F.v5736))).f_level)] = yr1146_Fresh(y_str("yf", 2));
((*(yR115 *)rt_nil_check(F.v5736))).f_members = yr1588_NewSym(v861, ((rt_int *)(v1586).p)[y_ix1(v1586, ((*(yR115 *)rt_nil_check(F.v5736))).f_level)]);
yr986_SB();
yr997_SA(y_str("struct ", 7));
yr1004_ST(((rt_int *)(v1586).p)[y_ix1(v1586, ((*(yR115 *)rt_nil_check(F.v5736))).f_level)]);
yr997_SA(y_str(";", 1));
F.v5750 = yr1016_SE();
yr1070_Put(&v942, F.v5750);
yr986_SB();
yr997_SA(y_str("static ", 7));
if ((F.p2538 == v855)) {
yr997_SA(y_str("void", 4));
} else {
yr1004_ST(yr1750_CType(((*(yR115 *)rt_nil_check(F.v5736))).f_ret));
}
yr997_SA(y_str(" ", 1));
yr1004_ST(((*(yR115 *)rt_nil_check(F.v5736))).f_cname);
yr997_SA(y_str("(", 1));
F.v5750 = yr1016_SE();
if ((F.p2538 == v855)) {
F.v5750 = yr2480_Join(F.v5750, yr1021_T(y_str("void *arg", 9)), INT64_C(0));
F.v5752 = 0;
} else if ((v1576 > INT64_C(0))) {
yr986_SB();
yr1004_ST(F.v5750);
yr997_SA(y_str("struct ", 7));
yr1004_ST(((rt_int *)(v1586).p)[y_ix1(v1586, v1576)]);
yr997_SA(y_str(" *up", 4));
F.v5750 = yr1016_SE();
F.v5752 = 0;
}
F.v5744 = ((*(yR115 *)rt_nil_check(F.v5736))).f_params;
while ((((!(F.v5744 == ((void *)0)))) && ((!(F.p2538 == v855))))) {
yr986_SB();
yr1004_ST(F.v5750);
if ((!F.v5752)) {
yr997_SA(y_str(", ", 2));
}
F.v5752 = 0;
yr1004_ST(yr2530_ParamCType(F.v5744));
yr997_SA(y_str(" a_", 3));
yr1004_ST(((*(yR110 *)rt_nil_check(F.v5744))).f_cname);
F.v5750 = yr1016_SE();
F.v5744 = ((*(yR110 *)rt_nil_check(F.v5744))).f_next;
}
if (F.v5752) {
F.v5750 = yr2480_Join(F.v5750, yr1021_T(y_str("void", 4)), INT64_C(0));
}
F.v5750 = yr2480_Join(F.v5750, yr1021_T(y_str(")", 1)), INT64_C(0));
((*(yR115 *)rt_nil_check(F.v5736))).f_mnext = yr1588_NewSym(v861, F.v5750);
yr1070_Put(&v950, yr2480_Join(F.v5750, yr1021_T(y_str(";", 1)), INT64_C(0)));
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2543_SameSignature(void * a_p2544, void * a_p2545) {
struct yf2546 F;
memset((void *)&F, 0, sizeof F);
F.p2544 = a_p2544;
F.p2545 = a_p2545;
F.v5795 = F.p2545;
while ((!(F.v5795 == ((void *)0)))) {
if ((((*(yR115 *)rt_nil_check(F.v5795))).f_nparams == ((*(yR115 *)rt_nil_check(F.p2544))).f_nparams)) {
F.v5801 = 1;
F.v5797 = ((*(yR115 *)rt_nil_check(F.p2544))).f_params;
F.v5799 = ((*(yR115 *)rt_nil_check(F.v5795))).f_params;
while ((!(F.v5797 == ((void *)0)))) {
if ((!yr1768_SameType(((*(yR110 *)rt_nil_check(F.v5797))).f_rep, ((*(yR110 *)rt_nil_check(F.v5799))).f_rep))) {
F.v5801 = 0;
}
F.v5797 = ((*(yR110 *)rt_nil_check(F.v5797))).f_next;
F.v5799 = ((*(yR110 *)rt_nil_check(F.v5799))).f_next;
}
if (F.v5801) {
{ void * rv5804 = F.v5795;
return rv5804; }
}
}
F.v5795 = ((*(yR115 *)rt_nil_check(F.v5795))).f_alt;
}
{ void * rv5805 = ((void *)0);
return rv5805; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2550_RoutineBody(void * a_p2551) {
struct yf2552 F;
memset((void *)&F, 0, sizeof F);
F.p2551 = a_p2551;
F.v5809 = ((*(yR95 *)rt_nil_check(F.p2551))).f_sym;
F.v5811 = v956;
F.v5813 = v958;
F.v5815 = v1576;
F.v5817 = v2333;
F.v5819 = v2336;
F.v5821 = v2357;
F.v5823 = v2369;
F.v5825 = v2392;
F.v5827 = v2395;
F.v5829 = v2398;
F.v5831 = v2400;
v956 = ((yR130){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v958 = ((yR130){ .f_head = ((void *)0), .f_tail = ((void *)0) });
F.v5841 = ((yR130){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v1576 = ((*(yR115 *)rt_nil_check(F.v5809))).f_level;
F.v5837 = ((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5809))).f_members))).f_name;
((rt_int *)(v1586).p)[y_ix1(v1586, v1576)] = F.v5837;
v2336 = v2333;
v2395 = v2392;
v2369 = INT64_C(0);
v2398 = F.v5809;
v2400 = 0;
yr1595_OpenScope(0);
F.v5833 = ((*(yR115 *)rt_nil_check(F.v5809))).f_params;
while ((!(F.v5833 == ((void *)0)))) {
if ((((*(yR110 *)rt_nil_check(F.v5833))).f_cls == v867)) {
F.v5835 = yr1588_NewSym(v834, ((*(yR110 *)rt_nil_check(F.v5833))).f_name);
} else {
F.v5835 = yr1588_NewSym(v831, ((*(yR110 *)rt_nil_check(F.v5833))).f_name);
}
((*(yR115 *)rt_nil_check(F.v5835))).f_rep = ((*(yR110 *)rt_nil_check(F.v5833))).f_rep;
((*(yR115 *)rt_nil_check(F.v5835))).f_level = v1576;
((*(yR115 *)rt_nil_check(F.v5835))).f_cname = ((*(yR110 *)rt_nil_check(F.v5833))).f_cname;
if ((((*(yR115 *)rt_nil_check(F.v5809))).f_kind == v855)) {
((*(yR115 *)rt_nil_check(F.v5835))).f_byref = (((*(yR110 *)rt_nil_check(F.v5833))).f_cls == v873);
yr1664_DeclStorage(yr2530_ParamCType(F.v5833), ((*(yR110 *)rt_nil_check(F.v5833))).f_cname);
} else if ((((*(yR110 *)rt_nil_check(F.v5833))).f_cls == v873)) {
((*(yR115 *)rt_nil_check(F.v5835))).f_byref = 1;
yr1664_DeclStorage(yr2530_ParamCType(F.v5833), ((*(yR110 *)rt_nil_check(F.v5833))).f_cname);
yr1092_Emit(yr2480_Join(yr1021_T(y_str("F.", 2)), ((*(yR110 *)rt_nil_check(F.v5833))).f_cname, yr2480_Join(yr1021_T(y_str(" = a_", 5)), ((*(yR110 *)rt_nil_check(F.v5833))).f_cname, yr1021_T(y_str(";", 1)))));
} else if ((((*(yR110 *)rt_nil_check(F.v5833))).f_cls == v870)) {
yr1664_DeclStorage(yr1750_CType(((*(yR110 *)rt_nil_check(F.v5833))).f_rep), ((*(yR110 *)rt_nil_check(F.v5833))).f_cname);
yr1664_DeclStorage(yr2530_ParamCType(F.v5833), yr2480_Join(((*(yR110 *)rt_nil_check(F.v5833))).f_cname, yr1021_T(y_str("_o", 2)), INT64_C(0)));
yr1092_Emit(yr2480_Join(yr1021_T(y_str("F.", 2)), ((*(yR110 *)rt_nil_check(F.v5833))).f_cname, yr2480_Join(yr1021_T(y_str("_o = a_", 7)), ((*(yR110 *)rt_nil_check(F.v5833))).f_cname, yr1021_T(y_str(";", 1)))));
if ((yr1744_Deep(((*(yR110 *)rt_nil_check(F.v5833))).f_rep) && ((!(((*(yR100 *)rt_nil_check(((*(yR110 *)rt_nil_check(F.v5833))).f_rep))).f_kind == v813))))) {
yr1092_Emit(yr2480_Join(yr1021_T(y_str("y_init(", 7)), yr1756_DescOf(((*(yR110 *)rt_nil_check(F.v5833))).f_rep), yr2480_Join(yr1021_T(y_str(", &F.", 5)), ((*(yR110 *)rt_nil_check(F.v5833))).f_cname, yr1021_T(y_str(");", 2)))));
}
if ((((*(yR100 *)rt_nil_check(((*(yR110 *)rt_nil_check(F.v5833))).f_rep))).f_kind == v813)) {
yr1092_Emit(yr2480_Join(yr1021_T(y_str("F.", 2)), ((*(yR110 *)rt_nil_check(F.v5833))).f_cname, yr2480_Join(yr1021_T(y_str(" = *a_", 6)), ((*(yR110 *)rt_nil_check(F.v5833))).f_cname, yr1021_T(y_str(";", 1)))));
}
} else {
yr1664_DeclStorage(yr1750_CType(((*(yR110 *)rt_nil_check(F.v5833))).f_rep), ((*(yR110 *)rt_nil_check(F.v5833))).f_cname);
yr1092_Emit(yr2480_Join(yr1021_T(y_str("F.", 2)), ((*(yR110 *)rt_nil_check(F.v5833))).f_cname, yr2480_Join(yr1021_T(y_str(" = a_", 5)), ((*(yR110 *)rt_nil_check(F.v5833))).f_cname, yr1021_T(y_str(";", 1)))));
}
yr1644_Define(F.v5835, ((*(yR95 *)rt_nil_check(F.p2551))).f_line);
F.v5833 = ((*(yR110 *)rt_nil_check(F.v5833))).f_next;
}
yr2676_EnterMonitor(F.v5809);
yr2584_Declarations(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2551))).f_c))).f_a);
yr2438_BlockStatements(((*(yR95 *)rt_nil_check(F.p2551))).f_c);
if ((((*(yR115 *)rt_nil_check(F.v5809))).f_kind == v855)) {
yr1098_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
} else {
yr1098_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
}
yr2658_AwaitProcesses();
yr1601_CloseScope();
yr986_SB();
yr997_SA(y_str("struct ", 7));
yr1004_ST(F.v5837);
yr997_SA(y_str(" {", 2));
if ((v1576 > INT64_C(1))) {
yr997_SA(y_str(" struct ", 8));
yr1004_ST(((rt_int *)(v1586).p)[y_ix1(v1586, rt_sub(v1576, INT64_C(1)))]);
yr997_SA(y_str(" *up;", 5));
} else {
yr997_SA(y_str(" void *up;", 10));
}
F.v5839 = yr1016_SE();
yr1070_Put(&v946, F.v5839);
yr1085_Append(&v946, &v958);
yr1077_PutS(&v946, y_str("};", 2));
yr1070_Put(&F.v5841, yr2480_Join(((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5809))).f_mnext))).f_name, yr1021_T(y_str(" {", 2)), INT64_C(0)));
if (v2400) {
yr1077_PutS(&F.v5841, y_str("volatile", 8));
}
yr1070_Put(&F.v5841, yr2480_Join(yr1021_T(y_str("struct ", 7)), F.v5837, yr1021_T(y_str(" F;", 3))));
yr1077_PutS(&F.v5841, y_str("memset((void *)&F, 0, sizeof F);", 32));
if ((((*(yR115 *)rt_nil_check(F.v5809))).f_kind == v855)) {
yr1070_Put(&F.v5841, yr2480_Join(yr1021_T(y_str("F = *(struct ", 13)), F.v5837, yr1021_T(y_str(" *)arg;", 7))));
} else if ((v1576 > INT64_C(1))) {
yr1077_PutS(&F.v5841, y_str("F.up = up;", 10));
}
yr1085_Append(&F.v5841, &v956);
yr1077_PutS(&F.v5841, y_str("}", 1));
yr1085_Append(&v952, &F.v5841);
v956 = F.v5811;
v958 = F.v5813;
v1576 = F.v5815;
((rt_int *)(v1586).p)[y_ix1(v1586, v1576)] = yr1146_Fresh(y_str("unused", 6));
if ((!(F.v5829 == ((void *)0)))) {
((rt_int *)(v1586).p)[y_ix1(v1586, v1576)] = ((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5829))).f_members))).f_name;
}
v2333 = F.v5817;
v2336 = F.v5819;
v2357 = F.v5821;
v2369 = F.v5823;
v2392 = F.v5825;
v2395 = F.v5827;
v2398 = F.v5829;
v2400 = F.v5831;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2556_DeclareStorage(void * a_p2557, void * a_p2558, rt_int a_p2559) {
struct yf2560 F;
memset((void *)&F, 0, sizeof F);
F.p2557 = a_p2557;
F.p2558 = a_p2558;
F.p2559 = a_p2559;
((*(yR115 *)rt_nil_check(F.p2557))).f_rep = F.p2558;
((*(yR115 *)rt_nil_check(F.p2557))).f_level = v1576;
((*(yR115 *)rt_nil_check(F.p2557))).f_cname = yr1146_Fresh(y_str("v", 1));
yr1664_DeclStorage(yr1750_CType(F.p2558), ((*(yR115 *)rt_nil_check(F.p2557))).f_cname);
if (yr1744_Deep(F.p2558)) {
yr1092_Emit(yr2480_Join(yr1021_T(y_str("y_init(", 7)), yr1756_DescOf(F.p2558), yr2480_Join(yr1021_T(y_str(", &", 3)), yr1671_SymPath(F.p2557), yr1021_T(y_str(");", 2)))));
}
if ((((*(yR100 *)rt_nil_check(F.p2558))).f_kind == v804)) {
yr1092_Emit(yr2480_Join(yr1671_SymPath(F.p2557), yr1021_T(y_str(" = y_set_new(", 13)), yr2480_Join(yr1812_LoText(((*(yR100 *)rt_nil_check(F.p2558))).f_elem), yr1021_T(y_str(", ", 2)), yr2480_Join(yr1818_HiText(((*(yR100 *)rt_nil_check(F.p2558))).f_elem), yr1021_T(y_str(");", 2)), INT64_C(0)))));
}
if ((((*(yR100 *)rt_nil_check(F.p2558))).f_kind == v807)) {
yr2693_DeclareSignal(F.p2557, F.p2559);
}
if ((((*(yR100 *)rt_nil_check(F.p2558))).f_kind == v810)) {
yr1092_Emit(yr2480_Join(yr1021_T(y_str("rt_lock_init(&", 14)), yr1671_SymPath(F.p2557), yr1021_T(y_str(");", 2))));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2564_SimpleDecl(void * a_p2565) {
struct yf2566 F;
memset((void *)&F, 0, sizeof F);
F.p2565 = a_p2565;
F.v5903 = ((*(yR95 *)rt_nil_check(F.p2565))).f_kind;
if ((((F.v5903 == v609)) || ((F.v5903 == v612)))) {
F.v5905 = yr1851_MakeRep(((*(yR95 *)rt_nil_check(F.p2565))).f_b, INT64_C(0), 0);
yr1791_CheckRepresented(F.v5905, ((*(yR95 *)rt_nil_check(F.p2565))).f_line);
if ((((F.v5903 == v609)) && (((((((*(yR100 *)rt_nil_check(F.v5905))).f_kind == v807)) || ((((*(yR100 *)rt_nil_check(F.v5905))).f_kind == v801))) || ((((*(yR100 *)rt_nil_check(F.v5905))).f_kind == v810)))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2565))).f_line, y_str("signals, files and semaphores are variables (VII.B)", 51));
}
F.v5909 = ((*(yR95 *)rt_nil_check(F.p2565))).f_a;
while ((!(F.v5909 == ((void *)0)))) {
if ((F.v5903 == v609)) {
F.v5911 = yr1588_NewSym(v834, ((*(yR95 *)rt_nil_check(F.v5909))).f_name);
} else {
F.v5911 = yr1588_NewSym(v831, ((*(yR95 *)rt_nil_check(F.v5909))).f_name);
}
yr2556_DeclareStorage(F.v5911, F.v5905, ((*(yR95 *)rt_nil_check(F.p2565))).f_line);
if ((!(((*(yR95 *)rt_nil_check(F.p2565))).f_c == ((void *)0)))) {
yr2125_Expr(((*(yR95 *)rt_nil_check(F.p2565))).f_c, F.v5905, &F.v5913, &F.v5907);
yr2076_Store(yr1671_SymPath(F.v5911), F.v5905, F.v5913, F.v5907, ((*(yR95 *)rt_nil_check(F.p2565))).f_line);
if ((F.v5903 == v609)) {
yr2060_Manifest(((*(yR95 *)rt_nil_check(F.p2565))).f_c, &F.v5915, &F.v5917);
if ((F.v5915 && yr1720_IsDiscrete(F.v5905))) {
((*(yR115 *)rt_nil_check(F.v5911))).f_hasmv = 1;
((*(yR115 *)rt_nil_check(F.v5911))).f_mval = F.v5917;
}
}
}
if ((!(((*(yR95 *)rt_nil_check(F.v5909))).f_a == ((void *)0)))) {
yr2577_AtLocation(F.v5911, ((*(yR95 *)rt_nil_check(F.v5909))).f_a);
}
yr1644_Define(F.v5911, ((*(yR95 *)rt_nil_check(F.v5909))).f_line);
F.v5909 = ((*(yR95 *)rt_nil_check(F.v5909))).f_next;
}
return;
}
if ((F.v5903 == v621)) {
F.v5905 = yr1851_MakeRep(((*(yR95 *)rt_nil_check(F.p2565))).f_b, ((*(yR95 *)rt_nil_check(F.p2565))).f_name, 0);
yr1791_CheckRepresented(F.v5905, ((*(yR95 *)rt_nil_check(F.p2565))).f_line);
F.v5911 = yr1588_NewSym(v837, ((*(yR95 *)rt_nil_check(F.p2565))).f_name);
((*(yR115 *)rt_nil_check(F.v5911))).f_rep = F.v5905;
yr1644_Define(F.v5911, ((*(yR95 *)rt_nil_check(F.p2565))).f_line);
yr1859_ResolvePending(((*(yR95 *)rt_nil_check(F.p2565))).f_name, F.v5905);
yr2570_NoteAlphabet(F.p2565, F.v5905);
return;
}
if ((F.v5903 == v618)) {
F.v5905 = yr1851_MakeRep(((*(yR95 *)rt_nil_check(F.p2565))).f_b, ((*(yR95 *)rt_nil_check(F.p2565))).f_name, 1);
if ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2565))).f_b))).f_kind == v642)) {
F.v5905 = yr1714_CopyRep(F.v5905);
((*(yR100 *)rt_nil_check(F.v5905))).f_tid = yr1845_NewTid(((*(yR95 *)rt_nil_check(F.p2565))).f_name);
((*(yR100 *)rt_nil_check(F.v5905))).f_tname = ((*(yR95 *)rt_nil_check(F.p2565))).f_name;
if (((((((*(yR100 *)rt_nil_check(F.v5905))).f_kind == v774)) || ((((*(yR100 *)rt_nil_check(F.v5905))).f_kind == v777))) || ((((*(yR100 *)rt_nil_check(F.v5905))).f_kind == v780)))) {
if ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2565))).f_b))).f_a == ((void *)0))) {
((*(yR100 *)rt_nil_check(F.v5905))).f_abstract = 1;
}
}
}
F.v5911 = yr1588_NewSym(v840, ((*(yR95 *)rt_nil_check(F.p2565))).f_name);
((*(yR115 *)rt_nil_check(F.v5911))).f_rep = F.v5905;
yr1644_Define(F.v5911, ((*(yR95 *)rt_nil_check(F.p2565))).f_line);
yr1859_ResolvePending(((*(yR95 *)rt_nil_check(F.p2565))).f_name, F.v5905);
yr2570_NoteAlphabet(F.p2565, F.v5905);
return;
}
if ((F.v5903 == v615)) {
F.v5909 = ((*(yR95 *)rt_nil_check(F.p2565))).f_a;
while ((!(F.v5909 == ((void *)0)))) {
F.v5911 = yr1588_NewSym(v858, ((*(yR95 *)rt_nil_check(F.v5909))).f_name);
((*(yR115 *)rt_nil_check(F.v5911))).f_level = v1576;
((*(yR115 *)rt_nil_check(F.v5911))).f_cname = yr1146_Fresh(y_str("lab", 3));
yr1644_Define(F.v5911, ((*(yR95 *)rt_nil_check(F.v5909))).f_line);
F.v5909 = ((*(yR95 *)rt_nil_check(F.v5909))).f_next;
}
return;
}
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2565))).f_line, y_str("not a simple declaration", 24));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2570_NoteAlphabet(void * a_p2571, void * a_p2572) {
struct yf2573 F;
memset((void *)&F, 0, sizeof F);
F.p2571 = a_p2571;
F.p2572 = a_p2572;
if ((((((*(yR100 *)rt_nil_check(F.p2572))).f_kind == v789)) && ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2571))).f_b))).f_kind == v648)))) {
F.v5931 = yr1245_NewNode(v639, ((*(yR95 *)rt_nil_check(F.p2571))).f_line);
((*(yR95 *)rt_nil_check(F.v5931))).f_name = ((*(yR95 *)rt_nil_check(F.p2571))).f_name;
((*(yR95 *)rt_nil_check(F.v5931))).f_rep = F.p2572;
((*(yR95 *)rt_nil_check(F.v5931))).f_next = v2027;
v2027 = F.v5931;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2577_AtLocation(void * a_p2578, void * a_p2579) {
struct yf2580 F;
memset((void *)&F, 0, sizeof F);
F.p2578 = a_p2578;
F.p2579 = a_p2579;
if ((((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.p2578))).f_rep))).f_kind == v807)) {
yr2700_DeviceSignal(F.p2578, F.p2579);
return;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2584_Declarations(void * a_p2585) {
struct yf2586 F;
memset((void *)&F, 0, sizeof F);
F.p2585 = a_p2585;
F.v5938 = F.p2585;
F.v5940 = ((void *)0);
F.v5942 = ((void *)0);
F.v5944 = ((void *)0);
while ((!(F.v5938 == ((void *)0)))) {
v960 = ((*(yR95 *)rt_nil_check(F.v5938))).f_line;
if ((((((*(yR95 *)rt_nil_check(F.v5938))).f_kind == v624)) || ((((*(yR95 *)rt_nil_check(F.v5938))).f_kind == v636)))) {
if ((((*(yR95 *)rt_nil_check(F.v5938))).f_kind == v624)) {
yr2536_RoutineHeader(F.v5938, v846);
} else {
yr2536_RoutineHeader(F.v5938, v855);
}
F.v5944 = yr1245_NewNode(v639, ((*(yR95 *)rt_nil_check(F.v5938))).f_line);
((*(yR95 *)rt_nil_check(F.v5944))).f_a = F.v5938;
yr1252_Link(&F.v5940, &F.v5942, F.v5944);
if ((((*(yR95 *)rt_nil_check(F.v5938))).f_kind == v636)) {
yr2652_DeclareProcess(F.v5938);
}
} else if (((((*(yR95 *)rt_nil_check(F.v5938))).f_kind == v594))) {
yr2634_CompileModule(F.v5938);
} else if ((((*(yR95 *)rt_nil_check(F.v5938))).f_kind == v630)) {
yr2640_DeclareTemplate(F.v5938);
} else if ((((*(yR95 *)rt_nil_check(F.v5938))).f_kind == v633)) {
yr2646_Instantiate(F.v5938);
} else {
yr2564_SimpleDecl(F.v5938);
}
F.v5938 = ((*(yR95 *)rt_nil_check(F.v5938))).f_next;
}
yr1866_CheckPending();
F.v5944 = F.v5940;
while ((!(F.v5944 == ((void *)0)))) {
yr2550_RoutineBody(((*(yR95 *)rt_nil_check(F.v5944))).f_a);
F.v5944 = ((*(yR95 *)rt_nil_check(F.v5944))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2601_Alias(rt_int a_p2602, void * a_p2603) {
struct yf2604 F;
memset((void *)&F, 0, sizeof F);
F.p2602 = a_p2602;
F.p2603 = a_p2603;
F.v5949 = yr1588_NewSym(v864, F.p2602);
((*(yR115 *)rt_nil_check(F.v5949))).f_target = F.p2603;
((*(yR115 *)rt_nil_check(F.v5949))).f_readonly = ((*(yR115 *)rt_nil_check(F.p2603))).f_readonly;
{ void * rv5950 = F.v5949;
return rv5950; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2608_AddLits(void * * a_p2609, void * a_p2610, rt_int a_p2611) {
struct yf2612 F;
memset((void *)&F, 0, sizeof F);
F.p2609 = a_p2609;
F.p2610 = a_p2610;
F.p2611 = a_p2611;
if ((((F.p2611 > INT64_C(8))) || ((*(yR100 *)rt_nil_check(F.p2610))).f_opaque)) {
return;
}
if ((((*(yR100 *)rt_nil_check(F.p2610))).f_kind == v786)) {
F.v5956 = ((*(yR100 *)rt_nil_check(F.p2610))).f_lits;
while ((!(F.v5956 == ((void *)0)))) {
F.v5958 = yr1637_FindLit(((*(yR95 *)rt_nil_check(F.v5956))).f_name, F.p2610);
if ((!(F.v5958 == ((void *)0)))) {
F.v5958 = yr2601_Alias(((*(yR95 *)rt_nil_check(F.v5956))).f_name, F.v5958);
((*(yR115 *)rt_nil_check(F.v5958))).f_mnext = (*F.p2609);
(*F.p2609) = F.v5958;
}
F.v5956 = ((*(yR95 *)rt_nil_check(F.v5956))).f_next;
}
} else if ((((*(yR100 *)rt_nil_check(F.p2610))).f_kind == v795)) {
F.v5960 = ((*(yR100 *)rt_nil_check(F.p2610))).f_fields;
while ((!(F.v5960 == ((void *)0)))) {
yr2608_AddLits(&(*F.p2609), ((*(yR105 *)rt_nil_check(F.v5960))).f_rep, rt_range(rt_add(F.p2611, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v5960 = ((*(yR105 *)rt_nil_check(F.v5960))).f_next;
}
} else if (((((((*(yR100 *)rt_nil_check(F.p2610))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.p2610))).f_kind == v804))) || ((((*(yR100 *)rt_nil_check(F.p2610))).f_kind == v801)))) {
yr2608_AddLits(&(*F.p2609), ((*(yR100 *)rt_nil_check(F.p2610))).f_elem, rt_range(rt_add(F.p2611, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2619_ResolveItem(void * a_p2620, void * * a_p2621, rt_int a_p2622) {
struct yf2623 F;
memset((void *)&F, 0, sizeof F);
F.p2620 = a_p2620;
F.p2621 = a_p2621;
F.p2622 = a_p2622;
F.v5981 = ((*(yR95 *)rt_nil_check(F.p2620))).f_flag;
if (((F.p2622 && ((((*(yR95 *)rt_nil_check(F.p2620))).f_text == INT64_C(0)))) && (((((((*(yR95 *)rt_nil_check(F.p2620))).f_name == v501)) || ((((*(yR95 *)rt_nil_check(F.p2620))).f_name == v555))) || ((((*(yR95 *)rt_nil_check(F.p2620))).f_name == v540)))))) {
if ((yr1618_FindHere(((*(yR95 *)rt_nil_check(F.p2620))).f_name) == ((void *)0))) {
return;
}
}
if ((!(((*(yR95 *)rt_nil_check(F.p2620))).f_text == INT64_C(0)))) {
F.v5973 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(F.p2620))).f_text, ((*(yR95 *)rt_nil_check(F.p2620))).f_line));
if ((!(((*(yR115 *)rt_nil_check(F.v5973))).f_kind == v849))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2620))).f_line, ((*(yR95 *)rt_nil_check(F.p2620))).f_text, y_str(" is not a module", 16));
}
F.v5971 = ((*(yR115 *)rt_nil_check(F.v5973))).f_members;
while ((((!(F.v5971 == ((void *)0)))) && ((!(((*(yR115 *)rt_nil_check(F.v5971))).f_name == ((*(yR95 *)rt_nil_check(F.p2620))).f_name))))) {
F.v5971 = ((*(yR115 *)rt_nil_check(F.v5971))).f_mnext;
}
if ((F.v5971 == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2620))).f_line, ((*(yR95 *)rt_nil_check(F.p2620))).f_name, y_str(" is not exported by that module", 31));
}
} else {
if (F.p2622) {
F.v5971 = yr1618_FindHere(((*(yR95 *)rt_nil_check(F.p2620))).f_name);
} else {
F.v5971 = yr1612_Find(((*(yR95 *)rt_nil_check(F.p2620))).f_name);
}
if ((F.v5971 == ((void *)0))) {
if (F.p2622) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2620))).f_line, ((*(yR95 *)rt_nil_check(F.p2620))).f_name, y_str(" is not declared in this module", 31));
} else {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2620))).f_line, ((*(yR95 *)rt_nil_check(F.p2620))).f_name, y_str(" is not declared around this module (X.B.2)", 43));
}
}
}
F.v5977 = ((*(yR95 *)rt_nil_check(F.p2620))).f_name;
if ((!(((*(yR95 *)rt_nil_check(F.p2620))).f_ival == INT64_C(0)))) {
F.v5977 = rt_range(((*(yR95 *)rt_nil_check(F.p2620))).f_ival, INT64_C(0), INT64_C(4000000));
}
F.v5973 = yr1677_Real(F.v5971);
if ((((((*(yR115 *)rt_nil_check(F.v5973))).f_kind == v849)) && ((((*(yR95 *)rt_nil_check(F.p2620))).f_text == INT64_C(0))))) {
if ((((!(F.v5981 == INT64_C(0)))) || ((!(((*(yR95 *)rt_nil_check(F.p2620))).f_ival == INT64_C(0)))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2620))).f_line, y_str("a module name in a list takes no attribute and no AS (X.B.3)", 60));
}
F.v5975 = ((*(yR115 *)rt_nil_check(F.v5973))).f_members;
while ((!(F.v5975 == ((void *)0)))) {
F.v5971 = yr2601_Alias(((*(yR115 *)rt_nil_check(F.v5975))).f_name, F.v5975);
((*(yR115 *)rt_nil_check(F.v5971))).f_mnext = (*F.p2621);
(*F.p2621) = F.v5971;
F.v5975 = ((*(yR115 *)rt_nil_check(F.v5975))).f_mnext;
}
if ((!F.p2622)) {
F.v5971 = yr2601_Alias(((*(yR115 *)rt_nil_check(F.v5973))).f_name, F.v5973);
((*(yR115 *)rt_nil_check(F.v5971))).f_mnext = (*F.p2621);
(*F.p2621) = F.v5971;
}
return;
}
F.v5975 = yr2601_Alias(F.v5977, F.v5971);
if (F.p2622) {
if ((((((*(yR115 *)rt_nil_check(F.v5973))).f_kind == v837)) || ((((*(yR115 *)rt_nil_check(F.v5973))).f_kind == v840)))) {
if ((((F.v5981 == v399)) || ((F.v5981 == v453)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2620))).f_line, y_str("READONLY and VAR are for variables", 34));
}
if ((((!(F.v5981 == v444))) || ((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5973))).f_rep))).f_opaque)) {
F.v5979 = yr1714_CopyRep(((*(yR115 *)rt_nil_check(F.v5973))).f_rep);
((*(yR100 *)rt_nil_check(F.v5979))).f_opaque = 1;
((*(yR100 *)rt_nil_check(F.v5979))).f_opaqueops = v2616;
((*(yR115 *)rt_nil_check(F.v5975))).f_target = yr1588_NewSym(((*(yR115 *)rt_nil_check(F.v5973))).f_kind, ((*(yR115 *)rt_nil_check(F.v5973))).f_name);
((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5975))).f_target))).f_rep = F.v5979;
((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5975))).f_target))).f_decl = ((*(yR115 *)rt_nil_check(F.v5973))).f_decl;
} else {
yr2608_AddLits(&(*F.p2621), ((*(yR115 *)rt_nil_check(F.v5973))).f_rep, INT64_C(0));
}
} else if ((((*(yR115 *)rt_nil_check(F.v5973))).f_kind == v831)) {
if ((((F.v5981 == v366)) || ((F.v5981 == v444)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2620))).f_line, y_str("OPAQUE and TRANSPARENT are for types", 36));
}
if ((!(F.v5981 == v453))) {
((*(yR115 *)rt_nil_check(F.v5975))).f_readonly = 1;
}
} else if ((!(F.v5981 == INT64_C(0)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2620))).f_line, y_str("an attribute is for a type, a representation or a variable", 58));
}
if ((((((*(yR115 *)rt_nil_check(F.v5973))).f_kind == v831)) && ((((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5973))).f_rep))).f_kind == v807)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2620))).f_line, y_str("a signal may not be exported from its monitor (X.E.4)", 53));
}
} else if ((((((*(yR115 *)rt_nil_check(F.v5973))).f_kind == v837)) || ((((*(yR115 *)rt_nil_check(F.v5973))).f_kind == v840)))) {
yr2608_AddLits(&(*F.p2621), ((*(yR115 *)rt_nil_check(F.v5973))).f_rep, INT64_C(0));
}
((*(yR115 *)rt_nil_check(F.v5975))).f_mnext = (*F.p2621);
(*F.p2621) = F.v5975;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2627_DefineAll(void * a_p2628, rt_int a_p2629) {
struct yf2630 F;
memset((void *)&F, 0, sizeof F);
F.p2628 = a_p2628;
F.p2629 = a_p2629;
F.v6006 = F.p2628;
F.v6008 = F.p2628;
F.v6010 = F.p2628;
while ((!(F.v6006 == ((void *)0)))) {
F.v6008 = ((*(yR115 *)rt_nil_check(F.v6006))).f_mnext;
F.v6010 = yr1618_FindHere(((*(yR115 *)rt_nil_check(F.v6006))).f_name);
if ((((F.v6010 == ((void *)0))) || ((!(yr1677_Real(F.v6010) == yr1677_Real(F.v6006)))))) {
if (((((!(F.v6010 == ((void *)0)))) && ((((*(yR115 *)rt_nil_check(yr1677_Real(F.v6006)))).f_kind == v843))) && ((((*(yR115 *)rt_nil_check(yr1677_Real(F.v6010)))).f_kind == v843)))) {
yr1644_Define(F.v6006, F.p2629);
} else if ((F.v6010 == ((void *)0))) {
yr1644_Define(F.v6006, F.p2629);
} else {
yr1132_FailN(F.p2629, ((*(yR115 *)rt_nil_check(F.v6006))).f_name, y_str(" comes into this scope twice", 28));
}
}
F.v6006 = F.v6008;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2634_CompileModule(void * a_p2635) {
struct yf2636 F;
memset((void *)&F, 0, sizeof F);
F.p2635 = a_p2635;
F.v6039 = 0;
F.v6015 = ((void *)0);
F.v6031 = ((*(yR95 *)rt_nil_check(F.p2635))).f_a;
while ((!(F.v6031 == ((void *)0)))) {
yr2619_ResolveItem(F.v6031, &F.v6015, 0);
F.v6031 = ((*(yR95 *)rt_nil_check(F.v6031))).f_next;
}
F.v6025 = v2590;
if ((((((*(yR95 *)rt_nil_check(F.p2635))).f_flag == INT64_C(1))) && ((v2590 == ((void *)0))))) {
F.v6027 = yr1588_NewSym(v831, ((*(yR95 *)rt_nil_check(F.p2635))).f_name);
((*(yR115 *)rt_nil_check(F.v6027))).f_level = v1576;
((*(yR115 *)rt_nil_check(F.v6027))).f_cname = yr1146_Fresh(y_str("mon", 3));
((*(yR115 *)rt_nil_check(F.v6027))).f_rep = v1689;
yr1664_DeclStorage(yr1021_T(y_str("ymon", 4)), ((*(yR115 *)rt_nil_check(F.v6027))).f_cname);
yr1092_Emit(yr2480_Join(yr1021_T(y_str("y_mon_init(&", 12)), yr1651_Path(v1576, ((*(yR115 *)rt_nil_check(F.v6027))).f_cname), yr1021_T(y_str(");", 2))));
v2590 = F.v6027;
F.v6039 = 1;
}
yr1595_OpenScope(1);
((void * *)(v2599).p)[y_ix1(v2599, v1570)] = ((void *)0);
F.v6035 = v1573;
v1573 = v1570;
yr2627_DefineAll(F.v6015, ((*(yR95 *)rt_nil_check(F.p2635))).f_line);
yr2584_Declarations(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2635))).f_c))).f_a);
if (F.v6039) {
yr1092_Emit(yr2480_Join(yr1021_T(y_str("y_mon_enter(&", 13)), yr1651_Path(((*(yR115 *)rt_nil_check(v2590))).f_level, ((*(yR115 *)rt_nil_check(v2590))).f_cname), yr1021_T(y_str(");", 2))));
}
v2357 = rt_range(rt_add(v2357, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2346).p)[y_ix1(v2346, v2357)] = INT64_C(0);
yr2438_BlockStatements(((*(yR95 *)rt_nil_check(F.p2635))).f_c);
v2357 = rt_range(rt_sub(v2357, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (F.v6039) {
yr1092_Emit(yr2480_Join(yr1021_T(y_str("y_mon_leave(&", 13)), yr1651_Path(((*(yR115 *)rt_nil_check(v2590))).f_level, ((*(yR115 *)rt_nil_check(v2590))).f_cname), yr1021_T(y_str(");", 2))));
}
v2616 = INT64_C(0);
F.v6031 = ((*(yR95 *)rt_nil_check(F.p2635))).f_b;
while ((!(F.v6031 == ((void *)0)))) {
if ((((((*(yR95 *)rt_nil_check(F.v6031))).f_text == INT64_C(0))) && ((yr1618_FindHere(((*(yR95 *)rt_nil_check(F.v6031))).f_name) == ((void *)0))))) {
if ((((*(yR95 *)rt_nil_check(F.v6031))).f_name == v501)) {
v2616 = rt_range(rt_add(v2616, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((((((*(yR95 *)rt_nil_check(F.v6031))).f_name == v555)) || ((((*(yR95 *)rt_nil_check(F.v6031))).f_name == v540)))) {
if (((rt_div(v2616, INT64_C(2))) == INT64_C(0))) {
v2616 = rt_range(rt_add(v2616, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
}
F.v6031 = ((*(yR95 *)rt_nil_check(F.v6031))).f_next;
}
F.v6017 = ((void *)0);
F.v6031 = ((*(yR95 *)rt_nil_check(F.p2635))).f_b;
while ((!(F.v6031 == ((void *)0)))) {
yr2619_ResolveItem(F.v6031, &F.v6017, 1);
F.v6031 = ((*(yR95 *)rt_nil_check(F.v6031))).f_next;
}
F.v6033 = ((void * *)(v2599).p)[y_ix1(v2599, v1570)];
v1573 = F.v6035;
yr1601_CloseScope();
while ((!(F.v6033 == ((void *)0)))) {
F.v6031 = ((*(yR95 *)rt_nil_check(F.v6033))).f_next;
((*(yR95 *)rt_nil_check(F.v6033))).f_next = ((void * *)(v2599).p)[y_ix1(v2599, v1570)];
((void * *)(v2599).p)[y_ix1(v2599, v1570)] = F.v6033;
F.v6033 = F.v6031;
}
v2590 = F.v6025;
F.v6021 = yr1588_NewSym(v849, ((*(yR95 *)rt_nil_check(F.p2635))).f_name);
((*(yR115 *)rt_nil_check(F.v6021))).f_members = F.v6017;
yr1644_Define(F.v6021, ((*(yR95 *)rt_nil_check(F.p2635))).f_line);
F.v6023 = F.v6017;
F.v6017 = ((void *)0);
while ((!(F.v6023 == ((void *)0)))) {
F.v6029 = ((*(yR115 *)rt_nil_check(F.v6023))).f_mnext;
F.v6019 = yr2601_Alias(((*(yR115 *)rt_nil_check(F.v6023))).f_name, F.v6023);
((*(yR115 *)rt_nil_check(F.v6019))).f_readonly = ((*(yR115 *)rt_nil_check(F.v6023))).f_readonly;
((*(yR115 *)rt_nil_check(F.v6019))).f_mnext = F.v6017;
F.v6017 = F.v6019;
F.v6023 = F.v6029;
}
((*(yR115 *)rt_nil_check(F.v6021))).f_members = F.v6017;
F.v6023 = F.v6017;
while ((!(F.v6023 == ((void *)0)))) {
F.v6029 = yr2601_Alias(((*(yR115 *)rt_nil_check(F.v6023))).f_name, F.v6023);
((*(yR115 *)rt_nil_check(F.v6029))).f_readonly = ((*(yR115 *)rt_nil_check(F.v6023))).f_readonly;
if ((yr1618_FindHere(((*(yR115 *)rt_nil_check(F.v6023))).f_name) == ((void *)0))) {
yr1644_Define(F.v6029, ((*(yR95 *)rt_nil_check(F.p2635))).f_line);
} else if ((((((*(yR115 *)rt_nil_check(yr1618_FindHere(((*(yR115 *)rt_nil_check(F.v6023))).f_name)))).f_kind == v864)) && ((!(yr1677_Real(yr1618_FindHere(((*(yR115 *)rt_nil_check(F.v6023))).f_name)) == yr1677_Real(F.v6023)))))) {
yr1644_Define(F.v6029, ((*(yR95 *)rt_nil_check(F.p2635))).f_line);
} else if ((!(((*(yR115 *)rt_nil_check(yr1677_Real(F.v6023)))).f_kind == v843))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2635))).f_line, ((*(yR115 *)rt_nil_check(F.v6023))).f_name, y_str(" is exported into a scope that has it already", 45));
}
F.v6023 = ((*(yR115 *)rt_nil_check(F.v6023))).f_mnext;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2640_DeclareTemplate(void * a_p2641) {
struct yf2642 F;
memset((void *)&F, 0, sizeof F);
F.p2641 = a_p2641;
F.v6072 = yr1588_NewSym(v852, ((*(yR95 *)rt_nil_check(F.p2641))).f_name);
((*(yR115 *)rt_nil_check(F.v6072))).f_decl = F.p2641;
yr1644_Define(F.v6072, ((*(yR95 *)rt_nil_check(F.p2641))).f_line);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2646_Instantiate(void * a_p2647) {
struct yf2648 F;
memset((void *)&F, 0, sizeof F);
F.p2647 = a_p2647;
F.v6076 = yr1677_Real(yr1624_Lookup(((*(yR95 *)rt_nil_check(F.p2647))).f_name, ((*(yR95 *)rt_nil_check(F.p2647))).f_line));
if ((!(((*(yR115 *)rt_nil_check(F.v6076))).f_kind == v852))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2647))).f_line, ((*(yR95 *)rt_nil_check(F.p2647))).f_name, y_str(" is not a template", 18));
}
F.v6078 = ((*(yR115 *)rt_nil_check(F.v6076))).f_decl;
if ((!(yr1260_Count(((*(yR95 *)rt_nil_check(F.v6078))).f_a) == yr1260_Count(((*(yR95 *)rt_nil_check(F.p2647))).f_a)))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2647))).f_line, ((*(yR95 *)rt_nil_check(F.p2647))).f_name, y_str(": the number of actuals is wrong", 32));
}
F.v6084 = rt_range(rt_add(v1159, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo6100 = ((*(yR95 *)rt_nil_check(F.v6078))).f_ival;
F.hi6101 = rt_sub(((*(yR95 *)rt_nil_check(F.v6078))).f_flag, INT64_C(1));
{ rt_int hi6105 = F.hi6101;
for (rt_int i6104 = F.lo6100; i6104 <= hi6105; i6104++) { F.c_6103 = i6104;
F.v6088 = ((rt_int *)(v1153).p)[y_ix1(v1153, F.c_6103)];
F.v6090 = ((rt_int *)(v1155).p)[y_ix1(v1155, F.c_6103)];
if ((F.v6088 == v177)) {
F.v6080 = ((*(yR95 *)rt_nil_check(F.v6078))).f_a;
F.v6082 = ((*(yR95 *)rt_nil_check(F.p2647))).f_a;
while ((!(F.v6080 == ((void *)0)))) {
if ((((((*(yR95 *)rt_nil_check(F.v6080))).f_name == F.v6090)) && ((F.v6088 == v177)))) {
if ((((*(yR95 *)rt_nil_check(F.v6082))).f_flag == INT64_C(1))) {
F.v6088 = v186;
F.v6090 = ((*(yR95 *)rt_nil_check(F.v6082))).f_ival;
} else {
F.v6090 = ((*(yR95 *)rt_nil_check(F.v6082))).f_name;
if ((F.v6090 <= v462)) {
F.v6088 = v180;
} else if ((F.v6090 <= v591)) {
F.v6088 = v183;
}
}
}
F.v6080 = ((*(yR95 *)rt_nil_check(F.v6080))).f_next;
F.v6082 = ((*(yR95 *)rt_nil_check(F.v6082))).f_next;
}
}
v1159 = rt_range(rt_add(v1159, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1153).p)[y_ix1(v1153, v1159)] = F.v6088;
((rt_int *)(v1155).p)[y_ix1(v1155, v1159)] = F.v6090;
((rt_int *)(v1157).p)[y_ix1(v1157, v1159)] = ((rt_int *)(v1157).p)[y_ix1(v1157, F.c_6103)];
if (i6104 == hi6105) break;
}}
v1159 = rt_range(rt_add(v1159, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1153).p)[y_ix1(v1153, v1159)] = v174;
((rt_int *)(v1155).p)[y_ix1(v1155, v1159)] = INT64_C(0);
((rt_int *)(v1157).p)[y_ix1(v1157, v1159)] = ((*(yR95 *)rt_nil_check(F.p2647))).f_line;
F.v6086 = v1234;
v1234 = F.v6084;
F.v6092 = yr1350_ParseModule();
v1234 = F.v6086;
yr2634_CompileModule(F.v6092);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2652_DeclareProcess(void * a_p2653) {
struct yf2654 F;
memset((void *)&F, 0, sizeof F);
F.p2653 = a_p2653;
F.v6115 = ((*(yR95 *)rt_nil_check(F.p2653))).f_sym;
((*(yR115 *)rt_nil_check(F.v6115))).f_monitor = v2590;
yr1664_DeclStorage(yr1021_T(y_str("rt_taskdecl", 11)), yr2480_Join(((*(yR115 *)rt_nil_check(F.v6115))).f_cname, yr1021_T(y_str("_d", 2)), INT64_C(0)));
F.v6117 = yr1245_NewNode(v639, ((*(yR95 *)rt_nil_check(F.p2653))).f_line);
((*(yR95 *)rt_nil_check(F.v6117))).f_sym = F.v6115;
((*(yR95 *)rt_nil_check(F.v6117))).f_next = ((void * *)(v2599).p)[y_ix1(v2599, v1570)];
((void * *)(v2599).p)[y_ix1(v2599, v1570)] = F.v6117;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2658_AwaitProcesses(void) {
struct yf2659 F;
memset((void *)&F, 0, sizeof F);
F.v6123 = ((void * *)(v2599).p)[y_ix1(v2599, v1570)];
while ((!(F.v6123 == ((void *)0)))) {
yr1092_Emit(yr2480_Join(yr1021_T(y_str("rt_await_decl(&", 15)), yr1651_Path(rt_range(rt_sub(((*(yR115 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v6123))).f_sym))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr2480_Join(((*(yR115 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v6123))).f_sym))).f_cname, yr1021_T(y_str("_d", 2)), INT64_C(0))), yr1021_T(y_str(");", 2))));
F.v6123 = ((*(yR95 *)rt_nil_check(F.v6123))).f_next;
}
((void * *)(v2599).p)[y_ix1(v2599, v1570)] = ((void *)0);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2663_Activate(void * a_p2664, void * a_p2665) {
struct yf2666 F;
memset((void *)&F, 0, sizeof F);
F.p2664 = a_p2664;
F.p2665 = a_p2665;
F.v6154 = ((*(yR115 *)rt_nil_check(F.p2665))).f_decl;
yr2268_CompileArgs(((*(yR95 *)rt_nil_check(F.p2664))).f_a, F.p2665, &F.v6134, &F.v6136);
if ((!(F.v6136 == ((*(yR115 *)rt_nil_check(F.p2665))).f_nparams))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2664))).f_line, ((*(yR115 *)rt_nil_check(F.p2665))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
F.v6142 = yr1146_Fresh(y_str("pf", 2));
yr1092_Emit(yr2480_Join(yr1021_T(y_str("{ struct ", 9)), ((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.p2665))).f_members))).f_name, yr2480_Join(yr1021_T(y_str(" *", 2)), F.v6142, yr2480_Join(yr1021_T(y_str(" = rt_alloc(sizeof *", 20)), F.v6142, yr1021_T(y_str(");", 2))))));
if ((((*(yR115 *)rt_nil_check(F.p2665))).f_level > INT64_C(1))) {
yr1092_Emit(yr2480_Join(F.v6142, yr1021_T(y_str("->up = ", 7)), yr2480_Join(yr1658_FramePtr(rt_range(rt_sub(((*(yR115 *)rt_nil_check(F.p2665))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))), yr1021_T(y_str(";", 1)), INT64_C(0))));
}
F.v6140 = ((*(yR115 *)rt_nil_check(F.p2665))).f_params;
F.v6138 = rt_range(rt_add(F.v6134, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(F.v6140 == ((void *)0)))) {
if ((!yr2247_Fits(((*(yR110 *)rt_nil_check(F.v6140))).f_rep, ((void * *)(v2233).p)[y_ix1(v2233, F.v6138)]))) {
yr1775_TypeClash(((*(yR95 *)rt_nil_check(((void * *)(v2242).p)[y_ix1(v2242, F.v6138)]))).f_line, ((*(yR110 *)rt_nil_check(F.v6140))).f_rep, ((void * *)(v2233).p)[y_ix1(v2233, F.v6138)]);
}
F.v6148 = yr2480_Join(F.v6142, yr1021_T(y_str("->", 2)), ((*(yR110 *)rt_nil_check(F.v6140))).f_cname);
if ((((*(yR110 *)rt_nil_check(F.v6140))).f_cls == v873)) {
if ((!yr2086_IsVariable(((void * *)(v2242).p)[y_ix1(v2242, F.v6138)]))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(((void * *)(v2242).p)[y_ix1(v2242, F.v6138)]))).f_line, ((*(yR110 *)rt_nil_check(F.v6140))).f_name, y_str(": the actual of a VAR parameter must be a variable", 50));
}
yr1092_Emit(yr2480_Join(F.v6148, yr1021_T(y_str(" = &", 4)), yr2480_Join(((rt_int *)(v2224).p)[y_ix1(v2224, F.v6138)], yr1021_T(y_str(";", 1)), INT64_C(0))));
} else if (yr1744_Deep(((*(yR110 *)rt_nil_check(F.v6140))).f_rep)) {
F.v6144 = yr1146_Fresh(y_str("t", 1));
yr1092_Emit(yr2480_Join(yr1021_T(y_str("{ ", 2)), yr1750_CType(((*(yR110 *)rt_nil_check(F.v6140))).f_rep), yr2480_Join(yr1021_T(y_str(" ", 1)), F.v6144, yr2480_Join(yr1021_T(y_str(" = ", 3)), ((rt_int *)(v2224).p)[y_ix1(v2224, F.v6138)], yr1021_T(y_str(";", 1))))));
if ((((*(yR100 *)rt_nil_check(((*(yR110 *)rt_nil_check(F.v6140))).f_rep))).f_kind == v813)) {
yr1092_Emit(yr2480_Join(yr1021_T(y_str("y_copy(y_desc_vector(", 21)), yr1756_DescOf(((*(yR100 *)rt_nil_check(((*(yR110 *)rt_nil_check(F.v6140))).f_rep))).f_elem), yr2480_Join(yr1021_T(y_str("), &", 4)), F.v6148, yr2480_Join(yr1021_T(y_str(", &", 3)), F.v6144, yr1021_T(y_str("); }", 4))))));
} else {
yr1092_Emit(yr2480_Join(yr1021_T(y_str("y_copy(", 7)), yr1756_DescOf(((*(yR110 *)rt_nil_check(F.v6140))).f_rep), yr2480_Join(yr1021_T(y_str(", &", 3)), F.v6148, yr2480_Join(yr1021_T(y_str(", &", 3)), F.v6144, yr1021_T(y_str("); }", 4))))));
}
} else {
yr1092_Emit(yr2480_Join(F.v6148, yr1021_T(y_str(" = ", 3)), yr2480_Join(yr2068_Convert(((rt_int *)(v2224).p)[y_ix1(v2224, F.v6138)], ((*(yR110 *)rt_nil_check(F.v6140))).f_rep, ((void * *)(v2233).p)[y_ix1(v2233, F.v6138)]), yr1021_T(y_str(";", 1)), INT64_C(0))));
}
F.v6138 = rt_range(rt_add(F.v6138, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6140 = ((*(yR110 *)rt_nil_check(F.v6140))).f_next;
}
v2244 = F.v6134;
F.v6150 = yr1021_T(y_str("0", 1));
if ((!(((*(yR95 *)rt_nil_check(F.v6154))).f_e == ((void *)0)))) {
yr2125_Expr(((*(yR95 *)rt_nil_check(F.v6154))).f_e, v1683, &F.v6150, &F.v6156);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.v6154))).f_line, v1683, F.v6156);
}
F.v6152 = yr1021_T(y_str("0, 0", 4));
if ((!(((*(yR95 *)rt_nil_check(F.v6154))).f_d == ((void *)0)))) {
yr2125_Expr(((*(yR95 *)rt_nil_check(F.v6154))).f_d, v1683, &F.v6146, &F.v6156);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.v6154))).f_line, v1683, F.v6156);
F.v6152 = yr2480_Join(yr1021_T(y_str("1, ", 3)), F.v6146, INT64_C(0));
}
yr986_SB();
yr997_SA(y_str("y_create(&", 10));
yr1004_ST(yr1651_Path(rt_range(rt_sub(((*(yR115 *)rt_nil_check(F.p2665))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr2480_Join(((*(yR115 *)rt_nil_check(F.p2665))).f_cname, yr1021_T(y_str("_d", 2)), INT64_C(0))));
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6150);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6152);
yr997_SA(y_str(", ", 2));
yr1004_ST(((*(yR115 *)rt_nil_check(F.p2665))).f_cname);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6142);
yr997_SA(y_str("); }", 4));
F.v6144 = yr1016_SE();
yr1092_Emit(F.v6144);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2670_MonitorPath(void * a_p2671) {
struct yf2672 F;
memset((void *)&F, 0, sizeof F);
F.p2671 = a_p2671;
{ rt_int rv6212 = yr2480_Join(yr1021_T(y_str("&", 1)), yr1651_Path(((*(yR115 *)rt_nil_check(F.p2671))).f_level, ((*(yR115 *)rt_nil_check(F.p2671))).f_cname), INT64_C(0));
return rv6212; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2676_EnterMonitor(void * a_p2677) {
struct yf2678 F;
memset((void *)&F, 0, sizeof F);
F.p2677 = a_p2677;
if ((((*(yR115 *)rt_nil_check(F.p2677))).f_kind == v846)) {
((*(yR115 *)rt_nil_check(F.p2677))).f_monitor = v2590;
}
if ((((*(yR115 *)rt_nil_check(F.p2677))).f_monitor == ((void *)0))) {
return;
}
yr1092_Emit(yr2480_Join(yr1021_T(y_str("y_mon_enter(", 12)), yr2670_MonitorPath(((*(yR115 *)rt_nil_check(F.p2677))).f_monitor), yr1021_T(y_str(");", 2))));
F.v6216 = yr1146_Fresh(y_str("mf", 2));
v2400 = 1;
yr1092_Emit(yr2480_Join(yr1021_T(y_str("rt_frame ", 9)), F.v6216, yr1021_T(y_str(";", 1))));
yr986_SB();
yr997_SA(y_str("if (!RT_TRY(", 12));
yr1004_ST(F.v6216);
yr997_SA(y_str(")) { RT_POP(", 12));
yr1004_ST(F.v6216);
yr997_SA(y_str("); ", 3));
if ((((*(yR115 *)rt_nil_check(F.p2677))).f_kind == v855)) {
yr997_SA(y_str("y_mon_drop(", 11));
} else {
yr997_SA(y_str("y_mon_leave(", 12));
}
yr1004_ST(yr2670_MonitorPath(((*(yR115 *)rt_nil_check(F.p2677))).f_monitor));
yr997_SA(y_str("); rt_raise(rt_xcur); }", 23));
yr1092_Emit(yr1016_SE());
v2333 = rt_range(rt_add(v2333, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2331).p)[y_ix1(v2331, v2333)] = F.v6216;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2682_LeaveMonitor(void) {
struct yf2683 F;
memset((void *)&F, 0, sizeof F);
if ((v2398 == ((void *)0))) {
return;
}
if ((((*(yR115 *)rt_nil_check(v2398))).f_monitor == ((void *)0))) {
return;
}
if ((((*(yR115 *)rt_nil_check(v2398))).f_kind == v855)) {
yr1092_Emit(yr2480_Join(yr1021_T(y_str("y_mon_drop(", 11)), yr2670_MonitorPath(((*(yR115 *)rt_nil_check(v2398))).f_monitor), yr1021_T(y_str(");", 2))));
} else {
yr1092_Emit(yr2480_Join(yr1021_T(y_str("y_mon_leave(", 12)), yr2670_MonitorPath(((*(yR115 *)rt_nil_check(v2398))).f_monitor), yr1021_T(y_str(");", 2))));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2687_TerminateStatement(void * a_p2688) {
struct yf2689 F;
memset((void *)&F, 0, sizeof F);
F.p2688 = a_p2688;
if ((((v2398 == ((void *)0))) || ((!(((*(yR115 *)rt_nil_check(v2398))).f_kind == v855))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2688))).f_line, y_str("TERMINATE_PROCESS ends a process (IX.A.7)", 41));
}
yr2658_AwaitProcesses();
yr2682_LeaveMonitor();
yr2421_PopTo(v2336);
yr1098_EmitS(y_str("return;", 7));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2693_DeclareSignal(void * a_p2694, rt_int a_p2695) {
struct yf2696 F;
memset((void *)&F, 0, sizeof F);
F.p2694 = a_p2694;
F.p2695 = a_p2695;
if ((v2590 == ((void *)0))) {
yr1124_FailS(F.p2695, y_str("signal variables are declared in a monitor (X.E.4)", 50));
}
((*(yR115 *)rt_nil_check(F.p2694))).f_rep = yr1714_CopyRep(((*(yR115 *)rt_nil_check(F.p2694))).f_rep);
((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.p2694))).f_rep))).f_monitor = v2590;
yr1092_Emit(yr2480_Join(yr1021_T(y_str("y_sig_init(&", 12)), yr1671_SymPath(F.p2694), yr2480_Join(yr1021_T(y_str(", ", 2)), yr2670_MonitorPath(v2590), yr1021_T(y_str(");", 2)))));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2700_DeviceSignal(void * a_p2701, void * a_p2702) {
struct yf2703 F;
memset((void *)&F, 0, sizeof F);
F.p2701 = a_p2701;
F.p2702 = a_p2702;
yr2060_Manifest(F.p2702, &F.v6251, &F.v6253);
if ((!F.v6251)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2702))).f_line, y_str("an AT location is a manifest constant (XIV.VII)", 47));
}
yr986_SB();
yr997_SA(y_str("y_device(&", 10));
yr1004_ST(yr1671_SymPath(F.p2701));
yr997_SA(y_str(", ", 2));
yr1010_SI(F.v6253);
yr997_SA(y_str(");", 2));
F.v6255 = yr1016_SE();
yr1092_Emit(F.v6255);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2707_Arg(void * a_p2708, rt_int a_p2709) {
struct yf2710 F;
memset((void *)&F, 0, sizeof F);
F.p2708 = a_p2708;
F.p2709 = a_p2709;
F.v6264 = ((*(yR95 *)rt_nil_check(F.p2708))).f_a;
F.v6266 = INT64_C(1);
while ((((!(F.v6264 == ((void *)0)))) && ((F.v6266 < F.p2709)))) {
F.v6264 = ((*(yR95 *)rt_nil_check(F.v6264))).f_next;
F.v6266 = rt_range(rt_add(F.v6266, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v6264 == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2708))).f_line, ((*(yR95 *)rt_nil_check(F.p2708))).f_name, y_str(": too few actual parameters", 27));
}
{ void * rv6271 = F.v6264;
return rv6271; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2714_NArgs(void * a_p2715, rt_int a_p2716) {
struct yf2717 F;
memset((void *)&F, 0, sizeof F);
F.p2715 = a_p2715;
F.p2716 = a_p2716;
if ((!(yr1260_Count(((*(yR95 *)rt_nil_check(F.p2715))).f_a) == F.p2716))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2715))).f_line, ((*(yR95 *)rt_nil_check(F.p2715))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2721_Call1(yarr a_p2723, rt_int a_p2724) {
struct yf2725 F;
memset((void *)&F, 0, sizeof F);
F.p2723 = a_p2723;
F.p2724 = a_p2724;
yr986_SB();
yr997_SA(F.p2723);
yr997_SA(y_str("(", 1));
yr1004_ST(F.p2724);
yr997_SA(y_str(")", 1));
{ rt_int rv6281 = yr1016_SE();
return rv6281; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2729_Addr(rt_int a_p2730) {
struct yf2731 F;
memset((void *)&F, 0, sizeof F);
F.p2730 = a_p2730;
{ rt_int rv6286 = yr2480_Join(yr1021_T(y_str("&", 1)), F.p2730, INT64_C(0));
return rv6286; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2735_StdVar(void * a_p2736, rt_int a_p2737, rt_int * a_p2738, void * * a_p2739) {
struct yf2740 F;
memset((void *)&F, 0, sizeof F);
F.p2736 = a_p2736;
F.p2737 = a_p2737;
F.p2738_o = a_p2738;
F.p2739_o = a_p2739;
yr2098_LValue(F.p2736, &F.p2738, &F.p2739);
if ((((!(F.p2737 == v828))) && ((!(((*(yR100 *)rt_nil_check(F.p2739))).f_kind == F.p2737))))) {
yr986_SB();
yr997_SA(y_str("a ", 2));
if ((F.p2737 == v801)) {
yr997_SA(y_str("file", 4));
} else if ((F.p2737 == v807)) {
yr997_SA(y_str("signal", 6));
} else if ((F.p2737 == v810)) {
yr997_SA(y_str("SEMAPHORE", 9));
} else if ((F.p2737 == v798)) {
yr997_SA(y_str("pointer", 7));
} else {
yr997_SA(y_str("variable", 8));
}
yr997_SA(y_str(" is needed here", 15));
F.v6293 = yr1016_SE();
yr1117_Fail(((*(yR95 *)rt_nil_check(F.p2736))).f_line, F.v6293);
}
(*F.p2738_o) = F.p2738;
(*F.p2739_o) = F.p2739;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2744_NumArg(void * a_p2745, rt_int * a_p2746, void * * a_p2747) {
struct yf2748 F;
memset((void *)&F, 0, sizeof F);
F.p2745 = a_p2745;
F.p2746_o = a_p2746;
F.p2747_o = a_p2747;
yr2125_Expr(F.p2745, ((void *)0), &F.p2746, &F.p2747);
if ((!yr1726_IsNumeric(F.p2747))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2745))).f_line, y_str("a number is needed here", 23));
}
(*F.p2746_o) = F.p2746;
(*F.p2747_o) = F.p2747;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2752_IntArg(void * a_p2753) {
struct yf2754 F;
memset((void *)&F, 0, sizeof F);
F.p2753 = a_p2753;
yr2125_Expr(F.p2753, v1683, &F.v6309, &F.v6311);
if ((!(((*(yR100 *)rt_nil_check(F.v6311))).f_kind == v774))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2753))).f_line, y_str("an integer is needed here", 25));
}
{ rt_int rv6313 = F.v6309;
return rv6313; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2758_CodeInsert(void * a_p2759) {
struct yf2760 F;
memset((void *)&F, 0, sizeof F);
F.p2759 = a_p2759;
F.v6317 = yr2707_Arg(F.p2759, INT64_C(1));
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1)}; y_desc_array(&F.yd_6341, 1, lo, hi, &y_d_int); }
y_init(&F.yd_6341, &F.v6343);
if ((!(((*(yR95 *)rt_nil_check(F.v6317))).f_kind == v741))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2759))).f_line, y_str("a code insert takes a string literal (XIV.XI.5)", 47));
}
F.v6320 = ((*(yR95 *)rt_nil_check(F.v6317))).f_text;
F.v6330 = ((rt_int *)(v890).p)[y_ix1(v890, F.v6320)];
yr986_SB();
F.v6326 = INT64_C(1);
while ((F.v6326 <= F.v6330)) {
F.v6332 = yr1063_TChar(F.v6320, F.v6326);
if ((F.v6332 == 39)) {
F.v6328 = rt_range(rt_add(F.v6326, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1063_TChar(F.v6320, F.v6328) == 39))) {
F.v6328 = rt_range(rt_add(F.v6328, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v6322 = yr1028_Intern(rt_range(rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.v6320)], F.v6326), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v6328, F.v6326)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, yr2043_CharValue(v1687, F.v6322, ((*(yR95 *)rt_nil_check(F.p2759))).f_line))]);
F.v6326 = rt_range(rt_add(F.v6328, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v6332 == 36)) {
F.v6328 = rt_range(rt_add(F.v6326, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((F.v6328 <= F.v6330)) && ((yr968_IsLetter(yr1063_TChar(F.v6320, F.v6328)) || yr974_IsDigit(yr1063_TChar(F.v6320, F.v6328)))))) {
F.v6328 = rt_range(rt_add(F.v6328, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v6322 = yr1028_Intern(rt_range(rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.v6320)], F.v6326), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v6328, F.v6326)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v6334 = yr1612_Find(F.v6322);
if ((F.v6334 == ((void *)0))) {
v909 = INT64_C(0);
v921 = INT64_C(0);
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2759))).f_line, F.v6322, y_str(" in a code insert is not declared here", 38));
}
F.v6334 = yr1677_Real(F.v6334);
if ((((!(((*(yR115 *)rt_nil_check(F.v6334))).f_kind == v831))) && ((!(((*(yR115 *)rt_nil_check(F.v6334))).f_kind == v834))))) {
v909 = INT64_C(0);
v921 = INT64_C(0);
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2759))).f_line, F.v6322, y_str(" in a code insert is not a variable or constant", 47));
}
yr1004_ST(yr2106_Paren(yr1671_SymPath(F.v6334)));
F.v6326 = F.v6328;
} else {
yr991_SC(F.v6332);
F.v6326 = rt_range(rt_add(F.v6326, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
F.v6324 = yr1016_SE();
yr1092_Emit(F.v6324);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2764_StdCall(rt_int a_p2765, void * a_p2766, rt_int a_p2767, rt_int * a_p2768, void * * a_p2769) {
struct yf2770 F;
memset((void *)&F, 0, sizeof F);
F.p2765 = a_p2765;
F.p2766 = a_p2766;
F.p2767 = a_p2767;
F.p2768_o = a_p2768;
F.p2769_o = a_p2769;
F.p2769 = v1689;
F.p2768 = yr1021_T(y_str("((void)0)", 9));
F.v6410 = ((((((((((((((((F.p2765 == v1934)) || ((F.p2765 == v1937))) || ((F.p2765 == v1940))) || ((F.p2765 == v1943))) || ((F.p2765 == v1946))) || ((F.p2765 == v1952))) || ((F.p2765 == v1961))) || ((F.p2765 == v1967))) || ((F.p2765 == v1970))) || ((F.p2765 == v1994))) || ((F.p2765 == v1997))) || ((F.p2765 == v2006))) || ((F.p2765 == v2009))) || ((F.p2765 == v2012))) || ((F.p2765 == v2015)));
if ((F.p2767 && (!F.v6410))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2766))).f_line, ((*(yR95 *)rt_nil_check(F.p2766))).f_name, y_str(" returns a value: it is called in an expression", 47));
}
if (((!F.p2767) && F.v6410)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2766))).f_line, ((*(yR95 *)rt_nil_check(F.p2766))).f_name, y_str(" returns no value", 17));
}
if ((((F.p2765 == v1916)) || ((F.p2765 == v1919)))) {
yr2714_NArgs(F.p2766, INT64_C(2));
yr2125_Expr(yr2707_Arg(F.p2766, INT64_C(1)), ((void *)0), &F.v6382, &F.v6392);
if ((!yr1732_IsArrayLike(F.v6392))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2766))).f_line, ((*(yR95 *)rt_nil_check(F.p2766))).f_name, y_str(" of something that is not an array", 34));
}
F.v6384 = yr2752_IntArg(yr2707_Arg(F.p2766, INT64_C(2)));
yr2060_Manifest(yr2707_Arg(F.p2766, INT64_C(2)), &F.v6406, &F.v6404);
F.p2769 = yr2169_Unbounded(v1683);
if ((F.v6406 && ((((*(yR100 *)rt_nil_check(F.v6392))).f_kind == v792)))) {
if ((((F.v6404 < INT64_C(1))) || ((F.v6404 > ((*(yR100 *)rt_nil_check(F.v6392))).f_nidx)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2766))).f_line, y_str("no such dimension", 17));
}
F.v6398 = ((*(yR100 *)rt_nil_check(F.v6392))).f_idx;
F.lo6423 = INT64_C(2);
F.hi6424 = F.v6404;
{ rt_int hi6428 = F.hi6424;
for (rt_int i6427 = F.lo6423; i6427 <= hi6428; i6427++) { F.c_6426 = i6427;
F.v6398 = ((*(yR100 *)rt_nil_check(F.v6398))).f_link;
if (i6427 == hi6428) break;
}}
F.p2769 = F.v6398;
}
if ((F.p2765 == v1916)) {
F.p2768 = yr2175_Call2(y_str("y_low", 5), F.v6382, F.v6384);
} else {
F.p2768 = yr2175_Call2(y_str("y_high", 6), F.v6382, F.v6384);
}
(*F.p2768_o) = F.p2768;
(*F.p2769_o) = F.p2769;
return;
}
if ((((((F.p2765 == v1922)) || ((F.p2765 == v1925))) || ((F.p2765 == v1928))) || ((F.p2765 == v1931)))) {
yr2714_NArgs(F.p2766, INT64_C(1));
yr2125_Expr(yr2707_Arg(F.p2766, INT64_C(1)), ((void *)0), &F.v6382, &F.v6392);
if ((!yr1720_IsDiscrete(F.v6392))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2766))).f_line, ((*(yR95 *)rt_nil_check(F.p2766))).f_name, y_str(" of something that is not integer or scalar", 43));
}
if ((!(((*(yR100 *)rt_nil_check(F.v6392))).f_elem == ((void *)0)))) {
F.v6392 = ((*(yR100 *)rt_nil_check(F.v6392))).f_elem;
}
if ((((((F.p2765 == v1928)) || ((F.p2765 == v1931)))) && ((((*(yR100 *)rt_nil_check(F.v6392))).f_kind == v774)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2766))).f_line, y_str("FIRST and LAST apply to ordered enumerations and alphabets (XI)", 63));
}
if ((((((*(yR100 *)rt_nil_check(F.v6392))).f_kind == v786)) && (!((*(yR100 *)rt_nil_check(F.v6392))).f_ordered))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2766))).f_line, ((*(yR95 *)rt_nil_check(F.p2766))).f_name, y_str(" applies to ordered enumerations (XI)", 37));
}
F.p2769 = yr2169_Unbounded(F.v6392);
if ((F.p2765 == v1928)) {
F.p2768 = yr1812_LoText(F.v6392);
} else if ((F.p2765 == v1931)) {
F.p2768 = yr1818_HiText(F.v6392);
} else {
yr986_SB();
if ((!(((*(yR100 *)rt_nil_check(F.v6392))).f_lo == INT64_C(0)))) {
yr997_SA(y_str("rt_range(", 9));
}
if ((F.p2765 == v1922)) {
yr997_SA(y_str("rt_add(", 7));
} else {
yr997_SA(y_str("rt_sub(", 7));
}
yr1004_ST(F.v6382);
yr997_SA(y_str(", 1)", 4));
if ((!(((*(yR100 *)rt_nil_check(F.v6392))).f_lo == INT64_C(0)))) {
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1812_LoText(F.v6392));
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1818_HiText(F.v6392));
yr997_SA(y_str(")", 1));
}
F.p2768 = yr1016_SE();
}
if ((!(((*(yR100 *)rt_nil_check(F.v6392))).f_kind == v774))) {
F.p2769 = F.v6392;
}
(*F.p2768_o) = F.p2768;
(*F.p2769_o) = F.p2769;
return;
}
if ((F.p2765 == v1934)) {
yr2714_NArgs(F.p2766, INT64_C(1));
yr2735_StdVar(yr2707_Arg(F.p2766, INT64_C(1)), v798, &F.v6382, &F.v6392);
if ((((*(yR100 *)rt_nil_check(F.v6392))).f_elem == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2766))).f_line, ((*(yR100 *)rt_nil_check(F.v6392))).f_forward, y_str(" is not declared", 16));
}
F.v6398 = ((*(yR100 *)rt_nil_check(F.v6392))).f_elem;
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(F.v6382);
yr997_SA(y_str(" = rt_alloc(sizeof(", 19));
yr1004_ST(yr1750_CType(F.v6398));
yr997_SA(y_str("));", 3));
if (yr1744_Deep(F.v6398)) {
yr997_SA(y_str(" y_init(", 8));
yr1004_ST(yr1756_DescOf(F.v6398));
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6382);
yr997_SA(y_str(");", 2));
}
yr997_SA(y_str(" })", 3));
F.p2768 = yr1016_SE();
(*F.p2768_o) = F.p2768;
(*F.p2769_o) = F.p2769;
return;
}
if ((F.p2765 == v2012)) {
yr2714_NArgs(F.p2766, INT64_C(1));
yr2735_StdVar(yr2707_Arg(F.p2766, INT64_C(1)), v798, &F.v6382, &F.v6392);
F.p2768 = yr2480_Join(yr1021_T(y_str("({ free(", 8)), F.v6382, yr2480_Join(yr1021_T(y_str("); ", 3)), F.v6382, yr1021_T(y_str(" = 0; })", 8))));
(*F.p2768_o) = F.p2768;
(*F.p2769_o) = F.p2769;
return;
}
if ((F.p2765 == v1937)) {
yr2714_NArgs(F.p2766, INT64_C(3));
yr2735_StdVar(yr2707_Arg(F.p2766, INT64_C(1)), v801, &F.v6382, &F.v6392);
yr2125_Expr(yr2707_Arg(F.p2766, INT64_C(2)), v1687, &F.v6384, &F.v6394);
if ((!yr1738_IsString(F.v6394))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2766))).f_line, y_str("OPEN takes the name of the file as a string (XII.A)", 51));
}
yr2125_Expr(yr2707_Arg(F.p2766, INT64_C(3)), v2774, &F.v6386, &F.v6396);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2766))).f_line, v2774, F.v6396);
yr986_SB();
yr997_SA(y_str("y_open(&", 8));
yr1004_ST(F.v6382);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6384);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6386);
yr997_SA(y_str(")", 1));
F.p2768 = yr1016_SE();
(*F.p2768_o) = F.p2768;
(*F.p2769_o) = F.p2769;
return;
}
if ((((F.p2765 == v1940)) || ((F.p2765 == v1949)))) {
yr2714_NArgs(F.p2766, INT64_C(1));
yr2735_StdVar(yr2707_Arg(F.p2766, INT64_C(1)), v801, &F.v6382, &F.v6392);
if ((F.p2765 == v1940)) {
F.p2768 = yr2721_Call1(y_str("y_close", 7), yr2729_Addr(F.v6382));
} else {
F.p2769 = v1685;
F.p2768 = yr2721_Call1(y_str("y_check_eof", 11), yr2729_Addr(F.v6382));
}
(*F.p2768_o) = F.p2768;
(*F.p2769_o) = F.p2769;
return;
}
if ((F.p2765 == v1943)) {
yr2714_NArgs(F.p2766, INT64_C(2));
yr2735_StdVar(yr2707_Arg(F.p2766, INT64_C(1)), v801, &F.v6382, &F.v6392);
yr2735_StdVar(yr2707_Arg(F.p2766, INT64_C(2)), v828, &F.v6384, &F.v6394);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2766))).f_line, ((*(yR100 *)rt_nil_check(F.v6392))).f_elem, F.v6394);
if ((yr1744_Deep(F.v6394) || ((((*(yR100 *)rt_nil_check(F.v6394))).f_kind == v798)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2766))).f_line, y_str("files of this implementation hold no arrays or pointers", 55));
}
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(yr1750_CType(F.v6394));
yr997_SA(y_str(" g; y_get(&", 11));
yr1004_ST(F.v6382);
yr997_SA(y_str(", &g, sizeof g); ", 17));
yr1004_ST(F.v6384);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2068_Convert(yr1021_T(y_str("g", 1)), F.v6394, ((*(yR100 *)rt_nil_check(F.v6392))).f_elem));
yr997_SA(y_str("; })", 4));
F.p2768 = yr1016_SE();
(*F.p2768_o) = F.p2768;
(*F.p2769_o) = F.p2769;
return;
}
if ((F.p2765 == v1946)) {
yr2714_NArgs(F.p2766, INT64_C(2));
yr2735_StdVar(yr2707_Arg(F.p2766, INT64_C(1)), v801, &F.v6382, &F.v6392);
yr2125_Expr(yr2707_Arg(F.p2766, INT64_C(2)), ((*(yR100 *)rt_nil_check(F.v6392))).f_elem, &F.v6384, &F.v6394);
yr1783_CheckType(((*(yR95 *)rt_nil_check(F.p2766))).f_line, ((*(yR100 *)rt_nil_check(F.v6392))).f_elem, F.v6394);
if ((yr1744_Deep(F.v6394) || ((((*(yR100 *)rt_nil_check(F.v6394))).f_kind == v798)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2766))).f_line, y_str("files of this implementation hold no arrays or pointers", 55));
}
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(yr1750_CType(((*(yR100 *)rt_nil_check(F.v6392))).f_elem));
yr997_SA(y_str(" pv = ", 6));
yr1004_ST(yr2068_Convert(F.v6384, ((*(yR100 *)rt_nil_check(F.v6392))).f_elem, F.v6394));
yr997_SA(y_str("; y_put(&", 9));
yr1004_ST(F.v6382);
yr997_SA(y_str(", &pv, sizeof pv); })", 21));
F.p2768 = yr1016_SE();
(*F.p2768_o) = F.p2768;
(*F.p2769_o) = F.p2769;
return;
}
if ((F.p2765 == v1952)) {
F.v6400 = yr1260_Count(((*(yR95 *)rt_nil_check(F.p2766))).f_a);
if ((((F.v6400 < INT64_C(5))) || ((!((rt_mod((rt_sub(F.v6400, INT64_C(2))), INT64_C(3))) == INT64_C(0)))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2766))).f_line, y_str("MOVE takes an object, an index and triples", 42));
}
yr2735_StdVar(yr2707_Arg(F.p2766, INT64_C(1)), v828, &F.v6382, &F.v6392);
if (((!((((((*(yR100 *)rt_nil_check(F.v6392))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.v6392))).f_kind == v813))))) || ((!(((*(yR100 *)rt_nil_check(F.v6392))).f_nidx == INT64_C(1)))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2766))).f_line, y_str("MOVE works on one-dimensional arrays", 36));
}
F.v6384 = yr2752_IntArg(yr2707_Arg(F.p2766, INT64_C(2)));
F.v6390 = yr1146_Fresh(y_str("at", 2));
yr986_SB();
yr997_SA(y_str("({ rt_int ", 10));
yr1004_ST(F.v6390);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.v6384);
yr997_SA(y_str(";", 1));
F.p2768 = yr1016_SE();
F.v6402 = INT64_C(3);
while ((F.v6402 < F.v6400)) {
yr2125_Expr(yr2707_Arg(F.p2766, F.v6402), ((*(yR100 *)rt_nil_check(F.v6392))).f_elem, &F.v6386, &F.v6396);
if (((!yr1732_IsArrayLike(F.v6396)) || (!yr1768_SameType(((*(yR100 *)rt_nil_check(F.v6392))).f_elem, ((*(yR100 *)rt_nil_check(F.v6396))).f_elem)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2766))).f_line, y_str("MOVE: the components differ in type", 35));
}
F.v6388 = yr2752_IntArg(yr2707_Arg(F.p2766, rt_range(rt_add(F.v6402, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v6384 = yr2752_IntArg(yr2707_Arg(F.p2766, rt_range(rt_add(F.v6402, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr986_SB();
yr1004_ST(F.p2768);
yr997_SA(y_str(" { rt_int mi = ", 15));
yr1004_ST(F.v6388);
yr997_SA(y_str(", mj = ", 7));
yr1004_ST(F.v6384);
yr997_SA(y_str("; y_move(&", 10));
yr1004_ST(F.v6382);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6390);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6386);
yr997_SA(y_str(", mi, mj, ", 10));
yr1004_ST(yr1756_DescOf(((*(yR100 *)rt_nil_check(F.v6392))).f_elem));
yr997_SA(y_str("); if (mj >= mi) ", 17));
yr1004_ST(F.v6390);
yr997_SA(y_str(" += mj - mi + 1; }", 18));
F.p2768 = yr1016_SE();
F.v6402 = rt_range(rt_add(F.v6402, INT64_C(3)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.p2768 = yr2480_Join(F.p2768, yr1021_T(y_str(" })", 3)), INT64_C(0));
(*F.p2768_o) = F.p2768;
(*F.p2769_o) = F.p2769;
return;
}
if ((((F.p2765 == v1955)) || ((F.p2765 == v1958)))) {
yr2714_NArgs(F.p2766, INT64_C(2));
F.v6382 = yr2450_Cond(yr2707_Arg(F.p2766, INT64_C(1)));
F.v6384 = yr2450_Cond(yr2707_Arg(F.p2766, INT64_C(2)));
F.p2769 = v1685;
if ((F.p2765 == v1955)) {
F.p2768 = yr2184_Infix(yr2106_Paren(yr2184_Infix(F.v6382, y_str("!=", 2), yr1021_T(y_str("0", 1)))), y_str("&", 1), yr2106_Paren(yr2184_Infix(F.v6384, y_str("!=", 2), yr1021_T(y_str("0", 1)))));
} else {
F.p2768 = yr2184_Infix(yr2106_Paren(yr2184_Infix(F.v6382, y_str("!=", 2), yr1021_T(y_str("0", 1)))), y_str("|", 1), yr2106_Paren(yr2184_Infix(F.v6384, y_str("!=", 2), yr1021_T(y_str("0", 1)))));
}
(*F.p2768_o) = F.p2768;
(*F.p2769_o) = F.p2769;
return;
}
if ((F.p2765 == v1961)) {
yr2714_NArgs(F.p2766, INT64_C(1));
F.p2768 = yr2721_Call1(y_str("rt_delay", 8), yr2752_IntArg(yr2707_Arg(F.p2766, INT64_C(1))));
(*F.p2768_o) = F.p2768;
(*F.p2769_o) = F.p2769;
return;
}
if ((F.p2765 == v1964)) {
yr2714_NArgs(F.p2766, INT64_C(0));
F.p2769 = yr2169_Unbounded(v1683);
F.p2768 = yr1021_T(y_str("rt_time()", 9));
(*F.p2768_o) = F.p2768;
(*F.p2769_o) = F.p2769;
return;
}
if (((((F.p2765 == v1967)) || ((F.p2765 == v1970))) || ((F.p2765 == v1973)))) {
yr2735_StdVar(yr2707_Arg(F.p2766, INT64_C(1)), v807, &F.v6382, &F.v6392);
if ((F.p2765 == v1967)) {
if ((yr1260_Count(((*(yR95 *)rt_nil_check(F.p2766))).f_a) == INT64_C(1))) {
F.v6384 = yr1021_T(y_str("1", 1));
} else {
yr2714_NArgs(F.p2766, INT64_C(2));
F.v6384 = yr2752_IntArg(yr2707_Arg(F.p2766, INT64_C(2)));
}
F.p2768 = yr2175_Call2(y_str("y_wait", 6), yr2729_Addr(F.v6382), F.v6384);
} else {
yr2714_NArgs(F.p2766, INT64_C(1));
if ((F.p2765 == v1970)) {
F.p2768 = yr2721_Call1(y_str("y_send", 6), yr2729_Addr(F.v6382));
} else {
F.p2769 = v1685;
F.p2768 = yr2721_Call1(y_str("y_awaited", 9), yr2729_Addr(F.v6382));
}
}
(*F.p2768_o) = F.p2768;
(*F.p2769_o) = F.p2769;
return;
}
if (((((F.p2765 == v1976)) || ((F.p2765 == v1979))) || ((F.p2765 == v1982)))) {
yr2714_NArgs(F.p2766, INT64_C(1));
yr2744_NumArg(yr2707_Arg(F.p2766, INT64_C(1)), &F.v6382, &F.v6392);
F.p2769 = yr2169_Unbounded(v1683);
if ((((*(yR100 *)rt_nil_check(F.v6392))).f_kind == v774)) {
F.p2768 = F.v6382;
} else if ((F.p2765 == v1976)) {
F.p2768 = yr2721_Call1(y_str("y_floor", 7), F.v6382);
} else if ((F.p2765 == v1979)) {
F.p2768 = yr2721_Call1(y_str("y_ceiling", 9), F.v6382);
} else {
F.p2768 = yr2721_Call1(y_str("y_near_integer", 14), F.v6382);
}
(*F.p2768_o) = F.p2768;
(*F.p2769_o) = F.p2769;
return;
}
if ((F.p2765 == v1988)) {
yr2714_NArgs(F.p2766, INT64_C(1));
yr2744_NumArg(yr2707_Arg(F.p2766, INT64_C(1)), &F.v6382, &F.v6392);
F.p2769 = v1695;
F.p2768 = yr2480_Join(yr1021_T(y_str("((double)(", 10)), F.v6382, yr1021_T(y_str("))", 2)));
(*F.p2768_o) = F.p2768;
(*F.p2769_o) = F.p2769;
return;
}
if ((F.p2765 == v1985)) {
yr2714_NArgs(F.p2766, INT64_C(2));
yr2744_NumArg(yr2707_Arg(F.p2766, INT64_C(1)), &F.v6382, &F.v6392);
yr2744_NumArg(yr2707_Arg(F.p2766, INT64_C(2)), &F.v6384, &F.v6394);
F.p2769 = v1697;
F.p2768 = yr2175_Call2(y_str("y_near_fixed", 12), yr2480_Join(yr1021_T(y_str("(double)(", 9)), F.v6382, yr1021_T(y_str(")", 1))), F.v6384);
(*F.p2768_o) = F.p2768;
(*F.p2769_o) = F.p2769;
return;
}
if ((F.p2765 == v1991)) {
yr2714_NArgs(F.p2766, INT64_C(3));
yr2744_NumArg(yr2707_Arg(F.p2766, INT64_C(1)), &F.v6382, &F.v6392);
yr2744_NumArg(yr2707_Arg(F.p2766, INT64_C(2)), &F.v6384, &F.v6394);
yr2744_NumArg(yr2707_Arg(F.p2766, INT64_C(3)), &F.v6386, &F.v6396);
F.p2769 = v1697;
F.p2768 = yr2480_Join(yr1021_T(y_str("y_fixed_div(", 12)), F.v6382, yr2480_Join(yr1021_T(y_str(", ", 2)), F.v6384, yr2480_Join(yr1021_T(y_str(", ", 2)), F.v6386, yr1021_T(y_str(")", 1)))));
(*F.p2768_o) = F.p2768;
(*F.p2769_o) = F.p2769;
return;
}
if (((((F.p2765 == v1994)) || ((F.p2765 == v1997))) || ((F.p2765 == v2000)))) {
yr2714_NArgs(F.p2766, INT64_C(1));
yr2735_StdVar(yr2707_Arg(F.p2766, INT64_C(1)), v810, &F.v6382, &F.v6392);
if ((F.p2765 == v1994)) {
F.p2768 = yr2721_Call1(y_str("rt_region_enter", 15), yr2729_Addr(F.v6382));
} else if ((F.p2765 == v1997)) {
F.p2768 = yr2721_Call1(y_str("rt_region_leave", 15), yr2729_Addr(F.v6382));
} else {
F.p2769 = v1685;
F.p2768 = yr2721_Call1(y_str("y_cond_claim", 12), yr2729_Addr(F.v6382));
}
(*F.p2768_o) = F.p2768;
(*F.p2769_o) = F.p2769;
return;
}
if ((F.p2765 == v2003)) {
yr2714_NArgs(F.p2766, INT64_C(0));
F.p2769 = yr2169_Unbounded(v1683);
F.p2768 = yr1021_T(y_str("y_self()", 8));
(*F.p2768_o) = F.p2768;
(*F.p2769_o) = F.p2769;
return;
}
if ((F.p2765 == v2006)) {
yr2714_NArgs(F.p2766, INT64_C(2));
F.p2768 = yr2175_Call2(y_str("y_change_priority", 17), yr2752_IntArg(yr2707_Arg(F.p2766, INT64_C(1))), yr2752_IntArg(yr2707_Arg(F.p2766, INT64_C(2))));
(*F.p2768_o) = F.p2768;
(*F.p2769_o) = F.p2769;
return;
}
if ((F.p2765 == v2009)) {
yr2714_NArgs(F.p2766, INT64_C(1));
F.p2768 = yr2721_Call1(y_str("y_raise_termination", 19), yr2752_IntArg(yr2707_Arg(F.p2766, INT64_C(1))));
(*F.p2768_o) = F.p2768;
(*F.p2769_o) = F.p2769;
return;
}
if ((F.p2765 == v2015)) {
yr2714_NArgs(F.p2766, INT64_C(1));
yr2758_CodeInsert(F.p2766);
(*F.p2768_o) = F.p2768;
(*F.p2769_o) = F.p2769;
return;
}
if ((((F.p2765 == v2018)) || ((F.p2765 == v2021)))) {
yr2714_NArgs(F.p2766, INT64_C(1));
yr2125_Expr(yr2707_Arg(F.p2766, INT64_C(1)), ((void *)0), &F.v6382, &F.v6392);
F.p2769 = yr2169_Unbounded(v1683);
if ((F.p2765 == v2018)) {
F.p2768 = yr2480_Join(yr1021_T(y_str("((rt_int)(intptr_t)&(", 21)), F.v6382, yr1021_T(y_str("))", 2)));
} else {
F.p2768 = yr2480_Join(yr1021_T(y_str("((rt_int)sizeof(", 16)), F.v6382, yr1021_T(y_str("))", 2)));
}
(*F.p2768_o) = F.p2768;
(*F.p2769_o) = F.p2769;
return;
}
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2766))).f_line, ((*(yR95 *)rt_nil_check(F.p2766))).f_name, y_str(" is not translated", 18));
(*F.p2768_o) = F.p2768;
(*F.p2769_o) = F.p2769;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2778_StdRep(yarr a_p2780, void * a_p2781) {
struct yf2782 F;
memset((void *)&F, 0, sizeof F);
F.p2780 = a_p2780;
F.p2781 = a_p2781;
F.v6600 = yr1588_NewSym(v840, yr1041_N(F.p2780));
((*(yR115 *)rt_nil_check(F.v6600))).f_rep = F.p2781;
yr1644_Define(F.v6600, INT64_C(0));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2786_StdOp(yarr a_p2788, rt_int a_p2789) {
struct yf2790 F;
memset((void *)&F, 0, sizeof F);
F.p2788 = a_p2788;
F.p2789 = a_p2789;
F.v6606 = yr1588_NewSym(v861, yr1041_N(F.p2788));
((*(yR115 *)rt_nil_check(F.v6606))).f_mval = F.p2789;
yr1644_Define(F.v6606, INT64_C(0));
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2794_LitList(yarr a_p2796, yarr a_p2797, yarr a_p2798, rt_int a_p2799) {
struct yf2800 F;
memset((void *)&F, 0, sizeof F);
F.p2796 = a_p2796;
F.p2797 = a_p2797;
F.p2798 = a_p2798;
F.p2799 = a_p2799;
F.v6614 = ((void *)0);
F.v6616 = ((void *)0);
F.v6618 = ((void *)0);
F.v6618 = yr1245_NewNode(v639, INT64_C(0));
((*(yR95 *)rt_nil_check(F.v6618))).f_name = yr1041_N(F.p2796);
yr1252_Link(&F.v6614, &F.v6616, F.v6618);
F.v6618 = yr1245_NewNode(v639, INT64_C(0));
((*(yR95 *)rt_nil_check(F.v6618))).f_name = yr1041_N(F.p2797);
yr1252_Link(&F.v6614, &F.v6616, F.v6618);
if (F.p2799) {
F.v6618 = yr1245_NewNode(v639, INT64_C(0));
((*(yR95 *)rt_nil_check(F.v6618))).f_name = yr1041_N(F.p2798);
yr1252_Link(&F.v6614, &F.v6616, F.v6618);
}
{ void * rv6622 = F.v6614;
return rv6622; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2804_Abstract(rt_int a_p2805, yarr a_p2807) {
struct yf2808 F;
memset((void *)&F, 0, sizeof F);
F.p2805 = a_p2805;
F.p2807 = a_p2807;
F.v6627 = yr1707_NewRep(F.p2805, yr1041_N(F.p2807));
((*(yR100 *)rt_nil_check(F.v6627))).f_abstract = 1;
{ void * rv6629 = F.v6627;
return rv6629; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2812_Predefine(void) {
struct yf2813 F;
memset((void *)&F, 0, sizeof F);
yr1595_OpenScope(0);
((void * *)(v2599).p)[y_ix1(v2599, v1570)] = ((void *)0);
v1683 = yr2804_Abstract(v774, y_str("INTEGER", 7));
v1697 = yr2804_Abstract(v777, y_str("FIXED", 5));
v1695 = yr2804_Abstract(v780, y_str("FLOATING", 8));
v1699 = yr1707_NewRep(v807, yr1041_N(y_str("SIGNAL", 6)));
v1701 = yr1707_NewRep(v810, yr1041_N(y_str("SEMAPHORE", 9)));
v1689 = yr1707_NewRep(v822, yr1041_N(y_str("no value", 8)));
v1703 = yr1707_NewRep(v828, yr1041_N(y_str("any", 3)));
v1685 = yr1707_NewRep(v783, yr1041_N(y_str("BOOLEAN", 7)));
((*(yR100 *)rt_nil_check(v1685))).f_lits = yr2794_LitList(y_str("FALSE", 5), y_str("TRUE", 4), y_str("", 0), 0);
((*(yR100 *)rt_nil_check(v1685))).f_nlits = INT64_C(2);
yr1837_SetRange(v1685, INT64_C(0), INT64_C(1));
yr1831_DefineLits(v1685);
v1687 = yr1707_NewRep(v789, yr1041_N(y_str("ASCII", 5)));
((*(yR100 *)rt_nil_check(v1687))).f_ordered = 1;
((*(yR100 *)rt_nil_check(v1687))).f_nlits = INT64_C(128);
yr1837_SetRange(v1687, INT64_C(0), INT64_C(127));
v2774 = yr1707_NewRep(v786, yr1041_N(y_str("OPEN_MODE", 9)));
((*(yR100 *)rt_nil_check(v2774))).f_lits = yr2794_LitList(y_str("READ", 4), y_str("WRITE", 5), y_str("APPEND", 6), 1);
((*(yR100 *)rt_nil_check(v2774))).f_nlits = INT64_C(3);
yr1837_SetRange(v2774, INT64_C(0), INT64_C(2));
yr1831_DefineLits(v2774);
yr2778_StdRep(y_str("INTEGER", 7), v1683);
yr2778_StdRep(y_str("FIXED", 5), v1697);
yr2778_StdRep(y_str("FLOATING", 8), v1695);
yr2778_StdRep(y_str("BOOLEAN", 7), v1685);
yr2778_StdRep(y_str("SIGNAL", 6), v1699);
yr2778_StdRep(y_str("SEMAPHORE", 9), v1701);
yr2778_StdRep(y_str("ASCII", 5), v1687);
yr2778_StdRep(y_str("STANDARD_ALPHABET", 17), v1687);
yr2778_StdRep(y_str("OPEN_MODE", 9), v2774);
yr2786_StdOp(y_str("LOW", 3), v1916);
yr2786_StdOp(y_str("HIGH", 4), v1919);
yr2786_StdOp(y_str("SUCC", 4), v1922);
yr2786_StdOp(y_str("PRED", 4), v1925);
yr2786_StdOp(y_str("FIRST", 5), v1928);
yr2786_StdOp(y_str("LAST", 4), v1931);
yr2786_StdOp(y_str("NEW", 3), v1934);
yr2786_StdOp(y_str("OPEN", 4), v1937);
yr2786_StdOp(y_str("CLOSE", 5), v1940);
yr2786_StdOp(y_str("GET", 3), v1943);
yr2786_StdOp(y_str("PUT", 3), v1946);
yr2786_StdOp(y_str("CHECK_EOF", 9), v1949);
yr2786_StdOp(y_str("MOVE", 4), v1952);
yr2786_StdOp(y_str("AND_LONG", 8), v1955);
yr2786_StdOp(y_str("OR_LONG", 7), v1958);
yr2786_StdOp(y_str("DELAY", 5), v1961);
yr2786_StdOp(y_str("CLOCK_TIME", 10), v1964);
yr2786_StdOp(y_str("WAIT", 4), v1967);
yr2786_StdOp(y_str("SEND", 4), v1970);
yr2786_StdOp(y_str("AWAITED", 7), v1973);
yr2786_StdOp(y_str("FLOOR", 5), v1976);
yr2786_StdOp(y_str("CEILING", 7), v1979);
yr2786_StdOp(y_str("NEAR_INTEGER", 12), v1982);
yr2786_StdOp(y_str("NEAR_FIXED", 10), v1985);
yr2786_StdOp(y_str("NEAR_FLOATING", 13), v1988);
yr2786_StdOp(y_str("FIXED_DIV", 9), v1991);
yr2786_StdOp(y_str("CLAIM", 5), v1994);
yr2786_StdOp(y_str("RELEASE", 7), v1997);
yr2786_StdOp(y_str("CONDITIONAL_CLAIM", 17), v2000);
yr2786_StdOp(y_str("PROCESS_IDENTITY", 16), v2003);
yr2786_StdOp(y_str("CHANGE_PRIORITY", 15), v2006);
yr2786_StdOp(y_str("RAISE_PROCESS_TERMINATION", 25), v2009);
yr2786_StdOp(y_str("FREE_POINTER", 12), v2012);
yr2786_StdOp(y_str("C_CODE_INSERT", 13), v2015);
yr2786_StdOp(y_str("ADDR", 4), v2018);
yr2786_StdOp(y_str("EXTENT", 6), v2021);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2817_Translate(void) {
struct yf2818 F;
memset((void *)&F, 0, sizeof F);
F.v6707 = v2776;
yr1595_OpenScope(0);
((void * *)(v2599).p)[y_ix1(v2599, v1570)] = ((void *)0);
v1576 = INT64_C(0);
while ((!(F.v6707 == ((void *)0)))) {
yr2634_CompileModule(F.v6707);
F.v6707 = ((*(yR95 *)rt_nil_check(F.v6707))).f_next;
}
yr2658_AwaitProcesses();
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2822_WriteProgram(void) {
struct yf2823 F;
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
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_2222, 1, lo, hi, &y_d_int); }
y_init(&yd_2222, &v2224);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_2231, 1, lo, hi, &y_d_ptr); }
y_init(&yd_2231, &v2233);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_2240, 1, lo, hi, &y_d_ptr); }
y_init(&yd_2240, &v2242);
v2244 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2329, 1, lo, hi, &y_d_int); }
y_init(&yd_2329, &v2331);
v2333 = INT64_C(0);
v2336 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2344, 1, lo, hi, &y_d_int); }
y_init(&yd_2344, &v2346);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2353, 1, lo, hi, &y_d_int); }
y_init(&yd_2353, &v2355);
v2357 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2365, 1, lo, hi, &y_d_int); }
y_init(&yd_2365, &v2367);
v2369 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2377, 1, lo, hi, &y_d_int); }
y_init(&yd_2377, &v2379);
y_init(&yd_2377, &v2381);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2388, 1, lo, hi, &y_d_int); }
y_init(&yd_2388, &v2390);
v2392 = INT64_C(0);
v2395 = INT64_C(0);
v2398 = ((void *)0);
v2400 = 0;
v2590 = ((void *)0);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_2597, 1, lo, hi, &y_d_ptr); }
y_init(&yd_2597, &v2599);
v2616 = INT64_C(0);
yr963_InitChars();
yr1177_InitWords();
v1239 = yr1041_N(y_str("FROM", 4));
v1242 = yr1041_N(y_str("DIMENSION", 9));
v2024 = yr1021_T(y_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP DEL SQ DQ ", 128));
y_open(&v881, y_str("OUTPUT", 6), 1);
yr1182_ReadSource();
yr1229_Lex();
v2776 = yr1554_ParseProgram();
yr2812_Predefine();
yr2817_Translate();
yr2822_WriteProgram();
y_close(&v881);
}
int main(int argc, char **argv) {
y_lang();
rt_init(argc, argv);
y_elaborate();
rt_main_done();
return 0;
}
