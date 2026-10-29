#include "paleo.h"
#include <math.h>
#include <string.h>
#include <stdlib.h>
typedef struct yR99 yR99;
typedef struct yR104 yR104;
typedef struct yR109 yR109;
typedef struct yR114 yR114;
typedef struct yR119 yR119;
typedef struct yR124 yR124;
typedef struct yR129 yR129;
typedef struct yR134 yR134;
struct yf984;
struct yf990;
struct yf996;
struct yf1002;
struct yf1007;
struct yf1013;
struct yf1020;
struct yf1026;
struct yf1032;
struct yf1037;
struct yf1044;
struct yf1051;
struct yf1057;
struct yf1064;
struct yf1071;
struct yf1079;
struct yf1086;
struct yf1093;
struct yf1101;
struct yf1108;
struct yf1114;
struct yf1121;
struct yf1127;
struct yf1133;
struct yf1140;
struct yf1148;
struct yf1157;
struct yf1162;
struct yf1169;
struct yf1216;
struct yf1221;
struct yf1228;
struct yf1234;
struct yf1239;
struct yf1245;
struct yf1252;
struct yf1259;
struct yf1265;
struct yf1270;
struct yf1275;
struct yf1293;
struct yf1301;
struct yf1307;
struct yf1312;
struct yf1317;
struct yf1322;
struct yf1329;
struct yf1335;
struct yf1341;
struct yf1346;
struct yf1352;
struct yf1357;
struct yf1363;
struct yf1368;
struct yf1375;
struct yf1380;
struct yf1386;
struct yf1391;
struct yf1396;
struct yf1401;
struct yf1406;
struct yf1411;
struct yf1416;
struct yf1422;
struct yf1428;
struct yf1435;
struct yf1440;
struct yf1446;
struct yf1451;
struct yf1457;
struct yf1462;
struct yf1467;
struct yf1472;
struct yf1477;
struct yf1482;
struct yf1487;
struct yf1492;
struct yf1498;
struct yf1503;
struct yf1508;
struct yf1514;
struct yf1520;
struct yf1526;
struct yf1532;
struct yf1538;
struct yf1547;
struct yf1554;
struct yf1559;
struct yf1564;
struct yf1569;
struct yf1575;
struct yf1580;
struct yf1585;
struct yf1590;
struct yf1595;
struct yf1600;
struct yf1651;
struct yf1657;
struct yf1662;
struct yf1668;
struct yf1674;
struct yf1680;
struct yf1687;
struct yf1693;
struct yf1700;
struct yf1707;
struct yf1714;
struct yf1720;
struct yf1727;
struct yf1733;
struct yf1739;
struct yf1770;
struct yf1776;
struct yf1782;
struct yf1788;
struct yf1794;
struct yf1800;
struct yf1806;
struct yf1813;
struct yf1819;
struct yf1825;
struct yf1831;
struct yf1837;
struct yf1843;
struct yf1850;
struct yf1858;
struct yf1866;
struct yf1873;
struct yf1879;
struct yf1885;
struct yf1892;
struct yf1898;
struct yf1906;
struct yf1912;
struct yf1918;
struct yf1926;
struct yf1932;
struct yf1939;
struct yf1947;
struct yf1955;
struct yf1965;
struct yf1972;
struct yf1980;
struct yf1987;
struct yf1993;
struct yf2001;
struct yf2007;
struct yf2015;
struct yf2022;
struct yf2030;
struct yf2037;
struct yf2042;
struct yf2048;
struct yf2061;
struct yf2072;
struct yf2080;
struct yf2087;
struct yf2207;
struct yf2214;
struct yf2222;
struct yf2231;
struct yf2239;
struct yf2247;
struct yf2254;
struct yf2262;
struct yf2270;
struct yf2278;
struct yf2289;
struct yf2297;
struct yf2306;
struct yf2312;
struct yf2320;
struct yf2330;
struct yf2340;
struct yf2346;
struct yf2352;
struct yf2360;
struct yf2366;
struct yf2373;
struct yf2379;
struct yf2388;
struct yf2396;
struct yf2405;
struct yf2413;
struct yf2423;
struct yf2429;
struct yf2438;
struct yf2447;
struct yf2456;
struct yf2462;
struct yf2469;
struct yf2478;
struct yf2521;
struct yf2529;
struct yf2535;
struct yf2544;
struct yf2552;
struct yf2559;
struct yf2568;
struct yf2574;
struct yf2585;
struct yf2592;
struct yf2602;
struct yf2612;
struct yf2622;
struct yf2631;
struct yf2639;
struct yf2765;
struct yf2775;
struct yf2781;
struct yf2786;
struct yf2792;
struct yf2798;
struct yf2805;
struct yf2813;
struct yf2820;
struct yf2826;
struct yf2832;
struct yf2839;
struct yf2844;
struct yf2850;
struct yf2856;
struct yf2864;
struct yf2870;
struct yf2876;
struct yf2882;
struct yf2888;
struct yf2894;
struct yf2900;
struct yf2906;
struct yf2912;
struct yf2919;
struct yf2926;
struct yf2932;
struct yf2940;
struct yf2946;
struct yf2953;
struct yf2960;
struct yf2966;
struct yf2986;
struct yf2994;
struct yf3004;
struct yf3011;
struct yf3019;
struct yf3026;
struct yf3032;
struct yf3038;
struct yf3044;
struct yf3050;
struct yf3055;
struct yf3062;
struct yf3068;
struct yf3074;
struct yf3079;
struct yf3085;
struct yf3092;
struct yf3099;
struct yf3106;
struct yf3113;
struct yf3120;
struct yf3128;
struct yf3134;
struct yf3143;
struct yf3151;
struct yf3157;
struct yf3163;
struct yf3170;
struct yf3180;
struct yf3192;
struct yf3200;
struct yf3210;
struct yf3218;
struct yf3223;
struct yf3228;
struct yf3233;
struct yR99 { rt_int f_kind; rt_int f_line; rt_int f_ival; rt_int f_flag; rt_int f_name; rt_int f_text; void * f_a; void * f_b; void * f_c; void * f_d; void * f_e; void * f_next; void * f_rep; void * f_sym; };
struct yR104 { rt_int f_kind; rt_int f_tid; rt_int f_tname; rt_int f_lo; rt_int f_hi; rt_int f_mlo; rt_int f_mhi; rt_int f_hasm; rt_int f_scale; rt_int f_prec; void * f_elem; void * f_idx; rt_int f_nidx; void * f_link; void * f_lits; rt_int f_nlits; void * f_fields; void * f_selector; rt_int f_cname; rt_int f_dname; rt_int f_dlevel; rt_int f_deep; rt_int f_abstract; rt_int f_opaque; rt_int f_opaqueops; rt_int f_ordered; rt_int f_forward; rt_int f_fwdscope; void * f_monitor; rt_int f_serial; rt_int f_sig; rt_int f_fsn; rt_int f_fsd; };
struct yR109 { rt_int f_name; void * f_rep; rt_int f_isconst; rt_int f_variant; void * f_labels; void * f_next; };
struct yR114 { rt_int f_name; rt_int f_cls; void * f_rep; rt_int f_cname; void * f_next; };
struct yR119 { rt_int f_kind; rt_int f_name; void * f_rep; rt_int f_cname; rt_int f_level; rt_int f_byref; rt_int f_readonly; rt_int f_mval; rt_int f_hasmv; void * f_params; rt_int f_nparams; void * f_ret; rt_int f_func; void * f_decl; rt_int f_depth; void * f_target; void * f_members; void * f_mnext; void * f_chain; void * f_stack; void * f_alt; void * f_monitor; rt_int f_serial; void * f_calls; };
struct yR124 { void * f_syms; rt_int f_closed; void * f_module; rt_int f_level; void * f_deferred; void * f_up; };
struct yR129 { rt_int f_t; void * f_next; };
struct yR134 { void * f_head; void * f_tail; };
struct yf984 { void *up;
rt_int v3237;
rt_int c_3240;
};
struct yf990 { void *up;
unsigned char p989;
};
struct yf996 { void *up;
unsigned char p995;
};
struct yf1002 { void *up;
unsigned char p1001;
};
struct yf1007 { void *up;
};
struct yf1013 { void *up;
unsigned char p1012;
};
struct yf1020 { void *up;
yarr p1019;
rt_int lo3276;
rt_int hi3277;
rt_int c_3279;
};
struct yf1026 { void *up;
rt_int p1025;
rt_int v3285;
};
struct yf1032 { void *up;
rt_int p1031;
ydesc yd_3300;
yarr v3302;
rt_int v3304;
rt_int v3307;
};
struct yf1037 { void *up;
rt_int v3326;
rt_int lo3337;
rt_int hi3338;
rt_int c_3340;
};
struct yf1044 { void *up;
yarr p1043;
};
struct yf1051 { void *up;
rt_int p1049;
rt_int p1050;
rt_int v3351;
rt_int v3354;
rt_int v3356;
rt_int lo3361;
rt_int hi3362;
rt_int c_3364;
rt_int lo3383;
rt_int hi3384;
rt_int c_3386;
};
struct yf1057 { void *up;
rt_int p1056;
};
struct yf1064 { void *up;
yarr p1063;
};
struct yf1071 { void *up;
rt_int p1069;
rt_int p1070;
rt_int lo3415;
rt_int hi3416;
rt_int c_3418;
};
struct yf1079 { void *up;
rt_int p1076;
yarr p1078;
rt_int v3431;
rt_int lo3447;
rt_int hi3448;
rt_int c_3450;
};
struct yf1086 { void *up;
rt_int p1084;
rt_int p1085;
};
struct yf1093 { void *up;
yR134 * p1091;
rt_int p1092;
void * v3471;
};
struct yf1101 { void *up;
yR134 * p1098;
yarr p1100;
};
struct yf1108 { void *up;
yR134 * p1106;
yR134 * p1107;
};
struct yf1114 { void *up;
rt_int p1113;
};
struct yf1121 { void *up;
yarr p1120;
};
struct yf1127 { void *up;
rt_int p1126;
rt_int v3485;
};
struct yf1133 { void *up;
yR134 p1132;
void * v3492;
};
struct yf1140 { void *up;
rt_int p1138;
rt_int p1139;
rt_int v3498;
};
struct yf1148 { void *up;
rt_int p1145;
yarr p1147;
};
struct yf1157 { void *up;
rt_int p1153;
rt_int p1154;
yarr p1156;
rt_int v3512;
};
struct yf1162 { void *up;
};
struct yf1169 { void *up;
yarr p1168;
rt_int v3520;
};
struct yf1216 { void *up;
rt_int v3524;
rt_int v3526;
rt_int v3528;
rt_int lo3545;
rt_int hi3546;
rt_int c_3548;
};
struct yf1221 { void *up;
unsigned char v3557;
};
struct yf1228 { void *up;
rt_int p1226;
rt_int p1227;
};
struct yf1234 { void *up;
rt_int p1233;
};
struct yf1239 { void *up;
rt_int v3574;
rt_int v3576;
};
struct yf1245 { void *up;
unsigned char p1244;
};
struct yf1252 { void *up;
yarr p1251;
};
struct yf1259 { void *up;
rt_int p1257;
rt_int p1258;
rt_int v3606;
};
struct yf1265 { void *up;
rt_int p1264;
rt_int v3616;
rt_int v3619;
rt_int v3621;
rt_int v3623;
rt_int v3625;
rt_int v3627;
rt_int v3630;
rt_int v3633;
rt_int v3636;
rt_int v3639;
rt_int v3642;
rt_int v3645;
rt_int v3648;
rt_int lo3686;
rt_int hi3687;
rt_int c_3689;
rt_int lo3718;
rt_int hi3719;
rt_int c_3721;
rt_int lo3728;
rt_int hi3729;
rt_int c_3731;
};
struct yf1270 { void *up;
rt_int v3742;
rt_int v3744;
rt_int v3746;
rt_int v3748;
};
struct yf1275 { void *up;
unsigned char v3777;
rt_int v3779;
rt_int v3781;
rt_int v3783;
rt_int v3785;
rt_int v3787;
rt_int v3789;
rt_int v3791;
rt_int lo3866;
rt_int hi3867;
rt_int c_3869;
};
struct yf1293 { void *up;
rt_int p1291;
rt_int p1292;
void * v3885;
};
struct yf1301 { void *up;
void * * p1298;
void * * p1299;
void * p1300;
};
struct yf1307 { void *up;
void * p1306;
rt_int v3898;
void * v3901;
};
struct yf1312 { void *up;
};
struct yf1317 { void *up;
};
struct yf1322 { void *up;
};
struct yf1329 { void *up;
rt_int p1327;
rt_int p1328;
rt_int v3915;
};
struct yf1335 { void *up;
rt_int p1334;
};
struct yf1341 { void *up;
rt_int p1340;
};
struct yf1346 { void *up;
};
struct yf1352 { void *up;
rt_int p1351;
};
struct yf1357 { void *up;
rt_int v3938;
};
struct yf1363 { void *up;
rt_int p1362;
rt_int v3948;
};
struct yf1368 { void *up;
rt_int v3953;
};
struct yf1375 { void *up;
rt_int p1373;
rt_int p1374;
rt_int v3960;
};
struct yf1380 { void *up;
rt_int v3964;
};
struct yf1386 { void *up;
rt_int p1385;
void * v3974;
};
struct yf1391 { void *up;
void * v3981;
};
struct yf1396 { void *up;
void * v3986;
void * v3988;
void * v3990;
void * v3992;
rt_int v3994;
};
struct yf1401 { void *up;
rt_int v4003;
};
struct yf1406 { void *up;
void * v4009;
void * v4011;
void * v4013;
void * v4015;
};
struct yf1411 { void *up;
void * v4020;
void * v4022;
void * v4024;
void * v4026;
void * v4028;
};
struct yf1416 { void *up;
void * v4036;
void * v4038;
void * v4040;
};
struct yf1422 { void *up;
rt_int p1421;
void * v4046;
};
struct yf1428 { void *up;
rt_int p1427;
};
struct yf1435 { void *up;
void * * p1433;
void * * p1434;
rt_int v4067;
void * v4069;
void * v4071;
void * v4073;
};
struct yf1440 { void *up;
void * v4077;
void * v4079;
void * v4081;
rt_int v4083;
rt_int v4085;
rt_int v4087;
};
struct yf1446 { void *up;
void * p1445;
void * v4103;
void * v4105;
rt_int v4107;
};
struct yf1451 { void *up;
void * v4113;
};
struct yf1457 { void *up;
rt_int p1456;
rt_int v4125;
};
struct yf1462 { void *up;
rt_int v4133;
void * v4135;
};
struct yf1467 { void *up;
void * v4144;
void * v4146;
};
struct yf1472 { void *up;
void * v4150;
void * v4152;
void * v4154;
};
struct yf1477 { void *up;
void * v4159;
void * v4161;
void * v4163;
rt_int v4165;
};
struct yf1482 { void *up;
void * v4172;
void * v4174;
void * v4176;
void * v4178;
void * v4180;
void * v4182;
rt_int v4184;
rt_int v4186;
};
struct yf1487 { void *up;
void * v4203;
};
struct yf1492 { void *up;
rt_int v4208;
};
struct yf1498 { void *up;
rt_int p1497;
void * v4217;
void * v4219;
void * v4221;
rt_int v4223;
};
struct yf1503 { void *up;
void * v4231;
void * v4233;
void * v4235;
void * v4237;
void * v4239;
void * v4241;
rt_int v4243;
rt_int v4245;
};
struct yf1508 { void *up;
};
struct yf1514 { void *up;
rt_int p1513;
};
struct yf1520 { void *up;
rt_int p1519;
};
struct yf1526 { void *up;
rt_int p1525;
};
struct yf1532 { void *up;
rt_int p1531;
};
struct yf1538 { void *up;
rt_int p1537;
};
struct yf1547 { void *up;
rt_int p1543;
void * p1544;
void * p1545;
rt_int p1546;
void * v4299;
};
struct yf1554 { void *up;
rt_int p1552;
rt_int p1553;
rt_int v4305;
};
struct yf1559 { void *up;
void * v4309;
rt_int v4311;
rt_int v4313;
};
struct yf1564 { void *up;
void * v4317;
void * v4319;
rt_int v4321;
rt_int v4323;
};
struct yf1569 { void *up;
void * v4329;
rt_int v4331;
rt_int v4333;
};
struct yf1575 { void *up;
rt_int p1574;
rt_int v4339;
};
struct yf1580 { void *up;
void * v4344;
rt_int v4346;
rt_int v4348;
};
struct yf1585 { void *up;
void * v4352;
rt_int v4354;
rt_int v4356;
};
struct yf1590 { void *up;
void * v4377;
void * v4379;
void * v4381;
rt_int v4383;
};
struct yf1595 { void *up;
};
struct yf1600 { void *up;
void * v4390;
void * v4392;
};
struct yf1651 { void *up;
rt_int p1649;
rt_int p1650;
void * v4399;
};
struct yf1657 { void *up;
rt_int p1656;
void * v4414;
};
struct yf1662 { void *up;
void * v4420;
void * v4422;
void * v4424;
rt_int v4426;
};
struct yf1668 { void *up;
void * p1667;
};
struct yf1674 { void *up;
rt_int p1673;
void * v4438;
};
struct yf1680 { void *up;
rt_int p1679;
void * v4446;
};
struct yf1687 { void *up;
rt_int p1685;
rt_int p1686;
void * v4455;
void * v4457;
};
struct yf1693 { void *up;
void * p1692;
void * v4464;
};
struct yf1700 { void *up;
rt_int p1698;
void * p1699;
void * v4473;
};
struct yf1707 { void *up;
void * p1705;
rt_int p1706;
void * v4482;
rt_int v4484;
};
struct yf1714 { void *up;
rt_int p1712;
rt_int p1713;
rt_int v4492;
};
struct yf1720 { void *up;
rt_int p1719;
rt_int v4507;
};
struct yf1727 { void *up;
rt_int p1725;
rt_int p1726;
rt_int v4522;
};
struct yf1733 { void *up;
void * p1732;
rt_int v4531;
};
struct yf1739 { void *up;
void * p1738;
void * v4539;
};
struct yf1770 { void *up;
rt_int p1768;
rt_int p1769;
void * v4545;
};
struct yf1776 { void *up;
void * p1775;
void * v4573;
};
struct yf1782 { void *up;
void * p1781;
};
struct yf1788 { void *up;
void * p1787;
};
struct yf1794 { void *up;
void * p1793;
};
struct yf1800 { void *up;
void * p1799;
};
struct yf1806 { void *up;
void * p1805;
};
struct yf1813 { void *up;
void * p1811;
rt_int p1812;
void * v4604;
};
struct yf1819 { void *up;
void * p1818;
};
struct yf1825 { void *up;
void * p1824;
rt_int v4616;
};
struct yf1831 { void *up;
void * p1830;
rt_int v4623;
};
struct yf1837 { void *up;
void * p1836;
rt_int v4650;
};
struct yf1843 { void *up;
void * p1842;
};
struct yf1850 { void *up;
void * p1848;
void * p1849;
};
struct yf1858 { void *up;
rt_int p1855;
void * p1856;
void * p1857;
rt_int v4699;
};
struct yf1866 { void *up;
rt_int p1863;
void * p1864;
void * p1865;
};
struct yf1873 { void *up;
void * p1871;
rt_int p1872;
};
struct yf1879 { void *up;
void * p1878;
rt_int v4714;
void * v4716;
void * v4718;
};
struct yf1885 { void *up;
void * p1884;
};
struct yf1892 { void *up;
void * p1890;
void * p1891;
};
struct yf1898 { void *up;
void * p1897;
};
struct yf1906 { void *up;
void * p1903;
yarr p1905;
rt_int v4764;
rt_int v4766;
};
struct yf1912 { void *up;
void * p1911;
};
struct yf1918 { void *up;
void * p1917;
};
struct yf1926 { void *up;
void * p1923;
void * p1924;
void * p1925;
void * v4792;
};
struct yf1932 { void *up;
void * p1931;
};
struct yf1939 { void *up;
rt_int p1937;
rt_int p1938;
rt_int v4804;
rt_int v4806;
rt_int v4808;
};
struct yf1947 { void *up;
rt_int p1944;
rt_int p1945;
rt_int p1946;
rt_int v4824;
rt_int v4826;
};
struct yf1955 { void *up;
rt_int p1952;
rt_int p1953;
rt_int p1954;
rt_int v4841;
rt_int lo4846;
rt_int hi4847;
rt_int c_4849;
};
struct yf1965 { void *up;
void * p1960;
void * p1961;
rt_int p1962;
rt_int * p1962_o;
rt_int p1963;
rt_int * p1963_o;
rt_int p1964;
rt_int * p1964_o;
rt_int v4860;
rt_int v4862;
rt_int v4864;
rt_int v4866;
rt_int v4868;
rt_int v4870;
};
struct yf1972 { void *up;
rt_int p1970;
rt_int p1971;
};
struct yf1980 { void *up;
void * p1977;
rt_int p1978;
rt_int p1979;
rt_int v4899;
};
struct yf1987 { void *up;
void * p1985;
void * p1986;
rt_int v4909;
rt_int v4911;
rt_int v4913;
rt_int v4915;
void * v4917;
void * v4919;
rt_int v4921;
rt_int v4923;
rt_int v4925;
rt_int v4927;
rt_int v4929;
};
struct yf1993 { void *up;
void * p1992;
void * v4961;
void * v4963;
rt_int v4965;
};
struct yf2001 { void *up;
void * p1998;
rt_int p1999;
rt_int p2000;
};
struct yf2007 { void *up;
rt_int p2006;
rt_int v4980;
};
struct yf2015 { void *up;
void * p2012;
rt_int p2013;
rt_int p2014;
void * v4990;
void * v4992;
};
struct yf2022 { void *up;
void * p2020;
void * p2021;
void * v5000;
void * v5002;
void * v5004;
void * v5006;
void * v5008;
void * v5010;
};
struct yf2030 { void *up;
void * p2027;
rt_int p2028;
rt_int p2029;
void * v5039;
void * v5041;
void * v5043;
void * v5045;
void * v5047;
rt_int v5049;
void * v5051;
rt_int v5053;
rt_int v5055;
};
struct yf2037 { void *up;
rt_int p2035;
void * p2036;
void * v5102;
void * v5104;
};
struct yf2042 { void *up;
void * v5108;
};
struct yf2048 { void *up;
void * p2047;
void * v5113;
rt_int v5115;
rt_int v5117;
};
struct yf2061 { void *up;
void * p2053;
void * * p2054;
rt_int p2055;
void * p2056;
rt_int p2057;
rt_int p2058;
void * p2059;
rt_int p2060;
void * v5142;
};
struct yf2072 { void *up;
void * p2066;
void * * p2067;
void * p2068;
rt_int p2069;
void * p2070;
rt_int p2071;
void * v5154;
void * v5156;
void * v5158;
};
struct yf2080 { void *up;
void * p2077;
void * p2078;
rt_int p2079;
void * v5165;
void * v5167;
void * v5169;
void * v5171;
rt_int v5173;
void * v5176;
rt_int v5178;
rt_int v5180;
};
struct yf2087 { void *up;
void * p2085;
rt_int p2086;
void * v5227;
};
struct yf2207 { void *up;
void * p2205;
rt_int p2206;
void * v5234;
rt_int v5236;
rt_int v5238;
rt_int v5240;
rt_int v5242;
rt_int lo5251;
rt_int hi5252;
rt_int c_5254;
};
struct yf2214 { void *up;
void * p2212;
void * p2213;
void * v5293;
void * v5295;
void * v5297;
rt_int v5299;
rt_int v5302;
};
struct yf2222 { void *up;
void * p2219;
rt_int p2220;
rt_int p2221;
rt_int v5327;
rt_int v5329;
};
struct yf2231 { void *up;
void * p2227;
rt_int p2228;
rt_int p2229;
rt_int * p2229_o;
rt_int p2230;
rt_int v5340;
rt_int v5342;
rt_int v5344;
ydesc yd_5353;
yarr v5355;
unsigned char v5357;
rt_int v5359;
rt_int lo5388;
rt_int hi5389;
rt_int c_5391;
};
struct yf2239 { void *up;
void * p2236;
rt_int p2237;
rt_int * p2237_o;
rt_int p2238;
rt_int * p2238_o;
void * v5426;
rt_int v5428;
rt_int v5430;
rt_int v5432;
rt_int v5434;
rt_int v5436;
void * v5438;
};
struct yf2247 { void *up;
void * p2244;
rt_int p2245;
rt_int * p2245_o;
rt_int p2246;
rt_int * p2246_o;
void * v5468;
rt_int v5470;
rt_int v5472;
rt_int v5474;
rt_int v5476;
rt_int v5478;
void * v5480;
void * v5482;
rt_int lo5499;
rt_int hi5500;
rt_int c_5502;
};
struct yf2254 { void *up;
void * p2252;
void * p2253;
};
struct yf2262 { void *up;
rt_int p2259;
void * p2260;
void * p2261;
rt_int v5530;
rt_int v5532;
void * v5534;
void * v5536;
};
struct yf2270 { void *up;
rt_int p2267;
void * p2268;
void * p2269;
rt_int v5565;
rt_int v5567;
rt_int v5569;
rt_int v5571;
rt_int v5573;
rt_int v5575;
};
struct yf2278 { void *up;
rt_int p2275;
void * p2276;
void * p2277;
rt_int v5622;
rt_int v5624;
rt_int v5626;
};
struct yf2289 { void *up;
rt_int * p2283;
void * p2284;
rt_int * p2285;
void * p2286;
void * p2287;
rt_int p2288;
rt_int v5641;
rt_int v5643;
};
struct yf2297 { void *up;
void * p2294;
rt_int p2295;
rt_int * p2295_o;
void * p2296;
void * * p2296_o;
rt_int v5650;
rt_int v5652;
};
struct yf2306 { void *up;
void * p2302;
rt_int p2303;
rt_int * p2303_o;
rt_int p2304;
rt_int * p2304_o;
rt_int p2305;
rt_int * p2305_o;
rt_int v5666;
rt_int v5668;
rt_int v5670;
rt_int v5672;
rt_int v5674;
rt_int v5676;
};
struct yf2312 { void *up;
rt_int p2311;
};
struct yf2320 { void *up;
rt_int p2317;
void * p2318;
void * p2319;
rt_int v5697;
};
struct yf2330 { void *up;
rt_int p2325;
void * p2326;
rt_int p2327;
void * p2328;
rt_int p2329;
rt_int v5736;
};
struct yf2340 { void *up;
rt_int p2335;
void * p2336;
rt_int p2337;
void * p2338;
rt_int p2339;
};
struct yf2346 { void *up;
void * p2345;
void * v5758;
void * v5760;
};
struct yf2352 { void *up;
void * p2351;
void * v5779;
void * v5781;
};
struct yf2360 { void *up;
void * p2357;
rt_int p2358;
rt_int * p2358_o;
void * p2359;
void * * p2359_o;
};
struct yf2366 { void *up;
rt_int p2365;
};
struct yf2373 { void *up;
void * p2371;
rt_int p2372;
void * v5799;
};
struct yf2379 { void *up;
void * p2378;
void * v5804;
};
struct yf2388 { void *up;
void * p2384;
void * p2385;
rt_int p2386;
rt_int * p2386_o;
void * p2387;
void * * p2387_o;
rt_int v5813;
void * v5815;
rt_int v5817;
rt_int v5819;
void * v5821;
void * v5823;
void * v5825;
rt_int v5827;
rt_int v5829;
};
struct yf2396 { void *up;
void * p2393;
void * p2394;
rt_int p2395;
void * v5872;
rt_int v5874;
rt_int v5876;
};
struct yf2405 { void *up;
void * p2401;
void * p2402;
rt_int p2403;
rt_int * p2403_o;
void * p2404;
void * * p2404_o;
void * v5888;
};
struct yf2413 { void *up;
void * p2410;
rt_int p2411;
rt_int * p2411_o;
void * p2412;
void * * p2412_o;
rt_int v5897;
rt_int v5899;
rt_int v5901;
void * v5903;
void * v5905;
void * v5907;
void * v5909;
rt_int v5911;
rt_int v5913;
};
struct yf2423 { void *up;
void * p2418;
rt_int p2419;
void * p2420;
rt_int p2421;
rt_int * p2421_o;
void * p2422;
void * * p2422_o;
};
struct yf2429 { void *up;
void * p2428;
void * v5951;
};
struct yf2438 { void *up;
yarr p2435;
rt_int p2436;
rt_int p2437;
};
struct yf2447 { void *up;
rt_int p2443;
yarr p2445;
rt_int p2446;
};
struct yf2456 { void *up;
rt_int p2452;
void * p2453;
rt_int p2454;
void * p2455;
rt_int v5979;
rt_int v5981;
void * v5983;
};
struct yf2462 { void *up;
void * p2461;
};
struct yf2469 { void *up;
rt_int p2467;
void * p2468;
};
struct yf2478 { void *up;
void * p2474;
void * p2475;
rt_int p2476;
rt_int * p2476_o;
void * p2477;
void * * p2477_o;
rt_int v6021;
rt_int v6023;
rt_int v6025;
rt_int v6027;
void * v6029;
void * v6031;
void * v6033;
rt_int v6035;
};
struct yf2521 { void *up;
void * p2519;
void * p2520;
};
struct yf2529 { void *up;
void * p2526;
rt_int p2527;
rt_int p2528;
void * v6095;
void * v6097;
rt_int v6099;
rt_int v6101;
};
struct yf2535 { void *up;
void * p2534;
void * v6113;
};
struct yf2544 { void *up;
void * p2540;
void * p2541;
rt_int p2542;
rt_int * p2542_o;
rt_int p2543;
rt_int * p2543_o;
void * v6125;
void * v6127;
void * v6129;
};
struct yf2552 { void *up;
void * p2549;
void * p2550;
rt_int p2551;
void * v6144;
};
struct yf2559 { void *up;
void * p2557;
void * p2558;
};
struct yf2568 { void *up;
void * p2564;
rt_int p2565;
rt_int p2566;
rt_int p2567;
void * v6161;
rt_int v6163;
rt_int v6167;
rt_int v6170;
rt_int v6173;
rt_int v6176;
rt_int v6179;
rt_int v6182;
};
struct yf2574 { void *up;
rt_int p2573;
};
struct yf2585 { void *up;
void * p2579;
rt_int p2580;
void * p2581;
void * p2582;
rt_int p2583;
rt_int * p2583_o;
void * p2584;
void * * p2584_o;
void * v6240;
void * v6242;
rt_int v6244;
rt_int v6246;
};
struct yf2592 { void *up;
void * p2590;
rt_int p2591;
void * v6260;
};
struct yf2602 { void *up;
rt_int p2597;
void * p2598;
rt_int p2599;
void * p2600;
rt_int p2601;
void * v6268;
void * v6270;
void * v6272;
void * v6274;
rt_int v6276;
};
struct yf2612 { void *up;
rt_int p2607;
void * p2608;
rt_int p2609;
void * p2610;
rt_int p2611;
rt_int v6318;
};
struct yf2622 { void *up;
void * p2617;
void * p2618;
rt_int p2619;
rt_int p2620;
rt_int * p2620_o;
void * p2621;
void * * p2621_o;
void * v6327;
void * v6329;
rt_int v6331;
rt_int v6333;
};
struct yf2631 { void *up;
void * p2627;
void * p2628;
rt_int p2629;
rt_int * p2629_o;
void * p2630;
void * * p2630_o;
void * v6345;
void * v6347;
rt_int v6349;
rt_int v6351;
rt_int v6353;
void * v6355;
rt_int v6357;
rt_int v6359;
rt_int v6361;
rt_int v6363;
rt_int v6365;
rt_int v6368;
void * v6370;
rt_int v6372;
};
struct yf2639 { void *up;
void * p2636;
rt_int p2637;
rt_int p2638;
void * v6434;
void * v6436;
rt_int v6438;
rt_int v6440;
};
struct yf2765 { void *up;
yarr p2763;
rt_int p2764;
rt_int v6449;
};
struct yf2775 { void *up;
yarr p2771;
rt_int p2772;
yarr p2774;
rt_int v6455;
};
struct yf2781 { void *up;
rt_int p2780;
};
struct yf2786 { void *up;
};
struct yf2792 { void *up;
rt_int p2791;
};
struct yf2798 { void *up;
void * p2797;
rt_int v6477;
rt_int v6479;
rt_int v6481;
void * v6483;
void * v6485;
rt_int v6487;
void * v6489;
rt_int v6491;
};
struct yf2805 { void *up;
void * p2803;
void * p2804;
void * v6554;
void * v6556;
rt_int v6558;
rt_int v6560;
rt_int v6562;
rt_int v6564;
};
struct yf2813 { void *up;
void * p2810;
void * p2811;
void * p2812;
rt_int v6586;
void * v6588;
void * v6590;
void * v6592;
rt_int v6594;
rt_int v6596;
rt_int v6598;
rt_int v6600;
};
struct yf2820 { void *up;
void * p2818;
void * p2819;
void * v6613;
void * v6615;
rt_int v6617;
rt_int v6620;
rt_int lo6625;
rt_int hi6626;
rt_int c_6628;
};
struct yf2826 { void *up;
void * p2825;
void * v6638;
};
struct yf2832 { void *up;
void * p2831;
rt_int v6642;
void * v6644;
};
struct yf2839 { void *up;
void * p2837;
void * p2838;
rt_int v6650;
rt_int v6652;
void * v6654;
void * v6656;
rt_int v6658;
};
struct yf2844 { void *up;
void * v6664;
rt_int v6666;
};
struct yf2850 { void *up;
void * p2849;
rt_int v6673;
rt_int v6675;
rt_int v6677;
rt_int v6679;
rt_int v6681;
rt_int v6683;
rt_int v6685;
void * v6687;
void * v6689;
void * v6691;
void * v6693;
rt_int v6695;
rt_int v6697;
rt_int v6699;
rt_int v6701;
void * v6703;
};
struct yf2856 { void *up;
void * p2855;
void * v6774;
rt_int v6776;
rt_int v6778;
rt_int v6780;
void * v6782;
};
struct yf2864 { void *up;
rt_int p2861;
rt_int p2862;
rt_int p2863;
};
struct yf2870 { void *up;
void * p2869;
rt_int v6814;
rt_int v6816;
rt_int v6818;
void * v6820;
void * v6822;
};
struct yf2876 { void *up;
void * p2875;
};
struct yf2882 { void *up;
void * p2881;
void * v6843;
};
struct yf2888 { void *up;
void * p2887;
void * v6858;
};
struct yf2894 { void *up;
void * p2893;
void * v6867;
void * v6869;
void * v6871;
};
struct yf2900 { void *up;
rt_int p2899;
rt_int v6876;
rt_int v6878;
rt_int lo6883;
rt_int hi6884;
rt_int c_6886;
};
struct yf2906 { void *up;
void * p2905;
void * v6896;
rt_int v6898;
rt_int v6900;
};
struct yf2912 { void *up;
void * p2911;
rt_int v6917;
};
struct yf2919 { void *up;
void * p2917;
rt_int p2918;
void * v6925;
void * v6927;
void * v6929;
void * v6931;
void * v6933;
void * v6935;
void * v6937;
rt_int v6939;
rt_int v6941;
};
struct yf2926 { void *up;
void * p2924;
void * p2925;
void * v6984;
void * v6986;
void * v6988;
rt_int v6990;
};
struct yf2932 { void *up;
void * p2931;
void * v6998;
yR134 v7000;
yR134 v7002;
rt_int v7004;
rt_int v7006;
rt_int v7008;
rt_int v7010;
rt_int v7012;
rt_int v7014;
rt_int v7016;
void * v7018;
rt_int v7020;
void * v7022;
void * v7024;
rt_int v7026;
rt_int v7028;
yR134 v7030;
};
struct yf2940 { void *up;
void * p2937;
void * p2938;
rt_int p2939;
};
struct yf2946 { void *up;
void * p2945;
rt_int v7092;
void * v7094;
void * v7096;
void * v7098;
void * v7100;
rt_int v7102;
rt_int v7104;
rt_int v7106;
rt_int v7108;
};
struct yf2953 { void *up;
void * p2951;
void * p2952;
void * v7127;
};
struct yf2960 { void *up;
void * p2958;
void * p2959;
};
struct yf2966 { void *up;
void * p2965;
void * v7134;
void * v7136;
void * v7138;
void * v7140;
void * v7142;
};
struct yf2986 { void *up;
rt_int p2984;
void * p2985;
void * v7148;
};
struct yf2994 { void *up;
void * * p2991;
void * p2992;
rt_int p2993;
void * v7155;
void * v7157;
void * v7159;
};
struct yf3004 { void *up;
void * p3002;
rt_int p3003;
void * v7169;
};
struct yf3011 { void *up;
rt_int p3009;
rt_int p3010;
void * v7184;
};
struct yf3019 { void *up;
void * p3016;
void * * p3017;
rt_int p3018;
void * v7194;
void * v7196;
void * v7198;
rt_int v7200;
void * v7202;
rt_int v7204;
};
struct yf3026 { void *up;
void * p3024;
rt_int p3025;
void * v7229;
void * v7231;
void * v7233;
};
struct yf3032 { void *up;
void * p3031;
void * v7238;
void * v7240;
void * v7242;
void * v7244;
void * v7246;
void * v7248;
void * v7250;
void * v7252;
void * v7254;
void * v7256;
rt_int v7258;
rt_int v7260;
rt_int v7262;
};
struct yf3038 { void *up;
void * p3037;
void * v7297;
};
struct yf3044 { void *up;
void * p3043;
void * v7301;
void * v7303;
void * v7305;
void * v7307;
rt_int v7309;
rt_int v7311;
rt_int v7313;
rt_int v7315;
void * v7317;
rt_int lo7325;
rt_int hi7326;
rt_int c_7328;
};
struct yf3050 { void *up;
void * p3049;
void * v7340;
void * v7342;
};
struct yf3055 { void *up;
void * v7348;
};
struct yf3062 { void *up;
void * p3060;
void * p3061;
rt_int v7359;
rt_int v7361;
rt_int v7363;
void * v7365;
rt_int v7367;
rt_int v7369;
rt_int v7371;
rt_int v7373;
rt_int v7375;
rt_int v7377;
void * v7379;
void * v7381;
};
struct yf3068 { void *up;
void * p3067;
};
struct yf3074 { void *up;
void * p3073;
rt_int v7442;
};
struct yf3079 { void *up;
};
struct yf3085 { void *up;
void * p3084;
};
struct yf3092 { void *up;
void * p3090;
rt_int p3091;
};
struct yf3099 { void *up;
void * p3097;
rt_int p3098;
};
struct yf3106 { void *up;
void * p3104;
void * p3105;
rt_int v7485;
rt_int v7487;
rt_int v7489;
};
struct yf3113 { void *up;
void * p3111;
rt_int p3112;
void * v7498;
rt_int v7500;
};
struct yf3120 { void *up;
void * p3118;
rt_int p3119;
};
struct yf3128 { void *up;
yarr p3126;
rt_int p3127;
};
struct yf3134 { void *up;
rt_int p3133;
};
struct yf3143 { void *up;
void * p3139;
rt_int p3140;
rt_int p3141;
rt_int * p3141_o;
void * p3142;
void * * p3142_o;
rt_int v7527;
};
struct yf3151 { void *up;
void * p3148;
rt_int p3149;
rt_int * p3149_o;
void * p3150;
void * * p3150_o;
};
struct yf3157 { void *up;
void * p3156;
rt_int v7543;
void * v7545;
};
struct yf3163 { void *up;
void * p3162;
void * v7551;
rt_int v7554;
rt_int v7556;
rt_int v7558;
rt_int v7560;
rt_int v7562;
rt_int v7564;
unsigned char v7566;
void * v7568;
ydesc yd_7577;
yarr v7579;
};
struct yf3170 { void *up;
void * p3168;
void * p3169;
rt_int v7615;
rt_int v7617;
rt_int v7619;
void * v7621;
};
struct yf3180 { void *up;
rt_int p3175;
void * p3176;
rt_int p3177;
rt_int p3178;
rt_int * p3178_o;
void * p3179;
void * * p3179_o;
rt_int v7633;
rt_int v7635;
rt_int v7637;
rt_int v7639;
rt_int v7641;
void * v7643;
void * v7645;
void * v7647;
void * v7649;
rt_int v7651;
rt_int v7653;
rt_int v7655;
rt_int v7657;
void * v7659;
rt_int v7661;
rt_int lo7675;
rt_int hi7676;
rt_int c_7678;
};
struct yf3192 { void *up;
yarr p3190;
void * p3191;
void * v7868;
};
struct yf3200 { void *up;
yarr p3198;
rt_int p3199;
void * v7874;
};
struct yf3210 { void *up;
yarr p3206;
yarr p3207;
yarr p3208;
rt_int p3209;
void * v7882;
void * v7884;
void * v7886;
};
struct yf3218 { void *up;
rt_int p3215;
yarr p3217;
void * v7895;
};
struct yf3223 { void *up;
};
struct yf3228 { void *up;
void * v7975;
};
struct yf3233 { void *up;
};
static ydesc yd_100;
static ydesc yd_105;
static ydesc yd_110;
static ydesc yd_115;
static ydesc yd_120;
static ydesc yd_125;
static ydesc yd_130;
static ydesc yd_135;
static ydesc yd_145;
static ydesc yd_155;
static ydesc yd_165;
static ydesc yd_175;
static ydesc yd_185;
static rt_int v188;
static rt_int v191;
static rt_int v194;
static rt_int v197;
static rt_int v200;
static rt_int v203;
static rt_int v206;
static rt_int v209;
static rt_int v212;
static rt_int v215;
static rt_int v218;
static rt_int v221;
static rt_int v224;
static rt_int v227;
static rt_int v230;
static rt_int v233;
static rt_int v236;
static rt_int v239;
static rt_int v242;
static rt_int v245;
static rt_int v248;
static rt_int v251;
static rt_int v254;
static rt_int v257;
static rt_int v260;
static rt_int v263;
static rt_int v266;
static rt_int v269;
static rt_int v272;
static rt_int v275;
static rt_int v278;
static rt_int v281;
static rt_int v284;
static rt_int v287;
static rt_int v290;
static rt_int v293;
static rt_int v296;
static rt_int v299;
static rt_int v302;
static rt_int v305;
static rt_int v308;
static rt_int v311;
static rt_int v314;
static rt_int v317;
static rt_int v320;
static rt_int v323;
static rt_int v326;
static rt_int v329;
static rt_int v332;
static rt_int v335;
static rt_int v338;
static rt_int v341;
static rt_int v344;
static rt_int v347;
static rt_int v350;
static rt_int v353;
static rt_int v356;
static rt_int v359;
static rt_int v362;
static rt_int v365;
static rt_int v368;
static rt_int v371;
static rt_int v374;
static rt_int v377;
static rt_int v380;
static rt_int v383;
static rt_int v386;
static rt_int v389;
static rt_int v392;
static rt_int v395;
static rt_int v398;
static rt_int v401;
static rt_int v404;
static rt_int v407;
static rt_int v410;
static rt_int v413;
static rt_int v416;
static rt_int v419;
static rt_int v422;
static rt_int v425;
static rt_int v428;
static rt_int v431;
static rt_int v434;
static rt_int v437;
static rt_int v440;
static rt_int v443;
static rt_int v446;
static rt_int v449;
static rt_int v452;
static rt_int v455;
static rt_int v458;
static rt_int v461;
static rt_int v464;
static rt_int v467;
static rt_int v470;
static rt_int v473;
static rt_int v476;
static rt_int v479;
static rt_int v482;
static rt_int v485;
static rt_int v488;
static rt_int v491;
static rt_int v494;
static rt_int v497;
static rt_int v500;
static rt_int v503;
static rt_int v506;
static rt_int v509;
static rt_int v512;
static rt_int v515;
static rt_int v518;
static rt_int v521;
static rt_int v524;
static rt_int v527;
static rt_int v530;
static rt_int v533;
static rt_int v536;
static rt_int v539;
static rt_int v542;
static rt_int v545;
static rt_int v548;
static rt_int v551;
static rt_int v554;
static rt_int v557;
static rt_int v560;
static rt_int v563;
static rt_int v566;
static rt_int v569;
static rt_int v572;
static rt_int v575;
static rt_int v578;
static rt_int v581;
static rt_int v584;
static rt_int v587;
static rt_int v590;
static rt_int v593;
static rt_int v596;
static rt_int v599;
static rt_int v602;
static rt_int v605;
static rt_int v608;
static rt_int v611;
static rt_int v614;
static rt_int v617;
static rt_int v620;
static rt_int v623;
static rt_int v626;
static rt_int v629;
static rt_int v632;
static rt_int v635;
static rt_int v638;
static rt_int v641;
static rt_int v644;
static rt_int v647;
static rt_int v650;
static rt_int v653;
static rt_int v656;
static rt_int v659;
static rt_int v662;
static rt_int v665;
static rt_int v668;
static rt_int v671;
static rt_int v674;
static rt_int v677;
static rt_int v680;
static rt_int v683;
static rt_int v686;
static rt_int v689;
static rt_int v692;
static rt_int v695;
static rt_int v698;
static rt_int v701;
static rt_int v704;
static rt_int v707;
static rt_int v710;
static rt_int v713;
static rt_int v716;
static rt_int v719;
static rt_int v722;
static rt_int v725;
static rt_int v728;
static rt_int v731;
static rt_int v734;
static rt_int v737;
static rt_int v740;
static rt_int v743;
static rt_int v746;
static rt_int v749;
static rt_int v752;
static rt_int v755;
static rt_int v758;
static rt_int v761;
static rt_int v764;
static rt_int v767;
static rt_int v770;
static rt_int v773;
static rt_int v776;
static rt_int v779;
static rt_int v782;
static rt_int v785;
static rt_int v788;
static rt_int v791;
static rt_int v794;
static rt_int v797;
static rt_int v800;
static rt_int v803;
static rt_int v806;
static rt_int v809;
static rt_int v812;
static rt_int v815;
static rt_int v818;
static rt_int v821;
static rt_int v824;
static rt_int v827;
static rt_int v830;
static rt_int v833;
static rt_int v836;
static rt_int v839;
static rt_int v842;
static rt_int v845;
static rt_int v848;
static rt_int v851;
static rt_int v854;
static rt_int v857;
static rt_int v860;
static rt_int v863;
static rt_int v866;
static rt_int v869;
static rt_int v872;
static rt_int v875;
static rt_int v878;
static rt_int v881;
static rt_int v884;
static rt_int v887;
static rt_int v890;
static yfile * v893;
static yfile * v895;
static yarr v897;
static rt_int v899;
static yarr v902;
static yarr v904;
static rt_int v906;
static yarr v909;
static rt_int v911;
static ydesc yd_921;
static yarr v923;
static rt_int v925;
static ydesc yd_935;
static yarr v937;
static rt_int v939;
static rt_int v942;
static ydesc yd_947;
static yarr v949;
static ydesc yd_958;
static yarr v960;
static yR134 v962;
static yR134 v964;
static yR134 v966;
static yR134 v968;
static yR134 v970;
static yR134 v972;
static yR134 v974;
static yR134 v976;
static yR134 v978;
static rt_int v980;
static yarr v1173;
static yarr v1175;
static yarr v1177;
static rt_int v1179;
static rt_int v1182;
static rt_int v1185;
static rt_int v1188;
static rt_int v1191;
static rt_int v1194;
static ydesc yd_1204;
static yarr v1206;
static yarr v1208;
static yarr v1210;
static rt_int v1212;
static rt_int v1279;
static void * v1282;
static rt_int v1284;
static rt_int v1287;
static yarr v1604;
static ydesc yd_1613;
static yarr v1615;
static rt_int v1617;
static rt_int v1620;
static rt_int v1623;
static ydesc yd_1633;
static yarr v1635;
static ydesc yd_1644;
static yarr v1646;
static void * v1743;
static void * v1745;
static void * v1747;
static void * v1749;
static void * v1751;
static void * v1753;
static void * v1755;
static void * v1757;
static void * v1759;
static void * v1761;
static void * v1763;
static void * v1765;
static rt_int v2091;
static rt_int v2094;
static rt_int v2097;
static rt_int v2100;
static rt_int v2103;
static rt_int v2106;
static rt_int v2109;
static rt_int v2112;
static rt_int v2115;
static rt_int v2118;
static rt_int v2121;
static rt_int v2124;
static rt_int v2127;
static rt_int v2130;
static rt_int v2133;
static rt_int v2136;
static rt_int v2139;
static rt_int v2142;
static rt_int v2145;
static rt_int v2148;
static rt_int v2151;
static rt_int v2154;
static rt_int v2157;
static rt_int v2160;
static rt_int v2163;
static rt_int v2166;
static rt_int v2169;
static rt_int v2172;
static rt_int v2175;
static rt_int v2178;
static rt_int v2181;
static rt_int v2184;
static rt_int v2187;
static rt_int v2190;
static rt_int v2193;
static rt_int v2196;
static rt_int v2199;
static void * v2202;
static ydesc yd_2489;
static yarr v2491;
static ydesc yd_2500;
static yarr v2502;
static ydesc yd_2511;
static yarr v2513;
static rt_int v2515;
static ydesc yd_2650;
static yarr v2652;
static rt_int v2654;
static rt_int v2657;
static ydesc yd_2667;
static yarr v2669;
static ydesc yd_2678;
static yarr v2680;
static rt_int v2682;
static ydesc yd_2692;
static yarr v2694;
static rt_int v2696;
static ydesc yd_2706;
static yarr v2708;
static yarr v2710;
static ydesc yd_2719;
static yarr v2721;
static rt_int v2723;
static rt_int v2726;
static void * v2729;
static ydesc yd_2738;
static yarr v2740;
static yarr v2742;
static rt_int v2744;
static ydesc yd_2754;
static yarr v2756;
static rt_int v2758;
static void * v2970;
static ydesc yd_2979;
static yarr v2981;
static rt_int v2998;
static void * v3184;
static void * v3186;
static void yr983_InitChars(void);
static rt_int yr988_IsLetter(unsigned char a_p989);
static rt_int yr994_IsDigit(unsigned char a_p995);
static void yr1000_PoolAdd(unsigned char a_p1001);
static void yr1006_SB(void);
static void yr1011_SC(unsigned char a_p1012);
static void yr1017_SA(yarr a_p1019);
static void yr1024_ST(rt_int a_p1025);
static void yr1030_SI(rt_int a_p1031);
static rt_int yr1036_SE(void);
static rt_int yr1041_T(yarr a_p1043);
static rt_int yr1048_Intern(rt_int a_p1049, rt_int a_p1050);
static rt_int yr1055_Name(rt_int a_p1056);
static rt_int yr1061_N(yarr a_p1063);
static rt_int yr1068_TEq(rt_int a_p1069, rt_int a_p1070);
static rt_int yr1075_TStarts(rt_int a_p1076, yarr a_p1078);
static unsigned char yr1083_TChar(rt_int a_p1084, rt_int a_p1085);
static void yr1090_Put(yR134 * a_p1091, rt_int a_p1092);
static void yr1097_PutS(yR134 * a_p1098, yarr a_p1100);
static void yr1105_Append(yR134 * a_p1106, yR134 * a_p1107);
static void yr1112_Emit(rt_int a_p1113);
static void yr1118_EmitS(yarr a_p1120);
static void yr1125_WriteTxt(rt_int a_p1126);
static void yr1131_WriteBuf(yR134 a_p1132);
static void yr1137_Fail(rt_int a_p1138, rt_int a_p1139);
static void yr1144_FailS(rt_int a_p1145, yarr a_p1147);
static void yr1152_FailN(rt_int a_p1153, rt_int a_p1154, yarr a_p1156);
static rt_int yr1161_NewSerial(void);
static rt_int yr1166_Fresh(yarr a_p1168);
static void yr1215_InitWords(void);
static void yr1220_ReadSource(void);
static void yr1225_AddTok(rt_int a_p1226, rt_int a_p1227);
static unsigned char yr1232_At(rt_int a_p1233);
static rt_int yr1238_EndsOperand(void);
static rt_int yr1243_DigitVal(unsigned char a_p1244);
static void yr1249_LexError(yarr a_p1251);
static void yr1256_LexDigits(rt_int a_p1257, rt_int a_p1258);
static void yr1263_LexNumber(rt_int a_p1264);
static void yr1269_LexString(void);
static void yr1274_Lex(void);
static void * yr1290_NewNode(rt_int a_p1291, rt_int a_p1292);
static void yr1297_Link(void * * a_p1298, void * * a_p1299, void * a_p1300);
static rt_int yr1305_Count(void * a_p1306);
static rt_int yr1311_TK(void);
static rt_int yr1316_TV(void);
static rt_int yr1321_TLn(void);
static rt_int yr1326_IsAt(rt_int a_p1327, rt_int a_p1328);
static rt_int yr1333_Is(rt_int a_p1334);
static rt_int yr1339_IsIdAt(rt_int a_p1340);
static void yr1345_Skip(void);
static rt_int yr1350_Accept(rt_int a_p1351);
static rt_int yr1356_TokText(void);
static void yr1361_Expect(rt_int a_p1362);
static rt_int yr1367_Ident(void);
static void yr1372_CloseName(rt_int a_p1373, rt_int a_p1374);
static rt_int yr1379_ExtendedId(void);
static rt_int yr1384_IsLabel(rt_int a_p1385);
static void * yr1390_ImportItem(void);
static void * yr1395_ParseModule(void);
static rt_int yr1400_IsDeclWord(void);
static void * yr1405_ParseBlock(void);
static void * yr1410_ParseHandler(void);
static void * yr1415_ParseNames(void);
static void * yr1420_SimpleEntry(rt_int a_p1421);
static rt_int yr1426_Continues(rt_int a_p1427);
static void yr1432_ParseDeclGroup(void * * a_p1433, void * * a_p1434);
static void * yr1439_ParseDecl(void);
static void yr1444_ParseFormals(void * a_p1445);
static void * yr1450_ParseFormalRep(void);
static rt_int yr1455_IsStructWord(rt_int a_p1456);
static void * yr1461_ParseRep(void);
static void * yr1466_ParseConcrete(void);
static void * yr1471_ParseIds(void);
static void * yr1476_ParseFieldGroups(void);
static void * yr1481_ParseConcrete1(void);
static void * yr1486_ParseQualifier(void);
static rt_int yr1491_IsStop(void);
static void * yr1496_ParseStatements(rt_int a_p1497);
static void * yr1502_ParseStatement(void);
static rt_int yr1507_OpAt(void);
static rt_int yr1512_IsRel(rt_int a_p1513);
static rt_int yr1518_IsAssocMul(rt_int a_p1519);
static rt_int yr1524_IsNonAssocMul(rt_int a_p1525);
static rt_int yr1530_IsAssocAdd(rt_int a_p1531);
static rt_int yr1536_IsNonAssocAdd(rt_int a_p1537);
static void * yr1542_Bin(rt_int a_p1543, void * a_p1544, void * a_p1545, rt_int a_p1546);
static void yr1551_NeedParens(rt_int a_p1552, rt_int a_p1553);
static void * yr1558_ParseExpr(void);
static void * yr1563_ParseSimple(void);
static void * yr1568_ParseTerm(void);
static rt_int yr1573_IsLiteralAt(rt_int a_p1574);
static void * yr1579_ParseLiteral(void);
static void * yr1584_ParseFactor(void);
static void * yr1589_ParseDesignator(void);
static void yr1594_EXIT_ARGS(void);
static void * yr1599_ParseProgram(void);
static void * yr1648_NewSym(rt_int a_p1649, rt_int a_p1650);
static void yr1655_OpenScope(rt_int a_p1656);
static void yr1661_CloseScope(void);
static rt_int yr1666_Visible(void * a_p1667);
static void * yr1672_Find(rt_int a_p1673);
static void * yr1678_FindHere(rt_int a_p1679);
static void * yr1684_Lookup(rt_int a_p1685, rt_int a_p1686);
static rt_int yr1691_Ambiguous(void * a_p1692);
static void * yr1697_FindLit(rt_int a_p1698, void * a_p1699);
static void yr1704_Define(void * a_p1705, rt_int a_p1706);
static rt_int yr1711_Path(rt_int a_p1712, rt_int a_p1713);
static rt_int yr1718_FramePtr(rt_int a_p1719);
static void yr1724_DeclStorage(rt_int a_p1725, rt_int a_p1726);
static rt_int yr1731_SymPath(void * a_p1732);
static void * yr1737_Real(void * a_p1738);
static void * yr1767_NewRep(rt_int a_p1768, rt_int a_p1769);
static void * yr1774_CopyRep(void * a_p1775);
static rt_int yr1780_IsDiscrete(void * a_p1781);
static rt_int yr1786_IsNumeric(void * a_p1787);
static rt_int yr1792_IsArrayLike(void * a_p1793);
static rt_int yr1798_IsString(void * a_p1799);
static rt_int yr1804_Deep(void * a_p1805);
static rt_int yr1810_Holds(void * a_p1811, rt_int a_p1812);
static rt_int yr1817_HoldsSignal(void * a_p1818);
static rt_int yr1823_NonAssignable(void * a_p1824);
static rt_int yr1829_CType(void * a_p1830);
static rt_int yr1835_DescOf(void * a_p1836);
static void yr1841_NewDesc(void * a_p1842);
static rt_int yr1847_SameType(void * a_p1848, void * a_p1849);
static void yr1854_TypeClash(rt_int a_p1855, void * a_p1856, void * a_p1857);
static void yr1862_CheckType(rt_int a_p1863, void * a_p1864, void * a_p1865);
static void yr1870_CheckRepresented(void * a_p1871, rt_int a_p1872);
static rt_int yr1877_SigText(void * a_p1878);
static rt_int yr1883_RepSig(void * a_p1884);
static rt_int yr1889_Identical(void * a_p1890, void * a_p1891);
static rt_int yr1896_IsLiteralNode(void * a_p1897);
static void yr1902_StoreBounds(void * a_p1903, yarr a_p1905);
static rt_int yr1910_LoText(void * a_p1911);
static rt_int yr1916_HiText(void * a_p1917);
static void * yr1922_AdoptLiteral(void * a_p1923, void * a_p1924, void * a_p1925);
static rt_int yr1930_HasQualifier(void * a_p1931);
static rt_int yr1936_Gcd(rt_int a_p1937, rt_int a_p1938);
static rt_int yr1943_MulChk(rt_int a_p1944, rt_int a_p1945, rt_int a_p1946);
static rt_int yr1951_PowChk(rt_int a_p1952, rt_int a_p1953, rt_int a_p1954);
static void yr1959_ScaleRatio(void * a_p1960, void * a_p1961, rt_int * a_p1962, rt_int * a_p1963, rt_int * a_p1964);
static rt_int yr1969_Factor(rt_int a_p1970, rt_int a_p1971);
static void yr1976_SetScale(void * a_p1977, rt_int a_p1978, rt_int a_p1979);
static void yr1984_Qualify(void * a_p1985, void * a_p1986);
static void yr1991_DefineLits(void * a_p1992);
static void yr1997_SetRange(void * a_p1998, rt_int a_p1999, rt_int a_p2000);
static rt_int yr2005_NewTid(rt_int a_p2006);
static void * yr2011_MakeRep(void * a_p2012, rt_int a_p2013, rt_int a_p2014);
static rt_int yr2019_Conforms(void * a_p2020, void * a_p2021);
static void * yr2026_MakeRep1(void * a_p2027, rt_int a_p2028, rt_int a_p2029);
static void yr2034_ResolvePending(rt_int a_p2035, void * a_p2036);
static void yr2041_CheckPending(void);
static void yr2046_BuildArrayDesc(void * a_p2047);
static void yr2052_AddField(void * a_p2053, void * * a_p2054, rt_int a_p2055, void * a_p2056, rt_int a_p2057, rt_int a_p2058, void * a_p2059, rt_int a_p2060);
static void yr2065_AddFields(void * a_p2066, void * * a_p2067, void * a_p2068, rt_int a_p2069, void * a_p2070, rt_int a_p2071);
static void yr2076_MakeRecord(void * a_p2077, void * a_p2078, rt_int a_p2079);
static void * yr2084_FindField(void * a_p2085, rt_int a_p2086);
static rt_int yr2204_CharOrd(void * a_p2205, rt_int a_p2206);
static void * yr2211_AlphabetFor(void * a_p2212, void * a_p2213);
static rt_int yr2218_CharValue(void * a_p2219, rt_int a_p2220, rt_int a_p2221);
static rt_int yr2226_StringCodes(void * a_p2227, rt_int a_p2228, rt_int * a_p2229, rt_int a_p2230);
static void yr2235_Manifest(void * a_p2236, rt_int * a_p2237, rt_int * a_p2238);
static void yr2243_ManifestStd(void * a_p2244, rt_int * a_p2245, rt_int * a_p2246);
static rt_int yr2251_NeedsConv(void * a_p2252, void * a_p2253);
static rt_int yr2258_ConvertRecord(rt_int a_p2259, void * a_p2260, void * a_p2261);
static rt_int yr2266_ConvertArray(rt_int a_p2267, void * a_p2268, void * a_p2269);
static rt_int yr2274_RescaleCode(rt_int a_p2275, void * a_p2276, void * a_p2277);
static void yr2282_CommonScale(rt_int * a_p2283, void * a_p2284, rt_int * a_p2285, void * a_p2286, void * a_p2287, rt_int a_p2288);
static void yr2293_FixLiteral(void * a_p2294, rt_int * a_p2295, void * * a_p2296);
static void yr2301_ManifestFix(void * a_p2302, rt_int * a_p2303, rt_int * a_p2304, rt_int * a_p2305);
static rt_int yr2310_FloatChk(rt_int a_p2311);
static rt_int yr2316_Convert(rt_int a_p2317, void * a_p2318, void * a_p2319);
static rt_int yr2324_StoreText(rt_int a_p2325, void * a_p2326, rt_int a_p2327, void * a_p2328, rt_int a_p2329);
static void yr2334_Store(rt_int a_p2335, void * a_p2336, rt_int a_p2337, void * a_p2338, rt_int a_p2339);
static rt_int yr2344_IsVariable(void * a_p2345);
static void yr2350_CheckPure(void * a_p2351);
static void yr2356_LValue(void * a_p2357, rt_int * a_p2358, void * * a_p2359);
static rt_int yr2364_Paren(rt_int a_p2365);
static void * yr2370_Lit(void * a_p2371, rt_int a_p2372);
static void * yr2377_Qualifier(void * a_p2378);
static void yr2383_Expr(void * a_p2384, void * a_p2385, rt_int * a_p2386, void * * a_p2387);
static rt_int yr2392_VariantTest(void * a_p2393, void * a_p2394, rt_int a_p2395);
static void yr2400_NameExpr(void * a_p2401, void * a_p2402, rt_int * a_p2403, void * * a_p2404);
static void yr2409_IndexExpr(void * a_p2410, rt_int * a_p2411, void * * a_p2412);
static void yr2417_NegExpr(void * a_p2418, rt_int a_p2419, void * a_p2420, rt_int * a_p2421, void * * a_p2422);
static void * yr2427_Unbounded(void * a_p2428);
static rt_int yr2433_Call2(yarr a_p2435, rt_int a_p2436, rt_int a_p2437);
static rt_int yr2442_Infix(rt_int a_p2443, yarr a_p2445, rt_int a_p2446);
static rt_int yr2451_EqCode(rt_int a_p2452, void * a_p2453, rt_int a_p2454, void * a_p2455);
static rt_int yr2460_IsOrdered(void * a_p2461);
static rt_int yr2466_FixToFloat(rt_int a_p2467, void * a_p2468);
static void yr2473_BinExpr(void * a_p2474, void * a_p2475, rt_int * a_p2476, void * * a_p2477);
static rt_int yr2518_Fits(void * a_p2519, void * a_p2520);
static void * yr2525_Choose(void * a_p2526, rt_int a_p2527, rt_int a_p2528);
static rt_int yr2533_HidesStandard(void * a_p2534);
static void yr2539_CompileArgs(void * a_p2540, void * a_p2541, rt_int * a_p2542, rt_int * a_p2543);
static void yr2548_CheckUnresolved(void * a_p2549, void * a_p2550, rt_int a_p2551);
static rt_int yr2556_SameAsFormal(void * a_p2557, void * a_p2558);
static rt_int yr2563_CallCode(void * a_p2564, rt_int a_p2565, rt_int a_p2566, rt_int a_p2567);
static rt_int yr2572_Num(rt_int a_p2573);
static rt_int yr2578_UserOp(void * a_p2579, rt_int a_p2580, void * a_p2581, void * a_p2582, rt_int * a_p2583, void * * a_p2584);
static void yr2589_NoteCall(void * a_p2590, rt_int a_p2591);
static rt_int yr2596_UserAssign(rt_int a_p2597, void * a_p2598, rt_int a_p2599, void * a_p2600, rt_int a_p2601);
static void yr2606_Assign(rt_int a_p2607, void * a_p2608, rt_int a_p2609, void * a_p2610, rt_int a_p2611);
static void yr2616_CallExpr(void * a_p2617, void * a_p2618, rt_int a_p2619, rt_int * a_p2620, void * * a_p2621);
static void yr2626_Denote(void * a_p2627, void * a_p2628, rt_int * a_p2629, void * * a_p2630);
static rt_int yr2635_VariantOf(void * a_p2636, rt_int a_p2637, rt_int a_p2638);
static void yr2761_Emit2(yarr a_p2763, rt_int a_p2764);
static void yr2769_Emit3(yarr a_p2771, rt_int a_p2772, yarr a_p2774);
static void yr2779_PopTo(rt_int a_p2780);
static void yr2785_LeaveBlock(void);
static rt_int yr2790_RaiseCode(rt_int a_p2791);
static void yr2796_BlockStatements(void * a_p2797);
static rt_int yr2802_SameDesig(void * a_p2803, void * a_p2804);
static void yr2809_CheckVariantSelected(void * a_p2810, void * a_p2811, void * a_p2812);
static void yr2817_CheckCaseLabels(void * a_p2818, void * a_p2819);
static void yr2824_Statements(void * a_p2825);
static rt_int yr2830_Cond(void * a_p2831);
static rt_int yr2836_Label(void * a_p2837, void * a_p2838);
static void yr2843_CopyOut(void);
static void yr2848_Statement(void * a_p2849);
static void yr2854_ForStatement(void * a_p2855);
static rt_int yr2860_Join(rt_int a_p2861, rt_int a_p2862, rt_int a_p2863);
static void yr2868_ReturnStatement(void * a_p2869);
static void yr2874_BeginStatement(void * a_p2875);
static void yr2880_PlaceLabel(void * a_p2881);
static void yr2886_GotoStatement(void * a_p2887);
static void yr2892_CheckLabels(void * a_p2893);
static rt_int yr2898_RoutineCName(rt_int a_p2899);
static void * yr2904_FormalRep(void * a_p2905);
static rt_int yr2910_ParamCType(void * a_p2911);
static void yr2916_RoutineHeader(void * a_p2917, rt_int a_p2918);
static void * yr2923_SameSignature(void * a_p2924, void * a_p2925);
static void yr2930_RoutineBody(void * a_p2931);
static void yr2936_DeclareStorage(void * a_p2937, void * a_p2938, rt_int a_p2939);
static void yr2944_SimpleDecl(void * a_p2945);
static void yr2950_NoteAlphabet(void * a_p2951, void * a_p2952);
static void yr2957_AtLocation(void * a_p2958, void * a_p2959);
static void yr2964_Declarations(void * a_p2965);
static void * yr2983_Alias(rt_int a_p2984, void * a_p2985);
static void yr2990_AddLits(void * * a_p2991, void * a_p2992, rt_int a_p2993);
static rt_int yr3001_Provides(void * a_p3002, rt_int a_p3003);
static void yr3008_ImportLater(rt_int a_p3009, rt_int a_p3010);
static void yr3015_ResolveItem(void * a_p3016, void * * a_p3017, rt_int a_p3018);
static void yr3023_DefineAll(void * a_p3024, rt_int a_p3025);
static void yr3030_CompileModule(void * a_p3031);
static void yr3036_DeclareTemplate(void * a_p3037);
static void yr3042_Instantiate(void * a_p3043);
static void yr3048_DeclareProcess(void * a_p3049);
static void yr3054_AwaitProcesses(void);
static void yr3059_Activate(void * a_p3060, void * a_p3061);
static rt_int yr3066_MonitorPath(void * a_p3067);
static void yr3072_EnterMonitor(void * a_p3073);
static void yr3078_LeaveMonitor(void);
static void yr3083_TerminateStatement(void * a_p3084);
static void yr3089_DeclareSignal(void * a_p3090, rt_int a_p3091);
static void yr3096_DeclareSignalArray(void * a_p3097, rt_int a_p3098);
static void yr3103_DeviceSignal(void * a_p3104, void * a_p3105);
static void * yr3110_Arg(void * a_p3111, rt_int a_p3112);
static void yr3117_NArgs(void * a_p3118, rt_int a_p3119);
static rt_int yr3124_Call1(yarr a_p3126, rt_int a_p3127);
static rt_int yr3132_Addr(rt_int a_p3133);
static void yr3138_StdVar(void * a_p3139, rt_int a_p3140, rt_int * a_p3141, void * * a_p3142);
static void yr3147_NumArg(void * a_p3148, rt_int * a_p3149, void * * a_p3150);
static rt_int yr3155_IntArg(void * a_p3156);
static void yr3161_CodeInsert(void * a_p3162);
static void * yr3167_ManifestScale(void * a_p3168, void * a_p3169);
static void yr3174_StdCall(rt_int a_p3175, void * a_p3176, rt_int a_p3177, rt_int * a_p3178, void * * a_p3179);
static void yr3188_StdRep(yarr a_p3190, void * a_p3191);
static void yr3196_StdOp(yarr a_p3198, rt_int a_p3199);
static void * yr3204_LitList(yarr a_p3206, yarr a_p3207, yarr a_p3208, rt_int a_p3209);
static void * yr3214_Abstract(rt_int a_p3215, yarr a_p3217);
static void yr3222_Predefine(void);
static void yr3227_Translate(void);
static void yr3232_WriteProgram(void);
static void yr983_InitChars(void) {
struct yf984 F;
memset((void *)&F, 0, sizeof F);
F.v3237 = INT64_C(0);
{ rt_int hi3242 = 127;
for (rt_int i3241 = 0; i3241 <= hi3242; i3241++) { F.c_3240 = i3241;
((rt_int *)(v949).p)[y_ix1(v949, F.c_3240)] = F.v3237;
((unsigned char *)(v960).p)[y_ix1(v960, F.v3237)] = F.c_3240;
F.v3237 = rt_range(rt_add(F.v3237, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3241 == hi3242) break;
}}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr988_IsLetter(unsigned char a_p989) {
struct yf990 F;
memset((void *)&F, 0, sizeof F);
F.p989 = a_p989;
{ rt_int rv3252 = ((((((F.p989 >= 65)) && ((F.p989 <= 90)))) || ((((F.p989 >= 97)) && ((F.p989 <= 122))))) || ((F.p989 == 95)));
return rv3252; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr994_IsDigit(unsigned char a_p995) {
struct yf996 F;
memset((void *)&F, 0, sizeof F);
F.p995 = a_p995;
{ rt_int rv3257 = (((F.p995 >= 48)) && ((F.p995 <= 57)));
return rv3257; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1000_PoolAdd(unsigned char a_p1001) {
struct yf1002 F;
memset((void *)&F, 0, sizeof F);
F.p1001 = a_p1001;
v899 = rt_range(rt_add(v899, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((unsigned char *)(v897).p)[y_ix1(v897, v899)] = F.p1001;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1006_SB(void) {
struct yf1007 F;
memset((void *)&F, 0, sizeof F);
v939 = rt_range(rt_add(v939, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v937).p)[y_ix1(v937, v939)] = v925;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1011_SC(unsigned char a_p1012) {
struct yf1013 F;
memset((void *)&F, 0, sizeof F);
F.p1012 = a_p1012;
v925 = rt_range(rt_add(v925, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((unsigned char *)(v923).p)[y_ix1(v923, v925)] = F.p1012;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1017_SA(yarr a_p1019) {
struct yf1020 F;
memset((void *)&F, 0, sizeof F);
F.p1019 = a_p1019;
F.lo3276 = y_low(F.p1019, INT64_C(1));
F.hi3277 = y_high(F.p1019, INT64_C(1));
{ rt_int hi3281 = F.hi3277;
for (rt_int i3280 = F.lo3276; i3280 <= hi3281; i3280++) { F.c_3279 = i3280;
yr1011_SC(((unsigned char *)(F.p1019).p)[y_ix1(F.p1019, F.c_3279)]);
if (i3280 == hi3281) break;
}}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1024_ST(rt_int a_p1025) {
struct yf1026 F;
memset((void *)&F, 0, sizeof F);
F.p1025 = a_p1025;
if ((F.p1025 == INT64_C(0))) {
return;
}
F.v3285 = ((rt_int *)(v902).p)[y_ix1(v902, F.p1025)];
while ((F.v3285 < (rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.p1025)], ((rt_int *)(v904).p)[y_ix1(v904, F.p1025)])))) {
yr1011_SC(((unsigned char *)(v897).p)[y_ix1(v897, F.v3285)]);
F.v3285 = rt_range(rt_add(F.v3285, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1030_SI(rt_int a_p1031) {
struct yf1032 F;
memset((void *)&F, 0, sizeof F);
F.p1031 = a_p1031;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(24)}; y_desc_array(&F.yd_3300, 1, lo, hi, &y_d_byte); }
y_init(&F.yd_3300, &F.v3302);
F.v3304 = INT64_C(0);
F.v3307 = F.p1031;
if ((F.v3307 < INT64_C(0))) {
yr1011_SC(45);
F.v3307 = rt_range(rt_neg(F.v3307), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
for (;;) {
F.v3304 = rt_range(rt_add(F.v3304, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((unsigned char *)(F.v3302).p)[y_ix1(F.v3302, F.v3304)] = ((unsigned char *)(v960).p)[y_ix1(v960, rt_add((rt_mod(F.v3307, INT64_C(10))), INT64_C(48)))];
F.v3307 = rt_range(rt_div(F.v3307, INT64_C(10)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.v3307 == INT64_C(0))) {
goto yl_3311;
}
}
yl_3311: ;
while ((F.v3304 > INT64_C(0))) {
yr1011_SC(((unsigned char *)(F.v3302).p)[y_ix1(F.v3302, F.v3304)]);
F.v3304 = rt_range(rt_sub(F.v3304, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1036_SE(void) {
struct yf1037 F;
memset((void *)&F, 0, sizeof F);
F.v3326 = ((rt_int *)(v937).p)[y_ix1(v937, v939)];
v939 = rt_range(rt_sub(v939, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v906 = rt_range(rt_add(v906, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v902).p)[y_ix1(v902, v906)] = rt_range(rt_add(v899, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v904).p)[y_ix1(v904, v906)] = rt_range(rt_sub(v925, F.v3326), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo3337 = rt_add(F.v3326, INT64_C(1));
F.hi3338 = v925;
{ rt_int hi3342 = F.hi3338;
for (rt_int i3341 = F.lo3337; i3341 <= hi3342; i3341++) { F.c_3340 = i3341;
yr1000_PoolAdd(((unsigned char *)(v923).p)[y_ix1(v923, F.c_3340)]);
if (i3341 == hi3342) break;
}}
v925 = F.v3326;
{ rt_int rv3343 = rt_range(v906, INT64_C(0), INT64_C(4000000));
return rv3343; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1041_T(yarr a_p1043) {
struct yf1044 F;
memset((void *)&F, 0, sizeof F);
F.p1043 = a_p1043;
yr1006_SB();
yr1017_SA(F.p1043);
{ rt_int rv3346 = yr1036_SE();
return rv3346; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1048_Intern(rt_int a_p1049, rt_int a_p1050) {
struct yf1051 F;
memset((void *)&F, 0, sizeof F);
F.p1049 = a_p1049;
F.p1050 = a_p1050;
F.v3351 = INT64_C(0);
F.lo3361 = F.p1049;
F.hi3362 = rt_sub((rt_add(F.p1049, F.p1050)), INT64_C(1));
{ rt_int hi3366 = F.hi3362;
for (rt_int i3365 = F.lo3361; i3365 <= hi3366; i3365++) { F.c_3364 = i3365;
F.v3351 = rt_range(rt_mod((rt_add((rt_mul(F.v3351, INT64_C(31))), ((rt_int *)(v949).p)[y_ix1(v949, ((unsigned char *)(v897).p)[y_ix1(v897, F.c_3364)])])), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3365 == hi3366) break;
}}
for (;;) {
if ((((rt_int *)(v909).p)[y_ix1(v909, F.v3351)] == INT64_C(0))) {
v906 = rt_range(rt_add(v906, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v902).p)[y_ix1(v902, v906)] = F.p1049;
((rt_int *)(v904).p)[y_ix1(v904, v906)] = F.p1050;
((rt_int *)(v909).p)[y_ix1(v909, F.v3351)] = rt_range(v906, INT64_C(0), INT64_C(4000000));
{ rt_int rv3376 = rt_range(v906, INT64_C(0), INT64_C(4000000));
return rv3376; }
}
F.v3354 = ((rt_int *)(v909).p)[y_ix1(v909, F.v3351)];
if ((((rt_int *)(v904).p)[y_ix1(v904, F.v3354)] == F.p1050)) {
F.v3356 = 1;
F.lo3383 = INT64_C(0);
F.hi3384 = rt_sub(F.p1050, INT64_C(1));
{ rt_int hi3388 = F.hi3384;
for (rt_int i3387 = F.lo3383; i3387 <= hi3388; i3387++) { F.c_3386 = i3387;
if ((!(((unsigned char *)(v897).p)[y_ix1(v897, rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.v3354)], F.c_3386))] == ((unsigned char *)(v897).p)[y_ix1(v897, rt_add(F.p1049, F.c_3386))]))) {
F.v3356 = 0;
}
if (i3387 == hi3388) break;
}}
if (F.v3356) {
{ rt_int rv3392 = rt_range(F.v3354, INT64_C(0), INT64_C(4000000));
return rv3392; }
}
}
F.v3351 = rt_range(rt_mod((rt_add(F.v3351, INT64_C(1))), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yl_3372: ;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1055_Name(rt_int a_p1056) {
struct yf1057 F;
memset((void *)&F, 0, sizeof F);
F.p1056 = a_p1056;
{ rt_int rv3399 = yr1048_Intern(((rt_int *)(v902).p)[y_ix1(v902, F.p1056)], ((rt_int *)(v904).p)[y_ix1(v904, F.p1056)]);
return rv3399; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1061_N(yarr a_p1063) {
struct yf1064 F;
memset((void *)&F, 0, sizeof F);
F.p1063 = a_p1063;
{ rt_int rv3402 = yr1055_Name(yr1041_T(F.p1063));
return rv3402; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1068_TEq(rt_int a_p1069, rt_int a_p1070) {
struct yf1071 F;
memset((void *)&F, 0, sizeof F);
F.p1069 = a_p1069;
F.p1070 = a_p1070;
if ((F.p1069 == F.p1070)) {
{ rt_int rv3407 = 1;
return rv3407; }
}
if ((!(((rt_int *)(v904).p)[y_ix1(v904, F.p1069)] == ((rt_int *)(v904).p)[y_ix1(v904, F.p1070)]))) {
{ rt_int rv3409 = 0;
return rv3409; }
}
F.lo3415 = INT64_C(0);
F.hi3416 = rt_sub(((rt_int *)(v904).p)[y_ix1(v904, F.p1069)], INT64_C(1));
{ rt_int hi3420 = F.hi3416;
for (rt_int i3419 = F.lo3415; i3419 <= hi3420; i3419++) { F.c_3418 = i3419;
if ((!(((unsigned char *)(v897).p)[y_ix1(v897, rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.p1069)], F.c_3418))] == ((unsigned char *)(v897).p)[y_ix1(v897, rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.p1070)], F.c_3418))]))) {
{ rt_int rv3424 = 0;
return rv3424; }
}
if (i3419 == hi3420) break;
}}
{ rt_int rv3426 = 1;
return rv3426; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1075_TStarts(rt_int a_p1076, yarr a_p1078) {
struct yf1079 F;
memset((void *)&F, 0, sizeof F);
F.p1076 = a_p1076;
F.p1078 = a_p1078;
F.v3431 = INT64_C(0);
if ((((rt_int *)(v904).p)[y_ix1(v904, F.p1076)] < (rt_add((rt_sub(y_high(F.p1078, INT64_C(1)), y_low(F.p1078, INT64_C(1)))), INT64_C(1))))) {
{ rt_int rv3441 = 0;
return rv3441; }
}
F.lo3447 = y_low(F.p1078, INT64_C(1));
F.hi3448 = y_high(F.p1078, INT64_C(1));
{ rt_int hi3452 = F.hi3448;
for (rt_int i3451 = F.lo3447; i3451 <= hi3452; i3451++) { F.c_3450 = i3451;
if ((!(((unsigned char *)(v897).p)[y_ix1(v897, rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.p1076)], F.v3431))] == ((unsigned char *)(F.p1078).p)[y_ix1(F.p1078, F.c_3450)]))) {
{ rt_int rv3455 = 0;
return rv3455; }
}
F.v3431 = rt_range(rt_add(F.v3431, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3451 == hi3452) break;
}}
{ rt_int rv3459 = 1;
return rv3459; }
rt_raise(Y_X_NO_RETURN);
}
static unsigned char yr1083_TChar(rt_int a_p1084, rt_int a_p1085) {
struct yf1086 F;
memset((void *)&F, 0, sizeof F);
F.p1084 = a_p1084;
F.p1085 = a_p1085;
{ unsigned char rv3466 = ((unsigned char *)(v897).p)[y_ix1(v897, rt_sub((rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.p1084)], F.p1085)), INT64_C(1)))];
return rv3466; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1090_Put(yR134 * a_p1091, rt_int a_p1092) {
struct yf1093 F;
memset((void *)&F, 0, sizeof F);
F.p1091 = a_p1091;
F.p1092 = a_p1092;
({ F.v3471 = rt_alloc(sizeof(yR129)); });
(*(yR129 *)rt_nil_check(F.v3471)) = ((yR129){ .f_t = F.p1092, .f_next = ((void *)0) });
if ((((*F.p1091)).f_head == ((void *)0))) {
((*F.p1091)).f_head = F.v3471;
} else {
((*(yR129 *)rt_nil_check(((*F.p1091)).f_tail))).f_next = F.v3471;
}
((*F.p1091)).f_tail = F.v3471;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1097_PutS(yR134 * a_p1098, yarr a_p1100) {
struct yf1101 F;
memset((void *)&F, 0, sizeof F);
F.p1098 = a_p1098;
F.p1100 = a_p1100;
yr1090_Put(&(*F.p1098), yr1041_T(F.p1100));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1105_Append(yR134 * a_p1106, yR134 * a_p1107) {
struct yf1108 F;
memset((void *)&F, 0, sizeof F);
F.p1106 = a_p1106;
F.p1107 = a_p1107;
if ((((*F.p1107)).f_head == ((void *)0))) {
return;
}
if ((((*F.p1106)).f_head == ((void *)0))) {
((*F.p1106)).f_head = ((*F.p1107)).f_head;
} else {
((*(yR129 *)rt_nil_check(((*F.p1106)).f_tail))).f_next = ((*F.p1107)).f_head;
}
((*F.p1106)).f_tail = ((*F.p1107)).f_tail;
((*F.p1107)).f_head = ((void *)0);
((*F.p1107)).f_tail = ((void *)0);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1112_Emit(rt_int a_p1113) {
struct yf1114 F;
memset((void *)&F, 0, sizeof F);
F.p1113 = a_p1113;
yr1090_Put(&v976, F.p1113);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1118_EmitS(yarr a_p1120) {
struct yf1121 F;
memset((void *)&F, 0, sizeof F);
F.p1120 = a_p1120;
yr1090_Put(&v976, yr1041_T(F.p1120));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1125_WriteTxt(rt_int a_p1126) {
struct yf1127 F;
memset((void *)&F, 0, sizeof F);
F.p1126 = a_p1126;
F.v3485 = ((rt_int *)(v902).p)[y_ix1(v902, F.p1126)];
while ((F.v3485 < (rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.p1126)], ((rt_int *)(v904).p)[y_ix1(v904, F.p1126)])))) {
({ unsigned char pv = ((unsigned char *)(v897).p)[y_ix1(v897, F.v3485)]; y_put(&v895, &pv, sizeof pv); });
F.v3485 = rt_range(rt_add(F.v3485, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1131_WriteBuf(yR134 a_p1132) {
struct yf1133 F;
memset((void *)&F, 0, sizeof F);
F.p1132 = a_p1132;
F.v3492 = (F.p1132).f_head;
while ((!(F.v3492 == ((void *)0)))) {
yr1125_WriteTxt(((*(yR129 *)rt_nil_check(F.v3492))).f_t);
({ unsigned char pv = 10; y_put(&v895, &pv, sizeof pv); });
F.v3492 = ((*(yR129 *)rt_nil_check(F.v3492))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1137_Fail(rt_int a_p1138, rt_int a_p1139) {
struct yf1140 F;
memset((void *)&F, 0, sizeof F);
F.p1138 = a_p1138;
F.p1139 = a_p1139;
v939 = INT64_C(0);
v925 = INT64_C(0);
yr1006_SB();
yr1017_SA(y_str("line ", 5));
yr1030_SI(F.p1138);
yr1017_SA(y_str(": ", 2));
yr1024_ST(F.p1139);
F.v3498 = yr1036_SE();
yr1125_WriteTxt(F.v3498);
({ unsigned char pv = 10; y_put(&v895, &pv, sizeof pv); });
y_close(&v895);
rt_raise(rt_exc("translation_error"));
rt_raise(Y_X_NO_RETURN);
}
static void yr1144_FailS(rt_int a_p1145, yarr a_p1147) {
struct yf1148 F;
memset((void *)&F, 0, sizeof F);
F.p1145 = a_p1145;
F.p1147 = a_p1147;
yr1137_Fail(F.p1145, yr1041_T(F.p1147));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1152_FailN(rt_int a_p1153, rt_int a_p1154, yarr a_p1156) {
struct yf1157 F;
memset((void *)&F, 0, sizeof F);
F.p1153 = a_p1153;
F.p1154 = a_p1154;
F.p1156 = a_p1156;
yr1006_SB();
yr1024_ST(F.p1154);
yr1017_SA(F.p1156);
F.v3512 = yr1036_SE();
yr1137_Fail(F.p1153, F.v3512);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1161_NewSerial(void) {
struct yf1162 F;
memset((void *)&F, 0, sizeof F);
v942 = rt_range(rt_add(v942, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
{ rt_int rv3516 = v942;
return rv3516; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1166_Fresh(yarr a_p1168) {
struct yf1169 F;
memset((void *)&F, 0, sizeof F);
F.p1168 = a_p1168;
F.v3520 = yr1161_NewSerial();
yr1006_SB();
yr1017_SA(F.p1168);
yr1030_SI(F.v3520);
{ rt_int rv3521 = yr1036_SE();
return rv3521; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1215_InitWords(void) {
struct yf1216 F;
memset((void *)&F, 0, sizeof F);
yr1006_SB();
yr1017_SA(y_str("ALIGNMENT ALPHABET AND ARRAY AS ASSERT AT BASE2 BASE8 BASE10 BASE16 BEGIN CASE ", 79));
yr1017_SA(y_str("CONST DIMENSIONS DIV DO ELSE ELSIF END ENDEXCEPTION ENDFOR ENDFUNCTION ENDIF ", 77));
yr1017_SA(y_str("ENDLOOP ENDMODULE ENDMONITOR ENDPROCEDURE ENDPROCESS ENDRECORD ENDSELECT ", 73));
yr1017_SA(y_str("ENDTEMPLATE ENDWHILE EXCEPTION EXIT EXPORT EXTENDS FILE FOR FUNCTION GOTO IF ", 77));
yr1017_SA(y_str("IMPORT IN INLINE INSTANCE INSTANCES LABEL LOOP MOD MODULE MONITOR NIL NOT OF ", 77));
yr1017_SA(y_str("OPAQUE OR ORDERED OUT PACKED POINTER PRECISION PRIORITY PROCEDURE PROCESS ", 74));
yr1017_SA(y_str("PROPAGATE_EXCEPTION READONLY RECORD REPLACES REPRESENTATION RETURN RETURNS ", 75));
yr1017_SA(y_str("SCALE SELECT SET SIMULATED_TIME SIZE SPACE TEMPLATE TERMINATE_PROCESS THEN ", 75));
yr1017_SA(y_str("TRANSPARENT TYPE UNORDERED VAR WHILE XOR ", 41));
yr1017_SA(y_str("<<<= >>>= ### === <<< >>> <<= >>= *** /// --- +++ := => .. <= >= ## == << >> ", 77));
yr1017_SA(y_str("** // -- ++ # + - * / = < > ( ) [ ] , ; : . ^ ", 46));
F.v3528 = yr1036_SE();
v906 = INT64_C(0);
F.v3524 = ((rt_int *)(v902).p)[y_ix1(v902, F.v3528)];
F.lo3545 = ((rt_int *)(v902).p)[y_ix1(v902, F.v3528)];
F.hi3546 = rt_sub((rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.v3528)], ((rt_int *)(v904).p)[y_ix1(v904, F.v3528)])), INT64_C(1));
{ rt_int hi3550 = F.hi3546;
for (rt_int i3549 = F.lo3545; i3549 <= hi3550; i3549++) { F.c_3548 = i3549;
if ((((unsigned char *)(v897).p)[y_ix1(v897, F.c_3548)] == 32)) {
F.v3526 = yr1048_Intern(F.v3524, rt_range(rt_sub(F.c_3548, F.v3524), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v3524 = rt_range(rt_add(F.c_3548, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i3549 == hi3550) break;
}}
if ((!(v906 == v605))) {
rt_raise(rt_exc("word_table"));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1220_ReadSource(void) {
struct yf1221 F;
memset((void *)&F, 0, sizeof F);
y_open(&v893, y_str("INPUT", 5), 0);
v1182 = rt_range(rt_add(v899, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!y_check_eof(&v893))) {
({ unsigned char g; y_get(&v893, &g, sizeof g); F.v3557 = g; });
yr1000_PoolAdd(F.v3557);
}
v1185 = v899;
y_close(&v893);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1225_AddTok(rt_int a_p1226, rt_int a_p1227) {
struct yf1228 F;
memset((void *)&F, 0, sizeof F);
F.p1226 = a_p1226;
F.p1227 = a_p1227;
v1179 = rt_range(rt_add(v1179, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1173).p)[y_ix1(v1173, v1179)] = F.p1226;
((rt_int *)(v1175).p)[y_ix1(v1175, v1179)] = F.p1227;
((rt_int *)(v1177).p)[y_ix1(v1177, v1179)] = v1191;
return;
rt_raise(Y_X_NO_RETURN);
}
static unsigned char yr1232_At(rt_int a_p1233) {
struct yf1234 F;
memset((void *)&F, 0, sizeof F);
F.p1233 = a_p1233;
if ((F.p1233 > v1185)) {
{ unsigned char rv3570 = 0;
return rv3570; }
}
{ unsigned char rv3571 = ((unsigned char *)(v897).p)[y_ix1(v897, F.p1233)];
return rv3571; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1238_EndsOperand(void) {
struct yf1239 F;
memset((void *)&F, 0, sizeof F);
if ((v1179 == INT64_C(0))) {
{ rt_int rv3579 = 0;
return rv3579; }
}
F.v3574 = ((rt_int *)(v1173).p)[y_ix1(v1173, v1179)];
F.v3576 = ((rt_int *)(v1175).p)[y_ix1(v1175, v1179)];
if ((((((((F.v3574 == v191)) || ((F.v3574 == v200))) || ((F.v3574 == v203))) || ((F.v3574 == v206))) || ((F.v3574 == v209))) || ((F.v3574 == v212)))) {
{ rt_int rv3581 = 1;
return rv3581; }
}
if ((F.v3574 == v197)) {
{ rt_int rv3582 = ((((F.v3576 == v581)) || ((F.v3576 == v587))) || ((F.v3576 == v602)));
return rv3582; }
}
if ((F.v3574 == v194)) {
{ rt_int rv3583 = (F.v3576 == v371);
return rv3583; }
}
{ rt_int rv3585 = 0;
return rv3585; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1243_DigitVal(unsigned char a_p1244) {
struct yf1245 F;
memset((void *)&F, 0, sizeof F);
F.p1244 = a_p1244;
if ((((F.p1244 >= 48)) && ((F.p1244 <= 57)))) {
{ rt_int rv3592 = rt_range(rt_sub(((rt_int *)(v949).p)[y_ix1(v949, F.p1244)], INT64_C(48)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return rv3592; }
}
if ((((F.p1244 >= 65)) && ((F.p1244 <= 70)))) {
{ rt_int rv3597 = rt_range(rt_sub(((rt_int *)(v949).p)[y_ix1(v949, F.p1244)], INT64_C(55)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return rv3597; }
}
{ rt_int rv3599 = INT64_C(99);
return rv3599; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1249_LexError(yarr a_p1251) {
struct yf1252 F;
memset((void *)&F, 0, sizeof F);
F.p1251 = a_p1251;
yr1144_FailS(v1191, F.p1251);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1256_LexDigits(rt_int a_p1257, rt_int a_p1258) {
struct yf1259 F;
memset((void *)&F, 0, sizeof F);
F.p1257 = a_p1257;
F.p1258 = a_p1258;
while ((yr994_IsDigit(yr1232_At(v1188)) || ((F.p1258 && ((yr1243_DigitVal(yr1232_At(v1188)) < INT64_C(16))))))) {
if ((yr1243_DigitVal(yr1232_At(v1188)) >= F.p1257)) {
yr1006_SB();
yr1011_SC(39);
yr1011_SC(yr1232_At(v1188));
yr1017_SA(y_str("' is not a digit of BASE", 24));
yr1030_SI(F.p1257);
yr1017_SA(y_str(" (IV.B)", 7));
F.v3606 = yr1036_SE();
yr1137_Fail(v1191, F.v3606);
}
v1188 = rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1263_LexNumber(rt_int a_p1264) {
struct yf1265 F;
memset((void *)&F, 0, sizeof F);
F.p1264 = a_p1264;
F.v3616 = INT64_C(10);
F.v3627 = 0;
F.v3630 = 0;
F.v3633 = INT64_C(0);
F.v3636 = INT64_C(0);
F.v3639 = INT64_C(0);
F.v3642 = INT64_C(0);
F.v3645 = INT64_C(0);
if ((!(v1194 == INT64_C(0)))) {
F.v3616 = v1194;
F.v3630 = 1;
}
v1194 = INT64_C(0);
F.v3619 = v1188;
yr1256_LexDigits(F.v3616, F.v3630);
F.v3621 = v1188;
if ((F.v3621 == F.v3619)) {
yr1249_LexError(y_str("a number has at least one digit (IV.B)", 38));
}
F.v3623 = v1188;
F.v3625 = v1188;
if ((((yr1232_At(v1188) == 46)) && ((!(yr1232_At(rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 46))))) {
F.v3627 = 1;
v1188 = rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3623 = v1188;
yr1256_LexDigits(F.v3616, F.v3630);
F.v3625 = v1188;
}
if ((yr1232_At(v1188) == 80)) {
v1188 = rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3642 = INT64_C(1);
if ((((((yr1232_At(v1188) == 45)) || ((yr1232_At(v1188) == 43)))) && yr994_IsDigit(yr1232_At(rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))) {
if ((yr1232_At(v1188) == 45)) {
F.v3642 = INT64_C(-1);
}
v1188 = rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3639 = INT64_C(0);
while (yr994_IsDigit(yr1232_At(v1188))) {
if ((F.v3639 > INT64_C(1000))) {
yr1249_LexError(y_str("a fixed-point exponent beyond this implementation", 49));
}
F.v3639 = rt_range(rt_add((rt_mul(F.v3639, INT64_C(10))), yr1243_DigitVal(yr1232_At(v1188))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1188 = rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3639 = rt_range(rt_mul(F.v3639, F.v3642), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3633 = INT64_C(0);
F.v3645 = rt_range(rt_sub(F.v3625, F.v3623), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo3686 = F.v3619;
F.hi3687 = rt_sub(F.v3625, INT64_C(1));
{ rt_int hi3691 = F.hi3687;
for (rt_int i3690 = F.lo3686; i3690 <= hi3691; i3690++) { F.c_3689 = i3690;
if ((((F.c_3689 < F.v3621)) || ((F.c_3689 >= F.v3623)))) {
F.v3636 = yr1243_DigitVal(((unsigned char *)(v897).p)[y_ix1(v897, F.c_3689)]);
if ((F.v3633 > (rt_div((rt_sub(v890, F.v3636)), F.v3616)))) {
yr1249_LexError(y_str("a fixed-point literal with more digits than this implementation holds", 69));
}
F.v3633 = rt_range(rt_add((rt_mul(F.v3633, F.v3616)), F.v3636), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i3690 == hi3691) break;
}}
if (F.p1264) {
F.v3633 = rt_range(rt_neg(F.v3633), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((v1212 >= INT64_C(200000))) {
yr1249_LexError(y_str("too many fixed-point literals", 29));
}
v1212 = rt_range(rt_add(v1212, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1206).p)[y_ix1(v1206, v1212)] = F.v3633;
((rt_int *)(v1208).p)[y_ix1(v1208, v1212)] = F.v3616;
((rt_int *)(v1210).p)[y_ix1(v1210, v1212)] = rt_range(rt_sub(F.v3639, F.v3645), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1225_AddTok(v203, v1212);
return;
}
if (F.v3627) {
if ((!(F.v3616 == INT64_C(10)))) {
yr1249_LexError(y_str("a floating-point literal is decimal", 35));
}
if ((yr1232_At(v1188) == 69)) {
v1188 = rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((yr1232_At(v1188) == 45)) || ((yr1232_At(v1188) == 43)))) {
v1188 = rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
while (yr994_IsDigit(yr1232_At(v1188))) {
v1188 = rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1006_SB();
if (F.p1264) {
yr1017_SA(y_str("-", 1));
}
F.lo3718 = F.v3619;
F.hi3719 = rt_sub(v1188, INT64_C(1));
{ rt_int hi3723 = F.hi3719;
for (rt_int i3722 = F.lo3718; i3722 <= hi3723; i3722++) { F.c_3721 = i3722;
yr1011_SC(((unsigned char *)(v897).p)[y_ix1(v897, F.c_3721)]);
if (i3722 == hi3723) break;
}}
F.v3648 = yr1036_SE();
yr1225_AddTok(v206, F.v3648);
return;
}
F.v3633 = INT64_C(0);
F.lo3728 = F.v3619;
F.hi3729 = rt_sub(F.v3621, INT64_C(1));
{ rt_int hi3733 = F.hi3729;
for (rt_int i3732 = F.lo3728; i3732 <= hi3733; i3732++) { F.c_3731 = i3732;
F.v3636 = yr1243_DigitVal(((unsigned char *)(v897).p)[y_ix1(v897, F.c_3731)]);
if ((F.v3633 > (rt_div((rt_sub(v890, F.v3636)), F.v3616)))) {
yr1249_LexError(y_str("integer literal too large", 25));
}
F.v3633 = rt_range(rt_add((rt_mul(F.v3633, F.v3616)), F.v3636), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3732 == hi3733) break;
}}
if (F.p1264) {
F.v3633 = rt_range(rt_neg(F.v3633), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yr1225_AddTok(v200, F.v3633);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1269_LexString(void) {
struct yf1270 F;
memset((void *)&F, 0, sizeof F);
yr1006_SB();
for (;;) {
v1188 = rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1232_At(v1188) == 34))) {
if ((((yr1232_At(v1188) == 10)) || ((v1188 > v1185)))) {
v911 = 0;
yr1249_LexError(y_str("a string must close on its line", 31));
}
yr1011_SC(yr1232_At(v1188));
v1188 = rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1188 = rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3744 = v1188;
F.v3746 = INT64_C(0);
F.v3748 = 1;
while (F.v3748) {
if (((((yr1232_At(F.v3744) == 32)) || ((yr1232_At(F.v3744) == 9))) || ((yr1232_At(F.v3744) == 13)))) {
F.v3744 = rt_range(rt_add(F.v3744, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr1232_At(F.v3744) == 10)) {
F.v3746 = rt_range(rt_add(F.v3746, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3744 = rt_range(rt_add(F.v3744, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v3748 = 0;
}
}
if ((!(yr1232_At(F.v3744) == 34))) {
goto yl_3749;
}
v1191 = rt_range(rt_add(v1191, F.v3746), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1188 = F.v3744;
}
yl_3749: ;
F.v3742 = yr1036_SE();
yr1225_AddTok(v212, F.v3742);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1274_Lex(void) {
struct yf1275 F;
memset((void *)&F, 0, sizeof F);
v1188 = v1182;
while ((v1188 <= v1185)) {
F.v3777 = ((unsigned char *)(v897).p)[y_ix1(v897, v1188)];
if ((F.v3777 == 10)) {
v1191 = rt_range(rt_add(v1191, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1188 = rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((((F.v3777 == 32)) || ((F.v3777 == 9))) || ((F.v3777 == 13))) || ((F.v3777 == 12)))) {
v1188 = rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v3777 == 40)) && ((yr1232_At(rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 42)))) {
v1188 = rt_range(rt_add(v1188, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!((((yr1232_At(v1188) == 42)) && ((yr1232_At(rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 41)))))) {
if ((((yr1232_At(v1188) == 10)) || ((v1188 > v1185)))) {
yr1249_LexError(y_str("a comment must close on its line", 32));
}
v1188 = rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1188 = rt_range(rt_add(v1188, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr994_IsDigit(F.v3777) || ((((v1194 == INT64_C(16))) && ((yr1243_DigitVal(F.v3777) < INT64_C(16))))))) {
yr1263_LexNumber(0);
} else if (((((((F.v3777 == 45)) || ((F.v3777 == 43)))) && (!yr1238_EndsOperand())) && ((yr994_IsDigit(yr1232_At(rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || ((((v1194 == INT64_C(16))) && ((yr1243_DigitVal(yr1232_At(rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) < INT64_C(16))))))))) {
v1188 = rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1263_LexNumber((F.v3777 == 45));
} else if ((!(v1194 == INT64_C(0)))) {
yr1249_LexError(y_str("a BASE word is followed by a number (IV.B)", 42));
} else if (yr988_IsLetter(F.v3777)) {
F.v3779 = v1188;
while ((yr988_IsLetter(yr1232_At(v1188)) || yr994_IsDigit(yr1232_At(v1188)))) {
v1188 = rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3787 = yr1048_Intern(F.v3779, rt_range(rt_sub(v1188, F.v3779), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((F.v3787 == v236)) {
v1194 = INT64_C(2);
} else if ((F.v3787 == v239)) {
v1194 = INT64_C(8);
} else if ((F.v3787 == v242)) {
v1194 = INT64_C(10);
} else if ((F.v3787 == v245)) {
v1194 = INT64_C(16);
} else if ((F.v3787 <= v476)) {
yr1225_AddTok(v194, F.v3787);
} else {
yr1225_AddTok(v191, F.v3787);
}
} else if ((F.v3777 == 39)) {
F.v3779 = rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3781 = F.v3779;
while ((!(yr1232_At(F.v3781) == 39))) {
if (((((yr1232_At(F.v3781) == 10)) || ((yr1232_At(F.v3781) == 34))) || ((F.v3781 > v1185)))) {
yr1249_LexError(y_str("bad character literal", 21));
}
F.v3781 = rt_range(rt_add(F.v3781, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v3781 == F.v3779)) {
yr1249_LexError(y_str("empty character literal", 23));
}
F.v3787 = yr1048_Intern(F.v3779, rt_range(rt_sub(F.v3781, F.v3779), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1225_AddTok(v209, F.v3787);
v1188 = rt_range(rt_add(F.v3781, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v3777 == 34)) {
yr1269_LexString();
} else {
F.v3783 = INT64_C(0);
F.v3781 = rt_range(rt_add(v476, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((F.v3783 == INT64_C(0))) && ((F.v3781 <= v605)))) {
F.v3785 = ((rt_int *)(v904).p)[y_ix1(v904, F.v3781)];
F.v3791 = 1;
F.lo3866 = INT64_C(0);
F.hi3867 = rt_sub(F.v3785, INT64_C(1));
{ rt_int hi3871 = F.hi3867;
for (rt_int i3870 = F.lo3866; i3870 <= hi3871; i3870++) { F.c_3869 = i3870;
if ((!(yr1232_At(rt_range(rt_add(v1188, F.c_3869), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == ((unsigned char *)(v897).p)[y_ix1(v897, rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.v3781)], F.c_3869))]))) {
F.v3791 = 0;
}
if (i3870 == hi3871) break;
}}
if (F.v3791) {
F.v3783 = F.v3781;
}
F.v3781 = rt_range(rt_add(F.v3781, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v3783 == INT64_C(0))) {
yr1249_LexError(y_str("a character that is not in the language", 39));
}
yr1225_AddTok(v197, F.v3783);
v1188 = rt_range(rt_add(v1188, ((rt_int *)(v904).p)[y_ix1(v904, F.v3783)]), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1225_AddTok(v188, INT64_C(0));
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1290_NewNode(rt_int a_p1291, rt_int a_p1292) {
struct yf1293 F;
memset((void *)&F, 0, sizeof F);
F.p1291 = a_p1291;
F.p1292 = a_p1292;
({ F.v3885 = rt_alloc(sizeof(yR99)); });
(*(yR99 *)rt_nil_check(F.v3885)) = ((yR99){ .f_kind = F.p1291, .f_line = F.p1292, .f_ival = INT64_C(0), .f_flag = INT64_C(0), .f_name = INT64_C(0), .f_text = INT64_C(0), .f_a = ((void *)0), .f_b = ((void *)0), .f_c = ((void *)0), .f_d = ((void *)0), .f_e = ((void *)0), .f_next = ((void *)0), .f_rep = ((void *)0), .f_sym = ((void *)0) });
{ void * rv3890 = F.v3885;
return rv3890; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1297_Link(void * * a_p1298, void * * a_p1299, void * a_p1300) {
struct yf1301 F;
memset((void *)&F, 0, sizeof F);
F.p1298 = a_p1298;
F.p1299 = a_p1299;
F.p1300 = a_p1300;
if (((*F.p1298) == ((void *)0))) {
(*F.p1298) = F.p1300;
} else {
((*(yR99 *)rt_nil_check((*F.p1299)))).f_next = F.p1300;
}
(*F.p1299) = F.p1300;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1305_Count(void * a_p1306) {
struct yf1307 F;
memset((void *)&F, 0, sizeof F);
F.p1306 = a_p1306;
F.v3898 = INT64_C(0);
F.v3901 = F.p1306;
while ((!(F.v3901 == ((void *)0)))) {
F.v3898 = rt_range(rt_add(F.v3898, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3901 = ((*(yR99 *)rt_nil_check(F.v3901))).f_next;
}
{ rt_int rv3904 = F.v3898;
return rv3904; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1311_TK(void) {
struct yf1312 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv3906 = ((rt_int *)(v1173).p)[y_ix1(v1173, v1279)];
return rv3906; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1316_TV(void) {
struct yf1317 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv3908 = ((rt_int *)(v1175).p)[y_ix1(v1175, v1279)];
return rv3908; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1321_TLn(void) {
struct yf1322 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv3910 = ((rt_int *)(v1177).p)[y_ix1(v1177, v1279)];
return rv3910; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1326_IsAt(rt_int a_p1327, rt_int a_p1328) {
struct yf1329 F;
memset((void *)&F, 0, sizeof F);
F.p1327 = a_p1327;
F.p1328 = a_p1328;
F.v3915 = ((rt_int *)(v1173).p)[y_ix1(v1173, rt_add(v1279, F.p1327))];
{ rt_int rv3918 = (((((F.v3915 == v194)) || ((F.v3915 == v197)))) && ((((rt_int *)(v1175).p)[y_ix1(v1175, rt_add(v1279, F.p1327))] == F.p1328)));
return rv3918; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1333_Is(rt_int a_p1334) {
struct yf1335 F;
memset((void *)&F, 0, sizeof F);
F.p1334 = a_p1334;
{ rt_int rv3922 = yr1326_IsAt(INT64_C(0), F.p1334);
return rv3922; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1339_IsIdAt(rt_int a_p1340) {
struct yf1341 F;
memset((void *)&F, 0, sizeof F);
F.p1340 = a_p1340;
{ rt_int rv3926 = (((rt_int *)(v1173).p)[y_ix1(v1173, rt_add(v1279, F.p1340))] == v191);
return rv3926; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1345_Skip(void) {
struct yf1346 F;
memset((void *)&F, 0, sizeof F);
if ((!(((rt_int *)(v1173).p)[y_ix1(v1173, v1279)] == v188))) {
v1279 = rt_range(rt_add(v1279, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1350_Accept(rt_int a_p1351) {
struct yf1352 F;
memset((void *)&F, 0, sizeof F);
F.p1351 = a_p1351;
if (yr1333_Is(F.p1351)) {
yr1345_Skip();
{ rt_int rv3933 = 1;
return rv3933; }
}
{ rt_int rv3935 = 0;
return rv3935; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1356_TokText(void) {
struct yf1357 F;
memset((void *)&F, 0, sizeof F);
F.v3938 = yr1311_TK();
if ((((((F.v3938 == v191)) || ((F.v3938 == v194))) || ((F.v3938 == v197))) || ((F.v3938 == v209)))) {
{ rt_int rv3939 = rt_range(yr1316_TV(), INT64_C(0), INT64_C(4000000));
return rv3939; }
}
if ((F.v3938 == v188)) {
{ rt_int rv3941 = yr1041_T(y_str("the end of the text", 19));
return rv3941; }
}
if ((F.v3938 == v200)) {
yr1006_SB();
yr1030_SI(yr1316_TV());
{ rt_int rv3942 = yr1036_SE();
return rv3942; }
}
{ rt_int rv3944 = yr1041_T(y_str("a literal", 9));
return rv3944; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1361_Expect(rt_int a_p1362) {
struct yf1363 F;
memset((void *)&F, 0, sizeof F);
F.p1362 = a_p1362;
if ((!yr1350_Accept(F.p1362))) {
yr1006_SB();
yr1017_SA(y_str("expected ", 9));
yr1024_ST(rt_range(F.p1362, INT64_C(0), INT64_C(4000000)));
yr1017_SA(y_str(", found ", 8));
yr1024_ST(yr1356_TokText());
F.v3948 = yr1036_SE();
yr1137_Fail(yr1321_TLn(), F.v3948);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1367_Ident(void) {
struct yf1368 F;
memset((void *)&F, 0, sizeof F);
if ((!(yr1311_TK() == v191))) {
yr1006_SB();
yr1017_SA(y_str("expected an identifier, found ", 30));
yr1024_ST(yr1356_TokText());
F.v3953 = yr1036_SE();
yr1137_Fail(yr1321_TLn(), F.v3953);
}
F.v3953 = rt_range(yr1316_TV(), INT64_C(0), INT64_C(4000000));
yr1345_Skip();
{ rt_int rv3955 = F.v3953;
return rv3955; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1372_CloseName(rt_int a_p1373, rt_int a_p1374) {
struct yf1375 F;
memset((void *)&F, 0, sizeof F);
F.p1373 = a_p1373;
F.p1374 = a_p1374;
if (((((yr1311_TK() == v191)) || ((yr1311_TK() == v194))) || ((yr1311_TK() == v197)))) {
F.v3960 = rt_range(yr1316_TV(), INT64_C(0), INT64_C(4000000));
if ((F.v3960 == F.p1373)) {
yr1345_Skip();
return;
}
}
yr1152_FailN(F.p1374, F.p1373, y_str(" is closed with another name", 28));
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1379_ExtendedId(void) {
struct yf1380 F;
memset((void *)&F, 0, sizeof F);
F.v3964 = rt_range(yr1316_TV(), INT64_C(0), INT64_C(4000000));
if ((yr1311_TK() == v191)) {
yr1345_Skip();
{ rt_int rv3965 = F.v3964;
return rv3965; }
}
if ((((yr1311_TK() == v194)) && (((((((((F.v3964 == v374)) || ((F.v3964 == v221))) || ((F.v3964 == v383))) || ((F.v3964 == v260))) || ((F.v3964 == v362))) || ((F.v3964 == v473))) || ((F.v3964 == v344)))))) {
yr1345_Skip();
{ rt_int rv3966 = F.v3964;
return rv3966; }
}
if (((((((((((((yr1311_TK() == v197)) && ((!(F.v3964 == v578)))) && ((!(F.v3964 == v581)))) && ((!(F.v3964 == v584)))) && ((!(F.v3964 == v587)))) && ((!(F.v3964 == v590)))) && ((!(F.v3964 == v593)))) && ((!(F.v3964 == v596)))) && ((!(F.v3964 == v599)))) && ((!(F.v3964 == v521)))) && ((!(F.v3964 == v518))))) {
yr1345_Skip();
{ rt_int rv3967 = F.v3964;
return rv3967; }
}
yr1144_FailS(yr1321_TLn(), y_str("expected a name", 15));
{ rt_int rv3970 = INT64_C(0);
return rv3970; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1384_IsLabel(rt_int a_p1385) {
struct yf1386 F;
memset((void *)&F, 0, sizeof F);
F.p1385 = a_p1385;
F.v3974 = v1282;
while ((!(F.v3974 == ((void *)0)))) {
if ((((*(yR99 *)rt_nil_check(F.v3974))).f_name == F.p1385)) {
{ rt_int rv3976 = 1;
return rv3976; }
}
F.v3974 = ((*(yR99 *)rt_nil_check(F.v3974))).f_next;
}
{ rt_int rv3978 = 0;
return rv3978; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1390_ImportItem(void) {
struct yf1391 F;
memset((void *)&F, 0, sizeof F);
F.v3981 = yr1290_NewNode(v611, yr1321_TLn());
((*(yR99 *)rt_nil_check(F.v3981))).f_name = yr1379_ExtendedId();
if ((yr1339_IsIdAt(INT64_C(0)) && ((yr1316_TV() == v1284)))) {
yr1345_Skip();
((*(yR99 *)rt_nil_check(F.v3981))).f_text = yr1367_Ident();
}
if (yr1350_Accept(v227)) {
((*(yR99 *)rt_nil_check(F.v3981))).f_ival = yr1379_ExtendedId();
}
{ void * rv3983 = F.v3981;
return rv3983; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1395_ParseModule(void) {
struct yf1396 F;
memset((void *)&F, 0, sizeof F);
F.v3986 = yr1290_NewNode(v608, yr1321_TLn());
F.v3988 = ((void *)0);
F.v3990 = ((void *)0);
F.v3992 = ((void *)0);
if (yr1350_Accept(v368)) {
((*(yR99 *)rt_nil_check(F.v3986))).f_flag = INT64_C(1);
} else {
yr1361_Expect(v365);
}
((*(yR99 *)rt_nil_check(F.v3986))).f_name = yr1367_Ident();
while (yr1350_Accept(v341)) {
for (;;) {
F.v3988 = yr1390_ImportItem();
yr1297_Link(&((*(yR99 *)rt_nil_check(F.v3986))).f_a, &F.v3990, F.v3988);
if ((!yr1350_Accept(v590))) {
goto yl_3996;
}
}
yl_3996: ;
yr1361_Expect(v593);
}
while (yr1350_Accept(v320)) {
F.v3994 = INT64_C(0);
if ((((yr1333_Is(v380) || yr1333_Is(v458)) || yr1333_Is(v413)) || yr1333_Is(v467))) {
F.v3994 = yr1316_TV();
yr1345_Skip();
}
for (;;) {
F.v3988 = yr1390_ImportItem();
((*(yR99 *)rt_nil_check(F.v3988))).f_flag = F.v3994;
yr1297_Link(&((*(yR99 *)rt_nil_check(F.v3986))).f_b, &F.v3992, F.v3988);
if ((!yr1350_Accept(v590))) {
goto yl_3998;
}
}
yl_3998: ;
yr1361_Expect(v593);
}
((*(yR99 *)rt_nil_check(F.v3986))).f_c = yr1405_ParseBlock();
if ((((*(yR99 *)rt_nil_check(F.v3986))).f_flag == INT64_C(1))) {
yr1361_Expect(v293);
} else {
yr1361_Expect(v290);
}
yr1372_CloseName(((*(yR99 *)rt_nil_check(F.v3986))).f_name, ((*(yR99 *)rt_nil_check(F.v3986))).f_line);
{ void * rv4000 = F.v3986;
return rv4000; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1400_IsDeclWord(void) {
struct yf1401 F;
memset((void *)&F, 0, sizeof F);
if ((!(yr1311_TK() == v194))) {
{ rt_int rv4005 = 0;
return rv4005; }
}
F.v4003 = yr1316_TV();
{ rt_int rv4006 = (((((((((((((F.v4003 == v254)) || ((F.v4003 == v467))) || ((F.v4003 == v356))) || ((F.v4003 == v461))) || ((F.v4003 == v422))) || ((F.v4003 == v332))) || ((F.v4003 == v404))) || ((F.v4003 == v365))) || ((F.v4003 == v368))) || ((F.v4003 == v449))) || ((F.v4003 == v350))) || ((F.v4003 == v407)));
return rv4006; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1405_ParseBlock(void) {
struct yf1406 F;
memset((void *)&F, 0, sizeof F);
F.v4009 = yr1290_NewNode(v614, yr1321_TLn());
F.v4011 = ((void *)0);
F.v4013 = v1282;
while (yr1400_IsDeclWord()) {
yr1432_ParseDeclGroup(&((*(yR99 *)rt_nil_check(F.v4009))).f_a, &F.v4011);
while (yr1350_Accept(v593)) {
}
}
if (yr1333_Is(v314)) {
((*(yR99 *)rt_nil_check(F.v4009))).f_b = yr1410_ParseHandler();
F.v4015 = ((*(yR99 *)rt_nil_check(F.v4009))).f_b;
if (yr1350_Accept(v593)) {
}
}
((*(yR99 *)rt_nil_check(F.v4009))).f_c = yr1496_ParseStatements(1);
v1282 = F.v4013;
{ void * rv4017 = F.v4009;
return rv4017; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1410_ParseHandler(void) {
struct yf1411 F;
memset((void *)&F, 0, sizeof F);
F.v4020 = yr1290_NewNode(v617, yr1321_TLn());
F.v4022 = ((void *)0);
F.v4024 = ((void *)0);
F.v4026 = ((void *)0);
F.v4028 = ((void *)0);
yr1361_Expect(v314);
while (yr1350_Accept(v251)) {
F.v4022 = yr1290_NewNode(v620, yr1321_TLn());
F.v4028 = ((void *)0);
for (;;) {
F.v4026 = yr1290_NewNode(v653, yr1321_TLn());
((*(yR99 *)rt_nil_check(F.v4026))).f_name = yr1367_Ident();
yr1297_Link(&((*(yR99 *)rt_nil_check(F.v4022))).f_a, &F.v4028, F.v4026);
if ((!yr1350_Accept(v590))) {
goto yl_4029;
}
}
yl_4029: ;
yr1361_Expect(v518);
((*(yR99 *)rt_nil_check(F.v4022))).f_b = yr1496_ParseStatements(0);
yr1297_Link(&((*(yR99 *)rt_nil_check(F.v4020))).f_a, &F.v4024, F.v4022);
}
if (yr1350_Accept(v266)) {
((*(yR99 *)rt_nil_check(F.v4020))).f_flag = INT64_C(1);
((*(yR99 *)rt_nil_check(F.v4020))).f_b = yr1496_ParseStatements(0);
}
yr1361_Expect(v275);
{ void * rv4033 = F.v4020;
return rv4033; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1415_ParseNames(void) {
struct yf1416 F;
memset((void *)&F, 0, sizeof F);
F.v4036 = ((void *)0);
F.v4038 = ((void *)0);
F.v4040 = ((void *)0);
for (;;) {
F.v4040 = yr1290_NewNode(v653, yr1321_TLn());
((*(yR99 *)rt_nil_check(F.v4040))).f_name = yr1367_Ident();
if (yr1350_Accept(v233)) {
((*(yR99 *)rt_nil_check(F.v4040))).f_a = yr1558_ParseExpr();
}
yr1297_Link(&F.v4036, &F.v4038, F.v4040);
if ((!yr1350_Accept(v590))) {
goto yl_4041;
}
}
yl_4041: ;
{ void * rv4042 = F.v4036;
return rv4042; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1420_SimpleEntry(rt_int a_p1421) {
struct yf1422 F;
memset((void *)&F, 0, sizeof F);
F.p1421 = a_p1421;
if ((F.p1421 == v254)) {
F.v4046 = yr1290_NewNode(v623, yr1321_TLn());
((*(yR99 *)rt_nil_check(F.v4046))).f_a = yr1415_ParseNames();
yr1361_Expect(v596);
((*(yR99 *)rt_nil_check(F.v4046))).f_b = yr1461_ParseRep();
yr1361_Expect(v569);
((*(yR99 *)rt_nil_check(F.v4046))).f_c = yr1558_ParseExpr();
} else if ((F.p1421 == v467)) {
F.v4046 = yr1290_NewNode(v626, yr1321_TLn());
((*(yR99 *)rt_nil_check(F.v4046))).f_a = yr1415_ParseNames();
yr1361_Expect(v596);
((*(yR99 *)rt_nil_check(F.v4046))).f_b = yr1461_ParseRep();
if (yr1350_Accept(v515)) {
((*(yR99 *)rt_nil_check(F.v4046))).f_c = yr1558_ParseExpr();
}
} else if ((F.p1421 == v461)) {
F.v4046 = yr1290_NewNode(v632, yr1321_TLn());
((*(yR99 *)rt_nil_check(F.v4046))).f_name = yr1367_Ident();
yr1361_Expect(v569);
((*(yR99 *)rt_nil_check(F.v4046))).f_b = yr1481_ParseConcrete1();
} else {
F.v4046 = yr1290_NewNode(v635, yr1321_TLn());
((*(yR99 *)rt_nil_check(F.v4046))).f_name = yr1367_Ident();
yr1361_Expect(v569);
((*(yR99 *)rt_nil_check(F.v4046))).f_b = yr1461_ParseRep();
}
{ void * rv4047 = F.v4046;
return rv4047; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1426_Continues(rt_int a_p1427) {
struct yf1428 F;
memset((void *)&F, 0, sizeof F);
F.p1427 = a_p1427;
if ((!((yr1333_Is(v593) && yr1339_IsIdAt(INT64_C(1)))))) {
{ rt_int rv4052 = 0;
return rv4052; }
}
if (yr1384_IsLabel(rt_range(((rt_int *)(v1175).p)[y_ix1(v1175, rt_add(v1279, INT64_C(1)))], INT64_C(0), INT64_C(4000000)))) {
{ rt_int rv4056 = 0;
return rv4056; }
}
if ((((F.p1427 == v254)) || ((F.p1427 == v467)))) {
{ rt_int rv4060 = ((yr1326_IsAt(INT64_C(2), v590) || yr1326_IsAt(INT64_C(2), v596)) || yr1326_IsAt(INT64_C(2), v233));
return rv4060; }
}
{ rt_int rv4062 = yr1326_IsAt(INT64_C(2), v569);
return rv4062; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1432_ParseDeclGroup(void * * a_p1433, void * * a_p1434) {
struct yf1435 F;
memset((void *)&F, 0, sizeof F);
F.p1433 = a_p1433;
F.p1434 = a_p1434;
F.v4067 = yr1316_TV();
if ((((((F.v4067 == v254)) || ((F.v4067 == v467))) || ((F.v4067 == v461))) || ((F.v4067 == v422)))) {
yr1345_Skip();
yr1297_Link(&(*F.p1433), &(*F.p1434), yr1420_SimpleEntry(F.v4067));
while (yr1426_Continues(F.v4067)) {
yr1345_Skip();
yr1297_Link(&(*F.p1433), &(*F.p1434), yr1420_SimpleEntry(F.v4067));
}
return;
}
if ((F.v4067 == v356)) {
F.v4069 = yr1290_NewNode(v629, yr1321_TLn());
yr1345_Skip();
F.v4073 = ((void *)0);
for (;;) {
F.v4071 = yr1290_NewNode(v653, yr1321_TLn());
((*(yR99 *)rt_nil_check(F.v4071))).f_name = yr1367_Ident();
yr1297_Link(&((*(yR99 *)rt_nil_check(F.v4069))).f_a, &F.v4073, F.v4071);
if ((!yr1350_Accept(v590))) {
goto yl_4074;
}
}
yl_4074: ;
F.v4071 = ((*(yR99 *)rt_nil_check(F.v4069))).f_a;
while ((!(F.v4071 == ((void *)0)))) {
((*(yR99 *)rt_nil_check(F.v4069))).f_b = yr1290_NewNode(v653, ((*(yR99 *)rt_nil_check(F.v4071))).f_line);
((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v4069))).f_b))).f_name = ((*(yR99 *)rt_nil_check(F.v4071))).f_name;
((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v4069))).f_b))).f_next = v1282;
v1282 = ((*(yR99 *)rt_nil_check(F.v4069))).f_b;
F.v4071 = ((*(yR99 *)rt_nil_check(F.v4071))).f_next;
}
((*(yR99 *)rt_nil_check(F.v4069))).f_b = ((void *)0);
yr1297_Link(&(*F.p1433), &(*F.p1434), F.v4069);
return;
}
yr1297_Link(&(*F.p1433), &(*F.p1434), yr1439_ParseDecl());
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1439_ParseDecl(void) {
struct yf1440 F;
memset((void *)&F, 0, sizeof F);
F.v4083 = yr1316_TV();
F.v4085 = yr1321_TLn();
if ((((F.v4083 == v332)) || ((F.v4083 == v404)))) {
F.v4077 = yr1290_NewNode(v638, F.v4085);
yr1345_Skip();
if ((F.v4083 == v332)) {
((*(yR99 *)rt_nil_check(F.v4077))).f_flag = INT64_C(1);
}
if ((yr1333_Is(v323) || yr1333_Is(v419))) {
((*(yR99 *)rt_nil_check(F.v4077))).f_ival = yr1316_TV();
yr1345_Skip();
}
((*(yR99 *)rt_nil_check(F.v4077))).f_name = yr1379_ExtendedId();
yr1444_ParseFormals(F.v4077);
if (yr1350_Accept(v347)) {
((*(yR99 *)rt_nil_check(F.v4077))).f_e = yr1290_NewNode(v653, F.v4085);
}
((*(yR99 *)rt_nil_check(F.v4077))).f_c = yr1405_ParseBlock();
if ((F.v4083 == v332)) {
yr1361_Expect(v281);
} else {
yr1361_Expect(v296);
}
yr1372_CloseName(((*(yR99 *)rt_nil_check(F.v4077))).f_name, F.v4085);
{ void * rv4089 = F.v4077;
return rv4089; }
}
if ((((F.v4083 == v365)) || ((F.v4083 == v368)))) {
{ void * rv4090 = yr1395_ParseModule();
return rv4090; }
}
if ((F.v4083 == v449)) {
F.v4077 = yr1290_NewNode(v644, F.v4085);
yr1345_Skip();
((*(yR99 *)rt_nil_check(F.v4077))).f_name = yr1367_Ident();
yr1361_Expect(v578);
F.v4081 = ((void *)0);
for (;;) {
F.v4079 = yr1290_NewNode(v653, yr1321_TLn());
((*(yR99 *)rt_nil_check(F.v4079))).f_name = yr1367_Ident();
yr1297_Link(&((*(yR99 *)rt_nil_check(F.v4077))).f_a, &F.v4081, F.v4079);
if ((!yr1350_Accept(v590))) {
goto yl_4091;
}
}
yl_4091: ;
yr1361_Expect(v581);
F.v4087 = v1279;
((*(yR99 *)rt_nil_check(F.v4077))).f_b = yr1395_ParseModule();
((*(yR99 *)rt_nil_check(F.v4077))).f_ival = F.v4087;
((*(yR99 *)rt_nil_check(F.v4077))).f_flag = v1279;
yr1361_Expect(v308);
yr1372_CloseName(((*(yR99 *)rt_nil_check(F.v4077))).f_name, F.v4085);
{ void * rv4092 = F.v4077;
return rv4092; }
}
if ((F.v4083 == v350)) {
F.v4077 = yr1290_NewNode(v647, F.v4085);
yr1345_Skip();
((*(yR99 *)rt_nil_check(F.v4077))).f_name = yr1367_Ident();
yr1361_Expect(v578);
F.v4081 = ((void *)0);
for (;;) {
F.v4079 = yr1290_NewNode(v653, yr1321_TLn());
if ((yr1311_TK() == v200)) {
((*(yR99 *)rt_nil_check(F.v4079))).f_flag = INT64_C(1);
((*(yR99 *)rt_nil_check(F.v4079))).f_ival = yr1316_TV();
yr1345_Skip();
} else {
((*(yR99 *)rt_nil_check(F.v4079))).f_name = yr1379_ExtendedId();
}
yr1297_Link(&((*(yR99 *)rt_nil_check(F.v4077))).f_a, &F.v4081, F.v4079);
if ((!yr1350_Accept(v590))) {
goto yl_4093;
}
}
yl_4093: ;
yr1361_Expect(v581);
{ void * rv4095 = F.v4077;
return rv4095; }
}
if ((F.v4083 == v407)) {
F.v4077 = yr1290_NewNode(v650, F.v4085);
yr1345_Skip();
((*(yR99 *)rt_nil_check(F.v4077))).f_name = yr1367_Ident();
yr1444_ParseFormals(F.v4077);
if ((!(((*(yR99 *)rt_nil_check(F.v4077))).f_b == ((void *)0)))) {
yr1144_FailS(F.v4085, y_str("a process returns no value", 26));
}
if (yr1350_Accept(v401)) {
((*(yR99 *)rt_nil_check(F.v4077))).f_d = yr1558_ParseExpr();
}
if (yr1350_Accept(v353)) {
((*(yR99 *)rt_nil_check(F.v4077))).f_e = yr1558_ParseExpr();
}
if (yr1350_Accept(v443)) {
F.v4079 = yr1558_ParseExpr();
}
((*(yR99 *)rt_nil_check(F.v4077))).f_c = yr1405_ParseBlock();
yr1361_Expect(v299);
yr1372_CloseName(((*(yR99 *)rt_nil_check(F.v4077))).f_name, F.v4085);
{ void * rv4097 = F.v4077;
return rv4097; }
}
yr1144_FailS(F.v4085, y_str("expected a declaration", 22));
{ void * rv4099 = ((void *)0);
return rv4099; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1444_ParseFormals(void * a_p1445) {
struct yf1446 F;
memset((void *)&F, 0, sizeof F);
F.p1445 = a_p1445;
F.v4103 = ((void *)0);
F.v4105 = ((void *)0);
if (yr1350_Accept(v428)) {
((*(yR99 *)rt_nil_check(F.p1445))).f_b = yr1461_ParseRep();
}
yr1361_Expect(v578);
while ((!yr1333_Is(v581))) {
if (yr1350_Accept(v254)) {
F.v4107 = v881;
} else if (yr1350_Accept(v389)) {
F.v4107 = v884;
} else if (yr1350_Accept(v467)) {
F.v4107 = v887;
} else {
yr1144_FailS(yr1321_TLn(), y_str("a formal parameter is CONST, OUT or VAR", 39));
}
for (;;) {
F.v4103 = yr1290_NewNode(v641, yr1321_TLn());
((*(yR99 *)rt_nil_check(F.v4103))).f_ival = F.v4107;
((*(yR99 *)rt_nil_check(F.v4103))).f_a = yr1415_ParseNames();
yr1361_Expect(v596);
((*(yR99 *)rt_nil_check(F.v4103))).f_b = yr1450_ParseFormalRep();
yr1297_Link(&((*(yR99 *)rt_nil_check(F.p1445))).f_a, &F.v4105, F.v4103);
if ((!((((yr1333_Is(v593) || yr1333_Is(v590))) && yr1339_IsIdAt(INT64_C(1)))))) {
goto yl_4109;
}
yr1345_Skip();
}
yl_4109: ;
if ((!yr1350_Accept(v593))) {
if ((!yr1350_Accept(v590))) {
yr1361_Expect(v581);
return;
}
}
}
yr1361_Expect(v581);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1450_ParseFormalRep(void) {
struct yf1451 F;
memset((void *)&F, 0, sizeof F);
if (((yr1333_Is(v224) && yr1326_IsAt(INT64_C(1), v578)) && ((yr1326_IsAt(INT64_C(3), v257) || ((yr1339_IsIdAt(INT64_C(3)) && ((((rt_int *)(v1175).p)[y_ix1(v1175, rt_add(v1279, INT64_C(3)))] == v1287)))))))) {
F.v4113 = yr1290_NewNode(v680, yr1321_TLn());
yr1345_Skip();
yr1345_Skip();
((*(yR99 *)rt_nil_check(F.v4113))).f_a = yr1558_ParseExpr();
yr1345_Skip();
yr1361_Expect(v377);
((*(yR99 *)rt_nil_check(F.v4113))).f_b = yr1461_ParseRep();
yr1361_Expect(v581);
{ void * rv4119 = F.v4113;
return rv4119; }
}
if (yr1333_Is(v446)) {
F.v4113 = yr1290_NewNode(v683, yr1321_TLn());
yr1345_Skip();
{ void * rv4120 = F.v4113;
return rv4120; }
}
{ void * rv4121 = yr1461_ParseRep();
return rv4121; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1455_IsStructWord(rt_int a_p1456) {
struct yf1457 F;
memset((void *)&F, 0, sizeof F);
F.p1456 = a_p1456;
F.v4125 = ((rt_int *)(v1175).p)[y_ix1(v1175, rt_add(v1279, F.p1456))];
if ((!(((rt_int *)(v1173).p)[y_ix1(v1173, rt_add(v1279, F.p1456))] == v194))) {
{ rt_int rv4129 = 0;
return rv4129; }
}
{ rt_int rv4130 = (((((((((F.v4125 == v464)) || ((F.v4125 == v386))) || ((F.v4125 == v218))) || ((F.v4125 == v224))) || ((F.v4125 == v416))) || ((F.v4125 == v326))) || ((F.v4125 == v395))) || ((F.v4125 == v437)));
return rv4130; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1461_ParseRep(void) {
struct yf1462 F;
memset((void *)&F, 0, sizeof F);
if ((yr1339_IsIdAt(INT64_C(0)) && ((yr1455_IsStructWord(INT64_C(1)) || ((yr1339_IsIdAt(INT64_C(1)) && yr1326_IsAt(INT64_C(2), v584))))))) {
F.v4133 = yr1367_Ident();
F.v4135 = yr1466_ParseConcrete();
((*(yR99 *)rt_nil_check(F.v4135))).f_text = F.v4133;
{ void * rv4140 = F.v4135;
return rv4140; }
}
{ void * rv4141 = yr1466_ParseConcrete();
return rv4141; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1466_ParseConcrete(void) {
struct yf1467 F;
memset((void *)&F, 0, sizeof F);
F.v4144 = yr1481_ParseConcrete1();
if (yr1350_Accept(v392)) {
if (((((yr1311_TK() == v200)) || ((yr1311_TK() == v191))) || yr1333_Is(v578))) {
F.v4146 = yr1563_ParseSimple();
}
}
if (yr1350_Accept(v215)) {
F.v4146 = yr1563_ParseSimple();
}
{ void * rv4147 = F.v4144;
return rv4147; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1471_ParseIds(void) {
struct yf1472 F;
memset((void *)&F, 0, sizeof F);
F.v4150 = ((void *)0);
F.v4152 = ((void *)0);
F.v4154 = ((void *)0);
for (;;) {
F.v4154 = yr1290_NewNode(v653, yr1321_TLn());
((*(yR99 *)rt_nil_check(F.v4154))).f_name = yr1367_Ident();
yr1297_Link(&F.v4150, &F.v4152, F.v4154);
if ((!yr1350_Accept(v590))) {
goto yl_4155;
}
}
yl_4155: ;
{ void * rv4156 = F.v4150;
return rv4156; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1476_ParseFieldGroups(void) {
struct yf1477 F;
memset((void *)&F, 0, sizeof F);
F.v4159 = ((void *)0);
F.v4161 = ((void *)0);
F.v4163 = ((void *)0);
while ((yr1333_Is(v254) || yr1333_Is(v467))) {
F.v4165 = yr1316_TV();
yr1345_Skip();
for (;;) {
F.v4163 = yr1290_NewNode(v689, yr1321_TLn());
((*(yR99 *)rt_nil_check(F.v4163))).f_ival = F.v4165;
((*(yR99 *)rt_nil_check(F.v4163))).f_a = yr1415_ParseNames();
yr1361_Expect(v596);
((*(yR99 *)rt_nil_check(F.v4163))).f_b = yr1461_ParseRep();
yr1297_Link(&F.v4159, &F.v4161, F.v4163);
if ((!((yr1333_Is(v593) && yr1339_IsIdAt(INT64_C(1)))))) {
goto yl_4166;
}
yr1345_Skip();
}
yl_4166: ;
if ((!yr1350_Accept(v593))) {
{ void * rv4168 = F.v4159;
return rv4168; }
}
}
{ void * rv4169 = F.v4159;
return rv4169; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1481_ParseConcrete1(void) {
struct yf1482 F;
memset((void *)&F, 0, sizeof F);
F.v4186 = yr1321_TLn();
if ((yr1311_TK() == v191)) {
F.v4172 = yr1290_NewNode(v656, F.v4186);
((*(yR99 *)rt_nil_check(F.v4172))).f_name = yr1367_Ident();
((*(yR99 *)rt_nil_check(F.v4172))).f_a = yr1486_ParseQualifier();
{ void * rv4187 = F.v4172;
return rv4187; }
}
if ((!(yr1311_TK() == v194))) {
yr1144_FailS(F.v4186, y_str("expected a representation", 25));
}
F.v4184 = yr1316_TV();
if ((((F.v4184 == v464)) || ((F.v4184 == v386)))) {
F.v4172 = yr1290_NewNode(v659, F.v4186);
if ((F.v4184 == v386)) {
((*(yR99 *)rt_nil_check(F.v4172))).f_flag = INT64_C(1);
}
yr1345_Skip();
yr1361_Expect(v578);
((*(yR99 *)rt_nil_check(F.v4172))).f_a = yr1471_ParseIds();
yr1361_Expect(v581);
((*(yR99 *)rt_nil_check(F.v4172))).f_b = yr1486_ParseQualifier();
{ void * rv4190 = F.v4172;
return rv4190; }
}
if ((F.v4184 == v218)) {
F.v4172 = yr1290_NewNode(v662, F.v4186);
yr1345_Skip();
yr1361_Expect(v578);
F.v4182 = ((void *)0);
for (;;) {
if ((!(yr1311_TK() == v209))) {
yr1144_FailS(yr1321_TLn(), y_str("an ALPHABET lists character literals", 36));
}
F.v4180 = yr1290_NewNode(v752, yr1321_TLn());
((*(yR99 *)rt_nil_check(F.v4180))).f_text = rt_range(yr1316_TV(), INT64_C(0), INT64_C(4000000));
yr1345_Skip();
yr1297_Link(&((*(yR99 *)rt_nil_check(F.v4172))).f_a, &F.v4182, F.v4180);
if ((!yr1350_Accept(v590))) {
goto yl_4191;
}
}
yl_4191: ;
yr1361_Expect(v581);
((*(yR99 *)rt_nil_check(F.v4172))).f_b = yr1486_ParseQualifier();
{ void * rv4193 = F.v4172;
return rv4193; }
}
if ((F.v4184 == v224)) {
F.v4172 = yr1290_NewNode(v665, F.v4186);
yr1345_Skip();
yr1361_Expect(v578);
F.v4182 = ((void *)0);
for (;;) {
yr1297_Link(&((*(yR99 *)rt_nil_check(F.v4172))).f_a, &F.v4182, yr1461_ParseRep());
if ((!yr1350_Accept(v590))) {
goto yl_4194;
}
}
yl_4194: ;
yr1361_Expect(v377);
((*(yR99 *)rt_nil_check(F.v4172))).f_b = yr1461_ParseRep();
yr1361_Expect(v581);
{ void * rv4195 = F.v4172;
return rv4195; }
}
if ((F.v4184 == v416)) {
F.v4172 = yr1290_NewNode(v668, F.v4186);
yr1345_Skip();
((*(yR99 *)rt_nil_check(F.v4172))).f_a = yr1476_ParseFieldGroups();
if (yr1350_Accept(v434)) {
F.v4174 = yr1290_NewNode(v692, yr1321_TLn());
((*(yR99 *)rt_nil_check(F.v4174))).f_name = yr1367_Ident();
yr1361_Expect(v596);
((*(yR99 *)rt_nil_check(F.v4174))).f_b = yr1461_ParseRep();
F.v4178 = ((void *)0);
while (yr1350_Accept(v251)) {
F.v4176 = yr1290_NewNode(v695, yr1321_TLn());
F.v4182 = ((void *)0);
for (;;) {
yr1297_Link(&((*(yR99 *)rt_nil_check(F.v4176))).f_a, &F.v4182, yr1558_ParseExpr());
if ((!yr1350_Accept(v590))) {
goto yl_4196;
}
}
yl_4196: ;
yr1361_Expect(v518);
((*(yR99 *)rt_nil_check(F.v4176))).f_b = yr1476_ParseFieldGroups();
while (yr1350_Accept(v593)) {
}
yr1297_Link(&((*(yR99 *)rt_nil_check(F.v4174))).f_a, &F.v4178, F.v4176);
}
yr1361_Expect(v305);
if (yr1350_Accept(v593)) {
}
((*(yR99 *)rt_nil_check(F.v4172))).f_b = F.v4174;
}
yr1361_Expect(v302);
{ void * rv4197 = F.v4172;
return rv4197; }
}
if (((((F.v4184 == v326)) || ((F.v4184 == v395))) || ((F.v4184 == v437)))) {
if ((F.v4184 == v326)) {
F.v4172 = yr1290_NewNode(v671, F.v4186);
} else if ((F.v4184 == v395)) {
F.v4172 = yr1290_NewNode(v674, F.v4186);
} else {
F.v4172 = yr1290_NewNode(v677, F.v4186);
}
yr1345_Skip();
yr1361_Expect(v578);
((*(yR99 *)rt_nil_check(F.v4172))).f_a = yr1461_ParseRep();
yr1361_Expect(v581);
{ void * rv4198 = F.v4172;
return rv4198; }
}
yr1144_FailS(F.v4186, y_str("expected a representation", 25));
{ void * rv4200 = ((void *)0);
return rv4200; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1486_ParseQualifier(void) {
struct yf1487 F;
memset((void *)&F, 0, sizeof F);
if ((!yr1333_Is(v584))) {
{ void * rv4204 = ((void *)0);
return rv4204; }
}
F.v4203 = yr1290_NewNode(v686, yr1321_TLn());
yr1345_Skip();
((*(yR99 *)rt_nil_check(F.v4203))).f_a = yr1558_ParseExpr();
yr1361_Expect(v521);
((*(yR99 *)rt_nil_check(F.v4203))).f_b = yr1558_ParseExpr();
yr1361_Expect(v587);
if (yr1350_Accept(v431)) {
((*(yR99 *)rt_nil_check(F.v4203))).f_c = yr1563_ParseSimple();
} else if (yr1350_Accept(v398)) {
((*(yR99 *)rt_nil_check(F.v4203))).f_d = yr1563_ParseSimple();
}
{ void * rv4205 = F.v4203;
return rv4205; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1491_IsStop(void) {
struct yf1492 F;
memset((void *)&F, 0, sizeof F);
if ((yr1311_TK() == v188)) {
{ rt_int rv4210 = 1;
return rv4210; }
}
if ((!(yr1311_TK() == v194))) {
{ rt_int rv4212 = 0;
return rv4212; }
}
F.v4208 = yr1316_TV();
{ rt_int rv4213 = ((((((((((((((((F.v4208 == v269)) || ((F.v4208 == v266))) || ((F.v4208 == v284))) || ((F.v4208 == v251))) || ((F.v4208 == v305))) || ((F.v4208 == v311))) || ((F.v4208 == v278))) || ((F.v4208 == v287))) || ((F.v4208 == v272))) || ((F.v4208 == v275))) || ((F.v4208 == v296))) || ((F.v4208 == v281))) || ((F.v4208 == v299))) || ((F.v4208 == v290))) || ((F.v4208 == v293)));
return rv4213; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1496_ParseStatements(rt_int a_p1497) {
struct yf1498 F;
memset((void *)&F, 0, sizeof F);
F.p1497 = a_p1497;
F.v4217 = ((void *)0);
F.v4219 = ((void *)0);
F.v4221 = ((void *)0);
for (;;) {
while (yr1350_Accept(v593)) {
}
if (yr1491_IsStop()) {
goto yl_4224;
}
F.v4223 = INT64_C(0);
if (((F.p1497 && yr1339_IsIdAt(INT64_C(0))) && yr1326_IsAt(INT64_C(1), v596))) {
F.v4223 = yr1367_Ident();
yr1345_Skip();
}
F.v4221 = yr1502_ParseStatement();
((*(yR99 *)rt_nil_check(F.v4221))).f_text = F.v4223;
yr1297_Link(&F.v4217, &F.v4219, F.v4221);
if ((!yr1333_Is(v593))) {
goto yl_4224;
}
}
yl_4224: ;
{ void * rv4228 = F.v4217;
return rv4228; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1502_ParseStatement(void) {
struct yf1503 F;
memset((void *)&F, 0, sizeof F);
F.v4245 = yr1321_TLn();
if ((yr1311_TK() == v194)) {
F.v4243 = yr1316_TV();
if ((F.v4243 == v230)) {
yr1345_Skip();
F.v4231 = yr1290_NewNode(v704, F.v4245);
((*(yR99 *)rt_nil_check(F.v4231))).f_a = yr1558_ParseExpr();
{ void * rv4246 = F.v4231;
return rv4246; }
}
if ((F.v4243 == v335)) {
yr1345_Skip();
F.v4231 = yr1290_NewNode(v707, F.v4245);
((*(yR99 *)rt_nil_check(F.v4231))).f_name = yr1367_Ident();
{ void * rv4247 = F.v4231;
return rv4247; }
}
if ((F.v4243 == v317)) {
yr1345_Skip();
F.v4231 = yr1290_NewNode(v710, F.v4245);
((*(yR99 *)rt_nil_check(F.v4231))).f_name = yr1367_Ident();
{ void * rv4248 = F.v4231;
return rv4248; }
}
if ((F.v4243 == v425)) {
yr1345_Skip();
F.v4231 = yr1290_NewNode(v713, F.v4245);
if ((!((yr1333_Is(v593) || yr1491_IsStop())))) {
((*(yR99 *)rt_nil_check(F.v4231))).f_a = yr1558_ParseExpr();
}
{ void * rv4249 = F.v4231;
return rv4249; }
}
if ((F.v4243 == v452)) {
yr1345_Skip();
{ void * rv4250 = yr1290_NewNode(v716, F.v4245);
return rv4250; }
}
if ((F.v4243 == v410)) {
yr1345_Skip();
F.v4231 = yr1290_NewNode(v719, F.v4245);
if (yr1339_IsIdAt(INT64_C(0))) {
((*(yR99 *)rt_nil_check(F.v4231))).f_name = yr1367_Ident();
}
{ void * rv4252 = F.v4231;
return rv4252; }
}
if ((F.v4243 == v338)) {
yr1345_Skip();
F.v4231 = yr1290_NewNode(v722, F.v4245);
F.v4235 = ((void *)0);
F.v4233 = yr1290_NewNode(v740, F.v4245);
((*(yR99 *)rt_nil_check(F.v4233))).f_a = yr1558_ParseExpr();
yr1361_Expect(v455);
((*(yR99 *)rt_nil_check(F.v4233))).f_b = yr1496_ParseStatements(0);
yr1297_Link(&((*(yR99 *)rt_nil_check(F.v4231))).f_a, &F.v4235, F.v4233);
while (yr1333_Is(v269)) {
F.v4233 = yr1290_NewNode(v740, yr1321_TLn());
yr1345_Skip();
((*(yR99 *)rt_nil_check(F.v4233))).f_a = yr1558_ParseExpr();
yr1361_Expect(v455);
((*(yR99 *)rt_nil_check(F.v4233))).f_b = yr1496_ParseStatements(0);
yr1297_Link(&((*(yR99 *)rt_nil_check(F.v4231))).f_a, &F.v4235, F.v4233);
}
if (yr1350_Accept(v266)) {
((*(yR99 *)rt_nil_check(F.v4231))).f_flag = INT64_C(1);
((*(yR99 *)rt_nil_check(F.v4231))).f_b = yr1496_ParseStatements(0);
}
yr1361_Expect(v284);
{ void * rv4257 = F.v4231;
return rv4257; }
}
if ((F.v4243 == v434)) {
yr1345_Skip();
F.v4231 = yr1290_NewNode(v725, F.v4245);
((*(yR99 *)rt_nil_check(F.v4231))).f_a = yr1558_ParseExpr();
F.v4235 = ((void *)0);
while (yr1333_Is(v251)) {
F.v4233 = yr1290_NewNode(v740, yr1321_TLn());
yr1345_Skip();
F.v4239 = ((void *)0);
for (;;) {
yr1297_Link(&((*(yR99 *)rt_nil_check(F.v4233))).f_a, &F.v4239, yr1558_ParseExpr());
if ((!yr1350_Accept(v590))) {
goto yl_4258;
}
}
yl_4258: ;
yr1361_Expect(v518);
((*(yR99 *)rt_nil_check(F.v4233))).f_b = yr1496_ParseStatements(0);
yr1297_Link(&((*(yR99 *)rt_nil_check(F.v4231))).f_b, &F.v4235, F.v4233);
}
if (yr1350_Accept(v266)) {
((*(yR99 *)rt_nil_check(F.v4231))).f_flag = INT64_C(1);
((*(yR99 *)rt_nil_check(F.v4231))).f_c = yr1496_ParseStatements(0);
}
yr1361_Expect(v305);
{ void * rv4262 = F.v4231;
return rv4262; }
}
if ((F.v4243 == v470)) {
yr1345_Skip();
F.v4231 = yr1290_NewNode(v728, F.v4245);
((*(yR99 *)rt_nil_check(F.v4231))).f_a = yr1558_ParseExpr();
yr1361_Expect(v263);
((*(yR99 *)rt_nil_check(F.v4231))).f_b = yr1496_ParseStatements(0);
yr1361_Expect(v311);
{ void * rv4264 = F.v4231;
return rv4264; }
}
if ((F.v4243 == v329)) {
yr1345_Skip();
F.v4231 = yr1290_NewNode(v731, F.v4245);
((*(yR99 *)rt_nil_check(F.v4231))).f_name = yr1367_Ident();
yr1361_Expect(v596);
((*(yR99 *)rt_nil_check(F.v4231))).f_a = yr1461_ParseRep();
yr1361_Expect(v263);
((*(yR99 *)rt_nil_check(F.v4231))).f_b = yr1496_ParseStatements(0);
yr1361_Expect(v278);
{ void * rv4266 = F.v4231;
return rv4266; }
}
if ((F.v4243 == v359)) {
yr1345_Skip();
F.v4231 = yr1290_NewNode(v734, F.v4245);
((*(yR99 *)rt_nil_check(F.v4231))).f_name = yr1367_Ident();
((*(yR99 *)rt_nil_check(F.v4231))).f_b = yr1496_ParseStatements(0);
yr1361_Expect(v287);
yr1372_CloseName(((*(yR99 *)rt_nil_check(F.v4231))).f_name, F.v4245);
{ void * rv4268 = F.v4231;
return rv4268; }
}
if ((((F.v4243 == v248)) || ((F.v4243 == v440)))) {
F.v4231 = yr1290_NewNode(v737, F.v4245);
if (yr1350_Accept(v440)) {
((*(yR99 *)rt_nil_check(F.v4231))).f_flag = INT64_C(1);
}
yr1361_Expect(v248);
((*(yR99 *)rt_nil_check(F.v4231))).f_a = yr1405_ParseBlock();
yr1361_Expect(v272);
{ void * rv4270 = F.v4231;
return rv4270; }
}
}
F.v4241 = yr1589_ParseDesignator();
if (yr1350_Accept(v515)) {
F.v4231 = yr1290_NewNode(v698, F.v4245);
((*(yR99 *)rt_nil_check(F.v4231))).f_a = F.v4241;
((*(yR99 *)rt_nil_check(F.v4231))).f_b = yr1558_ParseExpr();
{ void * rv4271 = F.v4231;
return rv4271; }
}
if ((!(((*(yR99 *)rt_nil_check(F.v4241))).f_kind == v764))) {
yr1144_FailS(F.v4245, y_str("expected a statement", 20));
}
F.v4231 = yr1290_NewNode(v701, F.v4245);
((*(yR99 *)rt_nil_check(F.v4231))).f_a = F.v4241;
{ void * rv4273 = F.v4231;
return rv4273; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1507_OpAt(void) {
struct yf1508 F;
memset((void *)&F, 0, sizeof F);
if ((((yr1311_TK() == v197)) || ((yr1311_TK() == v194)))) {
{ rt_int rv4275 = rt_range(yr1316_TV(), INT64_C(0), INT64_C(4000000));
return rv4275; }
}
{ rt_int rv4277 = INT64_C(0);
return rv4277; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1512_IsRel(rt_int a_p1513) {
struct yf1514 F;
memset((void *)&F, 0, sizeof F);
F.p1513 = a_p1513;
{ rt_int rv4280 = ((((((((((((((((((((F.p1513 == v344)) || ((F.p1513 == v554))) || ((F.p1513 == v569))) || ((F.p1513 == v572))) || ((F.p1513 == v524))) || ((F.p1513 == v575))) || ((F.p1513 == v527))) || ((F.p1513 == v530))) || ((F.p1513 == v485))) || ((F.p1513 == v533))) || ((F.p1513 == v488))) || ((F.p1513 == v536))) || ((F.p1513 == v497))) || ((F.p1513 == v491))) || ((F.p1513 == v479))) || ((F.p1513 == v539))) || ((F.p1513 == v500))) || ((F.p1513 == v494))) || ((F.p1513 == v482)));
return rv4280; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1518_IsAssocMul(rt_int a_p1519) {
struct yf1520 F;
memset((void *)&F, 0, sizeof F);
F.p1519 = a_p1519;
{ rt_int rv4283 = (((F.p1519 == v563)) || ((F.p1519 == v221)));
return rv4283; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1524_IsNonAssocMul(rt_int a_p1525) {
struct yf1526 F;
memset((void *)&F, 0, sizeof F);
F.p1525 = a_p1525;
{ rt_int rv4286 = ((((((((F.p1525 == v566)) || ((F.p1525 == v260))) || ((F.p1525 == v362))) || ((F.p1525 == v542))) || ((F.p1525 == v503))) || ((F.p1525 == v545))) || ((F.p1525 == v506)));
return rv4286; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1530_IsAssocAdd(rt_int a_p1531) {
struct yf1532 F;
memset((void *)&F, 0, sizeof F);
F.p1531 = a_p1531;
{ rt_int rv4289 = (((F.p1531 == v557)) || ((F.p1531 == v383)));
return rv4289; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1536_IsNonAssocAdd(rt_int a_p1537) {
struct yf1538 F;
memset((void *)&F, 0, sizeof F);
F.p1537 = a_p1537;
{ rt_int rv4292 = (((((((F.p1537 == v560)) || ((F.p1537 == v473))) || ((F.p1537 == v548))) || ((F.p1537 == v509))) || ((F.p1537 == v551))) || ((F.p1537 == v512)));
return rv4292; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1542_Bin(rt_int a_p1543, void * a_p1544, void * a_p1545, rt_int a_p1546) {
struct yf1547 F;
memset((void *)&F, 0, sizeof F);
F.p1543 = a_p1543;
F.p1544 = a_p1544;
F.p1545 = a_p1545;
F.p1546 = a_p1546;
F.v4299 = yr1290_NewNode(v782, F.p1546);
((*(yR99 *)rt_nil_check(F.v4299))).f_name = F.p1543;
((*(yR99 *)rt_nil_check(F.v4299))).f_a = F.p1544;
((*(yR99 *)rt_nil_check(F.v4299))).f_b = F.p1545;
{ void * rv4300 = F.v4299;
return rv4300; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1551_NeedParens(rt_int a_p1552, rt_int a_p1553) {
struct yf1554 F;
memset((void *)&F, 0, sizeof F);
F.p1552 = a_p1552;
F.p1553 = a_p1553;
yr1006_SB();
yr1024_ST(F.p1552);
yr1017_SA(y_str(" next to another operator of its level needs parentheses (VIII.A)", 65));
F.v4305 = yr1036_SE();
yr1137_Fail(F.p1553, F.v4305);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1558_ParseExpr(void) {
struct yf1559 F;
memset((void *)&F, 0, sizeof F);
F.v4313 = yr1321_TLn();
F.v4309 = yr1563_ParseSimple();
F.v4311 = yr1507_OpAt();
if (yr1512_IsRel(F.v4311)) {
yr1345_Skip();
F.v4309 = yr1542_Bin(F.v4311, F.v4309, yr1563_ParseSimple(), F.v4313);
if (yr1512_IsRel(yr1507_OpAt())) {
yr1551_NeedParens(F.v4311, F.v4313);
}
}
{ void * rv4314 = F.v4309;
return rv4314; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1563_ParseSimple(void) {
struct yf1564 F;
memset((void *)&F, 0, sizeof F);
F.v4323 = yr1321_TLn();
if (yr1333_Is(v560)) {
yr1345_Skip();
F.v4319 = yr1290_NewNode(v779, F.v4323);
((*(yR99 *)rt_nil_check(F.v4319))).f_a = yr1568_ParseTerm();
F.v4321 = yr1507_OpAt();
if ((yr1530_IsAssocAdd(F.v4321) || yr1536_IsNonAssocAdd(F.v4321))) {
yr1551_NeedParens(rt_range(v560, INT64_C(0), INT64_C(4000000)), F.v4323);
}
{ void * rv4324 = F.v4319;
return rv4324; }
}
F.v4317 = yr1568_ParseTerm();
F.v4321 = yr1507_OpAt();
if (yr1536_IsNonAssocAdd(F.v4321)) {
yr1345_Skip();
F.v4317 = yr1542_Bin(F.v4321, F.v4317, yr1568_ParseTerm(), F.v4323);
if ((yr1530_IsAssocAdd(yr1507_OpAt()) || yr1536_IsNonAssocAdd(yr1507_OpAt()))) {
yr1551_NeedParens(F.v4321, F.v4323);
}
{ void * rv4325 = F.v4317;
return rv4325; }
}
while (yr1530_IsAssocAdd(F.v4321)) {
yr1345_Skip();
F.v4317 = yr1542_Bin(F.v4321, F.v4317, yr1568_ParseTerm(), F.v4323);
if (yr1536_IsNonAssocAdd(yr1507_OpAt())) {
yr1551_NeedParens(yr1507_OpAt(), F.v4323);
}
F.v4321 = yr1507_OpAt();
}
{ void * rv4326 = F.v4317;
return rv4326; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1568_ParseTerm(void) {
struct yf1569 F;
memset((void *)&F, 0, sizeof F);
F.v4333 = yr1321_TLn();
F.v4329 = yr1584_ParseFactor();
F.v4331 = yr1507_OpAt();
if (yr1524_IsNonAssocMul(F.v4331)) {
yr1345_Skip();
F.v4329 = yr1542_Bin(F.v4331, F.v4329, yr1584_ParseFactor(), F.v4333);
if ((yr1518_IsAssocMul(yr1507_OpAt()) || yr1524_IsNonAssocMul(yr1507_OpAt()))) {
yr1551_NeedParens(F.v4331, F.v4333);
}
{ void * rv4334 = F.v4329;
return rv4334; }
}
while (yr1518_IsAssocMul(F.v4331)) {
yr1345_Skip();
F.v4329 = yr1542_Bin(F.v4331, F.v4329, yr1584_ParseFactor(), F.v4333);
if (yr1524_IsNonAssocMul(yr1507_OpAt())) {
yr1551_NeedParens(yr1507_OpAt(), F.v4333);
}
F.v4331 = yr1507_OpAt();
}
{ void * rv4335 = F.v4329;
return rv4335; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1573_IsLiteralAt(rt_int a_p1574) {
struct yf1575 F;
memset((void *)&F, 0, sizeof F);
F.p1574 = a_p1574;
F.v4339 = ((rt_int *)(v1173).p)[y_ix1(v1173, rt_add(v1279, F.p1574))];
{ rt_int rv4341 = (((((((F.v4339 == v200)) || ((F.v4339 == v203))) || ((F.v4339 == v206))) || ((F.v4339 == v209))) || ((F.v4339 == v212))) || yr1326_IsAt(F.p1574, v371));
return rv4341; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1579_ParseLiteral(void) {
struct yf1580 F;
memset((void *)&F, 0, sizeof F);
F.v4346 = yr1311_TK();
F.v4348 = yr1321_TLn();
if ((F.v4346 == v200)) {
F.v4344 = yr1290_NewNode(v743, F.v4348);
((*(yR99 *)rt_nil_check(F.v4344))).f_ival = yr1316_TV();
} else if ((F.v4346 == v203)) {
F.v4344 = yr1290_NewNode(v746, F.v4348);
((*(yR99 *)rt_nil_check(F.v4344))).f_ival = yr1316_TV();
} else if ((F.v4346 == v206)) {
F.v4344 = yr1290_NewNode(v749, F.v4348);
((*(yR99 *)rt_nil_check(F.v4344))).f_text = rt_range(yr1316_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v4346 == v209)) {
F.v4344 = yr1290_NewNode(v752, F.v4348);
((*(yR99 *)rt_nil_check(F.v4344))).f_text = rt_range(yr1316_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v4346 == v212)) {
F.v4344 = yr1290_NewNode(v755, F.v4348);
((*(yR99 *)rt_nil_check(F.v4344))).f_text = rt_range(yr1316_TV(), INT64_C(0), INT64_C(4000000));
} else {
F.v4344 = yr1290_NewNode(v758, F.v4348);
}
yr1345_Skip();
{ void * rv4349 = F.v4344;
return rv4349; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1584_ParseFactor(void) {
struct yf1585 F;
memset((void *)&F, 0, sizeof F);
F.v4356 = yr1321_TLn();
if (yr1333_Is(v374)) {
yr1345_Skip();
F.v4352 = yr1290_NewNode(v776, F.v4356);
((*(yR99 *)rt_nil_check(F.v4352))).f_a = yr1584_ParseFactor();
{ void * rv4357 = F.v4352;
return rv4357; }
}
if (yr1333_Is(v578)) {
yr1345_Skip();
F.v4352 = yr1290_NewNode(v785, F.v4356);
((*(yR99 *)rt_nil_check(F.v4352))).f_a = yr1558_ParseExpr();
yr1361_Expect(v581);
{ void * rv4358 = F.v4352;
return rv4358; }
}
if (yr1573_IsLiteralAt(INT64_C(0))) {
{ void * rv4360 = yr1579_ParseLiteral();
return rv4360; }
}
if (yr1339_IsIdAt(INT64_C(0))) {
if ((yr1573_IsLiteralAt(INT64_C(1)) || ((yr1339_IsIdAt(INT64_C(1)) && (!((((((yr1326_IsAt(INT64_C(2), v578) || yr1326_IsAt(INT64_C(2), v584)) || yr1326_IsAt(INT64_C(2), v599)) || yr1326_IsAt(INT64_C(2), v602)) || yr1326_IsAt(INT64_C(2), v515)) || yr1326_IsAt(INT64_C(2), v596)))))))) {
F.v4354 = yr1367_Ident();
if (yr1339_IsIdAt(INT64_C(0))) {
F.v4352 = yr1290_NewNode(v761, F.v4356);
((*(yR99 *)rt_nil_check(F.v4352))).f_name = yr1367_Ident();
} else {
F.v4352 = yr1579_ParseLiteral();
}
((*(yR99 *)rt_nil_check(F.v4352))).f_d = yr1290_NewNode(v653, F.v4356);
((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v4352))).f_d))).f_name = F.v4354;
{ void * rv4371 = F.v4352;
return rv4371; }
}
{ void * rv4372 = yr1589_ParseDesignator();
return rv4372; }
}
yr1152_FailN(F.v4356, yr1356_TokText(), y_str(" cannot begin an operand", 24));
{ void * rv4374 = ((void *)0);
return rv4374; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1589_ParseDesignator(void) {
struct yf1590 F;
memset((void *)&F, 0, sizeof F);
F.v4383 = yr1321_TLn();
F.v4377 = yr1290_NewNode(v761, F.v4383);
((*(yR99 *)rt_nil_check(F.v4377))).f_name = yr1367_Ident();
if (yr1350_Accept(v578)) {
((*(yR99 *)rt_nil_check(F.v4377))).f_kind = v764;
F.v4381 = ((void *)0);
while ((!yr1333_Is(v581))) {
yr1297_Link(&((*(yR99 *)rt_nil_check(F.v4377))).f_a, &F.v4381, yr1558_ParseExpr());
if ((!yr1350_Accept(v590))) {
yr1594_EXIT_ARGS();
}
}
yr1361_Expect(v581);
}
for (;;) {
if (yr1350_Accept(v599)) {
F.v4379 = yr1290_NewNode(v767, yr1321_TLn());
((*(yR99 *)rt_nil_check(F.v4379))).f_a = F.v4377;
((*(yR99 *)rt_nil_check(F.v4379))).f_name = yr1367_Ident();
F.v4377 = F.v4379;
} else if (yr1350_Accept(v584)) {
F.v4379 = yr1290_NewNode(v770, yr1321_TLn());
((*(yR99 *)rt_nil_check(F.v4379))).f_a = F.v4377;
F.v4381 = ((void *)0);
for (;;) {
yr1297_Link(&((*(yR99 *)rt_nil_check(F.v4379))).f_b, &F.v4381, yr1558_ParseExpr());
if ((!yr1350_Accept(v590))) {
goto yl_4385;
}
}
yl_4385: ;
yr1361_Expect(v587);
F.v4377 = F.v4379;
} else if (yr1350_Accept(v602)) {
F.v4379 = yr1290_NewNode(v773, yr1321_TLn());
((*(yR99 *)rt_nil_check(F.v4379))).f_a = F.v4377;
F.v4377 = F.v4379;
} else {
goto yl_4384;
}
}
yl_4384: ;
{ void * rv4386 = F.v4377;
return rv4386; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1594_EXIT_ARGS(void) {
struct yf1595 F;
memset((void *)&F, 0, sizeof F);
if ((!yr1333_Is(v581))) {
yr1361_Expect(v581);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1599_ParseProgram(void) {
struct yf1600 F;
memset((void *)&F, 0, sizeof F);
F.v4390 = ((void *)0);
F.v4392 = ((void *)0);
while ((!(yr1311_TK() == v188))) {
if ((!((yr1333_Is(v365) || yr1333_Is(v368))))) {
yr1144_FailS(yr1321_TLn(), y_str("a segment is a module (XIII.A)", 30));
}
yr1297_Link(&F.v4390, &F.v4392, yr1395_ParseModule());
while (yr1350_Accept(v593)) {
}
}
{ void * rv4394 = F.v4390;
return rv4394; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1648_NewSym(rt_int a_p1649, rt_int a_p1650) {
struct yf1651 F;
memset((void *)&F, 0, sizeof F);
F.p1649 = a_p1649;
F.p1650 = a_p1650;
({ F.v4399 = rt_alloc(sizeof(yR119)); });
(*(yR119 *)rt_nil_check(F.v4399)) = ((yR119){ .f_kind = F.p1649, .f_name = F.p1650, .f_rep = ((void *)0), .f_cname = INT64_C(0), .f_level = INT64_C(0), .f_byref = 0, .f_readonly = 0, .f_mval = INT64_C(0), .f_hasmv = 0, .f_params = ((void *)0), .f_nparams = INT64_C(0), .f_ret = ((void *)0), .f_func = 0, .f_decl = ((void *)0), .f_depth = INT64_C(0), .f_target = ((void *)0), .f_members = ((void *)0), .f_mnext = ((void *)0), .f_chain = ((void *)0), .f_stack = ((void *)0), .f_alt = ((void *)0), .f_monitor = ((void *)0), .f_serial = INT64_C(0), .f_calls = ((void *)0) });
((*(yR119 *)rt_nil_check(F.v4399))).f_serial = yr1161_NewSerial();
{ void * rv4410 = F.v4399;
return rv4410; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1655_OpenScope(rt_int a_p1656) {
struct yf1657 F;
memset((void *)&F, 0, sizeof F);
F.p1656 = a_p1656;
({ F.v4414 = rt_alloc(sizeof(yR124)); });
(*(yR124 *)rt_nil_check(F.v4414)) = ((yR124){ .f_syms = ((void *)0), .f_closed = F.p1656, .f_module = ((void *)0), .f_level = v1623, .f_deferred = ((void *)0), .f_up = ((void *)0) });
if ((v1617 >= INT64_C(0))) {
((*(yR124 *)rt_nil_check(F.v4414))).f_up = ((void * *)(v1615).p)[y_ix1(v1615, v1617)];
}
v1617 = rt_range(rt_add(v1617, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1615).p)[y_ix1(v1615, v1617)] = F.v4414;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1661_CloseScope(void) {
struct yf1662 F;
memset((void *)&F, 0, sizeof F);
F.v4420 = ((*(yR124 *)rt_nil_check(((void * *)(v1615).p)[y_ix1(v1615, v1617)]))).f_syms;
while ((!(F.v4420 == ((void *)0)))) {
F.v4426 = rt_range(rt_mod(((*(yR119 *)rt_nil_check(F.v4420))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4422 = ((void * *)(v1604).p)[y_ix1(v1604, F.v4426)];
F.v4424 = ((void *)0);
while ((((!(F.v4422 == ((void *)0)))) && ((!(F.v4422 == F.v4420))))) {
F.v4424 = F.v4422;
F.v4422 = ((*(yR119 *)rt_nil_check(F.v4422))).f_chain;
}
if ((F.v4422 == F.v4420)) {
if ((F.v4424 == ((void *)0))) {
((void * *)(v1604).p)[y_ix1(v1604, F.v4426)] = ((*(yR119 *)rt_nil_check(F.v4420))).f_chain;
} else {
((*(yR119 *)rt_nil_check(F.v4424))).f_chain = ((*(yR119 *)rt_nil_check(F.v4420))).f_chain;
}
}
F.v4420 = ((*(yR119 *)rt_nil_check(F.v4420))).f_stack;
}
v1617 = rt_range(rt_sub(v1617, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1666_Visible(void * a_p1667) {
struct yf1668 F;
memset((void *)&F, 0, sizeof F);
F.p1667 = a_p1667;
{ rt_int rv4434 = (((((*(yR119 *)rt_nil_check(F.p1667))).f_depth >= v1620)) || ((((*(yR119 *)rt_nil_check(F.p1667))).f_depth == INT64_C(0))));
return rv4434; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1672_Find(rt_int a_p1673) {
struct yf1674 F;
memset((void *)&F, 0, sizeof F);
F.p1673 = a_p1673;
F.v4438 = ((void * *)(v1604).p)[y_ix1(v1604, rt_mod(F.p1673, INT64_C(8192)))];
while ((!(F.v4438 == ((void *)0)))) {
if ((((((*(yR119 *)rt_nil_check(F.v4438))).f_name == F.p1673)) && yr1666_Visible(F.v4438))) {
{ void * rv4441 = F.v4438;
return rv4441; }
}
F.v4438 = ((*(yR119 *)rt_nil_check(F.v4438))).f_chain;
}
{ void * rv4442 = ((void *)0);
return rv4442; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1678_FindHere(rt_int a_p1679) {
struct yf1680 F;
memset((void *)&F, 0, sizeof F);
F.p1679 = a_p1679;
F.v4446 = ((void * *)(v1604).p)[y_ix1(v1604, rt_mod(F.p1679, INT64_C(8192)))];
while ((!(F.v4446 == ((void *)0)))) {
if ((((((*(yR119 *)rt_nil_check(F.v4446))).f_name == F.p1679)) && ((((*(yR119 *)rt_nil_check(F.v4446))).f_depth == v1617)))) {
{ void * rv4449 = F.v4446;
return rv4449; }
}
F.v4446 = ((*(yR119 *)rt_nil_check(F.v4446))).f_chain;
}
{ void * rv4450 = ((void *)0);
return rv4450; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1684_Lookup(rt_int a_p1685, rt_int a_p1686) {
struct yf1687 F;
memset((void *)&F, 0, sizeof F);
F.p1685 = a_p1685;
F.p1686 = a_p1686;
F.v4455 = yr1672_Find(F.p1685);
if ((F.v4455 == ((void *)0))) {
yr1152_FailN(F.p1686, F.p1685, y_str(" is not declared here", 21));
}
if ((((*(yR119 *)rt_nil_check(F.v4455))).f_kind == v878)) {
F.v4457 = ((*(yR119 *)rt_nil_check(F.v4455))).f_chain;
while ((!(F.v4457 == ((void *)0)))) {
if (((((((((*(yR119 *)rt_nil_check(F.v4457))).f_name == F.p1685)) && ((((*(yR119 *)rt_nil_check(F.v4457))).f_depth == ((*(yR119 *)rt_nil_check(F.v4455))).f_depth))) && ((((*(yR119 *)rt_nil_check(F.v4457))).f_kind == v878))) && ((!(yr1737_Real(F.v4457) == yr1737_Real(F.v4455))))) && ((!(((*(yR119 *)rt_nil_check(yr1737_Real(F.v4455)))).f_kind == v857))))) {
yr1152_FailN(F.p1686, F.p1685, y_str(" is exported here by two modules: name it with FROM (X.B.4)", 59));
}
F.v4457 = ((*(yR119 *)rt_nil_check(F.v4457))).f_chain;
}
}
{ void * rv4460 = F.v4455;
return rv4460; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1691_Ambiguous(void * a_p1692) {
struct yf1693 F;
memset((void *)&F, 0, sizeof F);
F.p1692 = a_p1692;
F.v4464 = ((*(yR119 *)rt_nil_check(F.p1692))).f_chain;
while ((!(F.v4464 == ((void *)0)))) {
if ((((((((*(yR119 *)rt_nil_check(F.v4464))).f_name == ((*(yR119 *)rt_nil_check(F.p1692))).f_name)) && yr1666_Visible(F.v4464)) && ((((*(yR119 *)rt_nil_check(F.v4464))).f_kind == v857))) && ((!(((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v4464))).f_rep))).f_tid == ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.p1692))).f_rep))).f_tid))))) {
{ rt_int rv4466 = 1;
return rv4466; }
}
F.v4464 = ((*(yR119 *)rt_nil_check(F.v4464))).f_chain;
}
{ rt_int rv4468 = 0;
return rv4468; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1697_FindLit(rt_int a_p1698, void * a_p1699) {
struct yf1700 F;
memset((void *)&F, 0, sizeof F);
F.p1698 = a_p1698;
F.p1699 = a_p1699;
F.v4473 = ((void * *)(v1604).p)[y_ix1(v1604, rt_mod(F.p1698, INT64_C(8192)))];
while ((!(F.v4473 == ((void *)0)))) {
if ((((*(yR119 *)rt_nil_check(F.v4473))).f_name == F.p1698)) {
if ((((((*(yR119 *)rt_nil_check(yr1737_Real(F.v4473)))).f_kind == v857)) && ((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(yr1737_Real(F.v4473)))).f_rep))).f_tid == ((*(yR104 *)rt_nil_check(F.p1699))).f_tid)))) {
{ void * rv4476 = F.v4473;
return rv4476; }
}
}
F.v4473 = ((*(yR119 *)rt_nil_check(F.v4473))).f_chain;
}
{ void * rv4477 = ((void *)0);
return rv4477; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1704_Define(void * a_p1705, rt_int a_p1706) {
struct yf1707 F;
memset((void *)&F, 0, sizeof F);
F.p1705 = a_p1705;
F.p1706 = a_p1706;
F.v4482 = yr1678_FindHere(((*(yR119 *)rt_nil_check(F.p1705))).f_name);
F.v4484 = rt_range(rt_mod(((*(yR119 *)rt_nil_check(F.p1705))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((((!(F.v4482 == ((void *)0)))) && (!((((((*(yR119 *)rt_nil_check(F.v4482))).f_kind == v857)) && ((((*(yR119 *)rt_nil_check(F.p1705))).f_kind == v857)))))) && (!(((((((*(yR119 *)rt_nil_check(F.p1705))).f_kind == v860)) && ((!(((*(yR119 *)rt_nil_check(F.p1705))).f_alt == ((void *)0))))) && ((((*(yR119 *)rt_nil_check(F.p1705))).f_alt == yr1737_Real(F.v4482))))))) && (!((((((*(yR119 *)rt_nil_check(F.p1705))).f_kind == v878)) && ((((*(yR119 *)rt_nil_check(F.v4482))).f_kind == v878))))))) {
yr1152_FailN(F.p1706, ((*(yR119 *)rt_nil_check(F.p1705))).f_name, y_str(" is declared twice in this scope", 32));
}
((*(yR119 *)rt_nil_check(F.p1705))).f_depth = v1617;
((*(yR119 *)rt_nil_check(F.p1705))).f_chain = ((void * *)(v1604).p)[y_ix1(v1604, F.v4484)];
((void * *)(v1604).p)[y_ix1(v1604, F.v4484)] = F.p1705;
((*(yR119 *)rt_nil_check(F.p1705))).f_stack = ((*(yR124 *)rt_nil_check(((void * *)(v1615).p)[y_ix1(v1615, v1617)]))).f_syms;
((*(yR124 *)rt_nil_check(((void * *)(v1615).p)[y_ix1(v1615, v1617)]))).f_syms = F.p1705;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1711_Path(rt_int a_p1712, rt_int a_p1713) {
struct yf1714 F;
memset((void *)&F, 0, sizeof F);
F.p1712 = a_p1712;
F.p1713 = a_p1713;
F.v4492 = rt_range(rt_sub(v1623, F.p1712), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.p1712 == INT64_C(0))) {
{ rt_int rv4495 = F.p1713;
return rv4495; }
}
yr1006_SB();
if ((F.v4492 == INT64_C(0))) {
yr1017_SA(y_str("F.", 2));
} else {
yr1017_SA(y_str("F.up->", 6));
while ((F.v4492 > INT64_C(1))) {
yr1017_SA(y_str("up->", 4));
F.v4492 = rt_range(rt_sub(F.v4492, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1024_ST(F.p1713);
{ rt_int rv4503 = yr1036_SE();
return rv4503; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1718_FramePtr(rt_int a_p1719) {
struct yf1720 F;
memset((void *)&F, 0, sizeof F);
F.p1719 = a_p1719;
F.v4507 = rt_range(rt_sub(v1623, F.p1719), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.v4507 == INT64_C(0))) {
{ rt_int rv4511 = yr1041_T(y_str("&F", 2));
return rv4511; }
}
yr1006_SB();
yr1017_SA(y_str("F.up", 4));
while ((F.v4507 > INT64_C(1))) {
yr1017_SA(y_str("->up", 4));
F.v4507 = rt_range(rt_sub(F.v4507, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv4517 = yr1036_SE();
return rv4517; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1724_DeclStorage(rt_int a_p1725, rt_int a_p1726) {
struct yf1727 F;
memset((void *)&F, 0, sizeof F);
F.p1725 = a_p1725;
F.p1726 = a_p1726;
yr1006_SB();
if ((v1623 == INT64_C(0))) {
yr1017_SA(y_str("static ", 7));
}
yr1024_ST(F.p1725);
yr1017_SA(y_str(" ", 1));
yr1024_ST(F.p1726);
yr1017_SA(y_str(";", 1));
F.v4522 = yr1036_SE();
if ((v1623 == INT64_C(0))) {
yr1090_Put(&v968, F.v4522);
} else {
yr1090_Put(&v978, F.v4522);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1731_SymPath(void * a_p1732) {
struct yf1733 F;
memset((void *)&F, 0, sizeof F);
F.p1732 = a_p1732;
F.v4531 = yr1711_Path(((*(yR119 *)rt_nil_check(F.p1732))).f_level, ((*(yR119 *)rt_nil_check(F.p1732))).f_cname);
if (((*(yR119 *)rt_nil_check(F.p1732))).f_byref) {
yr1006_SB();
yr1017_SA(y_str("(*", 2));
yr1024_ST(F.v4531);
yr1017_SA(y_str(")", 1));
{ rt_int rv4534 = yr1036_SE();
return rv4534; }
}
{ rt_int rv4535 = F.v4531;
return rv4535; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1737_Real(void * a_p1738) {
struct yf1739 F;
memset((void *)&F, 0, sizeof F);
F.p1738 = a_p1738;
F.v4539 = F.p1738;
while ((((*(yR119 *)rt_nil_check(F.v4539))).f_kind == v878)) {
F.v4539 = ((*(yR119 *)rt_nil_check(F.v4539))).f_target;
}
{ void * rv4540 = F.v4539;
return rv4540; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1767_NewRep(rt_int a_p1768, rt_int a_p1769) {
struct yf1770 F;
memset((void *)&F, 0, sizeof F);
F.p1768 = a_p1768;
F.p1769 = a_p1769;
({ F.v4545 = rt_alloc(sizeof(yR104)); });
(*(yR104 *)rt_nil_check(F.v4545)) = ((yR104){ .f_kind = F.p1768, .f_tid = F.p1769, .f_tname = F.p1769, .f_lo = INT64_C(0), .f_hi = INT64_C(0), .f_mlo = INT64_C(0), .f_mhi = INT64_C(0), .f_hasm = 0, .f_scale = INT64_C(0), .f_prec = INT64_C(0), .f_elem = ((void *)0), .f_idx = ((void *)0), .f_nidx = INT64_C(0), .f_link = ((void *)0), .f_lits = ((void *)0), .f_nlits = INT64_C(0), .f_fields = ((void *)0), .f_selector = ((void *)0), .f_cname = INT64_C(0), .f_dname = INT64_C(0), .f_dlevel = INT64_C(0), .f_deep = 0, .f_abstract = 0, .f_opaque = 0, .f_opaqueops = INT64_C(0), .f_ordered = 0, .f_forward = INT64_C(0), .f_fwdscope = INT64_C(0), .f_monitor = ((void *)0), .f_serial = INT64_C(0), .f_sig = INT64_C(0), .f_fsn = INT64_C(0), .f_fsd = INT64_C(0) });
((*(yR104 *)rt_nil_check(F.v4545))).f_serial = yr1161_NewSerial();
{ void * rv4569 = F.v4545;
return rv4569; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1774_CopyRep(void * a_p1775) {
struct yf1776 F;
memset((void *)&F, 0, sizeof F);
F.p1775 = a_p1775;
({ F.v4573 = rt_alloc(sizeof(yR104)); });
(*(yR104 *)rt_nil_check(F.v4573)) = (*(yR104 *)rt_nil_check(F.p1775));
((*(yR104 *)rt_nil_check(F.v4573))).f_serial = yr1161_NewSerial();
((*(yR104 *)rt_nil_check(F.v4573))).f_sig = INT64_C(0);
{ void * rv4575 = F.v4573;
return rv4575; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1780_IsDiscrete(void * a_p1781) {
struct yf1782 F;
memset((void *)&F, 0, sizeof F);
F.p1781 = a_p1781;
{ rt_int rv4578 = (((((((*(yR104 *)rt_nil_check(F.p1781))).f_kind == v788)) || ((((*(yR104 *)rt_nil_check(F.p1781))).f_kind == v797))) || ((((*(yR104 *)rt_nil_check(F.p1781))).f_kind == v800))) || ((((*(yR104 *)rt_nil_check(F.p1781))).f_kind == v803)));
return rv4578; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1786_IsNumeric(void * a_p1787) {
struct yf1788 F;
memset((void *)&F, 0, sizeof F);
F.p1787 = a_p1787;
{ rt_int rv4581 = ((((((*(yR104 *)rt_nil_check(F.p1787))).f_kind == v788)) || ((((*(yR104 *)rt_nil_check(F.p1787))).f_kind == v791))) || ((((*(yR104 *)rt_nil_check(F.p1787))).f_kind == v794)));
return rv4581; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1792_IsArrayLike(void * a_p1793) {
struct yf1794 F;
memset((void *)&F, 0, sizeof F);
F.p1793 = a_p1793;
{ rt_int rv4584 = ((((((*(yR104 *)rt_nil_check(F.p1793))).f_kind == v806)) || ((((*(yR104 *)rt_nil_check(F.p1793))).f_kind == v827))) || ((((*(yR104 *)rt_nil_check(F.p1793))).f_kind == v830)));
return rv4584; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1798_IsString(void * a_p1799) {
struct yf1800 F;
memset((void *)&F, 0, sizeof F);
F.p1799 = a_p1799;
if ((((*(yR104 *)rt_nil_check(F.p1799))).f_kind == v830)) {
{ rt_int rv4588 = 1;
return rv4588; }
}
if ((((((*(yR104 *)rt_nil_check(F.p1799))).f_kind == v806)) && ((((*(yR104 *)rt_nil_check(F.p1799))).f_nidx == INT64_C(1))))) {
{ rt_int rv4590 = (((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p1799))).f_elem))).f_kind == v803);
return rv4590; }
}
if ((((((*(yR104 *)rt_nil_check(F.p1799))).f_kind == v827)) && ((((*(yR104 *)rt_nil_check(F.p1799))).f_nidx == INT64_C(1))))) {
{ rt_int rv4592 = (((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p1799))).f_elem))).f_kind == v803);
return rv4592; }
}
{ rt_int rv4594 = 0;
return rv4594; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1804_Deep(void * a_p1805) {
struct yf1806 F;
memset((void *)&F, 0, sizeof F);
F.p1805 = a_p1805;
if (((((((*(yR104 *)rt_nil_check(F.p1805))).f_kind == v806)) || ((((*(yR104 *)rt_nil_check(F.p1805))).f_kind == v827))) || ((((*(yR104 *)rt_nil_check(F.p1805))).f_kind == v830)))) {
{ rt_int rv4598 = 1;
return rv4598; }
}
{ rt_int rv4599 = (((((*(yR104 *)rt_nil_check(F.p1805))).f_kind == v809)) && ((*(yR104 *)rt_nil_check(F.p1805))).f_deep);
return rv4599; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1810_Holds(void * a_p1811, rt_int a_p1812) {
struct yf1813 F;
memset((void *)&F, 0, sizeof F);
F.p1811 = a_p1811;
F.p1812 = a_p1812;
if ((((*(yR104 *)rt_nil_check(F.p1811))).f_kind == v806)) {
{ rt_int rv4605 = (((((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p1811))).f_elem))).f_kind == F.p1812)) || yr1810_Holds(((*(yR104 *)rt_nil_check(F.p1811))).f_elem, F.p1812));
return rv4605; }
}
if ((((*(yR104 *)rt_nil_check(F.p1811))).f_kind == v809)) {
F.v4604 = ((*(yR104 *)rt_nil_check(F.p1811))).f_fields;
while ((!(F.v4604 == ((void *)0)))) {
if ((((((*(yR104 *)rt_nil_check(((*(yR109 *)rt_nil_check(F.v4604))).f_rep))).f_kind == F.p1812)) || yr1810_Holds(((*(yR109 *)rt_nil_check(F.v4604))).f_rep, F.p1812))) {
{ rt_int rv4607 = 1;
return rv4607; }
}
F.v4604 = ((*(yR109 *)rt_nil_check(F.v4604))).f_next;
}
}
{ rt_int rv4609 = 0;
return rv4609; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1817_HoldsSignal(void * a_p1818) {
struct yf1819 F;
memset((void *)&F, 0, sizeof F);
F.p1818 = a_p1818;
{ rt_int rv4612 = yr1810_Holds(F.p1818, v821);
return rv4612; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1823_NonAssignable(void * a_p1824) {
struct yf1825 F;
memset((void *)&F, 0, sizeof F);
F.p1824 = a_p1824;
F.v4616 = ((*(yR104 *)rt_nil_check(F.p1824))).f_kind;
if (((((F.v4616 == v821)) || ((F.v4616 == v815))) || ((F.v4616 == v824)))) {
{ rt_int rv4618 = 1;
return rv4618; }
}
{ rt_int rv4619 = ((yr1810_Holds(F.p1824, v821) || yr1810_Holds(F.p1824, v815)) || yr1810_Holds(F.p1824, v824));
return rv4619; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1829_CType(void * a_p1830) {
struct yf1831 F;
memset((void *)&F, 0, sizeof F);
F.p1830 = a_p1830;
F.v4623 = ((*(yR104 *)rt_nil_check(F.p1830))).f_kind;
if (((((F.v4623 == v788)) || ((F.v4623 == v797))) || ((F.v4623 == v800)))) {
{ rt_int rv4625 = yr1041_T(y_str("rt_int", 6));
return rv4625; }
}
if ((F.v4623 == v803)) {
{ rt_int rv4627 = yr1041_T(y_str("unsigned char", 13));
return rv4627; }
}
if ((F.v4623 == v794)) {
{ rt_int rv4629 = yr1041_T(y_str("double", 6));
return rv4629; }
}
if ((F.v4623 == v791)) {
{ rt_int rv4631 = yr1041_T(y_str("yfix", 4));
return rv4631; }
}
if (((((F.v4623 == v806)) || ((F.v4623 == v827))) || ((F.v4623 == v830)))) {
{ rt_int rv4633 = yr1041_T(y_str("yarr", 4));
return rv4633; }
}
if ((F.v4623 == v809)) {
{ rt_int rv4634 = ((*(yR104 *)rt_nil_check(F.p1830))).f_cname;
return rv4634; }
}
if ((((F.v4623 == v812)) || ((F.v4623 == v833)))) {
{ rt_int rv4636 = yr1041_T(y_str("void *", 6));
return rv4636; }
}
if ((F.v4623 == v815)) {
{ rt_int rv4638 = yr1041_T(y_str("yfile *", 7));
return rv4638; }
}
if ((F.v4623 == v818)) {
{ rt_int rv4640 = yr1041_T(y_str("yset", 4));
return rv4640; }
}
if ((F.v4623 == v821)) {
{ rt_int rv4642 = yr1041_T(y_str("ysig", 4));
return rv4642; }
}
if ((F.v4623 == v824)) {
{ rt_int rv4644 = yr1041_T(y_str("rt_lock", 7));
return rv4644; }
}
{ rt_int rv4646 = yr1041_T(y_str("void", 4));
return rv4646; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1835_DescOf(void * a_p1836) {
struct yf1837 F;
memset((void *)&F, 0, sizeof F);
F.p1836 = a_p1836;
F.v4650 = ((*(yR104 *)rt_nil_check(F.p1836))).f_kind;
if (((((F.v4650 == v788)) || ((F.v4650 == v797))) || ((F.v4650 == v800)))) {
{ rt_int rv4652 = yr1041_T(y_str("&y_d_int", 8));
return rv4652; }
}
if ((F.v4650 == v803)) {
{ rt_int rv4654 = yr1041_T(y_str("&y_d_byte", 9));
return rv4654; }
}
if ((F.v4650 == v794)) {
{ rt_int rv4656 = yr1041_T(y_str("&y_d_float", 10));
return rv4656; }
}
if ((F.v4650 == v791)) {
{ rt_int rv4658 = yr1041_T(y_str("&y_d_fix", 8));
return rv4658; }
}
if ((((F.v4650 == v812)) || ((F.v4650 == v833)))) {
{ rt_int rv4660 = yr1041_T(y_str("&y_d_ptr", 8));
return rv4660; }
}
if ((F.v4650 == v818)) {
{ rt_int rv4662 = yr1041_T(y_str("&y_d_set", 8));
return rv4662; }
}
if ((((F.v4650 == v806)) || ((F.v4650 == v809)))) {
yr1006_SB();
yr1017_SA(y_str("&", 1));
yr1024_ST(yr1711_Path(((*(yR104 *)rt_nil_check(F.p1836))).f_dlevel, ((*(yR104 *)rt_nil_check(F.p1836))).f_dname));
{ rt_int rv4664 = yr1036_SE();
return rv4664; }
}
if ((F.v4650 == v830)) {
{ rt_int rv4666 = yr1041_T(y_str("&y_d_str", 8));
return rv4666; }
}
if ((F.v4650 == v821)) {
{ rt_int rv4668 = yr1041_T(y_str("&y_d_sig", 8));
return rv4668; }
}
if ((F.v4650 == v824)) {
{ rt_int rv4670 = yr1041_T(y_str("&y_d_sem", 8));
return rv4670; }
}
{ rt_int rv4672 = yr1041_T(y_str("&y_d_opaque", 11));
return rv4672; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1841_NewDesc(void * a_p1842) {
struct yf1843 F;
memset((void *)&F, 0, sizeof F);
F.p1842 = a_p1842;
((*(yR104 *)rt_nil_check(F.p1842))).f_dname = yr1166_Fresh(y_str("yd_", 3));
((*(yR104 *)rt_nil_check(F.p1842))).f_dlevel = v1623;
yr1724_DeclStorage(yr1041_T(y_str("ydesc", 5)), ((*(yR104 *)rt_nil_check(F.p1842))).f_dname);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1847_SameType(void * a_p1848, void * a_p1849) {
struct yf1850 F;
memset((void *)&F, 0, sizeof F);
F.p1848 = a_p1848;
F.p1849 = a_p1849;
if ((((*(yR104 *)rt_nil_check(F.p1848))).f_tid == ((*(yR104 *)rt_nil_check(F.p1849))).f_tid)) {
{ rt_int rv4681 = 1;
return rv4681; }
}
if ((((((*(yR104 *)rt_nil_check(F.p1848))).f_kind == v830)) && yr1798_IsString(F.p1849))) {
{ rt_int rv4683 = 1;
return rv4683; }
}
if ((((((*(yR104 *)rt_nil_check(F.p1849))).f_kind == v830)) && yr1798_IsString(F.p1848))) {
{ rt_int rv4685 = 1;
return rv4685; }
}
if ((((((*(yR104 *)rt_nil_check(F.p1848))).f_kind == v833)) && ((((*(yR104 *)rt_nil_check(F.p1849))).f_kind == v812)))) {
{ rt_int rv4687 = 1;
return rv4687; }
}
if ((((((*(yR104 *)rt_nil_check(F.p1849))).f_kind == v833)) && ((((*(yR104 *)rt_nil_check(F.p1848))).f_kind == v812)))) {
{ rt_int rv4689 = 1;
return rv4689; }
}
if ((((((*(yR104 *)rt_nil_check(F.p1848))).f_kind == v842)) || ((((*(yR104 *)rt_nil_check(F.p1849))).f_kind == v842)))) {
{ rt_int rv4691 = 1;
return rv4691; }
}
{ rt_int rv4693 = 0;
return rv4693; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1854_TypeClash(rt_int a_p1855, void * a_p1856, void * a_p1857) {
struct yf1858 F;
memset((void *)&F, 0, sizeof F);
F.p1855 = a_p1855;
F.p1856 = a_p1856;
F.p1857 = a_p1857;
yr1006_SB();
yr1017_SA(y_str("type conflict: ", 15));
yr1024_ST(((*(yR104 *)rt_nil_check(F.p1856))).f_tname);
yr1017_SA(y_str(" expected, ", 11));
yr1024_ST(((*(yR104 *)rt_nil_check(F.p1857))).f_tname);
yr1017_SA(y_str(" found", 6));
F.v4699 = yr1036_SE();
yr1137_Fail(F.p1855, F.v4699);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1862_CheckType(rt_int a_p1863, void * a_p1864, void * a_p1865) {
struct yf1866 F;
memset((void *)&F, 0, sizeof F);
F.p1863 = a_p1863;
F.p1864 = a_p1864;
F.p1865 = a_p1865;
if ((!yr1847_SameType(F.p1864, F.p1865))) {
yr1854_TypeClash(F.p1863, F.p1864, F.p1865);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1870_CheckRepresented(void * a_p1871, rt_int a_p1872) {
struct yf1873 F;
memset((void *)&F, 0, sizeof F);
F.p1871 = a_p1871;
F.p1872 = a_p1872;
if (((*(yR104 *)rt_nil_check(F.p1871))).f_abstract) {
yr1152_FailN(F.p1872, ((*(yR104 *)rt_nil_check(F.p1871))).f_tname, y_str(" is a type, not a representation (VI.A.1)", 41));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1877_SigText(void * a_p1878) {
struct yf1879 F;
memset((void *)&F, 0, sizeof F);
F.p1878 = a_p1878;
F.v4714 = ((*(yR104 *)rt_nil_check(F.p1878))).f_kind;
yr1006_SB();
yr1024_ST(((*(yR104 *)rt_nil_check(F.p1878))).f_tid);
if (((yr1780_IsDiscrete(F.p1878) || ((F.v4714 == v794))) || ((F.v4714 == v791)))) {
yr1017_SA(y_str("[", 1));
if (((*(yR104 *)rt_nil_check(F.p1878))).f_hasm) {
yr1030_SI(((*(yR104 *)rt_nil_check(F.p1878))).f_mlo);
yr1017_SA(y_str("..", 2));
yr1030_SI(((*(yR104 *)rt_nil_check(F.p1878))).f_mhi);
} else {
yr1024_ST(((*(yR104 *)rt_nil_check(F.p1878))).f_lo);
yr1017_SA(y_str("..", 2));
yr1024_ST(((*(yR104 *)rt_nil_check(F.p1878))).f_hi);
}
yr1017_SA(y_str("]", 1));
if ((F.v4714 == v794)) {
yr1017_SA(y_str("P", 1));
yr1024_ST(((*(yR104 *)rt_nil_check(F.p1878))).f_prec);
}
if ((F.v4714 == v791)) {
yr1017_SA(y_str("S", 1));
yr1030_SI(((*(yR104 *)rt_nil_check(F.p1878))).f_fsn);
yr1017_SA(y_str("/", 1));
yr1030_SI(((*(yR104 *)rt_nil_check(F.p1878))).f_fsd);
}
} else if ((F.v4714 == v806)) {
yr1017_SA(y_str("(", 1));
F.v4716 = ((*(yR104 *)rt_nil_check(F.p1878))).f_idx;
while ((!(F.v4716 == ((void *)0)))) {
yr1024_ST(yr1883_RepSig(F.v4716));
yr1017_SA(y_str(",", 1));
F.v4716 = ((*(yR104 *)rt_nil_check(F.v4716))).f_link;
}
yr1017_SA(y_str("OF ", 3));
yr1024_ST(yr1883_RepSig(((*(yR104 *)rt_nil_check(F.p1878))).f_elem));
yr1017_SA(y_str(")", 1));
} else if ((F.v4714 == v827)) {
yr1017_SA(y_str("(", 1));
yr1030_SI(((*(yR104 *)rt_nil_check(F.p1878))).f_nidx);
yr1017_SA(y_str("D ", 2));
yr1024_ST(yr1883_RepSig(((*(yR104 *)rt_nil_check(F.p1878))).f_elem));
yr1017_SA(y_str(")", 1));
} else if ((F.v4714 == v809)) {
yr1017_SA(y_str("{", 1));
F.v4718 = ((*(yR104 *)rt_nil_check(F.p1878))).f_fields;
while ((!(F.v4718 == ((void *)0)))) {
if (((*(yR109 *)rt_nil_check(F.v4718))).f_isconst) {
yr1017_SA(y_str("C ", 2));
} else {
yr1017_SA(y_str("V ", 2));
}
yr1024_ST(((*(yR109 *)rt_nil_check(F.v4718))).f_name);
yr1017_SA(y_str(":", 1));
yr1024_ST(yr1883_RepSig(((*(yR109 *)rt_nil_check(F.v4718))).f_rep));
yr1017_SA(y_str(";", 1));
F.v4718 = ((*(yR109 *)rt_nil_check(F.v4718))).f_next;
}
yr1017_SA(y_str("}", 1));
} else if ((((F.v4714 == v818)) || ((F.v4714 == v815)))) {
yr1017_SA(y_str("(", 1));
yr1024_ST(yr1883_RepSig(((*(yR104 *)rt_nil_check(F.p1878))).f_elem));
yr1017_SA(y_str(")", 1));
}
{ rt_int rv4741 = yr1036_SE();
return rv4741; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1883_RepSig(void * a_p1884) {
struct yf1885 F;
memset((void *)&F, 0, sizeof F);
F.p1884 = a_p1884;
if ((((*(yR104 *)rt_nil_check(F.p1884))).f_sig == INT64_C(0))) {
((*(yR104 *)rt_nil_check(F.p1884))).f_sig = yr1055_Name(yr1877_SigText(F.p1884));
}
{ rt_int rv4745 = ((*(yR104 *)rt_nil_check(F.p1884))).f_sig;
return rv4745; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1889_Identical(void * a_p1890, void * a_p1891) {
struct yf1892 F;
memset((void *)&F, 0, sizeof F);
F.p1890 = a_p1890;
F.p1891 = a_p1891;
if ((F.p1890 == F.p1891)) {
{ rt_int rv4750 = 1;
return rv4750; }
}
if ((!yr1847_SameType(F.p1890, F.p1891))) {
{ rt_int rv4752 = 0;
return rv4752; }
}
{ rt_int rv4753 = (yr1883_RepSig(F.p1890) == yr1883_RepSig(F.p1891));
return rv4753; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1896_IsLiteralNode(void * a_p1897) {
struct yf1898 F;
memset((void *)&F, 0, sizeof F);
F.p1897 = a_p1897;
if ((((((((*(yR99 *)rt_nil_check(F.p1897))).f_kind == v743)) || ((((*(yR99 *)rt_nil_check(F.p1897))).f_kind == v749))) || ((((*(yR99 *)rt_nil_check(F.p1897))).f_kind == v746))) || ((((*(yR99 *)rt_nil_check(F.p1897))).f_kind == v752)))) {
{ rt_int rv4756 = (((*(yR99 *)rt_nil_check(F.p1897))).f_d == ((void *)0));
return rv4756; }
}
if ((((((*(yR99 *)rt_nil_check(F.p1897))).f_kind == v779)) || ((((*(yR99 *)rt_nil_check(F.p1897))).f_kind == v785)))) {
{ rt_int rv4757 = yr1896_IsLiteralNode(((*(yR99 *)rt_nil_check(F.p1897))).f_a);
return rv4757; }
}
{ rt_int rv4759 = 0;
return rv4759; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1902_StoreBounds(void * a_p1903, yarr a_p1905) {
struct yf1906 F;
memset((void *)&F, 0, sizeof F);
F.p1903 = a_p1903;
F.p1905 = a_p1905;
F.v4764 = yr1166_Fresh(y_str("lo", 2));
F.v4766 = yr1166_Fresh(y_str("hi", 2));
yr1724_DeclStorage(yr1041_T(F.p1905), F.v4764);
yr1724_DeclStorage(yr1041_T(F.p1905), F.v4766);
yr1112_Emit(yr2860_Join(yr1711_Path(v1623, F.v4764), yr1041_T(y_str(" = ", 3)), yr2860_Join(((*(yR104 *)rt_nil_check(F.p1903))).f_lo, yr1041_T(y_str(";", 1)), INT64_C(0))));
yr1112_Emit(yr2860_Join(yr1711_Path(v1623, F.v4766), yr1041_T(y_str(" = ", 3)), yr2860_Join(((*(yR104 *)rt_nil_check(F.p1903))).f_hi, yr1041_T(y_str(";", 1)), INT64_C(0))));
((*(yR104 *)rt_nil_check(F.p1903))).f_lo = F.v4764;
((*(yR104 *)rt_nil_check(F.p1903))).f_hi = F.v4766;
((*(yR104 *)rt_nil_check(F.p1903))).f_dname = F.v4764;
((*(yR104 *)rt_nil_check(F.p1903))).f_dlevel = v1623;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1910_LoText(void * a_p1911) {
struct yf1912 F;
memset((void *)&F, 0, sizeof F);
F.p1911 = a_p1911;
if ((((((!(((*(yR104 *)rt_nil_check(F.p1911))).f_dname == INT64_C(0)))) && ((!(((*(yR104 *)rt_nil_check(F.p1911))).f_lo == INT64_C(0))))) && ((!(((*(yR104 *)rt_nil_check(F.p1911))).f_kind == v806)))) && ((!(((*(yR104 *)rt_nil_check(F.p1911))).f_kind == v809))))) {
{ rt_int rv4779 = yr1711_Path(((*(yR104 *)rt_nil_check(F.p1911))).f_dlevel, ((*(yR104 *)rt_nil_check(F.p1911))).f_lo);
return rv4779; }
}
{ rt_int rv4780 = ((*(yR104 *)rt_nil_check(F.p1911))).f_lo;
return rv4780; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1916_HiText(void * a_p1917) {
struct yf1918 F;
memset((void *)&F, 0, sizeof F);
F.p1917 = a_p1917;
if ((((((!(((*(yR104 *)rt_nil_check(F.p1917))).f_dname == INT64_C(0)))) && ((!(((*(yR104 *)rt_nil_check(F.p1917))).f_hi == INT64_C(0))))) && ((!(((*(yR104 *)rt_nil_check(F.p1917))).f_kind == v806)))) && ((!(((*(yR104 *)rt_nil_check(F.p1917))).f_kind == v809))))) {
{ rt_int rv4785 = yr1711_Path(((*(yR104 *)rt_nil_check(F.p1917))).f_dlevel, ((*(yR104 *)rt_nil_check(F.p1917))).f_hi);
return rv4785; }
}
{ rt_int rv4786 = ((*(yR104 *)rt_nil_check(F.p1917))).f_hi;
return rv4786; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1922_AdoptLiteral(void * a_p1923, void * a_p1924, void * a_p1925) {
struct yf1926 F;
memset((void *)&F, 0, sizeof F);
F.p1923 = a_p1923;
F.p1924 = a_p1924;
F.p1925 = a_p1925;
if ((((!yr1896_IsLiteralNode(F.p1923)) || ((!(((*(yR104 *)rt_nil_check(F.p1924))).f_kind == ((*(yR104 *)rt_nil_check(F.p1925))).f_kind)))) || (!yr1786_IsNumeric(F.p1925)))) {
{ void * rv4793 = F.p1924;
return rv4793; }
}
if (yr1930_HasQualifier(F.p1923)) {
{ void * rv4794 = F.p1924;
return rv4794; }
}
F.v4792 = yr1774_CopyRep(F.p1924);
((*(yR104 *)rt_nil_check(F.v4792))).f_tid = ((*(yR104 *)rt_nil_check(F.p1925))).f_tid;
((*(yR104 *)rt_nil_check(F.v4792))).f_tname = ((*(yR104 *)rt_nil_check(F.p1925))).f_tname;
{ void * rv4795 = F.v4792;
return rv4795; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1930_HasQualifier(void * a_p1931) {
struct yf1932 F;
memset((void *)&F, 0, sizeof F);
F.p1931 = a_p1931;
if ((((((*(yR99 *)rt_nil_check(F.p1931))).f_kind == v779)) || ((((*(yR99 *)rt_nil_check(F.p1931))).f_kind == v785)))) {
{ rt_int rv4798 = yr1930_HasQualifier(((*(yR99 *)rt_nil_check(F.p1931))).f_a);
return rv4798; }
}
{ rt_int rv4799 = (!(((*(yR99 *)rt_nil_check(F.p1931))).f_d == ((void *)0)));
return rv4799; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1936_Gcd(rt_int a_p1937, rt_int a_p1938) {
struct yf1939 F;
memset((void *)&F, 0, sizeof F);
F.p1937 = a_p1937;
F.p1938 = a_p1938;
F.v4804 = F.p1937;
F.v4806 = F.p1938;
if ((F.v4804 < INT64_C(0))) {
F.v4804 = rt_range(rt_neg(F.v4804), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v4806 < INT64_C(0))) {
F.v4806 = rt_range(rt_neg(F.v4806), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
while ((!(F.v4806 == INT64_C(0)))) {
F.v4808 = rt_range(rt_mod(F.v4804, F.v4806), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4804 = F.v4806;
F.v4806 = F.v4808;
}
if ((F.v4804 == INT64_C(0))) {
{ rt_int rv4817 = INT64_C(1);
return rv4817; }
}
{ rt_int rv4818 = F.v4804;
return rv4818; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1943_MulChk(rt_int a_p1944, rt_int a_p1945, rt_int a_p1946) {
struct yf1947 F;
memset((void *)&F, 0, sizeof F);
F.p1944 = a_p1944;
F.p1945 = a_p1945;
F.p1946 = a_p1946;
F.v4824 = F.p1944;
F.v4826 = F.p1945;
if ((F.v4824 < INT64_C(0))) {
F.v4824 = rt_range(rt_neg(F.v4824), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v4826 < INT64_C(0))) {
F.v4826 = rt_range(rt_neg(F.v4826), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((((!(F.v4824 == INT64_C(0)))) && ((F.v4826 > (rt_div(v890, F.v4824)))))) {
yr1144_FailS(F.p1946, y_str("a scale beyond this implementation: fixed-point scales are fractions of 64-bit integers", 87));
}
{ rt_int rv4835 = rt_range(rt_mul(F.p1944, F.p1945), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return rv4835; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1951_PowChk(rt_int a_p1952, rt_int a_p1953, rt_int a_p1954) {
struct yf1955 F;
memset((void *)&F, 0, sizeof F);
F.p1952 = a_p1952;
F.p1953 = a_p1953;
F.p1954 = a_p1954;
F.v4841 = INT64_C(1);
F.lo4846 = INT64_C(1);
F.hi4847 = F.p1953;
{ rt_int hi4851 = F.hi4847;
for (rt_int i4850 = F.lo4846; i4850 <= hi4851; i4850++) { F.c_4849 = i4850;
F.v4841 = yr1943_MulChk(F.v4841, F.p1952, F.p1954);
if (i4850 == hi4851) break;
}}
{ rt_int rv4852 = F.v4841;
return rv4852; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1959_ScaleRatio(void * a_p1960, void * a_p1961, rt_int * a_p1962, rt_int * a_p1963, rt_int * a_p1964) {
struct yf1965 F;
memset((void *)&F, 0, sizeof F);
F.p1960 = a_p1960;
F.p1961 = a_p1961;
F.p1962_o = a_p1962;
F.p1963_o = a_p1963;
F.p1964_o = a_p1964;
F.p1962 = yr1041_T(y_str("1", 1));
F.p1963 = yr1041_T(y_str("1", 1));
F.p1964 = 1;
if ((((((*(yR104 *)rt_nil_check(F.p1960))).f_fsd == INT64_C(0))) || ((((*(yR104 *)rt_nil_check(F.p1961))).f_fsd == INT64_C(0))))) {
(*F.p1962_o) = F.p1962;
(*F.p1963_o) = F.p1963;
(*F.p1964_o) = F.p1964;
return;
}
F.v4860 = yr1936_Gcd(((*(yR104 *)rt_nil_check(F.p1960))).f_fsn, ((*(yR104 *)rt_nil_check(F.p1961))).f_fsn);
F.v4862 = yr1936_Gcd(((*(yR104 *)rt_nil_check(F.p1960))).f_fsd, ((*(yR104 *)rt_nil_check(F.p1961))).f_fsd);
F.v4864 = rt_range(rt_div(((*(yR104 *)rt_nil_check(F.p1960))).f_fsn, F.v4860), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4866 = rt_range(rt_div(((*(yR104 *)rt_nil_check(F.p1961))).f_fsd, F.v4862), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4868 = rt_range(rt_div(((*(yR104 *)rt_nil_check(F.p1960))).f_fsd, F.v4862), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4870 = rt_range(rt_div(((*(yR104 *)rt_nil_check(F.p1961))).f_fsn, F.v4860), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.p1964 = (((((F.v4864 == INT64_C(1))) && ((F.v4866 == INT64_C(1)))) && ((F.v4868 == INT64_C(1)))) && ((F.v4870 == INT64_C(1))));
F.p1962 = yr1969_Factor(F.v4864, F.v4866);
F.p1963 = yr1969_Factor(F.v4868, F.v4870);
(*F.p1962_o) = F.p1962;
(*F.p1963_o) = F.p1963;
(*F.p1964_o) = F.p1964;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1969_Factor(rt_int a_p1970, rt_int a_p1971) {
struct yf1972 F;
memset((void *)&F, 0, sizeof F);
F.p1970 = a_p1970;
F.p1971 = a_p1971;
yr1006_SB();
yr1017_SA(y_str("((yfix)INT64_C(", 15));
yr1030_SI(F.p1970);
yr1017_SA(y_str(")", 1));
if ((!(F.p1971 == INT64_C(1)))) {
yr1017_SA(y_str(" * INT64_C(", 11));
yr1030_SI(F.p1971);
yr1017_SA(y_str(")", 1));
}
yr1017_SA(y_str(")", 1));
{ rt_int rv4893 = yr1036_SE();
return rv4893; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1976_SetScale(void * a_p1977, rt_int a_p1978, rt_int a_p1979) {
struct yf1980 F;
memset((void *)&F, 0, sizeof F);
F.p1977 = a_p1977;
F.p1978 = a_p1978;
F.p1979 = a_p1979;
F.v4899 = yr1936_Gcd(F.p1978, F.p1979);
((*(yR104 *)rt_nil_check(F.p1977))).f_fsn = rt_range(rt_div(F.p1978, F.v4899), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR104 *)rt_nil_check(F.p1977))).f_fsd = rt_range(rt_div(F.p1979, F.v4899), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((*(yR104 *)rt_nil_check(F.p1977))).f_fsd < INT64_C(0))) {
((*(yR104 *)rt_nil_check(F.p1977))).f_fsn = rt_range(rt_neg(((*(yR104 *)rt_nil_check(F.p1977))).f_fsn), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR104 *)rt_nil_check(F.p1977))).f_fsd = rt_range(rt_neg(((*(yR104 *)rt_nil_check(F.p1977))).f_fsd), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1984_Qualify(void * a_p1985, void * a_p1986) {
struct yf1987 F;
memset((void *)&F, 0, sizeof F);
F.p1985 = a_p1985;
F.p1986 = a_p1986;
if ((((*(yR104 *)rt_nil_check(F.p1985))).f_kind == v791)) {
if ((((*(yR99 *)rt_nil_check(F.p1986))).f_c == ((void *)0))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p1986))).f_line, y_str("FIXED needs SCALE (VI.A.1.b)", 28));
}
yr2301_ManifestFix(((*(yR99 *)rt_nil_check(F.p1986))).f_c, &F.v4921, &F.v4927, &F.v4929);
if (((!F.v4921) || ((F.v4927 <= INT64_C(0))))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p1986))).f_line, y_str("SCALE is a positive manifest constant (VI.A.1.b, VI.C)", 54));
}
((*(yR104 *)rt_nil_check(F.p1985))).f_fsn = F.v4927;
((*(yR104 *)rt_nil_check(F.p1985))).f_fsd = F.v4929;
yr1006_SB();
yr1030_SI(F.v4927);
yr1017_SA(y_str("/", 1));
yr1030_SI(F.v4929);
((*(yR104 *)rt_nil_check(F.p1985))).f_scale = yr1036_SE();
}
yr2383_Expr(((*(yR99 *)rt_nil_check(F.p1986))).f_a, F.p1985, &F.v4909, &F.v4917);
yr2383_Expr(((*(yR99 *)rt_nil_check(F.p1986))).f_b, F.p1985, &F.v4911, &F.v4919);
F.v4917 = yr1922_AdoptLiteral(((*(yR99 *)rt_nil_check(F.p1986))).f_a, F.v4917, F.p1985);
F.v4919 = yr1922_AdoptLiteral(((*(yR99 *)rt_nil_check(F.p1986))).f_b, F.v4919, F.p1985);
if ((((*(yR104 *)rt_nil_check(F.p1985))).f_kind == v791)) {
yr1862_CheckType(((*(yR99 *)rt_nil_check(F.p1986))).f_line, F.p1985, F.v4917);
yr1862_CheckType(((*(yR99 *)rt_nil_check(F.p1986))).f_line, F.p1985, F.v4919);
yr1959_ScaleRatio(F.v4917, F.p1985, &F.v4913, &F.v4915, &F.v4923);
((*(yR104 *)rt_nil_check(F.p1985))).f_lo = yr2860_Join(yr1041_T(y_str("y_fix_bound(", 12)), F.v4909, yr2860_Join(yr1041_T(y_str(", ", 2)), F.v4913, yr2860_Join(yr1041_T(y_str(", ", 2)), F.v4915, yr1041_T(y_str(", 1)", 4)))));
yr1959_ScaleRatio(F.v4919, F.p1985, &F.v4913, &F.v4915, &F.v4923);
((*(yR104 *)rt_nil_check(F.p1985))).f_hi = yr2860_Join(yr1041_T(y_str("y_fix_bound(", 12)), F.v4911, yr2860_Join(yr1041_T(y_str(", ", 2)), F.v4913, yr2860_Join(yr1041_T(y_str(", ", 2)), F.v4915, yr1041_T(y_str(", 0)", 4)))));
((*(yR104 *)rt_nil_check(F.p1985))).f_dname = INT64_C(0);
yr1902_StoreBounds(F.p1985, y_str("yfix", 4));
((*(yR104 *)rt_nil_check(F.p1985))).f_abstract = 0;
return;
}
if ((((*(yR104 *)rt_nil_check(F.p1985))).f_kind == v794)) {
yr1862_CheckType(((*(yR99 *)rt_nil_check(F.p1986))).f_line, F.p1985, F.v4917);
yr1862_CheckType(((*(yR99 *)rt_nil_check(F.p1986))).f_line, F.p1985, F.v4919);
((*(yR104 *)rt_nil_check(F.p1985))).f_lo = F.v4909;
((*(yR104 *)rt_nil_check(F.p1985))).f_hi = F.v4911;
((*(yR104 *)rt_nil_check(F.p1985))).f_dname = INT64_C(0);
if ((!((yr1896_IsLiteralNode(((*(yR99 *)rt_nil_check(F.p1986))).f_a) && yr1896_IsLiteralNode(((*(yR99 *)rt_nil_check(F.p1986))).f_b))))) {
yr1902_StoreBounds(F.p1985, y_str("double", 6));
}
if ((((*(yR99 *)rt_nil_check(F.p1986))).f_d == ((void *)0))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p1986))).f_line, y_str("FLOATING needs PRECISION (VI.A.1.c)", 35));
}
yr2235_Manifest(((*(yR99 *)rt_nil_check(F.p1986))).f_d, &F.v4921, &F.v4925);
if ((!F.v4921)) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p1986))).f_line, y_str("PRECISION is a manifest constant", 32));
}
if ((((F.v4925 < INT64_C(1))) || ((F.v4925 > INT64_C(15))))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p1986))).f_line, y_str("PRECISION beyond this implementation: its floating point holds 15 decimal digits (Appendix C)", 93));
}
yr1006_SB();
yr1030_SI(F.v4925);
((*(yR104 *)rt_nil_check(F.p1985))).f_prec = yr1036_SE();
((*(yR104 *)rt_nil_check(F.p1985))).f_abstract = 0;
return;
}
if ((!yr1780_IsDiscrete(F.p1985))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p1986))).f_line, y_str("only a scalar or integer representation takes a range", 53));
}
if ((((!(((*(yR99 *)rt_nil_check(F.p1986))).f_c == ((void *)0)))) || ((!(((*(yR99 *)rt_nil_check(F.p1986))).f_d == ((void *)0)))))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p1986))).f_line, y_str("SCALE and PRECISION qualify numbers", 35));
}
yr1862_CheckType(((*(yR99 *)rt_nil_check(F.p1986))).f_line, F.p1985, F.v4917);
yr1862_CheckType(((*(yR99 *)rt_nil_check(F.p1986))).f_line, F.p1985, F.v4919);
((*(yR104 *)rt_nil_check(F.p1985))).f_lo = F.v4909;
((*(yR104 *)rt_nil_check(F.p1985))).f_hi = F.v4911;
yr2235_Manifest(((*(yR99 *)rt_nil_check(F.p1986))).f_a, &F.v4921, &((*(yR104 *)rt_nil_check(F.p1985))).f_mlo);
((*(yR104 *)rt_nil_check(F.p1985))).f_hasm = F.v4921;
yr2235_Manifest(((*(yR99 *)rt_nil_check(F.p1986))).f_b, &F.v4921, &((*(yR104 *)rt_nil_check(F.p1985))).f_mhi);
((*(yR104 *)rt_nil_check(F.p1985))).f_hasm = (((*(yR104 *)rt_nil_check(F.p1985))).f_hasm && F.v4921);
((*(yR104 *)rt_nil_check(F.p1985))).f_abstract = 0;
((*(yR104 *)rt_nil_check(F.p1985))).f_dname = INT64_C(0);
if ((!((*(yR104 *)rt_nil_check(F.p1985))).f_hasm)) {
yr1902_StoreBounds(F.p1985, y_str("rt_int", 6));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1991_DefineLits(void * a_p1992) {
struct yf1993 F;
memset((void *)&F, 0, sizeof F);
F.p1992 = a_p1992;
F.v4961 = ((*(yR104 *)rt_nil_check(F.p1992))).f_lits;
F.v4965 = INT64_C(0);
while ((!(F.v4961 == ((void *)0)))) {
if ((!(yr1672_Find(((*(yR99 *)rt_nil_check(F.v4961))).f_name) == ((void *)0)))) {
F.v4963 = yr1672_Find(((*(yR99 *)rt_nil_check(F.v4961))).f_name);
if ((((!(((*(yR119 *)rt_nil_check(F.v4963))).f_kind == v857))) && ((((*(yR119 *)rt_nil_check(F.v4963))).f_depth == v1617)))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.v4961))).f_line, ((*(yR99 *)rt_nil_check(F.v4961))).f_name, y_str(" is declared twice in this scope", 32));
}
}
F.v4963 = yr1648_NewSym(v857, ((*(yR99 *)rt_nil_check(F.v4961))).f_name);
((*(yR119 *)rt_nil_check(F.v4963))).f_rep = F.p1992;
((*(yR119 *)rt_nil_check(F.v4963))).f_mval = F.v4965;
((*(yR119 *)rt_nil_check(F.v4963))).f_hasmv = 1;
yr1704_Define(F.v4963, ((*(yR99 *)rt_nil_check(F.v4961))).f_line);
F.v4965 = rt_range(rt_add(F.v4965, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4961 = ((*(yR99 *)rt_nil_check(F.v4961))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1997_SetRange(void * a_p1998, rt_int a_p1999, rt_int a_p2000) {
struct yf2001 F;
memset((void *)&F, 0, sizeof F);
F.p1998 = a_p1998;
F.p1999 = a_p1999;
F.p2000 = a_p2000;
yr1006_SB();
yr1030_SI(F.p1999);
((*(yR104 *)rt_nil_check(F.p1998))).f_lo = yr1036_SE();
yr1006_SB();
yr1030_SI(F.p2000);
((*(yR104 *)rt_nil_check(F.p1998))).f_hi = yr1036_SE();
((*(yR104 *)rt_nil_check(F.p1998))).f_mlo = F.p1999;
((*(yR104 *)rt_nil_check(F.p1998))).f_mhi = F.p2000;
((*(yR104 *)rt_nil_check(F.p1998))).f_hasm = 1;
((*(yR104 *)rt_nil_check(F.p1998))).f_dname = INT64_C(0);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2005_NewTid(rt_int a_p2006) {
struct yf2007 F;
memset((void *)&F, 0, sizeof F);
F.p2006 = a_p2006;
F.v4980 = yr1161_NewSerial();
yr1006_SB();
if ((!(F.p2006 == INT64_C(0)))) {
yr1024_ST(F.p2006);
} else {
yr1017_SA(y_str("anonymous", 9));
}
yr1017_SA(y_str("#", 1));
yr1030_SI(F.v4980);
{ rt_int rv4984 = yr1036_SE();
return rv4984; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2011_MakeRep(void * a_p2012, rt_int a_p2013, rt_int a_p2014) {
struct yf2015 F;
memset((void *)&F, 0, sizeof F);
F.p2012 = a_p2012;
F.p2013 = a_p2013;
F.p2014 = a_p2014;
F.v4990 = yr2026_MakeRep1(F.p2012, F.p2013, F.p2014);
if ((!(((*(yR99 *)rt_nil_check(F.p2012))).f_text == INT64_C(0)))) {
F.v4992 = yr1737_Real(yr1684_Lookup(((*(yR99 *)rt_nil_check(F.p2012))).f_text, ((*(yR99 *)rt_nil_check(F.p2012))).f_line));
if (((!yr2019_Conforms(((*(yR119 *)rt_nil_check(F.v4992))).f_rep, F.v4990)) || ((((((*(yR99 *)rt_nil_check(F.p2012))).f_kind == v656)) && ((!(((*(yR104 *)rt_nil_check(F.v4990))).f_tid == ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v4992))).f_rep))).f_tid))))))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2012))).f_line, ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v4992))).f_rep))).f_tname, y_str(": the concrete type is not a representation of this type (rule 61, VII.G)", 73));
}
}
{ void * rv4995 = F.v4990;
return rv4995; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2019_Conforms(void * a_p2020, void * a_p2021) {
struct yf2022 F;
memset((void *)&F, 0, sizeof F);
F.p2020 = a_p2020;
F.p2021 = a_p2021;
if ((!(((*(yR104 *)rt_nil_check(F.p2020))).f_kind == ((*(yR104 *)rt_nil_check(F.p2021))).f_kind))) {
{ rt_int rv5012 = 0;
return rv5012; }
}
if ((((*(yR104 *)rt_nil_check(F.p2020))).f_kind == v809)) {
F.v5000 = ((*(yR104 *)rt_nil_check(F.p2020))).f_fields;
F.v5002 = ((*(yR104 *)rt_nil_check(F.p2021))).f_fields;
while ((((!(F.v5000 == ((void *)0)))) && ((!(F.v5002 == ((void *)0)))))) {
if (((((!(((*(yR109 *)rt_nil_check(F.v5000))).f_name == ((*(yR109 *)rt_nil_check(F.v5002))).f_name))) || ((!(((*(yR109 *)rt_nil_check(F.v5000))).f_isconst == ((*(yR109 *)rt_nil_check(F.v5002))).f_isconst)))) || ((!(((*(yR109 *)rt_nil_check(F.v5000))).f_variant == ((*(yR109 *)rt_nil_check(F.v5002))).f_variant))))) {
{ rt_int rv5014 = 0;
return rv5014; }
}
if ((!yr1847_SameType(((*(yR109 *)rt_nil_check(F.v5000))).f_rep, ((*(yR109 *)rt_nil_check(F.v5002))).f_rep))) {
{ rt_int rv5016 = 0;
return rv5016; }
}
F.v5000 = ((*(yR109 *)rt_nil_check(F.v5000))).f_next;
F.v5002 = ((*(yR109 *)rt_nil_check(F.v5002))).f_next;
}
{ rt_int rv5017 = (((F.v5000 == ((void *)0))) && ((F.v5002 == ((void *)0))));
return rv5017; }
}
if ((((*(yR104 *)rt_nil_check(F.p2020))).f_kind == v806)) {
if ((!(((*(yR104 *)rt_nil_check(F.p2020))).f_nidx == ((*(yR104 *)rt_nil_check(F.p2021))).f_nidx))) {
{ rt_int rv5019 = 0;
return rv5019; }
}
F.v5004 = ((*(yR104 *)rt_nil_check(F.p2020))).f_idx;
F.v5006 = ((*(yR104 *)rt_nil_check(F.p2021))).f_idx;
while ((!(F.v5004 == ((void *)0)))) {
if ((!yr1889_Identical(F.v5004, F.v5006))) {
{ rt_int rv5021 = 0;
return rv5021; }
}
F.v5004 = ((*(yR104 *)rt_nil_check(F.v5004))).f_link;
F.v5006 = ((*(yR104 *)rt_nil_check(F.v5006))).f_link;
}
{ rt_int rv5022 = yr1847_SameType(((*(yR104 *)rt_nil_check(F.p2020))).f_elem, ((*(yR104 *)rt_nil_check(F.p2021))).f_elem);
return rv5022; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2020))).f_kind == v800)) || ((((*(yR104 *)rt_nil_check(F.p2020))).f_kind == v803)))) {
if ((!(((*(yR104 *)rt_nil_check(F.p2020))).f_nlits == ((*(yR104 *)rt_nil_check(F.p2021))).f_nlits))) {
{ rt_int rv5024 = 0;
return rv5024; }
}
F.v5008 = ((*(yR104 *)rt_nil_check(F.p2020))).f_lits;
F.v5010 = ((*(yR104 *)rt_nil_check(F.p2021))).f_lits;
while ((((!(F.v5008 == ((void *)0)))) && ((!(F.v5010 == ((void *)0)))))) {
if ((((!(((*(yR99 *)rt_nil_check(F.v5008))).f_name == ((*(yR99 *)rt_nil_check(F.v5010))).f_name))) || (!yr1068_TEq(((*(yR99 *)rt_nil_check(F.v5008))).f_text, ((*(yR99 *)rt_nil_check(F.v5010))).f_text)))) {
{ rt_int rv5026 = 0;
return rv5026; }
}
F.v5008 = ((*(yR99 *)rt_nil_check(F.v5008))).f_next;
F.v5010 = ((*(yR99 *)rt_nil_check(F.v5010))).f_next;
}
{ rt_int rv5028 = 1;
return rv5028; }
}
if (((((((*(yR104 *)rt_nil_check(F.p2020))).f_kind == v818)) || ((((*(yR104 *)rt_nil_check(F.p2020))).f_kind == v815))) || ((((*(yR104 *)rt_nil_check(F.p2020))).f_kind == v812)))) {
if ((((((*(yR104 *)rt_nil_check(F.p2020))).f_elem == ((void *)0))) || ((((*(yR104 *)rt_nil_check(F.p2021))).f_elem == ((void *)0))))) {
{ rt_int rv5030 = 1;
return rv5030; }
}
{ rt_int rv5031 = yr1847_SameType(((*(yR104 *)rt_nil_check(F.p2020))).f_elem, ((*(yR104 *)rt_nil_check(F.p2021))).f_elem);
return rv5031; }
}
{ rt_int rv5033 = 1;
return rv5033; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2026_MakeRep1(void * a_p2027, rt_int a_p2028, rt_int a_p2029) {
struct yf2030 F;
memset((void *)&F, 0, sizeof F);
F.p2027 = a_p2027;
F.p2028 = a_p2028;
F.p2029 = a_p2029;
F.v5049 = ((*(yR99 *)rt_nil_check(F.p2027))).f_kind;
F.v5053 = INT64_C(0);
F.v5055 = F.p2028;
if ((!(((*(yR99 *)rt_nil_check(F.p2027))).f_text == INT64_C(0)))) {
F.v5047 = yr1737_Real(yr1684_Lookup(((*(yR99 *)rt_nil_check(F.p2027))).f_text, ((*(yR99 *)rt_nil_check(F.p2027))).f_line));
if ((((!(((*(yR119 *)rt_nil_check(F.v5047))).f_kind == v854))) && ((!(((*(yR119 *)rt_nil_check(F.v5047))).f_kind == v851))))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2027))).f_line, ((*(yR99 *)rt_nil_check(F.p2027))).f_text, y_str(" is not a type", 14));
}
F.v5053 = ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5047))).f_rep))).f_tid;
F.v5055 = ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5047))).f_rep))).f_tname;
}
if ((F.v5049 == v656)) {
F.v5047 = yr1737_Real(yr1684_Lookup(((*(yR99 *)rt_nil_check(F.p2027))).f_name, ((*(yR99 *)rt_nil_check(F.p2027))).f_line));
if ((((!(((*(yR119 *)rt_nil_check(F.v5047))).f_kind == v854))) && ((!(((*(yR119 *)rt_nil_check(F.v5047))).f_kind == v851))))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2027))).f_line, ((*(yR99 *)rt_nil_check(F.p2027))).f_name, y_str(" is not a representation", 24));
}
F.v5039 = ((*(yR119 *)rt_nil_check(F.v5047))).f_rep;
if ((!(((*(yR99 *)rt_nil_check(F.p2027))).f_a == ((void *)0)))) {
F.v5039 = yr1774_CopyRep(F.v5039);
yr1984_Qualify(F.v5039, ((*(yR99 *)rt_nil_check(F.p2027))).f_a);
}
{ void * rv5060 = F.v5039;
return rv5060; }
}
if ((F.v5053 == INT64_C(0))) {
F.v5053 = yr2005_NewTid(F.p2028);
if ((F.v5055 == INT64_C(0))) {
F.v5055 = F.v5053;
}
}
if ((F.v5049 == v659)) {
F.v5039 = yr1767_NewRep(v800, F.v5053);
((*(yR104 *)rt_nil_check(F.v5039))).f_tname = F.v5055;
((*(yR104 *)rt_nil_check(F.v5039))).f_ordered = (((*(yR99 *)rt_nil_check(F.p2027))).f_flag == INT64_C(1));
((*(yR104 *)rt_nil_check(F.v5039))).f_lits = ((*(yR99 *)rt_nil_check(F.p2027))).f_a;
((*(yR104 *)rt_nil_check(F.v5039))).f_nlits = yr1305_Count(((*(yR99 *)rt_nil_check(F.p2027))).f_a);
yr1997_SetRange(F.v5039, INT64_C(0), rt_range(rt_sub(((*(yR104 *)rt_nil_check(F.v5039))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1991_DefineLits(F.v5039);
if ((!(((*(yR99 *)rt_nil_check(F.p2027))).f_b == ((void *)0)))) {
yr1984_Qualify(F.v5039, ((*(yR99 *)rt_nil_check(F.p2027))).f_b);
}
{ void * rv5067 = F.v5039;
return rv5067; }
}
if ((F.v5049 == v662)) {
F.v5039 = yr1767_NewRep(v803, F.v5053);
((*(yR104 *)rt_nil_check(F.v5039))).f_tname = F.v5055;
((*(yR104 *)rt_nil_check(F.v5039))).f_ordered = 1;
((*(yR104 *)rt_nil_check(F.v5039))).f_lits = ((*(yR99 *)rt_nil_check(F.p2027))).f_a;
((*(yR104 *)rt_nil_check(F.v5039))).f_nlits = yr1305_Count(((*(yR99 *)rt_nil_check(F.p2027))).f_a);
if ((((*(yR104 *)rt_nil_check(F.v5039))).f_nlits > INT64_C(256))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2027))).f_line, y_str("this implementation takes alphabets of up to 256 characters", 59));
}
yr1997_SetRange(F.v5039, INT64_C(0), rt_range(rt_sub(((*(yR104 *)rt_nil_check(F.v5039))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((!(((*(yR99 *)rt_nil_check(F.p2027))).f_b == ((void *)0)))) {
yr1984_Qualify(F.v5039, ((*(yR99 *)rt_nil_check(F.p2027))).f_b);
}
{ void * rv5074 = F.v5039;
return rv5074; }
}
if ((F.v5049 == v665)) {
F.v5039 = yr1767_NewRep(v806, F.v5053);
((*(yR104 *)rt_nil_check(F.v5039))).f_tname = F.v5055;
F.v5051 = ((*(yR99 *)rt_nil_check(F.p2027))).f_a;
F.v5045 = ((void *)0);
while ((!(F.v5051 == ((void *)0)))) {
F.v5043 = yr1774_CopyRep(yr2011_MakeRep(F.v5051, INT64_C(0), 0));
if ((!yr1780_IsDiscrete(F.v5043))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.v5051))).f_line, y_str("an index is an integer or scalar representation", 47));
}
yr1870_CheckRepresented(F.v5043, ((*(yR99 *)rt_nil_check(F.v5051))).f_line);
((*(yR104 *)rt_nil_check(F.v5043))).f_link = ((void *)0);
if ((F.v5045 == ((void *)0))) {
((*(yR104 *)rt_nil_check(F.v5039))).f_idx = F.v5043;
} else {
((*(yR104 *)rt_nil_check(F.v5045))).f_link = F.v5043;
}
F.v5045 = F.v5043;
((*(yR104 *)rt_nil_check(F.v5039))).f_nidx = rt_range(rt_add(((*(yR104 *)rt_nil_check(F.v5039))).f_nidx, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5051 = ((*(yR99 *)rt_nil_check(F.v5051))).f_next;
}
if ((((*(yR104 *)rt_nil_check(F.v5039))).f_nidx > INT64_C(4))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2027))).f_line, y_str("this implementation takes arrays of up to 4 dimensions", 54));
}
((*(yR104 *)rt_nil_check(F.v5039))).f_elem = yr2011_MakeRep(((*(yR99 *)rt_nil_check(F.p2027))).f_b, INT64_C(0), F.p2029);
if ((!F.p2029)) {
yr1870_CheckRepresented(((*(yR104 *)rt_nil_check(F.v5039))).f_elem, ((*(yR99 *)rt_nil_check(F.p2027))).f_line);
yr2046_BuildArrayDesc(F.v5039);
} else {
((*(yR104 *)rt_nil_check(F.v5039))).f_abstract = ((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.v5039))).f_elem))).f_abstract;
if ((!((*(yR104 *)rt_nil_check(F.v5039))).f_abstract)) {
yr2046_BuildArrayDesc(F.v5039);
}
}
((*(yR104 *)rt_nil_check(F.v5039))).f_deep = 1;
{ void * rv5084 = F.v5039;
return rv5084; }
}
if ((F.v5049 == v668)) {
F.v5039 = yr1767_NewRep(v809, F.v5053);
((*(yR104 *)rt_nil_check(F.v5039))).f_tname = F.v5055;
yr2076_MakeRecord(F.v5039, F.p2027, F.p2029);
{ void * rv5085 = F.v5039;
return rv5085; }
}
if (((((F.v5049 == v674)) || ((F.v5049 == v671))) || ((F.v5049 == v677)))) {
if ((F.v5049 == v674)) {
F.v5039 = yr1767_NewRep(v812, F.v5053);
((*(yR104 *)rt_nil_check(F.v5039))).f_tname = F.v5055;
if (((((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2027))).f_a))).f_kind == v656)) && ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2027))).f_a))).f_a == ((void *)0)))) && ((yr1672_Find(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2027))).f_a))).f_name) == ((void *)0))))) {
((*(yR104 *)rt_nil_check(F.v5039))).f_forward = ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2027))).f_a))).f_name;
((*(yR104 *)rt_nil_check(F.v5039))).f_fwdscope = v1617;
F.v5051 = yr1290_NewNode(v653, ((*(yR99 *)rt_nil_check(F.p2027))).f_line);
((*(yR99 *)rt_nil_check(F.v5051))).f_rep = F.v5039;
((*(yR99 *)rt_nil_check(F.v5051))).f_next = v1765;
v1765 = F.v5051;
{ void * rv5086 = F.v5039;
return rv5086; }
}
((*(yR104 *)rt_nil_check(F.v5039))).f_elem = yr2011_MakeRep(((*(yR99 *)rt_nil_check(F.p2027))).f_a, INT64_C(0), 0);
{ void * rv5089 = F.v5039;
return rv5089; }
}
if ((F.v5049 == v671)) {
F.v5039 = yr1767_NewRep(v815, F.v5053);
((*(yR104 *)rt_nil_check(F.v5039))).f_tname = F.v5055;
((*(yR104 *)rt_nil_check(F.v5039))).f_elem = yr2011_MakeRep(((*(yR99 *)rt_nil_check(F.p2027))).f_a, INT64_C(0), F.p2029);
{ void * rv5091 = F.v5039;
return rv5091; }
}
F.v5039 = yr1767_NewRep(v818, F.v5053);
((*(yR104 *)rt_nil_check(F.v5039))).f_tname = F.v5055;
((*(yR104 *)rt_nil_check(F.v5039))).f_elem = yr2011_MakeRep(((*(yR99 *)rt_nil_check(F.p2027))).f_a, INT64_C(0), 0);
if ((!yr1780_IsDiscrete(((*(yR104 *)rt_nil_check(F.v5039))).f_elem))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2027))).f_line, y_str("a set is of an integer or scalar representation", 47));
}
yr1870_CheckRepresented(((*(yR104 *)rt_nil_check(F.v5039))).f_elem, ((*(yR99 *)rt_nil_check(F.p2027))).f_line);
{ void * rv5095 = F.v5039;
return rv5095; }
}
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2027))).f_line, y_str("this representation is not translated", 37));
{ void * rv5097 = ((void *)0);
return rv5097; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2034_ResolvePending(rt_int a_p2035, void * a_p2036) {
struct yf2037 F;
memset((void *)&F, 0, sizeof F);
F.p2035 = a_p2035;
F.p2036 = a_p2036;
F.v5102 = v1765;
F.v5104 = ((void *)0);
while ((!(F.v5102 == ((void *)0)))) {
if ((((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v5102))).f_rep))).f_forward == F.p2035)) {
((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v5102))).f_rep))).f_elem = F.p2036;
((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v5102))).f_rep))).f_forward = INT64_C(0);
if ((F.v5104 == ((void *)0))) {
v1765 = ((*(yR99 *)rt_nil_check(F.v5102))).f_next;
} else {
((*(yR99 *)rt_nil_check(F.v5104))).f_next = ((*(yR99 *)rt_nil_check(F.v5102))).f_next;
}
} else {
F.v5104 = F.v5102;
}
F.v5102 = ((*(yR99 *)rt_nil_check(F.v5102))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2041_CheckPending(void) {
struct yf2042 F;
memset((void *)&F, 0, sizeof F);
F.v5108 = v1765;
while ((!(F.v5108 == ((void *)0)))) {
if ((((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v5108))).f_rep))).f_fwdscope >= v1617)) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.v5108))).f_line, ((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v5108))).f_rep))).f_forward, y_str(" is named by a pointer but not declared", 39));
}
F.v5108 = ((*(yR99 *)rt_nil_check(F.v5108))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2046_BuildArrayDesc(void * a_p2047) {
struct yf2048 F;
memset((void *)&F, 0, sizeof F);
F.p2047 = a_p2047;
yr1841_NewDesc(F.p2047);
yr1006_SB();
yr1017_SA(y_str("{ rt_int lo[", 12));
yr1030_SI(((*(yR104 *)rt_nil_check(F.p2047))).f_nidx);
yr1017_SA(y_str("] = {", 5));
F.v5113 = ((*(yR104 *)rt_nil_check(F.p2047))).f_idx;
F.v5117 = 1;
while ((!(F.v5113 == ((void *)0)))) {
if ((!F.v5117)) {
yr1017_SA(y_str(", ", 2));
}
F.v5117 = 0;
yr1024_ST(yr1910_LoText(F.v5113));
F.v5113 = ((*(yR104 *)rt_nil_check(F.v5113))).f_link;
}
yr1017_SA(y_str("}, hi[", 6));
yr1030_SI(((*(yR104 *)rt_nil_check(F.p2047))).f_nidx);
yr1017_SA(y_str("] = {", 5));
F.v5113 = ((*(yR104 *)rt_nil_check(F.p2047))).f_idx;
F.v5117 = 1;
while ((!(F.v5113 == ((void *)0)))) {
if ((!F.v5117)) {
yr1017_SA(y_str(", ", 2));
}
F.v5117 = 0;
yr1024_ST(yr1916_HiText(F.v5113));
F.v5113 = ((*(yR104 *)rt_nil_check(F.v5113))).f_link;
}
yr1017_SA(y_str("}; y_desc_array(", 16));
yr1024_ST(yr1835_DescOf(F.p2047));
yr1017_SA(y_str(", ", 2));
yr1030_SI(((*(yR104 *)rt_nil_check(F.p2047))).f_nidx);
yr1017_SA(y_str(", lo, hi, ", 10));
yr1024_ST(yr1835_DescOf(((*(yR104 *)rt_nil_check(F.p2047))).f_elem));
yr1017_SA(y_str("); }", 4));
F.v5115 = yr1036_SE();
yr1112_Emit(F.v5115);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2052_AddField(void * a_p2053, void * * a_p2054, rt_int a_p2055, void * a_p2056, rt_int a_p2057, rt_int a_p2058, void * a_p2059, rt_int a_p2060) {
struct yf2061 F;
memset((void *)&F, 0, sizeof F);
F.p2053 = a_p2053;
F.p2054 = a_p2054;
F.p2055 = a_p2055;
F.p2056 = a_p2056;
F.p2057 = a_p2057;
F.p2058 = a_p2058;
F.p2059 = a_p2059;
F.p2060 = a_p2060;
F.v5142 = ((*(yR104 *)rt_nil_check(F.p2053))).f_fields;
while ((!(F.v5142 == ((void *)0)))) {
if ((((*(yR109 *)rt_nil_check(F.v5142))).f_name == F.p2055)) {
yr1152_FailN(F.p2060, F.p2055, y_str(" is a component twice", 21));
}
F.v5142 = ((*(yR109 *)rt_nil_check(F.v5142))).f_next;
}
({ F.v5142 = rt_alloc(sizeof(yR109)); });
(*(yR109 *)rt_nil_check(F.v5142)) = ((yR109){ .f_name = F.p2055, .f_rep = F.p2056, .f_isconst = F.p2057, .f_variant = F.p2058, .f_labels = F.p2059, .f_next = ((void *)0) });
if (((*F.p2054) == ((void *)0))) {
((*(yR104 *)rt_nil_check(F.p2053))).f_fields = F.v5142;
} else {
((*(yR109 *)rt_nil_check((*F.p2054)))).f_next = F.v5142;
}
(*F.p2054) = F.v5142;
if (yr1804_Deep(F.p2056)) {
((*(yR104 *)rt_nil_check(F.p2053))).f_deep = 1;
}
if (((*(yR104 *)rt_nil_check(F.p2056))).f_abstract) {
((*(yR104 *)rt_nil_check(F.p2053))).f_abstract = 1;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2065_AddFields(void * a_p2066, void * * a_p2067, void * a_p2068, rt_int a_p2069, void * a_p2070, rt_int a_p2071) {
struct yf2072 F;
memset((void *)&F, 0, sizeof F);
F.p2066 = a_p2066;
F.p2067 = a_p2067;
F.p2068 = a_p2068;
F.p2069 = a_p2069;
F.p2070 = a_p2070;
F.p2071 = a_p2071;
F.v5154 = F.p2068;
F.v5156 = F.p2068;
while ((!(F.v5154 == ((void *)0)))) {
F.v5158 = yr2011_MakeRep(((*(yR99 *)rt_nil_check(F.v5154))).f_b, INT64_C(0), F.p2071);
if ((!F.p2071)) {
yr1870_CheckRepresented(F.v5158, ((*(yR99 *)rt_nil_check(F.v5154))).f_line);
}
F.v5156 = ((*(yR99 *)rt_nil_check(F.v5154))).f_a;
while ((!(F.v5156 == ((void *)0)))) {
yr2052_AddField(F.p2066, &(*F.p2067), ((*(yR99 *)rt_nil_check(F.v5156))).f_name, F.v5158, (((*(yR99 *)rt_nil_check(F.v5154))).f_ival == v254), F.p2069, F.p2070, ((*(yR99 *)rt_nil_check(F.v5156))).f_line);
F.v5156 = ((*(yR99 *)rt_nil_check(F.v5156))).f_next;
}
F.v5154 = ((*(yR99 *)rt_nil_check(F.v5154))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2076_MakeRecord(void * a_p2077, void * a_p2078, rt_int a_p2079) {
struct yf2080 F;
memset((void *)&F, 0, sizeof F);
F.p2077 = a_p2077;
F.p2078 = a_p2078;
F.p2079 = a_p2079;
F.v5165 = ((void *)0);
F.v5173 = INT64_C(0);
F.v5180 = INT64_C(0);
yr2065_AddFields(F.p2077, &F.v5165, ((*(yR99 *)rt_nil_check(F.p2078))).f_a, INT64_C(0), ((void *)0), F.p2079);
if ((!(((*(yR99 *)rt_nil_check(F.p2078))).f_b == ((void *)0)))) {
F.v5167 = ((*(yR99 *)rt_nil_check(F.p2078))).f_b;
F.v5171 = yr2011_MakeRep(((*(yR99 *)rt_nil_check(F.v5167))).f_b, INT64_C(0), 0);
if ((!yr1780_IsDiscrete(F.v5171))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.v5167))).f_line, y_str("the case-selection component is integer or scalar", 49));
}
yr2052_AddField(F.p2077, &F.v5165, ((*(yR99 *)rt_nil_check(F.v5167))).f_name, F.v5171, 1, INT64_C(0), ((void *)0), ((*(yR99 *)rt_nil_check(F.v5167))).f_line);
((*(yR104 *)rt_nil_check(F.p2077))).f_selector = F.v5165;
F.v5169 = ((*(yR99 *)rt_nil_check(F.v5167))).f_a;
while ((!(F.v5169 == ((void *)0)))) {
F.v5173 = rt_range(rt_add(F.v5173, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr2065_AddFields(F.p2077, &F.v5165, ((*(yR99 *)rt_nil_check(F.v5169))).f_b, F.v5173, ((*(yR99 *)rt_nil_check(F.v5169))).f_a, F.p2079);
F.v5169 = ((*(yR99 *)rt_nil_check(F.v5169))).f_next;
}
}
if ((F.p2079 && ((*(yR104 *)rt_nil_check(F.p2077))).f_abstract)) {
return;
}
((*(yR104 *)rt_nil_check(F.p2077))).f_abstract = 0;
((*(yR104 *)rt_nil_check(F.p2077))).f_cname = yr1166_Fresh(y_str("yR", 2));
yr1006_SB();
yr1017_SA(y_str("typedef struct ", 15));
yr1024_ST(((*(yR104 *)rt_nil_check(F.p2077))).f_cname);
yr1017_SA(y_str(" ", 1));
yr1024_ST(((*(yR104 *)rt_nil_check(F.p2077))).f_cname);
yr1017_SA(y_str(";", 1));
F.v5178 = yr1036_SE();
yr1090_Put(&v962, F.v5178);
yr1006_SB();
yr1017_SA(y_str("struct ", 7));
yr1024_ST(((*(yR104 *)rt_nil_check(F.p2077))).f_cname);
yr1017_SA(y_str(" {", 2));
F.v5176 = ((*(yR104 *)rt_nil_check(F.p2077))).f_fields;
while ((!(F.v5176 == ((void *)0)))) {
yr1017_SA(y_str(" ", 1));
yr1024_ST(yr1829_CType(((*(yR109 *)rt_nil_check(F.v5176))).f_rep));
yr1017_SA(y_str(" f_", 3));
yr1024_ST(((*(yR109 *)rt_nil_check(F.v5176))).f_name);
yr1017_SA(y_str(";", 1));
F.v5180 = rt_range(rt_add(F.v5180, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5176 = ((*(yR109 *)rt_nil_check(F.v5176))).f_next;
}
if ((F.v5180 == INT64_C(0))) {
yr1017_SA(y_str(" int empty_;", 12));
}
yr1017_SA(y_str(" };", 3));
F.v5178 = yr1036_SE();
yr1090_Put(&v964, F.v5178);
yr1841_NewDesc(F.p2077);
yr1006_SB();
yr1017_SA(y_str("{ static const size_t o[] = {", 29));
F.v5176 = ((*(yR104 *)rt_nil_check(F.p2077))).f_fields;
while ((!(F.v5176 == ((void *)0)))) {
yr1017_SA(y_str("offsetof(", 9));
yr1024_ST(((*(yR104 *)rt_nil_check(F.p2077))).f_cname);
yr1017_SA(y_str(", f_", 4));
yr1024_ST(((*(yR109 *)rt_nil_check(F.v5176))).f_name);
yr1017_SA(y_str("), ", 3));
F.v5176 = ((*(yR109 *)rt_nil_check(F.v5176))).f_next;
}
yr1017_SA(y_str("0}; const ydesc **f = rt_alloc(", 31));
yr1030_SI(rt_range(rt_add(F.v5180, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1017_SA(y_str(" * sizeof *f);", 14));
F.v5173 = INT64_C(0);
F.v5176 = ((*(yR104 *)rt_nil_check(F.p2077))).f_fields;
while ((!(F.v5176 == ((void *)0)))) {
yr1017_SA(y_str(" f[", 3));
yr1030_SI(F.v5173);
yr1017_SA(y_str("] = ", 4));
yr1024_ST(yr1835_DescOf(((*(yR109 *)rt_nil_check(F.v5176))).f_rep));
yr1017_SA(y_str(";", 1));
F.v5173 = rt_range(rt_add(F.v5173, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5176 = ((*(yR109 *)rt_nil_check(F.v5176))).f_next;
}
yr1017_SA(y_str(" y_desc_record(", 15));
yr1024_ST(yr1835_DescOf(F.p2077));
yr1017_SA(y_str(", sizeof(", 9));
yr1024_ST(((*(yR104 *)rt_nil_check(F.p2077))).f_cname);
yr1017_SA(y_str("), ", 3));
yr1030_SI(F.v5180);
yr1017_SA(y_str(", o, (const ydesc *const *)f); }", 32));
F.v5178 = yr1036_SE();
yr1112_Emit(F.v5178);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2084_FindField(void * a_p2085, rt_int a_p2086) {
struct yf2087 F;
memset((void *)&F, 0, sizeof F);
F.p2085 = a_p2085;
F.p2086 = a_p2086;
F.v5227 = ((*(yR104 *)rt_nil_check(F.p2085))).f_fields;
while ((!(F.v5227 == ((void *)0)))) {
if ((((*(yR109 *)rt_nil_check(F.v5227))).f_name == F.p2086)) {
{ void * rv5228 = F.v5227;
return rv5228; }
}
F.v5227 = ((*(yR109 *)rt_nil_check(F.v5227))).f_next;
}
{ void * rv5229 = ((void *)0);
return rv5229; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2204_CharOrd(void * a_p2205, rt_int a_p2206) {
struct yf2207 F;
memset((void *)&F, 0, sizeof F);
F.p2205 = a_p2205;
F.p2206 = a_p2206;
if ((((*(yR104 *)rt_nil_check(F.p2205))).f_tid == ((*(yR104 *)rt_nil_check(v1747))).f_tid)) {
if ((((rt_int *)(v904).p)[y_ix1(v904, F.p2206)] == INT64_C(1))) {
{ rt_int rv5245 = ((rt_int *)(v949).p)[y_ix1(v949, yr1083_TChar(F.p2206, INT64_C(1)))];
return rv5245; }
}
F.v5236 = INT64_C(0);
F.v5240 = INT64_C(1);
F.lo5251 = INT64_C(1);
F.hi5252 = ((rt_int *)(v904).p)[y_ix1(v904, v2199)];
{ rt_int hi5256 = F.hi5252;
for (rt_int i5255 = F.lo5251; i5255 <= hi5256; i5255++) { F.c_5254 = i5255;
if ((yr1083_TChar(v2199, rt_range(F.c_5254, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 32)) {
F.v5242 = yr1048_Intern(rt_range(rt_add(((rt_int *)(v902).p)[y_ix1(v902, v2199)], (rt_sub(F.v5240, INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub(F.c_5254, F.v5240), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((F.v5242 == F.p2206)) {
if ((F.v5236 < INT64_C(32))) {
{ rt_int rv5263 = F.v5236;
return rv5263; }
}
if ((F.v5236 == INT64_C(32))) {
{ rt_int rv5266 = INT64_C(32);
return rv5266; }
}
if ((F.v5236 == INT64_C(33))) {
{ rt_int rv5269 = INT64_C(127);
return rv5269; }
}
if ((F.v5236 == INT64_C(34))) {
{ rt_int rv5272 = INT64_C(39);
return rv5272; }
}
{ rt_int rv5274 = INT64_C(34);
return rv5274; }
}
F.v5236 = rt_range(rt_add(F.v5236, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5240 = rt_range(rt_add(F.c_5254, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i5255 == hi5256) break;
}}
{ rt_int rv5280 = INT64_C(-1);
return rv5280; }
}
if ((!(((*(yR104 *)rt_nil_check(F.p2205))).f_kind == v803))) {
{ rt_int rv5282 = INT64_C(-1);
return rv5282; }
}
F.v5234 = ((*(yR104 *)rt_nil_check(F.p2205))).f_lits;
F.v5238 = INT64_C(0);
while ((!(F.v5234 == ((void *)0)))) {
if (yr1068_TEq(((*(yR99 *)rt_nil_check(F.v5234))).f_text, F.p2206)) {
{ rt_int rv5284 = F.v5238;
return rv5284; }
}
F.v5238 = rt_range(rt_add(F.v5238, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5234 = ((*(yR99 *)rt_nil_check(F.v5234))).f_next;
}
{ rt_int rv5288 = INT64_C(-1);
return rv5288; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2211_AlphabetFor(void * a_p2212, void * a_p2213) {
struct yf2214 F;
memset((void *)&F, 0, sizeof F);
F.p2212 = a_p2212;
F.p2213 = a_p2213;
F.v5297 = ((void *)0);
F.v5299 = INT64_C(0);
F.v5302 = INT64_C(0);
if ((!(((*(yR99 *)rt_nil_check(F.p2212))).f_d == ((void *)0)))) {
F.v5293 = yr1737_Real(yr1684_Lookup(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2212))).f_d))).f_name, ((*(yR99 *)rt_nil_check(F.p2212))).f_line));
if ((((((!(((*(yR119 *)rt_nil_check(F.v5293))).f_kind == v851))) && ((!(((*(yR119 *)rt_nil_check(F.v5293))).f_kind == v854))))) || ((!(((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5293))).f_rep))).f_kind == v803))))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2212))).f_line, ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2212))).f_d))).f_name, y_str(" is not an alphabet", 19));
}
{ void * rv5305 = ((*(yR119 *)rt_nil_check(F.v5293))).f_rep;
return rv5305; }
}
F.v5302 = INT64_C(1);
if ((((((*(yR99 *)rt_nil_check(F.p2212))).f_kind == v755)) || ((yr2204_CharOrd(v1747, ((*(yR99 *)rt_nil_check(F.p2212))).f_text) >= INT64_C(0))))) {
F.v5299 = INT64_C(1);
F.v5297 = v1747;
}
F.v5295 = v2202;
while ((!(F.v5295 == ((void *)0)))) {
F.v5293 = yr1672_Find(((*(yR99 *)rt_nil_check(F.v5295))).f_name);
if ((!(F.v5293 == ((void *)0)))) {
F.v5293 = yr1737_Real(F.v5293);
if ((((((((*(yR119 *)rt_nil_check(F.v5293))).f_kind == v851)) || ((((*(yR119 *)rt_nil_check(F.v5293))).f_kind == v854)))) && ((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5293))).f_rep))).f_tid == ((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v5295))).f_rep))).f_tid)))) {
F.v5302 = rt_range(rt_add(F.v5302, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((((*(yR99 *)rt_nil_check(F.p2212))).f_kind == v752)) && ((yr2204_CharOrd(((*(yR99 *)rt_nil_check(F.v5295))).f_rep, ((*(yR99 *)rt_nil_check(F.p2212))).f_text) >= INT64_C(0))))) {
F.v5299 = rt_range(rt_add(F.v5299, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5297 = ((*(yR99 *)rt_nil_check(F.v5295))).f_rep;
}
}
}
F.v5295 = ((*(yR99 *)rt_nil_check(F.v5295))).f_next;
}
if ((((((*(yR99 *)rt_nil_check(F.p2212))).f_kind == v755)) && ((F.v5302 > INT64_C(1))))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2212))).f_line, y_str("a string in a scope with two alphabets is qualified by its alphabet (VI.A.3)", 76));
}
if ((F.v5299 > INT64_C(1))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2212))).f_line, yr2860_Join(yr1041_T(y_str("'", 1)), ((*(yR99 *)rt_nil_check(F.p2212))).f_text, yr1041_T(y_str("'", 1))), y_str(" is a character of two alphabets here: qualify it (VI.A.3)", 58));
}
if ((F.v5297 == ((void *)0))) {
{ void * rv5320 = v1747;
return rv5320; }
}
{ void * rv5321 = F.v5297;
return rv5321; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2218_CharValue(void * a_p2219, rt_int a_p2220, rt_int a_p2221) {
struct yf2222 F;
memset((void *)&F, 0, sizeof F);
F.p2219 = a_p2219;
F.p2220 = a_p2220;
F.p2221 = a_p2221;
F.v5327 = yr2204_CharOrd(F.p2219, F.p2220);
if ((F.v5327 < INT64_C(0))) {
yr1006_SB();
yr1017_SA(y_str("'", 1));
yr1024_ST(F.p2220);
yr1017_SA(y_str("' is not a character of ", 24));
yr1024_ST(((*(yR104 *)rt_nil_check(F.p2219))).f_tname);
F.v5329 = yr1036_SE();
yr1137_Fail(F.p2221, F.v5329);
}
{ rt_int rv5333 = F.v5327;
return rv5333; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2226_StringCodes(void * a_p2227, rt_int a_p2228, rt_int * a_p2229, rt_int a_p2230) {
struct yf2231 F;
memset((void *)&F, 0, sizeof F);
F.p2227 = a_p2227;
F.p2228 = a_p2228;
F.p2229_o = a_p2229;
F.p2230 = a_p2230;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&F.yd_5353, 1, lo, hi, &y_d_int); }
y_init(&F.yd_5353, &F.v5355);
F.p2229 = INT64_C(0);
F.v5340 = INT64_C(1);
while ((F.v5340 <= ((rt_int *)(v904).p)[y_ix1(v904, F.p2228)])) {
F.v5357 = yr1083_TChar(F.p2228, F.v5340);
if ((F.v5357 == 39)) {
F.v5342 = rt_range(rt_add(F.v5340, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1083_TChar(F.p2228, F.v5342) == 39))) {
F.v5342 = rt_range(rt_add(F.v5342, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v5359 = yr1048_Intern(rt_range(rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.p2228)], F.v5340), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v5342, F.v5340)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v5344 = yr2218_CharValue(F.p2227, F.v5359, F.p2230);
F.v5340 = rt_range(rt_add(F.v5342, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v5359 = yr1048_Intern(rt_range(rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.p2228)], (rt_sub(F.v5340, INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), INT64_C(1));
F.v5344 = yr2218_CharValue(F.p2227, F.v5359, F.p2230);
F.v5340 = rt_range(rt_add(F.v5340, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.p2229 >= INT64_C(4096))) {
yr1144_FailS(F.p2230, y_str("string literal too long", 23));
}
F.p2229 = rt_range(rt_add(F.p2229, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(F.v5355).p)[y_ix1(F.v5355, F.p2229)] = F.v5344;
}
yr1006_SB();
yr1011_SC(34);
F.lo5388 = INT64_C(1);
F.hi5389 = F.p2229;
{ rt_int hi5393 = F.hi5389;
for (rt_int i5392 = F.lo5388; i5392 <= hi5393; i5392++) { F.c_5391 = i5392;
F.v5344 = ((rt_int *)(F.v5355).p)[y_ix1(F.v5355, F.c_5391)];
if ((((F.v5344 == INT64_C(34))) || ((F.v5344 == INT64_C(92))))) {
yr1011_SC(92);
yr1011_SC(((unsigned char *)(v960).p)[y_ix1(v960, F.v5344)]);
} else if (((((F.v5344 >= INT64_C(32))) && ((F.v5344 < INT64_C(127)))) && (((((!(F.v5344 == INT64_C(63)))) || ((F.c_5391 == INT64_C(1)))) || ((!(((rt_int *)(F.v5355).p)[y_ix1(F.v5355, rt_sub(F.c_5391, INT64_C(1)))] == INT64_C(63)))))))) {
yr1011_SC(((unsigned char *)(v960).p)[y_ix1(v960, F.v5344)]);
} else {
yr1011_SC(92);
yr1011_SC(((unsigned char *)(v960).p)[y_ix1(v960, rt_add(INT64_C(48), (rt_div(F.v5344, INT64_C(64)))))]);
yr1011_SC(((unsigned char *)(v960).p)[y_ix1(v960, rt_add(INT64_C(48), (rt_mod((rt_div(F.v5344, INT64_C(8))), INT64_C(8)))))]);
yr1011_SC(((unsigned char *)(v960).p)[y_ix1(v960, rt_add(INT64_C(48), (rt_mod(F.v5344, INT64_C(8)))))]);
}
if (i5392 == hi5393) break;
}}
yr1011_SC(34);
{ rt_int rv5420 = yr1036_SE();
(*F.p2229_o) = F.p2229;
return rv5420; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2235_Manifest(void * a_p2236, rt_int * a_p2237, rt_int * a_p2238) {
struct yf2239 F;
memset((void *)&F, 0, sizeof F);
F.p2236 = a_p2236;
F.p2237_o = a_p2237;
F.p2238_o = a_p2238;
F.p2237 = 0;
F.p2238 = INT64_C(0);
if ((((*(yR99 *)rt_nil_check(F.p2236))).f_kind == v743)) {
F.p2237 = 1;
F.p2238 = ((*(yR99 *)rt_nil_check(F.p2236))).f_ival;
(*F.p2237_o) = F.p2237;
(*F.p2238_o) = F.p2238;
return;
}
if ((((*(yR99 *)rt_nil_check(F.p2236))).f_kind == v752)) {
F.v5438 = yr2211_AlphabetFor(F.p2236, ((void *)0));
F.p2238 = yr2204_CharOrd(F.v5438, ((*(yR99 *)rt_nil_check(F.p2236))).f_text);
F.p2237 = (F.p2238 >= INT64_C(0));
(*F.p2237_o) = F.p2237;
(*F.p2238_o) = F.p2238;
return;
}
if ((((*(yR99 *)rt_nil_check(F.p2236))).f_kind == v761)) {
if ((!(((*(yR99 *)rt_nil_check(F.p2236))).f_d == ((void *)0)))) {
F.v5426 = yr1737_Real(yr1684_Lookup(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2236))).f_d))).f_name, ((*(yR99 *)rt_nil_check(F.p2236))).f_line));
F.v5426 = yr1697_FindLit(((*(yR99 *)rt_nil_check(F.p2236))).f_name, ((*(yR119 *)rt_nil_check(F.v5426))).f_rep);
} else {
F.v5426 = yr1672_Find(((*(yR99 *)rt_nil_check(F.p2236))).f_name);
}
if ((F.v5426 == ((void *)0))) {
(*F.p2237_o) = F.p2237;
(*F.p2238_o) = F.p2238;
return;
}
F.v5426 = yr1737_Real(F.v5426);
if ((((((((*(yR119 *)rt_nil_check(F.v5426))).f_kind == v857)) || ((((*(yR119 *)rt_nil_check(F.v5426))).f_kind == v848)))) && ((*(yR119 *)rt_nil_check(F.v5426))).f_hasmv)) {
F.p2237 = 1;
F.p2238 = ((*(yR119 *)rt_nil_check(F.v5426))).f_mval;
}
(*F.p2237_o) = F.p2237;
(*F.p2238_o) = F.p2238;
return;
}
if ((((*(yR99 *)rt_nil_check(F.p2236))).f_kind == v785)) {
yr2235_Manifest(((*(yR99 *)rt_nil_check(F.p2236))).f_a, &F.p2237, &F.p2238);
(*F.p2237_o) = F.p2237;
(*F.p2238_o) = F.p2238;
return;
}
if ((((*(yR99 *)rt_nil_check(F.p2236))).f_kind == v779)) {
yr2235_Manifest(((*(yR99 *)rt_nil_check(F.p2236))).f_a, &F.p2237, &F.p2238);
F.p2238 = rt_range(rt_neg(F.p2238), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2237_o) = F.p2237;
(*F.p2238_o) = F.p2238;
return;
}
if ((((*(yR99 *)rt_nil_check(F.p2236))).f_kind == v782)) {
yr2235_Manifest(((*(yR99 *)rt_nil_check(F.p2236))).f_a, &F.v5432, &F.v5428);
yr2235_Manifest(((*(yR99 *)rt_nil_check(F.p2236))).f_b, &F.v5434, &F.v5430);
if ((!((F.v5432 && F.v5434)))) {
(*F.p2237_o) = F.p2237;
(*F.p2238_o) = F.p2238;
return;
}
F.v5436 = ((*(yR99 *)rt_nil_check(F.p2236))).f_name;
F.p2237 = 1;
if ((F.v5436 == v557)) {
F.p2238 = rt_range(rt_add(F.v5428, F.v5430), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v5436 == v560)) {
F.p2238 = rt_range(rt_sub(F.v5428, F.v5430), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v5436 == v563)) {
F.p2238 = rt_range(rt_mul(F.v5428, F.v5430), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v5436 == v260)) && ((!(F.v5430 == INT64_C(0)))))) {
F.p2238 = rt_range(rt_div(F.v5428, F.v5430), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v5436 == v362)) && ((!(F.v5430 == INT64_C(0)))))) {
F.p2238 = rt_range(rt_mod(F.v5428, F.v5430), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v5436 == v221)) {
F.p2238 = rt_range(rt_mul(F.v5428, F.v5430), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v5436 == v383)) {
F.p2238 = rt_range(rt_sub((rt_add(F.v5428, F.v5430)), (rt_mul(F.v5428, F.v5430))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v5436 == v473)) {
F.p2238 = rt_range(rt_mod((rt_add(F.v5428, F.v5430)), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.p2237 = 0;
}
(*F.p2237_o) = F.p2237;
(*F.p2238_o) = F.p2238;
return;
}
if ((((*(yR99 *)rt_nil_check(F.p2236))).f_kind == v776)) {
yr2235_Manifest(((*(yR99 *)rt_nil_check(F.p2236))).f_a, &F.p2237, &F.p2238);
F.p2238 = rt_range(rt_sub(INT64_C(1), F.p2238), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2237_o) = F.p2237;
(*F.p2238_o) = F.p2238;
return;
}
if ((((*(yR99 *)rt_nil_check(F.p2236))).f_kind == v764)) {
yr2243_ManifestStd(F.p2236, &F.p2237, &F.p2238);
(*F.p2237_o) = F.p2237;
(*F.p2238_o) = F.p2238;
return;
}
(*F.p2237_o) = F.p2237;
(*F.p2238_o) = F.p2238;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2243_ManifestStd(void * a_p2244, rt_int * a_p2245, rt_int * a_p2246) {
struct yf2247 F;
memset((void *)&F, 0, sizeof F);
F.p2244 = a_p2244;
F.p2245_o = a_p2245;
F.p2246_o = a_p2246;
F.p2245 = 0;
F.p2246 = INT64_C(0);
F.v5468 = yr1672_Find(((*(yR99 *)rt_nil_check(F.p2244))).f_name);
if ((F.v5468 == ((void *)0))) {
(*F.p2245_o) = F.p2245;
(*F.p2246_o) = F.p2246;
return;
}
F.v5468 = yr1737_Real(F.v5468);
if ((!(((*(yR119 *)rt_nil_check(F.v5468))).f_kind == v875))) {
(*F.p2245_o) = F.p2245;
(*F.p2246_o) = F.p2246;
return;
}
F.v5470 = ((*(yR119 *)rt_nil_check(F.v5468))).f_mval;
if ((((((F.v5470 == v2097)) || ((F.v5470 == v2100))) || ((F.v5470 == v2103))) || ((F.v5470 == v2106)))) {
if ((!(yr1305_Count(((*(yR99 *)rt_nil_check(F.p2244))).f_a) == INT64_C(1)))) {
(*F.p2245_o) = F.p2245;
(*F.p2246_o) = F.p2246;
return;
}
yr2383_Expr(((*(yR99 *)rt_nil_check(F.p2244))).f_a, ((void *)0), &F.v5478, &F.v5480);
if ((!yr1780_IsDiscrete(F.v5480))) {
(*F.p2245_o) = F.p2245;
(*F.p2246_o) = F.p2246;
return;
}
if ((((F.v5470 == v2103)) || ((F.v5470 == v2106)))) {
if ((!(((*(yR104 *)rt_nil_check(F.v5480))).f_elem == ((void *)0)))) {
F.v5480 = ((*(yR104 *)rt_nil_check(F.v5480))).f_elem;
}
if ((!((*(yR104 *)rt_nil_check(F.v5480))).f_hasm)) {
(*F.p2245_o) = F.p2245;
(*F.p2246_o) = F.p2246;
return;
}
F.p2245 = 1;
if ((F.v5470 == v2103)) {
F.p2246 = ((*(yR104 *)rt_nil_check(F.v5480))).f_mlo;
} else {
F.p2246 = ((*(yR104 *)rt_nil_check(F.v5480))).f_mhi;
}
(*F.p2245_o) = F.p2245;
(*F.p2246_o) = F.p2246;
return;
}
yr2235_Manifest(((*(yR99 *)rt_nil_check(F.p2244))).f_a, &F.v5474, &F.p2246);
if ((!F.v5474)) {
(*F.p2245_o) = F.p2245;
(*F.p2246_o) = F.p2246;
return;
}
if ((F.v5470 == v2097)) {
F.p2246 = rt_range(rt_add(F.p2246, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.p2246 = rt_range(rt_sub(F.p2246, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((!(((*(yR104 *)rt_nil_check(F.v5480))).f_elem == ((void *)0)))) {
F.v5480 = ((*(yR104 *)rt_nil_check(F.v5480))).f_elem;
}
if ((((!(((*(yR104 *)rt_nil_check(F.v5480))).f_kind == v788))) && ((((F.p2246 < INT64_C(0))) || ((F.p2246 >= ((*(yR104 *)rt_nil_check(F.v5480))).f_nlits)))))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2244))).f_line, ((*(yR99 *)rt_nil_check(F.p2244))).f_name, y_str(" goes beyond the end of the enumeration (XI)", 44));
}
F.p2245 = 1;
(*F.p2245_o) = F.p2245;
(*F.p2246_o) = F.p2246;
return;
}
if ((((F.v5470 == v2091)) || ((F.v5470 == v2094)))) {
if ((!(yr1305_Count(((*(yR99 *)rt_nil_check(F.p2244))).f_a) == INT64_C(2)))) {
(*F.p2245_o) = F.p2245;
(*F.p2246_o) = F.p2246;
return;
}
yr2235_Manifest(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2244))).f_a))).f_next, &F.v5476, &F.v5472);
if ((!F.v5476)) {
(*F.p2245_o) = F.p2245;
(*F.p2246_o) = F.p2246;
return;
}
yr2383_Expr(((*(yR99 *)rt_nil_check(F.p2244))).f_a, ((void *)0), &F.v5478, &F.v5480);
if (((((!(((*(yR104 *)rt_nil_check(F.v5480))).f_kind == v806))) || ((F.v5472 < INT64_C(1)))) || ((F.v5472 > ((*(yR104 *)rt_nil_check(F.v5480))).f_nidx)))) {
(*F.p2245_o) = F.p2245;
(*F.p2246_o) = F.p2246;
return;
}
F.v5482 = ((*(yR104 *)rt_nil_check(F.v5480))).f_idx;
F.lo5499 = INT64_C(2);
F.hi5500 = F.v5472;
{ rt_int hi5504 = F.hi5500;
for (rt_int i5503 = F.lo5499; i5503 <= hi5504; i5503++) { F.c_5502 = i5503;
F.v5482 = ((*(yR104 *)rt_nil_check(F.v5482))).f_link;
if (i5503 == hi5504) break;
}}
if ((!((*(yR104 *)rt_nil_check(F.v5482))).f_hasm)) {
(*F.p2245_o) = F.p2245;
(*F.p2246_o) = F.p2246;
return;
}
F.p2245 = 1;
if ((F.v5470 == v2091)) {
F.p2246 = ((*(yR104 *)rt_nil_check(F.v5482))).f_mlo;
} else {
F.p2246 = ((*(yR104 *)rt_nil_check(F.v5482))).f_mhi;
}
(*F.p2245_o) = F.p2245;
(*F.p2246_o) = F.p2246;
return;
}
(*F.p2245_o) = F.p2245;
(*F.p2246_o) = F.p2246;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2251_NeedsConv(void * a_p2252, void * a_p2253) {
struct yf2254 F;
memset((void *)&F, 0, sizeof F);
F.p2252 = a_p2252;
F.p2253 = a_p2253;
if ((F.p2252 == F.p2253)) {
{ rt_int rv5510 = 0;
return rv5510; }
}
if (yr1780_IsDiscrete(F.p2252)) {
if ((((*(yR104 *)rt_nil_check(F.p2252))).f_lo == INT64_C(0))) {
{ rt_int rv5513 = 0;
return rv5513; }
}
{ rt_int rv5514 = (!((((((*(yR104 *)rt_nil_check(F.p2252))).f_hasm && ((*(yR104 *)rt_nil_check(F.p2253))).f_hasm) && ((((*(yR104 *)rt_nil_check(F.p2252))).f_mlo <= ((*(yR104 *)rt_nil_check(F.p2253))).f_mlo))) && ((((*(yR104 *)rt_nil_check(F.p2253))).f_mhi <= ((*(yR104 *)rt_nil_check(F.p2252))).f_mhi)))));
return rv5514; }
}
if ((((*(yR104 *)rt_nil_check(F.p2252))).f_kind == v794)) {
{ rt_int rv5516 = (!(((*(yR104 *)rt_nil_check(F.p2252))).f_lo == INT64_C(0)));
return rv5516; }
}
if ((((*(yR104 *)rt_nil_check(F.p2252))).f_kind == v791)) {
{ rt_int rv5518 = ((((!(((*(yR104 *)rt_nil_check(F.p2252))).f_lo == INT64_C(0)))) || ((!(((*(yR104 *)rt_nil_check(F.p2252))).f_fsn == ((*(yR104 *)rt_nil_check(F.p2253))).f_fsn)))) || ((!(((*(yR104 *)rt_nil_check(F.p2252))).f_fsd == ((*(yR104 *)rt_nil_check(F.p2253))).f_fsd))));
return rv5518; }
}
if ((((*(yR104 *)rt_nil_check(F.p2252))).f_kind == v809)) {
{ rt_int rv5519 = (((((*(yR104 *)rt_nil_check(F.p2253))).f_kind == v809)) && ((!(((*(yR104 *)rt_nil_check(F.p2252))).f_cname == ((*(yR104 *)rt_nil_check(F.p2253))).f_cname))));
return rv5519; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2252))).f_kind == v806)) || ((((*(yR104 *)rt_nil_check(F.p2252))).f_kind == v827)))) {
if ((((!(((*(yR104 *)rt_nil_check(F.p2253))).f_kind == v806))) && ((!(((*(yR104 *)rt_nil_check(F.p2253))).f_kind == v827))))) {
{ rt_int rv5521 = 0;
return rv5521; }
}
{ rt_int rv5522 = yr2251_NeedsConv(((*(yR104 *)rt_nil_check(F.p2252))).f_elem, ((*(yR104 *)rt_nil_check(F.p2253))).f_elem);
return rv5522; }
}
{ rt_int rv5524 = 0;
return rv5524; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2258_ConvertRecord(rt_int a_p2259, void * a_p2260, void * a_p2261) {
struct yf2262 F;
memset((void *)&F, 0, sizeof F);
F.p2259 = a_p2259;
F.p2260 = a_p2260;
F.p2261 = a_p2261;
F.v5530 = yr1166_Fresh(y_str("cs", 2));
F.v5532 = yr1166_Fresh(y_str("cd", 2));
yr1006_SB();
yr1017_SA(y_str("({ ", 3));
yr1024_ST(yr1829_CType(F.p2261));
yr1017_SA(y_str(" ", 1));
yr1024_ST(F.v5530);
yr1017_SA(y_str(" = ", 3));
yr1024_ST(F.p2259);
yr1017_SA(y_str("; ", 2));
yr1024_ST(yr1829_CType(F.p2260));
yr1017_SA(y_str(" ", 1));
yr1024_ST(F.v5532);
yr1017_SA(y_str("; memset(&", 10));
yr1024_ST(F.v5532);
yr1017_SA(y_str(", 0, sizeof ", 12));
yr1024_ST(F.v5532);
yr1017_SA(y_str(");", 2));
F.v5534 = ((*(yR104 *)rt_nil_check(F.p2260))).f_fields;
while ((!(F.v5534 == ((void *)0)))) {
F.v5536 = yr2084_FindField(F.p2261, ((*(yR109 *)rt_nil_check(F.v5534))).f_name);
if ((!(F.v5536 == ((void *)0)))) {
yr1017_SA(y_str(" ", 1));
if ((!(((*(yR109 *)rt_nil_check(F.v5536))).f_variant == INT64_C(0)))) {
yr1017_SA(y_str("if (", 4));
yr1024_ST(yr2392_VariantTest(F.p2261, F.v5536, yr2860_Join(yr1041_T(y_str("(&", 2)), F.v5530, yr1041_T(y_str(")", 1)))));
yr1017_SA(y_str(") ", 2));
}
yr1024_ST(F.v5532);
yr1017_SA(y_str(".f_", 3));
yr1024_ST(((*(yR109 *)rt_nil_check(F.v5534))).f_name);
yr1017_SA(y_str(" = ", 3));
yr1024_ST(yr2316_Convert(yr2860_Join(F.v5530, yr1041_T(y_str(".f_", 3)), ((*(yR109 *)rt_nil_check(F.v5534))).f_name), ((*(yR109 *)rt_nil_check(F.v5534))).f_rep, ((*(yR109 *)rt_nil_check(F.v5536))).f_rep));
yr1017_SA(y_str(";", 1));
}
F.v5534 = ((*(yR109 *)rt_nil_check(F.v5534))).f_next;
}
yr1017_SA(y_str(" ", 1));
yr1024_ST(F.v5532);
yr1017_SA(y_str("; })", 4));
{ rt_int rv5559 = yr1036_SE();
return rv5559; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2266_ConvertArray(rt_int a_p2267, void * a_p2268, void * a_p2269) {
struct yf2270 F;
memset((void *)&F, 0, sizeof F);
F.p2267 = a_p2267;
F.p2268 = a_p2268;
F.p2269 = a_p2269;
F.v5565 = yr1166_Fresh(y_str("cs", 2));
F.v5567 = yr1166_Fresh(y_str("cd", 2));
F.v5569 = yr1166_Fresh(y_str("ck", 2));
F.v5571 = yr1166_Fresh(y_str("cn", 2));
F.v5573 = yr1829_CType(((*(yR104 *)rt_nil_check(F.p2268))).f_elem);
F.v5575 = yr1829_CType(((*(yR104 *)rt_nil_check(F.p2269))).f_elem);
yr1006_SB();
yr1017_SA(y_str("({ yarr ", 8));
yr1024_ST(F.v5565);
yr1017_SA(y_str(" = ", 3));
yr1024_ST(F.p2267);
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.v5567);
yr1017_SA(y_str("; rt_int ", 9));
yr1024_ST(F.v5571);
yr1017_SA(y_str(" = y_count(", 11));
yr1024_ST(F.v5565);
yr1017_SA(y_str(", ", 2));
yr1030_SI(((*(yR104 *)rt_nil_check(F.p2269))).f_nidx);
yr1017_SA(y_str(");", 2));
if ((((*(yR104 *)rt_nil_check(F.p2268))).f_kind == v806)) {
yr1017_SA(y_str(" y_init(", 8));
yr1024_ST(yr1835_DescOf(F.p2268));
yr1017_SA(y_str(", &", 3));
yr1024_ST(F.v5567);
yr1017_SA(y_str("); if (y_count(", 15));
yr1024_ST(F.v5567);
yr1017_SA(y_str(", ", 2));
yr1030_SI(((*(yR104 *)rt_nil_check(F.p2268))).f_nidx);
yr1017_SA(y_str(") != ", 5));
yr1024_ST(F.v5571);
yr1017_SA(y_str(") rt_raise_msg(RT_X_RANGE, ", 27));
yr1011_SC(34);
yr1017_SA(y_str("array lengths differ", 20));
yr1011_SC(34);
yr1017_SA(y_str(");", 2));
} else {
yr1017_SA(y_str(" ", 1));
yr1024_ST(F.v5567);
yr1017_SA(y_str(" = y_like(", 10));
yr1024_ST(F.v5565);
yr1017_SA(y_str(", ", 2));
yr1030_SI(((*(yR104 *)rt_nil_check(F.p2269))).f_nidx);
yr1017_SA(y_str(", ", 2));
yr1024_ST(yr1835_DescOf(((*(yR104 *)rt_nil_check(F.p2268))).f_elem));
yr1017_SA(y_str(");", 2));
}
yr1017_SA(y_str(" for (rt_int ", 13));
yr1024_ST(F.v5569);
yr1017_SA(y_str(" = 0; ", 6));
yr1024_ST(F.v5569);
yr1017_SA(y_str(" < ", 3));
yr1024_ST(F.v5571);
yr1017_SA(y_str("; ", 2));
yr1024_ST(F.v5569);
yr1017_SA(y_str("++) ((", 6));
yr1024_ST(F.v5573);
yr1017_SA(y_str(" *)", 3));
yr1024_ST(F.v5567);
yr1017_SA(y_str(".p)[", 4));
yr1024_ST(F.v5569);
yr1017_SA(y_str("] = ", 4));
yr1024_ST(yr2316_Convert(yr2860_Join(yr1041_T(y_str("((", 2)), F.v5575, yr2860_Join(yr1041_T(y_str(" *)", 3)), F.v5565, yr2860_Join(yr1041_T(y_str(".p)[", 4)), F.v5569, yr1041_T(y_str("]", 1))))), ((*(yR104 *)rt_nil_check(F.p2268))).f_elem, ((*(yR104 *)rt_nil_check(F.p2269))).f_elem));
yr1017_SA(y_str("; ", 2));
yr1024_ST(F.v5567);
yr1017_SA(y_str("; })", 4));
{ rt_int rv5616 = yr1036_SE();
return rv5616; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2274_RescaleCode(rt_int a_p2275, void * a_p2276, void * a_p2277) {
struct yf2278 F;
memset((void *)&F, 0, sizeof F);
F.p2275 = a_p2275;
F.p2276 = a_p2276;
F.p2277 = a_p2277;
yr1959_ScaleRatio(F.p2276, F.p2277, &F.v5622, &F.v5624, &F.v5626);
if (F.v5626) {
{ rt_int rv5627 = F.p2275;
return rv5627; }
}
yr1006_SB();
yr1017_SA(y_str("y_fix_conv(", 11));
yr1024_ST(F.p2275);
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.v5622);
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.v5624);
yr1017_SA(y_str(")", 1));
{ rt_int rv5632 = yr1036_SE();
return rv5632; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2282_CommonScale(rt_int * a_p2283, void * a_p2284, rt_int * a_p2285, void * a_p2286, void * a_p2287, rt_int a_p2288) {
struct yf2289 F;
memset((void *)&F, 0, sizeof F);
F.p2283 = a_p2283;
F.p2284 = a_p2284;
F.p2285 = a_p2285;
F.p2286 = a_p2286;
F.p2287 = a_p2287;
F.p2288 = a_p2288;
F.v5641 = yr1936_Gcd(((*(yR104 *)rt_nil_check(F.p2284))).f_fsn, ((*(yR104 *)rt_nil_check(F.p2286))).f_fsn);
F.v5643 = yr1943_MulChk(rt_range(rt_div(((*(yR104 *)rt_nil_check(F.p2284))).f_fsd, yr1936_Gcd(((*(yR104 *)rt_nil_check(F.p2284))).f_fsd, ((*(yR104 *)rt_nil_check(F.p2286))).f_fsd)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), ((*(yR104 *)rt_nil_check(F.p2286))).f_fsd, F.p2288);
yr1976_SetScale(F.p2287, F.v5641, F.v5643);
(*F.p2283) = yr2274_RescaleCode((*F.p2283), F.p2284, F.p2287);
(*F.p2285) = yr2274_RescaleCode((*F.p2285), F.p2286, F.p2287);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2293_FixLiteral(void * a_p2294, rt_int * a_p2295, void * * a_p2296) {
struct yf2297 F;
memset((void *)&F, 0, sizeof F);
F.p2294 = a_p2294;
F.p2295_o = a_p2295;
F.p2296_o = a_p2296;
F.v5650 = ((*(yR99 *)rt_nil_check(F.p2294))).f_ival;
F.v5652 = ((rt_int *)(v1210).p)[y_ix1(v1210, F.v5650)];
F.p2296 = yr1774_CopyRep(v1757);
((*(yR104 *)rt_nil_check(F.p2296))).f_abstract = 0;
if ((F.v5652 >= INT64_C(0))) {
yr1976_SetScale(F.p2296, yr1951_PowChk(((rt_int *)(v1208).p)[y_ix1(v1208, F.v5650)], F.v5652, ((*(yR99 *)rt_nil_check(F.p2294))).f_line), INT64_C(1));
} else {
yr1976_SetScale(F.p2296, INT64_C(1), yr1951_PowChk(((rt_int *)(v1208).p)[y_ix1(v1208, F.v5650)], rt_range(rt_neg(F.v5652), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), ((*(yR99 *)rt_nil_check(F.p2294))).f_line));
}
yr1006_SB();
yr1017_SA(y_str("((yfix)INT64_C(", 15));
yr1030_SI(((rt_int *)(v1206).p)[y_ix1(v1206, F.v5650)]);
yr1017_SA(y_str("))", 2));
F.p2295 = yr1036_SE();
(*F.p2295_o) = F.p2295;
(*F.p2296_o) = F.p2296;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2301_ManifestFix(void * a_p2302, rt_int * a_p2303, rt_int * a_p2304, rt_int * a_p2305) {
struct yf2306 F;
memset((void *)&F, 0, sizeof F);
F.p2302 = a_p2302;
F.p2303_o = a_p2303;
F.p2304_o = a_p2304;
F.p2305_o = a_p2305;
F.p2303 = 0;
F.p2304 = INT64_C(0);
F.p2305 = INT64_C(1);
if ((((*(yR99 *)rt_nil_check(F.p2302))).f_kind == v746)) {
F.v5666 = ((*(yR99 *)rt_nil_check(F.p2302))).f_ival;
F.v5668 = ((rt_int *)(v1210).p)[y_ix1(v1210, F.v5666)];
F.p2304 = ((rt_int *)(v1206).p)[y_ix1(v1206, F.v5666)];
if ((F.v5668 >= INT64_C(0))) {
F.p2304 = yr1943_MulChk(F.p2304, yr1951_PowChk(((rt_int *)(v1208).p)[y_ix1(v1208, F.v5666)], F.v5668, ((*(yR99 *)rt_nil_check(F.p2302))).f_line), ((*(yR99 *)rt_nil_check(F.p2302))).f_line);
} else {
F.p2305 = yr1951_PowChk(((rt_int *)(v1208).p)[y_ix1(v1208, F.v5666)], rt_range(rt_neg(F.v5668), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), ((*(yR99 *)rt_nil_check(F.p2302))).f_line);
}
F.p2303 = 1;
} else if ((((*(yR99 *)rt_nil_check(F.p2302))).f_kind == v743)) {
F.p2304 = ((*(yR99 *)rt_nil_check(F.p2302))).f_ival;
F.p2303 = 1;
} else if ((((*(yR99 *)rt_nil_check(F.p2302))).f_kind == v785)) {
yr2301_ManifestFix(((*(yR99 *)rt_nil_check(F.p2302))).f_a, &F.p2303, &F.p2304, &F.p2305);
} else if ((((*(yR99 *)rt_nil_check(F.p2302))).f_kind == v779)) {
yr2301_ManifestFix(((*(yR99 *)rt_nil_check(F.p2302))).f_a, &F.p2303, &F.p2304, &F.p2305);
F.p2304 = rt_range(rt_neg(F.p2304), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((((*(yR99 *)rt_nil_check(F.p2302))).f_kind == v782)) && ((((*(yR99 *)rt_nil_check(F.p2302))).f_name == v563)))) {
yr2301_ManifestFix(((*(yR99 *)rt_nil_check(F.p2302))).f_a, &F.p2303, &F.p2304, &F.p2305);
yr2301_ManifestFix(((*(yR99 *)rt_nil_check(F.p2302))).f_b, &F.v5676, &F.v5672, &F.v5674);
F.p2303 = (F.p2303 && F.v5676);
F.p2304 = yr1943_MulChk(F.p2304, F.v5672, ((*(yR99 *)rt_nil_check(F.p2302))).f_line);
F.p2305 = yr1943_MulChk(F.p2305, F.v5674, ((*(yR99 *)rt_nil_check(F.p2302))).f_line);
}
F.v5670 = yr1936_Gcd(F.p2304, F.p2305);
F.p2304 = rt_range(rt_div(F.p2304, F.v5670), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.p2305 = rt_range(rt_div(F.p2305, F.v5670), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2303_o) = F.p2303;
(*F.p2304_o) = F.p2304;
(*F.p2305_o) = F.p2305;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2310_FloatChk(rt_int a_p2311) {
struct yf2312 F;
memset((void *)&F, 0, sizeof F);
F.p2311 = a_p2311;
{ rt_int rv5691 = yr2860_Join(yr1041_T(y_str("y_fchk(", 7)), F.p2311, yr1041_T(y_str(")", 1)));
return rv5691; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2316_Convert(rt_int a_p2317, void * a_p2318, void * a_p2319) {
struct yf2320 F;
memset((void *)&F, 0, sizeof F);
F.p2317 = a_p2317;
F.p2318 = a_p2318;
F.p2319 = a_p2319;
if (((((((*(yR104 *)rt_nil_check(F.p2319))).f_kind == v830)) && ((((*(yR104 *)rt_nil_check(F.p2318))).f_kind == v806))) && ((((*(yR104 *)rt_nil_check(F.p2318))).f_nidx == INT64_C(1))))) {
if ((((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2318))).f_idx))).f_hasm && ((!(((*(yR104 *)rt_nil_check(F.p2319))).f_nlits == (rt_add((rt_sub(((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2318))).f_idx))).f_mhi, ((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2318))).f_idx))).f_mlo)), INT64_C(1)))))))) {
yr1006_SB();
yr1017_SA(y_str("a string of ", 12));
yr1030_SI(((*(yR104 *)rt_nil_check(F.p2319))).f_nlits);
yr1017_SA(y_str(" characters for an array of ", 28));
yr1030_SI(rt_range(rt_add((rt_sub(((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2318))).f_idx))).f_mhi, ((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2318))).f_idx))).f_mlo)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1017_SA(y_str(" (VI.B.1)", 9));
F.v5697 = yr1036_SE();
yr1137_Fail(v980, F.v5697);
}
}
if ((!yr2251_NeedsConv(F.p2318, F.p2319))) {
{ rt_int rv5708 = F.p2317;
return rv5708; }
}
if ((((*(yR104 *)rt_nil_check(F.p2318))).f_kind == v809)) {
{ rt_int rv5709 = yr2258_ConvertRecord(F.p2317, F.p2318, F.p2319);
return rv5709; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2318))).f_kind == v806)) || ((((*(yR104 *)rt_nil_check(F.p2318))).f_kind == v827)))) {
{ rt_int rv5710 = yr2266_ConvertArray(F.p2317, F.p2318, F.p2319);
return rv5710; }
}
if (yr1780_IsDiscrete(F.p2318)) {
yr1006_SB();
yr1017_SA(y_str("rt_range(", 9));
yr1024_ST(F.p2317);
yr1017_SA(y_str(", ", 2));
yr1024_ST(yr1910_LoText(F.p2318));
yr1017_SA(y_str(", ", 2));
yr1024_ST(yr1916_HiText(F.p2318));
yr1017_SA(y_str(")", 1));
{ rt_int rv5715 = yr1036_SE();
return rv5715; }
}
if ((((*(yR104 *)rt_nil_check(F.p2318))).f_kind == v794)) {
yr1006_SB();
yr1017_SA(y_str("rt_frange(", 10));
yr1024_ST(F.p2317);
yr1017_SA(y_str(", ", 2));
yr1024_ST(yr1910_LoText(F.p2318));
yr1017_SA(y_str(", ", 2));
yr1024_ST(yr1916_HiText(F.p2318));
yr1017_SA(y_str(")", 1));
{ rt_int rv5720 = yr1036_SE();
return rv5720; }
}
if ((((*(yR104 *)rt_nil_check(F.p2318))).f_kind == v791)) {
F.v5697 = yr2274_RescaleCode(F.p2317, F.p2319, F.p2318);
if ((((*(yR104 *)rt_nil_check(F.p2318))).f_lo == INT64_C(0))) {
{ rt_int rv5722 = F.v5697;
return rv5722; }
}
yr1006_SB();
yr1017_SA(y_str("y_fix_range(", 12));
yr1024_ST(F.v5697);
yr1017_SA(y_str(", ", 2));
yr1024_ST(yr1910_LoText(F.p2318));
yr1017_SA(y_str(", ", 2));
yr1024_ST(yr1916_HiText(F.p2318));
yr1017_SA(y_str(")", 1));
{ rt_int rv5727 = yr1036_SE();
return rv5727; }
}
{ rt_int rv5728 = F.p2317;
return rv5728; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2324_StoreText(rt_int a_p2325, void * a_p2326, rt_int a_p2327, void * a_p2328, rt_int a_p2329) {
struct yf2330 F;
memset((void *)&F, 0, sizeof F);
F.p2325 = a_p2325;
F.p2326 = a_p2326;
F.p2327 = a_p2327;
F.p2328 = a_p2328;
F.p2329 = a_p2329;
yr1862_CheckType(F.p2329, F.p2326, F.p2328);
if (yr1804_Deep(F.p2326)) {
F.v5736 = yr1166_Fresh(y_str("t", 1));
yr1006_SB();
yr1017_SA(y_str("{ ", 2));
yr1024_ST(yr1829_CType(F.p2326));
yr1017_SA(y_str(" ", 1));
yr1024_ST(F.v5736);
yr1017_SA(y_str(" = ", 3));
yr1024_ST(yr2316_Convert(F.p2327, F.p2326, F.p2328));
yr1017_SA(y_str("; y_store(", 10));
yr1024_ST(yr1835_DescOf(F.p2326));
yr1017_SA(y_str(", &", 3));
yr1024_ST(F.p2325);
yr1017_SA(y_str(", &", 3));
yr1024_ST(F.v5736);
yr1017_SA(y_str("); }", 4));
{ rt_int rv5745 = yr1036_SE();
return rv5745; }
}
yr1006_SB();
yr1024_ST(F.p2325);
yr1017_SA(y_str(" = ", 3));
yr1024_ST(yr2316_Convert(F.p2327, F.p2326, F.p2328));
yr1017_SA(y_str(";", 1));
{ rt_int rv5748 = yr1036_SE();
return rv5748; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2334_Store(rt_int a_p2335, void * a_p2336, rt_int a_p2337, void * a_p2338, rt_int a_p2339) {
struct yf2340 F;
memset((void *)&F, 0, sizeof F);
F.p2335 = a_p2335;
F.p2336 = a_p2336;
F.p2337 = a_p2337;
F.p2338 = a_p2338;
F.p2339 = a_p2339;
yr1112_Emit(yr2324_StoreText(F.p2335, F.p2336, F.p2337, F.p2338, F.p2339));
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2344_IsVariable(void * a_p2345) {
struct yf2346 F;
memset((void *)&F, 0, sizeof F);
F.p2345 = a_p2345;
if ((((*(yR99 *)rt_nil_check(F.p2345))).f_kind == v761)) {
F.v5758 = yr1672_Find(((*(yR99 *)rt_nil_check(F.p2345))).f_name);
if ((F.v5758 == ((void *)0))) {
{ rt_int rv5762 = 0;
return rv5762; }
}
if (((*(yR119 *)rt_nil_check(F.v5758))).f_readonly) {
{ rt_int rv5764 = 0;
return rv5764; }
}
{ rt_int rv5765 = (((*(yR119 *)rt_nil_check(yr1737_Real(F.v5758)))).f_kind == v845);
return rv5765; }
}
if ((((*(yR99 *)rt_nil_check(F.p2345))).f_kind == v773)) {
{ rt_int rv5767 = (((*(yR99 *)rt_nil_check(F.p2345))).f_flag == INT64_C(0));
return rv5767; }
}
if ((((*(yR99 *)rt_nil_check(F.p2345))).f_kind == v770)) {
{ rt_int rv5768 = yr2344_IsVariable(((*(yR99 *)rt_nil_check(F.p2345))).f_a);
return rv5768; }
}
if ((((*(yR99 *)rt_nil_check(F.p2345))).f_kind == v767)) {
if ((!yr2344_IsVariable(((*(yR99 *)rt_nil_check(F.p2345))).f_a))) {
{ rt_int rv5770 = 0;
return rv5770; }
}
F.v5760 = yr2084_FindField(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2345))).f_a))).f_rep, ((*(yR99 *)rt_nil_check(F.p2345))).f_name);
if ((F.v5760 == ((void *)0))) {
{ rt_int rv5772 = 0;
return rv5772; }
}
{ rt_int rv5773 = (!((*(yR109 *)rt_nil_check(F.v5760))).f_isconst);
return rv5773; }
}
{ rt_int rv5775 = 0;
return rv5775; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2350_CheckPure(void * a_p2351) {
struct yf2352 F;
memset((void *)&F, 0, sizeof F);
F.p2351 = a_p2351;
F.v5779 = F.p2351;
if ((v2729 == ((void *)0))) {
return;
}
if ((!((*(yR119 *)rt_nil_check(v2729))).f_func)) {
return;
}
while ((((((*(yR99 *)rt_nil_check(F.v5779))).f_kind == v767)) || ((((*(yR99 *)rt_nil_check(F.v5779))).f_kind == v770)))) {
F.v5779 = ((*(yR99 *)rt_nil_check(F.v5779))).f_a;
}
if ((((*(yR99 *)rt_nil_check(F.v5779))).f_kind == v773)) {
if ((((*(yR99 *)rt_nil_check(F.v5779))).f_flag == INT64_C(0))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2351))).f_line, y_str("a FUNCTION does not assign to a dynamic variable (X.A.4)", 56));
}
return;
}
if ((((*(yR99 *)rt_nil_check(F.v5779))).f_kind == v761)) {
F.v5781 = yr1672_Find(((*(yR99 *)rt_nil_check(F.v5779))).f_name);
if ((!(F.v5781 == ((void *)0)))) {
F.v5781 = yr1737_Real(F.v5781);
if ((((*(yR119 *)rt_nil_check(F.v5781))).f_level < ((*(yR119 *)rt_nil_check(v2729))).f_level)) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2351))).f_line, ((*(yR99 *)rt_nil_check(F.v5779))).f_name, y_str(" is not local: a FUNCTION assigns only to its locals (X.A.4)", 60));
}
}
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2356_LValue(void * a_p2357, rt_int * a_p2358, void * * a_p2359) {
struct yf2360 F;
memset((void *)&F, 0, sizeof F);
F.p2357 = a_p2357;
F.p2358_o = a_p2358;
F.p2359_o = a_p2359;
yr2383_Expr(F.p2357, ((void *)0), &F.p2358, &F.p2359);
if ((!yr2344_IsVariable(F.p2357))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2357))).f_line, y_str("a variable is needed here (IX.A.1)", 34));
}
(*F.p2358_o) = F.p2358;
(*F.p2359_o) = F.p2359;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2364_Paren(rt_int a_p2365) {
struct yf2366 F;
memset((void *)&F, 0, sizeof F);
F.p2365 = a_p2365;
yr1006_SB();
yr1017_SA(y_str("(", 1));
yr1024_ST(F.p2365);
yr1017_SA(y_str(")", 1));
{ rt_int rv5794 = yr1036_SE();
return rv5794; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2370_Lit(void * a_p2371, rt_int a_p2372) {
struct yf2373 F;
memset((void *)&F, 0, sizeof F);
F.p2371 = a_p2371;
F.p2372 = a_p2372;
F.v5799 = yr1774_CopyRep(F.p2371);
yr1997_SetRange(F.v5799, F.p2372, F.p2372);
((*(yR104 *)rt_nil_check(F.v5799))).f_elem = F.p2371;
{ void * rv5800 = F.v5799;
return rv5800; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2377_Qualifier(void * a_p2378) {
struct yf2379 F;
memset((void *)&F, 0, sizeof F);
F.p2378 = a_p2378;
F.v5804 = yr1737_Real(yr1684_Lookup(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2378))).f_d))).f_name, ((*(yR99 *)rt_nil_check(F.p2378))).f_line));
if ((((!(((*(yR119 *)rt_nil_check(F.v5804))).f_kind == v851))) && ((!(((*(yR119 *)rt_nil_check(F.v5804))).f_kind == v854))))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2378))).f_line, ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2378))).f_d))).f_name, y_str(" is not a type", 14));
}
{ void * rv5806 = ((*(yR119 *)rt_nil_check(F.v5804))).f_rep;
return rv5806; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2383_Expr(void * a_p2384, void * a_p2385, rt_int * a_p2386, void * * a_p2387) {
struct yf2388 F;
memset((void *)&F, 0, sizeof F);
F.p2384 = a_p2384;
F.p2385 = a_p2385;
F.p2386_o = a_p2386;
F.p2387_o = a_p2387;
F.v5813 = ((*(yR99 *)rt_nil_check(F.p2384))).f_kind;
v980 = ((*(yR99 *)rt_nil_check(F.p2384))).f_line;
if ((F.v5813 == v785)) {
yr2383_Expr(((*(yR99 *)rt_nil_check(F.p2384))).f_a, F.p2385, &F.v5817, &F.p2387);
F.p2386 = yr2364_Paren(F.v5817);
} else if ((F.v5813 == v743)) {
F.p2387 = yr2370_Lit(v1743, ((*(yR99 *)rt_nil_check(F.p2384))).f_ival);
if ((!(((*(yR99 *)rt_nil_check(F.p2384))).f_d == ((void *)0)))) {
F.v5823 = yr2377_Qualifier(F.p2384);
if ((!(((*(yR104 *)rt_nil_check(F.v5823))).f_kind == v788))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2384))).f_line, y_str("an integer literal qualified by a type that is not INTEGER", 58));
}
((*(yR104 *)rt_nil_check(F.p2387))).f_tid = ((*(yR104 *)rt_nil_check(F.v5823))).f_tid;
((*(yR104 *)rt_nil_check(F.p2387))).f_tname = ((*(yR104 *)rt_nil_check(F.v5823))).f_tname;
}
yr1006_SB();
yr1017_SA(y_str("INT64_C(", 8));
yr1030_SI(((*(yR99 *)rt_nil_check(F.p2384))).f_ival);
yr1017_SA(y_str(")", 1));
F.p2386 = yr1036_SE();
} else if ((F.v5813 == v752)) {
F.v5823 = yr2211_AlphabetFor(F.p2384, F.p2385);
F.v5829 = yr2218_CharValue(F.v5823, ((*(yR99 *)rt_nil_check(F.p2384))).f_text, ((*(yR99 *)rt_nil_check(F.p2384))).f_line);
F.p2387 = yr2370_Lit(F.v5823, F.v5829);
yr1006_SB();
yr1030_SI(F.v5829);
F.p2386 = yr1036_SE();
} else if ((F.v5813 == v755)) {
F.v5823 = yr2211_AlphabetFor(F.p2384, F.p2385);
F.v5817 = yr2226_StringCodes(F.v5823, ((*(yR99 *)rt_nil_check(F.p2384))).f_text, &F.v5827, ((*(yR99 *)rt_nil_check(F.p2384))).f_line);
F.p2387 = yr1767_NewRep(v830, yr1041_T(y_str("string", 6)));
((*(yR104 *)rt_nil_check(F.p2387))).f_tname = yr1041_T(y_str("a string literal", 16));
((*(yR104 *)rt_nil_check(F.p2387))).f_elem = F.v5823;
((*(yR104 *)rt_nil_check(F.p2387))).f_nidx = INT64_C(1);
((*(yR104 *)rt_nil_check(F.p2387))).f_nlits = F.v5827;
yr1006_SB();
yr1017_SA(y_str("y_str(", 6));
yr1024_ST(F.v5817);
yr1017_SA(y_str(", ", 2));
yr1030_SI(F.v5827);
yr1017_SA(y_str(")", 1));
F.p2386 = yr1036_SE();
} else if ((F.v5813 == v749)) {
F.p2387 = v1755;
if ((!(((*(yR99 *)rt_nil_check(F.p2384))).f_d == ((void *)0)))) {
F.p2387 = yr2377_Qualifier(F.p2384);
}
F.p2386 = yr2364_Paren(((*(yR99 *)rt_nil_check(F.p2384))).f_text);
} else if ((F.v5813 == v746)) {
yr2293_FixLiteral(F.p2384, &F.p2386, &F.p2387);
if ((!(((*(yR99 *)rt_nil_check(F.p2384))).f_d == ((void *)0)))) {
F.v5823 = yr2377_Qualifier(F.p2384);
if ((!(((*(yR104 *)rt_nil_check(F.v5823))).f_kind == v791))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2384))).f_line, y_str("a fixed-point literal qualified by a type that is not FIXED", 59));
}
((*(yR104 *)rt_nil_check(F.p2387))).f_tid = ((*(yR104 *)rt_nil_check(F.v5823))).f_tid;
((*(yR104 *)rt_nil_check(F.p2387))).f_tname = ((*(yR104 *)rt_nil_check(F.v5823))).f_tname;
}
} else if ((F.v5813 == v758)) {
if ((((*(yR99 *)rt_nil_check(F.p2384))).f_d == ((void *)0))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2384))).f_line, y_str("NIL is qualified by the name of a pointer type (VI.B.4)", 55));
}
F.p2387 = yr2377_Qualifier(F.p2384);
if ((!(((*(yR104 *)rt_nil_check(F.p2387))).f_kind == v812))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2384))).f_line, y_str("NIL of a type that is not a pointer", 35));
}
F.p2386 = yr1041_T(y_str("((void *)0)", 11));
} else if ((F.v5813 == v761)) {
if ((!(((*(yR99 *)rt_nil_check(F.p2384))).f_d == ((void *)0)))) {
F.v5823 = yr2377_Qualifier(F.p2384);
F.v5815 = yr1697_FindLit(((*(yR99 *)rt_nil_check(F.p2384))).f_name, F.v5823);
if ((F.v5815 == ((void *)0))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2384))).f_line, ((*(yR99 *)rt_nil_check(F.p2384))).f_name, y_str(" is not a literal of that type", 30));
}
} else {
F.v5815 = yr1684_Lookup(((*(yR99 *)rt_nil_check(F.p2384))).f_name, ((*(yR99 *)rt_nil_check(F.p2384))).f_line);
}
yr2400_NameExpr(F.p2384, F.v5815, &F.p2386, &F.p2387);
} else if ((F.v5813 == v764)) {
yr2616_CallExpr(F.p2384, F.p2385, 0, &F.p2386, &F.p2387);
} else if ((F.v5813 == v767)) {
yr2383_Expr(((*(yR99 *)rt_nil_check(F.p2384))).f_a, ((void *)0), &F.v5817, &F.v5823);
((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2384))).f_a))).f_rep = F.v5823;
if ((!(((*(yR104 *)rt_nil_check(F.v5823))).f_kind == v809))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2384))).f_line, ((*(yR99 *)rt_nil_check(F.p2384))).f_name, y_str(": a component of something that is not a record", 47));
}
if (((*(yR104 *)rt_nil_check(F.v5823))).f_opaque) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2384))).f_line, ((*(yR104 *)rt_nil_check(F.v5823))).f_tname, y_str(" is exported opaquely: its components are hidden (X.B.3)", 56));
}
F.v5825 = yr2084_FindField(F.v5823, ((*(yR99 *)rt_nil_check(F.p2384))).f_name);
if ((F.v5825 == ((void *)0))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2384))).f_line, ((*(yR99 *)rt_nil_check(F.p2384))).f_name, y_str(" is not a component of this record", 34));
}
F.p2387 = ((*(yR109 *)rt_nil_check(F.v5825))).f_rep;
if ((!(((*(yR109 *)rt_nil_check(F.v5825))).f_variant == INT64_C(0)))) {
yr2809_CheckVariantSelected(F.p2384, F.v5823, F.v5825);
F.v5819 = yr1166_Fresh(y_str("vr", 2));
yr1006_SB();
yr1017_SA(y_str("(*({ ", 5));
yr1024_ST(yr1829_CType(F.v5823));
yr1017_SA(y_str(" *", 2));
yr1024_ST(F.v5819);
yr1017_SA(y_str(" = &", 4));
yr1024_ST(yr2364_Paren(F.v5817));
yr1017_SA(y_str("; if (!(", 8));
yr1024_ST(yr2392_VariantTest(F.v5823, F.v5825, F.v5819));
yr1017_SA(y_str(")) rt_raise(RT_X_TAG); &", 24));
yr1024_ST(F.v5819);
yr1017_SA(y_str("->f_", 4));
yr1024_ST(((*(yR99 *)rt_nil_check(F.p2384))).f_name);
yr1017_SA(y_str("; }))", 5));
F.p2386 = yr1036_SE();
} else {
yr1006_SB();
yr1024_ST(yr2364_Paren(F.v5817));
yr1017_SA(y_str(".f_", 3));
yr1024_ST(((*(yR99 *)rt_nil_check(F.p2384))).f_name);
F.p2386 = yr1036_SE();
}
} else if ((((F.v5813 == v773)) && yr2578_UserOp(F.p2384, rt_range(v602, INT64_C(0), INT64_C(4000000)), ((*(yR99 *)rt_nil_check(F.p2384))).f_a, ((void *)0), &F.p2386, &F.p2387))) {
((*(yR99 *)rt_nil_check(F.p2384))).f_flag = INT64_C(1);
} else if ((F.v5813 == v773)) {
yr2383_Expr(((*(yR99 *)rt_nil_check(F.p2384))).f_a, ((void *)0), &F.v5817, &F.v5823);
if ((!(((*(yR104 *)rt_nil_check(F.v5823))).f_kind == v812))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2384))).f_line, y_str("^ of something that is not a pointer", 36));
}
if ((((*(yR104 *)rt_nil_check(F.v5823))).f_elem == ((void *)0))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2384))).f_line, ((*(yR104 *)rt_nil_check(F.v5823))).f_forward, y_str(" is not declared", 16));
}
F.p2387 = ((*(yR104 *)rt_nil_check(F.v5823))).f_elem;
yr1006_SB();
yr1017_SA(y_str("(*(", 3));
yr1024_ST(yr1829_CType(F.p2387));
yr1017_SA(y_str(" *)rt_nil_check(", 16));
yr1024_ST(F.v5817);
yr1017_SA(y_str("))", 2));
F.p2386 = yr1036_SE();
} else if ((F.v5813 == v770)) {
yr2409_IndexExpr(F.p2384, &F.p2386, &F.p2387);
} else if ((((F.v5813 == v776)) && yr2578_UserOp(F.p2384, rt_range(v374, INT64_C(0), INT64_C(4000000)), ((*(yR99 *)rt_nil_check(F.p2384))).f_a, ((void *)0), &F.p2386, &F.p2387))) {
F.p2387 = F.p2387;
} else if ((F.v5813 == v776)) {
yr2383_Expr(((*(yR99 *)rt_nil_check(F.p2384))).f_a, v1745, &F.v5817, &F.v5823);
yr1862_CheckType(((*(yR99 *)rt_nil_check(F.p2384))).f_line, v1745, F.v5823);
F.p2387 = v1745;
yr1006_SB();
yr1017_SA(y_str("(!", 2));
yr1024_ST(F.v5817);
yr1017_SA(y_str(")", 1));
F.p2386 = yr1036_SE();
} else if ((F.v5813 == v779)) {
if ((!yr2578_UserOp(F.p2384, rt_range(v560, INT64_C(0), INT64_C(4000000)), ((*(yR99 *)rt_nil_check(F.p2384))).f_a, ((void *)0), &F.p2386, &F.p2387))) {
yr2383_Expr(((*(yR99 *)rt_nil_check(F.p2384))).f_a, F.p2385, &F.v5817, &F.v5823);
yr2417_NegExpr(F.p2384, F.v5817, F.v5823, &F.p2386, &F.p2387);
}
} else if ((F.v5813 == v782)) {
yr2473_BinExpr(F.p2384, F.p2385, &F.p2386, &F.p2387);
} else {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2384))).f_line, y_str("not an expression", 17));
}
((*(yR99 *)rt_nil_check(F.p2384))).f_rep = F.p2387;
(*F.p2386_o) = F.p2386;
(*F.p2387_o) = F.p2387;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2392_VariantTest(void * a_p2393, void * a_p2394, rt_int a_p2395) {
struct yf2396 F;
memset((void *)&F, 0, sizeof F);
F.p2393 = a_p2393;
F.p2394 = a_p2394;
F.p2395 = a_p2395;
F.v5872 = ((*(yR109 *)rt_nil_check(F.p2394))).f_labels;
yr1006_SB();
yr1017_SA(y_str("0", 1));
while ((!(F.v5872 == ((void *)0)))) {
yr2235_Manifest(F.v5872, &F.v5874, &F.v5876);
yr1017_SA(y_str(" || ", 4));
yr1024_ST(F.p2395);
yr1017_SA(y_str("->f_", 4));
yr1024_ST(((*(yR109 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2393))).f_selector))).f_name);
yr1017_SA(y_str(" == ", 4));
yr1030_SI(F.v5876);
F.v5872 = ((*(yR99 *)rt_nil_check(F.v5872))).f_next;
}
{ rt_int rv5881 = yr1036_SE();
return rv5881; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2400_NameExpr(void * a_p2401, void * a_p2402, rt_int * a_p2403, void * * a_p2404) {
struct yf2405 F;
memset((void *)&F, 0, sizeof F);
F.p2401 = a_p2401;
F.p2402 = a_p2402;
F.p2403_o = a_p2403;
F.p2404_o = a_p2404;
F.v5888 = yr1737_Real(F.p2402);
if ((((*(yR119 *)rt_nil_check(F.v5888))).f_kind == v857)) {
if ((((((*(yR99 *)rt_nil_check(F.p2401))).f_d == ((void *)0))) && yr1691_Ambiguous(F.v5888))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2401))).f_line, ((*(yR99 *)rt_nil_check(F.p2401))).f_name, y_str(" names values of two types here: qualify it (VI.A.3)", 52));
}
F.p2404 = yr2370_Lit(((*(yR119 *)rt_nil_check(F.v5888))).f_rep, ((*(yR119 *)rt_nil_check(F.v5888))).f_mval);
yr1006_SB();
yr1030_SI(((*(yR119 *)rt_nil_check(F.v5888))).f_mval);
F.p2403 = yr1036_SE();
(*F.p2403_o) = F.p2403;
(*F.p2404_o) = F.p2404;
return;
}
if ((((((*(yR119 *)rt_nil_check(F.v5888))).f_kind == v845)) || ((((*(yR119 *)rt_nil_check(F.v5888))).f_kind == v848)))) {
F.p2404 = ((*(yR119 *)rt_nil_check(F.v5888))).f_rep;
F.p2403 = yr1731_SymPath(F.v5888);
(*F.p2403_o) = F.p2403;
(*F.p2404_o) = F.p2404;
return;
}
if ((((*(yR119 *)rt_nil_check(F.v5888))).f_kind == v860)) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2401))).f_line, ((*(yR99 *)rt_nil_check(F.p2401))).f_name, y_str(" is a routine: a call needs ()", 30));
}
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2401))).f_line, ((*(yR99 *)rt_nil_check(F.p2401))).f_name, y_str(" is not a value", 15));
(*F.p2403_o) = F.p2403;
(*F.p2404_o) = F.p2404;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2409_IndexExpr(void * a_p2410, rt_int * a_p2411, void * * a_p2412) {
struct yf2413 F;
memset((void *)&F, 0, sizeof F);
F.p2410 = a_p2410;
F.p2411_o = a_p2411;
F.p2412_o = a_p2412;
yr2383_Expr(((*(yR99 *)rt_nil_check(F.p2410))).f_a, ((void *)0), &F.v5897, &F.v5903);
if ((!yr1792_IsArrayLike(F.v5903))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2410))).f_line, y_str("[] of something that is not an array", 36));
}
F.v5911 = yr1305_Count(((*(yR99 *)rt_nil_check(F.p2410))).f_b);
if ((!(F.v5911 == ((*(yR104 *)rt_nil_check(F.v5903))).f_nidx))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2410))).f_line, y_str("the number of subscripts is not the number of dimensions", 56));
}
F.p2412 = ((*(yR104 *)rt_nil_check(F.v5903))).f_elem;
F.v5913 = (((((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2410))).f_a))).f_kind == v761)) || ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2410))).f_a))).f_kind == v767))) || ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2410))).f_a))).f_kind == v770))) || ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2410))).f_a))).f_kind == v773)));
if (F.v5913) {
F.v5901 = F.v5897;
} else {
F.v5901 = yr1166_Fresh(y_str("ya", 2));
}
yr1006_SB();
if ((!F.v5913)) {
yr1017_SA(y_str("(*({ yarr ", 10));
yr1024_ST(F.v5901);
yr1017_SA(y_str(" = ", 3));
yr1024_ST(F.v5897);
yr1017_SA(y_str("; &", 3));
}
yr1017_SA(y_str("((", 2));
yr1024_ST(yr1829_CType(F.p2412));
yr1017_SA(y_str(" *)(", 4));
yr1024_ST(F.v5901);
yr1017_SA(y_str(").p)[y_ix", 9));
yr1030_SI(F.v5911);
yr1017_SA(y_str("(", 1));
yr1024_ST(F.v5901);
F.p2411 = yr1036_SE();
F.v5909 = ((*(yR99 *)rt_nil_check(F.p2410))).f_b;
F.v5907 = ((*(yR104 *)rt_nil_check(F.v5903))).f_idx;
while ((!(F.v5909 == ((void *)0)))) {
yr2383_Expr(F.v5909, F.v5907, &F.v5899, &F.v5905);
if ((((!(F.v5907 == ((void *)0)))) && ((((*(yR104 *)rt_nil_check(F.v5903))).f_kind == v806)))) {
yr1862_CheckType(((*(yR99 *)rt_nil_check(F.v5909))).f_line, F.v5907, F.v5905);
} else if ((!((((((*(yR104 *)rt_nil_check(F.v5905))).f_kind == v788)) || yr1780_IsDiscrete(F.v5905))))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.v5909))).f_line, y_str("a subscript is an integer or scalar value", 41));
}
yr1006_SB();
yr1024_ST(F.p2411);
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.v5899);
F.p2411 = yr1036_SE();
if ((!(F.v5907 == ((void *)0)))) {
F.v5907 = ((*(yR104 *)rt_nil_check(F.v5907))).f_link;
}
F.v5909 = ((*(yR99 *)rt_nil_check(F.v5909))).f_next;
}
yr1006_SB();
yr1024_ST(F.p2411);
yr1017_SA(y_str(")]", 2));
if ((!F.v5913)) {
yr1017_SA(y_str("; }))", 5));
}
F.p2411 = yr1036_SE();
(*F.p2411_o) = F.p2411;
(*F.p2412_o) = F.p2412;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2417_NegExpr(void * a_p2418, rt_int a_p2419, void * a_p2420, rt_int * a_p2421, void * * a_p2422) {
struct yf2423 F;
memset((void *)&F, 0, sizeof F);
F.p2418 = a_p2418;
F.p2419 = a_p2419;
F.p2420 = a_p2420;
F.p2421_o = a_p2421;
F.p2422_o = a_p2422;
yr1006_SB();
if ((((*(yR104 *)rt_nil_check(F.p2420))).f_kind == v788)) {
F.p2422 = yr1774_CopyRep(F.p2420);
((*(yR104 *)rt_nil_check(F.p2422))).f_lo = INT64_C(0);
((*(yR104 *)rt_nil_check(F.p2422))).f_hasm = 0;
yr1017_SA(y_str("rt_neg(", 7));
yr1024_ST(F.p2419);
yr1017_SA(y_str(")", 1));
} else if ((((*(yR104 *)rt_nil_check(F.p2420))).f_kind == v794)) {
F.p2422 = yr1774_CopyRep(F.p2420);
((*(yR104 *)rt_nil_check(F.p2422))).f_lo = INT64_C(0);
yr1017_SA(y_str("(-", 2));
yr1024_ST(F.p2419);
yr1017_SA(y_str(")", 1));
} else if ((((*(yR104 *)rt_nil_check(F.p2420))).f_kind == v791)) {
F.p2422 = yr1774_CopyRep(F.p2420);
((*(yR104 *)rt_nil_check(F.p2422))).f_lo = INT64_C(0);
yr1017_SA(y_str("y_fix_neg(", 10));
yr1024_ST(F.p2419);
yr1017_SA(y_str(")", 1));
} else if ((((*(yR104 *)rt_nil_check(F.p2420))).f_kind == v818)) {
F.p2422 = F.p2420;
yr1017_SA(y_str("y_set_compl(", 12));
yr1024_ST(F.p2419);
yr1017_SA(y_str(")", 1));
} else {
v911 = 0;
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2418))).f_line, y_str("- of something that is not a number or a set", 44));
}
F.p2421 = yr1036_SE();
(*F.p2421_o) = F.p2421;
(*F.p2422_o) = F.p2422;
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2427_Unbounded(void * a_p2428) {
struct yf2429 F;
memset((void *)&F, 0, sizeof F);
F.p2428 = a_p2428;
F.v5951 = yr1774_CopyRep(F.p2428);
((*(yR104 *)rt_nil_check(F.v5951))).f_lo = INT64_C(0);
((*(yR104 *)rt_nil_check(F.v5951))).f_hi = INT64_C(0);
((*(yR104 *)rt_nil_check(F.v5951))).f_hasm = 0;
{ void * rv5955 = F.v5951;
return rv5955; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2433_Call2(yarr a_p2435, rt_int a_p2436, rt_int a_p2437) {
struct yf2438 F;
memset((void *)&F, 0, sizeof F);
F.p2435 = a_p2435;
F.p2436 = a_p2436;
F.p2437 = a_p2437;
yr1006_SB();
yr1017_SA(F.p2435);
yr1017_SA(y_str("(", 1));
yr1024_ST(F.p2436);
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.p2437);
yr1017_SA(y_str(")", 1));
{ rt_int rv5963 = yr1036_SE();
return rv5963; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2442_Infix(rt_int a_p2443, yarr a_p2445, rt_int a_p2446) {
struct yf2447 F;
memset((void *)&F, 0, sizeof F);
F.p2443 = a_p2443;
F.p2445 = a_p2445;
F.p2446 = a_p2446;
yr1006_SB();
yr1017_SA(y_str("(", 1));
yr1024_ST(F.p2443);
yr1017_SA(y_str(" ", 1));
yr1017_SA(F.p2445);
yr1017_SA(y_str(" ", 1));
yr1024_ST(F.p2446);
yr1017_SA(y_str(")", 1));
{ rt_int rv5972 = yr1036_SE();
return rv5972; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2451_EqCode(rt_int a_p2452, void * a_p2453, rt_int a_p2454, void * a_p2455) {
struct yf2456 F;
memset((void *)&F, 0, sizeof F);
F.p2452 = a_p2452;
F.p2453 = a_p2453;
F.p2454 = a_p2454;
F.p2455 = a_p2455;
F.v5983 = F.p2453;
if ((((*(yR104 *)rt_nil_check(F.p2453))).f_kind == v830)) {
F.v5983 = F.p2455;
}
if ((((((((*(yR104 *)rt_nil_check(F.v5983))).f_kind == v806)) || ((((*(yR104 *)rt_nil_check(F.v5983))).f_kind == v809))) || ((((*(yR104 *)rt_nil_check(F.v5983))).f_kind == v827))) || ((((*(yR104 *)rt_nil_check(F.v5983))).f_kind == v830)))) {
F.v5979 = yr1166_Fresh(y_str("e", 1));
F.v5981 = yr1166_Fresh(y_str("e", 1));
yr1006_SB();
yr1017_SA(y_str("({ ", 3));
yr1024_ST(yr1829_CType(F.v5983));
yr1017_SA(y_str(" ", 1));
yr1024_ST(F.v5979);
yr1017_SA(y_str(" = ", 3));
yr1024_ST(F.p2452);
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.v5981);
yr1017_SA(y_str(" = ", 3));
yr1024_ST(F.p2454);
yr1017_SA(y_str("; y_eq(", 7));
if ((((((*(yR104 *)rt_nil_check(F.v5983))).f_kind == v827)) || ((((*(yR104 *)rt_nil_check(F.v5983))).f_kind == v830)))) {
yr1017_SA(y_str("y_desc_vector(", 14));
yr1024_ST(yr1835_DescOf(((*(yR104 *)rt_nil_check(F.v5983))).f_elem));
yr1017_SA(y_str(")", 1));
} else {
yr1024_ST(yr1835_DescOf(F.v5983));
}
yr1017_SA(y_str(", &", 3));
yr1024_ST(F.v5979);
yr1017_SA(y_str(", &", 3));
yr1024_ST(F.v5981);
yr1017_SA(y_str("); })", 5));
{ rt_int rv5997 = yr1036_SE();
return rv5997; }
}
if ((((*(yR104 *)rt_nil_check(F.v5983))).f_kind == v818)) {
{ rt_int rv5999 = yr2433_Call2(y_str("y_set_eq", 8), F.p2452, F.p2454);
return rv5999; }
}
{ rt_int rv6001 = yr2442_Infix(F.p2452, y_str("==", 2), F.p2454);
return rv6001; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2460_IsOrdered(void * a_p2461) {
struct yf2462 F;
memset((void *)&F, 0, sizeof F);
F.p2461 = a_p2461;
if ((((((((*(yR104 *)rt_nil_check(F.p2461))).f_kind == v788)) || ((((*(yR104 *)rt_nil_check(F.p2461))).f_kind == v794))) || ((((*(yR104 *)rt_nil_check(F.p2461))).f_kind == v791))) || ((((*(yR104 *)rt_nil_check(F.p2461))).f_kind == v803)))) {
{ rt_int rv6005 = 1;
return rv6005; }
}
{ rt_int rv6006 = (((((*(yR104 *)rt_nil_check(F.p2461))).f_kind == v800)) && ((*(yR104 *)rt_nil_check(F.p2461))).f_ordered);
return rv6006; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2466_FixToFloat(rt_int a_p2467, void * a_p2468) {
struct yf2469 F;
memset((void *)&F, 0, sizeof F);
F.p2467 = a_p2467;
F.p2468 = a_p2468;
yr1006_SB();
yr1017_SA(y_str("y_fix_float(", 12));
yr1024_ST(F.p2467);
yr1017_SA(y_str(", INT64_C(", 10));
yr1030_SI(((*(yR104 *)rt_nil_check(F.p2468))).f_fsn);
yr1017_SA(y_str("), INT64_C(", 11));
yr1030_SI(((*(yR104 *)rt_nil_check(F.p2468))).f_fsd);
yr1017_SA(y_str("))", 2));
{ rt_int rv6014 = yr1036_SE();
return rv6014; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2473_BinExpr(void * a_p2474, void * a_p2475, rt_int * a_p2476, void * * a_p2477) {
struct yf2478 F;
memset((void *)&F, 0, sizeof F);
F.p2474 = a_p2474;
F.p2475 = a_p2475;
F.p2476_o = a_p2476;
F.p2477_o = a_p2477;
F.v6021 = ((*(yR99 *)rt_nil_check(F.p2474))).f_name;
if (yr2578_UserOp(F.p2474, F.v6021, ((*(yR99 *)rt_nil_check(F.p2474))).f_a, ((*(yR99 *)rt_nil_check(F.p2474))).f_b, &F.p2476, &F.p2477)) {
(*F.p2476_o) = F.p2476;
(*F.p2477_o) = F.p2477;
return;
}
if ((((F.v6021 == v221)) || ((F.v6021 == v383)))) {
yr2383_Expr(((*(yR99 *)rt_nil_check(F.p2474))).f_a, v1745, &F.v6023, &F.v6029);
yr1862_CheckType(((*(yR99 *)rt_nil_check(F.p2474))).f_line, v1745, F.v6029);
yr2383_Expr(((*(yR99 *)rt_nil_check(F.p2474))).f_b, v1745, &F.v6025, &F.v6031);
yr1862_CheckType(((*(yR99 *)rt_nil_check(F.p2474))).f_line, v1745, F.v6031);
F.p2477 = v1745;
if ((F.v6021 == v221)) {
F.p2476 = yr2442_Infix(F.v6023, y_str("&&", 2), F.v6025);
} else {
F.p2476 = yr2442_Infix(F.v6023, y_str("||", 2), F.v6025);
}
(*F.p2476_o) = F.p2476;
(*F.p2477_o) = F.p2477;
return;
}
if ((F.v6021 == v344)) {
yr2383_Expr(((*(yR99 *)rt_nil_check(F.p2474))).f_b, ((void *)0), &F.v6025, &F.v6031);
if ((!(((*(yR104 *)rt_nil_check(F.v6031))).f_kind == v818))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2474))).f_line, y_str("IN needs a set on its right", 27));
}
yr2383_Expr(((*(yR99 *)rt_nil_check(F.p2474))).f_a, ((*(yR104 *)rt_nil_check(F.v6031))).f_elem, &F.v6023, &F.v6029);
yr1862_CheckType(((*(yR99 *)rt_nil_check(F.p2474))).f_line, ((*(yR104 *)rt_nil_check(F.v6031))).f_elem, F.v6029);
F.p2477 = v1745;
F.p2476 = yr2433_Call2(y_str("y_set_in", 8), F.v6023, F.v6025);
(*F.p2476_o) = F.p2476;
(*F.p2477_o) = F.p2477;
return;
}
F.v6033 = ((void *)0);
if (((((((((!(F.p2475 == ((void *)0)))) && ((!(F.v6021 == v569)))) && ((!(F.v6021 == v554)))) && ((!(F.v6021 == v572)))) && ((!(F.v6021 == v524)))) && ((!(F.v6021 == v575)))) && ((!(F.v6021 == v527))))) {
F.v6033 = F.p2475;
}
yr2383_Expr(((*(yR99 *)rt_nil_check(F.p2474))).f_a, F.v6033, &F.v6023, &F.v6029);
yr2383_Expr(((*(yR99 *)rt_nil_check(F.p2474))).f_b, F.v6029, &F.v6025, &F.v6031);
if ((((F.v6021 == v569)) || ((F.v6021 == v554)))) {
yr1862_CheckType(((*(yR99 *)rt_nil_check(F.p2474))).f_line, F.v6029, F.v6031);
if (yr1823_NonAssignable(F.v6029)) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2474))).f_line, y_str("= and # are not defined for signals, files and semaphores, nor what holds them (VII.B)", 86));
}
if ((((*(yR104 *)rt_nil_check(F.v6029))).f_opaque && (((rt_div(((*(yR104 *)rt_nil_check(F.v6029))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2474))).f_line, ((*(yR104 *)rt_nil_check(F.v6029))).f_tname, y_str(" is opaque here: = is not exported (X.B.3)", 42));
}
F.p2477 = v1745;
if ((((*(yR104 *)rt_nil_check(F.v6029))).f_kind == v791)) {
yr2282_CommonScale(&F.v6023, F.v6029, &F.v6025, F.v6031, yr2427_Unbounded(F.v6029), ((*(yR99 *)rt_nil_check(F.p2474))).f_line);
}
F.p2476 = yr2451_EqCode(F.v6023, F.v6029, F.v6025, F.v6031);
if ((F.v6021 == v554)) {
yr1006_SB();
yr1017_SA(y_str("(!", 2));
yr1024_ST(F.p2476);
yr1017_SA(y_str(")", 1));
F.p2476 = yr1036_SE();
}
(*F.p2476_o) = F.p2476;
(*F.p2477_o) = F.p2477;
return;
}
if ((((((F.v6021 == v572)) || ((F.v6021 == v524))) || ((F.v6021 == v575))) || ((F.v6021 == v527)))) {
yr1862_CheckType(((*(yR99 *)rt_nil_check(F.p2474))).f_line, F.v6029, F.v6031);
if ((!yr2460_IsOrdered(F.v6029))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2474))).f_line, y_str("< <= > >= apply to ordered values (VIII.A.1)", 44));
}
F.p2477 = v1745;
if ((((*(yR104 *)rt_nil_check(F.v6029))).f_kind == v791)) {
yr2282_CommonScale(&F.v6023, F.v6029, &F.v6025, F.v6031, yr2427_Unbounded(F.v6029), ((*(yR99 *)rt_nil_check(F.p2474))).f_line);
}
if ((F.v6021 == v572)) {
F.p2476 = yr2442_Infix(F.v6023, y_str("<", 1), F.v6025);
} else if ((F.v6021 == v524)) {
F.p2476 = yr2442_Infix(F.v6023, y_str("<=", 2), F.v6025);
} else if ((F.v6021 == v575)) {
F.p2476 = yr2442_Infix(F.v6023, y_str(">", 1), F.v6025);
} else {
F.p2476 = yr2442_Infix(F.v6023, y_str(">=", 2), F.v6025);
}
(*F.p2476_o) = F.p2476;
(*F.p2477_o) = F.p2477;
return;
}
yr1862_CheckType(((*(yR99 *)rt_nil_check(F.p2474))).f_line, F.v6029, F.v6031);
F.v6035 = ((*(yR104 *)rt_nil_check(F.v6029))).f_kind;
if ((((*(yR104 *)rt_nil_check(F.v6029))).f_kind == v830)) {
F.v6035 = ((*(yR104 *)rt_nil_check(F.v6031))).f_kind;
}
if ((F.v6021 == v473)) {
if ((F.v6035 == v797)) {
F.p2477 = v1745;
F.p2476 = yr2442_Infix(F.v6023, y_str("!=", 2), F.v6025);
} else if ((F.v6035 == v818)) {
F.p2477 = F.v6029;
F.p2476 = yr2433_Call2(y_str("y_set_xor", 9), F.v6023, F.v6025);
} else {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2474))).f_line, y_str("XOR applies to BOOLEAN values and sets", 38));
}
(*F.p2476_o) = F.p2476;
(*F.p2477_o) = F.p2477;
return;
}
if ((F.v6035 == v818)) {
F.p2477 = F.v6029;
if ((F.v6021 == v557)) {
F.p2476 = yr2433_Call2(y_str("y_set_union", 11), F.v6023, F.v6025);
} else if ((F.v6021 == v560)) {
F.p2476 = yr2433_Call2(y_str("y_set_diff", 10), F.v6023, F.v6025);
} else if ((F.v6021 == v563)) {
F.p2476 = yr2433_Call2(y_str("y_set_inter", 11), F.v6023, F.v6025);
} else {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2474))).f_line, y_str("this operator does not apply to sets", 36));
}
(*F.p2476_o) = F.p2476;
(*F.p2477_o) = F.p2477;
return;
}
if ((F.v6035 == v788)) {
F.p2477 = yr2427_Unbounded(F.v6029);
if ((F.v6021 == v557)) {
F.p2476 = yr2433_Call2(y_str("rt_add", 6), F.v6023, F.v6025);
} else if ((F.v6021 == v560)) {
F.p2476 = yr2433_Call2(y_str("rt_sub", 6), F.v6023, F.v6025);
} else if ((F.v6021 == v563)) {
F.p2476 = yr2433_Call2(y_str("rt_mul", 6), F.v6023, F.v6025);
} else if ((F.v6021 == v260)) {
F.p2476 = yr2433_Call2(y_str("rt_div", 6), F.v6023, F.v6025);
} else if ((F.v6021 == v362)) {
F.p2476 = yr2433_Call2(y_str("rt_mod", 6), F.v6023, F.v6025);
} else if ((F.v6021 == v566)) {
F.p2477 = v1755;
yr1006_SB();
yr1017_SA(y_str("rt_fdiv((double)(", 17));
yr1024_ST(F.v6023);
yr1017_SA(y_str("), (double)(", 12));
yr1024_ST(F.v6025);
yr1017_SA(y_str("))", 2));
F.p2476 = yr1036_SE();
} else {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2474))).f_line, F.v6021, y_str(" is a free operator: no definition of it is visible (VIII.A)", 60));
}
(*F.p2476_o) = F.p2476;
(*F.p2477_o) = F.p2477;
return;
}
if ((F.v6035 == v794)) {
F.p2477 = yr2427_Unbounded(F.v6029);
if ((F.v6021 == v557)) {
F.p2476 = yr2310_FloatChk(yr2442_Infix(F.v6023, y_str("+", 1), F.v6025));
} else if ((F.v6021 == v560)) {
F.p2476 = yr2310_FloatChk(yr2442_Infix(F.v6023, y_str("-", 1), F.v6025));
} else if ((F.v6021 == v563)) {
F.p2476 = yr2310_FloatChk(yr2442_Infix(F.v6023, y_str("*", 1), F.v6025));
} else if ((F.v6021 == v566)) {
F.p2477 = v1755;
F.p2476 = yr2310_FloatChk(yr2433_Call2(y_str("rt_fdiv", 7), F.v6023, F.v6025));
} else {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2474))).f_line, F.v6021, y_str(" does not apply to these numbers", 32));
}
(*F.p2476_o) = F.p2476;
(*F.p2477_o) = F.p2477;
return;
}
if ((F.v6035 == v791)) {
F.p2477 = yr2427_Unbounded(F.v6029);
if ((((F.v6021 == v557)) || ((F.v6021 == v560)))) {
yr2282_CommonScale(&F.v6023, F.v6029, &F.v6025, F.v6031, F.p2477, ((*(yR99 *)rt_nil_check(F.p2474))).f_line);
if ((F.v6021 == v557)) {
F.p2476 = yr2433_Call2(y_str("y_fix_add", 9), F.v6023, F.v6025);
} else {
F.p2476 = yr2433_Call2(y_str("y_fix_sub", 9), F.v6023, F.v6025);
}
} else if ((F.v6021 == v563)) {
yr1976_SetScale(F.p2477, yr1943_MulChk(((*(yR104 *)rt_nil_check(F.v6029))).f_fsn, ((*(yR104 *)rt_nil_check(F.v6031))).f_fsn, ((*(yR99 *)rt_nil_check(F.p2474))).f_line), yr1943_MulChk(((*(yR104 *)rt_nil_check(F.v6029))).f_fsd, ((*(yR104 *)rt_nil_check(F.v6031))).f_fsd, ((*(yR99 *)rt_nil_check(F.p2474))).f_line));
F.p2476 = yr2433_Call2(y_str("y_fix_mul", 9), F.v6023, F.v6025);
} else if ((F.v6021 == v566)) {
F.p2477 = v1755;
F.p2476 = yr2310_FloatChk(yr2433_Call2(y_str("rt_fdiv", 7), yr2466_FixToFloat(F.v6023, F.v6029), yr2466_FixToFloat(F.v6025, F.v6031)));
} else {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2474))).f_line, F.v6021, y_str(" does not apply to these numbers", 32));
}
(*F.p2476_o) = F.p2476;
(*F.p2477_o) = F.p2477;
return;
}
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2474))).f_line, F.v6021, y_str(" does not apply to these values", 31));
(*F.p2476_o) = F.p2476;
(*F.p2477_o) = F.p2477;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2518_Fits(void * a_p2519, void * a_p2520) {
struct yf2521 F;
memset((void *)&F, 0, sizeof F);
F.p2519 = a_p2519;
F.p2520 = a_p2520;
if ((((*(yR104 *)rt_nil_check(F.p2519))).f_kind == v827)) {
if ((!yr1792_IsArrayLike(F.p2520))) {
{ rt_int rv6083 = 0;
return rv6083; }
}
if ((!(((*(yR104 *)rt_nil_check(F.p2520))).f_nidx == ((*(yR104 *)rt_nil_check(F.p2519))).f_nidx))) {
{ rt_int rv6085 = 0;
return rv6085; }
}
{ rt_int rv6086 = yr1847_SameType(((*(yR104 *)rt_nil_check(F.p2519))).f_elem, ((*(yR104 *)rt_nil_check(F.p2520))).f_elem);
return rv6086; }
}
if ((((*(yR104 *)rt_nil_check(F.p2519))).f_kind == v839)) {
{ rt_int rv6088 = 1;
return rv6088; }
}
{ rt_int rv6089 = yr1847_SameType(F.p2519, F.p2520);
return rv6089; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2525_Choose(void * a_p2526, rt_int a_p2527, rt_int a_p2528) {
struct yf2529 F;
memset((void *)&F, 0, sizeof F);
F.p2526 = a_p2526;
F.p2527 = a_p2527;
F.p2528 = a_p2528;
F.v6095 = F.p2526;
while ((!(F.v6095 == ((void *)0)))) {
if ((((*(yR119 *)rt_nil_check(F.v6095))).f_nparams == F.p2528)) {
F.v6099 = 1;
F.v6097 = ((*(yR119 *)rt_nil_check(F.v6095))).f_params;
F.v6101 = INT64_C(1);
while ((!(F.v6097 == ((void *)0)))) {
if ((!yr2518_Fits(((*(yR114 *)rt_nil_check(F.v6097))).f_rep, ((void * *)(v2502).p)[y_ix1(v2502, rt_add(F.p2527, F.v6101))]))) {
F.v6099 = 0;
}
F.v6101 = rt_range(rt_add(F.v6101, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6097 = ((*(yR114 *)rt_nil_check(F.v6097))).f_next;
}
if (F.v6099) {
{ void * rv6108 = F.v6095;
return rv6108; }
}
}
F.v6095 = ((*(yR119 *)rt_nil_check(F.v6095))).f_alt;
}
{ void * rv6109 = ((void *)0);
return rv6109; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2533_HidesStandard(void * a_p2534) {
struct yf2535 F;
memset((void *)&F, 0, sizeof F);
F.p2534 = a_p2534;
F.v6113 = F.p2534;
while ((!(F.v6113 == ((void *)0)))) {
if ((((!(((*(yR119 *)rt_nil_check(F.v6113))).f_decl == ((void *)0)))) && ((((*(yR99 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v6113))).f_decl))).f_ival == INT64_C(0))))) {
{ rt_int rv6116 = 1;
return rv6116; }
}
F.v6113 = ((*(yR119 *)rt_nil_check(F.v6113))).f_alt;
}
{ rt_int rv6118 = 0;
return rv6118; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2539_CompileArgs(void * a_p2540, void * a_p2541, rt_int * a_p2542, rt_int * a_p2543) {
struct yf2544 F;
memset((void *)&F, 0, sizeof F);
F.p2540 = a_p2540;
F.p2541 = a_p2541;
F.p2542_o = a_p2542;
F.p2543_o = a_p2543;
F.v6125 = F.p2540;
F.v6127 = ((void *)0);
F.p2542 = v2515;
F.p2543 = INT64_C(0);
if ((!(F.p2541 == ((void *)0)))) {
F.v6127 = ((*(yR119 *)rt_nil_check(F.p2541))).f_params;
}
while ((!(F.v6125 == ((void *)0)))) {
if ((v2515 >= INT64_C(4000))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.v6125))).f_line, y_str("calls nested too deeply", 23));
}
F.p2543 = rt_range(rt_add(F.p2543, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v2515 = rt_range(rt_add(F.p2542, F.p2543), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6129 = ((void *)0);
if ((!(F.v6127 == ((void *)0)))) {
F.v6129 = ((*(yR114 *)rt_nil_check(F.v6127))).f_rep;
F.v6127 = ((*(yR114 *)rt_nil_check(F.v6127))).f_next;
}
yr2383_Expr(F.v6125, F.v6129, &((rt_int *)(v2491).p)[y_ix1(v2491, rt_add(F.p2542, F.p2543))], &((void * *)(v2502).p)[y_ix1(v2502, rt_add(F.p2542, F.p2543))]);
((void * *)(v2513).p)[y_ix1(v2513, rt_add(F.p2542, F.p2543))] = F.v6125;
F.v6125 = ((*(yR99 *)rt_nil_check(F.v6125))).f_next;
}
(*F.p2542_o) = F.p2542;
(*F.p2543_o) = F.p2543;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2548_CheckUnresolved(void * a_p2549, void * a_p2550, rt_int a_p2551) {
struct yf2552 F;
memset((void *)&F, 0, sizeof F);
F.p2549 = a_p2549;
F.p2550 = a_p2550;
F.p2551 = a_p2551;
if ((((!(((*(yR104 *)rt_nil_check(F.p2549))).f_kind == v827))) || ((!(((*(yR104 *)rt_nil_check(F.p2550))).f_kind == v806))))) {
return;
}
F.v6144 = ((*(yR104 *)rt_nil_check(F.p2550))).f_idx;
while ((!(F.v6144 == ((void *)0)))) {
if ((!(((*(yR104 *)rt_nil_check(F.v6144))).f_kind == v788))) {
yr1144_FailS(F.p2551, y_str("a length-unresolved array formal takes arrays with integer indices only (X.A.3)", 79));
}
F.v6144 = ((*(yR104 *)rt_nil_check(F.v6144))).f_link;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2556_SameAsFormal(void * a_p2557, void * a_p2558) {
struct yf2559 F;
memset((void *)&F, 0, sizeof F);
F.p2557 = a_p2557;
F.p2558 = a_p2558;
if ((((*(yR104 *)rt_nil_check(F.p2557))).f_kind == v839)) {
{ rt_int rv6150 = 1;
return rv6150; }
}
if ((((*(yR104 *)rt_nil_check(F.p2557))).f_kind == v827)) {
if ((!((((((*(yR104 *)rt_nil_check(F.p2558))).f_kind == v806)) || ((((*(yR104 *)rt_nil_check(F.p2558))).f_kind == v827)))))) {
{ rt_int rv6152 = 0;
return rv6152; }
}
{ rt_int rv6153 = yr1889_Identical(((*(yR104 *)rt_nil_check(F.p2557))).f_elem, ((*(yR104 *)rt_nil_check(F.p2558))).f_elem);
return rv6153; }
}
{ rt_int rv6154 = yr1889_Identical(F.p2557, F.p2558);
return rv6154; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2563_CallCode(void * a_p2564, rt_int a_p2565, rt_int a_p2566, rt_int a_p2567) {
struct yf2568 F;
memset((void *)&F, 0, sizeof F);
F.p2564 = a_p2564;
F.p2565 = a_p2565;
F.p2566 = a_p2566;
F.p2567 = a_p2567;
F.v6161 = ((*(yR119 *)rt_nil_check(F.p2564))).f_params;
F.v6163 = rt_range(rt_add(F.p2565, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6167 = 1;
F.v6170 = INT64_C(0);
F.v6173 = INT64_C(0);
F.v6176 = INT64_C(0);
F.v6179 = INT64_C(0);
F.v6182 = INT64_C(0);
if ((!(F.p2566 == ((*(yR119 *)rt_nil_check(F.p2564))).f_nparams))) {
yr1152_FailN(F.p2567, ((*(yR119 *)rt_nil_check(F.p2564))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
yr1006_SB();
yr1024_ST(((*(yR119 *)rt_nil_check(F.p2564))).f_cname);
yr1017_SA(y_str("(", 1));
if ((((*(yR119 *)rt_nil_check(F.p2564))).f_level > INT64_C(1))) {
yr1024_ST(yr1718_FramePtr(rt_range(rt_sub(((*(yR119 *)rt_nil_check(F.p2564))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v6167 = 0;
}
while ((!(F.v6161 == ((void *)0)))) {
if ((!F.v6167)) {
yr1017_SA(y_str(", ", 2));
}
F.v6167 = 0;
if ((!yr2518_Fits(((*(yR114 *)rt_nil_check(F.v6161))).f_rep, ((void * *)(v2502).p)[y_ix1(v2502, F.v6163)]))) {
v911 = 0;
yr1854_TypeClash(((*(yR99 *)rt_nil_check(((void * *)(v2513).p)[y_ix1(v2513, F.v6163)]))).f_line, ((*(yR114 *)rt_nil_check(F.v6161))).f_rep, ((void * *)(v2502).p)[y_ix1(v2502, F.v6163)]);
}
yr2548_CheckUnresolved(((*(yR114 *)rt_nil_check(F.v6161))).f_rep, ((void * *)(v2502).p)[y_ix1(v2502, F.v6163)], ((*(yR99 *)rt_nil_check(((void * *)(v2513).p)[y_ix1(v2513, F.v6163)]))).f_line);
if ((((*(yR114 *)rt_nil_check(F.v6161))).f_cls == v881)) {
yr1024_ST(yr2316_Convert(((rt_int *)(v2491).p)[y_ix1(v2491, F.v6163)], ((*(yR114 *)rt_nil_check(F.v6161))).f_rep, ((void * *)(v2502).p)[y_ix1(v2502, F.v6163)]));
} else {
if ((!yr2344_IsVariable(((void * *)(v2513).p)[y_ix1(v2513, F.v6163)]))) {
v911 = 0;
yr1152_FailN(((*(yR99 *)rt_nil_check(((void * *)(v2513).p)[y_ix1(v2513, F.v6163)]))).f_line, ((*(yR114 *)rt_nil_check(F.v6161))).f_name, y_str(": the actual of a VAR or OUT parameter must be a variable", 57));
}
yr2350_CheckPure(((void * *)(v2513).p)[y_ix1(v2513, F.v6163)]);
if (yr2556_SameAsFormal(((*(yR114 *)rt_nil_check(F.v6161))).f_rep, ((void * *)(v2502).p)[y_ix1(v2502, F.v6163)])) {
yr1017_SA(y_str("&", 1));
yr1024_ST(((rt_int *)(v2491).p)[y_ix1(v2491, F.v6163)]);
} else if ((((*(yR114 *)rt_nil_check(F.v6161))).f_cls == v887)) {
yr1152_FailN(((*(yR99 *)rt_nil_check(((void * *)(v2513).p)[y_ix1(v2513, F.v6163)]))).f_line, ((*(yR114 *)rt_nil_check(F.v6161))).f_name, y_str(": a VAR actual has the representation of its formal (VII.G, X.A.2)", 66));
} else {
F.v6176 = yr1166_Fresh(y_str("yo", 2));
F.v6170 = yr2860_Join(F.v6170, yr2860_Join(yr1829_CType(((*(yR114 *)rt_nil_check(F.v6161))).f_rep), yr1041_T(y_str(" ", 1)), F.v6176), yr1041_T(y_str(";", 1)));
if ((((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v6161))).f_rep))).f_kind == v827)) {
F.v6170 = yr2860_Join(F.v6170, yr2860_Join(yr1041_T(y_str(" ", 1)), F.v6176, yr1041_T(y_str(" = y_like(", 10))), yr2860_Join(((rt_int *)(v2491).p)[y_ix1(v2491, F.v6163)], yr2860_Join(yr1041_T(y_str(", ", 2)), yr2572_Num(((*(yR104 *)rt_nil_check(((void * *)(v2502).p)[y_ix1(v2502, F.v6163)]))).f_nidx), yr1041_T(y_str(", ", 2))), yr2860_Join(yr1835_DescOf(((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v6161))).f_rep))).f_elem), yr1041_T(y_str(");", 2)), INT64_C(0))));
} else if (yr1804_Deep(((*(yR114 *)rt_nil_check(F.v6161))).f_rep)) {
F.v6170 = yr2860_Join(F.v6170, yr2860_Join(yr1041_T(y_str(" y_init(", 8)), yr1835_DescOf(((*(yR114 *)rt_nil_check(F.v6161))).f_rep), yr1041_T(y_str(", &", 3))), yr2860_Join(F.v6176, yr1041_T(y_str(");", 2)), INT64_C(0)));
}
F.v6173 = yr2860_Join(F.v6173, yr1041_T(y_str(" ", 1)), yr2324_StoreText(((rt_int *)(v2491).p)[y_ix1(v2491, F.v6163)], ((void * *)(v2502).p)[y_ix1(v2502, F.v6163)], F.v6176, ((*(yR114 *)rt_nil_check(F.v6161))).f_rep, ((*(yR99 *)rt_nil_check(((void * *)(v2513).p)[y_ix1(v2513, F.v6163)]))).f_line));
yr1017_SA(y_str("&", 1));
yr1024_ST(F.v6176);
}
}
F.v6163 = rt_range(rt_add(F.v6163, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6161 = ((*(yR114 *)rt_nil_check(F.v6161))).f_next;
}
yr1017_SA(y_str(")", 1));
v2515 = F.p2565;
F.v6179 = yr1036_SE();
if ((F.v6170 == INT64_C(0))) {
{ rt_int rv6216 = F.v6179;
return rv6216; }
}
yr1006_SB();
yr1017_SA(y_str("({ ", 3));
yr1024_ST(F.v6170);
if ((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.p2564))).f_ret))).f_kind == v836)) {
yr1017_SA(y_str(" ", 1));
yr1024_ST(F.v6179);
yr1017_SA(y_str(";", 1));
yr1024_ST(F.v6173);
yr1017_SA(y_str(" })", 3));
} else {
F.v6182 = yr1166_Fresh(y_str("yv", 2));
yr1017_SA(y_str(" ", 1));
yr1024_ST(yr1829_CType(((*(yR119 *)rt_nil_check(F.p2564))).f_ret));
yr1017_SA(y_str(" ", 1));
yr1024_ST(F.v6182);
yr1017_SA(y_str(" = ", 3));
yr1024_ST(F.v6179);
yr1017_SA(y_str(";", 1));
yr1024_ST(F.v6173);
yr1017_SA(y_str(" ", 1));
yr1024_ST(F.v6182);
yr1017_SA(y_str("; })", 4));
}
{ rt_int rv6228 = yr1036_SE();
return rv6228; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2572_Num(rt_int a_p2573) {
struct yf2574 F;
memset((void *)&F, 0, sizeof F);
F.p2573 = a_p2573;
yr1006_SB();
yr1030_SI(F.p2573);
{ rt_int rv6231 = yr1036_SE();
return rv6231; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2578_UserOp(void * a_p2579, rt_int a_p2580, void * a_p2581, void * a_p2582, rt_int * a_p2583, void * * a_p2584) {
struct yf2585 F;
memset((void *)&F, 0, sizeof F);
F.p2579 = a_p2579;
F.p2580 = a_p2580;
F.p2581 = a_p2581;
F.p2582 = a_p2582;
F.p2583_o = a_p2583;
F.p2584_o = a_p2584;
F.v6240 = yr1672_Find(F.p2580);
if ((F.v6240 == ((void *)0))) {
{ rt_int rv6248 = 0;
(*F.p2583_o) = F.p2583;
(*F.p2584_o) = F.p2584;
return rv6248; }
}
F.v6240 = yr1737_Real(F.v6240);
if ((!(((*(yR119 *)rt_nil_check(F.v6240))).f_kind == v860))) {
{ rt_int rv6250 = 0;
(*F.p2583_o) = F.p2583;
(*F.p2584_o) = F.p2584;
return rv6250; }
}
((*(yR99 *)rt_nil_check(F.p2581))).f_next = F.p2582;
if ((!(F.p2582 == ((void *)0)))) {
((*(yR99 *)rt_nil_check(F.p2582))).f_next = ((void *)0);
}
yr2539_CompileArgs(F.p2581, ((void *)0), &F.v6244, &F.v6246);
F.v6242 = yr2525_Choose(F.v6240, F.v6244, F.v6246);
if ((F.v6242 == ((void *)0))) {
v2515 = F.v6244;
if (yr2533_HidesStandard(F.v6240)) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2579))).f_line, F.p2580, y_str(": no definition takes operands of these types", 45));
}
{ rt_int rv6253 = 0;
(*F.p2583_o) = F.p2583;
(*F.p2584_o) = F.p2584;
return rv6253; }
}
yr2589_NoteCall(F.v6242, ((*(yR99 *)rt_nil_check(F.p2579))).f_line);
F.p2583 = yr2563_CallCode(F.v6242, F.v6244, F.v6246, ((*(yR99 *)rt_nil_check(F.p2579))).f_line);
F.p2584 = ((*(yR119 *)rt_nil_check(F.v6242))).f_ret;
{ rt_int rv6255 = 1;
(*F.p2583_o) = F.p2583;
(*F.p2584_o) = F.p2584;
return rv6255; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2589_NoteCall(void * a_p2590, rt_int a_p2591) {
struct yf2592 F;
memset((void *)&F, 0, sizeof F);
F.p2590 = a_p2590;
F.p2591 = a_p2591;
if ((v2729 == ((void *)0))) {
return;
}
F.v6260 = yr1290_NewNode(v653, F.p2591);
((*(yR99 *)rt_nil_check(F.v6260))).f_sym = F.p2590;
((*(yR99 *)rt_nil_check(F.v6260))).f_next = ((*(yR119 *)rt_nil_check(v2729))).f_calls;
((*(yR119 *)rt_nil_check(v2729))).f_calls = F.v6260;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2596_UserAssign(rt_int a_p2597, void * a_p2598, rt_int a_p2599, void * a_p2600, rt_int a_p2601) {
struct yf2602 F;
memset((void *)&F, 0, sizeof F);
F.p2597 = a_p2597;
F.p2598 = a_p2598;
F.p2599 = a_p2599;
F.p2600 = a_p2600;
F.p2601 = a_p2601;
F.v6268 = yr1672_Find(rt_range(v515, INT64_C(0), INT64_C(4000000)));
if ((F.v6268 == ((void *)0))) {
{ rt_int rv6278 = INT64_C(0);
return rv6278; }
}
F.v6268 = yr1737_Real(F.v6268);
if ((!(((*(yR119 *)rt_nil_check(F.v6268))).f_kind == v860))) {
{ rt_int rv6280 = INT64_C(0);
return rv6280; }
}
F.v6270 = F.v6268;
while ((!(F.v6270 == ((void *)0)))) {
if ((((*(yR119 *)rt_nil_check(F.v6270))).f_nparams == INT64_C(2))) {
F.v6272 = ((*(yR119 *)rt_nil_check(F.v6270))).f_params;
F.v6274 = ((*(yR114 *)rt_nil_check(F.v6272))).f_next;
if ((((((!(((*(yR114 *)rt_nil_check(F.v6272))).f_cls == v881))) && ((((*(yR114 *)rt_nil_check(F.v6274))).f_cls == v881))) && yr1847_SameType(((*(yR114 *)rt_nil_check(F.v6272))).f_rep, F.p2598)) && yr1847_SameType(((*(yR114 *)rt_nil_check(F.v6274))).f_rep, F.p2600))) {
if ((v2729 == F.v6270)) {
{ rt_int rv6283 = INT64_C(0);
return rv6283; }
}
yr2589_NoteCall(F.v6270, F.p2601);
yr1006_SB();
if (yr1889_Identical(((*(yR114 *)rt_nil_check(F.v6272))).f_rep, F.p2598)) {
yr1024_ST(((*(yR119 *)rt_nil_check(F.v6270))).f_cname);
yr1017_SA(y_str("(", 1));
if ((((*(yR119 *)rt_nil_check(F.v6270))).f_level > INT64_C(1))) {
yr1024_ST(yr1718_FramePtr(rt_range(rt_sub(((*(yR119 *)rt_nil_check(F.v6270))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr1017_SA(y_str(", ", 2));
}
yr1017_SA(y_str("&", 1));
yr1024_ST(F.p2597);
} else {
F.v6276 = yr1166_Fresh(y_str("yo", 2));
yr1017_SA(y_str("{ ", 2));
yr1024_ST(yr1829_CType(((*(yR114 *)rt_nil_check(F.v6272))).f_rep));
yr1017_SA(y_str(" ", 1));
yr1024_ST(F.v6276);
yr1017_SA(y_str(";", 1));
if (yr1804_Deep(((*(yR114 *)rt_nil_check(F.v6272))).f_rep)) {
yr1017_SA(y_str(" y_init(", 8));
yr1024_ST(yr1835_DescOf(((*(yR114 *)rt_nil_check(F.v6272))).f_rep));
yr1017_SA(y_str(", &", 3));
yr1024_ST(F.v6276);
yr1017_SA(y_str(");", 2));
}
yr1017_SA(y_str(" ", 1));
yr1024_ST(((*(yR119 *)rt_nil_check(F.v6270))).f_cname);
yr1017_SA(y_str("(", 1));
if ((((*(yR119 *)rt_nil_check(F.v6270))).f_level > INT64_C(1))) {
yr1024_ST(yr1718_FramePtr(rt_range(rt_sub(((*(yR119 *)rt_nil_check(F.v6270))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr1017_SA(y_str(", ", 2));
}
yr1017_SA(y_str("&", 1));
yr1024_ST(F.v6276);
}
yr1017_SA(y_str(", ", 2));
yr1024_ST(yr2316_Convert(F.p2599, ((*(yR114 *)rt_nil_check(F.v6274))).f_rep, F.p2600));
yr1017_SA(y_str(");", 2));
if ((!yr1889_Identical(((*(yR114 *)rt_nil_check(F.v6272))).f_rep, F.p2598))) {
yr1017_SA(y_str(" ", 1));
yr1024_ST(yr2324_StoreText(F.p2597, F.p2598, F.v6276, ((*(yR114 *)rt_nil_check(F.v6272))).f_rep, F.p2601));
yr1017_SA(y_str(" }", 2));
}
{ rt_int rv6308 = yr1036_SE();
return rv6308; }
}
}
F.v6270 = ((*(yR119 *)rt_nil_check(F.v6270))).f_alt;
}
{ rt_int rv6310 = INT64_C(0);
return rv6310; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2606_Assign(rt_int a_p2607, void * a_p2608, rt_int a_p2609, void * a_p2610, rt_int a_p2611) {
struct yf2612 F;
memset((void *)&F, 0, sizeof F);
F.p2607 = a_p2607;
F.p2608 = a_p2608;
F.p2609 = a_p2609;
F.p2610 = a_p2610;
F.p2611 = a_p2611;
F.v6318 = yr2596_UserAssign(F.p2607, F.p2608, F.p2609, F.p2610, F.p2611);
if ((!(F.v6318 == INT64_C(0)))) {
yr1112_Emit(F.v6318);
} else {
yr2334_Store(F.p2607, F.p2608, F.p2609, F.p2610, F.p2611);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2616_CallExpr(void * a_p2617, void * a_p2618, rt_int a_p2619, rt_int * a_p2620, void * * a_p2621) {
struct yf2622 F;
memset((void *)&F, 0, sizeof F);
F.p2617 = a_p2617;
F.p2618 = a_p2618;
F.p2619 = a_p2619;
F.p2620_o = a_p2620;
F.p2621_o = a_p2621;
F.v6327 = yr1737_Real(yr1684_Lookup(((*(yR99 *)rt_nil_check(F.p2617))).f_name, ((*(yR99 *)rt_nil_check(F.p2617))).f_line));
if ((((*(yR119 *)rt_nil_check(F.v6327))).f_kind == v875)) {
yr3174_StdCall(((*(yR119 *)rt_nil_check(F.v6327))).f_mval, F.p2617, F.p2619, &F.p2620, &F.p2621);
(*F.p2620_o) = F.p2620;
(*F.p2621_o) = F.p2621;
return;
}
if ((((((*(yR119 *)rt_nil_check(F.v6327))).f_kind == v851)) || ((((*(yR119 *)rt_nil_check(F.v6327))).f_kind == v854)))) {
if (F.p2619) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2617))).f_line, y_str("a value is not a statement", 26));
}
yr2626_Denote(((*(yR119 *)rt_nil_check(F.v6327))).f_rep, F.p2617, &F.p2620, &F.p2621);
(*F.p2620_o) = F.p2620;
(*F.p2621_o) = F.p2621;
return;
}
if ((!(((*(yR119 *)rt_nil_check(F.v6327))).f_kind == v860))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2617))).f_line, ((*(yR99 *)rt_nil_check(F.p2617))).f_name, y_str(" is not a routine", 17));
}
if ((((*(yR119 *)rt_nil_check(F.v6327))).f_alt == ((void *)0))) {
yr2539_CompileArgs(((*(yR99 *)rt_nil_check(F.p2617))).f_a, F.v6327, &F.v6331, &F.v6333);
F.v6329 = F.v6327;
} else {
yr2539_CompileArgs(((*(yR99 *)rt_nil_check(F.p2617))).f_a, ((void *)0), &F.v6331, &F.v6333);
F.v6329 = yr2525_Choose(F.v6327, F.v6331, F.v6333);
if ((F.v6329 == ((void *)0))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2617))).f_line, ((*(yR99 *)rt_nil_check(F.p2617))).f_name, y_str(": no definition takes actuals of these types", 44));
}
}
yr2589_NoteCall(F.v6329, ((*(yR99 *)rt_nil_check(F.p2617))).f_line);
F.p2620 = yr2563_CallCode(F.v6329, F.v6331, F.v6333, ((*(yR99 *)rt_nil_check(F.p2617))).f_line);
F.p2621 = ((*(yR119 *)rt_nil_check(F.v6329))).f_ret;
if ((F.p2619 && ((!(((*(yR104 *)rt_nil_check(F.p2621))).f_kind == v836))))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2617))).f_line, ((*(yR99 *)rt_nil_check(F.p2617))).f_name, y_str(" returns a value: it is called in an expression (IX.A.2)", 56));
}
if (((!F.p2619) && ((((*(yR104 *)rt_nil_check(F.p2621))).f_kind == v836)))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2617))).f_line, ((*(yR99 *)rt_nil_check(F.p2617))).f_name, y_str(" returns no value", 17));
}
(*F.p2620_o) = F.p2620;
(*F.p2621_o) = F.p2621;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2626_Denote(void * a_p2627, void * a_p2628, rt_int * a_p2629, void * * a_p2630) {
struct yf2631 F;
memset((void *)&F, 0, sizeof F);
F.p2627 = a_p2627;
F.p2628 = a_p2628;
F.p2629_o = a_p2629;
F.p2630_o = a_p2630;
F.v6345 = ((*(yR99 *)rt_nil_check(F.p2628))).f_a;
F.v6365 = INT64_C(0);
F.v6372 = 1;
F.p2630 = F.p2627;
if (((*(yR104 *)rt_nil_check(F.p2627))).f_abstract) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2628))).f_line, ((*(yR104 *)rt_nil_check(F.p2627))).f_tname, y_str(" has no representation to denote a value of", 43));
}
if ((((*(yR104 *)rt_nil_check(F.p2627))).f_kind == v809)) {
if (((*(yR104 *)rt_nil_check(F.p2627))).f_opaque) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2628))).f_line, ((*(yR104 *)rt_nil_check(F.p2627))).f_tname, y_str(" is opaque here (X.B.3)", 23));
}
yr1006_SB();
yr1017_SA(y_str("((", 2));
yr1024_ST(((*(yR104 *)rt_nil_check(F.p2627))).f_cname);
yr1017_SA(y_str("){ ", 3));
F.v6351 = yr1036_SE();
F.v6347 = ((*(yR104 *)rt_nil_check(F.p2627))).f_fields;
while ((!(F.v6347 == ((void *)0)))) {
if ((((((*(yR109 *)rt_nil_check(F.v6347))).f_variant == INT64_C(0))) || ((((*(yR109 *)rt_nil_check(F.v6347))).f_variant == F.v6365)))) {
if ((F.v6345 == ((void *)0))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2628))).f_line, y_str("too few components in this record value", 39));
}
yr2383_Expr(F.v6345, ((*(yR109 *)rt_nil_check(F.v6347))).f_rep, &F.v6349, &F.v6355);
yr1862_CheckType(((*(yR99 *)rt_nil_check(F.v6345))).f_line, ((*(yR109 *)rt_nil_check(F.v6347))).f_rep, F.v6355);
if ((F.v6347 == ((*(yR104 *)rt_nil_check(F.p2627))).f_selector)) {
yr2235_Manifest(F.v6345, &F.v6363, &F.v6368);
if ((!F.v6363)) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.v6345))).f_line, y_str("the case-selection value is a manifest constant", 47));
}
F.v6365 = yr2635_VariantOf(F.p2627, F.v6368, ((*(yR99 *)rt_nil_check(F.v6345))).f_line);
}
yr1006_SB();
yr1024_ST(F.v6351);
if ((!F.v6372)) {
yr1017_SA(y_str(", ", 2));
}
F.v6372 = 0;
yr1017_SA(y_str(".f_", 3));
yr1024_ST(((*(yR109 *)rt_nil_check(F.v6347))).f_name);
yr1017_SA(y_str(" = ", 3));
yr1024_ST(yr2316_Convert(F.v6349, ((*(yR109 *)rt_nil_check(F.v6347))).f_rep, F.v6355));
F.v6351 = yr1036_SE();
F.v6345 = ((*(yR99 *)rt_nil_check(F.v6345))).f_next;
}
F.v6347 = ((*(yR109 *)rt_nil_check(F.v6347))).f_next;
}
if ((!(F.v6345 == ((void *)0)))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2628))).f_line, y_str("too many components in this record value", 40));
}
yr1006_SB();
yr1024_ST(F.v6351);
yr1017_SA(y_str(" })", 3));
F.p2629 = yr1036_SE();
(*F.p2629_o) = F.p2629;
(*F.p2630_o) = F.p2630;
return;
}
if ((((*(yR104 *)rt_nil_check(F.p2627))).f_kind == v806)) {
F.v6357 = yr1305_Count(F.v6345);
F.v6351 = yr1166_Fresh(y_str("da", 2));
if ((F.v6357 == INT64_C(1))) {
yr2383_Expr(F.v6345, ((*(yR104 *)rt_nil_check(F.p2627))).f_elem, &F.v6349, &F.v6355);
yr1862_CheckType(((*(yR99 *)rt_nil_check(F.v6345))).f_line, ((*(yR104 *)rt_nil_check(F.p2627))).f_elem, F.v6355);
F.v6353 = yr1166_Fresh(y_str("dv", 2));
yr1006_SB();
yr1017_SA(y_str("({ ", 3));
yr1024_ST(yr1829_CType(((*(yR104 *)rt_nil_check(F.p2627))).f_elem));
yr1017_SA(y_str(" ", 1));
yr1024_ST(F.v6353);
yr1017_SA(y_str(" = ", 3));
yr1024_ST(yr2316_Convert(F.v6349, ((*(yR104 *)rt_nil_check(F.p2627))).f_elem, F.v6355));
yr1017_SA(y_str("; y_fill(", 9));
yr1024_ST(yr1835_DescOf(F.p2627));
yr1017_SA(y_str(", &", 3));
yr1024_ST(F.v6353);
yr1017_SA(y_str("); })", 5));
F.p2629 = yr1036_SE();
(*F.p2629_o) = F.p2629;
(*F.p2630_o) = F.p2630;
return;
}
yr1006_SB();
yr1017_SA(y_str("({ yarr ", 8));
yr1024_ST(F.v6351);
yr1017_SA(y_str("; y_init(", 9));
yr1024_ST(yr1835_DescOf(F.p2627));
yr1017_SA(y_str(", &", 3));
yr1024_ST(F.v6351);
yr1017_SA(y_str("); if (y_count(", 15));
yr1024_ST(F.v6351);
yr1017_SA(y_str(", ", 2));
yr1030_SI(((*(yR104 *)rt_nil_check(F.p2627))).f_nidx);
yr1017_SA(y_str(") != ", 5));
yr1030_SI(F.v6357);
yr1017_SA(y_str(") rt_raise_msg(RT_X_RANGE, ", 27));
yr1011_SC(34);
yr1017_SA(y_str("wrong number of components", 26));
yr1011_SC(34);
yr1017_SA(y_str(");", 2));
F.p2629 = yr1036_SE();
F.v6361 = INT64_C(0);
while ((!(F.v6345 == ((void *)0)))) {
yr2383_Expr(F.v6345, ((*(yR104 *)rt_nil_check(F.p2627))).f_elem, &F.v6349, &F.v6355);
yr1862_CheckType(((*(yR99 *)rt_nil_check(F.v6345))).f_line, ((*(yR104 *)rt_nil_check(F.p2627))).f_elem, F.v6355);
yr1006_SB();
yr1024_ST(F.p2629);
if (yr1804_Deep(((*(yR104 *)rt_nil_check(F.p2627))).f_elem)) {
yr1017_SA(y_str(" { ", 3));
yr1024_ST(yr1829_CType(((*(yR104 *)rt_nil_check(F.p2627))).f_elem));
yr1017_SA(y_str(" dv = ", 6));
yr1024_ST(F.v6349);
yr1017_SA(y_str("; y_copy(", 9));
yr1024_ST(yr1835_DescOf(((*(yR104 *)rt_nil_check(F.p2627))).f_elem));
yr1017_SA(y_str(", &((", 5));
yr1024_ST(yr1829_CType(((*(yR104 *)rt_nil_check(F.p2627))).f_elem));
yr1017_SA(y_str(" *)", 3));
yr1024_ST(F.v6351);
yr1017_SA(y_str(".p)[", 4));
yr1030_SI(F.v6361);
yr1017_SA(y_str("], &dv); }", 10));
} else {
yr1017_SA(y_str(" ((", 3));
yr1024_ST(yr1829_CType(((*(yR104 *)rt_nil_check(F.p2627))).f_elem));
yr1017_SA(y_str(" *)", 3));
yr1024_ST(F.v6351);
yr1017_SA(y_str(".p)[", 4));
yr1030_SI(F.v6361);
yr1017_SA(y_str("] = ", 4));
yr1024_ST(yr2316_Convert(F.v6349, ((*(yR104 *)rt_nil_check(F.p2627))).f_elem, F.v6355));
yr1017_SA(y_str(";", 1));
}
F.p2629 = yr1036_SE();
F.v6361 = rt_range(rt_add(F.v6361, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6345 = ((*(yR99 *)rt_nil_check(F.v6345))).f_next;
}
yr1006_SB();
yr1024_ST(F.p2629);
yr1017_SA(y_str(" ", 1));
yr1024_ST(F.v6351);
yr1017_SA(y_str("; })", 4));
F.p2629 = yr1036_SE();
(*F.p2629_o) = F.p2629;
(*F.p2630_o) = F.p2630;
return;
}
if ((((*(yR104 *)rt_nil_check(F.p2627))).f_kind == v818)) {
yr1006_SB();
yr1017_SA(y_str("y_set_new(", 10));
yr1024_ST(yr1910_LoText(((*(yR104 *)rt_nil_check(F.p2627))).f_elem));
yr1017_SA(y_str(", ", 2));
yr1024_ST(yr1916_HiText(((*(yR104 *)rt_nil_check(F.p2627))).f_elem));
yr1017_SA(y_str(")", 1));
F.p2629 = yr1036_SE();
while ((!(F.v6345 == ((void *)0)))) {
yr2383_Expr(F.v6345, ((*(yR104 *)rt_nil_check(F.p2627))).f_elem, &F.v6349, &F.v6355);
yr1862_CheckType(((*(yR99 *)rt_nil_check(F.v6345))).f_line, ((*(yR104 *)rt_nil_check(F.p2627))).f_elem, F.v6355);
F.p2629 = yr2433_Call2(y_str("y_set_add", 9), F.p2629, F.v6349);
F.v6345 = ((*(yR99 *)rt_nil_check(F.v6345))).f_next;
}
(*F.p2629_o) = F.p2629;
(*F.p2630_o) = F.p2630;
return;
}
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2628))).f_line, ((*(yR104 *)rt_nil_check(F.p2627))).f_tname, y_str(" has no denotations of values", 29));
(*F.p2629_o) = F.p2629;
(*F.p2630_o) = F.p2630;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2635_VariantOf(void * a_p2636, rt_int a_p2637, rt_int a_p2638) {
struct yf2639 F;
memset((void *)&F, 0, sizeof F);
F.p2636 = a_p2636;
F.p2637 = a_p2637;
F.p2638 = a_p2638;
F.v6434 = ((*(yR104 *)rt_nil_check(F.p2636))).f_fields;
while ((!(F.v6434 == ((void *)0)))) {
if ((!(((*(yR109 *)rt_nil_check(F.v6434))).f_variant == INT64_C(0)))) {
F.v6436 = ((*(yR109 *)rt_nil_check(F.v6434))).f_labels;
while ((!(F.v6436 == ((void *)0)))) {
yr2235_Manifest(F.v6436, &F.v6438, &F.v6440);
if ((F.v6438 && ((F.v6440 == F.p2637)))) {
{ rt_int rv6442 = ((*(yR109 *)rt_nil_check(F.v6434))).f_variant;
return rv6442; }
}
F.v6436 = ((*(yR99 *)rt_nil_check(F.v6436))).f_next;
}
}
F.v6434 = ((*(yR109 *)rt_nil_check(F.v6434))).f_next;
}
{ rt_int rv6444 = INT64_C(-1);
return rv6444; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2761_Emit2(yarr a_p2763, rt_int a_p2764) {
struct yf2765 F;
memset((void *)&F, 0, sizeof F);
F.p2763 = a_p2763;
F.p2764 = a_p2764;
yr1006_SB();
yr1017_SA(F.p2763);
yr1024_ST(F.p2764);
F.v6449 = yr1036_SE();
yr1112_Emit(F.v6449);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2769_Emit3(yarr a_p2771, rt_int a_p2772, yarr a_p2774) {
struct yf2775 F;
memset((void *)&F, 0, sizeof F);
F.p2771 = a_p2771;
F.p2772 = a_p2772;
F.p2774 = a_p2774;
yr1006_SB();
yr1017_SA(F.p2771);
yr1024_ST(F.p2772);
yr1017_SA(F.p2774);
F.v6455 = yr1036_SE();
yr1112_Emit(F.v6455);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2779_PopTo(rt_int a_p2780) {
struct yf2781 F;
memset((void *)&F, 0, sizeof F);
F.p2780 = a_p2780;
if ((v2654 > F.p2780)) {
yr2769_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v2652).p)[y_ix1(v2652, rt_add(F.p2780, INT64_C(1)))], y_str(".prev;", 6));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2785_LeaveBlock(void) {
struct yf2786 F;
memset((void *)&F, 0, sizeof F);
if ((v2682 > INT64_C(0))) {
if ((!(((rt_int *)(v2669).p)[y_ix1(v2669, v2682)] == INT64_C(0)))) {
yr2769_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v2669).p)[y_ix1(v2669, v2682)], y_str(".prev;", 6));
}
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2790_RaiseCode(rt_int a_p2791) {
struct yf2792 F;
memset((void *)&F, 0, sizeof F);
F.p2791 = a_p2791;
yr1006_SB();
yr1017_SA(y_str("rt_raise(rt_exc(", 16));
yr1011_SC(34);
yr1024_ST(F.p2791);
yr1011_SC(34);
yr1017_SA(y_str("));", 3));
{ rt_int rv6473 = yr1036_SE();
return rv6473; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2796_BlockStatements(void * a_p2797) {
struct yf2798 F;
memset((void *)&F, 0, sizeof F);
F.p2797 = a_p2797;
F.v6489 = ((*(yR99 *)rt_nil_check(F.p2797))).f_a;
F.v6491 = INT64_C(0);
while ((!(F.v6489 == ((void *)0)))) {
if ((((((*(yR99 *)rt_nil_check(F.v6489))).f_kind == v629)) && ((F.v6491 == INT64_C(0))))) {
F.v6491 = yr1166_Fresh(y_str("xs", 2));
yr2769_Emit3(y_str("rt_frame *", 10), F.v6491, y_str(" = rt_xtop;", 11));
}
F.v6489 = ((*(yR99 *)rt_nil_check(F.v6489))).f_next;
}
if ((((*(yR99 *)rt_nil_check(F.p2797))).f_b == ((void *)0))) {
v2682 = rt_range(rt_add(v2682, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2669).p)[y_ix1(v2669, v2682)] = INT64_C(0);
((rt_int *)(v2680).p)[y_ix1(v2680, v2682)] = F.v6491;
yr2824_Statements(((*(yR99 *)rt_nil_check(F.p2797))).f_c);
v2682 = rt_range(rt_sub(v2682, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr2892_CheckLabels(((*(yR99 *)rt_nil_check(F.p2797))).f_a);
return;
}
v2758 = 1;
F.v6477 = yr1166_Fresh(y_str("xf", 2));
yr2769_Emit3(y_str("{ rt_frame ", 11), F.v6477, y_str(";", 1));
yr2769_Emit3(y_str("if (RT_TRY(", 11), F.v6477, y_str(")) {", 4));
v2654 = rt_range(rt_add(v2654, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2652).p)[y_ix1(v2652, v2654)] = F.v6477;
v2682 = rt_range(rt_add(v2682, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2669).p)[y_ix1(v2669, v2682)] = F.v6477;
((rt_int *)(v2680).p)[y_ix1(v2680, v2682)] = F.v6491;
yr2824_Statements(((*(yR99 *)rt_nil_check(F.p2797))).f_c);
v2682 = rt_range(rt_sub(v2682, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v2654 = rt_range(rt_sub(v2654, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr2892_CheckLabels(((*(yR99 *)rt_nil_check(F.p2797))).f_a);
yr2769_Emit3(y_str("RT_POP(", 7), F.v6477, y_str(");", 2));
yr1118_EmitS(y_str("} else {", 8));
yr2769_Emit3(y_str("RT_POP(", 7), F.v6477, y_str(");", 2));
F.v6479 = yr1166_Fresh(y_str("xc", 2));
yr2769_Emit3(y_str("int ", 4), F.v6479, y_str(" = rt_xcur;", 11));
v2682 = rt_range(rt_add(v2682, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2669).p)[y_ix1(v2669, v2682)] = INT64_C(0);
((rt_int *)(v2680).p)[y_ix1(v2680, v2682)] = INT64_C(0);
v2696 = rt_range(rt_add(v2696, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2694).p)[y_ix1(v2694, v2696)] = F.v6479;
F.v6487 = 1;
F.v6483 = ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2797))).f_b))).f_a;
while ((!(F.v6483 == ((void *)0)))) {
yr1006_SB();
if (F.v6487) {
yr1017_SA(y_str("if (", 4));
} else {
yr1017_SA(y_str("} else if (", 11));
}
F.v6487 = 0;
F.v6485 = ((*(yR99 *)rt_nil_check(F.v6483))).f_a;
while ((!(F.v6485 == ((void *)0)))) {
yr1024_ST(F.v6479);
yr1017_SA(y_str(" == rt_exc(", 11));
yr1011_SC(34);
yr1024_ST(((*(yR99 *)rt_nil_check(F.v6485))).f_name);
yr1011_SC(34);
yr1017_SA(y_str(")", 1));
if ((!(((*(yR99 *)rt_nil_check(F.v6485))).f_next == ((void *)0)))) {
yr1017_SA(y_str(" || ", 4));
}
F.v6485 = ((*(yR99 *)rt_nil_check(F.v6485))).f_next;
}
yr1017_SA(y_str(") {", 3));
F.v6481 = yr1036_SE();
yr1112_Emit(F.v6481);
yr2824_Statements(((*(yR99 *)rt_nil_check(F.v6483))).f_b);
F.v6483 = ((*(yR99 *)rt_nil_check(F.v6483))).f_next;
}
if ((!F.v6487)) {
yr1118_EmitS(y_str("} else {", 8));
}
if ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2797))).f_b))).f_flag == INT64_C(1))) {
yr2824_Statements(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2797))).f_b))).f_b);
} else {
yr2769_Emit3(y_str("rt_raise(", 9), F.v6479, y_str(");", 2));
}
if ((!F.v6487)) {
yr1118_EmitS(y_str("}", 1));
}
v2696 = rt_range(rt_sub(v2696, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v2682 = rt_range(rt_sub(v2682, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1118_EmitS(y_str("}}", 2));
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2802_SameDesig(void * a_p2803, void * a_p2804) {
struct yf2805 F;
memset((void *)&F, 0, sizeof F);
F.p2803 = a_p2803;
F.p2804 = a_p2804;
if ((((*(yR99 *)rt_nil_check(F.p2803))).f_kind == v785)) {
{ rt_int rv6565 = yr2802_SameDesig(((*(yR99 *)rt_nil_check(F.p2803))).f_a, F.p2804);
return rv6565; }
}
if ((((*(yR99 *)rt_nil_check(F.p2804))).f_kind == v785)) {
{ rt_int rv6566 = yr2802_SameDesig(F.p2803, ((*(yR99 *)rt_nil_check(F.p2804))).f_a);
return rv6566; }
}
if ((!(((*(yR99 *)rt_nil_check(F.p2803))).f_kind == ((*(yR99 *)rt_nil_check(F.p2804))).f_kind))) {
{ rt_int rv6568 = 0;
return rv6568; }
}
if ((((*(yR99 *)rt_nil_check(F.p2803))).f_kind == v761)) {
{ rt_int rv6569 = ((((((*(yR99 *)rt_nil_check(F.p2803))).f_name == ((*(yR99 *)rt_nil_check(F.p2804))).f_name)) && ((((*(yR99 *)rt_nil_check(F.p2803))).f_d == ((void *)0)))) && ((((*(yR99 *)rt_nil_check(F.p2804))).f_d == ((void *)0))));
return rv6569; }
}
if ((((*(yR99 *)rt_nil_check(F.p2803))).f_kind == v767)) {
{ rt_int rv6570 = (((((*(yR99 *)rt_nil_check(F.p2803))).f_name == ((*(yR99 *)rt_nil_check(F.p2804))).f_name)) && yr2802_SameDesig(((*(yR99 *)rt_nil_check(F.p2803))).f_a, ((*(yR99 *)rt_nil_check(F.p2804))).f_a));
return rv6570; }
}
if ((((*(yR99 *)rt_nil_check(F.p2803))).f_kind == v773)) {
{ rt_int rv6571 = yr2802_SameDesig(((*(yR99 *)rt_nil_check(F.p2803))).f_a, ((*(yR99 *)rt_nil_check(F.p2804))).f_a);
return rv6571; }
}
if ((((*(yR99 *)rt_nil_check(F.p2803))).f_kind == v770)) {
if ((!yr2802_SameDesig(((*(yR99 *)rt_nil_check(F.p2803))).f_a, ((*(yR99 *)rt_nil_check(F.p2804))).f_a))) {
{ rt_int rv6573 = 0;
return rv6573; }
}
F.v6554 = ((*(yR99 *)rt_nil_check(F.p2803))).f_b;
F.v6556 = ((*(yR99 *)rt_nil_check(F.p2804))).f_b;
while ((((!(F.v6554 == ((void *)0)))) && ((!(F.v6556 == ((void *)0)))))) {
yr2235_Manifest(F.v6554, &F.v6558, &F.v6562);
yr2235_Manifest(F.v6556, &F.v6560, &F.v6564);
if ((F.v6558 && F.v6560)) {
if ((!(F.v6562 == F.v6564))) {
{ rt_int rv6575 = 0;
return rv6575; }
}
} else if ((!yr2802_SameDesig(F.v6554, F.v6556))) {
{ rt_int rv6577 = 0;
return rv6577; }
}
F.v6554 = ((*(yR99 *)rt_nil_check(F.v6554))).f_next;
F.v6556 = ((*(yR99 *)rt_nil_check(F.v6556))).f_next;
}
{ rt_int rv6578 = (((F.v6554 == ((void *)0))) && ((F.v6556 == ((void *)0))));
return rv6578; }
}
{ rt_int rv6580 = 0;
return rv6580; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2809_CheckVariantSelected(void * a_p2810, void * a_p2811, void * a_p2812) {
struct yf2813 F;
memset((void *)&F, 0, sizeof F);
F.p2810 = a_p2810;
F.p2811 = a_p2811;
F.p2812 = a_p2812;
F.v6586 = v2744;
while ((F.v6586 > INT64_C(0))) {
F.v6588 = ((void * *)(v2740).p)[y_ix1(v2740, F.v6586)];
while ((((*(yR99 *)rt_nil_check(F.v6588))).f_kind == v785)) {
F.v6588 = ((*(yR99 *)rt_nil_check(F.v6588))).f_a;
}
if (((((((*(yR99 *)rt_nil_check(F.v6588))).f_kind == v767)) && ((((*(yR99 *)rt_nil_check(F.v6588))).f_name == ((*(yR109 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2811))).f_selector))).f_name))) && yr2802_SameDesig(((*(yR99 *)rt_nil_check(F.v6588))).f_a, ((*(yR99 *)rt_nil_check(F.p2810))).f_a))) {
F.v6590 = ((void * *)(v2742).p)[y_ix1(v2742, F.v6586)];
if ((F.v6590 == ((void *)0))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2810))).f_line, ((*(yR99 *)rt_nil_check(F.p2810))).f_name, y_str(" is a component of a variant: the ELSE of a SELECT does not say which variant the record has (VIII.B)", 101));
}
while ((!(F.v6590 == ((void *)0)))) {
F.v6594 = yr2836_Label(F.v6590, ((*(yR109 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2811))).f_selector))).f_rep);
F.v6600 = 0;
F.v6592 = ((*(yR109 *)rt_nil_check(F.p2812))).f_labels;
while ((!(F.v6592 == ((void *)0)))) {
yr2235_Manifest(F.v6592, &F.v6598, &F.v6596);
if ((F.v6598 && ((F.v6596 == F.v6594)))) {
F.v6600 = 1;
}
F.v6592 = ((*(yR99 *)rt_nil_check(F.v6592))).f_next;
}
if ((!F.v6600)) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2810))).f_line, ((*(yR99 *)rt_nil_check(F.p2810))).f_name, y_str(" is not a component of the variant this CASE selects (VIII.B)", 61));
}
F.v6590 = ((*(yR99 *)rt_nil_check(F.v6590))).f_next;
}
return;
}
F.v6586 = rt_range(rt_sub(F.v6586, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2810))).f_line, ((*(yR99 *)rt_nil_check(F.p2810))).f_name, y_str(" is a component of a variant: it is used inside a SELECT on the case-selection component (VIII.B)", 97));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2817_CheckCaseLabels(void * a_p2818, void * a_p2819) {
struct yf2820 F;
memset((void *)&F, 0, sizeof F);
F.p2818 = a_p2818;
F.p2819 = a_p2819;
F.v6613 = ((*(yR99 *)rt_nil_check(F.p2818))).f_b;
F.v6615 = ((*(yR99 *)rt_nil_check(F.p2818))).f_b;
F.v6617 = INT64_C(0);
F.v6620 = INT64_C(0);
while ((!(F.v6613 == ((void *)0)))) {
F.v6615 = ((*(yR99 *)rt_nil_check(F.v6613))).f_a;
while ((!(F.v6615 == ((void *)0)))) {
F.v6620 = yr2836_Label(F.v6615, F.p2819);
F.lo6625 = INT64_C(1);
F.hi6626 = F.v6617;
{ rt_int hi6630 = F.hi6626;
for (rt_int i6629 = F.lo6625; i6629 <= hi6630; i6629++) { F.c_6628 = i6629;
if ((((rt_int *)(v2756).p)[y_ix1(v2756, F.c_6628)] == F.v6620)) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.v6615))).f_line, y_str("a CASE label appears twice in this SELECT (IX.B.1)", 50));
}
if (i6629 == hi6630) break;
}}
if ((F.v6617 < INT64_C(4096))) {
F.v6617 = rt_range(rt_add(F.v6617, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2756).p)[y_ix1(v2756, F.v6617)] = F.v6620;
}
F.v6615 = ((*(yR99 *)rt_nil_check(F.v6615))).f_next;
}
F.v6613 = ((*(yR99 *)rt_nil_check(F.v6613))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2824_Statements(void * a_p2825) {
struct yf2826 F;
memset((void *)&F, 0, sizeof F);
F.p2825 = a_p2825;
F.v6638 = F.p2825;
while ((!(F.v6638 == ((void *)0)))) {
yr2848_Statement(F.v6638);
F.v6638 = ((*(yR99 *)rt_nil_check(F.v6638))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2830_Cond(void * a_p2831) {
struct yf2832 F;
memset((void *)&F, 0, sizeof F);
F.p2831 = a_p2831;
yr2383_Expr(F.p2831, v1745, &F.v6642, &F.v6644);
yr1862_CheckType(((*(yR99 *)rt_nil_check(F.p2831))).f_line, v1745, F.v6644);
{ rt_int rv6645 = F.v6642;
return rv6645; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2836_Label(void * a_p2837, void * a_p2838) {
struct yf2839 F;
memset((void *)&F, 0, sizeof F);
F.p2837 = a_p2837;
F.p2838 = a_p2838;
if (((((((*(yR99 *)rt_nil_check(F.p2837))).f_kind == v761)) && ((((*(yR99 *)rt_nil_check(F.p2837))).f_d == ((void *)0)))) && ((((*(yR104 *)rt_nil_check(F.p2838))).f_kind == v800)))) {
F.v6654 = yr1697_FindLit(((*(yR99 *)rt_nil_check(F.p2837))).f_name, F.p2838);
if ((!(F.v6654 == ((void *)0)))) {
{ rt_int rv6659 = ((*(yR119 *)rt_nil_check(yr1737_Real(F.v6654)))).f_mval;
return rv6659; }
}
}
yr2383_Expr(F.p2837, F.p2838, &F.v6658, &F.v6656);
yr1862_CheckType(((*(yR99 *)rt_nil_check(F.p2837))).f_line, F.p2838, F.v6656);
yr2235_Manifest(F.p2837, &F.v6650, &F.v6652);
if ((!F.v6650)) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2837))).f_line, y_str("a CASE label is a manifest constant (IX.B.1)", 44));
}
{ rt_int rv6661 = F.v6652;
return rv6661; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2843_CopyOut(void) {
struct yf2844 F;
memset((void *)&F, 0, sizeof F);
if ((v2729 == ((void *)0))) {
return;
}
F.v6664 = ((*(yR119 *)rt_nil_check(v2729))).f_params;
while ((!(F.v6664 == ((void *)0)))) {
if ((((*(yR114 *)rt_nil_check(F.v6664))).f_cls == v884)) {
yr1006_SB();
yr1017_SA(y_str("(*F.", 4));
yr1024_ST(((*(yR114 *)rt_nil_check(F.v6664))).f_cname);
yr1017_SA(y_str("_o)", 3));
F.v6666 = yr1036_SE();
yr2606_Assign(F.v6666, ((*(yR114 *)rt_nil_check(F.v6664))).f_rep, yr1711_Path(v1623, ((*(yR114 *)rt_nil_check(F.v6664))).f_cname), ((*(yR114 *)rt_nil_check(F.v6664))).f_rep, INT64_C(0));
}
F.v6664 = ((*(yR114 *)rt_nil_check(F.v6664))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2848_Statement(void * a_p2849) {
struct yf2850 F;
memset((void *)&F, 0, sizeof F);
F.p2849 = a_p2849;
F.v6673 = ((*(yR99 *)rt_nil_check(F.p2849))).f_kind;
v980 = ((*(yR99 *)rt_nil_check(F.p2849))).f_line;
if ((!(((*(yR99 *)rt_nil_check(F.p2849))).f_text == INT64_C(0)))) {
yr2880_PlaceLabel(F.p2849);
}
if ((F.v6673 == v698)) {
yr2356_LValue(((*(yR99 *)rt_nil_check(F.p2849))).f_a, &F.v6675, &F.v6687);
yr2350_CheckPure(((*(yR99 *)rt_nil_check(F.p2849))).f_a);
if ((((((*(yR104 *)rt_nil_check(F.v6687))).f_kind == v821)) || yr1817_HoldsSignal(F.v6687))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2849))).f_line, y_str("assignment is not defined for signals (VI.A.1.d)", 48));
}
if (yr1823_NonAssignable(F.v6687)) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2849))).f_line, y_str("assignment is not defined for files and semaphores, nor what holds them (VII.B)", 79));
}
yr2383_Expr(((*(yR99 *)rt_nil_check(F.p2849))).f_b, F.v6687, &F.v6677, &F.v6689);
F.v6679 = yr2596_UserAssign(F.v6675, F.v6687, F.v6677, F.v6689, ((*(yR99 *)rt_nil_check(F.p2849))).f_line);
if ((!(F.v6679 == INT64_C(0)))) {
yr1112_Emit(F.v6679);
} else {
if ((((*(yR104 *)rt_nil_check(F.v6687))).f_opaque && (((rt_mod(((*(yR104 *)rt_nil_check(F.v6687))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2849))).f_line, ((*(yR104 *)rt_nil_check(F.v6687))).f_tname, y_str(" is opaque here: := is not exported (X.B.3)", 43));
}
yr2334_Store(F.v6675, F.v6687, F.v6677, F.v6689, ((*(yR99 *)rt_nil_check(F.p2849))).f_line);
}
} else if ((F.v6673 == v701)) {
F.v6703 = yr1672_Find(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2849))).f_a))).f_name);
if ((!(F.v6703 == ((void *)0)))) {
F.v6703 = yr1737_Real(F.v6703);
}
if ((((!(F.v6703 == ((void *)0)))) && ((((*(yR119 *)rt_nil_check(F.v6703))).f_kind == v869)))) {
yr3059_Activate(((*(yR99 *)rt_nil_check(F.p2849))).f_a, F.v6703);
} else {
yr2616_CallExpr(((*(yR99 *)rt_nil_check(F.p2849))).f_a, ((void *)0), 1, &F.v6675, &F.v6687);
yr2761_Emit2(y_str("", 0), F.v6675);
yr1006_SB();
yr1024_ST(F.v6675);
yr1017_SA(y_str(";", 1));
F.v6679 = yr1036_SE();
((*(yR129 *)rt_nil_check((v976).f_tail))).f_t = F.v6679;
}
} else if ((F.v6673 == v722)) {
F.v6695 = 1;
F.v6691 = ((*(yR99 *)rt_nil_check(F.p2849))).f_a;
while ((!(F.v6691 == ((void *)0)))) {
F.v6675 = yr2830_Cond(((*(yR99 *)rt_nil_check(F.v6691))).f_a);
if (F.v6695) {
yr2769_Emit3(y_str("if (", 4), F.v6675, y_str(") {", 3));
} else {
yr2769_Emit3(y_str("} else if (", 11), F.v6675, y_str(") {", 3));
}
F.v6695 = 0;
yr2824_Statements(((*(yR99 *)rt_nil_check(F.v6691))).f_b);
F.v6691 = ((*(yR99 *)rt_nil_check(F.v6691))).f_next;
}
if ((((*(yR99 *)rt_nil_check(F.p2849))).f_flag == INT64_C(1))) {
yr1118_EmitS(y_str("} else {", 8));
yr2824_Statements(((*(yR99 *)rt_nil_check(F.p2849))).f_b);
}
yr1118_EmitS(y_str("}", 1));
} else if ((F.v6673 == v728)) {
F.v6675 = yr2830_Cond(((*(yR99 *)rt_nil_check(F.p2849))).f_a);
yr2769_Emit3(y_str("while (", 7), F.v6675, y_str(") {", 3));
yr2824_Statements(((*(yR99 *)rt_nil_check(F.p2849))).f_b);
yr1118_EmitS(y_str("}", 1));
} else if ((F.v6673 == v734)) {
F.v6681 = yr1166_Fresh(y_str("yl_", 3));
v2723 = rt_range(rt_add(v2723, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2708).p)[y_ix1(v2708, v2723)] = ((*(yR99 *)rt_nil_check(F.p2849))).f_name;
((rt_int *)(v2710).p)[y_ix1(v2710, v2723)] = F.v6681;
((rt_int *)(v2721).p)[y_ix1(v2721, v2723)] = v2654;
yr1118_EmitS(y_str("for (;;) {", 10));
yr2824_Statements(((*(yR99 *)rt_nil_check(F.p2849))).f_b);
yr1118_EmitS(y_str("}", 1));
yr2769_Emit3(y_str("", 0), F.v6681, y_str(": ;", 3));
v2723 = rt_range(rt_sub(v2723, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v6673 == v710)) {
F.v6697 = 0;
F.v6699 = v2723;
while ((((F.v6699 > v2726)) && (!F.v6697))) {
if ((((rt_int *)(v2708).p)[y_ix1(v2708, F.v6699)] == ((*(yR99 *)rt_nil_check(F.p2849))).f_name)) {
F.v6697 = 1;
yr2779_PopTo(((rt_int *)(v2721).p)[y_ix1(v2721, F.v6699)]);
yr2769_Emit3(y_str("goto ", 5), ((rt_int *)(v2710).p)[y_ix1(v2710, F.v6699)], y_str(";", 1));
}
F.v6699 = rt_range(rt_sub(F.v6699, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((!F.v6697)) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2849))).f_line, ((*(yR99 *)rt_nil_check(F.p2849))).f_name, y_str(": EXIT names no LOOP around it here (IX.A.5)", 44));
}
} else if ((F.v6673 == v731)) {
yr2854_ForStatement(F.p2849);
} else if ((F.v6673 == v725)) {
yr2383_Expr(((*(yR99 *)rt_nil_check(F.p2849))).f_a, ((void *)0), &F.v6675, &F.v6687);
if ((!yr1780_IsDiscrete(F.v6687))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2849))).f_line, y_str("SELECT on a value that is not integer or scalar", 47));
}
yr2817_CheckCaseLabels(F.p2849, F.v6687);
yr2769_Emit3(y_str("switch (", 8), F.v6675, y_str(") {", 3));
F.v6691 = ((*(yR99 *)rt_nil_check(F.p2849))).f_b;
while ((!(F.v6691 == ((void *)0)))) {
F.v6693 = ((*(yR99 *)rt_nil_check(F.v6691))).f_a;
while ((!(F.v6693 == ((void *)0)))) {
F.v6701 = yr2836_Label(F.v6693, F.v6687);
yr1006_SB();
yr1017_SA(y_str("case ", 5));
yr1030_SI(F.v6701);
yr1017_SA(y_str(":", 1));
F.v6679 = yr1036_SE();
yr1112_Emit(F.v6679);
F.v6693 = ((*(yR99 *)rt_nil_check(F.v6693))).f_next;
}
yr1118_EmitS(y_str("{", 1));
v2744 = rt_range(rt_add(v2744, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v2740).p)[y_ix1(v2740, v2744)] = ((*(yR99 *)rt_nil_check(F.p2849))).f_a;
((void * *)(v2742).p)[y_ix1(v2742, v2744)] = ((*(yR99 *)rt_nil_check(F.v6691))).f_a;
yr2824_Statements(((*(yR99 *)rt_nil_check(F.v6691))).f_b);
v2744 = rt_range(rt_sub(v2744, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1118_EmitS(y_str("} break;", 8));
F.v6691 = ((*(yR99 *)rt_nil_check(F.v6691))).f_next;
}
yr1118_EmitS(y_str("default: {", 10));
v2744 = rt_range(rt_add(v2744, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v2740).p)[y_ix1(v2740, v2744)] = ((*(yR99 *)rt_nil_check(F.p2849))).f_a;
((void * *)(v2742).p)[y_ix1(v2742, v2744)] = ((void *)0);
if ((((*(yR99 *)rt_nil_check(F.p2849))).f_flag == INT64_C(1))) {
yr2824_Statements(((*(yR99 *)rt_nil_check(F.p2849))).f_c);
}
v2744 = rt_range(rt_sub(v2744, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1118_EmitS(y_str("} break;", 8));
yr1118_EmitS(y_str("}", 1));
} else if ((F.v6673 == v713)) {
yr2868_ReturnStatement(F.p2849);
} else if ((F.v6673 == v719)) {
if ((((*(yR99 *)rt_nil_check(F.p2849))).f_name == INT64_C(0))) {
if ((v2696 == INT64_C(0))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2849))).f_line, y_str("PROPAGATE_EXCEPTION without a name is used in a handler (IX.A.8)", 64));
}
yr2769_Emit3(y_str("rt_raise(", 9), ((rt_int *)(v2694).p)[y_ix1(v2694, v2696)], y_str(");", 2));
} else {
yr2785_LeaveBlock();
yr1112_Emit(yr2790_RaiseCode(((*(yR99 *)rt_nil_check(F.p2849))).f_name));
}
} else if ((F.v6673 == v704)) {
F.v6675 = yr2830_Cond(((*(yR99 *)rt_nil_check(F.p2849))).f_a);
yr2769_Emit3(y_str("if (!(", 6), F.v6675, y_str(")) {", 4));
yr2785_LeaveBlock();
yr1118_EmitS(y_str("rt_raise(RT_X_ASSERT); }", 24));
} else if ((F.v6673 == v737)) {
yr2874_BeginStatement(F.p2849);
} else if ((F.v6673 == v716)) {
yr3083_TerminateStatement(F.p2849);
} else if ((F.v6673 == v707)) {
yr2886_GotoStatement(F.p2849);
} else {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2849))).f_line, y_str("not a statement", 15));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2854_ForStatement(void * a_p2855) {
struct yf2856 F;
memset((void *)&F, 0, sizeof F);
F.p2855 = a_p2855;
F.v6774 = yr2011_MakeRep(((*(yR99 *)rt_nil_check(F.p2855))).f_a, INT64_C(0), 0);
if ((!yr1780_IsDiscrete(F.v6774))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2855))).f_line, y_str("FOR goes over an integer or scalar representation", 49));
}
yr1870_CheckRepresented(F.v6774, ((*(yR99 *)rt_nil_check(F.p2855))).f_line);
yr1655_OpenScope(0);
F.v6782 = yr1648_NewSym(v848, ((*(yR99 *)rt_nil_check(F.p2855))).f_name);
((*(yR119 *)rt_nil_check(F.v6782))).f_rep = F.v6774;
((*(yR119 *)rt_nil_check(F.v6782))).f_level = v1623;
((*(yR119 *)rt_nil_check(F.v6782))).f_cname = yr1166_Fresh(y_str("c_", 2));
yr1724_DeclStorage(yr1041_T(y_str("rt_int", 6)), ((*(yR119 *)rt_nil_check(F.v6782))).f_cname);
yr1704_Define(F.v6782, ((*(yR99 *)rt_nil_check(F.p2855))).f_line);
F.v6776 = yr1166_Fresh(y_str("i", 1));
F.v6778 = yr1166_Fresh(y_str("hi", 2));
yr1006_SB();
yr1017_SA(y_str("{ rt_int ", 9));
yr1024_ST(F.v6778);
yr1017_SA(y_str(" = ", 3));
yr1024_ST(yr1916_HiText(F.v6774));
yr1017_SA(y_str(";", 1));
F.v6780 = yr1036_SE();
yr1112_Emit(F.v6780);
yr1006_SB();
yr1017_SA(y_str("for (rt_int ", 12));
yr1024_ST(F.v6776);
yr1017_SA(y_str(" = ", 3));
yr1024_ST(yr1910_LoText(F.v6774));
yr1017_SA(y_str("; ", 2));
yr1024_ST(F.v6776);
yr1017_SA(y_str(" <= ", 4));
yr1024_ST(F.v6778);
yr1017_SA(y_str("; ", 2));
yr1024_ST(F.v6776);
yr1017_SA(y_str("++) { ", 6));
yr1024_ST(yr1731_SymPath(F.v6782));
yr1017_SA(y_str(" = ", 3));
yr1024_ST(F.v6776);
yr1017_SA(y_str(";", 1));
F.v6780 = yr1036_SE();
yr1112_Emit(F.v6780);
yr2824_Statements(((*(yR99 *)rt_nil_check(F.p2855))).f_b);
yr2769_Emit3(y_str("if (", 4), F.v6776, y_str(" == ", 4));
((*(yR129 *)rt_nil_check((v976).f_tail))).f_t = yr2860_Join(((*(yR129 *)rt_nil_check((v976).f_tail))).f_t, F.v6778, yr1041_T(y_str(") break;", 8)));
yr1118_EmitS(y_str("}}", 2));
yr1661_CloseScope();
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2860_Join(rt_int a_p2861, rt_int a_p2862, rt_int a_p2863) {
struct yf2864 F;
memset((void *)&F, 0, sizeof F);
F.p2861 = a_p2861;
F.p2862 = a_p2862;
F.p2863 = a_p2863;
yr1006_SB();
yr1024_ST(F.p2861);
yr1024_ST(F.p2862);
yr1024_ST(F.p2863);
{ rt_int rv6810 = yr1036_SE();
return rv6810; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2868_ReturnStatement(void * a_p2869) {
struct yf2870 F;
memset((void *)&F, 0, sizeof F);
F.p2869 = a_p2869;
if ((v2729 == ((void *)0))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2869))).f_line, y_str("RETURN outside a routine (IX.A.6)", 33));
}
if ((((*(yR119 *)rt_nil_check(v2729))).f_kind == v869)) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2869))).f_line, y_str("a process ends with TERMINATE_PROCESS (IX.A.7)", 46));
}
F.v6822 = ((*(yR119 *)rt_nil_check(v2729))).f_ret;
if ((((*(yR99 *)rt_nil_check(F.p2869))).f_a == ((void *)0))) {
if ((!(((*(yR104 *)rt_nil_check(F.v6822))).f_kind == v836))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2869))).f_line, y_str("RETURN needs a value here (IX.A.6)", 34));
}
yr2843_CopyOut();
yr3078_LeaveMonitor();
yr2779_PopTo(v2657);
yr1118_EmitS(y_str("return;", 7));
return;
}
if ((((*(yR104 *)rt_nil_check(F.v6822))).f_kind == v836)) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2869))).f_line, y_str("this routine returns no value (IX.A.6)", 38));
}
yr2383_Expr(((*(yR99 *)rt_nil_check(F.p2869))).f_a, F.v6822, &F.v6814, &F.v6820);
yr1862_CheckType(((*(yR99 *)rt_nil_check(F.p2869))).f_line, F.v6822, F.v6820);
F.v6818 = yr1166_Fresh(y_str("rv", 2));
yr1006_SB();
yr1017_SA(y_str("{ ", 2));
yr1024_ST(yr1829_CType(F.v6822));
yr1017_SA(y_str(" ", 1));
yr1024_ST(F.v6818);
yr1017_SA(y_str(" = ", 3));
yr1024_ST(yr2316_Convert(F.v6814, F.v6822, F.v6820));
yr1017_SA(y_str(";", 1));
F.v6816 = yr1036_SE();
yr1112_Emit(F.v6816);
yr2843_CopyOut();
yr3078_LeaveMonitor();
yr2779_PopTo(v2657);
yr2769_Emit3(y_str("return ", 7), F.v6818, y_str("; }", 3));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2874_BeginStatement(void * a_p2875) {
struct yf2876 F;
memset((void *)&F, 0, sizeof F);
F.p2875 = a_p2875;
yr1118_EmitS(y_str("{", 1));
yr1655_OpenScope(0);
yr2964_Declarations(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2875))).f_a))).f_a);
yr2796_BlockStatements(((*(yR99 *)rt_nil_check(F.p2875))).f_a);
yr3054_AwaitProcesses();
yr1661_CloseScope();
yr1118_EmitS(y_str("}", 1));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2880_PlaceLabel(void * a_p2881) {
struct yf2882 F;
memset((void *)&F, 0, sizeof F);
F.p2881 = a_p2881;
F.v6843 = yr1678_FindHere(((*(yR99 *)rt_nil_check(F.p2881))).f_text);
if ((((F.v6843 == ((void *)0))) || ((!(((*(yR119 *)rt_nil_check(F.v6843))).f_kind == v872))))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2881))).f_line, ((*(yR99 *)rt_nil_check(F.p2881))).f_text, y_str(" labels a statement but is not declared by LABEL in this block (VII.C)", 70));
}
if (((*(yR119 *)rt_nil_check(F.v6843))).f_hasmv) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2881))).f_line, ((*(yR99 *)rt_nil_check(F.p2881))).f_text, y_str(" labels two statements", 22));
}
((*(yR119 *)rt_nil_check(F.v6843))).f_hasmv = 1;
yr2769_Emit3(y_str("", 0), ((*(yR119 *)rt_nil_check(F.v6843))).f_cname, y_str(": ;", 3));
if ((!(((rt_int *)(v2669).p)[y_ix1(v2669, v2682)] == INT64_C(0)))) {
yr2769_Emit3(y_str("rt_xtop = &", 11), ((rt_int *)(v2669).p)[y_ix1(v2669, v2682)], y_str(";", 1));
} else if ((!(((rt_int *)(v2680).p)[y_ix1(v2680, v2682)] == INT64_C(0)))) {
yr2769_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v2680).p)[y_ix1(v2680, v2682)], y_str(";", 1));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2886_GotoStatement(void * a_p2887) {
struct yf2888 F;
memset((void *)&F, 0, sizeof F);
F.p2887 = a_p2887;
F.v6858 = yr1684_Lookup(((*(yR99 *)rt_nil_check(F.p2887))).f_name, ((*(yR99 *)rt_nil_check(F.p2887))).f_line);
if ((!(((*(yR119 *)rt_nil_check(F.v6858))).f_kind == v872))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2887))).f_line, ((*(yR99 *)rt_nil_check(F.p2887))).f_name, y_str(" is not a label", 15));
}
if ((!(((*(yR119 *)rt_nil_check(F.v6858))).f_level == v1623))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2887))).f_line, ((*(yR99 *)rt_nil_check(F.p2887))).f_name, y_str(": GOTO does not leave a routine or process (IX.A.4)", 51));
}
((*(yR119 *)rt_nil_check(F.v6858))).f_readonly = 1;
yr2769_Emit3(y_str("goto ", 5), ((*(yR119 *)rt_nil_check(F.v6858))).f_cname, y_str(";", 1));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2892_CheckLabels(void * a_p2893) {
struct yf2894 F;
memset((void *)&F, 0, sizeof F);
F.p2893 = a_p2893;
F.v6867 = F.p2893;
while ((!(F.v6867 == ((void *)0)))) {
if ((((*(yR99 *)rt_nil_check(F.v6867))).f_kind == v629)) {
F.v6869 = ((*(yR99 *)rt_nil_check(F.v6867))).f_a;
while ((!(F.v6869 == ((void *)0)))) {
F.v6871 = yr1678_FindHere(((*(yR99 *)rt_nil_check(F.v6869))).f_name);
if ((((((!(F.v6871 == ((void *)0)))) && ((((*(yR119 *)rt_nil_check(F.v6871))).f_kind == v872))) && ((*(yR119 *)rt_nil_check(F.v6871))).f_readonly) && (!((*(yR119 *)rt_nil_check(F.v6871))).f_hasmv))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.v6869))).f_line, ((*(yR99 *)rt_nil_check(F.v6869))).f_name, y_str(" is the target of a GOTO but labels no statement of its block", 61));
}
F.v6869 = ((*(yR99 *)rt_nil_check(F.v6869))).f_next;
}
}
F.v6867 = ((*(yR99 *)rt_nil_check(F.v6867))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2898_RoutineCName(rt_int a_p2899) {
struct yf2900 F;
memset((void *)&F, 0, sizeof F);
F.p2899 = a_p2899;
F.v6876 = yr1161_NewSerial();
F.v6878 = 1;
F.lo6883 = INT64_C(1);
F.hi6884 = ((rt_int *)(v904).p)[y_ix1(v904, F.p2899)];
{ rt_int hi6888 = F.hi6884;
for (rt_int i6887 = F.lo6883; i6887 <= hi6888; i6887++) { F.c_6886 = i6887;
if ((!((yr988_IsLetter(yr1083_TChar(F.p2899, rt_range(F.c_6886, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || yr994_IsDigit(yr1083_TChar(F.p2899, rt_range(F.c_6886, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))))) {
F.v6878 = 0;
}
if (i6887 == hi6888) break;
}}
yr1006_SB();
yr1017_SA(y_str("yr", 2));
yr1030_SI(F.v6876);
if (F.v6878) {
yr1017_SA(y_str("_", 1));
yr1024_ST(F.p2899);
}
{ rt_int rv6892 = yr1036_SE();
return rv6892; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2904_FormalRep(void * a_p2905) {
struct yf2906 F;
memset((void *)&F, 0, sizeof F);
F.p2905 = a_p2905;
if ((((*(yR99 *)rt_nil_check(F.p2905))).f_kind == v680)) {
yr2235_Manifest(((*(yR99 *)rt_nil_check(F.p2905))).f_a, &F.v6898, &F.v6900);
if ((((!F.v6898) || ((F.v6900 < INT64_C(1)))) || ((F.v6900 > INT64_C(4))))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2905))).f_line, y_str("DIMENSIONS is a manifest constant from 1 to 4", 45));
}
F.v6896 = yr1767_NewRep(v827, yr1041_T(y_str("length-unresolved array", 23)));
((*(yR104 *)rt_nil_check(F.v6896))).f_nidx = F.v6900;
((*(yR104 *)rt_nil_check(F.v6896))).f_elem = yr2011_MakeRep(((*(yR99 *)rt_nil_check(F.p2905))).f_b, INT64_C(0), 0);
yr1870_CheckRepresented(((*(yR104 *)rt_nil_check(F.v6896))).f_elem, ((*(yR99 *)rt_nil_check(F.p2905))).f_line);
((*(yR104 *)rt_nil_check(F.v6896))).f_deep = 1;
{ void * rv6908 = F.v6896;
return rv6908; }
}
if ((((*(yR99 *)rt_nil_check(F.p2905))).f_kind == v683)) {
{ void * rv6910 = yr1767_NewRep(v839, yr1041_T(y_str("SPACE", 5)));
return rv6910; }
}
F.v6896 = yr2011_MakeRep(F.p2905, INT64_C(0), 0);
yr1870_CheckRepresented(F.v6896, ((*(yR99 *)rt_nil_check(F.p2905))).f_line);
{ void * rv6913 = F.v6896;
return rv6913; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2910_ParamCType(void * a_p2911) {
struct yf2912 F;
memset((void *)&F, 0, sizeof F);
F.p2911 = a_p2911;
F.v6917 = yr1829_CType(((*(yR114 *)rt_nil_check(F.p2911))).f_rep);
if ((((*(yR114 *)rt_nil_check(F.p2911))).f_cls == v881)) {
{ rt_int rv6918 = F.v6917;
return rv6918; }
}
yr1006_SB();
yr1024_ST(F.v6917);
yr1017_SA(y_str(" *", 2));
{ rt_int rv6920 = yr1036_SE();
return rv6920; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2916_RoutineHeader(void * a_p2917, rt_int a_p2918) {
struct yf2919 F;
memset((void *)&F, 0, sizeof F);
F.p2917 = a_p2917;
F.p2918 = a_p2918;
F.v6941 = 1;
F.v6925 = yr1648_NewSym(F.p2918, ((*(yR99 *)rt_nil_check(F.p2917))).f_name);
((*(yR119 *)rt_nil_check(F.v6925))).f_decl = F.p2917;
((*(yR119 *)rt_nil_check(F.v6925))).f_func = (((*(yR99 *)rt_nil_check(F.p2917))).f_flag == INT64_C(1));
((*(yR119 *)rt_nil_check(F.v6925))).f_level = rt_range(rt_add(v1623, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR119 *)rt_nil_check(F.v6925))).f_cname = yr2898_RoutineCName(((*(yR99 *)rt_nil_check(F.p2917))).f_name);
if ((!(((*(yR99 *)rt_nil_check(F.p2917))).f_b == ((void *)0)))) {
((*(yR119 *)rt_nil_check(F.v6925))).f_ret = yr2011_MakeRep(((*(yR99 *)rt_nil_check(F.p2917))).f_b, INT64_C(0), 0);
yr1870_CheckRepresented(((*(yR119 *)rt_nil_check(F.v6925))).f_ret, ((*(yR99 *)rt_nil_check(F.p2917))).f_line);
} else {
((*(yR119 *)rt_nil_check(F.v6925))).f_ret = v1749;
if (((*(yR119 *)rt_nil_check(F.v6925))).f_func) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2917))).f_line, ((*(yR99 *)rt_nil_check(F.p2917))).f_name, y_str(": a FUNCTION has a RETURNS clause (X.A)", 39));
}
}
F.v6935 = ((void *)0);
F.v6929 = ((*(yR99 *)rt_nil_check(F.p2917))).f_a;
while ((!(F.v6929 == ((void *)0)))) {
F.v6937 = yr2904_FormalRep(((*(yR99 *)rt_nil_check(F.v6929))).f_b);
if ((((*(yR119 *)rt_nil_check(F.v6925))).f_func && ((!(((*(yR99 *)rt_nil_check(F.v6929))).f_ival == v881))))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.v6929))).f_line, ((*(yR99 *)rt_nil_check(F.p2917))).f_name, y_str(": the parameters of a FUNCTION are CONST (X.A.2)", 48));
}
if ((((F.p2918 == v869)) && ((((*(yR99 *)rt_nil_check(F.v6929))).f_ival == v884)))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.v6929))).f_line, ((*(yR99 *)rt_nil_check(F.p2917))).f_name, y_str(": a process has no OUT parameters", 33));
}
F.v6931 = ((*(yR99 *)rt_nil_check(F.v6929))).f_a;
while ((!(F.v6931 == ((void *)0)))) {
({ F.v6933 = rt_alloc(sizeof(yR114)); });
(*(yR114 *)rt_nil_check(F.v6933)) = ((yR114){ .f_name = ((*(yR99 *)rt_nil_check(F.v6931))).f_name, .f_cls = ((*(yR99 *)rt_nil_check(F.v6929))).f_ival, .f_rep = F.v6937, .f_cname = yr1166_Fresh(y_str("p", 1)), .f_next = ((void *)0) });
if ((F.v6935 == ((void *)0))) {
((*(yR119 *)rt_nil_check(F.v6925))).f_params = F.v6933;
} else {
((*(yR114 *)rt_nil_check(F.v6935))).f_next = F.v6933;
}
F.v6935 = F.v6933;
((*(yR119 *)rt_nil_check(F.v6925))).f_nparams = rt_range(rt_add(((*(yR119 *)rt_nil_check(F.v6925))).f_nparams, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6931 = ((*(yR99 *)rt_nil_check(F.v6931))).f_next;
}
F.v6929 = ((*(yR99 *)rt_nil_check(F.v6929))).f_next;
}
F.v6927 = yr1672_Find(((*(yR99 *)rt_nil_check(F.p2917))).f_name);
if ((!(F.v6927 == ((void *)0)))) {
F.v6927 = yr1737_Real(F.v6927);
}
if (((((!(((*(yR99 *)rt_nil_check(F.p2917))).f_ival == INT64_C(0)))) && ((!(F.v6927 == ((void *)0))))) && ((((*(yR119 *)rt_nil_check(F.v6927))).f_kind == v860)))) {
((*(yR119 *)rt_nil_check(F.v6925))).f_alt = F.v6927;
if ((((((*(yR99 *)rt_nil_check(F.p2917))).f_ival == v323)) && ((!(yr2923_SameSignature(F.v6925, F.v6927) == ((void *)0)))))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2917))).f_line, ((*(yR99 *)rt_nil_check(F.p2917))).f_name, y_str(" EXTENDS a definition for the same parameter types: use REPLACES", 64));
}
if ((((((*(yR99 *)rt_nil_check(F.p2917))).f_ival == v419)) && ((yr2923_SameSignature(F.v6925, F.v6927) == ((void *)0))))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2917))).f_line, ((*(yR99 *)rt_nil_check(F.p2917))).f_name, y_str(" REPLACES no definition for these parameter types", 49));
}
}
((*(yR99 *)rt_nil_check(F.p2917))).f_sym = F.v6925;
yr1704_Define(F.v6925, ((*(yR99 *)rt_nil_check(F.p2917))).f_line);
((rt_int *)(v1635).p)[y_ix1(v1635, ((*(yR119 *)rt_nil_check(F.v6925))).f_level)] = yr1166_Fresh(y_str("yf", 2));
((*(yR119 *)rt_nil_check(F.v6925))).f_members = yr1648_NewSym(v875, ((rt_int *)(v1635).p)[y_ix1(v1635, ((*(yR119 *)rt_nil_check(F.v6925))).f_level)]);
yr1006_SB();
yr1017_SA(y_str("struct ", 7));
yr1024_ST(((rt_int *)(v1635).p)[y_ix1(v1635, ((*(yR119 *)rt_nil_check(F.v6925))).f_level)]);
yr1017_SA(y_str(";", 1));
F.v6939 = yr1036_SE();
yr1090_Put(&v962, F.v6939);
yr1006_SB();
yr1017_SA(y_str("static ", 7));
if ((F.p2918 == v869)) {
yr1017_SA(y_str("void", 4));
} else {
yr1024_ST(yr1829_CType(((*(yR119 *)rt_nil_check(F.v6925))).f_ret));
}
yr1017_SA(y_str(" ", 1));
yr1024_ST(((*(yR119 *)rt_nil_check(F.v6925))).f_cname);
yr1017_SA(y_str("(", 1));
F.v6939 = yr1036_SE();
if ((F.p2918 == v869)) {
F.v6939 = yr2860_Join(F.v6939, yr1041_T(y_str("void *arg", 9)), INT64_C(0));
F.v6941 = 0;
} else if ((v1623 > INT64_C(0))) {
yr1006_SB();
yr1024_ST(F.v6939);
yr1017_SA(y_str("struct ", 7));
yr1024_ST(((rt_int *)(v1635).p)[y_ix1(v1635, v1623)]);
yr1017_SA(y_str(" *up", 4));
F.v6939 = yr1036_SE();
F.v6941 = 0;
}
F.v6933 = ((*(yR119 *)rt_nil_check(F.v6925))).f_params;
while ((((!(F.v6933 == ((void *)0)))) && ((!(F.p2918 == v869))))) {
yr1006_SB();
yr1024_ST(F.v6939);
if ((!F.v6941)) {
yr1017_SA(y_str(", ", 2));
}
F.v6941 = 0;
yr1024_ST(yr2910_ParamCType(F.v6933));
yr1017_SA(y_str(" a_", 3));
yr1024_ST(((*(yR114 *)rt_nil_check(F.v6933))).f_cname);
F.v6939 = yr1036_SE();
F.v6933 = ((*(yR114 *)rt_nil_check(F.v6933))).f_next;
}
if (F.v6941) {
F.v6939 = yr2860_Join(F.v6939, yr1041_T(y_str("void", 4)), INT64_C(0));
}
F.v6939 = yr2860_Join(F.v6939, yr1041_T(y_str(")", 1)), INT64_C(0));
((*(yR119 *)rt_nil_check(F.v6925))).f_mnext = yr1648_NewSym(v875, F.v6939);
yr1090_Put(&v970, yr2860_Join(F.v6939, yr1041_T(y_str(";", 1)), INT64_C(0)));
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2923_SameSignature(void * a_p2924, void * a_p2925) {
struct yf2926 F;
memset((void *)&F, 0, sizeof F);
F.p2924 = a_p2924;
F.p2925 = a_p2925;
F.v6984 = F.p2925;
while ((!(F.v6984 == ((void *)0)))) {
if ((((*(yR119 *)rt_nil_check(F.v6984))).f_nparams == ((*(yR119 *)rt_nil_check(F.p2924))).f_nparams)) {
F.v6990 = 1;
F.v6986 = ((*(yR119 *)rt_nil_check(F.p2924))).f_params;
F.v6988 = ((*(yR119 *)rt_nil_check(F.v6984))).f_params;
while ((!(F.v6986 == ((void *)0)))) {
if ((!yr1847_SameType(((*(yR114 *)rt_nil_check(F.v6986))).f_rep, ((*(yR114 *)rt_nil_check(F.v6988))).f_rep))) {
F.v6990 = 0;
}
F.v6986 = ((*(yR114 *)rt_nil_check(F.v6986))).f_next;
F.v6988 = ((*(yR114 *)rt_nil_check(F.v6988))).f_next;
}
if (F.v6990) {
{ void * rv6993 = F.v6984;
return rv6993; }
}
}
F.v6984 = ((*(yR119 *)rt_nil_check(F.v6984))).f_alt;
}
{ void * rv6994 = ((void *)0);
return rv6994; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2930_RoutineBody(void * a_p2931) {
struct yf2932 F;
memset((void *)&F, 0, sizeof F);
F.p2931 = a_p2931;
F.v6998 = ((*(yR99 *)rt_nil_check(F.p2931))).f_sym;
F.v7000 = v976;
F.v7002 = v978;
F.v7004 = v1623;
F.v7006 = v2654;
F.v7008 = v2657;
F.v7010 = v2682;
F.v7012 = v2696;
F.v7014 = v2723;
F.v7016 = v2726;
F.v7018 = v2729;
F.v7020 = v2758;
v976 = ((yR134){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v978 = ((yR134){ .f_head = ((void *)0), .f_tail = ((void *)0) });
F.v7030 = ((yR134){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v1623 = ((*(yR119 *)rt_nil_check(F.v6998))).f_level;
F.v7026 = ((*(yR119 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v6998))).f_members))).f_name;
((rt_int *)(v1635).p)[y_ix1(v1635, v1623)] = F.v7026;
v2657 = v2654;
v2726 = v2723;
v2696 = INT64_C(0);
v2729 = F.v6998;
v2758 = 0;
yr1655_OpenScope(0);
F.v7022 = ((*(yR119 *)rt_nil_check(F.v6998))).f_params;
while ((!(F.v7022 == ((void *)0)))) {
if ((((*(yR114 *)rt_nil_check(F.v7022))).f_cls == v881)) {
F.v7024 = yr1648_NewSym(v848, ((*(yR114 *)rt_nil_check(F.v7022))).f_name);
} else {
F.v7024 = yr1648_NewSym(v845, ((*(yR114 *)rt_nil_check(F.v7022))).f_name);
}
((*(yR119 *)rt_nil_check(F.v7024))).f_rep = ((*(yR114 *)rt_nil_check(F.v7022))).f_rep;
((*(yR119 *)rt_nil_check(F.v7024))).f_level = v1623;
((*(yR119 *)rt_nil_check(F.v7024))).f_cname = ((*(yR114 *)rt_nil_check(F.v7022))).f_cname;
if ((((*(yR119 *)rt_nil_check(F.v6998))).f_kind == v869)) {
((*(yR119 *)rt_nil_check(F.v7024))).f_byref = (((*(yR114 *)rt_nil_check(F.v7022))).f_cls == v887);
yr1724_DeclStorage(yr2910_ParamCType(F.v7022), ((*(yR114 *)rt_nil_check(F.v7022))).f_cname);
} else if ((((*(yR114 *)rt_nil_check(F.v7022))).f_cls == v887)) {
((*(yR119 *)rt_nil_check(F.v7024))).f_byref = 1;
yr1724_DeclStorage(yr2910_ParamCType(F.v7022), ((*(yR114 *)rt_nil_check(F.v7022))).f_cname);
yr1112_Emit(yr2860_Join(yr1041_T(y_str("F.", 2)), ((*(yR114 *)rt_nil_check(F.v7022))).f_cname, yr2860_Join(yr1041_T(y_str(" = a_", 5)), ((*(yR114 *)rt_nil_check(F.v7022))).f_cname, yr1041_T(y_str(";", 1)))));
} else if ((((*(yR114 *)rt_nil_check(F.v7022))).f_cls == v884)) {
yr1724_DeclStorage(yr1829_CType(((*(yR114 *)rt_nil_check(F.v7022))).f_rep), ((*(yR114 *)rt_nil_check(F.v7022))).f_cname);
yr1724_DeclStorage(yr2910_ParamCType(F.v7022), yr2860_Join(((*(yR114 *)rt_nil_check(F.v7022))).f_cname, yr1041_T(y_str("_o", 2)), INT64_C(0)));
yr1112_Emit(yr2860_Join(yr1041_T(y_str("F.", 2)), ((*(yR114 *)rt_nil_check(F.v7022))).f_cname, yr2860_Join(yr1041_T(y_str("_o = a_", 7)), ((*(yR114 *)rt_nil_check(F.v7022))).f_cname, yr1041_T(y_str(";", 1)))));
if ((yr1804_Deep(((*(yR114 *)rt_nil_check(F.v7022))).f_rep) && ((!(((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v7022))).f_rep))).f_kind == v827))))) {
yr1112_Emit(yr2860_Join(yr1041_T(y_str("y_init(", 7)), yr1835_DescOf(((*(yR114 *)rt_nil_check(F.v7022))).f_rep), yr2860_Join(yr1041_T(y_str(", &F.", 5)), ((*(yR114 *)rt_nil_check(F.v7022))).f_cname, yr1041_T(y_str(");", 2)))));
}
if ((((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v7022))).f_rep))).f_kind == v827)) {
yr1112_Emit(yr2860_Join(yr1041_T(y_str("F.", 2)), ((*(yR114 *)rt_nil_check(F.v7022))).f_cname, yr2860_Join(yr1041_T(y_str(" = *a_", 6)), ((*(yR114 *)rt_nil_check(F.v7022))).f_cname, yr1041_T(y_str(";", 1)))));
}
} else {
yr1724_DeclStorage(yr1829_CType(((*(yR114 *)rt_nil_check(F.v7022))).f_rep), ((*(yR114 *)rt_nil_check(F.v7022))).f_cname);
yr1112_Emit(yr2860_Join(yr1041_T(y_str("F.", 2)), ((*(yR114 *)rt_nil_check(F.v7022))).f_cname, yr2860_Join(yr1041_T(y_str(" = a_", 5)), ((*(yR114 *)rt_nil_check(F.v7022))).f_cname, yr1041_T(y_str(";", 1)))));
}
yr1704_Define(F.v7024, ((*(yR99 *)rt_nil_check(F.p2931))).f_line);
F.v7022 = ((*(yR114 *)rt_nil_check(F.v7022))).f_next;
}
yr3072_EnterMonitor(F.v6998);
yr2964_Declarations(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2931))).f_c))).f_a);
yr2796_BlockStatements(((*(yR99 *)rt_nil_check(F.p2931))).f_c);
if ((((*(yR119 *)rt_nil_check(F.v6998))).f_kind == v869)) {
yr1118_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
} else {
yr1118_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
}
yr3054_AwaitProcesses();
yr1661_CloseScope();
yr1006_SB();
yr1017_SA(y_str("struct ", 7));
yr1024_ST(F.v7026);
yr1017_SA(y_str(" {", 2));
if ((v1623 > INT64_C(1))) {
yr1017_SA(y_str(" struct ", 8));
yr1024_ST(((rt_int *)(v1635).p)[y_ix1(v1635, rt_sub(v1623, INT64_C(1)))]);
yr1017_SA(y_str(" *up;", 5));
} else {
yr1017_SA(y_str(" void *up;", 10));
}
F.v7028 = yr1036_SE();
yr1090_Put(&v966, F.v7028);
yr1105_Append(&v966, &v978);
yr1097_PutS(&v966, y_str("};", 2));
yr1090_Put(&F.v7030, yr2860_Join(((*(yR119 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v6998))).f_mnext))).f_name, yr1041_T(y_str(" {", 2)), INT64_C(0)));
if (v2758) {
yr1097_PutS(&F.v7030, y_str("volatile", 8));
}
yr1090_Put(&F.v7030, yr2860_Join(yr1041_T(y_str("struct ", 7)), F.v7026, yr1041_T(y_str(" F;", 3))));
yr1097_PutS(&F.v7030, y_str("memset((void *)&F, 0, sizeof F);", 32));
if ((((*(yR119 *)rt_nil_check(F.v6998))).f_kind == v869)) {
yr1090_Put(&F.v7030, yr2860_Join(yr1041_T(y_str("F = *(struct ", 13)), F.v7026, yr1041_T(y_str(" *)arg;", 7))));
} else if ((v1623 > INT64_C(1))) {
yr1097_PutS(&F.v7030, y_str("F.up = up;", 10));
}
yr1105_Append(&F.v7030, &v976);
yr1097_PutS(&F.v7030, y_str("}", 1));
yr1105_Append(&v972, &F.v7030);
v976 = F.v7000;
v978 = F.v7002;
v1623 = F.v7004;
((rt_int *)(v1635).p)[y_ix1(v1635, v1623)] = yr1166_Fresh(y_str("unused", 6));
if ((!(F.v7018 == ((void *)0)))) {
((rt_int *)(v1635).p)[y_ix1(v1635, v1623)] = ((*(yR119 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v7018))).f_members))).f_name;
}
v2654 = F.v7006;
v2657 = F.v7008;
v2682 = F.v7010;
v2696 = F.v7012;
v2723 = F.v7014;
v2726 = F.v7016;
v2729 = F.v7018;
v2758 = F.v7020;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2936_DeclareStorage(void * a_p2937, void * a_p2938, rt_int a_p2939) {
struct yf2940 F;
memset((void *)&F, 0, sizeof F);
F.p2937 = a_p2937;
F.p2938 = a_p2938;
F.p2939 = a_p2939;
((*(yR119 *)rt_nil_check(F.p2937))).f_rep = F.p2938;
((*(yR119 *)rt_nil_check(F.p2937))).f_level = v1623;
((*(yR119 *)rt_nil_check(F.p2937))).f_cname = yr1166_Fresh(y_str("v", 1));
yr1724_DeclStorage(yr1829_CType(F.p2938), ((*(yR119 *)rt_nil_check(F.p2937))).f_cname);
if (yr1804_Deep(F.p2938)) {
yr1112_Emit(yr2860_Join(yr1041_T(y_str("y_init(", 7)), yr1835_DescOf(F.p2938), yr2860_Join(yr1041_T(y_str(", &", 3)), yr1731_SymPath(F.p2937), yr1041_T(y_str(");", 2)))));
}
if ((((*(yR104 *)rt_nil_check(F.p2938))).f_kind == v818)) {
yr1112_Emit(yr2860_Join(yr1731_SymPath(F.p2937), yr1041_T(y_str(" = y_set_new(", 13)), yr2860_Join(yr1910_LoText(((*(yR104 *)rt_nil_check(F.p2938))).f_elem), yr1041_T(y_str(", ", 2)), yr2860_Join(yr1916_HiText(((*(yR104 *)rt_nil_check(F.p2938))).f_elem), yr1041_T(y_str(");", 2)), INT64_C(0)))));
}
if ((((*(yR104 *)rt_nil_check(F.p2938))).f_kind == v821)) {
yr3089_DeclareSignal(F.p2937, F.p2939);
}
if (yr1817_HoldsSignal(F.p2938)) {
yr3096_DeclareSignalArray(F.p2937, F.p2939);
}
if ((((*(yR104 *)rt_nil_check(F.p2938))).f_kind == v824)) {
yr1112_Emit(yr2860_Join(yr1041_T(y_str("rt_lock_init(&", 14)), yr1731_SymPath(F.p2937), yr1041_T(y_str(");", 2))));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2944_SimpleDecl(void * a_p2945) {
struct yf2946 F;
memset((void *)&F, 0, sizeof F);
F.p2945 = a_p2945;
F.v7092 = ((*(yR99 *)rt_nil_check(F.p2945))).f_kind;
if ((((F.v7092 == v623)) || ((F.v7092 == v626)))) {
F.v7094 = yr2011_MakeRep(((*(yR99 *)rt_nil_check(F.p2945))).f_b, INT64_C(0), 0);
yr1870_CheckRepresented(F.v7094, ((*(yR99 *)rt_nil_check(F.p2945))).f_line);
if ((((F.v7092 == v623)) && yr1823_NonAssignable(F.v7094))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2945))).f_line, y_str("signals, files and semaphores, and what holds them, are variables (VII.B)", 73));
}
F.v7098 = ((*(yR99 *)rt_nil_check(F.p2945))).f_a;
while ((!(F.v7098 == ((void *)0)))) {
if ((F.v7092 == v623)) {
F.v7100 = yr1648_NewSym(v848, ((*(yR99 *)rt_nil_check(F.v7098))).f_name);
} else {
F.v7100 = yr1648_NewSym(v845, ((*(yR99 *)rt_nil_check(F.v7098))).f_name);
}
yr2936_DeclareStorage(F.v7100, F.v7094, ((*(yR99 *)rt_nil_check(F.p2945))).f_line);
if ((!(((*(yR99 *)rt_nil_check(F.p2945))).f_c == ((void *)0)))) {
yr2383_Expr(((*(yR99 *)rt_nil_check(F.p2945))).f_c, F.v7094, &F.v7102, &F.v7096);
if ((F.v7092 == v623)) {
yr2334_Store(yr1731_SymPath(F.v7100), F.v7094, F.v7102, F.v7096, ((*(yR99 *)rt_nil_check(F.p2945))).f_line);
} else {
F.v7104 = yr2596_UserAssign(yr1731_SymPath(F.v7100), F.v7094, F.v7102, F.v7096, ((*(yR99 *)rt_nil_check(F.p2945))).f_line);
if ((!(F.v7104 == INT64_C(0)))) {
yr1112_Emit(F.v7104);
} else {
if ((((*(yR104 *)rt_nil_check(F.v7094))).f_opaque && (((rt_mod(((*(yR104 *)rt_nil_check(F.v7094))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2945))).f_line, ((*(yR104 *)rt_nil_check(F.v7094))).f_tname, y_str(" is opaque here: := is not exported to initialize it (X.B.3)", 60));
}
yr2334_Store(yr1731_SymPath(F.v7100), F.v7094, F.v7102, F.v7096, ((*(yR99 *)rt_nil_check(F.p2945))).f_line);
}
}
if ((F.v7092 == v623)) {
yr2235_Manifest(((*(yR99 *)rt_nil_check(F.p2945))).f_c, &F.v7106, &F.v7108);
if ((F.v7106 && yr1780_IsDiscrete(F.v7094))) {
((*(yR119 *)rt_nil_check(F.v7100))).f_hasmv = 1;
((*(yR119 *)rt_nil_check(F.v7100))).f_mval = F.v7108;
}
}
}
if ((!(((*(yR99 *)rt_nil_check(F.v7098))).f_a == ((void *)0)))) {
yr2957_AtLocation(F.v7100, ((*(yR99 *)rt_nil_check(F.v7098))).f_a);
}
yr1704_Define(F.v7100, ((*(yR99 *)rt_nil_check(F.v7098))).f_line);
F.v7098 = ((*(yR99 *)rt_nil_check(F.v7098))).f_next;
}
return;
}
if ((F.v7092 == v635)) {
F.v7094 = yr2011_MakeRep(((*(yR99 *)rt_nil_check(F.p2945))).f_b, ((*(yR99 *)rt_nil_check(F.p2945))).f_name, 0);
yr1870_CheckRepresented(F.v7094, ((*(yR99 *)rt_nil_check(F.p2945))).f_line);
F.v7100 = yr1648_NewSym(v851, ((*(yR99 *)rt_nil_check(F.p2945))).f_name);
((*(yR119 *)rt_nil_check(F.v7100))).f_rep = F.v7094;
yr1704_Define(F.v7100, ((*(yR99 *)rt_nil_check(F.p2945))).f_line);
yr2034_ResolvePending(((*(yR99 *)rt_nil_check(F.p2945))).f_name, F.v7094);
yr2950_NoteAlphabet(F.p2945, F.v7094);
return;
}
if ((F.v7092 == v632)) {
F.v7094 = yr2011_MakeRep(((*(yR99 *)rt_nil_check(F.p2945))).f_b, ((*(yR99 *)rt_nil_check(F.p2945))).f_name, 1);
if ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2945))).f_b))).f_kind == v656)) {
F.v7094 = yr1774_CopyRep(F.v7094);
((*(yR104 *)rt_nil_check(F.v7094))).f_tid = yr2005_NewTid(((*(yR99 *)rt_nil_check(F.p2945))).f_name);
((*(yR104 *)rt_nil_check(F.v7094))).f_tname = ((*(yR99 *)rt_nil_check(F.p2945))).f_name;
if (((((((*(yR104 *)rt_nil_check(F.v7094))).f_kind == v788)) || ((((*(yR104 *)rt_nil_check(F.v7094))).f_kind == v791))) || ((((*(yR104 *)rt_nil_check(F.v7094))).f_kind == v794)))) {
if ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2945))).f_b))).f_a == ((void *)0))) {
((*(yR104 *)rt_nil_check(F.v7094))).f_abstract = 1;
}
}
}
F.v7100 = yr1648_NewSym(v854, ((*(yR99 *)rt_nil_check(F.p2945))).f_name);
((*(yR119 *)rt_nil_check(F.v7100))).f_rep = F.v7094;
yr1704_Define(F.v7100, ((*(yR99 *)rt_nil_check(F.p2945))).f_line);
yr2034_ResolvePending(((*(yR99 *)rt_nil_check(F.p2945))).f_name, F.v7094);
yr2950_NoteAlphabet(F.p2945, F.v7094);
return;
}
if ((F.v7092 == v629)) {
F.v7098 = ((*(yR99 *)rt_nil_check(F.p2945))).f_a;
while ((!(F.v7098 == ((void *)0)))) {
F.v7100 = yr1648_NewSym(v872, ((*(yR99 *)rt_nil_check(F.v7098))).f_name);
((*(yR119 *)rt_nil_check(F.v7100))).f_level = v1623;
((*(yR119 *)rt_nil_check(F.v7100))).f_cname = yr1166_Fresh(y_str("lab", 3));
yr1704_Define(F.v7100, ((*(yR99 *)rt_nil_check(F.v7098))).f_line);
F.v7098 = ((*(yR99 *)rt_nil_check(F.v7098))).f_next;
}
return;
}
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2945))).f_line, y_str("not a simple declaration", 24));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2950_NoteAlphabet(void * a_p2951, void * a_p2952) {
struct yf2953 F;
memset((void *)&F, 0, sizeof F);
F.p2951 = a_p2951;
F.p2952 = a_p2952;
if ((((((*(yR104 *)rt_nil_check(F.p2952))).f_kind == v803)) && ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2951))).f_b))).f_kind == v662)))) {
F.v7127 = yr1290_NewNode(v653, ((*(yR99 *)rt_nil_check(F.p2951))).f_line);
((*(yR99 *)rt_nil_check(F.v7127))).f_name = ((*(yR99 *)rt_nil_check(F.p2951))).f_name;
((*(yR99 *)rt_nil_check(F.v7127))).f_rep = F.p2952;
((*(yR99 *)rt_nil_check(F.v7127))).f_next = v2202;
v2202 = F.v7127;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2957_AtLocation(void * a_p2958, void * a_p2959) {
struct yf2960 F;
memset((void *)&F, 0, sizeof F);
F.p2958 = a_p2958;
F.p2959 = a_p2959;
if ((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.p2958))).f_rep))).f_kind == v821)) {
yr3103_DeviceSignal(F.p2958, F.p2959);
return;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2964_Declarations(void * a_p2965) {
struct yf2966 F;
memset((void *)&F, 0, sizeof F);
F.p2965 = a_p2965;
F.v7134 = F.p2965;
F.v7136 = ((void *)0);
F.v7138 = ((void *)0);
F.v7140 = ((void *)0);
F.v7142 = ((void * *)(v1646).p)[y_ix1(v1646, v1617)];
((void * *)(v1646).p)[y_ix1(v1646, v1617)] = F.p2965;
while ((!(F.v7134 == ((void *)0)))) {
v980 = ((*(yR99 *)rt_nil_check(F.v7134))).f_line;
if ((((((*(yR99 *)rt_nil_check(F.v7134))).f_kind == v638)) || ((((*(yR99 *)rt_nil_check(F.v7134))).f_kind == v650)))) {
if ((((*(yR99 *)rt_nil_check(F.v7134))).f_kind == v638)) {
yr2916_RoutineHeader(F.v7134, v860);
} else {
yr2916_RoutineHeader(F.v7134, v869);
}
F.v7140 = yr1290_NewNode(v653, ((*(yR99 *)rt_nil_check(F.v7134))).f_line);
((*(yR99 *)rt_nil_check(F.v7140))).f_a = F.v7134;
yr1297_Link(&F.v7136, &F.v7138, F.v7140);
if ((((*(yR99 *)rt_nil_check(F.v7134))).f_kind == v650)) {
yr3048_DeclareProcess(F.v7134);
}
} else if (((((*(yR99 *)rt_nil_check(F.v7134))).f_kind == v608))) {
if ((((*(yR99 *)rt_nil_check(F.v7134))).f_ival == INT64_C(0))) {
yr3030_CompileModule(F.v7134);
}
} else if ((((*(yR99 *)rt_nil_check(F.v7134))).f_kind == v644)) {
yr3036_DeclareTemplate(F.v7134);
} else if ((((*(yR99 *)rt_nil_check(F.v7134))).f_kind == v647)) {
yr3042_Instantiate(F.v7134);
} else {
yr2944_SimpleDecl(F.v7134);
}
F.v7134 = ((*(yR99 *)rt_nil_check(F.v7134))).f_next;
}
((void * *)(v1646).p)[y_ix1(v1646, v1617)] = F.v7142;
yr2041_CheckPending();
F.v7140 = F.v7136;
while ((!(F.v7140 == ((void *)0)))) {
yr2930_RoutineBody(((*(yR99 *)rt_nil_check(F.v7140))).f_a);
F.v7140 = ((*(yR99 *)rt_nil_check(F.v7140))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2983_Alias(rt_int a_p2984, void * a_p2985) {
struct yf2986 F;
memset((void *)&F, 0, sizeof F);
F.p2984 = a_p2984;
F.p2985 = a_p2985;
F.v7148 = yr1648_NewSym(v878, F.p2984);
((*(yR119 *)rt_nil_check(F.v7148))).f_target = F.p2985;
((*(yR119 *)rt_nil_check(F.v7148))).f_readonly = ((*(yR119 *)rt_nil_check(F.p2985))).f_readonly;
{ void * rv7149 = F.v7148;
return rv7149; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2990_AddLits(void * * a_p2991, void * a_p2992, rt_int a_p2993) {
struct yf2994 F;
memset((void *)&F, 0, sizeof F);
F.p2991 = a_p2991;
F.p2992 = a_p2992;
F.p2993 = a_p2993;
if ((((F.p2993 > INT64_C(8))) || ((*(yR104 *)rt_nil_check(F.p2992))).f_opaque)) {
return;
}
if ((((*(yR104 *)rt_nil_check(F.p2992))).f_kind == v800)) {
F.v7155 = ((*(yR104 *)rt_nil_check(F.p2992))).f_lits;
while ((!(F.v7155 == ((void *)0)))) {
F.v7157 = yr1697_FindLit(((*(yR99 *)rt_nil_check(F.v7155))).f_name, F.p2992);
if ((!(F.v7157 == ((void *)0)))) {
F.v7157 = yr2983_Alias(((*(yR99 *)rt_nil_check(F.v7155))).f_name, F.v7157);
((*(yR119 *)rt_nil_check(F.v7157))).f_mnext = (*F.p2991);
(*F.p2991) = F.v7157;
}
F.v7155 = ((*(yR99 *)rt_nil_check(F.v7155))).f_next;
}
} else if ((((*(yR104 *)rt_nil_check(F.p2992))).f_kind == v809)) {
F.v7159 = ((*(yR104 *)rt_nil_check(F.p2992))).f_fields;
while ((!(F.v7159 == ((void *)0)))) {
yr2990_AddLits(&(*F.p2991), ((*(yR109 *)rt_nil_check(F.v7159))).f_rep, rt_range(rt_add(F.p2993, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v7159 = ((*(yR109 *)rt_nil_check(F.v7159))).f_next;
}
} else if (((((((*(yR104 *)rt_nil_check(F.p2992))).f_kind == v806)) || ((((*(yR104 *)rt_nil_check(F.p2992))).f_kind == v818))) || ((((*(yR104 *)rt_nil_check(F.p2992))).f_kind == v815)))) {
yr2990_AddLits(&(*F.p2991), ((*(yR104 *)rt_nil_check(F.p2992))).f_elem, rt_range(rt_add(F.p2993, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3001_Provides(void * a_p3002, rt_int a_p3003) {
struct yf3004 F;
memset((void *)&F, 0, sizeof F);
F.p3002 = a_p3002;
F.p3003 = a_p3003;
F.v7169 = ((*(yR99 *)rt_nil_check(F.p3002))).f_b;
if ((((*(yR99 *)rt_nil_check(F.p3002))).f_name == F.p3003)) {
{ rt_int rv7171 = 1;
return rv7171; }
}
while ((!(F.v7169 == ((void *)0)))) {
if ((((!(((*(yR99 *)rt_nil_check(F.v7169))).f_ival == INT64_C(0)))) && ((((*(yR99 *)rt_nil_check(F.v7169))).f_ival == F.p3003)))) {
{ rt_int rv7174 = 1;
return rv7174; }
}
if ((((((*(yR99 *)rt_nil_check(F.v7169))).f_ival == INT64_C(0))) && ((((*(yR99 *)rt_nil_check(F.v7169))).f_name == F.p3003)))) {
{ rt_int rv7177 = 1;
return rv7177; }
}
F.v7169 = ((*(yR99 *)rt_nil_check(F.v7169))).f_next;
}
{ rt_int rv7179 = 0;
return rv7179; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3008_ImportLater(rt_int a_p3009, rt_int a_p3010) {
struct yf3011 F;
memset((void *)&F, 0, sizeof F);
F.p3009 = a_p3009;
F.p3010 = a_p3010;
if ((v1617 < INT64_C(0))) {
return;
}
F.v7184 = ((void * *)(v1646).p)[y_ix1(v1646, v1617)];
while ((!(F.v7184 == ((void *)0)))) {
if (((((((*(yR99 *)rt_nil_check(F.v7184))).f_kind == v608)) && ((!(((*(yR99 *)rt_nil_check(F.v7184))).f_ival == INT64_C(2))))) && yr3001_Provides(F.v7184, F.p3009))) {
if ((((*(yR99 *)rt_nil_check(F.v7184))).f_ival == INT64_C(1))) {
yr1152_FailN(F.p3010, F.p3009, y_str(": modules import from each other here, and this implementation needs an order without a circle (X.G)", 100));
}
yr3030_CompileModule(F.v7184);
return;
}
F.v7184 = ((*(yR99 *)rt_nil_check(F.v7184))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3015_ResolveItem(void * a_p3016, void * * a_p3017, rt_int a_p3018) {
struct yf3019 F;
memset((void *)&F, 0, sizeof F);
F.p3016 = a_p3016;
F.p3017 = a_p3017;
F.p3018 = a_p3018;
F.v7204 = ((*(yR99 *)rt_nil_check(F.p3016))).f_flag;
if (((F.p3018 && ((((*(yR99 *)rt_nil_check(F.p3016))).f_text == INT64_C(0)))) && (((((((*(yR99 *)rt_nil_check(F.p3016))).f_name == v515)) || ((((*(yR99 *)rt_nil_check(F.p3016))).f_name == v569))) || ((((*(yR99 *)rt_nil_check(F.p3016))).f_name == v554)))))) {
if ((yr1678_FindHere(((*(yR99 *)rt_nil_check(F.p3016))).f_name) == ((void *)0))) {
return;
}
}
if ((!(((*(yR99 *)rt_nil_check(F.p3016))).f_text == INT64_C(0)))) {
if ((((!F.p3018)) && ((yr1672_Find(((*(yR99 *)rt_nil_check(F.p3016))).f_text) == ((void *)0))))) {
yr3008_ImportLater(((*(yR99 *)rt_nil_check(F.p3016))).f_text, ((*(yR99 *)rt_nil_check(F.p3016))).f_line);
}
F.v7196 = yr1737_Real(yr1684_Lookup(((*(yR99 *)rt_nil_check(F.p3016))).f_text, ((*(yR99 *)rt_nil_check(F.p3016))).f_line));
if ((!(((*(yR119 *)rt_nil_check(F.v7196))).f_kind == v863))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3016))).f_line, ((*(yR99 *)rt_nil_check(F.p3016))).f_text, y_str(" is not a module", 16));
}
F.v7194 = ((*(yR119 *)rt_nil_check(F.v7196))).f_members;
while ((((!(F.v7194 == ((void *)0)))) && ((!(((*(yR119 *)rt_nil_check(F.v7194))).f_name == ((*(yR99 *)rt_nil_check(F.p3016))).f_name))))) {
F.v7194 = ((*(yR119 *)rt_nil_check(F.v7194))).f_mnext;
}
if ((F.v7194 == ((void *)0))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3016))).f_line, ((*(yR99 *)rt_nil_check(F.p3016))).f_name, y_str(" is not exported by that module", 31));
}
} else {
if (F.p3018) {
F.v7194 = yr1678_FindHere(((*(yR99 *)rt_nil_check(F.p3016))).f_name);
} else {
F.v7194 = yr1672_Find(((*(yR99 *)rt_nil_check(F.p3016))).f_name);
}
if ((((F.v7194 == ((void *)0))) && (!F.p3018))) {
yr3008_ImportLater(((*(yR99 *)rt_nil_check(F.p3016))).f_name, ((*(yR99 *)rt_nil_check(F.p3016))).f_line);
F.v7194 = yr1672_Find(((*(yR99 *)rt_nil_check(F.p3016))).f_name);
}
if ((F.v7194 == ((void *)0))) {
if (F.p3018) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3016))).f_line, ((*(yR99 *)rt_nil_check(F.p3016))).f_name, y_str(" is not declared in this module", 31));
} else {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3016))).f_line, ((*(yR99 *)rt_nil_check(F.p3016))).f_name, y_str(" is not declared around this module (X.B.2)", 43));
}
}
}
F.v7200 = ((*(yR99 *)rt_nil_check(F.p3016))).f_name;
if ((!(((*(yR99 *)rt_nil_check(F.p3016))).f_ival == INT64_C(0)))) {
F.v7200 = rt_range(((*(yR99 *)rt_nil_check(F.p3016))).f_ival, INT64_C(0), INT64_C(4000000));
}
F.v7196 = yr1737_Real(F.v7194);
if ((((((*(yR119 *)rt_nil_check(F.v7196))).f_kind == v863)) && ((((*(yR99 *)rt_nil_check(F.p3016))).f_text == INT64_C(0))))) {
if ((((!(F.v7204 == INT64_C(0)))) || ((!(((*(yR99 *)rt_nil_check(F.p3016))).f_ival == INT64_C(0)))))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3016))).f_line, y_str("a module name in a list takes no attribute and no AS (X.B.3)", 60));
}
F.v7198 = ((*(yR119 *)rt_nil_check(F.v7196))).f_members;
while ((!(F.v7198 == ((void *)0)))) {
F.v7194 = yr2983_Alias(((*(yR119 *)rt_nil_check(F.v7198))).f_name, F.v7198);
((*(yR119 *)rt_nil_check(F.v7194))).f_mnext = (*F.p3017);
(*F.p3017) = F.v7194;
F.v7198 = ((*(yR119 *)rt_nil_check(F.v7198))).f_mnext;
}
if ((!F.p3018)) {
F.v7194 = yr2983_Alias(((*(yR119 *)rt_nil_check(F.v7196))).f_name, F.v7196);
((*(yR119 *)rt_nil_check(F.v7194))).f_mnext = (*F.p3017);
(*F.p3017) = F.v7194;
}
return;
}
F.v7198 = yr2983_Alias(F.v7200, F.v7194);
if (F.p3018) {
if ((((((*(yR119 *)rt_nil_check(F.v7196))).f_kind == v851)) || ((((*(yR119 *)rt_nil_check(F.v7196))).f_kind == v854)))) {
if ((((F.v7204 == v413)) || ((F.v7204 == v467)))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3016))).f_line, y_str("READONLY and VAR are for variables", 34));
}
if ((((!(F.v7204 == v458))) || ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v7196))).f_rep))).f_opaque)) {
F.v7202 = yr1774_CopyRep(((*(yR119 *)rt_nil_check(F.v7196))).f_rep);
((*(yR104 *)rt_nil_check(F.v7202))).f_opaque = 1;
((*(yR104 *)rt_nil_check(F.v7202))).f_opaqueops = v2998;
((*(yR119 *)rt_nil_check(F.v7198))).f_target = yr1648_NewSym(((*(yR119 *)rt_nil_check(F.v7196))).f_kind, ((*(yR119 *)rt_nil_check(F.v7196))).f_name);
((*(yR119 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v7198))).f_target))).f_rep = F.v7202;
((*(yR119 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v7198))).f_target))).f_decl = ((*(yR119 *)rt_nil_check(F.v7196))).f_decl;
} else {
yr2990_AddLits(&(*F.p3017), ((*(yR119 *)rt_nil_check(F.v7196))).f_rep, INT64_C(0));
}
} else if ((((*(yR119 *)rt_nil_check(F.v7196))).f_kind == v845)) {
if ((((F.v7204 == v380)) || ((F.v7204 == v458)))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3016))).f_line, y_str("OPAQUE and TRANSPARENT are for types", 36));
}
if ((!(F.v7204 == v467))) {
((*(yR119 *)rt_nil_check(F.v7198))).f_readonly = 1;
}
} else if ((!(F.v7204 == INT64_C(0)))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3016))).f_line, y_str("an attribute is for a type, a representation or a variable", 58));
}
if ((((((*(yR119 *)rt_nil_check(F.v7196))).f_kind == v845)) && ((((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v7196))).f_rep))).f_kind == v821)) || yr1817_HoldsSignal(((*(yR119 *)rt_nil_check(F.v7196))).f_rep))))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3016))).f_line, y_str("a signal may not be exported from its monitor (X.E.4)", 53));
}
} else if ((((((*(yR119 *)rt_nil_check(F.v7196))).f_kind == v851)) || ((((*(yR119 *)rt_nil_check(F.v7196))).f_kind == v854)))) {
yr2990_AddLits(&(*F.p3017), ((*(yR119 *)rt_nil_check(F.v7196))).f_rep, INT64_C(0));
}
((*(yR119 *)rt_nil_check(F.v7198))).f_mnext = (*F.p3017);
(*F.p3017) = F.v7198;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3023_DefineAll(void * a_p3024, rt_int a_p3025) {
struct yf3026 F;
memset((void *)&F, 0, sizeof F);
F.p3024 = a_p3024;
F.p3025 = a_p3025;
F.v7229 = F.p3024;
F.v7231 = F.p3024;
F.v7233 = F.p3024;
while ((!(F.v7229 == ((void *)0)))) {
F.v7231 = ((*(yR119 *)rt_nil_check(F.v7229))).f_mnext;
F.v7233 = yr1678_FindHere(((*(yR119 *)rt_nil_check(F.v7229))).f_name);
if ((((F.v7233 == ((void *)0))) || ((!(yr1737_Real(F.v7233) == yr1737_Real(F.v7229)))))) {
if (((((!(F.v7233 == ((void *)0)))) && ((((*(yR119 *)rt_nil_check(yr1737_Real(F.v7229)))).f_kind == v857))) && ((((*(yR119 *)rt_nil_check(yr1737_Real(F.v7233)))).f_kind == v857)))) {
yr1704_Define(F.v7229, F.p3025);
} else if ((F.v7233 == ((void *)0))) {
yr1704_Define(F.v7229, F.p3025);
} else {
yr1152_FailN(F.p3025, ((*(yR119 *)rt_nil_check(F.v7229))).f_name, y_str(" comes into this scope twice", 28));
}
}
F.v7229 = F.v7231;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3030_CompileModule(void * a_p3031) {
struct yf3032 F;
memset((void *)&F, 0, sizeof F);
F.p3031 = a_p3031;
F.v7262 = 0;
((*(yR99 *)rt_nil_check(F.p3031))).f_ival = INT64_C(1);
F.v7238 = ((void *)0);
F.v7254 = ((*(yR99 *)rt_nil_check(F.p3031))).f_a;
while ((!(F.v7254 == ((void *)0)))) {
yr3015_ResolveItem(F.v7254, &F.v7238, 0);
F.v7254 = ((*(yR99 *)rt_nil_check(F.v7254))).f_next;
}
F.v7248 = v2970;
if ((((((*(yR99 *)rt_nil_check(F.p3031))).f_flag == INT64_C(1))) && ((v2970 == ((void *)0))))) {
F.v7250 = yr1648_NewSym(v845, ((*(yR99 *)rt_nil_check(F.p3031))).f_name);
((*(yR119 *)rt_nil_check(F.v7250))).f_level = v1623;
((*(yR119 *)rt_nil_check(F.v7250))).f_cname = yr1166_Fresh(y_str("mon", 3));
((*(yR119 *)rt_nil_check(F.v7250))).f_rep = v1749;
yr1724_DeclStorage(yr1041_T(y_str("ymon", 4)), ((*(yR119 *)rt_nil_check(F.v7250))).f_cname);
yr1112_Emit(yr2860_Join(yr1041_T(y_str("y_mon_init(&", 12)), yr1711_Path(v1623, ((*(yR119 *)rt_nil_check(F.v7250))).f_cname), yr1041_T(y_str(");", 2))));
v2970 = F.v7250;
F.v7262 = 1;
}
yr1655_OpenScope(1);
((void * *)(v2981).p)[y_ix1(v2981, v1617)] = ((void *)0);
F.v7258 = v1620;
v1620 = v1617;
yr3023_DefineAll(F.v7238, ((*(yR99 *)rt_nil_check(F.p3031))).f_line);
yr2964_Declarations(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3031))).f_c))).f_a);
if (F.v7262) {
yr1112_Emit(yr2860_Join(yr1041_T(y_str("y_mon_enter(&", 13)), yr1711_Path(((*(yR119 *)rt_nil_check(v2970))).f_level, ((*(yR119 *)rt_nil_check(v2970))).f_cname), yr1041_T(y_str(");", 2))));
}
v2682 = rt_range(rt_add(v2682, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2669).p)[y_ix1(v2669, v2682)] = INT64_C(0);
yr2796_BlockStatements(((*(yR99 *)rt_nil_check(F.p3031))).f_c);
v2682 = rt_range(rt_sub(v2682, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (F.v7262) {
yr1112_Emit(yr2860_Join(yr1041_T(y_str("y_mon_leave(&", 13)), yr1711_Path(((*(yR119 *)rt_nil_check(v2970))).f_level, ((*(yR119 *)rt_nil_check(v2970))).f_cname), yr1041_T(y_str(");", 2))));
}
v2998 = INT64_C(0);
F.v7254 = ((*(yR99 *)rt_nil_check(F.p3031))).f_b;
while ((!(F.v7254 == ((void *)0)))) {
if ((((((*(yR99 *)rt_nil_check(F.v7254))).f_text == INT64_C(0))) && ((yr1678_FindHere(((*(yR99 *)rt_nil_check(F.v7254))).f_name) == ((void *)0))))) {
if ((((*(yR99 *)rt_nil_check(F.v7254))).f_name == v515)) {
v2998 = rt_range(rt_add(v2998, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((((((*(yR99 *)rt_nil_check(F.v7254))).f_name == v569)) || ((((*(yR99 *)rt_nil_check(F.v7254))).f_name == v554)))) {
if (((rt_div(v2998, INT64_C(2))) == INT64_C(0))) {
v2998 = rt_range(rt_add(v2998, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
}
F.v7254 = ((*(yR99 *)rt_nil_check(F.v7254))).f_next;
}
F.v7240 = ((void *)0);
F.v7254 = ((*(yR99 *)rt_nil_check(F.p3031))).f_b;
while ((!(F.v7254 == ((void *)0)))) {
yr3015_ResolveItem(F.v7254, &F.v7240, 1);
F.v7254 = ((*(yR99 *)rt_nil_check(F.v7254))).f_next;
}
F.v7256 = ((void * *)(v2981).p)[y_ix1(v2981, v1617)];
v1620 = F.v7258;
yr1661_CloseScope();
while ((!(F.v7256 == ((void *)0)))) {
F.v7254 = ((*(yR99 *)rt_nil_check(F.v7256))).f_next;
((*(yR99 *)rt_nil_check(F.v7256))).f_next = ((void * *)(v2981).p)[y_ix1(v2981, v1617)];
((void * *)(v2981).p)[y_ix1(v2981, v1617)] = F.v7256;
F.v7256 = F.v7254;
}
v2970 = F.v7248;
F.v7244 = yr1648_NewSym(v863, ((*(yR99 *)rt_nil_check(F.p3031))).f_name);
((*(yR119 *)rt_nil_check(F.v7244))).f_members = F.v7240;
yr1704_Define(F.v7244, ((*(yR99 *)rt_nil_check(F.p3031))).f_line);
F.v7246 = F.v7240;
F.v7240 = ((void *)0);
while ((!(F.v7246 == ((void *)0)))) {
F.v7252 = ((*(yR119 *)rt_nil_check(F.v7246))).f_mnext;
F.v7242 = yr2983_Alias(((*(yR119 *)rt_nil_check(F.v7246))).f_name, F.v7246);
((*(yR119 *)rt_nil_check(F.v7242))).f_readonly = ((*(yR119 *)rt_nil_check(F.v7246))).f_readonly;
((*(yR119 *)rt_nil_check(F.v7242))).f_mnext = F.v7240;
F.v7240 = F.v7242;
F.v7246 = F.v7252;
}
((*(yR119 *)rt_nil_check(F.v7244))).f_members = F.v7240;
((*(yR99 *)rt_nil_check(F.p3031))).f_ival = INT64_C(2);
F.v7246 = F.v7240;
while ((!(F.v7246 == ((void *)0)))) {
F.v7252 = yr2983_Alias(((*(yR119 *)rt_nil_check(F.v7246))).f_name, F.v7246);
((*(yR119 *)rt_nil_check(F.v7252))).f_readonly = ((*(yR119 *)rt_nil_check(F.v7246))).f_readonly;
if ((yr1678_FindHere(((*(yR119 *)rt_nil_check(F.v7246))).f_name) == ((void *)0))) {
yr1704_Define(F.v7252, ((*(yR99 *)rt_nil_check(F.p3031))).f_line);
} else if ((((((*(yR119 *)rt_nil_check(yr1678_FindHere(((*(yR119 *)rt_nil_check(F.v7246))).f_name)))).f_kind == v878)) && ((!(yr1737_Real(yr1678_FindHere(((*(yR119 *)rt_nil_check(F.v7246))).f_name)) == yr1737_Real(F.v7246)))))) {
yr1704_Define(F.v7252, ((*(yR99 *)rt_nil_check(F.p3031))).f_line);
} else if ((!(((*(yR119 *)rt_nil_check(yr1737_Real(F.v7246)))).f_kind == v857))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3031))).f_line, ((*(yR119 *)rt_nil_check(F.v7246))).f_name, y_str(" is exported into a scope that has it already", 45));
}
F.v7246 = ((*(yR119 *)rt_nil_check(F.v7246))).f_mnext;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3036_DeclareTemplate(void * a_p3037) {
struct yf3038 F;
memset((void *)&F, 0, sizeof F);
F.p3037 = a_p3037;
F.v7297 = yr1648_NewSym(v866, ((*(yR99 *)rt_nil_check(F.p3037))).f_name);
((*(yR119 *)rt_nil_check(F.v7297))).f_decl = F.p3037;
yr1704_Define(F.v7297, ((*(yR99 *)rt_nil_check(F.p3037))).f_line);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3042_Instantiate(void * a_p3043) {
struct yf3044 F;
memset((void *)&F, 0, sizeof F);
F.p3043 = a_p3043;
F.v7301 = yr1737_Real(yr1684_Lookup(((*(yR99 *)rt_nil_check(F.p3043))).f_name, ((*(yR99 *)rt_nil_check(F.p3043))).f_line));
if ((!(((*(yR119 *)rt_nil_check(F.v7301))).f_kind == v866))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3043))).f_line, ((*(yR99 *)rt_nil_check(F.p3043))).f_name, y_str(" is not a template", 18));
}
F.v7303 = ((*(yR119 *)rt_nil_check(F.v7301))).f_decl;
if ((!(yr1305_Count(((*(yR99 *)rt_nil_check(F.v7303))).f_a) == yr1305_Count(((*(yR99 *)rt_nil_check(F.p3043))).f_a)))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3043))).f_line, ((*(yR99 *)rt_nil_check(F.p3043))).f_name, y_str(": the number of actuals is wrong", 32));
}
F.v7309 = rt_range(rt_add(v1179, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo7325 = ((*(yR99 *)rt_nil_check(F.v7303))).f_ival;
F.hi7326 = rt_sub(((*(yR99 *)rt_nil_check(F.v7303))).f_flag, INT64_C(1));
{ rt_int hi7330 = F.hi7326;
for (rt_int i7329 = F.lo7325; i7329 <= hi7330; i7329++) { F.c_7328 = i7329;
F.v7313 = ((rt_int *)(v1173).p)[y_ix1(v1173, F.c_7328)];
F.v7315 = ((rt_int *)(v1175).p)[y_ix1(v1175, F.c_7328)];
if ((F.v7313 == v191)) {
F.v7305 = ((*(yR99 *)rt_nil_check(F.v7303))).f_a;
F.v7307 = ((*(yR99 *)rt_nil_check(F.p3043))).f_a;
while ((!(F.v7305 == ((void *)0)))) {
if ((((((*(yR99 *)rt_nil_check(F.v7305))).f_name == F.v7315)) && ((F.v7313 == v191)))) {
if ((((*(yR99 *)rt_nil_check(F.v7307))).f_flag == INT64_C(1))) {
F.v7313 = v200;
F.v7315 = ((*(yR99 *)rt_nil_check(F.v7307))).f_ival;
} else {
F.v7315 = ((*(yR99 *)rt_nil_check(F.v7307))).f_name;
if ((F.v7315 <= v476)) {
F.v7313 = v194;
} else if ((F.v7315 <= v605)) {
F.v7313 = v197;
}
}
}
F.v7305 = ((*(yR99 *)rt_nil_check(F.v7305))).f_next;
F.v7307 = ((*(yR99 *)rt_nil_check(F.v7307))).f_next;
}
}
v1179 = rt_range(rt_add(v1179, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1173).p)[y_ix1(v1173, v1179)] = F.v7313;
((rt_int *)(v1175).p)[y_ix1(v1175, v1179)] = F.v7315;
((rt_int *)(v1177).p)[y_ix1(v1177, v1179)] = ((rt_int *)(v1177).p)[y_ix1(v1177, F.c_7328)];
if (i7329 == hi7330) break;
}}
v1179 = rt_range(rt_add(v1179, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1173).p)[y_ix1(v1173, v1179)] = v188;
((rt_int *)(v1175).p)[y_ix1(v1175, v1179)] = INT64_C(0);
((rt_int *)(v1177).p)[y_ix1(v1177, v1179)] = ((*(yR99 *)rt_nil_check(F.p3043))).f_line;
F.v7311 = v1279;
v1279 = F.v7309;
F.v7317 = yr1395_ParseModule();
v1279 = F.v7311;
yr3030_CompileModule(F.v7317);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3048_DeclareProcess(void * a_p3049) {
struct yf3050 F;
memset((void *)&F, 0, sizeof F);
F.p3049 = a_p3049;
F.v7340 = ((*(yR99 *)rt_nil_check(F.p3049))).f_sym;
((*(yR119 *)rt_nil_check(F.v7340))).f_monitor = v2970;
yr1724_DeclStorage(yr1041_T(y_str("rt_taskdecl", 11)), yr2860_Join(((*(yR119 *)rt_nil_check(F.v7340))).f_cname, yr1041_T(y_str("_d", 2)), INT64_C(0)));
F.v7342 = yr1290_NewNode(v653, ((*(yR99 *)rt_nil_check(F.p3049))).f_line);
((*(yR99 *)rt_nil_check(F.v7342))).f_sym = F.v7340;
((*(yR99 *)rt_nil_check(F.v7342))).f_next = ((void * *)(v2981).p)[y_ix1(v2981, v1617)];
((void * *)(v2981).p)[y_ix1(v2981, v1617)] = F.v7342;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3054_AwaitProcesses(void) {
struct yf3055 F;
memset((void *)&F, 0, sizeof F);
F.v7348 = ((void * *)(v2981).p)[y_ix1(v2981, v1617)];
while ((!(F.v7348 == ((void *)0)))) {
yr1112_Emit(yr2860_Join(yr1041_T(y_str("rt_await_decl(&", 15)), yr1711_Path(rt_range(rt_sub(((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7348))).f_sym))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr2860_Join(((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7348))).f_sym))).f_cname, yr1041_T(y_str("_d", 2)), INT64_C(0))), yr1041_T(y_str(");", 2))));
F.v7348 = ((*(yR99 *)rt_nil_check(F.v7348))).f_next;
}
((void * *)(v2981).p)[y_ix1(v2981, v1617)] = ((void *)0);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3059_Activate(void * a_p3060, void * a_p3061) {
struct yf3062 F;
memset((void *)&F, 0, sizeof F);
F.p3060 = a_p3060;
F.p3061 = a_p3061;
F.v7379 = ((*(yR119 *)rt_nil_check(F.p3061))).f_decl;
yr2539_CompileArgs(((*(yR99 *)rt_nil_check(F.p3060))).f_a, F.p3061, &F.v7359, &F.v7361);
if ((!(F.v7361 == ((*(yR119 *)rt_nil_check(F.p3061))).f_nparams))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3060))).f_line, ((*(yR119 *)rt_nil_check(F.p3061))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
F.v7367 = yr1166_Fresh(y_str("pf", 2));
yr1112_Emit(yr2860_Join(yr1041_T(y_str("{ struct ", 9)), ((*(yR119 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.p3061))).f_members))).f_name, yr2860_Join(yr1041_T(y_str(" *", 2)), F.v7367, yr2860_Join(yr1041_T(y_str(" = rt_alloc(sizeof *", 20)), F.v7367, yr1041_T(y_str(");", 2))))));
if ((((*(yR119 *)rt_nil_check(F.p3061))).f_level > INT64_C(1))) {
yr1112_Emit(yr2860_Join(F.v7367, yr1041_T(y_str("->up = ", 7)), yr2860_Join(yr1718_FramePtr(rt_range(rt_sub(((*(yR119 *)rt_nil_check(F.p3061))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))), yr1041_T(y_str(";", 1)), INT64_C(0))));
}
F.v7365 = ((*(yR119 *)rt_nil_check(F.p3061))).f_params;
F.v7363 = rt_range(rt_add(F.v7359, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(F.v7365 == ((void *)0)))) {
if ((!yr2518_Fits(((*(yR114 *)rt_nil_check(F.v7365))).f_rep, ((void * *)(v2502).p)[y_ix1(v2502, F.v7363)]))) {
yr1854_TypeClash(((*(yR99 *)rt_nil_check(((void * *)(v2513).p)[y_ix1(v2513, F.v7363)]))).f_line, ((*(yR114 *)rt_nil_check(F.v7365))).f_rep, ((void * *)(v2502).p)[y_ix1(v2502, F.v7363)]);
}
F.v7373 = yr2860_Join(F.v7367, yr1041_T(y_str("->", 2)), ((*(yR114 *)rt_nil_check(F.v7365))).f_cname);
yr2548_CheckUnresolved(((*(yR114 *)rt_nil_check(F.v7365))).f_rep, ((void * *)(v2502).p)[y_ix1(v2502, F.v7363)], ((*(yR99 *)rt_nil_check(((void * *)(v2513).p)[y_ix1(v2513, F.v7363)]))).f_line);
if ((((*(yR114 *)rt_nil_check(F.v7365))).f_cls == v887)) {
if ((!yr2344_IsVariable(((void * *)(v2513).p)[y_ix1(v2513, F.v7363)]))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(((void * *)(v2513).p)[y_ix1(v2513, F.v7363)]))).f_line, ((*(yR114 *)rt_nil_check(F.v7365))).f_name, y_str(": the actual of a VAR parameter must be a variable", 50));
}
if ((!yr2556_SameAsFormal(((*(yR114 *)rt_nil_check(F.v7365))).f_rep, ((void * *)(v2502).p)[y_ix1(v2502, F.v7363)]))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(((void * *)(v2513).p)[y_ix1(v2513, F.v7363)]))).f_line, ((*(yR114 *)rt_nil_check(F.v7365))).f_name, y_str(": a VAR actual has the representation of its formal (VII.G, X.A.2)", 66));
}
yr1112_Emit(yr2860_Join(F.v7373, yr1041_T(y_str(" = &", 4)), yr2860_Join(((rt_int *)(v2491).p)[y_ix1(v2491, F.v7363)], yr1041_T(y_str(";", 1)), INT64_C(0))));
} else if (yr1804_Deep(((*(yR114 *)rt_nil_check(F.v7365))).f_rep)) {
F.v7369 = yr1166_Fresh(y_str("t", 1));
yr1112_Emit(yr2860_Join(yr1041_T(y_str("{ ", 2)), yr1829_CType(((*(yR114 *)rt_nil_check(F.v7365))).f_rep), yr2860_Join(yr1041_T(y_str(" ", 1)), F.v7369, yr2860_Join(yr1041_T(y_str(" = ", 3)), yr2316_Convert(((rt_int *)(v2491).p)[y_ix1(v2491, F.v7363)], ((*(yR114 *)rt_nil_check(F.v7365))).f_rep, ((void * *)(v2502).p)[y_ix1(v2502, F.v7363)]), yr1041_T(y_str(";", 1))))));
if ((((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v7365))).f_rep))).f_kind == v827)) {
yr1112_Emit(yr2860_Join(yr1041_T(y_str("y_copy(y_desc_vector(", 21)), yr1835_DescOf(((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v7365))).f_rep))).f_elem), yr2860_Join(yr1041_T(y_str("), &", 4)), F.v7373, yr2860_Join(yr1041_T(y_str(", &", 3)), F.v7369, yr1041_T(y_str("); }", 4))))));
} else {
yr1112_Emit(yr2860_Join(yr1041_T(y_str("y_copy(", 7)), yr1835_DescOf(((*(yR114 *)rt_nil_check(F.v7365))).f_rep), yr2860_Join(yr1041_T(y_str(", &", 3)), F.v7373, yr2860_Join(yr1041_T(y_str(", &", 3)), F.v7369, yr1041_T(y_str("); }", 4))))));
}
} else {
yr1112_Emit(yr2860_Join(F.v7373, yr1041_T(y_str(" = ", 3)), yr2860_Join(yr2316_Convert(((rt_int *)(v2491).p)[y_ix1(v2491, F.v7363)], ((*(yR114 *)rt_nil_check(F.v7365))).f_rep, ((void * *)(v2502).p)[y_ix1(v2502, F.v7363)]), yr1041_T(y_str(";", 1)), INT64_C(0))));
}
F.v7363 = rt_range(rt_add(F.v7363, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7365 = ((*(yR114 *)rt_nil_check(F.v7365))).f_next;
}
v2515 = F.v7359;
F.v7375 = yr1041_T(y_str("0", 1));
if ((!(((*(yR99 *)rt_nil_check(F.v7379))).f_e == ((void *)0)))) {
yr2383_Expr(((*(yR99 *)rt_nil_check(F.v7379))).f_e, v1743, &F.v7375, &F.v7381);
yr1862_CheckType(((*(yR99 *)rt_nil_check(F.v7379))).f_line, v1743, F.v7381);
}
F.v7377 = yr1041_T(y_str("0, 0", 4));
if ((!(((*(yR99 *)rt_nil_check(F.v7379))).f_d == ((void *)0)))) {
yr2383_Expr(((*(yR99 *)rt_nil_check(F.v7379))).f_d, v1743, &F.v7371, &F.v7381);
yr1862_CheckType(((*(yR99 *)rt_nil_check(F.v7379))).f_line, v1743, F.v7381);
F.v7377 = yr2860_Join(yr1041_T(y_str("1, ", 3)), F.v7371, INT64_C(0));
}
yr1006_SB();
yr1017_SA(y_str("y_create(&", 10));
yr1024_ST(yr1711_Path(rt_range(rt_sub(((*(yR119 *)rt_nil_check(F.p3061))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr2860_Join(((*(yR119 *)rt_nil_check(F.p3061))).f_cname, yr1041_T(y_str("_d", 2)), INT64_C(0))));
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.v7375);
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.v7377);
yr1017_SA(y_str(", ", 2));
yr1024_ST(((*(yR119 *)rt_nil_check(F.p3061))).f_cname);
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.v7367);
yr1017_SA(y_str("); }", 4));
F.v7369 = yr1036_SE();
yr1112_Emit(F.v7369);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3066_MonitorPath(void * a_p3067) {
struct yf3068 F;
memset((void *)&F, 0, sizeof F);
F.p3067 = a_p3067;
{ rt_int rv7438 = yr2860_Join(yr1041_T(y_str("&", 1)), yr1711_Path(((*(yR119 *)rt_nil_check(F.p3067))).f_level, ((*(yR119 *)rt_nil_check(F.p3067))).f_cname), INT64_C(0));
return rv7438; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3072_EnterMonitor(void * a_p3073) {
struct yf3074 F;
memset((void *)&F, 0, sizeof F);
F.p3073 = a_p3073;
if ((((*(yR119 *)rt_nil_check(F.p3073))).f_kind == v860)) {
((*(yR119 *)rt_nil_check(F.p3073))).f_monitor = v2970;
}
if ((((*(yR119 *)rt_nil_check(F.p3073))).f_monitor == ((void *)0))) {
return;
}
yr1112_Emit(yr2860_Join(yr1041_T(y_str("y_mon_enter(", 12)), yr3066_MonitorPath(((*(yR119 *)rt_nil_check(F.p3073))).f_monitor), yr1041_T(y_str(");", 2))));
F.v7442 = yr1166_Fresh(y_str("mf", 2));
v2758 = 1;
yr1112_Emit(yr2860_Join(yr1041_T(y_str("rt_frame ", 9)), F.v7442, yr1041_T(y_str(";", 1))));
yr1006_SB();
yr1017_SA(y_str("if (!RT_TRY(", 12));
yr1024_ST(F.v7442);
yr1017_SA(y_str(")) { RT_POP(", 12));
yr1024_ST(F.v7442);
yr1017_SA(y_str("); ", 3));
if ((((*(yR119 *)rt_nil_check(F.p3073))).f_kind == v869)) {
yr1017_SA(y_str("y_mon_drop(", 11));
} else {
yr1017_SA(y_str("y_mon_leave(", 12));
}
yr1024_ST(yr3066_MonitorPath(((*(yR119 *)rt_nil_check(F.p3073))).f_monitor));
yr1017_SA(y_str("); rt_raise(rt_xcur); }", 23));
yr1112_Emit(yr1036_SE());
v2654 = rt_range(rt_add(v2654, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2652).p)[y_ix1(v2652, v2654)] = F.v7442;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3078_LeaveMonitor(void) {
struct yf3079 F;
memset((void *)&F, 0, sizeof F);
if ((v2729 == ((void *)0))) {
return;
}
if ((((*(yR119 *)rt_nil_check(v2729))).f_monitor == ((void *)0))) {
return;
}
if ((((*(yR119 *)rt_nil_check(v2729))).f_kind == v869)) {
yr1112_Emit(yr2860_Join(yr1041_T(y_str("y_mon_drop(", 11)), yr3066_MonitorPath(((*(yR119 *)rt_nil_check(v2729))).f_monitor), yr1041_T(y_str(");", 2))));
} else {
yr1112_Emit(yr2860_Join(yr1041_T(y_str("y_mon_leave(", 12)), yr3066_MonitorPath(((*(yR119 *)rt_nil_check(v2729))).f_monitor), yr1041_T(y_str(");", 2))));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3083_TerminateStatement(void * a_p3084) {
struct yf3085 F;
memset((void *)&F, 0, sizeof F);
F.p3084 = a_p3084;
if ((((v2729 == ((void *)0))) || ((!(((*(yR119 *)rt_nil_check(v2729))).f_kind == v869))))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3084))).f_line, y_str("TERMINATE_PROCESS ends a process (IX.A.7)", 41));
}
yr3054_AwaitProcesses();
yr3078_LeaveMonitor();
yr2779_PopTo(v2657);
yr1118_EmitS(y_str("return;", 7));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3089_DeclareSignal(void * a_p3090, rt_int a_p3091) {
struct yf3092 F;
memset((void *)&F, 0, sizeof F);
F.p3090 = a_p3090;
F.p3091 = a_p3091;
if ((v2970 == ((void *)0))) {
yr1144_FailS(F.p3091, y_str("signal variables are declared in a monitor (X.E.4)", 50));
}
((*(yR119 *)rt_nil_check(F.p3090))).f_rep = yr1774_CopyRep(((*(yR119 *)rt_nil_check(F.p3090))).f_rep);
((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.p3090))).f_rep))).f_monitor = v2970;
yr1112_Emit(yr2860_Join(yr1041_T(y_str("y_sig_init(&", 12)), yr1731_SymPath(F.p3090), yr2860_Join(yr1041_T(y_str(", ", 2)), yr3066_MonitorPath(v2970), yr1041_T(y_str(");", 2)))));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3096_DeclareSignalArray(void * a_p3097, rt_int a_p3098) {
struct yf3099 F;
memset((void *)&F, 0, sizeof F);
F.p3097 = a_p3097;
F.p3098 = a_p3098;
if ((v2970 == ((void *)0))) {
yr1144_FailS(F.p3098, y_str("signal variables are declared in a monitor (X.E.4)", 50));
}
yr1112_Emit(yr2860_Join(yr1041_T(y_str("y_sig_init_all(", 15)), yr1835_DescOf(((*(yR119 *)rt_nil_check(F.p3097))).f_rep), yr2860_Join(yr1041_T(y_str(", &", 3)), yr1731_SymPath(F.p3097), yr2860_Join(yr1041_T(y_str(", ", 2)), yr3066_MonitorPath(v2970), yr1041_T(y_str(");", 2))))));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3103_DeviceSignal(void * a_p3104, void * a_p3105) {
struct yf3106 F;
memset((void *)&F, 0, sizeof F);
F.p3104 = a_p3104;
F.p3105 = a_p3105;
yr2235_Manifest(F.p3105, &F.v7485, &F.v7487);
if ((!F.v7485)) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3105))).f_line, y_str("an AT location is a manifest constant (XIV.VII)", 47));
}
yr1006_SB();
yr1017_SA(y_str("y_device(&", 10));
yr1024_ST(yr1731_SymPath(F.p3104));
yr1017_SA(y_str(", ", 2));
yr1030_SI(F.v7487);
yr1017_SA(y_str(");", 2));
F.v7489 = yr1036_SE();
yr1112_Emit(F.v7489);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3110_Arg(void * a_p3111, rt_int a_p3112) {
struct yf3113 F;
memset((void *)&F, 0, sizeof F);
F.p3111 = a_p3111;
F.p3112 = a_p3112;
F.v7498 = ((*(yR99 *)rt_nil_check(F.p3111))).f_a;
F.v7500 = INT64_C(1);
while ((((!(F.v7498 == ((void *)0)))) && ((F.v7500 < F.p3112)))) {
F.v7498 = ((*(yR99 *)rt_nil_check(F.v7498))).f_next;
F.v7500 = rt_range(rt_add(F.v7500, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v7498 == ((void *)0))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3111))).f_line, ((*(yR99 *)rt_nil_check(F.p3111))).f_name, y_str(": too few actual parameters", 27));
}
{ void * rv7505 = F.v7498;
return rv7505; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3117_NArgs(void * a_p3118, rt_int a_p3119) {
struct yf3120 F;
memset((void *)&F, 0, sizeof F);
F.p3118 = a_p3118;
F.p3119 = a_p3119;
if ((!(yr1305_Count(((*(yR99 *)rt_nil_check(F.p3118))).f_a) == F.p3119))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3118))).f_line, ((*(yR99 *)rt_nil_check(F.p3118))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3124_Call1(yarr a_p3126, rt_int a_p3127) {
struct yf3128 F;
memset((void *)&F, 0, sizeof F);
F.p3126 = a_p3126;
F.p3127 = a_p3127;
yr1006_SB();
yr1017_SA(F.p3126);
yr1017_SA(y_str("(", 1));
yr1024_ST(F.p3127);
yr1017_SA(y_str(")", 1));
{ rt_int rv7515 = yr1036_SE();
return rv7515; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3132_Addr(rt_int a_p3133) {
struct yf3134 F;
memset((void *)&F, 0, sizeof F);
F.p3133 = a_p3133;
{ rt_int rv7520 = yr2860_Join(yr1041_T(y_str("&", 1)), F.p3133, INT64_C(0));
return rv7520; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3138_StdVar(void * a_p3139, rt_int a_p3140, rt_int * a_p3141, void * * a_p3142) {
struct yf3143 F;
memset((void *)&F, 0, sizeof F);
F.p3139 = a_p3139;
F.p3140 = a_p3140;
F.p3141_o = a_p3141;
F.p3142_o = a_p3142;
yr2356_LValue(F.p3139, &F.p3141, &F.p3142);
if ((((!(F.p3140 == v842))) && ((!(((*(yR104 *)rt_nil_check(F.p3142))).f_kind == F.p3140))))) {
yr1006_SB();
yr1017_SA(y_str("a ", 2));
if ((F.p3140 == v815)) {
yr1017_SA(y_str("file", 4));
} else if ((F.p3140 == v821)) {
yr1017_SA(y_str("signal", 6));
} else if ((F.p3140 == v824)) {
yr1017_SA(y_str("SEMAPHORE", 9));
} else if ((F.p3140 == v812)) {
yr1017_SA(y_str("pointer", 7));
} else {
yr1017_SA(y_str("variable", 8));
}
yr1017_SA(y_str(" is needed here", 15));
F.v7527 = yr1036_SE();
yr1137_Fail(((*(yR99 *)rt_nil_check(F.p3139))).f_line, F.v7527);
}
(*F.p3141_o) = F.p3141;
(*F.p3142_o) = F.p3142;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3147_NumArg(void * a_p3148, rt_int * a_p3149, void * * a_p3150) {
struct yf3151 F;
memset((void *)&F, 0, sizeof F);
F.p3148 = a_p3148;
F.p3149_o = a_p3149;
F.p3150_o = a_p3150;
yr2383_Expr(F.p3148, ((void *)0), &F.p3149, &F.p3150);
if ((!yr1786_IsNumeric(F.p3150))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3148))).f_line, y_str("a number is needed here", 23));
}
(*F.p3149_o) = F.p3149;
(*F.p3150_o) = F.p3150;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3155_IntArg(void * a_p3156) {
struct yf3157 F;
memset((void *)&F, 0, sizeof F);
F.p3156 = a_p3156;
yr2383_Expr(F.p3156, v1743, &F.v7543, &F.v7545);
if ((!(((*(yR104 *)rt_nil_check(F.v7545))).f_kind == v788))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3156))).f_line, y_str("an integer is needed here", 25));
}
{ rt_int rv7547 = F.v7543;
return rv7547; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3161_CodeInsert(void * a_p3162) {
struct yf3163 F;
memset((void *)&F, 0, sizeof F);
F.p3162 = a_p3162;
F.v7551 = yr3110_Arg(F.p3162, INT64_C(1));
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1)}; y_desc_array(&F.yd_7577, 1, lo, hi, &y_d_int); }
y_init(&F.yd_7577, &F.v7579);
if ((!(((*(yR99 *)rt_nil_check(F.v7551))).f_kind == v755))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3162))).f_line, y_str("a code insert takes a string literal (XIV.XI.5)", 47));
}
F.v7554 = ((*(yR99 *)rt_nil_check(F.v7551))).f_text;
F.v7564 = ((rt_int *)(v904).p)[y_ix1(v904, F.v7554)];
yr1006_SB();
F.v7560 = INT64_C(1);
while ((F.v7560 <= F.v7564)) {
F.v7566 = yr1083_TChar(F.v7554, F.v7560);
if ((F.v7566 == 39)) {
F.v7562 = rt_range(rt_add(F.v7560, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1083_TChar(F.v7554, F.v7562) == 39))) {
F.v7562 = rt_range(rt_add(F.v7562, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v7556 = yr1048_Intern(rt_range(rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.v7554)], F.v7560), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v7562, F.v7560)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1011_SC(((unsigned char *)(v960).p)[y_ix1(v960, yr2218_CharValue(v1747, F.v7556, ((*(yR99 *)rt_nil_check(F.p3162))).f_line))]);
F.v7560 = rt_range(rt_add(F.v7562, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v7566 == 36)) {
F.v7562 = rt_range(rt_add(F.v7560, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((F.v7562 <= F.v7564)) && ((yr988_IsLetter(yr1083_TChar(F.v7554, F.v7562)) || yr994_IsDigit(yr1083_TChar(F.v7554, F.v7562)))))) {
F.v7562 = rt_range(rt_add(F.v7562, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v7556 = yr1048_Intern(rt_range(rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.v7554)], F.v7560), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v7562, F.v7560)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v7568 = yr1672_Find(F.v7556);
if ((F.v7568 == ((void *)0))) {
v925 = INT64_C(0);
v939 = INT64_C(0);
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3162))).f_line, F.v7556, y_str(" in a code insert is not declared here", 38));
}
F.v7568 = yr1737_Real(F.v7568);
if ((((!(((*(yR119 *)rt_nil_check(F.v7568))).f_kind == v845))) && ((!(((*(yR119 *)rt_nil_check(F.v7568))).f_kind == v848))))) {
v925 = INT64_C(0);
v939 = INT64_C(0);
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3162))).f_line, F.v7556, y_str(" in a code insert is not a variable or constant", 47));
}
yr1024_ST(yr2364_Paren(yr1731_SymPath(F.v7568)));
F.v7560 = F.v7562;
} else {
yr1011_SC(F.v7566);
F.v7560 = rt_range(rt_add(F.v7560, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
F.v7558 = yr1036_SE();
yr1112_Emit(F.v7558);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3167_ManifestScale(void * a_p3168, void * a_p3169) {
struct yf3170 F;
memset((void *)&F, 0, sizeof F);
F.p3168 = a_p3168;
F.p3169 = a_p3169;
yr2301_ManifestFix(F.p3168, &F.v7615, &F.v7617, &F.v7619);
if (((!F.v7615) || ((F.v7617 <= INT64_C(0))))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3169))).f_line, ((*(yR99 *)rt_nil_check(F.p3169))).f_name, y_str(": the scale is a positive manifest constant (XI)", 48));
}
F.v7621 = yr1774_CopyRep(v1757);
((*(yR104 *)rt_nil_check(F.v7621))).f_abstract = 0;
yr1976_SetScale(F.v7621, F.v7617, F.v7619);
{ void * rv7625 = F.v7621;
return rv7625; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3174_StdCall(rt_int a_p3175, void * a_p3176, rt_int a_p3177, rt_int * a_p3178, void * * a_p3179) {
struct yf3180 F;
memset((void *)&F, 0, sizeof F);
F.p3175 = a_p3175;
F.p3176 = a_p3176;
F.p3177 = a_p3177;
F.p3178_o = a_p3178;
F.p3179_o = a_p3179;
F.p3179 = v1749;
F.p3178 = yr1041_T(y_str("((void)0)", 9));
F.v7661 = ((((((((((((((((F.p3175 == v2109)) || ((F.p3175 == v2112))) || ((F.p3175 == v2115))) || ((F.p3175 == v2118))) || ((F.p3175 == v2121))) || ((F.p3175 == v2127))) || ((F.p3175 == v2136))) || ((F.p3175 == v2142))) || ((F.p3175 == v2145))) || ((F.p3175 == v2169))) || ((F.p3175 == v2172))) || ((F.p3175 == v2181))) || ((F.p3175 == v2184))) || ((F.p3175 == v2187))) || ((F.p3175 == v2190)));
if ((F.p3177 && (!F.v7661))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3176))).f_line, ((*(yR99 *)rt_nil_check(F.p3176))).f_name, y_str(" returns a value: it is called in an expression", 47));
}
if (((!F.p3177) && F.v7661)) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3176))).f_line, ((*(yR99 *)rt_nil_check(F.p3176))).f_name, y_str(" returns no value", 17));
}
if ((((F.p3175 == v2091)) || ((F.p3175 == v2094)))) {
yr3117_NArgs(F.p3176, INT64_C(2));
yr2383_Expr(yr3110_Arg(F.p3176, INT64_C(1)), ((void *)0), &F.v7633, &F.v7643);
if ((!yr1792_IsArrayLike(F.v7643))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3176))).f_line, ((*(yR99 *)rt_nil_check(F.p3176))).f_name, y_str(" of something that is not an array", 34));
}
F.v7635 = yr3155_IntArg(yr3110_Arg(F.p3176, INT64_C(2)));
yr2235_Manifest(yr3110_Arg(F.p3176, INT64_C(2)), &F.v7657, &F.v7655);
F.p3179 = yr2427_Unbounded(v1743);
if ((F.v7657 && ((((*(yR104 *)rt_nil_check(F.v7643))).f_kind == v806)))) {
if ((((F.v7655 < INT64_C(1))) || ((F.v7655 > ((*(yR104 *)rt_nil_check(F.v7643))).f_nidx)))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3176))).f_line, y_str("no such dimension", 17));
}
F.v7649 = ((*(yR104 *)rt_nil_check(F.v7643))).f_idx;
F.lo7675 = INT64_C(2);
F.hi7676 = F.v7655;
{ rt_int hi7680 = F.hi7676;
for (rt_int i7679 = F.lo7675; i7679 <= hi7680; i7679++) { F.c_7678 = i7679;
F.v7649 = ((*(yR104 *)rt_nil_check(F.v7649))).f_link;
if (i7679 == hi7680) break;
}}
F.p3179 = F.v7649;
}
if ((F.p3175 == v2091)) {
F.p3178 = yr2433_Call2(y_str("y_low", 5), F.v7633, F.v7635);
} else {
F.p3178 = yr2433_Call2(y_str("y_high", 6), F.v7633, F.v7635);
}
(*F.p3178_o) = F.p3178;
(*F.p3179_o) = F.p3179;
return;
}
if ((((((F.p3175 == v2097)) || ((F.p3175 == v2100))) || ((F.p3175 == v2103))) || ((F.p3175 == v2106)))) {
yr3117_NArgs(F.p3176, INT64_C(1));
yr2383_Expr(yr3110_Arg(F.p3176, INT64_C(1)), ((void *)0), &F.v7633, &F.v7643);
if ((!yr1780_IsDiscrete(F.v7643))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3176))).f_line, ((*(yR99 *)rt_nil_check(F.p3176))).f_name, y_str(" of something that is not integer or scalar", 43));
}
if ((((((*(yR104 *)rt_nil_check(F.v7643))).f_kind == v797)) || ((((((*(yR104 *)rt_nil_check(F.v7643))).f_kind == v800)) && (!((*(yR104 *)rt_nil_check(F.v7643))).f_ordered))))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3176))).f_line, ((*(yR99 *)rt_nil_check(F.p3176))).f_name, y_str(" applies to integers, ordered enumerations and alphabets, not UNORDERED ones (XI)", 81));
}
if ((!(((*(yR104 *)rt_nil_check(F.v7643))).f_elem == ((void *)0)))) {
F.v7643 = ((*(yR104 *)rt_nil_check(F.v7643))).f_elem;
}
if ((((((F.p3175 == v2103)) || ((F.p3175 == v2106)))) && ((((*(yR104 *)rt_nil_check(F.v7643))).f_kind == v788)))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3176))).f_line, y_str("FIRST and LAST apply to ordered enumerations and alphabets (XI)", 63));
}
if ((F.p3175 == v2103)) {
F.p3179 = F.v7643;
F.p3178 = yr1910_LoText(F.v7643);
} else if ((F.p3175 == v2106)) {
F.p3179 = F.v7643;
F.p3178 = yr1916_HiText(F.v7643);
} else {
F.p3179 = yr2427_Unbounded(F.v7643);
yr1006_SB();
if ((!(((*(yR104 *)rt_nil_check(F.v7643))).f_kind == v788))) {
yr1017_SA(y_str("rt_range(", 9));
}
if ((F.p3175 == v2097)) {
yr1017_SA(y_str("rt_add(", 7));
} else {
yr1017_SA(y_str("rt_sub(", 7));
}
yr1024_ST(F.v7633);
yr1017_SA(y_str(", 1)", 4));
if ((!(((*(yR104 *)rt_nil_check(F.v7643))).f_kind == v788))) {
yr1017_SA(y_str(", 0, ", 5));
yr1030_SI(rt_range(rt_sub(((*(yR104 *)rt_nil_check(F.v7643))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1017_SA(y_str(")", 1));
}
F.p3178 = yr1036_SE();
}
(*F.p3178_o) = F.p3178;
(*F.p3179_o) = F.p3179;
return;
}
if ((F.p3175 == v2109)) {
yr3117_NArgs(F.p3176, INT64_C(1));
yr3138_StdVar(yr3110_Arg(F.p3176, INT64_C(1)), v812, &F.v7633, &F.v7643);
if ((((*(yR104 *)rt_nil_check(F.v7643))).f_elem == ((void *)0))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3176))).f_line, ((*(yR104 *)rt_nil_check(F.v7643))).f_forward, y_str(" is not declared", 16));
}
F.v7649 = ((*(yR104 *)rt_nil_check(F.v7643))).f_elem;
yr1006_SB();
yr1017_SA(y_str("({ ", 3));
yr1024_ST(F.v7633);
yr1017_SA(y_str(" = rt_alloc(sizeof(", 19));
yr1024_ST(yr1829_CType(F.v7649));
yr1017_SA(y_str("));", 3));
if (yr1804_Deep(F.v7649)) {
yr1017_SA(y_str(" y_init(", 8));
yr1024_ST(yr1835_DescOf(F.v7649));
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.v7633);
yr1017_SA(y_str(");", 2));
}
yr1017_SA(y_str(" })", 3));
F.p3178 = yr1036_SE();
(*F.p3178_o) = F.p3178;
(*F.p3179_o) = F.p3179;
return;
}
if ((F.p3175 == v2187)) {
yr3117_NArgs(F.p3176, INT64_C(1));
yr3138_StdVar(yr3110_Arg(F.p3176, INT64_C(1)), v812, &F.v7633, &F.v7643);
F.p3178 = yr2860_Join(yr1041_T(y_str("({ free(", 8)), F.v7633, yr2860_Join(yr1041_T(y_str("); ", 3)), F.v7633, yr1041_T(y_str(" = 0; })", 8))));
(*F.p3178_o) = F.p3178;
(*F.p3179_o) = F.p3179;
return;
}
if ((F.p3175 == v2112)) {
yr3117_NArgs(F.p3176, INT64_C(3));
yr3138_StdVar(yr3110_Arg(F.p3176, INT64_C(1)), v815, &F.v7633, &F.v7643);
yr2383_Expr(yr3110_Arg(F.p3176, INT64_C(2)), v1747, &F.v7635, &F.v7645);
if ((!yr1798_IsString(F.v7645))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3176))).f_line, y_str("OPEN takes the name of the file as a string (XII.A)", 51));
}
yr2383_Expr(yr3110_Arg(F.p3176, INT64_C(3)), v3184, &F.v7637, &F.v7647);
yr1862_CheckType(((*(yR99 *)rt_nil_check(F.p3176))).f_line, v3184, F.v7647);
yr1006_SB();
yr1017_SA(y_str("y_open(&", 8));
yr1024_ST(F.v7633);
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.v7635);
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.v7637);
yr1017_SA(y_str(")", 1));
F.p3178 = yr1036_SE();
(*F.p3178_o) = F.p3178;
(*F.p3179_o) = F.p3179;
return;
}
if ((((F.p3175 == v2115)) || ((F.p3175 == v2124)))) {
yr3117_NArgs(F.p3176, INT64_C(1));
yr3138_StdVar(yr3110_Arg(F.p3176, INT64_C(1)), v815, &F.v7633, &F.v7643);
if ((F.p3175 == v2115)) {
F.p3178 = yr3124_Call1(y_str("y_close", 7), yr3132_Addr(F.v7633));
} else {
F.p3179 = v1745;
F.p3178 = yr3124_Call1(y_str("y_check_eof", 11), yr3132_Addr(F.v7633));
}
(*F.p3178_o) = F.p3178;
(*F.p3179_o) = F.p3179;
return;
}
if ((F.p3175 == v2118)) {
yr3117_NArgs(F.p3176, INT64_C(2));
yr3138_StdVar(yr3110_Arg(F.p3176, INT64_C(1)), v815, &F.v7633, &F.v7643);
yr3138_StdVar(yr3110_Arg(F.p3176, INT64_C(2)), v842, &F.v7635, &F.v7645);
yr1862_CheckType(((*(yR99 *)rt_nil_check(F.p3176))).f_line, ((*(yR104 *)rt_nil_check(F.v7643))).f_elem, F.v7645);
if ((yr1804_Deep(F.v7645) || ((((*(yR104 *)rt_nil_check(F.v7645))).f_kind == v812)))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3176))).f_line, y_str("files of this implementation hold no arrays or pointers", 55));
}
yr1006_SB();
yr1017_SA(y_str("({ ", 3));
yr1024_ST(yr1829_CType(F.v7645));
yr1017_SA(y_str(" g; y_get(&", 11));
yr1024_ST(F.v7633);
yr1017_SA(y_str(", &g, sizeof g); ", 17));
yr1024_ST(F.v7635);
yr1017_SA(y_str(" = ", 3));
yr1024_ST(yr2316_Convert(yr1041_T(y_str("g", 1)), F.v7645, ((*(yR104 *)rt_nil_check(F.v7643))).f_elem));
yr1017_SA(y_str("; })", 4));
F.p3178 = yr1036_SE();
(*F.p3178_o) = F.p3178;
(*F.p3179_o) = F.p3179;
return;
}
if ((F.p3175 == v2121)) {
yr3117_NArgs(F.p3176, INT64_C(2));
yr3138_StdVar(yr3110_Arg(F.p3176, INT64_C(1)), v815, &F.v7633, &F.v7643);
yr2383_Expr(yr3110_Arg(F.p3176, INT64_C(2)), ((*(yR104 *)rt_nil_check(F.v7643))).f_elem, &F.v7635, &F.v7645);
yr1862_CheckType(((*(yR99 *)rt_nil_check(F.p3176))).f_line, ((*(yR104 *)rt_nil_check(F.v7643))).f_elem, F.v7645);
if ((yr1804_Deep(F.v7645) || ((((*(yR104 *)rt_nil_check(F.v7645))).f_kind == v812)))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3176))).f_line, y_str("files of this implementation hold no arrays or pointers", 55));
}
yr1006_SB();
yr1017_SA(y_str("({ ", 3));
yr1024_ST(yr1829_CType(((*(yR104 *)rt_nil_check(F.v7643))).f_elem));
yr1017_SA(y_str(" pv = ", 6));
yr1024_ST(yr2316_Convert(F.v7635, ((*(yR104 *)rt_nil_check(F.v7643))).f_elem, F.v7645));
yr1017_SA(y_str("; y_put(&", 9));
yr1024_ST(F.v7633);
yr1017_SA(y_str(", &pv, sizeof pv); })", 21));
F.p3178 = yr1036_SE();
(*F.p3178_o) = F.p3178;
(*F.p3179_o) = F.p3179;
return;
}
if ((F.p3175 == v2127)) {
F.v7651 = yr1305_Count(((*(yR99 *)rt_nil_check(F.p3176))).f_a);
if ((((F.v7651 < INT64_C(5))) || ((!((rt_mod((rt_sub(F.v7651, INT64_C(2))), INT64_C(3))) == INT64_C(0)))))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3176))).f_line, y_str("MOVE takes an object, an index and triples", 42));
}
yr3138_StdVar(yr3110_Arg(F.p3176, INT64_C(1)), v842, &F.v7633, &F.v7643);
if (((!((((((*(yR104 *)rt_nil_check(F.v7643))).f_kind == v806)) || ((((*(yR104 *)rt_nil_check(F.v7643))).f_kind == v827))))) || ((!(((*(yR104 *)rt_nil_check(F.v7643))).f_nidx == INT64_C(1)))))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3176))).f_line, y_str("MOVE works on one-dimensional arrays", 36));
}
F.v7635 = yr3155_IntArg(yr3110_Arg(F.p3176, INT64_C(2)));
F.v7641 = yr1166_Fresh(y_str("at", 2));
yr1006_SB();
yr1017_SA(y_str("({ rt_int ", 10));
yr1024_ST(F.v7641);
yr1017_SA(y_str(" = ", 3));
yr1024_ST(F.v7635);
yr1017_SA(y_str(";", 1));
F.p3178 = yr1036_SE();
F.v7653 = INT64_C(3);
while ((F.v7653 < F.v7651)) {
yr2383_Expr(yr3110_Arg(F.p3176, F.v7653), ((*(yR104 *)rt_nil_check(F.v7643))).f_elem, &F.v7637, &F.v7647);
if (((!yr1792_IsArrayLike(F.v7647)) || (!yr1847_SameType(((*(yR104 *)rt_nil_check(F.v7643))).f_elem, ((*(yR104 *)rt_nil_check(F.v7647))).f_elem)))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3176))).f_line, y_str("MOVE: the components differ in type", 35));
}
F.v7639 = yr3155_IntArg(yr3110_Arg(F.p3176, rt_range(rt_add(F.v7653, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v7635 = yr3155_IntArg(yr3110_Arg(F.p3176, rt_range(rt_add(F.v7653, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr1006_SB();
yr1024_ST(F.p3178);
yr1017_SA(y_str(" { rt_int mi = ", 15));
yr1024_ST(F.v7639);
yr1017_SA(y_str(", mj = ", 7));
yr1024_ST(F.v7635);
yr1017_SA(y_str("; y_move(&", 10));
yr1024_ST(F.v7633);
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.v7641);
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.v7637);
yr1017_SA(y_str(", mi, mj, ", 10));
yr1024_ST(yr1835_DescOf(((*(yR104 *)rt_nil_check(F.v7643))).f_elem));
yr1017_SA(y_str("); if (mj >= mi) ", 17));
yr1024_ST(F.v7641);
yr1017_SA(y_str(" += mj - mi + 1; }", 18));
F.p3178 = yr1036_SE();
F.v7653 = rt_range(rt_add(F.v7653, INT64_C(3)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.p3178 = yr2860_Join(F.p3178, yr1041_T(y_str(" })", 3)), INT64_C(0));
(*F.p3178_o) = F.p3178;
(*F.p3179_o) = F.p3179;
return;
}
if ((((F.p3175 == v2130)) || ((F.p3175 == v2133)))) {
yr3117_NArgs(F.p3176, INT64_C(2));
F.v7633 = yr2830_Cond(yr3110_Arg(F.p3176, INT64_C(1)));
F.v7635 = yr2830_Cond(yr3110_Arg(F.p3176, INT64_C(2)));
F.p3179 = v1745;
if ((F.p3175 == v2130)) {
F.p3178 = yr2442_Infix(yr2364_Paren(yr2442_Infix(F.v7633, y_str("!=", 2), yr1041_T(y_str("0", 1)))), y_str("&", 1), yr2364_Paren(yr2442_Infix(F.v7635, y_str("!=", 2), yr1041_T(y_str("0", 1)))));
} else {
F.p3178 = yr2442_Infix(yr2364_Paren(yr2442_Infix(F.v7633, y_str("!=", 2), yr1041_T(y_str("0", 1)))), y_str("|", 1), yr2364_Paren(yr2442_Infix(F.v7635, y_str("!=", 2), yr1041_T(y_str("0", 1)))));
}
(*F.p3178_o) = F.p3178;
(*F.p3179_o) = F.p3179;
return;
}
if ((F.p3175 == v2136)) {
yr3117_NArgs(F.p3176, INT64_C(1));
F.p3178 = yr3124_Call1(y_str("rt_delay", 8), yr3155_IntArg(yr3110_Arg(F.p3176, INT64_C(1))));
(*F.p3178_o) = F.p3178;
(*F.p3179_o) = F.p3179;
return;
}
if ((F.p3175 == v2139)) {
yr3117_NArgs(F.p3176, INT64_C(0));
F.p3179 = yr2427_Unbounded(v1743);
F.p3178 = yr1041_T(y_str("rt_time()", 9));
(*F.p3178_o) = F.p3178;
(*F.p3179_o) = F.p3179;
return;
}
if (((((F.p3175 == v2142)) || ((F.p3175 == v2145))) || ((F.p3175 == v2148)))) {
yr3138_StdVar(yr3110_Arg(F.p3176, INT64_C(1)), v821, &F.v7633, &F.v7643);
if ((F.p3175 == v2142)) {
if ((yr1305_Count(((*(yR99 *)rt_nil_check(F.p3176))).f_a) == INT64_C(1))) {
F.v7635 = yr1041_T(y_str("1", 1));
} else {
yr3117_NArgs(F.p3176, INT64_C(2));
F.v7635 = yr3155_IntArg(yr3110_Arg(F.p3176, INT64_C(2)));
}
F.p3178 = yr2433_Call2(y_str("y_wait", 6), yr3132_Addr(F.v7633), F.v7635);
} else {
yr3117_NArgs(F.p3176, INT64_C(1));
if ((F.p3175 == v2145)) {
F.p3178 = yr3124_Call1(y_str("y_send", 6), yr3132_Addr(F.v7633));
} else {
F.p3179 = v1745;
F.p3178 = yr3124_Call1(y_str("y_awaited", 9), yr3132_Addr(F.v7633));
}
}
(*F.p3178_o) = F.p3178;
(*F.p3179_o) = F.p3179;
return;
}
if (((((F.p3175 == v2151)) || ((F.p3175 == v2154))) || ((F.p3175 == v2157)))) {
yr3117_NArgs(F.p3176, INT64_C(1));
yr3147_NumArg(yr3110_Arg(F.p3176, INT64_C(1)), &F.v7633, &F.v7643);
F.p3179 = yr2427_Unbounded(v1743);
if ((((*(yR104 *)rt_nil_check(F.v7643))).f_kind == v788)) {
F.p3178 = F.v7633;
} else if ((((*(yR104 *)rt_nil_check(F.v7643))).f_kind == v791)) {
yr1006_SB();
if ((F.p3175 == v2151)) {
yr1017_SA(y_str("y_fix_floor(", 12));
} else if ((F.p3175 == v2154)) {
yr1017_SA(y_str("y_fix_ceiling(", 14));
} else {
yr1017_SA(y_str("y_fix_near_integer(", 19));
}
yr1024_ST(F.v7633);
yr1017_SA(y_str(", INT64_C(", 10));
yr1030_SI(((*(yR104 *)rt_nil_check(F.v7643))).f_fsn);
yr1017_SA(y_str("), INT64_C(", 11));
yr1030_SI(((*(yR104 *)rt_nil_check(F.v7643))).f_fsd);
yr1017_SA(y_str("))", 2));
F.p3178 = yr1036_SE();
} else if ((F.p3175 == v2151)) {
F.p3178 = yr3124_Call1(y_str("y_floor", 7), F.v7633);
} else if ((F.p3175 == v2154)) {
F.p3178 = yr3124_Call1(y_str("y_ceiling", 9), F.v7633);
} else {
F.p3178 = yr3124_Call1(y_str("y_near_integer", 14), F.v7633);
}
(*F.p3178_o) = F.p3178;
(*F.p3179_o) = F.p3179;
return;
}
if ((F.p3175 == v2163)) {
yr3117_NArgs(F.p3176, INT64_C(1));
yr3147_NumArg(yr3110_Arg(F.p3176, INT64_C(1)), &F.v7633, &F.v7643);
F.p3179 = v1755;
if ((((*(yR104 *)rt_nil_check(F.v7643))).f_kind == v791)) {
F.p3178 = yr2466_FixToFloat(F.v7633, F.v7643);
} else {
F.p3178 = yr2860_Join(yr1041_T(y_str("((double)(", 10)), F.v7633, yr1041_T(y_str("))", 2)));
}
(*F.p3178_o) = F.p3178;
(*F.p3179_o) = F.p3179;
return;
}
if ((F.p3175 == v2160)) {
yr3117_NArgs(F.p3176, INT64_C(2));
yr3147_NumArg(yr3110_Arg(F.p3176, INT64_C(1)), &F.v7633, &F.v7643);
F.p3179 = yr3167_ManifestScale(yr3110_Arg(F.p3176, INT64_C(2)), F.p3176);
if ((((*(yR104 *)rt_nil_check(F.v7643))).f_kind == v794)) {
yr1006_SB();
yr1017_SA(y_str("y_fix_of_float(", 15));
yr1024_ST(F.v7633);
yr1017_SA(y_str(", INT64_C(", 10));
yr1030_SI(((*(yR104 *)rt_nil_check(F.p3179))).f_fsn);
yr1017_SA(y_str("), INT64_C(", 11));
yr1030_SI(((*(yR104 *)rt_nil_check(F.p3179))).f_fsd);
yr1017_SA(y_str("))", 2));
F.p3178 = yr1036_SE();
} else {
if ((((*(yR104 *)rt_nil_check(F.v7643))).f_kind == v788)) {
F.v7647 = yr1774_CopyRep(v1757);
yr1976_SetScale(F.v7647, INT64_C(1), INT64_C(1));
F.v7633 = yr2860_Join(yr1041_T(y_str("((yfix)(", 8)), F.v7633, yr1041_T(y_str("))", 2)));
} else {
F.v7647 = F.v7643;
}
yr1959_ScaleRatio(F.v7647, F.p3179, &F.v7639, &F.v7641, &F.v7657);
yr1006_SB();
yr1017_SA(y_str("y_fix_near(", 11));
yr1024_ST(F.v7633);
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.v7639);
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.v7641);
yr1017_SA(y_str(")", 1));
F.p3178 = yr1036_SE();
}
(*F.p3178_o) = F.p3178;
(*F.p3179_o) = F.p3179;
return;
}
if ((F.p3175 == v2166)) {
yr3117_NArgs(F.p3176, INT64_C(3));
yr3147_NumArg(yr3110_Arg(F.p3176, INT64_C(1)), &F.v7633, &F.v7643);
yr3147_NumArg(yr3110_Arg(F.p3176, INT64_C(2)), &F.v7635, &F.v7645);
if ((((!(((*(yR104 *)rt_nil_check(F.v7643))).f_kind == v791))) || ((!(((*(yR104 *)rt_nil_check(F.v7645))).f_kind == v791))))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3176))).f_line, y_str("FIXED_DIV divides fixed-point numbers (XI)", 42));
}
yr1862_CheckType(((*(yR99 *)rt_nil_check(F.p3176))).f_line, F.v7643, F.v7645);
F.p3179 = yr3167_ManifestScale(yr3110_Arg(F.p3176, INT64_C(3)), F.p3176);
((*(yR104 *)rt_nil_check(F.p3179))).f_tid = ((*(yR104 *)rt_nil_check(F.v7643))).f_tid;
((*(yR104 *)rt_nil_check(F.p3179))).f_tname = ((*(yR104 *)rt_nil_check(F.v7643))).f_tname;
F.v7647 = yr1774_CopyRep(v1757);
yr1976_SetScale(F.v7647, yr1943_MulChk(((*(yR104 *)rt_nil_check(F.v7645))).f_fsn, ((*(yR104 *)rt_nil_check(F.p3179))).f_fsn, ((*(yR99 *)rt_nil_check(F.p3176))).f_line), yr1943_MulChk(((*(yR104 *)rt_nil_check(F.v7645))).f_fsd, ((*(yR104 *)rt_nil_check(F.p3179))).f_fsd, ((*(yR99 *)rt_nil_check(F.p3176))).f_line));
yr1959_ScaleRatio(F.v7643, F.v7647, &F.v7639, &F.v7641, &F.v7657);
yr1006_SB();
yr1017_SA(y_str("y_fix_div(", 10));
yr1024_ST(F.v7633);
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.v7635);
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.v7639);
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.v7641);
yr1017_SA(y_str(")", 1));
F.p3178 = yr1036_SE();
(*F.p3178_o) = F.p3178;
(*F.p3179_o) = F.p3179;
return;
}
if (((((F.p3175 == v2169)) || ((F.p3175 == v2172))) || ((F.p3175 == v2175)))) {
yr3117_NArgs(F.p3176, INT64_C(1));
yr3138_StdVar(yr3110_Arg(F.p3176, INT64_C(1)), v824, &F.v7633, &F.v7643);
if ((F.p3175 == v2169)) {
F.p3178 = yr3124_Call1(y_str("rt_region_enter", 15), yr3132_Addr(F.v7633));
} else if ((F.p3175 == v2172)) {
F.p3178 = yr3124_Call1(y_str("rt_region_leave", 15), yr3132_Addr(F.v7633));
} else {
F.p3179 = v1745;
F.p3178 = yr3124_Call1(y_str("y_cond_claim", 12), yr3132_Addr(F.v7633));
}
(*F.p3178_o) = F.p3178;
(*F.p3179_o) = F.p3179;
return;
}
if ((F.p3175 == v2178)) {
yr3117_NArgs(F.p3176, INT64_C(0));
F.p3179 = yr2427_Unbounded(v1743);
F.p3178 = yr1041_T(y_str("y_self()", 8));
(*F.p3178_o) = F.p3178;
(*F.p3179_o) = F.p3179;
return;
}
if ((F.p3175 == v2181)) {
yr3117_NArgs(F.p3176, INT64_C(2));
F.p3178 = yr2433_Call2(y_str("y_change_priority", 17), yr3155_IntArg(yr3110_Arg(F.p3176, INT64_C(1))), yr3155_IntArg(yr3110_Arg(F.p3176, INT64_C(2))));
(*F.p3178_o) = F.p3178;
(*F.p3179_o) = F.p3179;
return;
}
if ((F.p3175 == v2184)) {
yr3117_NArgs(F.p3176, INT64_C(1));
F.p3178 = yr3124_Call1(y_str("y_raise_termination", 19), yr3155_IntArg(yr3110_Arg(F.p3176, INT64_C(1))));
(*F.p3178_o) = F.p3178;
(*F.p3179_o) = F.p3179;
return;
}
if ((F.p3175 == v2190)) {
yr3117_NArgs(F.p3176, INT64_C(1));
yr3161_CodeInsert(F.p3176);
(*F.p3178_o) = F.p3178;
(*F.p3179_o) = F.p3179;
return;
}
if ((((F.p3175 == v2193)) || ((F.p3175 == v2196)))) {
yr3117_NArgs(F.p3176, INT64_C(1));
yr2383_Expr(yr3110_Arg(F.p3176, INT64_C(1)), ((void *)0), &F.v7633, &F.v7643);
F.p3179 = yr2427_Unbounded(v1743);
if ((F.p3175 == v2193)) {
F.p3178 = yr2860_Join(yr1041_T(y_str("((rt_int)(intptr_t)&(", 21)), F.v7633, yr1041_T(y_str("))", 2)));
} else {
F.p3178 = yr2860_Join(yr1041_T(y_str("((rt_int)sizeof(", 16)), F.v7633, yr1041_T(y_str("))", 2)));
}
(*F.p3178_o) = F.p3178;
(*F.p3179_o) = F.p3179;
return;
}
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3176))).f_line, ((*(yR99 *)rt_nil_check(F.p3176))).f_name, y_str(" is not translated", 18));
(*F.p3178_o) = F.p3178;
(*F.p3179_o) = F.p3179;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3188_StdRep(yarr a_p3190, void * a_p3191) {
struct yf3192 F;
memset((void *)&F, 0, sizeof F);
F.p3190 = a_p3190;
F.p3191 = a_p3191;
F.v7868 = yr1648_NewSym(v854, yr1061_N(F.p3190));
((*(yR119 *)rt_nil_check(F.v7868))).f_rep = F.p3191;
yr1704_Define(F.v7868, INT64_C(0));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3196_StdOp(yarr a_p3198, rt_int a_p3199) {
struct yf3200 F;
memset((void *)&F, 0, sizeof F);
F.p3198 = a_p3198;
F.p3199 = a_p3199;
F.v7874 = yr1648_NewSym(v875, yr1061_N(F.p3198));
((*(yR119 *)rt_nil_check(F.v7874))).f_mval = F.p3199;
yr1704_Define(F.v7874, INT64_C(0));
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3204_LitList(yarr a_p3206, yarr a_p3207, yarr a_p3208, rt_int a_p3209) {
struct yf3210 F;
memset((void *)&F, 0, sizeof F);
F.p3206 = a_p3206;
F.p3207 = a_p3207;
F.p3208 = a_p3208;
F.p3209 = a_p3209;
F.v7882 = ((void *)0);
F.v7884 = ((void *)0);
F.v7886 = ((void *)0);
F.v7886 = yr1290_NewNode(v653, INT64_C(0));
((*(yR99 *)rt_nil_check(F.v7886))).f_name = yr1061_N(F.p3206);
yr1297_Link(&F.v7882, &F.v7884, F.v7886);
F.v7886 = yr1290_NewNode(v653, INT64_C(0));
((*(yR99 *)rt_nil_check(F.v7886))).f_name = yr1061_N(F.p3207);
yr1297_Link(&F.v7882, &F.v7884, F.v7886);
if (F.p3209) {
F.v7886 = yr1290_NewNode(v653, INT64_C(0));
((*(yR99 *)rt_nil_check(F.v7886))).f_name = yr1061_N(F.p3208);
yr1297_Link(&F.v7882, &F.v7884, F.v7886);
}
{ void * rv7890 = F.v7882;
return rv7890; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3214_Abstract(rt_int a_p3215, yarr a_p3217) {
struct yf3218 F;
memset((void *)&F, 0, sizeof F);
F.p3215 = a_p3215;
F.p3217 = a_p3217;
F.v7895 = yr1767_NewRep(F.p3215, yr1061_N(F.p3217));
((*(yR104 *)rt_nil_check(F.v7895))).f_abstract = 1;
{ void * rv7897 = F.v7895;
return rv7897; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3222_Predefine(void) {
struct yf3223 F;
memset((void *)&F, 0, sizeof F);
yr1655_OpenScope(0);
((void * *)(v2981).p)[y_ix1(v2981, v1617)] = ((void *)0);
v1743 = yr3214_Abstract(v788, y_str("INTEGER", 7));
v1757 = yr3214_Abstract(v791, y_str("FIXED", 5));
v1755 = yr3214_Abstract(v794, y_str("FLOATING", 8));
v1759 = yr1767_NewRep(v821, yr1061_N(y_str("SIGNAL", 6)));
v1761 = yr1767_NewRep(v824, yr1061_N(y_str("SEMAPHORE", 9)));
v1749 = yr1767_NewRep(v836, yr1061_N(y_str("no value", 8)));
v1763 = yr1767_NewRep(v842, yr1061_N(y_str("any", 3)));
v1745 = yr1767_NewRep(v797, yr1061_N(y_str("BOOLEAN", 7)));
((*(yR104 *)rt_nil_check(v1745))).f_lits = yr3204_LitList(y_str("FALSE", 5), y_str("TRUE", 4), y_str("", 0), 0);
((*(yR104 *)rt_nil_check(v1745))).f_nlits = INT64_C(2);
yr1997_SetRange(v1745, INT64_C(0), INT64_C(1));
yr1991_DefineLits(v1745);
v1747 = yr1767_NewRep(v803, yr1061_N(y_str("ASCII", 5)));
((*(yR104 *)rt_nil_check(v1747))).f_ordered = 1;
((*(yR104 *)rt_nil_check(v1747))).f_nlits = INT64_C(128);
yr1997_SetRange(v1747, INT64_C(0), INT64_C(127));
v3184 = yr1767_NewRep(v800, yr1061_N(y_str("OPEN_MODE", 9)));
((*(yR104 *)rt_nil_check(v3184))).f_lits = yr3204_LitList(y_str("READ", 4), y_str("WRITE", 5), y_str("APPEND", 6), 1);
((*(yR104 *)rt_nil_check(v3184))).f_nlits = INT64_C(3);
yr1997_SetRange(v3184, INT64_C(0), INT64_C(2));
yr1991_DefineLits(v3184);
yr3188_StdRep(y_str("INTEGER", 7), v1743);
yr3188_StdRep(y_str("FIXED", 5), v1757);
yr3188_StdRep(y_str("FLOATING", 8), v1755);
yr3188_StdRep(y_str("BOOLEAN", 7), v1745);
yr3188_StdRep(y_str("SIGNAL", 6), v1759);
yr3188_StdRep(y_str("SEMAPHORE", 9), v1761);
yr3188_StdRep(y_str("ASCII", 5), v1747);
yr3188_StdRep(y_str("STANDARD_ALPHABET", 17), v1747);
yr3188_StdRep(y_str("OPEN_MODE", 9), v3184);
yr3196_StdOp(y_str("LOW", 3), v2091);
yr3196_StdOp(y_str("HIGH", 4), v2094);
yr3196_StdOp(y_str("SUCC", 4), v2097);
yr3196_StdOp(y_str("PRED", 4), v2100);
yr3196_StdOp(y_str("FIRST", 5), v2103);
yr3196_StdOp(y_str("LAST", 4), v2106);
yr3196_StdOp(y_str("NEW", 3), v2109);
yr3196_StdOp(y_str("OPEN", 4), v2112);
yr3196_StdOp(y_str("CLOSE", 5), v2115);
yr3196_StdOp(y_str("GET", 3), v2118);
yr3196_StdOp(y_str("PUT", 3), v2121);
yr3196_StdOp(y_str("CHECK_EOF", 9), v2124);
yr3196_StdOp(y_str("MOVE", 4), v2127);
yr3196_StdOp(y_str("AND_LONG", 8), v2130);
yr3196_StdOp(y_str("OR_LONG", 7), v2133);
yr3196_StdOp(y_str("DELAY", 5), v2136);
yr3196_StdOp(y_str("CLOCK_TIME", 10), v2139);
yr3196_StdOp(y_str("WAIT", 4), v2142);
yr3196_StdOp(y_str("SEND", 4), v2145);
yr3196_StdOp(y_str("AWAITED", 7), v2148);
yr3196_StdOp(y_str("FLOOR", 5), v2151);
yr3196_StdOp(y_str("CEILING", 7), v2154);
yr3196_StdOp(y_str("NEAR_INTEGER", 12), v2157);
yr3196_StdOp(y_str("NEAR_FIXED", 10), v2160);
yr3196_StdOp(y_str("NEAR_FLOATING", 13), v2163);
yr3196_StdOp(y_str("FIXED_DIV", 9), v2166);
yr3196_StdOp(y_str("CLAIM", 5), v2169);
yr3196_StdOp(y_str("RELEASE", 7), v2172);
yr3196_StdOp(y_str("CONDITIONAL_CLAIM", 17), v2175);
yr3196_StdOp(y_str("PROCESS_IDENTITY", 16), v2178);
yr3196_StdOp(y_str("CHANGE_PRIORITY", 15), v2181);
yr3196_StdOp(y_str("RAISE_PROCESS_TERMINATION", 25), v2184);
yr3196_StdOp(y_str("FREE_POINTER", 12), v2187);
yr3196_StdOp(y_str("C_CODE_INSERT", 13), v2190);
yr3196_StdOp(y_str("ADDR", 4), v2193);
yr3196_StdOp(y_str("EXTENT", 6), v2196);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3227_Translate(void) {
struct yf3228 F;
memset((void *)&F, 0, sizeof F);
F.v7975 = v3186;
yr1655_OpenScope(0);
((void * *)(v2981).p)[y_ix1(v2981, v1617)] = ((void *)0);
v1623 = INT64_C(0);
((void * *)(v1646).p)[y_ix1(v1646, v1617)] = v3186;
while ((!(F.v7975 == ((void *)0)))) {
if ((((*(yR99 *)rt_nil_check(F.v7975))).f_ival == INT64_C(0))) {
yr3030_CompileModule(F.v7975);
}
F.v7975 = ((*(yR99 *)rt_nil_check(F.v7975))).f_next;
}
yr3054_AwaitProcesses();
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3232_WriteProgram(void) {
struct yf3233 F;
memset((void *)&F, 0, sizeof F);
yr1097_PutS(&v974, y_str("static void y_elaborate(void) {", 31));
yr1105_Append(&v974, &v976);
yr1097_PutS(&v974, y_str("}", 1));
yr1097_PutS(&v974, y_str("int main(int argc, char **argv) {", 33));
yr1097_PutS(&v974, y_str("y_lang();", 9));
yr1097_PutS(&v974, y_str("rt_init(argc, argv);", 20));
yr1097_PutS(&v974, y_str("y_elaborate();", 14));
yr1097_PutS(&v974, y_str("rt_main_done();", 15));
yr1097_PutS(&v974, y_str("return 0;", 9));
yr1097_PutS(&v974, y_str("}", 1));
yr1125_WriteTxt(yr1041_T(y_str("#include \"paleo.h\"", 18)));
({ unsigned char pv = 10; y_put(&v895, &pv, sizeof pv); });
yr1125_WriteTxt(yr1041_T(y_str("#include <math.h>", 17)));
({ unsigned char pv = 10; y_put(&v895, &pv, sizeof pv); });
yr1125_WriteTxt(yr1041_T(y_str("#include <string.h>", 19)));
({ unsigned char pv = 10; y_put(&v895, &pv, sizeof pv); });
yr1125_WriteTxt(yr1041_T(y_str("#include <stdlib.h>", 19)));
({ unsigned char pv = 10; y_put(&v895, &pv, sizeof pv); });
yr1131_WriteBuf(v962);
yr1131_WriteBuf(v964);
yr1131_WriteBuf(v966);
yr1131_WriteBuf(v968);
yr1131_WriteBuf(v970);
yr1131_WriteBuf(v972);
yr1131_WriteBuf(v974);
return;
rt_raise(Y_X_NO_RETURN);
}
static void y_elaborate(void) {
{ static const size_t o[] = {offsetof(yR99, f_kind), offsetof(yR99, f_line), offsetof(yR99, f_ival), offsetof(yR99, f_flag), offsetof(yR99, f_name), offsetof(yR99, f_text), offsetof(yR99, f_a), offsetof(yR99, f_b), offsetof(yR99, f_c), offsetof(yR99, f_d), offsetof(yR99, f_e), offsetof(yR99, f_next), offsetof(yR99, f_rep), offsetof(yR99, f_sym), 0}; const ydesc **f = rt_alloc(15 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_int; f[2] = &y_d_int; f[3] = &y_d_int; f[4] = &y_d_int; f[5] = &y_d_int; f[6] = &y_d_ptr; f[7] = &y_d_ptr; f[8] = &y_d_ptr; f[9] = &y_d_ptr; f[10] = &y_d_ptr; f[11] = &y_d_ptr; f[12] = &y_d_ptr; f[13] = &y_d_ptr; y_desc_record(&yd_100, sizeof(yR99), 14, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR104, f_kind), offsetof(yR104, f_tid), offsetof(yR104, f_tname), offsetof(yR104, f_lo), offsetof(yR104, f_hi), offsetof(yR104, f_mlo), offsetof(yR104, f_mhi), offsetof(yR104, f_hasm), offsetof(yR104, f_scale), offsetof(yR104, f_prec), offsetof(yR104, f_elem), offsetof(yR104, f_idx), offsetof(yR104, f_nidx), offsetof(yR104, f_link), offsetof(yR104, f_lits), offsetof(yR104, f_nlits), offsetof(yR104, f_fields), offsetof(yR104, f_selector), offsetof(yR104, f_cname), offsetof(yR104, f_dname), offsetof(yR104, f_dlevel), offsetof(yR104, f_deep), offsetof(yR104, f_abstract), offsetof(yR104, f_opaque), offsetof(yR104, f_opaqueops), offsetof(yR104, f_ordered), offsetof(yR104, f_forward), offsetof(yR104, f_fwdscope), offsetof(yR104, f_monitor), offsetof(yR104, f_serial), offsetof(yR104, f_sig), offsetof(yR104, f_fsn), offsetof(yR104, f_fsd), 0}; const ydesc **f = rt_alloc(34 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_int; f[2] = &y_d_int; f[3] = &y_d_int; f[4] = &y_d_int; f[5] = &y_d_int; f[6] = &y_d_int; f[7] = &y_d_int; f[8] = &y_d_int; f[9] = &y_d_int; f[10] = &y_d_ptr; f[11] = &y_d_ptr; f[12] = &y_d_int; f[13] = &y_d_ptr; f[14] = &y_d_ptr; f[15] = &y_d_int; f[16] = &y_d_ptr; f[17] = &y_d_ptr; f[18] = &y_d_int; f[19] = &y_d_int; f[20] = &y_d_int; f[21] = &y_d_int; f[22] = &y_d_int; f[23] = &y_d_int; f[24] = &y_d_int; f[25] = &y_d_int; f[26] = &y_d_int; f[27] = &y_d_int; f[28] = &y_d_ptr; f[29] = &y_d_int; f[30] = &y_d_int; f[31] = &y_d_int; f[32] = &y_d_int; y_desc_record(&yd_105, sizeof(yR104), 33, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR109, f_name), offsetof(yR109, f_rep), offsetof(yR109, f_isconst), offsetof(yR109, f_variant), offsetof(yR109, f_labels), offsetof(yR109, f_next), 0}; const ydesc **f = rt_alloc(7 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_ptr; f[2] = &y_d_int; f[3] = &y_d_int; f[4] = &y_d_ptr; f[5] = &y_d_ptr; y_desc_record(&yd_110, sizeof(yR109), 6, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR114, f_name), offsetof(yR114, f_cls), offsetof(yR114, f_rep), offsetof(yR114, f_cname), offsetof(yR114, f_next), 0}; const ydesc **f = rt_alloc(6 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_int; f[2] = &y_d_ptr; f[3] = &y_d_int; f[4] = &y_d_ptr; y_desc_record(&yd_115, sizeof(yR114), 5, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR119, f_kind), offsetof(yR119, f_name), offsetof(yR119, f_rep), offsetof(yR119, f_cname), offsetof(yR119, f_level), offsetof(yR119, f_byref), offsetof(yR119, f_readonly), offsetof(yR119, f_mval), offsetof(yR119, f_hasmv), offsetof(yR119, f_params), offsetof(yR119, f_nparams), offsetof(yR119, f_ret), offsetof(yR119, f_func), offsetof(yR119, f_decl), offsetof(yR119, f_depth), offsetof(yR119, f_target), offsetof(yR119, f_members), offsetof(yR119, f_mnext), offsetof(yR119, f_chain), offsetof(yR119, f_stack), offsetof(yR119, f_alt), offsetof(yR119, f_monitor), offsetof(yR119, f_serial), offsetof(yR119, f_calls), 0}; const ydesc **f = rt_alloc(25 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_int; f[2] = &y_d_ptr; f[3] = &y_d_int; f[4] = &y_d_int; f[5] = &y_d_int; f[6] = &y_d_int; f[7] = &y_d_int; f[8] = &y_d_int; f[9] = &y_d_ptr; f[10] = &y_d_int; f[11] = &y_d_ptr; f[12] = &y_d_int; f[13] = &y_d_ptr; f[14] = &y_d_int; f[15] = &y_d_ptr; f[16] = &y_d_ptr; f[17] = &y_d_ptr; f[18] = &y_d_ptr; f[19] = &y_d_ptr; f[20] = &y_d_ptr; f[21] = &y_d_ptr; f[22] = &y_d_int; f[23] = &y_d_ptr; y_desc_record(&yd_120, sizeof(yR119), 24, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR124, f_syms), offsetof(yR124, f_closed), offsetof(yR124, f_module), offsetof(yR124, f_level), offsetof(yR124, f_deferred), offsetof(yR124, f_up), 0}; const ydesc **f = rt_alloc(7 * sizeof *f); f[0] = &y_d_ptr; f[1] = &y_d_int; f[2] = &y_d_ptr; f[3] = &y_d_int; f[4] = &y_d_ptr; f[5] = &y_d_ptr; y_desc_record(&yd_125, sizeof(yR124), 6, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR129, f_t), offsetof(yR129, f_next), 0}; const ydesc **f = rt_alloc(3 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_ptr; y_desc_record(&yd_130, sizeof(yR129), 2, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR134, f_head), offsetof(yR134, f_tail), 0}; const ydesc **f = rt_alloc(3 * sizeof *f); f[0] = &y_d_ptr; f[1] = &y_d_ptr; y_desc_record(&yd_135, sizeof(yR134), 2, o, (const ydesc *const *)f); }
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(64000000)}; y_desc_array(&yd_145, 1, lo, hi, &y_d_byte); }
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4000000)}; y_desc_array(&yd_155, 1, lo, hi, &y_d_int); }
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(2000000)}; y_desc_array(&yd_165, 1, lo, hi, &y_d_int); }
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(262143)}; y_desc_array(&yd_175, 1, lo, hi, &y_d_int); }
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(8191)}; y_desc_array(&yd_185, 1, lo, hi, &y_d_ptr); }
v188 = INT64_C(0);
v191 = INT64_C(1);
v194 = INT64_C(2);
v197 = INT64_C(3);
v200 = INT64_C(4);
v203 = INT64_C(5);
v206 = INT64_C(6);
v209 = INT64_C(7);
v212 = INT64_C(8);
v215 = INT64_C(1);
v218 = INT64_C(2);
v221 = INT64_C(3);
v224 = INT64_C(4);
v227 = INT64_C(5);
v230 = INT64_C(6);
v233 = INT64_C(7);
v236 = INT64_C(8);
v239 = INT64_C(9);
v242 = INT64_C(10);
v245 = INT64_C(11);
v248 = INT64_C(12);
v251 = INT64_C(13);
v254 = INT64_C(14);
v257 = INT64_C(15);
v260 = INT64_C(16);
v263 = INT64_C(17);
v266 = INT64_C(18);
v269 = INT64_C(19);
v272 = INT64_C(20);
v275 = INT64_C(21);
v278 = INT64_C(22);
v281 = INT64_C(23);
v284 = INT64_C(24);
v287 = INT64_C(25);
v290 = INT64_C(26);
v293 = INT64_C(27);
v296 = INT64_C(28);
v299 = INT64_C(29);
v302 = INT64_C(30);
v305 = INT64_C(31);
v308 = INT64_C(32);
v311 = INT64_C(33);
v314 = INT64_C(34);
v317 = INT64_C(35);
v320 = INT64_C(36);
v323 = INT64_C(37);
v326 = INT64_C(38);
v329 = INT64_C(39);
v332 = INT64_C(40);
v335 = INT64_C(41);
v338 = INT64_C(42);
v341 = INT64_C(43);
v344 = INT64_C(44);
v347 = INT64_C(45);
v350 = INT64_C(46);
v353 = INT64_C(47);
v356 = INT64_C(48);
v359 = INT64_C(49);
v362 = INT64_C(50);
v365 = INT64_C(51);
v368 = INT64_C(52);
v371 = INT64_C(53);
v374 = INT64_C(54);
v377 = INT64_C(55);
v380 = INT64_C(56);
v383 = INT64_C(57);
v386 = INT64_C(58);
v389 = INT64_C(59);
v392 = INT64_C(60);
v395 = INT64_C(61);
v398 = INT64_C(62);
v401 = INT64_C(63);
v404 = INT64_C(64);
v407 = INT64_C(65);
v410 = INT64_C(66);
v413 = INT64_C(67);
v416 = INT64_C(68);
v419 = INT64_C(69);
v422 = INT64_C(70);
v425 = INT64_C(71);
v428 = INT64_C(72);
v431 = INT64_C(73);
v434 = INT64_C(74);
v437 = INT64_C(75);
v440 = INT64_C(76);
v443 = INT64_C(77);
v446 = INT64_C(78);
v449 = INT64_C(79);
v452 = INT64_C(80);
v455 = INT64_C(81);
v458 = INT64_C(82);
v461 = INT64_C(83);
v464 = INT64_C(84);
v467 = INT64_C(85);
v470 = INT64_C(86);
v473 = INT64_C(87);
v476 = INT64_C(87);
v479 = INT64_C(88);
v482 = INT64_C(89);
v485 = INT64_C(90);
v488 = INT64_C(91);
v491 = INT64_C(92);
v494 = INT64_C(93);
v497 = INT64_C(94);
v500 = INT64_C(95);
v503 = INT64_C(96);
v506 = INT64_C(97);
v509 = INT64_C(98);
v512 = INT64_C(99);
v515 = INT64_C(100);
v518 = INT64_C(101);
v521 = INT64_C(102);
v524 = INT64_C(103);
v527 = INT64_C(104);
v530 = INT64_C(105);
v533 = INT64_C(106);
v536 = INT64_C(107);
v539 = INT64_C(108);
v542 = INT64_C(109);
v545 = INT64_C(110);
v548 = INT64_C(111);
v551 = INT64_C(112);
v554 = INT64_C(113);
v557 = INT64_C(114);
v560 = INT64_C(115);
v563 = INT64_C(116);
v566 = INT64_C(117);
v569 = INT64_C(118);
v572 = INT64_C(119);
v575 = INT64_C(120);
v578 = INT64_C(121);
v581 = INT64_C(122);
v584 = INT64_C(123);
v587 = INT64_C(124);
v590 = INT64_C(125);
v593 = INT64_C(126);
v596 = INT64_C(127);
v599 = INT64_C(128);
v602 = INT64_C(129);
v605 = INT64_C(129);
v608 = INT64_C(1);
v611 = INT64_C(2);
v614 = INT64_C(3);
v617 = INT64_C(4);
v620 = INT64_C(5);
v623 = INT64_C(6);
v626 = INT64_C(7);
v629 = INT64_C(8);
v632 = INT64_C(9);
v635 = INT64_C(10);
v638 = INT64_C(11);
v641 = INT64_C(12);
v644 = INT64_C(13);
v647 = INT64_C(14);
v650 = INT64_C(15);
v653 = INT64_C(16);
v656 = INT64_C(20);
v659 = INT64_C(21);
v662 = INT64_C(22);
v665 = INT64_C(23);
v668 = INT64_C(24);
v671 = INT64_C(25);
v674 = INT64_C(26);
v677 = INT64_C(27);
v680 = INT64_C(28);
v683 = INT64_C(29);
v686 = INT64_C(30);
v689 = INT64_C(31);
v692 = INT64_C(32);
v695 = INT64_C(33);
v698 = INT64_C(40);
v701 = INT64_C(41);
v704 = INT64_C(42);
v707 = INT64_C(43);
v710 = INT64_C(44);
v713 = INT64_C(45);
v716 = INT64_C(46);
v719 = INT64_C(47);
v722 = INT64_C(48);
v725 = INT64_C(49);
v728 = INT64_C(50);
v731 = INT64_C(51);
v734 = INT64_C(52);
v737 = INT64_C(53);
v740 = INT64_C(54);
v743 = INT64_C(60);
v746 = INT64_C(61);
v749 = INT64_C(62);
v752 = INT64_C(63);
v755 = INT64_C(64);
v758 = INT64_C(65);
v761 = INT64_C(66);
v764 = INT64_C(67);
v767 = INT64_C(68);
v770 = INT64_C(69);
v773 = INT64_C(70);
v776 = INT64_C(71);
v779 = INT64_C(72);
v782 = INT64_C(73);
v785 = INT64_C(74);
v788 = INT64_C(1);
v791 = INT64_C(2);
v794 = INT64_C(3);
v797 = INT64_C(4);
v800 = INT64_C(5);
v803 = INT64_C(6);
v806 = INT64_C(7);
v809 = INT64_C(8);
v812 = INT64_C(9);
v815 = INT64_C(10);
v818 = INT64_C(11);
v821 = INT64_C(12);
v824 = INT64_C(13);
v827 = INT64_C(14);
v830 = INT64_C(15);
v833 = INT64_C(16);
v836 = INT64_C(17);
v839 = INT64_C(18);
v842 = INT64_C(19);
v845 = INT64_C(1);
v848 = INT64_C(2);
v851 = INT64_C(3);
v854 = INT64_C(4);
v857 = INT64_C(5);
v860 = INT64_C(6);
v863 = INT64_C(7);
v866 = INT64_C(8);
v869 = INT64_C(9);
v872 = INT64_C(10);
v875 = INT64_C(11);
v878 = INT64_C(12);
v881 = INT64_C(1);
v884 = INT64_C(2);
v887 = INT64_C(3);
v890 = INT64_C(9223372036854775807);
y_init(&yd_145, &v897);
v899 = INT64_C(0);
y_init(&yd_155, &v902);
y_init(&yd_155, &v904);
v906 = INT64_C(0);
y_init(&yd_175, &v909);
v911 = 0;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4000000)}; y_desc_array(&yd_921, 1, lo, hi, &y_d_byte); }
y_init(&yd_921, &v923);
v925 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4000)}; y_desc_array(&yd_935, 1, lo, hi, &y_d_int); }
y_init(&yd_935, &v937);
v939 = INT64_C(0);
v942 = INT64_C(0);
{ rt_int lo[1] = {0}, hi[1] = {127}; y_desc_array(&yd_947, 1, lo, hi, &y_d_int); }
y_init(&yd_947, &v949);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(127)}; y_desc_array(&yd_958, 1, lo, hi, &y_d_byte); }
y_init(&yd_958, &v960);
v980 = INT64_C(0);
y_init(&yd_165, &v1173);
y_init(&yd_165, &v1175);
y_init(&yd_165, &v1177);
v1179 = INT64_C(0);
v1182 = INT64_C(0);
v1185 = INT64_C(0);
v1188 = INT64_C(0);
v1191 = INT64_C(1);
v1194 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(200000)}; y_desc_array(&yd_1204, 1, lo, hi, &y_d_int); }
y_init(&yd_1204, &v1206);
y_init(&yd_1204, &v1208);
y_init(&yd_1204, &v1210);
v1212 = INT64_C(0);
v1279 = INT64_C(1);
v1282 = ((void *)0);
v1284 = INT64_C(0);
v1287 = INT64_C(0);
y_init(&yd_185, &v1604);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1613, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1613, &v1615);
v1617 = INT64_C(-1);
v1620 = INT64_C(0);
v1623 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1633, 1, lo, hi, &y_d_int); }
y_init(&yd_1633, &v1635);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1644, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1644, &v1646);
v1765 = ((void *)0);
v2091 = INT64_C(1);
v2094 = INT64_C(2);
v2097 = INT64_C(3);
v2100 = INT64_C(4);
v2103 = INT64_C(5);
v2106 = INT64_C(6);
v2109 = INT64_C(7);
v2112 = INT64_C(8);
v2115 = INT64_C(9);
v2118 = INT64_C(10);
v2121 = INT64_C(11);
v2124 = INT64_C(12);
v2127 = INT64_C(13);
v2130 = INT64_C(14);
v2133 = INT64_C(15);
v2136 = INT64_C(16);
v2139 = INT64_C(17);
v2142 = INT64_C(18);
v2145 = INT64_C(19);
v2148 = INT64_C(20);
v2151 = INT64_C(21);
v2154 = INT64_C(22);
v2157 = INT64_C(23);
v2160 = INT64_C(24);
v2163 = INT64_C(25);
v2166 = INT64_C(26);
v2169 = INT64_C(27);
v2172 = INT64_C(28);
v2175 = INT64_C(29);
v2178 = INT64_C(30);
v2181 = INT64_C(31);
v2184 = INT64_C(32);
v2187 = INT64_C(33);
v2190 = INT64_C(34);
v2193 = INT64_C(35);
v2196 = INT64_C(36);
v2199 = INT64_C(0);
v2202 = ((void *)0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_2489, 1, lo, hi, &y_d_int); }
y_init(&yd_2489, &v2491);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_2500, 1, lo, hi, &y_d_ptr); }
y_init(&yd_2500, &v2502);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_2511, 1, lo, hi, &y_d_ptr); }
y_init(&yd_2511, &v2513);
v2515 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2650, 1, lo, hi, &y_d_int); }
y_init(&yd_2650, &v2652);
v2654 = INT64_C(0);
v2657 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2667, 1, lo, hi, &y_d_int); }
y_init(&yd_2667, &v2669);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2678, 1, lo, hi, &y_d_int); }
y_init(&yd_2678, &v2680);
v2682 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2692, 1, lo, hi, &y_d_int); }
y_init(&yd_2692, &v2694);
v2696 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2706, 1, lo, hi, &y_d_int); }
y_init(&yd_2706, &v2708);
y_init(&yd_2706, &v2710);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2719, 1, lo, hi, &y_d_int); }
y_init(&yd_2719, &v2721);
v2723 = INT64_C(0);
v2726 = INT64_C(0);
v2729 = ((void *)0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2738, 1, lo, hi, &y_d_ptr); }
y_init(&yd_2738, &v2740);
y_init(&yd_2738, &v2742);
v2744 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_2754, 1, lo, hi, &y_d_int); }
y_init(&yd_2754, &v2756);
v2758 = 0;
v2970 = ((void *)0);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_2979, 1, lo, hi, &y_d_ptr); }
y_init(&yd_2979, &v2981);
v2998 = INT64_C(0);
yr983_InitChars();
yr1215_InitWords();
v1284 = yr1061_N(y_str("FROM", 4));
v1287 = yr1061_N(y_str("DIMENSION", 9));
v2199 = yr1041_T(y_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP DEL SQ DQ ", 128));
y_open(&v895, y_str("OUTPUT", 6), 1);
yr1220_ReadSource();
yr1274_Lex();
v3186 = yr1599_ParseProgram();
yr3222_Predefine();
yr3227_Translate();
yr3232_WriteProgram();
y_close(&v895);
}
int main(int argc, char **argv) {
y_lang();
rt_init(argc, argv);
y_elaborate();
rt_main_done();
return 0;
}
