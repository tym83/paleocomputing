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
struct yf1600;
struct yf1606;
struct yf1611;
struct yf1617;
struct yf1623;
struct yf1629;
struct yf1636;
struct yf1642;
struct yf1649;
struct yf1656;
struct yf1663;
struct yf1669;
struct yf1676;
struct yf1682;
struct yf1688;
struct yf1719;
struct yf1725;
struct yf1731;
struct yf1737;
struct yf1743;
struct yf1749;
struct yf1755;
struct yf1761;
struct yf1767;
struct yf1773;
struct yf1779;
struct yf1786;
struct yf1794;
struct yf1802;
struct yf1809;
struct yf1815;
struct yf1823;
struct yf1829;
struct yf1835;
struct yf1842;
struct yf1848;
struct yf1856;
struct yf1862;
struct yf1870;
struct yf1877;
struct yf1882;
struct yf1888;
struct yf1901;
struct yf1912;
struct yf1920;
struct yf1927;
struct yf2047;
struct yf2054;
struct yf2062;
struct yf2071;
struct yf2079;
struct yf2087;
struct yf2097;
struct yf2103;
struct yf2109;
struct yf2117;
struct yf2123;
struct yf2130;
struct yf2136;
struct yf2145;
struct yf2153;
struct yf2162;
struct yf2170;
struct yf2180;
struct yf2186;
struct yf2195;
struct yf2204;
struct yf2213;
struct yf2219;
struct yf2228;
struct yf2265;
struct yf2273;
struct yf2279;
struct yf2288;
struct yf2297;
struct yf2308;
struct yf2318;
struct yf2327;
struct yf2335;
struct yf2422;
struct yf2432;
struct yf2438;
struct yf2443;
struct yf2449;
struct yf2455;
struct yf2461;
struct yf2467;
struct yf2474;
struct yf2479;
struct yf2485;
struct yf2491;
struct yf2499;
struct yf2505;
struct yf2511;
struct yf2517;
struct yf2523;
struct yf2529;
struct yf2535;
struct yf2541;
struct yf2547;
struct yf2554;
struct yf2561;
struct yf2567;
struct yf2575;
struct yf2581;
struct yf2588;
struct yf2595;
struct yf2601;
struct yf2619;
struct yf2627;
struct yf2637;
struct yf2644;
struct yf2652;
struct yf2659;
struct yf2665;
struct yf2671;
struct yf2677;
struct yf2683;
struct yf2688;
struct yf2695;
struct yf2701;
struct yf2707;
struct yf2712;
struct yf2718;
struct yf2725;
struct yf2732;
struct yf2739;
struct yf2746;
struct yf2753;
struct yf2761;
struct yf2767;
struct yf2776;
struct yf2784;
struct yf2790;
struct yf2796;
struct yf2806;
struct yf2818;
struct yf2826;
struct yf2836;
struct yf2844;
struct yf2849;
struct yf2854;
struct yf2859;
struct yR95 { rt_int f_kind; rt_int f_line; rt_int f_ival; rt_int f_flag; rt_int f_name; rt_int f_text; void * f_a; void * f_b; void * f_c; void * f_d; void * f_e; void * f_next; void * f_rep; void * f_sym; };
struct yR100 { rt_int f_kind; rt_int f_tid; rt_int f_tname; rt_int f_lo; rt_int f_hi; rt_int f_mlo; rt_int f_mhi; rt_int f_hasm; rt_int f_scale; rt_int f_prec; void * f_elem; void * f_idx; rt_int f_nidx; void * f_link; void * f_lits; rt_int f_nlits; void * f_fields; void * f_selector; rt_int f_cname; rt_int f_dname; rt_int f_dlevel; rt_int f_deep; rt_int f_abstract; rt_int f_opaque; rt_int f_opaqueops; rt_int f_ordered; rt_int f_forward; rt_int f_fwdscope; void * f_monitor; rt_int f_serial; };
struct yR105 { rt_int f_name; void * f_rep; rt_int f_isconst; rt_int f_variant; void * f_labels; void * f_next; };
struct yR110 { rt_int f_name; rt_int f_cls; void * f_rep; rt_int f_cname; void * f_next; };
struct yR115 { rt_int f_kind; rt_int f_name; void * f_rep; rt_int f_cname; rt_int f_level; rt_int f_byref; rt_int f_readonly; rt_int f_mval; rt_int f_hasmv; void * f_params; rt_int f_nparams; void * f_ret; rt_int f_func; void * f_decl; rt_int f_depth; void * f_target; void * f_members; void * f_mnext; void * f_chain; void * f_stack; void * f_alt; void * f_monitor; rt_int f_serial; };
struct yR120 { void * f_syms; rt_int f_closed; void * f_module; rt_int f_level; void * f_deferred; void * f_up; };
struct yR125 { rt_int f_t; void * f_next; };
struct yR130 { void * f_head; void * f_tail; };
struct yf964 { void *up;
rt_int v2863;
rt_int c_2866;
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
rt_int lo2902;
rt_int hi2903;
rt_int c_2905;
};
struct yf1006 { void *up;
rt_int p1005;
rt_int v2911;
};
struct yf1012 { void *up;
rt_int p1011;
ydesc yd_2924;
yarr v2926;
rt_int v2928;
rt_int v2931;
};
struct yf1017 { void *up;
rt_int v2950;
rt_int lo2961;
rt_int hi2962;
rt_int c_2964;
};
struct yf1024 { void *up;
yarr p1023;
};
struct yf1031 { void *up;
rt_int p1029;
rt_int p1030;
rt_int v2975;
rt_int v2978;
rt_int v2980;
rt_int lo2985;
rt_int hi2986;
rt_int c_2988;
rt_int lo3006;
rt_int hi3007;
rt_int c_3009;
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
rt_int lo3037;
rt_int hi3038;
rt_int c_3040;
};
struct yf1059 { void *up;
rt_int p1056;
yarr p1058;
rt_int v3053;
rt_int lo3069;
rt_int hi3070;
rt_int c_3072;
};
struct yf1066 { void *up;
rt_int p1064;
rt_int p1065;
};
struct yf1073 { void *up;
yR130 * p1071;
rt_int p1072;
void * v3093;
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
rt_int v3107;
};
struct yf1113 { void *up;
yR130 p1112;
void * v3114;
};
struct yf1120 { void *up;
rt_int p1118;
rt_int p1119;
rt_int v3120;
};
struct yf1128 { void *up;
rt_int p1125;
yarr p1127;
};
struct yf1137 { void *up;
rt_int p1133;
rt_int p1134;
yarr p1136;
rt_int v3134;
};
struct yf1142 { void *up;
};
struct yf1149 { void *up;
yarr p1148;
rt_int v3142;
};
struct yf1178 { void *up;
rt_int v3146;
rt_int v3148;
rt_int v3150;
rt_int lo3167;
rt_int hi3168;
rt_int c_3170;
};
struct yf1183 { void *up;
unsigned char v3179;
};
struct yf1190 { void *up;
rt_int p1188;
rt_int p1189;
};
struct yf1196 { void *up;
rt_int p1195;
};
struct yf1201 { void *up;
rt_int v3196;
rt_int v3198;
};
struct yf1207 { void *up;
unsigned char p1206;
};
struct yf1214 { void *up;
yarr p1213;
};
struct yf1220 { void *up;
rt_int p1219;
rt_int v3227;
rt_int v3230;
rt_int v3232;
rt_int v3234;
rt_int v3236;
rt_int v3238;
rt_int v3241;
rt_int v3244;
rt_int v3247;
rt_int v3250;
rt_int v3253;
rt_int v3256;
rt_int lo3293;
rt_int hi3294;
rt_int c_3296;
rt_int lo3305;
rt_int hi3306;
rt_int c_3308;
rt_int lo3335;
rt_int hi3336;
rt_int c_3338;
rt_int lo3345;
rt_int hi3346;
rt_int c_3348;
};
struct yf1225 { void *up;
rt_int v3359;
rt_int v3361;
rt_int v3363;
rt_int v3365;
};
struct yf1230 { void *up;
unsigned char v3394;
rt_int v3396;
rt_int v3398;
rt_int v3400;
rt_int v3402;
rt_int v3404;
rt_int v3406;
rt_int v3408;
rt_int lo3480;
rt_int hi3481;
rt_int c_3483;
};
struct yf1248 { void *up;
rt_int p1246;
rt_int p1247;
void * v3499;
};
struct yf1256 { void *up;
void * * p1253;
void * * p1254;
void * p1255;
};
struct yf1262 { void *up;
void * p1261;
rt_int v3512;
void * v3515;
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
rt_int v3529;
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
rt_int v3552;
};
struct yf1318 { void *up;
rt_int p1317;
rt_int v3562;
};
struct yf1323 { void *up;
rt_int v3567;
};
struct yf1330 { void *up;
rt_int p1328;
rt_int p1329;
rt_int v3574;
};
struct yf1335 { void *up;
rt_int v3578;
};
struct yf1341 { void *up;
rt_int p1340;
void * v3588;
};
struct yf1346 { void *up;
void * v3595;
};
struct yf1351 { void *up;
void * v3600;
void * v3602;
void * v3604;
void * v3606;
rt_int v3608;
};
struct yf1356 { void *up;
rt_int v3617;
};
struct yf1361 { void *up;
void * v3623;
void * v3625;
void * v3627;
void * v3629;
};
struct yf1366 { void *up;
void * v3634;
void * v3636;
void * v3638;
void * v3640;
void * v3642;
};
struct yf1371 { void *up;
void * v3650;
void * v3652;
void * v3654;
};
struct yf1377 { void *up;
rt_int p1376;
void * v3660;
};
struct yf1383 { void *up;
rt_int p1382;
};
struct yf1390 { void *up;
void * * p1388;
void * * p1389;
rt_int v3681;
void * v3683;
void * v3685;
void * v3687;
};
struct yf1395 { void *up;
void * v3691;
void * v3693;
void * v3695;
rt_int v3697;
rt_int v3699;
rt_int v3701;
};
struct yf1401 { void *up;
void * p1400;
void * v3717;
void * v3719;
rt_int v3721;
};
struct yf1406 { void *up;
void * v3727;
};
struct yf1412 { void *up;
rt_int p1411;
rt_int v3739;
};
struct yf1417 { void *up;
rt_int v3747;
void * v3749;
};
struct yf1422 { void *up;
void * v3758;
void * v3760;
};
struct yf1427 { void *up;
void * v3764;
void * v3766;
void * v3768;
};
struct yf1432 { void *up;
void * v3773;
void * v3775;
void * v3777;
rt_int v3779;
};
struct yf1437 { void *up;
void * v3786;
void * v3788;
void * v3790;
void * v3792;
void * v3794;
void * v3796;
rt_int v3798;
rt_int v3800;
};
struct yf1442 { void *up;
void * v3817;
};
struct yf1447 { void *up;
rt_int v3822;
};
struct yf1453 { void *up;
rt_int p1452;
void * v3831;
void * v3833;
void * v3835;
rt_int v3837;
};
struct yf1458 { void *up;
void * v3845;
void * v3847;
void * v3849;
void * v3851;
void * v3853;
void * v3855;
rt_int v3857;
rt_int v3859;
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
void * v3913;
};
struct yf1509 { void *up;
rt_int p1507;
rt_int p1508;
rt_int v3919;
};
struct yf1514 { void *up;
void * v3923;
rt_int v3925;
rt_int v3927;
};
struct yf1519 { void *up;
void * v3931;
void * v3933;
rt_int v3935;
rt_int v3937;
};
struct yf1524 { void *up;
void * v3943;
rt_int v3945;
rt_int v3947;
};
struct yf1530 { void *up;
rt_int p1529;
rt_int v3953;
};
struct yf1535 { void *up;
void * v3958;
rt_int v3960;
rt_int v3962;
};
struct yf1540 { void *up;
void * v3966;
rt_int v3968;
rt_int v3970;
};
struct yf1545 { void *up;
void * v3991;
void * v3993;
void * v3995;
rt_int v3997;
};
struct yf1550 { void *up;
};
struct yf1555 { void *up;
void * v4004;
void * v4006;
};
struct yf1600 { void *up;
rt_int p1598;
rt_int p1599;
void * v4013;
};
struct yf1606 { void *up;
rt_int p1605;
void * v4028;
};
struct yf1611 { void *up;
void * v4034;
void * v4036;
void * v4038;
rt_int v4040;
};
struct yf1617 { void *up;
void * p1616;
};
struct yf1623 { void *up;
rt_int p1622;
void * v4052;
};
struct yf1629 { void *up;
rt_int p1628;
void * v4060;
};
struct yf1636 { void *up;
rt_int p1634;
rt_int p1635;
void * v4069;
void * v4071;
};
struct yf1642 { void *up;
void * p1641;
void * v4078;
};
struct yf1649 { void *up;
rt_int p1647;
void * p1648;
void * v4087;
};
struct yf1656 { void *up;
void * p1654;
rt_int p1655;
void * v4096;
rt_int v4098;
};
struct yf1663 { void *up;
rt_int p1661;
rt_int p1662;
rt_int v4106;
};
struct yf1669 { void *up;
rt_int p1668;
rt_int v4121;
};
struct yf1676 { void *up;
rt_int p1674;
rt_int p1675;
rt_int v4136;
};
struct yf1682 { void *up;
void * p1681;
rt_int v4145;
};
struct yf1688 { void *up;
void * p1687;
void * v4153;
};
struct yf1719 { void *up;
rt_int p1717;
rt_int p1718;
void * v4159;
};
struct yf1725 { void *up;
void * p1724;
void * v4184;
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
};
struct yf1755 { void *up;
void * p1754;
};
struct yf1761 { void *up;
void * p1760;
};
struct yf1767 { void *up;
void * p1766;
rt_int v4220;
};
struct yf1773 { void *up;
void * p1772;
rt_int v4245;
};
struct yf1779 { void *up;
void * p1778;
};
struct yf1786 { void *up;
void * p1784;
void * p1785;
};
struct yf1794 { void *up;
rt_int p1791;
void * p1792;
void * p1793;
rt_int v4290;
};
struct yf1802 { void *up;
rt_int p1799;
void * p1800;
void * p1801;
};
struct yf1809 { void *up;
void * p1807;
rt_int p1808;
};
struct yf1815 { void *up;
void * p1814;
};
struct yf1823 { void *up;
void * p1820;
yarr p1822;
rt_int v4312;
rt_int v4314;
};
struct yf1829 { void *up;
void * p1828;
};
struct yf1835 { void *up;
void * p1834;
};
struct yf1842 { void *up;
void * p1840;
void * p1841;
rt_int v4339;
rt_int v4341;
void * v4343;
void * v4345;
rt_int v4347;
rt_int v4349;
};
struct yf1848 { void *up;
void * p1847;
void * v4364;
void * v4366;
rt_int v4368;
};
struct yf1856 { void *up;
void * p1853;
rt_int p1854;
rt_int p1855;
};
struct yf1862 { void *up;
rt_int p1861;
rt_int v4383;
};
struct yf1870 { void *up;
void * p1867;
rt_int p1868;
rt_int p1869;
void * v4393;
void * v4395;
void * v4397;
void * v4399;
void * v4401;
rt_int v4403;
void * v4405;
rt_int v4407;
rt_int v4409;
};
struct yf1877 { void *up;
rt_int p1875;
void * p1876;
void * v4456;
void * v4458;
};
struct yf1882 { void *up;
void * v4462;
};
struct yf1888 { void *up;
void * p1887;
void * v4467;
rt_int v4469;
rt_int v4471;
};
struct yf1901 { void *up;
void * p1893;
void * * p1894;
rt_int p1895;
void * p1896;
rt_int p1897;
rt_int p1898;
void * p1899;
rt_int p1900;
void * v4496;
};
struct yf1912 { void *up;
void * p1906;
void * * p1907;
void * p1908;
rt_int p1909;
void * p1910;
rt_int p1911;
void * v4508;
void * v4510;
void * v4512;
};
struct yf1920 { void *up;
void * p1917;
void * p1918;
rt_int p1919;
void * v4520;
void * v4522;
void * v4524;
void * v4526;
rt_int v4528;
void * v4531;
rt_int v4533;
rt_int v4535;
};
struct yf1927 { void *up;
void * p1925;
rt_int p1926;
void * v4582;
};
struct yf2047 { void *up;
void * p2045;
rt_int p2046;
void * v4589;
rt_int v4591;
rt_int v4593;
rt_int v4595;
rt_int v4597;
rt_int lo4605;
rt_int hi4606;
rt_int c_4608;
};
struct yf2054 { void *up;
void * p2052;
void * p2053;
void * v4647;
void * v4649;
void * v4651;
rt_int v4653;
rt_int v4656;
};
struct yf2062 { void *up;
void * p2059;
rt_int p2060;
rt_int p2061;
rt_int v4681;
rt_int v4683;
};
struct yf2071 { void *up;
void * p2067;
rt_int p2068;
rt_int p2069;
rt_int * p2069_o;
rt_int p2070;
rt_int v4694;
rt_int v4696;
rt_int v4698;
ydesc yd_4705;
yarr v4707;
unsigned char v4709;
rt_int v4711;
rt_int lo4739;
rt_int hi4740;
rt_int c_4742;
};
struct yf2079 { void *up;
void * p2076;
rt_int p2077;
rt_int * p2077_o;
rt_int p2078;
rt_int * p2078_o;
void * v4777;
rt_int v4779;
rt_int v4781;
rt_int v4783;
rt_int v4785;
rt_int v4787;
void * v4789;
};
struct yf2087 { void *up;
rt_int p2084;
void * p2085;
void * p2086;
};
struct yf2097 { void *up;
rt_int p2092;
void * p2093;
rt_int p2094;
void * p2095;
rt_int p2096;
rt_int v4837;
rt_int v4839;
};
struct yf2103 { void *up;
void * p2102;
void * v4853;
void * v4855;
};
struct yf2109 { void *up;
void * p2108;
void * v4874;
void * v4876;
};
struct yf2117 { void *up;
void * p2114;
rt_int p2115;
rt_int * p2115_o;
void * p2116;
void * * p2116_o;
};
struct yf2123 { void *up;
rt_int p2122;
};
struct yf2130 { void *up;
void * p2128;
rt_int p2129;
void * v4894;
};
struct yf2136 { void *up;
void * p2135;
void * v4899;
};
struct yf2145 { void *up;
void * p2141;
void * p2142;
rt_int p2143;
rt_int * p2143_o;
void * p2144;
void * * p2144_o;
rt_int v4908;
void * v4910;
rt_int v4912;
rt_int v4914;
void * v4916;
void * v4918;
void * v4920;
rt_int v4922;
rt_int v4924;
};
struct yf2153 { void *up;
void * p2150;
void * p2151;
rt_int p2152;
void * v4966;
rt_int v4968;
rt_int v4970;
};
struct yf2162 { void *up;
void * p2158;
void * p2159;
rt_int p2160;
rt_int * p2160_o;
void * p2161;
void * * p2161_o;
void * v4982;
};
struct yf2170 { void *up;
void * p2167;
rt_int p2168;
rt_int * p2168_o;
void * p2169;
void * * p2169_o;
rt_int v4991;
rt_int v4993;
rt_int v4995;
void * v4997;
void * v4999;
void * v5001;
void * v5003;
rt_int v5005;
rt_int v5007;
};
struct yf2180 { void *up;
void * p2175;
rt_int p2176;
void * p2177;
rt_int p2178;
rt_int * p2178_o;
void * p2179;
void * * p2179_o;
};
struct yf2186 { void *up;
void * p2185;
void * v5042;
};
struct yf2195 { void *up;
yarr p2192;
rt_int p2193;
rt_int p2194;
};
struct yf2204 { void *up;
rt_int p2200;
yarr p2202;
rt_int p2203;
};
struct yf2213 { void *up;
rt_int p2209;
void * p2210;
rt_int p2211;
void * p2212;
rt_int v5070;
rt_int v5072;
void * v5074;
};
struct yf2219 { void *up;
void * p2218;
};
struct yf2228 { void *up;
void * p2224;
void * p2225;
rt_int p2226;
rt_int * p2226_o;
void * p2227;
void * * p2227_o;
rt_int v5104;
rt_int v5106;
rt_int v5108;
rt_int v5110;
void * v5112;
void * v5114;
void * v5116;
rt_int v5118;
};
struct yf2265 { void *up;
void * p2263;
void * p2264;
};
struct yf2273 { void *up;
void * p2270;
rt_int p2271;
rt_int p2272;
void * v5173;
void * v5175;
rt_int v5177;
rt_int v5179;
};
struct yf2279 { void *up;
void * p2278;
void * v5191;
};
struct yf2288 { void *up;
void * p2284;
void * p2285;
rt_int p2286;
rt_int * p2286_o;
rt_int p2287;
rt_int * p2287_o;
void * v5203;
void * v5205;
void * v5207;
};
struct yf2297 { void *up;
void * p2293;
rt_int p2294;
rt_int p2295;
rt_int p2296;
void * v5223;
rt_int v5225;
rt_int v5229;
};
struct yf2308 { void *up;
void * p2302;
rt_int p2303;
void * p2304;
void * p2305;
rt_int p2306;
rt_int * p2306_o;
void * p2307;
void * * p2307_o;
void * v5255;
void * v5257;
rt_int v5259;
rt_int v5261;
};
struct yf2318 { void *up;
void * p2313;
void * p2314;
rt_int p2315;
rt_int p2316;
rt_int * p2316_o;
void * p2317;
void * * p2317_o;
void * v5278;
void * v5280;
rt_int v5282;
rt_int v5284;
};
struct yf2327 { void *up;
void * p2323;
void * p2324;
rt_int p2325;
rt_int * p2325_o;
void * p2326;
void * * p2326_o;
void * v5296;
void * v5298;
rt_int v5300;
rt_int v5302;
rt_int v5304;
void * v5306;
rt_int v5308;
rt_int v5310;
rt_int v5312;
rt_int v5314;
rt_int v5316;
rt_int v5319;
void * v5321;
rt_int v5323;
};
struct yf2335 { void *up;
void * p2332;
rt_int p2333;
rt_int p2334;
void * v5385;
void * v5387;
rt_int v5389;
rt_int v5391;
};
struct yf2422 { void *up;
yarr p2420;
rt_int p2421;
rt_int v5400;
};
struct yf2432 { void *up;
yarr p2428;
rt_int p2429;
yarr p2431;
rt_int v5406;
};
struct yf2438 { void *up;
rt_int p2437;
};
struct yf2443 { void *up;
};
struct yf2449 { void *up;
rt_int p2448;
};
struct yf2455 { void *up;
void * p2454;
rt_int v5428;
rt_int v5430;
rt_int v5432;
void * v5434;
void * v5436;
rt_int v5438;
void * v5440;
rt_int v5442;
};
struct yf2461 { void *up;
void * p2460;
void * v5504;
};
struct yf2467 { void *up;
void * p2466;
rt_int v5508;
void * v5510;
};
struct yf2474 { void *up;
void * p2472;
void * p2473;
rt_int v5516;
rt_int v5518;
void * v5520;
void * v5522;
rt_int v5524;
};
struct yf2479 { void *up;
void * v5530;
rt_int v5532;
};
struct yf2485 { void *up;
void * p2484;
rt_int v5539;
rt_int v5541;
rt_int v5543;
rt_int v5545;
rt_int v5547;
rt_int v5549;
rt_int v5551;
void * v5553;
void * v5555;
void * v5557;
void * v5559;
rt_int v5561;
rt_int v5563;
rt_int v5565;
rt_int v5567;
void * v5569;
};
struct yf2491 { void *up;
void * p2490;
void * v5631;
rt_int v5633;
rt_int v5635;
rt_int v5637;
void * v5639;
};
struct yf2499 { void *up;
rt_int p2496;
rt_int p2497;
rt_int p2498;
};
struct yf2505 { void *up;
void * p2504;
rt_int v5671;
rt_int v5673;
rt_int v5675;
void * v5677;
void * v5679;
};
struct yf2511 { void *up;
void * p2510;
};
struct yf2517 { void *up;
void * p2516;
void * v5700;
};
struct yf2523 { void *up;
void * p2522;
void * v5715;
};
struct yf2529 { void *up;
void * p2528;
void * v5724;
void * v5726;
void * v5728;
};
struct yf2535 { void *up;
rt_int p2534;
rt_int v5733;
rt_int v5735;
rt_int lo5739;
rt_int hi5740;
rt_int c_5742;
};
struct yf2541 { void *up;
void * p2540;
void * v5752;
rt_int v5754;
rt_int v5756;
};
struct yf2547 { void *up;
void * p2546;
rt_int v5773;
};
struct yf2554 { void *up;
void * p2552;
rt_int p2553;
void * v5781;
void * v5783;
void * v5785;
void * v5787;
void * v5789;
void * v5791;
void * v5793;
rt_int v5795;
rt_int v5797;
};
struct yf2561 { void *up;
void * p2559;
void * p2560;
void * v5840;
void * v5842;
void * v5844;
rt_int v5846;
};
struct yf2567 { void *up;
void * p2566;
void * v5854;
yR130 v5856;
yR130 v5858;
rt_int v5860;
rt_int v5862;
rt_int v5864;
rt_int v5866;
rt_int v5868;
rt_int v5870;
rt_int v5872;
void * v5874;
rt_int v5876;
void * v5878;
void * v5880;
rt_int v5882;
rt_int v5884;
yR130 v5886;
};
struct yf2575 { void *up;
void * p2572;
void * p2573;
rt_int p2574;
};
struct yf2581 { void *up;
void * p2580;
rt_int v5949;
void * v5951;
void * v5953;
void * v5955;
void * v5957;
rt_int v5959;
rt_int v5961;
rt_int v5963;
};
struct yf2588 { void *up;
void * p2586;
void * p2587;
void * v5977;
};
struct yf2595 { void *up;
void * p2593;
void * p2594;
};
struct yf2601 { void *up;
void * p2600;
void * v5984;
void * v5986;
void * v5988;
void * v5990;
void * v5992;
};
struct yf2619 { void *up;
rt_int p2617;
void * p2618;
void * v5998;
};
struct yf2627 { void *up;
void * * p2624;
void * p2625;
rt_int p2626;
void * v6005;
void * v6007;
void * v6009;
};
struct yf2637 { void *up;
void * p2635;
rt_int p2636;
void * v6019;
};
struct yf2644 { void *up;
rt_int p2642;
rt_int p2643;
void * v6034;
};
struct yf2652 { void *up;
void * p2649;
void * * p2650;
rt_int p2651;
void * v6044;
void * v6046;
void * v6048;
rt_int v6050;
void * v6052;
rt_int v6054;
};
struct yf2659 { void *up;
void * p2657;
rt_int p2658;
void * v6079;
void * v6081;
void * v6083;
};
struct yf2665 { void *up;
void * p2664;
void * v6088;
void * v6090;
void * v6092;
void * v6094;
void * v6096;
void * v6098;
void * v6100;
void * v6102;
void * v6104;
void * v6106;
rt_int v6108;
rt_int v6110;
rt_int v6112;
};
struct yf2671 { void *up;
void * p2670;
void * v6147;
};
struct yf2677 { void *up;
void * p2676;
void * v6151;
void * v6153;
void * v6155;
void * v6157;
rt_int v6159;
rt_int v6161;
rt_int v6163;
rt_int v6165;
void * v6167;
rt_int lo6175;
rt_int hi6176;
rt_int c_6178;
};
struct yf2683 { void *up;
void * p2682;
void * v6190;
void * v6192;
};
struct yf2688 { void *up;
void * v6198;
};
struct yf2695 { void *up;
void * p2693;
void * p2694;
rt_int v6209;
rt_int v6211;
rt_int v6213;
void * v6215;
rt_int v6217;
rt_int v6219;
rt_int v6221;
rt_int v6223;
rt_int v6225;
rt_int v6227;
void * v6229;
void * v6231;
};
struct yf2701 { void *up;
void * p2700;
};
struct yf2707 { void *up;
void * p2706;
rt_int v6291;
};
struct yf2712 { void *up;
};
struct yf2718 { void *up;
void * p2717;
};
struct yf2725 { void *up;
void * p2723;
rt_int p2724;
};
struct yf2732 { void *up;
void * p2730;
rt_int p2731;
rt_int v6326;
};
struct yf2739 { void *up;
void * p2737;
void * p2738;
rt_int v6338;
rt_int v6340;
rt_int v6342;
};
struct yf2746 { void *up;
void * p2744;
rt_int p2745;
void * v6351;
rt_int v6353;
};
struct yf2753 { void *up;
void * p2751;
rt_int p2752;
};
struct yf2761 { void *up;
yarr p2759;
rt_int p2760;
};
struct yf2767 { void *up;
rt_int p2766;
};
struct yf2776 { void *up;
void * p2772;
rt_int p2773;
rt_int p2774;
rt_int * p2774_o;
void * p2775;
void * * p2775_o;
rt_int v6380;
};
struct yf2784 { void *up;
void * p2781;
rt_int p2782;
rt_int * p2782_o;
void * p2783;
void * * p2783_o;
};
struct yf2790 { void *up;
void * p2789;
rt_int v6396;
void * v6398;
};
struct yf2796 { void *up;
void * p2795;
void * v6404;
rt_int v6407;
rt_int v6409;
rt_int v6411;
rt_int v6413;
rt_int v6415;
rt_int v6417;
unsigned char v6419;
void * v6421;
ydesc yd_6428;
yarr v6430;
};
struct yf2806 { void *up;
rt_int p2801;
void * p2802;
rt_int p2803;
rt_int p2804;
rt_int * p2804_o;
void * p2805;
void * * p2805_o;
rt_int v6469;
rt_int v6471;
rt_int v6473;
rt_int v6475;
rt_int v6477;
void * v6479;
void * v6481;
void * v6483;
void * v6485;
rt_int v6487;
rt_int v6489;
rt_int v6491;
rt_int v6493;
void * v6495;
rt_int v6497;
rt_int lo6510;
rt_int hi6511;
rt_int c_6513;
};
struct yf2818 { void *up;
yarr p2816;
void * p2817;
void * v6687;
};
struct yf2826 { void *up;
yarr p2824;
rt_int p2825;
void * v6693;
};
struct yf2836 { void *up;
yarr p2832;
yarr p2833;
yarr p2834;
rt_int p2835;
void * v6701;
void * v6703;
void * v6705;
};
struct yf2844 { void *up;
rt_int p2841;
yarr p2843;
void * v6714;
};
struct yf2849 { void *up;
};
struct yf2854 { void *up;
void * v6794;
};
struct yf2859 { void *up;
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
static ydesc yd_1593;
static yarr v1595;
static void * v1692;
static void * v1694;
static void * v1696;
static void * v1698;
static void * v1700;
static void * v1702;
static void * v1704;
static void * v1706;
static void * v1708;
static void * v1710;
static void * v1712;
static void * v1714;
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
static rt_int v2033;
static rt_int v2036;
static rt_int v2039;
static void * v2042;
static ydesc yd_2237;
static yarr v2239;
static ydesc yd_2246;
static yarr v2248;
static ydesc yd_2255;
static yarr v2257;
static rt_int v2259;
static ydesc yd_2344;
static yarr v2346;
static rt_int v2348;
static rt_int v2351;
static ydesc yd_2359;
static yarr v2361;
static ydesc yd_2368;
static yarr v2370;
static rt_int v2372;
static ydesc yd_2380;
static yarr v2382;
static rt_int v2384;
static ydesc yd_2392;
static yarr v2394;
static yarr v2396;
static ydesc yd_2403;
static yarr v2405;
static rt_int v2407;
static rt_int v2410;
static void * v2413;
static rt_int v2415;
static void * v2605;
static ydesc yd_2612;
static yarr v2614;
static rt_int v2631;
static void * v2810;
static void * v2812;
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
static void * yr1597_NewSym(rt_int a_p1598, rt_int a_p1599);
static void yr1604_OpenScope(rt_int a_p1605);
static void yr1610_CloseScope(void);
static rt_int yr1615_Visible(void * a_p1616);
static void * yr1621_Find(rt_int a_p1622);
static void * yr1627_FindHere(rt_int a_p1628);
static void * yr1633_Lookup(rt_int a_p1634, rt_int a_p1635);
static rt_int yr1640_Ambiguous(void * a_p1641);
static void * yr1646_FindLit(rt_int a_p1647, void * a_p1648);
static void yr1653_Define(void * a_p1654, rt_int a_p1655);
static rt_int yr1660_Path(rt_int a_p1661, rt_int a_p1662);
static rt_int yr1667_FramePtr(rt_int a_p1668);
static void yr1673_DeclStorage(rt_int a_p1674, rt_int a_p1675);
static rt_int yr1680_SymPath(void * a_p1681);
static void * yr1686_Real(void * a_p1687);
static void * yr1716_NewRep(rt_int a_p1717, rt_int a_p1718);
static void * yr1723_CopyRep(void * a_p1724);
static rt_int yr1729_IsDiscrete(void * a_p1730);
static rt_int yr1735_IsNumeric(void * a_p1736);
static rt_int yr1741_IsArrayLike(void * a_p1742);
static rt_int yr1747_IsString(void * a_p1748);
static rt_int yr1753_Deep(void * a_p1754);
static rt_int yr1759_HoldsSignal(void * a_p1760);
static rt_int yr1765_CType(void * a_p1766);
static rt_int yr1771_DescOf(void * a_p1772);
static void yr1777_NewDesc(void * a_p1778);
static rt_int yr1783_SameType(void * a_p1784, void * a_p1785);
static void yr1790_TypeClash(rt_int a_p1791, void * a_p1792, void * a_p1793);
static void yr1798_CheckType(rt_int a_p1799, void * a_p1800, void * a_p1801);
static void yr1806_CheckRepresented(void * a_p1807, rt_int a_p1808);
static rt_int yr1813_IsLiteralNode(void * a_p1814);
static void yr1819_StoreBounds(void * a_p1820, yarr a_p1822);
static rt_int yr1827_LoText(void * a_p1828);
static rt_int yr1833_HiText(void * a_p1834);
static void yr1839_Qualify(void * a_p1840, void * a_p1841);
static void yr1846_DefineLits(void * a_p1847);
static void yr1852_SetRange(void * a_p1853, rt_int a_p1854, rt_int a_p1855);
static rt_int yr1860_NewTid(rt_int a_p1861);
static void * yr1866_MakeRep(void * a_p1867, rt_int a_p1868, rt_int a_p1869);
static void yr1874_ResolvePending(rt_int a_p1875, void * a_p1876);
static void yr1881_CheckPending(void);
static void yr1886_BuildArrayDesc(void * a_p1887);
static void yr1892_AddField(void * a_p1893, void * * a_p1894, rt_int a_p1895, void * a_p1896, rt_int a_p1897, rt_int a_p1898, void * a_p1899, rt_int a_p1900);
static void yr1905_AddFields(void * a_p1906, void * * a_p1907, void * a_p1908, rt_int a_p1909, void * a_p1910, rt_int a_p1911);
static void yr1916_MakeRecord(void * a_p1917, void * a_p1918, rt_int a_p1919);
static void * yr1924_FindField(void * a_p1925, rt_int a_p1926);
static rt_int yr2044_CharOrd(void * a_p2045, rt_int a_p2046);
static void * yr2051_AlphabetFor(void * a_p2052, void * a_p2053);
static rt_int yr2058_CharValue(void * a_p2059, rt_int a_p2060, rt_int a_p2061);
static rt_int yr2066_StringCodes(void * a_p2067, rt_int a_p2068, rt_int * a_p2069, rt_int a_p2070);
static void yr2075_Manifest(void * a_p2076, rt_int * a_p2077, rt_int * a_p2078);
static rt_int yr2083_Convert(rt_int a_p2084, void * a_p2085, void * a_p2086);
static void yr2091_Store(rt_int a_p2092, void * a_p2093, rt_int a_p2094, void * a_p2095, rt_int a_p2096);
static rt_int yr2101_IsVariable(void * a_p2102);
static void yr2107_CheckPure(void * a_p2108);
static void yr2113_LValue(void * a_p2114, rt_int * a_p2115, void * * a_p2116);
static rt_int yr2121_Paren(rt_int a_p2122);
static void * yr2127_Lit(void * a_p2128, rt_int a_p2129);
static void * yr2134_Qualifier(void * a_p2135);
static void yr2140_Expr(void * a_p2141, void * a_p2142, rt_int * a_p2143, void * * a_p2144);
static rt_int yr2149_VariantTest(void * a_p2150, void * a_p2151, rt_int a_p2152);
static void yr2157_NameExpr(void * a_p2158, void * a_p2159, rt_int * a_p2160, void * * a_p2161);
static void yr2166_IndexExpr(void * a_p2167, rt_int * a_p2168, void * * a_p2169);
static void yr2174_NegExpr(void * a_p2175, rt_int a_p2176, void * a_p2177, rt_int * a_p2178, void * * a_p2179);
static void * yr2184_Unbounded(void * a_p2185);
static rt_int yr2190_Call2(yarr a_p2192, rt_int a_p2193, rt_int a_p2194);
static rt_int yr2199_Infix(rt_int a_p2200, yarr a_p2202, rt_int a_p2203);
static rt_int yr2208_EqCode(rt_int a_p2209, void * a_p2210, rt_int a_p2211, void * a_p2212);
static rt_int yr2217_IsOrdered(void * a_p2218);
static void yr2223_BinExpr(void * a_p2224, void * a_p2225, rt_int * a_p2226, void * * a_p2227);
static rt_int yr2262_Fits(void * a_p2263, void * a_p2264);
static void * yr2269_Choose(void * a_p2270, rt_int a_p2271, rt_int a_p2272);
static rt_int yr2277_HidesStandard(void * a_p2278);
static void yr2283_CompileArgs(void * a_p2284, void * a_p2285, rt_int * a_p2286, rt_int * a_p2287);
static rt_int yr2292_CallCode(void * a_p2293, rt_int a_p2294, rt_int a_p2295, rt_int a_p2296);
static rt_int yr2301_UserOp(void * a_p2302, rt_int a_p2303, void * a_p2304, void * a_p2305, rt_int * a_p2306, void * * a_p2307);
static void yr2312_CallExpr(void * a_p2313, void * a_p2314, rt_int a_p2315, rt_int * a_p2316, void * * a_p2317);
static void yr2322_Denote(void * a_p2323, void * a_p2324, rt_int * a_p2325, void * * a_p2326);
static rt_int yr2331_VariantOf(void * a_p2332, rt_int a_p2333, rt_int a_p2334);
static void yr2418_Emit2(yarr a_p2420, rt_int a_p2421);
static void yr2426_Emit3(yarr a_p2428, rt_int a_p2429, yarr a_p2431);
static void yr2436_PopTo(rt_int a_p2437);
static void yr2442_LeaveBlock(void);
static rt_int yr2447_RaiseCode(rt_int a_p2448);
static void yr2453_BlockStatements(void * a_p2454);
static void yr2459_Statements(void * a_p2460);
static rt_int yr2465_Cond(void * a_p2466);
static rt_int yr2471_Label(void * a_p2472, void * a_p2473);
static void yr2478_CopyOut(void);
static void yr2483_Statement(void * a_p2484);
static void yr2489_ForStatement(void * a_p2490);
static rt_int yr2495_Join(rt_int a_p2496, rt_int a_p2497, rt_int a_p2498);
static void yr2503_ReturnStatement(void * a_p2504);
static void yr2509_BeginStatement(void * a_p2510);
static void yr2515_PlaceLabel(void * a_p2516);
static void yr2521_GotoStatement(void * a_p2522);
static void yr2527_CheckLabels(void * a_p2528);
static rt_int yr2533_RoutineCName(rt_int a_p2534);
static void * yr2539_FormalRep(void * a_p2540);
static rt_int yr2545_ParamCType(void * a_p2546);
static void yr2551_RoutineHeader(void * a_p2552, rt_int a_p2553);
static void * yr2558_SameSignature(void * a_p2559, void * a_p2560);
static void yr2565_RoutineBody(void * a_p2566);
static void yr2571_DeclareStorage(void * a_p2572, void * a_p2573, rt_int a_p2574);
static void yr2579_SimpleDecl(void * a_p2580);
static void yr2585_NoteAlphabet(void * a_p2586, void * a_p2587);
static void yr2592_AtLocation(void * a_p2593, void * a_p2594);
static void yr2599_Declarations(void * a_p2600);
static void * yr2616_Alias(rt_int a_p2617, void * a_p2618);
static void yr2623_AddLits(void * * a_p2624, void * a_p2625, rt_int a_p2626);
static rt_int yr2634_Provides(void * a_p2635, rt_int a_p2636);
static void yr2641_ImportLater(rt_int a_p2642, rt_int a_p2643);
static void yr2648_ResolveItem(void * a_p2649, void * * a_p2650, rt_int a_p2651);
static void yr2656_DefineAll(void * a_p2657, rt_int a_p2658);
static void yr2663_CompileModule(void * a_p2664);
static void yr2669_DeclareTemplate(void * a_p2670);
static void yr2675_Instantiate(void * a_p2676);
static void yr2681_DeclareProcess(void * a_p2682);
static void yr2687_AwaitProcesses(void);
static void yr2692_Activate(void * a_p2693, void * a_p2694);
static rt_int yr2699_MonitorPath(void * a_p2700);
static void yr2705_EnterMonitor(void * a_p2706);
static void yr2711_LeaveMonitor(void);
static void yr2716_TerminateStatement(void * a_p2717);
static void yr2722_DeclareSignal(void * a_p2723, rt_int a_p2724);
static void yr2729_DeclareSignalArray(void * a_p2730, rt_int a_p2731);
static void yr2736_DeviceSignal(void * a_p2737, void * a_p2738);
static void * yr2743_Arg(void * a_p2744, rt_int a_p2745);
static void yr2750_NArgs(void * a_p2751, rt_int a_p2752);
static rt_int yr2757_Call1(yarr a_p2759, rt_int a_p2760);
static rt_int yr2765_Addr(rt_int a_p2766);
static void yr2771_StdVar(void * a_p2772, rt_int a_p2773, rt_int * a_p2774, void * * a_p2775);
static void yr2780_NumArg(void * a_p2781, rt_int * a_p2782, void * * a_p2783);
static rt_int yr2788_IntArg(void * a_p2789);
static void yr2794_CodeInsert(void * a_p2795);
static void yr2800_StdCall(rt_int a_p2801, void * a_p2802, rt_int a_p2803, rt_int * a_p2804, void * * a_p2805);
static void yr2814_StdRep(yarr a_p2816, void * a_p2817);
static void yr2822_StdOp(yarr a_p2824, rt_int a_p2825);
static void * yr2830_LitList(yarr a_p2832, yarr a_p2833, yarr a_p2834, rt_int a_p2835);
static void * yr2840_Abstract(rt_int a_p2841, yarr a_p2843);
static void yr2848_Predefine(void);
static void yr2853_Translate(void);
static void yr2858_WriteProgram(void);
static void yr963_InitChars(void) {
struct yf964 F;
memset((void *)&F, 0, sizeof F);
F.v2863 = INT64_C(0);
{ rt_int hi2868 = 127;
for (rt_int i2867 = 0; i2867 <= hi2868; i2867++) { F.c_2866 = i2867;
((rt_int *)(v931).p)[y_ix1(v931, F.c_2866)] = F.v2863;
((unsigned char *)(v940).p)[y_ix1(v940, F.v2863)] = F.c_2866;
F.v2863 = rt_range(rt_add(F.v2863, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i2867 == hi2868) break;
}}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr968_IsLetter(unsigned char a_p969) {
struct yf970 F;
memset((void *)&F, 0, sizeof F);
F.p969 = a_p969;
{ rt_int rv2878 = ((((((F.p969 >= 65)) && ((F.p969 <= 90)))) || ((((F.p969 >= 97)) && ((F.p969 <= 122))))) || ((F.p969 == 95)));
return rv2878; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr974_IsDigit(unsigned char a_p975) {
struct yf976 F;
memset((void *)&F, 0, sizeof F);
F.p975 = a_p975;
{ rt_int rv2883 = (((F.p975 >= 48)) && ((F.p975 <= 57)));
return rv2883; }
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
F.lo2902 = y_low(F.p999, INT64_C(1));
F.hi2903 = y_high(F.p999, INT64_C(1));
{ rt_int hi2907 = F.hi2903;
for (rt_int i2906 = F.lo2902; i2906 <= hi2907; i2906++) { F.c_2905 = i2906;
yr991_SC(((unsigned char *)(F.p999).p)[y_ix1(F.p999, F.c_2905)]);
if (i2906 == hi2907) break;
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
F.v2911 = ((rt_int *)(v888).p)[y_ix1(v888, F.p1005)];
while ((F.v2911 < (rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1005)], ((rt_int *)(v890).p)[y_ix1(v890, F.p1005)])))) {
yr991_SC(((unsigned char *)(v883).p)[y_ix1(v883, F.v2911)]);
F.v2911 = rt_range(rt_add(F.v2911, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1010_SI(rt_int a_p1011) {
struct yf1012 F;
memset((void *)&F, 0, sizeof F);
F.p1011 = a_p1011;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(24)}; y_desc_array(&F.yd_2924, 1, lo, hi, &y_d_byte); }
y_init(&F.yd_2924, &F.v2926);
F.v2928 = INT64_C(0);
F.v2931 = F.p1011;
if ((F.v2931 < INT64_C(0))) {
yr991_SC(45);
F.v2931 = rt_range(rt_neg(F.v2931), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
for (;;) {
F.v2928 = rt_range(rt_add(F.v2928, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((unsigned char *)(F.v2926).p)[y_ix1(F.v2926, F.v2928)] = ((unsigned char *)(v940).p)[y_ix1(v940, rt_add((rt_mod(F.v2931, INT64_C(10))), INT64_C(48)))];
F.v2931 = rt_range(rt_div(F.v2931, INT64_C(10)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.v2931 == INT64_C(0))) {
goto yl_2935;
}
}
yl_2935: ;
while ((F.v2928 > INT64_C(0))) {
yr991_SC(((unsigned char *)(F.v2926).p)[y_ix1(F.v2926, F.v2928)]);
F.v2928 = rt_range(rt_sub(F.v2928, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1016_SE(void) {
struct yf1017 F;
memset((void *)&F, 0, sizeof F);
F.v2950 = ((rt_int *)(v919).p)[y_ix1(v919, v921)];
v921 = rt_range(rt_sub(v921, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v892 = rt_range(rt_add(v892, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v888).p)[y_ix1(v888, v892)] = rt_range(rt_add(v885, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v890).p)[y_ix1(v890, v892)] = rt_range(rt_sub(v909, F.v2950), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo2961 = rt_add(F.v2950, INT64_C(1));
F.hi2962 = v909;
{ rt_int hi2966 = F.hi2962;
for (rt_int i2965 = F.lo2961; i2965 <= hi2966; i2965++) { F.c_2964 = i2965;
yr980_PoolAdd(((unsigned char *)(v907).p)[y_ix1(v907, F.c_2964)]);
if (i2965 == hi2966) break;
}}
v909 = F.v2950;
{ rt_int rv2967 = rt_range(v892, INT64_C(0), INT64_C(4000000));
return rv2967; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1021_T(yarr a_p1023) {
struct yf1024 F;
memset((void *)&F, 0, sizeof F);
F.p1023 = a_p1023;
yr986_SB();
yr997_SA(F.p1023);
{ rt_int rv2970 = yr1016_SE();
return rv2970; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1028_Intern(rt_int a_p1029, rt_int a_p1030) {
struct yf1031 F;
memset((void *)&F, 0, sizeof F);
F.p1029 = a_p1029;
F.p1030 = a_p1030;
F.v2975 = INT64_C(0);
F.lo2985 = F.p1029;
F.hi2986 = rt_sub((rt_add(F.p1029, F.p1030)), INT64_C(1));
{ rt_int hi2990 = F.hi2986;
for (rt_int i2989 = F.lo2985; i2989 <= hi2990; i2989++) { F.c_2988 = i2989;
F.v2975 = rt_range(rt_mod((rt_add((rt_mul(F.v2975, INT64_C(31))), ((rt_int *)(v931).p)[y_ix1(v931, ((unsigned char *)(v883).p)[y_ix1(v883, F.c_2988)])])), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i2989 == hi2990) break;
}}
for (;;) {
if ((((rt_int *)(v895).p)[y_ix1(v895, F.v2975)] == INT64_C(0))) {
v892 = rt_range(rt_add(v892, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v888).p)[y_ix1(v888, v892)] = F.p1029;
((rt_int *)(v890).p)[y_ix1(v890, v892)] = F.p1030;
((rt_int *)(v895).p)[y_ix1(v895, F.v2975)] = rt_range(v892, INT64_C(0), INT64_C(4000000));
{ rt_int rv3000 = rt_range(v892, INT64_C(0), INT64_C(4000000));
return rv3000; }
}
F.v2978 = ((rt_int *)(v895).p)[y_ix1(v895, F.v2975)];
if ((((rt_int *)(v890).p)[y_ix1(v890, F.v2978)] == F.p1030)) {
F.v2980 = 1;
F.lo3006 = INT64_C(0);
F.hi3007 = rt_sub(F.p1030, INT64_C(1));
{ rt_int hi3011 = F.hi3007;
for (rt_int i3010 = F.lo3006; i3010 <= hi3011; i3010++) { F.c_3009 = i3010;
if ((!(((unsigned char *)(v883).p)[y_ix1(v883, rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.v2978)], F.c_3009))] == ((unsigned char *)(v883).p)[y_ix1(v883, rt_add(F.p1029, F.c_3009))]))) {
F.v2980 = 0;
}
if (i3010 == hi3011) break;
}}
if (F.v2980) {
{ rt_int rv3015 = rt_range(F.v2978, INT64_C(0), INT64_C(4000000));
return rv3015; }
}
}
F.v2975 = rt_range(rt_mod((rt_add(F.v2975, INT64_C(1))), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yl_2996: ;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1035_Name(rt_int a_p1036) {
struct yf1037 F;
memset((void *)&F, 0, sizeof F);
F.p1036 = a_p1036;
{ rt_int rv3022 = yr1028_Intern(((rt_int *)(v888).p)[y_ix1(v888, F.p1036)], ((rt_int *)(v890).p)[y_ix1(v890, F.p1036)]);
return rv3022; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1041_N(yarr a_p1043) {
struct yf1044 F;
memset((void *)&F, 0, sizeof F);
F.p1043 = a_p1043;
{ rt_int rv3025 = yr1035_Name(yr1021_T(F.p1043));
return rv3025; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1048_TEq(rt_int a_p1049, rt_int a_p1050) {
struct yf1051 F;
memset((void *)&F, 0, sizeof F);
F.p1049 = a_p1049;
F.p1050 = a_p1050;
if ((F.p1049 == F.p1050)) {
{ rt_int rv3030 = 1;
return rv3030; }
}
if ((!(((rt_int *)(v890).p)[y_ix1(v890, F.p1049)] == ((rt_int *)(v890).p)[y_ix1(v890, F.p1050)]))) {
{ rt_int rv3032 = 0;
return rv3032; }
}
F.lo3037 = INT64_C(0);
F.hi3038 = rt_sub(((rt_int *)(v890).p)[y_ix1(v890, F.p1049)], INT64_C(1));
{ rt_int hi3042 = F.hi3038;
for (rt_int i3041 = F.lo3037; i3041 <= hi3042; i3041++) { F.c_3040 = i3041;
if ((!(((unsigned char *)(v883).p)[y_ix1(v883, rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1049)], F.c_3040))] == ((unsigned char *)(v883).p)[y_ix1(v883, rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1050)], F.c_3040))]))) {
{ rt_int rv3046 = 0;
return rv3046; }
}
if (i3041 == hi3042) break;
}}
{ rt_int rv3048 = 1;
return rv3048; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1055_TStarts(rt_int a_p1056, yarr a_p1058) {
struct yf1059 F;
memset((void *)&F, 0, sizeof F);
F.p1056 = a_p1056;
F.p1058 = a_p1058;
F.v3053 = INT64_C(0);
if ((((rt_int *)(v890).p)[y_ix1(v890, F.p1056)] < (rt_add((rt_sub(y_high(F.p1058, INT64_C(1)), y_low(F.p1058, INT64_C(1)))), INT64_C(1))))) {
{ rt_int rv3063 = 0;
return rv3063; }
}
F.lo3069 = y_low(F.p1058, INT64_C(1));
F.hi3070 = y_high(F.p1058, INT64_C(1));
{ rt_int hi3074 = F.hi3070;
for (rt_int i3073 = F.lo3069; i3073 <= hi3074; i3073++) { F.c_3072 = i3073;
if ((!(((unsigned char *)(v883).p)[y_ix1(v883, rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1056)], F.v3053))] == ((unsigned char *)(F.p1058).p)[y_ix1(F.p1058, F.c_3072)]))) {
{ rt_int rv3077 = 0;
return rv3077; }
}
F.v3053 = rt_range(rt_add(F.v3053, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3073 == hi3074) break;
}}
{ rt_int rv3081 = 1;
return rv3081; }
rt_raise(Y_X_NO_RETURN);
}
static unsigned char yr1063_TChar(rt_int a_p1064, rt_int a_p1065) {
struct yf1066 F;
memset((void *)&F, 0, sizeof F);
F.p1064 = a_p1064;
F.p1065 = a_p1065;
{ unsigned char rv3088 = ((unsigned char *)(v883).p)[y_ix1(v883, rt_sub((rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1064)], F.p1065)), INT64_C(1)))];
return rv3088; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1070_Put(yR130 * a_p1071, rt_int a_p1072) {
struct yf1073 F;
memset((void *)&F, 0, sizeof F);
F.p1071 = a_p1071;
F.p1072 = a_p1072;
({ F.v3093 = rt_alloc(sizeof(yR125)); });
(*(yR125 *)rt_nil_check(F.v3093)) = ((yR125){ .f_t = F.p1072, .f_next = ((void *)0) });
if ((((*F.p1071)).f_head == ((void *)0))) {
((*F.p1071)).f_head = F.v3093;
} else {
((*(yR125 *)rt_nil_check(((*F.p1071)).f_tail))).f_next = F.v3093;
}
((*F.p1071)).f_tail = F.v3093;
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
F.v3107 = ((rt_int *)(v888).p)[y_ix1(v888, F.p1106)];
while ((F.v3107 < (rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1106)], ((rt_int *)(v890).p)[y_ix1(v890, F.p1106)])))) {
({ unsigned char pv = ((unsigned char *)(v883).p)[y_ix1(v883, F.v3107)]; y_put(&v881, &pv, sizeof pv); });
F.v3107 = rt_range(rt_add(F.v3107, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1111_WriteBuf(yR130 a_p1112) {
struct yf1113 F;
memset((void *)&F, 0, sizeof F);
F.p1112 = a_p1112;
F.v3114 = (F.p1112).f_head;
while ((!(F.v3114 == ((void *)0)))) {
yr1105_WriteTxt(((*(yR125 *)rt_nil_check(F.v3114))).f_t);
({ unsigned char pv = 10; y_put(&v881, &pv, sizeof pv); });
F.v3114 = ((*(yR125 *)rt_nil_check(F.v3114))).f_next;
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
F.v3120 = yr1016_SE();
yr1105_WriteTxt(F.v3120);
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
F.v3134 = yr1016_SE();
yr1117_Fail(F.p1133, F.v3134);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1141_NewSerial(void) {
struct yf1142 F;
memset((void *)&F, 0, sizeof F);
v924 = rt_range(rt_add(v924, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
{ rt_int rv3138 = v924;
return rv3138; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1146_Fresh(yarr a_p1148) {
struct yf1149 F;
memset((void *)&F, 0, sizeof F);
F.p1148 = a_p1148;
F.v3142 = yr1141_NewSerial();
yr986_SB();
yr997_SA(F.p1148);
yr1010_SI(F.v3142);
{ rt_int rv3143 = yr1016_SE();
return rv3143; }
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
F.v3150 = yr1016_SE();
v892 = INT64_C(0);
F.v3146 = ((rt_int *)(v888).p)[y_ix1(v888, F.v3150)];
F.lo3167 = ((rt_int *)(v888).p)[y_ix1(v888, F.v3150)];
F.hi3168 = rt_sub((rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.v3150)], ((rt_int *)(v890).p)[y_ix1(v890, F.v3150)])), INT64_C(1));
{ rt_int hi3172 = F.hi3168;
for (rt_int i3171 = F.lo3167; i3171 <= hi3172; i3171++) { F.c_3170 = i3171;
if ((((unsigned char *)(v883).p)[y_ix1(v883, F.c_3170)] == 32)) {
F.v3148 = yr1028_Intern(F.v3146, rt_range(rt_sub(F.c_3170, F.v3146), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v3146 = rt_range(rt_add(F.c_3170, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i3171 == hi3172) break;
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
({ unsigned char g; y_get(&v879, &g, sizeof g); F.v3179 = g; });
yr980_PoolAdd(F.v3179);
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
{ unsigned char rv3192 = 0;
return rv3192; }
}
{ unsigned char rv3193 = ((unsigned char *)(v883).p)[y_ix1(v883, F.p1195)];
return rv3193; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1200_EndsOperand(void) {
struct yf1201 F;
memset((void *)&F, 0, sizeof F);
if ((v1159 == INT64_C(0))) {
{ rt_int rv3201 = 0;
return rv3201; }
}
F.v3196 = ((rt_int *)(v1153).p)[y_ix1(v1153, v1159)];
F.v3198 = ((rt_int *)(v1155).p)[y_ix1(v1155, v1159)];
if ((((((((F.v3196 == v177)) || ((F.v3196 == v186))) || ((F.v3196 == v189))) || ((F.v3196 == v192))) || ((F.v3196 == v195))) || ((F.v3196 == v198)))) {
{ rt_int rv3203 = 1;
return rv3203; }
}
if ((F.v3196 == v183)) {
{ rt_int rv3204 = ((((F.v3198 == v567)) || ((F.v3198 == v573))) || ((F.v3198 == v588)));
return rv3204; }
}
if ((F.v3196 == v180)) {
{ rt_int rv3205 = (F.v3198 == v357);
return rv3205; }
}
{ rt_int rv3207 = 0;
return rv3207; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1205_DigitVal(unsigned char a_p1206) {
struct yf1207 F;
memset((void *)&F, 0, sizeof F);
F.p1206 = a_p1206;
if ((((F.p1206 >= 48)) && ((F.p1206 <= 57)))) {
{ rt_int rv3214 = rt_range(rt_sub(((rt_int *)(v931).p)[y_ix1(v931, F.p1206)], INT64_C(48)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return rv3214; }
}
if ((((F.p1206 >= 65)) && ((F.p1206 <= 70)))) {
{ rt_int rv3219 = rt_range(rt_sub(((rt_int *)(v931).p)[y_ix1(v931, F.p1206)], INT64_C(55)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return rv3219; }
}
{ rt_int rv3221 = INT64_C(99);
return rv3221; }
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
F.v3227 = INT64_C(10);
F.v3238 = 0;
F.v3241 = INT64_C(0);
F.v3244 = INT64_C(0);
F.v3247 = INT64_C(0);
F.v3250 = INT64_C(0);
F.v3253 = INT64_C(0);
if ((!(v1174 == INT64_C(0)))) {
F.v3227 = v1174;
}
v1174 = INT64_C(0);
F.v3230 = v1168;
while ((yr1205_DigitVal(yr1194_At(v1168)) < F.v3227)) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3232 = v1168;
F.v3234 = v1168;
F.v3236 = v1168;
if ((((yr1194_At(v1168) == 46)) && ((!(yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 46))))) {
F.v3238 = 1;
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3234 = v1168;
while ((yr1205_DigitVal(yr1194_At(v1168)) < F.v3227)) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3236 = v1168;
}
if ((yr1194_At(v1168) == 80)) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3250 = INT64_C(1);
if ((((((yr1194_At(v1168) == 45)) || ((yr1194_At(v1168) == 43)))) && yr974_IsDigit(yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))) {
if ((yr1194_At(v1168) == 45)) {
F.v3250 = INT64_C(-1);
}
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3247 = INT64_C(0);
while (yr974_IsDigit(yr1194_At(v1168))) {
F.v3247 = rt_range(rt_add((rt_mul(F.v3247, INT64_C(10))), yr1205_DigitVal(yr1194_At(v1168))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3247 = rt_range(rt_mul(F.v3247, F.v3250), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3241 = INT64_C(0);
F.lo3293 = F.v3230;
F.hi3294 = rt_sub(F.v3232, INT64_C(1));
{ rt_int hi3298 = F.hi3294;
for (rt_int i3297 = F.lo3293; i3297 <= hi3298; i3297++) { F.c_3296 = i3297;
F.v3241 = rt_range(rt_add((rt_mul(F.v3241, F.v3227)), yr1205_DigitVal(((unsigned char *)(v883).p)[y_ix1(v883, F.c_3296)])), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3297 == hi3298) break;
}}
F.v3253 = rt_range(rt_sub(F.v3236, F.v3234), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo3305 = F.v3234;
F.hi3306 = rt_sub(F.v3236, INT64_C(1));
{ rt_int hi3310 = F.hi3306;
for (rt_int i3309 = F.lo3305; i3309 <= hi3310; i3309++) { F.c_3308 = i3309;
F.v3241 = rt_range(rt_add((rt_mul(F.v3241, F.v3227)), yr1205_DigitVal(((unsigned char *)(v883).p)[y_ix1(v883, F.c_3308)])), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3309 == hi3310) break;
}}
yr986_SB();
yr997_SA(y_str("(", 1));
if (F.p1219) {
yr997_SA(y_str("-", 1));
}
yr997_SA(y_str("(double)", 8));
yr1010_SI(F.v3241);
yr997_SA(y_str(" * pow(", 7));
yr1010_SI(F.v3227);
yr997_SA(y_str(", ", 2));
yr1010_SI(rt_range(rt_sub(F.v3247, F.v3253), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr997_SA(y_str("))", 2));
F.v3256 = yr1016_SE();
yr1187_AddTok(v189, F.v3256);
return;
}
if (F.v3238) {
if ((!(F.v3227 == INT64_C(10)))) {
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
F.lo3335 = F.v3230;
F.hi3336 = rt_sub(v1168, INT64_C(1));
{ rt_int hi3340 = F.hi3336;
for (rt_int i3339 = F.lo3335; i3339 <= hi3340; i3339++) { F.c_3338 = i3339;
yr991_SC(((unsigned char *)(v883).p)[y_ix1(v883, F.c_3338)]);
if (i3339 == hi3340) break;
}}
F.v3256 = yr1016_SE();
yr1187_AddTok(v192, F.v3256);
return;
}
F.v3241 = INT64_C(0);
F.lo3345 = F.v3230;
F.hi3346 = rt_sub(F.v3232, INT64_C(1));
{ rt_int hi3350 = F.hi3346;
for (rt_int i3349 = F.lo3345; i3349 <= hi3350; i3349++) { F.c_3348 = i3349;
F.v3244 = yr1205_DigitVal(((unsigned char *)(v883).p)[y_ix1(v883, F.c_3348)]);
if ((F.v3241 > (rt_div((rt_sub(v876, F.v3244)), F.v3227)))) {
yr1211_LexError(y_str("integer literal too large", 25));
}
F.v3241 = rt_range(rt_add((rt_mul(F.v3241, F.v3227)), F.v3244), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3349 == hi3350) break;
}}
if (F.p1219) {
F.v3241 = rt_range(rt_neg(F.v3241), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yr1187_AddTok(v186, F.v3241);
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
F.v3361 = v1168;
F.v3363 = INT64_C(0);
F.v3365 = 1;
while (F.v3365) {
if (((((yr1194_At(F.v3361) == 32)) || ((yr1194_At(F.v3361) == 9))) || ((yr1194_At(F.v3361) == 13)))) {
F.v3361 = rt_range(rt_add(F.v3361, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr1194_At(F.v3361) == 10)) {
F.v3363 = rt_range(rt_add(F.v3363, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3361 = rt_range(rt_add(F.v3361, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v3365 = 0;
}
}
if ((!(yr1194_At(F.v3361) == 34))) {
goto yl_3366;
}
v1171 = rt_range(rt_add(v1171, F.v3363), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1168 = F.v3361;
}
yl_3366: ;
F.v3359 = yr1016_SE();
yr1187_AddTok(v198, F.v3359);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1229_Lex(void) {
struct yf1230 F;
memset((void *)&F, 0, sizeof F);
v1168 = v1162;
while ((v1168 <= v1165)) {
F.v3394 = ((unsigned char *)(v883).p)[y_ix1(v883, v1168)];
if ((F.v3394 == 10)) {
v1171 = rt_range(rt_add(v1171, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((((F.v3394 == 32)) || ((F.v3394 == 9))) || ((F.v3394 == 13))) || ((F.v3394 == 12)))) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v3394 == 40)) && ((yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 42)))) {
v1168 = rt_range(rt_add(v1168, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!((((yr1194_At(v1168) == 42)) && ((yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 41)))))) {
if ((((yr1194_At(v1168) == 10)) || ((v1168 > v1165)))) {
yr1211_LexError(y_str("a comment must close on its line", 32));
}
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1168 = rt_range(rt_add(v1168, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr974_IsDigit(F.v3394) || ((((v1174 == INT64_C(16))) && ((yr1205_DigitVal(F.v3394) < INT64_C(16))))))) {
yr1218_LexNumber(0);
} else if (((((((F.v3394 == 45)) || ((F.v3394 == 43)))) && (!yr1200_EndsOperand())) && ((yr974_IsDigit(yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || ((((v1174 == INT64_C(16))) && ((yr1205_DigitVal(yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) < INT64_C(16))))))))) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1218_LexNumber((F.v3394 == 45));
} else if (yr968_IsLetter(F.v3394)) {
F.v3396 = v1168;
while ((yr968_IsLetter(yr1194_At(v1168)) || yr974_IsDigit(yr1194_At(v1168)))) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3404 = yr1028_Intern(F.v3396, rt_range(rt_sub(v1168, F.v3396), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((F.v3404 == v222)) {
v1174 = INT64_C(2);
} else if ((F.v3404 == v225)) {
v1174 = INT64_C(8);
} else if ((F.v3404 == v228)) {
v1174 = INT64_C(10);
} else if ((F.v3404 == v231)) {
v1174 = INT64_C(16);
} else if ((F.v3404 <= v462)) {
yr1187_AddTok(v180, F.v3404);
} else {
yr1187_AddTok(v177, F.v3404);
}
} else if ((F.v3394 == 39)) {
F.v3396 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3398 = F.v3396;
while ((!(yr1194_At(F.v3398) == 39))) {
if (((((yr1194_At(F.v3398) == 10)) || ((yr1194_At(F.v3398) == 34))) || ((F.v3398 > v1165)))) {
yr1211_LexError(y_str("bad character literal", 21));
}
F.v3398 = rt_range(rt_add(F.v3398, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v3398 == F.v3396)) {
yr1211_LexError(y_str("empty character literal", 23));
}
F.v3404 = yr1028_Intern(F.v3396, rt_range(rt_sub(F.v3398, F.v3396), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1187_AddTok(v195, F.v3404);
v1168 = rt_range(rt_add(F.v3398, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v3394 == 34)) {
yr1224_LexString();
} else {
F.v3400 = INT64_C(0);
F.v3398 = rt_range(rt_add(v462, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((F.v3400 == INT64_C(0))) && ((F.v3398 <= v591)))) {
F.v3402 = ((rt_int *)(v890).p)[y_ix1(v890, F.v3398)];
F.v3408 = 1;
F.lo3480 = INT64_C(0);
F.hi3481 = rt_sub(F.v3402, INT64_C(1));
{ rt_int hi3485 = F.hi3481;
for (rt_int i3484 = F.lo3480; i3484 <= hi3485; i3484++) { F.c_3483 = i3484;
if ((!(yr1194_At(rt_range(rt_add(v1168, F.c_3483), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == ((unsigned char *)(v883).p)[y_ix1(v883, rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.v3398)], F.c_3483))]))) {
F.v3408 = 0;
}
if (i3484 == hi3485) break;
}}
if (F.v3408) {
F.v3400 = F.v3398;
}
F.v3398 = rt_range(rt_add(F.v3398, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v3400 == INT64_C(0))) {
yr1211_LexError(y_str("a character that is not in the language", 39));
}
yr1187_AddTok(v183, F.v3400);
v1168 = rt_range(rt_add(v1168, ((rt_int *)(v890).p)[y_ix1(v890, F.v3400)]), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
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
({ F.v3499 = rt_alloc(sizeof(yR95)); });
(*(yR95 *)rt_nil_check(F.v3499)) = ((yR95){ .f_kind = F.p1246, .f_line = F.p1247, .f_ival = INT64_C(0), .f_flag = INT64_C(0), .f_name = INT64_C(0), .f_text = INT64_C(0), .f_a = ((void *)0), .f_b = ((void *)0), .f_c = ((void *)0), .f_d = ((void *)0), .f_e = ((void *)0), .f_next = ((void *)0), .f_rep = ((void *)0), .f_sym = ((void *)0) });
{ void * rv3504 = F.v3499;
return rv3504; }
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
F.v3512 = INT64_C(0);
F.v3515 = F.p1261;
while ((!(F.v3515 == ((void *)0)))) {
F.v3512 = rt_range(rt_add(F.v3512, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3515 = ((*(yR95 *)rt_nil_check(F.v3515))).f_next;
}
{ rt_int rv3518 = F.v3512;
return rv3518; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1266_TK(void) {
struct yf1267 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv3520 = ((rt_int *)(v1153).p)[y_ix1(v1153, v1234)];
return rv3520; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1271_TV(void) {
struct yf1272 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv3522 = ((rt_int *)(v1155).p)[y_ix1(v1155, v1234)];
return rv3522; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1276_TLn(void) {
struct yf1277 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv3524 = ((rt_int *)(v1157).p)[y_ix1(v1157, v1234)];
return rv3524; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1281_IsAt(rt_int a_p1282, rt_int a_p1283) {
struct yf1284 F;
memset((void *)&F, 0, sizeof F);
F.p1282 = a_p1282;
F.p1283 = a_p1283;
F.v3529 = ((rt_int *)(v1153).p)[y_ix1(v1153, rt_add(v1234, F.p1282))];
{ rt_int rv3532 = (((((F.v3529 == v180)) || ((F.v3529 == v183)))) && ((((rt_int *)(v1155).p)[y_ix1(v1155, rt_add(v1234, F.p1282))] == F.p1283)));
return rv3532; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1288_Is(rt_int a_p1289) {
struct yf1290 F;
memset((void *)&F, 0, sizeof F);
F.p1289 = a_p1289;
{ rt_int rv3536 = yr1281_IsAt(INT64_C(0), F.p1289);
return rv3536; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1294_IsIdAt(rt_int a_p1295) {
struct yf1296 F;
memset((void *)&F, 0, sizeof F);
F.p1295 = a_p1295;
{ rt_int rv3540 = (((rt_int *)(v1153).p)[y_ix1(v1153, rt_add(v1234, F.p1295))] == v177);
return rv3540; }
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
{ rt_int rv3547 = 1;
return rv3547; }
}
{ rt_int rv3549 = 0;
return rv3549; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1311_TokText(void) {
struct yf1312 F;
memset((void *)&F, 0, sizeof F);
F.v3552 = yr1266_TK();
if ((((((F.v3552 == v177)) || ((F.v3552 == v180))) || ((F.v3552 == v183))) || ((F.v3552 == v195)))) {
{ rt_int rv3553 = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
return rv3553; }
}
if ((F.v3552 == v174)) {
{ rt_int rv3555 = yr1021_T(y_str("the end of the text", 19));
return rv3555; }
}
if ((F.v3552 == v186)) {
yr986_SB();
yr1010_SI(yr1271_TV());
{ rt_int rv3556 = yr1016_SE();
return rv3556; }
}
{ rt_int rv3558 = yr1021_T(y_str("a literal", 9));
return rv3558; }
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
F.v3562 = yr1016_SE();
yr1117_Fail(yr1276_TLn(), F.v3562);
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
F.v3567 = yr1016_SE();
yr1117_Fail(yr1276_TLn(), F.v3567);
}
F.v3567 = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
yr1300_Skip();
{ rt_int rv3569 = F.v3567;
return rv3569; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1327_CloseName(rt_int a_p1328, rt_int a_p1329) {
struct yf1330 F;
memset((void *)&F, 0, sizeof F);
F.p1328 = a_p1328;
F.p1329 = a_p1329;
if (((((yr1266_TK() == v177)) || ((yr1266_TK() == v180))) || ((yr1266_TK() == v183)))) {
F.v3574 = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
if ((F.v3574 == F.p1328)) {
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
F.v3578 = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
if ((yr1266_TK() == v177)) {
yr1300_Skip();
{ rt_int rv3579 = F.v3578;
return rv3579; }
}
if ((((yr1266_TK() == v180)) && (((((((((F.v3578 == v360)) || ((F.v3578 == v207))) || ((F.v3578 == v369))) || ((F.v3578 == v246))) || ((F.v3578 == v348))) || ((F.v3578 == v459))) || ((F.v3578 == v330)))))) {
yr1300_Skip();
{ rt_int rv3580 = F.v3578;
return rv3580; }
}
if (((((((((((((yr1266_TK() == v183)) && ((!(F.v3578 == v564)))) && ((!(F.v3578 == v567)))) && ((!(F.v3578 == v570)))) && ((!(F.v3578 == v573)))) && ((!(F.v3578 == v576)))) && ((!(F.v3578 == v579)))) && ((!(F.v3578 == v582)))) && ((!(F.v3578 == v585)))) && ((!(F.v3578 == v507)))) && ((!(F.v3578 == v504))))) {
yr1300_Skip();
{ rt_int rv3581 = F.v3578;
return rv3581; }
}
yr1124_FailS(yr1276_TLn(), y_str("expected a name", 15));
{ rt_int rv3584 = INT64_C(0);
return rv3584; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1339_IsLabel(rt_int a_p1340) {
struct yf1341 F;
memset((void *)&F, 0, sizeof F);
F.p1340 = a_p1340;
F.v3588 = v1237;
while ((!(F.v3588 == ((void *)0)))) {
if ((((*(yR95 *)rt_nil_check(F.v3588))).f_name == F.p1340)) {
{ rt_int rv3590 = 1;
return rv3590; }
}
F.v3588 = ((*(yR95 *)rt_nil_check(F.v3588))).f_next;
}
{ rt_int rv3592 = 0;
return rv3592; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1345_ImportItem(void) {
struct yf1346 F;
memset((void *)&F, 0, sizeof F);
F.v3595 = yr1245_NewNode(v597, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3595))).f_name = yr1334_ExtendedId();
if ((yr1294_IsIdAt(INT64_C(0)) && ((yr1271_TV() == v1239)))) {
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3595))).f_text = yr1322_Ident();
}
if (yr1305_Accept(v213)) {
((*(yR95 *)rt_nil_check(F.v3595))).f_ival = yr1334_ExtendedId();
}
{ void * rv3597 = F.v3595;
return rv3597; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1350_ParseModule(void) {
struct yf1351 F;
memset((void *)&F, 0, sizeof F);
F.v3600 = yr1245_NewNode(v594, yr1276_TLn());
F.v3602 = ((void *)0);
F.v3604 = ((void *)0);
F.v3606 = ((void *)0);
if (yr1305_Accept(v354)) {
((*(yR95 *)rt_nil_check(F.v3600))).f_flag = INT64_C(1);
} else {
yr1316_Expect(v351);
}
((*(yR95 *)rt_nil_check(F.v3600))).f_name = yr1322_Ident();
while (yr1305_Accept(v327)) {
for (;;) {
F.v3602 = yr1345_ImportItem();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3600))).f_a, &F.v3604, F.v3602);
if ((!yr1305_Accept(v576))) {
goto yl_3610;
}
}
yl_3610: ;
yr1316_Expect(v579);
}
while (yr1305_Accept(v306)) {
F.v3608 = INT64_C(0);
if ((((yr1288_Is(v366) || yr1288_Is(v444)) || yr1288_Is(v399)) || yr1288_Is(v453))) {
F.v3608 = yr1271_TV();
yr1300_Skip();
}
for (;;) {
F.v3602 = yr1345_ImportItem();
((*(yR95 *)rt_nil_check(F.v3602))).f_flag = F.v3608;
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3600))).f_b, &F.v3606, F.v3602);
if ((!yr1305_Accept(v576))) {
goto yl_3612;
}
}
yl_3612: ;
yr1316_Expect(v579);
}
((*(yR95 *)rt_nil_check(F.v3600))).f_c = yr1360_ParseBlock();
if ((((*(yR95 *)rt_nil_check(F.v3600))).f_flag == INT64_C(1))) {
yr1316_Expect(v279);
} else {
yr1316_Expect(v276);
}
yr1327_CloseName(((*(yR95 *)rt_nil_check(F.v3600))).f_name, ((*(yR95 *)rt_nil_check(F.v3600))).f_line);
{ void * rv3614 = F.v3600;
return rv3614; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1355_IsDeclWord(void) {
struct yf1356 F;
memset((void *)&F, 0, sizeof F);
if ((!(yr1266_TK() == v180))) {
{ rt_int rv3619 = 0;
return rv3619; }
}
F.v3617 = yr1271_TV();
{ rt_int rv3620 = (((((((((((((F.v3617 == v240)) || ((F.v3617 == v453))) || ((F.v3617 == v342))) || ((F.v3617 == v447))) || ((F.v3617 == v408))) || ((F.v3617 == v318))) || ((F.v3617 == v390))) || ((F.v3617 == v351))) || ((F.v3617 == v354))) || ((F.v3617 == v435))) || ((F.v3617 == v336))) || ((F.v3617 == v393)));
return rv3620; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1360_ParseBlock(void) {
struct yf1361 F;
memset((void *)&F, 0, sizeof F);
F.v3623 = yr1245_NewNode(v600, yr1276_TLn());
F.v3625 = ((void *)0);
F.v3627 = v1237;
while (yr1355_IsDeclWord()) {
yr1387_ParseDeclGroup(&((*(yR95 *)rt_nil_check(F.v3623))).f_a, &F.v3625);
while (yr1305_Accept(v579)) {
}
}
if (yr1288_Is(v300)) {
((*(yR95 *)rt_nil_check(F.v3623))).f_b = yr1365_ParseHandler();
F.v3629 = ((*(yR95 *)rt_nil_check(F.v3623))).f_b;
if (yr1305_Accept(v579)) {
}
}
((*(yR95 *)rt_nil_check(F.v3623))).f_c = yr1451_ParseStatements(1);
v1237 = F.v3627;
{ void * rv3631 = F.v3623;
return rv3631; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1365_ParseHandler(void) {
struct yf1366 F;
memset((void *)&F, 0, sizeof F);
F.v3634 = yr1245_NewNode(v603, yr1276_TLn());
F.v3636 = ((void *)0);
F.v3638 = ((void *)0);
F.v3640 = ((void *)0);
F.v3642 = ((void *)0);
yr1316_Expect(v300);
while (yr1305_Accept(v237)) {
F.v3636 = yr1245_NewNode(v606, yr1276_TLn());
F.v3642 = ((void *)0);
for (;;) {
F.v3640 = yr1245_NewNode(v639, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3640))).f_name = yr1322_Ident();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3636))).f_a, &F.v3642, F.v3640);
if ((!yr1305_Accept(v576))) {
goto yl_3643;
}
}
yl_3643: ;
yr1316_Expect(v504);
((*(yR95 *)rt_nil_check(F.v3636))).f_b = yr1451_ParseStatements(0);
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3634))).f_a, &F.v3638, F.v3636);
}
if (yr1305_Accept(v252)) {
((*(yR95 *)rt_nil_check(F.v3634))).f_flag = INT64_C(1);
((*(yR95 *)rt_nil_check(F.v3634))).f_b = yr1451_ParseStatements(0);
}
yr1316_Expect(v261);
{ void * rv3647 = F.v3634;
return rv3647; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1370_ParseNames(void) {
struct yf1371 F;
memset((void *)&F, 0, sizeof F);
F.v3650 = ((void *)0);
F.v3652 = ((void *)0);
F.v3654 = ((void *)0);
for (;;) {
F.v3654 = yr1245_NewNode(v639, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3654))).f_name = yr1322_Ident();
if (yr1305_Accept(v219)) {
((*(yR95 *)rt_nil_check(F.v3654))).f_a = yr1513_ParseExpr();
}
yr1252_Link(&F.v3650, &F.v3652, F.v3654);
if ((!yr1305_Accept(v576))) {
goto yl_3655;
}
}
yl_3655: ;
{ void * rv3656 = F.v3650;
return rv3656; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1375_SimpleEntry(rt_int a_p1376) {
struct yf1377 F;
memset((void *)&F, 0, sizeof F);
F.p1376 = a_p1376;
if ((F.p1376 == v240)) {
F.v3660 = yr1245_NewNode(v609, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3660))).f_a = yr1370_ParseNames();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3660))).f_b = yr1416_ParseRep();
yr1316_Expect(v555);
((*(yR95 *)rt_nil_check(F.v3660))).f_c = yr1513_ParseExpr();
} else if ((F.p1376 == v453)) {
F.v3660 = yr1245_NewNode(v612, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3660))).f_a = yr1370_ParseNames();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3660))).f_b = yr1416_ParseRep();
if (yr1305_Accept(v501)) {
((*(yR95 *)rt_nil_check(F.v3660))).f_c = yr1513_ParseExpr();
}
} else if ((F.p1376 == v447)) {
F.v3660 = yr1245_NewNode(v618, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3660))).f_name = yr1322_Ident();
yr1316_Expect(v555);
((*(yR95 *)rt_nil_check(F.v3660))).f_b = yr1436_ParseConcrete1();
} else {
F.v3660 = yr1245_NewNode(v621, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3660))).f_name = yr1322_Ident();
yr1316_Expect(v555);
((*(yR95 *)rt_nil_check(F.v3660))).f_b = yr1416_ParseRep();
}
{ void * rv3661 = F.v3660;
return rv3661; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1381_Continues(rt_int a_p1382) {
struct yf1383 F;
memset((void *)&F, 0, sizeof F);
F.p1382 = a_p1382;
if ((!((yr1288_Is(v579) && yr1294_IsIdAt(INT64_C(1)))))) {
{ rt_int rv3666 = 0;
return rv3666; }
}
if (yr1339_IsLabel(rt_range(((rt_int *)(v1155).p)[y_ix1(v1155, rt_add(v1234, INT64_C(1)))], INT64_C(0), INT64_C(4000000)))) {
{ rt_int rv3670 = 0;
return rv3670; }
}
if ((((F.p1382 == v240)) || ((F.p1382 == v453)))) {
{ rt_int rv3674 = ((yr1281_IsAt(INT64_C(2), v576) || yr1281_IsAt(INT64_C(2), v582)) || yr1281_IsAt(INT64_C(2), v219));
return rv3674; }
}
{ rt_int rv3676 = yr1281_IsAt(INT64_C(2), v555);
return rv3676; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1387_ParseDeclGroup(void * * a_p1388, void * * a_p1389) {
struct yf1390 F;
memset((void *)&F, 0, sizeof F);
F.p1388 = a_p1388;
F.p1389 = a_p1389;
F.v3681 = yr1271_TV();
if ((((((F.v3681 == v240)) || ((F.v3681 == v453))) || ((F.v3681 == v447))) || ((F.v3681 == v408)))) {
yr1300_Skip();
yr1252_Link(&(*F.p1388), &(*F.p1389), yr1375_SimpleEntry(F.v3681));
while (yr1381_Continues(F.v3681)) {
yr1300_Skip();
yr1252_Link(&(*F.p1388), &(*F.p1389), yr1375_SimpleEntry(F.v3681));
}
return;
}
if ((F.v3681 == v342)) {
F.v3683 = yr1245_NewNode(v615, yr1276_TLn());
yr1300_Skip();
F.v3687 = ((void *)0);
for (;;) {
F.v3685 = yr1245_NewNode(v639, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3685))).f_name = yr1322_Ident();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3683))).f_a, &F.v3687, F.v3685);
if ((!yr1305_Accept(v576))) {
goto yl_3688;
}
}
yl_3688: ;
F.v3685 = ((*(yR95 *)rt_nil_check(F.v3683))).f_a;
while ((!(F.v3685 == ((void *)0)))) {
((*(yR95 *)rt_nil_check(F.v3683))).f_b = yr1245_NewNode(v639, ((*(yR95 *)rt_nil_check(F.v3685))).f_line);
((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v3683))).f_b))).f_name = ((*(yR95 *)rt_nil_check(F.v3685))).f_name;
((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v3683))).f_b))).f_next = v1237;
v1237 = ((*(yR95 *)rt_nil_check(F.v3683))).f_b;
F.v3685 = ((*(yR95 *)rt_nil_check(F.v3685))).f_next;
}
((*(yR95 *)rt_nil_check(F.v3683))).f_b = ((void *)0);
yr1252_Link(&(*F.p1388), &(*F.p1389), F.v3683);
return;
}
yr1252_Link(&(*F.p1388), &(*F.p1389), yr1394_ParseDecl());
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1394_ParseDecl(void) {
struct yf1395 F;
memset((void *)&F, 0, sizeof F);
F.v3697 = yr1271_TV();
F.v3699 = yr1276_TLn();
if ((((F.v3697 == v318)) || ((F.v3697 == v390)))) {
F.v3691 = yr1245_NewNode(v624, F.v3699);
yr1300_Skip();
if ((F.v3697 == v318)) {
((*(yR95 *)rt_nil_check(F.v3691))).f_flag = INT64_C(1);
}
if ((yr1288_Is(v309) || yr1288_Is(v405))) {
((*(yR95 *)rt_nil_check(F.v3691))).f_ival = yr1271_TV();
yr1300_Skip();
}
((*(yR95 *)rt_nil_check(F.v3691))).f_name = yr1334_ExtendedId();
yr1399_ParseFormals(F.v3691);
if (yr1305_Accept(v333)) {
((*(yR95 *)rt_nil_check(F.v3691))).f_e = yr1245_NewNode(v639, F.v3699);
}
((*(yR95 *)rt_nil_check(F.v3691))).f_c = yr1360_ParseBlock();
if ((F.v3697 == v318)) {
yr1316_Expect(v267);
} else {
yr1316_Expect(v282);
}
yr1327_CloseName(((*(yR95 *)rt_nil_check(F.v3691))).f_name, F.v3699);
{ void * rv3703 = F.v3691;
return rv3703; }
}
if ((((F.v3697 == v351)) || ((F.v3697 == v354)))) {
{ void * rv3704 = yr1350_ParseModule();
return rv3704; }
}
if ((F.v3697 == v435)) {
F.v3691 = yr1245_NewNode(v630, F.v3699);
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3691))).f_name = yr1322_Ident();
yr1316_Expect(v564);
F.v3695 = ((void *)0);
for (;;) {
F.v3693 = yr1245_NewNode(v639, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3693))).f_name = yr1322_Ident();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3691))).f_a, &F.v3695, F.v3693);
if ((!yr1305_Accept(v576))) {
goto yl_3705;
}
}
yl_3705: ;
yr1316_Expect(v567);
F.v3701 = v1234;
((*(yR95 *)rt_nil_check(F.v3691))).f_b = yr1350_ParseModule();
((*(yR95 *)rt_nil_check(F.v3691))).f_ival = F.v3701;
((*(yR95 *)rt_nil_check(F.v3691))).f_flag = v1234;
yr1316_Expect(v294);
yr1327_CloseName(((*(yR95 *)rt_nil_check(F.v3691))).f_name, F.v3699);
{ void * rv3706 = F.v3691;
return rv3706; }
}
if ((F.v3697 == v336)) {
F.v3691 = yr1245_NewNode(v633, F.v3699);
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3691))).f_name = yr1322_Ident();
yr1316_Expect(v564);
F.v3695 = ((void *)0);
for (;;) {
F.v3693 = yr1245_NewNode(v639, yr1276_TLn());
if ((yr1266_TK() == v186)) {
((*(yR95 *)rt_nil_check(F.v3693))).f_flag = INT64_C(1);
((*(yR95 *)rt_nil_check(F.v3693))).f_ival = yr1271_TV();
yr1300_Skip();
} else {
((*(yR95 *)rt_nil_check(F.v3693))).f_name = yr1334_ExtendedId();
}
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3691))).f_a, &F.v3695, F.v3693);
if ((!yr1305_Accept(v576))) {
goto yl_3707;
}
}
yl_3707: ;
yr1316_Expect(v567);
{ void * rv3709 = F.v3691;
return rv3709; }
}
if ((F.v3697 == v393)) {
F.v3691 = yr1245_NewNode(v636, F.v3699);
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3691))).f_name = yr1322_Ident();
yr1399_ParseFormals(F.v3691);
if ((!(((*(yR95 *)rt_nil_check(F.v3691))).f_b == ((void *)0)))) {
yr1124_FailS(F.v3699, y_str("a process returns no value", 26));
}
if (yr1305_Accept(v387)) {
((*(yR95 *)rt_nil_check(F.v3691))).f_d = yr1513_ParseExpr();
}
if (yr1305_Accept(v339)) {
((*(yR95 *)rt_nil_check(F.v3691))).f_e = yr1513_ParseExpr();
}
if (yr1305_Accept(v429)) {
F.v3693 = yr1513_ParseExpr();
}
((*(yR95 *)rt_nil_check(F.v3691))).f_c = yr1360_ParseBlock();
yr1316_Expect(v285);
yr1327_CloseName(((*(yR95 *)rt_nil_check(F.v3691))).f_name, F.v3699);
{ void * rv3711 = F.v3691;
return rv3711; }
}
yr1124_FailS(F.v3699, y_str("expected a declaration", 22));
{ void * rv3713 = ((void *)0);
return rv3713; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1399_ParseFormals(void * a_p1400) {
struct yf1401 F;
memset((void *)&F, 0, sizeof F);
F.p1400 = a_p1400;
F.v3717 = ((void *)0);
F.v3719 = ((void *)0);
if (yr1305_Accept(v414)) {
((*(yR95 *)rt_nil_check(F.p1400))).f_b = yr1416_ParseRep();
}
yr1316_Expect(v564);
while ((!yr1288_Is(v567))) {
if (yr1305_Accept(v240)) {
F.v3721 = v867;
} else if (yr1305_Accept(v375)) {
F.v3721 = v870;
} else if (yr1305_Accept(v453)) {
F.v3721 = v873;
} else {
yr1124_FailS(yr1276_TLn(), y_str("a formal parameter is CONST, OUT or VAR", 39));
}
for (;;) {
F.v3717 = yr1245_NewNode(v627, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3717))).f_ival = F.v3721;
((*(yR95 *)rt_nil_check(F.v3717))).f_a = yr1370_ParseNames();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3717))).f_b = yr1405_ParseFormalRep();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.p1400))).f_a, &F.v3719, F.v3717);
if ((!((((yr1288_Is(v579) || yr1288_Is(v576))) && yr1294_IsIdAt(INT64_C(1)))))) {
goto yl_3723;
}
yr1300_Skip();
}
yl_3723: ;
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
F.v3727 = yr1245_NewNode(v666, yr1276_TLn());
yr1300_Skip();
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3727))).f_a = yr1513_ParseExpr();
yr1300_Skip();
yr1316_Expect(v363);
((*(yR95 *)rt_nil_check(F.v3727))).f_b = yr1416_ParseRep();
yr1316_Expect(v567);
{ void * rv3733 = F.v3727;
return rv3733; }
}
if (yr1288_Is(v432)) {
F.v3727 = yr1245_NewNode(v669, yr1276_TLn());
yr1300_Skip();
{ void * rv3734 = F.v3727;
return rv3734; }
}
{ void * rv3735 = yr1416_ParseRep();
return rv3735; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1410_IsStructWord(rt_int a_p1411) {
struct yf1412 F;
memset((void *)&F, 0, sizeof F);
F.p1411 = a_p1411;
F.v3739 = ((rt_int *)(v1155).p)[y_ix1(v1155, rt_add(v1234, F.p1411))];
if ((!(((rt_int *)(v1153).p)[y_ix1(v1153, rt_add(v1234, F.p1411))] == v180))) {
{ rt_int rv3743 = 0;
return rv3743; }
}
{ rt_int rv3744 = (((((((((F.v3739 == v450)) || ((F.v3739 == v372))) || ((F.v3739 == v204))) || ((F.v3739 == v210))) || ((F.v3739 == v402))) || ((F.v3739 == v312))) || ((F.v3739 == v381))) || ((F.v3739 == v423)));
return rv3744; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1416_ParseRep(void) {
struct yf1417 F;
memset((void *)&F, 0, sizeof F);
if ((yr1294_IsIdAt(INT64_C(0)) && ((yr1410_IsStructWord(INT64_C(1)) || ((yr1294_IsIdAt(INT64_C(1)) && yr1281_IsAt(INT64_C(2), v570))))))) {
F.v3747 = yr1322_Ident();
F.v3749 = yr1421_ParseConcrete();
((*(yR95 *)rt_nil_check(F.v3749))).f_text = F.v3747;
{ void * rv3754 = F.v3749;
return rv3754; }
}
{ void * rv3755 = yr1421_ParseConcrete();
return rv3755; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1421_ParseConcrete(void) {
struct yf1422 F;
memset((void *)&F, 0, sizeof F);
F.v3758 = yr1436_ParseConcrete1();
if (yr1305_Accept(v378)) {
if (((((yr1266_TK() == v186)) || ((yr1266_TK() == v177))) || yr1288_Is(v564))) {
F.v3760 = yr1518_ParseSimple();
}
}
if (yr1305_Accept(v201)) {
F.v3760 = yr1518_ParseSimple();
}
{ void * rv3761 = F.v3758;
return rv3761; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1426_ParseIds(void) {
struct yf1427 F;
memset((void *)&F, 0, sizeof F);
F.v3764 = ((void *)0);
F.v3766 = ((void *)0);
F.v3768 = ((void *)0);
for (;;) {
F.v3768 = yr1245_NewNode(v639, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3768))).f_name = yr1322_Ident();
yr1252_Link(&F.v3764, &F.v3766, F.v3768);
if ((!yr1305_Accept(v576))) {
goto yl_3769;
}
}
yl_3769: ;
{ void * rv3770 = F.v3764;
return rv3770; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1431_ParseFieldGroups(void) {
struct yf1432 F;
memset((void *)&F, 0, sizeof F);
F.v3773 = ((void *)0);
F.v3775 = ((void *)0);
F.v3777 = ((void *)0);
while ((yr1288_Is(v240) || yr1288_Is(v453))) {
F.v3779 = yr1271_TV();
yr1300_Skip();
for (;;) {
F.v3777 = yr1245_NewNode(v675, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3777))).f_ival = F.v3779;
((*(yR95 *)rt_nil_check(F.v3777))).f_a = yr1370_ParseNames();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3777))).f_b = yr1416_ParseRep();
yr1252_Link(&F.v3773, &F.v3775, F.v3777);
if ((!((yr1288_Is(v579) && yr1294_IsIdAt(INT64_C(1)))))) {
goto yl_3780;
}
yr1300_Skip();
}
yl_3780: ;
if ((!yr1305_Accept(v579))) {
{ void * rv3782 = F.v3773;
return rv3782; }
}
}
{ void * rv3783 = F.v3773;
return rv3783; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1436_ParseConcrete1(void) {
struct yf1437 F;
memset((void *)&F, 0, sizeof F);
F.v3800 = yr1276_TLn();
if ((yr1266_TK() == v177)) {
F.v3786 = yr1245_NewNode(v642, F.v3800);
((*(yR95 *)rt_nil_check(F.v3786))).f_name = yr1322_Ident();
((*(yR95 *)rt_nil_check(F.v3786))).f_a = yr1441_ParseQualifier();
{ void * rv3801 = F.v3786;
return rv3801; }
}
if ((!(yr1266_TK() == v180))) {
yr1124_FailS(F.v3800, y_str("expected a representation", 25));
}
F.v3798 = yr1271_TV();
if ((((F.v3798 == v450)) || ((F.v3798 == v372)))) {
F.v3786 = yr1245_NewNode(v645, F.v3800);
if ((F.v3798 == v372)) {
((*(yR95 *)rt_nil_check(F.v3786))).f_flag = INT64_C(1);
}
yr1300_Skip();
yr1316_Expect(v564);
((*(yR95 *)rt_nil_check(F.v3786))).f_a = yr1426_ParseIds();
yr1316_Expect(v567);
((*(yR95 *)rt_nil_check(F.v3786))).f_b = yr1441_ParseQualifier();
{ void * rv3804 = F.v3786;
return rv3804; }
}
if ((F.v3798 == v204)) {
F.v3786 = yr1245_NewNode(v648, F.v3800);
yr1300_Skip();
yr1316_Expect(v564);
F.v3796 = ((void *)0);
for (;;) {
if ((!(yr1266_TK() == v195))) {
yr1124_FailS(yr1276_TLn(), y_str("an ALPHABET lists character literals", 36));
}
F.v3794 = yr1245_NewNode(v738, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3794))).f_text = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
yr1300_Skip();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3786))).f_a, &F.v3796, F.v3794);
if ((!yr1305_Accept(v576))) {
goto yl_3805;
}
}
yl_3805: ;
yr1316_Expect(v567);
((*(yR95 *)rt_nil_check(F.v3786))).f_b = yr1441_ParseQualifier();
{ void * rv3807 = F.v3786;
return rv3807; }
}
if ((F.v3798 == v210)) {
F.v3786 = yr1245_NewNode(v651, F.v3800);
yr1300_Skip();
yr1316_Expect(v564);
F.v3796 = ((void *)0);
for (;;) {
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3786))).f_a, &F.v3796, yr1416_ParseRep());
if ((!yr1305_Accept(v576))) {
goto yl_3808;
}
}
yl_3808: ;
yr1316_Expect(v363);
((*(yR95 *)rt_nil_check(F.v3786))).f_b = yr1416_ParseRep();
yr1316_Expect(v567);
{ void * rv3809 = F.v3786;
return rv3809; }
}
if ((F.v3798 == v402)) {
F.v3786 = yr1245_NewNode(v654, F.v3800);
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3786))).f_a = yr1431_ParseFieldGroups();
if (yr1305_Accept(v420)) {
F.v3788 = yr1245_NewNode(v678, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3788))).f_name = yr1322_Ident();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3788))).f_b = yr1416_ParseRep();
F.v3792 = ((void *)0);
while (yr1305_Accept(v237)) {
F.v3790 = yr1245_NewNode(v681, yr1276_TLn());
F.v3796 = ((void *)0);
for (;;) {
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3790))).f_a, &F.v3796, yr1513_ParseExpr());
if ((!yr1305_Accept(v576))) {
goto yl_3810;
}
}
yl_3810: ;
yr1316_Expect(v504);
((*(yR95 *)rt_nil_check(F.v3790))).f_b = yr1431_ParseFieldGroups();
while (yr1305_Accept(v579)) {
}
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3788))).f_a, &F.v3792, F.v3790);
}
yr1316_Expect(v291);
if (yr1305_Accept(v579)) {
}
((*(yR95 *)rt_nil_check(F.v3786))).f_b = F.v3788;
}
yr1316_Expect(v288);
{ void * rv3811 = F.v3786;
return rv3811; }
}
if (((((F.v3798 == v312)) || ((F.v3798 == v381))) || ((F.v3798 == v423)))) {
if ((F.v3798 == v312)) {
F.v3786 = yr1245_NewNode(v657, F.v3800);
} else if ((F.v3798 == v381)) {
F.v3786 = yr1245_NewNode(v660, F.v3800);
} else {
F.v3786 = yr1245_NewNode(v663, F.v3800);
}
yr1300_Skip();
yr1316_Expect(v564);
((*(yR95 *)rt_nil_check(F.v3786))).f_a = yr1416_ParseRep();
yr1316_Expect(v567);
{ void * rv3812 = F.v3786;
return rv3812; }
}
yr1124_FailS(F.v3800, y_str("expected a representation", 25));
{ void * rv3814 = ((void *)0);
return rv3814; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1441_ParseQualifier(void) {
struct yf1442 F;
memset((void *)&F, 0, sizeof F);
if ((!yr1288_Is(v570))) {
{ void * rv3818 = ((void *)0);
return rv3818; }
}
F.v3817 = yr1245_NewNode(v672, yr1276_TLn());
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3817))).f_a = yr1513_ParseExpr();
yr1316_Expect(v507);
((*(yR95 *)rt_nil_check(F.v3817))).f_b = yr1513_ParseExpr();
yr1316_Expect(v573);
if (yr1305_Accept(v417)) {
((*(yR95 *)rt_nil_check(F.v3817))).f_c = yr1518_ParseSimple();
} else if (yr1305_Accept(v384)) {
((*(yR95 *)rt_nil_check(F.v3817))).f_d = yr1518_ParseSimple();
}
{ void * rv3819 = F.v3817;
return rv3819; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1446_IsStop(void) {
struct yf1447 F;
memset((void *)&F, 0, sizeof F);
if ((yr1266_TK() == v174)) {
{ rt_int rv3824 = 1;
return rv3824; }
}
if ((!(yr1266_TK() == v180))) {
{ rt_int rv3826 = 0;
return rv3826; }
}
F.v3822 = yr1271_TV();
{ rt_int rv3827 = ((((((((((((((((F.v3822 == v255)) || ((F.v3822 == v252))) || ((F.v3822 == v270))) || ((F.v3822 == v237))) || ((F.v3822 == v291))) || ((F.v3822 == v297))) || ((F.v3822 == v264))) || ((F.v3822 == v273))) || ((F.v3822 == v258))) || ((F.v3822 == v261))) || ((F.v3822 == v282))) || ((F.v3822 == v267))) || ((F.v3822 == v285))) || ((F.v3822 == v276))) || ((F.v3822 == v279)));
return rv3827; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1451_ParseStatements(rt_int a_p1452) {
struct yf1453 F;
memset((void *)&F, 0, sizeof F);
F.p1452 = a_p1452;
F.v3831 = ((void *)0);
F.v3833 = ((void *)0);
F.v3835 = ((void *)0);
for (;;) {
while (yr1305_Accept(v579)) {
}
if (yr1446_IsStop()) {
goto yl_3838;
}
F.v3837 = INT64_C(0);
if (((F.p1452 && yr1294_IsIdAt(INT64_C(0))) && yr1281_IsAt(INT64_C(1), v582))) {
F.v3837 = yr1322_Ident();
yr1300_Skip();
}
F.v3835 = yr1457_ParseStatement();
((*(yR95 *)rt_nil_check(F.v3835))).f_text = F.v3837;
yr1252_Link(&F.v3831, &F.v3833, F.v3835);
if ((!yr1288_Is(v579))) {
goto yl_3838;
}
}
yl_3838: ;
{ void * rv3842 = F.v3831;
return rv3842; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1457_ParseStatement(void) {
struct yf1458 F;
memset((void *)&F, 0, sizeof F);
F.v3859 = yr1276_TLn();
if ((yr1266_TK() == v180)) {
F.v3857 = yr1271_TV();
if ((F.v3857 == v216)) {
yr1300_Skip();
F.v3845 = yr1245_NewNode(v690, F.v3859);
((*(yR95 *)rt_nil_check(F.v3845))).f_a = yr1513_ParseExpr();
{ void * rv3860 = F.v3845;
return rv3860; }
}
if ((F.v3857 == v321)) {
yr1300_Skip();
F.v3845 = yr1245_NewNode(v693, F.v3859);
((*(yR95 *)rt_nil_check(F.v3845))).f_name = yr1322_Ident();
{ void * rv3861 = F.v3845;
return rv3861; }
}
if ((F.v3857 == v303)) {
yr1300_Skip();
F.v3845 = yr1245_NewNode(v696, F.v3859);
((*(yR95 *)rt_nil_check(F.v3845))).f_name = yr1322_Ident();
{ void * rv3862 = F.v3845;
return rv3862; }
}
if ((F.v3857 == v411)) {
yr1300_Skip();
F.v3845 = yr1245_NewNode(v699, F.v3859);
if ((!((yr1288_Is(v579) || yr1446_IsStop())))) {
((*(yR95 *)rt_nil_check(F.v3845))).f_a = yr1513_ParseExpr();
}
{ void * rv3863 = F.v3845;
return rv3863; }
}
if ((F.v3857 == v438)) {
yr1300_Skip();
{ void * rv3864 = yr1245_NewNode(v702, F.v3859);
return rv3864; }
}
if ((F.v3857 == v396)) {
yr1300_Skip();
F.v3845 = yr1245_NewNode(v705, F.v3859);
if (yr1294_IsIdAt(INT64_C(0))) {
((*(yR95 *)rt_nil_check(F.v3845))).f_name = yr1322_Ident();
}
{ void * rv3866 = F.v3845;
return rv3866; }
}
if ((F.v3857 == v324)) {
yr1300_Skip();
F.v3845 = yr1245_NewNode(v708, F.v3859);
F.v3849 = ((void *)0);
F.v3847 = yr1245_NewNode(v726, F.v3859);
((*(yR95 *)rt_nil_check(F.v3847))).f_a = yr1513_ParseExpr();
yr1316_Expect(v441);
((*(yR95 *)rt_nil_check(F.v3847))).f_b = yr1451_ParseStatements(0);
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3845))).f_a, &F.v3849, F.v3847);
while (yr1288_Is(v255)) {
F.v3847 = yr1245_NewNode(v726, yr1276_TLn());
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3847))).f_a = yr1513_ParseExpr();
yr1316_Expect(v441);
((*(yR95 *)rt_nil_check(F.v3847))).f_b = yr1451_ParseStatements(0);
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3845))).f_a, &F.v3849, F.v3847);
}
if (yr1305_Accept(v252)) {
((*(yR95 *)rt_nil_check(F.v3845))).f_flag = INT64_C(1);
((*(yR95 *)rt_nil_check(F.v3845))).f_b = yr1451_ParseStatements(0);
}
yr1316_Expect(v270);
{ void * rv3871 = F.v3845;
return rv3871; }
}
if ((F.v3857 == v420)) {
yr1300_Skip();
F.v3845 = yr1245_NewNode(v711, F.v3859);
((*(yR95 *)rt_nil_check(F.v3845))).f_a = yr1513_ParseExpr();
F.v3849 = ((void *)0);
while (yr1288_Is(v237)) {
F.v3847 = yr1245_NewNode(v726, yr1276_TLn());
yr1300_Skip();
F.v3853 = ((void *)0);
for (;;) {
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3847))).f_a, &F.v3853, yr1513_ParseExpr());
if ((!yr1305_Accept(v576))) {
goto yl_3872;
}
}
yl_3872: ;
yr1316_Expect(v504);
((*(yR95 *)rt_nil_check(F.v3847))).f_b = yr1451_ParseStatements(0);
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3845))).f_b, &F.v3849, F.v3847);
}
if (yr1305_Accept(v252)) {
((*(yR95 *)rt_nil_check(F.v3845))).f_flag = INT64_C(1);
((*(yR95 *)rt_nil_check(F.v3845))).f_c = yr1451_ParseStatements(0);
}
yr1316_Expect(v291);
{ void * rv3876 = F.v3845;
return rv3876; }
}
if ((F.v3857 == v456)) {
yr1300_Skip();
F.v3845 = yr1245_NewNode(v714, F.v3859);
((*(yR95 *)rt_nil_check(F.v3845))).f_a = yr1513_ParseExpr();
yr1316_Expect(v249);
((*(yR95 *)rt_nil_check(F.v3845))).f_b = yr1451_ParseStatements(0);
yr1316_Expect(v297);
{ void * rv3878 = F.v3845;
return rv3878; }
}
if ((F.v3857 == v315)) {
yr1300_Skip();
F.v3845 = yr1245_NewNode(v717, F.v3859);
((*(yR95 *)rt_nil_check(F.v3845))).f_name = yr1322_Ident();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3845))).f_a = yr1416_ParseRep();
yr1316_Expect(v249);
((*(yR95 *)rt_nil_check(F.v3845))).f_b = yr1451_ParseStatements(0);
yr1316_Expect(v264);
{ void * rv3880 = F.v3845;
return rv3880; }
}
if ((F.v3857 == v345)) {
yr1300_Skip();
F.v3845 = yr1245_NewNode(v720, F.v3859);
((*(yR95 *)rt_nil_check(F.v3845))).f_name = yr1322_Ident();
((*(yR95 *)rt_nil_check(F.v3845))).f_b = yr1451_ParseStatements(0);
yr1316_Expect(v273);
yr1327_CloseName(((*(yR95 *)rt_nil_check(F.v3845))).f_name, F.v3859);
{ void * rv3882 = F.v3845;
return rv3882; }
}
if ((((F.v3857 == v234)) || ((F.v3857 == v426)))) {
F.v3845 = yr1245_NewNode(v723, F.v3859);
if (yr1305_Accept(v426)) {
((*(yR95 *)rt_nil_check(F.v3845))).f_flag = INT64_C(1);
}
yr1316_Expect(v234);
((*(yR95 *)rt_nil_check(F.v3845))).f_a = yr1360_ParseBlock();
yr1316_Expect(v258);
{ void * rv3884 = F.v3845;
return rv3884; }
}
}
F.v3855 = yr1544_ParseDesignator();
if (yr1305_Accept(v501)) {
F.v3845 = yr1245_NewNode(v684, F.v3859);
((*(yR95 *)rt_nil_check(F.v3845))).f_a = F.v3855;
((*(yR95 *)rt_nil_check(F.v3845))).f_b = yr1513_ParseExpr();
{ void * rv3885 = F.v3845;
return rv3885; }
}
if ((!(((*(yR95 *)rt_nil_check(F.v3855))).f_kind == v750))) {
yr1124_FailS(F.v3859, y_str("expected a statement", 20));
}
F.v3845 = yr1245_NewNode(v687, F.v3859);
((*(yR95 *)rt_nil_check(F.v3845))).f_a = F.v3855;
{ void * rv3887 = F.v3845;
return rv3887; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1462_OpAt(void) {
struct yf1463 F;
memset((void *)&F, 0, sizeof F);
if ((((yr1266_TK() == v183)) || ((yr1266_TK() == v180)))) {
{ rt_int rv3889 = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
return rv3889; }
}
{ rt_int rv3891 = INT64_C(0);
return rv3891; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1467_IsRel(rt_int a_p1468) {
struct yf1469 F;
memset((void *)&F, 0, sizeof F);
F.p1468 = a_p1468;
{ rt_int rv3894 = ((((((((((((((((((((F.p1468 == v330)) || ((F.p1468 == v540))) || ((F.p1468 == v555))) || ((F.p1468 == v558))) || ((F.p1468 == v510))) || ((F.p1468 == v561))) || ((F.p1468 == v513))) || ((F.p1468 == v516))) || ((F.p1468 == v471))) || ((F.p1468 == v519))) || ((F.p1468 == v474))) || ((F.p1468 == v522))) || ((F.p1468 == v483))) || ((F.p1468 == v477))) || ((F.p1468 == v465))) || ((F.p1468 == v525))) || ((F.p1468 == v486))) || ((F.p1468 == v480))) || ((F.p1468 == v468)));
return rv3894; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1473_IsAssocMul(rt_int a_p1474) {
struct yf1475 F;
memset((void *)&F, 0, sizeof F);
F.p1474 = a_p1474;
{ rt_int rv3897 = (((F.p1474 == v549)) || ((F.p1474 == v207)));
return rv3897; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1479_IsNonAssocMul(rt_int a_p1480) {
struct yf1481 F;
memset((void *)&F, 0, sizeof F);
F.p1480 = a_p1480;
{ rt_int rv3900 = ((((((((F.p1480 == v552)) || ((F.p1480 == v246))) || ((F.p1480 == v348))) || ((F.p1480 == v528))) || ((F.p1480 == v489))) || ((F.p1480 == v531))) || ((F.p1480 == v492)));
return rv3900; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1485_IsAssocAdd(rt_int a_p1486) {
struct yf1487 F;
memset((void *)&F, 0, sizeof F);
F.p1486 = a_p1486;
{ rt_int rv3903 = (((F.p1486 == v543)) || ((F.p1486 == v369)));
return rv3903; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1491_IsNonAssocAdd(rt_int a_p1492) {
struct yf1493 F;
memset((void *)&F, 0, sizeof F);
F.p1492 = a_p1492;
{ rt_int rv3906 = (((((((F.p1492 == v546)) || ((F.p1492 == v459))) || ((F.p1492 == v534))) || ((F.p1492 == v495))) || ((F.p1492 == v537))) || ((F.p1492 == v498)));
return rv3906; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1497_Bin(rt_int a_p1498, void * a_p1499, void * a_p1500, rt_int a_p1501) {
struct yf1502 F;
memset((void *)&F, 0, sizeof F);
F.p1498 = a_p1498;
F.p1499 = a_p1499;
F.p1500 = a_p1500;
F.p1501 = a_p1501;
F.v3913 = yr1245_NewNode(v768, F.p1501);
((*(yR95 *)rt_nil_check(F.v3913))).f_name = F.p1498;
((*(yR95 *)rt_nil_check(F.v3913))).f_a = F.p1499;
((*(yR95 *)rt_nil_check(F.v3913))).f_b = F.p1500;
{ void * rv3914 = F.v3913;
return rv3914; }
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
F.v3919 = yr1016_SE();
yr1117_Fail(F.p1508, F.v3919);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1513_ParseExpr(void) {
struct yf1514 F;
memset((void *)&F, 0, sizeof F);
F.v3927 = yr1276_TLn();
F.v3923 = yr1518_ParseSimple();
F.v3925 = yr1462_OpAt();
if (yr1467_IsRel(F.v3925)) {
yr1300_Skip();
F.v3923 = yr1497_Bin(F.v3925, F.v3923, yr1518_ParseSimple(), F.v3927);
if (yr1467_IsRel(yr1462_OpAt())) {
yr1506_NeedParens(F.v3925, F.v3927);
}
}
{ void * rv3928 = F.v3923;
return rv3928; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1518_ParseSimple(void) {
struct yf1519 F;
memset((void *)&F, 0, sizeof F);
F.v3937 = yr1276_TLn();
if (yr1288_Is(v546)) {
yr1300_Skip();
F.v3933 = yr1245_NewNode(v765, F.v3937);
((*(yR95 *)rt_nil_check(F.v3933))).f_a = yr1523_ParseTerm();
F.v3935 = yr1462_OpAt();
if ((yr1485_IsAssocAdd(F.v3935) || yr1491_IsNonAssocAdd(F.v3935))) {
yr1506_NeedParens(rt_range(v546, INT64_C(0), INT64_C(4000000)), F.v3937);
}
{ void * rv3938 = F.v3933;
return rv3938; }
}
F.v3931 = yr1523_ParseTerm();
F.v3935 = yr1462_OpAt();
if (yr1491_IsNonAssocAdd(F.v3935)) {
yr1300_Skip();
F.v3931 = yr1497_Bin(F.v3935, F.v3931, yr1523_ParseTerm(), F.v3937);
if ((yr1485_IsAssocAdd(yr1462_OpAt()) || yr1491_IsNonAssocAdd(yr1462_OpAt()))) {
yr1506_NeedParens(F.v3935, F.v3937);
}
{ void * rv3939 = F.v3931;
return rv3939; }
}
while (yr1485_IsAssocAdd(F.v3935)) {
yr1300_Skip();
F.v3931 = yr1497_Bin(F.v3935, F.v3931, yr1523_ParseTerm(), F.v3937);
if (yr1491_IsNonAssocAdd(yr1462_OpAt())) {
yr1506_NeedParens(yr1462_OpAt(), F.v3937);
}
F.v3935 = yr1462_OpAt();
}
{ void * rv3940 = F.v3931;
return rv3940; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1523_ParseTerm(void) {
struct yf1524 F;
memset((void *)&F, 0, sizeof F);
F.v3947 = yr1276_TLn();
F.v3943 = yr1539_ParseFactor();
F.v3945 = yr1462_OpAt();
if (yr1479_IsNonAssocMul(F.v3945)) {
yr1300_Skip();
F.v3943 = yr1497_Bin(F.v3945, F.v3943, yr1539_ParseFactor(), F.v3947);
if ((yr1473_IsAssocMul(yr1462_OpAt()) || yr1479_IsNonAssocMul(yr1462_OpAt()))) {
yr1506_NeedParens(F.v3945, F.v3947);
}
{ void * rv3948 = F.v3943;
return rv3948; }
}
while (yr1473_IsAssocMul(F.v3945)) {
yr1300_Skip();
F.v3943 = yr1497_Bin(F.v3945, F.v3943, yr1539_ParseFactor(), F.v3947);
if (yr1479_IsNonAssocMul(yr1462_OpAt())) {
yr1506_NeedParens(yr1462_OpAt(), F.v3947);
}
F.v3945 = yr1462_OpAt();
}
{ void * rv3949 = F.v3943;
return rv3949; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1528_IsLiteralAt(rt_int a_p1529) {
struct yf1530 F;
memset((void *)&F, 0, sizeof F);
F.p1529 = a_p1529;
F.v3953 = ((rt_int *)(v1153).p)[y_ix1(v1153, rt_add(v1234, F.p1529))];
{ rt_int rv3955 = (((((((F.v3953 == v186)) || ((F.v3953 == v189))) || ((F.v3953 == v192))) || ((F.v3953 == v195))) || ((F.v3953 == v198))) || yr1281_IsAt(F.p1529, v357));
return rv3955; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1534_ParseLiteral(void) {
struct yf1535 F;
memset((void *)&F, 0, sizeof F);
F.v3960 = yr1266_TK();
F.v3962 = yr1276_TLn();
if ((F.v3960 == v186)) {
F.v3958 = yr1245_NewNode(v729, F.v3962);
((*(yR95 *)rt_nil_check(F.v3958))).f_ival = yr1271_TV();
} else if ((F.v3960 == v189)) {
F.v3958 = yr1245_NewNode(v732, F.v3962);
((*(yR95 *)rt_nil_check(F.v3958))).f_text = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v3960 == v192)) {
F.v3958 = yr1245_NewNode(v735, F.v3962);
((*(yR95 *)rt_nil_check(F.v3958))).f_text = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v3960 == v195)) {
F.v3958 = yr1245_NewNode(v738, F.v3962);
((*(yR95 *)rt_nil_check(F.v3958))).f_text = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v3960 == v198)) {
F.v3958 = yr1245_NewNode(v741, F.v3962);
((*(yR95 *)rt_nil_check(F.v3958))).f_text = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
} else {
F.v3958 = yr1245_NewNode(v744, F.v3962);
}
yr1300_Skip();
{ void * rv3963 = F.v3958;
return rv3963; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1539_ParseFactor(void) {
struct yf1540 F;
memset((void *)&F, 0, sizeof F);
F.v3970 = yr1276_TLn();
if (yr1288_Is(v360)) {
yr1300_Skip();
F.v3966 = yr1245_NewNode(v762, F.v3970);
((*(yR95 *)rt_nil_check(F.v3966))).f_a = yr1539_ParseFactor();
{ void * rv3971 = F.v3966;
return rv3971; }
}
if (yr1288_Is(v564)) {
yr1300_Skip();
F.v3966 = yr1245_NewNode(v771, F.v3970);
((*(yR95 *)rt_nil_check(F.v3966))).f_a = yr1513_ParseExpr();
yr1316_Expect(v567);
{ void * rv3972 = F.v3966;
return rv3972; }
}
if (yr1528_IsLiteralAt(INT64_C(0))) {
{ void * rv3974 = yr1534_ParseLiteral();
return rv3974; }
}
if (yr1294_IsIdAt(INT64_C(0))) {
if ((yr1528_IsLiteralAt(INT64_C(1)) || ((yr1294_IsIdAt(INT64_C(1)) && (!((((((yr1281_IsAt(INT64_C(2), v564) || yr1281_IsAt(INT64_C(2), v570)) || yr1281_IsAt(INT64_C(2), v585)) || yr1281_IsAt(INT64_C(2), v588)) || yr1281_IsAt(INT64_C(2), v501)) || yr1281_IsAt(INT64_C(2), v582)))))))) {
F.v3968 = yr1322_Ident();
if (yr1294_IsIdAt(INT64_C(0))) {
F.v3966 = yr1245_NewNode(v747, F.v3970);
((*(yR95 *)rt_nil_check(F.v3966))).f_name = yr1322_Ident();
} else {
F.v3966 = yr1534_ParseLiteral();
}
((*(yR95 *)rt_nil_check(F.v3966))).f_d = yr1245_NewNode(v639, F.v3970);
((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v3966))).f_d))).f_name = F.v3968;
{ void * rv3985 = F.v3966;
return rv3985; }
}
{ void * rv3986 = yr1544_ParseDesignator();
return rv3986; }
}
yr1132_FailN(F.v3970, yr1311_TokText(), y_str(" cannot begin an operand", 24));
{ void * rv3988 = ((void *)0);
return rv3988; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1544_ParseDesignator(void) {
struct yf1545 F;
memset((void *)&F, 0, sizeof F);
F.v3997 = yr1276_TLn();
F.v3991 = yr1245_NewNode(v747, F.v3997);
((*(yR95 *)rt_nil_check(F.v3991))).f_name = yr1322_Ident();
if (yr1305_Accept(v564)) {
((*(yR95 *)rt_nil_check(F.v3991))).f_kind = v750;
F.v3995 = ((void *)0);
while ((!yr1288_Is(v567))) {
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3991))).f_a, &F.v3995, yr1513_ParseExpr());
if ((!yr1305_Accept(v576))) {
yr1549_EXIT_ARGS();
}
}
yr1316_Expect(v567);
}
for (;;) {
if (yr1305_Accept(v585)) {
F.v3993 = yr1245_NewNode(v753, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3993))).f_a = F.v3991;
((*(yR95 *)rt_nil_check(F.v3993))).f_name = yr1322_Ident();
F.v3991 = F.v3993;
} else if (yr1305_Accept(v570)) {
F.v3993 = yr1245_NewNode(v756, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3993))).f_a = F.v3991;
F.v3995 = ((void *)0);
for (;;) {
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3993))).f_b, &F.v3995, yr1513_ParseExpr());
if ((!yr1305_Accept(v576))) {
goto yl_3999;
}
}
yl_3999: ;
yr1316_Expect(v573);
F.v3991 = F.v3993;
} else if (yr1305_Accept(v588)) {
F.v3993 = yr1245_NewNode(v759, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3993))).f_a = F.v3991;
F.v3991 = F.v3993;
} else {
goto yl_3998;
}
}
yl_3998: ;
{ void * rv4000 = F.v3991;
return rv4000; }
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
F.v4004 = ((void *)0);
F.v4006 = ((void *)0);
while ((!(yr1266_TK() == v174))) {
if ((!((yr1288_Is(v351) || yr1288_Is(v354))))) {
yr1124_FailS(yr1276_TLn(), y_str("a segment is a module (XIII.A)", 30));
}
yr1252_Link(&F.v4004, &F.v4006, yr1350_ParseModule());
while (yr1305_Accept(v579)) {
}
}
{ void * rv4008 = F.v4004;
return rv4008; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1597_NewSym(rt_int a_p1598, rt_int a_p1599) {
struct yf1600 F;
memset((void *)&F, 0, sizeof F);
F.p1598 = a_p1598;
F.p1599 = a_p1599;
({ F.v4013 = rt_alloc(sizeof(yR115)); });
(*(yR115 *)rt_nil_check(F.v4013)) = ((yR115){ .f_kind = F.p1598, .f_name = F.p1599, .f_rep = ((void *)0), .f_cname = INT64_C(0), .f_level = INT64_C(0), .f_byref = 0, .f_readonly = 0, .f_mval = INT64_C(0), .f_hasmv = 0, .f_params = ((void *)0), .f_nparams = INT64_C(0), .f_ret = ((void *)0), .f_func = 0, .f_decl = ((void *)0), .f_depth = INT64_C(0), .f_target = ((void *)0), .f_members = ((void *)0), .f_mnext = ((void *)0), .f_chain = ((void *)0), .f_stack = ((void *)0), .f_alt = ((void *)0), .f_monitor = ((void *)0), .f_serial = INT64_C(0) });
((*(yR115 *)rt_nil_check(F.v4013))).f_serial = yr1141_NewSerial();
{ void * rv4024 = F.v4013;
return rv4024; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1604_OpenScope(rt_int a_p1605) {
struct yf1606 F;
memset((void *)&F, 0, sizeof F);
F.p1605 = a_p1605;
({ F.v4028 = rt_alloc(sizeof(yR120)); });
(*(yR120 *)rt_nil_check(F.v4028)) = ((yR120){ .f_syms = ((void *)0), .f_closed = F.p1605, .f_module = ((void *)0), .f_level = v1576, .f_deferred = ((void *)0), .f_up = ((void *)0) });
if ((v1570 >= INT64_C(0))) {
((*(yR120 *)rt_nil_check(F.v4028))).f_up = ((void * *)(v1568).p)[y_ix1(v1568, v1570)];
}
v1570 = rt_range(rt_add(v1570, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1568).p)[y_ix1(v1568, v1570)] = F.v4028;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1610_CloseScope(void) {
struct yf1611 F;
memset((void *)&F, 0, sizeof F);
F.v4034 = ((*(yR120 *)rt_nil_check(((void * *)(v1568).p)[y_ix1(v1568, v1570)]))).f_syms;
while ((!(F.v4034 == ((void *)0)))) {
F.v4040 = rt_range(rt_mod(((*(yR115 *)rt_nil_check(F.v4034))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4036 = ((void * *)(v1559).p)[y_ix1(v1559, F.v4040)];
F.v4038 = ((void *)0);
while ((((!(F.v4036 == ((void *)0)))) && ((!(F.v4036 == F.v4034))))) {
F.v4038 = F.v4036;
F.v4036 = ((*(yR115 *)rt_nil_check(F.v4036))).f_chain;
}
if ((F.v4036 == F.v4034)) {
if ((F.v4038 == ((void *)0))) {
((void * *)(v1559).p)[y_ix1(v1559, F.v4040)] = ((*(yR115 *)rt_nil_check(F.v4034))).f_chain;
} else {
((*(yR115 *)rt_nil_check(F.v4038))).f_chain = ((*(yR115 *)rt_nil_check(F.v4034))).f_chain;
}
}
F.v4034 = ((*(yR115 *)rt_nil_check(F.v4034))).f_stack;
}
v1570 = rt_range(rt_sub(v1570, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1615_Visible(void * a_p1616) {
struct yf1617 F;
memset((void *)&F, 0, sizeof F);
F.p1616 = a_p1616;
{ rt_int rv4048 = (((((*(yR115 *)rt_nil_check(F.p1616))).f_depth >= v1573)) || ((((*(yR115 *)rt_nil_check(F.p1616))).f_depth == INT64_C(0))));
return rv4048; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1621_Find(rt_int a_p1622) {
struct yf1623 F;
memset((void *)&F, 0, sizeof F);
F.p1622 = a_p1622;
F.v4052 = ((void * *)(v1559).p)[y_ix1(v1559, rt_mod(F.p1622, INT64_C(8192)))];
while ((!(F.v4052 == ((void *)0)))) {
if ((((((*(yR115 *)rt_nil_check(F.v4052))).f_name == F.p1622)) && yr1615_Visible(F.v4052))) {
{ void * rv4055 = F.v4052;
return rv4055; }
}
F.v4052 = ((*(yR115 *)rt_nil_check(F.v4052))).f_chain;
}
{ void * rv4056 = ((void *)0);
return rv4056; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1627_FindHere(rt_int a_p1628) {
struct yf1629 F;
memset((void *)&F, 0, sizeof F);
F.p1628 = a_p1628;
F.v4060 = ((void * *)(v1559).p)[y_ix1(v1559, rt_mod(F.p1628, INT64_C(8192)))];
while ((!(F.v4060 == ((void *)0)))) {
if ((((((*(yR115 *)rt_nil_check(F.v4060))).f_name == F.p1628)) && ((((*(yR115 *)rt_nil_check(F.v4060))).f_depth == v1570)))) {
{ void * rv4063 = F.v4060;
return rv4063; }
}
F.v4060 = ((*(yR115 *)rt_nil_check(F.v4060))).f_chain;
}
{ void * rv4064 = ((void *)0);
return rv4064; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1633_Lookup(rt_int a_p1634, rt_int a_p1635) {
struct yf1636 F;
memset((void *)&F, 0, sizeof F);
F.p1634 = a_p1634;
F.p1635 = a_p1635;
F.v4069 = yr1621_Find(F.p1634);
if ((F.v4069 == ((void *)0))) {
yr1132_FailN(F.p1635, F.p1634, y_str(" is not declared here", 21));
}
if ((((*(yR115 *)rt_nil_check(F.v4069))).f_kind == v864)) {
F.v4071 = ((*(yR115 *)rt_nil_check(F.v4069))).f_chain;
while ((!(F.v4071 == ((void *)0)))) {
if (((((((((*(yR115 *)rt_nil_check(F.v4071))).f_name == F.p1634)) && ((((*(yR115 *)rt_nil_check(F.v4071))).f_depth == ((*(yR115 *)rt_nil_check(F.v4069))).f_depth))) && ((((*(yR115 *)rt_nil_check(F.v4071))).f_kind == v864))) && ((!(yr1686_Real(F.v4071) == yr1686_Real(F.v4069))))) && ((!(((*(yR115 *)rt_nil_check(yr1686_Real(F.v4069)))).f_kind == v843))))) {
yr1132_FailN(F.p1635, F.p1634, y_str(" is exported here by two modules: name it with FROM (X.B.4)", 59));
}
F.v4071 = ((*(yR115 *)rt_nil_check(F.v4071))).f_chain;
}
}
{ void * rv4074 = F.v4069;
return rv4074; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1640_Ambiguous(void * a_p1641) {
struct yf1642 F;
memset((void *)&F, 0, sizeof F);
F.p1641 = a_p1641;
F.v4078 = ((*(yR115 *)rt_nil_check(F.p1641))).f_chain;
while ((!(F.v4078 == ((void *)0)))) {
if ((((((((*(yR115 *)rt_nil_check(F.v4078))).f_name == ((*(yR115 *)rt_nil_check(F.p1641))).f_name)) && yr1615_Visible(F.v4078)) && ((((*(yR115 *)rt_nil_check(F.v4078))).f_kind == v843))) && ((!(((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4078))).f_rep))).f_tid == ((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.p1641))).f_rep))).f_tid))))) {
{ rt_int rv4080 = 1;
return rv4080; }
}
F.v4078 = ((*(yR115 *)rt_nil_check(F.v4078))).f_chain;
}
{ rt_int rv4082 = 0;
return rv4082; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1646_FindLit(rt_int a_p1647, void * a_p1648) {
struct yf1649 F;
memset((void *)&F, 0, sizeof F);
F.p1647 = a_p1647;
F.p1648 = a_p1648;
F.v4087 = ((void * *)(v1559).p)[y_ix1(v1559, rt_mod(F.p1647, INT64_C(8192)))];
while ((!(F.v4087 == ((void *)0)))) {
if ((((*(yR115 *)rt_nil_check(F.v4087))).f_name == F.p1647)) {
if ((((((*(yR115 *)rt_nil_check(yr1686_Real(F.v4087)))).f_kind == v843)) && ((((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(yr1686_Real(F.v4087)))).f_rep))).f_tid == ((*(yR100 *)rt_nil_check(F.p1648))).f_tid)))) {
{ void * rv4090 = F.v4087;
return rv4090; }
}
}
F.v4087 = ((*(yR115 *)rt_nil_check(F.v4087))).f_chain;
}
{ void * rv4091 = ((void *)0);
return rv4091; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1653_Define(void * a_p1654, rt_int a_p1655) {
struct yf1656 F;
memset((void *)&F, 0, sizeof F);
F.p1654 = a_p1654;
F.p1655 = a_p1655;
F.v4096 = yr1627_FindHere(((*(yR115 *)rt_nil_check(F.p1654))).f_name);
F.v4098 = rt_range(rt_mod(((*(yR115 *)rt_nil_check(F.p1654))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((((!(F.v4096 == ((void *)0)))) && (!((((((*(yR115 *)rt_nil_check(F.v4096))).f_kind == v843)) && ((((*(yR115 *)rt_nil_check(F.p1654))).f_kind == v843)))))) && (!(((((((*(yR115 *)rt_nil_check(F.p1654))).f_kind == v846)) && ((!(((*(yR115 *)rt_nil_check(F.p1654))).f_alt == ((void *)0))))) && ((((*(yR115 *)rt_nil_check(F.p1654))).f_alt == yr1686_Real(F.v4096))))))) && (!((((((*(yR115 *)rt_nil_check(F.p1654))).f_kind == v864)) && ((((*(yR115 *)rt_nil_check(F.v4096))).f_kind == v864))))))) {
yr1132_FailN(F.p1655, ((*(yR115 *)rt_nil_check(F.p1654))).f_name, y_str(" is declared twice in this scope", 32));
}
((*(yR115 *)rt_nil_check(F.p1654))).f_depth = v1570;
((*(yR115 *)rt_nil_check(F.p1654))).f_chain = ((void * *)(v1559).p)[y_ix1(v1559, F.v4098)];
((void * *)(v1559).p)[y_ix1(v1559, F.v4098)] = F.p1654;
((*(yR115 *)rt_nil_check(F.p1654))).f_stack = ((*(yR120 *)rt_nil_check(((void * *)(v1568).p)[y_ix1(v1568, v1570)]))).f_syms;
((*(yR120 *)rt_nil_check(((void * *)(v1568).p)[y_ix1(v1568, v1570)]))).f_syms = F.p1654;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1660_Path(rt_int a_p1661, rt_int a_p1662) {
struct yf1663 F;
memset((void *)&F, 0, sizeof F);
F.p1661 = a_p1661;
F.p1662 = a_p1662;
F.v4106 = rt_range(rt_sub(v1576, F.p1661), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.p1661 == INT64_C(0))) {
{ rt_int rv4109 = F.p1662;
return rv4109; }
}
yr986_SB();
if ((F.v4106 == INT64_C(0))) {
yr997_SA(y_str("F.", 2));
} else {
yr997_SA(y_str("F.up->", 6));
while ((F.v4106 > INT64_C(1))) {
yr997_SA(y_str("up->", 4));
F.v4106 = rt_range(rt_sub(F.v4106, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1004_ST(F.p1662);
{ rt_int rv4117 = yr1016_SE();
return rv4117; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1667_FramePtr(rt_int a_p1668) {
struct yf1669 F;
memset((void *)&F, 0, sizeof F);
F.p1668 = a_p1668;
F.v4121 = rt_range(rt_sub(v1576, F.p1668), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.v4121 == INT64_C(0))) {
{ rt_int rv4125 = yr1021_T(y_str("&F", 2));
return rv4125; }
}
yr986_SB();
yr997_SA(y_str("F.up", 4));
while ((F.v4121 > INT64_C(1))) {
yr997_SA(y_str("->up", 4));
F.v4121 = rt_range(rt_sub(F.v4121, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv4131 = yr1016_SE();
return rv4131; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1673_DeclStorage(rt_int a_p1674, rt_int a_p1675) {
struct yf1676 F;
memset((void *)&F, 0, sizeof F);
F.p1674 = a_p1674;
F.p1675 = a_p1675;
yr986_SB();
if ((v1576 == INT64_C(0))) {
yr997_SA(y_str("static ", 7));
}
yr1004_ST(F.p1674);
yr997_SA(y_str(" ", 1));
yr1004_ST(F.p1675);
yr997_SA(y_str(";", 1));
F.v4136 = yr1016_SE();
if ((v1576 == INT64_C(0))) {
yr1070_Put(&v948, F.v4136);
} else {
yr1070_Put(&v958, F.v4136);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1680_SymPath(void * a_p1681) {
struct yf1682 F;
memset((void *)&F, 0, sizeof F);
F.p1681 = a_p1681;
F.v4145 = yr1660_Path(((*(yR115 *)rt_nil_check(F.p1681))).f_level, ((*(yR115 *)rt_nil_check(F.p1681))).f_cname);
if (((*(yR115 *)rt_nil_check(F.p1681))).f_byref) {
yr986_SB();
yr997_SA(y_str("(*", 2));
yr1004_ST(F.v4145);
yr997_SA(y_str(")", 1));
{ rt_int rv4148 = yr1016_SE();
return rv4148; }
}
{ rt_int rv4149 = F.v4145;
return rv4149; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1686_Real(void * a_p1687) {
struct yf1688 F;
memset((void *)&F, 0, sizeof F);
F.p1687 = a_p1687;
F.v4153 = F.p1687;
while ((((*(yR115 *)rt_nil_check(F.v4153))).f_kind == v864)) {
F.v4153 = ((*(yR115 *)rt_nil_check(F.v4153))).f_target;
}
{ void * rv4154 = F.v4153;
return rv4154; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1716_NewRep(rt_int a_p1717, rt_int a_p1718) {
struct yf1719 F;
memset((void *)&F, 0, sizeof F);
F.p1717 = a_p1717;
F.p1718 = a_p1718;
({ F.v4159 = rt_alloc(sizeof(yR100)); });
(*(yR100 *)rt_nil_check(F.v4159)) = ((yR100){ .f_kind = F.p1717, .f_tid = F.p1718, .f_tname = F.p1718, .f_lo = INT64_C(0), .f_hi = INT64_C(0), .f_mlo = INT64_C(0), .f_mhi = INT64_C(0), .f_hasm = 0, .f_scale = INT64_C(0), .f_prec = INT64_C(0), .f_elem = ((void *)0), .f_idx = ((void *)0), .f_nidx = INT64_C(0), .f_link = ((void *)0), .f_lits = ((void *)0), .f_nlits = INT64_C(0), .f_fields = ((void *)0), .f_selector = ((void *)0), .f_cname = INT64_C(0), .f_dname = INT64_C(0), .f_dlevel = INT64_C(0), .f_deep = 0, .f_abstract = 0, .f_opaque = 0, .f_opaqueops = INT64_C(0), .f_ordered = 0, .f_forward = INT64_C(0), .f_fwdscope = INT64_C(0), .f_monitor = ((void *)0), .f_serial = INT64_C(0) });
((*(yR100 *)rt_nil_check(F.v4159))).f_serial = yr1141_NewSerial();
{ void * rv4180 = F.v4159;
return rv4180; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1723_CopyRep(void * a_p1724) {
struct yf1725 F;
memset((void *)&F, 0, sizeof F);
F.p1724 = a_p1724;
({ F.v4184 = rt_alloc(sizeof(yR100)); });
(*(yR100 *)rt_nil_check(F.v4184)) = (*(yR100 *)rt_nil_check(F.p1724));
((*(yR100 *)rt_nil_check(F.v4184))).f_serial = yr1141_NewSerial();
{ void * rv4185 = F.v4184;
return rv4185; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1729_IsDiscrete(void * a_p1730) {
struct yf1731 F;
memset((void *)&F, 0, sizeof F);
F.p1730 = a_p1730;
{ rt_int rv4188 = (((((((*(yR100 *)rt_nil_check(F.p1730))).f_kind == v774)) || ((((*(yR100 *)rt_nil_check(F.p1730))).f_kind == v783))) || ((((*(yR100 *)rt_nil_check(F.p1730))).f_kind == v786))) || ((((*(yR100 *)rt_nil_check(F.p1730))).f_kind == v789)));
return rv4188; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1735_IsNumeric(void * a_p1736) {
struct yf1737 F;
memset((void *)&F, 0, sizeof F);
F.p1736 = a_p1736;
{ rt_int rv4191 = ((((((*(yR100 *)rt_nil_check(F.p1736))).f_kind == v774)) || ((((*(yR100 *)rt_nil_check(F.p1736))).f_kind == v777))) || ((((*(yR100 *)rt_nil_check(F.p1736))).f_kind == v780)));
return rv4191; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1741_IsArrayLike(void * a_p1742) {
struct yf1743 F;
memset((void *)&F, 0, sizeof F);
F.p1742 = a_p1742;
{ rt_int rv4194 = ((((((*(yR100 *)rt_nil_check(F.p1742))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.p1742))).f_kind == v813))) || ((((*(yR100 *)rt_nil_check(F.p1742))).f_kind == v816)));
return rv4194; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1747_IsString(void * a_p1748) {
struct yf1749 F;
memset((void *)&F, 0, sizeof F);
F.p1748 = a_p1748;
if ((((*(yR100 *)rt_nil_check(F.p1748))).f_kind == v816)) {
{ rt_int rv4198 = 1;
return rv4198; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1748))).f_kind == v792)) && ((((*(yR100 *)rt_nil_check(F.p1748))).f_nidx == INT64_C(1))))) {
{ rt_int rv4200 = (((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p1748))).f_elem))).f_kind == v789);
return rv4200; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1748))).f_kind == v813)) && ((((*(yR100 *)rt_nil_check(F.p1748))).f_nidx == INT64_C(1))))) {
{ rt_int rv4202 = (((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p1748))).f_elem))).f_kind == v789);
return rv4202; }
}
{ rt_int rv4204 = 0;
return rv4204; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1753_Deep(void * a_p1754) {
struct yf1755 F;
memset((void *)&F, 0, sizeof F);
F.p1754 = a_p1754;
if (((((((*(yR100 *)rt_nil_check(F.p1754))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.p1754))).f_kind == v813))) || ((((*(yR100 *)rt_nil_check(F.p1754))).f_kind == v816)))) {
{ rt_int rv4208 = 1;
return rv4208; }
}
{ rt_int rv4209 = (((((*(yR100 *)rt_nil_check(F.p1754))).f_kind == v795)) && ((*(yR100 *)rt_nil_check(F.p1754))).f_deep);
return rv4209; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1759_HoldsSignal(void * a_p1760) {
struct yf1761 F;
memset((void *)&F, 0, sizeof F);
F.p1760 = a_p1760;
if ((!(((*(yR100 *)rt_nil_check(F.p1760))).f_kind == v792))) {
{ rt_int rv4213 = 0;
return rv4213; }
}
if ((((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p1760))).f_elem))).f_kind == v807)) {
{ rt_int rv4215 = 1;
return rv4215; }
}
{ rt_int rv4216 = yr1759_HoldsSignal(((*(yR100 *)rt_nil_check(F.p1760))).f_elem);
return rv4216; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1765_CType(void * a_p1766) {
struct yf1767 F;
memset((void *)&F, 0, sizeof F);
F.p1766 = a_p1766;
F.v4220 = ((*(yR100 *)rt_nil_check(F.p1766))).f_kind;
if (((((F.v4220 == v774)) || ((F.v4220 == v783))) || ((F.v4220 == v786)))) {
{ rt_int rv4222 = yr1021_T(y_str("rt_int", 6));
return rv4222; }
}
if ((F.v4220 == v789)) {
{ rt_int rv4224 = yr1021_T(y_str("unsigned char", 13));
return rv4224; }
}
if ((((F.v4220 == v780)) || ((F.v4220 == v777)))) {
{ rt_int rv4226 = yr1021_T(y_str("double", 6));
return rv4226; }
}
if (((((F.v4220 == v792)) || ((F.v4220 == v813))) || ((F.v4220 == v816)))) {
{ rt_int rv4228 = yr1021_T(y_str("yarr", 4));
return rv4228; }
}
if ((F.v4220 == v795)) {
{ rt_int rv4229 = ((*(yR100 *)rt_nil_check(F.p1766))).f_cname;
return rv4229; }
}
if ((((F.v4220 == v798)) || ((F.v4220 == v819)))) {
{ rt_int rv4231 = yr1021_T(y_str("void *", 6));
return rv4231; }
}
if ((F.v4220 == v801)) {
{ rt_int rv4233 = yr1021_T(y_str("yfile *", 7));
return rv4233; }
}
if ((F.v4220 == v804)) {
{ rt_int rv4235 = yr1021_T(y_str("yset", 4));
return rv4235; }
}
if ((F.v4220 == v807)) {
{ rt_int rv4237 = yr1021_T(y_str("ysig", 4));
return rv4237; }
}
if ((F.v4220 == v810)) {
{ rt_int rv4239 = yr1021_T(y_str("rt_lock", 7));
return rv4239; }
}
{ rt_int rv4241 = yr1021_T(y_str("void", 4));
return rv4241; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1771_DescOf(void * a_p1772) {
struct yf1773 F;
memset((void *)&F, 0, sizeof F);
F.p1772 = a_p1772;
F.v4245 = ((*(yR100 *)rt_nil_check(F.p1772))).f_kind;
if (((((F.v4245 == v774)) || ((F.v4245 == v783))) || ((F.v4245 == v786)))) {
{ rt_int rv4247 = yr1021_T(y_str("&y_d_int", 8));
return rv4247; }
}
if ((F.v4245 == v789)) {
{ rt_int rv4249 = yr1021_T(y_str("&y_d_byte", 9));
return rv4249; }
}
if ((((F.v4245 == v780)) || ((F.v4245 == v777)))) {
{ rt_int rv4251 = yr1021_T(y_str("&y_d_float", 10));
return rv4251; }
}
if ((((F.v4245 == v798)) || ((F.v4245 == v819)))) {
{ rt_int rv4253 = yr1021_T(y_str("&y_d_ptr", 8));
return rv4253; }
}
if ((F.v4245 == v804)) {
{ rt_int rv4255 = yr1021_T(y_str("&y_d_set", 8));
return rv4255; }
}
if ((((F.v4245 == v792)) || ((F.v4245 == v795)))) {
yr986_SB();
yr997_SA(y_str("&", 1));
yr1004_ST(yr1660_Path(((*(yR100 *)rt_nil_check(F.p1772))).f_dlevel, ((*(yR100 *)rt_nil_check(F.p1772))).f_dname));
{ rt_int rv4257 = yr1016_SE();
return rv4257; }
}
if ((F.v4245 == v816)) {
{ rt_int rv4259 = yr1021_T(y_str("&y_d_str", 8));
return rv4259; }
}
if ((F.v4245 == v807)) {
{ rt_int rv4261 = yr1021_T(y_str("&y_d_sig", 8));
return rv4261; }
}
{ rt_int rv4263 = yr1021_T(y_str("&y_d_opaque", 11));
return rv4263; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1777_NewDesc(void * a_p1778) {
struct yf1779 F;
memset((void *)&F, 0, sizeof F);
F.p1778 = a_p1778;
((*(yR100 *)rt_nil_check(F.p1778))).f_dname = yr1146_Fresh(y_str("yd_", 3));
((*(yR100 *)rt_nil_check(F.p1778))).f_dlevel = v1576;
yr1673_DeclStorage(yr1021_T(y_str("ydesc", 5)), ((*(yR100 *)rt_nil_check(F.p1778))).f_dname);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1783_SameType(void * a_p1784, void * a_p1785) {
struct yf1786 F;
memset((void *)&F, 0, sizeof F);
F.p1784 = a_p1784;
F.p1785 = a_p1785;
if ((((*(yR100 *)rt_nil_check(F.p1784))).f_tid == ((*(yR100 *)rt_nil_check(F.p1785))).f_tid)) {
{ rt_int rv4272 = 1;
return rv4272; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1784))).f_kind == v816)) && yr1747_IsString(F.p1785))) {
{ rt_int rv4274 = 1;
return rv4274; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1785))).f_kind == v816)) && yr1747_IsString(F.p1784))) {
{ rt_int rv4276 = 1;
return rv4276; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1784))).f_kind == v819)) && ((((*(yR100 *)rt_nil_check(F.p1785))).f_kind == v798)))) {
{ rt_int rv4278 = 1;
return rv4278; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1785))).f_kind == v819)) && ((((*(yR100 *)rt_nil_check(F.p1784))).f_kind == v798)))) {
{ rt_int rv4280 = 1;
return rv4280; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1784))).f_kind == v828)) || ((((*(yR100 *)rt_nil_check(F.p1785))).f_kind == v828)))) {
{ rt_int rv4282 = 1;
return rv4282; }
}
{ rt_int rv4284 = 0;
return rv4284; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1790_TypeClash(rt_int a_p1791, void * a_p1792, void * a_p1793) {
struct yf1794 F;
memset((void *)&F, 0, sizeof F);
F.p1791 = a_p1791;
F.p1792 = a_p1792;
F.p1793 = a_p1793;
yr986_SB();
yr997_SA(y_str("type conflict: ", 15));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1792))).f_tname);
yr997_SA(y_str(" expected, ", 11));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1793))).f_tname);
yr997_SA(y_str(" found", 6));
F.v4290 = yr1016_SE();
yr1117_Fail(F.p1791, F.v4290);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1798_CheckType(rt_int a_p1799, void * a_p1800, void * a_p1801) {
struct yf1802 F;
memset((void *)&F, 0, sizeof F);
F.p1799 = a_p1799;
F.p1800 = a_p1800;
F.p1801 = a_p1801;
if ((!yr1783_SameType(F.p1800, F.p1801))) {
yr1790_TypeClash(F.p1799, F.p1800, F.p1801);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1806_CheckRepresented(void * a_p1807, rt_int a_p1808) {
struct yf1809 F;
memset((void *)&F, 0, sizeof F);
F.p1807 = a_p1807;
F.p1808 = a_p1808;
if (((*(yR100 *)rt_nil_check(F.p1807))).f_abstract) {
yr1132_FailN(F.p1808, ((*(yR100 *)rt_nil_check(F.p1807))).f_tname, y_str(" is a type, not a representation (VI.A.1)", 41));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1813_IsLiteralNode(void * a_p1814) {
struct yf1815 F;
memset((void *)&F, 0, sizeof F);
F.p1814 = a_p1814;
if ((((((((*(yR95 *)rt_nil_check(F.p1814))).f_kind == v729)) || ((((*(yR95 *)rt_nil_check(F.p1814))).f_kind == v735))) || ((((*(yR95 *)rt_nil_check(F.p1814))).f_kind == v732))) || ((((*(yR95 *)rt_nil_check(F.p1814))).f_kind == v738)))) {
{ rt_int rv4304 = (((*(yR95 *)rt_nil_check(F.p1814))).f_d == ((void *)0));
return rv4304; }
}
if ((((((*(yR95 *)rt_nil_check(F.p1814))).f_kind == v765)) || ((((*(yR95 *)rt_nil_check(F.p1814))).f_kind == v771)))) {
{ rt_int rv4305 = yr1813_IsLiteralNode(((*(yR95 *)rt_nil_check(F.p1814))).f_a);
return rv4305; }
}
{ rt_int rv4307 = 0;
return rv4307; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1819_StoreBounds(void * a_p1820, yarr a_p1822) {
struct yf1823 F;
memset((void *)&F, 0, sizeof F);
F.p1820 = a_p1820;
F.p1822 = a_p1822;
F.v4312 = yr1146_Fresh(y_str("lo", 2));
F.v4314 = yr1146_Fresh(y_str("hi", 2));
yr1673_DeclStorage(yr1021_T(F.p1822), F.v4312);
yr1673_DeclStorage(yr1021_T(F.p1822), F.v4314);
yr1092_Emit(yr2495_Join(yr1660_Path(v1576, F.v4312), yr1021_T(y_str(" = ", 3)), yr2495_Join(((*(yR100 *)rt_nil_check(F.p1820))).f_lo, yr1021_T(y_str(";", 1)), INT64_C(0))));
yr1092_Emit(yr2495_Join(yr1660_Path(v1576, F.v4314), yr1021_T(y_str(" = ", 3)), yr2495_Join(((*(yR100 *)rt_nil_check(F.p1820))).f_hi, yr1021_T(y_str(";", 1)), INT64_C(0))));
((*(yR100 *)rt_nil_check(F.p1820))).f_lo = F.v4312;
((*(yR100 *)rt_nil_check(F.p1820))).f_hi = F.v4314;
((*(yR100 *)rt_nil_check(F.p1820))).f_dname = F.v4312;
((*(yR100 *)rt_nil_check(F.p1820))).f_dlevel = v1576;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1827_LoText(void * a_p1828) {
struct yf1829 F;
memset((void *)&F, 0, sizeof F);
F.p1828 = a_p1828;
if ((((((!(((*(yR100 *)rt_nil_check(F.p1828))).f_dname == INT64_C(0)))) && ((!(((*(yR100 *)rt_nil_check(F.p1828))).f_lo == INT64_C(0))))) && ((!(((*(yR100 *)rt_nil_check(F.p1828))).f_kind == v792)))) && ((!(((*(yR100 *)rt_nil_check(F.p1828))).f_kind == v795))))) {
{ rt_int rv4327 = yr1660_Path(((*(yR100 *)rt_nil_check(F.p1828))).f_dlevel, ((*(yR100 *)rt_nil_check(F.p1828))).f_lo);
return rv4327; }
}
{ rt_int rv4328 = ((*(yR100 *)rt_nil_check(F.p1828))).f_lo;
return rv4328; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1833_HiText(void * a_p1834) {
struct yf1835 F;
memset((void *)&F, 0, sizeof F);
F.p1834 = a_p1834;
if ((((((!(((*(yR100 *)rt_nil_check(F.p1834))).f_dname == INT64_C(0)))) && ((!(((*(yR100 *)rt_nil_check(F.p1834))).f_hi == INT64_C(0))))) && ((!(((*(yR100 *)rt_nil_check(F.p1834))).f_kind == v792)))) && ((!(((*(yR100 *)rt_nil_check(F.p1834))).f_kind == v795))))) {
{ rt_int rv4333 = yr1660_Path(((*(yR100 *)rt_nil_check(F.p1834))).f_dlevel, ((*(yR100 *)rt_nil_check(F.p1834))).f_hi);
return rv4333; }
}
{ rt_int rv4334 = ((*(yR100 *)rt_nil_check(F.p1834))).f_hi;
return rv4334; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1839_Qualify(void * a_p1840, void * a_p1841) {
struct yf1842 F;
memset((void *)&F, 0, sizeof F);
F.p1840 = a_p1840;
F.p1841 = a_p1841;
yr2140_Expr(((*(yR95 *)rt_nil_check(F.p1841))).f_a, F.p1840, &F.v4339, &F.v4343);
yr2140_Expr(((*(yR95 *)rt_nil_check(F.p1841))).f_b, F.p1840, &F.v4341, &F.v4345);
if ((((((*(yR100 *)rt_nil_check(F.p1840))).f_kind == v780)) || ((((*(yR100 *)rt_nil_check(F.p1840))).f_kind == v777)))) {
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.p1841))).f_line, F.p1840, F.v4343);
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.p1841))).f_line, F.p1840, F.v4345);
((*(yR100 *)rt_nil_check(F.p1840))).f_lo = F.v4339;
((*(yR100 *)rt_nil_check(F.p1840))).f_hi = F.v4341;
((*(yR100 *)rt_nil_check(F.p1840))).f_dname = INT64_C(0);
if ((!((yr1813_IsLiteralNode(((*(yR95 *)rt_nil_check(F.p1841))).f_a) && yr1813_IsLiteralNode(((*(yR95 *)rt_nil_check(F.p1841))).f_b))))) {
yr1819_StoreBounds(F.p1840, y_str("double", 6));
}
if ((((*(yR100 *)rt_nil_check(F.p1840))).f_kind == v780)) {
if ((((*(yR95 *)rt_nil_check(F.p1841))).f_d == ((void *)0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1841))).f_line, y_str("FLOATING needs PRECISION (VI.A.1.c)", 35));
}
yr2075_Manifest(((*(yR95 *)rt_nil_check(F.p1841))).f_d, &F.v4347, &F.v4349);
if ((!F.v4347)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1841))).f_line, y_str("PRECISION is a manifest constant", 32));
}
yr986_SB();
yr1010_SI(F.v4349);
((*(yR100 *)rt_nil_check(F.p1840))).f_prec = yr1016_SE();
} else {
if ((((*(yR95 *)rt_nil_check(F.p1841))).f_c == ((void *)0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1841))).f_line, y_str("FIXED needs SCALE (VI.A.1.b)", 28));
}
yr2140_Expr(((*(yR95 *)rt_nil_check(F.p1841))).f_c, F.p1840, &((*(yR100 *)rt_nil_check(F.p1840))).f_scale, &F.v4343);
}
((*(yR100 *)rt_nil_check(F.p1840))).f_abstract = 0;
return;
}
if ((!yr1729_IsDiscrete(F.p1840))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1841))).f_line, y_str("only a scalar or integer representation takes a range", 53));
}
if ((((!(((*(yR95 *)rt_nil_check(F.p1841))).f_c == ((void *)0)))) || ((!(((*(yR95 *)rt_nil_check(F.p1841))).f_d == ((void *)0)))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1841))).f_line, y_str("SCALE and PRECISION qualify numbers", 35));
}
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.p1841))).f_line, F.p1840, F.v4343);
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.p1841))).f_line, F.p1840, F.v4345);
((*(yR100 *)rt_nil_check(F.p1840))).f_lo = F.v4339;
((*(yR100 *)rt_nil_check(F.p1840))).f_hi = F.v4341;
yr2075_Manifest(((*(yR95 *)rt_nil_check(F.p1841))).f_a, &F.v4347, &((*(yR100 *)rt_nil_check(F.p1840))).f_mlo);
((*(yR100 *)rt_nil_check(F.p1840))).f_hasm = F.v4347;
yr2075_Manifest(((*(yR95 *)rt_nil_check(F.p1841))).f_b, &F.v4347, &((*(yR100 *)rt_nil_check(F.p1840))).f_mhi);
((*(yR100 *)rt_nil_check(F.p1840))).f_hasm = (((*(yR100 *)rt_nil_check(F.p1840))).f_hasm && F.v4347);
((*(yR100 *)rt_nil_check(F.p1840))).f_abstract = 0;
((*(yR100 *)rt_nil_check(F.p1840))).f_dname = INT64_C(0);
if ((!((*(yR100 *)rt_nil_check(F.p1840))).f_hasm)) {
yr1819_StoreBounds(F.p1840, y_str("rt_int", 6));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1846_DefineLits(void * a_p1847) {
struct yf1848 F;
memset((void *)&F, 0, sizeof F);
F.p1847 = a_p1847;
F.v4364 = ((*(yR100 *)rt_nil_check(F.p1847))).f_lits;
F.v4368 = INT64_C(0);
while ((!(F.v4364 == ((void *)0)))) {
if ((!(yr1621_Find(((*(yR95 *)rt_nil_check(F.v4364))).f_name) == ((void *)0)))) {
F.v4366 = yr1621_Find(((*(yR95 *)rt_nil_check(F.v4364))).f_name);
if ((((!(((*(yR115 *)rt_nil_check(F.v4366))).f_kind == v843))) && ((((*(yR115 *)rt_nil_check(F.v4366))).f_depth == v1570)))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.v4364))).f_line, ((*(yR95 *)rt_nil_check(F.v4364))).f_name, y_str(" is declared twice in this scope", 32));
}
}
F.v4366 = yr1597_NewSym(v843, ((*(yR95 *)rt_nil_check(F.v4364))).f_name);
((*(yR115 *)rt_nil_check(F.v4366))).f_rep = F.p1847;
((*(yR115 *)rt_nil_check(F.v4366))).f_mval = F.v4368;
((*(yR115 *)rt_nil_check(F.v4366))).f_hasmv = 1;
yr1653_Define(F.v4366, ((*(yR95 *)rt_nil_check(F.v4364))).f_line);
F.v4368 = rt_range(rt_add(F.v4368, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4364 = ((*(yR95 *)rt_nil_check(F.v4364))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1852_SetRange(void * a_p1853, rt_int a_p1854, rt_int a_p1855) {
struct yf1856 F;
memset((void *)&F, 0, sizeof F);
F.p1853 = a_p1853;
F.p1854 = a_p1854;
F.p1855 = a_p1855;
yr986_SB();
yr1010_SI(F.p1854);
((*(yR100 *)rt_nil_check(F.p1853))).f_lo = yr1016_SE();
yr986_SB();
yr1010_SI(F.p1855);
((*(yR100 *)rt_nil_check(F.p1853))).f_hi = yr1016_SE();
((*(yR100 *)rt_nil_check(F.p1853))).f_mlo = F.p1854;
((*(yR100 *)rt_nil_check(F.p1853))).f_mhi = F.p1855;
((*(yR100 *)rt_nil_check(F.p1853))).f_hasm = 1;
((*(yR100 *)rt_nil_check(F.p1853))).f_dname = INT64_C(0);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1860_NewTid(rt_int a_p1861) {
struct yf1862 F;
memset((void *)&F, 0, sizeof F);
F.p1861 = a_p1861;
F.v4383 = yr1141_NewSerial();
yr986_SB();
if ((!(F.p1861 == INT64_C(0)))) {
yr1004_ST(F.p1861);
} else {
yr997_SA(y_str("anonymous", 9));
}
yr997_SA(y_str("#", 1));
yr1010_SI(F.v4383);
{ rt_int rv4387 = yr1016_SE();
return rv4387; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1866_MakeRep(void * a_p1867, rt_int a_p1868, rt_int a_p1869) {
struct yf1870 F;
memset((void *)&F, 0, sizeof F);
F.p1867 = a_p1867;
F.p1868 = a_p1868;
F.p1869 = a_p1869;
F.v4403 = ((*(yR95 *)rt_nil_check(F.p1867))).f_kind;
F.v4407 = INT64_C(0);
F.v4409 = F.p1868;
if ((!(((*(yR95 *)rt_nil_check(F.p1867))).f_text == INT64_C(0)))) {
F.v4401 = yr1686_Real(yr1633_Lookup(((*(yR95 *)rt_nil_check(F.p1867))).f_text, ((*(yR95 *)rt_nil_check(F.p1867))).f_line));
if ((((!(((*(yR115 *)rt_nil_check(F.v4401))).f_kind == v840))) && ((!(((*(yR115 *)rt_nil_check(F.v4401))).f_kind == v837))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p1867))).f_line, ((*(yR95 *)rt_nil_check(F.p1867))).f_text, y_str(" is not a type", 14));
}
F.v4407 = ((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4401))).f_rep))).f_tid;
F.v4409 = ((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4401))).f_rep))).f_tname;
}
if ((F.v4403 == v642)) {
F.v4401 = yr1686_Real(yr1633_Lookup(((*(yR95 *)rt_nil_check(F.p1867))).f_name, ((*(yR95 *)rt_nil_check(F.p1867))).f_line));
if ((((!(((*(yR115 *)rt_nil_check(F.v4401))).f_kind == v840))) && ((!(((*(yR115 *)rt_nil_check(F.v4401))).f_kind == v837))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p1867))).f_line, ((*(yR95 *)rt_nil_check(F.p1867))).f_name, y_str(" is not a representation", 24));
}
F.v4393 = ((*(yR115 *)rt_nil_check(F.v4401))).f_rep;
if ((!(((*(yR95 *)rt_nil_check(F.p1867))).f_a == ((void *)0)))) {
F.v4393 = yr1723_CopyRep(F.v4393);
yr1839_Qualify(F.v4393, ((*(yR95 *)rt_nil_check(F.p1867))).f_a);
}
{ void * rv4414 = F.v4393;
return rv4414; }
}
if ((F.v4407 == INT64_C(0))) {
F.v4407 = yr1860_NewTid(F.p1868);
if ((F.v4409 == INT64_C(0))) {
F.v4409 = F.v4407;
}
}
if ((F.v4403 == v645)) {
F.v4393 = yr1716_NewRep(v786, F.v4407);
((*(yR100 *)rt_nil_check(F.v4393))).f_tname = F.v4409;
((*(yR100 *)rt_nil_check(F.v4393))).f_ordered = (((*(yR95 *)rt_nil_check(F.p1867))).f_flag == INT64_C(1));
((*(yR100 *)rt_nil_check(F.v4393))).f_lits = ((*(yR95 *)rt_nil_check(F.p1867))).f_a;
((*(yR100 *)rt_nil_check(F.v4393))).f_nlits = yr1260_Count(((*(yR95 *)rt_nil_check(F.p1867))).f_a);
yr1852_SetRange(F.v4393, INT64_C(0), rt_range(rt_sub(((*(yR100 *)rt_nil_check(F.v4393))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1846_DefineLits(F.v4393);
if ((!(((*(yR95 *)rt_nil_check(F.p1867))).f_b == ((void *)0)))) {
yr1839_Qualify(F.v4393, ((*(yR95 *)rt_nil_check(F.p1867))).f_b);
}
{ void * rv4421 = F.v4393;
return rv4421; }
}
if ((F.v4403 == v648)) {
F.v4393 = yr1716_NewRep(v789, F.v4407);
((*(yR100 *)rt_nil_check(F.v4393))).f_tname = F.v4409;
((*(yR100 *)rt_nil_check(F.v4393))).f_ordered = 1;
((*(yR100 *)rt_nil_check(F.v4393))).f_lits = ((*(yR95 *)rt_nil_check(F.p1867))).f_a;
((*(yR100 *)rt_nil_check(F.v4393))).f_nlits = yr1260_Count(((*(yR95 *)rt_nil_check(F.p1867))).f_a);
if ((((*(yR100 *)rt_nil_check(F.v4393))).f_nlits > INT64_C(256))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1867))).f_line, y_str("this implementation takes alphabets of up to 256 characters", 59));
}
yr1852_SetRange(F.v4393, INT64_C(0), rt_range(rt_sub(((*(yR100 *)rt_nil_check(F.v4393))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((!(((*(yR95 *)rt_nil_check(F.p1867))).f_b == ((void *)0)))) {
yr1839_Qualify(F.v4393, ((*(yR95 *)rt_nil_check(F.p1867))).f_b);
}
{ void * rv4428 = F.v4393;
return rv4428; }
}
if ((F.v4403 == v651)) {
F.v4393 = yr1716_NewRep(v792, F.v4407);
((*(yR100 *)rt_nil_check(F.v4393))).f_tname = F.v4409;
F.v4405 = ((*(yR95 *)rt_nil_check(F.p1867))).f_a;
F.v4399 = ((void *)0);
while ((!(F.v4405 == ((void *)0)))) {
F.v4397 = yr1723_CopyRep(yr1866_MakeRep(F.v4405, INT64_C(0), 0));
if ((!yr1729_IsDiscrete(F.v4397))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v4405))).f_line, y_str("an index is an integer or scalar representation", 47));
}
yr1806_CheckRepresented(F.v4397, ((*(yR95 *)rt_nil_check(F.v4405))).f_line);
((*(yR100 *)rt_nil_check(F.v4397))).f_link = ((void *)0);
if ((F.v4399 == ((void *)0))) {
((*(yR100 *)rt_nil_check(F.v4393))).f_idx = F.v4397;
} else {
((*(yR100 *)rt_nil_check(F.v4399))).f_link = F.v4397;
}
F.v4399 = F.v4397;
((*(yR100 *)rt_nil_check(F.v4393))).f_nidx = rt_range(rt_add(((*(yR100 *)rt_nil_check(F.v4393))).f_nidx, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4405 = ((*(yR95 *)rt_nil_check(F.v4405))).f_next;
}
if ((((*(yR100 *)rt_nil_check(F.v4393))).f_nidx > INT64_C(4))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1867))).f_line, y_str("this implementation takes arrays of up to 4 dimensions", 54));
}
((*(yR100 *)rt_nil_check(F.v4393))).f_elem = yr1866_MakeRep(((*(yR95 *)rt_nil_check(F.p1867))).f_b, INT64_C(0), F.p1869);
if ((!F.p1869)) {
yr1806_CheckRepresented(((*(yR100 *)rt_nil_check(F.v4393))).f_elem, ((*(yR95 *)rt_nil_check(F.p1867))).f_line);
yr1886_BuildArrayDesc(F.v4393);
} else {
((*(yR100 *)rt_nil_check(F.v4393))).f_abstract = ((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.v4393))).f_elem))).f_abstract;
if ((!((*(yR100 *)rt_nil_check(F.v4393))).f_abstract)) {
yr1886_BuildArrayDesc(F.v4393);
}
}
((*(yR100 *)rt_nil_check(F.v4393))).f_deep = 1;
{ void * rv4438 = F.v4393;
return rv4438; }
}
if ((F.v4403 == v654)) {
F.v4393 = yr1716_NewRep(v795, F.v4407);
((*(yR100 *)rt_nil_check(F.v4393))).f_tname = F.v4409;
yr1916_MakeRecord(F.v4393, F.p1867, F.p1869);
{ void * rv4439 = F.v4393;
return rv4439; }
}
if (((((F.v4403 == v660)) || ((F.v4403 == v657))) || ((F.v4403 == v663)))) {
if ((F.v4403 == v660)) {
F.v4393 = yr1716_NewRep(v798, F.v4407);
((*(yR100 *)rt_nil_check(F.v4393))).f_tname = F.v4409;
if (((((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p1867))).f_a))).f_kind == v642)) && ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p1867))).f_a))).f_a == ((void *)0)))) && ((yr1621_Find(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p1867))).f_a))).f_name) == ((void *)0))))) {
((*(yR100 *)rt_nil_check(F.v4393))).f_forward = ((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p1867))).f_a))).f_name;
((*(yR100 *)rt_nil_check(F.v4393))).f_fwdscope = v1570;
F.v4405 = yr1245_NewNode(v639, ((*(yR95 *)rt_nil_check(F.p1867))).f_line);
((*(yR95 *)rt_nil_check(F.v4405))).f_rep = F.v4393;
((*(yR95 *)rt_nil_check(F.v4405))).f_next = v1714;
v1714 = F.v4405;
{ void * rv4440 = F.v4393;
return rv4440; }
}
((*(yR100 *)rt_nil_check(F.v4393))).f_elem = yr1866_MakeRep(((*(yR95 *)rt_nil_check(F.p1867))).f_a, INT64_C(0), 0);
{ void * rv4443 = F.v4393;
return rv4443; }
}
if ((F.v4403 == v657)) {
F.v4393 = yr1716_NewRep(v801, F.v4407);
((*(yR100 *)rt_nil_check(F.v4393))).f_tname = F.v4409;
((*(yR100 *)rt_nil_check(F.v4393))).f_elem = yr1866_MakeRep(((*(yR95 *)rt_nil_check(F.p1867))).f_a, INT64_C(0), F.p1869);
{ void * rv4445 = F.v4393;
return rv4445; }
}
F.v4393 = yr1716_NewRep(v804, F.v4407);
((*(yR100 *)rt_nil_check(F.v4393))).f_tname = F.v4409;
((*(yR100 *)rt_nil_check(F.v4393))).f_elem = yr1866_MakeRep(((*(yR95 *)rt_nil_check(F.p1867))).f_a, INT64_C(0), 0);
if ((!yr1729_IsDiscrete(((*(yR100 *)rt_nil_check(F.v4393))).f_elem))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1867))).f_line, y_str("a set is of an integer or scalar representation", 47));
}
yr1806_CheckRepresented(((*(yR100 *)rt_nil_check(F.v4393))).f_elem, ((*(yR95 *)rt_nil_check(F.p1867))).f_line);
{ void * rv4449 = F.v4393;
return rv4449; }
}
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1867))).f_line, y_str("this representation is not translated", 37));
{ void * rv4451 = ((void *)0);
return rv4451; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1874_ResolvePending(rt_int a_p1875, void * a_p1876) {
struct yf1877 F;
memset((void *)&F, 0, sizeof F);
F.p1875 = a_p1875;
F.p1876 = a_p1876;
F.v4456 = v1714;
F.v4458 = ((void *)0);
while ((!(F.v4456 == ((void *)0)))) {
if ((((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4456))).f_rep))).f_forward == F.p1875)) {
((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4456))).f_rep))).f_elem = F.p1876;
((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4456))).f_rep))).f_forward = INT64_C(0);
if ((F.v4458 == ((void *)0))) {
v1714 = ((*(yR95 *)rt_nil_check(F.v4456))).f_next;
} else {
((*(yR95 *)rt_nil_check(F.v4458))).f_next = ((*(yR95 *)rt_nil_check(F.v4456))).f_next;
}
} else {
F.v4458 = F.v4456;
}
F.v4456 = ((*(yR95 *)rt_nil_check(F.v4456))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1881_CheckPending(void) {
struct yf1882 F;
memset((void *)&F, 0, sizeof F);
F.v4462 = v1714;
while ((!(F.v4462 == ((void *)0)))) {
if ((((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4462))).f_rep))).f_fwdscope >= v1570)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.v4462))).f_line, ((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4462))).f_rep))).f_forward, y_str(" is named by a pointer but not declared", 39));
}
F.v4462 = ((*(yR95 *)rt_nil_check(F.v4462))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1886_BuildArrayDesc(void * a_p1887) {
struct yf1888 F;
memset((void *)&F, 0, sizeof F);
F.p1887 = a_p1887;
yr1777_NewDesc(F.p1887);
yr986_SB();
yr997_SA(y_str("{ rt_int lo[", 12));
yr1010_SI(((*(yR100 *)rt_nil_check(F.p1887))).f_nidx);
yr997_SA(y_str("] = {", 5));
F.v4467 = ((*(yR100 *)rt_nil_check(F.p1887))).f_idx;
F.v4471 = 1;
while ((!(F.v4467 == ((void *)0)))) {
if ((!F.v4471)) {
yr997_SA(y_str(", ", 2));
}
F.v4471 = 0;
yr1004_ST(yr1827_LoText(F.v4467));
F.v4467 = ((*(yR100 *)rt_nil_check(F.v4467))).f_link;
}
yr997_SA(y_str("}, hi[", 6));
yr1010_SI(((*(yR100 *)rt_nil_check(F.p1887))).f_nidx);
yr997_SA(y_str("] = {", 5));
F.v4467 = ((*(yR100 *)rt_nil_check(F.p1887))).f_idx;
F.v4471 = 1;
while ((!(F.v4467 == ((void *)0)))) {
if ((!F.v4471)) {
yr997_SA(y_str(", ", 2));
}
F.v4471 = 0;
yr1004_ST(yr1833_HiText(F.v4467));
F.v4467 = ((*(yR100 *)rt_nil_check(F.v4467))).f_link;
}
yr997_SA(y_str("}; y_desc_array(", 16));
yr1004_ST(yr1771_DescOf(F.p1887));
yr997_SA(y_str(", ", 2));
yr1010_SI(((*(yR100 *)rt_nil_check(F.p1887))).f_nidx);
yr997_SA(y_str(", lo, hi, ", 10));
yr1004_ST(yr1771_DescOf(((*(yR100 *)rt_nil_check(F.p1887))).f_elem));
yr997_SA(y_str("); }", 4));
F.v4469 = yr1016_SE();
yr1092_Emit(F.v4469);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1892_AddField(void * a_p1893, void * * a_p1894, rt_int a_p1895, void * a_p1896, rt_int a_p1897, rt_int a_p1898, void * a_p1899, rt_int a_p1900) {
struct yf1901 F;
memset((void *)&F, 0, sizeof F);
F.p1893 = a_p1893;
F.p1894 = a_p1894;
F.p1895 = a_p1895;
F.p1896 = a_p1896;
F.p1897 = a_p1897;
F.p1898 = a_p1898;
F.p1899 = a_p1899;
F.p1900 = a_p1900;
F.v4496 = ((*(yR100 *)rt_nil_check(F.p1893))).f_fields;
while ((!(F.v4496 == ((void *)0)))) {
if ((((*(yR105 *)rt_nil_check(F.v4496))).f_name == F.p1895)) {
yr1132_FailN(F.p1900, F.p1895, y_str(" is a component twice", 21));
}
F.v4496 = ((*(yR105 *)rt_nil_check(F.v4496))).f_next;
}
({ F.v4496 = rt_alloc(sizeof(yR105)); });
(*(yR105 *)rt_nil_check(F.v4496)) = ((yR105){ .f_name = F.p1895, .f_rep = F.p1896, .f_isconst = F.p1897, .f_variant = F.p1898, .f_labels = F.p1899, .f_next = ((void *)0) });
if (((*F.p1894) == ((void *)0))) {
((*(yR100 *)rt_nil_check(F.p1893))).f_fields = F.v4496;
} else {
((*(yR105 *)rt_nil_check((*F.p1894)))).f_next = F.v4496;
}
(*F.p1894) = F.v4496;
if (yr1753_Deep(F.p1896)) {
((*(yR100 *)rt_nil_check(F.p1893))).f_deep = 1;
}
if (((*(yR100 *)rt_nil_check(F.p1896))).f_abstract) {
((*(yR100 *)rt_nil_check(F.p1893))).f_abstract = 1;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1905_AddFields(void * a_p1906, void * * a_p1907, void * a_p1908, rt_int a_p1909, void * a_p1910, rt_int a_p1911) {
struct yf1912 F;
memset((void *)&F, 0, sizeof F);
F.p1906 = a_p1906;
F.p1907 = a_p1907;
F.p1908 = a_p1908;
F.p1909 = a_p1909;
F.p1910 = a_p1910;
F.p1911 = a_p1911;
F.v4508 = F.p1908;
F.v4510 = F.p1908;
while ((!(F.v4508 == ((void *)0)))) {
F.v4512 = yr1866_MakeRep(((*(yR95 *)rt_nil_check(F.v4508))).f_b, INT64_C(0), F.p1911);
if ((!F.p1911)) {
yr1806_CheckRepresented(F.v4512, ((*(yR95 *)rt_nil_check(F.v4508))).f_line);
}
if ((((((*(yR100 *)rt_nil_check(F.v4512))).f_kind == v807)) || ((((*(yR100 *)rt_nil_check(F.v4512))).f_kind == v801)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v4508))).f_line, y_str("this implementation does not keep signals or files in records", 61));
}
F.v4510 = ((*(yR95 *)rt_nil_check(F.v4508))).f_a;
while ((!(F.v4510 == ((void *)0)))) {
yr1892_AddField(F.p1906, &(*F.p1907), ((*(yR95 *)rt_nil_check(F.v4510))).f_name, F.v4512, (((*(yR95 *)rt_nil_check(F.v4508))).f_ival == v240), F.p1909, F.p1910, ((*(yR95 *)rt_nil_check(F.v4510))).f_line);
F.v4510 = ((*(yR95 *)rt_nil_check(F.v4510))).f_next;
}
F.v4508 = ((*(yR95 *)rt_nil_check(F.v4508))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1916_MakeRecord(void * a_p1917, void * a_p1918, rt_int a_p1919) {
struct yf1920 F;
memset((void *)&F, 0, sizeof F);
F.p1917 = a_p1917;
F.p1918 = a_p1918;
F.p1919 = a_p1919;
F.v4520 = ((void *)0);
F.v4528 = INT64_C(0);
F.v4535 = INT64_C(0);
yr1905_AddFields(F.p1917, &F.v4520, ((*(yR95 *)rt_nil_check(F.p1918))).f_a, INT64_C(0), ((void *)0), F.p1919);
if ((!(((*(yR95 *)rt_nil_check(F.p1918))).f_b == ((void *)0)))) {
F.v4522 = ((*(yR95 *)rt_nil_check(F.p1918))).f_b;
F.v4526 = yr1866_MakeRep(((*(yR95 *)rt_nil_check(F.v4522))).f_b, INT64_C(0), 0);
if ((!yr1729_IsDiscrete(F.v4526))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v4522))).f_line, y_str("the case-selection component is integer or scalar", 49));
}
yr1892_AddField(F.p1917, &F.v4520, ((*(yR95 *)rt_nil_check(F.v4522))).f_name, F.v4526, 1, INT64_C(0), ((void *)0), ((*(yR95 *)rt_nil_check(F.v4522))).f_line);
((*(yR100 *)rt_nil_check(F.p1917))).f_selector = F.v4520;
F.v4524 = ((*(yR95 *)rt_nil_check(F.v4522))).f_a;
while ((!(F.v4524 == ((void *)0)))) {
F.v4528 = rt_range(rt_add(F.v4528, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1905_AddFields(F.p1917, &F.v4520, ((*(yR95 *)rt_nil_check(F.v4524))).f_b, F.v4528, ((*(yR95 *)rt_nil_check(F.v4524))).f_a, F.p1919);
F.v4524 = ((*(yR95 *)rt_nil_check(F.v4524))).f_next;
}
}
if ((F.p1919 && ((*(yR100 *)rt_nil_check(F.p1917))).f_abstract)) {
return;
}
((*(yR100 *)rt_nil_check(F.p1917))).f_abstract = 0;
((*(yR100 *)rt_nil_check(F.p1917))).f_cname = yr1146_Fresh(y_str("yR", 2));
yr986_SB();
yr997_SA(y_str("typedef struct ", 15));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1917))).f_cname);
yr997_SA(y_str(" ", 1));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1917))).f_cname);
yr997_SA(y_str(";", 1));
F.v4533 = yr1016_SE();
yr1070_Put(&v942, F.v4533);
yr986_SB();
yr997_SA(y_str("struct ", 7));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1917))).f_cname);
yr997_SA(y_str(" {", 2));
F.v4531 = ((*(yR100 *)rt_nil_check(F.p1917))).f_fields;
while ((!(F.v4531 == ((void *)0)))) {
yr997_SA(y_str(" ", 1));
yr1004_ST(yr1765_CType(((*(yR105 *)rt_nil_check(F.v4531))).f_rep));
yr997_SA(y_str(" f_", 3));
yr1004_ST(((*(yR105 *)rt_nil_check(F.v4531))).f_name);
yr997_SA(y_str(";", 1));
F.v4535 = rt_range(rt_add(F.v4535, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4531 = ((*(yR105 *)rt_nil_check(F.v4531))).f_next;
}
if ((F.v4535 == INT64_C(0))) {
yr997_SA(y_str(" int empty_;", 12));
}
yr997_SA(y_str(" };", 3));
F.v4533 = yr1016_SE();
yr1070_Put(&v944, F.v4533);
yr1777_NewDesc(F.p1917);
yr986_SB();
yr997_SA(y_str("{ static const size_t o[] = {", 29));
F.v4531 = ((*(yR100 *)rt_nil_check(F.p1917))).f_fields;
while ((!(F.v4531 == ((void *)0)))) {
yr997_SA(y_str("offsetof(", 9));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1917))).f_cname);
yr997_SA(y_str(", f_", 4));
yr1004_ST(((*(yR105 *)rt_nil_check(F.v4531))).f_name);
yr997_SA(y_str("), ", 3));
F.v4531 = ((*(yR105 *)rt_nil_check(F.v4531))).f_next;
}
yr997_SA(y_str("0}; const ydesc **f = rt_alloc(", 31));
yr1010_SI(rt_range(rt_add(F.v4535, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr997_SA(y_str(" * sizeof *f);", 14));
F.v4528 = INT64_C(0);
F.v4531 = ((*(yR100 *)rt_nil_check(F.p1917))).f_fields;
while ((!(F.v4531 == ((void *)0)))) {
yr997_SA(y_str(" f[", 3));
yr1010_SI(F.v4528);
yr997_SA(y_str("] = ", 4));
yr1004_ST(yr1771_DescOf(((*(yR105 *)rt_nil_check(F.v4531))).f_rep));
yr997_SA(y_str(";", 1));
F.v4528 = rt_range(rt_add(F.v4528, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4531 = ((*(yR105 *)rt_nil_check(F.v4531))).f_next;
}
yr997_SA(y_str(" y_desc_record(", 15));
yr1004_ST(yr1771_DescOf(F.p1917));
yr997_SA(y_str(", sizeof(", 9));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1917))).f_cname);
yr997_SA(y_str("), ", 3));
yr1010_SI(F.v4535);
yr997_SA(y_str(", o, (const ydesc *const *)f); }", 32));
F.v4533 = yr1016_SE();
yr1092_Emit(F.v4533);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1924_FindField(void * a_p1925, rt_int a_p1926) {
struct yf1927 F;
memset((void *)&F, 0, sizeof F);
F.p1925 = a_p1925;
F.p1926 = a_p1926;
F.v4582 = ((*(yR100 *)rt_nil_check(F.p1925))).f_fields;
while ((!(F.v4582 == ((void *)0)))) {
if ((((*(yR105 *)rt_nil_check(F.v4582))).f_name == F.p1926)) {
{ void * rv4583 = F.v4582;
return rv4583; }
}
F.v4582 = ((*(yR105 *)rt_nil_check(F.v4582))).f_next;
}
{ void * rv4584 = ((void *)0);
return rv4584; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2044_CharOrd(void * a_p2045, rt_int a_p2046) {
struct yf2047 F;
memset((void *)&F, 0, sizeof F);
F.p2045 = a_p2045;
F.p2046 = a_p2046;
if ((((*(yR100 *)rt_nil_check(F.p2045))).f_tid == ((*(yR100 *)rt_nil_check(v1696))).f_tid)) {
if ((((rt_int *)(v890).p)[y_ix1(v890, F.p2046)] == INT64_C(1))) {
{ rt_int rv4600 = ((rt_int *)(v931).p)[y_ix1(v931, yr1063_TChar(F.p2046, INT64_C(1)))];
return rv4600; }
}
F.v4591 = INT64_C(0);
F.v4595 = INT64_C(1);
F.lo4605 = INT64_C(1);
F.hi4606 = ((rt_int *)(v890).p)[y_ix1(v890, v2039)];
{ rt_int hi4610 = F.hi4606;
for (rt_int i4609 = F.lo4605; i4609 <= hi4610; i4609++) { F.c_4608 = i4609;
if ((yr1063_TChar(v2039, rt_range(F.c_4608, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 32)) {
F.v4597 = yr1028_Intern(rt_range(rt_add(((rt_int *)(v888).p)[y_ix1(v888, v2039)], (rt_sub(F.v4595, INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub(F.c_4608, F.v4595), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((F.v4597 == F.p2046)) {
if ((F.v4591 < INT64_C(32))) {
{ rt_int rv4617 = F.v4591;
return rv4617; }
}
if ((F.v4591 == INT64_C(32))) {
{ rt_int rv4620 = INT64_C(32);
return rv4620; }
}
if ((F.v4591 == INT64_C(33))) {
{ rt_int rv4623 = INT64_C(127);
return rv4623; }
}
if ((F.v4591 == INT64_C(34))) {
{ rt_int rv4626 = INT64_C(39);
return rv4626; }
}
{ rt_int rv4628 = INT64_C(34);
return rv4628; }
}
F.v4591 = rt_range(rt_add(F.v4591, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4595 = rt_range(rt_add(F.c_4608, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i4609 == hi4610) break;
}}
{ rt_int rv4634 = INT64_C(-1);
return rv4634; }
}
if ((!(((*(yR100 *)rt_nil_check(F.p2045))).f_kind == v789))) {
{ rt_int rv4636 = INT64_C(-1);
return rv4636; }
}
F.v4589 = ((*(yR100 *)rt_nil_check(F.p2045))).f_lits;
F.v4593 = INT64_C(0);
while ((!(F.v4589 == ((void *)0)))) {
if (yr1048_TEq(((*(yR95 *)rt_nil_check(F.v4589))).f_text, F.p2046)) {
{ rt_int rv4638 = F.v4593;
return rv4638; }
}
F.v4593 = rt_range(rt_add(F.v4593, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4589 = ((*(yR95 *)rt_nil_check(F.v4589))).f_next;
}
{ rt_int rv4642 = INT64_C(-1);
return rv4642; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2051_AlphabetFor(void * a_p2052, void * a_p2053) {
struct yf2054 F;
memset((void *)&F, 0, sizeof F);
F.p2052 = a_p2052;
F.p2053 = a_p2053;
F.v4651 = ((void *)0);
F.v4653 = INT64_C(0);
F.v4656 = INT64_C(0);
if ((!(((*(yR95 *)rt_nil_check(F.p2052))).f_d == ((void *)0)))) {
F.v4647 = yr1686_Real(yr1633_Lookup(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2052))).f_d))).f_name, ((*(yR95 *)rt_nil_check(F.p2052))).f_line));
if ((((((!(((*(yR115 *)rt_nil_check(F.v4647))).f_kind == v837))) && ((!(((*(yR115 *)rt_nil_check(F.v4647))).f_kind == v840))))) || ((!(((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4647))).f_rep))).f_kind == v789))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2052))).f_line, ((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2052))).f_d))).f_name, y_str(" is not an alphabet", 19));
}
{ void * rv4659 = ((*(yR115 *)rt_nil_check(F.v4647))).f_rep;
return rv4659; }
}
F.v4656 = INT64_C(1);
if ((((((*(yR95 *)rt_nil_check(F.p2052))).f_kind == v741)) || ((yr2044_CharOrd(v1696, ((*(yR95 *)rt_nil_check(F.p2052))).f_text) >= INT64_C(0))))) {
F.v4653 = INT64_C(1);
F.v4651 = v1696;
}
F.v4649 = v2042;
while ((!(F.v4649 == ((void *)0)))) {
F.v4647 = yr1621_Find(((*(yR95 *)rt_nil_check(F.v4649))).f_name);
if ((!(F.v4647 == ((void *)0)))) {
F.v4647 = yr1686_Real(F.v4647);
if ((((((((*(yR115 *)rt_nil_check(F.v4647))).f_kind == v837)) || ((((*(yR115 *)rt_nil_check(F.v4647))).f_kind == v840)))) && ((((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4647))).f_rep))).f_tid == ((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4649))).f_rep))).f_tid)))) {
F.v4656 = rt_range(rt_add(F.v4656, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((((*(yR95 *)rt_nil_check(F.p2052))).f_kind == v738)) && ((yr2044_CharOrd(((*(yR95 *)rt_nil_check(F.v4649))).f_rep, ((*(yR95 *)rt_nil_check(F.p2052))).f_text) >= INT64_C(0))))) {
F.v4653 = rt_range(rt_add(F.v4653, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4651 = ((*(yR95 *)rt_nil_check(F.v4649))).f_rep;
}
}
}
F.v4649 = ((*(yR95 *)rt_nil_check(F.v4649))).f_next;
}
if ((((((*(yR95 *)rt_nil_check(F.p2052))).f_kind == v741)) && ((F.v4656 > INT64_C(1))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2052))).f_line, y_str("a string in a scope with two alphabets is qualified by its alphabet (VI.A.3)", 76));
}
if ((F.v4653 > INT64_C(1))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2052))).f_line, yr2495_Join(yr1021_T(y_str("'", 1)), ((*(yR95 *)rt_nil_check(F.p2052))).f_text, yr1021_T(y_str("'", 1))), y_str(" is a character of two alphabets here: qualify it (VI.A.3)", 58));
}
if ((F.v4651 == ((void *)0))) {
{ void * rv4674 = v1696;
return rv4674; }
}
{ void * rv4675 = F.v4651;
return rv4675; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2058_CharValue(void * a_p2059, rt_int a_p2060, rt_int a_p2061) {
struct yf2062 F;
memset((void *)&F, 0, sizeof F);
F.p2059 = a_p2059;
F.p2060 = a_p2060;
F.p2061 = a_p2061;
F.v4681 = yr2044_CharOrd(F.p2059, F.p2060);
if ((F.v4681 < INT64_C(0))) {
yr986_SB();
yr997_SA(y_str("'", 1));
yr1004_ST(F.p2060);
yr997_SA(y_str("' is not a character of ", 24));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p2059))).f_tname);
F.v4683 = yr1016_SE();
yr1117_Fail(F.p2061, F.v4683);
}
{ rt_int rv4687 = F.v4681;
return rv4687; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2066_StringCodes(void * a_p2067, rt_int a_p2068, rt_int * a_p2069, rt_int a_p2070) {
struct yf2071 F;
memset((void *)&F, 0, sizeof F);
F.p2067 = a_p2067;
F.p2068 = a_p2068;
F.p2069_o = a_p2069;
F.p2070 = a_p2070;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&F.yd_4705, 1, lo, hi, &y_d_int); }
y_init(&F.yd_4705, &F.v4707);
F.p2069 = INT64_C(0);
F.v4694 = INT64_C(1);
while ((F.v4694 <= ((rt_int *)(v890).p)[y_ix1(v890, F.p2068)])) {
F.v4709 = yr1063_TChar(F.p2068, F.v4694);
if ((F.v4709 == 39)) {
F.v4696 = rt_range(rt_add(F.v4694, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1063_TChar(F.p2068, F.v4696) == 39))) {
F.v4696 = rt_range(rt_add(F.v4696, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v4711 = yr1028_Intern(rt_range(rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p2068)], F.v4694), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v4696, F.v4694)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v4698 = yr2058_CharValue(F.p2067, F.v4711, F.p2070);
F.v4694 = rt_range(rt_add(F.v4696, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v4711 = yr1028_Intern(rt_range(rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p2068)], (rt_sub(F.v4694, INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), INT64_C(1));
F.v4698 = yr2058_CharValue(F.p2067, F.v4711, F.p2070);
F.v4694 = rt_range(rt_add(F.v4694, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.p2069 >= INT64_C(4096))) {
yr1124_FailS(F.p2070, y_str("string literal too long", 23));
}
F.p2069 = rt_range(rt_add(F.p2069, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(F.v4707).p)[y_ix1(F.v4707, F.p2069)] = F.v4698;
}
yr986_SB();
yr991_SC(34);
F.lo4739 = INT64_C(1);
F.hi4740 = F.p2069;
{ rt_int hi4744 = F.hi4740;
for (rt_int i4743 = F.lo4739; i4743 <= hi4744; i4743++) { F.c_4742 = i4743;
F.v4698 = ((rt_int *)(F.v4707).p)[y_ix1(F.v4707, F.c_4742)];
if ((((F.v4698 == INT64_C(34))) || ((F.v4698 == INT64_C(92))))) {
yr991_SC(92);
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, F.v4698)]);
} else if (((((F.v4698 >= INT64_C(32))) && ((F.v4698 < INT64_C(127)))) && (((((!(F.v4698 == INT64_C(63)))) || ((F.c_4742 == INT64_C(1)))) || ((!(((rt_int *)(F.v4707).p)[y_ix1(F.v4707, rt_sub(F.c_4742, INT64_C(1)))] == INT64_C(63)))))))) {
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, F.v4698)]);
} else {
yr991_SC(92);
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, rt_add(INT64_C(48), (rt_div(F.v4698, INT64_C(64)))))]);
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, rt_add(INT64_C(48), (rt_mod((rt_div(F.v4698, INT64_C(8))), INT64_C(8)))))]);
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, rt_add(INT64_C(48), (rt_mod(F.v4698, INT64_C(8)))))]);
}
if (i4743 == hi4744) break;
}}
yr991_SC(34);
{ rt_int rv4771 = yr1016_SE();
(*F.p2069_o) = F.p2069;
return rv4771; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2075_Manifest(void * a_p2076, rt_int * a_p2077, rt_int * a_p2078) {
struct yf2079 F;
memset((void *)&F, 0, sizeof F);
F.p2076 = a_p2076;
F.p2077_o = a_p2077;
F.p2078_o = a_p2078;
F.p2077 = 0;
F.p2078 = INT64_C(0);
if ((((*(yR95 *)rt_nil_check(F.p2076))).f_kind == v729)) {
F.p2077 = 1;
F.p2078 = ((*(yR95 *)rt_nil_check(F.p2076))).f_ival;
(*F.p2077_o) = F.p2077;
(*F.p2078_o) = F.p2078;
return;
}
if ((((*(yR95 *)rt_nil_check(F.p2076))).f_kind == v738)) {
F.v4789 = yr2051_AlphabetFor(F.p2076, ((void *)0));
F.p2078 = yr2044_CharOrd(F.v4789, ((*(yR95 *)rt_nil_check(F.p2076))).f_text);
F.p2077 = (F.p2078 >= INT64_C(0));
(*F.p2077_o) = F.p2077;
(*F.p2078_o) = F.p2078;
return;
}
if ((((*(yR95 *)rt_nil_check(F.p2076))).f_kind == v747)) {
if ((!(((*(yR95 *)rt_nil_check(F.p2076))).f_d == ((void *)0)))) {
F.v4777 = yr1686_Real(yr1633_Lookup(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2076))).f_d))).f_name, ((*(yR95 *)rt_nil_check(F.p2076))).f_line));
F.v4777 = yr1646_FindLit(((*(yR95 *)rt_nil_check(F.p2076))).f_name, ((*(yR115 *)rt_nil_check(F.v4777))).f_rep);
} else {
F.v4777 = yr1621_Find(((*(yR95 *)rt_nil_check(F.p2076))).f_name);
}
if ((F.v4777 == ((void *)0))) {
(*F.p2077_o) = F.p2077;
(*F.p2078_o) = F.p2078;
return;
}
F.v4777 = yr1686_Real(F.v4777);
if ((((((((*(yR115 *)rt_nil_check(F.v4777))).f_kind == v843)) || ((((*(yR115 *)rt_nil_check(F.v4777))).f_kind == v834)))) && ((*(yR115 *)rt_nil_check(F.v4777))).f_hasmv)) {
F.p2077 = 1;
F.p2078 = ((*(yR115 *)rt_nil_check(F.v4777))).f_mval;
}
(*F.p2077_o) = F.p2077;
(*F.p2078_o) = F.p2078;
return;
}
if ((((*(yR95 *)rt_nil_check(F.p2076))).f_kind == v771)) {
yr2075_Manifest(((*(yR95 *)rt_nil_check(F.p2076))).f_a, &F.p2077, &F.p2078);
(*F.p2077_o) = F.p2077;
(*F.p2078_o) = F.p2078;
return;
}
if ((((*(yR95 *)rt_nil_check(F.p2076))).f_kind == v765)) {
yr2075_Manifest(((*(yR95 *)rt_nil_check(F.p2076))).f_a, &F.p2077, &F.p2078);
F.p2078 = rt_range(rt_neg(F.p2078), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2077_o) = F.p2077;
(*F.p2078_o) = F.p2078;
return;
}
if ((((*(yR95 *)rt_nil_check(F.p2076))).f_kind == v768)) {
yr2075_Manifest(((*(yR95 *)rt_nil_check(F.p2076))).f_a, &F.v4783, &F.v4779);
yr2075_Manifest(((*(yR95 *)rt_nil_check(F.p2076))).f_b, &F.v4785, &F.v4781);
if ((!((F.v4783 && F.v4785)))) {
(*F.p2077_o) = F.p2077;
(*F.p2078_o) = F.p2078;
return;
}
F.v4787 = ((*(yR95 *)rt_nil_check(F.p2076))).f_name;
F.p2077 = 1;
if ((F.v4787 == v543)) {
F.p2078 = rt_range(rt_add(F.v4779, F.v4781), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v4787 == v546)) {
F.p2078 = rt_range(rt_sub(F.v4779, F.v4781), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v4787 == v549)) {
F.p2078 = rt_range(rt_mul(F.v4779, F.v4781), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v4787 == v246)) && ((!(F.v4781 == INT64_C(0)))))) {
F.p2078 = rt_range(rt_div(F.v4779, F.v4781), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v4787 == v348)) && ((!(F.v4781 == INT64_C(0)))))) {
F.p2078 = rt_range(rt_mod(F.v4779, F.v4781), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.p2077 = 0;
}
(*F.p2077_o) = F.p2077;
(*F.p2078_o) = F.p2078;
return;
}
(*F.p2077_o) = F.p2077;
(*F.p2078_o) = F.p2078;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2083_Convert(rt_int a_p2084, void * a_p2085, void * a_p2086) {
struct yf2087 F;
memset((void *)&F, 0, sizeof F);
F.p2084 = a_p2084;
F.p2085 = a_p2085;
F.p2086 = a_p2086;
if ((yr1729_IsDiscrete(F.p2085) && ((!(((*(yR100 *)rt_nil_check(F.p2085))).f_lo == INT64_C(0)))))) {
if ((((((*(yR100 *)rt_nil_check(F.p2085))).f_hasm && ((*(yR100 *)rt_nil_check(F.p2086))).f_hasm) && ((((*(yR100 *)rt_nil_check(F.p2085))).f_mlo <= ((*(yR100 *)rt_nil_check(F.p2086))).f_mlo))) && ((((*(yR100 *)rt_nil_check(F.p2086))).f_mhi <= ((*(yR100 *)rt_nil_check(F.p2085))).f_mhi)))) {
{ rt_int rv4810 = F.p2084;
return rv4810; }
}
yr986_SB();
yr997_SA(y_str("rt_range(", 9));
yr1004_ST(F.p2084);
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1827_LoText(F.p2085));
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1833_HiText(F.p2085));
yr997_SA(y_str(")", 1));
{ rt_int rv4815 = yr1016_SE();
return rv4815; }
}
if ((((((*(yR100 *)rt_nil_check(F.p2085))).f_kind == v780)) && ((!(((*(yR100 *)rt_nil_check(F.p2085))).f_lo == INT64_C(0)))))) {
yr986_SB();
yr997_SA(y_str("rt_frange(", 10));
yr1004_ST(F.p2084);
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1827_LoText(F.p2085));
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1833_HiText(F.p2085));
yr997_SA(y_str(")", 1));
{ rt_int rv4821 = yr1016_SE();
return rv4821; }
}
if ((((((*(yR100 *)rt_nil_check(F.p2085))).f_kind == v777)) && ((!(((*(yR100 *)rt_nil_check(F.p2085))).f_lo == INT64_C(0)))))) {
yr986_SB();
yr997_SA(y_str("y_fixed(", 8));
yr1004_ST(F.p2084);
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1827_LoText(F.p2085));
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1833_HiText(F.p2085));
yr997_SA(y_str(", ", 2));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p2085))).f_scale);
yr997_SA(y_str(")", 1));
{ rt_int rv4828 = yr1016_SE();
return rv4828; }
}
{ rt_int rv4829 = F.p2084;
return rv4829; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2091_Store(rt_int a_p2092, void * a_p2093, rt_int a_p2094, void * a_p2095, rt_int a_p2096) {
struct yf2097 F;
memset((void *)&F, 0, sizeof F);
F.p2092 = a_p2092;
F.p2093 = a_p2093;
F.p2094 = a_p2094;
F.p2095 = a_p2095;
F.p2096 = a_p2096;
yr1798_CheckType(F.p2096, F.p2093, F.p2095);
if (yr1753_Deep(F.p2093)) {
F.v4839 = yr1146_Fresh(y_str("t", 1));
yr986_SB();
yr997_SA(y_str("{ ", 2));
yr1004_ST(yr1765_CType(F.p2093));
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v4839);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.p2094);
yr997_SA(y_str("; y_store(", 10));
yr1004_ST(yr1771_DescOf(F.p2093));
yr997_SA(y_str(", &", 3));
yr1004_ST(F.p2092);
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v4839);
yr997_SA(y_str("); }", 4));
F.v4837 = yr1016_SE();
yr1092_Emit(F.v4837);
return;
}
yr986_SB();
yr1004_ST(F.p2092);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2083_Convert(F.p2094, F.p2093, F.p2095));
yr997_SA(y_str(";", 1));
F.v4837 = yr1016_SE();
yr1092_Emit(F.v4837);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2101_IsVariable(void * a_p2102) {
struct yf2103 F;
memset((void *)&F, 0, sizeof F);
F.p2102 = a_p2102;
if ((((*(yR95 *)rt_nil_check(F.p2102))).f_kind == v747)) {
F.v4853 = yr1621_Find(((*(yR95 *)rt_nil_check(F.p2102))).f_name);
if ((F.v4853 == ((void *)0))) {
{ rt_int rv4857 = 0;
return rv4857; }
}
if (((*(yR115 *)rt_nil_check(F.v4853))).f_readonly) {
{ rt_int rv4859 = 0;
return rv4859; }
}
{ rt_int rv4860 = (((*(yR115 *)rt_nil_check(yr1686_Real(F.v4853)))).f_kind == v831);
return rv4860; }
}
if ((((*(yR95 *)rt_nil_check(F.p2102))).f_kind == v759)) {
{ rt_int rv4862 = (((*(yR95 *)rt_nil_check(F.p2102))).f_flag == INT64_C(0));
return rv4862; }
}
if ((((*(yR95 *)rt_nil_check(F.p2102))).f_kind == v756)) {
{ rt_int rv4863 = yr2101_IsVariable(((*(yR95 *)rt_nil_check(F.p2102))).f_a);
return rv4863; }
}
if ((((*(yR95 *)rt_nil_check(F.p2102))).f_kind == v753)) {
if ((!yr2101_IsVariable(((*(yR95 *)rt_nil_check(F.p2102))).f_a))) {
{ rt_int rv4865 = 0;
return rv4865; }
}
F.v4855 = yr1924_FindField(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2102))).f_a))).f_rep, ((*(yR95 *)rt_nil_check(F.p2102))).f_name);
if ((F.v4855 == ((void *)0))) {
{ rt_int rv4867 = 0;
return rv4867; }
}
{ rt_int rv4868 = (!((*(yR105 *)rt_nil_check(F.v4855))).f_isconst);
return rv4868; }
}
{ rt_int rv4870 = 0;
return rv4870; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2107_CheckPure(void * a_p2108) {
struct yf2109 F;
memset((void *)&F, 0, sizeof F);
F.p2108 = a_p2108;
F.v4874 = F.p2108;
if ((v2413 == ((void *)0))) {
return;
}
if ((!((*(yR115 *)rt_nil_check(v2413))).f_func)) {
return;
}
while ((((((*(yR95 *)rt_nil_check(F.v4874))).f_kind == v753)) || ((((*(yR95 *)rt_nil_check(F.v4874))).f_kind == v756)))) {
F.v4874 = ((*(yR95 *)rt_nil_check(F.v4874))).f_a;
}
if ((((*(yR95 *)rt_nil_check(F.v4874))).f_kind == v759)) {
if ((((*(yR95 *)rt_nil_check(F.v4874))).f_flag == INT64_C(0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2108))).f_line, y_str("a FUNCTION does not assign to a dynamic variable (X.A.4)", 56));
}
return;
}
if ((((*(yR95 *)rt_nil_check(F.v4874))).f_kind == v747)) {
F.v4876 = yr1621_Find(((*(yR95 *)rt_nil_check(F.v4874))).f_name);
if ((!(F.v4876 == ((void *)0)))) {
F.v4876 = yr1686_Real(F.v4876);
if ((((*(yR115 *)rt_nil_check(F.v4876))).f_level < ((*(yR115 *)rt_nil_check(v2413))).f_level)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2108))).f_line, ((*(yR95 *)rt_nil_check(F.v4874))).f_name, y_str(" is not local: a FUNCTION assigns only to its locals (X.A.4)", 60));
}
}
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2113_LValue(void * a_p2114, rt_int * a_p2115, void * * a_p2116) {
struct yf2117 F;
memset((void *)&F, 0, sizeof F);
F.p2114 = a_p2114;
F.p2115_o = a_p2115;
F.p2116_o = a_p2116;
yr2140_Expr(F.p2114, ((void *)0), &F.p2115, &F.p2116);
if ((!yr2101_IsVariable(F.p2114))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2114))).f_line, y_str("a variable is needed here (IX.A.1)", 34));
}
(*F.p2115_o) = F.p2115;
(*F.p2116_o) = F.p2116;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2121_Paren(rt_int a_p2122) {
struct yf2123 F;
memset((void *)&F, 0, sizeof F);
F.p2122 = a_p2122;
yr986_SB();
yr997_SA(y_str("(", 1));
yr1004_ST(F.p2122);
yr997_SA(y_str(")", 1));
{ rt_int rv4889 = yr1016_SE();
return rv4889; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2127_Lit(void * a_p2128, rt_int a_p2129) {
struct yf2130 F;
memset((void *)&F, 0, sizeof F);
F.p2128 = a_p2128;
F.p2129 = a_p2129;
F.v4894 = yr1723_CopyRep(F.p2128);
yr1852_SetRange(F.v4894, F.p2129, F.p2129);
((*(yR100 *)rt_nil_check(F.v4894))).f_elem = F.p2128;
{ void * rv4895 = F.v4894;
return rv4895; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2134_Qualifier(void * a_p2135) {
struct yf2136 F;
memset((void *)&F, 0, sizeof F);
F.p2135 = a_p2135;
F.v4899 = yr1686_Real(yr1633_Lookup(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2135))).f_d))).f_name, ((*(yR95 *)rt_nil_check(F.p2135))).f_line));
if ((((!(((*(yR115 *)rt_nil_check(F.v4899))).f_kind == v837))) && ((!(((*(yR115 *)rt_nil_check(F.v4899))).f_kind == v840))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2135))).f_line, ((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2135))).f_d))).f_name, y_str(" is not a type", 14));
}
{ void * rv4901 = ((*(yR115 *)rt_nil_check(F.v4899))).f_rep;
return rv4901; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2140_Expr(void * a_p2141, void * a_p2142, rt_int * a_p2143, void * * a_p2144) {
struct yf2145 F;
memset((void *)&F, 0, sizeof F);
F.p2141 = a_p2141;
F.p2142 = a_p2142;
F.p2143_o = a_p2143;
F.p2144_o = a_p2144;
F.v4908 = ((*(yR95 *)rt_nil_check(F.p2141))).f_kind;
v960 = ((*(yR95 *)rt_nil_check(F.p2141))).f_line;
if ((F.v4908 == v771)) {
yr2140_Expr(((*(yR95 *)rt_nil_check(F.p2141))).f_a, F.p2142, &F.v4912, &F.p2144);
F.p2143 = yr2121_Paren(F.v4912);
} else if ((F.v4908 == v729)) {
F.p2144 = yr2127_Lit(v1692, ((*(yR95 *)rt_nil_check(F.p2141))).f_ival);
if ((!(((*(yR95 *)rt_nil_check(F.p2141))).f_d == ((void *)0)))) {
F.v4918 = yr2134_Qualifier(F.p2141);
if ((!(((*(yR100 *)rt_nil_check(F.v4918))).f_kind == v774))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2141))).f_line, y_str("an integer literal qualified by a type that is not INTEGER", 58));
}
((*(yR100 *)rt_nil_check(F.p2144))).f_tid = ((*(yR100 *)rt_nil_check(F.v4918))).f_tid;
((*(yR100 *)rt_nil_check(F.p2144))).f_tname = ((*(yR100 *)rt_nil_check(F.v4918))).f_tname;
}
yr986_SB();
yr997_SA(y_str("INT64_C(", 8));
yr1010_SI(((*(yR95 *)rt_nil_check(F.p2141))).f_ival);
yr997_SA(y_str(")", 1));
F.p2143 = yr1016_SE();
} else if ((F.v4908 == v738)) {
F.v4918 = yr2051_AlphabetFor(F.p2141, F.p2142);
F.v4924 = yr2058_CharValue(F.v4918, ((*(yR95 *)rt_nil_check(F.p2141))).f_text, ((*(yR95 *)rt_nil_check(F.p2141))).f_line);
F.p2144 = yr2127_Lit(F.v4918, F.v4924);
yr986_SB();
yr1010_SI(F.v4924);
F.p2143 = yr1016_SE();
} else if ((F.v4908 == v741)) {
F.v4918 = yr2051_AlphabetFor(F.p2141, F.p2142);
F.v4912 = yr2066_StringCodes(F.v4918, ((*(yR95 *)rt_nil_check(F.p2141))).f_text, &F.v4922, ((*(yR95 *)rt_nil_check(F.p2141))).f_line);
F.p2144 = yr1716_NewRep(v816, yr1021_T(y_str("string", 6)));
((*(yR100 *)rt_nil_check(F.p2144))).f_tname = yr1021_T(y_str("a string literal", 16));
((*(yR100 *)rt_nil_check(F.p2144))).f_elem = F.v4918;
((*(yR100 *)rt_nil_check(F.p2144))).f_nidx = INT64_C(1);
((*(yR100 *)rt_nil_check(F.p2144))).f_nlits = F.v4922;
yr986_SB();
yr997_SA(y_str("y_str(", 6));
yr1004_ST(F.v4912);
yr997_SA(y_str(", ", 2));
yr1010_SI(F.v4922);
yr997_SA(y_str(")", 1));
F.p2143 = yr1016_SE();
} else if ((F.v4908 == v735)) {
F.p2144 = v1704;
if ((!(((*(yR95 *)rt_nil_check(F.p2141))).f_d == ((void *)0)))) {
F.p2144 = yr2134_Qualifier(F.p2141);
}
F.p2143 = yr2121_Paren(((*(yR95 *)rt_nil_check(F.p2141))).f_text);
} else if ((F.v4908 == v732)) {
F.p2144 = v1706;
if ((!(((*(yR95 *)rt_nil_check(F.p2141))).f_d == ((void *)0)))) {
F.p2144 = yr2134_Qualifier(F.p2141);
}
F.p2143 = ((*(yR95 *)rt_nil_check(F.p2141))).f_text;
} else if ((F.v4908 == v744)) {
if ((((*(yR95 *)rt_nil_check(F.p2141))).f_d == ((void *)0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2141))).f_line, y_str("NIL is qualified by the name of a pointer type (VI.B.4)", 55));
}
F.p2144 = yr2134_Qualifier(F.p2141);
if ((!(((*(yR100 *)rt_nil_check(F.p2144))).f_kind == v798))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2141))).f_line, y_str("NIL of a type that is not a pointer", 35));
}
F.p2143 = yr1021_T(y_str("((void *)0)", 11));
} else if ((F.v4908 == v747)) {
if ((!(((*(yR95 *)rt_nil_check(F.p2141))).f_d == ((void *)0)))) {
F.v4918 = yr2134_Qualifier(F.p2141);
F.v4910 = yr1646_FindLit(((*(yR95 *)rt_nil_check(F.p2141))).f_name, F.v4918);
if ((F.v4910 == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2141))).f_line, ((*(yR95 *)rt_nil_check(F.p2141))).f_name, y_str(" is not a literal of that type", 30));
}
} else {
F.v4910 = yr1633_Lookup(((*(yR95 *)rt_nil_check(F.p2141))).f_name, ((*(yR95 *)rt_nil_check(F.p2141))).f_line);
}
yr2157_NameExpr(F.p2141, F.v4910, &F.p2143, &F.p2144);
} else if ((F.v4908 == v750)) {
yr2312_CallExpr(F.p2141, F.p2142, 0, &F.p2143, &F.p2144);
} else if ((F.v4908 == v753)) {
yr2140_Expr(((*(yR95 *)rt_nil_check(F.p2141))).f_a, ((void *)0), &F.v4912, &F.v4918);
((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2141))).f_a))).f_rep = F.v4918;
if ((!(((*(yR100 *)rt_nil_check(F.v4918))).f_kind == v795))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2141))).f_line, ((*(yR95 *)rt_nil_check(F.p2141))).f_name, y_str(": a component of something that is not a record", 47));
}
if (((*(yR100 *)rt_nil_check(F.v4918))).f_opaque) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2141))).f_line, ((*(yR100 *)rt_nil_check(F.v4918))).f_tname, y_str(" is exported opaquely: its components are hidden (X.B.3)", 56));
}
F.v4920 = yr1924_FindField(F.v4918, ((*(yR95 *)rt_nil_check(F.p2141))).f_name);
if ((F.v4920 == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2141))).f_line, ((*(yR95 *)rt_nil_check(F.p2141))).f_name, y_str(" is not a component of this record", 34));
}
F.p2144 = ((*(yR105 *)rt_nil_check(F.v4920))).f_rep;
if ((!(((*(yR105 *)rt_nil_check(F.v4920))).f_variant == INT64_C(0)))) {
F.v4914 = yr1146_Fresh(y_str("vr", 2));
yr986_SB();
yr997_SA(y_str("(*({ ", 5));
yr1004_ST(yr1765_CType(F.v4918));
yr997_SA(y_str(" *", 2));
yr1004_ST(F.v4914);
yr997_SA(y_str(" = &", 4));
yr1004_ST(yr2121_Paren(F.v4912));
yr997_SA(y_str("; if (!(", 8));
yr1004_ST(yr2149_VariantTest(F.v4918, F.v4920, F.v4914));
yr997_SA(y_str(")) rt_raise(RT_X_TAG); &", 24));
yr1004_ST(F.v4914);
yr997_SA(y_str("->f_", 4));
yr1004_ST(((*(yR95 *)rt_nil_check(F.p2141))).f_name);
yr997_SA(y_str("; }))", 5));
F.p2143 = yr1016_SE();
} else {
yr986_SB();
yr1004_ST(yr2121_Paren(F.v4912));
yr997_SA(y_str(".f_", 3));
yr1004_ST(((*(yR95 *)rt_nil_check(F.p2141))).f_name);
F.p2143 = yr1016_SE();
}
} else if ((((F.v4908 == v759)) && yr2301_UserOp(F.p2141, rt_range(v588, INT64_C(0), INT64_C(4000000)), ((*(yR95 *)rt_nil_check(F.p2141))).f_a, ((void *)0), &F.p2143, &F.p2144))) {
((*(yR95 *)rt_nil_check(F.p2141))).f_flag = INT64_C(1);
} else if ((F.v4908 == v759)) {
yr2140_Expr(((*(yR95 *)rt_nil_check(F.p2141))).f_a, ((void *)0), &F.v4912, &F.v4918);
if ((!(((*(yR100 *)rt_nil_check(F.v4918))).f_kind == v798))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2141))).f_line, y_str("^ of something that is not a pointer", 36));
}
if ((((*(yR100 *)rt_nil_check(F.v4918))).f_elem == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2141))).f_line, ((*(yR100 *)rt_nil_check(F.v4918))).f_forward, y_str(" is not declared", 16));
}
F.p2144 = ((*(yR100 *)rt_nil_check(F.v4918))).f_elem;
yr986_SB();
yr997_SA(y_str("(*(", 3));
yr1004_ST(yr1765_CType(F.p2144));
yr997_SA(y_str(" *)rt_nil_check(", 16));
yr1004_ST(F.v4912);
yr997_SA(y_str("))", 2));
F.p2143 = yr1016_SE();
} else if ((F.v4908 == v756)) {
yr2166_IndexExpr(F.p2141, &F.p2143, &F.p2144);
} else if ((F.v4908 == v762)) {
yr2140_Expr(((*(yR95 *)rt_nil_check(F.p2141))).f_a, v1694, &F.v4912, &F.v4918);
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.p2141))).f_line, v1694, F.v4918);
F.p2144 = v1694;
yr986_SB();
yr997_SA(y_str("(!", 2));
yr1004_ST(F.v4912);
yr997_SA(y_str(")", 1));
F.p2143 = yr1016_SE();
} else if ((F.v4908 == v765)) {
if ((!yr2301_UserOp(F.p2141, rt_range(v546, INT64_C(0), INT64_C(4000000)), ((*(yR95 *)rt_nil_check(F.p2141))).f_a, ((void *)0), &F.p2143, &F.p2144))) {
yr2140_Expr(((*(yR95 *)rt_nil_check(F.p2141))).f_a, F.p2142, &F.v4912, &F.v4918);
yr2174_NegExpr(F.p2141, F.v4912, F.v4918, &F.p2143, &F.p2144);
}
} else if ((F.v4908 == v768)) {
yr2223_BinExpr(F.p2141, F.p2142, &F.p2143, &F.p2144);
} else {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2141))).f_line, y_str("not an expression", 17));
}
((*(yR95 *)rt_nil_check(F.p2141))).f_rep = F.p2144;
(*F.p2143_o) = F.p2143;
(*F.p2144_o) = F.p2144;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2149_VariantTest(void * a_p2150, void * a_p2151, rt_int a_p2152) {
struct yf2153 F;
memset((void *)&F, 0, sizeof F);
F.p2150 = a_p2150;
F.p2151 = a_p2151;
F.p2152 = a_p2152;
F.v4966 = ((*(yR105 *)rt_nil_check(F.p2151))).f_labels;
yr986_SB();
yr997_SA(y_str("0", 1));
while ((!(F.v4966 == ((void *)0)))) {
yr2075_Manifest(F.v4966, &F.v4968, &F.v4970);
yr997_SA(y_str(" || ", 4));
yr1004_ST(F.p2152);
yr997_SA(y_str("->f_", 4));
yr1004_ST(((*(yR105 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p2150))).f_selector))).f_name);
yr997_SA(y_str(" == ", 4));
yr1010_SI(F.v4970);
F.v4966 = ((*(yR95 *)rt_nil_check(F.v4966))).f_next;
}
{ rt_int rv4975 = yr1016_SE();
return rv4975; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2157_NameExpr(void * a_p2158, void * a_p2159, rt_int * a_p2160, void * * a_p2161) {
struct yf2162 F;
memset((void *)&F, 0, sizeof F);
F.p2158 = a_p2158;
F.p2159 = a_p2159;
F.p2160_o = a_p2160;
F.p2161_o = a_p2161;
F.v4982 = yr1686_Real(F.p2159);
if ((((*(yR115 *)rt_nil_check(F.v4982))).f_kind == v843)) {
if ((((((*(yR95 *)rt_nil_check(F.p2158))).f_d == ((void *)0))) && yr1640_Ambiguous(F.v4982))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2158))).f_line, ((*(yR95 *)rt_nil_check(F.p2158))).f_name, y_str(" names values of two types here: qualify it (VI.A.3)", 52));
}
F.p2161 = yr2127_Lit(((*(yR115 *)rt_nil_check(F.v4982))).f_rep, ((*(yR115 *)rt_nil_check(F.v4982))).f_mval);
yr986_SB();
yr1010_SI(((*(yR115 *)rt_nil_check(F.v4982))).f_mval);
F.p2160 = yr1016_SE();
(*F.p2160_o) = F.p2160;
(*F.p2161_o) = F.p2161;
return;
}
if ((((((*(yR115 *)rt_nil_check(F.v4982))).f_kind == v831)) || ((((*(yR115 *)rt_nil_check(F.v4982))).f_kind == v834)))) {
F.p2161 = ((*(yR115 *)rt_nil_check(F.v4982))).f_rep;
F.p2160 = yr1680_SymPath(F.v4982);
(*F.p2160_o) = F.p2160;
(*F.p2161_o) = F.p2161;
return;
}
if ((((*(yR115 *)rt_nil_check(F.v4982))).f_kind == v846)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2158))).f_line, ((*(yR95 *)rt_nil_check(F.p2158))).f_name, y_str(" is a routine: a call needs ()", 30));
}
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2158))).f_line, ((*(yR95 *)rt_nil_check(F.p2158))).f_name, y_str(" is not a value", 15));
(*F.p2160_o) = F.p2160;
(*F.p2161_o) = F.p2161;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2166_IndexExpr(void * a_p2167, rt_int * a_p2168, void * * a_p2169) {
struct yf2170 F;
memset((void *)&F, 0, sizeof F);
F.p2167 = a_p2167;
F.p2168_o = a_p2168;
F.p2169_o = a_p2169;
yr2140_Expr(((*(yR95 *)rt_nil_check(F.p2167))).f_a, ((void *)0), &F.v4991, &F.v4997);
if ((!yr1741_IsArrayLike(F.v4997))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2167))).f_line, y_str("[] of something that is not an array", 36));
}
F.v5005 = yr1260_Count(((*(yR95 *)rt_nil_check(F.p2167))).f_b);
if ((!(F.v5005 == ((*(yR100 *)rt_nil_check(F.v4997))).f_nidx))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2167))).f_line, y_str("the number of subscripts is not the number of dimensions", 56));
}
F.p2169 = ((*(yR100 *)rt_nil_check(F.v4997))).f_elem;
F.v5007 = (((((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2167))).f_a))).f_kind == v747)) || ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2167))).f_a))).f_kind == v753))) || ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2167))).f_a))).f_kind == v756))) || ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2167))).f_a))).f_kind == v759)));
if (F.v5007) {
F.v4995 = F.v4991;
} else {
F.v4995 = yr1146_Fresh(y_str("ya", 2));
}
yr986_SB();
if ((!F.v5007)) {
yr997_SA(y_str("(*({ yarr ", 10));
yr1004_ST(F.v4995);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.v4991);
yr997_SA(y_str("; &", 3));
}
yr997_SA(y_str("((", 2));
yr1004_ST(yr1765_CType(F.p2169));
yr997_SA(y_str(" *)(", 4));
yr1004_ST(F.v4995);
yr997_SA(y_str(").p)[y_ix", 9));
yr1010_SI(F.v5005);
yr997_SA(y_str("(", 1));
yr1004_ST(F.v4995);
F.p2168 = yr1016_SE();
F.v5003 = ((*(yR95 *)rt_nil_check(F.p2167))).f_b;
F.v5001 = ((*(yR100 *)rt_nil_check(F.v4997))).f_idx;
while ((!(F.v5003 == ((void *)0)))) {
yr2140_Expr(F.v5003, F.v5001, &F.v4993, &F.v4999);
if ((((!(F.v5001 == ((void *)0)))) && ((((*(yR100 *)rt_nil_check(F.v4997))).f_kind == v792)))) {
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.v5003))).f_line, F.v5001, F.v4999);
} else if ((!((((((*(yR100 *)rt_nil_check(F.v4999))).f_kind == v774)) || yr1729_IsDiscrete(F.v4999))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v5003))).f_line, y_str("a subscript is an integer or scalar value", 41));
}
yr986_SB();
yr1004_ST(F.p2168);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v4993);
F.p2168 = yr1016_SE();
if ((!(F.v5001 == ((void *)0)))) {
F.v5001 = ((*(yR100 *)rt_nil_check(F.v5001))).f_link;
}
F.v5003 = ((*(yR95 *)rt_nil_check(F.v5003))).f_next;
}
yr986_SB();
yr1004_ST(F.p2168);
yr997_SA(y_str(")]", 2));
if ((!F.v5007)) {
yr997_SA(y_str("; }))", 5));
}
F.p2168 = yr1016_SE();
(*F.p2168_o) = F.p2168;
(*F.p2169_o) = F.p2169;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2174_NegExpr(void * a_p2175, rt_int a_p2176, void * a_p2177, rt_int * a_p2178, void * * a_p2179) {
struct yf2180 F;
memset((void *)&F, 0, sizeof F);
F.p2175 = a_p2175;
F.p2176 = a_p2176;
F.p2177 = a_p2177;
F.p2178_o = a_p2178;
F.p2179_o = a_p2179;
yr986_SB();
if ((((*(yR100 *)rt_nil_check(F.p2177))).f_kind == v774)) {
F.p2179 = yr1723_CopyRep(F.p2177);
((*(yR100 *)rt_nil_check(F.p2179))).f_lo = INT64_C(0);
((*(yR100 *)rt_nil_check(F.p2179))).f_hasm = 0;
yr997_SA(y_str("rt_neg(", 7));
yr1004_ST(F.p2176);
yr997_SA(y_str(")", 1));
} else if ((((((*(yR100 *)rt_nil_check(F.p2177))).f_kind == v780)) || ((((*(yR100 *)rt_nil_check(F.p2177))).f_kind == v777)))) {
F.p2179 = yr1723_CopyRep(F.p2177);
((*(yR100 *)rt_nil_check(F.p2179))).f_lo = INT64_C(0);
yr997_SA(y_str("(-", 2));
yr1004_ST(F.p2176);
yr997_SA(y_str(")", 1));
} else if ((((*(yR100 *)rt_nil_check(F.p2177))).f_kind == v804)) {
F.p2179 = F.p2177;
yr997_SA(y_str("y_set_compl(", 12));
yr1004_ST(F.p2176);
yr997_SA(y_str(")", 1));
} else {
v897 = 0;
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2175))).f_line, y_str("- of something that is not a number or a set", 44));
}
F.p2178 = yr1016_SE();
(*F.p2178_o) = F.p2178;
(*F.p2179_o) = F.p2179;
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2184_Unbounded(void * a_p2185) {
struct yf2186 F;
memset((void *)&F, 0, sizeof F);
F.p2185 = a_p2185;
F.v5042 = yr1723_CopyRep(F.p2185);
((*(yR100 *)rt_nil_check(F.v5042))).f_lo = INT64_C(0);
((*(yR100 *)rt_nil_check(F.v5042))).f_hi = INT64_C(0);
((*(yR100 *)rt_nil_check(F.v5042))).f_hasm = 0;
{ void * rv5046 = F.v5042;
return rv5046; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2190_Call2(yarr a_p2192, rt_int a_p2193, rt_int a_p2194) {
struct yf2195 F;
memset((void *)&F, 0, sizeof F);
F.p2192 = a_p2192;
F.p2193 = a_p2193;
F.p2194 = a_p2194;
yr986_SB();
yr997_SA(F.p2192);
yr997_SA(y_str("(", 1));
yr1004_ST(F.p2193);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.p2194);
yr997_SA(y_str(")", 1));
{ rt_int rv5054 = yr1016_SE();
return rv5054; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2199_Infix(rt_int a_p2200, yarr a_p2202, rt_int a_p2203) {
struct yf2204 F;
memset((void *)&F, 0, sizeof F);
F.p2200 = a_p2200;
F.p2202 = a_p2202;
F.p2203 = a_p2203;
yr986_SB();
yr997_SA(y_str("(", 1));
yr1004_ST(F.p2200);
yr997_SA(y_str(" ", 1));
yr997_SA(F.p2202);
yr997_SA(y_str(" ", 1));
yr1004_ST(F.p2203);
yr997_SA(y_str(")", 1));
{ rt_int rv5063 = yr1016_SE();
return rv5063; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2208_EqCode(rt_int a_p2209, void * a_p2210, rt_int a_p2211, void * a_p2212) {
struct yf2213 F;
memset((void *)&F, 0, sizeof F);
F.p2209 = a_p2209;
F.p2210 = a_p2210;
F.p2211 = a_p2211;
F.p2212 = a_p2212;
F.v5074 = F.p2210;
if ((((*(yR100 *)rt_nil_check(F.p2210))).f_kind == v816)) {
F.v5074 = F.p2212;
}
if ((((((((*(yR100 *)rt_nil_check(F.v5074))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.v5074))).f_kind == v795))) || ((((*(yR100 *)rt_nil_check(F.v5074))).f_kind == v813))) || ((((*(yR100 *)rt_nil_check(F.v5074))).f_kind == v816)))) {
F.v5070 = yr1146_Fresh(y_str("e", 1));
F.v5072 = yr1146_Fresh(y_str("e", 1));
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(yr1765_CType(F.v5074));
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v5070);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.p2209);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v5072);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.p2211);
yr997_SA(y_str("; y_eq(", 7));
if ((((((*(yR100 *)rt_nil_check(F.v5074))).f_kind == v813)) || ((((*(yR100 *)rt_nil_check(F.v5074))).f_kind == v816)))) {
yr997_SA(y_str("y_desc_vector(", 14));
yr1004_ST(yr1771_DescOf(((*(yR100 *)rt_nil_check(F.v5074))).f_elem));
yr997_SA(y_str(")", 1));
} else {
yr1004_ST(yr1771_DescOf(F.v5074));
}
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v5070);
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v5072);
yr997_SA(y_str("); })", 5));
{ rt_int rv5088 = yr1016_SE();
return rv5088; }
}
if ((((*(yR100 *)rt_nil_check(F.v5074))).f_kind == v804)) {
{ rt_int rv5090 = yr2190_Call2(y_str("y_set_eq", 8), F.p2209, F.p2211);
return rv5090; }
}
{ rt_int rv5092 = yr2199_Infix(F.p2209, y_str("==", 2), F.p2211);
return rv5092; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2217_IsOrdered(void * a_p2218) {
struct yf2219 F;
memset((void *)&F, 0, sizeof F);
F.p2218 = a_p2218;
if ((((((((*(yR100 *)rt_nil_check(F.p2218))).f_kind == v774)) || ((((*(yR100 *)rt_nil_check(F.p2218))).f_kind == v780))) || ((((*(yR100 *)rt_nil_check(F.p2218))).f_kind == v777))) || ((((*(yR100 *)rt_nil_check(F.p2218))).f_kind == v789)))) {
{ rt_int rv5096 = 1;
return rv5096; }
}
{ rt_int rv5097 = (((((*(yR100 *)rt_nil_check(F.p2218))).f_kind == v786)) && ((*(yR100 *)rt_nil_check(F.p2218))).f_ordered);
return rv5097; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2223_BinExpr(void * a_p2224, void * a_p2225, rt_int * a_p2226, void * * a_p2227) {
struct yf2228 F;
memset((void *)&F, 0, sizeof F);
F.p2224 = a_p2224;
F.p2225 = a_p2225;
F.p2226_o = a_p2226;
F.p2227_o = a_p2227;
F.v5104 = ((*(yR95 *)rt_nil_check(F.p2224))).f_name;
if (yr2301_UserOp(F.p2224, F.v5104, ((*(yR95 *)rt_nil_check(F.p2224))).f_a, ((*(yR95 *)rt_nil_check(F.p2224))).f_b, &F.p2226, &F.p2227)) {
(*F.p2226_o) = F.p2226;
(*F.p2227_o) = F.p2227;
return;
}
if ((((F.v5104 == v207)) || ((F.v5104 == v369)))) {
yr2140_Expr(((*(yR95 *)rt_nil_check(F.p2224))).f_a, v1694, &F.v5106, &F.v5112);
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.p2224))).f_line, v1694, F.v5112);
yr2140_Expr(((*(yR95 *)rt_nil_check(F.p2224))).f_b, v1694, &F.v5108, &F.v5114);
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.p2224))).f_line, v1694, F.v5114);
F.p2227 = v1694;
if ((F.v5104 == v207)) {
F.p2226 = yr2199_Infix(F.v5106, y_str("&&", 2), F.v5108);
} else {
F.p2226 = yr2199_Infix(F.v5106, y_str("||", 2), F.v5108);
}
(*F.p2226_o) = F.p2226;
(*F.p2227_o) = F.p2227;
return;
}
if ((F.v5104 == v330)) {
yr2140_Expr(((*(yR95 *)rt_nil_check(F.p2224))).f_b, ((void *)0), &F.v5108, &F.v5114);
if ((!(((*(yR100 *)rt_nil_check(F.v5114))).f_kind == v804))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2224))).f_line, y_str("IN needs a set on its right", 27));
}
yr2140_Expr(((*(yR95 *)rt_nil_check(F.p2224))).f_a, ((*(yR100 *)rt_nil_check(F.v5114))).f_elem, &F.v5106, &F.v5112);
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.p2224))).f_line, ((*(yR100 *)rt_nil_check(F.v5114))).f_elem, F.v5112);
F.p2227 = v1694;
F.p2226 = yr2190_Call2(y_str("y_set_in", 8), F.v5106, F.v5108);
(*F.p2226_o) = F.p2226;
(*F.p2227_o) = F.p2227;
return;
}
F.v5116 = ((void *)0);
if (((((((((!(F.p2225 == ((void *)0)))) && ((!(F.v5104 == v555)))) && ((!(F.v5104 == v540)))) && ((!(F.v5104 == v558)))) && ((!(F.v5104 == v510)))) && ((!(F.v5104 == v561)))) && ((!(F.v5104 == v513))))) {
F.v5116 = F.p2225;
}
yr2140_Expr(((*(yR95 *)rt_nil_check(F.p2224))).f_a, F.v5116, &F.v5106, &F.v5112);
yr2140_Expr(((*(yR95 *)rt_nil_check(F.p2224))).f_b, F.v5112, &F.v5108, &F.v5114);
if ((((F.v5104 == v555)) || ((F.v5104 == v540)))) {
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.p2224))).f_line, F.v5112, F.v5114);
if (((((((*(yR100 *)rt_nil_check(F.v5112))).f_kind == v807)) || ((((*(yR100 *)rt_nil_check(F.v5112))).f_kind == v801))) || ((((*(yR100 *)rt_nil_check(F.v5112))).f_kind == v810)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2224))).f_line, y_str("= and # are not defined for signals, files and semaphores", 57));
}
if ((((*(yR100 *)rt_nil_check(F.v5112))).f_opaque && (((rt_div(((*(yR100 *)rt_nil_check(F.v5112))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2224))).f_line, ((*(yR100 *)rt_nil_check(F.v5112))).f_tname, y_str(" is opaque here: = is not exported (X.B.3)", 42));
}
F.p2227 = v1694;
F.p2226 = yr2208_EqCode(F.v5106, F.v5112, F.v5108, F.v5114);
if ((F.v5104 == v540)) {
yr986_SB();
yr997_SA(y_str("(!", 2));
yr1004_ST(F.p2226);
yr997_SA(y_str(")", 1));
F.p2226 = yr1016_SE();
}
(*F.p2226_o) = F.p2226;
(*F.p2227_o) = F.p2227;
return;
}
if ((((((F.v5104 == v558)) || ((F.v5104 == v510))) || ((F.v5104 == v561))) || ((F.v5104 == v513)))) {
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.p2224))).f_line, F.v5112, F.v5114);
if ((!yr2217_IsOrdered(F.v5112))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2224))).f_line, y_str("< <= > >= apply to ordered values (VIII.A.1)", 44));
}
F.p2227 = v1694;
if ((F.v5104 == v558)) {
F.p2226 = yr2199_Infix(F.v5106, y_str("<", 1), F.v5108);
} else if ((F.v5104 == v510)) {
F.p2226 = yr2199_Infix(F.v5106, y_str("<=", 2), F.v5108);
} else if ((F.v5104 == v561)) {
F.p2226 = yr2199_Infix(F.v5106, y_str(">", 1), F.v5108);
} else {
F.p2226 = yr2199_Infix(F.v5106, y_str(">=", 2), F.v5108);
}
(*F.p2226_o) = F.p2226;
(*F.p2227_o) = F.p2227;
return;
}
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.p2224))).f_line, F.v5112, F.v5114);
F.v5118 = ((*(yR100 *)rt_nil_check(F.v5112))).f_kind;
if ((((*(yR100 *)rt_nil_check(F.v5112))).f_kind == v816)) {
F.v5118 = ((*(yR100 *)rt_nil_check(F.v5114))).f_kind;
}
if ((F.v5104 == v459)) {
if ((F.v5118 == v783)) {
F.p2227 = v1694;
F.p2226 = yr2199_Infix(F.v5106, y_str("!=", 2), F.v5108);
} else if ((F.v5118 == v804)) {
F.p2227 = F.v5112;
F.p2226 = yr2190_Call2(y_str("y_set_xor", 9), F.v5106, F.v5108);
} else {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2224))).f_line, y_str("XOR applies to BOOLEAN values and sets", 38));
}
(*F.p2226_o) = F.p2226;
(*F.p2227_o) = F.p2227;
return;
}
if ((F.v5118 == v804)) {
F.p2227 = F.v5112;
if ((F.v5104 == v543)) {
F.p2226 = yr2190_Call2(y_str("y_set_union", 11), F.v5106, F.v5108);
} else if ((F.v5104 == v546)) {
F.p2226 = yr2190_Call2(y_str("y_set_diff", 10), F.v5106, F.v5108);
} else if ((F.v5104 == v549)) {
F.p2226 = yr2190_Call2(y_str("y_set_inter", 11), F.v5106, F.v5108);
} else {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2224))).f_line, y_str("this operator does not apply to sets", 36));
}
(*F.p2226_o) = F.p2226;
(*F.p2227_o) = F.p2227;
return;
}
if ((F.v5118 == v774)) {
F.p2227 = yr2184_Unbounded(F.v5112);
if ((F.v5104 == v543)) {
F.p2226 = yr2190_Call2(y_str("rt_add", 6), F.v5106, F.v5108);
} else if ((F.v5104 == v546)) {
F.p2226 = yr2190_Call2(y_str("rt_sub", 6), F.v5106, F.v5108);
} else if ((F.v5104 == v549)) {
F.p2226 = yr2190_Call2(y_str("rt_mul", 6), F.v5106, F.v5108);
} else if ((F.v5104 == v246)) {
F.p2226 = yr2190_Call2(y_str("rt_div", 6), F.v5106, F.v5108);
} else if ((F.v5104 == v348)) {
F.p2226 = yr2190_Call2(y_str("rt_mod", 6), F.v5106, F.v5108);
} else if ((F.v5104 == v552)) {
F.p2227 = v1704;
yr986_SB();
yr997_SA(y_str("rt_fdiv((double)(", 17));
yr1004_ST(F.v5106);
yr997_SA(y_str("), (double)(", 12));
yr1004_ST(F.v5108);
yr997_SA(y_str("))", 2));
F.p2226 = yr1016_SE();
} else {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2224))).f_line, F.v5104, y_str(" is a free operator: no definition of it is visible (VIII.A)", 60));
}
(*F.p2226_o) = F.p2226;
(*F.p2227_o) = F.p2227;
return;
}
if ((((F.v5118 == v780)) || ((F.v5118 == v777)))) {
F.p2227 = yr2184_Unbounded(F.v5112);
if ((F.v5104 == v543)) {
F.p2226 = yr2199_Infix(F.v5106, y_str("+", 1), F.v5108);
} else if ((F.v5104 == v546)) {
F.p2226 = yr2199_Infix(F.v5106, y_str("-", 1), F.v5108);
} else if ((F.v5104 == v549)) {
F.p2226 = yr2199_Infix(F.v5106, y_str("*", 1), F.v5108);
} else if ((F.v5104 == v552)) {
F.p2227 = v1704;
F.p2226 = yr2190_Call2(y_str("rt_fdiv", 7), F.v5106, F.v5108);
} else {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2224))).f_line, F.v5104, y_str(" does not apply to these numbers", 32));
}
(*F.p2226_o) = F.p2226;
(*F.p2227_o) = F.p2227;
return;
}
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2224))).f_line, F.v5104, y_str(" does not apply to these values", 31));
(*F.p2226_o) = F.p2226;
(*F.p2227_o) = F.p2227;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2262_Fits(void * a_p2263, void * a_p2264) {
struct yf2265 F;
memset((void *)&F, 0, sizeof F);
F.p2263 = a_p2263;
F.p2264 = a_p2264;
if ((((*(yR100 *)rt_nil_check(F.p2263))).f_kind == v813)) {
if ((!yr1741_IsArrayLike(F.p2264))) {
{ rt_int rv5161 = 0;
return rv5161; }
}
if ((!(((*(yR100 *)rt_nil_check(F.p2264))).f_nidx == ((*(yR100 *)rt_nil_check(F.p2263))).f_nidx))) {
{ rt_int rv5163 = 0;
return rv5163; }
}
{ rt_int rv5164 = yr1783_SameType(((*(yR100 *)rt_nil_check(F.p2263))).f_elem, ((*(yR100 *)rt_nil_check(F.p2264))).f_elem);
return rv5164; }
}
if ((((*(yR100 *)rt_nil_check(F.p2263))).f_kind == v825)) {
{ rt_int rv5166 = 1;
return rv5166; }
}
{ rt_int rv5167 = yr1783_SameType(F.p2263, F.p2264);
return rv5167; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2269_Choose(void * a_p2270, rt_int a_p2271, rt_int a_p2272) {
struct yf2273 F;
memset((void *)&F, 0, sizeof F);
F.p2270 = a_p2270;
F.p2271 = a_p2271;
F.p2272 = a_p2272;
F.v5173 = F.p2270;
while ((!(F.v5173 == ((void *)0)))) {
if ((((*(yR115 *)rt_nil_check(F.v5173))).f_nparams == F.p2272)) {
F.v5177 = 1;
F.v5175 = ((*(yR115 *)rt_nil_check(F.v5173))).f_params;
F.v5179 = INT64_C(1);
while ((!(F.v5175 == ((void *)0)))) {
if ((!yr2262_Fits(((*(yR110 *)rt_nil_check(F.v5175))).f_rep, ((void * *)(v2248).p)[y_ix1(v2248, rt_add(F.p2271, F.v5179))]))) {
F.v5177 = 0;
}
F.v5179 = rt_range(rt_add(F.v5179, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5175 = ((*(yR110 *)rt_nil_check(F.v5175))).f_next;
}
if (F.v5177) {
{ void * rv5186 = F.v5173;
return rv5186; }
}
}
F.v5173 = ((*(yR115 *)rt_nil_check(F.v5173))).f_alt;
}
{ void * rv5187 = ((void *)0);
return rv5187; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2277_HidesStandard(void * a_p2278) {
struct yf2279 F;
memset((void *)&F, 0, sizeof F);
F.p2278 = a_p2278;
F.v5191 = F.p2278;
while ((!(F.v5191 == ((void *)0)))) {
if ((((!(((*(yR115 *)rt_nil_check(F.v5191))).f_decl == ((void *)0)))) && ((((*(yR95 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5191))).f_decl))).f_ival == INT64_C(0))))) {
{ rt_int rv5194 = 1;
return rv5194; }
}
F.v5191 = ((*(yR115 *)rt_nil_check(F.v5191))).f_alt;
}
{ rt_int rv5196 = 0;
return rv5196; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2283_CompileArgs(void * a_p2284, void * a_p2285, rt_int * a_p2286, rt_int * a_p2287) {
struct yf2288 F;
memset((void *)&F, 0, sizeof F);
F.p2284 = a_p2284;
F.p2285 = a_p2285;
F.p2286_o = a_p2286;
F.p2287_o = a_p2287;
F.v5203 = F.p2284;
F.v5205 = ((void *)0);
F.p2286 = v2259;
F.p2287 = INT64_C(0);
if ((!(F.p2285 == ((void *)0)))) {
F.v5205 = ((*(yR115 *)rt_nil_check(F.p2285))).f_params;
}
while ((!(F.v5203 == ((void *)0)))) {
if ((v2259 >= INT64_C(4000))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v5203))).f_line, y_str("calls nested too deeply", 23));
}
F.p2287 = rt_range(rt_add(F.p2287, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v2259 = rt_range(rt_add(F.p2286, F.p2287), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5207 = ((void *)0);
if ((!(F.v5205 == ((void *)0)))) {
F.v5207 = ((*(yR110 *)rt_nil_check(F.v5205))).f_rep;
F.v5205 = ((*(yR110 *)rt_nil_check(F.v5205))).f_next;
}
yr2140_Expr(F.v5203, F.v5207, &((rt_int *)(v2239).p)[y_ix1(v2239, rt_add(F.p2286, F.p2287))], &((void * *)(v2248).p)[y_ix1(v2248, rt_add(F.p2286, F.p2287))]);
((void * *)(v2257).p)[y_ix1(v2257, rt_add(F.p2286, F.p2287))] = F.v5203;
F.v5203 = ((*(yR95 *)rt_nil_check(F.v5203))).f_next;
}
(*F.p2286_o) = F.p2286;
(*F.p2287_o) = F.p2287;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2292_CallCode(void * a_p2293, rt_int a_p2294, rt_int a_p2295, rt_int a_p2296) {
struct yf2297 F;
memset((void *)&F, 0, sizeof F);
F.p2293 = a_p2293;
F.p2294 = a_p2294;
F.p2295 = a_p2295;
F.p2296 = a_p2296;
F.v5223 = ((*(yR115 *)rt_nil_check(F.p2293))).f_params;
F.v5225 = rt_range(rt_add(F.p2294, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5229 = 1;
if ((!(F.p2295 == ((*(yR115 *)rt_nil_check(F.p2293))).f_nparams))) {
yr1132_FailN(F.p2296, ((*(yR115 *)rt_nil_check(F.p2293))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
yr986_SB();
yr1004_ST(((*(yR115 *)rt_nil_check(F.p2293))).f_cname);
yr997_SA(y_str("(", 1));
if ((((*(yR115 *)rt_nil_check(F.p2293))).f_level > INT64_C(1))) {
yr1004_ST(yr1667_FramePtr(rt_range(rt_sub(((*(yR115 *)rt_nil_check(F.p2293))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v5229 = 0;
}
while ((!(F.v5223 == ((void *)0)))) {
if ((!F.v5229)) {
yr997_SA(y_str(", ", 2));
}
F.v5229 = 0;
if ((!yr2262_Fits(((*(yR110 *)rt_nil_check(F.v5223))).f_rep, ((void * *)(v2248).p)[y_ix1(v2248, F.v5225)]))) {
v897 = 0;
yr1790_TypeClash(((*(yR95 *)rt_nil_check(((void * *)(v2257).p)[y_ix1(v2257, F.v5225)]))).f_line, ((*(yR110 *)rt_nil_check(F.v5223))).f_rep, ((void * *)(v2248).p)[y_ix1(v2248, F.v5225)]);
}
if ((((*(yR110 *)rt_nil_check(F.v5223))).f_cls == v867)) {
yr1004_ST(yr2083_Convert(((rt_int *)(v2239).p)[y_ix1(v2239, F.v5225)], ((*(yR110 *)rt_nil_check(F.v5223))).f_rep, ((void * *)(v2248).p)[y_ix1(v2248, F.v5225)]));
} else {
if ((!yr2101_IsVariable(((void * *)(v2257).p)[y_ix1(v2257, F.v5225)]))) {
v897 = 0;
yr1132_FailN(((*(yR95 *)rt_nil_check(((void * *)(v2257).p)[y_ix1(v2257, F.v5225)]))).f_line, ((*(yR110 *)rt_nil_check(F.v5223))).f_name, y_str(": the actual of a VAR or OUT parameter must be a variable", 57));
}
yr2107_CheckPure(((void * *)(v2257).p)[y_ix1(v2257, F.v5225)]);
yr997_SA(y_str("&", 1));
yr1004_ST(((rt_int *)(v2239).p)[y_ix1(v2239, F.v5225)]);
}
F.v5225 = rt_range(rt_add(F.v5225, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5223 = ((*(yR110 *)rt_nil_check(F.v5223))).f_next;
}
yr997_SA(y_str(")", 1));
v2259 = F.p2294;
{ rt_int rv5246 = yr1016_SE();
return rv5246; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2301_UserOp(void * a_p2302, rt_int a_p2303, void * a_p2304, void * a_p2305, rt_int * a_p2306, void * * a_p2307) {
struct yf2308 F;
memset((void *)&F, 0, sizeof F);
F.p2302 = a_p2302;
F.p2303 = a_p2303;
F.p2304 = a_p2304;
F.p2305 = a_p2305;
F.p2306_o = a_p2306;
F.p2307_o = a_p2307;
F.v5255 = yr1621_Find(F.p2303);
if ((F.v5255 == ((void *)0))) {
{ rt_int rv5263 = 0;
(*F.p2306_o) = F.p2306;
(*F.p2307_o) = F.p2307;
return rv5263; }
}
F.v5255 = yr1686_Real(F.v5255);
if ((!(((*(yR115 *)rt_nil_check(F.v5255))).f_kind == v846))) {
{ rt_int rv5265 = 0;
(*F.p2306_o) = F.p2306;
(*F.p2307_o) = F.p2307;
return rv5265; }
}
((*(yR95 *)rt_nil_check(F.p2304))).f_next = F.p2305;
if ((!(F.p2305 == ((void *)0)))) {
((*(yR95 *)rt_nil_check(F.p2305))).f_next = ((void *)0);
}
yr2283_CompileArgs(F.p2304, ((void *)0), &F.v5259, &F.v5261);
F.v5257 = yr2269_Choose(F.v5255, F.v5259, F.v5261);
if ((F.v5257 == ((void *)0))) {
v2259 = F.v5259;
if (yr2277_HidesStandard(F.v5255)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2302))).f_line, F.p2303, y_str(": no definition takes operands of these types", 45));
}
{ rt_int rv5268 = 0;
(*F.p2306_o) = F.p2306;
(*F.p2307_o) = F.p2307;
return rv5268; }
}
F.p2306 = yr2292_CallCode(F.v5257, F.v5259, F.v5261, ((*(yR95 *)rt_nil_check(F.p2302))).f_line);
F.p2307 = ((*(yR115 *)rt_nil_check(F.v5257))).f_ret;
{ rt_int rv5270 = 1;
(*F.p2306_o) = F.p2306;
(*F.p2307_o) = F.p2307;
return rv5270; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2312_CallExpr(void * a_p2313, void * a_p2314, rt_int a_p2315, rt_int * a_p2316, void * * a_p2317) {
struct yf2318 F;
memset((void *)&F, 0, sizeof F);
F.p2313 = a_p2313;
F.p2314 = a_p2314;
F.p2315 = a_p2315;
F.p2316_o = a_p2316;
F.p2317_o = a_p2317;
F.v5278 = yr1686_Real(yr1633_Lookup(((*(yR95 *)rt_nil_check(F.p2313))).f_name, ((*(yR95 *)rt_nil_check(F.p2313))).f_line));
if ((((*(yR115 *)rt_nil_check(F.v5278))).f_kind == v861)) {
yr2800_StdCall(((*(yR115 *)rt_nil_check(F.v5278))).f_mval, F.p2313, F.p2315, &F.p2316, &F.p2317);
(*F.p2316_o) = F.p2316;
(*F.p2317_o) = F.p2317;
return;
}
if ((((((*(yR115 *)rt_nil_check(F.v5278))).f_kind == v837)) || ((((*(yR115 *)rt_nil_check(F.v5278))).f_kind == v840)))) {
if (F.p2315) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2313))).f_line, y_str("a value is not a statement", 26));
}
yr2322_Denote(((*(yR115 *)rt_nil_check(F.v5278))).f_rep, F.p2313, &F.p2316, &F.p2317);
(*F.p2316_o) = F.p2316;
(*F.p2317_o) = F.p2317;
return;
}
if ((!(((*(yR115 *)rt_nil_check(F.v5278))).f_kind == v846))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2313))).f_line, ((*(yR95 *)rt_nil_check(F.p2313))).f_name, y_str(" is not a routine", 17));
}
if ((((*(yR115 *)rt_nil_check(F.v5278))).f_alt == ((void *)0))) {
yr2283_CompileArgs(((*(yR95 *)rt_nil_check(F.p2313))).f_a, F.v5278, &F.v5282, &F.v5284);
F.v5280 = F.v5278;
} else {
yr2283_CompileArgs(((*(yR95 *)rt_nil_check(F.p2313))).f_a, ((void *)0), &F.v5282, &F.v5284);
F.v5280 = yr2269_Choose(F.v5278, F.v5282, F.v5284);
if ((F.v5280 == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2313))).f_line, ((*(yR95 *)rt_nil_check(F.p2313))).f_name, y_str(": no definition takes actuals of these types", 44));
}
}
F.p2316 = yr2292_CallCode(F.v5280, F.v5282, F.v5284, ((*(yR95 *)rt_nil_check(F.p2313))).f_line);
F.p2317 = ((*(yR115 *)rt_nil_check(F.v5280))).f_ret;
if ((F.p2315 && ((!(((*(yR100 *)rt_nil_check(F.p2317))).f_kind == v822))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2313))).f_line, ((*(yR95 *)rt_nil_check(F.p2313))).f_name, y_str(" returns a value: it is called in an expression (IX.A.2)", 56));
}
if (((!F.p2315) && ((((*(yR100 *)rt_nil_check(F.p2317))).f_kind == v822)))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2313))).f_line, ((*(yR95 *)rt_nil_check(F.p2313))).f_name, y_str(" returns no value", 17));
}
(*F.p2316_o) = F.p2316;
(*F.p2317_o) = F.p2317;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2322_Denote(void * a_p2323, void * a_p2324, rt_int * a_p2325, void * * a_p2326) {
struct yf2327 F;
memset((void *)&F, 0, sizeof F);
F.p2323 = a_p2323;
F.p2324 = a_p2324;
F.p2325_o = a_p2325;
F.p2326_o = a_p2326;
F.v5296 = ((*(yR95 *)rt_nil_check(F.p2324))).f_a;
F.v5316 = INT64_C(0);
F.v5323 = 1;
F.p2326 = F.p2323;
if (((*(yR100 *)rt_nil_check(F.p2323))).f_abstract) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2324))).f_line, ((*(yR100 *)rt_nil_check(F.p2323))).f_tname, y_str(" has no representation to denote a value of", 43));
}
if ((((*(yR100 *)rt_nil_check(F.p2323))).f_kind == v795)) {
if (((*(yR100 *)rt_nil_check(F.p2323))).f_opaque) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2324))).f_line, ((*(yR100 *)rt_nil_check(F.p2323))).f_tname, y_str(" is opaque here (X.B.3)", 23));
}
yr986_SB();
yr997_SA(y_str("((", 2));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p2323))).f_cname);
yr997_SA(y_str("){ ", 3));
F.v5302 = yr1016_SE();
F.v5298 = ((*(yR100 *)rt_nil_check(F.p2323))).f_fields;
while ((!(F.v5298 == ((void *)0)))) {
if ((((((*(yR105 *)rt_nil_check(F.v5298))).f_variant == INT64_C(0))) || ((((*(yR105 *)rt_nil_check(F.v5298))).f_variant == F.v5316)))) {
if ((F.v5296 == ((void *)0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2324))).f_line, y_str("too few components in this record value", 39));
}
yr2140_Expr(F.v5296, ((*(yR105 *)rt_nil_check(F.v5298))).f_rep, &F.v5300, &F.v5306);
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.v5296))).f_line, ((*(yR105 *)rt_nil_check(F.v5298))).f_rep, F.v5306);
if ((F.v5298 == ((*(yR100 *)rt_nil_check(F.p2323))).f_selector)) {
yr2075_Manifest(F.v5296, &F.v5314, &F.v5319);
if ((!F.v5314)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v5296))).f_line, y_str("the case-selection value is a manifest constant", 47));
}
F.v5316 = yr2331_VariantOf(F.p2323, F.v5319, ((*(yR95 *)rt_nil_check(F.v5296))).f_line);
}
yr986_SB();
yr1004_ST(F.v5302);
if ((!F.v5323)) {
yr997_SA(y_str(", ", 2));
}
F.v5323 = 0;
yr997_SA(y_str(".f_", 3));
yr1004_ST(((*(yR105 *)rt_nil_check(F.v5298))).f_name);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2083_Convert(F.v5300, ((*(yR105 *)rt_nil_check(F.v5298))).f_rep, F.v5306));
F.v5302 = yr1016_SE();
F.v5296 = ((*(yR95 *)rt_nil_check(F.v5296))).f_next;
}
F.v5298 = ((*(yR105 *)rt_nil_check(F.v5298))).f_next;
}
if ((!(F.v5296 == ((void *)0)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2324))).f_line, y_str("too many components in this record value", 40));
}
yr986_SB();
yr1004_ST(F.v5302);
yr997_SA(y_str(" })", 3));
F.p2325 = yr1016_SE();
(*F.p2325_o) = F.p2325;
(*F.p2326_o) = F.p2326;
return;
}
if ((((*(yR100 *)rt_nil_check(F.p2323))).f_kind == v792)) {
F.v5308 = yr1260_Count(F.v5296);
F.v5302 = yr1146_Fresh(y_str("da", 2));
if ((F.v5308 == INT64_C(1))) {
yr2140_Expr(F.v5296, ((*(yR100 *)rt_nil_check(F.p2323))).f_elem, &F.v5300, &F.v5306);
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.v5296))).f_line, ((*(yR100 *)rt_nil_check(F.p2323))).f_elem, F.v5306);
F.v5304 = yr1146_Fresh(y_str("dv", 2));
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(yr1765_CType(((*(yR100 *)rt_nil_check(F.p2323))).f_elem));
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v5304);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2083_Convert(F.v5300, ((*(yR100 *)rt_nil_check(F.p2323))).f_elem, F.v5306));
yr997_SA(y_str("; y_fill(", 9));
yr1004_ST(yr1771_DescOf(F.p2323));
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v5304);
yr997_SA(y_str("); })", 5));
F.p2325 = yr1016_SE();
(*F.p2325_o) = F.p2325;
(*F.p2326_o) = F.p2326;
return;
}
yr986_SB();
yr997_SA(y_str("({ yarr ", 8));
yr1004_ST(F.v5302);
yr997_SA(y_str("; y_init(", 9));
yr1004_ST(yr1771_DescOf(F.p2323));
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v5302);
yr997_SA(y_str("); if (y_count(", 15));
yr1004_ST(F.v5302);
yr997_SA(y_str(", ", 2));
yr1010_SI(((*(yR100 *)rt_nil_check(F.p2323))).f_nidx);
yr997_SA(y_str(") != ", 5));
yr1010_SI(F.v5308);
yr997_SA(y_str(") rt_raise_msg(RT_X_RANGE, ", 27));
yr991_SC(34);
yr997_SA(y_str("wrong number of components", 26));
yr991_SC(34);
yr997_SA(y_str(");", 2));
F.p2325 = yr1016_SE();
F.v5312 = INT64_C(0);
while ((!(F.v5296 == ((void *)0)))) {
yr2140_Expr(F.v5296, ((*(yR100 *)rt_nil_check(F.p2323))).f_elem, &F.v5300, &F.v5306);
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.v5296))).f_line, ((*(yR100 *)rt_nil_check(F.p2323))).f_elem, F.v5306);
yr986_SB();
yr1004_ST(F.p2325);
if (yr1753_Deep(((*(yR100 *)rt_nil_check(F.p2323))).f_elem)) {
yr997_SA(y_str(" { ", 3));
yr1004_ST(yr1765_CType(((*(yR100 *)rt_nil_check(F.p2323))).f_elem));
yr997_SA(y_str(" dv = ", 6));
yr1004_ST(F.v5300);
yr997_SA(y_str("; y_copy(", 9));
yr1004_ST(yr1771_DescOf(((*(yR100 *)rt_nil_check(F.p2323))).f_elem));
yr997_SA(y_str(", &((", 5));
yr1004_ST(yr1765_CType(((*(yR100 *)rt_nil_check(F.p2323))).f_elem));
yr997_SA(y_str(" *)", 3));
yr1004_ST(F.v5302);
yr997_SA(y_str(".p)[", 4));
yr1010_SI(F.v5312);
yr997_SA(y_str("], &dv); }", 10));
} else {
yr997_SA(y_str(" ((", 3));
yr1004_ST(yr1765_CType(((*(yR100 *)rt_nil_check(F.p2323))).f_elem));
yr997_SA(y_str(" *)", 3));
yr1004_ST(F.v5302);
yr997_SA(y_str(".p)[", 4));
yr1010_SI(F.v5312);
yr997_SA(y_str("] = ", 4));
yr1004_ST(yr2083_Convert(F.v5300, ((*(yR100 *)rt_nil_check(F.p2323))).f_elem, F.v5306));
yr997_SA(y_str(";", 1));
}
F.p2325 = yr1016_SE();
F.v5312 = rt_range(rt_add(F.v5312, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5296 = ((*(yR95 *)rt_nil_check(F.v5296))).f_next;
}
yr986_SB();
yr1004_ST(F.p2325);
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v5302);
yr997_SA(y_str("; })", 4));
F.p2325 = yr1016_SE();
(*F.p2325_o) = F.p2325;
(*F.p2326_o) = F.p2326;
return;
}
if ((((*(yR100 *)rt_nil_check(F.p2323))).f_kind == v804)) {
yr986_SB();
yr997_SA(y_str("y_set_new(", 10));
yr1004_ST(yr1827_LoText(((*(yR100 *)rt_nil_check(F.p2323))).f_elem));
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1833_HiText(((*(yR100 *)rt_nil_check(F.p2323))).f_elem));
yr997_SA(y_str(")", 1));
F.p2325 = yr1016_SE();
while ((!(F.v5296 == ((void *)0)))) {
yr2140_Expr(F.v5296, ((*(yR100 *)rt_nil_check(F.p2323))).f_elem, &F.v5300, &F.v5306);
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.v5296))).f_line, ((*(yR100 *)rt_nil_check(F.p2323))).f_elem, F.v5306);
F.p2325 = yr2190_Call2(y_str("y_set_add", 9), F.p2325, F.v5300);
F.v5296 = ((*(yR95 *)rt_nil_check(F.v5296))).f_next;
}
(*F.p2325_o) = F.p2325;
(*F.p2326_o) = F.p2326;
return;
}
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2324))).f_line, ((*(yR100 *)rt_nil_check(F.p2323))).f_tname, y_str(" has no denotations of values", 29));
(*F.p2325_o) = F.p2325;
(*F.p2326_o) = F.p2326;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2331_VariantOf(void * a_p2332, rt_int a_p2333, rt_int a_p2334) {
struct yf2335 F;
memset((void *)&F, 0, sizeof F);
F.p2332 = a_p2332;
F.p2333 = a_p2333;
F.p2334 = a_p2334;
F.v5385 = ((*(yR100 *)rt_nil_check(F.p2332))).f_fields;
while ((!(F.v5385 == ((void *)0)))) {
if ((!(((*(yR105 *)rt_nil_check(F.v5385))).f_variant == INT64_C(0)))) {
F.v5387 = ((*(yR105 *)rt_nil_check(F.v5385))).f_labels;
while ((!(F.v5387 == ((void *)0)))) {
yr2075_Manifest(F.v5387, &F.v5389, &F.v5391);
if ((F.v5389 && ((F.v5391 == F.p2333)))) {
{ rt_int rv5393 = ((*(yR105 *)rt_nil_check(F.v5385))).f_variant;
return rv5393; }
}
F.v5387 = ((*(yR95 *)rt_nil_check(F.v5387))).f_next;
}
}
F.v5385 = ((*(yR105 *)rt_nil_check(F.v5385))).f_next;
}
{ rt_int rv5395 = INT64_C(-1);
return rv5395; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2418_Emit2(yarr a_p2420, rt_int a_p2421) {
struct yf2422 F;
memset((void *)&F, 0, sizeof F);
F.p2420 = a_p2420;
F.p2421 = a_p2421;
yr986_SB();
yr997_SA(F.p2420);
yr1004_ST(F.p2421);
F.v5400 = yr1016_SE();
yr1092_Emit(F.v5400);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2426_Emit3(yarr a_p2428, rt_int a_p2429, yarr a_p2431) {
struct yf2432 F;
memset((void *)&F, 0, sizeof F);
F.p2428 = a_p2428;
F.p2429 = a_p2429;
F.p2431 = a_p2431;
yr986_SB();
yr997_SA(F.p2428);
yr1004_ST(F.p2429);
yr997_SA(F.p2431);
F.v5406 = yr1016_SE();
yr1092_Emit(F.v5406);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2436_PopTo(rt_int a_p2437) {
struct yf2438 F;
memset((void *)&F, 0, sizeof F);
F.p2437 = a_p2437;
if ((v2348 > F.p2437)) {
yr2426_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v2346).p)[y_ix1(v2346, rt_add(F.p2437, INT64_C(1)))], y_str(".prev;", 6));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2442_LeaveBlock(void) {
struct yf2443 F;
memset((void *)&F, 0, sizeof F);
if ((v2372 > INT64_C(0))) {
if ((!(((rt_int *)(v2361).p)[y_ix1(v2361, v2372)] == INT64_C(0)))) {
yr2426_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v2361).p)[y_ix1(v2361, v2372)], y_str(".prev;", 6));
}
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2447_RaiseCode(rt_int a_p2448) {
struct yf2449 F;
memset((void *)&F, 0, sizeof F);
F.p2448 = a_p2448;
yr986_SB();
yr997_SA(y_str("rt_raise(rt_exc(", 16));
yr991_SC(34);
yr1004_ST(F.p2448);
yr991_SC(34);
yr997_SA(y_str("));", 3));
{ rt_int rv5424 = yr1016_SE();
return rv5424; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2453_BlockStatements(void * a_p2454) {
struct yf2455 F;
memset((void *)&F, 0, sizeof F);
F.p2454 = a_p2454;
F.v5440 = ((*(yR95 *)rt_nil_check(F.p2454))).f_a;
F.v5442 = INT64_C(0);
while ((!(F.v5440 == ((void *)0)))) {
if ((((((*(yR95 *)rt_nil_check(F.v5440))).f_kind == v615)) && ((F.v5442 == INT64_C(0))))) {
F.v5442 = yr1146_Fresh(y_str("xs", 2));
yr2426_Emit3(y_str("rt_frame *", 10), F.v5442, y_str(" = rt_xtop;", 11));
}
F.v5440 = ((*(yR95 *)rt_nil_check(F.v5440))).f_next;
}
if ((((*(yR95 *)rt_nil_check(F.p2454))).f_b == ((void *)0))) {
v2372 = rt_range(rt_add(v2372, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2361).p)[y_ix1(v2361, v2372)] = INT64_C(0);
((rt_int *)(v2370).p)[y_ix1(v2370, v2372)] = F.v5442;
yr2459_Statements(((*(yR95 *)rt_nil_check(F.p2454))).f_c);
v2372 = rt_range(rt_sub(v2372, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr2527_CheckLabels(((*(yR95 *)rt_nil_check(F.p2454))).f_a);
return;
}
v2415 = 1;
F.v5428 = yr1146_Fresh(y_str("xf", 2));
yr2426_Emit3(y_str("{ rt_frame ", 11), F.v5428, y_str(";", 1));
yr2426_Emit3(y_str("if (RT_TRY(", 11), F.v5428, y_str(")) {", 4));
v2348 = rt_range(rt_add(v2348, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2346).p)[y_ix1(v2346, v2348)] = F.v5428;
v2372 = rt_range(rt_add(v2372, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2361).p)[y_ix1(v2361, v2372)] = F.v5428;
((rt_int *)(v2370).p)[y_ix1(v2370, v2372)] = F.v5442;
yr2459_Statements(((*(yR95 *)rt_nil_check(F.p2454))).f_c);
v2372 = rt_range(rt_sub(v2372, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v2348 = rt_range(rt_sub(v2348, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr2527_CheckLabels(((*(yR95 *)rt_nil_check(F.p2454))).f_a);
yr2426_Emit3(y_str("RT_POP(", 7), F.v5428, y_str(");", 2));
yr1098_EmitS(y_str("} else {", 8));
yr2426_Emit3(y_str("RT_POP(", 7), F.v5428, y_str(");", 2));
F.v5430 = yr1146_Fresh(y_str("xc", 2));
yr2426_Emit3(y_str("int ", 4), F.v5430, y_str(" = rt_xcur;", 11));
v2372 = rt_range(rt_add(v2372, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2361).p)[y_ix1(v2361, v2372)] = INT64_C(0);
((rt_int *)(v2370).p)[y_ix1(v2370, v2372)] = INT64_C(0);
v2384 = rt_range(rt_add(v2384, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2382).p)[y_ix1(v2382, v2384)] = F.v5430;
F.v5438 = 1;
F.v5434 = ((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2454))).f_b))).f_a;
while ((!(F.v5434 == ((void *)0)))) {
yr986_SB();
if (F.v5438) {
yr997_SA(y_str("if (", 4));
} else {
yr997_SA(y_str("} else if (", 11));
}
F.v5438 = 0;
F.v5436 = ((*(yR95 *)rt_nil_check(F.v5434))).f_a;
while ((!(F.v5436 == ((void *)0)))) {
yr1004_ST(F.v5430);
yr997_SA(y_str(" == rt_exc(", 11));
yr991_SC(34);
yr1004_ST(((*(yR95 *)rt_nil_check(F.v5436))).f_name);
yr991_SC(34);
yr997_SA(y_str(")", 1));
if ((!(((*(yR95 *)rt_nil_check(F.v5436))).f_next == ((void *)0)))) {
yr997_SA(y_str(" || ", 4));
}
F.v5436 = ((*(yR95 *)rt_nil_check(F.v5436))).f_next;
}
yr997_SA(y_str(") {", 3));
F.v5432 = yr1016_SE();
yr1092_Emit(F.v5432);
yr2459_Statements(((*(yR95 *)rt_nil_check(F.v5434))).f_b);
F.v5434 = ((*(yR95 *)rt_nil_check(F.v5434))).f_next;
}
if ((!F.v5438)) {
yr1098_EmitS(y_str("} else {", 8));
}
if ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2454))).f_b))).f_flag == INT64_C(1))) {
yr2459_Statements(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2454))).f_b))).f_b);
} else {
yr2426_Emit3(y_str("rt_raise(", 9), F.v5430, y_str(");", 2));
}
if ((!F.v5438)) {
yr1098_EmitS(y_str("}", 1));
}
v2384 = rt_range(rt_sub(v2384, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v2372 = rt_range(rt_sub(v2372, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1098_EmitS(y_str("}}", 2));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2459_Statements(void * a_p2460) {
struct yf2461 F;
memset((void *)&F, 0, sizeof F);
F.p2460 = a_p2460;
F.v5504 = F.p2460;
while ((!(F.v5504 == ((void *)0)))) {
yr2483_Statement(F.v5504);
F.v5504 = ((*(yR95 *)rt_nil_check(F.v5504))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2465_Cond(void * a_p2466) {
struct yf2467 F;
memset((void *)&F, 0, sizeof F);
F.p2466 = a_p2466;
yr2140_Expr(F.p2466, v1694, &F.v5508, &F.v5510);
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.p2466))).f_line, v1694, F.v5510);
{ rt_int rv5511 = F.v5508;
return rv5511; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2471_Label(void * a_p2472, void * a_p2473) {
struct yf2474 F;
memset((void *)&F, 0, sizeof F);
F.p2472 = a_p2472;
F.p2473 = a_p2473;
if (((((((*(yR95 *)rt_nil_check(F.p2472))).f_kind == v747)) && ((((*(yR95 *)rt_nil_check(F.p2472))).f_d == ((void *)0)))) && ((((*(yR100 *)rt_nil_check(F.p2473))).f_kind == v786)))) {
F.v5520 = yr1646_FindLit(((*(yR95 *)rt_nil_check(F.p2472))).f_name, F.p2473);
if ((!(F.v5520 == ((void *)0)))) {
{ rt_int rv5525 = ((*(yR115 *)rt_nil_check(yr1686_Real(F.v5520)))).f_mval;
return rv5525; }
}
}
yr2140_Expr(F.p2472, F.p2473, &F.v5524, &F.v5522);
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.p2472))).f_line, F.p2473, F.v5522);
yr2075_Manifest(F.p2472, &F.v5516, &F.v5518);
if ((!F.v5516)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2472))).f_line, y_str("a CASE label is a manifest constant (IX.B.1)", 44));
}
{ rt_int rv5527 = F.v5518;
return rv5527; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2478_CopyOut(void) {
struct yf2479 F;
memset((void *)&F, 0, sizeof F);
if ((v2413 == ((void *)0))) {
return;
}
F.v5530 = ((*(yR115 *)rt_nil_check(v2413))).f_params;
while ((!(F.v5530 == ((void *)0)))) {
if ((((*(yR110 *)rt_nil_check(F.v5530))).f_cls == v870)) {
yr986_SB();
yr997_SA(y_str("(*F.", 4));
yr1004_ST(((*(yR110 *)rt_nil_check(F.v5530))).f_cname);
yr997_SA(y_str("_o)", 3));
F.v5532 = yr1016_SE();
yr2091_Store(F.v5532, ((*(yR110 *)rt_nil_check(F.v5530))).f_rep, yr1660_Path(v1576, ((*(yR110 *)rt_nil_check(F.v5530))).f_cname), ((*(yR110 *)rt_nil_check(F.v5530))).f_rep, INT64_C(0));
}
F.v5530 = ((*(yR110 *)rt_nil_check(F.v5530))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2483_Statement(void * a_p2484) {
struct yf2485 F;
memset((void *)&F, 0, sizeof F);
F.p2484 = a_p2484;
F.v5539 = ((*(yR95 *)rt_nil_check(F.p2484))).f_kind;
v960 = ((*(yR95 *)rt_nil_check(F.p2484))).f_line;
if ((!(((*(yR95 *)rt_nil_check(F.p2484))).f_text == INT64_C(0)))) {
yr2515_PlaceLabel(F.p2484);
}
if ((F.v5539 == v684)) {
yr2113_LValue(((*(yR95 *)rt_nil_check(F.p2484))).f_a, &F.v5541, &F.v5553);
yr2107_CheckPure(((*(yR95 *)rt_nil_check(F.p2484))).f_a);
if ((((((*(yR100 *)rt_nil_check(F.v5553))).f_kind == v807)) || yr1759_HoldsSignal(F.v5553))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2484))).f_line, y_str("assignment is not defined for signals (VI.A.1.d)", 48));
}
if ((((((*(yR100 *)rt_nil_check(F.v5553))).f_kind == v801)) || ((((*(yR100 *)rt_nil_check(F.v5553))).f_kind == v810)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2484))).f_line, y_str("assignment is not defined for files and semaphores (VII.B)", 58));
}
if ((((*(yR100 *)rt_nil_check(F.v5553))).f_opaque && (((rt_mod(((*(yR100 *)rt_nil_check(F.v5553))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2484))).f_line, ((*(yR100 *)rt_nil_check(F.v5553))).f_tname, y_str(" is opaque here: := is not exported (X.B.3)", 43));
}
yr2140_Expr(((*(yR95 *)rt_nil_check(F.p2484))).f_b, F.v5553, &F.v5543, &F.v5555);
yr2091_Store(F.v5541, F.v5553, F.v5543, F.v5555, ((*(yR95 *)rt_nil_check(F.p2484))).f_line);
} else if ((F.v5539 == v687)) {
F.v5569 = yr1621_Find(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2484))).f_a))).f_name);
if ((!(F.v5569 == ((void *)0)))) {
F.v5569 = yr1686_Real(F.v5569);
}
if ((((!(F.v5569 == ((void *)0)))) && ((((*(yR115 *)rt_nil_check(F.v5569))).f_kind == v855)))) {
yr2692_Activate(((*(yR95 *)rt_nil_check(F.p2484))).f_a, F.v5569);
} else {
yr2312_CallExpr(((*(yR95 *)rt_nil_check(F.p2484))).f_a, ((void *)0), 1, &F.v5541, &F.v5553);
yr2418_Emit2(y_str("", 0), F.v5541);
yr986_SB();
yr1004_ST(F.v5541);
yr997_SA(y_str(";", 1));
F.v5545 = yr1016_SE();
((*(yR125 *)rt_nil_check((v956).f_tail))).f_t = F.v5545;
}
} else if ((F.v5539 == v708)) {
F.v5561 = 1;
F.v5557 = ((*(yR95 *)rt_nil_check(F.p2484))).f_a;
while ((!(F.v5557 == ((void *)0)))) {
F.v5541 = yr2465_Cond(((*(yR95 *)rt_nil_check(F.v5557))).f_a);
if (F.v5561) {
yr2426_Emit3(y_str("if (", 4), F.v5541, y_str(") {", 3));
} else {
yr2426_Emit3(y_str("} else if (", 11), F.v5541, y_str(") {", 3));
}
F.v5561 = 0;
yr2459_Statements(((*(yR95 *)rt_nil_check(F.v5557))).f_b);
F.v5557 = ((*(yR95 *)rt_nil_check(F.v5557))).f_next;
}
if ((((*(yR95 *)rt_nil_check(F.p2484))).f_flag == INT64_C(1))) {
yr1098_EmitS(y_str("} else {", 8));
yr2459_Statements(((*(yR95 *)rt_nil_check(F.p2484))).f_b);
}
yr1098_EmitS(y_str("}", 1));
} else if ((F.v5539 == v714)) {
F.v5541 = yr2465_Cond(((*(yR95 *)rt_nil_check(F.p2484))).f_a);
yr2426_Emit3(y_str("while (", 7), F.v5541, y_str(") {", 3));
yr2459_Statements(((*(yR95 *)rt_nil_check(F.p2484))).f_b);
yr1098_EmitS(y_str("}", 1));
} else if ((F.v5539 == v720)) {
F.v5547 = yr1146_Fresh(y_str("yl_", 3));
v2407 = rt_range(rt_add(v2407, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2394).p)[y_ix1(v2394, v2407)] = ((*(yR95 *)rt_nil_check(F.p2484))).f_name;
((rt_int *)(v2396).p)[y_ix1(v2396, v2407)] = F.v5547;
((rt_int *)(v2405).p)[y_ix1(v2405, v2407)] = v2348;
yr1098_EmitS(y_str("for (;;) {", 10));
yr2459_Statements(((*(yR95 *)rt_nil_check(F.p2484))).f_b);
yr1098_EmitS(y_str("}", 1));
yr2426_Emit3(y_str("", 0), F.v5547, y_str(": ;", 3));
v2407 = rt_range(rt_sub(v2407, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v5539 == v696)) {
F.v5563 = 0;
F.v5565 = v2407;
while ((((F.v5565 > v2410)) && (!F.v5563))) {
if ((((rt_int *)(v2394).p)[y_ix1(v2394, F.v5565)] == ((*(yR95 *)rt_nil_check(F.p2484))).f_name)) {
F.v5563 = 1;
yr2436_PopTo(((rt_int *)(v2405).p)[y_ix1(v2405, F.v5565)]);
yr2426_Emit3(y_str("goto ", 5), ((rt_int *)(v2396).p)[y_ix1(v2396, F.v5565)], y_str(";", 1));
}
F.v5565 = rt_range(rt_sub(F.v5565, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((!F.v5563)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2484))).f_line, ((*(yR95 *)rt_nil_check(F.p2484))).f_name, y_str(": EXIT names no LOOP around it here (IX.A.5)", 44));
}
} else if ((F.v5539 == v717)) {
yr2489_ForStatement(F.p2484);
} else if ((F.v5539 == v711)) {
yr2140_Expr(((*(yR95 *)rt_nil_check(F.p2484))).f_a, ((void *)0), &F.v5541, &F.v5553);
if ((!yr1729_IsDiscrete(F.v5553))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2484))).f_line, y_str("SELECT on a value that is not integer or scalar", 47));
}
yr2426_Emit3(y_str("switch (", 8), F.v5541, y_str(") {", 3));
F.v5557 = ((*(yR95 *)rt_nil_check(F.p2484))).f_b;
while ((!(F.v5557 == ((void *)0)))) {
F.v5559 = ((*(yR95 *)rt_nil_check(F.v5557))).f_a;
while ((!(F.v5559 == ((void *)0)))) {
F.v5567 = yr2471_Label(F.v5559, F.v5553);
yr986_SB();
yr997_SA(y_str("case ", 5));
yr1010_SI(F.v5567);
yr997_SA(y_str(":", 1));
F.v5545 = yr1016_SE();
yr1092_Emit(F.v5545);
F.v5559 = ((*(yR95 *)rt_nil_check(F.v5559))).f_next;
}
yr1098_EmitS(y_str("{", 1));
yr2459_Statements(((*(yR95 *)rt_nil_check(F.v5557))).f_b);
yr1098_EmitS(y_str("} break;", 8));
F.v5557 = ((*(yR95 *)rt_nil_check(F.v5557))).f_next;
}
yr1098_EmitS(y_str("default: {", 10));
if ((((*(yR95 *)rt_nil_check(F.p2484))).f_flag == INT64_C(1))) {
yr2459_Statements(((*(yR95 *)rt_nil_check(F.p2484))).f_c);
}
yr1098_EmitS(y_str("} break;", 8));
yr1098_EmitS(y_str("}", 1));
} else if ((F.v5539 == v699)) {
yr2503_ReturnStatement(F.p2484);
} else if ((F.v5539 == v705)) {
if ((((*(yR95 *)rt_nil_check(F.p2484))).f_name == INT64_C(0))) {
if ((v2384 == INT64_C(0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2484))).f_line, y_str("PROPAGATE_EXCEPTION without a name is used in a handler (IX.A.8)", 64));
}
yr2426_Emit3(y_str("rt_raise(", 9), ((rt_int *)(v2382).p)[y_ix1(v2382, v2384)], y_str(");", 2));
} else {
yr2442_LeaveBlock();
yr1092_Emit(yr2447_RaiseCode(((*(yR95 *)rt_nil_check(F.p2484))).f_name));
}
} else if ((F.v5539 == v690)) {
F.v5541 = yr2465_Cond(((*(yR95 *)rt_nil_check(F.p2484))).f_a);
yr2426_Emit3(y_str("if (!(", 6), F.v5541, y_str(")) {", 4));
yr2442_LeaveBlock();
yr1098_EmitS(y_str("rt_raise(RT_X_ASSERT); }", 24));
} else if ((F.v5539 == v723)) {
yr2509_BeginStatement(F.p2484);
} else if ((F.v5539 == v702)) {
yr2716_TerminateStatement(F.p2484);
} else if ((F.v5539 == v693)) {
yr2521_GotoStatement(F.p2484);
} else {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2484))).f_line, y_str("not a statement", 15));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2489_ForStatement(void * a_p2490) {
struct yf2491 F;
memset((void *)&F, 0, sizeof F);
F.p2490 = a_p2490;
F.v5631 = yr1866_MakeRep(((*(yR95 *)rt_nil_check(F.p2490))).f_a, INT64_C(0), 0);
if ((!yr1729_IsDiscrete(F.v5631))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2490))).f_line, y_str("FOR goes over an integer or scalar representation", 49));
}
yr1806_CheckRepresented(F.v5631, ((*(yR95 *)rt_nil_check(F.p2490))).f_line);
yr1604_OpenScope(0);
F.v5639 = yr1597_NewSym(v834, ((*(yR95 *)rt_nil_check(F.p2490))).f_name);
((*(yR115 *)rt_nil_check(F.v5639))).f_rep = F.v5631;
((*(yR115 *)rt_nil_check(F.v5639))).f_level = v1576;
((*(yR115 *)rt_nil_check(F.v5639))).f_cname = yr1146_Fresh(y_str("c_", 2));
yr1673_DeclStorage(yr1021_T(y_str("rt_int", 6)), ((*(yR115 *)rt_nil_check(F.v5639))).f_cname);
yr1653_Define(F.v5639, ((*(yR95 *)rt_nil_check(F.p2490))).f_line);
F.v5633 = yr1146_Fresh(y_str("i", 1));
F.v5635 = yr1146_Fresh(y_str("hi", 2));
yr986_SB();
yr997_SA(y_str("{ rt_int ", 9));
yr1004_ST(F.v5635);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr1833_HiText(F.v5631));
yr997_SA(y_str(";", 1));
F.v5637 = yr1016_SE();
yr1092_Emit(F.v5637);
yr986_SB();
yr997_SA(y_str("for (rt_int ", 12));
yr1004_ST(F.v5633);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr1827_LoText(F.v5631));
yr997_SA(y_str("; ", 2));
yr1004_ST(F.v5633);
yr997_SA(y_str(" <= ", 4));
yr1004_ST(F.v5635);
yr997_SA(y_str("; ", 2));
yr1004_ST(F.v5633);
yr997_SA(y_str("++) { ", 6));
yr1004_ST(yr1680_SymPath(F.v5639));
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.v5633);
yr997_SA(y_str(";", 1));
F.v5637 = yr1016_SE();
yr1092_Emit(F.v5637);
yr2459_Statements(((*(yR95 *)rt_nil_check(F.p2490))).f_b);
yr2426_Emit3(y_str("if (", 4), F.v5633, y_str(" == ", 4));
((*(yR125 *)rt_nil_check((v956).f_tail))).f_t = yr2495_Join(((*(yR125 *)rt_nil_check((v956).f_tail))).f_t, F.v5635, yr1021_T(y_str(") break;", 8)));
yr1098_EmitS(y_str("}}", 2));
yr1610_CloseScope();
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2495_Join(rt_int a_p2496, rt_int a_p2497, rt_int a_p2498) {
struct yf2499 F;
memset((void *)&F, 0, sizeof F);
F.p2496 = a_p2496;
F.p2497 = a_p2497;
F.p2498 = a_p2498;
yr986_SB();
yr1004_ST(F.p2496);
yr1004_ST(F.p2497);
yr1004_ST(F.p2498);
{ rt_int rv5667 = yr1016_SE();
return rv5667; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2503_ReturnStatement(void * a_p2504) {
struct yf2505 F;
memset((void *)&F, 0, sizeof F);
F.p2504 = a_p2504;
if ((v2413 == ((void *)0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2504))).f_line, y_str("RETURN outside a routine (IX.A.6)", 33));
}
if ((((*(yR115 *)rt_nil_check(v2413))).f_kind == v855)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2504))).f_line, y_str("a process ends with TERMINATE_PROCESS (IX.A.7)", 46));
}
F.v5679 = ((*(yR115 *)rt_nil_check(v2413))).f_ret;
if ((((*(yR95 *)rt_nil_check(F.p2504))).f_a == ((void *)0))) {
if ((!(((*(yR100 *)rt_nil_check(F.v5679))).f_kind == v822))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2504))).f_line, y_str("RETURN needs a value here (IX.A.6)", 34));
}
yr2478_CopyOut();
yr2711_LeaveMonitor();
yr2436_PopTo(v2351);
yr1098_EmitS(y_str("return;", 7));
return;
}
if ((((*(yR100 *)rt_nil_check(F.v5679))).f_kind == v822)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2504))).f_line, y_str("this routine returns no value (IX.A.6)", 38));
}
yr2140_Expr(((*(yR95 *)rt_nil_check(F.p2504))).f_a, F.v5679, &F.v5671, &F.v5677);
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.p2504))).f_line, F.v5679, F.v5677);
F.v5675 = yr1146_Fresh(y_str("rv", 2));
yr986_SB();
yr997_SA(y_str("{ ", 2));
yr1004_ST(yr1765_CType(F.v5679));
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v5675);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2083_Convert(F.v5671, F.v5679, F.v5677));
yr997_SA(y_str(";", 1));
F.v5673 = yr1016_SE();
yr1092_Emit(F.v5673);
yr2478_CopyOut();
yr2711_LeaveMonitor();
yr2436_PopTo(v2351);
yr2426_Emit3(y_str("return ", 7), F.v5675, y_str("; }", 3));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2509_BeginStatement(void * a_p2510) {
struct yf2511 F;
memset((void *)&F, 0, sizeof F);
F.p2510 = a_p2510;
yr1098_EmitS(y_str("{", 1));
yr1604_OpenScope(0);
yr2599_Declarations(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2510))).f_a))).f_a);
yr2453_BlockStatements(((*(yR95 *)rt_nil_check(F.p2510))).f_a);
yr2687_AwaitProcesses();
yr1610_CloseScope();
yr1098_EmitS(y_str("}", 1));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2515_PlaceLabel(void * a_p2516) {
struct yf2517 F;
memset((void *)&F, 0, sizeof F);
F.p2516 = a_p2516;
F.v5700 = yr1627_FindHere(((*(yR95 *)rt_nil_check(F.p2516))).f_text);
if ((((F.v5700 == ((void *)0))) || ((!(((*(yR115 *)rt_nil_check(F.v5700))).f_kind == v858))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2516))).f_line, ((*(yR95 *)rt_nil_check(F.p2516))).f_text, y_str(" labels a statement but is not declared by LABEL in this block (VII.C)", 70));
}
if (((*(yR115 *)rt_nil_check(F.v5700))).f_hasmv) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2516))).f_line, ((*(yR95 *)rt_nil_check(F.p2516))).f_text, y_str(" labels two statements", 22));
}
((*(yR115 *)rt_nil_check(F.v5700))).f_hasmv = 1;
yr2426_Emit3(y_str("", 0), ((*(yR115 *)rt_nil_check(F.v5700))).f_cname, y_str(": ;", 3));
if ((!(((rt_int *)(v2361).p)[y_ix1(v2361, v2372)] == INT64_C(0)))) {
yr2426_Emit3(y_str("rt_xtop = &", 11), ((rt_int *)(v2361).p)[y_ix1(v2361, v2372)], y_str(";", 1));
} else if ((!(((rt_int *)(v2370).p)[y_ix1(v2370, v2372)] == INT64_C(0)))) {
yr2426_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v2370).p)[y_ix1(v2370, v2372)], y_str(";", 1));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2521_GotoStatement(void * a_p2522) {
struct yf2523 F;
memset((void *)&F, 0, sizeof F);
F.p2522 = a_p2522;
F.v5715 = yr1633_Lookup(((*(yR95 *)rt_nil_check(F.p2522))).f_name, ((*(yR95 *)rt_nil_check(F.p2522))).f_line);
if ((!(((*(yR115 *)rt_nil_check(F.v5715))).f_kind == v858))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2522))).f_line, ((*(yR95 *)rt_nil_check(F.p2522))).f_name, y_str(" is not a label", 15));
}
if ((!(((*(yR115 *)rt_nil_check(F.v5715))).f_level == v1576))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2522))).f_line, ((*(yR95 *)rt_nil_check(F.p2522))).f_name, y_str(": GOTO does not leave a routine or process (IX.A.4)", 51));
}
((*(yR115 *)rt_nil_check(F.v5715))).f_readonly = 1;
yr2426_Emit3(y_str("goto ", 5), ((*(yR115 *)rt_nil_check(F.v5715))).f_cname, y_str(";", 1));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2527_CheckLabels(void * a_p2528) {
struct yf2529 F;
memset((void *)&F, 0, sizeof F);
F.p2528 = a_p2528;
F.v5724 = F.p2528;
while ((!(F.v5724 == ((void *)0)))) {
if ((((*(yR95 *)rt_nil_check(F.v5724))).f_kind == v615)) {
F.v5726 = ((*(yR95 *)rt_nil_check(F.v5724))).f_a;
while ((!(F.v5726 == ((void *)0)))) {
F.v5728 = yr1627_FindHere(((*(yR95 *)rt_nil_check(F.v5726))).f_name);
if ((((((!(F.v5728 == ((void *)0)))) && ((((*(yR115 *)rt_nil_check(F.v5728))).f_kind == v858))) && ((*(yR115 *)rt_nil_check(F.v5728))).f_readonly) && (!((*(yR115 *)rt_nil_check(F.v5728))).f_hasmv))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.v5726))).f_line, ((*(yR95 *)rt_nil_check(F.v5726))).f_name, y_str(" is the target of a GOTO but labels no statement of its block", 61));
}
F.v5726 = ((*(yR95 *)rt_nil_check(F.v5726))).f_next;
}
}
F.v5724 = ((*(yR95 *)rt_nil_check(F.v5724))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2533_RoutineCName(rt_int a_p2534) {
struct yf2535 F;
memset((void *)&F, 0, sizeof F);
F.p2534 = a_p2534;
F.v5733 = yr1141_NewSerial();
F.v5735 = 1;
F.lo5739 = INT64_C(1);
F.hi5740 = ((rt_int *)(v890).p)[y_ix1(v890, F.p2534)];
{ rt_int hi5744 = F.hi5740;
for (rt_int i5743 = F.lo5739; i5743 <= hi5744; i5743++) { F.c_5742 = i5743;
if ((!((yr968_IsLetter(yr1063_TChar(F.p2534, rt_range(F.c_5742, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || yr974_IsDigit(yr1063_TChar(F.p2534, rt_range(F.c_5742, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))))) {
F.v5735 = 0;
}
if (i5743 == hi5744) break;
}}
yr986_SB();
yr997_SA(y_str("yr", 2));
yr1010_SI(F.v5733);
if (F.v5735) {
yr997_SA(y_str("_", 1));
yr1004_ST(F.p2534);
}
{ rt_int rv5748 = yr1016_SE();
return rv5748; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2539_FormalRep(void * a_p2540) {
struct yf2541 F;
memset((void *)&F, 0, sizeof F);
F.p2540 = a_p2540;
if ((((*(yR95 *)rt_nil_check(F.p2540))).f_kind == v666)) {
yr2075_Manifest(((*(yR95 *)rt_nil_check(F.p2540))).f_a, &F.v5754, &F.v5756);
if ((((!F.v5754) || ((F.v5756 < INT64_C(1)))) || ((F.v5756 > INT64_C(4))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2540))).f_line, y_str("DIMENSIONS is a manifest constant from 1 to 4", 45));
}
F.v5752 = yr1716_NewRep(v813, yr1021_T(y_str("length-unresolved array", 23)));
((*(yR100 *)rt_nil_check(F.v5752))).f_nidx = F.v5756;
((*(yR100 *)rt_nil_check(F.v5752))).f_elem = yr1866_MakeRep(((*(yR95 *)rt_nil_check(F.p2540))).f_b, INT64_C(0), 0);
yr1806_CheckRepresented(((*(yR100 *)rt_nil_check(F.v5752))).f_elem, ((*(yR95 *)rt_nil_check(F.p2540))).f_line);
((*(yR100 *)rt_nil_check(F.v5752))).f_deep = 1;
{ void * rv5764 = F.v5752;
return rv5764; }
}
if ((((*(yR95 *)rt_nil_check(F.p2540))).f_kind == v669)) {
{ void * rv5766 = yr1716_NewRep(v825, yr1021_T(y_str("SPACE", 5)));
return rv5766; }
}
F.v5752 = yr1866_MakeRep(F.p2540, INT64_C(0), 0);
yr1806_CheckRepresented(F.v5752, ((*(yR95 *)rt_nil_check(F.p2540))).f_line);
{ void * rv5769 = F.v5752;
return rv5769; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2545_ParamCType(void * a_p2546) {
struct yf2547 F;
memset((void *)&F, 0, sizeof F);
F.p2546 = a_p2546;
F.v5773 = yr1765_CType(((*(yR110 *)rt_nil_check(F.p2546))).f_rep);
if ((((*(yR110 *)rt_nil_check(F.p2546))).f_cls == v867)) {
{ rt_int rv5774 = F.v5773;
return rv5774; }
}
yr986_SB();
yr1004_ST(F.v5773);
yr997_SA(y_str(" *", 2));
{ rt_int rv5776 = yr1016_SE();
return rv5776; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2551_RoutineHeader(void * a_p2552, rt_int a_p2553) {
struct yf2554 F;
memset((void *)&F, 0, sizeof F);
F.p2552 = a_p2552;
F.p2553 = a_p2553;
F.v5797 = 1;
F.v5781 = yr1597_NewSym(F.p2553, ((*(yR95 *)rt_nil_check(F.p2552))).f_name);
((*(yR115 *)rt_nil_check(F.v5781))).f_decl = F.p2552;
((*(yR115 *)rt_nil_check(F.v5781))).f_func = (((*(yR95 *)rt_nil_check(F.p2552))).f_flag == INT64_C(1));
((*(yR115 *)rt_nil_check(F.v5781))).f_level = rt_range(rt_add(v1576, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR115 *)rt_nil_check(F.v5781))).f_cname = yr2533_RoutineCName(((*(yR95 *)rt_nil_check(F.p2552))).f_name);
if ((!(((*(yR95 *)rt_nil_check(F.p2552))).f_b == ((void *)0)))) {
((*(yR115 *)rt_nil_check(F.v5781))).f_ret = yr1866_MakeRep(((*(yR95 *)rt_nil_check(F.p2552))).f_b, INT64_C(0), 0);
yr1806_CheckRepresented(((*(yR115 *)rt_nil_check(F.v5781))).f_ret, ((*(yR95 *)rt_nil_check(F.p2552))).f_line);
} else {
((*(yR115 *)rt_nil_check(F.v5781))).f_ret = v1698;
if (((*(yR115 *)rt_nil_check(F.v5781))).f_func) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2552))).f_line, ((*(yR95 *)rt_nil_check(F.p2552))).f_name, y_str(": a FUNCTION has a RETURNS clause (X.A)", 39));
}
}
F.v5791 = ((void *)0);
F.v5785 = ((*(yR95 *)rt_nil_check(F.p2552))).f_a;
while ((!(F.v5785 == ((void *)0)))) {
F.v5793 = yr2539_FormalRep(((*(yR95 *)rt_nil_check(F.v5785))).f_b);
if ((((*(yR115 *)rt_nil_check(F.v5781))).f_func && ((!(((*(yR95 *)rt_nil_check(F.v5785))).f_ival == v867))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.v5785))).f_line, ((*(yR95 *)rt_nil_check(F.p2552))).f_name, y_str(": the parameters of a FUNCTION are CONST (X.A.2)", 48));
}
if ((((F.p2553 == v855)) && ((((*(yR95 *)rt_nil_check(F.v5785))).f_ival == v870)))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.v5785))).f_line, ((*(yR95 *)rt_nil_check(F.p2552))).f_name, y_str(": a process has no OUT parameters", 33));
}
F.v5787 = ((*(yR95 *)rt_nil_check(F.v5785))).f_a;
while ((!(F.v5787 == ((void *)0)))) {
({ F.v5789 = rt_alloc(sizeof(yR110)); });
(*(yR110 *)rt_nil_check(F.v5789)) = ((yR110){ .f_name = ((*(yR95 *)rt_nil_check(F.v5787))).f_name, .f_cls = ((*(yR95 *)rt_nil_check(F.v5785))).f_ival, .f_rep = F.v5793, .f_cname = yr1146_Fresh(y_str("p", 1)), .f_next = ((void *)0) });
if ((F.v5791 == ((void *)0))) {
((*(yR115 *)rt_nil_check(F.v5781))).f_params = F.v5789;
} else {
((*(yR110 *)rt_nil_check(F.v5791))).f_next = F.v5789;
}
F.v5791 = F.v5789;
((*(yR115 *)rt_nil_check(F.v5781))).f_nparams = rt_range(rt_add(((*(yR115 *)rt_nil_check(F.v5781))).f_nparams, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5787 = ((*(yR95 *)rt_nil_check(F.v5787))).f_next;
}
F.v5785 = ((*(yR95 *)rt_nil_check(F.v5785))).f_next;
}
F.v5783 = yr1621_Find(((*(yR95 *)rt_nil_check(F.p2552))).f_name);
if ((!(F.v5783 == ((void *)0)))) {
F.v5783 = yr1686_Real(F.v5783);
}
if (((((!(((*(yR95 *)rt_nil_check(F.p2552))).f_ival == INT64_C(0)))) && ((!(F.v5783 == ((void *)0))))) && ((((*(yR115 *)rt_nil_check(F.v5783))).f_kind == v846)))) {
((*(yR115 *)rt_nil_check(F.v5781))).f_alt = F.v5783;
if ((((((*(yR95 *)rt_nil_check(F.p2552))).f_ival == v309)) && ((!(yr2558_SameSignature(F.v5781, F.v5783) == ((void *)0)))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2552))).f_line, ((*(yR95 *)rt_nil_check(F.p2552))).f_name, y_str(" EXTENDS a definition for the same parameter types: use REPLACES", 64));
}
if ((((((*(yR95 *)rt_nil_check(F.p2552))).f_ival == v405)) && ((yr2558_SameSignature(F.v5781, F.v5783) == ((void *)0))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2552))).f_line, ((*(yR95 *)rt_nil_check(F.p2552))).f_name, y_str(" REPLACES no definition for these parameter types", 49));
}
}
((*(yR95 *)rt_nil_check(F.p2552))).f_sym = F.v5781;
yr1653_Define(F.v5781, ((*(yR95 *)rt_nil_check(F.p2552))).f_line);
((rt_int *)(v1586).p)[y_ix1(v1586, ((*(yR115 *)rt_nil_check(F.v5781))).f_level)] = yr1146_Fresh(y_str("yf", 2));
((*(yR115 *)rt_nil_check(F.v5781))).f_members = yr1597_NewSym(v861, ((rt_int *)(v1586).p)[y_ix1(v1586, ((*(yR115 *)rt_nil_check(F.v5781))).f_level)]);
yr986_SB();
yr997_SA(y_str("struct ", 7));
yr1004_ST(((rt_int *)(v1586).p)[y_ix1(v1586, ((*(yR115 *)rt_nil_check(F.v5781))).f_level)]);
yr997_SA(y_str(";", 1));
F.v5795 = yr1016_SE();
yr1070_Put(&v942, F.v5795);
yr986_SB();
yr997_SA(y_str("static ", 7));
if ((F.p2553 == v855)) {
yr997_SA(y_str("void", 4));
} else {
yr1004_ST(yr1765_CType(((*(yR115 *)rt_nil_check(F.v5781))).f_ret));
}
yr997_SA(y_str(" ", 1));
yr1004_ST(((*(yR115 *)rt_nil_check(F.v5781))).f_cname);
yr997_SA(y_str("(", 1));
F.v5795 = yr1016_SE();
if ((F.p2553 == v855)) {
F.v5795 = yr2495_Join(F.v5795, yr1021_T(y_str("void *arg", 9)), INT64_C(0));
F.v5797 = 0;
} else if ((v1576 > INT64_C(0))) {
yr986_SB();
yr1004_ST(F.v5795);
yr997_SA(y_str("struct ", 7));
yr1004_ST(((rt_int *)(v1586).p)[y_ix1(v1586, v1576)]);
yr997_SA(y_str(" *up", 4));
F.v5795 = yr1016_SE();
F.v5797 = 0;
}
F.v5789 = ((*(yR115 *)rt_nil_check(F.v5781))).f_params;
while ((((!(F.v5789 == ((void *)0)))) && ((!(F.p2553 == v855))))) {
yr986_SB();
yr1004_ST(F.v5795);
if ((!F.v5797)) {
yr997_SA(y_str(", ", 2));
}
F.v5797 = 0;
yr1004_ST(yr2545_ParamCType(F.v5789));
yr997_SA(y_str(" a_", 3));
yr1004_ST(((*(yR110 *)rt_nil_check(F.v5789))).f_cname);
F.v5795 = yr1016_SE();
F.v5789 = ((*(yR110 *)rt_nil_check(F.v5789))).f_next;
}
if (F.v5797) {
F.v5795 = yr2495_Join(F.v5795, yr1021_T(y_str("void", 4)), INT64_C(0));
}
F.v5795 = yr2495_Join(F.v5795, yr1021_T(y_str(")", 1)), INT64_C(0));
((*(yR115 *)rt_nil_check(F.v5781))).f_mnext = yr1597_NewSym(v861, F.v5795);
yr1070_Put(&v950, yr2495_Join(F.v5795, yr1021_T(y_str(";", 1)), INT64_C(0)));
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2558_SameSignature(void * a_p2559, void * a_p2560) {
struct yf2561 F;
memset((void *)&F, 0, sizeof F);
F.p2559 = a_p2559;
F.p2560 = a_p2560;
F.v5840 = F.p2560;
while ((!(F.v5840 == ((void *)0)))) {
if ((((*(yR115 *)rt_nil_check(F.v5840))).f_nparams == ((*(yR115 *)rt_nil_check(F.p2559))).f_nparams)) {
F.v5846 = 1;
F.v5842 = ((*(yR115 *)rt_nil_check(F.p2559))).f_params;
F.v5844 = ((*(yR115 *)rt_nil_check(F.v5840))).f_params;
while ((!(F.v5842 == ((void *)0)))) {
if ((!yr1783_SameType(((*(yR110 *)rt_nil_check(F.v5842))).f_rep, ((*(yR110 *)rt_nil_check(F.v5844))).f_rep))) {
F.v5846 = 0;
}
F.v5842 = ((*(yR110 *)rt_nil_check(F.v5842))).f_next;
F.v5844 = ((*(yR110 *)rt_nil_check(F.v5844))).f_next;
}
if (F.v5846) {
{ void * rv5849 = F.v5840;
return rv5849; }
}
}
F.v5840 = ((*(yR115 *)rt_nil_check(F.v5840))).f_alt;
}
{ void * rv5850 = ((void *)0);
return rv5850; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2565_RoutineBody(void * a_p2566) {
struct yf2567 F;
memset((void *)&F, 0, sizeof F);
F.p2566 = a_p2566;
F.v5854 = ((*(yR95 *)rt_nil_check(F.p2566))).f_sym;
F.v5856 = v956;
F.v5858 = v958;
F.v5860 = v1576;
F.v5862 = v2348;
F.v5864 = v2351;
F.v5866 = v2372;
F.v5868 = v2384;
F.v5870 = v2407;
F.v5872 = v2410;
F.v5874 = v2413;
F.v5876 = v2415;
v956 = ((yR130){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v958 = ((yR130){ .f_head = ((void *)0), .f_tail = ((void *)0) });
F.v5886 = ((yR130){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v1576 = ((*(yR115 *)rt_nil_check(F.v5854))).f_level;
F.v5882 = ((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5854))).f_members))).f_name;
((rt_int *)(v1586).p)[y_ix1(v1586, v1576)] = F.v5882;
v2351 = v2348;
v2410 = v2407;
v2384 = INT64_C(0);
v2413 = F.v5854;
v2415 = 0;
yr1604_OpenScope(0);
F.v5878 = ((*(yR115 *)rt_nil_check(F.v5854))).f_params;
while ((!(F.v5878 == ((void *)0)))) {
if ((((*(yR110 *)rt_nil_check(F.v5878))).f_cls == v867)) {
F.v5880 = yr1597_NewSym(v834, ((*(yR110 *)rt_nil_check(F.v5878))).f_name);
} else {
F.v5880 = yr1597_NewSym(v831, ((*(yR110 *)rt_nil_check(F.v5878))).f_name);
}
((*(yR115 *)rt_nil_check(F.v5880))).f_rep = ((*(yR110 *)rt_nil_check(F.v5878))).f_rep;
((*(yR115 *)rt_nil_check(F.v5880))).f_level = v1576;
((*(yR115 *)rt_nil_check(F.v5880))).f_cname = ((*(yR110 *)rt_nil_check(F.v5878))).f_cname;
if ((((*(yR115 *)rt_nil_check(F.v5854))).f_kind == v855)) {
((*(yR115 *)rt_nil_check(F.v5880))).f_byref = (((*(yR110 *)rt_nil_check(F.v5878))).f_cls == v873);
yr1673_DeclStorage(yr2545_ParamCType(F.v5878), ((*(yR110 *)rt_nil_check(F.v5878))).f_cname);
} else if ((((*(yR110 *)rt_nil_check(F.v5878))).f_cls == v873)) {
((*(yR115 *)rt_nil_check(F.v5880))).f_byref = 1;
yr1673_DeclStorage(yr2545_ParamCType(F.v5878), ((*(yR110 *)rt_nil_check(F.v5878))).f_cname);
yr1092_Emit(yr2495_Join(yr1021_T(y_str("F.", 2)), ((*(yR110 *)rt_nil_check(F.v5878))).f_cname, yr2495_Join(yr1021_T(y_str(" = a_", 5)), ((*(yR110 *)rt_nil_check(F.v5878))).f_cname, yr1021_T(y_str(";", 1)))));
} else if ((((*(yR110 *)rt_nil_check(F.v5878))).f_cls == v870)) {
yr1673_DeclStorage(yr1765_CType(((*(yR110 *)rt_nil_check(F.v5878))).f_rep), ((*(yR110 *)rt_nil_check(F.v5878))).f_cname);
yr1673_DeclStorage(yr2545_ParamCType(F.v5878), yr2495_Join(((*(yR110 *)rt_nil_check(F.v5878))).f_cname, yr1021_T(y_str("_o", 2)), INT64_C(0)));
yr1092_Emit(yr2495_Join(yr1021_T(y_str("F.", 2)), ((*(yR110 *)rt_nil_check(F.v5878))).f_cname, yr2495_Join(yr1021_T(y_str("_o = a_", 7)), ((*(yR110 *)rt_nil_check(F.v5878))).f_cname, yr1021_T(y_str(";", 1)))));
if ((yr1753_Deep(((*(yR110 *)rt_nil_check(F.v5878))).f_rep) && ((!(((*(yR100 *)rt_nil_check(((*(yR110 *)rt_nil_check(F.v5878))).f_rep))).f_kind == v813))))) {
yr1092_Emit(yr2495_Join(yr1021_T(y_str("y_init(", 7)), yr1771_DescOf(((*(yR110 *)rt_nil_check(F.v5878))).f_rep), yr2495_Join(yr1021_T(y_str(", &F.", 5)), ((*(yR110 *)rt_nil_check(F.v5878))).f_cname, yr1021_T(y_str(");", 2)))));
}
if ((((*(yR100 *)rt_nil_check(((*(yR110 *)rt_nil_check(F.v5878))).f_rep))).f_kind == v813)) {
yr1092_Emit(yr2495_Join(yr1021_T(y_str("F.", 2)), ((*(yR110 *)rt_nil_check(F.v5878))).f_cname, yr2495_Join(yr1021_T(y_str(" = *a_", 6)), ((*(yR110 *)rt_nil_check(F.v5878))).f_cname, yr1021_T(y_str(";", 1)))));
}
} else {
yr1673_DeclStorage(yr1765_CType(((*(yR110 *)rt_nil_check(F.v5878))).f_rep), ((*(yR110 *)rt_nil_check(F.v5878))).f_cname);
yr1092_Emit(yr2495_Join(yr1021_T(y_str("F.", 2)), ((*(yR110 *)rt_nil_check(F.v5878))).f_cname, yr2495_Join(yr1021_T(y_str(" = a_", 5)), ((*(yR110 *)rt_nil_check(F.v5878))).f_cname, yr1021_T(y_str(";", 1)))));
}
yr1653_Define(F.v5880, ((*(yR95 *)rt_nil_check(F.p2566))).f_line);
F.v5878 = ((*(yR110 *)rt_nil_check(F.v5878))).f_next;
}
yr2705_EnterMonitor(F.v5854);
yr2599_Declarations(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2566))).f_c))).f_a);
yr2453_BlockStatements(((*(yR95 *)rt_nil_check(F.p2566))).f_c);
if ((((*(yR115 *)rt_nil_check(F.v5854))).f_kind == v855)) {
yr1098_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
} else {
yr1098_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
}
yr2687_AwaitProcesses();
yr1610_CloseScope();
yr986_SB();
yr997_SA(y_str("struct ", 7));
yr1004_ST(F.v5882);
yr997_SA(y_str(" {", 2));
if ((v1576 > INT64_C(1))) {
yr997_SA(y_str(" struct ", 8));
yr1004_ST(((rt_int *)(v1586).p)[y_ix1(v1586, rt_sub(v1576, INT64_C(1)))]);
yr997_SA(y_str(" *up;", 5));
} else {
yr997_SA(y_str(" void *up;", 10));
}
F.v5884 = yr1016_SE();
yr1070_Put(&v946, F.v5884);
yr1085_Append(&v946, &v958);
yr1077_PutS(&v946, y_str("};", 2));
yr1070_Put(&F.v5886, yr2495_Join(((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5854))).f_mnext))).f_name, yr1021_T(y_str(" {", 2)), INT64_C(0)));
if (v2415) {
yr1077_PutS(&F.v5886, y_str("volatile", 8));
}
yr1070_Put(&F.v5886, yr2495_Join(yr1021_T(y_str("struct ", 7)), F.v5882, yr1021_T(y_str(" F;", 3))));
yr1077_PutS(&F.v5886, y_str("memset((void *)&F, 0, sizeof F);", 32));
if ((((*(yR115 *)rt_nil_check(F.v5854))).f_kind == v855)) {
yr1070_Put(&F.v5886, yr2495_Join(yr1021_T(y_str("F = *(struct ", 13)), F.v5882, yr1021_T(y_str(" *)arg;", 7))));
} else if ((v1576 > INT64_C(1))) {
yr1077_PutS(&F.v5886, y_str("F.up = up;", 10));
}
yr1085_Append(&F.v5886, &v956);
yr1077_PutS(&F.v5886, y_str("}", 1));
yr1085_Append(&v952, &F.v5886);
v956 = F.v5856;
v958 = F.v5858;
v1576 = F.v5860;
((rt_int *)(v1586).p)[y_ix1(v1586, v1576)] = yr1146_Fresh(y_str("unused", 6));
if ((!(F.v5874 == ((void *)0)))) {
((rt_int *)(v1586).p)[y_ix1(v1586, v1576)] = ((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5874))).f_members))).f_name;
}
v2348 = F.v5862;
v2351 = F.v5864;
v2372 = F.v5866;
v2384 = F.v5868;
v2407 = F.v5870;
v2410 = F.v5872;
v2413 = F.v5874;
v2415 = F.v5876;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2571_DeclareStorage(void * a_p2572, void * a_p2573, rt_int a_p2574) {
struct yf2575 F;
memset((void *)&F, 0, sizeof F);
F.p2572 = a_p2572;
F.p2573 = a_p2573;
F.p2574 = a_p2574;
((*(yR115 *)rt_nil_check(F.p2572))).f_rep = F.p2573;
((*(yR115 *)rt_nil_check(F.p2572))).f_level = v1576;
((*(yR115 *)rt_nil_check(F.p2572))).f_cname = yr1146_Fresh(y_str("v", 1));
yr1673_DeclStorage(yr1765_CType(F.p2573), ((*(yR115 *)rt_nil_check(F.p2572))).f_cname);
if (yr1753_Deep(F.p2573)) {
yr1092_Emit(yr2495_Join(yr1021_T(y_str("y_init(", 7)), yr1771_DescOf(F.p2573), yr2495_Join(yr1021_T(y_str(", &", 3)), yr1680_SymPath(F.p2572), yr1021_T(y_str(");", 2)))));
}
if ((((*(yR100 *)rt_nil_check(F.p2573))).f_kind == v804)) {
yr1092_Emit(yr2495_Join(yr1680_SymPath(F.p2572), yr1021_T(y_str(" = y_set_new(", 13)), yr2495_Join(yr1827_LoText(((*(yR100 *)rt_nil_check(F.p2573))).f_elem), yr1021_T(y_str(", ", 2)), yr2495_Join(yr1833_HiText(((*(yR100 *)rt_nil_check(F.p2573))).f_elem), yr1021_T(y_str(");", 2)), INT64_C(0)))));
}
if ((((*(yR100 *)rt_nil_check(F.p2573))).f_kind == v807)) {
yr2722_DeclareSignal(F.p2572, F.p2574);
}
if (yr1759_HoldsSignal(F.p2573)) {
if ((!(((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p2573))).f_elem))).f_kind == v807))) {
yr1124_FailS(F.p2574, y_str("this implementation keeps signals in arrays whose components are signals", 72));
}
yr2729_DeclareSignalArray(F.p2572, F.p2574);
}
if ((((*(yR100 *)rt_nil_check(F.p2573))).f_kind == v810)) {
yr1092_Emit(yr2495_Join(yr1021_T(y_str("rt_lock_init(&", 14)), yr1680_SymPath(F.p2572), yr1021_T(y_str(");", 2))));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2579_SimpleDecl(void * a_p2580) {
struct yf2581 F;
memset((void *)&F, 0, sizeof F);
F.p2580 = a_p2580;
F.v5949 = ((*(yR95 *)rt_nil_check(F.p2580))).f_kind;
if ((((F.v5949 == v609)) || ((F.v5949 == v612)))) {
F.v5951 = yr1866_MakeRep(((*(yR95 *)rt_nil_check(F.p2580))).f_b, INT64_C(0), 0);
yr1806_CheckRepresented(F.v5951, ((*(yR95 *)rt_nil_check(F.p2580))).f_line);
if ((((F.v5949 == v609)) && (((((((*(yR100 *)rt_nil_check(F.v5951))).f_kind == v807)) || ((((*(yR100 *)rt_nil_check(F.v5951))).f_kind == v801))) || ((((*(yR100 *)rt_nil_check(F.v5951))).f_kind == v810)))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2580))).f_line, y_str("signals, files and semaphores are variables (VII.B)", 51));
}
F.v5955 = ((*(yR95 *)rt_nil_check(F.p2580))).f_a;
while ((!(F.v5955 == ((void *)0)))) {
if ((F.v5949 == v609)) {
F.v5957 = yr1597_NewSym(v834, ((*(yR95 *)rt_nil_check(F.v5955))).f_name);
} else {
F.v5957 = yr1597_NewSym(v831, ((*(yR95 *)rt_nil_check(F.v5955))).f_name);
}
yr2571_DeclareStorage(F.v5957, F.v5951, ((*(yR95 *)rt_nil_check(F.p2580))).f_line);
if ((!(((*(yR95 *)rt_nil_check(F.p2580))).f_c == ((void *)0)))) {
yr2140_Expr(((*(yR95 *)rt_nil_check(F.p2580))).f_c, F.v5951, &F.v5959, &F.v5953);
yr2091_Store(yr1680_SymPath(F.v5957), F.v5951, F.v5959, F.v5953, ((*(yR95 *)rt_nil_check(F.p2580))).f_line);
if ((F.v5949 == v609)) {
yr2075_Manifest(((*(yR95 *)rt_nil_check(F.p2580))).f_c, &F.v5961, &F.v5963);
if ((F.v5961 && yr1729_IsDiscrete(F.v5951))) {
((*(yR115 *)rt_nil_check(F.v5957))).f_hasmv = 1;
((*(yR115 *)rt_nil_check(F.v5957))).f_mval = F.v5963;
}
}
}
if ((!(((*(yR95 *)rt_nil_check(F.v5955))).f_a == ((void *)0)))) {
yr2592_AtLocation(F.v5957, ((*(yR95 *)rt_nil_check(F.v5955))).f_a);
}
yr1653_Define(F.v5957, ((*(yR95 *)rt_nil_check(F.v5955))).f_line);
F.v5955 = ((*(yR95 *)rt_nil_check(F.v5955))).f_next;
}
return;
}
if ((F.v5949 == v621)) {
F.v5951 = yr1866_MakeRep(((*(yR95 *)rt_nil_check(F.p2580))).f_b, ((*(yR95 *)rt_nil_check(F.p2580))).f_name, 0);
yr1806_CheckRepresented(F.v5951, ((*(yR95 *)rt_nil_check(F.p2580))).f_line);
F.v5957 = yr1597_NewSym(v837, ((*(yR95 *)rt_nil_check(F.p2580))).f_name);
((*(yR115 *)rt_nil_check(F.v5957))).f_rep = F.v5951;
yr1653_Define(F.v5957, ((*(yR95 *)rt_nil_check(F.p2580))).f_line);
yr1874_ResolvePending(((*(yR95 *)rt_nil_check(F.p2580))).f_name, F.v5951);
yr2585_NoteAlphabet(F.p2580, F.v5951);
return;
}
if ((F.v5949 == v618)) {
F.v5951 = yr1866_MakeRep(((*(yR95 *)rt_nil_check(F.p2580))).f_b, ((*(yR95 *)rt_nil_check(F.p2580))).f_name, 1);
if ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2580))).f_b))).f_kind == v642)) {
F.v5951 = yr1723_CopyRep(F.v5951);
((*(yR100 *)rt_nil_check(F.v5951))).f_tid = yr1860_NewTid(((*(yR95 *)rt_nil_check(F.p2580))).f_name);
((*(yR100 *)rt_nil_check(F.v5951))).f_tname = ((*(yR95 *)rt_nil_check(F.p2580))).f_name;
if (((((((*(yR100 *)rt_nil_check(F.v5951))).f_kind == v774)) || ((((*(yR100 *)rt_nil_check(F.v5951))).f_kind == v777))) || ((((*(yR100 *)rt_nil_check(F.v5951))).f_kind == v780)))) {
if ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2580))).f_b))).f_a == ((void *)0))) {
((*(yR100 *)rt_nil_check(F.v5951))).f_abstract = 1;
}
}
}
F.v5957 = yr1597_NewSym(v840, ((*(yR95 *)rt_nil_check(F.p2580))).f_name);
((*(yR115 *)rt_nil_check(F.v5957))).f_rep = F.v5951;
yr1653_Define(F.v5957, ((*(yR95 *)rt_nil_check(F.p2580))).f_line);
yr1874_ResolvePending(((*(yR95 *)rt_nil_check(F.p2580))).f_name, F.v5951);
yr2585_NoteAlphabet(F.p2580, F.v5951);
return;
}
if ((F.v5949 == v615)) {
F.v5955 = ((*(yR95 *)rt_nil_check(F.p2580))).f_a;
while ((!(F.v5955 == ((void *)0)))) {
F.v5957 = yr1597_NewSym(v858, ((*(yR95 *)rt_nil_check(F.v5955))).f_name);
((*(yR115 *)rt_nil_check(F.v5957))).f_level = v1576;
((*(yR115 *)rt_nil_check(F.v5957))).f_cname = yr1146_Fresh(y_str("lab", 3));
yr1653_Define(F.v5957, ((*(yR95 *)rt_nil_check(F.v5955))).f_line);
F.v5955 = ((*(yR95 *)rt_nil_check(F.v5955))).f_next;
}
return;
}
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2580))).f_line, y_str("not a simple declaration", 24));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2585_NoteAlphabet(void * a_p2586, void * a_p2587) {
struct yf2588 F;
memset((void *)&F, 0, sizeof F);
F.p2586 = a_p2586;
F.p2587 = a_p2587;
if ((((((*(yR100 *)rt_nil_check(F.p2587))).f_kind == v789)) && ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2586))).f_b))).f_kind == v648)))) {
F.v5977 = yr1245_NewNode(v639, ((*(yR95 *)rt_nil_check(F.p2586))).f_line);
((*(yR95 *)rt_nil_check(F.v5977))).f_name = ((*(yR95 *)rt_nil_check(F.p2586))).f_name;
((*(yR95 *)rt_nil_check(F.v5977))).f_rep = F.p2587;
((*(yR95 *)rt_nil_check(F.v5977))).f_next = v2042;
v2042 = F.v5977;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2592_AtLocation(void * a_p2593, void * a_p2594) {
struct yf2595 F;
memset((void *)&F, 0, sizeof F);
F.p2593 = a_p2593;
F.p2594 = a_p2594;
if ((((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.p2593))).f_rep))).f_kind == v807)) {
yr2736_DeviceSignal(F.p2593, F.p2594);
return;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2599_Declarations(void * a_p2600) {
struct yf2601 F;
memset((void *)&F, 0, sizeof F);
F.p2600 = a_p2600;
F.v5984 = F.p2600;
F.v5986 = ((void *)0);
F.v5988 = ((void *)0);
F.v5990 = ((void *)0);
F.v5992 = ((void * *)(v1595).p)[y_ix1(v1595, v1570)];
((void * *)(v1595).p)[y_ix1(v1595, v1570)] = F.p2600;
while ((!(F.v5984 == ((void *)0)))) {
v960 = ((*(yR95 *)rt_nil_check(F.v5984))).f_line;
if ((((((*(yR95 *)rt_nil_check(F.v5984))).f_kind == v624)) || ((((*(yR95 *)rt_nil_check(F.v5984))).f_kind == v636)))) {
if ((((*(yR95 *)rt_nil_check(F.v5984))).f_kind == v624)) {
yr2551_RoutineHeader(F.v5984, v846);
} else {
yr2551_RoutineHeader(F.v5984, v855);
}
F.v5990 = yr1245_NewNode(v639, ((*(yR95 *)rt_nil_check(F.v5984))).f_line);
((*(yR95 *)rt_nil_check(F.v5990))).f_a = F.v5984;
yr1252_Link(&F.v5986, &F.v5988, F.v5990);
if ((((*(yR95 *)rt_nil_check(F.v5984))).f_kind == v636)) {
yr2681_DeclareProcess(F.v5984);
}
} else if (((((*(yR95 *)rt_nil_check(F.v5984))).f_kind == v594))) {
if ((((*(yR95 *)rt_nil_check(F.v5984))).f_ival == INT64_C(0))) {
yr2663_CompileModule(F.v5984);
}
} else if ((((*(yR95 *)rt_nil_check(F.v5984))).f_kind == v630)) {
yr2669_DeclareTemplate(F.v5984);
} else if ((((*(yR95 *)rt_nil_check(F.v5984))).f_kind == v633)) {
yr2675_Instantiate(F.v5984);
} else {
yr2579_SimpleDecl(F.v5984);
}
F.v5984 = ((*(yR95 *)rt_nil_check(F.v5984))).f_next;
}
((void * *)(v1595).p)[y_ix1(v1595, v1570)] = F.v5992;
yr1881_CheckPending();
F.v5990 = F.v5986;
while ((!(F.v5990 == ((void *)0)))) {
yr2565_RoutineBody(((*(yR95 *)rt_nil_check(F.v5990))).f_a);
F.v5990 = ((*(yR95 *)rt_nil_check(F.v5990))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2616_Alias(rt_int a_p2617, void * a_p2618) {
struct yf2619 F;
memset((void *)&F, 0, sizeof F);
F.p2617 = a_p2617;
F.p2618 = a_p2618;
F.v5998 = yr1597_NewSym(v864, F.p2617);
((*(yR115 *)rt_nil_check(F.v5998))).f_target = F.p2618;
((*(yR115 *)rt_nil_check(F.v5998))).f_readonly = ((*(yR115 *)rt_nil_check(F.p2618))).f_readonly;
{ void * rv5999 = F.v5998;
return rv5999; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2623_AddLits(void * * a_p2624, void * a_p2625, rt_int a_p2626) {
struct yf2627 F;
memset((void *)&F, 0, sizeof F);
F.p2624 = a_p2624;
F.p2625 = a_p2625;
F.p2626 = a_p2626;
if ((((F.p2626 > INT64_C(8))) || ((*(yR100 *)rt_nil_check(F.p2625))).f_opaque)) {
return;
}
if ((((*(yR100 *)rt_nil_check(F.p2625))).f_kind == v786)) {
F.v6005 = ((*(yR100 *)rt_nil_check(F.p2625))).f_lits;
while ((!(F.v6005 == ((void *)0)))) {
F.v6007 = yr1646_FindLit(((*(yR95 *)rt_nil_check(F.v6005))).f_name, F.p2625);
if ((!(F.v6007 == ((void *)0)))) {
F.v6007 = yr2616_Alias(((*(yR95 *)rt_nil_check(F.v6005))).f_name, F.v6007);
((*(yR115 *)rt_nil_check(F.v6007))).f_mnext = (*F.p2624);
(*F.p2624) = F.v6007;
}
F.v6005 = ((*(yR95 *)rt_nil_check(F.v6005))).f_next;
}
} else if ((((*(yR100 *)rt_nil_check(F.p2625))).f_kind == v795)) {
F.v6009 = ((*(yR100 *)rt_nil_check(F.p2625))).f_fields;
while ((!(F.v6009 == ((void *)0)))) {
yr2623_AddLits(&(*F.p2624), ((*(yR105 *)rt_nil_check(F.v6009))).f_rep, rt_range(rt_add(F.p2626, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v6009 = ((*(yR105 *)rt_nil_check(F.v6009))).f_next;
}
} else if (((((((*(yR100 *)rt_nil_check(F.p2625))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.p2625))).f_kind == v804))) || ((((*(yR100 *)rt_nil_check(F.p2625))).f_kind == v801)))) {
yr2623_AddLits(&(*F.p2624), ((*(yR100 *)rt_nil_check(F.p2625))).f_elem, rt_range(rt_add(F.p2626, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2634_Provides(void * a_p2635, rt_int a_p2636) {
struct yf2637 F;
memset((void *)&F, 0, sizeof F);
F.p2635 = a_p2635;
F.p2636 = a_p2636;
F.v6019 = ((*(yR95 *)rt_nil_check(F.p2635))).f_b;
if ((((*(yR95 *)rt_nil_check(F.p2635))).f_name == F.p2636)) {
{ rt_int rv6021 = 1;
return rv6021; }
}
while ((!(F.v6019 == ((void *)0)))) {
if ((((!(((*(yR95 *)rt_nil_check(F.v6019))).f_ival == INT64_C(0)))) && ((((*(yR95 *)rt_nil_check(F.v6019))).f_ival == F.p2636)))) {
{ rt_int rv6024 = 1;
return rv6024; }
}
if ((((((*(yR95 *)rt_nil_check(F.v6019))).f_ival == INT64_C(0))) && ((((*(yR95 *)rt_nil_check(F.v6019))).f_name == F.p2636)))) {
{ rt_int rv6027 = 1;
return rv6027; }
}
F.v6019 = ((*(yR95 *)rt_nil_check(F.v6019))).f_next;
}
{ rt_int rv6029 = 0;
return rv6029; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2641_ImportLater(rt_int a_p2642, rt_int a_p2643) {
struct yf2644 F;
memset((void *)&F, 0, sizeof F);
F.p2642 = a_p2642;
F.p2643 = a_p2643;
if ((v1570 < INT64_C(0))) {
return;
}
F.v6034 = ((void * *)(v1595).p)[y_ix1(v1595, v1570)];
while ((!(F.v6034 == ((void *)0)))) {
if (((((((*(yR95 *)rt_nil_check(F.v6034))).f_kind == v594)) && ((!(((*(yR95 *)rt_nil_check(F.v6034))).f_ival == INT64_C(2))))) && yr2634_Provides(F.v6034, F.p2642))) {
if ((((*(yR95 *)rt_nil_check(F.v6034))).f_ival == INT64_C(1))) {
yr1132_FailN(F.p2643, F.p2642, y_str(": modules import from each other here, and this implementation needs an order without a circle (X.G)", 100));
}
yr2663_CompileModule(F.v6034);
return;
}
F.v6034 = ((*(yR95 *)rt_nil_check(F.v6034))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2648_ResolveItem(void * a_p2649, void * * a_p2650, rt_int a_p2651) {
struct yf2652 F;
memset((void *)&F, 0, sizeof F);
F.p2649 = a_p2649;
F.p2650 = a_p2650;
F.p2651 = a_p2651;
F.v6054 = ((*(yR95 *)rt_nil_check(F.p2649))).f_flag;
if (((F.p2651 && ((((*(yR95 *)rt_nil_check(F.p2649))).f_text == INT64_C(0)))) && (((((((*(yR95 *)rt_nil_check(F.p2649))).f_name == v501)) || ((((*(yR95 *)rt_nil_check(F.p2649))).f_name == v555))) || ((((*(yR95 *)rt_nil_check(F.p2649))).f_name == v540)))))) {
if ((yr1627_FindHere(((*(yR95 *)rt_nil_check(F.p2649))).f_name) == ((void *)0))) {
return;
}
}
if ((!(((*(yR95 *)rt_nil_check(F.p2649))).f_text == INT64_C(0)))) {
if ((((!F.p2651)) && ((yr1621_Find(((*(yR95 *)rt_nil_check(F.p2649))).f_text) == ((void *)0))))) {
yr2641_ImportLater(((*(yR95 *)rt_nil_check(F.p2649))).f_text, ((*(yR95 *)rt_nil_check(F.p2649))).f_line);
}
F.v6046 = yr1686_Real(yr1633_Lookup(((*(yR95 *)rt_nil_check(F.p2649))).f_text, ((*(yR95 *)rt_nil_check(F.p2649))).f_line));
if ((!(((*(yR115 *)rt_nil_check(F.v6046))).f_kind == v849))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2649))).f_line, ((*(yR95 *)rt_nil_check(F.p2649))).f_text, y_str(" is not a module", 16));
}
F.v6044 = ((*(yR115 *)rt_nil_check(F.v6046))).f_members;
while ((((!(F.v6044 == ((void *)0)))) && ((!(((*(yR115 *)rt_nil_check(F.v6044))).f_name == ((*(yR95 *)rt_nil_check(F.p2649))).f_name))))) {
F.v6044 = ((*(yR115 *)rt_nil_check(F.v6044))).f_mnext;
}
if ((F.v6044 == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2649))).f_line, ((*(yR95 *)rt_nil_check(F.p2649))).f_name, y_str(" is not exported by that module", 31));
}
} else {
if (F.p2651) {
F.v6044 = yr1627_FindHere(((*(yR95 *)rt_nil_check(F.p2649))).f_name);
} else {
F.v6044 = yr1621_Find(((*(yR95 *)rt_nil_check(F.p2649))).f_name);
}
if ((((F.v6044 == ((void *)0))) && (!F.p2651))) {
yr2641_ImportLater(((*(yR95 *)rt_nil_check(F.p2649))).f_name, ((*(yR95 *)rt_nil_check(F.p2649))).f_line);
F.v6044 = yr1621_Find(((*(yR95 *)rt_nil_check(F.p2649))).f_name);
}
if ((F.v6044 == ((void *)0))) {
if (F.p2651) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2649))).f_line, ((*(yR95 *)rt_nil_check(F.p2649))).f_name, y_str(" is not declared in this module", 31));
} else {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2649))).f_line, ((*(yR95 *)rt_nil_check(F.p2649))).f_name, y_str(" is not declared around this module (X.B.2)", 43));
}
}
}
F.v6050 = ((*(yR95 *)rt_nil_check(F.p2649))).f_name;
if ((!(((*(yR95 *)rt_nil_check(F.p2649))).f_ival == INT64_C(0)))) {
F.v6050 = rt_range(((*(yR95 *)rt_nil_check(F.p2649))).f_ival, INT64_C(0), INT64_C(4000000));
}
F.v6046 = yr1686_Real(F.v6044);
if ((((((*(yR115 *)rt_nil_check(F.v6046))).f_kind == v849)) && ((((*(yR95 *)rt_nil_check(F.p2649))).f_text == INT64_C(0))))) {
if ((((!(F.v6054 == INT64_C(0)))) || ((!(((*(yR95 *)rt_nil_check(F.p2649))).f_ival == INT64_C(0)))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2649))).f_line, y_str("a module name in a list takes no attribute and no AS (X.B.3)", 60));
}
F.v6048 = ((*(yR115 *)rt_nil_check(F.v6046))).f_members;
while ((!(F.v6048 == ((void *)0)))) {
F.v6044 = yr2616_Alias(((*(yR115 *)rt_nil_check(F.v6048))).f_name, F.v6048);
((*(yR115 *)rt_nil_check(F.v6044))).f_mnext = (*F.p2650);
(*F.p2650) = F.v6044;
F.v6048 = ((*(yR115 *)rt_nil_check(F.v6048))).f_mnext;
}
if ((!F.p2651)) {
F.v6044 = yr2616_Alias(((*(yR115 *)rt_nil_check(F.v6046))).f_name, F.v6046);
((*(yR115 *)rt_nil_check(F.v6044))).f_mnext = (*F.p2650);
(*F.p2650) = F.v6044;
}
return;
}
F.v6048 = yr2616_Alias(F.v6050, F.v6044);
if (F.p2651) {
if ((((((*(yR115 *)rt_nil_check(F.v6046))).f_kind == v837)) || ((((*(yR115 *)rt_nil_check(F.v6046))).f_kind == v840)))) {
if ((((F.v6054 == v399)) || ((F.v6054 == v453)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2649))).f_line, y_str("READONLY and VAR are for variables", 34));
}
if ((((!(F.v6054 == v444))) || ((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v6046))).f_rep))).f_opaque)) {
F.v6052 = yr1723_CopyRep(((*(yR115 *)rt_nil_check(F.v6046))).f_rep);
((*(yR100 *)rt_nil_check(F.v6052))).f_opaque = 1;
((*(yR100 *)rt_nil_check(F.v6052))).f_opaqueops = v2631;
((*(yR115 *)rt_nil_check(F.v6048))).f_target = yr1597_NewSym(((*(yR115 *)rt_nil_check(F.v6046))).f_kind, ((*(yR115 *)rt_nil_check(F.v6046))).f_name);
((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v6048))).f_target))).f_rep = F.v6052;
((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v6048))).f_target))).f_decl = ((*(yR115 *)rt_nil_check(F.v6046))).f_decl;
} else {
yr2623_AddLits(&(*F.p2650), ((*(yR115 *)rt_nil_check(F.v6046))).f_rep, INT64_C(0));
}
} else if ((((*(yR115 *)rt_nil_check(F.v6046))).f_kind == v831)) {
if ((((F.v6054 == v366)) || ((F.v6054 == v444)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2649))).f_line, y_str("OPAQUE and TRANSPARENT are for types", 36));
}
if ((!(F.v6054 == v453))) {
((*(yR115 *)rt_nil_check(F.v6048))).f_readonly = 1;
}
} else if ((!(F.v6054 == INT64_C(0)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2649))).f_line, y_str("an attribute is for a type, a representation or a variable", 58));
}
if ((((((*(yR115 *)rt_nil_check(F.v6046))).f_kind == v831)) && ((((((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v6046))).f_rep))).f_kind == v807)) || yr1759_HoldsSignal(((*(yR115 *)rt_nil_check(F.v6046))).f_rep))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2649))).f_line, y_str("a signal may not be exported from its monitor (X.E.4)", 53));
}
} else if ((((((*(yR115 *)rt_nil_check(F.v6046))).f_kind == v837)) || ((((*(yR115 *)rt_nil_check(F.v6046))).f_kind == v840)))) {
yr2623_AddLits(&(*F.p2650), ((*(yR115 *)rt_nil_check(F.v6046))).f_rep, INT64_C(0));
}
((*(yR115 *)rt_nil_check(F.v6048))).f_mnext = (*F.p2650);
(*F.p2650) = F.v6048;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2656_DefineAll(void * a_p2657, rt_int a_p2658) {
struct yf2659 F;
memset((void *)&F, 0, sizeof F);
F.p2657 = a_p2657;
F.p2658 = a_p2658;
F.v6079 = F.p2657;
F.v6081 = F.p2657;
F.v6083 = F.p2657;
while ((!(F.v6079 == ((void *)0)))) {
F.v6081 = ((*(yR115 *)rt_nil_check(F.v6079))).f_mnext;
F.v6083 = yr1627_FindHere(((*(yR115 *)rt_nil_check(F.v6079))).f_name);
if ((((F.v6083 == ((void *)0))) || ((!(yr1686_Real(F.v6083) == yr1686_Real(F.v6079)))))) {
if (((((!(F.v6083 == ((void *)0)))) && ((((*(yR115 *)rt_nil_check(yr1686_Real(F.v6079)))).f_kind == v843))) && ((((*(yR115 *)rt_nil_check(yr1686_Real(F.v6083)))).f_kind == v843)))) {
yr1653_Define(F.v6079, F.p2658);
} else if ((F.v6083 == ((void *)0))) {
yr1653_Define(F.v6079, F.p2658);
} else {
yr1132_FailN(F.p2658, ((*(yR115 *)rt_nil_check(F.v6079))).f_name, y_str(" comes into this scope twice", 28));
}
}
F.v6079 = F.v6081;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2663_CompileModule(void * a_p2664) {
struct yf2665 F;
memset((void *)&F, 0, sizeof F);
F.p2664 = a_p2664;
F.v6112 = 0;
((*(yR95 *)rt_nil_check(F.p2664))).f_ival = INT64_C(1);
F.v6088 = ((void *)0);
F.v6104 = ((*(yR95 *)rt_nil_check(F.p2664))).f_a;
while ((!(F.v6104 == ((void *)0)))) {
yr2648_ResolveItem(F.v6104, &F.v6088, 0);
F.v6104 = ((*(yR95 *)rt_nil_check(F.v6104))).f_next;
}
F.v6098 = v2605;
if ((((((*(yR95 *)rt_nil_check(F.p2664))).f_flag == INT64_C(1))) && ((v2605 == ((void *)0))))) {
F.v6100 = yr1597_NewSym(v831, ((*(yR95 *)rt_nil_check(F.p2664))).f_name);
((*(yR115 *)rt_nil_check(F.v6100))).f_level = v1576;
((*(yR115 *)rt_nil_check(F.v6100))).f_cname = yr1146_Fresh(y_str("mon", 3));
((*(yR115 *)rt_nil_check(F.v6100))).f_rep = v1698;
yr1673_DeclStorage(yr1021_T(y_str("ymon", 4)), ((*(yR115 *)rt_nil_check(F.v6100))).f_cname);
yr1092_Emit(yr2495_Join(yr1021_T(y_str("y_mon_init(&", 12)), yr1660_Path(v1576, ((*(yR115 *)rt_nil_check(F.v6100))).f_cname), yr1021_T(y_str(");", 2))));
v2605 = F.v6100;
F.v6112 = 1;
}
yr1604_OpenScope(1);
((void * *)(v2614).p)[y_ix1(v2614, v1570)] = ((void *)0);
F.v6108 = v1573;
v1573 = v1570;
yr2656_DefineAll(F.v6088, ((*(yR95 *)rt_nil_check(F.p2664))).f_line);
yr2599_Declarations(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2664))).f_c))).f_a);
if (F.v6112) {
yr1092_Emit(yr2495_Join(yr1021_T(y_str("y_mon_enter(&", 13)), yr1660_Path(((*(yR115 *)rt_nil_check(v2605))).f_level, ((*(yR115 *)rt_nil_check(v2605))).f_cname), yr1021_T(y_str(");", 2))));
}
v2372 = rt_range(rt_add(v2372, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2361).p)[y_ix1(v2361, v2372)] = INT64_C(0);
yr2453_BlockStatements(((*(yR95 *)rt_nil_check(F.p2664))).f_c);
v2372 = rt_range(rt_sub(v2372, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (F.v6112) {
yr1092_Emit(yr2495_Join(yr1021_T(y_str("y_mon_leave(&", 13)), yr1660_Path(((*(yR115 *)rt_nil_check(v2605))).f_level, ((*(yR115 *)rt_nil_check(v2605))).f_cname), yr1021_T(y_str(");", 2))));
}
v2631 = INT64_C(0);
F.v6104 = ((*(yR95 *)rt_nil_check(F.p2664))).f_b;
while ((!(F.v6104 == ((void *)0)))) {
if ((((((*(yR95 *)rt_nil_check(F.v6104))).f_text == INT64_C(0))) && ((yr1627_FindHere(((*(yR95 *)rt_nil_check(F.v6104))).f_name) == ((void *)0))))) {
if ((((*(yR95 *)rt_nil_check(F.v6104))).f_name == v501)) {
v2631 = rt_range(rt_add(v2631, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((((((*(yR95 *)rt_nil_check(F.v6104))).f_name == v555)) || ((((*(yR95 *)rt_nil_check(F.v6104))).f_name == v540)))) {
if (((rt_div(v2631, INT64_C(2))) == INT64_C(0))) {
v2631 = rt_range(rt_add(v2631, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
}
F.v6104 = ((*(yR95 *)rt_nil_check(F.v6104))).f_next;
}
F.v6090 = ((void *)0);
F.v6104 = ((*(yR95 *)rt_nil_check(F.p2664))).f_b;
while ((!(F.v6104 == ((void *)0)))) {
yr2648_ResolveItem(F.v6104, &F.v6090, 1);
F.v6104 = ((*(yR95 *)rt_nil_check(F.v6104))).f_next;
}
F.v6106 = ((void * *)(v2614).p)[y_ix1(v2614, v1570)];
v1573 = F.v6108;
yr1610_CloseScope();
while ((!(F.v6106 == ((void *)0)))) {
F.v6104 = ((*(yR95 *)rt_nil_check(F.v6106))).f_next;
((*(yR95 *)rt_nil_check(F.v6106))).f_next = ((void * *)(v2614).p)[y_ix1(v2614, v1570)];
((void * *)(v2614).p)[y_ix1(v2614, v1570)] = F.v6106;
F.v6106 = F.v6104;
}
v2605 = F.v6098;
F.v6094 = yr1597_NewSym(v849, ((*(yR95 *)rt_nil_check(F.p2664))).f_name);
((*(yR115 *)rt_nil_check(F.v6094))).f_members = F.v6090;
yr1653_Define(F.v6094, ((*(yR95 *)rt_nil_check(F.p2664))).f_line);
F.v6096 = F.v6090;
F.v6090 = ((void *)0);
while ((!(F.v6096 == ((void *)0)))) {
F.v6102 = ((*(yR115 *)rt_nil_check(F.v6096))).f_mnext;
F.v6092 = yr2616_Alias(((*(yR115 *)rt_nil_check(F.v6096))).f_name, F.v6096);
((*(yR115 *)rt_nil_check(F.v6092))).f_readonly = ((*(yR115 *)rt_nil_check(F.v6096))).f_readonly;
((*(yR115 *)rt_nil_check(F.v6092))).f_mnext = F.v6090;
F.v6090 = F.v6092;
F.v6096 = F.v6102;
}
((*(yR115 *)rt_nil_check(F.v6094))).f_members = F.v6090;
((*(yR95 *)rt_nil_check(F.p2664))).f_ival = INT64_C(2);
F.v6096 = F.v6090;
while ((!(F.v6096 == ((void *)0)))) {
F.v6102 = yr2616_Alias(((*(yR115 *)rt_nil_check(F.v6096))).f_name, F.v6096);
((*(yR115 *)rt_nil_check(F.v6102))).f_readonly = ((*(yR115 *)rt_nil_check(F.v6096))).f_readonly;
if ((yr1627_FindHere(((*(yR115 *)rt_nil_check(F.v6096))).f_name) == ((void *)0))) {
yr1653_Define(F.v6102, ((*(yR95 *)rt_nil_check(F.p2664))).f_line);
} else if ((((((*(yR115 *)rt_nil_check(yr1627_FindHere(((*(yR115 *)rt_nil_check(F.v6096))).f_name)))).f_kind == v864)) && ((!(yr1686_Real(yr1627_FindHere(((*(yR115 *)rt_nil_check(F.v6096))).f_name)) == yr1686_Real(F.v6096)))))) {
yr1653_Define(F.v6102, ((*(yR95 *)rt_nil_check(F.p2664))).f_line);
} else if ((!(((*(yR115 *)rt_nil_check(yr1686_Real(F.v6096)))).f_kind == v843))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2664))).f_line, ((*(yR115 *)rt_nil_check(F.v6096))).f_name, y_str(" is exported into a scope that has it already", 45));
}
F.v6096 = ((*(yR115 *)rt_nil_check(F.v6096))).f_mnext;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2669_DeclareTemplate(void * a_p2670) {
struct yf2671 F;
memset((void *)&F, 0, sizeof F);
F.p2670 = a_p2670;
F.v6147 = yr1597_NewSym(v852, ((*(yR95 *)rt_nil_check(F.p2670))).f_name);
((*(yR115 *)rt_nil_check(F.v6147))).f_decl = F.p2670;
yr1653_Define(F.v6147, ((*(yR95 *)rt_nil_check(F.p2670))).f_line);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2675_Instantiate(void * a_p2676) {
struct yf2677 F;
memset((void *)&F, 0, sizeof F);
F.p2676 = a_p2676;
F.v6151 = yr1686_Real(yr1633_Lookup(((*(yR95 *)rt_nil_check(F.p2676))).f_name, ((*(yR95 *)rt_nil_check(F.p2676))).f_line));
if ((!(((*(yR115 *)rt_nil_check(F.v6151))).f_kind == v852))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2676))).f_line, ((*(yR95 *)rt_nil_check(F.p2676))).f_name, y_str(" is not a template", 18));
}
F.v6153 = ((*(yR115 *)rt_nil_check(F.v6151))).f_decl;
if ((!(yr1260_Count(((*(yR95 *)rt_nil_check(F.v6153))).f_a) == yr1260_Count(((*(yR95 *)rt_nil_check(F.p2676))).f_a)))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2676))).f_line, ((*(yR95 *)rt_nil_check(F.p2676))).f_name, y_str(": the number of actuals is wrong", 32));
}
F.v6159 = rt_range(rt_add(v1159, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo6175 = ((*(yR95 *)rt_nil_check(F.v6153))).f_ival;
F.hi6176 = rt_sub(((*(yR95 *)rt_nil_check(F.v6153))).f_flag, INT64_C(1));
{ rt_int hi6180 = F.hi6176;
for (rt_int i6179 = F.lo6175; i6179 <= hi6180; i6179++) { F.c_6178 = i6179;
F.v6163 = ((rt_int *)(v1153).p)[y_ix1(v1153, F.c_6178)];
F.v6165 = ((rt_int *)(v1155).p)[y_ix1(v1155, F.c_6178)];
if ((F.v6163 == v177)) {
F.v6155 = ((*(yR95 *)rt_nil_check(F.v6153))).f_a;
F.v6157 = ((*(yR95 *)rt_nil_check(F.p2676))).f_a;
while ((!(F.v6155 == ((void *)0)))) {
if ((((((*(yR95 *)rt_nil_check(F.v6155))).f_name == F.v6165)) && ((F.v6163 == v177)))) {
if ((((*(yR95 *)rt_nil_check(F.v6157))).f_flag == INT64_C(1))) {
F.v6163 = v186;
F.v6165 = ((*(yR95 *)rt_nil_check(F.v6157))).f_ival;
} else {
F.v6165 = ((*(yR95 *)rt_nil_check(F.v6157))).f_name;
if ((F.v6165 <= v462)) {
F.v6163 = v180;
} else if ((F.v6165 <= v591)) {
F.v6163 = v183;
}
}
}
F.v6155 = ((*(yR95 *)rt_nil_check(F.v6155))).f_next;
F.v6157 = ((*(yR95 *)rt_nil_check(F.v6157))).f_next;
}
}
v1159 = rt_range(rt_add(v1159, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1153).p)[y_ix1(v1153, v1159)] = F.v6163;
((rt_int *)(v1155).p)[y_ix1(v1155, v1159)] = F.v6165;
((rt_int *)(v1157).p)[y_ix1(v1157, v1159)] = ((rt_int *)(v1157).p)[y_ix1(v1157, F.c_6178)];
if (i6179 == hi6180) break;
}}
v1159 = rt_range(rt_add(v1159, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1153).p)[y_ix1(v1153, v1159)] = v174;
((rt_int *)(v1155).p)[y_ix1(v1155, v1159)] = INT64_C(0);
((rt_int *)(v1157).p)[y_ix1(v1157, v1159)] = ((*(yR95 *)rt_nil_check(F.p2676))).f_line;
F.v6161 = v1234;
v1234 = F.v6159;
F.v6167 = yr1350_ParseModule();
v1234 = F.v6161;
yr2663_CompileModule(F.v6167);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2681_DeclareProcess(void * a_p2682) {
struct yf2683 F;
memset((void *)&F, 0, sizeof F);
F.p2682 = a_p2682;
F.v6190 = ((*(yR95 *)rt_nil_check(F.p2682))).f_sym;
((*(yR115 *)rt_nil_check(F.v6190))).f_monitor = v2605;
yr1673_DeclStorage(yr1021_T(y_str("rt_taskdecl", 11)), yr2495_Join(((*(yR115 *)rt_nil_check(F.v6190))).f_cname, yr1021_T(y_str("_d", 2)), INT64_C(0)));
F.v6192 = yr1245_NewNode(v639, ((*(yR95 *)rt_nil_check(F.p2682))).f_line);
((*(yR95 *)rt_nil_check(F.v6192))).f_sym = F.v6190;
((*(yR95 *)rt_nil_check(F.v6192))).f_next = ((void * *)(v2614).p)[y_ix1(v2614, v1570)];
((void * *)(v2614).p)[y_ix1(v2614, v1570)] = F.v6192;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2687_AwaitProcesses(void) {
struct yf2688 F;
memset((void *)&F, 0, sizeof F);
F.v6198 = ((void * *)(v2614).p)[y_ix1(v2614, v1570)];
while ((!(F.v6198 == ((void *)0)))) {
yr1092_Emit(yr2495_Join(yr1021_T(y_str("rt_await_decl(&", 15)), yr1660_Path(rt_range(rt_sub(((*(yR115 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v6198))).f_sym))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr2495_Join(((*(yR115 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v6198))).f_sym))).f_cname, yr1021_T(y_str("_d", 2)), INT64_C(0))), yr1021_T(y_str(");", 2))));
F.v6198 = ((*(yR95 *)rt_nil_check(F.v6198))).f_next;
}
((void * *)(v2614).p)[y_ix1(v2614, v1570)] = ((void *)0);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2692_Activate(void * a_p2693, void * a_p2694) {
struct yf2695 F;
memset((void *)&F, 0, sizeof F);
F.p2693 = a_p2693;
F.p2694 = a_p2694;
F.v6229 = ((*(yR115 *)rt_nil_check(F.p2694))).f_decl;
yr2283_CompileArgs(((*(yR95 *)rt_nil_check(F.p2693))).f_a, F.p2694, &F.v6209, &F.v6211);
if ((!(F.v6211 == ((*(yR115 *)rt_nil_check(F.p2694))).f_nparams))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2693))).f_line, ((*(yR115 *)rt_nil_check(F.p2694))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
F.v6217 = yr1146_Fresh(y_str("pf", 2));
yr1092_Emit(yr2495_Join(yr1021_T(y_str("{ struct ", 9)), ((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.p2694))).f_members))).f_name, yr2495_Join(yr1021_T(y_str(" *", 2)), F.v6217, yr2495_Join(yr1021_T(y_str(" = rt_alloc(sizeof *", 20)), F.v6217, yr1021_T(y_str(");", 2))))));
if ((((*(yR115 *)rt_nil_check(F.p2694))).f_level > INT64_C(1))) {
yr1092_Emit(yr2495_Join(F.v6217, yr1021_T(y_str("->up = ", 7)), yr2495_Join(yr1667_FramePtr(rt_range(rt_sub(((*(yR115 *)rt_nil_check(F.p2694))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))), yr1021_T(y_str(";", 1)), INT64_C(0))));
}
F.v6215 = ((*(yR115 *)rt_nil_check(F.p2694))).f_params;
F.v6213 = rt_range(rt_add(F.v6209, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(F.v6215 == ((void *)0)))) {
if ((!yr2262_Fits(((*(yR110 *)rt_nil_check(F.v6215))).f_rep, ((void * *)(v2248).p)[y_ix1(v2248, F.v6213)]))) {
yr1790_TypeClash(((*(yR95 *)rt_nil_check(((void * *)(v2257).p)[y_ix1(v2257, F.v6213)]))).f_line, ((*(yR110 *)rt_nil_check(F.v6215))).f_rep, ((void * *)(v2248).p)[y_ix1(v2248, F.v6213)]);
}
F.v6223 = yr2495_Join(F.v6217, yr1021_T(y_str("->", 2)), ((*(yR110 *)rt_nil_check(F.v6215))).f_cname);
if ((((*(yR110 *)rt_nil_check(F.v6215))).f_cls == v873)) {
if ((!yr2101_IsVariable(((void * *)(v2257).p)[y_ix1(v2257, F.v6213)]))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(((void * *)(v2257).p)[y_ix1(v2257, F.v6213)]))).f_line, ((*(yR110 *)rt_nil_check(F.v6215))).f_name, y_str(": the actual of a VAR parameter must be a variable", 50));
}
yr1092_Emit(yr2495_Join(F.v6223, yr1021_T(y_str(" = &", 4)), yr2495_Join(((rt_int *)(v2239).p)[y_ix1(v2239, F.v6213)], yr1021_T(y_str(";", 1)), INT64_C(0))));
} else if (yr1753_Deep(((*(yR110 *)rt_nil_check(F.v6215))).f_rep)) {
F.v6219 = yr1146_Fresh(y_str("t", 1));
yr1092_Emit(yr2495_Join(yr1021_T(y_str("{ ", 2)), yr1765_CType(((*(yR110 *)rt_nil_check(F.v6215))).f_rep), yr2495_Join(yr1021_T(y_str(" ", 1)), F.v6219, yr2495_Join(yr1021_T(y_str(" = ", 3)), ((rt_int *)(v2239).p)[y_ix1(v2239, F.v6213)], yr1021_T(y_str(";", 1))))));
if ((((*(yR100 *)rt_nil_check(((*(yR110 *)rt_nil_check(F.v6215))).f_rep))).f_kind == v813)) {
yr1092_Emit(yr2495_Join(yr1021_T(y_str("y_copy(y_desc_vector(", 21)), yr1771_DescOf(((*(yR100 *)rt_nil_check(((*(yR110 *)rt_nil_check(F.v6215))).f_rep))).f_elem), yr2495_Join(yr1021_T(y_str("), &", 4)), F.v6223, yr2495_Join(yr1021_T(y_str(", &", 3)), F.v6219, yr1021_T(y_str("); }", 4))))));
} else {
yr1092_Emit(yr2495_Join(yr1021_T(y_str("y_copy(", 7)), yr1771_DescOf(((*(yR110 *)rt_nil_check(F.v6215))).f_rep), yr2495_Join(yr1021_T(y_str(", &", 3)), F.v6223, yr2495_Join(yr1021_T(y_str(", &", 3)), F.v6219, yr1021_T(y_str("); }", 4))))));
}
} else {
yr1092_Emit(yr2495_Join(F.v6223, yr1021_T(y_str(" = ", 3)), yr2495_Join(yr2083_Convert(((rt_int *)(v2239).p)[y_ix1(v2239, F.v6213)], ((*(yR110 *)rt_nil_check(F.v6215))).f_rep, ((void * *)(v2248).p)[y_ix1(v2248, F.v6213)]), yr1021_T(y_str(";", 1)), INT64_C(0))));
}
F.v6213 = rt_range(rt_add(F.v6213, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6215 = ((*(yR110 *)rt_nil_check(F.v6215))).f_next;
}
v2259 = F.v6209;
F.v6225 = yr1021_T(y_str("0", 1));
if ((!(((*(yR95 *)rt_nil_check(F.v6229))).f_e == ((void *)0)))) {
yr2140_Expr(((*(yR95 *)rt_nil_check(F.v6229))).f_e, v1692, &F.v6225, &F.v6231);
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.v6229))).f_line, v1692, F.v6231);
}
F.v6227 = yr1021_T(y_str("0, 0", 4));
if ((!(((*(yR95 *)rt_nil_check(F.v6229))).f_d == ((void *)0)))) {
yr2140_Expr(((*(yR95 *)rt_nil_check(F.v6229))).f_d, v1692, &F.v6221, &F.v6231);
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.v6229))).f_line, v1692, F.v6231);
F.v6227 = yr2495_Join(yr1021_T(y_str("1, ", 3)), F.v6221, INT64_C(0));
}
yr986_SB();
yr997_SA(y_str("y_create(&", 10));
yr1004_ST(yr1660_Path(rt_range(rt_sub(((*(yR115 *)rt_nil_check(F.p2694))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr2495_Join(((*(yR115 *)rt_nil_check(F.p2694))).f_cname, yr1021_T(y_str("_d", 2)), INT64_C(0))));
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6225);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6227);
yr997_SA(y_str(", ", 2));
yr1004_ST(((*(yR115 *)rt_nil_check(F.p2694))).f_cname);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6217);
yr997_SA(y_str("); }", 4));
F.v6219 = yr1016_SE();
yr1092_Emit(F.v6219);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2699_MonitorPath(void * a_p2700) {
struct yf2701 F;
memset((void *)&F, 0, sizeof F);
F.p2700 = a_p2700;
{ rt_int rv6287 = yr2495_Join(yr1021_T(y_str("&", 1)), yr1660_Path(((*(yR115 *)rt_nil_check(F.p2700))).f_level, ((*(yR115 *)rt_nil_check(F.p2700))).f_cname), INT64_C(0));
return rv6287; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2705_EnterMonitor(void * a_p2706) {
struct yf2707 F;
memset((void *)&F, 0, sizeof F);
F.p2706 = a_p2706;
if ((((*(yR115 *)rt_nil_check(F.p2706))).f_kind == v846)) {
((*(yR115 *)rt_nil_check(F.p2706))).f_monitor = v2605;
}
if ((((*(yR115 *)rt_nil_check(F.p2706))).f_monitor == ((void *)0))) {
return;
}
yr1092_Emit(yr2495_Join(yr1021_T(y_str("y_mon_enter(", 12)), yr2699_MonitorPath(((*(yR115 *)rt_nil_check(F.p2706))).f_monitor), yr1021_T(y_str(");", 2))));
F.v6291 = yr1146_Fresh(y_str("mf", 2));
v2415 = 1;
yr1092_Emit(yr2495_Join(yr1021_T(y_str("rt_frame ", 9)), F.v6291, yr1021_T(y_str(";", 1))));
yr986_SB();
yr997_SA(y_str("if (!RT_TRY(", 12));
yr1004_ST(F.v6291);
yr997_SA(y_str(")) { RT_POP(", 12));
yr1004_ST(F.v6291);
yr997_SA(y_str("); ", 3));
if ((((*(yR115 *)rt_nil_check(F.p2706))).f_kind == v855)) {
yr997_SA(y_str("y_mon_drop(", 11));
} else {
yr997_SA(y_str("y_mon_leave(", 12));
}
yr1004_ST(yr2699_MonitorPath(((*(yR115 *)rt_nil_check(F.p2706))).f_monitor));
yr997_SA(y_str("); rt_raise(rt_xcur); }", 23));
yr1092_Emit(yr1016_SE());
v2348 = rt_range(rt_add(v2348, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2346).p)[y_ix1(v2346, v2348)] = F.v6291;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2711_LeaveMonitor(void) {
struct yf2712 F;
memset((void *)&F, 0, sizeof F);
if ((v2413 == ((void *)0))) {
return;
}
if ((((*(yR115 *)rt_nil_check(v2413))).f_monitor == ((void *)0))) {
return;
}
if ((((*(yR115 *)rt_nil_check(v2413))).f_kind == v855)) {
yr1092_Emit(yr2495_Join(yr1021_T(y_str("y_mon_drop(", 11)), yr2699_MonitorPath(((*(yR115 *)rt_nil_check(v2413))).f_monitor), yr1021_T(y_str(");", 2))));
} else {
yr1092_Emit(yr2495_Join(yr1021_T(y_str("y_mon_leave(", 12)), yr2699_MonitorPath(((*(yR115 *)rt_nil_check(v2413))).f_monitor), yr1021_T(y_str(");", 2))));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2716_TerminateStatement(void * a_p2717) {
struct yf2718 F;
memset((void *)&F, 0, sizeof F);
F.p2717 = a_p2717;
if ((((v2413 == ((void *)0))) || ((!(((*(yR115 *)rt_nil_check(v2413))).f_kind == v855))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2717))).f_line, y_str("TERMINATE_PROCESS ends a process (IX.A.7)", 41));
}
yr2687_AwaitProcesses();
yr2711_LeaveMonitor();
yr2436_PopTo(v2351);
yr1098_EmitS(y_str("return;", 7));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2722_DeclareSignal(void * a_p2723, rt_int a_p2724) {
struct yf2725 F;
memset((void *)&F, 0, sizeof F);
F.p2723 = a_p2723;
F.p2724 = a_p2724;
if ((v2605 == ((void *)0))) {
yr1124_FailS(F.p2724, y_str("signal variables are declared in a monitor (X.E.4)", 50));
}
((*(yR115 *)rt_nil_check(F.p2723))).f_rep = yr1723_CopyRep(((*(yR115 *)rt_nil_check(F.p2723))).f_rep);
((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.p2723))).f_rep))).f_monitor = v2605;
yr1092_Emit(yr2495_Join(yr1021_T(y_str("y_sig_init(&", 12)), yr1680_SymPath(F.p2723), yr2495_Join(yr1021_T(y_str(", ", 2)), yr2699_MonitorPath(v2605), yr1021_T(y_str(");", 2)))));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2729_DeclareSignalArray(void * a_p2730, rt_int a_p2731) {
struct yf2732 F;
memset((void *)&F, 0, sizeof F);
F.p2730 = a_p2730;
F.p2731 = a_p2731;
if ((v2605 == ((void *)0))) {
yr1124_FailS(F.p2731, y_str("signal variables are declared in a monitor (X.E.4)", 50));
}
yr986_SB();
yr997_SA(y_str("{ rt_int yk, yn = y_count(", 26));
yr1004_ST(yr1680_SymPath(F.p2730));
yr997_SA(y_str(", ", 2));
yr1010_SI(((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.p2730))).f_rep))).f_nidx);
yr997_SA(y_str("); for (yk = 0; yk < yn; yk++) y_sig_init((ysig *)y_elem_at(", 60));
yr1004_ST(yr1680_SymPath(F.p2730));
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1771_DescOf(((*(yR115 *)rt_nil_check(F.p2730))).f_rep));
yr997_SA(y_str(", yk), ", 7));
yr1004_ST(yr2699_MonitorPath(v2605));
yr997_SA(y_str("); }", 4));
F.v6326 = yr1016_SE();
yr1092_Emit(F.v6326);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2736_DeviceSignal(void * a_p2737, void * a_p2738) {
struct yf2739 F;
memset((void *)&F, 0, sizeof F);
F.p2737 = a_p2737;
F.p2738 = a_p2738;
yr2075_Manifest(F.p2738, &F.v6338, &F.v6340);
if ((!F.v6338)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2738))).f_line, y_str("an AT location is a manifest constant (XIV.VII)", 47));
}
yr986_SB();
yr997_SA(y_str("y_device(&", 10));
yr1004_ST(yr1680_SymPath(F.p2737));
yr997_SA(y_str(", ", 2));
yr1010_SI(F.v6340);
yr997_SA(y_str(");", 2));
F.v6342 = yr1016_SE();
yr1092_Emit(F.v6342);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2743_Arg(void * a_p2744, rt_int a_p2745) {
struct yf2746 F;
memset((void *)&F, 0, sizeof F);
F.p2744 = a_p2744;
F.p2745 = a_p2745;
F.v6351 = ((*(yR95 *)rt_nil_check(F.p2744))).f_a;
F.v6353 = INT64_C(1);
while ((((!(F.v6351 == ((void *)0)))) && ((F.v6353 < F.p2745)))) {
F.v6351 = ((*(yR95 *)rt_nil_check(F.v6351))).f_next;
F.v6353 = rt_range(rt_add(F.v6353, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v6351 == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2744))).f_line, ((*(yR95 *)rt_nil_check(F.p2744))).f_name, y_str(": too few actual parameters", 27));
}
{ void * rv6358 = F.v6351;
return rv6358; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2750_NArgs(void * a_p2751, rt_int a_p2752) {
struct yf2753 F;
memset((void *)&F, 0, sizeof F);
F.p2751 = a_p2751;
F.p2752 = a_p2752;
if ((!(yr1260_Count(((*(yR95 *)rt_nil_check(F.p2751))).f_a) == F.p2752))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2751))).f_line, ((*(yR95 *)rt_nil_check(F.p2751))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2757_Call1(yarr a_p2759, rt_int a_p2760) {
struct yf2761 F;
memset((void *)&F, 0, sizeof F);
F.p2759 = a_p2759;
F.p2760 = a_p2760;
yr986_SB();
yr997_SA(F.p2759);
yr997_SA(y_str("(", 1));
yr1004_ST(F.p2760);
yr997_SA(y_str(")", 1));
{ rt_int rv6368 = yr1016_SE();
return rv6368; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2765_Addr(rt_int a_p2766) {
struct yf2767 F;
memset((void *)&F, 0, sizeof F);
F.p2766 = a_p2766;
{ rt_int rv6373 = yr2495_Join(yr1021_T(y_str("&", 1)), F.p2766, INT64_C(0));
return rv6373; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2771_StdVar(void * a_p2772, rt_int a_p2773, rt_int * a_p2774, void * * a_p2775) {
struct yf2776 F;
memset((void *)&F, 0, sizeof F);
F.p2772 = a_p2772;
F.p2773 = a_p2773;
F.p2774_o = a_p2774;
F.p2775_o = a_p2775;
yr2113_LValue(F.p2772, &F.p2774, &F.p2775);
if ((((!(F.p2773 == v828))) && ((!(((*(yR100 *)rt_nil_check(F.p2775))).f_kind == F.p2773))))) {
yr986_SB();
yr997_SA(y_str("a ", 2));
if ((F.p2773 == v801)) {
yr997_SA(y_str("file", 4));
} else if ((F.p2773 == v807)) {
yr997_SA(y_str("signal", 6));
} else if ((F.p2773 == v810)) {
yr997_SA(y_str("SEMAPHORE", 9));
} else if ((F.p2773 == v798)) {
yr997_SA(y_str("pointer", 7));
} else {
yr997_SA(y_str("variable", 8));
}
yr997_SA(y_str(" is needed here", 15));
F.v6380 = yr1016_SE();
yr1117_Fail(((*(yR95 *)rt_nil_check(F.p2772))).f_line, F.v6380);
}
(*F.p2774_o) = F.p2774;
(*F.p2775_o) = F.p2775;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2780_NumArg(void * a_p2781, rt_int * a_p2782, void * * a_p2783) {
struct yf2784 F;
memset((void *)&F, 0, sizeof F);
F.p2781 = a_p2781;
F.p2782_o = a_p2782;
F.p2783_o = a_p2783;
yr2140_Expr(F.p2781, ((void *)0), &F.p2782, &F.p2783);
if ((!yr1735_IsNumeric(F.p2783))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2781))).f_line, y_str("a number is needed here", 23));
}
(*F.p2782_o) = F.p2782;
(*F.p2783_o) = F.p2783;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2788_IntArg(void * a_p2789) {
struct yf2790 F;
memset((void *)&F, 0, sizeof F);
F.p2789 = a_p2789;
yr2140_Expr(F.p2789, v1692, &F.v6396, &F.v6398);
if ((!(((*(yR100 *)rt_nil_check(F.v6398))).f_kind == v774))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2789))).f_line, y_str("an integer is needed here", 25));
}
{ rt_int rv6400 = F.v6396;
return rv6400; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2794_CodeInsert(void * a_p2795) {
struct yf2796 F;
memset((void *)&F, 0, sizeof F);
F.p2795 = a_p2795;
F.v6404 = yr2743_Arg(F.p2795, INT64_C(1));
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1)}; y_desc_array(&F.yd_6428, 1, lo, hi, &y_d_int); }
y_init(&F.yd_6428, &F.v6430);
if ((!(((*(yR95 *)rt_nil_check(F.v6404))).f_kind == v741))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2795))).f_line, y_str("a code insert takes a string literal (XIV.XI.5)", 47));
}
F.v6407 = ((*(yR95 *)rt_nil_check(F.v6404))).f_text;
F.v6417 = ((rt_int *)(v890).p)[y_ix1(v890, F.v6407)];
yr986_SB();
F.v6413 = INT64_C(1);
while ((F.v6413 <= F.v6417)) {
F.v6419 = yr1063_TChar(F.v6407, F.v6413);
if ((F.v6419 == 39)) {
F.v6415 = rt_range(rt_add(F.v6413, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1063_TChar(F.v6407, F.v6415) == 39))) {
F.v6415 = rt_range(rt_add(F.v6415, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v6409 = yr1028_Intern(rt_range(rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.v6407)], F.v6413), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v6415, F.v6413)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, yr2058_CharValue(v1696, F.v6409, ((*(yR95 *)rt_nil_check(F.p2795))).f_line))]);
F.v6413 = rt_range(rt_add(F.v6415, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v6419 == 36)) {
F.v6415 = rt_range(rt_add(F.v6413, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((F.v6415 <= F.v6417)) && ((yr968_IsLetter(yr1063_TChar(F.v6407, F.v6415)) || yr974_IsDigit(yr1063_TChar(F.v6407, F.v6415)))))) {
F.v6415 = rt_range(rt_add(F.v6415, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v6409 = yr1028_Intern(rt_range(rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.v6407)], F.v6413), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v6415, F.v6413)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v6421 = yr1621_Find(F.v6409);
if ((F.v6421 == ((void *)0))) {
v909 = INT64_C(0);
v921 = INT64_C(0);
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2795))).f_line, F.v6409, y_str(" in a code insert is not declared here", 38));
}
F.v6421 = yr1686_Real(F.v6421);
if ((((!(((*(yR115 *)rt_nil_check(F.v6421))).f_kind == v831))) && ((!(((*(yR115 *)rt_nil_check(F.v6421))).f_kind == v834))))) {
v909 = INT64_C(0);
v921 = INT64_C(0);
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2795))).f_line, F.v6409, y_str(" in a code insert is not a variable or constant", 47));
}
yr1004_ST(yr2121_Paren(yr1680_SymPath(F.v6421)));
F.v6413 = F.v6415;
} else {
yr991_SC(F.v6419);
F.v6413 = rt_range(rt_add(F.v6413, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
F.v6411 = yr1016_SE();
yr1092_Emit(F.v6411);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2800_StdCall(rt_int a_p2801, void * a_p2802, rt_int a_p2803, rt_int * a_p2804, void * * a_p2805) {
struct yf2806 F;
memset((void *)&F, 0, sizeof F);
F.p2801 = a_p2801;
F.p2802 = a_p2802;
F.p2803 = a_p2803;
F.p2804_o = a_p2804;
F.p2805_o = a_p2805;
F.p2805 = v1698;
F.p2804 = yr1021_T(y_str("((void)0)", 9));
F.v6497 = ((((((((((((((((F.p2801 == v1949)) || ((F.p2801 == v1952))) || ((F.p2801 == v1955))) || ((F.p2801 == v1958))) || ((F.p2801 == v1961))) || ((F.p2801 == v1967))) || ((F.p2801 == v1976))) || ((F.p2801 == v1982))) || ((F.p2801 == v1985))) || ((F.p2801 == v2009))) || ((F.p2801 == v2012))) || ((F.p2801 == v2021))) || ((F.p2801 == v2024))) || ((F.p2801 == v2027))) || ((F.p2801 == v2030)));
if ((F.p2803 && (!F.v6497))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2802))).f_line, ((*(yR95 *)rt_nil_check(F.p2802))).f_name, y_str(" returns a value: it is called in an expression", 47));
}
if (((!F.p2803) && F.v6497)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2802))).f_line, ((*(yR95 *)rt_nil_check(F.p2802))).f_name, y_str(" returns no value", 17));
}
if ((((F.p2801 == v1931)) || ((F.p2801 == v1934)))) {
yr2750_NArgs(F.p2802, INT64_C(2));
yr2140_Expr(yr2743_Arg(F.p2802, INT64_C(1)), ((void *)0), &F.v6469, &F.v6479);
if ((!yr1741_IsArrayLike(F.v6479))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2802))).f_line, ((*(yR95 *)rt_nil_check(F.p2802))).f_name, y_str(" of something that is not an array", 34));
}
F.v6471 = yr2788_IntArg(yr2743_Arg(F.p2802, INT64_C(2)));
yr2075_Manifest(yr2743_Arg(F.p2802, INT64_C(2)), &F.v6493, &F.v6491);
F.p2805 = yr2184_Unbounded(v1692);
if ((F.v6493 && ((((*(yR100 *)rt_nil_check(F.v6479))).f_kind == v792)))) {
if ((((F.v6491 < INT64_C(1))) || ((F.v6491 > ((*(yR100 *)rt_nil_check(F.v6479))).f_nidx)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2802))).f_line, y_str("no such dimension", 17));
}
F.v6485 = ((*(yR100 *)rt_nil_check(F.v6479))).f_idx;
F.lo6510 = INT64_C(2);
F.hi6511 = F.v6491;
{ rt_int hi6515 = F.hi6511;
for (rt_int i6514 = F.lo6510; i6514 <= hi6515; i6514++) { F.c_6513 = i6514;
F.v6485 = ((*(yR100 *)rt_nil_check(F.v6485))).f_link;
if (i6514 == hi6515) break;
}}
F.p2805 = F.v6485;
}
if ((F.p2801 == v1931)) {
F.p2804 = yr2190_Call2(y_str("y_low", 5), F.v6469, F.v6471);
} else {
F.p2804 = yr2190_Call2(y_str("y_high", 6), F.v6469, F.v6471);
}
(*F.p2804_o) = F.p2804;
(*F.p2805_o) = F.p2805;
return;
}
if ((((((F.p2801 == v1937)) || ((F.p2801 == v1940))) || ((F.p2801 == v1943))) || ((F.p2801 == v1946)))) {
yr2750_NArgs(F.p2802, INT64_C(1));
yr2140_Expr(yr2743_Arg(F.p2802, INT64_C(1)), ((void *)0), &F.v6469, &F.v6479);
if ((!yr1729_IsDiscrete(F.v6479))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2802))).f_line, ((*(yR95 *)rt_nil_check(F.p2802))).f_name, y_str(" of something that is not integer or scalar", 43));
}
if ((!(((*(yR100 *)rt_nil_check(F.v6479))).f_elem == ((void *)0)))) {
F.v6479 = ((*(yR100 *)rt_nil_check(F.v6479))).f_elem;
}
if ((((((F.p2801 == v1943)) || ((F.p2801 == v1946)))) && ((((*(yR100 *)rt_nil_check(F.v6479))).f_kind == v774)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2802))).f_line, y_str("FIRST and LAST apply to ordered enumerations and alphabets (XI)", 63));
}
if ((((((*(yR100 *)rt_nil_check(F.v6479))).f_kind == v786)) && (!((*(yR100 *)rt_nil_check(F.v6479))).f_ordered))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2802))).f_line, ((*(yR95 *)rt_nil_check(F.p2802))).f_name, y_str(" applies to ordered enumerations (XI)", 37));
}
F.p2805 = yr2184_Unbounded(F.v6479);
if ((F.p2801 == v1943)) {
F.p2804 = yr1827_LoText(F.v6479);
} else if ((F.p2801 == v1946)) {
F.p2804 = yr1833_HiText(F.v6479);
} else {
yr986_SB();
if ((!(((*(yR100 *)rt_nil_check(F.v6479))).f_lo == INT64_C(0)))) {
yr997_SA(y_str("rt_range(", 9));
}
if ((F.p2801 == v1937)) {
yr997_SA(y_str("rt_add(", 7));
} else {
yr997_SA(y_str("rt_sub(", 7));
}
yr1004_ST(F.v6469);
yr997_SA(y_str(", 1)", 4));
if ((!(((*(yR100 *)rt_nil_check(F.v6479))).f_lo == INT64_C(0)))) {
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1827_LoText(F.v6479));
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1833_HiText(F.v6479));
yr997_SA(y_str(")", 1));
}
F.p2804 = yr1016_SE();
}
if ((!(((*(yR100 *)rt_nil_check(F.v6479))).f_kind == v774))) {
F.p2805 = F.v6479;
}
(*F.p2804_o) = F.p2804;
(*F.p2805_o) = F.p2805;
return;
}
if ((F.p2801 == v1949)) {
yr2750_NArgs(F.p2802, INT64_C(1));
yr2771_StdVar(yr2743_Arg(F.p2802, INT64_C(1)), v798, &F.v6469, &F.v6479);
if ((((*(yR100 *)rt_nil_check(F.v6479))).f_elem == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2802))).f_line, ((*(yR100 *)rt_nil_check(F.v6479))).f_forward, y_str(" is not declared", 16));
}
F.v6485 = ((*(yR100 *)rt_nil_check(F.v6479))).f_elem;
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(F.v6469);
yr997_SA(y_str(" = rt_alloc(sizeof(", 19));
yr1004_ST(yr1765_CType(F.v6485));
yr997_SA(y_str("));", 3));
if (yr1753_Deep(F.v6485)) {
yr997_SA(y_str(" y_init(", 8));
yr1004_ST(yr1771_DescOf(F.v6485));
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6469);
yr997_SA(y_str(");", 2));
}
yr997_SA(y_str(" })", 3));
F.p2804 = yr1016_SE();
(*F.p2804_o) = F.p2804;
(*F.p2805_o) = F.p2805;
return;
}
if ((F.p2801 == v2027)) {
yr2750_NArgs(F.p2802, INT64_C(1));
yr2771_StdVar(yr2743_Arg(F.p2802, INT64_C(1)), v798, &F.v6469, &F.v6479);
F.p2804 = yr2495_Join(yr1021_T(y_str("({ free(", 8)), F.v6469, yr2495_Join(yr1021_T(y_str("); ", 3)), F.v6469, yr1021_T(y_str(" = 0; })", 8))));
(*F.p2804_o) = F.p2804;
(*F.p2805_o) = F.p2805;
return;
}
if ((F.p2801 == v1952)) {
yr2750_NArgs(F.p2802, INT64_C(3));
yr2771_StdVar(yr2743_Arg(F.p2802, INT64_C(1)), v801, &F.v6469, &F.v6479);
yr2140_Expr(yr2743_Arg(F.p2802, INT64_C(2)), v1696, &F.v6471, &F.v6481);
if ((!yr1747_IsString(F.v6481))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2802))).f_line, y_str("OPEN takes the name of the file as a string (XII.A)", 51));
}
yr2140_Expr(yr2743_Arg(F.p2802, INT64_C(3)), v2810, &F.v6473, &F.v6483);
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.p2802))).f_line, v2810, F.v6483);
yr986_SB();
yr997_SA(y_str("y_open(&", 8));
yr1004_ST(F.v6469);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6471);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6473);
yr997_SA(y_str(")", 1));
F.p2804 = yr1016_SE();
(*F.p2804_o) = F.p2804;
(*F.p2805_o) = F.p2805;
return;
}
if ((((F.p2801 == v1955)) || ((F.p2801 == v1964)))) {
yr2750_NArgs(F.p2802, INT64_C(1));
yr2771_StdVar(yr2743_Arg(F.p2802, INT64_C(1)), v801, &F.v6469, &F.v6479);
if ((F.p2801 == v1955)) {
F.p2804 = yr2757_Call1(y_str("y_close", 7), yr2765_Addr(F.v6469));
} else {
F.p2805 = v1694;
F.p2804 = yr2757_Call1(y_str("y_check_eof", 11), yr2765_Addr(F.v6469));
}
(*F.p2804_o) = F.p2804;
(*F.p2805_o) = F.p2805;
return;
}
if ((F.p2801 == v1958)) {
yr2750_NArgs(F.p2802, INT64_C(2));
yr2771_StdVar(yr2743_Arg(F.p2802, INT64_C(1)), v801, &F.v6469, &F.v6479);
yr2771_StdVar(yr2743_Arg(F.p2802, INT64_C(2)), v828, &F.v6471, &F.v6481);
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.p2802))).f_line, ((*(yR100 *)rt_nil_check(F.v6479))).f_elem, F.v6481);
if ((yr1753_Deep(F.v6481) || ((((*(yR100 *)rt_nil_check(F.v6481))).f_kind == v798)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2802))).f_line, y_str("files of this implementation hold no arrays or pointers", 55));
}
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(yr1765_CType(F.v6481));
yr997_SA(y_str(" g; y_get(&", 11));
yr1004_ST(F.v6469);
yr997_SA(y_str(", &g, sizeof g); ", 17));
yr1004_ST(F.v6471);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2083_Convert(yr1021_T(y_str("g", 1)), F.v6481, ((*(yR100 *)rt_nil_check(F.v6479))).f_elem));
yr997_SA(y_str("; })", 4));
F.p2804 = yr1016_SE();
(*F.p2804_o) = F.p2804;
(*F.p2805_o) = F.p2805;
return;
}
if ((F.p2801 == v1961)) {
yr2750_NArgs(F.p2802, INT64_C(2));
yr2771_StdVar(yr2743_Arg(F.p2802, INT64_C(1)), v801, &F.v6469, &F.v6479);
yr2140_Expr(yr2743_Arg(F.p2802, INT64_C(2)), ((*(yR100 *)rt_nil_check(F.v6479))).f_elem, &F.v6471, &F.v6481);
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.p2802))).f_line, ((*(yR100 *)rt_nil_check(F.v6479))).f_elem, F.v6481);
if ((yr1753_Deep(F.v6481) || ((((*(yR100 *)rt_nil_check(F.v6481))).f_kind == v798)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2802))).f_line, y_str("files of this implementation hold no arrays or pointers", 55));
}
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(yr1765_CType(((*(yR100 *)rt_nil_check(F.v6479))).f_elem));
yr997_SA(y_str(" pv = ", 6));
yr1004_ST(yr2083_Convert(F.v6471, ((*(yR100 *)rt_nil_check(F.v6479))).f_elem, F.v6481));
yr997_SA(y_str("; y_put(&", 9));
yr1004_ST(F.v6469);
yr997_SA(y_str(", &pv, sizeof pv); })", 21));
F.p2804 = yr1016_SE();
(*F.p2804_o) = F.p2804;
(*F.p2805_o) = F.p2805;
return;
}
if ((F.p2801 == v1967)) {
F.v6487 = yr1260_Count(((*(yR95 *)rt_nil_check(F.p2802))).f_a);
if ((((F.v6487 < INT64_C(5))) || ((!((rt_mod((rt_sub(F.v6487, INT64_C(2))), INT64_C(3))) == INT64_C(0)))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2802))).f_line, y_str("MOVE takes an object, an index and triples", 42));
}
yr2771_StdVar(yr2743_Arg(F.p2802, INT64_C(1)), v828, &F.v6469, &F.v6479);
if (((!((((((*(yR100 *)rt_nil_check(F.v6479))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.v6479))).f_kind == v813))))) || ((!(((*(yR100 *)rt_nil_check(F.v6479))).f_nidx == INT64_C(1)))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2802))).f_line, y_str("MOVE works on one-dimensional arrays", 36));
}
F.v6471 = yr2788_IntArg(yr2743_Arg(F.p2802, INT64_C(2)));
F.v6477 = yr1146_Fresh(y_str("at", 2));
yr986_SB();
yr997_SA(y_str("({ rt_int ", 10));
yr1004_ST(F.v6477);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.v6471);
yr997_SA(y_str(";", 1));
F.p2804 = yr1016_SE();
F.v6489 = INT64_C(3);
while ((F.v6489 < F.v6487)) {
yr2140_Expr(yr2743_Arg(F.p2802, F.v6489), ((*(yR100 *)rt_nil_check(F.v6479))).f_elem, &F.v6473, &F.v6483);
if (((!yr1741_IsArrayLike(F.v6483)) || (!yr1783_SameType(((*(yR100 *)rt_nil_check(F.v6479))).f_elem, ((*(yR100 *)rt_nil_check(F.v6483))).f_elem)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2802))).f_line, y_str("MOVE: the components differ in type", 35));
}
F.v6475 = yr2788_IntArg(yr2743_Arg(F.p2802, rt_range(rt_add(F.v6489, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v6471 = yr2788_IntArg(yr2743_Arg(F.p2802, rt_range(rt_add(F.v6489, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr986_SB();
yr1004_ST(F.p2804);
yr997_SA(y_str(" { rt_int mi = ", 15));
yr1004_ST(F.v6475);
yr997_SA(y_str(", mj = ", 7));
yr1004_ST(F.v6471);
yr997_SA(y_str("; y_move(&", 10));
yr1004_ST(F.v6469);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6477);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6473);
yr997_SA(y_str(", mi, mj, ", 10));
yr1004_ST(yr1771_DescOf(((*(yR100 *)rt_nil_check(F.v6479))).f_elem));
yr997_SA(y_str("); if (mj >= mi) ", 17));
yr1004_ST(F.v6477);
yr997_SA(y_str(" += mj - mi + 1; }", 18));
F.p2804 = yr1016_SE();
F.v6489 = rt_range(rt_add(F.v6489, INT64_C(3)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.p2804 = yr2495_Join(F.p2804, yr1021_T(y_str(" })", 3)), INT64_C(0));
(*F.p2804_o) = F.p2804;
(*F.p2805_o) = F.p2805;
return;
}
if ((((F.p2801 == v1970)) || ((F.p2801 == v1973)))) {
yr2750_NArgs(F.p2802, INT64_C(2));
F.v6469 = yr2465_Cond(yr2743_Arg(F.p2802, INT64_C(1)));
F.v6471 = yr2465_Cond(yr2743_Arg(F.p2802, INT64_C(2)));
F.p2805 = v1694;
if ((F.p2801 == v1970)) {
F.p2804 = yr2199_Infix(yr2121_Paren(yr2199_Infix(F.v6469, y_str("!=", 2), yr1021_T(y_str("0", 1)))), y_str("&", 1), yr2121_Paren(yr2199_Infix(F.v6471, y_str("!=", 2), yr1021_T(y_str("0", 1)))));
} else {
F.p2804 = yr2199_Infix(yr2121_Paren(yr2199_Infix(F.v6469, y_str("!=", 2), yr1021_T(y_str("0", 1)))), y_str("|", 1), yr2121_Paren(yr2199_Infix(F.v6471, y_str("!=", 2), yr1021_T(y_str("0", 1)))));
}
(*F.p2804_o) = F.p2804;
(*F.p2805_o) = F.p2805;
return;
}
if ((F.p2801 == v1976)) {
yr2750_NArgs(F.p2802, INT64_C(1));
F.p2804 = yr2757_Call1(y_str("rt_delay", 8), yr2788_IntArg(yr2743_Arg(F.p2802, INT64_C(1))));
(*F.p2804_o) = F.p2804;
(*F.p2805_o) = F.p2805;
return;
}
if ((F.p2801 == v1979)) {
yr2750_NArgs(F.p2802, INT64_C(0));
F.p2805 = yr2184_Unbounded(v1692);
F.p2804 = yr1021_T(y_str("rt_time()", 9));
(*F.p2804_o) = F.p2804;
(*F.p2805_o) = F.p2805;
return;
}
if (((((F.p2801 == v1982)) || ((F.p2801 == v1985))) || ((F.p2801 == v1988)))) {
yr2771_StdVar(yr2743_Arg(F.p2802, INT64_C(1)), v807, &F.v6469, &F.v6479);
if ((F.p2801 == v1982)) {
if ((yr1260_Count(((*(yR95 *)rt_nil_check(F.p2802))).f_a) == INT64_C(1))) {
F.v6471 = yr1021_T(y_str("1", 1));
} else {
yr2750_NArgs(F.p2802, INT64_C(2));
F.v6471 = yr2788_IntArg(yr2743_Arg(F.p2802, INT64_C(2)));
}
F.p2804 = yr2190_Call2(y_str("y_wait", 6), yr2765_Addr(F.v6469), F.v6471);
} else {
yr2750_NArgs(F.p2802, INT64_C(1));
if ((F.p2801 == v1985)) {
F.p2804 = yr2757_Call1(y_str("y_send", 6), yr2765_Addr(F.v6469));
} else {
F.p2805 = v1694;
F.p2804 = yr2757_Call1(y_str("y_awaited", 9), yr2765_Addr(F.v6469));
}
}
(*F.p2804_o) = F.p2804;
(*F.p2805_o) = F.p2805;
return;
}
if (((((F.p2801 == v1991)) || ((F.p2801 == v1994))) || ((F.p2801 == v1997)))) {
yr2750_NArgs(F.p2802, INT64_C(1));
yr2780_NumArg(yr2743_Arg(F.p2802, INT64_C(1)), &F.v6469, &F.v6479);
F.p2805 = yr2184_Unbounded(v1692);
if ((((*(yR100 *)rt_nil_check(F.v6479))).f_kind == v774)) {
F.p2804 = F.v6469;
} else if ((F.p2801 == v1991)) {
F.p2804 = yr2757_Call1(y_str("y_floor", 7), F.v6469);
} else if ((F.p2801 == v1994)) {
F.p2804 = yr2757_Call1(y_str("y_ceiling", 9), F.v6469);
} else {
F.p2804 = yr2757_Call1(y_str("y_near_integer", 14), F.v6469);
}
(*F.p2804_o) = F.p2804;
(*F.p2805_o) = F.p2805;
return;
}
if ((F.p2801 == v2003)) {
yr2750_NArgs(F.p2802, INT64_C(1));
yr2780_NumArg(yr2743_Arg(F.p2802, INT64_C(1)), &F.v6469, &F.v6479);
F.p2805 = v1704;
F.p2804 = yr2495_Join(yr1021_T(y_str("((double)(", 10)), F.v6469, yr1021_T(y_str("))", 2)));
(*F.p2804_o) = F.p2804;
(*F.p2805_o) = F.p2805;
return;
}
if ((F.p2801 == v2000)) {
yr2750_NArgs(F.p2802, INT64_C(2));
yr2780_NumArg(yr2743_Arg(F.p2802, INT64_C(1)), &F.v6469, &F.v6479);
yr2780_NumArg(yr2743_Arg(F.p2802, INT64_C(2)), &F.v6471, &F.v6481);
F.p2805 = v1706;
F.p2804 = yr2190_Call2(y_str("y_near_fixed", 12), yr2495_Join(yr1021_T(y_str("(double)(", 9)), F.v6469, yr1021_T(y_str(")", 1))), F.v6471);
(*F.p2804_o) = F.p2804;
(*F.p2805_o) = F.p2805;
return;
}
if ((F.p2801 == v2006)) {
yr2750_NArgs(F.p2802, INT64_C(3));
yr2780_NumArg(yr2743_Arg(F.p2802, INT64_C(1)), &F.v6469, &F.v6479);
yr2780_NumArg(yr2743_Arg(F.p2802, INT64_C(2)), &F.v6471, &F.v6481);
yr2780_NumArg(yr2743_Arg(F.p2802, INT64_C(3)), &F.v6473, &F.v6483);
F.p2805 = v1706;
F.p2804 = yr2495_Join(yr1021_T(y_str("y_fixed_div(", 12)), F.v6469, yr2495_Join(yr1021_T(y_str(", ", 2)), F.v6471, yr2495_Join(yr1021_T(y_str(", ", 2)), F.v6473, yr1021_T(y_str(")", 1)))));
(*F.p2804_o) = F.p2804;
(*F.p2805_o) = F.p2805;
return;
}
if (((((F.p2801 == v2009)) || ((F.p2801 == v2012))) || ((F.p2801 == v2015)))) {
yr2750_NArgs(F.p2802, INT64_C(1));
yr2771_StdVar(yr2743_Arg(F.p2802, INT64_C(1)), v810, &F.v6469, &F.v6479);
if ((F.p2801 == v2009)) {
F.p2804 = yr2757_Call1(y_str("rt_region_enter", 15), yr2765_Addr(F.v6469));
} else if ((F.p2801 == v2012)) {
F.p2804 = yr2757_Call1(y_str("rt_region_leave", 15), yr2765_Addr(F.v6469));
} else {
F.p2805 = v1694;
F.p2804 = yr2757_Call1(y_str("y_cond_claim", 12), yr2765_Addr(F.v6469));
}
(*F.p2804_o) = F.p2804;
(*F.p2805_o) = F.p2805;
return;
}
if ((F.p2801 == v2018)) {
yr2750_NArgs(F.p2802, INT64_C(0));
F.p2805 = yr2184_Unbounded(v1692);
F.p2804 = yr1021_T(y_str("y_self()", 8));
(*F.p2804_o) = F.p2804;
(*F.p2805_o) = F.p2805;
return;
}
if ((F.p2801 == v2021)) {
yr2750_NArgs(F.p2802, INT64_C(2));
F.p2804 = yr2190_Call2(y_str("y_change_priority", 17), yr2788_IntArg(yr2743_Arg(F.p2802, INT64_C(1))), yr2788_IntArg(yr2743_Arg(F.p2802, INT64_C(2))));
(*F.p2804_o) = F.p2804;
(*F.p2805_o) = F.p2805;
return;
}
if ((F.p2801 == v2024)) {
yr2750_NArgs(F.p2802, INT64_C(1));
F.p2804 = yr2757_Call1(y_str("y_raise_termination", 19), yr2788_IntArg(yr2743_Arg(F.p2802, INT64_C(1))));
(*F.p2804_o) = F.p2804;
(*F.p2805_o) = F.p2805;
return;
}
if ((F.p2801 == v2030)) {
yr2750_NArgs(F.p2802, INT64_C(1));
yr2794_CodeInsert(F.p2802);
(*F.p2804_o) = F.p2804;
(*F.p2805_o) = F.p2805;
return;
}
if ((((F.p2801 == v2033)) || ((F.p2801 == v2036)))) {
yr2750_NArgs(F.p2802, INT64_C(1));
yr2140_Expr(yr2743_Arg(F.p2802, INT64_C(1)), ((void *)0), &F.v6469, &F.v6479);
F.p2805 = yr2184_Unbounded(v1692);
if ((F.p2801 == v2033)) {
F.p2804 = yr2495_Join(yr1021_T(y_str("((rt_int)(intptr_t)&(", 21)), F.v6469, yr1021_T(y_str("))", 2)));
} else {
F.p2804 = yr2495_Join(yr1021_T(y_str("((rt_int)sizeof(", 16)), F.v6469, yr1021_T(y_str("))", 2)));
}
(*F.p2804_o) = F.p2804;
(*F.p2805_o) = F.p2805;
return;
}
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2802))).f_line, ((*(yR95 *)rt_nil_check(F.p2802))).f_name, y_str(" is not translated", 18));
(*F.p2804_o) = F.p2804;
(*F.p2805_o) = F.p2805;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2814_StdRep(yarr a_p2816, void * a_p2817) {
struct yf2818 F;
memset((void *)&F, 0, sizeof F);
F.p2816 = a_p2816;
F.p2817 = a_p2817;
F.v6687 = yr1597_NewSym(v840, yr1041_N(F.p2816));
((*(yR115 *)rt_nil_check(F.v6687))).f_rep = F.p2817;
yr1653_Define(F.v6687, INT64_C(0));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2822_StdOp(yarr a_p2824, rt_int a_p2825) {
struct yf2826 F;
memset((void *)&F, 0, sizeof F);
F.p2824 = a_p2824;
F.p2825 = a_p2825;
F.v6693 = yr1597_NewSym(v861, yr1041_N(F.p2824));
((*(yR115 *)rt_nil_check(F.v6693))).f_mval = F.p2825;
yr1653_Define(F.v6693, INT64_C(0));
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2830_LitList(yarr a_p2832, yarr a_p2833, yarr a_p2834, rt_int a_p2835) {
struct yf2836 F;
memset((void *)&F, 0, sizeof F);
F.p2832 = a_p2832;
F.p2833 = a_p2833;
F.p2834 = a_p2834;
F.p2835 = a_p2835;
F.v6701 = ((void *)0);
F.v6703 = ((void *)0);
F.v6705 = ((void *)0);
F.v6705 = yr1245_NewNode(v639, INT64_C(0));
((*(yR95 *)rt_nil_check(F.v6705))).f_name = yr1041_N(F.p2832);
yr1252_Link(&F.v6701, &F.v6703, F.v6705);
F.v6705 = yr1245_NewNode(v639, INT64_C(0));
((*(yR95 *)rt_nil_check(F.v6705))).f_name = yr1041_N(F.p2833);
yr1252_Link(&F.v6701, &F.v6703, F.v6705);
if (F.p2835) {
F.v6705 = yr1245_NewNode(v639, INT64_C(0));
((*(yR95 *)rt_nil_check(F.v6705))).f_name = yr1041_N(F.p2834);
yr1252_Link(&F.v6701, &F.v6703, F.v6705);
}
{ void * rv6709 = F.v6701;
return rv6709; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2840_Abstract(rt_int a_p2841, yarr a_p2843) {
struct yf2844 F;
memset((void *)&F, 0, sizeof F);
F.p2841 = a_p2841;
F.p2843 = a_p2843;
F.v6714 = yr1716_NewRep(F.p2841, yr1041_N(F.p2843));
((*(yR100 *)rt_nil_check(F.v6714))).f_abstract = 1;
{ void * rv6716 = F.v6714;
return rv6716; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2848_Predefine(void) {
struct yf2849 F;
memset((void *)&F, 0, sizeof F);
yr1604_OpenScope(0);
((void * *)(v2614).p)[y_ix1(v2614, v1570)] = ((void *)0);
v1692 = yr2840_Abstract(v774, y_str("INTEGER", 7));
v1706 = yr2840_Abstract(v777, y_str("FIXED", 5));
v1704 = yr2840_Abstract(v780, y_str("FLOATING", 8));
v1708 = yr1716_NewRep(v807, yr1041_N(y_str("SIGNAL", 6)));
v1710 = yr1716_NewRep(v810, yr1041_N(y_str("SEMAPHORE", 9)));
v1698 = yr1716_NewRep(v822, yr1041_N(y_str("no value", 8)));
v1712 = yr1716_NewRep(v828, yr1041_N(y_str("any", 3)));
v1694 = yr1716_NewRep(v783, yr1041_N(y_str("BOOLEAN", 7)));
((*(yR100 *)rt_nil_check(v1694))).f_lits = yr2830_LitList(y_str("FALSE", 5), y_str("TRUE", 4), y_str("", 0), 0);
((*(yR100 *)rt_nil_check(v1694))).f_nlits = INT64_C(2);
yr1852_SetRange(v1694, INT64_C(0), INT64_C(1));
yr1846_DefineLits(v1694);
v1696 = yr1716_NewRep(v789, yr1041_N(y_str("ASCII", 5)));
((*(yR100 *)rt_nil_check(v1696))).f_ordered = 1;
((*(yR100 *)rt_nil_check(v1696))).f_nlits = INT64_C(128);
yr1852_SetRange(v1696, INT64_C(0), INT64_C(127));
v2810 = yr1716_NewRep(v786, yr1041_N(y_str("OPEN_MODE", 9)));
((*(yR100 *)rt_nil_check(v2810))).f_lits = yr2830_LitList(y_str("READ", 4), y_str("WRITE", 5), y_str("APPEND", 6), 1);
((*(yR100 *)rt_nil_check(v2810))).f_nlits = INT64_C(3);
yr1852_SetRange(v2810, INT64_C(0), INT64_C(2));
yr1846_DefineLits(v2810);
yr2814_StdRep(y_str("INTEGER", 7), v1692);
yr2814_StdRep(y_str("FIXED", 5), v1706);
yr2814_StdRep(y_str("FLOATING", 8), v1704);
yr2814_StdRep(y_str("BOOLEAN", 7), v1694);
yr2814_StdRep(y_str("SIGNAL", 6), v1708);
yr2814_StdRep(y_str("SEMAPHORE", 9), v1710);
yr2814_StdRep(y_str("ASCII", 5), v1696);
yr2814_StdRep(y_str("STANDARD_ALPHABET", 17), v1696);
yr2814_StdRep(y_str("OPEN_MODE", 9), v2810);
yr2822_StdOp(y_str("LOW", 3), v1931);
yr2822_StdOp(y_str("HIGH", 4), v1934);
yr2822_StdOp(y_str("SUCC", 4), v1937);
yr2822_StdOp(y_str("PRED", 4), v1940);
yr2822_StdOp(y_str("FIRST", 5), v1943);
yr2822_StdOp(y_str("LAST", 4), v1946);
yr2822_StdOp(y_str("NEW", 3), v1949);
yr2822_StdOp(y_str("OPEN", 4), v1952);
yr2822_StdOp(y_str("CLOSE", 5), v1955);
yr2822_StdOp(y_str("GET", 3), v1958);
yr2822_StdOp(y_str("PUT", 3), v1961);
yr2822_StdOp(y_str("CHECK_EOF", 9), v1964);
yr2822_StdOp(y_str("MOVE", 4), v1967);
yr2822_StdOp(y_str("AND_LONG", 8), v1970);
yr2822_StdOp(y_str("OR_LONG", 7), v1973);
yr2822_StdOp(y_str("DELAY", 5), v1976);
yr2822_StdOp(y_str("CLOCK_TIME", 10), v1979);
yr2822_StdOp(y_str("WAIT", 4), v1982);
yr2822_StdOp(y_str("SEND", 4), v1985);
yr2822_StdOp(y_str("AWAITED", 7), v1988);
yr2822_StdOp(y_str("FLOOR", 5), v1991);
yr2822_StdOp(y_str("CEILING", 7), v1994);
yr2822_StdOp(y_str("NEAR_INTEGER", 12), v1997);
yr2822_StdOp(y_str("NEAR_FIXED", 10), v2000);
yr2822_StdOp(y_str("NEAR_FLOATING", 13), v2003);
yr2822_StdOp(y_str("FIXED_DIV", 9), v2006);
yr2822_StdOp(y_str("CLAIM", 5), v2009);
yr2822_StdOp(y_str("RELEASE", 7), v2012);
yr2822_StdOp(y_str("CONDITIONAL_CLAIM", 17), v2015);
yr2822_StdOp(y_str("PROCESS_IDENTITY", 16), v2018);
yr2822_StdOp(y_str("CHANGE_PRIORITY", 15), v2021);
yr2822_StdOp(y_str("RAISE_PROCESS_TERMINATION", 25), v2024);
yr2822_StdOp(y_str("FREE_POINTER", 12), v2027);
yr2822_StdOp(y_str("C_CODE_INSERT", 13), v2030);
yr2822_StdOp(y_str("ADDR", 4), v2033);
yr2822_StdOp(y_str("EXTENT", 6), v2036);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2853_Translate(void) {
struct yf2854 F;
memset((void *)&F, 0, sizeof F);
F.v6794 = v2812;
yr1604_OpenScope(0);
((void * *)(v2614).p)[y_ix1(v2614, v1570)] = ((void *)0);
v1576 = INT64_C(0);
((void * *)(v1595).p)[y_ix1(v1595, v1570)] = v2812;
while ((!(F.v6794 == ((void *)0)))) {
if ((((*(yR95 *)rt_nil_check(F.v6794))).f_ival == INT64_C(0))) {
yr2663_CompileModule(F.v6794);
}
F.v6794 = ((*(yR95 *)rt_nil_check(F.v6794))).f_next;
}
yr2687_AwaitProcesses();
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2858_WriteProgram(void) {
struct yf2859 F;
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
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1593, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1593, &v1595);
v1714 = ((void *)0);
v1931 = INT64_C(1);
v1934 = INT64_C(2);
v1937 = INT64_C(3);
v1940 = INT64_C(4);
v1943 = INT64_C(5);
v1946 = INT64_C(6);
v1949 = INT64_C(7);
v1952 = INT64_C(8);
v1955 = INT64_C(9);
v1958 = INT64_C(10);
v1961 = INT64_C(11);
v1964 = INT64_C(12);
v1967 = INT64_C(13);
v1970 = INT64_C(14);
v1973 = INT64_C(15);
v1976 = INT64_C(16);
v1979 = INT64_C(17);
v1982 = INT64_C(18);
v1985 = INT64_C(19);
v1988 = INT64_C(20);
v1991 = INT64_C(21);
v1994 = INT64_C(22);
v1997 = INT64_C(23);
v2000 = INT64_C(24);
v2003 = INT64_C(25);
v2006 = INT64_C(26);
v2009 = INT64_C(27);
v2012 = INT64_C(28);
v2015 = INT64_C(29);
v2018 = INT64_C(30);
v2021 = INT64_C(31);
v2024 = INT64_C(32);
v2027 = INT64_C(33);
v2030 = INT64_C(34);
v2033 = INT64_C(35);
v2036 = INT64_C(36);
v2039 = INT64_C(0);
v2042 = ((void *)0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_2237, 1, lo, hi, &y_d_int); }
y_init(&yd_2237, &v2239);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_2246, 1, lo, hi, &y_d_ptr); }
y_init(&yd_2246, &v2248);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_2255, 1, lo, hi, &y_d_ptr); }
y_init(&yd_2255, &v2257);
v2259 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2344, 1, lo, hi, &y_d_int); }
y_init(&yd_2344, &v2346);
v2348 = INT64_C(0);
v2351 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2359, 1, lo, hi, &y_d_int); }
y_init(&yd_2359, &v2361);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2368, 1, lo, hi, &y_d_int); }
y_init(&yd_2368, &v2370);
v2372 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2380, 1, lo, hi, &y_d_int); }
y_init(&yd_2380, &v2382);
v2384 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2392, 1, lo, hi, &y_d_int); }
y_init(&yd_2392, &v2394);
y_init(&yd_2392, &v2396);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2403, 1, lo, hi, &y_d_int); }
y_init(&yd_2403, &v2405);
v2407 = INT64_C(0);
v2410 = INT64_C(0);
v2413 = ((void *)0);
v2415 = 0;
v2605 = ((void *)0);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_2612, 1, lo, hi, &y_d_ptr); }
y_init(&yd_2612, &v2614);
v2631 = INT64_C(0);
yr963_InitChars();
yr1177_InitWords();
v1239 = yr1041_N(y_str("FROM", 4));
v1242 = yr1041_N(y_str("DIMENSION", 9));
v2039 = yr1021_T(y_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP DEL SQ DQ ", 128));
y_open(&v881, y_str("OUTPUT", 6), 1);
yr1182_ReadSource();
yr1229_Lex();
v2812 = yr1554_ParseProgram();
yr2848_Predefine();
yr2853_Translate();
yr2858_WriteProgram();
y_close(&v881);
}
int main(int argc, char **argv) {
y_lang();
rt_init(argc, argv);
y_elaborate();
rt_main_done();
return 0;
}
