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
struct yf1821;
struct yf1828;
struct yf1834;
struct yf1842;
struct yf1848;
struct yf1854;
struct yf1861;
struct yf1867;
struct yf1875;
struct yf1881;
struct yf1889;
struct yf1896;
struct yf1901;
struct yf1907;
struct yf1920;
struct yf1931;
struct yf1939;
struct yf1946;
struct yf2066;
struct yf2073;
struct yf2081;
struct yf2090;
struct yf2098;
struct yf2105;
struct yf2113;
struct yf2121;
struct yf2129;
struct yf2139;
struct yf2149;
struct yf2155;
struct yf2161;
struct yf2169;
struct yf2175;
struct yf2182;
struct yf2188;
struct yf2197;
struct yf2205;
struct yf2214;
struct yf2222;
struct yf2232;
struct yf2238;
struct yf2247;
struct yf2256;
struct yf2265;
struct yf2271;
struct yf2280;
struct yf2317;
struct yf2325;
struct yf2331;
struct yf2340;
struct yf2348;
struct yf2355;
struct yf2364;
struct yf2370;
struct yf2381;
struct yf2388;
struct yf2398;
struct yf2408;
struct yf2418;
struct yf2427;
struct yf2435;
struct yf2522;
struct yf2532;
struct yf2538;
struct yf2543;
struct yf2549;
struct yf2555;
struct yf2561;
struct yf2567;
struct yf2574;
struct yf2579;
struct yf2585;
struct yf2591;
struct yf2599;
struct yf2605;
struct yf2611;
struct yf2617;
struct yf2623;
struct yf2629;
struct yf2635;
struct yf2641;
struct yf2647;
struct yf2654;
struct yf2661;
struct yf2667;
struct yf2675;
struct yf2681;
struct yf2688;
struct yf2695;
struct yf2701;
struct yf2719;
struct yf2727;
struct yf2737;
struct yf2744;
struct yf2752;
struct yf2759;
struct yf2765;
struct yf2771;
struct yf2777;
struct yf2783;
struct yf2788;
struct yf2795;
struct yf2801;
struct yf2807;
struct yf2812;
struct yf2818;
struct yf2825;
struct yf2832;
struct yf2839;
struct yf2846;
struct yf2853;
struct yf2861;
struct yf2867;
struct yf2876;
struct yf2884;
struct yf2890;
struct yf2896;
struct yf2906;
struct yf2918;
struct yf2926;
struct yf2936;
struct yf2944;
struct yf2949;
struct yf2954;
struct yf2959;
struct yR95 { rt_int f_kind; rt_int f_line; rt_int f_ival; rt_int f_flag; rt_int f_name; rt_int f_text; void * f_a; void * f_b; void * f_c; void * f_d; void * f_e; void * f_next; void * f_rep; void * f_sym; };
struct yR100 { rt_int f_kind; rt_int f_tid; rt_int f_tname; rt_int f_lo; rt_int f_hi; rt_int f_mlo; rt_int f_mhi; rt_int f_hasm; rt_int f_scale; rt_int f_prec; void * f_elem; void * f_idx; rt_int f_nidx; void * f_link; void * f_lits; rt_int f_nlits; void * f_fields; void * f_selector; rt_int f_cname; rt_int f_dname; rt_int f_dlevel; rt_int f_deep; rt_int f_abstract; rt_int f_opaque; rt_int f_opaqueops; rt_int f_ordered; rt_int f_forward; rt_int f_fwdscope; void * f_monitor; rt_int f_serial; rt_int f_sig; };
struct yR105 { rt_int f_name; void * f_rep; rt_int f_isconst; rt_int f_variant; void * f_labels; void * f_next; };
struct yR110 { rt_int f_name; rt_int f_cls; void * f_rep; rt_int f_cname; void * f_next; };
struct yR115 { rt_int f_kind; rt_int f_name; void * f_rep; rt_int f_cname; rt_int f_level; rt_int f_byref; rt_int f_readonly; rt_int f_mval; rt_int f_hasmv; void * f_params; rt_int f_nparams; void * f_ret; rt_int f_func; void * f_decl; rt_int f_depth; void * f_target; void * f_members; void * f_mnext; void * f_chain; void * f_stack; void * f_alt; void * f_monitor; rt_int f_serial; void * f_calls; };
struct yR120 { void * f_syms; rt_int f_closed; void * f_module; rt_int f_level; void * f_deferred; void * f_up; };
struct yR125 { rt_int f_t; void * f_next; };
struct yR130 { void * f_head; void * f_tail; };
struct yf964 { void *up;
rt_int v2963;
rt_int c_2966;
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
rt_int lo3002;
rt_int hi3003;
rt_int c_3005;
};
struct yf1006 { void *up;
rt_int p1005;
rt_int v3011;
};
struct yf1012 { void *up;
rt_int p1011;
ydesc yd_3024;
yarr v3026;
rt_int v3028;
rt_int v3031;
};
struct yf1017 { void *up;
rt_int v3050;
rt_int lo3061;
rt_int hi3062;
rt_int c_3064;
};
struct yf1024 { void *up;
yarr p1023;
};
struct yf1031 { void *up;
rt_int p1029;
rt_int p1030;
rt_int v3075;
rt_int v3078;
rt_int v3080;
rt_int lo3085;
rt_int hi3086;
rt_int c_3088;
rt_int lo3106;
rt_int hi3107;
rt_int c_3109;
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
rt_int lo3137;
rt_int hi3138;
rt_int c_3140;
};
struct yf1059 { void *up;
rt_int p1056;
yarr p1058;
rt_int v3153;
rt_int lo3169;
rt_int hi3170;
rt_int c_3172;
};
struct yf1066 { void *up;
rt_int p1064;
rt_int p1065;
};
struct yf1073 { void *up;
yR130 * p1071;
rt_int p1072;
void * v3193;
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
rt_int v3207;
};
struct yf1113 { void *up;
yR130 p1112;
void * v3214;
};
struct yf1120 { void *up;
rt_int p1118;
rt_int p1119;
rt_int v3220;
};
struct yf1128 { void *up;
rt_int p1125;
yarr p1127;
};
struct yf1137 { void *up;
rt_int p1133;
rt_int p1134;
yarr p1136;
rt_int v3234;
};
struct yf1142 { void *up;
};
struct yf1149 { void *up;
yarr p1148;
rt_int v3242;
};
struct yf1178 { void *up;
rt_int v3246;
rt_int v3248;
rt_int v3250;
rt_int lo3267;
rt_int hi3268;
rt_int c_3270;
};
struct yf1183 { void *up;
unsigned char v3279;
};
struct yf1190 { void *up;
rt_int p1188;
rt_int p1189;
};
struct yf1196 { void *up;
rt_int p1195;
};
struct yf1201 { void *up;
rt_int v3296;
rt_int v3298;
};
struct yf1207 { void *up;
unsigned char p1206;
};
struct yf1214 { void *up;
yarr p1213;
};
struct yf1220 { void *up;
rt_int p1219;
rt_int v3327;
rt_int v3330;
rt_int v3332;
rt_int v3334;
rt_int v3336;
rt_int v3338;
rt_int v3341;
rt_int v3344;
rt_int v3347;
rt_int v3350;
rt_int v3353;
rt_int v3356;
rt_int lo3393;
rt_int hi3394;
rt_int c_3396;
rt_int lo3405;
rt_int hi3406;
rt_int c_3408;
rt_int lo3435;
rt_int hi3436;
rt_int c_3438;
rt_int lo3445;
rt_int hi3446;
rt_int c_3448;
};
struct yf1225 { void *up;
rt_int v3459;
rt_int v3461;
rt_int v3463;
rt_int v3465;
};
struct yf1230 { void *up;
unsigned char v3494;
rt_int v3496;
rt_int v3498;
rt_int v3500;
rt_int v3502;
rt_int v3504;
rt_int v3506;
rt_int v3508;
rt_int lo3580;
rt_int hi3581;
rt_int c_3583;
};
struct yf1248 { void *up;
rt_int p1246;
rt_int p1247;
void * v3599;
};
struct yf1256 { void *up;
void * * p1253;
void * * p1254;
void * p1255;
};
struct yf1262 { void *up;
void * p1261;
rt_int v3612;
void * v3615;
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
rt_int v3629;
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
rt_int v3652;
};
struct yf1318 { void *up;
rt_int p1317;
rt_int v3662;
};
struct yf1323 { void *up;
rt_int v3667;
};
struct yf1330 { void *up;
rt_int p1328;
rt_int p1329;
rt_int v3674;
};
struct yf1335 { void *up;
rt_int v3678;
};
struct yf1341 { void *up;
rt_int p1340;
void * v3688;
};
struct yf1346 { void *up;
void * v3695;
};
struct yf1351 { void *up;
void * v3700;
void * v3702;
void * v3704;
void * v3706;
rt_int v3708;
};
struct yf1356 { void *up;
rt_int v3717;
};
struct yf1361 { void *up;
void * v3723;
void * v3725;
void * v3727;
void * v3729;
};
struct yf1366 { void *up;
void * v3734;
void * v3736;
void * v3738;
void * v3740;
void * v3742;
};
struct yf1371 { void *up;
void * v3750;
void * v3752;
void * v3754;
};
struct yf1377 { void *up;
rt_int p1376;
void * v3760;
};
struct yf1383 { void *up;
rt_int p1382;
};
struct yf1390 { void *up;
void * * p1388;
void * * p1389;
rt_int v3781;
void * v3783;
void * v3785;
void * v3787;
};
struct yf1395 { void *up;
void * v3791;
void * v3793;
void * v3795;
rt_int v3797;
rt_int v3799;
rt_int v3801;
};
struct yf1401 { void *up;
void * p1400;
void * v3817;
void * v3819;
rt_int v3821;
};
struct yf1406 { void *up;
void * v3827;
};
struct yf1412 { void *up;
rt_int p1411;
rt_int v3839;
};
struct yf1417 { void *up;
rt_int v3847;
void * v3849;
};
struct yf1422 { void *up;
void * v3858;
void * v3860;
};
struct yf1427 { void *up;
void * v3864;
void * v3866;
void * v3868;
};
struct yf1432 { void *up;
void * v3873;
void * v3875;
void * v3877;
rt_int v3879;
};
struct yf1437 { void *up;
void * v3886;
void * v3888;
void * v3890;
void * v3892;
void * v3894;
void * v3896;
rt_int v3898;
rt_int v3900;
};
struct yf1442 { void *up;
void * v3917;
};
struct yf1447 { void *up;
rt_int v3922;
};
struct yf1453 { void *up;
rt_int p1452;
void * v3931;
void * v3933;
void * v3935;
rt_int v3937;
};
struct yf1458 { void *up;
void * v3945;
void * v3947;
void * v3949;
void * v3951;
void * v3953;
void * v3955;
rt_int v3957;
rt_int v3959;
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
void * v4013;
};
struct yf1509 { void *up;
rt_int p1507;
rt_int p1508;
rt_int v4019;
};
struct yf1514 { void *up;
void * v4023;
rt_int v4025;
rt_int v4027;
};
struct yf1519 { void *up;
void * v4031;
void * v4033;
rt_int v4035;
rt_int v4037;
};
struct yf1524 { void *up;
void * v4043;
rt_int v4045;
rt_int v4047;
};
struct yf1530 { void *up;
rt_int p1529;
rt_int v4053;
};
struct yf1535 { void *up;
void * v4058;
rt_int v4060;
rt_int v4062;
};
struct yf1540 { void *up;
void * v4066;
rt_int v4068;
rt_int v4070;
};
struct yf1545 { void *up;
void * v4091;
void * v4093;
void * v4095;
rt_int v4097;
};
struct yf1550 { void *up;
};
struct yf1555 { void *up;
void * v4104;
void * v4106;
};
struct yf1600 { void *up;
rt_int p1598;
rt_int p1599;
void * v4113;
};
struct yf1606 { void *up;
rt_int p1605;
void * v4128;
};
struct yf1611 { void *up;
void * v4134;
void * v4136;
void * v4138;
rt_int v4140;
};
struct yf1617 { void *up;
void * p1616;
};
struct yf1623 { void *up;
rt_int p1622;
void * v4152;
};
struct yf1629 { void *up;
rt_int p1628;
void * v4160;
};
struct yf1636 { void *up;
rt_int p1634;
rt_int p1635;
void * v4169;
void * v4171;
};
struct yf1642 { void *up;
void * p1641;
void * v4178;
};
struct yf1649 { void *up;
rt_int p1647;
void * p1648;
void * v4187;
};
struct yf1656 { void *up;
void * p1654;
rt_int p1655;
void * v4196;
rt_int v4198;
};
struct yf1663 { void *up;
rt_int p1661;
rt_int p1662;
rt_int v4206;
};
struct yf1669 { void *up;
rt_int p1668;
rt_int v4221;
};
struct yf1676 { void *up;
rt_int p1674;
rt_int p1675;
rt_int v4236;
};
struct yf1682 { void *up;
void * p1681;
rt_int v4245;
};
struct yf1688 { void *up;
void * p1687;
void * v4253;
};
struct yf1719 { void *up;
rt_int p1717;
rt_int p1718;
void * v4259;
};
struct yf1725 { void *up;
void * p1724;
void * v4285;
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
rt_int v4322;
};
struct yf1773 { void *up;
void * p1772;
rt_int v4347;
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
rt_int v4392;
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
rt_int v4407;
void * v4409;
void * v4411;
};
struct yf1821 { void *up;
void * p1820;
};
struct yf1828 { void *up;
void * p1826;
void * p1827;
};
struct yf1834 { void *up;
void * p1833;
};
struct yf1842 { void *up;
void * p1839;
yarr p1841;
rt_int v4456;
rt_int v4458;
};
struct yf1848 { void *up;
void * p1847;
};
struct yf1854 { void *up;
void * p1853;
};
struct yf1861 { void *up;
void * p1859;
void * p1860;
rt_int v4483;
rt_int v4485;
void * v4487;
void * v4489;
rt_int v4491;
rt_int v4493;
};
struct yf1867 { void *up;
void * p1866;
void * v4508;
void * v4510;
rt_int v4512;
};
struct yf1875 { void *up;
void * p1872;
rt_int p1873;
rt_int p1874;
};
struct yf1881 { void *up;
rt_int p1880;
rt_int v4527;
};
struct yf1889 { void *up;
void * p1886;
rt_int p1887;
rt_int p1888;
void * v4537;
void * v4539;
void * v4541;
void * v4543;
void * v4545;
rt_int v4547;
void * v4549;
rt_int v4551;
rt_int v4553;
};
struct yf1896 { void *up;
rt_int p1894;
void * p1895;
void * v4600;
void * v4602;
};
struct yf1901 { void *up;
void * v4606;
};
struct yf1907 { void *up;
void * p1906;
void * v4611;
rt_int v4613;
rt_int v4615;
};
struct yf1920 { void *up;
void * p1912;
void * * p1913;
rt_int p1914;
void * p1915;
rt_int p1916;
rt_int p1917;
void * p1918;
rt_int p1919;
void * v4640;
};
struct yf1931 { void *up;
void * p1925;
void * * p1926;
void * p1927;
rt_int p1928;
void * p1929;
rt_int p1930;
void * v4652;
void * v4654;
void * v4656;
};
struct yf1939 { void *up;
void * p1936;
void * p1937;
rt_int p1938;
void * v4664;
void * v4666;
void * v4668;
void * v4670;
rt_int v4672;
void * v4675;
rt_int v4677;
rt_int v4679;
};
struct yf1946 { void *up;
void * p1944;
rt_int p1945;
void * v4726;
};
struct yf2066 { void *up;
void * p2064;
rt_int p2065;
void * v4733;
rt_int v4735;
rt_int v4737;
rt_int v4739;
rt_int v4741;
rt_int lo4749;
rt_int hi4750;
rt_int c_4752;
};
struct yf2073 { void *up;
void * p2071;
void * p2072;
void * v4791;
void * v4793;
void * v4795;
rt_int v4797;
rt_int v4800;
};
struct yf2081 { void *up;
void * p2078;
rt_int p2079;
rt_int p2080;
rt_int v4825;
rt_int v4827;
};
struct yf2090 { void *up;
void * p2086;
rt_int p2087;
rt_int p2088;
rt_int * p2088_o;
rt_int p2089;
rt_int v4838;
rt_int v4840;
rt_int v4842;
ydesc yd_4849;
yarr v4851;
unsigned char v4853;
rt_int v4855;
rt_int lo4883;
rt_int hi4884;
rt_int c_4886;
};
struct yf2098 { void *up;
void * p2095;
rt_int p2096;
rt_int * p2096_o;
rt_int p2097;
rt_int * p2097_o;
void * v4921;
rt_int v4923;
rt_int v4925;
rt_int v4927;
rt_int v4929;
rt_int v4931;
void * v4933;
};
struct yf2105 { void *up;
void * p2103;
void * p2104;
};
struct yf2113 { void *up;
rt_int p2110;
void * p2111;
void * p2112;
rt_int v4971;
rt_int v4973;
void * v4975;
void * v4977;
};
struct yf2121 { void *up;
rt_int p2118;
void * p2119;
void * p2120;
rt_int v5006;
rt_int v5008;
rt_int v5010;
rt_int v5012;
rt_int v5014;
rt_int v5016;
};
struct yf2129 { void *up;
rt_int p2126;
void * p2127;
void * p2128;
};
struct yf2139 { void *up;
rt_int p2134;
void * p2135;
rt_int p2136;
void * p2137;
rt_int p2138;
rt_int v5089;
};
struct yf2149 { void *up;
rt_int p2144;
void * p2145;
rt_int p2146;
void * p2147;
rt_int p2148;
};
struct yf2155 { void *up;
void * p2154;
void * v5111;
void * v5113;
};
struct yf2161 { void *up;
void * p2160;
void * v5132;
void * v5134;
};
struct yf2169 { void *up;
void * p2166;
rt_int p2167;
rt_int * p2167_o;
void * p2168;
void * * p2168_o;
};
struct yf2175 { void *up;
rt_int p2174;
};
struct yf2182 { void *up;
void * p2180;
rt_int p2181;
void * v5152;
};
struct yf2188 { void *up;
void * p2187;
void * v5157;
};
struct yf2197 { void *up;
void * p2193;
void * p2194;
rt_int p2195;
rt_int * p2195_o;
void * p2196;
void * * p2196_o;
rt_int v5166;
void * v5168;
rt_int v5170;
rt_int v5172;
void * v5174;
void * v5176;
void * v5178;
rt_int v5180;
rt_int v5182;
};
struct yf2205 { void *up;
void * p2202;
void * p2203;
rt_int p2204;
void * v5224;
rt_int v5226;
rt_int v5228;
};
struct yf2214 { void *up;
void * p2210;
void * p2211;
rt_int p2212;
rt_int * p2212_o;
void * p2213;
void * * p2213_o;
void * v5240;
};
struct yf2222 { void *up;
void * p2219;
rt_int p2220;
rt_int * p2220_o;
void * p2221;
void * * p2221_o;
rt_int v5249;
rt_int v5251;
rt_int v5253;
void * v5255;
void * v5257;
void * v5259;
void * v5261;
rt_int v5263;
rt_int v5265;
};
struct yf2232 { void *up;
void * p2227;
rt_int p2228;
void * p2229;
rt_int p2230;
rt_int * p2230_o;
void * p2231;
void * * p2231_o;
};
struct yf2238 { void *up;
void * p2237;
void * v5300;
};
struct yf2247 { void *up;
yarr p2244;
rt_int p2245;
rt_int p2246;
};
struct yf2256 { void *up;
rt_int p2252;
yarr p2254;
rt_int p2255;
};
struct yf2265 { void *up;
rt_int p2261;
void * p2262;
rt_int p2263;
void * p2264;
rt_int v5328;
rt_int v5330;
void * v5332;
};
struct yf2271 { void *up;
void * p2270;
};
struct yf2280 { void *up;
void * p2276;
void * p2277;
rt_int p2278;
rt_int * p2278_o;
void * p2279;
void * * p2279_o;
rt_int v5362;
rt_int v5364;
rt_int v5366;
rt_int v5368;
void * v5370;
void * v5372;
void * v5374;
rt_int v5376;
};
struct yf2317 { void *up;
void * p2315;
void * p2316;
};
struct yf2325 { void *up;
void * p2322;
rt_int p2323;
rt_int p2324;
void * v5431;
void * v5433;
rt_int v5435;
rt_int v5437;
};
struct yf2331 { void *up;
void * p2330;
void * v5449;
};
struct yf2340 { void *up;
void * p2336;
void * p2337;
rt_int p2338;
rt_int * p2338_o;
rt_int p2339;
rt_int * p2339_o;
void * v5461;
void * v5463;
void * v5465;
};
struct yf2348 { void *up;
void * p2345;
void * p2346;
rt_int p2347;
void * v5480;
};
struct yf2355 { void *up;
void * p2353;
void * p2354;
};
struct yf2364 { void *up;
void * p2360;
rt_int p2361;
rt_int p2362;
rt_int p2363;
void * v5497;
rt_int v5499;
rt_int v5503;
rt_int v5506;
rt_int v5509;
rt_int v5512;
rt_int v5515;
rt_int v5518;
};
struct yf2370 { void *up;
rt_int p2369;
};
struct yf2381 { void *up;
void * p2375;
rt_int p2376;
void * p2377;
void * p2378;
rt_int p2379;
rt_int * p2379_o;
void * p2380;
void * * p2380_o;
void * v5576;
void * v5578;
rt_int v5580;
rt_int v5582;
};
struct yf2388 { void *up;
void * p2386;
rt_int p2387;
void * v5596;
};
struct yf2398 { void *up;
rt_int p2393;
void * p2394;
rt_int p2395;
void * p2396;
rt_int p2397;
void * v5604;
void * v5606;
void * v5608;
void * v5610;
rt_int v5612;
};
struct yf2408 { void *up;
rt_int p2403;
void * p2404;
rt_int p2405;
void * p2406;
rt_int p2407;
rt_int v5654;
};
struct yf2418 { void *up;
void * p2413;
void * p2414;
rt_int p2415;
rt_int p2416;
rt_int * p2416_o;
void * p2417;
void * * p2417_o;
void * v5663;
void * v5665;
rt_int v5667;
rt_int v5669;
};
struct yf2427 { void *up;
void * p2423;
void * p2424;
rt_int p2425;
rt_int * p2425_o;
void * p2426;
void * * p2426_o;
void * v5681;
void * v5683;
rt_int v5685;
rt_int v5687;
rt_int v5689;
void * v5691;
rt_int v5693;
rt_int v5695;
rt_int v5697;
rt_int v5699;
rt_int v5701;
rt_int v5704;
void * v5706;
rt_int v5708;
};
struct yf2435 { void *up;
void * p2432;
rt_int p2433;
rt_int p2434;
void * v5770;
void * v5772;
rt_int v5774;
rt_int v5776;
};
struct yf2522 { void *up;
yarr p2520;
rt_int p2521;
rt_int v5785;
};
struct yf2532 { void *up;
yarr p2528;
rt_int p2529;
yarr p2531;
rt_int v5791;
};
struct yf2538 { void *up;
rt_int p2537;
};
struct yf2543 { void *up;
};
struct yf2549 { void *up;
rt_int p2548;
};
struct yf2555 { void *up;
void * p2554;
rt_int v5813;
rt_int v5815;
rt_int v5817;
void * v5819;
void * v5821;
rt_int v5823;
void * v5825;
rt_int v5827;
};
struct yf2561 { void *up;
void * p2560;
void * v5889;
};
struct yf2567 { void *up;
void * p2566;
rt_int v5893;
void * v5895;
};
struct yf2574 { void *up;
void * p2572;
void * p2573;
rt_int v5901;
rt_int v5903;
void * v5905;
void * v5907;
rt_int v5909;
};
struct yf2579 { void *up;
void * v5915;
rt_int v5917;
};
struct yf2585 { void *up;
void * p2584;
rt_int v5924;
rt_int v5926;
rt_int v5928;
rt_int v5930;
rt_int v5932;
rt_int v5934;
rt_int v5936;
void * v5938;
void * v5940;
void * v5942;
void * v5944;
rt_int v5946;
rt_int v5948;
rt_int v5950;
rt_int v5952;
void * v5954;
};
struct yf2591 { void *up;
void * p2590;
void * v6017;
rt_int v6019;
rt_int v6021;
rt_int v6023;
void * v6025;
};
struct yf2599 { void *up;
rt_int p2596;
rt_int p2597;
rt_int p2598;
};
struct yf2605 { void *up;
void * p2604;
rt_int v6057;
rt_int v6059;
rt_int v6061;
void * v6063;
void * v6065;
};
struct yf2611 { void *up;
void * p2610;
};
struct yf2617 { void *up;
void * p2616;
void * v6086;
};
struct yf2623 { void *up;
void * p2622;
void * v6101;
};
struct yf2629 { void *up;
void * p2628;
void * v6110;
void * v6112;
void * v6114;
};
struct yf2635 { void *up;
rt_int p2634;
rt_int v6119;
rt_int v6121;
rt_int lo6125;
rt_int hi6126;
rt_int c_6128;
};
struct yf2641 { void *up;
void * p2640;
void * v6138;
rt_int v6140;
rt_int v6142;
};
struct yf2647 { void *up;
void * p2646;
rt_int v6159;
};
struct yf2654 { void *up;
void * p2652;
rt_int p2653;
void * v6167;
void * v6169;
void * v6171;
void * v6173;
void * v6175;
void * v6177;
void * v6179;
rt_int v6181;
rt_int v6183;
};
struct yf2661 { void *up;
void * p2659;
void * p2660;
void * v6226;
void * v6228;
void * v6230;
rt_int v6232;
};
struct yf2667 { void *up;
void * p2666;
void * v6240;
yR130 v6242;
yR130 v6244;
rt_int v6246;
rt_int v6248;
rt_int v6250;
rt_int v6252;
rt_int v6254;
rt_int v6256;
rt_int v6258;
void * v6260;
rt_int v6262;
void * v6264;
void * v6266;
rt_int v6268;
rt_int v6270;
yR130 v6272;
};
struct yf2675 { void *up;
void * p2672;
void * p2673;
rt_int p2674;
};
struct yf2681 { void *up;
void * p2680;
rt_int v6335;
void * v6337;
void * v6339;
void * v6341;
void * v6343;
rt_int v6345;
rt_int v6347;
rt_int v6349;
rt_int v6351;
};
struct yf2688 { void *up;
void * p2686;
void * p2687;
void * v6370;
};
struct yf2695 { void *up;
void * p2693;
void * p2694;
};
struct yf2701 { void *up;
void * p2700;
void * v6377;
void * v6379;
void * v6381;
void * v6383;
void * v6385;
};
struct yf2719 { void *up;
rt_int p2717;
void * p2718;
void * v6391;
};
struct yf2727 { void *up;
void * * p2724;
void * p2725;
rt_int p2726;
void * v6398;
void * v6400;
void * v6402;
};
struct yf2737 { void *up;
void * p2735;
rt_int p2736;
void * v6412;
};
struct yf2744 { void *up;
rt_int p2742;
rt_int p2743;
void * v6427;
};
struct yf2752 { void *up;
void * p2749;
void * * p2750;
rt_int p2751;
void * v6437;
void * v6439;
void * v6441;
rt_int v6443;
void * v6445;
rt_int v6447;
};
struct yf2759 { void *up;
void * p2757;
rt_int p2758;
void * v6472;
void * v6474;
void * v6476;
};
struct yf2765 { void *up;
void * p2764;
void * v6481;
void * v6483;
void * v6485;
void * v6487;
void * v6489;
void * v6491;
void * v6493;
void * v6495;
void * v6497;
void * v6499;
rt_int v6501;
rt_int v6503;
rt_int v6505;
};
struct yf2771 { void *up;
void * p2770;
void * v6540;
};
struct yf2777 { void *up;
void * p2776;
void * v6544;
void * v6546;
void * v6548;
void * v6550;
rt_int v6552;
rt_int v6554;
rt_int v6556;
rt_int v6558;
void * v6560;
rt_int lo6568;
rt_int hi6569;
rt_int c_6571;
};
struct yf2783 { void *up;
void * p2782;
void * v6583;
void * v6585;
};
struct yf2788 { void *up;
void * v6591;
};
struct yf2795 { void *up;
void * p2793;
void * p2794;
rt_int v6602;
rt_int v6604;
rt_int v6606;
void * v6608;
rt_int v6610;
rt_int v6612;
rt_int v6614;
rt_int v6616;
rt_int v6618;
rt_int v6620;
void * v6622;
void * v6624;
};
struct yf2801 { void *up;
void * p2800;
};
struct yf2807 { void *up;
void * p2806;
rt_int v6685;
};
struct yf2812 { void *up;
};
struct yf2818 { void *up;
void * p2817;
};
struct yf2825 { void *up;
void * p2823;
rt_int p2824;
};
struct yf2832 { void *up;
void * p2830;
rt_int p2831;
rt_int v6720;
};
struct yf2839 { void *up;
void * p2837;
void * p2838;
rt_int v6732;
rt_int v6734;
rt_int v6736;
};
struct yf2846 { void *up;
void * p2844;
rt_int p2845;
void * v6745;
rt_int v6747;
};
struct yf2853 { void *up;
void * p2851;
rt_int p2852;
};
struct yf2861 { void *up;
yarr p2859;
rt_int p2860;
};
struct yf2867 { void *up;
rt_int p2866;
};
struct yf2876 { void *up;
void * p2872;
rt_int p2873;
rt_int p2874;
rt_int * p2874_o;
void * p2875;
void * * p2875_o;
rt_int v6774;
};
struct yf2884 { void *up;
void * p2881;
rt_int p2882;
rt_int * p2882_o;
void * p2883;
void * * p2883_o;
};
struct yf2890 { void *up;
void * p2889;
rt_int v6790;
void * v6792;
};
struct yf2896 { void *up;
void * p2895;
void * v6798;
rt_int v6801;
rt_int v6803;
rt_int v6805;
rt_int v6807;
rt_int v6809;
rt_int v6811;
unsigned char v6813;
void * v6815;
ydesc yd_6822;
yarr v6824;
};
struct yf2906 { void *up;
rt_int p2901;
void * p2902;
rt_int p2903;
rt_int p2904;
rt_int * p2904_o;
void * p2905;
void * * p2905_o;
rt_int v6863;
rt_int v6865;
rt_int v6867;
rt_int v6869;
rt_int v6871;
void * v6873;
void * v6875;
void * v6877;
void * v6879;
rt_int v6881;
rt_int v6883;
rt_int v6885;
rt_int v6887;
void * v6889;
rt_int v6891;
rt_int lo6904;
rt_int hi6905;
rt_int c_6907;
};
struct yf2918 { void *up;
yarr p2916;
void * p2917;
void * v7081;
};
struct yf2926 { void *up;
yarr p2924;
rt_int p2925;
void * v7087;
};
struct yf2936 { void *up;
yarr p2932;
yarr p2933;
yarr p2934;
rt_int p2935;
void * v7095;
void * v7097;
void * v7099;
};
struct yf2944 { void *up;
rt_int p2941;
yarr p2943;
void * v7108;
};
struct yf2949 { void *up;
};
struct yf2954 { void *up;
void * v7188;
};
struct yf2959 { void *up;
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
static rt_int v2001;
static rt_int v2004;
static rt_int v2007;
static rt_int v2010;
static rt_int v2013;
static rt_int v2016;
static rt_int v2019;
static rt_int v2022;
static rt_int v2025;
static rt_int v2028;
static rt_int v2031;
static rt_int v2034;
static rt_int v2037;
static rt_int v2040;
static rt_int v2043;
static rt_int v2046;
static rt_int v2049;
static rt_int v2052;
static rt_int v2055;
static rt_int v2058;
static void * v2061;
static ydesc yd_2289;
static yarr v2291;
static ydesc yd_2298;
static yarr v2300;
static ydesc yd_2307;
static yarr v2309;
static rt_int v2311;
static ydesc yd_2444;
static yarr v2446;
static rt_int v2448;
static rt_int v2451;
static ydesc yd_2459;
static yarr v2461;
static ydesc yd_2468;
static yarr v2470;
static rt_int v2472;
static ydesc yd_2480;
static yarr v2482;
static rt_int v2484;
static ydesc yd_2492;
static yarr v2494;
static yarr v2496;
static ydesc yd_2503;
static yarr v2505;
static rt_int v2507;
static rt_int v2510;
static void * v2513;
static rt_int v2515;
static void * v2705;
static ydesc yd_2712;
static yarr v2714;
static rt_int v2731;
static void * v2910;
static void * v2912;
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
static rt_int yr1813_SigText(void * a_p1814);
static rt_int yr1819_RepSig(void * a_p1820);
static rt_int yr1825_Identical(void * a_p1826, void * a_p1827);
static rt_int yr1832_IsLiteralNode(void * a_p1833);
static void yr1838_StoreBounds(void * a_p1839, yarr a_p1841);
static rt_int yr1846_LoText(void * a_p1847);
static rt_int yr1852_HiText(void * a_p1853);
static void yr1858_Qualify(void * a_p1859, void * a_p1860);
static void yr1865_DefineLits(void * a_p1866);
static void yr1871_SetRange(void * a_p1872, rt_int a_p1873, rt_int a_p1874);
static rt_int yr1879_NewTid(rt_int a_p1880);
static void * yr1885_MakeRep(void * a_p1886, rt_int a_p1887, rt_int a_p1888);
static void yr1893_ResolvePending(rt_int a_p1894, void * a_p1895);
static void yr1900_CheckPending(void);
static void yr1905_BuildArrayDesc(void * a_p1906);
static void yr1911_AddField(void * a_p1912, void * * a_p1913, rt_int a_p1914, void * a_p1915, rt_int a_p1916, rt_int a_p1917, void * a_p1918, rt_int a_p1919);
static void yr1924_AddFields(void * a_p1925, void * * a_p1926, void * a_p1927, rt_int a_p1928, void * a_p1929, rt_int a_p1930);
static void yr1935_MakeRecord(void * a_p1936, void * a_p1937, rt_int a_p1938);
static void * yr1943_FindField(void * a_p1944, rt_int a_p1945);
static rt_int yr2063_CharOrd(void * a_p2064, rt_int a_p2065);
static void * yr2070_AlphabetFor(void * a_p2071, void * a_p2072);
static rt_int yr2077_CharValue(void * a_p2078, rt_int a_p2079, rt_int a_p2080);
static rt_int yr2085_StringCodes(void * a_p2086, rt_int a_p2087, rt_int * a_p2088, rt_int a_p2089);
static void yr2094_Manifest(void * a_p2095, rt_int * a_p2096, rt_int * a_p2097);
static rt_int yr2102_NeedsConv(void * a_p2103, void * a_p2104);
static rt_int yr2109_ConvertRecord(rt_int a_p2110, void * a_p2111, void * a_p2112);
static rt_int yr2117_ConvertArray(rt_int a_p2118, void * a_p2119, void * a_p2120);
static rt_int yr2125_Convert(rt_int a_p2126, void * a_p2127, void * a_p2128);
static rt_int yr2133_StoreText(rt_int a_p2134, void * a_p2135, rt_int a_p2136, void * a_p2137, rt_int a_p2138);
static void yr2143_Store(rt_int a_p2144, void * a_p2145, rt_int a_p2146, void * a_p2147, rt_int a_p2148);
static rt_int yr2153_IsVariable(void * a_p2154);
static void yr2159_CheckPure(void * a_p2160);
static void yr2165_LValue(void * a_p2166, rt_int * a_p2167, void * * a_p2168);
static rt_int yr2173_Paren(rt_int a_p2174);
static void * yr2179_Lit(void * a_p2180, rt_int a_p2181);
static void * yr2186_Qualifier(void * a_p2187);
static void yr2192_Expr(void * a_p2193, void * a_p2194, rt_int * a_p2195, void * * a_p2196);
static rt_int yr2201_VariantTest(void * a_p2202, void * a_p2203, rt_int a_p2204);
static void yr2209_NameExpr(void * a_p2210, void * a_p2211, rt_int * a_p2212, void * * a_p2213);
static void yr2218_IndexExpr(void * a_p2219, rt_int * a_p2220, void * * a_p2221);
static void yr2226_NegExpr(void * a_p2227, rt_int a_p2228, void * a_p2229, rt_int * a_p2230, void * * a_p2231);
static void * yr2236_Unbounded(void * a_p2237);
static rt_int yr2242_Call2(yarr a_p2244, rt_int a_p2245, rt_int a_p2246);
static rt_int yr2251_Infix(rt_int a_p2252, yarr a_p2254, rt_int a_p2255);
static rt_int yr2260_EqCode(rt_int a_p2261, void * a_p2262, rt_int a_p2263, void * a_p2264);
static rt_int yr2269_IsOrdered(void * a_p2270);
static void yr2275_BinExpr(void * a_p2276, void * a_p2277, rt_int * a_p2278, void * * a_p2279);
static rt_int yr2314_Fits(void * a_p2315, void * a_p2316);
static void * yr2321_Choose(void * a_p2322, rt_int a_p2323, rt_int a_p2324);
static rt_int yr2329_HidesStandard(void * a_p2330);
static void yr2335_CompileArgs(void * a_p2336, void * a_p2337, rt_int * a_p2338, rt_int * a_p2339);
static void yr2344_CheckUnresolved(void * a_p2345, void * a_p2346, rt_int a_p2347);
static rt_int yr2352_SameAsFormal(void * a_p2353, void * a_p2354);
static rt_int yr2359_CallCode(void * a_p2360, rt_int a_p2361, rt_int a_p2362, rt_int a_p2363);
static rt_int yr2368_Num(rt_int a_p2369);
static rt_int yr2374_UserOp(void * a_p2375, rt_int a_p2376, void * a_p2377, void * a_p2378, rt_int * a_p2379, void * * a_p2380);
static void yr2385_NoteCall(void * a_p2386, rt_int a_p2387);
static rt_int yr2392_UserAssign(rt_int a_p2393, void * a_p2394, rt_int a_p2395, void * a_p2396, rt_int a_p2397);
static void yr2402_Assign(rt_int a_p2403, void * a_p2404, rt_int a_p2405, void * a_p2406, rt_int a_p2407);
static void yr2412_CallExpr(void * a_p2413, void * a_p2414, rt_int a_p2415, rt_int * a_p2416, void * * a_p2417);
static void yr2422_Denote(void * a_p2423, void * a_p2424, rt_int * a_p2425, void * * a_p2426);
static rt_int yr2431_VariantOf(void * a_p2432, rt_int a_p2433, rt_int a_p2434);
static void yr2518_Emit2(yarr a_p2520, rt_int a_p2521);
static void yr2526_Emit3(yarr a_p2528, rt_int a_p2529, yarr a_p2531);
static void yr2536_PopTo(rt_int a_p2537);
static void yr2542_LeaveBlock(void);
static rt_int yr2547_RaiseCode(rt_int a_p2548);
static void yr2553_BlockStatements(void * a_p2554);
static void yr2559_Statements(void * a_p2560);
static rt_int yr2565_Cond(void * a_p2566);
static rt_int yr2571_Label(void * a_p2572, void * a_p2573);
static void yr2578_CopyOut(void);
static void yr2583_Statement(void * a_p2584);
static void yr2589_ForStatement(void * a_p2590);
static rt_int yr2595_Join(rt_int a_p2596, rt_int a_p2597, rt_int a_p2598);
static void yr2603_ReturnStatement(void * a_p2604);
static void yr2609_BeginStatement(void * a_p2610);
static void yr2615_PlaceLabel(void * a_p2616);
static void yr2621_GotoStatement(void * a_p2622);
static void yr2627_CheckLabels(void * a_p2628);
static rt_int yr2633_RoutineCName(rt_int a_p2634);
static void * yr2639_FormalRep(void * a_p2640);
static rt_int yr2645_ParamCType(void * a_p2646);
static void yr2651_RoutineHeader(void * a_p2652, rt_int a_p2653);
static void * yr2658_SameSignature(void * a_p2659, void * a_p2660);
static void yr2665_RoutineBody(void * a_p2666);
static void yr2671_DeclareStorage(void * a_p2672, void * a_p2673, rt_int a_p2674);
static void yr2679_SimpleDecl(void * a_p2680);
static void yr2685_NoteAlphabet(void * a_p2686, void * a_p2687);
static void yr2692_AtLocation(void * a_p2693, void * a_p2694);
static void yr2699_Declarations(void * a_p2700);
static void * yr2716_Alias(rt_int a_p2717, void * a_p2718);
static void yr2723_AddLits(void * * a_p2724, void * a_p2725, rt_int a_p2726);
static rt_int yr2734_Provides(void * a_p2735, rt_int a_p2736);
static void yr2741_ImportLater(rt_int a_p2742, rt_int a_p2743);
static void yr2748_ResolveItem(void * a_p2749, void * * a_p2750, rt_int a_p2751);
static void yr2756_DefineAll(void * a_p2757, rt_int a_p2758);
static void yr2763_CompileModule(void * a_p2764);
static void yr2769_DeclareTemplate(void * a_p2770);
static void yr2775_Instantiate(void * a_p2776);
static void yr2781_DeclareProcess(void * a_p2782);
static void yr2787_AwaitProcesses(void);
static void yr2792_Activate(void * a_p2793, void * a_p2794);
static rt_int yr2799_MonitorPath(void * a_p2800);
static void yr2805_EnterMonitor(void * a_p2806);
static void yr2811_LeaveMonitor(void);
static void yr2816_TerminateStatement(void * a_p2817);
static void yr2822_DeclareSignal(void * a_p2823, rt_int a_p2824);
static void yr2829_DeclareSignalArray(void * a_p2830, rt_int a_p2831);
static void yr2836_DeviceSignal(void * a_p2837, void * a_p2838);
static void * yr2843_Arg(void * a_p2844, rt_int a_p2845);
static void yr2850_NArgs(void * a_p2851, rt_int a_p2852);
static rt_int yr2857_Call1(yarr a_p2859, rt_int a_p2860);
static rt_int yr2865_Addr(rt_int a_p2866);
static void yr2871_StdVar(void * a_p2872, rt_int a_p2873, rt_int * a_p2874, void * * a_p2875);
static void yr2880_NumArg(void * a_p2881, rt_int * a_p2882, void * * a_p2883);
static rt_int yr2888_IntArg(void * a_p2889);
static void yr2894_CodeInsert(void * a_p2895);
static void yr2900_StdCall(rt_int a_p2901, void * a_p2902, rt_int a_p2903, rt_int * a_p2904, void * * a_p2905);
static void yr2914_StdRep(yarr a_p2916, void * a_p2917);
static void yr2922_StdOp(yarr a_p2924, rt_int a_p2925);
static void * yr2930_LitList(yarr a_p2932, yarr a_p2933, yarr a_p2934, rt_int a_p2935);
static void * yr2940_Abstract(rt_int a_p2941, yarr a_p2943);
static void yr2948_Predefine(void);
static void yr2953_Translate(void);
static void yr2958_WriteProgram(void);
static void yr963_InitChars(void) {
struct yf964 F;
memset((void *)&F, 0, sizeof F);
F.v2963 = INT64_C(0);
{ rt_int hi2968 = 127;
for (rt_int i2967 = 0; i2967 <= hi2968; i2967++) { F.c_2966 = i2967;
((rt_int *)(v931).p)[y_ix1(v931, F.c_2966)] = F.v2963;
((unsigned char *)(v940).p)[y_ix1(v940, F.v2963)] = F.c_2966;
F.v2963 = rt_range(rt_add(F.v2963, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i2967 == hi2968) break;
}}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr968_IsLetter(unsigned char a_p969) {
struct yf970 F;
memset((void *)&F, 0, sizeof F);
F.p969 = a_p969;
{ rt_int rv2978 = ((((((F.p969 >= 65)) && ((F.p969 <= 90)))) || ((((F.p969 >= 97)) && ((F.p969 <= 122))))) || ((F.p969 == 95)));
return rv2978; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr974_IsDigit(unsigned char a_p975) {
struct yf976 F;
memset((void *)&F, 0, sizeof F);
F.p975 = a_p975;
{ rt_int rv2983 = (((F.p975 >= 48)) && ((F.p975 <= 57)));
return rv2983; }
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
F.lo3002 = y_low(F.p999, INT64_C(1));
F.hi3003 = y_high(F.p999, INT64_C(1));
{ rt_int hi3007 = F.hi3003;
for (rt_int i3006 = F.lo3002; i3006 <= hi3007; i3006++) { F.c_3005 = i3006;
yr991_SC(((unsigned char *)(F.p999).p)[y_ix1(F.p999, F.c_3005)]);
if (i3006 == hi3007) break;
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
F.v3011 = ((rt_int *)(v888).p)[y_ix1(v888, F.p1005)];
while ((F.v3011 < (rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1005)], ((rt_int *)(v890).p)[y_ix1(v890, F.p1005)])))) {
yr991_SC(((unsigned char *)(v883).p)[y_ix1(v883, F.v3011)]);
F.v3011 = rt_range(rt_add(F.v3011, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1010_SI(rt_int a_p1011) {
struct yf1012 F;
memset((void *)&F, 0, sizeof F);
F.p1011 = a_p1011;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(24)}; y_desc_array(&F.yd_3024, 1, lo, hi, &y_d_byte); }
y_init(&F.yd_3024, &F.v3026);
F.v3028 = INT64_C(0);
F.v3031 = F.p1011;
if ((F.v3031 < INT64_C(0))) {
yr991_SC(45);
F.v3031 = rt_range(rt_neg(F.v3031), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
for (;;) {
F.v3028 = rt_range(rt_add(F.v3028, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((unsigned char *)(F.v3026).p)[y_ix1(F.v3026, F.v3028)] = ((unsigned char *)(v940).p)[y_ix1(v940, rt_add((rt_mod(F.v3031, INT64_C(10))), INT64_C(48)))];
F.v3031 = rt_range(rt_div(F.v3031, INT64_C(10)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.v3031 == INT64_C(0))) {
goto yl_3035;
}
}
yl_3035: ;
while ((F.v3028 > INT64_C(0))) {
yr991_SC(((unsigned char *)(F.v3026).p)[y_ix1(F.v3026, F.v3028)]);
F.v3028 = rt_range(rt_sub(F.v3028, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1016_SE(void) {
struct yf1017 F;
memset((void *)&F, 0, sizeof F);
F.v3050 = ((rt_int *)(v919).p)[y_ix1(v919, v921)];
v921 = rt_range(rt_sub(v921, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v892 = rt_range(rt_add(v892, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v888).p)[y_ix1(v888, v892)] = rt_range(rt_add(v885, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v890).p)[y_ix1(v890, v892)] = rt_range(rt_sub(v909, F.v3050), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo3061 = rt_add(F.v3050, INT64_C(1));
F.hi3062 = v909;
{ rt_int hi3066 = F.hi3062;
for (rt_int i3065 = F.lo3061; i3065 <= hi3066; i3065++) { F.c_3064 = i3065;
yr980_PoolAdd(((unsigned char *)(v907).p)[y_ix1(v907, F.c_3064)]);
if (i3065 == hi3066) break;
}}
v909 = F.v3050;
{ rt_int rv3067 = rt_range(v892, INT64_C(0), INT64_C(4000000));
return rv3067; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1021_T(yarr a_p1023) {
struct yf1024 F;
memset((void *)&F, 0, sizeof F);
F.p1023 = a_p1023;
yr986_SB();
yr997_SA(F.p1023);
{ rt_int rv3070 = yr1016_SE();
return rv3070; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1028_Intern(rt_int a_p1029, rt_int a_p1030) {
struct yf1031 F;
memset((void *)&F, 0, sizeof F);
F.p1029 = a_p1029;
F.p1030 = a_p1030;
F.v3075 = INT64_C(0);
F.lo3085 = F.p1029;
F.hi3086 = rt_sub((rt_add(F.p1029, F.p1030)), INT64_C(1));
{ rt_int hi3090 = F.hi3086;
for (rt_int i3089 = F.lo3085; i3089 <= hi3090; i3089++) { F.c_3088 = i3089;
F.v3075 = rt_range(rt_mod((rt_add((rt_mul(F.v3075, INT64_C(31))), ((rt_int *)(v931).p)[y_ix1(v931, ((unsigned char *)(v883).p)[y_ix1(v883, F.c_3088)])])), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3089 == hi3090) break;
}}
for (;;) {
if ((((rt_int *)(v895).p)[y_ix1(v895, F.v3075)] == INT64_C(0))) {
v892 = rt_range(rt_add(v892, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v888).p)[y_ix1(v888, v892)] = F.p1029;
((rt_int *)(v890).p)[y_ix1(v890, v892)] = F.p1030;
((rt_int *)(v895).p)[y_ix1(v895, F.v3075)] = rt_range(v892, INT64_C(0), INT64_C(4000000));
{ rt_int rv3100 = rt_range(v892, INT64_C(0), INT64_C(4000000));
return rv3100; }
}
F.v3078 = ((rt_int *)(v895).p)[y_ix1(v895, F.v3075)];
if ((((rt_int *)(v890).p)[y_ix1(v890, F.v3078)] == F.p1030)) {
F.v3080 = 1;
F.lo3106 = INT64_C(0);
F.hi3107 = rt_sub(F.p1030, INT64_C(1));
{ rt_int hi3111 = F.hi3107;
for (rt_int i3110 = F.lo3106; i3110 <= hi3111; i3110++) { F.c_3109 = i3110;
if ((!(((unsigned char *)(v883).p)[y_ix1(v883, rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.v3078)], F.c_3109))] == ((unsigned char *)(v883).p)[y_ix1(v883, rt_add(F.p1029, F.c_3109))]))) {
F.v3080 = 0;
}
if (i3110 == hi3111) break;
}}
if (F.v3080) {
{ rt_int rv3115 = rt_range(F.v3078, INT64_C(0), INT64_C(4000000));
return rv3115; }
}
}
F.v3075 = rt_range(rt_mod((rt_add(F.v3075, INT64_C(1))), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yl_3096: ;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1035_Name(rt_int a_p1036) {
struct yf1037 F;
memset((void *)&F, 0, sizeof F);
F.p1036 = a_p1036;
{ rt_int rv3122 = yr1028_Intern(((rt_int *)(v888).p)[y_ix1(v888, F.p1036)], ((rt_int *)(v890).p)[y_ix1(v890, F.p1036)]);
return rv3122; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1041_N(yarr a_p1043) {
struct yf1044 F;
memset((void *)&F, 0, sizeof F);
F.p1043 = a_p1043;
{ rt_int rv3125 = yr1035_Name(yr1021_T(F.p1043));
return rv3125; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1048_TEq(rt_int a_p1049, rt_int a_p1050) {
struct yf1051 F;
memset((void *)&F, 0, sizeof F);
F.p1049 = a_p1049;
F.p1050 = a_p1050;
if ((F.p1049 == F.p1050)) {
{ rt_int rv3130 = 1;
return rv3130; }
}
if ((!(((rt_int *)(v890).p)[y_ix1(v890, F.p1049)] == ((rt_int *)(v890).p)[y_ix1(v890, F.p1050)]))) {
{ rt_int rv3132 = 0;
return rv3132; }
}
F.lo3137 = INT64_C(0);
F.hi3138 = rt_sub(((rt_int *)(v890).p)[y_ix1(v890, F.p1049)], INT64_C(1));
{ rt_int hi3142 = F.hi3138;
for (rt_int i3141 = F.lo3137; i3141 <= hi3142; i3141++) { F.c_3140 = i3141;
if ((!(((unsigned char *)(v883).p)[y_ix1(v883, rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1049)], F.c_3140))] == ((unsigned char *)(v883).p)[y_ix1(v883, rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1050)], F.c_3140))]))) {
{ rt_int rv3146 = 0;
return rv3146; }
}
if (i3141 == hi3142) break;
}}
{ rt_int rv3148 = 1;
return rv3148; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1055_TStarts(rt_int a_p1056, yarr a_p1058) {
struct yf1059 F;
memset((void *)&F, 0, sizeof F);
F.p1056 = a_p1056;
F.p1058 = a_p1058;
F.v3153 = INT64_C(0);
if ((((rt_int *)(v890).p)[y_ix1(v890, F.p1056)] < (rt_add((rt_sub(y_high(F.p1058, INT64_C(1)), y_low(F.p1058, INT64_C(1)))), INT64_C(1))))) {
{ rt_int rv3163 = 0;
return rv3163; }
}
F.lo3169 = y_low(F.p1058, INT64_C(1));
F.hi3170 = y_high(F.p1058, INT64_C(1));
{ rt_int hi3174 = F.hi3170;
for (rt_int i3173 = F.lo3169; i3173 <= hi3174; i3173++) { F.c_3172 = i3173;
if ((!(((unsigned char *)(v883).p)[y_ix1(v883, rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1056)], F.v3153))] == ((unsigned char *)(F.p1058).p)[y_ix1(F.p1058, F.c_3172)]))) {
{ rt_int rv3177 = 0;
return rv3177; }
}
F.v3153 = rt_range(rt_add(F.v3153, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3173 == hi3174) break;
}}
{ rt_int rv3181 = 1;
return rv3181; }
rt_raise(Y_X_NO_RETURN);
}
static unsigned char yr1063_TChar(rt_int a_p1064, rt_int a_p1065) {
struct yf1066 F;
memset((void *)&F, 0, sizeof F);
F.p1064 = a_p1064;
F.p1065 = a_p1065;
{ unsigned char rv3188 = ((unsigned char *)(v883).p)[y_ix1(v883, rt_sub((rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1064)], F.p1065)), INT64_C(1)))];
return rv3188; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1070_Put(yR130 * a_p1071, rt_int a_p1072) {
struct yf1073 F;
memset((void *)&F, 0, sizeof F);
F.p1071 = a_p1071;
F.p1072 = a_p1072;
({ F.v3193 = rt_alloc(sizeof(yR125)); });
(*(yR125 *)rt_nil_check(F.v3193)) = ((yR125){ .f_t = F.p1072, .f_next = ((void *)0) });
if ((((*F.p1071)).f_head == ((void *)0))) {
((*F.p1071)).f_head = F.v3193;
} else {
((*(yR125 *)rt_nil_check(((*F.p1071)).f_tail))).f_next = F.v3193;
}
((*F.p1071)).f_tail = F.v3193;
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
F.v3207 = ((rt_int *)(v888).p)[y_ix1(v888, F.p1106)];
while ((F.v3207 < (rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p1106)], ((rt_int *)(v890).p)[y_ix1(v890, F.p1106)])))) {
({ unsigned char pv = ((unsigned char *)(v883).p)[y_ix1(v883, F.v3207)]; y_put(&v881, &pv, sizeof pv); });
F.v3207 = rt_range(rt_add(F.v3207, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1111_WriteBuf(yR130 a_p1112) {
struct yf1113 F;
memset((void *)&F, 0, sizeof F);
F.p1112 = a_p1112;
F.v3214 = (F.p1112).f_head;
while ((!(F.v3214 == ((void *)0)))) {
yr1105_WriteTxt(((*(yR125 *)rt_nil_check(F.v3214))).f_t);
({ unsigned char pv = 10; y_put(&v881, &pv, sizeof pv); });
F.v3214 = ((*(yR125 *)rt_nil_check(F.v3214))).f_next;
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
F.v3220 = yr1016_SE();
yr1105_WriteTxt(F.v3220);
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
F.v3234 = yr1016_SE();
yr1117_Fail(F.p1133, F.v3234);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1141_NewSerial(void) {
struct yf1142 F;
memset((void *)&F, 0, sizeof F);
v924 = rt_range(rt_add(v924, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
{ rt_int rv3238 = v924;
return rv3238; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1146_Fresh(yarr a_p1148) {
struct yf1149 F;
memset((void *)&F, 0, sizeof F);
F.p1148 = a_p1148;
F.v3242 = yr1141_NewSerial();
yr986_SB();
yr997_SA(F.p1148);
yr1010_SI(F.v3242);
{ rt_int rv3243 = yr1016_SE();
return rv3243; }
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
F.v3250 = yr1016_SE();
v892 = INT64_C(0);
F.v3246 = ((rt_int *)(v888).p)[y_ix1(v888, F.v3250)];
F.lo3267 = ((rt_int *)(v888).p)[y_ix1(v888, F.v3250)];
F.hi3268 = rt_sub((rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.v3250)], ((rt_int *)(v890).p)[y_ix1(v890, F.v3250)])), INT64_C(1));
{ rt_int hi3272 = F.hi3268;
for (rt_int i3271 = F.lo3267; i3271 <= hi3272; i3271++) { F.c_3270 = i3271;
if ((((unsigned char *)(v883).p)[y_ix1(v883, F.c_3270)] == 32)) {
F.v3248 = yr1028_Intern(F.v3246, rt_range(rt_sub(F.c_3270, F.v3246), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v3246 = rt_range(rt_add(F.c_3270, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i3271 == hi3272) break;
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
({ unsigned char g; y_get(&v879, &g, sizeof g); F.v3279 = g; });
yr980_PoolAdd(F.v3279);
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
{ unsigned char rv3292 = 0;
return rv3292; }
}
{ unsigned char rv3293 = ((unsigned char *)(v883).p)[y_ix1(v883, F.p1195)];
return rv3293; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1200_EndsOperand(void) {
struct yf1201 F;
memset((void *)&F, 0, sizeof F);
if ((v1159 == INT64_C(0))) {
{ rt_int rv3301 = 0;
return rv3301; }
}
F.v3296 = ((rt_int *)(v1153).p)[y_ix1(v1153, v1159)];
F.v3298 = ((rt_int *)(v1155).p)[y_ix1(v1155, v1159)];
if ((((((((F.v3296 == v177)) || ((F.v3296 == v186))) || ((F.v3296 == v189))) || ((F.v3296 == v192))) || ((F.v3296 == v195))) || ((F.v3296 == v198)))) {
{ rt_int rv3303 = 1;
return rv3303; }
}
if ((F.v3296 == v183)) {
{ rt_int rv3304 = ((((F.v3298 == v567)) || ((F.v3298 == v573))) || ((F.v3298 == v588)));
return rv3304; }
}
if ((F.v3296 == v180)) {
{ rt_int rv3305 = (F.v3298 == v357);
return rv3305; }
}
{ rt_int rv3307 = 0;
return rv3307; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1205_DigitVal(unsigned char a_p1206) {
struct yf1207 F;
memset((void *)&F, 0, sizeof F);
F.p1206 = a_p1206;
if ((((F.p1206 >= 48)) && ((F.p1206 <= 57)))) {
{ rt_int rv3314 = rt_range(rt_sub(((rt_int *)(v931).p)[y_ix1(v931, F.p1206)], INT64_C(48)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return rv3314; }
}
if ((((F.p1206 >= 65)) && ((F.p1206 <= 70)))) {
{ rt_int rv3319 = rt_range(rt_sub(((rt_int *)(v931).p)[y_ix1(v931, F.p1206)], INT64_C(55)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return rv3319; }
}
{ rt_int rv3321 = INT64_C(99);
return rv3321; }
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
F.v3327 = INT64_C(10);
F.v3338 = 0;
F.v3341 = INT64_C(0);
F.v3344 = INT64_C(0);
F.v3347 = INT64_C(0);
F.v3350 = INT64_C(0);
F.v3353 = INT64_C(0);
if ((!(v1174 == INT64_C(0)))) {
F.v3327 = v1174;
}
v1174 = INT64_C(0);
F.v3330 = v1168;
while ((yr1205_DigitVal(yr1194_At(v1168)) < F.v3327)) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3332 = v1168;
F.v3334 = v1168;
F.v3336 = v1168;
if ((((yr1194_At(v1168) == 46)) && ((!(yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 46))))) {
F.v3338 = 1;
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3334 = v1168;
while ((yr1205_DigitVal(yr1194_At(v1168)) < F.v3327)) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3336 = v1168;
}
if ((yr1194_At(v1168) == 80)) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3350 = INT64_C(1);
if ((((((yr1194_At(v1168) == 45)) || ((yr1194_At(v1168) == 43)))) && yr974_IsDigit(yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))) {
if ((yr1194_At(v1168) == 45)) {
F.v3350 = INT64_C(-1);
}
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3347 = INT64_C(0);
while (yr974_IsDigit(yr1194_At(v1168))) {
F.v3347 = rt_range(rt_add((rt_mul(F.v3347, INT64_C(10))), yr1205_DigitVal(yr1194_At(v1168))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3347 = rt_range(rt_mul(F.v3347, F.v3350), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3341 = INT64_C(0);
F.lo3393 = F.v3330;
F.hi3394 = rt_sub(F.v3332, INT64_C(1));
{ rt_int hi3398 = F.hi3394;
for (rt_int i3397 = F.lo3393; i3397 <= hi3398; i3397++) { F.c_3396 = i3397;
F.v3341 = rt_range(rt_add((rt_mul(F.v3341, F.v3327)), yr1205_DigitVal(((unsigned char *)(v883).p)[y_ix1(v883, F.c_3396)])), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3397 == hi3398) break;
}}
F.v3353 = rt_range(rt_sub(F.v3336, F.v3334), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo3405 = F.v3334;
F.hi3406 = rt_sub(F.v3336, INT64_C(1));
{ rt_int hi3410 = F.hi3406;
for (rt_int i3409 = F.lo3405; i3409 <= hi3410; i3409++) { F.c_3408 = i3409;
F.v3341 = rt_range(rt_add((rt_mul(F.v3341, F.v3327)), yr1205_DigitVal(((unsigned char *)(v883).p)[y_ix1(v883, F.c_3408)])), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3409 == hi3410) break;
}}
yr986_SB();
yr997_SA(y_str("(", 1));
if (F.p1219) {
yr997_SA(y_str("-", 1));
}
yr997_SA(y_str("(double)", 8));
yr1010_SI(F.v3341);
yr997_SA(y_str(" * pow(", 7));
yr1010_SI(F.v3327);
yr997_SA(y_str(", ", 2));
yr1010_SI(rt_range(rt_sub(F.v3347, F.v3353), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr997_SA(y_str("))", 2));
F.v3356 = yr1016_SE();
yr1187_AddTok(v189, F.v3356);
return;
}
if (F.v3338) {
if ((!(F.v3327 == INT64_C(10)))) {
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
F.lo3435 = F.v3330;
F.hi3436 = rt_sub(v1168, INT64_C(1));
{ rt_int hi3440 = F.hi3436;
for (rt_int i3439 = F.lo3435; i3439 <= hi3440; i3439++) { F.c_3438 = i3439;
yr991_SC(((unsigned char *)(v883).p)[y_ix1(v883, F.c_3438)]);
if (i3439 == hi3440) break;
}}
F.v3356 = yr1016_SE();
yr1187_AddTok(v192, F.v3356);
return;
}
F.v3341 = INT64_C(0);
F.lo3445 = F.v3330;
F.hi3446 = rt_sub(F.v3332, INT64_C(1));
{ rt_int hi3450 = F.hi3446;
for (rt_int i3449 = F.lo3445; i3449 <= hi3450; i3449++) { F.c_3448 = i3449;
F.v3344 = yr1205_DigitVal(((unsigned char *)(v883).p)[y_ix1(v883, F.c_3448)]);
if ((F.v3341 > (rt_div((rt_sub(v876, F.v3344)), F.v3327)))) {
yr1211_LexError(y_str("integer literal too large", 25));
}
F.v3341 = rt_range(rt_add((rt_mul(F.v3341, F.v3327)), F.v3344), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3449 == hi3450) break;
}}
if (F.p1219) {
F.v3341 = rt_range(rt_neg(F.v3341), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yr1187_AddTok(v186, F.v3341);
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
F.v3461 = v1168;
F.v3463 = INT64_C(0);
F.v3465 = 1;
while (F.v3465) {
if (((((yr1194_At(F.v3461) == 32)) || ((yr1194_At(F.v3461) == 9))) || ((yr1194_At(F.v3461) == 13)))) {
F.v3461 = rt_range(rt_add(F.v3461, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr1194_At(F.v3461) == 10)) {
F.v3463 = rt_range(rt_add(F.v3463, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3461 = rt_range(rt_add(F.v3461, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v3465 = 0;
}
}
if ((!(yr1194_At(F.v3461) == 34))) {
goto yl_3466;
}
v1171 = rt_range(rt_add(v1171, F.v3463), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1168 = F.v3461;
}
yl_3466: ;
F.v3459 = yr1016_SE();
yr1187_AddTok(v198, F.v3459);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1229_Lex(void) {
struct yf1230 F;
memset((void *)&F, 0, sizeof F);
v1168 = v1162;
while ((v1168 <= v1165)) {
F.v3494 = ((unsigned char *)(v883).p)[y_ix1(v883, v1168)];
if ((F.v3494 == 10)) {
v1171 = rt_range(rt_add(v1171, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((((F.v3494 == 32)) || ((F.v3494 == 9))) || ((F.v3494 == 13))) || ((F.v3494 == 12)))) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v3494 == 40)) && ((yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 42)))) {
v1168 = rt_range(rt_add(v1168, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!((((yr1194_At(v1168) == 42)) && ((yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 41)))))) {
if ((((yr1194_At(v1168) == 10)) || ((v1168 > v1165)))) {
yr1211_LexError(y_str("a comment must close on its line", 32));
}
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1168 = rt_range(rt_add(v1168, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr974_IsDigit(F.v3494) || ((((v1174 == INT64_C(16))) && ((yr1205_DigitVal(F.v3494) < INT64_C(16))))))) {
yr1218_LexNumber(0);
} else if (((((((F.v3494 == 45)) || ((F.v3494 == 43)))) && (!yr1200_EndsOperand())) && ((yr974_IsDigit(yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || ((((v1174 == INT64_C(16))) && ((yr1205_DigitVal(yr1194_At(rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) < INT64_C(16))))))))) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1218_LexNumber((F.v3494 == 45));
} else if (yr968_IsLetter(F.v3494)) {
F.v3496 = v1168;
while ((yr968_IsLetter(yr1194_At(v1168)) || yr974_IsDigit(yr1194_At(v1168)))) {
v1168 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3504 = yr1028_Intern(F.v3496, rt_range(rt_sub(v1168, F.v3496), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((F.v3504 == v222)) {
v1174 = INT64_C(2);
} else if ((F.v3504 == v225)) {
v1174 = INT64_C(8);
} else if ((F.v3504 == v228)) {
v1174 = INT64_C(10);
} else if ((F.v3504 == v231)) {
v1174 = INT64_C(16);
} else if ((F.v3504 <= v462)) {
yr1187_AddTok(v180, F.v3504);
} else {
yr1187_AddTok(v177, F.v3504);
}
} else if ((F.v3494 == 39)) {
F.v3496 = rt_range(rt_add(v1168, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3498 = F.v3496;
while ((!(yr1194_At(F.v3498) == 39))) {
if (((((yr1194_At(F.v3498) == 10)) || ((yr1194_At(F.v3498) == 34))) || ((F.v3498 > v1165)))) {
yr1211_LexError(y_str("bad character literal", 21));
}
F.v3498 = rt_range(rt_add(F.v3498, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v3498 == F.v3496)) {
yr1211_LexError(y_str("empty character literal", 23));
}
F.v3504 = yr1028_Intern(F.v3496, rt_range(rt_sub(F.v3498, F.v3496), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1187_AddTok(v195, F.v3504);
v1168 = rt_range(rt_add(F.v3498, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v3494 == 34)) {
yr1224_LexString();
} else {
F.v3500 = INT64_C(0);
F.v3498 = rt_range(rt_add(v462, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((F.v3500 == INT64_C(0))) && ((F.v3498 <= v591)))) {
F.v3502 = ((rt_int *)(v890).p)[y_ix1(v890, F.v3498)];
F.v3508 = 1;
F.lo3580 = INT64_C(0);
F.hi3581 = rt_sub(F.v3502, INT64_C(1));
{ rt_int hi3585 = F.hi3581;
for (rt_int i3584 = F.lo3580; i3584 <= hi3585; i3584++) { F.c_3583 = i3584;
if ((!(yr1194_At(rt_range(rt_add(v1168, F.c_3583), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == ((unsigned char *)(v883).p)[y_ix1(v883, rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.v3498)], F.c_3583))]))) {
F.v3508 = 0;
}
if (i3584 == hi3585) break;
}}
if (F.v3508) {
F.v3500 = F.v3498;
}
F.v3498 = rt_range(rt_add(F.v3498, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v3500 == INT64_C(0))) {
yr1211_LexError(y_str("a character that is not in the language", 39));
}
yr1187_AddTok(v183, F.v3500);
v1168 = rt_range(rt_add(v1168, ((rt_int *)(v890).p)[y_ix1(v890, F.v3500)]), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
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
({ F.v3599 = rt_alloc(sizeof(yR95)); });
(*(yR95 *)rt_nil_check(F.v3599)) = ((yR95){ .f_kind = F.p1246, .f_line = F.p1247, .f_ival = INT64_C(0), .f_flag = INT64_C(0), .f_name = INT64_C(0), .f_text = INT64_C(0), .f_a = ((void *)0), .f_b = ((void *)0), .f_c = ((void *)0), .f_d = ((void *)0), .f_e = ((void *)0), .f_next = ((void *)0), .f_rep = ((void *)0), .f_sym = ((void *)0) });
{ void * rv3604 = F.v3599;
return rv3604; }
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
F.v3612 = INT64_C(0);
F.v3615 = F.p1261;
while ((!(F.v3615 == ((void *)0)))) {
F.v3612 = rt_range(rt_add(F.v3612, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3615 = ((*(yR95 *)rt_nil_check(F.v3615))).f_next;
}
{ rt_int rv3618 = F.v3612;
return rv3618; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1266_TK(void) {
struct yf1267 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv3620 = ((rt_int *)(v1153).p)[y_ix1(v1153, v1234)];
return rv3620; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1271_TV(void) {
struct yf1272 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv3622 = ((rt_int *)(v1155).p)[y_ix1(v1155, v1234)];
return rv3622; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1276_TLn(void) {
struct yf1277 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv3624 = ((rt_int *)(v1157).p)[y_ix1(v1157, v1234)];
return rv3624; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1281_IsAt(rt_int a_p1282, rt_int a_p1283) {
struct yf1284 F;
memset((void *)&F, 0, sizeof F);
F.p1282 = a_p1282;
F.p1283 = a_p1283;
F.v3629 = ((rt_int *)(v1153).p)[y_ix1(v1153, rt_add(v1234, F.p1282))];
{ rt_int rv3632 = (((((F.v3629 == v180)) || ((F.v3629 == v183)))) && ((((rt_int *)(v1155).p)[y_ix1(v1155, rt_add(v1234, F.p1282))] == F.p1283)));
return rv3632; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1288_Is(rt_int a_p1289) {
struct yf1290 F;
memset((void *)&F, 0, sizeof F);
F.p1289 = a_p1289;
{ rt_int rv3636 = yr1281_IsAt(INT64_C(0), F.p1289);
return rv3636; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1294_IsIdAt(rt_int a_p1295) {
struct yf1296 F;
memset((void *)&F, 0, sizeof F);
F.p1295 = a_p1295;
{ rt_int rv3640 = (((rt_int *)(v1153).p)[y_ix1(v1153, rt_add(v1234, F.p1295))] == v177);
return rv3640; }
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
{ rt_int rv3647 = 1;
return rv3647; }
}
{ rt_int rv3649 = 0;
return rv3649; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1311_TokText(void) {
struct yf1312 F;
memset((void *)&F, 0, sizeof F);
F.v3652 = yr1266_TK();
if ((((((F.v3652 == v177)) || ((F.v3652 == v180))) || ((F.v3652 == v183))) || ((F.v3652 == v195)))) {
{ rt_int rv3653 = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
return rv3653; }
}
if ((F.v3652 == v174)) {
{ rt_int rv3655 = yr1021_T(y_str("the end of the text", 19));
return rv3655; }
}
if ((F.v3652 == v186)) {
yr986_SB();
yr1010_SI(yr1271_TV());
{ rt_int rv3656 = yr1016_SE();
return rv3656; }
}
{ rt_int rv3658 = yr1021_T(y_str("a literal", 9));
return rv3658; }
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
F.v3662 = yr1016_SE();
yr1117_Fail(yr1276_TLn(), F.v3662);
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
F.v3667 = yr1016_SE();
yr1117_Fail(yr1276_TLn(), F.v3667);
}
F.v3667 = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
yr1300_Skip();
{ rt_int rv3669 = F.v3667;
return rv3669; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1327_CloseName(rt_int a_p1328, rt_int a_p1329) {
struct yf1330 F;
memset((void *)&F, 0, sizeof F);
F.p1328 = a_p1328;
F.p1329 = a_p1329;
if (((((yr1266_TK() == v177)) || ((yr1266_TK() == v180))) || ((yr1266_TK() == v183)))) {
F.v3674 = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
if ((F.v3674 == F.p1328)) {
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
F.v3678 = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
if ((yr1266_TK() == v177)) {
yr1300_Skip();
{ rt_int rv3679 = F.v3678;
return rv3679; }
}
if ((((yr1266_TK() == v180)) && (((((((((F.v3678 == v360)) || ((F.v3678 == v207))) || ((F.v3678 == v369))) || ((F.v3678 == v246))) || ((F.v3678 == v348))) || ((F.v3678 == v459))) || ((F.v3678 == v330)))))) {
yr1300_Skip();
{ rt_int rv3680 = F.v3678;
return rv3680; }
}
if (((((((((((((yr1266_TK() == v183)) && ((!(F.v3678 == v564)))) && ((!(F.v3678 == v567)))) && ((!(F.v3678 == v570)))) && ((!(F.v3678 == v573)))) && ((!(F.v3678 == v576)))) && ((!(F.v3678 == v579)))) && ((!(F.v3678 == v582)))) && ((!(F.v3678 == v585)))) && ((!(F.v3678 == v507)))) && ((!(F.v3678 == v504))))) {
yr1300_Skip();
{ rt_int rv3681 = F.v3678;
return rv3681; }
}
yr1124_FailS(yr1276_TLn(), y_str("expected a name", 15));
{ rt_int rv3684 = INT64_C(0);
return rv3684; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1339_IsLabel(rt_int a_p1340) {
struct yf1341 F;
memset((void *)&F, 0, sizeof F);
F.p1340 = a_p1340;
F.v3688 = v1237;
while ((!(F.v3688 == ((void *)0)))) {
if ((((*(yR95 *)rt_nil_check(F.v3688))).f_name == F.p1340)) {
{ rt_int rv3690 = 1;
return rv3690; }
}
F.v3688 = ((*(yR95 *)rt_nil_check(F.v3688))).f_next;
}
{ rt_int rv3692 = 0;
return rv3692; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1345_ImportItem(void) {
struct yf1346 F;
memset((void *)&F, 0, sizeof F);
F.v3695 = yr1245_NewNode(v597, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3695))).f_name = yr1334_ExtendedId();
if ((yr1294_IsIdAt(INT64_C(0)) && ((yr1271_TV() == v1239)))) {
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3695))).f_text = yr1322_Ident();
}
if (yr1305_Accept(v213)) {
((*(yR95 *)rt_nil_check(F.v3695))).f_ival = yr1334_ExtendedId();
}
{ void * rv3697 = F.v3695;
return rv3697; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1350_ParseModule(void) {
struct yf1351 F;
memset((void *)&F, 0, sizeof F);
F.v3700 = yr1245_NewNode(v594, yr1276_TLn());
F.v3702 = ((void *)0);
F.v3704 = ((void *)0);
F.v3706 = ((void *)0);
if (yr1305_Accept(v354)) {
((*(yR95 *)rt_nil_check(F.v3700))).f_flag = INT64_C(1);
} else {
yr1316_Expect(v351);
}
((*(yR95 *)rt_nil_check(F.v3700))).f_name = yr1322_Ident();
while (yr1305_Accept(v327)) {
for (;;) {
F.v3702 = yr1345_ImportItem();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3700))).f_a, &F.v3704, F.v3702);
if ((!yr1305_Accept(v576))) {
goto yl_3710;
}
}
yl_3710: ;
yr1316_Expect(v579);
}
while (yr1305_Accept(v306)) {
F.v3708 = INT64_C(0);
if ((((yr1288_Is(v366) || yr1288_Is(v444)) || yr1288_Is(v399)) || yr1288_Is(v453))) {
F.v3708 = yr1271_TV();
yr1300_Skip();
}
for (;;) {
F.v3702 = yr1345_ImportItem();
((*(yR95 *)rt_nil_check(F.v3702))).f_flag = F.v3708;
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3700))).f_b, &F.v3706, F.v3702);
if ((!yr1305_Accept(v576))) {
goto yl_3712;
}
}
yl_3712: ;
yr1316_Expect(v579);
}
((*(yR95 *)rt_nil_check(F.v3700))).f_c = yr1360_ParseBlock();
if ((((*(yR95 *)rt_nil_check(F.v3700))).f_flag == INT64_C(1))) {
yr1316_Expect(v279);
} else {
yr1316_Expect(v276);
}
yr1327_CloseName(((*(yR95 *)rt_nil_check(F.v3700))).f_name, ((*(yR95 *)rt_nil_check(F.v3700))).f_line);
{ void * rv3714 = F.v3700;
return rv3714; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1355_IsDeclWord(void) {
struct yf1356 F;
memset((void *)&F, 0, sizeof F);
if ((!(yr1266_TK() == v180))) {
{ rt_int rv3719 = 0;
return rv3719; }
}
F.v3717 = yr1271_TV();
{ rt_int rv3720 = (((((((((((((F.v3717 == v240)) || ((F.v3717 == v453))) || ((F.v3717 == v342))) || ((F.v3717 == v447))) || ((F.v3717 == v408))) || ((F.v3717 == v318))) || ((F.v3717 == v390))) || ((F.v3717 == v351))) || ((F.v3717 == v354))) || ((F.v3717 == v435))) || ((F.v3717 == v336))) || ((F.v3717 == v393)));
return rv3720; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1360_ParseBlock(void) {
struct yf1361 F;
memset((void *)&F, 0, sizeof F);
F.v3723 = yr1245_NewNode(v600, yr1276_TLn());
F.v3725 = ((void *)0);
F.v3727 = v1237;
while (yr1355_IsDeclWord()) {
yr1387_ParseDeclGroup(&((*(yR95 *)rt_nil_check(F.v3723))).f_a, &F.v3725);
while (yr1305_Accept(v579)) {
}
}
if (yr1288_Is(v300)) {
((*(yR95 *)rt_nil_check(F.v3723))).f_b = yr1365_ParseHandler();
F.v3729 = ((*(yR95 *)rt_nil_check(F.v3723))).f_b;
if (yr1305_Accept(v579)) {
}
}
((*(yR95 *)rt_nil_check(F.v3723))).f_c = yr1451_ParseStatements(1);
v1237 = F.v3727;
{ void * rv3731 = F.v3723;
return rv3731; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1365_ParseHandler(void) {
struct yf1366 F;
memset((void *)&F, 0, sizeof F);
F.v3734 = yr1245_NewNode(v603, yr1276_TLn());
F.v3736 = ((void *)0);
F.v3738 = ((void *)0);
F.v3740 = ((void *)0);
F.v3742 = ((void *)0);
yr1316_Expect(v300);
while (yr1305_Accept(v237)) {
F.v3736 = yr1245_NewNode(v606, yr1276_TLn());
F.v3742 = ((void *)0);
for (;;) {
F.v3740 = yr1245_NewNode(v639, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3740))).f_name = yr1322_Ident();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3736))).f_a, &F.v3742, F.v3740);
if ((!yr1305_Accept(v576))) {
goto yl_3743;
}
}
yl_3743: ;
yr1316_Expect(v504);
((*(yR95 *)rt_nil_check(F.v3736))).f_b = yr1451_ParseStatements(0);
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3734))).f_a, &F.v3738, F.v3736);
}
if (yr1305_Accept(v252)) {
((*(yR95 *)rt_nil_check(F.v3734))).f_flag = INT64_C(1);
((*(yR95 *)rt_nil_check(F.v3734))).f_b = yr1451_ParseStatements(0);
}
yr1316_Expect(v261);
{ void * rv3747 = F.v3734;
return rv3747; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1370_ParseNames(void) {
struct yf1371 F;
memset((void *)&F, 0, sizeof F);
F.v3750 = ((void *)0);
F.v3752 = ((void *)0);
F.v3754 = ((void *)0);
for (;;) {
F.v3754 = yr1245_NewNode(v639, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3754))).f_name = yr1322_Ident();
if (yr1305_Accept(v219)) {
((*(yR95 *)rt_nil_check(F.v3754))).f_a = yr1513_ParseExpr();
}
yr1252_Link(&F.v3750, &F.v3752, F.v3754);
if ((!yr1305_Accept(v576))) {
goto yl_3755;
}
}
yl_3755: ;
{ void * rv3756 = F.v3750;
return rv3756; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1375_SimpleEntry(rt_int a_p1376) {
struct yf1377 F;
memset((void *)&F, 0, sizeof F);
F.p1376 = a_p1376;
if ((F.p1376 == v240)) {
F.v3760 = yr1245_NewNode(v609, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3760))).f_a = yr1370_ParseNames();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3760))).f_b = yr1416_ParseRep();
yr1316_Expect(v555);
((*(yR95 *)rt_nil_check(F.v3760))).f_c = yr1513_ParseExpr();
} else if ((F.p1376 == v453)) {
F.v3760 = yr1245_NewNode(v612, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3760))).f_a = yr1370_ParseNames();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3760))).f_b = yr1416_ParseRep();
if (yr1305_Accept(v501)) {
((*(yR95 *)rt_nil_check(F.v3760))).f_c = yr1513_ParseExpr();
}
} else if ((F.p1376 == v447)) {
F.v3760 = yr1245_NewNode(v618, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3760))).f_name = yr1322_Ident();
yr1316_Expect(v555);
((*(yR95 *)rt_nil_check(F.v3760))).f_b = yr1436_ParseConcrete1();
} else {
F.v3760 = yr1245_NewNode(v621, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3760))).f_name = yr1322_Ident();
yr1316_Expect(v555);
((*(yR95 *)rt_nil_check(F.v3760))).f_b = yr1416_ParseRep();
}
{ void * rv3761 = F.v3760;
return rv3761; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1381_Continues(rt_int a_p1382) {
struct yf1383 F;
memset((void *)&F, 0, sizeof F);
F.p1382 = a_p1382;
if ((!((yr1288_Is(v579) && yr1294_IsIdAt(INT64_C(1)))))) {
{ rt_int rv3766 = 0;
return rv3766; }
}
if (yr1339_IsLabel(rt_range(((rt_int *)(v1155).p)[y_ix1(v1155, rt_add(v1234, INT64_C(1)))], INT64_C(0), INT64_C(4000000)))) {
{ rt_int rv3770 = 0;
return rv3770; }
}
if ((((F.p1382 == v240)) || ((F.p1382 == v453)))) {
{ rt_int rv3774 = ((yr1281_IsAt(INT64_C(2), v576) || yr1281_IsAt(INT64_C(2), v582)) || yr1281_IsAt(INT64_C(2), v219));
return rv3774; }
}
{ rt_int rv3776 = yr1281_IsAt(INT64_C(2), v555);
return rv3776; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1387_ParseDeclGroup(void * * a_p1388, void * * a_p1389) {
struct yf1390 F;
memset((void *)&F, 0, sizeof F);
F.p1388 = a_p1388;
F.p1389 = a_p1389;
F.v3781 = yr1271_TV();
if ((((((F.v3781 == v240)) || ((F.v3781 == v453))) || ((F.v3781 == v447))) || ((F.v3781 == v408)))) {
yr1300_Skip();
yr1252_Link(&(*F.p1388), &(*F.p1389), yr1375_SimpleEntry(F.v3781));
while (yr1381_Continues(F.v3781)) {
yr1300_Skip();
yr1252_Link(&(*F.p1388), &(*F.p1389), yr1375_SimpleEntry(F.v3781));
}
return;
}
if ((F.v3781 == v342)) {
F.v3783 = yr1245_NewNode(v615, yr1276_TLn());
yr1300_Skip();
F.v3787 = ((void *)0);
for (;;) {
F.v3785 = yr1245_NewNode(v639, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3785))).f_name = yr1322_Ident();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3783))).f_a, &F.v3787, F.v3785);
if ((!yr1305_Accept(v576))) {
goto yl_3788;
}
}
yl_3788: ;
F.v3785 = ((*(yR95 *)rt_nil_check(F.v3783))).f_a;
while ((!(F.v3785 == ((void *)0)))) {
((*(yR95 *)rt_nil_check(F.v3783))).f_b = yr1245_NewNode(v639, ((*(yR95 *)rt_nil_check(F.v3785))).f_line);
((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v3783))).f_b))).f_name = ((*(yR95 *)rt_nil_check(F.v3785))).f_name;
((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v3783))).f_b))).f_next = v1237;
v1237 = ((*(yR95 *)rt_nil_check(F.v3783))).f_b;
F.v3785 = ((*(yR95 *)rt_nil_check(F.v3785))).f_next;
}
((*(yR95 *)rt_nil_check(F.v3783))).f_b = ((void *)0);
yr1252_Link(&(*F.p1388), &(*F.p1389), F.v3783);
return;
}
yr1252_Link(&(*F.p1388), &(*F.p1389), yr1394_ParseDecl());
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1394_ParseDecl(void) {
struct yf1395 F;
memset((void *)&F, 0, sizeof F);
F.v3797 = yr1271_TV();
F.v3799 = yr1276_TLn();
if ((((F.v3797 == v318)) || ((F.v3797 == v390)))) {
F.v3791 = yr1245_NewNode(v624, F.v3799);
yr1300_Skip();
if ((F.v3797 == v318)) {
((*(yR95 *)rt_nil_check(F.v3791))).f_flag = INT64_C(1);
}
if ((yr1288_Is(v309) || yr1288_Is(v405))) {
((*(yR95 *)rt_nil_check(F.v3791))).f_ival = yr1271_TV();
yr1300_Skip();
}
((*(yR95 *)rt_nil_check(F.v3791))).f_name = yr1334_ExtendedId();
yr1399_ParseFormals(F.v3791);
if (yr1305_Accept(v333)) {
((*(yR95 *)rt_nil_check(F.v3791))).f_e = yr1245_NewNode(v639, F.v3799);
}
((*(yR95 *)rt_nil_check(F.v3791))).f_c = yr1360_ParseBlock();
if ((F.v3797 == v318)) {
yr1316_Expect(v267);
} else {
yr1316_Expect(v282);
}
yr1327_CloseName(((*(yR95 *)rt_nil_check(F.v3791))).f_name, F.v3799);
{ void * rv3803 = F.v3791;
return rv3803; }
}
if ((((F.v3797 == v351)) || ((F.v3797 == v354)))) {
{ void * rv3804 = yr1350_ParseModule();
return rv3804; }
}
if ((F.v3797 == v435)) {
F.v3791 = yr1245_NewNode(v630, F.v3799);
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3791))).f_name = yr1322_Ident();
yr1316_Expect(v564);
F.v3795 = ((void *)0);
for (;;) {
F.v3793 = yr1245_NewNode(v639, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3793))).f_name = yr1322_Ident();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3791))).f_a, &F.v3795, F.v3793);
if ((!yr1305_Accept(v576))) {
goto yl_3805;
}
}
yl_3805: ;
yr1316_Expect(v567);
F.v3801 = v1234;
((*(yR95 *)rt_nil_check(F.v3791))).f_b = yr1350_ParseModule();
((*(yR95 *)rt_nil_check(F.v3791))).f_ival = F.v3801;
((*(yR95 *)rt_nil_check(F.v3791))).f_flag = v1234;
yr1316_Expect(v294);
yr1327_CloseName(((*(yR95 *)rt_nil_check(F.v3791))).f_name, F.v3799);
{ void * rv3806 = F.v3791;
return rv3806; }
}
if ((F.v3797 == v336)) {
F.v3791 = yr1245_NewNode(v633, F.v3799);
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3791))).f_name = yr1322_Ident();
yr1316_Expect(v564);
F.v3795 = ((void *)0);
for (;;) {
F.v3793 = yr1245_NewNode(v639, yr1276_TLn());
if ((yr1266_TK() == v186)) {
((*(yR95 *)rt_nil_check(F.v3793))).f_flag = INT64_C(1);
((*(yR95 *)rt_nil_check(F.v3793))).f_ival = yr1271_TV();
yr1300_Skip();
} else {
((*(yR95 *)rt_nil_check(F.v3793))).f_name = yr1334_ExtendedId();
}
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3791))).f_a, &F.v3795, F.v3793);
if ((!yr1305_Accept(v576))) {
goto yl_3807;
}
}
yl_3807: ;
yr1316_Expect(v567);
{ void * rv3809 = F.v3791;
return rv3809; }
}
if ((F.v3797 == v393)) {
F.v3791 = yr1245_NewNode(v636, F.v3799);
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3791))).f_name = yr1322_Ident();
yr1399_ParseFormals(F.v3791);
if ((!(((*(yR95 *)rt_nil_check(F.v3791))).f_b == ((void *)0)))) {
yr1124_FailS(F.v3799, y_str("a process returns no value", 26));
}
if (yr1305_Accept(v387)) {
((*(yR95 *)rt_nil_check(F.v3791))).f_d = yr1513_ParseExpr();
}
if (yr1305_Accept(v339)) {
((*(yR95 *)rt_nil_check(F.v3791))).f_e = yr1513_ParseExpr();
}
if (yr1305_Accept(v429)) {
F.v3793 = yr1513_ParseExpr();
}
((*(yR95 *)rt_nil_check(F.v3791))).f_c = yr1360_ParseBlock();
yr1316_Expect(v285);
yr1327_CloseName(((*(yR95 *)rt_nil_check(F.v3791))).f_name, F.v3799);
{ void * rv3811 = F.v3791;
return rv3811; }
}
yr1124_FailS(F.v3799, y_str("expected a declaration", 22));
{ void * rv3813 = ((void *)0);
return rv3813; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1399_ParseFormals(void * a_p1400) {
struct yf1401 F;
memset((void *)&F, 0, sizeof F);
F.p1400 = a_p1400;
F.v3817 = ((void *)0);
F.v3819 = ((void *)0);
if (yr1305_Accept(v414)) {
((*(yR95 *)rt_nil_check(F.p1400))).f_b = yr1416_ParseRep();
}
yr1316_Expect(v564);
while ((!yr1288_Is(v567))) {
if (yr1305_Accept(v240)) {
F.v3821 = v867;
} else if (yr1305_Accept(v375)) {
F.v3821 = v870;
} else if (yr1305_Accept(v453)) {
F.v3821 = v873;
} else {
yr1124_FailS(yr1276_TLn(), y_str("a formal parameter is CONST, OUT or VAR", 39));
}
for (;;) {
F.v3817 = yr1245_NewNode(v627, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3817))).f_ival = F.v3821;
((*(yR95 *)rt_nil_check(F.v3817))).f_a = yr1370_ParseNames();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3817))).f_b = yr1405_ParseFormalRep();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.p1400))).f_a, &F.v3819, F.v3817);
if ((!((((yr1288_Is(v579) || yr1288_Is(v576))) && yr1294_IsIdAt(INT64_C(1)))))) {
goto yl_3823;
}
yr1300_Skip();
}
yl_3823: ;
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
F.v3827 = yr1245_NewNode(v666, yr1276_TLn());
yr1300_Skip();
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3827))).f_a = yr1513_ParseExpr();
yr1300_Skip();
yr1316_Expect(v363);
((*(yR95 *)rt_nil_check(F.v3827))).f_b = yr1416_ParseRep();
yr1316_Expect(v567);
{ void * rv3833 = F.v3827;
return rv3833; }
}
if (yr1288_Is(v432)) {
F.v3827 = yr1245_NewNode(v669, yr1276_TLn());
yr1300_Skip();
{ void * rv3834 = F.v3827;
return rv3834; }
}
{ void * rv3835 = yr1416_ParseRep();
return rv3835; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1410_IsStructWord(rt_int a_p1411) {
struct yf1412 F;
memset((void *)&F, 0, sizeof F);
F.p1411 = a_p1411;
F.v3839 = ((rt_int *)(v1155).p)[y_ix1(v1155, rt_add(v1234, F.p1411))];
if ((!(((rt_int *)(v1153).p)[y_ix1(v1153, rt_add(v1234, F.p1411))] == v180))) {
{ rt_int rv3843 = 0;
return rv3843; }
}
{ rt_int rv3844 = (((((((((F.v3839 == v450)) || ((F.v3839 == v372))) || ((F.v3839 == v204))) || ((F.v3839 == v210))) || ((F.v3839 == v402))) || ((F.v3839 == v312))) || ((F.v3839 == v381))) || ((F.v3839 == v423)));
return rv3844; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1416_ParseRep(void) {
struct yf1417 F;
memset((void *)&F, 0, sizeof F);
if ((yr1294_IsIdAt(INT64_C(0)) && ((yr1410_IsStructWord(INT64_C(1)) || ((yr1294_IsIdAt(INT64_C(1)) && yr1281_IsAt(INT64_C(2), v570))))))) {
F.v3847 = yr1322_Ident();
F.v3849 = yr1421_ParseConcrete();
((*(yR95 *)rt_nil_check(F.v3849))).f_text = F.v3847;
{ void * rv3854 = F.v3849;
return rv3854; }
}
{ void * rv3855 = yr1421_ParseConcrete();
return rv3855; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1421_ParseConcrete(void) {
struct yf1422 F;
memset((void *)&F, 0, sizeof F);
F.v3858 = yr1436_ParseConcrete1();
if (yr1305_Accept(v378)) {
if (((((yr1266_TK() == v186)) || ((yr1266_TK() == v177))) || yr1288_Is(v564))) {
F.v3860 = yr1518_ParseSimple();
}
}
if (yr1305_Accept(v201)) {
F.v3860 = yr1518_ParseSimple();
}
{ void * rv3861 = F.v3858;
return rv3861; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1426_ParseIds(void) {
struct yf1427 F;
memset((void *)&F, 0, sizeof F);
F.v3864 = ((void *)0);
F.v3866 = ((void *)0);
F.v3868 = ((void *)0);
for (;;) {
F.v3868 = yr1245_NewNode(v639, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3868))).f_name = yr1322_Ident();
yr1252_Link(&F.v3864, &F.v3866, F.v3868);
if ((!yr1305_Accept(v576))) {
goto yl_3869;
}
}
yl_3869: ;
{ void * rv3870 = F.v3864;
return rv3870; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1431_ParseFieldGroups(void) {
struct yf1432 F;
memset((void *)&F, 0, sizeof F);
F.v3873 = ((void *)0);
F.v3875 = ((void *)0);
F.v3877 = ((void *)0);
while ((yr1288_Is(v240) || yr1288_Is(v453))) {
F.v3879 = yr1271_TV();
yr1300_Skip();
for (;;) {
F.v3877 = yr1245_NewNode(v675, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3877))).f_ival = F.v3879;
((*(yR95 *)rt_nil_check(F.v3877))).f_a = yr1370_ParseNames();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3877))).f_b = yr1416_ParseRep();
yr1252_Link(&F.v3873, &F.v3875, F.v3877);
if ((!((yr1288_Is(v579) && yr1294_IsIdAt(INT64_C(1)))))) {
goto yl_3880;
}
yr1300_Skip();
}
yl_3880: ;
if ((!yr1305_Accept(v579))) {
{ void * rv3882 = F.v3873;
return rv3882; }
}
}
{ void * rv3883 = F.v3873;
return rv3883; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1436_ParseConcrete1(void) {
struct yf1437 F;
memset((void *)&F, 0, sizeof F);
F.v3900 = yr1276_TLn();
if ((yr1266_TK() == v177)) {
F.v3886 = yr1245_NewNode(v642, F.v3900);
((*(yR95 *)rt_nil_check(F.v3886))).f_name = yr1322_Ident();
((*(yR95 *)rt_nil_check(F.v3886))).f_a = yr1441_ParseQualifier();
{ void * rv3901 = F.v3886;
return rv3901; }
}
if ((!(yr1266_TK() == v180))) {
yr1124_FailS(F.v3900, y_str("expected a representation", 25));
}
F.v3898 = yr1271_TV();
if ((((F.v3898 == v450)) || ((F.v3898 == v372)))) {
F.v3886 = yr1245_NewNode(v645, F.v3900);
if ((F.v3898 == v372)) {
((*(yR95 *)rt_nil_check(F.v3886))).f_flag = INT64_C(1);
}
yr1300_Skip();
yr1316_Expect(v564);
((*(yR95 *)rt_nil_check(F.v3886))).f_a = yr1426_ParseIds();
yr1316_Expect(v567);
((*(yR95 *)rt_nil_check(F.v3886))).f_b = yr1441_ParseQualifier();
{ void * rv3904 = F.v3886;
return rv3904; }
}
if ((F.v3898 == v204)) {
F.v3886 = yr1245_NewNode(v648, F.v3900);
yr1300_Skip();
yr1316_Expect(v564);
F.v3896 = ((void *)0);
for (;;) {
if ((!(yr1266_TK() == v195))) {
yr1124_FailS(yr1276_TLn(), y_str("an ALPHABET lists character literals", 36));
}
F.v3894 = yr1245_NewNode(v738, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3894))).f_text = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
yr1300_Skip();
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3886))).f_a, &F.v3896, F.v3894);
if ((!yr1305_Accept(v576))) {
goto yl_3905;
}
}
yl_3905: ;
yr1316_Expect(v567);
((*(yR95 *)rt_nil_check(F.v3886))).f_b = yr1441_ParseQualifier();
{ void * rv3907 = F.v3886;
return rv3907; }
}
if ((F.v3898 == v210)) {
F.v3886 = yr1245_NewNode(v651, F.v3900);
yr1300_Skip();
yr1316_Expect(v564);
F.v3896 = ((void *)0);
for (;;) {
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3886))).f_a, &F.v3896, yr1416_ParseRep());
if ((!yr1305_Accept(v576))) {
goto yl_3908;
}
}
yl_3908: ;
yr1316_Expect(v363);
((*(yR95 *)rt_nil_check(F.v3886))).f_b = yr1416_ParseRep();
yr1316_Expect(v567);
{ void * rv3909 = F.v3886;
return rv3909; }
}
if ((F.v3898 == v402)) {
F.v3886 = yr1245_NewNode(v654, F.v3900);
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3886))).f_a = yr1431_ParseFieldGroups();
if (yr1305_Accept(v420)) {
F.v3888 = yr1245_NewNode(v678, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v3888))).f_name = yr1322_Ident();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3888))).f_b = yr1416_ParseRep();
F.v3892 = ((void *)0);
while (yr1305_Accept(v237)) {
F.v3890 = yr1245_NewNode(v681, yr1276_TLn());
F.v3896 = ((void *)0);
for (;;) {
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3890))).f_a, &F.v3896, yr1513_ParseExpr());
if ((!yr1305_Accept(v576))) {
goto yl_3910;
}
}
yl_3910: ;
yr1316_Expect(v504);
((*(yR95 *)rt_nil_check(F.v3890))).f_b = yr1431_ParseFieldGroups();
while (yr1305_Accept(v579)) {
}
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3888))).f_a, &F.v3892, F.v3890);
}
yr1316_Expect(v291);
if (yr1305_Accept(v579)) {
}
((*(yR95 *)rt_nil_check(F.v3886))).f_b = F.v3888;
}
yr1316_Expect(v288);
{ void * rv3911 = F.v3886;
return rv3911; }
}
if (((((F.v3898 == v312)) || ((F.v3898 == v381))) || ((F.v3898 == v423)))) {
if ((F.v3898 == v312)) {
F.v3886 = yr1245_NewNode(v657, F.v3900);
} else if ((F.v3898 == v381)) {
F.v3886 = yr1245_NewNode(v660, F.v3900);
} else {
F.v3886 = yr1245_NewNode(v663, F.v3900);
}
yr1300_Skip();
yr1316_Expect(v564);
((*(yR95 *)rt_nil_check(F.v3886))).f_a = yr1416_ParseRep();
yr1316_Expect(v567);
{ void * rv3912 = F.v3886;
return rv3912; }
}
yr1124_FailS(F.v3900, y_str("expected a representation", 25));
{ void * rv3914 = ((void *)0);
return rv3914; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1441_ParseQualifier(void) {
struct yf1442 F;
memset((void *)&F, 0, sizeof F);
if ((!yr1288_Is(v570))) {
{ void * rv3918 = ((void *)0);
return rv3918; }
}
F.v3917 = yr1245_NewNode(v672, yr1276_TLn());
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3917))).f_a = yr1513_ParseExpr();
yr1316_Expect(v507);
((*(yR95 *)rt_nil_check(F.v3917))).f_b = yr1513_ParseExpr();
yr1316_Expect(v573);
if (yr1305_Accept(v417)) {
((*(yR95 *)rt_nil_check(F.v3917))).f_c = yr1518_ParseSimple();
} else if (yr1305_Accept(v384)) {
((*(yR95 *)rt_nil_check(F.v3917))).f_d = yr1518_ParseSimple();
}
{ void * rv3919 = F.v3917;
return rv3919; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1446_IsStop(void) {
struct yf1447 F;
memset((void *)&F, 0, sizeof F);
if ((yr1266_TK() == v174)) {
{ rt_int rv3924 = 1;
return rv3924; }
}
if ((!(yr1266_TK() == v180))) {
{ rt_int rv3926 = 0;
return rv3926; }
}
F.v3922 = yr1271_TV();
{ rt_int rv3927 = ((((((((((((((((F.v3922 == v255)) || ((F.v3922 == v252))) || ((F.v3922 == v270))) || ((F.v3922 == v237))) || ((F.v3922 == v291))) || ((F.v3922 == v297))) || ((F.v3922 == v264))) || ((F.v3922 == v273))) || ((F.v3922 == v258))) || ((F.v3922 == v261))) || ((F.v3922 == v282))) || ((F.v3922 == v267))) || ((F.v3922 == v285))) || ((F.v3922 == v276))) || ((F.v3922 == v279)));
return rv3927; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1451_ParseStatements(rt_int a_p1452) {
struct yf1453 F;
memset((void *)&F, 0, sizeof F);
F.p1452 = a_p1452;
F.v3931 = ((void *)0);
F.v3933 = ((void *)0);
F.v3935 = ((void *)0);
for (;;) {
while (yr1305_Accept(v579)) {
}
if (yr1446_IsStop()) {
goto yl_3938;
}
F.v3937 = INT64_C(0);
if (((F.p1452 && yr1294_IsIdAt(INT64_C(0))) && yr1281_IsAt(INT64_C(1), v582))) {
F.v3937 = yr1322_Ident();
yr1300_Skip();
}
F.v3935 = yr1457_ParseStatement();
((*(yR95 *)rt_nil_check(F.v3935))).f_text = F.v3937;
yr1252_Link(&F.v3931, &F.v3933, F.v3935);
if ((!yr1288_Is(v579))) {
goto yl_3938;
}
}
yl_3938: ;
{ void * rv3942 = F.v3931;
return rv3942; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1457_ParseStatement(void) {
struct yf1458 F;
memset((void *)&F, 0, sizeof F);
F.v3959 = yr1276_TLn();
if ((yr1266_TK() == v180)) {
F.v3957 = yr1271_TV();
if ((F.v3957 == v216)) {
yr1300_Skip();
F.v3945 = yr1245_NewNode(v690, F.v3959);
((*(yR95 *)rt_nil_check(F.v3945))).f_a = yr1513_ParseExpr();
{ void * rv3960 = F.v3945;
return rv3960; }
}
if ((F.v3957 == v321)) {
yr1300_Skip();
F.v3945 = yr1245_NewNode(v693, F.v3959);
((*(yR95 *)rt_nil_check(F.v3945))).f_name = yr1322_Ident();
{ void * rv3961 = F.v3945;
return rv3961; }
}
if ((F.v3957 == v303)) {
yr1300_Skip();
F.v3945 = yr1245_NewNode(v696, F.v3959);
((*(yR95 *)rt_nil_check(F.v3945))).f_name = yr1322_Ident();
{ void * rv3962 = F.v3945;
return rv3962; }
}
if ((F.v3957 == v411)) {
yr1300_Skip();
F.v3945 = yr1245_NewNode(v699, F.v3959);
if ((!((yr1288_Is(v579) || yr1446_IsStop())))) {
((*(yR95 *)rt_nil_check(F.v3945))).f_a = yr1513_ParseExpr();
}
{ void * rv3963 = F.v3945;
return rv3963; }
}
if ((F.v3957 == v438)) {
yr1300_Skip();
{ void * rv3964 = yr1245_NewNode(v702, F.v3959);
return rv3964; }
}
if ((F.v3957 == v396)) {
yr1300_Skip();
F.v3945 = yr1245_NewNode(v705, F.v3959);
if (yr1294_IsIdAt(INT64_C(0))) {
((*(yR95 *)rt_nil_check(F.v3945))).f_name = yr1322_Ident();
}
{ void * rv3966 = F.v3945;
return rv3966; }
}
if ((F.v3957 == v324)) {
yr1300_Skip();
F.v3945 = yr1245_NewNode(v708, F.v3959);
F.v3949 = ((void *)0);
F.v3947 = yr1245_NewNode(v726, F.v3959);
((*(yR95 *)rt_nil_check(F.v3947))).f_a = yr1513_ParseExpr();
yr1316_Expect(v441);
((*(yR95 *)rt_nil_check(F.v3947))).f_b = yr1451_ParseStatements(0);
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3945))).f_a, &F.v3949, F.v3947);
while (yr1288_Is(v255)) {
F.v3947 = yr1245_NewNode(v726, yr1276_TLn());
yr1300_Skip();
((*(yR95 *)rt_nil_check(F.v3947))).f_a = yr1513_ParseExpr();
yr1316_Expect(v441);
((*(yR95 *)rt_nil_check(F.v3947))).f_b = yr1451_ParseStatements(0);
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3945))).f_a, &F.v3949, F.v3947);
}
if (yr1305_Accept(v252)) {
((*(yR95 *)rt_nil_check(F.v3945))).f_flag = INT64_C(1);
((*(yR95 *)rt_nil_check(F.v3945))).f_b = yr1451_ParseStatements(0);
}
yr1316_Expect(v270);
{ void * rv3971 = F.v3945;
return rv3971; }
}
if ((F.v3957 == v420)) {
yr1300_Skip();
F.v3945 = yr1245_NewNode(v711, F.v3959);
((*(yR95 *)rt_nil_check(F.v3945))).f_a = yr1513_ParseExpr();
F.v3949 = ((void *)0);
while (yr1288_Is(v237)) {
F.v3947 = yr1245_NewNode(v726, yr1276_TLn());
yr1300_Skip();
F.v3953 = ((void *)0);
for (;;) {
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3947))).f_a, &F.v3953, yr1513_ParseExpr());
if ((!yr1305_Accept(v576))) {
goto yl_3972;
}
}
yl_3972: ;
yr1316_Expect(v504);
((*(yR95 *)rt_nil_check(F.v3947))).f_b = yr1451_ParseStatements(0);
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v3945))).f_b, &F.v3949, F.v3947);
}
if (yr1305_Accept(v252)) {
((*(yR95 *)rt_nil_check(F.v3945))).f_flag = INT64_C(1);
((*(yR95 *)rt_nil_check(F.v3945))).f_c = yr1451_ParseStatements(0);
}
yr1316_Expect(v291);
{ void * rv3976 = F.v3945;
return rv3976; }
}
if ((F.v3957 == v456)) {
yr1300_Skip();
F.v3945 = yr1245_NewNode(v714, F.v3959);
((*(yR95 *)rt_nil_check(F.v3945))).f_a = yr1513_ParseExpr();
yr1316_Expect(v249);
((*(yR95 *)rt_nil_check(F.v3945))).f_b = yr1451_ParseStatements(0);
yr1316_Expect(v297);
{ void * rv3978 = F.v3945;
return rv3978; }
}
if ((F.v3957 == v315)) {
yr1300_Skip();
F.v3945 = yr1245_NewNode(v717, F.v3959);
((*(yR95 *)rt_nil_check(F.v3945))).f_name = yr1322_Ident();
yr1316_Expect(v582);
((*(yR95 *)rt_nil_check(F.v3945))).f_a = yr1416_ParseRep();
yr1316_Expect(v249);
((*(yR95 *)rt_nil_check(F.v3945))).f_b = yr1451_ParseStatements(0);
yr1316_Expect(v264);
{ void * rv3980 = F.v3945;
return rv3980; }
}
if ((F.v3957 == v345)) {
yr1300_Skip();
F.v3945 = yr1245_NewNode(v720, F.v3959);
((*(yR95 *)rt_nil_check(F.v3945))).f_name = yr1322_Ident();
((*(yR95 *)rt_nil_check(F.v3945))).f_b = yr1451_ParseStatements(0);
yr1316_Expect(v273);
yr1327_CloseName(((*(yR95 *)rt_nil_check(F.v3945))).f_name, F.v3959);
{ void * rv3982 = F.v3945;
return rv3982; }
}
if ((((F.v3957 == v234)) || ((F.v3957 == v426)))) {
F.v3945 = yr1245_NewNode(v723, F.v3959);
if (yr1305_Accept(v426)) {
((*(yR95 *)rt_nil_check(F.v3945))).f_flag = INT64_C(1);
}
yr1316_Expect(v234);
((*(yR95 *)rt_nil_check(F.v3945))).f_a = yr1360_ParseBlock();
yr1316_Expect(v258);
{ void * rv3984 = F.v3945;
return rv3984; }
}
}
F.v3955 = yr1544_ParseDesignator();
if (yr1305_Accept(v501)) {
F.v3945 = yr1245_NewNode(v684, F.v3959);
((*(yR95 *)rt_nil_check(F.v3945))).f_a = F.v3955;
((*(yR95 *)rt_nil_check(F.v3945))).f_b = yr1513_ParseExpr();
{ void * rv3985 = F.v3945;
return rv3985; }
}
if ((!(((*(yR95 *)rt_nil_check(F.v3955))).f_kind == v750))) {
yr1124_FailS(F.v3959, y_str("expected a statement", 20));
}
F.v3945 = yr1245_NewNode(v687, F.v3959);
((*(yR95 *)rt_nil_check(F.v3945))).f_a = F.v3955;
{ void * rv3987 = F.v3945;
return rv3987; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1462_OpAt(void) {
struct yf1463 F;
memset((void *)&F, 0, sizeof F);
if ((((yr1266_TK() == v183)) || ((yr1266_TK() == v180)))) {
{ rt_int rv3989 = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
return rv3989; }
}
{ rt_int rv3991 = INT64_C(0);
return rv3991; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1467_IsRel(rt_int a_p1468) {
struct yf1469 F;
memset((void *)&F, 0, sizeof F);
F.p1468 = a_p1468;
{ rt_int rv3994 = ((((((((((((((((((((F.p1468 == v330)) || ((F.p1468 == v540))) || ((F.p1468 == v555))) || ((F.p1468 == v558))) || ((F.p1468 == v510))) || ((F.p1468 == v561))) || ((F.p1468 == v513))) || ((F.p1468 == v516))) || ((F.p1468 == v471))) || ((F.p1468 == v519))) || ((F.p1468 == v474))) || ((F.p1468 == v522))) || ((F.p1468 == v483))) || ((F.p1468 == v477))) || ((F.p1468 == v465))) || ((F.p1468 == v525))) || ((F.p1468 == v486))) || ((F.p1468 == v480))) || ((F.p1468 == v468)));
return rv3994; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1473_IsAssocMul(rt_int a_p1474) {
struct yf1475 F;
memset((void *)&F, 0, sizeof F);
F.p1474 = a_p1474;
{ rt_int rv3997 = (((F.p1474 == v549)) || ((F.p1474 == v207)));
return rv3997; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1479_IsNonAssocMul(rt_int a_p1480) {
struct yf1481 F;
memset((void *)&F, 0, sizeof F);
F.p1480 = a_p1480;
{ rt_int rv4000 = ((((((((F.p1480 == v552)) || ((F.p1480 == v246))) || ((F.p1480 == v348))) || ((F.p1480 == v528))) || ((F.p1480 == v489))) || ((F.p1480 == v531))) || ((F.p1480 == v492)));
return rv4000; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1485_IsAssocAdd(rt_int a_p1486) {
struct yf1487 F;
memset((void *)&F, 0, sizeof F);
F.p1486 = a_p1486;
{ rt_int rv4003 = (((F.p1486 == v543)) || ((F.p1486 == v369)));
return rv4003; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1491_IsNonAssocAdd(rt_int a_p1492) {
struct yf1493 F;
memset((void *)&F, 0, sizeof F);
F.p1492 = a_p1492;
{ rt_int rv4006 = (((((((F.p1492 == v546)) || ((F.p1492 == v459))) || ((F.p1492 == v534))) || ((F.p1492 == v495))) || ((F.p1492 == v537))) || ((F.p1492 == v498)));
return rv4006; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1497_Bin(rt_int a_p1498, void * a_p1499, void * a_p1500, rt_int a_p1501) {
struct yf1502 F;
memset((void *)&F, 0, sizeof F);
F.p1498 = a_p1498;
F.p1499 = a_p1499;
F.p1500 = a_p1500;
F.p1501 = a_p1501;
F.v4013 = yr1245_NewNode(v768, F.p1501);
((*(yR95 *)rt_nil_check(F.v4013))).f_name = F.p1498;
((*(yR95 *)rt_nil_check(F.v4013))).f_a = F.p1499;
((*(yR95 *)rt_nil_check(F.v4013))).f_b = F.p1500;
{ void * rv4014 = F.v4013;
return rv4014; }
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
F.v4019 = yr1016_SE();
yr1117_Fail(F.p1508, F.v4019);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1513_ParseExpr(void) {
struct yf1514 F;
memset((void *)&F, 0, sizeof F);
F.v4027 = yr1276_TLn();
F.v4023 = yr1518_ParseSimple();
F.v4025 = yr1462_OpAt();
if (yr1467_IsRel(F.v4025)) {
yr1300_Skip();
F.v4023 = yr1497_Bin(F.v4025, F.v4023, yr1518_ParseSimple(), F.v4027);
if (yr1467_IsRel(yr1462_OpAt())) {
yr1506_NeedParens(F.v4025, F.v4027);
}
}
{ void * rv4028 = F.v4023;
return rv4028; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1518_ParseSimple(void) {
struct yf1519 F;
memset((void *)&F, 0, sizeof F);
F.v4037 = yr1276_TLn();
if (yr1288_Is(v546)) {
yr1300_Skip();
F.v4033 = yr1245_NewNode(v765, F.v4037);
((*(yR95 *)rt_nil_check(F.v4033))).f_a = yr1523_ParseTerm();
F.v4035 = yr1462_OpAt();
if ((yr1485_IsAssocAdd(F.v4035) || yr1491_IsNonAssocAdd(F.v4035))) {
yr1506_NeedParens(rt_range(v546, INT64_C(0), INT64_C(4000000)), F.v4037);
}
{ void * rv4038 = F.v4033;
return rv4038; }
}
F.v4031 = yr1523_ParseTerm();
F.v4035 = yr1462_OpAt();
if (yr1491_IsNonAssocAdd(F.v4035)) {
yr1300_Skip();
F.v4031 = yr1497_Bin(F.v4035, F.v4031, yr1523_ParseTerm(), F.v4037);
if ((yr1485_IsAssocAdd(yr1462_OpAt()) || yr1491_IsNonAssocAdd(yr1462_OpAt()))) {
yr1506_NeedParens(F.v4035, F.v4037);
}
{ void * rv4039 = F.v4031;
return rv4039; }
}
while (yr1485_IsAssocAdd(F.v4035)) {
yr1300_Skip();
F.v4031 = yr1497_Bin(F.v4035, F.v4031, yr1523_ParseTerm(), F.v4037);
if (yr1491_IsNonAssocAdd(yr1462_OpAt())) {
yr1506_NeedParens(yr1462_OpAt(), F.v4037);
}
F.v4035 = yr1462_OpAt();
}
{ void * rv4040 = F.v4031;
return rv4040; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1523_ParseTerm(void) {
struct yf1524 F;
memset((void *)&F, 0, sizeof F);
F.v4047 = yr1276_TLn();
F.v4043 = yr1539_ParseFactor();
F.v4045 = yr1462_OpAt();
if (yr1479_IsNonAssocMul(F.v4045)) {
yr1300_Skip();
F.v4043 = yr1497_Bin(F.v4045, F.v4043, yr1539_ParseFactor(), F.v4047);
if ((yr1473_IsAssocMul(yr1462_OpAt()) || yr1479_IsNonAssocMul(yr1462_OpAt()))) {
yr1506_NeedParens(F.v4045, F.v4047);
}
{ void * rv4048 = F.v4043;
return rv4048; }
}
while (yr1473_IsAssocMul(F.v4045)) {
yr1300_Skip();
F.v4043 = yr1497_Bin(F.v4045, F.v4043, yr1539_ParseFactor(), F.v4047);
if (yr1479_IsNonAssocMul(yr1462_OpAt())) {
yr1506_NeedParens(yr1462_OpAt(), F.v4047);
}
F.v4045 = yr1462_OpAt();
}
{ void * rv4049 = F.v4043;
return rv4049; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1528_IsLiteralAt(rt_int a_p1529) {
struct yf1530 F;
memset((void *)&F, 0, sizeof F);
F.p1529 = a_p1529;
F.v4053 = ((rt_int *)(v1153).p)[y_ix1(v1153, rt_add(v1234, F.p1529))];
{ rt_int rv4055 = (((((((F.v4053 == v186)) || ((F.v4053 == v189))) || ((F.v4053 == v192))) || ((F.v4053 == v195))) || ((F.v4053 == v198))) || yr1281_IsAt(F.p1529, v357));
return rv4055; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1534_ParseLiteral(void) {
struct yf1535 F;
memset((void *)&F, 0, sizeof F);
F.v4060 = yr1266_TK();
F.v4062 = yr1276_TLn();
if ((F.v4060 == v186)) {
F.v4058 = yr1245_NewNode(v729, F.v4062);
((*(yR95 *)rt_nil_check(F.v4058))).f_ival = yr1271_TV();
} else if ((F.v4060 == v189)) {
F.v4058 = yr1245_NewNode(v732, F.v4062);
((*(yR95 *)rt_nil_check(F.v4058))).f_text = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v4060 == v192)) {
F.v4058 = yr1245_NewNode(v735, F.v4062);
((*(yR95 *)rt_nil_check(F.v4058))).f_text = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v4060 == v195)) {
F.v4058 = yr1245_NewNode(v738, F.v4062);
((*(yR95 *)rt_nil_check(F.v4058))).f_text = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v4060 == v198)) {
F.v4058 = yr1245_NewNode(v741, F.v4062);
((*(yR95 *)rt_nil_check(F.v4058))).f_text = rt_range(yr1271_TV(), INT64_C(0), INT64_C(4000000));
} else {
F.v4058 = yr1245_NewNode(v744, F.v4062);
}
yr1300_Skip();
{ void * rv4063 = F.v4058;
return rv4063; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1539_ParseFactor(void) {
struct yf1540 F;
memset((void *)&F, 0, sizeof F);
F.v4070 = yr1276_TLn();
if (yr1288_Is(v360)) {
yr1300_Skip();
F.v4066 = yr1245_NewNode(v762, F.v4070);
((*(yR95 *)rt_nil_check(F.v4066))).f_a = yr1539_ParseFactor();
{ void * rv4071 = F.v4066;
return rv4071; }
}
if (yr1288_Is(v564)) {
yr1300_Skip();
F.v4066 = yr1245_NewNode(v771, F.v4070);
((*(yR95 *)rt_nil_check(F.v4066))).f_a = yr1513_ParseExpr();
yr1316_Expect(v567);
{ void * rv4072 = F.v4066;
return rv4072; }
}
if (yr1528_IsLiteralAt(INT64_C(0))) {
{ void * rv4074 = yr1534_ParseLiteral();
return rv4074; }
}
if (yr1294_IsIdAt(INT64_C(0))) {
if ((yr1528_IsLiteralAt(INT64_C(1)) || ((yr1294_IsIdAt(INT64_C(1)) && (!((((((yr1281_IsAt(INT64_C(2), v564) || yr1281_IsAt(INT64_C(2), v570)) || yr1281_IsAt(INT64_C(2), v585)) || yr1281_IsAt(INT64_C(2), v588)) || yr1281_IsAt(INT64_C(2), v501)) || yr1281_IsAt(INT64_C(2), v582)))))))) {
F.v4068 = yr1322_Ident();
if (yr1294_IsIdAt(INT64_C(0))) {
F.v4066 = yr1245_NewNode(v747, F.v4070);
((*(yR95 *)rt_nil_check(F.v4066))).f_name = yr1322_Ident();
} else {
F.v4066 = yr1534_ParseLiteral();
}
((*(yR95 *)rt_nil_check(F.v4066))).f_d = yr1245_NewNode(v639, F.v4070);
((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4066))).f_d))).f_name = F.v4068;
{ void * rv4085 = F.v4066;
return rv4085; }
}
{ void * rv4086 = yr1544_ParseDesignator();
return rv4086; }
}
yr1132_FailN(F.v4070, yr1311_TokText(), y_str(" cannot begin an operand", 24));
{ void * rv4088 = ((void *)0);
return rv4088; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1544_ParseDesignator(void) {
struct yf1545 F;
memset((void *)&F, 0, sizeof F);
F.v4097 = yr1276_TLn();
F.v4091 = yr1245_NewNode(v747, F.v4097);
((*(yR95 *)rt_nil_check(F.v4091))).f_name = yr1322_Ident();
if (yr1305_Accept(v564)) {
((*(yR95 *)rt_nil_check(F.v4091))).f_kind = v750;
F.v4095 = ((void *)0);
while ((!yr1288_Is(v567))) {
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v4091))).f_a, &F.v4095, yr1513_ParseExpr());
if ((!yr1305_Accept(v576))) {
yr1549_EXIT_ARGS();
}
}
yr1316_Expect(v567);
}
for (;;) {
if (yr1305_Accept(v585)) {
F.v4093 = yr1245_NewNode(v753, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v4093))).f_a = F.v4091;
((*(yR95 *)rt_nil_check(F.v4093))).f_name = yr1322_Ident();
F.v4091 = F.v4093;
} else if (yr1305_Accept(v570)) {
F.v4093 = yr1245_NewNode(v756, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v4093))).f_a = F.v4091;
F.v4095 = ((void *)0);
for (;;) {
yr1252_Link(&((*(yR95 *)rt_nil_check(F.v4093))).f_b, &F.v4095, yr1513_ParseExpr());
if ((!yr1305_Accept(v576))) {
goto yl_4099;
}
}
yl_4099: ;
yr1316_Expect(v573);
F.v4091 = F.v4093;
} else if (yr1305_Accept(v588)) {
F.v4093 = yr1245_NewNode(v759, yr1276_TLn());
((*(yR95 *)rt_nil_check(F.v4093))).f_a = F.v4091;
F.v4091 = F.v4093;
} else {
goto yl_4098;
}
}
yl_4098: ;
{ void * rv4100 = F.v4091;
return rv4100; }
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
F.v4104 = ((void *)0);
F.v4106 = ((void *)0);
while ((!(yr1266_TK() == v174))) {
if ((!((yr1288_Is(v351) || yr1288_Is(v354))))) {
yr1124_FailS(yr1276_TLn(), y_str("a segment is a module (XIII.A)", 30));
}
yr1252_Link(&F.v4104, &F.v4106, yr1350_ParseModule());
while (yr1305_Accept(v579)) {
}
}
{ void * rv4108 = F.v4104;
return rv4108; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1597_NewSym(rt_int a_p1598, rt_int a_p1599) {
struct yf1600 F;
memset((void *)&F, 0, sizeof F);
F.p1598 = a_p1598;
F.p1599 = a_p1599;
({ F.v4113 = rt_alloc(sizeof(yR115)); });
(*(yR115 *)rt_nil_check(F.v4113)) = ((yR115){ .f_kind = F.p1598, .f_name = F.p1599, .f_rep = ((void *)0), .f_cname = INT64_C(0), .f_level = INT64_C(0), .f_byref = 0, .f_readonly = 0, .f_mval = INT64_C(0), .f_hasmv = 0, .f_params = ((void *)0), .f_nparams = INT64_C(0), .f_ret = ((void *)0), .f_func = 0, .f_decl = ((void *)0), .f_depth = INT64_C(0), .f_target = ((void *)0), .f_members = ((void *)0), .f_mnext = ((void *)0), .f_chain = ((void *)0), .f_stack = ((void *)0), .f_alt = ((void *)0), .f_monitor = ((void *)0), .f_serial = INT64_C(0), .f_calls = ((void *)0) });
((*(yR115 *)rt_nil_check(F.v4113))).f_serial = yr1141_NewSerial();
{ void * rv4124 = F.v4113;
return rv4124; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1604_OpenScope(rt_int a_p1605) {
struct yf1606 F;
memset((void *)&F, 0, sizeof F);
F.p1605 = a_p1605;
({ F.v4128 = rt_alloc(sizeof(yR120)); });
(*(yR120 *)rt_nil_check(F.v4128)) = ((yR120){ .f_syms = ((void *)0), .f_closed = F.p1605, .f_module = ((void *)0), .f_level = v1576, .f_deferred = ((void *)0), .f_up = ((void *)0) });
if ((v1570 >= INT64_C(0))) {
((*(yR120 *)rt_nil_check(F.v4128))).f_up = ((void * *)(v1568).p)[y_ix1(v1568, v1570)];
}
v1570 = rt_range(rt_add(v1570, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1568).p)[y_ix1(v1568, v1570)] = F.v4128;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1610_CloseScope(void) {
struct yf1611 F;
memset((void *)&F, 0, sizeof F);
F.v4134 = ((*(yR120 *)rt_nil_check(((void * *)(v1568).p)[y_ix1(v1568, v1570)]))).f_syms;
while ((!(F.v4134 == ((void *)0)))) {
F.v4140 = rt_range(rt_mod(((*(yR115 *)rt_nil_check(F.v4134))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4136 = ((void * *)(v1559).p)[y_ix1(v1559, F.v4140)];
F.v4138 = ((void *)0);
while ((((!(F.v4136 == ((void *)0)))) && ((!(F.v4136 == F.v4134))))) {
F.v4138 = F.v4136;
F.v4136 = ((*(yR115 *)rt_nil_check(F.v4136))).f_chain;
}
if ((F.v4136 == F.v4134)) {
if ((F.v4138 == ((void *)0))) {
((void * *)(v1559).p)[y_ix1(v1559, F.v4140)] = ((*(yR115 *)rt_nil_check(F.v4134))).f_chain;
} else {
((*(yR115 *)rt_nil_check(F.v4138))).f_chain = ((*(yR115 *)rt_nil_check(F.v4134))).f_chain;
}
}
F.v4134 = ((*(yR115 *)rt_nil_check(F.v4134))).f_stack;
}
v1570 = rt_range(rt_sub(v1570, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1615_Visible(void * a_p1616) {
struct yf1617 F;
memset((void *)&F, 0, sizeof F);
F.p1616 = a_p1616;
{ rt_int rv4148 = (((((*(yR115 *)rt_nil_check(F.p1616))).f_depth >= v1573)) || ((((*(yR115 *)rt_nil_check(F.p1616))).f_depth == INT64_C(0))));
return rv4148; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1621_Find(rt_int a_p1622) {
struct yf1623 F;
memset((void *)&F, 0, sizeof F);
F.p1622 = a_p1622;
F.v4152 = ((void * *)(v1559).p)[y_ix1(v1559, rt_mod(F.p1622, INT64_C(8192)))];
while ((!(F.v4152 == ((void *)0)))) {
if ((((((*(yR115 *)rt_nil_check(F.v4152))).f_name == F.p1622)) && yr1615_Visible(F.v4152))) {
{ void * rv4155 = F.v4152;
return rv4155; }
}
F.v4152 = ((*(yR115 *)rt_nil_check(F.v4152))).f_chain;
}
{ void * rv4156 = ((void *)0);
return rv4156; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1627_FindHere(rt_int a_p1628) {
struct yf1629 F;
memset((void *)&F, 0, sizeof F);
F.p1628 = a_p1628;
F.v4160 = ((void * *)(v1559).p)[y_ix1(v1559, rt_mod(F.p1628, INT64_C(8192)))];
while ((!(F.v4160 == ((void *)0)))) {
if ((((((*(yR115 *)rt_nil_check(F.v4160))).f_name == F.p1628)) && ((((*(yR115 *)rt_nil_check(F.v4160))).f_depth == v1570)))) {
{ void * rv4163 = F.v4160;
return rv4163; }
}
F.v4160 = ((*(yR115 *)rt_nil_check(F.v4160))).f_chain;
}
{ void * rv4164 = ((void *)0);
return rv4164; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1633_Lookup(rt_int a_p1634, rt_int a_p1635) {
struct yf1636 F;
memset((void *)&F, 0, sizeof F);
F.p1634 = a_p1634;
F.p1635 = a_p1635;
F.v4169 = yr1621_Find(F.p1634);
if ((F.v4169 == ((void *)0))) {
yr1132_FailN(F.p1635, F.p1634, y_str(" is not declared here", 21));
}
if ((((*(yR115 *)rt_nil_check(F.v4169))).f_kind == v864)) {
F.v4171 = ((*(yR115 *)rt_nil_check(F.v4169))).f_chain;
while ((!(F.v4171 == ((void *)0)))) {
if (((((((((*(yR115 *)rt_nil_check(F.v4171))).f_name == F.p1634)) && ((((*(yR115 *)rt_nil_check(F.v4171))).f_depth == ((*(yR115 *)rt_nil_check(F.v4169))).f_depth))) && ((((*(yR115 *)rt_nil_check(F.v4171))).f_kind == v864))) && ((!(yr1686_Real(F.v4171) == yr1686_Real(F.v4169))))) && ((!(((*(yR115 *)rt_nil_check(yr1686_Real(F.v4169)))).f_kind == v843))))) {
yr1132_FailN(F.p1635, F.p1634, y_str(" is exported here by two modules: name it with FROM (X.B.4)", 59));
}
F.v4171 = ((*(yR115 *)rt_nil_check(F.v4171))).f_chain;
}
}
{ void * rv4174 = F.v4169;
return rv4174; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1640_Ambiguous(void * a_p1641) {
struct yf1642 F;
memset((void *)&F, 0, sizeof F);
F.p1641 = a_p1641;
F.v4178 = ((*(yR115 *)rt_nil_check(F.p1641))).f_chain;
while ((!(F.v4178 == ((void *)0)))) {
if ((((((((*(yR115 *)rt_nil_check(F.v4178))).f_name == ((*(yR115 *)rt_nil_check(F.p1641))).f_name)) && yr1615_Visible(F.v4178)) && ((((*(yR115 *)rt_nil_check(F.v4178))).f_kind == v843))) && ((!(((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4178))).f_rep))).f_tid == ((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.p1641))).f_rep))).f_tid))))) {
{ rt_int rv4180 = 1;
return rv4180; }
}
F.v4178 = ((*(yR115 *)rt_nil_check(F.v4178))).f_chain;
}
{ rt_int rv4182 = 0;
return rv4182; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1646_FindLit(rt_int a_p1647, void * a_p1648) {
struct yf1649 F;
memset((void *)&F, 0, sizeof F);
F.p1647 = a_p1647;
F.p1648 = a_p1648;
F.v4187 = ((void * *)(v1559).p)[y_ix1(v1559, rt_mod(F.p1647, INT64_C(8192)))];
while ((!(F.v4187 == ((void *)0)))) {
if ((((*(yR115 *)rt_nil_check(F.v4187))).f_name == F.p1647)) {
if ((((((*(yR115 *)rt_nil_check(yr1686_Real(F.v4187)))).f_kind == v843)) && ((((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(yr1686_Real(F.v4187)))).f_rep))).f_tid == ((*(yR100 *)rt_nil_check(F.p1648))).f_tid)))) {
{ void * rv4190 = F.v4187;
return rv4190; }
}
}
F.v4187 = ((*(yR115 *)rt_nil_check(F.v4187))).f_chain;
}
{ void * rv4191 = ((void *)0);
return rv4191; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1653_Define(void * a_p1654, rt_int a_p1655) {
struct yf1656 F;
memset((void *)&F, 0, sizeof F);
F.p1654 = a_p1654;
F.p1655 = a_p1655;
F.v4196 = yr1627_FindHere(((*(yR115 *)rt_nil_check(F.p1654))).f_name);
F.v4198 = rt_range(rt_mod(((*(yR115 *)rt_nil_check(F.p1654))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((((!(F.v4196 == ((void *)0)))) && (!((((((*(yR115 *)rt_nil_check(F.v4196))).f_kind == v843)) && ((((*(yR115 *)rt_nil_check(F.p1654))).f_kind == v843)))))) && (!(((((((*(yR115 *)rt_nil_check(F.p1654))).f_kind == v846)) && ((!(((*(yR115 *)rt_nil_check(F.p1654))).f_alt == ((void *)0))))) && ((((*(yR115 *)rt_nil_check(F.p1654))).f_alt == yr1686_Real(F.v4196))))))) && (!((((((*(yR115 *)rt_nil_check(F.p1654))).f_kind == v864)) && ((((*(yR115 *)rt_nil_check(F.v4196))).f_kind == v864))))))) {
yr1132_FailN(F.p1655, ((*(yR115 *)rt_nil_check(F.p1654))).f_name, y_str(" is declared twice in this scope", 32));
}
((*(yR115 *)rt_nil_check(F.p1654))).f_depth = v1570;
((*(yR115 *)rt_nil_check(F.p1654))).f_chain = ((void * *)(v1559).p)[y_ix1(v1559, F.v4198)];
((void * *)(v1559).p)[y_ix1(v1559, F.v4198)] = F.p1654;
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
F.v4206 = rt_range(rt_sub(v1576, F.p1661), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.p1661 == INT64_C(0))) {
{ rt_int rv4209 = F.p1662;
return rv4209; }
}
yr986_SB();
if ((F.v4206 == INT64_C(0))) {
yr997_SA(y_str("F.", 2));
} else {
yr997_SA(y_str("F.up->", 6));
while ((F.v4206 > INT64_C(1))) {
yr997_SA(y_str("up->", 4));
F.v4206 = rt_range(rt_sub(F.v4206, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1004_ST(F.p1662);
{ rt_int rv4217 = yr1016_SE();
return rv4217; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1667_FramePtr(rt_int a_p1668) {
struct yf1669 F;
memset((void *)&F, 0, sizeof F);
F.p1668 = a_p1668;
F.v4221 = rt_range(rt_sub(v1576, F.p1668), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.v4221 == INT64_C(0))) {
{ rt_int rv4225 = yr1021_T(y_str("&F", 2));
return rv4225; }
}
yr986_SB();
yr997_SA(y_str("F.up", 4));
while ((F.v4221 > INT64_C(1))) {
yr997_SA(y_str("->up", 4));
F.v4221 = rt_range(rt_sub(F.v4221, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv4231 = yr1016_SE();
return rv4231; }
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
F.v4236 = yr1016_SE();
if ((v1576 == INT64_C(0))) {
yr1070_Put(&v948, F.v4236);
} else {
yr1070_Put(&v958, F.v4236);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1680_SymPath(void * a_p1681) {
struct yf1682 F;
memset((void *)&F, 0, sizeof F);
F.p1681 = a_p1681;
F.v4245 = yr1660_Path(((*(yR115 *)rt_nil_check(F.p1681))).f_level, ((*(yR115 *)rt_nil_check(F.p1681))).f_cname);
if (((*(yR115 *)rt_nil_check(F.p1681))).f_byref) {
yr986_SB();
yr997_SA(y_str("(*", 2));
yr1004_ST(F.v4245);
yr997_SA(y_str(")", 1));
{ rt_int rv4248 = yr1016_SE();
return rv4248; }
}
{ rt_int rv4249 = F.v4245;
return rv4249; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1686_Real(void * a_p1687) {
struct yf1688 F;
memset((void *)&F, 0, sizeof F);
F.p1687 = a_p1687;
F.v4253 = F.p1687;
while ((((*(yR115 *)rt_nil_check(F.v4253))).f_kind == v864)) {
F.v4253 = ((*(yR115 *)rt_nil_check(F.v4253))).f_target;
}
{ void * rv4254 = F.v4253;
return rv4254; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1716_NewRep(rt_int a_p1717, rt_int a_p1718) {
struct yf1719 F;
memset((void *)&F, 0, sizeof F);
F.p1717 = a_p1717;
F.p1718 = a_p1718;
({ F.v4259 = rt_alloc(sizeof(yR100)); });
(*(yR100 *)rt_nil_check(F.v4259)) = ((yR100){ .f_kind = F.p1717, .f_tid = F.p1718, .f_tname = F.p1718, .f_lo = INT64_C(0), .f_hi = INT64_C(0), .f_mlo = INT64_C(0), .f_mhi = INT64_C(0), .f_hasm = 0, .f_scale = INT64_C(0), .f_prec = INT64_C(0), .f_elem = ((void *)0), .f_idx = ((void *)0), .f_nidx = INT64_C(0), .f_link = ((void *)0), .f_lits = ((void *)0), .f_nlits = INT64_C(0), .f_fields = ((void *)0), .f_selector = ((void *)0), .f_cname = INT64_C(0), .f_dname = INT64_C(0), .f_dlevel = INT64_C(0), .f_deep = 0, .f_abstract = 0, .f_opaque = 0, .f_opaqueops = INT64_C(0), .f_ordered = 0, .f_forward = INT64_C(0), .f_fwdscope = INT64_C(0), .f_monitor = ((void *)0), .f_serial = INT64_C(0), .f_sig = INT64_C(0) });
((*(yR100 *)rt_nil_check(F.v4259))).f_serial = yr1141_NewSerial();
{ void * rv4281 = F.v4259;
return rv4281; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1723_CopyRep(void * a_p1724) {
struct yf1725 F;
memset((void *)&F, 0, sizeof F);
F.p1724 = a_p1724;
({ F.v4285 = rt_alloc(sizeof(yR100)); });
(*(yR100 *)rt_nil_check(F.v4285)) = (*(yR100 *)rt_nil_check(F.p1724));
((*(yR100 *)rt_nil_check(F.v4285))).f_serial = yr1141_NewSerial();
((*(yR100 *)rt_nil_check(F.v4285))).f_sig = INT64_C(0);
{ void * rv4287 = F.v4285;
return rv4287; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1729_IsDiscrete(void * a_p1730) {
struct yf1731 F;
memset((void *)&F, 0, sizeof F);
F.p1730 = a_p1730;
{ rt_int rv4290 = (((((((*(yR100 *)rt_nil_check(F.p1730))).f_kind == v774)) || ((((*(yR100 *)rt_nil_check(F.p1730))).f_kind == v783))) || ((((*(yR100 *)rt_nil_check(F.p1730))).f_kind == v786))) || ((((*(yR100 *)rt_nil_check(F.p1730))).f_kind == v789)));
return rv4290; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1735_IsNumeric(void * a_p1736) {
struct yf1737 F;
memset((void *)&F, 0, sizeof F);
F.p1736 = a_p1736;
{ rt_int rv4293 = ((((((*(yR100 *)rt_nil_check(F.p1736))).f_kind == v774)) || ((((*(yR100 *)rt_nil_check(F.p1736))).f_kind == v777))) || ((((*(yR100 *)rt_nil_check(F.p1736))).f_kind == v780)));
return rv4293; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1741_IsArrayLike(void * a_p1742) {
struct yf1743 F;
memset((void *)&F, 0, sizeof F);
F.p1742 = a_p1742;
{ rt_int rv4296 = ((((((*(yR100 *)rt_nil_check(F.p1742))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.p1742))).f_kind == v813))) || ((((*(yR100 *)rt_nil_check(F.p1742))).f_kind == v816)));
return rv4296; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1747_IsString(void * a_p1748) {
struct yf1749 F;
memset((void *)&F, 0, sizeof F);
F.p1748 = a_p1748;
if ((((*(yR100 *)rt_nil_check(F.p1748))).f_kind == v816)) {
{ rt_int rv4300 = 1;
return rv4300; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1748))).f_kind == v792)) && ((((*(yR100 *)rt_nil_check(F.p1748))).f_nidx == INT64_C(1))))) {
{ rt_int rv4302 = (((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p1748))).f_elem))).f_kind == v789);
return rv4302; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1748))).f_kind == v813)) && ((((*(yR100 *)rt_nil_check(F.p1748))).f_nidx == INT64_C(1))))) {
{ rt_int rv4304 = (((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p1748))).f_elem))).f_kind == v789);
return rv4304; }
}
{ rt_int rv4306 = 0;
return rv4306; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1753_Deep(void * a_p1754) {
struct yf1755 F;
memset((void *)&F, 0, sizeof F);
F.p1754 = a_p1754;
if (((((((*(yR100 *)rt_nil_check(F.p1754))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.p1754))).f_kind == v813))) || ((((*(yR100 *)rt_nil_check(F.p1754))).f_kind == v816)))) {
{ rt_int rv4310 = 1;
return rv4310; }
}
{ rt_int rv4311 = (((((*(yR100 *)rt_nil_check(F.p1754))).f_kind == v795)) && ((*(yR100 *)rt_nil_check(F.p1754))).f_deep);
return rv4311; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1759_HoldsSignal(void * a_p1760) {
struct yf1761 F;
memset((void *)&F, 0, sizeof F);
F.p1760 = a_p1760;
if ((!(((*(yR100 *)rt_nil_check(F.p1760))).f_kind == v792))) {
{ rt_int rv4315 = 0;
return rv4315; }
}
if ((((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p1760))).f_elem))).f_kind == v807)) {
{ rt_int rv4317 = 1;
return rv4317; }
}
{ rt_int rv4318 = yr1759_HoldsSignal(((*(yR100 *)rt_nil_check(F.p1760))).f_elem);
return rv4318; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1765_CType(void * a_p1766) {
struct yf1767 F;
memset((void *)&F, 0, sizeof F);
F.p1766 = a_p1766;
F.v4322 = ((*(yR100 *)rt_nil_check(F.p1766))).f_kind;
if (((((F.v4322 == v774)) || ((F.v4322 == v783))) || ((F.v4322 == v786)))) {
{ rt_int rv4324 = yr1021_T(y_str("rt_int", 6));
return rv4324; }
}
if ((F.v4322 == v789)) {
{ rt_int rv4326 = yr1021_T(y_str("unsigned char", 13));
return rv4326; }
}
if ((((F.v4322 == v780)) || ((F.v4322 == v777)))) {
{ rt_int rv4328 = yr1021_T(y_str("double", 6));
return rv4328; }
}
if (((((F.v4322 == v792)) || ((F.v4322 == v813))) || ((F.v4322 == v816)))) {
{ rt_int rv4330 = yr1021_T(y_str("yarr", 4));
return rv4330; }
}
if ((F.v4322 == v795)) {
{ rt_int rv4331 = ((*(yR100 *)rt_nil_check(F.p1766))).f_cname;
return rv4331; }
}
if ((((F.v4322 == v798)) || ((F.v4322 == v819)))) {
{ rt_int rv4333 = yr1021_T(y_str("void *", 6));
return rv4333; }
}
if ((F.v4322 == v801)) {
{ rt_int rv4335 = yr1021_T(y_str("yfile *", 7));
return rv4335; }
}
if ((F.v4322 == v804)) {
{ rt_int rv4337 = yr1021_T(y_str("yset", 4));
return rv4337; }
}
if ((F.v4322 == v807)) {
{ rt_int rv4339 = yr1021_T(y_str("ysig", 4));
return rv4339; }
}
if ((F.v4322 == v810)) {
{ rt_int rv4341 = yr1021_T(y_str("rt_lock", 7));
return rv4341; }
}
{ rt_int rv4343 = yr1021_T(y_str("void", 4));
return rv4343; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1771_DescOf(void * a_p1772) {
struct yf1773 F;
memset((void *)&F, 0, sizeof F);
F.p1772 = a_p1772;
F.v4347 = ((*(yR100 *)rt_nil_check(F.p1772))).f_kind;
if (((((F.v4347 == v774)) || ((F.v4347 == v783))) || ((F.v4347 == v786)))) {
{ rt_int rv4349 = yr1021_T(y_str("&y_d_int", 8));
return rv4349; }
}
if ((F.v4347 == v789)) {
{ rt_int rv4351 = yr1021_T(y_str("&y_d_byte", 9));
return rv4351; }
}
if ((((F.v4347 == v780)) || ((F.v4347 == v777)))) {
{ rt_int rv4353 = yr1021_T(y_str("&y_d_float", 10));
return rv4353; }
}
if ((((F.v4347 == v798)) || ((F.v4347 == v819)))) {
{ rt_int rv4355 = yr1021_T(y_str("&y_d_ptr", 8));
return rv4355; }
}
if ((F.v4347 == v804)) {
{ rt_int rv4357 = yr1021_T(y_str("&y_d_set", 8));
return rv4357; }
}
if ((((F.v4347 == v792)) || ((F.v4347 == v795)))) {
yr986_SB();
yr997_SA(y_str("&", 1));
yr1004_ST(yr1660_Path(((*(yR100 *)rt_nil_check(F.p1772))).f_dlevel, ((*(yR100 *)rt_nil_check(F.p1772))).f_dname));
{ rt_int rv4359 = yr1016_SE();
return rv4359; }
}
if ((F.v4347 == v816)) {
{ rt_int rv4361 = yr1021_T(y_str("&y_d_str", 8));
return rv4361; }
}
if ((F.v4347 == v807)) {
{ rt_int rv4363 = yr1021_T(y_str("&y_d_sig", 8));
return rv4363; }
}
{ rt_int rv4365 = yr1021_T(y_str("&y_d_opaque", 11));
return rv4365; }
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
{ rt_int rv4374 = 1;
return rv4374; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1784))).f_kind == v816)) && yr1747_IsString(F.p1785))) {
{ rt_int rv4376 = 1;
return rv4376; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1785))).f_kind == v816)) && yr1747_IsString(F.p1784))) {
{ rt_int rv4378 = 1;
return rv4378; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1784))).f_kind == v819)) && ((((*(yR100 *)rt_nil_check(F.p1785))).f_kind == v798)))) {
{ rt_int rv4380 = 1;
return rv4380; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1785))).f_kind == v819)) && ((((*(yR100 *)rt_nil_check(F.p1784))).f_kind == v798)))) {
{ rt_int rv4382 = 1;
return rv4382; }
}
if ((((((*(yR100 *)rt_nil_check(F.p1784))).f_kind == v828)) || ((((*(yR100 *)rt_nil_check(F.p1785))).f_kind == v828)))) {
{ rt_int rv4384 = 1;
return rv4384; }
}
{ rt_int rv4386 = 0;
return rv4386; }
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
F.v4392 = yr1016_SE();
yr1117_Fail(F.p1791, F.v4392);
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
static rt_int yr1813_SigText(void * a_p1814) {
struct yf1815 F;
memset((void *)&F, 0, sizeof F);
F.p1814 = a_p1814;
F.v4407 = ((*(yR100 *)rt_nil_check(F.p1814))).f_kind;
yr986_SB();
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1814))).f_tid);
if (((yr1729_IsDiscrete(F.p1814) || ((F.v4407 == v780))) || ((F.v4407 == v777)))) {
yr997_SA(y_str("[", 1));
if (((*(yR100 *)rt_nil_check(F.p1814))).f_hasm) {
yr1010_SI(((*(yR100 *)rt_nil_check(F.p1814))).f_mlo);
yr997_SA(y_str("..", 2));
yr1010_SI(((*(yR100 *)rt_nil_check(F.p1814))).f_mhi);
} else {
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1814))).f_lo);
yr997_SA(y_str("..", 2));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1814))).f_hi);
}
yr997_SA(y_str("]", 1));
if ((F.v4407 == v780)) {
yr997_SA(y_str("P", 1));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1814))).f_prec);
}
if ((F.v4407 == v777)) {
yr997_SA(y_str("S", 1));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1814))).f_scale);
}
} else if ((F.v4407 == v792)) {
yr997_SA(y_str("(", 1));
F.v4409 = ((*(yR100 *)rt_nil_check(F.p1814))).f_idx;
while ((!(F.v4409 == ((void *)0)))) {
yr1004_ST(yr1819_RepSig(F.v4409));
yr997_SA(y_str(",", 1));
F.v4409 = ((*(yR100 *)rt_nil_check(F.v4409))).f_link;
}
yr997_SA(y_str("OF ", 3));
yr1004_ST(yr1819_RepSig(((*(yR100 *)rt_nil_check(F.p1814))).f_elem));
yr997_SA(y_str(")", 1));
} else if ((F.v4407 == v813)) {
yr997_SA(y_str("(", 1));
yr1010_SI(((*(yR100 *)rt_nil_check(F.p1814))).f_nidx);
yr997_SA(y_str("D ", 2));
yr1004_ST(yr1819_RepSig(((*(yR100 *)rt_nil_check(F.p1814))).f_elem));
yr997_SA(y_str(")", 1));
} else if ((F.v4407 == v795)) {
yr997_SA(y_str("{", 1));
F.v4411 = ((*(yR100 *)rt_nil_check(F.p1814))).f_fields;
while ((!(F.v4411 == ((void *)0)))) {
if (((*(yR105 *)rt_nil_check(F.v4411))).f_isconst) {
yr997_SA(y_str("C ", 2));
} else {
yr997_SA(y_str("V ", 2));
}
yr1004_ST(((*(yR105 *)rt_nil_check(F.v4411))).f_name);
yr997_SA(y_str(":", 1));
yr1004_ST(yr1819_RepSig(((*(yR105 *)rt_nil_check(F.v4411))).f_rep));
yr997_SA(y_str(";", 1));
F.v4411 = ((*(yR105 *)rt_nil_check(F.v4411))).f_next;
}
yr997_SA(y_str("}", 1));
} else if ((((F.v4407 == v804)) || ((F.v4407 == v801)))) {
yr997_SA(y_str("(", 1));
yr1004_ST(yr1819_RepSig(((*(yR100 *)rt_nil_check(F.p1814))).f_elem));
yr997_SA(y_str(")", 1));
}
{ rt_int rv4433 = yr1016_SE();
return rv4433; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1819_RepSig(void * a_p1820) {
struct yf1821 F;
memset((void *)&F, 0, sizeof F);
F.p1820 = a_p1820;
if ((((*(yR100 *)rt_nil_check(F.p1820))).f_sig == INT64_C(0))) {
((*(yR100 *)rt_nil_check(F.p1820))).f_sig = yr1035_Name(yr1813_SigText(F.p1820));
}
{ rt_int rv4437 = ((*(yR100 *)rt_nil_check(F.p1820))).f_sig;
return rv4437; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1825_Identical(void * a_p1826, void * a_p1827) {
struct yf1828 F;
memset((void *)&F, 0, sizeof F);
F.p1826 = a_p1826;
F.p1827 = a_p1827;
if ((F.p1826 == F.p1827)) {
{ rt_int rv4442 = 1;
return rv4442; }
}
if ((!yr1783_SameType(F.p1826, F.p1827))) {
{ rt_int rv4444 = 0;
return rv4444; }
}
{ rt_int rv4445 = (yr1819_RepSig(F.p1826) == yr1819_RepSig(F.p1827));
return rv4445; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1832_IsLiteralNode(void * a_p1833) {
struct yf1834 F;
memset((void *)&F, 0, sizeof F);
F.p1833 = a_p1833;
if ((((((((*(yR95 *)rt_nil_check(F.p1833))).f_kind == v729)) || ((((*(yR95 *)rt_nil_check(F.p1833))).f_kind == v735))) || ((((*(yR95 *)rt_nil_check(F.p1833))).f_kind == v732))) || ((((*(yR95 *)rt_nil_check(F.p1833))).f_kind == v738)))) {
{ rt_int rv4448 = (((*(yR95 *)rt_nil_check(F.p1833))).f_d == ((void *)0));
return rv4448; }
}
if ((((((*(yR95 *)rt_nil_check(F.p1833))).f_kind == v765)) || ((((*(yR95 *)rt_nil_check(F.p1833))).f_kind == v771)))) {
{ rt_int rv4449 = yr1832_IsLiteralNode(((*(yR95 *)rt_nil_check(F.p1833))).f_a);
return rv4449; }
}
{ rt_int rv4451 = 0;
return rv4451; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1838_StoreBounds(void * a_p1839, yarr a_p1841) {
struct yf1842 F;
memset((void *)&F, 0, sizeof F);
F.p1839 = a_p1839;
F.p1841 = a_p1841;
F.v4456 = yr1146_Fresh(y_str("lo", 2));
F.v4458 = yr1146_Fresh(y_str("hi", 2));
yr1673_DeclStorage(yr1021_T(F.p1841), F.v4456);
yr1673_DeclStorage(yr1021_T(F.p1841), F.v4458);
yr1092_Emit(yr2595_Join(yr1660_Path(v1576, F.v4456), yr1021_T(y_str(" = ", 3)), yr2595_Join(((*(yR100 *)rt_nil_check(F.p1839))).f_lo, yr1021_T(y_str(";", 1)), INT64_C(0))));
yr1092_Emit(yr2595_Join(yr1660_Path(v1576, F.v4458), yr1021_T(y_str(" = ", 3)), yr2595_Join(((*(yR100 *)rt_nil_check(F.p1839))).f_hi, yr1021_T(y_str(";", 1)), INT64_C(0))));
((*(yR100 *)rt_nil_check(F.p1839))).f_lo = F.v4456;
((*(yR100 *)rt_nil_check(F.p1839))).f_hi = F.v4458;
((*(yR100 *)rt_nil_check(F.p1839))).f_dname = F.v4456;
((*(yR100 *)rt_nil_check(F.p1839))).f_dlevel = v1576;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1846_LoText(void * a_p1847) {
struct yf1848 F;
memset((void *)&F, 0, sizeof F);
F.p1847 = a_p1847;
if ((((((!(((*(yR100 *)rt_nil_check(F.p1847))).f_dname == INT64_C(0)))) && ((!(((*(yR100 *)rt_nil_check(F.p1847))).f_lo == INT64_C(0))))) && ((!(((*(yR100 *)rt_nil_check(F.p1847))).f_kind == v792)))) && ((!(((*(yR100 *)rt_nil_check(F.p1847))).f_kind == v795))))) {
{ rt_int rv4471 = yr1660_Path(((*(yR100 *)rt_nil_check(F.p1847))).f_dlevel, ((*(yR100 *)rt_nil_check(F.p1847))).f_lo);
return rv4471; }
}
{ rt_int rv4472 = ((*(yR100 *)rt_nil_check(F.p1847))).f_lo;
return rv4472; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1852_HiText(void * a_p1853) {
struct yf1854 F;
memset((void *)&F, 0, sizeof F);
F.p1853 = a_p1853;
if ((((((!(((*(yR100 *)rt_nil_check(F.p1853))).f_dname == INT64_C(0)))) && ((!(((*(yR100 *)rt_nil_check(F.p1853))).f_hi == INT64_C(0))))) && ((!(((*(yR100 *)rt_nil_check(F.p1853))).f_kind == v792)))) && ((!(((*(yR100 *)rt_nil_check(F.p1853))).f_kind == v795))))) {
{ rt_int rv4477 = yr1660_Path(((*(yR100 *)rt_nil_check(F.p1853))).f_dlevel, ((*(yR100 *)rt_nil_check(F.p1853))).f_hi);
return rv4477; }
}
{ rt_int rv4478 = ((*(yR100 *)rt_nil_check(F.p1853))).f_hi;
return rv4478; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1858_Qualify(void * a_p1859, void * a_p1860) {
struct yf1861 F;
memset((void *)&F, 0, sizeof F);
F.p1859 = a_p1859;
F.p1860 = a_p1860;
yr2192_Expr(((*(yR95 *)rt_nil_check(F.p1860))).f_a, F.p1859, &F.v4483, &F.v4487);
yr2192_Expr(((*(yR95 *)rt_nil_check(F.p1860))).f_b, F.p1859, &F.v4485, &F.v4489);
if ((((((*(yR100 *)rt_nil_check(F.p1859))).f_kind == v780)) || ((((*(yR100 *)rt_nil_check(F.p1859))).f_kind == v777)))) {
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.p1860))).f_line, F.p1859, F.v4487);
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.p1860))).f_line, F.p1859, F.v4489);
((*(yR100 *)rt_nil_check(F.p1859))).f_lo = F.v4483;
((*(yR100 *)rt_nil_check(F.p1859))).f_hi = F.v4485;
((*(yR100 *)rt_nil_check(F.p1859))).f_dname = INT64_C(0);
if ((!((yr1832_IsLiteralNode(((*(yR95 *)rt_nil_check(F.p1860))).f_a) && yr1832_IsLiteralNode(((*(yR95 *)rt_nil_check(F.p1860))).f_b))))) {
yr1838_StoreBounds(F.p1859, y_str("double", 6));
}
if ((((*(yR100 *)rt_nil_check(F.p1859))).f_kind == v780)) {
if ((((*(yR95 *)rt_nil_check(F.p1860))).f_d == ((void *)0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1860))).f_line, y_str("FLOATING needs PRECISION (VI.A.1.c)", 35));
}
yr2094_Manifest(((*(yR95 *)rt_nil_check(F.p1860))).f_d, &F.v4491, &F.v4493);
if ((!F.v4491)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1860))).f_line, y_str("PRECISION is a manifest constant", 32));
}
yr986_SB();
yr1010_SI(F.v4493);
((*(yR100 *)rt_nil_check(F.p1859))).f_prec = yr1016_SE();
} else {
if ((((*(yR95 *)rt_nil_check(F.p1860))).f_c == ((void *)0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1860))).f_line, y_str("FIXED needs SCALE (VI.A.1.b)", 28));
}
yr2192_Expr(((*(yR95 *)rt_nil_check(F.p1860))).f_c, F.p1859, &((*(yR100 *)rt_nil_check(F.p1859))).f_scale, &F.v4487);
}
((*(yR100 *)rt_nil_check(F.p1859))).f_abstract = 0;
return;
}
if ((!yr1729_IsDiscrete(F.p1859))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1860))).f_line, y_str("only a scalar or integer representation takes a range", 53));
}
if ((((!(((*(yR95 *)rt_nil_check(F.p1860))).f_c == ((void *)0)))) || ((!(((*(yR95 *)rt_nil_check(F.p1860))).f_d == ((void *)0)))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1860))).f_line, y_str("SCALE and PRECISION qualify numbers", 35));
}
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.p1860))).f_line, F.p1859, F.v4487);
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.p1860))).f_line, F.p1859, F.v4489);
((*(yR100 *)rt_nil_check(F.p1859))).f_lo = F.v4483;
((*(yR100 *)rt_nil_check(F.p1859))).f_hi = F.v4485;
yr2094_Manifest(((*(yR95 *)rt_nil_check(F.p1860))).f_a, &F.v4491, &((*(yR100 *)rt_nil_check(F.p1859))).f_mlo);
((*(yR100 *)rt_nil_check(F.p1859))).f_hasm = F.v4491;
yr2094_Manifest(((*(yR95 *)rt_nil_check(F.p1860))).f_b, &F.v4491, &((*(yR100 *)rt_nil_check(F.p1859))).f_mhi);
((*(yR100 *)rt_nil_check(F.p1859))).f_hasm = (((*(yR100 *)rt_nil_check(F.p1859))).f_hasm && F.v4491);
((*(yR100 *)rt_nil_check(F.p1859))).f_abstract = 0;
((*(yR100 *)rt_nil_check(F.p1859))).f_dname = INT64_C(0);
if ((!((*(yR100 *)rt_nil_check(F.p1859))).f_hasm)) {
yr1838_StoreBounds(F.p1859, y_str("rt_int", 6));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1865_DefineLits(void * a_p1866) {
struct yf1867 F;
memset((void *)&F, 0, sizeof F);
F.p1866 = a_p1866;
F.v4508 = ((*(yR100 *)rt_nil_check(F.p1866))).f_lits;
F.v4512 = INT64_C(0);
while ((!(F.v4508 == ((void *)0)))) {
if ((!(yr1621_Find(((*(yR95 *)rt_nil_check(F.v4508))).f_name) == ((void *)0)))) {
F.v4510 = yr1621_Find(((*(yR95 *)rt_nil_check(F.v4508))).f_name);
if ((((!(((*(yR115 *)rt_nil_check(F.v4510))).f_kind == v843))) && ((((*(yR115 *)rt_nil_check(F.v4510))).f_depth == v1570)))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.v4508))).f_line, ((*(yR95 *)rt_nil_check(F.v4508))).f_name, y_str(" is declared twice in this scope", 32));
}
}
F.v4510 = yr1597_NewSym(v843, ((*(yR95 *)rt_nil_check(F.v4508))).f_name);
((*(yR115 *)rt_nil_check(F.v4510))).f_rep = F.p1866;
((*(yR115 *)rt_nil_check(F.v4510))).f_mval = F.v4512;
((*(yR115 *)rt_nil_check(F.v4510))).f_hasmv = 1;
yr1653_Define(F.v4510, ((*(yR95 *)rt_nil_check(F.v4508))).f_line);
F.v4512 = rt_range(rt_add(F.v4512, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4508 = ((*(yR95 *)rt_nil_check(F.v4508))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1871_SetRange(void * a_p1872, rt_int a_p1873, rt_int a_p1874) {
struct yf1875 F;
memset((void *)&F, 0, sizeof F);
F.p1872 = a_p1872;
F.p1873 = a_p1873;
F.p1874 = a_p1874;
yr986_SB();
yr1010_SI(F.p1873);
((*(yR100 *)rt_nil_check(F.p1872))).f_lo = yr1016_SE();
yr986_SB();
yr1010_SI(F.p1874);
((*(yR100 *)rt_nil_check(F.p1872))).f_hi = yr1016_SE();
((*(yR100 *)rt_nil_check(F.p1872))).f_mlo = F.p1873;
((*(yR100 *)rt_nil_check(F.p1872))).f_mhi = F.p1874;
((*(yR100 *)rt_nil_check(F.p1872))).f_hasm = 1;
((*(yR100 *)rt_nil_check(F.p1872))).f_dname = INT64_C(0);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1879_NewTid(rt_int a_p1880) {
struct yf1881 F;
memset((void *)&F, 0, sizeof F);
F.p1880 = a_p1880;
F.v4527 = yr1141_NewSerial();
yr986_SB();
if ((!(F.p1880 == INT64_C(0)))) {
yr1004_ST(F.p1880);
} else {
yr997_SA(y_str("anonymous", 9));
}
yr997_SA(y_str("#", 1));
yr1010_SI(F.v4527);
{ rt_int rv4531 = yr1016_SE();
return rv4531; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1885_MakeRep(void * a_p1886, rt_int a_p1887, rt_int a_p1888) {
struct yf1889 F;
memset((void *)&F, 0, sizeof F);
F.p1886 = a_p1886;
F.p1887 = a_p1887;
F.p1888 = a_p1888;
F.v4547 = ((*(yR95 *)rt_nil_check(F.p1886))).f_kind;
F.v4551 = INT64_C(0);
F.v4553 = F.p1887;
if ((!(((*(yR95 *)rt_nil_check(F.p1886))).f_text == INT64_C(0)))) {
F.v4545 = yr1686_Real(yr1633_Lookup(((*(yR95 *)rt_nil_check(F.p1886))).f_text, ((*(yR95 *)rt_nil_check(F.p1886))).f_line));
if ((((!(((*(yR115 *)rt_nil_check(F.v4545))).f_kind == v840))) && ((!(((*(yR115 *)rt_nil_check(F.v4545))).f_kind == v837))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p1886))).f_line, ((*(yR95 *)rt_nil_check(F.p1886))).f_text, y_str(" is not a type", 14));
}
F.v4551 = ((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4545))).f_rep))).f_tid;
F.v4553 = ((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4545))).f_rep))).f_tname;
}
if ((F.v4547 == v642)) {
F.v4545 = yr1686_Real(yr1633_Lookup(((*(yR95 *)rt_nil_check(F.p1886))).f_name, ((*(yR95 *)rt_nil_check(F.p1886))).f_line));
if ((((!(((*(yR115 *)rt_nil_check(F.v4545))).f_kind == v840))) && ((!(((*(yR115 *)rt_nil_check(F.v4545))).f_kind == v837))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p1886))).f_line, ((*(yR95 *)rt_nil_check(F.p1886))).f_name, y_str(" is not a representation", 24));
}
F.v4537 = ((*(yR115 *)rt_nil_check(F.v4545))).f_rep;
if ((!(((*(yR95 *)rt_nil_check(F.p1886))).f_a == ((void *)0)))) {
F.v4537 = yr1723_CopyRep(F.v4537);
yr1858_Qualify(F.v4537, ((*(yR95 *)rt_nil_check(F.p1886))).f_a);
}
{ void * rv4558 = F.v4537;
return rv4558; }
}
if ((F.v4551 == INT64_C(0))) {
F.v4551 = yr1879_NewTid(F.p1887);
if ((F.v4553 == INT64_C(0))) {
F.v4553 = F.v4551;
}
}
if ((F.v4547 == v645)) {
F.v4537 = yr1716_NewRep(v786, F.v4551);
((*(yR100 *)rt_nil_check(F.v4537))).f_tname = F.v4553;
((*(yR100 *)rt_nil_check(F.v4537))).f_ordered = (((*(yR95 *)rt_nil_check(F.p1886))).f_flag == INT64_C(1));
((*(yR100 *)rt_nil_check(F.v4537))).f_lits = ((*(yR95 *)rt_nil_check(F.p1886))).f_a;
((*(yR100 *)rt_nil_check(F.v4537))).f_nlits = yr1260_Count(((*(yR95 *)rt_nil_check(F.p1886))).f_a);
yr1871_SetRange(F.v4537, INT64_C(0), rt_range(rt_sub(((*(yR100 *)rt_nil_check(F.v4537))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1865_DefineLits(F.v4537);
if ((!(((*(yR95 *)rt_nil_check(F.p1886))).f_b == ((void *)0)))) {
yr1858_Qualify(F.v4537, ((*(yR95 *)rt_nil_check(F.p1886))).f_b);
}
{ void * rv4565 = F.v4537;
return rv4565; }
}
if ((F.v4547 == v648)) {
F.v4537 = yr1716_NewRep(v789, F.v4551);
((*(yR100 *)rt_nil_check(F.v4537))).f_tname = F.v4553;
((*(yR100 *)rt_nil_check(F.v4537))).f_ordered = 1;
((*(yR100 *)rt_nil_check(F.v4537))).f_lits = ((*(yR95 *)rt_nil_check(F.p1886))).f_a;
((*(yR100 *)rt_nil_check(F.v4537))).f_nlits = yr1260_Count(((*(yR95 *)rt_nil_check(F.p1886))).f_a);
if ((((*(yR100 *)rt_nil_check(F.v4537))).f_nlits > INT64_C(256))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1886))).f_line, y_str("this implementation takes alphabets of up to 256 characters", 59));
}
yr1871_SetRange(F.v4537, INT64_C(0), rt_range(rt_sub(((*(yR100 *)rt_nil_check(F.v4537))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((!(((*(yR95 *)rt_nil_check(F.p1886))).f_b == ((void *)0)))) {
yr1858_Qualify(F.v4537, ((*(yR95 *)rt_nil_check(F.p1886))).f_b);
}
{ void * rv4572 = F.v4537;
return rv4572; }
}
if ((F.v4547 == v651)) {
F.v4537 = yr1716_NewRep(v792, F.v4551);
((*(yR100 *)rt_nil_check(F.v4537))).f_tname = F.v4553;
F.v4549 = ((*(yR95 *)rt_nil_check(F.p1886))).f_a;
F.v4543 = ((void *)0);
while ((!(F.v4549 == ((void *)0)))) {
F.v4541 = yr1723_CopyRep(yr1885_MakeRep(F.v4549, INT64_C(0), 0));
if ((!yr1729_IsDiscrete(F.v4541))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v4549))).f_line, y_str("an index is an integer or scalar representation", 47));
}
yr1806_CheckRepresented(F.v4541, ((*(yR95 *)rt_nil_check(F.v4549))).f_line);
((*(yR100 *)rt_nil_check(F.v4541))).f_link = ((void *)0);
if ((F.v4543 == ((void *)0))) {
((*(yR100 *)rt_nil_check(F.v4537))).f_idx = F.v4541;
} else {
((*(yR100 *)rt_nil_check(F.v4543))).f_link = F.v4541;
}
F.v4543 = F.v4541;
((*(yR100 *)rt_nil_check(F.v4537))).f_nidx = rt_range(rt_add(((*(yR100 *)rt_nil_check(F.v4537))).f_nidx, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4549 = ((*(yR95 *)rt_nil_check(F.v4549))).f_next;
}
if ((((*(yR100 *)rt_nil_check(F.v4537))).f_nidx > INT64_C(4))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1886))).f_line, y_str("this implementation takes arrays of up to 4 dimensions", 54));
}
((*(yR100 *)rt_nil_check(F.v4537))).f_elem = yr1885_MakeRep(((*(yR95 *)rt_nil_check(F.p1886))).f_b, INT64_C(0), F.p1888);
if ((!F.p1888)) {
yr1806_CheckRepresented(((*(yR100 *)rt_nil_check(F.v4537))).f_elem, ((*(yR95 *)rt_nil_check(F.p1886))).f_line);
yr1905_BuildArrayDesc(F.v4537);
} else {
((*(yR100 *)rt_nil_check(F.v4537))).f_abstract = ((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.v4537))).f_elem))).f_abstract;
if ((!((*(yR100 *)rt_nil_check(F.v4537))).f_abstract)) {
yr1905_BuildArrayDesc(F.v4537);
}
}
((*(yR100 *)rt_nil_check(F.v4537))).f_deep = 1;
{ void * rv4582 = F.v4537;
return rv4582; }
}
if ((F.v4547 == v654)) {
F.v4537 = yr1716_NewRep(v795, F.v4551);
((*(yR100 *)rt_nil_check(F.v4537))).f_tname = F.v4553;
yr1935_MakeRecord(F.v4537, F.p1886, F.p1888);
{ void * rv4583 = F.v4537;
return rv4583; }
}
if (((((F.v4547 == v660)) || ((F.v4547 == v657))) || ((F.v4547 == v663)))) {
if ((F.v4547 == v660)) {
F.v4537 = yr1716_NewRep(v798, F.v4551);
((*(yR100 *)rt_nil_check(F.v4537))).f_tname = F.v4553;
if (((((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p1886))).f_a))).f_kind == v642)) && ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p1886))).f_a))).f_a == ((void *)0)))) && ((yr1621_Find(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p1886))).f_a))).f_name) == ((void *)0))))) {
((*(yR100 *)rt_nil_check(F.v4537))).f_forward = ((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p1886))).f_a))).f_name;
((*(yR100 *)rt_nil_check(F.v4537))).f_fwdscope = v1570;
F.v4549 = yr1245_NewNode(v639, ((*(yR95 *)rt_nil_check(F.p1886))).f_line);
((*(yR95 *)rt_nil_check(F.v4549))).f_rep = F.v4537;
((*(yR95 *)rt_nil_check(F.v4549))).f_next = v1714;
v1714 = F.v4549;
{ void * rv4584 = F.v4537;
return rv4584; }
}
((*(yR100 *)rt_nil_check(F.v4537))).f_elem = yr1885_MakeRep(((*(yR95 *)rt_nil_check(F.p1886))).f_a, INT64_C(0), 0);
{ void * rv4587 = F.v4537;
return rv4587; }
}
if ((F.v4547 == v657)) {
F.v4537 = yr1716_NewRep(v801, F.v4551);
((*(yR100 *)rt_nil_check(F.v4537))).f_tname = F.v4553;
((*(yR100 *)rt_nil_check(F.v4537))).f_elem = yr1885_MakeRep(((*(yR95 *)rt_nil_check(F.p1886))).f_a, INT64_C(0), F.p1888);
{ void * rv4589 = F.v4537;
return rv4589; }
}
F.v4537 = yr1716_NewRep(v804, F.v4551);
((*(yR100 *)rt_nil_check(F.v4537))).f_tname = F.v4553;
((*(yR100 *)rt_nil_check(F.v4537))).f_elem = yr1885_MakeRep(((*(yR95 *)rt_nil_check(F.p1886))).f_a, INT64_C(0), 0);
if ((!yr1729_IsDiscrete(((*(yR100 *)rt_nil_check(F.v4537))).f_elem))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1886))).f_line, y_str("a set is of an integer or scalar representation", 47));
}
yr1806_CheckRepresented(((*(yR100 *)rt_nil_check(F.v4537))).f_elem, ((*(yR95 *)rt_nil_check(F.p1886))).f_line);
{ void * rv4593 = F.v4537;
return rv4593; }
}
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p1886))).f_line, y_str("this representation is not translated", 37));
{ void * rv4595 = ((void *)0);
return rv4595; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1893_ResolvePending(rt_int a_p1894, void * a_p1895) {
struct yf1896 F;
memset((void *)&F, 0, sizeof F);
F.p1894 = a_p1894;
F.p1895 = a_p1895;
F.v4600 = v1714;
F.v4602 = ((void *)0);
while ((!(F.v4600 == ((void *)0)))) {
if ((((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4600))).f_rep))).f_forward == F.p1894)) {
((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4600))).f_rep))).f_elem = F.p1895;
((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4600))).f_rep))).f_forward = INT64_C(0);
if ((F.v4602 == ((void *)0))) {
v1714 = ((*(yR95 *)rt_nil_check(F.v4600))).f_next;
} else {
((*(yR95 *)rt_nil_check(F.v4602))).f_next = ((*(yR95 *)rt_nil_check(F.v4600))).f_next;
}
} else {
F.v4602 = F.v4600;
}
F.v4600 = ((*(yR95 *)rt_nil_check(F.v4600))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1900_CheckPending(void) {
struct yf1901 F;
memset((void *)&F, 0, sizeof F);
F.v4606 = v1714;
while ((!(F.v4606 == ((void *)0)))) {
if ((((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4606))).f_rep))).f_fwdscope >= v1570)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.v4606))).f_line, ((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4606))).f_rep))).f_forward, y_str(" is named by a pointer but not declared", 39));
}
F.v4606 = ((*(yR95 *)rt_nil_check(F.v4606))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1905_BuildArrayDesc(void * a_p1906) {
struct yf1907 F;
memset((void *)&F, 0, sizeof F);
F.p1906 = a_p1906;
yr1777_NewDesc(F.p1906);
yr986_SB();
yr997_SA(y_str("{ rt_int lo[", 12));
yr1010_SI(((*(yR100 *)rt_nil_check(F.p1906))).f_nidx);
yr997_SA(y_str("] = {", 5));
F.v4611 = ((*(yR100 *)rt_nil_check(F.p1906))).f_idx;
F.v4615 = 1;
while ((!(F.v4611 == ((void *)0)))) {
if ((!F.v4615)) {
yr997_SA(y_str(", ", 2));
}
F.v4615 = 0;
yr1004_ST(yr1846_LoText(F.v4611));
F.v4611 = ((*(yR100 *)rt_nil_check(F.v4611))).f_link;
}
yr997_SA(y_str("}, hi[", 6));
yr1010_SI(((*(yR100 *)rt_nil_check(F.p1906))).f_nidx);
yr997_SA(y_str("] = {", 5));
F.v4611 = ((*(yR100 *)rt_nil_check(F.p1906))).f_idx;
F.v4615 = 1;
while ((!(F.v4611 == ((void *)0)))) {
if ((!F.v4615)) {
yr997_SA(y_str(", ", 2));
}
F.v4615 = 0;
yr1004_ST(yr1852_HiText(F.v4611));
F.v4611 = ((*(yR100 *)rt_nil_check(F.v4611))).f_link;
}
yr997_SA(y_str("}; y_desc_array(", 16));
yr1004_ST(yr1771_DescOf(F.p1906));
yr997_SA(y_str(", ", 2));
yr1010_SI(((*(yR100 *)rt_nil_check(F.p1906))).f_nidx);
yr997_SA(y_str(", lo, hi, ", 10));
yr1004_ST(yr1771_DescOf(((*(yR100 *)rt_nil_check(F.p1906))).f_elem));
yr997_SA(y_str("); }", 4));
F.v4613 = yr1016_SE();
yr1092_Emit(F.v4613);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1911_AddField(void * a_p1912, void * * a_p1913, rt_int a_p1914, void * a_p1915, rt_int a_p1916, rt_int a_p1917, void * a_p1918, rt_int a_p1919) {
struct yf1920 F;
memset((void *)&F, 0, sizeof F);
F.p1912 = a_p1912;
F.p1913 = a_p1913;
F.p1914 = a_p1914;
F.p1915 = a_p1915;
F.p1916 = a_p1916;
F.p1917 = a_p1917;
F.p1918 = a_p1918;
F.p1919 = a_p1919;
F.v4640 = ((*(yR100 *)rt_nil_check(F.p1912))).f_fields;
while ((!(F.v4640 == ((void *)0)))) {
if ((((*(yR105 *)rt_nil_check(F.v4640))).f_name == F.p1914)) {
yr1132_FailN(F.p1919, F.p1914, y_str(" is a component twice", 21));
}
F.v4640 = ((*(yR105 *)rt_nil_check(F.v4640))).f_next;
}
({ F.v4640 = rt_alloc(sizeof(yR105)); });
(*(yR105 *)rt_nil_check(F.v4640)) = ((yR105){ .f_name = F.p1914, .f_rep = F.p1915, .f_isconst = F.p1916, .f_variant = F.p1917, .f_labels = F.p1918, .f_next = ((void *)0) });
if (((*F.p1913) == ((void *)0))) {
((*(yR100 *)rt_nil_check(F.p1912))).f_fields = F.v4640;
} else {
((*(yR105 *)rt_nil_check((*F.p1913)))).f_next = F.v4640;
}
(*F.p1913) = F.v4640;
if (yr1753_Deep(F.p1915)) {
((*(yR100 *)rt_nil_check(F.p1912))).f_deep = 1;
}
if (((*(yR100 *)rt_nil_check(F.p1915))).f_abstract) {
((*(yR100 *)rt_nil_check(F.p1912))).f_abstract = 1;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1924_AddFields(void * a_p1925, void * * a_p1926, void * a_p1927, rt_int a_p1928, void * a_p1929, rt_int a_p1930) {
struct yf1931 F;
memset((void *)&F, 0, sizeof F);
F.p1925 = a_p1925;
F.p1926 = a_p1926;
F.p1927 = a_p1927;
F.p1928 = a_p1928;
F.p1929 = a_p1929;
F.p1930 = a_p1930;
F.v4652 = F.p1927;
F.v4654 = F.p1927;
while ((!(F.v4652 == ((void *)0)))) {
F.v4656 = yr1885_MakeRep(((*(yR95 *)rt_nil_check(F.v4652))).f_b, INT64_C(0), F.p1930);
if ((!F.p1930)) {
yr1806_CheckRepresented(F.v4656, ((*(yR95 *)rt_nil_check(F.v4652))).f_line);
}
if ((((((*(yR100 *)rt_nil_check(F.v4656))).f_kind == v807)) || ((((*(yR100 *)rt_nil_check(F.v4656))).f_kind == v801)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v4652))).f_line, y_str("this implementation does not keep signals or files in records", 61));
}
F.v4654 = ((*(yR95 *)rt_nil_check(F.v4652))).f_a;
while ((!(F.v4654 == ((void *)0)))) {
yr1911_AddField(F.p1925, &(*F.p1926), ((*(yR95 *)rt_nil_check(F.v4654))).f_name, F.v4656, (((*(yR95 *)rt_nil_check(F.v4652))).f_ival == v240), F.p1928, F.p1929, ((*(yR95 *)rt_nil_check(F.v4654))).f_line);
F.v4654 = ((*(yR95 *)rt_nil_check(F.v4654))).f_next;
}
F.v4652 = ((*(yR95 *)rt_nil_check(F.v4652))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1935_MakeRecord(void * a_p1936, void * a_p1937, rt_int a_p1938) {
struct yf1939 F;
memset((void *)&F, 0, sizeof F);
F.p1936 = a_p1936;
F.p1937 = a_p1937;
F.p1938 = a_p1938;
F.v4664 = ((void *)0);
F.v4672 = INT64_C(0);
F.v4679 = INT64_C(0);
yr1924_AddFields(F.p1936, &F.v4664, ((*(yR95 *)rt_nil_check(F.p1937))).f_a, INT64_C(0), ((void *)0), F.p1938);
if ((!(((*(yR95 *)rt_nil_check(F.p1937))).f_b == ((void *)0)))) {
F.v4666 = ((*(yR95 *)rt_nil_check(F.p1937))).f_b;
F.v4670 = yr1885_MakeRep(((*(yR95 *)rt_nil_check(F.v4666))).f_b, INT64_C(0), 0);
if ((!yr1729_IsDiscrete(F.v4670))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v4666))).f_line, y_str("the case-selection component is integer or scalar", 49));
}
yr1911_AddField(F.p1936, &F.v4664, ((*(yR95 *)rt_nil_check(F.v4666))).f_name, F.v4670, 1, INT64_C(0), ((void *)0), ((*(yR95 *)rt_nil_check(F.v4666))).f_line);
((*(yR100 *)rt_nil_check(F.p1936))).f_selector = F.v4664;
F.v4668 = ((*(yR95 *)rt_nil_check(F.v4666))).f_a;
while ((!(F.v4668 == ((void *)0)))) {
F.v4672 = rt_range(rt_add(F.v4672, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1924_AddFields(F.p1936, &F.v4664, ((*(yR95 *)rt_nil_check(F.v4668))).f_b, F.v4672, ((*(yR95 *)rt_nil_check(F.v4668))).f_a, F.p1938);
F.v4668 = ((*(yR95 *)rt_nil_check(F.v4668))).f_next;
}
}
if ((F.p1938 && ((*(yR100 *)rt_nil_check(F.p1936))).f_abstract)) {
return;
}
((*(yR100 *)rt_nil_check(F.p1936))).f_abstract = 0;
((*(yR100 *)rt_nil_check(F.p1936))).f_cname = yr1146_Fresh(y_str("yR", 2));
yr986_SB();
yr997_SA(y_str("typedef struct ", 15));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1936))).f_cname);
yr997_SA(y_str(" ", 1));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1936))).f_cname);
yr997_SA(y_str(";", 1));
F.v4677 = yr1016_SE();
yr1070_Put(&v942, F.v4677);
yr986_SB();
yr997_SA(y_str("struct ", 7));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1936))).f_cname);
yr997_SA(y_str(" {", 2));
F.v4675 = ((*(yR100 *)rt_nil_check(F.p1936))).f_fields;
while ((!(F.v4675 == ((void *)0)))) {
yr997_SA(y_str(" ", 1));
yr1004_ST(yr1765_CType(((*(yR105 *)rt_nil_check(F.v4675))).f_rep));
yr997_SA(y_str(" f_", 3));
yr1004_ST(((*(yR105 *)rt_nil_check(F.v4675))).f_name);
yr997_SA(y_str(";", 1));
F.v4679 = rt_range(rt_add(F.v4679, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4675 = ((*(yR105 *)rt_nil_check(F.v4675))).f_next;
}
if ((F.v4679 == INT64_C(0))) {
yr997_SA(y_str(" int empty_;", 12));
}
yr997_SA(y_str(" };", 3));
F.v4677 = yr1016_SE();
yr1070_Put(&v944, F.v4677);
yr1777_NewDesc(F.p1936);
yr986_SB();
yr997_SA(y_str("{ static const size_t o[] = {", 29));
F.v4675 = ((*(yR100 *)rt_nil_check(F.p1936))).f_fields;
while ((!(F.v4675 == ((void *)0)))) {
yr997_SA(y_str("offsetof(", 9));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1936))).f_cname);
yr997_SA(y_str(", f_", 4));
yr1004_ST(((*(yR105 *)rt_nil_check(F.v4675))).f_name);
yr997_SA(y_str("), ", 3));
F.v4675 = ((*(yR105 *)rt_nil_check(F.v4675))).f_next;
}
yr997_SA(y_str("0}; const ydesc **f = rt_alloc(", 31));
yr1010_SI(rt_range(rt_add(F.v4679, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr997_SA(y_str(" * sizeof *f);", 14));
F.v4672 = INT64_C(0);
F.v4675 = ((*(yR100 *)rt_nil_check(F.p1936))).f_fields;
while ((!(F.v4675 == ((void *)0)))) {
yr997_SA(y_str(" f[", 3));
yr1010_SI(F.v4672);
yr997_SA(y_str("] = ", 4));
yr1004_ST(yr1771_DescOf(((*(yR105 *)rt_nil_check(F.v4675))).f_rep));
yr997_SA(y_str(";", 1));
F.v4672 = rt_range(rt_add(F.v4672, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4675 = ((*(yR105 *)rt_nil_check(F.v4675))).f_next;
}
yr997_SA(y_str(" y_desc_record(", 15));
yr1004_ST(yr1771_DescOf(F.p1936));
yr997_SA(y_str(", sizeof(", 9));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p1936))).f_cname);
yr997_SA(y_str("), ", 3));
yr1010_SI(F.v4679);
yr997_SA(y_str(", o, (const ydesc *const *)f); }", 32));
F.v4677 = yr1016_SE();
yr1092_Emit(F.v4677);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1943_FindField(void * a_p1944, rt_int a_p1945) {
struct yf1946 F;
memset((void *)&F, 0, sizeof F);
F.p1944 = a_p1944;
F.p1945 = a_p1945;
F.v4726 = ((*(yR100 *)rt_nil_check(F.p1944))).f_fields;
while ((!(F.v4726 == ((void *)0)))) {
if ((((*(yR105 *)rt_nil_check(F.v4726))).f_name == F.p1945)) {
{ void * rv4727 = F.v4726;
return rv4727; }
}
F.v4726 = ((*(yR105 *)rt_nil_check(F.v4726))).f_next;
}
{ void * rv4728 = ((void *)0);
return rv4728; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2063_CharOrd(void * a_p2064, rt_int a_p2065) {
struct yf2066 F;
memset((void *)&F, 0, sizeof F);
F.p2064 = a_p2064;
F.p2065 = a_p2065;
if ((((*(yR100 *)rt_nil_check(F.p2064))).f_tid == ((*(yR100 *)rt_nil_check(v1696))).f_tid)) {
if ((((rt_int *)(v890).p)[y_ix1(v890, F.p2065)] == INT64_C(1))) {
{ rt_int rv4744 = ((rt_int *)(v931).p)[y_ix1(v931, yr1063_TChar(F.p2065, INT64_C(1)))];
return rv4744; }
}
F.v4735 = INT64_C(0);
F.v4739 = INT64_C(1);
F.lo4749 = INT64_C(1);
F.hi4750 = ((rt_int *)(v890).p)[y_ix1(v890, v2058)];
{ rt_int hi4754 = F.hi4750;
for (rt_int i4753 = F.lo4749; i4753 <= hi4754; i4753++) { F.c_4752 = i4753;
if ((yr1063_TChar(v2058, rt_range(F.c_4752, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 32)) {
F.v4741 = yr1028_Intern(rt_range(rt_add(((rt_int *)(v888).p)[y_ix1(v888, v2058)], (rt_sub(F.v4739, INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub(F.c_4752, F.v4739), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((F.v4741 == F.p2065)) {
if ((F.v4735 < INT64_C(32))) {
{ rt_int rv4761 = F.v4735;
return rv4761; }
}
if ((F.v4735 == INT64_C(32))) {
{ rt_int rv4764 = INT64_C(32);
return rv4764; }
}
if ((F.v4735 == INT64_C(33))) {
{ rt_int rv4767 = INT64_C(127);
return rv4767; }
}
if ((F.v4735 == INT64_C(34))) {
{ rt_int rv4770 = INT64_C(39);
return rv4770; }
}
{ rt_int rv4772 = INT64_C(34);
return rv4772; }
}
F.v4735 = rt_range(rt_add(F.v4735, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4739 = rt_range(rt_add(F.c_4752, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i4753 == hi4754) break;
}}
{ rt_int rv4778 = INT64_C(-1);
return rv4778; }
}
if ((!(((*(yR100 *)rt_nil_check(F.p2064))).f_kind == v789))) {
{ rt_int rv4780 = INT64_C(-1);
return rv4780; }
}
F.v4733 = ((*(yR100 *)rt_nil_check(F.p2064))).f_lits;
F.v4737 = INT64_C(0);
while ((!(F.v4733 == ((void *)0)))) {
if (yr1048_TEq(((*(yR95 *)rt_nil_check(F.v4733))).f_text, F.p2065)) {
{ rt_int rv4782 = F.v4737;
return rv4782; }
}
F.v4737 = rt_range(rt_add(F.v4737, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4733 = ((*(yR95 *)rt_nil_check(F.v4733))).f_next;
}
{ rt_int rv4786 = INT64_C(-1);
return rv4786; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2070_AlphabetFor(void * a_p2071, void * a_p2072) {
struct yf2073 F;
memset((void *)&F, 0, sizeof F);
F.p2071 = a_p2071;
F.p2072 = a_p2072;
F.v4795 = ((void *)0);
F.v4797 = INT64_C(0);
F.v4800 = INT64_C(0);
if ((!(((*(yR95 *)rt_nil_check(F.p2071))).f_d == ((void *)0)))) {
F.v4791 = yr1686_Real(yr1633_Lookup(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2071))).f_d))).f_name, ((*(yR95 *)rt_nil_check(F.p2071))).f_line));
if ((((((!(((*(yR115 *)rt_nil_check(F.v4791))).f_kind == v837))) && ((!(((*(yR115 *)rt_nil_check(F.v4791))).f_kind == v840))))) || ((!(((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4791))).f_rep))).f_kind == v789))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2071))).f_line, ((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2071))).f_d))).f_name, y_str(" is not an alphabet", 19));
}
{ void * rv4803 = ((*(yR115 *)rt_nil_check(F.v4791))).f_rep;
return rv4803; }
}
F.v4800 = INT64_C(1);
if ((((((*(yR95 *)rt_nil_check(F.p2071))).f_kind == v741)) || ((yr2063_CharOrd(v1696, ((*(yR95 *)rt_nil_check(F.p2071))).f_text) >= INT64_C(0))))) {
F.v4797 = INT64_C(1);
F.v4795 = v1696;
}
F.v4793 = v2061;
while ((!(F.v4793 == ((void *)0)))) {
F.v4791 = yr1621_Find(((*(yR95 *)rt_nil_check(F.v4793))).f_name);
if ((!(F.v4791 == ((void *)0)))) {
F.v4791 = yr1686_Real(F.v4791);
if ((((((((*(yR115 *)rt_nil_check(F.v4791))).f_kind == v837)) || ((((*(yR115 *)rt_nil_check(F.v4791))).f_kind == v840)))) && ((((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v4791))).f_rep))).f_tid == ((*(yR100 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v4793))).f_rep))).f_tid)))) {
F.v4800 = rt_range(rt_add(F.v4800, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((((*(yR95 *)rt_nil_check(F.p2071))).f_kind == v738)) && ((yr2063_CharOrd(((*(yR95 *)rt_nil_check(F.v4793))).f_rep, ((*(yR95 *)rt_nil_check(F.p2071))).f_text) >= INT64_C(0))))) {
F.v4797 = rt_range(rt_add(F.v4797, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4795 = ((*(yR95 *)rt_nil_check(F.v4793))).f_rep;
}
}
}
F.v4793 = ((*(yR95 *)rt_nil_check(F.v4793))).f_next;
}
if ((((((*(yR95 *)rt_nil_check(F.p2071))).f_kind == v741)) && ((F.v4800 > INT64_C(1))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2071))).f_line, y_str("a string in a scope with two alphabets is qualified by its alphabet (VI.A.3)", 76));
}
if ((F.v4797 > INT64_C(1))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2071))).f_line, yr2595_Join(yr1021_T(y_str("'", 1)), ((*(yR95 *)rt_nil_check(F.p2071))).f_text, yr1021_T(y_str("'", 1))), y_str(" is a character of two alphabets here: qualify it (VI.A.3)", 58));
}
if ((F.v4795 == ((void *)0))) {
{ void * rv4818 = v1696;
return rv4818; }
}
{ void * rv4819 = F.v4795;
return rv4819; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2077_CharValue(void * a_p2078, rt_int a_p2079, rt_int a_p2080) {
struct yf2081 F;
memset((void *)&F, 0, sizeof F);
F.p2078 = a_p2078;
F.p2079 = a_p2079;
F.p2080 = a_p2080;
F.v4825 = yr2063_CharOrd(F.p2078, F.p2079);
if ((F.v4825 < INT64_C(0))) {
yr986_SB();
yr997_SA(y_str("'", 1));
yr1004_ST(F.p2079);
yr997_SA(y_str("' is not a character of ", 24));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p2078))).f_tname);
F.v4827 = yr1016_SE();
yr1117_Fail(F.p2080, F.v4827);
}
{ rt_int rv4831 = F.v4825;
return rv4831; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2085_StringCodes(void * a_p2086, rt_int a_p2087, rt_int * a_p2088, rt_int a_p2089) {
struct yf2090 F;
memset((void *)&F, 0, sizeof F);
F.p2086 = a_p2086;
F.p2087 = a_p2087;
F.p2088_o = a_p2088;
F.p2089 = a_p2089;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&F.yd_4849, 1, lo, hi, &y_d_int); }
y_init(&F.yd_4849, &F.v4851);
F.p2088 = INT64_C(0);
F.v4838 = INT64_C(1);
while ((F.v4838 <= ((rt_int *)(v890).p)[y_ix1(v890, F.p2087)])) {
F.v4853 = yr1063_TChar(F.p2087, F.v4838);
if ((F.v4853 == 39)) {
F.v4840 = rt_range(rt_add(F.v4838, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1063_TChar(F.p2087, F.v4840) == 39))) {
F.v4840 = rt_range(rt_add(F.v4840, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v4855 = yr1028_Intern(rt_range(rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p2087)], F.v4838), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v4840, F.v4838)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v4842 = yr2077_CharValue(F.p2086, F.v4855, F.p2089);
F.v4838 = rt_range(rt_add(F.v4840, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v4855 = yr1028_Intern(rt_range(rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.p2087)], (rt_sub(F.v4838, INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), INT64_C(1));
F.v4842 = yr2077_CharValue(F.p2086, F.v4855, F.p2089);
F.v4838 = rt_range(rt_add(F.v4838, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.p2088 >= INT64_C(4096))) {
yr1124_FailS(F.p2089, y_str("string literal too long", 23));
}
F.p2088 = rt_range(rt_add(F.p2088, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(F.v4851).p)[y_ix1(F.v4851, F.p2088)] = F.v4842;
}
yr986_SB();
yr991_SC(34);
F.lo4883 = INT64_C(1);
F.hi4884 = F.p2088;
{ rt_int hi4888 = F.hi4884;
for (rt_int i4887 = F.lo4883; i4887 <= hi4888; i4887++) { F.c_4886 = i4887;
F.v4842 = ((rt_int *)(F.v4851).p)[y_ix1(F.v4851, F.c_4886)];
if ((((F.v4842 == INT64_C(34))) || ((F.v4842 == INT64_C(92))))) {
yr991_SC(92);
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, F.v4842)]);
} else if (((((F.v4842 >= INT64_C(32))) && ((F.v4842 < INT64_C(127)))) && (((((!(F.v4842 == INT64_C(63)))) || ((F.c_4886 == INT64_C(1)))) || ((!(((rt_int *)(F.v4851).p)[y_ix1(F.v4851, rt_sub(F.c_4886, INT64_C(1)))] == INT64_C(63)))))))) {
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, F.v4842)]);
} else {
yr991_SC(92);
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, rt_add(INT64_C(48), (rt_div(F.v4842, INT64_C(64)))))]);
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, rt_add(INT64_C(48), (rt_mod((rt_div(F.v4842, INT64_C(8))), INT64_C(8)))))]);
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, rt_add(INT64_C(48), (rt_mod(F.v4842, INT64_C(8)))))]);
}
if (i4887 == hi4888) break;
}}
yr991_SC(34);
{ rt_int rv4915 = yr1016_SE();
(*F.p2088_o) = F.p2088;
return rv4915; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2094_Manifest(void * a_p2095, rt_int * a_p2096, rt_int * a_p2097) {
struct yf2098 F;
memset((void *)&F, 0, sizeof F);
F.p2095 = a_p2095;
F.p2096_o = a_p2096;
F.p2097_o = a_p2097;
F.p2096 = 0;
F.p2097 = INT64_C(0);
if ((((*(yR95 *)rt_nil_check(F.p2095))).f_kind == v729)) {
F.p2096 = 1;
F.p2097 = ((*(yR95 *)rt_nil_check(F.p2095))).f_ival;
(*F.p2096_o) = F.p2096;
(*F.p2097_o) = F.p2097;
return;
}
if ((((*(yR95 *)rt_nil_check(F.p2095))).f_kind == v738)) {
F.v4933 = yr2070_AlphabetFor(F.p2095, ((void *)0));
F.p2097 = yr2063_CharOrd(F.v4933, ((*(yR95 *)rt_nil_check(F.p2095))).f_text);
F.p2096 = (F.p2097 >= INT64_C(0));
(*F.p2096_o) = F.p2096;
(*F.p2097_o) = F.p2097;
return;
}
if ((((*(yR95 *)rt_nil_check(F.p2095))).f_kind == v747)) {
if ((!(((*(yR95 *)rt_nil_check(F.p2095))).f_d == ((void *)0)))) {
F.v4921 = yr1686_Real(yr1633_Lookup(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2095))).f_d))).f_name, ((*(yR95 *)rt_nil_check(F.p2095))).f_line));
F.v4921 = yr1646_FindLit(((*(yR95 *)rt_nil_check(F.p2095))).f_name, ((*(yR115 *)rt_nil_check(F.v4921))).f_rep);
} else {
F.v4921 = yr1621_Find(((*(yR95 *)rt_nil_check(F.p2095))).f_name);
}
if ((F.v4921 == ((void *)0))) {
(*F.p2096_o) = F.p2096;
(*F.p2097_o) = F.p2097;
return;
}
F.v4921 = yr1686_Real(F.v4921);
if ((((((((*(yR115 *)rt_nil_check(F.v4921))).f_kind == v843)) || ((((*(yR115 *)rt_nil_check(F.v4921))).f_kind == v834)))) && ((*(yR115 *)rt_nil_check(F.v4921))).f_hasmv)) {
F.p2096 = 1;
F.p2097 = ((*(yR115 *)rt_nil_check(F.v4921))).f_mval;
}
(*F.p2096_o) = F.p2096;
(*F.p2097_o) = F.p2097;
return;
}
if ((((*(yR95 *)rt_nil_check(F.p2095))).f_kind == v771)) {
yr2094_Manifest(((*(yR95 *)rt_nil_check(F.p2095))).f_a, &F.p2096, &F.p2097);
(*F.p2096_o) = F.p2096;
(*F.p2097_o) = F.p2097;
return;
}
if ((((*(yR95 *)rt_nil_check(F.p2095))).f_kind == v765)) {
yr2094_Manifest(((*(yR95 *)rt_nil_check(F.p2095))).f_a, &F.p2096, &F.p2097);
F.p2097 = rt_range(rt_neg(F.p2097), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2096_o) = F.p2096;
(*F.p2097_o) = F.p2097;
return;
}
if ((((*(yR95 *)rt_nil_check(F.p2095))).f_kind == v768)) {
yr2094_Manifest(((*(yR95 *)rt_nil_check(F.p2095))).f_a, &F.v4927, &F.v4923);
yr2094_Manifest(((*(yR95 *)rt_nil_check(F.p2095))).f_b, &F.v4929, &F.v4925);
if ((!((F.v4927 && F.v4929)))) {
(*F.p2096_o) = F.p2096;
(*F.p2097_o) = F.p2097;
return;
}
F.v4931 = ((*(yR95 *)rt_nil_check(F.p2095))).f_name;
F.p2096 = 1;
if ((F.v4931 == v543)) {
F.p2097 = rt_range(rt_add(F.v4923, F.v4925), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v4931 == v546)) {
F.p2097 = rt_range(rt_sub(F.v4923, F.v4925), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v4931 == v549)) {
F.p2097 = rt_range(rt_mul(F.v4923, F.v4925), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v4931 == v246)) && ((!(F.v4925 == INT64_C(0)))))) {
F.p2097 = rt_range(rt_div(F.v4923, F.v4925), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v4931 == v348)) && ((!(F.v4925 == INT64_C(0)))))) {
F.p2097 = rt_range(rt_mod(F.v4923, F.v4925), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.p2096 = 0;
}
(*F.p2096_o) = F.p2096;
(*F.p2097_o) = F.p2097;
return;
}
(*F.p2096_o) = F.p2096;
(*F.p2097_o) = F.p2097;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2102_NeedsConv(void * a_p2103, void * a_p2104) {
struct yf2105 F;
memset((void *)&F, 0, sizeof F);
F.p2103 = a_p2103;
F.p2104 = a_p2104;
if ((F.p2103 == F.p2104)) {
{ rt_int rv4953 = 0;
return rv4953; }
}
if (yr1729_IsDiscrete(F.p2103)) {
if ((((*(yR100 *)rt_nil_check(F.p2103))).f_lo == INT64_C(0))) {
{ rt_int rv4956 = 0;
return rv4956; }
}
{ rt_int rv4957 = (!((((((*(yR100 *)rt_nil_check(F.p2103))).f_hasm && ((*(yR100 *)rt_nil_check(F.p2104))).f_hasm) && ((((*(yR100 *)rt_nil_check(F.p2103))).f_mlo <= ((*(yR100 *)rt_nil_check(F.p2104))).f_mlo))) && ((((*(yR100 *)rt_nil_check(F.p2104))).f_mhi <= ((*(yR100 *)rt_nil_check(F.p2103))).f_mhi)))));
return rv4957; }
}
if ((((((*(yR100 *)rt_nil_check(F.p2103))).f_kind == v780)) || ((((*(yR100 *)rt_nil_check(F.p2103))).f_kind == v777)))) {
{ rt_int rv4959 = (!(((*(yR100 *)rt_nil_check(F.p2103))).f_lo == INT64_C(0)));
return rv4959; }
}
if ((((*(yR100 *)rt_nil_check(F.p2103))).f_kind == v795)) {
{ rt_int rv4960 = (((((*(yR100 *)rt_nil_check(F.p2104))).f_kind == v795)) && ((!(((*(yR100 *)rt_nil_check(F.p2103))).f_cname == ((*(yR100 *)rt_nil_check(F.p2104))).f_cname))));
return rv4960; }
}
if ((((((*(yR100 *)rt_nil_check(F.p2103))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.p2103))).f_kind == v813)))) {
if ((((!(((*(yR100 *)rt_nil_check(F.p2104))).f_kind == v792))) && ((!(((*(yR100 *)rt_nil_check(F.p2104))).f_kind == v813))))) {
{ rt_int rv4962 = 0;
return rv4962; }
}
{ rt_int rv4963 = yr2102_NeedsConv(((*(yR100 *)rt_nil_check(F.p2103))).f_elem, ((*(yR100 *)rt_nil_check(F.p2104))).f_elem);
return rv4963; }
}
{ rt_int rv4965 = 0;
return rv4965; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2109_ConvertRecord(rt_int a_p2110, void * a_p2111, void * a_p2112) {
struct yf2113 F;
memset((void *)&F, 0, sizeof F);
F.p2110 = a_p2110;
F.p2111 = a_p2111;
F.p2112 = a_p2112;
F.v4971 = yr1146_Fresh(y_str("cs", 2));
F.v4973 = yr1146_Fresh(y_str("cd", 2));
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(yr1765_CType(F.p2112));
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v4971);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.p2110);
yr997_SA(y_str("; ", 2));
yr1004_ST(yr1765_CType(F.p2111));
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v4973);
yr997_SA(y_str("; memset(&", 10));
yr1004_ST(F.v4973);
yr997_SA(y_str(", 0, sizeof ", 12));
yr1004_ST(F.v4973);
yr997_SA(y_str(");", 2));
F.v4975 = ((*(yR100 *)rt_nil_check(F.p2111))).f_fields;
while ((!(F.v4975 == ((void *)0)))) {
F.v4977 = yr1943_FindField(F.p2112, ((*(yR105 *)rt_nil_check(F.v4975))).f_name);
if ((!(F.v4977 == ((void *)0)))) {
yr997_SA(y_str(" ", 1));
if ((!(((*(yR105 *)rt_nil_check(F.v4977))).f_variant == INT64_C(0)))) {
yr997_SA(y_str("if (", 4));
yr1004_ST(yr2201_VariantTest(F.p2112, F.v4977, yr2595_Join(yr1021_T(y_str("(&", 2)), F.v4971, yr1021_T(y_str(")", 1)))));
yr997_SA(y_str(") ", 2));
}
yr1004_ST(F.v4973);
yr997_SA(y_str(".f_", 3));
yr1004_ST(((*(yR105 *)rt_nil_check(F.v4975))).f_name);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2125_Convert(yr2595_Join(F.v4971, yr1021_T(y_str(".f_", 3)), ((*(yR105 *)rt_nil_check(F.v4975))).f_name), ((*(yR105 *)rt_nil_check(F.v4975))).f_rep, ((*(yR105 *)rt_nil_check(F.v4977))).f_rep));
yr997_SA(y_str(";", 1));
}
F.v4975 = ((*(yR105 *)rt_nil_check(F.v4975))).f_next;
}
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v4973);
yr997_SA(y_str("; })", 4));
{ rt_int rv5000 = yr1016_SE();
return rv5000; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2117_ConvertArray(rt_int a_p2118, void * a_p2119, void * a_p2120) {
struct yf2121 F;
memset((void *)&F, 0, sizeof F);
F.p2118 = a_p2118;
F.p2119 = a_p2119;
F.p2120 = a_p2120;
F.v5006 = yr1146_Fresh(y_str("cs", 2));
F.v5008 = yr1146_Fresh(y_str("cd", 2));
F.v5010 = yr1146_Fresh(y_str("ck", 2));
F.v5012 = yr1146_Fresh(y_str("cn", 2));
F.v5014 = yr1765_CType(((*(yR100 *)rt_nil_check(F.p2119))).f_elem);
F.v5016 = yr1765_CType(((*(yR100 *)rt_nil_check(F.p2120))).f_elem);
yr986_SB();
yr997_SA(y_str("({ yarr ", 8));
yr1004_ST(F.v5006);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.p2118);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v5008);
yr997_SA(y_str("; rt_int ", 9));
yr1004_ST(F.v5012);
yr997_SA(y_str(" = y_count(", 11));
yr1004_ST(F.v5006);
yr997_SA(y_str(", ", 2));
yr1010_SI(((*(yR100 *)rt_nil_check(F.p2120))).f_nidx);
yr997_SA(y_str(");", 2));
if ((((*(yR100 *)rt_nil_check(F.p2119))).f_kind == v792)) {
yr997_SA(y_str(" y_init(", 8));
yr1004_ST(yr1771_DescOf(F.p2119));
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v5008);
yr997_SA(y_str("); if (y_count(", 15));
yr1004_ST(F.v5008);
yr997_SA(y_str(", ", 2));
yr1010_SI(((*(yR100 *)rt_nil_check(F.p2119))).f_nidx);
yr997_SA(y_str(") != ", 5));
yr1004_ST(F.v5012);
yr997_SA(y_str(") rt_raise_msg(RT_X_RANGE, ", 27));
yr991_SC(34);
yr997_SA(y_str("array lengths differ", 20));
yr991_SC(34);
yr997_SA(y_str(");", 2));
} else {
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v5008);
yr997_SA(y_str(" = y_like(", 10));
yr1004_ST(F.v5006);
yr997_SA(y_str(", ", 2));
yr1010_SI(((*(yR100 *)rt_nil_check(F.p2120))).f_nidx);
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1771_DescOf(((*(yR100 *)rt_nil_check(F.p2119))).f_elem));
yr997_SA(y_str(");", 2));
}
yr997_SA(y_str(" for (rt_int ", 13));
yr1004_ST(F.v5010);
yr997_SA(y_str(" = 0; ", 6));
yr1004_ST(F.v5010);
yr997_SA(y_str(" < ", 3));
yr1004_ST(F.v5012);
yr997_SA(y_str("; ", 2));
yr1004_ST(F.v5010);
yr997_SA(y_str("++) ((", 6));
yr1004_ST(F.v5014);
yr997_SA(y_str(" *)", 3));
yr1004_ST(F.v5008);
yr997_SA(y_str(".p)[", 4));
yr1004_ST(F.v5010);
yr997_SA(y_str("] = ", 4));
yr1004_ST(yr2125_Convert(yr2595_Join(yr1021_T(y_str("((", 2)), F.v5016, yr2595_Join(yr1021_T(y_str(" *)", 3)), F.v5006, yr2595_Join(yr1021_T(y_str(".p)[", 4)), F.v5010, yr1021_T(y_str("]", 1))))), ((*(yR100 *)rt_nil_check(F.p2119))).f_elem, ((*(yR100 *)rt_nil_check(F.p2120))).f_elem));
yr997_SA(y_str("; ", 2));
yr1004_ST(F.v5008);
yr997_SA(y_str("; })", 4));
{ rt_int rv5057 = yr1016_SE();
return rv5057; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2125_Convert(rt_int a_p2126, void * a_p2127, void * a_p2128) {
struct yf2129 F;
memset((void *)&F, 0, sizeof F);
F.p2126 = a_p2126;
F.p2127 = a_p2127;
F.p2128 = a_p2128;
if ((!yr2102_NeedsConv(F.p2127, F.p2128))) {
{ rt_int rv5062 = F.p2126;
return rv5062; }
}
if ((((*(yR100 *)rt_nil_check(F.p2127))).f_kind == v795)) {
{ rt_int rv5063 = yr2109_ConvertRecord(F.p2126, F.p2127, F.p2128);
return rv5063; }
}
if ((((((*(yR100 *)rt_nil_check(F.p2127))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.p2127))).f_kind == v813)))) {
{ rt_int rv5064 = yr2117_ConvertArray(F.p2126, F.p2127, F.p2128);
return rv5064; }
}
if (yr1729_IsDiscrete(F.p2127)) {
yr986_SB();
yr997_SA(y_str("rt_range(", 9));
yr1004_ST(F.p2126);
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1846_LoText(F.p2127));
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1852_HiText(F.p2127));
yr997_SA(y_str(")", 1));
{ rt_int rv5069 = yr1016_SE();
return rv5069; }
}
if ((((*(yR100 *)rt_nil_check(F.p2127))).f_kind == v780)) {
yr986_SB();
yr997_SA(y_str("rt_frange(", 10));
yr1004_ST(F.p2126);
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1846_LoText(F.p2127));
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1852_HiText(F.p2127));
yr997_SA(y_str(")", 1));
{ rt_int rv5074 = yr1016_SE();
return rv5074; }
}
if ((((*(yR100 *)rt_nil_check(F.p2127))).f_kind == v777)) {
yr986_SB();
yr997_SA(y_str("y_fixed(", 8));
yr1004_ST(F.p2126);
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1846_LoText(F.p2127));
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1852_HiText(F.p2127));
yr997_SA(y_str(", ", 2));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p2127))).f_scale);
yr997_SA(y_str(")", 1));
{ rt_int rv5080 = yr1016_SE();
return rv5080; }
}
{ rt_int rv5081 = F.p2126;
return rv5081; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2133_StoreText(rt_int a_p2134, void * a_p2135, rt_int a_p2136, void * a_p2137, rt_int a_p2138) {
struct yf2139 F;
memset((void *)&F, 0, sizeof F);
F.p2134 = a_p2134;
F.p2135 = a_p2135;
F.p2136 = a_p2136;
F.p2137 = a_p2137;
F.p2138 = a_p2138;
yr1798_CheckType(F.p2138, F.p2135, F.p2137);
if (yr1753_Deep(F.p2135)) {
F.v5089 = yr1146_Fresh(y_str("t", 1));
yr986_SB();
yr997_SA(y_str("{ ", 2));
yr1004_ST(yr1765_CType(F.p2135));
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v5089);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2125_Convert(F.p2136, F.p2135, F.p2137));
yr997_SA(y_str("; y_store(", 10));
yr1004_ST(yr1771_DescOf(F.p2135));
yr997_SA(y_str(", &", 3));
yr1004_ST(F.p2134);
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v5089);
yr997_SA(y_str("); }", 4));
{ rt_int rv5098 = yr1016_SE();
return rv5098; }
}
yr986_SB();
yr1004_ST(F.p2134);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2125_Convert(F.p2136, F.p2135, F.p2137));
yr997_SA(y_str(";", 1));
{ rt_int rv5101 = yr1016_SE();
return rv5101; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2143_Store(rt_int a_p2144, void * a_p2145, rt_int a_p2146, void * a_p2147, rt_int a_p2148) {
struct yf2149 F;
memset((void *)&F, 0, sizeof F);
F.p2144 = a_p2144;
F.p2145 = a_p2145;
F.p2146 = a_p2146;
F.p2147 = a_p2147;
F.p2148 = a_p2148;
yr1092_Emit(yr2133_StoreText(F.p2144, F.p2145, F.p2146, F.p2147, F.p2148));
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2153_IsVariable(void * a_p2154) {
struct yf2155 F;
memset((void *)&F, 0, sizeof F);
F.p2154 = a_p2154;
if ((((*(yR95 *)rt_nil_check(F.p2154))).f_kind == v747)) {
F.v5111 = yr1621_Find(((*(yR95 *)rt_nil_check(F.p2154))).f_name);
if ((F.v5111 == ((void *)0))) {
{ rt_int rv5115 = 0;
return rv5115; }
}
if (((*(yR115 *)rt_nil_check(F.v5111))).f_readonly) {
{ rt_int rv5117 = 0;
return rv5117; }
}
{ rt_int rv5118 = (((*(yR115 *)rt_nil_check(yr1686_Real(F.v5111)))).f_kind == v831);
return rv5118; }
}
if ((((*(yR95 *)rt_nil_check(F.p2154))).f_kind == v759)) {
{ rt_int rv5120 = (((*(yR95 *)rt_nil_check(F.p2154))).f_flag == INT64_C(0));
return rv5120; }
}
if ((((*(yR95 *)rt_nil_check(F.p2154))).f_kind == v756)) {
{ rt_int rv5121 = yr2153_IsVariable(((*(yR95 *)rt_nil_check(F.p2154))).f_a);
return rv5121; }
}
if ((((*(yR95 *)rt_nil_check(F.p2154))).f_kind == v753)) {
if ((!yr2153_IsVariable(((*(yR95 *)rt_nil_check(F.p2154))).f_a))) {
{ rt_int rv5123 = 0;
return rv5123; }
}
F.v5113 = yr1943_FindField(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2154))).f_a))).f_rep, ((*(yR95 *)rt_nil_check(F.p2154))).f_name);
if ((F.v5113 == ((void *)0))) {
{ rt_int rv5125 = 0;
return rv5125; }
}
{ rt_int rv5126 = (!((*(yR105 *)rt_nil_check(F.v5113))).f_isconst);
return rv5126; }
}
{ rt_int rv5128 = 0;
return rv5128; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2159_CheckPure(void * a_p2160) {
struct yf2161 F;
memset((void *)&F, 0, sizeof F);
F.p2160 = a_p2160;
F.v5132 = F.p2160;
if ((v2513 == ((void *)0))) {
return;
}
if ((!((*(yR115 *)rt_nil_check(v2513))).f_func)) {
return;
}
while ((((((*(yR95 *)rt_nil_check(F.v5132))).f_kind == v753)) || ((((*(yR95 *)rt_nil_check(F.v5132))).f_kind == v756)))) {
F.v5132 = ((*(yR95 *)rt_nil_check(F.v5132))).f_a;
}
if ((((*(yR95 *)rt_nil_check(F.v5132))).f_kind == v759)) {
if ((((*(yR95 *)rt_nil_check(F.v5132))).f_flag == INT64_C(0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2160))).f_line, y_str("a FUNCTION does not assign to a dynamic variable (X.A.4)", 56));
}
return;
}
if ((((*(yR95 *)rt_nil_check(F.v5132))).f_kind == v747)) {
F.v5134 = yr1621_Find(((*(yR95 *)rt_nil_check(F.v5132))).f_name);
if ((!(F.v5134 == ((void *)0)))) {
F.v5134 = yr1686_Real(F.v5134);
if ((((*(yR115 *)rt_nil_check(F.v5134))).f_level < ((*(yR115 *)rt_nil_check(v2513))).f_level)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2160))).f_line, ((*(yR95 *)rt_nil_check(F.v5132))).f_name, y_str(" is not local: a FUNCTION assigns only to its locals (X.A.4)", 60));
}
}
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2165_LValue(void * a_p2166, rt_int * a_p2167, void * * a_p2168) {
struct yf2169 F;
memset((void *)&F, 0, sizeof F);
F.p2166 = a_p2166;
F.p2167_o = a_p2167;
F.p2168_o = a_p2168;
yr2192_Expr(F.p2166, ((void *)0), &F.p2167, &F.p2168);
if ((!yr2153_IsVariable(F.p2166))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2166))).f_line, y_str("a variable is needed here (IX.A.1)", 34));
}
(*F.p2167_o) = F.p2167;
(*F.p2168_o) = F.p2168;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2173_Paren(rt_int a_p2174) {
struct yf2175 F;
memset((void *)&F, 0, sizeof F);
F.p2174 = a_p2174;
yr986_SB();
yr997_SA(y_str("(", 1));
yr1004_ST(F.p2174);
yr997_SA(y_str(")", 1));
{ rt_int rv5147 = yr1016_SE();
return rv5147; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2179_Lit(void * a_p2180, rt_int a_p2181) {
struct yf2182 F;
memset((void *)&F, 0, sizeof F);
F.p2180 = a_p2180;
F.p2181 = a_p2181;
F.v5152 = yr1723_CopyRep(F.p2180);
yr1871_SetRange(F.v5152, F.p2181, F.p2181);
((*(yR100 *)rt_nil_check(F.v5152))).f_elem = F.p2180;
{ void * rv5153 = F.v5152;
return rv5153; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2186_Qualifier(void * a_p2187) {
struct yf2188 F;
memset((void *)&F, 0, sizeof F);
F.p2187 = a_p2187;
F.v5157 = yr1686_Real(yr1633_Lookup(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2187))).f_d))).f_name, ((*(yR95 *)rt_nil_check(F.p2187))).f_line));
if ((((!(((*(yR115 *)rt_nil_check(F.v5157))).f_kind == v837))) && ((!(((*(yR115 *)rt_nil_check(F.v5157))).f_kind == v840))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2187))).f_line, ((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2187))).f_d))).f_name, y_str(" is not a type", 14));
}
{ void * rv5159 = ((*(yR115 *)rt_nil_check(F.v5157))).f_rep;
return rv5159; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2192_Expr(void * a_p2193, void * a_p2194, rt_int * a_p2195, void * * a_p2196) {
struct yf2197 F;
memset((void *)&F, 0, sizeof F);
F.p2193 = a_p2193;
F.p2194 = a_p2194;
F.p2195_o = a_p2195;
F.p2196_o = a_p2196;
F.v5166 = ((*(yR95 *)rt_nil_check(F.p2193))).f_kind;
v960 = ((*(yR95 *)rt_nil_check(F.p2193))).f_line;
if ((F.v5166 == v771)) {
yr2192_Expr(((*(yR95 *)rt_nil_check(F.p2193))).f_a, F.p2194, &F.v5170, &F.p2196);
F.p2195 = yr2173_Paren(F.v5170);
} else if ((F.v5166 == v729)) {
F.p2196 = yr2179_Lit(v1692, ((*(yR95 *)rt_nil_check(F.p2193))).f_ival);
if ((!(((*(yR95 *)rt_nil_check(F.p2193))).f_d == ((void *)0)))) {
F.v5176 = yr2186_Qualifier(F.p2193);
if ((!(((*(yR100 *)rt_nil_check(F.v5176))).f_kind == v774))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2193))).f_line, y_str("an integer literal qualified by a type that is not INTEGER", 58));
}
((*(yR100 *)rt_nil_check(F.p2196))).f_tid = ((*(yR100 *)rt_nil_check(F.v5176))).f_tid;
((*(yR100 *)rt_nil_check(F.p2196))).f_tname = ((*(yR100 *)rt_nil_check(F.v5176))).f_tname;
}
yr986_SB();
yr997_SA(y_str("INT64_C(", 8));
yr1010_SI(((*(yR95 *)rt_nil_check(F.p2193))).f_ival);
yr997_SA(y_str(")", 1));
F.p2195 = yr1016_SE();
} else if ((F.v5166 == v738)) {
F.v5176 = yr2070_AlphabetFor(F.p2193, F.p2194);
F.v5182 = yr2077_CharValue(F.v5176, ((*(yR95 *)rt_nil_check(F.p2193))).f_text, ((*(yR95 *)rt_nil_check(F.p2193))).f_line);
F.p2196 = yr2179_Lit(F.v5176, F.v5182);
yr986_SB();
yr1010_SI(F.v5182);
F.p2195 = yr1016_SE();
} else if ((F.v5166 == v741)) {
F.v5176 = yr2070_AlphabetFor(F.p2193, F.p2194);
F.v5170 = yr2085_StringCodes(F.v5176, ((*(yR95 *)rt_nil_check(F.p2193))).f_text, &F.v5180, ((*(yR95 *)rt_nil_check(F.p2193))).f_line);
F.p2196 = yr1716_NewRep(v816, yr1021_T(y_str("string", 6)));
((*(yR100 *)rt_nil_check(F.p2196))).f_tname = yr1021_T(y_str("a string literal", 16));
((*(yR100 *)rt_nil_check(F.p2196))).f_elem = F.v5176;
((*(yR100 *)rt_nil_check(F.p2196))).f_nidx = INT64_C(1);
((*(yR100 *)rt_nil_check(F.p2196))).f_nlits = F.v5180;
yr986_SB();
yr997_SA(y_str("y_str(", 6));
yr1004_ST(F.v5170);
yr997_SA(y_str(", ", 2));
yr1010_SI(F.v5180);
yr997_SA(y_str(")", 1));
F.p2195 = yr1016_SE();
} else if ((F.v5166 == v735)) {
F.p2196 = v1704;
if ((!(((*(yR95 *)rt_nil_check(F.p2193))).f_d == ((void *)0)))) {
F.p2196 = yr2186_Qualifier(F.p2193);
}
F.p2195 = yr2173_Paren(((*(yR95 *)rt_nil_check(F.p2193))).f_text);
} else if ((F.v5166 == v732)) {
F.p2196 = v1706;
if ((!(((*(yR95 *)rt_nil_check(F.p2193))).f_d == ((void *)0)))) {
F.p2196 = yr2186_Qualifier(F.p2193);
}
F.p2195 = ((*(yR95 *)rt_nil_check(F.p2193))).f_text;
} else if ((F.v5166 == v744)) {
if ((((*(yR95 *)rt_nil_check(F.p2193))).f_d == ((void *)0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2193))).f_line, y_str("NIL is qualified by the name of a pointer type (VI.B.4)", 55));
}
F.p2196 = yr2186_Qualifier(F.p2193);
if ((!(((*(yR100 *)rt_nil_check(F.p2196))).f_kind == v798))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2193))).f_line, y_str("NIL of a type that is not a pointer", 35));
}
F.p2195 = yr1021_T(y_str("((void *)0)", 11));
} else if ((F.v5166 == v747)) {
if ((!(((*(yR95 *)rt_nil_check(F.p2193))).f_d == ((void *)0)))) {
F.v5176 = yr2186_Qualifier(F.p2193);
F.v5168 = yr1646_FindLit(((*(yR95 *)rt_nil_check(F.p2193))).f_name, F.v5176);
if ((F.v5168 == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2193))).f_line, ((*(yR95 *)rt_nil_check(F.p2193))).f_name, y_str(" is not a literal of that type", 30));
}
} else {
F.v5168 = yr1633_Lookup(((*(yR95 *)rt_nil_check(F.p2193))).f_name, ((*(yR95 *)rt_nil_check(F.p2193))).f_line);
}
yr2209_NameExpr(F.p2193, F.v5168, &F.p2195, &F.p2196);
} else if ((F.v5166 == v750)) {
yr2412_CallExpr(F.p2193, F.p2194, 0, &F.p2195, &F.p2196);
} else if ((F.v5166 == v753)) {
yr2192_Expr(((*(yR95 *)rt_nil_check(F.p2193))).f_a, ((void *)0), &F.v5170, &F.v5176);
((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2193))).f_a))).f_rep = F.v5176;
if ((!(((*(yR100 *)rt_nil_check(F.v5176))).f_kind == v795))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2193))).f_line, ((*(yR95 *)rt_nil_check(F.p2193))).f_name, y_str(": a component of something that is not a record", 47));
}
if (((*(yR100 *)rt_nil_check(F.v5176))).f_opaque) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2193))).f_line, ((*(yR100 *)rt_nil_check(F.v5176))).f_tname, y_str(" is exported opaquely: its components are hidden (X.B.3)", 56));
}
F.v5178 = yr1943_FindField(F.v5176, ((*(yR95 *)rt_nil_check(F.p2193))).f_name);
if ((F.v5178 == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2193))).f_line, ((*(yR95 *)rt_nil_check(F.p2193))).f_name, y_str(" is not a component of this record", 34));
}
F.p2196 = ((*(yR105 *)rt_nil_check(F.v5178))).f_rep;
if ((!(((*(yR105 *)rt_nil_check(F.v5178))).f_variant == INT64_C(0)))) {
F.v5172 = yr1146_Fresh(y_str("vr", 2));
yr986_SB();
yr997_SA(y_str("(*({ ", 5));
yr1004_ST(yr1765_CType(F.v5176));
yr997_SA(y_str(" *", 2));
yr1004_ST(F.v5172);
yr997_SA(y_str(" = &", 4));
yr1004_ST(yr2173_Paren(F.v5170));
yr997_SA(y_str("; if (!(", 8));
yr1004_ST(yr2201_VariantTest(F.v5176, F.v5178, F.v5172));
yr997_SA(y_str(")) rt_raise(RT_X_TAG); &", 24));
yr1004_ST(F.v5172);
yr997_SA(y_str("->f_", 4));
yr1004_ST(((*(yR95 *)rt_nil_check(F.p2193))).f_name);
yr997_SA(y_str("; }))", 5));
F.p2195 = yr1016_SE();
} else {
yr986_SB();
yr1004_ST(yr2173_Paren(F.v5170));
yr997_SA(y_str(".f_", 3));
yr1004_ST(((*(yR95 *)rt_nil_check(F.p2193))).f_name);
F.p2195 = yr1016_SE();
}
} else if ((((F.v5166 == v759)) && yr2374_UserOp(F.p2193, rt_range(v588, INT64_C(0), INT64_C(4000000)), ((*(yR95 *)rt_nil_check(F.p2193))).f_a, ((void *)0), &F.p2195, &F.p2196))) {
((*(yR95 *)rt_nil_check(F.p2193))).f_flag = INT64_C(1);
} else if ((F.v5166 == v759)) {
yr2192_Expr(((*(yR95 *)rt_nil_check(F.p2193))).f_a, ((void *)0), &F.v5170, &F.v5176);
if ((!(((*(yR100 *)rt_nil_check(F.v5176))).f_kind == v798))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2193))).f_line, y_str("^ of something that is not a pointer", 36));
}
if ((((*(yR100 *)rt_nil_check(F.v5176))).f_elem == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2193))).f_line, ((*(yR100 *)rt_nil_check(F.v5176))).f_forward, y_str(" is not declared", 16));
}
F.p2196 = ((*(yR100 *)rt_nil_check(F.v5176))).f_elem;
yr986_SB();
yr997_SA(y_str("(*(", 3));
yr1004_ST(yr1765_CType(F.p2196));
yr997_SA(y_str(" *)rt_nil_check(", 16));
yr1004_ST(F.v5170);
yr997_SA(y_str("))", 2));
F.p2195 = yr1016_SE();
} else if ((F.v5166 == v756)) {
yr2218_IndexExpr(F.p2193, &F.p2195, &F.p2196);
} else if ((((F.v5166 == v762)) && yr2374_UserOp(F.p2193, rt_range(v360, INT64_C(0), INT64_C(4000000)), ((*(yR95 *)rt_nil_check(F.p2193))).f_a, ((void *)0), &F.p2195, &F.p2196))) {
F.p2196 = F.p2196;
} else if ((F.v5166 == v762)) {
yr2192_Expr(((*(yR95 *)rt_nil_check(F.p2193))).f_a, v1694, &F.v5170, &F.v5176);
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.p2193))).f_line, v1694, F.v5176);
F.p2196 = v1694;
yr986_SB();
yr997_SA(y_str("(!", 2));
yr1004_ST(F.v5170);
yr997_SA(y_str(")", 1));
F.p2195 = yr1016_SE();
} else if ((F.v5166 == v765)) {
if ((!yr2374_UserOp(F.p2193, rt_range(v546, INT64_C(0), INT64_C(4000000)), ((*(yR95 *)rt_nil_check(F.p2193))).f_a, ((void *)0), &F.p2195, &F.p2196))) {
yr2192_Expr(((*(yR95 *)rt_nil_check(F.p2193))).f_a, F.p2194, &F.v5170, &F.v5176);
yr2226_NegExpr(F.p2193, F.v5170, F.v5176, &F.p2195, &F.p2196);
}
} else if ((F.v5166 == v768)) {
yr2275_BinExpr(F.p2193, F.p2194, &F.p2195, &F.p2196);
} else {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2193))).f_line, y_str("not an expression", 17));
}
((*(yR95 *)rt_nil_check(F.p2193))).f_rep = F.p2196;
(*F.p2195_o) = F.p2195;
(*F.p2196_o) = F.p2196;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2201_VariantTest(void * a_p2202, void * a_p2203, rt_int a_p2204) {
struct yf2205 F;
memset((void *)&F, 0, sizeof F);
F.p2202 = a_p2202;
F.p2203 = a_p2203;
F.p2204 = a_p2204;
F.v5224 = ((*(yR105 *)rt_nil_check(F.p2203))).f_labels;
yr986_SB();
yr997_SA(y_str("0", 1));
while ((!(F.v5224 == ((void *)0)))) {
yr2094_Manifest(F.v5224, &F.v5226, &F.v5228);
yr997_SA(y_str(" || ", 4));
yr1004_ST(F.p2204);
yr997_SA(y_str("->f_", 4));
yr1004_ST(((*(yR105 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p2202))).f_selector))).f_name);
yr997_SA(y_str(" == ", 4));
yr1010_SI(F.v5228);
F.v5224 = ((*(yR95 *)rt_nil_check(F.v5224))).f_next;
}
{ rt_int rv5233 = yr1016_SE();
return rv5233; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2209_NameExpr(void * a_p2210, void * a_p2211, rt_int * a_p2212, void * * a_p2213) {
struct yf2214 F;
memset((void *)&F, 0, sizeof F);
F.p2210 = a_p2210;
F.p2211 = a_p2211;
F.p2212_o = a_p2212;
F.p2213_o = a_p2213;
F.v5240 = yr1686_Real(F.p2211);
if ((((*(yR115 *)rt_nil_check(F.v5240))).f_kind == v843)) {
if ((((((*(yR95 *)rt_nil_check(F.p2210))).f_d == ((void *)0))) && yr1640_Ambiguous(F.v5240))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2210))).f_line, ((*(yR95 *)rt_nil_check(F.p2210))).f_name, y_str(" names values of two types here: qualify it (VI.A.3)", 52));
}
F.p2213 = yr2179_Lit(((*(yR115 *)rt_nil_check(F.v5240))).f_rep, ((*(yR115 *)rt_nil_check(F.v5240))).f_mval);
yr986_SB();
yr1010_SI(((*(yR115 *)rt_nil_check(F.v5240))).f_mval);
F.p2212 = yr1016_SE();
(*F.p2212_o) = F.p2212;
(*F.p2213_o) = F.p2213;
return;
}
if ((((((*(yR115 *)rt_nil_check(F.v5240))).f_kind == v831)) || ((((*(yR115 *)rt_nil_check(F.v5240))).f_kind == v834)))) {
F.p2213 = ((*(yR115 *)rt_nil_check(F.v5240))).f_rep;
F.p2212 = yr1680_SymPath(F.v5240);
(*F.p2212_o) = F.p2212;
(*F.p2213_o) = F.p2213;
return;
}
if ((((*(yR115 *)rt_nil_check(F.v5240))).f_kind == v846)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2210))).f_line, ((*(yR95 *)rt_nil_check(F.p2210))).f_name, y_str(" is a routine: a call needs ()", 30));
}
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2210))).f_line, ((*(yR95 *)rt_nil_check(F.p2210))).f_name, y_str(" is not a value", 15));
(*F.p2212_o) = F.p2212;
(*F.p2213_o) = F.p2213;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2218_IndexExpr(void * a_p2219, rt_int * a_p2220, void * * a_p2221) {
struct yf2222 F;
memset((void *)&F, 0, sizeof F);
F.p2219 = a_p2219;
F.p2220_o = a_p2220;
F.p2221_o = a_p2221;
yr2192_Expr(((*(yR95 *)rt_nil_check(F.p2219))).f_a, ((void *)0), &F.v5249, &F.v5255);
if ((!yr1741_IsArrayLike(F.v5255))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2219))).f_line, y_str("[] of something that is not an array", 36));
}
F.v5263 = yr1260_Count(((*(yR95 *)rt_nil_check(F.p2219))).f_b);
if ((!(F.v5263 == ((*(yR100 *)rt_nil_check(F.v5255))).f_nidx))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2219))).f_line, y_str("the number of subscripts is not the number of dimensions", 56));
}
F.p2221 = ((*(yR100 *)rt_nil_check(F.v5255))).f_elem;
F.v5265 = (((((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2219))).f_a))).f_kind == v747)) || ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2219))).f_a))).f_kind == v753))) || ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2219))).f_a))).f_kind == v756))) || ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2219))).f_a))).f_kind == v759)));
if (F.v5265) {
F.v5253 = F.v5249;
} else {
F.v5253 = yr1146_Fresh(y_str("ya", 2));
}
yr986_SB();
if ((!F.v5265)) {
yr997_SA(y_str("(*({ yarr ", 10));
yr1004_ST(F.v5253);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.v5249);
yr997_SA(y_str("; &", 3));
}
yr997_SA(y_str("((", 2));
yr1004_ST(yr1765_CType(F.p2221));
yr997_SA(y_str(" *)(", 4));
yr1004_ST(F.v5253);
yr997_SA(y_str(").p)[y_ix", 9));
yr1010_SI(F.v5263);
yr997_SA(y_str("(", 1));
yr1004_ST(F.v5253);
F.p2220 = yr1016_SE();
F.v5261 = ((*(yR95 *)rt_nil_check(F.p2219))).f_b;
F.v5259 = ((*(yR100 *)rt_nil_check(F.v5255))).f_idx;
while ((!(F.v5261 == ((void *)0)))) {
yr2192_Expr(F.v5261, F.v5259, &F.v5251, &F.v5257);
if ((((!(F.v5259 == ((void *)0)))) && ((((*(yR100 *)rt_nil_check(F.v5255))).f_kind == v792)))) {
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.v5261))).f_line, F.v5259, F.v5257);
} else if ((!((((((*(yR100 *)rt_nil_check(F.v5257))).f_kind == v774)) || yr1729_IsDiscrete(F.v5257))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v5261))).f_line, y_str("a subscript is an integer or scalar value", 41));
}
yr986_SB();
yr1004_ST(F.p2220);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v5251);
F.p2220 = yr1016_SE();
if ((!(F.v5259 == ((void *)0)))) {
F.v5259 = ((*(yR100 *)rt_nil_check(F.v5259))).f_link;
}
F.v5261 = ((*(yR95 *)rt_nil_check(F.v5261))).f_next;
}
yr986_SB();
yr1004_ST(F.p2220);
yr997_SA(y_str(")]", 2));
if ((!F.v5265)) {
yr997_SA(y_str("; }))", 5));
}
F.p2220 = yr1016_SE();
(*F.p2220_o) = F.p2220;
(*F.p2221_o) = F.p2221;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2226_NegExpr(void * a_p2227, rt_int a_p2228, void * a_p2229, rt_int * a_p2230, void * * a_p2231) {
struct yf2232 F;
memset((void *)&F, 0, sizeof F);
F.p2227 = a_p2227;
F.p2228 = a_p2228;
F.p2229 = a_p2229;
F.p2230_o = a_p2230;
F.p2231_o = a_p2231;
yr986_SB();
if ((((*(yR100 *)rt_nil_check(F.p2229))).f_kind == v774)) {
F.p2231 = yr1723_CopyRep(F.p2229);
((*(yR100 *)rt_nil_check(F.p2231))).f_lo = INT64_C(0);
((*(yR100 *)rt_nil_check(F.p2231))).f_hasm = 0;
yr997_SA(y_str("rt_neg(", 7));
yr1004_ST(F.p2228);
yr997_SA(y_str(")", 1));
} else if ((((((*(yR100 *)rt_nil_check(F.p2229))).f_kind == v780)) || ((((*(yR100 *)rt_nil_check(F.p2229))).f_kind == v777)))) {
F.p2231 = yr1723_CopyRep(F.p2229);
((*(yR100 *)rt_nil_check(F.p2231))).f_lo = INT64_C(0);
yr997_SA(y_str("(-", 2));
yr1004_ST(F.p2228);
yr997_SA(y_str(")", 1));
} else if ((((*(yR100 *)rt_nil_check(F.p2229))).f_kind == v804)) {
F.p2231 = F.p2229;
yr997_SA(y_str("y_set_compl(", 12));
yr1004_ST(F.p2228);
yr997_SA(y_str(")", 1));
} else {
v897 = 0;
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2227))).f_line, y_str("- of something that is not a number or a set", 44));
}
F.p2230 = yr1016_SE();
(*F.p2230_o) = F.p2230;
(*F.p2231_o) = F.p2231;
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2236_Unbounded(void * a_p2237) {
struct yf2238 F;
memset((void *)&F, 0, sizeof F);
F.p2237 = a_p2237;
F.v5300 = yr1723_CopyRep(F.p2237);
((*(yR100 *)rt_nil_check(F.v5300))).f_lo = INT64_C(0);
((*(yR100 *)rt_nil_check(F.v5300))).f_hi = INT64_C(0);
((*(yR100 *)rt_nil_check(F.v5300))).f_hasm = 0;
{ void * rv5304 = F.v5300;
return rv5304; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2242_Call2(yarr a_p2244, rt_int a_p2245, rt_int a_p2246) {
struct yf2247 F;
memset((void *)&F, 0, sizeof F);
F.p2244 = a_p2244;
F.p2245 = a_p2245;
F.p2246 = a_p2246;
yr986_SB();
yr997_SA(F.p2244);
yr997_SA(y_str("(", 1));
yr1004_ST(F.p2245);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.p2246);
yr997_SA(y_str(")", 1));
{ rt_int rv5312 = yr1016_SE();
return rv5312; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2251_Infix(rt_int a_p2252, yarr a_p2254, rt_int a_p2255) {
struct yf2256 F;
memset((void *)&F, 0, sizeof F);
F.p2252 = a_p2252;
F.p2254 = a_p2254;
F.p2255 = a_p2255;
yr986_SB();
yr997_SA(y_str("(", 1));
yr1004_ST(F.p2252);
yr997_SA(y_str(" ", 1));
yr997_SA(F.p2254);
yr997_SA(y_str(" ", 1));
yr1004_ST(F.p2255);
yr997_SA(y_str(")", 1));
{ rt_int rv5321 = yr1016_SE();
return rv5321; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2260_EqCode(rt_int a_p2261, void * a_p2262, rt_int a_p2263, void * a_p2264) {
struct yf2265 F;
memset((void *)&F, 0, sizeof F);
F.p2261 = a_p2261;
F.p2262 = a_p2262;
F.p2263 = a_p2263;
F.p2264 = a_p2264;
F.v5332 = F.p2262;
if ((((*(yR100 *)rt_nil_check(F.p2262))).f_kind == v816)) {
F.v5332 = F.p2264;
}
if ((((((((*(yR100 *)rt_nil_check(F.v5332))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.v5332))).f_kind == v795))) || ((((*(yR100 *)rt_nil_check(F.v5332))).f_kind == v813))) || ((((*(yR100 *)rt_nil_check(F.v5332))).f_kind == v816)))) {
F.v5328 = yr1146_Fresh(y_str("e", 1));
F.v5330 = yr1146_Fresh(y_str("e", 1));
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(yr1765_CType(F.v5332));
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v5328);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.p2261);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v5330);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.p2263);
yr997_SA(y_str("; y_eq(", 7));
if ((((((*(yR100 *)rt_nil_check(F.v5332))).f_kind == v813)) || ((((*(yR100 *)rt_nil_check(F.v5332))).f_kind == v816)))) {
yr997_SA(y_str("y_desc_vector(", 14));
yr1004_ST(yr1771_DescOf(((*(yR100 *)rt_nil_check(F.v5332))).f_elem));
yr997_SA(y_str(")", 1));
} else {
yr1004_ST(yr1771_DescOf(F.v5332));
}
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v5328);
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v5330);
yr997_SA(y_str("); })", 5));
{ rt_int rv5346 = yr1016_SE();
return rv5346; }
}
if ((((*(yR100 *)rt_nil_check(F.v5332))).f_kind == v804)) {
{ rt_int rv5348 = yr2242_Call2(y_str("y_set_eq", 8), F.p2261, F.p2263);
return rv5348; }
}
{ rt_int rv5350 = yr2251_Infix(F.p2261, y_str("==", 2), F.p2263);
return rv5350; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2269_IsOrdered(void * a_p2270) {
struct yf2271 F;
memset((void *)&F, 0, sizeof F);
F.p2270 = a_p2270;
if ((((((((*(yR100 *)rt_nil_check(F.p2270))).f_kind == v774)) || ((((*(yR100 *)rt_nil_check(F.p2270))).f_kind == v780))) || ((((*(yR100 *)rt_nil_check(F.p2270))).f_kind == v777))) || ((((*(yR100 *)rt_nil_check(F.p2270))).f_kind == v789)))) {
{ rt_int rv5354 = 1;
return rv5354; }
}
{ rt_int rv5355 = (((((*(yR100 *)rt_nil_check(F.p2270))).f_kind == v786)) && ((*(yR100 *)rt_nil_check(F.p2270))).f_ordered);
return rv5355; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2275_BinExpr(void * a_p2276, void * a_p2277, rt_int * a_p2278, void * * a_p2279) {
struct yf2280 F;
memset((void *)&F, 0, sizeof F);
F.p2276 = a_p2276;
F.p2277 = a_p2277;
F.p2278_o = a_p2278;
F.p2279_o = a_p2279;
F.v5362 = ((*(yR95 *)rt_nil_check(F.p2276))).f_name;
if (yr2374_UserOp(F.p2276, F.v5362, ((*(yR95 *)rt_nil_check(F.p2276))).f_a, ((*(yR95 *)rt_nil_check(F.p2276))).f_b, &F.p2278, &F.p2279)) {
(*F.p2278_o) = F.p2278;
(*F.p2279_o) = F.p2279;
return;
}
if ((((F.v5362 == v207)) || ((F.v5362 == v369)))) {
yr2192_Expr(((*(yR95 *)rt_nil_check(F.p2276))).f_a, v1694, &F.v5364, &F.v5370);
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.p2276))).f_line, v1694, F.v5370);
yr2192_Expr(((*(yR95 *)rt_nil_check(F.p2276))).f_b, v1694, &F.v5366, &F.v5372);
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.p2276))).f_line, v1694, F.v5372);
F.p2279 = v1694;
if ((F.v5362 == v207)) {
F.p2278 = yr2251_Infix(F.v5364, y_str("&&", 2), F.v5366);
} else {
F.p2278 = yr2251_Infix(F.v5364, y_str("||", 2), F.v5366);
}
(*F.p2278_o) = F.p2278;
(*F.p2279_o) = F.p2279;
return;
}
if ((F.v5362 == v330)) {
yr2192_Expr(((*(yR95 *)rt_nil_check(F.p2276))).f_b, ((void *)0), &F.v5366, &F.v5372);
if ((!(((*(yR100 *)rt_nil_check(F.v5372))).f_kind == v804))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2276))).f_line, y_str("IN needs a set on its right", 27));
}
yr2192_Expr(((*(yR95 *)rt_nil_check(F.p2276))).f_a, ((*(yR100 *)rt_nil_check(F.v5372))).f_elem, &F.v5364, &F.v5370);
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.p2276))).f_line, ((*(yR100 *)rt_nil_check(F.v5372))).f_elem, F.v5370);
F.p2279 = v1694;
F.p2278 = yr2242_Call2(y_str("y_set_in", 8), F.v5364, F.v5366);
(*F.p2278_o) = F.p2278;
(*F.p2279_o) = F.p2279;
return;
}
F.v5374 = ((void *)0);
if (((((((((!(F.p2277 == ((void *)0)))) && ((!(F.v5362 == v555)))) && ((!(F.v5362 == v540)))) && ((!(F.v5362 == v558)))) && ((!(F.v5362 == v510)))) && ((!(F.v5362 == v561)))) && ((!(F.v5362 == v513))))) {
F.v5374 = F.p2277;
}
yr2192_Expr(((*(yR95 *)rt_nil_check(F.p2276))).f_a, F.v5374, &F.v5364, &F.v5370);
yr2192_Expr(((*(yR95 *)rt_nil_check(F.p2276))).f_b, F.v5370, &F.v5366, &F.v5372);
if ((((F.v5362 == v555)) || ((F.v5362 == v540)))) {
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.p2276))).f_line, F.v5370, F.v5372);
if (((((((*(yR100 *)rt_nil_check(F.v5370))).f_kind == v807)) || ((((*(yR100 *)rt_nil_check(F.v5370))).f_kind == v801))) || ((((*(yR100 *)rt_nil_check(F.v5370))).f_kind == v810)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2276))).f_line, y_str("= and # are not defined for signals, files and semaphores", 57));
}
if ((((*(yR100 *)rt_nil_check(F.v5370))).f_opaque && (((rt_div(((*(yR100 *)rt_nil_check(F.v5370))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2276))).f_line, ((*(yR100 *)rt_nil_check(F.v5370))).f_tname, y_str(" is opaque here: = is not exported (X.B.3)", 42));
}
F.p2279 = v1694;
F.p2278 = yr2260_EqCode(F.v5364, F.v5370, F.v5366, F.v5372);
if ((F.v5362 == v540)) {
yr986_SB();
yr997_SA(y_str("(!", 2));
yr1004_ST(F.p2278);
yr997_SA(y_str(")", 1));
F.p2278 = yr1016_SE();
}
(*F.p2278_o) = F.p2278;
(*F.p2279_o) = F.p2279;
return;
}
if ((((((F.v5362 == v558)) || ((F.v5362 == v510))) || ((F.v5362 == v561))) || ((F.v5362 == v513)))) {
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.p2276))).f_line, F.v5370, F.v5372);
if ((!yr2269_IsOrdered(F.v5370))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2276))).f_line, y_str("< <= > >= apply to ordered values (VIII.A.1)", 44));
}
F.p2279 = v1694;
if ((F.v5362 == v558)) {
F.p2278 = yr2251_Infix(F.v5364, y_str("<", 1), F.v5366);
} else if ((F.v5362 == v510)) {
F.p2278 = yr2251_Infix(F.v5364, y_str("<=", 2), F.v5366);
} else if ((F.v5362 == v561)) {
F.p2278 = yr2251_Infix(F.v5364, y_str(">", 1), F.v5366);
} else {
F.p2278 = yr2251_Infix(F.v5364, y_str(">=", 2), F.v5366);
}
(*F.p2278_o) = F.p2278;
(*F.p2279_o) = F.p2279;
return;
}
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.p2276))).f_line, F.v5370, F.v5372);
F.v5376 = ((*(yR100 *)rt_nil_check(F.v5370))).f_kind;
if ((((*(yR100 *)rt_nil_check(F.v5370))).f_kind == v816)) {
F.v5376 = ((*(yR100 *)rt_nil_check(F.v5372))).f_kind;
}
if ((F.v5362 == v459)) {
if ((F.v5376 == v783)) {
F.p2279 = v1694;
F.p2278 = yr2251_Infix(F.v5364, y_str("!=", 2), F.v5366);
} else if ((F.v5376 == v804)) {
F.p2279 = F.v5370;
F.p2278 = yr2242_Call2(y_str("y_set_xor", 9), F.v5364, F.v5366);
} else {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2276))).f_line, y_str("XOR applies to BOOLEAN values and sets", 38));
}
(*F.p2278_o) = F.p2278;
(*F.p2279_o) = F.p2279;
return;
}
if ((F.v5376 == v804)) {
F.p2279 = F.v5370;
if ((F.v5362 == v543)) {
F.p2278 = yr2242_Call2(y_str("y_set_union", 11), F.v5364, F.v5366);
} else if ((F.v5362 == v546)) {
F.p2278 = yr2242_Call2(y_str("y_set_diff", 10), F.v5364, F.v5366);
} else if ((F.v5362 == v549)) {
F.p2278 = yr2242_Call2(y_str("y_set_inter", 11), F.v5364, F.v5366);
} else {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2276))).f_line, y_str("this operator does not apply to sets", 36));
}
(*F.p2278_o) = F.p2278;
(*F.p2279_o) = F.p2279;
return;
}
if ((F.v5376 == v774)) {
F.p2279 = yr2236_Unbounded(F.v5370);
if ((F.v5362 == v543)) {
F.p2278 = yr2242_Call2(y_str("rt_add", 6), F.v5364, F.v5366);
} else if ((F.v5362 == v546)) {
F.p2278 = yr2242_Call2(y_str("rt_sub", 6), F.v5364, F.v5366);
} else if ((F.v5362 == v549)) {
F.p2278 = yr2242_Call2(y_str("rt_mul", 6), F.v5364, F.v5366);
} else if ((F.v5362 == v246)) {
F.p2278 = yr2242_Call2(y_str("rt_div", 6), F.v5364, F.v5366);
} else if ((F.v5362 == v348)) {
F.p2278 = yr2242_Call2(y_str("rt_mod", 6), F.v5364, F.v5366);
} else if ((F.v5362 == v552)) {
F.p2279 = v1704;
yr986_SB();
yr997_SA(y_str("rt_fdiv((double)(", 17));
yr1004_ST(F.v5364);
yr997_SA(y_str("), (double)(", 12));
yr1004_ST(F.v5366);
yr997_SA(y_str("))", 2));
F.p2278 = yr1016_SE();
} else {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2276))).f_line, F.v5362, y_str(" is a free operator: no definition of it is visible (VIII.A)", 60));
}
(*F.p2278_o) = F.p2278;
(*F.p2279_o) = F.p2279;
return;
}
if ((((F.v5376 == v780)) || ((F.v5376 == v777)))) {
F.p2279 = yr2236_Unbounded(F.v5370);
if ((F.v5362 == v543)) {
F.p2278 = yr2251_Infix(F.v5364, y_str("+", 1), F.v5366);
} else if ((F.v5362 == v546)) {
F.p2278 = yr2251_Infix(F.v5364, y_str("-", 1), F.v5366);
} else if ((F.v5362 == v549)) {
F.p2278 = yr2251_Infix(F.v5364, y_str("*", 1), F.v5366);
} else if ((F.v5362 == v552)) {
F.p2279 = v1704;
F.p2278 = yr2242_Call2(y_str("rt_fdiv", 7), F.v5364, F.v5366);
} else {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2276))).f_line, F.v5362, y_str(" does not apply to these numbers", 32));
}
(*F.p2278_o) = F.p2278;
(*F.p2279_o) = F.p2279;
return;
}
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2276))).f_line, F.v5362, y_str(" does not apply to these values", 31));
(*F.p2278_o) = F.p2278;
(*F.p2279_o) = F.p2279;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2314_Fits(void * a_p2315, void * a_p2316) {
struct yf2317 F;
memset((void *)&F, 0, sizeof F);
F.p2315 = a_p2315;
F.p2316 = a_p2316;
if ((((*(yR100 *)rt_nil_check(F.p2315))).f_kind == v813)) {
if ((!yr1741_IsArrayLike(F.p2316))) {
{ rt_int rv5419 = 0;
return rv5419; }
}
if ((!(((*(yR100 *)rt_nil_check(F.p2316))).f_nidx == ((*(yR100 *)rt_nil_check(F.p2315))).f_nidx))) {
{ rt_int rv5421 = 0;
return rv5421; }
}
{ rt_int rv5422 = yr1783_SameType(((*(yR100 *)rt_nil_check(F.p2315))).f_elem, ((*(yR100 *)rt_nil_check(F.p2316))).f_elem);
return rv5422; }
}
if ((((*(yR100 *)rt_nil_check(F.p2315))).f_kind == v825)) {
{ rt_int rv5424 = 1;
return rv5424; }
}
{ rt_int rv5425 = yr1783_SameType(F.p2315, F.p2316);
return rv5425; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2321_Choose(void * a_p2322, rt_int a_p2323, rt_int a_p2324) {
struct yf2325 F;
memset((void *)&F, 0, sizeof F);
F.p2322 = a_p2322;
F.p2323 = a_p2323;
F.p2324 = a_p2324;
F.v5431 = F.p2322;
while ((!(F.v5431 == ((void *)0)))) {
if ((((*(yR115 *)rt_nil_check(F.v5431))).f_nparams == F.p2324)) {
F.v5435 = 1;
F.v5433 = ((*(yR115 *)rt_nil_check(F.v5431))).f_params;
F.v5437 = INT64_C(1);
while ((!(F.v5433 == ((void *)0)))) {
if ((!yr2314_Fits(((*(yR110 *)rt_nil_check(F.v5433))).f_rep, ((void * *)(v2300).p)[y_ix1(v2300, rt_add(F.p2323, F.v5437))]))) {
F.v5435 = 0;
}
F.v5437 = rt_range(rt_add(F.v5437, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5433 = ((*(yR110 *)rt_nil_check(F.v5433))).f_next;
}
if (F.v5435) {
{ void * rv5444 = F.v5431;
return rv5444; }
}
}
F.v5431 = ((*(yR115 *)rt_nil_check(F.v5431))).f_alt;
}
{ void * rv5445 = ((void *)0);
return rv5445; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2329_HidesStandard(void * a_p2330) {
struct yf2331 F;
memset((void *)&F, 0, sizeof F);
F.p2330 = a_p2330;
F.v5449 = F.p2330;
while ((!(F.v5449 == ((void *)0)))) {
if ((((!(((*(yR115 *)rt_nil_check(F.v5449))).f_decl == ((void *)0)))) && ((((*(yR95 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v5449))).f_decl))).f_ival == INT64_C(0))))) {
{ rt_int rv5452 = 1;
return rv5452; }
}
F.v5449 = ((*(yR115 *)rt_nil_check(F.v5449))).f_alt;
}
{ rt_int rv5454 = 0;
return rv5454; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2335_CompileArgs(void * a_p2336, void * a_p2337, rt_int * a_p2338, rt_int * a_p2339) {
struct yf2340 F;
memset((void *)&F, 0, sizeof F);
F.p2336 = a_p2336;
F.p2337 = a_p2337;
F.p2338_o = a_p2338;
F.p2339_o = a_p2339;
F.v5461 = F.p2336;
F.v5463 = ((void *)0);
F.p2338 = v2311;
F.p2339 = INT64_C(0);
if ((!(F.p2337 == ((void *)0)))) {
F.v5463 = ((*(yR115 *)rt_nil_check(F.p2337))).f_params;
}
while ((!(F.v5461 == ((void *)0)))) {
if ((v2311 >= INT64_C(4000))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v5461))).f_line, y_str("calls nested too deeply", 23));
}
F.p2339 = rt_range(rt_add(F.p2339, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v2311 = rt_range(rt_add(F.p2338, F.p2339), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5465 = ((void *)0);
if ((!(F.v5463 == ((void *)0)))) {
F.v5465 = ((*(yR110 *)rt_nil_check(F.v5463))).f_rep;
F.v5463 = ((*(yR110 *)rt_nil_check(F.v5463))).f_next;
}
yr2192_Expr(F.v5461, F.v5465, &((rt_int *)(v2291).p)[y_ix1(v2291, rt_add(F.p2338, F.p2339))], &((void * *)(v2300).p)[y_ix1(v2300, rt_add(F.p2338, F.p2339))]);
((void * *)(v2309).p)[y_ix1(v2309, rt_add(F.p2338, F.p2339))] = F.v5461;
F.v5461 = ((*(yR95 *)rt_nil_check(F.v5461))).f_next;
}
(*F.p2338_o) = F.p2338;
(*F.p2339_o) = F.p2339;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2344_CheckUnresolved(void * a_p2345, void * a_p2346, rt_int a_p2347) {
struct yf2348 F;
memset((void *)&F, 0, sizeof F);
F.p2345 = a_p2345;
F.p2346 = a_p2346;
F.p2347 = a_p2347;
if ((((!(((*(yR100 *)rt_nil_check(F.p2345))).f_kind == v813))) || ((!(((*(yR100 *)rt_nil_check(F.p2346))).f_kind == v792))))) {
return;
}
F.v5480 = ((*(yR100 *)rt_nil_check(F.p2346))).f_idx;
while ((!(F.v5480 == ((void *)0)))) {
if ((!(((*(yR100 *)rt_nil_check(F.v5480))).f_kind == v774))) {
yr1124_FailS(F.p2347, y_str("a length-unresolved array formal takes arrays with integer indices only (X.A.3)", 79));
}
F.v5480 = ((*(yR100 *)rt_nil_check(F.v5480))).f_link;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2352_SameAsFormal(void * a_p2353, void * a_p2354) {
struct yf2355 F;
memset((void *)&F, 0, sizeof F);
F.p2353 = a_p2353;
F.p2354 = a_p2354;
if ((((*(yR100 *)rt_nil_check(F.p2353))).f_kind == v825)) {
{ rt_int rv5486 = 1;
return rv5486; }
}
if ((((*(yR100 *)rt_nil_check(F.p2353))).f_kind == v813)) {
if ((!((((((*(yR100 *)rt_nil_check(F.p2354))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.p2354))).f_kind == v813)))))) {
{ rt_int rv5488 = 0;
return rv5488; }
}
{ rt_int rv5489 = yr1825_Identical(((*(yR100 *)rt_nil_check(F.p2353))).f_elem, ((*(yR100 *)rt_nil_check(F.p2354))).f_elem);
return rv5489; }
}
{ rt_int rv5490 = yr1825_Identical(F.p2353, F.p2354);
return rv5490; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2359_CallCode(void * a_p2360, rt_int a_p2361, rt_int a_p2362, rt_int a_p2363) {
struct yf2364 F;
memset((void *)&F, 0, sizeof F);
F.p2360 = a_p2360;
F.p2361 = a_p2361;
F.p2362 = a_p2362;
F.p2363 = a_p2363;
F.v5497 = ((*(yR115 *)rt_nil_check(F.p2360))).f_params;
F.v5499 = rt_range(rt_add(F.p2361, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5503 = 1;
F.v5506 = INT64_C(0);
F.v5509 = INT64_C(0);
F.v5512 = INT64_C(0);
F.v5515 = INT64_C(0);
F.v5518 = INT64_C(0);
if ((!(F.p2362 == ((*(yR115 *)rt_nil_check(F.p2360))).f_nparams))) {
yr1132_FailN(F.p2363, ((*(yR115 *)rt_nil_check(F.p2360))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
yr986_SB();
yr1004_ST(((*(yR115 *)rt_nil_check(F.p2360))).f_cname);
yr997_SA(y_str("(", 1));
if ((((*(yR115 *)rt_nil_check(F.p2360))).f_level > INT64_C(1))) {
yr1004_ST(yr1667_FramePtr(rt_range(rt_sub(((*(yR115 *)rt_nil_check(F.p2360))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v5503 = 0;
}
while ((!(F.v5497 == ((void *)0)))) {
if ((!F.v5503)) {
yr997_SA(y_str(", ", 2));
}
F.v5503 = 0;
if ((!yr2314_Fits(((*(yR110 *)rt_nil_check(F.v5497))).f_rep, ((void * *)(v2300).p)[y_ix1(v2300, F.v5499)]))) {
v897 = 0;
yr1790_TypeClash(((*(yR95 *)rt_nil_check(((void * *)(v2309).p)[y_ix1(v2309, F.v5499)]))).f_line, ((*(yR110 *)rt_nil_check(F.v5497))).f_rep, ((void * *)(v2300).p)[y_ix1(v2300, F.v5499)]);
}
yr2344_CheckUnresolved(((*(yR110 *)rt_nil_check(F.v5497))).f_rep, ((void * *)(v2300).p)[y_ix1(v2300, F.v5499)], ((*(yR95 *)rt_nil_check(((void * *)(v2309).p)[y_ix1(v2309, F.v5499)]))).f_line);
if ((((*(yR110 *)rt_nil_check(F.v5497))).f_cls == v867)) {
yr1004_ST(yr2125_Convert(((rt_int *)(v2291).p)[y_ix1(v2291, F.v5499)], ((*(yR110 *)rt_nil_check(F.v5497))).f_rep, ((void * *)(v2300).p)[y_ix1(v2300, F.v5499)]));
} else {
if ((!yr2153_IsVariable(((void * *)(v2309).p)[y_ix1(v2309, F.v5499)]))) {
v897 = 0;
yr1132_FailN(((*(yR95 *)rt_nil_check(((void * *)(v2309).p)[y_ix1(v2309, F.v5499)]))).f_line, ((*(yR110 *)rt_nil_check(F.v5497))).f_name, y_str(": the actual of a VAR or OUT parameter must be a variable", 57));
}
yr2159_CheckPure(((void * *)(v2309).p)[y_ix1(v2309, F.v5499)]);
if (yr2352_SameAsFormal(((*(yR110 *)rt_nil_check(F.v5497))).f_rep, ((void * *)(v2300).p)[y_ix1(v2300, F.v5499)])) {
yr997_SA(y_str("&", 1));
yr1004_ST(((rt_int *)(v2291).p)[y_ix1(v2291, F.v5499)]);
} else if ((((*(yR110 *)rt_nil_check(F.v5497))).f_cls == v873)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(((void * *)(v2309).p)[y_ix1(v2309, F.v5499)]))).f_line, ((*(yR110 *)rt_nil_check(F.v5497))).f_name, y_str(": a VAR actual has the representation of its formal (VII.G, X.A.2)", 66));
} else {
F.v5512 = yr1146_Fresh(y_str("yo", 2));
F.v5506 = yr2595_Join(F.v5506, yr2595_Join(yr1765_CType(((*(yR110 *)rt_nil_check(F.v5497))).f_rep), yr1021_T(y_str(" ", 1)), F.v5512), yr1021_T(y_str(";", 1)));
if ((((*(yR100 *)rt_nil_check(((*(yR110 *)rt_nil_check(F.v5497))).f_rep))).f_kind == v813)) {
F.v5506 = yr2595_Join(F.v5506, yr2595_Join(yr1021_T(y_str(" ", 1)), F.v5512, yr1021_T(y_str(" = y_like(", 10))), yr2595_Join(((rt_int *)(v2291).p)[y_ix1(v2291, F.v5499)], yr2595_Join(yr1021_T(y_str(", ", 2)), yr2368_Num(((*(yR100 *)rt_nil_check(((void * *)(v2300).p)[y_ix1(v2300, F.v5499)]))).f_nidx), yr1021_T(y_str(", ", 2))), yr2595_Join(yr1771_DescOf(((*(yR100 *)rt_nil_check(((*(yR110 *)rt_nil_check(F.v5497))).f_rep))).f_elem), yr1021_T(y_str(");", 2)), INT64_C(0))));
} else if (yr1753_Deep(((*(yR110 *)rt_nil_check(F.v5497))).f_rep)) {
F.v5506 = yr2595_Join(F.v5506, yr2595_Join(yr1021_T(y_str(" y_init(", 8)), yr1771_DescOf(((*(yR110 *)rt_nil_check(F.v5497))).f_rep), yr1021_T(y_str(", &", 3))), yr2595_Join(F.v5512, yr1021_T(y_str(");", 2)), INT64_C(0)));
}
F.v5509 = yr2595_Join(F.v5509, yr1021_T(y_str(" ", 1)), yr2133_StoreText(((rt_int *)(v2291).p)[y_ix1(v2291, F.v5499)], ((void * *)(v2300).p)[y_ix1(v2300, F.v5499)], F.v5512, ((*(yR110 *)rt_nil_check(F.v5497))).f_rep, ((*(yR95 *)rt_nil_check(((void * *)(v2309).p)[y_ix1(v2309, F.v5499)]))).f_line));
yr997_SA(y_str("&", 1));
yr1004_ST(F.v5512);
}
}
F.v5499 = rt_range(rt_add(F.v5499, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5497 = ((*(yR110 *)rt_nil_check(F.v5497))).f_next;
}
yr997_SA(y_str(")", 1));
v2311 = F.p2361;
F.v5515 = yr1016_SE();
if ((F.v5506 == INT64_C(0))) {
{ rt_int rv5552 = F.v5515;
return rv5552; }
}
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(F.v5506);
if ((((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.p2360))).f_ret))).f_kind == v822)) {
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v5515);
yr997_SA(y_str(";", 1));
yr1004_ST(F.v5509);
yr997_SA(y_str(" })", 3));
} else {
F.v5518 = yr1146_Fresh(y_str("yv", 2));
yr997_SA(y_str(" ", 1));
yr1004_ST(yr1765_CType(((*(yR115 *)rt_nil_check(F.p2360))).f_ret));
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v5518);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.v5515);
yr997_SA(y_str(";", 1));
yr1004_ST(F.v5509);
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v5518);
yr997_SA(y_str("; })", 4));
}
{ rt_int rv5564 = yr1016_SE();
return rv5564; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2368_Num(rt_int a_p2369) {
struct yf2370 F;
memset((void *)&F, 0, sizeof F);
F.p2369 = a_p2369;
yr986_SB();
yr1010_SI(F.p2369);
{ rt_int rv5567 = yr1016_SE();
return rv5567; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2374_UserOp(void * a_p2375, rt_int a_p2376, void * a_p2377, void * a_p2378, rt_int * a_p2379, void * * a_p2380) {
struct yf2381 F;
memset((void *)&F, 0, sizeof F);
F.p2375 = a_p2375;
F.p2376 = a_p2376;
F.p2377 = a_p2377;
F.p2378 = a_p2378;
F.p2379_o = a_p2379;
F.p2380_o = a_p2380;
F.v5576 = yr1621_Find(F.p2376);
if ((F.v5576 == ((void *)0))) {
{ rt_int rv5584 = 0;
(*F.p2379_o) = F.p2379;
(*F.p2380_o) = F.p2380;
return rv5584; }
}
F.v5576 = yr1686_Real(F.v5576);
if ((!(((*(yR115 *)rt_nil_check(F.v5576))).f_kind == v846))) {
{ rt_int rv5586 = 0;
(*F.p2379_o) = F.p2379;
(*F.p2380_o) = F.p2380;
return rv5586; }
}
((*(yR95 *)rt_nil_check(F.p2377))).f_next = F.p2378;
if ((!(F.p2378 == ((void *)0)))) {
((*(yR95 *)rt_nil_check(F.p2378))).f_next = ((void *)0);
}
yr2335_CompileArgs(F.p2377, ((void *)0), &F.v5580, &F.v5582);
F.v5578 = yr2321_Choose(F.v5576, F.v5580, F.v5582);
if ((F.v5578 == ((void *)0))) {
v2311 = F.v5580;
if (yr2329_HidesStandard(F.v5576)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2375))).f_line, F.p2376, y_str(": no definition takes operands of these types", 45));
}
{ rt_int rv5589 = 0;
(*F.p2379_o) = F.p2379;
(*F.p2380_o) = F.p2380;
return rv5589; }
}
yr2385_NoteCall(F.v5578, ((*(yR95 *)rt_nil_check(F.p2375))).f_line);
F.p2379 = yr2359_CallCode(F.v5578, F.v5580, F.v5582, ((*(yR95 *)rt_nil_check(F.p2375))).f_line);
F.p2380 = ((*(yR115 *)rt_nil_check(F.v5578))).f_ret;
{ rt_int rv5591 = 1;
(*F.p2379_o) = F.p2379;
(*F.p2380_o) = F.p2380;
return rv5591; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2385_NoteCall(void * a_p2386, rt_int a_p2387) {
struct yf2388 F;
memset((void *)&F, 0, sizeof F);
F.p2386 = a_p2386;
F.p2387 = a_p2387;
if ((v2513 == ((void *)0))) {
return;
}
F.v5596 = yr1245_NewNode(v639, F.p2387);
((*(yR95 *)rt_nil_check(F.v5596))).f_sym = F.p2386;
((*(yR95 *)rt_nil_check(F.v5596))).f_next = ((*(yR115 *)rt_nil_check(v2513))).f_calls;
((*(yR115 *)rt_nil_check(v2513))).f_calls = F.v5596;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2392_UserAssign(rt_int a_p2393, void * a_p2394, rt_int a_p2395, void * a_p2396, rt_int a_p2397) {
struct yf2398 F;
memset((void *)&F, 0, sizeof F);
F.p2393 = a_p2393;
F.p2394 = a_p2394;
F.p2395 = a_p2395;
F.p2396 = a_p2396;
F.p2397 = a_p2397;
F.v5604 = yr1621_Find(rt_range(v501, INT64_C(0), INT64_C(4000000)));
if ((F.v5604 == ((void *)0))) {
{ rt_int rv5614 = INT64_C(0);
return rv5614; }
}
F.v5604 = yr1686_Real(F.v5604);
if ((!(((*(yR115 *)rt_nil_check(F.v5604))).f_kind == v846))) {
{ rt_int rv5616 = INT64_C(0);
return rv5616; }
}
F.v5606 = F.v5604;
while ((!(F.v5606 == ((void *)0)))) {
if ((((*(yR115 *)rt_nil_check(F.v5606))).f_nparams == INT64_C(2))) {
F.v5608 = ((*(yR115 *)rt_nil_check(F.v5606))).f_params;
F.v5610 = ((*(yR110 *)rt_nil_check(F.v5608))).f_next;
if ((((((!(((*(yR110 *)rt_nil_check(F.v5608))).f_cls == v867))) && ((((*(yR110 *)rt_nil_check(F.v5610))).f_cls == v867))) && yr1783_SameType(((*(yR110 *)rt_nil_check(F.v5608))).f_rep, F.p2394)) && yr1783_SameType(((*(yR110 *)rt_nil_check(F.v5610))).f_rep, F.p2396))) {
if ((v2513 == F.v5606)) {
{ rt_int rv5619 = INT64_C(0);
return rv5619; }
}
yr2385_NoteCall(F.v5606, F.p2397);
yr986_SB();
if (yr1825_Identical(((*(yR110 *)rt_nil_check(F.v5608))).f_rep, F.p2394)) {
yr1004_ST(((*(yR115 *)rt_nil_check(F.v5606))).f_cname);
yr997_SA(y_str("(", 1));
if ((((*(yR115 *)rt_nil_check(F.v5606))).f_level > INT64_C(1))) {
yr1004_ST(yr1667_FramePtr(rt_range(rt_sub(((*(yR115 *)rt_nil_check(F.v5606))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr997_SA(y_str(", ", 2));
}
yr997_SA(y_str("&", 1));
yr1004_ST(F.p2393);
} else {
F.v5612 = yr1146_Fresh(y_str("yo", 2));
yr997_SA(y_str("{ ", 2));
yr1004_ST(yr1765_CType(((*(yR110 *)rt_nil_check(F.v5608))).f_rep));
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v5612);
yr997_SA(y_str(";", 1));
if (yr1753_Deep(((*(yR110 *)rt_nil_check(F.v5608))).f_rep)) {
yr997_SA(y_str(" y_init(", 8));
yr1004_ST(yr1771_DescOf(((*(yR110 *)rt_nil_check(F.v5608))).f_rep));
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v5612);
yr997_SA(y_str(");", 2));
}
yr997_SA(y_str(" ", 1));
yr1004_ST(((*(yR115 *)rt_nil_check(F.v5606))).f_cname);
yr997_SA(y_str("(", 1));
if ((((*(yR115 *)rt_nil_check(F.v5606))).f_level > INT64_C(1))) {
yr1004_ST(yr1667_FramePtr(rt_range(rt_sub(((*(yR115 *)rt_nil_check(F.v5606))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr997_SA(y_str(", ", 2));
}
yr997_SA(y_str("&", 1));
yr1004_ST(F.v5612);
}
yr997_SA(y_str(", ", 2));
yr1004_ST(yr2125_Convert(F.p2395, ((*(yR110 *)rt_nil_check(F.v5610))).f_rep, F.p2396));
yr997_SA(y_str(");", 2));
if ((!yr1825_Identical(((*(yR110 *)rt_nil_check(F.v5608))).f_rep, F.p2394))) {
yr997_SA(y_str(" ", 1));
yr1004_ST(yr2133_StoreText(F.p2393, F.p2394, F.v5612, ((*(yR110 *)rt_nil_check(F.v5608))).f_rep, F.p2397));
yr997_SA(y_str(" }", 2));
}
{ rt_int rv5644 = yr1016_SE();
return rv5644; }
}
}
F.v5606 = ((*(yR115 *)rt_nil_check(F.v5606))).f_alt;
}
{ rt_int rv5646 = INT64_C(0);
return rv5646; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2402_Assign(rt_int a_p2403, void * a_p2404, rt_int a_p2405, void * a_p2406, rt_int a_p2407) {
struct yf2408 F;
memset((void *)&F, 0, sizeof F);
F.p2403 = a_p2403;
F.p2404 = a_p2404;
F.p2405 = a_p2405;
F.p2406 = a_p2406;
F.p2407 = a_p2407;
F.v5654 = yr2392_UserAssign(F.p2403, F.p2404, F.p2405, F.p2406, F.p2407);
if ((!(F.v5654 == INT64_C(0)))) {
yr1092_Emit(F.v5654);
} else {
yr2143_Store(F.p2403, F.p2404, F.p2405, F.p2406, F.p2407);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2412_CallExpr(void * a_p2413, void * a_p2414, rt_int a_p2415, rt_int * a_p2416, void * * a_p2417) {
struct yf2418 F;
memset((void *)&F, 0, sizeof F);
F.p2413 = a_p2413;
F.p2414 = a_p2414;
F.p2415 = a_p2415;
F.p2416_o = a_p2416;
F.p2417_o = a_p2417;
F.v5663 = yr1686_Real(yr1633_Lookup(((*(yR95 *)rt_nil_check(F.p2413))).f_name, ((*(yR95 *)rt_nil_check(F.p2413))).f_line));
if ((((*(yR115 *)rt_nil_check(F.v5663))).f_kind == v861)) {
yr2900_StdCall(((*(yR115 *)rt_nil_check(F.v5663))).f_mval, F.p2413, F.p2415, &F.p2416, &F.p2417);
(*F.p2416_o) = F.p2416;
(*F.p2417_o) = F.p2417;
return;
}
if ((((((*(yR115 *)rt_nil_check(F.v5663))).f_kind == v837)) || ((((*(yR115 *)rt_nil_check(F.v5663))).f_kind == v840)))) {
if (F.p2415) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2413))).f_line, y_str("a value is not a statement", 26));
}
yr2422_Denote(((*(yR115 *)rt_nil_check(F.v5663))).f_rep, F.p2413, &F.p2416, &F.p2417);
(*F.p2416_o) = F.p2416;
(*F.p2417_o) = F.p2417;
return;
}
if ((!(((*(yR115 *)rt_nil_check(F.v5663))).f_kind == v846))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2413))).f_line, ((*(yR95 *)rt_nil_check(F.p2413))).f_name, y_str(" is not a routine", 17));
}
if ((((*(yR115 *)rt_nil_check(F.v5663))).f_alt == ((void *)0))) {
yr2335_CompileArgs(((*(yR95 *)rt_nil_check(F.p2413))).f_a, F.v5663, &F.v5667, &F.v5669);
F.v5665 = F.v5663;
} else {
yr2335_CompileArgs(((*(yR95 *)rt_nil_check(F.p2413))).f_a, ((void *)0), &F.v5667, &F.v5669);
F.v5665 = yr2321_Choose(F.v5663, F.v5667, F.v5669);
if ((F.v5665 == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2413))).f_line, ((*(yR95 *)rt_nil_check(F.p2413))).f_name, y_str(": no definition takes actuals of these types", 44));
}
}
yr2385_NoteCall(F.v5665, ((*(yR95 *)rt_nil_check(F.p2413))).f_line);
F.p2416 = yr2359_CallCode(F.v5665, F.v5667, F.v5669, ((*(yR95 *)rt_nil_check(F.p2413))).f_line);
F.p2417 = ((*(yR115 *)rt_nil_check(F.v5665))).f_ret;
if ((F.p2415 && ((!(((*(yR100 *)rt_nil_check(F.p2417))).f_kind == v822))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2413))).f_line, ((*(yR95 *)rt_nil_check(F.p2413))).f_name, y_str(" returns a value: it is called in an expression (IX.A.2)", 56));
}
if (((!F.p2415) && ((((*(yR100 *)rt_nil_check(F.p2417))).f_kind == v822)))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2413))).f_line, ((*(yR95 *)rt_nil_check(F.p2413))).f_name, y_str(" returns no value", 17));
}
(*F.p2416_o) = F.p2416;
(*F.p2417_o) = F.p2417;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2422_Denote(void * a_p2423, void * a_p2424, rt_int * a_p2425, void * * a_p2426) {
struct yf2427 F;
memset((void *)&F, 0, sizeof F);
F.p2423 = a_p2423;
F.p2424 = a_p2424;
F.p2425_o = a_p2425;
F.p2426_o = a_p2426;
F.v5681 = ((*(yR95 *)rt_nil_check(F.p2424))).f_a;
F.v5701 = INT64_C(0);
F.v5708 = 1;
F.p2426 = F.p2423;
if (((*(yR100 *)rt_nil_check(F.p2423))).f_abstract) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2424))).f_line, ((*(yR100 *)rt_nil_check(F.p2423))).f_tname, y_str(" has no representation to denote a value of", 43));
}
if ((((*(yR100 *)rt_nil_check(F.p2423))).f_kind == v795)) {
if (((*(yR100 *)rt_nil_check(F.p2423))).f_opaque) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2424))).f_line, ((*(yR100 *)rt_nil_check(F.p2423))).f_tname, y_str(" is opaque here (X.B.3)", 23));
}
yr986_SB();
yr997_SA(y_str("((", 2));
yr1004_ST(((*(yR100 *)rt_nil_check(F.p2423))).f_cname);
yr997_SA(y_str("){ ", 3));
F.v5687 = yr1016_SE();
F.v5683 = ((*(yR100 *)rt_nil_check(F.p2423))).f_fields;
while ((!(F.v5683 == ((void *)0)))) {
if ((((((*(yR105 *)rt_nil_check(F.v5683))).f_variant == INT64_C(0))) || ((((*(yR105 *)rt_nil_check(F.v5683))).f_variant == F.v5701)))) {
if ((F.v5681 == ((void *)0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2424))).f_line, y_str("too few components in this record value", 39));
}
yr2192_Expr(F.v5681, ((*(yR105 *)rt_nil_check(F.v5683))).f_rep, &F.v5685, &F.v5691);
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.v5681))).f_line, ((*(yR105 *)rt_nil_check(F.v5683))).f_rep, F.v5691);
if ((F.v5683 == ((*(yR100 *)rt_nil_check(F.p2423))).f_selector)) {
yr2094_Manifest(F.v5681, &F.v5699, &F.v5704);
if ((!F.v5699)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.v5681))).f_line, y_str("the case-selection value is a manifest constant", 47));
}
F.v5701 = yr2431_VariantOf(F.p2423, F.v5704, ((*(yR95 *)rt_nil_check(F.v5681))).f_line);
}
yr986_SB();
yr1004_ST(F.v5687);
if ((!F.v5708)) {
yr997_SA(y_str(", ", 2));
}
F.v5708 = 0;
yr997_SA(y_str(".f_", 3));
yr1004_ST(((*(yR105 *)rt_nil_check(F.v5683))).f_name);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2125_Convert(F.v5685, ((*(yR105 *)rt_nil_check(F.v5683))).f_rep, F.v5691));
F.v5687 = yr1016_SE();
F.v5681 = ((*(yR95 *)rt_nil_check(F.v5681))).f_next;
}
F.v5683 = ((*(yR105 *)rt_nil_check(F.v5683))).f_next;
}
if ((!(F.v5681 == ((void *)0)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2424))).f_line, y_str("too many components in this record value", 40));
}
yr986_SB();
yr1004_ST(F.v5687);
yr997_SA(y_str(" })", 3));
F.p2425 = yr1016_SE();
(*F.p2425_o) = F.p2425;
(*F.p2426_o) = F.p2426;
return;
}
if ((((*(yR100 *)rt_nil_check(F.p2423))).f_kind == v792)) {
F.v5693 = yr1260_Count(F.v5681);
F.v5687 = yr1146_Fresh(y_str("da", 2));
if ((F.v5693 == INT64_C(1))) {
yr2192_Expr(F.v5681, ((*(yR100 *)rt_nil_check(F.p2423))).f_elem, &F.v5685, &F.v5691);
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.v5681))).f_line, ((*(yR100 *)rt_nil_check(F.p2423))).f_elem, F.v5691);
F.v5689 = yr1146_Fresh(y_str("dv", 2));
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(yr1765_CType(((*(yR100 *)rt_nil_check(F.p2423))).f_elem));
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v5689);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2125_Convert(F.v5685, ((*(yR100 *)rt_nil_check(F.p2423))).f_elem, F.v5691));
yr997_SA(y_str("; y_fill(", 9));
yr1004_ST(yr1771_DescOf(F.p2423));
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v5689);
yr997_SA(y_str("); })", 5));
F.p2425 = yr1016_SE();
(*F.p2425_o) = F.p2425;
(*F.p2426_o) = F.p2426;
return;
}
yr986_SB();
yr997_SA(y_str("({ yarr ", 8));
yr1004_ST(F.v5687);
yr997_SA(y_str("; y_init(", 9));
yr1004_ST(yr1771_DescOf(F.p2423));
yr997_SA(y_str(", &", 3));
yr1004_ST(F.v5687);
yr997_SA(y_str("); if (y_count(", 15));
yr1004_ST(F.v5687);
yr997_SA(y_str(", ", 2));
yr1010_SI(((*(yR100 *)rt_nil_check(F.p2423))).f_nidx);
yr997_SA(y_str(") != ", 5));
yr1010_SI(F.v5693);
yr997_SA(y_str(") rt_raise_msg(RT_X_RANGE, ", 27));
yr991_SC(34);
yr997_SA(y_str("wrong number of components", 26));
yr991_SC(34);
yr997_SA(y_str(");", 2));
F.p2425 = yr1016_SE();
F.v5697 = INT64_C(0);
while ((!(F.v5681 == ((void *)0)))) {
yr2192_Expr(F.v5681, ((*(yR100 *)rt_nil_check(F.p2423))).f_elem, &F.v5685, &F.v5691);
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.v5681))).f_line, ((*(yR100 *)rt_nil_check(F.p2423))).f_elem, F.v5691);
yr986_SB();
yr1004_ST(F.p2425);
if (yr1753_Deep(((*(yR100 *)rt_nil_check(F.p2423))).f_elem)) {
yr997_SA(y_str(" { ", 3));
yr1004_ST(yr1765_CType(((*(yR100 *)rt_nil_check(F.p2423))).f_elem));
yr997_SA(y_str(" dv = ", 6));
yr1004_ST(F.v5685);
yr997_SA(y_str("; y_copy(", 9));
yr1004_ST(yr1771_DescOf(((*(yR100 *)rt_nil_check(F.p2423))).f_elem));
yr997_SA(y_str(", &((", 5));
yr1004_ST(yr1765_CType(((*(yR100 *)rt_nil_check(F.p2423))).f_elem));
yr997_SA(y_str(" *)", 3));
yr1004_ST(F.v5687);
yr997_SA(y_str(".p)[", 4));
yr1010_SI(F.v5697);
yr997_SA(y_str("], &dv); }", 10));
} else {
yr997_SA(y_str(" ((", 3));
yr1004_ST(yr1765_CType(((*(yR100 *)rt_nil_check(F.p2423))).f_elem));
yr997_SA(y_str(" *)", 3));
yr1004_ST(F.v5687);
yr997_SA(y_str(".p)[", 4));
yr1010_SI(F.v5697);
yr997_SA(y_str("] = ", 4));
yr1004_ST(yr2125_Convert(F.v5685, ((*(yR100 *)rt_nil_check(F.p2423))).f_elem, F.v5691));
yr997_SA(y_str(";", 1));
}
F.p2425 = yr1016_SE();
F.v5697 = rt_range(rt_add(F.v5697, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5681 = ((*(yR95 *)rt_nil_check(F.v5681))).f_next;
}
yr986_SB();
yr1004_ST(F.p2425);
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v5687);
yr997_SA(y_str("; })", 4));
F.p2425 = yr1016_SE();
(*F.p2425_o) = F.p2425;
(*F.p2426_o) = F.p2426;
return;
}
if ((((*(yR100 *)rt_nil_check(F.p2423))).f_kind == v804)) {
yr986_SB();
yr997_SA(y_str("y_set_new(", 10));
yr1004_ST(yr1846_LoText(((*(yR100 *)rt_nil_check(F.p2423))).f_elem));
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1852_HiText(((*(yR100 *)rt_nil_check(F.p2423))).f_elem));
yr997_SA(y_str(")", 1));
F.p2425 = yr1016_SE();
while ((!(F.v5681 == ((void *)0)))) {
yr2192_Expr(F.v5681, ((*(yR100 *)rt_nil_check(F.p2423))).f_elem, &F.v5685, &F.v5691);
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.v5681))).f_line, ((*(yR100 *)rt_nil_check(F.p2423))).f_elem, F.v5691);
F.p2425 = yr2242_Call2(y_str("y_set_add", 9), F.p2425, F.v5685);
F.v5681 = ((*(yR95 *)rt_nil_check(F.v5681))).f_next;
}
(*F.p2425_o) = F.p2425;
(*F.p2426_o) = F.p2426;
return;
}
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2424))).f_line, ((*(yR100 *)rt_nil_check(F.p2423))).f_tname, y_str(" has no denotations of values", 29));
(*F.p2425_o) = F.p2425;
(*F.p2426_o) = F.p2426;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2431_VariantOf(void * a_p2432, rt_int a_p2433, rt_int a_p2434) {
struct yf2435 F;
memset((void *)&F, 0, sizeof F);
F.p2432 = a_p2432;
F.p2433 = a_p2433;
F.p2434 = a_p2434;
F.v5770 = ((*(yR100 *)rt_nil_check(F.p2432))).f_fields;
while ((!(F.v5770 == ((void *)0)))) {
if ((!(((*(yR105 *)rt_nil_check(F.v5770))).f_variant == INT64_C(0)))) {
F.v5772 = ((*(yR105 *)rt_nil_check(F.v5770))).f_labels;
while ((!(F.v5772 == ((void *)0)))) {
yr2094_Manifest(F.v5772, &F.v5774, &F.v5776);
if ((F.v5774 && ((F.v5776 == F.p2433)))) {
{ rt_int rv5778 = ((*(yR105 *)rt_nil_check(F.v5770))).f_variant;
return rv5778; }
}
F.v5772 = ((*(yR95 *)rt_nil_check(F.v5772))).f_next;
}
}
F.v5770 = ((*(yR105 *)rt_nil_check(F.v5770))).f_next;
}
{ rt_int rv5780 = INT64_C(-1);
return rv5780; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2518_Emit2(yarr a_p2520, rt_int a_p2521) {
struct yf2522 F;
memset((void *)&F, 0, sizeof F);
F.p2520 = a_p2520;
F.p2521 = a_p2521;
yr986_SB();
yr997_SA(F.p2520);
yr1004_ST(F.p2521);
F.v5785 = yr1016_SE();
yr1092_Emit(F.v5785);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2526_Emit3(yarr a_p2528, rt_int a_p2529, yarr a_p2531) {
struct yf2532 F;
memset((void *)&F, 0, sizeof F);
F.p2528 = a_p2528;
F.p2529 = a_p2529;
F.p2531 = a_p2531;
yr986_SB();
yr997_SA(F.p2528);
yr1004_ST(F.p2529);
yr997_SA(F.p2531);
F.v5791 = yr1016_SE();
yr1092_Emit(F.v5791);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2536_PopTo(rt_int a_p2537) {
struct yf2538 F;
memset((void *)&F, 0, sizeof F);
F.p2537 = a_p2537;
if ((v2448 > F.p2537)) {
yr2526_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v2446).p)[y_ix1(v2446, rt_add(F.p2537, INT64_C(1)))], y_str(".prev;", 6));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2542_LeaveBlock(void) {
struct yf2543 F;
memset((void *)&F, 0, sizeof F);
if ((v2472 > INT64_C(0))) {
if ((!(((rt_int *)(v2461).p)[y_ix1(v2461, v2472)] == INT64_C(0)))) {
yr2526_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v2461).p)[y_ix1(v2461, v2472)], y_str(".prev;", 6));
}
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2547_RaiseCode(rt_int a_p2548) {
struct yf2549 F;
memset((void *)&F, 0, sizeof F);
F.p2548 = a_p2548;
yr986_SB();
yr997_SA(y_str("rt_raise(rt_exc(", 16));
yr991_SC(34);
yr1004_ST(F.p2548);
yr991_SC(34);
yr997_SA(y_str("));", 3));
{ rt_int rv5809 = yr1016_SE();
return rv5809; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2553_BlockStatements(void * a_p2554) {
struct yf2555 F;
memset((void *)&F, 0, sizeof F);
F.p2554 = a_p2554;
F.v5825 = ((*(yR95 *)rt_nil_check(F.p2554))).f_a;
F.v5827 = INT64_C(0);
while ((!(F.v5825 == ((void *)0)))) {
if ((((((*(yR95 *)rt_nil_check(F.v5825))).f_kind == v615)) && ((F.v5827 == INT64_C(0))))) {
F.v5827 = yr1146_Fresh(y_str("xs", 2));
yr2526_Emit3(y_str("rt_frame *", 10), F.v5827, y_str(" = rt_xtop;", 11));
}
F.v5825 = ((*(yR95 *)rt_nil_check(F.v5825))).f_next;
}
if ((((*(yR95 *)rt_nil_check(F.p2554))).f_b == ((void *)0))) {
v2472 = rt_range(rt_add(v2472, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2461).p)[y_ix1(v2461, v2472)] = INT64_C(0);
((rt_int *)(v2470).p)[y_ix1(v2470, v2472)] = F.v5827;
yr2559_Statements(((*(yR95 *)rt_nil_check(F.p2554))).f_c);
v2472 = rt_range(rt_sub(v2472, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr2627_CheckLabels(((*(yR95 *)rt_nil_check(F.p2554))).f_a);
return;
}
v2515 = 1;
F.v5813 = yr1146_Fresh(y_str("xf", 2));
yr2526_Emit3(y_str("{ rt_frame ", 11), F.v5813, y_str(";", 1));
yr2526_Emit3(y_str("if (RT_TRY(", 11), F.v5813, y_str(")) {", 4));
v2448 = rt_range(rt_add(v2448, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2446).p)[y_ix1(v2446, v2448)] = F.v5813;
v2472 = rt_range(rt_add(v2472, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2461).p)[y_ix1(v2461, v2472)] = F.v5813;
((rt_int *)(v2470).p)[y_ix1(v2470, v2472)] = F.v5827;
yr2559_Statements(((*(yR95 *)rt_nil_check(F.p2554))).f_c);
v2472 = rt_range(rt_sub(v2472, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v2448 = rt_range(rt_sub(v2448, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr2627_CheckLabels(((*(yR95 *)rt_nil_check(F.p2554))).f_a);
yr2526_Emit3(y_str("RT_POP(", 7), F.v5813, y_str(");", 2));
yr1098_EmitS(y_str("} else {", 8));
yr2526_Emit3(y_str("RT_POP(", 7), F.v5813, y_str(");", 2));
F.v5815 = yr1146_Fresh(y_str("xc", 2));
yr2526_Emit3(y_str("int ", 4), F.v5815, y_str(" = rt_xcur;", 11));
v2472 = rt_range(rt_add(v2472, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2461).p)[y_ix1(v2461, v2472)] = INT64_C(0);
((rt_int *)(v2470).p)[y_ix1(v2470, v2472)] = INT64_C(0);
v2484 = rt_range(rt_add(v2484, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2482).p)[y_ix1(v2482, v2484)] = F.v5815;
F.v5823 = 1;
F.v5819 = ((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2554))).f_b))).f_a;
while ((!(F.v5819 == ((void *)0)))) {
yr986_SB();
if (F.v5823) {
yr997_SA(y_str("if (", 4));
} else {
yr997_SA(y_str("} else if (", 11));
}
F.v5823 = 0;
F.v5821 = ((*(yR95 *)rt_nil_check(F.v5819))).f_a;
while ((!(F.v5821 == ((void *)0)))) {
yr1004_ST(F.v5815);
yr997_SA(y_str(" == rt_exc(", 11));
yr991_SC(34);
yr1004_ST(((*(yR95 *)rt_nil_check(F.v5821))).f_name);
yr991_SC(34);
yr997_SA(y_str(")", 1));
if ((!(((*(yR95 *)rt_nil_check(F.v5821))).f_next == ((void *)0)))) {
yr997_SA(y_str(" || ", 4));
}
F.v5821 = ((*(yR95 *)rt_nil_check(F.v5821))).f_next;
}
yr997_SA(y_str(") {", 3));
F.v5817 = yr1016_SE();
yr1092_Emit(F.v5817);
yr2559_Statements(((*(yR95 *)rt_nil_check(F.v5819))).f_b);
F.v5819 = ((*(yR95 *)rt_nil_check(F.v5819))).f_next;
}
if ((!F.v5823)) {
yr1098_EmitS(y_str("} else {", 8));
}
if ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2554))).f_b))).f_flag == INT64_C(1))) {
yr2559_Statements(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2554))).f_b))).f_b);
} else {
yr2526_Emit3(y_str("rt_raise(", 9), F.v5815, y_str(");", 2));
}
if ((!F.v5823)) {
yr1098_EmitS(y_str("}", 1));
}
v2484 = rt_range(rt_sub(v2484, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v2472 = rt_range(rt_sub(v2472, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1098_EmitS(y_str("}}", 2));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2559_Statements(void * a_p2560) {
struct yf2561 F;
memset((void *)&F, 0, sizeof F);
F.p2560 = a_p2560;
F.v5889 = F.p2560;
while ((!(F.v5889 == ((void *)0)))) {
yr2583_Statement(F.v5889);
F.v5889 = ((*(yR95 *)rt_nil_check(F.v5889))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2565_Cond(void * a_p2566) {
struct yf2567 F;
memset((void *)&F, 0, sizeof F);
F.p2566 = a_p2566;
yr2192_Expr(F.p2566, v1694, &F.v5893, &F.v5895);
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.p2566))).f_line, v1694, F.v5895);
{ rt_int rv5896 = F.v5893;
return rv5896; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2571_Label(void * a_p2572, void * a_p2573) {
struct yf2574 F;
memset((void *)&F, 0, sizeof F);
F.p2572 = a_p2572;
F.p2573 = a_p2573;
if (((((((*(yR95 *)rt_nil_check(F.p2572))).f_kind == v747)) && ((((*(yR95 *)rt_nil_check(F.p2572))).f_d == ((void *)0)))) && ((((*(yR100 *)rt_nil_check(F.p2573))).f_kind == v786)))) {
F.v5905 = yr1646_FindLit(((*(yR95 *)rt_nil_check(F.p2572))).f_name, F.p2573);
if ((!(F.v5905 == ((void *)0)))) {
{ rt_int rv5910 = ((*(yR115 *)rt_nil_check(yr1686_Real(F.v5905)))).f_mval;
return rv5910; }
}
}
yr2192_Expr(F.p2572, F.p2573, &F.v5909, &F.v5907);
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.p2572))).f_line, F.p2573, F.v5907);
yr2094_Manifest(F.p2572, &F.v5901, &F.v5903);
if ((!F.v5901)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2572))).f_line, y_str("a CASE label is a manifest constant (IX.B.1)", 44));
}
{ rt_int rv5912 = F.v5903;
return rv5912; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2578_CopyOut(void) {
struct yf2579 F;
memset((void *)&F, 0, sizeof F);
if ((v2513 == ((void *)0))) {
return;
}
F.v5915 = ((*(yR115 *)rt_nil_check(v2513))).f_params;
while ((!(F.v5915 == ((void *)0)))) {
if ((((*(yR110 *)rt_nil_check(F.v5915))).f_cls == v870)) {
yr986_SB();
yr997_SA(y_str("(*F.", 4));
yr1004_ST(((*(yR110 *)rt_nil_check(F.v5915))).f_cname);
yr997_SA(y_str("_o)", 3));
F.v5917 = yr1016_SE();
yr2402_Assign(F.v5917, ((*(yR110 *)rt_nil_check(F.v5915))).f_rep, yr1660_Path(v1576, ((*(yR110 *)rt_nil_check(F.v5915))).f_cname), ((*(yR110 *)rt_nil_check(F.v5915))).f_rep, INT64_C(0));
}
F.v5915 = ((*(yR110 *)rt_nil_check(F.v5915))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2583_Statement(void * a_p2584) {
struct yf2585 F;
memset((void *)&F, 0, sizeof F);
F.p2584 = a_p2584;
F.v5924 = ((*(yR95 *)rt_nil_check(F.p2584))).f_kind;
v960 = ((*(yR95 *)rt_nil_check(F.p2584))).f_line;
if ((!(((*(yR95 *)rt_nil_check(F.p2584))).f_text == INT64_C(0)))) {
yr2615_PlaceLabel(F.p2584);
}
if ((F.v5924 == v684)) {
yr2165_LValue(((*(yR95 *)rt_nil_check(F.p2584))).f_a, &F.v5926, &F.v5938);
yr2159_CheckPure(((*(yR95 *)rt_nil_check(F.p2584))).f_a);
if ((((((*(yR100 *)rt_nil_check(F.v5938))).f_kind == v807)) || yr1759_HoldsSignal(F.v5938))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2584))).f_line, y_str("assignment is not defined for signals (VI.A.1.d)", 48));
}
if ((((((*(yR100 *)rt_nil_check(F.v5938))).f_kind == v801)) || ((((*(yR100 *)rt_nil_check(F.v5938))).f_kind == v810)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2584))).f_line, y_str("assignment is not defined for files and semaphores (VII.B)", 58));
}
yr2192_Expr(((*(yR95 *)rt_nil_check(F.p2584))).f_b, F.v5938, &F.v5928, &F.v5940);
F.v5930 = yr2392_UserAssign(F.v5926, F.v5938, F.v5928, F.v5940, ((*(yR95 *)rt_nil_check(F.p2584))).f_line);
if ((!(F.v5930 == INT64_C(0)))) {
yr1092_Emit(F.v5930);
} else {
if ((((*(yR100 *)rt_nil_check(F.v5938))).f_opaque && (((rt_mod(((*(yR100 *)rt_nil_check(F.v5938))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2584))).f_line, ((*(yR100 *)rt_nil_check(F.v5938))).f_tname, y_str(" is opaque here: := is not exported (X.B.3)", 43));
}
yr2143_Store(F.v5926, F.v5938, F.v5928, F.v5940, ((*(yR95 *)rt_nil_check(F.p2584))).f_line);
}
} else if ((F.v5924 == v687)) {
F.v5954 = yr1621_Find(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2584))).f_a))).f_name);
if ((!(F.v5954 == ((void *)0)))) {
F.v5954 = yr1686_Real(F.v5954);
}
if ((((!(F.v5954 == ((void *)0)))) && ((((*(yR115 *)rt_nil_check(F.v5954))).f_kind == v855)))) {
yr2792_Activate(((*(yR95 *)rt_nil_check(F.p2584))).f_a, F.v5954);
} else {
yr2412_CallExpr(((*(yR95 *)rt_nil_check(F.p2584))).f_a, ((void *)0), 1, &F.v5926, &F.v5938);
yr2518_Emit2(y_str("", 0), F.v5926);
yr986_SB();
yr1004_ST(F.v5926);
yr997_SA(y_str(";", 1));
F.v5930 = yr1016_SE();
((*(yR125 *)rt_nil_check((v956).f_tail))).f_t = F.v5930;
}
} else if ((F.v5924 == v708)) {
F.v5946 = 1;
F.v5942 = ((*(yR95 *)rt_nil_check(F.p2584))).f_a;
while ((!(F.v5942 == ((void *)0)))) {
F.v5926 = yr2565_Cond(((*(yR95 *)rt_nil_check(F.v5942))).f_a);
if (F.v5946) {
yr2526_Emit3(y_str("if (", 4), F.v5926, y_str(") {", 3));
} else {
yr2526_Emit3(y_str("} else if (", 11), F.v5926, y_str(") {", 3));
}
F.v5946 = 0;
yr2559_Statements(((*(yR95 *)rt_nil_check(F.v5942))).f_b);
F.v5942 = ((*(yR95 *)rt_nil_check(F.v5942))).f_next;
}
if ((((*(yR95 *)rt_nil_check(F.p2584))).f_flag == INT64_C(1))) {
yr1098_EmitS(y_str("} else {", 8));
yr2559_Statements(((*(yR95 *)rt_nil_check(F.p2584))).f_b);
}
yr1098_EmitS(y_str("}", 1));
} else if ((F.v5924 == v714)) {
F.v5926 = yr2565_Cond(((*(yR95 *)rt_nil_check(F.p2584))).f_a);
yr2526_Emit3(y_str("while (", 7), F.v5926, y_str(") {", 3));
yr2559_Statements(((*(yR95 *)rt_nil_check(F.p2584))).f_b);
yr1098_EmitS(y_str("}", 1));
} else if ((F.v5924 == v720)) {
F.v5932 = yr1146_Fresh(y_str("yl_", 3));
v2507 = rt_range(rt_add(v2507, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2494).p)[y_ix1(v2494, v2507)] = ((*(yR95 *)rt_nil_check(F.p2584))).f_name;
((rt_int *)(v2496).p)[y_ix1(v2496, v2507)] = F.v5932;
((rt_int *)(v2505).p)[y_ix1(v2505, v2507)] = v2448;
yr1098_EmitS(y_str("for (;;) {", 10));
yr2559_Statements(((*(yR95 *)rt_nil_check(F.p2584))).f_b);
yr1098_EmitS(y_str("}", 1));
yr2526_Emit3(y_str("", 0), F.v5932, y_str(": ;", 3));
v2507 = rt_range(rt_sub(v2507, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v5924 == v696)) {
F.v5948 = 0;
F.v5950 = v2507;
while ((((F.v5950 > v2510)) && (!F.v5948))) {
if ((((rt_int *)(v2494).p)[y_ix1(v2494, F.v5950)] == ((*(yR95 *)rt_nil_check(F.p2584))).f_name)) {
F.v5948 = 1;
yr2536_PopTo(((rt_int *)(v2505).p)[y_ix1(v2505, F.v5950)]);
yr2526_Emit3(y_str("goto ", 5), ((rt_int *)(v2496).p)[y_ix1(v2496, F.v5950)], y_str(";", 1));
}
F.v5950 = rt_range(rt_sub(F.v5950, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((!F.v5948)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2584))).f_line, ((*(yR95 *)rt_nil_check(F.p2584))).f_name, y_str(": EXIT names no LOOP around it here (IX.A.5)", 44));
}
} else if ((F.v5924 == v717)) {
yr2589_ForStatement(F.p2584);
} else if ((F.v5924 == v711)) {
yr2192_Expr(((*(yR95 *)rt_nil_check(F.p2584))).f_a, ((void *)0), &F.v5926, &F.v5938);
if ((!yr1729_IsDiscrete(F.v5938))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2584))).f_line, y_str("SELECT on a value that is not integer or scalar", 47));
}
yr2526_Emit3(y_str("switch (", 8), F.v5926, y_str(") {", 3));
F.v5942 = ((*(yR95 *)rt_nil_check(F.p2584))).f_b;
while ((!(F.v5942 == ((void *)0)))) {
F.v5944 = ((*(yR95 *)rt_nil_check(F.v5942))).f_a;
while ((!(F.v5944 == ((void *)0)))) {
F.v5952 = yr2571_Label(F.v5944, F.v5938);
yr986_SB();
yr997_SA(y_str("case ", 5));
yr1010_SI(F.v5952);
yr997_SA(y_str(":", 1));
F.v5930 = yr1016_SE();
yr1092_Emit(F.v5930);
F.v5944 = ((*(yR95 *)rt_nil_check(F.v5944))).f_next;
}
yr1098_EmitS(y_str("{", 1));
yr2559_Statements(((*(yR95 *)rt_nil_check(F.v5942))).f_b);
yr1098_EmitS(y_str("} break;", 8));
F.v5942 = ((*(yR95 *)rt_nil_check(F.v5942))).f_next;
}
yr1098_EmitS(y_str("default: {", 10));
if ((((*(yR95 *)rt_nil_check(F.p2584))).f_flag == INT64_C(1))) {
yr2559_Statements(((*(yR95 *)rt_nil_check(F.p2584))).f_c);
}
yr1098_EmitS(y_str("} break;", 8));
yr1098_EmitS(y_str("}", 1));
} else if ((F.v5924 == v699)) {
yr2603_ReturnStatement(F.p2584);
} else if ((F.v5924 == v705)) {
if ((((*(yR95 *)rt_nil_check(F.p2584))).f_name == INT64_C(0))) {
if ((v2484 == INT64_C(0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2584))).f_line, y_str("PROPAGATE_EXCEPTION without a name is used in a handler (IX.A.8)", 64));
}
yr2526_Emit3(y_str("rt_raise(", 9), ((rt_int *)(v2482).p)[y_ix1(v2482, v2484)], y_str(");", 2));
} else {
yr2542_LeaveBlock();
yr1092_Emit(yr2547_RaiseCode(((*(yR95 *)rt_nil_check(F.p2584))).f_name));
}
} else if ((F.v5924 == v690)) {
F.v5926 = yr2565_Cond(((*(yR95 *)rt_nil_check(F.p2584))).f_a);
yr2526_Emit3(y_str("if (!(", 6), F.v5926, y_str(")) {", 4));
yr2542_LeaveBlock();
yr1098_EmitS(y_str("rt_raise(RT_X_ASSERT); }", 24));
} else if ((F.v5924 == v723)) {
yr2609_BeginStatement(F.p2584);
} else if ((F.v5924 == v702)) {
yr2816_TerminateStatement(F.p2584);
} else if ((F.v5924 == v693)) {
yr2621_GotoStatement(F.p2584);
} else {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2584))).f_line, y_str("not a statement", 15));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2589_ForStatement(void * a_p2590) {
struct yf2591 F;
memset((void *)&F, 0, sizeof F);
F.p2590 = a_p2590;
F.v6017 = yr1885_MakeRep(((*(yR95 *)rt_nil_check(F.p2590))).f_a, INT64_C(0), 0);
if ((!yr1729_IsDiscrete(F.v6017))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2590))).f_line, y_str("FOR goes over an integer or scalar representation", 49));
}
yr1806_CheckRepresented(F.v6017, ((*(yR95 *)rt_nil_check(F.p2590))).f_line);
yr1604_OpenScope(0);
F.v6025 = yr1597_NewSym(v834, ((*(yR95 *)rt_nil_check(F.p2590))).f_name);
((*(yR115 *)rt_nil_check(F.v6025))).f_rep = F.v6017;
((*(yR115 *)rt_nil_check(F.v6025))).f_level = v1576;
((*(yR115 *)rt_nil_check(F.v6025))).f_cname = yr1146_Fresh(y_str("c_", 2));
yr1673_DeclStorage(yr1021_T(y_str("rt_int", 6)), ((*(yR115 *)rt_nil_check(F.v6025))).f_cname);
yr1653_Define(F.v6025, ((*(yR95 *)rt_nil_check(F.p2590))).f_line);
F.v6019 = yr1146_Fresh(y_str("i", 1));
F.v6021 = yr1146_Fresh(y_str("hi", 2));
yr986_SB();
yr997_SA(y_str("{ rt_int ", 9));
yr1004_ST(F.v6021);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr1852_HiText(F.v6017));
yr997_SA(y_str(";", 1));
F.v6023 = yr1016_SE();
yr1092_Emit(F.v6023);
yr986_SB();
yr997_SA(y_str("for (rt_int ", 12));
yr1004_ST(F.v6019);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr1846_LoText(F.v6017));
yr997_SA(y_str("; ", 2));
yr1004_ST(F.v6019);
yr997_SA(y_str(" <= ", 4));
yr1004_ST(F.v6021);
yr997_SA(y_str("; ", 2));
yr1004_ST(F.v6019);
yr997_SA(y_str("++) { ", 6));
yr1004_ST(yr1680_SymPath(F.v6025));
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.v6019);
yr997_SA(y_str(";", 1));
F.v6023 = yr1016_SE();
yr1092_Emit(F.v6023);
yr2559_Statements(((*(yR95 *)rt_nil_check(F.p2590))).f_b);
yr2526_Emit3(y_str("if (", 4), F.v6019, y_str(" == ", 4));
((*(yR125 *)rt_nil_check((v956).f_tail))).f_t = yr2595_Join(((*(yR125 *)rt_nil_check((v956).f_tail))).f_t, F.v6021, yr1021_T(y_str(") break;", 8)));
yr1098_EmitS(y_str("}}", 2));
yr1610_CloseScope();
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2595_Join(rt_int a_p2596, rt_int a_p2597, rt_int a_p2598) {
struct yf2599 F;
memset((void *)&F, 0, sizeof F);
F.p2596 = a_p2596;
F.p2597 = a_p2597;
F.p2598 = a_p2598;
yr986_SB();
yr1004_ST(F.p2596);
yr1004_ST(F.p2597);
yr1004_ST(F.p2598);
{ rt_int rv6053 = yr1016_SE();
return rv6053; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2603_ReturnStatement(void * a_p2604) {
struct yf2605 F;
memset((void *)&F, 0, sizeof F);
F.p2604 = a_p2604;
if ((v2513 == ((void *)0))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2604))).f_line, y_str("RETURN outside a routine (IX.A.6)", 33));
}
if ((((*(yR115 *)rt_nil_check(v2513))).f_kind == v855)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2604))).f_line, y_str("a process ends with TERMINATE_PROCESS (IX.A.7)", 46));
}
F.v6065 = ((*(yR115 *)rt_nil_check(v2513))).f_ret;
if ((((*(yR95 *)rt_nil_check(F.p2604))).f_a == ((void *)0))) {
if ((!(((*(yR100 *)rt_nil_check(F.v6065))).f_kind == v822))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2604))).f_line, y_str("RETURN needs a value here (IX.A.6)", 34));
}
yr2578_CopyOut();
yr2811_LeaveMonitor();
yr2536_PopTo(v2451);
yr1098_EmitS(y_str("return;", 7));
return;
}
if ((((*(yR100 *)rt_nil_check(F.v6065))).f_kind == v822)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2604))).f_line, y_str("this routine returns no value (IX.A.6)", 38));
}
yr2192_Expr(((*(yR95 *)rt_nil_check(F.p2604))).f_a, F.v6065, &F.v6057, &F.v6063);
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.p2604))).f_line, F.v6065, F.v6063);
F.v6061 = yr1146_Fresh(y_str("rv", 2));
yr986_SB();
yr997_SA(y_str("{ ", 2));
yr1004_ST(yr1765_CType(F.v6065));
yr997_SA(y_str(" ", 1));
yr1004_ST(F.v6061);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2125_Convert(F.v6057, F.v6065, F.v6063));
yr997_SA(y_str(";", 1));
F.v6059 = yr1016_SE();
yr1092_Emit(F.v6059);
yr2578_CopyOut();
yr2811_LeaveMonitor();
yr2536_PopTo(v2451);
yr2526_Emit3(y_str("return ", 7), F.v6061, y_str("; }", 3));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2609_BeginStatement(void * a_p2610) {
struct yf2611 F;
memset((void *)&F, 0, sizeof F);
F.p2610 = a_p2610;
yr1098_EmitS(y_str("{", 1));
yr1604_OpenScope(0);
yr2699_Declarations(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2610))).f_a))).f_a);
yr2553_BlockStatements(((*(yR95 *)rt_nil_check(F.p2610))).f_a);
yr2787_AwaitProcesses();
yr1610_CloseScope();
yr1098_EmitS(y_str("}", 1));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2615_PlaceLabel(void * a_p2616) {
struct yf2617 F;
memset((void *)&F, 0, sizeof F);
F.p2616 = a_p2616;
F.v6086 = yr1627_FindHere(((*(yR95 *)rt_nil_check(F.p2616))).f_text);
if ((((F.v6086 == ((void *)0))) || ((!(((*(yR115 *)rt_nil_check(F.v6086))).f_kind == v858))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2616))).f_line, ((*(yR95 *)rt_nil_check(F.p2616))).f_text, y_str(" labels a statement but is not declared by LABEL in this block (VII.C)", 70));
}
if (((*(yR115 *)rt_nil_check(F.v6086))).f_hasmv) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2616))).f_line, ((*(yR95 *)rt_nil_check(F.p2616))).f_text, y_str(" labels two statements", 22));
}
((*(yR115 *)rt_nil_check(F.v6086))).f_hasmv = 1;
yr2526_Emit3(y_str("", 0), ((*(yR115 *)rt_nil_check(F.v6086))).f_cname, y_str(": ;", 3));
if ((!(((rt_int *)(v2461).p)[y_ix1(v2461, v2472)] == INT64_C(0)))) {
yr2526_Emit3(y_str("rt_xtop = &", 11), ((rt_int *)(v2461).p)[y_ix1(v2461, v2472)], y_str(";", 1));
} else if ((!(((rt_int *)(v2470).p)[y_ix1(v2470, v2472)] == INT64_C(0)))) {
yr2526_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v2470).p)[y_ix1(v2470, v2472)], y_str(";", 1));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2621_GotoStatement(void * a_p2622) {
struct yf2623 F;
memset((void *)&F, 0, sizeof F);
F.p2622 = a_p2622;
F.v6101 = yr1633_Lookup(((*(yR95 *)rt_nil_check(F.p2622))).f_name, ((*(yR95 *)rt_nil_check(F.p2622))).f_line);
if ((!(((*(yR115 *)rt_nil_check(F.v6101))).f_kind == v858))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2622))).f_line, ((*(yR95 *)rt_nil_check(F.p2622))).f_name, y_str(" is not a label", 15));
}
if ((!(((*(yR115 *)rt_nil_check(F.v6101))).f_level == v1576))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2622))).f_line, ((*(yR95 *)rt_nil_check(F.p2622))).f_name, y_str(": GOTO does not leave a routine or process (IX.A.4)", 51));
}
((*(yR115 *)rt_nil_check(F.v6101))).f_readonly = 1;
yr2526_Emit3(y_str("goto ", 5), ((*(yR115 *)rt_nil_check(F.v6101))).f_cname, y_str(";", 1));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2627_CheckLabels(void * a_p2628) {
struct yf2629 F;
memset((void *)&F, 0, sizeof F);
F.p2628 = a_p2628;
F.v6110 = F.p2628;
while ((!(F.v6110 == ((void *)0)))) {
if ((((*(yR95 *)rt_nil_check(F.v6110))).f_kind == v615)) {
F.v6112 = ((*(yR95 *)rt_nil_check(F.v6110))).f_a;
while ((!(F.v6112 == ((void *)0)))) {
F.v6114 = yr1627_FindHere(((*(yR95 *)rt_nil_check(F.v6112))).f_name);
if ((((((!(F.v6114 == ((void *)0)))) && ((((*(yR115 *)rt_nil_check(F.v6114))).f_kind == v858))) && ((*(yR115 *)rt_nil_check(F.v6114))).f_readonly) && (!((*(yR115 *)rt_nil_check(F.v6114))).f_hasmv))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.v6112))).f_line, ((*(yR95 *)rt_nil_check(F.v6112))).f_name, y_str(" is the target of a GOTO but labels no statement of its block", 61));
}
F.v6112 = ((*(yR95 *)rt_nil_check(F.v6112))).f_next;
}
}
F.v6110 = ((*(yR95 *)rt_nil_check(F.v6110))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2633_RoutineCName(rt_int a_p2634) {
struct yf2635 F;
memset((void *)&F, 0, sizeof F);
F.p2634 = a_p2634;
F.v6119 = yr1141_NewSerial();
F.v6121 = 1;
F.lo6125 = INT64_C(1);
F.hi6126 = ((rt_int *)(v890).p)[y_ix1(v890, F.p2634)];
{ rt_int hi6130 = F.hi6126;
for (rt_int i6129 = F.lo6125; i6129 <= hi6130; i6129++) { F.c_6128 = i6129;
if ((!((yr968_IsLetter(yr1063_TChar(F.p2634, rt_range(F.c_6128, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || yr974_IsDigit(yr1063_TChar(F.p2634, rt_range(F.c_6128, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))))) {
F.v6121 = 0;
}
if (i6129 == hi6130) break;
}}
yr986_SB();
yr997_SA(y_str("yr", 2));
yr1010_SI(F.v6119);
if (F.v6121) {
yr997_SA(y_str("_", 1));
yr1004_ST(F.p2634);
}
{ rt_int rv6134 = yr1016_SE();
return rv6134; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2639_FormalRep(void * a_p2640) {
struct yf2641 F;
memset((void *)&F, 0, sizeof F);
F.p2640 = a_p2640;
if ((((*(yR95 *)rt_nil_check(F.p2640))).f_kind == v666)) {
yr2094_Manifest(((*(yR95 *)rt_nil_check(F.p2640))).f_a, &F.v6140, &F.v6142);
if ((((!F.v6140) || ((F.v6142 < INT64_C(1)))) || ((F.v6142 > INT64_C(4))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2640))).f_line, y_str("DIMENSIONS is a manifest constant from 1 to 4", 45));
}
F.v6138 = yr1716_NewRep(v813, yr1021_T(y_str("length-unresolved array", 23)));
((*(yR100 *)rt_nil_check(F.v6138))).f_nidx = F.v6142;
((*(yR100 *)rt_nil_check(F.v6138))).f_elem = yr1885_MakeRep(((*(yR95 *)rt_nil_check(F.p2640))).f_b, INT64_C(0), 0);
yr1806_CheckRepresented(((*(yR100 *)rt_nil_check(F.v6138))).f_elem, ((*(yR95 *)rt_nil_check(F.p2640))).f_line);
((*(yR100 *)rt_nil_check(F.v6138))).f_deep = 1;
{ void * rv6150 = F.v6138;
return rv6150; }
}
if ((((*(yR95 *)rt_nil_check(F.p2640))).f_kind == v669)) {
{ void * rv6152 = yr1716_NewRep(v825, yr1021_T(y_str("SPACE", 5)));
return rv6152; }
}
F.v6138 = yr1885_MakeRep(F.p2640, INT64_C(0), 0);
yr1806_CheckRepresented(F.v6138, ((*(yR95 *)rt_nil_check(F.p2640))).f_line);
{ void * rv6155 = F.v6138;
return rv6155; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2645_ParamCType(void * a_p2646) {
struct yf2647 F;
memset((void *)&F, 0, sizeof F);
F.p2646 = a_p2646;
F.v6159 = yr1765_CType(((*(yR110 *)rt_nil_check(F.p2646))).f_rep);
if ((((*(yR110 *)rt_nil_check(F.p2646))).f_cls == v867)) {
{ rt_int rv6160 = F.v6159;
return rv6160; }
}
yr986_SB();
yr1004_ST(F.v6159);
yr997_SA(y_str(" *", 2));
{ rt_int rv6162 = yr1016_SE();
return rv6162; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2651_RoutineHeader(void * a_p2652, rt_int a_p2653) {
struct yf2654 F;
memset((void *)&F, 0, sizeof F);
F.p2652 = a_p2652;
F.p2653 = a_p2653;
F.v6183 = 1;
F.v6167 = yr1597_NewSym(F.p2653, ((*(yR95 *)rt_nil_check(F.p2652))).f_name);
((*(yR115 *)rt_nil_check(F.v6167))).f_decl = F.p2652;
((*(yR115 *)rt_nil_check(F.v6167))).f_func = (((*(yR95 *)rt_nil_check(F.p2652))).f_flag == INT64_C(1));
((*(yR115 *)rt_nil_check(F.v6167))).f_level = rt_range(rt_add(v1576, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR115 *)rt_nil_check(F.v6167))).f_cname = yr2633_RoutineCName(((*(yR95 *)rt_nil_check(F.p2652))).f_name);
if ((!(((*(yR95 *)rt_nil_check(F.p2652))).f_b == ((void *)0)))) {
((*(yR115 *)rt_nil_check(F.v6167))).f_ret = yr1885_MakeRep(((*(yR95 *)rt_nil_check(F.p2652))).f_b, INT64_C(0), 0);
yr1806_CheckRepresented(((*(yR115 *)rt_nil_check(F.v6167))).f_ret, ((*(yR95 *)rt_nil_check(F.p2652))).f_line);
} else {
((*(yR115 *)rt_nil_check(F.v6167))).f_ret = v1698;
if (((*(yR115 *)rt_nil_check(F.v6167))).f_func) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2652))).f_line, ((*(yR95 *)rt_nil_check(F.p2652))).f_name, y_str(": a FUNCTION has a RETURNS clause (X.A)", 39));
}
}
F.v6177 = ((void *)0);
F.v6171 = ((*(yR95 *)rt_nil_check(F.p2652))).f_a;
while ((!(F.v6171 == ((void *)0)))) {
F.v6179 = yr2639_FormalRep(((*(yR95 *)rt_nil_check(F.v6171))).f_b);
if ((((*(yR115 *)rt_nil_check(F.v6167))).f_func && ((!(((*(yR95 *)rt_nil_check(F.v6171))).f_ival == v867))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.v6171))).f_line, ((*(yR95 *)rt_nil_check(F.p2652))).f_name, y_str(": the parameters of a FUNCTION are CONST (X.A.2)", 48));
}
if ((((F.p2653 == v855)) && ((((*(yR95 *)rt_nil_check(F.v6171))).f_ival == v870)))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.v6171))).f_line, ((*(yR95 *)rt_nil_check(F.p2652))).f_name, y_str(": a process has no OUT parameters", 33));
}
F.v6173 = ((*(yR95 *)rt_nil_check(F.v6171))).f_a;
while ((!(F.v6173 == ((void *)0)))) {
({ F.v6175 = rt_alloc(sizeof(yR110)); });
(*(yR110 *)rt_nil_check(F.v6175)) = ((yR110){ .f_name = ((*(yR95 *)rt_nil_check(F.v6173))).f_name, .f_cls = ((*(yR95 *)rt_nil_check(F.v6171))).f_ival, .f_rep = F.v6179, .f_cname = yr1146_Fresh(y_str("p", 1)), .f_next = ((void *)0) });
if ((F.v6177 == ((void *)0))) {
((*(yR115 *)rt_nil_check(F.v6167))).f_params = F.v6175;
} else {
((*(yR110 *)rt_nil_check(F.v6177))).f_next = F.v6175;
}
F.v6177 = F.v6175;
((*(yR115 *)rt_nil_check(F.v6167))).f_nparams = rt_range(rt_add(((*(yR115 *)rt_nil_check(F.v6167))).f_nparams, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6173 = ((*(yR95 *)rt_nil_check(F.v6173))).f_next;
}
F.v6171 = ((*(yR95 *)rt_nil_check(F.v6171))).f_next;
}
F.v6169 = yr1621_Find(((*(yR95 *)rt_nil_check(F.p2652))).f_name);
if ((!(F.v6169 == ((void *)0)))) {
F.v6169 = yr1686_Real(F.v6169);
}
if (((((!(((*(yR95 *)rt_nil_check(F.p2652))).f_ival == INT64_C(0)))) && ((!(F.v6169 == ((void *)0))))) && ((((*(yR115 *)rt_nil_check(F.v6169))).f_kind == v846)))) {
((*(yR115 *)rt_nil_check(F.v6167))).f_alt = F.v6169;
if ((((((*(yR95 *)rt_nil_check(F.p2652))).f_ival == v309)) && ((!(yr2658_SameSignature(F.v6167, F.v6169) == ((void *)0)))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2652))).f_line, ((*(yR95 *)rt_nil_check(F.p2652))).f_name, y_str(" EXTENDS a definition for the same parameter types: use REPLACES", 64));
}
if ((((((*(yR95 *)rt_nil_check(F.p2652))).f_ival == v405)) && ((yr2658_SameSignature(F.v6167, F.v6169) == ((void *)0))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2652))).f_line, ((*(yR95 *)rt_nil_check(F.p2652))).f_name, y_str(" REPLACES no definition for these parameter types", 49));
}
}
((*(yR95 *)rt_nil_check(F.p2652))).f_sym = F.v6167;
yr1653_Define(F.v6167, ((*(yR95 *)rt_nil_check(F.p2652))).f_line);
((rt_int *)(v1586).p)[y_ix1(v1586, ((*(yR115 *)rt_nil_check(F.v6167))).f_level)] = yr1146_Fresh(y_str("yf", 2));
((*(yR115 *)rt_nil_check(F.v6167))).f_members = yr1597_NewSym(v861, ((rt_int *)(v1586).p)[y_ix1(v1586, ((*(yR115 *)rt_nil_check(F.v6167))).f_level)]);
yr986_SB();
yr997_SA(y_str("struct ", 7));
yr1004_ST(((rt_int *)(v1586).p)[y_ix1(v1586, ((*(yR115 *)rt_nil_check(F.v6167))).f_level)]);
yr997_SA(y_str(";", 1));
F.v6181 = yr1016_SE();
yr1070_Put(&v942, F.v6181);
yr986_SB();
yr997_SA(y_str("static ", 7));
if ((F.p2653 == v855)) {
yr997_SA(y_str("void", 4));
} else {
yr1004_ST(yr1765_CType(((*(yR115 *)rt_nil_check(F.v6167))).f_ret));
}
yr997_SA(y_str(" ", 1));
yr1004_ST(((*(yR115 *)rt_nil_check(F.v6167))).f_cname);
yr997_SA(y_str("(", 1));
F.v6181 = yr1016_SE();
if ((F.p2653 == v855)) {
F.v6181 = yr2595_Join(F.v6181, yr1021_T(y_str("void *arg", 9)), INT64_C(0));
F.v6183 = 0;
} else if ((v1576 > INT64_C(0))) {
yr986_SB();
yr1004_ST(F.v6181);
yr997_SA(y_str("struct ", 7));
yr1004_ST(((rt_int *)(v1586).p)[y_ix1(v1586, v1576)]);
yr997_SA(y_str(" *up", 4));
F.v6181 = yr1016_SE();
F.v6183 = 0;
}
F.v6175 = ((*(yR115 *)rt_nil_check(F.v6167))).f_params;
while ((((!(F.v6175 == ((void *)0)))) && ((!(F.p2653 == v855))))) {
yr986_SB();
yr1004_ST(F.v6181);
if ((!F.v6183)) {
yr997_SA(y_str(", ", 2));
}
F.v6183 = 0;
yr1004_ST(yr2645_ParamCType(F.v6175));
yr997_SA(y_str(" a_", 3));
yr1004_ST(((*(yR110 *)rt_nil_check(F.v6175))).f_cname);
F.v6181 = yr1016_SE();
F.v6175 = ((*(yR110 *)rt_nil_check(F.v6175))).f_next;
}
if (F.v6183) {
F.v6181 = yr2595_Join(F.v6181, yr1021_T(y_str("void", 4)), INT64_C(0));
}
F.v6181 = yr2595_Join(F.v6181, yr1021_T(y_str(")", 1)), INT64_C(0));
((*(yR115 *)rt_nil_check(F.v6167))).f_mnext = yr1597_NewSym(v861, F.v6181);
yr1070_Put(&v950, yr2595_Join(F.v6181, yr1021_T(y_str(";", 1)), INT64_C(0)));
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2658_SameSignature(void * a_p2659, void * a_p2660) {
struct yf2661 F;
memset((void *)&F, 0, sizeof F);
F.p2659 = a_p2659;
F.p2660 = a_p2660;
F.v6226 = F.p2660;
while ((!(F.v6226 == ((void *)0)))) {
if ((((*(yR115 *)rt_nil_check(F.v6226))).f_nparams == ((*(yR115 *)rt_nil_check(F.p2659))).f_nparams)) {
F.v6232 = 1;
F.v6228 = ((*(yR115 *)rt_nil_check(F.p2659))).f_params;
F.v6230 = ((*(yR115 *)rt_nil_check(F.v6226))).f_params;
while ((!(F.v6228 == ((void *)0)))) {
if ((!yr1783_SameType(((*(yR110 *)rt_nil_check(F.v6228))).f_rep, ((*(yR110 *)rt_nil_check(F.v6230))).f_rep))) {
F.v6232 = 0;
}
F.v6228 = ((*(yR110 *)rt_nil_check(F.v6228))).f_next;
F.v6230 = ((*(yR110 *)rt_nil_check(F.v6230))).f_next;
}
if (F.v6232) {
{ void * rv6235 = F.v6226;
return rv6235; }
}
}
F.v6226 = ((*(yR115 *)rt_nil_check(F.v6226))).f_alt;
}
{ void * rv6236 = ((void *)0);
return rv6236; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2665_RoutineBody(void * a_p2666) {
struct yf2667 F;
memset((void *)&F, 0, sizeof F);
F.p2666 = a_p2666;
F.v6240 = ((*(yR95 *)rt_nil_check(F.p2666))).f_sym;
F.v6242 = v956;
F.v6244 = v958;
F.v6246 = v1576;
F.v6248 = v2448;
F.v6250 = v2451;
F.v6252 = v2472;
F.v6254 = v2484;
F.v6256 = v2507;
F.v6258 = v2510;
F.v6260 = v2513;
F.v6262 = v2515;
v956 = ((yR130){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v958 = ((yR130){ .f_head = ((void *)0), .f_tail = ((void *)0) });
F.v6272 = ((yR130){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v1576 = ((*(yR115 *)rt_nil_check(F.v6240))).f_level;
F.v6268 = ((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v6240))).f_members))).f_name;
((rt_int *)(v1586).p)[y_ix1(v1586, v1576)] = F.v6268;
v2451 = v2448;
v2510 = v2507;
v2484 = INT64_C(0);
v2513 = F.v6240;
v2515 = 0;
yr1604_OpenScope(0);
F.v6264 = ((*(yR115 *)rt_nil_check(F.v6240))).f_params;
while ((!(F.v6264 == ((void *)0)))) {
if ((((*(yR110 *)rt_nil_check(F.v6264))).f_cls == v867)) {
F.v6266 = yr1597_NewSym(v834, ((*(yR110 *)rt_nil_check(F.v6264))).f_name);
} else {
F.v6266 = yr1597_NewSym(v831, ((*(yR110 *)rt_nil_check(F.v6264))).f_name);
}
((*(yR115 *)rt_nil_check(F.v6266))).f_rep = ((*(yR110 *)rt_nil_check(F.v6264))).f_rep;
((*(yR115 *)rt_nil_check(F.v6266))).f_level = v1576;
((*(yR115 *)rt_nil_check(F.v6266))).f_cname = ((*(yR110 *)rt_nil_check(F.v6264))).f_cname;
if ((((*(yR115 *)rt_nil_check(F.v6240))).f_kind == v855)) {
((*(yR115 *)rt_nil_check(F.v6266))).f_byref = (((*(yR110 *)rt_nil_check(F.v6264))).f_cls == v873);
yr1673_DeclStorage(yr2645_ParamCType(F.v6264), ((*(yR110 *)rt_nil_check(F.v6264))).f_cname);
} else if ((((*(yR110 *)rt_nil_check(F.v6264))).f_cls == v873)) {
((*(yR115 *)rt_nil_check(F.v6266))).f_byref = 1;
yr1673_DeclStorage(yr2645_ParamCType(F.v6264), ((*(yR110 *)rt_nil_check(F.v6264))).f_cname);
yr1092_Emit(yr2595_Join(yr1021_T(y_str("F.", 2)), ((*(yR110 *)rt_nil_check(F.v6264))).f_cname, yr2595_Join(yr1021_T(y_str(" = a_", 5)), ((*(yR110 *)rt_nil_check(F.v6264))).f_cname, yr1021_T(y_str(";", 1)))));
} else if ((((*(yR110 *)rt_nil_check(F.v6264))).f_cls == v870)) {
yr1673_DeclStorage(yr1765_CType(((*(yR110 *)rt_nil_check(F.v6264))).f_rep), ((*(yR110 *)rt_nil_check(F.v6264))).f_cname);
yr1673_DeclStorage(yr2645_ParamCType(F.v6264), yr2595_Join(((*(yR110 *)rt_nil_check(F.v6264))).f_cname, yr1021_T(y_str("_o", 2)), INT64_C(0)));
yr1092_Emit(yr2595_Join(yr1021_T(y_str("F.", 2)), ((*(yR110 *)rt_nil_check(F.v6264))).f_cname, yr2595_Join(yr1021_T(y_str("_o = a_", 7)), ((*(yR110 *)rt_nil_check(F.v6264))).f_cname, yr1021_T(y_str(";", 1)))));
if ((yr1753_Deep(((*(yR110 *)rt_nil_check(F.v6264))).f_rep) && ((!(((*(yR100 *)rt_nil_check(((*(yR110 *)rt_nil_check(F.v6264))).f_rep))).f_kind == v813))))) {
yr1092_Emit(yr2595_Join(yr1021_T(y_str("y_init(", 7)), yr1771_DescOf(((*(yR110 *)rt_nil_check(F.v6264))).f_rep), yr2595_Join(yr1021_T(y_str(", &F.", 5)), ((*(yR110 *)rt_nil_check(F.v6264))).f_cname, yr1021_T(y_str(");", 2)))));
}
if ((((*(yR100 *)rt_nil_check(((*(yR110 *)rt_nil_check(F.v6264))).f_rep))).f_kind == v813)) {
yr1092_Emit(yr2595_Join(yr1021_T(y_str("F.", 2)), ((*(yR110 *)rt_nil_check(F.v6264))).f_cname, yr2595_Join(yr1021_T(y_str(" = *a_", 6)), ((*(yR110 *)rt_nil_check(F.v6264))).f_cname, yr1021_T(y_str(";", 1)))));
}
} else {
yr1673_DeclStorage(yr1765_CType(((*(yR110 *)rt_nil_check(F.v6264))).f_rep), ((*(yR110 *)rt_nil_check(F.v6264))).f_cname);
yr1092_Emit(yr2595_Join(yr1021_T(y_str("F.", 2)), ((*(yR110 *)rt_nil_check(F.v6264))).f_cname, yr2595_Join(yr1021_T(y_str(" = a_", 5)), ((*(yR110 *)rt_nil_check(F.v6264))).f_cname, yr1021_T(y_str(";", 1)))));
}
yr1653_Define(F.v6266, ((*(yR95 *)rt_nil_check(F.p2666))).f_line);
F.v6264 = ((*(yR110 *)rt_nil_check(F.v6264))).f_next;
}
yr2805_EnterMonitor(F.v6240);
yr2699_Declarations(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2666))).f_c))).f_a);
yr2553_BlockStatements(((*(yR95 *)rt_nil_check(F.p2666))).f_c);
if ((((*(yR115 *)rt_nil_check(F.v6240))).f_kind == v855)) {
yr1098_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
} else {
yr1098_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
}
yr2787_AwaitProcesses();
yr1610_CloseScope();
yr986_SB();
yr997_SA(y_str("struct ", 7));
yr1004_ST(F.v6268);
yr997_SA(y_str(" {", 2));
if ((v1576 > INT64_C(1))) {
yr997_SA(y_str(" struct ", 8));
yr1004_ST(((rt_int *)(v1586).p)[y_ix1(v1586, rt_sub(v1576, INT64_C(1)))]);
yr997_SA(y_str(" *up;", 5));
} else {
yr997_SA(y_str(" void *up;", 10));
}
F.v6270 = yr1016_SE();
yr1070_Put(&v946, F.v6270);
yr1085_Append(&v946, &v958);
yr1077_PutS(&v946, y_str("};", 2));
yr1070_Put(&F.v6272, yr2595_Join(((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v6240))).f_mnext))).f_name, yr1021_T(y_str(" {", 2)), INT64_C(0)));
if (v2515) {
yr1077_PutS(&F.v6272, y_str("volatile", 8));
}
yr1070_Put(&F.v6272, yr2595_Join(yr1021_T(y_str("struct ", 7)), F.v6268, yr1021_T(y_str(" F;", 3))));
yr1077_PutS(&F.v6272, y_str("memset((void *)&F, 0, sizeof F);", 32));
if ((((*(yR115 *)rt_nil_check(F.v6240))).f_kind == v855)) {
yr1070_Put(&F.v6272, yr2595_Join(yr1021_T(y_str("F = *(struct ", 13)), F.v6268, yr1021_T(y_str(" *)arg;", 7))));
} else if ((v1576 > INT64_C(1))) {
yr1077_PutS(&F.v6272, y_str("F.up = up;", 10));
}
yr1085_Append(&F.v6272, &v956);
yr1077_PutS(&F.v6272, y_str("}", 1));
yr1085_Append(&v952, &F.v6272);
v956 = F.v6242;
v958 = F.v6244;
v1576 = F.v6246;
((rt_int *)(v1586).p)[y_ix1(v1586, v1576)] = yr1146_Fresh(y_str("unused", 6));
if ((!(F.v6260 == ((void *)0)))) {
((rt_int *)(v1586).p)[y_ix1(v1586, v1576)] = ((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v6260))).f_members))).f_name;
}
v2448 = F.v6248;
v2451 = F.v6250;
v2472 = F.v6252;
v2484 = F.v6254;
v2507 = F.v6256;
v2510 = F.v6258;
v2513 = F.v6260;
v2515 = F.v6262;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2671_DeclareStorage(void * a_p2672, void * a_p2673, rt_int a_p2674) {
struct yf2675 F;
memset((void *)&F, 0, sizeof F);
F.p2672 = a_p2672;
F.p2673 = a_p2673;
F.p2674 = a_p2674;
((*(yR115 *)rt_nil_check(F.p2672))).f_rep = F.p2673;
((*(yR115 *)rt_nil_check(F.p2672))).f_level = v1576;
((*(yR115 *)rt_nil_check(F.p2672))).f_cname = yr1146_Fresh(y_str("v", 1));
yr1673_DeclStorage(yr1765_CType(F.p2673), ((*(yR115 *)rt_nil_check(F.p2672))).f_cname);
if (yr1753_Deep(F.p2673)) {
yr1092_Emit(yr2595_Join(yr1021_T(y_str("y_init(", 7)), yr1771_DescOf(F.p2673), yr2595_Join(yr1021_T(y_str(", &", 3)), yr1680_SymPath(F.p2672), yr1021_T(y_str(");", 2)))));
}
if ((((*(yR100 *)rt_nil_check(F.p2673))).f_kind == v804)) {
yr1092_Emit(yr2595_Join(yr1680_SymPath(F.p2672), yr1021_T(y_str(" = y_set_new(", 13)), yr2595_Join(yr1846_LoText(((*(yR100 *)rt_nil_check(F.p2673))).f_elem), yr1021_T(y_str(", ", 2)), yr2595_Join(yr1852_HiText(((*(yR100 *)rt_nil_check(F.p2673))).f_elem), yr1021_T(y_str(");", 2)), INT64_C(0)))));
}
if ((((*(yR100 *)rt_nil_check(F.p2673))).f_kind == v807)) {
yr2822_DeclareSignal(F.p2672, F.p2674);
}
if (yr1759_HoldsSignal(F.p2673)) {
if ((!(((*(yR100 *)rt_nil_check(((*(yR100 *)rt_nil_check(F.p2673))).f_elem))).f_kind == v807))) {
yr1124_FailS(F.p2674, y_str("this implementation keeps signals in arrays whose components are signals", 72));
}
yr2829_DeclareSignalArray(F.p2672, F.p2674);
}
if ((((*(yR100 *)rt_nil_check(F.p2673))).f_kind == v810)) {
yr1092_Emit(yr2595_Join(yr1021_T(y_str("rt_lock_init(&", 14)), yr1680_SymPath(F.p2672), yr1021_T(y_str(");", 2))));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2679_SimpleDecl(void * a_p2680) {
struct yf2681 F;
memset((void *)&F, 0, sizeof F);
F.p2680 = a_p2680;
F.v6335 = ((*(yR95 *)rt_nil_check(F.p2680))).f_kind;
if ((((F.v6335 == v609)) || ((F.v6335 == v612)))) {
F.v6337 = yr1885_MakeRep(((*(yR95 *)rt_nil_check(F.p2680))).f_b, INT64_C(0), 0);
yr1806_CheckRepresented(F.v6337, ((*(yR95 *)rt_nil_check(F.p2680))).f_line);
if ((((F.v6335 == v609)) && (((((((*(yR100 *)rt_nil_check(F.v6337))).f_kind == v807)) || ((((*(yR100 *)rt_nil_check(F.v6337))).f_kind == v801))) || ((((*(yR100 *)rt_nil_check(F.v6337))).f_kind == v810)))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2680))).f_line, y_str("signals, files and semaphores are variables (VII.B)", 51));
}
F.v6341 = ((*(yR95 *)rt_nil_check(F.p2680))).f_a;
while ((!(F.v6341 == ((void *)0)))) {
if ((F.v6335 == v609)) {
F.v6343 = yr1597_NewSym(v834, ((*(yR95 *)rt_nil_check(F.v6341))).f_name);
} else {
F.v6343 = yr1597_NewSym(v831, ((*(yR95 *)rt_nil_check(F.v6341))).f_name);
}
yr2671_DeclareStorage(F.v6343, F.v6337, ((*(yR95 *)rt_nil_check(F.p2680))).f_line);
if ((!(((*(yR95 *)rt_nil_check(F.p2680))).f_c == ((void *)0)))) {
yr2192_Expr(((*(yR95 *)rt_nil_check(F.p2680))).f_c, F.v6337, &F.v6345, &F.v6339);
if ((F.v6335 == v609)) {
yr2143_Store(yr1680_SymPath(F.v6343), F.v6337, F.v6345, F.v6339, ((*(yR95 *)rt_nil_check(F.p2680))).f_line);
} else {
F.v6347 = yr2392_UserAssign(yr1680_SymPath(F.v6343), F.v6337, F.v6345, F.v6339, ((*(yR95 *)rt_nil_check(F.p2680))).f_line);
if ((!(F.v6347 == INT64_C(0)))) {
yr1092_Emit(F.v6347);
} else {
if ((((*(yR100 *)rt_nil_check(F.v6337))).f_opaque && (((rt_mod(((*(yR100 *)rt_nil_check(F.v6337))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2680))).f_line, ((*(yR100 *)rt_nil_check(F.v6337))).f_tname, y_str(" is opaque here: := is not exported to initialize it (X.B.3)", 60));
}
yr2143_Store(yr1680_SymPath(F.v6343), F.v6337, F.v6345, F.v6339, ((*(yR95 *)rt_nil_check(F.p2680))).f_line);
}
}
if ((F.v6335 == v609)) {
yr2094_Manifest(((*(yR95 *)rt_nil_check(F.p2680))).f_c, &F.v6349, &F.v6351);
if ((F.v6349 && yr1729_IsDiscrete(F.v6337))) {
((*(yR115 *)rt_nil_check(F.v6343))).f_hasmv = 1;
((*(yR115 *)rt_nil_check(F.v6343))).f_mval = F.v6351;
}
}
}
if ((!(((*(yR95 *)rt_nil_check(F.v6341))).f_a == ((void *)0)))) {
yr2692_AtLocation(F.v6343, ((*(yR95 *)rt_nil_check(F.v6341))).f_a);
}
yr1653_Define(F.v6343, ((*(yR95 *)rt_nil_check(F.v6341))).f_line);
F.v6341 = ((*(yR95 *)rt_nil_check(F.v6341))).f_next;
}
return;
}
if ((F.v6335 == v621)) {
F.v6337 = yr1885_MakeRep(((*(yR95 *)rt_nil_check(F.p2680))).f_b, ((*(yR95 *)rt_nil_check(F.p2680))).f_name, 0);
yr1806_CheckRepresented(F.v6337, ((*(yR95 *)rt_nil_check(F.p2680))).f_line);
F.v6343 = yr1597_NewSym(v837, ((*(yR95 *)rt_nil_check(F.p2680))).f_name);
((*(yR115 *)rt_nil_check(F.v6343))).f_rep = F.v6337;
yr1653_Define(F.v6343, ((*(yR95 *)rt_nil_check(F.p2680))).f_line);
yr1893_ResolvePending(((*(yR95 *)rt_nil_check(F.p2680))).f_name, F.v6337);
yr2685_NoteAlphabet(F.p2680, F.v6337);
return;
}
if ((F.v6335 == v618)) {
F.v6337 = yr1885_MakeRep(((*(yR95 *)rt_nil_check(F.p2680))).f_b, ((*(yR95 *)rt_nil_check(F.p2680))).f_name, 1);
if ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2680))).f_b))).f_kind == v642)) {
F.v6337 = yr1723_CopyRep(F.v6337);
((*(yR100 *)rt_nil_check(F.v6337))).f_tid = yr1879_NewTid(((*(yR95 *)rt_nil_check(F.p2680))).f_name);
((*(yR100 *)rt_nil_check(F.v6337))).f_tname = ((*(yR95 *)rt_nil_check(F.p2680))).f_name;
if (((((((*(yR100 *)rt_nil_check(F.v6337))).f_kind == v774)) || ((((*(yR100 *)rt_nil_check(F.v6337))).f_kind == v777))) || ((((*(yR100 *)rt_nil_check(F.v6337))).f_kind == v780)))) {
if ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2680))).f_b))).f_a == ((void *)0))) {
((*(yR100 *)rt_nil_check(F.v6337))).f_abstract = 1;
}
}
}
F.v6343 = yr1597_NewSym(v840, ((*(yR95 *)rt_nil_check(F.p2680))).f_name);
((*(yR115 *)rt_nil_check(F.v6343))).f_rep = F.v6337;
yr1653_Define(F.v6343, ((*(yR95 *)rt_nil_check(F.p2680))).f_line);
yr1893_ResolvePending(((*(yR95 *)rt_nil_check(F.p2680))).f_name, F.v6337);
yr2685_NoteAlphabet(F.p2680, F.v6337);
return;
}
if ((F.v6335 == v615)) {
F.v6341 = ((*(yR95 *)rt_nil_check(F.p2680))).f_a;
while ((!(F.v6341 == ((void *)0)))) {
F.v6343 = yr1597_NewSym(v858, ((*(yR95 *)rt_nil_check(F.v6341))).f_name);
((*(yR115 *)rt_nil_check(F.v6343))).f_level = v1576;
((*(yR115 *)rt_nil_check(F.v6343))).f_cname = yr1146_Fresh(y_str("lab", 3));
yr1653_Define(F.v6343, ((*(yR95 *)rt_nil_check(F.v6341))).f_line);
F.v6341 = ((*(yR95 *)rt_nil_check(F.v6341))).f_next;
}
return;
}
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2680))).f_line, y_str("not a simple declaration", 24));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2685_NoteAlphabet(void * a_p2686, void * a_p2687) {
struct yf2688 F;
memset((void *)&F, 0, sizeof F);
F.p2686 = a_p2686;
F.p2687 = a_p2687;
if ((((((*(yR100 *)rt_nil_check(F.p2687))).f_kind == v789)) && ((((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2686))).f_b))).f_kind == v648)))) {
F.v6370 = yr1245_NewNode(v639, ((*(yR95 *)rt_nil_check(F.p2686))).f_line);
((*(yR95 *)rt_nil_check(F.v6370))).f_name = ((*(yR95 *)rt_nil_check(F.p2686))).f_name;
((*(yR95 *)rt_nil_check(F.v6370))).f_rep = F.p2687;
((*(yR95 *)rt_nil_check(F.v6370))).f_next = v2061;
v2061 = F.v6370;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2692_AtLocation(void * a_p2693, void * a_p2694) {
struct yf2695 F;
memset((void *)&F, 0, sizeof F);
F.p2693 = a_p2693;
F.p2694 = a_p2694;
if ((((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.p2693))).f_rep))).f_kind == v807)) {
yr2836_DeviceSignal(F.p2693, F.p2694);
return;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2699_Declarations(void * a_p2700) {
struct yf2701 F;
memset((void *)&F, 0, sizeof F);
F.p2700 = a_p2700;
F.v6377 = F.p2700;
F.v6379 = ((void *)0);
F.v6381 = ((void *)0);
F.v6383 = ((void *)0);
F.v6385 = ((void * *)(v1595).p)[y_ix1(v1595, v1570)];
((void * *)(v1595).p)[y_ix1(v1595, v1570)] = F.p2700;
while ((!(F.v6377 == ((void *)0)))) {
v960 = ((*(yR95 *)rt_nil_check(F.v6377))).f_line;
if ((((((*(yR95 *)rt_nil_check(F.v6377))).f_kind == v624)) || ((((*(yR95 *)rt_nil_check(F.v6377))).f_kind == v636)))) {
if ((((*(yR95 *)rt_nil_check(F.v6377))).f_kind == v624)) {
yr2651_RoutineHeader(F.v6377, v846);
} else {
yr2651_RoutineHeader(F.v6377, v855);
}
F.v6383 = yr1245_NewNode(v639, ((*(yR95 *)rt_nil_check(F.v6377))).f_line);
((*(yR95 *)rt_nil_check(F.v6383))).f_a = F.v6377;
yr1252_Link(&F.v6379, &F.v6381, F.v6383);
if ((((*(yR95 *)rt_nil_check(F.v6377))).f_kind == v636)) {
yr2781_DeclareProcess(F.v6377);
}
} else if (((((*(yR95 *)rt_nil_check(F.v6377))).f_kind == v594))) {
if ((((*(yR95 *)rt_nil_check(F.v6377))).f_ival == INT64_C(0))) {
yr2763_CompileModule(F.v6377);
}
} else if ((((*(yR95 *)rt_nil_check(F.v6377))).f_kind == v630)) {
yr2769_DeclareTemplate(F.v6377);
} else if ((((*(yR95 *)rt_nil_check(F.v6377))).f_kind == v633)) {
yr2775_Instantiate(F.v6377);
} else {
yr2679_SimpleDecl(F.v6377);
}
F.v6377 = ((*(yR95 *)rt_nil_check(F.v6377))).f_next;
}
((void * *)(v1595).p)[y_ix1(v1595, v1570)] = F.v6385;
yr1900_CheckPending();
F.v6383 = F.v6379;
while ((!(F.v6383 == ((void *)0)))) {
yr2665_RoutineBody(((*(yR95 *)rt_nil_check(F.v6383))).f_a);
F.v6383 = ((*(yR95 *)rt_nil_check(F.v6383))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2716_Alias(rt_int a_p2717, void * a_p2718) {
struct yf2719 F;
memset((void *)&F, 0, sizeof F);
F.p2717 = a_p2717;
F.p2718 = a_p2718;
F.v6391 = yr1597_NewSym(v864, F.p2717);
((*(yR115 *)rt_nil_check(F.v6391))).f_target = F.p2718;
((*(yR115 *)rt_nil_check(F.v6391))).f_readonly = ((*(yR115 *)rt_nil_check(F.p2718))).f_readonly;
{ void * rv6392 = F.v6391;
return rv6392; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2723_AddLits(void * * a_p2724, void * a_p2725, rt_int a_p2726) {
struct yf2727 F;
memset((void *)&F, 0, sizeof F);
F.p2724 = a_p2724;
F.p2725 = a_p2725;
F.p2726 = a_p2726;
if ((((F.p2726 > INT64_C(8))) || ((*(yR100 *)rt_nil_check(F.p2725))).f_opaque)) {
return;
}
if ((((*(yR100 *)rt_nil_check(F.p2725))).f_kind == v786)) {
F.v6398 = ((*(yR100 *)rt_nil_check(F.p2725))).f_lits;
while ((!(F.v6398 == ((void *)0)))) {
F.v6400 = yr1646_FindLit(((*(yR95 *)rt_nil_check(F.v6398))).f_name, F.p2725);
if ((!(F.v6400 == ((void *)0)))) {
F.v6400 = yr2716_Alias(((*(yR95 *)rt_nil_check(F.v6398))).f_name, F.v6400);
((*(yR115 *)rt_nil_check(F.v6400))).f_mnext = (*F.p2724);
(*F.p2724) = F.v6400;
}
F.v6398 = ((*(yR95 *)rt_nil_check(F.v6398))).f_next;
}
} else if ((((*(yR100 *)rt_nil_check(F.p2725))).f_kind == v795)) {
F.v6402 = ((*(yR100 *)rt_nil_check(F.p2725))).f_fields;
while ((!(F.v6402 == ((void *)0)))) {
yr2723_AddLits(&(*F.p2724), ((*(yR105 *)rt_nil_check(F.v6402))).f_rep, rt_range(rt_add(F.p2726, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v6402 = ((*(yR105 *)rt_nil_check(F.v6402))).f_next;
}
} else if (((((((*(yR100 *)rt_nil_check(F.p2725))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.p2725))).f_kind == v804))) || ((((*(yR100 *)rt_nil_check(F.p2725))).f_kind == v801)))) {
yr2723_AddLits(&(*F.p2724), ((*(yR100 *)rt_nil_check(F.p2725))).f_elem, rt_range(rt_add(F.p2726, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2734_Provides(void * a_p2735, rt_int a_p2736) {
struct yf2737 F;
memset((void *)&F, 0, sizeof F);
F.p2735 = a_p2735;
F.p2736 = a_p2736;
F.v6412 = ((*(yR95 *)rt_nil_check(F.p2735))).f_b;
if ((((*(yR95 *)rt_nil_check(F.p2735))).f_name == F.p2736)) {
{ rt_int rv6414 = 1;
return rv6414; }
}
while ((!(F.v6412 == ((void *)0)))) {
if ((((!(((*(yR95 *)rt_nil_check(F.v6412))).f_ival == INT64_C(0)))) && ((((*(yR95 *)rt_nil_check(F.v6412))).f_ival == F.p2736)))) {
{ rt_int rv6417 = 1;
return rv6417; }
}
if ((((((*(yR95 *)rt_nil_check(F.v6412))).f_ival == INT64_C(0))) && ((((*(yR95 *)rt_nil_check(F.v6412))).f_name == F.p2736)))) {
{ rt_int rv6420 = 1;
return rv6420; }
}
F.v6412 = ((*(yR95 *)rt_nil_check(F.v6412))).f_next;
}
{ rt_int rv6422 = 0;
return rv6422; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2741_ImportLater(rt_int a_p2742, rt_int a_p2743) {
struct yf2744 F;
memset((void *)&F, 0, sizeof F);
F.p2742 = a_p2742;
F.p2743 = a_p2743;
if ((v1570 < INT64_C(0))) {
return;
}
F.v6427 = ((void * *)(v1595).p)[y_ix1(v1595, v1570)];
while ((!(F.v6427 == ((void *)0)))) {
if (((((((*(yR95 *)rt_nil_check(F.v6427))).f_kind == v594)) && ((!(((*(yR95 *)rt_nil_check(F.v6427))).f_ival == INT64_C(2))))) && yr2734_Provides(F.v6427, F.p2742))) {
if ((((*(yR95 *)rt_nil_check(F.v6427))).f_ival == INT64_C(1))) {
yr1132_FailN(F.p2743, F.p2742, y_str(": modules import from each other here, and this implementation needs an order without a circle (X.G)", 100));
}
yr2763_CompileModule(F.v6427);
return;
}
F.v6427 = ((*(yR95 *)rt_nil_check(F.v6427))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2748_ResolveItem(void * a_p2749, void * * a_p2750, rt_int a_p2751) {
struct yf2752 F;
memset((void *)&F, 0, sizeof F);
F.p2749 = a_p2749;
F.p2750 = a_p2750;
F.p2751 = a_p2751;
F.v6447 = ((*(yR95 *)rt_nil_check(F.p2749))).f_flag;
if (((F.p2751 && ((((*(yR95 *)rt_nil_check(F.p2749))).f_text == INT64_C(0)))) && (((((((*(yR95 *)rt_nil_check(F.p2749))).f_name == v501)) || ((((*(yR95 *)rt_nil_check(F.p2749))).f_name == v555))) || ((((*(yR95 *)rt_nil_check(F.p2749))).f_name == v540)))))) {
if ((yr1627_FindHere(((*(yR95 *)rt_nil_check(F.p2749))).f_name) == ((void *)0))) {
return;
}
}
if ((!(((*(yR95 *)rt_nil_check(F.p2749))).f_text == INT64_C(0)))) {
if ((((!F.p2751)) && ((yr1621_Find(((*(yR95 *)rt_nil_check(F.p2749))).f_text) == ((void *)0))))) {
yr2741_ImportLater(((*(yR95 *)rt_nil_check(F.p2749))).f_text, ((*(yR95 *)rt_nil_check(F.p2749))).f_line);
}
F.v6439 = yr1686_Real(yr1633_Lookup(((*(yR95 *)rt_nil_check(F.p2749))).f_text, ((*(yR95 *)rt_nil_check(F.p2749))).f_line));
if ((!(((*(yR115 *)rt_nil_check(F.v6439))).f_kind == v849))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2749))).f_line, ((*(yR95 *)rt_nil_check(F.p2749))).f_text, y_str(" is not a module", 16));
}
F.v6437 = ((*(yR115 *)rt_nil_check(F.v6439))).f_members;
while ((((!(F.v6437 == ((void *)0)))) && ((!(((*(yR115 *)rt_nil_check(F.v6437))).f_name == ((*(yR95 *)rt_nil_check(F.p2749))).f_name))))) {
F.v6437 = ((*(yR115 *)rt_nil_check(F.v6437))).f_mnext;
}
if ((F.v6437 == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2749))).f_line, ((*(yR95 *)rt_nil_check(F.p2749))).f_name, y_str(" is not exported by that module", 31));
}
} else {
if (F.p2751) {
F.v6437 = yr1627_FindHere(((*(yR95 *)rt_nil_check(F.p2749))).f_name);
} else {
F.v6437 = yr1621_Find(((*(yR95 *)rt_nil_check(F.p2749))).f_name);
}
if ((((F.v6437 == ((void *)0))) && (!F.p2751))) {
yr2741_ImportLater(((*(yR95 *)rt_nil_check(F.p2749))).f_name, ((*(yR95 *)rt_nil_check(F.p2749))).f_line);
F.v6437 = yr1621_Find(((*(yR95 *)rt_nil_check(F.p2749))).f_name);
}
if ((F.v6437 == ((void *)0))) {
if (F.p2751) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2749))).f_line, ((*(yR95 *)rt_nil_check(F.p2749))).f_name, y_str(" is not declared in this module", 31));
} else {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2749))).f_line, ((*(yR95 *)rt_nil_check(F.p2749))).f_name, y_str(" is not declared around this module (X.B.2)", 43));
}
}
}
F.v6443 = ((*(yR95 *)rt_nil_check(F.p2749))).f_name;
if ((!(((*(yR95 *)rt_nil_check(F.p2749))).f_ival == INT64_C(0)))) {
F.v6443 = rt_range(((*(yR95 *)rt_nil_check(F.p2749))).f_ival, INT64_C(0), INT64_C(4000000));
}
F.v6439 = yr1686_Real(F.v6437);
if ((((((*(yR115 *)rt_nil_check(F.v6439))).f_kind == v849)) && ((((*(yR95 *)rt_nil_check(F.p2749))).f_text == INT64_C(0))))) {
if ((((!(F.v6447 == INT64_C(0)))) || ((!(((*(yR95 *)rt_nil_check(F.p2749))).f_ival == INT64_C(0)))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2749))).f_line, y_str("a module name in a list takes no attribute and no AS (X.B.3)", 60));
}
F.v6441 = ((*(yR115 *)rt_nil_check(F.v6439))).f_members;
while ((!(F.v6441 == ((void *)0)))) {
F.v6437 = yr2716_Alias(((*(yR115 *)rt_nil_check(F.v6441))).f_name, F.v6441);
((*(yR115 *)rt_nil_check(F.v6437))).f_mnext = (*F.p2750);
(*F.p2750) = F.v6437;
F.v6441 = ((*(yR115 *)rt_nil_check(F.v6441))).f_mnext;
}
if ((!F.p2751)) {
F.v6437 = yr2716_Alias(((*(yR115 *)rt_nil_check(F.v6439))).f_name, F.v6439);
((*(yR115 *)rt_nil_check(F.v6437))).f_mnext = (*F.p2750);
(*F.p2750) = F.v6437;
}
return;
}
F.v6441 = yr2716_Alias(F.v6443, F.v6437);
if (F.p2751) {
if ((((((*(yR115 *)rt_nil_check(F.v6439))).f_kind == v837)) || ((((*(yR115 *)rt_nil_check(F.v6439))).f_kind == v840)))) {
if ((((F.v6447 == v399)) || ((F.v6447 == v453)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2749))).f_line, y_str("READONLY and VAR are for variables", 34));
}
if ((((!(F.v6447 == v444))) || ((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v6439))).f_rep))).f_opaque)) {
F.v6445 = yr1723_CopyRep(((*(yR115 *)rt_nil_check(F.v6439))).f_rep);
((*(yR100 *)rt_nil_check(F.v6445))).f_opaque = 1;
((*(yR100 *)rt_nil_check(F.v6445))).f_opaqueops = v2731;
((*(yR115 *)rt_nil_check(F.v6441))).f_target = yr1597_NewSym(((*(yR115 *)rt_nil_check(F.v6439))).f_kind, ((*(yR115 *)rt_nil_check(F.v6439))).f_name);
((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v6441))).f_target))).f_rep = F.v6445;
((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v6441))).f_target))).f_decl = ((*(yR115 *)rt_nil_check(F.v6439))).f_decl;
} else {
yr2723_AddLits(&(*F.p2750), ((*(yR115 *)rt_nil_check(F.v6439))).f_rep, INT64_C(0));
}
} else if ((((*(yR115 *)rt_nil_check(F.v6439))).f_kind == v831)) {
if ((((F.v6447 == v366)) || ((F.v6447 == v444)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2749))).f_line, y_str("OPAQUE and TRANSPARENT are for types", 36));
}
if ((!(F.v6447 == v453))) {
((*(yR115 *)rt_nil_check(F.v6441))).f_readonly = 1;
}
} else if ((!(F.v6447 == INT64_C(0)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2749))).f_line, y_str("an attribute is for a type, a representation or a variable", 58));
}
if ((((((*(yR115 *)rt_nil_check(F.v6439))).f_kind == v831)) && ((((((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.v6439))).f_rep))).f_kind == v807)) || yr1759_HoldsSignal(((*(yR115 *)rt_nil_check(F.v6439))).f_rep))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2749))).f_line, y_str("a signal may not be exported from its monitor (X.E.4)", 53));
}
} else if ((((((*(yR115 *)rt_nil_check(F.v6439))).f_kind == v837)) || ((((*(yR115 *)rt_nil_check(F.v6439))).f_kind == v840)))) {
yr2723_AddLits(&(*F.p2750), ((*(yR115 *)rt_nil_check(F.v6439))).f_rep, INT64_C(0));
}
((*(yR115 *)rt_nil_check(F.v6441))).f_mnext = (*F.p2750);
(*F.p2750) = F.v6441;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2756_DefineAll(void * a_p2757, rt_int a_p2758) {
struct yf2759 F;
memset((void *)&F, 0, sizeof F);
F.p2757 = a_p2757;
F.p2758 = a_p2758;
F.v6472 = F.p2757;
F.v6474 = F.p2757;
F.v6476 = F.p2757;
while ((!(F.v6472 == ((void *)0)))) {
F.v6474 = ((*(yR115 *)rt_nil_check(F.v6472))).f_mnext;
F.v6476 = yr1627_FindHere(((*(yR115 *)rt_nil_check(F.v6472))).f_name);
if ((((F.v6476 == ((void *)0))) || ((!(yr1686_Real(F.v6476) == yr1686_Real(F.v6472)))))) {
if (((((!(F.v6476 == ((void *)0)))) && ((((*(yR115 *)rt_nil_check(yr1686_Real(F.v6472)))).f_kind == v843))) && ((((*(yR115 *)rt_nil_check(yr1686_Real(F.v6476)))).f_kind == v843)))) {
yr1653_Define(F.v6472, F.p2758);
} else if ((F.v6476 == ((void *)0))) {
yr1653_Define(F.v6472, F.p2758);
} else {
yr1132_FailN(F.p2758, ((*(yR115 *)rt_nil_check(F.v6472))).f_name, y_str(" comes into this scope twice", 28));
}
}
F.v6472 = F.v6474;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2763_CompileModule(void * a_p2764) {
struct yf2765 F;
memset((void *)&F, 0, sizeof F);
F.p2764 = a_p2764;
F.v6505 = 0;
((*(yR95 *)rt_nil_check(F.p2764))).f_ival = INT64_C(1);
F.v6481 = ((void *)0);
F.v6497 = ((*(yR95 *)rt_nil_check(F.p2764))).f_a;
while ((!(F.v6497 == ((void *)0)))) {
yr2748_ResolveItem(F.v6497, &F.v6481, 0);
F.v6497 = ((*(yR95 *)rt_nil_check(F.v6497))).f_next;
}
F.v6491 = v2705;
if ((((((*(yR95 *)rt_nil_check(F.p2764))).f_flag == INT64_C(1))) && ((v2705 == ((void *)0))))) {
F.v6493 = yr1597_NewSym(v831, ((*(yR95 *)rt_nil_check(F.p2764))).f_name);
((*(yR115 *)rt_nil_check(F.v6493))).f_level = v1576;
((*(yR115 *)rt_nil_check(F.v6493))).f_cname = yr1146_Fresh(y_str("mon", 3));
((*(yR115 *)rt_nil_check(F.v6493))).f_rep = v1698;
yr1673_DeclStorage(yr1021_T(y_str("ymon", 4)), ((*(yR115 *)rt_nil_check(F.v6493))).f_cname);
yr1092_Emit(yr2595_Join(yr1021_T(y_str("y_mon_init(&", 12)), yr1660_Path(v1576, ((*(yR115 *)rt_nil_check(F.v6493))).f_cname), yr1021_T(y_str(");", 2))));
v2705 = F.v6493;
F.v6505 = 1;
}
yr1604_OpenScope(1);
((void * *)(v2714).p)[y_ix1(v2714, v1570)] = ((void *)0);
F.v6501 = v1573;
v1573 = v1570;
yr2756_DefineAll(F.v6481, ((*(yR95 *)rt_nil_check(F.p2764))).f_line);
yr2699_Declarations(((*(yR95 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.p2764))).f_c))).f_a);
if (F.v6505) {
yr1092_Emit(yr2595_Join(yr1021_T(y_str("y_mon_enter(&", 13)), yr1660_Path(((*(yR115 *)rt_nil_check(v2705))).f_level, ((*(yR115 *)rt_nil_check(v2705))).f_cname), yr1021_T(y_str(");", 2))));
}
v2472 = rt_range(rt_add(v2472, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2461).p)[y_ix1(v2461, v2472)] = INT64_C(0);
yr2553_BlockStatements(((*(yR95 *)rt_nil_check(F.p2764))).f_c);
v2472 = rt_range(rt_sub(v2472, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (F.v6505) {
yr1092_Emit(yr2595_Join(yr1021_T(y_str("y_mon_leave(&", 13)), yr1660_Path(((*(yR115 *)rt_nil_check(v2705))).f_level, ((*(yR115 *)rt_nil_check(v2705))).f_cname), yr1021_T(y_str(");", 2))));
}
v2731 = INT64_C(0);
F.v6497 = ((*(yR95 *)rt_nil_check(F.p2764))).f_b;
while ((!(F.v6497 == ((void *)0)))) {
if ((((((*(yR95 *)rt_nil_check(F.v6497))).f_text == INT64_C(0))) && ((yr1627_FindHere(((*(yR95 *)rt_nil_check(F.v6497))).f_name) == ((void *)0))))) {
if ((((*(yR95 *)rt_nil_check(F.v6497))).f_name == v501)) {
v2731 = rt_range(rt_add(v2731, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((((((*(yR95 *)rt_nil_check(F.v6497))).f_name == v555)) || ((((*(yR95 *)rt_nil_check(F.v6497))).f_name == v540)))) {
if (((rt_div(v2731, INT64_C(2))) == INT64_C(0))) {
v2731 = rt_range(rt_add(v2731, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
}
F.v6497 = ((*(yR95 *)rt_nil_check(F.v6497))).f_next;
}
F.v6483 = ((void *)0);
F.v6497 = ((*(yR95 *)rt_nil_check(F.p2764))).f_b;
while ((!(F.v6497 == ((void *)0)))) {
yr2748_ResolveItem(F.v6497, &F.v6483, 1);
F.v6497 = ((*(yR95 *)rt_nil_check(F.v6497))).f_next;
}
F.v6499 = ((void * *)(v2714).p)[y_ix1(v2714, v1570)];
v1573 = F.v6501;
yr1610_CloseScope();
while ((!(F.v6499 == ((void *)0)))) {
F.v6497 = ((*(yR95 *)rt_nil_check(F.v6499))).f_next;
((*(yR95 *)rt_nil_check(F.v6499))).f_next = ((void * *)(v2714).p)[y_ix1(v2714, v1570)];
((void * *)(v2714).p)[y_ix1(v2714, v1570)] = F.v6499;
F.v6499 = F.v6497;
}
v2705 = F.v6491;
F.v6487 = yr1597_NewSym(v849, ((*(yR95 *)rt_nil_check(F.p2764))).f_name);
((*(yR115 *)rt_nil_check(F.v6487))).f_members = F.v6483;
yr1653_Define(F.v6487, ((*(yR95 *)rt_nil_check(F.p2764))).f_line);
F.v6489 = F.v6483;
F.v6483 = ((void *)0);
while ((!(F.v6489 == ((void *)0)))) {
F.v6495 = ((*(yR115 *)rt_nil_check(F.v6489))).f_mnext;
F.v6485 = yr2716_Alias(((*(yR115 *)rt_nil_check(F.v6489))).f_name, F.v6489);
((*(yR115 *)rt_nil_check(F.v6485))).f_readonly = ((*(yR115 *)rt_nil_check(F.v6489))).f_readonly;
((*(yR115 *)rt_nil_check(F.v6485))).f_mnext = F.v6483;
F.v6483 = F.v6485;
F.v6489 = F.v6495;
}
((*(yR115 *)rt_nil_check(F.v6487))).f_members = F.v6483;
((*(yR95 *)rt_nil_check(F.p2764))).f_ival = INT64_C(2);
F.v6489 = F.v6483;
while ((!(F.v6489 == ((void *)0)))) {
F.v6495 = yr2716_Alias(((*(yR115 *)rt_nil_check(F.v6489))).f_name, F.v6489);
((*(yR115 *)rt_nil_check(F.v6495))).f_readonly = ((*(yR115 *)rt_nil_check(F.v6489))).f_readonly;
if ((yr1627_FindHere(((*(yR115 *)rt_nil_check(F.v6489))).f_name) == ((void *)0))) {
yr1653_Define(F.v6495, ((*(yR95 *)rt_nil_check(F.p2764))).f_line);
} else if ((((((*(yR115 *)rt_nil_check(yr1627_FindHere(((*(yR115 *)rt_nil_check(F.v6489))).f_name)))).f_kind == v864)) && ((!(yr1686_Real(yr1627_FindHere(((*(yR115 *)rt_nil_check(F.v6489))).f_name)) == yr1686_Real(F.v6489)))))) {
yr1653_Define(F.v6495, ((*(yR95 *)rt_nil_check(F.p2764))).f_line);
} else if ((!(((*(yR115 *)rt_nil_check(yr1686_Real(F.v6489)))).f_kind == v843))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2764))).f_line, ((*(yR115 *)rt_nil_check(F.v6489))).f_name, y_str(" is exported into a scope that has it already", 45));
}
F.v6489 = ((*(yR115 *)rt_nil_check(F.v6489))).f_mnext;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2769_DeclareTemplate(void * a_p2770) {
struct yf2771 F;
memset((void *)&F, 0, sizeof F);
F.p2770 = a_p2770;
F.v6540 = yr1597_NewSym(v852, ((*(yR95 *)rt_nil_check(F.p2770))).f_name);
((*(yR115 *)rt_nil_check(F.v6540))).f_decl = F.p2770;
yr1653_Define(F.v6540, ((*(yR95 *)rt_nil_check(F.p2770))).f_line);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2775_Instantiate(void * a_p2776) {
struct yf2777 F;
memset((void *)&F, 0, sizeof F);
F.p2776 = a_p2776;
F.v6544 = yr1686_Real(yr1633_Lookup(((*(yR95 *)rt_nil_check(F.p2776))).f_name, ((*(yR95 *)rt_nil_check(F.p2776))).f_line));
if ((!(((*(yR115 *)rt_nil_check(F.v6544))).f_kind == v852))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2776))).f_line, ((*(yR95 *)rt_nil_check(F.p2776))).f_name, y_str(" is not a template", 18));
}
F.v6546 = ((*(yR115 *)rt_nil_check(F.v6544))).f_decl;
if ((!(yr1260_Count(((*(yR95 *)rt_nil_check(F.v6546))).f_a) == yr1260_Count(((*(yR95 *)rt_nil_check(F.p2776))).f_a)))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2776))).f_line, ((*(yR95 *)rt_nil_check(F.p2776))).f_name, y_str(": the number of actuals is wrong", 32));
}
F.v6552 = rt_range(rt_add(v1159, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo6568 = ((*(yR95 *)rt_nil_check(F.v6546))).f_ival;
F.hi6569 = rt_sub(((*(yR95 *)rt_nil_check(F.v6546))).f_flag, INT64_C(1));
{ rt_int hi6573 = F.hi6569;
for (rt_int i6572 = F.lo6568; i6572 <= hi6573; i6572++) { F.c_6571 = i6572;
F.v6556 = ((rt_int *)(v1153).p)[y_ix1(v1153, F.c_6571)];
F.v6558 = ((rt_int *)(v1155).p)[y_ix1(v1155, F.c_6571)];
if ((F.v6556 == v177)) {
F.v6548 = ((*(yR95 *)rt_nil_check(F.v6546))).f_a;
F.v6550 = ((*(yR95 *)rt_nil_check(F.p2776))).f_a;
while ((!(F.v6548 == ((void *)0)))) {
if ((((((*(yR95 *)rt_nil_check(F.v6548))).f_name == F.v6558)) && ((F.v6556 == v177)))) {
if ((((*(yR95 *)rt_nil_check(F.v6550))).f_flag == INT64_C(1))) {
F.v6556 = v186;
F.v6558 = ((*(yR95 *)rt_nil_check(F.v6550))).f_ival;
} else {
F.v6558 = ((*(yR95 *)rt_nil_check(F.v6550))).f_name;
if ((F.v6558 <= v462)) {
F.v6556 = v180;
} else if ((F.v6558 <= v591)) {
F.v6556 = v183;
}
}
}
F.v6548 = ((*(yR95 *)rt_nil_check(F.v6548))).f_next;
F.v6550 = ((*(yR95 *)rt_nil_check(F.v6550))).f_next;
}
}
v1159 = rt_range(rt_add(v1159, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1153).p)[y_ix1(v1153, v1159)] = F.v6556;
((rt_int *)(v1155).p)[y_ix1(v1155, v1159)] = F.v6558;
((rt_int *)(v1157).p)[y_ix1(v1157, v1159)] = ((rt_int *)(v1157).p)[y_ix1(v1157, F.c_6571)];
if (i6572 == hi6573) break;
}}
v1159 = rt_range(rt_add(v1159, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1153).p)[y_ix1(v1153, v1159)] = v174;
((rt_int *)(v1155).p)[y_ix1(v1155, v1159)] = INT64_C(0);
((rt_int *)(v1157).p)[y_ix1(v1157, v1159)] = ((*(yR95 *)rt_nil_check(F.p2776))).f_line;
F.v6554 = v1234;
v1234 = F.v6552;
F.v6560 = yr1350_ParseModule();
v1234 = F.v6554;
yr2763_CompileModule(F.v6560);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2781_DeclareProcess(void * a_p2782) {
struct yf2783 F;
memset((void *)&F, 0, sizeof F);
F.p2782 = a_p2782;
F.v6583 = ((*(yR95 *)rt_nil_check(F.p2782))).f_sym;
((*(yR115 *)rt_nil_check(F.v6583))).f_monitor = v2705;
yr1673_DeclStorage(yr1021_T(y_str("rt_taskdecl", 11)), yr2595_Join(((*(yR115 *)rt_nil_check(F.v6583))).f_cname, yr1021_T(y_str("_d", 2)), INT64_C(0)));
F.v6585 = yr1245_NewNode(v639, ((*(yR95 *)rt_nil_check(F.p2782))).f_line);
((*(yR95 *)rt_nil_check(F.v6585))).f_sym = F.v6583;
((*(yR95 *)rt_nil_check(F.v6585))).f_next = ((void * *)(v2714).p)[y_ix1(v2714, v1570)];
((void * *)(v2714).p)[y_ix1(v2714, v1570)] = F.v6585;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2787_AwaitProcesses(void) {
struct yf2788 F;
memset((void *)&F, 0, sizeof F);
F.v6591 = ((void * *)(v2714).p)[y_ix1(v2714, v1570)];
while ((!(F.v6591 == ((void *)0)))) {
yr1092_Emit(yr2595_Join(yr1021_T(y_str("rt_await_decl(&", 15)), yr1660_Path(rt_range(rt_sub(((*(yR115 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v6591))).f_sym))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr2595_Join(((*(yR115 *)rt_nil_check(((*(yR95 *)rt_nil_check(F.v6591))).f_sym))).f_cname, yr1021_T(y_str("_d", 2)), INT64_C(0))), yr1021_T(y_str(");", 2))));
F.v6591 = ((*(yR95 *)rt_nil_check(F.v6591))).f_next;
}
((void * *)(v2714).p)[y_ix1(v2714, v1570)] = ((void *)0);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2792_Activate(void * a_p2793, void * a_p2794) {
struct yf2795 F;
memset((void *)&F, 0, sizeof F);
F.p2793 = a_p2793;
F.p2794 = a_p2794;
F.v6622 = ((*(yR115 *)rt_nil_check(F.p2794))).f_decl;
yr2335_CompileArgs(((*(yR95 *)rt_nil_check(F.p2793))).f_a, F.p2794, &F.v6602, &F.v6604);
if ((!(F.v6604 == ((*(yR115 *)rt_nil_check(F.p2794))).f_nparams))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2793))).f_line, ((*(yR115 *)rt_nil_check(F.p2794))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
F.v6610 = yr1146_Fresh(y_str("pf", 2));
yr1092_Emit(yr2595_Join(yr1021_T(y_str("{ struct ", 9)), ((*(yR115 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.p2794))).f_members))).f_name, yr2595_Join(yr1021_T(y_str(" *", 2)), F.v6610, yr2595_Join(yr1021_T(y_str(" = rt_alloc(sizeof *", 20)), F.v6610, yr1021_T(y_str(");", 2))))));
if ((((*(yR115 *)rt_nil_check(F.p2794))).f_level > INT64_C(1))) {
yr1092_Emit(yr2595_Join(F.v6610, yr1021_T(y_str("->up = ", 7)), yr2595_Join(yr1667_FramePtr(rt_range(rt_sub(((*(yR115 *)rt_nil_check(F.p2794))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))), yr1021_T(y_str(";", 1)), INT64_C(0))));
}
F.v6608 = ((*(yR115 *)rt_nil_check(F.p2794))).f_params;
F.v6606 = rt_range(rt_add(F.v6602, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(F.v6608 == ((void *)0)))) {
if ((!yr2314_Fits(((*(yR110 *)rt_nil_check(F.v6608))).f_rep, ((void * *)(v2300).p)[y_ix1(v2300, F.v6606)]))) {
yr1790_TypeClash(((*(yR95 *)rt_nil_check(((void * *)(v2309).p)[y_ix1(v2309, F.v6606)]))).f_line, ((*(yR110 *)rt_nil_check(F.v6608))).f_rep, ((void * *)(v2300).p)[y_ix1(v2300, F.v6606)]);
}
F.v6616 = yr2595_Join(F.v6610, yr1021_T(y_str("->", 2)), ((*(yR110 *)rt_nil_check(F.v6608))).f_cname);
yr2344_CheckUnresolved(((*(yR110 *)rt_nil_check(F.v6608))).f_rep, ((void * *)(v2300).p)[y_ix1(v2300, F.v6606)], ((*(yR95 *)rt_nil_check(((void * *)(v2309).p)[y_ix1(v2309, F.v6606)]))).f_line);
if ((((*(yR110 *)rt_nil_check(F.v6608))).f_cls == v873)) {
if ((!yr2153_IsVariable(((void * *)(v2309).p)[y_ix1(v2309, F.v6606)]))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(((void * *)(v2309).p)[y_ix1(v2309, F.v6606)]))).f_line, ((*(yR110 *)rt_nil_check(F.v6608))).f_name, y_str(": the actual of a VAR parameter must be a variable", 50));
}
if ((!yr2352_SameAsFormal(((*(yR110 *)rt_nil_check(F.v6608))).f_rep, ((void * *)(v2300).p)[y_ix1(v2300, F.v6606)]))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(((void * *)(v2309).p)[y_ix1(v2309, F.v6606)]))).f_line, ((*(yR110 *)rt_nil_check(F.v6608))).f_name, y_str(": a VAR actual has the representation of its formal (VII.G, X.A.2)", 66));
}
yr1092_Emit(yr2595_Join(F.v6616, yr1021_T(y_str(" = &", 4)), yr2595_Join(((rt_int *)(v2291).p)[y_ix1(v2291, F.v6606)], yr1021_T(y_str(";", 1)), INT64_C(0))));
} else if (yr1753_Deep(((*(yR110 *)rt_nil_check(F.v6608))).f_rep)) {
F.v6612 = yr1146_Fresh(y_str("t", 1));
yr1092_Emit(yr2595_Join(yr1021_T(y_str("{ ", 2)), yr1765_CType(((*(yR110 *)rt_nil_check(F.v6608))).f_rep), yr2595_Join(yr1021_T(y_str(" ", 1)), F.v6612, yr2595_Join(yr1021_T(y_str(" = ", 3)), yr2125_Convert(((rt_int *)(v2291).p)[y_ix1(v2291, F.v6606)], ((*(yR110 *)rt_nil_check(F.v6608))).f_rep, ((void * *)(v2300).p)[y_ix1(v2300, F.v6606)]), yr1021_T(y_str(";", 1))))));
if ((((*(yR100 *)rt_nil_check(((*(yR110 *)rt_nil_check(F.v6608))).f_rep))).f_kind == v813)) {
yr1092_Emit(yr2595_Join(yr1021_T(y_str("y_copy(y_desc_vector(", 21)), yr1771_DescOf(((*(yR100 *)rt_nil_check(((*(yR110 *)rt_nil_check(F.v6608))).f_rep))).f_elem), yr2595_Join(yr1021_T(y_str("), &", 4)), F.v6616, yr2595_Join(yr1021_T(y_str(", &", 3)), F.v6612, yr1021_T(y_str("); }", 4))))));
} else {
yr1092_Emit(yr2595_Join(yr1021_T(y_str("y_copy(", 7)), yr1771_DescOf(((*(yR110 *)rt_nil_check(F.v6608))).f_rep), yr2595_Join(yr1021_T(y_str(", &", 3)), F.v6616, yr2595_Join(yr1021_T(y_str(", &", 3)), F.v6612, yr1021_T(y_str("); }", 4))))));
}
} else {
yr1092_Emit(yr2595_Join(F.v6616, yr1021_T(y_str(" = ", 3)), yr2595_Join(yr2125_Convert(((rt_int *)(v2291).p)[y_ix1(v2291, F.v6606)], ((*(yR110 *)rt_nil_check(F.v6608))).f_rep, ((void * *)(v2300).p)[y_ix1(v2300, F.v6606)]), yr1021_T(y_str(";", 1)), INT64_C(0))));
}
F.v6606 = rt_range(rt_add(F.v6606, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6608 = ((*(yR110 *)rt_nil_check(F.v6608))).f_next;
}
v2311 = F.v6602;
F.v6618 = yr1021_T(y_str("0", 1));
if ((!(((*(yR95 *)rt_nil_check(F.v6622))).f_e == ((void *)0)))) {
yr2192_Expr(((*(yR95 *)rt_nil_check(F.v6622))).f_e, v1692, &F.v6618, &F.v6624);
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.v6622))).f_line, v1692, F.v6624);
}
F.v6620 = yr1021_T(y_str("0, 0", 4));
if ((!(((*(yR95 *)rt_nil_check(F.v6622))).f_d == ((void *)0)))) {
yr2192_Expr(((*(yR95 *)rt_nil_check(F.v6622))).f_d, v1692, &F.v6614, &F.v6624);
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.v6622))).f_line, v1692, F.v6624);
F.v6620 = yr2595_Join(yr1021_T(y_str("1, ", 3)), F.v6614, INT64_C(0));
}
yr986_SB();
yr997_SA(y_str("y_create(&", 10));
yr1004_ST(yr1660_Path(rt_range(rt_sub(((*(yR115 *)rt_nil_check(F.p2794))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr2595_Join(((*(yR115 *)rt_nil_check(F.p2794))).f_cname, yr1021_T(y_str("_d", 2)), INT64_C(0))));
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6618);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6620);
yr997_SA(y_str(", ", 2));
yr1004_ST(((*(yR115 *)rt_nil_check(F.p2794))).f_cname);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6610);
yr997_SA(y_str("); }", 4));
F.v6612 = yr1016_SE();
yr1092_Emit(F.v6612);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2799_MonitorPath(void * a_p2800) {
struct yf2801 F;
memset((void *)&F, 0, sizeof F);
F.p2800 = a_p2800;
{ rt_int rv6681 = yr2595_Join(yr1021_T(y_str("&", 1)), yr1660_Path(((*(yR115 *)rt_nil_check(F.p2800))).f_level, ((*(yR115 *)rt_nil_check(F.p2800))).f_cname), INT64_C(0));
return rv6681; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2805_EnterMonitor(void * a_p2806) {
struct yf2807 F;
memset((void *)&F, 0, sizeof F);
F.p2806 = a_p2806;
if ((((*(yR115 *)rt_nil_check(F.p2806))).f_kind == v846)) {
((*(yR115 *)rt_nil_check(F.p2806))).f_monitor = v2705;
}
if ((((*(yR115 *)rt_nil_check(F.p2806))).f_monitor == ((void *)0))) {
return;
}
yr1092_Emit(yr2595_Join(yr1021_T(y_str("y_mon_enter(", 12)), yr2799_MonitorPath(((*(yR115 *)rt_nil_check(F.p2806))).f_monitor), yr1021_T(y_str(");", 2))));
F.v6685 = yr1146_Fresh(y_str("mf", 2));
v2515 = 1;
yr1092_Emit(yr2595_Join(yr1021_T(y_str("rt_frame ", 9)), F.v6685, yr1021_T(y_str(";", 1))));
yr986_SB();
yr997_SA(y_str("if (!RT_TRY(", 12));
yr1004_ST(F.v6685);
yr997_SA(y_str(")) { RT_POP(", 12));
yr1004_ST(F.v6685);
yr997_SA(y_str("); ", 3));
if ((((*(yR115 *)rt_nil_check(F.p2806))).f_kind == v855)) {
yr997_SA(y_str("y_mon_drop(", 11));
} else {
yr997_SA(y_str("y_mon_leave(", 12));
}
yr1004_ST(yr2799_MonitorPath(((*(yR115 *)rt_nil_check(F.p2806))).f_monitor));
yr997_SA(y_str("); rt_raise(rt_xcur); }", 23));
yr1092_Emit(yr1016_SE());
v2448 = rt_range(rt_add(v2448, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v2446).p)[y_ix1(v2446, v2448)] = F.v6685;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2811_LeaveMonitor(void) {
struct yf2812 F;
memset((void *)&F, 0, sizeof F);
if ((v2513 == ((void *)0))) {
return;
}
if ((((*(yR115 *)rt_nil_check(v2513))).f_monitor == ((void *)0))) {
return;
}
if ((((*(yR115 *)rt_nil_check(v2513))).f_kind == v855)) {
yr1092_Emit(yr2595_Join(yr1021_T(y_str("y_mon_drop(", 11)), yr2799_MonitorPath(((*(yR115 *)rt_nil_check(v2513))).f_monitor), yr1021_T(y_str(");", 2))));
} else {
yr1092_Emit(yr2595_Join(yr1021_T(y_str("y_mon_leave(", 12)), yr2799_MonitorPath(((*(yR115 *)rt_nil_check(v2513))).f_monitor), yr1021_T(y_str(");", 2))));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2816_TerminateStatement(void * a_p2817) {
struct yf2818 F;
memset((void *)&F, 0, sizeof F);
F.p2817 = a_p2817;
if ((((v2513 == ((void *)0))) || ((!(((*(yR115 *)rt_nil_check(v2513))).f_kind == v855))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2817))).f_line, y_str("TERMINATE_PROCESS ends a process (IX.A.7)", 41));
}
yr2787_AwaitProcesses();
yr2811_LeaveMonitor();
yr2536_PopTo(v2451);
yr1098_EmitS(y_str("return;", 7));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2822_DeclareSignal(void * a_p2823, rt_int a_p2824) {
struct yf2825 F;
memset((void *)&F, 0, sizeof F);
F.p2823 = a_p2823;
F.p2824 = a_p2824;
if ((v2705 == ((void *)0))) {
yr1124_FailS(F.p2824, y_str("signal variables are declared in a monitor (X.E.4)", 50));
}
((*(yR115 *)rt_nil_check(F.p2823))).f_rep = yr1723_CopyRep(((*(yR115 *)rt_nil_check(F.p2823))).f_rep);
((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.p2823))).f_rep))).f_monitor = v2705;
yr1092_Emit(yr2595_Join(yr1021_T(y_str("y_sig_init(&", 12)), yr1680_SymPath(F.p2823), yr2595_Join(yr1021_T(y_str(", ", 2)), yr2799_MonitorPath(v2705), yr1021_T(y_str(");", 2)))));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2829_DeclareSignalArray(void * a_p2830, rt_int a_p2831) {
struct yf2832 F;
memset((void *)&F, 0, sizeof F);
F.p2830 = a_p2830;
F.p2831 = a_p2831;
if ((v2705 == ((void *)0))) {
yr1124_FailS(F.p2831, y_str("signal variables are declared in a monitor (X.E.4)", 50));
}
yr986_SB();
yr997_SA(y_str("{ rt_int yk, yn = y_count(", 26));
yr1004_ST(yr1680_SymPath(F.p2830));
yr997_SA(y_str(", ", 2));
yr1010_SI(((*(yR100 *)rt_nil_check(((*(yR115 *)rt_nil_check(F.p2830))).f_rep))).f_nidx);
yr997_SA(y_str("); for (yk = 0; yk < yn; yk++) y_sig_init((ysig *)y_elem_at(", 60));
yr1004_ST(yr1680_SymPath(F.p2830));
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1771_DescOf(((*(yR115 *)rt_nil_check(F.p2830))).f_rep));
yr997_SA(y_str(", yk), ", 7));
yr1004_ST(yr2799_MonitorPath(v2705));
yr997_SA(y_str("); }", 4));
F.v6720 = yr1016_SE();
yr1092_Emit(F.v6720);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2836_DeviceSignal(void * a_p2837, void * a_p2838) {
struct yf2839 F;
memset((void *)&F, 0, sizeof F);
F.p2837 = a_p2837;
F.p2838 = a_p2838;
yr2094_Manifest(F.p2838, &F.v6732, &F.v6734);
if ((!F.v6732)) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2838))).f_line, y_str("an AT location is a manifest constant (XIV.VII)", 47));
}
yr986_SB();
yr997_SA(y_str("y_device(&", 10));
yr1004_ST(yr1680_SymPath(F.p2837));
yr997_SA(y_str(", ", 2));
yr1010_SI(F.v6734);
yr997_SA(y_str(");", 2));
F.v6736 = yr1016_SE();
yr1092_Emit(F.v6736);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2843_Arg(void * a_p2844, rt_int a_p2845) {
struct yf2846 F;
memset((void *)&F, 0, sizeof F);
F.p2844 = a_p2844;
F.p2845 = a_p2845;
F.v6745 = ((*(yR95 *)rt_nil_check(F.p2844))).f_a;
F.v6747 = INT64_C(1);
while ((((!(F.v6745 == ((void *)0)))) && ((F.v6747 < F.p2845)))) {
F.v6745 = ((*(yR95 *)rt_nil_check(F.v6745))).f_next;
F.v6747 = rt_range(rt_add(F.v6747, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v6745 == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2844))).f_line, ((*(yR95 *)rt_nil_check(F.p2844))).f_name, y_str(": too few actual parameters", 27));
}
{ void * rv6752 = F.v6745;
return rv6752; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2850_NArgs(void * a_p2851, rt_int a_p2852) {
struct yf2853 F;
memset((void *)&F, 0, sizeof F);
F.p2851 = a_p2851;
F.p2852 = a_p2852;
if ((!(yr1260_Count(((*(yR95 *)rt_nil_check(F.p2851))).f_a) == F.p2852))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2851))).f_line, ((*(yR95 *)rt_nil_check(F.p2851))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2857_Call1(yarr a_p2859, rt_int a_p2860) {
struct yf2861 F;
memset((void *)&F, 0, sizeof F);
F.p2859 = a_p2859;
F.p2860 = a_p2860;
yr986_SB();
yr997_SA(F.p2859);
yr997_SA(y_str("(", 1));
yr1004_ST(F.p2860);
yr997_SA(y_str(")", 1));
{ rt_int rv6762 = yr1016_SE();
return rv6762; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2865_Addr(rt_int a_p2866) {
struct yf2867 F;
memset((void *)&F, 0, sizeof F);
F.p2866 = a_p2866;
{ rt_int rv6767 = yr2595_Join(yr1021_T(y_str("&", 1)), F.p2866, INT64_C(0));
return rv6767; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2871_StdVar(void * a_p2872, rt_int a_p2873, rt_int * a_p2874, void * * a_p2875) {
struct yf2876 F;
memset((void *)&F, 0, sizeof F);
F.p2872 = a_p2872;
F.p2873 = a_p2873;
F.p2874_o = a_p2874;
F.p2875_o = a_p2875;
yr2165_LValue(F.p2872, &F.p2874, &F.p2875);
if ((((!(F.p2873 == v828))) && ((!(((*(yR100 *)rt_nil_check(F.p2875))).f_kind == F.p2873))))) {
yr986_SB();
yr997_SA(y_str("a ", 2));
if ((F.p2873 == v801)) {
yr997_SA(y_str("file", 4));
} else if ((F.p2873 == v807)) {
yr997_SA(y_str("signal", 6));
} else if ((F.p2873 == v810)) {
yr997_SA(y_str("SEMAPHORE", 9));
} else if ((F.p2873 == v798)) {
yr997_SA(y_str("pointer", 7));
} else {
yr997_SA(y_str("variable", 8));
}
yr997_SA(y_str(" is needed here", 15));
F.v6774 = yr1016_SE();
yr1117_Fail(((*(yR95 *)rt_nil_check(F.p2872))).f_line, F.v6774);
}
(*F.p2874_o) = F.p2874;
(*F.p2875_o) = F.p2875;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2880_NumArg(void * a_p2881, rt_int * a_p2882, void * * a_p2883) {
struct yf2884 F;
memset((void *)&F, 0, sizeof F);
F.p2881 = a_p2881;
F.p2882_o = a_p2882;
F.p2883_o = a_p2883;
yr2192_Expr(F.p2881, ((void *)0), &F.p2882, &F.p2883);
if ((!yr1735_IsNumeric(F.p2883))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2881))).f_line, y_str("a number is needed here", 23));
}
(*F.p2882_o) = F.p2882;
(*F.p2883_o) = F.p2883;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2888_IntArg(void * a_p2889) {
struct yf2890 F;
memset((void *)&F, 0, sizeof F);
F.p2889 = a_p2889;
yr2192_Expr(F.p2889, v1692, &F.v6790, &F.v6792);
if ((!(((*(yR100 *)rt_nil_check(F.v6792))).f_kind == v774))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2889))).f_line, y_str("an integer is needed here", 25));
}
{ rt_int rv6794 = F.v6790;
return rv6794; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2894_CodeInsert(void * a_p2895) {
struct yf2896 F;
memset((void *)&F, 0, sizeof F);
F.p2895 = a_p2895;
F.v6798 = yr2843_Arg(F.p2895, INT64_C(1));
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1)}; y_desc_array(&F.yd_6822, 1, lo, hi, &y_d_int); }
y_init(&F.yd_6822, &F.v6824);
if ((!(((*(yR95 *)rt_nil_check(F.v6798))).f_kind == v741))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2895))).f_line, y_str("a code insert takes a string literal (XIV.XI.5)", 47));
}
F.v6801 = ((*(yR95 *)rt_nil_check(F.v6798))).f_text;
F.v6811 = ((rt_int *)(v890).p)[y_ix1(v890, F.v6801)];
yr986_SB();
F.v6807 = INT64_C(1);
while ((F.v6807 <= F.v6811)) {
F.v6813 = yr1063_TChar(F.v6801, F.v6807);
if ((F.v6813 == 39)) {
F.v6809 = rt_range(rt_add(F.v6807, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1063_TChar(F.v6801, F.v6809) == 39))) {
F.v6809 = rt_range(rt_add(F.v6809, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v6803 = yr1028_Intern(rt_range(rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.v6801)], F.v6807), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v6809, F.v6807)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr991_SC(((unsigned char *)(v940).p)[y_ix1(v940, yr2077_CharValue(v1696, F.v6803, ((*(yR95 *)rt_nil_check(F.p2895))).f_line))]);
F.v6807 = rt_range(rt_add(F.v6809, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v6813 == 36)) {
F.v6809 = rt_range(rt_add(F.v6807, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((F.v6809 <= F.v6811)) && ((yr968_IsLetter(yr1063_TChar(F.v6801, F.v6809)) || yr974_IsDigit(yr1063_TChar(F.v6801, F.v6809)))))) {
F.v6809 = rt_range(rt_add(F.v6809, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v6803 = yr1028_Intern(rt_range(rt_add(((rt_int *)(v888).p)[y_ix1(v888, F.v6801)], F.v6807), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v6809, F.v6807)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v6815 = yr1621_Find(F.v6803);
if ((F.v6815 == ((void *)0))) {
v909 = INT64_C(0);
v921 = INT64_C(0);
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2895))).f_line, F.v6803, y_str(" in a code insert is not declared here", 38));
}
F.v6815 = yr1686_Real(F.v6815);
if ((((!(((*(yR115 *)rt_nil_check(F.v6815))).f_kind == v831))) && ((!(((*(yR115 *)rt_nil_check(F.v6815))).f_kind == v834))))) {
v909 = INT64_C(0);
v921 = INT64_C(0);
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2895))).f_line, F.v6803, y_str(" in a code insert is not a variable or constant", 47));
}
yr1004_ST(yr2173_Paren(yr1680_SymPath(F.v6815)));
F.v6807 = F.v6809;
} else {
yr991_SC(F.v6813);
F.v6807 = rt_range(rt_add(F.v6807, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
F.v6805 = yr1016_SE();
yr1092_Emit(F.v6805);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2900_StdCall(rt_int a_p2901, void * a_p2902, rt_int a_p2903, rt_int * a_p2904, void * * a_p2905) {
struct yf2906 F;
memset((void *)&F, 0, sizeof F);
F.p2901 = a_p2901;
F.p2902 = a_p2902;
F.p2903 = a_p2903;
F.p2904_o = a_p2904;
F.p2905_o = a_p2905;
F.p2905 = v1698;
F.p2904 = yr1021_T(y_str("((void)0)", 9));
F.v6891 = ((((((((((((((((F.p2901 == v1968)) || ((F.p2901 == v1971))) || ((F.p2901 == v1974))) || ((F.p2901 == v1977))) || ((F.p2901 == v1980))) || ((F.p2901 == v1986))) || ((F.p2901 == v1995))) || ((F.p2901 == v2001))) || ((F.p2901 == v2004))) || ((F.p2901 == v2028))) || ((F.p2901 == v2031))) || ((F.p2901 == v2040))) || ((F.p2901 == v2043))) || ((F.p2901 == v2046))) || ((F.p2901 == v2049)));
if ((F.p2903 && (!F.v6891))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2902))).f_line, ((*(yR95 *)rt_nil_check(F.p2902))).f_name, y_str(" returns a value: it is called in an expression", 47));
}
if (((!F.p2903) && F.v6891)) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2902))).f_line, ((*(yR95 *)rt_nil_check(F.p2902))).f_name, y_str(" returns no value", 17));
}
if ((((F.p2901 == v1950)) || ((F.p2901 == v1953)))) {
yr2850_NArgs(F.p2902, INT64_C(2));
yr2192_Expr(yr2843_Arg(F.p2902, INT64_C(1)), ((void *)0), &F.v6863, &F.v6873);
if ((!yr1741_IsArrayLike(F.v6873))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2902))).f_line, ((*(yR95 *)rt_nil_check(F.p2902))).f_name, y_str(" of something that is not an array", 34));
}
F.v6865 = yr2888_IntArg(yr2843_Arg(F.p2902, INT64_C(2)));
yr2094_Manifest(yr2843_Arg(F.p2902, INT64_C(2)), &F.v6887, &F.v6885);
F.p2905 = yr2236_Unbounded(v1692);
if ((F.v6887 && ((((*(yR100 *)rt_nil_check(F.v6873))).f_kind == v792)))) {
if ((((F.v6885 < INT64_C(1))) || ((F.v6885 > ((*(yR100 *)rt_nil_check(F.v6873))).f_nidx)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2902))).f_line, y_str("no such dimension", 17));
}
F.v6879 = ((*(yR100 *)rt_nil_check(F.v6873))).f_idx;
F.lo6904 = INT64_C(2);
F.hi6905 = F.v6885;
{ rt_int hi6909 = F.hi6905;
for (rt_int i6908 = F.lo6904; i6908 <= hi6909; i6908++) { F.c_6907 = i6908;
F.v6879 = ((*(yR100 *)rt_nil_check(F.v6879))).f_link;
if (i6908 == hi6909) break;
}}
F.p2905 = F.v6879;
}
if ((F.p2901 == v1950)) {
F.p2904 = yr2242_Call2(y_str("y_low", 5), F.v6863, F.v6865);
} else {
F.p2904 = yr2242_Call2(y_str("y_high", 6), F.v6863, F.v6865);
}
(*F.p2904_o) = F.p2904;
(*F.p2905_o) = F.p2905;
return;
}
if ((((((F.p2901 == v1956)) || ((F.p2901 == v1959))) || ((F.p2901 == v1962))) || ((F.p2901 == v1965)))) {
yr2850_NArgs(F.p2902, INT64_C(1));
yr2192_Expr(yr2843_Arg(F.p2902, INT64_C(1)), ((void *)0), &F.v6863, &F.v6873);
if ((!yr1729_IsDiscrete(F.v6873))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2902))).f_line, ((*(yR95 *)rt_nil_check(F.p2902))).f_name, y_str(" of something that is not integer or scalar", 43));
}
if ((!(((*(yR100 *)rt_nil_check(F.v6873))).f_elem == ((void *)0)))) {
F.v6873 = ((*(yR100 *)rt_nil_check(F.v6873))).f_elem;
}
if ((((((F.p2901 == v1962)) || ((F.p2901 == v1965)))) && ((((*(yR100 *)rt_nil_check(F.v6873))).f_kind == v774)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2902))).f_line, y_str("FIRST and LAST apply to ordered enumerations and alphabets (XI)", 63));
}
if ((((((*(yR100 *)rt_nil_check(F.v6873))).f_kind == v786)) && (!((*(yR100 *)rt_nil_check(F.v6873))).f_ordered))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2902))).f_line, ((*(yR95 *)rt_nil_check(F.p2902))).f_name, y_str(" applies to ordered enumerations (XI)", 37));
}
F.p2905 = yr2236_Unbounded(F.v6873);
if ((F.p2901 == v1962)) {
F.p2904 = yr1846_LoText(F.v6873);
} else if ((F.p2901 == v1965)) {
F.p2904 = yr1852_HiText(F.v6873);
} else {
yr986_SB();
if ((!(((*(yR100 *)rt_nil_check(F.v6873))).f_lo == INT64_C(0)))) {
yr997_SA(y_str("rt_range(", 9));
}
if ((F.p2901 == v1956)) {
yr997_SA(y_str("rt_add(", 7));
} else {
yr997_SA(y_str("rt_sub(", 7));
}
yr1004_ST(F.v6863);
yr997_SA(y_str(", 1)", 4));
if ((!(((*(yR100 *)rt_nil_check(F.v6873))).f_lo == INT64_C(0)))) {
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1846_LoText(F.v6873));
yr997_SA(y_str(", ", 2));
yr1004_ST(yr1852_HiText(F.v6873));
yr997_SA(y_str(")", 1));
}
F.p2904 = yr1016_SE();
}
if ((!(((*(yR100 *)rt_nil_check(F.v6873))).f_kind == v774))) {
F.p2905 = F.v6873;
}
(*F.p2904_o) = F.p2904;
(*F.p2905_o) = F.p2905;
return;
}
if ((F.p2901 == v1968)) {
yr2850_NArgs(F.p2902, INT64_C(1));
yr2871_StdVar(yr2843_Arg(F.p2902, INT64_C(1)), v798, &F.v6863, &F.v6873);
if ((((*(yR100 *)rt_nil_check(F.v6873))).f_elem == ((void *)0))) {
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2902))).f_line, ((*(yR100 *)rt_nil_check(F.v6873))).f_forward, y_str(" is not declared", 16));
}
F.v6879 = ((*(yR100 *)rt_nil_check(F.v6873))).f_elem;
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(F.v6863);
yr997_SA(y_str(" = rt_alloc(sizeof(", 19));
yr1004_ST(yr1765_CType(F.v6879));
yr997_SA(y_str("));", 3));
if (yr1753_Deep(F.v6879)) {
yr997_SA(y_str(" y_init(", 8));
yr1004_ST(yr1771_DescOf(F.v6879));
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6863);
yr997_SA(y_str(");", 2));
}
yr997_SA(y_str(" })", 3));
F.p2904 = yr1016_SE();
(*F.p2904_o) = F.p2904;
(*F.p2905_o) = F.p2905;
return;
}
if ((F.p2901 == v2046)) {
yr2850_NArgs(F.p2902, INT64_C(1));
yr2871_StdVar(yr2843_Arg(F.p2902, INT64_C(1)), v798, &F.v6863, &F.v6873);
F.p2904 = yr2595_Join(yr1021_T(y_str("({ free(", 8)), F.v6863, yr2595_Join(yr1021_T(y_str("); ", 3)), F.v6863, yr1021_T(y_str(" = 0; })", 8))));
(*F.p2904_o) = F.p2904;
(*F.p2905_o) = F.p2905;
return;
}
if ((F.p2901 == v1971)) {
yr2850_NArgs(F.p2902, INT64_C(3));
yr2871_StdVar(yr2843_Arg(F.p2902, INT64_C(1)), v801, &F.v6863, &F.v6873);
yr2192_Expr(yr2843_Arg(F.p2902, INT64_C(2)), v1696, &F.v6865, &F.v6875);
if ((!yr1747_IsString(F.v6875))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2902))).f_line, y_str("OPEN takes the name of the file as a string (XII.A)", 51));
}
yr2192_Expr(yr2843_Arg(F.p2902, INT64_C(3)), v2910, &F.v6867, &F.v6877);
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.p2902))).f_line, v2910, F.v6877);
yr986_SB();
yr997_SA(y_str("y_open(&", 8));
yr1004_ST(F.v6863);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6865);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6867);
yr997_SA(y_str(")", 1));
F.p2904 = yr1016_SE();
(*F.p2904_o) = F.p2904;
(*F.p2905_o) = F.p2905;
return;
}
if ((((F.p2901 == v1974)) || ((F.p2901 == v1983)))) {
yr2850_NArgs(F.p2902, INT64_C(1));
yr2871_StdVar(yr2843_Arg(F.p2902, INT64_C(1)), v801, &F.v6863, &F.v6873);
if ((F.p2901 == v1974)) {
F.p2904 = yr2857_Call1(y_str("y_close", 7), yr2865_Addr(F.v6863));
} else {
F.p2905 = v1694;
F.p2904 = yr2857_Call1(y_str("y_check_eof", 11), yr2865_Addr(F.v6863));
}
(*F.p2904_o) = F.p2904;
(*F.p2905_o) = F.p2905;
return;
}
if ((F.p2901 == v1977)) {
yr2850_NArgs(F.p2902, INT64_C(2));
yr2871_StdVar(yr2843_Arg(F.p2902, INT64_C(1)), v801, &F.v6863, &F.v6873);
yr2871_StdVar(yr2843_Arg(F.p2902, INT64_C(2)), v828, &F.v6865, &F.v6875);
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.p2902))).f_line, ((*(yR100 *)rt_nil_check(F.v6873))).f_elem, F.v6875);
if ((yr1753_Deep(F.v6875) || ((((*(yR100 *)rt_nil_check(F.v6875))).f_kind == v798)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2902))).f_line, y_str("files of this implementation hold no arrays or pointers", 55));
}
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(yr1765_CType(F.v6875));
yr997_SA(y_str(" g; y_get(&", 11));
yr1004_ST(F.v6863);
yr997_SA(y_str(", &g, sizeof g); ", 17));
yr1004_ST(F.v6865);
yr997_SA(y_str(" = ", 3));
yr1004_ST(yr2125_Convert(yr1021_T(y_str("g", 1)), F.v6875, ((*(yR100 *)rt_nil_check(F.v6873))).f_elem));
yr997_SA(y_str("; })", 4));
F.p2904 = yr1016_SE();
(*F.p2904_o) = F.p2904;
(*F.p2905_o) = F.p2905;
return;
}
if ((F.p2901 == v1980)) {
yr2850_NArgs(F.p2902, INT64_C(2));
yr2871_StdVar(yr2843_Arg(F.p2902, INT64_C(1)), v801, &F.v6863, &F.v6873);
yr2192_Expr(yr2843_Arg(F.p2902, INT64_C(2)), ((*(yR100 *)rt_nil_check(F.v6873))).f_elem, &F.v6865, &F.v6875);
yr1798_CheckType(((*(yR95 *)rt_nil_check(F.p2902))).f_line, ((*(yR100 *)rt_nil_check(F.v6873))).f_elem, F.v6875);
if ((yr1753_Deep(F.v6875) || ((((*(yR100 *)rt_nil_check(F.v6875))).f_kind == v798)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2902))).f_line, y_str("files of this implementation hold no arrays or pointers", 55));
}
yr986_SB();
yr997_SA(y_str("({ ", 3));
yr1004_ST(yr1765_CType(((*(yR100 *)rt_nil_check(F.v6873))).f_elem));
yr997_SA(y_str(" pv = ", 6));
yr1004_ST(yr2125_Convert(F.v6865, ((*(yR100 *)rt_nil_check(F.v6873))).f_elem, F.v6875));
yr997_SA(y_str("; y_put(&", 9));
yr1004_ST(F.v6863);
yr997_SA(y_str(", &pv, sizeof pv); })", 21));
F.p2904 = yr1016_SE();
(*F.p2904_o) = F.p2904;
(*F.p2905_o) = F.p2905;
return;
}
if ((F.p2901 == v1986)) {
F.v6881 = yr1260_Count(((*(yR95 *)rt_nil_check(F.p2902))).f_a);
if ((((F.v6881 < INT64_C(5))) || ((!((rt_mod((rt_sub(F.v6881, INT64_C(2))), INT64_C(3))) == INT64_C(0)))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2902))).f_line, y_str("MOVE takes an object, an index and triples", 42));
}
yr2871_StdVar(yr2843_Arg(F.p2902, INT64_C(1)), v828, &F.v6863, &F.v6873);
if (((!((((((*(yR100 *)rt_nil_check(F.v6873))).f_kind == v792)) || ((((*(yR100 *)rt_nil_check(F.v6873))).f_kind == v813))))) || ((!(((*(yR100 *)rt_nil_check(F.v6873))).f_nidx == INT64_C(1)))))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2902))).f_line, y_str("MOVE works on one-dimensional arrays", 36));
}
F.v6865 = yr2888_IntArg(yr2843_Arg(F.p2902, INT64_C(2)));
F.v6871 = yr1146_Fresh(y_str("at", 2));
yr986_SB();
yr997_SA(y_str("({ rt_int ", 10));
yr1004_ST(F.v6871);
yr997_SA(y_str(" = ", 3));
yr1004_ST(F.v6865);
yr997_SA(y_str(";", 1));
F.p2904 = yr1016_SE();
F.v6883 = INT64_C(3);
while ((F.v6883 < F.v6881)) {
yr2192_Expr(yr2843_Arg(F.p2902, F.v6883), ((*(yR100 *)rt_nil_check(F.v6873))).f_elem, &F.v6867, &F.v6877);
if (((!yr1741_IsArrayLike(F.v6877)) || (!yr1783_SameType(((*(yR100 *)rt_nil_check(F.v6873))).f_elem, ((*(yR100 *)rt_nil_check(F.v6877))).f_elem)))) {
yr1124_FailS(((*(yR95 *)rt_nil_check(F.p2902))).f_line, y_str("MOVE: the components differ in type", 35));
}
F.v6869 = yr2888_IntArg(yr2843_Arg(F.p2902, rt_range(rt_add(F.v6883, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v6865 = yr2888_IntArg(yr2843_Arg(F.p2902, rt_range(rt_add(F.v6883, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr986_SB();
yr1004_ST(F.p2904);
yr997_SA(y_str(" { rt_int mi = ", 15));
yr1004_ST(F.v6869);
yr997_SA(y_str(", mj = ", 7));
yr1004_ST(F.v6865);
yr997_SA(y_str("; y_move(&", 10));
yr1004_ST(F.v6863);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6871);
yr997_SA(y_str(", ", 2));
yr1004_ST(F.v6867);
yr997_SA(y_str(", mi, mj, ", 10));
yr1004_ST(yr1771_DescOf(((*(yR100 *)rt_nil_check(F.v6873))).f_elem));
yr997_SA(y_str("); if (mj >= mi) ", 17));
yr1004_ST(F.v6871);
yr997_SA(y_str(" += mj - mi + 1; }", 18));
F.p2904 = yr1016_SE();
F.v6883 = rt_range(rt_add(F.v6883, INT64_C(3)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.p2904 = yr2595_Join(F.p2904, yr1021_T(y_str(" })", 3)), INT64_C(0));
(*F.p2904_o) = F.p2904;
(*F.p2905_o) = F.p2905;
return;
}
if ((((F.p2901 == v1989)) || ((F.p2901 == v1992)))) {
yr2850_NArgs(F.p2902, INT64_C(2));
F.v6863 = yr2565_Cond(yr2843_Arg(F.p2902, INT64_C(1)));
F.v6865 = yr2565_Cond(yr2843_Arg(F.p2902, INT64_C(2)));
F.p2905 = v1694;
if ((F.p2901 == v1989)) {
F.p2904 = yr2251_Infix(yr2173_Paren(yr2251_Infix(F.v6863, y_str("!=", 2), yr1021_T(y_str("0", 1)))), y_str("&", 1), yr2173_Paren(yr2251_Infix(F.v6865, y_str("!=", 2), yr1021_T(y_str("0", 1)))));
} else {
F.p2904 = yr2251_Infix(yr2173_Paren(yr2251_Infix(F.v6863, y_str("!=", 2), yr1021_T(y_str("0", 1)))), y_str("|", 1), yr2173_Paren(yr2251_Infix(F.v6865, y_str("!=", 2), yr1021_T(y_str("0", 1)))));
}
(*F.p2904_o) = F.p2904;
(*F.p2905_o) = F.p2905;
return;
}
if ((F.p2901 == v1995)) {
yr2850_NArgs(F.p2902, INT64_C(1));
F.p2904 = yr2857_Call1(y_str("rt_delay", 8), yr2888_IntArg(yr2843_Arg(F.p2902, INT64_C(1))));
(*F.p2904_o) = F.p2904;
(*F.p2905_o) = F.p2905;
return;
}
if ((F.p2901 == v1998)) {
yr2850_NArgs(F.p2902, INT64_C(0));
F.p2905 = yr2236_Unbounded(v1692);
F.p2904 = yr1021_T(y_str("rt_time()", 9));
(*F.p2904_o) = F.p2904;
(*F.p2905_o) = F.p2905;
return;
}
if (((((F.p2901 == v2001)) || ((F.p2901 == v2004))) || ((F.p2901 == v2007)))) {
yr2871_StdVar(yr2843_Arg(F.p2902, INT64_C(1)), v807, &F.v6863, &F.v6873);
if ((F.p2901 == v2001)) {
if ((yr1260_Count(((*(yR95 *)rt_nil_check(F.p2902))).f_a) == INT64_C(1))) {
F.v6865 = yr1021_T(y_str("1", 1));
} else {
yr2850_NArgs(F.p2902, INT64_C(2));
F.v6865 = yr2888_IntArg(yr2843_Arg(F.p2902, INT64_C(2)));
}
F.p2904 = yr2242_Call2(y_str("y_wait", 6), yr2865_Addr(F.v6863), F.v6865);
} else {
yr2850_NArgs(F.p2902, INT64_C(1));
if ((F.p2901 == v2004)) {
F.p2904 = yr2857_Call1(y_str("y_send", 6), yr2865_Addr(F.v6863));
} else {
F.p2905 = v1694;
F.p2904 = yr2857_Call1(y_str("y_awaited", 9), yr2865_Addr(F.v6863));
}
}
(*F.p2904_o) = F.p2904;
(*F.p2905_o) = F.p2905;
return;
}
if (((((F.p2901 == v2010)) || ((F.p2901 == v2013))) || ((F.p2901 == v2016)))) {
yr2850_NArgs(F.p2902, INT64_C(1));
yr2880_NumArg(yr2843_Arg(F.p2902, INT64_C(1)), &F.v6863, &F.v6873);
F.p2905 = yr2236_Unbounded(v1692);
if ((((*(yR100 *)rt_nil_check(F.v6873))).f_kind == v774)) {
F.p2904 = F.v6863;
} else if ((F.p2901 == v2010)) {
F.p2904 = yr2857_Call1(y_str("y_floor", 7), F.v6863);
} else if ((F.p2901 == v2013)) {
F.p2904 = yr2857_Call1(y_str("y_ceiling", 9), F.v6863);
} else {
F.p2904 = yr2857_Call1(y_str("y_near_integer", 14), F.v6863);
}
(*F.p2904_o) = F.p2904;
(*F.p2905_o) = F.p2905;
return;
}
if ((F.p2901 == v2022)) {
yr2850_NArgs(F.p2902, INT64_C(1));
yr2880_NumArg(yr2843_Arg(F.p2902, INT64_C(1)), &F.v6863, &F.v6873);
F.p2905 = v1704;
F.p2904 = yr2595_Join(yr1021_T(y_str("((double)(", 10)), F.v6863, yr1021_T(y_str("))", 2)));
(*F.p2904_o) = F.p2904;
(*F.p2905_o) = F.p2905;
return;
}
if ((F.p2901 == v2019)) {
yr2850_NArgs(F.p2902, INT64_C(2));
yr2880_NumArg(yr2843_Arg(F.p2902, INT64_C(1)), &F.v6863, &F.v6873);
yr2880_NumArg(yr2843_Arg(F.p2902, INT64_C(2)), &F.v6865, &F.v6875);
F.p2905 = v1706;
F.p2904 = yr2242_Call2(y_str("y_near_fixed", 12), yr2595_Join(yr1021_T(y_str("(double)(", 9)), F.v6863, yr1021_T(y_str(")", 1))), F.v6865);
(*F.p2904_o) = F.p2904;
(*F.p2905_o) = F.p2905;
return;
}
if ((F.p2901 == v2025)) {
yr2850_NArgs(F.p2902, INT64_C(3));
yr2880_NumArg(yr2843_Arg(F.p2902, INT64_C(1)), &F.v6863, &F.v6873);
yr2880_NumArg(yr2843_Arg(F.p2902, INT64_C(2)), &F.v6865, &F.v6875);
yr2880_NumArg(yr2843_Arg(F.p2902, INT64_C(3)), &F.v6867, &F.v6877);
F.p2905 = v1706;
F.p2904 = yr2595_Join(yr1021_T(y_str("y_fixed_div(", 12)), F.v6863, yr2595_Join(yr1021_T(y_str(", ", 2)), F.v6865, yr2595_Join(yr1021_T(y_str(", ", 2)), F.v6867, yr1021_T(y_str(")", 1)))));
(*F.p2904_o) = F.p2904;
(*F.p2905_o) = F.p2905;
return;
}
if (((((F.p2901 == v2028)) || ((F.p2901 == v2031))) || ((F.p2901 == v2034)))) {
yr2850_NArgs(F.p2902, INT64_C(1));
yr2871_StdVar(yr2843_Arg(F.p2902, INT64_C(1)), v810, &F.v6863, &F.v6873);
if ((F.p2901 == v2028)) {
F.p2904 = yr2857_Call1(y_str("rt_region_enter", 15), yr2865_Addr(F.v6863));
} else if ((F.p2901 == v2031)) {
F.p2904 = yr2857_Call1(y_str("rt_region_leave", 15), yr2865_Addr(F.v6863));
} else {
F.p2905 = v1694;
F.p2904 = yr2857_Call1(y_str("y_cond_claim", 12), yr2865_Addr(F.v6863));
}
(*F.p2904_o) = F.p2904;
(*F.p2905_o) = F.p2905;
return;
}
if ((F.p2901 == v2037)) {
yr2850_NArgs(F.p2902, INT64_C(0));
F.p2905 = yr2236_Unbounded(v1692);
F.p2904 = yr1021_T(y_str("y_self()", 8));
(*F.p2904_o) = F.p2904;
(*F.p2905_o) = F.p2905;
return;
}
if ((F.p2901 == v2040)) {
yr2850_NArgs(F.p2902, INT64_C(2));
F.p2904 = yr2242_Call2(y_str("y_change_priority", 17), yr2888_IntArg(yr2843_Arg(F.p2902, INT64_C(1))), yr2888_IntArg(yr2843_Arg(F.p2902, INT64_C(2))));
(*F.p2904_o) = F.p2904;
(*F.p2905_o) = F.p2905;
return;
}
if ((F.p2901 == v2043)) {
yr2850_NArgs(F.p2902, INT64_C(1));
F.p2904 = yr2857_Call1(y_str("y_raise_termination", 19), yr2888_IntArg(yr2843_Arg(F.p2902, INT64_C(1))));
(*F.p2904_o) = F.p2904;
(*F.p2905_o) = F.p2905;
return;
}
if ((F.p2901 == v2049)) {
yr2850_NArgs(F.p2902, INT64_C(1));
yr2894_CodeInsert(F.p2902);
(*F.p2904_o) = F.p2904;
(*F.p2905_o) = F.p2905;
return;
}
if ((((F.p2901 == v2052)) || ((F.p2901 == v2055)))) {
yr2850_NArgs(F.p2902, INT64_C(1));
yr2192_Expr(yr2843_Arg(F.p2902, INT64_C(1)), ((void *)0), &F.v6863, &F.v6873);
F.p2905 = yr2236_Unbounded(v1692);
if ((F.p2901 == v2052)) {
F.p2904 = yr2595_Join(yr1021_T(y_str("((rt_int)(intptr_t)&(", 21)), F.v6863, yr1021_T(y_str("))", 2)));
} else {
F.p2904 = yr2595_Join(yr1021_T(y_str("((rt_int)sizeof(", 16)), F.v6863, yr1021_T(y_str("))", 2)));
}
(*F.p2904_o) = F.p2904;
(*F.p2905_o) = F.p2905;
return;
}
yr1132_FailN(((*(yR95 *)rt_nil_check(F.p2902))).f_line, ((*(yR95 *)rt_nil_check(F.p2902))).f_name, y_str(" is not translated", 18));
(*F.p2904_o) = F.p2904;
(*F.p2905_o) = F.p2905;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2914_StdRep(yarr a_p2916, void * a_p2917) {
struct yf2918 F;
memset((void *)&F, 0, sizeof F);
F.p2916 = a_p2916;
F.p2917 = a_p2917;
F.v7081 = yr1597_NewSym(v840, yr1041_N(F.p2916));
((*(yR115 *)rt_nil_check(F.v7081))).f_rep = F.p2917;
yr1653_Define(F.v7081, INT64_C(0));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2922_StdOp(yarr a_p2924, rt_int a_p2925) {
struct yf2926 F;
memset((void *)&F, 0, sizeof F);
F.p2924 = a_p2924;
F.p2925 = a_p2925;
F.v7087 = yr1597_NewSym(v861, yr1041_N(F.p2924));
((*(yR115 *)rt_nil_check(F.v7087))).f_mval = F.p2925;
yr1653_Define(F.v7087, INT64_C(0));
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2930_LitList(yarr a_p2932, yarr a_p2933, yarr a_p2934, rt_int a_p2935) {
struct yf2936 F;
memset((void *)&F, 0, sizeof F);
F.p2932 = a_p2932;
F.p2933 = a_p2933;
F.p2934 = a_p2934;
F.p2935 = a_p2935;
F.v7095 = ((void *)0);
F.v7097 = ((void *)0);
F.v7099 = ((void *)0);
F.v7099 = yr1245_NewNode(v639, INT64_C(0));
((*(yR95 *)rt_nil_check(F.v7099))).f_name = yr1041_N(F.p2932);
yr1252_Link(&F.v7095, &F.v7097, F.v7099);
F.v7099 = yr1245_NewNode(v639, INT64_C(0));
((*(yR95 *)rt_nil_check(F.v7099))).f_name = yr1041_N(F.p2933);
yr1252_Link(&F.v7095, &F.v7097, F.v7099);
if (F.p2935) {
F.v7099 = yr1245_NewNode(v639, INT64_C(0));
((*(yR95 *)rt_nil_check(F.v7099))).f_name = yr1041_N(F.p2934);
yr1252_Link(&F.v7095, &F.v7097, F.v7099);
}
{ void * rv7103 = F.v7095;
return rv7103; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2940_Abstract(rt_int a_p2941, yarr a_p2943) {
struct yf2944 F;
memset((void *)&F, 0, sizeof F);
F.p2941 = a_p2941;
F.p2943 = a_p2943;
F.v7108 = yr1716_NewRep(F.p2941, yr1041_N(F.p2943));
((*(yR100 *)rt_nil_check(F.v7108))).f_abstract = 1;
{ void * rv7110 = F.v7108;
return rv7110; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2948_Predefine(void) {
struct yf2949 F;
memset((void *)&F, 0, sizeof F);
yr1604_OpenScope(0);
((void * *)(v2714).p)[y_ix1(v2714, v1570)] = ((void *)0);
v1692 = yr2940_Abstract(v774, y_str("INTEGER", 7));
v1706 = yr2940_Abstract(v777, y_str("FIXED", 5));
v1704 = yr2940_Abstract(v780, y_str("FLOATING", 8));
v1708 = yr1716_NewRep(v807, yr1041_N(y_str("SIGNAL", 6)));
v1710 = yr1716_NewRep(v810, yr1041_N(y_str("SEMAPHORE", 9)));
v1698 = yr1716_NewRep(v822, yr1041_N(y_str("no value", 8)));
v1712 = yr1716_NewRep(v828, yr1041_N(y_str("any", 3)));
v1694 = yr1716_NewRep(v783, yr1041_N(y_str("BOOLEAN", 7)));
((*(yR100 *)rt_nil_check(v1694))).f_lits = yr2930_LitList(y_str("FALSE", 5), y_str("TRUE", 4), y_str("", 0), 0);
((*(yR100 *)rt_nil_check(v1694))).f_nlits = INT64_C(2);
yr1871_SetRange(v1694, INT64_C(0), INT64_C(1));
yr1865_DefineLits(v1694);
v1696 = yr1716_NewRep(v789, yr1041_N(y_str("ASCII", 5)));
((*(yR100 *)rt_nil_check(v1696))).f_ordered = 1;
((*(yR100 *)rt_nil_check(v1696))).f_nlits = INT64_C(128);
yr1871_SetRange(v1696, INT64_C(0), INT64_C(127));
v2910 = yr1716_NewRep(v786, yr1041_N(y_str("OPEN_MODE", 9)));
((*(yR100 *)rt_nil_check(v2910))).f_lits = yr2930_LitList(y_str("READ", 4), y_str("WRITE", 5), y_str("APPEND", 6), 1);
((*(yR100 *)rt_nil_check(v2910))).f_nlits = INT64_C(3);
yr1871_SetRange(v2910, INT64_C(0), INT64_C(2));
yr1865_DefineLits(v2910);
yr2914_StdRep(y_str("INTEGER", 7), v1692);
yr2914_StdRep(y_str("FIXED", 5), v1706);
yr2914_StdRep(y_str("FLOATING", 8), v1704);
yr2914_StdRep(y_str("BOOLEAN", 7), v1694);
yr2914_StdRep(y_str("SIGNAL", 6), v1708);
yr2914_StdRep(y_str("SEMAPHORE", 9), v1710);
yr2914_StdRep(y_str("ASCII", 5), v1696);
yr2914_StdRep(y_str("STANDARD_ALPHABET", 17), v1696);
yr2914_StdRep(y_str("OPEN_MODE", 9), v2910);
yr2922_StdOp(y_str("LOW", 3), v1950);
yr2922_StdOp(y_str("HIGH", 4), v1953);
yr2922_StdOp(y_str("SUCC", 4), v1956);
yr2922_StdOp(y_str("PRED", 4), v1959);
yr2922_StdOp(y_str("FIRST", 5), v1962);
yr2922_StdOp(y_str("LAST", 4), v1965);
yr2922_StdOp(y_str("NEW", 3), v1968);
yr2922_StdOp(y_str("OPEN", 4), v1971);
yr2922_StdOp(y_str("CLOSE", 5), v1974);
yr2922_StdOp(y_str("GET", 3), v1977);
yr2922_StdOp(y_str("PUT", 3), v1980);
yr2922_StdOp(y_str("CHECK_EOF", 9), v1983);
yr2922_StdOp(y_str("MOVE", 4), v1986);
yr2922_StdOp(y_str("AND_LONG", 8), v1989);
yr2922_StdOp(y_str("OR_LONG", 7), v1992);
yr2922_StdOp(y_str("DELAY", 5), v1995);
yr2922_StdOp(y_str("CLOCK_TIME", 10), v1998);
yr2922_StdOp(y_str("WAIT", 4), v2001);
yr2922_StdOp(y_str("SEND", 4), v2004);
yr2922_StdOp(y_str("AWAITED", 7), v2007);
yr2922_StdOp(y_str("FLOOR", 5), v2010);
yr2922_StdOp(y_str("CEILING", 7), v2013);
yr2922_StdOp(y_str("NEAR_INTEGER", 12), v2016);
yr2922_StdOp(y_str("NEAR_FIXED", 10), v2019);
yr2922_StdOp(y_str("NEAR_FLOATING", 13), v2022);
yr2922_StdOp(y_str("FIXED_DIV", 9), v2025);
yr2922_StdOp(y_str("CLAIM", 5), v2028);
yr2922_StdOp(y_str("RELEASE", 7), v2031);
yr2922_StdOp(y_str("CONDITIONAL_CLAIM", 17), v2034);
yr2922_StdOp(y_str("PROCESS_IDENTITY", 16), v2037);
yr2922_StdOp(y_str("CHANGE_PRIORITY", 15), v2040);
yr2922_StdOp(y_str("RAISE_PROCESS_TERMINATION", 25), v2043);
yr2922_StdOp(y_str("FREE_POINTER", 12), v2046);
yr2922_StdOp(y_str("C_CODE_INSERT", 13), v2049);
yr2922_StdOp(y_str("ADDR", 4), v2052);
yr2922_StdOp(y_str("EXTENT", 6), v2055);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2953_Translate(void) {
struct yf2954 F;
memset((void *)&F, 0, sizeof F);
F.v7188 = v2912;
yr1604_OpenScope(0);
((void * *)(v2714).p)[y_ix1(v2714, v1570)] = ((void *)0);
v1576 = INT64_C(0);
((void * *)(v1595).p)[y_ix1(v1595, v1570)] = v2912;
while ((!(F.v7188 == ((void *)0)))) {
if ((((*(yR95 *)rt_nil_check(F.v7188))).f_ival == INT64_C(0))) {
yr2763_CompileModule(F.v7188);
}
F.v7188 = ((*(yR95 *)rt_nil_check(F.v7188))).f_next;
}
yr2787_AwaitProcesses();
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2958_WriteProgram(void) {
struct yf2959 F;
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
{ static const size_t o[] = {offsetof(yR100, f_kind), offsetof(yR100, f_tid), offsetof(yR100, f_tname), offsetof(yR100, f_lo), offsetof(yR100, f_hi), offsetof(yR100, f_mlo), offsetof(yR100, f_mhi), offsetof(yR100, f_hasm), offsetof(yR100, f_scale), offsetof(yR100, f_prec), offsetof(yR100, f_elem), offsetof(yR100, f_idx), offsetof(yR100, f_nidx), offsetof(yR100, f_link), offsetof(yR100, f_lits), offsetof(yR100, f_nlits), offsetof(yR100, f_fields), offsetof(yR100, f_selector), offsetof(yR100, f_cname), offsetof(yR100, f_dname), offsetof(yR100, f_dlevel), offsetof(yR100, f_deep), offsetof(yR100, f_abstract), offsetof(yR100, f_opaque), offsetof(yR100, f_opaqueops), offsetof(yR100, f_ordered), offsetof(yR100, f_forward), offsetof(yR100, f_fwdscope), offsetof(yR100, f_monitor), offsetof(yR100, f_serial), offsetof(yR100, f_sig), 0}; const ydesc **f = rt_alloc(32 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_int; f[2] = &y_d_int; f[3] = &y_d_int; f[4] = &y_d_int; f[5] = &y_d_int; f[6] = &y_d_int; f[7] = &y_d_int; f[8] = &y_d_int; f[9] = &y_d_int; f[10] = &y_d_ptr; f[11] = &y_d_ptr; f[12] = &y_d_int; f[13] = &y_d_ptr; f[14] = &y_d_ptr; f[15] = &y_d_int; f[16] = &y_d_ptr; f[17] = &y_d_ptr; f[18] = &y_d_int; f[19] = &y_d_int; f[20] = &y_d_int; f[21] = &y_d_int; f[22] = &y_d_int; f[23] = &y_d_int; f[24] = &y_d_int; f[25] = &y_d_int; f[26] = &y_d_int; f[27] = &y_d_int; f[28] = &y_d_ptr; f[29] = &y_d_int; f[30] = &y_d_int; y_desc_record(&yd_101, sizeof(yR100), 31, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR105, f_name), offsetof(yR105, f_rep), offsetof(yR105, f_isconst), offsetof(yR105, f_variant), offsetof(yR105, f_labels), offsetof(yR105, f_next), 0}; const ydesc **f = rt_alloc(7 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_ptr; f[2] = &y_d_int; f[3] = &y_d_int; f[4] = &y_d_ptr; f[5] = &y_d_ptr; y_desc_record(&yd_106, sizeof(yR105), 6, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR110, f_name), offsetof(yR110, f_cls), offsetof(yR110, f_rep), offsetof(yR110, f_cname), offsetof(yR110, f_next), 0}; const ydesc **f = rt_alloc(6 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_int; f[2] = &y_d_ptr; f[3] = &y_d_int; f[4] = &y_d_ptr; y_desc_record(&yd_111, sizeof(yR110), 5, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR115, f_kind), offsetof(yR115, f_name), offsetof(yR115, f_rep), offsetof(yR115, f_cname), offsetof(yR115, f_level), offsetof(yR115, f_byref), offsetof(yR115, f_readonly), offsetof(yR115, f_mval), offsetof(yR115, f_hasmv), offsetof(yR115, f_params), offsetof(yR115, f_nparams), offsetof(yR115, f_ret), offsetof(yR115, f_func), offsetof(yR115, f_decl), offsetof(yR115, f_depth), offsetof(yR115, f_target), offsetof(yR115, f_members), offsetof(yR115, f_mnext), offsetof(yR115, f_chain), offsetof(yR115, f_stack), offsetof(yR115, f_alt), offsetof(yR115, f_monitor), offsetof(yR115, f_serial), offsetof(yR115, f_calls), 0}; const ydesc **f = rt_alloc(25 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_int; f[2] = &y_d_ptr; f[3] = &y_d_int; f[4] = &y_d_int; f[5] = &y_d_int; f[6] = &y_d_int; f[7] = &y_d_int; f[8] = &y_d_int; f[9] = &y_d_ptr; f[10] = &y_d_int; f[11] = &y_d_ptr; f[12] = &y_d_int; f[13] = &y_d_ptr; f[14] = &y_d_int; f[15] = &y_d_ptr; f[16] = &y_d_ptr; f[17] = &y_d_ptr; f[18] = &y_d_ptr; f[19] = &y_d_ptr; f[20] = &y_d_ptr; f[21] = &y_d_ptr; f[22] = &y_d_int; f[23] = &y_d_ptr; y_desc_record(&yd_116, sizeof(yR115), 24, o, (const ydesc *const *)f); }
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
v1950 = INT64_C(1);
v1953 = INT64_C(2);
v1956 = INT64_C(3);
v1959 = INT64_C(4);
v1962 = INT64_C(5);
v1965 = INT64_C(6);
v1968 = INT64_C(7);
v1971 = INT64_C(8);
v1974 = INT64_C(9);
v1977 = INT64_C(10);
v1980 = INT64_C(11);
v1983 = INT64_C(12);
v1986 = INT64_C(13);
v1989 = INT64_C(14);
v1992 = INT64_C(15);
v1995 = INT64_C(16);
v1998 = INT64_C(17);
v2001 = INT64_C(18);
v2004 = INT64_C(19);
v2007 = INT64_C(20);
v2010 = INT64_C(21);
v2013 = INT64_C(22);
v2016 = INT64_C(23);
v2019 = INT64_C(24);
v2022 = INT64_C(25);
v2025 = INT64_C(26);
v2028 = INT64_C(27);
v2031 = INT64_C(28);
v2034 = INT64_C(29);
v2037 = INT64_C(30);
v2040 = INT64_C(31);
v2043 = INT64_C(32);
v2046 = INT64_C(33);
v2049 = INT64_C(34);
v2052 = INT64_C(35);
v2055 = INT64_C(36);
v2058 = INT64_C(0);
v2061 = ((void *)0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_2289, 1, lo, hi, &y_d_int); }
y_init(&yd_2289, &v2291);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_2298, 1, lo, hi, &y_d_ptr); }
y_init(&yd_2298, &v2300);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_2307, 1, lo, hi, &y_d_ptr); }
y_init(&yd_2307, &v2309);
v2311 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2444, 1, lo, hi, &y_d_int); }
y_init(&yd_2444, &v2446);
v2448 = INT64_C(0);
v2451 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2459, 1, lo, hi, &y_d_int); }
y_init(&yd_2459, &v2461);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2468, 1, lo, hi, &y_d_int); }
y_init(&yd_2468, &v2470);
v2472 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2480, 1, lo, hi, &y_d_int); }
y_init(&yd_2480, &v2482);
v2484 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2492, 1, lo, hi, &y_d_int); }
y_init(&yd_2492, &v2494);
y_init(&yd_2492, &v2496);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_2503, 1, lo, hi, &y_d_int); }
y_init(&yd_2503, &v2505);
v2507 = INT64_C(0);
v2510 = INT64_C(0);
v2513 = ((void *)0);
v2515 = 0;
v2705 = ((void *)0);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_2712, 1, lo, hi, &y_d_ptr); }
y_init(&yd_2712, &v2714);
v2731 = INT64_C(0);
yr963_InitChars();
yr1177_InitWords();
v1239 = yr1041_N(y_str("FROM", 4));
v1242 = yr1041_N(y_str("DIMENSION", 9));
v2058 = yr1021_T(y_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP DEL SQ DQ ", 128));
y_open(&v881, y_str("OUTPUT", 6), 1);
yr1182_ReadSource();
yr1229_Lex();
v2912 = yr1554_ParseProgram();
yr2948_Predefine();
yr2953_Translate();
yr2958_WriteProgram();
y_close(&v881);
}
int main(int argc, char **argv) {
y_lang();
rt_init(argc, argv);
y_elaborate();
rt_main_done();
return 0;
}
