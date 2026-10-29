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
struct yf1765;
struct yf1770;
struct yf1777;
struct yf1783;
struct yf1788;
struct yf1794;
struct yf1801;
struct yf1808;
struct yf1814;
struct yf1819;
struct yf1824;
struct yf1831;
struct yf1839;
struct yf1845;
struct yf1850;
struct yf1855;
struct yf1860;
struct yf1867;
struct yf1873;
struct yf1879;
struct yf1884;
struct yf1890;
struct yf1895;
struct yf1901;
struct yf1906;
struct yf1913;
struct yf1918;
struct yf1924;
struct yf1929;
struct yf1934;
struct yf1939;
struct yf1944;
struct yf1949;
struct yf1954;
struct yf1960;
struct yf1966;
struct yf1973;
struct yf1978;
struct yf1984;
struct yf1989;
struct yf1995;
struct yf2000;
struct yf2005;
struct yf2010;
struct yf2015;
struct yf2020;
struct yf2025;
struct yf2030;
struct yf2036;
struct yf2041;
struct yf2046;
struct yf2052;
struct yf2058;
struct yf2064;
struct yf2070;
struct yf2076;
struct yf2085;
struct yf2092;
struct yf2097;
struct yf2102;
struct yf2107;
struct yf2113;
struct yf2118;
struct yf2123;
struct yf2128;
struct yf2133;
struct yf2138;
struct yf2145;
struct yf2151;
struct yf2157;
struct yf2162;
struct yf2168;
struct yf2174;
struct yf2180;
struct yf2187;
struct yf2193;
struct yf2200;
struct yf2207;
struct yf2214;
struct yf2220;
struct yf2226;
struct yf2233;
struct yf2240;
struct yf2247;
struct yf2253;
struct yf2260;
struct yf2266;
struct yf2272;
struct yf2279;
struct yf2285;
struct yf2291;
struct yf2297;
struct yf2303;
struct yf2309;
struct yf2315;
struct yf2322;
struct yf2328;
struct yf2334;
struct yf2340;
struct yf2346;
struct yf2352;
struct yf2359;
struct yf2367;
struct yf2375;
struct yf2382;
struct yf2388;
struct yf2394;
struct yf2401;
struct yf2407;
struct yf2415;
struct yf2421;
struct yf2427;
struct yf2435;
struct yf2441;
struct yf2448;
struct yf2456;
struct yf2464;
struct yf2474;
struct yf2481;
struct yf2489;
struct yf2496;
struct yf2502;
struct yf2510;
struct yf2516;
struct yf2524;
struct yf2531;
struct yf2539;
struct yf2546;
struct yf2551;
struct yf2557;
struct yf2570;
struct yf2581;
struct yf2589;
struct yf2596;
struct yf2603;
struct yf2610;
struct yf2618;
struct yf2627;
struct yf2635;
struct yf2643;
struct yf2650;
struct yf2658;
struct yf2666;
struct yf2674;
struct yf2685;
struct yf2693;
struct yf2702;
struct yf2708;
struct yf2716;
struct yf2726;
struct yf2736;
struct yf2742;
struct yf2748;
struct yf2756;
struct yf2762;
struct yf2769;
struct yf2775;
struct yf2784;
struct yf2792;
struct yf2801;
struct yf2809;
struct yf2819;
struct yf2825;
struct yf2834;
struct yf2843;
struct yf2852;
struct yf2858;
struct yf2865;
struct yf2874;
struct yf2881;
struct yf2889;
struct yf2895;
struct yf2904;
struct yf2912;
struct yf2919;
struct yf2928;
struct yf2934;
struct yf2945;
struct yf2952;
struct yf2962;
struct yf2972;
struct yf2982;
struct yf2991;
struct yf2999;
struct yf3007;
struct yf3017;
struct yf3023;
struct yf3028;
struct yf3034;
struct yf3040;
struct yf3047;
struct yf3055;
struct yf3062;
struct yf3068;
struct yf3074;
struct yf3081;
struct yf3086;
struct yf3092;
struct yf3098;
struct yf3106;
struct yf3112;
struct yf3118;
struct yf3124;
struct yf3130;
struct yf3136;
struct yf3142;
struct yf3148;
struct yf3154;
struct yf3161;
struct yf3168;
struct yf3174;
struct yf3182;
struct yf3188;
struct yf3195;
struct yf3202;
struct yf3211;
struct yf3218;
struct yf3224;
struct yf3230;
struct yf3236;
struct yf3243;
struct yf3251;
struct yf3258;
struct yf3266;
struct yf3272;
struct yf3281;
struct yf3288;
struct yf3295;
struct yf3301;
struct yf3309;
struct yf3317;
struct yf3324;
struct yf3330;
struct yf3336;
struct yf3342;
struct yf3348;
struct yf3353;
struct yf3360;
struct yf3366;
struct yf3372;
struct yf3377;
struct yf3383;
struct yf3390;
struct yf3397;
struct yf3404;
struct yf3411;
struct yf3418;
struct yf3426;
struct yf3432;
struct yf3441;
struct yf3449;
struct yf3455;
struct yf3461;
struct yf3468;
struct yf3478;
struct yf3486;
struct yf3494;
struct yf3504;
struct yf3512;
struct yf3517;
struct yf3522;
struct yf3527;
struct yR99 { rt_int f_kind; rt_int f_line; rt_int f_ival; rt_int f_flag; rt_int f_name; rt_int f_text; void * f_a; void * f_b; void * f_c; void * f_d; void * f_e; void * f_next; void * f_rep; void * f_sym; };
struct yR104 { rt_int f_kind; rt_int f_tid; rt_int f_tname; rt_int f_lo; rt_int f_hi; rt_int f_mlo; rt_int f_mhi; rt_int f_hasm; rt_int f_scale; rt_int f_prec; void * f_elem; void * f_idx; rt_int f_nidx; void * f_link; void * f_lits; rt_int f_nlits; void * f_fields; void * f_selector; rt_int f_cname; rt_int f_dname; rt_int f_dlevel; rt_int f_deep; rt_int f_abstract; rt_int f_opaque; rt_int f_opaqueops; rt_int f_ordered; rt_int f_forward; rt_int f_fwdscope; void * f_monitor; rt_int f_serial; rt_int f_sig; rt_int f_fsn; rt_int f_fsd; };
struct yR109 { rt_int f_name; void * f_rep; rt_int f_isconst; rt_int f_variant; void * f_labels; void * f_next; };
struct yR114 { rt_int f_name; rt_int f_cls; void * f_rep; rt_int f_cname; void * f_next; };
struct yR119 { rt_int f_kind; rt_int f_name; void * f_rep; rt_int f_cname; rt_int f_level; rt_int f_byref; rt_int f_readonly; rt_int f_mval; rt_int f_hasmv; void * f_params; rt_int f_nparams; void * f_ret; rt_int f_func; void * f_decl; rt_int f_depth; void * f_target; void * f_members; void * f_mnext; void * f_chain; void * f_stack; void * f_alt; void * f_monitor; rt_int f_serial; void * f_calls; };
struct yR124 { void * f_syms; rt_int f_closed; void * f_module; rt_int f_level; void * f_deferred; void * f_up; };
struct yR129 { rt_int f_t; void * f_next; };
struct yR134 { void * f_head; void * f_tail; };
struct yf984 { void *up;
rt_int v3532;
rt_int c_3535;
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
rt_int lo3571;
rt_int hi3572;
rt_int c_3574;
};
struct yf1026 { void *up;
rt_int p1025;
rt_int v3580;
};
struct yf1032 { void *up;
rt_int p1031;
ydesc yd_3595;
yarr v3597;
rt_int v3599;
rt_int v3602;
};
struct yf1037 { void *up;
rt_int v3621;
rt_int lo3632;
rt_int hi3633;
rt_int c_3635;
};
struct yf1044 { void *up;
yarr p1043;
};
struct yf1051 { void *up;
rt_int p1049;
rt_int p1050;
rt_int v3646;
rt_int v3649;
rt_int v3651;
rt_int lo3656;
rt_int hi3657;
rt_int c_3659;
rt_int lo3678;
rt_int hi3679;
rt_int c_3681;
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
rt_int lo3710;
rt_int hi3711;
rt_int c_3713;
};
struct yf1079 { void *up;
rt_int p1076;
yarr p1078;
rt_int v3726;
rt_int lo3742;
rt_int hi3743;
rt_int c_3745;
};
struct yf1086 { void *up;
rt_int p1084;
rt_int p1085;
};
struct yf1093 { void *up;
yR134 * p1091;
rt_int p1092;
void * v3766;
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
rt_int v3780;
};
struct yf1133 { void *up;
yR134 p1132;
void * v3787;
};
struct yf1140 { void *up;
rt_int p1138;
rt_int p1139;
rt_int v3793;
};
struct yf1148 { void *up;
rt_int p1145;
yarr p1147;
};
struct yf1157 { void *up;
rt_int p1153;
rt_int p1154;
yarr p1156;
rt_int v3807;
};
struct yf1162 { void *up;
};
struct yf1169 { void *up;
yarr p1168;
rt_int v3815;
};
struct yf1765 { void *up;
rt_int v3819;
rt_int v3821;
rt_int v3823;
rt_int lo3840;
rt_int hi3841;
rt_int c_3843;
};
struct yf1770 { void *up;
unsigned char v3852;
};
struct yf1777 { void *up;
rt_int p1775;
rt_int p1776;
};
struct yf1783 { void *up;
rt_int p1782;
};
struct yf1788 { void *up;
rt_int v3869;
rt_int v3871;
};
struct yf1794 { void *up;
unsigned char p1793;
};
struct yf1801 { void *up;
yarr p1800;
};
struct yf1808 { void *up;
rt_int p1806;
rt_int p1807;
rt_int v3901;
};
struct yf1814 { void *up;
rt_int p1813;
rt_int v3911;
rt_int v3914;
rt_int v3916;
rt_int v3918;
rt_int v3920;
rt_int v3922;
rt_int v3925;
rt_int v3928;
rt_int v3931;
rt_int v3934;
rt_int v3937;
rt_int v3940;
rt_int v3943;
rt_int lo3981;
rt_int hi3982;
rt_int c_3984;
rt_int lo4013;
rt_int hi4014;
rt_int c_4016;
rt_int lo4023;
rt_int hi4024;
rt_int c_4026;
};
struct yf1819 { void *up;
rt_int v4037;
rt_int v4039;
rt_int v4041;
rt_int v4043;
};
struct yf1824 { void *up;
unsigned char v4072;
rt_int v4074;
rt_int v4076;
rt_int v4078;
rt_int v4080;
rt_int v4082;
rt_int v4084;
rt_int v4086;
rt_int lo4161;
rt_int hi4162;
rt_int c_4164;
};
struct yf1831 { void *up;
rt_int p1829;
rt_int p1830;
void * v4180;
};
struct yf1839 { void *up;
void * * p1836;
void * * p1837;
void * p1838;
};
struct yf1845 { void *up;
void * p1844;
rt_int v4193;
void * v4196;
};
struct yf1850 { void *up;
};
struct yf1855 { void *up;
};
struct yf1860 { void *up;
};
struct yf1867 { void *up;
rt_int p1865;
rt_int p1866;
rt_int v4210;
};
struct yf1873 { void *up;
rt_int p1872;
};
struct yf1879 { void *up;
rt_int p1878;
};
struct yf1884 { void *up;
};
struct yf1890 { void *up;
rt_int p1889;
};
struct yf1895 { void *up;
rt_int v4233;
};
struct yf1901 { void *up;
rt_int p1900;
rt_int v4243;
};
struct yf1906 { void *up;
rt_int v4248;
};
struct yf1913 { void *up;
rt_int p1911;
rt_int p1912;
rt_int v4255;
};
struct yf1918 { void *up;
rt_int v4259;
};
struct yf1924 { void *up;
rt_int p1923;
void * v4269;
};
struct yf1929 { void *up;
void * v4276;
};
struct yf1934 { void *up;
void * v4281;
void * v4283;
void * v4285;
void * v4287;
rt_int v4289;
};
struct yf1939 { void *up;
rt_int v4298;
};
struct yf1944 { void *up;
void * v4304;
void * v4306;
void * v4308;
void * v4310;
};
struct yf1949 { void *up;
void * v4315;
void * v4317;
void * v4319;
void * v4321;
void * v4323;
};
struct yf1954 { void *up;
void * v4331;
void * v4333;
void * v4335;
};
struct yf1960 { void *up;
rt_int p1959;
void * v4341;
};
struct yf1966 { void *up;
rt_int p1965;
};
struct yf1973 { void *up;
void * * p1971;
void * * p1972;
rt_int v4362;
void * v4364;
void * v4366;
void * v4368;
};
struct yf1978 { void *up;
void * v4372;
void * v4374;
void * v4376;
rt_int v4378;
rt_int v4380;
rt_int v4382;
};
struct yf1984 { void *up;
void * p1983;
void * v4398;
void * v4400;
rt_int v4402;
};
struct yf1989 { void *up;
void * v4408;
};
struct yf1995 { void *up;
rt_int p1994;
rt_int v4420;
};
struct yf2000 { void *up;
rt_int v4428;
void * v4430;
};
struct yf2005 { void *up;
void * v4439;
void * v4441;
};
struct yf2010 { void *up;
void * v4445;
void * v4447;
void * v4449;
};
struct yf2015 { void *up;
void * v4454;
void * v4456;
void * v4458;
rt_int v4460;
};
struct yf2020 { void *up;
void * v4467;
void * v4469;
void * v4471;
void * v4473;
void * v4475;
void * v4477;
rt_int v4479;
rt_int v4481;
};
struct yf2025 { void *up;
void * v4498;
};
struct yf2030 { void *up;
rt_int v4503;
};
struct yf2036 { void *up;
rt_int p2035;
void * v4512;
void * v4514;
void * v4516;
rt_int v4518;
};
struct yf2041 { void *up;
void * v4526;
void * v4528;
void * v4530;
void * v4532;
void * v4534;
void * v4536;
rt_int v4538;
rt_int v4540;
};
struct yf2046 { void *up;
};
struct yf2052 { void *up;
rt_int p2051;
};
struct yf2058 { void *up;
rt_int p2057;
};
struct yf2064 { void *up;
rt_int p2063;
};
struct yf2070 { void *up;
rt_int p2069;
};
struct yf2076 { void *up;
rt_int p2075;
};
struct yf2085 { void *up;
rt_int p2081;
void * p2082;
void * p2083;
rt_int p2084;
void * v4594;
};
struct yf2092 { void *up;
rt_int p2090;
rt_int p2091;
rt_int v4600;
};
struct yf2097 { void *up;
void * v4604;
rt_int v4606;
rt_int v4608;
};
struct yf2102 { void *up;
void * v4612;
void * v4614;
rt_int v4616;
rt_int v4618;
};
struct yf2107 { void *up;
void * v4624;
rt_int v4626;
rt_int v4628;
};
struct yf2113 { void *up;
rt_int p2112;
rt_int v4634;
};
struct yf2118 { void *up;
void * v4639;
rt_int v4641;
rt_int v4643;
};
struct yf2123 { void *up;
void * v4647;
rt_int v4649;
rt_int v4651;
};
struct yf2128 { void *up;
void * v4672;
void * v4674;
void * v4676;
rt_int v4678;
};
struct yf2133 { void *up;
};
struct yf2138 { void *up;
void * v4685;
void * v4687;
};
struct yf2145 { void *up;
rt_int p2143;
rt_int p2144;
void * v4694;
};
struct yf2151 { void *up;
rt_int p2150;
void * v4709;
};
struct yf2157 { void *up;
void * p2156;
void * v4716;
rt_int v4718;
rt_int v4721;
};
struct yf2162 { void *up;
void * v4733;
void * v4735;
void * v4737;
rt_int v4739;
};
struct yf2168 { void *up;
void * p2167;
};
struct yf2174 { void *up;
rt_int p2173;
void * v4751;
};
struct yf2180 { void *up;
rt_int p2179;
void * v4759;
};
struct yf2187 { void *up;
rt_int p2185;
rt_int p2186;
void * v4768;
void * v4770;
rt_int lo4776;
rt_int hi4777;
rt_int c_4779;
};
struct yf2193 { void *up;
rt_int p2192;
};
struct yf2200 { void *up;
void * p2198;
rt_int p2199;
void * v4792;
void * v4794;
rt_int v4796;
};
struct yf2207 { void *up;
void * p2205;
rt_int p2206;
void * v4812;
};
struct yf2214 { void *up;
void * p2212;
rt_int p2213;
void * v4837;
};
struct yf2220 { void *up;
void * p2219;
};
struct yf2226 { void *up;
void * p2225;
void * v4852;
};
struct yf2233 { void *up;
rt_int p2231;
void * p2232;
void * v4861;
};
struct yf2240 { void *up;
void * p2238;
rt_int p2239;
void * v4870;
rt_int v4872;
};
struct yf2247 { void *up;
rt_int p2245;
rt_int p2246;
rt_int v4880;
};
struct yf2253 { void *up;
rt_int p2252;
rt_int v4895;
};
struct yf2260 { void *up;
rt_int p2258;
rt_int p2259;
rt_int v4910;
};
struct yf2266 { void *up;
void * p2265;
rt_int v4919;
};
struct yf2272 { void *up;
void * p2271;
void * v4927;
};
struct yf2279 { void *up;
rt_int p2277;
rt_int p2278;
void * v4934;
};
struct yf2285 { void *up;
void * p2284;
void * v4962;
};
struct yf2291 { void *up;
void * p2290;
};
struct yf2297 { void *up;
void * p2296;
};
struct yf2303 { void *up;
void * p2302;
};
struct yf2309 { void *up;
void * p2308;
};
struct yf2315 { void *up;
void * p2314;
};
struct yf2322 { void *up;
void * p2320;
rt_int p2321;
void * v4993;
};
struct yf2328 { void *up;
void * p2327;
};
struct yf2334 { void *up;
void * p2333;
rt_int v5005;
};
struct yf2340 { void *up;
void * p2339;
rt_int v5012;
};
struct yf2346 { void *up;
void * p2345;
rt_int v5039;
};
struct yf2352 { void *up;
void * p2351;
};
struct yf2359 { void *up;
void * p2357;
void * p2358;
};
struct yf2367 { void *up;
rt_int p2364;
void * p2365;
void * p2366;
rt_int v5088;
};
struct yf2375 { void *up;
rt_int p2372;
void * p2373;
void * p2374;
};
struct yf2382 { void *up;
void * p2380;
rt_int p2381;
};
struct yf2388 { void *up;
void * p2387;
rt_int v5103;
void * v5105;
void * v5107;
};
struct yf2394 { void *up;
void * p2393;
};
struct yf2401 { void *up;
void * p2399;
void * p2400;
};
struct yf2407 { void *up;
void * p2406;
};
struct yf2415 { void *up;
void * p2412;
yarr p2414;
rt_int v5153;
rt_int v5155;
};
struct yf2421 { void *up;
void * p2420;
};
struct yf2427 { void *up;
void * p2426;
};
struct yf2435 { void *up;
void * p2432;
void * p2433;
void * p2434;
void * v5181;
};
struct yf2441 { void *up;
void * p2440;
};
struct yf2448 { void *up;
rt_int p2446;
rt_int p2447;
rt_int v5193;
rt_int v5195;
rt_int v5197;
};
struct yf2456 { void *up;
rt_int p2453;
rt_int p2454;
rt_int p2455;
rt_int v5213;
rt_int v5215;
};
struct yf2464 { void *up;
rt_int p2461;
rt_int p2462;
rt_int p2463;
rt_int v5230;
rt_int lo5235;
rt_int hi5236;
rt_int c_5238;
};
struct yf2474 { void *up;
void * p2469;
void * p2470;
rt_int p2471;
rt_int * p2471_o;
rt_int p2472;
rt_int * p2472_o;
rt_int p2473;
rt_int * p2473_o;
rt_int v5249;
rt_int v5251;
rt_int v5253;
rt_int v5255;
rt_int v5257;
rt_int v5259;
};
struct yf2481 { void *up;
rt_int p2479;
rt_int p2480;
};
struct yf2489 { void *up;
void * p2486;
rt_int p2487;
rt_int p2488;
rt_int v5288;
};
struct yf2496 { void *up;
void * p2494;
void * p2495;
rt_int v5298;
rt_int v5300;
rt_int v5302;
rt_int v5304;
void * v5306;
void * v5308;
rt_int v5310;
rt_int v5312;
rt_int v5314;
rt_int v5316;
rt_int v5318;
};
struct yf2502 { void *up;
void * p2501;
void * v5350;
void * v5352;
rt_int v5354;
};
struct yf2510 { void *up;
void * p2507;
rt_int p2508;
rt_int p2509;
};
struct yf2516 { void *up;
rt_int p2515;
rt_int v5369;
};
struct yf2524 { void *up;
void * p2521;
rt_int p2522;
rt_int p2523;
void * v5379;
void * v5381;
};
struct yf2531 { void *up;
void * p2529;
void * p2530;
void * v5389;
void * v5391;
void * v5393;
void * v5395;
void * v5397;
void * v5399;
};
struct yf2539 { void *up;
void * p2536;
rt_int p2537;
rt_int p2538;
void * v5428;
void * v5430;
void * v5432;
void * v5434;
void * v5436;
rt_int v5438;
void * v5440;
rt_int v5442;
rt_int v5444;
};
struct yf2546 { void *up;
rt_int p2544;
void * p2545;
void * v5491;
void * v5493;
};
struct yf2551 { void *up;
void * v5497;
};
struct yf2557 { void *up;
void * p2556;
void * v5502;
rt_int v5504;
rt_int v5506;
};
struct yf2570 { void *up;
void * p2562;
void * * p2563;
rt_int p2564;
void * p2565;
rt_int p2566;
rt_int p2567;
void * p2568;
rt_int p2569;
void * v5531;
};
struct yf2581 { void *up;
void * p2575;
void * * p2576;
void * p2577;
rt_int p2578;
void * p2579;
rt_int p2580;
void * v5543;
void * v5545;
void * v5547;
};
struct yf2589 { void *up;
void * p2586;
void * p2587;
rt_int p2588;
void * v5554;
void * v5556;
void * v5558;
void * v5560;
rt_int v5562;
void * v5565;
rt_int v5567;
rt_int v5569;
};
struct yf2596 { void *up;
void * p2594;
rt_int p2595;
void * v5616;
};
struct yf2603 { void *up;
void * p2601;
rt_int p2602;
void * v5623;
rt_int v5625;
rt_int v5627;
rt_int v5629;
rt_int v5631;
rt_int lo5640;
rt_int hi5641;
rt_int c_5643;
};
struct yf2610 { void *up;
void * p2608;
void * p2609;
void * v5682;
void * v5684;
void * v5686;
rt_int v5688;
rt_int v5691;
};
struct yf2618 { void *up;
void * p2615;
rt_int p2616;
rt_int p2617;
rt_int v5716;
rt_int v5718;
};
struct yf2627 { void *up;
void * p2623;
rt_int p2624;
rt_int p2625;
rt_int * p2625_o;
rt_int p2626;
rt_int v5729;
rt_int v5731;
rt_int v5733;
ydesc yd_5742;
yarr v5744;
unsigned char v5746;
rt_int v5748;
rt_int lo5777;
rt_int hi5778;
rt_int c_5780;
};
struct yf2635 { void *up;
void * p2632;
rt_int p2633;
rt_int * p2633_o;
rt_int p2634;
rt_int * p2634_o;
void * v5815;
rt_int v5817;
rt_int v5819;
rt_int v5821;
rt_int v5823;
rt_int v5825;
void * v5827;
};
struct yf2643 { void *up;
void * p2640;
rt_int p2641;
rt_int * p2641_o;
rt_int p2642;
rt_int * p2642_o;
void * v5857;
rt_int v5859;
rt_int v5861;
rt_int v5863;
rt_int v5865;
rt_int v5867;
void * v5869;
void * v5871;
rt_int lo5888;
rt_int hi5889;
rt_int c_5891;
};
struct yf2650 { void *up;
void * p2648;
void * p2649;
};
struct yf2658 { void *up;
rt_int p2655;
void * p2656;
void * p2657;
rt_int v5919;
rt_int v5921;
void * v5923;
void * v5925;
};
struct yf2666 { void *up;
rt_int p2663;
void * p2664;
void * p2665;
rt_int v5954;
rt_int v5956;
rt_int v5958;
rt_int v5960;
rt_int v5962;
rt_int v5964;
};
struct yf2674 { void *up;
rt_int p2671;
void * p2672;
void * p2673;
rt_int v6011;
rt_int v6013;
rt_int v6015;
};
struct yf2685 { void *up;
rt_int * p2679;
void * p2680;
rt_int * p2681;
void * p2682;
void * p2683;
rt_int p2684;
rt_int v6030;
rt_int v6032;
};
struct yf2693 { void *up;
void * p2690;
rt_int p2691;
rt_int * p2691_o;
void * p2692;
void * * p2692_o;
rt_int v6039;
rt_int v6041;
};
struct yf2702 { void *up;
void * p2698;
rt_int p2699;
rt_int * p2699_o;
rt_int p2700;
rt_int * p2700_o;
rt_int p2701;
rt_int * p2701_o;
rt_int v6055;
rt_int v6057;
rt_int v6059;
rt_int v6061;
rt_int v6063;
rt_int v6065;
};
struct yf2708 { void *up;
rt_int p2707;
};
struct yf2716 { void *up;
rt_int p2713;
void * p2714;
void * p2715;
rt_int v6086;
};
struct yf2726 { void *up;
rt_int p2721;
void * p2722;
rt_int p2723;
void * p2724;
rt_int p2725;
rt_int v6125;
};
struct yf2736 { void *up;
rt_int p2731;
void * p2732;
rt_int p2733;
void * p2734;
rt_int p2735;
};
struct yf2742 { void *up;
void * p2741;
void * v6147;
void * v6149;
};
struct yf2748 { void *up;
void * p2747;
void * v6168;
void * v6170;
};
struct yf2756 { void *up;
void * p2753;
rt_int p2754;
rt_int * p2754_o;
void * p2755;
void * * p2755_o;
};
struct yf2762 { void *up;
rt_int p2761;
};
struct yf2769 { void *up;
void * p2767;
rt_int p2768;
void * v6188;
};
struct yf2775 { void *up;
void * p2774;
void * v6193;
};
struct yf2784 { void *up;
void * p2780;
void * p2781;
rt_int p2782;
rt_int * p2782_o;
void * p2783;
void * * p2783_o;
rt_int v6202;
void * v6204;
rt_int v6206;
rt_int v6208;
void * v6210;
void * v6212;
void * v6214;
rt_int v6216;
rt_int v6218;
};
struct yf2792 { void *up;
void * p2789;
void * p2790;
rt_int p2791;
void * v6261;
rt_int v6263;
rt_int v6265;
};
struct yf2801 { void *up;
void * p2797;
void * p2798;
rt_int p2799;
rt_int * p2799_o;
void * p2800;
void * * p2800_o;
void * v6277;
};
struct yf2809 { void *up;
void * p2806;
rt_int p2807;
rt_int * p2807_o;
void * p2808;
void * * p2808_o;
rt_int v6286;
rt_int v6288;
rt_int v6290;
void * v6292;
void * v6294;
void * v6296;
void * v6298;
rt_int v6300;
rt_int v6302;
};
struct yf2819 { void *up;
void * p2814;
rt_int p2815;
void * p2816;
rt_int p2817;
rt_int * p2817_o;
void * p2818;
void * * p2818_o;
};
struct yf2825 { void *up;
void * p2824;
void * v6340;
};
struct yf2834 { void *up;
yarr p2831;
rt_int p2832;
rt_int p2833;
};
struct yf2843 { void *up;
rt_int p2839;
yarr p2841;
rt_int p2842;
};
struct yf2852 { void *up;
rt_int p2848;
void * p2849;
rt_int p2850;
void * p2851;
rt_int v6368;
rt_int v6370;
void * v6372;
};
struct yf2858 { void *up;
void * p2857;
};
struct yf2865 { void *up;
rt_int p2863;
void * p2864;
};
struct yf2874 { void *up;
void * p2870;
void * p2871;
rt_int p2872;
rt_int * p2872_o;
void * p2873;
void * * p2873_o;
rt_int v6410;
rt_int v6412;
rt_int v6414;
rt_int v6416;
void * v6418;
void * v6420;
void * v6422;
rt_int v6424;
};
struct yf2881 { void *up;
void * p2879;
void * p2880;
};
struct yf2889 { void *up;
void * p2886;
rt_int p2887;
rt_int p2888;
void * v6484;
void * v6486;
rt_int v6488;
rt_int v6490;
};
struct yf2895 { void *up;
void * p2894;
void * v6502;
};
struct yf2904 { void *up;
void * p2900;
void * p2901;
rt_int p2902;
rt_int * p2902_o;
rt_int p2903;
rt_int * p2903_o;
void * v6514;
void * v6516;
void * v6518;
};
struct yf2912 { void *up;
void * p2909;
void * p2910;
rt_int p2911;
void * v6533;
};
struct yf2919 { void *up;
void * p2917;
void * p2918;
};
struct yf2928 { void *up;
void * p2924;
rt_int p2925;
rt_int p2926;
rt_int p2927;
void * v6550;
rt_int v6552;
rt_int v6556;
rt_int v6559;
rt_int v6562;
rt_int v6565;
rt_int v6568;
rt_int v6571;
};
struct yf2934 { void *up;
rt_int p2933;
};
struct yf2945 { void *up;
void * p2939;
rt_int p2940;
void * p2941;
void * p2942;
rt_int p2943;
rt_int * p2943_o;
void * p2944;
void * * p2944_o;
void * v6629;
void * v6631;
rt_int v6633;
rt_int v6635;
};
struct yf2952 { void *up;
void * p2950;
rt_int p2951;
void * v6649;
};
struct yf2962 { void *up;
rt_int p2957;
void * p2958;
rt_int p2959;
void * p2960;
rt_int p2961;
void * v6657;
void * v6659;
void * v6661;
void * v6663;
rt_int v6665;
};
struct yf2972 { void *up;
rt_int p2967;
void * p2968;
rt_int p2969;
void * p2970;
rt_int p2971;
rt_int v6707;
};
struct yf2982 { void *up;
void * p2977;
void * p2978;
rt_int p2979;
rt_int p2980;
rt_int * p2980_o;
void * p2981;
void * * p2981_o;
void * v6716;
void * v6718;
rt_int v6720;
rt_int v6722;
};
struct yf2991 { void *up;
void * p2987;
void * p2988;
rt_int p2989;
rt_int * p2989_o;
void * p2990;
void * * p2990_o;
void * v6734;
void * v6736;
rt_int v6738;
rt_int v6740;
rt_int v6742;
void * v6744;
rt_int v6746;
rt_int v6748;
rt_int v6750;
rt_int v6752;
rt_int v6754;
rt_int v6757;
void * v6759;
rt_int v6761;
};
struct yf2999 { void *up;
void * p2996;
rt_int p2997;
rt_int p2998;
void * v6823;
void * v6825;
rt_int v6827;
rt_int v6829;
};
struct yf3007 { void *up;
yarr p3005;
rt_int p3006;
rt_int v6838;
};
struct yf3017 { void *up;
yarr p3013;
rt_int p3014;
yarr p3016;
rt_int v6844;
};
struct yf3023 { void *up;
rt_int p3022;
};
struct yf3028 { void *up;
};
struct yf3034 { void *up;
rt_int p3033;
};
struct yf3040 { void *up;
void * p3039;
rt_int v6866;
rt_int v6868;
rt_int v6870;
void * v6872;
void * v6874;
rt_int v6876;
void * v6878;
rt_int v6880;
};
struct yf3047 { void *up;
void * p3045;
void * p3046;
void * v6943;
void * v6945;
rt_int v6947;
rt_int v6949;
rt_int v6951;
rt_int v6953;
};
struct yf3055 { void *up;
void * p3052;
void * p3053;
void * p3054;
rt_int v6975;
void * v6977;
void * v6979;
void * v6981;
rt_int v6983;
rt_int v6985;
rt_int v6987;
rt_int v6989;
};
struct yf3062 { void *up;
void * p3060;
void * p3061;
void * v7002;
void * v7004;
rt_int v7006;
rt_int v7009;
rt_int lo7014;
rt_int hi7015;
rt_int c_7017;
};
struct yf3068 { void *up;
void * p3067;
void * v7027;
};
struct yf3074 { void *up;
void * p3073;
rt_int v7031;
void * v7033;
};
struct yf3081 { void *up;
void * p3079;
void * p3080;
rt_int v7039;
rt_int v7041;
void * v7043;
void * v7045;
rt_int v7047;
};
struct yf3086 { void *up;
void * v7053;
rt_int v7055;
};
struct yf3092 { void *up;
void * p3091;
rt_int v7062;
rt_int v7064;
rt_int v7066;
rt_int v7068;
rt_int v7070;
rt_int v7072;
rt_int v7074;
void * v7076;
void * v7078;
void * v7080;
void * v7082;
rt_int v7084;
rt_int v7086;
rt_int v7088;
rt_int v7090;
void * v7092;
};
struct yf3098 { void *up;
void * p3097;
void * v7163;
rt_int v7165;
rt_int v7167;
rt_int v7169;
void * v7171;
};
struct yf3106 { void *up;
rt_int p3103;
rt_int p3104;
rt_int p3105;
};
struct yf3112 { void *up;
void * p3111;
rt_int v7203;
rt_int v7205;
rt_int v7207;
void * v7209;
void * v7211;
};
struct yf3118 { void *up;
void * p3117;
};
struct yf3124 { void *up;
void * p3123;
void * v7232;
};
struct yf3130 { void *up;
void * p3129;
void * v7247;
};
struct yf3136 { void *up;
void * p3135;
void * v7256;
void * v7258;
void * v7260;
};
struct yf3142 { void *up;
rt_int p3141;
rt_int v7265;
rt_int v7267;
rt_int lo7272;
rt_int hi7273;
rt_int c_7275;
};
struct yf3148 { void *up;
void * p3147;
void * v7285;
rt_int v7287;
rt_int v7289;
};
struct yf3154 { void *up;
void * p3153;
rt_int v7306;
};
struct yf3161 { void *up;
void * p3159;
rt_int p3160;
void * v7314;
void * v7316;
void * v7318;
void * v7320;
void * v7322;
void * v7324;
void * v7326;
rt_int v7328;
rt_int v7330;
};
struct yf3168 { void *up;
void * p3166;
void * p3167;
void * v7373;
void * v7375;
void * v7377;
rt_int v7379;
};
struct yf3174 { void *up;
void * p3173;
void * v7387;
yR134 v7389;
yR134 v7391;
rt_int v7393;
rt_int v7395;
rt_int v7397;
rt_int v7399;
rt_int v7401;
rt_int v7403;
rt_int v7405;
void * v7407;
rt_int v7409;
void * v7411;
void * v7413;
rt_int v7415;
rt_int v7417;
yR134 v7419;
};
struct yf3182 { void *up;
void * p3179;
void * p3180;
rt_int p3181;
};
struct yf3188 { void *up;
void * p3187;
rt_int v7485;
void * v7487;
void * v7489;
void * v7491;
void * v7493;
rt_int v7495;
rt_int v7497;
rt_int v7499;
rt_int v7501;
};
struct yf3195 { void *up;
void * p3193;
void * p3194;
void * v7520;
};
struct yf3202 { void *up;
void * p3200;
void * p3201;
};
struct yf3211 { void *up;
void * p3207;
rt_int p3208;
void * p3209;
rt_int p3210;
rt_int v7530;
rt_int lo7543;
rt_int hi7544;
rt_int c_7546;
};
struct yf3218 { void *up;
rt_int p3216;
rt_int p3217;
rt_int v7555;
rt_int v7559;
void * v7561;
rt_int lo7566;
rt_int hi7567;
rt_int c_7569;
rt_int lo7576;
rt_int hi7577;
rt_int c_7579;
};
struct yf3224 { void *up;
rt_int p3223;
void * v7587;
yR134 v7589;
void * v7591;
};
struct yf3230 { void *up;
void * p3229;
void * v7605;
void * v7607;
rt_int v7609;
rt_int v7611;
};
struct yf3236 { void *up;
void * p3235;
};
struct yf3243 { void *up;
rt_int p3241;
void * p3242;
void * v7621;
};
struct yf3251 { void *up;
void * * p3248;
void * p3249;
rt_int p3250;
void * v7628;
void * v7630;
void * v7632;
};
struct yf3258 { void *up;
void * p3256;
rt_int p3257;
void * v7642;
};
struct yf3266 { void *up;
rt_int p3263;
rt_int p3264;
void * p3265;
void * * p3265_o;
void * v7658;
};
struct yf3272 { void *up;
void * p3271;
void * v7676;
};
struct yf3281 { void *up;
rt_int p3277;
rt_int p3278;
void * p3279;
rt_int p3280;
void * v7684;
};
struct yf3288 { void *up;
rt_int p3286;
void * p3287;
};
struct yf3295 { void *up;
void * p3293;
void * p3294;
void * v7697;
rt_int lo7701;
rt_int hi7702;
rt_int c_7704;
};
struct yf3301 { void *up;
rt_int p3300;
void * v7711;
rt_int lo7715;
rt_int hi7716;
rt_int c_7718;
};
struct yf3309 { void *up;
void * p3306;
void * * p3307;
rt_int p3308;
void * v7727;
void * v7729;
rt_int v7731;
};
struct yf3317 { void *up;
void * p3314;
void * * p3315;
rt_int p3316;
void * v7738;
void * v7740;
void * v7742;
rt_int v7744;
void * v7746;
rt_int v7748;
rt_int v7750;
void * v7752;
};
struct yf3324 { void *up;
void * p3322;
rt_int p3323;
void * v7783;
void * v7785;
void * v7787;
};
struct yf3330 { void *up;
void * p3329;
void * v7793;
void * v7795;
void * v7797;
void * v7799;
void * v7801;
void * v7803;
void * v7805;
void * v7807;
void * v7809;
void * v7811;
rt_int v7813;
rt_int v7815;
rt_int v7817;
};
struct yf3336 { void *up;
void * p3335;
void * v7846;
};
struct yf3342 { void *up;
void * p3341;
void * v7850;
void * v7852;
void * v7854;
void * v7856;
rt_int v7858;
rt_int v7860;
rt_int v7862;
rt_int v7864;
void * v7866;
rt_int lo7874;
rt_int hi7875;
rt_int c_7877;
};
struct yf3348 { void *up;
void * p3347;
void * v7889;
void * v7891;
};
struct yf3353 { void *up;
void * v7897;
};
struct yf3360 { void *up;
void * p3358;
void * p3359;
rt_int v7908;
rt_int v7910;
rt_int v7912;
void * v7914;
rt_int v7916;
rt_int v7918;
rt_int v7920;
rt_int v7922;
rt_int v7924;
rt_int v7926;
void * v7928;
void * v7930;
};
struct yf3366 { void *up;
void * p3365;
};
struct yf3372 { void *up;
void * p3371;
rt_int v7991;
};
struct yf3377 { void *up;
};
struct yf3383 { void *up;
void * p3382;
};
struct yf3390 { void *up;
void * p3388;
rt_int p3389;
};
struct yf3397 { void *up;
void * p3395;
rt_int p3396;
};
struct yf3404 { void *up;
void * p3402;
void * p3403;
rt_int v8034;
rt_int v8036;
rt_int v8038;
};
struct yf3411 { void *up;
void * p3409;
rt_int p3410;
void * v8047;
rt_int v8049;
};
struct yf3418 { void *up;
void * p3416;
rt_int p3417;
};
struct yf3426 { void *up;
yarr p3424;
rt_int p3425;
};
struct yf3432 { void *up;
rt_int p3431;
};
struct yf3441 { void *up;
void * p3437;
rt_int p3438;
rt_int p3439;
rt_int * p3439_o;
void * p3440;
void * * p3440_o;
rt_int v8076;
};
struct yf3449 { void *up;
void * p3446;
rt_int p3447;
rt_int * p3447_o;
void * p3448;
void * * p3448_o;
};
struct yf3455 { void *up;
void * p3454;
rt_int v8092;
void * v8094;
};
struct yf3461 { void *up;
void * p3460;
void * v8100;
rt_int v8103;
rt_int v8105;
rt_int v8107;
rt_int v8109;
rt_int v8111;
rt_int v8113;
unsigned char v8115;
void * v8117;
ydesc yd_8126;
yarr v8128;
};
struct yf3468 { void *up;
void * p3466;
void * p3467;
rt_int v8164;
rt_int v8166;
rt_int v8168;
void * v8170;
};
struct yf3478 { void *up;
rt_int p3473;
void * p3474;
rt_int p3475;
rt_int p3476;
rt_int * p3476_o;
void * p3477;
void * * p3477_o;
rt_int v8182;
rt_int v8184;
rt_int v8186;
rt_int v8188;
rt_int v8190;
void * v8192;
void * v8194;
void * v8196;
void * v8198;
rt_int v8200;
rt_int v8202;
rt_int v8204;
rt_int v8206;
void * v8208;
rt_int v8210;
rt_int lo8224;
rt_int hi8225;
rt_int c_8227;
};
struct yf3486 { void *up;
yarr p3484;
void * p3485;
void * v8417;
};
struct yf3494 { void *up;
yarr p3492;
rt_int p3493;
void * v8423;
};
struct yf3504 { void *up;
yarr p3500;
yarr p3501;
yarr p3502;
rt_int p3503;
void * v8431;
void * v8433;
void * v8435;
};
struct yf3512 { void *up;
rt_int p3509;
yarr p3511;
void * v8444;
};
struct yf3517 { void *up;
};
struct yf3522 { void *up;
void * v8524;
};
struct yf3527 { void *up;
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
static rt_int v1215;
static void * v1218;
static rt_int v1220;
static rt_int v1223;
static yarr v1226;
static ydesc yd_1235;
static yarr v1237;
static rt_int v1239;
static rt_int v1242;
static rt_int v1245;
static ydesc yd_1255;
static yarr v1257;
static ydesc yd_1266;
static yarr v1268;
static ydesc yd_1277;
static yarr v1279;
static ydesc yd_1288;
static yarr v1290;
static yarr v1292;
static rt_int v1294;
static ydesc yd_1304;
static yarr v1306;
static void * v1308;
static void * v1310;
static void * v1312;
static void * v1314;
static void * v1316;
static void * v1318;
static void * v1320;
static void * v1322;
static void * v1324;
static void * v1326;
static void * v1328;
static void * v1330;
static rt_int v1332;
static rt_int v1335;
static rt_int v1338;
static rt_int v1341;
static rt_int v1344;
static rt_int v1347;
static rt_int v1350;
static rt_int v1353;
static rt_int v1356;
static rt_int v1359;
static rt_int v1362;
static rt_int v1365;
static rt_int v1368;
static rt_int v1371;
static rt_int v1374;
static rt_int v1377;
static rt_int v1380;
static rt_int v1383;
static rt_int v1386;
static rt_int v1389;
static rt_int v1392;
static rt_int v1395;
static rt_int v1398;
static rt_int v1401;
static rt_int v1404;
static rt_int v1407;
static rt_int v1410;
static rt_int v1413;
static rt_int v1416;
static rt_int v1419;
static rt_int v1422;
static rt_int v1425;
static rt_int v1428;
static rt_int v1431;
static rt_int v1434;
static rt_int v1437;
static rt_int v1440;
static void * v1443;
static ydesc yd_1452;
static yarr v1454;
static ydesc yd_1463;
static yarr v1465;
static ydesc yd_1474;
static yarr v1476;
static rt_int v1478;
static ydesc yd_1488;
static yarr v1490;
static rt_int v1492;
static rt_int v1495;
static ydesc yd_1505;
static yarr v1507;
static ydesc yd_1516;
static yarr v1518;
static rt_int v1520;
static ydesc yd_1530;
static yarr v1532;
static rt_int v1534;
static ydesc yd_1544;
static yarr v1546;
static yarr v1548;
static ydesc yd_1557;
static yarr v1559;
static rt_int v1561;
static rt_int v1564;
static void * v1567;
static ydesc yd_1576;
static yarr v1578;
static yarr v1580;
static rt_int v1582;
static ydesc yd_1592;
static yarr v1594;
static rt_int v1596;
static ydesc yd_1606;
static yarr v1608;
static ydesc yd_1617;
static yarr v1619;
static ydesc yd_1628;
static yarr v1630;
static ydesc yd_1639;
static yarr v1641;
static ydesc yd_1650;
static yarr v1652;
static ydesc yd_1661;
static yarr v1663;
static ydesc yd_1672;
static yarr v1674;
static yarr v1676;
static ydesc yd_1685;
static yarr v1687;
static rt_int v1689;
static rt_int v1692;
static void * v1695;
static ydesc yd_1704;
static yarr v1706;
static rt_int v1708;
static ydesc yd_1718;
static yarr v1720;
static ydesc yd_1729;
static yarr v1731;
static ydesc yd_1740;
static yarr v1742;
static ydesc yd_1751;
static yarr v1753;
static yarr v1755;
static rt_int v1757;
static void * v1760;
static void * v1762;
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
static void yr1764_InitWords(void);
static void yr1769_ReadSource(void);
static void yr1774_AddTok(rt_int a_p1775, rt_int a_p1776);
static unsigned char yr1781_At(rt_int a_p1782);
static rt_int yr1787_EndsOperand(void);
static rt_int yr1792_DigitVal(unsigned char a_p1793);
static void yr1798_LexError(yarr a_p1800);
static void yr1805_LexDigits(rt_int a_p1806, rt_int a_p1807);
static void yr1812_LexNumber(rt_int a_p1813);
static void yr1818_LexString(void);
static void yr1823_Lex(void);
static void * yr1828_NewNode(rt_int a_p1829, rt_int a_p1830);
static void yr1835_Link(void * * a_p1836, void * * a_p1837, void * a_p1838);
static rt_int yr1843_Count(void * a_p1844);
static rt_int yr1849_TK(void);
static rt_int yr1854_TV(void);
static rt_int yr1859_TLn(void);
static rt_int yr1864_IsAt(rt_int a_p1865, rt_int a_p1866);
static rt_int yr1871_Is(rt_int a_p1872);
static rt_int yr1877_IsIdAt(rt_int a_p1878);
static void yr1883_Skip(void);
static rt_int yr1888_Accept(rt_int a_p1889);
static rt_int yr1894_TokText(void);
static void yr1899_Expect(rt_int a_p1900);
static rt_int yr1905_Ident(void);
static void yr1910_CloseName(rt_int a_p1911, rt_int a_p1912);
static rt_int yr1917_ExtendedId(void);
static rt_int yr1922_IsLabel(rt_int a_p1923);
static void * yr1928_ImportItem(void);
static void * yr1933_ParseModule(void);
static rt_int yr1938_IsDeclWord(void);
static void * yr1943_ParseBlock(void);
static void * yr1948_ParseHandler(void);
static void * yr1953_ParseNames(void);
static void * yr1958_SimpleEntry(rt_int a_p1959);
static rt_int yr1964_Continues(rt_int a_p1965);
static void yr1970_ParseDeclGroup(void * * a_p1971, void * * a_p1972);
static void * yr1977_ParseDecl(void);
static void yr1982_ParseFormals(void * a_p1983);
static void * yr1988_ParseFormalRep(void);
static rt_int yr1993_IsStructWord(rt_int a_p1994);
static void * yr1999_ParseRep(void);
static void * yr2004_ParseConcrete(void);
static void * yr2009_ParseIds(void);
static void * yr2014_ParseFieldGroups(void);
static void * yr2019_ParseConcrete1(void);
static void * yr2024_ParseQualifier(void);
static rt_int yr2029_IsStop(void);
static void * yr2034_ParseStatements(rt_int a_p2035);
static void * yr2040_ParseStatement(void);
static rt_int yr2045_OpAt(void);
static rt_int yr2050_IsRel(rt_int a_p2051);
static rt_int yr2056_IsAssocMul(rt_int a_p2057);
static rt_int yr2062_IsNonAssocMul(rt_int a_p2063);
static rt_int yr2068_IsAssocAdd(rt_int a_p2069);
static rt_int yr2074_IsNonAssocAdd(rt_int a_p2075);
static void * yr2080_Bin(rt_int a_p2081, void * a_p2082, void * a_p2083, rt_int a_p2084);
static void yr2089_NeedParens(rt_int a_p2090, rt_int a_p2091);
static void * yr2096_ParseExpr(void);
static void * yr2101_ParseSimple(void);
static void * yr2106_ParseTerm(void);
static rt_int yr2111_IsLiteralAt(rt_int a_p2112);
static void * yr2117_ParseLiteral(void);
static void * yr2122_ParseFactor(void);
static void * yr2127_ParseDesignator(void);
static void yr2132_EXIT_ARGS(void);
static void * yr2137_ParseProgram(void);
static void * yr2142_NewSym(rt_int a_p2143, rt_int a_p2144);
static void yr2149_OpenScope(rt_int a_p2150);
static void yr2155_ReopenScope(void * a_p2156);
static void yr2161_CloseScope(void);
static rt_int yr2166_Visible(void * a_p2167);
static void * yr2172_Find(rt_int a_p2173);
static void * yr2178_FindHere(rt_int a_p2179);
static void * yr2184_Lookup(rt_int a_p2185, rt_int a_p2186);
static rt_int yr2191_IsSimple(rt_int a_p2192);
static rt_int yr2197_DeclaredFrom(void * a_p2198, rt_int a_p2199);
static rt_int yr2204_LiteralIn(void * a_p2205, rt_int a_p2206);
static rt_int yr2211_LiteralInGroups(void * a_p2212, rt_int a_p2213);
static rt_int yr2218_Resolved(void * a_p2219);
static rt_int yr2224_Ambiguous(void * a_p2225);
static void * yr2230_FindLit(rt_int a_p2231, void * a_p2232);
static void yr2237_Define(void * a_p2238, rt_int a_p2239);
static rt_int yr2244_Path(rt_int a_p2245, rt_int a_p2246);
static rt_int yr2251_FramePtr(rt_int a_p2252);
static void yr2257_DeclStorage(rt_int a_p2258, rt_int a_p2259);
static rt_int yr2264_SymPath(void * a_p2265);
static void * yr2270_Real(void * a_p2271);
static void * yr2276_NewRep(rt_int a_p2277, rt_int a_p2278);
static void * yr2283_CopyRep(void * a_p2284);
static rt_int yr2289_IsDiscrete(void * a_p2290);
static rt_int yr2295_IsNumeric(void * a_p2296);
static rt_int yr2301_IsArrayLike(void * a_p2302);
static rt_int yr2307_IsString(void * a_p2308);
static rt_int yr2313_Deep(void * a_p2314);
static rt_int yr2319_Holds(void * a_p2320, rt_int a_p2321);
static rt_int yr2326_HoldsSignal(void * a_p2327);
static rt_int yr2332_NonAssignable(void * a_p2333);
static rt_int yr2338_CType(void * a_p2339);
static rt_int yr2344_DescOf(void * a_p2345);
static void yr2350_NewDesc(void * a_p2351);
static rt_int yr2356_SameType(void * a_p2357, void * a_p2358);
static void yr2363_TypeClash(rt_int a_p2364, void * a_p2365, void * a_p2366);
static void yr2371_CheckType(rt_int a_p2372, void * a_p2373, void * a_p2374);
static void yr2379_CheckRepresented(void * a_p2380, rt_int a_p2381);
static rt_int yr2386_SigText(void * a_p2387);
static rt_int yr2392_RepSig(void * a_p2393);
static rt_int yr2398_Identical(void * a_p2399, void * a_p2400);
static rt_int yr2405_IsLiteralNode(void * a_p2406);
static void yr2411_StoreBounds(void * a_p2412, yarr a_p2414);
static rt_int yr2419_LoText(void * a_p2420);
static rt_int yr2425_HiText(void * a_p2426);
static void * yr2431_AdoptLiteral(void * a_p2432, void * a_p2433, void * a_p2434);
static rt_int yr2439_HasQualifier(void * a_p2440);
static rt_int yr2445_Gcd(rt_int a_p2446, rt_int a_p2447);
static rt_int yr2452_MulChk(rt_int a_p2453, rt_int a_p2454, rt_int a_p2455);
static rt_int yr2460_PowChk(rt_int a_p2461, rt_int a_p2462, rt_int a_p2463);
static void yr2468_ScaleRatio(void * a_p2469, void * a_p2470, rt_int * a_p2471, rt_int * a_p2472, rt_int * a_p2473);
static rt_int yr2478_Factor(rt_int a_p2479, rt_int a_p2480);
static void yr2485_SetScale(void * a_p2486, rt_int a_p2487, rt_int a_p2488);
static void yr2493_Qualify(void * a_p2494, void * a_p2495);
static void yr2500_DefineLits(void * a_p2501);
static void yr2506_SetRange(void * a_p2507, rt_int a_p2508, rt_int a_p2509);
static rt_int yr2514_NewTid(rt_int a_p2515);
static void * yr2520_MakeRep(void * a_p2521, rt_int a_p2522, rt_int a_p2523);
static rt_int yr2528_Conforms(void * a_p2529, void * a_p2530);
static void * yr2535_MakeRep1(void * a_p2536, rt_int a_p2537, rt_int a_p2538);
static void yr2543_ResolvePending(rt_int a_p2544, void * a_p2545);
static void yr2550_CheckPending(void);
static void yr2555_BuildArrayDesc(void * a_p2556);
static void yr2561_AddField(void * a_p2562, void * * a_p2563, rt_int a_p2564, void * a_p2565, rt_int a_p2566, rt_int a_p2567, void * a_p2568, rt_int a_p2569);
static void yr2574_AddFields(void * a_p2575, void * * a_p2576, void * a_p2577, rt_int a_p2578, void * a_p2579, rt_int a_p2580);
static void yr2585_MakeRecord(void * a_p2586, void * a_p2587, rt_int a_p2588);
static void * yr2593_FindField(void * a_p2594, rt_int a_p2595);
static rt_int yr2600_CharOrd(void * a_p2601, rt_int a_p2602);
static void * yr2607_AlphabetFor(void * a_p2608, void * a_p2609);
static rt_int yr2614_CharValue(void * a_p2615, rt_int a_p2616, rt_int a_p2617);
static rt_int yr2622_StringCodes(void * a_p2623, rt_int a_p2624, rt_int * a_p2625, rt_int a_p2626);
static void yr2631_Manifest(void * a_p2632, rt_int * a_p2633, rt_int * a_p2634);
static void yr2639_ManifestStd(void * a_p2640, rt_int * a_p2641, rt_int * a_p2642);
static rt_int yr2647_NeedsConv(void * a_p2648, void * a_p2649);
static rt_int yr2654_ConvertRecord(rt_int a_p2655, void * a_p2656, void * a_p2657);
static rt_int yr2662_ConvertArray(rt_int a_p2663, void * a_p2664, void * a_p2665);
static rt_int yr2670_RescaleCode(rt_int a_p2671, void * a_p2672, void * a_p2673);
static void yr2678_CommonScale(rt_int * a_p2679, void * a_p2680, rt_int * a_p2681, void * a_p2682, void * a_p2683, rt_int a_p2684);
static void yr2689_FixLiteral(void * a_p2690, rt_int * a_p2691, void * * a_p2692);
static void yr2697_ManifestFix(void * a_p2698, rt_int * a_p2699, rt_int * a_p2700, rt_int * a_p2701);
static rt_int yr2706_FloatChk(rt_int a_p2707);
static rt_int yr2712_Convert(rt_int a_p2713, void * a_p2714, void * a_p2715);
static rt_int yr2720_StoreText(rt_int a_p2721, void * a_p2722, rt_int a_p2723, void * a_p2724, rt_int a_p2725);
static void yr2730_Store(rt_int a_p2731, void * a_p2732, rt_int a_p2733, void * a_p2734, rt_int a_p2735);
static rt_int yr2740_IsVariable(void * a_p2741);
static void yr2746_CheckPure(void * a_p2747);
static void yr2752_LValue(void * a_p2753, rt_int * a_p2754, void * * a_p2755);
static rt_int yr2760_Paren(rt_int a_p2761);
static void * yr2766_Lit(void * a_p2767, rt_int a_p2768);
static void * yr2773_Qualifier(void * a_p2774);
static void yr2779_Expr(void * a_p2780, void * a_p2781, rt_int * a_p2782, void * * a_p2783);
static rt_int yr2788_VariantTest(void * a_p2789, void * a_p2790, rt_int a_p2791);
static void yr2796_NameExpr(void * a_p2797, void * a_p2798, rt_int * a_p2799, void * * a_p2800);
static void yr2805_IndexExpr(void * a_p2806, rt_int * a_p2807, void * * a_p2808);
static void yr2813_NegExpr(void * a_p2814, rt_int a_p2815, void * a_p2816, rt_int * a_p2817, void * * a_p2818);
static void * yr2823_Unbounded(void * a_p2824);
static rt_int yr2829_Call2(yarr a_p2831, rt_int a_p2832, rt_int a_p2833);
static rt_int yr2838_Infix(rt_int a_p2839, yarr a_p2841, rt_int a_p2842);
static rt_int yr2847_EqCode(rt_int a_p2848, void * a_p2849, rt_int a_p2850, void * a_p2851);
static rt_int yr2856_IsOrdered(void * a_p2857);
static rt_int yr2862_FixToFloat(rt_int a_p2863, void * a_p2864);
static void yr2869_BinExpr(void * a_p2870, void * a_p2871, rt_int * a_p2872, void * * a_p2873);
static rt_int yr2878_Fits(void * a_p2879, void * a_p2880);
static void * yr2885_Choose(void * a_p2886, rt_int a_p2887, rt_int a_p2888);
static rt_int yr2893_HidesStandard(void * a_p2894);
static void yr2899_CompileArgs(void * a_p2900, void * a_p2901, rt_int * a_p2902, rt_int * a_p2903);
static void yr2908_CheckUnresolved(void * a_p2909, void * a_p2910, rt_int a_p2911);
static rt_int yr2916_SameAsFormal(void * a_p2917, void * a_p2918);
static rt_int yr2923_CallCode(void * a_p2924, rt_int a_p2925, rt_int a_p2926, rt_int a_p2927);
static rt_int yr2932_Num(rt_int a_p2933);
static rt_int yr2938_UserOp(void * a_p2939, rt_int a_p2940, void * a_p2941, void * a_p2942, rt_int * a_p2943, void * * a_p2944);
static void yr2949_NoteCall(void * a_p2950, rt_int a_p2951);
static rt_int yr2956_UserAssign(rt_int a_p2957, void * a_p2958, rt_int a_p2959, void * a_p2960, rt_int a_p2961);
static void yr2966_Assign(rt_int a_p2967, void * a_p2968, rt_int a_p2969, void * a_p2970, rt_int a_p2971);
static void yr2976_CallExpr(void * a_p2977, void * a_p2978, rt_int a_p2979, rt_int * a_p2980, void * * a_p2981);
static void yr2986_Denote(void * a_p2987, void * a_p2988, rt_int * a_p2989, void * * a_p2990);
static rt_int yr2995_VariantOf(void * a_p2996, rt_int a_p2997, rt_int a_p2998);
static void yr3003_Emit2(yarr a_p3005, rt_int a_p3006);
static void yr3011_Emit3(yarr a_p3013, rt_int a_p3014, yarr a_p3016);
static void yr3021_PopTo(rt_int a_p3022);
static void yr3027_LeaveBlock(void);
static rt_int yr3032_RaiseCode(rt_int a_p3033);
static void yr3038_BlockStatements(void * a_p3039);
static rt_int yr3044_SameDesig(void * a_p3045, void * a_p3046);
static void yr3051_CheckVariantSelected(void * a_p3052, void * a_p3053, void * a_p3054);
static void yr3059_CheckCaseLabels(void * a_p3060, void * a_p3061);
static void yr3066_Statements(void * a_p3067);
static rt_int yr3072_Cond(void * a_p3073);
static rt_int yr3078_Label(void * a_p3079, void * a_p3080);
static void yr3085_CopyOut(void);
static void yr3090_Statement(void * a_p3091);
static void yr3096_ForStatement(void * a_p3097);
static rt_int yr3102_Join(rt_int a_p3103, rt_int a_p3104, rt_int a_p3105);
static void yr3110_ReturnStatement(void * a_p3111);
static void yr3116_BeginStatement(void * a_p3117);
static void yr3122_PlaceLabel(void * a_p3123);
static void yr3128_GotoStatement(void * a_p3129);
static void yr3134_CheckLabels(void * a_p3135);
static rt_int yr3140_RoutineCName(rt_int a_p3141);
static void * yr3146_FormalRep(void * a_p3147);
static rt_int yr3152_ParamCType(void * a_p3153);
static void yr3158_RoutineHeader(void * a_p3159, rt_int a_p3160);
static void * yr3165_SameSignature(void * a_p3166, void * a_p3167);
static void yr3172_RoutineBody(void * a_p3173);
static void yr3178_DeclareStorage(void * a_p3179, void * a_p3180, rt_int a_p3181);
static void yr3186_SimpleDecl(void * a_p3187);
static void yr3192_NoteAlphabet(void * a_p3193, void * a_p3194);
static void yr3199_AtLocation(void * a_p3200, void * a_p3201);
static void yr3206_Defer(void * a_p3207, rt_int a_p3208, void * a_p3209, rt_int a_p3210);
static void yr3215_RunDeferred(rt_int a_p3216, rt_int a_p3217);
static void yr3222_ModuleInit(rt_int a_p3223);
static void yr3228_Declarations(void * a_p3229);
static void yr3234_DeclareRoutine(void * a_p3235);
static void * yr3240_Alias(rt_int a_p3241, void * a_p3242);
static void yr3247_AddLits(void * * a_p3248, void * a_p3249, rt_int a_p3250);
static rt_int yr3255_Provides(void * a_p3256, rt_int a_p3257);
static rt_int yr3262_ImportLater(rt_int a_p3263, rt_int a_p3264, void * * a_p3265);
static void * yr3270_OneDecl(void * a_p3271);
static void * yr3276_Lazy(rt_int a_p3277, rt_int a_p3278, void * a_p3279, rt_int a_p3280);
static void yr3285_SetLazy(rt_int a_p3286, void * a_p3287);
static void yr3292_ResolveFrom(void * a_p3293, void * a_p3294);
static void yr3299_ResolveLater(rt_int a_p3300);
static void yr3305_LazyModule(void * a_p3306, void * * a_p3307, rt_int a_p3308);
static void yr3313_ResolveItem(void * a_p3314, void * * a_p3315, rt_int a_p3316);
static void yr3321_DefineAll(void * a_p3322, rt_int a_p3323);
static void yr3328_CompileModule(void * a_p3329);
static void yr3334_DeclareTemplate(void * a_p3335);
static void yr3340_Instantiate(void * a_p3341);
static void yr3346_DeclareProcess(void * a_p3347);
static void yr3352_AwaitProcesses(void);
static void yr3357_Activate(void * a_p3358, void * a_p3359);
static rt_int yr3364_MonitorPath(void * a_p3365);
static void yr3370_EnterMonitor(void * a_p3371);
static void yr3376_LeaveMonitor(void);
static void yr3381_TerminateStatement(void * a_p3382);
static void yr3387_DeclareSignal(void * a_p3388, rt_int a_p3389);
static void yr3394_DeclareSignalArray(void * a_p3395, rt_int a_p3396);
static void yr3401_DeviceSignal(void * a_p3402, void * a_p3403);
static void * yr3408_Arg(void * a_p3409, rt_int a_p3410);
static void yr3415_NArgs(void * a_p3416, rt_int a_p3417);
static rt_int yr3422_Call1(yarr a_p3424, rt_int a_p3425);
static rt_int yr3430_Addr(rt_int a_p3431);
static void yr3436_StdVar(void * a_p3437, rt_int a_p3438, rt_int * a_p3439, void * * a_p3440);
static void yr3445_NumArg(void * a_p3446, rt_int * a_p3447, void * * a_p3448);
static rt_int yr3453_IntArg(void * a_p3454);
static void yr3459_CodeInsert(void * a_p3460);
static void * yr3465_ManifestScale(void * a_p3466, void * a_p3467);
static void yr3472_StdCall(rt_int a_p3473, void * a_p3474, rt_int a_p3475, rt_int * a_p3476, void * * a_p3477);
static void yr3482_StdRep(yarr a_p3484, void * a_p3485);
static void yr3490_StdOp(yarr a_p3492, rt_int a_p3493);
static void * yr3498_LitList(yarr a_p3500, yarr a_p3501, yarr a_p3502, rt_int a_p3503);
static void * yr3508_Abstract(rt_int a_p3509, yarr a_p3511);
static void yr3516_Predefine(void);
static void yr3521_Translate(void);
static void yr3526_WriteProgram(void);
static void yr983_InitChars(void) {
struct yf984 F;
memset((void *)&F, 0, sizeof F);
F.v3532 = INT64_C(0);
{ rt_int hi3537 = 127;
for (rt_int i3536 = 0; i3536 <= hi3537; i3536++) { F.c_3535 = i3536;
((rt_int *)(v949).p)[y_ix1(v949, F.c_3535)] = F.v3532;
((unsigned char *)(v960).p)[y_ix1(v960, F.v3532)] = F.c_3535;
F.v3532 = rt_range(rt_add(F.v3532, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3536 == hi3537) break;
}}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr988_IsLetter(unsigned char a_p989) {
struct yf990 F;
memset((void *)&F, 0, sizeof F);
F.p989 = a_p989;
{ rt_int rv3547 = ((((((F.p989 >= 65)) && ((F.p989 <= 90)))) || ((((F.p989 >= 97)) && ((F.p989 <= 122))))) || ((F.p989 == 95)));
return rv3547; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr994_IsDigit(unsigned char a_p995) {
struct yf996 F;
memset((void *)&F, 0, sizeof F);
F.p995 = a_p995;
{ rt_int rv3552 = (((F.p995 >= 48)) && ((F.p995 <= 57)));
return rv3552; }
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
F.lo3571 = y_low(F.p1019, INT64_C(1));
F.hi3572 = y_high(F.p1019, INT64_C(1));
{ rt_int hi3576 = F.hi3572;
for (rt_int i3575 = F.lo3571; i3575 <= hi3576; i3575++) { F.c_3574 = i3575;
yr1011_SC(((unsigned char *)(F.p1019).p)[y_ix1(F.p1019, F.c_3574)]);
if (i3575 == hi3576) break;
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
F.v3580 = ((rt_int *)(v902).p)[y_ix1(v902, F.p1025)];
while ((F.v3580 < (rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.p1025)], ((rt_int *)(v904).p)[y_ix1(v904, F.p1025)])))) {
yr1011_SC(((unsigned char *)(v897).p)[y_ix1(v897, F.v3580)]);
F.v3580 = rt_range(rt_add(F.v3580, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1030_SI(rt_int a_p1031) {
struct yf1032 F;
memset((void *)&F, 0, sizeof F);
F.p1031 = a_p1031;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(24)}; y_desc_array(&F.yd_3595, 1, lo, hi, &y_d_byte); }
y_init(&F.yd_3595, &F.v3597);
F.v3599 = INT64_C(0);
F.v3602 = F.p1031;
if ((F.v3602 < INT64_C(0))) {
yr1011_SC(45);
F.v3602 = rt_range(rt_neg(F.v3602), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
for (;;) {
F.v3599 = rt_range(rt_add(F.v3599, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((unsigned char *)(F.v3597).p)[y_ix1(F.v3597, F.v3599)] = ((unsigned char *)(v960).p)[y_ix1(v960, rt_add((rt_mod(F.v3602, INT64_C(10))), INT64_C(48)))];
F.v3602 = rt_range(rt_div(F.v3602, INT64_C(10)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.v3602 == INT64_C(0))) {
goto yl_3606;
}
}
yl_3606: ;
while ((F.v3599 > INT64_C(0))) {
yr1011_SC(((unsigned char *)(F.v3597).p)[y_ix1(F.v3597, F.v3599)]);
F.v3599 = rt_range(rt_sub(F.v3599, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1036_SE(void) {
struct yf1037 F;
memset((void *)&F, 0, sizeof F);
F.v3621 = ((rt_int *)(v937).p)[y_ix1(v937, v939)];
v939 = rt_range(rt_sub(v939, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v906 = rt_range(rt_add(v906, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v902).p)[y_ix1(v902, v906)] = rt_range(rt_add(v899, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v904).p)[y_ix1(v904, v906)] = rt_range(rt_sub(v925, F.v3621), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo3632 = rt_add(F.v3621, INT64_C(1));
F.hi3633 = v925;
{ rt_int hi3637 = F.hi3633;
for (rt_int i3636 = F.lo3632; i3636 <= hi3637; i3636++) { F.c_3635 = i3636;
yr1000_PoolAdd(((unsigned char *)(v923).p)[y_ix1(v923, F.c_3635)]);
if (i3636 == hi3637) break;
}}
v925 = F.v3621;
{ rt_int rv3638 = rt_range(v906, INT64_C(0), INT64_C(4000000));
return rv3638; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1041_T(yarr a_p1043) {
struct yf1044 F;
memset((void *)&F, 0, sizeof F);
F.p1043 = a_p1043;
yr1006_SB();
yr1017_SA(F.p1043);
{ rt_int rv3641 = yr1036_SE();
return rv3641; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1048_Intern(rt_int a_p1049, rt_int a_p1050) {
struct yf1051 F;
memset((void *)&F, 0, sizeof F);
F.p1049 = a_p1049;
F.p1050 = a_p1050;
F.v3646 = INT64_C(0);
F.lo3656 = F.p1049;
F.hi3657 = rt_sub((rt_add(F.p1049, F.p1050)), INT64_C(1));
{ rt_int hi3661 = F.hi3657;
for (rt_int i3660 = F.lo3656; i3660 <= hi3661; i3660++) { F.c_3659 = i3660;
F.v3646 = rt_range(rt_mod((rt_add((rt_mul(F.v3646, INT64_C(31))), ((rt_int *)(v949).p)[y_ix1(v949, ((unsigned char *)(v897).p)[y_ix1(v897, F.c_3659)])])), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3660 == hi3661) break;
}}
for (;;) {
if ((((rt_int *)(v909).p)[y_ix1(v909, F.v3646)] == INT64_C(0))) {
v906 = rt_range(rt_add(v906, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v902).p)[y_ix1(v902, v906)] = F.p1049;
((rt_int *)(v904).p)[y_ix1(v904, v906)] = F.p1050;
((rt_int *)(v909).p)[y_ix1(v909, F.v3646)] = rt_range(v906, INT64_C(0), INT64_C(4000000));
{ rt_int rv3671 = rt_range(v906, INT64_C(0), INT64_C(4000000));
return rv3671; }
}
F.v3649 = ((rt_int *)(v909).p)[y_ix1(v909, F.v3646)];
if ((((rt_int *)(v904).p)[y_ix1(v904, F.v3649)] == F.p1050)) {
F.v3651 = 1;
F.lo3678 = INT64_C(0);
F.hi3679 = rt_sub(F.p1050, INT64_C(1));
{ rt_int hi3683 = F.hi3679;
for (rt_int i3682 = F.lo3678; i3682 <= hi3683; i3682++) { F.c_3681 = i3682;
if ((!(((unsigned char *)(v897).p)[y_ix1(v897, rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.v3649)], F.c_3681))] == ((unsigned char *)(v897).p)[y_ix1(v897, rt_add(F.p1049, F.c_3681))]))) {
F.v3651 = 0;
}
if (i3682 == hi3683) break;
}}
if (F.v3651) {
{ rt_int rv3687 = rt_range(F.v3649, INT64_C(0), INT64_C(4000000));
return rv3687; }
}
}
F.v3646 = rt_range(rt_mod((rt_add(F.v3646, INT64_C(1))), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yl_3667: ;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1055_Name(rt_int a_p1056) {
struct yf1057 F;
memset((void *)&F, 0, sizeof F);
F.p1056 = a_p1056;
{ rt_int rv3694 = yr1048_Intern(((rt_int *)(v902).p)[y_ix1(v902, F.p1056)], ((rt_int *)(v904).p)[y_ix1(v904, F.p1056)]);
return rv3694; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1061_N(yarr a_p1063) {
struct yf1064 F;
memset((void *)&F, 0, sizeof F);
F.p1063 = a_p1063;
{ rt_int rv3697 = yr1055_Name(yr1041_T(F.p1063));
return rv3697; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1068_TEq(rt_int a_p1069, rt_int a_p1070) {
struct yf1071 F;
memset((void *)&F, 0, sizeof F);
F.p1069 = a_p1069;
F.p1070 = a_p1070;
if ((F.p1069 == F.p1070)) {
{ rt_int rv3702 = 1;
return rv3702; }
}
if ((!(((rt_int *)(v904).p)[y_ix1(v904, F.p1069)] == ((rt_int *)(v904).p)[y_ix1(v904, F.p1070)]))) {
{ rt_int rv3704 = 0;
return rv3704; }
}
F.lo3710 = INT64_C(0);
F.hi3711 = rt_sub(((rt_int *)(v904).p)[y_ix1(v904, F.p1069)], INT64_C(1));
{ rt_int hi3715 = F.hi3711;
for (rt_int i3714 = F.lo3710; i3714 <= hi3715; i3714++) { F.c_3713 = i3714;
if ((!(((unsigned char *)(v897).p)[y_ix1(v897, rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.p1069)], F.c_3713))] == ((unsigned char *)(v897).p)[y_ix1(v897, rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.p1070)], F.c_3713))]))) {
{ rt_int rv3719 = 0;
return rv3719; }
}
if (i3714 == hi3715) break;
}}
{ rt_int rv3721 = 1;
return rv3721; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1075_TStarts(rt_int a_p1076, yarr a_p1078) {
struct yf1079 F;
memset((void *)&F, 0, sizeof F);
F.p1076 = a_p1076;
F.p1078 = a_p1078;
F.v3726 = INT64_C(0);
if ((((rt_int *)(v904).p)[y_ix1(v904, F.p1076)] < (rt_add((rt_sub(y_high(F.p1078, INT64_C(1)), y_low(F.p1078, INT64_C(1)))), INT64_C(1))))) {
{ rt_int rv3736 = 0;
return rv3736; }
}
F.lo3742 = y_low(F.p1078, INT64_C(1));
F.hi3743 = y_high(F.p1078, INT64_C(1));
{ rt_int hi3747 = F.hi3743;
for (rt_int i3746 = F.lo3742; i3746 <= hi3747; i3746++) { F.c_3745 = i3746;
if ((!(((unsigned char *)(v897).p)[y_ix1(v897, rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.p1076)], F.v3726))] == ((unsigned char *)(F.p1078).p)[y_ix1(F.p1078, F.c_3745)]))) {
{ rt_int rv3750 = 0;
return rv3750; }
}
F.v3726 = rt_range(rt_add(F.v3726, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3746 == hi3747) break;
}}
{ rt_int rv3754 = 1;
return rv3754; }
rt_raise(Y_X_NO_RETURN);
}
static unsigned char yr1083_TChar(rt_int a_p1084, rt_int a_p1085) {
struct yf1086 F;
memset((void *)&F, 0, sizeof F);
F.p1084 = a_p1084;
F.p1085 = a_p1085;
{ unsigned char rv3761 = ((unsigned char *)(v897).p)[y_ix1(v897, rt_sub((rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.p1084)], F.p1085)), INT64_C(1)))];
return rv3761; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1090_Put(yR134 * a_p1091, rt_int a_p1092) {
struct yf1093 F;
memset((void *)&F, 0, sizeof F);
F.p1091 = a_p1091;
F.p1092 = a_p1092;
({ F.v3766 = rt_alloc(sizeof(yR129)); });
(*(yR129 *)rt_nil_check(F.v3766)) = ((yR129){ .f_t = F.p1092, .f_next = ((void *)0) });
if ((((*F.p1091)).f_head == ((void *)0))) {
((*F.p1091)).f_head = F.v3766;
} else {
((*(yR129 *)rt_nil_check(((*F.p1091)).f_tail))).f_next = F.v3766;
}
((*F.p1091)).f_tail = F.v3766;
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
F.v3780 = ((rt_int *)(v902).p)[y_ix1(v902, F.p1126)];
while ((F.v3780 < (rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.p1126)], ((rt_int *)(v904).p)[y_ix1(v904, F.p1126)])))) {
({ unsigned char pv = ((unsigned char *)(v897).p)[y_ix1(v897, F.v3780)]; y_put(&v895, &pv, sizeof pv); });
F.v3780 = rt_range(rt_add(F.v3780, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1131_WriteBuf(yR134 a_p1132) {
struct yf1133 F;
memset((void *)&F, 0, sizeof F);
F.p1132 = a_p1132;
F.v3787 = (F.p1132).f_head;
while ((!(F.v3787 == ((void *)0)))) {
yr1125_WriteTxt(((*(yR129 *)rt_nil_check(F.v3787))).f_t);
({ unsigned char pv = 10; y_put(&v895, &pv, sizeof pv); });
F.v3787 = ((*(yR129 *)rt_nil_check(F.v3787))).f_next;
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
F.v3793 = yr1036_SE();
yr1125_WriteTxt(F.v3793);
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
F.v3807 = yr1036_SE();
yr1137_Fail(F.p1153, F.v3807);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1161_NewSerial(void) {
struct yf1162 F;
memset((void *)&F, 0, sizeof F);
v942 = rt_range(rt_add(v942, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
{ rt_int rv3811 = v942;
return rv3811; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1166_Fresh(yarr a_p1168) {
struct yf1169 F;
memset((void *)&F, 0, sizeof F);
F.p1168 = a_p1168;
F.v3815 = yr1161_NewSerial();
yr1006_SB();
yr1017_SA(F.p1168);
yr1030_SI(F.v3815);
{ rt_int rv3816 = yr1036_SE();
return rv3816; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1764_InitWords(void) {
struct yf1765 F;
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
F.v3823 = yr1036_SE();
v906 = INT64_C(0);
F.v3819 = ((rt_int *)(v902).p)[y_ix1(v902, F.v3823)];
F.lo3840 = ((rt_int *)(v902).p)[y_ix1(v902, F.v3823)];
F.hi3841 = rt_sub((rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.v3823)], ((rt_int *)(v904).p)[y_ix1(v904, F.v3823)])), INT64_C(1));
{ rt_int hi3845 = F.hi3841;
for (rt_int i3844 = F.lo3840; i3844 <= hi3845; i3844++) { F.c_3843 = i3844;
if ((((unsigned char *)(v897).p)[y_ix1(v897, F.c_3843)] == 32)) {
F.v3821 = yr1048_Intern(F.v3819, rt_range(rt_sub(F.c_3843, F.v3819), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v3819 = rt_range(rt_add(F.c_3843, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i3844 == hi3845) break;
}}
if ((!(v906 == v605))) {
rt_raise(rt_exc("word_table"));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1769_ReadSource(void) {
struct yf1770 F;
memset((void *)&F, 0, sizeof F);
y_open(&v893, y_str("INPUT", 5), 0);
v1182 = rt_range(rt_add(v899, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!y_check_eof(&v893))) {
({ unsigned char g; y_get(&v893, &g, sizeof g); F.v3852 = g; });
yr1000_PoolAdd(F.v3852);
}
v1185 = v899;
y_close(&v893);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1774_AddTok(rt_int a_p1775, rt_int a_p1776) {
struct yf1777 F;
memset((void *)&F, 0, sizeof F);
F.p1775 = a_p1775;
F.p1776 = a_p1776;
v1179 = rt_range(rt_add(v1179, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1173).p)[y_ix1(v1173, v1179)] = F.p1775;
((rt_int *)(v1175).p)[y_ix1(v1175, v1179)] = F.p1776;
((rt_int *)(v1177).p)[y_ix1(v1177, v1179)] = v1191;
return;
rt_raise(Y_X_NO_RETURN);
}
static unsigned char yr1781_At(rt_int a_p1782) {
struct yf1783 F;
memset((void *)&F, 0, sizeof F);
F.p1782 = a_p1782;
if ((F.p1782 > v1185)) {
{ unsigned char rv3865 = 0;
return rv3865; }
}
{ unsigned char rv3866 = ((unsigned char *)(v897).p)[y_ix1(v897, F.p1782)];
return rv3866; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1787_EndsOperand(void) {
struct yf1788 F;
memset((void *)&F, 0, sizeof F);
if ((v1179 == INT64_C(0))) {
{ rt_int rv3874 = 0;
return rv3874; }
}
F.v3869 = ((rt_int *)(v1173).p)[y_ix1(v1173, v1179)];
F.v3871 = ((rt_int *)(v1175).p)[y_ix1(v1175, v1179)];
if ((((((((F.v3869 == v191)) || ((F.v3869 == v200))) || ((F.v3869 == v203))) || ((F.v3869 == v206))) || ((F.v3869 == v209))) || ((F.v3869 == v212)))) {
{ rt_int rv3876 = 1;
return rv3876; }
}
if ((F.v3869 == v197)) {
{ rt_int rv3877 = ((((F.v3871 == v581)) || ((F.v3871 == v587))) || ((F.v3871 == v602)));
return rv3877; }
}
if ((F.v3869 == v194)) {
{ rt_int rv3878 = (F.v3871 == v371);
return rv3878; }
}
{ rt_int rv3880 = 0;
return rv3880; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1792_DigitVal(unsigned char a_p1793) {
struct yf1794 F;
memset((void *)&F, 0, sizeof F);
F.p1793 = a_p1793;
if ((((F.p1793 >= 48)) && ((F.p1793 <= 57)))) {
{ rt_int rv3887 = rt_range(rt_sub(((rt_int *)(v949).p)[y_ix1(v949, F.p1793)], INT64_C(48)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return rv3887; }
}
if ((((F.p1793 >= 65)) && ((F.p1793 <= 70)))) {
{ rt_int rv3892 = rt_range(rt_sub(((rt_int *)(v949).p)[y_ix1(v949, F.p1793)], INT64_C(55)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return rv3892; }
}
{ rt_int rv3894 = INT64_C(99);
return rv3894; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1798_LexError(yarr a_p1800) {
struct yf1801 F;
memset((void *)&F, 0, sizeof F);
F.p1800 = a_p1800;
yr1144_FailS(v1191, F.p1800);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1805_LexDigits(rt_int a_p1806, rt_int a_p1807) {
struct yf1808 F;
memset((void *)&F, 0, sizeof F);
F.p1806 = a_p1806;
F.p1807 = a_p1807;
while ((yr994_IsDigit(yr1781_At(v1188)) || ((F.p1807 && ((yr1792_DigitVal(yr1781_At(v1188)) < INT64_C(16))))))) {
if ((yr1792_DigitVal(yr1781_At(v1188)) >= F.p1806)) {
yr1006_SB();
yr1011_SC(39);
yr1011_SC(yr1781_At(v1188));
yr1017_SA(y_str("' is not a digit of BASE", 24));
yr1030_SI(F.p1806);
yr1017_SA(y_str(" (IV.B)", 7));
F.v3901 = yr1036_SE();
yr1137_Fail(v1191, F.v3901);
}
v1188 = rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1812_LexNumber(rt_int a_p1813) {
struct yf1814 F;
memset((void *)&F, 0, sizeof F);
F.p1813 = a_p1813;
F.v3911 = INT64_C(10);
F.v3922 = 0;
F.v3925 = 0;
F.v3928 = INT64_C(0);
F.v3931 = INT64_C(0);
F.v3934 = INT64_C(0);
F.v3937 = INT64_C(0);
F.v3940 = INT64_C(0);
if ((!(v1194 == INT64_C(0)))) {
F.v3911 = v1194;
F.v3925 = 1;
}
v1194 = INT64_C(0);
F.v3914 = v1188;
yr1805_LexDigits(F.v3911, F.v3925);
F.v3916 = v1188;
if ((F.v3916 == F.v3914)) {
yr1798_LexError(y_str("a number has at least one digit (IV.B)", 38));
}
F.v3918 = v1188;
F.v3920 = v1188;
if ((((yr1781_At(v1188) == 46)) && ((!(yr1781_At(rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 46))))) {
F.v3922 = 1;
v1188 = rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3918 = v1188;
yr1805_LexDigits(F.v3911, F.v3925);
F.v3920 = v1188;
}
if ((yr1781_At(v1188) == 80)) {
v1188 = rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3937 = INT64_C(1);
if ((((((yr1781_At(v1188) == 45)) || ((yr1781_At(v1188) == 43)))) && yr994_IsDigit(yr1781_At(rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))) {
if ((yr1781_At(v1188) == 45)) {
F.v3937 = INT64_C(-1);
}
v1188 = rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3934 = INT64_C(0);
while (yr994_IsDigit(yr1781_At(v1188))) {
if ((F.v3934 > INT64_C(1000))) {
yr1798_LexError(y_str("a fixed-point exponent beyond this implementation", 49));
}
F.v3934 = rt_range(rt_add((rt_mul(F.v3934, INT64_C(10))), yr1792_DigitVal(yr1781_At(v1188))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1188 = rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v3934 = rt_range(rt_mul(F.v3934, F.v3937), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v3928 = INT64_C(0);
F.v3940 = rt_range(rt_sub(F.v3920, F.v3918), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo3981 = F.v3914;
F.hi3982 = rt_sub(F.v3920, INT64_C(1));
{ rt_int hi3986 = F.hi3982;
for (rt_int i3985 = F.lo3981; i3985 <= hi3986; i3985++) { F.c_3984 = i3985;
if ((((F.c_3984 < F.v3916)) || ((F.c_3984 >= F.v3918)))) {
F.v3931 = yr1792_DigitVal(((unsigned char *)(v897).p)[y_ix1(v897, F.c_3984)]);
if ((F.v3928 > (rt_div((rt_sub(v890, F.v3931)), F.v3911)))) {
yr1798_LexError(y_str("a fixed-point literal with more digits than this implementation holds", 69));
}
F.v3928 = rt_range(rt_add((rt_mul(F.v3928, F.v3911)), F.v3931), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i3985 == hi3986) break;
}}
if (F.p1813) {
F.v3928 = rt_range(rt_neg(F.v3928), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((v1212 >= INT64_C(200000))) {
yr1798_LexError(y_str("too many fixed-point literals", 29));
}
v1212 = rt_range(rt_add(v1212, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1206).p)[y_ix1(v1206, v1212)] = F.v3928;
((rt_int *)(v1208).p)[y_ix1(v1208, v1212)] = F.v3911;
((rt_int *)(v1210).p)[y_ix1(v1210, v1212)] = rt_range(rt_sub(F.v3934, F.v3940), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1774_AddTok(v203, v1212);
return;
}
if (F.v3922) {
if ((!(F.v3911 == INT64_C(10)))) {
yr1798_LexError(y_str("a floating-point literal is decimal", 35));
}
if ((yr1781_At(v1188) == 69)) {
v1188 = rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((yr1781_At(v1188) == 45)) || ((yr1781_At(v1188) == 43)))) {
v1188 = rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
while (yr994_IsDigit(yr1781_At(v1188))) {
v1188 = rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1006_SB();
if (F.p1813) {
yr1017_SA(y_str("-", 1));
}
F.lo4013 = F.v3914;
F.hi4014 = rt_sub(v1188, INT64_C(1));
{ rt_int hi4018 = F.hi4014;
for (rt_int i4017 = F.lo4013; i4017 <= hi4018; i4017++) { F.c_4016 = i4017;
yr1011_SC(((unsigned char *)(v897).p)[y_ix1(v897, F.c_4016)]);
if (i4017 == hi4018) break;
}}
F.v3943 = yr1036_SE();
yr1774_AddTok(v206, F.v3943);
return;
}
F.v3928 = INT64_C(0);
F.lo4023 = F.v3914;
F.hi4024 = rt_sub(F.v3916, INT64_C(1));
{ rt_int hi4028 = F.hi4024;
for (rt_int i4027 = F.lo4023; i4027 <= hi4028; i4027++) { F.c_4026 = i4027;
F.v3931 = yr1792_DigitVal(((unsigned char *)(v897).p)[y_ix1(v897, F.c_4026)]);
if ((F.v3928 > (rt_div((rt_sub(v890, F.v3931)), F.v3911)))) {
yr1798_LexError(y_str("integer literal too large", 25));
}
F.v3928 = rt_range(rt_add((rt_mul(F.v3928, F.v3911)), F.v3931), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i4027 == hi4028) break;
}}
if (F.p1813) {
F.v3928 = rt_range(rt_neg(F.v3928), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yr1774_AddTok(v200, F.v3928);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1818_LexString(void) {
struct yf1819 F;
memset((void *)&F, 0, sizeof F);
yr1006_SB();
for (;;) {
v1188 = rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1781_At(v1188) == 34))) {
if ((((yr1781_At(v1188) == 10)) || ((v1188 > v1185)))) {
v911 = 0;
yr1798_LexError(y_str("a string must close on its line", 31));
}
yr1011_SC(yr1781_At(v1188));
v1188 = rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1188 = rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4039 = v1188;
F.v4041 = INT64_C(0);
F.v4043 = 1;
while (F.v4043) {
if (((((yr1781_At(F.v4039) == 32)) || ((yr1781_At(F.v4039) == 9))) || ((yr1781_At(F.v4039) == 13)))) {
F.v4039 = rt_range(rt_add(F.v4039, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr1781_At(F.v4039) == 10)) {
F.v4041 = rt_range(rt_add(F.v4041, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4039 = rt_range(rt_add(F.v4039, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v4043 = 0;
}
}
if ((!(yr1781_At(F.v4039) == 34))) {
goto yl_4044;
}
v1191 = rt_range(rt_add(v1191, F.v4041), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1188 = F.v4039;
}
yl_4044: ;
F.v4037 = yr1036_SE();
yr1774_AddTok(v212, F.v4037);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1823_Lex(void) {
struct yf1824 F;
memset((void *)&F, 0, sizeof F);
v1188 = v1182;
while ((v1188 <= v1185)) {
F.v4072 = ((unsigned char *)(v897).p)[y_ix1(v897, v1188)];
if ((F.v4072 == 10)) {
v1191 = rt_range(rt_add(v1191, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1188 = rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((((F.v4072 == 32)) || ((F.v4072 == 9))) || ((F.v4072 == 13))) || ((F.v4072 == 12)))) {
v1188 = rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v4072 == 40)) && ((yr1781_At(rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 42)))) {
v1188 = rt_range(rt_add(v1188, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!((((yr1781_At(v1188) == 42)) && ((yr1781_At(rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 41)))))) {
if ((((yr1781_At(v1188) == 10)) || ((v1188 > v1185)))) {
yr1798_LexError(y_str("a comment must close on its line", 32));
}
v1188 = rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1188 = rt_range(rt_add(v1188, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr994_IsDigit(F.v4072) || ((((v1194 == INT64_C(16))) && ((yr1792_DigitVal(F.v4072) < INT64_C(16))))))) {
yr1812_LexNumber(0);
} else if (((((((F.v4072 == 45)) || ((F.v4072 == 43)))) && (!yr1787_EndsOperand())) && ((yr994_IsDigit(yr1781_At(rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || ((((v1194 == INT64_C(16))) && ((yr1792_DigitVal(yr1781_At(rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) < INT64_C(16))))))))) {
v1188 = rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1812_LexNumber((F.v4072 == 45));
} else if ((!(v1194 == INT64_C(0)))) {
yr1798_LexError(y_str("a BASE word is followed by a number (IV.B)", 42));
} else if (yr988_IsLetter(F.v4072)) {
F.v4074 = v1188;
while ((yr988_IsLetter(yr1781_At(v1188)) || yr994_IsDigit(yr1781_At(v1188)))) {
v1188 = rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v4082 = yr1048_Intern(F.v4074, rt_range(rt_sub(v1188, F.v4074), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((F.v4082 == v236)) {
v1194 = INT64_C(2);
} else if ((F.v4082 == v239)) {
v1194 = INT64_C(8);
} else if ((F.v4082 == v242)) {
v1194 = INT64_C(10);
} else if ((F.v4082 == v245)) {
v1194 = INT64_C(16);
} else if ((F.v4082 <= v476)) {
yr1774_AddTok(v194, F.v4082);
} else {
yr1774_AddTok(v191, F.v4082);
}
} else if ((F.v4072 == 39)) {
F.v4074 = rt_range(rt_add(v1188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4076 = F.v4074;
while ((!(yr1781_At(F.v4076) == 39))) {
if (((((yr1781_At(F.v4076) == 10)) || ((yr1781_At(F.v4076) == 34))) || ((F.v4076 > v1185)))) {
yr1798_LexError(y_str("bad character literal", 21));
}
F.v4076 = rt_range(rt_add(F.v4076, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v4076 == F.v4074)) {
yr1798_LexError(y_str("empty character literal", 23));
}
F.v4082 = yr1048_Intern(F.v4074, rt_range(rt_sub(F.v4076, F.v4074), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1774_AddTok(v209, F.v4082);
v1188 = rt_range(rt_add(F.v4076, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v4072 == 34)) {
yr1818_LexString();
} else {
F.v4078 = INT64_C(0);
F.v4076 = rt_range(rt_add(v476, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((F.v4078 == INT64_C(0))) && ((F.v4076 <= v605)))) {
F.v4080 = ((rt_int *)(v904).p)[y_ix1(v904, F.v4076)];
F.v4086 = 1;
F.lo4161 = INT64_C(0);
F.hi4162 = rt_sub(F.v4080, INT64_C(1));
{ rt_int hi4166 = F.hi4162;
for (rt_int i4165 = F.lo4161; i4165 <= hi4166; i4165++) { F.c_4164 = i4165;
if ((!(yr1781_At(rt_range(rt_add(v1188, F.c_4164), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == ((unsigned char *)(v897).p)[y_ix1(v897, rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.v4076)], F.c_4164))]))) {
F.v4086 = 0;
}
if (i4165 == hi4166) break;
}}
if (F.v4086) {
F.v4078 = F.v4076;
}
F.v4076 = rt_range(rt_add(F.v4076, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v4078 == INT64_C(0))) {
yr1798_LexError(y_str("a character that is not in the language", 39));
}
yr1774_AddTok(v197, F.v4078);
v1188 = rt_range(rt_add(v1188, ((rt_int *)(v904).p)[y_ix1(v904, F.v4078)]), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1774_AddTok(v188, INT64_C(0));
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1828_NewNode(rt_int a_p1829, rt_int a_p1830) {
struct yf1831 F;
memset((void *)&F, 0, sizeof F);
F.p1829 = a_p1829;
F.p1830 = a_p1830;
({ F.v4180 = rt_alloc(sizeof(yR99)); });
(*(yR99 *)rt_nil_check(F.v4180)) = ((yR99){ .f_kind = F.p1829, .f_line = F.p1830, .f_ival = INT64_C(0), .f_flag = INT64_C(0), .f_name = INT64_C(0), .f_text = INT64_C(0), .f_a = ((void *)0), .f_b = ((void *)0), .f_c = ((void *)0), .f_d = ((void *)0), .f_e = ((void *)0), .f_next = ((void *)0), .f_rep = ((void *)0), .f_sym = ((void *)0) });
{ void * rv4185 = F.v4180;
return rv4185; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1835_Link(void * * a_p1836, void * * a_p1837, void * a_p1838) {
struct yf1839 F;
memset((void *)&F, 0, sizeof F);
F.p1836 = a_p1836;
F.p1837 = a_p1837;
F.p1838 = a_p1838;
if (((*F.p1836) == ((void *)0))) {
(*F.p1836) = F.p1838;
} else {
((*(yR99 *)rt_nil_check((*F.p1837)))).f_next = F.p1838;
}
(*F.p1837) = F.p1838;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1843_Count(void * a_p1844) {
struct yf1845 F;
memset((void *)&F, 0, sizeof F);
F.p1844 = a_p1844;
F.v4193 = INT64_C(0);
F.v4196 = F.p1844;
while ((!(F.v4196 == ((void *)0)))) {
F.v4193 = rt_range(rt_add(F.v4193, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4196 = ((*(yR99 *)rt_nil_check(F.v4196))).f_next;
}
{ rt_int rv4199 = F.v4193;
return rv4199; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1849_TK(void) {
struct yf1850 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv4201 = ((rt_int *)(v1173).p)[y_ix1(v1173, v1215)];
return rv4201; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1854_TV(void) {
struct yf1855 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv4203 = ((rt_int *)(v1175).p)[y_ix1(v1175, v1215)];
return rv4203; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1859_TLn(void) {
struct yf1860 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv4205 = ((rt_int *)(v1177).p)[y_ix1(v1177, v1215)];
return rv4205; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1864_IsAt(rt_int a_p1865, rt_int a_p1866) {
struct yf1867 F;
memset((void *)&F, 0, sizeof F);
F.p1865 = a_p1865;
F.p1866 = a_p1866;
F.v4210 = ((rt_int *)(v1173).p)[y_ix1(v1173, rt_add(v1215, F.p1865))];
{ rt_int rv4213 = (((((F.v4210 == v194)) || ((F.v4210 == v197)))) && ((((rt_int *)(v1175).p)[y_ix1(v1175, rt_add(v1215, F.p1865))] == F.p1866)));
return rv4213; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1871_Is(rt_int a_p1872) {
struct yf1873 F;
memset((void *)&F, 0, sizeof F);
F.p1872 = a_p1872;
{ rt_int rv4217 = yr1864_IsAt(INT64_C(0), F.p1872);
return rv4217; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1877_IsIdAt(rt_int a_p1878) {
struct yf1879 F;
memset((void *)&F, 0, sizeof F);
F.p1878 = a_p1878;
{ rt_int rv4221 = (((rt_int *)(v1173).p)[y_ix1(v1173, rt_add(v1215, F.p1878))] == v191);
return rv4221; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1883_Skip(void) {
struct yf1884 F;
memset((void *)&F, 0, sizeof F);
if ((!(((rt_int *)(v1173).p)[y_ix1(v1173, v1215)] == v188))) {
v1215 = rt_range(rt_add(v1215, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1888_Accept(rt_int a_p1889) {
struct yf1890 F;
memset((void *)&F, 0, sizeof F);
F.p1889 = a_p1889;
if (yr1871_Is(F.p1889)) {
yr1883_Skip();
{ rt_int rv4228 = 1;
return rv4228; }
}
{ rt_int rv4230 = 0;
return rv4230; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1894_TokText(void) {
struct yf1895 F;
memset((void *)&F, 0, sizeof F);
F.v4233 = yr1849_TK();
if ((((((F.v4233 == v191)) || ((F.v4233 == v194))) || ((F.v4233 == v197))) || ((F.v4233 == v209)))) {
{ rt_int rv4234 = rt_range(yr1854_TV(), INT64_C(0), INT64_C(4000000));
return rv4234; }
}
if ((F.v4233 == v188)) {
{ rt_int rv4236 = yr1041_T(y_str("the end of the text", 19));
return rv4236; }
}
if ((F.v4233 == v200)) {
yr1006_SB();
yr1030_SI(yr1854_TV());
{ rt_int rv4237 = yr1036_SE();
return rv4237; }
}
{ rt_int rv4239 = yr1041_T(y_str("a literal", 9));
return rv4239; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1899_Expect(rt_int a_p1900) {
struct yf1901 F;
memset((void *)&F, 0, sizeof F);
F.p1900 = a_p1900;
if ((!yr1888_Accept(F.p1900))) {
yr1006_SB();
yr1017_SA(y_str("expected ", 9));
yr1024_ST(rt_range(F.p1900, INT64_C(0), INT64_C(4000000)));
yr1017_SA(y_str(", found ", 8));
yr1024_ST(yr1894_TokText());
F.v4243 = yr1036_SE();
yr1137_Fail(yr1859_TLn(), F.v4243);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1905_Ident(void) {
struct yf1906 F;
memset((void *)&F, 0, sizeof F);
if ((!(yr1849_TK() == v191))) {
yr1006_SB();
yr1017_SA(y_str("expected an identifier, found ", 30));
yr1024_ST(yr1894_TokText());
F.v4248 = yr1036_SE();
yr1137_Fail(yr1859_TLn(), F.v4248);
}
F.v4248 = rt_range(yr1854_TV(), INT64_C(0), INT64_C(4000000));
yr1883_Skip();
{ rt_int rv4250 = F.v4248;
return rv4250; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1910_CloseName(rt_int a_p1911, rt_int a_p1912) {
struct yf1913 F;
memset((void *)&F, 0, sizeof F);
F.p1911 = a_p1911;
F.p1912 = a_p1912;
if (((((yr1849_TK() == v191)) || ((yr1849_TK() == v194))) || ((yr1849_TK() == v197)))) {
F.v4255 = rt_range(yr1854_TV(), INT64_C(0), INT64_C(4000000));
if ((F.v4255 == F.p1911)) {
yr1883_Skip();
return;
}
}
yr1152_FailN(F.p1912, F.p1911, y_str(" is closed with another name", 28));
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1917_ExtendedId(void) {
struct yf1918 F;
memset((void *)&F, 0, sizeof F);
F.v4259 = rt_range(yr1854_TV(), INT64_C(0), INT64_C(4000000));
if ((yr1849_TK() == v191)) {
yr1883_Skip();
{ rt_int rv4260 = F.v4259;
return rv4260; }
}
if ((((yr1849_TK() == v194)) && (((((((((F.v4259 == v374)) || ((F.v4259 == v221))) || ((F.v4259 == v383))) || ((F.v4259 == v260))) || ((F.v4259 == v362))) || ((F.v4259 == v473))) || ((F.v4259 == v344)))))) {
yr1883_Skip();
{ rt_int rv4261 = F.v4259;
return rv4261; }
}
if (((((((((((((yr1849_TK() == v197)) && ((!(F.v4259 == v578)))) && ((!(F.v4259 == v581)))) && ((!(F.v4259 == v584)))) && ((!(F.v4259 == v587)))) && ((!(F.v4259 == v590)))) && ((!(F.v4259 == v593)))) && ((!(F.v4259 == v596)))) && ((!(F.v4259 == v599)))) && ((!(F.v4259 == v521)))) && ((!(F.v4259 == v518))))) {
yr1883_Skip();
{ rt_int rv4262 = F.v4259;
return rv4262; }
}
yr1144_FailS(yr1859_TLn(), y_str("expected a name", 15));
{ rt_int rv4265 = INT64_C(0);
return rv4265; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1922_IsLabel(rt_int a_p1923) {
struct yf1924 F;
memset((void *)&F, 0, sizeof F);
F.p1923 = a_p1923;
F.v4269 = v1218;
while ((!(F.v4269 == ((void *)0)))) {
if ((((*(yR99 *)rt_nil_check(F.v4269))).f_name == F.p1923)) {
{ rt_int rv4271 = 1;
return rv4271; }
}
F.v4269 = ((*(yR99 *)rt_nil_check(F.v4269))).f_next;
}
{ rt_int rv4273 = 0;
return rv4273; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1928_ImportItem(void) {
struct yf1929 F;
memset((void *)&F, 0, sizeof F);
F.v4276 = yr1828_NewNode(v611, yr1859_TLn());
((*(yR99 *)rt_nil_check(F.v4276))).f_name = yr1917_ExtendedId();
if ((yr1877_IsIdAt(INT64_C(0)) && ((yr1854_TV() == v1220)))) {
yr1883_Skip();
((*(yR99 *)rt_nil_check(F.v4276))).f_text = yr1905_Ident();
}
if (yr1888_Accept(v227)) {
((*(yR99 *)rt_nil_check(F.v4276))).f_ival = yr1917_ExtendedId();
}
{ void * rv4278 = F.v4276;
return rv4278; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1933_ParseModule(void) {
struct yf1934 F;
memset((void *)&F, 0, sizeof F);
F.v4281 = yr1828_NewNode(v608, yr1859_TLn());
F.v4283 = ((void *)0);
F.v4285 = ((void *)0);
F.v4287 = ((void *)0);
if (yr1888_Accept(v368)) {
((*(yR99 *)rt_nil_check(F.v4281))).f_flag = INT64_C(1);
} else {
yr1899_Expect(v365);
}
((*(yR99 *)rt_nil_check(F.v4281))).f_name = yr1905_Ident();
while (yr1888_Accept(v341)) {
for (;;) {
F.v4283 = yr1928_ImportItem();
yr1835_Link(&((*(yR99 *)rt_nil_check(F.v4281))).f_a, &F.v4285, F.v4283);
if ((!yr1888_Accept(v590))) {
goto yl_4291;
}
}
yl_4291: ;
yr1899_Expect(v593);
}
while (yr1888_Accept(v320)) {
F.v4289 = INT64_C(0);
if ((((yr1871_Is(v380) || yr1871_Is(v458)) || yr1871_Is(v413)) || yr1871_Is(v467))) {
F.v4289 = yr1854_TV();
yr1883_Skip();
}
for (;;) {
F.v4283 = yr1928_ImportItem();
((*(yR99 *)rt_nil_check(F.v4283))).f_flag = F.v4289;
yr1835_Link(&((*(yR99 *)rt_nil_check(F.v4281))).f_b, &F.v4287, F.v4283);
if ((!yr1888_Accept(v590))) {
goto yl_4293;
}
}
yl_4293: ;
yr1899_Expect(v593);
}
((*(yR99 *)rt_nil_check(F.v4281))).f_c = yr1943_ParseBlock();
if ((((*(yR99 *)rt_nil_check(F.v4281))).f_flag == INT64_C(1))) {
yr1899_Expect(v293);
} else {
yr1899_Expect(v290);
}
yr1910_CloseName(((*(yR99 *)rt_nil_check(F.v4281))).f_name, ((*(yR99 *)rt_nil_check(F.v4281))).f_line);
{ void * rv4295 = F.v4281;
return rv4295; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1938_IsDeclWord(void) {
struct yf1939 F;
memset((void *)&F, 0, sizeof F);
if ((!(yr1849_TK() == v194))) {
{ rt_int rv4300 = 0;
return rv4300; }
}
F.v4298 = yr1854_TV();
{ rt_int rv4301 = (((((((((((((F.v4298 == v254)) || ((F.v4298 == v467))) || ((F.v4298 == v356))) || ((F.v4298 == v461))) || ((F.v4298 == v422))) || ((F.v4298 == v332))) || ((F.v4298 == v404))) || ((F.v4298 == v365))) || ((F.v4298 == v368))) || ((F.v4298 == v449))) || ((F.v4298 == v350))) || ((F.v4298 == v407)));
return rv4301; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1943_ParseBlock(void) {
struct yf1944 F;
memset((void *)&F, 0, sizeof F);
F.v4304 = yr1828_NewNode(v614, yr1859_TLn());
F.v4306 = ((void *)0);
F.v4308 = v1218;
while (yr1938_IsDeclWord()) {
yr1970_ParseDeclGroup(&((*(yR99 *)rt_nil_check(F.v4304))).f_a, &F.v4306);
while (yr1888_Accept(v593)) {
}
}
if (yr1871_Is(v314)) {
((*(yR99 *)rt_nil_check(F.v4304))).f_b = yr1948_ParseHandler();
F.v4310 = ((*(yR99 *)rt_nil_check(F.v4304))).f_b;
if (yr1888_Accept(v593)) {
}
}
((*(yR99 *)rt_nil_check(F.v4304))).f_c = yr2034_ParseStatements(1);
v1218 = F.v4308;
{ void * rv4312 = F.v4304;
return rv4312; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1948_ParseHandler(void) {
struct yf1949 F;
memset((void *)&F, 0, sizeof F);
F.v4315 = yr1828_NewNode(v617, yr1859_TLn());
F.v4317 = ((void *)0);
F.v4319 = ((void *)0);
F.v4321 = ((void *)0);
F.v4323 = ((void *)0);
yr1899_Expect(v314);
while (yr1888_Accept(v251)) {
F.v4317 = yr1828_NewNode(v620, yr1859_TLn());
F.v4323 = ((void *)0);
for (;;) {
F.v4321 = yr1828_NewNode(v653, yr1859_TLn());
((*(yR99 *)rt_nil_check(F.v4321))).f_name = yr1905_Ident();
yr1835_Link(&((*(yR99 *)rt_nil_check(F.v4317))).f_a, &F.v4323, F.v4321);
if ((!yr1888_Accept(v590))) {
goto yl_4324;
}
}
yl_4324: ;
yr1899_Expect(v518);
((*(yR99 *)rt_nil_check(F.v4317))).f_b = yr2034_ParseStatements(0);
yr1835_Link(&((*(yR99 *)rt_nil_check(F.v4315))).f_a, &F.v4319, F.v4317);
}
if (yr1888_Accept(v266)) {
((*(yR99 *)rt_nil_check(F.v4315))).f_flag = INT64_C(1);
((*(yR99 *)rt_nil_check(F.v4315))).f_b = yr2034_ParseStatements(0);
}
yr1899_Expect(v275);
{ void * rv4328 = F.v4315;
return rv4328; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1953_ParseNames(void) {
struct yf1954 F;
memset((void *)&F, 0, sizeof F);
F.v4331 = ((void *)0);
F.v4333 = ((void *)0);
F.v4335 = ((void *)0);
for (;;) {
F.v4335 = yr1828_NewNode(v653, yr1859_TLn());
((*(yR99 *)rt_nil_check(F.v4335))).f_name = yr1905_Ident();
if (yr1888_Accept(v233)) {
((*(yR99 *)rt_nil_check(F.v4335))).f_a = yr2096_ParseExpr();
}
yr1835_Link(&F.v4331, &F.v4333, F.v4335);
if ((!yr1888_Accept(v590))) {
goto yl_4336;
}
}
yl_4336: ;
{ void * rv4337 = F.v4331;
return rv4337; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1958_SimpleEntry(rt_int a_p1959) {
struct yf1960 F;
memset((void *)&F, 0, sizeof F);
F.p1959 = a_p1959;
if ((F.p1959 == v254)) {
F.v4341 = yr1828_NewNode(v623, yr1859_TLn());
((*(yR99 *)rt_nil_check(F.v4341))).f_a = yr1953_ParseNames();
yr1899_Expect(v596);
((*(yR99 *)rt_nil_check(F.v4341))).f_b = yr1999_ParseRep();
yr1899_Expect(v569);
((*(yR99 *)rt_nil_check(F.v4341))).f_c = yr2096_ParseExpr();
} else if ((F.p1959 == v467)) {
F.v4341 = yr1828_NewNode(v626, yr1859_TLn());
((*(yR99 *)rt_nil_check(F.v4341))).f_a = yr1953_ParseNames();
yr1899_Expect(v596);
((*(yR99 *)rt_nil_check(F.v4341))).f_b = yr1999_ParseRep();
if (yr1888_Accept(v515)) {
((*(yR99 *)rt_nil_check(F.v4341))).f_c = yr2096_ParseExpr();
}
} else if ((F.p1959 == v461)) {
F.v4341 = yr1828_NewNode(v632, yr1859_TLn());
((*(yR99 *)rt_nil_check(F.v4341))).f_name = yr1905_Ident();
yr1899_Expect(v569);
((*(yR99 *)rt_nil_check(F.v4341))).f_b = yr2019_ParseConcrete1();
} else {
F.v4341 = yr1828_NewNode(v635, yr1859_TLn());
((*(yR99 *)rt_nil_check(F.v4341))).f_name = yr1905_Ident();
yr1899_Expect(v569);
((*(yR99 *)rt_nil_check(F.v4341))).f_b = yr1999_ParseRep();
}
{ void * rv4342 = F.v4341;
return rv4342; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1964_Continues(rt_int a_p1965) {
struct yf1966 F;
memset((void *)&F, 0, sizeof F);
F.p1965 = a_p1965;
if ((!((yr1871_Is(v593) && yr1877_IsIdAt(INT64_C(1)))))) {
{ rt_int rv4347 = 0;
return rv4347; }
}
if (yr1922_IsLabel(rt_range(((rt_int *)(v1175).p)[y_ix1(v1175, rt_add(v1215, INT64_C(1)))], INT64_C(0), INT64_C(4000000)))) {
{ rt_int rv4351 = 0;
return rv4351; }
}
if ((((F.p1965 == v254)) || ((F.p1965 == v467)))) {
{ rt_int rv4355 = ((yr1864_IsAt(INT64_C(2), v590) || yr1864_IsAt(INT64_C(2), v596)) || yr1864_IsAt(INT64_C(2), v233));
return rv4355; }
}
{ rt_int rv4357 = yr1864_IsAt(INT64_C(2), v569);
return rv4357; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1970_ParseDeclGroup(void * * a_p1971, void * * a_p1972) {
struct yf1973 F;
memset((void *)&F, 0, sizeof F);
F.p1971 = a_p1971;
F.p1972 = a_p1972;
F.v4362 = yr1854_TV();
if ((((((F.v4362 == v254)) || ((F.v4362 == v467))) || ((F.v4362 == v461))) || ((F.v4362 == v422)))) {
yr1883_Skip();
yr1835_Link(&(*F.p1971), &(*F.p1972), yr1958_SimpleEntry(F.v4362));
while (yr1964_Continues(F.v4362)) {
yr1883_Skip();
yr1835_Link(&(*F.p1971), &(*F.p1972), yr1958_SimpleEntry(F.v4362));
}
return;
}
if ((F.v4362 == v356)) {
F.v4364 = yr1828_NewNode(v629, yr1859_TLn());
yr1883_Skip();
F.v4368 = ((void *)0);
for (;;) {
F.v4366 = yr1828_NewNode(v653, yr1859_TLn());
((*(yR99 *)rt_nil_check(F.v4366))).f_name = yr1905_Ident();
yr1835_Link(&((*(yR99 *)rt_nil_check(F.v4364))).f_a, &F.v4368, F.v4366);
if ((!yr1888_Accept(v590))) {
goto yl_4369;
}
}
yl_4369: ;
F.v4366 = ((*(yR99 *)rt_nil_check(F.v4364))).f_a;
while ((!(F.v4366 == ((void *)0)))) {
((*(yR99 *)rt_nil_check(F.v4364))).f_b = yr1828_NewNode(v653, ((*(yR99 *)rt_nil_check(F.v4366))).f_line);
((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v4364))).f_b))).f_name = ((*(yR99 *)rt_nil_check(F.v4366))).f_name;
((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v4364))).f_b))).f_next = v1218;
v1218 = ((*(yR99 *)rt_nil_check(F.v4364))).f_b;
F.v4366 = ((*(yR99 *)rt_nil_check(F.v4366))).f_next;
}
((*(yR99 *)rt_nil_check(F.v4364))).f_b = ((void *)0);
yr1835_Link(&(*F.p1971), &(*F.p1972), F.v4364);
return;
}
yr1835_Link(&(*F.p1971), &(*F.p1972), yr1977_ParseDecl());
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1977_ParseDecl(void) {
struct yf1978 F;
memset((void *)&F, 0, sizeof F);
F.v4378 = yr1854_TV();
F.v4380 = yr1859_TLn();
if ((((F.v4378 == v332)) || ((F.v4378 == v404)))) {
F.v4372 = yr1828_NewNode(v638, F.v4380);
yr1883_Skip();
if ((F.v4378 == v332)) {
((*(yR99 *)rt_nil_check(F.v4372))).f_flag = INT64_C(1);
}
if ((yr1871_Is(v323) || yr1871_Is(v419))) {
((*(yR99 *)rt_nil_check(F.v4372))).f_ival = yr1854_TV();
yr1883_Skip();
}
((*(yR99 *)rt_nil_check(F.v4372))).f_name = yr1917_ExtendedId();
yr1982_ParseFormals(F.v4372);
if (yr1888_Accept(v347)) {
((*(yR99 *)rt_nil_check(F.v4372))).f_e = yr1828_NewNode(v653, F.v4380);
}
((*(yR99 *)rt_nil_check(F.v4372))).f_c = yr1943_ParseBlock();
if ((F.v4378 == v332)) {
yr1899_Expect(v281);
} else {
yr1899_Expect(v296);
}
yr1910_CloseName(((*(yR99 *)rt_nil_check(F.v4372))).f_name, F.v4380);
{ void * rv4384 = F.v4372;
return rv4384; }
}
if ((((F.v4378 == v365)) || ((F.v4378 == v368)))) {
{ void * rv4385 = yr1933_ParseModule();
return rv4385; }
}
if ((F.v4378 == v449)) {
F.v4372 = yr1828_NewNode(v644, F.v4380);
yr1883_Skip();
((*(yR99 *)rt_nil_check(F.v4372))).f_name = yr1905_Ident();
yr1899_Expect(v578);
F.v4376 = ((void *)0);
for (;;) {
F.v4374 = yr1828_NewNode(v653, yr1859_TLn());
((*(yR99 *)rt_nil_check(F.v4374))).f_name = yr1905_Ident();
yr1835_Link(&((*(yR99 *)rt_nil_check(F.v4372))).f_a, &F.v4376, F.v4374);
if ((!yr1888_Accept(v590))) {
goto yl_4386;
}
}
yl_4386: ;
yr1899_Expect(v581);
F.v4382 = v1215;
((*(yR99 *)rt_nil_check(F.v4372))).f_b = yr1933_ParseModule();
((*(yR99 *)rt_nil_check(F.v4372))).f_ival = F.v4382;
((*(yR99 *)rt_nil_check(F.v4372))).f_flag = v1215;
yr1899_Expect(v308);
yr1910_CloseName(((*(yR99 *)rt_nil_check(F.v4372))).f_name, F.v4380);
{ void * rv4387 = F.v4372;
return rv4387; }
}
if ((F.v4378 == v350)) {
F.v4372 = yr1828_NewNode(v647, F.v4380);
yr1883_Skip();
((*(yR99 *)rt_nil_check(F.v4372))).f_name = yr1905_Ident();
yr1899_Expect(v578);
F.v4376 = ((void *)0);
for (;;) {
F.v4374 = yr1828_NewNode(v653, yr1859_TLn());
if ((yr1849_TK() == v200)) {
((*(yR99 *)rt_nil_check(F.v4374))).f_flag = INT64_C(1);
((*(yR99 *)rt_nil_check(F.v4374))).f_ival = yr1854_TV();
yr1883_Skip();
} else {
((*(yR99 *)rt_nil_check(F.v4374))).f_name = yr1917_ExtendedId();
}
yr1835_Link(&((*(yR99 *)rt_nil_check(F.v4372))).f_a, &F.v4376, F.v4374);
if ((!yr1888_Accept(v590))) {
goto yl_4388;
}
}
yl_4388: ;
yr1899_Expect(v581);
{ void * rv4390 = F.v4372;
return rv4390; }
}
if ((F.v4378 == v407)) {
F.v4372 = yr1828_NewNode(v650, F.v4380);
yr1883_Skip();
((*(yR99 *)rt_nil_check(F.v4372))).f_name = yr1905_Ident();
yr1982_ParseFormals(F.v4372);
if ((!(((*(yR99 *)rt_nil_check(F.v4372))).f_b == ((void *)0)))) {
yr1144_FailS(F.v4380, y_str("a process returns no value", 26));
}
if (yr1888_Accept(v401)) {
((*(yR99 *)rt_nil_check(F.v4372))).f_d = yr2096_ParseExpr();
}
if (yr1888_Accept(v353)) {
((*(yR99 *)rt_nil_check(F.v4372))).f_e = yr2096_ParseExpr();
}
if (yr1888_Accept(v443)) {
F.v4374 = yr2096_ParseExpr();
}
((*(yR99 *)rt_nil_check(F.v4372))).f_c = yr1943_ParseBlock();
yr1899_Expect(v299);
yr1910_CloseName(((*(yR99 *)rt_nil_check(F.v4372))).f_name, F.v4380);
{ void * rv4392 = F.v4372;
return rv4392; }
}
yr1144_FailS(F.v4380, y_str("expected a declaration", 22));
{ void * rv4394 = ((void *)0);
return rv4394; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1982_ParseFormals(void * a_p1983) {
struct yf1984 F;
memset((void *)&F, 0, sizeof F);
F.p1983 = a_p1983;
F.v4398 = ((void *)0);
F.v4400 = ((void *)0);
if (yr1888_Accept(v428)) {
((*(yR99 *)rt_nil_check(F.p1983))).f_b = yr1999_ParseRep();
}
yr1899_Expect(v578);
while ((!yr1871_Is(v581))) {
if (yr1888_Accept(v254)) {
F.v4402 = v881;
} else if (yr1888_Accept(v389)) {
F.v4402 = v884;
} else if (yr1888_Accept(v467)) {
F.v4402 = v887;
} else {
yr1144_FailS(yr1859_TLn(), y_str("a formal parameter is CONST, OUT or VAR", 39));
}
for (;;) {
F.v4398 = yr1828_NewNode(v641, yr1859_TLn());
((*(yR99 *)rt_nil_check(F.v4398))).f_ival = F.v4402;
((*(yR99 *)rt_nil_check(F.v4398))).f_a = yr1953_ParseNames();
yr1899_Expect(v596);
((*(yR99 *)rt_nil_check(F.v4398))).f_b = yr1988_ParseFormalRep();
yr1835_Link(&((*(yR99 *)rt_nil_check(F.p1983))).f_a, &F.v4400, F.v4398);
if ((!((((yr1871_Is(v593) || yr1871_Is(v590))) && yr1877_IsIdAt(INT64_C(1)))))) {
goto yl_4404;
}
yr1883_Skip();
}
yl_4404: ;
if ((!yr1888_Accept(v593))) {
if ((!yr1888_Accept(v590))) {
yr1899_Expect(v581);
return;
}
}
}
yr1899_Expect(v581);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1988_ParseFormalRep(void) {
struct yf1989 F;
memset((void *)&F, 0, sizeof F);
if (((yr1871_Is(v224) && yr1864_IsAt(INT64_C(1), v578)) && ((yr1864_IsAt(INT64_C(3), v257) || ((yr1877_IsIdAt(INT64_C(3)) && ((((rt_int *)(v1175).p)[y_ix1(v1175, rt_add(v1215, INT64_C(3)))] == v1223)))))))) {
F.v4408 = yr1828_NewNode(v680, yr1859_TLn());
yr1883_Skip();
yr1883_Skip();
((*(yR99 *)rt_nil_check(F.v4408))).f_a = yr2096_ParseExpr();
yr1883_Skip();
yr1899_Expect(v377);
((*(yR99 *)rt_nil_check(F.v4408))).f_b = yr1999_ParseRep();
yr1899_Expect(v581);
{ void * rv4414 = F.v4408;
return rv4414; }
}
if (yr1871_Is(v446)) {
F.v4408 = yr1828_NewNode(v683, yr1859_TLn());
yr1883_Skip();
{ void * rv4415 = F.v4408;
return rv4415; }
}
{ void * rv4416 = yr1999_ParseRep();
return rv4416; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1993_IsStructWord(rt_int a_p1994) {
struct yf1995 F;
memset((void *)&F, 0, sizeof F);
F.p1994 = a_p1994;
F.v4420 = ((rt_int *)(v1175).p)[y_ix1(v1175, rt_add(v1215, F.p1994))];
if ((!(((rt_int *)(v1173).p)[y_ix1(v1173, rt_add(v1215, F.p1994))] == v194))) {
{ rt_int rv4424 = 0;
return rv4424; }
}
{ rt_int rv4425 = (((((((((F.v4420 == v464)) || ((F.v4420 == v386))) || ((F.v4420 == v218))) || ((F.v4420 == v224))) || ((F.v4420 == v416))) || ((F.v4420 == v326))) || ((F.v4420 == v395))) || ((F.v4420 == v437)));
return rv4425; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1999_ParseRep(void) {
struct yf2000 F;
memset((void *)&F, 0, sizeof F);
if ((yr1877_IsIdAt(INT64_C(0)) && ((yr1993_IsStructWord(INT64_C(1)) || ((yr1877_IsIdAt(INT64_C(1)) && yr1864_IsAt(INT64_C(2), v584))))))) {
F.v4428 = yr1905_Ident();
F.v4430 = yr2004_ParseConcrete();
((*(yR99 *)rt_nil_check(F.v4430))).f_text = F.v4428;
{ void * rv4435 = F.v4430;
return rv4435; }
}
{ void * rv4436 = yr2004_ParseConcrete();
return rv4436; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2004_ParseConcrete(void) {
struct yf2005 F;
memset((void *)&F, 0, sizeof F);
F.v4439 = yr2019_ParseConcrete1();
if (yr1888_Accept(v392)) {
if (((((yr1849_TK() == v200)) || ((yr1849_TK() == v191))) || yr1871_Is(v578))) {
F.v4441 = yr2101_ParseSimple();
}
}
if (yr1888_Accept(v215)) {
F.v4441 = yr2101_ParseSimple();
}
{ void * rv4442 = F.v4439;
return rv4442; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2009_ParseIds(void) {
struct yf2010 F;
memset((void *)&F, 0, sizeof F);
F.v4445 = ((void *)0);
F.v4447 = ((void *)0);
F.v4449 = ((void *)0);
for (;;) {
F.v4449 = yr1828_NewNode(v653, yr1859_TLn());
((*(yR99 *)rt_nil_check(F.v4449))).f_name = yr1905_Ident();
yr1835_Link(&F.v4445, &F.v4447, F.v4449);
if ((!yr1888_Accept(v590))) {
goto yl_4450;
}
}
yl_4450: ;
{ void * rv4451 = F.v4445;
return rv4451; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2014_ParseFieldGroups(void) {
struct yf2015 F;
memset((void *)&F, 0, sizeof F);
F.v4454 = ((void *)0);
F.v4456 = ((void *)0);
F.v4458 = ((void *)0);
while ((yr1871_Is(v254) || yr1871_Is(v467))) {
F.v4460 = yr1854_TV();
yr1883_Skip();
for (;;) {
F.v4458 = yr1828_NewNode(v689, yr1859_TLn());
((*(yR99 *)rt_nil_check(F.v4458))).f_ival = F.v4460;
((*(yR99 *)rt_nil_check(F.v4458))).f_a = yr1953_ParseNames();
yr1899_Expect(v596);
((*(yR99 *)rt_nil_check(F.v4458))).f_b = yr1999_ParseRep();
yr1835_Link(&F.v4454, &F.v4456, F.v4458);
if ((!((yr1871_Is(v593) && yr1877_IsIdAt(INT64_C(1)))))) {
goto yl_4461;
}
yr1883_Skip();
}
yl_4461: ;
if ((!yr1888_Accept(v593))) {
{ void * rv4463 = F.v4454;
return rv4463; }
}
}
{ void * rv4464 = F.v4454;
return rv4464; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2019_ParseConcrete1(void) {
struct yf2020 F;
memset((void *)&F, 0, sizeof F);
F.v4481 = yr1859_TLn();
if ((yr1849_TK() == v191)) {
F.v4467 = yr1828_NewNode(v656, F.v4481);
((*(yR99 *)rt_nil_check(F.v4467))).f_name = yr1905_Ident();
((*(yR99 *)rt_nil_check(F.v4467))).f_a = yr2024_ParseQualifier();
{ void * rv4482 = F.v4467;
return rv4482; }
}
if ((!(yr1849_TK() == v194))) {
yr1144_FailS(F.v4481, y_str("expected a representation", 25));
}
F.v4479 = yr1854_TV();
if ((((F.v4479 == v464)) || ((F.v4479 == v386)))) {
F.v4467 = yr1828_NewNode(v659, F.v4481);
if ((F.v4479 == v386)) {
((*(yR99 *)rt_nil_check(F.v4467))).f_flag = INT64_C(1);
}
yr1883_Skip();
yr1899_Expect(v578);
((*(yR99 *)rt_nil_check(F.v4467))).f_a = yr2009_ParseIds();
yr1899_Expect(v581);
((*(yR99 *)rt_nil_check(F.v4467))).f_b = yr2024_ParseQualifier();
{ void * rv4485 = F.v4467;
return rv4485; }
}
if ((F.v4479 == v218)) {
F.v4467 = yr1828_NewNode(v662, F.v4481);
yr1883_Skip();
yr1899_Expect(v578);
F.v4477 = ((void *)0);
for (;;) {
if ((!(yr1849_TK() == v209))) {
yr1144_FailS(yr1859_TLn(), y_str("an ALPHABET lists character literals", 36));
}
F.v4475 = yr1828_NewNode(v752, yr1859_TLn());
((*(yR99 *)rt_nil_check(F.v4475))).f_text = rt_range(yr1854_TV(), INT64_C(0), INT64_C(4000000));
yr1883_Skip();
yr1835_Link(&((*(yR99 *)rt_nil_check(F.v4467))).f_a, &F.v4477, F.v4475);
if ((!yr1888_Accept(v590))) {
goto yl_4486;
}
}
yl_4486: ;
yr1899_Expect(v581);
((*(yR99 *)rt_nil_check(F.v4467))).f_b = yr2024_ParseQualifier();
{ void * rv4488 = F.v4467;
return rv4488; }
}
if ((F.v4479 == v224)) {
F.v4467 = yr1828_NewNode(v665, F.v4481);
yr1883_Skip();
yr1899_Expect(v578);
F.v4477 = ((void *)0);
for (;;) {
yr1835_Link(&((*(yR99 *)rt_nil_check(F.v4467))).f_a, &F.v4477, yr1999_ParseRep());
if ((!yr1888_Accept(v590))) {
goto yl_4489;
}
}
yl_4489: ;
yr1899_Expect(v377);
((*(yR99 *)rt_nil_check(F.v4467))).f_b = yr1999_ParseRep();
yr1899_Expect(v581);
{ void * rv4490 = F.v4467;
return rv4490; }
}
if ((F.v4479 == v416)) {
F.v4467 = yr1828_NewNode(v668, F.v4481);
yr1883_Skip();
((*(yR99 *)rt_nil_check(F.v4467))).f_a = yr2014_ParseFieldGroups();
if (yr1888_Accept(v434)) {
F.v4469 = yr1828_NewNode(v692, yr1859_TLn());
((*(yR99 *)rt_nil_check(F.v4469))).f_name = yr1905_Ident();
yr1899_Expect(v596);
((*(yR99 *)rt_nil_check(F.v4469))).f_b = yr1999_ParseRep();
F.v4473 = ((void *)0);
while (yr1888_Accept(v251)) {
F.v4471 = yr1828_NewNode(v695, yr1859_TLn());
F.v4477 = ((void *)0);
for (;;) {
yr1835_Link(&((*(yR99 *)rt_nil_check(F.v4471))).f_a, &F.v4477, yr2096_ParseExpr());
if ((!yr1888_Accept(v590))) {
goto yl_4491;
}
}
yl_4491: ;
yr1899_Expect(v518);
((*(yR99 *)rt_nil_check(F.v4471))).f_b = yr2014_ParseFieldGroups();
while (yr1888_Accept(v593)) {
}
yr1835_Link(&((*(yR99 *)rt_nil_check(F.v4469))).f_a, &F.v4473, F.v4471);
}
yr1899_Expect(v305);
if (yr1888_Accept(v593)) {
}
((*(yR99 *)rt_nil_check(F.v4467))).f_b = F.v4469;
}
yr1899_Expect(v302);
{ void * rv4492 = F.v4467;
return rv4492; }
}
if (((((F.v4479 == v326)) || ((F.v4479 == v395))) || ((F.v4479 == v437)))) {
if ((F.v4479 == v326)) {
F.v4467 = yr1828_NewNode(v671, F.v4481);
} else if ((F.v4479 == v395)) {
F.v4467 = yr1828_NewNode(v674, F.v4481);
} else {
F.v4467 = yr1828_NewNode(v677, F.v4481);
}
yr1883_Skip();
yr1899_Expect(v578);
((*(yR99 *)rt_nil_check(F.v4467))).f_a = yr1999_ParseRep();
yr1899_Expect(v581);
{ void * rv4493 = F.v4467;
return rv4493; }
}
yr1144_FailS(F.v4481, y_str("expected a representation", 25));
{ void * rv4495 = ((void *)0);
return rv4495; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2024_ParseQualifier(void) {
struct yf2025 F;
memset((void *)&F, 0, sizeof F);
if ((!yr1871_Is(v584))) {
{ void * rv4499 = ((void *)0);
return rv4499; }
}
F.v4498 = yr1828_NewNode(v686, yr1859_TLn());
yr1883_Skip();
((*(yR99 *)rt_nil_check(F.v4498))).f_a = yr2096_ParseExpr();
yr1899_Expect(v521);
((*(yR99 *)rt_nil_check(F.v4498))).f_b = yr2096_ParseExpr();
yr1899_Expect(v587);
if (yr1888_Accept(v431)) {
((*(yR99 *)rt_nil_check(F.v4498))).f_c = yr2101_ParseSimple();
} else if (yr1888_Accept(v398)) {
((*(yR99 *)rt_nil_check(F.v4498))).f_d = yr2101_ParseSimple();
}
{ void * rv4500 = F.v4498;
return rv4500; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2029_IsStop(void) {
struct yf2030 F;
memset((void *)&F, 0, sizeof F);
if ((yr1849_TK() == v188)) {
{ rt_int rv4505 = 1;
return rv4505; }
}
if ((!(yr1849_TK() == v194))) {
{ rt_int rv4507 = 0;
return rv4507; }
}
F.v4503 = yr1854_TV();
{ rt_int rv4508 = ((((((((((((((((F.v4503 == v269)) || ((F.v4503 == v266))) || ((F.v4503 == v284))) || ((F.v4503 == v251))) || ((F.v4503 == v305))) || ((F.v4503 == v311))) || ((F.v4503 == v278))) || ((F.v4503 == v287))) || ((F.v4503 == v272))) || ((F.v4503 == v275))) || ((F.v4503 == v296))) || ((F.v4503 == v281))) || ((F.v4503 == v299))) || ((F.v4503 == v290))) || ((F.v4503 == v293)));
return rv4508; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2034_ParseStatements(rt_int a_p2035) {
struct yf2036 F;
memset((void *)&F, 0, sizeof F);
F.p2035 = a_p2035;
F.v4512 = ((void *)0);
F.v4514 = ((void *)0);
F.v4516 = ((void *)0);
for (;;) {
while (yr1888_Accept(v593)) {
}
if (yr2029_IsStop()) {
goto yl_4519;
}
F.v4518 = INT64_C(0);
if (((F.p2035 && yr1877_IsIdAt(INT64_C(0))) && yr1864_IsAt(INT64_C(1), v596))) {
F.v4518 = yr1905_Ident();
yr1883_Skip();
}
F.v4516 = yr2040_ParseStatement();
((*(yR99 *)rt_nil_check(F.v4516))).f_text = F.v4518;
yr1835_Link(&F.v4512, &F.v4514, F.v4516);
if ((!yr1871_Is(v593))) {
goto yl_4519;
}
}
yl_4519: ;
{ void * rv4523 = F.v4512;
return rv4523; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2040_ParseStatement(void) {
struct yf2041 F;
memset((void *)&F, 0, sizeof F);
F.v4540 = yr1859_TLn();
if ((yr1849_TK() == v194)) {
F.v4538 = yr1854_TV();
if ((F.v4538 == v230)) {
yr1883_Skip();
F.v4526 = yr1828_NewNode(v704, F.v4540);
((*(yR99 *)rt_nil_check(F.v4526))).f_a = yr2096_ParseExpr();
{ void * rv4541 = F.v4526;
return rv4541; }
}
if ((F.v4538 == v335)) {
yr1883_Skip();
F.v4526 = yr1828_NewNode(v707, F.v4540);
((*(yR99 *)rt_nil_check(F.v4526))).f_name = yr1905_Ident();
{ void * rv4542 = F.v4526;
return rv4542; }
}
if ((F.v4538 == v317)) {
yr1883_Skip();
F.v4526 = yr1828_NewNode(v710, F.v4540);
((*(yR99 *)rt_nil_check(F.v4526))).f_name = yr1905_Ident();
{ void * rv4543 = F.v4526;
return rv4543; }
}
if ((F.v4538 == v425)) {
yr1883_Skip();
F.v4526 = yr1828_NewNode(v713, F.v4540);
if ((!((yr1871_Is(v593) || yr2029_IsStop())))) {
((*(yR99 *)rt_nil_check(F.v4526))).f_a = yr2096_ParseExpr();
}
{ void * rv4544 = F.v4526;
return rv4544; }
}
if ((F.v4538 == v452)) {
yr1883_Skip();
{ void * rv4545 = yr1828_NewNode(v716, F.v4540);
return rv4545; }
}
if ((F.v4538 == v410)) {
yr1883_Skip();
F.v4526 = yr1828_NewNode(v719, F.v4540);
if (yr1877_IsIdAt(INT64_C(0))) {
((*(yR99 *)rt_nil_check(F.v4526))).f_name = yr1905_Ident();
}
{ void * rv4547 = F.v4526;
return rv4547; }
}
if ((F.v4538 == v338)) {
yr1883_Skip();
F.v4526 = yr1828_NewNode(v722, F.v4540);
F.v4530 = ((void *)0);
F.v4528 = yr1828_NewNode(v740, F.v4540);
((*(yR99 *)rt_nil_check(F.v4528))).f_a = yr2096_ParseExpr();
yr1899_Expect(v455);
((*(yR99 *)rt_nil_check(F.v4528))).f_b = yr2034_ParseStatements(0);
yr1835_Link(&((*(yR99 *)rt_nil_check(F.v4526))).f_a, &F.v4530, F.v4528);
while (yr1871_Is(v269)) {
F.v4528 = yr1828_NewNode(v740, yr1859_TLn());
yr1883_Skip();
((*(yR99 *)rt_nil_check(F.v4528))).f_a = yr2096_ParseExpr();
yr1899_Expect(v455);
((*(yR99 *)rt_nil_check(F.v4528))).f_b = yr2034_ParseStatements(0);
yr1835_Link(&((*(yR99 *)rt_nil_check(F.v4526))).f_a, &F.v4530, F.v4528);
}
if (yr1888_Accept(v266)) {
((*(yR99 *)rt_nil_check(F.v4526))).f_flag = INT64_C(1);
((*(yR99 *)rt_nil_check(F.v4526))).f_b = yr2034_ParseStatements(0);
}
yr1899_Expect(v284);
{ void * rv4552 = F.v4526;
return rv4552; }
}
if ((F.v4538 == v434)) {
yr1883_Skip();
F.v4526 = yr1828_NewNode(v725, F.v4540);
((*(yR99 *)rt_nil_check(F.v4526))).f_a = yr2096_ParseExpr();
F.v4530 = ((void *)0);
while (yr1871_Is(v251)) {
F.v4528 = yr1828_NewNode(v740, yr1859_TLn());
yr1883_Skip();
F.v4534 = ((void *)0);
for (;;) {
yr1835_Link(&((*(yR99 *)rt_nil_check(F.v4528))).f_a, &F.v4534, yr2096_ParseExpr());
if ((!yr1888_Accept(v590))) {
goto yl_4553;
}
}
yl_4553: ;
yr1899_Expect(v518);
((*(yR99 *)rt_nil_check(F.v4528))).f_b = yr2034_ParseStatements(0);
yr1835_Link(&((*(yR99 *)rt_nil_check(F.v4526))).f_b, &F.v4530, F.v4528);
}
if (yr1888_Accept(v266)) {
((*(yR99 *)rt_nil_check(F.v4526))).f_flag = INT64_C(1);
((*(yR99 *)rt_nil_check(F.v4526))).f_c = yr2034_ParseStatements(0);
}
yr1899_Expect(v305);
{ void * rv4557 = F.v4526;
return rv4557; }
}
if ((F.v4538 == v470)) {
yr1883_Skip();
F.v4526 = yr1828_NewNode(v728, F.v4540);
((*(yR99 *)rt_nil_check(F.v4526))).f_a = yr2096_ParseExpr();
yr1899_Expect(v263);
((*(yR99 *)rt_nil_check(F.v4526))).f_b = yr2034_ParseStatements(0);
yr1899_Expect(v311);
{ void * rv4559 = F.v4526;
return rv4559; }
}
if ((F.v4538 == v329)) {
yr1883_Skip();
F.v4526 = yr1828_NewNode(v731, F.v4540);
((*(yR99 *)rt_nil_check(F.v4526))).f_name = yr1905_Ident();
yr1899_Expect(v596);
((*(yR99 *)rt_nil_check(F.v4526))).f_a = yr1999_ParseRep();
yr1899_Expect(v263);
((*(yR99 *)rt_nil_check(F.v4526))).f_b = yr2034_ParseStatements(0);
yr1899_Expect(v278);
{ void * rv4561 = F.v4526;
return rv4561; }
}
if ((F.v4538 == v359)) {
yr1883_Skip();
F.v4526 = yr1828_NewNode(v734, F.v4540);
((*(yR99 *)rt_nil_check(F.v4526))).f_name = yr1905_Ident();
((*(yR99 *)rt_nil_check(F.v4526))).f_b = yr2034_ParseStatements(0);
yr1899_Expect(v287);
yr1910_CloseName(((*(yR99 *)rt_nil_check(F.v4526))).f_name, F.v4540);
{ void * rv4563 = F.v4526;
return rv4563; }
}
if ((((F.v4538 == v248)) || ((F.v4538 == v440)))) {
F.v4526 = yr1828_NewNode(v737, F.v4540);
if (yr1888_Accept(v440)) {
((*(yR99 *)rt_nil_check(F.v4526))).f_flag = INT64_C(1);
}
yr1899_Expect(v248);
((*(yR99 *)rt_nil_check(F.v4526))).f_a = yr1943_ParseBlock();
yr1899_Expect(v272);
{ void * rv4565 = F.v4526;
return rv4565; }
}
}
F.v4536 = yr2127_ParseDesignator();
if (yr1888_Accept(v515)) {
F.v4526 = yr1828_NewNode(v698, F.v4540);
((*(yR99 *)rt_nil_check(F.v4526))).f_a = F.v4536;
((*(yR99 *)rt_nil_check(F.v4526))).f_b = yr2096_ParseExpr();
{ void * rv4566 = F.v4526;
return rv4566; }
}
if ((!(((*(yR99 *)rt_nil_check(F.v4536))).f_kind == v764))) {
yr1144_FailS(F.v4540, y_str("expected a statement", 20));
}
F.v4526 = yr1828_NewNode(v701, F.v4540);
((*(yR99 *)rt_nil_check(F.v4526))).f_a = F.v4536;
{ void * rv4568 = F.v4526;
return rv4568; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2045_OpAt(void) {
struct yf2046 F;
memset((void *)&F, 0, sizeof F);
if ((((yr1849_TK() == v197)) || ((yr1849_TK() == v194)))) {
{ rt_int rv4570 = rt_range(yr1854_TV(), INT64_C(0), INT64_C(4000000));
return rv4570; }
}
{ rt_int rv4572 = INT64_C(0);
return rv4572; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2050_IsRel(rt_int a_p2051) {
struct yf2052 F;
memset((void *)&F, 0, sizeof F);
F.p2051 = a_p2051;
{ rt_int rv4575 = ((((((((((((((((((((F.p2051 == v344)) || ((F.p2051 == v554))) || ((F.p2051 == v569))) || ((F.p2051 == v572))) || ((F.p2051 == v524))) || ((F.p2051 == v575))) || ((F.p2051 == v527))) || ((F.p2051 == v530))) || ((F.p2051 == v485))) || ((F.p2051 == v533))) || ((F.p2051 == v488))) || ((F.p2051 == v536))) || ((F.p2051 == v497))) || ((F.p2051 == v491))) || ((F.p2051 == v479))) || ((F.p2051 == v539))) || ((F.p2051 == v500))) || ((F.p2051 == v494))) || ((F.p2051 == v482)));
return rv4575; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2056_IsAssocMul(rt_int a_p2057) {
struct yf2058 F;
memset((void *)&F, 0, sizeof F);
F.p2057 = a_p2057;
{ rt_int rv4578 = (((F.p2057 == v563)) || ((F.p2057 == v221)));
return rv4578; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2062_IsNonAssocMul(rt_int a_p2063) {
struct yf2064 F;
memset((void *)&F, 0, sizeof F);
F.p2063 = a_p2063;
{ rt_int rv4581 = ((((((((F.p2063 == v566)) || ((F.p2063 == v260))) || ((F.p2063 == v362))) || ((F.p2063 == v542))) || ((F.p2063 == v503))) || ((F.p2063 == v545))) || ((F.p2063 == v506)));
return rv4581; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2068_IsAssocAdd(rt_int a_p2069) {
struct yf2070 F;
memset((void *)&F, 0, sizeof F);
F.p2069 = a_p2069;
{ rt_int rv4584 = (((F.p2069 == v557)) || ((F.p2069 == v383)));
return rv4584; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2074_IsNonAssocAdd(rt_int a_p2075) {
struct yf2076 F;
memset((void *)&F, 0, sizeof F);
F.p2075 = a_p2075;
{ rt_int rv4587 = (((((((F.p2075 == v560)) || ((F.p2075 == v473))) || ((F.p2075 == v548))) || ((F.p2075 == v509))) || ((F.p2075 == v551))) || ((F.p2075 == v512)));
return rv4587; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2080_Bin(rt_int a_p2081, void * a_p2082, void * a_p2083, rt_int a_p2084) {
struct yf2085 F;
memset((void *)&F, 0, sizeof F);
F.p2081 = a_p2081;
F.p2082 = a_p2082;
F.p2083 = a_p2083;
F.p2084 = a_p2084;
F.v4594 = yr1828_NewNode(v782, F.p2084);
((*(yR99 *)rt_nil_check(F.v4594))).f_name = F.p2081;
((*(yR99 *)rt_nil_check(F.v4594))).f_a = F.p2082;
((*(yR99 *)rt_nil_check(F.v4594))).f_b = F.p2083;
{ void * rv4595 = F.v4594;
return rv4595; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2089_NeedParens(rt_int a_p2090, rt_int a_p2091) {
struct yf2092 F;
memset((void *)&F, 0, sizeof F);
F.p2090 = a_p2090;
F.p2091 = a_p2091;
yr1006_SB();
yr1024_ST(F.p2090);
yr1017_SA(y_str(" next to another operator of its level needs parentheses (VIII.A)", 65));
F.v4600 = yr1036_SE();
yr1137_Fail(F.p2091, F.v4600);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2096_ParseExpr(void) {
struct yf2097 F;
memset((void *)&F, 0, sizeof F);
F.v4608 = yr1859_TLn();
F.v4604 = yr2101_ParseSimple();
F.v4606 = yr2045_OpAt();
if (yr2050_IsRel(F.v4606)) {
yr1883_Skip();
F.v4604 = yr2080_Bin(F.v4606, F.v4604, yr2101_ParseSimple(), F.v4608);
if (yr2050_IsRel(yr2045_OpAt())) {
yr2089_NeedParens(F.v4606, F.v4608);
}
}
{ void * rv4609 = F.v4604;
return rv4609; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2101_ParseSimple(void) {
struct yf2102 F;
memset((void *)&F, 0, sizeof F);
F.v4618 = yr1859_TLn();
if (yr1871_Is(v560)) {
yr1883_Skip();
F.v4614 = yr1828_NewNode(v779, F.v4618);
((*(yR99 *)rt_nil_check(F.v4614))).f_a = yr2106_ParseTerm();
F.v4616 = yr2045_OpAt();
if ((yr2068_IsAssocAdd(F.v4616) || yr2074_IsNonAssocAdd(F.v4616))) {
yr2089_NeedParens(rt_range(v560, INT64_C(0), INT64_C(4000000)), F.v4618);
}
{ void * rv4619 = F.v4614;
return rv4619; }
}
F.v4612 = yr2106_ParseTerm();
F.v4616 = yr2045_OpAt();
if (yr2074_IsNonAssocAdd(F.v4616)) {
yr1883_Skip();
F.v4612 = yr2080_Bin(F.v4616, F.v4612, yr2106_ParseTerm(), F.v4618);
if ((yr2068_IsAssocAdd(yr2045_OpAt()) || yr2074_IsNonAssocAdd(yr2045_OpAt()))) {
yr2089_NeedParens(F.v4616, F.v4618);
}
{ void * rv4620 = F.v4612;
return rv4620; }
}
while (yr2068_IsAssocAdd(F.v4616)) {
yr1883_Skip();
F.v4612 = yr2080_Bin(F.v4616, F.v4612, yr2106_ParseTerm(), F.v4618);
if (yr2074_IsNonAssocAdd(yr2045_OpAt())) {
yr2089_NeedParens(yr2045_OpAt(), F.v4618);
}
F.v4616 = yr2045_OpAt();
}
{ void * rv4621 = F.v4612;
return rv4621; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2106_ParseTerm(void) {
struct yf2107 F;
memset((void *)&F, 0, sizeof F);
F.v4628 = yr1859_TLn();
F.v4624 = yr2122_ParseFactor();
F.v4626 = yr2045_OpAt();
if (yr2062_IsNonAssocMul(F.v4626)) {
yr1883_Skip();
F.v4624 = yr2080_Bin(F.v4626, F.v4624, yr2122_ParseFactor(), F.v4628);
if ((yr2056_IsAssocMul(yr2045_OpAt()) || yr2062_IsNonAssocMul(yr2045_OpAt()))) {
yr2089_NeedParens(F.v4626, F.v4628);
}
{ void * rv4629 = F.v4624;
return rv4629; }
}
while (yr2056_IsAssocMul(F.v4626)) {
yr1883_Skip();
F.v4624 = yr2080_Bin(F.v4626, F.v4624, yr2122_ParseFactor(), F.v4628);
if (yr2062_IsNonAssocMul(yr2045_OpAt())) {
yr2089_NeedParens(yr2045_OpAt(), F.v4628);
}
F.v4626 = yr2045_OpAt();
}
{ void * rv4630 = F.v4624;
return rv4630; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2111_IsLiteralAt(rt_int a_p2112) {
struct yf2113 F;
memset((void *)&F, 0, sizeof F);
F.p2112 = a_p2112;
F.v4634 = ((rt_int *)(v1173).p)[y_ix1(v1173, rt_add(v1215, F.p2112))];
{ rt_int rv4636 = (((((((F.v4634 == v200)) || ((F.v4634 == v203))) || ((F.v4634 == v206))) || ((F.v4634 == v209))) || ((F.v4634 == v212))) || yr1864_IsAt(F.p2112, v371));
return rv4636; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2117_ParseLiteral(void) {
struct yf2118 F;
memset((void *)&F, 0, sizeof F);
F.v4641 = yr1849_TK();
F.v4643 = yr1859_TLn();
if ((F.v4641 == v200)) {
F.v4639 = yr1828_NewNode(v743, F.v4643);
((*(yR99 *)rt_nil_check(F.v4639))).f_ival = yr1854_TV();
} else if ((F.v4641 == v203)) {
F.v4639 = yr1828_NewNode(v746, F.v4643);
((*(yR99 *)rt_nil_check(F.v4639))).f_ival = yr1854_TV();
} else if ((F.v4641 == v206)) {
F.v4639 = yr1828_NewNode(v749, F.v4643);
((*(yR99 *)rt_nil_check(F.v4639))).f_text = rt_range(yr1854_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v4641 == v209)) {
F.v4639 = yr1828_NewNode(v752, F.v4643);
((*(yR99 *)rt_nil_check(F.v4639))).f_text = rt_range(yr1854_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v4641 == v212)) {
F.v4639 = yr1828_NewNode(v755, F.v4643);
((*(yR99 *)rt_nil_check(F.v4639))).f_text = rt_range(yr1854_TV(), INT64_C(0), INT64_C(4000000));
} else {
F.v4639 = yr1828_NewNode(v758, F.v4643);
}
yr1883_Skip();
{ void * rv4644 = F.v4639;
return rv4644; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2122_ParseFactor(void) {
struct yf2123 F;
memset((void *)&F, 0, sizeof F);
F.v4651 = yr1859_TLn();
if (yr1871_Is(v374)) {
yr1883_Skip();
F.v4647 = yr1828_NewNode(v776, F.v4651);
((*(yR99 *)rt_nil_check(F.v4647))).f_a = yr2122_ParseFactor();
{ void * rv4652 = F.v4647;
return rv4652; }
}
if (yr1871_Is(v578)) {
yr1883_Skip();
F.v4647 = yr1828_NewNode(v785, F.v4651);
((*(yR99 *)rt_nil_check(F.v4647))).f_a = yr2096_ParseExpr();
yr1899_Expect(v581);
{ void * rv4653 = F.v4647;
return rv4653; }
}
if (yr2111_IsLiteralAt(INT64_C(0))) {
{ void * rv4655 = yr2117_ParseLiteral();
return rv4655; }
}
if (yr1877_IsIdAt(INT64_C(0))) {
if ((yr2111_IsLiteralAt(INT64_C(1)) || ((yr1877_IsIdAt(INT64_C(1)) && (!((((((yr1864_IsAt(INT64_C(2), v578) || yr1864_IsAt(INT64_C(2), v584)) || yr1864_IsAt(INT64_C(2), v599)) || yr1864_IsAt(INT64_C(2), v602)) || yr1864_IsAt(INT64_C(2), v515)) || yr1864_IsAt(INT64_C(2), v596)))))))) {
F.v4649 = yr1905_Ident();
if (yr1877_IsIdAt(INT64_C(0))) {
F.v4647 = yr1828_NewNode(v761, F.v4651);
((*(yR99 *)rt_nil_check(F.v4647))).f_name = yr1905_Ident();
} else {
F.v4647 = yr2117_ParseLiteral();
}
((*(yR99 *)rt_nil_check(F.v4647))).f_d = yr1828_NewNode(v653, F.v4651);
((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v4647))).f_d))).f_name = F.v4649;
{ void * rv4666 = F.v4647;
return rv4666; }
}
{ void * rv4667 = yr2127_ParseDesignator();
return rv4667; }
}
yr1152_FailN(F.v4651, yr1894_TokText(), y_str(" cannot begin an operand", 24));
{ void * rv4669 = ((void *)0);
return rv4669; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2127_ParseDesignator(void) {
struct yf2128 F;
memset((void *)&F, 0, sizeof F);
F.v4678 = yr1859_TLn();
F.v4672 = yr1828_NewNode(v761, F.v4678);
((*(yR99 *)rt_nil_check(F.v4672))).f_name = yr1905_Ident();
if (yr1888_Accept(v578)) {
((*(yR99 *)rt_nil_check(F.v4672))).f_kind = v764;
F.v4676 = ((void *)0);
while ((!yr1871_Is(v581))) {
yr1835_Link(&((*(yR99 *)rt_nil_check(F.v4672))).f_a, &F.v4676, yr2096_ParseExpr());
if ((!yr1888_Accept(v590))) {
yr2132_EXIT_ARGS();
}
}
yr1899_Expect(v581);
}
for (;;) {
if (yr1888_Accept(v599)) {
F.v4674 = yr1828_NewNode(v767, yr1859_TLn());
((*(yR99 *)rt_nil_check(F.v4674))).f_a = F.v4672;
((*(yR99 *)rt_nil_check(F.v4674))).f_name = yr1905_Ident();
F.v4672 = F.v4674;
} else if (yr1888_Accept(v584)) {
F.v4674 = yr1828_NewNode(v770, yr1859_TLn());
((*(yR99 *)rt_nil_check(F.v4674))).f_a = F.v4672;
F.v4676 = ((void *)0);
for (;;) {
yr1835_Link(&((*(yR99 *)rt_nil_check(F.v4674))).f_b, &F.v4676, yr2096_ParseExpr());
if ((!yr1888_Accept(v590))) {
goto yl_4680;
}
}
yl_4680: ;
yr1899_Expect(v587);
F.v4672 = F.v4674;
} else if (yr1888_Accept(v602)) {
F.v4674 = yr1828_NewNode(v773, yr1859_TLn());
((*(yR99 *)rt_nil_check(F.v4674))).f_a = F.v4672;
F.v4672 = F.v4674;
} else {
goto yl_4679;
}
}
yl_4679: ;
{ void * rv4681 = F.v4672;
return rv4681; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2132_EXIT_ARGS(void) {
struct yf2133 F;
memset((void *)&F, 0, sizeof F);
if ((!yr1871_Is(v581))) {
yr1899_Expect(v581);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2137_ParseProgram(void) {
struct yf2138 F;
memset((void *)&F, 0, sizeof F);
F.v4685 = ((void *)0);
F.v4687 = ((void *)0);
while ((!(yr1849_TK() == v188))) {
if ((!((yr1871_Is(v365) || yr1871_Is(v368))))) {
yr1144_FailS(yr1859_TLn(), y_str("a segment is a module (XIII.A)", 30));
}
yr1835_Link(&F.v4685, &F.v4687, yr1933_ParseModule());
while (yr1888_Accept(v593)) {
}
}
{ void * rv4689 = F.v4685;
return rv4689; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2142_NewSym(rt_int a_p2143, rt_int a_p2144) {
struct yf2145 F;
memset((void *)&F, 0, sizeof F);
F.p2143 = a_p2143;
F.p2144 = a_p2144;
({ F.v4694 = rt_alloc(sizeof(yR119)); });
(*(yR119 *)rt_nil_check(F.v4694)) = ((yR119){ .f_kind = F.p2143, .f_name = F.p2144, .f_rep = ((void *)0), .f_cname = INT64_C(0), .f_level = INT64_C(0), .f_byref = 0, .f_readonly = 0, .f_mval = INT64_C(0), .f_hasmv = 0, .f_params = ((void *)0), .f_nparams = INT64_C(0), .f_ret = ((void *)0), .f_func = 0, .f_decl = ((void *)0), .f_depth = INT64_C(0), .f_target = ((void *)0), .f_members = ((void *)0), .f_mnext = ((void *)0), .f_chain = ((void *)0), .f_stack = ((void *)0), .f_alt = ((void *)0), .f_monitor = ((void *)0), .f_serial = INT64_C(0), .f_calls = ((void *)0) });
((*(yR119 *)rt_nil_check(F.v4694))).f_serial = yr1161_NewSerial();
{ void * rv4705 = F.v4694;
return rv4705; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2149_OpenScope(rt_int a_p2150) {
struct yf2151 F;
memset((void *)&F, 0, sizeof F);
F.p2150 = a_p2150;
({ F.v4709 = rt_alloc(sizeof(yR124)); });
(*(yR124 *)rt_nil_check(F.v4709)) = ((yR124){ .f_syms = ((void *)0), .f_closed = F.p2150, .f_module = ((void *)0), .f_level = v1245, .f_deferred = ((void *)0), .f_up = ((void *)0) });
if ((v1239 >= INT64_C(0))) {
((*(yR124 *)rt_nil_check(F.v4709))).f_up = ((void * *)(v1237).p)[y_ix1(v1237, v1239)];
}
v1239 = rt_range(rt_add(v1239, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1237).p)[y_ix1(v1237, v1239)] = F.v4709;
((void * *)(v1279).p)[y_ix1(v1279, v1239)] = ((void *)0);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2155_ReopenScope(void * a_p2156) {
struct yf2157 F;
memset((void *)&F, 0, sizeof F);
F.p2156 = a_p2156;
F.v4716 = ((*(yR124 *)rt_nil_check(F.p2156))).f_syms;
F.v4718 = INT64_C(0);
v1239 = rt_range(rt_add(v1239, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1237).p)[y_ix1(v1237, v1239)] = F.p2156;
((void * *)(v1279).p)[y_ix1(v1279, v1239)] = ((void *)0);
while ((!(F.v4716 == ((void *)0)))) {
F.v4718 = rt_range(rt_add(F.v4718, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1306).p)[y_ix1(v1306, F.v4718)] = F.v4716;
F.v4716 = ((*(yR119 *)rt_nil_check(F.v4716))).f_stack;
}
while ((F.v4718 > INT64_C(0))) {
F.v4716 = ((void * *)(v1306).p)[y_ix1(v1306, F.v4718)];
F.v4721 = rt_range(rt_mod(((*(yR119 *)rt_nil_check(F.v4716))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR119 *)rt_nil_check(F.v4716))).f_chain = ((void * *)(v1226).p)[y_ix1(v1226, F.v4721)];
((void * *)(v1226).p)[y_ix1(v1226, F.v4721)] = F.v4716;
F.v4718 = rt_range(rt_sub(F.v4718, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2161_CloseScope(void) {
struct yf2162 F;
memset((void *)&F, 0, sizeof F);
F.v4733 = ((*(yR124 *)rt_nil_check(((void * *)(v1237).p)[y_ix1(v1237, v1239)]))).f_syms;
while ((!(F.v4733 == ((void *)0)))) {
F.v4739 = rt_range(rt_mod(((*(yR119 *)rt_nil_check(F.v4733))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4735 = ((void * *)(v1226).p)[y_ix1(v1226, F.v4739)];
F.v4737 = ((void *)0);
while ((((!(F.v4735 == ((void *)0)))) && ((!(F.v4735 == F.v4733))))) {
F.v4737 = F.v4735;
F.v4735 = ((*(yR119 *)rt_nil_check(F.v4735))).f_chain;
}
if ((F.v4735 == F.v4733)) {
if ((F.v4737 == ((void *)0))) {
((void * *)(v1226).p)[y_ix1(v1226, F.v4739)] = ((*(yR119 *)rt_nil_check(F.v4733))).f_chain;
} else {
((*(yR119 *)rt_nil_check(F.v4737))).f_chain = ((*(yR119 *)rt_nil_check(F.v4733))).f_chain;
}
}
F.v4733 = ((*(yR119 *)rt_nil_check(F.v4733))).f_stack;
}
v1239 = rt_range(rt_sub(v1239, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2166_Visible(void * a_p2167) {
struct yf2168 F;
memset((void *)&F, 0, sizeof F);
F.p2167 = a_p2167;
{ rt_int rv4747 = (((((*(yR119 *)rt_nil_check(F.p2167))).f_depth >= v1242)) || ((((*(yR119 *)rt_nil_check(F.p2167))).f_depth == INT64_C(0))));
return rv4747; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2172_Find(rt_int a_p2173) {
struct yf2174 F;
memset((void *)&F, 0, sizeof F);
F.p2173 = a_p2173;
F.v4751 = ((void * *)(v1226).p)[y_ix1(v1226, rt_mod(F.p2173, INT64_C(8192)))];
while ((!(F.v4751 == ((void *)0)))) {
if ((((((*(yR119 *)rt_nil_check(F.v4751))).f_name == F.p2173)) && yr2166_Visible(F.v4751))) {
{ void * rv4754 = F.v4751;
return rv4754; }
}
F.v4751 = ((*(yR119 *)rt_nil_check(F.v4751))).f_chain;
}
{ void * rv4755 = ((void *)0);
return rv4755; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2178_FindHere(rt_int a_p2179) {
struct yf2180 F;
memset((void *)&F, 0, sizeof F);
F.p2179 = a_p2179;
F.v4759 = ((void * *)(v1226).p)[y_ix1(v1226, rt_mod(F.p2179, INT64_C(8192)))];
while ((!(F.v4759 == ((void *)0)))) {
if ((((((*(yR119 *)rt_nil_check(F.v4759))).f_name == F.p2179)) && ((((*(yR119 *)rt_nil_check(F.v4759))).f_depth == v1239)))) {
{ void * rv4762 = F.v4759;
return rv4762; }
}
F.v4759 = ((*(yR119 *)rt_nil_check(F.v4759))).f_chain;
}
{ void * rv4763 = ((void *)0);
return rv4763; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2184_Lookup(rt_int a_p2185, rt_int a_p2186) {
struct yf2187 F;
memset((void *)&F, 0, sizeof F);
F.p2185 = a_p2185;
F.p2186 = a_p2186;
F.v4768 = yr2172_Find(F.p2185);
if ((!(((void * *)(v1279).p)[y_ix1(v1279, v1239)] == ((void *)0)))) {
if ((((F.v4768 == ((void *)0))) || ((!(((*(yR119 *)rt_nil_check(F.v4768))).f_depth == v1239))))) {
if (yr2197_DeclaredFrom(((void * *)(v1279).p)[y_ix1(v1279, v1239)], F.p2185)) {
yr1152_FailN(F.p2186, F.p2185, y_str(" is used before its declaration in this scope (VII.I)", 53));
}
}
}
if ((F.v4768 == ((void *)0))) {
yr1152_FailN(F.p2186, F.p2185, y_str(" is not declared here", 21));
}
F.lo4776 = INT64_C(1);
F.hi4777 = v1294;
{ rt_int hi4781 = F.hi4777;
for (rt_int i4780 = F.lo4776; i4780 <= hi4781; i4780++) { F.c_4779 = i4780;
if (((((((*(yR119 *)rt_nil_check(F.v4768))).f_depth == ((rt_int *)(v1290).p)[y_ix1(v1290, F.c_4779)])) && ((((*(yR119 *)rt_nil_check(F.v4768))).f_serial > ((rt_int *)(v1292).p)[y_ix1(v1292, F.c_4779)]))) && yr2191_IsSimple(((*(yR119 *)rt_nil_check(F.v4768))).f_kind))) {
yr1152_FailN(F.p2186, F.p2185, y_str(" is declared after the routine that uses it: a simple declaration precedes the routines that use it (X.G)", 105));
}
if (i4780 == hi4781) break;
}}
if ((((*(yR119 *)rt_nil_check(F.v4768))).f_kind == v878)) {
F.v4770 = ((*(yR119 *)rt_nil_check(F.v4768))).f_chain;
while ((!(F.v4770 == ((void *)0)))) {
if ((((((((((*(yR119 *)rt_nil_check(F.v4770))).f_name == F.p2185)) && ((((*(yR119 *)rt_nil_check(F.v4770))).f_depth == ((*(yR119 *)rt_nil_check(F.v4768))).f_depth))) && ((((*(yR119 *)rt_nil_check(F.v4770))).f_kind == v878))) && yr2218_Resolved(F.v4770)) && ((!(yr2270_Real(F.v4770) == yr2270_Real(F.v4768))))) && ((!(((*(yR119 *)rt_nil_check(yr2270_Real(F.v4768)))).f_kind == v857))))) {
yr1152_FailN(F.p2186, F.p2185, y_str(" is exported here by two modules: name it with FROM (X.B.4)", 59));
}
F.v4770 = ((*(yR119 *)rt_nil_check(F.v4770))).f_chain;
}
}
{ void * rv4784 = F.v4768;
return rv4784; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2191_IsSimple(rt_int a_p2192) {
struct yf2193 F;
memset((void *)&F, 0, sizeof F);
F.p2192 = a_p2192;
{ rt_int rv4787 = (((((((F.p2192 == v845)) || ((F.p2192 == v848))) || ((F.p2192 == v851))) || ((F.p2192 == v854))) || ((F.p2192 == v857))) || ((F.p2192 == v872)));
return rv4787; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2197_DeclaredFrom(void * a_p2198, rt_int a_p2199) {
struct yf2200 F;
memset((void *)&F, 0, sizeof F);
F.p2198 = a_p2198;
F.p2199 = a_p2199;
F.v4792 = F.p2198;
F.v4794 = F.p2198;
while ((!(F.v4792 == ((void *)0)))) {
F.v4796 = ((*(yR99 *)rt_nil_check(F.v4792))).f_kind;
if (((((F.v4796 == v623)) || ((F.v4796 == v626))) || ((F.v4796 == v629)))) {
F.v4794 = ((*(yR99 *)rt_nil_check(F.v4792))).f_a;
while ((!(F.v4794 == ((void *)0)))) {
if ((((*(yR99 *)rt_nil_check(F.v4794))).f_name == F.p2199)) {
{ rt_int rv4798 = 1;
return rv4798; }
}
F.v4794 = ((*(yR99 *)rt_nil_check(F.v4794))).f_next;
}
}
if ((((((((F.v4796 == v632)) || ((F.v4796 == v635))) || ((F.v4796 == v638))) || ((F.v4796 == v650))) || ((F.v4796 == v608))) || ((F.v4796 == v644)))) {
if ((((*(yR99 *)rt_nil_check(F.v4792))).f_name == F.p2199)) {
{ rt_int rv4800 = 1;
return rv4800; }
}
}
if ((((((F.v4796 == v623)) || ((F.v4796 == v626))) || ((F.v4796 == v632))) || ((F.v4796 == v635)))) {
if (yr2204_LiteralIn(((*(yR99 *)rt_nil_check(F.v4792))).f_b, F.p2199)) {
{ rt_int rv4802 = 1;
return rv4802; }
}
}
if ((F.v4796 == v608)) {
F.v4794 = ((*(yR99 *)rt_nil_check(F.v4792))).f_b;
while ((!(F.v4794 == ((void *)0)))) {
if ((((((*(yR99 *)rt_nil_check(F.v4794))).f_ival == F.p2199)) || ((((((*(yR99 *)rt_nil_check(F.v4794))).f_ival == INT64_C(0))) && ((((*(yR99 *)rt_nil_check(F.v4794))).f_name == F.p2199)))))) {
{ rt_int rv4805 = 1;
return rv4805; }
}
F.v4794 = ((*(yR99 *)rt_nil_check(F.v4794))).f_next;
}
}
F.v4792 = ((*(yR99 *)rt_nil_check(F.v4792))).f_next;
}
{ rt_int rv4807 = 0;
return rv4807; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2204_LiteralIn(void * a_p2205, rt_int a_p2206) {
struct yf2207 F;
memset((void *)&F, 0, sizeof F);
F.p2205 = a_p2205;
F.p2206 = a_p2206;
if ((F.p2205 == ((void *)0))) {
{ rt_int rv4814 = 0;
return rv4814; }
}
if ((((*(yR99 *)rt_nil_check(F.p2205))).f_kind == v659)) {
F.v4812 = ((*(yR99 *)rt_nil_check(F.p2205))).f_a;
while ((!(F.v4812 == ((void *)0)))) {
if ((((*(yR99 *)rt_nil_check(F.v4812))).f_name == F.p2206)) {
{ rt_int rv4816 = 1;
return rv4816; }
}
F.v4812 = ((*(yR99 *)rt_nil_check(F.v4812))).f_next;
}
{ rt_int rv4818 = 0;
return rv4818; }
}
if ((((*(yR99 *)rt_nil_check(F.p2205))).f_kind == v665)) {
F.v4812 = ((*(yR99 *)rt_nil_check(F.p2205))).f_a;
while ((!(F.v4812 == ((void *)0)))) {
if (yr2204_LiteralIn(F.v4812, F.p2206)) {
{ rt_int rv4820 = 1;
return rv4820; }
}
F.v4812 = ((*(yR99 *)rt_nil_check(F.v4812))).f_next;
}
{ rt_int rv4821 = yr2204_LiteralIn(((*(yR99 *)rt_nil_check(F.p2205))).f_b, F.p2206);
return rv4821; }
}
if ((((*(yR99 *)rt_nil_check(F.p2205))).f_kind == v668)) {
F.v4812 = ((*(yR99 *)rt_nil_check(F.p2205))).f_a;
while ((!(F.v4812 == ((void *)0)))) {
if (yr2204_LiteralIn(((*(yR99 *)rt_nil_check(F.v4812))).f_b, F.p2206)) {
{ rt_int rv4823 = 1;
return rv4823; }
}
F.v4812 = ((*(yR99 *)rt_nil_check(F.v4812))).f_next;
}
if ((!(((*(yR99 *)rt_nil_check(F.p2205))).f_b == ((void *)0)))) {
if (yr2204_LiteralIn(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2205))).f_b))).f_b, F.p2206)) {
{ rt_int rv4825 = 1;
return rv4825; }
}
F.v4812 = ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2205))).f_b))).f_a;
while ((!(F.v4812 == ((void *)0)))) {
if (yr2211_LiteralInGroups(((*(yR99 *)rt_nil_check(F.v4812))).f_b, F.p2206)) {
{ rt_int rv4827 = 1;
return rv4827; }
}
F.v4812 = ((*(yR99 *)rt_nil_check(F.v4812))).f_next;
}
}
{ rt_int rv4829 = 0;
return rv4829; }
}
if ((((((*(yR99 *)rt_nil_check(F.p2205))).f_kind == v671)) || ((((*(yR99 *)rt_nil_check(F.p2205))).f_kind == v677)))) {
{ rt_int rv4830 = yr2204_LiteralIn(((*(yR99 *)rt_nil_check(F.p2205))).f_a, F.p2206);
return rv4830; }
}
{ rt_int rv4832 = 0;
return rv4832; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2211_LiteralInGroups(void * a_p2212, rt_int a_p2213) {
struct yf2214 F;
memset((void *)&F, 0, sizeof F);
F.p2212 = a_p2212;
F.p2213 = a_p2213;
F.v4837 = F.p2212;
while ((!(F.v4837 == ((void *)0)))) {
if (yr2204_LiteralIn(((*(yR99 *)rt_nil_check(F.v4837))).f_b, F.p2213)) {
{ rt_int rv4839 = 1;
return rv4839; }
}
F.v4837 = ((*(yR99 *)rt_nil_check(F.v4837))).f_next;
}
{ rt_int rv4841 = 0;
return rv4841; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2218_Resolved(void * a_p2219) {
struct yf2220 F;
memset((void *)&F, 0, sizeof F);
F.p2219 = a_p2219;
if ((!(((*(yR119 *)rt_nil_check(F.p2219))).f_kind == v878))) {
{ rt_int rv4845 = 1;
return rv4845; }
}
if ((((*(yR119 *)rt_nil_check(F.p2219))).f_target == ((void *)0))) {
{ rt_int rv4847 = 0;
return rv4847; }
}
{ rt_int rv4848 = yr2218_Resolved(((*(yR119 *)rt_nil_check(F.p2219))).f_target);
return rv4848; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2224_Ambiguous(void * a_p2225) {
struct yf2226 F;
memset((void *)&F, 0, sizeof F);
F.p2225 = a_p2225;
F.v4852 = ((*(yR119 *)rt_nil_check(F.p2225))).f_chain;
while ((!(F.v4852 == ((void *)0)))) {
if ((((((((*(yR119 *)rt_nil_check(F.v4852))).f_name == ((*(yR119 *)rt_nil_check(F.p2225))).f_name)) && yr2166_Visible(F.v4852)) && ((((*(yR119 *)rt_nil_check(F.v4852))).f_kind == v857))) && ((!(((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v4852))).f_rep))).f_tid == ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.p2225))).f_rep))).f_tid))))) {
{ rt_int rv4854 = 1;
return rv4854; }
}
F.v4852 = ((*(yR119 *)rt_nil_check(F.v4852))).f_chain;
}
{ rt_int rv4856 = 0;
return rv4856; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2230_FindLit(rt_int a_p2231, void * a_p2232) {
struct yf2233 F;
memset((void *)&F, 0, sizeof F);
F.p2231 = a_p2231;
F.p2232 = a_p2232;
F.v4861 = ((void * *)(v1226).p)[y_ix1(v1226, rt_mod(F.p2231, INT64_C(8192)))];
while ((!(F.v4861 == ((void *)0)))) {
if ((((((*(yR119 *)rt_nil_check(F.v4861))).f_name == F.p2231)) && yr2218_Resolved(F.v4861))) {
if ((((((*(yR119 *)rt_nil_check(yr2270_Real(F.v4861)))).f_kind == v857)) && ((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(yr2270_Real(F.v4861)))).f_rep))).f_tid == ((*(yR104 *)rt_nil_check(F.p2232))).f_tid)))) {
{ void * rv4864 = F.v4861;
return rv4864; }
}
}
F.v4861 = ((*(yR119 *)rt_nil_check(F.v4861))).f_chain;
}
{ void * rv4865 = ((void *)0);
return rv4865; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2237_Define(void * a_p2238, rt_int a_p2239) {
struct yf2240 F;
memset((void *)&F, 0, sizeof F);
F.p2238 = a_p2238;
F.p2239 = a_p2239;
F.v4870 = yr2178_FindHere(((*(yR119 *)rt_nil_check(F.p2238))).f_name);
F.v4872 = rt_range(rt_mod(((*(yR119 *)rt_nil_check(F.p2238))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((((!(F.v4870 == ((void *)0)))) && (!((((((*(yR119 *)rt_nil_check(F.v4870))).f_kind == v857)) && ((((*(yR119 *)rt_nil_check(F.p2238))).f_kind == v857)))))) && (!((((((((*(yR119 *)rt_nil_check(F.p2238))).f_kind == v860)) && ((!(((*(yR119 *)rt_nil_check(F.p2238))).f_alt == ((void *)0))))) && yr2218_Resolved(F.v4870)) && ((((*(yR119 *)rt_nil_check(F.p2238))).f_alt == yr2270_Real(F.v4870))))))) && (!((((((*(yR119 *)rt_nil_check(F.p2238))).f_kind == v878)) && ((((*(yR119 *)rt_nil_check(F.v4870))).f_kind == v878))))))) {
yr1152_FailN(F.p2239, ((*(yR119 *)rt_nil_check(F.p2238))).f_name, y_str(" is declared twice in this scope", 32));
}
((*(yR119 *)rt_nil_check(F.p2238))).f_depth = v1239;
((*(yR119 *)rt_nil_check(F.p2238))).f_chain = ((void * *)(v1226).p)[y_ix1(v1226, F.v4872)];
((void * *)(v1226).p)[y_ix1(v1226, F.v4872)] = F.p2238;
((*(yR119 *)rt_nil_check(F.p2238))).f_stack = ((*(yR124 *)rt_nil_check(((void * *)(v1237).p)[y_ix1(v1237, v1239)]))).f_syms;
((*(yR124 *)rt_nil_check(((void * *)(v1237).p)[y_ix1(v1237, v1239)]))).f_syms = F.p2238;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2244_Path(rt_int a_p2245, rt_int a_p2246) {
struct yf2247 F;
memset((void *)&F, 0, sizeof F);
F.p2245 = a_p2245;
F.p2246 = a_p2246;
F.v4880 = rt_range(rt_sub(v1245, F.p2245), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.p2245 == INT64_C(0))) {
{ rt_int rv4883 = F.p2246;
return rv4883; }
}
yr1006_SB();
if ((F.v4880 == INT64_C(0))) {
yr1017_SA(y_str("F.", 2));
} else {
yr1017_SA(y_str("F.up->", 6));
while ((F.v4880 > INT64_C(1))) {
yr1017_SA(y_str("up->", 4));
F.v4880 = rt_range(rt_sub(F.v4880, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1024_ST(F.p2246);
{ rt_int rv4891 = yr1036_SE();
return rv4891; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2251_FramePtr(rt_int a_p2252) {
struct yf2253 F;
memset((void *)&F, 0, sizeof F);
F.p2252 = a_p2252;
F.v4895 = rt_range(rt_sub(v1245, F.p2252), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.v4895 == INT64_C(0))) {
{ rt_int rv4899 = yr1041_T(y_str("&F", 2));
return rv4899; }
}
yr1006_SB();
yr1017_SA(y_str("F.up", 4));
while ((F.v4895 > INT64_C(1))) {
yr1017_SA(y_str("->up", 4));
F.v4895 = rt_range(rt_sub(F.v4895, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv4905 = yr1036_SE();
return rv4905; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2257_DeclStorage(rt_int a_p2258, rt_int a_p2259) {
struct yf2260 F;
memset((void *)&F, 0, sizeof F);
F.p2258 = a_p2258;
F.p2259 = a_p2259;
yr1006_SB();
if ((v1245 == INT64_C(0))) {
yr1017_SA(y_str("static ", 7));
}
yr1024_ST(F.p2258);
yr1017_SA(y_str(" ", 1));
yr1024_ST(F.p2259);
yr1017_SA(y_str(";", 1));
F.v4910 = yr1036_SE();
if ((v1245 == INT64_C(0))) {
yr1090_Put(&v968, F.v4910);
} else {
yr1090_Put(&v978, F.v4910);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2264_SymPath(void * a_p2265) {
struct yf2266 F;
memset((void *)&F, 0, sizeof F);
F.p2265 = a_p2265;
F.v4919 = yr2244_Path(((*(yR119 *)rt_nil_check(F.p2265))).f_level, ((*(yR119 *)rt_nil_check(F.p2265))).f_cname);
if (((*(yR119 *)rt_nil_check(F.p2265))).f_byref) {
yr1006_SB();
yr1017_SA(y_str("(*", 2));
yr1024_ST(F.v4919);
yr1017_SA(y_str(")", 1));
{ rt_int rv4922 = yr1036_SE();
return rv4922; }
}
{ rt_int rv4923 = F.v4919;
return rv4923; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2270_Real(void * a_p2271) {
struct yf2272 F;
memset((void *)&F, 0, sizeof F);
F.p2271 = a_p2271;
F.v4927 = F.p2271;
while ((((*(yR119 *)rt_nil_check(F.v4927))).f_kind == v878)) {
if ((((*(yR119 *)rt_nil_check(F.v4927))).f_target == ((void *)0))) {
yr1152_FailN(v980, ((*(yR119 *)rt_nil_check(F.v4927))).f_name, y_str(" is imported from a declaration translated later: until then only the bodies of routines may use it (X.G)", 105));
}
F.v4927 = ((*(yR119 *)rt_nil_check(F.v4927))).f_target;
}
{ void * rv4929 = F.v4927;
return rv4929; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2276_NewRep(rt_int a_p2277, rt_int a_p2278) {
struct yf2279 F;
memset((void *)&F, 0, sizeof F);
F.p2277 = a_p2277;
F.p2278 = a_p2278;
({ F.v4934 = rt_alloc(sizeof(yR104)); });
(*(yR104 *)rt_nil_check(F.v4934)) = ((yR104){ .f_kind = F.p2277, .f_tid = F.p2278, .f_tname = F.p2278, .f_lo = INT64_C(0), .f_hi = INT64_C(0), .f_mlo = INT64_C(0), .f_mhi = INT64_C(0), .f_hasm = 0, .f_scale = INT64_C(0), .f_prec = INT64_C(0), .f_elem = ((void *)0), .f_idx = ((void *)0), .f_nidx = INT64_C(0), .f_link = ((void *)0), .f_lits = ((void *)0), .f_nlits = INT64_C(0), .f_fields = ((void *)0), .f_selector = ((void *)0), .f_cname = INT64_C(0), .f_dname = INT64_C(0), .f_dlevel = INT64_C(0), .f_deep = 0, .f_abstract = 0, .f_opaque = 0, .f_opaqueops = INT64_C(0), .f_ordered = 0, .f_forward = INT64_C(0), .f_fwdscope = INT64_C(0), .f_monitor = ((void *)0), .f_serial = INT64_C(0), .f_sig = INT64_C(0), .f_fsn = INT64_C(0), .f_fsd = INT64_C(0) });
((*(yR104 *)rt_nil_check(F.v4934))).f_serial = yr1161_NewSerial();
{ void * rv4958 = F.v4934;
return rv4958; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2283_CopyRep(void * a_p2284) {
struct yf2285 F;
memset((void *)&F, 0, sizeof F);
F.p2284 = a_p2284;
({ F.v4962 = rt_alloc(sizeof(yR104)); });
(*(yR104 *)rt_nil_check(F.v4962)) = (*(yR104 *)rt_nil_check(F.p2284));
((*(yR104 *)rt_nil_check(F.v4962))).f_serial = yr1161_NewSerial();
((*(yR104 *)rt_nil_check(F.v4962))).f_sig = INT64_C(0);
{ void * rv4964 = F.v4962;
return rv4964; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2289_IsDiscrete(void * a_p2290) {
struct yf2291 F;
memset((void *)&F, 0, sizeof F);
F.p2290 = a_p2290;
{ rt_int rv4967 = (((((((*(yR104 *)rt_nil_check(F.p2290))).f_kind == v788)) || ((((*(yR104 *)rt_nil_check(F.p2290))).f_kind == v797))) || ((((*(yR104 *)rt_nil_check(F.p2290))).f_kind == v800))) || ((((*(yR104 *)rt_nil_check(F.p2290))).f_kind == v803)));
return rv4967; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2295_IsNumeric(void * a_p2296) {
struct yf2297 F;
memset((void *)&F, 0, sizeof F);
F.p2296 = a_p2296;
{ rt_int rv4970 = ((((((*(yR104 *)rt_nil_check(F.p2296))).f_kind == v788)) || ((((*(yR104 *)rt_nil_check(F.p2296))).f_kind == v791))) || ((((*(yR104 *)rt_nil_check(F.p2296))).f_kind == v794)));
return rv4970; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2301_IsArrayLike(void * a_p2302) {
struct yf2303 F;
memset((void *)&F, 0, sizeof F);
F.p2302 = a_p2302;
{ rt_int rv4973 = ((((((*(yR104 *)rt_nil_check(F.p2302))).f_kind == v806)) || ((((*(yR104 *)rt_nil_check(F.p2302))).f_kind == v827))) || ((((*(yR104 *)rt_nil_check(F.p2302))).f_kind == v830)));
return rv4973; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2307_IsString(void * a_p2308) {
struct yf2309 F;
memset((void *)&F, 0, sizeof F);
F.p2308 = a_p2308;
if ((((*(yR104 *)rt_nil_check(F.p2308))).f_kind == v830)) {
{ rt_int rv4977 = 1;
return rv4977; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2308))).f_kind == v806)) && ((((*(yR104 *)rt_nil_check(F.p2308))).f_nidx == INT64_C(1))))) {
{ rt_int rv4979 = (((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2308))).f_elem))).f_kind == v803);
return rv4979; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2308))).f_kind == v827)) && ((((*(yR104 *)rt_nil_check(F.p2308))).f_nidx == INT64_C(1))))) {
{ rt_int rv4981 = (((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2308))).f_elem))).f_kind == v803);
return rv4981; }
}
{ rt_int rv4983 = 0;
return rv4983; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2313_Deep(void * a_p2314) {
struct yf2315 F;
memset((void *)&F, 0, sizeof F);
F.p2314 = a_p2314;
if (((((((*(yR104 *)rt_nil_check(F.p2314))).f_kind == v806)) || ((((*(yR104 *)rt_nil_check(F.p2314))).f_kind == v827))) || ((((*(yR104 *)rt_nil_check(F.p2314))).f_kind == v830)))) {
{ rt_int rv4987 = 1;
return rv4987; }
}
{ rt_int rv4988 = (((((*(yR104 *)rt_nil_check(F.p2314))).f_kind == v809)) && ((*(yR104 *)rt_nil_check(F.p2314))).f_deep);
return rv4988; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2319_Holds(void * a_p2320, rt_int a_p2321) {
struct yf2322 F;
memset((void *)&F, 0, sizeof F);
F.p2320 = a_p2320;
F.p2321 = a_p2321;
if ((((*(yR104 *)rt_nil_check(F.p2320))).f_kind == v806)) {
{ rt_int rv4994 = (((((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2320))).f_elem))).f_kind == F.p2321)) || yr2319_Holds(((*(yR104 *)rt_nil_check(F.p2320))).f_elem, F.p2321));
return rv4994; }
}
if ((((*(yR104 *)rt_nil_check(F.p2320))).f_kind == v809)) {
F.v4993 = ((*(yR104 *)rt_nil_check(F.p2320))).f_fields;
while ((!(F.v4993 == ((void *)0)))) {
if ((((((*(yR104 *)rt_nil_check(((*(yR109 *)rt_nil_check(F.v4993))).f_rep))).f_kind == F.p2321)) || yr2319_Holds(((*(yR109 *)rt_nil_check(F.v4993))).f_rep, F.p2321))) {
{ rt_int rv4996 = 1;
return rv4996; }
}
F.v4993 = ((*(yR109 *)rt_nil_check(F.v4993))).f_next;
}
}
{ rt_int rv4998 = 0;
return rv4998; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2326_HoldsSignal(void * a_p2327) {
struct yf2328 F;
memset((void *)&F, 0, sizeof F);
F.p2327 = a_p2327;
{ rt_int rv5001 = yr2319_Holds(F.p2327, v821);
return rv5001; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2332_NonAssignable(void * a_p2333) {
struct yf2334 F;
memset((void *)&F, 0, sizeof F);
F.p2333 = a_p2333;
F.v5005 = ((*(yR104 *)rt_nil_check(F.p2333))).f_kind;
if (((((F.v5005 == v821)) || ((F.v5005 == v815))) || ((F.v5005 == v824)))) {
{ rt_int rv5007 = 1;
return rv5007; }
}
{ rt_int rv5008 = ((yr2319_Holds(F.p2333, v821) || yr2319_Holds(F.p2333, v815)) || yr2319_Holds(F.p2333, v824));
return rv5008; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2338_CType(void * a_p2339) {
struct yf2340 F;
memset((void *)&F, 0, sizeof F);
F.p2339 = a_p2339;
F.v5012 = ((*(yR104 *)rt_nil_check(F.p2339))).f_kind;
if (((((F.v5012 == v788)) || ((F.v5012 == v797))) || ((F.v5012 == v800)))) {
{ rt_int rv5014 = yr1041_T(y_str("rt_int", 6));
return rv5014; }
}
if ((F.v5012 == v803)) {
{ rt_int rv5016 = yr1041_T(y_str("unsigned char", 13));
return rv5016; }
}
if ((F.v5012 == v794)) {
{ rt_int rv5018 = yr1041_T(y_str("double", 6));
return rv5018; }
}
if ((F.v5012 == v791)) {
{ rt_int rv5020 = yr1041_T(y_str("yfix", 4));
return rv5020; }
}
if (((((F.v5012 == v806)) || ((F.v5012 == v827))) || ((F.v5012 == v830)))) {
{ rt_int rv5022 = yr1041_T(y_str("yarr", 4));
return rv5022; }
}
if ((F.v5012 == v809)) {
{ rt_int rv5023 = ((*(yR104 *)rt_nil_check(F.p2339))).f_cname;
return rv5023; }
}
if ((((F.v5012 == v812)) || ((F.v5012 == v833)))) {
{ rt_int rv5025 = yr1041_T(y_str("void *", 6));
return rv5025; }
}
if ((F.v5012 == v815)) {
{ rt_int rv5027 = yr1041_T(y_str("yfile *", 7));
return rv5027; }
}
if ((F.v5012 == v818)) {
{ rt_int rv5029 = yr1041_T(y_str("yset", 4));
return rv5029; }
}
if ((F.v5012 == v821)) {
{ rt_int rv5031 = yr1041_T(y_str("ysig", 4));
return rv5031; }
}
if ((F.v5012 == v824)) {
{ rt_int rv5033 = yr1041_T(y_str("rt_lock", 7));
return rv5033; }
}
{ rt_int rv5035 = yr1041_T(y_str("void", 4));
return rv5035; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2344_DescOf(void * a_p2345) {
struct yf2346 F;
memset((void *)&F, 0, sizeof F);
F.p2345 = a_p2345;
F.v5039 = ((*(yR104 *)rt_nil_check(F.p2345))).f_kind;
if (((((F.v5039 == v788)) || ((F.v5039 == v797))) || ((F.v5039 == v800)))) {
{ rt_int rv5041 = yr1041_T(y_str("&y_d_int", 8));
return rv5041; }
}
if ((F.v5039 == v803)) {
{ rt_int rv5043 = yr1041_T(y_str("&y_d_byte", 9));
return rv5043; }
}
if ((F.v5039 == v794)) {
{ rt_int rv5045 = yr1041_T(y_str("&y_d_float", 10));
return rv5045; }
}
if ((F.v5039 == v791)) {
{ rt_int rv5047 = yr1041_T(y_str("&y_d_fix", 8));
return rv5047; }
}
if ((((F.v5039 == v812)) || ((F.v5039 == v833)))) {
{ rt_int rv5049 = yr1041_T(y_str("&y_d_ptr", 8));
return rv5049; }
}
if ((F.v5039 == v818)) {
{ rt_int rv5051 = yr1041_T(y_str("&y_d_set", 8));
return rv5051; }
}
if ((((F.v5039 == v806)) || ((F.v5039 == v809)))) {
yr1006_SB();
yr1017_SA(y_str("&", 1));
yr1024_ST(yr2244_Path(((*(yR104 *)rt_nil_check(F.p2345))).f_dlevel, ((*(yR104 *)rt_nil_check(F.p2345))).f_dname));
{ rt_int rv5053 = yr1036_SE();
return rv5053; }
}
if ((F.v5039 == v830)) {
{ rt_int rv5055 = yr1041_T(y_str("&y_d_str", 8));
return rv5055; }
}
if ((F.v5039 == v821)) {
{ rt_int rv5057 = yr1041_T(y_str("&y_d_sig", 8));
return rv5057; }
}
if ((F.v5039 == v824)) {
{ rt_int rv5059 = yr1041_T(y_str("&y_d_sem", 8));
return rv5059; }
}
{ rt_int rv5061 = yr1041_T(y_str("&y_d_opaque", 11));
return rv5061; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2350_NewDesc(void * a_p2351) {
struct yf2352 F;
memset((void *)&F, 0, sizeof F);
F.p2351 = a_p2351;
((*(yR104 *)rt_nil_check(F.p2351))).f_dname = yr1166_Fresh(y_str("yd_", 3));
((*(yR104 *)rt_nil_check(F.p2351))).f_dlevel = v1245;
yr2257_DeclStorage(yr1041_T(y_str("ydesc", 5)), ((*(yR104 *)rt_nil_check(F.p2351))).f_dname);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2356_SameType(void * a_p2357, void * a_p2358) {
struct yf2359 F;
memset((void *)&F, 0, sizeof F);
F.p2357 = a_p2357;
F.p2358 = a_p2358;
if ((((*(yR104 *)rt_nil_check(F.p2357))).f_tid == ((*(yR104 *)rt_nil_check(F.p2358))).f_tid)) {
{ rt_int rv5070 = 1;
return rv5070; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2357))).f_kind == v830)) && yr2307_IsString(F.p2358))) {
{ rt_int rv5072 = 1;
return rv5072; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2358))).f_kind == v830)) && yr2307_IsString(F.p2357))) {
{ rt_int rv5074 = 1;
return rv5074; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2357))).f_kind == v833)) && ((((*(yR104 *)rt_nil_check(F.p2358))).f_kind == v812)))) {
{ rt_int rv5076 = 1;
return rv5076; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2358))).f_kind == v833)) && ((((*(yR104 *)rt_nil_check(F.p2357))).f_kind == v812)))) {
{ rt_int rv5078 = 1;
return rv5078; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2357))).f_kind == v842)) || ((((*(yR104 *)rt_nil_check(F.p2358))).f_kind == v842)))) {
{ rt_int rv5080 = 1;
return rv5080; }
}
{ rt_int rv5082 = 0;
return rv5082; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2363_TypeClash(rt_int a_p2364, void * a_p2365, void * a_p2366) {
struct yf2367 F;
memset((void *)&F, 0, sizeof F);
F.p2364 = a_p2364;
F.p2365 = a_p2365;
F.p2366 = a_p2366;
yr1006_SB();
yr1017_SA(y_str("type conflict: ", 15));
yr1024_ST(((*(yR104 *)rt_nil_check(F.p2365))).f_tname);
yr1017_SA(y_str(" expected, ", 11));
yr1024_ST(((*(yR104 *)rt_nil_check(F.p2366))).f_tname);
yr1017_SA(y_str(" found", 6));
F.v5088 = yr1036_SE();
yr1137_Fail(F.p2364, F.v5088);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2371_CheckType(rt_int a_p2372, void * a_p2373, void * a_p2374) {
struct yf2375 F;
memset((void *)&F, 0, sizeof F);
F.p2372 = a_p2372;
F.p2373 = a_p2373;
F.p2374 = a_p2374;
if ((!yr2356_SameType(F.p2373, F.p2374))) {
yr2363_TypeClash(F.p2372, F.p2373, F.p2374);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2379_CheckRepresented(void * a_p2380, rt_int a_p2381) {
struct yf2382 F;
memset((void *)&F, 0, sizeof F);
F.p2380 = a_p2380;
F.p2381 = a_p2381;
if (((*(yR104 *)rt_nil_check(F.p2380))).f_abstract) {
yr1152_FailN(F.p2381, ((*(yR104 *)rt_nil_check(F.p2380))).f_tname, y_str(" is a type, not a representation (VI.A.1)", 41));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2386_SigText(void * a_p2387) {
struct yf2388 F;
memset((void *)&F, 0, sizeof F);
F.p2387 = a_p2387;
F.v5103 = ((*(yR104 *)rt_nil_check(F.p2387))).f_kind;
yr1006_SB();
yr1024_ST(((*(yR104 *)rt_nil_check(F.p2387))).f_tid);
if (((yr2289_IsDiscrete(F.p2387) || ((F.v5103 == v794))) || ((F.v5103 == v791)))) {
yr1017_SA(y_str("[", 1));
if (((*(yR104 *)rt_nil_check(F.p2387))).f_hasm) {
yr1030_SI(((*(yR104 *)rt_nil_check(F.p2387))).f_mlo);
yr1017_SA(y_str("..", 2));
yr1030_SI(((*(yR104 *)rt_nil_check(F.p2387))).f_mhi);
} else {
yr1024_ST(((*(yR104 *)rt_nil_check(F.p2387))).f_lo);
yr1017_SA(y_str("..", 2));
yr1024_ST(((*(yR104 *)rt_nil_check(F.p2387))).f_hi);
}
yr1017_SA(y_str("]", 1));
if ((F.v5103 == v794)) {
yr1017_SA(y_str("P", 1));
yr1024_ST(((*(yR104 *)rt_nil_check(F.p2387))).f_prec);
}
if ((F.v5103 == v791)) {
yr1017_SA(y_str("S", 1));
yr1030_SI(((*(yR104 *)rt_nil_check(F.p2387))).f_fsn);
yr1017_SA(y_str("/", 1));
yr1030_SI(((*(yR104 *)rt_nil_check(F.p2387))).f_fsd);
}
} else if ((F.v5103 == v806)) {
yr1017_SA(y_str("(", 1));
F.v5105 = ((*(yR104 *)rt_nil_check(F.p2387))).f_idx;
while ((!(F.v5105 == ((void *)0)))) {
yr1024_ST(yr2392_RepSig(F.v5105));
yr1017_SA(y_str(",", 1));
F.v5105 = ((*(yR104 *)rt_nil_check(F.v5105))).f_link;
}
yr1017_SA(y_str("OF ", 3));
yr1024_ST(yr2392_RepSig(((*(yR104 *)rt_nil_check(F.p2387))).f_elem));
yr1017_SA(y_str(")", 1));
} else if ((F.v5103 == v827)) {
yr1017_SA(y_str("(", 1));
yr1030_SI(((*(yR104 *)rt_nil_check(F.p2387))).f_nidx);
yr1017_SA(y_str("D ", 2));
yr1024_ST(yr2392_RepSig(((*(yR104 *)rt_nil_check(F.p2387))).f_elem));
yr1017_SA(y_str(")", 1));
} else if ((F.v5103 == v809)) {
yr1017_SA(y_str("{", 1));
F.v5107 = ((*(yR104 *)rt_nil_check(F.p2387))).f_fields;
while ((!(F.v5107 == ((void *)0)))) {
if (((*(yR109 *)rt_nil_check(F.v5107))).f_isconst) {
yr1017_SA(y_str("C ", 2));
} else {
yr1017_SA(y_str("V ", 2));
}
yr1024_ST(((*(yR109 *)rt_nil_check(F.v5107))).f_name);
yr1017_SA(y_str(":", 1));
yr1024_ST(yr2392_RepSig(((*(yR109 *)rt_nil_check(F.v5107))).f_rep));
yr1017_SA(y_str(";", 1));
F.v5107 = ((*(yR109 *)rt_nil_check(F.v5107))).f_next;
}
yr1017_SA(y_str("}", 1));
} else if ((((F.v5103 == v818)) || ((F.v5103 == v815)))) {
yr1017_SA(y_str("(", 1));
yr1024_ST(yr2392_RepSig(((*(yR104 *)rt_nil_check(F.p2387))).f_elem));
yr1017_SA(y_str(")", 1));
}
{ rt_int rv5130 = yr1036_SE();
return rv5130; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2392_RepSig(void * a_p2393) {
struct yf2394 F;
memset((void *)&F, 0, sizeof F);
F.p2393 = a_p2393;
if ((((*(yR104 *)rt_nil_check(F.p2393))).f_sig == INT64_C(0))) {
((*(yR104 *)rt_nil_check(F.p2393))).f_sig = yr1055_Name(yr2386_SigText(F.p2393));
}
{ rt_int rv5134 = ((*(yR104 *)rt_nil_check(F.p2393))).f_sig;
return rv5134; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2398_Identical(void * a_p2399, void * a_p2400) {
struct yf2401 F;
memset((void *)&F, 0, sizeof F);
F.p2399 = a_p2399;
F.p2400 = a_p2400;
if ((F.p2399 == F.p2400)) {
{ rt_int rv5139 = 1;
return rv5139; }
}
if ((!yr2356_SameType(F.p2399, F.p2400))) {
{ rt_int rv5141 = 0;
return rv5141; }
}
{ rt_int rv5142 = (yr2392_RepSig(F.p2399) == yr2392_RepSig(F.p2400));
return rv5142; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2405_IsLiteralNode(void * a_p2406) {
struct yf2407 F;
memset((void *)&F, 0, sizeof F);
F.p2406 = a_p2406;
if ((((((((*(yR99 *)rt_nil_check(F.p2406))).f_kind == v743)) || ((((*(yR99 *)rt_nil_check(F.p2406))).f_kind == v749))) || ((((*(yR99 *)rt_nil_check(F.p2406))).f_kind == v746))) || ((((*(yR99 *)rt_nil_check(F.p2406))).f_kind == v752)))) {
{ rt_int rv5145 = (((*(yR99 *)rt_nil_check(F.p2406))).f_d == ((void *)0));
return rv5145; }
}
if ((((((*(yR99 *)rt_nil_check(F.p2406))).f_kind == v779)) || ((((*(yR99 *)rt_nil_check(F.p2406))).f_kind == v785)))) {
{ rt_int rv5146 = yr2405_IsLiteralNode(((*(yR99 *)rt_nil_check(F.p2406))).f_a);
return rv5146; }
}
{ rt_int rv5148 = 0;
return rv5148; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2411_StoreBounds(void * a_p2412, yarr a_p2414) {
struct yf2415 F;
memset((void *)&F, 0, sizeof F);
F.p2412 = a_p2412;
F.p2414 = a_p2414;
F.v5153 = yr1166_Fresh(y_str("lo", 2));
F.v5155 = yr1166_Fresh(y_str("hi", 2));
yr2257_DeclStorage(yr1041_T(F.p2414), F.v5153);
yr2257_DeclStorage(yr1041_T(F.p2414), F.v5155);
yr1112_Emit(yr3102_Join(yr2244_Path(v1245, F.v5153), yr1041_T(y_str(" = ", 3)), yr3102_Join(((*(yR104 *)rt_nil_check(F.p2412))).f_lo, yr1041_T(y_str(";", 1)), INT64_C(0))));
yr1112_Emit(yr3102_Join(yr2244_Path(v1245, F.v5155), yr1041_T(y_str(" = ", 3)), yr3102_Join(((*(yR104 *)rt_nil_check(F.p2412))).f_hi, yr1041_T(y_str(";", 1)), INT64_C(0))));
((*(yR104 *)rt_nil_check(F.p2412))).f_lo = F.v5153;
((*(yR104 *)rt_nil_check(F.p2412))).f_hi = F.v5155;
((*(yR104 *)rt_nil_check(F.p2412))).f_dname = F.v5153;
((*(yR104 *)rt_nil_check(F.p2412))).f_dlevel = v1245;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2419_LoText(void * a_p2420) {
struct yf2421 F;
memset((void *)&F, 0, sizeof F);
F.p2420 = a_p2420;
if ((((((!(((*(yR104 *)rt_nil_check(F.p2420))).f_dname == INT64_C(0)))) && ((!(((*(yR104 *)rt_nil_check(F.p2420))).f_lo == INT64_C(0))))) && ((!(((*(yR104 *)rt_nil_check(F.p2420))).f_kind == v806)))) && ((!(((*(yR104 *)rt_nil_check(F.p2420))).f_kind == v809))))) {
{ rt_int rv5168 = yr2244_Path(((*(yR104 *)rt_nil_check(F.p2420))).f_dlevel, ((*(yR104 *)rt_nil_check(F.p2420))).f_lo);
return rv5168; }
}
{ rt_int rv5169 = ((*(yR104 *)rt_nil_check(F.p2420))).f_lo;
return rv5169; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2425_HiText(void * a_p2426) {
struct yf2427 F;
memset((void *)&F, 0, sizeof F);
F.p2426 = a_p2426;
if ((((((!(((*(yR104 *)rt_nil_check(F.p2426))).f_dname == INT64_C(0)))) && ((!(((*(yR104 *)rt_nil_check(F.p2426))).f_hi == INT64_C(0))))) && ((!(((*(yR104 *)rt_nil_check(F.p2426))).f_kind == v806)))) && ((!(((*(yR104 *)rt_nil_check(F.p2426))).f_kind == v809))))) {
{ rt_int rv5174 = yr2244_Path(((*(yR104 *)rt_nil_check(F.p2426))).f_dlevel, ((*(yR104 *)rt_nil_check(F.p2426))).f_hi);
return rv5174; }
}
{ rt_int rv5175 = ((*(yR104 *)rt_nil_check(F.p2426))).f_hi;
return rv5175; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2431_AdoptLiteral(void * a_p2432, void * a_p2433, void * a_p2434) {
struct yf2435 F;
memset((void *)&F, 0, sizeof F);
F.p2432 = a_p2432;
F.p2433 = a_p2433;
F.p2434 = a_p2434;
if ((((!yr2405_IsLiteralNode(F.p2432)) || ((!(((*(yR104 *)rt_nil_check(F.p2433))).f_kind == ((*(yR104 *)rt_nil_check(F.p2434))).f_kind)))) || (!yr2295_IsNumeric(F.p2434)))) {
{ void * rv5182 = F.p2433;
return rv5182; }
}
if (yr2439_HasQualifier(F.p2432)) {
{ void * rv5183 = F.p2433;
return rv5183; }
}
F.v5181 = yr2283_CopyRep(F.p2433);
((*(yR104 *)rt_nil_check(F.v5181))).f_tid = ((*(yR104 *)rt_nil_check(F.p2434))).f_tid;
((*(yR104 *)rt_nil_check(F.v5181))).f_tname = ((*(yR104 *)rt_nil_check(F.p2434))).f_tname;
{ void * rv5184 = F.v5181;
return rv5184; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2439_HasQualifier(void * a_p2440) {
struct yf2441 F;
memset((void *)&F, 0, sizeof F);
F.p2440 = a_p2440;
if ((((((*(yR99 *)rt_nil_check(F.p2440))).f_kind == v779)) || ((((*(yR99 *)rt_nil_check(F.p2440))).f_kind == v785)))) {
{ rt_int rv5187 = yr2439_HasQualifier(((*(yR99 *)rt_nil_check(F.p2440))).f_a);
return rv5187; }
}
{ rt_int rv5188 = (!(((*(yR99 *)rt_nil_check(F.p2440))).f_d == ((void *)0)));
return rv5188; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2445_Gcd(rt_int a_p2446, rt_int a_p2447) {
struct yf2448 F;
memset((void *)&F, 0, sizeof F);
F.p2446 = a_p2446;
F.p2447 = a_p2447;
F.v5193 = F.p2446;
F.v5195 = F.p2447;
if ((F.v5193 < INT64_C(0))) {
F.v5193 = rt_range(rt_neg(F.v5193), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v5195 < INT64_C(0))) {
F.v5195 = rt_range(rt_neg(F.v5195), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
while ((!(F.v5195 == INT64_C(0)))) {
F.v5197 = rt_range(rt_mod(F.v5193, F.v5195), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5193 = F.v5195;
F.v5195 = F.v5197;
}
if ((F.v5193 == INT64_C(0))) {
{ rt_int rv5206 = INT64_C(1);
return rv5206; }
}
{ rt_int rv5207 = F.v5193;
return rv5207; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2452_MulChk(rt_int a_p2453, rt_int a_p2454, rt_int a_p2455) {
struct yf2456 F;
memset((void *)&F, 0, sizeof F);
F.p2453 = a_p2453;
F.p2454 = a_p2454;
F.p2455 = a_p2455;
F.v5213 = F.p2453;
F.v5215 = F.p2454;
if ((F.v5213 < INT64_C(0))) {
F.v5213 = rt_range(rt_neg(F.v5213), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v5215 < INT64_C(0))) {
F.v5215 = rt_range(rt_neg(F.v5215), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((((!(F.v5213 == INT64_C(0)))) && ((F.v5215 > (rt_div(v890, F.v5213)))))) {
yr1144_FailS(F.p2455, y_str("a scale beyond this implementation: fixed-point scales are fractions of 64-bit integers", 87));
}
{ rt_int rv5224 = rt_range(rt_mul(F.p2453, F.p2454), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return rv5224; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2460_PowChk(rt_int a_p2461, rt_int a_p2462, rt_int a_p2463) {
struct yf2464 F;
memset((void *)&F, 0, sizeof F);
F.p2461 = a_p2461;
F.p2462 = a_p2462;
F.p2463 = a_p2463;
F.v5230 = INT64_C(1);
F.lo5235 = INT64_C(1);
F.hi5236 = F.p2462;
{ rt_int hi5240 = F.hi5236;
for (rt_int i5239 = F.lo5235; i5239 <= hi5240; i5239++) { F.c_5238 = i5239;
F.v5230 = yr2452_MulChk(F.v5230, F.p2461, F.p2463);
if (i5239 == hi5240) break;
}}
{ rt_int rv5241 = F.v5230;
return rv5241; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2468_ScaleRatio(void * a_p2469, void * a_p2470, rt_int * a_p2471, rt_int * a_p2472, rt_int * a_p2473) {
struct yf2474 F;
memset((void *)&F, 0, sizeof F);
F.p2469 = a_p2469;
F.p2470 = a_p2470;
F.p2471_o = a_p2471;
F.p2472_o = a_p2472;
F.p2473_o = a_p2473;
F.p2471 = yr1041_T(y_str("1", 1));
F.p2472 = yr1041_T(y_str("1", 1));
F.p2473 = 1;
if ((((((*(yR104 *)rt_nil_check(F.p2469))).f_fsd == INT64_C(0))) || ((((*(yR104 *)rt_nil_check(F.p2470))).f_fsd == INT64_C(0))))) {
(*F.p2471_o) = F.p2471;
(*F.p2472_o) = F.p2472;
(*F.p2473_o) = F.p2473;
return;
}
F.v5249 = yr2445_Gcd(((*(yR104 *)rt_nil_check(F.p2469))).f_fsn, ((*(yR104 *)rt_nil_check(F.p2470))).f_fsn);
F.v5251 = yr2445_Gcd(((*(yR104 *)rt_nil_check(F.p2469))).f_fsd, ((*(yR104 *)rt_nil_check(F.p2470))).f_fsd);
F.v5253 = rt_range(rt_div(((*(yR104 *)rt_nil_check(F.p2469))).f_fsn, F.v5249), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5255 = rt_range(rt_div(((*(yR104 *)rt_nil_check(F.p2470))).f_fsd, F.v5251), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5257 = rt_range(rt_div(((*(yR104 *)rt_nil_check(F.p2469))).f_fsd, F.v5251), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5259 = rt_range(rt_div(((*(yR104 *)rt_nil_check(F.p2470))).f_fsn, F.v5249), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.p2473 = (((((F.v5253 == INT64_C(1))) && ((F.v5255 == INT64_C(1)))) && ((F.v5257 == INT64_C(1)))) && ((F.v5259 == INT64_C(1))));
F.p2471 = yr2478_Factor(F.v5253, F.v5255);
F.p2472 = yr2478_Factor(F.v5257, F.v5259);
(*F.p2471_o) = F.p2471;
(*F.p2472_o) = F.p2472;
(*F.p2473_o) = F.p2473;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2478_Factor(rt_int a_p2479, rt_int a_p2480) {
struct yf2481 F;
memset((void *)&F, 0, sizeof F);
F.p2479 = a_p2479;
F.p2480 = a_p2480;
yr1006_SB();
yr1017_SA(y_str("((yfix)INT64_C(", 15));
yr1030_SI(F.p2479);
yr1017_SA(y_str(")", 1));
if ((!(F.p2480 == INT64_C(1)))) {
yr1017_SA(y_str(" * INT64_C(", 11));
yr1030_SI(F.p2480);
yr1017_SA(y_str(")", 1));
}
yr1017_SA(y_str(")", 1));
{ rt_int rv5282 = yr1036_SE();
return rv5282; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2485_SetScale(void * a_p2486, rt_int a_p2487, rt_int a_p2488) {
struct yf2489 F;
memset((void *)&F, 0, sizeof F);
F.p2486 = a_p2486;
F.p2487 = a_p2487;
F.p2488 = a_p2488;
F.v5288 = yr2445_Gcd(F.p2487, F.p2488);
((*(yR104 *)rt_nil_check(F.p2486))).f_fsn = rt_range(rt_div(F.p2487, F.v5288), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR104 *)rt_nil_check(F.p2486))).f_fsd = rt_range(rt_div(F.p2488, F.v5288), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((*(yR104 *)rt_nil_check(F.p2486))).f_fsd < INT64_C(0))) {
((*(yR104 *)rt_nil_check(F.p2486))).f_fsn = rt_range(rt_neg(((*(yR104 *)rt_nil_check(F.p2486))).f_fsn), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR104 *)rt_nil_check(F.p2486))).f_fsd = rt_range(rt_neg(((*(yR104 *)rt_nil_check(F.p2486))).f_fsd), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2493_Qualify(void * a_p2494, void * a_p2495) {
struct yf2496 F;
memset((void *)&F, 0, sizeof F);
F.p2494 = a_p2494;
F.p2495 = a_p2495;
if ((((*(yR104 *)rt_nil_check(F.p2494))).f_kind == v791)) {
if ((((*(yR99 *)rt_nil_check(F.p2495))).f_c == ((void *)0))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2495))).f_line, y_str("FIXED needs SCALE (VI.A.1.b)", 28));
}
yr2697_ManifestFix(((*(yR99 *)rt_nil_check(F.p2495))).f_c, &F.v5310, &F.v5316, &F.v5318);
if (((!F.v5310) || ((F.v5316 <= INT64_C(0))))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2495))).f_line, y_str("SCALE is a positive manifest constant (VI.A.1.b, VI.C)", 54));
}
((*(yR104 *)rt_nil_check(F.p2494))).f_fsn = F.v5316;
((*(yR104 *)rt_nil_check(F.p2494))).f_fsd = F.v5318;
yr1006_SB();
yr1030_SI(F.v5316);
yr1017_SA(y_str("/", 1));
yr1030_SI(F.v5318);
((*(yR104 *)rt_nil_check(F.p2494))).f_scale = yr1036_SE();
}
yr2779_Expr(((*(yR99 *)rt_nil_check(F.p2495))).f_a, F.p2494, &F.v5298, &F.v5306);
yr2779_Expr(((*(yR99 *)rt_nil_check(F.p2495))).f_b, F.p2494, &F.v5300, &F.v5308);
F.v5306 = yr2431_AdoptLiteral(((*(yR99 *)rt_nil_check(F.p2495))).f_a, F.v5306, F.p2494);
F.v5308 = yr2431_AdoptLiteral(((*(yR99 *)rt_nil_check(F.p2495))).f_b, F.v5308, F.p2494);
if ((((*(yR104 *)rt_nil_check(F.p2494))).f_kind == v791)) {
yr2371_CheckType(((*(yR99 *)rt_nil_check(F.p2495))).f_line, F.p2494, F.v5306);
yr2371_CheckType(((*(yR99 *)rt_nil_check(F.p2495))).f_line, F.p2494, F.v5308);
yr2468_ScaleRatio(F.v5306, F.p2494, &F.v5302, &F.v5304, &F.v5312);
((*(yR104 *)rt_nil_check(F.p2494))).f_lo = yr3102_Join(yr1041_T(y_str("y_fix_bound(", 12)), F.v5298, yr3102_Join(yr1041_T(y_str(", ", 2)), F.v5302, yr3102_Join(yr1041_T(y_str(", ", 2)), F.v5304, yr1041_T(y_str(", 1)", 4)))));
yr2468_ScaleRatio(F.v5308, F.p2494, &F.v5302, &F.v5304, &F.v5312);
((*(yR104 *)rt_nil_check(F.p2494))).f_hi = yr3102_Join(yr1041_T(y_str("y_fix_bound(", 12)), F.v5300, yr3102_Join(yr1041_T(y_str(", ", 2)), F.v5302, yr3102_Join(yr1041_T(y_str(", ", 2)), F.v5304, yr1041_T(y_str(", 0)", 4)))));
((*(yR104 *)rt_nil_check(F.p2494))).f_dname = INT64_C(0);
yr2411_StoreBounds(F.p2494, y_str("yfix", 4));
((*(yR104 *)rt_nil_check(F.p2494))).f_abstract = 0;
return;
}
if ((((*(yR104 *)rt_nil_check(F.p2494))).f_kind == v794)) {
yr2371_CheckType(((*(yR99 *)rt_nil_check(F.p2495))).f_line, F.p2494, F.v5306);
yr2371_CheckType(((*(yR99 *)rt_nil_check(F.p2495))).f_line, F.p2494, F.v5308);
((*(yR104 *)rt_nil_check(F.p2494))).f_lo = F.v5298;
((*(yR104 *)rt_nil_check(F.p2494))).f_hi = F.v5300;
((*(yR104 *)rt_nil_check(F.p2494))).f_dname = INT64_C(0);
if ((!((yr2405_IsLiteralNode(((*(yR99 *)rt_nil_check(F.p2495))).f_a) && yr2405_IsLiteralNode(((*(yR99 *)rt_nil_check(F.p2495))).f_b))))) {
yr2411_StoreBounds(F.p2494, y_str("double", 6));
}
if ((((*(yR99 *)rt_nil_check(F.p2495))).f_d == ((void *)0))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2495))).f_line, y_str("FLOATING needs PRECISION (VI.A.1.c)", 35));
}
yr2631_Manifest(((*(yR99 *)rt_nil_check(F.p2495))).f_d, &F.v5310, &F.v5314);
if ((!F.v5310)) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2495))).f_line, y_str("PRECISION is a manifest constant", 32));
}
if ((((F.v5314 < INT64_C(1))) || ((F.v5314 > INT64_C(15))))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2495))).f_line, y_str("PRECISION beyond this implementation: its floating point holds 15 decimal digits (Appendix C)", 93));
}
yr1006_SB();
yr1030_SI(F.v5314);
((*(yR104 *)rt_nil_check(F.p2494))).f_prec = yr1036_SE();
((*(yR104 *)rt_nil_check(F.p2494))).f_abstract = 0;
return;
}
if ((!yr2289_IsDiscrete(F.p2494))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2495))).f_line, y_str("only a scalar or integer representation takes a range", 53));
}
if ((((!(((*(yR99 *)rt_nil_check(F.p2495))).f_c == ((void *)0)))) || ((!(((*(yR99 *)rt_nil_check(F.p2495))).f_d == ((void *)0)))))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2495))).f_line, y_str("SCALE and PRECISION qualify numbers", 35));
}
yr2371_CheckType(((*(yR99 *)rt_nil_check(F.p2495))).f_line, F.p2494, F.v5306);
yr2371_CheckType(((*(yR99 *)rt_nil_check(F.p2495))).f_line, F.p2494, F.v5308);
((*(yR104 *)rt_nil_check(F.p2494))).f_lo = F.v5298;
((*(yR104 *)rt_nil_check(F.p2494))).f_hi = F.v5300;
yr2631_Manifest(((*(yR99 *)rt_nil_check(F.p2495))).f_a, &F.v5310, &((*(yR104 *)rt_nil_check(F.p2494))).f_mlo);
((*(yR104 *)rt_nil_check(F.p2494))).f_hasm = F.v5310;
yr2631_Manifest(((*(yR99 *)rt_nil_check(F.p2495))).f_b, &F.v5310, &((*(yR104 *)rt_nil_check(F.p2494))).f_mhi);
((*(yR104 *)rt_nil_check(F.p2494))).f_hasm = (((*(yR104 *)rt_nil_check(F.p2494))).f_hasm && F.v5310);
((*(yR104 *)rt_nil_check(F.p2494))).f_abstract = 0;
((*(yR104 *)rt_nil_check(F.p2494))).f_dname = INT64_C(0);
if ((!((*(yR104 *)rt_nil_check(F.p2494))).f_hasm)) {
yr2411_StoreBounds(F.p2494, y_str("rt_int", 6));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2500_DefineLits(void * a_p2501) {
struct yf2502 F;
memset((void *)&F, 0, sizeof F);
F.p2501 = a_p2501;
F.v5350 = ((*(yR104 *)rt_nil_check(F.p2501))).f_lits;
F.v5354 = INT64_C(0);
while ((!(F.v5350 == ((void *)0)))) {
if ((!(yr2172_Find(((*(yR99 *)rt_nil_check(F.v5350))).f_name) == ((void *)0)))) {
F.v5352 = yr2172_Find(((*(yR99 *)rt_nil_check(F.v5350))).f_name);
if ((((!(((*(yR119 *)rt_nil_check(F.v5352))).f_kind == v857))) && ((((*(yR119 *)rt_nil_check(F.v5352))).f_depth == v1239)))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.v5350))).f_line, ((*(yR99 *)rt_nil_check(F.v5350))).f_name, y_str(" is declared twice in this scope", 32));
}
}
F.v5352 = yr2142_NewSym(v857, ((*(yR99 *)rt_nil_check(F.v5350))).f_name);
((*(yR119 *)rt_nil_check(F.v5352))).f_rep = F.p2501;
((*(yR119 *)rt_nil_check(F.v5352))).f_mval = F.v5354;
((*(yR119 *)rt_nil_check(F.v5352))).f_hasmv = 1;
yr2237_Define(F.v5352, ((*(yR99 *)rt_nil_check(F.v5350))).f_line);
F.v5354 = rt_range(rt_add(F.v5354, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5350 = ((*(yR99 *)rt_nil_check(F.v5350))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2506_SetRange(void * a_p2507, rt_int a_p2508, rt_int a_p2509) {
struct yf2510 F;
memset((void *)&F, 0, sizeof F);
F.p2507 = a_p2507;
F.p2508 = a_p2508;
F.p2509 = a_p2509;
yr1006_SB();
yr1030_SI(F.p2508);
((*(yR104 *)rt_nil_check(F.p2507))).f_lo = yr1036_SE();
yr1006_SB();
yr1030_SI(F.p2509);
((*(yR104 *)rt_nil_check(F.p2507))).f_hi = yr1036_SE();
((*(yR104 *)rt_nil_check(F.p2507))).f_mlo = F.p2508;
((*(yR104 *)rt_nil_check(F.p2507))).f_mhi = F.p2509;
((*(yR104 *)rt_nil_check(F.p2507))).f_hasm = 1;
((*(yR104 *)rt_nil_check(F.p2507))).f_dname = INT64_C(0);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2514_NewTid(rt_int a_p2515) {
struct yf2516 F;
memset((void *)&F, 0, sizeof F);
F.p2515 = a_p2515;
F.v5369 = yr1161_NewSerial();
yr1006_SB();
if ((!(F.p2515 == INT64_C(0)))) {
yr1024_ST(F.p2515);
} else {
yr1017_SA(y_str("anonymous", 9));
}
yr1017_SA(y_str("#", 1));
yr1030_SI(F.v5369);
{ rt_int rv5373 = yr1036_SE();
return rv5373; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2520_MakeRep(void * a_p2521, rt_int a_p2522, rt_int a_p2523) {
struct yf2524 F;
memset((void *)&F, 0, sizeof F);
F.p2521 = a_p2521;
F.p2522 = a_p2522;
F.p2523 = a_p2523;
F.v5379 = yr2535_MakeRep1(F.p2521, F.p2522, F.p2523);
if ((!(((*(yR99 *)rt_nil_check(F.p2521))).f_text == INT64_C(0)))) {
F.v5381 = yr2270_Real(yr2184_Lookup(((*(yR99 *)rt_nil_check(F.p2521))).f_text, ((*(yR99 *)rt_nil_check(F.p2521))).f_line));
if (((!yr2528_Conforms(((*(yR119 *)rt_nil_check(F.v5381))).f_rep, F.v5379)) || ((((((*(yR99 *)rt_nil_check(F.p2521))).f_kind == v656)) && ((!(((*(yR104 *)rt_nil_check(F.v5379))).f_tid == ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5381))).f_rep))).f_tid))))))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2521))).f_line, ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5381))).f_rep))).f_tname, y_str(": the concrete type is not a representation of this type (rule 61, VII.G)", 73));
}
}
{ void * rv5384 = F.v5379;
return rv5384; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2528_Conforms(void * a_p2529, void * a_p2530) {
struct yf2531 F;
memset((void *)&F, 0, sizeof F);
F.p2529 = a_p2529;
F.p2530 = a_p2530;
if ((!(((*(yR104 *)rt_nil_check(F.p2529))).f_kind == ((*(yR104 *)rt_nil_check(F.p2530))).f_kind))) {
{ rt_int rv5401 = 0;
return rv5401; }
}
if ((((*(yR104 *)rt_nil_check(F.p2529))).f_kind == v809)) {
F.v5389 = ((*(yR104 *)rt_nil_check(F.p2529))).f_fields;
F.v5391 = ((*(yR104 *)rt_nil_check(F.p2530))).f_fields;
while ((((!(F.v5389 == ((void *)0)))) && ((!(F.v5391 == ((void *)0)))))) {
if (((((!(((*(yR109 *)rt_nil_check(F.v5389))).f_name == ((*(yR109 *)rt_nil_check(F.v5391))).f_name))) || ((!(((*(yR109 *)rt_nil_check(F.v5389))).f_isconst == ((*(yR109 *)rt_nil_check(F.v5391))).f_isconst)))) || ((!(((*(yR109 *)rt_nil_check(F.v5389))).f_variant == ((*(yR109 *)rt_nil_check(F.v5391))).f_variant))))) {
{ rt_int rv5403 = 0;
return rv5403; }
}
if ((!yr2356_SameType(((*(yR109 *)rt_nil_check(F.v5389))).f_rep, ((*(yR109 *)rt_nil_check(F.v5391))).f_rep))) {
{ rt_int rv5405 = 0;
return rv5405; }
}
F.v5389 = ((*(yR109 *)rt_nil_check(F.v5389))).f_next;
F.v5391 = ((*(yR109 *)rt_nil_check(F.v5391))).f_next;
}
{ rt_int rv5406 = (((F.v5389 == ((void *)0))) && ((F.v5391 == ((void *)0))));
return rv5406; }
}
if ((((*(yR104 *)rt_nil_check(F.p2529))).f_kind == v806)) {
if ((!(((*(yR104 *)rt_nil_check(F.p2529))).f_nidx == ((*(yR104 *)rt_nil_check(F.p2530))).f_nidx))) {
{ rt_int rv5408 = 0;
return rv5408; }
}
F.v5393 = ((*(yR104 *)rt_nil_check(F.p2529))).f_idx;
F.v5395 = ((*(yR104 *)rt_nil_check(F.p2530))).f_idx;
while ((!(F.v5393 == ((void *)0)))) {
if ((!yr2398_Identical(F.v5393, F.v5395))) {
{ rt_int rv5410 = 0;
return rv5410; }
}
F.v5393 = ((*(yR104 *)rt_nil_check(F.v5393))).f_link;
F.v5395 = ((*(yR104 *)rt_nil_check(F.v5395))).f_link;
}
{ rt_int rv5411 = yr2356_SameType(((*(yR104 *)rt_nil_check(F.p2529))).f_elem, ((*(yR104 *)rt_nil_check(F.p2530))).f_elem);
return rv5411; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2529))).f_kind == v800)) || ((((*(yR104 *)rt_nil_check(F.p2529))).f_kind == v803)))) {
if ((!(((*(yR104 *)rt_nil_check(F.p2529))).f_nlits == ((*(yR104 *)rt_nil_check(F.p2530))).f_nlits))) {
{ rt_int rv5413 = 0;
return rv5413; }
}
F.v5397 = ((*(yR104 *)rt_nil_check(F.p2529))).f_lits;
F.v5399 = ((*(yR104 *)rt_nil_check(F.p2530))).f_lits;
while ((((!(F.v5397 == ((void *)0)))) && ((!(F.v5399 == ((void *)0)))))) {
if ((((!(((*(yR99 *)rt_nil_check(F.v5397))).f_name == ((*(yR99 *)rt_nil_check(F.v5399))).f_name))) || (!yr1068_TEq(((*(yR99 *)rt_nil_check(F.v5397))).f_text, ((*(yR99 *)rt_nil_check(F.v5399))).f_text)))) {
{ rt_int rv5415 = 0;
return rv5415; }
}
F.v5397 = ((*(yR99 *)rt_nil_check(F.v5397))).f_next;
F.v5399 = ((*(yR99 *)rt_nil_check(F.v5399))).f_next;
}
{ rt_int rv5417 = 1;
return rv5417; }
}
if (((((((*(yR104 *)rt_nil_check(F.p2529))).f_kind == v818)) || ((((*(yR104 *)rt_nil_check(F.p2529))).f_kind == v815))) || ((((*(yR104 *)rt_nil_check(F.p2529))).f_kind == v812)))) {
if ((((((*(yR104 *)rt_nil_check(F.p2529))).f_elem == ((void *)0))) || ((((*(yR104 *)rt_nil_check(F.p2530))).f_elem == ((void *)0))))) {
{ rt_int rv5419 = 1;
return rv5419; }
}
{ rt_int rv5420 = yr2356_SameType(((*(yR104 *)rt_nil_check(F.p2529))).f_elem, ((*(yR104 *)rt_nil_check(F.p2530))).f_elem);
return rv5420; }
}
{ rt_int rv5422 = 1;
return rv5422; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2535_MakeRep1(void * a_p2536, rt_int a_p2537, rt_int a_p2538) {
struct yf2539 F;
memset((void *)&F, 0, sizeof F);
F.p2536 = a_p2536;
F.p2537 = a_p2537;
F.p2538 = a_p2538;
F.v5438 = ((*(yR99 *)rt_nil_check(F.p2536))).f_kind;
F.v5442 = INT64_C(0);
F.v5444 = F.p2537;
if ((!(((*(yR99 *)rt_nil_check(F.p2536))).f_text == INT64_C(0)))) {
F.v5436 = yr2270_Real(yr2184_Lookup(((*(yR99 *)rt_nil_check(F.p2536))).f_text, ((*(yR99 *)rt_nil_check(F.p2536))).f_line));
if ((((!(((*(yR119 *)rt_nil_check(F.v5436))).f_kind == v854))) && ((!(((*(yR119 *)rt_nil_check(F.v5436))).f_kind == v851))))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2536))).f_line, ((*(yR99 *)rt_nil_check(F.p2536))).f_text, y_str(" is not a type", 14));
}
F.v5442 = ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5436))).f_rep))).f_tid;
F.v5444 = ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5436))).f_rep))).f_tname;
}
if ((F.v5438 == v656)) {
F.v5436 = yr2270_Real(yr2184_Lookup(((*(yR99 *)rt_nil_check(F.p2536))).f_name, ((*(yR99 *)rt_nil_check(F.p2536))).f_line));
if ((((!(((*(yR119 *)rt_nil_check(F.v5436))).f_kind == v854))) && ((!(((*(yR119 *)rt_nil_check(F.v5436))).f_kind == v851))))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2536))).f_line, ((*(yR99 *)rt_nil_check(F.p2536))).f_name, y_str(" is not a representation", 24));
}
F.v5428 = ((*(yR119 *)rt_nil_check(F.v5436))).f_rep;
if ((!(((*(yR99 *)rt_nil_check(F.p2536))).f_a == ((void *)0)))) {
F.v5428 = yr2283_CopyRep(F.v5428);
yr2493_Qualify(F.v5428, ((*(yR99 *)rt_nil_check(F.p2536))).f_a);
}
{ void * rv5449 = F.v5428;
return rv5449; }
}
if ((F.v5442 == INT64_C(0))) {
F.v5442 = yr2514_NewTid(F.p2537);
if ((F.v5444 == INT64_C(0))) {
F.v5444 = F.v5442;
}
}
if ((F.v5438 == v659)) {
F.v5428 = yr2276_NewRep(v800, F.v5442);
((*(yR104 *)rt_nil_check(F.v5428))).f_tname = F.v5444;
((*(yR104 *)rt_nil_check(F.v5428))).f_ordered = (((*(yR99 *)rt_nil_check(F.p2536))).f_flag == INT64_C(1));
((*(yR104 *)rt_nil_check(F.v5428))).f_lits = ((*(yR99 *)rt_nil_check(F.p2536))).f_a;
((*(yR104 *)rt_nil_check(F.v5428))).f_nlits = yr1843_Count(((*(yR99 *)rt_nil_check(F.p2536))).f_a);
yr2506_SetRange(F.v5428, INT64_C(0), rt_range(rt_sub(((*(yR104 *)rt_nil_check(F.v5428))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr2500_DefineLits(F.v5428);
if ((!(((*(yR99 *)rt_nil_check(F.p2536))).f_b == ((void *)0)))) {
yr2493_Qualify(F.v5428, ((*(yR99 *)rt_nil_check(F.p2536))).f_b);
}
{ void * rv5456 = F.v5428;
return rv5456; }
}
if ((F.v5438 == v662)) {
F.v5428 = yr2276_NewRep(v803, F.v5442);
((*(yR104 *)rt_nil_check(F.v5428))).f_tname = F.v5444;
((*(yR104 *)rt_nil_check(F.v5428))).f_ordered = 1;
((*(yR104 *)rt_nil_check(F.v5428))).f_lits = ((*(yR99 *)rt_nil_check(F.p2536))).f_a;
((*(yR104 *)rt_nil_check(F.v5428))).f_nlits = yr1843_Count(((*(yR99 *)rt_nil_check(F.p2536))).f_a);
if ((((*(yR104 *)rt_nil_check(F.v5428))).f_nlits > INT64_C(256))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2536))).f_line, y_str("this implementation takes alphabets of up to 256 characters", 59));
}
yr2506_SetRange(F.v5428, INT64_C(0), rt_range(rt_sub(((*(yR104 *)rt_nil_check(F.v5428))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((!(((*(yR99 *)rt_nil_check(F.p2536))).f_b == ((void *)0)))) {
yr2493_Qualify(F.v5428, ((*(yR99 *)rt_nil_check(F.p2536))).f_b);
}
{ void * rv5463 = F.v5428;
return rv5463; }
}
if ((F.v5438 == v665)) {
F.v5428 = yr2276_NewRep(v806, F.v5442);
((*(yR104 *)rt_nil_check(F.v5428))).f_tname = F.v5444;
F.v5440 = ((*(yR99 *)rt_nil_check(F.p2536))).f_a;
F.v5434 = ((void *)0);
while ((!(F.v5440 == ((void *)0)))) {
F.v5432 = yr2283_CopyRep(yr2520_MakeRep(F.v5440, INT64_C(0), 0));
if ((!yr2289_IsDiscrete(F.v5432))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.v5440))).f_line, y_str("an index is an integer or scalar representation", 47));
}
yr2379_CheckRepresented(F.v5432, ((*(yR99 *)rt_nil_check(F.v5440))).f_line);
((*(yR104 *)rt_nil_check(F.v5432))).f_link = ((void *)0);
if ((F.v5434 == ((void *)0))) {
((*(yR104 *)rt_nil_check(F.v5428))).f_idx = F.v5432;
} else {
((*(yR104 *)rt_nil_check(F.v5434))).f_link = F.v5432;
}
F.v5434 = F.v5432;
((*(yR104 *)rt_nil_check(F.v5428))).f_nidx = rt_range(rt_add(((*(yR104 *)rt_nil_check(F.v5428))).f_nidx, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5440 = ((*(yR99 *)rt_nil_check(F.v5440))).f_next;
}
if ((((*(yR104 *)rt_nil_check(F.v5428))).f_nidx > INT64_C(4))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2536))).f_line, y_str("this implementation takes arrays of up to 4 dimensions", 54));
}
((*(yR104 *)rt_nil_check(F.v5428))).f_elem = yr2520_MakeRep(((*(yR99 *)rt_nil_check(F.p2536))).f_b, INT64_C(0), F.p2538);
if ((!F.p2538)) {
yr2379_CheckRepresented(((*(yR104 *)rt_nil_check(F.v5428))).f_elem, ((*(yR99 *)rt_nil_check(F.p2536))).f_line);
yr2555_BuildArrayDesc(F.v5428);
} else {
((*(yR104 *)rt_nil_check(F.v5428))).f_abstract = ((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.v5428))).f_elem))).f_abstract;
if ((!((*(yR104 *)rt_nil_check(F.v5428))).f_abstract)) {
yr2555_BuildArrayDesc(F.v5428);
}
}
((*(yR104 *)rt_nil_check(F.v5428))).f_deep = 1;
{ void * rv5473 = F.v5428;
return rv5473; }
}
if ((F.v5438 == v668)) {
F.v5428 = yr2276_NewRep(v809, F.v5442);
((*(yR104 *)rt_nil_check(F.v5428))).f_tname = F.v5444;
yr2585_MakeRecord(F.v5428, F.p2536, F.p2538);
{ void * rv5474 = F.v5428;
return rv5474; }
}
if (((((F.v5438 == v674)) || ((F.v5438 == v671))) || ((F.v5438 == v677)))) {
if ((F.v5438 == v674)) {
F.v5428 = yr2276_NewRep(v812, F.v5442);
((*(yR104 *)rt_nil_check(F.v5428))).f_tname = F.v5444;
if (((((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2536))).f_a))).f_kind == v656)) && ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2536))).f_a))).f_a == ((void *)0)))) && ((yr2172_Find(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2536))).f_a))).f_name) == ((void *)0))))) {
((*(yR104 *)rt_nil_check(F.v5428))).f_forward = ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2536))).f_a))).f_name;
((*(yR104 *)rt_nil_check(F.v5428))).f_fwdscope = v1239;
F.v5440 = yr1828_NewNode(v653, ((*(yR99 *)rt_nil_check(F.p2536))).f_line);
((*(yR99 *)rt_nil_check(F.v5440))).f_rep = F.v5428;
((*(yR99 *)rt_nil_check(F.v5440))).f_next = v1330;
v1330 = F.v5440;
{ void * rv5475 = F.v5428;
return rv5475; }
}
((*(yR104 *)rt_nil_check(F.v5428))).f_elem = yr2520_MakeRep(((*(yR99 *)rt_nil_check(F.p2536))).f_a, INT64_C(0), 0);
{ void * rv5478 = F.v5428;
return rv5478; }
}
if ((F.v5438 == v671)) {
F.v5428 = yr2276_NewRep(v815, F.v5442);
((*(yR104 *)rt_nil_check(F.v5428))).f_tname = F.v5444;
((*(yR104 *)rt_nil_check(F.v5428))).f_elem = yr2520_MakeRep(((*(yR99 *)rt_nil_check(F.p2536))).f_a, INT64_C(0), F.p2538);
{ void * rv5480 = F.v5428;
return rv5480; }
}
F.v5428 = yr2276_NewRep(v818, F.v5442);
((*(yR104 *)rt_nil_check(F.v5428))).f_tname = F.v5444;
((*(yR104 *)rt_nil_check(F.v5428))).f_elem = yr2520_MakeRep(((*(yR99 *)rt_nil_check(F.p2536))).f_a, INT64_C(0), 0);
if ((!yr2289_IsDiscrete(((*(yR104 *)rt_nil_check(F.v5428))).f_elem))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2536))).f_line, y_str("a set is of an integer or scalar representation", 47));
}
yr2379_CheckRepresented(((*(yR104 *)rt_nil_check(F.v5428))).f_elem, ((*(yR99 *)rt_nil_check(F.p2536))).f_line);
{ void * rv5484 = F.v5428;
return rv5484; }
}
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2536))).f_line, y_str("this representation is not translated", 37));
{ void * rv5486 = ((void *)0);
return rv5486; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2543_ResolvePending(rt_int a_p2544, void * a_p2545) {
struct yf2546 F;
memset((void *)&F, 0, sizeof F);
F.p2544 = a_p2544;
F.p2545 = a_p2545;
F.v5491 = v1330;
F.v5493 = ((void *)0);
while ((!(F.v5491 == ((void *)0)))) {
if ((((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v5491))).f_rep))).f_forward == F.p2544)) {
((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v5491))).f_rep))).f_elem = F.p2545;
((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v5491))).f_rep))).f_forward = INT64_C(0);
if ((F.v5493 == ((void *)0))) {
v1330 = ((*(yR99 *)rt_nil_check(F.v5491))).f_next;
} else {
((*(yR99 *)rt_nil_check(F.v5493))).f_next = ((*(yR99 *)rt_nil_check(F.v5491))).f_next;
}
} else {
F.v5493 = F.v5491;
}
F.v5491 = ((*(yR99 *)rt_nil_check(F.v5491))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2550_CheckPending(void) {
struct yf2551 F;
memset((void *)&F, 0, sizeof F);
F.v5497 = v1330;
while ((!(F.v5497 == ((void *)0)))) {
if ((((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v5497))).f_rep))).f_fwdscope >= v1239)) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.v5497))).f_line, ((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v5497))).f_rep))).f_forward, y_str(" is named by a pointer but not declared", 39));
}
F.v5497 = ((*(yR99 *)rt_nil_check(F.v5497))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2555_BuildArrayDesc(void * a_p2556) {
struct yf2557 F;
memset((void *)&F, 0, sizeof F);
F.p2556 = a_p2556;
yr2350_NewDesc(F.p2556);
yr1006_SB();
yr1017_SA(y_str("{ rt_int lo[", 12));
yr1030_SI(((*(yR104 *)rt_nil_check(F.p2556))).f_nidx);
yr1017_SA(y_str("] = {", 5));
F.v5502 = ((*(yR104 *)rt_nil_check(F.p2556))).f_idx;
F.v5506 = 1;
while ((!(F.v5502 == ((void *)0)))) {
if ((!F.v5506)) {
yr1017_SA(y_str(", ", 2));
}
F.v5506 = 0;
yr1024_ST(yr2419_LoText(F.v5502));
F.v5502 = ((*(yR104 *)rt_nil_check(F.v5502))).f_link;
}
yr1017_SA(y_str("}, hi[", 6));
yr1030_SI(((*(yR104 *)rt_nil_check(F.p2556))).f_nidx);
yr1017_SA(y_str("] = {", 5));
F.v5502 = ((*(yR104 *)rt_nil_check(F.p2556))).f_idx;
F.v5506 = 1;
while ((!(F.v5502 == ((void *)0)))) {
if ((!F.v5506)) {
yr1017_SA(y_str(", ", 2));
}
F.v5506 = 0;
yr1024_ST(yr2425_HiText(F.v5502));
F.v5502 = ((*(yR104 *)rt_nil_check(F.v5502))).f_link;
}
yr1017_SA(y_str("}; y_desc_array(", 16));
yr1024_ST(yr2344_DescOf(F.p2556));
yr1017_SA(y_str(", ", 2));
yr1030_SI(((*(yR104 *)rt_nil_check(F.p2556))).f_nidx);
yr1017_SA(y_str(", lo, hi, ", 10));
yr1024_ST(yr2344_DescOf(((*(yR104 *)rt_nil_check(F.p2556))).f_elem));
yr1017_SA(y_str("); }", 4));
F.v5504 = yr1036_SE();
yr1112_Emit(F.v5504);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2561_AddField(void * a_p2562, void * * a_p2563, rt_int a_p2564, void * a_p2565, rt_int a_p2566, rt_int a_p2567, void * a_p2568, rt_int a_p2569) {
struct yf2570 F;
memset((void *)&F, 0, sizeof F);
F.p2562 = a_p2562;
F.p2563 = a_p2563;
F.p2564 = a_p2564;
F.p2565 = a_p2565;
F.p2566 = a_p2566;
F.p2567 = a_p2567;
F.p2568 = a_p2568;
F.p2569 = a_p2569;
F.v5531 = ((*(yR104 *)rt_nil_check(F.p2562))).f_fields;
while ((!(F.v5531 == ((void *)0)))) {
if ((((*(yR109 *)rt_nil_check(F.v5531))).f_name == F.p2564)) {
yr1152_FailN(F.p2569, F.p2564, y_str(" is a component twice", 21));
}
F.v5531 = ((*(yR109 *)rt_nil_check(F.v5531))).f_next;
}
({ F.v5531 = rt_alloc(sizeof(yR109)); });
(*(yR109 *)rt_nil_check(F.v5531)) = ((yR109){ .f_name = F.p2564, .f_rep = F.p2565, .f_isconst = F.p2566, .f_variant = F.p2567, .f_labels = F.p2568, .f_next = ((void *)0) });
if (((*F.p2563) == ((void *)0))) {
((*(yR104 *)rt_nil_check(F.p2562))).f_fields = F.v5531;
} else {
((*(yR109 *)rt_nil_check((*F.p2563)))).f_next = F.v5531;
}
(*F.p2563) = F.v5531;
if (yr2313_Deep(F.p2565)) {
((*(yR104 *)rt_nil_check(F.p2562))).f_deep = 1;
}
if (((*(yR104 *)rt_nil_check(F.p2565))).f_abstract) {
((*(yR104 *)rt_nil_check(F.p2562))).f_abstract = 1;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2574_AddFields(void * a_p2575, void * * a_p2576, void * a_p2577, rt_int a_p2578, void * a_p2579, rt_int a_p2580) {
struct yf2581 F;
memset((void *)&F, 0, sizeof F);
F.p2575 = a_p2575;
F.p2576 = a_p2576;
F.p2577 = a_p2577;
F.p2578 = a_p2578;
F.p2579 = a_p2579;
F.p2580 = a_p2580;
F.v5543 = F.p2577;
F.v5545 = F.p2577;
while ((!(F.v5543 == ((void *)0)))) {
F.v5547 = yr2520_MakeRep(((*(yR99 *)rt_nil_check(F.v5543))).f_b, INT64_C(0), F.p2580);
if ((!F.p2580)) {
yr2379_CheckRepresented(F.v5547, ((*(yR99 *)rt_nil_check(F.v5543))).f_line);
}
F.v5545 = ((*(yR99 *)rt_nil_check(F.v5543))).f_a;
while ((!(F.v5545 == ((void *)0)))) {
yr2561_AddField(F.p2575, &(*F.p2576), ((*(yR99 *)rt_nil_check(F.v5545))).f_name, F.v5547, (((*(yR99 *)rt_nil_check(F.v5543))).f_ival == v254), F.p2578, F.p2579, ((*(yR99 *)rt_nil_check(F.v5545))).f_line);
F.v5545 = ((*(yR99 *)rt_nil_check(F.v5545))).f_next;
}
F.v5543 = ((*(yR99 *)rt_nil_check(F.v5543))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2585_MakeRecord(void * a_p2586, void * a_p2587, rt_int a_p2588) {
struct yf2589 F;
memset((void *)&F, 0, sizeof F);
F.p2586 = a_p2586;
F.p2587 = a_p2587;
F.p2588 = a_p2588;
F.v5554 = ((void *)0);
F.v5562 = INT64_C(0);
F.v5569 = INT64_C(0);
yr2574_AddFields(F.p2586, &F.v5554, ((*(yR99 *)rt_nil_check(F.p2587))).f_a, INT64_C(0), ((void *)0), F.p2588);
if ((!(((*(yR99 *)rt_nil_check(F.p2587))).f_b == ((void *)0)))) {
F.v5556 = ((*(yR99 *)rt_nil_check(F.p2587))).f_b;
F.v5560 = yr2520_MakeRep(((*(yR99 *)rt_nil_check(F.v5556))).f_b, INT64_C(0), 0);
if ((!yr2289_IsDiscrete(F.v5560))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.v5556))).f_line, y_str("the case-selection component is integer or scalar", 49));
}
yr2561_AddField(F.p2586, &F.v5554, ((*(yR99 *)rt_nil_check(F.v5556))).f_name, F.v5560, 1, INT64_C(0), ((void *)0), ((*(yR99 *)rt_nil_check(F.v5556))).f_line);
((*(yR104 *)rt_nil_check(F.p2586))).f_selector = F.v5554;
F.v5558 = ((*(yR99 *)rt_nil_check(F.v5556))).f_a;
while ((!(F.v5558 == ((void *)0)))) {
F.v5562 = rt_range(rt_add(F.v5562, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr2574_AddFields(F.p2586, &F.v5554, ((*(yR99 *)rt_nil_check(F.v5558))).f_b, F.v5562, ((*(yR99 *)rt_nil_check(F.v5558))).f_a, F.p2588);
F.v5558 = ((*(yR99 *)rt_nil_check(F.v5558))).f_next;
}
}
if ((F.p2588 && ((*(yR104 *)rt_nil_check(F.p2586))).f_abstract)) {
return;
}
((*(yR104 *)rt_nil_check(F.p2586))).f_abstract = 0;
((*(yR104 *)rt_nil_check(F.p2586))).f_cname = yr1166_Fresh(y_str("yR", 2));
yr1006_SB();
yr1017_SA(y_str("typedef struct ", 15));
yr1024_ST(((*(yR104 *)rt_nil_check(F.p2586))).f_cname);
yr1017_SA(y_str(" ", 1));
yr1024_ST(((*(yR104 *)rt_nil_check(F.p2586))).f_cname);
yr1017_SA(y_str(";", 1));
F.v5567 = yr1036_SE();
yr1090_Put(&v962, F.v5567);
yr1006_SB();
yr1017_SA(y_str("struct ", 7));
yr1024_ST(((*(yR104 *)rt_nil_check(F.p2586))).f_cname);
yr1017_SA(y_str(" {", 2));
F.v5565 = ((*(yR104 *)rt_nil_check(F.p2586))).f_fields;
while ((!(F.v5565 == ((void *)0)))) {
yr1017_SA(y_str(" ", 1));
yr1024_ST(yr2338_CType(((*(yR109 *)rt_nil_check(F.v5565))).f_rep));
yr1017_SA(y_str(" f_", 3));
yr1024_ST(((*(yR109 *)rt_nil_check(F.v5565))).f_name);
yr1017_SA(y_str(";", 1));
F.v5569 = rt_range(rt_add(F.v5569, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5565 = ((*(yR109 *)rt_nil_check(F.v5565))).f_next;
}
if ((F.v5569 == INT64_C(0))) {
yr1017_SA(y_str(" int empty_;", 12));
}
yr1017_SA(y_str(" };", 3));
F.v5567 = yr1036_SE();
yr1090_Put(&v964, F.v5567);
yr2350_NewDesc(F.p2586);
yr1006_SB();
yr1017_SA(y_str("{ static const size_t o[] = {", 29));
F.v5565 = ((*(yR104 *)rt_nil_check(F.p2586))).f_fields;
while ((!(F.v5565 == ((void *)0)))) {
yr1017_SA(y_str("offsetof(", 9));
yr1024_ST(((*(yR104 *)rt_nil_check(F.p2586))).f_cname);
yr1017_SA(y_str(", f_", 4));
yr1024_ST(((*(yR109 *)rt_nil_check(F.v5565))).f_name);
yr1017_SA(y_str("), ", 3));
F.v5565 = ((*(yR109 *)rt_nil_check(F.v5565))).f_next;
}
yr1017_SA(y_str("0}; const ydesc **f = rt_alloc(", 31));
yr1030_SI(rt_range(rt_add(F.v5569, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1017_SA(y_str(" * sizeof *f);", 14));
F.v5562 = INT64_C(0);
F.v5565 = ((*(yR104 *)rt_nil_check(F.p2586))).f_fields;
while ((!(F.v5565 == ((void *)0)))) {
yr1017_SA(y_str(" f[", 3));
yr1030_SI(F.v5562);
yr1017_SA(y_str("] = ", 4));
yr1024_ST(yr2344_DescOf(((*(yR109 *)rt_nil_check(F.v5565))).f_rep));
yr1017_SA(y_str(";", 1));
F.v5562 = rt_range(rt_add(F.v5562, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5565 = ((*(yR109 *)rt_nil_check(F.v5565))).f_next;
}
yr1017_SA(y_str(" y_desc_record(", 15));
yr1024_ST(yr2344_DescOf(F.p2586));
yr1017_SA(y_str(", sizeof(", 9));
yr1024_ST(((*(yR104 *)rt_nil_check(F.p2586))).f_cname);
yr1017_SA(y_str("), ", 3));
yr1030_SI(F.v5569);
yr1017_SA(y_str(", o, (const ydesc *const *)f); }", 32));
F.v5567 = yr1036_SE();
yr1112_Emit(F.v5567);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2593_FindField(void * a_p2594, rt_int a_p2595) {
struct yf2596 F;
memset((void *)&F, 0, sizeof F);
F.p2594 = a_p2594;
F.p2595 = a_p2595;
F.v5616 = ((*(yR104 *)rt_nil_check(F.p2594))).f_fields;
while ((!(F.v5616 == ((void *)0)))) {
if ((((*(yR109 *)rt_nil_check(F.v5616))).f_name == F.p2595)) {
{ void * rv5617 = F.v5616;
return rv5617; }
}
F.v5616 = ((*(yR109 *)rt_nil_check(F.v5616))).f_next;
}
{ void * rv5618 = ((void *)0);
return rv5618; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2600_CharOrd(void * a_p2601, rt_int a_p2602) {
struct yf2603 F;
memset((void *)&F, 0, sizeof F);
F.p2601 = a_p2601;
F.p2602 = a_p2602;
if ((((*(yR104 *)rt_nil_check(F.p2601))).f_tid == ((*(yR104 *)rt_nil_check(v1312))).f_tid)) {
if ((((rt_int *)(v904).p)[y_ix1(v904, F.p2602)] == INT64_C(1))) {
{ rt_int rv5634 = ((rt_int *)(v949).p)[y_ix1(v949, yr1083_TChar(F.p2602, INT64_C(1)))];
return rv5634; }
}
F.v5625 = INT64_C(0);
F.v5629 = INT64_C(1);
F.lo5640 = INT64_C(1);
F.hi5641 = ((rt_int *)(v904).p)[y_ix1(v904, v1440)];
{ rt_int hi5645 = F.hi5641;
for (rt_int i5644 = F.lo5640; i5644 <= hi5645; i5644++) { F.c_5643 = i5644;
if ((yr1083_TChar(v1440, rt_range(F.c_5643, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 32)) {
F.v5631 = yr1048_Intern(rt_range(rt_add(((rt_int *)(v902).p)[y_ix1(v902, v1440)], (rt_sub(F.v5629, INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub(F.c_5643, F.v5629), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((F.v5631 == F.p2602)) {
if ((F.v5625 < INT64_C(32))) {
{ rt_int rv5652 = F.v5625;
return rv5652; }
}
if ((F.v5625 == INT64_C(32))) {
{ rt_int rv5655 = INT64_C(32);
return rv5655; }
}
if ((F.v5625 == INT64_C(33))) {
{ rt_int rv5658 = INT64_C(127);
return rv5658; }
}
if ((F.v5625 == INT64_C(34))) {
{ rt_int rv5661 = INT64_C(39);
return rv5661; }
}
{ rt_int rv5663 = INT64_C(34);
return rv5663; }
}
F.v5625 = rt_range(rt_add(F.v5625, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5629 = rt_range(rt_add(F.c_5643, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i5644 == hi5645) break;
}}
{ rt_int rv5669 = INT64_C(-1);
return rv5669; }
}
if ((!(((*(yR104 *)rt_nil_check(F.p2601))).f_kind == v803))) {
{ rt_int rv5671 = INT64_C(-1);
return rv5671; }
}
F.v5623 = ((*(yR104 *)rt_nil_check(F.p2601))).f_lits;
F.v5627 = INT64_C(0);
while ((!(F.v5623 == ((void *)0)))) {
if (yr1068_TEq(((*(yR99 *)rt_nil_check(F.v5623))).f_text, F.p2602)) {
{ rt_int rv5673 = F.v5627;
return rv5673; }
}
F.v5627 = rt_range(rt_add(F.v5627, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5623 = ((*(yR99 *)rt_nil_check(F.v5623))).f_next;
}
{ rt_int rv5677 = INT64_C(-1);
return rv5677; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2607_AlphabetFor(void * a_p2608, void * a_p2609) {
struct yf2610 F;
memset((void *)&F, 0, sizeof F);
F.p2608 = a_p2608;
F.p2609 = a_p2609;
F.v5686 = ((void *)0);
F.v5688 = INT64_C(0);
F.v5691 = INT64_C(0);
if ((!(((*(yR99 *)rt_nil_check(F.p2608))).f_d == ((void *)0)))) {
F.v5682 = yr2270_Real(yr2184_Lookup(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2608))).f_d))).f_name, ((*(yR99 *)rt_nil_check(F.p2608))).f_line));
if ((((((!(((*(yR119 *)rt_nil_check(F.v5682))).f_kind == v851))) && ((!(((*(yR119 *)rt_nil_check(F.v5682))).f_kind == v854))))) || ((!(((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5682))).f_rep))).f_kind == v803))))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2608))).f_line, ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2608))).f_d))).f_name, y_str(" is not an alphabet", 19));
}
{ void * rv5694 = ((*(yR119 *)rt_nil_check(F.v5682))).f_rep;
return rv5694; }
}
F.v5691 = INT64_C(1);
if ((((((*(yR99 *)rt_nil_check(F.p2608))).f_kind == v755)) || ((yr2600_CharOrd(v1312, ((*(yR99 *)rt_nil_check(F.p2608))).f_text) >= INT64_C(0))))) {
F.v5688 = INT64_C(1);
F.v5686 = v1312;
}
F.v5684 = v1443;
while ((!(F.v5684 == ((void *)0)))) {
F.v5682 = yr2172_Find(((*(yR99 *)rt_nil_check(F.v5684))).f_name);
if ((!(F.v5682 == ((void *)0)))) {
F.v5682 = yr2270_Real(F.v5682);
if ((((((((*(yR119 *)rt_nil_check(F.v5682))).f_kind == v851)) || ((((*(yR119 *)rt_nil_check(F.v5682))).f_kind == v854)))) && ((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5682))).f_rep))).f_tid == ((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v5684))).f_rep))).f_tid)))) {
F.v5691 = rt_range(rt_add(F.v5691, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((((*(yR99 *)rt_nil_check(F.p2608))).f_kind == v752)) && ((yr2600_CharOrd(((*(yR99 *)rt_nil_check(F.v5684))).f_rep, ((*(yR99 *)rt_nil_check(F.p2608))).f_text) >= INT64_C(0))))) {
F.v5688 = rt_range(rt_add(F.v5688, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5686 = ((*(yR99 *)rt_nil_check(F.v5684))).f_rep;
}
}
}
F.v5684 = ((*(yR99 *)rt_nil_check(F.v5684))).f_next;
}
if ((((((*(yR99 *)rt_nil_check(F.p2608))).f_kind == v755)) && ((F.v5691 > INT64_C(1))))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2608))).f_line, y_str("a string in a scope with two alphabets is qualified by its alphabet (VI.A.3)", 76));
}
if ((F.v5688 > INT64_C(1))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2608))).f_line, yr3102_Join(yr1041_T(y_str("'", 1)), ((*(yR99 *)rt_nil_check(F.p2608))).f_text, yr1041_T(y_str("'", 1))), y_str(" is a character of two alphabets here: qualify it (VI.A.3)", 58));
}
if ((F.v5686 == ((void *)0))) {
{ void * rv5709 = v1312;
return rv5709; }
}
{ void * rv5710 = F.v5686;
return rv5710; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2614_CharValue(void * a_p2615, rt_int a_p2616, rt_int a_p2617) {
struct yf2618 F;
memset((void *)&F, 0, sizeof F);
F.p2615 = a_p2615;
F.p2616 = a_p2616;
F.p2617 = a_p2617;
F.v5716 = yr2600_CharOrd(F.p2615, F.p2616);
if ((F.v5716 < INT64_C(0))) {
yr1006_SB();
yr1017_SA(y_str("'", 1));
yr1024_ST(F.p2616);
yr1017_SA(y_str("' is not a character of ", 24));
yr1024_ST(((*(yR104 *)rt_nil_check(F.p2615))).f_tname);
F.v5718 = yr1036_SE();
yr1137_Fail(F.p2617, F.v5718);
}
{ rt_int rv5722 = F.v5716;
return rv5722; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2622_StringCodes(void * a_p2623, rt_int a_p2624, rt_int * a_p2625, rt_int a_p2626) {
struct yf2627 F;
memset((void *)&F, 0, sizeof F);
F.p2623 = a_p2623;
F.p2624 = a_p2624;
F.p2625_o = a_p2625;
F.p2626 = a_p2626;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&F.yd_5742, 1, lo, hi, &y_d_int); }
y_init(&F.yd_5742, &F.v5744);
F.p2625 = INT64_C(0);
F.v5729 = INT64_C(1);
while ((F.v5729 <= ((rt_int *)(v904).p)[y_ix1(v904, F.p2624)])) {
F.v5746 = yr1083_TChar(F.p2624, F.v5729);
if ((F.v5746 == 39)) {
F.v5731 = rt_range(rt_add(F.v5729, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1083_TChar(F.p2624, F.v5731) == 39))) {
F.v5731 = rt_range(rt_add(F.v5731, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v5748 = yr1048_Intern(rt_range(rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.p2624)], F.v5729), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v5731, F.v5729)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v5733 = yr2614_CharValue(F.p2623, F.v5748, F.p2626);
F.v5729 = rt_range(rt_add(F.v5731, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v5748 = yr1048_Intern(rt_range(rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.p2624)], (rt_sub(F.v5729, INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), INT64_C(1));
F.v5733 = yr2614_CharValue(F.p2623, F.v5748, F.p2626);
F.v5729 = rt_range(rt_add(F.v5729, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.p2625 >= INT64_C(4096))) {
yr1144_FailS(F.p2626, y_str("string literal too long", 23));
}
F.p2625 = rt_range(rt_add(F.p2625, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(F.v5744).p)[y_ix1(F.v5744, F.p2625)] = F.v5733;
}
yr1006_SB();
yr1011_SC(34);
F.lo5777 = INT64_C(1);
F.hi5778 = F.p2625;
{ rt_int hi5782 = F.hi5778;
for (rt_int i5781 = F.lo5777; i5781 <= hi5782; i5781++) { F.c_5780 = i5781;
F.v5733 = ((rt_int *)(F.v5744).p)[y_ix1(F.v5744, F.c_5780)];
if ((((F.v5733 == INT64_C(34))) || ((F.v5733 == INT64_C(92))))) {
yr1011_SC(92);
yr1011_SC(((unsigned char *)(v960).p)[y_ix1(v960, F.v5733)]);
} else if (((((F.v5733 >= INT64_C(32))) && ((F.v5733 < INT64_C(127)))) && (((((!(F.v5733 == INT64_C(63)))) || ((F.c_5780 == INT64_C(1)))) || ((!(((rt_int *)(F.v5744).p)[y_ix1(F.v5744, rt_sub(F.c_5780, INT64_C(1)))] == INT64_C(63)))))))) {
yr1011_SC(((unsigned char *)(v960).p)[y_ix1(v960, F.v5733)]);
} else {
yr1011_SC(92);
yr1011_SC(((unsigned char *)(v960).p)[y_ix1(v960, rt_add(INT64_C(48), (rt_div(F.v5733, INT64_C(64)))))]);
yr1011_SC(((unsigned char *)(v960).p)[y_ix1(v960, rt_add(INT64_C(48), (rt_mod((rt_div(F.v5733, INT64_C(8))), INT64_C(8)))))]);
yr1011_SC(((unsigned char *)(v960).p)[y_ix1(v960, rt_add(INT64_C(48), (rt_mod(F.v5733, INT64_C(8)))))]);
}
if (i5781 == hi5782) break;
}}
yr1011_SC(34);
{ rt_int rv5809 = yr1036_SE();
(*F.p2625_o) = F.p2625;
return rv5809; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2631_Manifest(void * a_p2632, rt_int * a_p2633, rt_int * a_p2634) {
struct yf2635 F;
memset((void *)&F, 0, sizeof F);
F.p2632 = a_p2632;
F.p2633_o = a_p2633;
F.p2634_o = a_p2634;
F.p2633 = 0;
F.p2634 = INT64_C(0);
if ((((*(yR99 *)rt_nil_check(F.p2632))).f_kind == v743)) {
F.p2633 = 1;
F.p2634 = ((*(yR99 *)rt_nil_check(F.p2632))).f_ival;
(*F.p2633_o) = F.p2633;
(*F.p2634_o) = F.p2634;
return;
}
if ((((*(yR99 *)rt_nil_check(F.p2632))).f_kind == v752)) {
F.v5827 = yr2607_AlphabetFor(F.p2632, ((void *)0));
F.p2634 = yr2600_CharOrd(F.v5827, ((*(yR99 *)rt_nil_check(F.p2632))).f_text);
F.p2633 = (F.p2634 >= INT64_C(0));
(*F.p2633_o) = F.p2633;
(*F.p2634_o) = F.p2634;
return;
}
if ((((*(yR99 *)rt_nil_check(F.p2632))).f_kind == v761)) {
if ((!(((*(yR99 *)rt_nil_check(F.p2632))).f_d == ((void *)0)))) {
F.v5815 = yr2270_Real(yr2184_Lookup(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2632))).f_d))).f_name, ((*(yR99 *)rt_nil_check(F.p2632))).f_line));
F.v5815 = yr2230_FindLit(((*(yR99 *)rt_nil_check(F.p2632))).f_name, ((*(yR119 *)rt_nil_check(F.v5815))).f_rep);
} else {
F.v5815 = yr2172_Find(((*(yR99 *)rt_nil_check(F.p2632))).f_name);
}
if ((F.v5815 == ((void *)0))) {
(*F.p2633_o) = F.p2633;
(*F.p2634_o) = F.p2634;
return;
}
F.v5815 = yr2270_Real(F.v5815);
if ((((((((*(yR119 *)rt_nil_check(F.v5815))).f_kind == v857)) || ((((*(yR119 *)rt_nil_check(F.v5815))).f_kind == v848)))) && ((*(yR119 *)rt_nil_check(F.v5815))).f_hasmv)) {
F.p2633 = 1;
F.p2634 = ((*(yR119 *)rt_nil_check(F.v5815))).f_mval;
}
(*F.p2633_o) = F.p2633;
(*F.p2634_o) = F.p2634;
return;
}
if ((((*(yR99 *)rt_nil_check(F.p2632))).f_kind == v785)) {
yr2631_Manifest(((*(yR99 *)rt_nil_check(F.p2632))).f_a, &F.p2633, &F.p2634);
(*F.p2633_o) = F.p2633;
(*F.p2634_o) = F.p2634;
return;
}
if ((((*(yR99 *)rt_nil_check(F.p2632))).f_kind == v779)) {
yr2631_Manifest(((*(yR99 *)rt_nil_check(F.p2632))).f_a, &F.p2633, &F.p2634);
F.p2634 = rt_range(rt_neg(F.p2634), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2633_o) = F.p2633;
(*F.p2634_o) = F.p2634;
return;
}
if ((((*(yR99 *)rt_nil_check(F.p2632))).f_kind == v782)) {
yr2631_Manifest(((*(yR99 *)rt_nil_check(F.p2632))).f_a, &F.v5821, &F.v5817);
yr2631_Manifest(((*(yR99 *)rt_nil_check(F.p2632))).f_b, &F.v5823, &F.v5819);
if ((!((F.v5821 && F.v5823)))) {
(*F.p2633_o) = F.p2633;
(*F.p2634_o) = F.p2634;
return;
}
F.v5825 = ((*(yR99 *)rt_nil_check(F.p2632))).f_name;
F.p2633 = 1;
if ((F.v5825 == v557)) {
F.p2634 = rt_range(rt_add(F.v5817, F.v5819), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v5825 == v560)) {
F.p2634 = rt_range(rt_sub(F.v5817, F.v5819), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v5825 == v563)) {
F.p2634 = rt_range(rt_mul(F.v5817, F.v5819), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v5825 == v260)) && ((!(F.v5819 == INT64_C(0)))))) {
F.p2634 = rt_range(rt_div(F.v5817, F.v5819), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v5825 == v362)) && ((!(F.v5819 == INT64_C(0)))))) {
F.p2634 = rt_range(rt_mod(F.v5817, F.v5819), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v5825 == v221)) {
F.p2634 = rt_range(rt_mul(F.v5817, F.v5819), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v5825 == v383)) {
F.p2634 = rt_range(rt_sub((rt_add(F.v5817, F.v5819)), (rt_mul(F.v5817, F.v5819))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v5825 == v473)) {
F.p2634 = rt_range(rt_mod((rt_add(F.v5817, F.v5819)), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.p2633 = 0;
}
(*F.p2633_o) = F.p2633;
(*F.p2634_o) = F.p2634;
return;
}
if ((((*(yR99 *)rt_nil_check(F.p2632))).f_kind == v776)) {
yr2631_Manifest(((*(yR99 *)rt_nil_check(F.p2632))).f_a, &F.p2633, &F.p2634);
F.p2634 = rt_range(rt_sub(INT64_C(1), F.p2634), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2633_o) = F.p2633;
(*F.p2634_o) = F.p2634;
return;
}
if ((((*(yR99 *)rt_nil_check(F.p2632))).f_kind == v764)) {
yr2639_ManifestStd(F.p2632, &F.p2633, &F.p2634);
(*F.p2633_o) = F.p2633;
(*F.p2634_o) = F.p2634;
return;
}
(*F.p2633_o) = F.p2633;
(*F.p2634_o) = F.p2634;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2639_ManifestStd(void * a_p2640, rt_int * a_p2641, rt_int * a_p2642) {
struct yf2643 F;
memset((void *)&F, 0, sizeof F);
F.p2640 = a_p2640;
F.p2641_o = a_p2641;
F.p2642_o = a_p2642;
F.p2641 = 0;
F.p2642 = INT64_C(0);
F.v5857 = yr2172_Find(((*(yR99 *)rt_nil_check(F.p2640))).f_name);
if ((F.v5857 == ((void *)0))) {
(*F.p2641_o) = F.p2641;
(*F.p2642_o) = F.p2642;
return;
}
F.v5857 = yr2270_Real(F.v5857);
if ((!(((*(yR119 *)rt_nil_check(F.v5857))).f_kind == v875))) {
(*F.p2641_o) = F.p2641;
(*F.p2642_o) = F.p2642;
return;
}
F.v5859 = ((*(yR119 *)rt_nil_check(F.v5857))).f_mval;
if ((((((F.v5859 == v1338)) || ((F.v5859 == v1341))) || ((F.v5859 == v1344))) || ((F.v5859 == v1347)))) {
if ((!(yr1843_Count(((*(yR99 *)rt_nil_check(F.p2640))).f_a) == INT64_C(1)))) {
(*F.p2641_o) = F.p2641;
(*F.p2642_o) = F.p2642;
return;
}
yr2779_Expr(((*(yR99 *)rt_nil_check(F.p2640))).f_a, ((void *)0), &F.v5867, &F.v5869);
if ((!yr2289_IsDiscrete(F.v5869))) {
(*F.p2641_o) = F.p2641;
(*F.p2642_o) = F.p2642;
return;
}
if ((((F.v5859 == v1344)) || ((F.v5859 == v1347)))) {
if ((!(((*(yR104 *)rt_nil_check(F.v5869))).f_elem == ((void *)0)))) {
F.v5869 = ((*(yR104 *)rt_nil_check(F.v5869))).f_elem;
}
if ((!((*(yR104 *)rt_nil_check(F.v5869))).f_hasm)) {
(*F.p2641_o) = F.p2641;
(*F.p2642_o) = F.p2642;
return;
}
F.p2641 = 1;
if ((F.v5859 == v1344)) {
F.p2642 = ((*(yR104 *)rt_nil_check(F.v5869))).f_mlo;
} else {
F.p2642 = ((*(yR104 *)rt_nil_check(F.v5869))).f_mhi;
}
(*F.p2641_o) = F.p2641;
(*F.p2642_o) = F.p2642;
return;
}
yr2631_Manifest(((*(yR99 *)rt_nil_check(F.p2640))).f_a, &F.v5863, &F.p2642);
if ((!F.v5863)) {
(*F.p2641_o) = F.p2641;
(*F.p2642_o) = F.p2642;
return;
}
if ((F.v5859 == v1338)) {
F.p2642 = rt_range(rt_add(F.p2642, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.p2642 = rt_range(rt_sub(F.p2642, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((!(((*(yR104 *)rt_nil_check(F.v5869))).f_elem == ((void *)0)))) {
F.v5869 = ((*(yR104 *)rt_nil_check(F.v5869))).f_elem;
}
if ((((!(((*(yR104 *)rt_nil_check(F.v5869))).f_kind == v788))) && ((((F.p2642 < INT64_C(0))) || ((F.p2642 >= ((*(yR104 *)rt_nil_check(F.v5869))).f_nlits)))))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2640))).f_line, ((*(yR99 *)rt_nil_check(F.p2640))).f_name, y_str(" goes beyond the end of the enumeration (XI)", 44));
}
F.p2641 = 1;
(*F.p2641_o) = F.p2641;
(*F.p2642_o) = F.p2642;
return;
}
if ((((F.v5859 == v1332)) || ((F.v5859 == v1335)))) {
if ((!(yr1843_Count(((*(yR99 *)rt_nil_check(F.p2640))).f_a) == INT64_C(2)))) {
(*F.p2641_o) = F.p2641;
(*F.p2642_o) = F.p2642;
return;
}
yr2631_Manifest(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2640))).f_a))).f_next, &F.v5865, &F.v5861);
if ((!F.v5865)) {
(*F.p2641_o) = F.p2641;
(*F.p2642_o) = F.p2642;
return;
}
yr2779_Expr(((*(yR99 *)rt_nil_check(F.p2640))).f_a, ((void *)0), &F.v5867, &F.v5869);
if (((((!(((*(yR104 *)rt_nil_check(F.v5869))).f_kind == v806))) || ((F.v5861 < INT64_C(1)))) || ((F.v5861 > ((*(yR104 *)rt_nil_check(F.v5869))).f_nidx)))) {
(*F.p2641_o) = F.p2641;
(*F.p2642_o) = F.p2642;
return;
}
F.v5871 = ((*(yR104 *)rt_nil_check(F.v5869))).f_idx;
F.lo5888 = INT64_C(2);
F.hi5889 = F.v5861;
{ rt_int hi5893 = F.hi5889;
for (rt_int i5892 = F.lo5888; i5892 <= hi5893; i5892++) { F.c_5891 = i5892;
F.v5871 = ((*(yR104 *)rt_nil_check(F.v5871))).f_link;
if (i5892 == hi5893) break;
}}
if ((!((*(yR104 *)rt_nil_check(F.v5871))).f_hasm)) {
(*F.p2641_o) = F.p2641;
(*F.p2642_o) = F.p2642;
return;
}
F.p2641 = 1;
if ((F.v5859 == v1332)) {
F.p2642 = ((*(yR104 *)rt_nil_check(F.v5871))).f_mlo;
} else {
F.p2642 = ((*(yR104 *)rt_nil_check(F.v5871))).f_mhi;
}
(*F.p2641_o) = F.p2641;
(*F.p2642_o) = F.p2642;
return;
}
(*F.p2641_o) = F.p2641;
(*F.p2642_o) = F.p2642;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2647_NeedsConv(void * a_p2648, void * a_p2649) {
struct yf2650 F;
memset((void *)&F, 0, sizeof F);
F.p2648 = a_p2648;
F.p2649 = a_p2649;
if ((F.p2648 == F.p2649)) {
{ rt_int rv5899 = 0;
return rv5899; }
}
if (yr2289_IsDiscrete(F.p2648)) {
if ((((*(yR104 *)rt_nil_check(F.p2648))).f_lo == INT64_C(0))) {
{ rt_int rv5902 = 0;
return rv5902; }
}
{ rt_int rv5903 = (!((((((*(yR104 *)rt_nil_check(F.p2648))).f_hasm && ((*(yR104 *)rt_nil_check(F.p2649))).f_hasm) && ((((*(yR104 *)rt_nil_check(F.p2648))).f_mlo <= ((*(yR104 *)rt_nil_check(F.p2649))).f_mlo))) && ((((*(yR104 *)rt_nil_check(F.p2649))).f_mhi <= ((*(yR104 *)rt_nil_check(F.p2648))).f_mhi)))));
return rv5903; }
}
if ((((*(yR104 *)rt_nil_check(F.p2648))).f_kind == v794)) {
{ rt_int rv5905 = (!(((*(yR104 *)rt_nil_check(F.p2648))).f_lo == INT64_C(0)));
return rv5905; }
}
if ((((*(yR104 *)rt_nil_check(F.p2648))).f_kind == v791)) {
{ rt_int rv5907 = ((((!(((*(yR104 *)rt_nil_check(F.p2648))).f_lo == INT64_C(0)))) || ((!(((*(yR104 *)rt_nil_check(F.p2648))).f_fsn == ((*(yR104 *)rt_nil_check(F.p2649))).f_fsn)))) || ((!(((*(yR104 *)rt_nil_check(F.p2648))).f_fsd == ((*(yR104 *)rt_nil_check(F.p2649))).f_fsd))));
return rv5907; }
}
if ((((*(yR104 *)rt_nil_check(F.p2648))).f_kind == v809)) {
{ rt_int rv5908 = (((((*(yR104 *)rt_nil_check(F.p2649))).f_kind == v809)) && ((!(((*(yR104 *)rt_nil_check(F.p2648))).f_cname == ((*(yR104 *)rt_nil_check(F.p2649))).f_cname))));
return rv5908; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2648))).f_kind == v806)) || ((((*(yR104 *)rt_nil_check(F.p2648))).f_kind == v827)))) {
if ((((!(((*(yR104 *)rt_nil_check(F.p2649))).f_kind == v806))) && ((!(((*(yR104 *)rt_nil_check(F.p2649))).f_kind == v827))))) {
{ rt_int rv5910 = 0;
return rv5910; }
}
{ rt_int rv5911 = yr2647_NeedsConv(((*(yR104 *)rt_nil_check(F.p2648))).f_elem, ((*(yR104 *)rt_nil_check(F.p2649))).f_elem);
return rv5911; }
}
{ rt_int rv5913 = 0;
return rv5913; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2654_ConvertRecord(rt_int a_p2655, void * a_p2656, void * a_p2657) {
struct yf2658 F;
memset((void *)&F, 0, sizeof F);
F.p2655 = a_p2655;
F.p2656 = a_p2656;
F.p2657 = a_p2657;
F.v5919 = yr1166_Fresh(y_str("cs", 2));
F.v5921 = yr1166_Fresh(y_str("cd", 2));
yr1006_SB();
yr1017_SA(y_str("({ ", 3));
yr1024_ST(yr2338_CType(F.p2657));
yr1017_SA(y_str(" ", 1));
yr1024_ST(F.v5919);
yr1017_SA(y_str(" = ", 3));
yr1024_ST(F.p2655);
yr1017_SA(y_str("; ", 2));
yr1024_ST(yr2338_CType(F.p2656));
yr1017_SA(y_str(" ", 1));
yr1024_ST(F.v5921);
yr1017_SA(y_str("; memset(&", 10));
yr1024_ST(F.v5921);
yr1017_SA(y_str(", 0, sizeof ", 12));
yr1024_ST(F.v5921);
yr1017_SA(y_str(");", 2));
F.v5923 = ((*(yR104 *)rt_nil_check(F.p2656))).f_fields;
while ((!(F.v5923 == ((void *)0)))) {
F.v5925 = yr2593_FindField(F.p2657, ((*(yR109 *)rt_nil_check(F.v5923))).f_name);
if ((!(F.v5925 == ((void *)0)))) {
yr1017_SA(y_str(" ", 1));
if ((!(((*(yR109 *)rt_nil_check(F.v5925))).f_variant == INT64_C(0)))) {
yr1017_SA(y_str("if (", 4));
yr1024_ST(yr2788_VariantTest(F.p2657, F.v5925, yr3102_Join(yr1041_T(y_str("(&", 2)), F.v5919, yr1041_T(y_str(")", 1)))));
yr1017_SA(y_str(") ", 2));
}
yr1024_ST(F.v5921);
yr1017_SA(y_str(".f_", 3));
yr1024_ST(((*(yR109 *)rt_nil_check(F.v5923))).f_name);
yr1017_SA(y_str(" = ", 3));
yr1024_ST(yr2712_Convert(yr3102_Join(F.v5919, yr1041_T(y_str(".f_", 3)), ((*(yR109 *)rt_nil_check(F.v5923))).f_name), ((*(yR109 *)rt_nil_check(F.v5923))).f_rep, ((*(yR109 *)rt_nil_check(F.v5925))).f_rep));
yr1017_SA(y_str(";", 1));
}
F.v5923 = ((*(yR109 *)rt_nil_check(F.v5923))).f_next;
}
yr1017_SA(y_str(" ", 1));
yr1024_ST(F.v5921);
yr1017_SA(y_str("; })", 4));
{ rt_int rv5948 = yr1036_SE();
return rv5948; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2662_ConvertArray(rt_int a_p2663, void * a_p2664, void * a_p2665) {
struct yf2666 F;
memset((void *)&F, 0, sizeof F);
F.p2663 = a_p2663;
F.p2664 = a_p2664;
F.p2665 = a_p2665;
F.v5954 = yr1166_Fresh(y_str("cs", 2));
F.v5956 = yr1166_Fresh(y_str("cd", 2));
F.v5958 = yr1166_Fresh(y_str("ck", 2));
F.v5960 = yr1166_Fresh(y_str("cn", 2));
F.v5962 = yr2338_CType(((*(yR104 *)rt_nil_check(F.p2664))).f_elem);
F.v5964 = yr2338_CType(((*(yR104 *)rt_nil_check(F.p2665))).f_elem);
yr1006_SB();
yr1017_SA(y_str("({ yarr ", 8));
yr1024_ST(F.v5954);
yr1017_SA(y_str(" = ", 3));
yr1024_ST(F.p2663);
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.v5956);
yr1017_SA(y_str("; rt_int ", 9));
yr1024_ST(F.v5960);
yr1017_SA(y_str(" = y_count(", 11));
yr1024_ST(F.v5954);
yr1017_SA(y_str(", ", 2));
yr1030_SI(((*(yR104 *)rt_nil_check(F.p2665))).f_nidx);
yr1017_SA(y_str(");", 2));
if ((((*(yR104 *)rt_nil_check(F.p2664))).f_kind == v806)) {
yr1017_SA(y_str(" y_init(", 8));
yr1024_ST(yr2344_DescOf(F.p2664));
yr1017_SA(y_str(", &", 3));
yr1024_ST(F.v5956);
yr1017_SA(y_str("); if (y_count(", 15));
yr1024_ST(F.v5956);
yr1017_SA(y_str(", ", 2));
yr1030_SI(((*(yR104 *)rt_nil_check(F.p2664))).f_nidx);
yr1017_SA(y_str(") != ", 5));
yr1024_ST(F.v5960);
yr1017_SA(y_str(") rt_raise_msg(RT_X_RANGE, ", 27));
yr1011_SC(34);
yr1017_SA(y_str("array lengths differ", 20));
yr1011_SC(34);
yr1017_SA(y_str(");", 2));
} else {
yr1017_SA(y_str(" ", 1));
yr1024_ST(F.v5956);
yr1017_SA(y_str(" = y_like(", 10));
yr1024_ST(F.v5954);
yr1017_SA(y_str(", ", 2));
yr1030_SI(((*(yR104 *)rt_nil_check(F.p2665))).f_nidx);
yr1017_SA(y_str(", ", 2));
yr1024_ST(yr2344_DescOf(((*(yR104 *)rt_nil_check(F.p2664))).f_elem));
yr1017_SA(y_str(");", 2));
}
yr1017_SA(y_str(" for (rt_int ", 13));
yr1024_ST(F.v5958);
yr1017_SA(y_str(" = 0; ", 6));
yr1024_ST(F.v5958);
yr1017_SA(y_str(" < ", 3));
yr1024_ST(F.v5960);
yr1017_SA(y_str("; ", 2));
yr1024_ST(F.v5958);
yr1017_SA(y_str("++) ((", 6));
yr1024_ST(F.v5962);
yr1017_SA(y_str(" *)", 3));
yr1024_ST(F.v5956);
yr1017_SA(y_str(".p)[", 4));
yr1024_ST(F.v5958);
yr1017_SA(y_str("] = ", 4));
yr1024_ST(yr2712_Convert(yr3102_Join(yr1041_T(y_str("((", 2)), F.v5964, yr3102_Join(yr1041_T(y_str(" *)", 3)), F.v5954, yr3102_Join(yr1041_T(y_str(".p)[", 4)), F.v5958, yr1041_T(y_str("]", 1))))), ((*(yR104 *)rt_nil_check(F.p2664))).f_elem, ((*(yR104 *)rt_nil_check(F.p2665))).f_elem));
yr1017_SA(y_str("; ", 2));
yr1024_ST(F.v5956);
yr1017_SA(y_str("; })", 4));
{ rt_int rv6005 = yr1036_SE();
return rv6005; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2670_RescaleCode(rt_int a_p2671, void * a_p2672, void * a_p2673) {
struct yf2674 F;
memset((void *)&F, 0, sizeof F);
F.p2671 = a_p2671;
F.p2672 = a_p2672;
F.p2673 = a_p2673;
yr2468_ScaleRatio(F.p2672, F.p2673, &F.v6011, &F.v6013, &F.v6015);
if (F.v6015) {
{ rt_int rv6016 = F.p2671;
return rv6016; }
}
yr1006_SB();
yr1017_SA(y_str("y_fix_conv(", 11));
yr1024_ST(F.p2671);
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.v6011);
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.v6013);
yr1017_SA(y_str(")", 1));
{ rt_int rv6021 = yr1036_SE();
return rv6021; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2678_CommonScale(rt_int * a_p2679, void * a_p2680, rt_int * a_p2681, void * a_p2682, void * a_p2683, rt_int a_p2684) {
struct yf2685 F;
memset((void *)&F, 0, sizeof F);
F.p2679 = a_p2679;
F.p2680 = a_p2680;
F.p2681 = a_p2681;
F.p2682 = a_p2682;
F.p2683 = a_p2683;
F.p2684 = a_p2684;
F.v6030 = yr2445_Gcd(((*(yR104 *)rt_nil_check(F.p2680))).f_fsn, ((*(yR104 *)rt_nil_check(F.p2682))).f_fsn);
F.v6032 = yr2452_MulChk(rt_range(rt_div(((*(yR104 *)rt_nil_check(F.p2680))).f_fsd, yr2445_Gcd(((*(yR104 *)rt_nil_check(F.p2680))).f_fsd, ((*(yR104 *)rt_nil_check(F.p2682))).f_fsd)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), ((*(yR104 *)rt_nil_check(F.p2682))).f_fsd, F.p2684);
yr2485_SetScale(F.p2683, F.v6030, F.v6032);
(*F.p2679) = yr2670_RescaleCode((*F.p2679), F.p2680, F.p2683);
(*F.p2681) = yr2670_RescaleCode((*F.p2681), F.p2682, F.p2683);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2689_FixLiteral(void * a_p2690, rt_int * a_p2691, void * * a_p2692) {
struct yf2693 F;
memset((void *)&F, 0, sizeof F);
F.p2690 = a_p2690;
F.p2691_o = a_p2691;
F.p2692_o = a_p2692;
F.v6039 = ((*(yR99 *)rt_nil_check(F.p2690))).f_ival;
F.v6041 = ((rt_int *)(v1210).p)[y_ix1(v1210, F.v6039)];
F.p2692 = yr2283_CopyRep(v1322);
((*(yR104 *)rt_nil_check(F.p2692))).f_abstract = 0;
if ((F.v6041 >= INT64_C(0))) {
yr2485_SetScale(F.p2692, yr2460_PowChk(((rt_int *)(v1208).p)[y_ix1(v1208, F.v6039)], F.v6041, ((*(yR99 *)rt_nil_check(F.p2690))).f_line), INT64_C(1));
} else {
yr2485_SetScale(F.p2692, INT64_C(1), yr2460_PowChk(((rt_int *)(v1208).p)[y_ix1(v1208, F.v6039)], rt_range(rt_neg(F.v6041), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), ((*(yR99 *)rt_nil_check(F.p2690))).f_line));
}
yr1006_SB();
yr1017_SA(y_str("((yfix)INT64_C(", 15));
yr1030_SI(((rt_int *)(v1206).p)[y_ix1(v1206, F.v6039)]);
yr1017_SA(y_str("))", 2));
F.p2691 = yr1036_SE();
(*F.p2691_o) = F.p2691;
(*F.p2692_o) = F.p2692;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2697_ManifestFix(void * a_p2698, rt_int * a_p2699, rt_int * a_p2700, rt_int * a_p2701) {
struct yf2702 F;
memset((void *)&F, 0, sizeof F);
F.p2698 = a_p2698;
F.p2699_o = a_p2699;
F.p2700_o = a_p2700;
F.p2701_o = a_p2701;
F.p2699 = 0;
F.p2700 = INT64_C(0);
F.p2701 = INT64_C(1);
if ((((*(yR99 *)rt_nil_check(F.p2698))).f_kind == v746)) {
F.v6055 = ((*(yR99 *)rt_nil_check(F.p2698))).f_ival;
F.v6057 = ((rt_int *)(v1210).p)[y_ix1(v1210, F.v6055)];
F.p2700 = ((rt_int *)(v1206).p)[y_ix1(v1206, F.v6055)];
if ((F.v6057 >= INT64_C(0))) {
F.p2700 = yr2452_MulChk(F.p2700, yr2460_PowChk(((rt_int *)(v1208).p)[y_ix1(v1208, F.v6055)], F.v6057, ((*(yR99 *)rt_nil_check(F.p2698))).f_line), ((*(yR99 *)rt_nil_check(F.p2698))).f_line);
} else {
F.p2701 = yr2460_PowChk(((rt_int *)(v1208).p)[y_ix1(v1208, F.v6055)], rt_range(rt_neg(F.v6057), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), ((*(yR99 *)rt_nil_check(F.p2698))).f_line);
}
F.p2699 = 1;
} else if ((((*(yR99 *)rt_nil_check(F.p2698))).f_kind == v743)) {
F.p2700 = ((*(yR99 *)rt_nil_check(F.p2698))).f_ival;
F.p2699 = 1;
} else if ((((*(yR99 *)rt_nil_check(F.p2698))).f_kind == v785)) {
yr2697_ManifestFix(((*(yR99 *)rt_nil_check(F.p2698))).f_a, &F.p2699, &F.p2700, &F.p2701);
} else if ((((*(yR99 *)rt_nil_check(F.p2698))).f_kind == v779)) {
yr2697_ManifestFix(((*(yR99 *)rt_nil_check(F.p2698))).f_a, &F.p2699, &F.p2700, &F.p2701);
F.p2700 = rt_range(rt_neg(F.p2700), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((((*(yR99 *)rt_nil_check(F.p2698))).f_kind == v782)) && ((((*(yR99 *)rt_nil_check(F.p2698))).f_name == v563)))) {
yr2697_ManifestFix(((*(yR99 *)rt_nil_check(F.p2698))).f_a, &F.p2699, &F.p2700, &F.p2701);
yr2697_ManifestFix(((*(yR99 *)rt_nil_check(F.p2698))).f_b, &F.v6065, &F.v6061, &F.v6063);
F.p2699 = (F.p2699 && F.v6065);
F.p2700 = yr2452_MulChk(F.p2700, F.v6061, ((*(yR99 *)rt_nil_check(F.p2698))).f_line);
F.p2701 = yr2452_MulChk(F.p2701, F.v6063, ((*(yR99 *)rt_nil_check(F.p2698))).f_line);
}
F.v6059 = yr2445_Gcd(F.p2700, F.p2701);
F.p2700 = rt_range(rt_div(F.p2700, F.v6059), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.p2701 = rt_range(rt_div(F.p2701, F.v6059), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2699_o) = F.p2699;
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2706_FloatChk(rt_int a_p2707) {
struct yf2708 F;
memset((void *)&F, 0, sizeof F);
F.p2707 = a_p2707;
{ rt_int rv6080 = yr3102_Join(yr1041_T(y_str("y_fchk(", 7)), F.p2707, yr1041_T(y_str(")", 1)));
return rv6080; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2712_Convert(rt_int a_p2713, void * a_p2714, void * a_p2715) {
struct yf2716 F;
memset((void *)&F, 0, sizeof F);
F.p2713 = a_p2713;
F.p2714 = a_p2714;
F.p2715 = a_p2715;
if (((((((*(yR104 *)rt_nil_check(F.p2715))).f_kind == v830)) && ((((*(yR104 *)rt_nil_check(F.p2714))).f_kind == v806))) && ((((*(yR104 *)rt_nil_check(F.p2714))).f_nidx == INT64_C(1))))) {
if ((((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2714))).f_idx))).f_hasm && ((!(((*(yR104 *)rt_nil_check(F.p2715))).f_nlits == (rt_add((rt_sub(((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2714))).f_idx))).f_mhi, ((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2714))).f_idx))).f_mlo)), INT64_C(1)))))))) {
yr1006_SB();
yr1017_SA(y_str("a string of ", 12));
yr1030_SI(((*(yR104 *)rt_nil_check(F.p2715))).f_nlits);
yr1017_SA(y_str(" characters for an array of ", 28));
yr1030_SI(rt_range(rt_add((rt_sub(((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2714))).f_idx))).f_mhi, ((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2714))).f_idx))).f_mlo)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1017_SA(y_str(" (VI.B.1)", 9));
F.v6086 = yr1036_SE();
yr1137_Fail(v980, F.v6086);
}
}
if ((!yr2647_NeedsConv(F.p2714, F.p2715))) {
{ rt_int rv6097 = F.p2713;
return rv6097; }
}
if ((((*(yR104 *)rt_nil_check(F.p2714))).f_kind == v809)) {
{ rt_int rv6098 = yr2654_ConvertRecord(F.p2713, F.p2714, F.p2715);
return rv6098; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2714))).f_kind == v806)) || ((((*(yR104 *)rt_nil_check(F.p2714))).f_kind == v827)))) {
{ rt_int rv6099 = yr2662_ConvertArray(F.p2713, F.p2714, F.p2715);
return rv6099; }
}
if (yr2289_IsDiscrete(F.p2714)) {
yr1006_SB();
yr1017_SA(y_str("rt_range(", 9));
yr1024_ST(F.p2713);
yr1017_SA(y_str(", ", 2));
yr1024_ST(yr2419_LoText(F.p2714));
yr1017_SA(y_str(", ", 2));
yr1024_ST(yr2425_HiText(F.p2714));
yr1017_SA(y_str(")", 1));
{ rt_int rv6104 = yr1036_SE();
return rv6104; }
}
if ((((*(yR104 *)rt_nil_check(F.p2714))).f_kind == v794)) {
yr1006_SB();
yr1017_SA(y_str("rt_frange(", 10));
yr1024_ST(F.p2713);
yr1017_SA(y_str(", ", 2));
yr1024_ST(yr2419_LoText(F.p2714));
yr1017_SA(y_str(", ", 2));
yr1024_ST(yr2425_HiText(F.p2714));
yr1017_SA(y_str(")", 1));
{ rt_int rv6109 = yr1036_SE();
return rv6109; }
}
if ((((*(yR104 *)rt_nil_check(F.p2714))).f_kind == v791)) {
F.v6086 = yr2670_RescaleCode(F.p2713, F.p2715, F.p2714);
if ((((*(yR104 *)rt_nil_check(F.p2714))).f_lo == INT64_C(0))) {
{ rt_int rv6111 = F.v6086;
return rv6111; }
}
yr1006_SB();
yr1017_SA(y_str("y_fix_range(", 12));
yr1024_ST(F.v6086);
yr1017_SA(y_str(", ", 2));
yr1024_ST(yr2419_LoText(F.p2714));
yr1017_SA(y_str(", ", 2));
yr1024_ST(yr2425_HiText(F.p2714));
yr1017_SA(y_str(")", 1));
{ rt_int rv6116 = yr1036_SE();
return rv6116; }
}
{ rt_int rv6117 = F.p2713;
return rv6117; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2720_StoreText(rt_int a_p2721, void * a_p2722, rt_int a_p2723, void * a_p2724, rt_int a_p2725) {
struct yf2726 F;
memset((void *)&F, 0, sizeof F);
F.p2721 = a_p2721;
F.p2722 = a_p2722;
F.p2723 = a_p2723;
F.p2724 = a_p2724;
F.p2725 = a_p2725;
yr2371_CheckType(F.p2725, F.p2722, F.p2724);
if (yr2313_Deep(F.p2722)) {
F.v6125 = yr1166_Fresh(y_str("t", 1));
yr1006_SB();
yr1017_SA(y_str("{ ", 2));
yr1024_ST(yr2338_CType(F.p2722));
yr1017_SA(y_str(" ", 1));
yr1024_ST(F.v6125);
yr1017_SA(y_str(" = ", 3));
yr1024_ST(yr2712_Convert(F.p2723, F.p2722, F.p2724));
yr1017_SA(y_str("; y_store(", 10));
yr1024_ST(yr2344_DescOf(F.p2722));
yr1017_SA(y_str(", &", 3));
yr1024_ST(F.p2721);
yr1017_SA(y_str(", &", 3));
yr1024_ST(F.v6125);
yr1017_SA(y_str("); }", 4));
{ rt_int rv6134 = yr1036_SE();
return rv6134; }
}
yr1006_SB();
yr1024_ST(F.p2721);
yr1017_SA(y_str(" = ", 3));
yr1024_ST(yr2712_Convert(F.p2723, F.p2722, F.p2724));
yr1017_SA(y_str(";", 1));
{ rt_int rv6137 = yr1036_SE();
return rv6137; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2730_Store(rt_int a_p2731, void * a_p2732, rt_int a_p2733, void * a_p2734, rt_int a_p2735) {
struct yf2736 F;
memset((void *)&F, 0, sizeof F);
F.p2731 = a_p2731;
F.p2732 = a_p2732;
F.p2733 = a_p2733;
F.p2734 = a_p2734;
F.p2735 = a_p2735;
yr1112_Emit(yr2720_StoreText(F.p2731, F.p2732, F.p2733, F.p2734, F.p2735));
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2740_IsVariable(void * a_p2741) {
struct yf2742 F;
memset((void *)&F, 0, sizeof F);
F.p2741 = a_p2741;
if ((((*(yR99 *)rt_nil_check(F.p2741))).f_kind == v761)) {
F.v6147 = yr2172_Find(((*(yR99 *)rt_nil_check(F.p2741))).f_name);
if ((F.v6147 == ((void *)0))) {
{ rt_int rv6151 = 0;
return rv6151; }
}
if (((*(yR119 *)rt_nil_check(F.v6147))).f_readonly) {
{ rt_int rv6153 = 0;
return rv6153; }
}
{ rt_int rv6154 = (((*(yR119 *)rt_nil_check(yr2270_Real(F.v6147)))).f_kind == v845);
return rv6154; }
}
if ((((*(yR99 *)rt_nil_check(F.p2741))).f_kind == v773)) {
{ rt_int rv6156 = (((*(yR99 *)rt_nil_check(F.p2741))).f_flag == INT64_C(0));
return rv6156; }
}
if ((((*(yR99 *)rt_nil_check(F.p2741))).f_kind == v770)) {
{ rt_int rv6157 = yr2740_IsVariable(((*(yR99 *)rt_nil_check(F.p2741))).f_a);
return rv6157; }
}
if ((((*(yR99 *)rt_nil_check(F.p2741))).f_kind == v767)) {
if ((!yr2740_IsVariable(((*(yR99 *)rt_nil_check(F.p2741))).f_a))) {
{ rt_int rv6159 = 0;
return rv6159; }
}
F.v6149 = yr2593_FindField(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2741))).f_a))).f_rep, ((*(yR99 *)rt_nil_check(F.p2741))).f_name);
if ((F.v6149 == ((void *)0))) {
{ rt_int rv6161 = 0;
return rv6161; }
}
{ rt_int rv6162 = (!((*(yR109 *)rt_nil_check(F.v6149))).f_isconst);
return rv6162; }
}
{ rt_int rv6164 = 0;
return rv6164; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2746_CheckPure(void * a_p2747) {
struct yf2748 F;
memset((void *)&F, 0, sizeof F);
F.p2747 = a_p2747;
F.v6168 = F.p2747;
if ((v1567 == ((void *)0))) {
return;
}
if ((!((*(yR119 *)rt_nil_check(v1567))).f_func)) {
return;
}
while ((((((*(yR99 *)rt_nil_check(F.v6168))).f_kind == v767)) || ((((*(yR99 *)rt_nil_check(F.v6168))).f_kind == v770)))) {
F.v6168 = ((*(yR99 *)rt_nil_check(F.v6168))).f_a;
}
if ((((*(yR99 *)rt_nil_check(F.v6168))).f_kind == v773)) {
if ((((*(yR99 *)rt_nil_check(F.v6168))).f_flag == INT64_C(0))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2747))).f_line, y_str("a FUNCTION does not assign to a dynamic variable (X.A.4)", 56));
}
return;
}
if ((((*(yR99 *)rt_nil_check(F.v6168))).f_kind == v761)) {
F.v6170 = yr2172_Find(((*(yR99 *)rt_nil_check(F.v6168))).f_name);
if ((!(F.v6170 == ((void *)0)))) {
F.v6170 = yr2270_Real(F.v6170);
if ((((*(yR119 *)rt_nil_check(F.v6170))).f_level < ((*(yR119 *)rt_nil_check(v1567))).f_level)) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2747))).f_line, ((*(yR99 *)rt_nil_check(F.v6168))).f_name, y_str(" is not local: a FUNCTION assigns only to its locals (X.A.4)", 60));
}
}
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2752_LValue(void * a_p2753, rt_int * a_p2754, void * * a_p2755) {
struct yf2756 F;
memset((void *)&F, 0, sizeof F);
F.p2753 = a_p2753;
F.p2754_o = a_p2754;
F.p2755_o = a_p2755;
yr2779_Expr(F.p2753, ((void *)0), &F.p2754, &F.p2755);
if ((!yr2740_IsVariable(F.p2753))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2753))).f_line, y_str("a variable is needed here (IX.A.1)", 34));
}
(*F.p2754_o) = F.p2754;
(*F.p2755_o) = F.p2755;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2760_Paren(rt_int a_p2761) {
struct yf2762 F;
memset((void *)&F, 0, sizeof F);
F.p2761 = a_p2761;
yr1006_SB();
yr1017_SA(y_str("(", 1));
yr1024_ST(F.p2761);
yr1017_SA(y_str(")", 1));
{ rt_int rv6183 = yr1036_SE();
return rv6183; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2766_Lit(void * a_p2767, rt_int a_p2768) {
struct yf2769 F;
memset((void *)&F, 0, sizeof F);
F.p2767 = a_p2767;
F.p2768 = a_p2768;
F.v6188 = yr2283_CopyRep(F.p2767);
yr2506_SetRange(F.v6188, F.p2768, F.p2768);
((*(yR104 *)rt_nil_check(F.v6188))).f_elem = F.p2767;
{ void * rv6189 = F.v6188;
return rv6189; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2773_Qualifier(void * a_p2774) {
struct yf2775 F;
memset((void *)&F, 0, sizeof F);
F.p2774 = a_p2774;
F.v6193 = yr2270_Real(yr2184_Lookup(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2774))).f_d))).f_name, ((*(yR99 *)rt_nil_check(F.p2774))).f_line));
if ((((!(((*(yR119 *)rt_nil_check(F.v6193))).f_kind == v851))) && ((!(((*(yR119 *)rt_nil_check(F.v6193))).f_kind == v854))))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2774))).f_line, ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2774))).f_d))).f_name, y_str(" is not a type", 14));
}
{ void * rv6195 = ((*(yR119 *)rt_nil_check(F.v6193))).f_rep;
return rv6195; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2779_Expr(void * a_p2780, void * a_p2781, rt_int * a_p2782, void * * a_p2783) {
struct yf2784 F;
memset((void *)&F, 0, sizeof F);
F.p2780 = a_p2780;
F.p2781 = a_p2781;
F.p2782_o = a_p2782;
F.p2783_o = a_p2783;
F.v6202 = ((*(yR99 *)rt_nil_check(F.p2780))).f_kind;
v980 = ((*(yR99 *)rt_nil_check(F.p2780))).f_line;
if ((F.v6202 == v785)) {
yr2779_Expr(((*(yR99 *)rt_nil_check(F.p2780))).f_a, F.p2781, &F.v6206, &F.p2783);
F.p2782 = yr2760_Paren(F.v6206);
} else if ((F.v6202 == v743)) {
F.p2783 = yr2766_Lit(v1308, ((*(yR99 *)rt_nil_check(F.p2780))).f_ival);
if ((!(((*(yR99 *)rt_nil_check(F.p2780))).f_d == ((void *)0)))) {
F.v6212 = yr2773_Qualifier(F.p2780);
if ((!(((*(yR104 *)rt_nil_check(F.v6212))).f_kind == v788))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2780))).f_line, y_str("an integer literal qualified by a type that is not INTEGER", 58));
}
((*(yR104 *)rt_nil_check(F.p2783))).f_tid = ((*(yR104 *)rt_nil_check(F.v6212))).f_tid;
((*(yR104 *)rt_nil_check(F.p2783))).f_tname = ((*(yR104 *)rt_nil_check(F.v6212))).f_tname;
}
yr1006_SB();
yr1017_SA(y_str("INT64_C(", 8));
yr1030_SI(((*(yR99 *)rt_nil_check(F.p2780))).f_ival);
yr1017_SA(y_str(")", 1));
F.p2782 = yr1036_SE();
} else if ((F.v6202 == v752)) {
F.v6212 = yr2607_AlphabetFor(F.p2780, F.p2781);
F.v6218 = yr2614_CharValue(F.v6212, ((*(yR99 *)rt_nil_check(F.p2780))).f_text, ((*(yR99 *)rt_nil_check(F.p2780))).f_line);
F.p2783 = yr2766_Lit(F.v6212, F.v6218);
yr1006_SB();
yr1030_SI(F.v6218);
F.p2782 = yr1036_SE();
} else if ((F.v6202 == v755)) {
F.v6212 = yr2607_AlphabetFor(F.p2780, F.p2781);
F.v6206 = yr2622_StringCodes(F.v6212, ((*(yR99 *)rt_nil_check(F.p2780))).f_text, &F.v6216, ((*(yR99 *)rt_nil_check(F.p2780))).f_line);
F.p2783 = yr2276_NewRep(v830, yr1041_T(y_str("string", 6)));
((*(yR104 *)rt_nil_check(F.p2783))).f_tname = yr1041_T(y_str("a string literal", 16));
((*(yR104 *)rt_nil_check(F.p2783))).f_elem = F.v6212;
((*(yR104 *)rt_nil_check(F.p2783))).f_nidx = INT64_C(1);
((*(yR104 *)rt_nil_check(F.p2783))).f_nlits = F.v6216;
yr1006_SB();
yr1017_SA(y_str("y_str(", 6));
yr1024_ST(F.v6206);
yr1017_SA(y_str(", ", 2));
yr1030_SI(F.v6216);
yr1017_SA(y_str(")", 1));
F.p2782 = yr1036_SE();
} else if ((F.v6202 == v749)) {
F.p2783 = v1320;
if ((!(((*(yR99 *)rt_nil_check(F.p2780))).f_d == ((void *)0)))) {
F.p2783 = yr2773_Qualifier(F.p2780);
}
F.p2782 = yr2760_Paren(((*(yR99 *)rt_nil_check(F.p2780))).f_text);
} else if ((F.v6202 == v746)) {
yr2689_FixLiteral(F.p2780, &F.p2782, &F.p2783);
if ((!(((*(yR99 *)rt_nil_check(F.p2780))).f_d == ((void *)0)))) {
F.v6212 = yr2773_Qualifier(F.p2780);
if ((!(((*(yR104 *)rt_nil_check(F.v6212))).f_kind == v791))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2780))).f_line, y_str("a fixed-point literal qualified by a type that is not FIXED", 59));
}
((*(yR104 *)rt_nil_check(F.p2783))).f_tid = ((*(yR104 *)rt_nil_check(F.v6212))).f_tid;
((*(yR104 *)rt_nil_check(F.p2783))).f_tname = ((*(yR104 *)rt_nil_check(F.v6212))).f_tname;
}
} else if ((F.v6202 == v758)) {
if ((((*(yR99 *)rt_nil_check(F.p2780))).f_d == ((void *)0))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2780))).f_line, y_str("NIL is qualified by the name of a pointer type (VI.B.4)", 55));
}
F.p2783 = yr2773_Qualifier(F.p2780);
if ((!(((*(yR104 *)rt_nil_check(F.p2783))).f_kind == v812))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2780))).f_line, y_str("NIL of a type that is not a pointer", 35));
}
F.p2782 = yr1041_T(y_str("((void *)0)", 11));
} else if ((F.v6202 == v761)) {
if ((!(((*(yR99 *)rt_nil_check(F.p2780))).f_d == ((void *)0)))) {
F.v6212 = yr2773_Qualifier(F.p2780);
F.v6204 = yr2230_FindLit(((*(yR99 *)rt_nil_check(F.p2780))).f_name, F.v6212);
if ((F.v6204 == ((void *)0))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2780))).f_line, ((*(yR99 *)rt_nil_check(F.p2780))).f_name, y_str(" is not a literal of that type", 30));
}
} else {
F.v6204 = yr2184_Lookup(((*(yR99 *)rt_nil_check(F.p2780))).f_name, ((*(yR99 *)rt_nil_check(F.p2780))).f_line);
}
yr2796_NameExpr(F.p2780, F.v6204, &F.p2782, &F.p2783);
} else if ((F.v6202 == v764)) {
yr2976_CallExpr(F.p2780, F.p2781, 0, &F.p2782, &F.p2783);
} else if ((F.v6202 == v767)) {
yr2779_Expr(((*(yR99 *)rt_nil_check(F.p2780))).f_a, ((void *)0), &F.v6206, &F.v6212);
((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2780))).f_a))).f_rep = F.v6212;
if ((!(((*(yR104 *)rt_nil_check(F.v6212))).f_kind == v809))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2780))).f_line, ((*(yR99 *)rt_nil_check(F.p2780))).f_name, y_str(": a component of something that is not a record", 47));
}
if (((*(yR104 *)rt_nil_check(F.v6212))).f_opaque) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2780))).f_line, ((*(yR104 *)rt_nil_check(F.v6212))).f_tname, y_str(" is exported opaquely: its components are hidden (X.B.3)", 56));
}
F.v6214 = yr2593_FindField(F.v6212, ((*(yR99 *)rt_nil_check(F.p2780))).f_name);
if ((F.v6214 == ((void *)0))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2780))).f_line, ((*(yR99 *)rt_nil_check(F.p2780))).f_name, y_str(" is not a component of this record", 34));
}
F.p2783 = ((*(yR109 *)rt_nil_check(F.v6214))).f_rep;
if ((!(((*(yR109 *)rt_nil_check(F.v6214))).f_variant == INT64_C(0)))) {
yr3051_CheckVariantSelected(F.p2780, F.v6212, F.v6214);
F.v6208 = yr1166_Fresh(y_str("vr", 2));
yr1006_SB();
yr1017_SA(y_str("(*({ ", 5));
yr1024_ST(yr2338_CType(F.v6212));
yr1017_SA(y_str(" *", 2));
yr1024_ST(F.v6208);
yr1017_SA(y_str(" = &", 4));
yr1024_ST(yr2760_Paren(F.v6206));
yr1017_SA(y_str("; if (!(", 8));
yr1024_ST(yr2788_VariantTest(F.v6212, F.v6214, F.v6208));
yr1017_SA(y_str(")) rt_raise(RT_X_TAG); &", 24));
yr1024_ST(F.v6208);
yr1017_SA(y_str("->f_", 4));
yr1024_ST(((*(yR99 *)rt_nil_check(F.p2780))).f_name);
yr1017_SA(y_str("; }))", 5));
F.p2782 = yr1036_SE();
} else {
yr1006_SB();
yr1024_ST(yr2760_Paren(F.v6206));
yr1017_SA(y_str(".f_", 3));
yr1024_ST(((*(yR99 *)rt_nil_check(F.p2780))).f_name);
F.p2782 = yr1036_SE();
}
} else if ((((F.v6202 == v773)) && yr2938_UserOp(F.p2780, rt_range(v602, INT64_C(0), INT64_C(4000000)), ((*(yR99 *)rt_nil_check(F.p2780))).f_a, ((void *)0), &F.p2782, &F.p2783))) {
((*(yR99 *)rt_nil_check(F.p2780))).f_flag = INT64_C(1);
} else if ((F.v6202 == v773)) {
yr2779_Expr(((*(yR99 *)rt_nil_check(F.p2780))).f_a, ((void *)0), &F.v6206, &F.v6212);
if ((!(((*(yR104 *)rt_nil_check(F.v6212))).f_kind == v812))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2780))).f_line, y_str("^ of something that is not a pointer", 36));
}
if ((((*(yR104 *)rt_nil_check(F.v6212))).f_elem == ((void *)0))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2780))).f_line, ((*(yR104 *)rt_nil_check(F.v6212))).f_forward, y_str(" is not declared", 16));
}
F.p2783 = ((*(yR104 *)rt_nil_check(F.v6212))).f_elem;
yr1006_SB();
yr1017_SA(y_str("(*(", 3));
yr1024_ST(yr2338_CType(F.p2783));
yr1017_SA(y_str(" *)rt_nil_check(", 16));
yr1024_ST(F.v6206);
yr1017_SA(y_str("))", 2));
F.p2782 = yr1036_SE();
} else if ((F.v6202 == v770)) {
yr2805_IndexExpr(F.p2780, &F.p2782, &F.p2783);
} else if ((((F.v6202 == v776)) && yr2938_UserOp(F.p2780, rt_range(v374, INT64_C(0), INT64_C(4000000)), ((*(yR99 *)rt_nil_check(F.p2780))).f_a, ((void *)0), &F.p2782, &F.p2783))) {
F.p2783 = F.p2783;
} else if ((F.v6202 == v776)) {
yr2779_Expr(((*(yR99 *)rt_nil_check(F.p2780))).f_a, v1310, &F.v6206, &F.v6212);
yr2371_CheckType(((*(yR99 *)rt_nil_check(F.p2780))).f_line, v1310, F.v6212);
F.p2783 = v1310;
yr1006_SB();
yr1017_SA(y_str("(!", 2));
yr1024_ST(F.v6206);
yr1017_SA(y_str(")", 1));
F.p2782 = yr1036_SE();
} else if ((F.v6202 == v779)) {
if ((!yr2938_UserOp(F.p2780, rt_range(v560, INT64_C(0), INT64_C(4000000)), ((*(yR99 *)rt_nil_check(F.p2780))).f_a, ((void *)0), &F.p2782, &F.p2783))) {
yr2779_Expr(((*(yR99 *)rt_nil_check(F.p2780))).f_a, F.p2781, &F.v6206, &F.v6212);
yr2813_NegExpr(F.p2780, F.v6206, F.v6212, &F.p2782, &F.p2783);
}
} else if ((F.v6202 == v782)) {
yr2869_BinExpr(F.p2780, F.p2781, &F.p2782, &F.p2783);
} else {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2780))).f_line, y_str("not an expression", 17));
}
((*(yR99 *)rt_nil_check(F.p2780))).f_rep = F.p2783;
(*F.p2782_o) = F.p2782;
(*F.p2783_o) = F.p2783;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2788_VariantTest(void * a_p2789, void * a_p2790, rt_int a_p2791) {
struct yf2792 F;
memset((void *)&F, 0, sizeof F);
F.p2789 = a_p2789;
F.p2790 = a_p2790;
F.p2791 = a_p2791;
F.v6261 = ((*(yR109 *)rt_nil_check(F.p2790))).f_labels;
yr1006_SB();
yr1017_SA(y_str("0", 1));
while ((!(F.v6261 == ((void *)0)))) {
yr2631_Manifest(F.v6261, &F.v6263, &F.v6265);
yr1017_SA(y_str(" || ", 4));
yr1024_ST(F.p2791);
yr1017_SA(y_str("->f_", 4));
yr1024_ST(((*(yR109 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2789))).f_selector))).f_name);
yr1017_SA(y_str(" == ", 4));
yr1030_SI(F.v6265);
F.v6261 = ((*(yR99 *)rt_nil_check(F.v6261))).f_next;
}
{ rt_int rv6270 = yr1036_SE();
return rv6270; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2796_NameExpr(void * a_p2797, void * a_p2798, rt_int * a_p2799, void * * a_p2800) {
struct yf2801 F;
memset((void *)&F, 0, sizeof F);
F.p2797 = a_p2797;
F.p2798 = a_p2798;
F.p2799_o = a_p2799;
F.p2800_o = a_p2800;
F.v6277 = yr2270_Real(F.p2798);
if ((((*(yR119 *)rt_nil_check(F.v6277))).f_kind == v857)) {
if ((((((*(yR99 *)rt_nil_check(F.p2797))).f_d == ((void *)0))) && yr2224_Ambiguous(F.v6277))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2797))).f_line, ((*(yR99 *)rt_nil_check(F.p2797))).f_name, y_str(" names values of two types here: qualify it (VI.A.3)", 52));
}
F.p2800 = yr2766_Lit(((*(yR119 *)rt_nil_check(F.v6277))).f_rep, ((*(yR119 *)rt_nil_check(F.v6277))).f_mval);
yr1006_SB();
yr1030_SI(((*(yR119 *)rt_nil_check(F.v6277))).f_mval);
F.p2799 = yr1036_SE();
(*F.p2799_o) = F.p2799;
(*F.p2800_o) = F.p2800;
return;
}
if ((((((*(yR119 *)rt_nil_check(F.v6277))).f_kind == v845)) || ((((*(yR119 *)rt_nil_check(F.v6277))).f_kind == v848)))) {
F.p2800 = ((*(yR119 *)rt_nil_check(F.v6277))).f_rep;
F.p2799 = yr2264_SymPath(F.v6277);
(*F.p2799_o) = F.p2799;
(*F.p2800_o) = F.p2800;
return;
}
if ((((*(yR119 *)rt_nil_check(F.v6277))).f_kind == v860)) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2797))).f_line, ((*(yR99 *)rt_nil_check(F.p2797))).f_name, y_str(" is a routine: a call needs ()", 30));
}
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2797))).f_line, ((*(yR99 *)rt_nil_check(F.p2797))).f_name, y_str(" is not a value", 15));
(*F.p2799_o) = F.p2799;
(*F.p2800_o) = F.p2800;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2805_IndexExpr(void * a_p2806, rt_int * a_p2807, void * * a_p2808) {
struct yf2809 F;
memset((void *)&F, 0, sizeof F);
F.p2806 = a_p2806;
F.p2807_o = a_p2807;
F.p2808_o = a_p2808;
yr2779_Expr(((*(yR99 *)rt_nil_check(F.p2806))).f_a, ((void *)0), &F.v6286, &F.v6292);
if ((!yr2301_IsArrayLike(F.v6292))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2806))).f_line, y_str("[] of something that is not an array", 36));
}
F.v6300 = yr1843_Count(((*(yR99 *)rt_nil_check(F.p2806))).f_b);
if ((!(F.v6300 == ((*(yR104 *)rt_nil_check(F.v6292))).f_nidx))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2806))).f_line, y_str("the number of subscripts is not the number of dimensions", 56));
}
F.p2808 = ((*(yR104 *)rt_nil_check(F.v6292))).f_elem;
F.v6302 = (((((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2806))).f_a))).f_kind == v761)) || ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2806))).f_a))).f_kind == v767))) || ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2806))).f_a))).f_kind == v770))) || ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2806))).f_a))).f_kind == v773)));
if (F.v6302) {
F.v6290 = F.v6286;
} else {
F.v6290 = yr1166_Fresh(y_str("ya", 2));
}
yr1006_SB();
if ((!F.v6302)) {
yr1017_SA(y_str("(*({ yarr ", 10));
yr1024_ST(F.v6290);
yr1017_SA(y_str(" = ", 3));
yr1024_ST(F.v6286);
yr1017_SA(y_str("; &", 3));
}
yr1017_SA(y_str("((", 2));
yr1024_ST(yr2338_CType(F.p2808));
yr1017_SA(y_str(" *)(", 4));
yr1024_ST(F.v6290);
yr1017_SA(y_str(").p)[y_ix", 9));
yr1030_SI(F.v6300);
yr1017_SA(y_str("(", 1));
yr1024_ST(F.v6290);
F.p2807 = yr1036_SE();
F.v6298 = ((*(yR99 *)rt_nil_check(F.p2806))).f_b;
F.v6296 = ((*(yR104 *)rt_nil_check(F.v6292))).f_idx;
while ((!(F.v6298 == ((void *)0)))) {
yr2779_Expr(F.v6298, F.v6296, &F.v6288, &F.v6294);
if ((((!(F.v6296 == ((void *)0)))) && ((((*(yR104 *)rt_nil_check(F.v6292))).f_kind == v806)))) {
yr2371_CheckType(((*(yR99 *)rt_nil_check(F.v6298))).f_line, F.v6296, F.v6294);
} else if ((!((((((*(yR104 *)rt_nil_check(F.v6294))).f_kind == v788)) || yr2289_IsDiscrete(F.v6294))))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.v6298))).f_line, y_str("a subscript is an integer or scalar value", 41));
}
yr1006_SB();
yr1024_ST(F.p2807);
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.v6288);
F.p2807 = yr1036_SE();
if ((!(F.v6296 == ((void *)0)))) {
F.v6296 = ((*(yR104 *)rt_nil_check(F.v6296))).f_link;
}
F.v6298 = ((*(yR99 *)rt_nil_check(F.v6298))).f_next;
}
yr1006_SB();
yr1024_ST(F.p2807);
yr1017_SA(y_str(")]", 2));
if ((!F.v6302)) {
yr1017_SA(y_str("; }))", 5));
}
F.p2807 = yr1036_SE();
(*F.p2807_o) = F.p2807;
(*F.p2808_o) = F.p2808;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2813_NegExpr(void * a_p2814, rt_int a_p2815, void * a_p2816, rt_int * a_p2817, void * * a_p2818) {
struct yf2819 F;
memset((void *)&F, 0, sizeof F);
F.p2814 = a_p2814;
F.p2815 = a_p2815;
F.p2816 = a_p2816;
F.p2817_o = a_p2817;
F.p2818_o = a_p2818;
yr1006_SB();
if ((((*(yR104 *)rt_nil_check(F.p2816))).f_kind == v788)) {
F.p2818 = yr2283_CopyRep(F.p2816);
((*(yR104 *)rt_nil_check(F.p2818))).f_lo = INT64_C(0);
((*(yR104 *)rt_nil_check(F.p2818))).f_hasm = 0;
yr1017_SA(y_str("rt_neg(", 7));
yr1024_ST(F.p2815);
yr1017_SA(y_str(")", 1));
} else if ((((*(yR104 *)rt_nil_check(F.p2816))).f_kind == v794)) {
F.p2818 = yr2283_CopyRep(F.p2816);
((*(yR104 *)rt_nil_check(F.p2818))).f_lo = INT64_C(0);
yr1017_SA(y_str("(-", 2));
yr1024_ST(F.p2815);
yr1017_SA(y_str(")", 1));
} else if ((((*(yR104 *)rt_nil_check(F.p2816))).f_kind == v791)) {
F.p2818 = yr2283_CopyRep(F.p2816);
((*(yR104 *)rt_nil_check(F.p2818))).f_lo = INT64_C(0);
yr1017_SA(y_str("y_fix_neg(", 10));
yr1024_ST(F.p2815);
yr1017_SA(y_str(")", 1));
} else if ((((*(yR104 *)rt_nil_check(F.p2816))).f_kind == v818)) {
F.p2818 = F.p2816;
yr1017_SA(y_str("y_set_compl(", 12));
yr1024_ST(F.p2815);
yr1017_SA(y_str(")", 1));
} else {
v911 = 0;
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2814))).f_line, y_str("- of something that is not a number or a set", 44));
}
F.p2817 = yr1036_SE();
(*F.p2817_o) = F.p2817;
(*F.p2818_o) = F.p2818;
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2823_Unbounded(void * a_p2824) {
struct yf2825 F;
memset((void *)&F, 0, sizeof F);
F.p2824 = a_p2824;
F.v6340 = yr2283_CopyRep(F.p2824);
((*(yR104 *)rt_nil_check(F.v6340))).f_lo = INT64_C(0);
((*(yR104 *)rt_nil_check(F.v6340))).f_hi = INT64_C(0);
((*(yR104 *)rt_nil_check(F.v6340))).f_hasm = 0;
{ void * rv6344 = F.v6340;
return rv6344; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2829_Call2(yarr a_p2831, rt_int a_p2832, rt_int a_p2833) {
struct yf2834 F;
memset((void *)&F, 0, sizeof F);
F.p2831 = a_p2831;
F.p2832 = a_p2832;
F.p2833 = a_p2833;
yr1006_SB();
yr1017_SA(F.p2831);
yr1017_SA(y_str("(", 1));
yr1024_ST(F.p2832);
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.p2833);
yr1017_SA(y_str(")", 1));
{ rt_int rv6352 = yr1036_SE();
return rv6352; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2838_Infix(rt_int a_p2839, yarr a_p2841, rt_int a_p2842) {
struct yf2843 F;
memset((void *)&F, 0, sizeof F);
F.p2839 = a_p2839;
F.p2841 = a_p2841;
F.p2842 = a_p2842;
yr1006_SB();
yr1017_SA(y_str("(", 1));
yr1024_ST(F.p2839);
yr1017_SA(y_str(" ", 1));
yr1017_SA(F.p2841);
yr1017_SA(y_str(" ", 1));
yr1024_ST(F.p2842);
yr1017_SA(y_str(")", 1));
{ rt_int rv6361 = yr1036_SE();
return rv6361; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2847_EqCode(rt_int a_p2848, void * a_p2849, rt_int a_p2850, void * a_p2851) {
struct yf2852 F;
memset((void *)&F, 0, sizeof F);
F.p2848 = a_p2848;
F.p2849 = a_p2849;
F.p2850 = a_p2850;
F.p2851 = a_p2851;
F.v6372 = F.p2849;
if ((((*(yR104 *)rt_nil_check(F.p2849))).f_kind == v830)) {
F.v6372 = F.p2851;
}
if ((((((((*(yR104 *)rt_nil_check(F.v6372))).f_kind == v806)) || ((((*(yR104 *)rt_nil_check(F.v6372))).f_kind == v809))) || ((((*(yR104 *)rt_nil_check(F.v6372))).f_kind == v827))) || ((((*(yR104 *)rt_nil_check(F.v6372))).f_kind == v830)))) {
F.v6368 = yr1166_Fresh(y_str("e", 1));
F.v6370 = yr1166_Fresh(y_str("e", 1));
yr1006_SB();
yr1017_SA(y_str("({ ", 3));
yr1024_ST(yr2338_CType(F.v6372));
yr1017_SA(y_str(" ", 1));
yr1024_ST(F.v6368);
yr1017_SA(y_str(" = ", 3));
yr1024_ST(F.p2848);
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.v6370);
yr1017_SA(y_str(" = ", 3));
yr1024_ST(F.p2850);
yr1017_SA(y_str("; y_eq(", 7));
if ((((((*(yR104 *)rt_nil_check(F.v6372))).f_kind == v827)) || ((((*(yR104 *)rt_nil_check(F.v6372))).f_kind == v830)))) {
yr1017_SA(y_str("y_desc_vector(", 14));
yr1024_ST(yr2344_DescOf(((*(yR104 *)rt_nil_check(F.v6372))).f_elem));
yr1017_SA(y_str(")", 1));
} else {
yr1024_ST(yr2344_DescOf(F.v6372));
}
yr1017_SA(y_str(", &", 3));
yr1024_ST(F.v6368);
yr1017_SA(y_str(", &", 3));
yr1024_ST(F.v6370);
yr1017_SA(y_str("); })", 5));
{ rt_int rv6386 = yr1036_SE();
return rv6386; }
}
if ((((*(yR104 *)rt_nil_check(F.v6372))).f_kind == v818)) {
{ rt_int rv6388 = yr2829_Call2(y_str("y_set_eq", 8), F.p2848, F.p2850);
return rv6388; }
}
{ rt_int rv6390 = yr2838_Infix(F.p2848, y_str("==", 2), F.p2850);
return rv6390; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2856_IsOrdered(void * a_p2857) {
struct yf2858 F;
memset((void *)&F, 0, sizeof F);
F.p2857 = a_p2857;
if ((((((((*(yR104 *)rt_nil_check(F.p2857))).f_kind == v788)) || ((((*(yR104 *)rt_nil_check(F.p2857))).f_kind == v794))) || ((((*(yR104 *)rt_nil_check(F.p2857))).f_kind == v791))) || ((((*(yR104 *)rt_nil_check(F.p2857))).f_kind == v803)))) {
{ rt_int rv6394 = 1;
return rv6394; }
}
{ rt_int rv6395 = (((((*(yR104 *)rt_nil_check(F.p2857))).f_kind == v800)) && ((*(yR104 *)rt_nil_check(F.p2857))).f_ordered);
return rv6395; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2862_FixToFloat(rt_int a_p2863, void * a_p2864) {
struct yf2865 F;
memset((void *)&F, 0, sizeof F);
F.p2863 = a_p2863;
F.p2864 = a_p2864;
yr1006_SB();
yr1017_SA(y_str("y_fix_float(", 12));
yr1024_ST(F.p2863);
yr1017_SA(y_str(", INT64_C(", 10));
yr1030_SI(((*(yR104 *)rt_nil_check(F.p2864))).f_fsn);
yr1017_SA(y_str("), INT64_C(", 11));
yr1030_SI(((*(yR104 *)rt_nil_check(F.p2864))).f_fsd);
yr1017_SA(y_str("))", 2));
{ rt_int rv6403 = yr1036_SE();
return rv6403; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2869_BinExpr(void * a_p2870, void * a_p2871, rt_int * a_p2872, void * * a_p2873) {
struct yf2874 F;
memset((void *)&F, 0, sizeof F);
F.p2870 = a_p2870;
F.p2871 = a_p2871;
F.p2872_o = a_p2872;
F.p2873_o = a_p2873;
F.v6410 = ((*(yR99 *)rt_nil_check(F.p2870))).f_name;
if (yr2938_UserOp(F.p2870, F.v6410, ((*(yR99 *)rt_nil_check(F.p2870))).f_a, ((*(yR99 *)rt_nil_check(F.p2870))).f_b, &F.p2872, &F.p2873)) {
(*F.p2872_o) = F.p2872;
(*F.p2873_o) = F.p2873;
return;
}
if ((((F.v6410 == v221)) || ((F.v6410 == v383)))) {
yr2779_Expr(((*(yR99 *)rt_nil_check(F.p2870))).f_a, v1310, &F.v6412, &F.v6418);
yr2371_CheckType(((*(yR99 *)rt_nil_check(F.p2870))).f_line, v1310, F.v6418);
yr2779_Expr(((*(yR99 *)rt_nil_check(F.p2870))).f_b, v1310, &F.v6414, &F.v6420);
yr2371_CheckType(((*(yR99 *)rt_nil_check(F.p2870))).f_line, v1310, F.v6420);
F.p2873 = v1310;
if ((F.v6410 == v221)) {
F.p2872 = yr2838_Infix(F.v6412, y_str("&&", 2), F.v6414);
} else {
F.p2872 = yr2838_Infix(F.v6412, y_str("||", 2), F.v6414);
}
(*F.p2872_o) = F.p2872;
(*F.p2873_o) = F.p2873;
return;
}
if ((F.v6410 == v344)) {
yr2779_Expr(((*(yR99 *)rt_nil_check(F.p2870))).f_b, ((void *)0), &F.v6414, &F.v6420);
if ((!(((*(yR104 *)rt_nil_check(F.v6420))).f_kind == v818))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2870))).f_line, y_str("IN needs a set on its right", 27));
}
yr2779_Expr(((*(yR99 *)rt_nil_check(F.p2870))).f_a, ((*(yR104 *)rt_nil_check(F.v6420))).f_elem, &F.v6412, &F.v6418);
yr2371_CheckType(((*(yR99 *)rt_nil_check(F.p2870))).f_line, ((*(yR104 *)rt_nil_check(F.v6420))).f_elem, F.v6418);
F.p2873 = v1310;
F.p2872 = yr2829_Call2(y_str("y_set_in", 8), F.v6412, F.v6414);
(*F.p2872_o) = F.p2872;
(*F.p2873_o) = F.p2873;
return;
}
F.v6422 = ((void *)0);
if (((((((((!(F.p2871 == ((void *)0)))) && ((!(F.v6410 == v569)))) && ((!(F.v6410 == v554)))) && ((!(F.v6410 == v572)))) && ((!(F.v6410 == v524)))) && ((!(F.v6410 == v575)))) && ((!(F.v6410 == v527))))) {
F.v6422 = F.p2871;
}
yr2779_Expr(((*(yR99 *)rt_nil_check(F.p2870))).f_a, F.v6422, &F.v6412, &F.v6418);
yr2779_Expr(((*(yR99 *)rt_nil_check(F.p2870))).f_b, F.v6418, &F.v6414, &F.v6420);
if ((((F.v6410 == v569)) || ((F.v6410 == v554)))) {
yr2371_CheckType(((*(yR99 *)rt_nil_check(F.p2870))).f_line, F.v6418, F.v6420);
if (yr2332_NonAssignable(F.v6418)) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2870))).f_line, y_str("= and # are not defined for signals, files and semaphores, nor what holds them (VII.B)", 86));
}
if ((((*(yR104 *)rt_nil_check(F.v6418))).f_opaque && (((rt_div(((*(yR104 *)rt_nil_check(F.v6418))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2870))).f_line, ((*(yR104 *)rt_nil_check(F.v6418))).f_tname, y_str(" is opaque here: = is not exported (X.B.3)", 42));
}
F.p2873 = v1310;
if ((((*(yR104 *)rt_nil_check(F.v6418))).f_kind == v791)) {
yr2678_CommonScale(&F.v6412, F.v6418, &F.v6414, F.v6420, yr2823_Unbounded(F.v6418), ((*(yR99 *)rt_nil_check(F.p2870))).f_line);
}
F.p2872 = yr2847_EqCode(F.v6412, F.v6418, F.v6414, F.v6420);
if ((F.v6410 == v554)) {
yr1006_SB();
yr1017_SA(y_str("(!", 2));
yr1024_ST(F.p2872);
yr1017_SA(y_str(")", 1));
F.p2872 = yr1036_SE();
}
(*F.p2872_o) = F.p2872;
(*F.p2873_o) = F.p2873;
return;
}
if ((((((F.v6410 == v572)) || ((F.v6410 == v524))) || ((F.v6410 == v575))) || ((F.v6410 == v527)))) {
yr2371_CheckType(((*(yR99 *)rt_nil_check(F.p2870))).f_line, F.v6418, F.v6420);
if ((!yr2856_IsOrdered(F.v6418))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2870))).f_line, y_str("< <= > >= apply to ordered values (VIII.A.1)", 44));
}
F.p2873 = v1310;
if ((((*(yR104 *)rt_nil_check(F.v6418))).f_kind == v791)) {
yr2678_CommonScale(&F.v6412, F.v6418, &F.v6414, F.v6420, yr2823_Unbounded(F.v6418), ((*(yR99 *)rt_nil_check(F.p2870))).f_line);
}
if ((F.v6410 == v572)) {
F.p2872 = yr2838_Infix(F.v6412, y_str("<", 1), F.v6414);
} else if ((F.v6410 == v524)) {
F.p2872 = yr2838_Infix(F.v6412, y_str("<=", 2), F.v6414);
} else if ((F.v6410 == v575)) {
F.p2872 = yr2838_Infix(F.v6412, y_str(">", 1), F.v6414);
} else {
F.p2872 = yr2838_Infix(F.v6412, y_str(">=", 2), F.v6414);
}
(*F.p2872_o) = F.p2872;
(*F.p2873_o) = F.p2873;
return;
}
yr2371_CheckType(((*(yR99 *)rt_nil_check(F.p2870))).f_line, F.v6418, F.v6420);
F.v6424 = ((*(yR104 *)rt_nil_check(F.v6418))).f_kind;
if ((((*(yR104 *)rt_nil_check(F.v6418))).f_kind == v830)) {
F.v6424 = ((*(yR104 *)rt_nil_check(F.v6420))).f_kind;
}
if ((F.v6410 == v473)) {
if ((F.v6424 == v797)) {
F.p2873 = v1310;
F.p2872 = yr2838_Infix(F.v6412, y_str("!=", 2), F.v6414);
} else if ((F.v6424 == v818)) {
F.p2873 = F.v6418;
F.p2872 = yr2829_Call2(y_str("y_set_xor", 9), F.v6412, F.v6414);
} else {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2870))).f_line, y_str("XOR applies to BOOLEAN values and sets", 38));
}
(*F.p2872_o) = F.p2872;
(*F.p2873_o) = F.p2873;
return;
}
if ((F.v6424 == v818)) {
F.p2873 = F.v6418;
if ((F.v6410 == v557)) {
F.p2872 = yr2829_Call2(y_str("y_set_union", 11), F.v6412, F.v6414);
} else if ((F.v6410 == v560)) {
F.p2872 = yr2829_Call2(y_str("y_set_diff", 10), F.v6412, F.v6414);
} else if ((F.v6410 == v563)) {
F.p2872 = yr2829_Call2(y_str("y_set_inter", 11), F.v6412, F.v6414);
} else {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2870))).f_line, y_str("this operator does not apply to sets", 36));
}
(*F.p2872_o) = F.p2872;
(*F.p2873_o) = F.p2873;
return;
}
if ((F.v6424 == v788)) {
F.p2873 = yr2823_Unbounded(F.v6418);
if ((F.v6410 == v557)) {
F.p2872 = yr2829_Call2(y_str("rt_add", 6), F.v6412, F.v6414);
} else if ((F.v6410 == v560)) {
F.p2872 = yr2829_Call2(y_str("rt_sub", 6), F.v6412, F.v6414);
} else if ((F.v6410 == v563)) {
F.p2872 = yr2829_Call2(y_str("rt_mul", 6), F.v6412, F.v6414);
} else if ((F.v6410 == v260)) {
F.p2872 = yr2829_Call2(y_str("rt_div", 6), F.v6412, F.v6414);
} else if ((F.v6410 == v362)) {
F.p2872 = yr2829_Call2(y_str("rt_mod", 6), F.v6412, F.v6414);
} else if ((F.v6410 == v566)) {
F.p2873 = v1320;
yr1006_SB();
yr1017_SA(y_str("rt_fdiv((double)(", 17));
yr1024_ST(F.v6412);
yr1017_SA(y_str("), (double)(", 12));
yr1024_ST(F.v6414);
yr1017_SA(y_str("))", 2));
F.p2872 = yr1036_SE();
} else {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2870))).f_line, F.v6410, y_str(" is a free operator: no definition of it is visible (VIII.A)", 60));
}
(*F.p2872_o) = F.p2872;
(*F.p2873_o) = F.p2873;
return;
}
if ((F.v6424 == v794)) {
F.p2873 = yr2823_Unbounded(F.v6418);
if ((F.v6410 == v557)) {
F.p2872 = yr2706_FloatChk(yr2838_Infix(F.v6412, y_str("+", 1), F.v6414));
} else if ((F.v6410 == v560)) {
F.p2872 = yr2706_FloatChk(yr2838_Infix(F.v6412, y_str("-", 1), F.v6414));
} else if ((F.v6410 == v563)) {
F.p2872 = yr2706_FloatChk(yr2838_Infix(F.v6412, y_str("*", 1), F.v6414));
} else if ((F.v6410 == v566)) {
F.p2873 = v1320;
F.p2872 = yr2706_FloatChk(yr2829_Call2(y_str("rt_fdiv", 7), F.v6412, F.v6414));
} else {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2870))).f_line, F.v6410, y_str(" does not apply to these numbers", 32));
}
(*F.p2872_o) = F.p2872;
(*F.p2873_o) = F.p2873;
return;
}
if ((F.v6424 == v791)) {
F.p2873 = yr2823_Unbounded(F.v6418);
if ((((F.v6410 == v557)) || ((F.v6410 == v560)))) {
yr2678_CommonScale(&F.v6412, F.v6418, &F.v6414, F.v6420, F.p2873, ((*(yR99 *)rt_nil_check(F.p2870))).f_line);
if ((F.v6410 == v557)) {
F.p2872 = yr2829_Call2(y_str("y_fix_add", 9), F.v6412, F.v6414);
} else {
F.p2872 = yr2829_Call2(y_str("y_fix_sub", 9), F.v6412, F.v6414);
}
} else if ((F.v6410 == v563)) {
yr2485_SetScale(F.p2873, yr2452_MulChk(((*(yR104 *)rt_nil_check(F.v6418))).f_fsn, ((*(yR104 *)rt_nil_check(F.v6420))).f_fsn, ((*(yR99 *)rt_nil_check(F.p2870))).f_line), yr2452_MulChk(((*(yR104 *)rt_nil_check(F.v6418))).f_fsd, ((*(yR104 *)rt_nil_check(F.v6420))).f_fsd, ((*(yR99 *)rt_nil_check(F.p2870))).f_line));
F.p2872 = yr2829_Call2(y_str("y_fix_mul", 9), F.v6412, F.v6414);
} else if ((F.v6410 == v566)) {
F.p2873 = v1320;
F.p2872 = yr2706_FloatChk(yr2829_Call2(y_str("rt_fdiv", 7), yr2862_FixToFloat(F.v6412, F.v6418), yr2862_FixToFloat(F.v6414, F.v6420)));
} else {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2870))).f_line, F.v6410, y_str(" does not apply to these numbers", 32));
}
(*F.p2872_o) = F.p2872;
(*F.p2873_o) = F.p2873;
return;
}
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2870))).f_line, F.v6410, y_str(" does not apply to these values", 31));
(*F.p2872_o) = F.p2872;
(*F.p2873_o) = F.p2873;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2878_Fits(void * a_p2879, void * a_p2880) {
struct yf2881 F;
memset((void *)&F, 0, sizeof F);
F.p2879 = a_p2879;
F.p2880 = a_p2880;
if ((((*(yR104 *)rt_nil_check(F.p2879))).f_kind == v827)) {
if ((!yr2301_IsArrayLike(F.p2880))) {
{ rt_int rv6472 = 0;
return rv6472; }
}
if ((!(((*(yR104 *)rt_nil_check(F.p2880))).f_nidx == ((*(yR104 *)rt_nil_check(F.p2879))).f_nidx))) {
{ rt_int rv6474 = 0;
return rv6474; }
}
{ rt_int rv6475 = yr2356_SameType(((*(yR104 *)rt_nil_check(F.p2879))).f_elem, ((*(yR104 *)rt_nil_check(F.p2880))).f_elem);
return rv6475; }
}
if ((((*(yR104 *)rt_nil_check(F.p2879))).f_kind == v839)) {
{ rt_int rv6477 = 1;
return rv6477; }
}
{ rt_int rv6478 = yr2356_SameType(F.p2879, F.p2880);
return rv6478; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2885_Choose(void * a_p2886, rt_int a_p2887, rt_int a_p2888) {
struct yf2889 F;
memset((void *)&F, 0, sizeof F);
F.p2886 = a_p2886;
F.p2887 = a_p2887;
F.p2888 = a_p2888;
F.v6484 = F.p2886;
while ((!(F.v6484 == ((void *)0)))) {
if ((((*(yR119 *)rt_nil_check(F.v6484))).f_nparams == F.p2888)) {
F.v6488 = 1;
F.v6486 = ((*(yR119 *)rt_nil_check(F.v6484))).f_params;
F.v6490 = INT64_C(1);
while ((!(F.v6486 == ((void *)0)))) {
if ((!yr2878_Fits(((*(yR114 *)rt_nil_check(F.v6486))).f_rep, ((void * *)(v1465).p)[y_ix1(v1465, rt_add(F.p2887, F.v6490))]))) {
F.v6488 = 0;
}
F.v6490 = rt_range(rt_add(F.v6490, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6486 = ((*(yR114 *)rt_nil_check(F.v6486))).f_next;
}
if (F.v6488) {
{ void * rv6497 = F.v6484;
return rv6497; }
}
}
F.v6484 = ((*(yR119 *)rt_nil_check(F.v6484))).f_alt;
}
{ void * rv6498 = ((void *)0);
return rv6498; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2893_HidesStandard(void * a_p2894) {
struct yf2895 F;
memset((void *)&F, 0, sizeof F);
F.p2894 = a_p2894;
F.v6502 = F.p2894;
while ((!(F.v6502 == ((void *)0)))) {
if ((((!(((*(yR119 *)rt_nil_check(F.v6502))).f_decl == ((void *)0)))) && ((((*(yR99 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v6502))).f_decl))).f_ival == INT64_C(0))))) {
{ rt_int rv6505 = 1;
return rv6505; }
}
F.v6502 = ((*(yR119 *)rt_nil_check(F.v6502))).f_alt;
}
{ rt_int rv6507 = 0;
return rv6507; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2899_CompileArgs(void * a_p2900, void * a_p2901, rt_int * a_p2902, rt_int * a_p2903) {
struct yf2904 F;
memset((void *)&F, 0, sizeof F);
F.p2900 = a_p2900;
F.p2901 = a_p2901;
F.p2902_o = a_p2902;
F.p2903_o = a_p2903;
F.v6514 = F.p2900;
F.v6516 = ((void *)0);
F.p2902 = v1478;
F.p2903 = INT64_C(0);
if ((!(F.p2901 == ((void *)0)))) {
F.v6516 = ((*(yR119 *)rt_nil_check(F.p2901))).f_params;
}
while ((!(F.v6514 == ((void *)0)))) {
if ((v1478 >= INT64_C(4000))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.v6514))).f_line, y_str("calls nested too deeply", 23));
}
F.p2903 = rt_range(rt_add(F.p2903, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1478 = rt_range(rt_add(F.p2902, F.p2903), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6518 = ((void *)0);
if ((!(F.v6516 == ((void *)0)))) {
F.v6518 = ((*(yR114 *)rt_nil_check(F.v6516))).f_rep;
F.v6516 = ((*(yR114 *)rt_nil_check(F.v6516))).f_next;
}
yr2779_Expr(F.v6514, F.v6518, &((rt_int *)(v1454).p)[y_ix1(v1454, rt_add(F.p2902, F.p2903))], &((void * *)(v1465).p)[y_ix1(v1465, rt_add(F.p2902, F.p2903))]);
((void * *)(v1476).p)[y_ix1(v1476, rt_add(F.p2902, F.p2903))] = F.v6514;
F.v6514 = ((*(yR99 *)rt_nil_check(F.v6514))).f_next;
}
(*F.p2902_o) = F.p2902;
(*F.p2903_o) = F.p2903;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2908_CheckUnresolved(void * a_p2909, void * a_p2910, rt_int a_p2911) {
struct yf2912 F;
memset((void *)&F, 0, sizeof F);
F.p2909 = a_p2909;
F.p2910 = a_p2910;
F.p2911 = a_p2911;
if ((((!(((*(yR104 *)rt_nil_check(F.p2909))).f_kind == v827))) || ((!(((*(yR104 *)rt_nil_check(F.p2910))).f_kind == v806))))) {
return;
}
F.v6533 = ((*(yR104 *)rt_nil_check(F.p2910))).f_idx;
while ((!(F.v6533 == ((void *)0)))) {
if ((!(((*(yR104 *)rt_nil_check(F.v6533))).f_kind == v788))) {
yr1144_FailS(F.p2911, y_str("a length-unresolved array formal takes arrays with integer indices only (X.A.3)", 79));
}
F.v6533 = ((*(yR104 *)rt_nil_check(F.v6533))).f_link;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2916_SameAsFormal(void * a_p2917, void * a_p2918) {
struct yf2919 F;
memset((void *)&F, 0, sizeof F);
F.p2917 = a_p2917;
F.p2918 = a_p2918;
if ((((*(yR104 *)rt_nil_check(F.p2917))).f_kind == v839)) {
{ rt_int rv6539 = 1;
return rv6539; }
}
if ((((*(yR104 *)rt_nil_check(F.p2917))).f_kind == v827)) {
if ((!((((((*(yR104 *)rt_nil_check(F.p2918))).f_kind == v806)) || ((((*(yR104 *)rt_nil_check(F.p2918))).f_kind == v827)))))) {
{ rt_int rv6541 = 0;
return rv6541; }
}
{ rt_int rv6542 = yr2398_Identical(((*(yR104 *)rt_nil_check(F.p2917))).f_elem, ((*(yR104 *)rt_nil_check(F.p2918))).f_elem);
return rv6542; }
}
{ rt_int rv6543 = yr2398_Identical(F.p2917, F.p2918);
return rv6543; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2923_CallCode(void * a_p2924, rt_int a_p2925, rt_int a_p2926, rt_int a_p2927) {
struct yf2928 F;
memset((void *)&F, 0, sizeof F);
F.p2924 = a_p2924;
F.p2925 = a_p2925;
F.p2926 = a_p2926;
F.p2927 = a_p2927;
F.v6550 = ((*(yR119 *)rt_nil_check(F.p2924))).f_params;
F.v6552 = rt_range(rt_add(F.p2925, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6556 = 1;
F.v6559 = INT64_C(0);
F.v6562 = INT64_C(0);
F.v6565 = INT64_C(0);
F.v6568 = INT64_C(0);
F.v6571 = INT64_C(0);
if ((!(F.p2926 == ((*(yR119 *)rt_nil_check(F.p2924))).f_nparams))) {
yr1152_FailN(F.p2927, ((*(yR119 *)rt_nil_check(F.p2924))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
yr1006_SB();
yr1024_ST(((*(yR119 *)rt_nil_check(F.p2924))).f_cname);
yr1017_SA(y_str("(", 1));
if ((((*(yR119 *)rt_nil_check(F.p2924))).f_level > INT64_C(1))) {
yr1024_ST(yr2251_FramePtr(rt_range(rt_sub(((*(yR119 *)rt_nil_check(F.p2924))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v6556 = 0;
}
while ((!(F.v6550 == ((void *)0)))) {
if ((!F.v6556)) {
yr1017_SA(y_str(", ", 2));
}
F.v6556 = 0;
if ((!yr2878_Fits(((*(yR114 *)rt_nil_check(F.v6550))).f_rep, ((void * *)(v1465).p)[y_ix1(v1465, F.v6552)]))) {
v911 = 0;
yr2363_TypeClash(((*(yR99 *)rt_nil_check(((void * *)(v1476).p)[y_ix1(v1476, F.v6552)]))).f_line, ((*(yR114 *)rt_nil_check(F.v6550))).f_rep, ((void * *)(v1465).p)[y_ix1(v1465, F.v6552)]);
}
yr2908_CheckUnresolved(((*(yR114 *)rt_nil_check(F.v6550))).f_rep, ((void * *)(v1465).p)[y_ix1(v1465, F.v6552)], ((*(yR99 *)rt_nil_check(((void * *)(v1476).p)[y_ix1(v1476, F.v6552)]))).f_line);
if ((((*(yR114 *)rt_nil_check(F.v6550))).f_cls == v881)) {
yr1024_ST(yr2712_Convert(((rt_int *)(v1454).p)[y_ix1(v1454, F.v6552)], ((*(yR114 *)rt_nil_check(F.v6550))).f_rep, ((void * *)(v1465).p)[y_ix1(v1465, F.v6552)]));
} else {
if ((!yr2740_IsVariable(((void * *)(v1476).p)[y_ix1(v1476, F.v6552)]))) {
v911 = 0;
yr1152_FailN(((*(yR99 *)rt_nil_check(((void * *)(v1476).p)[y_ix1(v1476, F.v6552)]))).f_line, ((*(yR114 *)rt_nil_check(F.v6550))).f_name, y_str(": the actual of a VAR or OUT parameter must be a variable", 57));
}
yr2746_CheckPure(((void * *)(v1476).p)[y_ix1(v1476, F.v6552)]);
if (yr2916_SameAsFormal(((*(yR114 *)rt_nil_check(F.v6550))).f_rep, ((void * *)(v1465).p)[y_ix1(v1465, F.v6552)])) {
yr1017_SA(y_str("&", 1));
yr1024_ST(((rt_int *)(v1454).p)[y_ix1(v1454, F.v6552)]);
} else if ((((*(yR114 *)rt_nil_check(F.v6550))).f_cls == v887)) {
yr1152_FailN(((*(yR99 *)rt_nil_check(((void * *)(v1476).p)[y_ix1(v1476, F.v6552)]))).f_line, ((*(yR114 *)rt_nil_check(F.v6550))).f_name, y_str(": a VAR actual has the representation of its formal (VII.G, X.A.2)", 66));
} else {
F.v6565 = yr1166_Fresh(y_str("yo", 2));
F.v6559 = yr3102_Join(F.v6559, yr3102_Join(yr2338_CType(((*(yR114 *)rt_nil_check(F.v6550))).f_rep), yr1041_T(y_str(" ", 1)), F.v6565), yr1041_T(y_str(";", 1)));
if ((((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v6550))).f_rep))).f_kind == v827)) {
F.v6559 = yr3102_Join(F.v6559, yr3102_Join(yr1041_T(y_str(" ", 1)), F.v6565, yr1041_T(y_str(" = y_like(", 10))), yr3102_Join(((rt_int *)(v1454).p)[y_ix1(v1454, F.v6552)], yr3102_Join(yr1041_T(y_str(", ", 2)), yr2932_Num(((*(yR104 *)rt_nil_check(((void * *)(v1465).p)[y_ix1(v1465, F.v6552)]))).f_nidx), yr1041_T(y_str(", ", 2))), yr3102_Join(yr2344_DescOf(((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v6550))).f_rep))).f_elem), yr1041_T(y_str(");", 2)), INT64_C(0))));
} else if (yr2313_Deep(((*(yR114 *)rt_nil_check(F.v6550))).f_rep)) {
F.v6559 = yr3102_Join(F.v6559, yr3102_Join(yr1041_T(y_str(" y_init(", 8)), yr2344_DescOf(((*(yR114 *)rt_nil_check(F.v6550))).f_rep), yr1041_T(y_str(", &", 3))), yr3102_Join(F.v6565, yr1041_T(y_str(");", 2)), INT64_C(0)));
}
F.v6562 = yr3102_Join(F.v6562, yr1041_T(y_str(" ", 1)), yr2720_StoreText(((rt_int *)(v1454).p)[y_ix1(v1454, F.v6552)], ((void * *)(v1465).p)[y_ix1(v1465, F.v6552)], F.v6565, ((*(yR114 *)rt_nil_check(F.v6550))).f_rep, ((*(yR99 *)rt_nil_check(((void * *)(v1476).p)[y_ix1(v1476, F.v6552)]))).f_line));
yr1017_SA(y_str("&", 1));
yr1024_ST(F.v6565);
}
}
F.v6552 = rt_range(rt_add(F.v6552, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6550 = ((*(yR114 *)rt_nil_check(F.v6550))).f_next;
}
yr1017_SA(y_str(")", 1));
v1478 = F.p2925;
F.v6568 = yr1036_SE();
if ((F.v6559 == INT64_C(0))) {
{ rt_int rv6605 = F.v6568;
return rv6605; }
}
yr1006_SB();
yr1017_SA(y_str("({ ", 3));
yr1024_ST(F.v6559);
if ((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.p2924))).f_ret))).f_kind == v836)) {
yr1017_SA(y_str(" ", 1));
yr1024_ST(F.v6568);
yr1017_SA(y_str(";", 1));
yr1024_ST(F.v6562);
yr1017_SA(y_str(" })", 3));
} else {
F.v6571 = yr1166_Fresh(y_str("yv", 2));
yr1017_SA(y_str(" ", 1));
yr1024_ST(yr2338_CType(((*(yR119 *)rt_nil_check(F.p2924))).f_ret));
yr1017_SA(y_str(" ", 1));
yr1024_ST(F.v6571);
yr1017_SA(y_str(" = ", 3));
yr1024_ST(F.v6568);
yr1017_SA(y_str(";", 1));
yr1024_ST(F.v6562);
yr1017_SA(y_str(" ", 1));
yr1024_ST(F.v6571);
yr1017_SA(y_str("; })", 4));
}
{ rt_int rv6617 = yr1036_SE();
return rv6617; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2932_Num(rt_int a_p2933) {
struct yf2934 F;
memset((void *)&F, 0, sizeof F);
F.p2933 = a_p2933;
yr1006_SB();
yr1030_SI(F.p2933);
{ rt_int rv6620 = yr1036_SE();
return rv6620; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2938_UserOp(void * a_p2939, rt_int a_p2940, void * a_p2941, void * a_p2942, rt_int * a_p2943, void * * a_p2944) {
struct yf2945 F;
memset((void *)&F, 0, sizeof F);
F.p2939 = a_p2939;
F.p2940 = a_p2940;
F.p2941 = a_p2941;
F.p2942 = a_p2942;
F.p2943_o = a_p2943;
F.p2944_o = a_p2944;
F.v6629 = yr2172_Find(F.p2940);
if ((F.v6629 == ((void *)0))) {
{ rt_int rv6637 = 0;
(*F.p2943_o) = F.p2943;
(*F.p2944_o) = F.p2944;
return rv6637; }
}
F.v6629 = yr2270_Real(F.v6629);
if ((!(((*(yR119 *)rt_nil_check(F.v6629))).f_kind == v860))) {
{ rt_int rv6639 = 0;
(*F.p2943_o) = F.p2943;
(*F.p2944_o) = F.p2944;
return rv6639; }
}
((*(yR99 *)rt_nil_check(F.p2941))).f_next = F.p2942;
if ((!(F.p2942 == ((void *)0)))) {
((*(yR99 *)rt_nil_check(F.p2942))).f_next = ((void *)0);
}
yr2899_CompileArgs(F.p2941, ((void *)0), &F.v6633, &F.v6635);
F.v6631 = yr2885_Choose(F.v6629, F.v6633, F.v6635);
if ((F.v6631 == ((void *)0))) {
v1478 = F.v6633;
if (yr2893_HidesStandard(F.v6629)) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2939))).f_line, F.p2940, y_str(": no definition takes operands of these types", 45));
}
{ rt_int rv6642 = 0;
(*F.p2943_o) = F.p2943;
(*F.p2944_o) = F.p2944;
return rv6642; }
}
yr2949_NoteCall(F.v6631, ((*(yR99 *)rt_nil_check(F.p2939))).f_line);
F.p2943 = yr2923_CallCode(F.v6631, F.v6633, F.v6635, ((*(yR99 *)rt_nil_check(F.p2939))).f_line);
F.p2944 = ((*(yR119 *)rt_nil_check(F.v6631))).f_ret;
{ rt_int rv6644 = 1;
(*F.p2943_o) = F.p2943;
(*F.p2944_o) = F.p2944;
return rv6644; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2949_NoteCall(void * a_p2950, rt_int a_p2951) {
struct yf2952 F;
memset((void *)&F, 0, sizeof F);
F.p2950 = a_p2950;
F.p2951 = a_p2951;
if ((v1567 == ((void *)0))) {
return;
}
F.v6649 = yr1828_NewNode(v653, F.p2951);
((*(yR99 *)rt_nil_check(F.v6649))).f_sym = F.p2950;
((*(yR99 *)rt_nil_check(F.v6649))).f_next = ((*(yR119 *)rt_nil_check(v1567))).f_calls;
((*(yR119 *)rt_nil_check(v1567))).f_calls = F.v6649;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2956_UserAssign(rt_int a_p2957, void * a_p2958, rt_int a_p2959, void * a_p2960, rt_int a_p2961) {
struct yf2962 F;
memset((void *)&F, 0, sizeof F);
F.p2957 = a_p2957;
F.p2958 = a_p2958;
F.p2959 = a_p2959;
F.p2960 = a_p2960;
F.p2961 = a_p2961;
F.v6657 = yr2172_Find(rt_range(v515, INT64_C(0), INT64_C(4000000)));
if ((F.v6657 == ((void *)0))) {
{ rt_int rv6667 = INT64_C(0);
return rv6667; }
}
F.v6657 = yr2270_Real(F.v6657);
if ((!(((*(yR119 *)rt_nil_check(F.v6657))).f_kind == v860))) {
{ rt_int rv6669 = INT64_C(0);
return rv6669; }
}
F.v6659 = F.v6657;
while ((!(F.v6659 == ((void *)0)))) {
if ((((*(yR119 *)rt_nil_check(F.v6659))).f_nparams == INT64_C(2))) {
F.v6661 = ((*(yR119 *)rt_nil_check(F.v6659))).f_params;
F.v6663 = ((*(yR114 *)rt_nil_check(F.v6661))).f_next;
if ((((((!(((*(yR114 *)rt_nil_check(F.v6661))).f_cls == v881))) && ((((*(yR114 *)rt_nil_check(F.v6663))).f_cls == v881))) && yr2356_SameType(((*(yR114 *)rt_nil_check(F.v6661))).f_rep, F.p2958)) && yr2356_SameType(((*(yR114 *)rt_nil_check(F.v6663))).f_rep, F.p2960))) {
if ((v1567 == F.v6659)) {
{ rt_int rv6672 = INT64_C(0);
return rv6672; }
}
yr2949_NoteCall(F.v6659, F.p2961);
yr1006_SB();
if (yr2398_Identical(((*(yR114 *)rt_nil_check(F.v6661))).f_rep, F.p2958)) {
yr1024_ST(((*(yR119 *)rt_nil_check(F.v6659))).f_cname);
yr1017_SA(y_str("(", 1));
if ((((*(yR119 *)rt_nil_check(F.v6659))).f_level > INT64_C(1))) {
yr1024_ST(yr2251_FramePtr(rt_range(rt_sub(((*(yR119 *)rt_nil_check(F.v6659))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr1017_SA(y_str(", ", 2));
}
yr1017_SA(y_str("&", 1));
yr1024_ST(F.p2957);
} else {
F.v6665 = yr1166_Fresh(y_str("yo", 2));
yr1017_SA(y_str("{ ", 2));
yr1024_ST(yr2338_CType(((*(yR114 *)rt_nil_check(F.v6661))).f_rep));
yr1017_SA(y_str(" ", 1));
yr1024_ST(F.v6665);
yr1017_SA(y_str(";", 1));
if (yr2313_Deep(((*(yR114 *)rt_nil_check(F.v6661))).f_rep)) {
yr1017_SA(y_str(" y_init(", 8));
yr1024_ST(yr2344_DescOf(((*(yR114 *)rt_nil_check(F.v6661))).f_rep));
yr1017_SA(y_str(", &", 3));
yr1024_ST(F.v6665);
yr1017_SA(y_str(");", 2));
}
yr1017_SA(y_str(" ", 1));
yr1024_ST(((*(yR119 *)rt_nil_check(F.v6659))).f_cname);
yr1017_SA(y_str("(", 1));
if ((((*(yR119 *)rt_nil_check(F.v6659))).f_level > INT64_C(1))) {
yr1024_ST(yr2251_FramePtr(rt_range(rt_sub(((*(yR119 *)rt_nil_check(F.v6659))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr1017_SA(y_str(", ", 2));
}
yr1017_SA(y_str("&", 1));
yr1024_ST(F.v6665);
}
yr1017_SA(y_str(", ", 2));
yr1024_ST(yr2712_Convert(F.p2959, ((*(yR114 *)rt_nil_check(F.v6663))).f_rep, F.p2960));
yr1017_SA(y_str(");", 2));
if ((!yr2398_Identical(((*(yR114 *)rt_nil_check(F.v6661))).f_rep, F.p2958))) {
yr1017_SA(y_str(" ", 1));
yr1024_ST(yr2720_StoreText(F.p2957, F.p2958, F.v6665, ((*(yR114 *)rt_nil_check(F.v6661))).f_rep, F.p2961));
yr1017_SA(y_str(" }", 2));
}
{ rt_int rv6697 = yr1036_SE();
return rv6697; }
}
}
F.v6659 = ((*(yR119 *)rt_nil_check(F.v6659))).f_alt;
}
{ rt_int rv6699 = INT64_C(0);
return rv6699; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2966_Assign(rt_int a_p2967, void * a_p2968, rt_int a_p2969, void * a_p2970, rt_int a_p2971) {
struct yf2972 F;
memset((void *)&F, 0, sizeof F);
F.p2967 = a_p2967;
F.p2968 = a_p2968;
F.p2969 = a_p2969;
F.p2970 = a_p2970;
F.p2971 = a_p2971;
F.v6707 = yr2956_UserAssign(F.p2967, F.p2968, F.p2969, F.p2970, F.p2971);
if ((!(F.v6707 == INT64_C(0)))) {
yr1112_Emit(F.v6707);
} else {
yr2730_Store(F.p2967, F.p2968, F.p2969, F.p2970, F.p2971);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2976_CallExpr(void * a_p2977, void * a_p2978, rt_int a_p2979, rt_int * a_p2980, void * * a_p2981) {
struct yf2982 F;
memset((void *)&F, 0, sizeof F);
F.p2977 = a_p2977;
F.p2978 = a_p2978;
F.p2979 = a_p2979;
F.p2980_o = a_p2980;
F.p2981_o = a_p2981;
F.v6716 = yr2270_Real(yr2184_Lookup(((*(yR99 *)rt_nil_check(F.p2977))).f_name, ((*(yR99 *)rt_nil_check(F.p2977))).f_line));
if ((((*(yR119 *)rt_nil_check(F.v6716))).f_kind == v875)) {
yr3472_StdCall(((*(yR119 *)rt_nil_check(F.v6716))).f_mval, F.p2977, F.p2979, &F.p2980, &F.p2981);
(*F.p2980_o) = F.p2980;
(*F.p2981_o) = F.p2981;
return;
}
if ((((((*(yR119 *)rt_nil_check(F.v6716))).f_kind == v851)) || ((((*(yR119 *)rt_nil_check(F.v6716))).f_kind == v854)))) {
if (F.p2979) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2977))).f_line, y_str("a value is not a statement", 26));
}
yr2986_Denote(((*(yR119 *)rt_nil_check(F.v6716))).f_rep, F.p2977, &F.p2980, &F.p2981);
(*F.p2980_o) = F.p2980;
(*F.p2981_o) = F.p2981;
return;
}
if ((!(((*(yR119 *)rt_nil_check(F.v6716))).f_kind == v860))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2977))).f_line, ((*(yR99 *)rt_nil_check(F.p2977))).f_name, y_str(" is not a routine", 17));
}
if ((((*(yR119 *)rt_nil_check(F.v6716))).f_alt == ((void *)0))) {
yr2899_CompileArgs(((*(yR99 *)rt_nil_check(F.p2977))).f_a, F.v6716, &F.v6720, &F.v6722);
F.v6718 = F.v6716;
} else {
yr2899_CompileArgs(((*(yR99 *)rt_nil_check(F.p2977))).f_a, ((void *)0), &F.v6720, &F.v6722);
F.v6718 = yr2885_Choose(F.v6716, F.v6720, F.v6722);
if ((F.v6718 == ((void *)0))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2977))).f_line, ((*(yR99 *)rt_nil_check(F.p2977))).f_name, y_str(": no definition takes actuals of these types", 44));
}
}
yr2949_NoteCall(F.v6718, ((*(yR99 *)rt_nil_check(F.p2977))).f_line);
F.p2980 = yr2923_CallCode(F.v6718, F.v6720, F.v6722, ((*(yR99 *)rt_nil_check(F.p2977))).f_line);
F.p2981 = ((*(yR119 *)rt_nil_check(F.v6718))).f_ret;
if ((F.p2979 && ((!(((*(yR104 *)rt_nil_check(F.p2981))).f_kind == v836))))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2977))).f_line, ((*(yR99 *)rt_nil_check(F.p2977))).f_name, y_str(" returns a value: it is called in an expression (IX.A.2)", 56));
}
if (((!F.p2979) && ((((*(yR104 *)rt_nil_check(F.p2981))).f_kind == v836)))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2977))).f_line, ((*(yR99 *)rt_nil_check(F.p2977))).f_name, y_str(" returns no value", 17));
}
(*F.p2980_o) = F.p2980;
(*F.p2981_o) = F.p2981;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2986_Denote(void * a_p2987, void * a_p2988, rt_int * a_p2989, void * * a_p2990) {
struct yf2991 F;
memset((void *)&F, 0, sizeof F);
F.p2987 = a_p2987;
F.p2988 = a_p2988;
F.p2989_o = a_p2989;
F.p2990_o = a_p2990;
F.v6734 = ((*(yR99 *)rt_nil_check(F.p2988))).f_a;
F.v6754 = INT64_C(0);
F.v6761 = 1;
F.p2990 = F.p2987;
if (((*(yR104 *)rt_nil_check(F.p2987))).f_abstract) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2988))).f_line, ((*(yR104 *)rt_nil_check(F.p2987))).f_tname, y_str(" has no representation to denote a value of", 43));
}
if ((((*(yR104 *)rt_nil_check(F.p2987))).f_kind == v809)) {
if (((*(yR104 *)rt_nil_check(F.p2987))).f_opaque) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2988))).f_line, ((*(yR104 *)rt_nil_check(F.p2987))).f_tname, y_str(" is opaque here (X.B.3)", 23));
}
yr1006_SB();
yr1017_SA(y_str("((", 2));
yr1024_ST(((*(yR104 *)rt_nil_check(F.p2987))).f_cname);
yr1017_SA(y_str("){ ", 3));
F.v6740 = yr1036_SE();
F.v6736 = ((*(yR104 *)rt_nil_check(F.p2987))).f_fields;
while ((!(F.v6736 == ((void *)0)))) {
if ((((((*(yR109 *)rt_nil_check(F.v6736))).f_variant == INT64_C(0))) || ((((*(yR109 *)rt_nil_check(F.v6736))).f_variant == F.v6754)))) {
if ((F.v6734 == ((void *)0))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2988))).f_line, y_str("too few components in this record value", 39));
}
yr2779_Expr(F.v6734, ((*(yR109 *)rt_nil_check(F.v6736))).f_rep, &F.v6738, &F.v6744);
yr2371_CheckType(((*(yR99 *)rt_nil_check(F.v6734))).f_line, ((*(yR109 *)rt_nil_check(F.v6736))).f_rep, F.v6744);
if ((F.v6736 == ((*(yR104 *)rt_nil_check(F.p2987))).f_selector)) {
yr2631_Manifest(F.v6734, &F.v6752, &F.v6757);
if ((!F.v6752)) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.v6734))).f_line, y_str("the case-selection value is a manifest constant", 47));
}
F.v6754 = yr2995_VariantOf(F.p2987, F.v6757, ((*(yR99 *)rt_nil_check(F.v6734))).f_line);
}
yr1006_SB();
yr1024_ST(F.v6740);
if ((!F.v6761)) {
yr1017_SA(y_str(", ", 2));
}
F.v6761 = 0;
yr1017_SA(y_str(".f_", 3));
yr1024_ST(((*(yR109 *)rt_nil_check(F.v6736))).f_name);
yr1017_SA(y_str(" = ", 3));
yr1024_ST(yr2712_Convert(F.v6738, ((*(yR109 *)rt_nil_check(F.v6736))).f_rep, F.v6744));
F.v6740 = yr1036_SE();
F.v6734 = ((*(yR99 *)rt_nil_check(F.v6734))).f_next;
}
F.v6736 = ((*(yR109 *)rt_nil_check(F.v6736))).f_next;
}
if ((!(F.v6734 == ((void *)0)))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p2988))).f_line, y_str("too many components in this record value", 40));
}
yr1006_SB();
yr1024_ST(F.v6740);
yr1017_SA(y_str(" })", 3));
F.p2989 = yr1036_SE();
(*F.p2989_o) = F.p2989;
(*F.p2990_o) = F.p2990;
return;
}
if ((((*(yR104 *)rt_nil_check(F.p2987))).f_kind == v806)) {
F.v6746 = yr1843_Count(F.v6734);
F.v6740 = yr1166_Fresh(y_str("da", 2));
if ((F.v6746 == INT64_C(1))) {
yr2779_Expr(F.v6734, ((*(yR104 *)rt_nil_check(F.p2987))).f_elem, &F.v6738, &F.v6744);
yr2371_CheckType(((*(yR99 *)rt_nil_check(F.v6734))).f_line, ((*(yR104 *)rt_nil_check(F.p2987))).f_elem, F.v6744);
F.v6742 = yr1166_Fresh(y_str("dv", 2));
yr1006_SB();
yr1017_SA(y_str("({ ", 3));
yr1024_ST(yr2338_CType(((*(yR104 *)rt_nil_check(F.p2987))).f_elem));
yr1017_SA(y_str(" ", 1));
yr1024_ST(F.v6742);
yr1017_SA(y_str(" = ", 3));
yr1024_ST(yr2712_Convert(F.v6738, ((*(yR104 *)rt_nil_check(F.p2987))).f_elem, F.v6744));
yr1017_SA(y_str("; y_fill(", 9));
yr1024_ST(yr2344_DescOf(F.p2987));
yr1017_SA(y_str(", &", 3));
yr1024_ST(F.v6742);
yr1017_SA(y_str("); })", 5));
F.p2989 = yr1036_SE();
(*F.p2989_o) = F.p2989;
(*F.p2990_o) = F.p2990;
return;
}
yr1006_SB();
yr1017_SA(y_str("({ yarr ", 8));
yr1024_ST(F.v6740);
yr1017_SA(y_str("; y_init(", 9));
yr1024_ST(yr2344_DescOf(F.p2987));
yr1017_SA(y_str(", &", 3));
yr1024_ST(F.v6740);
yr1017_SA(y_str("); if (y_count(", 15));
yr1024_ST(F.v6740);
yr1017_SA(y_str(", ", 2));
yr1030_SI(((*(yR104 *)rt_nil_check(F.p2987))).f_nidx);
yr1017_SA(y_str(") != ", 5));
yr1030_SI(F.v6746);
yr1017_SA(y_str(") rt_raise_msg(RT_X_RANGE, ", 27));
yr1011_SC(34);
yr1017_SA(y_str("wrong number of components", 26));
yr1011_SC(34);
yr1017_SA(y_str(");", 2));
F.p2989 = yr1036_SE();
F.v6750 = INT64_C(0);
while ((!(F.v6734 == ((void *)0)))) {
yr2779_Expr(F.v6734, ((*(yR104 *)rt_nil_check(F.p2987))).f_elem, &F.v6738, &F.v6744);
yr2371_CheckType(((*(yR99 *)rt_nil_check(F.v6734))).f_line, ((*(yR104 *)rt_nil_check(F.p2987))).f_elem, F.v6744);
yr1006_SB();
yr1024_ST(F.p2989);
if (yr2313_Deep(((*(yR104 *)rt_nil_check(F.p2987))).f_elem)) {
yr1017_SA(y_str(" { ", 3));
yr1024_ST(yr2338_CType(((*(yR104 *)rt_nil_check(F.p2987))).f_elem));
yr1017_SA(y_str(" dv = ", 6));
yr1024_ST(F.v6738);
yr1017_SA(y_str("; y_copy(", 9));
yr1024_ST(yr2344_DescOf(((*(yR104 *)rt_nil_check(F.p2987))).f_elem));
yr1017_SA(y_str(", &((", 5));
yr1024_ST(yr2338_CType(((*(yR104 *)rt_nil_check(F.p2987))).f_elem));
yr1017_SA(y_str(" *)", 3));
yr1024_ST(F.v6740);
yr1017_SA(y_str(".p)[", 4));
yr1030_SI(F.v6750);
yr1017_SA(y_str("], &dv); }", 10));
} else {
yr1017_SA(y_str(" ((", 3));
yr1024_ST(yr2338_CType(((*(yR104 *)rt_nil_check(F.p2987))).f_elem));
yr1017_SA(y_str(" *)", 3));
yr1024_ST(F.v6740);
yr1017_SA(y_str(".p)[", 4));
yr1030_SI(F.v6750);
yr1017_SA(y_str("] = ", 4));
yr1024_ST(yr2712_Convert(F.v6738, ((*(yR104 *)rt_nil_check(F.p2987))).f_elem, F.v6744));
yr1017_SA(y_str(";", 1));
}
F.p2989 = yr1036_SE();
F.v6750 = rt_range(rt_add(F.v6750, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6734 = ((*(yR99 *)rt_nil_check(F.v6734))).f_next;
}
yr1006_SB();
yr1024_ST(F.p2989);
yr1017_SA(y_str(" ", 1));
yr1024_ST(F.v6740);
yr1017_SA(y_str("; })", 4));
F.p2989 = yr1036_SE();
(*F.p2989_o) = F.p2989;
(*F.p2990_o) = F.p2990;
return;
}
if ((((*(yR104 *)rt_nil_check(F.p2987))).f_kind == v818)) {
yr1006_SB();
yr1017_SA(y_str("y_set_new(", 10));
yr1024_ST(yr2419_LoText(((*(yR104 *)rt_nil_check(F.p2987))).f_elem));
yr1017_SA(y_str(", ", 2));
yr1024_ST(yr2425_HiText(((*(yR104 *)rt_nil_check(F.p2987))).f_elem));
yr1017_SA(y_str(")", 1));
F.p2989 = yr1036_SE();
while ((!(F.v6734 == ((void *)0)))) {
yr2779_Expr(F.v6734, ((*(yR104 *)rt_nil_check(F.p2987))).f_elem, &F.v6738, &F.v6744);
yr2371_CheckType(((*(yR99 *)rt_nil_check(F.v6734))).f_line, ((*(yR104 *)rt_nil_check(F.p2987))).f_elem, F.v6744);
F.p2989 = yr2829_Call2(y_str("y_set_add", 9), F.p2989, F.v6738);
F.v6734 = ((*(yR99 *)rt_nil_check(F.v6734))).f_next;
}
(*F.p2989_o) = F.p2989;
(*F.p2990_o) = F.p2990;
return;
}
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p2988))).f_line, ((*(yR104 *)rt_nil_check(F.p2987))).f_tname, y_str(" has no denotations of values", 29));
(*F.p2989_o) = F.p2989;
(*F.p2990_o) = F.p2990;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2995_VariantOf(void * a_p2996, rt_int a_p2997, rt_int a_p2998) {
struct yf2999 F;
memset((void *)&F, 0, sizeof F);
F.p2996 = a_p2996;
F.p2997 = a_p2997;
F.p2998 = a_p2998;
F.v6823 = ((*(yR104 *)rt_nil_check(F.p2996))).f_fields;
while ((!(F.v6823 == ((void *)0)))) {
if ((!(((*(yR109 *)rt_nil_check(F.v6823))).f_variant == INT64_C(0)))) {
F.v6825 = ((*(yR109 *)rt_nil_check(F.v6823))).f_labels;
while ((!(F.v6825 == ((void *)0)))) {
yr2631_Manifest(F.v6825, &F.v6827, &F.v6829);
if ((F.v6827 && ((F.v6829 == F.p2997)))) {
{ rt_int rv6831 = ((*(yR109 *)rt_nil_check(F.v6823))).f_variant;
return rv6831; }
}
F.v6825 = ((*(yR99 *)rt_nil_check(F.v6825))).f_next;
}
}
F.v6823 = ((*(yR109 *)rt_nil_check(F.v6823))).f_next;
}
{ rt_int rv6833 = INT64_C(-1);
return rv6833; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3003_Emit2(yarr a_p3005, rt_int a_p3006) {
struct yf3007 F;
memset((void *)&F, 0, sizeof F);
F.p3005 = a_p3005;
F.p3006 = a_p3006;
yr1006_SB();
yr1017_SA(F.p3005);
yr1024_ST(F.p3006);
F.v6838 = yr1036_SE();
yr1112_Emit(F.v6838);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3011_Emit3(yarr a_p3013, rt_int a_p3014, yarr a_p3016) {
struct yf3017 F;
memset((void *)&F, 0, sizeof F);
F.p3013 = a_p3013;
F.p3014 = a_p3014;
F.p3016 = a_p3016;
yr1006_SB();
yr1017_SA(F.p3013);
yr1024_ST(F.p3014);
yr1017_SA(F.p3016);
F.v6844 = yr1036_SE();
yr1112_Emit(F.v6844);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3021_PopTo(rt_int a_p3022) {
struct yf3023 F;
memset((void *)&F, 0, sizeof F);
F.p3022 = a_p3022;
if ((v1492 > F.p3022)) {
yr3011_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v1490).p)[y_ix1(v1490, rt_add(F.p3022, INT64_C(1)))], y_str(".prev;", 6));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3027_LeaveBlock(void) {
struct yf3028 F;
memset((void *)&F, 0, sizeof F);
if ((v1520 > INT64_C(0))) {
if ((!(((rt_int *)(v1507).p)[y_ix1(v1507, v1520)] == INT64_C(0)))) {
yr3011_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v1507).p)[y_ix1(v1507, v1520)], y_str(".prev;", 6));
}
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3032_RaiseCode(rt_int a_p3033) {
struct yf3034 F;
memset((void *)&F, 0, sizeof F);
F.p3033 = a_p3033;
yr1006_SB();
yr1017_SA(y_str("rt_raise(rt_exc(", 16));
yr1011_SC(34);
yr1024_ST(F.p3033);
yr1011_SC(34);
yr1017_SA(y_str("));", 3));
{ rt_int rv6862 = yr1036_SE();
return rv6862; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3038_BlockStatements(void * a_p3039) {
struct yf3040 F;
memset((void *)&F, 0, sizeof F);
F.p3039 = a_p3039;
F.v6878 = ((*(yR99 *)rt_nil_check(F.p3039))).f_a;
F.v6880 = INT64_C(0);
while ((!(F.v6878 == ((void *)0)))) {
if ((((((*(yR99 *)rt_nil_check(F.v6878))).f_kind == v629)) && ((F.v6880 == INT64_C(0))))) {
F.v6880 = yr1166_Fresh(y_str("xs", 2));
yr3011_Emit3(y_str("rt_frame *", 10), F.v6880, y_str(" = rt_xtop;", 11));
}
F.v6878 = ((*(yR99 *)rt_nil_check(F.v6878))).f_next;
}
if ((((*(yR99 *)rt_nil_check(F.p3039))).f_b == ((void *)0))) {
v1520 = rt_range(rt_add(v1520, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1507).p)[y_ix1(v1507, v1520)] = INT64_C(0);
((rt_int *)(v1518).p)[y_ix1(v1518, v1520)] = F.v6880;
yr3066_Statements(((*(yR99 *)rt_nil_check(F.p3039))).f_c);
v1520 = rt_range(rt_sub(v1520, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr3134_CheckLabels(((*(yR99 *)rt_nil_check(F.p3039))).f_a);
return;
}
v1596 = 1;
F.v6866 = yr1166_Fresh(y_str("xf", 2));
yr3011_Emit3(y_str("{ rt_frame ", 11), F.v6866, y_str(";", 1));
yr3011_Emit3(y_str("if (RT_TRY(", 11), F.v6866, y_str(")) {", 4));
v1492 = rt_range(rt_add(v1492, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1490).p)[y_ix1(v1490, v1492)] = F.v6866;
v1520 = rt_range(rt_add(v1520, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1507).p)[y_ix1(v1507, v1520)] = F.v6866;
((rt_int *)(v1518).p)[y_ix1(v1518, v1520)] = F.v6880;
yr3066_Statements(((*(yR99 *)rt_nil_check(F.p3039))).f_c);
v1520 = rt_range(rt_sub(v1520, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1492 = rt_range(rt_sub(v1492, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr3134_CheckLabels(((*(yR99 *)rt_nil_check(F.p3039))).f_a);
yr3011_Emit3(y_str("RT_POP(", 7), F.v6866, y_str(");", 2));
yr1118_EmitS(y_str("} else {", 8));
yr3011_Emit3(y_str("RT_POP(", 7), F.v6866, y_str(");", 2));
F.v6868 = yr1166_Fresh(y_str("xc", 2));
yr3011_Emit3(y_str("int ", 4), F.v6868, y_str(" = rt_xcur;", 11));
v1520 = rt_range(rt_add(v1520, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1507).p)[y_ix1(v1507, v1520)] = INT64_C(0);
((rt_int *)(v1518).p)[y_ix1(v1518, v1520)] = INT64_C(0);
v1534 = rt_range(rt_add(v1534, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1532).p)[y_ix1(v1532, v1534)] = F.v6868;
F.v6876 = 1;
F.v6872 = ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3039))).f_b))).f_a;
while ((!(F.v6872 == ((void *)0)))) {
yr1006_SB();
if (F.v6876) {
yr1017_SA(y_str("if (", 4));
} else {
yr1017_SA(y_str("} else if (", 11));
}
F.v6876 = 0;
F.v6874 = ((*(yR99 *)rt_nil_check(F.v6872))).f_a;
while ((!(F.v6874 == ((void *)0)))) {
yr1024_ST(F.v6868);
yr1017_SA(y_str(" == rt_exc(", 11));
yr1011_SC(34);
yr1024_ST(((*(yR99 *)rt_nil_check(F.v6874))).f_name);
yr1011_SC(34);
yr1017_SA(y_str(")", 1));
if ((!(((*(yR99 *)rt_nil_check(F.v6874))).f_next == ((void *)0)))) {
yr1017_SA(y_str(" || ", 4));
}
F.v6874 = ((*(yR99 *)rt_nil_check(F.v6874))).f_next;
}
yr1017_SA(y_str(") {", 3));
F.v6870 = yr1036_SE();
yr1112_Emit(F.v6870);
yr3066_Statements(((*(yR99 *)rt_nil_check(F.v6872))).f_b);
F.v6872 = ((*(yR99 *)rt_nil_check(F.v6872))).f_next;
}
if ((!F.v6876)) {
yr1118_EmitS(y_str("} else {", 8));
}
if ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3039))).f_b))).f_flag == INT64_C(1))) {
yr3066_Statements(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3039))).f_b))).f_b);
} else {
yr3011_Emit3(y_str("rt_raise(", 9), F.v6868, y_str(");", 2));
}
if ((!F.v6876)) {
yr1118_EmitS(y_str("}", 1));
}
v1534 = rt_range(rt_sub(v1534, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1520 = rt_range(rt_sub(v1520, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1118_EmitS(y_str("}}", 2));
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3044_SameDesig(void * a_p3045, void * a_p3046) {
struct yf3047 F;
memset((void *)&F, 0, sizeof F);
F.p3045 = a_p3045;
F.p3046 = a_p3046;
if ((((*(yR99 *)rt_nil_check(F.p3045))).f_kind == v785)) {
{ rt_int rv6954 = yr3044_SameDesig(((*(yR99 *)rt_nil_check(F.p3045))).f_a, F.p3046);
return rv6954; }
}
if ((((*(yR99 *)rt_nil_check(F.p3046))).f_kind == v785)) {
{ rt_int rv6955 = yr3044_SameDesig(F.p3045, ((*(yR99 *)rt_nil_check(F.p3046))).f_a);
return rv6955; }
}
if ((!(((*(yR99 *)rt_nil_check(F.p3045))).f_kind == ((*(yR99 *)rt_nil_check(F.p3046))).f_kind))) {
{ rt_int rv6957 = 0;
return rv6957; }
}
if ((((*(yR99 *)rt_nil_check(F.p3045))).f_kind == v761)) {
{ rt_int rv6958 = ((((((*(yR99 *)rt_nil_check(F.p3045))).f_name == ((*(yR99 *)rt_nil_check(F.p3046))).f_name)) && ((((*(yR99 *)rt_nil_check(F.p3045))).f_d == ((void *)0)))) && ((((*(yR99 *)rt_nil_check(F.p3046))).f_d == ((void *)0))));
return rv6958; }
}
if ((((*(yR99 *)rt_nil_check(F.p3045))).f_kind == v767)) {
{ rt_int rv6959 = (((((*(yR99 *)rt_nil_check(F.p3045))).f_name == ((*(yR99 *)rt_nil_check(F.p3046))).f_name)) && yr3044_SameDesig(((*(yR99 *)rt_nil_check(F.p3045))).f_a, ((*(yR99 *)rt_nil_check(F.p3046))).f_a));
return rv6959; }
}
if ((((*(yR99 *)rt_nil_check(F.p3045))).f_kind == v773)) {
{ rt_int rv6960 = yr3044_SameDesig(((*(yR99 *)rt_nil_check(F.p3045))).f_a, ((*(yR99 *)rt_nil_check(F.p3046))).f_a);
return rv6960; }
}
if ((((*(yR99 *)rt_nil_check(F.p3045))).f_kind == v770)) {
if ((!yr3044_SameDesig(((*(yR99 *)rt_nil_check(F.p3045))).f_a, ((*(yR99 *)rt_nil_check(F.p3046))).f_a))) {
{ rt_int rv6962 = 0;
return rv6962; }
}
F.v6943 = ((*(yR99 *)rt_nil_check(F.p3045))).f_b;
F.v6945 = ((*(yR99 *)rt_nil_check(F.p3046))).f_b;
while ((((!(F.v6943 == ((void *)0)))) && ((!(F.v6945 == ((void *)0)))))) {
yr2631_Manifest(F.v6943, &F.v6947, &F.v6951);
yr2631_Manifest(F.v6945, &F.v6949, &F.v6953);
if ((F.v6947 && F.v6949)) {
if ((!(F.v6951 == F.v6953))) {
{ rt_int rv6964 = 0;
return rv6964; }
}
} else if ((!yr3044_SameDesig(F.v6943, F.v6945))) {
{ rt_int rv6966 = 0;
return rv6966; }
}
F.v6943 = ((*(yR99 *)rt_nil_check(F.v6943))).f_next;
F.v6945 = ((*(yR99 *)rt_nil_check(F.v6945))).f_next;
}
{ rt_int rv6967 = (((F.v6943 == ((void *)0))) && ((F.v6945 == ((void *)0))));
return rv6967; }
}
{ rt_int rv6969 = 0;
return rv6969; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3051_CheckVariantSelected(void * a_p3052, void * a_p3053, void * a_p3054) {
struct yf3055 F;
memset((void *)&F, 0, sizeof F);
F.p3052 = a_p3052;
F.p3053 = a_p3053;
F.p3054 = a_p3054;
F.v6975 = v1582;
while ((F.v6975 > INT64_C(0))) {
F.v6977 = ((void * *)(v1578).p)[y_ix1(v1578, F.v6975)];
while ((((*(yR99 *)rt_nil_check(F.v6977))).f_kind == v785)) {
F.v6977 = ((*(yR99 *)rt_nil_check(F.v6977))).f_a;
}
if (((((((*(yR99 *)rt_nil_check(F.v6977))).f_kind == v767)) && ((((*(yR99 *)rt_nil_check(F.v6977))).f_name == ((*(yR109 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p3053))).f_selector))).f_name))) && yr3044_SameDesig(((*(yR99 *)rt_nil_check(F.v6977))).f_a, ((*(yR99 *)rt_nil_check(F.p3052))).f_a))) {
F.v6979 = ((void * *)(v1580).p)[y_ix1(v1580, F.v6975)];
if ((F.v6979 == ((void *)0))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3052))).f_line, ((*(yR99 *)rt_nil_check(F.p3052))).f_name, y_str(" is a component of a variant: the ELSE of a SELECT does not say which variant the record has (VIII.B)", 101));
}
while ((!(F.v6979 == ((void *)0)))) {
F.v6983 = yr3078_Label(F.v6979, ((*(yR109 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p3053))).f_selector))).f_rep);
F.v6989 = 0;
F.v6981 = ((*(yR109 *)rt_nil_check(F.p3054))).f_labels;
while ((!(F.v6981 == ((void *)0)))) {
yr2631_Manifest(F.v6981, &F.v6987, &F.v6985);
if ((F.v6987 && ((F.v6985 == F.v6983)))) {
F.v6989 = 1;
}
F.v6981 = ((*(yR99 *)rt_nil_check(F.v6981))).f_next;
}
if ((!F.v6989)) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3052))).f_line, ((*(yR99 *)rt_nil_check(F.p3052))).f_name, y_str(" is not a component of the variant this CASE selects (VIII.B)", 61));
}
F.v6979 = ((*(yR99 *)rt_nil_check(F.v6979))).f_next;
}
return;
}
F.v6975 = rt_range(rt_sub(F.v6975, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3052))).f_line, ((*(yR99 *)rt_nil_check(F.p3052))).f_name, y_str(" is a component of a variant: it is used inside a SELECT on the case-selection component (VIII.B)", 97));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3059_CheckCaseLabels(void * a_p3060, void * a_p3061) {
struct yf3062 F;
memset((void *)&F, 0, sizeof F);
F.p3060 = a_p3060;
F.p3061 = a_p3061;
F.v7002 = ((*(yR99 *)rt_nil_check(F.p3060))).f_b;
F.v7004 = ((*(yR99 *)rt_nil_check(F.p3060))).f_b;
F.v7006 = INT64_C(0);
F.v7009 = INT64_C(0);
while ((!(F.v7002 == ((void *)0)))) {
F.v7004 = ((*(yR99 *)rt_nil_check(F.v7002))).f_a;
while ((!(F.v7004 == ((void *)0)))) {
F.v7009 = yr3078_Label(F.v7004, F.p3061);
F.lo7014 = INT64_C(1);
F.hi7015 = F.v7006;
{ rt_int hi7019 = F.hi7015;
for (rt_int i7018 = F.lo7014; i7018 <= hi7019; i7018++) { F.c_7017 = i7018;
if ((((rt_int *)(v1594).p)[y_ix1(v1594, F.c_7017)] == F.v7009)) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.v7004))).f_line, y_str("a CASE label appears twice in this SELECT (IX.B.1)", 50));
}
if (i7018 == hi7019) break;
}}
if ((F.v7006 < INT64_C(4096))) {
F.v7006 = rt_range(rt_add(F.v7006, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1594).p)[y_ix1(v1594, F.v7006)] = F.v7009;
}
F.v7004 = ((*(yR99 *)rt_nil_check(F.v7004))).f_next;
}
F.v7002 = ((*(yR99 *)rt_nil_check(F.v7002))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3066_Statements(void * a_p3067) {
struct yf3068 F;
memset((void *)&F, 0, sizeof F);
F.p3067 = a_p3067;
F.v7027 = F.p3067;
while ((!(F.v7027 == ((void *)0)))) {
yr3090_Statement(F.v7027);
F.v7027 = ((*(yR99 *)rt_nil_check(F.v7027))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3072_Cond(void * a_p3073) {
struct yf3074 F;
memset((void *)&F, 0, sizeof F);
F.p3073 = a_p3073;
yr2779_Expr(F.p3073, v1310, &F.v7031, &F.v7033);
yr2371_CheckType(((*(yR99 *)rt_nil_check(F.p3073))).f_line, v1310, F.v7033);
{ rt_int rv7034 = F.v7031;
return rv7034; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3078_Label(void * a_p3079, void * a_p3080) {
struct yf3081 F;
memset((void *)&F, 0, sizeof F);
F.p3079 = a_p3079;
F.p3080 = a_p3080;
if (((((((*(yR99 *)rt_nil_check(F.p3079))).f_kind == v761)) && ((((*(yR99 *)rt_nil_check(F.p3079))).f_d == ((void *)0)))) && ((((*(yR104 *)rt_nil_check(F.p3080))).f_kind == v800)))) {
F.v7043 = yr2230_FindLit(((*(yR99 *)rt_nil_check(F.p3079))).f_name, F.p3080);
if ((!(F.v7043 == ((void *)0)))) {
{ rt_int rv7048 = ((*(yR119 *)rt_nil_check(yr2270_Real(F.v7043)))).f_mval;
return rv7048; }
}
}
yr2779_Expr(F.p3079, F.p3080, &F.v7047, &F.v7045);
yr2371_CheckType(((*(yR99 *)rt_nil_check(F.p3079))).f_line, F.p3080, F.v7045);
yr2631_Manifest(F.p3079, &F.v7039, &F.v7041);
if ((!F.v7039)) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3079))).f_line, y_str("a CASE label is a manifest constant (IX.B.1)", 44));
}
{ rt_int rv7050 = F.v7041;
return rv7050; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3085_CopyOut(void) {
struct yf3086 F;
memset((void *)&F, 0, sizeof F);
if ((v1567 == ((void *)0))) {
return;
}
F.v7053 = ((*(yR119 *)rt_nil_check(v1567))).f_params;
while ((!(F.v7053 == ((void *)0)))) {
if ((((*(yR114 *)rt_nil_check(F.v7053))).f_cls == v884)) {
yr1006_SB();
yr1017_SA(y_str("(*F.", 4));
yr1024_ST(((*(yR114 *)rt_nil_check(F.v7053))).f_cname);
yr1017_SA(y_str("_o)", 3));
F.v7055 = yr1036_SE();
yr2966_Assign(F.v7055, ((*(yR114 *)rt_nil_check(F.v7053))).f_rep, yr2244_Path(v1245, ((*(yR114 *)rt_nil_check(F.v7053))).f_cname), ((*(yR114 *)rt_nil_check(F.v7053))).f_rep, INT64_C(0));
}
F.v7053 = ((*(yR114 *)rt_nil_check(F.v7053))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3090_Statement(void * a_p3091) {
struct yf3092 F;
memset((void *)&F, 0, sizeof F);
F.p3091 = a_p3091;
F.v7062 = ((*(yR99 *)rt_nil_check(F.p3091))).f_kind;
v980 = ((*(yR99 *)rt_nil_check(F.p3091))).f_line;
if ((!(((*(yR99 *)rt_nil_check(F.p3091))).f_text == INT64_C(0)))) {
yr3122_PlaceLabel(F.p3091);
}
if ((F.v7062 == v698)) {
yr2752_LValue(((*(yR99 *)rt_nil_check(F.p3091))).f_a, &F.v7064, &F.v7076);
yr2746_CheckPure(((*(yR99 *)rt_nil_check(F.p3091))).f_a);
if ((((((*(yR104 *)rt_nil_check(F.v7076))).f_kind == v821)) || yr2326_HoldsSignal(F.v7076))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3091))).f_line, y_str("assignment is not defined for signals (VI.A.1.d)", 48));
}
if (yr2332_NonAssignable(F.v7076)) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3091))).f_line, y_str("assignment is not defined for files and semaphores, nor what holds them (VII.B)", 79));
}
yr2779_Expr(((*(yR99 *)rt_nil_check(F.p3091))).f_b, F.v7076, &F.v7066, &F.v7078);
F.v7068 = yr2956_UserAssign(F.v7064, F.v7076, F.v7066, F.v7078, ((*(yR99 *)rt_nil_check(F.p3091))).f_line);
if ((!(F.v7068 == INT64_C(0)))) {
yr1112_Emit(F.v7068);
} else {
if ((((*(yR104 *)rt_nil_check(F.v7076))).f_opaque && (((rt_mod(((*(yR104 *)rt_nil_check(F.v7076))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3091))).f_line, ((*(yR104 *)rt_nil_check(F.v7076))).f_tname, y_str(" is opaque here: := is not exported (X.B.3)", 43));
}
yr2730_Store(F.v7064, F.v7076, F.v7066, F.v7078, ((*(yR99 *)rt_nil_check(F.p3091))).f_line);
}
} else if ((F.v7062 == v701)) {
F.v7092 = yr2172_Find(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3091))).f_a))).f_name);
if ((!(F.v7092 == ((void *)0)))) {
F.v7092 = yr2270_Real(F.v7092);
}
if ((((!(F.v7092 == ((void *)0)))) && ((((*(yR119 *)rt_nil_check(F.v7092))).f_kind == v869)))) {
yr3357_Activate(((*(yR99 *)rt_nil_check(F.p3091))).f_a, F.v7092);
} else {
yr2976_CallExpr(((*(yR99 *)rt_nil_check(F.p3091))).f_a, ((void *)0), 1, &F.v7064, &F.v7076);
yr3003_Emit2(y_str("", 0), F.v7064);
yr1006_SB();
yr1024_ST(F.v7064);
yr1017_SA(y_str(";", 1));
F.v7068 = yr1036_SE();
((*(yR129 *)rt_nil_check((v976).f_tail))).f_t = F.v7068;
}
} else if ((F.v7062 == v722)) {
F.v7084 = 1;
F.v7080 = ((*(yR99 *)rt_nil_check(F.p3091))).f_a;
while ((!(F.v7080 == ((void *)0)))) {
F.v7064 = yr3072_Cond(((*(yR99 *)rt_nil_check(F.v7080))).f_a);
if (F.v7084) {
yr3011_Emit3(y_str("if (", 4), F.v7064, y_str(") {", 3));
} else {
yr3011_Emit3(y_str("} else if (", 11), F.v7064, y_str(") {", 3));
}
F.v7084 = 0;
yr3066_Statements(((*(yR99 *)rt_nil_check(F.v7080))).f_b);
F.v7080 = ((*(yR99 *)rt_nil_check(F.v7080))).f_next;
}
if ((((*(yR99 *)rt_nil_check(F.p3091))).f_flag == INT64_C(1))) {
yr1118_EmitS(y_str("} else {", 8));
yr3066_Statements(((*(yR99 *)rt_nil_check(F.p3091))).f_b);
}
yr1118_EmitS(y_str("}", 1));
} else if ((F.v7062 == v728)) {
F.v7064 = yr3072_Cond(((*(yR99 *)rt_nil_check(F.p3091))).f_a);
yr3011_Emit3(y_str("while (", 7), F.v7064, y_str(") {", 3));
yr3066_Statements(((*(yR99 *)rt_nil_check(F.p3091))).f_b);
yr1118_EmitS(y_str("}", 1));
} else if ((F.v7062 == v734)) {
F.v7070 = yr1166_Fresh(y_str("yl_", 3));
v1561 = rt_range(rt_add(v1561, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1546).p)[y_ix1(v1546, v1561)] = ((*(yR99 *)rt_nil_check(F.p3091))).f_name;
((rt_int *)(v1548).p)[y_ix1(v1548, v1561)] = F.v7070;
((rt_int *)(v1559).p)[y_ix1(v1559, v1561)] = v1492;
yr1118_EmitS(y_str("for (;;) {", 10));
yr3066_Statements(((*(yR99 *)rt_nil_check(F.p3091))).f_b);
yr1118_EmitS(y_str("}", 1));
yr3011_Emit3(y_str("", 0), F.v7070, y_str(": ;", 3));
v1561 = rt_range(rt_sub(v1561, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v7062 == v710)) {
F.v7086 = 0;
F.v7088 = v1561;
while ((((F.v7088 > v1564)) && (!F.v7086))) {
if ((((rt_int *)(v1546).p)[y_ix1(v1546, F.v7088)] == ((*(yR99 *)rt_nil_check(F.p3091))).f_name)) {
F.v7086 = 1;
yr3021_PopTo(((rt_int *)(v1559).p)[y_ix1(v1559, F.v7088)]);
yr3011_Emit3(y_str("goto ", 5), ((rt_int *)(v1548).p)[y_ix1(v1548, F.v7088)], y_str(";", 1));
}
F.v7088 = rt_range(rt_sub(F.v7088, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((!F.v7086)) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3091))).f_line, ((*(yR99 *)rt_nil_check(F.p3091))).f_name, y_str(": EXIT names no LOOP around it here (IX.A.5)", 44));
}
} else if ((F.v7062 == v731)) {
yr3096_ForStatement(F.p3091);
} else if ((F.v7062 == v725)) {
yr2779_Expr(((*(yR99 *)rt_nil_check(F.p3091))).f_a, ((void *)0), &F.v7064, &F.v7076);
if ((!yr2289_IsDiscrete(F.v7076))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3091))).f_line, y_str("SELECT on a value that is not integer or scalar", 47));
}
yr3059_CheckCaseLabels(F.p3091, F.v7076);
yr3011_Emit3(y_str("switch (", 8), F.v7064, y_str(") {", 3));
F.v7080 = ((*(yR99 *)rt_nil_check(F.p3091))).f_b;
while ((!(F.v7080 == ((void *)0)))) {
F.v7082 = ((*(yR99 *)rt_nil_check(F.v7080))).f_a;
while ((!(F.v7082 == ((void *)0)))) {
F.v7090 = yr3078_Label(F.v7082, F.v7076);
yr1006_SB();
yr1017_SA(y_str("case ", 5));
yr1030_SI(F.v7090);
yr1017_SA(y_str(":", 1));
F.v7068 = yr1036_SE();
yr1112_Emit(F.v7068);
F.v7082 = ((*(yR99 *)rt_nil_check(F.v7082))).f_next;
}
yr1118_EmitS(y_str("{", 1));
v1582 = rt_range(rt_add(v1582, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1578).p)[y_ix1(v1578, v1582)] = ((*(yR99 *)rt_nil_check(F.p3091))).f_a;
((void * *)(v1580).p)[y_ix1(v1580, v1582)] = ((*(yR99 *)rt_nil_check(F.v7080))).f_a;
yr3066_Statements(((*(yR99 *)rt_nil_check(F.v7080))).f_b);
v1582 = rt_range(rt_sub(v1582, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1118_EmitS(y_str("} break;", 8));
F.v7080 = ((*(yR99 *)rt_nil_check(F.v7080))).f_next;
}
yr1118_EmitS(y_str("default: {", 10));
v1582 = rt_range(rt_add(v1582, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1578).p)[y_ix1(v1578, v1582)] = ((*(yR99 *)rt_nil_check(F.p3091))).f_a;
((void * *)(v1580).p)[y_ix1(v1580, v1582)] = ((void *)0);
if ((((*(yR99 *)rt_nil_check(F.p3091))).f_flag == INT64_C(1))) {
yr3066_Statements(((*(yR99 *)rt_nil_check(F.p3091))).f_c);
}
v1582 = rt_range(rt_sub(v1582, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1118_EmitS(y_str("} break;", 8));
yr1118_EmitS(y_str("}", 1));
} else if ((F.v7062 == v713)) {
yr3110_ReturnStatement(F.p3091);
} else if ((F.v7062 == v719)) {
if ((((*(yR99 *)rt_nil_check(F.p3091))).f_name == INT64_C(0))) {
if ((v1534 == INT64_C(0))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3091))).f_line, y_str("PROPAGATE_EXCEPTION without a name is used in a handler (IX.A.8)", 64));
}
yr3011_Emit3(y_str("rt_raise(", 9), ((rt_int *)(v1532).p)[y_ix1(v1532, v1534)], y_str(");", 2));
} else {
yr3027_LeaveBlock();
yr1112_Emit(yr3032_RaiseCode(((*(yR99 *)rt_nil_check(F.p3091))).f_name));
}
} else if ((F.v7062 == v704)) {
F.v7064 = yr3072_Cond(((*(yR99 *)rt_nil_check(F.p3091))).f_a);
yr3011_Emit3(y_str("if (!(", 6), F.v7064, y_str(")) {", 4));
yr3027_LeaveBlock();
yr1118_EmitS(y_str("rt_raise(RT_X_ASSERT); }", 24));
} else if ((F.v7062 == v737)) {
yr3116_BeginStatement(F.p3091);
} else if ((F.v7062 == v716)) {
yr3381_TerminateStatement(F.p3091);
} else if ((F.v7062 == v707)) {
yr3128_GotoStatement(F.p3091);
} else {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3091))).f_line, y_str("not a statement", 15));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3096_ForStatement(void * a_p3097) {
struct yf3098 F;
memset((void *)&F, 0, sizeof F);
F.p3097 = a_p3097;
F.v7163 = yr2520_MakeRep(((*(yR99 *)rt_nil_check(F.p3097))).f_a, INT64_C(0), 0);
if ((!yr2289_IsDiscrete(F.v7163))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3097))).f_line, y_str("FOR goes over an integer or scalar representation", 49));
}
yr2379_CheckRepresented(F.v7163, ((*(yR99 *)rt_nil_check(F.p3097))).f_line);
yr2149_OpenScope(0);
F.v7171 = yr2142_NewSym(v848, ((*(yR99 *)rt_nil_check(F.p3097))).f_name);
((*(yR119 *)rt_nil_check(F.v7171))).f_rep = F.v7163;
((*(yR119 *)rt_nil_check(F.v7171))).f_level = v1245;
((*(yR119 *)rt_nil_check(F.v7171))).f_cname = yr1166_Fresh(y_str("c_", 2));
yr2257_DeclStorage(yr1041_T(y_str("rt_int", 6)), ((*(yR119 *)rt_nil_check(F.v7171))).f_cname);
yr2237_Define(F.v7171, ((*(yR99 *)rt_nil_check(F.p3097))).f_line);
F.v7165 = yr1166_Fresh(y_str("i", 1));
F.v7167 = yr1166_Fresh(y_str("hi", 2));
yr1006_SB();
yr1017_SA(y_str("{ rt_int ", 9));
yr1024_ST(F.v7167);
yr1017_SA(y_str(" = ", 3));
yr1024_ST(yr2425_HiText(F.v7163));
yr1017_SA(y_str(";", 1));
F.v7169 = yr1036_SE();
yr1112_Emit(F.v7169);
yr1006_SB();
yr1017_SA(y_str("for (rt_int ", 12));
yr1024_ST(F.v7165);
yr1017_SA(y_str(" = ", 3));
yr1024_ST(yr2419_LoText(F.v7163));
yr1017_SA(y_str("; ", 2));
yr1024_ST(F.v7165);
yr1017_SA(y_str(" <= ", 4));
yr1024_ST(F.v7167);
yr1017_SA(y_str("; ", 2));
yr1024_ST(F.v7165);
yr1017_SA(y_str("++) { ", 6));
yr1024_ST(yr2264_SymPath(F.v7171));
yr1017_SA(y_str(" = ", 3));
yr1024_ST(F.v7165);
yr1017_SA(y_str(";", 1));
F.v7169 = yr1036_SE();
yr1112_Emit(F.v7169);
yr3066_Statements(((*(yR99 *)rt_nil_check(F.p3097))).f_b);
yr3011_Emit3(y_str("if (", 4), F.v7165, y_str(" == ", 4));
((*(yR129 *)rt_nil_check((v976).f_tail))).f_t = yr3102_Join(((*(yR129 *)rt_nil_check((v976).f_tail))).f_t, F.v7167, yr1041_T(y_str(") break;", 8)));
yr1118_EmitS(y_str("}}", 2));
yr2161_CloseScope();
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3102_Join(rt_int a_p3103, rt_int a_p3104, rt_int a_p3105) {
struct yf3106 F;
memset((void *)&F, 0, sizeof F);
F.p3103 = a_p3103;
F.p3104 = a_p3104;
F.p3105 = a_p3105;
yr1006_SB();
yr1024_ST(F.p3103);
yr1024_ST(F.p3104);
yr1024_ST(F.p3105);
{ rt_int rv7199 = yr1036_SE();
return rv7199; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3110_ReturnStatement(void * a_p3111) {
struct yf3112 F;
memset((void *)&F, 0, sizeof F);
F.p3111 = a_p3111;
if ((v1567 == ((void *)0))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3111))).f_line, y_str("RETURN outside a routine (IX.A.6)", 33));
}
if ((((*(yR119 *)rt_nil_check(v1567))).f_kind == v869)) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3111))).f_line, y_str("a process ends with TERMINATE_PROCESS (IX.A.7)", 46));
}
F.v7211 = ((*(yR119 *)rt_nil_check(v1567))).f_ret;
if ((((*(yR99 *)rt_nil_check(F.p3111))).f_a == ((void *)0))) {
if ((!(((*(yR104 *)rt_nil_check(F.v7211))).f_kind == v836))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3111))).f_line, y_str("RETURN needs a value here (IX.A.6)", 34));
}
yr3085_CopyOut();
yr3376_LeaveMonitor();
yr3021_PopTo(v1495);
yr1118_EmitS(y_str("return;", 7));
return;
}
if ((((*(yR104 *)rt_nil_check(F.v7211))).f_kind == v836)) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3111))).f_line, y_str("this routine returns no value (IX.A.6)", 38));
}
yr2779_Expr(((*(yR99 *)rt_nil_check(F.p3111))).f_a, F.v7211, &F.v7203, &F.v7209);
yr2371_CheckType(((*(yR99 *)rt_nil_check(F.p3111))).f_line, F.v7211, F.v7209);
F.v7207 = yr1166_Fresh(y_str("rv", 2));
yr1006_SB();
yr1017_SA(y_str("{ ", 2));
yr1024_ST(yr2338_CType(F.v7211));
yr1017_SA(y_str(" ", 1));
yr1024_ST(F.v7207);
yr1017_SA(y_str(" = ", 3));
yr1024_ST(yr2712_Convert(F.v7203, F.v7211, F.v7209));
yr1017_SA(y_str(";", 1));
F.v7205 = yr1036_SE();
yr1112_Emit(F.v7205);
yr3085_CopyOut();
yr3376_LeaveMonitor();
yr3021_PopTo(v1495);
yr3011_Emit3(y_str("return ", 7), F.v7207, y_str("; }", 3));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3116_BeginStatement(void * a_p3117) {
struct yf3118 F;
memset((void *)&F, 0, sizeof F);
F.p3117 = a_p3117;
yr1118_EmitS(y_str("{", 1));
yr2149_OpenScope(0);
yr3228_Declarations(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3117))).f_a))).f_a);
yr3038_BlockStatements(((*(yR99 *)rt_nil_check(F.p3117))).f_a);
yr3352_AwaitProcesses();
yr2161_CloseScope();
yr1118_EmitS(y_str("}", 1));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3122_PlaceLabel(void * a_p3123) {
struct yf3124 F;
memset((void *)&F, 0, sizeof F);
F.p3123 = a_p3123;
F.v7232 = yr2178_FindHere(((*(yR99 *)rt_nil_check(F.p3123))).f_text);
if ((((F.v7232 == ((void *)0))) || ((!(((*(yR119 *)rt_nil_check(F.v7232))).f_kind == v872))))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3123))).f_line, ((*(yR99 *)rt_nil_check(F.p3123))).f_text, y_str(" labels a statement but is not declared by LABEL in this block (VII.C)", 70));
}
if (((*(yR119 *)rt_nil_check(F.v7232))).f_hasmv) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3123))).f_line, ((*(yR99 *)rt_nil_check(F.p3123))).f_text, y_str(" labels two statements", 22));
}
((*(yR119 *)rt_nil_check(F.v7232))).f_hasmv = 1;
yr3011_Emit3(y_str("", 0), ((*(yR119 *)rt_nil_check(F.v7232))).f_cname, y_str(": ;", 3));
if ((!(((rt_int *)(v1507).p)[y_ix1(v1507, v1520)] == INT64_C(0)))) {
yr3011_Emit3(y_str("rt_xtop = &", 11), ((rt_int *)(v1507).p)[y_ix1(v1507, v1520)], y_str(";", 1));
} else if ((!(((rt_int *)(v1518).p)[y_ix1(v1518, v1520)] == INT64_C(0)))) {
yr3011_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v1518).p)[y_ix1(v1518, v1520)], y_str(";", 1));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3128_GotoStatement(void * a_p3129) {
struct yf3130 F;
memset((void *)&F, 0, sizeof F);
F.p3129 = a_p3129;
F.v7247 = yr2184_Lookup(((*(yR99 *)rt_nil_check(F.p3129))).f_name, ((*(yR99 *)rt_nil_check(F.p3129))).f_line);
if ((!(((*(yR119 *)rt_nil_check(F.v7247))).f_kind == v872))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3129))).f_line, ((*(yR99 *)rt_nil_check(F.p3129))).f_name, y_str(" is not a label", 15));
}
if ((!(((*(yR119 *)rt_nil_check(F.v7247))).f_level == v1245))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3129))).f_line, ((*(yR99 *)rt_nil_check(F.p3129))).f_name, y_str(": GOTO does not leave a routine or process (IX.A.4)", 51));
}
((*(yR119 *)rt_nil_check(F.v7247))).f_readonly = 1;
yr3011_Emit3(y_str("goto ", 5), ((*(yR119 *)rt_nil_check(F.v7247))).f_cname, y_str(";", 1));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3134_CheckLabels(void * a_p3135) {
struct yf3136 F;
memset((void *)&F, 0, sizeof F);
F.p3135 = a_p3135;
F.v7256 = F.p3135;
while ((!(F.v7256 == ((void *)0)))) {
if ((((*(yR99 *)rt_nil_check(F.v7256))).f_kind == v629)) {
F.v7258 = ((*(yR99 *)rt_nil_check(F.v7256))).f_a;
while ((!(F.v7258 == ((void *)0)))) {
F.v7260 = yr2178_FindHere(((*(yR99 *)rt_nil_check(F.v7258))).f_name);
if ((((((!(F.v7260 == ((void *)0)))) && ((((*(yR119 *)rt_nil_check(F.v7260))).f_kind == v872))) && ((*(yR119 *)rt_nil_check(F.v7260))).f_readonly) && (!((*(yR119 *)rt_nil_check(F.v7260))).f_hasmv))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.v7258))).f_line, ((*(yR99 *)rt_nil_check(F.v7258))).f_name, y_str(" is the target of a GOTO but labels no statement of its block", 61));
}
F.v7258 = ((*(yR99 *)rt_nil_check(F.v7258))).f_next;
}
}
F.v7256 = ((*(yR99 *)rt_nil_check(F.v7256))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3140_RoutineCName(rt_int a_p3141) {
struct yf3142 F;
memset((void *)&F, 0, sizeof F);
F.p3141 = a_p3141;
F.v7265 = yr1161_NewSerial();
F.v7267 = 1;
F.lo7272 = INT64_C(1);
F.hi7273 = ((rt_int *)(v904).p)[y_ix1(v904, F.p3141)];
{ rt_int hi7277 = F.hi7273;
for (rt_int i7276 = F.lo7272; i7276 <= hi7277; i7276++) { F.c_7275 = i7276;
if ((!((yr988_IsLetter(yr1083_TChar(F.p3141, rt_range(F.c_7275, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || yr994_IsDigit(yr1083_TChar(F.p3141, rt_range(F.c_7275, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))))) {
F.v7267 = 0;
}
if (i7276 == hi7277) break;
}}
yr1006_SB();
yr1017_SA(y_str("yr", 2));
yr1030_SI(F.v7265);
if (F.v7267) {
yr1017_SA(y_str("_", 1));
yr1024_ST(F.p3141);
}
{ rt_int rv7281 = yr1036_SE();
return rv7281; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3146_FormalRep(void * a_p3147) {
struct yf3148 F;
memset((void *)&F, 0, sizeof F);
F.p3147 = a_p3147;
if ((((*(yR99 *)rt_nil_check(F.p3147))).f_kind == v680)) {
yr2631_Manifest(((*(yR99 *)rt_nil_check(F.p3147))).f_a, &F.v7287, &F.v7289);
if ((((!F.v7287) || ((F.v7289 < INT64_C(1)))) || ((F.v7289 > INT64_C(4))))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3147))).f_line, y_str("DIMENSIONS is a manifest constant from 1 to 4", 45));
}
F.v7285 = yr2276_NewRep(v827, yr1041_T(y_str("length-unresolved array", 23)));
((*(yR104 *)rt_nil_check(F.v7285))).f_nidx = F.v7289;
((*(yR104 *)rt_nil_check(F.v7285))).f_elem = yr2520_MakeRep(((*(yR99 *)rt_nil_check(F.p3147))).f_b, INT64_C(0), 0);
yr2379_CheckRepresented(((*(yR104 *)rt_nil_check(F.v7285))).f_elem, ((*(yR99 *)rt_nil_check(F.p3147))).f_line);
((*(yR104 *)rt_nil_check(F.v7285))).f_deep = 1;
{ void * rv7297 = F.v7285;
return rv7297; }
}
if ((((*(yR99 *)rt_nil_check(F.p3147))).f_kind == v683)) {
{ void * rv7299 = yr2276_NewRep(v839, yr1041_T(y_str("SPACE", 5)));
return rv7299; }
}
F.v7285 = yr2520_MakeRep(F.p3147, INT64_C(0), 0);
yr2379_CheckRepresented(F.v7285, ((*(yR99 *)rt_nil_check(F.p3147))).f_line);
{ void * rv7302 = F.v7285;
return rv7302; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3152_ParamCType(void * a_p3153) {
struct yf3154 F;
memset((void *)&F, 0, sizeof F);
F.p3153 = a_p3153;
F.v7306 = yr2338_CType(((*(yR114 *)rt_nil_check(F.p3153))).f_rep);
if ((((*(yR114 *)rt_nil_check(F.p3153))).f_cls == v881)) {
{ rt_int rv7307 = F.v7306;
return rv7307; }
}
yr1006_SB();
yr1024_ST(F.v7306);
yr1017_SA(y_str(" *", 2));
{ rt_int rv7309 = yr1036_SE();
return rv7309; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3158_RoutineHeader(void * a_p3159, rt_int a_p3160) {
struct yf3161 F;
memset((void *)&F, 0, sizeof F);
F.p3159 = a_p3159;
F.p3160 = a_p3160;
F.v7330 = 1;
F.v7314 = yr2142_NewSym(F.p3160, ((*(yR99 *)rt_nil_check(F.p3159))).f_name);
((*(yR119 *)rt_nil_check(F.v7314))).f_decl = F.p3159;
((*(yR119 *)rt_nil_check(F.v7314))).f_func = (((*(yR99 *)rt_nil_check(F.p3159))).f_flag == INT64_C(1));
((*(yR119 *)rt_nil_check(F.v7314))).f_level = rt_range(rt_add(v1245, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR119 *)rt_nil_check(F.v7314))).f_cname = yr3140_RoutineCName(((*(yR99 *)rt_nil_check(F.p3159))).f_name);
if ((!(((*(yR99 *)rt_nil_check(F.p3159))).f_b == ((void *)0)))) {
((*(yR119 *)rt_nil_check(F.v7314))).f_ret = yr2520_MakeRep(((*(yR99 *)rt_nil_check(F.p3159))).f_b, INT64_C(0), 0);
yr2379_CheckRepresented(((*(yR119 *)rt_nil_check(F.v7314))).f_ret, ((*(yR99 *)rt_nil_check(F.p3159))).f_line);
} else {
((*(yR119 *)rt_nil_check(F.v7314))).f_ret = v1314;
if (((*(yR119 *)rt_nil_check(F.v7314))).f_func) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3159))).f_line, ((*(yR99 *)rt_nil_check(F.p3159))).f_name, y_str(": a FUNCTION has a RETURNS clause (X.A)", 39));
}
}
F.v7324 = ((void *)0);
F.v7318 = ((*(yR99 *)rt_nil_check(F.p3159))).f_a;
while ((!(F.v7318 == ((void *)0)))) {
F.v7326 = yr3146_FormalRep(((*(yR99 *)rt_nil_check(F.v7318))).f_b);
if ((((*(yR119 *)rt_nil_check(F.v7314))).f_func && ((!(((*(yR99 *)rt_nil_check(F.v7318))).f_ival == v881))))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.v7318))).f_line, ((*(yR99 *)rt_nil_check(F.p3159))).f_name, y_str(": the parameters of a FUNCTION are CONST (X.A.2)", 48));
}
if ((((F.p3160 == v869)) && ((((*(yR99 *)rt_nil_check(F.v7318))).f_ival == v884)))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.v7318))).f_line, ((*(yR99 *)rt_nil_check(F.p3159))).f_name, y_str(": a process has no OUT parameters", 33));
}
F.v7320 = ((*(yR99 *)rt_nil_check(F.v7318))).f_a;
while ((!(F.v7320 == ((void *)0)))) {
({ F.v7322 = rt_alloc(sizeof(yR114)); });
(*(yR114 *)rt_nil_check(F.v7322)) = ((yR114){ .f_name = ((*(yR99 *)rt_nil_check(F.v7320))).f_name, .f_cls = ((*(yR99 *)rt_nil_check(F.v7318))).f_ival, .f_rep = F.v7326, .f_cname = yr1166_Fresh(y_str("p", 1)), .f_next = ((void *)0) });
if ((F.v7324 == ((void *)0))) {
((*(yR119 *)rt_nil_check(F.v7314))).f_params = F.v7322;
} else {
((*(yR114 *)rt_nil_check(F.v7324))).f_next = F.v7322;
}
F.v7324 = F.v7322;
((*(yR119 *)rt_nil_check(F.v7314))).f_nparams = rt_range(rt_add(((*(yR119 *)rt_nil_check(F.v7314))).f_nparams, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7320 = ((*(yR99 *)rt_nil_check(F.v7320))).f_next;
}
F.v7318 = ((*(yR99 *)rt_nil_check(F.v7318))).f_next;
}
F.v7316 = yr2172_Find(((*(yR99 *)rt_nil_check(F.p3159))).f_name);
if ((!(F.v7316 == ((void *)0)))) {
F.v7316 = yr2270_Real(F.v7316);
}
if (((((!(((*(yR99 *)rt_nil_check(F.p3159))).f_ival == INT64_C(0)))) && ((!(F.v7316 == ((void *)0))))) && ((((*(yR119 *)rt_nil_check(F.v7316))).f_kind == v860)))) {
((*(yR119 *)rt_nil_check(F.v7314))).f_alt = F.v7316;
if ((((((*(yR99 *)rt_nil_check(F.p3159))).f_ival == v323)) && ((!(yr3165_SameSignature(F.v7314, F.v7316) == ((void *)0)))))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3159))).f_line, ((*(yR99 *)rt_nil_check(F.p3159))).f_name, y_str(" EXTENDS a definition for the same parameter types: use REPLACES", 64));
}
if ((((((*(yR99 *)rt_nil_check(F.p3159))).f_ival == v419)) && ((yr3165_SameSignature(F.v7314, F.v7316) == ((void *)0))))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3159))).f_line, ((*(yR99 *)rt_nil_check(F.p3159))).f_name, y_str(" REPLACES no definition for these parameter types", 49));
}
}
((*(yR99 *)rt_nil_check(F.p3159))).f_sym = F.v7314;
yr2237_Define(F.v7314, ((*(yR99 *)rt_nil_check(F.p3159))).f_line);
((rt_int *)(v1257).p)[y_ix1(v1257, ((*(yR119 *)rt_nil_check(F.v7314))).f_level)] = yr1166_Fresh(y_str("yf", 2));
((*(yR119 *)rt_nil_check(F.v7314))).f_members = yr2142_NewSym(v875, ((rt_int *)(v1257).p)[y_ix1(v1257, ((*(yR119 *)rt_nil_check(F.v7314))).f_level)]);
yr1006_SB();
yr1017_SA(y_str("struct ", 7));
yr1024_ST(((rt_int *)(v1257).p)[y_ix1(v1257, ((*(yR119 *)rt_nil_check(F.v7314))).f_level)]);
yr1017_SA(y_str(";", 1));
F.v7328 = yr1036_SE();
yr1090_Put(&v962, F.v7328);
yr1006_SB();
yr1017_SA(y_str("static ", 7));
if ((F.p3160 == v869)) {
yr1017_SA(y_str("void", 4));
} else {
yr1024_ST(yr2338_CType(((*(yR119 *)rt_nil_check(F.v7314))).f_ret));
}
yr1017_SA(y_str(" ", 1));
yr1024_ST(((*(yR119 *)rt_nil_check(F.v7314))).f_cname);
yr1017_SA(y_str("(", 1));
F.v7328 = yr1036_SE();
if ((F.p3160 == v869)) {
F.v7328 = yr3102_Join(F.v7328, yr1041_T(y_str("void *arg", 9)), INT64_C(0));
F.v7330 = 0;
} else if ((v1245 > INT64_C(0))) {
yr1006_SB();
yr1024_ST(F.v7328);
yr1017_SA(y_str("struct ", 7));
yr1024_ST(((rt_int *)(v1257).p)[y_ix1(v1257, v1245)]);
yr1017_SA(y_str(" *up", 4));
F.v7328 = yr1036_SE();
F.v7330 = 0;
}
F.v7322 = ((*(yR119 *)rt_nil_check(F.v7314))).f_params;
while ((((!(F.v7322 == ((void *)0)))) && ((!(F.p3160 == v869))))) {
yr1006_SB();
yr1024_ST(F.v7328);
if ((!F.v7330)) {
yr1017_SA(y_str(", ", 2));
}
F.v7330 = 0;
yr1024_ST(yr3152_ParamCType(F.v7322));
yr1017_SA(y_str(" a_", 3));
yr1024_ST(((*(yR114 *)rt_nil_check(F.v7322))).f_cname);
F.v7328 = yr1036_SE();
F.v7322 = ((*(yR114 *)rt_nil_check(F.v7322))).f_next;
}
if (F.v7330) {
F.v7328 = yr3102_Join(F.v7328, yr1041_T(y_str("void", 4)), INT64_C(0));
}
F.v7328 = yr3102_Join(F.v7328, yr1041_T(y_str(")", 1)), INT64_C(0));
((*(yR119 *)rt_nil_check(F.v7314))).f_mnext = yr2142_NewSym(v875, F.v7328);
yr1090_Put(&v970, yr3102_Join(F.v7328, yr1041_T(y_str(";", 1)), INT64_C(0)));
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3165_SameSignature(void * a_p3166, void * a_p3167) {
struct yf3168 F;
memset((void *)&F, 0, sizeof F);
F.p3166 = a_p3166;
F.p3167 = a_p3167;
F.v7373 = F.p3167;
while ((!(F.v7373 == ((void *)0)))) {
if ((((*(yR119 *)rt_nil_check(F.v7373))).f_nparams == ((*(yR119 *)rt_nil_check(F.p3166))).f_nparams)) {
F.v7379 = 1;
F.v7375 = ((*(yR119 *)rt_nil_check(F.p3166))).f_params;
F.v7377 = ((*(yR119 *)rt_nil_check(F.v7373))).f_params;
while ((!(F.v7375 == ((void *)0)))) {
if ((!yr2356_SameType(((*(yR114 *)rt_nil_check(F.v7375))).f_rep, ((*(yR114 *)rt_nil_check(F.v7377))).f_rep))) {
F.v7379 = 0;
}
F.v7375 = ((*(yR114 *)rt_nil_check(F.v7375))).f_next;
F.v7377 = ((*(yR114 *)rt_nil_check(F.v7377))).f_next;
}
if (F.v7379) {
{ void * rv7382 = F.v7373;
return rv7382; }
}
}
F.v7373 = ((*(yR119 *)rt_nil_check(F.v7373))).f_alt;
}
{ void * rv7383 = ((void *)0);
return rv7383; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3172_RoutineBody(void * a_p3173) {
struct yf3174 F;
memset((void *)&F, 0, sizeof F);
F.p3173 = a_p3173;
F.v7387 = ((*(yR99 *)rt_nil_check(F.p3173))).f_sym;
F.v7389 = v976;
F.v7391 = v978;
F.v7393 = v1245;
F.v7395 = v1492;
F.v7397 = v1495;
F.v7399 = v1520;
F.v7401 = v1534;
F.v7403 = v1561;
F.v7405 = v1564;
F.v7407 = v1567;
F.v7409 = v1596;
v976 = ((yR134){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v978 = ((yR134){ .f_head = ((void *)0), .f_tail = ((void *)0) });
F.v7419 = ((yR134){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v1245 = ((*(yR119 *)rt_nil_check(F.v7387))).f_level;
F.v7415 = ((*(yR119 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v7387))).f_members))).f_name;
((rt_int *)(v1257).p)[y_ix1(v1257, v1245)] = F.v7415;
v1495 = v1492;
v1564 = v1561;
v1534 = INT64_C(0);
v1567 = F.v7387;
v1596 = 0;
yr2149_OpenScope(0);
v1294 = rt_range(rt_add(v1294, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1290).p)[y_ix1(v1290, v1294)] = ((*(yR119 *)rt_nil_check(F.v7387))).f_depth;
((rt_int *)(v1292).p)[y_ix1(v1292, v1294)] = ((*(yR119 *)rt_nil_check(F.v7387))).f_serial;
F.v7411 = ((*(yR119 *)rt_nil_check(F.v7387))).f_params;
while ((!(F.v7411 == ((void *)0)))) {
if ((((*(yR114 *)rt_nil_check(F.v7411))).f_cls == v881)) {
F.v7413 = yr2142_NewSym(v848, ((*(yR114 *)rt_nil_check(F.v7411))).f_name);
} else {
F.v7413 = yr2142_NewSym(v845, ((*(yR114 *)rt_nil_check(F.v7411))).f_name);
}
((*(yR119 *)rt_nil_check(F.v7413))).f_rep = ((*(yR114 *)rt_nil_check(F.v7411))).f_rep;
((*(yR119 *)rt_nil_check(F.v7413))).f_level = v1245;
((*(yR119 *)rt_nil_check(F.v7413))).f_cname = ((*(yR114 *)rt_nil_check(F.v7411))).f_cname;
if ((((*(yR119 *)rt_nil_check(F.v7387))).f_kind == v869)) {
((*(yR119 *)rt_nil_check(F.v7413))).f_byref = (((*(yR114 *)rt_nil_check(F.v7411))).f_cls == v887);
yr2257_DeclStorage(yr3152_ParamCType(F.v7411), ((*(yR114 *)rt_nil_check(F.v7411))).f_cname);
} else if ((((*(yR114 *)rt_nil_check(F.v7411))).f_cls == v887)) {
((*(yR119 *)rt_nil_check(F.v7413))).f_byref = 1;
yr2257_DeclStorage(yr3152_ParamCType(F.v7411), ((*(yR114 *)rt_nil_check(F.v7411))).f_cname);
yr1112_Emit(yr3102_Join(yr1041_T(y_str("F.", 2)), ((*(yR114 *)rt_nil_check(F.v7411))).f_cname, yr3102_Join(yr1041_T(y_str(" = a_", 5)), ((*(yR114 *)rt_nil_check(F.v7411))).f_cname, yr1041_T(y_str(";", 1)))));
} else if ((((*(yR114 *)rt_nil_check(F.v7411))).f_cls == v884)) {
yr2257_DeclStorage(yr2338_CType(((*(yR114 *)rt_nil_check(F.v7411))).f_rep), ((*(yR114 *)rt_nil_check(F.v7411))).f_cname);
yr2257_DeclStorage(yr3152_ParamCType(F.v7411), yr3102_Join(((*(yR114 *)rt_nil_check(F.v7411))).f_cname, yr1041_T(y_str("_o", 2)), INT64_C(0)));
yr1112_Emit(yr3102_Join(yr1041_T(y_str("F.", 2)), ((*(yR114 *)rt_nil_check(F.v7411))).f_cname, yr3102_Join(yr1041_T(y_str("_o = a_", 7)), ((*(yR114 *)rt_nil_check(F.v7411))).f_cname, yr1041_T(y_str(";", 1)))));
if ((yr2313_Deep(((*(yR114 *)rt_nil_check(F.v7411))).f_rep) && ((!(((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v7411))).f_rep))).f_kind == v827))))) {
yr1112_Emit(yr3102_Join(yr1041_T(y_str("y_init(", 7)), yr2344_DescOf(((*(yR114 *)rt_nil_check(F.v7411))).f_rep), yr3102_Join(yr1041_T(y_str(", &F.", 5)), ((*(yR114 *)rt_nil_check(F.v7411))).f_cname, yr1041_T(y_str(");", 2)))));
}
if ((((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v7411))).f_rep))).f_kind == v827)) {
yr1112_Emit(yr3102_Join(yr1041_T(y_str("F.", 2)), ((*(yR114 *)rt_nil_check(F.v7411))).f_cname, yr3102_Join(yr1041_T(y_str(" = *a_", 6)), ((*(yR114 *)rt_nil_check(F.v7411))).f_cname, yr1041_T(y_str(";", 1)))));
}
} else {
yr2257_DeclStorage(yr2338_CType(((*(yR114 *)rt_nil_check(F.v7411))).f_rep), ((*(yR114 *)rt_nil_check(F.v7411))).f_cname);
yr1112_Emit(yr3102_Join(yr1041_T(y_str("F.", 2)), ((*(yR114 *)rt_nil_check(F.v7411))).f_cname, yr3102_Join(yr1041_T(y_str(" = a_", 5)), ((*(yR114 *)rt_nil_check(F.v7411))).f_cname, yr1041_T(y_str(";", 1)))));
}
yr2237_Define(F.v7413, ((*(yR99 *)rt_nil_check(F.p3173))).f_line);
F.v7411 = ((*(yR114 *)rt_nil_check(F.v7411))).f_next;
}
yr3370_EnterMonitor(F.v7387);
yr3228_Declarations(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3173))).f_c))).f_a);
yr3038_BlockStatements(((*(yR99 *)rt_nil_check(F.p3173))).f_c);
if ((((*(yR119 *)rt_nil_check(F.v7387))).f_kind == v869)) {
yr1118_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
} else {
yr1118_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
}
yr3352_AwaitProcesses();
yr2161_CloseScope();
v1294 = rt_range(rt_sub(v1294, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1006_SB();
yr1017_SA(y_str("struct ", 7));
yr1024_ST(F.v7415);
yr1017_SA(y_str(" {", 2));
if ((v1245 > INT64_C(1))) {
yr1017_SA(y_str(" struct ", 8));
yr1024_ST(((rt_int *)(v1257).p)[y_ix1(v1257, rt_sub(v1245, INT64_C(1)))]);
yr1017_SA(y_str(" *up;", 5));
} else {
yr1017_SA(y_str(" void *up;", 10));
}
F.v7417 = yr1036_SE();
yr1090_Put(&v966, F.v7417);
yr1105_Append(&v966, &v978);
yr1097_PutS(&v966, y_str("};", 2));
yr1090_Put(&F.v7419, yr3102_Join(((*(yR119 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v7387))).f_mnext))).f_name, yr1041_T(y_str(" {", 2)), INT64_C(0)));
if (v1596) {
yr1097_PutS(&F.v7419, y_str("volatile", 8));
}
yr1090_Put(&F.v7419, yr3102_Join(yr1041_T(y_str("struct ", 7)), F.v7415, yr1041_T(y_str(" F;", 3))));
yr1097_PutS(&F.v7419, y_str("memset((void *)&F, 0, sizeof F);", 32));
if ((((*(yR119 *)rt_nil_check(F.v7387))).f_kind == v869)) {
yr1090_Put(&F.v7419, yr3102_Join(yr1041_T(y_str("F = *(struct ", 13)), F.v7415, yr1041_T(y_str(" *)arg;", 7))));
} else if ((v1245 > INT64_C(1))) {
yr1097_PutS(&F.v7419, y_str("F.up = up;", 10));
}
yr1105_Append(&F.v7419, &v976);
yr1097_PutS(&F.v7419, y_str("}", 1));
yr1105_Append(&v972, &F.v7419);
v976 = F.v7389;
v978 = F.v7391;
v1245 = F.v7393;
((rt_int *)(v1257).p)[y_ix1(v1257, v1245)] = yr1166_Fresh(y_str("unused", 6));
if ((!(F.v7407 == ((void *)0)))) {
((rt_int *)(v1257).p)[y_ix1(v1257, v1245)] = ((*(yR119 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v7407))).f_members))).f_name;
}
v1492 = F.v7395;
v1495 = F.v7397;
v1520 = F.v7399;
v1534 = F.v7401;
v1561 = F.v7403;
v1564 = F.v7405;
v1567 = F.v7407;
v1596 = F.v7409;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3178_DeclareStorage(void * a_p3179, void * a_p3180, rt_int a_p3181) {
struct yf3182 F;
memset((void *)&F, 0, sizeof F);
F.p3179 = a_p3179;
F.p3180 = a_p3180;
F.p3181 = a_p3181;
((*(yR119 *)rt_nil_check(F.p3179))).f_rep = F.p3180;
((*(yR119 *)rt_nil_check(F.p3179))).f_level = v1245;
((*(yR119 *)rt_nil_check(F.p3179))).f_cname = yr1166_Fresh(y_str("v", 1));
yr2257_DeclStorage(yr2338_CType(F.p3180), ((*(yR119 *)rt_nil_check(F.p3179))).f_cname);
if (yr2313_Deep(F.p3180)) {
yr1112_Emit(yr3102_Join(yr1041_T(y_str("y_init(", 7)), yr2344_DescOf(F.p3180), yr3102_Join(yr1041_T(y_str(", &", 3)), yr2264_SymPath(F.p3179), yr1041_T(y_str(");", 2)))));
}
if ((((*(yR104 *)rt_nil_check(F.p3180))).f_kind == v818)) {
yr1112_Emit(yr3102_Join(yr2264_SymPath(F.p3179), yr1041_T(y_str(" = y_set_new(", 13)), yr3102_Join(yr2419_LoText(((*(yR104 *)rt_nil_check(F.p3180))).f_elem), yr1041_T(y_str(", ", 2)), yr3102_Join(yr2425_HiText(((*(yR104 *)rt_nil_check(F.p3180))).f_elem), yr1041_T(y_str(");", 2)), INT64_C(0)))));
}
if ((((*(yR104 *)rt_nil_check(F.p3180))).f_kind == v821)) {
yr3387_DeclareSignal(F.p3179, F.p3181);
}
if (yr2326_HoldsSignal(F.p3180)) {
yr3394_DeclareSignalArray(F.p3179, F.p3181);
}
if ((((*(yR104 *)rt_nil_check(F.p3180))).f_kind == v824)) {
yr1112_Emit(yr3102_Join(yr1041_T(y_str("rt_lock_init(&", 14)), yr2264_SymPath(F.p3179), yr1041_T(y_str(");", 2))));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3186_SimpleDecl(void * a_p3187) {
struct yf3188 F;
memset((void *)&F, 0, sizeof F);
F.p3187 = a_p3187;
F.v7485 = ((*(yR99 *)rt_nil_check(F.p3187))).f_kind;
if ((((F.v7485 == v623)) || ((F.v7485 == v626)))) {
F.v7487 = yr2520_MakeRep(((*(yR99 *)rt_nil_check(F.p3187))).f_b, INT64_C(0), 0);
yr2379_CheckRepresented(F.v7487, ((*(yR99 *)rt_nil_check(F.p3187))).f_line);
if ((((F.v7485 == v623)) && yr2332_NonAssignable(F.v7487))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3187))).f_line, y_str("signals, files and semaphores, and what holds them, are variables (VII.B)", 73));
}
F.v7491 = ((*(yR99 *)rt_nil_check(F.p3187))).f_a;
while ((!(F.v7491 == ((void *)0)))) {
if ((F.v7485 == v623)) {
F.v7493 = yr2142_NewSym(v848, ((*(yR99 *)rt_nil_check(F.v7491))).f_name);
} else {
F.v7493 = yr2142_NewSym(v845, ((*(yR99 *)rt_nil_check(F.v7491))).f_name);
}
yr3178_DeclareStorage(F.v7493, F.v7487, ((*(yR99 *)rt_nil_check(F.p3187))).f_line);
if ((!(((*(yR99 *)rt_nil_check(F.p3187))).f_c == ((void *)0)))) {
yr2779_Expr(((*(yR99 *)rt_nil_check(F.p3187))).f_c, F.v7487, &F.v7495, &F.v7489);
if ((F.v7485 == v623)) {
yr2730_Store(yr2264_SymPath(F.v7493), F.v7487, F.v7495, F.v7489, ((*(yR99 *)rt_nil_check(F.p3187))).f_line);
} else {
F.v7497 = yr2956_UserAssign(yr2264_SymPath(F.v7493), F.v7487, F.v7495, F.v7489, ((*(yR99 *)rt_nil_check(F.p3187))).f_line);
if ((!(F.v7497 == INT64_C(0)))) {
yr1112_Emit(F.v7497);
} else {
if ((((*(yR104 *)rt_nil_check(F.v7487))).f_opaque && (((rt_mod(((*(yR104 *)rt_nil_check(F.v7487))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3187))).f_line, ((*(yR104 *)rt_nil_check(F.v7487))).f_tname, y_str(" is opaque here: := is not exported to initialize it (X.B.3)", 60));
}
yr2730_Store(yr2264_SymPath(F.v7493), F.v7487, F.v7495, F.v7489, ((*(yR99 *)rt_nil_check(F.p3187))).f_line);
}
}
if ((F.v7485 == v623)) {
yr2631_Manifest(((*(yR99 *)rt_nil_check(F.p3187))).f_c, &F.v7499, &F.v7501);
if ((F.v7499 && yr2289_IsDiscrete(F.v7487))) {
((*(yR119 *)rt_nil_check(F.v7493))).f_hasmv = 1;
((*(yR119 *)rt_nil_check(F.v7493))).f_mval = F.v7501;
}
}
}
if ((!(((*(yR99 *)rt_nil_check(F.v7491))).f_a == ((void *)0)))) {
yr3199_AtLocation(F.v7493, ((*(yR99 *)rt_nil_check(F.v7491))).f_a);
}
yr2237_Define(F.v7493, ((*(yR99 *)rt_nil_check(F.v7491))).f_line);
F.v7491 = ((*(yR99 *)rt_nil_check(F.v7491))).f_next;
}
return;
}
if ((F.v7485 == v635)) {
F.v7487 = yr2520_MakeRep(((*(yR99 *)rt_nil_check(F.p3187))).f_b, ((*(yR99 *)rt_nil_check(F.p3187))).f_name, 0);
yr2379_CheckRepresented(F.v7487, ((*(yR99 *)rt_nil_check(F.p3187))).f_line);
F.v7493 = yr2142_NewSym(v851, ((*(yR99 *)rt_nil_check(F.p3187))).f_name);
((*(yR119 *)rt_nil_check(F.v7493))).f_rep = F.v7487;
yr2237_Define(F.v7493, ((*(yR99 *)rt_nil_check(F.p3187))).f_line);
yr2543_ResolvePending(((*(yR99 *)rt_nil_check(F.p3187))).f_name, F.v7487);
yr3192_NoteAlphabet(F.p3187, F.v7487);
return;
}
if ((F.v7485 == v632)) {
F.v7487 = yr2520_MakeRep(((*(yR99 *)rt_nil_check(F.p3187))).f_b, ((*(yR99 *)rt_nil_check(F.p3187))).f_name, 1);
if ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3187))).f_b))).f_kind == v656)) {
F.v7487 = yr2283_CopyRep(F.v7487);
((*(yR104 *)rt_nil_check(F.v7487))).f_tid = yr2514_NewTid(((*(yR99 *)rt_nil_check(F.p3187))).f_name);
((*(yR104 *)rt_nil_check(F.v7487))).f_tname = ((*(yR99 *)rt_nil_check(F.p3187))).f_name;
if (((((((*(yR104 *)rt_nil_check(F.v7487))).f_kind == v788)) || ((((*(yR104 *)rt_nil_check(F.v7487))).f_kind == v791))) || ((((*(yR104 *)rt_nil_check(F.v7487))).f_kind == v794)))) {
if ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3187))).f_b))).f_a == ((void *)0))) {
((*(yR104 *)rt_nil_check(F.v7487))).f_abstract = 1;
}
}
}
F.v7493 = yr2142_NewSym(v854, ((*(yR99 *)rt_nil_check(F.p3187))).f_name);
((*(yR119 *)rt_nil_check(F.v7493))).f_rep = F.v7487;
yr2237_Define(F.v7493, ((*(yR99 *)rt_nil_check(F.p3187))).f_line);
yr2543_ResolvePending(((*(yR99 *)rt_nil_check(F.p3187))).f_name, F.v7487);
yr3192_NoteAlphabet(F.p3187, F.v7487);
return;
}
if ((F.v7485 == v629)) {
F.v7491 = ((*(yR99 *)rt_nil_check(F.p3187))).f_a;
while ((!(F.v7491 == ((void *)0)))) {
F.v7493 = yr2142_NewSym(v872, ((*(yR99 *)rt_nil_check(F.v7491))).f_name);
((*(yR119 *)rt_nil_check(F.v7493))).f_level = v1245;
((*(yR119 *)rt_nil_check(F.v7493))).f_cname = yr1166_Fresh(y_str("lab", 3));
yr2237_Define(F.v7493, ((*(yR99 *)rt_nil_check(F.v7491))).f_line);
F.v7491 = ((*(yR99 *)rt_nil_check(F.v7491))).f_next;
}
return;
}
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3187))).f_line, y_str("not a simple declaration", 24));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3192_NoteAlphabet(void * a_p3193, void * a_p3194) {
struct yf3195 F;
memset((void *)&F, 0, sizeof F);
F.p3193 = a_p3193;
F.p3194 = a_p3194;
if ((((((*(yR104 *)rt_nil_check(F.p3194))).f_kind == v803)) && ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3193))).f_b))).f_kind == v662)))) {
F.v7520 = yr1828_NewNode(v653, ((*(yR99 *)rt_nil_check(F.p3193))).f_line);
((*(yR99 *)rt_nil_check(F.v7520))).f_name = ((*(yR99 *)rt_nil_check(F.p3193))).f_name;
((*(yR99 *)rt_nil_check(F.v7520))).f_rep = F.p3194;
((*(yR99 *)rt_nil_check(F.v7520))).f_next = v1443;
v1443 = F.v7520;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3199_AtLocation(void * a_p3200, void * a_p3201) {
struct yf3202 F;
memset((void *)&F, 0, sizeof F);
F.p3200 = a_p3200;
F.p3201 = a_p3201;
if ((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.p3200))).f_rep))).f_kind == v821)) {
yr3401_DeviceSignal(F.p3200, F.p3201);
return;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3206_Defer(void * a_p3207, rt_int a_p3208, void * a_p3209, rt_int a_p3210) {
struct yf3211 F;
memset((void *)&F, 0, sizeof F);
F.p3207 = a_p3207;
F.p3208 = a_p3208;
F.p3209 = a_p3209;
F.p3210 = a_p3210;
F.v7530 = v1239;
if ((v1689 >= INT64_C(20000))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3207))).f_line, y_str("too many routines for this implementation", 41));
}
v1689 = rt_range(rt_add(v1689, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1608).p)[y_ix1(v1608, v1689)] = F.p3207;
((rt_int *)(v1619).p)[y_ix1(v1619, v1689)] = F.p3208;
((rt_int *)(v1630).p)[y_ix1(v1630, v1689)] = v1242;
((void * *)(v1641).p)[y_ix1(v1641, v1689)] = v1695;
((void * *)(v1652).p)[y_ix1(v1652, v1689)] = F.p3209;
((rt_int *)(v1663).p)[y_ix1(v1663, v1689)] = F.p3210;
while (((*(yR124 *)rt_nil_check(((void * *)(v1237).p)[y_ix1(v1237, F.v7530)]))).f_closed) {
F.v7530 = rt_range(rt_sub(F.v7530, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
((rt_int *)(v1674).p)[y_ix1(v1674, v1689)] = rt_range(rt_add(v1692, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1676).p)[y_ix1(v1676, v1689)] = rt_range(rt_sub(v1239, F.v7530), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo7543 = rt_add(F.v7530, INT64_C(1));
F.hi7544 = v1239;
{ rt_int hi7548 = F.hi7544;
for (rt_int i7547 = F.lo7543; i7547 <= hi7548; i7547++) { F.c_7546 = i7547;
v1692 = rt_range(rt_add(v1692, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1687).p)[y_ix1(v1687, v1692)] = ((void * *)(v1237).p)[y_ix1(v1237, F.c_7546)];
if (i7547 == hi7548) break;
}}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3215_RunDeferred(rt_int a_p3216, rt_int a_p3217) {
struct yf3218 F;
memset((void *)&F, 0, sizeof F);
F.p3216 = a_p3216;
F.p3217 = a_p3217;
F.v7555 = rt_range(rt_add(F.p3216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((F.v7555 <= v1689)) {
F.lo7566 = ((rt_int *)(v1674).p)[y_ix1(v1674, F.v7555)];
F.hi7567 = rt_sub((rt_add(((rt_int *)(v1674).p)[y_ix1(v1674, F.v7555)], ((rt_int *)(v1676).p)[y_ix1(v1676, F.v7555)])), INT64_C(1));
{ rt_int hi7571 = F.hi7567;
for (rt_int i7570 = F.lo7566; i7570 <= hi7571; i7570++) { F.c_7569 = i7570;
yr2155_ReopenScope(((void * *)(v1687).p)[y_ix1(v1687, F.c_7569)]);
if (i7570 == hi7571) break;
}}
F.v7559 = v1242;
F.v7561 = v1695;
v1242 = ((rt_int *)(v1630).p)[y_ix1(v1630, F.v7555)];
v1695 = ((void * *)(v1641).p)[y_ix1(v1641, F.v7555)];
if ((((rt_int *)(v1619).p)[y_ix1(v1619, F.v7555)] == INT64_C(1))) {
yr3172_RoutineBody(((void * *)(v1608).p)[y_ix1(v1608, F.v7555)]);
} else {
yr3222_ModuleInit(F.v7555);
}
v1242 = F.v7559;
v1695 = F.v7561;
F.lo7576 = INT64_C(1);
F.hi7577 = ((rt_int *)(v1676).p)[y_ix1(v1676, F.v7555)];
{ rt_int hi7581 = F.hi7577;
for (rt_int i7580 = F.lo7576; i7580 <= hi7581; i7580++) { F.c_7579 = i7580;
yr2161_CloseScope();
if (i7580 == hi7581) break;
}}
F.v7555 = rt_range(rt_add(F.v7555, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1689 = F.p3216;
v1692 = F.p3217;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3222_ModuleInit(rt_int a_p3223) {
struct yf3224 F;
memset((void *)&F, 0, sizeof F);
F.p3223 = a_p3223;
F.v7587 = ((void * *)(v1608).p)[y_ix1(v1608, F.p3223)];
F.v7589 = v976;
F.v7591 = ((void * *)(v1652).p)[y_ix1(v1652, F.p3223)];
v976 = ((yR134){ .f_head = ((void *)0), .f_tail = ((void *)0) });
if (((rt_int *)(v1663).p)[y_ix1(v1663, F.p3223)]) {
yr1112_Emit(yr3102_Join(yr1041_T(y_str("y_mon_enter(", 12)), yr3364_MonitorPath(v1695), yr1041_T(y_str(");", 2))));
}
v1520 = rt_range(rt_add(v1520, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1507).p)[y_ix1(v1507, v1520)] = INT64_C(0);
((rt_int *)(v1518).p)[y_ix1(v1518, v1520)] = INT64_C(0);
yr3038_BlockStatements(((*(yR99 *)rt_nil_check(F.v7587))).f_c);
v1520 = rt_range(rt_sub(v1520, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (((rt_int *)(v1663).p)[y_ix1(v1663, F.p3223)]) {
yr1112_Emit(yr3102_Join(yr1041_T(y_str("y_mon_leave(", 12)), yr3364_MonitorPath(v1695), yr1041_T(y_str(");", 2))));
}
if ((!((v976).f_head == ((void *)0)))) {
((*(yR129 *)rt_nil_check((v976).f_tail))).f_next = ((*(yR129 *)rt_nil_check(F.v7591))).f_next;
((*(yR129 *)rt_nil_check(F.v7591))).f_next = (v976).f_head;
if (((F.v7589).f_tail == F.v7591)) {
(F.v7589).f_tail = (v976).f_tail;
}
}
v976 = F.v7589;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3228_Declarations(void * a_p3229) {
struct yf3230 F;
memset((void *)&F, 0, sizeof F);
F.p3229 = a_p3229;
F.v7605 = F.p3229;
F.v7607 = ((void * *)(v1268).p)[y_ix1(v1268, v1239)];
F.v7609 = v1689;
F.v7611 = v1692;
((void * *)(v1268).p)[y_ix1(v1268, v1239)] = F.p3229;
while ((!(F.v7605 == ((void *)0)))) {
v980 = ((*(yR99 *)rt_nil_check(F.v7605))).f_line;
((void * *)(v1279).p)[y_ix1(v1279, v1239)] = F.v7605;
if ((((((*(yR99 *)rt_nil_check(F.v7605))).f_kind == v638)) || ((((*(yR99 *)rt_nil_check(F.v7605))).f_kind == v650)))) {
if ((((*(yR99 *)rt_nil_check(F.v7605))).f_sym == ((void *)0))) {
yr3234_DeclareRoutine(F.v7605);
}
} else if (((((*(yR99 *)rt_nil_check(F.v7605))).f_kind == v608))) {
if ((((*(yR99 *)rt_nil_check(F.v7605))).f_ival == INT64_C(0))) {
yr3328_CompileModule(F.v7605);
}
} else if ((((*(yR99 *)rt_nil_check(F.v7605))).f_kind == v644)) {
yr3334_DeclareTemplate(F.v7605);
} else if ((((*(yR99 *)rt_nil_check(F.v7605))).f_kind == v647)) {
yr3340_Instantiate(F.v7605);
} else {
yr3186_SimpleDecl(F.v7605);
}
F.v7605 = ((*(yR99 *)rt_nil_check(F.v7605))).f_next;
}
((void * *)(v1279).p)[y_ix1(v1279, v1239)] = ((void *)0);
((void * *)(v1268).p)[y_ix1(v1268, v1239)] = F.v7607;
yr2550_CheckPending();
yr3299_ResolveLater(v1239);
if ((!((*(yR124 *)rt_nil_check(((void * *)(v1237).p)[y_ix1(v1237, v1239)]))).f_closed)) {
yr3215_RunDeferred(F.v7609, F.v7611);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3234_DeclareRoutine(void * a_p3235) {
struct yf3236 F;
memset((void *)&F, 0, sizeof F);
F.p3235 = a_p3235;
if ((((*(yR99 *)rt_nil_check(F.p3235))).f_kind == v638)) {
yr3158_RoutineHeader(F.p3235, v860);
} else {
yr3158_RoutineHeader(F.p3235, v869);
}
if ((((*(yR99 *)rt_nil_check(F.p3235))).f_kind == v650)) {
yr3346_DeclareProcess(F.p3235);
}
yr3206_Defer(F.p3235, INT64_C(1), ((void *)0), 0);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3240_Alias(rt_int a_p3241, void * a_p3242) {
struct yf3243 F;
memset((void *)&F, 0, sizeof F);
F.p3241 = a_p3241;
F.p3242 = a_p3242;
F.v7621 = yr2142_NewSym(v878, F.p3241);
((*(yR119 *)rt_nil_check(F.v7621))).f_target = F.p3242;
((*(yR119 *)rt_nil_check(F.v7621))).f_readonly = ((*(yR119 *)rt_nil_check(F.p3242))).f_readonly;
{ void * rv7622 = F.v7621;
return rv7622; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3247_AddLits(void * * a_p3248, void * a_p3249, rt_int a_p3250) {
struct yf3251 F;
memset((void *)&F, 0, sizeof F);
F.p3248 = a_p3248;
F.p3249 = a_p3249;
F.p3250 = a_p3250;
if ((((F.p3250 > INT64_C(8))) || ((*(yR104 *)rt_nil_check(F.p3249))).f_opaque)) {
return;
}
if ((((*(yR104 *)rt_nil_check(F.p3249))).f_kind == v800)) {
F.v7628 = ((*(yR104 *)rt_nil_check(F.p3249))).f_lits;
while ((!(F.v7628 == ((void *)0)))) {
F.v7630 = yr2230_FindLit(((*(yR99 *)rt_nil_check(F.v7628))).f_name, F.p3249);
if ((!(F.v7630 == ((void *)0)))) {
F.v7630 = yr3240_Alias(((*(yR99 *)rt_nil_check(F.v7628))).f_name, F.v7630);
((*(yR119 *)rt_nil_check(F.v7630))).f_mnext = (*F.p3248);
(*F.p3248) = F.v7630;
}
F.v7628 = ((*(yR99 *)rt_nil_check(F.v7628))).f_next;
}
} else if ((((*(yR104 *)rt_nil_check(F.p3249))).f_kind == v809)) {
F.v7632 = ((*(yR104 *)rt_nil_check(F.p3249))).f_fields;
while ((!(F.v7632 == ((void *)0)))) {
yr3247_AddLits(&(*F.p3248), ((*(yR109 *)rt_nil_check(F.v7632))).f_rep, rt_range(rt_add(F.p3250, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v7632 = ((*(yR109 *)rt_nil_check(F.v7632))).f_next;
}
} else if (((((((*(yR104 *)rt_nil_check(F.p3249))).f_kind == v806)) || ((((*(yR104 *)rt_nil_check(F.p3249))).f_kind == v818))) || ((((*(yR104 *)rt_nil_check(F.p3249))).f_kind == v815)))) {
yr3247_AddLits(&(*F.p3248), ((*(yR104 *)rt_nil_check(F.p3249))).f_elem, rt_range(rt_add(F.p3250, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3255_Provides(void * a_p3256, rt_int a_p3257) {
struct yf3258 F;
memset((void *)&F, 0, sizeof F);
F.p3256 = a_p3256;
F.p3257 = a_p3257;
F.v7642 = ((*(yR99 *)rt_nil_check(F.p3256))).f_b;
if ((((*(yR99 *)rt_nil_check(F.p3256))).f_name == F.p3257)) {
{ rt_int rv7644 = 1;
return rv7644; }
}
while ((!(F.v7642 == ((void *)0)))) {
if ((((!(((*(yR99 *)rt_nil_check(F.v7642))).f_ival == INT64_C(0)))) && ((((*(yR99 *)rt_nil_check(F.v7642))).f_ival == F.p3257)))) {
{ rt_int rv7647 = 1;
return rv7647; }
}
if ((((((*(yR99 *)rt_nil_check(F.v7642))).f_ival == INT64_C(0))) && ((((*(yR99 *)rt_nil_check(F.v7642))).f_name == F.p3257)))) {
{ rt_int rv7650 = 1;
return rv7650; }
}
F.v7642 = ((*(yR99 *)rt_nil_check(F.v7642))).f_next;
}
{ rt_int rv7652 = 0;
return rv7652; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3262_ImportLater(rt_int a_p3263, rt_int a_p3264, void * * a_p3265) {
struct yf3266 F;
memset((void *)&F, 0, sizeof F);
F.p3263 = a_p3263;
F.p3264 = a_p3264;
F.p3265_o = a_p3265;
F.p3265 = ((void *)0);
if ((v1239 < INT64_C(0))) {
{ rt_int rv7661 = INT64_C(0);
(*F.p3265_o) = F.p3265;
return rv7661; }
}
F.v7658 = ((void * *)(v1268).p)[y_ix1(v1268, v1239)];
while ((!(F.v7658 == ((void *)0)))) {
if (((((((*(yR99 *)rt_nil_check(F.v7658))).f_kind == v608)) && ((!(((*(yR99 *)rt_nil_check(F.v7658))).f_ival == INT64_C(2))))) && yr3255_Provides(F.v7658, F.p3263))) {
if ((((*(yR99 *)rt_nil_check(F.v7658))).f_ival == INT64_C(1))) {
F.p3265 = F.v7658;
{ rt_int rv7665 = INT64_C(2);
(*F.p3265_o) = F.p3265;
return rv7665; }
}
yr3328_CompileModule(F.v7658);
{ rt_int rv7667 = INT64_C(1);
(*F.p3265_o) = F.p3265;
return rv7667; }
}
if ((((((((*(yR99 *)rt_nil_check(F.v7658))).f_kind == v638)) || ((((*(yR99 *)rt_nil_check(F.v7658))).f_kind == v650)))) && ((((*(yR99 *)rt_nil_check(F.v7658))).f_name == F.p3263)))) {
{ rt_int rv7669 = INT64_C(3);
(*F.p3265_o) = F.p3265;
return rv7669; }
}
if ((((!(((*(yR99 *)rt_nil_check(F.v7658))).f_kind == v608))) && yr2197_DeclaredFrom(yr3270_OneDecl(F.v7658), F.p3263))) {
yr1152_FailN(F.p3264, F.p3263, y_str(" is declared after the module that imports it: a simple declaration precedes what uses it (X.G)", 95));
}
F.v7658 = ((*(yR99 *)rt_nil_check(F.v7658))).f_next;
}
{ rt_int rv7672 = INT64_C(0);
(*F.p3265_o) = F.p3265;
return rv7672; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3270_OneDecl(void * a_p3271) {
struct yf3272 F;
memset((void *)&F, 0, sizeof F);
F.p3271 = a_p3271;
({ F.v7676 = rt_alloc(sizeof(yR99)); });
(*(yR99 *)rt_nil_check(F.v7676)) = (*(yR99 *)rt_nil_check(F.p3271));
((*(yR99 *)rt_nil_check(F.v7676))).f_next = ((void *)0);
{ void * rv7677 = F.v7676;
return rv7677; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3276_Lazy(rt_int a_p3277, rt_int a_p3278, void * a_p3279, rt_int a_p3280) {
struct yf3281 F;
memset((void *)&F, 0, sizeof F);
F.p3277 = a_p3277;
F.p3278 = a_p3278;
F.p3279 = a_p3279;
F.p3280 = a_p3280;
F.v7684 = yr2142_NewSym(v878, F.p3277);
if ((v1757 >= INT64_C(10000))) {
yr1144_FailS(F.p3280, y_str("too many imports translated later", 33));
}
v1757 = rt_range(rt_add(v1757, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1720).p)[y_ix1(v1720, v1757)] = F.v7684;
((rt_int *)(v1731).p)[y_ix1(v1731, v1757)] = F.p3278;
((void * *)(v1742).p)[y_ix1(v1742, v1757)] = F.p3279;
((rt_int *)(v1753).p)[y_ix1(v1753, v1757)] = v1239;
((rt_int *)(v1755).p)[y_ix1(v1755, v1757)] = F.p3280;
{ void * rv7689 = F.v7684;
return rv7689; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3285_SetLazy(rt_int a_p3286, void * a_p3287) {
struct yf3288 F;
memset((void *)&F, 0, sizeof F);
F.p3286 = a_p3286;
F.p3287 = a_p3287;
((*(yR119 *)rt_nil_check(((void * *)(v1720).p)[y_ix1(v1720, F.p3286)]))).f_target = F.p3287;
((*(yR119 *)rt_nil_check(((void * *)(v1720).p)[y_ix1(v1720, F.p3286)]))).f_readonly = ((*(yR119 *)rt_nil_check(F.p3287))).f_readonly;
((void * *)(v1720).p)[y_ix1(v1720, F.p3286)] = ((void *)0);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3292_ResolveFrom(void * a_p3293, void * a_p3294) {
struct yf3295 F;
memset((void *)&F, 0, sizeof F);
F.p3293 = a_p3293;
F.p3294 = a_p3294;
F.lo7701 = INT64_C(1);
F.hi7702 = v1757;
{ rt_int hi7706 = F.hi7702;
for (rt_int i7705 = F.lo7701; i7705 <= hi7706; i7705++) { F.c_7704 = i7705;
if ((((!(((void * *)(v1720).p)[y_ix1(v1720, F.c_7704)] == ((void *)0)))) && ((((void * *)(v1742).p)[y_ix1(v1742, F.c_7704)] == F.p3293)))) {
F.v7697 = ((*(yR119 *)rt_nil_check(F.p3294))).f_members;
while ((((!(F.v7697 == ((void *)0)))) && ((!(((*(yR119 *)rt_nil_check(F.v7697))).f_name == ((rt_int *)(v1731).p)[y_ix1(v1731, F.c_7704)]))))) {
F.v7697 = ((*(yR119 *)rt_nil_check(F.v7697))).f_mnext;
}
if ((F.v7697 == ((void *)0))) {
yr1152_FailN(((rt_int *)(v1755).p)[y_ix1(v1755, F.c_7704)], ((rt_int *)(v1731).p)[y_ix1(v1731, F.c_7704)], y_str(" is not exported by that module", 31));
}
yr3285_SetLazy(rt_range(F.c_7704, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), F.v7697);
}
if (i7705 == hi7706) break;
}}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3299_ResolveLater(rt_int a_p3300) {
struct yf3301 F;
memset((void *)&F, 0, sizeof F);
F.p3300 = a_p3300;
F.lo7715 = INT64_C(1);
F.hi7716 = v1757;
{ rt_int hi7720 = F.hi7716;
for (rt_int i7719 = F.lo7715; i7719 <= hi7720; i7719++) { F.c_7718 = i7719;
if (((((!(((void * *)(v1720).p)[y_ix1(v1720, F.c_7718)] == ((void *)0)))) && ((((void * *)(v1742).p)[y_ix1(v1742, F.c_7718)] == ((void *)0)))) && ((((rt_int *)(v1753).p)[y_ix1(v1753, F.c_7718)] == F.p3300)))) {
F.v7711 = yr2172_Find(((rt_int *)(v1731).p)[y_ix1(v1731, F.c_7718)]);
if ((F.v7711 == ((void *)0))) {
yr1152_FailN(((rt_int *)(v1755).p)[y_ix1(v1755, F.c_7718)], ((rt_int *)(v1731).p)[y_ix1(v1731, F.c_7718)], y_str(" is not declared around this module (X.B.2)", 43));
}
yr3285_SetLazy(rt_range(F.c_7718, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), F.v7711);
}
if (i7719 == hi7720) break;
}}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3305_LazyModule(void * a_p3306, void * * a_p3307, rt_int a_p3308) {
struct yf3309 F;
memset((void *)&F, 0, sizeof F);
F.p3306 = a_p3306;
F.p3307 = a_p3307;
F.p3308 = a_p3308;
F.v7727 = ((*(yR99 *)rt_nil_check(F.p3306))).f_b;
while ((!(F.v7727 == ((void *)0)))) {
F.v7731 = ((*(yR99 *)rt_nil_check(F.v7727))).f_name;
if ((!(((*(yR99 *)rt_nil_check(F.v7727))).f_ival == INT64_C(0)))) {
F.v7731 = rt_range(((*(yR99 *)rt_nil_check(F.v7727))).f_ival, INT64_C(0), INT64_C(4000000));
}
if (((((!(F.v7731 == v515))) && ((!(F.v7731 == v569)))) && ((!(F.v7731 == v554))))) {
F.v7729 = yr3276_Lazy(F.v7731, F.v7731, F.p3306, F.p3308);
((*(yR119 *)rt_nil_check(F.v7729))).f_mnext = (*F.p3307);
(*F.p3307) = F.v7729;
}
F.v7727 = ((*(yR99 *)rt_nil_check(F.v7727))).f_next;
}
F.v7729 = yr3276_Lazy(((*(yR99 *)rt_nil_check(F.p3306))).f_name, ((*(yR99 *)rt_nil_check(F.p3306))).f_name, ((void *)0), F.p3308);
((*(yR119 *)rt_nil_check(F.v7729))).f_mnext = (*F.p3307);
(*F.p3307) = F.v7729;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3313_ResolveItem(void * a_p3314, void * * a_p3315, rt_int a_p3316) {
struct yf3317 F;
memset((void *)&F, 0, sizeof F);
F.p3314 = a_p3314;
F.p3315 = a_p3315;
F.p3316 = a_p3316;
F.v7748 = ((*(yR99 *)rt_nil_check(F.p3314))).f_flag;
if (((F.p3316 && ((((*(yR99 *)rt_nil_check(F.p3314))).f_text == INT64_C(0)))) && (((((((*(yR99 *)rt_nil_check(F.p3314))).f_name == v515)) || ((((*(yR99 *)rt_nil_check(F.p3314))).f_name == v569))) || ((((*(yR99 *)rt_nil_check(F.p3314))).f_name == v554)))))) {
if ((yr2178_FindHere(((*(yR99 *)rt_nil_check(F.p3314))).f_name) == ((void *)0))) {
return;
}
}
F.v7744 = ((*(yR99 *)rt_nil_check(F.p3314))).f_name;
if ((!(((*(yR99 *)rt_nil_check(F.p3314))).f_ival == INT64_C(0)))) {
F.v7744 = rt_range(((*(yR99 *)rt_nil_check(F.p3314))).f_ival, INT64_C(0), INT64_C(4000000));
}
if ((!(((*(yR99 *)rt_nil_check(F.p3314))).f_text == INT64_C(0)))) {
if ((((!F.p3316)) && ((yr2172_Find(((*(yR99 *)rt_nil_check(F.p3314))).f_text) == ((void *)0))))) {
F.v7750 = yr3262_ImportLater(((*(yR99 *)rt_nil_check(F.p3314))).f_text, ((*(yR99 *)rt_nil_check(F.p3314))).f_line, &F.v7752);
if ((F.v7750 == INT64_C(2))) {
F.v7742 = yr3276_Lazy(F.v7744, ((*(yR99 *)rt_nil_check(F.p3314))).f_name, F.v7752, ((*(yR99 *)rt_nil_check(F.p3314))).f_line);
((*(yR119 *)rt_nil_check(F.v7742))).f_mnext = (*F.p3315);
(*F.p3315) = F.v7742;
return;
}
}
F.v7740 = yr2270_Real(yr2184_Lookup(((*(yR99 *)rt_nil_check(F.p3314))).f_text, ((*(yR99 *)rt_nil_check(F.p3314))).f_line));
if ((!(((*(yR119 *)rt_nil_check(F.v7740))).f_kind == v863))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3314))).f_line, ((*(yR99 *)rt_nil_check(F.p3314))).f_text, y_str(" is not a module", 16));
}
F.v7738 = ((*(yR119 *)rt_nil_check(F.v7740))).f_members;
while ((((!(F.v7738 == ((void *)0)))) && ((!(((*(yR119 *)rt_nil_check(F.v7738))).f_name == ((*(yR99 *)rt_nil_check(F.p3314))).f_name))))) {
F.v7738 = ((*(yR119 *)rt_nil_check(F.v7738))).f_mnext;
}
if ((F.v7738 == ((void *)0))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3314))).f_line, ((*(yR99 *)rt_nil_check(F.p3314))).f_name, y_str(" is not exported by that module", 31));
}
} else {
if (F.p3316) {
F.v7738 = yr2178_FindHere(((*(yR99 *)rt_nil_check(F.p3314))).f_name);
} else {
F.v7738 = yr2172_Find(((*(yR99 *)rt_nil_check(F.p3314))).f_name);
}
if ((((F.v7738 == ((void *)0))) && (!F.p3316))) {
F.v7750 = yr3262_ImportLater(((*(yR99 *)rt_nil_check(F.p3314))).f_name, ((*(yR99 *)rt_nil_check(F.p3314))).f_line, &F.v7752);
if ((((F.v7750 == INT64_C(2))) && ((((*(yR99 *)rt_nil_check(F.v7752))).f_name == ((*(yR99 *)rt_nil_check(F.p3314))).f_name)))) {
if ((((!(F.v7748 == INT64_C(0)))) || ((!(((*(yR99 *)rt_nil_check(F.p3314))).f_ival == INT64_C(0)))))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3314))).f_line, y_str("a module name in a list takes no attribute and no AS (X.B.3)", 60));
}
yr3305_LazyModule(F.v7752, &(*F.p3315), ((*(yR99 *)rt_nil_check(F.p3314))).f_line);
return;
}
if ((F.v7750 >= INT64_C(2))) {
F.v7742 = yr3276_Lazy(F.v7744, ((*(yR99 *)rt_nil_check(F.p3314))).f_name, F.v7752, ((*(yR99 *)rt_nil_check(F.p3314))).f_line);
((*(yR119 *)rt_nil_check(F.v7742))).f_mnext = (*F.p3315);
(*F.p3315) = F.v7742;
return;
}
F.v7738 = yr2172_Find(((*(yR99 *)rt_nil_check(F.p3314))).f_name);
}
if ((F.v7738 == ((void *)0))) {
if (F.p3316) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3314))).f_line, ((*(yR99 *)rt_nil_check(F.p3314))).f_name, y_str(" is not declared in this module", 31));
} else {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3314))).f_line, ((*(yR99 *)rt_nil_check(F.p3314))).f_name, y_str(" is not declared around this module (X.B.2)", 43));
}
}
}
F.v7740 = yr2270_Real(F.v7738);
if ((((((*(yR119 *)rt_nil_check(F.v7740))).f_kind == v863)) && ((((*(yR99 *)rt_nil_check(F.p3314))).f_text == INT64_C(0))))) {
if ((((!(F.v7748 == INT64_C(0)))) || ((!(((*(yR99 *)rt_nil_check(F.p3314))).f_ival == INT64_C(0)))))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3314))).f_line, y_str("a module name in a list takes no attribute and no AS (X.B.3)", 60));
}
F.v7742 = ((*(yR119 *)rt_nil_check(F.v7740))).f_members;
while ((!(F.v7742 == ((void *)0)))) {
F.v7738 = yr3240_Alias(((*(yR119 *)rt_nil_check(F.v7742))).f_name, F.v7742);
((*(yR119 *)rt_nil_check(F.v7738))).f_mnext = (*F.p3315);
(*F.p3315) = F.v7738;
F.v7742 = ((*(yR119 *)rt_nil_check(F.v7742))).f_mnext;
}
if ((!F.p3316)) {
F.v7738 = yr3240_Alias(((*(yR119 *)rt_nil_check(F.v7740))).f_name, F.v7740);
((*(yR119 *)rt_nil_check(F.v7738))).f_mnext = (*F.p3315);
(*F.p3315) = F.v7738;
}
return;
}
F.v7742 = yr3240_Alias(F.v7744, F.v7738);
if (F.p3316) {
if ((((((*(yR119 *)rt_nil_check(F.v7740))).f_kind == v851)) || ((((*(yR119 *)rt_nil_check(F.v7740))).f_kind == v854)))) {
if ((((F.v7748 == v413)) || ((F.v7748 == v467)))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3314))).f_line, y_str("READONLY and VAR are for variables", 34));
}
if ((((!(F.v7748 == v458))) || ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v7740))).f_rep))).f_opaque)) {
F.v7746 = yr2283_CopyRep(((*(yR119 *)rt_nil_check(F.v7740))).f_rep);
((*(yR104 *)rt_nil_check(F.v7746))).f_opaque = 1;
((*(yR104 *)rt_nil_check(F.v7746))).f_opaqueops = v1708;
((*(yR119 *)rt_nil_check(F.v7742))).f_target = yr2142_NewSym(((*(yR119 *)rt_nil_check(F.v7740))).f_kind, ((*(yR119 *)rt_nil_check(F.v7740))).f_name);
((*(yR119 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v7742))).f_target))).f_rep = F.v7746;
((*(yR119 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v7742))).f_target))).f_decl = ((*(yR119 *)rt_nil_check(F.v7740))).f_decl;
} else {
yr3247_AddLits(&(*F.p3315), ((*(yR119 *)rt_nil_check(F.v7740))).f_rep, INT64_C(0));
}
} else if ((((*(yR119 *)rt_nil_check(F.v7740))).f_kind == v845)) {
if ((((F.v7748 == v380)) || ((F.v7748 == v458)))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3314))).f_line, y_str("OPAQUE and TRANSPARENT are for types", 36));
}
if ((!(F.v7748 == v467))) {
((*(yR119 *)rt_nil_check(F.v7742))).f_readonly = 1;
}
} else if ((!(F.v7748 == INT64_C(0)))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3314))).f_line, y_str("an attribute is for a type, a representation or a variable", 58));
}
if ((((((*(yR119 *)rt_nil_check(F.v7740))).f_kind == v845)) && ((((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v7740))).f_rep))).f_kind == v821)) || yr2326_HoldsSignal(((*(yR119 *)rt_nil_check(F.v7740))).f_rep))))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3314))).f_line, y_str("a signal may not be exported from its monitor (X.E.4)", 53));
}
} else if ((((((*(yR119 *)rt_nil_check(F.v7740))).f_kind == v851)) || ((((*(yR119 *)rt_nil_check(F.v7740))).f_kind == v854)))) {
yr3247_AddLits(&(*F.p3315), ((*(yR119 *)rt_nil_check(F.v7740))).f_rep, INT64_C(0));
}
((*(yR119 *)rt_nil_check(F.v7742))).f_mnext = (*F.p3315);
(*F.p3315) = F.v7742;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3321_DefineAll(void * a_p3322, rt_int a_p3323) {
struct yf3324 F;
memset((void *)&F, 0, sizeof F);
F.p3322 = a_p3322;
F.p3323 = a_p3323;
F.v7783 = F.p3322;
F.v7785 = F.p3322;
F.v7787 = F.p3322;
while ((!(F.v7783 == ((void *)0)))) {
F.v7785 = ((*(yR119 *)rt_nil_check(F.v7783))).f_mnext;
F.v7787 = yr2178_FindHere(((*(yR119 *)rt_nil_check(F.v7783))).f_name);
if (((!yr2218_Resolved(F.v7783)) || ((((!(F.v7787 == ((void *)0)))) && (!yr2218_Resolved(F.v7787)))))) {
if ((!(F.v7787 == ((void *)0)))) {
yr1152_FailN(F.p3323, ((*(yR119 *)rt_nil_check(F.v7783))).f_name, y_str(" comes into this scope twice", 28));
}
yr2237_Define(F.v7783, F.p3323);
} else if ((((F.v7787 == ((void *)0))) || ((!(yr2270_Real(F.v7787) == yr2270_Real(F.v7783)))))) {
if (((((!(F.v7787 == ((void *)0)))) && ((((*(yR119 *)rt_nil_check(yr2270_Real(F.v7783)))).f_kind == v857))) && ((((*(yR119 *)rt_nil_check(yr2270_Real(F.v7787)))).f_kind == v857)))) {
yr2237_Define(F.v7783, F.p3323);
} else if ((F.v7787 == ((void *)0))) {
yr2237_Define(F.v7783, F.p3323);
} else {
yr1152_FailN(F.p3323, ((*(yR119 *)rt_nil_check(F.v7783))).f_name, y_str(" comes into this scope twice", 28));
}
}
F.v7783 = F.v7785;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3328_CompileModule(void * a_p3329) {
struct yf3330 F;
memset((void *)&F, 0, sizeof F);
F.p3329 = a_p3329;
F.v7817 = 0;
((*(yR99 *)rt_nil_check(F.p3329))).f_ival = INT64_C(1);
F.v7793 = ((void *)0);
F.v7809 = ((*(yR99 *)rt_nil_check(F.p3329))).f_a;
while ((!(F.v7809 == ((void *)0)))) {
yr3313_ResolveItem(F.v7809, &F.v7793, 0);
F.v7809 = ((*(yR99 *)rt_nil_check(F.v7809))).f_next;
}
F.v7803 = v1695;
if ((((((*(yR99 *)rt_nil_check(F.p3329))).f_flag == INT64_C(1))) && ((v1695 == ((void *)0))))) {
F.v7805 = yr2142_NewSym(v845, ((*(yR99 *)rt_nil_check(F.p3329))).f_name);
((*(yR119 *)rt_nil_check(F.v7805))).f_level = v1245;
((*(yR119 *)rt_nil_check(F.v7805))).f_cname = yr1166_Fresh(y_str("mon", 3));
((*(yR119 *)rt_nil_check(F.v7805))).f_rep = v1314;
yr2257_DeclStorage(yr1041_T(y_str("ymon", 4)), ((*(yR119 *)rt_nil_check(F.v7805))).f_cname);
yr1112_Emit(yr3102_Join(yr1041_T(y_str("y_mon_init(&", 12)), yr2244_Path(v1245, ((*(yR119 *)rt_nil_check(F.v7805))).f_cname), yr1041_T(y_str(");", 2))));
v1695 = F.v7805;
F.v7817 = 1;
}
yr2149_OpenScope(1);
((void * *)(v1706).p)[y_ix1(v1706, v1239)] = ((void *)0);
F.v7813 = v1242;
v1242 = v1239;
yr3321_DefineAll(F.v7793, ((*(yR99 *)rt_nil_check(F.p3329))).f_line);
yr3228_Declarations(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3329))).f_c))).f_a);
yr1112_Emit(yr3102_Join(yr1041_T(y_str("/* ", 3)), ((*(yR99 *)rt_nil_check(F.p3329))).f_name, yr1041_T(y_str(" */", 3))));
yr3206_Defer(F.p3329, INT64_C(2), (v976).f_tail, F.v7817);
v1708 = INT64_C(0);
F.v7809 = ((*(yR99 *)rt_nil_check(F.p3329))).f_b;
while ((!(F.v7809 == ((void *)0)))) {
if ((((((*(yR99 *)rt_nil_check(F.v7809))).f_text == INT64_C(0))) && ((yr2178_FindHere(((*(yR99 *)rt_nil_check(F.v7809))).f_name) == ((void *)0))))) {
if ((((*(yR99 *)rt_nil_check(F.v7809))).f_name == v515)) {
v1708 = rt_range(rt_add(v1708, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((((((*(yR99 *)rt_nil_check(F.v7809))).f_name == v569)) || ((((*(yR99 *)rt_nil_check(F.v7809))).f_name == v554)))) {
if (((rt_div(v1708, INT64_C(2))) == INT64_C(0))) {
v1708 = rt_range(rt_add(v1708, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
}
F.v7809 = ((*(yR99 *)rt_nil_check(F.v7809))).f_next;
}
F.v7795 = ((void *)0);
F.v7809 = ((*(yR99 *)rt_nil_check(F.p3329))).f_b;
while ((!(F.v7809 == ((void *)0)))) {
yr3313_ResolveItem(F.v7809, &F.v7795, 1);
F.v7809 = ((*(yR99 *)rt_nil_check(F.v7809))).f_next;
}
F.v7811 = ((void * *)(v1706).p)[y_ix1(v1706, v1239)];
v1242 = F.v7813;
yr2161_CloseScope();
while ((!(F.v7811 == ((void *)0)))) {
F.v7809 = ((*(yR99 *)rt_nil_check(F.v7811))).f_next;
((*(yR99 *)rt_nil_check(F.v7811))).f_next = ((void * *)(v1706).p)[y_ix1(v1706, v1239)];
((void * *)(v1706).p)[y_ix1(v1706, v1239)] = F.v7811;
F.v7811 = F.v7809;
}
v1695 = F.v7803;
F.v7799 = yr2142_NewSym(v863, ((*(yR99 *)rt_nil_check(F.p3329))).f_name);
((*(yR119 *)rt_nil_check(F.v7799))).f_members = F.v7795;
yr2237_Define(F.v7799, ((*(yR99 *)rt_nil_check(F.p3329))).f_line);
F.v7801 = F.v7795;
F.v7795 = ((void *)0);
while ((!(F.v7801 == ((void *)0)))) {
F.v7807 = ((*(yR119 *)rt_nil_check(F.v7801))).f_mnext;
F.v7797 = yr3240_Alias(((*(yR119 *)rt_nil_check(F.v7801))).f_name, F.v7801);
((*(yR119 *)rt_nil_check(F.v7797))).f_readonly = ((*(yR119 *)rt_nil_check(F.v7801))).f_readonly;
((*(yR119 *)rt_nil_check(F.v7797))).f_mnext = F.v7795;
F.v7795 = F.v7797;
F.v7801 = F.v7807;
}
((*(yR119 *)rt_nil_check(F.v7799))).f_members = F.v7795;
((*(yR99 *)rt_nil_check(F.p3329))).f_ival = INT64_C(2);
yr3292_ResolveFrom(F.p3329, F.v7799);
F.v7801 = F.v7795;
while ((!(F.v7801 == ((void *)0)))) {
F.v7807 = yr3240_Alias(((*(yR119 *)rt_nil_check(F.v7801))).f_name, F.v7801);
((*(yR119 *)rt_nil_check(F.v7807))).f_readonly = ((*(yR119 *)rt_nil_check(F.v7801))).f_readonly;
if ((yr2178_FindHere(((*(yR119 *)rt_nil_check(F.v7801))).f_name) == ((void *)0))) {
yr2237_Define(F.v7807, ((*(yR99 *)rt_nil_check(F.p3329))).f_line);
} else if ((((((*(yR119 *)rt_nil_check(yr2178_FindHere(((*(yR119 *)rt_nil_check(F.v7801))).f_name)))).f_kind == v878)) && ((!(yr2270_Real(yr2178_FindHere(((*(yR119 *)rt_nil_check(F.v7801))).f_name)) == yr2270_Real(F.v7801)))))) {
yr2237_Define(F.v7807, ((*(yR99 *)rt_nil_check(F.p3329))).f_line);
} else if ((!(((*(yR119 *)rt_nil_check(yr2270_Real(F.v7801)))).f_kind == v857))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3329))).f_line, ((*(yR119 *)rt_nil_check(F.v7801))).f_name, y_str(" is exported into a scope that has it already", 45));
}
F.v7801 = ((*(yR119 *)rt_nil_check(F.v7801))).f_mnext;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3334_DeclareTemplate(void * a_p3335) {
struct yf3336 F;
memset((void *)&F, 0, sizeof F);
F.p3335 = a_p3335;
F.v7846 = yr2142_NewSym(v866, ((*(yR99 *)rt_nil_check(F.p3335))).f_name);
((*(yR119 *)rt_nil_check(F.v7846))).f_decl = F.p3335;
yr2237_Define(F.v7846, ((*(yR99 *)rt_nil_check(F.p3335))).f_line);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3340_Instantiate(void * a_p3341) {
struct yf3342 F;
memset((void *)&F, 0, sizeof F);
F.p3341 = a_p3341;
F.v7850 = yr2270_Real(yr2184_Lookup(((*(yR99 *)rt_nil_check(F.p3341))).f_name, ((*(yR99 *)rt_nil_check(F.p3341))).f_line));
if ((!(((*(yR119 *)rt_nil_check(F.v7850))).f_kind == v866))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3341))).f_line, ((*(yR99 *)rt_nil_check(F.p3341))).f_name, y_str(" is not a template", 18));
}
F.v7852 = ((*(yR119 *)rt_nil_check(F.v7850))).f_decl;
if ((!(yr1843_Count(((*(yR99 *)rt_nil_check(F.v7852))).f_a) == yr1843_Count(((*(yR99 *)rt_nil_check(F.p3341))).f_a)))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3341))).f_line, ((*(yR99 *)rt_nil_check(F.p3341))).f_name, y_str(": the number of actuals is wrong", 32));
}
F.v7858 = rt_range(rt_add(v1179, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo7874 = ((*(yR99 *)rt_nil_check(F.v7852))).f_ival;
F.hi7875 = rt_sub(((*(yR99 *)rt_nil_check(F.v7852))).f_flag, INT64_C(1));
{ rt_int hi7879 = F.hi7875;
for (rt_int i7878 = F.lo7874; i7878 <= hi7879; i7878++) { F.c_7877 = i7878;
F.v7862 = ((rt_int *)(v1173).p)[y_ix1(v1173, F.c_7877)];
F.v7864 = ((rt_int *)(v1175).p)[y_ix1(v1175, F.c_7877)];
if ((F.v7862 == v191)) {
F.v7854 = ((*(yR99 *)rt_nil_check(F.v7852))).f_a;
F.v7856 = ((*(yR99 *)rt_nil_check(F.p3341))).f_a;
while ((!(F.v7854 == ((void *)0)))) {
if ((((((*(yR99 *)rt_nil_check(F.v7854))).f_name == F.v7864)) && ((F.v7862 == v191)))) {
if ((((*(yR99 *)rt_nil_check(F.v7856))).f_flag == INT64_C(1))) {
F.v7862 = v200;
F.v7864 = ((*(yR99 *)rt_nil_check(F.v7856))).f_ival;
} else {
F.v7864 = ((*(yR99 *)rt_nil_check(F.v7856))).f_name;
if ((F.v7864 <= v476)) {
F.v7862 = v194;
} else if ((F.v7864 <= v605)) {
F.v7862 = v197;
}
}
}
F.v7854 = ((*(yR99 *)rt_nil_check(F.v7854))).f_next;
F.v7856 = ((*(yR99 *)rt_nil_check(F.v7856))).f_next;
}
}
v1179 = rt_range(rt_add(v1179, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1173).p)[y_ix1(v1173, v1179)] = F.v7862;
((rt_int *)(v1175).p)[y_ix1(v1175, v1179)] = F.v7864;
((rt_int *)(v1177).p)[y_ix1(v1177, v1179)] = ((rt_int *)(v1177).p)[y_ix1(v1177, F.c_7877)];
if (i7878 == hi7879) break;
}}
v1179 = rt_range(rt_add(v1179, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1173).p)[y_ix1(v1173, v1179)] = v188;
((rt_int *)(v1175).p)[y_ix1(v1175, v1179)] = INT64_C(0);
((rt_int *)(v1177).p)[y_ix1(v1177, v1179)] = ((*(yR99 *)rt_nil_check(F.p3341))).f_line;
F.v7860 = v1215;
v1215 = F.v7858;
F.v7866 = yr1933_ParseModule();
v1215 = F.v7860;
yr3328_CompileModule(F.v7866);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3346_DeclareProcess(void * a_p3347) {
struct yf3348 F;
memset((void *)&F, 0, sizeof F);
F.p3347 = a_p3347;
F.v7889 = ((*(yR99 *)rt_nil_check(F.p3347))).f_sym;
((*(yR119 *)rt_nil_check(F.v7889))).f_monitor = v1695;
yr2257_DeclStorage(yr1041_T(y_str("rt_taskdecl", 11)), yr3102_Join(((*(yR119 *)rt_nil_check(F.v7889))).f_cname, yr1041_T(y_str("_d", 2)), INT64_C(0)));
F.v7891 = yr1828_NewNode(v653, ((*(yR99 *)rt_nil_check(F.p3347))).f_line);
((*(yR99 *)rt_nil_check(F.v7891))).f_sym = F.v7889;
((*(yR99 *)rt_nil_check(F.v7891))).f_next = ((void * *)(v1706).p)[y_ix1(v1706, v1239)];
((void * *)(v1706).p)[y_ix1(v1706, v1239)] = F.v7891;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3352_AwaitProcesses(void) {
struct yf3353 F;
memset((void *)&F, 0, sizeof F);
F.v7897 = ((void * *)(v1706).p)[y_ix1(v1706, v1239)];
while ((!(F.v7897 == ((void *)0)))) {
yr1112_Emit(yr3102_Join(yr1041_T(y_str("rt_await_decl(&", 15)), yr2244_Path(rt_range(rt_sub(((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7897))).f_sym))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr3102_Join(((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7897))).f_sym))).f_cname, yr1041_T(y_str("_d", 2)), INT64_C(0))), yr1041_T(y_str(");", 2))));
F.v7897 = ((*(yR99 *)rt_nil_check(F.v7897))).f_next;
}
((void * *)(v1706).p)[y_ix1(v1706, v1239)] = ((void *)0);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3357_Activate(void * a_p3358, void * a_p3359) {
struct yf3360 F;
memset((void *)&F, 0, sizeof F);
F.p3358 = a_p3358;
F.p3359 = a_p3359;
F.v7928 = ((*(yR119 *)rt_nil_check(F.p3359))).f_decl;
yr2899_CompileArgs(((*(yR99 *)rt_nil_check(F.p3358))).f_a, F.p3359, &F.v7908, &F.v7910);
if ((!(F.v7910 == ((*(yR119 *)rt_nil_check(F.p3359))).f_nparams))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3358))).f_line, ((*(yR119 *)rt_nil_check(F.p3359))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
F.v7916 = yr1166_Fresh(y_str("pf", 2));
yr1112_Emit(yr3102_Join(yr1041_T(y_str("{ struct ", 9)), ((*(yR119 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.p3359))).f_members))).f_name, yr3102_Join(yr1041_T(y_str(" *", 2)), F.v7916, yr3102_Join(yr1041_T(y_str(" = rt_alloc(sizeof *", 20)), F.v7916, yr1041_T(y_str(");", 2))))));
if ((((*(yR119 *)rt_nil_check(F.p3359))).f_level > INT64_C(1))) {
yr1112_Emit(yr3102_Join(F.v7916, yr1041_T(y_str("->up = ", 7)), yr3102_Join(yr2251_FramePtr(rt_range(rt_sub(((*(yR119 *)rt_nil_check(F.p3359))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))), yr1041_T(y_str(";", 1)), INT64_C(0))));
}
F.v7914 = ((*(yR119 *)rt_nil_check(F.p3359))).f_params;
F.v7912 = rt_range(rt_add(F.v7908, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(F.v7914 == ((void *)0)))) {
if ((!yr2878_Fits(((*(yR114 *)rt_nil_check(F.v7914))).f_rep, ((void * *)(v1465).p)[y_ix1(v1465, F.v7912)]))) {
yr2363_TypeClash(((*(yR99 *)rt_nil_check(((void * *)(v1476).p)[y_ix1(v1476, F.v7912)]))).f_line, ((*(yR114 *)rt_nil_check(F.v7914))).f_rep, ((void * *)(v1465).p)[y_ix1(v1465, F.v7912)]);
}
F.v7922 = yr3102_Join(F.v7916, yr1041_T(y_str("->", 2)), ((*(yR114 *)rt_nil_check(F.v7914))).f_cname);
yr2908_CheckUnresolved(((*(yR114 *)rt_nil_check(F.v7914))).f_rep, ((void * *)(v1465).p)[y_ix1(v1465, F.v7912)], ((*(yR99 *)rt_nil_check(((void * *)(v1476).p)[y_ix1(v1476, F.v7912)]))).f_line);
if ((((*(yR114 *)rt_nil_check(F.v7914))).f_cls == v887)) {
if ((!yr2740_IsVariable(((void * *)(v1476).p)[y_ix1(v1476, F.v7912)]))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(((void * *)(v1476).p)[y_ix1(v1476, F.v7912)]))).f_line, ((*(yR114 *)rt_nil_check(F.v7914))).f_name, y_str(": the actual of a VAR parameter must be a variable", 50));
}
if ((!yr2916_SameAsFormal(((*(yR114 *)rt_nil_check(F.v7914))).f_rep, ((void * *)(v1465).p)[y_ix1(v1465, F.v7912)]))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(((void * *)(v1476).p)[y_ix1(v1476, F.v7912)]))).f_line, ((*(yR114 *)rt_nil_check(F.v7914))).f_name, y_str(": a VAR actual has the representation of its formal (VII.G, X.A.2)", 66));
}
yr1112_Emit(yr3102_Join(F.v7922, yr1041_T(y_str(" = &", 4)), yr3102_Join(((rt_int *)(v1454).p)[y_ix1(v1454, F.v7912)], yr1041_T(y_str(";", 1)), INT64_C(0))));
} else if (yr2313_Deep(((*(yR114 *)rt_nil_check(F.v7914))).f_rep)) {
F.v7918 = yr1166_Fresh(y_str("t", 1));
yr1112_Emit(yr3102_Join(yr1041_T(y_str("{ ", 2)), yr2338_CType(((*(yR114 *)rt_nil_check(F.v7914))).f_rep), yr3102_Join(yr1041_T(y_str(" ", 1)), F.v7918, yr3102_Join(yr1041_T(y_str(" = ", 3)), yr2712_Convert(((rt_int *)(v1454).p)[y_ix1(v1454, F.v7912)], ((*(yR114 *)rt_nil_check(F.v7914))).f_rep, ((void * *)(v1465).p)[y_ix1(v1465, F.v7912)]), yr1041_T(y_str(";", 1))))));
if ((((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v7914))).f_rep))).f_kind == v827)) {
yr1112_Emit(yr3102_Join(yr1041_T(y_str("y_copy(y_desc_vector(", 21)), yr2344_DescOf(((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v7914))).f_rep))).f_elem), yr3102_Join(yr1041_T(y_str("), &", 4)), F.v7922, yr3102_Join(yr1041_T(y_str(", &", 3)), F.v7918, yr1041_T(y_str("); }", 4))))));
} else {
yr1112_Emit(yr3102_Join(yr1041_T(y_str("y_copy(", 7)), yr2344_DescOf(((*(yR114 *)rt_nil_check(F.v7914))).f_rep), yr3102_Join(yr1041_T(y_str(", &", 3)), F.v7922, yr3102_Join(yr1041_T(y_str(", &", 3)), F.v7918, yr1041_T(y_str("); }", 4))))));
}
} else {
yr1112_Emit(yr3102_Join(F.v7922, yr1041_T(y_str(" = ", 3)), yr3102_Join(yr2712_Convert(((rt_int *)(v1454).p)[y_ix1(v1454, F.v7912)], ((*(yR114 *)rt_nil_check(F.v7914))).f_rep, ((void * *)(v1465).p)[y_ix1(v1465, F.v7912)]), yr1041_T(y_str(";", 1)), INT64_C(0))));
}
F.v7912 = rt_range(rt_add(F.v7912, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7914 = ((*(yR114 *)rt_nil_check(F.v7914))).f_next;
}
v1478 = F.v7908;
F.v7924 = yr1041_T(y_str("0", 1));
if ((!(((*(yR99 *)rt_nil_check(F.v7928))).f_e == ((void *)0)))) {
yr2779_Expr(((*(yR99 *)rt_nil_check(F.v7928))).f_e, v1308, &F.v7924, &F.v7930);
yr2371_CheckType(((*(yR99 *)rt_nil_check(F.v7928))).f_line, v1308, F.v7930);
}
F.v7926 = yr1041_T(y_str("0, 0", 4));
if ((!(((*(yR99 *)rt_nil_check(F.v7928))).f_d == ((void *)0)))) {
yr2779_Expr(((*(yR99 *)rt_nil_check(F.v7928))).f_d, v1308, &F.v7920, &F.v7930);
yr2371_CheckType(((*(yR99 *)rt_nil_check(F.v7928))).f_line, v1308, F.v7930);
F.v7926 = yr3102_Join(yr1041_T(y_str("1, ", 3)), F.v7920, INT64_C(0));
}
yr1006_SB();
yr1017_SA(y_str("y_create(&", 10));
yr1024_ST(yr2244_Path(rt_range(rt_sub(((*(yR119 *)rt_nil_check(F.p3359))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr3102_Join(((*(yR119 *)rt_nil_check(F.p3359))).f_cname, yr1041_T(y_str("_d", 2)), INT64_C(0))));
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.v7924);
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.v7926);
yr1017_SA(y_str(", ", 2));
yr1024_ST(((*(yR119 *)rt_nil_check(F.p3359))).f_cname);
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.v7916);
yr1017_SA(y_str("); }", 4));
F.v7918 = yr1036_SE();
yr1112_Emit(F.v7918);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3364_MonitorPath(void * a_p3365) {
struct yf3366 F;
memset((void *)&F, 0, sizeof F);
F.p3365 = a_p3365;
{ rt_int rv7987 = yr3102_Join(yr1041_T(y_str("&", 1)), yr2244_Path(((*(yR119 *)rt_nil_check(F.p3365))).f_level, ((*(yR119 *)rt_nil_check(F.p3365))).f_cname), INT64_C(0));
return rv7987; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3370_EnterMonitor(void * a_p3371) {
struct yf3372 F;
memset((void *)&F, 0, sizeof F);
F.p3371 = a_p3371;
if ((((*(yR119 *)rt_nil_check(F.p3371))).f_kind == v860)) {
((*(yR119 *)rt_nil_check(F.p3371))).f_monitor = v1695;
}
if ((((*(yR119 *)rt_nil_check(F.p3371))).f_monitor == ((void *)0))) {
return;
}
yr1112_Emit(yr3102_Join(yr1041_T(y_str("y_mon_enter(", 12)), yr3364_MonitorPath(((*(yR119 *)rt_nil_check(F.p3371))).f_monitor), yr1041_T(y_str(");", 2))));
F.v7991 = yr1166_Fresh(y_str("mf", 2));
v1596 = 1;
yr1112_Emit(yr3102_Join(yr1041_T(y_str("rt_frame ", 9)), F.v7991, yr1041_T(y_str(";", 1))));
yr1006_SB();
yr1017_SA(y_str("if (!RT_TRY(", 12));
yr1024_ST(F.v7991);
yr1017_SA(y_str(")) { RT_POP(", 12));
yr1024_ST(F.v7991);
yr1017_SA(y_str("); ", 3));
if ((((*(yR119 *)rt_nil_check(F.p3371))).f_kind == v869)) {
yr1017_SA(y_str("y_mon_drop(", 11));
} else {
yr1017_SA(y_str("y_mon_leave(", 12));
}
yr1024_ST(yr3364_MonitorPath(((*(yR119 *)rt_nil_check(F.p3371))).f_monitor));
yr1017_SA(y_str("); rt_raise(rt_xcur); }", 23));
yr1112_Emit(yr1036_SE());
v1492 = rt_range(rt_add(v1492, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1490).p)[y_ix1(v1490, v1492)] = F.v7991;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3376_LeaveMonitor(void) {
struct yf3377 F;
memset((void *)&F, 0, sizeof F);
if ((v1567 == ((void *)0))) {
return;
}
if ((((*(yR119 *)rt_nil_check(v1567))).f_monitor == ((void *)0))) {
return;
}
if ((((*(yR119 *)rt_nil_check(v1567))).f_kind == v869)) {
yr1112_Emit(yr3102_Join(yr1041_T(y_str("y_mon_drop(", 11)), yr3364_MonitorPath(((*(yR119 *)rt_nil_check(v1567))).f_monitor), yr1041_T(y_str(");", 2))));
} else {
yr1112_Emit(yr3102_Join(yr1041_T(y_str("y_mon_leave(", 12)), yr3364_MonitorPath(((*(yR119 *)rt_nil_check(v1567))).f_monitor), yr1041_T(y_str(");", 2))));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3381_TerminateStatement(void * a_p3382) {
struct yf3383 F;
memset((void *)&F, 0, sizeof F);
F.p3382 = a_p3382;
if ((((v1567 == ((void *)0))) || ((!(((*(yR119 *)rt_nil_check(v1567))).f_kind == v869))))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3382))).f_line, y_str("TERMINATE_PROCESS ends a process (IX.A.7)", 41));
}
yr3352_AwaitProcesses();
yr3376_LeaveMonitor();
yr3021_PopTo(v1495);
yr1118_EmitS(y_str("return;", 7));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3387_DeclareSignal(void * a_p3388, rt_int a_p3389) {
struct yf3390 F;
memset((void *)&F, 0, sizeof F);
F.p3388 = a_p3388;
F.p3389 = a_p3389;
if ((v1695 == ((void *)0))) {
yr1144_FailS(F.p3389, y_str("signal variables are declared in a monitor (X.E.4)", 50));
}
((*(yR119 *)rt_nil_check(F.p3388))).f_rep = yr2283_CopyRep(((*(yR119 *)rt_nil_check(F.p3388))).f_rep);
((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.p3388))).f_rep))).f_monitor = v1695;
yr1112_Emit(yr3102_Join(yr1041_T(y_str("y_sig_init(&", 12)), yr2264_SymPath(F.p3388), yr3102_Join(yr1041_T(y_str(", ", 2)), yr3364_MonitorPath(v1695), yr1041_T(y_str(");", 2)))));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3394_DeclareSignalArray(void * a_p3395, rt_int a_p3396) {
struct yf3397 F;
memset((void *)&F, 0, sizeof F);
F.p3395 = a_p3395;
F.p3396 = a_p3396;
if ((v1695 == ((void *)0))) {
yr1144_FailS(F.p3396, y_str("signal variables are declared in a monitor (X.E.4)", 50));
}
yr1112_Emit(yr3102_Join(yr1041_T(y_str("y_sig_init_all(", 15)), yr2344_DescOf(((*(yR119 *)rt_nil_check(F.p3395))).f_rep), yr3102_Join(yr1041_T(y_str(", &", 3)), yr2264_SymPath(F.p3395), yr3102_Join(yr1041_T(y_str(", ", 2)), yr3364_MonitorPath(v1695), yr1041_T(y_str(");", 2))))));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3401_DeviceSignal(void * a_p3402, void * a_p3403) {
struct yf3404 F;
memset((void *)&F, 0, sizeof F);
F.p3402 = a_p3402;
F.p3403 = a_p3403;
yr2631_Manifest(F.p3403, &F.v8034, &F.v8036);
if ((!F.v8034)) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3403))).f_line, y_str("an AT location is a manifest constant (XIV.VII)", 47));
}
yr1006_SB();
yr1017_SA(y_str("y_device(&", 10));
yr1024_ST(yr2264_SymPath(F.p3402));
yr1017_SA(y_str(", ", 2));
yr1030_SI(F.v8036);
yr1017_SA(y_str(");", 2));
F.v8038 = yr1036_SE();
yr1112_Emit(F.v8038);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3408_Arg(void * a_p3409, rt_int a_p3410) {
struct yf3411 F;
memset((void *)&F, 0, sizeof F);
F.p3409 = a_p3409;
F.p3410 = a_p3410;
F.v8047 = ((*(yR99 *)rt_nil_check(F.p3409))).f_a;
F.v8049 = INT64_C(1);
while ((((!(F.v8047 == ((void *)0)))) && ((F.v8049 < F.p3410)))) {
F.v8047 = ((*(yR99 *)rt_nil_check(F.v8047))).f_next;
F.v8049 = rt_range(rt_add(F.v8049, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v8047 == ((void *)0))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3409))).f_line, ((*(yR99 *)rt_nil_check(F.p3409))).f_name, y_str(": too few actual parameters", 27));
}
{ void * rv8054 = F.v8047;
return rv8054; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3415_NArgs(void * a_p3416, rt_int a_p3417) {
struct yf3418 F;
memset((void *)&F, 0, sizeof F);
F.p3416 = a_p3416;
F.p3417 = a_p3417;
if ((!(yr1843_Count(((*(yR99 *)rt_nil_check(F.p3416))).f_a) == F.p3417))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3416))).f_line, ((*(yR99 *)rt_nil_check(F.p3416))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3422_Call1(yarr a_p3424, rt_int a_p3425) {
struct yf3426 F;
memset((void *)&F, 0, sizeof F);
F.p3424 = a_p3424;
F.p3425 = a_p3425;
yr1006_SB();
yr1017_SA(F.p3424);
yr1017_SA(y_str("(", 1));
yr1024_ST(F.p3425);
yr1017_SA(y_str(")", 1));
{ rt_int rv8064 = yr1036_SE();
return rv8064; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3430_Addr(rt_int a_p3431) {
struct yf3432 F;
memset((void *)&F, 0, sizeof F);
F.p3431 = a_p3431;
{ rt_int rv8069 = yr3102_Join(yr1041_T(y_str("&", 1)), F.p3431, INT64_C(0));
return rv8069; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3436_StdVar(void * a_p3437, rt_int a_p3438, rt_int * a_p3439, void * * a_p3440) {
struct yf3441 F;
memset((void *)&F, 0, sizeof F);
F.p3437 = a_p3437;
F.p3438 = a_p3438;
F.p3439_o = a_p3439;
F.p3440_o = a_p3440;
yr2752_LValue(F.p3437, &F.p3439, &F.p3440);
if ((((!(F.p3438 == v842))) && ((!(((*(yR104 *)rt_nil_check(F.p3440))).f_kind == F.p3438))))) {
yr1006_SB();
yr1017_SA(y_str("a ", 2));
if ((F.p3438 == v815)) {
yr1017_SA(y_str("file", 4));
} else if ((F.p3438 == v821)) {
yr1017_SA(y_str("signal", 6));
} else if ((F.p3438 == v824)) {
yr1017_SA(y_str("SEMAPHORE", 9));
} else if ((F.p3438 == v812)) {
yr1017_SA(y_str("pointer", 7));
} else {
yr1017_SA(y_str("variable", 8));
}
yr1017_SA(y_str(" is needed here", 15));
F.v8076 = yr1036_SE();
yr1137_Fail(((*(yR99 *)rt_nil_check(F.p3437))).f_line, F.v8076);
}
(*F.p3439_o) = F.p3439;
(*F.p3440_o) = F.p3440;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3445_NumArg(void * a_p3446, rt_int * a_p3447, void * * a_p3448) {
struct yf3449 F;
memset((void *)&F, 0, sizeof F);
F.p3446 = a_p3446;
F.p3447_o = a_p3447;
F.p3448_o = a_p3448;
yr2779_Expr(F.p3446, ((void *)0), &F.p3447, &F.p3448);
if ((!yr2295_IsNumeric(F.p3448))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3446))).f_line, y_str("a number is needed here", 23));
}
(*F.p3447_o) = F.p3447;
(*F.p3448_o) = F.p3448;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3453_IntArg(void * a_p3454) {
struct yf3455 F;
memset((void *)&F, 0, sizeof F);
F.p3454 = a_p3454;
yr2779_Expr(F.p3454, v1308, &F.v8092, &F.v8094);
if ((!(((*(yR104 *)rt_nil_check(F.v8094))).f_kind == v788))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3454))).f_line, y_str("an integer is needed here", 25));
}
{ rt_int rv8096 = F.v8092;
return rv8096; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3459_CodeInsert(void * a_p3460) {
struct yf3461 F;
memset((void *)&F, 0, sizeof F);
F.p3460 = a_p3460;
F.v8100 = yr3408_Arg(F.p3460, INT64_C(1));
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1)}; y_desc_array(&F.yd_8126, 1, lo, hi, &y_d_int); }
y_init(&F.yd_8126, &F.v8128);
if ((!(((*(yR99 *)rt_nil_check(F.v8100))).f_kind == v755))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3460))).f_line, y_str("a code insert takes a string literal (XIV.XI.5)", 47));
}
F.v8103 = ((*(yR99 *)rt_nil_check(F.v8100))).f_text;
F.v8113 = ((rt_int *)(v904).p)[y_ix1(v904, F.v8103)];
yr1006_SB();
F.v8109 = INT64_C(1);
while ((F.v8109 <= F.v8113)) {
F.v8115 = yr1083_TChar(F.v8103, F.v8109);
if ((F.v8115 == 39)) {
F.v8111 = rt_range(rt_add(F.v8109, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1083_TChar(F.v8103, F.v8111) == 39))) {
F.v8111 = rt_range(rt_add(F.v8111, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v8105 = yr1048_Intern(rt_range(rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.v8103)], F.v8109), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v8111, F.v8109)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1011_SC(((unsigned char *)(v960).p)[y_ix1(v960, yr2614_CharValue(v1312, F.v8105, ((*(yR99 *)rt_nil_check(F.p3460))).f_line))]);
F.v8109 = rt_range(rt_add(F.v8111, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v8115 == 36)) {
F.v8111 = rt_range(rt_add(F.v8109, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((F.v8111 <= F.v8113)) && ((yr988_IsLetter(yr1083_TChar(F.v8103, F.v8111)) || yr994_IsDigit(yr1083_TChar(F.v8103, F.v8111)))))) {
F.v8111 = rt_range(rt_add(F.v8111, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v8105 = yr1048_Intern(rt_range(rt_add(((rt_int *)(v902).p)[y_ix1(v902, F.v8103)], F.v8109), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v8111, F.v8109)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v8117 = yr2172_Find(F.v8105);
if ((F.v8117 == ((void *)0))) {
v925 = INT64_C(0);
v939 = INT64_C(0);
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3460))).f_line, F.v8105, y_str(" in a code insert is not declared here", 38));
}
F.v8117 = yr2270_Real(F.v8117);
if ((((!(((*(yR119 *)rt_nil_check(F.v8117))).f_kind == v845))) && ((!(((*(yR119 *)rt_nil_check(F.v8117))).f_kind == v848))))) {
v925 = INT64_C(0);
v939 = INT64_C(0);
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3460))).f_line, F.v8105, y_str(" in a code insert is not a variable or constant", 47));
}
yr1024_ST(yr2760_Paren(yr2264_SymPath(F.v8117)));
F.v8109 = F.v8111;
} else {
yr1011_SC(F.v8115);
F.v8109 = rt_range(rt_add(F.v8109, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
F.v8107 = yr1036_SE();
yr1112_Emit(F.v8107);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3465_ManifestScale(void * a_p3466, void * a_p3467) {
struct yf3468 F;
memset((void *)&F, 0, sizeof F);
F.p3466 = a_p3466;
F.p3467 = a_p3467;
yr2697_ManifestFix(F.p3466, &F.v8164, &F.v8166, &F.v8168);
if (((!F.v8164) || ((F.v8166 <= INT64_C(0))))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3467))).f_line, ((*(yR99 *)rt_nil_check(F.p3467))).f_name, y_str(": the scale is a positive manifest constant (XI)", 48));
}
F.v8170 = yr2283_CopyRep(v1322);
((*(yR104 *)rt_nil_check(F.v8170))).f_abstract = 0;
yr2485_SetScale(F.v8170, F.v8166, F.v8168);
{ void * rv8174 = F.v8170;
return rv8174; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3472_StdCall(rt_int a_p3473, void * a_p3474, rt_int a_p3475, rt_int * a_p3476, void * * a_p3477) {
struct yf3478 F;
memset((void *)&F, 0, sizeof F);
F.p3473 = a_p3473;
F.p3474 = a_p3474;
F.p3475 = a_p3475;
F.p3476_o = a_p3476;
F.p3477_o = a_p3477;
F.p3477 = v1314;
F.p3476 = yr1041_T(y_str("((void)0)", 9));
F.v8210 = ((((((((((((((((F.p3473 == v1350)) || ((F.p3473 == v1353))) || ((F.p3473 == v1356))) || ((F.p3473 == v1359))) || ((F.p3473 == v1362))) || ((F.p3473 == v1368))) || ((F.p3473 == v1377))) || ((F.p3473 == v1383))) || ((F.p3473 == v1386))) || ((F.p3473 == v1410))) || ((F.p3473 == v1413))) || ((F.p3473 == v1422))) || ((F.p3473 == v1425))) || ((F.p3473 == v1428))) || ((F.p3473 == v1431)));
if ((F.p3475 && (!F.v8210))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3474))).f_line, ((*(yR99 *)rt_nil_check(F.p3474))).f_name, y_str(" returns a value: it is called in an expression", 47));
}
if (((!F.p3475) && F.v8210)) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3474))).f_line, ((*(yR99 *)rt_nil_check(F.p3474))).f_name, y_str(" returns no value", 17));
}
if ((((F.p3473 == v1332)) || ((F.p3473 == v1335)))) {
yr3415_NArgs(F.p3474, INT64_C(2));
yr2779_Expr(yr3408_Arg(F.p3474, INT64_C(1)), ((void *)0), &F.v8182, &F.v8192);
if ((!yr2301_IsArrayLike(F.v8192))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3474))).f_line, ((*(yR99 *)rt_nil_check(F.p3474))).f_name, y_str(" of something that is not an array", 34));
}
F.v8184 = yr3453_IntArg(yr3408_Arg(F.p3474, INT64_C(2)));
yr2631_Manifest(yr3408_Arg(F.p3474, INT64_C(2)), &F.v8206, &F.v8204);
F.p3477 = yr2823_Unbounded(v1308);
if ((F.v8206 && ((((*(yR104 *)rt_nil_check(F.v8192))).f_kind == v806)))) {
if ((((F.v8204 < INT64_C(1))) || ((F.v8204 > ((*(yR104 *)rt_nil_check(F.v8192))).f_nidx)))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3474))).f_line, y_str("no such dimension", 17));
}
F.v8198 = ((*(yR104 *)rt_nil_check(F.v8192))).f_idx;
F.lo8224 = INT64_C(2);
F.hi8225 = F.v8204;
{ rt_int hi8229 = F.hi8225;
for (rt_int i8228 = F.lo8224; i8228 <= hi8229; i8228++) { F.c_8227 = i8228;
F.v8198 = ((*(yR104 *)rt_nil_check(F.v8198))).f_link;
if (i8228 == hi8229) break;
}}
F.p3477 = F.v8198;
}
if ((F.p3473 == v1332)) {
F.p3476 = yr2829_Call2(y_str("y_low", 5), F.v8182, F.v8184);
} else {
F.p3476 = yr2829_Call2(y_str("y_high", 6), F.v8182, F.v8184);
}
(*F.p3476_o) = F.p3476;
(*F.p3477_o) = F.p3477;
return;
}
if ((((((F.p3473 == v1338)) || ((F.p3473 == v1341))) || ((F.p3473 == v1344))) || ((F.p3473 == v1347)))) {
yr3415_NArgs(F.p3474, INT64_C(1));
yr2779_Expr(yr3408_Arg(F.p3474, INT64_C(1)), ((void *)0), &F.v8182, &F.v8192);
if ((!yr2289_IsDiscrete(F.v8192))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3474))).f_line, ((*(yR99 *)rt_nil_check(F.p3474))).f_name, y_str(" of something that is not integer or scalar", 43));
}
if ((((((*(yR104 *)rt_nil_check(F.v8192))).f_kind == v797)) || ((((((*(yR104 *)rt_nil_check(F.v8192))).f_kind == v800)) && (!((*(yR104 *)rt_nil_check(F.v8192))).f_ordered))))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3474))).f_line, ((*(yR99 *)rt_nil_check(F.p3474))).f_name, y_str(" applies to integers, ordered enumerations and alphabets, not UNORDERED ones (XI)", 81));
}
if ((!(((*(yR104 *)rt_nil_check(F.v8192))).f_elem == ((void *)0)))) {
F.v8192 = ((*(yR104 *)rt_nil_check(F.v8192))).f_elem;
}
if ((((((F.p3473 == v1344)) || ((F.p3473 == v1347)))) && ((((*(yR104 *)rt_nil_check(F.v8192))).f_kind == v788)))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3474))).f_line, y_str("FIRST and LAST apply to ordered enumerations and alphabets (XI)", 63));
}
if ((F.p3473 == v1344)) {
F.p3477 = F.v8192;
F.p3476 = yr2419_LoText(F.v8192);
} else if ((F.p3473 == v1347)) {
F.p3477 = F.v8192;
F.p3476 = yr2425_HiText(F.v8192);
} else {
F.p3477 = yr2823_Unbounded(F.v8192);
yr1006_SB();
if ((!(((*(yR104 *)rt_nil_check(F.v8192))).f_kind == v788))) {
yr1017_SA(y_str("rt_range(", 9));
}
if ((F.p3473 == v1338)) {
yr1017_SA(y_str("rt_add(", 7));
} else {
yr1017_SA(y_str("rt_sub(", 7));
}
yr1024_ST(F.v8182);
yr1017_SA(y_str(", 1)", 4));
if ((!(((*(yR104 *)rt_nil_check(F.v8192))).f_kind == v788))) {
yr1017_SA(y_str(", 0, ", 5));
yr1030_SI(rt_range(rt_sub(((*(yR104 *)rt_nil_check(F.v8192))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1017_SA(y_str(")", 1));
}
F.p3476 = yr1036_SE();
}
(*F.p3476_o) = F.p3476;
(*F.p3477_o) = F.p3477;
return;
}
if ((F.p3473 == v1350)) {
yr3415_NArgs(F.p3474, INT64_C(1));
yr3436_StdVar(yr3408_Arg(F.p3474, INT64_C(1)), v812, &F.v8182, &F.v8192);
if ((((*(yR104 *)rt_nil_check(F.v8192))).f_elem == ((void *)0))) {
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3474))).f_line, ((*(yR104 *)rt_nil_check(F.v8192))).f_forward, y_str(" is not declared", 16));
}
F.v8198 = ((*(yR104 *)rt_nil_check(F.v8192))).f_elem;
yr1006_SB();
yr1017_SA(y_str("({ ", 3));
yr1024_ST(F.v8182);
yr1017_SA(y_str(" = rt_alloc(sizeof(", 19));
yr1024_ST(yr2338_CType(F.v8198));
yr1017_SA(y_str("));", 3));
if (yr2313_Deep(F.v8198)) {
yr1017_SA(y_str(" y_init(", 8));
yr1024_ST(yr2344_DescOf(F.v8198));
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.v8182);
yr1017_SA(y_str(");", 2));
}
yr1017_SA(y_str(" })", 3));
F.p3476 = yr1036_SE();
(*F.p3476_o) = F.p3476;
(*F.p3477_o) = F.p3477;
return;
}
if ((F.p3473 == v1428)) {
yr3415_NArgs(F.p3474, INT64_C(1));
yr3436_StdVar(yr3408_Arg(F.p3474, INT64_C(1)), v812, &F.v8182, &F.v8192);
F.p3476 = yr3102_Join(yr1041_T(y_str("({ free(", 8)), F.v8182, yr3102_Join(yr1041_T(y_str("); ", 3)), F.v8182, yr1041_T(y_str(" = 0; })", 8))));
(*F.p3476_o) = F.p3476;
(*F.p3477_o) = F.p3477;
return;
}
if ((F.p3473 == v1353)) {
yr3415_NArgs(F.p3474, INT64_C(3));
yr3436_StdVar(yr3408_Arg(F.p3474, INT64_C(1)), v815, &F.v8182, &F.v8192);
yr2779_Expr(yr3408_Arg(F.p3474, INT64_C(2)), v1312, &F.v8184, &F.v8194);
if ((!yr2307_IsString(F.v8194))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3474))).f_line, y_str("OPEN takes the name of the file as a string (XII.A)", 51));
}
yr2779_Expr(yr3408_Arg(F.p3474, INT64_C(3)), v1760, &F.v8186, &F.v8196);
yr2371_CheckType(((*(yR99 *)rt_nil_check(F.p3474))).f_line, v1760, F.v8196);
yr1006_SB();
yr1017_SA(y_str("y_open(&", 8));
yr1024_ST(F.v8182);
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.v8184);
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.v8186);
yr1017_SA(y_str(")", 1));
F.p3476 = yr1036_SE();
(*F.p3476_o) = F.p3476;
(*F.p3477_o) = F.p3477;
return;
}
if ((((F.p3473 == v1356)) || ((F.p3473 == v1365)))) {
yr3415_NArgs(F.p3474, INT64_C(1));
yr3436_StdVar(yr3408_Arg(F.p3474, INT64_C(1)), v815, &F.v8182, &F.v8192);
if ((F.p3473 == v1356)) {
F.p3476 = yr3422_Call1(y_str("y_close", 7), yr3430_Addr(F.v8182));
} else {
F.p3477 = v1310;
F.p3476 = yr3422_Call1(y_str("y_check_eof", 11), yr3430_Addr(F.v8182));
}
(*F.p3476_o) = F.p3476;
(*F.p3477_o) = F.p3477;
return;
}
if ((F.p3473 == v1359)) {
yr3415_NArgs(F.p3474, INT64_C(2));
yr3436_StdVar(yr3408_Arg(F.p3474, INT64_C(1)), v815, &F.v8182, &F.v8192);
yr3436_StdVar(yr3408_Arg(F.p3474, INT64_C(2)), v842, &F.v8184, &F.v8194);
yr2371_CheckType(((*(yR99 *)rt_nil_check(F.p3474))).f_line, ((*(yR104 *)rt_nil_check(F.v8192))).f_elem, F.v8194);
if ((yr2313_Deep(F.v8194) || ((((*(yR104 *)rt_nil_check(F.v8194))).f_kind == v812)))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3474))).f_line, y_str("files of this implementation hold no arrays or pointers", 55));
}
yr1006_SB();
yr1017_SA(y_str("({ ", 3));
yr1024_ST(yr2338_CType(F.v8194));
yr1017_SA(y_str(" g; y_get(&", 11));
yr1024_ST(F.v8182);
yr1017_SA(y_str(", &g, sizeof g); ", 17));
yr1024_ST(F.v8184);
yr1017_SA(y_str(" = ", 3));
yr1024_ST(yr2712_Convert(yr1041_T(y_str("g", 1)), F.v8194, ((*(yR104 *)rt_nil_check(F.v8192))).f_elem));
yr1017_SA(y_str("; })", 4));
F.p3476 = yr1036_SE();
(*F.p3476_o) = F.p3476;
(*F.p3477_o) = F.p3477;
return;
}
if ((F.p3473 == v1362)) {
yr3415_NArgs(F.p3474, INT64_C(2));
yr3436_StdVar(yr3408_Arg(F.p3474, INT64_C(1)), v815, &F.v8182, &F.v8192);
yr2779_Expr(yr3408_Arg(F.p3474, INT64_C(2)), ((*(yR104 *)rt_nil_check(F.v8192))).f_elem, &F.v8184, &F.v8194);
yr2371_CheckType(((*(yR99 *)rt_nil_check(F.p3474))).f_line, ((*(yR104 *)rt_nil_check(F.v8192))).f_elem, F.v8194);
if ((yr2313_Deep(F.v8194) || ((((*(yR104 *)rt_nil_check(F.v8194))).f_kind == v812)))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3474))).f_line, y_str("files of this implementation hold no arrays or pointers", 55));
}
yr1006_SB();
yr1017_SA(y_str("({ ", 3));
yr1024_ST(yr2338_CType(((*(yR104 *)rt_nil_check(F.v8192))).f_elem));
yr1017_SA(y_str(" pv = ", 6));
yr1024_ST(yr2712_Convert(F.v8184, ((*(yR104 *)rt_nil_check(F.v8192))).f_elem, F.v8194));
yr1017_SA(y_str("; y_put(&", 9));
yr1024_ST(F.v8182);
yr1017_SA(y_str(", &pv, sizeof pv); })", 21));
F.p3476 = yr1036_SE();
(*F.p3476_o) = F.p3476;
(*F.p3477_o) = F.p3477;
return;
}
if ((F.p3473 == v1368)) {
F.v8200 = yr1843_Count(((*(yR99 *)rt_nil_check(F.p3474))).f_a);
if ((((F.v8200 < INT64_C(5))) || ((!((rt_mod((rt_sub(F.v8200, INT64_C(2))), INT64_C(3))) == INT64_C(0)))))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3474))).f_line, y_str("MOVE takes an object, an index and triples", 42));
}
yr3436_StdVar(yr3408_Arg(F.p3474, INT64_C(1)), v842, &F.v8182, &F.v8192);
if (((!((((((*(yR104 *)rt_nil_check(F.v8192))).f_kind == v806)) || ((((*(yR104 *)rt_nil_check(F.v8192))).f_kind == v827))))) || ((!(((*(yR104 *)rt_nil_check(F.v8192))).f_nidx == INT64_C(1)))))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3474))).f_line, y_str("MOVE works on one-dimensional arrays", 36));
}
F.v8184 = yr3453_IntArg(yr3408_Arg(F.p3474, INT64_C(2)));
F.v8190 = yr1166_Fresh(y_str("at", 2));
yr1006_SB();
yr1017_SA(y_str("({ rt_int ", 10));
yr1024_ST(F.v8190);
yr1017_SA(y_str(" = ", 3));
yr1024_ST(F.v8184);
yr1017_SA(y_str(";", 1));
F.p3476 = yr1036_SE();
F.v8202 = INT64_C(3);
while ((F.v8202 < F.v8200)) {
yr2779_Expr(yr3408_Arg(F.p3474, F.v8202), ((*(yR104 *)rt_nil_check(F.v8192))).f_elem, &F.v8186, &F.v8196);
if (((!yr2301_IsArrayLike(F.v8196)) || (!yr2356_SameType(((*(yR104 *)rt_nil_check(F.v8192))).f_elem, ((*(yR104 *)rt_nil_check(F.v8196))).f_elem)))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3474))).f_line, y_str("MOVE: the components differ in type", 35));
}
F.v8188 = yr3453_IntArg(yr3408_Arg(F.p3474, rt_range(rt_add(F.v8202, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v8184 = yr3453_IntArg(yr3408_Arg(F.p3474, rt_range(rt_add(F.v8202, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr1006_SB();
yr1024_ST(F.p3476);
yr1017_SA(y_str(" { rt_int mi = ", 15));
yr1024_ST(F.v8188);
yr1017_SA(y_str(", mj = ", 7));
yr1024_ST(F.v8184);
yr1017_SA(y_str("; y_move(&", 10));
yr1024_ST(F.v8182);
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.v8190);
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.v8186);
yr1017_SA(y_str(", mi, mj, ", 10));
yr1024_ST(yr2344_DescOf(((*(yR104 *)rt_nil_check(F.v8192))).f_elem));
yr1017_SA(y_str("); if (mj >= mi) ", 17));
yr1024_ST(F.v8190);
yr1017_SA(y_str(" += mj - mi + 1; }", 18));
F.p3476 = yr1036_SE();
F.v8202 = rt_range(rt_add(F.v8202, INT64_C(3)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.p3476 = yr3102_Join(F.p3476, yr1041_T(y_str(" })", 3)), INT64_C(0));
(*F.p3476_o) = F.p3476;
(*F.p3477_o) = F.p3477;
return;
}
if ((((F.p3473 == v1371)) || ((F.p3473 == v1374)))) {
yr3415_NArgs(F.p3474, INT64_C(2));
F.v8182 = yr3072_Cond(yr3408_Arg(F.p3474, INT64_C(1)));
F.v8184 = yr3072_Cond(yr3408_Arg(F.p3474, INT64_C(2)));
F.p3477 = v1310;
if ((F.p3473 == v1371)) {
F.p3476 = yr2838_Infix(yr2760_Paren(yr2838_Infix(F.v8182, y_str("!=", 2), yr1041_T(y_str("0", 1)))), y_str("&", 1), yr2760_Paren(yr2838_Infix(F.v8184, y_str("!=", 2), yr1041_T(y_str("0", 1)))));
} else {
F.p3476 = yr2838_Infix(yr2760_Paren(yr2838_Infix(F.v8182, y_str("!=", 2), yr1041_T(y_str("0", 1)))), y_str("|", 1), yr2760_Paren(yr2838_Infix(F.v8184, y_str("!=", 2), yr1041_T(y_str("0", 1)))));
}
(*F.p3476_o) = F.p3476;
(*F.p3477_o) = F.p3477;
return;
}
if ((F.p3473 == v1377)) {
yr3415_NArgs(F.p3474, INT64_C(1));
F.p3476 = yr3422_Call1(y_str("rt_delay", 8), yr3453_IntArg(yr3408_Arg(F.p3474, INT64_C(1))));
(*F.p3476_o) = F.p3476;
(*F.p3477_o) = F.p3477;
return;
}
if ((F.p3473 == v1380)) {
yr3415_NArgs(F.p3474, INT64_C(0));
F.p3477 = yr2823_Unbounded(v1308);
F.p3476 = yr1041_T(y_str("rt_time()", 9));
(*F.p3476_o) = F.p3476;
(*F.p3477_o) = F.p3477;
return;
}
if (((((F.p3473 == v1383)) || ((F.p3473 == v1386))) || ((F.p3473 == v1389)))) {
yr3436_StdVar(yr3408_Arg(F.p3474, INT64_C(1)), v821, &F.v8182, &F.v8192);
if ((F.p3473 == v1383)) {
if ((yr1843_Count(((*(yR99 *)rt_nil_check(F.p3474))).f_a) == INT64_C(1))) {
F.v8184 = yr1041_T(y_str("1", 1));
} else {
yr3415_NArgs(F.p3474, INT64_C(2));
F.v8184 = yr3453_IntArg(yr3408_Arg(F.p3474, INT64_C(2)));
}
F.p3476 = yr2829_Call2(y_str("y_wait", 6), yr3430_Addr(F.v8182), F.v8184);
} else {
yr3415_NArgs(F.p3474, INT64_C(1));
if ((F.p3473 == v1386)) {
F.p3476 = yr3422_Call1(y_str("y_send", 6), yr3430_Addr(F.v8182));
} else {
F.p3477 = v1310;
F.p3476 = yr3422_Call1(y_str("y_awaited", 9), yr3430_Addr(F.v8182));
}
}
(*F.p3476_o) = F.p3476;
(*F.p3477_o) = F.p3477;
return;
}
if (((((F.p3473 == v1392)) || ((F.p3473 == v1395))) || ((F.p3473 == v1398)))) {
yr3415_NArgs(F.p3474, INT64_C(1));
yr3445_NumArg(yr3408_Arg(F.p3474, INT64_C(1)), &F.v8182, &F.v8192);
F.p3477 = yr2823_Unbounded(v1308);
if ((((*(yR104 *)rt_nil_check(F.v8192))).f_kind == v788)) {
F.p3476 = F.v8182;
} else if ((((*(yR104 *)rt_nil_check(F.v8192))).f_kind == v791)) {
yr1006_SB();
if ((F.p3473 == v1392)) {
yr1017_SA(y_str("y_fix_floor(", 12));
} else if ((F.p3473 == v1395)) {
yr1017_SA(y_str("y_fix_ceiling(", 14));
} else {
yr1017_SA(y_str("y_fix_near_integer(", 19));
}
yr1024_ST(F.v8182);
yr1017_SA(y_str(", INT64_C(", 10));
yr1030_SI(((*(yR104 *)rt_nil_check(F.v8192))).f_fsn);
yr1017_SA(y_str("), INT64_C(", 11));
yr1030_SI(((*(yR104 *)rt_nil_check(F.v8192))).f_fsd);
yr1017_SA(y_str("))", 2));
F.p3476 = yr1036_SE();
} else if ((F.p3473 == v1392)) {
F.p3476 = yr3422_Call1(y_str("y_floor", 7), F.v8182);
} else if ((F.p3473 == v1395)) {
F.p3476 = yr3422_Call1(y_str("y_ceiling", 9), F.v8182);
} else {
F.p3476 = yr3422_Call1(y_str("y_near_integer", 14), F.v8182);
}
(*F.p3476_o) = F.p3476;
(*F.p3477_o) = F.p3477;
return;
}
if ((F.p3473 == v1404)) {
yr3415_NArgs(F.p3474, INT64_C(1));
yr3445_NumArg(yr3408_Arg(F.p3474, INT64_C(1)), &F.v8182, &F.v8192);
F.p3477 = v1320;
if ((((*(yR104 *)rt_nil_check(F.v8192))).f_kind == v791)) {
F.p3476 = yr2862_FixToFloat(F.v8182, F.v8192);
} else {
F.p3476 = yr3102_Join(yr1041_T(y_str("((double)(", 10)), F.v8182, yr1041_T(y_str("))", 2)));
}
(*F.p3476_o) = F.p3476;
(*F.p3477_o) = F.p3477;
return;
}
if ((F.p3473 == v1401)) {
yr3415_NArgs(F.p3474, INT64_C(2));
yr3445_NumArg(yr3408_Arg(F.p3474, INT64_C(1)), &F.v8182, &F.v8192);
F.p3477 = yr3465_ManifestScale(yr3408_Arg(F.p3474, INT64_C(2)), F.p3474);
if ((((*(yR104 *)rt_nil_check(F.v8192))).f_kind == v794)) {
yr1006_SB();
yr1017_SA(y_str("y_fix_of_float(", 15));
yr1024_ST(F.v8182);
yr1017_SA(y_str(", INT64_C(", 10));
yr1030_SI(((*(yR104 *)rt_nil_check(F.p3477))).f_fsn);
yr1017_SA(y_str("), INT64_C(", 11));
yr1030_SI(((*(yR104 *)rt_nil_check(F.p3477))).f_fsd);
yr1017_SA(y_str("))", 2));
F.p3476 = yr1036_SE();
} else {
if ((((*(yR104 *)rt_nil_check(F.v8192))).f_kind == v788)) {
F.v8196 = yr2283_CopyRep(v1322);
yr2485_SetScale(F.v8196, INT64_C(1), INT64_C(1));
F.v8182 = yr3102_Join(yr1041_T(y_str("((yfix)(", 8)), F.v8182, yr1041_T(y_str("))", 2)));
} else {
F.v8196 = F.v8192;
}
yr2468_ScaleRatio(F.v8196, F.p3477, &F.v8188, &F.v8190, &F.v8206);
yr1006_SB();
yr1017_SA(y_str("y_fix_near(", 11));
yr1024_ST(F.v8182);
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.v8188);
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.v8190);
yr1017_SA(y_str(")", 1));
F.p3476 = yr1036_SE();
}
(*F.p3476_o) = F.p3476;
(*F.p3477_o) = F.p3477;
return;
}
if ((F.p3473 == v1407)) {
yr3415_NArgs(F.p3474, INT64_C(3));
yr3445_NumArg(yr3408_Arg(F.p3474, INT64_C(1)), &F.v8182, &F.v8192);
yr3445_NumArg(yr3408_Arg(F.p3474, INT64_C(2)), &F.v8184, &F.v8194);
if ((((!(((*(yR104 *)rt_nil_check(F.v8192))).f_kind == v791))) || ((!(((*(yR104 *)rt_nil_check(F.v8194))).f_kind == v791))))) {
yr1144_FailS(((*(yR99 *)rt_nil_check(F.p3474))).f_line, y_str("FIXED_DIV divides fixed-point numbers (XI)", 42));
}
yr2371_CheckType(((*(yR99 *)rt_nil_check(F.p3474))).f_line, F.v8192, F.v8194);
F.p3477 = yr3465_ManifestScale(yr3408_Arg(F.p3474, INT64_C(3)), F.p3474);
((*(yR104 *)rt_nil_check(F.p3477))).f_tid = ((*(yR104 *)rt_nil_check(F.v8192))).f_tid;
((*(yR104 *)rt_nil_check(F.p3477))).f_tname = ((*(yR104 *)rt_nil_check(F.v8192))).f_tname;
F.v8196 = yr2283_CopyRep(v1322);
yr2485_SetScale(F.v8196, yr2452_MulChk(((*(yR104 *)rt_nil_check(F.v8194))).f_fsn, ((*(yR104 *)rt_nil_check(F.p3477))).f_fsn, ((*(yR99 *)rt_nil_check(F.p3474))).f_line), yr2452_MulChk(((*(yR104 *)rt_nil_check(F.v8194))).f_fsd, ((*(yR104 *)rt_nil_check(F.p3477))).f_fsd, ((*(yR99 *)rt_nil_check(F.p3474))).f_line));
yr2468_ScaleRatio(F.v8192, F.v8196, &F.v8188, &F.v8190, &F.v8206);
yr1006_SB();
yr1017_SA(y_str("y_fix_div(", 10));
yr1024_ST(F.v8182);
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.v8184);
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.v8188);
yr1017_SA(y_str(", ", 2));
yr1024_ST(F.v8190);
yr1017_SA(y_str(")", 1));
F.p3476 = yr1036_SE();
(*F.p3476_o) = F.p3476;
(*F.p3477_o) = F.p3477;
return;
}
if (((((F.p3473 == v1410)) || ((F.p3473 == v1413))) || ((F.p3473 == v1416)))) {
yr3415_NArgs(F.p3474, INT64_C(1));
yr3436_StdVar(yr3408_Arg(F.p3474, INT64_C(1)), v824, &F.v8182, &F.v8192);
if ((F.p3473 == v1410)) {
F.p3476 = yr3422_Call1(y_str("rt_region_enter", 15), yr3430_Addr(F.v8182));
} else if ((F.p3473 == v1413)) {
F.p3476 = yr3422_Call1(y_str("rt_region_leave", 15), yr3430_Addr(F.v8182));
} else {
F.p3477 = v1310;
F.p3476 = yr3422_Call1(y_str("y_cond_claim", 12), yr3430_Addr(F.v8182));
}
(*F.p3476_o) = F.p3476;
(*F.p3477_o) = F.p3477;
return;
}
if ((F.p3473 == v1419)) {
yr3415_NArgs(F.p3474, INT64_C(0));
F.p3477 = yr2823_Unbounded(v1308);
F.p3476 = yr1041_T(y_str("y_self()", 8));
(*F.p3476_o) = F.p3476;
(*F.p3477_o) = F.p3477;
return;
}
if ((F.p3473 == v1422)) {
yr3415_NArgs(F.p3474, INT64_C(2));
F.p3476 = yr2829_Call2(y_str("y_change_priority", 17), yr3453_IntArg(yr3408_Arg(F.p3474, INT64_C(1))), yr3453_IntArg(yr3408_Arg(F.p3474, INT64_C(2))));
(*F.p3476_o) = F.p3476;
(*F.p3477_o) = F.p3477;
return;
}
if ((F.p3473 == v1425)) {
yr3415_NArgs(F.p3474, INT64_C(1));
F.p3476 = yr3422_Call1(y_str("y_raise_termination", 19), yr3453_IntArg(yr3408_Arg(F.p3474, INT64_C(1))));
(*F.p3476_o) = F.p3476;
(*F.p3477_o) = F.p3477;
return;
}
if ((F.p3473 == v1431)) {
yr3415_NArgs(F.p3474, INT64_C(1));
yr3459_CodeInsert(F.p3474);
(*F.p3476_o) = F.p3476;
(*F.p3477_o) = F.p3477;
return;
}
if ((((F.p3473 == v1434)) || ((F.p3473 == v1437)))) {
yr3415_NArgs(F.p3474, INT64_C(1));
yr2779_Expr(yr3408_Arg(F.p3474, INT64_C(1)), ((void *)0), &F.v8182, &F.v8192);
F.p3477 = yr2823_Unbounded(v1308);
if ((F.p3473 == v1434)) {
F.p3476 = yr3102_Join(yr1041_T(y_str("((rt_int)(intptr_t)&(", 21)), F.v8182, yr1041_T(y_str("))", 2)));
} else {
F.p3476 = yr3102_Join(yr1041_T(y_str("((rt_int)sizeof(", 16)), F.v8182, yr1041_T(y_str("))", 2)));
}
(*F.p3476_o) = F.p3476;
(*F.p3477_o) = F.p3477;
return;
}
yr1152_FailN(((*(yR99 *)rt_nil_check(F.p3474))).f_line, ((*(yR99 *)rt_nil_check(F.p3474))).f_name, y_str(" is not translated", 18));
(*F.p3476_o) = F.p3476;
(*F.p3477_o) = F.p3477;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3482_StdRep(yarr a_p3484, void * a_p3485) {
struct yf3486 F;
memset((void *)&F, 0, sizeof F);
F.p3484 = a_p3484;
F.p3485 = a_p3485;
F.v8417 = yr2142_NewSym(v854, yr1061_N(F.p3484));
((*(yR119 *)rt_nil_check(F.v8417))).f_rep = F.p3485;
yr2237_Define(F.v8417, INT64_C(0));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3490_StdOp(yarr a_p3492, rt_int a_p3493) {
struct yf3494 F;
memset((void *)&F, 0, sizeof F);
F.p3492 = a_p3492;
F.p3493 = a_p3493;
F.v8423 = yr2142_NewSym(v875, yr1061_N(F.p3492));
((*(yR119 *)rt_nil_check(F.v8423))).f_mval = F.p3493;
yr2237_Define(F.v8423, INT64_C(0));
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3498_LitList(yarr a_p3500, yarr a_p3501, yarr a_p3502, rt_int a_p3503) {
struct yf3504 F;
memset((void *)&F, 0, sizeof F);
F.p3500 = a_p3500;
F.p3501 = a_p3501;
F.p3502 = a_p3502;
F.p3503 = a_p3503;
F.v8431 = ((void *)0);
F.v8433 = ((void *)0);
F.v8435 = ((void *)0);
F.v8435 = yr1828_NewNode(v653, INT64_C(0));
((*(yR99 *)rt_nil_check(F.v8435))).f_name = yr1061_N(F.p3500);
yr1835_Link(&F.v8431, &F.v8433, F.v8435);
F.v8435 = yr1828_NewNode(v653, INT64_C(0));
((*(yR99 *)rt_nil_check(F.v8435))).f_name = yr1061_N(F.p3501);
yr1835_Link(&F.v8431, &F.v8433, F.v8435);
if (F.p3503) {
F.v8435 = yr1828_NewNode(v653, INT64_C(0));
((*(yR99 *)rt_nil_check(F.v8435))).f_name = yr1061_N(F.p3502);
yr1835_Link(&F.v8431, &F.v8433, F.v8435);
}
{ void * rv8439 = F.v8431;
return rv8439; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3508_Abstract(rt_int a_p3509, yarr a_p3511) {
struct yf3512 F;
memset((void *)&F, 0, sizeof F);
F.p3509 = a_p3509;
F.p3511 = a_p3511;
F.v8444 = yr2276_NewRep(F.p3509, yr1061_N(F.p3511));
((*(yR104 *)rt_nil_check(F.v8444))).f_abstract = 1;
{ void * rv8446 = F.v8444;
return rv8446; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3516_Predefine(void) {
struct yf3517 F;
memset((void *)&F, 0, sizeof F);
yr2149_OpenScope(0);
((void * *)(v1706).p)[y_ix1(v1706, v1239)] = ((void *)0);
v1308 = yr3508_Abstract(v788, y_str("INTEGER", 7));
v1322 = yr3508_Abstract(v791, y_str("FIXED", 5));
v1320 = yr3508_Abstract(v794, y_str("FLOATING", 8));
v1324 = yr2276_NewRep(v821, yr1061_N(y_str("SIGNAL", 6)));
v1326 = yr2276_NewRep(v824, yr1061_N(y_str("SEMAPHORE", 9)));
v1314 = yr2276_NewRep(v836, yr1061_N(y_str("no value", 8)));
v1328 = yr2276_NewRep(v842, yr1061_N(y_str("any", 3)));
v1310 = yr2276_NewRep(v797, yr1061_N(y_str("BOOLEAN", 7)));
((*(yR104 *)rt_nil_check(v1310))).f_lits = yr3498_LitList(y_str("FALSE", 5), y_str("TRUE", 4), y_str("", 0), 0);
((*(yR104 *)rt_nil_check(v1310))).f_nlits = INT64_C(2);
yr2506_SetRange(v1310, INT64_C(0), INT64_C(1));
yr2500_DefineLits(v1310);
v1312 = yr2276_NewRep(v803, yr1061_N(y_str("ASCII", 5)));
((*(yR104 *)rt_nil_check(v1312))).f_ordered = 1;
((*(yR104 *)rt_nil_check(v1312))).f_nlits = INT64_C(128);
yr2506_SetRange(v1312, INT64_C(0), INT64_C(127));
v1760 = yr2276_NewRep(v800, yr1061_N(y_str("OPEN_MODE", 9)));
((*(yR104 *)rt_nil_check(v1760))).f_lits = yr3498_LitList(y_str("READ", 4), y_str("WRITE", 5), y_str("APPEND", 6), 1);
((*(yR104 *)rt_nil_check(v1760))).f_nlits = INT64_C(3);
yr2506_SetRange(v1760, INT64_C(0), INT64_C(2));
yr2500_DefineLits(v1760);
yr3482_StdRep(y_str("INTEGER", 7), v1308);
yr3482_StdRep(y_str("FIXED", 5), v1322);
yr3482_StdRep(y_str("FLOATING", 8), v1320);
yr3482_StdRep(y_str("BOOLEAN", 7), v1310);
yr3482_StdRep(y_str("SIGNAL", 6), v1324);
yr3482_StdRep(y_str("SEMAPHORE", 9), v1326);
yr3482_StdRep(y_str("ASCII", 5), v1312);
yr3482_StdRep(y_str("STANDARD_ALPHABET", 17), v1312);
yr3482_StdRep(y_str("OPEN_MODE", 9), v1760);
yr3490_StdOp(y_str("LOW", 3), v1332);
yr3490_StdOp(y_str("HIGH", 4), v1335);
yr3490_StdOp(y_str("SUCC", 4), v1338);
yr3490_StdOp(y_str("PRED", 4), v1341);
yr3490_StdOp(y_str("FIRST", 5), v1344);
yr3490_StdOp(y_str("LAST", 4), v1347);
yr3490_StdOp(y_str("NEW", 3), v1350);
yr3490_StdOp(y_str("OPEN", 4), v1353);
yr3490_StdOp(y_str("CLOSE", 5), v1356);
yr3490_StdOp(y_str("GET", 3), v1359);
yr3490_StdOp(y_str("PUT", 3), v1362);
yr3490_StdOp(y_str("CHECK_EOF", 9), v1365);
yr3490_StdOp(y_str("MOVE", 4), v1368);
yr3490_StdOp(y_str("AND_LONG", 8), v1371);
yr3490_StdOp(y_str("OR_LONG", 7), v1374);
yr3490_StdOp(y_str("DELAY", 5), v1377);
yr3490_StdOp(y_str("CLOCK_TIME", 10), v1380);
yr3490_StdOp(y_str("WAIT", 4), v1383);
yr3490_StdOp(y_str("SEND", 4), v1386);
yr3490_StdOp(y_str("AWAITED", 7), v1389);
yr3490_StdOp(y_str("FLOOR", 5), v1392);
yr3490_StdOp(y_str("CEILING", 7), v1395);
yr3490_StdOp(y_str("NEAR_INTEGER", 12), v1398);
yr3490_StdOp(y_str("NEAR_FIXED", 10), v1401);
yr3490_StdOp(y_str("NEAR_FLOATING", 13), v1404);
yr3490_StdOp(y_str("FIXED_DIV", 9), v1407);
yr3490_StdOp(y_str("CLAIM", 5), v1410);
yr3490_StdOp(y_str("RELEASE", 7), v1413);
yr3490_StdOp(y_str("CONDITIONAL_CLAIM", 17), v1416);
yr3490_StdOp(y_str("PROCESS_IDENTITY", 16), v1419);
yr3490_StdOp(y_str("CHANGE_PRIORITY", 15), v1422);
yr3490_StdOp(y_str("RAISE_PROCESS_TERMINATION", 25), v1425);
yr3490_StdOp(y_str("FREE_POINTER", 12), v1428);
yr3490_StdOp(y_str("C_CODE_INSERT", 13), v1431);
yr3490_StdOp(y_str("ADDR", 4), v1434);
yr3490_StdOp(y_str("EXTENT", 6), v1437);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3521_Translate(void) {
struct yf3522 F;
memset((void *)&F, 0, sizeof F);
F.v8524 = v1762;
yr2149_OpenScope(0);
((void * *)(v1706).p)[y_ix1(v1706, v1239)] = ((void *)0);
v1245 = INT64_C(0);
((void * *)(v1268).p)[y_ix1(v1268, v1239)] = v1762;
while ((!(F.v8524 == ((void *)0)))) {
if ((((*(yR99 *)rt_nil_check(F.v8524))).f_ival == INT64_C(0))) {
yr3328_CompileModule(F.v8524);
}
F.v8524 = ((*(yR99 *)rt_nil_check(F.v8524))).f_next;
}
yr3299_ResolveLater(v1239);
yr3215_RunDeferred(INT64_C(0), INT64_C(0));
yr3352_AwaitProcesses();
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3526_WriteProgram(void) {
struct yf3527 F;
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
v1215 = INT64_C(1);
v1218 = ((void *)0);
v1220 = INT64_C(0);
v1223 = INT64_C(0);
y_init(&yd_185, &v1226);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1235, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1235, &v1237);
v1239 = INT64_C(-1);
v1242 = INT64_C(0);
v1245 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1255, 1, lo, hi, &y_d_int); }
y_init(&yd_1255, &v1257);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1266, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1266, &v1268);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1277, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1277, &v1279);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1288, 1, lo, hi, &y_d_int); }
y_init(&yd_1288, &v1290);
y_init(&yd_1288, &v1292);
v1294 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(200000)}; y_desc_array(&yd_1304, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1304, &v1306);
v1330 = ((void *)0);
v1332 = INT64_C(1);
v1335 = INT64_C(2);
v1338 = INT64_C(3);
v1341 = INT64_C(4);
v1344 = INT64_C(5);
v1347 = INT64_C(6);
v1350 = INT64_C(7);
v1353 = INT64_C(8);
v1356 = INT64_C(9);
v1359 = INT64_C(10);
v1362 = INT64_C(11);
v1365 = INT64_C(12);
v1368 = INT64_C(13);
v1371 = INT64_C(14);
v1374 = INT64_C(15);
v1377 = INT64_C(16);
v1380 = INT64_C(17);
v1383 = INT64_C(18);
v1386 = INT64_C(19);
v1389 = INT64_C(20);
v1392 = INT64_C(21);
v1395 = INT64_C(22);
v1398 = INT64_C(23);
v1401 = INT64_C(24);
v1404 = INT64_C(25);
v1407 = INT64_C(26);
v1410 = INT64_C(27);
v1413 = INT64_C(28);
v1416 = INT64_C(29);
v1419 = INT64_C(30);
v1422 = INT64_C(31);
v1425 = INT64_C(32);
v1428 = INT64_C(33);
v1431 = INT64_C(34);
v1434 = INT64_C(35);
v1437 = INT64_C(36);
v1440 = INT64_C(0);
v1443 = ((void *)0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1452, 1, lo, hi, &y_d_int); }
y_init(&yd_1452, &v1454);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1463, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1463, &v1465);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1474, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1474, &v1476);
v1478 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1488, 1, lo, hi, &y_d_int); }
y_init(&yd_1488, &v1490);
v1492 = INT64_C(0);
v1495 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1505, 1, lo, hi, &y_d_int); }
y_init(&yd_1505, &v1507);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1516, 1, lo, hi, &y_d_int); }
y_init(&yd_1516, &v1518);
v1520 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1530, 1, lo, hi, &y_d_int); }
y_init(&yd_1530, &v1532);
v1534 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1544, 1, lo, hi, &y_d_int); }
y_init(&yd_1544, &v1546);
y_init(&yd_1544, &v1548);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1557, 1, lo, hi, &y_d_int); }
y_init(&yd_1557, &v1559);
v1561 = INT64_C(0);
v1564 = INT64_C(0);
v1567 = ((void *)0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1576, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1576, &v1578);
y_init(&yd_1576, &v1580);
v1582 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1592, 1, lo, hi, &y_d_int); }
y_init(&yd_1592, &v1594);
v1596 = 0;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1606, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1606, &v1608);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1617, 1, lo, hi, &y_d_int); }
y_init(&yd_1617, &v1619);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1628, 1, lo, hi, &y_d_int); }
y_init(&yd_1628, &v1630);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1639, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1639, &v1641);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1650, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1650, &v1652);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1661, 1, lo, hi, &y_d_int); }
y_init(&yd_1661, &v1663);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1672, 1, lo, hi, &y_d_int); }
y_init(&yd_1672, &v1674);
y_init(&yd_1672, &v1676);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(100000)}; y_desc_array(&yd_1685, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1685, &v1687);
v1689 = INT64_C(0);
v1692 = INT64_C(0);
v1695 = ((void *)0);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1704, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1704, &v1706);
v1708 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(10000)}; y_desc_array(&yd_1718, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1718, &v1720);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(10000)}; y_desc_array(&yd_1729, 1, lo, hi, &y_d_int); }
y_init(&yd_1729, &v1731);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(10000)}; y_desc_array(&yd_1740, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1740, &v1742);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(10000)}; y_desc_array(&yd_1751, 1, lo, hi, &y_d_int); }
y_init(&yd_1751, &v1753);
y_init(&yd_1751, &v1755);
v1757 = INT64_C(0);
/* yellowc */
yr983_InitChars();
yr1764_InitWords();
v1220 = yr1061_N(y_str("FROM", 4));
v1223 = yr1061_N(y_str("DIMENSION", 9));
v1440 = yr1041_T(y_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP DEL SQ DQ ", 128));
y_open(&v895, y_str("OUTPUT", 6), 1);
yr1769_ReadSource();
yr1823_Lex();
v1762 = yr2137_ParseProgram();
yr3516_Predefine();
yr3521_Translate();
yr3526_WriteProgram();
y_close(&v895);
}
int main(int argc, char **argv) {
y_lang();
rt_init(argc, argv);
y_elaborate();
rt_main_done();
return 0;
}
