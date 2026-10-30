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
struct yf998;
struct yf1004;
struct yf1010;
struct yf1016;
struct yf1021;
struct yf1027;
struct yf1034;
struct yf1040;
struct yf1046;
struct yf1051;
struct yf1058;
struct yf1065;
struct yf1071;
struct yf1078;
struct yf1085;
struct yf1093;
struct yf1100;
struct yf1107;
struct yf1115;
struct yf1122;
struct yf1128;
struct yf1135;
struct yf1141;
struct yf1147;
struct yf1154;
struct yf1161;
struct yf1168;
struct yf1176;
struct yf1185;
struct yf1190;
struct yf1197;
struct yf1825;
struct yf1830;
struct yf1837;
struct yf1843;
struct yf1848;
struct yf1854;
struct yf1861;
struct yf1868;
struct yf1874;
struct yf1879;
struct yf1884;
struct yf1891;
struct yf1899;
struct yf1905;
struct yf1910;
struct yf1915;
struct yf1920;
struct yf1927;
struct yf1933;
struct yf1939;
struct yf1944;
struct yf1950;
struct yf1955;
struct yf1961;
struct yf1966;
struct yf1973;
struct yf1978;
struct yf1984;
struct yf1989;
struct yf1994;
struct yf1999;
struct yf2004;
struct yf2009;
struct yf2014;
struct yf2020;
struct yf2026;
struct yf2033;
struct yf2038;
struct yf2044;
struct yf2049;
struct yf2055;
struct yf2060;
struct yf2065;
struct yf2070;
struct yf2075;
struct yf2080;
struct yf2085;
struct yf2090;
struct yf2096;
struct yf2101;
struct yf2106;
struct yf2112;
struct yf2118;
struct yf2124;
struct yf2130;
struct yf2136;
struct yf2145;
struct yf2152;
struct yf2157;
struct yf2162;
struct yf2167;
struct yf2173;
struct yf2178;
struct yf2183;
struct yf2188;
struct yf2193;
struct yf2198;
struct yf2205;
struct yf2211;
struct yf2217;
struct yf2222;
struct yf2228;
struct yf2234;
struct yf2240;
struct yf2247;
struct yf2254;
struct yf2260;
struct yf2267;
struct yf2274;
struct yf2281;
struct yf2287;
struct yf2293;
struct yf2300;
struct yf2307;
struct yf2314;
struct yf2320;
struct yf2327;
struct yf2333;
struct yf2339;
struct yf2346;
struct yf2352;
struct yf2358;
struct yf2364;
struct yf2370;
struct yf2376;
struct yf2382;
struct yf2389;
struct yf2395;
struct yf2401;
struct yf2407;
struct yf2413;
struct yf2419;
struct yf2426;
struct yf2434;
struct yf2442;
struct yf2449;
struct yf2455;
struct yf2461;
struct yf2468;
struct yf2474;
struct yf2482;
struct yf2488;
struct yf2494;
struct yf2502;
struct yf2508;
struct yf2515;
struct yf2523;
struct yf2531;
struct yf2541;
struct yf2548;
struct yf2556;
struct yf2563;
struct yf2569;
struct yf2577;
struct yf2583;
struct yf2591;
struct yf2598;
struct yf2606;
struct yf2613;
struct yf2618;
struct yf2624;
struct yf2637;
struct yf2648;
struct yf2656;
struct yf2663;
struct yf2670;
struct yf2677;
struct yf2685;
struct yf2694;
struct yf2702;
struct yf2710;
struct yf2717;
struct yf2725;
struct yf2733;
struct yf2741;
struct yf2752;
struct yf2760;
struct yf2769;
struct yf2775;
struct yf2783;
struct yf2793;
struct yf2803;
struct yf2809;
struct yf2815;
struct yf2823;
struct yf2829;
struct yf2836;
struct yf2842;
struct yf2851;
struct yf2859;
struct yf2868;
struct yf2876;
struct yf2886;
struct yf2892;
struct yf2901;
struct yf2910;
struct yf2919;
struct yf2925;
struct yf2932;
struct yf2941;
struct yf2948;
struct yf2956;
struct yf2962;
struct yf2971;
struct yf2979;
struct yf2986;
struct yf2995;
struct yf3001;
struct yf3012;
struct yf3019;
struct yf3029;
struct yf3039;
struct yf3049;
struct yf3058;
struct yf3066;
struct yf3074;
struct yf3084;
struct yf3090;
struct yf3095;
struct yf3101;
struct yf3107;
struct yf3114;
struct yf3122;
struct yf3129;
struct yf3135;
struct yf3141;
struct yf3147;
struct yf3154;
struct yf3160;
struct yf3166;
struct yf3173;
struct yf3178;
struct yf3184;
struct yf3190;
struct yf3198;
struct yf3204;
struct yf3210;
struct yf3216;
struct yf3222;
struct yf3228;
struct yf3237;
struct yf3245;
struct yf3251;
struct yf3257;
struct yf3264;
struct yf3271;
struct yf3278;
struct yf3286;
struct yf3291;
struct yf3299;
struct yf3305;
struct yf3311;
struct yf3317;
struct yf3324;
struct yf3331;
struct yf3337;
struct yf3345;
struct yf3351;
struct yf3358;
struct yf3365;
struct yf3374;
struct yf3381;
struct yf3387;
struct yf3393;
struct yf3399;
struct yf3406;
struct yf3414;
struct yf3421;
struct yf3429;
struct yf3435;
struct yf3444;
struct yf3451;
struct yf3458;
struct yf3464;
struct yf3472;
struct yf3480;
struct yf3487;
struct yf3495;
struct yf3501;
struct yf3507;
struct yf3513;
struct yf3519;
struct yf3524;
struct yf3531;
struct yf3537;
struct yf3543;
struct yf3548;
struct yf3554;
struct yf3561;
struct yf3568;
struct yf3575;
struct yf3582;
struct yf3589;
struct yf3597;
struct yf3603;
struct yf3612;
struct yf3620;
struct yf3626;
struct yf3632;
struct yf3639;
struct yf3649;
struct yf3657;
struct yf3665;
struct yf3675;
struct yf3683;
struct yf3688;
struct yf3693;
struct yf3698;
struct yf7861;
struct yf7868;
struct yf7874;
struct yR99 { rt_int f_kind; rt_int f_line; rt_int f_ival; rt_int f_flag; rt_int f_name; rt_int f_text; void * f_a; void * f_b; void * f_c; void * f_d; void * f_e; void * f_next; void * f_rep; void * f_sym; };
struct yR104 { rt_int f_kind; rt_int f_tid; rt_int f_tname; rt_int f_lo; rt_int f_hi; rt_int f_mlo; rt_int f_mhi; rt_int f_hasm; rt_int f_scale; rt_int f_prec; void * f_elem; void * f_idx; rt_int f_nidx; void * f_link; void * f_lits; rt_int f_nlits; void * f_fields; void * f_selector; rt_int f_cname; rt_int f_dname; rt_int f_dlevel; rt_int f_deep; rt_int f_abstract; rt_int f_opaque; rt_int f_opaqueops; rt_int f_ordered; rt_int f_forward; rt_int f_fwdscope; void * f_monitor; rt_int f_serial; rt_int f_sig; rt_int f_fsn; rt_int f_fsd; };
struct yR109 { rt_int f_name; void * f_rep; rt_int f_isconst; rt_int f_variant; void * f_labels; void * f_next; };
struct yR114 { rt_int f_name; rt_int f_cls; void * f_rep; rt_int f_cname; void * f_next; };
struct yR119 { rt_int f_kind; rt_int f_name; void * f_rep; rt_int f_cname; rt_int f_level; rt_int f_byref; rt_int f_readonly; rt_int f_mval; rt_int f_hasmv; void * f_params; rt_int f_nparams; void * f_ret; rt_int f_func; void * f_decl; rt_int f_depth; void * f_target; void * f_members; void * f_mnext; void * f_chain; void * f_stack; void * f_alt; void * f_monitor; rt_int f_serial; void * f_calls; void * f_writes; void * f_frees; rt_int f_seen; rt_int f_vix; };
struct yR124 { void * f_syms; rt_int f_closed; void * f_module; rt_int f_level; void * f_deferred; void * f_up; };
struct yR129 { rt_int f_t; void * f_next; };
struct yR134 { void * f_head; void * f_tail; };
struct yf998 { void *up;
rt_int v3703;
rt_int c_3706;
};
struct yf1004 { void *up;
unsigned char p1003;
};
struct yf1010 { void *up;
unsigned char p1009;
};
struct yf1016 { void *up;
unsigned char p1015;
};
struct yf1021 { void *up;
};
struct yf1027 { void *up;
unsigned char p1026;
};
struct yf1034 { void *up;
yarr p1033;
rt_int lo3742;
rt_int hi3743;
rt_int c_3745;
};
struct yf1040 { void *up;
rt_int p1039;
rt_int v3751;
};
struct yf1046 { void *up;
rt_int p1045;
ydesc yd_3766;
yarr v3768;
rt_int v3770;
rt_int v3773;
};
struct yf1051 { void *up;
rt_int v3792;
rt_int lo3803;
rt_int hi3804;
rt_int c_3806;
};
struct yf1058 { void *up;
yarr p1057;
};
struct yf1065 { void *up;
rt_int p1063;
rt_int p1064;
rt_int v3817;
rt_int v3820;
rt_int v3822;
rt_int lo3827;
rt_int hi3828;
rt_int c_3830;
rt_int lo3849;
rt_int hi3850;
rt_int c_3852;
};
struct yf1071 { void *up;
rt_int p1070;
};
struct yf1078 { void *up;
yarr p1077;
};
struct yf1085 { void *up;
rt_int p1083;
rt_int p1084;
rt_int lo3881;
rt_int hi3882;
rt_int c_3884;
};
struct yf1093 { void *up;
rt_int p1090;
yarr p1092;
rt_int v3897;
rt_int lo3913;
rt_int hi3914;
rt_int c_3916;
};
struct yf1100 { void *up;
rt_int p1098;
rt_int p1099;
};
struct yf1107 { void *up;
yR134 * p1105;
rt_int p1106;
void * v3937;
};
struct yf1115 { void *up;
yR134 * p1112;
yarr p1114;
};
struct yf1122 { void *up;
yR134 * p1120;
yR134 * p1121;
};
struct yf1128 { void *up;
rt_int p1127;
};
struct yf1135 { void *up;
yarr p1134;
};
struct yf1141 { void *up;
rt_int p1140;
rt_int v3951;
};
struct yf1147 { void *up;
yR134 p1146;
void * v3958;
};
struct yf1154 { void *up;
rt_int p1152;
rt_int p1153;
rt_int v3964;
};
struct yf1161 { void *up;
rt_int p1159;
rt_int p1160;
rt_int v3974;
};
struct yf1168 { void *up;
yfile * * p1166;
rt_int p1167;
rt_int v3984;
};
struct yf1176 { void *up;
rt_int p1173;
yarr p1175;
};
struct yf1185 { void *up;
rt_int p1181;
rt_int p1182;
yarr p1184;
rt_int v3996;
};
struct yf1190 { void *up;
};
struct yf1197 { void *up;
yarr p1196;
rt_int v4004;
};
struct yf1825 { void *up;
rt_int v4008;
rt_int v4010;
rt_int v4012;
rt_int lo4029;
rt_int hi4030;
rt_int c_4032;
};
struct yf1830 { void *up;
unsigned char v4041;
};
struct yf1837 { void *up;
rt_int p1835;
rt_int p1836;
};
struct yf1843 { void *up;
rt_int p1842;
};
struct yf1848 { void *up;
rt_int v4058;
rt_int v4060;
};
struct yf1854 { void *up;
unsigned char p1853;
};
struct yf1861 { void *up;
yarr p1860;
};
struct yf1868 { void *up;
rt_int p1866;
rt_int p1867;
rt_int v4090;
};
struct yf1874 { void *up;
rt_int p1873;
rt_int v4100;
rt_int v4103;
rt_int v4105;
rt_int v4107;
rt_int v4109;
rt_int v4111;
rt_int v4114;
rt_int v4117;
rt_int v4120;
rt_int v4123;
rt_int v4126;
rt_int v4129;
rt_int v4132;
rt_int lo4170;
rt_int hi4171;
rt_int c_4173;
rt_int lo4202;
rt_int hi4203;
rt_int c_4205;
rt_int lo4212;
rt_int hi4213;
rt_int c_4215;
};
struct yf1879 { void *up;
rt_int v4226;
rt_int v4228;
rt_int v4230;
rt_int v4232;
};
struct yf1884 { void *up;
unsigned char v4261;
rt_int v4263;
rt_int v4265;
rt_int v4267;
rt_int v4269;
rt_int v4271;
rt_int v4273;
rt_int v4275;
rt_int lo4350;
rt_int hi4351;
rt_int c_4353;
};
struct yf1891 { void *up;
rt_int p1889;
rt_int p1890;
void * v4369;
};
struct yf1899 { void *up;
void * * p1896;
void * * p1897;
void * p1898;
};
struct yf1905 { void *up;
void * p1904;
rt_int v4382;
void * v4385;
};
struct yf1910 { void *up;
};
struct yf1915 { void *up;
};
struct yf1920 { void *up;
};
struct yf1927 { void *up;
rt_int p1925;
rt_int p1926;
rt_int v4399;
};
struct yf1933 { void *up;
rt_int p1932;
};
struct yf1939 { void *up;
rt_int p1938;
};
struct yf1944 { void *up;
};
struct yf1950 { void *up;
rt_int p1949;
};
struct yf1955 { void *up;
rt_int v4422;
};
struct yf1961 { void *up;
rt_int p1960;
rt_int v4432;
};
struct yf1966 { void *up;
rt_int v4437;
};
struct yf1973 { void *up;
rt_int p1971;
rt_int p1972;
rt_int v4444;
};
struct yf1978 { void *up;
rt_int v4448;
};
struct yf1984 { void *up;
rt_int p1983;
void * v4458;
};
struct yf1989 { void *up;
void * v4465;
};
struct yf1994 { void *up;
void * v4470;
void * v4472;
void * v4474;
void * v4476;
rt_int v4478;
};
struct yf1999 { void *up;
rt_int v4487;
};
struct yf2004 { void *up;
void * v4493;
void * v4495;
void * v4497;
void * v4499;
};
struct yf2009 { void *up;
void * v4504;
void * v4506;
void * v4508;
void * v4510;
void * v4512;
};
struct yf2014 { void *up;
void * v4520;
void * v4522;
void * v4524;
};
struct yf2020 { void *up;
rt_int p2019;
void * v4530;
};
struct yf2026 { void *up;
rt_int p2025;
};
struct yf2033 { void *up;
void * * p2031;
void * * p2032;
rt_int v4551;
void * v4553;
void * v4555;
void * v4557;
};
struct yf2038 { void *up;
void * v4561;
void * v4563;
void * v4565;
rt_int v4567;
rt_int v4569;
rt_int v4571;
};
struct yf2044 { void *up;
void * p2043;
void * v4587;
void * v4589;
rt_int v4591;
};
struct yf2049 { void *up;
void * v4597;
};
struct yf2055 { void *up;
rt_int p2054;
rt_int v4609;
};
struct yf2060 { void *up;
rt_int v4617;
void * v4619;
};
struct yf2065 { void *up;
void * v4628;
void * v4630;
};
struct yf2070 { void *up;
void * v4634;
void * v4636;
void * v4638;
};
struct yf2075 { void *up;
void * v4643;
void * v4645;
void * v4647;
rt_int v4649;
};
struct yf2080 { void *up;
void * v4656;
void * v4658;
void * v4660;
void * v4662;
void * v4664;
void * v4666;
rt_int v4668;
rt_int v4670;
};
struct yf2085 { void *up;
void * v4687;
};
struct yf2090 { void *up;
rt_int v4692;
};
struct yf2096 { void *up;
rt_int p2095;
void * v4701;
void * v4703;
void * v4705;
rt_int v4707;
};
struct yf2101 { void *up;
void * v4715;
void * v4717;
void * v4719;
void * v4721;
void * v4723;
void * v4725;
rt_int v4727;
rt_int v4729;
};
struct yf2106 { void *up;
};
struct yf2112 { void *up;
rt_int p2111;
};
struct yf2118 { void *up;
rt_int p2117;
};
struct yf2124 { void *up;
rt_int p2123;
};
struct yf2130 { void *up;
rt_int p2129;
};
struct yf2136 { void *up;
rt_int p2135;
};
struct yf2145 { void *up;
rt_int p2141;
void * p2142;
void * p2143;
rt_int p2144;
void * v4783;
};
struct yf2152 { void *up;
rt_int p2150;
rt_int p2151;
rt_int v4789;
};
struct yf2157 { void *up;
void * v4793;
rt_int v4795;
rt_int v4797;
};
struct yf2162 { void *up;
void * v4801;
void * v4803;
rt_int v4805;
rt_int v4807;
};
struct yf2167 { void *up;
void * v4813;
rt_int v4815;
rt_int v4817;
};
struct yf2173 { void *up;
rt_int p2172;
rt_int v4823;
};
struct yf2178 { void *up;
void * v4828;
rt_int v4830;
rt_int v4832;
};
struct yf2183 { void *up;
void * v4836;
rt_int v4838;
rt_int v4840;
};
struct yf2188 { void *up;
void * v4861;
void * v4863;
void * v4865;
rt_int v4867;
};
struct yf2193 { void *up;
};
struct yf2198 { void *up;
void * v4874;
void * v4876;
};
struct yf2205 { void *up;
rt_int p2203;
rt_int p2204;
void * v4883;
};
struct yf2211 { void *up;
rt_int p2210;
void * v4900;
};
struct yf2217 { void *up;
void * p2216;
void * v4907;
rt_int v4909;
rt_int v4912;
};
struct yf2222 { void *up;
void * v4924;
void * v4926;
void * v4928;
rt_int v4930;
};
struct yf2228 { void *up;
void * p2227;
};
struct yf2234 { void *up;
rt_int p2233;
void * v4942;
};
struct yf2240 { void *up;
rt_int p2239;
void * v4950;
};
struct yf2247 { void *up;
rt_int p2245;
rt_int p2246;
void * v4959;
void * v4961;
rt_int lo4967;
rt_int hi4968;
rt_int c_4970;
};
struct yf2254 { void *up;
void * p2252;
void * p2253;
void * v4980;
};
struct yf2260 { void *up;
rt_int p2259;
};
struct yf2267 { void *up;
void * p2265;
rt_int p2266;
void * v4992;
void * v4994;
rt_int v4996;
};
struct yf2274 { void *up;
void * p2272;
rt_int p2273;
void * v5012;
};
struct yf2281 { void *up;
void * p2279;
rt_int p2280;
void * v5037;
};
struct yf2287 { void *up;
void * p2286;
};
struct yf2293 { void *up;
void * p2292;
void * v5052;
};
struct yf2300 { void *up;
rt_int p2298;
void * p2299;
void * v5061;
};
struct yf2307 { void *up;
void * p2305;
rt_int p2306;
void * v5070;
rt_int v5072;
};
struct yf2314 { void *up;
rt_int p2312;
rt_int p2313;
rt_int v5080;
};
struct yf2320 { void *up;
rt_int p2319;
rt_int v5095;
};
struct yf2327 { void *up;
rt_int p2325;
rt_int p2326;
rt_int v5110;
};
struct yf2333 { void *up;
void * p2332;
rt_int v5119;
};
struct yf2339 { void *up;
void * p2338;
void * v5127;
};
struct yf2346 { void *up;
rt_int p2344;
rt_int p2345;
void * v5134;
};
struct yf2352 { void *up;
void * p2351;
void * v5162;
};
struct yf2358 { void *up;
void * p2357;
};
struct yf2364 { void *up;
void * p2363;
};
struct yf2370 { void *up;
void * p2369;
};
struct yf2376 { void *up;
void * p2375;
};
struct yf2382 { void *up;
void * p2381;
};
struct yf2389 { void *up;
void * p2387;
rt_int p2388;
void * v5193;
};
struct yf2395 { void *up;
void * p2394;
};
struct yf2401 { void *up;
void * p2400;
rt_int v5205;
};
struct yf2407 { void *up;
void * p2406;
rt_int v5212;
};
struct yf2413 { void *up;
void * p2412;
rt_int v5239;
};
struct yf2419 { void *up;
void * p2418;
};
struct yf2426 { void *up;
void * p2424;
void * p2425;
};
struct yf2434 { void *up;
rt_int p2431;
void * p2432;
void * p2433;
rt_int v5288;
};
struct yf2442 { void *up;
rt_int p2439;
void * p2440;
void * p2441;
};
struct yf2449 { void *up;
void * p2447;
rt_int p2448;
};
struct yf2455 { void *up;
void * p2454;
rt_int v5303;
void * v5305;
void * v5307;
};
struct yf2461 { void *up;
void * p2460;
};
struct yf2468 { void *up;
void * p2466;
void * p2467;
};
struct yf2474 { void *up;
void * p2473;
};
struct yf2482 { void *up;
void * p2479;
yarr p2481;
rt_int v5353;
rt_int v5355;
};
struct yf2488 { void *up;
void * p2487;
};
struct yf2494 { void *up;
void * p2493;
};
struct yf2502 { void *up;
void * p2499;
void * p2500;
void * p2501;
void * v5381;
};
struct yf2508 { void *up;
void * p2507;
};
struct yf2515 { void *up;
rt_int p2513;
rt_int p2514;
rt_int v5393;
rt_int v5395;
rt_int v5397;
};
struct yf2523 { void *up;
rt_int p2520;
rt_int p2521;
rt_int p2522;
rt_int v5413;
rt_int v5415;
};
struct yf2531 { void *up;
rt_int p2528;
rt_int p2529;
rt_int p2530;
rt_int v5430;
rt_int lo5435;
rt_int hi5436;
rt_int c_5438;
};
struct yf2541 { void *up;
void * p2536;
void * p2537;
rt_int p2538;
rt_int * p2538_o;
rt_int p2539;
rt_int * p2539_o;
rt_int p2540;
rt_int * p2540_o;
rt_int v5449;
rt_int v5451;
rt_int v5453;
rt_int v5455;
rt_int v5457;
rt_int v5459;
};
struct yf2548 { void *up;
rt_int p2546;
rt_int p2547;
};
struct yf2556 { void *up;
void * p2553;
rt_int p2554;
rt_int p2555;
rt_int v5488;
};
struct yf2563 { void *up;
void * p2561;
void * p2562;
rt_int v5498;
rt_int v5500;
rt_int v5502;
rt_int v5504;
void * v5506;
void * v5508;
rt_int v5510;
rt_int v5512;
rt_int v5514;
rt_int v5516;
rt_int v5518;
};
struct yf2569 { void *up;
void * p2568;
void * v5550;
void * v5552;
rt_int v5554;
};
struct yf2577 { void *up;
void * p2574;
rt_int p2575;
rt_int p2576;
};
struct yf2583 { void *up;
rt_int p2582;
rt_int v5569;
};
struct yf2591 { void *up;
void * p2588;
rt_int p2589;
rt_int p2590;
void * v5579;
void * v5581;
};
struct yf2598 { void *up;
void * p2596;
void * p2597;
void * v5589;
void * v5591;
void * v5593;
void * v5595;
void * v5597;
void * v5599;
};
struct yf2606 { void *up;
void * p2603;
rt_int p2604;
rt_int p2605;
void * v5628;
void * v5630;
void * v5632;
void * v5634;
void * v5636;
rt_int v5638;
void * v5640;
rt_int v5642;
rt_int v5644;
};
struct yf2613 { void *up;
rt_int p2611;
void * p2612;
void * v5691;
void * v5693;
};
struct yf2618 { void *up;
void * v5697;
};
struct yf2624 { void *up;
void * p2623;
void * v5702;
rt_int v5704;
rt_int v5706;
};
struct yf2637 { void *up;
void * p2629;
void * * p2630;
rt_int p2631;
void * p2632;
rt_int p2633;
rt_int p2634;
void * p2635;
rt_int p2636;
void * v5731;
};
struct yf2648 { void *up;
void * p2642;
void * * p2643;
void * p2644;
rt_int p2645;
void * p2646;
rt_int p2647;
void * v5743;
void * v5745;
void * v5747;
};
struct yf2656 { void *up;
void * p2653;
void * p2654;
rt_int p2655;
void * v5754;
void * v5756;
void * v5758;
void * v5760;
rt_int v5762;
void * v5765;
rt_int v5767;
rt_int v5769;
};
struct yf2663 { void *up;
void * p2661;
rt_int p2662;
void * v5816;
};
struct yf2670 { void *up;
void * p2668;
rt_int p2669;
void * v5823;
rt_int v5825;
rt_int v5827;
rt_int v5829;
rt_int v5831;
rt_int lo5840;
rt_int hi5841;
rt_int c_5843;
};
struct yf2677 { void *up;
void * p2675;
void * p2676;
void * v5882;
void * v5884;
void * v5886;
rt_int v5888;
rt_int v5891;
};
struct yf2685 { void *up;
void * p2682;
rt_int p2683;
rt_int p2684;
rt_int v5916;
rt_int v5918;
};
struct yf2694 { void *up;
void * p2690;
rt_int p2691;
rt_int p2692;
rt_int * p2692_o;
rt_int p2693;
rt_int v5929;
rt_int v5931;
rt_int v5933;
ydesc yd_5942;
yarr v5944;
unsigned char v5946;
rt_int v5948;
rt_int lo5977;
rt_int hi5978;
rt_int c_5980;
};
struct yf2702 { void *up;
void * p2699;
rt_int p2700;
rt_int * p2700_o;
rt_int p2701;
rt_int * p2701_o;
void * v6015;
rt_int v6017;
rt_int v6019;
rt_int v6021;
rt_int v6023;
rt_int v6025;
void * v6027;
};
struct yf2710 { void *up;
void * p2707;
rt_int p2708;
rt_int * p2708_o;
rt_int p2709;
rt_int * p2709_o;
void * v6057;
rt_int v6059;
rt_int v6061;
rt_int v6063;
rt_int v6065;
rt_int v6067;
void * v6069;
void * v6071;
rt_int lo6088;
rt_int hi6089;
rt_int c_6091;
};
struct yf2717 { void *up;
void * p2715;
void * p2716;
};
struct yf2725 { void *up;
rt_int p2722;
void * p2723;
void * p2724;
rt_int v6119;
rt_int v6121;
void * v6123;
void * v6125;
};
struct yf2733 { void *up;
rt_int p2730;
void * p2731;
void * p2732;
rt_int v6154;
rt_int v6156;
rt_int v6158;
rt_int v6160;
rt_int v6162;
rt_int v6164;
};
struct yf2741 { void *up;
rt_int p2738;
void * p2739;
void * p2740;
rt_int v6211;
rt_int v6213;
rt_int v6215;
};
struct yf2752 { void *up;
rt_int * p2746;
void * p2747;
rt_int * p2748;
void * p2749;
void * p2750;
rt_int p2751;
rt_int v6230;
rt_int v6232;
};
struct yf2760 { void *up;
void * p2757;
rt_int p2758;
rt_int * p2758_o;
void * p2759;
void * * p2759_o;
rt_int v6239;
rt_int v6241;
};
struct yf2769 { void *up;
void * p2765;
rt_int p2766;
rt_int * p2766_o;
rt_int p2767;
rt_int * p2767_o;
rt_int p2768;
rt_int * p2768_o;
rt_int v6255;
rt_int v6257;
rt_int v6259;
rt_int v6261;
rt_int v6263;
rt_int v6265;
};
struct yf2775 { void *up;
rt_int p2774;
};
struct yf2783 { void *up;
rt_int p2780;
void * p2781;
void * p2782;
rt_int v6286;
};
struct yf2793 { void *up;
rt_int p2788;
void * p2789;
rt_int p2790;
void * p2791;
rt_int p2792;
rt_int v6325;
};
struct yf2803 { void *up;
rt_int p2798;
void * p2799;
rt_int p2800;
void * p2801;
rt_int p2802;
};
struct yf2809 { void *up;
void * p2808;
void * v6347;
void * v6349;
};
struct yf2815 { void *up;
void * p2814;
void * v6368;
void * v6370;
};
struct yf2823 { void *up;
void * p2820;
rt_int p2821;
rt_int * p2821_o;
void * p2822;
void * * p2822_o;
};
struct yf2829 { void *up;
rt_int p2828;
};
struct yf2836 { void *up;
void * p2834;
rt_int p2835;
void * v6388;
};
struct yf2842 { void *up;
void * p2841;
void * v6393;
};
struct yf2851 { void *up;
void * p2847;
void * p2848;
rt_int p2849;
rt_int * p2849_o;
void * p2850;
void * * p2850_o;
rt_int v6402;
void * v6404;
rt_int v6406;
rt_int v6408;
void * v6410;
void * v6412;
void * v6414;
rt_int v6416;
rt_int v6418;
};
struct yf2859 { void *up;
void * p2856;
void * p2857;
rt_int p2858;
void * v6461;
rt_int v6463;
rt_int v6465;
};
struct yf2868 { void *up;
void * p2864;
void * p2865;
rt_int p2866;
rt_int * p2866_o;
void * p2867;
void * * p2867_o;
void * v6477;
};
struct yf2876 { void *up;
void * p2873;
rt_int p2874;
rt_int * p2874_o;
void * p2875;
void * * p2875_o;
rt_int v6486;
rt_int v6488;
rt_int v6490;
void * v6492;
void * v6494;
void * v6496;
void * v6498;
rt_int v6500;
rt_int v6502;
};
struct yf2886 { void *up;
void * p2881;
rt_int p2882;
void * p2883;
rt_int p2884;
rt_int * p2884_o;
void * p2885;
void * * p2885_o;
};
struct yf2892 { void *up;
void * p2891;
void * v6540;
};
struct yf2901 { void *up;
yarr p2898;
rt_int p2899;
rt_int p2900;
};
struct yf2910 { void *up;
rt_int p2906;
yarr p2908;
rt_int p2909;
};
struct yf2919 { void *up;
rt_int p2915;
void * p2916;
rt_int p2917;
void * p2918;
rt_int v6568;
rt_int v6570;
void * v6572;
};
struct yf2925 { void *up;
void * p2924;
};
struct yf2932 { void *up;
rt_int p2930;
void * p2931;
};
struct yf2941 { void *up;
void * p2937;
void * p2938;
rt_int p2939;
rt_int * p2939_o;
void * p2940;
void * * p2940_o;
rt_int v6610;
rt_int v6612;
rt_int v6614;
rt_int v6616;
void * v6618;
void * v6620;
void * v6622;
rt_int v6624;
};
struct yf2948 { void *up;
void * p2946;
void * p2947;
};
struct yf2956 { void *up;
void * p2953;
rt_int p2954;
rt_int p2955;
void * v6684;
void * v6686;
rt_int v6688;
rt_int v6690;
};
struct yf2962 { void *up;
void * p2961;
void * v6702;
};
struct yf2971 { void *up;
void * p2967;
void * p2968;
rt_int p2969;
rt_int * p2969_o;
rt_int p2970;
rt_int * p2970_o;
void * v6714;
void * v6716;
void * v6718;
};
struct yf2979 { void *up;
void * p2976;
void * p2977;
rt_int p2978;
void * v6733;
};
struct yf2986 { void *up;
void * p2984;
void * p2985;
};
struct yf2995 { void *up;
void * p2991;
rt_int p2992;
rt_int p2993;
rt_int p2994;
void * v6750;
rt_int v6752;
rt_int v6756;
rt_int v6759;
rt_int v6762;
rt_int v6765;
rt_int v6768;
rt_int v6771;
};
struct yf3001 { void *up;
rt_int p3000;
};
struct yf3012 { void *up;
void * p3006;
rt_int p3007;
void * p3008;
void * p3009;
rt_int p3010;
rt_int * p3010_o;
void * p3011;
void * * p3011_o;
void * v6829;
void * v6831;
rt_int v6833;
rt_int v6835;
};
struct yf3019 { void *up;
void * p3017;
rt_int p3018;
void * v6849;
void * v6851;
};
struct yf3029 { void *up;
rt_int p3024;
void * p3025;
rt_int p3026;
void * p3027;
rt_int p3028;
void * v6861;
void * v6863;
void * v6865;
void * v6867;
rt_int v6869;
};
struct yf3039 { void *up;
rt_int p3034;
void * p3035;
rt_int p3036;
void * p3037;
rt_int p3038;
rt_int v6911;
};
struct yf3049 { void *up;
void * p3044;
void * p3045;
rt_int p3046;
rt_int p3047;
rt_int * p3047_o;
void * p3048;
void * * p3048_o;
void * v6920;
void * v6922;
rt_int v6924;
rt_int v6926;
};
struct yf3058 { void *up;
void * p3054;
void * p3055;
rt_int p3056;
rt_int * p3056_o;
void * p3057;
void * * p3057_o;
void * v6938;
void * v6940;
rt_int v6942;
rt_int v6944;
rt_int v6946;
void * v6948;
rt_int v6950;
rt_int v6952;
rt_int v6954;
rt_int v6956;
rt_int v6958;
rt_int v6961;
void * v6963;
rt_int v6965;
};
struct yf3066 { void *up;
void * p3063;
rt_int p3064;
rt_int p3065;
void * v7027;
void * v7029;
rt_int v7031;
rt_int v7033;
};
struct yf3074 { void *up;
yarr p3072;
rt_int p3073;
rt_int v7042;
};
struct yf3084 { void *up;
yarr p3080;
rt_int p3081;
yarr p3083;
rt_int v7048;
};
struct yf3090 { void *up;
rt_int p3089;
};
struct yf3095 { void *up;
};
struct yf3101 { void *up;
rt_int p3100;
};
struct yf3107 { void *up;
void * p3106;
rt_int v7070;
rt_int v7072;
rt_int v7074;
void * v7076;
void * v7078;
rt_int v7080;
void * v7082;
rt_int v7084;
};
struct yf3114 { void *up;
void * p3112;
void * p3113;
void * v7147;
void * v7149;
rt_int v7151;
rt_int v7153;
rt_int v7155;
rt_int v7157;
};
struct yf3122 { void *up;
void * p3119;
void * p3120;
void * p3121;
rt_int v7179;
void * v7181;
void * v7183;
void * v7185;
rt_int v7187;
rt_int v7189;
rt_int v7191;
rt_int v7193;
};
struct yf3129 { void *up;
void * p3127;
void * p3128;
void * v7206;
void * v7208;
rt_int v7210;
rt_int v7213;
rt_int lo7218;
rt_int hi7219;
rt_int c_7221;
};
struct yf3135 { void *up;
void * p3134;
void * v7231;
rt_int v7233;
};
struct yf3141 { void *up;
void * p3140;
void * v7241;
};
struct yf3147 { void *up;
void * p3146;
rt_int v7255;
void * v7257;
rt_int v7259;
rt_int v7261;
};
struct yf3154 { void *up;
void * p3152;
rt_int p3153;
void * v7286;
void * v7288;
};
struct yf3160 { void *up;
void * p3159;
void * v7312;
};
struct yf3166 { void *up;
void * p3165;
rt_int v7316;
void * v7318;
};
struct yf3173 { void *up;
void * p3171;
void * p3172;
rt_int v7324;
rt_int v7326;
void * v7328;
void * v7330;
rt_int v7332;
};
struct yf3178 { void *up;
void * v7338;
rt_int v7340;
};
struct yf3184 { void *up;
void * p3183;
rt_int v7347;
rt_int v7349;
rt_int v7351;
rt_int v7353;
rt_int v7355;
rt_int v7357;
rt_int v7359;
void * v7361;
void * v7363;
void * v7365;
void * v7367;
rt_int v7369;
rt_int v7371;
rt_int v7373;
rt_int v7375;
void * v7377;
};
struct yf3190 { void *up;
void * p3189;
void * v7449;
rt_int v7451;
rt_int v7453;
rt_int v7455;
void * v7457;
};
struct yf3198 { void *up;
rt_int p3195;
rt_int p3196;
rt_int p3197;
};
struct yf3204 { void *up;
void * p3203;
rt_int v7489;
rt_int v7491;
rt_int v7493;
void * v7495;
void * v7497;
};
struct yf3210 { void *up;
void * p3209;
};
struct yf3216 { void *up;
void * p3215;
void * v7518;
};
struct yf3222 { void *up;
void * p3221;
void * v7533;
};
struct yf3228 { void *up;
void * p3227;
void * v7542;
void * v7544;
void * v7546;
};
struct yf3237 { void *up;
void * p3233;
void * p3234;
void * * p3234_o;
rt_int p3235;
rt_int * p3235_o;
rt_int p3236;
rt_int * p3236_o;
void * v7554;
void * v7556;
};
struct yf3245 { void *up;
void * p3242;
rt_int p3243;
rt_int p3244;
void * v7566;
};
struct yf3251 { void *up;
void * p3250;
void * v7571;
rt_int v7573;
rt_int v7575;
void * v7577;
void * v7579;
};
struct yf3257 { void *up;
void * p3256;
void * v7584;
};
struct yf3264 { void *up;
void * p3262;
rt_int p3263;
void * v7590;
rt_int v7592;
rt_int v7594;
void * v7596;
};
struct yf3271 { void *up;
void * p3269;
yarr * p3270;
void * v7601;
rt_int v7603;
void * v7606;
rt_int lo7615;
rt_int hi7616;
rt_int c_7618;
};
struct yf3278 { void *up;
void * p3276;
void * p3277;
void * v7632;
void * v7634;
rt_int v7636;
rt_int v7638;
rt_int v7640;
rt_int v7642;
rt_int v7644;
rt_int v7646;
rt_int v7648;
rt_int v7650;
yarr v7652;
yarr v7654;
rt_int v7656;
rt_int v7658;
rt_int v7660;
rt_int v7662;
void * v7664;
void * v7666;
void * v7668;
void * v7670;
rt_int lo7684;
rt_int hi7685;
rt_int c_7687;
};
struct yf3286 { void *up;
void * p3283;
rt_int p3284;
rt_int p3285;
void * v7709;
void * v7711;
rt_int v7713;
rt_int v7715;
void * v7717;
void * v7719;
void * v7721;
rt_int v7723;
rt_int v7725;
};
struct yf7861 { struct yf3291 *up;
rt_int p7859;
rt_int p7860;
};
struct yf7868 { struct yf3291 *up;
rt_int p7866;
rt_int p7867;
void * v7888;
};
struct yf7874 { struct yf3291 *up;
rt_int p7873;
};
struct yf3291 { void *up;
void * v7741;
void * v7743;
void * v7745;
rt_int v7747;
rt_int v7750;
rt_int v7753;
void * v7756;
rt_int lo7783;
rt_int hi7784;
ydesc yd_7786;
yarr v7788;
yarr v7790;
rt_int lo7796;
rt_int hi7797;
ydesc yd_7799;
yarr v7801;
rt_int lo7807;
rt_int hi7808;
ydesc yd_7810;
yarr v7812;
rt_int lo7818;
rt_int hi7819;
ydesc yd_7821;
yarr v7823;
rt_int lo7829;
rt_int hi7830;
ydesc yd_7832;
yarr v7834;
rt_int lo7840;
rt_int hi7841;
ydesc yd_7843;
yarr v7845;
rt_int v7847;
rt_int v7850;
rt_int v7852;
rt_int v7854;
void * v7856;
rt_int lo7913;
rt_int hi7914;
rt_int c_7916;
rt_int lo7924;
rt_int hi7925;
rt_int c_7927;
rt_int lo7935;
rt_int hi7936;
rt_int c_7938;
rt_int lo7951;
rt_int hi7952;
rt_int c_7954;
rt_int lo7961;
rt_int hi7962;
rt_int c_7964;
rt_int lo7974;
rt_int hi7975;
rt_int c_7977;
rt_int lo7984;
rt_int hi7985;
rt_int c_7987;
rt_int lo7997;
rt_int hi7998;
rt_int c_8000;
rt_int lo8022;
rt_int hi8023;
rt_int c_8025;
};
struct yf3299 { void *up;
rt_int p3296;
rt_int p3297;
rt_int p3298;
rt_int lo8038;
rt_int hi8039;
rt_int c_8041;
};
struct yf3305 { void *up;
rt_int p3304;
rt_int v8055;
rt_int v8057;
rt_int lo8062;
rt_int hi8063;
rt_int c_8065;
};
struct yf3311 { void *up;
void * p3310;
void * v8075;
rt_int v8077;
rt_int v8079;
};
struct yf3317 { void *up;
void * p3316;
rt_int v8096;
};
struct yf3324 { void *up;
void * p3322;
rt_int p3323;
void * v8104;
void * v8106;
void * v8108;
void * v8110;
void * v8112;
void * v8114;
void * v8116;
rt_int v8118;
rt_int v8120;
};
struct yf3331 { void *up;
void * p3329;
void * p3330;
void * v8167;
void * v8169;
void * v8171;
rt_int v8173;
};
struct yf3337 { void *up;
void * p3336;
void * v8181;
yR134 v8183;
yR134 v8185;
rt_int v8187;
rt_int v8189;
rt_int v8191;
rt_int v8193;
rt_int v8195;
rt_int v8197;
rt_int v8199;
void * v8201;
rt_int v8203;
void * v8205;
void * v8207;
rt_int v8209;
rt_int v8211;
yR134 v8213;
};
struct yf3345 { void *up;
void * p3342;
void * p3343;
rt_int p3344;
};
struct yf3351 { void *up;
void * p3350;
rt_int v8281;
void * v8283;
void * v8285;
void * v8287;
void * v8289;
rt_int v8291;
rt_int v8293;
rt_int v8295;
rt_int v8297;
};
struct yf3358 { void *up;
void * p3356;
void * p3357;
void * v8316;
};
struct yf3365 { void *up;
void * p3363;
void * p3364;
};
struct yf3374 { void *up;
void * p3370;
rt_int p3371;
void * p3372;
rt_int p3373;
rt_int v8326;
rt_int lo8339;
rt_int hi8340;
rt_int c_8342;
};
struct yf3381 { void *up;
rt_int p3379;
rt_int p3380;
rt_int v8351;
rt_int v8355;
void * v8357;
rt_int lo8362;
rt_int hi8363;
rt_int c_8365;
rt_int lo8372;
rt_int hi8373;
rt_int c_8375;
};
struct yf3387 { void *up;
rt_int p3386;
void * v8383;
yR134 v8385;
void * v8387;
};
struct yf3393 { void *up;
void * p3392;
void * v8401;
void * v8403;
rt_int v8405;
rt_int v8407;
};
struct yf3399 { void *up;
void * p3398;
};
struct yf3406 { void *up;
rt_int p3404;
void * p3405;
void * v8417;
};
struct yf3414 { void *up;
void * * p3411;
void * p3412;
rt_int p3413;
void * v8424;
void * v8426;
void * v8428;
};
struct yf3421 { void *up;
void * p3419;
rt_int p3420;
void * v8438;
};
struct yf3429 { void *up;
rt_int p3426;
rt_int p3427;
void * p3428;
void * * p3428_o;
void * v8454;
};
struct yf3435 { void *up;
void * p3434;
void * v8472;
};
struct yf3444 { void *up;
rt_int p3440;
rt_int p3441;
void * p3442;
rt_int p3443;
void * v8480;
};
struct yf3451 { void *up;
rt_int p3449;
void * p3450;
};
struct yf3458 { void *up;
void * p3456;
void * p3457;
void * v8493;
rt_int lo8497;
rt_int hi8498;
rt_int c_8500;
};
struct yf3464 { void *up;
rt_int p3463;
void * v8507;
rt_int lo8511;
rt_int hi8512;
rt_int c_8514;
};
struct yf3472 { void *up;
void * p3469;
void * * p3470;
rt_int p3471;
void * v8523;
void * v8525;
rt_int v8527;
};
struct yf3480 { void *up;
void * p3477;
void * * p3478;
rt_int p3479;
void * v8534;
void * v8536;
void * v8538;
rt_int v8540;
void * v8542;
rt_int v8544;
rt_int v8546;
void * v8548;
};
struct yf3487 { void *up;
void * p3485;
rt_int p3486;
void * v8583;
void * v8585;
void * v8587;
};
struct yf3495 { void *up;
void * p3492;
void * p3493;
rt_int p3494;
void * v8595;
void * v8597;
void * v8599;
void * v8601;
};
struct yf3501 { void *up;
void * p3500;
void * v8608;
void * v8610;
void * v8612;
void * v8614;
void * v8616;
void * v8618;
void * v8620;
void * v8622;
void * v8624;
void * v8626;
void * v8628;
rt_int v8630;
rt_int v8632;
rt_int v8634;
};
struct yf3507 { void *up;
void * p3506;
void * v8664;
};
struct yf3513 { void *up;
void * p3512;
void * v8668;
void * v8670;
void * v8672;
void * v8674;
rt_int v8676;
rt_int v8678;
rt_int v8680;
rt_int v8682;
void * v8684;
rt_int lo8692;
rt_int hi8693;
rt_int c_8695;
};
struct yf3519 { void *up;
void * p3518;
void * v8707;
void * v8709;
};
struct yf3524 { void *up;
void * v8715;
};
struct yf3531 { void *up;
void * p3529;
void * p3530;
rt_int v8726;
rt_int v8728;
rt_int v8730;
void * v8732;
rt_int v8734;
rt_int v8736;
rt_int v8738;
rt_int v8740;
rt_int v8742;
rt_int v8744;
void * v8746;
void * v8748;
};
struct yf3537 { void *up;
void * p3536;
};
struct yf3543 { void *up;
void * p3542;
rt_int v8809;
};
struct yf3548 { void *up;
};
struct yf3554 { void *up;
void * p3553;
};
struct yf3561 { void *up;
void * p3559;
rt_int p3560;
};
struct yf3568 { void *up;
void * p3566;
rt_int p3567;
};
struct yf3575 { void *up;
void * p3573;
void * p3574;
rt_int v8852;
rt_int v8854;
rt_int v8856;
};
struct yf3582 { void *up;
void * p3580;
rt_int p3581;
void * v8865;
rt_int v8867;
};
struct yf3589 { void *up;
void * p3587;
rt_int p3588;
};
struct yf3597 { void *up;
yarr p3595;
rt_int p3596;
};
struct yf3603 { void *up;
rt_int p3602;
};
struct yf3612 { void *up;
void * p3608;
rt_int p3609;
rt_int p3610;
rt_int * p3610_o;
void * p3611;
void * * p3611_o;
rt_int v8894;
};
struct yf3620 { void *up;
void * p3617;
rt_int p3618;
rt_int * p3618_o;
void * p3619;
void * * p3619_o;
};
struct yf3626 { void *up;
void * p3625;
rt_int v8910;
void * v8912;
};
struct yf3632 { void *up;
void * p3631;
void * v8918;
rt_int v8921;
rt_int v8923;
rt_int v8925;
rt_int v8927;
rt_int v8929;
rt_int v8931;
unsigned char v8933;
void * v8935;
ydesc yd_8944;
yarr v8946;
};
struct yf3639 { void *up;
void * p3637;
void * p3638;
rt_int v8982;
rt_int v8984;
rt_int v8986;
void * v8988;
};
struct yf3649 { void *up;
rt_int p3644;
void * p3645;
rt_int p3646;
rt_int p3647;
rt_int * p3647_o;
void * p3648;
void * * p3648_o;
rt_int v9000;
rt_int v9002;
rt_int v9004;
rt_int v9006;
rt_int v9008;
void * v9010;
void * v9012;
void * v9014;
void * v9016;
rt_int v9018;
rt_int v9020;
rt_int v9022;
rt_int v9024;
void * v9026;
rt_int v9028;
rt_int lo9042;
rt_int hi9043;
rt_int c_9045;
};
struct yf3657 { void *up;
yarr p3655;
void * p3656;
void * v9237;
};
struct yf3665 { void *up;
yarr p3663;
rt_int p3664;
void * v9243;
};
struct yf3675 { void *up;
yarr p3671;
yarr p3672;
yarr p3673;
rt_int p3674;
void * v9251;
void * v9253;
void * v9255;
};
struct yf3683 { void *up;
rt_int p3680;
yarr p3682;
void * v9264;
};
struct yf3688 { void *up;
};
struct yf3693 { void *up;
void * v9344;
};
struct yf3698 { void *up;
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
static ydesc yd_195;
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
static rt_int v879;
static rt_int v882;
static rt_int v885;
static rt_int v888;
static rt_int v891;
static rt_int v894;
static rt_int v897;
static rt_int v900;
static yfile * v903;
static yfile * v905;
static yarr v907;
static rt_int v909;
static yarr v912;
static yarr v914;
static rt_int v916;
static yarr v919;
static rt_int v921;
static ydesc yd_931;
static yarr v933;
static rt_int v935;
static ydesc yd_945;
static yarr v947;
static rt_int v949;
static rt_int v952;
static ydesc yd_957;
static yarr v959;
static ydesc yd_968;
static yarr v970;
static yR134 v972;
static yR134 v974;
static yR134 v976;
static yR134 v978;
static yR134 v980;
static yR134 v982;
static yR134 v984;
static yR134 v986;
static yfile * v988;
static yR134 v990;
static yR134 v992;
static rt_int v994;
static yarr v1201;
static yarr v1203;
static yarr v1205;
static rt_int v1207;
static rt_int v1210;
static rt_int v1213;
static rt_int v1216;
static rt_int v1219;
static rt_int v1222;
static ydesc yd_1232;
static yarr v1234;
static yarr v1236;
static yarr v1238;
static rt_int v1240;
static rt_int v1243;
static void * v1246;
static rt_int v1248;
static rt_int v1251;
static yarr v1254;
static ydesc yd_1263;
static yarr v1265;
static rt_int v1267;
static rt_int v1270;
static rt_int v1273;
static ydesc yd_1283;
static yarr v1285;
static ydesc yd_1294;
static yarr v1296;
static ydesc yd_1305;
static yarr v1307;
static ydesc yd_1316;
static yarr v1318;
static yarr v1320;
static rt_int v1322;
static ydesc yd_1332;
static yarr v1334;
static void * v1336;
static void * v1338;
static void * v1340;
static void * v1342;
static void * v1344;
static void * v1346;
static void * v1348;
static void * v1350;
static void * v1352;
static void * v1354;
static void * v1356;
static void * v1358;
static rt_int v1360;
static rt_int v1363;
static rt_int v1366;
static rt_int v1369;
static rt_int v1372;
static rt_int v1375;
static rt_int v1378;
static rt_int v1381;
static rt_int v1384;
static rt_int v1387;
static rt_int v1390;
static rt_int v1393;
static rt_int v1396;
static rt_int v1399;
static rt_int v1402;
static rt_int v1405;
static rt_int v1408;
static rt_int v1411;
static rt_int v1414;
static rt_int v1417;
static rt_int v1420;
static rt_int v1423;
static rt_int v1426;
static rt_int v1429;
static rt_int v1432;
static rt_int v1435;
static rt_int v1438;
static rt_int v1441;
static rt_int v1444;
static rt_int v1447;
static rt_int v1450;
static rt_int v1453;
static rt_int v1456;
static rt_int v1459;
static rt_int v1462;
static rt_int v1465;
static rt_int v1468;
static void * v1471;
static ydesc yd_1480;
static yarr v1482;
static ydesc yd_1491;
static yarr v1493;
static ydesc yd_1502;
static yarr v1504;
static rt_int v1506;
static ydesc yd_1516;
static yarr v1518;
static rt_int v1520;
static rt_int v1523;
static ydesc yd_1533;
static yarr v1535;
static ydesc yd_1544;
static yarr v1546;
static rt_int v1548;
static ydesc yd_1558;
static yarr v1560;
static rt_int v1562;
static ydesc yd_1572;
static yarr v1574;
static yarr v1576;
static ydesc yd_1585;
static yarr v1587;
static rt_int v1589;
static rt_int v1592;
static void * v1595;
static ydesc yd_1604;
static yarr v1606;
static yarr v1608;
static rt_int v1610;
static ydesc yd_1620;
static yarr v1622;
static rt_int v1624;
static rt_int v1627;
static void * v1630;
static void * v1632;
static ydesc yd_1641;
static yarr v1643;
static ydesc yd_1652;
static yarr v1654;
static rt_int v1656;
static ydesc yd_1666;
static yarr v1668;
static ydesc yd_1677;
static yarr v1679;
static ydesc yd_1688;
static yarr v1690;
static ydesc yd_1699;
static yarr v1701;
static ydesc yd_1710;
static yarr v1712;
static ydesc yd_1721;
static yarr v1723;
static ydesc yd_1732;
static yarr v1734;
static yarr v1736;
static ydesc yd_1745;
static yarr v1747;
static rt_int v1749;
static rt_int v1752;
static void * v1755;
static ydesc yd_1764;
static yarr v1766;
static rt_int v1768;
static ydesc yd_1778;
static yarr v1780;
static ydesc yd_1789;
static yarr v1791;
static ydesc yd_1800;
static yarr v1802;
static ydesc yd_1811;
static yarr v1813;
static yarr v1815;
static rt_int v1817;
static void * v1820;
static void * v1822;
static void yr997_InitChars(void);
static rt_int yr1002_IsLetter(unsigned char a_p1003);
static rt_int yr1008_IsDigit(unsigned char a_p1009);
static void yr1014_PoolAdd(unsigned char a_p1015);
static void yr1020_SB(void);
static void yr1025_SC(unsigned char a_p1026);
static void yr1031_SA(yarr a_p1033);
static void yr1038_ST(rt_int a_p1039);
static void yr1044_SI(rt_int a_p1045);
static rt_int yr1050_SE(void);
static rt_int yr1055_T(yarr a_p1057);
static rt_int yr1062_Intern(rt_int a_p1063, rt_int a_p1064);
static rt_int yr1069_Name(rt_int a_p1070);
static rt_int yr1075_N(yarr a_p1077);
static rt_int yr1082_TEq(rt_int a_p1083, rt_int a_p1084);
static rt_int yr1089_TStarts(rt_int a_p1090, yarr a_p1092);
static unsigned char yr1097_TChar(rt_int a_p1098, rt_int a_p1099);
static void yr1104_Put(yR134 * a_p1105, rt_int a_p1106);
static void yr1111_PutS(yR134 * a_p1112, yarr a_p1114);
static void yr1119_Append(yR134 * a_p1120, yR134 * a_p1121);
static void yr1126_Emit(rt_int a_p1127);
static void yr1132_EmitS(yarr a_p1134);
static void yr1139_WriteTxt(rt_int a_p1140);
static void yr1145_WriteBuf(yR134 a_p1146);
static void yr1151_Fail(rt_int a_p1152, rt_int a_p1153);
static void yr1158_Warn(rt_int a_p1159, rt_int a_p1160);
static void yr1165_WriteTo(yfile * * a_p1166, rt_int a_p1167);
static void yr1172_FailS(rt_int a_p1173, yarr a_p1175);
static void yr1180_FailN(rt_int a_p1181, rt_int a_p1182, yarr a_p1184);
static rt_int yr1189_NewSerial(void);
static rt_int yr1194_Fresh(yarr a_p1196);
static void yr1824_InitWords(void);
static void yr1829_ReadSource(void);
static void yr1834_AddTok(rt_int a_p1835, rt_int a_p1836);
static unsigned char yr1841_At(rt_int a_p1842);
static rt_int yr1847_EndsOperand(void);
static rt_int yr1852_DigitVal(unsigned char a_p1853);
static void yr1858_LexError(yarr a_p1860);
static void yr1865_LexDigits(rt_int a_p1866, rt_int a_p1867);
static void yr1872_LexNumber(rt_int a_p1873);
static void yr1878_LexString(void);
static void yr1883_Lex(void);
static void * yr1888_NewNode(rt_int a_p1889, rt_int a_p1890);
static void yr1895_Link(void * * a_p1896, void * * a_p1897, void * a_p1898);
static rt_int yr1903_Count(void * a_p1904);
static rt_int yr1909_TK(void);
static rt_int yr1914_TV(void);
static rt_int yr1919_TLn(void);
static rt_int yr1924_IsAt(rt_int a_p1925, rt_int a_p1926);
static rt_int yr1931_Is(rt_int a_p1932);
static rt_int yr1937_IsIdAt(rt_int a_p1938);
static void yr1943_Skip(void);
static rt_int yr1948_Accept(rt_int a_p1949);
static rt_int yr1954_TokText(void);
static void yr1959_Expect(rt_int a_p1960);
static rt_int yr1965_Ident(void);
static void yr1970_CloseName(rt_int a_p1971, rt_int a_p1972);
static rt_int yr1977_ExtendedId(void);
static rt_int yr1982_IsLabel(rt_int a_p1983);
static void * yr1988_ImportItem(void);
static void * yr1993_ParseModule(void);
static rt_int yr1998_IsDeclWord(void);
static void * yr2003_ParseBlock(void);
static void * yr2008_ParseHandler(void);
static void * yr2013_ParseNames(void);
static void * yr2018_SimpleEntry(rt_int a_p2019);
static rt_int yr2024_Continues(rt_int a_p2025);
static void yr2030_ParseDeclGroup(void * * a_p2031, void * * a_p2032);
static void * yr2037_ParseDecl(void);
static void yr2042_ParseFormals(void * a_p2043);
static void * yr2048_ParseFormalRep(void);
static rt_int yr2053_IsStructWord(rt_int a_p2054);
static void * yr2059_ParseRep(void);
static void * yr2064_ParseConcrete(void);
static void * yr2069_ParseIds(void);
static void * yr2074_ParseFieldGroups(void);
static void * yr2079_ParseConcrete1(void);
static void * yr2084_ParseQualifier(void);
static rt_int yr2089_IsStop(void);
static void * yr2094_ParseStatements(rt_int a_p2095);
static void * yr2100_ParseStatement(void);
static rt_int yr2105_OpAt(void);
static rt_int yr2110_IsRel(rt_int a_p2111);
static rt_int yr2116_IsAssocMul(rt_int a_p2117);
static rt_int yr2122_IsNonAssocMul(rt_int a_p2123);
static rt_int yr2128_IsAssocAdd(rt_int a_p2129);
static rt_int yr2134_IsNonAssocAdd(rt_int a_p2135);
static void * yr2140_Bin(rt_int a_p2141, void * a_p2142, void * a_p2143, rt_int a_p2144);
static void yr2149_NeedParens(rt_int a_p2150, rt_int a_p2151);
static void * yr2156_ParseExpr(void);
static void * yr2161_ParseSimple(void);
static void * yr2166_ParseTerm(void);
static rt_int yr2171_IsLiteralAt(rt_int a_p2172);
static void * yr2177_ParseLiteral(void);
static void * yr2182_ParseFactor(void);
static void * yr2187_ParseDesignator(void);
static void yr2192_EXIT_ARGS(void);
static void * yr2197_ParseProgram(void);
static void * yr2202_NewSym(rt_int a_p2203, rt_int a_p2204);
static void yr2209_OpenScope(rt_int a_p2210);
static void yr2215_ReopenScope(void * a_p2216);
static void yr2221_CloseScope(void);
static rt_int yr2226_Visible(void * a_p2227);
static void * yr2232_Find(rt_int a_p2233);
static void * yr2238_FindHere(rt_int a_p2239);
static void * yr2244_Lookup(rt_int a_p2245, rt_int a_p2246);
static rt_int yr2251_AltOf(void * a_p2252, void * a_p2253);
static rt_int yr2258_IsSimple(rt_int a_p2259);
static rt_int yr2264_DeclaredFrom(void * a_p2265, rt_int a_p2266);
static rt_int yr2271_LiteralIn(void * a_p2272, rt_int a_p2273);
static rt_int yr2278_LiteralInGroups(void * a_p2279, rt_int a_p2280);
static rt_int yr2285_Resolved(void * a_p2286);
static rt_int yr2291_Ambiguous(void * a_p2292);
static void * yr2297_FindLit(rt_int a_p2298, void * a_p2299);
static void yr2304_Define(void * a_p2305, rt_int a_p2306);
static rt_int yr2311_Path(rt_int a_p2312, rt_int a_p2313);
static rt_int yr2318_FramePtr(rt_int a_p2319);
static void yr2324_DeclStorage(rt_int a_p2325, rt_int a_p2326);
static rt_int yr2331_SymPath(void * a_p2332);
static void * yr2337_Real(void * a_p2338);
static void * yr2343_NewRep(rt_int a_p2344, rt_int a_p2345);
static void * yr2350_CopyRep(void * a_p2351);
static rt_int yr2356_IsDiscrete(void * a_p2357);
static rt_int yr2362_IsNumeric(void * a_p2363);
static rt_int yr2368_IsArrayLike(void * a_p2369);
static rt_int yr2374_IsString(void * a_p2375);
static rt_int yr2380_Deep(void * a_p2381);
static rt_int yr2386_Holds(void * a_p2387, rt_int a_p2388);
static rt_int yr2393_HoldsSignal(void * a_p2394);
static rt_int yr2399_NonAssignable(void * a_p2400);
static rt_int yr2405_CType(void * a_p2406);
static rt_int yr2411_DescOf(void * a_p2412);
static void yr2417_NewDesc(void * a_p2418);
static rt_int yr2423_SameType(void * a_p2424, void * a_p2425);
static void yr2430_TypeClash(rt_int a_p2431, void * a_p2432, void * a_p2433);
static void yr2438_CheckType(rt_int a_p2439, void * a_p2440, void * a_p2441);
static void yr2446_CheckRepresented(void * a_p2447, rt_int a_p2448);
static rt_int yr2453_SigText(void * a_p2454);
static rt_int yr2459_RepSig(void * a_p2460);
static rt_int yr2465_Identical(void * a_p2466, void * a_p2467);
static rt_int yr2472_IsLiteralNode(void * a_p2473);
static void yr2478_StoreBounds(void * a_p2479, yarr a_p2481);
static rt_int yr2486_LoText(void * a_p2487);
static rt_int yr2492_HiText(void * a_p2493);
static void * yr2498_AdoptLiteral(void * a_p2499, void * a_p2500, void * a_p2501);
static rt_int yr2506_HasQualifier(void * a_p2507);
static rt_int yr2512_Gcd(rt_int a_p2513, rt_int a_p2514);
static rt_int yr2519_MulChk(rt_int a_p2520, rt_int a_p2521, rt_int a_p2522);
static rt_int yr2527_PowChk(rt_int a_p2528, rt_int a_p2529, rt_int a_p2530);
static void yr2535_ScaleRatio(void * a_p2536, void * a_p2537, rt_int * a_p2538, rt_int * a_p2539, rt_int * a_p2540);
static rt_int yr2545_Factor(rt_int a_p2546, rt_int a_p2547);
static void yr2552_SetScale(void * a_p2553, rt_int a_p2554, rt_int a_p2555);
static void yr2560_Qualify(void * a_p2561, void * a_p2562);
static void yr2567_DefineLits(void * a_p2568);
static void yr2573_SetRange(void * a_p2574, rt_int a_p2575, rt_int a_p2576);
static rt_int yr2581_NewTid(rt_int a_p2582);
static void * yr2587_MakeRep(void * a_p2588, rt_int a_p2589, rt_int a_p2590);
static rt_int yr2595_Conforms(void * a_p2596, void * a_p2597);
static void * yr2602_MakeRep1(void * a_p2603, rt_int a_p2604, rt_int a_p2605);
static void yr2610_ResolvePending(rt_int a_p2611, void * a_p2612);
static void yr2617_CheckPending(void);
static void yr2622_BuildArrayDesc(void * a_p2623);
static void yr2628_AddField(void * a_p2629, void * * a_p2630, rt_int a_p2631, void * a_p2632, rt_int a_p2633, rt_int a_p2634, void * a_p2635, rt_int a_p2636);
static void yr2641_AddFields(void * a_p2642, void * * a_p2643, void * a_p2644, rt_int a_p2645, void * a_p2646, rt_int a_p2647);
static void yr2652_MakeRecord(void * a_p2653, void * a_p2654, rt_int a_p2655);
static void * yr2660_FindField(void * a_p2661, rt_int a_p2662);
static rt_int yr2667_CharOrd(void * a_p2668, rt_int a_p2669);
static void * yr2674_AlphabetFor(void * a_p2675, void * a_p2676);
static rt_int yr2681_CharValue(void * a_p2682, rt_int a_p2683, rt_int a_p2684);
static rt_int yr2689_StringCodes(void * a_p2690, rt_int a_p2691, rt_int * a_p2692, rt_int a_p2693);
static void yr2698_Manifest(void * a_p2699, rt_int * a_p2700, rt_int * a_p2701);
static void yr2706_ManifestStd(void * a_p2707, rt_int * a_p2708, rt_int * a_p2709);
static rt_int yr2714_NeedsConv(void * a_p2715, void * a_p2716);
static rt_int yr2721_ConvertRecord(rt_int a_p2722, void * a_p2723, void * a_p2724);
static rt_int yr2729_ConvertArray(rt_int a_p2730, void * a_p2731, void * a_p2732);
static rt_int yr2737_RescaleCode(rt_int a_p2738, void * a_p2739, void * a_p2740);
static void yr2745_CommonScale(rt_int * a_p2746, void * a_p2747, rt_int * a_p2748, void * a_p2749, void * a_p2750, rt_int a_p2751);
static void yr2756_FixLiteral(void * a_p2757, rt_int * a_p2758, void * * a_p2759);
static void yr2764_ManifestFix(void * a_p2765, rt_int * a_p2766, rt_int * a_p2767, rt_int * a_p2768);
static rt_int yr2773_FloatChk(rt_int a_p2774);
static rt_int yr2779_Convert(rt_int a_p2780, void * a_p2781, void * a_p2782);
static rt_int yr2787_StoreText(rt_int a_p2788, void * a_p2789, rt_int a_p2790, void * a_p2791, rt_int a_p2792);
static void yr2797_Store(rt_int a_p2798, void * a_p2799, rt_int a_p2800, void * a_p2801, rt_int a_p2802);
static rt_int yr2807_IsVariable(void * a_p2808);
static void yr2813_CheckPure(void * a_p2814);
static void yr2819_LValue(void * a_p2820, rt_int * a_p2821, void * * a_p2822);
static rt_int yr2827_Paren(rt_int a_p2828);
static void * yr2833_Lit(void * a_p2834, rt_int a_p2835);
static void * yr2840_Qualifier(void * a_p2841);
static void yr2846_Expr(void * a_p2847, void * a_p2848, rt_int * a_p2849, void * * a_p2850);
static rt_int yr2855_VariantTest(void * a_p2856, void * a_p2857, rt_int a_p2858);
static void yr2863_NameExpr(void * a_p2864, void * a_p2865, rt_int * a_p2866, void * * a_p2867);
static void yr2872_IndexExpr(void * a_p2873, rt_int * a_p2874, void * * a_p2875);
static void yr2880_NegExpr(void * a_p2881, rt_int a_p2882, void * a_p2883, rt_int * a_p2884, void * * a_p2885);
static void * yr2890_Unbounded(void * a_p2891);
static rt_int yr2896_Call2(yarr a_p2898, rt_int a_p2899, rt_int a_p2900);
static rt_int yr2905_Infix(rt_int a_p2906, yarr a_p2908, rt_int a_p2909);
static rt_int yr2914_EqCode(rt_int a_p2915, void * a_p2916, rt_int a_p2917, void * a_p2918);
static rt_int yr2923_IsOrdered(void * a_p2924);
static rt_int yr2929_FixToFloat(rt_int a_p2930, void * a_p2931);
static void yr2936_BinExpr(void * a_p2937, void * a_p2938, rt_int * a_p2939, void * * a_p2940);
static rt_int yr2945_Fits(void * a_p2946, void * a_p2947);
static void * yr2952_Choose(void * a_p2953, rt_int a_p2954, rt_int a_p2955);
static rt_int yr2960_HidesStandard(void * a_p2961);
static void yr2966_CompileArgs(void * a_p2967, void * a_p2968, rt_int * a_p2969, rt_int * a_p2970);
static void yr2975_CheckUnresolved(void * a_p2976, void * a_p2977, rt_int a_p2978);
static rt_int yr2983_SameAsFormal(void * a_p2984, void * a_p2985);
static rt_int yr2990_CallCode(void * a_p2991, rt_int a_p2992, rt_int a_p2993, rt_int a_p2994);
static rt_int yr2999_Num(rt_int a_p3000);
static rt_int yr3005_UserOp(void * a_p3006, rt_int a_p3007, void * a_p3008, void * a_p3009, rt_int * a_p3010, void * * a_p3011);
static void yr3016_NoteCall(void * a_p3017, rt_int a_p3018);
static rt_int yr3023_UserAssign(rt_int a_p3024, void * a_p3025, rt_int a_p3026, void * a_p3027, rt_int a_p3028);
static void yr3033_Assign(rt_int a_p3034, void * a_p3035, rt_int a_p3036, void * a_p3037, rt_int a_p3038);
static void yr3043_CallExpr(void * a_p3044, void * a_p3045, rt_int a_p3046, rt_int * a_p3047, void * * a_p3048);
static void yr3053_Denote(void * a_p3054, void * a_p3055, rt_int * a_p3056, void * * a_p3057);
static rt_int yr3062_VariantOf(void * a_p3063, rt_int a_p3064, rt_int a_p3065);
static void yr3070_Emit2(yarr a_p3072, rt_int a_p3073);
static void yr3078_Emit3(yarr a_p3080, rt_int a_p3081, yarr a_p3083);
static void yr3088_PopTo(rt_int a_p3089);
static void yr3094_LeaveBlock(void);
static rt_int yr3099_RaiseCode(rt_int a_p3100);
static void yr3105_BlockStatements(void * a_p3106);
static rt_int yr3111_SameDesig(void * a_p3112, void * a_p3113);
static void yr3118_CheckVariantSelected(void * a_p3119, void * a_p3120, void * a_p3121);
static void yr3126_CheckCaseLabels(void * a_p3127, void * a_p3128);
static rt_int yr3133_Falls(void * a_p3134);
static rt_int yr3139_BlockFalls(void * a_p3140);
static rt_int yr3145_Completes(void * a_p3146);
static rt_int yr3151_Exits(void * a_p3152, rt_int a_p3153);
static void yr3158_Statements(void * a_p3159);
static rt_int yr3164_Cond(void * a_p3165);
static rt_int yr3170_Label(void * a_p3171, void * a_p3172);
static void yr3177_CopyOut(void);
static void yr3182_Statement(void * a_p3183);
static void yr3188_ForStatement(void * a_p3189);
static rt_int yr3194_Join(rt_int a_p3195, rt_int a_p3196, rt_int a_p3197);
static void yr3202_ReturnStatement(void * a_p3203);
static void yr3208_BeginStatement(void * a_p3209);
static void yr3214_PlaceLabel(void * a_p3215);
static void yr3220_GotoStatement(void * a_p3221);
static void yr3226_CheckLabels(void * a_p3227);
static void yr3232_DesigBase(void * a_p3233, void * * a_p3234, rt_int * a_p3235, rt_int * a_p3236);
static void * yr3241_Note(void * a_p3242, rt_int a_p3243, rt_int a_p3244);
static void yr3249_NoteWrite(void * a_p3250);
static void yr3255_NoteFree(void * a_p3256);
static void yr3261_NoteFreeDeref(void * a_p3262, rt_int a_p3263);
static rt_int yr3268_DSteps(void * a_p3269, yarr * a_p3270);
static rt_int yr3275_Overlaps(void * a_p3276, void * a_p3277);
static void yr3282_CheckActuals(void * a_p3283, rt_int a_p3284, rt_int a_p3285);
static void yr3290_CheckEffects(void);
static rt_int yr3295_DynIndex(rt_int a_p3296, rt_int a_p3297, rt_int a_p3298);
static rt_int yr3303_RoutineCName(rt_int a_p3304);
static void * yr3309_FormalRep(void * a_p3310);
static rt_int yr3315_ParamCType(void * a_p3316);
static void yr3321_RoutineHeader(void * a_p3322, rt_int a_p3323);
static void * yr3328_SameSignature(void * a_p3329, void * a_p3330);
static void yr3335_RoutineBody(void * a_p3336);
static void yr3341_DeclareStorage(void * a_p3342, void * a_p3343, rt_int a_p3344);
static void yr3349_SimpleDecl(void * a_p3350);
static void yr3355_NoteAlphabet(void * a_p3356, void * a_p3357);
static void yr3362_AtLocation(void * a_p3363, void * a_p3364);
static void yr3369_Defer(void * a_p3370, rt_int a_p3371, void * a_p3372, rt_int a_p3373);
static void yr3378_RunDeferred(rt_int a_p3379, rt_int a_p3380);
static void yr3385_ModuleInit(rt_int a_p3386);
static void yr3391_Declarations(void * a_p3392);
static void yr3397_DeclareRoutine(void * a_p3398);
static void * yr3403_Alias(rt_int a_p3404, void * a_p3405);
static void yr3410_AddLits(void * * a_p3411, void * a_p3412, rt_int a_p3413);
static rt_int yr3418_Provides(void * a_p3419, rt_int a_p3420);
static rt_int yr3425_ImportLater(rt_int a_p3426, rt_int a_p3427, void * * a_p3428);
static void * yr3433_OneDecl(void * a_p3434);
static void * yr3439_Lazy(rt_int a_p3440, rt_int a_p3441, void * a_p3442, rt_int a_p3443);
static void yr3448_SetLazy(rt_int a_p3449, void * a_p3450);
static void yr3455_ResolveFrom(void * a_p3456, void * a_p3457);
static void yr3462_ResolveLater(rt_int a_p3463);
static void yr3468_LazyModule(void * a_p3469, void * * a_p3470, rt_int a_p3471);
static void yr3476_ResolveItem(void * a_p3477, void * * a_p3478, rt_int a_p3479);
static void yr3484_DefineAll(void * a_p3485, rt_int a_p3486);
static void * yr3491_ExtendWith(void * a_p3492, void * a_p3493, rt_int a_p3494);
static void yr3499_CompileModule(void * a_p3500);
static void yr3505_DeclareTemplate(void * a_p3506);
static void yr3511_Instantiate(void * a_p3512);
static void yr3517_DeclareProcess(void * a_p3518);
static void yr3523_AwaitProcesses(void);
static void yr3528_Activate(void * a_p3529, void * a_p3530);
static rt_int yr3535_MonitorPath(void * a_p3536);
static void yr3541_EnterMonitor(void * a_p3542);
static void yr3547_LeaveMonitor(void);
static void yr3552_TerminateStatement(void * a_p3553);
static void yr3558_DeclareSignal(void * a_p3559, rt_int a_p3560);
static void yr3565_DeclareSignalArray(void * a_p3566, rt_int a_p3567);
static void yr3572_DeviceSignal(void * a_p3573, void * a_p3574);
static void * yr3579_Arg(void * a_p3580, rt_int a_p3581);
static void yr3586_NArgs(void * a_p3587, rt_int a_p3588);
static rt_int yr3593_Call1(yarr a_p3595, rt_int a_p3596);
static rt_int yr3601_Addr(rt_int a_p3602);
static void yr3607_StdVar(void * a_p3608, rt_int a_p3609, rt_int * a_p3610, void * * a_p3611);
static void yr3616_NumArg(void * a_p3617, rt_int * a_p3618, void * * a_p3619);
static rt_int yr3624_IntArg(void * a_p3625);
static void yr3630_CodeInsert(void * a_p3631);
static void * yr3636_ManifestScale(void * a_p3637, void * a_p3638);
static void yr3643_StdCall(rt_int a_p3644, void * a_p3645, rt_int a_p3646, rt_int * a_p3647, void * * a_p3648);
static void yr3653_StdRep(yarr a_p3655, void * a_p3656);
static void yr3661_StdOp(yarr a_p3663, rt_int a_p3664);
static void * yr3669_LitList(yarr a_p3671, yarr a_p3672, yarr a_p3673, rt_int a_p3674);
static void * yr3679_Abstract(rt_int a_p3680, yarr a_p3682);
static void yr3687_Predefine(void);
static void yr3692_Translate(void);
static void yr3697_WriteProgram(void);
static rt_int yr7858_At(struct yf3291 *up, rt_int a_p7859, rt_int a_p7860);
static rt_int yr7865_Reaches(struct yf3291 *up, rt_int a_p7866, rt_int a_p7867);
static rt_int yr7872_VName(struct yf3291 *up, rt_int a_p7873);
static void yr997_InitChars(void) {
struct yf998 F;
memset((void *)&F, 0, sizeof F);
F.v3703 = INT64_C(0);
{ rt_int hi3708 = 127;
for (rt_int i3707 = 0; i3707 <= hi3708; i3707++) { F.c_3706 = i3707;
((rt_int *)(v959).p)[y_ix1(v959, F.c_3706)] = F.v3703;
((unsigned char *)(v970).p)[y_ix1(v970, F.v3703)] = F.c_3706;
F.v3703 = rt_range(rt_add(F.v3703, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3707 == hi3708) break;
}}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1002_IsLetter(unsigned char a_p1003) {
struct yf1004 F;
memset((void *)&F, 0, sizeof F);
F.p1003 = a_p1003;
{ rt_int rv3718 = ((((((F.p1003 >= 65)) && ((F.p1003 <= 90)))) || ((((F.p1003 >= 97)) && ((F.p1003 <= 122))))) || ((F.p1003 == 95)));
return rv3718; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1008_IsDigit(unsigned char a_p1009) {
struct yf1010 F;
memset((void *)&F, 0, sizeof F);
F.p1009 = a_p1009;
{ rt_int rv3723 = (((F.p1009 >= 48)) && ((F.p1009 <= 57)));
return rv3723; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1014_PoolAdd(unsigned char a_p1015) {
struct yf1016 F;
memset((void *)&F, 0, sizeof F);
F.p1015 = a_p1015;
v909 = rt_range(rt_add(v909, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((unsigned char *)(v907).p)[y_ix1(v907, v909)] = F.p1015;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1020_SB(void) {
struct yf1021 F;
memset((void *)&F, 0, sizeof F);
v949 = rt_range(rt_add(v949, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v947).p)[y_ix1(v947, v949)] = v935;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1025_SC(unsigned char a_p1026) {
struct yf1027 F;
memset((void *)&F, 0, sizeof F);
F.p1026 = a_p1026;
v935 = rt_range(rt_add(v935, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((unsigned char *)(v933).p)[y_ix1(v933, v935)] = F.p1026;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1031_SA(yarr a_p1033) {
struct yf1034 F;
memset((void *)&F, 0, sizeof F);
F.p1033 = a_p1033;
F.lo3742 = y_low(F.p1033, INT64_C(1));
F.hi3743 = y_high(F.p1033, INT64_C(1));
{ rt_int hi3747 = F.hi3743;
for (rt_int i3746 = F.lo3742; i3746 <= hi3747; i3746++) { F.c_3745 = i3746;
yr1025_SC(((unsigned char *)(F.p1033).p)[y_ix1(F.p1033, F.c_3745)]);
if (i3746 == hi3747) break;
}}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1038_ST(rt_int a_p1039) {
struct yf1040 F;
memset((void *)&F, 0, sizeof F);
F.p1039 = a_p1039;
if ((F.p1039 == INT64_C(0))) {
return;
}
F.v3751 = ((rt_int *)(v912).p)[y_ix1(v912, F.p1039)];
while ((F.v3751 < (rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.p1039)], ((rt_int *)(v914).p)[y_ix1(v914, F.p1039)])))) {
yr1025_SC(((unsigned char *)(v907).p)[y_ix1(v907, F.v3751)]);
F.v3751 = rt_range(rt_add(F.v3751, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1044_SI(rt_int a_p1045) {
struct yf1046 F;
memset((void *)&F, 0, sizeof F);
F.p1045 = a_p1045;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(24)}; y_desc_array(&F.yd_3766, 1, lo, hi, &y_d_byte); }
y_init(&F.yd_3766, &F.v3768);
F.v3770 = INT64_C(0);
F.v3773 = F.p1045;
if ((F.v3773 < INT64_C(0))) {
yr1025_SC(45);
F.v3773 = rt_range(rt_neg(F.v3773), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
for (;;) {
F.v3770 = rt_range(rt_add(F.v3770, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((unsigned char *)(F.v3768).p)[y_ix1(F.v3768, F.v3770)] = ((unsigned char *)(v970).p)[y_ix1(v970, rt_add((rt_mod(F.v3773, INT64_C(10))), INT64_C(48)))];
F.v3773 = rt_range(rt_div(F.v3773, INT64_C(10)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.v3773 == INT64_C(0))) {
goto yl_3777;
}
}
yl_3777: ;
while ((F.v3770 > INT64_C(0))) {
yr1025_SC(((unsigned char *)(F.v3768).p)[y_ix1(F.v3768, F.v3770)]);
F.v3770 = rt_range(rt_sub(F.v3770, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1050_SE(void) {
struct yf1051 F;
memset((void *)&F, 0, sizeof F);
F.v3792 = ((rt_int *)(v947).p)[y_ix1(v947, v949)];
v949 = rt_range(rt_sub(v949, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v916 = rt_range(rt_add(v916, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v912).p)[y_ix1(v912, v916)] = rt_range(rt_add(v909, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v914).p)[y_ix1(v914, v916)] = rt_range(rt_sub(v935, F.v3792), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo3803 = rt_add(F.v3792, INT64_C(1));
F.hi3804 = v935;
{ rt_int hi3808 = F.hi3804;
for (rt_int i3807 = F.lo3803; i3807 <= hi3808; i3807++) { F.c_3806 = i3807;
yr1014_PoolAdd(((unsigned char *)(v933).p)[y_ix1(v933, F.c_3806)]);
if (i3807 == hi3808) break;
}}
v935 = F.v3792;
{ rt_int rv3809 = rt_range(v916, INT64_C(0), INT64_C(4000000));
return rv3809; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1055_T(yarr a_p1057) {
struct yf1058 F;
memset((void *)&F, 0, sizeof F);
F.p1057 = a_p1057;
yr1020_SB();
yr1031_SA(F.p1057);
{ rt_int rv3812 = yr1050_SE();
return rv3812; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1062_Intern(rt_int a_p1063, rt_int a_p1064) {
struct yf1065 F;
memset((void *)&F, 0, sizeof F);
F.p1063 = a_p1063;
F.p1064 = a_p1064;
F.v3817 = INT64_C(0);
F.lo3827 = F.p1063;
F.hi3828 = rt_sub((rt_add(F.p1063, F.p1064)), INT64_C(1));
{ rt_int hi3832 = F.hi3828;
for (rt_int i3831 = F.lo3827; i3831 <= hi3832; i3831++) { F.c_3830 = i3831;
F.v3817 = rt_range(rt_mod((rt_add((rt_mul(F.v3817, INT64_C(31))), ((rt_int *)(v959).p)[y_ix1(v959, ((unsigned char *)(v907).p)[y_ix1(v907, F.c_3830)])])), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3831 == hi3832) break;
}}
for (;;) {
if ((((rt_int *)(v919).p)[y_ix1(v919, F.v3817)] == INT64_C(0))) {
v916 = rt_range(rt_add(v916, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v912).p)[y_ix1(v912, v916)] = F.p1063;
((rt_int *)(v914).p)[y_ix1(v914, v916)] = F.p1064;
((rt_int *)(v919).p)[y_ix1(v919, F.v3817)] = rt_range(v916, INT64_C(0), INT64_C(4000000));
{ rt_int rv3842 = rt_range(v916, INT64_C(0), INT64_C(4000000));
return rv3842; }
}
F.v3820 = ((rt_int *)(v919).p)[y_ix1(v919, F.v3817)];
if ((((rt_int *)(v914).p)[y_ix1(v914, F.v3820)] == F.p1064)) {
F.v3822 = 1;
F.lo3849 = INT64_C(0);
F.hi3850 = rt_sub(F.p1064, INT64_C(1));
{ rt_int hi3854 = F.hi3850;
for (rt_int i3853 = F.lo3849; i3853 <= hi3854; i3853++) { F.c_3852 = i3853;
if ((!(((unsigned char *)(v907).p)[y_ix1(v907, rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.v3820)], F.c_3852))] == ((unsigned char *)(v907).p)[y_ix1(v907, rt_add(F.p1063, F.c_3852))]))) {
F.v3822 = 0;
}
if (i3853 == hi3854) break;
}}
if (F.v3822) {
{ rt_int rv3858 = rt_range(F.v3820, INT64_C(0), INT64_C(4000000));
return rv3858; }
}
}
F.v3817 = rt_range(rt_mod((rt_add(F.v3817, INT64_C(1))), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yl_3838: ;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1069_Name(rt_int a_p1070) {
struct yf1071 F;
memset((void *)&F, 0, sizeof F);
F.p1070 = a_p1070;
{ rt_int rv3865 = yr1062_Intern(((rt_int *)(v912).p)[y_ix1(v912, F.p1070)], ((rt_int *)(v914).p)[y_ix1(v914, F.p1070)]);
return rv3865; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1075_N(yarr a_p1077) {
struct yf1078 F;
memset((void *)&F, 0, sizeof F);
F.p1077 = a_p1077;
{ rt_int rv3868 = yr1069_Name(yr1055_T(F.p1077));
return rv3868; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1082_TEq(rt_int a_p1083, rt_int a_p1084) {
struct yf1085 F;
memset((void *)&F, 0, sizeof F);
F.p1083 = a_p1083;
F.p1084 = a_p1084;
if ((F.p1083 == F.p1084)) {
{ rt_int rv3873 = 1;
return rv3873; }
}
if ((!(((rt_int *)(v914).p)[y_ix1(v914, F.p1083)] == ((rt_int *)(v914).p)[y_ix1(v914, F.p1084)]))) {
{ rt_int rv3875 = 0;
return rv3875; }
}
F.lo3881 = INT64_C(0);
F.hi3882 = rt_sub(((rt_int *)(v914).p)[y_ix1(v914, F.p1083)], INT64_C(1));
{ rt_int hi3886 = F.hi3882;
for (rt_int i3885 = F.lo3881; i3885 <= hi3886; i3885++) { F.c_3884 = i3885;
if ((!(((unsigned char *)(v907).p)[y_ix1(v907, rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.p1083)], F.c_3884))] == ((unsigned char *)(v907).p)[y_ix1(v907, rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.p1084)], F.c_3884))]))) {
{ rt_int rv3890 = 0;
return rv3890; }
}
if (i3885 == hi3886) break;
}}
{ rt_int rv3892 = 1;
return rv3892; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1089_TStarts(rt_int a_p1090, yarr a_p1092) {
struct yf1093 F;
memset((void *)&F, 0, sizeof F);
F.p1090 = a_p1090;
F.p1092 = a_p1092;
F.v3897 = INT64_C(0);
if ((((rt_int *)(v914).p)[y_ix1(v914, F.p1090)] < (rt_add((rt_sub(y_high(F.p1092, INT64_C(1)), y_low(F.p1092, INT64_C(1)))), INT64_C(1))))) {
{ rt_int rv3907 = 0;
return rv3907; }
}
F.lo3913 = y_low(F.p1092, INT64_C(1));
F.hi3914 = y_high(F.p1092, INT64_C(1));
{ rt_int hi3918 = F.hi3914;
for (rt_int i3917 = F.lo3913; i3917 <= hi3918; i3917++) { F.c_3916 = i3917;
if ((!(((unsigned char *)(v907).p)[y_ix1(v907, rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.p1090)], F.v3897))] == ((unsigned char *)(F.p1092).p)[y_ix1(F.p1092, F.c_3916)]))) {
{ rt_int rv3921 = 0;
return rv3921; }
}
F.v3897 = rt_range(rt_add(F.v3897, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3917 == hi3918) break;
}}
{ rt_int rv3925 = 1;
return rv3925; }
rt_raise(Y_X_NO_RETURN);
}
static unsigned char yr1097_TChar(rt_int a_p1098, rt_int a_p1099) {
struct yf1100 F;
memset((void *)&F, 0, sizeof F);
F.p1098 = a_p1098;
F.p1099 = a_p1099;
{ unsigned char rv3932 = ((unsigned char *)(v907).p)[y_ix1(v907, rt_sub((rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.p1098)], F.p1099)), INT64_C(1)))];
return rv3932; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1104_Put(yR134 * a_p1105, rt_int a_p1106) {
struct yf1107 F;
memset((void *)&F, 0, sizeof F);
F.p1105 = a_p1105;
F.p1106 = a_p1106;
({ F.v3937 = rt_alloc(sizeof(yR129)); });
(*(yR129 *)rt_nil_check(F.v3937)) = ((yR129){ .f_t = F.p1106, .f_next = ((void *)0) });
if ((((*F.p1105)).f_head == ((void *)0))) {
((*F.p1105)).f_head = F.v3937;
} else {
((*(yR129 *)rt_nil_check(((*F.p1105)).f_tail))).f_next = F.v3937;
}
((*F.p1105)).f_tail = F.v3937;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1111_PutS(yR134 * a_p1112, yarr a_p1114) {
struct yf1115 F;
memset((void *)&F, 0, sizeof F);
F.p1112 = a_p1112;
F.p1114 = a_p1114;
yr1104_Put(&(*F.p1112), yr1055_T(F.p1114));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1119_Append(yR134 * a_p1120, yR134 * a_p1121) {
struct yf1122 F;
memset((void *)&F, 0, sizeof F);
F.p1120 = a_p1120;
F.p1121 = a_p1121;
if ((((*F.p1121)).f_head == ((void *)0))) {
return;
}
if ((((*F.p1120)).f_head == ((void *)0))) {
((*F.p1120)).f_head = ((*F.p1121)).f_head;
} else {
((*(yR129 *)rt_nil_check(((*F.p1120)).f_tail))).f_next = ((*F.p1121)).f_head;
}
((*F.p1120)).f_tail = ((*F.p1121)).f_tail;
((*F.p1121)).f_head = ((void *)0);
((*F.p1121)).f_tail = ((void *)0);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1126_Emit(rt_int a_p1127) {
struct yf1128 F;
memset((void *)&F, 0, sizeof F);
F.p1127 = a_p1127;
yr1104_Put(&v990, F.p1127);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1132_EmitS(yarr a_p1134) {
struct yf1135 F;
memset((void *)&F, 0, sizeof F);
F.p1134 = a_p1134;
yr1104_Put(&v990, yr1055_T(F.p1134));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1139_WriteTxt(rt_int a_p1140) {
struct yf1141 F;
memset((void *)&F, 0, sizeof F);
F.p1140 = a_p1140;
F.v3951 = ((rt_int *)(v912).p)[y_ix1(v912, F.p1140)];
while ((F.v3951 < (rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.p1140)], ((rt_int *)(v914).p)[y_ix1(v914, F.p1140)])))) {
({ unsigned char pv = ((unsigned char *)(v907).p)[y_ix1(v907, F.v3951)]; y_put(&v905, &pv, sizeof pv); });
F.v3951 = rt_range(rt_add(F.v3951, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1145_WriteBuf(yR134 a_p1146) {
struct yf1147 F;
memset((void *)&F, 0, sizeof F);
F.p1146 = a_p1146;
F.v3958 = (F.p1146).f_head;
while ((!(F.v3958 == ((void *)0)))) {
yr1139_WriteTxt(((*(yR129 *)rt_nil_check(F.v3958))).f_t);
({ unsigned char pv = 10; y_put(&v905, &pv, sizeof pv); });
F.v3958 = ((*(yR129 *)rt_nil_check(F.v3958))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1151_Fail(rt_int a_p1152, rt_int a_p1153) {
struct yf1154 F;
memset((void *)&F, 0, sizeof F);
F.p1152 = a_p1152;
F.p1153 = a_p1153;
v949 = INT64_C(0);
v935 = INT64_C(0);
yr1020_SB();
yr1031_SA(y_str("line ", 5));
yr1044_SI(F.p1152);
yr1031_SA(y_str(": ", 2));
yr1038_ST(F.p1153);
F.v3964 = yr1050_SE();
yr1139_WriteTxt(F.v3964);
({ unsigned char pv = 10; y_put(&v905, &pv, sizeof pv); });
y_close(&v905);
rt_raise(rt_exc("translation_error"));
rt_raise(Y_X_NO_RETURN);
}
static void yr1158_Warn(rt_int a_p1159, rt_int a_p1160) {
struct yf1161 F;
memset((void *)&F, 0, sizeof F);
F.p1159 = a_p1159;
F.p1160 = a_p1160;
yr1020_SB();
yr1031_SA(y_str("line ", 5));
yr1044_SI(F.p1159);
yr1031_SA(y_str(": warning: ", 11));
yr1038_ST(F.p1160);
F.v3974 = yr1050_SE();
yr1165_WriteTo(&v988, F.v3974);
({ unsigned char pv = 10; y_put(&v988, &pv, sizeof pv); });
yr1020_SB();
yr1031_SA(y_str("/* ", 3));
yr1038_ST(F.v3974);
yr1031_SA(y_str(" */", 3));
F.v3974 = yr1050_SE();
yr1104_Put(&v986, F.v3974);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1165_WriteTo(yfile * * a_p1166, rt_int a_p1167) {
struct yf1168 F;
memset((void *)&F, 0, sizeof F);
F.p1166 = a_p1166;
F.p1167 = a_p1167;
F.v3984 = ((rt_int *)(v912).p)[y_ix1(v912, F.p1167)];
while ((F.v3984 < (rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.p1167)], ((rt_int *)(v914).p)[y_ix1(v914, F.p1167)])))) {
({ unsigned char pv = ((unsigned char *)(v907).p)[y_ix1(v907, F.v3984)]; y_put(&(*F.p1166), &pv, sizeof pv); });
F.v3984 = rt_range(rt_add(F.v3984, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1172_FailS(rt_int a_p1173, yarr a_p1175) {
struct yf1176 F;
memset((void *)&F, 0, sizeof F);
F.p1173 = a_p1173;
F.p1175 = a_p1175;
yr1151_Fail(F.p1173, yr1055_T(F.p1175));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1180_FailN(rt_int a_p1181, rt_int a_p1182, yarr a_p1184) {
struct yf1185 F;
memset((void *)&F, 0, sizeof F);
F.p1181 = a_p1181;
F.p1182 = a_p1182;
F.p1184 = a_p1184;
yr1020_SB();
yr1038_ST(F.p1182);
yr1031_SA(F.p1184);
F.v3996 = yr1050_SE();
yr1151_Fail(F.p1181, F.v3996);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1189_NewSerial(void) {
struct yf1190 F;
memset((void *)&F, 0, sizeof F);
v952 = rt_range(rt_add(v952, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
{ rt_int rv4000 = v952;
return rv4000; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1194_Fresh(yarr a_p1196) {
struct yf1197 F;
memset((void *)&F, 0, sizeof F);
F.p1196 = a_p1196;
F.v4004 = yr1189_NewSerial();
yr1020_SB();
yr1031_SA(F.p1196);
yr1044_SI(F.v4004);
{ rt_int rv4005 = yr1050_SE();
return rv4005; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1824_InitWords(void) {
struct yf1825 F;
memset((void *)&F, 0, sizeof F);
yr1020_SB();
yr1031_SA(y_str("ALIGNMENT ALPHABET AND ARRAY AS ASSERT AT BASE2 BASE8 BASE10 BASE16 BEGIN CASE ", 79));
yr1031_SA(y_str("CONST DIMENSIONS DIV DO ELSE ELSIF END ENDEXCEPTION ENDFOR ENDFUNCTION ENDIF ", 77));
yr1031_SA(y_str("ENDLOOP ENDMODULE ENDMONITOR ENDPROCEDURE ENDPROCESS ENDRECORD ENDSELECT ", 73));
yr1031_SA(y_str("ENDTEMPLATE ENDWHILE EXCEPTION EXIT EXPORT EXTENDS FILE FOR FUNCTION GOTO IF ", 77));
yr1031_SA(y_str("IMPORT IN INLINE INSTANCE INSTANCES LABEL LOOP MOD MODULE MONITOR NIL NOT OF ", 77));
yr1031_SA(y_str("OPAQUE OR ORDERED OUT PACKED POINTER PRECISION PRIORITY PROCEDURE PROCESS ", 74));
yr1031_SA(y_str("PROPAGATE_EXCEPTION READONLY RECORD REPLACES REPRESENTATION RETURN RETURNS ", 75));
yr1031_SA(y_str("SCALE SELECT SET SIMULATED_TIME SIZE SPACE TEMPLATE TERMINATE_PROCESS THEN ", 75));
yr1031_SA(y_str("TRANSPARENT TYPE UNORDERED VAR WHILE XOR ", 41));
yr1031_SA(y_str("<<<= >>>= ### === <<< >>> <<= >>= *** /// --- +++ := => .. <= >= ## == << >> ", 77));
yr1031_SA(y_str("** // -- ++ # + - * / = < > ( ) [ ] , ; : . ^ ", 46));
F.v4012 = yr1050_SE();
v916 = INT64_C(0);
F.v4008 = ((rt_int *)(v912).p)[y_ix1(v912, F.v4012)];
F.lo4029 = ((rt_int *)(v912).p)[y_ix1(v912, F.v4012)];
F.hi4030 = rt_sub((rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.v4012)], ((rt_int *)(v914).p)[y_ix1(v914, F.v4012)])), INT64_C(1));
{ rt_int hi4034 = F.hi4030;
for (rt_int i4033 = F.lo4029; i4033 <= hi4034; i4033++) { F.c_4032 = i4033;
if ((((unsigned char *)(v907).p)[y_ix1(v907, F.c_4032)] == 32)) {
F.v4010 = yr1062_Intern(F.v4008, rt_range(rt_sub(F.c_4032, F.v4008), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v4008 = rt_range(rt_add(F.c_4032, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i4033 == hi4034) break;
}}
if ((!(v916 == v615))) {
rt_raise(rt_exc("word_table"));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1829_ReadSource(void) {
struct yf1830 F;
memset((void *)&F, 0, sizeof F);
y_open(&v903, y_str("INPUT", 5), 0);
v1210 = rt_range(rt_add(v909, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!y_check_eof(&v903))) {
({ unsigned char g; y_get(&v903, &g, sizeof g); F.v4041 = g; });
yr1014_PoolAdd(F.v4041);
}
v1213 = v909;
y_close(&v903);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1834_AddTok(rt_int a_p1835, rt_int a_p1836) {
struct yf1837 F;
memset((void *)&F, 0, sizeof F);
F.p1835 = a_p1835;
F.p1836 = a_p1836;
v1207 = rt_range(rt_add(v1207, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1201).p)[y_ix1(v1201, v1207)] = F.p1835;
((rt_int *)(v1203).p)[y_ix1(v1203, v1207)] = F.p1836;
((rt_int *)(v1205).p)[y_ix1(v1205, v1207)] = v1219;
return;
rt_raise(Y_X_NO_RETURN);
}
static unsigned char yr1841_At(rt_int a_p1842) {
struct yf1843 F;
memset((void *)&F, 0, sizeof F);
F.p1842 = a_p1842;
if ((F.p1842 > v1213)) {
{ unsigned char rv4054 = 0;
return rv4054; }
}
{ unsigned char rv4055 = ((unsigned char *)(v907).p)[y_ix1(v907, F.p1842)];
return rv4055; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1847_EndsOperand(void) {
struct yf1848 F;
memset((void *)&F, 0, sizeof F);
if ((v1207 == INT64_C(0))) {
{ rt_int rv4063 = 0;
return rv4063; }
}
F.v4058 = ((rt_int *)(v1201).p)[y_ix1(v1201, v1207)];
F.v4060 = ((rt_int *)(v1203).p)[y_ix1(v1203, v1207)];
if ((((((((F.v4058 == v201)) || ((F.v4058 == v210))) || ((F.v4058 == v213))) || ((F.v4058 == v216))) || ((F.v4058 == v219))) || ((F.v4058 == v222)))) {
{ rt_int rv4065 = 1;
return rv4065; }
}
if ((F.v4058 == v207)) {
{ rt_int rv4066 = ((((F.v4060 == v591)) || ((F.v4060 == v597))) || ((F.v4060 == v612)));
return rv4066; }
}
if ((F.v4058 == v204)) {
{ rt_int rv4067 = (F.v4060 == v381);
return rv4067; }
}
{ rt_int rv4069 = 0;
return rv4069; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1852_DigitVal(unsigned char a_p1853) {
struct yf1854 F;
memset((void *)&F, 0, sizeof F);
F.p1853 = a_p1853;
if ((((F.p1853 >= 48)) && ((F.p1853 <= 57)))) {
{ rt_int rv4076 = rt_range(rt_sub(((rt_int *)(v959).p)[y_ix1(v959, F.p1853)], INT64_C(48)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return rv4076; }
}
if ((((F.p1853 >= 65)) && ((F.p1853 <= 70)))) {
{ rt_int rv4081 = rt_range(rt_sub(((rt_int *)(v959).p)[y_ix1(v959, F.p1853)], INT64_C(55)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return rv4081; }
}
{ rt_int rv4083 = INT64_C(99);
return rv4083; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1858_LexError(yarr a_p1860) {
struct yf1861 F;
memset((void *)&F, 0, sizeof F);
F.p1860 = a_p1860;
yr1172_FailS(v1219, F.p1860);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1865_LexDigits(rt_int a_p1866, rt_int a_p1867) {
struct yf1868 F;
memset((void *)&F, 0, sizeof F);
F.p1866 = a_p1866;
F.p1867 = a_p1867;
while ((yr1008_IsDigit(yr1841_At(v1216)) || ((F.p1867 && ((yr1852_DigitVal(yr1841_At(v1216)) < INT64_C(16))))))) {
if ((yr1852_DigitVal(yr1841_At(v1216)) >= F.p1866)) {
yr1020_SB();
yr1025_SC(39);
yr1025_SC(yr1841_At(v1216));
yr1031_SA(y_str("' is not a digit of BASE", 24));
yr1044_SI(F.p1866);
yr1031_SA(y_str(" (IV.B)", 7));
F.v4090 = yr1050_SE();
yr1151_Fail(v1219, F.v4090);
}
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1872_LexNumber(rt_int a_p1873) {
struct yf1874 F;
memset((void *)&F, 0, sizeof F);
F.p1873 = a_p1873;
F.v4100 = INT64_C(10);
F.v4111 = 0;
F.v4114 = 0;
F.v4117 = INT64_C(0);
F.v4120 = INT64_C(0);
F.v4123 = INT64_C(0);
F.v4126 = INT64_C(0);
F.v4129 = INT64_C(0);
if ((!(v1222 == INT64_C(0)))) {
F.v4100 = v1222;
F.v4114 = 1;
}
v1222 = INT64_C(0);
F.v4103 = v1216;
yr1865_LexDigits(F.v4100, F.v4114);
F.v4105 = v1216;
if ((F.v4105 == F.v4103)) {
yr1858_LexError(y_str("a number has at least one digit (IV.B)", 38));
}
F.v4107 = v1216;
F.v4109 = v1216;
if ((((yr1841_At(v1216) == 46)) && ((!(yr1841_At(rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 46))))) {
F.v4111 = 1;
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4107 = v1216;
yr1865_LexDigits(F.v4100, F.v4114);
F.v4109 = v1216;
}
if ((yr1841_At(v1216) == 80)) {
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4126 = INT64_C(1);
if ((((((yr1841_At(v1216) == 45)) || ((yr1841_At(v1216) == 43)))) && yr1008_IsDigit(yr1841_At(rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))) {
if ((yr1841_At(v1216) == 45)) {
F.v4126 = INT64_C(-1);
}
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v4123 = INT64_C(0);
while (yr1008_IsDigit(yr1841_At(v1216))) {
if ((F.v4123 > INT64_C(1000))) {
yr1858_LexError(y_str("a fixed-point exponent beyond this implementation", 49));
}
F.v4123 = rt_range(rt_add((rt_mul(F.v4123, INT64_C(10))), yr1852_DigitVal(yr1841_At(v1216))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v4123 = rt_range(rt_mul(F.v4123, F.v4126), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4117 = INT64_C(0);
F.v4129 = rt_range(rt_sub(F.v4109, F.v4107), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo4170 = F.v4103;
F.hi4171 = rt_sub(F.v4109, INT64_C(1));
{ rt_int hi4175 = F.hi4171;
for (rt_int i4174 = F.lo4170; i4174 <= hi4175; i4174++) { F.c_4173 = i4174;
if ((((F.c_4173 < F.v4105)) || ((F.c_4173 >= F.v4107)))) {
F.v4120 = yr1852_DigitVal(((unsigned char *)(v907).p)[y_ix1(v907, F.c_4173)]);
if ((F.v4117 > (rt_div((rt_sub(v900, F.v4120)), F.v4100)))) {
yr1858_LexError(y_str("a fixed-point literal with more digits than this implementation holds", 69));
}
F.v4117 = rt_range(rt_add((rt_mul(F.v4117, F.v4100)), F.v4120), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i4174 == hi4175) break;
}}
if (F.p1873) {
F.v4117 = rt_range(rt_neg(F.v4117), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((v1240 >= INT64_C(200000))) {
yr1858_LexError(y_str("too many fixed-point literals", 29));
}
v1240 = rt_range(rt_add(v1240, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1234).p)[y_ix1(v1234, v1240)] = F.v4117;
((rt_int *)(v1236).p)[y_ix1(v1236, v1240)] = F.v4100;
((rt_int *)(v1238).p)[y_ix1(v1238, v1240)] = rt_range(rt_sub(F.v4123, F.v4129), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1834_AddTok(v213, v1240);
return;
}
if (F.v4111) {
if ((!(F.v4100 == INT64_C(10)))) {
yr1858_LexError(y_str("a floating-point literal is decimal", 35));
}
if ((yr1841_At(v1216) == 69)) {
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((yr1841_At(v1216) == 45)) || ((yr1841_At(v1216) == 43)))) {
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
while (yr1008_IsDigit(yr1841_At(v1216))) {
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1020_SB();
if (F.p1873) {
yr1031_SA(y_str("-", 1));
}
F.lo4202 = F.v4103;
F.hi4203 = rt_sub(v1216, INT64_C(1));
{ rt_int hi4207 = F.hi4203;
for (rt_int i4206 = F.lo4202; i4206 <= hi4207; i4206++) { F.c_4205 = i4206;
yr1025_SC(((unsigned char *)(v907).p)[y_ix1(v907, F.c_4205)]);
if (i4206 == hi4207) break;
}}
F.v4132 = yr1050_SE();
yr1834_AddTok(v216, F.v4132);
return;
}
F.v4117 = INT64_C(0);
F.lo4212 = F.v4103;
F.hi4213 = rt_sub(F.v4105, INT64_C(1));
{ rt_int hi4217 = F.hi4213;
for (rt_int i4216 = F.lo4212; i4216 <= hi4217; i4216++) { F.c_4215 = i4216;
F.v4120 = yr1852_DigitVal(((unsigned char *)(v907).p)[y_ix1(v907, F.c_4215)]);
if ((F.v4117 > (rt_div((rt_sub(v900, F.v4120)), F.v4100)))) {
yr1858_LexError(y_str("integer literal too large", 25));
}
F.v4117 = rt_range(rt_add((rt_mul(F.v4117, F.v4100)), F.v4120), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i4216 == hi4217) break;
}}
if (F.p1873) {
F.v4117 = rt_range(rt_neg(F.v4117), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yr1834_AddTok(v210, F.v4117);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1878_LexString(void) {
struct yf1879 F;
memset((void *)&F, 0, sizeof F);
yr1020_SB();
for (;;) {
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1841_At(v1216) == 34))) {
if ((((yr1841_At(v1216) == 10)) || ((v1216 > v1213)))) {
v921 = 0;
yr1858_LexError(y_str("a string must close on its line", 31));
}
yr1025_SC(yr1841_At(v1216));
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4228 = v1216;
F.v4230 = INT64_C(0);
F.v4232 = 1;
while (F.v4232) {
if (((((yr1841_At(F.v4228) == 32)) || ((yr1841_At(F.v4228) == 9))) || ((yr1841_At(F.v4228) == 13)))) {
F.v4228 = rt_range(rt_add(F.v4228, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr1841_At(F.v4228) == 10)) {
F.v4230 = rt_range(rt_add(F.v4230, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4228 = rt_range(rt_add(F.v4228, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v4232 = 0;
}
}
if ((!(yr1841_At(F.v4228) == 34))) {
goto yl_4233;
}
v1219 = rt_range(rt_add(v1219, F.v4230), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1216 = F.v4228;
}
yl_4233: ;
F.v4226 = yr1050_SE();
yr1834_AddTok(v222, F.v4226);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1883_Lex(void) {
struct yf1884 F;
memset((void *)&F, 0, sizeof F);
v1216 = v1210;
while ((v1216 <= v1213)) {
F.v4261 = ((unsigned char *)(v907).p)[y_ix1(v907, v1216)];
if ((F.v4261 == 10)) {
v1219 = rt_range(rt_add(v1219, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((((F.v4261 == 32)) || ((F.v4261 == 9))) || ((F.v4261 == 13))) || ((F.v4261 == 12)))) {
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v4261 == 40)) && ((yr1841_At(rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 42)))) {
v1216 = rt_range(rt_add(v1216, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!((((yr1841_At(v1216) == 42)) && ((yr1841_At(rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 41)))))) {
if ((((yr1841_At(v1216) == 10)) || ((v1216 > v1213)))) {
yr1858_LexError(y_str("a comment must close on its line", 32));
}
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1216 = rt_range(rt_add(v1216, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr1008_IsDigit(F.v4261) || ((((v1222 == INT64_C(16))) && ((yr1852_DigitVal(F.v4261) < INT64_C(16))))))) {
yr1872_LexNumber(0);
} else if (((((((F.v4261 == 45)) || ((F.v4261 == 43)))) && (!yr1847_EndsOperand())) && ((yr1008_IsDigit(yr1841_At(rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || ((((v1222 == INT64_C(16))) && ((yr1852_DigitVal(yr1841_At(rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) < INT64_C(16))))))))) {
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1872_LexNumber((F.v4261 == 45));
} else if ((!(v1222 == INT64_C(0)))) {
yr1858_LexError(y_str("a BASE word is followed by a number (IV.B)", 42));
} else if (yr1002_IsLetter(F.v4261)) {
F.v4263 = v1216;
while ((yr1002_IsLetter(yr1841_At(v1216)) || yr1008_IsDigit(yr1841_At(v1216)))) {
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v4271 = yr1062_Intern(F.v4263, rt_range(rt_sub(v1216, F.v4263), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((F.v4271 == v246)) {
v1222 = INT64_C(2);
} else if ((F.v4271 == v249)) {
v1222 = INT64_C(8);
} else if ((F.v4271 == v252)) {
v1222 = INT64_C(10);
} else if ((F.v4271 == v255)) {
v1222 = INT64_C(16);
} else if ((F.v4271 <= v486)) {
yr1834_AddTok(v204, F.v4271);
} else {
yr1834_AddTok(v201, F.v4271);
}
} else if ((F.v4261 == 39)) {
F.v4263 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4265 = F.v4263;
while ((!(yr1841_At(F.v4265) == 39))) {
if (((((yr1841_At(F.v4265) == 10)) || ((yr1841_At(F.v4265) == 34))) || ((F.v4265 > v1213)))) {
yr1858_LexError(y_str("bad character literal", 21));
}
F.v4265 = rt_range(rt_add(F.v4265, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v4265 == F.v4263)) {
yr1858_LexError(y_str("empty character literal", 23));
}
F.v4271 = yr1062_Intern(F.v4263, rt_range(rt_sub(F.v4265, F.v4263), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1834_AddTok(v219, F.v4271);
v1216 = rt_range(rt_add(F.v4265, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v4261 == 34)) {
yr1878_LexString();
} else {
F.v4267 = INT64_C(0);
F.v4265 = rt_range(rt_add(v486, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((F.v4267 == INT64_C(0))) && ((F.v4265 <= v615)))) {
F.v4269 = ((rt_int *)(v914).p)[y_ix1(v914, F.v4265)];
F.v4275 = 1;
F.lo4350 = INT64_C(0);
F.hi4351 = rt_sub(F.v4269, INT64_C(1));
{ rt_int hi4355 = F.hi4351;
for (rt_int i4354 = F.lo4350; i4354 <= hi4355; i4354++) { F.c_4353 = i4354;
if ((!(yr1841_At(rt_range(rt_add(v1216, F.c_4353), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == ((unsigned char *)(v907).p)[y_ix1(v907, rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.v4265)], F.c_4353))]))) {
F.v4275 = 0;
}
if (i4354 == hi4355) break;
}}
if (F.v4275) {
F.v4267 = F.v4265;
}
F.v4265 = rt_range(rt_add(F.v4265, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v4267 == INT64_C(0))) {
yr1858_LexError(y_str("a character that is not in the language", 39));
}
yr1834_AddTok(v207, F.v4267);
v1216 = rt_range(rt_add(v1216, ((rt_int *)(v914).p)[y_ix1(v914, F.v4267)]), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1834_AddTok(v198, INT64_C(0));
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1888_NewNode(rt_int a_p1889, rt_int a_p1890) {
struct yf1891 F;
memset((void *)&F, 0, sizeof F);
F.p1889 = a_p1889;
F.p1890 = a_p1890;
({ F.v4369 = rt_alloc(sizeof(yR99)); });
(*(yR99 *)rt_nil_check(F.v4369)) = ((yR99){ .f_kind = F.p1889, .f_line = F.p1890, .f_ival = INT64_C(0), .f_flag = INT64_C(0), .f_name = INT64_C(0), .f_text = INT64_C(0), .f_a = ((void *)0), .f_b = ((void *)0), .f_c = ((void *)0), .f_d = ((void *)0), .f_e = ((void *)0), .f_next = ((void *)0), .f_rep = ((void *)0), .f_sym = ((void *)0) });
{ void * rv4374 = F.v4369;
return rv4374; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1895_Link(void * * a_p1896, void * * a_p1897, void * a_p1898) {
struct yf1899 F;
memset((void *)&F, 0, sizeof F);
F.p1896 = a_p1896;
F.p1897 = a_p1897;
F.p1898 = a_p1898;
if (((*F.p1896) == ((void *)0))) {
(*F.p1896) = F.p1898;
} else {
((*(yR99 *)rt_nil_check((*F.p1897)))).f_next = F.p1898;
}
(*F.p1897) = F.p1898;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1903_Count(void * a_p1904) {
struct yf1905 F;
memset((void *)&F, 0, sizeof F);
F.p1904 = a_p1904;
F.v4382 = INT64_C(0);
F.v4385 = F.p1904;
while ((!(F.v4385 == ((void *)0)))) {
F.v4382 = rt_range(rt_add(F.v4382, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4385 = ((*(yR99 *)rt_nil_check(F.v4385))).f_next;
}
{ rt_int rv4388 = F.v4382;
return rv4388; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1909_TK(void) {
struct yf1910 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv4390 = ((rt_int *)(v1201).p)[y_ix1(v1201, v1243)];
return rv4390; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1914_TV(void) {
struct yf1915 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv4392 = ((rt_int *)(v1203).p)[y_ix1(v1203, v1243)];
return rv4392; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1919_TLn(void) {
struct yf1920 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv4394 = ((rt_int *)(v1205).p)[y_ix1(v1205, v1243)];
return rv4394; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1924_IsAt(rt_int a_p1925, rt_int a_p1926) {
struct yf1927 F;
memset((void *)&F, 0, sizeof F);
F.p1925 = a_p1925;
F.p1926 = a_p1926;
F.v4399 = ((rt_int *)(v1201).p)[y_ix1(v1201, rt_add(v1243, F.p1925))];
{ rt_int rv4402 = (((((F.v4399 == v204)) || ((F.v4399 == v207)))) && ((((rt_int *)(v1203).p)[y_ix1(v1203, rt_add(v1243, F.p1925))] == F.p1926)));
return rv4402; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1931_Is(rt_int a_p1932) {
struct yf1933 F;
memset((void *)&F, 0, sizeof F);
F.p1932 = a_p1932;
{ rt_int rv4406 = yr1924_IsAt(INT64_C(0), F.p1932);
return rv4406; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1937_IsIdAt(rt_int a_p1938) {
struct yf1939 F;
memset((void *)&F, 0, sizeof F);
F.p1938 = a_p1938;
{ rt_int rv4410 = (((rt_int *)(v1201).p)[y_ix1(v1201, rt_add(v1243, F.p1938))] == v201);
return rv4410; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1943_Skip(void) {
struct yf1944 F;
memset((void *)&F, 0, sizeof F);
if ((!(((rt_int *)(v1201).p)[y_ix1(v1201, v1243)] == v198))) {
v1243 = rt_range(rt_add(v1243, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1948_Accept(rt_int a_p1949) {
struct yf1950 F;
memset((void *)&F, 0, sizeof F);
F.p1949 = a_p1949;
if (yr1931_Is(F.p1949)) {
yr1943_Skip();
{ rt_int rv4417 = 1;
return rv4417; }
}
{ rt_int rv4419 = 0;
return rv4419; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1954_TokText(void) {
struct yf1955 F;
memset((void *)&F, 0, sizeof F);
F.v4422 = yr1909_TK();
if ((((((F.v4422 == v201)) || ((F.v4422 == v204))) || ((F.v4422 == v207))) || ((F.v4422 == v219)))) {
{ rt_int rv4423 = rt_range(yr1914_TV(), INT64_C(0), INT64_C(4000000));
return rv4423; }
}
if ((F.v4422 == v198)) {
{ rt_int rv4425 = yr1055_T(y_str("the end of the text", 19));
return rv4425; }
}
if ((F.v4422 == v210)) {
yr1020_SB();
yr1044_SI(yr1914_TV());
{ rt_int rv4426 = yr1050_SE();
return rv4426; }
}
{ rt_int rv4428 = yr1055_T(y_str("a literal", 9));
return rv4428; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1959_Expect(rt_int a_p1960) {
struct yf1961 F;
memset((void *)&F, 0, sizeof F);
F.p1960 = a_p1960;
if ((!yr1948_Accept(F.p1960))) {
yr1020_SB();
yr1031_SA(y_str("expected ", 9));
yr1038_ST(rt_range(F.p1960, INT64_C(0), INT64_C(4000000)));
yr1031_SA(y_str(", found ", 8));
yr1038_ST(yr1954_TokText());
F.v4432 = yr1050_SE();
yr1151_Fail(yr1919_TLn(), F.v4432);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1965_Ident(void) {
struct yf1966 F;
memset((void *)&F, 0, sizeof F);
if ((!(yr1909_TK() == v201))) {
yr1020_SB();
yr1031_SA(y_str("expected an identifier, found ", 30));
yr1038_ST(yr1954_TokText());
F.v4437 = yr1050_SE();
yr1151_Fail(yr1919_TLn(), F.v4437);
}
F.v4437 = rt_range(yr1914_TV(), INT64_C(0), INT64_C(4000000));
yr1943_Skip();
{ rt_int rv4439 = F.v4437;
return rv4439; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1970_CloseName(rt_int a_p1971, rt_int a_p1972) {
struct yf1973 F;
memset((void *)&F, 0, sizeof F);
F.p1971 = a_p1971;
F.p1972 = a_p1972;
if (((((yr1909_TK() == v201)) || ((yr1909_TK() == v204))) || ((yr1909_TK() == v207)))) {
F.v4444 = rt_range(yr1914_TV(), INT64_C(0), INT64_C(4000000));
if ((F.v4444 == F.p1971)) {
yr1943_Skip();
return;
}
}
yr1180_FailN(F.p1972, F.p1971, y_str(" is closed with another name", 28));
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1977_ExtendedId(void) {
struct yf1978 F;
memset((void *)&F, 0, sizeof F);
F.v4448 = rt_range(yr1914_TV(), INT64_C(0), INT64_C(4000000));
if ((yr1909_TK() == v201)) {
yr1943_Skip();
{ rt_int rv4449 = F.v4448;
return rv4449; }
}
if ((((yr1909_TK() == v204)) && (((((((((F.v4448 == v384)) || ((F.v4448 == v231))) || ((F.v4448 == v393))) || ((F.v4448 == v270))) || ((F.v4448 == v372))) || ((F.v4448 == v483))) || ((F.v4448 == v354)))))) {
yr1943_Skip();
{ rt_int rv4450 = F.v4448;
return rv4450; }
}
if (((((((((((((yr1909_TK() == v207)) && ((!(F.v4448 == v588)))) && ((!(F.v4448 == v591)))) && ((!(F.v4448 == v594)))) && ((!(F.v4448 == v597)))) && ((!(F.v4448 == v600)))) && ((!(F.v4448 == v603)))) && ((!(F.v4448 == v606)))) && ((!(F.v4448 == v609)))) && ((!(F.v4448 == v531)))) && ((!(F.v4448 == v528))))) {
yr1943_Skip();
{ rt_int rv4451 = F.v4448;
return rv4451; }
}
yr1172_FailS(yr1919_TLn(), y_str("expected a name", 15));
{ rt_int rv4454 = INT64_C(0);
return rv4454; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1982_IsLabel(rt_int a_p1983) {
struct yf1984 F;
memset((void *)&F, 0, sizeof F);
F.p1983 = a_p1983;
F.v4458 = v1246;
while ((!(F.v4458 == ((void *)0)))) {
if ((((*(yR99 *)rt_nil_check(F.v4458))).f_name == F.p1983)) {
{ rt_int rv4460 = 1;
return rv4460; }
}
F.v4458 = ((*(yR99 *)rt_nil_check(F.v4458))).f_next;
}
{ rt_int rv4462 = 0;
return rv4462; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1988_ImportItem(void) {
struct yf1989 F;
memset((void *)&F, 0, sizeof F);
F.v4465 = yr1888_NewNode(v621, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4465))).f_name = yr1977_ExtendedId();
if ((yr1937_IsIdAt(INT64_C(0)) && ((yr1914_TV() == v1248)))) {
yr1943_Skip();
((*(yR99 *)rt_nil_check(F.v4465))).f_text = yr1965_Ident();
}
if (yr1948_Accept(v237)) {
((*(yR99 *)rt_nil_check(F.v4465))).f_ival = yr1977_ExtendedId();
}
{ void * rv4467 = F.v4465;
return rv4467; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1993_ParseModule(void) {
struct yf1994 F;
memset((void *)&F, 0, sizeof F);
F.v4470 = yr1888_NewNode(v618, yr1919_TLn());
F.v4472 = ((void *)0);
F.v4474 = ((void *)0);
F.v4476 = ((void *)0);
if (yr1948_Accept(v378)) {
((*(yR99 *)rt_nil_check(F.v4470))).f_flag = INT64_C(1);
} else {
yr1959_Expect(v375);
}
((*(yR99 *)rt_nil_check(F.v4470))).f_name = yr1965_Ident();
while (yr1948_Accept(v351)) {
for (;;) {
F.v4472 = yr1988_ImportItem();
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4470))).f_a, &F.v4474, F.v4472);
if ((!yr1948_Accept(v600))) {
goto yl_4480;
}
}
yl_4480: ;
yr1959_Expect(v603);
}
while (yr1948_Accept(v330)) {
F.v4478 = INT64_C(0);
if ((((yr1931_Is(v390) || yr1931_Is(v468)) || yr1931_Is(v423)) || yr1931_Is(v477))) {
F.v4478 = yr1914_TV();
yr1943_Skip();
}
for (;;) {
F.v4472 = yr1988_ImportItem();
((*(yR99 *)rt_nil_check(F.v4472))).f_flag = F.v4478;
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4470))).f_b, &F.v4476, F.v4472);
if ((!yr1948_Accept(v600))) {
goto yl_4482;
}
}
yl_4482: ;
yr1959_Expect(v603);
}
((*(yR99 *)rt_nil_check(F.v4470))).f_c = yr2003_ParseBlock();
if ((((*(yR99 *)rt_nil_check(F.v4470))).f_flag == INT64_C(1))) {
yr1959_Expect(v303);
} else {
yr1959_Expect(v300);
}
yr1970_CloseName(((*(yR99 *)rt_nil_check(F.v4470))).f_name, ((*(yR99 *)rt_nil_check(F.v4470))).f_line);
{ void * rv4484 = F.v4470;
return rv4484; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1998_IsDeclWord(void) {
struct yf1999 F;
memset((void *)&F, 0, sizeof F);
if ((!(yr1909_TK() == v204))) {
{ rt_int rv4489 = 0;
return rv4489; }
}
F.v4487 = yr1914_TV();
{ rt_int rv4490 = (((((((((((((F.v4487 == v264)) || ((F.v4487 == v477))) || ((F.v4487 == v366))) || ((F.v4487 == v471))) || ((F.v4487 == v432))) || ((F.v4487 == v342))) || ((F.v4487 == v414))) || ((F.v4487 == v375))) || ((F.v4487 == v378))) || ((F.v4487 == v459))) || ((F.v4487 == v360))) || ((F.v4487 == v417)));
return rv4490; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2003_ParseBlock(void) {
struct yf2004 F;
memset((void *)&F, 0, sizeof F);
F.v4493 = yr1888_NewNode(v624, yr1919_TLn());
F.v4495 = ((void *)0);
F.v4497 = v1246;
while (yr1998_IsDeclWord()) {
yr2030_ParseDeclGroup(&((*(yR99 *)rt_nil_check(F.v4493))).f_a, &F.v4495);
while (yr1948_Accept(v603)) {
}
}
if (yr1931_Is(v324)) {
((*(yR99 *)rt_nil_check(F.v4493))).f_b = yr2008_ParseHandler();
F.v4499 = ((*(yR99 *)rt_nil_check(F.v4493))).f_b;
if (yr1948_Accept(v603)) {
}
}
((*(yR99 *)rt_nil_check(F.v4493))).f_c = yr2094_ParseStatements(1);
v1246 = F.v4497;
{ void * rv4501 = F.v4493;
return rv4501; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2008_ParseHandler(void) {
struct yf2009 F;
memset((void *)&F, 0, sizeof F);
F.v4504 = yr1888_NewNode(v627, yr1919_TLn());
F.v4506 = ((void *)0);
F.v4508 = ((void *)0);
F.v4510 = ((void *)0);
F.v4512 = ((void *)0);
yr1959_Expect(v324);
while (yr1948_Accept(v261)) {
F.v4506 = yr1888_NewNode(v630, yr1919_TLn());
F.v4512 = ((void *)0);
for (;;) {
F.v4510 = yr1888_NewNode(v663, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4510))).f_name = yr1965_Ident();
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4506))).f_a, &F.v4512, F.v4510);
if ((!yr1948_Accept(v600))) {
goto yl_4513;
}
}
yl_4513: ;
yr1959_Expect(v528);
((*(yR99 *)rt_nil_check(F.v4506))).f_b = yr2094_ParseStatements(0);
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4504))).f_a, &F.v4508, F.v4506);
}
if (yr1948_Accept(v276)) {
((*(yR99 *)rt_nil_check(F.v4504))).f_flag = INT64_C(1);
((*(yR99 *)rt_nil_check(F.v4504))).f_b = yr2094_ParseStatements(0);
}
yr1959_Expect(v285);
{ void * rv4517 = F.v4504;
return rv4517; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2013_ParseNames(void) {
struct yf2014 F;
memset((void *)&F, 0, sizeof F);
F.v4520 = ((void *)0);
F.v4522 = ((void *)0);
F.v4524 = ((void *)0);
for (;;) {
F.v4524 = yr1888_NewNode(v663, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4524))).f_name = yr1965_Ident();
if (yr1948_Accept(v243)) {
((*(yR99 *)rt_nil_check(F.v4524))).f_a = yr2156_ParseExpr();
}
yr1895_Link(&F.v4520, &F.v4522, F.v4524);
if ((!yr1948_Accept(v600))) {
goto yl_4525;
}
}
yl_4525: ;
{ void * rv4526 = F.v4520;
return rv4526; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2018_SimpleEntry(rt_int a_p2019) {
struct yf2020 F;
memset((void *)&F, 0, sizeof F);
F.p2019 = a_p2019;
if ((F.p2019 == v264)) {
F.v4530 = yr1888_NewNode(v633, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4530))).f_a = yr2013_ParseNames();
yr1959_Expect(v606);
((*(yR99 *)rt_nil_check(F.v4530))).f_b = yr2059_ParseRep();
yr1959_Expect(v579);
((*(yR99 *)rt_nil_check(F.v4530))).f_c = yr2156_ParseExpr();
} else if ((F.p2019 == v477)) {
F.v4530 = yr1888_NewNode(v636, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4530))).f_a = yr2013_ParseNames();
yr1959_Expect(v606);
((*(yR99 *)rt_nil_check(F.v4530))).f_b = yr2059_ParseRep();
if (yr1948_Accept(v525)) {
((*(yR99 *)rt_nil_check(F.v4530))).f_c = yr2156_ParseExpr();
}
} else if ((F.p2019 == v471)) {
F.v4530 = yr1888_NewNode(v642, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4530))).f_name = yr1965_Ident();
yr1959_Expect(v579);
((*(yR99 *)rt_nil_check(F.v4530))).f_b = yr2079_ParseConcrete1();
} else {
F.v4530 = yr1888_NewNode(v645, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4530))).f_name = yr1965_Ident();
yr1959_Expect(v579);
((*(yR99 *)rt_nil_check(F.v4530))).f_b = yr2059_ParseRep();
}
{ void * rv4531 = F.v4530;
return rv4531; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2024_Continues(rt_int a_p2025) {
struct yf2026 F;
memset((void *)&F, 0, sizeof F);
F.p2025 = a_p2025;
if ((!((yr1931_Is(v603) && yr1937_IsIdAt(INT64_C(1)))))) {
{ rt_int rv4536 = 0;
return rv4536; }
}
if (yr1982_IsLabel(rt_range(((rt_int *)(v1203).p)[y_ix1(v1203, rt_add(v1243, INT64_C(1)))], INT64_C(0), INT64_C(4000000)))) {
{ rt_int rv4540 = 0;
return rv4540; }
}
if ((((F.p2025 == v264)) || ((F.p2025 == v477)))) {
{ rt_int rv4544 = ((yr1924_IsAt(INT64_C(2), v600) || yr1924_IsAt(INT64_C(2), v606)) || yr1924_IsAt(INT64_C(2), v243));
return rv4544; }
}
{ rt_int rv4546 = yr1924_IsAt(INT64_C(2), v579);
return rv4546; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2030_ParseDeclGroup(void * * a_p2031, void * * a_p2032) {
struct yf2033 F;
memset((void *)&F, 0, sizeof F);
F.p2031 = a_p2031;
F.p2032 = a_p2032;
F.v4551 = yr1914_TV();
if ((((((F.v4551 == v264)) || ((F.v4551 == v477))) || ((F.v4551 == v471))) || ((F.v4551 == v432)))) {
yr1943_Skip();
yr1895_Link(&(*F.p2031), &(*F.p2032), yr2018_SimpleEntry(F.v4551));
while (yr2024_Continues(F.v4551)) {
yr1943_Skip();
yr1895_Link(&(*F.p2031), &(*F.p2032), yr2018_SimpleEntry(F.v4551));
}
return;
}
if ((F.v4551 == v366)) {
F.v4553 = yr1888_NewNode(v639, yr1919_TLn());
yr1943_Skip();
F.v4557 = ((void *)0);
for (;;) {
F.v4555 = yr1888_NewNode(v663, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4555))).f_name = yr1965_Ident();
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4553))).f_a, &F.v4557, F.v4555);
if ((!yr1948_Accept(v600))) {
goto yl_4558;
}
}
yl_4558: ;
F.v4555 = ((*(yR99 *)rt_nil_check(F.v4553))).f_a;
while ((!(F.v4555 == ((void *)0)))) {
((*(yR99 *)rt_nil_check(F.v4553))).f_b = yr1888_NewNode(v663, ((*(yR99 *)rt_nil_check(F.v4555))).f_line);
((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v4553))).f_b))).f_name = ((*(yR99 *)rt_nil_check(F.v4555))).f_name;
((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v4553))).f_b))).f_next = v1246;
v1246 = ((*(yR99 *)rt_nil_check(F.v4553))).f_b;
F.v4555 = ((*(yR99 *)rt_nil_check(F.v4555))).f_next;
}
((*(yR99 *)rt_nil_check(F.v4553))).f_b = ((void *)0);
yr1895_Link(&(*F.p2031), &(*F.p2032), F.v4553);
return;
}
yr1895_Link(&(*F.p2031), &(*F.p2032), yr2037_ParseDecl());
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2037_ParseDecl(void) {
struct yf2038 F;
memset((void *)&F, 0, sizeof F);
F.v4567 = yr1914_TV();
F.v4569 = yr1919_TLn();
if ((((F.v4567 == v342)) || ((F.v4567 == v414)))) {
F.v4561 = yr1888_NewNode(v648, F.v4569);
yr1943_Skip();
if ((F.v4567 == v342)) {
((*(yR99 *)rt_nil_check(F.v4561))).f_flag = INT64_C(1);
}
if ((yr1931_Is(v333) || yr1931_Is(v429))) {
((*(yR99 *)rt_nil_check(F.v4561))).f_ival = yr1914_TV();
yr1943_Skip();
}
((*(yR99 *)rt_nil_check(F.v4561))).f_name = yr1977_ExtendedId();
yr2042_ParseFormals(F.v4561);
if (yr1948_Accept(v357)) {
((*(yR99 *)rt_nil_check(F.v4561))).f_e = yr1888_NewNode(v663, F.v4569);
}
((*(yR99 *)rt_nil_check(F.v4561))).f_c = yr2003_ParseBlock();
if ((F.v4567 == v342)) {
yr1959_Expect(v291);
} else {
yr1959_Expect(v306);
}
yr1970_CloseName(((*(yR99 *)rt_nil_check(F.v4561))).f_name, F.v4569);
{ void * rv4573 = F.v4561;
return rv4573; }
}
if ((((F.v4567 == v375)) || ((F.v4567 == v378)))) {
{ void * rv4574 = yr1993_ParseModule();
return rv4574; }
}
if ((F.v4567 == v459)) {
F.v4561 = yr1888_NewNode(v654, F.v4569);
yr1943_Skip();
((*(yR99 *)rt_nil_check(F.v4561))).f_name = yr1965_Ident();
yr1959_Expect(v588);
F.v4565 = ((void *)0);
for (;;) {
F.v4563 = yr1888_NewNode(v663, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4563))).f_name = yr1965_Ident();
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4561))).f_a, &F.v4565, F.v4563);
if ((!yr1948_Accept(v600))) {
goto yl_4575;
}
}
yl_4575: ;
yr1959_Expect(v591);
F.v4571 = v1243;
((*(yR99 *)rt_nil_check(F.v4561))).f_b = yr1993_ParseModule();
((*(yR99 *)rt_nil_check(F.v4561))).f_ival = F.v4571;
((*(yR99 *)rt_nil_check(F.v4561))).f_flag = v1243;
yr1959_Expect(v318);
yr1970_CloseName(((*(yR99 *)rt_nil_check(F.v4561))).f_name, F.v4569);
{ void * rv4576 = F.v4561;
return rv4576; }
}
if ((F.v4567 == v360)) {
F.v4561 = yr1888_NewNode(v657, F.v4569);
yr1943_Skip();
((*(yR99 *)rt_nil_check(F.v4561))).f_name = yr1965_Ident();
yr1959_Expect(v588);
F.v4565 = ((void *)0);
for (;;) {
F.v4563 = yr1888_NewNode(v663, yr1919_TLn());
if ((yr1909_TK() == v210)) {
((*(yR99 *)rt_nil_check(F.v4563))).f_flag = INT64_C(1);
((*(yR99 *)rt_nil_check(F.v4563))).f_ival = yr1914_TV();
yr1943_Skip();
} else {
((*(yR99 *)rt_nil_check(F.v4563))).f_name = yr1977_ExtendedId();
}
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4561))).f_a, &F.v4565, F.v4563);
if ((!yr1948_Accept(v600))) {
goto yl_4577;
}
}
yl_4577: ;
yr1959_Expect(v591);
{ void * rv4579 = F.v4561;
return rv4579; }
}
if ((F.v4567 == v417)) {
F.v4561 = yr1888_NewNode(v660, F.v4569);
yr1943_Skip();
((*(yR99 *)rt_nil_check(F.v4561))).f_name = yr1965_Ident();
yr2042_ParseFormals(F.v4561);
if ((!(((*(yR99 *)rt_nil_check(F.v4561))).f_b == ((void *)0)))) {
yr1172_FailS(F.v4569, y_str("a process returns no value", 26));
}
if (yr1948_Accept(v411)) {
((*(yR99 *)rt_nil_check(F.v4561))).f_d = yr2156_ParseExpr();
}
if (yr1948_Accept(v363)) {
((*(yR99 *)rt_nil_check(F.v4561))).f_e = yr2156_ParseExpr();
}
if (yr1948_Accept(v453)) {
F.v4563 = yr2156_ParseExpr();
}
((*(yR99 *)rt_nil_check(F.v4561))).f_c = yr2003_ParseBlock();
yr1959_Expect(v309);
yr1970_CloseName(((*(yR99 *)rt_nil_check(F.v4561))).f_name, F.v4569);
{ void * rv4581 = F.v4561;
return rv4581; }
}
yr1172_FailS(F.v4569, y_str("expected a declaration", 22));
{ void * rv4583 = ((void *)0);
return rv4583; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2042_ParseFormals(void * a_p2043) {
struct yf2044 F;
memset((void *)&F, 0, sizeof F);
F.p2043 = a_p2043;
F.v4587 = ((void *)0);
F.v4589 = ((void *)0);
if (yr1948_Accept(v438)) {
((*(yR99 *)rt_nil_check(F.p2043))).f_b = yr2059_ParseRep();
}
yr1959_Expect(v588);
while ((!yr1931_Is(v591))) {
if (yr1948_Accept(v264)) {
F.v4591 = v891;
} else if (yr1948_Accept(v399)) {
F.v4591 = v894;
} else if (yr1948_Accept(v477)) {
F.v4591 = v897;
} else {
yr1172_FailS(yr1919_TLn(), y_str("a formal parameter is CONST, OUT or VAR", 39));
}
for (;;) {
F.v4587 = yr1888_NewNode(v651, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4587))).f_ival = F.v4591;
((*(yR99 *)rt_nil_check(F.v4587))).f_a = yr2013_ParseNames();
yr1959_Expect(v606);
((*(yR99 *)rt_nil_check(F.v4587))).f_b = yr2048_ParseFormalRep();
yr1895_Link(&((*(yR99 *)rt_nil_check(F.p2043))).f_a, &F.v4589, F.v4587);
if ((!((((yr1931_Is(v603) || yr1931_Is(v600))) && yr1937_IsIdAt(INT64_C(1)))))) {
goto yl_4593;
}
yr1943_Skip();
}
yl_4593: ;
if ((!yr1948_Accept(v603))) {
if ((!yr1948_Accept(v600))) {
yr1959_Expect(v591);
return;
}
}
}
yr1959_Expect(v591);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2048_ParseFormalRep(void) {
struct yf2049 F;
memset((void *)&F, 0, sizeof F);
if (((yr1931_Is(v234) && yr1924_IsAt(INT64_C(1), v588)) && ((yr1924_IsAt(INT64_C(3), v267) || ((yr1937_IsIdAt(INT64_C(3)) && ((((rt_int *)(v1203).p)[y_ix1(v1203, rt_add(v1243, INT64_C(3)))] == v1251)))))))) {
F.v4597 = yr1888_NewNode(v690, yr1919_TLn());
yr1943_Skip();
yr1943_Skip();
((*(yR99 *)rt_nil_check(F.v4597))).f_a = yr2156_ParseExpr();
yr1943_Skip();
yr1959_Expect(v387);
((*(yR99 *)rt_nil_check(F.v4597))).f_b = yr2059_ParseRep();
yr1959_Expect(v591);
{ void * rv4603 = F.v4597;
return rv4603; }
}
if (yr1931_Is(v456)) {
F.v4597 = yr1888_NewNode(v693, yr1919_TLn());
yr1943_Skip();
{ void * rv4604 = F.v4597;
return rv4604; }
}
{ void * rv4605 = yr2059_ParseRep();
return rv4605; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2053_IsStructWord(rt_int a_p2054) {
struct yf2055 F;
memset((void *)&F, 0, sizeof F);
F.p2054 = a_p2054;
F.v4609 = ((rt_int *)(v1203).p)[y_ix1(v1203, rt_add(v1243, F.p2054))];
if ((!(((rt_int *)(v1201).p)[y_ix1(v1201, rt_add(v1243, F.p2054))] == v204))) {
{ rt_int rv4613 = 0;
return rv4613; }
}
{ rt_int rv4614 = (((((((((F.v4609 == v474)) || ((F.v4609 == v396))) || ((F.v4609 == v228))) || ((F.v4609 == v234))) || ((F.v4609 == v426))) || ((F.v4609 == v336))) || ((F.v4609 == v405))) || ((F.v4609 == v447)));
return rv4614; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2059_ParseRep(void) {
struct yf2060 F;
memset((void *)&F, 0, sizeof F);
if ((yr1937_IsIdAt(INT64_C(0)) && ((yr2053_IsStructWord(INT64_C(1)) || ((yr1937_IsIdAt(INT64_C(1)) && yr1924_IsAt(INT64_C(2), v594))))))) {
F.v4617 = yr1965_Ident();
F.v4619 = yr2064_ParseConcrete();
((*(yR99 *)rt_nil_check(F.v4619))).f_text = F.v4617;
{ void * rv4624 = F.v4619;
return rv4624; }
}
{ void * rv4625 = yr2064_ParseConcrete();
return rv4625; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2064_ParseConcrete(void) {
struct yf2065 F;
memset((void *)&F, 0, sizeof F);
F.v4628 = yr2079_ParseConcrete1();
if (yr1948_Accept(v402)) {
if (((((yr1909_TK() == v210)) || ((yr1909_TK() == v201))) || yr1931_Is(v588))) {
F.v4630 = yr2161_ParseSimple();
}
}
if (yr1948_Accept(v225)) {
F.v4630 = yr2161_ParseSimple();
}
{ void * rv4631 = F.v4628;
return rv4631; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2069_ParseIds(void) {
struct yf2070 F;
memset((void *)&F, 0, sizeof F);
F.v4634 = ((void *)0);
F.v4636 = ((void *)0);
F.v4638 = ((void *)0);
for (;;) {
F.v4638 = yr1888_NewNode(v663, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4638))).f_name = yr1965_Ident();
yr1895_Link(&F.v4634, &F.v4636, F.v4638);
if ((!yr1948_Accept(v600))) {
goto yl_4639;
}
}
yl_4639: ;
{ void * rv4640 = F.v4634;
return rv4640; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2074_ParseFieldGroups(void) {
struct yf2075 F;
memset((void *)&F, 0, sizeof F);
F.v4643 = ((void *)0);
F.v4645 = ((void *)0);
F.v4647 = ((void *)0);
while ((yr1931_Is(v264) || yr1931_Is(v477))) {
F.v4649 = yr1914_TV();
yr1943_Skip();
for (;;) {
F.v4647 = yr1888_NewNode(v699, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4647))).f_ival = F.v4649;
((*(yR99 *)rt_nil_check(F.v4647))).f_a = yr2013_ParseNames();
yr1959_Expect(v606);
((*(yR99 *)rt_nil_check(F.v4647))).f_b = yr2059_ParseRep();
yr1895_Link(&F.v4643, &F.v4645, F.v4647);
if ((!((yr1931_Is(v603) && yr1937_IsIdAt(INT64_C(1)))))) {
goto yl_4650;
}
yr1943_Skip();
}
yl_4650: ;
if ((!yr1948_Accept(v603))) {
{ void * rv4652 = F.v4643;
return rv4652; }
}
}
{ void * rv4653 = F.v4643;
return rv4653; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2079_ParseConcrete1(void) {
struct yf2080 F;
memset((void *)&F, 0, sizeof F);
F.v4670 = yr1919_TLn();
if ((yr1909_TK() == v201)) {
F.v4656 = yr1888_NewNode(v666, F.v4670);
((*(yR99 *)rt_nil_check(F.v4656))).f_name = yr1965_Ident();
((*(yR99 *)rt_nil_check(F.v4656))).f_a = yr2084_ParseQualifier();
{ void * rv4671 = F.v4656;
return rv4671; }
}
if ((!(yr1909_TK() == v204))) {
yr1172_FailS(F.v4670, y_str("expected a representation", 25));
}
F.v4668 = yr1914_TV();
if ((((F.v4668 == v474)) || ((F.v4668 == v396)))) {
F.v4656 = yr1888_NewNode(v669, F.v4670);
if ((F.v4668 == v396)) {
((*(yR99 *)rt_nil_check(F.v4656))).f_flag = INT64_C(1);
}
yr1943_Skip();
yr1959_Expect(v588);
((*(yR99 *)rt_nil_check(F.v4656))).f_a = yr2069_ParseIds();
yr1959_Expect(v591);
((*(yR99 *)rt_nil_check(F.v4656))).f_b = yr2084_ParseQualifier();
{ void * rv4674 = F.v4656;
return rv4674; }
}
if ((F.v4668 == v228)) {
F.v4656 = yr1888_NewNode(v672, F.v4670);
yr1943_Skip();
yr1959_Expect(v588);
F.v4666 = ((void *)0);
for (;;) {
if ((!(yr1909_TK() == v219))) {
yr1172_FailS(yr1919_TLn(), y_str("an ALPHABET lists character literals", 36));
}
F.v4664 = yr1888_NewNode(v762, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4664))).f_text = rt_range(yr1914_TV(), INT64_C(0), INT64_C(4000000));
yr1943_Skip();
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4656))).f_a, &F.v4666, F.v4664);
if ((!yr1948_Accept(v600))) {
goto yl_4675;
}
}
yl_4675: ;
yr1959_Expect(v591);
((*(yR99 *)rt_nil_check(F.v4656))).f_b = yr2084_ParseQualifier();
{ void * rv4677 = F.v4656;
return rv4677; }
}
if ((F.v4668 == v234)) {
F.v4656 = yr1888_NewNode(v675, F.v4670);
yr1943_Skip();
yr1959_Expect(v588);
F.v4666 = ((void *)0);
for (;;) {
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4656))).f_a, &F.v4666, yr2059_ParseRep());
if ((!yr1948_Accept(v600))) {
goto yl_4678;
}
}
yl_4678: ;
yr1959_Expect(v387);
((*(yR99 *)rt_nil_check(F.v4656))).f_b = yr2059_ParseRep();
yr1959_Expect(v591);
{ void * rv4679 = F.v4656;
return rv4679; }
}
if ((F.v4668 == v426)) {
F.v4656 = yr1888_NewNode(v678, F.v4670);
yr1943_Skip();
((*(yR99 *)rt_nil_check(F.v4656))).f_a = yr2074_ParseFieldGroups();
if (yr1948_Accept(v444)) {
F.v4658 = yr1888_NewNode(v702, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4658))).f_name = yr1965_Ident();
yr1959_Expect(v606);
((*(yR99 *)rt_nil_check(F.v4658))).f_b = yr2059_ParseRep();
F.v4662 = ((void *)0);
while (yr1948_Accept(v261)) {
F.v4660 = yr1888_NewNode(v705, yr1919_TLn());
F.v4666 = ((void *)0);
for (;;) {
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4660))).f_a, &F.v4666, yr2156_ParseExpr());
if ((!yr1948_Accept(v600))) {
goto yl_4680;
}
}
yl_4680: ;
yr1959_Expect(v528);
((*(yR99 *)rt_nil_check(F.v4660))).f_b = yr2074_ParseFieldGroups();
while (yr1948_Accept(v603)) {
}
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4658))).f_a, &F.v4662, F.v4660);
}
yr1959_Expect(v315);
if (yr1948_Accept(v603)) {
}
((*(yR99 *)rt_nil_check(F.v4656))).f_b = F.v4658;
}
yr1959_Expect(v312);
{ void * rv4681 = F.v4656;
return rv4681; }
}
if (((((F.v4668 == v336)) || ((F.v4668 == v405))) || ((F.v4668 == v447)))) {
if ((F.v4668 == v336)) {
F.v4656 = yr1888_NewNode(v681, F.v4670);
} else if ((F.v4668 == v405)) {
F.v4656 = yr1888_NewNode(v684, F.v4670);
} else {
F.v4656 = yr1888_NewNode(v687, F.v4670);
}
yr1943_Skip();
yr1959_Expect(v588);
((*(yR99 *)rt_nil_check(F.v4656))).f_a = yr2059_ParseRep();
yr1959_Expect(v591);
{ void * rv4682 = F.v4656;
return rv4682; }
}
yr1172_FailS(F.v4670, y_str("expected a representation", 25));
{ void * rv4684 = ((void *)0);
return rv4684; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2084_ParseQualifier(void) {
struct yf2085 F;
memset((void *)&F, 0, sizeof F);
if ((!yr1931_Is(v594))) {
{ void * rv4688 = ((void *)0);
return rv4688; }
}
F.v4687 = yr1888_NewNode(v696, yr1919_TLn());
yr1943_Skip();
((*(yR99 *)rt_nil_check(F.v4687))).f_a = yr2156_ParseExpr();
yr1959_Expect(v531);
((*(yR99 *)rt_nil_check(F.v4687))).f_b = yr2156_ParseExpr();
yr1959_Expect(v597);
if (yr1948_Accept(v441)) {
((*(yR99 *)rt_nil_check(F.v4687))).f_c = yr2161_ParseSimple();
} else if (yr1948_Accept(v408)) {
((*(yR99 *)rt_nil_check(F.v4687))).f_d = yr2161_ParseSimple();
}
{ void * rv4689 = F.v4687;
return rv4689; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2089_IsStop(void) {
struct yf2090 F;
memset((void *)&F, 0, sizeof F);
if ((yr1909_TK() == v198)) {
{ rt_int rv4694 = 1;
return rv4694; }
}
if ((!(yr1909_TK() == v204))) {
{ rt_int rv4696 = 0;
return rv4696; }
}
F.v4692 = yr1914_TV();
{ rt_int rv4697 = ((((((((((((((((F.v4692 == v279)) || ((F.v4692 == v276))) || ((F.v4692 == v294))) || ((F.v4692 == v261))) || ((F.v4692 == v315))) || ((F.v4692 == v321))) || ((F.v4692 == v288))) || ((F.v4692 == v297))) || ((F.v4692 == v282))) || ((F.v4692 == v285))) || ((F.v4692 == v306))) || ((F.v4692 == v291))) || ((F.v4692 == v309))) || ((F.v4692 == v300))) || ((F.v4692 == v303)));
return rv4697; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2094_ParseStatements(rt_int a_p2095) {
struct yf2096 F;
memset((void *)&F, 0, sizeof F);
F.p2095 = a_p2095;
F.v4701 = ((void *)0);
F.v4703 = ((void *)0);
F.v4705 = ((void *)0);
for (;;) {
while (yr1948_Accept(v603)) {
}
if (yr2089_IsStop()) {
goto yl_4708;
}
F.v4707 = INT64_C(0);
if (((F.p2095 && yr1937_IsIdAt(INT64_C(0))) && yr1924_IsAt(INT64_C(1), v606))) {
F.v4707 = yr1965_Ident();
yr1943_Skip();
}
F.v4705 = yr2100_ParseStatement();
((*(yR99 *)rt_nil_check(F.v4705))).f_text = F.v4707;
yr1895_Link(&F.v4701, &F.v4703, F.v4705);
if ((!yr1931_Is(v603))) {
goto yl_4708;
}
}
yl_4708: ;
{ void * rv4712 = F.v4701;
return rv4712; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2100_ParseStatement(void) {
struct yf2101 F;
memset((void *)&F, 0, sizeof F);
F.v4729 = yr1919_TLn();
if ((yr1909_TK() == v204)) {
F.v4727 = yr1914_TV();
if ((F.v4727 == v240)) {
yr1943_Skip();
F.v4715 = yr1888_NewNode(v714, F.v4729);
((*(yR99 *)rt_nil_check(F.v4715))).f_a = yr2156_ParseExpr();
{ void * rv4730 = F.v4715;
return rv4730; }
}
if ((F.v4727 == v345)) {
yr1943_Skip();
F.v4715 = yr1888_NewNode(v717, F.v4729);
((*(yR99 *)rt_nil_check(F.v4715))).f_name = yr1965_Ident();
{ void * rv4731 = F.v4715;
return rv4731; }
}
if ((F.v4727 == v327)) {
yr1943_Skip();
F.v4715 = yr1888_NewNode(v720, F.v4729);
((*(yR99 *)rt_nil_check(F.v4715))).f_name = yr1965_Ident();
{ void * rv4732 = F.v4715;
return rv4732; }
}
if ((F.v4727 == v435)) {
yr1943_Skip();
F.v4715 = yr1888_NewNode(v723, F.v4729);
if ((!((yr1931_Is(v603) || yr2089_IsStop())))) {
((*(yR99 *)rt_nil_check(F.v4715))).f_a = yr2156_ParseExpr();
}
{ void * rv4733 = F.v4715;
return rv4733; }
}
if ((F.v4727 == v462)) {
yr1943_Skip();
{ void * rv4734 = yr1888_NewNode(v726, F.v4729);
return rv4734; }
}
if ((F.v4727 == v420)) {
yr1943_Skip();
F.v4715 = yr1888_NewNode(v729, F.v4729);
if (yr1937_IsIdAt(INT64_C(0))) {
((*(yR99 *)rt_nil_check(F.v4715))).f_name = yr1965_Ident();
}
{ void * rv4736 = F.v4715;
return rv4736; }
}
if ((F.v4727 == v348)) {
yr1943_Skip();
F.v4715 = yr1888_NewNode(v732, F.v4729);
F.v4719 = ((void *)0);
F.v4717 = yr1888_NewNode(v750, F.v4729);
((*(yR99 *)rt_nil_check(F.v4717))).f_a = yr2156_ParseExpr();
yr1959_Expect(v465);
((*(yR99 *)rt_nil_check(F.v4717))).f_b = yr2094_ParseStatements(0);
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4715))).f_a, &F.v4719, F.v4717);
while (yr1931_Is(v279)) {
F.v4717 = yr1888_NewNode(v750, yr1919_TLn());
yr1943_Skip();
((*(yR99 *)rt_nil_check(F.v4717))).f_a = yr2156_ParseExpr();
yr1959_Expect(v465);
((*(yR99 *)rt_nil_check(F.v4717))).f_b = yr2094_ParseStatements(0);
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4715))).f_a, &F.v4719, F.v4717);
}
if (yr1948_Accept(v276)) {
((*(yR99 *)rt_nil_check(F.v4715))).f_flag = INT64_C(1);
((*(yR99 *)rt_nil_check(F.v4715))).f_b = yr2094_ParseStatements(0);
}
yr1959_Expect(v294);
{ void * rv4741 = F.v4715;
return rv4741; }
}
if ((F.v4727 == v444)) {
yr1943_Skip();
F.v4715 = yr1888_NewNode(v735, F.v4729);
((*(yR99 *)rt_nil_check(F.v4715))).f_a = yr2156_ParseExpr();
F.v4719 = ((void *)0);
while (yr1931_Is(v261)) {
F.v4717 = yr1888_NewNode(v750, yr1919_TLn());
yr1943_Skip();
F.v4723 = ((void *)0);
for (;;) {
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4717))).f_a, &F.v4723, yr2156_ParseExpr());
if ((!yr1948_Accept(v600))) {
goto yl_4742;
}
}
yl_4742: ;
yr1959_Expect(v528);
((*(yR99 *)rt_nil_check(F.v4717))).f_b = yr2094_ParseStatements(0);
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4715))).f_b, &F.v4719, F.v4717);
}
if (yr1948_Accept(v276)) {
((*(yR99 *)rt_nil_check(F.v4715))).f_flag = INT64_C(1);
((*(yR99 *)rt_nil_check(F.v4715))).f_c = yr2094_ParseStatements(0);
}
yr1959_Expect(v315);
{ void * rv4746 = F.v4715;
return rv4746; }
}
if ((F.v4727 == v480)) {
yr1943_Skip();
F.v4715 = yr1888_NewNode(v738, F.v4729);
((*(yR99 *)rt_nil_check(F.v4715))).f_a = yr2156_ParseExpr();
yr1959_Expect(v273);
((*(yR99 *)rt_nil_check(F.v4715))).f_b = yr2094_ParseStatements(0);
yr1959_Expect(v321);
{ void * rv4748 = F.v4715;
return rv4748; }
}
if ((F.v4727 == v339)) {
yr1943_Skip();
F.v4715 = yr1888_NewNode(v741, F.v4729);
((*(yR99 *)rt_nil_check(F.v4715))).f_name = yr1965_Ident();
yr1959_Expect(v606);
((*(yR99 *)rt_nil_check(F.v4715))).f_a = yr2059_ParseRep();
yr1959_Expect(v273);
((*(yR99 *)rt_nil_check(F.v4715))).f_b = yr2094_ParseStatements(0);
yr1959_Expect(v288);
{ void * rv4750 = F.v4715;
return rv4750; }
}
if ((F.v4727 == v369)) {
yr1943_Skip();
F.v4715 = yr1888_NewNode(v744, F.v4729);
((*(yR99 *)rt_nil_check(F.v4715))).f_name = yr1965_Ident();
((*(yR99 *)rt_nil_check(F.v4715))).f_b = yr2094_ParseStatements(0);
yr1959_Expect(v297);
yr1970_CloseName(((*(yR99 *)rt_nil_check(F.v4715))).f_name, F.v4729);
{ void * rv4752 = F.v4715;
return rv4752; }
}
if ((((F.v4727 == v258)) || ((F.v4727 == v450)))) {
F.v4715 = yr1888_NewNode(v747, F.v4729);
if (yr1948_Accept(v450)) {
((*(yR99 *)rt_nil_check(F.v4715))).f_flag = INT64_C(1);
}
yr1959_Expect(v258);
((*(yR99 *)rt_nil_check(F.v4715))).f_a = yr2003_ParseBlock();
yr1959_Expect(v282);
{ void * rv4754 = F.v4715;
return rv4754; }
}
}
F.v4725 = yr2187_ParseDesignator();
if (yr1948_Accept(v525)) {
F.v4715 = yr1888_NewNode(v708, F.v4729);
((*(yR99 *)rt_nil_check(F.v4715))).f_a = F.v4725;
((*(yR99 *)rt_nil_check(F.v4715))).f_b = yr2156_ParseExpr();
{ void * rv4755 = F.v4715;
return rv4755; }
}
if ((!(((*(yR99 *)rt_nil_check(F.v4725))).f_kind == v774))) {
yr1172_FailS(F.v4729, y_str("expected a statement", 20));
}
F.v4715 = yr1888_NewNode(v711, F.v4729);
((*(yR99 *)rt_nil_check(F.v4715))).f_a = F.v4725;
{ void * rv4757 = F.v4715;
return rv4757; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2105_OpAt(void) {
struct yf2106 F;
memset((void *)&F, 0, sizeof F);
if ((((yr1909_TK() == v207)) || ((yr1909_TK() == v204)))) {
{ rt_int rv4759 = rt_range(yr1914_TV(), INT64_C(0), INT64_C(4000000));
return rv4759; }
}
{ rt_int rv4761 = INT64_C(0);
return rv4761; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2110_IsRel(rt_int a_p2111) {
struct yf2112 F;
memset((void *)&F, 0, sizeof F);
F.p2111 = a_p2111;
{ rt_int rv4764 = ((((((((((((((((((((F.p2111 == v354)) || ((F.p2111 == v564))) || ((F.p2111 == v579))) || ((F.p2111 == v582))) || ((F.p2111 == v534))) || ((F.p2111 == v585))) || ((F.p2111 == v537))) || ((F.p2111 == v540))) || ((F.p2111 == v495))) || ((F.p2111 == v543))) || ((F.p2111 == v498))) || ((F.p2111 == v546))) || ((F.p2111 == v507))) || ((F.p2111 == v501))) || ((F.p2111 == v489))) || ((F.p2111 == v549))) || ((F.p2111 == v510))) || ((F.p2111 == v504))) || ((F.p2111 == v492)));
return rv4764; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2116_IsAssocMul(rt_int a_p2117) {
struct yf2118 F;
memset((void *)&F, 0, sizeof F);
F.p2117 = a_p2117;
{ rt_int rv4767 = (((F.p2117 == v573)) || ((F.p2117 == v231)));
return rv4767; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2122_IsNonAssocMul(rt_int a_p2123) {
struct yf2124 F;
memset((void *)&F, 0, sizeof F);
F.p2123 = a_p2123;
{ rt_int rv4770 = ((((((((F.p2123 == v576)) || ((F.p2123 == v270))) || ((F.p2123 == v372))) || ((F.p2123 == v552))) || ((F.p2123 == v513))) || ((F.p2123 == v555))) || ((F.p2123 == v516)));
return rv4770; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2128_IsAssocAdd(rt_int a_p2129) {
struct yf2130 F;
memset((void *)&F, 0, sizeof F);
F.p2129 = a_p2129;
{ rt_int rv4773 = (((F.p2129 == v567)) || ((F.p2129 == v393)));
return rv4773; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2134_IsNonAssocAdd(rt_int a_p2135) {
struct yf2136 F;
memset((void *)&F, 0, sizeof F);
F.p2135 = a_p2135;
{ rt_int rv4776 = (((((((F.p2135 == v570)) || ((F.p2135 == v483))) || ((F.p2135 == v558))) || ((F.p2135 == v519))) || ((F.p2135 == v561))) || ((F.p2135 == v522)));
return rv4776; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2140_Bin(rt_int a_p2141, void * a_p2142, void * a_p2143, rt_int a_p2144) {
struct yf2145 F;
memset((void *)&F, 0, sizeof F);
F.p2141 = a_p2141;
F.p2142 = a_p2142;
F.p2143 = a_p2143;
F.p2144 = a_p2144;
F.v4783 = yr1888_NewNode(v792, F.p2144);
((*(yR99 *)rt_nil_check(F.v4783))).f_name = F.p2141;
((*(yR99 *)rt_nil_check(F.v4783))).f_a = F.p2142;
((*(yR99 *)rt_nil_check(F.v4783))).f_b = F.p2143;
{ void * rv4784 = F.v4783;
return rv4784; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2149_NeedParens(rt_int a_p2150, rt_int a_p2151) {
struct yf2152 F;
memset((void *)&F, 0, sizeof F);
F.p2150 = a_p2150;
F.p2151 = a_p2151;
yr1020_SB();
yr1038_ST(F.p2150);
yr1031_SA(y_str(" next to another operator of its level needs parentheses (VIII.A)", 65));
F.v4789 = yr1050_SE();
yr1151_Fail(F.p2151, F.v4789);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2156_ParseExpr(void) {
struct yf2157 F;
memset((void *)&F, 0, sizeof F);
F.v4797 = yr1919_TLn();
F.v4793 = yr2161_ParseSimple();
F.v4795 = yr2105_OpAt();
if (yr2110_IsRel(F.v4795)) {
yr1943_Skip();
F.v4793 = yr2140_Bin(F.v4795, F.v4793, yr2161_ParseSimple(), F.v4797);
if (yr2110_IsRel(yr2105_OpAt())) {
yr2149_NeedParens(F.v4795, F.v4797);
}
}
{ void * rv4798 = F.v4793;
return rv4798; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2161_ParseSimple(void) {
struct yf2162 F;
memset((void *)&F, 0, sizeof F);
F.v4807 = yr1919_TLn();
if (yr1931_Is(v570)) {
yr1943_Skip();
F.v4803 = yr1888_NewNode(v789, F.v4807);
((*(yR99 *)rt_nil_check(F.v4803))).f_a = yr2166_ParseTerm();
F.v4805 = yr2105_OpAt();
if ((yr2128_IsAssocAdd(F.v4805) || yr2134_IsNonAssocAdd(F.v4805))) {
yr2149_NeedParens(rt_range(v570, INT64_C(0), INT64_C(4000000)), F.v4807);
}
{ void * rv4808 = F.v4803;
return rv4808; }
}
F.v4801 = yr2166_ParseTerm();
F.v4805 = yr2105_OpAt();
if (yr2134_IsNonAssocAdd(F.v4805)) {
yr1943_Skip();
F.v4801 = yr2140_Bin(F.v4805, F.v4801, yr2166_ParseTerm(), F.v4807);
if ((yr2128_IsAssocAdd(yr2105_OpAt()) || yr2134_IsNonAssocAdd(yr2105_OpAt()))) {
yr2149_NeedParens(F.v4805, F.v4807);
}
{ void * rv4809 = F.v4801;
return rv4809; }
}
while (yr2128_IsAssocAdd(F.v4805)) {
yr1943_Skip();
F.v4801 = yr2140_Bin(F.v4805, F.v4801, yr2166_ParseTerm(), F.v4807);
if (yr2134_IsNonAssocAdd(yr2105_OpAt())) {
yr2149_NeedParens(yr2105_OpAt(), F.v4807);
}
F.v4805 = yr2105_OpAt();
}
{ void * rv4810 = F.v4801;
return rv4810; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2166_ParseTerm(void) {
struct yf2167 F;
memset((void *)&F, 0, sizeof F);
F.v4817 = yr1919_TLn();
F.v4813 = yr2182_ParseFactor();
F.v4815 = yr2105_OpAt();
if (yr2122_IsNonAssocMul(F.v4815)) {
yr1943_Skip();
F.v4813 = yr2140_Bin(F.v4815, F.v4813, yr2182_ParseFactor(), F.v4817);
if ((yr2116_IsAssocMul(yr2105_OpAt()) || yr2122_IsNonAssocMul(yr2105_OpAt()))) {
yr2149_NeedParens(F.v4815, F.v4817);
}
{ void * rv4818 = F.v4813;
return rv4818; }
}
while (yr2116_IsAssocMul(F.v4815)) {
yr1943_Skip();
F.v4813 = yr2140_Bin(F.v4815, F.v4813, yr2182_ParseFactor(), F.v4817);
if (yr2122_IsNonAssocMul(yr2105_OpAt())) {
yr2149_NeedParens(yr2105_OpAt(), F.v4817);
}
F.v4815 = yr2105_OpAt();
}
{ void * rv4819 = F.v4813;
return rv4819; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2171_IsLiteralAt(rt_int a_p2172) {
struct yf2173 F;
memset((void *)&F, 0, sizeof F);
F.p2172 = a_p2172;
F.v4823 = ((rt_int *)(v1201).p)[y_ix1(v1201, rt_add(v1243, F.p2172))];
{ rt_int rv4825 = (((((((F.v4823 == v210)) || ((F.v4823 == v213))) || ((F.v4823 == v216))) || ((F.v4823 == v219))) || ((F.v4823 == v222))) || yr1924_IsAt(F.p2172, v381));
return rv4825; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2177_ParseLiteral(void) {
struct yf2178 F;
memset((void *)&F, 0, sizeof F);
F.v4830 = yr1909_TK();
F.v4832 = yr1919_TLn();
if ((F.v4830 == v210)) {
F.v4828 = yr1888_NewNode(v753, F.v4832);
((*(yR99 *)rt_nil_check(F.v4828))).f_ival = yr1914_TV();
} else if ((F.v4830 == v213)) {
F.v4828 = yr1888_NewNode(v756, F.v4832);
((*(yR99 *)rt_nil_check(F.v4828))).f_ival = yr1914_TV();
} else if ((F.v4830 == v216)) {
F.v4828 = yr1888_NewNode(v759, F.v4832);
((*(yR99 *)rt_nil_check(F.v4828))).f_text = rt_range(yr1914_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v4830 == v219)) {
F.v4828 = yr1888_NewNode(v762, F.v4832);
((*(yR99 *)rt_nil_check(F.v4828))).f_text = rt_range(yr1914_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v4830 == v222)) {
F.v4828 = yr1888_NewNode(v765, F.v4832);
((*(yR99 *)rt_nil_check(F.v4828))).f_text = rt_range(yr1914_TV(), INT64_C(0), INT64_C(4000000));
} else {
F.v4828 = yr1888_NewNode(v768, F.v4832);
}
yr1943_Skip();
{ void * rv4833 = F.v4828;
return rv4833; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2182_ParseFactor(void) {
struct yf2183 F;
memset((void *)&F, 0, sizeof F);
F.v4840 = yr1919_TLn();
if (yr1931_Is(v384)) {
yr1943_Skip();
F.v4836 = yr1888_NewNode(v786, F.v4840);
((*(yR99 *)rt_nil_check(F.v4836))).f_a = yr2182_ParseFactor();
{ void * rv4841 = F.v4836;
return rv4841; }
}
if (yr1931_Is(v588)) {
yr1943_Skip();
F.v4836 = yr1888_NewNode(v795, F.v4840);
((*(yR99 *)rt_nil_check(F.v4836))).f_a = yr2156_ParseExpr();
yr1959_Expect(v591);
{ void * rv4842 = F.v4836;
return rv4842; }
}
if (yr2171_IsLiteralAt(INT64_C(0))) {
{ void * rv4844 = yr2177_ParseLiteral();
return rv4844; }
}
if (yr1937_IsIdAt(INT64_C(0))) {
if ((yr2171_IsLiteralAt(INT64_C(1)) || ((yr1937_IsIdAt(INT64_C(1)) && (!((((((yr1924_IsAt(INT64_C(2), v588) || yr1924_IsAt(INT64_C(2), v594)) || yr1924_IsAt(INT64_C(2), v609)) || yr1924_IsAt(INT64_C(2), v612)) || yr1924_IsAt(INT64_C(2), v525)) || yr1924_IsAt(INT64_C(2), v606)))))))) {
F.v4838 = yr1965_Ident();
if (yr1937_IsIdAt(INT64_C(0))) {
F.v4836 = yr1888_NewNode(v771, F.v4840);
((*(yR99 *)rt_nil_check(F.v4836))).f_name = yr1965_Ident();
} else {
F.v4836 = yr2177_ParseLiteral();
}
((*(yR99 *)rt_nil_check(F.v4836))).f_d = yr1888_NewNode(v663, F.v4840);
((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v4836))).f_d))).f_name = F.v4838;
{ void * rv4855 = F.v4836;
return rv4855; }
}
{ void * rv4856 = yr2187_ParseDesignator();
return rv4856; }
}
yr1180_FailN(F.v4840, yr1954_TokText(), y_str(" cannot begin an operand", 24));
{ void * rv4858 = ((void *)0);
return rv4858; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2187_ParseDesignator(void) {
struct yf2188 F;
memset((void *)&F, 0, sizeof F);
F.v4867 = yr1919_TLn();
F.v4861 = yr1888_NewNode(v771, F.v4867);
((*(yR99 *)rt_nil_check(F.v4861))).f_name = yr1965_Ident();
if (yr1948_Accept(v588)) {
((*(yR99 *)rt_nil_check(F.v4861))).f_kind = v774;
F.v4865 = ((void *)0);
while ((!yr1931_Is(v591))) {
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4861))).f_a, &F.v4865, yr2156_ParseExpr());
if ((!yr1948_Accept(v600))) {
yr2192_EXIT_ARGS();
}
}
yr1959_Expect(v591);
}
for (;;) {
if (yr1948_Accept(v609)) {
F.v4863 = yr1888_NewNode(v777, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4863))).f_a = F.v4861;
((*(yR99 *)rt_nil_check(F.v4863))).f_name = yr1965_Ident();
F.v4861 = F.v4863;
} else if (yr1948_Accept(v594)) {
F.v4863 = yr1888_NewNode(v780, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4863))).f_a = F.v4861;
F.v4865 = ((void *)0);
for (;;) {
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4863))).f_b, &F.v4865, yr2156_ParseExpr());
if ((!yr1948_Accept(v600))) {
goto yl_4869;
}
}
yl_4869: ;
yr1959_Expect(v597);
F.v4861 = F.v4863;
} else if (yr1948_Accept(v612)) {
F.v4863 = yr1888_NewNode(v783, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4863))).f_a = F.v4861;
F.v4861 = F.v4863;
} else {
goto yl_4868;
}
}
yl_4868: ;
{ void * rv4870 = F.v4861;
return rv4870; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2192_EXIT_ARGS(void) {
struct yf2193 F;
memset((void *)&F, 0, sizeof F);
if ((!yr1931_Is(v591))) {
yr1959_Expect(v591);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2197_ParseProgram(void) {
struct yf2198 F;
memset((void *)&F, 0, sizeof F);
F.v4874 = ((void *)0);
F.v4876 = ((void *)0);
while ((!(yr1909_TK() == v198))) {
if ((!((yr1931_Is(v375) || yr1931_Is(v378))))) {
yr1172_FailS(yr1919_TLn(), y_str("a segment is a module (XIII.A)", 30));
}
yr1895_Link(&F.v4874, &F.v4876, yr1993_ParseModule());
while (yr1948_Accept(v603)) {
}
}
{ void * rv4878 = F.v4874;
return rv4878; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2202_NewSym(rt_int a_p2203, rt_int a_p2204) {
struct yf2205 F;
memset((void *)&F, 0, sizeof F);
F.p2203 = a_p2203;
F.p2204 = a_p2204;
({ F.v4883 = rt_alloc(sizeof(yR119)); });
(*(yR119 *)rt_nil_check(F.v4883)) = ((yR119){ .f_kind = F.p2203, .f_name = F.p2204, .f_rep = ((void *)0), .f_cname = INT64_C(0), .f_level = INT64_C(0), .f_byref = 0, .f_readonly = 0, .f_mval = INT64_C(0), .f_hasmv = 0, .f_params = ((void *)0), .f_nparams = INT64_C(0), .f_ret = ((void *)0), .f_func = 0, .f_decl = ((void *)0), .f_depth = INT64_C(0), .f_target = ((void *)0), .f_members = ((void *)0), .f_mnext = ((void *)0), .f_chain = ((void *)0), .f_stack = ((void *)0), .f_alt = ((void *)0), .f_monitor = ((void *)0), .f_serial = INT64_C(0), .f_calls = ((void *)0), .f_writes = ((void *)0), .f_frees = ((void *)0), .f_seen = INT64_C(0), .f_vix = INT64_C(0) });
((*(yR119 *)rt_nil_check(F.v4883))).f_serial = yr1189_NewSerial();
{ void * rv4896 = F.v4883;
return rv4896; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2209_OpenScope(rt_int a_p2210) {
struct yf2211 F;
memset((void *)&F, 0, sizeof F);
F.p2210 = a_p2210;
({ F.v4900 = rt_alloc(sizeof(yR124)); });
(*(yR124 *)rt_nil_check(F.v4900)) = ((yR124){ .f_syms = ((void *)0), .f_closed = F.p2210, .f_module = ((void *)0), .f_level = v1273, .f_deferred = ((void *)0), .f_up = ((void *)0) });
if ((v1267 >= INT64_C(0))) {
((*(yR124 *)rt_nil_check(F.v4900))).f_up = ((void * *)(v1265).p)[y_ix1(v1265, v1267)];
}
v1267 = rt_range(rt_add(v1267, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1265).p)[y_ix1(v1265, v1267)] = F.v4900;
((void * *)(v1307).p)[y_ix1(v1307, v1267)] = ((void *)0);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2215_ReopenScope(void * a_p2216) {
struct yf2217 F;
memset((void *)&F, 0, sizeof F);
F.p2216 = a_p2216;
F.v4907 = ((*(yR124 *)rt_nil_check(F.p2216))).f_syms;
F.v4909 = INT64_C(0);
v1267 = rt_range(rt_add(v1267, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1265).p)[y_ix1(v1265, v1267)] = F.p2216;
((void * *)(v1307).p)[y_ix1(v1307, v1267)] = ((void *)0);
while ((!(F.v4907 == ((void *)0)))) {
F.v4909 = rt_range(rt_add(F.v4909, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1334).p)[y_ix1(v1334, F.v4909)] = F.v4907;
F.v4907 = ((*(yR119 *)rt_nil_check(F.v4907))).f_stack;
}
while ((F.v4909 > INT64_C(0))) {
F.v4907 = ((void * *)(v1334).p)[y_ix1(v1334, F.v4909)];
F.v4912 = rt_range(rt_mod(((*(yR119 *)rt_nil_check(F.v4907))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR119 *)rt_nil_check(F.v4907))).f_chain = ((void * *)(v1254).p)[y_ix1(v1254, F.v4912)];
((void * *)(v1254).p)[y_ix1(v1254, F.v4912)] = F.v4907;
F.v4909 = rt_range(rt_sub(F.v4909, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2221_CloseScope(void) {
struct yf2222 F;
memset((void *)&F, 0, sizeof F);
F.v4924 = ((*(yR124 *)rt_nil_check(((void * *)(v1265).p)[y_ix1(v1265, v1267)]))).f_syms;
while ((!(F.v4924 == ((void *)0)))) {
F.v4930 = rt_range(rt_mod(((*(yR119 *)rt_nil_check(F.v4924))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4926 = ((void * *)(v1254).p)[y_ix1(v1254, F.v4930)];
F.v4928 = ((void *)0);
while ((((!(F.v4926 == ((void *)0)))) && ((!(F.v4926 == F.v4924))))) {
F.v4928 = F.v4926;
F.v4926 = ((*(yR119 *)rt_nil_check(F.v4926))).f_chain;
}
if ((F.v4926 == F.v4924)) {
if ((F.v4928 == ((void *)0))) {
((void * *)(v1254).p)[y_ix1(v1254, F.v4930)] = ((*(yR119 *)rt_nil_check(F.v4924))).f_chain;
} else {
((*(yR119 *)rt_nil_check(F.v4928))).f_chain = ((*(yR119 *)rt_nil_check(F.v4924))).f_chain;
}
}
F.v4924 = ((*(yR119 *)rt_nil_check(F.v4924))).f_stack;
}
v1267 = rt_range(rt_sub(v1267, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2226_Visible(void * a_p2227) {
struct yf2228 F;
memset((void *)&F, 0, sizeof F);
F.p2227 = a_p2227;
{ rt_int rv4938 = (((((*(yR119 *)rt_nil_check(F.p2227))).f_depth >= v1270)) || ((((*(yR119 *)rt_nil_check(F.p2227))).f_depth == INT64_C(0))));
return rv4938; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2232_Find(rt_int a_p2233) {
struct yf2234 F;
memset((void *)&F, 0, sizeof F);
F.p2233 = a_p2233;
F.v4942 = ((void * *)(v1254).p)[y_ix1(v1254, rt_mod(F.p2233, INT64_C(8192)))];
while ((!(F.v4942 == ((void *)0)))) {
if ((((((*(yR119 *)rt_nil_check(F.v4942))).f_name == F.p2233)) && yr2226_Visible(F.v4942))) {
{ void * rv4945 = F.v4942;
return rv4945; }
}
F.v4942 = ((*(yR119 *)rt_nil_check(F.v4942))).f_chain;
}
{ void * rv4946 = ((void *)0);
return rv4946; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2238_FindHere(rt_int a_p2239) {
struct yf2240 F;
memset((void *)&F, 0, sizeof F);
F.p2239 = a_p2239;
F.v4950 = ((void * *)(v1254).p)[y_ix1(v1254, rt_mod(F.p2239, INT64_C(8192)))];
while ((!(F.v4950 == ((void *)0)))) {
if ((((((*(yR119 *)rt_nil_check(F.v4950))).f_name == F.p2239)) && ((((*(yR119 *)rt_nil_check(F.v4950))).f_depth == v1267)))) {
{ void * rv4953 = F.v4950;
return rv4953; }
}
F.v4950 = ((*(yR119 *)rt_nil_check(F.v4950))).f_chain;
}
{ void * rv4954 = ((void *)0);
return rv4954; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2244_Lookup(rt_int a_p2245, rt_int a_p2246) {
struct yf2247 F;
memset((void *)&F, 0, sizeof F);
F.p2245 = a_p2245;
F.p2246 = a_p2246;
F.v4959 = yr2232_Find(F.p2245);
if ((!(((void * *)(v1307).p)[y_ix1(v1307, v1267)] == ((void *)0)))) {
if ((((F.v4959 == ((void *)0))) || ((!(((*(yR119 *)rt_nil_check(F.v4959))).f_depth == v1267))))) {
if (yr2264_DeclaredFrom(((void * *)(v1307).p)[y_ix1(v1307, v1267)], F.p2245)) {
yr1180_FailN(F.p2246, F.p2245, y_str(" is used before its declaration in this scope (VII.I)", 53));
}
}
}
if ((F.v4959 == ((void *)0))) {
yr1180_FailN(F.p2246, F.p2245, y_str(" is not declared here", 21));
}
F.lo4967 = INT64_C(1);
F.hi4968 = v1322;
{ rt_int hi4972 = F.hi4968;
for (rt_int i4971 = F.lo4967; i4971 <= hi4972; i4971++) { F.c_4970 = i4971;
if (((((((*(yR119 *)rt_nil_check(F.v4959))).f_depth == ((rt_int *)(v1318).p)[y_ix1(v1318, F.c_4970)])) && ((((*(yR119 *)rt_nil_check(F.v4959))).f_serial > ((rt_int *)(v1320).p)[y_ix1(v1320, F.c_4970)]))) && yr2258_IsSimple(((*(yR119 *)rt_nil_check(F.v4959))).f_kind))) {
yr1180_FailN(F.p2246, F.p2245, y_str(" is declared after the routine that uses it: a simple declaration precedes the routines that use it (X.G)", 105));
}
if (i4971 == hi4972) break;
}}
if ((((*(yR119 *)rt_nil_check(F.v4959))).f_kind == v888)) {
F.v4961 = ((*(yR119 *)rt_nil_check(F.v4959))).f_chain;
while ((!(F.v4961 == ((void *)0)))) {
if ((((((((((*(yR119 *)rt_nil_check(F.v4961))).f_name == F.p2245)) && ((((*(yR119 *)rt_nil_check(F.v4961))).f_depth == ((*(yR119 *)rt_nil_check(F.v4959))).f_depth))) && ((((*(yR119 *)rt_nil_check(F.v4961))).f_kind == v888))) && yr2285_Resolved(F.v4961)) && ((!(yr2337_Real(F.v4961) == yr2337_Real(F.v4959))))) && ((!(((*(yR119 *)rt_nil_check(yr2337_Real(F.v4959)))).f_kind == v867))))) {
yr1180_FailN(F.p2246, F.p2245, y_str(" is exported here by two modules: name it with FROM (X.B.4)", 59));
}
F.v4961 = ((*(yR119 *)rt_nil_check(F.v4961))).f_chain;
}
}
{ void * rv4975 = F.v4959;
return rv4975; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2251_AltOf(void * a_p2252, void * a_p2253) {
struct yf2254 F;
memset((void *)&F, 0, sizeof F);
F.p2252 = a_p2252;
F.p2253 = a_p2253;
F.v4980 = ((*(yR119 *)rt_nil_check(F.p2252))).f_alt;
while ((!(F.v4980 == ((void *)0)))) {
if ((F.v4980 == F.p2253)) {
{ rt_int rv4982 = 1;
return rv4982; }
}
F.v4980 = ((*(yR119 *)rt_nil_check(F.v4980))).f_alt;
}
{ rt_int rv4984 = 0;
return rv4984; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2258_IsSimple(rt_int a_p2259) {
struct yf2260 F;
memset((void *)&F, 0, sizeof F);
F.p2259 = a_p2259;
{ rt_int rv4987 = (((((((F.p2259 == v855)) || ((F.p2259 == v858))) || ((F.p2259 == v861))) || ((F.p2259 == v864))) || ((F.p2259 == v867))) || ((F.p2259 == v882)));
return rv4987; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2264_DeclaredFrom(void * a_p2265, rt_int a_p2266) {
struct yf2267 F;
memset((void *)&F, 0, sizeof F);
F.p2265 = a_p2265;
F.p2266 = a_p2266;
F.v4992 = F.p2265;
F.v4994 = F.p2265;
while ((!(F.v4992 == ((void *)0)))) {
F.v4996 = ((*(yR99 *)rt_nil_check(F.v4992))).f_kind;
if (((((F.v4996 == v633)) || ((F.v4996 == v636))) || ((F.v4996 == v639)))) {
F.v4994 = ((*(yR99 *)rt_nil_check(F.v4992))).f_a;
while ((!(F.v4994 == ((void *)0)))) {
if ((((*(yR99 *)rt_nil_check(F.v4994))).f_name == F.p2266)) {
{ rt_int rv4998 = 1;
return rv4998; }
}
F.v4994 = ((*(yR99 *)rt_nil_check(F.v4994))).f_next;
}
}
if ((((((((F.v4996 == v642)) || ((F.v4996 == v645))) || ((F.v4996 == v648))) || ((F.v4996 == v660))) || ((F.v4996 == v618))) || ((F.v4996 == v654)))) {
if ((((*(yR99 *)rt_nil_check(F.v4992))).f_name == F.p2266)) {
{ rt_int rv5000 = 1;
return rv5000; }
}
}
if ((((((F.v4996 == v633)) || ((F.v4996 == v636))) || ((F.v4996 == v642))) || ((F.v4996 == v645)))) {
if (yr2271_LiteralIn(((*(yR99 *)rt_nil_check(F.v4992))).f_b, F.p2266)) {
{ rt_int rv5002 = 1;
return rv5002; }
}
}
if ((F.v4996 == v618)) {
F.v4994 = ((*(yR99 *)rt_nil_check(F.v4992))).f_b;
while ((!(F.v4994 == ((void *)0)))) {
if ((((((*(yR99 *)rt_nil_check(F.v4994))).f_ival == F.p2266)) || ((((((*(yR99 *)rt_nil_check(F.v4994))).f_ival == INT64_C(0))) && ((((*(yR99 *)rt_nil_check(F.v4994))).f_name == F.p2266)))))) {
{ rt_int rv5005 = 1;
return rv5005; }
}
F.v4994 = ((*(yR99 *)rt_nil_check(F.v4994))).f_next;
}
}
F.v4992 = ((*(yR99 *)rt_nil_check(F.v4992))).f_next;
}
{ rt_int rv5007 = 0;
return rv5007; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2271_LiteralIn(void * a_p2272, rt_int a_p2273) {
struct yf2274 F;
memset((void *)&F, 0, sizeof F);
F.p2272 = a_p2272;
F.p2273 = a_p2273;
if ((F.p2272 == ((void *)0))) {
{ rt_int rv5014 = 0;
return rv5014; }
}
if ((((*(yR99 *)rt_nil_check(F.p2272))).f_kind == v669)) {
F.v5012 = ((*(yR99 *)rt_nil_check(F.p2272))).f_a;
while ((!(F.v5012 == ((void *)0)))) {
if ((((*(yR99 *)rt_nil_check(F.v5012))).f_name == F.p2273)) {
{ rt_int rv5016 = 1;
return rv5016; }
}
F.v5012 = ((*(yR99 *)rt_nil_check(F.v5012))).f_next;
}
{ rt_int rv5018 = 0;
return rv5018; }
}
if ((((*(yR99 *)rt_nil_check(F.p2272))).f_kind == v675)) {
F.v5012 = ((*(yR99 *)rt_nil_check(F.p2272))).f_a;
while ((!(F.v5012 == ((void *)0)))) {
if (yr2271_LiteralIn(F.v5012, F.p2273)) {
{ rt_int rv5020 = 1;
return rv5020; }
}
F.v5012 = ((*(yR99 *)rt_nil_check(F.v5012))).f_next;
}
{ rt_int rv5021 = yr2271_LiteralIn(((*(yR99 *)rt_nil_check(F.p2272))).f_b, F.p2273);
return rv5021; }
}
if ((((*(yR99 *)rt_nil_check(F.p2272))).f_kind == v678)) {
F.v5012 = ((*(yR99 *)rt_nil_check(F.p2272))).f_a;
while ((!(F.v5012 == ((void *)0)))) {
if (yr2271_LiteralIn(((*(yR99 *)rt_nil_check(F.v5012))).f_b, F.p2273)) {
{ rt_int rv5023 = 1;
return rv5023; }
}
F.v5012 = ((*(yR99 *)rt_nil_check(F.v5012))).f_next;
}
if ((!(((*(yR99 *)rt_nil_check(F.p2272))).f_b == ((void *)0)))) {
if (yr2271_LiteralIn(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2272))).f_b))).f_b, F.p2273)) {
{ rt_int rv5025 = 1;
return rv5025; }
}
F.v5012 = ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2272))).f_b))).f_a;
while ((!(F.v5012 == ((void *)0)))) {
if (yr2278_LiteralInGroups(((*(yR99 *)rt_nil_check(F.v5012))).f_b, F.p2273)) {
{ rt_int rv5027 = 1;
return rv5027; }
}
F.v5012 = ((*(yR99 *)rt_nil_check(F.v5012))).f_next;
}
}
{ rt_int rv5029 = 0;
return rv5029; }
}
if ((((((*(yR99 *)rt_nil_check(F.p2272))).f_kind == v681)) || ((((*(yR99 *)rt_nil_check(F.p2272))).f_kind == v687)))) {
{ rt_int rv5030 = yr2271_LiteralIn(((*(yR99 *)rt_nil_check(F.p2272))).f_a, F.p2273);
return rv5030; }
}
{ rt_int rv5032 = 0;
return rv5032; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2278_LiteralInGroups(void * a_p2279, rt_int a_p2280) {
struct yf2281 F;
memset((void *)&F, 0, sizeof F);
F.p2279 = a_p2279;
F.p2280 = a_p2280;
F.v5037 = F.p2279;
while ((!(F.v5037 == ((void *)0)))) {
if (yr2271_LiteralIn(((*(yR99 *)rt_nil_check(F.v5037))).f_b, F.p2280)) {
{ rt_int rv5039 = 1;
return rv5039; }
}
F.v5037 = ((*(yR99 *)rt_nil_check(F.v5037))).f_next;
}
{ rt_int rv5041 = 0;
return rv5041; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2285_Resolved(void * a_p2286) {
struct yf2287 F;
memset((void *)&F, 0, sizeof F);
F.p2286 = a_p2286;
if ((!(((*(yR119 *)rt_nil_check(F.p2286))).f_kind == v888))) {
{ rt_int rv5045 = 1;
return rv5045; }
}
if ((((*(yR119 *)rt_nil_check(F.p2286))).f_target == ((void *)0))) {
{ rt_int rv5047 = 0;
return rv5047; }
}
{ rt_int rv5048 = yr2285_Resolved(((*(yR119 *)rt_nil_check(F.p2286))).f_target);
return rv5048; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2291_Ambiguous(void * a_p2292) {
struct yf2293 F;
memset((void *)&F, 0, sizeof F);
F.p2292 = a_p2292;
F.v5052 = ((*(yR119 *)rt_nil_check(F.p2292))).f_chain;
while ((!(F.v5052 == ((void *)0)))) {
if ((((((((*(yR119 *)rt_nil_check(F.v5052))).f_name == ((*(yR119 *)rt_nil_check(F.p2292))).f_name)) && yr2226_Visible(F.v5052)) && ((((*(yR119 *)rt_nil_check(F.v5052))).f_kind == v867))) && ((!(((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5052))).f_rep))).f_tid == ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.p2292))).f_rep))).f_tid))))) {
{ rt_int rv5054 = 1;
return rv5054; }
}
F.v5052 = ((*(yR119 *)rt_nil_check(F.v5052))).f_chain;
}
{ rt_int rv5056 = 0;
return rv5056; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2297_FindLit(rt_int a_p2298, void * a_p2299) {
struct yf2300 F;
memset((void *)&F, 0, sizeof F);
F.p2298 = a_p2298;
F.p2299 = a_p2299;
F.v5061 = ((void * *)(v1254).p)[y_ix1(v1254, rt_mod(F.p2298, INT64_C(8192)))];
while ((!(F.v5061 == ((void *)0)))) {
if ((((((*(yR119 *)rt_nil_check(F.v5061))).f_name == F.p2298)) && yr2285_Resolved(F.v5061))) {
if ((((((*(yR119 *)rt_nil_check(yr2337_Real(F.v5061)))).f_kind == v867)) && ((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(yr2337_Real(F.v5061)))).f_rep))).f_tid == ((*(yR104 *)rt_nil_check(F.p2299))).f_tid)))) {
{ void * rv5064 = F.v5061;
return rv5064; }
}
}
F.v5061 = ((*(yR119 *)rt_nil_check(F.v5061))).f_chain;
}
{ void * rv5065 = ((void *)0);
return rv5065; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2304_Define(void * a_p2305, rt_int a_p2306) {
struct yf2307 F;
memset((void *)&F, 0, sizeof F);
F.p2305 = a_p2305;
F.p2306 = a_p2306;
F.v5070 = yr2238_FindHere(((*(yR119 *)rt_nil_check(F.p2305))).f_name);
F.v5072 = rt_range(rt_mod(((*(yR119 *)rt_nil_check(F.p2305))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((((!(F.v5070 == ((void *)0)))) && (!((((((*(yR119 *)rt_nil_check(F.v5070))).f_kind == v867)) && ((((*(yR119 *)rt_nil_check(F.p2305))).f_kind == v867)))))) && (!(((((((*(yR119 *)rt_nil_check(F.p2305))).f_kind == v870)) && yr2285_Resolved(F.v5070)) && yr2251_AltOf(F.p2305, yr2337_Real(F.v5070)))))) && (!((((((*(yR119 *)rt_nil_check(F.p2305))).f_kind == v888)) && ((((*(yR119 *)rt_nil_check(F.v5070))).f_kind == v888))))))) {
yr1180_FailN(F.p2306, ((*(yR119 *)rt_nil_check(F.p2305))).f_name, y_str(" is declared twice in this scope", 32));
}
((*(yR119 *)rt_nil_check(F.p2305))).f_depth = v1267;
((*(yR119 *)rt_nil_check(F.p2305))).f_chain = ((void * *)(v1254).p)[y_ix1(v1254, F.v5072)];
((void * *)(v1254).p)[y_ix1(v1254, F.v5072)] = F.p2305;
((*(yR119 *)rt_nil_check(F.p2305))).f_stack = ((*(yR124 *)rt_nil_check(((void * *)(v1265).p)[y_ix1(v1265, v1267)]))).f_syms;
((*(yR124 *)rt_nil_check(((void * *)(v1265).p)[y_ix1(v1265, v1267)]))).f_syms = F.p2305;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2311_Path(rt_int a_p2312, rt_int a_p2313) {
struct yf2314 F;
memset((void *)&F, 0, sizeof F);
F.p2312 = a_p2312;
F.p2313 = a_p2313;
F.v5080 = rt_range(rt_sub(v1273, F.p2312), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.p2312 == INT64_C(0))) {
{ rt_int rv5083 = F.p2313;
return rv5083; }
}
yr1020_SB();
if ((F.v5080 == INT64_C(0))) {
yr1031_SA(y_str("F.", 2));
} else {
yr1031_SA(y_str("F.up->", 6));
while ((F.v5080 > INT64_C(1))) {
yr1031_SA(y_str("up->", 4));
F.v5080 = rt_range(rt_sub(F.v5080, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1038_ST(F.p2313);
{ rt_int rv5091 = yr1050_SE();
return rv5091; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2318_FramePtr(rt_int a_p2319) {
struct yf2320 F;
memset((void *)&F, 0, sizeof F);
F.p2319 = a_p2319;
F.v5095 = rt_range(rt_sub(v1273, F.p2319), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.v5095 == INT64_C(0))) {
{ rt_int rv5099 = yr1055_T(y_str("&F", 2));
return rv5099; }
}
yr1020_SB();
yr1031_SA(y_str("F.up", 4));
while ((F.v5095 > INT64_C(1))) {
yr1031_SA(y_str("->up", 4));
F.v5095 = rt_range(rt_sub(F.v5095, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv5105 = yr1050_SE();
return rv5105; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2324_DeclStorage(rt_int a_p2325, rt_int a_p2326) {
struct yf2327 F;
memset((void *)&F, 0, sizeof F);
F.p2325 = a_p2325;
F.p2326 = a_p2326;
yr1020_SB();
if ((v1273 == INT64_C(0))) {
yr1031_SA(y_str("static ", 7));
}
yr1038_ST(F.p2325);
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.p2326);
yr1031_SA(y_str(";", 1));
F.v5110 = yr1050_SE();
if ((v1273 == INT64_C(0))) {
yr1104_Put(&v978, F.v5110);
} else {
yr1104_Put(&v992, F.v5110);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2331_SymPath(void * a_p2332) {
struct yf2333 F;
memset((void *)&F, 0, sizeof F);
F.p2332 = a_p2332;
F.v5119 = yr2311_Path(((*(yR119 *)rt_nil_check(F.p2332))).f_level, ((*(yR119 *)rt_nil_check(F.p2332))).f_cname);
if (((*(yR119 *)rt_nil_check(F.p2332))).f_byref) {
yr1020_SB();
yr1031_SA(y_str("(*", 2));
yr1038_ST(F.v5119);
yr1031_SA(y_str(")", 1));
{ rt_int rv5122 = yr1050_SE();
return rv5122; }
}
{ rt_int rv5123 = F.v5119;
return rv5123; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2337_Real(void * a_p2338) {
struct yf2339 F;
memset((void *)&F, 0, sizeof F);
F.p2338 = a_p2338;
F.v5127 = F.p2338;
while ((((*(yR119 *)rt_nil_check(F.v5127))).f_kind == v888)) {
if ((((*(yR119 *)rt_nil_check(F.v5127))).f_target == ((void *)0))) {
yr1180_FailN(v994, ((*(yR119 *)rt_nil_check(F.v5127))).f_name, y_str(" is imported from a declaration translated later: until then only the bodies of routines may use it (X.G)", 105));
}
F.v5127 = ((*(yR119 *)rt_nil_check(F.v5127))).f_target;
}
{ void * rv5129 = F.v5127;
return rv5129; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2343_NewRep(rt_int a_p2344, rt_int a_p2345) {
struct yf2346 F;
memset((void *)&F, 0, sizeof F);
F.p2344 = a_p2344;
F.p2345 = a_p2345;
({ F.v5134 = rt_alloc(sizeof(yR104)); });
(*(yR104 *)rt_nil_check(F.v5134)) = ((yR104){ .f_kind = F.p2344, .f_tid = F.p2345, .f_tname = F.p2345, .f_lo = INT64_C(0), .f_hi = INT64_C(0), .f_mlo = INT64_C(0), .f_mhi = INT64_C(0), .f_hasm = 0, .f_scale = INT64_C(0), .f_prec = INT64_C(0), .f_elem = ((void *)0), .f_idx = ((void *)0), .f_nidx = INT64_C(0), .f_link = ((void *)0), .f_lits = ((void *)0), .f_nlits = INT64_C(0), .f_fields = ((void *)0), .f_selector = ((void *)0), .f_cname = INT64_C(0), .f_dname = INT64_C(0), .f_dlevel = INT64_C(0), .f_deep = 0, .f_abstract = 0, .f_opaque = 0, .f_opaqueops = INT64_C(0), .f_ordered = 0, .f_forward = INT64_C(0), .f_fwdscope = INT64_C(0), .f_monitor = ((void *)0), .f_serial = INT64_C(0), .f_sig = INT64_C(0), .f_fsn = INT64_C(0), .f_fsd = INT64_C(0) });
((*(yR104 *)rt_nil_check(F.v5134))).f_serial = yr1189_NewSerial();
{ void * rv5158 = F.v5134;
return rv5158; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2350_CopyRep(void * a_p2351) {
struct yf2352 F;
memset((void *)&F, 0, sizeof F);
F.p2351 = a_p2351;
({ F.v5162 = rt_alloc(sizeof(yR104)); });
(*(yR104 *)rt_nil_check(F.v5162)) = (*(yR104 *)rt_nil_check(F.p2351));
((*(yR104 *)rt_nil_check(F.v5162))).f_serial = yr1189_NewSerial();
((*(yR104 *)rt_nil_check(F.v5162))).f_sig = INT64_C(0);
{ void * rv5164 = F.v5162;
return rv5164; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2356_IsDiscrete(void * a_p2357) {
struct yf2358 F;
memset((void *)&F, 0, sizeof F);
F.p2357 = a_p2357;
{ rt_int rv5167 = (((((((*(yR104 *)rt_nil_check(F.p2357))).f_kind == v798)) || ((((*(yR104 *)rt_nil_check(F.p2357))).f_kind == v807))) || ((((*(yR104 *)rt_nil_check(F.p2357))).f_kind == v810))) || ((((*(yR104 *)rt_nil_check(F.p2357))).f_kind == v813)));
return rv5167; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2362_IsNumeric(void * a_p2363) {
struct yf2364 F;
memset((void *)&F, 0, sizeof F);
F.p2363 = a_p2363;
{ rt_int rv5170 = ((((((*(yR104 *)rt_nil_check(F.p2363))).f_kind == v798)) || ((((*(yR104 *)rt_nil_check(F.p2363))).f_kind == v801))) || ((((*(yR104 *)rt_nil_check(F.p2363))).f_kind == v804)));
return rv5170; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2368_IsArrayLike(void * a_p2369) {
struct yf2370 F;
memset((void *)&F, 0, sizeof F);
F.p2369 = a_p2369;
{ rt_int rv5173 = ((((((*(yR104 *)rt_nil_check(F.p2369))).f_kind == v816)) || ((((*(yR104 *)rt_nil_check(F.p2369))).f_kind == v837))) || ((((*(yR104 *)rt_nil_check(F.p2369))).f_kind == v840)));
return rv5173; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2374_IsString(void * a_p2375) {
struct yf2376 F;
memset((void *)&F, 0, sizeof F);
F.p2375 = a_p2375;
if ((((*(yR104 *)rt_nil_check(F.p2375))).f_kind == v840)) {
{ rt_int rv5177 = 1;
return rv5177; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2375))).f_kind == v816)) && ((((*(yR104 *)rt_nil_check(F.p2375))).f_nidx == INT64_C(1))))) {
{ rt_int rv5179 = (((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2375))).f_elem))).f_kind == v813);
return rv5179; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2375))).f_kind == v837)) && ((((*(yR104 *)rt_nil_check(F.p2375))).f_nidx == INT64_C(1))))) {
{ rt_int rv5181 = (((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2375))).f_elem))).f_kind == v813);
return rv5181; }
}
{ rt_int rv5183 = 0;
return rv5183; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2380_Deep(void * a_p2381) {
struct yf2382 F;
memset((void *)&F, 0, sizeof F);
F.p2381 = a_p2381;
if (((((((*(yR104 *)rt_nil_check(F.p2381))).f_kind == v816)) || ((((*(yR104 *)rt_nil_check(F.p2381))).f_kind == v837))) || ((((*(yR104 *)rt_nil_check(F.p2381))).f_kind == v840)))) {
{ rt_int rv5187 = 1;
return rv5187; }
}
{ rt_int rv5188 = (((((*(yR104 *)rt_nil_check(F.p2381))).f_kind == v819)) && ((*(yR104 *)rt_nil_check(F.p2381))).f_deep);
return rv5188; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2386_Holds(void * a_p2387, rt_int a_p2388) {
struct yf2389 F;
memset((void *)&F, 0, sizeof F);
F.p2387 = a_p2387;
F.p2388 = a_p2388;
if ((((*(yR104 *)rt_nil_check(F.p2387))).f_kind == v816)) {
{ rt_int rv5194 = (((((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2387))).f_elem))).f_kind == F.p2388)) || yr2386_Holds(((*(yR104 *)rt_nil_check(F.p2387))).f_elem, F.p2388));
return rv5194; }
}
if ((((*(yR104 *)rt_nil_check(F.p2387))).f_kind == v819)) {
F.v5193 = ((*(yR104 *)rt_nil_check(F.p2387))).f_fields;
while ((!(F.v5193 == ((void *)0)))) {
if ((((((*(yR104 *)rt_nil_check(((*(yR109 *)rt_nil_check(F.v5193))).f_rep))).f_kind == F.p2388)) || yr2386_Holds(((*(yR109 *)rt_nil_check(F.v5193))).f_rep, F.p2388))) {
{ rt_int rv5196 = 1;
return rv5196; }
}
F.v5193 = ((*(yR109 *)rt_nil_check(F.v5193))).f_next;
}
}
{ rt_int rv5198 = 0;
return rv5198; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2393_HoldsSignal(void * a_p2394) {
struct yf2395 F;
memset((void *)&F, 0, sizeof F);
F.p2394 = a_p2394;
{ rt_int rv5201 = yr2386_Holds(F.p2394, v831);
return rv5201; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2399_NonAssignable(void * a_p2400) {
struct yf2401 F;
memset((void *)&F, 0, sizeof F);
F.p2400 = a_p2400;
F.v5205 = ((*(yR104 *)rt_nil_check(F.p2400))).f_kind;
if (((((F.v5205 == v831)) || ((F.v5205 == v825))) || ((F.v5205 == v834)))) {
{ rt_int rv5207 = 1;
return rv5207; }
}
{ rt_int rv5208 = ((yr2386_Holds(F.p2400, v831) || yr2386_Holds(F.p2400, v825)) || yr2386_Holds(F.p2400, v834));
return rv5208; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2405_CType(void * a_p2406) {
struct yf2407 F;
memset((void *)&F, 0, sizeof F);
F.p2406 = a_p2406;
F.v5212 = ((*(yR104 *)rt_nil_check(F.p2406))).f_kind;
if (((((F.v5212 == v798)) || ((F.v5212 == v807))) || ((F.v5212 == v810)))) {
{ rt_int rv5214 = yr1055_T(y_str("rt_int", 6));
return rv5214; }
}
if ((F.v5212 == v813)) {
{ rt_int rv5216 = yr1055_T(y_str("unsigned char", 13));
return rv5216; }
}
if ((F.v5212 == v804)) {
{ rt_int rv5218 = yr1055_T(y_str("double", 6));
return rv5218; }
}
if ((F.v5212 == v801)) {
{ rt_int rv5220 = yr1055_T(y_str("yfix", 4));
return rv5220; }
}
if (((((F.v5212 == v816)) || ((F.v5212 == v837))) || ((F.v5212 == v840)))) {
{ rt_int rv5222 = yr1055_T(y_str("yarr", 4));
return rv5222; }
}
if ((F.v5212 == v819)) {
{ rt_int rv5223 = ((*(yR104 *)rt_nil_check(F.p2406))).f_cname;
return rv5223; }
}
if ((((F.v5212 == v822)) || ((F.v5212 == v843)))) {
{ rt_int rv5225 = yr1055_T(y_str("void *", 6));
return rv5225; }
}
if ((F.v5212 == v825)) {
{ rt_int rv5227 = yr1055_T(y_str("yfile *", 7));
return rv5227; }
}
if ((F.v5212 == v828)) {
{ rt_int rv5229 = yr1055_T(y_str("yset", 4));
return rv5229; }
}
if ((F.v5212 == v831)) {
{ rt_int rv5231 = yr1055_T(y_str("ysig", 4));
return rv5231; }
}
if ((F.v5212 == v834)) {
{ rt_int rv5233 = yr1055_T(y_str("rt_lock", 7));
return rv5233; }
}
{ rt_int rv5235 = yr1055_T(y_str("void", 4));
return rv5235; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2411_DescOf(void * a_p2412) {
struct yf2413 F;
memset((void *)&F, 0, sizeof F);
F.p2412 = a_p2412;
F.v5239 = ((*(yR104 *)rt_nil_check(F.p2412))).f_kind;
if (((((F.v5239 == v798)) || ((F.v5239 == v807))) || ((F.v5239 == v810)))) {
{ rt_int rv5241 = yr1055_T(y_str("&y_d_int", 8));
return rv5241; }
}
if ((F.v5239 == v813)) {
{ rt_int rv5243 = yr1055_T(y_str("&y_d_byte", 9));
return rv5243; }
}
if ((F.v5239 == v804)) {
{ rt_int rv5245 = yr1055_T(y_str("&y_d_float", 10));
return rv5245; }
}
if ((F.v5239 == v801)) {
{ rt_int rv5247 = yr1055_T(y_str("&y_d_fix", 8));
return rv5247; }
}
if ((((F.v5239 == v822)) || ((F.v5239 == v843)))) {
{ rt_int rv5249 = yr1055_T(y_str("&y_d_ptr", 8));
return rv5249; }
}
if ((F.v5239 == v828)) {
{ rt_int rv5251 = yr1055_T(y_str("&y_d_set", 8));
return rv5251; }
}
if ((((F.v5239 == v816)) || ((F.v5239 == v819)))) {
yr1020_SB();
yr1031_SA(y_str("&", 1));
yr1038_ST(yr2311_Path(((*(yR104 *)rt_nil_check(F.p2412))).f_dlevel, ((*(yR104 *)rt_nil_check(F.p2412))).f_dname));
{ rt_int rv5253 = yr1050_SE();
return rv5253; }
}
if ((F.v5239 == v840)) {
{ rt_int rv5255 = yr1055_T(y_str("&y_d_str", 8));
return rv5255; }
}
if ((F.v5239 == v831)) {
{ rt_int rv5257 = yr1055_T(y_str("&y_d_sig", 8));
return rv5257; }
}
if ((F.v5239 == v834)) {
{ rt_int rv5259 = yr1055_T(y_str("&y_d_sem", 8));
return rv5259; }
}
{ rt_int rv5261 = yr1055_T(y_str("&y_d_opaque", 11));
return rv5261; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2417_NewDesc(void * a_p2418) {
struct yf2419 F;
memset((void *)&F, 0, sizeof F);
F.p2418 = a_p2418;
((*(yR104 *)rt_nil_check(F.p2418))).f_dname = yr1194_Fresh(y_str("yd_", 3));
((*(yR104 *)rt_nil_check(F.p2418))).f_dlevel = v1273;
yr2324_DeclStorage(yr1055_T(y_str("ydesc", 5)), ((*(yR104 *)rt_nil_check(F.p2418))).f_dname);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2423_SameType(void * a_p2424, void * a_p2425) {
struct yf2426 F;
memset((void *)&F, 0, sizeof F);
F.p2424 = a_p2424;
F.p2425 = a_p2425;
if ((((*(yR104 *)rt_nil_check(F.p2424))).f_tid == ((*(yR104 *)rt_nil_check(F.p2425))).f_tid)) {
{ rt_int rv5270 = 1;
return rv5270; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2424))).f_kind == v840)) && yr2374_IsString(F.p2425))) {
{ rt_int rv5272 = 1;
return rv5272; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2425))).f_kind == v840)) && yr2374_IsString(F.p2424))) {
{ rt_int rv5274 = 1;
return rv5274; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2424))).f_kind == v843)) && ((((*(yR104 *)rt_nil_check(F.p2425))).f_kind == v822)))) {
{ rt_int rv5276 = 1;
return rv5276; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2425))).f_kind == v843)) && ((((*(yR104 *)rt_nil_check(F.p2424))).f_kind == v822)))) {
{ rt_int rv5278 = 1;
return rv5278; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2424))).f_kind == v852)) || ((((*(yR104 *)rt_nil_check(F.p2425))).f_kind == v852)))) {
{ rt_int rv5280 = 1;
return rv5280; }
}
{ rt_int rv5282 = 0;
return rv5282; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2430_TypeClash(rt_int a_p2431, void * a_p2432, void * a_p2433) {
struct yf2434 F;
memset((void *)&F, 0, sizeof F);
F.p2431 = a_p2431;
F.p2432 = a_p2432;
F.p2433 = a_p2433;
yr1020_SB();
yr1031_SA(y_str("type conflict: ", 15));
yr1038_ST(((*(yR104 *)rt_nil_check(F.p2432))).f_tname);
yr1031_SA(y_str(" expected, ", 11));
yr1038_ST(((*(yR104 *)rt_nil_check(F.p2433))).f_tname);
yr1031_SA(y_str(" found", 6));
F.v5288 = yr1050_SE();
yr1151_Fail(F.p2431, F.v5288);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2438_CheckType(rt_int a_p2439, void * a_p2440, void * a_p2441) {
struct yf2442 F;
memset((void *)&F, 0, sizeof F);
F.p2439 = a_p2439;
F.p2440 = a_p2440;
F.p2441 = a_p2441;
if ((!yr2423_SameType(F.p2440, F.p2441))) {
yr2430_TypeClash(F.p2439, F.p2440, F.p2441);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2446_CheckRepresented(void * a_p2447, rt_int a_p2448) {
struct yf2449 F;
memset((void *)&F, 0, sizeof F);
F.p2447 = a_p2447;
F.p2448 = a_p2448;
if (((*(yR104 *)rt_nil_check(F.p2447))).f_abstract) {
yr1180_FailN(F.p2448, ((*(yR104 *)rt_nil_check(F.p2447))).f_tname, y_str(" is a type, not a representation (VI.A.1)", 41));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2453_SigText(void * a_p2454) {
struct yf2455 F;
memset((void *)&F, 0, sizeof F);
F.p2454 = a_p2454;
F.v5303 = ((*(yR104 *)rt_nil_check(F.p2454))).f_kind;
yr1020_SB();
yr1038_ST(((*(yR104 *)rt_nil_check(F.p2454))).f_tid);
if (((yr2356_IsDiscrete(F.p2454) || ((F.v5303 == v804))) || ((F.v5303 == v801)))) {
yr1031_SA(y_str("[", 1));
if (((*(yR104 *)rt_nil_check(F.p2454))).f_hasm) {
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2454))).f_mlo);
yr1031_SA(y_str("..", 2));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2454))).f_mhi);
} else {
yr1038_ST(((*(yR104 *)rt_nil_check(F.p2454))).f_lo);
yr1031_SA(y_str("..", 2));
yr1038_ST(((*(yR104 *)rt_nil_check(F.p2454))).f_hi);
}
yr1031_SA(y_str("]", 1));
if ((F.v5303 == v804)) {
yr1031_SA(y_str("P", 1));
yr1038_ST(((*(yR104 *)rt_nil_check(F.p2454))).f_prec);
}
if ((F.v5303 == v801)) {
yr1031_SA(y_str("S", 1));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2454))).f_fsn);
yr1031_SA(y_str("/", 1));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2454))).f_fsd);
}
} else if ((F.v5303 == v816)) {
yr1031_SA(y_str("(", 1));
F.v5305 = ((*(yR104 *)rt_nil_check(F.p2454))).f_idx;
while ((!(F.v5305 == ((void *)0)))) {
yr1038_ST(yr2459_RepSig(F.v5305));
yr1031_SA(y_str(",", 1));
F.v5305 = ((*(yR104 *)rt_nil_check(F.v5305))).f_link;
}
yr1031_SA(y_str("OF ", 3));
yr1038_ST(yr2459_RepSig(((*(yR104 *)rt_nil_check(F.p2454))).f_elem));
yr1031_SA(y_str(")", 1));
} else if ((F.v5303 == v837)) {
yr1031_SA(y_str("(", 1));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2454))).f_nidx);
yr1031_SA(y_str("D ", 2));
yr1038_ST(yr2459_RepSig(((*(yR104 *)rt_nil_check(F.p2454))).f_elem));
yr1031_SA(y_str(")", 1));
} else if ((F.v5303 == v819)) {
yr1031_SA(y_str("{", 1));
F.v5307 = ((*(yR104 *)rt_nil_check(F.p2454))).f_fields;
while ((!(F.v5307 == ((void *)0)))) {
if (((*(yR109 *)rt_nil_check(F.v5307))).f_isconst) {
yr1031_SA(y_str("C ", 2));
} else {
yr1031_SA(y_str("V ", 2));
}
yr1038_ST(((*(yR109 *)rt_nil_check(F.v5307))).f_name);
yr1031_SA(y_str(":", 1));
yr1038_ST(yr2459_RepSig(((*(yR109 *)rt_nil_check(F.v5307))).f_rep));
yr1031_SA(y_str(";", 1));
F.v5307 = ((*(yR109 *)rt_nil_check(F.v5307))).f_next;
}
yr1031_SA(y_str("}", 1));
} else if ((((F.v5303 == v828)) || ((F.v5303 == v825)))) {
yr1031_SA(y_str("(", 1));
yr1038_ST(yr2459_RepSig(((*(yR104 *)rt_nil_check(F.p2454))).f_elem));
yr1031_SA(y_str(")", 1));
}
{ rt_int rv5330 = yr1050_SE();
return rv5330; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2459_RepSig(void * a_p2460) {
struct yf2461 F;
memset((void *)&F, 0, sizeof F);
F.p2460 = a_p2460;
if ((((*(yR104 *)rt_nil_check(F.p2460))).f_sig == INT64_C(0))) {
((*(yR104 *)rt_nil_check(F.p2460))).f_sig = yr1069_Name(yr2453_SigText(F.p2460));
}
{ rt_int rv5334 = ((*(yR104 *)rt_nil_check(F.p2460))).f_sig;
return rv5334; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2465_Identical(void * a_p2466, void * a_p2467) {
struct yf2468 F;
memset((void *)&F, 0, sizeof F);
F.p2466 = a_p2466;
F.p2467 = a_p2467;
if ((F.p2466 == F.p2467)) {
{ rt_int rv5339 = 1;
return rv5339; }
}
if ((!yr2423_SameType(F.p2466, F.p2467))) {
{ rt_int rv5341 = 0;
return rv5341; }
}
{ rt_int rv5342 = (yr2459_RepSig(F.p2466) == yr2459_RepSig(F.p2467));
return rv5342; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2472_IsLiteralNode(void * a_p2473) {
struct yf2474 F;
memset((void *)&F, 0, sizeof F);
F.p2473 = a_p2473;
if ((((((((*(yR99 *)rt_nil_check(F.p2473))).f_kind == v753)) || ((((*(yR99 *)rt_nil_check(F.p2473))).f_kind == v759))) || ((((*(yR99 *)rt_nil_check(F.p2473))).f_kind == v756))) || ((((*(yR99 *)rt_nil_check(F.p2473))).f_kind == v762)))) {
{ rt_int rv5345 = (((*(yR99 *)rt_nil_check(F.p2473))).f_d == ((void *)0));
return rv5345; }
}
if ((((((*(yR99 *)rt_nil_check(F.p2473))).f_kind == v789)) || ((((*(yR99 *)rt_nil_check(F.p2473))).f_kind == v795)))) {
{ rt_int rv5346 = yr2472_IsLiteralNode(((*(yR99 *)rt_nil_check(F.p2473))).f_a);
return rv5346; }
}
{ rt_int rv5348 = 0;
return rv5348; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2478_StoreBounds(void * a_p2479, yarr a_p2481) {
struct yf2482 F;
memset((void *)&F, 0, sizeof F);
F.p2479 = a_p2479;
F.p2481 = a_p2481;
F.v5353 = yr1194_Fresh(y_str("lo", 2));
F.v5355 = yr1194_Fresh(y_str("hi", 2));
yr2324_DeclStorage(yr1055_T(F.p2481), F.v5353);
yr2324_DeclStorage(yr1055_T(F.p2481), F.v5355);
yr1126_Emit(yr3194_Join(yr2311_Path(v1273, F.v5353), yr1055_T(y_str(" = ", 3)), yr3194_Join(((*(yR104 *)rt_nil_check(F.p2479))).f_lo, yr1055_T(y_str(";", 1)), INT64_C(0))));
yr1126_Emit(yr3194_Join(yr2311_Path(v1273, F.v5355), yr1055_T(y_str(" = ", 3)), yr3194_Join(((*(yR104 *)rt_nil_check(F.p2479))).f_hi, yr1055_T(y_str(";", 1)), INT64_C(0))));
((*(yR104 *)rt_nil_check(F.p2479))).f_lo = F.v5353;
((*(yR104 *)rt_nil_check(F.p2479))).f_hi = F.v5355;
((*(yR104 *)rt_nil_check(F.p2479))).f_dname = F.v5353;
((*(yR104 *)rt_nil_check(F.p2479))).f_dlevel = v1273;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2486_LoText(void * a_p2487) {
struct yf2488 F;
memset((void *)&F, 0, sizeof F);
F.p2487 = a_p2487;
if ((((((!(((*(yR104 *)rt_nil_check(F.p2487))).f_dname == INT64_C(0)))) && ((!(((*(yR104 *)rt_nil_check(F.p2487))).f_lo == INT64_C(0))))) && ((!(((*(yR104 *)rt_nil_check(F.p2487))).f_kind == v816)))) && ((!(((*(yR104 *)rt_nil_check(F.p2487))).f_kind == v819))))) {
{ rt_int rv5368 = yr2311_Path(((*(yR104 *)rt_nil_check(F.p2487))).f_dlevel, ((*(yR104 *)rt_nil_check(F.p2487))).f_lo);
return rv5368; }
}
{ rt_int rv5369 = ((*(yR104 *)rt_nil_check(F.p2487))).f_lo;
return rv5369; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2492_HiText(void * a_p2493) {
struct yf2494 F;
memset((void *)&F, 0, sizeof F);
F.p2493 = a_p2493;
if ((((((!(((*(yR104 *)rt_nil_check(F.p2493))).f_dname == INT64_C(0)))) && ((!(((*(yR104 *)rt_nil_check(F.p2493))).f_hi == INT64_C(0))))) && ((!(((*(yR104 *)rt_nil_check(F.p2493))).f_kind == v816)))) && ((!(((*(yR104 *)rt_nil_check(F.p2493))).f_kind == v819))))) {
{ rt_int rv5374 = yr2311_Path(((*(yR104 *)rt_nil_check(F.p2493))).f_dlevel, ((*(yR104 *)rt_nil_check(F.p2493))).f_hi);
return rv5374; }
}
{ rt_int rv5375 = ((*(yR104 *)rt_nil_check(F.p2493))).f_hi;
return rv5375; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2498_AdoptLiteral(void * a_p2499, void * a_p2500, void * a_p2501) {
struct yf2502 F;
memset((void *)&F, 0, sizeof F);
F.p2499 = a_p2499;
F.p2500 = a_p2500;
F.p2501 = a_p2501;
if ((((!yr2472_IsLiteralNode(F.p2499)) || ((!(((*(yR104 *)rt_nil_check(F.p2500))).f_kind == ((*(yR104 *)rt_nil_check(F.p2501))).f_kind)))) || (!yr2362_IsNumeric(F.p2501)))) {
{ void * rv5382 = F.p2500;
return rv5382; }
}
if (yr2506_HasQualifier(F.p2499)) {
{ void * rv5383 = F.p2500;
return rv5383; }
}
F.v5381 = yr2350_CopyRep(F.p2500);
((*(yR104 *)rt_nil_check(F.v5381))).f_tid = ((*(yR104 *)rt_nil_check(F.p2501))).f_tid;
((*(yR104 *)rt_nil_check(F.v5381))).f_tname = ((*(yR104 *)rt_nil_check(F.p2501))).f_tname;
{ void * rv5384 = F.v5381;
return rv5384; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2506_HasQualifier(void * a_p2507) {
struct yf2508 F;
memset((void *)&F, 0, sizeof F);
F.p2507 = a_p2507;
if ((((((*(yR99 *)rt_nil_check(F.p2507))).f_kind == v789)) || ((((*(yR99 *)rt_nil_check(F.p2507))).f_kind == v795)))) {
{ rt_int rv5387 = yr2506_HasQualifier(((*(yR99 *)rt_nil_check(F.p2507))).f_a);
return rv5387; }
}
{ rt_int rv5388 = (!(((*(yR99 *)rt_nil_check(F.p2507))).f_d == ((void *)0)));
return rv5388; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2512_Gcd(rt_int a_p2513, rt_int a_p2514) {
struct yf2515 F;
memset((void *)&F, 0, sizeof F);
F.p2513 = a_p2513;
F.p2514 = a_p2514;
F.v5393 = F.p2513;
F.v5395 = F.p2514;
if ((F.v5393 < INT64_C(0))) {
F.v5393 = rt_range(rt_neg(F.v5393), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v5395 < INT64_C(0))) {
F.v5395 = rt_range(rt_neg(F.v5395), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
while ((!(F.v5395 == INT64_C(0)))) {
F.v5397 = rt_range(rt_mod(F.v5393, F.v5395), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5393 = F.v5395;
F.v5395 = F.v5397;
}
if ((F.v5393 == INT64_C(0))) {
{ rt_int rv5406 = INT64_C(1);
return rv5406; }
}
{ rt_int rv5407 = F.v5393;
return rv5407; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2519_MulChk(rt_int a_p2520, rt_int a_p2521, rt_int a_p2522) {
struct yf2523 F;
memset((void *)&F, 0, sizeof F);
F.p2520 = a_p2520;
F.p2521 = a_p2521;
F.p2522 = a_p2522;
F.v5413 = F.p2520;
F.v5415 = F.p2521;
if ((F.v5413 < INT64_C(0))) {
F.v5413 = rt_range(rt_neg(F.v5413), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v5415 < INT64_C(0))) {
F.v5415 = rt_range(rt_neg(F.v5415), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((((!(F.v5413 == INT64_C(0)))) && ((F.v5415 > (rt_div(v900, F.v5413)))))) {
yr1172_FailS(F.p2522, y_str("a scale beyond this implementation: fixed-point scales are fractions of 64-bit integers", 87));
}
{ rt_int rv5424 = rt_range(rt_mul(F.p2520, F.p2521), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return rv5424; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2527_PowChk(rt_int a_p2528, rt_int a_p2529, rt_int a_p2530) {
struct yf2531 F;
memset((void *)&F, 0, sizeof F);
F.p2528 = a_p2528;
F.p2529 = a_p2529;
F.p2530 = a_p2530;
F.v5430 = INT64_C(1);
F.lo5435 = INT64_C(1);
F.hi5436 = F.p2529;
{ rt_int hi5440 = F.hi5436;
for (rt_int i5439 = F.lo5435; i5439 <= hi5440; i5439++) { F.c_5438 = i5439;
F.v5430 = yr2519_MulChk(F.v5430, F.p2528, F.p2530);
if (i5439 == hi5440) break;
}}
{ rt_int rv5441 = F.v5430;
return rv5441; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2535_ScaleRatio(void * a_p2536, void * a_p2537, rt_int * a_p2538, rt_int * a_p2539, rt_int * a_p2540) {
struct yf2541 F;
memset((void *)&F, 0, sizeof F);
F.p2536 = a_p2536;
F.p2537 = a_p2537;
F.p2538_o = a_p2538;
F.p2539_o = a_p2539;
F.p2540_o = a_p2540;
F.p2538 = yr1055_T(y_str("1", 1));
F.p2539 = yr1055_T(y_str("1", 1));
F.p2540 = 1;
if ((((((*(yR104 *)rt_nil_check(F.p2536))).f_fsd == INT64_C(0))) || ((((*(yR104 *)rt_nil_check(F.p2537))).f_fsd == INT64_C(0))))) {
(*F.p2538_o) = F.p2538;
(*F.p2539_o) = F.p2539;
(*F.p2540_o) = F.p2540;
return;
}
F.v5449 = yr2512_Gcd(((*(yR104 *)rt_nil_check(F.p2536))).f_fsn, ((*(yR104 *)rt_nil_check(F.p2537))).f_fsn);
F.v5451 = yr2512_Gcd(((*(yR104 *)rt_nil_check(F.p2536))).f_fsd, ((*(yR104 *)rt_nil_check(F.p2537))).f_fsd);
F.v5453 = rt_range(rt_div(((*(yR104 *)rt_nil_check(F.p2536))).f_fsn, F.v5449), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5455 = rt_range(rt_div(((*(yR104 *)rt_nil_check(F.p2537))).f_fsd, F.v5451), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5457 = rt_range(rt_div(((*(yR104 *)rt_nil_check(F.p2536))).f_fsd, F.v5451), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5459 = rt_range(rt_div(((*(yR104 *)rt_nil_check(F.p2537))).f_fsn, F.v5449), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.p2540 = (((((F.v5453 == INT64_C(1))) && ((F.v5455 == INT64_C(1)))) && ((F.v5457 == INT64_C(1)))) && ((F.v5459 == INT64_C(1))));
F.p2538 = yr2545_Factor(F.v5453, F.v5455);
F.p2539 = yr2545_Factor(F.v5457, F.v5459);
(*F.p2538_o) = F.p2538;
(*F.p2539_o) = F.p2539;
(*F.p2540_o) = F.p2540;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2545_Factor(rt_int a_p2546, rt_int a_p2547) {
struct yf2548 F;
memset((void *)&F, 0, sizeof F);
F.p2546 = a_p2546;
F.p2547 = a_p2547;
yr1020_SB();
yr1031_SA(y_str("((yfix)INT64_C(", 15));
yr1044_SI(F.p2546);
yr1031_SA(y_str(")", 1));
if ((!(F.p2547 == INT64_C(1)))) {
yr1031_SA(y_str(" * INT64_C(", 11));
yr1044_SI(F.p2547);
yr1031_SA(y_str(")", 1));
}
yr1031_SA(y_str(")", 1));
{ rt_int rv5482 = yr1050_SE();
return rv5482; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2552_SetScale(void * a_p2553, rt_int a_p2554, rt_int a_p2555) {
struct yf2556 F;
memset((void *)&F, 0, sizeof F);
F.p2553 = a_p2553;
F.p2554 = a_p2554;
F.p2555 = a_p2555;
F.v5488 = yr2512_Gcd(F.p2554, F.p2555);
((*(yR104 *)rt_nil_check(F.p2553))).f_fsn = rt_range(rt_div(F.p2554, F.v5488), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR104 *)rt_nil_check(F.p2553))).f_fsd = rt_range(rt_div(F.p2555, F.v5488), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((*(yR104 *)rt_nil_check(F.p2553))).f_fsd < INT64_C(0))) {
((*(yR104 *)rt_nil_check(F.p2553))).f_fsn = rt_range(rt_neg(((*(yR104 *)rt_nil_check(F.p2553))).f_fsn), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR104 *)rt_nil_check(F.p2553))).f_fsd = rt_range(rt_neg(((*(yR104 *)rt_nil_check(F.p2553))).f_fsd), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2560_Qualify(void * a_p2561, void * a_p2562) {
struct yf2563 F;
memset((void *)&F, 0, sizeof F);
F.p2561 = a_p2561;
F.p2562 = a_p2562;
if ((((*(yR104 *)rt_nil_check(F.p2561))).f_kind == v801)) {
if ((((*(yR99 *)rt_nil_check(F.p2562))).f_c == ((void *)0))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2562))).f_line, y_str("FIXED needs SCALE (VI.A.1.b)", 28));
}
yr2764_ManifestFix(((*(yR99 *)rt_nil_check(F.p2562))).f_c, &F.v5510, &F.v5516, &F.v5518);
if (((!F.v5510) || ((F.v5516 <= INT64_C(0))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2562))).f_line, y_str("SCALE is a positive manifest constant (VI.A.1.b, VI.C)", 54));
}
((*(yR104 *)rt_nil_check(F.p2561))).f_fsn = F.v5516;
((*(yR104 *)rt_nil_check(F.p2561))).f_fsd = F.v5518;
yr1020_SB();
yr1044_SI(F.v5516);
yr1031_SA(y_str("/", 1));
yr1044_SI(F.v5518);
((*(yR104 *)rt_nil_check(F.p2561))).f_scale = yr1050_SE();
}
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p2562))).f_a, F.p2561, &F.v5498, &F.v5506);
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p2562))).f_b, F.p2561, &F.v5500, &F.v5508);
F.v5506 = yr2498_AdoptLiteral(((*(yR99 *)rt_nil_check(F.p2562))).f_a, F.v5506, F.p2561);
F.v5508 = yr2498_AdoptLiteral(((*(yR99 *)rt_nil_check(F.p2562))).f_b, F.v5508, F.p2561);
if ((((*(yR104 *)rt_nil_check(F.p2561))).f_kind == v801)) {
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p2562))).f_line, F.p2561, F.v5506);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p2562))).f_line, F.p2561, F.v5508);
yr2535_ScaleRatio(F.v5506, F.p2561, &F.v5502, &F.v5504, &F.v5512);
((*(yR104 *)rt_nil_check(F.p2561))).f_lo = yr3194_Join(yr1055_T(y_str("y_fix_bound(", 12)), F.v5498, yr3194_Join(yr1055_T(y_str(", ", 2)), F.v5502, yr3194_Join(yr1055_T(y_str(", ", 2)), F.v5504, yr1055_T(y_str(", 1)", 4)))));
yr2535_ScaleRatio(F.v5508, F.p2561, &F.v5502, &F.v5504, &F.v5512);
((*(yR104 *)rt_nil_check(F.p2561))).f_hi = yr3194_Join(yr1055_T(y_str("y_fix_bound(", 12)), F.v5500, yr3194_Join(yr1055_T(y_str(", ", 2)), F.v5502, yr3194_Join(yr1055_T(y_str(", ", 2)), F.v5504, yr1055_T(y_str(", 0)", 4)))));
((*(yR104 *)rt_nil_check(F.p2561))).f_dname = INT64_C(0);
yr2478_StoreBounds(F.p2561, y_str("yfix", 4));
((*(yR104 *)rt_nil_check(F.p2561))).f_abstract = 0;
return;
}
if ((((*(yR104 *)rt_nil_check(F.p2561))).f_kind == v804)) {
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p2562))).f_line, F.p2561, F.v5506);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p2562))).f_line, F.p2561, F.v5508);
((*(yR104 *)rt_nil_check(F.p2561))).f_lo = F.v5498;
((*(yR104 *)rt_nil_check(F.p2561))).f_hi = F.v5500;
((*(yR104 *)rt_nil_check(F.p2561))).f_dname = INT64_C(0);
if ((!((yr2472_IsLiteralNode(((*(yR99 *)rt_nil_check(F.p2562))).f_a) && yr2472_IsLiteralNode(((*(yR99 *)rt_nil_check(F.p2562))).f_b))))) {
yr2478_StoreBounds(F.p2561, y_str("double", 6));
}
if ((((*(yR99 *)rt_nil_check(F.p2562))).f_d == ((void *)0))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2562))).f_line, y_str("FLOATING needs PRECISION (VI.A.1.c)", 35));
}
yr2698_Manifest(((*(yR99 *)rt_nil_check(F.p2562))).f_d, &F.v5510, &F.v5514);
if ((!F.v5510)) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2562))).f_line, y_str("PRECISION is a manifest constant", 32));
}
if ((((F.v5514 < INT64_C(1))) || ((F.v5514 > INT64_C(15))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2562))).f_line, y_str("PRECISION beyond this implementation: its floating point holds 15 decimal digits (Appendix C)", 93));
}
yr1020_SB();
yr1044_SI(F.v5514);
((*(yR104 *)rt_nil_check(F.p2561))).f_prec = yr1050_SE();
((*(yR104 *)rt_nil_check(F.p2561))).f_abstract = 0;
return;
}
if ((!yr2356_IsDiscrete(F.p2561))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2562))).f_line, y_str("only a scalar or integer representation takes a range", 53));
}
if ((((!(((*(yR99 *)rt_nil_check(F.p2562))).f_c == ((void *)0)))) || ((!(((*(yR99 *)rt_nil_check(F.p2562))).f_d == ((void *)0)))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2562))).f_line, y_str("SCALE and PRECISION qualify numbers", 35));
}
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p2562))).f_line, F.p2561, F.v5506);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p2562))).f_line, F.p2561, F.v5508);
((*(yR104 *)rt_nil_check(F.p2561))).f_lo = F.v5498;
((*(yR104 *)rt_nil_check(F.p2561))).f_hi = F.v5500;
yr2698_Manifest(((*(yR99 *)rt_nil_check(F.p2562))).f_a, &F.v5510, &((*(yR104 *)rt_nil_check(F.p2561))).f_mlo);
((*(yR104 *)rt_nil_check(F.p2561))).f_hasm = F.v5510;
yr2698_Manifest(((*(yR99 *)rt_nil_check(F.p2562))).f_b, &F.v5510, &((*(yR104 *)rt_nil_check(F.p2561))).f_mhi);
((*(yR104 *)rt_nil_check(F.p2561))).f_hasm = (((*(yR104 *)rt_nil_check(F.p2561))).f_hasm && F.v5510);
((*(yR104 *)rt_nil_check(F.p2561))).f_abstract = 0;
((*(yR104 *)rt_nil_check(F.p2561))).f_dname = INT64_C(0);
if ((!((*(yR104 *)rt_nil_check(F.p2561))).f_hasm)) {
yr2478_StoreBounds(F.p2561, y_str("rt_int", 6));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2567_DefineLits(void * a_p2568) {
struct yf2569 F;
memset((void *)&F, 0, sizeof F);
F.p2568 = a_p2568;
F.v5550 = ((*(yR104 *)rt_nil_check(F.p2568))).f_lits;
F.v5554 = INT64_C(0);
while ((!(F.v5550 == ((void *)0)))) {
if ((!(yr2232_Find(((*(yR99 *)rt_nil_check(F.v5550))).f_name) == ((void *)0)))) {
F.v5552 = yr2232_Find(((*(yR99 *)rt_nil_check(F.v5550))).f_name);
if ((((!(((*(yR119 *)rt_nil_check(F.v5552))).f_kind == v867))) && ((((*(yR119 *)rt_nil_check(F.v5552))).f_depth == v1267)))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.v5550))).f_line, ((*(yR99 *)rt_nil_check(F.v5550))).f_name, y_str(" is declared twice in this scope", 32));
}
}
F.v5552 = yr2202_NewSym(v867, ((*(yR99 *)rt_nil_check(F.v5550))).f_name);
((*(yR119 *)rt_nil_check(F.v5552))).f_rep = F.p2568;
((*(yR119 *)rt_nil_check(F.v5552))).f_mval = F.v5554;
((*(yR119 *)rt_nil_check(F.v5552))).f_hasmv = 1;
yr2304_Define(F.v5552, ((*(yR99 *)rt_nil_check(F.v5550))).f_line);
F.v5554 = rt_range(rt_add(F.v5554, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5550 = ((*(yR99 *)rt_nil_check(F.v5550))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2573_SetRange(void * a_p2574, rt_int a_p2575, rt_int a_p2576) {
struct yf2577 F;
memset((void *)&F, 0, sizeof F);
F.p2574 = a_p2574;
F.p2575 = a_p2575;
F.p2576 = a_p2576;
yr1020_SB();
yr1044_SI(F.p2575);
((*(yR104 *)rt_nil_check(F.p2574))).f_lo = yr1050_SE();
yr1020_SB();
yr1044_SI(F.p2576);
((*(yR104 *)rt_nil_check(F.p2574))).f_hi = yr1050_SE();
((*(yR104 *)rt_nil_check(F.p2574))).f_mlo = F.p2575;
((*(yR104 *)rt_nil_check(F.p2574))).f_mhi = F.p2576;
((*(yR104 *)rt_nil_check(F.p2574))).f_hasm = 1;
((*(yR104 *)rt_nil_check(F.p2574))).f_dname = INT64_C(0);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2581_NewTid(rt_int a_p2582) {
struct yf2583 F;
memset((void *)&F, 0, sizeof F);
F.p2582 = a_p2582;
F.v5569 = yr1189_NewSerial();
yr1020_SB();
if ((!(F.p2582 == INT64_C(0)))) {
yr1038_ST(F.p2582);
} else {
yr1031_SA(y_str("anonymous", 9));
}
yr1031_SA(y_str("#", 1));
yr1044_SI(F.v5569);
{ rt_int rv5573 = yr1050_SE();
return rv5573; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2587_MakeRep(void * a_p2588, rt_int a_p2589, rt_int a_p2590) {
struct yf2591 F;
memset((void *)&F, 0, sizeof F);
F.p2588 = a_p2588;
F.p2589 = a_p2589;
F.p2590 = a_p2590;
F.v5579 = yr2602_MakeRep1(F.p2588, F.p2589, F.p2590);
if ((!(((*(yR99 *)rt_nil_check(F.p2588))).f_text == INT64_C(0)))) {
F.v5581 = yr2337_Real(yr2244_Lookup(((*(yR99 *)rt_nil_check(F.p2588))).f_text, ((*(yR99 *)rt_nil_check(F.p2588))).f_line));
if (((!yr2595_Conforms(((*(yR119 *)rt_nil_check(F.v5581))).f_rep, F.v5579)) || ((((((*(yR99 *)rt_nil_check(F.p2588))).f_kind == v666)) && ((!(((*(yR104 *)rt_nil_check(F.v5579))).f_tid == ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5581))).f_rep))).f_tid))))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2588))).f_line, ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5581))).f_rep))).f_tname, y_str(": the concrete type is not a representation of this type (rule 61, VII.G)", 73));
}
}
{ void * rv5584 = F.v5579;
return rv5584; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2595_Conforms(void * a_p2596, void * a_p2597) {
struct yf2598 F;
memset((void *)&F, 0, sizeof F);
F.p2596 = a_p2596;
F.p2597 = a_p2597;
if ((!(((*(yR104 *)rt_nil_check(F.p2596))).f_kind == ((*(yR104 *)rt_nil_check(F.p2597))).f_kind))) {
{ rt_int rv5601 = 0;
return rv5601; }
}
if ((((*(yR104 *)rt_nil_check(F.p2596))).f_kind == v819)) {
F.v5589 = ((*(yR104 *)rt_nil_check(F.p2596))).f_fields;
F.v5591 = ((*(yR104 *)rt_nil_check(F.p2597))).f_fields;
while ((((!(F.v5589 == ((void *)0)))) && ((!(F.v5591 == ((void *)0)))))) {
if (((((!(((*(yR109 *)rt_nil_check(F.v5589))).f_name == ((*(yR109 *)rt_nil_check(F.v5591))).f_name))) || ((!(((*(yR109 *)rt_nil_check(F.v5589))).f_isconst == ((*(yR109 *)rt_nil_check(F.v5591))).f_isconst)))) || ((!(((*(yR109 *)rt_nil_check(F.v5589))).f_variant == ((*(yR109 *)rt_nil_check(F.v5591))).f_variant))))) {
{ rt_int rv5603 = 0;
return rv5603; }
}
if ((!yr2423_SameType(((*(yR109 *)rt_nil_check(F.v5589))).f_rep, ((*(yR109 *)rt_nil_check(F.v5591))).f_rep))) {
{ rt_int rv5605 = 0;
return rv5605; }
}
F.v5589 = ((*(yR109 *)rt_nil_check(F.v5589))).f_next;
F.v5591 = ((*(yR109 *)rt_nil_check(F.v5591))).f_next;
}
{ rt_int rv5606 = (((F.v5589 == ((void *)0))) && ((F.v5591 == ((void *)0))));
return rv5606; }
}
if ((((*(yR104 *)rt_nil_check(F.p2596))).f_kind == v816)) {
if ((!(((*(yR104 *)rt_nil_check(F.p2596))).f_nidx == ((*(yR104 *)rt_nil_check(F.p2597))).f_nidx))) {
{ rt_int rv5608 = 0;
return rv5608; }
}
F.v5593 = ((*(yR104 *)rt_nil_check(F.p2596))).f_idx;
F.v5595 = ((*(yR104 *)rt_nil_check(F.p2597))).f_idx;
while ((!(F.v5593 == ((void *)0)))) {
if ((!yr2465_Identical(F.v5593, F.v5595))) {
{ rt_int rv5610 = 0;
return rv5610; }
}
F.v5593 = ((*(yR104 *)rt_nil_check(F.v5593))).f_link;
F.v5595 = ((*(yR104 *)rt_nil_check(F.v5595))).f_link;
}
{ rt_int rv5611 = yr2423_SameType(((*(yR104 *)rt_nil_check(F.p2596))).f_elem, ((*(yR104 *)rt_nil_check(F.p2597))).f_elem);
return rv5611; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2596))).f_kind == v810)) || ((((*(yR104 *)rt_nil_check(F.p2596))).f_kind == v813)))) {
if ((!(((*(yR104 *)rt_nil_check(F.p2596))).f_nlits == ((*(yR104 *)rt_nil_check(F.p2597))).f_nlits))) {
{ rt_int rv5613 = 0;
return rv5613; }
}
F.v5597 = ((*(yR104 *)rt_nil_check(F.p2596))).f_lits;
F.v5599 = ((*(yR104 *)rt_nil_check(F.p2597))).f_lits;
while ((((!(F.v5597 == ((void *)0)))) && ((!(F.v5599 == ((void *)0)))))) {
if ((((!(((*(yR99 *)rt_nil_check(F.v5597))).f_name == ((*(yR99 *)rt_nil_check(F.v5599))).f_name))) || (!yr1082_TEq(((*(yR99 *)rt_nil_check(F.v5597))).f_text, ((*(yR99 *)rt_nil_check(F.v5599))).f_text)))) {
{ rt_int rv5615 = 0;
return rv5615; }
}
F.v5597 = ((*(yR99 *)rt_nil_check(F.v5597))).f_next;
F.v5599 = ((*(yR99 *)rt_nil_check(F.v5599))).f_next;
}
{ rt_int rv5617 = 1;
return rv5617; }
}
if (((((((*(yR104 *)rt_nil_check(F.p2596))).f_kind == v828)) || ((((*(yR104 *)rt_nil_check(F.p2596))).f_kind == v825))) || ((((*(yR104 *)rt_nil_check(F.p2596))).f_kind == v822)))) {
if ((((((*(yR104 *)rt_nil_check(F.p2596))).f_elem == ((void *)0))) || ((((*(yR104 *)rt_nil_check(F.p2597))).f_elem == ((void *)0))))) {
{ rt_int rv5619 = 1;
return rv5619; }
}
{ rt_int rv5620 = yr2423_SameType(((*(yR104 *)rt_nil_check(F.p2596))).f_elem, ((*(yR104 *)rt_nil_check(F.p2597))).f_elem);
return rv5620; }
}
{ rt_int rv5622 = 1;
return rv5622; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2602_MakeRep1(void * a_p2603, rt_int a_p2604, rt_int a_p2605) {
struct yf2606 F;
memset((void *)&F, 0, sizeof F);
F.p2603 = a_p2603;
F.p2604 = a_p2604;
F.p2605 = a_p2605;
F.v5638 = ((*(yR99 *)rt_nil_check(F.p2603))).f_kind;
F.v5642 = INT64_C(0);
F.v5644 = F.p2604;
if ((!(((*(yR99 *)rt_nil_check(F.p2603))).f_text == INT64_C(0)))) {
F.v5636 = yr2337_Real(yr2244_Lookup(((*(yR99 *)rt_nil_check(F.p2603))).f_text, ((*(yR99 *)rt_nil_check(F.p2603))).f_line));
if ((((!(((*(yR119 *)rt_nil_check(F.v5636))).f_kind == v864))) && ((!(((*(yR119 *)rt_nil_check(F.v5636))).f_kind == v861))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2603))).f_line, ((*(yR99 *)rt_nil_check(F.p2603))).f_text, y_str(" is not a type", 14));
}
F.v5642 = ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5636))).f_rep))).f_tid;
F.v5644 = ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5636))).f_rep))).f_tname;
}
if ((F.v5638 == v666)) {
F.v5636 = yr2337_Real(yr2244_Lookup(((*(yR99 *)rt_nil_check(F.p2603))).f_name, ((*(yR99 *)rt_nil_check(F.p2603))).f_line));
if ((((!(((*(yR119 *)rt_nil_check(F.v5636))).f_kind == v864))) && ((!(((*(yR119 *)rt_nil_check(F.v5636))).f_kind == v861))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2603))).f_line, ((*(yR99 *)rt_nil_check(F.p2603))).f_name, y_str(" is not a representation", 24));
}
F.v5628 = ((*(yR119 *)rt_nil_check(F.v5636))).f_rep;
if ((!(((*(yR99 *)rt_nil_check(F.p2603))).f_a == ((void *)0)))) {
F.v5628 = yr2350_CopyRep(F.v5628);
yr2560_Qualify(F.v5628, ((*(yR99 *)rt_nil_check(F.p2603))).f_a);
}
{ void * rv5649 = F.v5628;
return rv5649; }
}
if ((F.v5642 == INT64_C(0))) {
F.v5642 = yr2581_NewTid(F.p2604);
if ((F.v5644 == INT64_C(0))) {
F.v5644 = F.v5642;
}
}
if ((F.v5638 == v669)) {
F.v5628 = yr2343_NewRep(v810, F.v5642);
((*(yR104 *)rt_nil_check(F.v5628))).f_tname = F.v5644;
((*(yR104 *)rt_nil_check(F.v5628))).f_ordered = (((*(yR99 *)rt_nil_check(F.p2603))).f_flag == INT64_C(1));
((*(yR104 *)rt_nil_check(F.v5628))).f_lits = ((*(yR99 *)rt_nil_check(F.p2603))).f_a;
((*(yR104 *)rt_nil_check(F.v5628))).f_nlits = yr1903_Count(((*(yR99 *)rt_nil_check(F.p2603))).f_a);
yr2573_SetRange(F.v5628, INT64_C(0), rt_range(rt_sub(((*(yR104 *)rt_nil_check(F.v5628))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr2567_DefineLits(F.v5628);
if ((!(((*(yR99 *)rt_nil_check(F.p2603))).f_b == ((void *)0)))) {
yr2560_Qualify(F.v5628, ((*(yR99 *)rt_nil_check(F.p2603))).f_b);
}
{ void * rv5656 = F.v5628;
return rv5656; }
}
if ((F.v5638 == v672)) {
F.v5628 = yr2343_NewRep(v813, F.v5642);
((*(yR104 *)rt_nil_check(F.v5628))).f_tname = F.v5644;
((*(yR104 *)rt_nil_check(F.v5628))).f_ordered = 1;
((*(yR104 *)rt_nil_check(F.v5628))).f_lits = ((*(yR99 *)rt_nil_check(F.p2603))).f_a;
((*(yR104 *)rt_nil_check(F.v5628))).f_nlits = yr1903_Count(((*(yR99 *)rt_nil_check(F.p2603))).f_a);
if ((((*(yR104 *)rt_nil_check(F.v5628))).f_nlits > INT64_C(256))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2603))).f_line, y_str("this implementation takes alphabets of up to 256 characters", 59));
}
yr2573_SetRange(F.v5628, INT64_C(0), rt_range(rt_sub(((*(yR104 *)rt_nil_check(F.v5628))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((!(((*(yR99 *)rt_nil_check(F.p2603))).f_b == ((void *)0)))) {
yr2560_Qualify(F.v5628, ((*(yR99 *)rt_nil_check(F.p2603))).f_b);
}
{ void * rv5663 = F.v5628;
return rv5663; }
}
if ((F.v5638 == v675)) {
F.v5628 = yr2343_NewRep(v816, F.v5642);
((*(yR104 *)rt_nil_check(F.v5628))).f_tname = F.v5644;
F.v5640 = ((*(yR99 *)rt_nil_check(F.p2603))).f_a;
F.v5634 = ((void *)0);
while ((!(F.v5640 == ((void *)0)))) {
F.v5632 = yr2350_CopyRep(yr2587_MakeRep(F.v5640, INT64_C(0), 0));
if ((!yr2356_IsDiscrete(F.v5632))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.v5640))).f_line, y_str("an index is an integer or scalar representation", 47));
}
yr2446_CheckRepresented(F.v5632, ((*(yR99 *)rt_nil_check(F.v5640))).f_line);
((*(yR104 *)rt_nil_check(F.v5632))).f_link = ((void *)0);
if ((F.v5634 == ((void *)0))) {
((*(yR104 *)rt_nil_check(F.v5628))).f_idx = F.v5632;
} else {
((*(yR104 *)rt_nil_check(F.v5634))).f_link = F.v5632;
}
F.v5634 = F.v5632;
((*(yR104 *)rt_nil_check(F.v5628))).f_nidx = rt_range(rt_add(((*(yR104 *)rt_nil_check(F.v5628))).f_nidx, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5640 = ((*(yR99 *)rt_nil_check(F.v5640))).f_next;
}
if ((((*(yR104 *)rt_nil_check(F.v5628))).f_nidx > INT64_C(4))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2603))).f_line, y_str("this implementation takes arrays of up to 4 dimensions", 54));
}
((*(yR104 *)rt_nil_check(F.v5628))).f_elem = yr2587_MakeRep(((*(yR99 *)rt_nil_check(F.p2603))).f_b, INT64_C(0), F.p2605);
if ((!F.p2605)) {
yr2446_CheckRepresented(((*(yR104 *)rt_nil_check(F.v5628))).f_elem, ((*(yR99 *)rt_nil_check(F.p2603))).f_line);
yr2622_BuildArrayDesc(F.v5628);
} else {
((*(yR104 *)rt_nil_check(F.v5628))).f_abstract = ((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.v5628))).f_elem))).f_abstract;
if ((!((*(yR104 *)rt_nil_check(F.v5628))).f_abstract)) {
yr2622_BuildArrayDesc(F.v5628);
}
}
((*(yR104 *)rt_nil_check(F.v5628))).f_deep = 1;
{ void * rv5673 = F.v5628;
return rv5673; }
}
if ((F.v5638 == v678)) {
F.v5628 = yr2343_NewRep(v819, F.v5642);
((*(yR104 *)rt_nil_check(F.v5628))).f_tname = F.v5644;
yr2652_MakeRecord(F.v5628, F.p2603, F.p2605);
{ void * rv5674 = F.v5628;
return rv5674; }
}
if (((((F.v5638 == v684)) || ((F.v5638 == v681))) || ((F.v5638 == v687)))) {
if ((F.v5638 == v684)) {
F.v5628 = yr2343_NewRep(v822, F.v5642);
((*(yR104 *)rt_nil_check(F.v5628))).f_tname = F.v5644;
if (((((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2603))).f_a))).f_kind == v666)) && ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2603))).f_a))).f_a == ((void *)0)))) && ((yr2232_Find(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2603))).f_a))).f_name) == ((void *)0))))) {
((*(yR104 *)rt_nil_check(F.v5628))).f_forward = ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2603))).f_a))).f_name;
((*(yR104 *)rt_nil_check(F.v5628))).f_fwdscope = v1267;
F.v5640 = yr1888_NewNode(v663, ((*(yR99 *)rt_nil_check(F.p2603))).f_line);
((*(yR99 *)rt_nil_check(F.v5640))).f_rep = F.v5628;
((*(yR99 *)rt_nil_check(F.v5640))).f_next = v1358;
v1358 = F.v5640;
{ void * rv5675 = F.v5628;
return rv5675; }
}
((*(yR104 *)rt_nil_check(F.v5628))).f_elem = yr2587_MakeRep(((*(yR99 *)rt_nil_check(F.p2603))).f_a, INT64_C(0), 0);
{ void * rv5678 = F.v5628;
return rv5678; }
}
if ((F.v5638 == v681)) {
F.v5628 = yr2343_NewRep(v825, F.v5642);
((*(yR104 *)rt_nil_check(F.v5628))).f_tname = F.v5644;
((*(yR104 *)rt_nil_check(F.v5628))).f_elem = yr2587_MakeRep(((*(yR99 *)rt_nil_check(F.p2603))).f_a, INT64_C(0), F.p2605);
{ void * rv5680 = F.v5628;
return rv5680; }
}
F.v5628 = yr2343_NewRep(v828, F.v5642);
((*(yR104 *)rt_nil_check(F.v5628))).f_tname = F.v5644;
((*(yR104 *)rt_nil_check(F.v5628))).f_elem = yr2587_MakeRep(((*(yR99 *)rt_nil_check(F.p2603))).f_a, INT64_C(0), 0);
if ((!yr2356_IsDiscrete(((*(yR104 *)rt_nil_check(F.v5628))).f_elem))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2603))).f_line, y_str("a set is of an integer or scalar representation", 47));
}
yr2446_CheckRepresented(((*(yR104 *)rt_nil_check(F.v5628))).f_elem, ((*(yR99 *)rt_nil_check(F.p2603))).f_line);
{ void * rv5684 = F.v5628;
return rv5684; }
}
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2603))).f_line, y_str("this representation is not translated", 37));
{ void * rv5686 = ((void *)0);
return rv5686; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2610_ResolvePending(rt_int a_p2611, void * a_p2612) {
struct yf2613 F;
memset((void *)&F, 0, sizeof F);
F.p2611 = a_p2611;
F.p2612 = a_p2612;
F.v5691 = v1358;
F.v5693 = ((void *)0);
while ((!(F.v5691 == ((void *)0)))) {
if ((((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v5691))).f_rep))).f_forward == F.p2611)) {
((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v5691))).f_rep))).f_elem = F.p2612;
((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v5691))).f_rep))).f_forward = INT64_C(0);
if ((F.v5693 == ((void *)0))) {
v1358 = ((*(yR99 *)rt_nil_check(F.v5691))).f_next;
} else {
((*(yR99 *)rt_nil_check(F.v5693))).f_next = ((*(yR99 *)rt_nil_check(F.v5691))).f_next;
}
} else {
F.v5693 = F.v5691;
}
F.v5691 = ((*(yR99 *)rt_nil_check(F.v5691))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2617_CheckPending(void) {
struct yf2618 F;
memset((void *)&F, 0, sizeof F);
F.v5697 = v1358;
while ((!(F.v5697 == ((void *)0)))) {
if ((((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v5697))).f_rep))).f_fwdscope >= v1267)) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.v5697))).f_line, ((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v5697))).f_rep))).f_forward, y_str(" is named by a pointer but not declared", 39));
}
F.v5697 = ((*(yR99 *)rt_nil_check(F.v5697))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2622_BuildArrayDesc(void * a_p2623) {
struct yf2624 F;
memset((void *)&F, 0, sizeof F);
F.p2623 = a_p2623;
yr2417_NewDesc(F.p2623);
yr1020_SB();
yr1031_SA(y_str("{ rt_int lo[", 12));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2623))).f_nidx);
yr1031_SA(y_str("] = {", 5));
F.v5702 = ((*(yR104 *)rt_nil_check(F.p2623))).f_idx;
F.v5706 = 1;
while ((!(F.v5702 == ((void *)0)))) {
if ((!F.v5706)) {
yr1031_SA(y_str(", ", 2));
}
F.v5706 = 0;
yr1038_ST(yr2486_LoText(F.v5702));
F.v5702 = ((*(yR104 *)rt_nil_check(F.v5702))).f_link;
}
yr1031_SA(y_str("}, hi[", 6));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2623))).f_nidx);
yr1031_SA(y_str("] = {", 5));
F.v5702 = ((*(yR104 *)rt_nil_check(F.p2623))).f_idx;
F.v5706 = 1;
while ((!(F.v5702 == ((void *)0)))) {
if ((!F.v5706)) {
yr1031_SA(y_str(", ", 2));
}
F.v5706 = 0;
yr1038_ST(yr2492_HiText(F.v5702));
F.v5702 = ((*(yR104 *)rt_nil_check(F.v5702))).f_link;
}
yr1031_SA(y_str("}; y_desc_array(", 16));
yr1038_ST(yr2411_DescOf(F.p2623));
yr1031_SA(y_str(", ", 2));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2623))).f_nidx);
yr1031_SA(y_str(", lo, hi, ", 10));
yr1038_ST(yr2411_DescOf(((*(yR104 *)rt_nil_check(F.p2623))).f_elem));
yr1031_SA(y_str("); }", 4));
F.v5704 = yr1050_SE();
yr1126_Emit(F.v5704);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2628_AddField(void * a_p2629, void * * a_p2630, rt_int a_p2631, void * a_p2632, rt_int a_p2633, rt_int a_p2634, void * a_p2635, rt_int a_p2636) {
struct yf2637 F;
memset((void *)&F, 0, sizeof F);
F.p2629 = a_p2629;
F.p2630 = a_p2630;
F.p2631 = a_p2631;
F.p2632 = a_p2632;
F.p2633 = a_p2633;
F.p2634 = a_p2634;
F.p2635 = a_p2635;
F.p2636 = a_p2636;
F.v5731 = ((*(yR104 *)rt_nil_check(F.p2629))).f_fields;
while ((!(F.v5731 == ((void *)0)))) {
if ((((*(yR109 *)rt_nil_check(F.v5731))).f_name == F.p2631)) {
yr1180_FailN(F.p2636, F.p2631, y_str(" is a component twice", 21));
}
F.v5731 = ((*(yR109 *)rt_nil_check(F.v5731))).f_next;
}
({ F.v5731 = rt_alloc(sizeof(yR109)); });
(*(yR109 *)rt_nil_check(F.v5731)) = ((yR109){ .f_name = F.p2631, .f_rep = F.p2632, .f_isconst = F.p2633, .f_variant = F.p2634, .f_labels = F.p2635, .f_next = ((void *)0) });
if (((*F.p2630) == ((void *)0))) {
((*(yR104 *)rt_nil_check(F.p2629))).f_fields = F.v5731;
} else {
((*(yR109 *)rt_nil_check((*F.p2630)))).f_next = F.v5731;
}
(*F.p2630) = F.v5731;
if (yr2380_Deep(F.p2632)) {
((*(yR104 *)rt_nil_check(F.p2629))).f_deep = 1;
}
if (((*(yR104 *)rt_nil_check(F.p2632))).f_abstract) {
((*(yR104 *)rt_nil_check(F.p2629))).f_abstract = 1;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2641_AddFields(void * a_p2642, void * * a_p2643, void * a_p2644, rt_int a_p2645, void * a_p2646, rt_int a_p2647) {
struct yf2648 F;
memset((void *)&F, 0, sizeof F);
F.p2642 = a_p2642;
F.p2643 = a_p2643;
F.p2644 = a_p2644;
F.p2645 = a_p2645;
F.p2646 = a_p2646;
F.p2647 = a_p2647;
F.v5743 = F.p2644;
F.v5745 = F.p2644;
while ((!(F.v5743 == ((void *)0)))) {
F.v5747 = yr2587_MakeRep(((*(yR99 *)rt_nil_check(F.v5743))).f_b, INT64_C(0), F.p2647);
if ((!F.p2647)) {
yr2446_CheckRepresented(F.v5747, ((*(yR99 *)rt_nil_check(F.v5743))).f_line);
}
F.v5745 = ((*(yR99 *)rt_nil_check(F.v5743))).f_a;
while ((!(F.v5745 == ((void *)0)))) {
yr2628_AddField(F.p2642, &(*F.p2643), ((*(yR99 *)rt_nil_check(F.v5745))).f_name, F.v5747, (((*(yR99 *)rt_nil_check(F.v5743))).f_ival == v264), F.p2645, F.p2646, ((*(yR99 *)rt_nil_check(F.v5745))).f_line);
F.v5745 = ((*(yR99 *)rt_nil_check(F.v5745))).f_next;
}
F.v5743 = ((*(yR99 *)rt_nil_check(F.v5743))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2652_MakeRecord(void * a_p2653, void * a_p2654, rt_int a_p2655) {
struct yf2656 F;
memset((void *)&F, 0, sizeof F);
F.p2653 = a_p2653;
F.p2654 = a_p2654;
F.p2655 = a_p2655;
F.v5754 = ((void *)0);
F.v5762 = INT64_C(0);
F.v5769 = INT64_C(0);
yr2641_AddFields(F.p2653, &F.v5754, ((*(yR99 *)rt_nil_check(F.p2654))).f_a, INT64_C(0), ((void *)0), F.p2655);
if ((!(((*(yR99 *)rt_nil_check(F.p2654))).f_b == ((void *)0)))) {
F.v5756 = ((*(yR99 *)rt_nil_check(F.p2654))).f_b;
F.v5760 = yr2587_MakeRep(((*(yR99 *)rt_nil_check(F.v5756))).f_b, INT64_C(0), 0);
if ((!yr2356_IsDiscrete(F.v5760))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.v5756))).f_line, y_str("the case-selection component is integer or scalar", 49));
}
yr2628_AddField(F.p2653, &F.v5754, ((*(yR99 *)rt_nil_check(F.v5756))).f_name, F.v5760, 1, INT64_C(0), ((void *)0), ((*(yR99 *)rt_nil_check(F.v5756))).f_line);
((*(yR104 *)rt_nil_check(F.p2653))).f_selector = F.v5754;
F.v5758 = ((*(yR99 *)rt_nil_check(F.v5756))).f_a;
while ((!(F.v5758 == ((void *)0)))) {
F.v5762 = rt_range(rt_add(F.v5762, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr2641_AddFields(F.p2653, &F.v5754, ((*(yR99 *)rt_nil_check(F.v5758))).f_b, F.v5762, ((*(yR99 *)rt_nil_check(F.v5758))).f_a, F.p2655);
F.v5758 = ((*(yR99 *)rt_nil_check(F.v5758))).f_next;
}
}
if ((F.p2655 && ((*(yR104 *)rt_nil_check(F.p2653))).f_abstract)) {
return;
}
((*(yR104 *)rt_nil_check(F.p2653))).f_abstract = 0;
((*(yR104 *)rt_nil_check(F.p2653))).f_cname = yr1194_Fresh(y_str("yR", 2));
yr1020_SB();
yr1031_SA(y_str("typedef struct ", 15));
yr1038_ST(((*(yR104 *)rt_nil_check(F.p2653))).f_cname);
yr1031_SA(y_str(" ", 1));
yr1038_ST(((*(yR104 *)rt_nil_check(F.p2653))).f_cname);
yr1031_SA(y_str(";", 1));
F.v5767 = yr1050_SE();
yr1104_Put(&v972, F.v5767);
yr1020_SB();
yr1031_SA(y_str("struct ", 7));
yr1038_ST(((*(yR104 *)rt_nil_check(F.p2653))).f_cname);
yr1031_SA(y_str(" {", 2));
F.v5765 = ((*(yR104 *)rt_nil_check(F.p2653))).f_fields;
while ((!(F.v5765 == ((void *)0)))) {
yr1031_SA(y_str(" ", 1));
yr1038_ST(yr2405_CType(((*(yR109 *)rt_nil_check(F.v5765))).f_rep));
yr1031_SA(y_str(" f_", 3));
yr1038_ST(((*(yR109 *)rt_nil_check(F.v5765))).f_name);
yr1031_SA(y_str(";", 1));
F.v5769 = rt_range(rt_add(F.v5769, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5765 = ((*(yR109 *)rt_nil_check(F.v5765))).f_next;
}
if ((F.v5769 == INT64_C(0))) {
yr1031_SA(y_str(" int empty_;", 12));
}
yr1031_SA(y_str(" };", 3));
F.v5767 = yr1050_SE();
yr1104_Put(&v974, F.v5767);
yr2417_NewDesc(F.p2653);
yr1020_SB();
yr1031_SA(y_str("{ static const size_t o[] = {", 29));
F.v5765 = ((*(yR104 *)rt_nil_check(F.p2653))).f_fields;
while ((!(F.v5765 == ((void *)0)))) {
yr1031_SA(y_str("offsetof(", 9));
yr1038_ST(((*(yR104 *)rt_nil_check(F.p2653))).f_cname);
yr1031_SA(y_str(", f_", 4));
yr1038_ST(((*(yR109 *)rt_nil_check(F.v5765))).f_name);
yr1031_SA(y_str("), ", 3));
F.v5765 = ((*(yR109 *)rt_nil_check(F.v5765))).f_next;
}
yr1031_SA(y_str("0}; const ydesc **f = rt_alloc(", 31));
yr1044_SI(rt_range(rt_add(F.v5769, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1031_SA(y_str(" * sizeof *f);", 14));
F.v5762 = INT64_C(0);
F.v5765 = ((*(yR104 *)rt_nil_check(F.p2653))).f_fields;
while ((!(F.v5765 == ((void *)0)))) {
yr1031_SA(y_str(" f[", 3));
yr1044_SI(F.v5762);
yr1031_SA(y_str("] = ", 4));
yr1038_ST(yr2411_DescOf(((*(yR109 *)rt_nil_check(F.v5765))).f_rep));
yr1031_SA(y_str(";", 1));
F.v5762 = rt_range(rt_add(F.v5762, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5765 = ((*(yR109 *)rt_nil_check(F.v5765))).f_next;
}
yr1031_SA(y_str(" y_desc_record(", 15));
yr1038_ST(yr2411_DescOf(F.p2653));
yr1031_SA(y_str(", sizeof(", 9));
yr1038_ST(((*(yR104 *)rt_nil_check(F.p2653))).f_cname);
yr1031_SA(y_str("), ", 3));
yr1044_SI(F.v5769);
yr1031_SA(y_str(", o, (const ydesc *const *)f); }", 32));
F.v5767 = yr1050_SE();
yr1126_Emit(F.v5767);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2660_FindField(void * a_p2661, rt_int a_p2662) {
struct yf2663 F;
memset((void *)&F, 0, sizeof F);
F.p2661 = a_p2661;
F.p2662 = a_p2662;
F.v5816 = ((*(yR104 *)rt_nil_check(F.p2661))).f_fields;
while ((!(F.v5816 == ((void *)0)))) {
if ((((*(yR109 *)rt_nil_check(F.v5816))).f_name == F.p2662)) {
{ void * rv5817 = F.v5816;
return rv5817; }
}
F.v5816 = ((*(yR109 *)rt_nil_check(F.v5816))).f_next;
}
{ void * rv5818 = ((void *)0);
return rv5818; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2667_CharOrd(void * a_p2668, rt_int a_p2669) {
struct yf2670 F;
memset((void *)&F, 0, sizeof F);
F.p2668 = a_p2668;
F.p2669 = a_p2669;
if ((((*(yR104 *)rt_nil_check(F.p2668))).f_tid == ((*(yR104 *)rt_nil_check(v1340))).f_tid)) {
if ((((rt_int *)(v914).p)[y_ix1(v914, F.p2669)] == INT64_C(1))) {
{ rt_int rv5834 = ((rt_int *)(v959).p)[y_ix1(v959, yr1097_TChar(F.p2669, INT64_C(1)))];
return rv5834; }
}
F.v5825 = INT64_C(0);
F.v5829 = INT64_C(1);
F.lo5840 = INT64_C(1);
F.hi5841 = ((rt_int *)(v914).p)[y_ix1(v914, v1468)];
{ rt_int hi5845 = F.hi5841;
for (rt_int i5844 = F.lo5840; i5844 <= hi5845; i5844++) { F.c_5843 = i5844;
if ((yr1097_TChar(v1468, rt_range(F.c_5843, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 32)) {
F.v5831 = yr1062_Intern(rt_range(rt_add(((rt_int *)(v912).p)[y_ix1(v912, v1468)], (rt_sub(F.v5829, INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub(F.c_5843, F.v5829), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((F.v5831 == F.p2669)) {
if ((F.v5825 < INT64_C(32))) {
{ rt_int rv5852 = F.v5825;
return rv5852; }
}
if ((F.v5825 == INT64_C(32))) {
{ rt_int rv5855 = INT64_C(32);
return rv5855; }
}
if ((F.v5825 == INT64_C(33))) {
{ rt_int rv5858 = INT64_C(127);
return rv5858; }
}
if ((F.v5825 == INT64_C(34))) {
{ rt_int rv5861 = INT64_C(39);
return rv5861; }
}
{ rt_int rv5863 = INT64_C(34);
return rv5863; }
}
F.v5825 = rt_range(rt_add(F.v5825, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5829 = rt_range(rt_add(F.c_5843, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i5844 == hi5845) break;
}}
{ rt_int rv5869 = INT64_C(-1);
return rv5869; }
}
if ((!(((*(yR104 *)rt_nil_check(F.p2668))).f_kind == v813))) {
{ rt_int rv5871 = INT64_C(-1);
return rv5871; }
}
F.v5823 = ((*(yR104 *)rt_nil_check(F.p2668))).f_lits;
F.v5827 = INT64_C(0);
while ((!(F.v5823 == ((void *)0)))) {
if (yr1082_TEq(((*(yR99 *)rt_nil_check(F.v5823))).f_text, F.p2669)) {
{ rt_int rv5873 = F.v5827;
return rv5873; }
}
F.v5827 = rt_range(rt_add(F.v5827, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5823 = ((*(yR99 *)rt_nil_check(F.v5823))).f_next;
}
{ rt_int rv5877 = INT64_C(-1);
return rv5877; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2674_AlphabetFor(void * a_p2675, void * a_p2676) {
struct yf2677 F;
memset((void *)&F, 0, sizeof F);
F.p2675 = a_p2675;
F.p2676 = a_p2676;
F.v5886 = ((void *)0);
F.v5888 = INT64_C(0);
F.v5891 = INT64_C(0);
if ((!(((*(yR99 *)rt_nil_check(F.p2675))).f_d == ((void *)0)))) {
F.v5882 = yr2337_Real(yr2244_Lookup(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2675))).f_d))).f_name, ((*(yR99 *)rt_nil_check(F.p2675))).f_line));
if ((((((!(((*(yR119 *)rt_nil_check(F.v5882))).f_kind == v861))) && ((!(((*(yR119 *)rt_nil_check(F.v5882))).f_kind == v864))))) || ((!(((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5882))).f_rep))).f_kind == v813))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2675))).f_line, ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2675))).f_d))).f_name, y_str(" is not an alphabet", 19));
}
{ void * rv5894 = ((*(yR119 *)rt_nil_check(F.v5882))).f_rep;
return rv5894; }
}
F.v5891 = INT64_C(1);
if ((((((*(yR99 *)rt_nil_check(F.p2675))).f_kind == v765)) || ((yr2667_CharOrd(v1340, ((*(yR99 *)rt_nil_check(F.p2675))).f_text) >= INT64_C(0))))) {
F.v5888 = INT64_C(1);
F.v5886 = v1340;
}
F.v5884 = v1471;
while ((!(F.v5884 == ((void *)0)))) {
F.v5882 = yr2232_Find(((*(yR99 *)rt_nil_check(F.v5884))).f_name);
if ((!(F.v5882 == ((void *)0)))) {
F.v5882 = yr2337_Real(F.v5882);
if ((((((((*(yR119 *)rt_nil_check(F.v5882))).f_kind == v861)) || ((((*(yR119 *)rt_nil_check(F.v5882))).f_kind == v864)))) && ((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5882))).f_rep))).f_tid == ((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v5884))).f_rep))).f_tid)))) {
F.v5891 = rt_range(rt_add(F.v5891, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((((*(yR99 *)rt_nil_check(F.p2675))).f_kind == v762)) && ((yr2667_CharOrd(((*(yR99 *)rt_nil_check(F.v5884))).f_rep, ((*(yR99 *)rt_nil_check(F.p2675))).f_text) >= INT64_C(0))))) {
F.v5888 = rt_range(rt_add(F.v5888, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5886 = ((*(yR99 *)rt_nil_check(F.v5884))).f_rep;
}
}
}
F.v5884 = ((*(yR99 *)rt_nil_check(F.v5884))).f_next;
}
if ((((((*(yR99 *)rt_nil_check(F.p2675))).f_kind == v765)) && ((F.v5891 > INT64_C(1))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2675))).f_line, y_str("a string in a scope with two alphabets is qualified by its alphabet (VI.A.3)", 76));
}
if ((F.v5888 > INT64_C(1))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2675))).f_line, yr3194_Join(yr1055_T(y_str("'", 1)), ((*(yR99 *)rt_nil_check(F.p2675))).f_text, yr1055_T(y_str("'", 1))), y_str(" is a character of two alphabets here: qualify it (VI.A.3)", 58));
}
if ((F.v5886 == ((void *)0))) {
{ void * rv5909 = v1340;
return rv5909; }
}
{ void * rv5910 = F.v5886;
return rv5910; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2681_CharValue(void * a_p2682, rt_int a_p2683, rt_int a_p2684) {
struct yf2685 F;
memset((void *)&F, 0, sizeof F);
F.p2682 = a_p2682;
F.p2683 = a_p2683;
F.p2684 = a_p2684;
F.v5916 = yr2667_CharOrd(F.p2682, F.p2683);
if ((F.v5916 < INT64_C(0))) {
yr1020_SB();
yr1031_SA(y_str("'", 1));
yr1038_ST(F.p2683);
yr1031_SA(y_str("' is not a character of ", 24));
yr1038_ST(((*(yR104 *)rt_nil_check(F.p2682))).f_tname);
F.v5918 = yr1050_SE();
yr1151_Fail(F.p2684, F.v5918);
}
{ rt_int rv5922 = F.v5916;
return rv5922; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2689_StringCodes(void * a_p2690, rt_int a_p2691, rt_int * a_p2692, rt_int a_p2693) {
struct yf2694 F;
memset((void *)&F, 0, sizeof F);
F.p2690 = a_p2690;
F.p2691 = a_p2691;
F.p2692_o = a_p2692;
F.p2693 = a_p2693;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&F.yd_5942, 1, lo, hi, &y_d_int); }
y_init(&F.yd_5942, &F.v5944);
F.p2692 = INT64_C(0);
F.v5929 = INT64_C(1);
while ((F.v5929 <= ((rt_int *)(v914).p)[y_ix1(v914, F.p2691)])) {
F.v5946 = yr1097_TChar(F.p2691, F.v5929);
if ((F.v5946 == 39)) {
F.v5931 = rt_range(rt_add(F.v5929, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1097_TChar(F.p2691, F.v5931) == 39))) {
F.v5931 = rt_range(rt_add(F.v5931, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v5948 = yr1062_Intern(rt_range(rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.p2691)], F.v5929), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v5931, F.v5929)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v5933 = yr2681_CharValue(F.p2690, F.v5948, F.p2693);
F.v5929 = rt_range(rt_add(F.v5931, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v5948 = yr1062_Intern(rt_range(rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.p2691)], (rt_sub(F.v5929, INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), INT64_C(1));
F.v5933 = yr2681_CharValue(F.p2690, F.v5948, F.p2693);
F.v5929 = rt_range(rt_add(F.v5929, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.p2692 >= INT64_C(4096))) {
yr1172_FailS(F.p2693, y_str("string literal too long", 23));
}
F.p2692 = rt_range(rt_add(F.p2692, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(F.v5944).p)[y_ix1(F.v5944, F.p2692)] = F.v5933;
}
yr1020_SB();
yr1025_SC(34);
F.lo5977 = INT64_C(1);
F.hi5978 = F.p2692;
{ rt_int hi5982 = F.hi5978;
for (rt_int i5981 = F.lo5977; i5981 <= hi5982; i5981++) { F.c_5980 = i5981;
F.v5933 = ((rt_int *)(F.v5944).p)[y_ix1(F.v5944, F.c_5980)];
if ((((F.v5933 == INT64_C(34))) || ((F.v5933 == INT64_C(92))))) {
yr1025_SC(92);
yr1025_SC(((unsigned char *)(v970).p)[y_ix1(v970, F.v5933)]);
} else if (((((F.v5933 >= INT64_C(32))) && ((F.v5933 < INT64_C(127)))) && (((((!(F.v5933 == INT64_C(63)))) || ((F.c_5980 == INT64_C(1)))) || ((!(((rt_int *)(F.v5944).p)[y_ix1(F.v5944, rt_sub(F.c_5980, INT64_C(1)))] == INT64_C(63)))))))) {
yr1025_SC(((unsigned char *)(v970).p)[y_ix1(v970, F.v5933)]);
} else {
yr1025_SC(92);
yr1025_SC(((unsigned char *)(v970).p)[y_ix1(v970, rt_add(INT64_C(48), (rt_div(F.v5933, INT64_C(64)))))]);
yr1025_SC(((unsigned char *)(v970).p)[y_ix1(v970, rt_add(INT64_C(48), (rt_mod((rt_div(F.v5933, INT64_C(8))), INT64_C(8)))))]);
yr1025_SC(((unsigned char *)(v970).p)[y_ix1(v970, rt_add(INT64_C(48), (rt_mod(F.v5933, INT64_C(8)))))]);
}
if (i5981 == hi5982) break;
}}
yr1025_SC(34);
{ rt_int rv6009 = yr1050_SE();
(*F.p2692_o) = F.p2692;
return rv6009; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2698_Manifest(void * a_p2699, rt_int * a_p2700, rt_int * a_p2701) {
struct yf2702 F;
memset((void *)&F, 0, sizeof F);
F.p2699 = a_p2699;
F.p2700_o = a_p2700;
F.p2701_o = a_p2701;
F.p2700 = 0;
F.p2701 = INT64_C(0);
if ((((*(yR99 *)rt_nil_check(F.p2699))).f_kind == v753)) {
F.p2700 = 1;
F.p2701 = ((*(yR99 *)rt_nil_check(F.p2699))).f_ival;
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
return;
}
if ((((*(yR99 *)rt_nil_check(F.p2699))).f_kind == v762)) {
F.v6027 = yr2674_AlphabetFor(F.p2699, ((void *)0));
F.p2701 = yr2667_CharOrd(F.v6027, ((*(yR99 *)rt_nil_check(F.p2699))).f_text);
F.p2700 = (F.p2701 >= INT64_C(0));
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
return;
}
if ((((*(yR99 *)rt_nil_check(F.p2699))).f_kind == v771)) {
if ((!(((*(yR99 *)rt_nil_check(F.p2699))).f_d == ((void *)0)))) {
F.v6015 = yr2337_Real(yr2244_Lookup(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2699))).f_d))).f_name, ((*(yR99 *)rt_nil_check(F.p2699))).f_line));
F.v6015 = yr2297_FindLit(((*(yR99 *)rt_nil_check(F.p2699))).f_name, ((*(yR119 *)rt_nil_check(F.v6015))).f_rep);
} else {
F.v6015 = yr2232_Find(((*(yR99 *)rt_nil_check(F.p2699))).f_name);
}
if ((F.v6015 == ((void *)0))) {
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
return;
}
F.v6015 = yr2337_Real(F.v6015);
if ((((((((*(yR119 *)rt_nil_check(F.v6015))).f_kind == v867)) || ((((*(yR119 *)rt_nil_check(F.v6015))).f_kind == v858)))) && ((*(yR119 *)rt_nil_check(F.v6015))).f_hasmv)) {
F.p2700 = 1;
F.p2701 = ((*(yR119 *)rt_nil_check(F.v6015))).f_mval;
}
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
return;
}
if ((((*(yR99 *)rt_nil_check(F.p2699))).f_kind == v795)) {
yr2698_Manifest(((*(yR99 *)rt_nil_check(F.p2699))).f_a, &F.p2700, &F.p2701);
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
return;
}
if ((((*(yR99 *)rt_nil_check(F.p2699))).f_kind == v789)) {
yr2698_Manifest(((*(yR99 *)rt_nil_check(F.p2699))).f_a, &F.p2700, &F.p2701);
F.p2701 = rt_range(rt_neg(F.p2701), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
return;
}
if ((((*(yR99 *)rt_nil_check(F.p2699))).f_kind == v792)) {
yr2698_Manifest(((*(yR99 *)rt_nil_check(F.p2699))).f_a, &F.v6021, &F.v6017);
yr2698_Manifest(((*(yR99 *)rt_nil_check(F.p2699))).f_b, &F.v6023, &F.v6019);
if ((!((F.v6021 && F.v6023)))) {
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
return;
}
F.v6025 = ((*(yR99 *)rt_nil_check(F.p2699))).f_name;
F.p2700 = 1;
if ((F.v6025 == v567)) {
F.p2701 = rt_range(rt_add(F.v6017, F.v6019), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v6025 == v570)) {
F.p2701 = rt_range(rt_sub(F.v6017, F.v6019), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v6025 == v573)) {
F.p2701 = rt_range(rt_mul(F.v6017, F.v6019), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v6025 == v270)) && ((!(F.v6019 == INT64_C(0)))))) {
F.p2701 = rt_range(rt_div(F.v6017, F.v6019), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v6025 == v372)) && ((!(F.v6019 == INT64_C(0)))))) {
F.p2701 = rt_range(rt_mod(F.v6017, F.v6019), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v6025 == v231)) {
F.p2701 = rt_range(rt_mul(F.v6017, F.v6019), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v6025 == v393)) {
F.p2701 = rt_range(rt_sub((rt_add(F.v6017, F.v6019)), (rt_mul(F.v6017, F.v6019))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v6025 == v483)) {
F.p2701 = rt_range(rt_mod((rt_add(F.v6017, F.v6019)), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.p2700 = 0;
}
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
return;
}
if ((((*(yR99 *)rt_nil_check(F.p2699))).f_kind == v786)) {
yr2698_Manifest(((*(yR99 *)rt_nil_check(F.p2699))).f_a, &F.p2700, &F.p2701);
F.p2701 = rt_range(rt_sub(INT64_C(1), F.p2701), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
return;
}
if ((((*(yR99 *)rt_nil_check(F.p2699))).f_kind == v774)) {
yr2706_ManifestStd(F.p2699, &F.p2700, &F.p2701);
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
return;
}
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2706_ManifestStd(void * a_p2707, rt_int * a_p2708, rt_int * a_p2709) {
struct yf2710 F;
memset((void *)&F, 0, sizeof F);
F.p2707 = a_p2707;
F.p2708_o = a_p2708;
F.p2709_o = a_p2709;
F.p2708 = 0;
F.p2709 = INT64_C(0);
F.v6057 = yr2232_Find(((*(yR99 *)rt_nil_check(F.p2707))).f_name);
if ((F.v6057 == ((void *)0))) {
(*F.p2708_o) = F.p2708;
(*F.p2709_o) = F.p2709;
return;
}
F.v6057 = yr2337_Real(F.v6057);
if ((!(((*(yR119 *)rt_nil_check(F.v6057))).f_kind == v885))) {
(*F.p2708_o) = F.p2708;
(*F.p2709_o) = F.p2709;
return;
}
F.v6059 = ((*(yR119 *)rt_nil_check(F.v6057))).f_mval;
if ((((((F.v6059 == v1366)) || ((F.v6059 == v1369))) || ((F.v6059 == v1372))) || ((F.v6059 == v1375)))) {
if ((!(yr1903_Count(((*(yR99 *)rt_nil_check(F.p2707))).f_a) == INT64_C(1)))) {
(*F.p2708_o) = F.p2708;
(*F.p2709_o) = F.p2709;
return;
}
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p2707))).f_a, ((void *)0), &F.v6067, &F.v6069);
if ((!yr2356_IsDiscrete(F.v6069))) {
(*F.p2708_o) = F.p2708;
(*F.p2709_o) = F.p2709;
return;
}
if ((((F.v6059 == v1372)) || ((F.v6059 == v1375)))) {
if ((!(((*(yR104 *)rt_nil_check(F.v6069))).f_elem == ((void *)0)))) {
F.v6069 = ((*(yR104 *)rt_nil_check(F.v6069))).f_elem;
}
if ((!((*(yR104 *)rt_nil_check(F.v6069))).f_hasm)) {
(*F.p2708_o) = F.p2708;
(*F.p2709_o) = F.p2709;
return;
}
F.p2708 = 1;
if ((F.v6059 == v1372)) {
F.p2709 = ((*(yR104 *)rt_nil_check(F.v6069))).f_mlo;
} else {
F.p2709 = ((*(yR104 *)rt_nil_check(F.v6069))).f_mhi;
}
(*F.p2708_o) = F.p2708;
(*F.p2709_o) = F.p2709;
return;
}
yr2698_Manifest(((*(yR99 *)rt_nil_check(F.p2707))).f_a, &F.v6063, &F.p2709);
if ((!F.v6063)) {
(*F.p2708_o) = F.p2708;
(*F.p2709_o) = F.p2709;
return;
}
if ((F.v6059 == v1366)) {
F.p2709 = rt_range(rt_add(F.p2709, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.p2709 = rt_range(rt_sub(F.p2709, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((!(((*(yR104 *)rt_nil_check(F.v6069))).f_elem == ((void *)0)))) {
F.v6069 = ((*(yR104 *)rt_nil_check(F.v6069))).f_elem;
}
if ((((!(((*(yR104 *)rt_nil_check(F.v6069))).f_kind == v798))) && ((((F.p2709 < INT64_C(0))) || ((F.p2709 >= ((*(yR104 *)rt_nil_check(F.v6069))).f_nlits)))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2707))).f_line, ((*(yR99 *)rt_nil_check(F.p2707))).f_name, y_str(" goes beyond the end of the enumeration (XI)", 44));
}
F.p2708 = 1;
(*F.p2708_o) = F.p2708;
(*F.p2709_o) = F.p2709;
return;
}
if ((((F.v6059 == v1360)) || ((F.v6059 == v1363)))) {
if ((!(yr1903_Count(((*(yR99 *)rt_nil_check(F.p2707))).f_a) == INT64_C(2)))) {
(*F.p2708_o) = F.p2708;
(*F.p2709_o) = F.p2709;
return;
}
yr2698_Manifest(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2707))).f_a))).f_next, &F.v6065, &F.v6061);
if ((!F.v6065)) {
(*F.p2708_o) = F.p2708;
(*F.p2709_o) = F.p2709;
return;
}
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p2707))).f_a, ((void *)0), &F.v6067, &F.v6069);
if (((((!(((*(yR104 *)rt_nil_check(F.v6069))).f_kind == v816))) || ((F.v6061 < INT64_C(1)))) || ((F.v6061 > ((*(yR104 *)rt_nil_check(F.v6069))).f_nidx)))) {
(*F.p2708_o) = F.p2708;
(*F.p2709_o) = F.p2709;
return;
}
F.v6071 = ((*(yR104 *)rt_nil_check(F.v6069))).f_idx;
F.lo6088 = INT64_C(2);
F.hi6089 = F.v6061;
{ rt_int hi6093 = F.hi6089;
for (rt_int i6092 = F.lo6088; i6092 <= hi6093; i6092++) { F.c_6091 = i6092;
F.v6071 = ((*(yR104 *)rt_nil_check(F.v6071))).f_link;
if (i6092 == hi6093) break;
}}
if ((!((*(yR104 *)rt_nil_check(F.v6071))).f_hasm)) {
(*F.p2708_o) = F.p2708;
(*F.p2709_o) = F.p2709;
return;
}
F.p2708 = 1;
if ((F.v6059 == v1360)) {
F.p2709 = ((*(yR104 *)rt_nil_check(F.v6071))).f_mlo;
} else {
F.p2709 = ((*(yR104 *)rt_nil_check(F.v6071))).f_mhi;
}
(*F.p2708_o) = F.p2708;
(*F.p2709_o) = F.p2709;
return;
}
(*F.p2708_o) = F.p2708;
(*F.p2709_o) = F.p2709;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2714_NeedsConv(void * a_p2715, void * a_p2716) {
struct yf2717 F;
memset((void *)&F, 0, sizeof F);
F.p2715 = a_p2715;
F.p2716 = a_p2716;
if ((F.p2715 == F.p2716)) {
{ rt_int rv6099 = 0;
return rv6099; }
}
if (yr2356_IsDiscrete(F.p2715)) {
if ((((*(yR104 *)rt_nil_check(F.p2715))).f_lo == INT64_C(0))) {
{ rt_int rv6102 = 0;
return rv6102; }
}
{ rt_int rv6103 = (!((((((*(yR104 *)rt_nil_check(F.p2715))).f_hasm && ((*(yR104 *)rt_nil_check(F.p2716))).f_hasm) && ((((*(yR104 *)rt_nil_check(F.p2715))).f_mlo <= ((*(yR104 *)rt_nil_check(F.p2716))).f_mlo))) && ((((*(yR104 *)rt_nil_check(F.p2716))).f_mhi <= ((*(yR104 *)rt_nil_check(F.p2715))).f_mhi)))));
return rv6103; }
}
if ((((*(yR104 *)rt_nil_check(F.p2715))).f_kind == v804)) {
{ rt_int rv6105 = (!(((*(yR104 *)rt_nil_check(F.p2715))).f_lo == INT64_C(0)));
return rv6105; }
}
if ((((*(yR104 *)rt_nil_check(F.p2715))).f_kind == v801)) {
{ rt_int rv6107 = ((((!(((*(yR104 *)rt_nil_check(F.p2715))).f_lo == INT64_C(0)))) || ((!(((*(yR104 *)rt_nil_check(F.p2715))).f_fsn == ((*(yR104 *)rt_nil_check(F.p2716))).f_fsn)))) || ((!(((*(yR104 *)rt_nil_check(F.p2715))).f_fsd == ((*(yR104 *)rt_nil_check(F.p2716))).f_fsd))));
return rv6107; }
}
if ((((*(yR104 *)rt_nil_check(F.p2715))).f_kind == v819)) {
{ rt_int rv6108 = (((((*(yR104 *)rt_nil_check(F.p2716))).f_kind == v819)) && ((!(((*(yR104 *)rt_nil_check(F.p2715))).f_cname == ((*(yR104 *)rt_nil_check(F.p2716))).f_cname))));
return rv6108; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2715))).f_kind == v816)) || ((((*(yR104 *)rt_nil_check(F.p2715))).f_kind == v837)))) {
if ((((!(((*(yR104 *)rt_nil_check(F.p2716))).f_kind == v816))) && ((!(((*(yR104 *)rt_nil_check(F.p2716))).f_kind == v837))))) {
{ rt_int rv6110 = 0;
return rv6110; }
}
{ rt_int rv6111 = yr2714_NeedsConv(((*(yR104 *)rt_nil_check(F.p2715))).f_elem, ((*(yR104 *)rt_nil_check(F.p2716))).f_elem);
return rv6111; }
}
{ rt_int rv6113 = 0;
return rv6113; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2721_ConvertRecord(rt_int a_p2722, void * a_p2723, void * a_p2724) {
struct yf2725 F;
memset((void *)&F, 0, sizeof F);
F.p2722 = a_p2722;
F.p2723 = a_p2723;
F.p2724 = a_p2724;
F.v6119 = yr1194_Fresh(y_str("cs", 2));
F.v6121 = yr1194_Fresh(y_str("cd", 2));
yr1020_SB();
yr1031_SA(y_str("({ ", 3));
yr1038_ST(yr2405_CType(F.p2724));
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v6119);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(F.p2722);
yr1031_SA(y_str("; ", 2));
yr1038_ST(yr2405_CType(F.p2723));
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v6121);
yr1031_SA(y_str("; memset(&", 10));
yr1038_ST(F.v6121);
yr1031_SA(y_str(", 0, sizeof ", 12));
yr1038_ST(F.v6121);
yr1031_SA(y_str(");", 2));
F.v6123 = ((*(yR104 *)rt_nil_check(F.p2723))).f_fields;
while ((!(F.v6123 == ((void *)0)))) {
F.v6125 = yr2660_FindField(F.p2724, ((*(yR109 *)rt_nil_check(F.v6123))).f_name);
if ((!(F.v6125 == ((void *)0)))) {
yr1031_SA(y_str(" ", 1));
if ((!(((*(yR109 *)rt_nil_check(F.v6125))).f_variant == INT64_C(0)))) {
yr1031_SA(y_str("if (", 4));
yr1038_ST(yr2855_VariantTest(F.p2724, F.v6125, yr3194_Join(yr1055_T(y_str("(&", 2)), F.v6119, yr1055_T(y_str(")", 1)))));
yr1031_SA(y_str(") ", 2));
}
yr1038_ST(F.v6121);
yr1031_SA(y_str(".f_", 3));
yr1038_ST(((*(yR109 *)rt_nil_check(F.v6123))).f_name);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(yr2779_Convert(yr3194_Join(F.v6119, yr1055_T(y_str(".f_", 3)), ((*(yR109 *)rt_nil_check(F.v6123))).f_name), ((*(yR109 *)rt_nil_check(F.v6123))).f_rep, ((*(yR109 *)rt_nil_check(F.v6125))).f_rep));
yr1031_SA(y_str(";", 1));
}
F.v6123 = ((*(yR109 *)rt_nil_check(F.v6123))).f_next;
}
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v6121);
yr1031_SA(y_str("; })", 4));
{ rt_int rv6148 = yr1050_SE();
return rv6148; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2729_ConvertArray(rt_int a_p2730, void * a_p2731, void * a_p2732) {
struct yf2733 F;
memset((void *)&F, 0, sizeof F);
F.p2730 = a_p2730;
F.p2731 = a_p2731;
F.p2732 = a_p2732;
F.v6154 = yr1194_Fresh(y_str("cs", 2));
F.v6156 = yr1194_Fresh(y_str("cd", 2));
F.v6158 = yr1194_Fresh(y_str("ck", 2));
F.v6160 = yr1194_Fresh(y_str("cn", 2));
F.v6162 = yr2405_CType(((*(yR104 *)rt_nil_check(F.p2731))).f_elem);
F.v6164 = yr2405_CType(((*(yR104 *)rt_nil_check(F.p2732))).f_elem);
yr1020_SB();
yr1031_SA(y_str("({ yarr ", 8));
yr1038_ST(F.v6154);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(F.p2730);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v6156);
yr1031_SA(y_str("; rt_int ", 9));
yr1038_ST(F.v6160);
yr1031_SA(y_str(" = y_count(", 11));
yr1038_ST(F.v6154);
yr1031_SA(y_str(", ", 2));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2732))).f_nidx);
yr1031_SA(y_str(");", 2));
if ((((*(yR104 *)rt_nil_check(F.p2731))).f_kind == v816)) {
yr1031_SA(y_str(" y_init(", 8));
yr1038_ST(yr2411_DescOf(F.p2731));
yr1031_SA(y_str(", &", 3));
yr1038_ST(F.v6156);
yr1031_SA(y_str("); if (y_count(", 15));
yr1038_ST(F.v6156);
yr1031_SA(y_str(", ", 2));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2731))).f_nidx);
yr1031_SA(y_str(") != ", 5));
yr1038_ST(F.v6160);
yr1031_SA(y_str(") rt_raise_msg(RT_X_RANGE, ", 27));
yr1025_SC(34);
yr1031_SA(y_str("array lengths differ", 20));
yr1025_SC(34);
yr1031_SA(y_str(");", 2));
} else {
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v6156);
yr1031_SA(y_str(" = y_like(", 10));
yr1038_ST(F.v6154);
yr1031_SA(y_str(", ", 2));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2732))).f_nidx);
yr1031_SA(y_str(", ", 2));
yr1038_ST(yr2411_DescOf(((*(yR104 *)rt_nil_check(F.p2731))).f_elem));
yr1031_SA(y_str(");", 2));
}
yr1031_SA(y_str(" for (rt_int ", 13));
yr1038_ST(F.v6158);
yr1031_SA(y_str(" = 0; ", 6));
yr1038_ST(F.v6158);
yr1031_SA(y_str(" < ", 3));
yr1038_ST(F.v6160);
yr1031_SA(y_str("; ", 2));
yr1038_ST(F.v6158);
yr1031_SA(y_str("++) ((", 6));
yr1038_ST(F.v6162);
yr1031_SA(y_str(" *)", 3));
yr1038_ST(F.v6156);
yr1031_SA(y_str(".p)[", 4));
yr1038_ST(F.v6158);
yr1031_SA(y_str("] = ", 4));
yr1038_ST(yr2779_Convert(yr3194_Join(yr1055_T(y_str("((", 2)), F.v6164, yr3194_Join(yr1055_T(y_str(" *)", 3)), F.v6154, yr3194_Join(yr1055_T(y_str(".p)[", 4)), F.v6158, yr1055_T(y_str("]", 1))))), ((*(yR104 *)rt_nil_check(F.p2731))).f_elem, ((*(yR104 *)rt_nil_check(F.p2732))).f_elem));
yr1031_SA(y_str("; ", 2));
yr1038_ST(F.v6156);
yr1031_SA(y_str("; })", 4));
{ rt_int rv6205 = yr1050_SE();
return rv6205; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2737_RescaleCode(rt_int a_p2738, void * a_p2739, void * a_p2740) {
struct yf2741 F;
memset((void *)&F, 0, sizeof F);
F.p2738 = a_p2738;
F.p2739 = a_p2739;
F.p2740 = a_p2740;
yr2535_ScaleRatio(F.p2739, F.p2740, &F.v6211, &F.v6213, &F.v6215);
if (F.v6215) {
{ rt_int rv6216 = F.p2738;
return rv6216; }
}
yr1020_SB();
yr1031_SA(y_str("y_fix_conv(", 11));
yr1038_ST(F.p2738);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v6211);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v6213);
yr1031_SA(y_str(")", 1));
{ rt_int rv6221 = yr1050_SE();
return rv6221; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2745_CommonScale(rt_int * a_p2746, void * a_p2747, rt_int * a_p2748, void * a_p2749, void * a_p2750, rt_int a_p2751) {
struct yf2752 F;
memset((void *)&F, 0, sizeof F);
F.p2746 = a_p2746;
F.p2747 = a_p2747;
F.p2748 = a_p2748;
F.p2749 = a_p2749;
F.p2750 = a_p2750;
F.p2751 = a_p2751;
F.v6230 = yr2512_Gcd(((*(yR104 *)rt_nil_check(F.p2747))).f_fsn, ((*(yR104 *)rt_nil_check(F.p2749))).f_fsn);
F.v6232 = yr2519_MulChk(rt_range(rt_div(((*(yR104 *)rt_nil_check(F.p2747))).f_fsd, yr2512_Gcd(((*(yR104 *)rt_nil_check(F.p2747))).f_fsd, ((*(yR104 *)rt_nil_check(F.p2749))).f_fsd)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), ((*(yR104 *)rt_nil_check(F.p2749))).f_fsd, F.p2751);
yr2552_SetScale(F.p2750, F.v6230, F.v6232);
(*F.p2746) = yr2737_RescaleCode((*F.p2746), F.p2747, F.p2750);
(*F.p2748) = yr2737_RescaleCode((*F.p2748), F.p2749, F.p2750);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2756_FixLiteral(void * a_p2757, rt_int * a_p2758, void * * a_p2759) {
struct yf2760 F;
memset((void *)&F, 0, sizeof F);
F.p2757 = a_p2757;
F.p2758_o = a_p2758;
F.p2759_o = a_p2759;
F.v6239 = ((*(yR99 *)rt_nil_check(F.p2757))).f_ival;
F.v6241 = ((rt_int *)(v1238).p)[y_ix1(v1238, F.v6239)];
F.p2759 = yr2350_CopyRep(v1350);
((*(yR104 *)rt_nil_check(F.p2759))).f_abstract = 0;
if ((F.v6241 >= INT64_C(0))) {
yr2552_SetScale(F.p2759, yr2527_PowChk(((rt_int *)(v1236).p)[y_ix1(v1236, F.v6239)], F.v6241, ((*(yR99 *)rt_nil_check(F.p2757))).f_line), INT64_C(1));
} else {
yr2552_SetScale(F.p2759, INT64_C(1), yr2527_PowChk(((rt_int *)(v1236).p)[y_ix1(v1236, F.v6239)], rt_range(rt_neg(F.v6241), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), ((*(yR99 *)rt_nil_check(F.p2757))).f_line));
}
yr1020_SB();
yr1031_SA(y_str("((yfix)INT64_C(", 15));
yr1044_SI(((rt_int *)(v1234).p)[y_ix1(v1234, F.v6239)]);
yr1031_SA(y_str("))", 2));
F.p2758 = yr1050_SE();
(*F.p2758_o) = F.p2758;
(*F.p2759_o) = F.p2759;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2764_ManifestFix(void * a_p2765, rt_int * a_p2766, rt_int * a_p2767, rt_int * a_p2768) {
struct yf2769 F;
memset((void *)&F, 0, sizeof F);
F.p2765 = a_p2765;
F.p2766_o = a_p2766;
F.p2767_o = a_p2767;
F.p2768_o = a_p2768;
F.p2766 = 0;
F.p2767 = INT64_C(0);
F.p2768 = INT64_C(1);
if ((((*(yR99 *)rt_nil_check(F.p2765))).f_kind == v756)) {
F.v6255 = ((*(yR99 *)rt_nil_check(F.p2765))).f_ival;
F.v6257 = ((rt_int *)(v1238).p)[y_ix1(v1238, F.v6255)];
F.p2767 = ((rt_int *)(v1234).p)[y_ix1(v1234, F.v6255)];
if ((F.v6257 >= INT64_C(0))) {
F.p2767 = yr2519_MulChk(F.p2767, yr2527_PowChk(((rt_int *)(v1236).p)[y_ix1(v1236, F.v6255)], F.v6257, ((*(yR99 *)rt_nil_check(F.p2765))).f_line), ((*(yR99 *)rt_nil_check(F.p2765))).f_line);
} else {
F.p2768 = yr2527_PowChk(((rt_int *)(v1236).p)[y_ix1(v1236, F.v6255)], rt_range(rt_neg(F.v6257), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), ((*(yR99 *)rt_nil_check(F.p2765))).f_line);
}
F.p2766 = 1;
} else if ((((*(yR99 *)rt_nil_check(F.p2765))).f_kind == v753)) {
F.p2767 = ((*(yR99 *)rt_nil_check(F.p2765))).f_ival;
F.p2766 = 1;
} else if ((((*(yR99 *)rt_nil_check(F.p2765))).f_kind == v795)) {
yr2764_ManifestFix(((*(yR99 *)rt_nil_check(F.p2765))).f_a, &F.p2766, &F.p2767, &F.p2768);
} else if ((((*(yR99 *)rt_nil_check(F.p2765))).f_kind == v789)) {
yr2764_ManifestFix(((*(yR99 *)rt_nil_check(F.p2765))).f_a, &F.p2766, &F.p2767, &F.p2768);
F.p2767 = rt_range(rt_neg(F.p2767), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((((*(yR99 *)rt_nil_check(F.p2765))).f_kind == v792)) && ((((*(yR99 *)rt_nil_check(F.p2765))).f_name == v573)))) {
yr2764_ManifestFix(((*(yR99 *)rt_nil_check(F.p2765))).f_a, &F.p2766, &F.p2767, &F.p2768);
yr2764_ManifestFix(((*(yR99 *)rt_nil_check(F.p2765))).f_b, &F.v6265, &F.v6261, &F.v6263);
F.p2766 = (F.p2766 && F.v6265);
F.p2767 = yr2519_MulChk(F.p2767, F.v6261, ((*(yR99 *)rt_nil_check(F.p2765))).f_line);
F.p2768 = yr2519_MulChk(F.p2768, F.v6263, ((*(yR99 *)rt_nil_check(F.p2765))).f_line);
}
F.v6259 = yr2512_Gcd(F.p2767, F.p2768);
F.p2767 = rt_range(rt_div(F.p2767, F.v6259), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.p2768 = rt_range(rt_div(F.p2768, F.v6259), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2766_o) = F.p2766;
(*F.p2767_o) = F.p2767;
(*F.p2768_o) = F.p2768;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2773_FloatChk(rt_int a_p2774) {
struct yf2775 F;
memset((void *)&F, 0, sizeof F);
F.p2774 = a_p2774;
{ rt_int rv6280 = yr3194_Join(yr1055_T(y_str("y_fchk(", 7)), F.p2774, yr1055_T(y_str(")", 1)));
return rv6280; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2779_Convert(rt_int a_p2780, void * a_p2781, void * a_p2782) {
struct yf2783 F;
memset((void *)&F, 0, sizeof F);
F.p2780 = a_p2780;
F.p2781 = a_p2781;
F.p2782 = a_p2782;
if (((((((*(yR104 *)rt_nil_check(F.p2782))).f_kind == v840)) && ((((*(yR104 *)rt_nil_check(F.p2781))).f_kind == v816))) && ((((*(yR104 *)rt_nil_check(F.p2781))).f_nidx == INT64_C(1))))) {
if ((((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2781))).f_idx))).f_hasm && ((!(((*(yR104 *)rt_nil_check(F.p2782))).f_nlits == (rt_add((rt_sub(((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2781))).f_idx))).f_mhi, ((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2781))).f_idx))).f_mlo)), INT64_C(1)))))))) {
yr1020_SB();
yr1031_SA(y_str("a string of ", 12));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2782))).f_nlits);
yr1031_SA(y_str(" characters for an array of ", 28));
yr1044_SI(rt_range(rt_add((rt_sub(((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2781))).f_idx))).f_mhi, ((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2781))).f_idx))).f_mlo)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1031_SA(y_str(" (VI.B.1)", 9));
F.v6286 = yr1050_SE();
yr1151_Fail(v994, F.v6286);
}
}
if ((!yr2714_NeedsConv(F.p2781, F.p2782))) {
{ rt_int rv6297 = F.p2780;
return rv6297; }
}
if ((((*(yR104 *)rt_nil_check(F.p2781))).f_kind == v819)) {
{ rt_int rv6298 = yr2721_ConvertRecord(F.p2780, F.p2781, F.p2782);
return rv6298; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2781))).f_kind == v816)) || ((((*(yR104 *)rt_nil_check(F.p2781))).f_kind == v837)))) {
{ rt_int rv6299 = yr2729_ConvertArray(F.p2780, F.p2781, F.p2782);
return rv6299; }
}
if (yr2356_IsDiscrete(F.p2781)) {
yr1020_SB();
yr1031_SA(y_str("rt_range(", 9));
yr1038_ST(F.p2780);
yr1031_SA(y_str(", ", 2));
yr1038_ST(yr2486_LoText(F.p2781));
yr1031_SA(y_str(", ", 2));
yr1038_ST(yr2492_HiText(F.p2781));
yr1031_SA(y_str(")", 1));
{ rt_int rv6304 = yr1050_SE();
return rv6304; }
}
if ((((*(yR104 *)rt_nil_check(F.p2781))).f_kind == v804)) {
yr1020_SB();
yr1031_SA(y_str("rt_frange(", 10));
yr1038_ST(F.p2780);
yr1031_SA(y_str(", ", 2));
yr1038_ST(yr2486_LoText(F.p2781));
yr1031_SA(y_str(", ", 2));
yr1038_ST(yr2492_HiText(F.p2781));
yr1031_SA(y_str(")", 1));
{ rt_int rv6309 = yr1050_SE();
return rv6309; }
}
if ((((*(yR104 *)rt_nil_check(F.p2781))).f_kind == v801)) {
F.v6286 = yr2737_RescaleCode(F.p2780, F.p2782, F.p2781);
if ((((*(yR104 *)rt_nil_check(F.p2781))).f_lo == INT64_C(0))) {
{ rt_int rv6311 = F.v6286;
return rv6311; }
}
yr1020_SB();
yr1031_SA(y_str("y_fix_range(", 12));
yr1038_ST(F.v6286);
yr1031_SA(y_str(", ", 2));
yr1038_ST(yr2486_LoText(F.p2781));
yr1031_SA(y_str(", ", 2));
yr1038_ST(yr2492_HiText(F.p2781));
yr1031_SA(y_str(")", 1));
{ rt_int rv6316 = yr1050_SE();
return rv6316; }
}
{ rt_int rv6317 = F.p2780;
return rv6317; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2787_StoreText(rt_int a_p2788, void * a_p2789, rt_int a_p2790, void * a_p2791, rt_int a_p2792) {
struct yf2793 F;
memset((void *)&F, 0, sizeof F);
F.p2788 = a_p2788;
F.p2789 = a_p2789;
F.p2790 = a_p2790;
F.p2791 = a_p2791;
F.p2792 = a_p2792;
yr2438_CheckType(F.p2792, F.p2789, F.p2791);
if (yr2380_Deep(F.p2789)) {
F.v6325 = yr1194_Fresh(y_str("t", 1));
yr1020_SB();
yr1031_SA(y_str("{ ", 2));
yr1038_ST(yr2405_CType(F.p2789));
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v6325);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(yr2779_Convert(F.p2790, F.p2789, F.p2791));
yr1031_SA(y_str("; y_store(", 10));
yr1038_ST(yr2411_DescOf(F.p2789));
yr1031_SA(y_str(", &", 3));
yr1038_ST(F.p2788);
yr1031_SA(y_str(", &", 3));
yr1038_ST(F.v6325);
yr1031_SA(y_str("); }", 4));
{ rt_int rv6334 = yr1050_SE();
return rv6334; }
}
yr1020_SB();
yr1038_ST(F.p2788);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(yr2779_Convert(F.p2790, F.p2789, F.p2791));
yr1031_SA(y_str(";", 1));
{ rt_int rv6337 = yr1050_SE();
return rv6337; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2797_Store(rt_int a_p2798, void * a_p2799, rt_int a_p2800, void * a_p2801, rt_int a_p2802) {
struct yf2803 F;
memset((void *)&F, 0, sizeof F);
F.p2798 = a_p2798;
F.p2799 = a_p2799;
F.p2800 = a_p2800;
F.p2801 = a_p2801;
F.p2802 = a_p2802;
yr1126_Emit(yr2787_StoreText(F.p2798, F.p2799, F.p2800, F.p2801, F.p2802));
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2807_IsVariable(void * a_p2808) {
struct yf2809 F;
memset((void *)&F, 0, sizeof F);
F.p2808 = a_p2808;
if ((((*(yR99 *)rt_nil_check(F.p2808))).f_kind == v771)) {
F.v6347 = yr2232_Find(((*(yR99 *)rt_nil_check(F.p2808))).f_name);
if ((F.v6347 == ((void *)0))) {
{ rt_int rv6351 = 0;
return rv6351; }
}
if (((*(yR119 *)rt_nil_check(F.v6347))).f_readonly) {
{ rt_int rv6353 = 0;
return rv6353; }
}
{ rt_int rv6354 = (((*(yR119 *)rt_nil_check(yr2337_Real(F.v6347)))).f_kind == v855);
return rv6354; }
}
if ((((*(yR99 *)rt_nil_check(F.p2808))).f_kind == v783)) {
{ rt_int rv6356 = (((*(yR99 *)rt_nil_check(F.p2808))).f_flag == INT64_C(0));
return rv6356; }
}
if ((((*(yR99 *)rt_nil_check(F.p2808))).f_kind == v780)) {
{ rt_int rv6357 = yr2807_IsVariable(((*(yR99 *)rt_nil_check(F.p2808))).f_a);
return rv6357; }
}
if ((((*(yR99 *)rt_nil_check(F.p2808))).f_kind == v777)) {
if ((!yr2807_IsVariable(((*(yR99 *)rt_nil_check(F.p2808))).f_a))) {
{ rt_int rv6359 = 0;
return rv6359; }
}
F.v6349 = yr2660_FindField(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2808))).f_a))).f_rep, ((*(yR99 *)rt_nil_check(F.p2808))).f_name);
if ((F.v6349 == ((void *)0))) {
{ rt_int rv6361 = 0;
return rv6361; }
}
{ rt_int rv6362 = (!((*(yR109 *)rt_nil_check(F.v6349))).f_isconst);
return rv6362; }
}
{ rt_int rv6364 = 0;
return rv6364; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2813_CheckPure(void * a_p2814) {
struct yf2815 F;
memset((void *)&F, 0, sizeof F);
F.p2814 = a_p2814;
F.v6368 = F.p2814;
if ((v1595 == ((void *)0))) {
return;
}
if ((!((*(yR119 *)rt_nil_check(v1595))).f_func)) {
return;
}
while ((((((*(yR99 *)rt_nil_check(F.v6368))).f_kind == v777)) || ((((*(yR99 *)rt_nil_check(F.v6368))).f_kind == v780)))) {
F.v6368 = ((*(yR99 *)rt_nil_check(F.v6368))).f_a;
}
if ((((*(yR99 *)rt_nil_check(F.v6368))).f_kind == v783)) {
if ((((*(yR99 *)rt_nil_check(F.v6368))).f_flag == INT64_C(0))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2814))).f_line, y_str("a FUNCTION does not assign to a dynamic variable (X.A.4)", 56));
}
return;
}
if ((((*(yR99 *)rt_nil_check(F.v6368))).f_kind == v771)) {
F.v6370 = yr2232_Find(((*(yR99 *)rt_nil_check(F.v6368))).f_name);
if ((!(F.v6370 == ((void *)0)))) {
F.v6370 = yr2337_Real(F.v6370);
if ((((*(yR119 *)rt_nil_check(F.v6370))).f_level < ((*(yR119 *)rt_nil_check(v1595))).f_level)) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2814))).f_line, ((*(yR99 *)rt_nil_check(F.v6368))).f_name, y_str(" is not local: a FUNCTION assigns only to its locals (X.A.4)", 60));
}
}
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2819_LValue(void * a_p2820, rt_int * a_p2821, void * * a_p2822) {
struct yf2823 F;
memset((void *)&F, 0, sizeof F);
F.p2820 = a_p2820;
F.p2821_o = a_p2821;
F.p2822_o = a_p2822;
yr2846_Expr(F.p2820, ((void *)0), &F.p2821, &F.p2822);
if ((!yr2807_IsVariable(F.p2820))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2820))).f_line, y_str("a variable is needed here (IX.A.1)", 34));
}
(*F.p2821_o) = F.p2821;
(*F.p2822_o) = F.p2822;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2827_Paren(rt_int a_p2828) {
struct yf2829 F;
memset((void *)&F, 0, sizeof F);
F.p2828 = a_p2828;
yr1020_SB();
yr1031_SA(y_str("(", 1));
yr1038_ST(F.p2828);
yr1031_SA(y_str(")", 1));
{ rt_int rv6383 = yr1050_SE();
return rv6383; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2833_Lit(void * a_p2834, rt_int a_p2835) {
struct yf2836 F;
memset((void *)&F, 0, sizeof F);
F.p2834 = a_p2834;
F.p2835 = a_p2835;
F.v6388 = yr2350_CopyRep(F.p2834);
yr2573_SetRange(F.v6388, F.p2835, F.p2835);
((*(yR104 *)rt_nil_check(F.v6388))).f_elem = F.p2834;
{ void * rv6389 = F.v6388;
return rv6389; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2840_Qualifier(void * a_p2841) {
struct yf2842 F;
memset((void *)&F, 0, sizeof F);
F.p2841 = a_p2841;
F.v6393 = yr2337_Real(yr2244_Lookup(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2841))).f_d))).f_name, ((*(yR99 *)rt_nil_check(F.p2841))).f_line));
if ((((!(((*(yR119 *)rt_nil_check(F.v6393))).f_kind == v861))) && ((!(((*(yR119 *)rt_nil_check(F.v6393))).f_kind == v864))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2841))).f_line, ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2841))).f_d))).f_name, y_str(" is not a type", 14));
}
{ void * rv6395 = ((*(yR119 *)rt_nil_check(F.v6393))).f_rep;
return rv6395; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2846_Expr(void * a_p2847, void * a_p2848, rt_int * a_p2849, void * * a_p2850) {
struct yf2851 F;
memset((void *)&F, 0, sizeof F);
F.p2847 = a_p2847;
F.p2848 = a_p2848;
F.p2849_o = a_p2849;
F.p2850_o = a_p2850;
F.v6402 = ((*(yR99 *)rt_nil_check(F.p2847))).f_kind;
v994 = ((*(yR99 *)rt_nil_check(F.p2847))).f_line;
if ((F.v6402 == v795)) {
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p2847))).f_a, F.p2848, &F.v6406, &F.p2850);
F.p2849 = yr2827_Paren(F.v6406);
} else if ((F.v6402 == v753)) {
F.p2850 = yr2833_Lit(v1336, ((*(yR99 *)rt_nil_check(F.p2847))).f_ival);
if ((!(((*(yR99 *)rt_nil_check(F.p2847))).f_d == ((void *)0)))) {
F.v6412 = yr2840_Qualifier(F.p2847);
if ((!(((*(yR104 *)rt_nil_check(F.v6412))).f_kind == v798))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2847))).f_line, y_str("an integer literal qualified by a type that is not INTEGER", 58));
}
((*(yR104 *)rt_nil_check(F.p2850))).f_tid = ((*(yR104 *)rt_nil_check(F.v6412))).f_tid;
((*(yR104 *)rt_nil_check(F.p2850))).f_tname = ((*(yR104 *)rt_nil_check(F.v6412))).f_tname;
}
yr1020_SB();
yr1031_SA(y_str("INT64_C(", 8));
yr1044_SI(((*(yR99 *)rt_nil_check(F.p2847))).f_ival);
yr1031_SA(y_str(")", 1));
F.p2849 = yr1050_SE();
} else if ((F.v6402 == v762)) {
F.v6412 = yr2674_AlphabetFor(F.p2847, F.p2848);
F.v6418 = yr2681_CharValue(F.v6412, ((*(yR99 *)rt_nil_check(F.p2847))).f_text, ((*(yR99 *)rt_nil_check(F.p2847))).f_line);
F.p2850 = yr2833_Lit(F.v6412, F.v6418);
yr1020_SB();
yr1044_SI(F.v6418);
F.p2849 = yr1050_SE();
} else if ((F.v6402 == v765)) {
F.v6412 = yr2674_AlphabetFor(F.p2847, F.p2848);
F.v6406 = yr2689_StringCodes(F.v6412, ((*(yR99 *)rt_nil_check(F.p2847))).f_text, &F.v6416, ((*(yR99 *)rt_nil_check(F.p2847))).f_line);
F.p2850 = yr2343_NewRep(v840, yr1055_T(y_str("string", 6)));
((*(yR104 *)rt_nil_check(F.p2850))).f_tname = yr1055_T(y_str("a string literal", 16));
((*(yR104 *)rt_nil_check(F.p2850))).f_elem = F.v6412;
((*(yR104 *)rt_nil_check(F.p2850))).f_nidx = INT64_C(1);
((*(yR104 *)rt_nil_check(F.p2850))).f_nlits = F.v6416;
yr1020_SB();
yr1031_SA(y_str("y_str(", 6));
yr1038_ST(F.v6406);
yr1031_SA(y_str(", ", 2));
yr1044_SI(F.v6416);
yr1031_SA(y_str(")", 1));
F.p2849 = yr1050_SE();
} else if ((F.v6402 == v759)) {
F.p2850 = v1348;
if ((!(((*(yR99 *)rt_nil_check(F.p2847))).f_d == ((void *)0)))) {
F.p2850 = yr2840_Qualifier(F.p2847);
}
F.p2849 = yr2827_Paren(((*(yR99 *)rt_nil_check(F.p2847))).f_text);
} else if ((F.v6402 == v756)) {
yr2756_FixLiteral(F.p2847, &F.p2849, &F.p2850);
if ((!(((*(yR99 *)rt_nil_check(F.p2847))).f_d == ((void *)0)))) {
F.v6412 = yr2840_Qualifier(F.p2847);
if ((!(((*(yR104 *)rt_nil_check(F.v6412))).f_kind == v801))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2847))).f_line, y_str("a fixed-point literal qualified by a type that is not FIXED", 59));
}
((*(yR104 *)rt_nil_check(F.p2850))).f_tid = ((*(yR104 *)rt_nil_check(F.v6412))).f_tid;
((*(yR104 *)rt_nil_check(F.p2850))).f_tname = ((*(yR104 *)rt_nil_check(F.v6412))).f_tname;
}
} else if ((F.v6402 == v768)) {
if ((((*(yR99 *)rt_nil_check(F.p2847))).f_d == ((void *)0))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2847))).f_line, y_str("NIL is qualified by the name of a pointer type (VI.B.4)", 55));
}
F.p2850 = yr2840_Qualifier(F.p2847);
if ((!(((*(yR104 *)rt_nil_check(F.p2850))).f_kind == v822))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2847))).f_line, y_str("NIL of a type that is not a pointer", 35));
}
F.p2849 = yr1055_T(y_str("((void *)0)", 11));
} else if ((F.v6402 == v771)) {
if ((!(((*(yR99 *)rt_nil_check(F.p2847))).f_d == ((void *)0)))) {
F.v6412 = yr2840_Qualifier(F.p2847);
F.v6404 = yr2297_FindLit(((*(yR99 *)rt_nil_check(F.p2847))).f_name, F.v6412);
if ((F.v6404 == ((void *)0))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2847))).f_line, ((*(yR99 *)rt_nil_check(F.p2847))).f_name, y_str(" is not a literal of that type", 30));
}
} else {
F.v6404 = yr2244_Lookup(((*(yR99 *)rt_nil_check(F.p2847))).f_name, ((*(yR99 *)rt_nil_check(F.p2847))).f_line);
}
yr2863_NameExpr(F.p2847, F.v6404, &F.p2849, &F.p2850);
} else if ((F.v6402 == v774)) {
yr3043_CallExpr(F.p2847, F.p2848, 0, &F.p2849, &F.p2850);
} else if ((F.v6402 == v777)) {
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p2847))).f_a, ((void *)0), &F.v6406, &F.v6412);
((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2847))).f_a))).f_rep = F.v6412;
if ((!(((*(yR104 *)rt_nil_check(F.v6412))).f_kind == v819))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2847))).f_line, ((*(yR99 *)rt_nil_check(F.p2847))).f_name, y_str(": a component of something that is not a record", 47));
}
if (((*(yR104 *)rt_nil_check(F.v6412))).f_opaque) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2847))).f_line, ((*(yR104 *)rt_nil_check(F.v6412))).f_tname, y_str(" is exported opaquely: its components are hidden (X.B.3)", 56));
}
F.v6414 = yr2660_FindField(F.v6412, ((*(yR99 *)rt_nil_check(F.p2847))).f_name);
if ((F.v6414 == ((void *)0))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2847))).f_line, ((*(yR99 *)rt_nil_check(F.p2847))).f_name, y_str(" is not a component of this record", 34));
}
F.p2850 = ((*(yR109 *)rt_nil_check(F.v6414))).f_rep;
if ((!(((*(yR109 *)rt_nil_check(F.v6414))).f_variant == INT64_C(0)))) {
yr3118_CheckVariantSelected(F.p2847, F.v6412, F.v6414);
F.v6408 = yr1194_Fresh(y_str("vr", 2));
yr1020_SB();
yr1031_SA(y_str("(*({ ", 5));
yr1038_ST(yr2405_CType(F.v6412));
yr1031_SA(y_str(" *", 2));
yr1038_ST(F.v6408);
yr1031_SA(y_str(" = &", 4));
yr1038_ST(yr2827_Paren(F.v6406));
yr1031_SA(y_str("; if (!(", 8));
yr1038_ST(yr2855_VariantTest(F.v6412, F.v6414, F.v6408));
yr1031_SA(y_str(")) rt_raise(RT_X_TAG); &", 24));
yr1038_ST(F.v6408);
yr1031_SA(y_str("->f_", 4));
yr1038_ST(((*(yR99 *)rt_nil_check(F.p2847))).f_name);
yr1031_SA(y_str("; }))", 5));
F.p2849 = yr1050_SE();
} else {
yr1020_SB();
yr1038_ST(yr2827_Paren(F.v6406));
yr1031_SA(y_str(".f_", 3));
yr1038_ST(((*(yR99 *)rt_nil_check(F.p2847))).f_name);
F.p2849 = yr1050_SE();
}
} else if ((((F.v6402 == v783)) && yr3005_UserOp(F.p2847, rt_range(v612, INT64_C(0), INT64_C(4000000)), ((*(yR99 *)rt_nil_check(F.p2847))).f_a, ((void *)0), &F.p2849, &F.p2850))) {
((*(yR99 *)rt_nil_check(F.p2847))).f_flag = INT64_C(1);
} else if ((F.v6402 == v783)) {
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p2847))).f_a, ((void *)0), &F.v6406, &F.v6412);
if ((!(((*(yR104 *)rt_nil_check(F.v6412))).f_kind == v822))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2847))).f_line, y_str("^ of something that is not a pointer", 36));
}
yr3261_NoteFreeDeref(((*(yR99 *)rt_nil_check(F.p2847))).f_a, ((*(yR104 *)rt_nil_check(F.v6412))).f_tid);
if ((((*(yR104 *)rt_nil_check(F.v6412))).f_elem == ((void *)0))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2847))).f_line, ((*(yR104 *)rt_nil_check(F.v6412))).f_forward, y_str(" is not declared", 16));
}
F.p2850 = ((*(yR104 *)rt_nil_check(F.v6412))).f_elem;
yr1020_SB();
yr1031_SA(y_str("(*(", 3));
yr1038_ST(yr2405_CType(F.p2850));
yr1031_SA(y_str(" *)rt_nil_check(", 16));
yr1038_ST(F.v6406);
yr1031_SA(y_str("))", 2));
F.p2849 = yr1050_SE();
} else if ((F.v6402 == v780)) {
yr2872_IndexExpr(F.p2847, &F.p2849, &F.p2850);
} else if ((((F.v6402 == v786)) && yr3005_UserOp(F.p2847, rt_range(v384, INT64_C(0), INT64_C(4000000)), ((*(yR99 *)rt_nil_check(F.p2847))).f_a, ((void *)0), &F.p2849, &F.p2850))) {
F.p2850 = F.p2850;
} else if ((F.v6402 == v786)) {
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p2847))).f_a, v1338, &F.v6406, &F.v6412);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p2847))).f_line, v1338, F.v6412);
F.p2850 = v1338;
yr1020_SB();
yr1031_SA(y_str("(!", 2));
yr1038_ST(F.v6406);
yr1031_SA(y_str(")", 1));
F.p2849 = yr1050_SE();
} else if ((F.v6402 == v789)) {
if ((!yr3005_UserOp(F.p2847, rt_range(v570, INT64_C(0), INT64_C(4000000)), ((*(yR99 *)rt_nil_check(F.p2847))).f_a, ((void *)0), &F.p2849, &F.p2850))) {
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p2847))).f_a, F.p2848, &F.v6406, &F.v6412);
yr2880_NegExpr(F.p2847, F.v6406, F.v6412, &F.p2849, &F.p2850);
}
} else if ((F.v6402 == v792)) {
yr2936_BinExpr(F.p2847, F.p2848, &F.p2849, &F.p2850);
} else {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2847))).f_line, y_str("not an expression", 17));
}
((*(yR99 *)rt_nil_check(F.p2847))).f_rep = F.p2850;
(*F.p2849_o) = F.p2849;
(*F.p2850_o) = F.p2850;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2855_VariantTest(void * a_p2856, void * a_p2857, rt_int a_p2858) {
struct yf2859 F;
memset((void *)&F, 0, sizeof F);
F.p2856 = a_p2856;
F.p2857 = a_p2857;
F.p2858 = a_p2858;
F.v6461 = ((*(yR109 *)rt_nil_check(F.p2857))).f_labels;
yr1020_SB();
yr1031_SA(y_str("0", 1));
while ((!(F.v6461 == ((void *)0)))) {
yr2698_Manifest(F.v6461, &F.v6463, &F.v6465);
yr1031_SA(y_str(" || ", 4));
yr1038_ST(F.p2858);
yr1031_SA(y_str("->f_", 4));
yr1038_ST(((*(yR109 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2856))).f_selector))).f_name);
yr1031_SA(y_str(" == ", 4));
yr1044_SI(F.v6465);
F.v6461 = ((*(yR99 *)rt_nil_check(F.v6461))).f_next;
}
{ rt_int rv6470 = yr1050_SE();
return rv6470; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2863_NameExpr(void * a_p2864, void * a_p2865, rt_int * a_p2866, void * * a_p2867) {
struct yf2868 F;
memset((void *)&F, 0, sizeof F);
F.p2864 = a_p2864;
F.p2865 = a_p2865;
F.p2866_o = a_p2866;
F.p2867_o = a_p2867;
F.v6477 = yr2337_Real(F.p2865);
if ((((*(yR119 *)rt_nil_check(F.v6477))).f_kind == v867)) {
if ((((((*(yR99 *)rt_nil_check(F.p2864))).f_d == ((void *)0))) && yr2291_Ambiguous(F.v6477))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2864))).f_line, ((*(yR99 *)rt_nil_check(F.p2864))).f_name, y_str(" names values of two types here: qualify it (VI.A.3)", 52));
}
F.p2867 = yr2833_Lit(((*(yR119 *)rt_nil_check(F.v6477))).f_rep, ((*(yR119 *)rt_nil_check(F.v6477))).f_mval);
yr1020_SB();
yr1044_SI(((*(yR119 *)rt_nil_check(F.v6477))).f_mval);
F.p2866 = yr1050_SE();
(*F.p2866_o) = F.p2866;
(*F.p2867_o) = F.p2867;
return;
}
if ((((((*(yR119 *)rt_nil_check(F.v6477))).f_kind == v855)) || ((((*(yR119 *)rt_nil_check(F.v6477))).f_kind == v858)))) {
yr3255_NoteFree(F.v6477);
F.p2867 = ((*(yR119 *)rt_nil_check(F.v6477))).f_rep;
F.p2866 = yr2331_SymPath(F.v6477);
(*F.p2866_o) = F.p2866;
(*F.p2867_o) = F.p2867;
return;
}
if ((((*(yR119 *)rt_nil_check(F.v6477))).f_kind == v870)) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2864))).f_line, ((*(yR99 *)rt_nil_check(F.p2864))).f_name, y_str(" is a routine: a call needs ()", 30));
}
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2864))).f_line, ((*(yR99 *)rt_nil_check(F.p2864))).f_name, y_str(" is not a value", 15));
(*F.p2866_o) = F.p2866;
(*F.p2867_o) = F.p2867;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2872_IndexExpr(void * a_p2873, rt_int * a_p2874, void * * a_p2875) {
struct yf2876 F;
memset((void *)&F, 0, sizeof F);
F.p2873 = a_p2873;
F.p2874_o = a_p2874;
F.p2875_o = a_p2875;
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p2873))).f_a, ((void *)0), &F.v6486, &F.v6492);
if ((!yr2368_IsArrayLike(F.v6492))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2873))).f_line, y_str("[] of something that is not an array", 36));
}
F.v6500 = yr1903_Count(((*(yR99 *)rt_nil_check(F.p2873))).f_b);
if ((!(F.v6500 == ((*(yR104 *)rt_nil_check(F.v6492))).f_nidx))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2873))).f_line, y_str("the number of subscripts is not the number of dimensions", 56));
}
F.p2875 = ((*(yR104 *)rt_nil_check(F.v6492))).f_elem;
F.v6502 = (((((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2873))).f_a))).f_kind == v771)) || ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2873))).f_a))).f_kind == v777))) || ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2873))).f_a))).f_kind == v780))) || ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2873))).f_a))).f_kind == v783)));
if (F.v6502) {
F.v6490 = F.v6486;
} else {
F.v6490 = yr1194_Fresh(y_str("ya", 2));
}
yr1020_SB();
if ((!F.v6502)) {
yr1031_SA(y_str("(*({ yarr ", 10));
yr1038_ST(F.v6490);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(F.v6486);
yr1031_SA(y_str("; &", 3));
}
yr1031_SA(y_str("((", 2));
yr1038_ST(yr2405_CType(F.p2875));
yr1031_SA(y_str(" *)(", 4));
yr1038_ST(F.v6490);
yr1031_SA(y_str(").p)[y_ix", 9));
yr1044_SI(F.v6500);
yr1031_SA(y_str("(", 1));
yr1038_ST(F.v6490);
F.p2874 = yr1050_SE();
F.v6498 = ((*(yR99 *)rt_nil_check(F.p2873))).f_b;
F.v6496 = ((*(yR104 *)rt_nil_check(F.v6492))).f_idx;
while ((!(F.v6498 == ((void *)0)))) {
yr2846_Expr(F.v6498, F.v6496, &F.v6488, &F.v6494);
if ((((!(F.v6496 == ((void *)0)))) && ((((*(yR104 *)rt_nil_check(F.v6492))).f_kind == v816)))) {
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.v6498))).f_line, F.v6496, F.v6494);
} else if ((!((((((*(yR104 *)rt_nil_check(F.v6494))).f_kind == v798)) || yr2356_IsDiscrete(F.v6494))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.v6498))).f_line, y_str("a subscript is an integer or scalar value", 41));
}
yr1020_SB();
yr1038_ST(F.p2874);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v6488);
F.p2874 = yr1050_SE();
if ((!(F.v6496 == ((void *)0)))) {
F.v6496 = ((*(yR104 *)rt_nil_check(F.v6496))).f_link;
}
F.v6498 = ((*(yR99 *)rt_nil_check(F.v6498))).f_next;
}
yr1020_SB();
yr1038_ST(F.p2874);
yr1031_SA(y_str(")]", 2));
if ((!F.v6502)) {
yr1031_SA(y_str("; }))", 5));
}
F.p2874 = yr1050_SE();
(*F.p2874_o) = F.p2874;
(*F.p2875_o) = F.p2875;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2880_NegExpr(void * a_p2881, rt_int a_p2882, void * a_p2883, rt_int * a_p2884, void * * a_p2885) {
struct yf2886 F;
memset((void *)&F, 0, sizeof F);
F.p2881 = a_p2881;
F.p2882 = a_p2882;
F.p2883 = a_p2883;
F.p2884_o = a_p2884;
F.p2885_o = a_p2885;
yr1020_SB();
if ((((*(yR104 *)rt_nil_check(F.p2883))).f_kind == v798)) {
F.p2885 = yr2350_CopyRep(F.p2883);
((*(yR104 *)rt_nil_check(F.p2885))).f_lo = INT64_C(0);
((*(yR104 *)rt_nil_check(F.p2885))).f_hasm = 0;
yr1031_SA(y_str("rt_neg(", 7));
yr1038_ST(F.p2882);
yr1031_SA(y_str(")", 1));
} else if ((((*(yR104 *)rt_nil_check(F.p2883))).f_kind == v804)) {
F.p2885 = yr2350_CopyRep(F.p2883);
((*(yR104 *)rt_nil_check(F.p2885))).f_lo = INT64_C(0);
yr1031_SA(y_str("(-", 2));
yr1038_ST(F.p2882);
yr1031_SA(y_str(")", 1));
} else if ((((*(yR104 *)rt_nil_check(F.p2883))).f_kind == v801)) {
F.p2885 = yr2350_CopyRep(F.p2883);
((*(yR104 *)rt_nil_check(F.p2885))).f_lo = INT64_C(0);
yr1031_SA(y_str("y_fix_neg(", 10));
yr1038_ST(F.p2882);
yr1031_SA(y_str(")", 1));
} else if ((((*(yR104 *)rt_nil_check(F.p2883))).f_kind == v828)) {
F.p2885 = F.p2883;
yr1031_SA(y_str("y_set_compl(", 12));
yr1038_ST(F.p2882);
yr1031_SA(y_str(")", 1));
} else {
v921 = 0;
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2881))).f_line, y_str("- of something that is not a number or a set", 44));
}
F.p2884 = yr1050_SE();
(*F.p2884_o) = F.p2884;
(*F.p2885_o) = F.p2885;
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2890_Unbounded(void * a_p2891) {
struct yf2892 F;
memset((void *)&F, 0, sizeof F);
F.p2891 = a_p2891;
F.v6540 = yr2350_CopyRep(F.p2891);
((*(yR104 *)rt_nil_check(F.v6540))).f_lo = INT64_C(0);
((*(yR104 *)rt_nil_check(F.v6540))).f_hi = INT64_C(0);
((*(yR104 *)rt_nil_check(F.v6540))).f_hasm = 0;
{ void * rv6544 = F.v6540;
return rv6544; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2896_Call2(yarr a_p2898, rt_int a_p2899, rt_int a_p2900) {
struct yf2901 F;
memset((void *)&F, 0, sizeof F);
F.p2898 = a_p2898;
F.p2899 = a_p2899;
F.p2900 = a_p2900;
yr1020_SB();
yr1031_SA(F.p2898);
yr1031_SA(y_str("(", 1));
yr1038_ST(F.p2899);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.p2900);
yr1031_SA(y_str(")", 1));
{ rt_int rv6552 = yr1050_SE();
return rv6552; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2905_Infix(rt_int a_p2906, yarr a_p2908, rt_int a_p2909) {
struct yf2910 F;
memset((void *)&F, 0, sizeof F);
F.p2906 = a_p2906;
F.p2908 = a_p2908;
F.p2909 = a_p2909;
yr1020_SB();
yr1031_SA(y_str("(", 1));
yr1038_ST(F.p2906);
yr1031_SA(y_str(" ", 1));
yr1031_SA(F.p2908);
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.p2909);
yr1031_SA(y_str(")", 1));
{ rt_int rv6561 = yr1050_SE();
return rv6561; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2914_EqCode(rt_int a_p2915, void * a_p2916, rt_int a_p2917, void * a_p2918) {
struct yf2919 F;
memset((void *)&F, 0, sizeof F);
F.p2915 = a_p2915;
F.p2916 = a_p2916;
F.p2917 = a_p2917;
F.p2918 = a_p2918;
F.v6572 = F.p2916;
if ((((*(yR104 *)rt_nil_check(F.p2916))).f_kind == v840)) {
F.v6572 = F.p2918;
}
if ((((((((*(yR104 *)rt_nil_check(F.v6572))).f_kind == v816)) || ((((*(yR104 *)rt_nil_check(F.v6572))).f_kind == v819))) || ((((*(yR104 *)rt_nil_check(F.v6572))).f_kind == v837))) || ((((*(yR104 *)rt_nil_check(F.v6572))).f_kind == v840)))) {
F.v6568 = yr1194_Fresh(y_str("e", 1));
F.v6570 = yr1194_Fresh(y_str("e", 1));
yr1020_SB();
yr1031_SA(y_str("({ ", 3));
yr1038_ST(yr2405_CType(F.v6572));
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v6568);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(F.p2915);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v6570);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(F.p2917);
yr1031_SA(y_str("; y_eq(", 7));
if ((((((*(yR104 *)rt_nil_check(F.v6572))).f_kind == v837)) || ((((*(yR104 *)rt_nil_check(F.v6572))).f_kind == v840)))) {
yr1031_SA(y_str("y_desc_vector(", 14));
yr1038_ST(yr2411_DescOf(((*(yR104 *)rt_nil_check(F.v6572))).f_elem));
yr1031_SA(y_str(")", 1));
} else {
yr1038_ST(yr2411_DescOf(F.v6572));
}
yr1031_SA(y_str(", &", 3));
yr1038_ST(F.v6568);
yr1031_SA(y_str(", &", 3));
yr1038_ST(F.v6570);
yr1031_SA(y_str("); })", 5));
{ rt_int rv6586 = yr1050_SE();
return rv6586; }
}
if ((((*(yR104 *)rt_nil_check(F.v6572))).f_kind == v828)) {
{ rt_int rv6588 = yr2896_Call2(y_str("y_set_eq", 8), F.p2915, F.p2917);
return rv6588; }
}
{ rt_int rv6590 = yr2905_Infix(F.p2915, y_str("==", 2), F.p2917);
return rv6590; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2923_IsOrdered(void * a_p2924) {
struct yf2925 F;
memset((void *)&F, 0, sizeof F);
F.p2924 = a_p2924;
if ((((((((*(yR104 *)rt_nil_check(F.p2924))).f_kind == v798)) || ((((*(yR104 *)rt_nil_check(F.p2924))).f_kind == v804))) || ((((*(yR104 *)rt_nil_check(F.p2924))).f_kind == v801))) || ((((*(yR104 *)rt_nil_check(F.p2924))).f_kind == v813)))) {
{ rt_int rv6594 = 1;
return rv6594; }
}
{ rt_int rv6595 = (((((*(yR104 *)rt_nil_check(F.p2924))).f_kind == v810)) && ((*(yR104 *)rt_nil_check(F.p2924))).f_ordered);
return rv6595; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2929_FixToFloat(rt_int a_p2930, void * a_p2931) {
struct yf2932 F;
memset((void *)&F, 0, sizeof F);
F.p2930 = a_p2930;
F.p2931 = a_p2931;
yr1020_SB();
yr1031_SA(y_str("y_fix_float(", 12));
yr1038_ST(F.p2930);
yr1031_SA(y_str(", INT64_C(", 10));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2931))).f_fsn);
yr1031_SA(y_str("), INT64_C(", 11));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2931))).f_fsd);
yr1031_SA(y_str("))", 2));
{ rt_int rv6603 = yr1050_SE();
return rv6603; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2936_BinExpr(void * a_p2937, void * a_p2938, rt_int * a_p2939, void * * a_p2940) {
struct yf2941 F;
memset((void *)&F, 0, sizeof F);
F.p2937 = a_p2937;
F.p2938 = a_p2938;
F.p2939_o = a_p2939;
F.p2940_o = a_p2940;
F.v6610 = ((*(yR99 *)rt_nil_check(F.p2937))).f_name;
if (yr3005_UserOp(F.p2937, F.v6610, ((*(yR99 *)rt_nil_check(F.p2937))).f_a, ((*(yR99 *)rt_nil_check(F.p2937))).f_b, &F.p2939, &F.p2940)) {
(*F.p2939_o) = F.p2939;
(*F.p2940_o) = F.p2940;
return;
}
if ((((F.v6610 == v231)) || ((F.v6610 == v393)))) {
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p2937))).f_a, v1338, &F.v6612, &F.v6618);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p2937))).f_line, v1338, F.v6618);
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p2937))).f_b, v1338, &F.v6614, &F.v6620);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p2937))).f_line, v1338, F.v6620);
F.p2940 = v1338;
if ((F.v6610 == v231)) {
F.p2939 = yr2905_Infix(F.v6612, y_str("&&", 2), F.v6614);
} else {
F.p2939 = yr2905_Infix(F.v6612, y_str("||", 2), F.v6614);
}
(*F.p2939_o) = F.p2939;
(*F.p2940_o) = F.p2940;
return;
}
if ((F.v6610 == v354)) {
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p2937))).f_b, ((void *)0), &F.v6614, &F.v6620);
if ((!(((*(yR104 *)rt_nil_check(F.v6620))).f_kind == v828))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2937))).f_line, y_str("IN needs a set on its right", 27));
}
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p2937))).f_a, ((*(yR104 *)rt_nil_check(F.v6620))).f_elem, &F.v6612, &F.v6618);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p2937))).f_line, ((*(yR104 *)rt_nil_check(F.v6620))).f_elem, F.v6618);
F.p2940 = v1338;
F.p2939 = yr2896_Call2(y_str("y_set_in", 8), F.v6612, F.v6614);
(*F.p2939_o) = F.p2939;
(*F.p2940_o) = F.p2940;
return;
}
F.v6622 = ((void *)0);
if (((((((((!(F.p2938 == ((void *)0)))) && ((!(F.v6610 == v579)))) && ((!(F.v6610 == v564)))) && ((!(F.v6610 == v582)))) && ((!(F.v6610 == v534)))) && ((!(F.v6610 == v585)))) && ((!(F.v6610 == v537))))) {
F.v6622 = F.p2938;
}
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p2937))).f_a, F.v6622, &F.v6612, &F.v6618);
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p2937))).f_b, F.v6618, &F.v6614, &F.v6620);
if ((((F.v6610 == v579)) || ((F.v6610 == v564)))) {
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p2937))).f_line, F.v6618, F.v6620);
if (yr2399_NonAssignable(F.v6618)) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2937))).f_line, y_str("= and # are not defined for signals, files and semaphores, nor what holds them (VII.B)", 86));
}
if ((((*(yR104 *)rt_nil_check(F.v6618))).f_opaque && (((rt_div(((*(yR104 *)rt_nil_check(F.v6618))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2937))).f_line, ((*(yR104 *)rt_nil_check(F.v6618))).f_tname, y_str(" is opaque here: = is not exported (X.B.3)", 42));
}
F.p2940 = v1338;
if ((((*(yR104 *)rt_nil_check(F.v6618))).f_kind == v801)) {
yr2745_CommonScale(&F.v6612, F.v6618, &F.v6614, F.v6620, yr2890_Unbounded(F.v6618), ((*(yR99 *)rt_nil_check(F.p2937))).f_line);
}
F.p2939 = yr2914_EqCode(F.v6612, F.v6618, F.v6614, F.v6620);
if ((F.v6610 == v564)) {
yr1020_SB();
yr1031_SA(y_str("(!", 2));
yr1038_ST(F.p2939);
yr1031_SA(y_str(")", 1));
F.p2939 = yr1050_SE();
}
(*F.p2939_o) = F.p2939;
(*F.p2940_o) = F.p2940;
return;
}
if ((((((F.v6610 == v582)) || ((F.v6610 == v534))) || ((F.v6610 == v585))) || ((F.v6610 == v537)))) {
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p2937))).f_line, F.v6618, F.v6620);
if ((!yr2923_IsOrdered(F.v6618))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2937))).f_line, y_str("< <= > >= apply to ordered values (VIII.A.1)", 44));
}
F.p2940 = v1338;
if ((((*(yR104 *)rt_nil_check(F.v6618))).f_kind == v801)) {
yr2745_CommonScale(&F.v6612, F.v6618, &F.v6614, F.v6620, yr2890_Unbounded(F.v6618), ((*(yR99 *)rt_nil_check(F.p2937))).f_line);
}
if ((F.v6610 == v582)) {
F.p2939 = yr2905_Infix(F.v6612, y_str("<", 1), F.v6614);
} else if ((F.v6610 == v534)) {
F.p2939 = yr2905_Infix(F.v6612, y_str("<=", 2), F.v6614);
} else if ((F.v6610 == v585)) {
F.p2939 = yr2905_Infix(F.v6612, y_str(">", 1), F.v6614);
} else {
F.p2939 = yr2905_Infix(F.v6612, y_str(">=", 2), F.v6614);
}
(*F.p2939_o) = F.p2939;
(*F.p2940_o) = F.p2940;
return;
}
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p2937))).f_line, F.v6618, F.v6620);
F.v6624 = ((*(yR104 *)rt_nil_check(F.v6618))).f_kind;
if ((((*(yR104 *)rt_nil_check(F.v6618))).f_kind == v840)) {
F.v6624 = ((*(yR104 *)rt_nil_check(F.v6620))).f_kind;
}
if ((F.v6610 == v483)) {
if ((F.v6624 == v807)) {
F.p2940 = v1338;
F.p2939 = yr2905_Infix(F.v6612, y_str("!=", 2), F.v6614);
} else if ((F.v6624 == v828)) {
F.p2940 = F.v6618;
F.p2939 = yr2896_Call2(y_str("y_set_xor", 9), F.v6612, F.v6614);
} else {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2937))).f_line, y_str("XOR applies to BOOLEAN values and sets", 38));
}
(*F.p2939_o) = F.p2939;
(*F.p2940_o) = F.p2940;
return;
}
if ((F.v6624 == v828)) {
F.p2940 = F.v6618;
if ((F.v6610 == v567)) {
F.p2939 = yr2896_Call2(y_str("y_set_union", 11), F.v6612, F.v6614);
} else if ((F.v6610 == v570)) {
F.p2939 = yr2896_Call2(y_str("y_set_diff", 10), F.v6612, F.v6614);
} else if ((F.v6610 == v573)) {
F.p2939 = yr2896_Call2(y_str("y_set_inter", 11), F.v6612, F.v6614);
} else {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2937))).f_line, y_str("this operator does not apply to sets", 36));
}
(*F.p2939_o) = F.p2939;
(*F.p2940_o) = F.p2940;
return;
}
if ((F.v6624 == v798)) {
F.p2940 = yr2890_Unbounded(F.v6618);
if ((F.v6610 == v567)) {
F.p2939 = yr2896_Call2(y_str("rt_add", 6), F.v6612, F.v6614);
} else if ((F.v6610 == v570)) {
F.p2939 = yr2896_Call2(y_str("rt_sub", 6), F.v6612, F.v6614);
} else if ((F.v6610 == v573)) {
F.p2939 = yr2896_Call2(y_str("rt_mul", 6), F.v6612, F.v6614);
} else if ((F.v6610 == v270)) {
F.p2939 = yr2896_Call2(y_str("rt_div", 6), F.v6612, F.v6614);
} else if ((F.v6610 == v372)) {
F.p2939 = yr2896_Call2(y_str("rt_mod", 6), F.v6612, F.v6614);
} else if ((F.v6610 == v576)) {
F.p2940 = v1348;
yr1020_SB();
yr1031_SA(y_str("rt_fdiv((double)(", 17));
yr1038_ST(F.v6612);
yr1031_SA(y_str("), (double)(", 12));
yr1038_ST(F.v6614);
yr1031_SA(y_str("))", 2));
F.p2939 = yr1050_SE();
} else {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2937))).f_line, F.v6610, y_str(" is a free operator: no definition of it is visible (VIII.A)", 60));
}
(*F.p2939_o) = F.p2939;
(*F.p2940_o) = F.p2940;
return;
}
if ((F.v6624 == v804)) {
F.p2940 = yr2890_Unbounded(F.v6618);
if ((F.v6610 == v567)) {
F.p2939 = yr2773_FloatChk(yr2905_Infix(F.v6612, y_str("+", 1), F.v6614));
} else if ((F.v6610 == v570)) {
F.p2939 = yr2773_FloatChk(yr2905_Infix(F.v6612, y_str("-", 1), F.v6614));
} else if ((F.v6610 == v573)) {
F.p2939 = yr2773_FloatChk(yr2905_Infix(F.v6612, y_str("*", 1), F.v6614));
} else if ((F.v6610 == v576)) {
F.p2940 = v1348;
F.p2939 = yr2773_FloatChk(yr2896_Call2(y_str("rt_fdiv", 7), F.v6612, F.v6614));
} else {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2937))).f_line, F.v6610, y_str(" does not apply to these numbers", 32));
}
(*F.p2939_o) = F.p2939;
(*F.p2940_o) = F.p2940;
return;
}
if ((F.v6624 == v801)) {
F.p2940 = yr2890_Unbounded(F.v6618);
if ((((F.v6610 == v567)) || ((F.v6610 == v570)))) {
yr2745_CommonScale(&F.v6612, F.v6618, &F.v6614, F.v6620, F.p2940, ((*(yR99 *)rt_nil_check(F.p2937))).f_line);
if ((F.v6610 == v567)) {
F.p2939 = yr2896_Call2(y_str("y_fix_add", 9), F.v6612, F.v6614);
} else {
F.p2939 = yr2896_Call2(y_str("y_fix_sub", 9), F.v6612, F.v6614);
}
} else if ((F.v6610 == v573)) {
yr2552_SetScale(F.p2940, yr2519_MulChk(((*(yR104 *)rt_nil_check(F.v6618))).f_fsn, ((*(yR104 *)rt_nil_check(F.v6620))).f_fsn, ((*(yR99 *)rt_nil_check(F.p2937))).f_line), yr2519_MulChk(((*(yR104 *)rt_nil_check(F.v6618))).f_fsd, ((*(yR104 *)rt_nil_check(F.v6620))).f_fsd, ((*(yR99 *)rt_nil_check(F.p2937))).f_line));
F.p2939 = yr2896_Call2(y_str("y_fix_mul", 9), F.v6612, F.v6614);
} else if ((F.v6610 == v576)) {
F.p2940 = v1348;
F.p2939 = yr2773_FloatChk(yr2896_Call2(y_str("rt_fdiv", 7), yr2929_FixToFloat(F.v6612, F.v6618), yr2929_FixToFloat(F.v6614, F.v6620)));
} else {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2937))).f_line, F.v6610, y_str(" does not apply to these numbers", 32));
}
(*F.p2939_o) = F.p2939;
(*F.p2940_o) = F.p2940;
return;
}
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2937))).f_line, F.v6610, y_str(" does not apply to these values", 31));
(*F.p2939_o) = F.p2939;
(*F.p2940_o) = F.p2940;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2945_Fits(void * a_p2946, void * a_p2947) {
struct yf2948 F;
memset((void *)&F, 0, sizeof F);
F.p2946 = a_p2946;
F.p2947 = a_p2947;
if ((((*(yR104 *)rt_nil_check(F.p2946))).f_kind == v837)) {
if ((!yr2368_IsArrayLike(F.p2947))) {
{ rt_int rv6672 = 0;
return rv6672; }
}
if ((!(((*(yR104 *)rt_nil_check(F.p2947))).f_nidx == ((*(yR104 *)rt_nil_check(F.p2946))).f_nidx))) {
{ rt_int rv6674 = 0;
return rv6674; }
}
{ rt_int rv6675 = yr2423_SameType(((*(yR104 *)rt_nil_check(F.p2946))).f_elem, ((*(yR104 *)rt_nil_check(F.p2947))).f_elem);
return rv6675; }
}
if ((((*(yR104 *)rt_nil_check(F.p2946))).f_kind == v849)) {
{ rt_int rv6677 = 1;
return rv6677; }
}
{ rt_int rv6678 = yr2423_SameType(F.p2946, F.p2947);
return rv6678; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2952_Choose(void * a_p2953, rt_int a_p2954, rt_int a_p2955) {
struct yf2956 F;
memset((void *)&F, 0, sizeof F);
F.p2953 = a_p2953;
F.p2954 = a_p2954;
F.p2955 = a_p2955;
F.v6684 = F.p2953;
while ((!(F.v6684 == ((void *)0)))) {
if ((((*(yR119 *)rt_nil_check(F.v6684))).f_nparams == F.p2955)) {
F.v6688 = 1;
F.v6686 = ((*(yR119 *)rt_nil_check(F.v6684))).f_params;
F.v6690 = INT64_C(1);
while ((!(F.v6686 == ((void *)0)))) {
if ((!yr2945_Fits(((*(yR114 *)rt_nil_check(F.v6686))).f_rep, ((void * *)(v1493).p)[y_ix1(v1493, rt_add(F.p2954, F.v6690))]))) {
F.v6688 = 0;
}
F.v6690 = rt_range(rt_add(F.v6690, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6686 = ((*(yR114 *)rt_nil_check(F.v6686))).f_next;
}
if (F.v6688) {
{ void * rv6697 = F.v6684;
return rv6697; }
}
}
F.v6684 = ((*(yR119 *)rt_nil_check(F.v6684))).f_alt;
}
{ void * rv6698 = ((void *)0);
return rv6698; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2960_HidesStandard(void * a_p2961) {
struct yf2962 F;
memset((void *)&F, 0, sizeof F);
F.p2961 = a_p2961;
F.v6702 = F.p2961;
while ((!(F.v6702 == ((void *)0)))) {
if ((((!(((*(yR119 *)rt_nil_check(F.v6702))).f_decl == ((void *)0)))) && ((((*(yR99 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v6702))).f_decl))).f_ival == INT64_C(0))))) {
{ rt_int rv6705 = 1;
return rv6705; }
}
F.v6702 = ((*(yR119 *)rt_nil_check(F.v6702))).f_alt;
}
{ rt_int rv6707 = 0;
return rv6707; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2966_CompileArgs(void * a_p2967, void * a_p2968, rt_int * a_p2969, rt_int * a_p2970) {
struct yf2971 F;
memset((void *)&F, 0, sizeof F);
F.p2967 = a_p2967;
F.p2968 = a_p2968;
F.p2969_o = a_p2969;
F.p2970_o = a_p2970;
F.v6714 = F.p2967;
F.v6716 = ((void *)0);
F.p2969 = v1506;
F.p2970 = INT64_C(0);
if ((!(F.p2968 == ((void *)0)))) {
F.v6716 = ((*(yR119 *)rt_nil_check(F.p2968))).f_params;
}
while ((!(F.v6714 == ((void *)0)))) {
if ((v1506 >= INT64_C(4000))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.v6714))).f_line, y_str("calls nested too deeply", 23));
}
F.p2970 = rt_range(rt_add(F.p2970, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1506 = rt_range(rt_add(F.p2969, F.p2970), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6718 = ((void *)0);
if ((!(F.v6716 == ((void *)0)))) {
F.v6718 = ((*(yR114 *)rt_nil_check(F.v6716))).f_rep;
F.v6716 = ((*(yR114 *)rt_nil_check(F.v6716))).f_next;
}
yr2846_Expr(F.v6714, F.v6718, &((rt_int *)(v1482).p)[y_ix1(v1482, rt_add(F.p2969, F.p2970))], &((void * *)(v1493).p)[y_ix1(v1493, rt_add(F.p2969, F.p2970))]);
((void * *)(v1504).p)[y_ix1(v1504, rt_add(F.p2969, F.p2970))] = F.v6714;
F.v6714 = ((*(yR99 *)rt_nil_check(F.v6714))).f_next;
}
(*F.p2969_o) = F.p2969;
(*F.p2970_o) = F.p2970;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2975_CheckUnresolved(void * a_p2976, void * a_p2977, rt_int a_p2978) {
struct yf2979 F;
memset((void *)&F, 0, sizeof F);
F.p2976 = a_p2976;
F.p2977 = a_p2977;
F.p2978 = a_p2978;
if ((((!(((*(yR104 *)rt_nil_check(F.p2976))).f_kind == v837))) || ((!(((*(yR104 *)rt_nil_check(F.p2977))).f_kind == v816))))) {
return;
}
F.v6733 = ((*(yR104 *)rt_nil_check(F.p2977))).f_idx;
while ((!(F.v6733 == ((void *)0)))) {
if ((!(((*(yR104 *)rt_nil_check(F.v6733))).f_kind == v798))) {
yr1172_FailS(F.p2978, y_str("a length-unresolved array formal takes arrays with integer indices only (X.A.3)", 79));
}
F.v6733 = ((*(yR104 *)rt_nil_check(F.v6733))).f_link;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2983_SameAsFormal(void * a_p2984, void * a_p2985) {
struct yf2986 F;
memset((void *)&F, 0, sizeof F);
F.p2984 = a_p2984;
F.p2985 = a_p2985;
if ((((*(yR104 *)rt_nil_check(F.p2984))).f_kind == v849)) {
{ rt_int rv6739 = 1;
return rv6739; }
}
if ((((*(yR104 *)rt_nil_check(F.p2984))).f_kind == v837)) {
if ((!((((((*(yR104 *)rt_nil_check(F.p2985))).f_kind == v816)) || ((((*(yR104 *)rt_nil_check(F.p2985))).f_kind == v837)))))) {
{ rt_int rv6741 = 0;
return rv6741; }
}
{ rt_int rv6742 = yr2465_Identical(((*(yR104 *)rt_nil_check(F.p2984))).f_elem, ((*(yR104 *)rt_nil_check(F.p2985))).f_elem);
return rv6742; }
}
{ rt_int rv6743 = yr2465_Identical(F.p2984, F.p2985);
return rv6743; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2990_CallCode(void * a_p2991, rt_int a_p2992, rt_int a_p2993, rt_int a_p2994) {
struct yf2995 F;
memset((void *)&F, 0, sizeof F);
F.p2991 = a_p2991;
F.p2992 = a_p2992;
F.p2993 = a_p2993;
F.p2994 = a_p2994;
F.v6750 = ((*(yR119 *)rt_nil_check(F.p2991))).f_params;
F.v6752 = rt_range(rt_add(F.p2992, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6756 = 1;
F.v6759 = INT64_C(0);
F.v6762 = INT64_C(0);
F.v6765 = INT64_C(0);
F.v6768 = INT64_C(0);
F.v6771 = INT64_C(0);
if ((!(F.p2993 == ((*(yR119 *)rt_nil_check(F.p2991))).f_nparams))) {
yr1180_FailN(F.p2994, ((*(yR119 *)rt_nil_check(F.p2991))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
yr3282_CheckActuals(F.p2991, F.p2992, F.p2994);
yr1020_SB();
yr1038_ST(((*(yR119 *)rt_nil_check(F.p2991))).f_cname);
yr1031_SA(y_str("(", 1));
if ((((*(yR119 *)rt_nil_check(F.p2991))).f_level > INT64_C(1))) {
yr1038_ST(yr2318_FramePtr(rt_range(rt_sub(((*(yR119 *)rt_nil_check(F.p2991))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v6756 = 0;
}
while ((!(F.v6750 == ((void *)0)))) {
if ((!F.v6756)) {
yr1031_SA(y_str(", ", 2));
}
F.v6756 = 0;
if ((!yr2945_Fits(((*(yR114 *)rt_nil_check(F.v6750))).f_rep, ((void * *)(v1493).p)[y_ix1(v1493, F.v6752)]))) {
v921 = 0;
yr2430_TypeClash(((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v6752)]))).f_line, ((*(yR114 *)rt_nil_check(F.v6750))).f_rep, ((void * *)(v1493).p)[y_ix1(v1493, F.v6752)]);
}
yr2975_CheckUnresolved(((*(yR114 *)rt_nil_check(F.v6750))).f_rep, ((void * *)(v1493).p)[y_ix1(v1493, F.v6752)], ((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v6752)]))).f_line);
if ((((*(yR114 *)rt_nil_check(F.v6750))).f_cls == v891)) {
yr1038_ST(yr2779_Convert(((rt_int *)(v1482).p)[y_ix1(v1482, F.v6752)], ((*(yR114 *)rt_nil_check(F.v6750))).f_rep, ((void * *)(v1493).p)[y_ix1(v1493, F.v6752)]));
} else {
if ((!yr2807_IsVariable(((void * *)(v1504).p)[y_ix1(v1504, F.v6752)]))) {
v921 = 0;
yr1180_FailN(((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v6752)]))).f_line, ((*(yR114 *)rt_nil_check(F.v6750))).f_name, y_str(": the actual of a VAR or OUT parameter must be a variable", 57));
}
yr2813_CheckPure(((void * *)(v1504).p)[y_ix1(v1504, F.v6752)]);
yr3249_NoteWrite(((void * *)(v1504).p)[y_ix1(v1504, F.v6752)]);
if (yr2983_SameAsFormal(((*(yR114 *)rt_nil_check(F.v6750))).f_rep, ((void * *)(v1493).p)[y_ix1(v1493, F.v6752)])) {
yr1031_SA(y_str("&", 1));
yr1038_ST(((rt_int *)(v1482).p)[y_ix1(v1482, F.v6752)]);
} else if ((((*(yR114 *)rt_nil_check(F.v6750))).f_cls == v897)) {
yr1180_FailN(((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v6752)]))).f_line, ((*(yR114 *)rt_nil_check(F.v6750))).f_name, y_str(": a VAR actual has the representation of its formal (VII.G, X.A.2)", 66));
} else {
F.v6765 = yr1194_Fresh(y_str("yo", 2));
F.v6759 = yr3194_Join(F.v6759, yr3194_Join(yr2405_CType(((*(yR114 *)rt_nil_check(F.v6750))).f_rep), yr1055_T(y_str(" ", 1)), F.v6765), yr1055_T(y_str(";", 1)));
if ((((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v6750))).f_rep))).f_kind == v837)) {
F.v6759 = yr3194_Join(F.v6759, yr3194_Join(yr1055_T(y_str(" ", 1)), F.v6765, yr1055_T(y_str(" = y_like(", 10))), yr3194_Join(((rt_int *)(v1482).p)[y_ix1(v1482, F.v6752)], yr3194_Join(yr1055_T(y_str(", ", 2)), yr2999_Num(((*(yR104 *)rt_nil_check(((void * *)(v1493).p)[y_ix1(v1493, F.v6752)]))).f_nidx), yr1055_T(y_str(", ", 2))), yr3194_Join(yr2411_DescOf(((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v6750))).f_rep))).f_elem), yr1055_T(y_str(");", 2)), INT64_C(0))));
} else if (yr2380_Deep(((*(yR114 *)rt_nil_check(F.v6750))).f_rep)) {
F.v6759 = yr3194_Join(F.v6759, yr3194_Join(yr1055_T(y_str(" y_init(", 8)), yr2411_DescOf(((*(yR114 *)rt_nil_check(F.v6750))).f_rep), yr1055_T(y_str(", &", 3))), yr3194_Join(F.v6765, yr1055_T(y_str(");", 2)), INT64_C(0)));
}
F.v6762 = yr3194_Join(F.v6762, yr1055_T(y_str(" ", 1)), yr2787_StoreText(((rt_int *)(v1482).p)[y_ix1(v1482, F.v6752)], ((void * *)(v1493).p)[y_ix1(v1493, F.v6752)], F.v6765, ((*(yR114 *)rt_nil_check(F.v6750))).f_rep, ((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v6752)]))).f_line));
yr1031_SA(y_str("&", 1));
yr1038_ST(F.v6765);
}
}
F.v6752 = rt_range(rt_add(F.v6752, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6750 = ((*(yR114 *)rt_nil_check(F.v6750))).f_next;
}
yr1031_SA(y_str(")", 1));
v1506 = F.p2992;
F.v6768 = yr1050_SE();
if ((F.v6759 == INT64_C(0))) {
{ rt_int rv6805 = F.v6768;
return rv6805; }
}
yr1020_SB();
yr1031_SA(y_str("({ ", 3));
yr1038_ST(F.v6759);
if ((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.p2991))).f_ret))).f_kind == v846)) {
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v6768);
yr1031_SA(y_str(";", 1));
yr1038_ST(F.v6762);
yr1031_SA(y_str(" })", 3));
} else {
F.v6771 = yr1194_Fresh(y_str("yv", 2));
yr1031_SA(y_str(" ", 1));
yr1038_ST(yr2405_CType(((*(yR119 *)rt_nil_check(F.p2991))).f_ret));
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v6771);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(F.v6768);
yr1031_SA(y_str(";", 1));
yr1038_ST(F.v6762);
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v6771);
yr1031_SA(y_str("; })", 4));
}
{ rt_int rv6817 = yr1050_SE();
return rv6817; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2999_Num(rt_int a_p3000) {
struct yf3001 F;
memset((void *)&F, 0, sizeof F);
F.p3000 = a_p3000;
yr1020_SB();
yr1044_SI(F.p3000);
{ rt_int rv6820 = yr1050_SE();
return rv6820; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3005_UserOp(void * a_p3006, rt_int a_p3007, void * a_p3008, void * a_p3009, rt_int * a_p3010, void * * a_p3011) {
struct yf3012 F;
memset((void *)&F, 0, sizeof F);
F.p3006 = a_p3006;
F.p3007 = a_p3007;
F.p3008 = a_p3008;
F.p3009 = a_p3009;
F.p3010_o = a_p3010;
F.p3011_o = a_p3011;
F.v6829 = yr2232_Find(F.p3007);
if ((F.v6829 == ((void *)0))) {
{ rt_int rv6837 = 0;
(*F.p3010_o) = F.p3010;
(*F.p3011_o) = F.p3011;
return rv6837; }
}
F.v6829 = yr2337_Real(F.v6829);
if ((!(((*(yR119 *)rt_nil_check(F.v6829))).f_kind == v870))) {
{ rt_int rv6839 = 0;
(*F.p3010_o) = F.p3010;
(*F.p3011_o) = F.p3011;
return rv6839; }
}
((*(yR99 *)rt_nil_check(F.p3008))).f_next = F.p3009;
if ((!(F.p3009 == ((void *)0)))) {
((*(yR99 *)rt_nil_check(F.p3009))).f_next = ((void *)0);
}
yr2966_CompileArgs(F.p3008, ((void *)0), &F.v6833, &F.v6835);
F.v6831 = yr2952_Choose(F.v6829, F.v6833, F.v6835);
if ((F.v6831 == ((void *)0))) {
v1506 = F.v6833;
if (yr2960_HidesStandard(F.v6829)) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3006))).f_line, F.p3007, y_str(": no definition takes operands of these types", 45));
}
{ rt_int rv6842 = 0;
(*F.p3010_o) = F.p3010;
(*F.p3011_o) = F.p3011;
return rv6842; }
}
yr3016_NoteCall(F.v6831, ((*(yR99 *)rt_nil_check(F.p3006))).f_line);
F.p3010 = yr2990_CallCode(F.v6831, F.v6833, F.v6835, ((*(yR99 *)rt_nil_check(F.p3006))).f_line);
F.p3011 = ((*(yR119 *)rt_nil_check(F.v6831))).f_ret;
{ rt_int rv6844 = 1;
(*F.p3010_o) = F.p3010;
(*F.p3011_o) = F.p3011;
return rv6844; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3016_NoteCall(void * a_p3017, rt_int a_p3018) {
struct yf3019 F;
memset((void *)&F, 0, sizeof F);
F.p3017 = a_p3017;
F.p3018 = a_p3018;
F.v6851 = F.p3017;
if ((((((*(yR119 *)rt_nil_check(F.v6851))).f_kind == v870)) && ((!(((*(yR119 *)rt_nil_check(F.v6851))).f_target == ((void *)0)))))) {
F.v6851 = ((*(yR119 *)rt_nil_check(F.v6851))).f_target;
}
if ((!((*(yR119 *)rt_nil_check(F.v6851))).f_func)) {
v1627 = rt_range(rt_add(v1627, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((v1595 == ((void *)0))) {
return;
}
F.v6849 = yr1888_NewNode(v663, F.p3018);
((*(yR99 *)rt_nil_check(F.v6849))).f_sym = F.v6851;
((*(yR99 *)rt_nil_check(F.v6849))).f_next = ((*(yR119 *)rt_nil_check(v1595))).f_calls;
((*(yR119 *)rt_nil_check(v1595))).f_calls = F.v6849;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3023_UserAssign(rt_int a_p3024, void * a_p3025, rt_int a_p3026, void * a_p3027, rt_int a_p3028) {
struct yf3029 F;
memset((void *)&F, 0, sizeof F);
F.p3024 = a_p3024;
F.p3025 = a_p3025;
F.p3026 = a_p3026;
F.p3027 = a_p3027;
F.p3028 = a_p3028;
F.v6861 = yr2232_Find(rt_range(v525, INT64_C(0), INT64_C(4000000)));
if ((F.v6861 == ((void *)0))) {
{ rt_int rv6871 = INT64_C(0);
return rv6871; }
}
F.v6861 = yr2337_Real(F.v6861);
if ((!(((*(yR119 *)rt_nil_check(F.v6861))).f_kind == v870))) {
{ rt_int rv6873 = INT64_C(0);
return rv6873; }
}
F.v6863 = F.v6861;
while ((!(F.v6863 == ((void *)0)))) {
if ((((*(yR119 *)rt_nil_check(F.v6863))).f_nparams == INT64_C(2))) {
F.v6865 = ((*(yR119 *)rt_nil_check(F.v6863))).f_params;
F.v6867 = ((*(yR114 *)rt_nil_check(F.v6865))).f_next;
if ((((((!(((*(yR114 *)rt_nil_check(F.v6865))).f_cls == v891))) && ((((*(yR114 *)rt_nil_check(F.v6867))).f_cls == v891))) && yr2423_SameType(((*(yR114 *)rt_nil_check(F.v6865))).f_rep, F.p3025)) && yr2423_SameType(((*(yR114 *)rt_nil_check(F.v6867))).f_rep, F.p3027))) {
if ((v1595 == F.v6863)) {
{ rt_int rv6876 = INT64_C(0);
return rv6876; }
}
yr3016_NoteCall(F.v6863, F.p3028);
yr1020_SB();
if (yr2465_Identical(((*(yR114 *)rt_nil_check(F.v6865))).f_rep, F.p3025)) {
yr1038_ST(((*(yR119 *)rt_nil_check(F.v6863))).f_cname);
yr1031_SA(y_str("(", 1));
if ((((*(yR119 *)rt_nil_check(F.v6863))).f_level > INT64_C(1))) {
yr1038_ST(yr2318_FramePtr(rt_range(rt_sub(((*(yR119 *)rt_nil_check(F.v6863))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr1031_SA(y_str(", ", 2));
}
yr1031_SA(y_str("&", 1));
yr1038_ST(F.p3024);
} else {
F.v6869 = yr1194_Fresh(y_str("yo", 2));
yr1031_SA(y_str("{ ", 2));
yr1038_ST(yr2405_CType(((*(yR114 *)rt_nil_check(F.v6865))).f_rep));
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v6869);
yr1031_SA(y_str(";", 1));
if (yr2380_Deep(((*(yR114 *)rt_nil_check(F.v6865))).f_rep)) {
yr1031_SA(y_str(" y_init(", 8));
yr1038_ST(yr2411_DescOf(((*(yR114 *)rt_nil_check(F.v6865))).f_rep));
yr1031_SA(y_str(", &", 3));
yr1038_ST(F.v6869);
yr1031_SA(y_str(");", 2));
}
yr1031_SA(y_str(" ", 1));
yr1038_ST(((*(yR119 *)rt_nil_check(F.v6863))).f_cname);
yr1031_SA(y_str("(", 1));
if ((((*(yR119 *)rt_nil_check(F.v6863))).f_level > INT64_C(1))) {
yr1038_ST(yr2318_FramePtr(rt_range(rt_sub(((*(yR119 *)rt_nil_check(F.v6863))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr1031_SA(y_str(", ", 2));
}
yr1031_SA(y_str("&", 1));
yr1038_ST(F.v6869);
}
yr1031_SA(y_str(", ", 2));
yr1038_ST(yr2779_Convert(F.p3026, ((*(yR114 *)rt_nil_check(F.v6867))).f_rep, F.p3027));
yr1031_SA(y_str(");", 2));
if ((!yr2465_Identical(((*(yR114 *)rt_nil_check(F.v6865))).f_rep, F.p3025))) {
yr1031_SA(y_str(" ", 1));
yr1038_ST(yr2787_StoreText(F.p3024, F.p3025, F.v6869, ((*(yR114 *)rt_nil_check(F.v6865))).f_rep, F.p3028));
yr1031_SA(y_str(" }", 2));
}
{ rt_int rv6901 = yr1050_SE();
return rv6901; }
}
}
F.v6863 = ((*(yR119 *)rt_nil_check(F.v6863))).f_alt;
}
{ rt_int rv6903 = INT64_C(0);
return rv6903; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3033_Assign(rt_int a_p3034, void * a_p3035, rt_int a_p3036, void * a_p3037, rt_int a_p3038) {
struct yf3039 F;
memset((void *)&F, 0, sizeof F);
F.p3034 = a_p3034;
F.p3035 = a_p3035;
F.p3036 = a_p3036;
F.p3037 = a_p3037;
F.p3038 = a_p3038;
F.v6911 = yr3023_UserAssign(F.p3034, F.p3035, F.p3036, F.p3037, F.p3038);
if ((!(F.v6911 == INT64_C(0)))) {
yr1126_Emit(F.v6911);
} else {
yr2797_Store(F.p3034, F.p3035, F.p3036, F.p3037, F.p3038);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3043_CallExpr(void * a_p3044, void * a_p3045, rt_int a_p3046, rt_int * a_p3047, void * * a_p3048) {
struct yf3049 F;
memset((void *)&F, 0, sizeof F);
F.p3044 = a_p3044;
F.p3045 = a_p3045;
F.p3046 = a_p3046;
F.p3047_o = a_p3047;
F.p3048_o = a_p3048;
F.v6920 = yr2337_Real(yr2244_Lookup(((*(yR99 *)rt_nil_check(F.p3044))).f_name, ((*(yR99 *)rt_nil_check(F.p3044))).f_line));
if ((((*(yR119 *)rt_nil_check(F.v6920))).f_kind == v885)) {
yr3643_StdCall(((*(yR119 *)rt_nil_check(F.v6920))).f_mval, F.p3044, F.p3046, &F.p3047, &F.p3048);
(*F.p3047_o) = F.p3047;
(*F.p3048_o) = F.p3048;
return;
}
if ((((((*(yR119 *)rt_nil_check(F.v6920))).f_kind == v861)) || ((((*(yR119 *)rt_nil_check(F.v6920))).f_kind == v864)))) {
if (F.p3046) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3044))).f_line, y_str("a value is not a statement", 26));
}
yr3053_Denote(((*(yR119 *)rt_nil_check(F.v6920))).f_rep, F.p3044, &F.p3047, &F.p3048);
(*F.p3047_o) = F.p3047;
(*F.p3048_o) = F.p3048;
return;
}
if ((!(((*(yR119 *)rt_nil_check(F.v6920))).f_kind == v870))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3044))).f_line, ((*(yR99 *)rt_nil_check(F.p3044))).f_name, y_str(" is not a routine", 17));
}
if ((((*(yR119 *)rt_nil_check(F.v6920))).f_alt == ((void *)0))) {
yr2966_CompileArgs(((*(yR99 *)rt_nil_check(F.p3044))).f_a, F.v6920, &F.v6924, &F.v6926);
F.v6922 = F.v6920;
} else {
yr2966_CompileArgs(((*(yR99 *)rt_nil_check(F.p3044))).f_a, ((void *)0), &F.v6924, &F.v6926);
F.v6922 = yr2952_Choose(F.v6920, F.v6924, F.v6926);
if ((F.v6922 == ((void *)0))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3044))).f_line, ((*(yR99 *)rt_nil_check(F.p3044))).f_name, y_str(": no definition takes actuals of these types", 44));
}
}
yr3016_NoteCall(F.v6922, ((*(yR99 *)rt_nil_check(F.p3044))).f_line);
F.p3047 = yr2990_CallCode(F.v6922, F.v6924, F.v6926, ((*(yR99 *)rt_nil_check(F.p3044))).f_line);
F.p3048 = ((*(yR119 *)rt_nil_check(F.v6922))).f_ret;
if ((F.p3046 && ((!(((*(yR104 *)rt_nil_check(F.p3048))).f_kind == v846))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3044))).f_line, ((*(yR99 *)rt_nil_check(F.p3044))).f_name, y_str(" returns a value: it is called in an expression (IX.A.2)", 56));
}
if (((!F.p3046) && ((((*(yR104 *)rt_nil_check(F.p3048))).f_kind == v846)))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3044))).f_line, ((*(yR99 *)rt_nil_check(F.p3044))).f_name, y_str(" returns no value", 17));
}
(*F.p3047_o) = F.p3047;
(*F.p3048_o) = F.p3048;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3053_Denote(void * a_p3054, void * a_p3055, rt_int * a_p3056, void * * a_p3057) {
struct yf3058 F;
memset((void *)&F, 0, sizeof F);
F.p3054 = a_p3054;
F.p3055 = a_p3055;
F.p3056_o = a_p3056;
F.p3057_o = a_p3057;
F.v6938 = ((*(yR99 *)rt_nil_check(F.p3055))).f_a;
F.v6958 = INT64_C(0);
F.v6965 = 1;
F.p3057 = F.p3054;
if (((*(yR104 *)rt_nil_check(F.p3054))).f_abstract) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3055))).f_line, ((*(yR104 *)rt_nil_check(F.p3054))).f_tname, y_str(" has no representation to denote a value of", 43));
}
if ((((*(yR104 *)rt_nil_check(F.p3054))).f_kind == v819)) {
if (((*(yR104 *)rt_nil_check(F.p3054))).f_opaque) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3055))).f_line, ((*(yR104 *)rt_nil_check(F.p3054))).f_tname, y_str(" is opaque here (X.B.3)", 23));
}
yr1020_SB();
yr1031_SA(y_str("((", 2));
yr1038_ST(((*(yR104 *)rt_nil_check(F.p3054))).f_cname);
yr1031_SA(y_str("){ ", 3));
F.v6944 = yr1050_SE();
F.v6940 = ((*(yR104 *)rt_nil_check(F.p3054))).f_fields;
while ((!(F.v6940 == ((void *)0)))) {
if ((((((*(yR109 *)rt_nil_check(F.v6940))).f_variant == INT64_C(0))) || ((((*(yR109 *)rt_nil_check(F.v6940))).f_variant == F.v6958)))) {
if ((F.v6938 == ((void *)0))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3055))).f_line, y_str("too few components in this record value", 39));
}
yr2846_Expr(F.v6938, ((*(yR109 *)rt_nil_check(F.v6940))).f_rep, &F.v6942, &F.v6948);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.v6938))).f_line, ((*(yR109 *)rt_nil_check(F.v6940))).f_rep, F.v6948);
if ((F.v6940 == ((*(yR104 *)rt_nil_check(F.p3054))).f_selector)) {
yr2698_Manifest(F.v6938, &F.v6956, &F.v6961);
if ((!F.v6956)) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.v6938))).f_line, y_str("the case-selection value is a manifest constant", 47));
}
F.v6958 = yr3062_VariantOf(F.p3054, F.v6961, ((*(yR99 *)rt_nil_check(F.v6938))).f_line);
}
yr1020_SB();
yr1038_ST(F.v6944);
if ((!F.v6965)) {
yr1031_SA(y_str(", ", 2));
}
F.v6965 = 0;
yr1031_SA(y_str(".f_", 3));
yr1038_ST(((*(yR109 *)rt_nil_check(F.v6940))).f_name);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(yr2779_Convert(F.v6942, ((*(yR109 *)rt_nil_check(F.v6940))).f_rep, F.v6948));
F.v6944 = yr1050_SE();
F.v6938 = ((*(yR99 *)rt_nil_check(F.v6938))).f_next;
}
F.v6940 = ((*(yR109 *)rt_nil_check(F.v6940))).f_next;
}
if ((!(F.v6938 == ((void *)0)))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3055))).f_line, y_str("too many components in this record value", 40));
}
yr1020_SB();
yr1038_ST(F.v6944);
yr1031_SA(y_str(" })", 3));
F.p3056 = yr1050_SE();
(*F.p3056_o) = F.p3056;
(*F.p3057_o) = F.p3057;
return;
}
if ((((*(yR104 *)rt_nil_check(F.p3054))).f_kind == v816)) {
F.v6950 = yr1903_Count(F.v6938);
F.v6944 = yr1194_Fresh(y_str("da", 2));
if ((F.v6950 == INT64_C(1))) {
yr2846_Expr(F.v6938, ((*(yR104 *)rt_nil_check(F.p3054))).f_elem, &F.v6942, &F.v6948);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.v6938))).f_line, ((*(yR104 *)rt_nil_check(F.p3054))).f_elem, F.v6948);
F.v6946 = yr1194_Fresh(y_str("dv", 2));
yr1020_SB();
yr1031_SA(y_str("({ ", 3));
yr1038_ST(yr2405_CType(((*(yR104 *)rt_nil_check(F.p3054))).f_elem));
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v6946);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(yr2779_Convert(F.v6942, ((*(yR104 *)rt_nil_check(F.p3054))).f_elem, F.v6948));
yr1031_SA(y_str("; y_fill(", 9));
yr1038_ST(yr2411_DescOf(F.p3054));
yr1031_SA(y_str(", &", 3));
yr1038_ST(F.v6946);
yr1031_SA(y_str("); })", 5));
F.p3056 = yr1050_SE();
(*F.p3056_o) = F.p3056;
(*F.p3057_o) = F.p3057;
return;
}
yr1020_SB();
yr1031_SA(y_str("({ yarr ", 8));
yr1038_ST(F.v6944);
yr1031_SA(y_str("; y_init(", 9));
yr1038_ST(yr2411_DescOf(F.p3054));
yr1031_SA(y_str(", &", 3));
yr1038_ST(F.v6944);
yr1031_SA(y_str("); if (y_count(", 15));
yr1038_ST(F.v6944);
yr1031_SA(y_str(", ", 2));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p3054))).f_nidx);
yr1031_SA(y_str(") != ", 5));
yr1044_SI(F.v6950);
yr1031_SA(y_str(") rt_raise_msg(RT_X_RANGE, ", 27));
yr1025_SC(34);
yr1031_SA(y_str("wrong number of components", 26));
yr1025_SC(34);
yr1031_SA(y_str(");", 2));
F.p3056 = yr1050_SE();
F.v6954 = INT64_C(0);
while ((!(F.v6938 == ((void *)0)))) {
yr2846_Expr(F.v6938, ((*(yR104 *)rt_nil_check(F.p3054))).f_elem, &F.v6942, &F.v6948);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.v6938))).f_line, ((*(yR104 *)rt_nil_check(F.p3054))).f_elem, F.v6948);
yr1020_SB();
yr1038_ST(F.p3056);
if (yr2380_Deep(((*(yR104 *)rt_nil_check(F.p3054))).f_elem)) {
yr1031_SA(y_str(" { ", 3));
yr1038_ST(yr2405_CType(((*(yR104 *)rt_nil_check(F.p3054))).f_elem));
yr1031_SA(y_str(" dv = ", 6));
yr1038_ST(F.v6942);
yr1031_SA(y_str("; y_copy(", 9));
yr1038_ST(yr2411_DescOf(((*(yR104 *)rt_nil_check(F.p3054))).f_elem));
yr1031_SA(y_str(", &((", 5));
yr1038_ST(yr2405_CType(((*(yR104 *)rt_nil_check(F.p3054))).f_elem));
yr1031_SA(y_str(" *)", 3));
yr1038_ST(F.v6944);
yr1031_SA(y_str(".p)[", 4));
yr1044_SI(F.v6954);
yr1031_SA(y_str("], &dv); }", 10));
} else {
yr1031_SA(y_str(" ((", 3));
yr1038_ST(yr2405_CType(((*(yR104 *)rt_nil_check(F.p3054))).f_elem));
yr1031_SA(y_str(" *)", 3));
yr1038_ST(F.v6944);
yr1031_SA(y_str(".p)[", 4));
yr1044_SI(F.v6954);
yr1031_SA(y_str("] = ", 4));
yr1038_ST(yr2779_Convert(F.v6942, ((*(yR104 *)rt_nil_check(F.p3054))).f_elem, F.v6948));
yr1031_SA(y_str(";", 1));
}
F.p3056 = yr1050_SE();
F.v6954 = rt_range(rt_add(F.v6954, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6938 = ((*(yR99 *)rt_nil_check(F.v6938))).f_next;
}
yr1020_SB();
yr1038_ST(F.p3056);
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v6944);
yr1031_SA(y_str("; })", 4));
F.p3056 = yr1050_SE();
(*F.p3056_o) = F.p3056;
(*F.p3057_o) = F.p3057;
return;
}
if ((((*(yR104 *)rt_nil_check(F.p3054))).f_kind == v828)) {
yr1020_SB();
yr1031_SA(y_str("y_set_new(", 10));
yr1038_ST(yr2486_LoText(((*(yR104 *)rt_nil_check(F.p3054))).f_elem));
yr1031_SA(y_str(", ", 2));
yr1038_ST(yr2492_HiText(((*(yR104 *)rt_nil_check(F.p3054))).f_elem));
yr1031_SA(y_str(")", 1));
F.p3056 = yr1050_SE();
while ((!(F.v6938 == ((void *)0)))) {
yr2846_Expr(F.v6938, ((*(yR104 *)rt_nil_check(F.p3054))).f_elem, &F.v6942, &F.v6948);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.v6938))).f_line, ((*(yR104 *)rt_nil_check(F.p3054))).f_elem, F.v6948);
F.p3056 = yr2896_Call2(y_str("y_set_add", 9), F.p3056, F.v6942);
F.v6938 = ((*(yR99 *)rt_nil_check(F.v6938))).f_next;
}
(*F.p3056_o) = F.p3056;
(*F.p3057_o) = F.p3057;
return;
}
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3055))).f_line, ((*(yR104 *)rt_nil_check(F.p3054))).f_tname, y_str(" has no denotations of values", 29));
(*F.p3056_o) = F.p3056;
(*F.p3057_o) = F.p3057;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3062_VariantOf(void * a_p3063, rt_int a_p3064, rt_int a_p3065) {
struct yf3066 F;
memset((void *)&F, 0, sizeof F);
F.p3063 = a_p3063;
F.p3064 = a_p3064;
F.p3065 = a_p3065;
F.v7027 = ((*(yR104 *)rt_nil_check(F.p3063))).f_fields;
while ((!(F.v7027 == ((void *)0)))) {
if ((!(((*(yR109 *)rt_nil_check(F.v7027))).f_variant == INT64_C(0)))) {
F.v7029 = ((*(yR109 *)rt_nil_check(F.v7027))).f_labels;
while ((!(F.v7029 == ((void *)0)))) {
yr2698_Manifest(F.v7029, &F.v7031, &F.v7033);
if ((F.v7031 && ((F.v7033 == F.p3064)))) {
{ rt_int rv7035 = ((*(yR109 *)rt_nil_check(F.v7027))).f_variant;
return rv7035; }
}
F.v7029 = ((*(yR99 *)rt_nil_check(F.v7029))).f_next;
}
}
F.v7027 = ((*(yR109 *)rt_nil_check(F.v7027))).f_next;
}
{ rt_int rv7037 = INT64_C(-1);
return rv7037; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3070_Emit2(yarr a_p3072, rt_int a_p3073) {
struct yf3074 F;
memset((void *)&F, 0, sizeof F);
F.p3072 = a_p3072;
F.p3073 = a_p3073;
yr1020_SB();
yr1031_SA(F.p3072);
yr1038_ST(F.p3073);
F.v7042 = yr1050_SE();
yr1126_Emit(F.v7042);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3078_Emit3(yarr a_p3080, rt_int a_p3081, yarr a_p3083) {
struct yf3084 F;
memset((void *)&F, 0, sizeof F);
F.p3080 = a_p3080;
F.p3081 = a_p3081;
F.p3083 = a_p3083;
yr1020_SB();
yr1031_SA(F.p3080);
yr1038_ST(F.p3081);
yr1031_SA(F.p3083);
F.v7048 = yr1050_SE();
yr1126_Emit(F.v7048);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3088_PopTo(rt_int a_p3089) {
struct yf3090 F;
memset((void *)&F, 0, sizeof F);
F.p3089 = a_p3089;
if ((v1520 > F.p3089)) {
yr3078_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v1518).p)[y_ix1(v1518, rt_add(F.p3089, INT64_C(1)))], y_str(".prev;", 6));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3094_LeaveBlock(void) {
struct yf3095 F;
memset((void *)&F, 0, sizeof F);
if ((v1548 > INT64_C(0))) {
if ((!(((rt_int *)(v1535).p)[y_ix1(v1535, v1548)] == INT64_C(0)))) {
yr3078_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v1535).p)[y_ix1(v1535, v1548)], y_str(".prev;", 6));
}
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3099_RaiseCode(rt_int a_p3100) {
struct yf3101 F;
memset((void *)&F, 0, sizeof F);
F.p3100 = a_p3100;
yr1020_SB();
yr1031_SA(y_str("rt_raise(rt_exc(", 16));
yr1025_SC(34);
yr1038_ST(F.p3100);
yr1025_SC(34);
yr1031_SA(y_str("));", 3));
{ rt_int rv7066 = yr1050_SE();
return rv7066; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3105_BlockStatements(void * a_p3106) {
struct yf3107 F;
memset((void *)&F, 0, sizeof F);
F.p3106 = a_p3106;
F.v7082 = ((*(yR99 *)rt_nil_check(F.p3106))).f_a;
F.v7084 = INT64_C(0);
while ((!(F.v7082 == ((void *)0)))) {
if ((((((*(yR99 *)rt_nil_check(F.v7082))).f_kind == v639)) && ((F.v7084 == INT64_C(0))))) {
F.v7084 = yr1194_Fresh(y_str("xs", 2));
yr3078_Emit3(y_str("rt_frame *", 10), F.v7084, y_str(" = rt_xtop;", 11));
}
F.v7082 = ((*(yR99 *)rt_nil_check(F.v7082))).f_next;
}
if ((((*(yR99 *)rt_nil_check(F.p3106))).f_b == ((void *)0))) {
v1548 = rt_range(rt_add(v1548, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1535).p)[y_ix1(v1535, v1548)] = INT64_C(0);
((rt_int *)(v1546).p)[y_ix1(v1546, v1548)] = F.v7084;
yr3158_Statements(((*(yR99 *)rt_nil_check(F.p3106))).f_c);
v1548 = rt_range(rt_sub(v1548, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr3226_CheckLabels(((*(yR99 *)rt_nil_check(F.p3106))).f_a);
return;
}
v1624 = 1;
F.v7070 = yr1194_Fresh(y_str("xf", 2));
yr3078_Emit3(y_str("{ rt_frame ", 11), F.v7070, y_str(";", 1));
yr3078_Emit3(y_str("if (RT_TRY(", 11), F.v7070, y_str(")) {", 4));
v1520 = rt_range(rt_add(v1520, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1518).p)[y_ix1(v1518, v1520)] = F.v7070;
v1548 = rt_range(rt_add(v1548, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1535).p)[y_ix1(v1535, v1548)] = F.v7070;
((rt_int *)(v1546).p)[y_ix1(v1546, v1548)] = F.v7084;
yr3158_Statements(((*(yR99 *)rt_nil_check(F.p3106))).f_c);
v1548 = rt_range(rt_sub(v1548, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1520 = rt_range(rt_sub(v1520, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr3226_CheckLabels(((*(yR99 *)rt_nil_check(F.p3106))).f_a);
yr3078_Emit3(y_str("RT_POP(", 7), F.v7070, y_str(");", 2));
yr1132_EmitS(y_str("} else {", 8));
yr3078_Emit3(y_str("RT_POP(", 7), F.v7070, y_str(");", 2));
F.v7072 = yr1194_Fresh(y_str("xc", 2));
yr3078_Emit3(y_str("int ", 4), F.v7072, y_str(" = rt_xcur;", 11));
v1548 = rt_range(rt_add(v1548, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1535).p)[y_ix1(v1535, v1548)] = INT64_C(0);
((rt_int *)(v1546).p)[y_ix1(v1546, v1548)] = INT64_C(0);
v1562 = rt_range(rt_add(v1562, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1560).p)[y_ix1(v1560, v1562)] = F.v7072;
F.v7080 = 1;
F.v7076 = ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3106))).f_b))).f_a;
while ((!(F.v7076 == ((void *)0)))) {
yr1020_SB();
if (F.v7080) {
yr1031_SA(y_str("if (", 4));
} else {
yr1031_SA(y_str("} else if (", 11));
}
F.v7080 = 0;
F.v7078 = ((*(yR99 *)rt_nil_check(F.v7076))).f_a;
while ((!(F.v7078 == ((void *)0)))) {
yr1038_ST(F.v7072);
yr1031_SA(y_str(" == rt_exc(", 11));
yr1025_SC(34);
yr1038_ST(((*(yR99 *)rt_nil_check(F.v7078))).f_name);
yr1025_SC(34);
yr1031_SA(y_str(")", 1));
if ((!(((*(yR99 *)rt_nil_check(F.v7078))).f_next == ((void *)0)))) {
yr1031_SA(y_str(" || ", 4));
}
F.v7078 = ((*(yR99 *)rt_nil_check(F.v7078))).f_next;
}
yr1031_SA(y_str(") {", 3));
F.v7074 = yr1050_SE();
yr1126_Emit(F.v7074);
yr3158_Statements(((*(yR99 *)rt_nil_check(F.v7076))).f_b);
F.v7076 = ((*(yR99 *)rt_nil_check(F.v7076))).f_next;
}
if ((!F.v7080)) {
yr1132_EmitS(y_str("} else {", 8));
}
if ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3106))).f_b))).f_flag == INT64_C(1))) {
yr3158_Statements(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3106))).f_b))).f_b);
} else {
yr3078_Emit3(y_str("rt_raise(", 9), F.v7072, y_str(");", 2));
}
if ((!F.v7080)) {
yr1132_EmitS(y_str("}", 1));
}
v1562 = rt_range(rt_sub(v1562, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1548 = rt_range(rt_sub(v1548, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1132_EmitS(y_str("}}", 2));
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3111_SameDesig(void * a_p3112, void * a_p3113) {
struct yf3114 F;
memset((void *)&F, 0, sizeof F);
F.p3112 = a_p3112;
F.p3113 = a_p3113;
if ((((*(yR99 *)rt_nil_check(F.p3112))).f_kind == v795)) {
{ rt_int rv7158 = yr3111_SameDesig(((*(yR99 *)rt_nil_check(F.p3112))).f_a, F.p3113);
return rv7158; }
}
if ((((*(yR99 *)rt_nil_check(F.p3113))).f_kind == v795)) {
{ rt_int rv7159 = yr3111_SameDesig(F.p3112, ((*(yR99 *)rt_nil_check(F.p3113))).f_a);
return rv7159; }
}
if ((!(((*(yR99 *)rt_nil_check(F.p3112))).f_kind == ((*(yR99 *)rt_nil_check(F.p3113))).f_kind))) {
{ rt_int rv7161 = 0;
return rv7161; }
}
if ((((*(yR99 *)rt_nil_check(F.p3112))).f_kind == v771)) {
{ rt_int rv7162 = ((((((*(yR99 *)rt_nil_check(F.p3112))).f_name == ((*(yR99 *)rt_nil_check(F.p3113))).f_name)) && ((((*(yR99 *)rt_nil_check(F.p3112))).f_d == ((void *)0)))) && ((((*(yR99 *)rt_nil_check(F.p3113))).f_d == ((void *)0))));
return rv7162; }
}
if ((((*(yR99 *)rt_nil_check(F.p3112))).f_kind == v777)) {
{ rt_int rv7163 = (((((*(yR99 *)rt_nil_check(F.p3112))).f_name == ((*(yR99 *)rt_nil_check(F.p3113))).f_name)) && yr3111_SameDesig(((*(yR99 *)rt_nil_check(F.p3112))).f_a, ((*(yR99 *)rt_nil_check(F.p3113))).f_a));
return rv7163; }
}
if ((((*(yR99 *)rt_nil_check(F.p3112))).f_kind == v783)) {
{ rt_int rv7164 = yr3111_SameDesig(((*(yR99 *)rt_nil_check(F.p3112))).f_a, ((*(yR99 *)rt_nil_check(F.p3113))).f_a);
return rv7164; }
}
if ((((*(yR99 *)rt_nil_check(F.p3112))).f_kind == v780)) {
if ((!yr3111_SameDesig(((*(yR99 *)rt_nil_check(F.p3112))).f_a, ((*(yR99 *)rt_nil_check(F.p3113))).f_a))) {
{ rt_int rv7166 = 0;
return rv7166; }
}
F.v7147 = ((*(yR99 *)rt_nil_check(F.p3112))).f_b;
F.v7149 = ((*(yR99 *)rt_nil_check(F.p3113))).f_b;
while ((((!(F.v7147 == ((void *)0)))) && ((!(F.v7149 == ((void *)0)))))) {
yr2698_Manifest(F.v7147, &F.v7151, &F.v7155);
yr2698_Manifest(F.v7149, &F.v7153, &F.v7157);
if ((F.v7151 && F.v7153)) {
if ((!(F.v7155 == F.v7157))) {
{ rt_int rv7168 = 0;
return rv7168; }
}
} else if ((!yr3111_SameDesig(F.v7147, F.v7149))) {
{ rt_int rv7170 = 0;
return rv7170; }
}
F.v7147 = ((*(yR99 *)rt_nil_check(F.v7147))).f_next;
F.v7149 = ((*(yR99 *)rt_nil_check(F.v7149))).f_next;
}
{ rt_int rv7171 = (((F.v7147 == ((void *)0))) && ((F.v7149 == ((void *)0))));
return rv7171; }
}
{ rt_int rv7173 = 0;
return rv7173; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3118_CheckVariantSelected(void * a_p3119, void * a_p3120, void * a_p3121) {
struct yf3122 F;
memset((void *)&F, 0, sizeof F);
F.p3119 = a_p3119;
F.p3120 = a_p3120;
F.p3121 = a_p3121;
F.v7179 = v1610;
while ((F.v7179 > INT64_C(0))) {
F.v7181 = ((void * *)(v1606).p)[y_ix1(v1606, F.v7179)];
while ((((*(yR99 *)rt_nil_check(F.v7181))).f_kind == v795)) {
F.v7181 = ((*(yR99 *)rt_nil_check(F.v7181))).f_a;
}
if (((((((*(yR99 *)rt_nil_check(F.v7181))).f_kind == v777)) && ((((*(yR99 *)rt_nil_check(F.v7181))).f_name == ((*(yR109 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p3120))).f_selector))).f_name))) && yr3111_SameDesig(((*(yR99 *)rt_nil_check(F.v7181))).f_a, ((*(yR99 *)rt_nil_check(F.p3119))).f_a))) {
F.v7183 = ((void * *)(v1608).p)[y_ix1(v1608, F.v7179)];
if ((F.v7183 == ((void *)0))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3119))).f_line, ((*(yR99 *)rt_nil_check(F.p3119))).f_name, y_str(" is a component of a variant: the ELSE of a SELECT does not say which variant the record has (VIII.B)", 101));
}
while ((!(F.v7183 == ((void *)0)))) {
F.v7187 = yr3170_Label(F.v7183, ((*(yR109 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p3120))).f_selector))).f_rep);
F.v7193 = 0;
F.v7185 = ((*(yR109 *)rt_nil_check(F.p3121))).f_labels;
while ((!(F.v7185 == ((void *)0)))) {
yr2698_Manifest(F.v7185, &F.v7191, &F.v7189);
if ((F.v7191 && ((F.v7189 == F.v7187)))) {
F.v7193 = 1;
}
F.v7185 = ((*(yR99 *)rt_nil_check(F.v7185))).f_next;
}
if ((!F.v7193)) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3119))).f_line, ((*(yR99 *)rt_nil_check(F.p3119))).f_name, y_str(" is not a component of the variant this CASE selects (VIII.B)", 61));
}
F.v7183 = ((*(yR99 *)rt_nil_check(F.v7183))).f_next;
}
return;
}
F.v7179 = rt_range(rt_sub(F.v7179, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3119))).f_line, ((*(yR99 *)rt_nil_check(F.p3119))).f_name, y_str(" is a component of a variant: it is used inside a SELECT on the case-selection component (VIII.B)", 97));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3126_CheckCaseLabels(void * a_p3127, void * a_p3128) {
struct yf3129 F;
memset((void *)&F, 0, sizeof F);
F.p3127 = a_p3127;
F.p3128 = a_p3128;
F.v7206 = ((*(yR99 *)rt_nil_check(F.p3127))).f_b;
F.v7208 = ((*(yR99 *)rt_nil_check(F.p3127))).f_b;
F.v7210 = INT64_C(0);
F.v7213 = INT64_C(0);
while ((!(F.v7206 == ((void *)0)))) {
F.v7208 = ((*(yR99 *)rt_nil_check(F.v7206))).f_a;
while ((!(F.v7208 == ((void *)0)))) {
F.v7213 = yr3170_Label(F.v7208, F.p3128);
F.lo7218 = INT64_C(1);
F.hi7219 = F.v7210;
{ rt_int hi7223 = F.hi7219;
for (rt_int i7222 = F.lo7218; i7222 <= hi7223; i7222++) { F.c_7221 = i7222;
if ((((rt_int *)(v1622).p)[y_ix1(v1622, F.c_7221)] == F.v7213)) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.v7208))).f_line, y_str("a CASE label appears twice in this SELECT (IX.B.1)", 50));
}
if (i7222 == hi7223) break;
}}
if ((F.v7210 < INT64_C(4096))) {
F.v7210 = rt_range(rt_add(F.v7210, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1622).p)[y_ix1(v1622, F.v7210)] = F.v7213;
}
F.v7208 = ((*(yR99 *)rt_nil_check(F.v7208))).f_next;
}
F.v7206 = ((*(yR99 *)rt_nil_check(F.v7206))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3133_Falls(void * a_p3134) {
struct yf3135 F;
memset((void *)&F, 0, sizeof F);
F.p3134 = a_p3134;
F.v7231 = F.p3134;
F.v7233 = 1;
while ((!(F.v7231 == ((void *)0)))) {
if ((!(((*(yR99 *)rt_nil_check(F.v7231))).f_text == INT64_C(0)))) {
F.v7233 = 1;
}
if (F.v7233) {
F.v7233 = yr3145_Completes(F.v7231);
}
F.v7231 = ((*(yR99 *)rt_nil_check(F.v7231))).f_next;
}
{ rt_int rv7237 = F.v7233;
return rv7237; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3139_BlockFalls(void * a_p3140) {
struct yf3141 F;
memset((void *)&F, 0, sizeof F);
F.p3140 = a_p3140;
if (yr3133_Falls(((*(yR99 *)rt_nil_check(F.p3140))).f_c)) {
{ rt_int rv7243 = 1;
return rv7243; }
}
if ((((*(yR99 *)rt_nil_check(F.p3140))).f_b == ((void *)0))) {
{ rt_int rv7245 = 0;
return rv7245; }
}
F.v7241 = ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3140))).f_b))).f_a;
while ((!(F.v7241 == ((void *)0)))) {
if (yr3133_Falls(((*(yR99 *)rt_nil_check(F.v7241))).f_b)) {
{ rt_int rv7247 = 1;
return rv7247; }
}
F.v7241 = ((*(yR99 *)rt_nil_check(F.v7241))).f_next;
}
if ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3140))).f_b))).f_flag == INT64_C(1))) {
{ rt_int rv7249 = yr3133_Falls(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3140))).f_b))).f_b);
return rv7249; }
}
{ rt_int rv7251 = 0;
return rv7251; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3145_Completes(void * a_p3146) {
struct yf3147 F;
memset((void *)&F, 0, sizeof F);
F.p3146 = a_p3146;
F.v7255 = ((*(yR99 *)rt_nil_check(F.p3146))).f_kind;
if (((((((F.v7255 == v723)) || ((F.v7255 == v726))) || ((F.v7255 == v729))) || ((F.v7255 == v717))) || ((F.v7255 == v720)))) {
{ rt_int rv7263 = 0;
return rv7263; }
}
if ((F.v7255 == v732)) {
if ((!(((*(yR99 *)rt_nil_check(F.p3146))).f_flag == INT64_C(1)))) {
{ rt_int rv7266 = 1;
return rv7266; }
}
F.v7257 = ((*(yR99 *)rt_nil_check(F.p3146))).f_a;
while ((!(F.v7257 == ((void *)0)))) {
if (yr3133_Falls(((*(yR99 *)rt_nil_check(F.v7257))).f_b)) {
{ rt_int rv7268 = 1;
return rv7268; }
}
F.v7257 = ((*(yR99 *)rt_nil_check(F.v7257))).f_next;
}
{ rt_int rv7269 = yr3133_Falls(((*(yR99 *)rt_nil_check(F.p3146))).f_b);
return rv7269; }
}
if ((F.v7255 == v735)) {
if ((!(((*(yR99 *)rt_nil_check(F.p3146))).f_flag == INT64_C(1)))) {
{ rt_int rv7272 = 1;
return rv7272; }
}
F.v7257 = ((*(yR99 *)rt_nil_check(F.p3146))).f_b;
while ((!(F.v7257 == ((void *)0)))) {
if (yr3133_Falls(((*(yR99 *)rt_nil_check(F.v7257))).f_b)) {
{ rt_int rv7274 = 1;
return rv7274; }
}
F.v7257 = ((*(yR99 *)rt_nil_check(F.v7257))).f_next;
}
{ rt_int rv7275 = yr3133_Falls(((*(yR99 *)rt_nil_check(F.p3146))).f_c);
return rv7275; }
}
if ((F.v7255 == v738)) {
yr2698_Manifest(((*(yR99 *)rt_nil_check(F.p3146))).f_a, &F.v7259, &F.v7261);
{ rt_int rv7277 = (!((F.v7259 && ((F.v7261 == INT64_C(1))))));
return rv7277; }
}
if ((F.v7255 == v744)) {
{ rt_int rv7278 = yr3151_Exits(((*(yR99 *)rt_nil_check(F.p3146))).f_b, ((*(yR99 *)rt_nil_check(F.p3146))).f_name);
return rv7278; }
}
if ((F.v7255 == v747)) {
{ rt_int rv7279 = yr3139_BlockFalls(((*(yR99 *)rt_nil_check(F.p3146))).f_a);
return rv7279; }
}
{ rt_int rv7281 = 1;
return rv7281; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3151_Exits(void * a_p3152, rt_int a_p3153) {
struct yf3154 F;
memset((void *)&F, 0, sizeof F);
F.p3152 = a_p3152;
F.p3153 = a_p3153;
F.v7286 = F.p3152;
while ((!(F.v7286 == ((void *)0)))) {
if ((((((*(yR99 *)rt_nil_check(F.v7286))).f_kind == v720)) && ((((*(yR99 *)rt_nil_check(F.v7286))).f_name == F.p3153)))) {
{ rt_int rv7290 = 1;
return rv7290; }
}
if ((((*(yR99 *)rt_nil_check(F.v7286))).f_kind == v732)) {
F.v7288 = ((*(yR99 *)rt_nil_check(F.v7286))).f_a;
while ((!(F.v7288 == ((void *)0)))) {
if (yr3151_Exits(((*(yR99 *)rt_nil_check(F.v7288))).f_b, F.p3153)) {
{ rt_int rv7292 = 1;
return rv7292; }
}
F.v7288 = ((*(yR99 *)rt_nil_check(F.v7288))).f_next;
}
if (yr3151_Exits(((*(yR99 *)rt_nil_check(F.v7286))).f_b, F.p3153)) {
{ rt_int rv7294 = 1;
return rv7294; }
}
} else if ((((*(yR99 *)rt_nil_check(F.v7286))).f_kind == v735)) {
F.v7288 = ((*(yR99 *)rt_nil_check(F.v7286))).f_b;
while ((!(F.v7288 == ((void *)0)))) {
if (yr3151_Exits(((*(yR99 *)rt_nil_check(F.v7288))).f_b, F.p3153)) {
{ rt_int rv7296 = 1;
return rv7296; }
}
F.v7288 = ((*(yR99 *)rt_nil_check(F.v7288))).f_next;
}
if (yr3151_Exits(((*(yR99 *)rt_nil_check(F.v7286))).f_c, F.p3153)) {
{ rt_int rv7298 = 1;
return rv7298; }
}
} else if (((((((*(yR99 *)rt_nil_check(F.v7286))).f_kind == v738)) || ((((*(yR99 *)rt_nil_check(F.v7286))).f_kind == v741))) || ((((*(yR99 *)rt_nil_check(F.v7286))).f_kind == v744)))) {
if (yr3151_Exits(((*(yR99 *)rt_nil_check(F.v7286))).f_b, F.p3153)) {
{ rt_int rv7300 = 1;
return rv7300; }
}
} else if ((((*(yR99 *)rt_nil_check(F.v7286))).f_kind == v747)) {
if (yr3151_Exits(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7286))).f_a))).f_c, F.p3153)) {
{ rt_int rv7302 = 1;
return rv7302; }
}
if ((!(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7286))).f_a))).f_b == ((void *)0)))) {
F.v7288 = ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7286))).f_a))).f_b))).f_a;
while ((!(F.v7288 == ((void *)0)))) {
if (yr3151_Exits(((*(yR99 *)rt_nil_check(F.v7288))).f_b, F.p3153)) {
{ rt_int rv7304 = 1;
return rv7304; }
}
F.v7288 = ((*(yR99 *)rt_nil_check(F.v7288))).f_next;
}
if (yr3151_Exits(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7286))).f_a))).f_b))).f_b, F.p3153)) {
{ rt_int rv7306 = 1;
return rv7306; }
}
}
}
F.v7286 = ((*(yR99 *)rt_nil_check(F.v7286))).f_next;
}
{ rt_int rv7308 = 0;
return rv7308; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3158_Statements(void * a_p3159) {
struct yf3160 F;
memset((void *)&F, 0, sizeof F);
F.p3159 = a_p3159;
F.v7312 = F.p3159;
while ((!(F.v7312 == ((void *)0)))) {
yr3182_Statement(F.v7312);
F.v7312 = ((*(yR99 *)rt_nil_check(F.v7312))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3164_Cond(void * a_p3165) {
struct yf3166 F;
memset((void *)&F, 0, sizeof F);
F.p3165 = a_p3165;
yr2846_Expr(F.p3165, v1338, &F.v7316, &F.v7318);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p3165))).f_line, v1338, F.v7318);
{ rt_int rv7319 = F.v7316;
return rv7319; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3170_Label(void * a_p3171, void * a_p3172) {
struct yf3173 F;
memset((void *)&F, 0, sizeof F);
F.p3171 = a_p3171;
F.p3172 = a_p3172;
if (((((((*(yR99 *)rt_nil_check(F.p3171))).f_kind == v771)) && ((((*(yR99 *)rt_nil_check(F.p3171))).f_d == ((void *)0)))) && ((((*(yR104 *)rt_nil_check(F.p3172))).f_kind == v810)))) {
F.v7328 = yr2297_FindLit(((*(yR99 *)rt_nil_check(F.p3171))).f_name, F.p3172);
if ((!(F.v7328 == ((void *)0)))) {
{ rt_int rv7333 = ((*(yR119 *)rt_nil_check(yr2337_Real(F.v7328)))).f_mval;
return rv7333; }
}
}
yr2846_Expr(F.p3171, F.p3172, &F.v7332, &F.v7330);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p3171))).f_line, F.p3172, F.v7330);
yr2698_Manifest(F.p3171, &F.v7324, &F.v7326);
if ((!F.v7324)) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3171))).f_line, y_str("a CASE label is a manifest constant (IX.B.1)", 44));
}
{ rt_int rv7335 = F.v7326;
return rv7335; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3177_CopyOut(void) {
struct yf3178 F;
memset((void *)&F, 0, sizeof F);
if ((v1595 == ((void *)0))) {
return;
}
F.v7338 = ((*(yR119 *)rt_nil_check(v1595))).f_params;
while ((!(F.v7338 == ((void *)0)))) {
if ((((*(yR114 *)rt_nil_check(F.v7338))).f_cls == v894)) {
yr1020_SB();
yr1031_SA(y_str("(*F.", 4));
yr1038_ST(((*(yR114 *)rt_nil_check(F.v7338))).f_cname);
yr1031_SA(y_str("_o)", 3));
F.v7340 = yr1050_SE();
yr3033_Assign(F.v7340, ((*(yR114 *)rt_nil_check(F.v7338))).f_rep, yr2311_Path(v1273, ((*(yR114 *)rt_nil_check(F.v7338))).f_cname), ((*(yR114 *)rt_nil_check(F.v7338))).f_rep, INT64_C(0));
}
F.v7338 = ((*(yR114 *)rt_nil_check(F.v7338))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3182_Statement(void * a_p3183) {
struct yf3184 F;
memset((void *)&F, 0, sizeof F);
F.p3183 = a_p3183;
F.v7347 = ((*(yR99 *)rt_nil_check(F.p3183))).f_kind;
v994 = ((*(yR99 *)rt_nil_check(F.p3183))).f_line;
if ((!(((*(yR99 *)rt_nil_check(F.p3183))).f_text == INT64_C(0)))) {
yr3214_PlaceLabel(F.p3183);
}
if ((F.v7347 == v708)) {
yr2819_LValue(((*(yR99 *)rt_nil_check(F.p3183))).f_a, &F.v7349, &F.v7361);
yr2813_CheckPure(((*(yR99 *)rt_nil_check(F.p3183))).f_a);
yr3249_NoteWrite(((*(yR99 *)rt_nil_check(F.p3183))).f_a);
if ((((((*(yR104 *)rt_nil_check(F.v7361))).f_kind == v831)) || yr2393_HoldsSignal(F.v7361))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3183))).f_line, y_str("assignment is not defined for signals (VI.A.1.d)", 48));
}
if (yr2399_NonAssignable(F.v7361)) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3183))).f_line, y_str("assignment is not defined for files and semaphores, nor what holds them (VII.B)", 79));
}
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p3183))).f_b, F.v7361, &F.v7351, &F.v7363);
F.v7353 = yr3023_UserAssign(F.v7349, F.v7361, F.v7351, F.v7363, ((*(yR99 *)rt_nil_check(F.p3183))).f_line);
if ((!(F.v7353 == INT64_C(0)))) {
yr1126_Emit(F.v7353);
} else {
if ((((*(yR104 *)rt_nil_check(F.v7361))).f_opaque && (((rt_mod(((*(yR104 *)rt_nil_check(F.v7361))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3183))).f_line, ((*(yR104 *)rt_nil_check(F.v7361))).f_tname, y_str(" is opaque here: := is not exported (X.B.3)", 43));
}
yr2797_Store(F.v7349, F.v7361, F.v7351, F.v7363, ((*(yR99 *)rt_nil_check(F.p3183))).f_line);
}
} else if ((F.v7347 == v711)) {
F.v7377 = yr2232_Find(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3183))).f_a))).f_name);
if ((!(F.v7377 == ((void *)0)))) {
F.v7377 = yr2337_Real(F.v7377);
}
if ((((!(F.v7377 == ((void *)0)))) && ((((*(yR119 *)rt_nil_check(F.v7377))).f_kind == v879)))) {
yr3528_Activate(((*(yR99 *)rt_nil_check(F.p3183))).f_a, F.v7377);
} else {
yr3043_CallExpr(((*(yR99 *)rt_nil_check(F.p3183))).f_a, ((void *)0), 1, &F.v7349, &F.v7361);
yr3070_Emit2(y_str("", 0), F.v7349);
yr1020_SB();
yr1038_ST(F.v7349);
yr1031_SA(y_str(";", 1));
F.v7353 = yr1050_SE();
((*(yR129 *)rt_nil_check((v990).f_tail))).f_t = F.v7353;
}
} else if ((F.v7347 == v732)) {
F.v7369 = 1;
F.v7365 = ((*(yR99 *)rt_nil_check(F.p3183))).f_a;
while ((!(F.v7365 == ((void *)0)))) {
F.v7349 = yr3164_Cond(((*(yR99 *)rt_nil_check(F.v7365))).f_a);
if (F.v7369) {
yr3078_Emit3(y_str("if (", 4), F.v7349, y_str(") {", 3));
} else {
yr3078_Emit3(y_str("} else if (", 11), F.v7349, y_str(") {", 3));
}
F.v7369 = 0;
yr3158_Statements(((*(yR99 *)rt_nil_check(F.v7365))).f_b);
F.v7365 = ((*(yR99 *)rt_nil_check(F.v7365))).f_next;
}
if ((((*(yR99 *)rt_nil_check(F.p3183))).f_flag == INT64_C(1))) {
yr1132_EmitS(y_str("} else {", 8));
yr3158_Statements(((*(yR99 *)rt_nil_check(F.p3183))).f_b);
}
yr1132_EmitS(y_str("}", 1));
} else if ((F.v7347 == v738)) {
F.v7349 = yr3164_Cond(((*(yR99 *)rt_nil_check(F.p3183))).f_a);
yr3078_Emit3(y_str("while (", 7), F.v7349, y_str(") {", 3));
yr3158_Statements(((*(yR99 *)rt_nil_check(F.p3183))).f_b);
yr1132_EmitS(y_str("}", 1));
} else if ((F.v7347 == v744)) {
F.v7355 = yr1194_Fresh(y_str("yl_", 3));
v1589 = rt_range(rt_add(v1589, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1574).p)[y_ix1(v1574, v1589)] = ((*(yR99 *)rt_nil_check(F.p3183))).f_name;
((rt_int *)(v1576).p)[y_ix1(v1576, v1589)] = F.v7355;
((rt_int *)(v1587).p)[y_ix1(v1587, v1589)] = v1520;
yr1132_EmitS(y_str("for (;;) {", 10));
yr3158_Statements(((*(yR99 *)rt_nil_check(F.p3183))).f_b);
yr1132_EmitS(y_str("}", 1));
yr3078_Emit3(y_str("", 0), F.v7355, y_str(": ;", 3));
v1589 = rt_range(rt_sub(v1589, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v7347 == v720)) {
F.v7371 = 0;
F.v7373 = v1589;
while ((((F.v7373 > v1592)) && (!F.v7371))) {
if ((((rt_int *)(v1574).p)[y_ix1(v1574, F.v7373)] == ((*(yR99 *)rt_nil_check(F.p3183))).f_name)) {
F.v7371 = 1;
yr3088_PopTo(((rt_int *)(v1587).p)[y_ix1(v1587, F.v7373)]);
yr3078_Emit3(y_str("goto ", 5), ((rt_int *)(v1576).p)[y_ix1(v1576, F.v7373)], y_str(";", 1));
}
F.v7373 = rt_range(rt_sub(F.v7373, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((!F.v7371)) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3183))).f_line, ((*(yR99 *)rt_nil_check(F.p3183))).f_name, y_str(": EXIT names no LOOP around it here (IX.A.5)", 44));
}
} else if ((F.v7347 == v741)) {
yr3188_ForStatement(F.p3183);
} else if ((F.v7347 == v735)) {
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p3183))).f_a, ((void *)0), &F.v7349, &F.v7361);
if ((!yr2356_IsDiscrete(F.v7361))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3183))).f_line, y_str("SELECT on a value that is not integer or scalar", 47));
}
yr3126_CheckCaseLabels(F.p3183, F.v7361);
yr3078_Emit3(y_str("switch (", 8), F.v7349, y_str(") {", 3));
F.v7365 = ((*(yR99 *)rt_nil_check(F.p3183))).f_b;
while ((!(F.v7365 == ((void *)0)))) {
F.v7367 = ((*(yR99 *)rt_nil_check(F.v7365))).f_a;
while ((!(F.v7367 == ((void *)0)))) {
F.v7375 = yr3170_Label(F.v7367, F.v7361);
yr1020_SB();
yr1031_SA(y_str("case ", 5));
yr1044_SI(F.v7375);
yr1031_SA(y_str(":", 1));
F.v7353 = yr1050_SE();
yr1126_Emit(F.v7353);
F.v7367 = ((*(yR99 *)rt_nil_check(F.v7367))).f_next;
}
yr1132_EmitS(y_str("{", 1));
v1610 = rt_range(rt_add(v1610, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1606).p)[y_ix1(v1606, v1610)] = ((*(yR99 *)rt_nil_check(F.p3183))).f_a;
((void * *)(v1608).p)[y_ix1(v1608, v1610)] = ((*(yR99 *)rt_nil_check(F.v7365))).f_a;
yr3158_Statements(((*(yR99 *)rt_nil_check(F.v7365))).f_b);
v1610 = rt_range(rt_sub(v1610, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1132_EmitS(y_str("} break;", 8));
F.v7365 = ((*(yR99 *)rt_nil_check(F.v7365))).f_next;
}
yr1132_EmitS(y_str("default: {", 10));
v1610 = rt_range(rt_add(v1610, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1606).p)[y_ix1(v1606, v1610)] = ((*(yR99 *)rt_nil_check(F.p3183))).f_a;
((void * *)(v1608).p)[y_ix1(v1608, v1610)] = ((void *)0);
if ((((*(yR99 *)rt_nil_check(F.p3183))).f_flag == INT64_C(1))) {
yr3158_Statements(((*(yR99 *)rt_nil_check(F.p3183))).f_c);
}
v1610 = rt_range(rt_sub(v1610, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1132_EmitS(y_str("} break;", 8));
yr1132_EmitS(y_str("}", 1));
} else if ((F.v7347 == v723)) {
yr3202_ReturnStatement(F.p3183);
} else if ((F.v7347 == v729)) {
if ((((*(yR99 *)rt_nil_check(F.p3183))).f_name == INT64_C(0))) {
if ((v1562 == INT64_C(0))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3183))).f_line, y_str("PROPAGATE_EXCEPTION without a name is used in a handler (IX.A.8)", 64));
}
yr3078_Emit3(y_str("rt_raise(", 9), ((rt_int *)(v1560).p)[y_ix1(v1560, v1562)], y_str(");", 2));
} else {
yr3094_LeaveBlock();
yr1126_Emit(yr3099_RaiseCode(((*(yR99 *)rt_nil_check(F.p3183))).f_name));
}
} else if ((F.v7347 == v714)) {
F.v7373 = v1627;
F.v7349 = yr3164_Cond(((*(yR99 *)rt_nil_check(F.p3183))).f_a);
if ((!(v1627 == F.v7373))) {
yr1158_Warn(((*(yR99 *)rt_nil_check(F.p3183))).f_line, yr1055_T(y_str("the expression of this ASSERT calls a procedure: it might have side effects (IX.A.3)", 84)));
}
yr3078_Emit3(y_str("if (!(", 6), F.v7349, y_str(")) {", 4));
yr3094_LeaveBlock();
yr1132_EmitS(y_str("rt_raise(RT_X_ASSERT); }", 24));
} else if ((F.v7347 == v747)) {
yr3208_BeginStatement(F.p3183);
} else if ((F.v7347 == v726)) {
yr3552_TerminateStatement(F.p3183);
} else if ((F.v7347 == v717)) {
yr3220_GotoStatement(F.p3183);
} else {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3183))).f_line, y_str("not a statement", 15));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3188_ForStatement(void * a_p3189) {
struct yf3190 F;
memset((void *)&F, 0, sizeof F);
F.p3189 = a_p3189;
F.v7449 = yr2587_MakeRep(((*(yR99 *)rt_nil_check(F.p3189))).f_a, INT64_C(0), 0);
if ((((!yr2356_IsDiscrete(F.v7449)) || ((((*(yR104 *)rt_nil_check(F.v7449))).f_kind == v807))) || ((((((*(yR104 *)rt_nil_check(F.v7449))).f_kind == v810)) && (!((*(yR104 *)rt_nil_check(F.v7449))).f_ordered))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3189))).f_line, y_str("FOR goes over an ordered scalar or integer representation (IX.B.2)", 66));
}
yr2446_CheckRepresented(F.v7449, ((*(yR99 *)rt_nil_check(F.p3189))).f_line);
yr2209_OpenScope(0);
F.v7457 = yr2202_NewSym(v858, ((*(yR99 *)rt_nil_check(F.p3189))).f_name);
((*(yR119 *)rt_nil_check(F.v7457))).f_rep = F.v7449;
((*(yR119 *)rt_nil_check(F.v7457))).f_level = v1273;
((*(yR119 *)rt_nil_check(F.v7457))).f_cname = yr1194_Fresh(y_str("c_", 2));
yr2324_DeclStorage(yr1055_T(y_str("rt_int", 6)), ((*(yR119 *)rt_nil_check(F.v7457))).f_cname);
yr2304_Define(F.v7457, ((*(yR99 *)rt_nil_check(F.p3189))).f_line);
F.v7451 = yr1194_Fresh(y_str("i", 1));
F.v7453 = yr1194_Fresh(y_str("hi", 2));
yr1020_SB();
yr1031_SA(y_str("{ rt_int ", 9));
yr1038_ST(F.v7453);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(yr2492_HiText(F.v7449));
yr1031_SA(y_str(";", 1));
F.v7455 = yr1050_SE();
yr1126_Emit(F.v7455);
yr1020_SB();
yr1031_SA(y_str("for (rt_int ", 12));
yr1038_ST(F.v7451);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(yr2486_LoText(F.v7449));
yr1031_SA(y_str("; ", 2));
yr1038_ST(F.v7451);
yr1031_SA(y_str(" <= ", 4));
yr1038_ST(F.v7453);
yr1031_SA(y_str("; ", 2));
yr1038_ST(F.v7451);
yr1031_SA(y_str("++) { ", 6));
yr1038_ST(yr2331_SymPath(F.v7457));
yr1031_SA(y_str(" = ", 3));
yr1038_ST(F.v7451);
yr1031_SA(y_str(";", 1));
F.v7455 = yr1050_SE();
yr1126_Emit(F.v7455);
yr3158_Statements(((*(yR99 *)rt_nil_check(F.p3189))).f_b);
yr3078_Emit3(y_str("if (", 4), F.v7451, y_str(" == ", 4));
((*(yR129 *)rt_nil_check((v990).f_tail))).f_t = yr3194_Join(((*(yR129 *)rt_nil_check((v990).f_tail))).f_t, F.v7453, yr1055_T(y_str(") break;", 8)));
yr1132_EmitS(y_str("}}", 2));
yr2221_CloseScope();
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3194_Join(rt_int a_p3195, rt_int a_p3196, rt_int a_p3197) {
struct yf3198 F;
memset((void *)&F, 0, sizeof F);
F.p3195 = a_p3195;
F.p3196 = a_p3196;
F.p3197 = a_p3197;
yr1020_SB();
yr1038_ST(F.p3195);
yr1038_ST(F.p3196);
yr1038_ST(F.p3197);
{ rt_int rv7485 = yr1050_SE();
return rv7485; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3202_ReturnStatement(void * a_p3203) {
struct yf3204 F;
memset((void *)&F, 0, sizeof F);
F.p3203 = a_p3203;
if ((v1595 == ((void *)0))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3203))).f_line, y_str("RETURN outside a routine (IX.A.6)", 33));
}
if ((((*(yR119 *)rt_nil_check(v1595))).f_kind == v879)) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3203))).f_line, y_str("a process ends with TERMINATE_PROCESS (IX.A.7)", 46));
}
F.v7497 = ((*(yR119 *)rt_nil_check(v1595))).f_ret;
if ((((*(yR99 *)rt_nil_check(F.p3203))).f_a == ((void *)0))) {
if ((!(((*(yR104 *)rt_nil_check(F.v7497))).f_kind == v846))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3203))).f_line, y_str("RETURN needs a value here (IX.A.6)", 34));
}
yr3177_CopyOut();
yr3547_LeaveMonitor();
yr3088_PopTo(v1523);
yr1132_EmitS(y_str("return;", 7));
return;
}
if ((((*(yR104 *)rt_nil_check(F.v7497))).f_kind == v846)) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3203))).f_line, y_str("this routine returns no value (IX.A.6)", 38));
}
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p3203))).f_a, F.v7497, &F.v7489, &F.v7495);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p3203))).f_line, F.v7497, F.v7495);
F.v7493 = yr1194_Fresh(y_str("rv", 2));
yr1020_SB();
yr1031_SA(y_str("{ ", 2));
yr1038_ST(yr2405_CType(F.v7497));
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v7493);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(yr2779_Convert(F.v7489, F.v7497, F.v7495));
yr1031_SA(y_str(";", 1));
F.v7491 = yr1050_SE();
yr1126_Emit(F.v7491);
yr3177_CopyOut();
yr3547_LeaveMonitor();
yr3088_PopTo(v1523);
yr3078_Emit3(y_str("return ", 7), F.v7493, y_str("; }", 3));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3208_BeginStatement(void * a_p3209) {
struct yf3210 F;
memset((void *)&F, 0, sizeof F);
F.p3209 = a_p3209;
yr1132_EmitS(y_str("{", 1));
yr2209_OpenScope(0);
yr3391_Declarations(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3209))).f_a))).f_a);
yr3105_BlockStatements(((*(yR99 *)rt_nil_check(F.p3209))).f_a);
yr3523_AwaitProcesses();
yr2221_CloseScope();
yr1132_EmitS(y_str("}", 1));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3214_PlaceLabel(void * a_p3215) {
struct yf3216 F;
memset((void *)&F, 0, sizeof F);
F.p3215 = a_p3215;
F.v7518 = yr2238_FindHere(((*(yR99 *)rt_nil_check(F.p3215))).f_text);
if ((((F.v7518 == ((void *)0))) || ((!(((*(yR119 *)rt_nil_check(F.v7518))).f_kind == v882))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3215))).f_line, ((*(yR99 *)rt_nil_check(F.p3215))).f_text, y_str(" labels a statement but is not declared by LABEL in this block (VII.C)", 70));
}
if (((*(yR119 *)rt_nil_check(F.v7518))).f_hasmv) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3215))).f_line, ((*(yR99 *)rt_nil_check(F.p3215))).f_text, y_str(" labels two statements", 22));
}
((*(yR119 *)rt_nil_check(F.v7518))).f_hasmv = 1;
yr3078_Emit3(y_str("", 0), ((*(yR119 *)rt_nil_check(F.v7518))).f_cname, y_str(": ;", 3));
if ((!(((rt_int *)(v1535).p)[y_ix1(v1535, v1548)] == INT64_C(0)))) {
yr3078_Emit3(y_str("rt_xtop = &", 11), ((rt_int *)(v1535).p)[y_ix1(v1535, v1548)], y_str(";", 1));
} else if ((!(((rt_int *)(v1546).p)[y_ix1(v1546, v1548)] == INT64_C(0)))) {
yr3078_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v1546).p)[y_ix1(v1546, v1548)], y_str(";", 1));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3220_GotoStatement(void * a_p3221) {
struct yf3222 F;
memset((void *)&F, 0, sizeof F);
F.p3221 = a_p3221;
F.v7533 = yr2244_Lookup(((*(yR99 *)rt_nil_check(F.p3221))).f_name, ((*(yR99 *)rt_nil_check(F.p3221))).f_line);
if ((!(((*(yR119 *)rt_nil_check(F.v7533))).f_kind == v882))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3221))).f_line, ((*(yR99 *)rt_nil_check(F.p3221))).f_name, y_str(" is not a label", 15));
}
if ((!(((*(yR119 *)rt_nil_check(F.v7533))).f_level == v1273))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3221))).f_line, ((*(yR99 *)rt_nil_check(F.p3221))).f_name, y_str(": GOTO does not leave a routine or process (IX.A.4)", 51));
}
((*(yR119 *)rt_nil_check(F.v7533))).f_readonly = 1;
yr3078_Emit3(y_str("goto ", 5), ((*(yR119 *)rt_nil_check(F.v7533))).f_cname, y_str(";", 1));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3226_CheckLabels(void * a_p3227) {
struct yf3228 F;
memset((void *)&F, 0, sizeof F);
F.p3227 = a_p3227;
F.v7542 = F.p3227;
while ((!(F.v7542 == ((void *)0)))) {
if ((((*(yR99 *)rt_nil_check(F.v7542))).f_kind == v639)) {
F.v7544 = ((*(yR99 *)rt_nil_check(F.v7542))).f_a;
while ((!(F.v7544 == ((void *)0)))) {
F.v7546 = yr2238_FindHere(((*(yR99 *)rt_nil_check(F.v7544))).f_name);
if ((((((!(F.v7546 == ((void *)0)))) && ((((*(yR119 *)rt_nil_check(F.v7546))).f_kind == v882))) && ((*(yR119 *)rt_nil_check(F.v7546))).f_readonly) && (!((*(yR119 *)rt_nil_check(F.v7546))).f_hasmv))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.v7544))).f_line, ((*(yR99 *)rt_nil_check(F.v7544))).f_name, y_str(" is the target of a GOTO but labels no statement of its block", 61));
}
F.v7544 = ((*(yR99 *)rt_nil_check(F.v7544))).f_next;
}
}
F.v7542 = ((*(yR99 *)rt_nil_check(F.v7542))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3232_DesigBase(void * a_p3233, void * * a_p3234, rt_int * a_p3235, rt_int * a_p3236) {
struct yf3237 F;
memset((void *)&F, 0, sizeof F);
F.p3233 = a_p3233;
F.p3234_o = a_p3234;
F.p3235_o = a_p3235;
F.p3236_o = a_p3236;
F.v7554 = F.p3233;
F.p3234 = ((void *)0);
F.p3235 = 0;
F.p3236 = INT64_C(0);
for (;;) {
if (((((((*(yR99 *)rt_nil_check(F.v7554))).f_kind == v795)) || ((((*(yR99 *)rt_nil_check(F.v7554))).f_kind == v777))) || ((((*(yR99 *)rt_nil_check(F.v7554))).f_kind == v780)))) {
F.v7554 = ((*(yR99 *)rt_nil_check(F.v7554))).f_a;
} else if ((((*(yR99 *)rt_nil_check(F.v7554))).f_kind == v783)) {
if ((!F.p3235)) {
F.p3235 = 1;
if ((!(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7554))).f_a))).f_rep == ((void *)0)))) {
F.p3236 = ((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7554))).f_a))).f_rep))).f_tid;
}
}
F.v7554 = ((*(yR99 *)rt_nil_check(F.v7554))).f_a;
} else {
goto yl_7559;
}
}
yl_7559: ;
if ((((((*(yR99 *)rt_nil_check(F.v7554))).f_kind == v771)) && ((((*(yR99 *)rt_nil_check(F.v7554))).f_d == ((void *)0))))) {
F.v7556 = yr2232_Find(((*(yR99 *)rt_nil_check(F.v7554))).f_name);
if ((!(F.v7556 == ((void *)0)))) {
if (yr2285_Resolved(F.v7556)) {
F.v7556 = yr2337_Real(F.v7556);
if ((((*(yR119 *)rt_nil_check(F.v7556))).f_kind == v855)) {
F.p3234 = F.v7556;
}
}
}
}
(*F.p3234_o) = F.p3234;
(*F.p3235_o) = F.p3235;
(*F.p3236_o) = F.p3236;
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3241_Note(void * a_p3242, rt_int a_p3243, rt_int a_p3244) {
struct yf3245 F;
memset((void *)&F, 0, sizeof F);
F.p3242 = a_p3242;
F.p3243 = a_p3243;
F.p3244 = a_p3244;
F.v7566 = yr1888_NewNode(v663, F.p3244);
((*(yR99 *)rt_nil_check(F.v7566))).f_sym = F.p3242;
((*(yR99 *)rt_nil_check(F.v7566))).f_name = F.p3243;
{ void * rv7567 = F.v7566;
return rv7567; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3249_NoteWrite(void * a_p3250) {
struct yf3251 F;
memset((void *)&F, 0, sizeof F);
F.p3250 = a_p3250;
if ((v1595 == ((void *)0))) {
return;
}
yr3232_DesigBase(F.p3250, &F.v7571, &F.v7573, &F.v7575);
if (F.v7573) {
F.v7571 = ((void *)0);
} else if ((((F.v7571 == ((void *)0))) || ((((*(yR119 *)rt_nil_check(F.v7571))).f_level >= ((*(yR119 *)rt_nil_check(v1595))).f_level)))) {
return;
}
F.v7577 = ((*(yR119 *)rt_nil_check(v1595))).f_writes;
while ((!(F.v7577 == ((void *)0)))) {
if ((((*(yR99 *)rt_nil_check(F.v7577))).f_sym == F.v7571)) {
return;
}
F.v7577 = ((*(yR99 *)rt_nil_check(F.v7577))).f_next;
}
F.v7579 = yr3241_Note(F.v7571, INT64_C(0), ((*(yR99 *)rt_nil_check(F.p3250))).f_line);
((*(yR99 *)rt_nil_check(F.v7579))).f_next = ((*(yR119 *)rt_nil_check(v1595))).f_writes;
((*(yR119 *)rt_nil_check(v1595))).f_writes = F.v7579;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3255_NoteFree(void * a_p3256) {
struct yf3257 F;
memset((void *)&F, 0, sizeof F);
F.p3256 = a_p3256;
if ((v1595 == ((void *)0))) {
return;
}
if ((((!(((*(yR119 *)rt_nil_check(F.p3256))).f_kind == v855))) || ((((*(yR119 *)rt_nil_check(F.p3256))).f_level >= ((*(yR119 *)rt_nil_check(v1595))).f_level)))) {
return;
}
if ((((*(yR119 *)rt_nil_check(F.p3256))).f_seen == ((*(yR119 *)rt_nil_check(v1595))).f_serial)) {
return;
}
((*(yR119 *)rt_nil_check(F.p3256))).f_seen = ((*(yR119 *)rt_nil_check(v1595))).f_serial;
F.v7584 = yr3241_Note(F.p3256, INT64_C(0), v994);
((*(yR99 *)rt_nil_check(F.v7584))).f_next = ((*(yR119 *)rt_nil_check(v1595))).f_frees;
((*(yR119 *)rt_nil_check(v1595))).f_frees = F.v7584;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3261_NoteFreeDeref(void * a_p3262, rt_int a_p3263) {
struct yf3264 F;
memset((void *)&F, 0, sizeof F);
F.p3262 = a_p3262;
F.p3263 = a_p3263;
if ((v1595 == ((void *)0))) {
return;
}
yr3232_DesigBase(F.p3262, &F.v7590, &F.v7592, &F.v7594);
if ((((F.v7590 == ((void *)0))) || ((((*(yR119 *)rt_nil_check(F.v7590))).f_level >= ((*(yR119 *)rt_nil_check(v1595))).f_level)))) {
return;
}
F.v7596 = ((*(yR119 *)rt_nil_check(v1595))).f_frees;
while ((!(F.v7596 == ((void *)0)))) {
if ((((((*(yR99 *)rt_nil_check(F.v7596))).f_sym == ((void *)0))) && ((((*(yR99 *)rt_nil_check(F.v7596))).f_name == F.p3263)))) {
return;
}
F.v7596 = ((*(yR99 *)rt_nil_check(F.v7596))).f_next;
}
F.v7596 = yr3241_Note(((void *)0), F.p3263, ((*(yR99 *)rt_nil_check(F.p3262))).f_line);
((*(yR99 *)rt_nil_check(F.v7596))).f_next = ((*(yR119 *)rt_nil_check(v1595))).f_frees;
((*(yR119 *)rt_nil_check(v1595))).f_frees = F.v7596;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3268_DSteps(void * a_p3269, yarr * a_p3270) {
struct yf3271 F;
memset((void *)&F, 0, sizeof F);
F.p3269 = a_p3269;
F.p3270 = a_p3270;
F.v7601 = F.p3269;
F.v7603 = INT64_C(0);
while (((((((*(yR99 *)rt_nil_check(F.v7601))).f_kind == v795)) || ((((*(yR99 *)rt_nil_check(F.v7601))).f_kind == v777))) || ((((*(yR99 *)rt_nil_check(F.v7601))).f_kind == v780)))) {
if ((!(((*(yR99 *)rt_nil_check(F.v7601))).f_kind == v795))) {
if ((F.v7603 < INT64_C(64))) {
F.v7603 = rt_range(rt_add(F.v7603, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)((*F.p3270)).p)[y_ix1((*F.p3270), F.v7603)] = F.v7601;
}
}
F.v7601 = ((*(yR99 *)rt_nil_check(F.v7601))).f_a;
}
F.lo7615 = INT64_C(1);
F.hi7616 = rt_div(F.v7603, INT64_C(2));
{ rt_int hi7620 = F.hi7616;
for (rt_int i7619 = F.lo7615; i7619 <= hi7620; i7619++) { F.c_7618 = i7619;
F.v7606 = ((void * *)((*F.p3270)).p)[y_ix1((*F.p3270), F.c_7618)];
((void * *)((*F.p3270)).p)[y_ix1((*F.p3270), F.c_7618)] = ((void * *)((*F.p3270)).p)[y_ix1((*F.p3270), rt_sub((rt_add(F.v7603, INT64_C(1))), F.c_7618))];
((void * *)((*F.p3270)).p)[y_ix1((*F.p3270), rt_sub((rt_add(F.v7603, INT64_C(1))), F.c_7618))] = F.v7606;
if (i7619 == hi7620) break;
}}
{ rt_int rv7627 = F.v7603;
return rv7627; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3275_Overlaps(void * a_p3276, void * a_p3277) {
struct yf3278 F;
memset((void *)&F, 0, sizeof F);
F.p3276 = a_p3276;
F.p3277 = a_p3277;
y_init(&yd_195, &F.v7652);
y_init(&yd_195, &F.v7654);
yr3232_DesigBase(F.p3276, &F.v7632, &F.v7636, &F.v7648);
yr3232_DesigBase(F.p3277, &F.v7634, &F.v7638, &F.v7650);
if ((!(F.v7636 == F.v7638))) {
if (((F.v7636 && ((((*(yR99 *)rt_nil_check(F.p3276))).f_kind == v783))) && ((!(((*(yR99 *)rt_nil_check(F.p3277))).f_rep == ((void *)0)))))) {
if ((((((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3277))).f_rep))).f_kind == v822)) && ((((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3277))).f_rep))).f_tid == F.v7648)))) {
{ rt_int rv7672 = 1;
return rv7672; }
}
}
if (((F.v7638 && ((((*(yR99 *)rt_nil_check(F.p3277))).f_kind == v783))) && ((!(((*(yR99 *)rt_nil_check(F.p3276))).f_rep == ((void *)0)))))) {
if ((((((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3276))).f_rep))).f_kind == v822)) && ((((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3276))).f_rep))).f_tid == F.v7650)))) {
{ rt_int rv7674 = 1;
return rv7674; }
}
}
{ rt_int rv7676 = 0;
return rv7676; }
}
if (F.v7636) {
if ((!(F.v7648 == F.v7650))) {
{ rt_int rv7678 = 0;
return rv7678; }
}
} else if ((((F.v7632 == ((void *)0))) || ((!(F.v7632 == F.v7634))))) {
{ rt_int rv7680 = 0;
return rv7680; }
}
F.v7656 = yr3268_DSteps(F.p3276, &F.v7652);
F.v7658 = yr3268_DSteps(F.p3277, &F.v7654);
F.lo7684 = INT64_C(1);
F.hi7685 = F.v7656;
{ rt_int hi7689 = F.hi7685;
for (rt_int i7688 = F.lo7684; i7688 <= hi7689; i7688++) { F.c_7687 = i7688;
if ((F.c_7687 <= F.v7658)) {
F.v7664 = ((void * *)(F.v7652).p)[y_ix1(F.v7652, F.c_7687)];
F.v7666 = ((void * *)(F.v7654).p)[y_ix1(F.v7654, F.c_7687)];
if ((!(((*(yR99 *)rt_nil_check(F.v7664))).f_kind == ((*(yR99 *)rt_nil_check(F.v7666))).f_kind))) {
{ rt_int rv7691 = 1;
return rv7691; }
}
if ((((*(yR99 *)rt_nil_check(F.v7664))).f_kind == v777)) {
if ((!(((*(yR99 *)rt_nil_check(F.v7664))).f_name == ((*(yR99 *)rt_nil_check(F.v7666))).f_name))) {
{ rt_int rv7693 = 0;
return rv7693; }
}
} else {
F.v7644 = 1;
F.v7646 = 0;
F.v7668 = ((*(yR99 *)rt_nil_check(F.v7664))).f_b;
F.v7670 = ((*(yR99 *)rt_nil_check(F.v7666))).f_b;
while ((((!(F.v7668 == ((void *)0)))) && ((!(F.v7670 == ((void *)0)))))) {
yr2698_Manifest(F.v7668, &F.v7640, &F.v7660);
yr2698_Manifest(F.v7670, &F.v7642, &F.v7662);
if ((F.v7640 && F.v7642)) {
if ((!(F.v7660 == F.v7662))) {
F.v7646 = 1;
}
} else {
F.v7644 = 0;
}
F.v7668 = ((*(yR99 *)rt_nil_check(F.v7668))).f_next;
F.v7670 = ((*(yR99 *)rt_nil_check(F.v7670))).f_next;
}
if ((!F.v7644)) {
{ rt_int rv7699 = 1;
return rv7699; }
}
if (F.v7646) {
{ rt_int rv7701 = 0;
return rv7701; }
}
}
}
if (i7688 == hi7689) break;
}}
{ rt_int rv7703 = 1;
return rv7703; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3282_CheckActuals(void * a_p3283, rt_int a_p3284, rt_int a_p3285) {
struct yf3286 F;
memset((void *)&F, 0, sizeof F);
F.p3283 = a_p3283;
F.p3284 = a_p3284;
F.p3285 = a_p3285;
F.v7709 = ((*(yR119 *)rt_nil_check(F.p3283))).f_params;
F.v7713 = rt_range(rt_add(F.p3284, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7717 = ((void *)0);
while ((!(F.v7709 == ((void *)0)))) {
if ((((!(((*(yR114 *)rt_nil_check(F.v7709))).f_cls == v891))) && ((!(((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v7709))).f_rep))).f_kind == v849))))) {
F.v7711 = ((*(yR114 *)rt_nil_check(F.v7709))).f_next;
F.v7715 = rt_range(rt_add(F.v7713, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(F.v7711 == ((void *)0)))) {
if ((((((*(yR114 *)rt_nil_check(F.v7709))).f_cls == v897)) && ((((*(yR114 *)rt_nil_check(F.v7711))).f_cls == v897)))) {
if (yr3275_Overlaps(((void * *)(v1504).p)[y_ix1(v1504, F.v7713)], ((void * *)(v1504).p)[y_ix1(v1504, F.v7715)])) {
yr1180_FailN(((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v7715)]))).f_line, ((*(yR114 *)rt_nil_check(F.v7711))).f_name, y_str(": its actual and that of another VAR parameter may be the same variable (X.A.6)", 79));
}
}
if ((((((*(yR114 *)rt_nil_check(F.v7709))).f_cls == v894)) && ((((*(yR114 *)rt_nil_check(F.v7711))).f_cls == v894)))) {
if (yr3111_SameDesig(((void * *)(v1504).p)[y_ix1(v1504, F.v7713)], ((void * *)(v1504).p)[y_ix1(v1504, F.v7715)])) {
yr1180_FailN(((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v7715)]))).f_line, ((*(yR114 *)rt_nil_check(F.v7711))).f_name, y_str(": the same variable is the actual of two OUT parameters (IX.A.2)", 64));
}
}
F.v7711 = ((*(yR114 *)rt_nil_check(F.v7711))).f_next;
F.v7715 = rt_range(rt_add(F.v7715, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((((*(yR114 *)rt_nil_check(F.v7709))).f_cls == v897)) {
yr3232_DesigBase(((void * *)(v1504).p)[y_ix1(v1504, F.v7713)], &F.v7721, &F.v7723, &F.v7725);
F.v7719 = yr3241_Note(F.v7721, F.v7725, ((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v7713)]))).f_line);
if (F.v7723) {
((*(yR99 *)rt_nil_check(F.v7719))).f_flag = INT64_C(1);
}
if ((((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v7713)]))).f_kind == v783)) {
((*(yR99 *)rt_nil_check(F.v7719))).f_ival = INT64_C(1);
}
if ((F.v7717 == ((void *)0))) {
F.v7717 = yr3241_Note(F.p3283, INT64_C(0), F.p3285);
((*(yR99 *)rt_nil_check(F.v7717))).f_next = v1632;
v1632 = F.v7717;
}
((*(yR99 *)rt_nil_check(F.v7719))).f_next = ((*(yR99 *)rt_nil_check(F.v7717))).f_a;
((*(yR99 *)rt_nil_check(F.v7717))).f_a = F.v7719;
}
}
F.v7713 = rt_range(rt_add(F.v7713, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7709 = ((*(yR114 *)rt_nil_check(F.v7709))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr7858_At(struct yf3291 *up, rt_int a_p7859, rt_int a_p7860) {
struct yf7861 F;
memset((void *)&F, 0, sizeof F);
F.up = up;
F.p7859 = a_p7859;
F.p7860 = a_p7860;
{ rt_int rv7883 = rt_range(rt_add((rt_mul(F.p7859, (rt_add(F.up->v7750, INT64_C(1))))), F.p7860), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return rv7883; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr7865_Reaches(struct yf3291 *up, rt_int a_p7866, rt_int a_p7867) {
struct yf7868 F;
memset((void *)&F, 0, sizeof F);
F.up = up;
F.p7866 = a_p7866;
F.p7867 = a_p7867;
F.v7888 = ((*(yR119 *)rt_nil_check(((void * *)(F.up->v7834).p)[y_ix1(F.up->v7834, F.p7867)]))).f_calls;
if (((rt_int *)(F.up->v7845).p)[y_ix1(F.up->v7845, F.p7867)]) {
{ rt_int rv7890 = 0;
return rv7890; }
}
((rt_int *)(F.up->v7845).p)[y_ix1(F.up->v7845, F.p7867)] = 1;
while ((!(F.v7888 == ((void *)0)))) {
if ((((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7888))).f_sym))).f_vix > INT64_C(0))) {
if ((((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7888))).f_sym))).f_vix == F.p7866)) {
{ rt_int rv7894 = 1;
return rv7894; }
}
if (yr7865_Reaches(F.up, F.p7866, ((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7888))).f_sym))).f_vix)) {
{ rt_int rv7896 = 1;
return rv7896; }
}
}
F.v7888 = ((*(yR99 *)rt_nil_check(F.v7888))).f_next;
}
{ rt_int rv7898 = 0;
return rv7898; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr7872_VName(struct yf3291 *up, rt_int a_p7873) {
struct yf7874 F;
memset((void *)&F, 0, sizeof F);
F.up = up;
F.p7873 = a_p7873;
if ((((void * *)(F.up->v7812).p)[y_ix1(F.up->v7812, F.p7873)] == ((void *)0))) {
{ rt_int rv7902 = yr1055_T(y_str("a dynamic variable", 18));
return rv7902; }
}
{ rt_int rv7903 = ((*(yR119 *)rt_nil_check(((void * *)(F.up->v7812).p)[y_ix1(F.up->v7812, F.p7873)]))).f_name;
return rv7903; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3290_CheckEffects(void) {
struct yf3291 F;
memset((void *)&F, 0, sizeof F);
F.v7747 = INT64_C(0);
F.v7750 = INT64_C(0);
F.v7753 = INT64_C(0);
F.v7753 = INT64_C(1);
F.v7750 = INT64_C(1);
F.v7741 = v1630;
while ((!(F.v7741 == ((void *)0)))) {
F.v7747 = rt_range(rt_add(F.v7747, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7741))).f_sym))).f_vix = F.v7747;
F.v7743 = ((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7741))).f_sym))).f_writes;
while ((!(F.v7743 == ((void *)0)))) {
if ((((!(((*(yR99 *)rt_nil_check(F.v7743))).f_sym == ((void *)0)))) && ((((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7743))).f_sym))).f_vix == INT64_C(0))))) {
F.v7750 = rt_range(rt_add(F.v7750, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7743))).f_sym))).f_vix = F.v7750;
}
F.v7743 = ((*(yR99 *)rt_nil_check(F.v7743))).f_next;
}
F.v7743 = ((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7741))).f_sym))).f_frees;
while ((!(F.v7743 == ((void *)0)))) {
if ((!(((*(yR99 *)rt_nil_check(F.v7743))).f_sym == ((void *)0)))) {
if ((((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7743))).f_sym))).f_vix == INT64_C(0))) {
F.v7750 = rt_range(rt_add(F.v7750, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7743))).f_sym))).f_vix = F.v7750;
}
} else if ((yr3295_DynIndex(((*(yR99 *)rt_nil_check(F.v7743))).f_name, F.v7750, 0) == INT64_C(0))) {
F.v7750 = rt_range(rt_add(F.v7750, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR99 *)rt_nil_check(F.v7743))).f_ival = yr3295_DynIndex(((*(yR99 *)rt_nil_check(F.v7743))).f_name, F.v7750, 1);
}
F.v7743 = ((*(yR99 *)rt_nil_check(F.v7743))).f_next;
}
F.v7741 = ((*(yR99 *)rt_nil_check(F.v7741))).f_next;
}
if ((F.v7747 == INT64_C(0))) {
return;
}
{
F.lo7783 = INT64_C(0);
F.hi7784 = rt_mul((rt_add(F.v7747, INT64_C(1))), (rt_add(F.v7750, INT64_C(1))));
{ rt_int lo[1] = {F.lo7783}, hi[1] = {F.hi7784}; y_desc_array(&F.yd_7786, 1, lo, hi, &y_d_int); }
y_init(&F.yd_7786, &F.v7788);
y_init(&F.yd_7786, &F.v7790);
F.lo7796 = INT64_C(0);
F.hi7797 = F.v7750;
{ rt_int lo[1] = {F.lo7796}, hi[1] = {F.hi7797}; y_desc_array(&F.yd_7799, 1, lo, hi, &y_d_int); }
y_init(&F.yd_7799, &F.v7801);
F.lo7807 = INT64_C(0);
F.hi7808 = F.v7750;
{ rt_int lo[1] = {F.lo7807}, hi[1] = {F.hi7808}; y_desc_array(&F.yd_7810, 1, lo, hi, &y_d_ptr); }
y_init(&F.yd_7810, &F.v7812);
F.lo7818 = INT64_C(0);
F.hi7819 = F.v7750;
{ rt_int lo[1] = {F.lo7818}, hi[1] = {F.hi7819}; y_desc_array(&F.yd_7821, 1, lo, hi, &y_d_int); }
y_init(&F.yd_7821, &F.v7823);
F.lo7829 = INT64_C(0);
F.hi7830 = F.v7747;
{ rt_int lo[1] = {F.lo7829}, hi[1] = {F.hi7830}; y_desc_array(&F.yd_7832, 1, lo, hi, &y_d_ptr); }
y_init(&F.yd_7832, &F.v7834);
F.lo7840 = INT64_C(0);
F.hi7841 = F.v7747;
{ rt_int lo[1] = {F.lo7840}, hi[1] = {F.hi7841}; y_desc_array(&F.yd_7843, 1, lo, hi, &y_d_int); }
y_init(&F.yd_7843, &F.v7845);
F.v7847 = 1;
F.lo7913 = INT64_C(0);
F.hi7914 = rt_mul((rt_add(F.v7747, INT64_C(1))), (rt_add(F.v7750, INT64_C(1))));
{ rt_int hi7918 = F.hi7914;
for (rt_int i7917 = F.lo7913; i7917 <= hi7918; i7917++) { F.c_7916 = i7917;
((rt_int *)(F.v7788).p)[y_ix1(F.v7788, F.c_7916)] = 0;
((rt_int *)(F.v7790).p)[y_ix1(F.v7790, F.c_7916)] = 0;
if (i7917 == hi7918) break;
}}
F.lo7924 = INT64_C(0);
F.hi7925 = F.v7750;
{ rt_int hi7929 = F.hi7925;
for (rt_int i7928 = F.lo7924; i7928 <= hi7929; i7928++) { F.c_7927 = i7928;
((rt_int *)(F.v7801).p)[y_ix1(F.v7801, F.c_7927)] = INT64_C(-1);
((void * *)(F.v7812).p)[y_ix1(F.v7812, F.c_7927)] = ((void *)0);
((rt_int *)(F.v7823).p)[y_ix1(F.v7823, F.c_7927)] = INT64_C(0);
if (i7928 == hi7929) break;
}}
F.lo7935 = INT64_C(0);
F.hi7936 = F.v7747;
{ rt_int hi7940 = F.hi7936;
for (rt_int i7939 = F.lo7935; i7939 <= hi7940; i7939++) { F.c_7938 = i7939;
((rt_int *)(F.v7845).p)[y_ix1(F.v7845, F.c_7938)] = 0;
if (i7939 == hi7940) break;
}}
F.v7741 = v1630;
while ((!(F.v7741 == ((void *)0)))) {
F.v7756 = ((*(yR99 *)rt_nil_check(F.v7741))).f_sym;
((void * *)(F.v7834).p)[y_ix1(F.v7834, ((*(yR119 *)rt_nil_check(F.v7756))).f_vix)] = F.v7756;
F.v7743 = ((*(yR119 *)rt_nil_check(F.v7756))).f_writes;
while ((!(F.v7743 == ((void *)0)))) {
if ((((*(yR99 *)rt_nil_check(F.v7743))).f_sym == ((void *)0))) {
F.v7852 = INT64_C(1);
} else {
F.v7852 = ((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7743))).f_sym))).f_vix;
}
((rt_int *)(F.v7788).p)[y_ix1(F.v7788, yr7858_At(&F, ((*(yR119 *)rt_nil_check(F.v7756))).f_vix, F.v7852))] = 1;
if ((!(((*(yR99 *)rt_nil_check(F.v7743))).f_sym == ((void *)0)))) {
((rt_int *)(F.v7801).p)[y_ix1(F.v7801, F.v7852)] = ((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7743))).f_sym))).f_level;
((void * *)(F.v7812).p)[y_ix1(F.v7812, F.v7852)] = ((*(yR99 *)rt_nil_check(F.v7743))).f_sym;
}
F.v7743 = ((*(yR99 *)rt_nil_check(F.v7743))).f_next;
}
F.v7743 = ((*(yR119 *)rt_nil_check(F.v7756))).f_frees;
while ((!(F.v7743 == ((void *)0)))) {
if ((((*(yR99 *)rt_nil_check(F.v7743))).f_sym == ((void *)0))) {
F.v7852 = yr3295_DynIndex(((*(yR99 *)rt_nil_check(F.v7743))).f_name, INT64_C(0), 0);
((rt_int *)(F.v7823).p)[y_ix1(F.v7823, F.v7852)] = ((*(yR99 *)rt_nil_check(F.v7743))).f_name;
} else {
F.v7852 = ((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7743))).f_sym))).f_vix;
((rt_int *)(F.v7801).p)[y_ix1(F.v7801, F.v7852)] = ((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7743))).f_sym))).f_level;
((void * *)(F.v7812).p)[y_ix1(F.v7812, F.v7852)] = ((*(yR99 *)rt_nil_check(F.v7743))).f_sym;
}
((rt_int *)(F.v7790).p)[y_ix1(F.v7790, yr7858_At(&F, ((*(yR119 *)rt_nil_check(F.v7756))).f_vix, F.v7852))] = 1;
F.v7743 = ((*(yR99 *)rt_nil_check(F.v7743))).f_next;
}
F.v7741 = ((*(yR99 *)rt_nil_check(F.v7741))).f_next;
}
while (F.v7847) {
F.v7847 = 0;
F.lo7951 = INT64_C(1);
F.hi7952 = F.v7747;
{ rt_int hi7956 = F.hi7952;
for (rt_int i7955 = F.lo7951; i7955 <= hi7956; i7955++) { F.c_7954 = i7955;
F.v7745 = ((*(yR119 *)rt_nil_check(((void * *)(F.v7834).p)[y_ix1(F.v7834, F.c_7954)]))).f_calls;
while ((!(F.v7745 == ((void *)0)))) {
F.v7854 = ((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7745))).f_sym))).f_vix;
if ((F.v7854 > INT64_C(0))) {
F.lo7961 = INT64_C(1);
F.hi7962 = F.v7750;
{ rt_int hi7966 = F.hi7962;
for (rt_int i7965 = F.lo7961; i7965 <= hi7966; i7965++) { F.c_7964 = i7965;
if ((((rt_int *)(F.v7801).p)[y_ix1(F.v7801, F.c_7964)] < ((*(yR119 *)rt_nil_check(((void * *)(F.v7834).p)[y_ix1(F.v7834, F.c_7954)]))).f_level)) {
if ((((rt_int *)(F.v7788).p)[y_ix1(F.v7788, yr7858_At(&F, F.v7854, rt_range(F.c_7964, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] && (!((rt_int *)(F.v7788).p)[y_ix1(F.v7788, yr7858_At(&F, rt_range(F.c_7954, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(F.c_7964, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]))) {
((rt_int *)(F.v7788).p)[y_ix1(F.v7788, yr7858_At(&F, rt_range(F.c_7954, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(F.c_7964, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] = 1;
F.v7847 = 1;
}
if ((((rt_int *)(F.v7790).p)[y_ix1(F.v7790, yr7858_At(&F, F.v7854, rt_range(F.c_7964, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] && (!((rt_int *)(F.v7790).p)[y_ix1(F.v7790, yr7858_At(&F, rt_range(F.c_7954, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(F.c_7964, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]))) {
((rt_int *)(F.v7790).p)[y_ix1(F.v7790, yr7858_At(&F, rt_range(F.c_7954, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(F.c_7964, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] = 1;
F.v7847 = 1;
}
}
if (i7965 == hi7966) break;
}}
}
F.v7745 = ((*(yR99 *)rt_nil_check(F.v7745))).f_next;
}
if (i7955 == hi7956) break;
}}
}
F.lo7974 = INT64_C(1);
F.hi7975 = F.v7747;
{ rt_int hi7979 = F.hi7975;
for (rt_int i7978 = F.lo7974; i7978 <= hi7979; i7978++) { F.c_7977 = i7978;
F.v7756 = ((void * *)(F.v7834).p)[y_ix1(F.v7834, F.c_7977)];
if (((*(yR119 *)rt_nil_check(F.v7756))).f_func) {
F.v7745 = ((*(yR119 *)rt_nil_check(F.v7756))).f_calls;
while ((!(F.v7745 == ((void *)0)))) {
F.v7854 = ((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7745))).f_sym))).f_vix;
if ((F.v7854 > INT64_C(0))) {
F.lo7984 = INT64_C(1);
F.hi7985 = F.v7750;
{ rt_int hi7989 = F.hi7985;
for (rt_int i7988 = F.lo7984; i7988 <= hi7989; i7988++) { F.c_7987 = i7988;
if ((((rt_int *)(F.v7788).p)[y_ix1(F.v7788, yr7858_At(&F, F.v7854, rt_range(F.c_7987, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] && ((((rt_int *)(F.v7801).p)[y_ix1(F.v7801, F.c_7987)] < ((*(yR119 *)rt_nil_check(F.v7756))).f_level)))) {
yr1151_Fail(((*(yR99 *)rt_nil_check(F.v7745))).f_line, yr3194_Join(((*(yR119 *)rt_nil_check(F.v7756))).f_name, yr3194_Join(yr1055_T(y_str(" is a FUNCTION: it calls ", 25)), ((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7745))).f_sym))).f_name, INT64_C(0)), yr3194_Join(yr1055_T(y_str(", which assigns to ", 19)), yr7872_VName(&F, rt_range(F.c_7987, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))), yr1055_T(y_str(" (X.A.4)", 8)))));
}
if (i7988 == hi7989) break;
}}
}
F.v7745 = ((*(yR99 *)rt_nil_check(F.v7745))).f_next;
}
}
if ((!(((*(yR119 *)rt_nil_check(F.v7756))).f_decl == ((void *)0)))) {
if ((!(((*(yR99 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v7756))).f_decl))).f_e == ((void *)0)))) {
F.lo7997 = INT64_C(0);
F.hi7998 = F.v7747;
{ rt_int hi8002 = F.hi7998;
for (rt_int i8001 = F.lo7997; i8001 <= hi8002; i8001++) { F.c_8000 = i8001;
((rt_int *)(F.v7845).p)[y_ix1(F.v7845, F.c_8000)] = 0;
if (i8001 == hi8002) break;
}}
if (yr7865_Reaches(&F, rt_range(F.c_7977, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(F.c_7977, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v7756))).f_decl))).f_line, ((*(yR119 *)rt_nil_check(F.v7756))).f_name, y_str(" is INLINE and calls itself (X.A.5)", 35));
}
}
}
if (i7978 == hi7979) break;
}}
F.v7741 = v1632;
while ((!(F.v7741 == ((void *)0)))) {
F.v7856 = ((*(yR99 *)rt_nil_check(F.v7741))).f_sym;
F.v7854 = ((*(yR119 *)rt_nil_check(F.v7856))).f_vix;
if ((F.v7854 > INT64_C(0))) {
F.v7743 = ((*(yR99 *)rt_nil_check(F.v7741))).f_a;
while ((!(F.v7743 == ((void *)0)))) {
if ((((((*(yR99 *)rt_nil_check(F.v7743))).f_flag == INT64_C(0))) && ((!(((*(yR99 *)rt_nil_check(F.v7743))).f_sym == ((void *)0)))))) {
F.v7852 = ((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7743))).f_sym))).f_vix;
if ((F.v7852 > INT64_C(0))) {
if (((rt_int *)(F.v7790).p)[y_ix1(F.v7790, yr7858_At(&F, F.v7854, F.v7852))]) {
yr1151_Fail(((*(yR99 *)rt_nil_check(F.v7743))).f_line, yr3194_Join(((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7743))).f_sym))).f_name, yr3194_Join(yr1055_T(y_str(" is the actual of a VAR parameter of ", 37)), ((*(yR119 *)rt_nil_check(F.v7856))).f_name, INT64_C(0)), yr1055_T(y_str(", which refers to it freely too (X.A.6)", 39))));
}
}
}
F.v7850 = INT64_C(0);
if ((((*(yR99 *)rt_nil_check(F.v7743))).f_flag == INT64_C(1))) {
F.v7850 = yr3295_DynIndex(((*(yR99 *)rt_nil_check(F.v7743))).f_name, INT64_C(0), 0);
}
if ((F.v7850 > INT64_C(0))) {
if (((rt_int *)(F.v7790).p)[y_ix1(F.v7790, yr7858_At(&F, F.v7854, F.v7850))]) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.v7743))).f_line, ((*(yR119 *)rt_nil_check(F.v7856))).f_name, y_str(": a VAR actual and a dynamic variable it refers to freely may be the same (X.A.6)", 81));
}
}
if ((((((*(yR99 *)rt_nil_check(F.v7743))).f_flag == INT64_C(1))) && ((((*(yR99 *)rt_nil_check(F.v7743))).f_ival == INT64_C(1))))) {
F.lo8022 = INT64_C(1);
F.hi8023 = F.v7750;
{ rt_int hi8027 = F.hi8023;
for (rt_int i8026 = F.lo8022; i8026 <= hi8027; i8026++) { F.c_8025 = i8026;
if ((((rt_int *)(F.v7790).p)[y_ix1(F.v7790, yr7858_At(&F, F.v7854, rt_range(F.c_8025, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] && ((!(((void * *)(F.v7812).p)[y_ix1(F.v7812, F.c_8025)] == ((void *)0)))))) {
if ((((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(((void * *)(F.v7812).p)[y_ix1(F.v7812, F.c_8025)]))).f_rep))).f_kind == v822)) && ((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(((void * *)(F.v7812).p)[y_ix1(F.v7812, F.c_8025)]))).f_rep))).f_tid == ((*(yR99 *)rt_nil_check(F.v7743))).f_name)))) {
yr1151_Fail(((*(yR99 *)rt_nil_check(F.v7743))).f_line, yr3194_Join(((*(yR119 *)rt_nil_check(F.v7856))).f_name, yr3194_Join(yr1055_T(y_str(": a VAR actual is a dynamic variable that ", 42)), ((*(yR119 *)rt_nil_check(((void * *)(F.v7812).p)[y_ix1(F.v7812, F.c_8025)]))).f_name, INT64_C(0)), yr1055_T(y_str(", which it refers to freely, may point to (X.A.6)", 49))));
}
}
if (i8026 == hi8027) break;
}}
}
F.v7743 = ((*(yR99 *)rt_nil_check(F.v7743))).f_next;
}
}
F.v7741 = ((*(yR99 *)rt_nil_check(F.v7741))).f_next;
}
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3295_DynIndex(rt_int a_p3296, rt_int a_p3297, rt_int a_p3298) {
struct yf3299 F;
memset((void *)&F, 0, sizeof F);
F.p3296 = a_p3296;
F.p3297 = a_p3297;
F.p3298 = a_p3298;
F.lo8038 = INT64_C(1);
F.hi8039 = v1656;
{ rt_int hi8043 = F.hi8039;
for (rt_int i8042 = F.lo8038; i8042 <= hi8043; i8042++) { F.c_8041 = i8042;
if ((((rt_int *)(v1643).p)[y_ix1(v1643, F.c_8041)] == F.p3296)) {
{ rt_int rv8044 = ((rt_int *)(v1654).p)[y_ix1(v1654, F.c_8041)];
return rv8044; }
}
if (i8042 == hi8043) break;
}}
if ((!F.p3298)) {
{ rt_int rv8046 = INT64_C(0);
return rv8046; }
}
if ((v1656 >= INT64_C(4096))) {
yr1172_FailS(v994, y_str("too many pointer types for this implementation", 46));
}
v1656 = rt_range(rt_add(v1656, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1643).p)[y_ix1(v1643, v1656)] = F.p3296;
((rt_int *)(v1654).p)[y_ix1(v1654, v1656)] = F.p3297;
{ rt_int rv8051 = F.p3297;
return rv8051; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3303_RoutineCName(rt_int a_p3304) {
struct yf3305 F;
memset((void *)&F, 0, sizeof F);
F.p3304 = a_p3304;
F.v8055 = yr1189_NewSerial();
F.v8057 = 1;
F.lo8062 = INT64_C(1);
F.hi8063 = ((rt_int *)(v914).p)[y_ix1(v914, F.p3304)];
{ rt_int hi8067 = F.hi8063;
for (rt_int i8066 = F.lo8062; i8066 <= hi8067; i8066++) { F.c_8065 = i8066;
if ((!((yr1002_IsLetter(yr1097_TChar(F.p3304, rt_range(F.c_8065, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || yr1008_IsDigit(yr1097_TChar(F.p3304, rt_range(F.c_8065, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))))) {
F.v8057 = 0;
}
if (i8066 == hi8067) break;
}}
yr1020_SB();
yr1031_SA(y_str("yr", 2));
yr1044_SI(F.v8055);
if (F.v8057) {
yr1031_SA(y_str("_", 1));
yr1038_ST(F.p3304);
}
{ rt_int rv8071 = yr1050_SE();
return rv8071; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3309_FormalRep(void * a_p3310) {
struct yf3311 F;
memset((void *)&F, 0, sizeof F);
F.p3310 = a_p3310;
if ((((*(yR99 *)rt_nil_check(F.p3310))).f_kind == v690)) {
yr2698_Manifest(((*(yR99 *)rt_nil_check(F.p3310))).f_a, &F.v8077, &F.v8079);
if ((((!F.v8077) || ((F.v8079 < INT64_C(1)))) || ((F.v8079 > INT64_C(4))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3310))).f_line, y_str("DIMENSIONS is a manifest constant from 1 to 4", 45));
}
F.v8075 = yr2343_NewRep(v837, yr1055_T(y_str("length-unresolved array", 23)));
((*(yR104 *)rt_nil_check(F.v8075))).f_nidx = F.v8079;
((*(yR104 *)rt_nil_check(F.v8075))).f_elem = yr2587_MakeRep(((*(yR99 *)rt_nil_check(F.p3310))).f_b, INT64_C(0), 0);
yr2446_CheckRepresented(((*(yR104 *)rt_nil_check(F.v8075))).f_elem, ((*(yR99 *)rt_nil_check(F.p3310))).f_line);
((*(yR104 *)rt_nil_check(F.v8075))).f_deep = 1;
{ void * rv8087 = F.v8075;
return rv8087; }
}
if ((((*(yR99 *)rt_nil_check(F.p3310))).f_kind == v693)) {
{ void * rv8089 = yr2343_NewRep(v849, yr1055_T(y_str("SPACE", 5)));
return rv8089; }
}
F.v8075 = yr2587_MakeRep(F.p3310, INT64_C(0), 0);
yr2446_CheckRepresented(F.v8075, ((*(yR99 *)rt_nil_check(F.p3310))).f_line);
{ void * rv8092 = F.v8075;
return rv8092; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3315_ParamCType(void * a_p3316) {
struct yf3317 F;
memset((void *)&F, 0, sizeof F);
F.p3316 = a_p3316;
F.v8096 = yr2405_CType(((*(yR114 *)rt_nil_check(F.p3316))).f_rep);
if ((((*(yR114 *)rt_nil_check(F.p3316))).f_cls == v891)) {
{ rt_int rv8097 = F.v8096;
return rv8097; }
}
yr1020_SB();
yr1038_ST(F.v8096);
yr1031_SA(y_str(" *", 2));
{ rt_int rv8099 = yr1050_SE();
return rv8099; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3321_RoutineHeader(void * a_p3322, rt_int a_p3323) {
struct yf3324 F;
memset((void *)&F, 0, sizeof F);
F.p3322 = a_p3322;
F.p3323 = a_p3323;
F.v8120 = 1;
F.v8104 = yr2202_NewSym(F.p3323, ((*(yR99 *)rt_nil_check(F.p3322))).f_name);
((*(yR119 *)rt_nil_check(F.v8104))).f_decl = F.p3322;
((*(yR119 *)rt_nil_check(F.v8104))).f_func = (((*(yR99 *)rt_nil_check(F.p3322))).f_flag == INT64_C(1));
((*(yR119 *)rt_nil_check(F.v8104))).f_level = rt_range(rt_add(v1273, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR119 *)rt_nil_check(F.v8104))).f_cname = yr3303_RoutineCName(((*(yR99 *)rt_nil_check(F.p3322))).f_name);
if ((!(((*(yR99 *)rt_nil_check(F.p3322))).f_b == ((void *)0)))) {
((*(yR119 *)rt_nil_check(F.v8104))).f_ret = yr2587_MakeRep(((*(yR99 *)rt_nil_check(F.p3322))).f_b, INT64_C(0), 0);
yr2446_CheckRepresented(((*(yR119 *)rt_nil_check(F.v8104))).f_ret, ((*(yR99 *)rt_nil_check(F.p3322))).f_line);
} else {
((*(yR119 *)rt_nil_check(F.v8104))).f_ret = v1342;
if (((*(yR119 *)rt_nil_check(F.v8104))).f_func) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3322))).f_line, ((*(yR99 *)rt_nil_check(F.p3322))).f_name, y_str(": a FUNCTION has a RETURNS clause (X.A)", 39));
}
}
F.v8114 = ((void *)0);
F.v8108 = ((*(yR99 *)rt_nil_check(F.p3322))).f_a;
while ((!(F.v8108 == ((void *)0)))) {
F.v8116 = yr3309_FormalRep(((*(yR99 *)rt_nil_check(F.v8108))).f_b);
if ((((*(yR119 *)rt_nil_check(F.v8104))).f_func && ((!(((*(yR99 *)rt_nil_check(F.v8108))).f_ival == v891))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.v8108))).f_line, ((*(yR99 *)rt_nil_check(F.p3322))).f_name, y_str(": the parameters of a FUNCTION are CONST (X.A.2)", 48));
}
if ((((F.p3323 == v879)) && ((((*(yR99 *)rt_nil_check(F.v8108))).f_ival == v894)))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.v8108))).f_line, ((*(yR99 *)rt_nil_check(F.p3322))).f_name, y_str(": a process has no OUT parameters", 33));
}
F.v8110 = ((*(yR99 *)rt_nil_check(F.v8108))).f_a;
while ((!(F.v8110 == ((void *)0)))) {
({ F.v8112 = rt_alloc(sizeof(yR114)); });
(*(yR114 *)rt_nil_check(F.v8112)) = ((yR114){ .f_name = ((*(yR99 *)rt_nil_check(F.v8110))).f_name, .f_cls = ((*(yR99 *)rt_nil_check(F.v8108))).f_ival, .f_rep = F.v8116, .f_cname = yr1194_Fresh(y_str("p", 1)), .f_next = ((void *)0) });
if ((F.v8114 == ((void *)0))) {
((*(yR119 *)rt_nil_check(F.v8104))).f_params = F.v8112;
} else {
((*(yR114 *)rt_nil_check(F.v8114))).f_next = F.v8112;
}
F.v8114 = F.v8112;
((*(yR119 *)rt_nil_check(F.v8104))).f_nparams = rt_range(rt_add(((*(yR119 *)rt_nil_check(F.v8104))).f_nparams, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v8110 = ((*(yR99 *)rt_nil_check(F.v8110))).f_next;
}
F.v8108 = ((*(yR99 *)rt_nil_check(F.v8108))).f_next;
}
F.v8106 = yr2232_Find(((*(yR99 *)rt_nil_check(F.p3322))).f_name);
if ((!(F.v8106 == ((void *)0)))) {
F.v8106 = yr2337_Real(F.v8106);
}
if ((((((*(yR99 *)rt_nil_check(F.p3322))).f_ival == INT64_C(0))) && ((!(F.v8106 == ((void *)0)))))) {
if ((((*(yR119 *)rt_nil_check(F.v8106))).f_kind == v885)) {
yr1158_Warn(((*(yR99 *)rt_nil_check(F.p3322))).f_line, yr3194_Join(((*(yR99 *)rt_nil_check(F.p3322))).f_name, yr1055_T(y_str(" hides the system routine of that name (X.A.1)", 46)), INT64_C(0)));
}
}
if (((((!(((*(yR99 *)rt_nil_check(F.p3322))).f_ival == INT64_C(0)))) && ((!(F.v8106 == ((void *)0))))) && ((((*(yR119 *)rt_nil_check(F.v8106))).f_kind == v870)))) {
((*(yR119 *)rt_nil_check(F.v8104))).f_alt = F.v8106;
if ((!(((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v8106))).f_ret))).f_kind == v846)) == ((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v8104))).f_ret))).f_kind == v846))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3322))).f_line, ((*(yR99 *)rt_nil_check(F.p3322))).f_name, y_str(": a value-returning routine is extended or replaced only by one, a procedure only by a procedure (X.A.1)", 104));
}
if ((((((*(yR99 *)rt_nil_check(F.p3322))).f_ival == v333)) && ((!(yr3328_SameSignature(F.v8104, F.v8106) == ((void *)0)))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3322))).f_line, ((*(yR99 *)rt_nil_check(F.p3322))).f_name, y_str(" EXTENDS a definition for the same parameter types: use REPLACES", 64));
}
if ((((((*(yR99 *)rt_nil_check(F.p3322))).f_ival == v429)) && ((yr3328_SameSignature(F.v8104, F.v8106) == ((void *)0))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3322))).f_line, ((*(yR99 *)rt_nil_check(F.p3322))).f_name, y_str(" REPLACES no definition for these parameter types", 49));
}
}
((*(yR99 *)rt_nil_check(F.p3322))).f_sym = F.v8104;
yr2304_Define(F.v8104, ((*(yR99 *)rt_nil_check(F.p3322))).f_line);
F.v8108 = yr1888_NewNode(v663, ((*(yR99 *)rt_nil_check(F.p3322))).f_line);
((*(yR99 *)rt_nil_check(F.v8108))).f_sym = F.v8104;
((*(yR99 *)rt_nil_check(F.v8108))).f_next = v1630;
v1630 = F.v8108;
((rt_int *)(v1285).p)[y_ix1(v1285, ((*(yR119 *)rt_nil_check(F.v8104))).f_level)] = yr1194_Fresh(y_str("yf", 2));
((*(yR119 *)rt_nil_check(F.v8104))).f_members = yr2202_NewSym(v885, ((rt_int *)(v1285).p)[y_ix1(v1285, ((*(yR119 *)rt_nil_check(F.v8104))).f_level)]);
yr1020_SB();
yr1031_SA(y_str("struct ", 7));
yr1038_ST(((rt_int *)(v1285).p)[y_ix1(v1285, ((*(yR119 *)rt_nil_check(F.v8104))).f_level)]);
yr1031_SA(y_str(";", 1));
F.v8118 = yr1050_SE();
yr1104_Put(&v972, F.v8118);
yr1020_SB();
yr1031_SA(y_str("static ", 7));
if ((F.p3323 == v879)) {
yr1031_SA(y_str("void", 4));
} else {
yr1038_ST(yr2405_CType(((*(yR119 *)rt_nil_check(F.v8104))).f_ret));
}
yr1031_SA(y_str(" ", 1));
yr1038_ST(((*(yR119 *)rt_nil_check(F.v8104))).f_cname);
yr1031_SA(y_str("(", 1));
F.v8118 = yr1050_SE();
if ((F.p3323 == v879)) {
F.v8118 = yr3194_Join(F.v8118, yr1055_T(y_str("void *arg", 9)), INT64_C(0));
F.v8120 = 0;
} else if ((v1273 > INT64_C(0))) {
yr1020_SB();
yr1038_ST(F.v8118);
yr1031_SA(y_str("struct ", 7));
yr1038_ST(((rt_int *)(v1285).p)[y_ix1(v1285, v1273)]);
yr1031_SA(y_str(" *up", 4));
F.v8118 = yr1050_SE();
F.v8120 = 0;
}
F.v8112 = ((*(yR119 *)rt_nil_check(F.v8104))).f_params;
while ((((!(F.v8112 == ((void *)0)))) && ((!(F.p3323 == v879))))) {
yr1020_SB();
yr1038_ST(F.v8118);
if ((!F.v8120)) {
yr1031_SA(y_str(", ", 2));
}
F.v8120 = 0;
yr1038_ST(yr3315_ParamCType(F.v8112));
yr1031_SA(y_str(" a_", 3));
yr1038_ST(((*(yR114 *)rt_nil_check(F.v8112))).f_cname);
F.v8118 = yr1050_SE();
F.v8112 = ((*(yR114 *)rt_nil_check(F.v8112))).f_next;
}
if (F.v8120) {
F.v8118 = yr3194_Join(F.v8118, yr1055_T(y_str("void", 4)), INT64_C(0));
}
F.v8118 = yr3194_Join(F.v8118, yr1055_T(y_str(")", 1)), INT64_C(0));
((*(yR119 *)rt_nil_check(F.v8104))).f_mnext = yr2202_NewSym(v885, F.v8118);
yr1104_Put(&v980, yr3194_Join(F.v8118, yr1055_T(y_str(";", 1)), INT64_C(0)));
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3328_SameSignature(void * a_p3329, void * a_p3330) {
struct yf3331 F;
memset((void *)&F, 0, sizeof F);
F.p3329 = a_p3329;
F.p3330 = a_p3330;
F.v8167 = F.p3330;
while ((!(F.v8167 == ((void *)0)))) {
if ((((*(yR119 *)rt_nil_check(F.v8167))).f_nparams == ((*(yR119 *)rt_nil_check(F.p3329))).f_nparams)) {
F.v8173 = 1;
F.v8169 = ((*(yR119 *)rt_nil_check(F.p3329))).f_params;
F.v8171 = ((*(yR119 *)rt_nil_check(F.v8167))).f_params;
while ((!(F.v8169 == ((void *)0)))) {
if ((!yr2423_SameType(((*(yR114 *)rt_nil_check(F.v8169))).f_rep, ((*(yR114 *)rt_nil_check(F.v8171))).f_rep))) {
F.v8173 = 0;
}
F.v8169 = ((*(yR114 *)rt_nil_check(F.v8169))).f_next;
F.v8171 = ((*(yR114 *)rt_nil_check(F.v8171))).f_next;
}
if (F.v8173) {
{ void * rv8176 = F.v8167;
return rv8176; }
}
}
F.v8167 = ((*(yR119 *)rt_nil_check(F.v8167))).f_alt;
}
{ void * rv8177 = ((void *)0);
return rv8177; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3335_RoutineBody(void * a_p3336) {
struct yf3337 F;
memset((void *)&F, 0, sizeof F);
F.p3336 = a_p3336;
F.v8181 = ((*(yR99 *)rt_nil_check(F.p3336))).f_sym;
F.v8183 = v990;
F.v8185 = v992;
F.v8187 = v1273;
F.v8189 = v1520;
F.v8191 = v1523;
F.v8193 = v1548;
F.v8195 = v1562;
F.v8197 = v1589;
F.v8199 = v1592;
F.v8201 = v1595;
F.v8203 = v1624;
v990 = ((yR134){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v992 = ((yR134){ .f_head = ((void *)0), .f_tail = ((void *)0) });
F.v8213 = ((yR134){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v1273 = ((*(yR119 *)rt_nil_check(F.v8181))).f_level;
F.v8209 = ((*(yR119 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v8181))).f_members))).f_name;
((rt_int *)(v1285).p)[y_ix1(v1285, v1273)] = F.v8209;
v1523 = v1520;
v1592 = v1589;
v1562 = INT64_C(0);
v1595 = F.v8181;
v1624 = 0;
yr2209_OpenScope(0);
v1322 = rt_range(rt_add(v1322, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1318).p)[y_ix1(v1318, v1322)] = ((*(yR119 *)rt_nil_check(F.v8181))).f_depth;
((rt_int *)(v1320).p)[y_ix1(v1320, v1322)] = ((*(yR119 *)rt_nil_check(F.v8181))).f_serial;
F.v8205 = ((*(yR119 *)rt_nil_check(F.v8181))).f_params;
while ((!(F.v8205 == ((void *)0)))) {
if ((((*(yR114 *)rt_nil_check(F.v8205))).f_cls == v891)) {
F.v8207 = yr2202_NewSym(v858, ((*(yR114 *)rt_nil_check(F.v8205))).f_name);
} else {
F.v8207 = yr2202_NewSym(v855, ((*(yR114 *)rt_nil_check(F.v8205))).f_name);
}
((*(yR119 *)rt_nil_check(F.v8207))).f_rep = ((*(yR114 *)rt_nil_check(F.v8205))).f_rep;
((*(yR119 *)rt_nil_check(F.v8207))).f_level = v1273;
((*(yR119 *)rt_nil_check(F.v8207))).f_cname = ((*(yR114 *)rt_nil_check(F.v8205))).f_cname;
if ((((*(yR119 *)rt_nil_check(F.v8181))).f_kind == v879)) {
((*(yR119 *)rt_nil_check(F.v8207))).f_byref = (((*(yR114 *)rt_nil_check(F.v8205))).f_cls == v897);
yr2324_DeclStorage(yr3315_ParamCType(F.v8205), ((*(yR114 *)rt_nil_check(F.v8205))).f_cname);
} else if ((((*(yR114 *)rt_nil_check(F.v8205))).f_cls == v897)) {
((*(yR119 *)rt_nil_check(F.v8207))).f_byref = 1;
yr2324_DeclStorage(yr3315_ParamCType(F.v8205), ((*(yR114 *)rt_nil_check(F.v8205))).f_cname);
yr1126_Emit(yr3194_Join(yr1055_T(y_str("F.", 2)), ((*(yR114 *)rt_nil_check(F.v8205))).f_cname, yr3194_Join(yr1055_T(y_str(" = a_", 5)), ((*(yR114 *)rt_nil_check(F.v8205))).f_cname, yr1055_T(y_str(";", 1)))));
} else if ((((*(yR114 *)rt_nil_check(F.v8205))).f_cls == v894)) {
yr2324_DeclStorage(yr2405_CType(((*(yR114 *)rt_nil_check(F.v8205))).f_rep), ((*(yR114 *)rt_nil_check(F.v8205))).f_cname);
yr2324_DeclStorage(yr3315_ParamCType(F.v8205), yr3194_Join(((*(yR114 *)rt_nil_check(F.v8205))).f_cname, yr1055_T(y_str("_o", 2)), INT64_C(0)));
yr1126_Emit(yr3194_Join(yr1055_T(y_str("F.", 2)), ((*(yR114 *)rt_nil_check(F.v8205))).f_cname, yr3194_Join(yr1055_T(y_str("_o = a_", 7)), ((*(yR114 *)rt_nil_check(F.v8205))).f_cname, yr1055_T(y_str(";", 1)))));
if ((yr2380_Deep(((*(yR114 *)rt_nil_check(F.v8205))).f_rep) && ((!(((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v8205))).f_rep))).f_kind == v837))))) {
yr1126_Emit(yr3194_Join(yr1055_T(y_str("y_init(", 7)), yr2411_DescOf(((*(yR114 *)rt_nil_check(F.v8205))).f_rep), yr3194_Join(yr1055_T(y_str(", &F.", 5)), ((*(yR114 *)rt_nil_check(F.v8205))).f_cname, yr1055_T(y_str(");", 2)))));
}
if ((((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v8205))).f_rep))).f_kind == v837)) {
yr1126_Emit(yr3194_Join(yr1055_T(y_str("F.", 2)), ((*(yR114 *)rt_nil_check(F.v8205))).f_cname, yr3194_Join(yr1055_T(y_str(" = *a_", 6)), ((*(yR114 *)rt_nil_check(F.v8205))).f_cname, yr1055_T(y_str(";", 1)))));
}
} else {
yr2324_DeclStorage(yr2405_CType(((*(yR114 *)rt_nil_check(F.v8205))).f_rep), ((*(yR114 *)rt_nil_check(F.v8205))).f_cname);
yr1126_Emit(yr3194_Join(yr1055_T(y_str("F.", 2)), ((*(yR114 *)rt_nil_check(F.v8205))).f_cname, yr3194_Join(yr1055_T(y_str(" = a_", 5)), ((*(yR114 *)rt_nil_check(F.v8205))).f_cname, yr1055_T(y_str(";", 1)))));
}
yr2304_Define(F.v8207, ((*(yR99 *)rt_nil_check(F.p3336))).f_line);
F.v8205 = ((*(yR114 *)rt_nil_check(F.v8205))).f_next;
}
yr3541_EnterMonitor(F.v8181);
yr3391_Declarations(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3336))).f_c))).f_a);
if (yr3139_BlockFalls(((*(yR99 *)rt_nil_check(F.p3336))).f_c)) {
if ((((*(yR119 *)rt_nil_check(F.v8181))).f_kind == v879)) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3336))).f_line, ((*(yR99 *)rt_nil_check(F.p3336))).f_name, y_str(": control reaches the end of the process, which ends with TERMINATE_PROCESS (IX.A.7)", 84));
} else {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3336))).f_line, ((*(yR99 *)rt_nil_check(F.p3336))).f_name, y_str(": control reaches the end of the routine, which ends with RETURN (IX.A.6)", 73));
}
}
yr3105_BlockStatements(((*(yR99 *)rt_nil_check(F.p3336))).f_c);
if ((((*(yR119 *)rt_nil_check(F.v8181))).f_kind == v879)) {
yr1132_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
} else {
yr1132_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
}
yr3523_AwaitProcesses();
yr2221_CloseScope();
v1322 = rt_range(rt_sub(v1322, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1020_SB();
yr1031_SA(y_str("struct ", 7));
yr1038_ST(F.v8209);
yr1031_SA(y_str(" {", 2));
if ((v1273 > INT64_C(1))) {
yr1031_SA(y_str(" struct ", 8));
yr1038_ST(((rt_int *)(v1285).p)[y_ix1(v1285, rt_sub(v1273, INT64_C(1)))]);
yr1031_SA(y_str(" *up;", 5));
} else {
yr1031_SA(y_str(" void *up;", 10));
}
F.v8211 = yr1050_SE();
yr1104_Put(&v976, F.v8211);
yr1119_Append(&v976, &v992);
yr1111_PutS(&v976, y_str("};", 2));
yr1104_Put(&F.v8213, yr3194_Join(((*(yR119 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v8181))).f_mnext))).f_name, yr1055_T(y_str(" {", 2)), INT64_C(0)));
if (v1624) {
yr1111_PutS(&F.v8213, y_str("volatile", 8));
}
yr1104_Put(&F.v8213, yr3194_Join(yr1055_T(y_str("struct ", 7)), F.v8209, yr1055_T(y_str(" F;", 3))));
yr1111_PutS(&F.v8213, y_str("memset((void *)&F, 0, sizeof F);", 32));
if ((((*(yR119 *)rt_nil_check(F.v8181))).f_kind == v879)) {
yr1104_Put(&F.v8213, yr3194_Join(yr1055_T(y_str("F = *(struct ", 13)), F.v8209, yr1055_T(y_str(" *)arg;", 7))));
} else if ((v1273 > INT64_C(1))) {
yr1111_PutS(&F.v8213, y_str("F.up = up;", 10));
}
yr1119_Append(&F.v8213, &v990);
yr1111_PutS(&F.v8213, y_str("}", 1));
yr1119_Append(&v982, &F.v8213);
v990 = F.v8183;
v992 = F.v8185;
v1273 = F.v8187;
((rt_int *)(v1285).p)[y_ix1(v1285, v1273)] = yr1194_Fresh(y_str("unused", 6));
if ((!(F.v8201 == ((void *)0)))) {
((rt_int *)(v1285).p)[y_ix1(v1285, v1273)] = ((*(yR119 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v8201))).f_members))).f_name;
}
v1520 = F.v8189;
v1523 = F.v8191;
v1548 = F.v8193;
v1562 = F.v8195;
v1589 = F.v8197;
v1592 = F.v8199;
v1595 = F.v8201;
v1624 = F.v8203;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3341_DeclareStorage(void * a_p3342, void * a_p3343, rt_int a_p3344) {
struct yf3345 F;
memset((void *)&F, 0, sizeof F);
F.p3342 = a_p3342;
F.p3343 = a_p3343;
F.p3344 = a_p3344;
((*(yR119 *)rt_nil_check(F.p3342))).f_rep = F.p3343;
((*(yR119 *)rt_nil_check(F.p3342))).f_level = v1273;
((*(yR119 *)rt_nil_check(F.p3342))).f_cname = yr1194_Fresh(y_str("v", 1));
yr2324_DeclStorage(yr2405_CType(F.p3343), ((*(yR119 *)rt_nil_check(F.p3342))).f_cname);
if (yr2380_Deep(F.p3343)) {
yr1126_Emit(yr3194_Join(yr1055_T(y_str("y_init(", 7)), yr2411_DescOf(F.p3343), yr3194_Join(yr1055_T(y_str(", &", 3)), yr2331_SymPath(F.p3342), yr1055_T(y_str(");", 2)))));
}
if ((((*(yR104 *)rt_nil_check(F.p3343))).f_kind == v828)) {
yr1126_Emit(yr3194_Join(yr2331_SymPath(F.p3342), yr1055_T(y_str(" = y_set_new(", 13)), yr3194_Join(yr2486_LoText(((*(yR104 *)rt_nil_check(F.p3343))).f_elem), yr1055_T(y_str(", ", 2)), yr3194_Join(yr2492_HiText(((*(yR104 *)rt_nil_check(F.p3343))).f_elem), yr1055_T(y_str(");", 2)), INT64_C(0)))));
}
if ((((*(yR104 *)rt_nil_check(F.p3343))).f_kind == v831)) {
yr3558_DeclareSignal(F.p3342, F.p3344);
}
if (yr2393_HoldsSignal(F.p3343)) {
yr3565_DeclareSignalArray(F.p3342, F.p3344);
}
if ((((*(yR104 *)rt_nil_check(F.p3343))).f_kind == v834)) {
yr1126_Emit(yr3194_Join(yr1055_T(y_str("rt_lock_init(&", 14)), yr2331_SymPath(F.p3342), yr1055_T(y_str(");", 2))));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3349_SimpleDecl(void * a_p3350) {
struct yf3351 F;
memset((void *)&F, 0, sizeof F);
F.p3350 = a_p3350;
F.v8281 = ((*(yR99 *)rt_nil_check(F.p3350))).f_kind;
if ((((F.v8281 == v633)) || ((F.v8281 == v636)))) {
F.v8283 = yr2587_MakeRep(((*(yR99 *)rt_nil_check(F.p3350))).f_b, INT64_C(0), 0);
yr2446_CheckRepresented(F.v8283, ((*(yR99 *)rt_nil_check(F.p3350))).f_line);
if ((((F.v8281 == v633)) && yr2399_NonAssignable(F.v8283))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3350))).f_line, y_str("signals, files and semaphores, and what holds them, are variables (VII.B)", 73));
}
F.v8287 = ((*(yR99 *)rt_nil_check(F.p3350))).f_a;
while ((!(F.v8287 == ((void *)0)))) {
if ((F.v8281 == v633)) {
F.v8289 = yr2202_NewSym(v858, ((*(yR99 *)rt_nil_check(F.v8287))).f_name);
} else {
F.v8289 = yr2202_NewSym(v855, ((*(yR99 *)rt_nil_check(F.v8287))).f_name);
}
yr3341_DeclareStorage(F.v8289, F.v8283, ((*(yR99 *)rt_nil_check(F.p3350))).f_line);
if ((!(((*(yR99 *)rt_nil_check(F.p3350))).f_c == ((void *)0)))) {
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p3350))).f_c, F.v8283, &F.v8291, &F.v8285);
if ((F.v8281 == v633)) {
yr2797_Store(yr2331_SymPath(F.v8289), F.v8283, F.v8291, F.v8285, ((*(yR99 *)rt_nil_check(F.p3350))).f_line);
} else {
F.v8293 = yr3023_UserAssign(yr2331_SymPath(F.v8289), F.v8283, F.v8291, F.v8285, ((*(yR99 *)rt_nil_check(F.p3350))).f_line);
if ((!(F.v8293 == INT64_C(0)))) {
yr1126_Emit(F.v8293);
} else {
if ((((*(yR104 *)rt_nil_check(F.v8283))).f_opaque && (((rt_mod(((*(yR104 *)rt_nil_check(F.v8283))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3350))).f_line, ((*(yR104 *)rt_nil_check(F.v8283))).f_tname, y_str(" is opaque here: := is not exported to initialize it (X.B.3)", 60));
}
yr2797_Store(yr2331_SymPath(F.v8289), F.v8283, F.v8291, F.v8285, ((*(yR99 *)rt_nil_check(F.p3350))).f_line);
}
}
if ((F.v8281 == v633)) {
yr2698_Manifest(((*(yR99 *)rt_nil_check(F.p3350))).f_c, &F.v8295, &F.v8297);
if ((F.v8295 && yr2356_IsDiscrete(F.v8283))) {
((*(yR119 *)rt_nil_check(F.v8289))).f_hasmv = 1;
((*(yR119 *)rt_nil_check(F.v8289))).f_mval = F.v8297;
}
}
}
if ((!(((*(yR99 *)rt_nil_check(F.v8287))).f_a == ((void *)0)))) {
yr3362_AtLocation(F.v8289, ((*(yR99 *)rt_nil_check(F.v8287))).f_a);
}
yr2304_Define(F.v8289, ((*(yR99 *)rt_nil_check(F.v8287))).f_line);
F.v8287 = ((*(yR99 *)rt_nil_check(F.v8287))).f_next;
}
return;
}
if ((F.v8281 == v645)) {
F.v8283 = yr2587_MakeRep(((*(yR99 *)rt_nil_check(F.p3350))).f_b, ((*(yR99 *)rt_nil_check(F.p3350))).f_name, 0);
yr2446_CheckRepresented(F.v8283, ((*(yR99 *)rt_nil_check(F.p3350))).f_line);
F.v8289 = yr2202_NewSym(v861, ((*(yR99 *)rt_nil_check(F.p3350))).f_name);
((*(yR119 *)rt_nil_check(F.v8289))).f_rep = F.v8283;
yr2304_Define(F.v8289, ((*(yR99 *)rt_nil_check(F.p3350))).f_line);
yr2610_ResolvePending(((*(yR99 *)rt_nil_check(F.p3350))).f_name, F.v8283);
yr3355_NoteAlphabet(F.p3350, F.v8283);
return;
}
if ((F.v8281 == v642)) {
F.v8283 = yr2587_MakeRep(((*(yR99 *)rt_nil_check(F.p3350))).f_b, ((*(yR99 *)rt_nil_check(F.p3350))).f_name, 1);
if ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3350))).f_b))).f_kind == v666)) {
F.v8283 = yr2350_CopyRep(F.v8283);
((*(yR104 *)rt_nil_check(F.v8283))).f_tid = yr2581_NewTid(((*(yR99 *)rt_nil_check(F.p3350))).f_name);
((*(yR104 *)rt_nil_check(F.v8283))).f_tname = ((*(yR99 *)rt_nil_check(F.p3350))).f_name;
if (((((((*(yR104 *)rt_nil_check(F.v8283))).f_kind == v798)) || ((((*(yR104 *)rt_nil_check(F.v8283))).f_kind == v801))) || ((((*(yR104 *)rt_nil_check(F.v8283))).f_kind == v804)))) {
if ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3350))).f_b))).f_a == ((void *)0))) {
((*(yR104 *)rt_nil_check(F.v8283))).f_abstract = 1;
}
}
}
F.v8289 = yr2202_NewSym(v864, ((*(yR99 *)rt_nil_check(F.p3350))).f_name);
((*(yR119 *)rt_nil_check(F.v8289))).f_rep = F.v8283;
yr2304_Define(F.v8289, ((*(yR99 *)rt_nil_check(F.p3350))).f_line);
yr2610_ResolvePending(((*(yR99 *)rt_nil_check(F.p3350))).f_name, F.v8283);
yr3355_NoteAlphabet(F.p3350, F.v8283);
return;
}
if ((F.v8281 == v639)) {
F.v8287 = ((*(yR99 *)rt_nil_check(F.p3350))).f_a;
while ((!(F.v8287 == ((void *)0)))) {
F.v8289 = yr2202_NewSym(v882, ((*(yR99 *)rt_nil_check(F.v8287))).f_name);
((*(yR119 *)rt_nil_check(F.v8289))).f_level = v1273;
((*(yR119 *)rt_nil_check(F.v8289))).f_cname = yr1194_Fresh(y_str("lab", 3));
yr2304_Define(F.v8289, ((*(yR99 *)rt_nil_check(F.v8287))).f_line);
F.v8287 = ((*(yR99 *)rt_nil_check(F.v8287))).f_next;
}
return;
}
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3350))).f_line, y_str("not a simple declaration", 24));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3355_NoteAlphabet(void * a_p3356, void * a_p3357) {
struct yf3358 F;
memset((void *)&F, 0, sizeof F);
F.p3356 = a_p3356;
F.p3357 = a_p3357;
if ((((((*(yR104 *)rt_nil_check(F.p3357))).f_kind == v813)) && ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3356))).f_b))).f_kind == v672)))) {
F.v8316 = yr1888_NewNode(v663, ((*(yR99 *)rt_nil_check(F.p3356))).f_line);
((*(yR99 *)rt_nil_check(F.v8316))).f_name = ((*(yR99 *)rt_nil_check(F.p3356))).f_name;
((*(yR99 *)rt_nil_check(F.v8316))).f_rep = F.p3357;
((*(yR99 *)rt_nil_check(F.v8316))).f_next = v1471;
v1471 = F.v8316;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3362_AtLocation(void * a_p3363, void * a_p3364) {
struct yf3365 F;
memset((void *)&F, 0, sizeof F);
F.p3363 = a_p3363;
F.p3364 = a_p3364;
if ((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.p3363))).f_rep))).f_kind == v831)) {
yr3572_DeviceSignal(F.p3363, F.p3364);
return;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3369_Defer(void * a_p3370, rt_int a_p3371, void * a_p3372, rt_int a_p3373) {
struct yf3374 F;
memset((void *)&F, 0, sizeof F);
F.p3370 = a_p3370;
F.p3371 = a_p3371;
F.p3372 = a_p3372;
F.p3373 = a_p3373;
F.v8326 = v1267;
if ((v1749 >= INT64_C(20000))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3370))).f_line, y_str("too many routines for this implementation", 41));
}
v1749 = rt_range(rt_add(v1749, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1668).p)[y_ix1(v1668, v1749)] = F.p3370;
((rt_int *)(v1679).p)[y_ix1(v1679, v1749)] = F.p3371;
((rt_int *)(v1690).p)[y_ix1(v1690, v1749)] = v1270;
((void * *)(v1701).p)[y_ix1(v1701, v1749)] = v1755;
((void * *)(v1712).p)[y_ix1(v1712, v1749)] = F.p3372;
((rt_int *)(v1723).p)[y_ix1(v1723, v1749)] = F.p3373;
while (((*(yR124 *)rt_nil_check(((void * *)(v1265).p)[y_ix1(v1265, F.v8326)]))).f_closed) {
F.v8326 = rt_range(rt_sub(F.v8326, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
((rt_int *)(v1734).p)[y_ix1(v1734, v1749)] = rt_range(rt_add(v1752, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1736).p)[y_ix1(v1736, v1749)] = rt_range(rt_sub(v1267, F.v8326), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo8339 = rt_add(F.v8326, INT64_C(1));
F.hi8340 = v1267;
{ rt_int hi8344 = F.hi8340;
for (rt_int i8343 = F.lo8339; i8343 <= hi8344; i8343++) { F.c_8342 = i8343;
v1752 = rt_range(rt_add(v1752, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1747).p)[y_ix1(v1747, v1752)] = ((void * *)(v1265).p)[y_ix1(v1265, F.c_8342)];
if (i8343 == hi8344) break;
}}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3378_RunDeferred(rt_int a_p3379, rt_int a_p3380) {
struct yf3381 F;
memset((void *)&F, 0, sizeof F);
F.p3379 = a_p3379;
F.p3380 = a_p3380;
F.v8351 = rt_range(rt_add(F.p3379, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((F.v8351 <= v1749)) {
F.lo8362 = ((rt_int *)(v1734).p)[y_ix1(v1734, F.v8351)];
F.hi8363 = rt_sub((rt_add(((rt_int *)(v1734).p)[y_ix1(v1734, F.v8351)], ((rt_int *)(v1736).p)[y_ix1(v1736, F.v8351)])), INT64_C(1));
{ rt_int hi8367 = F.hi8363;
for (rt_int i8366 = F.lo8362; i8366 <= hi8367; i8366++) { F.c_8365 = i8366;
yr2215_ReopenScope(((void * *)(v1747).p)[y_ix1(v1747, F.c_8365)]);
if (i8366 == hi8367) break;
}}
F.v8355 = v1270;
F.v8357 = v1755;
v1270 = ((rt_int *)(v1690).p)[y_ix1(v1690, F.v8351)];
v1755 = ((void * *)(v1701).p)[y_ix1(v1701, F.v8351)];
if ((((rt_int *)(v1679).p)[y_ix1(v1679, F.v8351)] == INT64_C(1))) {
yr3335_RoutineBody(((void * *)(v1668).p)[y_ix1(v1668, F.v8351)]);
} else {
yr3385_ModuleInit(F.v8351);
}
v1270 = F.v8355;
v1755 = F.v8357;
F.lo8372 = INT64_C(1);
F.hi8373 = ((rt_int *)(v1736).p)[y_ix1(v1736, F.v8351)];
{ rt_int hi8377 = F.hi8373;
for (rt_int i8376 = F.lo8372; i8376 <= hi8377; i8376++) { F.c_8375 = i8376;
yr2221_CloseScope();
if (i8376 == hi8377) break;
}}
F.v8351 = rt_range(rt_add(F.v8351, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1749 = F.p3379;
v1752 = F.p3380;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3385_ModuleInit(rt_int a_p3386) {
struct yf3387 F;
memset((void *)&F, 0, sizeof F);
F.p3386 = a_p3386;
F.v8383 = ((void * *)(v1668).p)[y_ix1(v1668, F.p3386)];
F.v8385 = v990;
F.v8387 = ((void * *)(v1712).p)[y_ix1(v1712, F.p3386)];
v990 = ((yR134){ .f_head = ((void *)0), .f_tail = ((void *)0) });
if (((rt_int *)(v1723).p)[y_ix1(v1723, F.p3386)]) {
yr1126_Emit(yr3194_Join(yr1055_T(y_str("y_mon_enter(", 12)), yr3535_MonitorPath(v1755), yr1055_T(y_str(");", 2))));
}
v1548 = rt_range(rt_add(v1548, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1535).p)[y_ix1(v1535, v1548)] = INT64_C(0);
((rt_int *)(v1546).p)[y_ix1(v1546, v1548)] = INT64_C(0);
yr3105_BlockStatements(((*(yR99 *)rt_nil_check(F.v8383))).f_c);
v1548 = rt_range(rt_sub(v1548, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (((rt_int *)(v1723).p)[y_ix1(v1723, F.p3386)]) {
yr1126_Emit(yr3194_Join(yr1055_T(y_str("y_mon_leave(", 12)), yr3535_MonitorPath(v1755), yr1055_T(y_str(");", 2))));
}
if ((!((v990).f_head == ((void *)0)))) {
((*(yR129 *)rt_nil_check((v990).f_tail))).f_next = ((*(yR129 *)rt_nil_check(F.v8387))).f_next;
((*(yR129 *)rt_nil_check(F.v8387))).f_next = (v990).f_head;
if (((F.v8385).f_tail == F.v8387)) {
(F.v8385).f_tail = (v990).f_tail;
}
}
v990 = F.v8385;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3391_Declarations(void * a_p3392) {
struct yf3393 F;
memset((void *)&F, 0, sizeof F);
F.p3392 = a_p3392;
F.v8401 = F.p3392;
F.v8403 = ((void * *)(v1296).p)[y_ix1(v1296, v1267)];
F.v8405 = v1749;
F.v8407 = v1752;
((void * *)(v1296).p)[y_ix1(v1296, v1267)] = F.p3392;
while ((!(F.v8401 == ((void *)0)))) {
v994 = ((*(yR99 *)rt_nil_check(F.v8401))).f_line;
((void * *)(v1307).p)[y_ix1(v1307, v1267)] = F.v8401;
if ((((((*(yR99 *)rt_nil_check(F.v8401))).f_kind == v648)) || ((((*(yR99 *)rt_nil_check(F.v8401))).f_kind == v660)))) {
if ((((*(yR99 *)rt_nil_check(F.v8401))).f_sym == ((void *)0))) {
yr3397_DeclareRoutine(F.v8401);
}
} else if (((((*(yR99 *)rt_nil_check(F.v8401))).f_kind == v618))) {
if ((((*(yR99 *)rt_nil_check(F.v8401))).f_ival == INT64_C(0))) {
yr3499_CompileModule(F.v8401);
}
} else if ((((*(yR99 *)rt_nil_check(F.v8401))).f_kind == v654)) {
yr3505_DeclareTemplate(F.v8401);
} else if ((((*(yR99 *)rt_nil_check(F.v8401))).f_kind == v657)) {
yr3511_Instantiate(F.v8401);
} else {
yr3349_SimpleDecl(F.v8401);
}
F.v8401 = ((*(yR99 *)rt_nil_check(F.v8401))).f_next;
}
((void * *)(v1307).p)[y_ix1(v1307, v1267)] = ((void *)0);
((void * *)(v1296).p)[y_ix1(v1296, v1267)] = F.v8403;
yr2617_CheckPending();
yr3462_ResolveLater(v1267);
if ((!((*(yR124 *)rt_nil_check(((void * *)(v1265).p)[y_ix1(v1265, v1267)]))).f_closed)) {
yr3378_RunDeferred(F.v8405, F.v8407);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3397_DeclareRoutine(void * a_p3398) {
struct yf3399 F;
memset((void *)&F, 0, sizeof F);
F.p3398 = a_p3398;
if ((((*(yR99 *)rt_nil_check(F.p3398))).f_kind == v648)) {
yr3321_RoutineHeader(F.p3398, v870);
} else {
yr3321_RoutineHeader(F.p3398, v879);
}
if ((((*(yR99 *)rt_nil_check(F.p3398))).f_kind == v660)) {
yr3517_DeclareProcess(F.p3398);
}
yr3369_Defer(F.p3398, INT64_C(1), ((void *)0), 0);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3403_Alias(rt_int a_p3404, void * a_p3405) {
struct yf3406 F;
memset((void *)&F, 0, sizeof F);
F.p3404 = a_p3404;
F.p3405 = a_p3405;
F.v8417 = yr2202_NewSym(v888, F.p3404);
((*(yR119 *)rt_nil_check(F.v8417))).f_target = F.p3405;
((*(yR119 *)rt_nil_check(F.v8417))).f_readonly = ((*(yR119 *)rt_nil_check(F.p3405))).f_readonly;
{ void * rv8418 = F.v8417;
return rv8418; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3410_AddLits(void * * a_p3411, void * a_p3412, rt_int a_p3413) {
struct yf3414 F;
memset((void *)&F, 0, sizeof F);
F.p3411 = a_p3411;
F.p3412 = a_p3412;
F.p3413 = a_p3413;
if ((((F.p3413 > INT64_C(8))) || ((*(yR104 *)rt_nil_check(F.p3412))).f_opaque)) {
return;
}
if ((((*(yR104 *)rt_nil_check(F.p3412))).f_kind == v810)) {
F.v8424 = ((*(yR104 *)rt_nil_check(F.p3412))).f_lits;
while ((!(F.v8424 == ((void *)0)))) {
F.v8426 = yr2297_FindLit(((*(yR99 *)rt_nil_check(F.v8424))).f_name, F.p3412);
if ((!(F.v8426 == ((void *)0)))) {
F.v8426 = yr3403_Alias(((*(yR99 *)rt_nil_check(F.v8424))).f_name, F.v8426);
((*(yR119 *)rt_nil_check(F.v8426))).f_mnext = (*F.p3411);
(*F.p3411) = F.v8426;
}
F.v8424 = ((*(yR99 *)rt_nil_check(F.v8424))).f_next;
}
} else if ((((*(yR104 *)rt_nil_check(F.p3412))).f_kind == v819)) {
F.v8428 = ((*(yR104 *)rt_nil_check(F.p3412))).f_fields;
while ((!(F.v8428 == ((void *)0)))) {
yr3410_AddLits(&(*F.p3411), ((*(yR109 *)rt_nil_check(F.v8428))).f_rep, rt_range(rt_add(F.p3413, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v8428 = ((*(yR109 *)rt_nil_check(F.v8428))).f_next;
}
} else if (((((((*(yR104 *)rt_nil_check(F.p3412))).f_kind == v816)) || ((((*(yR104 *)rt_nil_check(F.p3412))).f_kind == v828))) || ((((*(yR104 *)rt_nil_check(F.p3412))).f_kind == v825)))) {
yr3410_AddLits(&(*F.p3411), ((*(yR104 *)rt_nil_check(F.p3412))).f_elem, rt_range(rt_add(F.p3413, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3418_Provides(void * a_p3419, rt_int a_p3420) {
struct yf3421 F;
memset((void *)&F, 0, sizeof F);
F.p3419 = a_p3419;
F.p3420 = a_p3420;
F.v8438 = ((*(yR99 *)rt_nil_check(F.p3419))).f_b;
if ((((*(yR99 *)rt_nil_check(F.p3419))).f_name == F.p3420)) {
{ rt_int rv8440 = 1;
return rv8440; }
}
while ((!(F.v8438 == ((void *)0)))) {
if ((((!(((*(yR99 *)rt_nil_check(F.v8438))).f_ival == INT64_C(0)))) && ((((*(yR99 *)rt_nil_check(F.v8438))).f_ival == F.p3420)))) {
{ rt_int rv8443 = 1;
return rv8443; }
}
if ((((((*(yR99 *)rt_nil_check(F.v8438))).f_ival == INT64_C(0))) && ((((*(yR99 *)rt_nil_check(F.v8438))).f_name == F.p3420)))) {
{ rt_int rv8446 = 1;
return rv8446; }
}
F.v8438 = ((*(yR99 *)rt_nil_check(F.v8438))).f_next;
}
{ rt_int rv8448 = 0;
return rv8448; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3425_ImportLater(rt_int a_p3426, rt_int a_p3427, void * * a_p3428) {
struct yf3429 F;
memset((void *)&F, 0, sizeof F);
F.p3426 = a_p3426;
F.p3427 = a_p3427;
F.p3428_o = a_p3428;
F.p3428 = ((void *)0);
if ((v1267 < INT64_C(0))) {
{ rt_int rv8457 = INT64_C(0);
(*F.p3428_o) = F.p3428;
return rv8457; }
}
F.v8454 = ((void * *)(v1296).p)[y_ix1(v1296, v1267)];
while ((!(F.v8454 == ((void *)0)))) {
if (((((((*(yR99 *)rt_nil_check(F.v8454))).f_kind == v618)) && ((!(((*(yR99 *)rt_nil_check(F.v8454))).f_ival == INT64_C(2))))) && yr3418_Provides(F.v8454, F.p3426))) {
if ((((*(yR99 *)rt_nil_check(F.v8454))).f_ival == INT64_C(1))) {
F.p3428 = F.v8454;
{ rt_int rv8461 = INT64_C(2);
(*F.p3428_o) = F.p3428;
return rv8461; }
}
yr3499_CompileModule(F.v8454);
{ rt_int rv8463 = INT64_C(1);
(*F.p3428_o) = F.p3428;
return rv8463; }
}
if ((((((((*(yR99 *)rt_nil_check(F.v8454))).f_kind == v648)) || ((((*(yR99 *)rt_nil_check(F.v8454))).f_kind == v660)))) && ((((*(yR99 *)rt_nil_check(F.v8454))).f_name == F.p3426)))) {
{ rt_int rv8465 = INT64_C(3);
(*F.p3428_o) = F.p3428;
return rv8465; }
}
if ((((!(((*(yR99 *)rt_nil_check(F.v8454))).f_kind == v618))) && yr2264_DeclaredFrom(yr3433_OneDecl(F.v8454), F.p3426))) {
yr1180_FailN(F.p3427, F.p3426, y_str(" is declared after the module that imports it: a simple declaration precedes what uses it (X.G)", 95));
}
F.v8454 = ((*(yR99 *)rt_nil_check(F.v8454))).f_next;
}
{ rt_int rv8468 = INT64_C(0);
(*F.p3428_o) = F.p3428;
return rv8468; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3433_OneDecl(void * a_p3434) {
struct yf3435 F;
memset((void *)&F, 0, sizeof F);
F.p3434 = a_p3434;
({ F.v8472 = rt_alloc(sizeof(yR99)); });
(*(yR99 *)rt_nil_check(F.v8472)) = (*(yR99 *)rt_nil_check(F.p3434));
((*(yR99 *)rt_nil_check(F.v8472))).f_next = ((void *)0);
{ void * rv8473 = F.v8472;
return rv8473; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3439_Lazy(rt_int a_p3440, rt_int a_p3441, void * a_p3442, rt_int a_p3443) {
struct yf3444 F;
memset((void *)&F, 0, sizeof F);
F.p3440 = a_p3440;
F.p3441 = a_p3441;
F.p3442 = a_p3442;
F.p3443 = a_p3443;
F.v8480 = yr2202_NewSym(v888, F.p3440);
if ((v1817 >= INT64_C(10000))) {
yr1172_FailS(F.p3443, y_str("too many imports translated later", 33));
}
v1817 = rt_range(rt_add(v1817, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1780).p)[y_ix1(v1780, v1817)] = F.v8480;
((rt_int *)(v1791).p)[y_ix1(v1791, v1817)] = F.p3441;
((void * *)(v1802).p)[y_ix1(v1802, v1817)] = F.p3442;
((rt_int *)(v1813).p)[y_ix1(v1813, v1817)] = v1267;
((rt_int *)(v1815).p)[y_ix1(v1815, v1817)] = F.p3443;
{ void * rv8485 = F.v8480;
return rv8485; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3448_SetLazy(rt_int a_p3449, void * a_p3450) {
struct yf3451 F;
memset((void *)&F, 0, sizeof F);
F.p3449 = a_p3449;
F.p3450 = a_p3450;
((*(yR119 *)rt_nil_check(((void * *)(v1780).p)[y_ix1(v1780, F.p3449)]))).f_target = F.p3450;
((*(yR119 *)rt_nil_check(((void * *)(v1780).p)[y_ix1(v1780, F.p3449)]))).f_readonly = ((*(yR119 *)rt_nil_check(F.p3450))).f_readonly;
((void * *)(v1780).p)[y_ix1(v1780, F.p3449)] = ((void *)0);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3455_ResolveFrom(void * a_p3456, void * a_p3457) {
struct yf3458 F;
memset((void *)&F, 0, sizeof F);
F.p3456 = a_p3456;
F.p3457 = a_p3457;
F.lo8497 = INT64_C(1);
F.hi8498 = v1817;
{ rt_int hi8502 = F.hi8498;
for (rt_int i8501 = F.lo8497; i8501 <= hi8502; i8501++) { F.c_8500 = i8501;
if ((((!(((void * *)(v1780).p)[y_ix1(v1780, F.c_8500)] == ((void *)0)))) && ((((void * *)(v1802).p)[y_ix1(v1802, F.c_8500)] == F.p3456)))) {
F.v8493 = ((*(yR119 *)rt_nil_check(F.p3457))).f_members;
while ((((!(F.v8493 == ((void *)0)))) && ((!(((*(yR119 *)rt_nil_check(F.v8493))).f_name == ((rt_int *)(v1791).p)[y_ix1(v1791, F.c_8500)]))))) {
F.v8493 = ((*(yR119 *)rt_nil_check(F.v8493))).f_mnext;
}
if ((F.v8493 == ((void *)0))) {
yr1180_FailN(((rt_int *)(v1815).p)[y_ix1(v1815, F.c_8500)], ((rt_int *)(v1791).p)[y_ix1(v1791, F.c_8500)], y_str(" is not exported by that module", 31));
}
yr3448_SetLazy(rt_range(F.c_8500, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), F.v8493);
}
if (i8501 == hi8502) break;
}}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3462_ResolveLater(rt_int a_p3463) {
struct yf3464 F;
memset((void *)&F, 0, sizeof F);
F.p3463 = a_p3463;
F.lo8511 = INT64_C(1);
F.hi8512 = v1817;
{ rt_int hi8516 = F.hi8512;
for (rt_int i8515 = F.lo8511; i8515 <= hi8516; i8515++) { F.c_8514 = i8515;
if (((((!(((void * *)(v1780).p)[y_ix1(v1780, F.c_8514)] == ((void *)0)))) && ((((void * *)(v1802).p)[y_ix1(v1802, F.c_8514)] == ((void *)0)))) && ((((rt_int *)(v1813).p)[y_ix1(v1813, F.c_8514)] == F.p3463)))) {
F.v8507 = yr2232_Find(((rt_int *)(v1791).p)[y_ix1(v1791, F.c_8514)]);
if ((F.v8507 == ((void *)0))) {
yr1180_FailN(((rt_int *)(v1815).p)[y_ix1(v1815, F.c_8514)], ((rt_int *)(v1791).p)[y_ix1(v1791, F.c_8514)], y_str(" is not declared around this module (X.B.2)", 43));
}
yr3448_SetLazy(rt_range(F.c_8514, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), F.v8507);
}
if (i8515 == hi8516) break;
}}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3468_LazyModule(void * a_p3469, void * * a_p3470, rt_int a_p3471) {
struct yf3472 F;
memset((void *)&F, 0, sizeof F);
F.p3469 = a_p3469;
F.p3470 = a_p3470;
F.p3471 = a_p3471;
F.v8523 = ((*(yR99 *)rt_nil_check(F.p3469))).f_b;
while ((!(F.v8523 == ((void *)0)))) {
F.v8527 = ((*(yR99 *)rt_nil_check(F.v8523))).f_name;
if ((!(((*(yR99 *)rt_nil_check(F.v8523))).f_ival == INT64_C(0)))) {
F.v8527 = rt_range(((*(yR99 *)rt_nil_check(F.v8523))).f_ival, INT64_C(0), INT64_C(4000000));
}
if (((((!(F.v8527 == v525))) && ((!(F.v8527 == v579)))) && ((!(F.v8527 == v564))))) {
F.v8525 = yr3439_Lazy(F.v8527, F.v8527, F.p3469, F.p3471);
((*(yR119 *)rt_nil_check(F.v8525))).f_mnext = (*F.p3470);
(*F.p3470) = F.v8525;
}
F.v8523 = ((*(yR99 *)rt_nil_check(F.v8523))).f_next;
}
F.v8525 = yr3439_Lazy(((*(yR99 *)rt_nil_check(F.p3469))).f_name, ((*(yR99 *)rt_nil_check(F.p3469))).f_name, ((void *)0), F.p3471);
((*(yR119 *)rt_nil_check(F.v8525))).f_mnext = (*F.p3470);
(*F.p3470) = F.v8525;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3476_ResolveItem(void * a_p3477, void * * a_p3478, rt_int a_p3479) {
struct yf3480 F;
memset((void *)&F, 0, sizeof F);
F.p3477 = a_p3477;
F.p3478 = a_p3478;
F.p3479 = a_p3479;
F.v8544 = ((*(yR99 *)rt_nil_check(F.p3477))).f_flag;
if (((F.p3479 && ((((*(yR99 *)rt_nil_check(F.p3477))).f_text == INT64_C(0)))) && (((((((*(yR99 *)rt_nil_check(F.p3477))).f_name == v525)) || ((((*(yR99 *)rt_nil_check(F.p3477))).f_name == v579))) || ((((*(yR99 *)rt_nil_check(F.p3477))).f_name == v564)))))) {
if ((yr2238_FindHere(((*(yR99 *)rt_nil_check(F.p3477))).f_name) == ((void *)0))) {
return;
}
}
F.v8540 = ((*(yR99 *)rt_nil_check(F.p3477))).f_name;
if ((!(((*(yR99 *)rt_nil_check(F.p3477))).f_ival == INT64_C(0)))) {
F.v8540 = rt_range(((*(yR99 *)rt_nil_check(F.p3477))).f_ival, INT64_C(0), INT64_C(4000000));
}
if ((!(((*(yR99 *)rt_nil_check(F.p3477))).f_text == INT64_C(0)))) {
if ((((!F.p3479)) && ((yr2232_Find(((*(yR99 *)rt_nil_check(F.p3477))).f_text) == ((void *)0))))) {
F.v8546 = yr3425_ImportLater(((*(yR99 *)rt_nil_check(F.p3477))).f_text, ((*(yR99 *)rt_nil_check(F.p3477))).f_line, &F.v8548);
if ((F.v8546 == INT64_C(2))) {
F.v8538 = yr3439_Lazy(F.v8540, ((*(yR99 *)rt_nil_check(F.p3477))).f_name, F.v8548, ((*(yR99 *)rt_nil_check(F.p3477))).f_line);
((*(yR119 *)rt_nil_check(F.v8538))).f_mnext = (*F.p3478);
(*F.p3478) = F.v8538;
return;
}
}
F.v8536 = yr2337_Real(yr2244_Lookup(((*(yR99 *)rt_nil_check(F.p3477))).f_text, ((*(yR99 *)rt_nil_check(F.p3477))).f_line));
if ((!(((*(yR119 *)rt_nil_check(F.v8536))).f_kind == v873))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3477))).f_line, ((*(yR99 *)rt_nil_check(F.p3477))).f_text, y_str(" is not a module", 16));
}
F.v8534 = ((*(yR119 *)rt_nil_check(F.v8536))).f_members;
while ((((!(F.v8534 == ((void *)0)))) && ((!(((*(yR119 *)rt_nil_check(F.v8534))).f_name == ((*(yR99 *)rt_nil_check(F.p3477))).f_name))))) {
F.v8534 = ((*(yR119 *)rt_nil_check(F.v8534))).f_mnext;
}
if ((F.v8534 == ((void *)0))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3477))).f_line, ((*(yR99 *)rt_nil_check(F.p3477))).f_name, y_str(" is not exported by that module", 31));
}
} else {
if (F.p3479) {
F.v8534 = yr2238_FindHere(((*(yR99 *)rt_nil_check(F.p3477))).f_name);
} else {
F.v8534 = yr2232_Find(((*(yR99 *)rt_nil_check(F.p3477))).f_name);
}
if ((((F.v8534 == ((void *)0))) && (!F.p3479))) {
F.v8546 = yr3425_ImportLater(((*(yR99 *)rt_nil_check(F.p3477))).f_name, ((*(yR99 *)rt_nil_check(F.p3477))).f_line, &F.v8548);
if ((((F.v8546 == INT64_C(2))) && ((((*(yR99 *)rt_nil_check(F.v8548))).f_name == ((*(yR99 *)rt_nil_check(F.p3477))).f_name)))) {
if ((((!(F.v8544 == INT64_C(0)))) || ((!(((*(yR99 *)rt_nil_check(F.p3477))).f_ival == INT64_C(0)))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3477))).f_line, y_str("a module name in a list takes no attribute and no AS (X.B.3)", 60));
}
yr3468_LazyModule(F.v8548, &(*F.p3478), ((*(yR99 *)rt_nil_check(F.p3477))).f_line);
return;
}
if ((F.v8546 >= INT64_C(2))) {
F.v8538 = yr3439_Lazy(F.v8540, ((*(yR99 *)rt_nil_check(F.p3477))).f_name, F.v8548, ((*(yR99 *)rt_nil_check(F.p3477))).f_line);
((*(yR119 *)rt_nil_check(F.v8538))).f_mnext = (*F.p3478);
(*F.p3478) = F.v8538;
return;
}
F.v8534 = yr2232_Find(((*(yR99 *)rt_nil_check(F.p3477))).f_name);
}
if ((F.p3479 && ((!(F.v8534 == ((void *)0)))))) {
if ((((((*(yR119 *)rt_nil_check(F.v8534))).f_kind == v888)) && ((((*(yR119 *)rt_nil_check(F.v8534))).f_mval == INT64_C(1))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3477))).f_line, ((*(yR99 *)rt_nil_check(F.p3477))).f_name, y_str(" is imported into this module: it may not be exported again (X.B.1)", 67));
}
}
if ((F.v8534 == ((void *)0))) {
if (F.p3479) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3477))).f_line, ((*(yR99 *)rt_nil_check(F.p3477))).f_name, y_str(" is not declared in this module", 31));
} else {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3477))).f_line, ((*(yR99 *)rt_nil_check(F.p3477))).f_name, y_str(" is not declared around this module (X.B.2)", 43));
}
}
}
F.v8536 = yr2337_Real(F.v8534);
if ((((((*(yR119 *)rt_nil_check(F.v8536))).f_kind == v873)) && ((((*(yR99 *)rt_nil_check(F.p3477))).f_text == INT64_C(0))))) {
if ((((!(F.v8544 == INT64_C(0)))) || ((!(((*(yR99 *)rt_nil_check(F.p3477))).f_ival == INT64_C(0)))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3477))).f_line, y_str("a module name in a list takes no attribute and no AS (X.B.3)", 60));
}
F.v8538 = ((*(yR119 *)rt_nil_check(F.v8536))).f_members;
while ((!(F.v8538 == ((void *)0)))) {
F.v8534 = yr3403_Alias(((*(yR119 *)rt_nil_check(F.v8538))).f_name, F.v8538);
((*(yR119 *)rt_nil_check(F.v8534))).f_mnext = (*F.p3478);
(*F.p3478) = F.v8534;
F.v8538 = ((*(yR119 *)rt_nil_check(F.v8538))).f_mnext;
}
if ((!F.p3479)) {
F.v8534 = yr3403_Alias(((*(yR119 *)rt_nil_check(F.v8536))).f_name, F.v8536);
((*(yR119 *)rt_nil_check(F.v8534))).f_mnext = (*F.p3478);
(*F.p3478) = F.v8534;
}
return;
}
F.v8538 = yr3403_Alias(F.v8540, F.v8534);
if (F.p3479) {
if ((((((*(yR119 *)rt_nil_check(F.v8536))).f_kind == v861)) || ((((*(yR119 *)rt_nil_check(F.v8536))).f_kind == v864)))) {
if ((((F.v8544 == v423)) || ((F.v8544 == v477)))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3477))).f_line, y_str("READONLY and VAR are for variables", 34));
}
if ((((F.v8544 == v468)) && ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v8536))).f_rep))).f_opaque)) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3477))).f_line, ((*(yR99 *)rt_nil_check(F.p3477))).f_name, y_str(" is opaque already: an export list cannot make it TRANSPARENT (X.B.3)", 69));
}
if ((((!(F.v8544 == v468))) || ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v8536))).f_rep))).f_opaque)) {
F.v8542 = yr2350_CopyRep(((*(yR119 *)rt_nil_check(F.v8536))).f_rep);
((*(yR104 *)rt_nil_check(F.v8542))).f_opaque = 1;
((*(yR104 *)rt_nil_check(F.v8542))).f_opaqueops = v1768;
((*(yR119 *)rt_nil_check(F.v8538))).f_target = yr2202_NewSym(((*(yR119 *)rt_nil_check(F.v8536))).f_kind, ((*(yR119 *)rt_nil_check(F.v8536))).f_name);
((*(yR119 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v8538))).f_target))).f_rep = F.v8542;
((*(yR119 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v8538))).f_target))).f_decl = ((*(yR119 *)rt_nil_check(F.v8536))).f_decl;
} else {
yr3410_AddLits(&(*F.p3478), ((*(yR119 *)rt_nil_check(F.v8536))).f_rep, INT64_C(0));
}
} else if ((((((*(yR119 *)rt_nil_check(F.v8536))).f_kind == v855)) || ((((*(yR119 *)rt_nil_check(F.v8536))).f_kind == v858)))) {
if ((((F.v8544 == v390)) || ((F.v8544 == v468)))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3477))).f_line, y_str("OPAQUE and TRANSPARENT are for types", 36));
}
if ((((F.v8544 == v477)) && ((((((*(yR119 *)rt_nil_check(F.v8536))).f_kind == v858)) || ((*(yR119 *)rt_nil_check(F.v8534))).f_readonly)))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3477))).f_line, ((*(yR99 *)rt_nil_check(F.p3477))).f_name, y_str(" is a constant or READONLY here: an export list cannot make it VAR (X.B.3)", 74));
}
if ((!(F.v8544 == v477))) {
((*(yR119 *)rt_nil_check(F.v8538))).f_readonly = 1;
}
} else if ((!(F.v8544 == INT64_C(0)))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3477))).f_line, y_str("an attribute is for a type, a representation or a variable", 58));
}
if ((((((*(yR119 *)rt_nil_check(F.v8536))).f_kind == v855)) && ((((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v8536))).f_rep))).f_kind == v831)) || yr2393_HoldsSignal(((*(yR119 *)rt_nil_check(F.v8536))).f_rep))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3477))).f_line, y_str("a signal may not be exported from its monitor (X.E.4)", 53));
}
} else if ((((((*(yR119 *)rt_nil_check(F.v8536))).f_kind == v861)) || ((((*(yR119 *)rt_nil_check(F.v8536))).f_kind == v864)))) {
yr3410_AddLits(&(*F.p3478), ((*(yR119 *)rt_nil_check(F.v8536))).f_rep, INT64_C(0));
}
((*(yR119 *)rt_nil_check(F.v8538))).f_mnext = (*F.p3478);
(*F.p3478) = F.v8538;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3484_DefineAll(void * a_p3485, rt_int a_p3486) {
struct yf3487 F;
memset((void *)&F, 0, sizeof F);
F.p3485 = a_p3485;
F.p3486 = a_p3486;
F.v8583 = F.p3485;
F.v8585 = F.p3485;
F.v8587 = F.p3485;
while ((!(F.v8583 == ((void *)0)))) {
F.v8585 = ((*(yR119 *)rt_nil_check(F.v8583))).f_mnext;
F.v8587 = yr2238_FindHere(((*(yR119 *)rt_nil_check(F.v8583))).f_name);
if (((!yr2285_Resolved(F.v8583)) || ((((!(F.v8587 == ((void *)0)))) && (!yr2285_Resolved(F.v8587)))))) {
if ((!(F.v8587 == ((void *)0)))) {
yr1180_FailN(F.p3486, ((*(yR119 *)rt_nil_check(F.v8583))).f_name, y_str(" comes into this scope twice", 28));
}
yr2304_Define(F.v8583, F.p3486);
} else if ((((F.v8587 == ((void *)0))) || ((!(yr2337_Real(F.v8587) == yr2337_Real(F.v8583)))))) {
if (((((!(F.v8587 == ((void *)0)))) && ((((*(yR119 *)rt_nil_check(yr2337_Real(F.v8583)))).f_kind == v867))) && ((((*(yR119 *)rt_nil_check(yr2337_Real(F.v8587)))).f_kind == v867)))) {
yr2304_Define(F.v8583, F.p3486);
} else if ((F.v8587 == ((void *)0))) {
yr2304_Define(F.v8583, F.p3486);
} else {
yr1180_FailN(F.p3486, ((*(yR119 *)rt_nil_check(F.v8583))).f_name, y_str(" comes into this scope twice", 28));
}
}
F.v8583 = F.v8585;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3491_ExtendWith(void * a_p3492, void * a_p3493, rt_int a_p3494) {
struct yf3495 F;
memset((void *)&F, 0, sizeof F);
F.p3492 = a_p3492;
F.p3493 = a_p3493;
F.p3494 = a_p3494;
F.v8595 = ((void *)0);
F.v8597 = ((void *)0);
F.v8599 = ((void *)0);
F.v8601 = ((void *)0);
F.v8601 = F.p3492;
while ((!(F.v8601 == ((void *)0)))) {
if ((!(yr3328_SameSignature(F.v8601, F.p3493) == ((void *)0)))) {
yr1180_FailN(F.p3494, ((*(yR119 *)rt_nil_check(F.v8601))).f_name, y_str(" is exported over a definition for the same parameter types around the module (X.B.5)", 85));
}
if ((!(((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v8601))).f_ret))).f_kind == v846)) == ((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.p3493))).f_ret))).f_kind == v846))))) {
yr1180_FailN(F.p3494, ((*(yR119 *)rt_nil_check(F.v8601))).f_name, y_str(": a value-returning routine is extended only by one, a procedure only by a procedure (X.A.1)", 92));
}
({ F.v8599 = rt_alloc(sizeof(yR119)); });
(*(yR119 *)rt_nil_check(F.v8599)) = (*(yR119 *)rt_nil_check(F.v8601));
((*(yR119 *)rt_nil_check(F.v8599))).f_target = F.v8601;
((*(yR119 *)rt_nil_check(F.v8599))).f_alt = ((void *)0);
if ((F.v8597 == ((void *)0))) {
F.v8595 = F.v8599;
} else {
((*(yR119 *)rt_nil_check(F.v8597))).f_alt = F.v8599;
}
F.v8597 = F.v8599;
F.v8601 = ((*(yR119 *)rt_nil_check(F.v8601))).f_alt;
}
((*(yR119 *)rt_nil_check(F.v8597))).f_alt = F.p3493;
{ void * rv8604 = F.v8595;
return rv8604; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3499_CompileModule(void * a_p3500) {
struct yf3501 F;
memset((void *)&F, 0, sizeof F);
F.p3500 = a_p3500;
F.v8634 = 0;
((*(yR99 *)rt_nil_check(F.p3500))).f_ival = INT64_C(1);
F.v8608 = ((void *)0);
F.v8626 = ((*(yR99 *)rt_nil_check(F.p3500))).f_a;
while ((!(F.v8626 == ((void *)0)))) {
yr3476_ResolveItem(F.v8626, &F.v8608, 0);
F.v8626 = ((*(yR99 *)rt_nil_check(F.v8626))).f_next;
}
F.v8618 = v1755;
if ((((((*(yR99 *)rt_nil_check(F.p3500))).f_flag == INT64_C(1))) && ((v1755 == ((void *)0))))) {
F.v8620 = yr2202_NewSym(v855, ((*(yR99 *)rt_nil_check(F.p3500))).f_name);
((*(yR119 *)rt_nil_check(F.v8620))).f_level = v1273;
((*(yR119 *)rt_nil_check(F.v8620))).f_cname = yr1194_Fresh(y_str("mon", 3));
((*(yR119 *)rt_nil_check(F.v8620))).f_rep = v1342;
yr2324_DeclStorage(yr1055_T(y_str("ymon", 4)), ((*(yR119 *)rt_nil_check(F.v8620))).f_cname);
yr1126_Emit(yr3194_Join(yr1055_T(y_str("y_mon_init(&", 12)), yr2311_Path(v1273, ((*(yR119 *)rt_nil_check(F.v8620))).f_cname), yr1055_T(y_str(");", 2))));
v1755 = F.v8620;
F.v8634 = 1;
}
yr2209_OpenScope(1);
((void * *)(v1766).p)[y_ix1(v1766, v1267)] = ((void *)0);
F.v8630 = v1270;
v1270 = v1267;
F.v8612 = F.v8608;
while ((!(F.v8612 == ((void *)0)))) {
((*(yR119 *)rt_nil_check(F.v8612))).f_mval = INT64_C(1);
F.v8612 = ((*(yR119 *)rt_nil_check(F.v8612))).f_mnext;
}
yr3484_DefineAll(F.v8608, ((*(yR99 *)rt_nil_check(F.p3500))).f_line);
yr3391_Declarations(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3500))).f_c))).f_a);
yr1126_Emit(yr3194_Join(yr1055_T(y_str("/* ", 3)), ((*(yR99 *)rt_nil_check(F.p3500))).f_name, yr1055_T(y_str(" */", 3))));
yr3369_Defer(F.p3500, INT64_C(2), (v990).f_tail, F.v8634);
v1768 = INT64_C(0);
F.v8626 = ((*(yR99 *)rt_nil_check(F.p3500))).f_b;
while ((!(F.v8626 == ((void *)0)))) {
if ((((((*(yR99 *)rt_nil_check(F.v8626))).f_text == INT64_C(0))) && ((yr2238_FindHere(((*(yR99 *)rt_nil_check(F.v8626))).f_name) == ((void *)0))))) {
if ((((*(yR99 *)rt_nil_check(F.v8626))).f_name == v525)) {
v1768 = rt_range(rt_add(v1768, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((((((*(yR99 *)rt_nil_check(F.v8626))).f_name == v579)) || ((((*(yR99 *)rt_nil_check(F.v8626))).f_name == v564)))) {
if (((rt_div(v1768, INT64_C(2))) == INT64_C(0))) {
v1768 = rt_range(rt_add(v1768, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
}
F.v8626 = ((*(yR99 *)rt_nil_check(F.v8626))).f_next;
}
F.v8610 = ((void *)0);
F.v8626 = ((*(yR99 *)rt_nil_check(F.p3500))).f_b;
while ((!(F.v8626 == ((void *)0)))) {
yr3476_ResolveItem(F.v8626, &F.v8610, 1);
F.v8626 = ((*(yR99 *)rt_nil_check(F.v8626))).f_next;
}
F.v8628 = ((void * *)(v1766).p)[y_ix1(v1766, v1267)];
v1270 = F.v8630;
yr2221_CloseScope();
while ((!(F.v8628 == ((void *)0)))) {
F.v8626 = ((*(yR99 *)rt_nil_check(F.v8628))).f_next;
((*(yR99 *)rt_nil_check(F.v8628))).f_next = ((void * *)(v1766).p)[y_ix1(v1766, v1267)];
((void * *)(v1766).p)[y_ix1(v1766, v1267)] = F.v8628;
F.v8628 = F.v8626;
}
v1755 = F.v8618;
F.v8614 = yr2202_NewSym(v873, ((*(yR99 *)rt_nil_check(F.p3500))).f_name);
((*(yR119 *)rt_nil_check(F.v8614))).f_members = F.v8610;
yr2304_Define(F.v8614, ((*(yR99 *)rt_nil_check(F.p3500))).f_line);
F.v8616 = F.v8610;
F.v8610 = ((void *)0);
while ((!(F.v8616 == ((void *)0)))) {
F.v8622 = ((*(yR119 *)rt_nil_check(F.v8616))).f_mnext;
F.v8612 = yr3403_Alias(((*(yR119 *)rt_nil_check(F.v8616))).f_name, F.v8616);
((*(yR119 *)rt_nil_check(F.v8612))).f_readonly = ((*(yR119 *)rt_nil_check(F.v8616))).f_readonly;
((*(yR119 *)rt_nil_check(F.v8612))).f_mnext = F.v8610;
F.v8610 = F.v8612;
F.v8616 = F.v8622;
}
((*(yR119 *)rt_nil_check(F.v8614))).f_members = F.v8610;
((*(yR99 *)rt_nil_check(F.p3500))).f_ival = INT64_C(2);
yr3455_ResolveFrom(F.p3500, F.v8614);
F.v8616 = F.v8610;
while ((!(F.v8616 == ((void *)0)))) {
F.v8622 = yr3403_Alias(((*(yR119 *)rt_nil_check(F.v8616))).f_name, F.v8616);
((*(yR119 *)rt_nil_check(F.v8622))).f_readonly = ((*(yR119 *)rt_nil_check(F.v8616))).f_readonly;
F.v8624 = yr2232_Find(((*(yR119 *)rt_nil_check(F.v8616))).f_name);
if ((!(F.v8624 == ((void *)0)))) {
if ((!yr2285_Resolved(F.v8624))) {
F.v8624 = ((void *)0);
} else {
F.v8624 = yr2337_Real(F.v8624);
}
}
if ((((((*(yR119 *)rt_nil_check(yr2337_Real(F.v8616)))).f_kind == v870)) && ((!(F.v8624 == ((void *)0)))))) {
if ((((*(yR119 *)rt_nil_check(F.v8624))).f_kind == v870)) {
F.v8622 = yr3491_ExtendWith(yr2337_Real(F.v8616), F.v8624, ((*(yR99 *)rt_nil_check(F.p3500))).f_line);
}
}
if ((yr2238_FindHere(((*(yR119 *)rt_nil_check(F.v8616))).f_name) == ((void *)0))) {
yr2304_Define(F.v8622, ((*(yR99 *)rt_nil_check(F.p3500))).f_line);
} else if ((((*(yR119 *)rt_nil_check(F.v8622))).f_kind == v870)) {
yr2304_Define(F.v8622, ((*(yR99 *)rt_nil_check(F.p3500))).f_line);
} else if ((((((*(yR119 *)rt_nil_check(yr2238_FindHere(((*(yR119 *)rt_nil_check(F.v8616))).f_name)))).f_kind == v888)) && ((!(yr2337_Real(yr2238_FindHere(((*(yR119 *)rt_nil_check(F.v8616))).f_name)) == yr2337_Real(F.v8616)))))) {
yr2304_Define(F.v8622, ((*(yR99 *)rt_nil_check(F.p3500))).f_line);
} else if ((!(((*(yR119 *)rt_nil_check(yr2337_Real(F.v8616)))).f_kind == v867))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3500))).f_line, ((*(yR119 *)rt_nil_check(F.v8616))).f_name, y_str(" is exported into a scope that has it already", 45));
}
F.v8616 = ((*(yR119 *)rt_nil_check(F.v8616))).f_mnext;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3505_DeclareTemplate(void * a_p3506) {
struct yf3507 F;
memset((void *)&F, 0, sizeof F);
F.p3506 = a_p3506;
F.v8664 = yr2202_NewSym(v876, ((*(yR99 *)rt_nil_check(F.p3506))).f_name);
((*(yR119 *)rt_nil_check(F.v8664))).f_decl = F.p3506;
yr2304_Define(F.v8664, ((*(yR99 *)rt_nil_check(F.p3506))).f_line);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3511_Instantiate(void * a_p3512) {
struct yf3513 F;
memset((void *)&F, 0, sizeof F);
F.p3512 = a_p3512;
F.v8668 = yr2337_Real(yr2244_Lookup(((*(yR99 *)rt_nil_check(F.p3512))).f_name, ((*(yR99 *)rt_nil_check(F.p3512))).f_line));
if ((!(((*(yR119 *)rt_nil_check(F.v8668))).f_kind == v876))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3512))).f_line, ((*(yR99 *)rt_nil_check(F.p3512))).f_name, y_str(" is not a template", 18));
}
F.v8670 = ((*(yR119 *)rt_nil_check(F.v8668))).f_decl;
if ((!(yr1903_Count(((*(yR99 *)rt_nil_check(F.v8670))).f_a) == yr1903_Count(((*(yR99 *)rt_nil_check(F.p3512))).f_a)))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3512))).f_line, ((*(yR99 *)rt_nil_check(F.p3512))).f_name, y_str(": the number of actuals is wrong", 32));
}
F.v8676 = rt_range(rt_add(v1207, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo8692 = ((*(yR99 *)rt_nil_check(F.v8670))).f_ival;
F.hi8693 = rt_sub(((*(yR99 *)rt_nil_check(F.v8670))).f_flag, INT64_C(1));
{ rt_int hi8697 = F.hi8693;
for (rt_int i8696 = F.lo8692; i8696 <= hi8697; i8696++) { F.c_8695 = i8696;
F.v8680 = ((rt_int *)(v1201).p)[y_ix1(v1201, F.c_8695)];
F.v8682 = ((rt_int *)(v1203).p)[y_ix1(v1203, F.c_8695)];
if ((F.v8680 == v201)) {
F.v8672 = ((*(yR99 *)rt_nil_check(F.v8670))).f_a;
F.v8674 = ((*(yR99 *)rt_nil_check(F.p3512))).f_a;
while ((!(F.v8672 == ((void *)0)))) {
if ((((((*(yR99 *)rt_nil_check(F.v8672))).f_name == F.v8682)) && ((F.v8680 == v201)))) {
if ((((*(yR99 *)rt_nil_check(F.v8674))).f_flag == INT64_C(1))) {
F.v8680 = v210;
F.v8682 = ((*(yR99 *)rt_nil_check(F.v8674))).f_ival;
} else {
F.v8682 = ((*(yR99 *)rt_nil_check(F.v8674))).f_name;
if ((F.v8682 <= v486)) {
F.v8680 = v204;
} else if ((F.v8682 <= v615)) {
F.v8680 = v207;
}
}
}
F.v8672 = ((*(yR99 *)rt_nil_check(F.v8672))).f_next;
F.v8674 = ((*(yR99 *)rt_nil_check(F.v8674))).f_next;
}
}
v1207 = rt_range(rt_add(v1207, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1201).p)[y_ix1(v1201, v1207)] = F.v8680;
((rt_int *)(v1203).p)[y_ix1(v1203, v1207)] = F.v8682;
((rt_int *)(v1205).p)[y_ix1(v1205, v1207)] = ((rt_int *)(v1205).p)[y_ix1(v1205, F.c_8695)];
if (i8696 == hi8697) break;
}}
v1207 = rt_range(rt_add(v1207, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1201).p)[y_ix1(v1201, v1207)] = v198;
((rt_int *)(v1203).p)[y_ix1(v1203, v1207)] = INT64_C(0);
((rt_int *)(v1205).p)[y_ix1(v1205, v1207)] = ((*(yR99 *)rt_nil_check(F.p3512))).f_line;
F.v8678 = v1243;
v1243 = F.v8676;
F.v8684 = yr1993_ParseModule();
v1243 = F.v8678;
yr3499_CompileModule(F.v8684);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3517_DeclareProcess(void * a_p3518) {
struct yf3519 F;
memset((void *)&F, 0, sizeof F);
F.p3518 = a_p3518;
F.v8707 = ((*(yR99 *)rt_nil_check(F.p3518))).f_sym;
((*(yR119 *)rt_nil_check(F.v8707))).f_monitor = v1755;
yr2324_DeclStorage(yr1055_T(y_str("rt_taskdecl", 11)), yr3194_Join(((*(yR119 *)rt_nil_check(F.v8707))).f_cname, yr1055_T(y_str("_d", 2)), INT64_C(0)));
F.v8709 = yr1888_NewNode(v663, ((*(yR99 *)rt_nil_check(F.p3518))).f_line);
((*(yR99 *)rt_nil_check(F.v8709))).f_sym = F.v8707;
((*(yR99 *)rt_nil_check(F.v8709))).f_next = ((void * *)(v1766).p)[y_ix1(v1766, v1267)];
((void * *)(v1766).p)[y_ix1(v1766, v1267)] = F.v8709;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3523_AwaitProcesses(void) {
struct yf3524 F;
memset((void *)&F, 0, sizeof F);
F.v8715 = ((void * *)(v1766).p)[y_ix1(v1766, v1267)];
while ((!(F.v8715 == ((void *)0)))) {
yr1126_Emit(yr3194_Join(yr1055_T(y_str("rt_await_decl(&", 15)), yr2311_Path(rt_range(rt_sub(((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v8715))).f_sym))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr3194_Join(((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v8715))).f_sym))).f_cname, yr1055_T(y_str("_d", 2)), INT64_C(0))), yr1055_T(y_str(");", 2))));
F.v8715 = ((*(yR99 *)rt_nil_check(F.v8715))).f_next;
}
((void * *)(v1766).p)[y_ix1(v1766, v1267)] = ((void *)0);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3528_Activate(void * a_p3529, void * a_p3530) {
struct yf3531 F;
memset((void *)&F, 0, sizeof F);
F.p3529 = a_p3529;
F.p3530 = a_p3530;
F.v8746 = ((*(yR119 *)rt_nil_check(F.p3530))).f_decl;
yr2966_CompileArgs(((*(yR99 *)rt_nil_check(F.p3529))).f_a, F.p3530, &F.v8726, &F.v8728);
if ((!(F.v8728 == ((*(yR119 *)rt_nil_check(F.p3530))).f_nparams))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3529))).f_line, ((*(yR119 *)rt_nil_check(F.p3530))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
yr3016_NoteCall(F.p3530, ((*(yR99 *)rt_nil_check(F.p3529))).f_line);
yr3282_CheckActuals(F.p3530, F.v8726, ((*(yR99 *)rt_nil_check(F.p3529))).f_line);
F.v8734 = yr1194_Fresh(y_str("pf", 2));
yr1126_Emit(yr3194_Join(yr1055_T(y_str("{ struct ", 9)), ((*(yR119 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.p3530))).f_members))).f_name, yr3194_Join(yr1055_T(y_str(" *", 2)), F.v8734, yr3194_Join(yr1055_T(y_str(" = rt_alloc(sizeof *", 20)), F.v8734, yr1055_T(y_str(");", 2))))));
if ((((*(yR119 *)rt_nil_check(F.p3530))).f_level > INT64_C(1))) {
yr1126_Emit(yr3194_Join(F.v8734, yr1055_T(y_str("->up = ", 7)), yr3194_Join(yr2318_FramePtr(rt_range(rt_sub(((*(yR119 *)rt_nil_check(F.p3530))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))), yr1055_T(y_str(";", 1)), INT64_C(0))));
}
F.v8732 = ((*(yR119 *)rt_nil_check(F.p3530))).f_params;
F.v8730 = rt_range(rt_add(F.v8726, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(F.v8732 == ((void *)0)))) {
if ((!yr2945_Fits(((*(yR114 *)rt_nil_check(F.v8732))).f_rep, ((void * *)(v1493).p)[y_ix1(v1493, F.v8730)]))) {
yr2430_TypeClash(((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v8730)]))).f_line, ((*(yR114 *)rt_nil_check(F.v8732))).f_rep, ((void * *)(v1493).p)[y_ix1(v1493, F.v8730)]);
}
F.v8740 = yr3194_Join(F.v8734, yr1055_T(y_str("->", 2)), ((*(yR114 *)rt_nil_check(F.v8732))).f_cname);
yr2975_CheckUnresolved(((*(yR114 *)rt_nil_check(F.v8732))).f_rep, ((void * *)(v1493).p)[y_ix1(v1493, F.v8730)], ((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v8730)]))).f_line);
if ((((*(yR114 *)rt_nil_check(F.v8732))).f_cls == v897)) {
if ((!yr2807_IsVariable(((void * *)(v1504).p)[y_ix1(v1504, F.v8730)]))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v8730)]))).f_line, ((*(yR114 *)rt_nil_check(F.v8732))).f_name, y_str(": the actual of a VAR parameter must be a variable", 50));
}
if ((!yr2983_SameAsFormal(((*(yR114 *)rt_nil_check(F.v8732))).f_rep, ((void * *)(v1493).p)[y_ix1(v1493, F.v8730)]))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v8730)]))).f_line, ((*(yR114 *)rt_nil_check(F.v8732))).f_name, y_str(": a VAR actual has the representation of its formal (VII.G, X.A.2)", 66));
}
yr3249_NoteWrite(((void * *)(v1504).p)[y_ix1(v1504, F.v8730)]);
yr1126_Emit(yr3194_Join(F.v8740, yr1055_T(y_str(" = &", 4)), yr3194_Join(((rt_int *)(v1482).p)[y_ix1(v1482, F.v8730)], yr1055_T(y_str(";", 1)), INT64_C(0))));
} else if (yr2380_Deep(((*(yR114 *)rt_nil_check(F.v8732))).f_rep)) {
F.v8736 = yr1194_Fresh(y_str("t", 1));
yr1126_Emit(yr3194_Join(yr1055_T(y_str("{ ", 2)), yr2405_CType(((*(yR114 *)rt_nil_check(F.v8732))).f_rep), yr3194_Join(yr1055_T(y_str(" ", 1)), F.v8736, yr3194_Join(yr1055_T(y_str(" = ", 3)), yr2779_Convert(((rt_int *)(v1482).p)[y_ix1(v1482, F.v8730)], ((*(yR114 *)rt_nil_check(F.v8732))).f_rep, ((void * *)(v1493).p)[y_ix1(v1493, F.v8730)]), yr1055_T(y_str(";", 1))))));
if ((((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v8732))).f_rep))).f_kind == v837)) {
yr1126_Emit(yr3194_Join(yr1055_T(y_str("y_copy(y_desc_vector(", 21)), yr2411_DescOf(((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v8732))).f_rep))).f_elem), yr3194_Join(yr1055_T(y_str("), &", 4)), F.v8740, yr3194_Join(yr1055_T(y_str(", &", 3)), F.v8736, yr1055_T(y_str("); }", 4))))));
} else {
yr1126_Emit(yr3194_Join(yr1055_T(y_str("y_copy(", 7)), yr2411_DescOf(((*(yR114 *)rt_nil_check(F.v8732))).f_rep), yr3194_Join(yr1055_T(y_str(", &", 3)), F.v8740, yr3194_Join(yr1055_T(y_str(", &", 3)), F.v8736, yr1055_T(y_str("); }", 4))))));
}
} else {
yr1126_Emit(yr3194_Join(F.v8740, yr1055_T(y_str(" = ", 3)), yr3194_Join(yr2779_Convert(((rt_int *)(v1482).p)[y_ix1(v1482, F.v8730)], ((*(yR114 *)rt_nil_check(F.v8732))).f_rep, ((void * *)(v1493).p)[y_ix1(v1493, F.v8730)]), yr1055_T(y_str(";", 1)), INT64_C(0))));
}
F.v8730 = rt_range(rt_add(F.v8730, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v8732 = ((*(yR114 *)rt_nil_check(F.v8732))).f_next;
}
v1506 = F.v8726;
F.v8742 = yr1055_T(y_str("0", 1));
if ((!(((*(yR99 *)rt_nil_check(F.v8746))).f_e == ((void *)0)))) {
yr2846_Expr(((*(yR99 *)rt_nil_check(F.v8746))).f_e, v1336, &F.v8742, &F.v8748);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.v8746))).f_line, v1336, F.v8748);
}
F.v8744 = yr1055_T(y_str("0, 0", 4));
if ((!(((*(yR99 *)rt_nil_check(F.v8746))).f_d == ((void *)0)))) {
yr2846_Expr(((*(yR99 *)rt_nil_check(F.v8746))).f_d, v1336, &F.v8738, &F.v8748);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.v8746))).f_line, v1336, F.v8748);
F.v8744 = yr3194_Join(yr1055_T(y_str("1, ", 3)), F.v8738, INT64_C(0));
}
yr1020_SB();
yr1031_SA(y_str("y_create(&", 10));
yr1038_ST(yr2311_Path(rt_range(rt_sub(((*(yR119 *)rt_nil_check(F.p3530))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr3194_Join(((*(yR119 *)rt_nil_check(F.p3530))).f_cname, yr1055_T(y_str("_d", 2)), INT64_C(0))));
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v8742);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v8744);
yr1031_SA(y_str(", ", 2));
yr1038_ST(((*(yR119 *)rt_nil_check(F.p3530))).f_cname);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v8734);
yr1031_SA(y_str("); }", 4));
F.v8736 = yr1050_SE();
yr1126_Emit(F.v8736);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3535_MonitorPath(void * a_p3536) {
struct yf3537 F;
memset((void *)&F, 0, sizeof F);
F.p3536 = a_p3536;
{ rt_int rv8805 = yr3194_Join(yr1055_T(y_str("&", 1)), yr2311_Path(((*(yR119 *)rt_nil_check(F.p3536))).f_level, ((*(yR119 *)rt_nil_check(F.p3536))).f_cname), INT64_C(0));
return rv8805; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3541_EnterMonitor(void * a_p3542) {
struct yf3543 F;
memset((void *)&F, 0, sizeof F);
F.p3542 = a_p3542;
if ((((*(yR119 *)rt_nil_check(F.p3542))).f_kind == v870)) {
((*(yR119 *)rt_nil_check(F.p3542))).f_monitor = v1755;
}
if ((((*(yR119 *)rt_nil_check(F.p3542))).f_monitor == ((void *)0))) {
return;
}
yr1126_Emit(yr3194_Join(yr1055_T(y_str("y_mon_enter(", 12)), yr3535_MonitorPath(((*(yR119 *)rt_nil_check(F.p3542))).f_monitor), yr1055_T(y_str(");", 2))));
F.v8809 = yr1194_Fresh(y_str("mf", 2));
v1624 = 1;
yr1126_Emit(yr3194_Join(yr1055_T(y_str("rt_frame ", 9)), F.v8809, yr1055_T(y_str(";", 1))));
yr1020_SB();
yr1031_SA(y_str("if (!RT_TRY(", 12));
yr1038_ST(F.v8809);
yr1031_SA(y_str(")) { RT_POP(", 12));
yr1038_ST(F.v8809);
yr1031_SA(y_str("); ", 3));
if ((((*(yR119 *)rt_nil_check(F.p3542))).f_kind == v879)) {
yr1031_SA(y_str("y_mon_drop(", 11));
} else {
yr1031_SA(y_str("y_mon_leave(", 12));
}
yr1038_ST(yr3535_MonitorPath(((*(yR119 *)rt_nil_check(F.p3542))).f_monitor));
yr1031_SA(y_str("); rt_raise(rt_xcur); }", 23));
yr1126_Emit(yr1050_SE());
v1520 = rt_range(rt_add(v1520, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1518).p)[y_ix1(v1518, v1520)] = F.v8809;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3547_LeaveMonitor(void) {
struct yf3548 F;
memset((void *)&F, 0, sizeof F);
if ((v1595 == ((void *)0))) {
return;
}
if ((((*(yR119 *)rt_nil_check(v1595))).f_monitor == ((void *)0))) {
return;
}
if ((((*(yR119 *)rt_nil_check(v1595))).f_kind == v879)) {
yr1126_Emit(yr3194_Join(yr1055_T(y_str("y_mon_drop(", 11)), yr3535_MonitorPath(((*(yR119 *)rt_nil_check(v1595))).f_monitor), yr1055_T(y_str(");", 2))));
} else {
yr1126_Emit(yr3194_Join(yr1055_T(y_str("y_mon_leave(", 12)), yr3535_MonitorPath(((*(yR119 *)rt_nil_check(v1595))).f_monitor), yr1055_T(y_str(");", 2))));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3552_TerminateStatement(void * a_p3553) {
struct yf3554 F;
memset((void *)&F, 0, sizeof F);
F.p3553 = a_p3553;
if ((((v1595 == ((void *)0))) || ((!(((*(yR119 *)rt_nil_check(v1595))).f_kind == v879))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3553))).f_line, y_str("TERMINATE_PROCESS ends a process (IX.A.7)", 41));
}
yr3523_AwaitProcesses();
yr3547_LeaveMonitor();
yr3088_PopTo(v1523);
yr1132_EmitS(y_str("return;", 7));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3558_DeclareSignal(void * a_p3559, rt_int a_p3560) {
struct yf3561 F;
memset((void *)&F, 0, sizeof F);
F.p3559 = a_p3559;
F.p3560 = a_p3560;
if ((v1755 == ((void *)0))) {
yr1172_FailS(F.p3560, y_str("signal variables are declared in a monitor (X.E.4)", 50));
}
((*(yR119 *)rt_nil_check(F.p3559))).f_rep = yr2350_CopyRep(((*(yR119 *)rt_nil_check(F.p3559))).f_rep);
((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.p3559))).f_rep))).f_monitor = v1755;
yr1126_Emit(yr3194_Join(yr1055_T(y_str("y_sig_init(&", 12)), yr2331_SymPath(F.p3559), yr3194_Join(yr1055_T(y_str(", ", 2)), yr3535_MonitorPath(v1755), yr1055_T(y_str(");", 2)))));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3565_DeclareSignalArray(void * a_p3566, rt_int a_p3567) {
struct yf3568 F;
memset((void *)&F, 0, sizeof F);
F.p3566 = a_p3566;
F.p3567 = a_p3567;
if ((v1755 == ((void *)0))) {
yr1172_FailS(F.p3567, y_str("signal variables are declared in a monitor (X.E.4)", 50));
}
yr1126_Emit(yr3194_Join(yr1055_T(y_str("y_sig_init_all(", 15)), yr2411_DescOf(((*(yR119 *)rt_nil_check(F.p3566))).f_rep), yr3194_Join(yr1055_T(y_str(", &", 3)), yr2331_SymPath(F.p3566), yr3194_Join(yr1055_T(y_str(", ", 2)), yr3535_MonitorPath(v1755), yr1055_T(y_str(");", 2))))));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3572_DeviceSignal(void * a_p3573, void * a_p3574) {
struct yf3575 F;
memset((void *)&F, 0, sizeof F);
F.p3573 = a_p3573;
F.p3574 = a_p3574;
yr2698_Manifest(F.p3574, &F.v8852, &F.v8854);
if ((!F.v8852)) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3574))).f_line, y_str("an AT location is a manifest constant (XIV.VII)", 47));
}
yr1020_SB();
yr1031_SA(y_str("y_device(&", 10));
yr1038_ST(yr2331_SymPath(F.p3573));
yr1031_SA(y_str(", ", 2));
yr1044_SI(F.v8854);
yr1031_SA(y_str(");", 2));
F.v8856 = yr1050_SE();
yr1126_Emit(F.v8856);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3579_Arg(void * a_p3580, rt_int a_p3581) {
struct yf3582 F;
memset((void *)&F, 0, sizeof F);
F.p3580 = a_p3580;
F.p3581 = a_p3581;
F.v8865 = ((*(yR99 *)rt_nil_check(F.p3580))).f_a;
F.v8867 = INT64_C(1);
while ((((!(F.v8865 == ((void *)0)))) && ((F.v8867 < F.p3581)))) {
F.v8865 = ((*(yR99 *)rt_nil_check(F.v8865))).f_next;
F.v8867 = rt_range(rt_add(F.v8867, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v8865 == ((void *)0))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3580))).f_line, ((*(yR99 *)rt_nil_check(F.p3580))).f_name, y_str(": too few actual parameters", 27));
}
{ void * rv8872 = F.v8865;
return rv8872; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3586_NArgs(void * a_p3587, rt_int a_p3588) {
struct yf3589 F;
memset((void *)&F, 0, sizeof F);
F.p3587 = a_p3587;
F.p3588 = a_p3588;
if ((!(yr1903_Count(((*(yR99 *)rt_nil_check(F.p3587))).f_a) == F.p3588))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3587))).f_line, ((*(yR99 *)rt_nil_check(F.p3587))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3593_Call1(yarr a_p3595, rt_int a_p3596) {
struct yf3597 F;
memset((void *)&F, 0, sizeof F);
F.p3595 = a_p3595;
F.p3596 = a_p3596;
yr1020_SB();
yr1031_SA(F.p3595);
yr1031_SA(y_str("(", 1));
yr1038_ST(F.p3596);
yr1031_SA(y_str(")", 1));
{ rt_int rv8882 = yr1050_SE();
return rv8882; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3601_Addr(rt_int a_p3602) {
struct yf3603 F;
memset((void *)&F, 0, sizeof F);
F.p3602 = a_p3602;
{ rt_int rv8887 = yr3194_Join(yr1055_T(y_str("&", 1)), F.p3602, INT64_C(0));
return rv8887; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3607_StdVar(void * a_p3608, rt_int a_p3609, rt_int * a_p3610, void * * a_p3611) {
struct yf3612 F;
memset((void *)&F, 0, sizeof F);
F.p3608 = a_p3608;
F.p3609 = a_p3609;
F.p3610_o = a_p3610;
F.p3611_o = a_p3611;
yr2819_LValue(F.p3608, &F.p3610, &F.p3611);
yr3249_NoteWrite(F.p3608);
if ((((!(F.p3609 == v852))) && ((!(((*(yR104 *)rt_nil_check(F.p3611))).f_kind == F.p3609))))) {
yr1020_SB();
yr1031_SA(y_str("a ", 2));
if ((F.p3609 == v825)) {
yr1031_SA(y_str("file", 4));
} else if ((F.p3609 == v831)) {
yr1031_SA(y_str("signal", 6));
} else if ((F.p3609 == v834)) {
yr1031_SA(y_str("SEMAPHORE", 9));
} else if ((F.p3609 == v822)) {
yr1031_SA(y_str("pointer", 7));
} else {
yr1031_SA(y_str("variable", 8));
}
yr1031_SA(y_str(" is needed here", 15));
F.v8894 = yr1050_SE();
yr1151_Fail(((*(yR99 *)rt_nil_check(F.p3608))).f_line, F.v8894);
}
(*F.p3610_o) = F.p3610;
(*F.p3611_o) = F.p3611;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3616_NumArg(void * a_p3617, rt_int * a_p3618, void * * a_p3619) {
struct yf3620 F;
memset((void *)&F, 0, sizeof F);
F.p3617 = a_p3617;
F.p3618_o = a_p3618;
F.p3619_o = a_p3619;
yr2846_Expr(F.p3617, ((void *)0), &F.p3618, &F.p3619);
if ((!yr2362_IsNumeric(F.p3619))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3617))).f_line, y_str("a number is needed here", 23));
}
(*F.p3618_o) = F.p3618;
(*F.p3619_o) = F.p3619;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3624_IntArg(void * a_p3625) {
struct yf3626 F;
memset((void *)&F, 0, sizeof F);
F.p3625 = a_p3625;
yr2846_Expr(F.p3625, v1336, &F.v8910, &F.v8912);
if ((!(((*(yR104 *)rt_nil_check(F.v8912))).f_kind == v798))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3625))).f_line, y_str("an integer is needed here", 25));
}
{ rt_int rv8914 = F.v8910;
return rv8914; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3630_CodeInsert(void * a_p3631) {
struct yf3632 F;
memset((void *)&F, 0, sizeof F);
F.p3631 = a_p3631;
F.v8918 = yr3579_Arg(F.p3631, INT64_C(1));
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1)}; y_desc_array(&F.yd_8944, 1, lo, hi, &y_d_int); }
y_init(&F.yd_8944, &F.v8946);
if ((!(((*(yR99 *)rt_nil_check(F.v8918))).f_kind == v765))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3631))).f_line, y_str("a code insert takes a string literal (XIV.XI.5)", 47));
}
F.v8921 = ((*(yR99 *)rt_nil_check(F.v8918))).f_text;
F.v8931 = ((rt_int *)(v914).p)[y_ix1(v914, F.v8921)];
yr1020_SB();
F.v8927 = INT64_C(1);
while ((F.v8927 <= F.v8931)) {
F.v8933 = yr1097_TChar(F.v8921, F.v8927);
if ((F.v8933 == 39)) {
F.v8929 = rt_range(rt_add(F.v8927, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1097_TChar(F.v8921, F.v8929) == 39))) {
F.v8929 = rt_range(rt_add(F.v8929, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v8923 = yr1062_Intern(rt_range(rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.v8921)], F.v8927), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v8929, F.v8927)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1025_SC(((unsigned char *)(v970).p)[y_ix1(v970, yr2681_CharValue(v1340, F.v8923, ((*(yR99 *)rt_nil_check(F.p3631))).f_line))]);
F.v8927 = rt_range(rt_add(F.v8929, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v8933 == 36)) {
F.v8929 = rt_range(rt_add(F.v8927, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((F.v8929 <= F.v8931)) && ((yr1002_IsLetter(yr1097_TChar(F.v8921, F.v8929)) || yr1008_IsDigit(yr1097_TChar(F.v8921, F.v8929)))))) {
F.v8929 = rt_range(rt_add(F.v8929, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v8923 = yr1062_Intern(rt_range(rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.v8921)], F.v8927), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v8929, F.v8927)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v8935 = yr2232_Find(F.v8923);
if ((F.v8935 == ((void *)0))) {
v935 = INT64_C(0);
v949 = INT64_C(0);
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3631))).f_line, F.v8923, y_str(" in a code insert is not declared here", 38));
}
F.v8935 = yr2337_Real(F.v8935);
if ((((!(((*(yR119 *)rt_nil_check(F.v8935))).f_kind == v855))) && ((!(((*(yR119 *)rt_nil_check(F.v8935))).f_kind == v858))))) {
v935 = INT64_C(0);
v949 = INT64_C(0);
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3631))).f_line, F.v8923, y_str(" in a code insert is not a variable or constant", 47));
}
yr1038_ST(yr2827_Paren(yr2331_SymPath(F.v8935)));
F.v8927 = F.v8929;
} else {
yr1025_SC(F.v8933);
F.v8927 = rt_range(rt_add(F.v8927, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
F.v8925 = yr1050_SE();
yr1126_Emit(F.v8925);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3636_ManifestScale(void * a_p3637, void * a_p3638) {
struct yf3639 F;
memset((void *)&F, 0, sizeof F);
F.p3637 = a_p3637;
F.p3638 = a_p3638;
yr2764_ManifestFix(F.p3637, &F.v8982, &F.v8984, &F.v8986);
if (((!F.v8982) || ((F.v8984 <= INT64_C(0))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3638))).f_line, ((*(yR99 *)rt_nil_check(F.p3638))).f_name, y_str(": the scale is a positive manifest constant (XI)", 48));
}
F.v8988 = yr2350_CopyRep(v1350);
((*(yR104 *)rt_nil_check(F.v8988))).f_abstract = 0;
yr2552_SetScale(F.v8988, F.v8984, F.v8986);
{ void * rv8992 = F.v8988;
return rv8992; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3643_StdCall(rt_int a_p3644, void * a_p3645, rt_int a_p3646, rt_int * a_p3647, void * * a_p3648) {
struct yf3649 F;
memset((void *)&F, 0, sizeof F);
F.p3644 = a_p3644;
F.p3645 = a_p3645;
F.p3646 = a_p3646;
F.p3647_o = a_p3647;
F.p3648_o = a_p3648;
F.p3648 = v1342;
F.p3647 = yr1055_T(y_str("((void)0)", 9));
F.v9028 = ((((((((((((((((F.p3644 == v1378)) || ((F.p3644 == v1381))) || ((F.p3644 == v1384))) || ((F.p3644 == v1387))) || ((F.p3644 == v1390))) || ((F.p3644 == v1396))) || ((F.p3644 == v1405))) || ((F.p3644 == v1411))) || ((F.p3644 == v1414))) || ((F.p3644 == v1438))) || ((F.p3644 == v1441))) || ((F.p3644 == v1450))) || ((F.p3644 == v1453))) || ((F.p3644 == v1456))) || ((F.p3644 == v1459)));
if ((F.p3646 && (!F.v9028))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3645))).f_line, ((*(yR99 *)rt_nil_check(F.p3645))).f_name, y_str(" returns a value: it is called in an expression", 47));
}
if (((!F.p3646) && F.v9028)) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3645))).f_line, ((*(yR99 *)rt_nil_check(F.p3645))).f_name, y_str(" returns no value", 17));
}
if ((((F.p3644 == v1360)) || ((F.p3644 == v1363)))) {
yr3586_NArgs(F.p3645, INT64_C(2));
yr2846_Expr(yr3579_Arg(F.p3645, INT64_C(1)), ((void *)0), &F.v9000, &F.v9010);
if ((!yr2368_IsArrayLike(F.v9010))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3645))).f_line, ((*(yR99 *)rt_nil_check(F.p3645))).f_name, y_str(" of something that is not an array", 34));
}
F.v9002 = yr3624_IntArg(yr3579_Arg(F.p3645, INT64_C(2)));
yr2698_Manifest(yr3579_Arg(F.p3645, INT64_C(2)), &F.v9024, &F.v9022);
F.p3648 = yr2890_Unbounded(v1336);
if ((F.v9024 && ((((*(yR104 *)rt_nil_check(F.v9010))).f_kind == v816)))) {
if ((((F.v9022 < INT64_C(1))) || ((F.v9022 > ((*(yR104 *)rt_nil_check(F.v9010))).f_nidx)))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3645))).f_line, y_str("no such dimension", 17));
}
F.v9016 = ((*(yR104 *)rt_nil_check(F.v9010))).f_idx;
F.lo9042 = INT64_C(2);
F.hi9043 = F.v9022;
{ rt_int hi9047 = F.hi9043;
for (rt_int i9046 = F.lo9042; i9046 <= hi9047; i9046++) { F.c_9045 = i9046;
F.v9016 = ((*(yR104 *)rt_nil_check(F.v9016))).f_link;
if (i9046 == hi9047) break;
}}
F.p3648 = F.v9016;
}
if ((F.p3644 == v1360)) {
F.p3647 = yr2896_Call2(y_str("y_low", 5), F.v9000, F.v9002);
} else {
F.p3647 = yr2896_Call2(y_str("y_high", 6), F.v9000, F.v9002);
}
(*F.p3647_o) = F.p3647;
(*F.p3648_o) = F.p3648;
return;
}
if ((((((F.p3644 == v1366)) || ((F.p3644 == v1369))) || ((F.p3644 == v1372))) || ((F.p3644 == v1375)))) {
yr3586_NArgs(F.p3645, INT64_C(1));
yr2846_Expr(yr3579_Arg(F.p3645, INT64_C(1)), ((void *)0), &F.v9000, &F.v9010);
if ((!yr2356_IsDiscrete(F.v9010))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3645))).f_line, ((*(yR99 *)rt_nil_check(F.p3645))).f_name, y_str(" of something that is not integer or scalar", 43));
}
if ((((((*(yR104 *)rt_nil_check(F.v9010))).f_kind == v807)) || ((((((*(yR104 *)rt_nil_check(F.v9010))).f_kind == v810)) && (!((*(yR104 *)rt_nil_check(F.v9010))).f_ordered))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3645))).f_line, ((*(yR99 *)rt_nil_check(F.p3645))).f_name, y_str(" applies to integers, ordered enumerations and alphabets, not UNORDERED ones (XI)", 81));
}
if ((!(((*(yR104 *)rt_nil_check(F.v9010))).f_elem == ((void *)0)))) {
F.v9010 = ((*(yR104 *)rt_nil_check(F.v9010))).f_elem;
}
if ((((((F.p3644 == v1372)) || ((F.p3644 == v1375)))) && ((((*(yR104 *)rt_nil_check(F.v9010))).f_kind == v798)))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3645))).f_line, y_str("FIRST and LAST apply to ordered enumerations and alphabets (XI)", 63));
}
if ((F.p3644 == v1372)) {
F.p3648 = F.v9010;
F.p3647 = yr2486_LoText(F.v9010);
} else if ((F.p3644 == v1375)) {
F.p3648 = F.v9010;
F.p3647 = yr2492_HiText(F.v9010);
} else {
F.p3648 = yr2890_Unbounded(F.v9010);
yr1020_SB();
if ((!(((*(yR104 *)rt_nil_check(F.v9010))).f_kind == v798))) {
yr1031_SA(y_str("rt_range(", 9));
}
if ((F.p3644 == v1366)) {
yr1031_SA(y_str("rt_add(", 7));
} else {
yr1031_SA(y_str("rt_sub(", 7));
}
yr1038_ST(F.v9000);
yr1031_SA(y_str(", 1)", 4));
if ((!(((*(yR104 *)rt_nil_check(F.v9010))).f_kind == v798))) {
yr1031_SA(y_str(", 0, ", 5));
yr1044_SI(rt_range(rt_sub(((*(yR104 *)rt_nil_check(F.v9010))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1031_SA(y_str(")", 1));
}
F.p3647 = yr1050_SE();
}
(*F.p3647_o) = F.p3647;
(*F.p3648_o) = F.p3648;
return;
}
if ((F.p3644 == v1378)) {
yr3586_NArgs(F.p3645, INT64_C(1));
yr3607_StdVar(yr3579_Arg(F.p3645, INT64_C(1)), v822, &F.v9000, &F.v9010);
if ((((*(yR104 *)rt_nil_check(F.v9010))).f_elem == ((void *)0))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3645))).f_line, ((*(yR104 *)rt_nil_check(F.v9010))).f_forward, y_str(" is not declared", 16));
}
F.v9016 = ((*(yR104 *)rt_nil_check(F.v9010))).f_elem;
yr1020_SB();
yr1031_SA(y_str("({ ", 3));
yr1038_ST(F.v9000);
yr1031_SA(y_str(" = rt_alloc(sizeof(", 19));
yr1038_ST(yr2405_CType(F.v9016));
yr1031_SA(y_str("));", 3));
if (yr2380_Deep(F.v9016)) {
yr1031_SA(y_str(" y_init(", 8));
yr1038_ST(yr2411_DescOf(F.v9016));
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v9000);
yr1031_SA(y_str(");", 2));
}
yr1031_SA(y_str(" })", 3));
F.p3647 = yr1050_SE();
(*F.p3647_o) = F.p3647;
(*F.p3648_o) = F.p3648;
return;
}
if ((F.p3644 == v1456)) {
yr3586_NArgs(F.p3645, INT64_C(1));
yr3607_StdVar(yr3579_Arg(F.p3645, INT64_C(1)), v822, &F.v9000, &F.v9010);
F.p3647 = yr3194_Join(yr1055_T(y_str("({ free(", 8)), F.v9000, yr3194_Join(yr1055_T(y_str("); ", 3)), F.v9000, yr1055_T(y_str(" = 0; })", 8))));
(*F.p3647_o) = F.p3647;
(*F.p3648_o) = F.p3648;
return;
}
if ((F.p3644 == v1381)) {
yr3586_NArgs(F.p3645, INT64_C(3));
yr3607_StdVar(yr3579_Arg(F.p3645, INT64_C(1)), v825, &F.v9000, &F.v9010);
yr2846_Expr(yr3579_Arg(F.p3645, INT64_C(2)), v1340, &F.v9002, &F.v9012);
if ((!yr2374_IsString(F.v9012))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3645))).f_line, y_str("OPEN takes the name of the file as a string (XII.A)", 51));
}
yr2846_Expr(yr3579_Arg(F.p3645, INT64_C(3)), v1820, &F.v9004, &F.v9014);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p3645))).f_line, v1820, F.v9014);
yr1020_SB();
yr1031_SA(y_str("y_open(&", 8));
yr1038_ST(F.v9000);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v9002);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v9004);
yr1031_SA(y_str(")", 1));
F.p3647 = yr1050_SE();
(*F.p3647_o) = F.p3647;
(*F.p3648_o) = F.p3648;
return;
}
if ((((F.p3644 == v1384)) || ((F.p3644 == v1393)))) {
yr3586_NArgs(F.p3645, INT64_C(1));
yr3607_StdVar(yr3579_Arg(F.p3645, INT64_C(1)), v825, &F.v9000, &F.v9010);
if ((F.p3644 == v1384)) {
F.p3647 = yr3593_Call1(y_str("y_close", 7), yr3601_Addr(F.v9000));
} else {
F.p3648 = v1338;
F.p3647 = yr3593_Call1(y_str("y_check_eof", 11), yr3601_Addr(F.v9000));
}
(*F.p3647_o) = F.p3647;
(*F.p3648_o) = F.p3648;
return;
}
if ((F.p3644 == v1387)) {
yr3586_NArgs(F.p3645, INT64_C(2));
yr3607_StdVar(yr3579_Arg(F.p3645, INT64_C(1)), v825, &F.v9000, &F.v9010);
yr3607_StdVar(yr3579_Arg(F.p3645, INT64_C(2)), v852, &F.v9002, &F.v9012);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p3645))).f_line, ((*(yR104 *)rt_nil_check(F.v9010))).f_elem, F.v9012);
if ((yr2380_Deep(F.v9012) || ((((*(yR104 *)rt_nil_check(F.v9012))).f_kind == v822)))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3645))).f_line, y_str("files of this implementation hold no arrays or pointers", 55));
}
yr1020_SB();
yr1031_SA(y_str("({ ", 3));
yr1038_ST(yr2405_CType(F.v9012));
yr1031_SA(y_str(" g; y_get(&", 11));
yr1038_ST(F.v9000);
yr1031_SA(y_str(", &g, sizeof g); ", 17));
yr1038_ST(F.v9002);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(yr2779_Convert(yr1055_T(y_str("g", 1)), F.v9012, ((*(yR104 *)rt_nil_check(F.v9010))).f_elem));
yr1031_SA(y_str("; })", 4));
F.p3647 = yr1050_SE();
(*F.p3647_o) = F.p3647;
(*F.p3648_o) = F.p3648;
return;
}
if ((F.p3644 == v1390)) {
yr3586_NArgs(F.p3645, INT64_C(2));
yr3607_StdVar(yr3579_Arg(F.p3645, INT64_C(1)), v825, &F.v9000, &F.v9010);
yr2846_Expr(yr3579_Arg(F.p3645, INT64_C(2)), ((*(yR104 *)rt_nil_check(F.v9010))).f_elem, &F.v9002, &F.v9012);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p3645))).f_line, ((*(yR104 *)rt_nil_check(F.v9010))).f_elem, F.v9012);
if ((yr2380_Deep(F.v9012) || ((((*(yR104 *)rt_nil_check(F.v9012))).f_kind == v822)))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3645))).f_line, y_str("files of this implementation hold no arrays or pointers", 55));
}
yr1020_SB();
yr1031_SA(y_str("({ ", 3));
yr1038_ST(yr2405_CType(((*(yR104 *)rt_nil_check(F.v9010))).f_elem));
yr1031_SA(y_str(" pv = ", 6));
yr1038_ST(yr2779_Convert(F.v9002, ((*(yR104 *)rt_nil_check(F.v9010))).f_elem, F.v9012));
yr1031_SA(y_str("; y_put(&", 9));
yr1038_ST(F.v9000);
yr1031_SA(y_str(", &pv, sizeof pv); })", 21));
F.p3647 = yr1050_SE();
(*F.p3647_o) = F.p3647;
(*F.p3648_o) = F.p3648;
return;
}
if ((F.p3644 == v1396)) {
F.v9018 = yr1903_Count(((*(yR99 *)rt_nil_check(F.p3645))).f_a);
if ((((F.v9018 < INT64_C(5))) || ((!((rt_mod((rt_sub(F.v9018, INT64_C(2))), INT64_C(3))) == INT64_C(0)))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3645))).f_line, y_str("MOVE takes an object, an index and triples", 42));
}
yr3607_StdVar(yr3579_Arg(F.p3645, INT64_C(1)), v852, &F.v9000, &F.v9010);
if (((!((((((*(yR104 *)rt_nil_check(F.v9010))).f_kind == v816)) || ((((*(yR104 *)rt_nil_check(F.v9010))).f_kind == v837))))) || ((!(((*(yR104 *)rt_nil_check(F.v9010))).f_nidx == INT64_C(1)))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3645))).f_line, y_str("MOVE works on one-dimensional arrays", 36));
}
F.v9002 = yr3624_IntArg(yr3579_Arg(F.p3645, INT64_C(2)));
F.v9008 = yr1194_Fresh(y_str("at", 2));
yr1020_SB();
yr1031_SA(y_str("({ rt_int ", 10));
yr1038_ST(F.v9008);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(F.v9002);
yr1031_SA(y_str(";", 1));
F.p3647 = yr1050_SE();
F.v9020 = INT64_C(3);
while ((F.v9020 < F.v9018)) {
yr2846_Expr(yr3579_Arg(F.p3645, F.v9020), ((*(yR104 *)rt_nil_check(F.v9010))).f_elem, &F.v9004, &F.v9014);
if (((!yr2368_IsArrayLike(F.v9014)) || (!yr2423_SameType(((*(yR104 *)rt_nil_check(F.v9010))).f_elem, ((*(yR104 *)rt_nil_check(F.v9014))).f_elem)))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3645))).f_line, y_str("MOVE: the components differ in type", 35));
}
F.v9006 = yr3624_IntArg(yr3579_Arg(F.p3645, rt_range(rt_add(F.v9020, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v9002 = yr3624_IntArg(yr3579_Arg(F.p3645, rt_range(rt_add(F.v9020, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr1020_SB();
yr1038_ST(F.p3647);
yr1031_SA(y_str(" { rt_int mi = ", 15));
yr1038_ST(F.v9006);
yr1031_SA(y_str(", mj = ", 7));
yr1038_ST(F.v9002);
yr1031_SA(y_str("; y_move(&", 10));
yr1038_ST(F.v9000);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v9008);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v9004);
yr1031_SA(y_str(", mi, mj, ", 10));
yr1038_ST(yr2411_DescOf(((*(yR104 *)rt_nil_check(F.v9010))).f_elem));
yr1031_SA(y_str("); if (mj >= mi) ", 17));
yr1038_ST(F.v9008);
yr1031_SA(y_str(" += mj - mi + 1; }", 18));
F.p3647 = yr1050_SE();
F.v9020 = rt_range(rt_add(F.v9020, INT64_C(3)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.p3647 = yr3194_Join(F.p3647, yr1055_T(y_str(" })", 3)), INT64_C(0));
(*F.p3647_o) = F.p3647;
(*F.p3648_o) = F.p3648;
return;
}
if ((((F.p3644 == v1399)) || ((F.p3644 == v1402)))) {
yr3586_NArgs(F.p3645, INT64_C(2));
F.v9000 = yr3164_Cond(yr3579_Arg(F.p3645, INT64_C(1)));
F.v9002 = yr3164_Cond(yr3579_Arg(F.p3645, INT64_C(2)));
F.p3648 = v1338;
if ((F.p3644 == v1399)) {
F.p3647 = yr2905_Infix(yr2827_Paren(yr2905_Infix(F.v9000, y_str("!=", 2), yr1055_T(y_str("0", 1)))), y_str("&", 1), yr2827_Paren(yr2905_Infix(F.v9002, y_str("!=", 2), yr1055_T(y_str("0", 1)))));
} else {
F.p3647 = yr2905_Infix(yr2827_Paren(yr2905_Infix(F.v9000, y_str("!=", 2), yr1055_T(y_str("0", 1)))), y_str("|", 1), yr2827_Paren(yr2905_Infix(F.v9002, y_str("!=", 2), yr1055_T(y_str("0", 1)))));
}
(*F.p3647_o) = F.p3647;
(*F.p3648_o) = F.p3648;
return;
}
if ((F.p3644 == v1405)) {
yr3586_NArgs(F.p3645, INT64_C(1));
F.p3647 = yr3593_Call1(y_str("rt_delay", 8), yr3624_IntArg(yr3579_Arg(F.p3645, INT64_C(1))));
(*F.p3647_o) = F.p3647;
(*F.p3648_o) = F.p3648;
return;
}
if ((F.p3644 == v1408)) {
yr3586_NArgs(F.p3645, INT64_C(0));
F.p3648 = yr2890_Unbounded(v1336);
F.p3647 = yr1055_T(y_str("rt_time()", 9));
(*F.p3647_o) = F.p3647;
(*F.p3648_o) = F.p3648;
return;
}
if (((((F.p3644 == v1411)) || ((F.p3644 == v1414))) || ((F.p3644 == v1417)))) {
yr3607_StdVar(yr3579_Arg(F.p3645, INT64_C(1)), v831, &F.v9000, &F.v9010);
if ((F.p3644 == v1411)) {
if ((yr1903_Count(((*(yR99 *)rt_nil_check(F.p3645))).f_a) == INT64_C(1))) {
F.v9002 = yr1055_T(y_str("1", 1));
} else {
yr3586_NArgs(F.p3645, INT64_C(2));
F.v9002 = yr3624_IntArg(yr3579_Arg(F.p3645, INT64_C(2)));
}
F.p3647 = yr2896_Call2(y_str("y_wait", 6), yr3601_Addr(F.v9000), F.v9002);
} else {
yr3586_NArgs(F.p3645, INT64_C(1));
if ((F.p3644 == v1414)) {
F.p3647 = yr3593_Call1(y_str("y_send", 6), yr3601_Addr(F.v9000));
} else {
F.p3648 = v1338;
F.p3647 = yr3593_Call1(y_str("y_awaited", 9), yr3601_Addr(F.v9000));
}
}
(*F.p3647_o) = F.p3647;
(*F.p3648_o) = F.p3648;
return;
}
if (((((F.p3644 == v1420)) || ((F.p3644 == v1423))) || ((F.p3644 == v1426)))) {
yr3586_NArgs(F.p3645, INT64_C(1));
yr3616_NumArg(yr3579_Arg(F.p3645, INT64_C(1)), &F.v9000, &F.v9010);
F.p3648 = yr2890_Unbounded(v1336);
if ((((*(yR104 *)rt_nil_check(F.v9010))).f_kind == v798)) {
F.p3647 = F.v9000;
} else if ((((*(yR104 *)rt_nil_check(F.v9010))).f_kind == v801)) {
yr1020_SB();
if ((F.p3644 == v1420)) {
yr1031_SA(y_str("y_fix_floor(", 12));
} else if ((F.p3644 == v1423)) {
yr1031_SA(y_str("y_fix_ceiling(", 14));
} else {
yr1031_SA(y_str("y_fix_near_integer(", 19));
}
yr1038_ST(F.v9000);
yr1031_SA(y_str(", INT64_C(", 10));
yr1044_SI(((*(yR104 *)rt_nil_check(F.v9010))).f_fsn);
yr1031_SA(y_str("), INT64_C(", 11));
yr1044_SI(((*(yR104 *)rt_nil_check(F.v9010))).f_fsd);
yr1031_SA(y_str("))", 2));
F.p3647 = yr1050_SE();
} else if ((F.p3644 == v1420)) {
F.p3647 = yr3593_Call1(y_str("y_floor", 7), F.v9000);
} else if ((F.p3644 == v1423)) {
F.p3647 = yr3593_Call1(y_str("y_ceiling", 9), F.v9000);
} else {
F.p3647 = yr3593_Call1(y_str("y_near_integer", 14), F.v9000);
}
(*F.p3647_o) = F.p3647;
(*F.p3648_o) = F.p3648;
return;
}
if ((F.p3644 == v1432)) {
yr3586_NArgs(F.p3645, INT64_C(1));
yr3616_NumArg(yr3579_Arg(F.p3645, INT64_C(1)), &F.v9000, &F.v9010);
F.p3648 = v1348;
if ((((*(yR104 *)rt_nil_check(F.v9010))).f_kind == v801)) {
F.p3647 = yr2929_FixToFloat(F.v9000, F.v9010);
} else {
F.p3647 = yr3194_Join(yr1055_T(y_str("((double)(", 10)), F.v9000, yr1055_T(y_str("))", 2)));
}
(*F.p3647_o) = F.p3647;
(*F.p3648_o) = F.p3648;
return;
}
if ((F.p3644 == v1429)) {
yr3586_NArgs(F.p3645, INT64_C(2));
yr3616_NumArg(yr3579_Arg(F.p3645, INT64_C(1)), &F.v9000, &F.v9010);
F.p3648 = yr3636_ManifestScale(yr3579_Arg(F.p3645, INT64_C(2)), F.p3645);
if ((((*(yR104 *)rt_nil_check(F.v9010))).f_kind == v804)) {
yr1020_SB();
yr1031_SA(y_str("y_fix_of_float(", 15));
yr1038_ST(F.v9000);
yr1031_SA(y_str(", INT64_C(", 10));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p3648))).f_fsn);
yr1031_SA(y_str("), INT64_C(", 11));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p3648))).f_fsd);
yr1031_SA(y_str("))", 2));
F.p3647 = yr1050_SE();
} else {
if ((((*(yR104 *)rt_nil_check(F.v9010))).f_kind == v798)) {
F.v9014 = yr2350_CopyRep(v1350);
yr2552_SetScale(F.v9014, INT64_C(1), INT64_C(1));
F.v9000 = yr3194_Join(yr1055_T(y_str("((yfix)(", 8)), F.v9000, yr1055_T(y_str("))", 2)));
} else {
F.v9014 = F.v9010;
}
yr2535_ScaleRatio(F.v9014, F.p3648, &F.v9006, &F.v9008, &F.v9024);
yr1020_SB();
yr1031_SA(y_str("y_fix_near(", 11));
yr1038_ST(F.v9000);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v9006);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v9008);
yr1031_SA(y_str(")", 1));
F.p3647 = yr1050_SE();
}
(*F.p3647_o) = F.p3647;
(*F.p3648_o) = F.p3648;
return;
}
if ((F.p3644 == v1435)) {
yr3586_NArgs(F.p3645, INT64_C(3));
yr3616_NumArg(yr3579_Arg(F.p3645, INT64_C(1)), &F.v9000, &F.v9010);
yr3616_NumArg(yr3579_Arg(F.p3645, INT64_C(2)), &F.v9002, &F.v9012);
if ((((!(((*(yR104 *)rt_nil_check(F.v9010))).f_kind == v801))) || ((!(((*(yR104 *)rt_nil_check(F.v9012))).f_kind == v801))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3645))).f_line, y_str("FIXED_DIV divides fixed-point numbers (XI)", 42));
}
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p3645))).f_line, F.v9010, F.v9012);
F.p3648 = yr3636_ManifestScale(yr3579_Arg(F.p3645, INT64_C(3)), F.p3645);
((*(yR104 *)rt_nil_check(F.p3648))).f_tid = ((*(yR104 *)rt_nil_check(F.v9010))).f_tid;
((*(yR104 *)rt_nil_check(F.p3648))).f_tname = ((*(yR104 *)rt_nil_check(F.v9010))).f_tname;
F.v9014 = yr2350_CopyRep(v1350);
yr2552_SetScale(F.v9014, yr2519_MulChk(((*(yR104 *)rt_nil_check(F.v9012))).f_fsn, ((*(yR104 *)rt_nil_check(F.p3648))).f_fsn, ((*(yR99 *)rt_nil_check(F.p3645))).f_line), yr2519_MulChk(((*(yR104 *)rt_nil_check(F.v9012))).f_fsd, ((*(yR104 *)rt_nil_check(F.p3648))).f_fsd, ((*(yR99 *)rt_nil_check(F.p3645))).f_line));
yr2535_ScaleRatio(F.v9010, F.v9014, &F.v9006, &F.v9008, &F.v9024);
yr1020_SB();
yr1031_SA(y_str("y_fix_div(", 10));
yr1038_ST(F.v9000);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v9002);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v9006);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v9008);
yr1031_SA(y_str(")", 1));
F.p3647 = yr1050_SE();
(*F.p3647_o) = F.p3647;
(*F.p3648_o) = F.p3648;
return;
}
if ((F.p3644 == v1444)) {
v1627 = rt_range(rt_add(v1627, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (((((F.p3644 == v1438)) || ((F.p3644 == v1441))) || ((F.p3644 == v1444)))) {
yr3586_NArgs(F.p3645, INT64_C(1));
yr3607_StdVar(yr3579_Arg(F.p3645, INT64_C(1)), v834, &F.v9000, &F.v9010);
if ((F.p3644 == v1438)) {
F.p3647 = yr3593_Call1(y_str("rt_region_enter", 15), yr3601_Addr(F.v9000));
} else if ((F.p3644 == v1441)) {
F.p3647 = yr3593_Call1(y_str("rt_region_leave", 15), yr3601_Addr(F.v9000));
} else {
F.p3648 = v1338;
F.p3647 = yr3593_Call1(y_str("y_cond_claim", 12), yr3601_Addr(F.v9000));
}
(*F.p3647_o) = F.p3647;
(*F.p3648_o) = F.p3648;
return;
}
if ((F.p3644 == v1447)) {
yr3586_NArgs(F.p3645, INT64_C(0));
F.p3648 = yr2890_Unbounded(v1336);
F.p3647 = yr1055_T(y_str("y_self()", 8));
(*F.p3647_o) = F.p3647;
(*F.p3648_o) = F.p3648;
return;
}
if ((F.p3644 == v1450)) {
yr3586_NArgs(F.p3645, INT64_C(2));
F.p3647 = yr2896_Call2(y_str("y_change_priority", 17), yr3624_IntArg(yr3579_Arg(F.p3645, INT64_C(1))), yr3624_IntArg(yr3579_Arg(F.p3645, INT64_C(2))));
(*F.p3647_o) = F.p3647;
(*F.p3648_o) = F.p3648;
return;
}
if ((F.p3644 == v1453)) {
yr3586_NArgs(F.p3645, INT64_C(1));
F.p3647 = yr3593_Call1(y_str("y_raise_termination", 19), yr3624_IntArg(yr3579_Arg(F.p3645, INT64_C(1))));
(*F.p3647_o) = F.p3647;
(*F.p3648_o) = F.p3648;
return;
}
if ((F.p3644 == v1459)) {
yr3586_NArgs(F.p3645, INT64_C(1));
yr3630_CodeInsert(F.p3645);
(*F.p3647_o) = F.p3647;
(*F.p3648_o) = F.p3648;
return;
}
if ((((F.p3644 == v1462)) || ((F.p3644 == v1465)))) {
yr3586_NArgs(F.p3645, INT64_C(1));
yr2846_Expr(yr3579_Arg(F.p3645, INT64_C(1)), ((void *)0), &F.v9000, &F.v9010);
F.p3648 = yr2890_Unbounded(v1336);
if ((F.p3644 == v1462)) {
F.p3647 = yr3194_Join(yr1055_T(y_str("((rt_int)(intptr_t)&(", 21)), F.v9000, yr1055_T(y_str("))", 2)));
} else {
F.p3647 = yr3194_Join(yr1055_T(y_str("((rt_int)sizeof(", 16)), F.v9000, yr1055_T(y_str("))", 2)));
}
(*F.p3647_o) = F.p3647;
(*F.p3648_o) = F.p3648;
return;
}
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3645))).f_line, ((*(yR99 *)rt_nil_check(F.p3645))).f_name, y_str(" is not translated", 18));
(*F.p3647_o) = F.p3647;
(*F.p3648_o) = F.p3648;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3653_StdRep(yarr a_p3655, void * a_p3656) {
struct yf3657 F;
memset((void *)&F, 0, sizeof F);
F.p3655 = a_p3655;
F.p3656 = a_p3656;
F.v9237 = yr2202_NewSym(v864, yr1075_N(F.p3655));
((*(yR119 *)rt_nil_check(F.v9237))).f_rep = F.p3656;
yr2304_Define(F.v9237, INT64_C(0));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3661_StdOp(yarr a_p3663, rt_int a_p3664) {
struct yf3665 F;
memset((void *)&F, 0, sizeof F);
F.p3663 = a_p3663;
F.p3664 = a_p3664;
F.v9243 = yr2202_NewSym(v885, yr1075_N(F.p3663));
((*(yR119 *)rt_nil_check(F.v9243))).f_mval = F.p3664;
yr2304_Define(F.v9243, INT64_C(0));
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3669_LitList(yarr a_p3671, yarr a_p3672, yarr a_p3673, rt_int a_p3674) {
struct yf3675 F;
memset((void *)&F, 0, sizeof F);
F.p3671 = a_p3671;
F.p3672 = a_p3672;
F.p3673 = a_p3673;
F.p3674 = a_p3674;
F.v9251 = ((void *)0);
F.v9253 = ((void *)0);
F.v9255 = ((void *)0);
F.v9255 = yr1888_NewNode(v663, INT64_C(0));
((*(yR99 *)rt_nil_check(F.v9255))).f_name = yr1075_N(F.p3671);
yr1895_Link(&F.v9251, &F.v9253, F.v9255);
F.v9255 = yr1888_NewNode(v663, INT64_C(0));
((*(yR99 *)rt_nil_check(F.v9255))).f_name = yr1075_N(F.p3672);
yr1895_Link(&F.v9251, &F.v9253, F.v9255);
if (F.p3674) {
F.v9255 = yr1888_NewNode(v663, INT64_C(0));
((*(yR99 *)rt_nil_check(F.v9255))).f_name = yr1075_N(F.p3673);
yr1895_Link(&F.v9251, &F.v9253, F.v9255);
}
{ void * rv9259 = F.v9251;
return rv9259; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3679_Abstract(rt_int a_p3680, yarr a_p3682) {
struct yf3683 F;
memset((void *)&F, 0, sizeof F);
F.p3680 = a_p3680;
F.p3682 = a_p3682;
F.v9264 = yr2343_NewRep(F.p3680, yr1075_N(F.p3682));
((*(yR104 *)rt_nil_check(F.v9264))).f_abstract = 1;
{ void * rv9266 = F.v9264;
return rv9266; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3687_Predefine(void) {
struct yf3688 F;
memset((void *)&F, 0, sizeof F);
yr2209_OpenScope(0);
((void * *)(v1766).p)[y_ix1(v1766, v1267)] = ((void *)0);
v1336 = yr3679_Abstract(v798, y_str("INTEGER", 7));
v1350 = yr3679_Abstract(v801, y_str("FIXED", 5));
v1348 = yr3679_Abstract(v804, y_str("FLOATING", 8));
v1352 = yr2343_NewRep(v831, yr1075_N(y_str("SIGNAL", 6)));
v1354 = yr2343_NewRep(v834, yr1075_N(y_str("SEMAPHORE", 9)));
v1342 = yr2343_NewRep(v846, yr1075_N(y_str("no value", 8)));
v1356 = yr2343_NewRep(v852, yr1075_N(y_str("any", 3)));
v1338 = yr2343_NewRep(v807, yr1075_N(y_str("BOOLEAN", 7)));
((*(yR104 *)rt_nil_check(v1338))).f_lits = yr3669_LitList(y_str("FALSE", 5), y_str("TRUE", 4), y_str("", 0), 0);
((*(yR104 *)rt_nil_check(v1338))).f_nlits = INT64_C(2);
yr2573_SetRange(v1338, INT64_C(0), INT64_C(1));
yr2567_DefineLits(v1338);
v1340 = yr2343_NewRep(v813, yr1075_N(y_str("ASCII", 5)));
((*(yR104 *)rt_nil_check(v1340))).f_ordered = 1;
((*(yR104 *)rt_nil_check(v1340))).f_nlits = INT64_C(128);
yr2573_SetRange(v1340, INT64_C(0), INT64_C(127));
v1820 = yr2343_NewRep(v810, yr1075_N(y_str("OPEN_MODE", 9)));
((*(yR104 *)rt_nil_check(v1820))).f_lits = yr3669_LitList(y_str("READ", 4), y_str("WRITE", 5), y_str("APPEND", 6), 1);
((*(yR104 *)rt_nil_check(v1820))).f_nlits = INT64_C(3);
yr2573_SetRange(v1820, INT64_C(0), INT64_C(2));
yr2567_DefineLits(v1820);
yr3653_StdRep(y_str("INTEGER", 7), v1336);
yr3653_StdRep(y_str("FIXED", 5), v1350);
yr3653_StdRep(y_str("FLOATING", 8), v1348);
yr3653_StdRep(y_str("BOOLEAN", 7), v1338);
yr3653_StdRep(y_str("SIGNAL", 6), v1352);
yr3653_StdRep(y_str("SEMAPHORE", 9), v1354);
yr3653_StdRep(y_str("ASCII", 5), v1340);
yr3653_StdRep(y_str("STANDARD_ALPHABET", 17), v1340);
yr3653_StdRep(y_str("OPEN_MODE", 9), v1820);
yr3661_StdOp(y_str("LOW", 3), v1360);
yr3661_StdOp(y_str("HIGH", 4), v1363);
yr3661_StdOp(y_str("SUCC", 4), v1366);
yr3661_StdOp(y_str("PRED", 4), v1369);
yr3661_StdOp(y_str("FIRST", 5), v1372);
yr3661_StdOp(y_str("LAST", 4), v1375);
yr3661_StdOp(y_str("NEW", 3), v1378);
yr3661_StdOp(y_str("OPEN", 4), v1381);
yr3661_StdOp(y_str("CLOSE", 5), v1384);
yr3661_StdOp(y_str("GET", 3), v1387);
yr3661_StdOp(y_str("PUT", 3), v1390);
yr3661_StdOp(y_str("CHECK_EOF", 9), v1393);
yr3661_StdOp(y_str("MOVE", 4), v1396);
yr3661_StdOp(y_str("AND_LONG", 8), v1399);
yr3661_StdOp(y_str("OR_LONG", 7), v1402);
yr3661_StdOp(y_str("DELAY", 5), v1405);
yr3661_StdOp(y_str("CLOCK_TIME", 10), v1408);
yr3661_StdOp(y_str("WAIT", 4), v1411);
yr3661_StdOp(y_str("SEND", 4), v1414);
yr3661_StdOp(y_str("AWAITED", 7), v1417);
yr3661_StdOp(y_str("FLOOR", 5), v1420);
yr3661_StdOp(y_str("CEILING", 7), v1423);
yr3661_StdOp(y_str("NEAR_INTEGER", 12), v1426);
yr3661_StdOp(y_str("NEAR_FIXED", 10), v1429);
yr3661_StdOp(y_str("NEAR_FLOATING", 13), v1432);
yr3661_StdOp(y_str("FIXED_DIV", 9), v1435);
yr3661_StdOp(y_str("CLAIM", 5), v1438);
yr3661_StdOp(y_str("RELEASE", 7), v1441);
yr3661_StdOp(y_str("CONDITIONAL_CLAIM", 17), v1444);
yr3661_StdOp(y_str("PROCESS_IDENTITY", 16), v1447);
yr3661_StdOp(y_str("CHANGE_PRIORITY", 15), v1450);
yr3661_StdOp(y_str("RAISE_PROCESS_TERMINATION", 25), v1453);
yr3661_StdOp(y_str("FREE_POINTER", 12), v1456);
yr3661_StdOp(y_str("C_CODE_INSERT", 13), v1459);
yr3661_StdOp(y_str("ADDR", 4), v1462);
yr3661_StdOp(y_str("EXTENT", 6), v1465);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3692_Translate(void) {
struct yf3693 F;
memset((void *)&F, 0, sizeof F);
F.v9344 = v1822;
yr2209_OpenScope(0);
((void * *)(v1766).p)[y_ix1(v1766, v1267)] = ((void *)0);
v1273 = INT64_C(0);
((void * *)(v1296).p)[y_ix1(v1296, v1267)] = v1822;
while ((!(F.v9344 == ((void *)0)))) {
if ((((*(yR99 *)rt_nil_check(F.v9344))).f_ival == INT64_C(0))) {
yr3499_CompileModule(F.v9344);
}
F.v9344 = ((*(yR99 *)rt_nil_check(F.v9344))).f_next;
}
yr3462_ResolveLater(v1267);
yr3378_RunDeferred(INT64_C(0), INT64_C(0));
yr3290_CheckEffects();
yr3523_AwaitProcesses();
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3697_WriteProgram(void) {
struct yf3698 F;
memset((void *)&F, 0, sizeof F);
yr1111_PutS(&v984, y_str("static void y_elaborate(void) {", 31));
yr1119_Append(&v984, &v990);
yr1111_PutS(&v984, y_str("}", 1));
yr1111_PutS(&v984, y_str("int main(int argc, char **argv) {", 33));
yr1111_PutS(&v984, y_str("y_lang();", 9));
yr1111_PutS(&v984, y_str("rt_init(argc, argv);", 20));
yr1111_PutS(&v984, y_str("y_elaborate();", 14));
yr1111_PutS(&v984, y_str("rt_main_done();", 15));
yr1111_PutS(&v984, y_str("return 0;", 9));
yr1111_PutS(&v984, y_str("}", 1));
yr1145_WriteBuf(v986);
yr1139_WriteTxt(yr1055_T(y_str("#include \"paleo.h\"", 18)));
({ unsigned char pv = 10; y_put(&v905, &pv, sizeof pv); });
yr1139_WriteTxt(yr1055_T(y_str("#include <math.h>", 17)));
({ unsigned char pv = 10; y_put(&v905, &pv, sizeof pv); });
yr1139_WriteTxt(yr1055_T(y_str("#include <string.h>", 19)));
({ unsigned char pv = 10; y_put(&v905, &pv, sizeof pv); });
yr1139_WriteTxt(yr1055_T(y_str("#include <stdlib.h>", 19)));
({ unsigned char pv = 10; y_put(&v905, &pv, sizeof pv); });
yr1145_WriteBuf(v972);
yr1145_WriteBuf(v974);
yr1145_WriteBuf(v976);
yr1145_WriteBuf(v978);
yr1145_WriteBuf(v980);
yr1145_WriteBuf(v982);
yr1145_WriteBuf(v984);
return;
rt_raise(Y_X_NO_RETURN);
}
static void y_elaborate(void) {
{ static const size_t o[] = {offsetof(yR99, f_kind), offsetof(yR99, f_line), offsetof(yR99, f_ival), offsetof(yR99, f_flag), offsetof(yR99, f_name), offsetof(yR99, f_text), offsetof(yR99, f_a), offsetof(yR99, f_b), offsetof(yR99, f_c), offsetof(yR99, f_d), offsetof(yR99, f_e), offsetof(yR99, f_next), offsetof(yR99, f_rep), offsetof(yR99, f_sym), 0}; const ydesc **f = rt_alloc(15 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_int; f[2] = &y_d_int; f[3] = &y_d_int; f[4] = &y_d_int; f[5] = &y_d_int; f[6] = &y_d_ptr; f[7] = &y_d_ptr; f[8] = &y_d_ptr; f[9] = &y_d_ptr; f[10] = &y_d_ptr; f[11] = &y_d_ptr; f[12] = &y_d_ptr; f[13] = &y_d_ptr; y_desc_record(&yd_100, sizeof(yR99), 14, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR104, f_kind), offsetof(yR104, f_tid), offsetof(yR104, f_tname), offsetof(yR104, f_lo), offsetof(yR104, f_hi), offsetof(yR104, f_mlo), offsetof(yR104, f_mhi), offsetof(yR104, f_hasm), offsetof(yR104, f_scale), offsetof(yR104, f_prec), offsetof(yR104, f_elem), offsetof(yR104, f_idx), offsetof(yR104, f_nidx), offsetof(yR104, f_link), offsetof(yR104, f_lits), offsetof(yR104, f_nlits), offsetof(yR104, f_fields), offsetof(yR104, f_selector), offsetof(yR104, f_cname), offsetof(yR104, f_dname), offsetof(yR104, f_dlevel), offsetof(yR104, f_deep), offsetof(yR104, f_abstract), offsetof(yR104, f_opaque), offsetof(yR104, f_opaqueops), offsetof(yR104, f_ordered), offsetof(yR104, f_forward), offsetof(yR104, f_fwdscope), offsetof(yR104, f_monitor), offsetof(yR104, f_serial), offsetof(yR104, f_sig), offsetof(yR104, f_fsn), offsetof(yR104, f_fsd), 0}; const ydesc **f = rt_alloc(34 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_int; f[2] = &y_d_int; f[3] = &y_d_int; f[4] = &y_d_int; f[5] = &y_d_int; f[6] = &y_d_int; f[7] = &y_d_int; f[8] = &y_d_int; f[9] = &y_d_int; f[10] = &y_d_ptr; f[11] = &y_d_ptr; f[12] = &y_d_int; f[13] = &y_d_ptr; f[14] = &y_d_ptr; f[15] = &y_d_int; f[16] = &y_d_ptr; f[17] = &y_d_ptr; f[18] = &y_d_int; f[19] = &y_d_int; f[20] = &y_d_int; f[21] = &y_d_int; f[22] = &y_d_int; f[23] = &y_d_int; f[24] = &y_d_int; f[25] = &y_d_int; f[26] = &y_d_int; f[27] = &y_d_int; f[28] = &y_d_ptr; f[29] = &y_d_int; f[30] = &y_d_int; f[31] = &y_d_int; f[32] = &y_d_int; y_desc_record(&yd_105, sizeof(yR104), 33, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR109, f_name), offsetof(yR109, f_rep), offsetof(yR109, f_isconst), offsetof(yR109, f_variant), offsetof(yR109, f_labels), offsetof(yR109, f_next), 0}; const ydesc **f = rt_alloc(7 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_ptr; f[2] = &y_d_int; f[3] = &y_d_int; f[4] = &y_d_ptr; f[5] = &y_d_ptr; y_desc_record(&yd_110, sizeof(yR109), 6, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR114, f_name), offsetof(yR114, f_cls), offsetof(yR114, f_rep), offsetof(yR114, f_cname), offsetof(yR114, f_next), 0}; const ydesc **f = rt_alloc(6 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_int; f[2] = &y_d_ptr; f[3] = &y_d_int; f[4] = &y_d_ptr; y_desc_record(&yd_115, sizeof(yR114), 5, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR119, f_kind), offsetof(yR119, f_name), offsetof(yR119, f_rep), offsetof(yR119, f_cname), offsetof(yR119, f_level), offsetof(yR119, f_byref), offsetof(yR119, f_readonly), offsetof(yR119, f_mval), offsetof(yR119, f_hasmv), offsetof(yR119, f_params), offsetof(yR119, f_nparams), offsetof(yR119, f_ret), offsetof(yR119, f_func), offsetof(yR119, f_decl), offsetof(yR119, f_depth), offsetof(yR119, f_target), offsetof(yR119, f_members), offsetof(yR119, f_mnext), offsetof(yR119, f_chain), offsetof(yR119, f_stack), offsetof(yR119, f_alt), offsetof(yR119, f_monitor), offsetof(yR119, f_serial), offsetof(yR119, f_calls), offsetof(yR119, f_writes), offsetof(yR119, f_frees), offsetof(yR119, f_seen), offsetof(yR119, f_vix), 0}; const ydesc **f = rt_alloc(29 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_int; f[2] = &y_d_ptr; f[3] = &y_d_int; f[4] = &y_d_int; f[5] = &y_d_int; f[6] = &y_d_int; f[7] = &y_d_int; f[8] = &y_d_int; f[9] = &y_d_ptr; f[10] = &y_d_int; f[11] = &y_d_ptr; f[12] = &y_d_int; f[13] = &y_d_ptr; f[14] = &y_d_int; f[15] = &y_d_ptr; f[16] = &y_d_ptr; f[17] = &y_d_ptr; f[18] = &y_d_ptr; f[19] = &y_d_ptr; f[20] = &y_d_ptr; f[21] = &y_d_ptr; f[22] = &y_d_int; f[23] = &y_d_ptr; f[24] = &y_d_ptr; f[25] = &y_d_ptr; f[26] = &y_d_int; f[27] = &y_d_int; y_desc_record(&yd_120, sizeof(yR119), 28, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR124, f_syms), offsetof(yR124, f_closed), offsetof(yR124, f_module), offsetof(yR124, f_level), offsetof(yR124, f_deferred), offsetof(yR124, f_up), 0}; const ydesc **f = rt_alloc(7 * sizeof *f); f[0] = &y_d_ptr; f[1] = &y_d_int; f[2] = &y_d_ptr; f[3] = &y_d_int; f[4] = &y_d_ptr; f[5] = &y_d_ptr; y_desc_record(&yd_125, sizeof(yR124), 6, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR129, f_t), offsetof(yR129, f_next), 0}; const ydesc **f = rt_alloc(3 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_ptr; y_desc_record(&yd_130, sizeof(yR129), 2, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR134, f_head), offsetof(yR134, f_tail), 0}; const ydesc **f = rt_alloc(3 * sizeof *f); f[0] = &y_d_ptr; f[1] = &y_d_ptr; y_desc_record(&yd_135, sizeof(yR134), 2, o, (const ydesc *const *)f); }
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(64000000)}; y_desc_array(&yd_145, 1, lo, hi, &y_d_byte); }
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4000000)}; y_desc_array(&yd_155, 1, lo, hi, &y_d_int); }
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(2000000)}; y_desc_array(&yd_165, 1, lo, hi, &y_d_int); }
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(262143)}; y_desc_array(&yd_175, 1, lo, hi, &y_d_int); }
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(8191)}; y_desc_array(&yd_185, 1, lo, hi, &y_d_ptr); }
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(64)}; y_desc_array(&yd_195, 1, lo, hi, &y_d_ptr); }
v198 = INT64_C(0);
v201 = INT64_C(1);
v204 = INT64_C(2);
v207 = INT64_C(3);
v210 = INT64_C(4);
v213 = INT64_C(5);
v216 = INT64_C(6);
v219 = INT64_C(7);
v222 = INT64_C(8);
v225 = INT64_C(1);
v228 = INT64_C(2);
v231 = INT64_C(3);
v234 = INT64_C(4);
v237 = INT64_C(5);
v240 = INT64_C(6);
v243 = INT64_C(7);
v246 = INT64_C(8);
v249 = INT64_C(9);
v252 = INT64_C(10);
v255 = INT64_C(11);
v258 = INT64_C(12);
v261 = INT64_C(13);
v264 = INT64_C(14);
v267 = INT64_C(15);
v270 = INT64_C(16);
v273 = INT64_C(17);
v276 = INT64_C(18);
v279 = INT64_C(19);
v282 = INT64_C(20);
v285 = INT64_C(21);
v288 = INT64_C(22);
v291 = INT64_C(23);
v294 = INT64_C(24);
v297 = INT64_C(25);
v300 = INT64_C(26);
v303 = INT64_C(27);
v306 = INT64_C(28);
v309 = INT64_C(29);
v312 = INT64_C(30);
v315 = INT64_C(31);
v318 = INT64_C(32);
v321 = INT64_C(33);
v324 = INT64_C(34);
v327 = INT64_C(35);
v330 = INT64_C(36);
v333 = INT64_C(37);
v336 = INT64_C(38);
v339 = INT64_C(39);
v342 = INT64_C(40);
v345 = INT64_C(41);
v348 = INT64_C(42);
v351 = INT64_C(43);
v354 = INT64_C(44);
v357 = INT64_C(45);
v360 = INT64_C(46);
v363 = INT64_C(47);
v366 = INT64_C(48);
v369 = INT64_C(49);
v372 = INT64_C(50);
v375 = INT64_C(51);
v378 = INT64_C(52);
v381 = INT64_C(53);
v384 = INT64_C(54);
v387 = INT64_C(55);
v390 = INT64_C(56);
v393 = INT64_C(57);
v396 = INT64_C(58);
v399 = INT64_C(59);
v402 = INT64_C(60);
v405 = INT64_C(61);
v408 = INT64_C(62);
v411 = INT64_C(63);
v414 = INT64_C(64);
v417 = INT64_C(65);
v420 = INT64_C(66);
v423 = INT64_C(67);
v426 = INT64_C(68);
v429 = INT64_C(69);
v432 = INT64_C(70);
v435 = INT64_C(71);
v438 = INT64_C(72);
v441 = INT64_C(73);
v444 = INT64_C(74);
v447 = INT64_C(75);
v450 = INT64_C(76);
v453 = INT64_C(77);
v456 = INT64_C(78);
v459 = INT64_C(79);
v462 = INT64_C(80);
v465 = INT64_C(81);
v468 = INT64_C(82);
v471 = INT64_C(83);
v474 = INT64_C(84);
v477 = INT64_C(85);
v480 = INT64_C(86);
v483 = INT64_C(87);
v486 = INT64_C(87);
v489 = INT64_C(88);
v492 = INT64_C(89);
v495 = INT64_C(90);
v498 = INT64_C(91);
v501 = INT64_C(92);
v504 = INT64_C(93);
v507 = INT64_C(94);
v510 = INT64_C(95);
v513 = INT64_C(96);
v516 = INT64_C(97);
v519 = INT64_C(98);
v522 = INT64_C(99);
v525 = INT64_C(100);
v528 = INT64_C(101);
v531 = INT64_C(102);
v534 = INT64_C(103);
v537 = INT64_C(104);
v540 = INT64_C(105);
v543 = INT64_C(106);
v546 = INT64_C(107);
v549 = INT64_C(108);
v552 = INT64_C(109);
v555 = INT64_C(110);
v558 = INT64_C(111);
v561 = INT64_C(112);
v564 = INT64_C(113);
v567 = INT64_C(114);
v570 = INT64_C(115);
v573 = INT64_C(116);
v576 = INT64_C(117);
v579 = INT64_C(118);
v582 = INT64_C(119);
v585 = INT64_C(120);
v588 = INT64_C(121);
v591 = INT64_C(122);
v594 = INT64_C(123);
v597 = INT64_C(124);
v600 = INT64_C(125);
v603 = INT64_C(126);
v606 = INT64_C(127);
v609 = INT64_C(128);
v612 = INT64_C(129);
v615 = INT64_C(129);
v618 = INT64_C(1);
v621 = INT64_C(2);
v624 = INT64_C(3);
v627 = INT64_C(4);
v630 = INT64_C(5);
v633 = INT64_C(6);
v636 = INT64_C(7);
v639 = INT64_C(8);
v642 = INT64_C(9);
v645 = INT64_C(10);
v648 = INT64_C(11);
v651 = INT64_C(12);
v654 = INT64_C(13);
v657 = INT64_C(14);
v660 = INT64_C(15);
v663 = INT64_C(16);
v666 = INT64_C(20);
v669 = INT64_C(21);
v672 = INT64_C(22);
v675 = INT64_C(23);
v678 = INT64_C(24);
v681 = INT64_C(25);
v684 = INT64_C(26);
v687 = INT64_C(27);
v690 = INT64_C(28);
v693 = INT64_C(29);
v696 = INT64_C(30);
v699 = INT64_C(31);
v702 = INT64_C(32);
v705 = INT64_C(33);
v708 = INT64_C(40);
v711 = INT64_C(41);
v714 = INT64_C(42);
v717 = INT64_C(43);
v720 = INT64_C(44);
v723 = INT64_C(45);
v726 = INT64_C(46);
v729 = INT64_C(47);
v732 = INT64_C(48);
v735 = INT64_C(49);
v738 = INT64_C(50);
v741 = INT64_C(51);
v744 = INT64_C(52);
v747 = INT64_C(53);
v750 = INT64_C(54);
v753 = INT64_C(60);
v756 = INT64_C(61);
v759 = INT64_C(62);
v762 = INT64_C(63);
v765 = INT64_C(64);
v768 = INT64_C(65);
v771 = INT64_C(66);
v774 = INT64_C(67);
v777 = INT64_C(68);
v780 = INT64_C(69);
v783 = INT64_C(70);
v786 = INT64_C(71);
v789 = INT64_C(72);
v792 = INT64_C(73);
v795 = INT64_C(74);
v798 = INT64_C(1);
v801 = INT64_C(2);
v804 = INT64_C(3);
v807 = INT64_C(4);
v810 = INT64_C(5);
v813 = INT64_C(6);
v816 = INT64_C(7);
v819 = INT64_C(8);
v822 = INT64_C(9);
v825 = INT64_C(10);
v828 = INT64_C(11);
v831 = INT64_C(12);
v834 = INT64_C(13);
v837 = INT64_C(14);
v840 = INT64_C(15);
v843 = INT64_C(16);
v846 = INT64_C(17);
v849 = INT64_C(18);
v852 = INT64_C(19);
v855 = INT64_C(1);
v858 = INT64_C(2);
v861 = INT64_C(3);
v864 = INT64_C(4);
v867 = INT64_C(5);
v870 = INT64_C(6);
v873 = INT64_C(7);
v876 = INT64_C(8);
v879 = INT64_C(9);
v882 = INT64_C(10);
v885 = INT64_C(11);
v888 = INT64_C(12);
v891 = INT64_C(1);
v894 = INT64_C(2);
v897 = INT64_C(3);
v900 = INT64_C(9223372036854775807);
y_init(&yd_145, &v907);
v909 = INT64_C(0);
y_init(&yd_155, &v912);
y_init(&yd_155, &v914);
v916 = INT64_C(0);
y_init(&yd_175, &v919);
v921 = 0;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4000000)}; y_desc_array(&yd_931, 1, lo, hi, &y_d_byte); }
y_init(&yd_931, &v933);
v935 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4000)}; y_desc_array(&yd_945, 1, lo, hi, &y_d_int); }
y_init(&yd_945, &v947);
v949 = INT64_C(0);
v952 = INT64_C(0);
{ rt_int lo[1] = {0}, hi[1] = {127}; y_desc_array(&yd_957, 1, lo, hi, &y_d_int); }
y_init(&yd_957, &v959);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(127)}; y_desc_array(&yd_968, 1, lo, hi, &y_d_byte); }
y_init(&yd_968, &v970);
v994 = INT64_C(0);
y_init(&yd_165, &v1201);
y_init(&yd_165, &v1203);
y_init(&yd_165, &v1205);
v1207 = INT64_C(0);
v1210 = INT64_C(0);
v1213 = INT64_C(0);
v1216 = INT64_C(0);
v1219 = INT64_C(1);
v1222 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(200000)}; y_desc_array(&yd_1232, 1, lo, hi, &y_d_int); }
y_init(&yd_1232, &v1234);
y_init(&yd_1232, &v1236);
y_init(&yd_1232, &v1238);
v1240 = INT64_C(0);
v1243 = INT64_C(1);
v1246 = ((void *)0);
v1248 = INT64_C(0);
v1251 = INT64_C(0);
y_init(&yd_185, &v1254);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1263, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1263, &v1265);
v1267 = INT64_C(-1);
v1270 = INT64_C(0);
v1273 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1283, 1, lo, hi, &y_d_int); }
y_init(&yd_1283, &v1285);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1294, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1294, &v1296);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1305, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1305, &v1307);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1316, 1, lo, hi, &y_d_int); }
y_init(&yd_1316, &v1318);
y_init(&yd_1316, &v1320);
v1322 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(200000)}; y_desc_array(&yd_1332, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1332, &v1334);
v1358 = ((void *)0);
v1360 = INT64_C(1);
v1363 = INT64_C(2);
v1366 = INT64_C(3);
v1369 = INT64_C(4);
v1372 = INT64_C(5);
v1375 = INT64_C(6);
v1378 = INT64_C(7);
v1381 = INT64_C(8);
v1384 = INT64_C(9);
v1387 = INT64_C(10);
v1390 = INT64_C(11);
v1393 = INT64_C(12);
v1396 = INT64_C(13);
v1399 = INT64_C(14);
v1402 = INT64_C(15);
v1405 = INT64_C(16);
v1408 = INT64_C(17);
v1411 = INT64_C(18);
v1414 = INT64_C(19);
v1417 = INT64_C(20);
v1420 = INT64_C(21);
v1423 = INT64_C(22);
v1426 = INT64_C(23);
v1429 = INT64_C(24);
v1432 = INT64_C(25);
v1435 = INT64_C(26);
v1438 = INT64_C(27);
v1441 = INT64_C(28);
v1444 = INT64_C(29);
v1447 = INT64_C(30);
v1450 = INT64_C(31);
v1453 = INT64_C(32);
v1456 = INT64_C(33);
v1459 = INT64_C(34);
v1462 = INT64_C(35);
v1465 = INT64_C(36);
v1468 = INT64_C(0);
v1471 = ((void *)0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1480, 1, lo, hi, &y_d_int); }
y_init(&yd_1480, &v1482);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1491, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1491, &v1493);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1502, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1502, &v1504);
v1506 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1516, 1, lo, hi, &y_d_int); }
y_init(&yd_1516, &v1518);
v1520 = INT64_C(0);
v1523 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1533, 1, lo, hi, &y_d_int); }
y_init(&yd_1533, &v1535);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1544, 1, lo, hi, &y_d_int); }
y_init(&yd_1544, &v1546);
v1548 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1558, 1, lo, hi, &y_d_int); }
y_init(&yd_1558, &v1560);
v1562 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1572, 1, lo, hi, &y_d_int); }
y_init(&yd_1572, &v1574);
y_init(&yd_1572, &v1576);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1585, 1, lo, hi, &y_d_int); }
y_init(&yd_1585, &v1587);
v1589 = INT64_C(0);
v1592 = INT64_C(0);
v1595 = ((void *)0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1604, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1604, &v1606);
y_init(&yd_1604, &v1608);
v1610 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1620, 1, lo, hi, &y_d_int); }
y_init(&yd_1620, &v1622);
v1624 = 0;
v1627 = INT64_C(0);
v1630 = ((void *)0);
v1632 = ((void *)0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1641, 1, lo, hi, &y_d_int); }
y_init(&yd_1641, &v1643);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1652, 1, lo, hi, &y_d_int); }
y_init(&yd_1652, &v1654);
v1656 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1666, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1666, &v1668);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1677, 1, lo, hi, &y_d_int); }
y_init(&yd_1677, &v1679);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1688, 1, lo, hi, &y_d_int); }
y_init(&yd_1688, &v1690);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1699, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1699, &v1701);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1710, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1710, &v1712);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1721, 1, lo, hi, &y_d_int); }
y_init(&yd_1721, &v1723);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1732, 1, lo, hi, &y_d_int); }
y_init(&yd_1732, &v1734);
y_init(&yd_1732, &v1736);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(100000)}; y_desc_array(&yd_1745, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1745, &v1747);
v1749 = INT64_C(0);
v1752 = INT64_C(0);
v1755 = ((void *)0);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1764, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1764, &v1766);
v1768 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(10000)}; y_desc_array(&yd_1778, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1778, &v1780);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(10000)}; y_desc_array(&yd_1789, 1, lo, hi, &y_d_int); }
y_init(&yd_1789, &v1791);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(10000)}; y_desc_array(&yd_1800, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1800, &v1802);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(10000)}; y_desc_array(&yd_1811, 1, lo, hi, &y_d_int); }
y_init(&yd_1811, &v1813);
y_init(&yd_1811, &v1815);
v1817 = INT64_C(0);
/* yellowc */
yr997_InitChars();
yr1824_InitWords();
v1248 = yr1075_N(y_str("FROM", 4));
v1251 = yr1075_N(y_str("DIMENSION", 9));
v1468 = yr1055_T(y_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP DEL SQ DQ ", 128));
y_open(&v905, y_str("OUTPUT", 6), 1);
y_open(&v988, y_str("ERROR", 5), 1);
yr1829_ReadSource();
yr1883_Lex();
v1822 = yr2197_ParseProgram();
yr3687_Predefine();
yr3692_Translate();
yr3697_WriteProgram();
y_close(&v905);
}
int main(int argc, char **argv) {
y_lang();
rt_init(argc, argv);
y_elaborate();
rt_main_done();
return 0;
}
