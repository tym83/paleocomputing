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
struct yf2253;
struct yf2260;
struct yf2267;
struct yf2274;
struct yf2280;
struct yf2286;
struct yf2293;
struct yf2300;
struct yf2307;
struct yf2313;
struct yf2320;
struct yf2326;
struct yf2332;
struct yf2339;
struct yf2345;
struct yf2351;
struct yf2357;
struct yf2363;
struct yf2369;
struct yf2375;
struct yf2382;
struct yf2388;
struct yf2394;
struct yf2400;
struct yf2406;
struct yf2412;
struct yf2419;
struct yf2427;
struct yf2435;
struct yf2442;
struct yf2448;
struct yf2454;
struct yf2461;
struct yf2467;
struct yf2475;
struct yf2481;
struct yf2487;
struct yf2495;
struct yf2501;
struct yf2508;
struct yf2516;
struct yf2524;
struct yf2534;
struct yf2541;
struct yf2549;
struct yf2556;
struct yf2562;
struct yf2570;
struct yf2576;
struct yf2584;
struct yf2591;
struct yf2599;
struct yf2606;
struct yf2611;
struct yf2617;
struct yf2630;
struct yf2641;
struct yf2649;
struct yf2656;
struct yf2663;
struct yf2670;
struct yf2678;
struct yf2687;
struct yf2695;
struct yf2703;
struct yf2710;
struct yf2718;
struct yf2726;
struct yf2734;
struct yf2745;
struct yf2753;
struct yf2762;
struct yf2768;
struct yf2776;
struct yf2786;
struct yf2796;
struct yf2802;
struct yf2808;
struct yf2816;
struct yf2822;
struct yf2829;
struct yf2835;
struct yf2844;
struct yf2852;
struct yf2861;
struct yf2869;
struct yf2879;
struct yf2885;
struct yf2894;
struct yf2903;
struct yf2912;
struct yf2918;
struct yf2925;
struct yf2934;
struct yf2941;
struct yf2949;
struct yf2955;
struct yf2964;
struct yf2972;
struct yf2979;
struct yf2988;
struct yf2994;
struct yf3005;
struct yf3012;
struct yf3022;
struct yf3032;
struct yf3042;
struct yf3051;
struct yf3059;
struct yf3067;
struct yf3077;
struct yf3083;
struct yf3088;
struct yf3094;
struct yf3100;
struct yf3107;
struct yf3115;
struct yf3122;
struct yf3128;
struct yf3134;
struct yf3140;
struct yf3147;
struct yf3153;
struct yf3159;
struct yf3166;
struct yf3171;
struct yf3177;
struct yf3183;
struct yf3191;
struct yf3197;
struct yf3203;
struct yf3209;
struct yf3215;
struct yf3221;
struct yf3230;
struct yf3238;
struct yf3244;
struct yf3250;
struct yf3257;
struct yf3264;
struct yf3271;
struct yf3279;
struct yf3284;
struct yf3292;
struct yf3298;
struct yf3304;
struct yf3310;
struct yf3317;
struct yf3324;
struct yf3330;
struct yf3338;
struct yf3344;
struct yf3351;
struct yf3358;
struct yf3367;
struct yf3374;
struct yf3380;
struct yf3386;
struct yf3392;
struct yf3399;
struct yf3407;
struct yf3414;
struct yf3422;
struct yf3428;
struct yf3437;
struct yf3444;
struct yf3451;
struct yf3457;
struct yf3465;
struct yf3473;
struct yf3480;
struct yf3486;
struct yf3492;
struct yf3498;
struct yf3504;
struct yf3509;
struct yf3516;
struct yf3522;
struct yf3528;
struct yf3533;
struct yf3539;
struct yf3546;
struct yf3553;
struct yf3560;
struct yf3567;
struct yf3574;
struct yf3582;
struct yf3588;
struct yf3597;
struct yf3605;
struct yf3611;
struct yf3617;
struct yf3624;
struct yf3634;
struct yf3642;
struct yf3650;
struct yf3660;
struct yf3668;
struct yf3673;
struct yf3678;
struct yf3683;
struct yf7835;
struct yf7842;
struct yf7848;
struct yR99 { rt_int f_kind; rt_int f_line; rt_int f_ival; rt_int f_flag; rt_int f_name; rt_int f_text; void * f_a; void * f_b; void * f_c; void * f_d; void * f_e; void * f_next; void * f_rep; void * f_sym; };
struct yR104 { rt_int f_kind; rt_int f_tid; rt_int f_tname; rt_int f_lo; rt_int f_hi; rt_int f_mlo; rt_int f_mhi; rt_int f_hasm; rt_int f_scale; rt_int f_prec; void * f_elem; void * f_idx; rt_int f_nidx; void * f_link; void * f_lits; rt_int f_nlits; void * f_fields; void * f_selector; rt_int f_cname; rt_int f_dname; rt_int f_dlevel; rt_int f_deep; rt_int f_abstract; rt_int f_opaque; rt_int f_opaqueops; rt_int f_ordered; rt_int f_forward; rt_int f_fwdscope; void * f_monitor; rt_int f_serial; rt_int f_sig; rt_int f_fsn; rt_int f_fsd; };
struct yR109 { rt_int f_name; void * f_rep; rt_int f_isconst; rt_int f_variant; void * f_labels; void * f_next; };
struct yR114 { rt_int f_name; rt_int f_cls; void * f_rep; rt_int f_cname; void * f_next; };
struct yR119 { rt_int f_kind; rt_int f_name; void * f_rep; rt_int f_cname; rt_int f_level; rt_int f_byref; rt_int f_readonly; rt_int f_mval; rt_int f_hasmv; void * f_params; rt_int f_nparams; void * f_ret; rt_int f_func; void * f_decl; rt_int f_depth; void * f_target; void * f_members; void * f_mnext; void * f_chain; void * f_stack; void * f_alt; void * f_monitor; rt_int f_serial; void * f_calls; void * f_writes; void * f_frees; rt_int f_seen; rt_int f_vix; };
struct yR124 { void * f_syms; rt_int f_closed; void * f_module; rt_int f_level; void * f_deferred; void * f_up; };
struct yR129 { rt_int f_t; void * f_next; };
struct yR134 { void * f_head; void * f_tail; };
struct yf998 { void *up;
rt_int v3688;
rt_int c_3691;
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
rt_int lo3727;
rt_int hi3728;
rt_int c_3730;
};
struct yf1040 { void *up;
rt_int p1039;
rt_int v3736;
};
struct yf1046 { void *up;
rt_int p1045;
ydesc yd_3751;
yarr v3753;
rt_int v3755;
rt_int v3758;
};
struct yf1051 { void *up;
rt_int v3777;
rt_int lo3788;
rt_int hi3789;
rt_int c_3791;
};
struct yf1058 { void *up;
yarr p1057;
};
struct yf1065 { void *up;
rt_int p1063;
rt_int p1064;
rt_int v3802;
rt_int v3805;
rt_int v3807;
rt_int lo3812;
rt_int hi3813;
rt_int c_3815;
rt_int lo3834;
rt_int hi3835;
rt_int c_3837;
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
rt_int lo3866;
rt_int hi3867;
rt_int c_3869;
};
struct yf1093 { void *up;
rt_int p1090;
yarr p1092;
rt_int v3882;
rt_int lo3898;
rt_int hi3899;
rt_int c_3901;
};
struct yf1100 { void *up;
rt_int p1098;
rt_int p1099;
};
struct yf1107 { void *up;
yR134 * p1105;
rt_int p1106;
void * v3922;
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
rt_int v3936;
};
struct yf1147 { void *up;
yR134 p1146;
void * v3943;
};
struct yf1154 { void *up;
rt_int p1152;
rt_int p1153;
rt_int v3949;
};
struct yf1161 { void *up;
rt_int p1159;
rt_int p1160;
rt_int v3959;
};
struct yf1168 { void *up;
yfile * * p1166;
rt_int p1167;
rt_int v3969;
};
struct yf1176 { void *up;
rt_int p1173;
yarr p1175;
};
struct yf1185 { void *up;
rt_int p1181;
rt_int p1182;
yarr p1184;
rt_int v3981;
};
struct yf1190 { void *up;
};
struct yf1197 { void *up;
yarr p1196;
rt_int v3989;
};
struct yf1825 { void *up;
rt_int v3993;
rt_int v3995;
rt_int v3997;
rt_int lo4014;
rt_int hi4015;
rt_int c_4017;
};
struct yf1830 { void *up;
unsigned char v4026;
};
struct yf1837 { void *up;
rt_int p1835;
rt_int p1836;
};
struct yf1843 { void *up;
rt_int p1842;
};
struct yf1848 { void *up;
rt_int v4043;
rt_int v4045;
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
rt_int v4075;
};
struct yf1874 { void *up;
rt_int p1873;
rt_int v4085;
rt_int v4088;
rt_int v4090;
rt_int v4092;
rt_int v4094;
rt_int v4096;
rt_int v4099;
rt_int v4102;
rt_int v4105;
rt_int v4108;
rt_int v4111;
rt_int v4114;
rt_int v4117;
rt_int lo4155;
rt_int hi4156;
rt_int c_4158;
rt_int lo4187;
rt_int hi4188;
rt_int c_4190;
rt_int lo4197;
rt_int hi4198;
rt_int c_4200;
};
struct yf1879 { void *up;
rt_int v4211;
rt_int v4213;
rt_int v4215;
rt_int v4217;
};
struct yf1884 { void *up;
unsigned char v4246;
rt_int v4248;
rt_int v4250;
rt_int v4252;
rt_int v4254;
rt_int v4256;
rt_int v4258;
rt_int v4260;
rt_int lo4335;
rt_int hi4336;
rt_int c_4338;
};
struct yf1891 { void *up;
rt_int p1889;
rt_int p1890;
void * v4354;
};
struct yf1899 { void *up;
void * * p1896;
void * * p1897;
void * p1898;
};
struct yf1905 { void *up;
void * p1904;
rt_int v4367;
void * v4370;
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
rt_int v4384;
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
rt_int v4407;
};
struct yf1961 { void *up;
rt_int p1960;
rt_int v4417;
};
struct yf1966 { void *up;
rt_int v4422;
};
struct yf1973 { void *up;
rt_int p1971;
rt_int p1972;
rt_int v4429;
};
struct yf1978 { void *up;
rt_int v4433;
};
struct yf1984 { void *up;
rt_int p1983;
void * v4443;
};
struct yf1989 { void *up;
void * v4450;
};
struct yf1994 { void *up;
void * v4455;
void * v4457;
void * v4459;
void * v4461;
rt_int v4463;
};
struct yf1999 { void *up;
rt_int v4472;
};
struct yf2004 { void *up;
void * v4478;
void * v4480;
void * v4482;
void * v4484;
};
struct yf2009 { void *up;
void * v4489;
void * v4491;
void * v4493;
void * v4495;
void * v4497;
};
struct yf2014 { void *up;
void * v4505;
void * v4507;
void * v4509;
};
struct yf2020 { void *up;
rt_int p2019;
void * v4515;
};
struct yf2026 { void *up;
rt_int p2025;
};
struct yf2033 { void *up;
void * * p2031;
void * * p2032;
rt_int v4536;
void * v4538;
void * v4540;
void * v4542;
};
struct yf2038 { void *up;
void * v4546;
void * v4548;
void * v4550;
rt_int v4552;
rt_int v4554;
rt_int v4556;
};
struct yf2044 { void *up;
void * p2043;
void * v4572;
void * v4574;
rt_int v4576;
};
struct yf2049 { void *up;
void * v4582;
};
struct yf2055 { void *up;
rt_int p2054;
rt_int v4594;
};
struct yf2060 { void *up;
rt_int v4602;
void * v4604;
};
struct yf2065 { void *up;
void * v4613;
void * v4615;
};
struct yf2070 { void *up;
void * v4619;
void * v4621;
void * v4623;
};
struct yf2075 { void *up;
void * v4628;
void * v4630;
void * v4632;
rt_int v4634;
};
struct yf2080 { void *up;
void * v4641;
void * v4643;
void * v4645;
void * v4647;
void * v4649;
void * v4651;
rt_int v4653;
rt_int v4655;
};
struct yf2085 { void *up;
void * v4672;
};
struct yf2090 { void *up;
rt_int v4677;
};
struct yf2096 { void *up;
rt_int p2095;
void * v4686;
void * v4688;
void * v4690;
rt_int v4692;
};
struct yf2101 { void *up;
void * v4700;
void * v4702;
void * v4704;
void * v4706;
void * v4708;
void * v4710;
rt_int v4712;
rt_int v4714;
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
void * v4768;
};
struct yf2152 { void *up;
rt_int p2150;
rt_int p2151;
rt_int v4774;
};
struct yf2157 { void *up;
void * v4778;
rt_int v4780;
rt_int v4782;
};
struct yf2162 { void *up;
void * v4786;
void * v4788;
rt_int v4790;
rt_int v4792;
};
struct yf2167 { void *up;
void * v4798;
rt_int v4800;
rt_int v4802;
};
struct yf2173 { void *up;
rt_int p2172;
rt_int v4808;
};
struct yf2178 { void *up;
void * v4813;
rt_int v4815;
rt_int v4817;
};
struct yf2183 { void *up;
void * v4821;
rt_int v4823;
rt_int v4825;
};
struct yf2188 { void *up;
void * v4846;
void * v4848;
void * v4850;
rt_int v4852;
};
struct yf2193 { void *up;
};
struct yf2198 { void *up;
void * v4859;
void * v4861;
};
struct yf2205 { void *up;
rt_int p2203;
rt_int p2204;
void * v4868;
};
struct yf2211 { void *up;
rt_int p2210;
void * v4885;
};
struct yf2217 { void *up;
void * p2216;
void * v4892;
rt_int v4894;
rt_int v4897;
};
struct yf2222 { void *up;
void * v4909;
void * v4911;
void * v4913;
rt_int v4915;
};
struct yf2228 { void *up;
void * p2227;
};
struct yf2234 { void *up;
rt_int p2233;
void * v4927;
};
struct yf2240 { void *up;
rt_int p2239;
void * v4935;
};
struct yf2247 { void *up;
rt_int p2245;
rt_int p2246;
void * v4944;
void * v4946;
rt_int lo4952;
rt_int hi4953;
rt_int c_4955;
};
struct yf2253 { void *up;
rt_int p2252;
};
struct yf2260 { void *up;
void * p2258;
rt_int p2259;
void * v4968;
void * v4970;
rt_int v4972;
};
struct yf2267 { void *up;
void * p2265;
rt_int p2266;
void * v4988;
};
struct yf2274 { void *up;
void * p2272;
rt_int p2273;
void * v5013;
};
struct yf2280 { void *up;
void * p2279;
};
struct yf2286 { void *up;
void * p2285;
void * v5028;
};
struct yf2293 { void *up;
rt_int p2291;
void * p2292;
void * v5037;
};
struct yf2300 { void *up;
void * p2298;
rt_int p2299;
void * v5046;
rt_int v5048;
};
struct yf2307 { void *up;
rt_int p2305;
rt_int p2306;
rt_int v5056;
};
struct yf2313 { void *up;
rt_int p2312;
rt_int v5071;
};
struct yf2320 { void *up;
rt_int p2318;
rt_int p2319;
rt_int v5086;
};
struct yf2326 { void *up;
void * p2325;
rt_int v5095;
};
struct yf2332 { void *up;
void * p2331;
void * v5103;
};
struct yf2339 { void *up;
rt_int p2337;
rt_int p2338;
void * v5110;
};
struct yf2345 { void *up;
void * p2344;
void * v5138;
};
struct yf2351 { void *up;
void * p2350;
};
struct yf2357 { void *up;
void * p2356;
};
struct yf2363 { void *up;
void * p2362;
};
struct yf2369 { void *up;
void * p2368;
};
struct yf2375 { void *up;
void * p2374;
};
struct yf2382 { void *up;
void * p2380;
rt_int p2381;
void * v5169;
};
struct yf2388 { void *up;
void * p2387;
};
struct yf2394 { void *up;
void * p2393;
rt_int v5181;
};
struct yf2400 { void *up;
void * p2399;
rt_int v5188;
};
struct yf2406 { void *up;
void * p2405;
rt_int v5215;
};
struct yf2412 { void *up;
void * p2411;
};
struct yf2419 { void *up;
void * p2417;
void * p2418;
};
struct yf2427 { void *up;
rt_int p2424;
void * p2425;
void * p2426;
rt_int v5264;
};
struct yf2435 { void *up;
rt_int p2432;
void * p2433;
void * p2434;
};
struct yf2442 { void *up;
void * p2440;
rt_int p2441;
};
struct yf2448 { void *up;
void * p2447;
rt_int v5279;
void * v5281;
void * v5283;
};
struct yf2454 { void *up;
void * p2453;
};
struct yf2461 { void *up;
void * p2459;
void * p2460;
};
struct yf2467 { void *up;
void * p2466;
};
struct yf2475 { void *up;
void * p2472;
yarr p2474;
rt_int v5329;
rt_int v5331;
};
struct yf2481 { void *up;
void * p2480;
};
struct yf2487 { void *up;
void * p2486;
};
struct yf2495 { void *up;
void * p2492;
void * p2493;
void * p2494;
void * v5357;
};
struct yf2501 { void *up;
void * p2500;
};
struct yf2508 { void *up;
rt_int p2506;
rt_int p2507;
rt_int v5369;
rt_int v5371;
rt_int v5373;
};
struct yf2516 { void *up;
rt_int p2513;
rt_int p2514;
rt_int p2515;
rt_int v5389;
rt_int v5391;
};
struct yf2524 { void *up;
rt_int p2521;
rt_int p2522;
rt_int p2523;
rt_int v5406;
rt_int lo5411;
rt_int hi5412;
rt_int c_5414;
};
struct yf2534 { void *up;
void * p2529;
void * p2530;
rt_int p2531;
rt_int * p2531_o;
rt_int p2532;
rt_int * p2532_o;
rt_int p2533;
rt_int * p2533_o;
rt_int v5425;
rt_int v5427;
rt_int v5429;
rt_int v5431;
rt_int v5433;
rt_int v5435;
};
struct yf2541 { void *up;
rt_int p2539;
rt_int p2540;
};
struct yf2549 { void *up;
void * p2546;
rt_int p2547;
rt_int p2548;
rt_int v5464;
};
struct yf2556 { void *up;
void * p2554;
void * p2555;
rt_int v5474;
rt_int v5476;
rt_int v5478;
rt_int v5480;
void * v5482;
void * v5484;
rt_int v5486;
rt_int v5488;
rt_int v5490;
rt_int v5492;
rt_int v5494;
};
struct yf2562 { void *up;
void * p2561;
void * v5526;
void * v5528;
rt_int v5530;
};
struct yf2570 { void *up;
void * p2567;
rt_int p2568;
rt_int p2569;
};
struct yf2576 { void *up;
rt_int p2575;
rt_int v5545;
};
struct yf2584 { void *up;
void * p2581;
rt_int p2582;
rt_int p2583;
void * v5555;
void * v5557;
};
struct yf2591 { void *up;
void * p2589;
void * p2590;
void * v5565;
void * v5567;
void * v5569;
void * v5571;
void * v5573;
void * v5575;
};
struct yf2599 { void *up;
void * p2596;
rt_int p2597;
rt_int p2598;
void * v5604;
void * v5606;
void * v5608;
void * v5610;
void * v5612;
rt_int v5614;
void * v5616;
rt_int v5618;
rt_int v5620;
};
struct yf2606 { void *up;
rt_int p2604;
void * p2605;
void * v5667;
void * v5669;
};
struct yf2611 { void *up;
void * v5673;
};
struct yf2617 { void *up;
void * p2616;
void * v5678;
rt_int v5680;
rt_int v5682;
};
struct yf2630 { void *up;
void * p2622;
void * * p2623;
rt_int p2624;
void * p2625;
rt_int p2626;
rt_int p2627;
void * p2628;
rt_int p2629;
void * v5707;
};
struct yf2641 { void *up;
void * p2635;
void * * p2636;
void * p2637;
rt_int p2638;
void * p2639;
rt_int p2640;
void * v5719;
void * v5721;
void * v5723;
};
struct yf2649 { void *up;
void * p2646;
void * p2647;
rt_int p2648;
void * v5730;
void * v5732;
void * v5734;
void * v5736;
rt_int v5738;
void * v5741;
rt_int v5743;
rt_int v5745;
};
struct yf2656 { void *up;
void * p2654;
rt_int p2655;
void * v5792;
};
struct yf2663 { void *up;
void * p2661;
rt_int p2662;
void * v5799;
rt_int v5801;
rt_int v5803;
rt_int v5805;
rt_int v5807;
rt_int lo5816;
rt_int hi5817;
rt_int c_5819;
};
struct yf2670 { void *up;
void * p2668;
void * p2669;
void * v5858;
void * v5860;
void * v5862;
rt_int v5864;
rt_int v5867;
};
struct yf2678 { void *up;
void * p2675;
rt_int p2676;
rt_int p2677;
rt_int v5892;
rt_int v5894;
};
struct yf2687 { void *up;
void * p2683;
rt_int p2684;
rt_int p2685;
rt_int * p2685_o;
rt_int p2686;
rt_int v5905;
rt_int v5907;
rt_int v5909;
ydesc yd_5918;
yarr v5920;
unsigned char v5922;
rt_int v5924;
rt_int lo5953;
rt_int hi5954;
rt_int c_5956;
};
struct yf2695 { void *up;
void * p2692;
rt_int p2693;
rt_int * p2693_o;
rt_int p2694;
rt_int * p2694_o;
void * v5991;
rt_int v5993;
rt_int v5995;
rt_int v5997;
rt_int v5999;
rt_int v6001;
void * v6003;
};
struct yf2703 { void *up;
void * p2700;
rt_int p2701;
rt_int * p2701_o;
rt_int p2702;
rt_int * p2702_o;
void * v6033;
rt_int v6035;
rt_int v6037;
rt_int v6039;
rt_int v6041;
rt_int v6043;
void * v6045;
void * v6047;
rt_int lo6064;
rt_int hi6065;
rt_int c_6067;
};
struct yf2710 { void *up;
void * p2708;
void * p2709;
};
struct yf2718 { void *up;
rt_int p2715;
void * p2716;
void * p2717;
rt_int v6095;
rt_int v6097;
void * v6099;
void * v6101;
};
struct yf2726 { void *up;
rt_int p2723;
void * p2724;
void * p2725;
rt_int v6130;
rt_int v6132;
rt_int v6134;
rt_int v6136;
rt_int v6138;
rt_int v6140;
};
struct yf2734 { void *up;
rt_int p2731;
void * p2732;
void * p2733;
rt_int v6187;
rt_int v6189;
rt_int v6191;
};
struct yf2745 { void *up;
rt_int * p2739;
void * p2740;
rt_int * p2741;
void * p2742;
void * p2743;
rt_int p2744;
rt_int v6206;
rt_int v6208;
};
struct yf2753 { void *up;
void * p2750;
rt_int p2751;
rt_int * p2751_o;
void * p2752;
void * * p2752_o;
rt_int v6215;
rt_int v6217;
};
struct yf2762 { void *up;
void * p2758;
rt_int p2759;
rt_int * p2759_o;
rt_int p2760;
rt_int * p2760_o;
rt_int p2761;
rt_int * p2761_o;
rt_int v6231;
rt_int v6233;
rt_int v6235;
rt_int v6237;
rt_int v6239;
rt_int v6241;
};
struct yf2768 { void *up;
rt_int p2767;
};
struct yf2776 { void *up;
rt_int p2773;
void * p2774;
void * p2775;
rt_int v6262;
};
struct yf2786 { void *up;
rt_int p2781;
void * p2782;
rt_int p2783;
void * p2784;
rt_int p2785;
rt_int v6301;
};
struct yf2796 { void *up;
rt_int p2791;
void * p2792;
rt_int p2793;
void * p2794;
rt_int p2795;
};
struct yf2802 { void *up;
void * p2801;
void * v6323;
void * v6325;
};
struct yf2808 { void *up;
void * p2807;
void * v6344;
void * v6346;
};
struct yf2816 { void *up;
void * p2813;
rt_int p2814;
rt_int * p2814_o;
void * p2815;
void * * p2815_o;
};
struct yf2822 { void *up;
rt_int p2821;
};
struct yf2829 { void *up;
void * p2827;
rt_int p2828;
void * v6364;
};
struct yf2835 { void *up;
void * p2834;
void * v6369;
};
struct yf2844 { void *up;
void * p2840;
void * p2841;
rt_int p2842;
rt_int * p2842_o;
void * p2843;
void * * p2843_o;
rt_int v6378;
void * v6380;
rt_int v6382;
rt_int v6384;
void * v6386;
void * v6388;
void * v6390;
rt_int v6392;
rt_int v6394;
};
struct yf2852 { void *up;
void * p2849;
void * p2850;
rt_int p2851;
void * v6437;
rt_int v6439;
rt_int v6441;
};
struct yf2861 { void *up;
void * p2857;
void * p2858;
rt_int p2859;
rt_int * p2859_o;
void * p2860;
void * * p2860_o;
void * v6453;
};
struct yf2869 { void *up;
void * p2866;
rt_int p2867;
rt_int * p2867_o;
void * p2868;
void * * p2868_o;
rt_int v6462;
rt_int v6464;
rt_int v6466;
void * v6468;
void * v6470;
void * v6472;
void * v6474;
rt_int v6476;
rt_int v6478;
};
struct yf2879 { void *up;
void * p2874;
rt_int p2875;
void * p2876;
rt_int p2877;
rt_int * p2877_o;
void * p2878;
void * * p2878_o;
};
struct yf2885 { void *up;
void * p2884;
void * v6516;
};
struct yf2894 { void *up;
yarr p2891;
rt_int p2892;
rt_int p2893;
};
struct yf2903 { void *up;
rt_int p2899;
yarr p2901;
rt_int p2902;
};
struct yf2912 { void *up;
rt_int p2908;
void * p2909;
rt_int p2910;
void * p2911;
rt_int v6544;
rt_int v6546;
void * v6548;
};
struct yf2918 { void *up;
void * p2917;
};
struct yf2925 { void *up;
rt_int p2923;
void * p2924;
};
struct yf2934 { void *up;
void * p2930;
void * p2931;
rt_int p2932;
rt_int * p2932_o;
void * p2933;
void * * p2933_o;
rt_int v6586;
rt_int v6588;
rt_int v6590;
rt_int v6592;
void * v6594;
void * v6596;
void * v6598;
rt_int v6600;
};
struct yf2941 { void *up;
void * p2939;
void * p2940;
};
struct yf2949 { void *up;
void * p2946;
rt_int p2947;
rt_int p2948;
void * v6660;
void * v6662;
rt_int v6664;
rt_int v6666;
};
struct yf2955 { void *up;
void * p2954;
void * v6678;
};
struct yf2964 { void *up;
void * p2960;
void * p2961;
rt_int p2962;
rt_int * p2962_o;
rt_int p2963;
rt_int * p2963_o;
void * v6690;
void * v6692;
void * v6694;
};
struct yf2972 { void *up;
void * p2969;
void * p2970;
rt_int p2971;
void * v6709;
};
struct yf2979 { void *up;
void * p2977;
void * p2978;
};
struct yf2988 { void *up;
void * p2984;
rt_int p2985;
rt_int p2986;
rt_int p2987;
void * v6726;
rt_int v6728;
rt_int v6732;
rt_int v6735;
rt_int v6738;
rt_int v6741;
rt_int v6744;
rt_int v6747;
};
struct yf2994 { void *up;
rt_int p2993;
};
struct yf3005 { void *up;
void * p2999;
rt_int p3000;
void * p3001;
void * p3002;
rt_int p3003;
rt_int * p3003_o;
void * p3004;
void * * p3004_o;
void * v6805;
void * v6807;
rt_int v6809;
rt_int v6811;
};
struct yf3012 { void *up;
void * p3010;
rt_int p3011;
void * v6825;
};
struct yf3022 { void *up;
rt_int p3017;
void * p3018;
rt_int p3019;
void * p3020;
rt_int p3021;
void * v6835;
void * v6837;
void * v6839;
void * v6841;
rt_int v6843;
};
struct yf3032 { void *up;
rt_int p3027;
void * p3028;
rt_int p3029;
void * p3030;
rt_int p3031;
rt_int v6885;
};
struct yf3042 { void *up;
void * p3037;
void * p3038;
rt_int p3039;
rt_int p3040;
rt_int * p3040_o;
void * p3041;
void * * p3041_o;
void * v6894;
void * v6896;
rt_int v6898;
rt_int v6900;
};
struct yf3051 { void *up;
void * p3047;
void * p3048;
rt_int p3049;
rt_int * p3049_o;
void * p3050;
void * * p3050_o;
void * v6912;
void * v6914;
rt_int v6916;
rt_int v6918;
rt_int v6920;
void * v6922;
rt_int v6924;
rt_int v6926;
rt_int v6928;
rt_int v6930;
rt_int v6932;
rt_int v6935;
void * v6937;
rt_int v6939;
};
struct yf3059 { void *up;
void * p3056;
rt_int p3057;
rt_int p3058;
void * v7001;
void * v7003;
rt_int v7005;
rt_int v7007;
};
struct yf3067 { void *up;
yarr p3065;
rt_int p3066;
rt_int v7016;
};
struct yf3077 { void *up;
yarr p3073;
rt_int p3074;
yarr p3076;
rt_int v7022;
};
struct yf3083 { void *up;
rt_int p3082;
};
struct yf3088 { void *up;
};
struct yf3094 { void *up;
rt_int p3093;
};
struct yf3100 { void *up;
void * p3099;
rt_int v7044;
rt_int v7046;
rt_int v7048;
void * v7050;
void * v7052;
rt_int v7054;
void * v7056;
rt_int v7058;
};
struct yf3107 { void *up;
void * p3105;
void * p3106;
void * v7121;
void * v7123;
rt_int v7125;
rt_int v7127;
rt_int v7129;
rt_int v7131;
};
struct yf3115 { void *up;
void * p3112;
void * p3113;
void * p3114;
rt_int v7153;
void * v7155;
void * v7157;
void * v7159;
rt_int v7161;
rt_int v7163;
rt_int v7165;
rt_int v7167;
};
struct yf3122 { void *up;
void * p3120;
void * p3121;
void * v7180;
void * v7182;
rt_int v7184;
rt_int v7187;
rt_int lo7192;
rt_int hi7193;
rt_int c_7195;
};
struct yf3128 { void *up;
void * p3127;
void * v7205;
rt_int v7207;
};
struct yf3134 { void *up;
void * p3133;
void * v7215;
};
struct yf3140 { void *up;
void * p3139;
rt_int v7229;
void * v7231;
rt_int v7233;
rt_int v7235;
};
struct yf3147 { void *up;
void * p3145;
rt_int p3146;
void * v7260;
void * v7262;
};
struct yf3153 { void *up;
void * p3152;
void * v7286;
};
struct yf3159 { void *up;
void * p3158;
rt_int v7290;
void * v7292;
};
struct yf3166 { void *up;
void * p3164;
void * p3165;
rt_int v7298;
rt_int v7300;
void * v7302;
void * v7304;
rt_int v7306;
};
struct yf3171 { void *up;
void * v7312;
rt_int v7314;
};
struct yf3177 { void *up;
void * p3176;
rt_int v7321;
rt_int v7323;
rt_int v7325;
rt_int v7327;
rt_int v7329;
rt_int v7331;
rt_int v7333;
void * v7335;
void * v7337;
void * v7339;
void * v7341;
rt_int v7343;
rt_int v7345;
rt_int v7347;
rt_int v7349;
void * v7351;
};
struct yf3183 { void *up;
void * p3182;
void * v7423;
rt_int v7425;
rt_int v7427;
rt_int v7429;
void * v7431;
};
struct yf3191 { void *up;
rt_int p3188;
rt_int p3189;
rt_int p3190;
};
struct yf3197 { void *up;
void * p3196;
rt_int v7463;
rt_int v7465;
rt_int v7467;
void * v7469;
void * v7471;
};
struct yf3203 { void *up;
void * p3202;
};
struct yf3209 { void *up;
void * p3208;
void * v7492;
};
struct yf3215 { void *up;
void * p3214;
void * v7507;
};
struct yf3221 { void *up;
void * p3220;
void * v7516;
void * v7518;
void * v7520;
};
struct yf3230 { void *up;
void * p3226;
void * p3227;
void * * p3227_o;
rt_int p3228;
rt_int * p3228_o;
rt_int p3229;
rt_int * p3229_o;
void * v7528;
void * v7530;
};
struct yf3238 { void *up;
void * p3235;
rt_int p3236;
rt_int p3237;
void * v7540;
};
struct yf3244 { void *up;
void * p3243;
void * v7545;
rt_int v7547;
rt_int v7549;
void * v7551;
void * v7553;
};
struct yf3250 { void *up;
void * p3249;
void * v7558;
};
struct yf3257 { void *up;
void * p3255;
rt_int p3256;
void * v7564;
rt_int v7566;
rt_int v7568;
void * v7570;
};
struct yf3264 { void *up;
void * p3262;
yarr * p3263;
void * v7575;
rt_int v7577;
void * v7580;
rt_int lo7589;
rt_int hi7590;
rt_int c_7592;
};
struct yf3271 { void *up;
void * p3269;
void * p3270;
void * v7606;
void * v7608;
rt_int v7610;
rt_int v7612;
rt_int v7614;
rt_int v7616;
rt_int v7618;
rt_int v7620;
rt_int v7622;
rt_int v7624;
yarr v7626;
yarr v7628;
rt_int v7630;
rt_int v7632;
rt_int v7634;
rt_int v7636;
void * v7638;
void * v7640;
void * v7642;
void * v7644;
rt_int lo7658;
rt_int hi7659;
rt_int c_7661;
};
struct yf3279 { void *up;
void * p3276;
rt_int p3277;
rt_int p3278;
void * v7683;
void * v7685;
rt_int v7687;
rt_int v7689;
void * v7691;
void * v7693;
void * v7695;
rt_int v7697;
rt_int v7699;
};
struct yf7835 { struct yf3284 *up;
rt_int p7833;
rt_int p7834;
};
struct yf7842 { struct yf3284 *up;
rt_int p7840;
rt_int p7841;
void * v7862;
};
struct yf7848 { struct yf3284 *up;
rt_int p7847;
};
struct yf3284 { void *up;
void * v7715;
void * v7717;
void * v7719;
rt_int v7721;
rt_int v7724;
rt_int v7727;
void * v7730;
rt_int lo7757;
rt_int hi7758;
ydesc yd_7760;
yarr v7762;
yarr v7764;
rt_int lo7770;
rt_int hi7771;
ydesc yd_7773;
yarr v7775;
rt_int lo7781;
rt_int hi7782;
ydesc yd_7784;
yarr v7786;
rt_int lo7792;
rt_int hi7793;
ydesc yd_7795;
yarr v7797;
rt_int lo7803;
rt_int hi7804;
ydesc yd_7806;
yarr v7808;
rt_int lo7814;
rt_int hi7815;
ydesc yd_7817;
yarr v7819;
rt_int v7821;
rt_int v7824;
rt_int v7826;
rt_int v7828;
void * v7830;
rt_int lo7887;
rt_int hi7888;
rt_int c_7890;
rt_int lo7898;
rt_int hi7899;
rt_int c_7901;
rt_int lo7909;
rt_int hi7910;
rt_int c_7912;
rt_int lo7925;
rt_int hi7926;
rt_int c_7928;
rt_int lo7935;
rt_int hi7936;
rt_int c_7938;
rt_int lo7948;
rt_int hi7949;
rt_int c_7951;
rt_int lo7958;
rt_int hi7959;
rt_int c_7961;
rt_int lo7971;
rt_int hi7972;
rt_int c_7974;
rt_int lo7996;
rt_int hi7997;
rt_int c_7999;
};
struct yf3292 { void *up;
rt_int p3289;
rt_int p3290;
rt_int p3291;
rt_int lo8012;
rt_int hi8013;
rt_int c_8015;
};
struct yf3298 { void *up;
rt_int p3297;
rt_int v8029;
rt_int v8031;
rt_int lo8036;
rt_int hi8037;
rt_int c_8039;
};
struct yf3304 { void *up;
void * p3303;
void * v8049;
rt_int v8051;
rt_int v8053;
};
struct yf3310 { void *up;
void * p3309;
rt_int v8070;
};
struct yf3317 { void *up;
void * p3315;
rt_int p3316;
void * v8078;
void * v8080;
void * v8082;
void * v8084;
void * v8086;
void * v8088;
void * v8090;
rt_int v8092;
rt_int v8094;
};
struct yf3324 { void *up;
void * p3322;
void * p3323;
void * v8141;
void * v8143;
void * v8145;
rt_int v8147;
};
struct yf3330 { void *up;
void * p3329;
void * v8155;
yR134 v8157;
yR134 v8159;
rt_int v8161;
rt_int v8163;
rt_int v8165;
rt_int v8167;
rt_int v8169;
rt_int v8171;
rt_int v8173;
void * v8175;
rt_int v8177;
void * v8179;
void * v8181;
rt_int v8183;
rt_int v8185;
yR134 v8187;
};
struct yf3338 { void *up;
void * p3335;
void * p3336;
rt_int p3337;
};
struct yf3344 { void *up;
void * p3343;
rt_int v8255;
void * v8257;
void * v8259;
void * v8261;
void * v8263;
rt_int v8265;
rt_int v8267;
rt_int v8269;
rt_int v8271;
};
struct yf3351 { void *up;
void * p3349;
void * p3350;
void * v8290;
};
struct yf3358 { void *up;
void * p3356;
void * p3357;
};
struct yf3367 { void *up;
void * p3363;
rt_int p3364;
void * p3365;
rt_int p3366;
rt_int v8300;
rt_int lo8313;
rt_int hi8314;
rt_int c_8316;
};
struct yf3374 { void *up;
rt_int p3372;
rt_int p3373;
rt_int v8325;
rt_int v8329;
void * v8331;
rt_int lo8336;
rt_int hi8337;
rt_int c_8339;
rt_int lo8346;
rt_int hi8347;
rt_int c_8349;
};
struct yf3380 { void *up;
rt_int p3379;
void * v8357;
yR134 v8359;
void * v8361;
};
struct yf3386 { void *up;
void * p3385;
void * v8375;
void * v8377;
rt_int v8379;
rt_int v8381;
};
struct yf3392 { void *up;
void * p3391;
};
struct yf3399 { void *up;
rt_int p3397;
void * p3398;
void * v8391;
};
struct yf3407 { void *up;
void * * p3404;
void * p3405;
rt_int p3406;
void * v8398;
void * v8400;
void * v8402;
};
struct yf3414 { void *up;
void * p3412;
rt_int p3413;
void * v8412;
};
struct yf3422 { void *up;
rt_int p3419;
rt_int p3420;
void * p3421;
void * * p3421_o;
void * v8428;
};
struct yf3428 { void *up;
void * p3427;
void * v8446;
};
struct yf3437 { void *up;
rt_int p3433;
rt_int p3434;
void * p3435;
rt_int p3436;
void * v8454;
};
struct yf3444 { void *up;
rt_int p3442;
void * p3443;
};
struct yf3451 { void *up;
void * p3449;
void * p3450;
void * v8467;
rt_int lo8471;
rt_int hi8472;
rt_int c_8474;
};
struct yf3457 { void *up;
rt_int p3456;
void * v8481;
rt_int lo8485;
rt_int hi8486;
rt_int c_8488;
};
struct yf3465 { void *up;
void * p3462;
void * * p3463;
rt_int p3464;
void * v8497;
void * v8499;
rt_int v8501;
};
struct yf3473 { void *up;
void * p3470;
void * * p3471;
rt_int p3472;
void * v8508;
void * v8510;
void * v8512;
rt_int v8514;
void * v8516;
rt_int v8518;
rt_int v8520;
void * v8522;
};
struct yf3480 { void *up;
void * p3478;
rt_int p3479;
void * v8553;
void * v8555;
void * v8557;
};
struct yf3486 { void *up;
void * p3485;
void * v8563;
void * v8565;
void * v8567;
void * v8569;
void * v8571;
void * v8573;
void * v8575;
void * v8577;
void * v8579;
void * v8581;
rt_int v8583;
rt_int v8585;
rt_int v8587;
};
struct yf3492 { void *up;
void * p3491;
void * v8616;
};
struct yf3498 { void *up;
void * p3497;
void * v8620;
void * v8622;
void * v8624;
void * v8626;
rt_int v8628;
rt_int v8630;
rt_int v8632;
rt_int v8634;
void * v8636;
rt_int lo8644;
rt_int hi8645;
rt_int c_8647;
};
struct yf3504 { void *up;
void * p3503;
void * v8659;
void * v8661;
};
struct yf3509 { void *up;
void * v8667;
};
struct yf3516 { void *up;
void * p3514;
void * p3515;
rt_int v8678;
rt_int v8680;
rt_int v8682;
void * v8684;
rt_int v8686;
rt_int v8688;
rt_int v8690;
rt_int v8692;
rt_int v8694;
rt_int v8696;
void * v8698;
void * v8700;
};
struct yf3522 { void *up;
void * p3521;
};
struct yf3528 { void *up;
void * p3527;
rt_int v8761;
};
struct yf3533 { void *up;
};
struct yf3539 { void *up;
void * p3538;
};
struct yf3546 { void *up;
void * p3544;
rt_int p3545;
};
struct yf3553 { void *up;
void * p3551;
rt_int p3552;
};
struct yf3560 { void *up;
void * p3558;
void * p3559;
rt_int v8804;
rt_int v8806;
rt_int v8808;
};
struct yf3567 { void *up;
void * p3565;
rt_int p3566;
void * v8817;
rt_int v8819;
};
struct yf3574 { void *up;
void * p3572;
rt_int p3573;
};
struct yf3582 { void *up;
yarr p3580;
rt_int p3581;
};
struct yf3588 { void *up;
rt_int p3587;
};
struct yf3597 { void *up;
void * p3593;
rt_int p3594;
rt_int p3595;
rt_int * p3595_o;
void * p3596;
void * * p3596_o;
rt_int v8846;
};
struct yf3605 { void *up;
void * p3602;
rt_int p3603;
rt_int * p3603_o;
void * p3604;
void * * p3604_o;
};
struct yf3611 { void *up;
void * p3610;
rt_int v8862;
void * v8864;
};
struct yf3617 { void *up;
void * p3616;
void * v8870;
rt_int v8873;
rt_int v8875;
rt_int v8877;
rt_int v8879;
rt_int v8881;
rt_int v8883;
unsigned char v8885;
void * v8887;
ydesc yd_8896;
yarr v8898;
};
struct yf3624 { void *up;
void * p3622;
void * p3623;
rt_int v8934;
rt_int v8936;
rt_int v8938;
void * v8940;
};
struct yf3634 { void *up;
rt_int p3629;
void * p3630;
rt_int p3631;
rt_int p3632;
rt_int * p3632_o;
void * p3633;
void * * p3633_o;
rt_int v8952;
rt_int v8954;
rt_int v8956;
rt_int v8958;
rt_int v8960;
void * v8962;
void * v8964;
void * v8966;
void * v8968;
rt_int v8970;
rt_int v8972;
rt_int v8974;
rt_int v8976;
void * v8978;
rt_int v8980;
rt_int lo8994;
rt_int hi8995;
rt_int c_8997;
};
struct yf3642 { void *up;
yarr p3640;
void * p3641;
void * v9189;
};
struct yf3650 { void *up;
yarr p3648;
rt_int p3649;
void * v9195;
};
struct yf3660 { void *up;
yarr p3656;
yarr p3657;
yarr p3658;
rt_int p3659;
void * v9203;
void * v9205;
void * v9207;
};
struct yf3668 { void *up;
rt_int p3665;
yarr p3667;
void * v9216;
};
struct yf3673 { void *up;
};
struct yf3678 { void *up;
void * v9296;
};
struct yf3683 { void *up;
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
static rt_int yr2251_IsSimple(rt_int a_p2252);
static rt_int yr2257_DeclaredFrom(void * a_p2258, rt_int a_p2259);
static rt_int yr2264_LiteralIn(void * a_p2265, rt_int a_p2266);
static rt_int yr2271_LiteralInGroups(void * a_p2272, rt_int a_p2273);
static rt_int yr2278_Resolved(void * a_p2279);
static rt_int yr2284_Ambiguous(void * a_p2285);
static void * yr2290_FindLit(rt_int a_p2291, void * a_p2292);
static void yr2297_Define(void * a_p2298, rt_int a_p2299);
static rt_int yr2304_Path(rt_int a_p2305, rt_int a_p2306);
static rt_int yr2311_FramePtr(rt_int a_p2312);
static void yr2317_DeclStorage(rt_int a_p2318, rt_int a_p2319);
static rt_int yr2324_SymPath(void * a_p2325);
static void * yr2330_Real(void * a_p2331);
static void * yr2336_NewRep(rt_int a_p2337, rt_int a_p2338);
static void * yr2343_CopyRep(void * a_p2344);
static rt_int yr2349_IsDiscrete(void * a_p2350);
static rt_int yr2355_IsNumeric(void * a_p2356);
static rt_int yr2361_IsArrayLike(void * a_p2362);
static rt_int yr2367_IsString(void * a_p2368);
static rt_int yr2373_Deep(void * a_p2374);
static rt_int yr2379_Holds(void * a_p2380, rt_int a_p2381);
static rt_int yr2386_HoldsSignal(void * a_p2387);
static rt_int yr2392_NonAssignable(void * a_p2393);
static rt_int yr2398_CType(void * a_p2399);
static rt_int yr2404_DescOf(void * a_p2405);
static void yr2410_NewDesc(void * a_p2411);
static rt_int yr2416_SameType(void * a_p2417, void * a_p2418);
static void yr2423_TypeClash(rt_int a_p2424, void * a_p2425, void * a_p2426);
static void yr2431_CheckType(rt_int a_p2432, void * a_p2433, void * a_p2434);
static void yr2439_CheckRepresented(void * a_p2440, rt_int a_p2441);
static rt_int yr2446_SigText(void * a_p2447);
static rt_int yr2452_RepSig(void * a_p2453);
static rt_int yr2458_Identical(void * a_p2459, void * a_p2460);
static rt_int yr2465_IsLiteralNode(void * a_p2466);
static void yr2471_StoreBounds(void * a_p2472, yarr a_p2474);
static rt_int yr2479_LoText(void * a_p2480);
static rt_int yr2485_HiText(void * a_p2486);
static void * yr2491_AdoptLiteral(void * a_p2492, void * a_p2493, void * a_p2494);
static rt_int yr2499_HasQualifier(void * a_p2500);
static rt_int yr2505_Gcd(rt_int a_p2506, rt_int a_p2507);
static rt_int yr2512_MulChk(rt_int a_p2513, rt_int a_p2514, rt_int a_p2515);
static rt_int yr2520_PowChk(rt_int a_p2521, rt_int a_p2522, rt_int a_p2523);
static void yr2528_ScaleRatio(void * a_p2529, void * a_p2530, rt_int * a_p2531, rt_int * a_p2532, rt_int * a_p2533);
static rt_int yr2538_Factor(rt_int a_p2539, rt_int a_p2540);
static void yr2545_SetScale(void * a_p2546, rt_int a_p2547, rt_int a_p2548);
static void yr2553_Qualify(void * a_p2554, void * a_p2555);
static void yr2560_DefineLits(void * a_p2561);
static void yr2566_SetRange(void * a_p2567, rt_int a_p2568, rt_int a_p2569);
static rt_int yr2574_NewTid(rt_int a_p2575);
static void * yr2580_MakeRep(void * a_p2581, rt_int a_p2582, rt_int a_p2583);
static rt_int yr2588_Conforms(void * a_p2589, void * a_p2590);
static void * yr2595_MakeRep1(void * a_p2596, rt_int a_p2597, rt_int a_p2598);
static void yr2603_ResolvePending(rt_int a_p2604, void * a_p2605);
static void yr2610_CheckPending(void);
static void yr2615_BuildArrayDesc(void * a_p2616);
static void yr2621_AddField(void * a_p2622, void * * a_p2623, rt_int a_p2624, void * a_p2625, rt_int a_p2626, rt_int a_p2627, void * a_p2628, rt_int a_p2629);
static void yr2634_AddFields(void * a_p2635, void * * a_p2636, void * a_p2637, rt_int a_p2638, void * a_p2639, rt_int a_p2640);
static void yr2645_MakeRecord(void * a_p2646, void * a_p2647, rt_int a_p2648);
static void * yr2653_FindField(void * a_p2654, rt_int a_p2655);
static rt_int yr2660_CharOrd(void * a_p2661, rt_int a_p2662);
static void * yr2667_AlphabetFor(void * a_p2668, void * a_p2669);
static rt_int yr2674_CharValue(void * a_p2675, rt_int a_p2676, rt_int a_p2677);
static rt_int yr2682_StringCodes(void * a_p2683, rt_int a_p2684, rt_int * a_p2685, rt_int a_p2686);
static void yr2691_Manifest(void * a_p2692, rt_int * a_p2693, rt_int * a_p2694);
static void yr2699_ManifestStd(void * a_p2700, rt_int * a_p2701, rt_int * a_p2702);
static rt_int yr2707_NeedsConv(void * a_p2708, void * a_p2709);
static rt_int yr2714_ConvertRecord(rt_int a_p2715, void * a_p2716, void * a_p2717);
static rt_int yr2722_ConvertArray(rt_int a_p2723, void * a_p2724, void * a_p2725);
static rt_int yr2730_RescaleCode(rt_int a_p2731, void * a_p2732, void * a_p2733);
static void yr2738_CommonScale(rt_int * a_p2739, void * a_p2740, rt_int * a_p2741, void * a_p2742, void * a_p2743, rt_int a_p2744);
static void yr2749_FixLiteral(void * a_p2750, rt_int * a_p2751, void * * a_p2752);
static void yr2757_ManifestFix(void * a_p2758, rt_int * a_p2759, rt_int * a_p2760, rt_int * a_p2761);
static rt_int yr2766_FloatChk(rt_int a_p2767);
static rt_int yr2772_Convert(rt_int a_p2773, void * a_p2774, void * a_p2775);
static rt_int yr2780_StoreText(rt_int a_p2781, void * a_p2782, rt_int a_p2783, void * a_p2784, rt_int a_p2785);
static void yr2790_Store(rt_int a_p2791, void * a_p2792, rt_int a_p2793, void * a_p2794, rt_int a_p2795);
static rt_int yr2800_IsVariable(void * a_p2801);
static void yr2806_CheckPure(void * a_p2807);
static void yr2812_LValue(void * a_p2813, rt_int * a_p2814, void * * a_p2815);
static rt_int yr2820_Paren(rt_int a_p2821);
static void * yr2826_Lit(void * a_p2827, rt_int a_p2828);
static void * yr2833_Qualifier(void * a_p2834);
static void yr2839_Expr(void * a_p2840, void * a_p2841, rt_int * a_p2842, void * * a_p2843);
static rt_int yr2848_VariantTest(void * a_p2849, void * a_p2850, rt_int a_p2851);
static void yr2856_NameExpr(void * a_p2857, void * a_p2858, rt_int * a_p2859, void * * a_p2860);
static void yr2865_IndexExpr(void * a_p2866, rt_int * a_p2867, void * * a_p2868);
static void yr2873_NegExpr(void * a_p2874, rt_int a_p2875, void * a_p2876, rt_int * a_p2877, void * * a_p2878);
static void * yr2883_Unbounded(void * a_p2884);
static rt_int yr2889_Call2(yarr a_p2891, rt_int a_p2892, rt_int a_p2893);
static rt_int yr2898_Infix(rt_int a_p2899, yarr a_p2901, rt_int a_p2902);
static rt_int yr2907_EqCode(rt_int a_p2908, void * a_p2909, rt_int a_p2910, void * a_p2911);
static rt_int yr2916_IsOrdered(void * a_p2917);
static rt_int yr2922_FixToFloat(rt_int a_p2923, void * a_p2924);
static void yr2929_BinExpr(void * a_p2930, void * a_p2931, rt_int * a_p2932, void * * a_p2933);
static rt_int yr2938_Fits(void * a_p2939, void * a_p2940);
static void * yr2945_Choose(void * a_p2946, rt_int a_p2947, rt_int a_p2948);
static rt_int yr2953_HidesStandard(void * a_p2954);
static void yr2959_CompileArgs(void * a_p2960, void * a_p2961, rt_int * a_p2962, rt_int * a_p2963);
static void yr2968_CheckUnresolved(void * a_p2969, void * a_p2970, rt_int a_p2971);
static rt_int yr2976_SameAsFormal(void * a_p2977, void * a_p2978);
static rt_int yr2983_CallCode(void * a_p2984, rt_int a_p2985, rt_int a_p2986, rt_int a_p2987);
static rt_int yr2992_Num(rt_int a_p2993);
static rt_int yr2998_UserOp(void * a_p2999, rt_int a_p3000, void * a_p3001, void * a_p3002, rt_int * a_p3003, void * * a_p3004);
static void yr3009_NoteCall(void * a_p3010, rt_int a_p3011);
static rt_int yr3016_UserAssign(rt_int a_p3017, void * a_p3018, rt_int a_p3019, void * a_p3020, rt_int a_p3021);
static void yr3026_Assign(rt_int a_p3027, void * a_p3028, rt_int a_p3029, void * a_p3030, rt_int a_p3031);
static void yr3036_CallExpr(void * a_p3037, void * a_p3038, rt_int a_p3039, rt_int * a_p3040, void * * a_p3041);
static void yr3046_Denote(void * a_p3047, void * a_p3048, rt_int * a_p3049, void * * a_p3050);
static rt_int yr3055_VariantOf(void * a_p3056, rt_int a_p3057, rt_int a_p3058);
static void yr3063_Emit2(yarr a_p3065, rt_int a_p3066);
static void yr3071_Emit3(yarr a_p3073, rt_int a_p3074, yarr a_p3076);
static void yr3081_PopTo(rt_int a_p3082);
static void yr3087_LeaveBlock(void);
static rt_int yr3092_RaiseCode(rt_int a_p3093);
static void yr3098_BlockStatements(void * a_p3099);
static rt_int yr3104_SameDesig(void * a_p3105, void * a_p3106);
static void yr3111_CheckVariantSelected(void * a_p3112, void * a_p3113, void * a_p3114);
static void yr3119_CheckCaseLabels(void * a_p3120, void * a_p3121);
static rt_int yr3126_Falls(void * a_p3127);
static rt_int yr3132_BlockFalls(void * a_p3133);
static rt_int yr3138_Completes(void * a_p3139);
static rt_int yr3144_Exits(void * a_p3145, rt_int a_p3146);
static void yr3151_Statements(void * a_p3152);
static rt_int yr3157_Cond(void * a_p3158);
static rt_int yr3163_Label(void * a_p3164, void * a_p3165);
static void yr3170_CopyOut(void);
static void yr3175_Statement(void * a_p3176);
static void yr3181_ForStatement(void * a_p3182);
static rt_int yr3187_Join(rt_int a_p3188, rt_int a_p3189, rt_int a_p3190);
static void yr3195_ReturnStatement(void * a_p3196);
static void yr3201_BeginStatement(void * a_p3202);
static void yr3207_PlaceLabel(void * a_p3208);
static void yr3213_GotoStatement(void * a_p3214);
static void yr3219_CheckLabels(void * a_p3220);
static void yr3225_DesigBase(void * a_p3226, void * * a_p3227, rt_int * a_p3228, rt_int * a_p3229);
static void * yr3234_Note(void * a_p3235, rt_int a_p3236, rt_int a_p3237);
static void yr3242_NoteWrite(void * a_p3243);
static void yr3248_NoteFree(void * a_p3249);
static void yr3254_NoteFreeDeref(void * a_p3255, rt_int a_p3256);
static rt_int yr3261_DSteps(void * a_p3262, yarr * a_p3263);
static rt_int yr3268_Overlaps(void * a_p3269, void * a_p3270);
static void yr3275_CheckActuals(void * a_p3276, rt_int a_p3277, rt_int a_p3278);
static void yr3283_CheckEffects(void);
static rt_int yr3288_DynIndex(rt_int a_p3289, rt_int a_p3290, rt_int a_p3291);
static rt_int yr3296_RoutineCName(rt_int a_p3297);
static void * yr3302_FormalRep(void * a_p3303);
static rt_int yr3308_ParamCType(void * a_p3309);
static void yr3314_RoutineHeader(void * a_p3315, rt_int a_p3316);
static void * yr3321_SameSignature(void * a_p3322, void * a_p3323);
static void yr3328_RoutineBody(void * a_p3329);
static void yr3334_DeclareStorage(void * a_p3335, void * a_p3336, rt_int a_p3337);
static void yr3342_SimpleDecl(void * a_p3343);
static void yr3348_NoteAlphabet(void * a_p3349, void * a_p3350);
static void yr3355_AtLocation(void * a_p3356, void * a_p3357);
static void yr3362_Defer(void * a_p3363, rt_int a_p3364, void * a_p3365, rt_int a_p3366);
static void yr3371_RunDeferred(rt_int a_p3372, rt_int a_p3373);
static void yr3378_ModuleInit(rt_int a_p3379);
static void yr3384_Declarations(void * a_p3385);
static void yr3390_DeclareRoutine(void * a_p3391);
static void * yr3396_Alias(rt_int a_p3397, void * a_p3398);
static void yr3403_AddLits(void * * a_p3404, void * a_p3405, rt_int a_p3406);
static rt_int yr3411_Provides(void * a_p3412, rt_int a_p3413);
static rt_int yr3418_ImportLater(rt_int a_p3419, rt_int a_p3420, void * * a_p3421);
static void * yr3426_OneDecl(void * a_p3427);
static void * yr3432_Lazy(rt_int a_p3433, rt_int a_p3434, void * a_p3435, rt_int a_p3436);
static void yr3441_SetLazy(rt_int a_p3442, void * a_p3443);
static void yr3448_ResolveFrom(void * a_p3449, void * a_p3450);
static void yr3455_ResolveLater(rt_int a_p3456);
static void yr3461_LazyModule(void * a_p3462, void * * a_p3463, rt_int a_p3464);
static void yr3469_ResolveItem(void * a_p3470, void * * a_p3471, rt_int a_p3472);
static void yr3477_DefineAll(void * a_p3478, rt_int a_p3479);
static void yr3484_CompileModule(void * a_p3485);
static void yr3490_DeclareTemplate(void * a_p3491);
static void yr3496_Instantiate(void * a_p3497);
static void yr3502_DeclareProcess(void * a_p3503);
static void yr3508_AwaitProcesses(void);
static void yr3513_Activate(void * a_p3514, void * a_p3515);
static rt_int yr3520_MonitorPath(void * a_p3521);
static void yr3526_EnterMonitor(void * a_p3527);
static void yr3532_LeaveMonitor(void);
static void yr3537_TerminateStatement(void * a_p3538);
static void yr3543_DeclareSignal(void * a_p3544, rt_int a_p3545);
static void yr3550_DeclareSignalArray(void * a_p3551, rt_int a_p3552);
static void yr3557_DeviceSignal(void * a_p3558, void * a_p3559);
static void * yr3564_Arg(void * a_p3565, rt_int a_p3566);
static void yr3571_NArgs(void * a_p3572, rt_int a_p3573);
static rt_int yr3578_Call1(yarr a_p3580, rt_int a_p3581);
static rt_int yr3586_Addr(rt_int a_p3587);
static void yr3592_StdVar(void * a_p3593, rt_int a_p3594, rt_int * a_p3595, void * * a_p3596);
static void yr3601_NumArg(void * a_p3602, rt_int * a_p3603, void * * a_p3604);
static rt_int yr3609_IntArg(void * a_p3610);
static void yr3615_CodeInsert(void * a_p3616);
static void * yr3621_ManifestScale(void * a_p3622, void * a_p3623);
static void yr3628_StdCall(rt_int a_p3629, void * a_p3630, rt_int a_p3631, rt_int * a_p3632, void * * a_p3633);
static void yr3638_StdRep(yarr a_p3640, void * a_p3641);
static void yr3646_StdOp(yarr a_p3648, rt_int a_p3649);
static void * yr3654_LitList(yarr a_p3656, yarr a_p3657, yarr a_p3658, rt_int a_p3659);
static void * yr3664_Abstract(rt_int a_p3665, yarr a_p3667);
static void yr3672_Predefine(void);
static void yr3677_Translate(void);
static void yr3682_WriteProgram(void);
static rt_int yr7832_At(struct yf3284 *up, rt_int a_p7833, rt_int a_p7834);
static rt_int yr7839_Reaches(struct yf3284 *up, rt_int a_p7840, rt_int a_p7841);
static rt_int yr7846_VName(struct yf3284 *up, rt_int a_p7847);
static void yr997_InitChars(void) {
struct yf998 F;
memset((void *)&F, 0, sizeof F);
F.v3688 = INT64_C(0);
{ rt_int hi3693 = 127;
for (rt_int i3692 = 0; i3692 <= hi3693; i3692++) { F.c_3691 = i3692;
((rt_int *)(v959).p)[y_ix1(v959, F.c_3691)] = F.v3688;
((unsigned char *)(v970).p)[y_ix1(v970, F.v3688)] = F.c_3691;
F.v3688 = rt_range(rt_add(F.v3688, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3692 == hi3693) break;
}}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1002_IsLetter(unsigned char a_p1003) {
struct yf1004 F;
memset((void *)&F, 0, sizeof F);
F.p1003 = a_p1003;
{ rt_int rv3703 = ((((((F.p1003 >= 65)) && ((F.p1003 <= 90)))) || ((((F.p1003 >= 97)) && ((F.p1003 <= 122))))) || ((F.p1003 == 95)));
return rv3703; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1008_IsDigit(unsigned char a_p1009) {
struct yf1010 F;
memset((void *)&F, 0, sizeof F);
F.p1009 = a_p1009;
{ rt_int rv3708 = (((F.p1009 >= 48)) && ((F.p1009 <= 57)));
return rv3708; }
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
F.lo3727 = y_low(F.p1033, INT64_C(1));
F.hi3728 = y_high(F.p1033, INT64_C(1));
{ rt_int hi3732 = F.hi3728;
for (rt_int i3731 = F.lo3727; i3731 <= hi3732; i3731++) { F.c_3730 = i3731;
yr1025_SC(((unsigned char *)(F.p1033).p)[y_ix1(F.p1033, F.c_3730)]);
if (i3731 == hi3732) break;
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
F.v3736 = ((rt_int *)(v912).p)[y_ix1(v912, F.p1039)];
while ((F.v3736 < (rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.p1039)], ((rt_int *)(v914).p)[y_ix1(v914, F.p1039)])))) {
yr1025_SC(((unsigned char *)(v907).p)[y_ix1(v907, F.v3736)]);
F.v3736 = rt_range(rt_add(F.v3736, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1044_SI(rt_int a_p1045) {
struct yf1046 F;
memset((void *)&F, 0, sizeof F);
F.p1045 = a_p1045;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(24)}; y_desc_array(&F.yd_3751, 1, lo, hi, &y_d_byte); }
y_init(&F.yd_3751, &F.v3753);
F.v3755 = INT64_C(0);
F.v3758 = F.p1045;
if ((F.v3758 < INT64_C(0))) {
yr1025_SC(45);
F.v3758 = rt_range(rt_neg(F.v3758), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
for (;;) {
F.v3755 = rt_range(rt_add(F.v3755, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((unsigned char *)(F.v3753).p)[y_ix1(F.v3753, F.v3755)] = ((unsigned char *)(v970).p)[y_ix1(v970, rt_add((rt_mod(F.v3758, INT64_C(10))), INT64_C(48)))];
F.v3758 = rt_range(rt_div(F.v3758, INT64_C(10)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.v3758 == INT64_C(0))) {
goto yl_3762;
}
}
yl_3762: ;
while ((F.v3755 > INT64_C(0))) {
yr1025_SC(((unsigned char *)(F.v3753).p)[y_ix1(F.v3753, F.v3755)]);
F.v3755 = rt_range(rt_sub(F.v3755, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1050_SE(void) {
struct yf1051 F;
memset((void *)&F, 0, sizeof F);
F.v3777 = ((rt_int *)(v947).p)[y_ix1(v947, v949)];
v949 = rt_range(rt_sub(v949, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v916 = rt_range(rt_add(v916, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v912).p)[y_ix1(v912, v916)] = rt_range(rt_add(v909, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v914).p)[y_ix1(v914, v916)] = rt_range(rt_sub(v935, F.v3777), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo3788 = rt_add(F.v3777, INT64_C(1));
F.hi3789 = v935;
{ rt_int hi3793 = F.hi3789;
for (rt_int i3792 = F.lo3788; i3792 <= hi3793; i3792++) { F.c_3791 = i3792;
yr1014_PoolAdd(((unsigned char *)(v933).p)[y_ix1(v933, F.c_3791)]);
if (i3792 == hi3793) break;
}}
v935 = F.v3777;
{ rt_int rv3794 = rt_range(v916, INT64_C(0), INT64_C(4000000));
return rv3794; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1055_T(yarr a_p1057) {
struct yf1058 F;
memset((void *)&F, 0, sizeof F);
F.p1057 = a_p1057;
yr1020_SB();
yr1031_SA(F.p1057);
{ rt_int rv3797 = yr1050_SE();
return rv3797; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1062_Intern(rt_int a_p1063, rt_int a_p1064) {
struct yf1065 F;
memset((void *)&F, 0, sizeof F);
F.p1063 = a_p1063;
F.p1064 = a_p1064;
F.v3802 = INT64_C(0);
F.lo3812 = F.p1063;
F.hi3813 = rt_sub((rt_add(F.p1063, F.p1064)), INT64_C(1));
{ rt_int hi3817 = F.hi3813;
for (rt_int i3816 = F.lo3812; i3816 <= hi3817; i3816++) { F.c_3815 = i3816;
F.v3802 = rt_range(rt_mod((rt_add((rt_mul(F.v3802, INT64_C(31))), ((rt_int *)(v959).p)[y_ix1(v959, ((unsigned char *)(v907).p)[y_ix1(v907, F.c_3815)])])), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3816 == hi3817) break;
}}
for (;;) {
if ((((rt_int *)(v919).p)[y_ix1(v919, F.v3802)] == INT64_C(0))) {
v916 = rt_range(rt_add(v916, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v912).p)[y_ix1(v912, v916)] = F.p1063;
((rt_int *)(v914).p)[y_ix1(v914, v916)] = F.p1064;
((rt_int *)(v919).p)[y_ix1(v919, F.v3802)] = rt_range(v916, INT64_C(0), INT64_C(4000000));
{ rt_int rv3827 = rt_range(v916, INT64_C(0), INT64_C(4000000));
return rv3827; }
}
F.v3805 = ((rt_int *)(v919).p)[y_ix1(v919, F.v3802)];
if ((((rt_int *)(v914).p)[y_ix1(v914, F.v3805)] == F.p1064)) {
F.v3807 = 1;
F.lo3834 = INT64_C(0);
F.hi3835 = rt_sub(F.p1064, INT64_C(1));
{ rt_int hi3839 = F.hi3835;
for (rt_int i3838 = F.lo3834; i3838 <= hi3839; i3838++) { F.c_3837 = i3838;
if ((!(((unsigned char *)(v907).p)[y_ix1(v907, rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.v3805)], F.c_3837))] == ((unsigned char *)(v907).p)[y_ix1(v907, rt_add(F.p1063, F.c_3837))]))) {
F.v3807 = 0;
}
if (i3838 == hi3839) break;
}}
if (F.v3807) {
{ rt_int rv3843 = rt_range(F.v3805, INT64_C(0), INT64_C(4000000));
return rv3843; }
}
}
F.v3802 = rt_range(rt_mod((rt_add(F.v3802, INT64_C(1))), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yl_3823: ;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1069_Name(rt_int a_p1070) {
struct yf1071 F;
memset((void *)&F, 0, sizeof F);
F.p1070 = a_p1070;
{ rt_int rv3850 = yr1062_Intern(((rt_int *)(v912).p)[y_ix1(v912, F.p1070)], ((rt_int *)(v914).p)[y_ix1(v914, F.p1070)]);
return rv3850; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1075_N(yarr a_p1077) {
struct yf1078 F;
memset((void *)&F, 0, sizeof F);
F.p1077 = a_p1077;
{ rt_int rv3853 = yr1069_Name(yr1055_T(F.p1077));
return rv3853; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1082_TEq(rt_int a_p1083, rt_int a_p1084) {
struct yf1085 F;
memset((void *)&F, 0, sizeof F);
F.p1083 = a_p1083;
F.p1084 = a_p1084;
if ((F.p1083 == F.p1084)) {
{ rt_int rv3858 = 1;
return rv3858; }
}
if ((!(((rt_int *)(v914).p)[y_ix1(v914, F.p1083)] == ((rt_int *)(v914).p)[y_ix1(v914, F.p1084)]))) {
{ rt_int rv3860 = 0;
return rv3860; }
}
F.lo3866 = INT64_C(0);
F.hi3867 = rt_sub(((rt_int *)(v914).p)[y_ix1(v914, F.p1083)], INT64_C(1));
{ rt_int hi3871 = F.hi3867;
for (rt_int i3870 = F.lo3866; i3870 <= hi3871; i3870++) { F.c_3869 = i3870;
if ((!(((unsigned char *)(v907).p)[y_ix1(v907, rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.p1083)], F.c_3869))] == ((unsigned char *)(v907).p)[y_ix1(v907, rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.p1084)], F.c_3869))]))) {
{ rt_int rv3875 = 0;
return rv3875; }
}
if (i3870 == hi3871) break;
}}
{ rt_int rv3877 = 1;
return rv3877; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1089_TStarts(rt_int a_p1090, yarr a_p1092) {
struct yf1093 F;
memset((void *)&F, 0, sizeof F);
F.p1090 = a_p1090;
F.p1092 = a_p1092;
F.v3882 = INT64_C(0);
if ((((rt_int *)(v914).p)[y_ix1(v914, F.p1090)] < (rt_add((rt_sub(y_high(F.p1092, INT64_C(1)), y_low(F.p1092, INT64_C(1)))), INT64_C(1))))) {
{ rt_int rv3892 = 0;
return rv3892; }
}
F.lo3898 = y_low(F.p1092, INT64_C(1));
F.hi3899 = y_high(F.p1092, INT64_C(1));
{ rt_int hi3903 = F.hi3899;
for (rt_int i3902 = F.lo3898; i3902 <= hi3903; i3902++) { F.c_3901 = i3902;
if ((!(((unsigned char *)(v907).p)[y_ix1(v907, rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.p1090)], F.v3882))] == ((unsigned char *)(F.p1092).p)[y_ix1(F.p1092, F.c_3901)]))) {
{ rt_int rv3906 = 0;
return rv3906; }
}
F.v3882 = rt_range(rt_add(F.v3882, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3902 == hi3903) break;
}}
{ rt_int rv3910 = 1;
return rv3910; }
rt_raise(Y_X_NO_RETURN);
}
static unsigned char yr1097_TChar(rt_int a_p1098, rt_int a_p1099) {
struct yf1100 F;
memset((void *)&F, 0, sizeof F);
F.p1098 = a_p1098;
F.p1099 = a_p1099;
{ unsigned char rv3917 = ((unsigned char *)(v907).p)[y_ix1(v907, rt_sub((rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.p1098)], F.p1099)), INT64_C(1)))];
return rv3917; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1104_Put(yR134 * a_p1105, rt_int a_p1106) {
struct yf1107 F;
memset((void *)&F, 0, sizeof F);
F.p1105 = a_p1105;
F.p1106 = a_p1106;
({ F.v3922 = rt_alloc(sizeof(yR129)); });
(*(yR129 *)rt_nil_check(F.v3922)) = ((yR129){ .f_t = F.p1106, .f_next = ((void *)0) });
if ((((*F.p1105)).f_head == ((void *)0))) {
((*F.p1105)).f_head = F.v3922;
} else {
((*(yR129 *)rt_nil_check(((*F.p1105)).f_tail))).f_next = F.v3922;
}
((*F.p1105)).f_tail = F.v3922;
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
F.v3936 = ((rt_int *)(v912).p)[y_ix1(v912, F.p1140)];
while ((F.v3936 < (rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.p1140)], ((rt_int *)(v914).p)[y_ix1(v914, F.p1140)])))) {
({ unsigned char pv = ((unsigned char *)(v907).p)[y_ix1(v907, F.v3936)]; y_put(&v905, &pv, sizeof pv); });
F.v3936 = rt_range(rt_add(F.v3936, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1145_WriteBuf(yR134 a_p1146) {
struct yf1147 F;
memset((void *)&F, 0, sizeof F);
F.p1146 = a_p1146;
F.v3943 = (F.p1146).f_head;
while ((!(F.v3943 == ((void *)0)))) {
yr1139_WriteTxt(((*(yR129 *)rt_nil_check(F.v3943))).f_t);
({ unsigned char pv = 10; y_put(&v905, &pv, sizeof pv); });
F.v3943 = ((*(yR129 *)rt_nil_check(F.v3943))).f_next;
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
F.v3949 = yr1050_SE();
yr1139_WriteTxt(F.v3949);
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
F.v3959 = yr1050_SE();
yr1165_WriteTo(&v988, F.v3959);
({ unsigned char pv = 10; y_put(&v988, &pv, sizeof pv); });
yr1020_SB();
yr1031_SA(y_str("/* ", 3));
yr1038_ST(F.v3959);
yr1031_SA(y_str(" */", 3));
F.v3959 = yr1050_SE();
yr1104_Put(&v986, F.v3959);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1165_WriteTo(yfile * * a_p1166, rt_int a_p1167) {
struct yf1168 F;
memset((void *)&F, 0, sizeof F);
F.p1166 = a_p1166;
F.p1167 = a_p1167;
F.v3969 = ((rt_int *)(v912).p)[y_ix1(v912, F.p1167)];
while ((F.v3969 < (rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.p1167)], ((rt_int *)(v914).p)[y_ix1(v914, F.p1167)])))) {
({ unsigned char pv = ((unsigned char *)(v907).p)[y_ix1(v907, F.v3969)]; y_put(&(*F.p1166), &pv, sizeof pv); });
F.v3969 = rt_range(rt_add(F.v3969, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
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
F.v3981 = yr1050_SE();
yr1151_Fail(F.p1181, F.v3981);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1189_NewSerial(void) {
struct yf1190 F;
memset((void *)&F, 0, sizeof F);
v952 = rt_range(rt_add(v952, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
{ rt_int rv3985 = v952;
return rv3985; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1194_Fresh(yarr a_p1196) {
struct yf1197 F;
memset((void *)&F, 0, sizeof F);
F.p1196 = a_p1196;
F.v3989 = yr1189_NewSerial();
yr1020_SB();
yr1031_SA(F.p1196);
yr1044_SI(F.v3989);
{ rt_int rv3990 = yr1050_SE();
return rv3990; }
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
F.v3997 = yr1050_SE();
v916 = INT64_C(0);
F.v3993 = ((rt_int *)(v912).p)[y_ix1(v912, F.v3997)];
F.lo4014 = ((rt_int *)(v912).p)[y_ix1(v912, F.v3997)];
F.hi4015 = rt_sub((rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.v3997)], ((rt_int *)(v914).p)[y_ix1(v914, F.v3997)])), INT64_C(1));
{ rt_int hi4019 = F.hi4015;
for (rt_int i4018 = F.lo4014; i4018 <= hi4019; i4018++) { F.c_4017 = i4018;
if ((((unsigned char *)(v907).p)[y_ix1(v907, F.c_4017)] == 32)) {
F.v3995 = yr1062_Intern(F.v3993, rt_range(rt_sub(F.c_4017, F.v3993), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v3993 = rt_range(rt_add(F.c_4017, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i4018 == hi4019) break;
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
({ unsigned char g; y_get(&v903, &g, sizeof g); F.v4026 = g; });
yr1014_PoolAdd(F.v4026);
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
{ unsigned char rv4039 = 0;
return rv4039; }
}
{ unsigned char rv4040 = ((unsigned char *)(v907).p)[y_ix1(v907, F.p1842)];
return rv4040; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1847_EndsOperand(void) {
struct yf1848 F;
memset((void *)&F, 0, sizeof F);
if ((v1207 == INT64_C(0))) {
{ rt_int rv4048 = 0;
return rv4048; }
}
F.v4043 = ((rt_int *)(v1201).p)[y_ix1(v1201, v1207)];
F.v4045 = ((rt_int *)(v1203).p)[y_ix1(v1203, v1207)];
if ((((((((F.v4043 == v201)) || ((F.v4043 == v210))) || ((F.v4043 == v213))) || ((F.v4043 == v216))) || ((F.v4043 == v219))) || ((F.v4043 == v222)))) {
{ rt_int rv4050 = 1;
return rv4050; }
}
if ((F.v4043 == v207)) {
{ rt_int rv4051 = ((((F.v4045 == v591)) || ((F.v4045 == v597))) || ((F.v4045 == v612)));
return rv4051; }
}
if ((F.v4043 == v204)) {
{ rt_int rv4052 = (F.v4045 == v381);
return rv4052; }
}
{ rt_int rv4054 = 0;
return rv4054; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1852_DigitVal(unsigned char a_p1853) {
struct yf1854 F;
memset((void *)&F, 0, sizeof F);
F.p1853 = a_p1853;
if ((((F.p1853 >= 48)) && ((F.p1853 <= 57)))) {
{ rt_int rv4061 = rt_range(rt_sub(((rt_int *)(v959).p)[y_ix1(v959, F.p1853)], INT64_C(48)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return rv4061; }
}
if ((((F.p1853 >= 65)) && ((F.p1853 <= 70)))) {
{ rt_int rv4066 = rt_range(rt_sub(((rt_int *)(v959).p)[y_ix1(v959, F.p1853)], INT64_C(55)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return rv4066; }
}
{ rt_int rv4068 = INT64_C(99);
return rv4068; }
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
F.v4075 = yr1050_SE();
yr1151_Fail(v1219, F.v4075);
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
F.v4085 = INT64_C(10);
F.v4096 = 0;
F.v4099 = 0;
F.v4102 = INT64_C(0);
F.v4105 = INT64_C(0);
F.v4108 = INT64_C(0);
F.v4111 = INT64_C(0);
F.v4114 = INT64_C(0);
if ((!(v1222 == INT64_C(0)))) {
F.v4085 = v1222;
F.v4099 = 1;
}
v1222 = INT64_C(0);
F.v4088 = v1216;
yr1865_LexDigits(F.v4085, F.v4099);
F.v4090 = v1216;
if ((F.v4090 == F.v4088)) {
yr1858_LexError(y_str("a number has at least one digit (IV.B)", 38));
}
F.v4092 = v1216;
F.v4094 = v1216;
if ((((yr1841_At(v1216) == 46)) && ((!(yr1841_At(rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 46))))) {
F.v4096 = 1;
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4092 = v1216;
yr1865_LexDigits(F.v4085, F.v4099);
F.v4094 = v1216;
}
if ((yr1841_At(v1216) == 80)) {
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4111 = INT64_C(1);
if ((((((yr1841_At(v1216) == 45)) || ((yr1841_At(v1216) == 43)))) && yr1008_IsDigit(yr1841_At(rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))) {
if ((yr1841_At(v1216) == 45)) {
F.v4111 = INT64_C(-1);
}
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v4108 = INT64_C(0);
while (yr1008_IsDigit(yr1841_At(v1216))) {
if ((F.v4108 > INT64_C(1000))) {
yr1858_LexError(y_str("a fixed-point exponent beyond this implementation", 49));
}
F.v4108 = rt_range(rt_add((rt_mul(F.v4108, INT64_C(10))), yr1852_DigitVal(yr1841_At(v1216))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v4108 = rt_range(rt_mul(F.v4108, F.v4111), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4102 = INT64_C(0);
F.v4114 = rt_range(rt_sub(F.v4094, F.v4092), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo4155 = F.v4088;
F.hi4156 = rt_sub(F.v4094, INT64_C(1));
{ rt_int hi4160 = F.hi4156;
for (rt_int i4159 = F.lo4155; i4159 <= hi4160; i4159++) { F.c_4158 = i4159;
if ((((F.c_4158 < F.v4090)) || ((F.c_4158 >= F.v4092)))) {
F.v4105 = yr1852_DigitVal(((unsigned char *)(v907).p)[y_ix1(v907, F.c_4158)]);
if ((F.v4102 > (rt_div((rt_sub(v900, F.v4105)), F.v4085)))) {
yr1858_LexError(y_str("a fixed-point literal with more digits than this implementation holds", 69));
}
F.v4102 = rt_range(rt_add((rt_mul(F.v4102, F.v4085)), F.v4105), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i4159 == hi4160) break;
}}
if (F.p1873) {
F.v4102 = rt_range(rt_neg(F.v4102), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((v1240 >= INT64_C(200000))) {
yr1858_LexError(y_str("too many fixed-point literals", 29));
}
v1240 = rt_range(rt_add(v1240, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1234).p)[y_ix1(v1234, v1240)] = F.v4102;
((rt_int *)(v1236).p)[y_ix1(v1236, v1240)] = F.v4085;
((rt_int *)(v1238).p)[y_ix1(v1238, v1240)] = rt_range(rt_sub(F.v4108, F.v4114), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1834_AddTok(v213, v1240);
return;
}
if (F.v4096) {
if ((!(F.v4085 == INT64_C(10)))) {
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
F.lo4187 = F.v4088;
F.hi4188 = rt_sub(v1216, INT64_C(1));
{ rt_int hi4192 = F.hi4188;
for (rt_int i4191 = F.lo4187; i4191 <= hi4192; i4191++) { F.c_4190 = i4191;
yr1025_SC(((unsigned char *)(v907).p)[y_ix1(v907, F.c_4190)]);
if (i4191 == hi4192) break;
}}
F.v4117 = yr1050_SE();
yr1834_AddTok(v216, F.v4117);
return;
}
F.v4102 = INT64_C(0);
F.lo4197 = F.v4088;
F.hi4198 = rt_sub(F.v4090, INT64_C(1));
{ rt_int hi4202 = F.hi4198;
for (rt_int i4201 = F.lo4197; i4201 <= hi4202; i4201++) { F.c_4200 = i4201;
F.v4105 = yr1852_DigitVal(((unsigned char *)(v907).p)[y_ix1(v907, F.c_4200)]);
if ((F.v4102 > (rt_div((rt_sub(v900, F.v4105)), F.v4085)))) {
yr1858_LexError(y_str("integer literal too large", 25));
}
F.v4102 = rt_range(rt_add((rt_mul(F.v4102, F.v4085)), F.v4105), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i4201 == hi4202) break;
}}
if (F.p1873) {
F.v4102 = rt_range(rt_neg(F.v4102), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yr1834_AddTok(v210, F.v4102);
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
F.v4213 = v1216;
F.v4215 = INT64_C(0);
F.v4217 = 1;
while (F.v4217) {
if (((((yr1841_At(F.v4213) == 32)) || ((yr1841_At(F.v4213) == 9))) || ((yr1841_At(F.v4213) == 13)))) {
F.v4213 = rt_range(rt_add(F.v4213, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr1841_At(F.v4213) == 10)) {
F.v4215 = rt_range(rt_add(F.v4215, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4213 = rt_range(rt_add(F.v4213, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v4217 = 0;
}
}
if ((!(yr1841_At(F.v4213) == 34))) {
goto yl_4218;
}
v1219 = rt_range(rt_add(v1219, F.v4215), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1216 = F.v4213;
}
yl_4218: ;
F.v4211 = yr1050_SE();
yr1834_AddTok(v222, F.v4211);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1883_Lex(void) {
struct yf1884 F;
memset((void *)&F, 0, sizeof F);
v1216 = v1210;
while ((v1216 <= v1213)) {
F.v4246 = ((unsigned char *)(v907).p)[y_ix1(v907, v1216)];
if ((F.v4246 == 10)) {
v1219 = rt_range(rt_add(v1219, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((((F.v4246 == 32)) || ((F.v4246 == 9))) || ((F.v4246 == 13))) || ((F.v4246 == 12)))) {
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v4246 == 40)) && ((yr1841_At(rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 42)))) {
v1216 = rt_range(rt_add(v1216, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!((((yr1841_At(v1216) == 42)) && ((yr1841_At(rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 41)))))) {
if ((((yr1841_At(v1216) == 10)) || ((v1216 > v1213)))) {
yr1858_LexError(y_str("a comment must close on its line", 32));
}
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1216 = rt_range(rt_add(v1216, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr1008_IsDigit(F.v4246) || ((((v1222 == INT64_C(16))) && ((yr1852_DigitVal(F.v4246) < INT64_C(16))))))) {
yr1872_LexNumber(0);
} else if (((((((F.v4246 == 45)) || ((F.v4246 == 43)))) && (!yr1847_EndsOperand())) && ((yr1008_IsDigit(yr1841_At(rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || ((((v1222 == INT64_C(16))) && ((yr1852_DigitVal(yr1841_At(rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) < INT64_C(16))))))))) {
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1872_LexNumber((F.v4246 == 45));
} else if ((!(v1222 == INT64_C(0)))) {
yr1858_LexError(y_str("a BASE word is followed by a number (IV.B)", 42));
} else if (yr1002_IsLetter(F.v4246)) {
F.v4248 = v1216;
while ((yr1002_IsLetter(yr1841_At(v1216)) || yr1008_IsDigit(yr1841_At(v1216)))) {
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v4256 = yr1062_Intern(F.v4248, rt_range(rt_sub(v1216, F.v4248), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((F.v4256 == v246)) {
v1222 = INT64_C(2);
} else if ((F.v4256 == v249)) {
v1222 = INT64_C(8);
} else if ((F.v4256 == v252)) {
v1222 = INT64_C(10);
} else if ((F.v4256 == v255)) {
v1222 = INT64_C(16);
} else if ((F.v4256 <= v486)) {
yr1834_AddTok(v204, F.v4256);
} else {
yr1834_AddTok(v201, F.v4256);
}
} else if ((F.v4246 == 39)) {
F.v4248 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4250 = F.v4248;
while ((!(yr1841_At(F.v4250) == 39))) {
if (((((yr1841_At(F.v4250) == 10)) || ((yr1841_At(F.v4250) == 34))) || ((F.v4250 > v1213)))) {
yr1858_LexError(y_str("bad character literal", 21));
}
F.v4250 = rt_range(rt_add(F.v4250, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v4250 == F.v4248)) {
yr1858_LexError(y_str("empty character literal", 23));
}
F.v4256 = yr1062_Intern(F.v4248, rt_range(rt_sub(F.v4250, F.v4248), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1834_AddTok(v219, F.v4256);
v1216 = rt_range(rt_add(F.v4250, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v4246 == 34)) {
yr1878_LexString();
} else {
F.v4252 = INT64_C(0);
F.v4250 = rt_range(rt_add(v486, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((F.v4252 == INT64_C(0))) && ((F.v4250 <= v615)))) {
F.v4254 = ((rt_int *)(v914).p)[y_ix1(v914, F.v4250)];
F.v4260 = 1;
F.lo4335 = INT64_C(0);
F.hi4336 = rt_sub(F.v4254, INT64_C(1));
{ rt_int hi4340 = F.hi4336;
for (rt_int i4339 = F.lo4335; i4339 <= hi4340; i4339++) { F.c_4338 = i4339;
if ((!(yr1841_At(rt_range(rt_add(v1216, F.c_4338), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == ((unsigned char *)(v907).p)[y_ix1(v907, rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.v4250)], F.c_4338))]))) {
F.v4260 = 0;
}
if (i4339 == hi4340) break;
}}
if (F.v4260) {
F.v4252 = F.v4250;
}
F.v4250 = rt_range(rt_add(F.v4250, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v4252 == INT64_C(0))) {
yr1858_LexError(y_str("a character that is not in the language", 39));
}
yr1834_AddTok(v207, F.v4252);
v1216 = rt_range(rt_add(v1216, ((rt_int *)(v914).p)[y_ix1(v914, F.v4252)]), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
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
({ F.v4354 = rt_alloc(sizeof(yR99)); });
(*(yR99 *)rt_nil_check(F.v4354)) = ((yR99){ .f_kind = F.p1889, .f_line = F.p1890, .f_ival = INT64_C(0), .f_flag = INT64_C(0), .f_name = INT64_C(0), .f_text = INT64_C(0), .f_a = ((void *)0), .f_b = ((void *)0), .f_c = ((void *)0), .f_d = ((void *)0), .f_e = ((void *)0), .f_next = ((void *)0), .f_rep = ((void *)0), .f_sym = ((void *)0) });
{ void * rv4359 = F.v4354;
return rv4359; }
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
F.v4367 = INT64_C(0);
F.v4370 = F.p1904;
while ((!(F.v4370 == ((void *)0)))) {
F.v4367 = rt_range(rt_add(F.v4367, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4370 = ((*(yR99 *)rt_nil_check(F.v4370))).f_next;
}
{ rt_int rv4373 = F.v4367;
return rv4373; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1909_TK(void) {
struct yf1910 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv4375 = ((rt_int *)(v1201).p)[y_ix1(v1201, v1243)];
return rv4375; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1914_TV(void) {
struct yf1915 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv4377 = ((rt_int *)(v1203).p)[y_ix1(v1203, v1243)];
return rv4377; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1919_TLn(void) {
struct yf1920 F;
memset((void *)&F, 0, sizeof F);
{ rt_int rv4379 = ((rt_int *)(v1205).p)[y_ix1(v1205, v1243)];
return rv4379; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1924_IsAt(rt_int a_p1925, rt_int a_p1926) {
struct yf1927 F;
memset((void *)&F, 0, sizeof F);
F.p1925 = a_p1925;
F.p1926 = a_p1926;
F.v4384 = ((rt_int *)(v1201).p)[y_ix1(v1201, rt_add(v1243, F.p1925))];
{ rt_int rv4387 = (((((F.v4384 == v204)) || ((F.v4384 == v207)))) && ((((rt_int *)(v1203).p)[y_ix1(v1203, rt_add(v1243, F.p1925))] == F.p1926)));
return rv4387; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1931_Is(rt_int a_p1932) {
struct yf1933 F;
memset((void *)&F, 0, sizeof F);
F.p1932 = a_p1932;
{ rt_int rv4391 = yr1924_IsAt(INT64_C(0), F.p1932);
return rv4391; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1937_IsIdAt(rt_int a_p1938) {
struct yf1939 F;
memset((void *)&F, 0, sizeof F);
F.p1938 = a_p1938;
{ rt_int rv4395 = (((rt_int *)(v1201).p)[y_ix1(v1201, rt_add(v1243, F.p1938))] == v201);
return rv4395; }
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
{ rt_int rv4402 = 1;
return rv4402; }
}
{ rt_int rv4404 = 0;
return rv4404; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1954_TokText(void) {
struct yf1955 F;
memset((void *)&F, 0, sizeof F);
F.v4407 = yr1909_TK();
if ((((((F.v4407 == v201)) || ((F.v4407 == v204))) || ((F.v4407 == v207))) || ((F.v4407 == v219)))) {
{ rt_int rv4408 = rt_range(yr1914_TV(), INT64_C(0), INT64_C(4000000));
return rv4408; }
}
if ((F.v4407 == v198)) {
{ rt_int rv4410 = yr1055_T(y_str("the end of the text", 19));
return rv4410; }
}
if ((F.v4407 == v210)) {
yr1020_SB();
yr1044_SI(yr1914_TV());
{ rt_int rv4411 = yr1050_SE();
return rv4411; }
}
{ rt_int rv4413 = yr1055_T(y_str("a literal", 9));
return rv4413; }
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
F.v4417 = yr1050_SE();
yr1151_Fail(yr1919_TLn(), F.v4417);
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
F.v4422 = yr1050_SE();
yr1151_Fail(yr1919_TLn(), F.v4422);
}
F.v4422 = rt_range(yr1914_TV(), INT64_C(0), INT64_C(4000000));
yr1943_Skip();
{ rt_int rv4424 = F.v4422;
return rv4424; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1970_CloseName(rt_int a_p1971, rt_int a_p1972) {
struct yf1973 F;
memset((void *)&F, 0, sizeof F);
F.p1971 = a_p1971;
F.p1972 = a_p1972;
if (((((yr1909_TK() == v201)) || ((yr1909_TK() == v204))) || ((yr1909_TK() == v207)))) {
F.v4429 = rt_range(yr1914_TV(), INT64_C(0), INT64_C(4000000));
if ((F.v4429 == F.p1971)) {
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
F.v4433 = rt_range(yr1914_TV(), INT64_C(0), INT64_C(4000000));
if ((yr1909_TK() == v201)) {
yr1943_Skip();
{ rt_int rv4434 = F.v4433;
return rv4434; }
}
if ((((yr1909_TK() == v204)) && (((((((((F.v4433 == v384)) || ((F.v4433 == v231))) || ((F.v4433 == v393))) || ((F.v4433 == v270))) || ((F.v4433 == v372))) || ((F.v4433 == v483))) || ((F.v4433 == v354)))))) {
yr1943_Skip();
{ rt_int rv4435 = F.v4433;
return rv4435; }
}
if (((((((((((((yr1909_TK() == v207)) && ((!(F.v4433 == v588)))) && ((!(F.v4433 == v591)))) && ((!(F.v4433 == v594)))) && ((!(F.v4433 == v597)))) && ((!(F.v4433 == v600)))) && ((!(F.v4433 == v603)))) && ((!(F.v4433 == v606)))) && ((!(F.v4433 == v609)))) && ((!(F.v4433 == v531)))) && ((!(F.v4433 == v528))))) {
yr1943_Skip();
{ rt_int rv4436 = F.v4433;
return rv4436; }
}
yr1172_FailS(yr1919_TLn(), y_str("expected a name", 15));
{ rt_int rv4439 = INT64_C(0);
return rv4439; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1982_IsLabel(rt_int a_p1983) {
struct yf1984 F;
memset((void *)&F, 0, sizeof F);
F.p1983 = a_p1983;
F.v4443 = v1246;
while ((!(F.v4443 == ((void *)0)))) {
if ((((*(yR99 *)rt_nil_check(F.v4443))).f_name == F.p1983)) {
{ rt_int rv4445 = 1;
return rv4445; }
}
F.v4443 = ((*(yR99 *)rt_nil_check(F.v4443))).f_next;
}
{ rt_int rv4447 = 0;
return rv4447; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1988_ImportItem(void) {
struct yf1989 F;
memset((void *)&F, 0, sizeof F);
F.v4450 = yr1888_NewNode(v621, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4450))).f_name = yr1977_ExtendedId();
if ((yr1937_IsIdAt(INT64_C(0)) && ((yr1914_TV() == v1248)))) {
yr1943_Skip();
((*(yR99 *)rt_nil_check(F.v4450))).f_text = yr1965_Ident();
}
if (yr1948_Accept(v237)) {
((*(yR99 *)rt_nil_check(F.v4450))).f_ival = yr1977_ExtendedId();
}
{ void * rv4452 = F.v4450;
return rv4452; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1993_ParseModule(void) {
struct yf1994 F;
memset((void *)&F, 0, sizeof F);
F.v4455 = yr1888_NewNode(v618, yr1919_TLn());
F.v4457 = ((void *)0);
F.v4459 = ((void *)0);
F.v4461 = ((void *)0);
if (yr1948_Accept(v378)) {
((*(yR99 *)rt_nil_check(F.v4455))).f_flag = INT64_C(1);
} else {
yr1959_Expect(v375);
}
((*(yR99 *)rt_nil_check(F.v4455))).f_name = yr1965_Ident();
while (yr1948_Accept(v351)) {
for (;;) {
F.v4457 = yr1988_ImportItem();
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4455))).f_a, &F.v4459, F.v4457);
if ((!yr1948_Accept(v600))) {
goto yl_4465;
}
}
yl_4465: ;
yr1959_Expect(v603);
}
while (yr1948_Accept(v330)) {
F.v4463 = INT64_C(0);
if ((((yr1931_Is(v390) || yr1931_Is(v468)) || yr1931_Is(v423)) || yr1931_Is(v477))) {
F.v4463 = yr1914_TV();
yr1943_Skip();
}
for (;;) {
F.v4457 = yr1988_ImportItem();
((*(yR99 *)rt_nil_check(F.v4457))).f_flag = F.v4463;
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4455))).f_b, &F.v4461, F.v4457);
if ((!yr1948_Accept(v600))) {
goto yl_4467;
}
}
yl_4467: ;
yr1959_Expect(v603);
}
((*(yR99 *)rt_nil_check(F.v4455))).f_c = yr2003_ParseBlock();
if ((((*(yR99 *)rt_nil_check(F.v4455))).f_flag == INT64_C(1))) {
yr1959_Expect(v303);
} else {
yr1959_Expect(v300);
}
yr1970_CloseName(((*(yR99 *)rt_nil_check(F.v4455))).f_name, ((*(yR99 *)rt_nil_check(F.v4455))).f_line);
{ void * rv4469 = F.v4455;
return rv4469; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1998_IsDeclWord(void) {
struct yf1999 F;
memset((void *)&F, 0, sizeof F);
if ((!(yr1909_TK() == v204))) {
{ rt_int rv4474 = 0;
return rv4474; }
}
F.v4472 = yr1914_TV();
{ rt_int rv4475 = (((((((((((((F.v4472 == v264)) || ((F.v4472 == v477))) || ((F.v4472 == v366))) || ((F.v4472 == v471))) || ((F.v4472 == v432))) || ((F.v4472 == v342))) || ((F.v4472 == v414))) || ((F.v4472 == v375))) || ((F.v4472 == v378))) || ((F.v4472 == v459))) || ((F.v4472 == v360))) || ((F.v4472 == v417)));
return rv4475; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2003_ParseBlock(void) {
struct yf2004 F;
memset((void *)&F, 0, sizeof F);
F.v4478 = yr1888_NewNode(v624, yr1919_TLn());
F.v4480 = ((void *)0);
F.v4482 = v1246;
while (yr1998_IsDeclWord()) {
yr2030_ParseDeclGroup(&((*(yR99 *)rt_nil_check(F.v4478))).f_a, &F.v4480);
while (yr1948_Accept(v603)) {
}
}
if (yr1931_Is(v324)) {
((*(yR99 *)rt_nil_check(F.v4478))).f_b = yr2008_ParseHandler();
F.v4484 = ((*(yR99 *)rt_nil_check(F.v4478))).f_b;
if (yr1948_Accept(v603)) {
}
}
((*(yR99 *)rt_nil_check(F.v4478))).f_c = yr2094_ParseStatements(1);
v1246 = F.v4482;
{ void * rv4486 = F.v4478;
return rv4486; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2008_ParseHandler(void) {
struct yf2009 F;
memset((void *)&F, 0, sizeof F);
F.v4489 = yr1888_NewNode(v627, yr1919_TLn());
F.v4491 = ((void *)0);
F.v4493 = ((void *)0);
F.v4495 = ((void *)0);
F.v4497 = ((void *)0);
yr1959_Expect(v324);
while (yr1948_Accept(v261)) {
F.v4491 = yr1888_NewNode(v630, yr1919_TLn());
F.v4497 = ((void *)0);
for (;;) {
F.v4495 = yr1888_NewNode(v663, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4495))).f_name = yr1965_Ident();
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4491))).f_a, &F.v4497, F.v4495);
if ((!yr1948_Accept(v600))) {
goto yl_4498;
}
}
yl_4498: ;
yr1959_Expect(v528);
((*(yR99 *)rt_nil_check(F.v4491))).f_b = yr2094_ParseStatements(0);
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4489))).f_a, &F.v4493, F.v4491);
}
if (yr1948_Accept(v276)) {
((*(yR99 *)rt_nil_check(F.v4489))).f_flag = INT64_C(1);
((*(yR99 *)rt_nil_check(F.v4489))).f_b = yr2094_ParseStatements(0);
}
yr1959_Expect(v285);
{ void * rv4502 = F.v4489;
return rv4502; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2013_ParseNames(void) {
struct yf2014 F;
memset((void *)&F, 0, sizeof F);
F.v4505 = ((void *)0);
F.v4507 = ((void *)0);
F.v4509 = ((void *)0);
for (;;) {
F.v4509 = yr1888_NewNode(v663, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4509))).f_name = yr1965_Ident();
if (yr1948_Accept(v243)) {
((*(yR99 *)rt_nil_check(F.v4509))).f_a = yr2156_ParseExpr();
}
yr1895_Link(&F.v4505, &F.v4507, F.v4509);
if ((!yr1948_Accept(v600))) {
goto yl_4510;
}
}
yl_4510: ;
{ void * rv4511 = F.v4505;
return rv4511; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2018_SimpleEntry(rt_int a_p2019) {
struct yf2020 F;
memset((void *)&F, 0, sizeof F);
F.p2019 = a_p2019;
if ((F.p2019 == v264)) {
F.v4515 = yr1888_NewNode(v633, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4515))).f_a = yr2013_ParseNames();
yr1959_Expect(v606);
((*(yR99 *)rt_nil_check(F.v4515))).f_b = yr2059_ParseRep();
yr1959_Expect(v579);
((*(yR99 *)rt_nil_check(F.v4515))).f_c = yr2156_ParseExpr();
} else if ((F.p2019 == v477)) {
F.v4515 = yr1888_NewNode(v636, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4515))).f_a = yr2013_ParseNames();
yr1959_Expect(v606);
((*(yR99 *)rt_nil_check(F.v4515))).f_b = yr2059_ParseRep();
if (yr1948_Accept(v525)) {
((*(yR99 *)rt_nil_check(F.v4515))).f_c = yr2156_ParseExpr();
}
} else if ((F.p2019 == v471)) {
F.v4515 = yr1888_NewNode(v642, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4515))).f_name = yr1965_Ident();
yr1959_Expect(v579);
((*(yR99 *)rt_nil_check(F.v4515))).f_b = yr2079_ParseConcrete1();
} else {
F.v4515 = yr1888_NewNode(v645, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4515))).f_name = yr1965_Ident();
yr1959_Expect(v579);
((*(yR99 *)rt_nil_check(F.v4515))).f_b = yr2059_ParseRep();
}
{ void * rv4516 = F.v4515;
return rv4516; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2024_Continues(rt_int a_p2025) {
struct yf2026 F;
memset((void *)&F, 0, sizeof F);
F.p2025 = a_p2025;
if ((!((yr1931_Is(v603) && yr1937_IsIdAt(INT64_C(1)))))) {
{ rt_int rv4521 = 0;
return rv4521; }
}
if (yr1982_IsLabel(rt_range(((rt_int *)(v1203).p)[y_ix1(v1203, rt_add(v1243, INT64_C(1)))], INT64_C(0), INT64_C(4000000)))) {
{ rt_int rv4525 = 0;
return rv4525; }
}
if ((((F.p2025 == v264)) || ((F.p2025 == v477)))) {
{ rt_int rv4529 = ((yr1924_IsAt(INT64_C(2), v600) || yr1924_IsAt(INT64_C(2), v606)) || yr1924_IsAt(INT64_C(2), v243));
return rv4529; }
}
{ rt_int rv4531 = yr1924_IsAt(INT64_C(2), v579);
return rv4531; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2030_ParseDeclGroup(void * * a_p2031, void * * a_p2032) {
struct yf2033 F;
memset((void *)&F, 0, sizeof F);
F.p2031 = a_p2031;
F.p2032 = a_p2032;
F.v4536 = yr1914_TV();
if ((((((F.v4536 == v264)) || ((F.v4536 == v477))) || ((F.v4536 == v471))) || ((F.v4536 == v432)))) {
yr1943_Skip();
yr1895_Link(&(*F.p2031), &(*F.p2032), yr2018_SimpleEntry(F.v4536));
while (yr2024_Continues(F.v4536)) {
yr1943_Skip();
yr1895_Link(&(*F.p2031), &(*F.p2032), yr2018_SimpleEntry(F.v4536));
}
return;
}
if ((F.v4536 == v366)) {
F.v4538 = yr1888_NewNode(v639, yr1919_TLn());
yr1943_Skip();
F.v4542 = ((void *)0);
for (;;) {
F.v4540 = yr1888_NewNode(v663, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4540))).f_name = yr1965_Ident();
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4538))).f_a, &F.v4542, F.v4540);
if ((!yr1948_Accept(v600))) {
goto yl_4543;
}
}
yl_4543: ;
F.v4540 = ((*(yR99 *)rt_nil_check(F.v4538))).f_a;
while ((!(F.v4540 == ((void *)0)))) {
((*(yR99 *)rt_nil_check(F.v4538))).f_b = yr1888_NewNode(v663, ((*(yR99 *)rt_nil_check(F.v4540))).f_line);
((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v4538))).f_b))).f_name = ((*(yR99 *)rt_nil_check(F.v4540))).f_name;
((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v4538))).f_b))).f_next = v1246;
v1246 = ((*(yR99 *)rt_nil_check(F.v4538))).f_b;
F.v4540 = ((*(yR99 *)rt_nil_check(F.v4540))).f_next;
}
((*(yR99 *)rt_nil_check(F.v4538))).f_b = ((void *)0);
yr1895_Link(&(*F.p2031), &(*F.p2032), F.v4538);
return;
}
yr1895_Link(&(*F.p2031), &(*F.p2032), yr2037_ParseDecl());
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2037_ParseDecl(void) {
struct yf2038 F;
memset((void *)&F, 0, sizeof F);
F.v4552 = yr1914_TV();
F.v4554 = yr1919_TLn();
if ((((F.v4552 == v342)) || ((F.v4552 == v414)))) {
F.v4546 = yr1888_NewNode(v648, F.v4554);
yr1943_Skip();
if ((F.v4552 == v342)) {
((*(yR99 *)rt_nil_check(F.v4546))).f_flag = INT64_C(1);
}
if ((yr1931_Is(v333) || yr1931_Is(v429))) {
((*(yR99 *)rt_nil_check(F.v4546))).f_ival = yr1914_TV();
yr1943_Skip();
}
((*(yR99 *)rt_nil_check(F.v4546))).f_name = yr1977_ExtendedId();
yr2042_ParseFormals(F.v4546);
if (yr1948_Accept(v357)) {
((*(yR99 *)rt_nil_check(F.v4546))).f_e = yr1888_NewNode(v663, F.v4554);
}
((*(yR99 *)rt_nil_check(F.v4546))).f_c = yr2003_ParseBlock();
if ((F.v4552 == v342)) {
yr1959_Expect(v291);
} else {
yr1959_Expect(v306);
}
yr1970_CloseName(((*(yR99 *)rt_nil_check(F.v4546))).f_name, F.v4554);
{ void * rv4558 = F.v4546;
return rv4558; }
}
if ((((F.v4552 == v375)) || ((F.v4552 == v378)))) {
{ void * rv4559 = yr1993_ParseModule();
return rv4559; }
}
if ((F.v4552 == v459)) {
F.v4546 = yr1888_NewNode(v654, F.v4554);
yr1943_Skip();
((*(yR99 *)rt_nil_check(F.v4546))).f_name = yr1965_Ident();
yr1959_Expect(v588);
F.v4550 = ((void *)0);
for (;;) {
F.v4548 = yr1888_NewNode(v663, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4548))).f_name = yr1965_Ident();
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4546))).f_a, &F.v4550, F.v4548);
if ((!yr1948_Accept(v600))) {
goto yl_4560;
}
}
yl_4560: ;
yr1959_Expect(v591);
F.v4556 = v1243;
((*(yR99 *)rt_nil_check(F.v4546))).f_b = yr1993_ParseModule();
((*(yR99 *)rt_nil_check(F.v4546))).f_ival = F.v4556;
((*(yR99 *)rt_nil_check(F.v4546))).f_flag = v1243;
yr1959_Expect(v318);
yr1970_CloseName(((*(yR99 *)rt_nil_check(F.v4546))).f_name, F.v4554);
{ void * rv4561 = F.v4546;
return rv4561; }
}
if ((F.v4552 == v360)) {
F.v4546 = yr1888_NewNode(v657, F.v4554);
yr1943_Skip();
((*(yR99 *)rt_nil_check(F.v4546))).f_name = yr1965_Ident();
yr1959_Expect(v588);
F.v4550 = ((void *)0);
for (;;) {
F.v4548 = yr1888_NewNode(v663, yr1919_TLn());
if ((yr1909_TK() == v210)) {
((*(yR99 *)rt_nil_check(F.v4548))).f_flag = INT64_C(1);
((*(yR99 *)rt_nil_check(F.v4548))).f_ival = yr1914_TV();
yr1943_Skip();
} else {
((*(yR99 *)rt_nil_check(F.v4548))).f_name = yr1977_ExtendedId();
}
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4546))).f_a, &F.v4550, F.v4548);
if ((!yr1948_Accept(v600))) {
goto yl_4562;
}
}
yl_4562: ;
yr1959_Expect(v591);
{ void * rv4564 = F.v4546;
return rv4564; }
}
if ((F.v4552 == v417)) {
F.v4546 = yr1888_NewNode(v660, F.v4554);
yr1943_Skip();
((*(yR99 *)rt_nil_check(F.v4546))).f_name = yr1965_Ident();
yr2042_ParseFormals(F.v4546);
if ((!(((*(yR99 *)rt_nil_check(F.v4546))).f_b == ((void *)0)))) {
yr1172_FailS(F.v4554, y_str("a process returns no value", 26));
}
if (yr1948_Accept(v411)) {
((*(yR99 *)rt_nil_check(F.v4546))).f_d = yr2156_ParseExpr();
}
if (yr1948_Accept(v363)) {
((*(yR99 *)rt_nil_check(F.v4546))).f_e = yr2156_ParseExpr();
}
if (yr1948_Accept(v453)) {
F.v4548 = yr2156_ParseExpr();
}
((*(yR99 *)rt_nil_check(F.v4546))).f_c = yr2003_ParseBlock();
yr1959_Expect(v309);
yr1970_CloseName(((*(yR99 *)rt_nil_check(F.v4546))).f_name, F.v4554);
{ void * rv4566 = F.v4546;
return rv4566; }
}
yr1172_FailS(F.v4554, y_str("expected a declaration", 22));
{ void * rv4568 = ((void *)0);
return rv4568; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2042_ParseFormals(void * a_p2043) {
struct yf2044 F;
memset((void *)&F, 0, sizeof F);
F.p2043 = a_p2043;
F.v4572 = ((void *)0);
F.v4574 = ((void *)0);
if (yr1948_Accept(v438)) {
((*(yR99 *)rt_nil_check(F.p2043))).f_b = yr2059_ParseRep();
}
yr1959_Expect(v588);
while ((!yr1931_Is(v591))) {
if (yr1948_Accept(v264)) {
F.v4576 = v891;
} else if (yr1948_Accept(v399)) {
F.v4576 = v894;
} else if (yr1948_Accept(v477)) {
F.v4576 = v897;
} else {
yr1172_FailS(yr1919_TLn(), y_str("a formal parameter is CONST, OUT or VAR", 39));
}
for (;;) {
F.v4572 = yr1888_NewNode(v651, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4572))).f_ival = F.v4576;
((*(yR99 *)rt_nil_check(F.v4572))).f_a = yr2013_ParseNames();
yr1959_Expect(v606);
((*(yR99 *)rt_nil_check(F.v4572))).f_b = yr2048_ParseFormalRep();
yr1895_Link(&((*(yR99 *)rt_nil_check(F.p2043))).f_a, &F.v4574, F.v4572);
if ((!((((yr1931_Is(v603) || yr1931_Is(v600))) && yr1937_IsIdAt(INT64_C(1)))))) {
goto yl_4578;
}
yr1943_Skip();
}
yl_4578: ;
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
F.v4582 = yr1888_NewNode(v690, yr1919_TLn());
yr1943_Skip();
yr1943_Skip();
((*(yR99 *)rt_nil_check(F.v4582))).f_a = yr2156_ParseExpr();
yr1943_Skip();
yr1959_Expect(v387);
((*(yR99 *)rt_nil_check(F.v4582))).f_b = yr2059_ParseRep();
yr1959_Expect(v591);
{ void * rv4588 = F.v4582;
return rv4588; }
}
if (yr1931_Is(v456)) {
F.v4582 = yr1888_NewNode(v693, yr1919_TLn());
yr1943_Skip();
{ void * rv4589 = F.v4582;
return rv4589; }
}
{ void * rv4590 = yr2059_ParseRep();
return rv4590; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2053_IsStructWord(rt_int a_p2054) {
struct yf2055 F;
memset((void *)&F, 0, sizeof F);
F.p2054 = a_p2054;
F.v4594 = ((rt_int *)(v1203).p)[y_ix1(v1203, rt_add(v1243, F.p2054))];
if ((!(((rt_int *)(v1201).p)[y_ix1(v1201, rt_add(v1243, F.p2054))] == v204))) {
{ rt_int rv4598 = 0;
return rv4598; }
}
{ rt_int rv4599 = (((((((((F.v4594 == v474)) || ((F.v4594 == v396))) || ((F.v4594 == v228))) || ((F.v4594 == v234))) || ((F.v4594 == v426))) || ((F.v4594 == v336))) || ((F.v4594 == v405))) || ((F.v4594 == v447)));
return rv4599; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2059_ParseRep(void) {
struct yf2060 F;
memset((void *)&F, 0, sizeof F);
if ((yr1937_IsIdAt(INT64_C(0)) && ((yr2053_IsStructWord(INT64_C(1)) || ((yr1937_IsIdAt(INT64_C(1)) && yr1924_IsAt(INT64_C(2), v594))))))) {
F.v4602 = yr1965_Ident();
F.v4604 = yr2064_ParseConcrete();
((*(yR99 *)rt_nil_check(F.v4604))).f_text = F.v4602;
{ void * rv4609 = F.v4604;
return rv4609; }
}
{ void * rv4610 = yr2064_ParseConcrete();
return rv4610; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2064_ParseConcrete(void) {
struct yf2065 F;
memset((void *)&F, 0, sizeof F);
F.v4613 = yr2079_ParseConcrete1();
if (yr1948_Accept(v402)) {
if (((((yr1909_TK() == v210)) || ((yr1909_TK() == v201))) || yr1931_Is(v588))) {
F.v4615 = yr2161_ParseSimple();
}
}
if (yr1948_Accept(v225)) {
F.v4615 = yr2161_ParseSimple();
}
{ void * rv4616 = F.v4613;
return rv4616; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2069_ParseIds(void) {
struct yf2070 F;
memset((void *)&F, 0, sizeof F);
F.v4619 = ((void *)0);
F.v4621 = ((void *)0);
F.v4623 = ((void *)0);
for (;;) {
F.v4623 = yr1888_NewNode(v663, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4623))).f_name = yr1965_Ident();
yr1895_Link(&F.v4619, &F.v4621, F.v4623);
if ((!yr1948_Accept(v600))) {
goto yl_4624;
}
}
yl_4624: ;
{ void * rv4625 = F.v4619;
return rv4625; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2074_ParseFieldGroups(void) {
struct yf2075 F;
memset((void *)&F, 0, sizeof F);
F.v4628 = ((void *)0);
F.v4630 = ((void *)0);
F.v4632 = ((void *)0);
while ((yr1931_Is(v264) || yr1931_Is(v477))) {
F.v4634 = yr1914_TV();
yr1943_Skip();
for (;;) {
F.v4632 = yr1888_NewNode(v699, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4632))).f_ival = F.v4634;
((*(yR99 *)rt_nil_check(F.v4632))).f_a = yr2013_ParseNames();
yr1959_Expect(v606);
((*(yR99 *)rt_nil_check(F.v4632))).f_b = yr2059_ParseRep();
yr1895_Link(&F.v4628, &F.v4630, F.v4632);
if ((!((yr1931_Is(v603) && yr1937_IsIdAt(INT64_C(1)))))) {
goto yl_4635;
}
yr1943_Skip();
}
yl_4635: ;
if ((!yr1948_Accept(v603))) {
{ void * rv4637 = F.v4628;
return rv4637; }
}
}
{ void * rv4638 = F.v4628;
return rv4638; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2079_ParseConcrete1(void) {
struct yf2080 F;
memset((void *)&F, 0, sizeof F);
F.v4655 = yr1919_TLn();
if ((yr1909_TK() == v201)) {
F.v4641 = yr1888_NewNode(v666, F.v4655);
((*(yR99 *)rt_nil_check(F.v4641))).f_name = yr1965_Ident();
((*(yR99 *)rt_nil_check(F.v4641))).f_a = yr2084_ParseQualifier();
{ void * rv4656 = F.v4641;
return rv4656; }
}
if ((!(yr1909_TK() == v204))) {
yr1172_FailS(F.v4655, y_str("expected a representation", 25));
}
F.v4653 = yr1914_TV();
if ((((F.v4653 == v474)) || ((F.v4653 == v396)))) {
F.v4641 = yr1888_NewNode(v669, F.v4655);
if ((F.v4653 == v396)) {
((*(yR99 *)rt_nil_check(F.v4641))).f_flag = INT64_C(1);
}
yr1943_Skip();
yr1959_Expect(v588);
((*(yR99 *)rt_nil_check(F.v4641))).f_a = yr2069_ParseIds();
yr1959_Expect(v591);
((*(yR99 *)rt_nil_check(F.v4641))).f_b = yr2084_ParseQualifier();
{ void * rv4659 = F.v4641;
return rv4659; }
}
if ((F.v4653 == v228)) {
F.v4641 = yr1888_NewNode(v672, F.v4655);
yr1943_Skip();
yr1959_Expect(v588);
F.v4651 = ((void *)0);
for (;;) {
if ((!(yr1909_TK() == v219))) {
yr1172_FailS(yr1919_TLn(), y_str("an ALPHABET lists character literals", 36));
}
F.v4649 = yr1888_NewNode(v762, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4649))).f_text = rt_range(yr1914_TV(), INT64_C(0), INT64_C(4000000));
yr1943_Skip();
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4641))).f_a, &F.v4651, F.v4649);
if ((!yr1948_Accept(v600))) {
goto yl_4660;
}
}
yl_4660: ;
yr1959_Expect(v591);
((*(yR99 *)rt_nil_check(F.v4641))).f_b = yr2084_ParseQualifier();
{ void * rv4662 = F.v4641;
return rv4662; }
}
if ((F.v4653 == v234)) {
F.v4641 = yr1888_NewNode(v675, F.v4655);
yr1943_Skip();
yr1959_Expect(v588);
F.v4651 = ((void *)0);
for (;;) {
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4641))).f_a, &F.v4651, yr2059_ParseRep());
if ((!yr1948_Accept(v600))) {
goto yl_4663;
}
}
yl_4663: ;
yr1959_Expect(v387);
((*(yR99 *)rt_nil_check(F.v4641))).f_b = yr2059_ParseRep();
yr1959_Expect(v591);
{ void * rv4664 = F.v4641;
return rv4664; }
}
if ((F.v4653 == v426)) {
F.v4641 = yr1888_NewNode(v678, F.v4655);
yr1943_Skip();
((*(yR99 *)rt_nil_check(F.v4641))).f_a = yr2074_ParseFieldGroups();
if (yr1948_Accept(v444)) {
F.v4643 = yr1888_NewNode(v702, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4643))).f_name = yr1965_Ident();
yr1959_Expect(v606);
((*(yR99 *)rt_nil_check(F.v4643))).f_b = yr2059_ParseRep();
F.v4647 = ((void *)0);
while (yr1948_Accept(v261)) {
F.v4645 = yr1888_NewNode(v705, yr1919_TLn());
F.v4651 = ((void *)0);
for (;;) {
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4645))).f_a, &F.v4651, yr2156_ParseExpr());
if ((!yr1948_Accept(v600))) {
goto yl_4665;
}
}
yl_4665: ;
yr1959_Expect(v528);
((*(yR99 *)rt_nil_check(F.v4645))).f_b = yr2074_ParseFieldGroups();
while (yr1948_Accept(v603)) {
}
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4643))).f_a, &F.v4647, F.v4645);
}
yr1959_Expect(v315);
if (yr1948_Accept(v603)) {
}
((*(yR99 *)rt_nil_check(F.v4641))).f_b = F.v4643;
}
yr1959_Expect(v312);
{ void * rv4666 = F.v4641;
return rv4666; }
}
if (((((F.v4653 == v336)) || ((F.v4653 == v405))) || ((F.v4653 == v447)))) {
if ((F.v4653 == v336)) {
F.v4641 = yr1888_NewNode(v681, F.v4655);
} else if ((F.v4653 == v405)) {
F.v4641 = yr1888_NewNode(v684, F.v4655);
} else {
F.v4641 = yr1888_NewNode(v687, F.v4655);
}
yr1943_Skip();
yr1959_Expect(v588);
((*(yR99 *)rt_nil_check(F.v4641))).f_a = yr2059_ParseRep();
yr1959_Expect(v591);
{ void * rv4667 = F.v4641;
return rv4667; }
}
yr1172_FailS(F.v4655, y_str("expected a representation", 25));
{ void * rv4669 = ((void *)0);
return rv4669; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2084_ParseQualifier(void) {
struct yf2085 F;
memset((void *)&F, 0, sizeof F);
if ((!yr1931_Is(v594))) {
{ void * rv4673 = ((void *)0);
return rv4673; }
}
F.v4672 = yr1888_NewNode(v696, yr1919_TLn());
yr1943_Skip();
((*(yR99 *)rt_nil_check(F.v4672))).f_a = yr2156_ParseExpr();
yr1959_Expect(v531);
((*(yR99 *)rt_nil_check(F.v4672))).f_b = yr2156_ParseExpr();
yr1959_Expect(v597);
if (yr1948_Accept(v441)) {
((*(yR99 *)rt_nil_check(F.v4672))).f_c = yr2161_ParseSimple();
} else if (yr1948_Accept(v408)) {
((*(yR99 *)rt_nil_check(F.v4672))).f_d = yr2161_ParseSimple();
}
{ void * rv4674 = F.v4672;
return rv4674; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2089_IsStop(void) {
struct yf2090 F;
memset((void *)&F, 0, sizeof F);
if ((yr1909_TK() == v198)) {
{ rt_int rv4679 = 1;
return rv4679; }
}
if ((!(yr1909_TK() == v204))) {
{ rt_int rv4681 = 0;
return rv4681; }
}
F.v4677 = yr1914_TV();
{ rt_int rv4682 = ((((((((((((((((F.v4677 == v279)) || ((F.v4677 == v276))) || ((F.v4677 == v294))) || ((F.v4677 == v261))) || ((F.v4677 == v315))) || ((F.v4677 == v321))) || ((F.v4677 == v288))) || ((F.v4677 == v297))) || ((F.v4677 == v282))) || ((F.v4677 == v285))) || ((F.v4677 == v306))) || ((F.v4677 == v291))) || ((F.v4677 == v309))) || ((F.v4677 == v300))) || ((F.v4677 == v303)));
return rv4682; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2094_ParseStatements(rt_int a_p2095) {
struct yf2096 F;
memset((void *)&F, 0, sizeof F);
F.p2095 = a_p2095;
F.v4686 = ((void *)0);
F.v4688 = ((void *)0);
F.v4690 = ((void *)0);
for (;;) {
while (yr1948_Accept(v603)) {
}
if (yr2089_IsStop()) {
goto yl_4693;
}
F.v4692 = INT64_C(0);
if (((F.p2095 && yr1937_IsIdAt(INT64_C(0))) && yr1924_IsAt(INT64_C(1), v606))) {
F.v4692 = yr1965_Ident();
yr1943_Skip();
}
F.v4690 = yr2100_ParseStatement();
((*(yR99 *)rt_nil_check(F.v4690))).f_text = F.v4692;
yr1895_Link(&F.v4686, &F.v4688, F.v4690);
if ((!yr1931_Is(v603))) {
goto yl_4693;
}
}
yl_4693: ;
{ void * rv4697 = F.v4686;
return rv4697; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2100_ParseStatement(void) {
struct yf2101 F;
memset((void *)&F, 0, sizeof F);
F.v4714 = yr1919_TLn();
if ((yr1909_TK() == v204)) {
F.v4712 = yr1914_TV();
if ((F.v4712 == v240)) {
yr1943_Skip();
F.v4700 = yr1888_NewNode(v714, F.v4714);
((*(yR99 *)rt_nil_check(F.v4700))).f_a = yr2156_ParseExpr();
{ void * rv4715 = F.v4700;
return rv4715; }
}
if ((F.v4712 == v345)) {
yr1943_Skip();
F.v4700 = yr1888_NewNode(v717, F.v4714);
((*(yR99 *)rt_nil_check(F.v4700))).f_name = yr1965_Ident();
{ void * rv4716 = F.v4700;
return rv4716; }
}
if ((F.v4712 == v327)) {
yr1943_Skip();
F.v4700 = yr1888_NewNode(v720, F.v4714);
((*(yR99 *)rt_nil_check(F.v4700))).f_name = yr1965_Ident();
{ void * rv4717 = F.v4700;
return rv4717; }
}
if ((F.v4712 == v435)) {
yr1943_Skip();
F.v4700 = yr1888_NewNode(v723, F.v4714);
if ((!((yr1931_Is(v603) || yr2089_IsStop())))) {
((*(yR99 *)rt_nil_check(F.v4700))).f_a = yr2156_ParseExpr();
}
{ void * rv4718 = F.v4700;
return rv4718; }
}
if ((F.v4712 == v462)) {
yr1943_Skip();
{ void * rv4719 = yr1888_NewNode(v726, F.v4714);
return rv4719; }
}
if ((F.v4712 == v420)) {
yr1943_Skip();
F.v4700 = yr1888_NewNode(v729, F.v4714);
if (yr1937_IsIdAt(INT64_C(0))) {
((*(yR99 *)rt_nil_check(F.v4700))).f_name = yr1965_Ident();
}
{ void * rv4721 = F.v4700;
return rv4721; }
}
if ((F.v4712 == v348)) {
yr1943_Skip();
F.v4700 = yr1888_NewNode(v732, F.v4714);
F.v4704 = ((void *)0);
F.v4702 = yr1888_NewNode(v750, F.v4714);
((*(yR99 *)rt_nil_check(F.v4702))).f_a = yr2156_ParseExpr();
yr1959_Expect(v465);
((*(yR99 *)rt_nil_check(F.v4702))).f_b = yr2094_ParseStatements(0);
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4700))).f_a, &F.v4704, F.v4702);
while (yr1931_Is(v279)) {
F.v4702 = yr1888_NewNode(v750, yr1919_TLn());
yr1943_Skip();
((*(yR99 *)rt_nil_check(F.v4702))).f_a = yr2156_ParseExpr();
yr1959_Expect(v465);
((*(yR99 *)rt_nil_check(F.v4702))).f_b = yr2094_ParseStatements(0);
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4700))).f_a, &F.v4704, F.v4702);
}
if (yr1948_Accept(v276)) {
((*(yR99 *)rt_nil_check(F.v4700))).f_flag = INT64_C(1);
((*(yR99 *)rt_nil_check(F.v4700))).f_b = yr2094_ParseStatements(0);
}
yr1959_Expect(v294);
{ void * rv4726 = F.v4700;
return rv4726; }
}
if ((F.v4712 == v444)) {
yr1943_Skip();
F.v4700 = yr1888_NewNode(v735, F.v4714);
((*(yR99 *)rt_nil_check(F.v4700))).f_a = yr2156_ParseExpr();
F.v4704 = ((void *)0);
while (yr1931_Is(v261)) {
F.v4702 = yr1888_NewNode(v750, yr1919_TLn());
yr1943_Skip();
F.v4708 = ((void *)0);
for (;;) {
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4702))).f_a, &F.v4708, yr2156_ParseExpr());
if ((!yr1948_Accept(v600))) {
goto yl_4727;
}
}
yl_4727: ;
yr1959_Expect(v528);
((*(yR99 *)rt_nil_check(F.v4702))).f_b = yr2094_ParseStatements(0);
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4700))).f_b, &F.v4704, F.v4702);
}
if (yr1948_Accept(v276)) {
((*(yR99 *)rt_nil_check(F.v4700))).f_flag = INT64_C(1);
((*(yR99 *)rt_nil_check(F.v4700))).f_c = yr2094_ParseStatements(0);
}
yr1959_Expect(v315);
{ void * rv4731 = F.v4700;
return rv4731; }
}
if ((F.v4712 == v480)) {
yr1943_Skip();
F.v4700 = yr1888_NewNode(v738, F.v4714);
((*(yR99 *)rt_nil_check(F.v4700))).f_a = yr2156_ParseExpr();
yr1959_Expect(v273);
((*(yR99 *)rt_nil_check(F.v4700))).f_b = yr2094_ParseStatements(0);
yr1959_Expect(v321);
{ void * rv4733 = F.v4700;
return rv4733; }
}
if ((F.v4712 == v339)) {
yr1943_Skip();
F.v4700 = yr1888_NewNode(v741, F.v4714);
((*(yR99 *)rt_nil_check(F.v4700))).f_name = yr1965_Ident();
yr1959_Expect(v606);
((*(yR99 *)rt_nil_check(F.v4700))).f_a = yr2059_ParseRep();
yr1959_Expect(v273);
((*(yR99 *)rt_nil_check(F.v4700))).f_b = yr2094_ParseStatements(0);
yr1959_Expect(v288);
{ void * rv4735 = F.v4700;
return rv4735; }
}
if ((F.v4712 == v369)) {
yr1943_Skip();
F.v4700 = yr1888_NewNode(v744, F.v4714);
((*(yR99 *)rt_nil_check(F.v4700))).f_name = yr1965_Ident();
((*(yR99 *)rt_nil_check(F.v4700))).f_b = yr2094_ParseStatements(0);
yr1959_Expect(v297);
yr1970_CloseName(((*(yR99 *)rt_nil_check(F.v4700))).f_name, F.v4714);
{ void * rv4737 = F.v4700;
return rv4737; }
}
if ((((F.v4712 == v258)) || ((F.v4712 == v450)))) {
F.v4700 = yr1888_NewNode(v747, F.v4714);
if (yr1948_Accept(v450)) {
((*(yR99 *)rt_nil_check(F.v4700))).f_flag = INT64_C(1);
}
yr1959_Expect(v258);
((*(yR99 *)rt_nil_check(F.v4700))).f_a = yr2003_ParseBlock();
yr1959_Expect(v282);
{ void * rv4739 = F.v4700;
return rv4739; }
}
}
F.v4710 = yr2187_ParseDesignator();
if (yr1948_Accept(v525)) {
F.v4700 = yr1888_NewNode(v708, F.v4714);
((*(yR99 *)rt_nil_check(F.v4700))).f_a = F.v4710;
((*(yR99 *)rt_nil_check(F.v4700))).f_b = yr2156_ParseExpr();
{ void * rv4740 = F.v4700;
return rv4740; }
}
if ((!(((*(yR99 *)rt_nil_check(F.v4710))).f_kind == v774))) {
yr1172_FailS(F.v4714, y_str("expected a statement", 20));
}
F.v4700 = yr1888_NewNode(v711, F.v4714);
((*(yR99 *)rt_nil_check(F.v4700))).f_a = F.v4710;
{ void * rv4742 = F.v4700;
return rv4742; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2105_OpAt(void) {
struct yf2106 F;
memset((void *)&F, 0, sizeof F);
if ((((yr1909_TK() == v207)) || ((yr1909_TK() == v204)))) {
{ rt_int rv4744 = rt_range(yr1914_TV(), INT64_C(0), INT64_C(4000000));
return rv4744; }
}
{ rt_int rv4746 = INT64_C(0);
return rv4746; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2110_IsRel(rt_int a_p2111) {
struct yf2112 F;
memset((void *)&F, 0, sizeof F);
F.p2111 = a_p2111;
{ rt_int rv4749 = ((((((((((((((((((((F.p2111 == v354)) || ((F.p2111 == v564))) || ((F.p2111 == v579))) || ((F.p2111 == v582))) || ((F.p2111 == v534))) || ((F.p2111 == v585))) || ((F.p2111 == v537))) || ((F.p2111 == v540))) || ((F.p2111 == v495))) || ((F.p2111 == v543))) || ((F.p2111 == v498))) || ((F.p2111 == v546))) || ((F.p2111 == v507))) || ((F.p2111 == v501))) || ((F.p2111 == v489))) || ((F.p2111 == v549))) || ((F.p2111 == v510))) || ((F.p2111 == v504))) || ((F.p2111 == v492)));
return rv4749; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2116_IsAssocMul(rt_int a_p2117) {
struct yf2118 F;
memset((void *)&F, 0, sizeof F);
F.p2117 = a_p2117;
{ rt_int rv4752 = (((F.p2117 == v573)) || ((F.p2117 == v231)));
return rv4752; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2122_IsNonAssocMul(rt_int a_p2123) {
struct yf2124 F;
memset((void *)&F, 0, sizeof F);
F.p2123 = a_p2123;
{ rt_int rv4755 = ((((((((F.p2123 == v576)) || ((F.p2123 == v270))) || ((F.p2123 == v372))) || ((F.p2123 == v552))) || ((F.p2123 == v513))) || ((F.p2123 == v555))) || ((F.p2123 == v516)));
return rv4755; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2128_IsAssocAdd(rt_int a_p2129) {
struct yf2130 F;
memset((void *)&F, 0, sizeof F);
F.p2129 = a_p2129;
{ rt_int rv4758 = (((F.p2129 == v567)) || ((F.p2129 == v393)));
return rv4758; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2134_IsNonAssocAdd(rt_int a_p2135) {
struct yf2136 F;
memset((void *)&F, 0, sizeof F);
F.p2135 = a_p2135;
{ rt_int rv4761 = (((((((F.p2135 == v570)) || ((F.p2135 == v483))) || ((F.p2135 == v558))) || ((F.p2135 == v519))) || ((F.p2135 == v561))) || ((F.p2135 == v522)));
return rv4761; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2140_Bin(rt_int a_p2141, void * a_p2142, void * a_p2143, rt_int a_p2144) {
struct yf2145 F;
memset((void *)&F, 0, sizeof F);
F.p2141 = a_p2141;
F.p2142 = a_p2142;
F.p2143 = a_p2143;
F.p2144 = a_p2144;
F.v4768 = yr1888_NewNode(v792, F.p2144);
((*(yR99 *)rt_nil_check(F.v4768))).f_name = F.p2141;
((*(yR99 *)rt_nil_check(F.v4768))).f_a = F.p2142;
((*(yR99 *)rt_nil_check(F.v4768))).f_b = F.p2143;
{ void * rv4769 = F.v4768;
return rv4769; }
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
F.v4774 = yr1050_SE();
yr1151_Fail(F.p2151, F.v4774);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2156_ParseExpr(void) {
struct yf2157 F;
memset((void *)&F, 0, sizeof F);
F.v4782 = yr1919_TLn();
F.v4778 = yr2161_ParseSimple();
F.v4780 = yr2105_OpAt();
if (yr2110_IsRel(F.v4780)) {
yr1943_Skip();
F.v4778 = yr2140_Bin(F.v4780, F.v4778, yr2161_ParseSimple(), F.v4782);
if (yr2110_IsRel(yr2105_OpAt())) {
yr2149_NeedParens(F.v4780, F.v4782);
}
}
{ void * rv4783 = F.v4778;
return rv4783; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2161_ParseSimple(void) {
struct yf2162 F;
memset((void *)&F, 0, sizeof F);
F.v4792 = yr1919_TLn();
if (yr1931_Is(v570)) {
yr1943_Skip();
F.v4788 = yr1888_NewNode(v789, F.v4792);
((*(yR99 *)rt_nil_check(F.v4788))).f_a = yr2166_ParseTerm();
F.v4790 = yr2105_OpAt();
if ((yr2128_IsAssocAdd(F.v4790) || yr2134_IsNonAssocAdd(F.v4790))) {
yr2149_NeedParens(rt_range(v570, INT64_C(0), INT64_C(4000000)), F.v4792);
}
{ void * rv4793 = F.v4788;
return rv4793; }
}
F.v4786 = yr2166_ParseTerm();
F.v4790 = yr2105_OpAt();
if (yr2134_IsNonAssocAdd(F.v4790)) {
yr1943_Skip();
F.v4786 = yr2140_Bin(F.v4790, F.v4786, yr2166_ParseTerm(), F.v4792);
if ((yr2128_IsAssocAdd(yr2105_OpAt()) || yr2134_IsNonAssocAdd(yr2105_OpAt()))) {
yr2149_NeedParens(F.v4790, F.v4792);
}
{ void * rv4794 = F.v4786;
return rv4794; }
}
while (yr2128_IsAssocAdd(F.v4790)) {
yr1943_Skip();
F.v4786 = yr2140_Bin(F.v4790, F.v4786, yr2166_ParseTerm(), F.v4792);
if (yr2134_IsNonAssocAdd(yr2105_OpAt())) {
yr2149_NeedParens(yr2105_OpAt(), F.v4792);
}
F.v4790 = yr2105_OpAt();
}
{ void * rv4795 = F.v4786;
return rv4795; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2166_ParseTerm(void) {
struct yf2167 F;
memset((void *)&F, 0, sizeof F);
F.v4802 = yr1919_TLn();
F.v4798 = yr2182_ParseFactor();
F.v4800 = yr2105_OpAt();
if (yr2122_IsNonAssocMul(F.v4800)) {
yr1943_Skip();
F.v4798 = yr2140_Bin(F.v4800, F.v4798, yr2182_ParseFactor(), F.v4802);
if ((yr2116_IsAssocMul(yr2105_OpAt()) || yr2122_IsNonAssocMul(yr2105_OpAt()))) {
yr2149_NeedParens(F.v4800, F.v4802);
}
{ void * rv4803 = F.v4798;
return rv4803; }
}
while (yr2116_IsAssocMul(F.v4800)) {
yr1943_Skip();
F.v4798 = yr2140_Bin(F.v4800, F.v4798, yr2182_ParseFactor(), F.v4802);
if (yr2122_IsNonAssocMul(yr2105_OpAt())) {
yr2149_NeedParens(yr2105_OpAt(), F.v4802);
}
F.v4800 = yr2105_OpAt();
}
{ void * rv4804 = F.v4798;
return rv4804; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2171_IsLiteralAt(rt_int a_p2172) {
struct yf2173 F;
memset((void *)&F, 0, sizeof F);
F.p2172 = a_p2172;
F.v4808 = ((rt_int *)(v1201).p)[y_ix1(v1201, rt_add(v1243, F.p2172))];
{ rt_int rv4810 = (((((((F.v4808 == v210)) || ((F.v4808 == v213))) || ((F.v4808 == v216))) || ((F.v4808 == v219))) || ((F.v4808 == v222))) || yr1924_IsAt(F.p2172, v381));
return rv4810; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2177_ParseLiteral(void) {
struct yf2178 F;
memset((void *)&F, 0, sizeof F);
F.v4815 = yr1909_TK();
F.v4817 = yr1919_TLn();
if ((F.v4815 == v210)) {
F.v4813 = yr1888_NewNode(v753, F.v4817);
((*(yR99 *)rt_nil_check(F.v4813))).f_ival = yr1914_TV();
} else if ((F.v4815 == v213)) {
F.v4813 = yr1888_NewNode(v756, F.v4817);
((*(yR99 *)rt_nil_check(F.v4813))).f_ival = yr1914_TV();
} else if ((F.v4815 == v216)) {
F.v4813 = yr1888_NewNode(v759, F.v4817);
((*(yR99 *)rt_nil_check(F.v4813))).f_text = rt_range(yr1914_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v4815 == v219)) {
F.v4813 = yr1888_NewNode(v762, F.v4817);
((*(yR99 *)rt_nil_check(F.v4813))).f_text = rt_range(yr1914_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v4815 == v222)) {
F.v4813 = yr1888_NewNode(v765, F.v4817);
((*(yR99 *)rt_nil_check(F.v4813))).f_text = rt_range(yr1914_TV(), INT64_C(0), INT64_C(4000000));
} else {
F.v4813 = yr1888_NewNode(v768, F.v4817);
}
yr1943_Skip();
{ void * rv4818 = F.v4813;
return rv4818; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2182_ParseFactor(void) {
struct yf2183 F;
memset((void *)&F, 0, sizeof F);
F.v4825 = yr1919_TLn();
if (yr1931_Is(v384)) {
yr1943_Skip();
F.v4821 = yr1888_NewNode(v786, F.v4825);
((*(yR99 *)rt_nil_check(F.v4821))).f_a = yr2182_ParseFactor();
{ void * rv4826 = F.v4821;
return rv4826; }
}
if (yr1931_Is(v588)) {
yr1943_Skip();
F.v4821 = yr1888_NewNode(v795, F.v4825);
((*(yR99 *)rt_nil_check(F.v4821))).f_a = yr2156_ParseExpr();
yr1959_Expect(v591);
{ void * rv4827 = F.v4821;
return rv4827; }
}
if (yr2171_IsLiteralAt(INT64_C(0))) {
{ void * rv4829 = yr2177_ParseLiteral();
return rv4829; }
}
if (yr1937_IsIdAt(INT64_C(0))) {
if ((yr2171_IsLiteralAt(INT64_C(1)) || ((yr1937_IsIdAt(INT64_C(1)) && (!((((((yr1924_IsAt(INT64_C(2), v588) || yr1924_IsAt(INT64_C(2), v594)) || yr1924_IsAt(INT64_C(2), v609)) || yr1924_IsAt(INT64_C(2), v612)) || yr1924_IsAt(INT64_C(2), v525)) || yr1924_IsAt(INT64_C(2), v606)))))))) {
F.v4823 = yr1965_Ident();
if (yr1937_IsIdAt(INT64_C(0))) {
F.v4821 = yr1888_NewNode(v771, F.v4825);
((*(yR99 *)rt_nil_check(F.v4821))).f_name = yr1965_Ident();
} else {
F.v4821 = yr2177_ParseLiteral();
}
((*(yR99 *)rt_nil_check(F.v4821))).f_d = yr1888_NewNode(v663, F.v4825);
((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v4821))).f_d))).f_name = F.v4823;
{ void * rv4840 = F.v4821;
return rv4840; }
}
{ void * rv4841 = yr2187_ParseDesignator();
return rv4841; }
}
yr1180_FailN(F.v4825, yr1954_TokText(), y_str(" cannot begin an operand", 24));
{ void * rv4843 = ((void *)0);
return rv4843; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2187_ParseDesignator(void) {
struct yf2188 F;
memset((void *)&F, 0, sizeof F);
F.v4852 = yr1919_TLn();
F.v4846 = yr1888_NewNode(v771, F.v4852);
((*(yR99 *)rt_nil_check(F.v4846))).f_name = yr1965_Ident();
if (yr1948_Accept(v588)) {
((*(yR99 *)rt_nil_check(F.v4846))).f_kind = v774;
F.v4850 = ((void *)0);
while ((!yr1931_Is(v591))) {
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4846))).f_a, &F.v4850, yr2156_ParseExpr());
if ((!yr1948_Accept(v600))) {
yr2192_EXIT_ARGS();
}
}
yr1959_Expect(v591);
}
for (;;) {
if (yr1948_Accept(v609)) {
F.v4848 = yr1888_NewNode(v777, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4848))).f_a = F.v4846;
((*(yR99 *)rt_nil_check(F.v4848))).f_name = yr1965_Ident();
F.v4846 = F.v4848;
} else if (yr1948_Accept(v594)) {
F.v4848 = yr1888_NewNode(v780, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4848))).f_a = F.v4846;
F.v4850 = ((void *)0);
for (;;) {
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4848))).f_b, &F.v4850, yr2156_ParseExpr());
if ((!yr1948_Accept(v600))) {
goto yl_4854;
}
}
yl_4854: ;
yr1959_Expect(v597);
F.v4846 = F.v4848;
} else if (yr1948_Accept(v612)) {
F.v4848 = yr1888_NewNode(v783, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4848))).f_a = F.v4846;
F.v4846 = F.v4848;
} else {
goto yl_4853;
}
}
yl_4853: ;
{ void * rv4855 = F.v4846;
return rv4855; }
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
F.v4859 = ((void *)0);
F.v4861 = ((void *)0);
while ((!(yr1909_TK() == v198))) {
if ((!((yr1931_Is(v375) || yr1931_Is(v378))))) {
yr1172_FailS(yr1919_TLn(), y_str("a segment is a module (XIII.A)", 30));
}
yr1895_Link(&F.v4859, &F.v4861, yr1993_ParseModule());
while (yr1948_Accept(v603)) {
}
}
{ void * rv4863 = F.v4859;
return rv4863; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2202_NewSym(rt_int a_p2203, rt_int a_p2204) {
struct yf2205 F;
memset((void *)&F, 0, sizeof F);
F.p2203 = a_p2203;
F.p2204 = a_p2204;
({ F.v4868 = rt_alloc(sizeof(yR119)); });
(*(yR119 *)rt_nil_check(F.v4868)) = ((yR119){ .f_kind = F.p2203, .f_name = F.p2204, .f_rep = ((void *)0), .f_cname = INT64_C(0), .f_level = INT64_C(0), .f_byref = 0, .f_readonly = 0, .f_mval = INT64_C(0), .f_hasmv = 0, .f_params = ((void *)0), .f_nparams = INT64_C(0), .f_ret = ((void *)0), .f_func = 0, .f_decl = ((void *)0), .f_depth = INT64_C(0), .f_target = ((void *)0), .f_members = ((void *)0), .f_mnext = ((void *)0), .f_chain = ((void *)0), .f_stack = ((void *)0), .f_alt = ((void *)0), .f_monitor = ((void *)0), .f_serial = INT64_C(0), .f_calls = ((void *)0), .f_writes = ((void *)0), .f_frees = ((void *)0), .f_seen = INT64_C(0), .f_vix = INT64_C(0) });
((*(yR119 *)rt_nil_check(F.v4868))).f_serial = yr1189_NewSerial();
{ void * rv4881 = F.v4868;
return rv4881; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2209_OpenScope(rt_int a_p2210) {
struct yf2211 F;
memset((void *)&F, 0, sizeof F);
F.p2210 = a_p2210;
({ F.v4885 = rt_alloc(sizeof(yR124)); });
(*(yR124 *)rt_nil_check(F.v4885)) = ((yR124){ .f_syms = ((void *)0), .f_closed = F.p2210, .f_module = ((void *)0), .f_level = v1273, .f_deferred = ((void *)0), .f_up = ((void *)0) });
if ((v1267 >= INT64_C(0))) {
((*(yR124 *)rt_nil_check(F.v4885))).f_up = ((void * *)(v1265).p)[y_ix1(v1265, v1267)];
}
v1267 = rt_range(rt_add(v1267, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1265).p)[y_ix1(v1265, v1267)] = F.v4885;
((void * *)(v1307).p)[y_ix1(v1307, v1267)] = ((void *)0);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2215_ReopenScope(void * a_p2216) {
struct yf2217 F;
memset((void *)&F, 0, sizeof F);
F.p2216 = a_p2216;
F.v4892 = ((*(yR124 *)rt_nil_check(F.p2216))).f_syms;
F.v4894 = INT64_C(0);
v1267 = rt_range(rt_add(v1267, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1265).p)[y_ix1(v1265, v1267)] = F.p2216;
((void * *)(v1307).p)[y_ix1(v1307, v1267)] = ((void *)0);
while ((!(F.v4892 == ((void *)0)))) {
F.v4894 = rt_range(rt_add(F.v4894, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1334).p)[y_ix1(v1334, F.v4894)] = F.v4892;
F.v4892 = ((*(yR119 *)rt_nil_check(F.v4892))).f_stack;
}
while ((F.v4894 > INT64_C(0))) {
F.v4892 = ((void * *)(v1334).p)[y_ix1(v1334, F.v4894)];
F.v4897 = rt_range(rt_mod(((*(yR119 *)rt_nil_check(F.v4892))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR119 *)rt_nil_check(F.v4892))).f_chain = ((void * *)(v1254).p)[y_ix1(v1254, F.v4897)];
((void * *)(v1254).p)[y_ix1(v1254, F.v4897)] = F.v4892;
F.v4894 = rt_range(rt_sub(F.v4894, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2221_CloseScope(void) {
struct yf2222 F;
memset((void *)&F, 0, sizeof F);
F.v4909 = ((*(yR124 *)rt_nil_check(((void * *)(v1265).p)[y_ix1(v1265, v1267)]))).f_syms;
while ((!(F.v4909 == ((void *)0)))) {
F.v4915 = rt_range(rt_mod(((*(yR119 *)rt_nil_check(F.v4909))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4911 = ((void * *)(v1254).p)[y_ix1(v1254, F.v4915)];
F.v4913 = ((void *)0);
while ((((!(F.v4911 == ((void *)0)))) && ((!(F.v4911 == F.v4909))))) {
F.v4913 = F.v4911;
F.v4911 = ((*(yR119 *)rt_nil_check(F.v4911))).f_chain;
}
if ((F.v4911 == F.v4909)) {
if ((F.v4913 == ((void *)0))) {
((void * *)(v1254).p)[y_ix1(v1254, F.v4915)] = ((*(yR119 *)rt_nil_check(F.v4909))).f_chain;
} else {
((*(yR119 *)rt_nil_check(F.v4913))).f_chain = ((*(yR119 *)rt_nil_check(F.v4909))).f_chain;
}
}
F.v4909 = ((*(yR119 *)rt_nil_check(F.v4909))).f_stack;
}
v1267 = rt_range(rt_sub(v1267, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2226_Visible(void * a_p2227) {
struct yf2228 F;
memset((void *)&F, 0, sizeof F);
F.p2227 = a_p2227;
{ rt_int rv4923 = (((((*(yR119 *)rt_nil_check(F.p2227))).f_depth >= v1270)) || ((((*(yR119 *)rt_nil_check(F.p2227))).f_depth == INT64_C(0))));
return rv4923; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2232_Find(rt_int a_p2233) {
struct yf2234 F;
memset((void *)&F, 0, sizeof F);
F.p2233 = a_p2233;
F.v4927 = ((void * *)(v1254).p)[y_ix1(v1254, rt_mod(F.p2233, INT64_C(8192)))];
while ((!(F.v4927 == ((void *)0)))) {
if ((((((*(yR119 *)rt_nil_check(F.v4927))).f_name == F.p2233)) && yr2226_Visible(F.v4927))) {
{ void * rv4930 = F.v4927;
return rv4930; }
}
F.v4927 = ((*(yR119 *)rt_nil_check(F.v4927))).f_chain;
}
{ void * rv4931 = ((void *)0);
return rv4931; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2238_FindHere(rt_int a_p2239) {
struct yf2240 F;
memset((void *)&F, 0, sizeof F);
F.p2239 = a_p2239;
F.v4935 = ((void * *)(v1254).p)[y_ix1(v1254, rt_mod(F.p2239, INT64_C(8192)))];
while ((!(F.v4935 == ((void *)0)))) {
if ((((((*(yR119 *)rt_nil_check(F.v4935))).f_name == F.p2239)) && ((((*(yR119 *)rt_nil_check(F.v4935))).f_depth == v1267)))) {
{ void * rv4938 = F.v4935;
return rv4938; }
}
F.v4935 = ((*(yR119 *)rt_nil_check(F.v4935))).f_chain;
}
{ void * rv4939 = ((void *)0);
return rv4939; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2244_Lookup(rt_int a_p2245, rt_int a_p2246) {
struct yf2247 F;
memset((void *)&F, 0, sizeof F);
F.p2245 = a_p2245;
F.p2246 = a_p2246;
F.v4944 = yr2232_Find(F.p2245);
if ((!(((void * *)(v1307).p)[y_ix1(v1307, v1267)] == ((void *)0)))) {
if ((((F.v4944 == ((void *)0))) || ((!(((*(yR119 *)rt_nil_check(F.v4944))).f_depth == v1267))))) {
if (yr2257_DeclaredFrom(((void * *)(v1307).p)[y_ix1(v1307, v1267)], F.p2245)) {
yr1180_FailN(F.p2246, F.p2245, y_str(" is used before its declaration in this scope (VII.I)", 53));
}
}
}
if ((F.v4944 == ((void *)0))) {
yr1180_FailN(F.p2246, F.p2245, y_str(" is not declared here", 21));
}
F.lo4952 = INT64_C(1);
F.hi4953 = v1322;
{ rt_int hi4957 = F.hi4953;
for (rt_int i4956 = F.lo4952; i4956 <= hi4957; i4956++) { F.c_4955 = i4956;
if (((((((*(yR119 *)rt_nil_check(F.v4944))).f_depth == ((rt_int *)(v1318).p)[y_ix1(v1318, F.c_4955)])) && ((((*(yR119 *)rt_nil_check(F.v4944))).f_serial > ((rt_int *)(v1320).p)[y_ix1(v1320, F.c_4955)]))) && yr2251_IsSimple(((*(yR119 *)rt_nil_check(F.v4944))).f_kind))) {
yr1180_FailN(F.p2246, F.p2245, y_str(" is declared after the routine that uses it: a simple declaration precedes the routines that use it (X.G)", 105));
}
if (i4956 == hi4957) break;
}}
if ((((*(yR119 *)rt_nil_check(F.v4944))).f_kind == v888)) {
F.v4946 = ((*(yR119 *)rt_nil_check(F.v4944))).f_chain;
while ((!(F.v4946 == ((void *)0)))) {
if ((((((((((*(yR119 *)rt_nil_check(F.v4946))).f_name == F.p2245)) && ((((*(yR119 *)rt_nil_check(F.v4946))).f_depth == ((*(yR119 *)rt_nil_check(F.v4944))).f_depth))) && ((((*(yR119 *)rt_nil_check(F.v4946))).f_kind == v888))) && yr2278_Resolved(F.v4946)) && ((!(yr2330_Real(F.v4946) == yr2330_Real(F.v4944))))) && ((!(((*(yR119 *)rt_nil_check(yr2330_Real(F.v4944)))).f_kind == v867))))) {
yr1180_FailN(F.p2246, F.p2245, y_str(" is exported here by two modules: name it with FROM (X.B.4)", 59));
}
F.v4946 = ((*(yR119 *)rt_nil_check(F.v4946))).f_chain;
}
}
{ void * rv4960 = F.v4944;
return rv4960; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2251_IsSimple(rt_int a_p2252) {
struct yf2253 F;
memset((void *)&F, 0, sizeof F);
F.p2252 = a_p2252;
{ rt_int rv4963 = (((((((F.p2252 == v855)) || ((F.p2252 == v858))) || ((F.p2252 == v861))) || ((F.p2252 == v864))) || ((F.p2252 == v867))) || ((F.p2252 == v882)));
return rv4963; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2257_DeclaredFrom(void * a_p2258, rt_int a_p2259) {
struct yf2260 F;
memset((void *)&F, 0, sizeof F);
F.p2258 = a_p2258;
F.p2259 = a_p2259;
F.v4968 = F.p2258;
F.v4970 = F.p2258;
while ((!(F.v4968 == ((void *)0)))) {
F.v4972 = ((*(yR99 *)rt_nil_check(F.v4968))).f_kind;
if (((((F.v4972 == v633)) || ((F.v4972 == v636))) || ((F.v4972 == v639)))) {
F.v4970 = ((*(yR99 *)rt_nil_check(F.v4968))).f_a;
while ((!(F.v4970 == ((void *)0)))) {
if ((((*(yR99 *)rt_nil_check(F.v4970))).f_name == F.p2259)) {
{ rt_int rv4974 = 1;
return rv4974; }
}
F.v4970 = ((*(yR99 *)rt_nil_check(F.v4970))).f_next;
}
}
if ((((((((F.v4972 == v642)) || ((F.v4972 == v645))) || ((F.v4972 == v648))) || ((F.v4972 == v660))) || ((F.v4972 == v618))) || ((F.v4972 == v654)))) {
if ((((*(yR99 *)rt_nil_check(F.v4968))).f_name == F.p2259)) {
{ rt_int rv4976 = 1;
return rv4976; }
}
}
if ((((((F.v4972 == v633)) || ((F.v4972 == v636))) || ((F.v4972 == v642))) || ((F.v4972 == v645)))) {
if (yr2264_LiteralIn(((*(yR99 *)rt_nil_check(F.v4968))).f_b, F.p2259)) {
{ rt_int rv4978 = 1;
return rv4978; }
}
}
if ((F.v4972 == v618)) {
F.v4970 = ((*(yR99 *)rt_nil_check(F.v4968))).f_b;
while ((!(F.v4970 == ((void *)0)))) {
if ((((((*(yR99 *)rt_nil_check(F.v4970))).f_ival == F.p2259)) || ((((((*(yR99 *)rt_nil_check(F.v4970))).f_ival == INT64_C(0))) && ((((*(yR99 *)rt_nil_check(F.v4970))).f_name == F.p2259)))))) {
{ rt_int rv4981 = 1;
return rv4981; }
}
F.v4970 = ((*(yR99 *)rt_nil_check(F.v4970))).f_next;
}
}
F.v4968 = ((*(yR99 *)rt_nil_check(F.v4968))).f_next;
}
{ rt_int rv4983 = 0;
return rv4983; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2264_LiteralIn(void * a_p2265, rt_int a_p2266) {
struct yf2267 F;
memset((void *)&F, 0, sizeof F);
F.p2265 = a_p2265;
F.p2266 = a_p2266;
if ((F.p2265 == ((void *)0))) {
{ rt_int rv4990 = 0;
return rv4990; }
}
if ((((*(yR99 *)rt_nil_check(F.p2265))).f_kind == v669)) {
F.v4988 = ((*(yR99 *)rt_nil_check(F.p2265))).f_a;
while ((!(F.v4988 == ((void *)0)))) {
if ((((*(yR99 *)rt_nil_check(F.v4988))).f_name == F.p2266)) {
{ rt_int rv4992 = 1;
return rv4992; }
}
F.v4988 = ((*(yR99 *)rt_nil_check(F.v4988))).f_next;
}
{ rt_int rv4994 = 0;
return rv4994; }
}
if ((((*(yR99 *)rt_nil_check(F.p2265))).f_kind == v675)) {
F.v4988 = ((*(yR99 *)rt_nil_check(F.p2265))).f_a;
while ((!(F.v4988 == ((void *)0)))) {
if (yr2264_LiteralIn(F.v4988, F.p2266)) {
{ rt_int rv4996 = 1;
return rv4996; }
}
F.v4988 = ((*(yR99 *)rt_nil_check(F.v4988))).f_next;
}
{ rt_int rv4997 = yr2264_LiteralIn(((*(yR99 *)rt_nil_check(F.p2265))).f_b, F.p2266);
return rv4997; }
}
if ((((*(yR99 *)rt_nil_check(F.p2265))).f_kind == v678)) {
F.v4988 = ((*(yR99 *)rt_nil_check(F.p2265))).f_a;
while ((!(F.v4988 == ((void *)0)))) {
if (yr2264_LiteralIn(((*(yR99 *)rt_nil_check(F.v4988))).f_b, F.p2266)) {
{ rt_int rv4999 = 1;
return rv4999; }
}
F.v4988 = ((*(yR99 *)rt_nil_check(F.v4988))).f_next;
}
if ((!(((*(yR99 *)rt_nil_check(F.p2265))).f_b == ((void *)0)))) {
if (yr2264_LiteralIn(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2265))).f_b))).f_b, F.p2266)) {
{ rt_int rv5001 = 1;
return rv5001; }
}
F.v4988 = ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2265))).f_b))).f_a;
while ((!(F.v4988 == ((void *)0)))) {
if (yr2271_LiteralInGroups(((*(yR99 *)rt_nil_check(F.v4988))).f_b, F.p2266)) {
{ rt_int rv5003 = 1;
return rv5003; }
}
F.v4988 = ((*(yR99 *)rt_nil_check(F.v4988))).f_next;
}
}
{ rt_int rv5005 = 0;
return rv5005; }
}
if ((((((*(yR99 *)rt_nil_check(F.p2265))).f_kind == v681)) || ((((*(yR99 *)rt_nil_check(F.p2265))).f_kind == v687)))) {
{ rt_int rv5006 = yr2264_LiteralIn(((*(yR99 *)rt_nil_check(F.p2265))).f_a, F.p2266);
return rv5006; }
}
{ rt_int rv5008 = 0;
return rv5008; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2271_LiteralInGroups(void * a_p2272, rt_int a_p2273) {
struct yf2274 F;
memset((void *)&F, 0, sizeof F);
F.p2272 = a_p2272;
F.p2273 = a_p2273;
F.v5013 = F.p2272;
while ((!(F.v5013 == ((void *)0)))) {
if (yr2264_LiteralIn(((*(yR99 *)rt_nil_check(F.v5013))).f_b, F.p2273)) {
{ rt_int rv5015 = 1;
return rv5015; }
}
F.v5013 = ((*(yR99 *)rt_nil_check(F.v5013))).f_next;
}
{ rt_int rv5017 = 0;
return rv5017; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2278_Resolved(void * a_p2279) {
struct yf2280 F;
memset((void *)&F, 0, sizeof F);
F.p2279 = a_p2279;
if ((!(((*(yR119 *)rt_nil_check(F.p2279))).f_kind == v888))) {
{ rt_int rv5021 = 1;
return rv5021; }
}
if ((((*(yR119 *)rt_nil_check(F.p2279))).f_target == ((void *)0))) {
{ rt_int rv5023 = 0;
return rv5023; }
}
{ rt_int rv5024 = yr2278_Resolved(((*(yR119 *)rt_nil_check(F.p2279))).f_target);
return rv5024; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2284_Ambiguous(void * a_p2285) {
struct yf2286 F;
memset((void *)&F, 0, sizeof F);
F.p2285 = a_p2285;
F.v5028 = ((*(yR119 *)rt_nil_check(F.p2285))).f_chain;
while ((!(F.v5028 == ((void *)0)))) {
if ((((((((*(yR119 *)rt_nil_check(F.v5028))).f_name == ((*(yR119 *)rt_nil_check(F.p2285))).f_name)) && yr2226_Visible(F.v5028)) && ((((*(yR119 *)rt_nil_check(F.v5028))).f_kind == v867))) && ((!(((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5028))).f_rep))).f_tid == ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.p2285))).f_rep))).f_tid))))) {
{ rt_int rv5030 = 1;
return rv5030; }
}
F.v5028 = ((*(yR119 *)rt_nil_check(F.v5028))).f_chain;
}
{ rt_int rv5032 = 0;
return rv5032; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2290_FindLit(rt_int a_p2291, void * a_p2292) {
struct yf2293 F;
memset((void *)&F, 0, sizeof F);
F.p2291 = a_p2291;
F.p2292 = a_p2292;
F.v5037 = ((void * *)(v1254).p)[y_ix1(v1254, rt_mod(F.p2291, INT64_C(8192)))];
while ((!(F.v5037 == ((void *)0)))) {
if ((((((*(yR119 *)rt_nil_check(F.v5037))).f_name == F.p2291)) && yr2278_Resolved(F.v5037))) {
if ((((((*(yR119 *)rt_nil_check(yr2330_Real(F.v5037)))).f_kind == v867)) && ((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(yr2330_Real(F.v5037)))).f_rep))).f_tid == ((*(yR104 *)rt_nil_check(F.p2292))).f_tid)))) {
{ void * rv5040 = F.v5037;
return rv5040; }
}
}
F.v5037 = ((*(yR119 *)rt_nil_check(F.v5037))).f_chain;
}
{ void * rv5041 = ((void *)0);
return rv5041; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2297_Define(void * a_p2298, rt_int a_p2299) {
struct yf2300 F;
memset((void *)&F, 0, sizeof F);
F.p2298 = a_p2298;
F.p2299 = a_p2299;
F.v5046 = yr2238_FindHere(((*(yR119 *)rt_nil_check(F.p2298))).f_name);
F.v5048 = rt_range(rt_mod(((*(yR119 *)rt_nil_check(F.p2298))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((((!(F.v5046 == ((void *)0)))) && (!((((((*(yR119 *)rt_nil_check(F.v5046))).f_kind == v867)) && ((((*(yR119 *)rt_nil_check(F.p2298))).f_kind == v867)))))) && (!((((((((*(yR119 *)rt_nil_check(F.p2298))).f_kind == v870)) && ((!(((*(yR119 *)rt_nil_check(F.p2298))).f_alt == ((void *)0))))) && yr2278_Resolved(F.v5046)) && ((((*(yR119 *)rt_nil_check(F.p2298))).f_alt == yr2330_Real(F.v5046))))))) && (!((((((*(yR119 *)rt_nil_check(F.p2298))).f_kind == v888)) && ((((*(yR119 *)rt_nil_check(F.v5046))).f_kind == v888))))))) {
yr1180_FailN(F.p2299, ((*(yR119 *)rt_nil_check(F.p2298))).f_name, y_str(" is declared twice in this scope", 32));
}
((*(yR119 *)rt_nil_check(F.p2298))).f_depth = v1267;
((*(yR119 *)rt_nil_check(F.p2298))).f_chain = ((void * *)(v1254).p)[y_ix1(v1254, F.v5048)];
((void * *)(v1254).p)[y_ix1(v1254, F.v5048)] = F.p2298;
((*(yR119 *)rt_nil_check(F.p2298))).f_stack = ((*(yR124 *)rt_nil_check(((void * *)(v1265).p)[y_ix1(v1265, v1267)]))).f_syms;
((*(yR124 *)rt_nil_check(((void * *)(v1265).p)[y_ix1(v1265, v1267)]))).f_syms = F.p2298;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2304_Path(rt_int a_p2305, rt_int a_p2306) {
struct yf2307 F;
memset((void *)&F, 0, sizeof F);
F.p2305 = a_p2305;
F.p2306 = a_p2306;
F.v5056 = rt_range(rt_sub(v1273, F.p2305), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.p2305 == INT64_C(0))) {
{ rt_int rv5059 = F.p2306;
return rv5059; }
}
yr1020_SB();
if ((F.v5056 == INT64_C(0))) {
yr1031_SA(y_str("F.", 2));
} else {
yr1031_SA(y_str("F.up->", 6));
while ((F.v5056 > INT64_C(1))) {
yr1031_SA(y_str("up->", 4));
F.v5056 = rt_range(rt_sub(F.v5056, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1038_ST(F.p2306);
{ rt_int rv5067 = yr1050_SE();
return rv5067; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2311_FramePtr(rt_int a_p2312) {
struct yf2313 F;
memset((void *)&F, 0, sizeof F);
F.p2312 = a_p2312;
F.v5071 = rt_range(rt_sub(v1273, F.p2312), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.v5071 == INT64_C(0))) {
{ rt_int rv5075 = yr1055_T(y_str("&F", 2));
return rv5075; }
}
yr1020_SB();
yr1031_SA(y_str("F.up", 4));
while ((F.v5071 > INT64_C(1))) {
yr1031_SA(y_str("->up", 4));
F.v5071 = rt_range(rt_sub(F.v5071, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv5081 = yr1050_SE();
return rv5081; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2317_DeclStorage(rt_int a_p2318, rt_int a_p2319) {
struct yf2320 F;
memset((void *)&F, 0, sizeof F);
F.p2318 = a_p2318;
F.p2319 = a_p2319;
yr1020_SB();
if ((v1273 == INT64_C(0))) {
yr1031_SA(y_str("static ", 7));
}
yr1038_ST(F.p2318);
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.p2319);
yr1031_SA(y_str(";", 1));
F.v5086 = yr1050_SE();
if ((v1273 == INT64_C(0))) {
yr1104_Put(&v978, F.v5086);
} else {
yr1104_Put(&v992, F.v5086);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2324_SymPath(void * a_p2325) {
struct yf2326 F;
memset((void *)&F, 0, sizeof F);
F.p2325 = a_p2325;
F.v5095 = yr2304_Path(((*(yR119 *)rt_nil_check(F.p2325))).f_level, ((*(yR119 *)rt_nil_check(F.p2325))).f_cname);
if (((*(yR119 *)rt_nil_check(F.p2325))).f_byref) {
yr1020_SB();
yr1031_SA(y_str("(*", 2));
yr1038_ST(F.v5095);
yr1031_SA(y_str(")", 1));
{ rt_int rv5098 = yr1050_SE();
return rv5098; }
}
{ rt_int rv5099 = F.v5095;
return rv5099; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2330_Real(void * a_p2331) {
struct yf2332 F;
memset((void *)&F, 0, sizeof F);
F.p2331 = a_p2331;
F.v5103 = F.p2331;
while ((((*(yR119 *)rt_nil_check(F.v5103))).f_kind == v888)) {
if ((((*(yR119 *)rt_nil_check(F.v5103))).f_target == ((void *)0))) {
yr1180_FailN(v994, ((*(yR119 *)rt_nil_check(F.v5103))).f_name, y_str(" is imported from a declaration translated later: until then only the bodies of routines may use it (X.G)", 105));
}
F.v5103 = ((*(yR119 *)rt_nil_check(F.v5103))).f_target;
}
{ void * rv5105 = F.v5103;
return rv5105; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2336_NewRep(rt_int a_p2337, rt_int a_p2338) {
struct yf2339 F;
memset((void *)&F, 0, sizeof F);
F.p2337 = a_p2337;
F.p2338 = a_p2338;
({ F.v5110 = rt_alloc(sizeof(yR104)); });
(*(yR104 *)rt_nil_check(F.v5110)) = ((yR104){ .f_kind = F.p2337, .f_tid = F.p2338, .f_tname = F.p2338, .f_lo = INT64_C(0), .f_hi = INT64_C(0), .f_mlo = INT64_C(0), .f_mhi = INT64_C(0), .f_hasm = 0, .f_scale = INT64_C(0), .f_prec = INT64_C(0), .f_elem = ((void *)0), .f_idx = ((void *)0), .f_nidx = INT64_C(0), .f_link = ((void *)0), .f_lits = ((void *)0), .f_nlits = INT64_C(0), .f_fields = ((void *)0), .f_selector = ((void *)0), .f_cname = INT64_C(0), .f_dname = INT64_C(0), .f_dlevel = INT64_C(0), .f_deep = 0, .f_abstract = 0, .f_opaque = 0, .f_opaqueops = INT64_C(0), .f_ordered = 0, .f_forward = INT64_C(0), .f_fwdscope = INT64_C(0), .f_monitor = ((void *)0), .f_serial = INT64_C(0), .f_sig = INT64_C(0), .f_fsn = INT64_C(0), .f_fsd = INT64_C(0) });
((*(yR104 *)rt_nil_check(F.v5110))).f_serial = yr1189_NewSerial();
{ void * rv5134 = F.v5110;
return rv5134; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2343_CopyRep(void * a_p2344) {
struct yf2345 F;
memset((void *)&F, 0, sizeof F);
F.p2344 = a_p2344;
({ F.v5138 = rt_alloc(sizeof(yR104)); });
(*(yR104 *)rt_nil_check(F.v5138)) = (*(yR104 *)rt_nil_check(F.p2344));
((*(yR104 *)rt_nil_check(F.v5138))).f_serial = yr1189_NewSerial();
((*(yR104 *)rt_nil_check(F.v5138))).f_sig = INT64_C(0);
{ void * rv5140 = F.v5138;
return rv5140; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2349_IsDiscrete(void * a_p2350) {
struct yf2351 F;
memset((void *)&F, 0, sizeof F);
F.p2350 = a_p2350;
{ rt_int rv5143 = (((((((*(yR104 *)rt_nil_check(F.p2350))).f_kind == v798)) || ((((*(yR104 *)rt_nil_check(F.p2350))).f_kind == v807))) || ((((*(yR104 *)rt_nil_check(F.p2350))).f_kind == v810))) || ((((*(yR104 *)rt_nil_check(F.p2350))).f_kind == v813)));
return rv5143; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2355_IsNumeric(void * a_p2356) {
struct yf2357 F;
memset((void *)&F, 0, sizeof F);
F.p2356 = a_p2356;
{ rt_int rv5146 = ((((((*(yR104 *)rt_nil_check(F.p2356))).f_kind == v798)) || ((((*(yR104 *)rt_nil_check(F.p2356))).f_kind == v801))) || ((((*(yR104 *)rt_nil_check(F.p2356))).f_kind == v804)));
return rv5146; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2361_IsArrayLike(void * a_p2362) {
struct yf2363 F;
memset((void *)&F, 0, sizeof F);
F.p2362 = a_p2362;
{ rt_int rv5149 = ((((((*(yR104 *)rt_nil_check(F.p2362))).f_kind == v816)) || ((((*(yR104 *)rt_nil_check(F.p2362))).f_kind == v837))) || ((((*(yR104 *)rt_nil_check(F.p2362))).f_kind == v840)));
return rv5149; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2367_IsString(void * a_p2368) {
struct yf2369 F;
memset((void *)&F, 0, sizeof F);
F.p2368 = a_p2368;
if ((((*(yR104 *)rt_nil_check(F.p2368))).f_kind == v840)) {
{ rt_int rv5153 = 1;
return rv5153; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2368))).f_kind == v816)) && ((((*(yR104 *)rt_nil_check(F.p2368))).f_nidx == INT64_C(1))))) {
{ rt_int rv5155 = (((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2368))).f_elem))).f_kind == v813);
return rv5155; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2368))).f_kind == v837)) && ((((*(yR104 *)rt_nil_check(F.p2368))).f_nidx == INT64_C(1))))) {
{ rt_int rv5157 = (((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2368))).f_elem))).f_kind == v813);
return rv5157; }
}
{ rt_int rv5159 = 0;
return rv5159; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2373_Deep(void * a_p2374) {
struct yf2375 F;
memset((void *)&F, 0, sizeof F);
F.p2374 = a_p2374;
if (((((((*(yR104 *)rt_nil_check(F.p2374))).f_kind == v816)) || ((((*(yR104 *)rt_nil_check(F.p2374))).f_kind == v837))) || ((((*(yR104 *)rt_nil_check(F.p2374))).f_kind == v840)))) {
{ rt_int rv5163 = 1;
return rv5163; }
}
{ rt_int rv5164 = (((((*(yR104 *)rt_nil_check(F.p2374))).f_kind == v819)) && ((*(yR104 *)rt_nil_check(F.p2374))).f_deep);
return rv5164; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2379_Holds(void * a_p2380, rt_int a_p2381) {
struct yf2382 F;
memset((void *)&F, 0, sizeof F);
F.p2380 = a_p2380;
F.p2381 = a_p2381;
if ((((*(yR104 *)rt_nil_check(F.p2380))).f_kind == v816)) {
{ rt_int rv5170 = (((((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2380))).f_elem))).f_kind == F.p2381)) || yr2379_Holds(((*(yR104 *)rt_nil_check(F.p2380))).f_elem, F.p2381));
return rv5170; }
}
if ((((*(yR104 *)rt_nil_check(F.p2380))).f_kind == v819)) {
F.v5169 = ((*(yR104 *)rt_nil_check(F.p2380))).f_fields;
while ((!(F.v5169 == ((void *)0)))) {
if ((((((*(yR104 *)rt_nil_check(((*(yR109 *)rt_nil_check(F.v5169))).f_rep))).f_kind == F.p2381)) || yr2379_Holds(((*(yR109 *)rt_nil_check(F.v5169))).f_rep, F.p2381))) {
{ rt_int rv5172 = 1;
return rv5172; }
}
F.v5169 = ((*(yR109 *)rt_nil_check(F.v5169))).f_next;
}
}
{ rt_int rv5174 = 0;
return rv5174; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2386_HoldsSignal(void * a_p2387) {
struct yf2388 F;
memset((void *)&F, 0, sizeof F);
F.p2387 = a_p2387;
{ rt_int rv5177 = yr2379_Holds(F.p2387, v831);
return rv5177; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2392_NonAssignable(void * a_p2393) {
struct yf2394 F;
memset((void *)&F, 0, sizeof F);
F.p2393 = a_p2393;
F.v5181 = ((*(yR104 *)rt_nil_check(F.p2393))).f_kind;
if (((((F.v5181 == v831)) || ((F.v5181 == v825))) || ((F.v5181 == v834)))) {
{ rt_int rv5183 = 1;
return rv5183; }
}
{ rt_int rv5184 = ((yr2379_Holds(F.p2393, v831) || yr2379_Holds(F.p2393, v825)) || yr2379_Holds(F.p2393, v834));
return rv5184; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2398_CType(void * a_p2399) {
struct yf2400 F;
memset((void *)&F, 0, sizeof F);
F.p2399 = a_p2399;
F.v5188 = ((*(yR104 *)rt_nil_check(F.p2399))).f_kind;
if (((((F.v5188 == v798)) || ((F.v5188 == v807))) || ((F.v5188 == v810)))) {
{ rt_int rv5190 = yr1055_T(y_str("rt_int", 6));
return rv5190; }
}
if ((F.v5188 == v813)) {
{ rt_int rv5192 = yr1055_T(y_str("unsigned char", 13));
return rv5192; }
}
if ((F.v5188 == v804)) {
{ rt_int rv5194 = yr1055_T(y_str("double", 6));
return rv5194; }
}
if ((F.v5188 == v801)) {
{ rt_int rv5196 = yr1055_T(y_str("yfix", 4));
return rv5196; }
}
if (((((F.v5188 == v816)) || ((F.v5188 == v837))) || ((F.v5188 == v840)))) {
{ rt_int rv5198 = yr1055_T(y_str("yarr", 4));
return rv5198; }
}
if ((F.v5188 == v819)) {
{ rt_int rv5199 = ((*(yR104 *)rt_nil_check(F.p2399))).f_cname;
return rv5199; }
}
if ((((F.v5188 == v822)) || ((F.v5188 == v843)))) {
{ rt_int rv5201 = yr1055_T(y_str("void *", 6));
return rv5201; }
}
if ((F.v5188 == v825)) {
{ rt_int rv5203 = yr1055_T(y_str("yfile *", 7));
return rv5203; }
}
if ((F.v5188 == v828)) {
{ rt_int rv5205 = yr1055_T(y_str("yset", 4));
return rv5205; }
}
if ((F.v5188 == v831)) {
{ rt_int rv5207 = yr1055_T(y_str("ysig", 4));
return rv5207; }
}
if ((F.v5188 == v834)) {
{ rt_int rv5209 = yr1055_T(y_str("rt_lock", 7));
return rv5209; }
}
{ rt_int rv5211 = yr1055_T(y_str("void", 4));
return rv5211; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2404_DescOf(void * a_p2405) {
struct yf2406 F;
memset((void *)&F, 0, sizeof F);
F.p2405 = a_p2405;
F.v5215 = ((*(yR104 *)rt_nil_check(F.p2405))).f_kind;
if (((((F.v5215 == v798)) || ((F.v5215 == v807))) || ((F.v5215 == v810)))) {
{ rt_int rv5217 = yr1055_T(y_str("&y_d_int", 8));
return rv5217; }
}
if ((F.v5215 == v813)) {
{ rt_int rv5219 = yr1055_T(y_str("&y_d_byte", 9));
return rv5219; }
}
if ((F.v5215 == v804)) {
{ rt_int rv5221 = yr1055_T(y_str("&y_d_float", 10));
return rv5221; }
}
if ((F.v5215 == v801)) {
{ rt_int rv5223 = yr1055_T(y_str("&y_d_fix", 8));
return rv5223; }
}
if ((((F.v5215 == v822)) || ((F.v5215 == v843)))) {
{ rt_int rv5225 = yr1055_T(y_str("&y_d_ptr", 8));
return rv5225; }
}
if ((F.v5215 == v828)) {
{ rt_int rv5227 = yr1055_T(y_str("&y_d_set", 8));
return rv5227; }
}
if ((((F.v5215 == v816)) || ((F.v5215 == v819)))) {
yr1020_SB();
yr1031_SA(y_str("&", 1));
yr1038_ST(yr2304_Path(((*(yR104 *)rt_nil_check(F.p2405))).f_dlevel, ((*(yR104 *)rt_nil_check(F.p2405))).f_dname));
{ rt_int rv5229 = yr1050_SE();
return rv5229; }
}
if ((F.v5215 == v840)) {
{ rt_int rv5231 = yr1055_T(y_str("&y_d_str", 8));
return rv5231; }
}
if ((F.v5215 == v831)) {
{ rt_int rv5233 = yr1055_T(y_str("&y_d_sig", 8));
return rv5233; }
}
if ((F.v5215 == v834)) {
{ rt_int rv5235 = yr1055_T(y_str("&y_d_sem", 8));
return rv5235; }
}
{ rt_int rv5237 = yr1055_T(y_str("&y_d_opaque", 11));
return rv5237; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2410_NewDesc(void * a_p2411) {
struct yf2412 F;
memset((void *)&F, 0, sizeof F);
F.p2411 = a_p2411;
((*(yR104 *)rt_nil_check(F.p2411))).f_dname = yr1194_Fresh(y_str("yd_", 3));
((*(yR104 *)rt_nil_check(F.p2411))).f_dlevel = v1273;
yr2317_DeclStorage(yr1055_T(y_str("ydesc", 5)), ((*(yR104 *)rt_nil_check(F.p2411))).f_dname);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2416_SameType(void * a_p2417, void * a_p2418) {
struct yf2419 F;
memset((void *)&F, 0, sizeof F);
F.p2417 = a_p2417;
F.p2418 = a_p2418;
if ((((*(yR104 *)rt_nil_check(F.p2417))).f_tid == ((*(yR104 *)rt_nil_check(F.p2418))).f_tid)) {
{ rt_int rv5246 = 1;
return rv5246; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2417))).f_kind == v840)) && yr2367_IsString(F.p2418))) {
{ rt_int rv5248 = 1;
return rv5248; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2418))).f_kind == v840)) && yr2367_IsString(F.p2417))) {
{ rt_int rv5250 = 1;
return rv5250; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2417))).f_kind == v843)) && ((((*(yR104 *)rt_nil_check(F.p2418))).f_kind == v822)))) {
{ rt_int rv5252 = 1;
return rv5252; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2418))).f_kind == v843)) && ((((*(yR104 *)rt_nil_check(F.p2417))).f_kind == v822)))) {
{ rt_int rv5254 = 1;
return rv5254; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2417))).f_kind == v852)) || ((((*(yR104 *)rt_nil_check(F.p2418))).f_kind == v852)))) {
{ rt_int rv5256 = 1;
return rv5256; }
}
{ rt_int rv5258 = 0;
return rv5258; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2423_TypeClash(rt_int a_p2424, void * a_p2425, void * a_p2426) {
struct yf2427 F;
memset((void *)&F, 0, sizeof F);
F.p2424 = a_p2424;
F.p2425 = a_p2425;
F.p2426 = a_p2426;
yr1020_SB();
yr1031_SA(y_str("type conflict: ", 15));
yr1038_ST(((*(yR104 *)rt_nil_check(F.p2425))).f_tname);
yr1031_SA(y_str(" expected, ", 11));
yr1038_ST(((*(yR104 *)rt_nil_check(F.p2426))).f_tname);
yr1031_SA(y_str(" found", 6));
F.v5264 = yr1050_SE();
yr1151_Fail(F.p2424, F.v5264);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2431_CheckType(rt_int a_p2432, void * a_p2433, void * a_p2434) {
struct yf2435 F;
memset((void *)&F, 0, sizeof F);
F.p2432 = a_p2432;
F.p2433 = a_p2433;
F.p2434 = a_p2434;
if ((!yr2416_SameType(F.p2433, F.p2434))) {
yr2423_TypeClash(F.p2432, F.p2433, F.p2434);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2439_CheckRepresented(void * a_p2440, rt_int a_p2441) {
struct yf2442 F;
memset((void *)&F, 0, sizeof F);
F.p2440 = a_p2440;
F.p2441 = a_p2441;
if (((*(yR104 *)rt_nil_check(F.p2440))).f_abstract) {
yr1180_FailN(F.p2441, ((*(yR104 *)rt_nil_check(F.p2440))).f_tname, y_str(" is a type, not a representation (VI.A.1)", 41));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2446_SigText(void * a_p2447) {
struct yf2448 F;
memset((void *)&F, 0, sizeof F);
F.p2447 = a_p2447;
F.v5279 = ((*(yR104 *)rt_nil_check(F.p2447))).f_kind;
yr1020_SB();
yr1038_ST(((*(yR104 *)rt_nil_check(F.p2447))).f_tid);
if (((yr2349_IsDiscrete(F.p2447) || ((F.v5279 == v804))) || ((F.v5279 == v801)))) {
yr1031_SA(y_str("[", 1));
if (((*(yR104 *)rt_nil_check(F.p2447))).f_hasm) {
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2447))).f_mlo);
yr1031_SA(y_str("..", 2));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2447))).f_mhi);
} else {
yr1038_ST(((*(yR104 *)rt_nil_check(F.p2447))).f_lo);
yr1031_SA(y_str("..", 2));
yr1038_ST(((*(yR104 *)rt_nil_check(F.p2447))).f_hi);
}
yr1031_SA(y_str("]", 1));
if ((F.v5279 == v804)) {
yr1031_SA(y_str("P", 1));
yr1038_ST(((*(yR104 *)rt_nil_check(F.p2447))).f_prec);
}
if ((F.v5279 == v801)) {
yr1031_SA(y_str("S", 1));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2447))).f_fsn);
yr1031_SA(y_str("/", 1));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2447))).f_fsd);
}
} else if ((F.v5279 == v816)) {
yr1031_SA(y_str("(", 1));
F.v5281 = ((*(yR104 *)rt_nil_check(F.p2447))).f_idx;
while ((!(F.v5281 == ((void *)0)))) {
yr1038_ST(yr2452_RepSig(F.v5281));
yr1031_SA(y_str(",", 1));
F.v5281 = ((*(yR104 *)rt_nil_check(F.v5281))).f_link;
}
yr1031_SA(y_str("OF ", 3));
yr1038_ST(yr2452_RepSig(((*(yR104 *)rt_nil_check(F.p2447))).f_elem));
yr1031_SA(y_str(")", 1));
} else if ((F.v5279 == v837)) {
yr1031_SA(y_str("(", 1));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2447))).f_nidx);
yr1031_SA(y_str("D ", 2));
yr1038_ST(yr2452_RepSig(((*(yR104 *)rt_nil_check(F.p2447))).f_elem));
yr1031_SA(y_str(")", 1));
} else if ((F.v5279 == v819)) {
yr1031_SA(y_str("{", 1));
F.v5283 = ((*(yR104 *)rt_nil_check(F.p2447))).f_fields;
while ((!(F.v5283 == ((void *)0)))) {
if (((*(yR109 *)rt_nil_check(F.v5283))).f_isconst) {
yr1031_SA(y_str("C ", 2));
} else {
yr1031_SA(y_str("V ", 2));
}
yr1038_ST(((*(yR109 *)rt_nil_check(F.v5283))).f_name);
yr1031_SA(y_str(":", 1));
yr1038_ST(yr2452_RepSig(((*(yR109 *)rt_nil_check(F.v5283))).f_rep));
yr1031_SA(y_str(";", 1));
F.v5283 = ((*(yR109 *)rt_nil_check(F.v5283))).f_next;
}
yr1031_SA(y_str("}", 1));
} else if ((((F.v5279 == v828)) || ((F.v5279 == v825)))) {
yr1031_SA(y_str("(", 1));
yr1038_ST(yr2452_RepSig(((*(yR104 *)rt_nil_check(F.p2447))).f_elem));
yr1031_SA(y_str(")", 1));
}
{ rt_int rv5306 = yr1050_SE();
return rv5306; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2452_RepSig(void * a_p2453) {
struct yf2454 F;
memset((void *)&F, 0, sizeof F);
F.p2453 = a_p2453;
if ((((*(yR104 *)rt_nil_check(F.p2453))).f_sig == INT64_C(0))) {
((*(yR104 *)rt_nil_check(F.p2453))).f_sig = yr1069_Name(yr2446_SigText(F.p2453));
}
{ rt_int rv5310 = ((*(yR104 *)rt_nil_check(F.p2453))).f_sig;
return rv5310; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2458_Identical(void * a_p2459, void * a_p2460) {
struct yf2461 F;
memset((void *)&F, 0, sizeof F);
F.p2459 = a_p2459;
F.p2460 = a_p2460;
if ((F.p2459 == F.p2460)) {
{ rt_int rv5315 = 1;
return rv5315; }
}
if ((!yr2416_SameType(F.p2459, F.p2460))) {
{ rt_int rv5317 = 0;
return rv5317; }
}
{ rt_int rv5318 = (yr2452_RepSig(F.p2459) == yr2452_RepSig(F.p2460));
return rv5318; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2465_IsLiteralNode(void * a_p2466) {
struct yf2467 F;
memset((void *)&F, 0, sizeof F);
F.p2466 = a_p2466;
if ((((((((*(yR99 *)rt_nil_check(F.p2466))).f_kind == v753)) || ((((*(yR99 *)rt_nil_check(F.p2466))).f_kind == v759))) || ((((*(yR99 *)rt_nil_check(F.p2466))).f_kind == v756))) || ((((*(yR99 *)rt_nil_check(F.p2466))).f_kind == v762)))) {
{ rt_int rv5321 = (((*(yR99 *)rt_nil_check(F.p2466))).f_d == ((void *)0));
return rv5321; }
}
if ((((((*(yR99 *)rt_nil_check(F.p2466))).f_kind == v789)) || ((((*(yR99 *)rt_nil_check(F.p2466))).f_kind == v795)))) {
{ rt_int rv5322 = yr2465_IsLiteralNode(((*(yR99 *)rt_nil_check(F.p2466))).f_a);
return rv5322; }
}
{ rt_int rv5324 = 0;
return rv5324; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2471_StoreBounds(void * a_p2472, yarr a_p2474) {
struct yf2475 F;
memset((void *)&F, 0, sizeof F);
F.p2472 = a_p2472;
F.p2474 = a_p2474;
F.v5329 = yr1194_Fresh(y_str("lo", 2));
F.v5331 = yr1194_Fresh(y_str("hi", 2));
yr2317_DeclStorage(yr1055_T(F.p2474), F.v5329);
yr2317_DeclStorage(yr1055_T(F.p2474), F.v5331);
yr1126_Emit(yr3187_Join(yr2304_Path(v1273, F.v5329), yr1055_T(y_str(" = ", 3)), yr3187_Join(((*(yR104 *)rt_nil_check(F.p2472))).f_lo, yr1055_T(y_str(";", 1)), INT64_C(0))));
yr1126_Emit(yr3187_Join(yr2304_Path(v1273, F.v5331), yr1055_T(y_str(" = ", 3)), yr3187_Join(((*(yR104 *)rt_nil_check(F.p2472))).f_hi, yr1055_T(y_str(";", 1)), INT64_C(0))));
((*(yR104 *)rt_nil_check(F.p2472))).f_lo = F.v5329;
((*(yR104 *)rt_nil_check(F.p2472))).f_hi = F.v5331;
((*(yR104 *)rt_nil_check(F.p2472))).f_dname = F.v5329;
((*(yR104 *)rt_nil_check(F.p2472))).f_dlevel = v1273;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2479_LoText(void * a_p2480) {
struct yf2481 F;
memset((void *)&F, 0, sizeof F);
F.p2480 = a_p2480;
if ((((((!(((*(yR104 *)rt_nil_check(F.p2480))).f_dname == INT64_C(0)))) && ((!(((*(yR104 *)rt_nil_check(F.p2480))).f_lo == INT64_C(0))))) && ((!(((*(yR104 *)rt_nil_check(F.p2480))).f_kind == v816)))) && ((!(((*(yR104 *)rt_nil_check(F.p2480))).f_kind == v819))))) {
{ rt_int rv5344 = yr2304_Path(((*(yR104 *)rt_nil_check(F.p2480))).f_dlevel, ((*(yR104 *)rt_nil_check(F.p2480))).f_lo);
return rv5344; }
}
{ rt_int rv5345 = ((*(yR104 *)rt_nil_check(F.p2480))).f_lo;
return rv5345; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2485_HiText(void * a_p2486) {
struct yf2487 F;
memset((void *)&F, 0, sizeof F);
F.p2486 = a_p2486;
if ((((((!(((*(yR104 *)rt_nil_check(F.p2486))).f_dname == INT64_C(0)))) && ((!(((*(yR104 *)rt_nil_check(F.p2486))).f_hi == INT64_C(0))))) && ((!(((*(yR104 *)rt_nil_check(F.p2486))).f_kind == v816)))) && ((!(((*(yR104 *)rt_nil_check(F.p2486))).f_kind == v819))))) {
{ rt_int rv5350 = yr2304_Path(((*(yR104 *)rt_nil_check(F.p2486))).f_dlevel, ((*(yR104 *)rt_nil_check(F.p2486))).f_hi);
return rv5350; }
}
{ rt_int rv5351 = ((*(yR104 *)rt_nil_check(F.p2486))).f_hi;
return rv5351; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2491_AdoptLiteral(void * a_p2492, void * a_p2493, void * a_p2494) {
struct yf2495 F;
memset((void *)&F, 0, sizeof F);
F.p2492 = a_p2492;
F.p2493 = a_p2493;
F.p2494 = a_p2494;
if ((((!yr2465_IsLiteralNode(F.p2492)) || ((!(((*(yR104 *)rt_nil_check(F.p2493))).f_kind == ((*(yR104 *)rt_nil_check(F.p2494))).f_kind)))) || (!yr2355_IsNumeric(F.p2494)))) {
{ void * rv5358 = F.p2493;
return rv5358; }
}
if (yr2499_HasQualifier(F.p2492)) {
{ void * rv5359 = F.p2493;
return rv5359; }
}
F.v5357 = yr2343_CopyRep(F.p2493);
((*(yR104 *)rt_nil_check(F.v5357))).f_tid = ((*(yR104 *)rt_nil_check(F.p2494))).f_tid;
((*(yR104 *)rt_nil_check(F.v5357))).f_tname = ((*(yR104 *)rt_nil_check(F.p2494))).f_tname;
{ void * rv5360 = F.v5357;
return rv5360; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2499_HasQualifier(void * a_p2500) {
struct yf2501 F;
memset((void *)&F, 0, sizeof F);
F.p2500 = a_p2500;
if ((((((*(yR99 *)rt_nil_check(F.p2500))).f_kind == v789)) || ((((*(yR99 *)rt_nil_check(F.p2500))).f_kind == v795)))) {
{ rt_int rv5363 = yr2499_HasQualifier(((*(yR99 *)rt_nil_check(F.p2500))).f_a);
return rv5363; }
}
{ rt_int rv5364 = (!(((*(yR99 *)rt_nil_check(F.p2500))).f_d == ((void *)0)));
return rv5364; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2505_Gcd(rt_int a_p2506, rt_int a_p2507) {
struct yf2508 F;
memset((void *)&F, 0, sizeof F);
F.p2506 = a_p2506;
F.p2507 = a_p2507;
F.v5369 = F.p2506;
F.v5371 = F.p2507;
if ((F.v5369 < INT64_C(0))) {
F.v5369 = rt_range(rt_neg(F.v5369), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v5371 < INT64_C(0))) {
F.v5371 = rt_range(rt_neg(F.v5371), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
while ((!(F.v5371 == INT64_C(0)))) {
F.v5373 = rt_range(rt_mod(F.v5369, F.v5371), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5369 = F.v5371;
F.v5371 = F.v5373;
}
if ((F.v5369 == INT64_C(0))) {
{ rt_int rv5382 = INT64_C(1);
return rv5382; }
}
{ rt_int rv5383 = F.v5369;
return rv5383; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2512_MulChk(rt_int a_p2513, rt_int a_p2514, rt_int a_p2515) {
struct yf2516 F;
memset((void *)&F, 0, sizeof F);
F.p2513 = a_p2513;
F.p2514 = a_p2514;
F.p2515 = a_p2515;
F.v5389 = F.p2513;
F.v5391 = F.p2514;
if ((F.v5389 < INT64_C(0))) {
F.v5389 = rt_range(rt_neg(F.v5389), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v5391 < INT64_C(0))) {
F.v5391 = rt_range(rt_neg(F.v5391), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((((!(F.v5389 == INT64_C(0)))) && ((F.v5391 > (rt_div(v900, F.v5389)))))) {
yr1172_FailS(F.p2515, y_str("a scale beyond this implementation: fixed-point scales are fractions of 64-bit integers", 87));
}
{ rt_int rv5400 = rt_range(rt_mul(F.p2513, F.p2514), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return rv5400; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2520_PowChk(rt_int a_p2521, rt_int a_p2522, rt_int a_p2523) {
struct yf2524 F;
memset((void *)&F, 0, sizeof F);
F.p2521 = a_p2521;
F.p2522 = a_p2522;
F.p2523 = a_p2523;
F.v5406 = INT64_C(1);
F.lo5411 = INT64_C(1);
F.hi5412 = F.p2522;
{ rt_int hi5416 = F.hi5412;
for (rt_int i5415 = F.lo5411; i5415 <= hi5416; i5415++) { F.c_5414 = i5415;
F.v5406 = yr2512_MulChk(F.v5406, F.p2521, F.p2523);
if (i5415 == hi5416) break;
}}
{ rt_int rv5417 = F.v5406;
return rv5417; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2528_ScaleRatio(void * a_p2529, void * a_p2530, rt_int * a_p2531, rt_int * a_p2532, rt_int * a_p2533) {
struct yf2534 F;
memset((void *)&F, 0, sizeof F);
F.p2529 = a_p2529;
F.p2530 = a_p2530;
F.p2531_o = a_p2531;
F.p2532_o = a_p2532;
F.p2533_o = a_p2533;
F.p2531 = yr1055_T(y_str("1", 1));
F.p2532 = yr1055_T(y_str("1", 1));
F.p2533 = 1;
if ((((((*(yR104 *)rt_nil_check(F.p2529))).f_fsd == INT64_C(0))) || ((((*(yR104 *)rt_nil_check(F.p2530))).f_fsd == INT64_C(0))))) {
(*F.p2531_o) = F.p2531;
(*F.p2532_o) = F.p2532;
(*F.p2533_o) = F.p2533;
return;
}
F.v5425 = yr2505_Gcd(((*(yR104 *)rt_nil_check(F.p2529))).f_fsn, ((*(yR104 *)rt_nil_check(F.p2530))).f_fsn);
F.v5427 = yr2505_Gcd(((*(yR104 *)rt_nil_check(F.p2529))).f_fsd, ((*(yR104 *)rt_nil_check(F.p2530))).f_fsd);
F.v5429 = rt_range(rt_div(((*(yR104 *)rt_nil_check(F.p2529))).f_fsn, F.v5425), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5431 = rt_range(rt_div(((*(yR104 *)rt_nil_check(F.p2530))).f_fsd, F.v5427), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5433 = rt_range(rt_div(((*(yR104 *)rt_nil_check(F.p2529))).f_fsd, F.v5427), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5435 = rt_range(rt_div(((*(yR104 *)rt_nil_check(F.p2530))).f_fsn, F.v5425), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.p2533 = (((((F.v5429 == INT64_C(1))) && ((F.v5431 == INT64_C(1)))) && ((F.v5433 == INT64_C(1)))) && ((F.v5435 == INT64_C(1))));
F.p2531 = yr2538_Factor(F.v5429, F.v5431);
F.p2532 = yr2538_Factor(F.v5433, F.v5435);
(*F.p2531_o) = F.p2531;
(*F.p2532_o) = F.p2532;
(*F.p2533_o) = F.p2533;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2538_Factor(rt_int a_p2539, rt_int a_p2540) {
struct yf2541 F;
memset((void *)&F, 0, sizeof F);
F.p2539 = a_p2539;
F.p2540 = a_p2540;
yr1020_SB();
yr1031_SA(y_str("((yfix)INT64_C(", 15));
yr1044_SI(F.p2539);
yr1031_SA(y_str(")", 1));
if ((!(F.p2540 == INT64_C(1)))) {
yr1031_SA(y_str(" * INT64_C(", 11));
yr1044_SI(F.p2540);
yr1031_SA(y_str(")", 1));
}
yr1031_SA(y_str(")", 1));
{ rt_int rv5458 = yr1050_SE();
return rv5458; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2545_SetScale(void * a_p2546, rt_int a_p2547, rt_int a_p2548) {
struct yf2549 F;
memset((void *)&F, 0, sizeof F);
F.p2546 = a_p2546;
F.p2547 = a_p2547;
F.p2548 = a_p2548;
F.v5464 = yr2505_Gcd(F.p2547, F.p2548);
((*(yR104 *)rt_nil_check(F.p2546))).f_fsn = rt_range(rt_div(F.p2547, F.v5464), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR104 *)rt_nil_check(F.p2546))).f_fsd = rt_range(rt_div(F.p2548, F.v5464), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((*(yR104 *)rt_nil_check(F.p2546))).f_fsd < INT64_C(0))) {
((*(yR104 *)rt_nil_check(F.p2546))).f_fsn = rt_range(rt_neg(((*(yR104 *)rt_nil_check(F.p2546))).f_fsn), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR104 *)rt_nil_check(F.p2546))).f_fsd = rt_range(rt_neg(((*(yR104 *)rt_nil_check(F.p2546))).f_fsd), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2553_Qualify(void * a_p2554, void * a_p2555) {
struct yf2556 F;
memset((void *)&F, 0, sizeof F);
F.p2554 = a_p2554;
F.p2555 = a_p2555;
if ((((*(yR104 *)rt_nil_check(F.p2554))).f_kind == v801)) {
if ((((*(yR99 *)rt_nil_check(F.p2555))).f_c == ((void *)0))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2555))).f_line, y_str("FIXED needs SCALE (VI.A.1.b)", 28));
}
yr2757_ManifestFix(((*(yR99 *)rt_nil_check(F.p2555))).f_c, &F.v5486, &F.v5492, &F.v5494);
if (((!F.v5486) || ((F.v5492 <= INT64_C(0))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2555))).f_line, y_str("SCALE is a positive manifest constant (VI.A.1.b, VI.C)", 54));
}
((*(yR104 *)rt_nil_check(F.p2554))).f_fsn = F.v5492;
((*(yR104 *)rt_nil_check(F.p2554))).f_fsd = F.v5494;
yr1020_SB();
yr1044_SI(F.v5492);
yr1031_SA(y_str("/", 1));
yr1044_SI(F.v5494);
((*(yR104 *)rt_nil_check(F.p2554))).f_scale = yr1050_SE();
}
yr2839_Expr(((*(yR99 *)rt_nil_check(F.p2555))).f_a, F.p2554, &F.v5474, &F.v5482);
yr2839_Expr(((*(yR99 *)rt_nil_check(F.p2555))).f_b, F.p2554, &F.v5476, &F.v5484);
F.v5482 = yr2491_AdoptLiteral(((*(yR99 *)rt_nil_check(F.p2555))).f_a, F.v5482, F.p2554);
F.v5484 = yr2491_AdoptLiteral(((*(yR99 *)rt_nil_check(F.p2555))).f_b, F.v5484, F.p2554);
if ((((*(yR104 *)rt_nil_check(F.p2554))).f_kind == v801)) {
yr2431_CheckType(((*(yR99 *)rt_nil_check(F.p2555))).f_line, F.p2554, F.v5482);
yr2431_CheckType(((*(yR99 *)rt_nil_check(F.p2555))).f_line, F.p2554, F.v5484);
yr2528_ScaleRatio(F.v5482, F.p2554, &F.v5478, &F.v5480, &F.v5488);
((*(yR104 *)rt_nil_check(F.p2554))).f_lo = yr3187_Join(yr1055_T(y_str("y_fix_bound(", 12)), F.v5474, yr3187_Join(yr1055_T(y_str(", ", 2)), F.v5478, yr3187_Join(yr1055_T(y_str(", ", 2)), F.v5480, yr1055_T(y_str(", 1)", 4)))));
yr2528_ScaleRatio(F.v5484, F.p2554, &F.v5478, &F.v5480, &F.v5488);
((*(yR104 *)rt_nil_check(F.p2554))).f_hi = yr3187_Join(yr1055_T(y_str("y_fix_bound(", 12)), F.v5476, yr3187_Join(yr1055_T(y_str(", ", 2)), F.v5478, yr3187_Join(yr1055_T(y_str(", ", 2)), F.v5480, yr1055_T(y_str(", 0)", 4)))));
((*(yR104 *)rt_nil_check(F.p2554))).f_dname = INT64_C(0);
yr2471_StoreBounds(F.p2554, y_str("yfix", 4));
((*(yR104 *)rt_nil_check(F.p2554))).f_abstract = 0;
return;
}
if ((((*(yR104 *)rt_nil_check(F.p2554))).f_kind == v804)) {
yr2431_CheckType(((*(yR99 *)rt_nil_check(F.p2555))).f_line, F.p2554, F.v5482);
yr2431_CheckType(((*(yR99 *)rt_nil_check(F.p2555))).f_line, F.p2554, F.v5484);
((*(yR104 *)rt_nil_check(F.p2554))).f_lo = F.v5474;
((*(yR104 *)rt_nil_check(F.p2554))).f_hi = F.v5476;
((*(yR104 *)rt_nil_check(F.p2554))).f_dname = INT64_C(0);
if ((!((yr2465_IsLiteralNode(((*(yR99 *)rt_nil_check(F.p2555))).f_a) && yr2465_IsLiteralNode(((*(yR99 *)rt_nil_check(F.p2555))).f_b))))) {
yr2471_StoreBounds(F.p2554, y_str("double", 6));
}
if ((((*(yR99 *)rt_nil_check(F.p2555))).f_d == ((void *)0))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2555))).f_line, y_str("FLOATING needs PRECISION (VI.A.1.c)", 35));
}
yr2691_Manifest(((*(yR99 *)rt_nil_check(F.p2555))).f_d, &F.v5486, &F.v5490);
if ((!F.v5486)) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2555))).f_line, y_str("PRECISION is a manifest constant", 32));
}
if ((((F.v5490 < INT64_C(1))) || ((F.v5490 > INT64_C(15))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2555))).f_line, y_str("PRECISION beyond this implementation: its floating point holds 15 decimal digits (Appendix C)", 93));
}
yr1020_SB();
yr1044_SI(F.v5490);
((*(yR104 *)rt_nil_check(F.p2554))).f_prec = yr1050_SE();
((*(yR104 *)rt_nil_check(F.p2554))).f_abstract = 0;
return;
}
if ((!yr2349_IsDiscrete(F.p2554))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2555))).f_line, y_str("only a scalar or integer representation takes a range", 53));
}
if ((((!(((*(yR99 *)rt_nil_check(F.p2555))).f_c == ((void *)0)))) || ((!(((*(yR99 *)rt_nil_check(F.p2555))).f_d == ((void *)0)))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2555))).f_line, y_str("SCALE and PRECISION qualify numbers", 35));
}
yr2431_CheckType(((*(yR99 *)rt_nil_check(F.p2555))).f_line, F.p2554, F.v5482);
yr2431_CheckType(((*(yR99 *)rt_nil_check(F.p2555))).f_line, F.p2554, F.v5484);
((*(yR104 *)rt_nil_check(F.p2554))).f_lo = F.v5474;
((*(yR104 *)rt_nil_check(F.p2554))).f_hi = F.v5476;
yr2691_Manifest(((*(yR99 *)rt_nil_check(F.p2555))).f_a, &F.v5486, &((*(yR104 *)rt_nil_check(F.p2554))).f_mlo);
((*(yR104 *)rt_nil_check(F.p2554))).f_hasm = F.v5486;
yr2691_Manifest(((*(yR99 *)rt_nil_check(F.p2555))).f_b, &F.v5486, &((*(yR104 *)rt_nil_check(F.p2554))).f_mhi);
((*(yR104 *)rt_nil_check(F.p2554))).f_hasm = (((*(yR104 *)rt_nil_check(F.p2554))).f_hasm && F.v5486);
((*(yR104 *)rt_nil_check(F.p2554))).f_abstract = 0;
((*(yR104 *)rt_nil_check(F.p2554))).f_dname = INT64_C(0);
if ((!((*(yR104 *)rt_nil_check(F.p2554))).f_hasm)) {
yr2471_StoreBounds(F.p2554, y_str("rt_int", 6));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2560_DefineLits(void * a_p2561) {
struct yf2562 F;
memset((void *)&F, 0, sizeof F);
F.p2561 = a_p2561;
F.v5526 = ((*(yR104 *)rt_nil_check(F.p2561))).f_lits;
F.v5530 = INT64_C(0);
while ((!(F.v5526 == ((void *)0)))) {
if ((!(yr2232_Find(((*(yR99 *)rt_nil_check(F.v5526))).f_name) == ((void *)0)))) {
F.v5528 = yr2232_Find(((*(yR99 *)rt_nil_check(F.v5526))).f_name);
if ((((!(((*(yR119 *)rt_nil_check(F.v5528))).f_kind == v867))) && ((((*(yR119 *)rt_nil_check(F.v5528))).f_depth == v1267)))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.v5526))).f_line, ((*(yR99 *)rt_nil_check(F.v5526))).f_name, y_str(" is declared twice in this scope", 32));
}
}
F.v5528 = yr2202_NewSym(v867, ((*(yR99 *)rt_nil_check(F.v5526))).f_name);
((*(yR119 *)rt_nil_check(F.v5528))).f_rep = F.p2561;
((*(yR119 *)rt_nil_check(F.v5528))).f_mval = F.v5530;
((*(yR119 *)rt_nil_check(F.v5528))).f_hasmv = 1;
yr2297_Define(F.v5528, ((*(yR99 *)rt_nil_check(F.v5526))).f_line);
F.v5530 = rt_range(rt_add(F.v5530, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5526 = ((*(yR99 *)rt_nil_check(F.v5526))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2566_SetRange(void * a_p2567, rt_int a_p2568, rt_int a_p2569) {
struct yf2570 F;
memset((void *)&F, 0, sizeof F);
F.p2567 = a_p2567;
F.p2568 = a_p2568;
F.p2569 = a_p2569;
yr1020_SB();
yr1044_SI(F.p2568);
((*(yR104 *)rt_nil_check(F.p2567))).f_lo = yr1050_SE();
yr1020_SB();
yr1044_SI(F.p2569);
((*(yR104 *)rt_nil_check(F.p2567))).f_hi = yr1050_SE();
((*(yR104 *)rt_nil_check(F.p2567))).f_mlo = F.p2568;
((*(yR104 *)rt_nil_check(F.p2567))).f_mhi = F.p2569;
((*(yR104 *)rt_nil_check(F.p2567))).f_hasm = 1;
((*(yR104 *)rt_nil_check(F.p2567))).f_dname = INT64_C(0);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2574_NewTid(rt_int a_p2575) {
struct yf2576 F;
memset((void *)&F, 0, sizeof F);
F.p2575 = a_p2575;
F.v5545 = yr1189_NewSerial();
yr1020_SB();
if ((!(F.p2575 == INT64_C(0)))) {
yr1038_ST(F.p2575);
} else {
yr1031_SA(y_str("anonymous", 9));
}
yr1031_SA(y_str("#", 1));
yr1044_SI(F.v5545);
{ rt_int rv5549 = yr1050_SE();
return rv5549; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2580_MakeRep(void * a_p2581, rt_int a_p2582, rt_int a_p2583) {
struct yf2584 F;
memset((void *)&F, 0, sizeof F);
F.p2581 = a_p2581;
F.p2582 = a_p2582;
F.p2583 = a_p2583;
F.v5555 = yr2595_MakeRep1(F.p2581, F.p2582, F.p2583);
if ((!(((*(yR99 *)rt_nil_check(F.p2581))).f_text == INT64_C(0)))) {
F.v5557 = yr2330_Real(yr2244_Lookup(((*(yR99 *)rt_nil_check(F.p2581))).f_text, ((*(yR99 *)rt_nil_check(F.p2581))).f_line));
if (((!yr2588_Conforms(((*(yR119 *)rt_nil_check(F.v5557))).f_rep, F.v5555)) || ((((((*(yR99 *)rt_nil_check(F.p2581))).f_kind == v666)) && ((!(((*(yR104 *)rt_nil_check(F.v5555))).f_tid == ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5557))).f_rep))).f_tid))))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2581))).f_line, ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5557))).f_rep))).f_tname, y_str(": the concrete type is not a representation of this type (rule 61, VII.G)", 73));
}
}
{ void * rv5560 = F.v5555;
return rv5560; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2588_Conforms(void * a_p2589, void * a_p2590) {
struct yf2591 F;
memset((void *)&F, 0, sizeof F);
F.p2589 = a_p2589;
F.p2590 = a_p2590;
if ((!(((*(yR104 *)rt_nil_check(F.p2589))).f_kind == ((*(yR104 *)rt_nil_check(F.p2590))).f_kind))) {
{ rt_int rv5577 = 0;
return rv5577; }
}
if ((((*(yR104 *)rt_nil_check(F.p2589))).f_kind == v819)) {
F.v5565 = ((*(yR104 *)rt_nil_check(F.p2589))).f_fields;
F.v5567 = ((*(yR104 *)rt_nil_check(F.p2590))).f_fields;
while ((((!(F.v5565 == ((void *)0)))) && ((!(F.v5567 == ((void *)0)))))) {
if (((((!(((*(yR109 *)rt_nil_check(F.v5565))).f_name == ((*(yR109 *)rt_nil_check(F.v5567))).f_name))) || ((!(((*(yR109 *)rt_nil_check(F.v5565))).f_isconst == ((*(yR109 *)rt_nil_check(F.v5567))).f_isconst)))) || ((!(((*(yR109 *)rt_nil_check(F.v5565))).f_variant == ((*(yR109 *)rt_nil_check(F.v5567))).f_variant))))) {
{ rt_int rv5579 = 0;
return rv5579; }
}
if ((!yr2416_SameType(((*(yR109 *)rt_nil_check(F.v5565))).f_rep, ((*(yR109 *)rt_nil_check(F.v5567))).f_rep))) {
{ rt_int rv5581 = 0;
return rv5581; }
}
F.v5565 = ((*(yR109 *)rt_nil_check(F.v5565))).f_next;
F.v5567 = ((*(yR109 *)rt_nil_check(F.v5567))).f_next;
}
{ rt_int rv5582 = (((F.v5565 == ((void *)0))) && ((F.v5567 == ((void *)0))));
return rv5582; }
}
if ((((*(yR104 *)rt_nil_check(F.p2589))).f_kind == v816)) {
if ((!(((*(yR104 *)rt_nil_check(F.p2589))).f_nidx == ((*(yR104 *)rt_nil_check(F.p2590))).f_nidx))) {
{ rt_int rv5584 = 0;
return rv5584; }
}
F.v5569 = ((*(yR104 *)rt_nil_check(F.p2589))).f_idx;
F.v5571 = ((*(yR104 *)rt_nil_check(F.p2590))).f_idx;
while ((!(F.v5569 == ((void *)0)))) {
if ((!yr2458_Identical(F.v5569, F.v5571))) {
{ rt_int rv5586 = 0;
return rv5586; }
}
F.v5569 = ((*(yR104 *)rt_nil_check(F.v5569))).f_link;
F.v5571 = ((*(yR104 *)rt_nil_check(F.v5571))).f_link;
}
{ rt_int rv5587 = yr2416_SameType(((*(yR104 *)rt_nil_check(F.p2589))).f_elem, ((*(yR104 *)rt_nil_check(F.p2590))).f_elem);
return rv5587; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2589))).f_kind == v810)) || ((((*(yR104 *)rt_nil_check(F.p2589))).f_kind == v813)))) {
if ((!(((*(yR104 *)rt_nil_check(F.p2589))).f_nlits == ((*(yR104 *)rt_nil_check(F.p2590))).f_nlits))) {
{ rt_int rv5589 = 0;
return rv5589; }
}
F.v5573 = ((*(yR104 *)rt_nil_check(F.p2589))).f_lits;
F.v5575 = ((*(yR104 *)rt_nil_check(F.p2590))).f_lits;
while ((((!(F.v5573 == ((void *)0)))) && ((!(F.v5575 == ((void *)0)))))) {
if ((((!(((*(yR99 *)rt_nil_check(F.v5573))).f_name == ((*(yR99 *)rt_nil_check(F.v5575))).f_name))) || (!yr1082_TEq(((*(yR99 *)rt_nil_check(F.v5573))).f_text, ((*(yR99 *)rt_nil_check(F.v5575))).f_text)))) {
{ rt_int rv5591 = 0;
return rv5591; }
}
F.v5573 = ((*(yR99 *)rt_nil_check(F.v5573))).f_next;
F.v5575 = ((*(yR99 *)rt_nil_check(F.v5575))).f_next;
}
{ rt_int rv5593 = 1;
return rv5593; }
}
if (((((((*(yR104 *)rt_nil_check(F.p2589))).f_kind == v828)) || ((((*(yR104 *)rt_nil_check(F.p2589))).f_kind == v825))) || ((((*(yR104 *)rt_nil_check(F.p2589))).f_kind == v822)))) {
if ((((((*(yR104 *)rt_nil_check(F.p2589))).f_elem == ((void *)0))) || ((((*(yR104 *)rt_nil_check(F.p2590))).f_elem == ((void *)0))))) {
{ rt_int rv5595 = 1;
return rv5595; }
}
{ rt_int rv5596 = yr2416_SameType(((*(yR104 *)rt_nil_check(F.p2589))).f_elem, ((*(yR104 *)rt_nil_check(F.p2590))).f_elem);
return rv5596; }
}
{ rt_int rv5598 = 1;
return rv5598; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2595_MakeRep1(void * a_p2596, rt_int a_p2597, rt_int a_p2598) {
struct yf2599 F;
memset((void *)&F, 0, sizeof F);
F.p2596 = a_p2596;
F.p2597 = a_p2597;
F.p2598 = a_p2598;
F.v5614 = ((*(yR99 *)rt_nil_check(F.p2596))).f_kind;
F.v5618 = INT64_C(0);
F.v5620 = F.p2597;
if ((!(((*(yR99 *)rt_nil_check(F.p2596))).f_text == INT64_C(0)))) {
F.v5612 = yr2330_Real(yr2244_Lookup(((*(yR99 *)rt_nil_check(F.p2596))).f_text, ((*(yR99 *)rt_nil_check(F.p2596))).f_line));
if ((((!(((*(yR119 *)rt_nil_check(F.v5612))).f_kind == v864))) && ((!(((*(yR119 *)rt_nil_check(F.v5612))).f_kind == v861))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2596))).f_line, ((*(yR99 *)rt_nil_check(F.p2596))).f_text, y_str(" is not a type", 14));
}
F.v5618 = ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5612))).f_rep))).f_tid;
F.v5620 = ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5612))).f_rep))).f_tname;
}
if ((F.v5614 == v666)) {
F.v5612 = yr2330_Real(yr2244_Lookup(((*(yR99 *)rt_nil_check(F.p2596))).f_name, ((*(yR99 *)rt_nil_check(F.p2596))).f_line));
if ((((!(((*(yR119 *)rt_nil_check(F.v5612))).f_kind == v864))) && ((!(((*(yR119 *)rt_nil_check(F.v5612))).f_kind == v861))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2596))).f_line, ((*(yR99 *)rt_nil_check(F.p2596))).f_name, y_str(" is not a representation", 24));
}
F.v5604 = ((*(yR119 *)rt_nil_check(F.v5612))).f_rep;
if ((!(((*(yR99 *)rt_nil_check(F.p2596))).f_a == ((void *)0)))) {
F.v5604 = yr2343_CopyRep(F.v5604);
yr2553_Qualify(F.v5604, ((*(yR99 *)rt_nil_check(F.p2596))).f_a);
}
{ void * rv5625 = F.v5604;
return rv5625; }
}
if ((F.v5618 == INT64_C(0))) {
F.v5618 = yr2574_NewTid(F.p2597);
if ((F.v5620 == INT64_C(0))) {
F.v5620 = F.v5618;
}
}
if ((F.v5614 == v669)) {
F.v5604 = yr2336_NewRep(v810, F.v5618);
((*(yR104 *)rt_nil_check(F.v5604))).f_tname = F.v5620;
((*(yR104 *)rt_nil_check(F.v5604))).f_ordered = (((*(yR99 *)rt_nil_check(F.p2596))).f_flag == INT64_C(1));
((*(yR104 *)rt_nil_check(F.v5604))).f_lits = ((*(yR99 *)rt_nil_check(F.p2596))).f_a;
((*(yR104 *)rt_nil_check(F.v5604))).f_nlits = yr1903_Count(((*(yR99 *)rt_nil_check(F.p2596))).f_a);
yr2566_SetRange(F.v5604, INT64_C(0), rt_range(rt_sub(((*(yR104 *)rt_nil_check(F.v5604))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr2560_DefineLits(F.v5604);
if ((!(((*(yR99 *)rt_nil_check(F.p2596))).f_b == ((void *)0)))) {
yr2553_Qualify(F.v5604, ((*(yR99 *)rt_nil_check(F.p2596))).f_b);
}
{ void * rv5632 = F.v5604;
return rv5632; }
}
if ((F.v5614 == v672)) {
F.v5604 = yr2336_NewRep(v813, F.v5618);
((*(yR104 *)rt_nil_check(F.v5604))).f_tname = F.v5620;
((*(yR104 *)rt_nil_check(F.v5604))).f_ordered = 1;
((*(yR104 *)rt_nil_check(F.v5604))).f_lits = ((*(yR99 *)rt_nil_check(F.p2596))).f_a;
((*(yR104 *)rt_nil_check(F.v5604))).f_nlits = yr1903_Count(((*(yR99 *)rt_nil_check(F.p2596))).f_a);
if ((((*(yR104 *)rt_nil_check(F.v5604))).f_nlits > INT64_C(256))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2596))).f_line, y_str("this implementation takes alphabets of up to 256 characters", 59));
}
yr2566_SetRange(F.v5604, INT64_C(0), rt_range(rt_sub(((*(yR104 *)rt_nil_check(F.v5604))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((!(((*(yR99 *)rt_nil_check(F.p2596))).f_b == ((void *)0)))) {
yr2553_Qualify(F.v5604, ((*(yR99 *)rt_nil_check(F.p2596))).f_b);
}
{ void * rv5639 = F.v5604;
return rv5639; }
}
if ((F.v5614 == v675)) {
F.v5604 = yr2336_NewRep(v816, F.v5618);
((*(yR104 *)rt_nil_check(F.v5604))).f_tname = F.v5620;
F.v5616 = ((*(yR99 *)rt_nil_check(F.p2596))).f_a;
F.v5610 = ((void *)0);
while ((!(F.v5616 == ((void *)0)))) {
F.v5608 = yr2343_CopyRep(yr2580_MakeRep(F.v5616, INT64_C(0), 0));
if ((!yr2349_IsDiscrete(F.v5608))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.v5616))).f_line, y_str("an index is an integer or scalar representation", 47));
}
yr2439_CheckRepresented(F.v5608, ((*(yR99 *)rt_nil_check(F.v5616))).f_line);
((*(yR104 *)rt_nil_check(F.v5608))).f_link = ((void *)0);
if ((F.v5610 == ((void *)0))) {
((*(yR104 *)rt_nil_check(F.v5604))).f_idx = F.v5608;
} else {
((*(yR104 *)rt_nil_check(F.v5610))).f_link = F.v5608;
}
F.v5610 = F.v5608;
((*(yR104 *)rt_nil_check(F.v5604))).f_nidx = rt_range(rt_add(((*(yR104 *)rt_nil_check(F.v5604))).f_nidx, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5616 = ((*(yR99 *)rt_nil_check(F.v5616))).f_next;
}
if ((((*(yR104 *)rt_nil_check(F.v5604))).f_nidx > INT64_C(4))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2596))).f_line, y_str("this implementation takes arrays of up to 4 dimensions", 54));
}
((*(yR104 *)rt_nil_check(F.v5604))).f_elem = yr2580_MakeRep(((*(yR99 *)rt_nil_check(F.p2596))).f_b, INT64_C(0), F.p2598);
if ((!F.p2598)) {
yr2439_CheckRepresented(((*(yR104 *)rt_nil_check(F.v5604))).f_elem, ((*(yR99 *)rt_nil_check(F.p2596))).f_line);
yr2615_BuildArrayDesc(F.v5604);
} else {
((*(yR104 *)rt_nil_check(F.v5604))).f_abstract = ((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.v5604))).f_elem))).f_abstract;
if ((!((*(yR104 *)rt_nil_check(F.v5604))).f_abstract)) {
yr2615_BuildArrayDesc(F.v5604);
}
}
((*(yR104 *)rt_nil_check(F.v5604))).f_deep = 1;
{ void * rv5649 = F.v5604;
return rv5649; }
}
if ((F.v5614 == v678)) {
F.v5604 = yr2336_NewRep(v819, F.v5618);
((*(yR104 *)rt_nil_check(F.v5604))).f_tname = F.v5620;
yr2645_MakeRecord(F.v5604, F.p2596, F.p2598);
{ void * rv5650 = F.v5604;
return rv5650; }
}
if (((((F.v5614 == v684)) || ((F.v5614 == v681))) || ((F.v5614 == v687)))) {
if ((F.v5614 == v684)) {
F.v5604 = yr2336_NewRep(v822, F.v5618);
((*(yR104 *)rt_nil_check(F.v5604))).f_tname = F.v5620;
if (((((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2596))).f_a))).f_kind == v666)) && ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2596))).f_a))).f_a == ((void *)0)))) && ((yr2232_Find(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2596))).f_a))).f_name) == ((void *)0))))) {
((*(yR104 *)rt_nil_check(F.v5604))).f_forward = ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2596))).f_a))).f_name;
((*(yR104 *)rt_nil_check(F.v5604))).f_fwdscope = v1267;
F.v5616 = yr1888_NewNode(v663, ((*(yR99 *)rt_nil_check(F.p2596))).f_line);
((*(yR99 *)rt_nil_check(F.v5616))).f_rep = F.v5604;
((*(yR99 *)rt_nil_check(F.v5616))).f_next = v1358;
v1358 = F.v5616;
{ void * rv5651 = F.v5604;
return rv5651; }
}
((*(yR104 *)rt_nil_check(F.v5604))).f_elem = yr2580_MakeRep(((*(yR99 *)rt_nil_check(F.p2596))).f_a, INT64_C(0), 0);
{ void * rv5654 = F.v5604;
return rv5654; }
}
if ((F.v5614 == v681)) {
F.v5604 = yr2336_NewRep(v825, F.v5618);
((*(yR104 *)rt_nil_check(F.v5604))).f_tname = F.v5620;
((*(yR104 *)rt_nil_check(F.v5604))).f_elem = yr2580_MakeRep(((*(yR99 *)rt_nil_check(F.p2596))).f_a, INT64_C(0), F.p2598);
{ void * rv5656 = F.v5604;
return rv5656; }
}
F.v5604 = yr2336_NewRep(v828, F.v5618);
((*(yR104 *)rt_nil_check(F.v5604))).f_tname = F.v5620;
((*(yR104 *)rt_nil_check(F.v5604))).f_elem = yr2580_MakeRep(((*(yR99 *)rt_nil_check(F.p2596))).f_a, INT64_C(0), 0);
if ((!yr2349_IsDiscrete(((*(yR104 *)rt_nil_check(F.v5604))).f_elem))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2596))).f_line, y_str("a set is of an integer or scalar representation", 47));
}
yr2439_CheckRepresented(((*(yR104 *)rt_nil_check(F.v5604))).f_elem, ((*(yR99 *)rt_nil_check(F.p2596))).f_line);
{ void * rv5660 = F.v5604;
return rv5660; }
}
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2596))).f_line, y_str("this representation is not translated", 37));
{ void * rv5662 = ((void *)0);
return rv5662; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2603_ResolvePending(rt_int a_p2604, void * a_p2605) {
struct yf2606 F;
memset((void *)&F, 0, sizeof F);
F.p2604 = a_p2604;
F.p2605 = a_p2605;
F.v5667 = v1358;
F.v5669 = ((void *)0);
while ((!(F.v5667 == ((void *)0)))) {
if ((((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v5667))).f_rep))).f_forward == F.p2604)) {
((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v5667))).f_rep))).f_elem = F.p2605;
((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v5667))).f_rep))).f_forward = INT64_C(0);
if ((F.v5669 == ((void *)0))) {
v1358 = ((*(yR99 *)rt_nil_check(F.v5667))).f_next;
} else {
((*(yR99 *)rt_nil_check(F.v5669))).f_next = ((*(yR99 *)rt_nil_check(F.v5667))).f_next;
}
} else {
F.v5669 = F.v5667;
}
F.v5667 = ((*(yR99 *)rt_nil_check(F.v5667))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2610_CheckPending(void) {
struct yf2611 F;
memset((void *)&F, 0, sizeof F);
F.v5673 = v1358;
while ((!(F.v5673 == ((void *)0)))) {
if ((((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v5673))).f_rep))).f_fwdscope >= v1267)) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.v5673))).f_line, ((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v5673))).f_rep))).f_forward, y_str(" is named by a pointer but not declared", 39));
}
F.v5673 = ((*(yR99 *)rt_nil_check(F.v5673))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2615_BuildArrayDesc(void * a_p2616) {
struct yf2617 F;
memset((void *)&F, 0, sizeof F);
F.p2616 = a_p2616;
yr2410_NewDesc(F.p2616);
yr1020_SB();
yr1031_SA(y_str("{ rt_int lo[", 12));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2616))).f_nidx);
yr1031_SA(y_str("] = {", 5));
F.v5678 = ((*(yR104 *)rt_nil_check(F.p2616))).f_idx;
F.v5682 = 1;
while ((!(F.v5678 == ((void *)0)))) {
if ((!F.v5682)) {
yr1031_SA(y_str(", ", 2));
}
F.v5682 = 0;
yr1038_ST(yr2479_LoText(F.v5678));
F.v5678 = ((*(yR104 *)rt_nil_check(F.v5678))).f_link;
}
yr1031_SA(y_str("}, hi[", 6));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2616))).f_nidx);
yr1031_SA(y_str("] = {", 5));
F.v5678 = ((*(yR104 *)rt_nil_check(F.p2616))).f_idx;
F.v5682 = 1;
while ((!(F.v5678 == ((void *)0)))) {
if ((!F.v5682)) {
yr1031_SA(y_str(", ", 2));
}
F.v5682 = 0;
yr1038_ST(yr2485_HiText(F.v5678));
F.v5678 = ((*(yR104 *)rt_nil_check(F.v5678))).f_link;
}
yr1031_SA(y_str("}; y_desc_array(", 16));
yr1038_ST(yr2404_DescOf(F.p2616));
yr1031_SA(y_str(", ", 2));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2616))).f_nidx);
yr1031_SA(y_str(", lo, hi, ", 10));
yr1038_ST(yr2404_DescOf(((*(yR104 *)rt_nil_check(F.p2616))).f_elem));
yr1031_SA(y_str("); }", 4));
F.v5680 = yr1050_SE();
yr1126_Emit(F.v5680);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2621_AddField(void * a_p2622, void * * a_p2623, rt_int a_p2624, void * a_p2625, rt_int a_p2626, rt_int a_p2627, void * a_p2628, rt_int a_p2629) {
struct yf2630 F;
memset((void *)&F, 0, sizeof F);
F.p2622 = a_p2622;
F.p2623 = a_p2623;
F.p2624 = a_p2624;
F.p2625 = a_p2625;
F.p2626 = a_p2626;
F.p2627 = a_p2627;
F.p2628 = a_p2628;
F.p2629 = a_p2629;
F.v5707 = ((*(yR104 *)rt_nil_check(F.p2622))).f_fields;
while ((!(F.v5707 == ((void *)0)))) {
if ((((*(yR109 *)rt_nil_check(F.v5707))).f_name == F.p2624)) {
yr1180_FailN(F.p2629, F.p2624, y_str(" is a component twice", 21));
}
F.v5707 = ((*(yR109 *)rt_nil_check(F.v5707))).f_next;
}
({ F.v5707 = rt_alloc(sizeof(yR109)); });
(*(yR109 *)rt_nil_check(F.v5707)) = ((yR109){ .f_name = F.p2624, .f_rep = F.p2625, .f_isconst = F.p2626, .f_variant = F.p2627, .f_labels = F.p2628, .f_next = ((void *)0) });
if (((*F.p2623) == ((void *)0))) {
((*(yR104 *)rt_nil_check(F.p2622))).f_fields = F.v5707;
} else {
((*(yR109 *)rt_nil_check((*F.p2623)))).f_next = F.v5707;
}
(*F.p2623) = F.v5707;
if (yr2373_Deep(F.p2625)) {
((*(yR104 *)rt_nil_check(F.p2622))).f_deep = 1;
}
if (((*(yR104 *)rt_nil_check(F.p2625))).f_abstract) {
((*(yR104 *)rt_nil_check(F.p2622))).f_abstract = 1;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2634_AddFields(void * a_p2635, void * * a_p2636, void * a_p2637, rt_int a_p2638, void * a_p2639, rt_int a_p2640) {
struct yf2641 F;
memset((void *)&F, 0, sizeof F);
F.p2635 = a_p2635;
F.p2636 = a_p2636;
F.p2637 = a_p2637;
F.p2638 = a_p2638;
F.p2639 = a_p2639;
F.p2640 = a_p2640;
F.v5719 = F.p2637;
F.v5721 = F.p2637;
while ((!(F.v5719 == ((void *)0)))) {
F.v5723 = yr2580_MakeRep(((*(yR99 *)rt_nil_check(F.v5719))).f_b, INT64_C(0), F.p2640);
if ((!F.p2640)) {
yr2439_CheckRepresented(F.v5723, ((*(yR99 *)rt_nil_check(F.v5719))).f_line);
}
F.v5721 = ((*(yR99 *)rt_nil_check(F.v5719))).f_a;
while ((!(F.v5721 == ((void *)0)))) {
yr2621_AddField(F.p2635, &(*F.p2636), ((*(yR99 *)rt_nil_check(F.v5721))).f_name, F.v5723, (((*(yR99 *)rt_nil_check(F.v5719))).f_ival == v264), F.p2638, F.p2639, ((*(yR99 *)rt_nil_check(F.v5721))).f_line);
F.v5721 = ((*(yR99 *)rt_nil_check(F.v5721))).f_next;
}
F.v5719 = ((*(yR99 *)rt_nil_check(F.v5719))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2645_MakeRecord(void * a_p2646, void * a_p2647, rt_int a_p2648) {
struct yf2649 F;
memset((void *)&F, 0, sizeof F);
F.p2646 = a_p2646;
F.p2647 = a_p2647;
F.p2648 = a_p2648;
F.v5730 = ((void *)0);
F.v5738 = INT64_C(0);
F.v5745 = INT64_C(0);
yr2634_AddFields(F.p2646, &F.v5730, ((*(yR99 *)rt_nil_check(F.p2647))).f_a, INT64_C(0), ((void *)0), F.p2648);
if ((!(((*(yR99 *)rt_nil_check(F.p2647))).f_b == ((void *)0)))) {
F.v5732 = ((*(yR99 *)rt_nil_check(F.p2647))).f_b;
F.v5736 = yr2580_MakeRep(((*(yR99 *)rt_nil_check(F.v5732))).f_b, INT64_C(0), 0);
if ((!yr2349_IsDiscrete(F.v5736))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.v5732))).f_line, y_str("the case-selection component is integer or scalar", 49));
}
yr2621_AddField(F.p2646, &F.v5730, ((*(yR99 *)rt_nil_check(F.v5732))).f_name, F.v5736, 1, INT64_C(0), ((void *)0), ((*(yR99 *)rt_nil_check(F.v5732))).f_line);
((*(yR104 *)rt_nil_check(F.p2646))).f_selector = F.v5730;
F.v5734 = ((*(yR99 *)rt_nil_check(F.v5732))).f_a;
while ((!(F.v5734 == ((void *)0)))) {
F.v5738 = rt_range(rt_add(F.v5738, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr2634_AddFields(F.p2646, &F.v5730, ((*(yR99 *)rt_nil_check(F.v5734))).f_b, F.v5738, ((*(yR99 *)rt_nil_check(F.v5734))).f_a, F.p2648);
F.v5734 = ((*(yR99 *)rt_nil_check(F.v5734))).f_next;
}
}
if ((F.p2648 && ((*(yR104 *)rt_nil_check(F.p2646))).f_abstract)) {
return;
}
((*(yR104 *)rt_nil_check(F.p2646))).f_abstract = 0;
((*(yR104 *)rt_nil_check(F.p2646))).f_cname = yr1194_Fresh(y_str("yR", 2));
yr1020_SB();
yr1031_SA(y_str("typedef struct ", 15));
yr1038_ST(((*(yR104 *)rt_nil_check(F.p2646))).f_cname);
yr1031_SA(y_str(" ", 1));
yr1038_ST(((*(yR104 *)rt_nil_check(F.p2646))).f_cname);
yr1031_SA(y_str(";", 1));
F.v5743 = yr1050_SE();
yr1104_Put(&v972, F.v5743);
yr1020_SB();
yr1031_SA(y_str("struct ", 7));
yr1038_ST(((*(yR104 *)rt_nil_check(F.p2646))).f_cname);
yr1031_SA(y_str(" {", 2));
F.v5741 = ((*(yR104 *)rt_nil_check(F.p2646))).f_fields;
while ((!(F.v5741 == ((void *)0)))) {
yr1031_SA(y_str(" ", 1));
yr1038_ST(yr2398_CType(((*(yR109 *)rt_nil_check(F.v5741))).f_rep));
yr1031_SA(y_str(" f_", 3));
yr1038_ST(((*(yR109 *)rt_nil_check(F.v5741))).f_name);
yr1031_SA(y_str(";", 1));
F.v5745 = rt_range(rt_add(F.v5745, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5741 = ((*(yR109 *)rt_nil_check(F.v5741))).f_next;
}
if ((F.v5745 == INT64_C(0))) {
yr1031_SA(y_str(" int empty_;", 12));
}
yr1031_SA(y_str(" };", 3));
F.v5743 = yr1050_SE();
yr1104_Put(&v974, F.v5743);
yr2410_NewDesc(F.p2646);
yr1020_SB();
yr1031_SA(y_str("{ static const size_t o[] = {", 29));
F.v5741 = ((*(yR104 *)rt_nil_check(F.p2646))).f_fields;
while ((!(F.v5741 == ((void *)0)))) {
yr1031_SA(y_str("offsetof(", 9));
yr1038_ST(((*(yR104 *)rt_nil_check(F.p2646))).f_cname);
yr1031_SA(y_str(", f_", 4));
yr1038_ST(((*(yR109 *)rt_nil_check(F.v5741))).f_name);
yr1031_SA(y_str("), ", 3));
F.v5741 = ((*(yR109 *)rt_nil_check(F.v5741))).f_next;
}
yr1031_SA(y_str("0}; const ydesc **f = rt_alloc(", 31));
yr1044_SI(rt_range(rt_add(F.v5745, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1031_SA(y_str(" * sizeof *f);", 14));
F.v5738 = INT64_C(0);
F.v5741 = ((*(yR104 *)rt_nil_check(F.p2646))).f_fields;
while ((!(F.v5741 == ((void *)0)))) {
yr1031_SA(y_str(" f[", 3));
yr1044_SI(F.v5738);
yr1031_SA(y_str("] = ", 4));
yr1038_ST(yr2404_DescOf(((*(yR109 *)rt_nil_check(F.v5741))).f_rep));
yr1031_SA(y_str(";", 1));
F.v5738 = rt_range(rt_add(F.v5738, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5741 = ((*(yR109 *)rt_nil_check(F.v5741))).f_next;
}
yr1031_SA(y_str(" y_desc_record(", 15));
yr1038_ST(yr2404_DescOf(F.p2646));
yr1031_SA(y_str(", sizeof(", 9));
yr1038_ST(((*(yR104 *)rt_nil_check(F.p2646))).f_cname);
yr1031_SA(y_str("), ", 3));
yr1044_SI(F.v5745);
yr1031_SA(y_str(", o, (const ydesc *const *)f); }", 32));
F.v5743 = yr1050_SE();
yr1126_Emit(F.v5743);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2653_FindField(void * a_p2654, rt_int a_p2655) {
struct yf2656 F;
memset((void *)&F, 0, sizeof F);
F.p2654 = a_p2654;
F.p2655 = a_p2655;
F.v5792 = ((*(yR104 *)rt_nil_check(F.p2654))).f_fields;
while ((!(F.v5792 == ((void *)0)))) {
if ((((*(yR109 *)rt_nil_check(F.v5792))).f_name == F.p2655)) {
{ void * rv5793 = F.v5792;
return rv5793; }
}
F.v5792 = ((*(yR109 *)rt_nil_check(F.v5792))).f_next;
}
{ void * rv5794 = ((void *)0);
return rv5794; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2660_CharOrd(void * a_p2661, rt_int a_p2662) {
struct yf2663 F;
memset((void *)&F, 0, sizeof F);
F.p2661 = a_p2661;
F.p2662 = a_p2662;
if ((((*(yR104 *)rt_nil_check(F.p2661))).f_tid == ((*(yR104 *)rt_nil_check(v1340))).f_tid)) {
if ((((rt_int *)(v914).p)[y_ix1(v914, F.p2662)] == INT64_C(1))) {
{ rt_int rv5810 = ((rt_int *)(v959).p)[y_ix1(v959, yr1097_TChar(F.p2662, INT64_C(1)))];
return rv5810; }
}
F.v5801 = INT64_C(0);
F.v5805 = INT64_C(1);
F.lo5816 = INT64_C(1);
F.hi5817 = ((rt_int *)(v914).p)[y_ix1(v914, v1468)];
{ rt_int hi5821 = F.hi5817;
for (rt_int i5820 = F.lo5816; i5820 <= hi5821; i5820++) { F.c_5819 = i5820;
if ((yr1097_TChar(v1468, rt_range(F.c_5819, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 32)) {
F.v5807 = yr1062_Intern(rt_range(rt_add(((rt_int *)(v912).p)[y_ix1(v912, v1468)], (rt_sub(F.v5805, INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub(F.c_5819, F.v5805), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((F.v5807 == F.p2662)) {
if ((F.v5801 < INT64_C(32))) {
{ rt_int rv5828 = F.v5801;
return rv5828; }
}
if ((F.v5801 == INT64_C(32))) {
{ rt_int rv5831 = INT64_C(32);
return rv5831; }
}
if ((F.v5801 == INT64_C(33))) {
{ rt_int rv5834 = INT64_C(127);
return rv5834; }
}
if ((F.v5801 == INT64_C(34))) {
{ rt_int rv5837 = INT64_C(39);
return rv5837; }
}
{ rt_int rv5839 = INT64_C(34);
return rv5839; }
}
F.v5801 = rt_range(rt_add(F.v5801, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5805 = rt_range(rt_add(F.c_5819, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i5820 == hi5821) break;
}}
{ rt_int rv5845 = INT64_C(-1);
return rv5845; }
}
if ((!(((*(yR104 *)rt_nil_check(F.p2661))).f_kind == v813))) {
{ rt_int rv5847 = INT64_C(-1);
return rv5847; }
}
F.v5799 = ((*(yR104 *)rt_nil_check(F.p2661))).f_lits;
F.v5803 = INT64_C(0);
while ((!(F.v5799 == ((void *)0)))) {
if (yr1082_TEq(((*(yR99 *)rt_nil_check(F.v5799))).f_text, F.p2662)) {
{ rt_int rv5849 = F.v5803;
return rv5849; }
}
F.v5803 = rt_range(rt_add(F.v5803, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5799 = ((*(yR99 *)rt_nil_check(F.v5799))).f_next;
}
{ rt_int rv5853 = INT64_C(-1);
return rv5853; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2667_AlphabetFor(void * a_p2668, void * a_p2669) {
struct yf2670 F;
memset((void *)&F, 0, sizeof F);
F.p2668 = a_p2668;
F.p2669 = a_p2669;
F.v5862 = ((void *)0);
F.v5864 = INT64_C(0);
F.v5867 = INT64_C(0);
if ((!(((*(yR99 *)rt_nil_check(F.p2668))).f_d == ((void *)0)))) {
F.v5858 = yr2330_Real(yr2244_Lookup(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2668))).f_d))).f_name, ((*(yR99 *)rt_nil_check(F.p2668))).f_line));
if ((((((!(((*(yR119 *)rt_nil_check(F.v5858))).f_kind == v861))) && ((!(((*(yR119 *)rt_nil_check(F.v5858))).f_kind == v864))))) || ((!(((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5858))).f_rep))).f_kind == v813))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2668))).f_line, ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2668))).f_d))).f_name, y_str(" is not an alphabet", 19));
}
{ void * rv5870 = ((*(yR119 *)rt_nil_check(F.v5858))).f_rep;
return rv5870; }
}
F.v5867 = INT64_C(1);
if ((((((*(yR99 *)rt_nil_check(F.p2668))).f_kind == v765)) || ((yr2660_CharOrd(v1340, ((*(yR99 *)rt_nil_check(F.p2668))).f_text) >= INT64_C(0))))) {
F.v5864 = INT64_C(1);
F.v5862 = v1340;
}
F.v5860 = v1471;
while ((!(F.v5860 == ((void *)0)))) {
F.v5858 = yr2232_Find(((*(yR99 *)rt_nil_check(F.v5860))).f_name);
if ((!(F.v5858 == ((void *)0)))) {
F.v5858 = yr2330_Real(F.v5858);
if ((((((((*(yR119 *)rt_nil_check(F.v5858))).f_kind == v861)) || ((((*(yR119 *)rt_nil_check(F.v5858))).f_kind == v864)))) && ((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5858))).f_rep))).f_tid == ((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v5860))).f_rep))).f_tid)))) {
F.v5867 = rt_range(rt_add(F.v5867, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((((*(yR99 *)rt_nil_check(F.p2668))).f_kind == v762)) && ((yr2660_CharOrd(((*(yR99 *)rt_nil_check(F.v5860))).f_rep, ((*(yR99 *)rt_nil_check(F.p2668))).f_text) >= INT64_C(0))))) {
F.v5864 = rt_range(rt_add(F.v5864, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5862 = ((*(yR99 *)rt_nil_check(F.v5860))).f_rep;
}
}
}
F.v5860 = ((*(yR99 *)rt_nil_check(F.v5860))).f_next;
}
if ((((((*(yR99 *)rt_nil_check(F.p2668))).f_kind == v765)) && ((F.v5867 > INT64_C(1))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2668))).f_line, y_str("a string in a scope with two alphabets is qualified by its alphabet (VI.A.3)", 76));
}
if ((F.v5864 > INT64_C(1))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2668))).f_line, yr3187_Join(yr1055_T(y_str("'", 1)), ((*(yR99 *)rt_nil_check(F.p2668))).f_text, yr1055_T(y_str("'", 1))), y_str(" is a character of two alphabets here: qualify it (VI.A.3)", 58));
}
if ((F.v5862 == ((void *)0))) {
{ void * rv5885 = v1340;
return rv5885; }
}
{ void * rv5886 = F.v5862;
return rv5886; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2674_CharValue(void * a_p2675, rt_int a_p2676, rt_int a_p2677) {
struct yf2678 F;
memset((void *)&F, 0, sizeof F);
F.p2675 = a_p2675;
F.p2676 = a_p2676;
F.p2677 = a_p2677;
F.v5892 = yr2660_CharOrd(F.p2675, F.p2676);
if ((F.v5892 < INT64_C(0))) {
yr1020_SB();
yr1031_SA(y_str("'", 1));
yr1038_ST(F.p2676);
yr1031_SA(y_str("' is not a character of ", 24));
yr1038_ST(((*(yR104 *)rt_nil_check(F.p2675))).f_tname);
F.v5894 = yr1050_SE();
yr1151_Fail(F.p2677, F.v5894);
}
{ rt_int rv5898 = F.v5892;
return rv5898; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2682_StringCodes(void * a_p2683, rt_int a_p2684, rt_int * a_p2685, rt_int a_p2686) {
struct yf2687 F;
memset((void *)&F, 0, sizeof F);
F.p2683 = a_p2683;
F.p2684 = a_p2684;
F.p2685_o = a_p2685;
F.p2686 = a_p2686;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&F.yd_5918, 1, lo, hi, &y_d_int); }
y_init(&F.yd_5918, &F.v5920);
F.p2685 = INT64_C(0);
F.v5905 = INT64_C(1);
while ((F.v5905 <= ((rt_int *)(v914).p)[y_ix1(v914, F.p2684)])) {
F.v5922 = yr1097_TChar(F.p2684, F.v5905);
if ((F.v5922 == 39)) {
F.v5907 = rt_range(rt_add(F.v5905, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1097_TChar(F.p2684, F.v5907) == 39))) {
F.v5907 = rt_range(rt_add(F.v5907, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v5924 = yr1062_Intern(rt_range(rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.p2684)], F.v5905), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v5907, F.v5905)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v5909 = yr2674_CharValue(F.p2683, F.v5924, F.p2686);
F.v5905 = rt_range(rt_add(F.v5907, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v5924 = yr1062_Intern(rt_range(rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.p2684)], (rt_sub(F.v5905, INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), INT64_C(1));
F.v5909 = yr2674_CharValue(F.p2683, F.v5924, F.p2686);
F.v5905 = rt_range(rt_add(F.v5905, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.p2685 >= INT64_C(4096))) {
yr1172_FailS(F.p2686, y_str("string literal too long", 23));
}
F.p2685 = rt_range(rt_add(F.p2685, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(F.v5920).p)[y_ix1(F.v5920, F.p2685)] = F.v5909;
}
yr1020_SB();
yr1025_SC(34);
F.lo5953 = INT64_C(1);
F.hi5954 = F.p2685;
{ rt_int hi5958 = F.hi5954;
for (rt_int i5957 = F.lo5953; i5957 <= hi5958; i5957++) { F.c_5956 = i5957;
F.v5909 = ((rt_int *)(F.v5920).p)[y_ix1(F.v5920, F.c_5956)];
if ((((F.v5909 == INT64_C(34))) || ((F.v5909 == INT64_C(92))))) {
yr1025_SC(92);
yr1025_SC(((unsigned char *)(v970).p)[y_ix1(v970, F.v5909)]);
} else if (((((F.v5909 >= INT64_C(32))) && ((F.v5909 < INT64_C(127)))) && (((((!(F.v5909 == INT64_C(63)))) || ((F.c_5956 == INT64_C(1)))) || ((!(((rt_int *)(F.v5920).p)[y_ix1(F.v5920, rt_sub(F.c_5956, INT64_C(1)))] == INT64_C(63)))))))) {
yr1025_SC(((unsigned char *)(v970).p)[y_ix1(v970, F.v5909)]);
} else {
yr1025_SC(92);
yr1025_SC(((unsigned char *)(v970).p)[y_ix1(v970, rt_add(INT64_C(48), (rt_div(F.v5909, INT64_C(64)))))]);
yr1025_SC(((unsigned char *)(v970).p)[y_ix1(v970, rt_add(INT64_C(48), (rt_mod((rt_div(F.v5909, INT64_C(8))), INT64_C(8)))))]);
yr1025_SC(((unsigned char *)(v970).p)[y_ix1(v970, rt_add(INT64_C(48), (rt_mod(F.v5909, INT64_C(8)))))]);
}
if (i5957 == hi5958) break;
}}
yr1025_SC(34);
{ rt_int rv5985 = yr1050_SE();
(*F.p2685_o) = F.p2685;
return rv5985; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2691_Manifest(void * a_p2692, rt_int * a_p2693, rt_int * a_p2694) {
struct yf2695 F;
memset((void *)&F, 0, sizeof F);
F.p2692 = a_p2692;
F.p2693_o = a_p2693;
F.p2694_o = a_p2694;
F.p2693 = 0;
F.p2694 = INT64_C(0);
if ((((*(yR99 *)rt_nil_check(F.p2692))).f_kind == v753)) {
F.p2693 = 1;
F.p2694 = ((*(yR99 *)rt_nil_check(F.p2692))).f_ival;
(*F.p2693_o) = F.p2693;
(*F.p2694_o) = F.p2694;
return;
}
if ((((*(yR99 *)rt_nil_check(F.p2692))).f_kind == v762)) {
F.v6003 = yr2667_AlphabetFor(F.p2692, ((void *)0));
F.p2694 = yr2660_CharOrd(F.v6003, ((*(yR99 *)rt_nil_check(F.p2692))).f_text);
F.p2693 = (F.p2694 >= INT64_C(0));
(*F.p2693_o) = F.p2693;
(*F.p2694_o) = F.p2694;
return;
}
if ((((*(yR99 *)rt_nil_check(F.p2692))).f_kind == v771)) {
if ((!(((*(yR99 *)rt_nil_check(F.p2692))).f_d == ((void *)0)))) {
F.v5991 = yr2330_Real(yr2244_Lookup(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2692))).f_d))).f_name, ((*(yR99 *)rt_nil_check(F.p2692))).f_line));
F.v5991 = yr2290_FindLit(((*(yR99 *)rt_nil_check(F.p2692))).f_name, ((*(yR119 *)rt_nil_check(F.v5991))).f_rep);
} else {
F.v5991 = yr2232_Find(((*(yR99 *)rt_nil_check(F.p2692))).f_name);
}
if ((F.v5991 == ((void *)0))) {
(*F.p2693_o) = F.p2693;
(*F.p2694_o) = F.p2694;
return;
}
F.v5991 = yr2330_Real(F.v5991);
if ((((((((*(yR119 *)rt_nil_check(F.v5991))).f_kind == v867)) || ((((*(yR119 *)rt_nil_check(F.v5991))).f_kind == v858)))) && ((*(yR119 *)rt_nil_check(F.v5991))).f_hasmv)) {
F.p2693 = 1;
F.p2694 = ((*(yR119 *)rt_nil_check(F.v5991))).f_mval;
}
(*F.p2693_o) = F.p2693;
(*F.p2694_o) = F.p2694;
return;
}
if ((((*(yR99 *)rt_nil_check(F.p2692))).f_kind == v795)) {
yr2691_Manifest(((*(yR99 *)rt_nil_check(F.p2692))).f_a, &F.p2693, &F.p2694);
(*F.p2693_o) = F.p2693;
(*F.p2694_o) = F.p2694;
return;
}
if ((((*(yR99 *)rt_nil_check(F.p2692))).f_kind == v789)) {
yr2691_Manifest(((*(yR99 *)rt_nil_check(F.p2692))).f_a, &F.p2693, &F.p2694);
F.p2694 = rt_range(rt_neg(F.p2694), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2693_o) = F.p2693;
(*F.p2694_o) = F.p2694;
return;
}
if ((((*(yR99 *)rt_nil_check(F.p2692))).f_kind == v792)) {
yr2691_Manifest(((*(yR99 *)rt_nil_check(F.p2692))).f_a, &F.v5997, &F.v5993);
yr2691_Manifest(((*(yR99 *)rt_nil_check(F.p2692))).f_b, &F.v5999, &F.v5995);
if ((!((F.v5997 && F.v5999)))) {
(*F.p2693_o) = F.p2693;
(*F.p2694_o) = F.p2694;
return;
}
F.v6001 = ((*(yR99 *)rt_nil_check(F.p2692))).f_name;
F.p2693 = 1;
if ((F.v6001 == v567)) {
F.p2694 = rt_range(rt_add(F.v5993, F.v5995), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v6001 == v570)) {
F.p2694 = rt_range(rt_sub(F.v5993, F.v5995), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v6001 == v573)) {
F.p2694 = rt_range(rt_mul(F.v5993, F.v5995), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v6001 == v270)) && ((!(F.v5995 == INT64_C(0)))))) {
F.p2694 = rt_range(rt_div(F.v5993, F.v5995), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v6001 == v372)) && ((!(F.v5995 == INT64_C(0)))))) {
F.p2694 = rt_range(rt_mod(F.v5993, F.v5995), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v6001 == v231)) {
F.p2694 = rt_range(rt_mul(F.v5993, F.v5995), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v6001 == v393)) {
F.p2694 = rt_range(rt_sub((rt_add(F.v5993, F.v5995)), (rt_mul(F.v5993, F.v5995))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v6001 == v483)) {
F.p2694 = rt_range(rt_mod((rt_add(F.v5993, F.v5995)), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.p2693 = 0;
}
(*F.p2693_o) = F.p2693;
(*F.p2694_o) = F.p2694;
return;
}
if ((((*(yR99 *)rt_nil_check(F.p2692))).f_kind == v786)) {
yr2691_Manifest(((*(yR99 *)rt_nil_check(F.p2692))).f_a, &F.p2693, &F.p2694);
F.p2694 = rt_range(rt_sub(INT64_C(1), F.p2694), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2693_o) = F.p2693;
(*F.p2694_o) = F.p2694;
return;
}
if ((((*(yR99 *)rt_nil_check(F.p2692))).f_kind == v774)) {
yr2699_ManifestStd(F.p2692, &F.p2693, &F.p2694);
(*F.p2693_o) = F.p2693;
(*F.p2694_o) = F.p2694;
return;
}
(*F.p2693_o) = F.p2693;
(*F.p2694_o) = F.p2694;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2699_ManifestStd(void * a_p2700, rt_int * a_p2701, rt_int * a_p2702) {
struct yf2703 F;
memset((void *)&F, 0, sizeof F);
F.p2700 = a_p2700;
F.p2701_o = a_p2701;
F.p2702_o = a_p2702;
F.p2701 = 0;
F.p2702 = INT64_C(0);
F.v6033 = yr2232_Find(((*(yR99 *)rt_nil_check(F.p2700))).f_name);
if ((F.v6033 == ((void *)0))) {
(*F.p2701_o) = F.p2701;
(*F.p2702_o) = F.p2702;
return;
}
F.v6033 = yr2330_Real(F.v6033);
if ((!(((*(yR119 *)rt_nil_check(F.v6033))).f_kind == v885))) {
(*F.p2701_o) = F.p2701;
(*F.p2702_o) = F.p2702;
return;
}
F.v6035 = ((*(yR119 *)rt_nil_check(F.v6033))).f_mval;
if ((((((F.v6035 == v1366)) || ((F.v6035 == v1369))) || ((F.v6035 == v1372))) || ((F.v6035 == v1375)))) {
if ((!(yr1903_Count(((*(yR99 *)rt_nil_check(F.p2700))).f_a) == INT64_C(1)))) {
(*F.p2701_o) = F.p2701;
(*F.p2702_o) = F.p2702;
return;
}
yr2839_Expr(((*(yR99 *)rt_nil_check(F.p2700))).f_a, ((void *)0), &F.v6043, &F.v6045);
if ((!yr2349_IsDiscrete(F.v6045))) {
(*F.p2701_o) = F.p2701;
(*F.p2702_o) = F.p2702;
return;
}
if ((((F.v6035 == v1372)) || ((F.v6035 == v1375)))) {
if ((!(((*(yR104 *)rt_nil_check(F.v6045))).f_elem == ((void *)0)))) {
F.v6045 = ((*(yR104 *)rt_nil_check(F.v6045))).f_elem;
}
if ((!((*(yR104 *)rt_nil_check(F.v6045))).f_hasm)) {
(*F.p2701_o) = F.p2701;
(*F.p2702_o) = F.p2702;
return;
}
F.p2701 = 1;
if ((F.v6035 == v1372)) {
F.p2702 = ((*(yR104 *)rt_nil_check(F.v6045))).f_mlo;
} else {
F.p2702 = ((*(yR104 *)rt_nil_check(F.v6045))).f_mhi;
}
(*F.p2701_o) = F.p2701;
(*F.p2702_o) = F.p2702;
return;
}
yr2691_Manifest(((*(yR99 *)rt_nil_check(F.p2700))).f_a, &F.v6039, &F.p2702);
if ((!F.v6039)) {
(*F.p2701_o) = F.p2701;
(*F.p2702_o) = F.p2702;
return;
}
if ((F.v6035 == v1366)) {
F.p2702 = rt_range(rt_add(F.p2702, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.p2702 = rt_range(rt_sub(F.p2702, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((!(((*(yR104 *)rt_nil_check(F.v6045))).f_elem == ((void *)0)))) {
F.v6045 = ((*(yR104 *)rt_nil_check(F.v6045))).f_elem;
}
if ((((!(((*(yR104 *)rt_nil_check(F.v6045))).f_kind == v798))) && ((((F.p2702 < INT64_C(0))) || ((F.p2702 >= ((*(yR104 *)rt_nil_check(F.v6045))).f_nlits)))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2700))).f_line, ((*(yR99 *)rt_nil_check(F.p2700))).f_name, y_str(" goes beyond the end of the enumeration (XI)", 44));
}
F.p2701 = 1;
(*F.p2701_o) = F.p2701;
(*F.p2702_o) = F.p2702;
return;
}
if ((((F.v6035 == v1360)) || ((F.v6035 == v1363)))) {
if ((!(yr1903_Count(((*(yR99 *)rt_nil_check(F.p2700))).f_a) == INT64_C(2)))) {
(*F.p2701_o) = F.p2701;
(*F.p2702_o) = F.p2702;
return;
}
yr2691_Manifest(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2700))).f_a))).f_next, &F.v6041, &F.v6037);
if ((!F.v6041)) {
(*F.p2701_o) = F.p2701;
(*F.p2702_o) = F.p2702;
return;
}
yr2839_Expr(((*(yR99 *)rt_nil_check(F.p2700))).f_a, ((void *)0), &F.v6043, &F.v6045);
if (((((!(((*(yR104 *)rt_nil_check(F.v6045))).f_kind == v816))) || ((F.v6037 < INT64_C(1)))) || ((F.v6037 > ((*(yR104 *)rt_nil_check(F.v6045))).f_nidx)))) {
(*F.p2701_o) = F.p2701;
(*F.p2702_o) = F.p2702;
return;
}
F.v6047 = ((*(yR104 *)rt_nil_check(F.v6045))).f_idx;
F.lo6064 = INT64_C(2);
F.hi6065 = F.v6037;
{ rt_int hi6069 = F.hi6065;
for (rt_int i6068 = F.lo6064; i6068 <= hi6069; i6068++) { F.c_6067 = i6068;
F.v6047 = ((*(yR104 *)rt_nil_check(F.v6047))).f_link;
if (i6068 == hi6069) break;
}}
if ((!((*(yR104 *)rt_nil_check(F.v6047))).f_hasm)) {
(*F.p2701_o) = F.p2701;
(*F.p2702_o) = F.p2702;
return;
}
F.p2701 = 1;
if ((F.v6035 == v1360)) {
F.p2702 = ((*(yR104 *)rt_nil_check(F.v6047))).f_mlo;
} else {
F.p2702 = ((*(yR104 *)rt_nil_check(F.v6047))).f_mhi;
}
(*F.p2701_o) = F.p2701;
(*F.p2702_o) = F.p2702;
return;
}
(*F.p2701_o) = F.p2701;
(*F.p2702_o) = F.p2702;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2707_NeedsConv(void * a_p2708, void * a_p2709) {
struct yf2710 F;
memset((void *)&F, 0, sizeof F);
F.p2708 = a_p2708;
F.p2709 = a_p2709;
if ((F.p2708 == F.p2709)) {
{ rt_int rv6075 = 0;
return rv6075; }
}
if (yr2349_IsDiscrete(F.p2708)) {
if ((((*(yR104 *)rt_nil_check(F.p2708))).f_lo == INT64_C(0))) {
{ rt_int rv6078 = 0;
return rv6078; }
}
{ rt_int rv6079 = (!((((((*(yR104 *)rt_nil_check(F.p2708))).f_hasm && ((*(yR104 *)rt_nil_check(F.p2709))).f_hasm) && ((((*(yR104 *)rt_nil_check(F.p2708))).f_mlo <= ((*(yR104 *)rt_nil_check(F.p2709))).f_mlo))) && ((((*(yR104 *)rt_nil_check(F.p2709))).f_mhi <= ((*(yR104 *)rt_nil_check(F.p2708))).f_mhi)))));
return rv6079; }
}
if ((((*(yR104 *)rt_nil_check(F.p2708))).f_kind == v804)) {
{ rt_int rv6081 = (!(((*(yR104 *)rt_nil_check(F.p2708))).f_lo == INT64_C(0)));
return rv6081; }
}
if ((((*(yR104 *)rt_nil_check(F.p2708))).f_kind == v801)) {
{ rt_int rv6083 = ((((!(((*(yR104 *)rt_nil_check(F.p2708))).f_lo == INT64_C(0)))) || ((!(((*(yR104 *)rt_nil_check(F.p2708))).f_fsn == ((*(yR104 *)rt_nil_check(F.p2709))).f_fsn)))) || ((!(((*(yR104 *)rt_nil_check(F.p2708))).f_fsd == ((*(yR104 *)rt_nil_check(F.p2709))).f_fsd))));
return rv6083; }
}
if ((((*(yR104 *)rt_nil_check(F.p2708))).f_kind == v819)) {
{ rt_int rv6084 = (((((*(yR104 *)rt_nil_check(F.p2709))).f_kind == v819)) && ((!(((*(yR104 *)rt_nil_check(F.p2708))).f_cname == ((*(yR104 *)rt_nil_check(F.p2709))).f_cname))));
return rv6084; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2708))).f_kind == v816)) || ((((*(yR104 *)rt_nil_check(F.p2708))).f_kind == v837)))) {
if ((((!(((*(yR104 *)rt_nil_check(F.p2709))).f_kind == v816))) && ((!(((*(yR104 *)rt_nil_check(F.p2709))).f_kind == v837))))) {
{ rt_int rv6086 = 0;
return rv6086; }
}
{ rt_int rv6087 = yr2707_NeedsConv(((*(yR104 *)rt_nil_check(F.p2708))).f_elem, ((*(yR104 *)rt_nil_check(F.p2709))).f_elem);
return rv6087; }
}
{ rt_int rv6089 = 0;
return rv6089; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2714_ConvertRecord(rt_int a_p2715, void * a_p2716, void * a_p2717) {
struct yf2718 F;
memset((void *)&F, 0, sizeof F);
F.p2715 = a_p2715;
F.p2716 = a_p2716;
F.p2717 = a_p2717;
F.v6095 = yr1194_Fresh(y_str("cs", 2));
F.v6097 = yr1194_Fresh(y_str("cd", 2));
yr1020_SB();
yr1031_SA(y_str("({ ", 3));
yr1038_ST(yr2398_CType(F.p2717));
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v6095);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(F.p2715);
yr1031_SA(y_str("; ", 2));
yr1038_ST(yr2398_CType(F.p2716));
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v6097);
yr1031_SA(y_str("; memset(&", 10));
yr1038_ST(F.v6097);
yr1031_SA(y_str(", 0, sizeof ", 12));
yr1038_ST(F.v6097);
yr1031_SA(y_str(");", 2));
F.v6099 = ((*(yR104 *)rt_nil_check(F.p2716))).f_fields;
while ((!(F.v6099 == ((void *)0)))) {
F.v6101 = yr2653_FindField(F.p2717, ((*(yR109 *)rt_nil_check(F.v6099))).f_name);
if ((!(F.v6101 == ((void *)0)))) {
yr1031_SA(y_str(" ", 1));
if ((!(((*(yR109 *)rt_nil_check(F.v6101))).f_variant == INT64_C(0)))) {
yr1031_SA(y_str("if (", 4));
yr1038_ST(yr2848_VariantTest(F.p2717, F.v6101, yr3187_Join(yr1055_T(y_str("(&", 2)), F.v6095, yr1055_T(y_str(")", 1)))));
yr1031_SA(y_str(") ", 2));
}
yr1038_ST(F.v6097);
yr1031_SA(y_str(".f_", 3));
yr1038_ST(((*(yR109 *)rt_nil_check(F.v6099))).f_name);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(yr2772_Convert(yr3187_Join(F.v6095, yr1055_T(y_str(".f_", 3)), ((*(yR109 *)rt_nil_check(F.v6099))).f_name), ((*(yR109 *)rt_nil_check(F.v6099))).f_rep, ((*(yR109 *)rt_nil_check(F.v6101))).f_rep));
yr1031_SA(y_str(";", 1));
}
F.v6099 = ((*(yR109 *)rt_nil_check(F.v6099))).f_next;
}
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v6097);
yr1031_SA(y_str("; })", 4));
{ rt_int rv6124 = yr1050_SE();
return rv6124; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2722_ConvertArray(rt_int a_p2723, void * a_p2724, void * a_p2725) {
struct yf2726 F;
memset((void *)&F, 0, sizeof F);
F.p2723 = a_p2723;
F.p2724 = a_p2724;
F.p2725 = a_p2725;
F.v6130 = yr1194_Fresh(y_str("cs", 2));
F.v6132 = yr1194_Fresh(y_str("cd", 2));
F.v6134 = yr1194_Fresh(y_str("ck", 2));
F.v6136 = yr1194_Fresh(y_str("cn", 2));
F.v6138 = yr2398_CType(((*(yR104 *)rt_nil_check(F.p2724))).f_elem);
F.v6140 = yr2398_CType(((*(yR104 *)rt_nil_check(F.p2725))).f_elem);
yr1020_SB();
yr1031_SA(y_str("({ yarr ", 8));
yr1038_ST(F.v6130);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(F.p2723);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v6132);
yr1031_SA(y_str("; rt_int ", 9));
yr1038_ST(F.v6136);
yr1031_SA(y_str(" = y_count(", 11));
yr1038_ST(F.v6130);
yr1031_SA(y_str(", ", 2));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2725))).f_nidx);
yr1031_SA(y_str(");", 2));
if ((((*(yR104 *)rt_nil_check(F.p2724))).f_kind == v816)) {
yr1031_SA(y_str(" y_init(", 8));
yr1038_ST(yr2404_DescOf(F.p2724));
yr1031_SA(y_str(", &", 3));
yr1038_ST(F.v6132);
yr1031_SA(y_str("); if (y_count(", 15));
yr1038_ST(F.v6132);
yr1031_SA(y_str(", ", 2));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2724))).f_nidx);
yr1031_SA(y_str(") != ", 5));
yr1038_ST(F.v6136);
yr1031_SA(y_str(") rt_raise_msg(RT_X_RANGE, ", 27));
yr1025_SC(34);
yr1031_SA(y_str("array lengths differ", 20));
yr1025_SC(34);
yr1031_SA(y_str(");", 2));
} else {
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v6132);
yr1031_SA(y_str(" = y_like(", 10));
yr1038_ST(F.v6130);
yr1031_SA(y_str(", ", 2));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2725))).f_nidx);
yr1031_SA(y_str(", ", 2));
yr1038_ST(yr2404_DescOf(((*(yR104 *)rt_nil_check(F.p2724))).f_elem));
yr1031_SA(y_str(");", 2));
}
yr1031_SA(y_str(" for (rt_int ", 13));
yr1038_ST(F.v6134);
yr1031_SA(y_str(" = 0; ", 6));
yr1038_ST(F.v6134);
yr1031_SA(y_str(" < ", 3));
yr1038_ST(F.v6136);
yr1031_SA(y_str("; ", 2));
yr1038_ST(F.v6134);
yr1031_SA(y_str("++) ((", 6));
yr1038_ST(F.v6138);
yr1031_SA(y_str(" *)", 3));
yr1038_ST(F.v6132);
yr1031_SA(y_str(".p)[", 4));
yr1038_ST(F.v6134);
yr1031_SA(y_str("] = ", 4));
yr1038_ST(yr2772_Convert(yr3187_Join(yr1055_T(y_str("((", 2)), F.v6140, yr3187_Join(yr1055_T(y_str(" *)", 3)), F.v6130, yr3187_Join(yr1055_T(y_str(".p)[", 4)), F.v6134, yr1055_T(y_str("]", 1))))), ((*(yR104 *)rt_nil_check(F.p2724))).f_elem, ((*(yR104 *)rt_nil_check(F.p2725))).f_elem));
yr1031_SA(y_str("; ", 2));
yr1038_ST(F.v6132);
yr1031_SA(y_str("; })", 4));
{ rt_int rv6181 = yr1050_SE();
return rv6181; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2730_RescaleCode(rt_int a_p2731, void * a_p2732, void * a_p2733) {
struct yf2734 F;
memset((void *)&F, 0, sizeof F);
F.p2731 = a_p2731;
F.p2732 = a_p2732;
F.p2733 = a_p2733;
yr2528_ScaleRatio(F.p2732, F.p2733, &F.v6187, &F.v6189, &F.v6191);
if (F.v6191) {
{ rt_int rv6192 = F.p2731;
return rv6192; }
}
yr1020_SB();
yr1031_SA(y_str("y_fix_conv(", 11));
yr1038_ST(F.p2731);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v6187);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v6189);
yr1031_SA(y_str(")", 1));
{ rt_int rv6197 = yr1050_SE();
return rv6197; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2738_CommonScale(rt_int * a_p2739, void * a_p2740, rt_int * a_p2741, void * a_p2742, void * a_p2743, rt_int a_p2744) {
struct yf2745 F;
memset((void *)&F, 0, sizeof F);
F.p2739 = a_p2739;
F.p2740 = a_p2740;
F.p2741 = a_p2741;
F.p2742 = a_p2742;
F.p2743 = a_p2743;
F.p2744 = a_p2744;
F.v6206 = yr2505_Gcd(((*(yR104 *)rt_nil_check(F.p2740))).f_fsn, ((*(yR104 *)rt_nil_check(F.p2742))).f_fsn);
F.v6208 = yr2512_MulChk(rt_range(rt_div(((*(yR104 *)rt_nil_check(F.p2740))).f_fsd, yr2505_Gcd(((*(yR104 *)rt_nil_check(F.p2740))).f_fsd, ((*(yR104 *)rt_nil_check(F.p2742))).f_fsd)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), ((*(yR104 *)rt_nil_check(F.p2742))).f_fsd, F.p2744);
yr2545_SetScale(F.p2743, F.v6206, F.v6208);
(*F.p2739) = yr2730_RescaleCode((*F.p2739), F.p2740, F.p2743);
(*F.p2741) = yr2730_RescaleCode((*F.p2741), F.p2742, F.p2743);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2749_FixLiteral(void * a_p2750, rt_int * a_p2751, void * * a_p2752) {
struct yf2753 F;
memset((void *)&F, 0, sizeof F);
F.p2750 = a_p2750;
F.p2751_o = a_p2751;
F.p2752_o = a_p2752;
F.v6215 = ((*(yR99 *)rt_nil_check(F.p2750))).f_ival;
F.v6217 = ((rt_int *)(v1238).p)[y_ix1(v1238, F.v6215)];
F.p2752 = yr2343_CopyRep(v1350);
((*(yR104 *)rt_nil_check(F.p2752))).f_abstract = 0;
if ((F.v6217 >= INT64_C(0))) {
yr2545_SetScale(F.p2752, yr2520_PowChk(((rt_int *)(v1236).p)[y_ix1(v1236, F.v6215)], F.v6217, ((*(yR99 *)rt_nil_check(F.p2750))).f_line), INT64_C(1));
} else {
yr2545_SetScale(F.p2752, INT64_C(1), yr2520_PowChk(((rt_int *)(v1236).p)[y_ix1(v1236, F.v6215)], rt_range(rt_neg(F.v6217), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), ((*(yR99 *)rt_nil_check(F.p2750))).f_line));
}
yr1020_SB();
yr1031_SA(y_str("((yfix)INT64_C(", 15));
yr1044_SI(((rt_int *)(v1234).p)[y_ix1(v1234, F.v6215)]);
yr1031_SA(y_str("))", 2));
F.p2751 = yr1050_SE();
(*F.p2751_o) = F.p2751;
(*F.p2752_o) = F.p2752;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2757_ManifestFix(void * a_p2758, rt_int * a_p2759, rt_int * a_p2760, rt_int * a_p2761) {
struct yf2762 F;
memset((void *)&F, 0, sizeof F);
F.p2758 = a_p2758;
F.p2759_o = a_p2759;
F.p2760_o = a_p2760;
F.p2761_o = a_p2761;
F.p2759 = 0;
F.p2760 = INT64_C(0);
F.p2761 = INT64_C(1);
if ((((*(yR99 *)rt_nil_check(F.p2758))).f_kind == v756)) {
F.v6231 = ((*(yR99 *)rt_nil_check(F.p2758))).f_ival;
F.v6233 = ((rt_int *)(v1238).p)[y_ix1(v1238, F.v6231)];
F.p2760 = ((rt_int *)(v1234).p)[y_ix1(v1234, F.v6231)];
if ((F.v6233 >= INT64_C(0))) {
F.p2760 = yr2512_MulChk(F.p2760, yr2520_PowChk(((rt_int *)(v1236).p)[y_ix1(v1236, F.v6231)], F.v6233, ((*(yR99 *)rt_nil_check(F.p2758))).f_line), ((*(yR99 *)rt_nil_check(F.p2758))).f_line);
} else {
F.p2761 = yr2520_PowChk(((rt_int *)(v1236).p)[y_ix1(v1236, F.v6231)], rt_range(rt_neg(F.v6233), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), ((*(yR99 *)rt_nil_check(F.p2758))).f_line);
}
F.p2759 = 1;
} else if ((((*(yR99 *)rt_nil_check(F.p2758))).f_kind == v753)) {
F.p2760 = ((*(yR99 *)rt_nil_check(F.p2758))).f_ival;
F.p2759 = 1;
} else if ((((*(yR99 *)rt_nil_check(F.p2758))).f_kind == v795)) {
yr2757_ManifestFix(((*(yR99 *)rt_nil_check(F.p2758))).f_a, &F.p2759, &F.p2760, &F.p2761);
} else if ((((*(yR99 *)rt_nil_check(F.p2758))).f_kind == v789)) {
yr2757_ManifestFix(((*(yR99 *)rt_nil_check(F.p2758))).f_a, &F.p2759, &F.p2760, &F.p2761);
F.p2760 = rt_range(rt_neg(F.p2760), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((((*(yR99 *)rt_nil_check(F.p2758))).f_kind == v792)) && ((((*(yR99 *)rt_nil_check(F.p2758))).f_name == v573)))) {
yr2757_ManifestFix(((*(yR99 *)rt_nil_check(F.p2758))).f_a, &F.p2759, &F.p2760, &F.p2761);
yr2757_ManifestFix(((*(yR99 *)rt_nil_check(F.p2758))).f_b, &F.v6241, &F.v6237, &F.v6239);
F.p2759 = (F.p2759 && F.v6241);
F.p2760 = yr2512_MulChk(F.p2760, F.v6237, ((*(yR99 *)rt_nil_check(F.p2758))).f_line);
F.p2761 = yr2512_MulChk(F.p2761, F.v6239, ((*(yR99 *)rt_nil_check(F.p2758))).f_line);
}
F.v6235 = yr2505_Gcd(F.p2760, F.p2761);
F.p2760 = rt_range(rt_div(F.p2760, F.v6235), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.p2761 = rt_range(rt_div(F.p2761, F.v6235), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2759_o) = F.p2759;
(*F.p2760_o) = F.p2760;
(*F.p2761_o) = F.p2761;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2766_FloatChk(rt_int a_p2767) {
struct yf2768 F;
memset((void *)&F, 0, sizeof F);
F.p2767 = a_p2767;
{ rt_int rv6256 = yr3187_Join(yr1055_T(y_str("y_fchk(", 7)), F.p2767, yr1055_T(y_str(")", 1)));
return rv6256; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2772_Convert(rt_int a_p2773, void * a_p2774, void * a_p2775) {
struct yf2776 F;
memset((void *)&F, 0, sizeof F);
F.p2773 = a_p2773;
F.p2774 = a_p2774;
F.p2775 = a_p2775;
if (((((((*(yR104 *)rt_nil_check(F.p2775))).f_kind == v840)) && ((((*(yR104 *)rt_nil_check(F.p2774))).f_kind == v816))) && ((((*(yR104 *)rt_nil_check(F.p2774))).f_nidx == INT64_C(1))))) {
if ((((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2774))).f_idx))).f_hasm && ((!(((*(yR104 *)rt_nil_check(F.p2775))).f_nlits == (rt_add((rt_sub(((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2774))).f_idx))).f_mhi, ((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2774))).f_idx))).f_mlo)), INT64_C(1)))))))) {
yr1020_SB();
yr1031_SA(y_str("a string of ", 12));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2775))).f_nlits);
yr1031_SA(y_str(" characters for an array of ", 28));
yr1044_SI(rt_range(rt_add((rt_sub(((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2774))).f_idx))).f_mhi, ((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2774))).f_idx))).f_mlo)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1031_SA(y_str(" (VI.B.1)", 9));
F.v6262 = yr1050_SE();
yr1151_Fail(v994, F.v6262);
}
}
if ((!yr2707_NeedsConv(F.p2774, F.p2775))) {
{ rt_int rv6273 = F.p2773;
return rv6273; }
}
if ((((*(yR104 *)rt_nil_check(F.p2774))).f_kind == v819)) {
{ rt_int rv6274 = yr2714_ConvertRecord(F.p2773, F.p2774, F.p2775);
return rv6274; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2774))).f_kind == v816)) || ((((*(yR104 *)rt_nil_check(F.p2774))).f_kind == v837)))) {
{ rt_int rv6275 = yr2722_ConvertArray(F.p2773, F.p2774, F.p2775);
return rv6275; }
}
if (yr2349_IsDiscrete(F.p2774)) {
yr1020_SB();
yr1031_SA(y_str("rt_range(", 9));
yr1038_ST(F.p2773);
yr1031_SA(y_str(", ", 2));
yr1038_ST(yr2479_LoText(F.p2774));
yr1031_SA(y_str(", ", 2));
yr1038_ST(yr2485_HiText(F.p2774));
yr1031_SA(y_str(")", 1));
{ rt_int rv6280 = yr1050_SE();
return rv6280; }
}
if ((((*(yR104 *)rt_nil_check(F.p2774))).f_kind == v804)) {
yr1020_SB();
yr1031_SA(y_str("rt_frange(", 10));
yr1038_ST(F.p2773);
yr1031_SA(y_str(", ", 2));
yr1038_ST(yr2479_LoText(F.p2774));
yr1031_SA(y_str(", ", 2));
yr1038_ST(yr2485_HiText(F.p2774));
yr1031_SA(y_str(")", 1));
{ rt_int rv6285 = yr1050_SE();
return rv6285; }
}
if ((((*(yR104 *)rt_nil_check(F.p2774))).f_kind == v801)) {
F.v6262 = yr2730_RescaleCode(F.p2773, F.p2775, F.p2774);
if ((((*(yR104 *)rt_nil_check(F.p2774))).f_lo == INT64_C(0))) {
{ rt_int rv6287 = F.v6262;
return rv6287; }
}
yr1020_SB();
yr1031_SA(y_str("y_fix_range(", 12));
yr1038_ST(F.v6262);
yr1031_SA(y_str(", ", 2));
yr1038_ST(yr2479_LoText(F.p2774));
yr1031_SA(y_str(", ", 2));
yr1038_ST(yr2485_HiText(F.p2774));
yr1031_SA(y_str(")", 1));
{ rt_int rv6292 = yr1050_SE();
return rv6292; }
}
{ rt_int rv6293 = F.p2773;
return rv6293; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2780_StoreText(rt_int a_p2781, void * a_p2782, rt_int a_p2783, void * a_p2784, rt_int a_p2785) {
struct yf2786 F;
memset((void *)&F, 0, sizeof F);
F.p2781 = a_p2781;
F.p2782 = a_p2782;
F.p2783 = a_p2783;
F.p2784 = a_p2784;
F.p2785 = a_p2785;
yr2431_CheckType(F.p2785, F.p2782, F.p2784);
if (yr2373_Deep(F.p2782)) {
F.v6301 = yr1194_Fresh(y_str("t", 1));
yr1020_SB();
yr1031_SA(y_str("{ ", 2));
yr1038_ST(yr2398_CType(F.p2782));
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v6301);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(yr2772_Convert(F.p2783, F.p2782, F.p2784));
yr1031_SA(y_str("; y_store(", 10));
yr1038_ST(yr2404_DescOf(F.p2782));
yr1031_SA(y_str(", &", 3));
yr1038_ST(F.p2781);
yr1031_SA(y_str(", &", 3));
yr1038_ST(F.v6301);
yr1031_SA(y_str("); }", 4));
{ rt_int rv6310 = yr1050_SE();
return rv6310; }
}
yr1020_SB();
yr1038_ST(F.p2781);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(yr2772_Convert(F.p2783, F.p2782, F.p2784));
yr1031_SA(y_str(";", 1));
{ rt_int rv6313 = yr1050_SE();
return rv6313; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2790_Store(rt_int a_p2791, void * a_p2792, rt_int a_p2793, void * a_p2794, rt_int a_p2795) {
struct yf2796 F;
memset((void *)&F, 0, sizeof F);
F.p2791 = a_p2791;
F.p2792 = a_p2792;
F.p2793 = a_p2793;
F.p2794 = a_p2794;
F.p2795 = a_p2795;
yr1126_Emit(yr2780_StoreText(F.p2791, F.p2792, F.p2793, F.p2794, F.p2795));
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2800_IsVariable(void * a_p2801) {
struct yf2802 F;
memset((void *)&F, 0, sizeof F);
F.p2801 = a_p2801;
if ((((*(yR99 *)rt_nil_check(F.p2801))).f_kind == v771)) {
F.v6323 = yr2232_Find(((*(yR99 *)rt_nil_check(F.p2801))).f_name);
if ((F.v6323 == ((void *)0))) {
{ rt_int rv6327 = 0;
return rv6327; }
}
if (((*(yR119 *)rt_nil_check(F.v6323))).f_readonly) {
{ rt_int rv6329 = 0;
return rv6329; }
}
{ rt_int rv6330 = (((*(yR119 *)rt_nil_check(yr2330_Real(F.v6323)))).f_kind == v855);
return rv6330; }
}
if ((((*(yR99 *)rt_nil_check(F.p2801))).f_kind == v783)) {
{ rt_int rv6332 = (((*(yR99 *)rt_nil_check(F.p2801))).f_flag == INT64_C(0));
return rv6332; }
}
if ((((*(yR99 *)rt_nil_check(F.p2801))).f_kind == v780)) {
{ rt_int rv6333 = yr2800_IsVariable(((*(yR99 *)rt_nil_check(F.p2801))).f_a);
return rv6333; }
}
if ((((*(yR99 *)rt_nil_check(F.p2801))).f_kind == v777)) {
if ((!yr2800_IsVariable(((*(yR99 *)rt_nil_check(F.p2801))).f_a))) {
{ rt_int rv6335 = 0;
return rv6335; }
}
F.v6325 = yr2653_FindField(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2801))).f_a))).f_rep, ((*(yR99 *)rt_nil_check(F.p2801))).f_name);
if ((F.v6325 == ((void *)0))) {
{ rt_int rv6337 = 0;
return rv6337; }
}
{ rt_int rv6338 = (!((*(yR109 *)rt_nil_check(F.v6325))).f_isconst);
return rv6338; }
}
{ rt_int rv6340 = 0;
return rv6340; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2806_CheckPure(void * a_p2807) {
struct yf2808 F;
memset((void *)&F, 0, sizeof F);
F.p2807 = a_p2807;
F.v6344 = F.p2807;
if ((v1595 == ((void *)0))) {
return;
}
if ((!((*(yR119 *)rt_nil_check(v1595))).f_func)) {
return;
}
while ((((((*(yR99 *)rt_nil_check(F.v6344))).f_kind == v777)) || ((((*(yR99 *)rt_nil_check(F.v6344))).f_kind == v780)))) {
F.v6344 = ((*(yR99 *)rt_nil_check(F.v6344))).f_a;
}
if ((((*(yR99 *)rt_nil_check(F.v6344))).f_kind == v783)) {
if ((((*(yR99 *)rt_nil_check(F.v6344))).f_flag == INT64_C(0))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2807))).f_line, y_str("a FUNCTION does not assign to a dynamic variable (X.A.4)", 56));
}
return;
}
if ((((*(yR99 *)rt_nil_check(F.v6344))).f_kind == v771)) {
F.v6346 = yr2232_Find(((*(yR99 *)rt_nil_check(F.v6344))).f_name);
if ((!(F.v6346 == ((void *)0)))) {
F.v6346 = yr2330_Real(F.v6346);
if ((((*(yR119 *)rt_nil_check(F.v6346))).f_level < ((*(yR119 *)rt_nil_check(v1595))).f_level)) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2807))).f_line, ((*(yR99 *)rt_nil_check(F.v6344))).f_name, y_str(" is not local: a FUNCTION assigns only to its locals (X.A.4)", 60));
}
}
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2812_LValue(void * a_p2813, rt_int * a_p2814, void * * a_p2815) {
struct yf2816 F;
memset((void *)&F, 0, sizeof F);
F.p2813 = a_p2813;
F.p2814_o = a_p2814;
F.p2815_o = a_p2815;
yr2839_Expr(F.p2813, ((void *)0), &F.p2814, &F.p2815);
if ((!yr2800_IsVariable(F.p2813))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2813))).f_line, y_str("a variable is needed here (IX.A.1)", 34));
}
(*F.p2814_o) = F.p2814;
(*F.p2815_o) = F.p2815;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2820_Paren(rt_int a_p2821) {
struct yf2822 F;
memset((void *)&F, 0, sizeof F);
F.p2821 = a_p2821;
yr1020_SB();
yr1031_SA(y_str("(", 1));
yr1038_ST(F.p2821);
yr1031_SA(y_str(")", 1));
{ rt_int rv6359 = yr1050_SE();
return rv6359; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2826_Lit(void * a_p2827, rt_int a_p2828) {
struct yf2829 F;
memset((void *)&F, 0, sizeof F);
F.p2827 = a_p2827;
F.p2828 = a_p2828;
F.v6364 = yr2343_CopyRep(F.p2827);
yr2566_SetRange(F.v6364, F.p2828, F.p2828);
((*(yR104 *)rt_nil_check(F.v6364))).f_elem = F.p2827;
{ void * rv6365 = F.v6364;
return rv6365; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2833_Qualifier(void * a_p2834) {
struct yf2835 F;
memset((void *)&F, 0, sizeof F);
F.p2834 = a_p2834;
F.v6369 = yr2330_Real(yr2244_Lookup(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2834))).f_d))).f_name, ((*(yR99 *)rt_nil_check(F.p2834))).f_line));
if ((((!(((*(yR119 *)rt_nil_check(F.v6369))).f_kind == v861))) && ((!(((*(yR119 *)rt_nil_check(F.v6369))).f_kind == v864))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2834))).f_line, ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2834))).f_d))).f_name, y_str(" is not a type", 14));
}
{ void * rv6371 = ((*(yR119 *)rt_nil_check(F.v6369))).f_rep;
return rv6371; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2839_Expr(void * a_p2840, void * a_p2841, rt_int * a_p2842, void * * a_p2843) {
struct yf2844 F;
memset((void *)&F, 0, sizeof F);
F.p2840 = a_p2840;
F.p2841 = a_p2841;
F.p2842_o = a_p2842;
F.p2843_o = a_p2843;
F.v6378 = ((*(yR99 *)rt_nil_check(F.p2840))).f_kind;
v994 = ((*(yR99 *)rt_nil_check(F.p2840))).f_line;
if ((F.v6378 == v795)) {
yr2839_Expr(((*(yR99 *)rt_nil_check(F.p2840))).f_a, F.p2841, &F.v6382, &F.p2843);
F.p2842 = yr2820_Paren(F.v6382);
} else if ((F.v6378 == v753)) {
F.p2843 = yr2826_Lit(v1336, ((*(yR99 *)rt_nil_check(F.p2840))).f_ival);
if ((!(((*(yR99 *)rt_nil_check(F.p2840))).f_d == ((void *)0)))) {
F.v6388 = yr2833_Qualifier(F.p2840);
if ((!(((*(yR104 *)rt_nil_check(F.v6388))).f_kind == v798))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2840))).f_line, y_str("an integer literal qualified by a type that is not INTEGER", 58));
}
((*(yR104 *)rt_nil_check(F.p2843))).f_tid = ((*(yR104 *)rt_nil_check(F.v6388))).f_tid;
((*(yR104 *)rt_nil_check(F.p2843))).f_tname = ((*(yR104 *)rt_nil_check(F.v6388))).f_tname;
}
yr1020_SB();
yr1031_SA(y_str("INT64_C(", 8));
yr1044_SI(((*(yR99 *)rt_nil_check(F.p2840))).f_ival);
yr1031_SA(y_str(")", 1));
F.p2842 = yr1050_SE();
} else if ((F.v6378 == v762)) {
F.v6388 = yr2667_AlphabetFor(F.p2840, F.p2841);
F.v6394 = yr2674_CharValue(F.v6388, ((*(yR99 *)rt_nil_check(F.p2840))).f_text, ((*(yR99 *)rt_nil_check(F.p2840))).f_line);
F.p2843 = yr2826_Lit(F.v6388, F.v6394);
yr1020_SB();
yr1044_SI(F.v6394);
F.p2842 = yr1050_SE();
} else if ((F.v6378 == v765)) {
F.v6388 = yr2667_AlphabetFor(F.p2840, F.p2841);
F.v6382 = yr2682_StringCodes(F.v6388, ((*(yR99 *)rt_nil_check(F.p2840))).f_text, &F.v6392, ((*(yR99 *)rt_nil_check(F.p2840))).f_line);
F.p2843 = yr2336_NewRep(v840, yr1055_T(y_str("string", 6)));
((*(yR104 *)rt_nil_check(F.p2843))).f_tname = yr1055_T(y_str("a string literal", 16));
((*(yR104 *)rt_nil_check(F.p2843))).f_elem = F.v6388;
((*(yR104 *)rt_nil_check(F.p2843))).f_nidx = INT64_C(1);
((*(yR104 *)rt_nil_check(F.p2843))).f_nlits = F.v6392;
yr1020_SB();
yr1031_SA(y_str("y_str(", 6));
yr1038_ST(F.v6382);
yr1031_SA(y_str(", ", 2));
yr1044_SI(F.v6392);
yr1031_SA(y_str(")", 1));
F.p2842 = yr1050_SE();
} else if ((F.v6378 == v759)) {
F.p2843 = v1348;
if ((!(((*(yR99 *)rt_nil_check(F.p2840))).f_d == ((void *)0)))) {
F.p2843 = yr2833_Qualifier(F.p2840);
}
F.p2842 = yr2820_Paren(((*(yR99 *)rt_nil_check(F.p2840))).f_text);
} else if ((F.v6378 == v756)) {
yr2749_FixLiteral(F.p2840, &F.p2842, &F.p2843);
if ((!(((*(yR99 *)rt_nil_check(F.p2840))).f_d == ((void *)0)))) {
F.v6388 = yr2833_Qualifier(F.p2840);
if ((!(((*(yR104 *)rt_nil_check(F.v6388))).f_kind == v801))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2840))).f_line, y_str("a fixed-point literal qualified by a type that is not FIXED", 59));
}
((*(yR104 *)rt_nil_check(F.p2843))).f_tid = ((*(yR104 *)rt_nil_check(F.v6388))).f_tid;
((*(yR104 *)rt_nil_check(F.p2843))).f_tname = ((*(yR104 *)rt_nil_check(F.v6388))).f_tname;
}
} else if ((F.v6378 == v768)) {
if ((((*(yR99 *)rt_nil_check(F.p2840))).f_d == ((void *)0))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2840))).f_line, y_str("NIL is qualified by the name of a pointer type (VI.B.4)", 55));
}
F.p2843 = yr2833_Qualifier(F.p2840);
if ((!(((*(yR104 *)rt_nil_check(F.p2843))).f_kind == v822))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2840))).f_line, y_str("NIL of a type that is not a pointer", 35));
}
F.p2842 = yr1055_T(y_str("((void *)0)", 11));
} else if ((F.v6378 == v771)) {
if ((!(((*(yR99 *)rt_nil_check(F.p2840))).f_d == ((void *)0)))) {
F.v6388 = yr2833_Qualifier(F.p2840);
F.v6380 = yr2290_FindLit(((*(yR99 *)rt_nil_check(F.p2840))).f_name, F.v6388);
if ((F.v6380 == ((void *)0))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2840))).f_line, ((*(yR99 *)rt_nil_check(F.p2840))).f_name, y_str(" is not a literal of that type", 30));
}
} else {
F.v6380 = yr2244_Lookup(((*(yR99 *)rt_nil_check(F.p2840))).f_name, ((*(yR99 *)rt_nil_check(F.p2840))).f_line);
}
yr2856_NameExpr(F.p2840, F.v6380, &F.p2842, &F.p2843);
} else if ((F.v6378 == v774)) {
yr3036_CallExpr(F.p2840, F.p2841, 0, &F.p2842, &F.p2843);
} else if ((F.v6378 == v777)) {
yr2839_Expr(((*(yR99 *)rt_nil_check(F.p2840))).f_a, ((void *)0), &F.v6382, &F.v6388);
((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2840))).f_a))).f_rep = F.v6388;
if ((!(((*(yR104 *)rt_nil_check(F.v6388))).f_kind == v819))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2840))).f_line, ((*(yR99 *)rt_nil_check(F.p2840))).f_name, y_str(": a component of something that is not a record", 47));
}
if (((*(yR104 *)rt_nil_check(F.v6388))).f_opaque) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2840))).f_line, ((*(yR104 *)rt_nil_check(F.v6388))).f_tname, y_str(" is exported opaquely: its components are hidden (X.B.3)", 56));
}
F.v6390 = yr2653_FindField(F.v6388, ((*(yR99 *)rt_nil_check(F.p2840))).f_name);
if ((F.v6390 == ((void *)0))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2840))).f_line, ((*(yR99 *)rt_nil_check(F.p2840))).f_name, y_str(" is not a component of this record", 34));
}
F.p2843 = ((*(yR109 *)rt_nil_check(F.v6390))).f_rep;
if ((!(((*(yR109 *)rt_nil_check(F.v6390))).f_variant == INT64_C(0)))) {
yr3111_CheckVariantSelected(F.p2840, F.v6388, F.v6390);
F.v6384 = yr1194_Fresh(y_str("vr", 2));
yr1020_SB();
yr1031_SA(y_str("(*({ ", 5));
yr1038_ST(yr2398_CType(F.v6388));
yr1031_SA(y_str(" *", 2));
yr1038_ST(F.v6384);
yr1031_SA(y_str(" = &", 4));
yr1038_ST(yr2820_Paren(F.v6382));
yr1031_SA(y_str("; if (!(", 8));
yr1038_ST(yr2848_VariantTest(F.v6388, F.v6390, F.v6384));
yr1031_SA(y_str(")) rt_raise(RT_X_TAG); &", 24));
yr1038_ST(F.v6384);
yr1031_SA(y_str("->f_", 4));
yr1038_ST(((*(yR99 *)rt_nil_check(F.p2840))).f_name);
yr1031_SA(y_str("; }))", 5));
F.p2842 = yr1050_SE();
} else {
yr1020_SB();
yr1038_ST(yr2820_Paren(F.v6382));
yr1031_SA(y_str(".f_", 3));
yr1038_ST(((*(yR99 *)rt_nil_check(F.p2840))).f_name);
F.p2842 = yr1050_SE();
}
} else if ((((F.v6378 == v783)) && yr2998_UserOp(F.p2840, rt_range(v612, INT64_C(0), INT64_C(4000000)), ((*(yR99 *)rt_nil_check(F.p2840))).f_a, ((void *)0), &F.p2842, &F.p2843))) {
((*(yR99 *)rt_nil_check(F.p2840))).f_flag = INT64_C(1);
} else if ((F.v6378 == v783)) {
yr2839_Expr(((*(yR99 *)rt_nil_check(F.p2840))).f_a, ((void *)0), &F.v6382, &F.v6388);
if ((!(((*(yR104 *)rt_nil_check(F.v6388))).f_kind == v822))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2840))).f_line, y_str("^ of something that is not a pointer", 36));
}
yr3254_NoteFreeDeref(((*(yR99 *)rt_nil_check(F.p2840))).f_a, ((*(yR104 *)rt_nil_check(F.v6388))).f_tid);
if ((((*(yR104 *)rt_nil_check(F.v6388))).f_elem == ((void *)0))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2840))).f_line, ((*(yR104 *)rt_nil_check(F.v6388))).f_forward, y_str(" is not declared", 16));
}
F.p2843 = ((*(yR104 *)rt_nil_check(F.v6388))).f_elem;
yr1020_SB();
yr1031_SA(y_str("(*(", 3));
yr1038_ST(yr2398_CType(F.p2843));
yr1031_SA(y_str(" *)rt_nil_check(", 16));
yr1038_ST(F.v6382);
yr1031_SA(y_str("))", 2));
F.p2842 = yr1050_SE();
} else if ((F.v6378 == v780)) {
yr2865_IndexExpr(F.p2840, &F.p2842, &F.p2843);
} else if ((((F.v6378 == v786)) && yr2998_UserOp(F.p2840, rt_range(v384, INT64_C(0), INT64_C(4000000)), ((*(yR99 *)rt_nil_check(F.p2840))).f_a, ((void *)0), &F.p2842, &F.p2843))) {
F.p2843 = F.p2843;
} else if ((F.v6378 == v786)) {
yr2839_Expr(((*(yR99 *)rt_nil_check(F.p2840))).f_a, v1338, &F.v6382, &F.v6388);
yr2431_CheckType(((*(yR99 *)rt_nil_check(F.p2840))).f_line, v1338, F.v6388);
F.p2843 = v1338;
yr1020_SB();
yr1031_SA(y_str("(!", 2));
yr1038_ST(F.v6382);
yr1031_SA(y_str(")", 1));
F.p2842 = yr1050_SE();
} else if ((F.v6378 == v789)) {
if ((!yr2998_UserOp(F.p2840, rt_range(v570, INT64_C(0), INT64_C(4000000)), ((*(yR99 *)rt_nil_check(F.p2840))).f_a, ((void *)0), &F.p2842, &F.p2843))) {
yr2839_Expr(((*(yR99 *)rt_nil_check(F.p2840))).f_a, F.p2841, &F.v6382, &F.v6388);
yr2873_NegExpr(F.p2840, F.v6382, F.v6388, &F.p2842, &F.p2843);
}
} else if ((F.v6378 == v792)) {
yr2929_BinExpr(F.p2840, F.p2841, &F.p2842, &F.p2843);
} else {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2840))).f_line, y_str("not an expression", 17));
}
((*(yR99 *)rt_nil_check(F.p2840))).f_rep = F.p2843;
(*F.p2842_o) = F.p2842;
(*F.p2843_o) = F.p2843;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2848_VariantTest(void * a_p2849, void * a_p2850, rt_int a_p2851) {
struct yf2852 F;
memset((void *)&F, 0, sizeof F);
F.p2849 = a_p2849;
F.p2850 = a_p2850;
F.p2851 = a_p2851;
F.v6437 = ((*(yR109 *)rt_nil_check(F.p2850))).f_labels;
yr1020_SB();
yr1031_SA(y_str("0", 1));
while ((!(F.v6437 == ((void *)0)))) {
yr2691_Manifest(F.v6437, &F.v6439, &F.v6441);
yr1031_SA(y_str(" || ", 4));
yr1038_ST(F.p2851);
yr1031_SA(y_str("->f_", 4));
yr1038_ST(((*(yR109 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2849))).f_selector))).f_name);
yr1031_SA(y_str(" == ", 4));
yr1044_SI(F.v6441);
F.v6437 = ((*(yR99 *)rt_nil_check(F.v6437))).f_next;
}
{ rt_int rv6446 = yr1050_SE();
return rv6446; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2856_NameExpr(void * a_p2857, void * a_p2858, rt_int * a_p2859, void * * a_p2860) {
struct yf2861 F;
memset((void *)&F, 0, sizeof F);
F.p2857 = a_p2857;
F.p2858 = a_p2858;
F.p2859_o = a_p2859;
F.p2860_o = a_p2860;
F.v6453 = yr2330_Real(F.p2858);
if ((((*(yR119 *)rt_nil_check(F.v6453))).f_kind == v867)) {
if ((((((*(yR99 *)rt_nil_check(F.p2857))).f_d == ((void *)0))) && yr2284_Ambiguous(F.v6453))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2857))).f_line, ((*(yR99 *)rt_nil_check(F.p2857))).f_name, y_str(" names values of two types here: qualify it (VI.A.3)", 52));
}
F.p2860 = yr2826_Lit(((*(yR119 *)rt_nil_check(F.v6453))).f_rep, ((*(yR119 *)rt_nil_check(F.v6453))).f_mval);
yr1020_SB();
yr1044_SI(((*(yR119 *)rt_nil_check(F.v6453))).f_mval);
F.p2859 = yr1050_SE();
(*F.p2859_o) = F.p2859;
(*F.p2860_o) = F.p2860;
return;
}
if ((((((*(yR119 *)rt_nil_check(F.v6453))).f_kind == v855)) || ((((*(yR119 *)rt_nil_check(F.v6453))).f_kind == v858)))) {
yr3248_NoteFree(F.v6453);
F.p2860 = ((*(yR119 *)rt_nil_check(F.v6453))).f_rep;
F.p2859 = yr2324_SymPath(F.v6453);
(*F.p2859_o) = F.p2859;
(*F.p2860_o) = F.p2860;
return;
}
if ((((*(yR119 *)rt_nil_check(F.v6453))).f_kind == v870)) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2857))).f_line, ((*(yR99 *)rt_nil_check(F.p2857))).f_name, y_str(" is a routine: a call needs ()", 30));
}
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2857))).f_line, ((*(yR99 *)rt_nil_check(F.p2857))).f_name, y_str(" is not a value", 15));
(*F.p2859_o) = F.p2859;
(*F.p2860_o) = F.p2860;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2865_IndexExpr(void * a_p2866, rt_int * a_p2867, void * * a_p2868) {
struct yf2869 F;
memset((void *)&F, 0, sizeof F);
F.p2866 = a_p2866;
F.p2867_o = a_p2867;
F.p2868_o = a_p2868;
yr2839_Expr(((*(yR99 *)rt_nil_check(F.p2866))).f_a, ((void *)0), &F.v6462, &F.v6468);
if ((!yr2361_IsArrayLike(F.v6468))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2866))).f_line, y_str("[] of something that is not an array", 36));
}
F.v6476 = yr1903_Count(((*(yR99 *)rt_nil_check(F.p2866))).f_b);
if ((!(F.v6476 == ((*(yR104 *)rt_nil_check(F.v6468))).f_nidx))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2866))).f_line, y_str("the number of subscripts is not the number of dimensions", 56));
}
F.p2868 = ((*(yR104 *)rt_nil_check(F.v6468))).f_elem;
F.v6478 = (((((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2866))).f_a))).f_kind == v771)) || ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2866))).f_a))).f_kind == v777))) || ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2866))).f_a))).f_kind == v780))) || ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2866))).f_a))).f_kind == v783)));
if (F.v6478) {
F.v6466 = F.v6462;
} else {
F.v6466 = yr1194_Fresh(y_str("ya", 2));
}
yr1020_SB();
if ((!F.v6478)) {
yr1031_SA(y_str("(*({ yarr ", 10));
yr1038_ST(F.v6466);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(F.v6462);
yr1031_SA(y_str("; &", 3));
}
yr1031_SA(y_str("((", 2));
yr1038_ST(yr2398_CType(F.p2868));
yr1031_SA(y_str(" *)(", 4));
yr1038_ST(F.v6466);
yr1031_SA(y_str(").p)[y_ix", 9));
yr1044_SI(F.v6476);
yr1031_SA(y_str("(", 1));
yr1038_ST(F.v6466);
F.p2867 = yr1050_SE();
F.v6474 = ((*(yR99 *)rt_nil_check(F.p2866))).f_b;
F.v6472 = ((*(yR104 *)rt_nil_check(F.v6468))).f_idx;
while ((!(F.v6474 == ((void *)0)))) {
yr2839_Expr(F.v6474, F.v6472, &F.v6464, &F.v6470);
if ((((!(F.v6472 == ((void *)0)))) && ((((*(yR104 *)rt_nil_check(F.v6468))).f_kind == v816)))) {
yr2431_CheckType(((*(yR99 *)rt_nil_check(F.v6474))).f_line, F.v6472, F.v6470);
} else if ((!((((((*(yR104 *)rt_nil_check(F.v6470))).f_kind == v798)) || yr2349_IsDiscrete(F.v6470))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.v6474))).f_line, y_str("a subscript is an integer or scalar value", 41));
}
yr1020_SB();
yr1038_ST(F.p2867);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v6464);
F.p2867 = yr1050_SE();
if ((!(F.v6472 == ((void *)0)))) {
F.v6472 = ((*(yR104 *)rt_nil_check(F.v6472))).f_link;
}
F.v6474 = ((*(yR99 *)rt_nil_check(F.v6474))).f_next;
}
yr1020_SB();
yr1038_ST(F.p2867);
yr1031_SA(y_str(")]", 2));
if ((!F.v6478)) {
yr1031_SA(y_str("; }))", 5));
}
F.p2867 = yr1050_SE();
(*F.p2867_o) = F.p2867;
(*F.p2868_o) = F.p2868;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2873_NegExpr(void * a_p2874, rt_int a_p2875, void * a_p2876, rt_int * a_p2877, void * * a_p2878) {
struct yf2879 F;
memset((void *)&F, 0, sizeof F);
F.p2874 = a_p2874;
F.p2875 = a_p2875;
F.p2876 = a_p2876;
F.p2877_o = a_p2877;
F.p2878_o = a_p2878;
yr1020_SB();
if ((((*(yR104 *)rt_nil_check(F.p2876))).f_kind == v798)) {
F.p2878 = yr2343_CopyRep(F.p2876);
((*(yR104 *)rt_nil_check(F.p2878))).f_lo = INT64_C(0);
((*(yR104 *)rt_nil_check(F.p2878))).f_hasm = 0;
yr1031_SA(y_str("rt_neg(", 7));
yr1038_ST(F.p2875);
yr1031_SA(y_str(")", 1));
} else if ((((*(yR104 *)rt_nil_check(F.p2876))).f_kind == v804)) {
F.p2878 = yr2343_CopyRep(F.p2876);
((*(yR104 *)rt_nil_check(F.p2878))).f_lo = INT64_C(0);
yr1031_SA(y_str("(-", 2));
yr1038_ST(F.p2875);
yr1031_SA(y_str(")", 1));
} else if ((((*(yR104 *)rt_nil_check(F.p2876))).f_kind == v801)) {
F.p2878 = yr2343_CopyRep(F.p2876);
((*(yR104 *)rt_nil_check(F.p2878))).f_lo = INT64_C(0);
yr1031_SA(y_str("y_fix_neg(", 10));
yr1038_ST(F.p2875);
yr1031_SA(y_str(")", 1));
} else if ((((*(yR104 *)rt_nil_check(F.p2876))).f_kind == v828)) {
F.p2878 = F.p2876;
yr1031_SA(y_str("y_set_compl(", 12));
yr1038_ST(F.p2875);
yr1031_SA(y_str(")", 1));
} else {
v921 = 0;
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2874))).f_line, y_str("- of something that is not a number or a set", 44));
}
F.p2877 = yr1050_SE();
(*F.p2877_o) = F.p2877;
(*F.p2878_o) = F.p2878;
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2883_Unbounded(void * a_p2884) {
struct yf2885 F;
memset((void *)&F, 0, sizeof F);
F.p2884 = a_p2884;
F.v6516 = yr2343_CopyRep(F.p2884);
((*(yR104 *)rt_nil_check(F.v6516))).f_lo = INT64_C(0);
((*(yR104 *)rt_nil_check(F.v6516))).f_hi = INT64_C(0);
((*(yR104 *)rt_nil_check(F.v6516))).f_hasm = 0;
{ void * rv6520 = F.v6516;
return rv6520; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2889_Call2(yarr a_p2891, rt_int a_p2892, rt_int a_p2893) {
struct yf2894 F;
memset((void *)&F, 0, sizeof F);
F.p2891 = a_p2891;
F.p2892 = a_p2892;
F.p2893 = a_p2893;
yr1020_SB();
yr1031_SA(F.p2891);
yr1031_SA(y_str("(", 1));
yr1038_ST(F.p2892);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.p2893);
yr1031_SA(y_str(")", 1));
{ rt_int rv6528 = yr1050_SE();
return rv6528; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2898_Infix(rt_int a_p2899, yarr a_p2901, rt_int a_p2902) {
struct yf2903 F;
memset((void *)&F, 0, sizeof F);
F.p2899 = a_p2899;
F.p2901 = a_p2901;
F.p2902 = a_p2902;
yr1020_SB();
yr1031_SA(y_str("(", 1));
yr1038_ST(F.p2899);
yr1031_SA(y_str(" ", 1));
yr1031_SA(F.p2901);
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.p2902);
yr1031_SA(y_str(")", 1));
{ rt_int rv6537 = yr1050_SE();
return rv6537; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2907_EqCode(rt_int a_p2908, void * a_p2909, rt_int a_p2910, void * a_p2911) {
struct yf2912 F;
memset((void *)&F, 0, sizeof F);
F.p2908 = a_p2908;
F.p2909 = a_p2909;
F.p2910 = a_p2910;
F.p2911 = a_p2911;
F.v6548 = F.p2909;
if ((((*(yR104 *)rt_nil_check(F.p2909))).f_kind == v840)) {
F.v6548 = F.p2911;
}
if ((((((((*(yR104 *)rt_nil_check(F.v6548))).f_kind == v816)) || ((((*(yR104 *)rt_nil_check(F.v6548))).f_kind == v819))) || ((((*(yR104 *)rt_nil_check(F.v6548))).f_kind == v837))) || ((((*(yR104 *)rt_nil_check(F.v6548))).f_kind == v840)))) {
F.v6544 = yr1194_Fresh(y_str("e", 1));
F.v6546 = yr1194_Fresh(y_str("e", 1));
yr1020_SB();
yr1031_SA(y_str("({ ", 3));
yr1038_ST(yr2398_CType(F.v6548));
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v6544);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(F.p2908);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v6546);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(F.p2910);
yr1031_SA(y_str("; y_eq(", 7));
if ((((((*(yR104 *)rt_nil_check(F.v6548))).f_kind == v837)) || ((((*(yR104 *)rt_nil_check(F.v6548))).f_kind == v840)))) {
yr1031_SA(y_str("y_desc_vector(", 14));
yr1038_ST(yr2404_DescOf(((*(yR104 *)rt_nil_check(F.v6548))).f_elem));
yr1031_SA(y_str(")", 1));
} else {
yr1038_ST(yr2404_DescOf(F.v6548));
}
yr1031_SA(y_str(", &", 3));
yr1038_ST(F.v6544);
yr1031_SA(y_str(", &", 3));
yr1038_ST(F.v6546);
yr1031_SA(y_str("); })", 5));
{ rt_int rv6562 = yr1050_SE();
return rv6562; }
}
if ((((*(yR104 *)rt_nil_check(F.v6548))).f_kind == v828)) {
{ rt_int rv6564 = yr2889_Call2(y_str("y_set_eq", 8), F.p2908, F.p2910);
return rv6564; }
}
{ rt_int rv6566 = yr2898_Infix(F.p2908, y_str("==", 2), F.p2910);
return rv6566; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2916_IsOrdered(void * a_p2917) {
struct yf2918 F;
memset((void *)&F, 0, sizeof F);
F.p2917 = a_p2917;
if ((((((((*(yR104 *)rt_nil_check(F.p2917))).f_kind == v798)) || ((((*(yR104 *)rt_nil_check(F.p2917))).f_kind == v804))) || ((((*(yR104 *)rt_nil_check(F.p2917))).f_kind == v801))) || ((((*(yR104 *)rt_nil_check(F.p2917))).f_kind == v813)))) {
{ rt_int rv6570 = 1;
return rv6570; }
}
{ rt_int rv6571 = (((((*(yR104 *)rt_nil_check(F.p2917))).f_kind == v810)) && ((*(yR104 *)rt_nil_check(F.p2917))).f_ordered);
return rv6571; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2922_FixToFloat(rt_int a_p2923, void * a_p2924) {
struct yf2925 F;
memset((void *)&F, 0, sizeof F);
F.p2923 = a_p2923;
F.p2924 = a_p2924;
yr1020_SB();
yr1031_SA(y_str("y_fix_float(", 12));
yr1038_ST(F.p2923);
yr1031_SA(y_str(", INT64_C(", 10));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2924))).f_fsn);
yr1031_SA(y_str("), INT64_C(", 11));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2924))).f_fsd);
yr1031_SA(y_str("))", 2));
{ rt_int rv6579 = yr1050_SE();
return rv6579; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2929_BinExpr(void * a_p2930, void * a_p2931, rt_int * a_p2932, void * * a_p2933) {
struct yf2934 F;
memset((void *)&F, 0, sizeof F);
F.p2930 = a_p2930;
F.p2931 = a_p2931;
F.p2932_o = a_p2932;
F.p2933_o = a_p2933;
F.v6586 = ((*(yR99 *)rt_nil_check(F.p2930))).f_name;
if (yr2998_UserOp(F.p2930, F.v6586, ((*(yR99 *)rt_nil_check(F.p2930))).f_a, ((*(yR99 *)rt_nil_check(F.p2930))).f_b, &F.p2932, &F.p2933)) {
(*F.p2932_o) = F.p2932;
(*F.p2933_o) = F.p2933;
return;
}
if ((((F.v6586 == v231)) || ((F.v6586 == v393)))) {
yr2839_Expr(((*(yR99 *)rt_nil_check(F.p2930))).f_a, v1338, &F.v6588, &F.v6594);
yr2431_CheckType(((*(yR99 *)rt_nil_check(F.p2930))).f_line, v1338, F.v6594);
yr2839_Expr(((*(yR99 *)rt_nil_check(F.p2930))).f_b, v1338, &F.v6590, &F.v6596);
yr2431_CheckType(((*(yR99 *)rt_nil_check(F.p2930))).f_line, v1338, F.v6596);
F.p2933 = v1338;
if ((F.v6586 == v231)) {
F.p2932 = yr2898_Infix(F.v6588, y_str("&&", 2), F.v6590);
} else {
F.p2932 = yr2898_Infix(F.v6588, y_str("||", 2), F.v6590);
}
(*F.p2932_o) = F.p2932;
(*F.p2933_o) = F.p2933;
return;
}
if ((F.v6586 == v354)) {
yr2839_Expr(((*(yR99 *)rt_nil_check(F.p2930))).f_b, ((void *)0), &F.v6590, &F.v6596);
if ((!(((*(yR104 *)rt_nil_check(F.v6596))).f_kind == v828))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2930))).f_line, y_str("IN needs a set on its right", 27));
}
yr2839_Expr(((*(yR99 *)rt_nil_check(F.p2930))).f_a, ((*(yR104 *)rt_nil_check(F.v6596))).f_elem, &F.v6588, &F.v6594);
yr2431_CheckType(((*(yR99 *)rt_nil_check(F.p2930))).f_line, ((*(yR104 *)rt_nil_check(F.v6596))).f_elem, F.v6594);
F.p2933 = v1338;
F.p2932 = yr2889_Call2(y_str("y_set_in", 8), F.v6588, F.v6590);
(*F.p2932_o) = F.p2932;
(*F.p2933_o) = F.p2933;
return;
}
F.v6598 = ((void *)0);
if (((((((((!(F.p2931 == ((void *)0)))) && ((!(F.v6586 == v579)))) && ((!(F.v6586 == v564)))) && ((!(F.v6586 == v582)))) && ((!(F.v6586 == v534)))) && ((!(F.v6586 == v585)))) && ((!(F.v6586 == v537))))) {
F.v6598 = F.p2931;
}
yr2839_Expr(((*(yR99 *)rt_nil_check(F.p2930))).f_a, F.v6598, &F.v6588, &F.v6594);
yr2839_Expr(((*(yR99 *)rt_nil_check(F.p2930))).f_b, F.v6594, &F.v6590, &F.v6596);
if ((((F.v6586 == v579)) || ((F.v6586 == v564)))) {
yr2431_CheckType(((*(yR99 *)rt_nil_check(F.p2930))).f_line, F.v6594, F.v6596);
if (yr2392_NonAssignable(F.v6594)) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2930))).f_line, y_str("= and # are not defined for signals, files and semaphores, nor what holds them (VII.B)", 86));
}
if ((((*(yR104 *)rt_nil_check(F.v6594))).f_opaque && (((rt_div(((*(yR104 *)rt_nil_check(F.v6594))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2930))).f_line, ((*(yR104 *)rt_nil_check(F.v6594))).f_tname, y_str(" is opaque here: = is not exported (X.B.3)", 42));
}
F.p2933 = v1338;
if ((((*(yR104 *)rt_nil_check(F.v6594))).f_kind == v801)) {
yr2738_CommonScale(&F.v6588, F.v6594, &F.v6590, F.v6596, yr2883_Unbounded(F.v6594), ((*(yR99 *)rt_nil_check(F.p2930))).f_line);
}
F.p2932 = yr2907_EqCode(F.v6588, F.v6594, F.v6590, F.v6596);
if ((F.v6586 == v564)) {
yr1020_SB();
yr1031_SA(y_str("(!", 2));
yr1038_ST(F.p2932);
yr1031_SA(y_str(")", 1));
F.p2932 = yr1050_SE();
}
(*F.p2932_o) = F.p2932;
(*F.p2933_o) = F.p2933;
return;
}
if ((((((F.v6586 == v582)) || ((F.v6586 == v534))) || ((F.v6586 == v585))) || ((F.v6586 == v537)))) {
yr2431_CheckType(((*(yR99 *)rt_nil_check(F.p2930))).f_line, F.v6594, F.v6596);
if ((!yr2916_IsOrdered(F.v6594))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2930))).f_line, y_str("< <= > >= apply to ordered values (VIII.A.1)", 44));
}
F.p2933 = v1338;
if ((((*(yR104 *)rt_nil_check(F.v6594))).f_kind == v801)) {
yr2738_CommonScale(&F.v6588, F.v6594, &F.v6590, F.v6596, yr2883_Unbounded(F.v6594), ((*(yR99 *)rt_nil_check(F.p2930))).f_line);
}
if ((F.v6586 == v582)) {
F.p2932 = yr2898_Infix(F.v6588, y_str("<", 1), F.v6590);
} else if ((F.v6586 == v534)) {
F.p2932 = yr2898_Infix(F.v6588, y_str("<=", 2), F.v6590);
} else if ((F.v6586 == v585)) {
F.p2932 = yr2898_Infix(F.v6588, y_str(">", 1), F.v6590);
} else {
F.p2932 = yr2898_Infix(F.v6588, y_str(">=", 2), F.v6590);
}
(*F.p2932_o) = F.p2932;
(*F.p2933_o) = F.p2933;
return;
}
yr2431_CheckType(((*(yR99 *)rt_nil_check(F.p2930))).f_line, F.v6594, F.v6596);
F.v6600 = ((*(yR104 *)rt_nil_check(F.v6594))).f_kind;
if ((((*(yR104 *)rt_nil_check(F.v6594))).f_kind == v840)) {
F.v6600 = ((*(yR104 *)rt_nil_check(F.v6596))).f_kind;
}
if ((F.v6586 == v483)) {
if ((F.v6600 == v807)) {
F.p2933 = v1338;
F.p2932 = yr2898_Infix(F.v6588, y_str("!=", 2), F.v6590);
} else if ((F.v6600 == v828)) {
F.p2933 = F.v6594;
F.p2932 = yr2889_Call2(y_str("y_set_xor", 9), F.v6588, F.v6590);
} else {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2930))).f_line, y_str("XOR applies to BOOLEAN values and sets", 38));
}
(*F.p2932_o) = F.p2932;
(*F.p2933_o) = F.p2933;
return;
}
if ((F.v6600 == v828)) {
F.p2933 = F.v6594;
if ((F.v6586 == v567)) {
F.p2932 = yr2889_Call2(y_str("y_set_union", 11), F.v6588, F.v6590);
} else if ((F.v6586 == v570)) {
F.p2932 = yr2889_Call2(y_str("y_set_diff", 10), F.v6588, F.v6590);
} else if ((F.v6586 == v573)) {
F.p2932 = yr2889_Call2(y_str("y_set_inter", 11), F.v6588, F.v6590);
} else {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2930))).f_line, y_str("this operator does not apply to sets", 36));
}
(*F.p2932_o) = F.p2932;
(*F.p2933_o) = F.p2933;
return;
}
if ((F.v6600 == v798)) {
F.p2933 = yr2883_Unbounded(F.v6594);
if ((F.v6586 == v567)) {
F.p2932 = yr2889_Call2(y_str("rt_add", 6), F.v6588, F.v6590);
} else if ((F.v6586 == v570)) {
F.p2932 = yr2889_Call2(y_str("rt_sub", 6), F.v6588, F.v6590);
} else if ((F.v6586 == v573)) {
F.p2932 = yr2889_Call2(y_str("rt_mul", 6), F.v6588, F.v6590);
} else if ((F.v6586 == v270)) {
F.p2932 = yr2889_Call2(y_str("rt_div", 6), F.v6588, F.v6590);
} else if ((F.v6586 == v372)) {
F.p2932 = yr2889_Call2(y_str("rt_mod", 6), F.v6588, F.v6590);
} else if ((F.v6586 == v576)) {
F.p2933 = v1348;
yr1020_SB();
yr1031_SA(y_str("rt_fdiv((double)(", 17));
yr1038_ST(F.v6588);
yr1031_SA(y_str("), (double)(", 12));
yr1038_ST(F.v6590);
yr1031_SA(y_str("))", 2));
F.p2932 = yr1050_SE();
} else {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2930))).f_line, F.v6586, y_str(" is a free operator: no definition of it is visible (VIII.A)", 60));
}
(*F.p2932_o) = F.p2932;
(*F.p2933_o) = F.p2933;
return;
}
if ((F.v6600 == v804)) {
F.p2933 = yr2883_Unbounded(F.v6594);
if ((F.v6586 == v567)) {
F.p2932 = yr2766_FloatChk(yr2898_Infix(F.v6588, y_str("+", 1), F.v6590));
} else if ((F.v6586 == v570)) {
F.p2932 = yr2766_FloatChk(yr2898_Infix(F.v6588, y_str("-", 1), F.v6590));
} else if ((F.v6586 == v573)) {
F.p2932 = yr2766_FloatChk(yr2898_Infix(F.v6588, y_str("*", 1), F.v6590));
} else if ((F.v6586 == v576)) {
F.p2933 = v1348;
F.p2932 = yr2766_FloatChk(yr2889_Call2(y_str("rt_fdiv", 7), F.v6588, F.v6590));
} else {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2930))).f_line, F.v6586, y_str(" does not apply to these numbers", 32));
}
(*F.p2932_o) = F.p2932;
(*F.p2933_o) = F.p2933;
return;
}
if ((F.v6600 == v801)) {
F.p2933 = yr2883_Unbounded(F.v6594);
if ((((F.v6586 == v567)) || ((F.v6586 == v570)))) {
yr2738_CommonScale(&F.v6588, F.v6594, &F.v6590, F.v6596, F.p2933, ((*(yR99 *)rt_nil_check(F.p2930))).f_line);
if ((F.v6586 == v567)) {
F.p2932 = yr2889_Call2(y_str("y_fix_add", 9), F.v6588, F.v6590);
} else {
F.p2932 = yr2889_Call2(y_str("y_fix_sub", 9), F.v6588, F.v6590);
}
} else if ((F.v6586 == v573)) {
yr2545_SetScale(F.p2933, yr2512_MulChk(((*(yR104 *)rt_nil_check(F.v6594))).f_fsn, ((*(yR104 *)rt_nil_check(F.v6596))).f_fsn, ((*(yR99 *)rt_nil_check(F.p2930))).f_line), yr2512_MulChk(((*(yR104 *)rt_nil_check(F.v6594))).f_fsd, ((*(yR104 *)rt_nil_check(F.v6596))).f_fsd, ((*(yR99 *)rt_nil_check(F.p2930))).f_line));
F.p2932 = yr2889_Call2(y_str("y_fix_mul", 9), F.v6588, F.v6590);
} else if ((F.v6586 == v576)) {
F.p2933 = v1348;
F.p2932 = yr2766_FloatChk(yr2889_Call2(y_str("rt_fdiv", 7), yr2922_FixToFloat(F.v6588, F.v6594), yr2922_FixToFloat(F.v6590, F.v6596)));
} else {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2930))).f_line, F.v6586, y_str(" does not apply to these numbers", 32));
}
(*F.p2932_o) = F.p2932;
(*F.p2933_o) = F.p2933;
return;
}
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2930))).f_line, F.v6586, y_str(" does not apply to these values", 31));
(*F.p2932_o) = F.p2932;
(*F.p2933_o) = F.p2933;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2938_Fits(void * a_p2939, void * a_p2940) {
struct yf2941 F;
memset((void *)&F, 0, sizeof F);
F.p2939 = a_p2939;
F.p2940 = a_p2940;
if ((((*(yR104 *)rt_nil_check(F.p2939))).f_kind == v837)) {
if ((!yr2361_IsArrayLike(F.p2940))) {
{ rt_int rv6648 = 0;
return rv6648; }
}
if ((!(((*(yR104 *)rt_nil_check(F.p2940))).f_nidx == ((*(yR104 *)rt_nil_check(F.p2939))).f_nidx))) {
{ rt_int rv6650 = 0;
return rv6650; }
}
{ rt_int rv6651 = yr2416_SameType(((*(yR104 *)rt_nil_check(F.p2939))).f_elem, ((*(yR104 *)rt_nil_check(F.p2940))).f_elem);
return rv6651; }
}
if ((((*(yR104 *)rt_nil_check(F.p2939))).f_kind == v849)) {
{ rt_int rv6653 = 1;
return rv6653; }
}
{ rt_int rv6654 = yr2416_SameType(F.p2939, F.p2940);
return rv6654; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2945_Choose(void * a_p2946, rt_int a_p2947, rt_int a_p2948) {
struct yf2949 F;
memset((void *)&F, 0, sizeof F);
F.p2946 = a_p2946;
F.p2947 = a_p2947;
F.p2948 = a_p2948;
F.v6660 = F.p2946;
while ((!(F.v6660 == ((void *)0)))) {
if ((((*(yR119 *)rt_nil_check(F.v6660))).f_nparams == F.p2948)) {
F.v6664 = 1;
F.v6662 = ((*(yR119 *)rt_nil_check(F.v6660))).f_params;
F.v6666 = INT64_C(1);
while ((!(F.v6662 == ((void *)0)))) {
if ((!yr2938_Fits(((*(yR114 *)rt_nil_check(F.v6662))).f_rep, ((void * *)(v1493).p)[y_ix1(v1493, rt_add(F.p2947, F.v6666))]))) {
F.v6664 = 0;
}
F.v6666 = rt_range(rt_add(F.v6666, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6662 = ((*(yR114 *)rt_nil_check(F.v6662))).f_next;
}
if (F.v6664) {
{ void * rv6673 = F.v6660;
return rv6673; }
}
}
F.v6660 = ((*(yR119 *)rt_nil_check(F.v6660))).f_alt;
}
{ void * rv6674 = ((void *)0);
return rv6674; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2953_HidesStandard(void * a_p2954) {
struct yf2955 F;
memset((void *)&F, 0, sizeof F);
F.p2954 = a_p2954;
F.v6678 = F.p2954;
while ((!(F.v6678 == ((void *)0)))) {
if ((((!(((*(yR119 *)rt_nil_check(F.v6678))).f_decl == ((void *)0)))) && ((((*(yR99 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v6678))).f_decl))).f_ival == INT64_C(0))))) {
{ rt_int rv6681 = 1;
return rv6681; }
}
F.v6678 = ((*(yR119 *)rt_nil_check(F.v6678))).f_alt;
}
{ rt_int rv6683 = 0;
return rv6683; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2959_CompileArgs(void * a_p2960, void * a_p2961, rt_int * a_p2962, rt_int * a_p2963) {
struct yf2964 F;
memset((void *)&F, 0, sizeof F);
F.p2960 = a_p2960;
F.p2961 = a_p2961;
F.p2962_o = a_p2962;
F.p2963_o = a_p2963;
F.v6690 = F.p2960;
F.v6692 = ((void *)0);
F.p2962 = v1506;
F.p2963 = INT64_C(0);
if ((!(F.p2961 == ((void *)0)))) {
F.v6692 = ((*(yR119 *)rt_nil_check(F.p2961))).f_params;
}
while ((!(F.v6690 == ((void *)0)))) {
if ((v1506 >= INT64_C(4000))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.v6690))).f_line, y_str("calls nested too deeply", 23));
}
F.p2963 = rt_range(rt_add(F.p2963, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1506 = rt_range(rt_add(F.p2962, F.p2963), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6694 = ((void *)0);
if ((!(F.v6692 == ((void *)0)))) {
F.v6694 = ((*(yR114 *)rt_nil_check(F.v6692))).f_rep;
F.v6692 = ((*(yR114 *)rt_nil_check(F.v6692))).f_next;
}
yr2839_Expr(F.v6690, F.v6694, &((rt_int *)(v1482).p)[y_ix1(v1482, rt_add(F.p2962, F.p2963))], &((void * *)(v1493).p)[y_ix1(v1493, rt_add(F.p2962, F.p2963))]);
((void * *)(v1504).p)[y_ix1(v1504, rt_add(F.p2962, F.p2963))] = F.v6690;
F.v6690 = ((*(yR99 *)rt_nil_check(F.v6690))).f_next;
}
(*F.p2962_o) = F.p2962;
(*F.p2963_o) = F.p2963;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2968_CheckUnresolved(void * a_p2969, void * a_p2970, rt_int a_p2971) {
struct yf2972 F;
memset((void *)&F, 0, sizeof F);
F.p2969 = a_p2969;
F.p2970 = a_p2970;
F.p2971 = a_p2971;
if ((((!(((*(yR104 *)rt_nil_check(F.p2969))).f_kind == v837))) || ((!(((*(yR104 *)rt_nil_check(F.p2970))).f_kind == v816))))) {
return;
}
F.v6709 = ((*(yR104 *)rt_nil_check(F.p2970))).f_idx;
while ((!(F.v6709 == ((void *)0)))) {
if ((!(((*(yR104 *)rt_nil_check(F.v6709))).f_kind == v798))) {
yr1172_FailS(F.p2971, y_str("a length-unresolved array formal takes arrays with integer indices only (X.A.3)", 79));
}
F.v6709 = ((*(yR104 *)rt_nil_check(F.v6709))).f_link;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2976_SameAsFormal(void * a_p2977, void * a_p2978) {
struct yf2979 F;
memset((void *)&F, 0, sizeof F);
F.p2977 = a_p2977;
F.p2978 = a_p2978;
if ((((*(yR104 *)rt_nil_check(F.p2977))).f_kind == v849)) {
{ rt_int rv6715 = 1;
return rv6715; }
}
if ((((*(yR104 *)rt_nil_check(F.p2977))).f_kind == v837)) {
if ((!((((((*(yR104 *)rt_nil_check(F.p2978))).f_kind == v816)) || ((((*(yR104 *)rt_nil_check(F.p2978))).f_kind == v837)))))) {
{ rt_int rv6717 = 0;
return rv6717; }
}
{ rt_int rv6718 = yr2458_Identical(((*(yR104 *)rt_nil_check(F.p2977))).f_elem, ((*(yR104 *)rt_nil_check(F.p2978))).f_elem);
return rv6718; }
}
{ rt_int rv6719 = yr2458_Identical(F.p2977, F.p2978);
return rv6719; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2983_CallCode(void * a_p2984, rt_int a_p2985, rt_int a_p2986, rt_int a_p2987) {
struct yf2988 F;
memset((void *)&F, 0, sizeof F);
F.p2984 = a_p2984;
F.p2985 = a_p2985;
F.p2986 = a_p2986;
F.p2987 = a_p2987;
F.v6726 = ((*(yR119 *)rt_nil_check(F.p2984))).f_params;
F.v6728 = rt_range(rt_add(F.p2985, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6732 = 1;
F.v6735 = INT64_C(0);
F.v6738 = INT64_C(0);
F.v6741 = INT64_C(0);
F.v6744 = INT64_C(0);
F.v6747 = INT64_C(0);
if ((!(F.p2986 == ((*(yR119 *)rt_nil_check(F.p2984))).f_nparams))) {
yr1180_FailN(F.p2987, ((*(yR119 *)rt_nil_check(F.p2984))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
yr3275_CheckActuals(F.p2984, F.p2985, F.p2987);
yr1020_SB();
yr1038_ST(((*(yR119 *)rt_nil_check(F.p2984))).f_cname);
yr1031_SA(y_str("(", 1));
if ((((*(yR119 *)rt_nil_check(F.p2984))).f_level > INT64_C(1))) {
yr1038_ST(yr2311_FramePtr(rt_range(rt_sub(((*(yR119 *)rt_nil_check(F.p2984))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v6732 = 0;
}
while ((!(F.v6726 == ((void *)0)))) {
if ((!F.v6732)) {
yr1031_SA(y_str(", ", 2));
}
F.v6732 = 0;
if ((!yr2938_Fits(((*(yR114 *)rt_nil_check(F.v6726))).f_rep, ((void * *)(v1493).p)[y_ix1(v1493, F.v6728)]))) {
v921 = 0;
yr2423_TypeClash(((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v6728)]))).f_line, ((*(yR114 *)rt_nil_check(F.v6726))).f_rep, ((void * *)(v1493).p)[y_ix1(v1493, F.v6728)]);
}
yr2968_CheckUnresolved(((*(yR114 *)rt_nil_check(F.v6726))).f_rep, ((void * *)(v1493).p)[y_ix1(v1493, F.v6728)], ((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v6728)]))).f_line);
if ((((*(yR114 *)rt_nil_check(F.v6726))).f_cls == v891)) {
yr1038_ST(yr2772_Convert(((rt_int *)(v1482).p)[y_ix1(v1482, F.v6728)], ((*(yR114 *)rt_nil_check(F.v6726))).f_rep, ((void * *)(v1493).p)[y_ix1(v1493, F.v6728)]));
} else {
if ((!yr2800_IsVariable(((void * *)(v1504).p)[y_ix1(v1504, F.v6728)]))) {
v921 = 0;
yr1180_FailN(((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v6728)]))).f_line, ((*(yR114 *)rt_nil_check(F.v6726))).f_name, y_str(": the actual of a VAR or OUT parameter must be a variable", 57));
}
yr2806_CheckPure(((void * *)(v1504).p)[y_ix1(v1504, F.v6728)]);
yr3242_NoteWrite(((void * *)(v1504).p)[y_ix1(v1504, F.v6728)]);
if (yr2976_SameAsFormal(((*(yR114 *)rt_nil_check(F.v6726))).f_rep, ((void * *)(v1493).p)[y_ix1(v1493, F.v6728)])) {
yr1031_SA(y_str("&", 1));
yr1038_ST(((rt_int *)(v1482).p)[y_ix1(v1482, F.v6728)]);
} else if ((((*(yR114 *)rt_nil_check(F.v6726))).f_cls == v897)) {
yr1180_FailN(((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v6728)]))).f_line, ((*(yR114 *)rt_nil_check(F.v6726))).f_name, y_str(": a VAR actual has the representation of its formal (VII.G, X.A.2)", 66));
} else {
F.v6741 = yr1194_Fresh(y_str("yo", 2));
F.v6735 = yr3187_Join(F.v6735, yr3187_Join(yr2398_CType(((*(yR114 *)rt_nil_check(F.v6726))).f_rep), yr1055_T(y_str(" ", 1)), F.v6741), yr1055_T(y_str(";", 1)));
if ((((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v6726))).f_rep))).f_kind == v837)) {
F.v6735 = yr3187_Join(F.v6735, yr3187_Join(yr1055_T(y_str(" ", 1)), F.v6741, yr1055_T(y_str(" = y_like(", 10))), yr3187_Join(((rt_int *)(v1482).p)[y_ix1(v1482, F.v6728)], yr3187_Join(yr1055_T(y_str(", ", 2)), yr2992_Num(((*(yR104 *)rt_nil_check(((void * *)(v1493).p)[y_ix1(v1493, F.v6728)]))).f_nidx), yr1055_T(y_str(", ", 2))), yr3187_Join(yr2404_DescOf(((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v6726))).f_rep))).f_elem), yr1055_T(y_str(");", 2)), INT64_C(0))));
} else if (yr2373_Deep(((*(yR114 *)rt_nil_check(F.v6726))).f_rep)) {
F.v6735 = yr3187_Join(F.v6735, yr3187_Join(yr1055_T(y_str(" y_init(", 8)), yr2404_DescOf(((*(yR114 *)rt_nil_check(F.v6726))).f_rep), yr1055_T(y_str(", &", 3))), yr3187_Join(F.v6741, yr1055_T(y_str(");", 2)), INT64_C(0)));
}
F.v6738 = yr3187_Join(F.v6738, yr1055_T(y_str(" ", 1)), yr2780_StoreText(((rt_int *)(v1482).p)[y_ix1(v1482, F.v6728)], ((void * *)(v1493).p)[y_ix1(v1493, F.v6728)], F.v6741, ((*(yR114 *)rt_nil_check(F.v6726))).f_rep, ((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v6728)]))).f_line));
yr1031_SA(y_str("&", 1));
yr1038_ST(F.v6741);
}
}
F.v6728 = rt_range(rt_add(F.v6728, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6726 = ((*(yR114 *)rt_nil_check(F.v6726))).f_next;
}
yr1031_SA(y_str(")", 1));
v1506 = F.p2985;
F.v6744 = yr1050_SE();
if ((F.v6735 == INT64_C(0))) {
{ rt_int rv6781 = F.v6744;
return rv6781; }
}
yr1020_SB();
yr1031_SA(y_str("({ ", 3));
yr1038_ST(F.v6735);
if ((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.p2984))).f_ret))).f_kind == v846)) {
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v6744);
yr1031_SA(y_str(";", 1));
yr1038_ST(F.v6738);
yr1031_SA(y_str(" })", 3));
} else {
F.v6747 = yr1194_Fresh(y_str("yv", 2));
yr1031_SA(y_str(" ", 1));
yr1038_ST(yr2398_CType(((*(yR119 *)rt_nil_check(F.p2984))).f_ret));
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v6747);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(F.v6744);
yr1031_SA(y_str(";", 1));
yr1038_ST(F.v6738);
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v6747);
yr1031_SA(y_str("; })", 4));
}
{ rt_int rv6793 = yr1050_SE();
return rv6793; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2992_Num(rt_int a_p2993) {
struct yf2994 F;
memset((void *)&F, 0, sizeof F);
F.p2993 = a_p2993;
yr1020_SB();
yr1044_SI(F.p2993);
{ rt_int rv6796 = yr1050_SE();
return rv6796; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2998_UserOp(void * a_p2999, rt_int a_p3000, void * a_p3001, void * a_p3002, rt_int * a_p3003, void * * a_p3004) {
struct yf3005 F;
memset((void *)&F, 0, sizeof F);
F.p2999 = a_p2999;
F.p3000 = a_p3000;
F.p3001 = a_p3001;
F.p3002 = a_p3002;
F.p3003_o = a_p3003;
F.p3004_o = a_p3004;
F.v6805 = yr2232_Find(F.p3000);
if ((F.v6805 == ((void *)0))) {
{ rt_int rv6813 = 0;
(*F.p3003_o) = F.p3003;
(*F.p3004_o) = F.p3004;
return rv6813; }
}
F.v6805 = yr2330_Real(F.v6805);
if ((!(((*(yR119 *)rt_nil_check(F.v6805))).f_kind == v870))) {
{ rt_int rv6815 = 0;
(*F.p3003_o) = F.p3003;
(*F.p3004_o) = F.p3004;
return rv6815; }
}
((*(yR99 *)rt_nil_check(F.p3001))).f_next = F.p3002;
if ((!(F.p3002 == ((void *)0)))) {
((*(yR99 *)rt_nil_check(F.p3002))).f_next = ((void *)0);
}
yr2959_CompileArgs(F.p3001, ((void *)0), &F.v6809, &F.v6811);
F.v6807 = yr2945_Choose(F.v6805, F.v6809, F.v6811);
if ((F.v6807 == ((void *)0))) {
v1506 = F.v6809;
if (yr2953_HidesStandard(F.v6805)) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2999))).f_line, F.p3000, y_str(": no definition takes operands of these types", 45));
}
{ rt_int rv6818 = 0;
(*F.p3003_o) = F.p3003;
(*F.p3004_o) = F.p3004;
return rv6818; }
}
yr3009_NoteCall(F.v6807, ((*(yR99 *)rt_nil_check(F.p2999))).f_line);
F.p3003 = yr2983_CallCode(F.v6807, F.v6809, F.v6811, ((*(yR99 *)rt_nil_check(F.p2999))).f_line);
F.p3004 = ((*(yR119 *)rt_nil_check(F.v6807))).f_ret;
{ rt_int rv6820 = 1;
(*F.p3003_o) = F.p3003;
(*F.p3004_o) = F.p3004;
return rv6820; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3009_NoteCall(void * a_p3010, rt_int a_p3011) {
struct yf3012 F;
memset((void *)&F, 0, sizeof F);
F.p3010 = a_p3010;
F.p3011 = a_p3011;
if ((!((*(yR119 *)rt_nil_check(F.p3010))).f_func)) {
v1627 = rt_range(rt_add(v1627, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((v1595 == ((void *)0))) {
return;
}
F.v6825 = yr1888_NewNode(v663, F.p3011);
((*(yR99 *)rt_nil_check(F.v6825))).f_sym = F.p3010;
((*(yR99 *)rt_nil_check(F.v6825))).f_next = ((*(yR119 *)rt_nil_check(v1595))).f_calls;
((*(yR119 *)rt_nil_check(v1595))).f_calls = F.v6825;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3016_UserAssign(rt_int a_p3017, void * a_p3018, rt_int a_p3019, void * a_p3020, rt_int a_p3021) {
struct yf3022 F;
memset((void *)&F, 0, sizeof F);
F.p3017 = a_p3017;
F.p3018 = a_p3018;
F.p3019 = a_p3019;
F.p3020 = a_p3020;
F.p3021 = a_p3021;
F.v6835 = yr2232_Find(rt_range(v525, INT64_C(0), INT64_C(4000000)));
if ((F.v6835 == ((void *)0))) {
{ rt_int rv6845 = INT64_C(0);
return rv6845; }
}
F.v6835 = yr2330_Real(F.v6835);
if ((!(((*(yR119 *)rt_nil_check(F.v6835))).f_kind == v870))) {
{ rt_int rv6847 = INT64_C(0);
return rv6847; }
}
F.v6837 = F.v6835;
while ((!(F.v6837 == ((void *)0)))) {
if ((((*(yR119 *)rt_nil_check(F.v6837))).f_nparams == INT64_C(2))) {
F.v6839 = ((*(yR119 *)rt_nil_check(F.v6837))).f_params;
F.v6841 = ((*(yR114 *)rt_nil_check(F.v6839))).f_next;
if ((((((!(((*(yR114 *)rt_nil_check(F.v6839))).f_cls == v891))) && ((((*(yR114 *)rt_nil_check(F.v6841))).f_cls == v891))) && yr2416_SameType(((*(yR114 *)rt_nil_check(F.v6839))).f_rep, F.p3018)) && yr2416_SameType(((*(yR114 *)rt_nil_check(F.v6841))).f_rep, F.p3020))) {
if ((v1595 == F.v6837)) {
{ rt_int rv6850 = INT64_C(0);
return rv6850; }
}
yr3009_NoteCall(F.v6837, F.p3021);
yr1020_SB();
if (yr2458_Identical(((*(yR114 *)rt_nil_check(F.v6839))).f_rep, F.p3018)) {
yr1038_ST(((*(yR119 *)rt_nil_check(F.v6837))).f_cname);
yr1031_SA(y_str("(", 1));
if ((((*(yR119 *)rt_nil_check(F.v6837))).f_level > INT64_C(1))) {
yr1038_ST(yr2311_FramePtr(rt_range(rt_sub(((*(yR119 *)rt_nil_check(F.v6837))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr1031_SA(y_str(", ", 2));
}
yr1031_SA(y_str("&", 1));
yr1038_ST(F.p3017);
} else {
F.v6843 = yr1194_Fresh(y_str("yo", 2));
yr1031_SA(y_str("{ ", 2));
yr1038_ST(yr2398_CType(((*(yR114 *)rt_nil_check(F.v6839))).f_rep));
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v6843);
yr1031_SA(y_str(";", 1));
if (yr2373_Deep(((*(yR114 *)rt_nil_check(F.v6839))).f_rep)) {
yr1031_SA(y_str(" y_init(", 8));
yr1038_ST(yr2404_DescOf(((*(yR114 *)rt_nil_check(F.v6839))).f_rep));
yr1031_SA(y_str(", &", 3));
yr1038_ST(F.v6843);
yr1031_SA(y_str(");", 2));
}
yr1031_SA(y_str(" ", 1));
yr1038_ST(((*(yR119 *)rt_nil_check(F.v6837))).f_cname);
yr1031_SA(y_str("(", 1));
if ((((*(yR119 *)rt_nil_check(F.v6837))).f_level > INT64_C(1))) {
yr1038_ST(yr2311_FramePtr(rt_range(rt_sub(((*(yR119 *)rt_nil_check(F.v6837))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr1031_SA(y_str(", ", 2));
}
yr1031_SA(y_str("&", 1));
yr1038_ST(F.v6843);
}
yr1031_SA(y_str(", ", 2));
yr1038_ST(yr2772_Convert(F.p3019, ((*(yR114 *)rt_nil_check(F.v6841))).f_rep, F.p3020));
yr1031_SA(y_str(");", 2));
if ((!yr2458_Identical(((*(yR114 *)rt_nil_check(F.v6839))).f_rep, F.p3018))) {
yr1031_SA(y_str(" ", 1));
yr1038_ST(yr2780_StoreText(F.p3017, F.p3018, F.v6843, ((*(yR114 *)rt_nil_check(F.v6839))).f_rep, F.p3021));
yr1031_SA(y_str(" }", 2));
}
{ rt_int rv6875 = yr1050_SE();
return rv6875; }
}
}
F.v6837 = ((*(yR119 *)rt_nil_check(F.v6837))).f_alt;
}
{ rt_int rv6877 = INT64_C(0);
return rv6877; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3026_Assign(rt_int a_p3027, void * a_p3028, rt_int a_p3029, void * a_p3030, rt_int a_p3031) {
struct yf3032 F;
memset((void *)&F, 0, sizeof F);
F.p3027 = a_p3027;
F.p3028 = a_p3028;
F.p3029 = a_p3029;
F.p3030 = a_p3030;
F.p3031 = a_p3031;
F.v6885 = yr3016_UserAssign(F.p3027, F.p3028, F.p3029, F.p3030, F.p3031);
if ((!(F.v6885 == INT64_C(0)))) {
yr1126_Emit(F.v6885);
} else {
yr2790_Store(F.p3027, F.p3028, F.p3029, F.p3030, F.p3031);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3036_CallExpr(void * a_p3037, void * a_p3038, rt_int a_p3039, rt_int * a_p3040, void * * a_p3041) {
struct yf3042 F;
memset((void *)&F, 0, sizeof F);
F.p3037 = a_p3037;
F.p3038 = a_p3038;
F.p3039 = a_p3039;
F.p3040_o = a_p3040;
F.p3041_o = a_p3041;
F.v6894 = yr2330_Real(yr2244_Lookup(((*(yR99 *)rt_nil_check(F.p3037))).f_name, ((*(yR99 *)rt_nil_check(F.p3037))).f_line));
if ((((*(yR119 *)rt_nil_check(F.v6894))).f_kind == v885)) {
yr3628_StdCall(((*(yR119 *)rt_nil_check(F.v6894))).f_mval, F.p3037, F.p3039, &F.p3040, &F.p3041);
(*F.p3040_o) = F.p3040;
(*F.p3041_o) = F.p3041;
return;
}
if ((((((*(yR119 *)rt_nil_check(F.v6894))).f_kind == v861)) || ((((*(yR119 *)rt_nil_check(F.v6894))).f_kind == v864)))) {
if (F.p3039) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3037))).f_line, y_str("a value is not a statement", 26));
}
yr3046_Denote(((*(yR119 *)rt_nil_check(F.v6894))).f_rep, F.p3037, &F.p3040, &F.p3041);
(*F.p3040_o) = F.p3040;
(*F.p3041_o) = F.p3041;
return;
}
if ((!(((*(yR119 *)rt_nil_check(F.v6894))).f_kind == v870))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3037))).f_line, ((*(yR99 *)rt_nil_check(F.p3037))).f_name, y_str(" is not a routine", 17));
}
if ((((*(yR119 *)rt_nil_check(F.v6894))).f_alt == ((void *)0))) {
yr2959_CompileArgs(((*(yR99 *)rt_nil_check(F.p3037))).f_a, F.v6894, &F.v6898, &F.v6900);
F.v6896 = F.v6894;
} else {
yr2959_CompileArgs(((*(yR99 *)rt_nil_check(F.p3037))).f_a, ((void *)0), &F.v6898, &F.v6900);
F.v6896 = yr2945_Choose(F.v6894, F.v6898, F.v6900);
if ((F.v6896 == ((void *)0))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3037))).f_line, ((*(yR99 *)rt_nil_check(F.p3037))).f_name, y_str(": no definition takes actuals of these types", 44));
}
}
yr3009_NoteCall(F.v6896, ((*(yR99 *)rt_nil_check(F.p3037))).f_line);
F.p3040 = yr2983_CallCode(F.v6896, F.v6898, F.v6900, ((*(yR99 *)rt_nil_check(F.p3037))).f_line);
F.p3041 = ((*(yR119 *)rt_nil_check(F.v6896))).f_ret;
if ((F.p3039 && ((!(((*(yR104 *)rt_nil_check(F.p3041))).f_kind == v846))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3037))).f_line, ((*(yR99 *)rt_nil_check(F.p3037))).f_name, y_str(" returns a value: it is called in an expression (IX.A.2)", 56));
}
if (((!F.p3039) && ((((*(yR104 *)rt_nil_check(F.p3041))).f_kind == v846)))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3037))).f_line, ((*(yR99 *)rt_nil_check(F.p3037))).f_name, y_str(" returns no value", 17));
}
(*F.p3040_o) = F.p3040;
(*F.p3041_o) = F.p3041;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3046_Denote(void * a_p3047, void * a_p3048, rt_int * a_p3049, void * * a_p3050) {
struct yf3051 F;
memset((void *)&F, 0, sizeof F);
F.p3047 = a_p3047;
F.p3048 = a_p3048;
F.p3049_o = a_p3049;
F.p3050_o = a_p3050;
F.v6912 = ((*(yR99 *)rt_nil_check(F.p3048))).f_a;
F.v6932 = INT64_C(0);
F.v6939 = 1;
F.p3050 = F.p3047;
if (((*(yR104 *)rt_nil_check(F.p3047))).f_abstract) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3048))).f_line, ((*(yR104 *)rt_nil_check(F.p3047))).f_tname, y_str(" has no representation to denote a value of", 43));
}
if ((((*(yR104 *)rt_nil_check(F.p3047))).f_kind == v819)) {
if (((*(yR104 *)rt_nil_check(F.p3047))).f_opaque) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3048))).f_line, ((*(yR104 *)rt_nil_check(F.p3047))).f_tname, y_str(" is opaque here (X.B.3)", 23));
}
yr1020_SB();
yr1031_SA(y_str("((", 2));
yr1038_ST(((*(yR104 *)rt_nil_check(F.p3047))).f_cname);
yr1031_SA(y_str("){ ", 3));
F.v6918 = yr1050_SE();
F.v6914 = ((*(yR104 *)rt_nil_check(F.p3047))).f_fields;
while ((!(F.v6914 == ((void *)0)))) {
if ((((((*(yR109 *)rt_nil_check(F.v6914))).f_variant == INT64_C(0))) || ((((*(yR109 *)rt_nil_check(F.v6914))).f_variant == F.v6932)))) {
if ((F.v6912 == ((void *)0))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3048))).f_line, y_str("too few components in this record value", 39));
}
yr2839_Expr(F.v6912, ((*(yR109 *)rt_nil_check(F.v6914))).f_rep, &F.v6916, &F.v6922);
yr2431_CheckType(((*(yR99 *)rt_nil_check(F.v6912))).f_line, ((*(yR109 *)rt_nil_check(F.v6914))).f_rep, F.v6922);
if ((F.v6914 == ((*(yR104 *)rt_nil_check(F.p3047))).f_selector)) {
yr2691_Manifest(F.v6912, &F.v6930, &F.v6935);
if ((!F.v6930)) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.v6912))).f_line, y_str("the case-selection value is a manifest constant", 47));
}
F.v6932 = yr3055_VariantOf(F.p3047, F.v6935, ((*(yR99 *)rt_nil_check(F.v6912))).f_line);
}
yr1020_SB();
yr1038_ST(F.v6918);
if ((!F.v6939)) {
yr1031_SA(y_str(", ", 2));
}
F.v6939 = 0;
yr1031_SA(y_str(".f_", 3));
yr1038_ST(((*(yR109 *)rt_nil_check(F.v6914))).f_name);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(yr2772_Convert(F.v6916, ((*(yR109 *)rt_nil_check(F.v6914))).f_rep, F.v6922));
F.v6918 = yr1050_SE();
F.v6912 = ((*(yR99 *)rt_nil_check(F.v6912))).f_next;
}
F.v6914 = ((*(yR109 *)rt_nil_check(F.v6914))).f_next;
}
if ((!(F.v6912 == ((void *)0)))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3048))).f_line, y_str("too many components in this record value", 40));
}
yr1020_SB();
yr1038_ST(F.v6918);
yr1031_SA(y_str(" })", 3));
F.p3049 = yr1050_SE();
(*F.p3049_o) = F.p3049;
(*F.p3050_o) = F.p3050;
return;
}
if ((((*(yR104 *)rt_nil_check(F.p3047))).f_kind == v816)) {
F.v6924 = yr1903_Count(F.v6912);
F.v6918 = yr1194_Fresh(y_str("da", 2));
if ((F.v6924 == INT64_C(1))) {
yr2839_Expr(F.v6912, ((*(yR104 *)rt_nil_check(F.p3047))).f_elem, &F.v6916, &F.v6922);
yr2431_CheckType(((*(yR99 *)rt_nil_check(F.v6912))).f_line, ((*(yR104 *)rt_nil_check(F.p3047))).f_elem, F.v6922);
F.v6920 = yr1194_Fresh(y_str("dv", 2));
yr1020_SB();
yr1031_SA(y_str("({ ", 3));
yr1038_ST(yr2398_CType(((*(yR104 *)rt_nil_check(F.p3047))).f_elem));
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v6920);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(yr2772_Convert(F.v6916, ((*(yR104 *)rt_nil_check(F.p3047))).f_elem, F.v6922));
yr1031_SA(y_str("; y_fill(", 9));
yr1038_ST(yr2404_DescOf(F.p3047));
yr1031_SA(y_str(", &", 3));
yr1038_ST(F.v6920);
yr1031_SA(y_str("); })", 5));
F.p3049 = yr1050_SE();
(*F.p3049_o) = F.p3049;
(*F.p3050_o) = F.p3050;
return;
}
yr1020_SB();
yr1031_SA(y_str("({ yarr ", 8));
yr1038_ST(F.v6918);
yr1031_SA(y_str("; y_init(", 9));
yr1038_ST(yr2404_DescOf(F.p3047));
yr1031_SA(y_str(", &", 3));
yr1038_ST(F.v6918);
yr1031_SA(y_str("); if (y_count(", 15));
yr1038_ST(F.v6918);
yr1031_SA(y_str(", ", 2));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p3047))).f_nidx);
yr1031_SA(y_str(") != ", 5));
yr1044_SI(F.v6924);
yr1031_SA(y_str(") rt_raise_msg(RT_X_RANGE, ", 27));
yr1025_SC(34);
yr1031_SA(y_str("wrong number of components", 26));
yr1025_SC(34);
yr1031_SA(y_str(");", 2));
F.p3049 = yr1050_SE();
F.v6928 = INT64_C(0);
while ((!(F.v6912 == ((void *)0)))) {
yr2839_Expr(F.v6912, ((*(yR104 *)rt_nil_check(F.p3047))).f_elem, &F.v6916, &F.v6922);
yr2431_CheckType(((*(yR99 *)rt_nil_check(F.v6912))).f_line, ((*(yR104 *)rt_nil_check(F.p3047))).f_elem, F.v6922);
yr1020_SB();
yr1038_ST(F.p3049);
if (yr2373_Deep(((*(yR104 *)rt_nil_check(F.p3047))).f_elem)) {
yr1031_SA(y_str(" { ", 3));
yr1038_ST(yr2398_CType(((*(yR104 *)rt_nil_check(F.p3047))).f_elem));
yr1031_SA(y_str(" dv = ", 6));
yr1038_ST(F.v6916);
yr1031_SA(y_str("; y_copy(", 9));
yr1038_ST(yr2404_DescOf(((*(yR104 *)rt_nil_check(F.p3047))).f_elem));
yr1031_SA(y_str(", &((", 5));
yr1038_ST(yr2398_CType(((*(yR104 *)rt_nil_check(F.p3047))).f_elem));
yr1031_SA(y_str(" *)", 3));
yr1038_ST(F.v6918);
yr1031_SA(y_str(".p)[", 4));
yr1044_SI(F.v6928);
yr1031_SA(y_str("], &dv); }", 10));
} else {
yr1031_SA(y_str(" ((", 3));
yr1038_ST(yr2398_CType(((*(yR104 *)rt_nil_check(F.p3047))).f_elem));
yr1031_SA(y_str(" *)", 3));
yr1038_ST(F.v6918);
yr1031_SA(y_str(".p)[", 4));
yr1044_SI(F.v6928);
yr1031_SA(y_str("] = ", 4));
yr1038_ST(yr2772_Convert(F.v6916, ((*(yR104 *)rt_nil_check(F.p3047))).f_elem, F.v6922));
yr1031_SA(y_str(";", 1));
}
F.p3049 = yr1050_SE();
F.v6928 = rt_range(rt_add(F.v6928, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6912 = ((*(yR99 *)rt_nil_check(F.v6912))).f_next;
}
yr1020_SB();
yr1038_ST(F.p3049);
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v6918);
yr1031_SA(y_str("; })", 4));
F.p3049 = yr1050_SE();
(*F.p3049_o) = F.p3049;
(*F.p3050_o) = F.p3050;
return;
}
if ((((*(yR104 *)rt_nil_check(F.p3047))).f_kind == v828)) {
yr1020_SB();
yr1031_SA(y_str("y_set_new(", 10));
yr1038_ST(yr2479_LoText(((*(yR104 *)rt_nil_check(F.p3047))).f_elem));
yr1031_SA(y_str(", ", 2));
yr1038_ST(yr2485_HiText(((*(yR104 *)rt_nil_check(F.p3047))).f_elem));
yr1031_SA(y_str(")", 1));
F.p3049 = yr1050_SE();
while ((!(F.v6912 == ((void *)0)))) {
yr2839_Expr(F.v6912, ((*(yR104 *)rt_nil_check(F.p3047))).f_elem, &F.v6916, &F.v6922);
yr2431_CheckType(((*(yR99 *)rt_nil_check(F.v6912))).f_line, ((*(yR104 *)rt_nil_check(F.p3047))).f_elem, F.v6922);
F.p3049 = yr2889_Call2(y_str("y_set_add", 9), F.p3049, F.v6916);
F.v6912 = ((*(yR99 *)rt_nil_check(F.v6912))).f_next;
}
(*F.p3049_o) = F.p3049;
(*F.p3050_o) = F.p3050;
return;
}
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3048))).f_line, ((*(yR104 *)rt_nil_check(F.p3047))).f_tname, y_str(" has no denotations of values", 29));
(*F.p3049_o) = F.p3049;
(*F.p3050_o) = F.p3050;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3055_VariantOf(void * a_p3056, rt_int a_p3057, rt_int a_p3058) {
struct yf3059 F;
memset((void *)&F, 0, sizeof F);
F.p3056 = a_p3056;
F.p3057 = a_p3057;
F.p3058 = a_p3058;
F.v7001 = ((*(yR104 *)rt_nil_check(F.p3056))).f_fields;
while ((!(F.v7001 == ((void *)0)))) {
if ((!(((*(yR109 *)rt_nil_check(F.v7001))).f_variant == INT64_C(0)))) {
F.v7003 = ((*(yR109 *)rt_nil_check(F.v7001))).f_labels;
while ((!(F.v7003 == ((void *)0)))) {
yr2691_Manifest(F.v7003, &F.v7005, &F.v7007);
if ((F.v7005 && ((F.v7007 == F.p3057)))) {
{ rt_int rv7009 = ((*(yR109 *)rt_nil_check(F.v7001))).f_variant;
return rv7009; }
}
F.v7003 = ((*(yR99 *)rt_nil_check(F.v7003))).f_next;
}
}
F.v7001 = ((*(yR109 *)rt_nil_check(F.v7001))).f_next;
}
{ rt_int rv7011 = INT64_C(-1);
return rv7011; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3063_Emit2(yarr a_p3065, rt_int a_p3066) {
struct yf3067 F;
memset((void *)&F, 0, sizeof F);
F.p3065 = a_p3065;
F.p3066 = a_p3066;
yr1020_SB();
yr1031_SA(F.p3065);
yr1038_ST(F.p3066);
F.v7016 = yr1050_SE();
yr1126_Emit(F.v7016);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3071_Emit3(yarr a_p3073, rt_int a_p3074, yarr a_p3076) {
struct yf3077 F;
memset((void *)&F, 0, sizeof F);
F.p3073 = a_p3073;
F.p3074 = a_p3074;
F.p3076 = a_p3076;
yr1020_SB();
yr1031_SA(F.p3073);
yr1038_ST(F.p3074);
yr1031_SA(F.p3076);
F.v7022 = yr1050_SE();
yr1126_Emit(F.v7022);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3081_PopTo(rt_int a_p3082) {
struct yf3083 F;
memset((void *)&F, 0, sizeof F);
F.p3082 = a_p3082;
if ((v1520 > F.p3082)) {
yr3071_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v1518).p)[y_ix1(v1518, rt_add(F.p3082, INT64_C(1)))], y_str(".prev;", 6));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3087_LeaveBlock(void) {
struct yf3088 F;
memset((void *)&F, 0, sizeof F);
if ((v1548 > INT64_C(0))) {
if ((!(((rt_int *)(v1535).p)[y_ix1(v1535, v1548)] == INT64_C(0)))) {
yr3071_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v1535).p)[y_ix1(v1535, v1548)], y_str(".prev;", 6));
}
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3092_RaiseCode(rt_int a_p3093) {
struct yf3094 F;
memset((void *)&F, 0, sizeof F);
F.p3093 = a_p3093;
yr1020_SB();
yr1031_SA(y_str("rt_raise(rt_exc(", 16));
yr1025_SC(34);
yr1038_ST(F.p3093);
yr1025_SC(34);
yr1031_SA(y_str("));", 3));
{ rt_int rv7040 = yr1050_SE();
return rv7040; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3098_BlockStatements(void * a_p3099) {
struct yf3100 F;
memset((void *)&F, 0, sizeof F);
F.p3099 = a_p3099;
F.v7056 = ((*(yR99 *)rt_nil_check(F.p3099))).f_a;
F.v7058 = INT64_C(0);
while ((!(F.v7056 == ((void *)0)))) {
if ((((((*(yR99 *)rt_nil_check(F.v7056))).f_kind == v639)) && ((F.v7058 == INT64_C(0))))) {
F.v7058 = yr1194_Fresh(y_str("xs", 2));
yr3071_Emit3(y_str("rt_frame *", 10), F.v7058, y_str(" = rt_xtop;", 11));
}
F.v7056 = ((*(yR99 *)rt_nil_check(F.v7056))).f_next;
}
if ((((*(yR99 *)rt_nil_check(F.p3099))).f_b == ((void *)0))) {
v1548 = rt_range(rt_add(v1548, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1535).p)[y_ix1(v1535, v1548)] = INT64_C(0);
((rt_int *)(v1546).p)[y_ix1(v1546, v1548)] = F.v7058;
yr3151_Statements(((*(yR99 *)rt_nil_check(F.p3099))).f_c);
v1548 = rt_range(rt_sub(v1548, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr3219_CheckLabels(((*(yR99 *)rt_nil_check(F.p3099))).f_a);
return;
}
v1624 = 1;
F.v7044 = yr1194_Fresh(y_str("xf", 2));
yr3071_Emit3(y_str("{ rt_frame ", 11), F.v7044, y_str(";", 1));
yr3071_Emit3(y_str("if (RT_TRY(", 11), F.v7044, y_str(")) {", 4));
v1520 = rt_range(rt_add(v1520, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1518).p)[y_ix1(v1518, v1520)] = F.v7044;
v1548 = rt_range(rt_add(v1548, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1535).p)[y_ix1(v1535, v1548)] = F.v7044;
((rt_int *)(v1546).p)[y_ix1(v1546, v1548)] = F.v7058;
yr3151_Statements(((*(yR99 *)rt_nil_check(F.p3099))).f_c);
v1548 = rt_range(rt_sub(v1548, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1520 = rt_range(rt_sub(v1520, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr3219_CheckLabels(((*(yR99 *)rt_nil_check(F.p3099))).f_a);
yr3071_Emit3(y_str("RT_POP(", 7), F.v7044, y_str(");", 2));
yr1132_EmitS(y_str("} else {", 8));
yr3071_Emit3(y_str("RT_POP(", 7), F.v7044, y_str(");", 2));
F.v7046 = yr1194_Fresh(y_str("xc", 2));
yr3071_Emit3(y_str("int ", 4), F.v7046, y_str(" = rt_xcur;", 11));
v1548 = rt_range(rt_add(v1548, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1535).p)[y_ix1(v1535, v1548)] = INT64_C(0);
((rt_int *)(v1546).p)[y_ix1(v1546, v1548)] = INT64_C(0);
v1562 = rt_range(rt_add(v1562, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1560).p)[y_ix1(v1560, v1562)] = F.v7046;
F.v7054 = 1;
F.v7050 = ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3099))).f_b))).f_a;
while ((!(F.v7050 == ((void *)0)))) {
yr1020_SB();
if (F.v7054) {
yr1031_SA(y_str("if (", 4));
} else {
yr1031_SA(y_str("} else if (", 11));
}
F.v7054 = 0;
F.v7052 = ((*(yR99 *)rt_nil_check(F.v7050))).f_a;
while ((!(F.v7052 == ((void *)0)))) {
yr1038_ST(F.v7046);
yr1031_SA(y_str(" == rt_exc(", 11));
yr1025_SC(34);
yr1038_ST(((*(yR99 *)rt_nil_check(F.v7052))).f_name);
yr1025_SC(34);
yr1031_SA(y_str(")", 1));
if ((!(((*(yR99 *)rt_nil_check(F.v7052))).f_next == ((void *)0)))) {
yr1031_SA(y_str(" || ", 4));
}
F.v7052 = ((*(yR99 *)rt_nil_check(F.v7052))).f_next;
}
yr1031_SA(y_str(") {", 3));
F.v7048 = yr1050_SE();
yr1126_Emit(F.v7048);
yr3151_Statements(((*(yR99 *)rt_nil_check(F.v7050))).f_b);
F.v7050 = ((*(yR99 *)rt_nil_check(F.v7050))).f_next;
}
if ((!F.v7054)) {
yr1132_EmitS(y_str("} else {", 8));
}
if ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3099))).f_b))).f_flag == INT64_C(1))) {
yr3151_Statements(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3099))).f_b))).f_b);
} else {
yr3071_Emit3(y_str("rt_raise(", 9), F.v7046, y_str(");", 2));
}
if ((!F.v7054)) {
yr1132_EmitS(y_str("}", 1));
}
v1562 = rt_range(rt_sub(v1562, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1548 = rt_range(rt_sub(v1548, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1132_EmitS(y_str("}}", 2));
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3104_SameDesig(void * a_p3105, void * a_p3106) {
struct yf3107 F;
memset((void *)&F, 0, sizeof F);
F.p3105 = a_p3105;
F.p3106 = a_p3106;
if ((((*(yR99 *)rt_nil_check(F.p3105))).f_kind == v795)) {
{ rt_int rv7132 = yr3104_SameDesig(((*(yR99 *)rt_nil_check(F.p3105))).f_a, F.p3106);
return rv7132; }
}
if ((((*(yR99 *)rt_nil_check(F.p3106))).f_kind == v795)) {
{ rt_int rv7133 = yr3104_SameDesig(F.p3105, ((*(yR99 *)rt_nil_check(F.p3106))).f_a);
return rv7133; }
}
if ((!(((*(yR99 *)rt_nil_check(F.p3105))).f_kind == ((*(yR99 *)rt_nil_check(F.p3106))).f_kind))) {
{ rt_int rv7135 = 0;
return rv7135; }
}
if ((((*(yR99 *)rt_nil_check(F.p3105))).f_kind == v771)) {
{ rt_int rv7136 = ((((((*(yR99 *)rt_nil_check(F.p3105))).f_name == ((*(yR99 *)rt_nil_check(F.p3106))).f_name)) && ((((*(yR99 *)rt_nil_check(F.p3105))).f_d == ((void *)0)))) && ((((*(yR99 *)rt_nil_check(F.p3106))).f_d == ((void *)0))));
return rv7136; }
}
if ((((*(yR99 *)rt_nil_check(F.p3105))).f_kind == v777)) {
{ rt_int rv7137 = (((((*(yR99 *)rt_nil_check(F.p3105))).f_name == ((*(yR99 *)rt_nil_check(F.p3106))).f_name)) && yr3104_SameDesig(((*(yR99 *)rt_nil_check(F.p3105))).f_a, ((*(yR99 *)rt_nil_check(F.p3106))).f_a));
return rv7137; }
}
if ((((*(yR99 *)rt_nil_check(F.p3105))).f_kind == v783)) {
{ rt_int rv7138 = yr3104_SameDesig(((*(yR99 *)rt_nil_check(F.p3105))).f_a, ((*(yR99 *)rt_nil_check(F.p3106))).f_a);
return rv7138; }
}
if ((((*(yR99 *)rt_nil_check(F.p3105))).f_kind == v780)) {
if ((!yr3104_SameDesig(((*(yR99 *)rt_nil_check(F.p3105))).f_a, ((*(yR99 *)rt_nil_check(F.p3106))).f_a))) {
{ rt_int rv7140 = 0;
return rv7140; }
}
F.v7121 = ((*(yR99 *)rt_nil_check(F.p3105))).f_b;
F.v7123 = ((*(yR99 *)rt_nil_check(F.p3106))).f_b;
while ((((!(F.v7121 == ((void *)0)))) && ((!(F.v7123 == ((void *)0)))))) {
yr2691_Manifest(F.v7121, &F.v7125, &F.v7129);
yr2691_Manifest(F.v7123, &F.v7127, &F.v7131);
if ((F.v7125 && F.v7127)) {
if ((!(F.v7129 == F.v7131))) {
{ rt_int rv7142 = 0;
return rv7142; }
}
} else if ((!yr3104_SameDesig(F.v7121, F.v7123))) {
{ rt_int rv7144 = 0;
return rv7144; }
}
F.v7121 = ((*(yR99 *)rt_nil_check(F.v7121))).f_next;
F.v7123 = ((*(yR99 *)rt_nil_check(F.v7123))).f_next;
}
{ rt_int rv7145 = (((F.v7121 == ((void *)0))) && ((F.v7123 == ((void *)0))));
return rv7145; }
}
{ rt_int rv7147 = 0;
return rv7147; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3111_CheckVariantSelected(void * a_p3112, void * a_p3113, void * a_p3114) {
struct yf3115 F;
memset((void *)&F, 0, sizeof F);
F.p3112 = a_p3112;
F.p3113 = a_p3113;
F.p3114 = a_p3114;
F.v7153 = v1610;
while ((F.v7153 > INT64_C(0))) {
F.v7155 = ((void * *)(v1606).p)[y_ix1(v1606, F.v7153)];
while ((((*(yR99 *)rt_nil_check(F.v7155))).f_kind == v795)) {
F.v7155 = ((*(yR99 *)rt_nil_check(F.v7155))).f_a;
}
if (((((((*(yR99 *)rt_nil_check(F.v7155))).f_kind == v777)) && ((((*(yR99 *)rt_nil_check(F.v7155))).f_name == ((*(yR109 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p3113))).f_selector))).f_name))) && yr3104_SameDesig(((*(yR99 *)rt_nil_check(F.v7155))).f_a, ((*(yR99 *)rt_nil_check(F.p3112))).f_a))) {
F.v7157 = ((void * *)(v1608).p)[y_ix1(v1608, F.v7153)];
if ((F.v7157 == ((void *)0))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3112))).f_line, ((*(yR99 *)rt_nil_check(F.p3112))).f_name, y_str(" is a component of a variant: the ELSE of a SELECT does not say which variant the record has (VIII.B)", 101));
}
while ((!(F.v7157 == ((void *)0)))) {
F.v7161 = yr3163_Label(F.v7157, ((*(yR109 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p3113))).f_selector))).f_rep);
F.v7167 = 0;
F.v7159 = ((*(yR109 *)rt_nil_check(F.p3114))).f_labels;
while ((!(F.v7159 == ((void *)0)))) {
yr2691_Manifest(F.v7159, &F.v7165, &F.v7163);
if ((F.v7165 && ((F.v7163 == F.v7161)))) {
F.v7167 = 1;
}
F.v7159 = ((*(yR99 *)rt_nil_check(F.v7159))).f_next;
}
if ((!F.v7167)) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3112))).f_line, ((*(yR99 *)rt_nil_check(F.p3112))).f_name, y_str(" is not a component of the variant this CASE selects (VIII.B)", 61));
}
F.v7157 = ((*(yR99 *)rt_nil_check(F.v7157))).f_next;
}
return;
}
F.v7153 = rt_range(rt_sub(F.v7153, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3112))).f_line, ((*(yR99 *)rt_nil_check(F.p3112))).f_name, y_str(" is a component of a variant: it is used inside a SELECT on the case-selection component (VIII.B)", 97));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3119_CheckCaseLabels(void * a_p3120, void * a_p3121) {
struct yf3122 F;
memset((void *)&F, 0, sizeof F);
F.p3120 = a_p3120;
F.p3121 = a_p3121;
F.v7180 = ((*(yR99 *)rt_nil_check(F.p3120))).f_b;
F.v7182 = ((*(yR99 *)rt_nil_check(F.p3120))).f_b;
F.v7184 = INT64_C(0);
F.v7187 = INT64_C(0);
while ((!(F.v7180 == ((void *)0)))) {
F.v7182 = ((*(yR99 *)rt_nil_check(F.v7180))).f_a;
while ((!(F.v7182 == ((void *)0)))) {
F.v7187 = yr3163_Label(F.v7182, F.p3121);
F.lo7192 = INT64_C(1);
F.hi7193 = F.v7184;
{ rt_int hi7197 = F.hi7193;
for (rt_int i7196 = F.lo7192; i7196 <= hi7197; i7196++) { F.c_7195 = i7196;
if ((((rt_int *)(v1622).p)[y_ix1(v1622, F.c_7195)] == F.v7187)) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.v7182))).f_line, y_str("a CASE label appears twice in this SELECT (IX.B.1)", 50));
}
if (i7196 == hi7197) break;
}}
if ((F.v7184 < INT64_C(4096))) {
F.v7184 = rt_range(rt_add(F.v7184, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1622).p)[y_ix1(v1622, F.v7184)] = F.v7187;
}
F.v7182 = ((*(yR99 *)rt_nil_check(F.v7182))).f_next;
}
F.v7180 = ((*(yR99 *)rt_nil_check(F.v7180))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3126_Falls(void * a_p3127) {
struct yf3128 F;
memset((void *)&F, 0, sizeof F);
F.p3127 = a_p3127;
F.v7205 = F.p3127;
F.v7207 = 1;
while ((!(F.v7205 == ((void *)0)))) {
if ((!(((*(yR99 *)rt_nil_check(F.v7205))).f_text == INT64_C(0)))) {
F.v7207 = 1;
}
if (F.v7207) {
F.v7207 = yr3138_Completes(F.v7205);
}
F.v7205 = ((*(yR99 *)rt_nil_check(F.v7205))).f_next;
}
{ rt_int rv7211 = F.v7207;
return rv7211; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3132_BlockFalls(void * a_p3133) {
struct yf3134 F;
memset((void *)&F, 0, sizeof F);
F.p3133 = a_p3133;
if (yr3126_Falls(((*(yR99 *)rt_nil_check(F.p3133))).f_c)) {
{ rt_int rv7217 = 1;
return rv7217; }
}
if ((((*(yR99 *)rt_nil_check(F.p3133))).f_b == ((void *)0))) {
{ rt_int rv7219 = 0;
return rv7219; }
}
F.v7215 = ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3133))).f_b))).f_a;
while ((!(F.v7215 == ((void *)0)))) {
if (yr3126_Falls(((*(yR99 *)rt_nil_check(F.v7215))).f_b)) {
{ rt_int rv7221 = 1;
return rv7221; }
}
F.v7215 = ((*(yR99 *)rt_nil_check(F.v7215))).f_next;
}
if ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3133))).f_b))).f_flag == INT64_C(1))) {
{ rt_int rv7223 = yr3126_Falls(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3133))).f_b))).f_b);
return rv7223; }
}
{ rt_int rv7225 = 0;
return rv7225; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3138_Completes(void * a_p3139) {
struct yf3140 F;
memset((void *)&F, 0, sizeof F);
F.p3139 = a_p3139;
F.v7229 = ((*(yR99 *)rt_nil_check(F.p3139))).f_kind;
if (((((((F.v7229 == v723)) || ((F.v7229 == v726))) || ((F.v7229 == v729))) || ((F.v7229 == v717))) || ((F.v7229 == v720)))) {
{ rt_int rv7237 = 0;
return rv7237; }
}
if ((F.v7229 == v732)) {
if ((!(((*(yR99 *)rt_nil_check(F.p3139))).f_flag == INT64_C(1)))) {
{ rt_int rv7240 = 1;
return rv7240; }
}
F.v7231 = ((*(yR99 *)rt_nil_check(F.p3139))).f_a;
while ((!(F.v7231 == ((void *)0)))) {
if (yr3126_Falls(((*(yR99 *)rt_nil_check(F.v7231))).f_b)) {
{ rt_int rv7242 = 1;
return rv7242; }
}
F.v7231 = ((*(yR99 *)rt_nil_check(F.v7231))).f_next;
}
{ rt_int rv7243 = yr3126_Falls(((*(yR99 *)rt_nil_check(F.p3139))).f_b);
return rv7243; }
}
if ((F.v7229 == v735)) {
if ((!(((*(yR99 *)rt_nil_check(F.p3139))).f_flag == INT64_C(1)))) {
{ rt_int rv7246 = 1;
return rv7246; }
}
F.v7231 = ((*(yR99 *)rt_nil_check(F.p3139))).f_b;
while ((!(F.v7231 == ((void *)0)))) {
if (yr3126_Falls(((*(yR99 *)rt_nil_check(F.v7231))).f_b)) {
{ rt_int rv7248 = 1;
return rv7248; }
}
F.v7231 = ((*(yR99 *)rt_nil_check(F.v7231))).f_next;
}
{ rt_int rv7249 = yr3126_Falls(((*(yR99 *)rt_nil_check(F.p3139))).f_c);
return rv7249; }
}
if ((F.v7229 == v738)) {
yr2691_Manifest(((*(yR99 *)rt_nil_check(F.p3139))).f_a, &F.v7233, &F.v7235);
{ rt_int rv7251 = (!((F.v7233 && ((F.v7235 == INT64_C(1))))));
return rv7251; }
}
if ((F.v7229 == v744)) {
{ rt_int rv7252 = yr3144_Exits(((*(yR99 *)rt_nil_check(F.p3139))).f_b, ((*(yR99 *)rt_nil_check(F.p3139))).f_name);
return rv7252; }
}
if ((F.v7229 == v747)) {
{ rt_int rv7253 = yr3132_BlockFalls(((*(yR99 *)rt_nil_check(F.p3139))).f_a);
return rv7253; }
}
{ rt_int rv7255 = 1;
return rv7255; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3144_Exits(void * a_p3145, rt_int a_p3146) {
struct yf3147 F;
memset((void *)&F, 0, sizeof F);
F.p3145 = a_p3145;
F.p3146 = a_p3146;
F.v7260 = F.p3145;
while ((!(F.v7260 == ((void *)0)))) {
if ((((((*(yR99 *)rt_nil_check(F.v7260))).f_kind == v720)) && ((((*(yR99 *)rt_nil_check(F.v7260))).f_name == F.p3146)))) {
{ rt_int rv7264 = 1;
return rv7264; }
}
if ((((*(yR99 *)rt_nil_check(F.v7260))).f_kind == v732)) {
F.v7262 = ((*(yR99 *)rt_nil_check(F.v7260))).f_a;
while ((!(F.v7262 == ((void *)0)))) {
if (yr3144_Exits(((*(yR99 *)rt_nil_check(F.v7262))).f_b, F.p3146)) {
{ rt_int rv7266 = 1;
return rv7266; }
}
F.v7262 = ((*(yR99 *)rt_nil_check(F.v7262))).f_next;
}
if (yr3144_Exits(((*(yR99 *)rt_nil_check(F.v7260))).f_b, F.p3146)) {
{ rt_int rv7268 = 1;
return rv7268; }
}
} else if ((((*(yR99 *)rt_nil_check(F.v7260))).f_kind == v735)) {
F.v7262 = ((*(yR99 *)rt_nil_check(F.v7260))).f_b;
while ((!(F.v7262 == ((void *)0)))) {
if (yr3144_Exits(((*(yR99 *)rt_nil_check(F.v7262))).f_b, F.p3146)) {
{ rt_int rv7270 = 1;
return rv7270; }
}
F.v7262 = ((*(yR99 *)rt_nil_check(F.v7262))).f_next;
}
if (yr3144_Exits(((*(yR99 *)rt_nil_check(F.v7260))).f_c, F.p3146)) {
{ rt_int rv7272 = 1;
return rv7272; }
}
} else if (((((((*(yR99 *)rt_nil_check(F.v7260))).f_kind == v738)) || ((((*(yR99 *)rt_nil_check(F.v7260))).f_kind == v741))) || ((((*(yR99 *)rt_nil_check(F.v7260))).f_kind == v744)))) {
if (yr3144_Exits(((*(yR99 *)rt_nil_check(F.v7260))).f_b, F.p3146)) {
{ rt_int rv7274 = 1;
return rv7274; }
}
} else if ((((*(yR99 *)rt_nil_check(F.v7260))).f_kind == v747)) {
if (yr3144_Exits(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7260))).f_a))).f_c, F.p3146)) {
{ rt_int rv7276 = 1;
return rv7276; }
}
if ((!(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7260))).f_a))).f_b == ((void *)0)))) {
F.v7262 = ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7260))).f_a))).f_b))).f_a;
while ((!(F.v7262 == ((void *)0)))) {
if (yr3144_Exits(((*(yR99 *)rt_nil_check(F.v7262))).f_b, F.p3146)) {
{ rt_int rv7278 = 1;
return rv7278; }
}
F.v7262 = ((*(yR99 *)rt_nil_check(F.v7262))).f_next;
}
if (yr3144_Exits(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7260))).f_a))).f_b))).f_b, F.p3146)) {
{ rt_int rv7280 = 1;
return rv7280; }
}
}
}
F.v7260 = ((*(yR99 *)rt_nil_check(F.v7260))).f_next;
}
{ rt_int rv7282 = 0;
return rv7282; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3151_Statements(void * a_p3152) {
struct yf3153 F;
memset((void *)&F, 0, sizeof F);
F.p3152 = a_p3152;
F.v7286 = F.p3152;
while ((!(F.v7286 == ((void *)0)))) {
yr3175_Statement(F.v7286);
F.v7286 = ((*(yR99 *)rt_nil_check(F.v7286))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3157_Cond(void * a_p3158) {
struct yf3159 F;
memset((void *)&F, 0, sizeof F);
F.p3158 = a_p3158;
yr2839_Expr(F.p3158, v1338, &F.v7290, &F.v7292);
yr2431_CheckType(((*(yR99 *)rt_nil_check(F.p3158))).f_line, v1338, F.v7292);
{ rt_int rv7293 = F.v7290;
return rv7293; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3163_Label(void * a_p3164, void * a_p3165) {
struct yf3166 F;
memset((void *)&F, 0, sizeof F);
F.p3164 = a_p3164;
F.p3165 = a_p3165;
if (((((((*(yR99 *)rt_nil_check(F.p3164))).f_kind == v771)) && ((((*(yR99 *)rt_nil_check(F.p3164))).f_d == ((void *)0)))) && ((((*(yR104 *)rt_nil_check(F.p3165))).f_kind == v810)))) {
F.v7302 = yr2290_FindLit(((*(yR99 *)rt_nil_check(F.p3164))).f_name, F.p3165);
if ((!(F.v7302 == ((void *)0)))) {
{ rt_int rv7307 = ((*(yR119 *)rt_nil_check(yr2330_Real(F.v7302)))).f_mval;
return rv7307; }
}
}
yr2839_Expr(F.p3164, F.p3165, &F.v7306, &F.v7304);
yr2431_CheckType(((*(yR99 *)rt_nil_check(F.p3164))).f_line, F.p3165, F.v7304);
yr2691_Manifest(F.p3164, &F.v7298, &F.v7300);
if ((!F.v7298)) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3164))).f_line, y_str("a CASE label is a manifest constant (IX.B.1)", 44));
}
{ rt_int rv7309 = F.v7300;
return rv7309; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3170_CopyOut(void) {
struct yf3171 F;
memset((void *)&F, 0, sizeof F);
if ((v1595 == ((void *)0))) {
return;
}
F.v7312 = ((*(yR119 *)rt_nil_check(v1595))).f_params;
while ((!(F.v7312 == ((void *)0)))) {
if ((((*(yR114 *)rt_nil_check(F.v7312))).f_cls == v894)) {
yr1020_SB();
yr1031_SA(y_str("(*F.", 4));
yr1038_ST(((*(yR114 *)rt_nil_check(F.v7312))).f_cname);
yr1031_SA(y_str("_o)", 3));
F.v7314 = yr1050_SE();
yr3026_Assign(F.v7314, ((*(yR114 *)rt_nil_check(F.v7312))).f_rep, yr2304_Path(v1273, ((*(yR114 *)rt_nil_check(F.v7312))).f_cname), ((*(yR114 *)rt_nil_check(F.v7312))).f_rep, INT64_C(0));
}
F.v7312 = ((*(yR114 *)rt_nil_check(F.v7312))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3175_Statement(void * a_p3176) {
struct yf3177 F;
memset((void *)&F, 0, sizeof F);
F.p3176 = a_p3176;
F.v7321 = ((*(yR99 *)rt_nil_check(F.p3176))).f_kind;
v994 = ((*(yR99 *)rt_nil_check(F.p3176))).f_line;
if ((!(((*(yR99 *)rt_nil_check(F.p3176))).f_text == INT64_C(0)))) {
yr3207_PlaceLabel(F.p3176);
}
if ((F.v7321 == v708)) {
yr2812_LValue(((*(yR99 *)rt_nil_check(F.p3176))).f_a, &F.v7323, &F.v7335);
yr2806_CheckPure(((*(yR99 *)rt_nil_check(F.p3176))).f_a);
yr3242_NoteWrite(((*(yR99 *)rt_nil_check(F.p3176))).f_a);
if ((((((*(yR104 *)rt_nil_check(F.v7335))).f_kind == v831)) || yr2386_HoldsSignal(F.v7335))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3176))).f_line, y_str("assignment is not defined for signals (VI.A.1.d)", 48));
}
if (yr2392_NonAssignable(F.v7335)) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3176))).f_line, y_str("assignment is not defined for files and semaphores, nor what holds them (VII.B)", 79));
}
yr2839_Expr(((*(yR99 *)rt_nil_check(F.p3176))).f_b, F.v7335, &F.v7325, &F.v7337);
F.v7327 = yr3016_UserAssign(F.v7323, F.v7335, F.v7325, F.v7337, ((*(yR99 *)rt_nil_check(F.p3176))).f_line);
if ((!(F.v7327 == INT64_C(0)))) {
yr1126_Emit(F.v7327);
} else {
if ((((*(yR104 *)rt_nil_check(F.v7335))).f_opaque && (((rt_mod(((*(yR104 *)rt_nil_check(F.v7335))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3176))).f_line, ((*(yR104 *)rt_nil_check(F.v7335))).f_tname, y_str(" is opaque here: := is not exported (X.B.3)", 43));
}
yr2790_Store(F.v7323, F.v7335, F.v7325, F.v7337, ((*(yR99 *)rt_nil_check(F.p3176))).f_line);
}
} else if ((F.v7321 == v711)) {
F.v7351 = yr2232_Find(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3176))).f_a))).f_name);
if ((!(F.v7351 == ((void *)0)))) {
F.v7351 = yr2330_Real(F.v7351);
}
if ((((!(F.v7351 == ((void *)0)))) && ((((*(yR119 *)rt_nil_check(F.v7351))).f_kind == v879)))) {
yr3513_Activate(((*(yR99 *)rt_nil_check(F.p3176))).f_a, F.v7351);
} else {
yr3036_CallExpr(((*(yR99 *)rt_nil_check(F.p3176))).f_a, ((void *)0), 1, &F.v7323, &F.v7335);
yr3063_Emit2(y_str("", 0), F.v7323);
yr1020_SB();
yr1038_ST(F.v7323);
yr1031_SA(y_str(";", 1));
F.v7327 = yr1050_SE();
((*(yR129 *)rt_nil_check((v990).f_tail))).f_t = F.v7327;
}
} else if ((F.v7321 == v732)) {
F.v7343 = 1;
F.v7339 = ((*(yR99 *)rt_nil_check(F.p3176))).f_a;
while ((!(F.v7339 == ((void *)0)))) {
F.v7323 = yr3157_Cond(((*(yR99 *)rt_nil_check(F.v7339))).f_a);
if (F.v7343) {
yr3071_Emit3(y_str("if (", 4), F.v7323, y_str(") {", 3));
} else {
yr3071_Emit3(y_str("} else if (", 11), F.v7323, y_str(") {", 3));
}
F.v7343 = 0;
yr3151_Statements(((*(yR99 *)rt_nil_check(F.v7339))).f_b);
F.v7339 = ((*(yR99 *)rt_nil_check(F.v7339))).f_next;
}
if ((((*(yR99 *)rt_nil_check(F.p3176))).f_flag == INT64_C(1))) {
yr1132_EmitS(y_str("} else {", 8));
yr3151_Statements(((*(yR99 *)rt_nil_check(F.p3176))).f_b);
}
yr1132_EmitS(y_str("}", 1));
} else if ((F.v7321 == v738)) {
F.v7323 = yr3157_Cond(((*(yR99 *)rt_nil_check(F.p3176))).f_a);
yr3071_Emit3(y_str("while (", 7), F.v7323, y_str(") {", 3));
yr3151_Statements(((*(yR99 *)rt_nil_check(F.p3176))).f_b);
yr1132_EmitS(y_str("}", 1));
} else if ((F.v7321 == v744)) {
F.v7329 = yr1194_Fresh(y_str("yl_", 3));
v1589 = rt_range(rt_add(v1589, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1574).p)[y_ix1(v1574, v1589)] = ((*(yR99 *)rt_nil_check(F.p3176))).f_name;
((rt_int *)(v1576).p)[y_ix1(v1576, v1589)] = F.v7329;
((rt_int *)(v1587).p)[y_ix1(v1587, v1589)] = v1520;
yr1132_EmitS(y_str("for (;;) {", 10));
yr3151_Statements(((*(yR99 *)rt_nil_check(F.p3176))).f_b);
yr1132_EmitS(y_str("}", 1));
yr3071_Emit3(y_str("", 0), F.v7329, y_str(": ;", 3));
v1589 = rt_range(rt_sub(v1589, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v7321 == v720)) {
F.v7345 = 0;
F.v7347 = v1589;
while ((((F.v7347 > v1592)) && (!F.v7345))) {
if ((((rt_int *)(v1574).p)[y_ix1(v1574, F.v7347)] == ((*(yR99 *)rt_nil_check(F.p3176))).f_name)) {
F.v7345 = 1;
yr3081_PopTo(((rt_int *)(v1587).p)[y_ix1(v1587, F.v7347)]);
yr3071_Emit3(y_str("goto ", 5), ((rt_int *)(v1576).p)[y_ix1(v1576, F.v7347)], y_str(";", 1));
}
F.v7347 = rt_range(rt_sub(F.v7347, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((!F.v7345)) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3176))).f_line, ((*(yR99 *)rt_nil_check(F.p3176))).f_name, y_str(": EXIT names no LOOP around it here (IX.A.5)", 44));
}
} else if ((F.v7321 == v741)) {
yr3181_ForStatement(F.p3176);
} else if ((F.v7321 == v735)) {
yr2839_Expr(((*(yR99 *)rt_nil_check(F.p3176))).f_a, ((void *)0), &F.v7323, &F.v7335);
if ((!yr2349_IsDiscrete(F.v7335))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3176))).f_line, y_str("SELECT on a value that is not integer or scalar", 47));
}
yr3119_CheckCaseLabels(F.p3176, F.v7335);
yr3071_Emit3(y_str("switch (", 8), F.v7323, y_str(") {", 3));
F.v7339 = ((*(yR99 *)rt_nil_check(F.p3176))).f_b;
while ((!(F.v7339 == ((void *)0)))) {
F.v7341 = ((*(yR99 *)rt_nil_check(F.v7339))).f_a;
while ((!(F.v7341 == ((void *)0)))) {
F.v7349 = yr3163_Label(F.v7341, F.v7335);
yr1020_SB();
yr1031_SA(y_str("case ", 5));
yr1044_SI(F.v7349);
yr1031_SA(y_str(":", 1));
F.v7327 = yr1050_SE();
yr1126_Emit(F.v7327);
F.v7341 = ((*(yR99 *)rt_nil_check(F.v7341))).f_next;
}
yr1132_EmitS(y_str("{", 1));
v1610 = rt_range(rt_add(v1610, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1606).p)[y_ix1(v1606, v1610)] = ((*(yR99 *)rt_nil_check(F.p3176))).f_a;
((void * *)(v1608).p)[y_ix1(v1608, v1610)] = ((*(yR99 *)rt_nil_check(F.v7339))).f_a;
yr3151_Statements(((*(yR99 *)rt_nil_check(F.v7339))).f_b);
v1610 = rt_range(rt_sub(v1610, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1132_EmitS(y_str("} break;", 8));
F.v7339 = ((*(yR99 *)rt_nil_check(F.v7339))).f_next;
}
yr1132_EmitS(y_str("default: {", 10));
v1610 = rt_range(rt_add(v1610, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1606).p)[y_ix1(v1606, v1610)] = ((*(yR99 *)rt_nil_check(F.p3176))).f_a;
((void * *)(v1608).p)[y_ix1(v1608, v1610)] = ((void *)0);
if ((((*(yR99 *)rt_nil_check(F.p3176))).f_flag == INT64_C(1))) {
yr3151_Statements(((*(yR99 *)rt_nil_check(F.p3176))).f_c);
}
v1610 = rt_range(rt_sub(v1610, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1132_EmitS(y_str("} break;", 8));
yr1132_EmitS(y_str("}", 1));
} else if ((F.v7321 == v723)) {
yr3195_ReturnStatement(F.p3176);
} else if ((F.v7321 == v729)) {
if ((((*(yR99 *)rt_nil_check(F.p3176))).f_name == INT64_C(0))) {
if ((v1562 == INT64_C(0))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3176))).f_line, y_str("PROPAGATE_EXCEPTION without a name is used in a handler (IX.A.8)", 64));
}
yr3071_Emit3(y_str("rt_raise(", 9), ((rt_int *)(v1560).p)[y_ix1(v1560, v1562)], y_str(");", 2));
} else {
yr3087_LeaveBlock();
yr1126_Emit(yr3092_RaiseCode(((*(yR99 *)rt_nil_check(F.p3176))).f_name));
}
} else if ((F.v7321 == v714)) {
F.v7347 = v1627;
F.v7323 = yr3157_Cond(((*(yR99 *)rt_nil_check(F.p3176))).f_a);
if ((!(v1627 == F.v7347))) {
yr1158_Warn(((*(yR99 *)rt_nil_check(F.p3176))).f_line, yr1055_T(y_str("the expression of this ASSERT calls a procedure: it might have side effects (IX.A.3)", 84)));
}
yr3071_Emit3(y_str("if (!(", 6), F.v7323, y_str(")) {", 4));
yr3087_LeaveBlock();
yr1132_EmitS(y_str("rt_raise(RT_X_ASSERT); }", 24));
} else if ((F.v7321 == v747)) {
yr3201_BeginStatement(F.p3176);
} else if ((F.v7321 == v726)) {
yr3537_TerminateStatement(F.p3176);
} else if ((F.v7321 == v717)) {
yr3213_GotoStatement(F.p3176);
} else {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3176))).f_line, y_str("not a statement", 15));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3181_ForStatement(void * a_p3182) {
struct yf3183 F;
memset((void *)&F, 0, sizeof F);
F.p3182 = a_p3182;
F.v7423 = yr2580_MakeRep(((*(yR99 *)rt_nil_check(F.p3182))).f_a, INT64_C(0), 0);
if ((((!yr2349_IsDiscrete(F.v7423)) || ((((*(yR104 *)rt_nil_check(F.v7423))).f_kind == v807))) || ((((((*(yR104 *)rt_nil_check(F.v7423))).f_kind == v810)) && (!((*(yR104 *)rt_nil_check(F.v7423))).f_ordered))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3182))).f_line, y_str("FOR goes over an ordered scalar or integer representation (IX.B.2)", 66));
}
yr2439_CheckRepresented(F.v7423, ((*(yR99 *)rt_nil_check(F.p3182))).f_line);
yr2209_OpenScope(0);
F.v7431 = yr2202_NewSym(v858, ((*(yR99 *)rt_nil_check(F.p3182))).f_name);
((*(yR119 *)rt_nil_check(F.v7431))).f_rep = F.v7423;
((*(yR119 *)rt_nil_check(F.v7431))).f_level = v1273;
((*(yR119 *)rt_nil_check(F.v7431))).f_cname = yr1194_Fresh(y_str("c_", 2));
yr2317_DeclStorage(yr1055_T(y_str("rt_int", 6)), ((*(yR119 *)rt_nil_check(F.v7431))).f_cname);
yr2297_Define(F.v7431, ((*(yR99 *)rt_nil_check(F.p3182))).f_line);
F.v7425 = yr1194_Fresh(y_str("i", 1));
F.v7427 = yr1194_Fresh(y_str("hi", 2));
yr1020_SB();
yr1031_SA(y_str("{ rt_int ", 9));
yr1038_ST(F.v7427);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(yr2485_HiText(F.v7423));
yr1031_SA(y_str(";", 1));
F.v7429 = yr1050_SE();
yr1126_Emit(F.v7429);
yr1020_SB();
yr1031_SA(y_str("for (rt_int ", 12));
yr1038_ST(F.v7425);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(yr2479_LoText(F.v7423));
yr1031_SA(y_str("; ", 2));
yr1038_ST(F.v7425);
yr1031_SA(y_str(" <= ", 4));
yr1038_ST(F.v7427);
yr1031_SA(y_str("; ", 2));
yr1038_ST(F.v7425);
yr1031_SA(y_str("++) { ", 6));
yr1038_ST(yr2324_SymPath(F.v7431));
yr1031_SA(y_str(" = ", 3));
yr1038_ST(F.v7425);
yr1031_SA(y_str(";", 1));
F.v7429 = yr1050_SE();
yr1126_Emit(F.v7429);
yr3151_Statements(((*(yR99 *)rt_nil_check(F.p3182))).f_b);
yr3071_Emit3(y_str("if (", 4), F.v7425, y_str(" == ", 4));
((*(yR129 *)rt_nil_check((v990).f_tail))).f_t = yr3187_Join(((*(yR129 *)rt_nil_check((v990).f_tail))).f_t, F.v7427, yr1055_T(y_str(") break;", 8)));
yr1132_EmitS(y_str("}}", 2));
yr2221_CloseScope();
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3187_Join(rt_int a_p3188, rt_int a_p3189, rt_int a_p3190) {
struct yf3191 F;
memset((void *)&F, 0, sizeof F);
F.p3188 = a_p3188;
F.p3189 = a_p3189;
F.p3190 = a_p3190;
yr1020_SB();
yr1038_ST(F.p3188);
yr1038_ST(F.p3189);
yr1038_ST(F.p3190);
{ rt_int rv7459 = yr1050_SE();
return rv7459; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3195_ReturnStatement(void * a_p3196) {
struct yf3197 F;
memset((void *)&F, 0, sizeof F);
F.p3196 = a_p3196;
if ((v1595 == ((void *)0))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3196))).f_line, y_str("RETURN outside a routine (IX.A.6)", 33));
}
if ((((*(yR119 *)rt_nil_check(v1595))).f_kind == v879)) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3196))).f_line, y_str("a process ends with TERMINATE_PROCESS (IX.A.7)", 46));
}
F.v7471 = ((*(yR119 *)rt_nil_check(v1595))).f_ret;
if ((((*(yR99 *)rt_nil_check(F.p3196))).f_a == ((void *)0))) {
if ((!(((*(yR104 *)rt_nil_check(F.v7471))).f_kind == v846))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3196))).f_line, y_str("RETURN needs a value here (IX.A.6)", 34));
}
yr3170_CopyOut();
yr3532_LeaveMonitor();
yr3081_PopTo(v1523);
yr1132_EmitS(y_str("return;", 7));
return;
}
if ((((*(yR104 *)rt_nil_check(F.v7471))).f_kind == v846)) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3196))).f_line, y_str("this routine returns no value (IX.A.6)", 38));
}
yr2839_Expr(((*(yR99 *)rt_nil_check(F.p3196))).f_a, F.v7471, &F.v7463, &F.v7469);
yr2431_CheckType(((*(yR99 *)rt_nil_check(F.p3196))).f_line, F.v7471, F.v7469);
F.v7467 = yr1194_Fresh(y_str("rv", 2));
yr1020_SB();
yr1031_SA(y_str("{ ", 2));
yr1038_ST(yr2398_CType(F.v7471));
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v7467);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(yr2772_Convert(F.v7463, F.v7471, F.v7469));
yr1031_SA(y_str(";", 1));
F.v7465 = yr1050_SE();
yr1126_Emit(F.v7465);
yr3170_CopyOut();
yr3532_LeaveMonitor();
yr3081_PopTo(v1523);
yr3071_Emit3(y_str("return ", 7), F.v7467, y_str("; }", 3));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3201_BeginStatement(void * a_p3202) {
struct yf3203 F;
memset((void *)&F, 0, sizeof F);
F.p3202 = a_p3202;
yr1132_EmitS(y_str("{", 1));
yr2209_OpenScope(0);
yr3384_Declarations(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3202))).f_a))).f_a);
yr3098_BlockStatements(((*(yR99 *)rt_nil_check(F.p3202))).f_a);
yr3508_AwaitProcesses();
yr2221_CloseScope();
yr1132_EmitS(y_str("}", 1));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3207_PlaceLabel(void * a_p3208) {
struct yf3209 F;
memset((void *)&F, 0, sizeof F);
F.p3208 = a_p3208;
F.v7492 = yr2238_FindHere(((*(yR99 *)rt_nil_check(F.p3208))).f_text);
if ((((F.v7492 == ((void *)0))) || ((!(((*(yR119 *)rt_nil_check(F.v7492))).f_kind == v882))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3208))).f_line, ((*(yR99 *)rt_nil_check(F.p3208))).f_text, y_str(" labels a statement but is not declared by LABEL in this block (VII.C)", 70));
}
if (((*(yR119 *)rt_nil_check(F.v7492))).f_hasmv) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3208))).f_line, ((*(yR99 *)rt_nil_check(F.p3208))).f_text, y_str(" labels two statements", 22));
}
((*(yR119 *)rt_nil_check(F.v7492))).f_hasmv = 1;
yr3071_Emit3(y_str("", 0), ((*(yR119 *)rt_nil_check(F.v7492))).f_cname, y_str(": ;", 3));
if ((!(((rt_int *)(v1535).p)[y_ix1(v1535, v1548)] == INT64_C(0)))) {
yr3071_Emit3(y_str("rt_xtop = &", 11), ((rt_int *)(v1535).p)[y_ix1(v1535, v1548)], y_str(";", 1));
} else if ((!(((rt_int *)(v1546).p)[y_ix1(v1546, v1548)] == INT64_C(0)))) {
yr3071_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v1546).p)[y_ix1(v1546, v1548)], y_str(";", 1));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3213_GotoStatement(void * a_p3214) {
struct yf3215 F;
memset((void *)&F, 0, sizeof F);
F.p3214 = a_p3214;
F.v7507 = yr2244_Lookup(((*(yR99 *)rt_nil_check(F.p3214))).f_name, ((*(yR99 *)rt_nil_check(F.p3214))).f_line);
if ((!(((*(yR119 *)rt_nil_check(F.v7507))).f_kind == v882))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3214))).f_line, ((*(yR99 *)rt_nil_check(F.p3214))).f_name, y_str(" is not a label", 15));
}
if ((!(((*(yR119 *)rt_nil_check(F.v7507))).f_level == v1273))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3214))).f_line, ((*(yR99 *)rt_nil_check(F.p3214))).f_name, y_str(": GOTO does not leave a routine or process (IX.A.4)", 51));
}
((*(yR119 *)rt_nil_check(F.v7507))).f_readonly = 1;
yr3071_Emit3(y_str("goto ", 5), ((*(yR119 *)rt_nil_check(F.v7507))).f_cname, y_str(";", 1));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3219_CheckLabels(void * a_p3220) {
struct yf3221 F;
memset((void *)&F, 0, sizeof F);
F.p3220 = a_p3220;
F.v7516 = F.p3220;
while ((!(F.v7516 == ((void *)0)))) {
if ((((*(yR99 *)rt_nil_check(F.v7516))).f_kind == v639)) {
F.v7518 = ((*(yR99 *)rt_nil_check(F.v7516))).f_a;
while ((!(F.v7518 == ((void *)0)))) {
F.v7520 = yr2238_FindHere(((*(yR99 *)rt_nil_check(F.v7518))).f_name);
if ((((((!(F.v7520 == ((void *)0)))) && ((((*(yR119 *)rt_nil_check(F.v7520))).f_kind == v882))) && ((*(yR119 *)rt_nil_check(F.v7520))).f_readonly) && (!((*(yR119 *)rt_nil_check(F.v7520))).f_hasmv))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.v7518))).f_line, ((*(yR99 *)rt_nil_check(F.v7518))).f_name, y_str(" is the target of a GOTO but labels no statement of its block", 61));
}
F.v7518 = ((*(yR99 *)rt_nil_check(F.v7518))).f_next;
}
}
F.v7516 = ((*(yR99 *)rt_nil_check(F.v7516))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3225_DesigBase(void * a_p3226, void * * a_p3227, rt_int * a_p3228, rt_int * a_p3229) {
struct yf3230 F;
memset((void *)&F, 0, sizeof F);
F.p3226 = a_p3226;
F.p3227_o = a_p3227;
F.p3228_o = a_p3228;
F.p3229_o = a_p3229;
F.v7528 = F.p3226;
F.p3227 = ((void *)0);
F.p3228 = 0;
F.p3229 = INT64_C(0);
for (;;) {
if (((((((*(yR99 *)rt_nil_check(F.v7528))).f_kind == v795)) || ((((*(yR99 *)rt_nil_check(F.v7528))).f_kind == v777))) || ((((*(yR99 *)rt_nil_check(F.v7528))).f_kind == v780)))) {
F.v7528 = ((*(yR99 *)rt_nil_check(F.v7528))).f_a;
} else if ((((*(yR99 *)rt_nil_check(F.v7528))).f_kind == v783)) {
if ((!F.p3228)) {
F.p3228 = 1;
if ((!(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7528))).f_a))).f_rep == ((void *)0)))) {
F.p3229 = ((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7528))).f_a))).f_rep))).f_tid;
}
}
F.v7528 = ((*(yR99 *)rt_nil_check(F.v7528))).f_a;
} else {
goto yl_7533;
}
}
yl_7533: ;
if ((((((*(yR99 *)rt_nil_check(F.v7528))).f_kind == v771)) && ((((*(yR99 *)rt_nil_check(F.v7528))).f_d == ((void *)0))))) {
F.v7530 = yr2232_Find(((*(yR99 *)rt_nil_check(F.v7528))).f_name);
if ((!(F.v7530 == ((void *)0)))) {
if (yr2278_Resolved(F.v7530)) {
F.v7530 = yr2330_Real(F.v7530);
if ((((*(yR119 *)rt_nil_check(F.v7530))).f_kind == v855)) {
F.p3227 = F.v7530;
}
}
}
}
(*F.p3227_o) = F.p3227;
(*F.p3228_o) = F.p3228;
(*F.p3229_o) = F.p3229;
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3234_Note(void * a_p3235, rt_int a_p3236, rt_int a_p3237) {
struct yf3238 F;
memset((void *)&F, 0, sizeof F);
F.p3235 = a_p3235;
F.p3236 = a_p3236;
F.p3237 = a_p3237;
F.v7540 = yr1888_NewNode(v663, F.p3237);
((*(yR99 *)rt_nil_check(F.v7540))).f_sym = F.p3235;
((*(yR99 *)rt_nil_check(F.v7540))).f_name = F.p3236;
{ void * rv7541 = F.v7540;
return rv7541; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3242_NoteWrite(void * a_p3243) {
struct yf3244 F;
memset((void *)&F, 0, sizeof F);
F.p3243 = a_p3243;
if ((v1595 == ((void *)0))) {
return;
}
yr3225_DesigBase(F.p3243, &F.v7545, &F.v7547, &F.v7549);
if (F.v7547) {
F.v7545 = ((void *)0);
} else if ((((F.v7545 == ((void *)0))) || ((((*(yR119 *)rt_nil_check(F.v7545))).f_level >= ((*(yR119 *)rt_nil_check(v1595))).f_level)))) {
return;
}
F.v7551 = ((*(yR119 *)rt_nil_check(v1595))).f_writes;
while ((!(F.v7551 == ((void *)0)))) {
if ((((*(yR99 *)rt_nil_check(F.v7551))).f_sym == F.v7545)) {
return;
}
F.v7551 = ((*(yR99 *)rt_nil_check(F.v7551))).f_next;
}
F.v7553 = yr3234_Note(F.v7545, INT64_C(0), ((*(yR99 *)rt_nil_check(F.p3243))).f_line);
((*(yR99 *)rt_nil_check(F.v7553))).f_next = ((*(yR119 *)rt_nil_check(v1595))).f_writes;
((*(yR119 *)rt_nil_check(v1595))).f_writes = F.v7553;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3248_NoteFree(void * a_p3249) {
struct yf3250 F;
memset((void *)&F, 0, sizeof F);
F.p3249 = a_p3249;
if ((v1595 == ((void *)0))) {
return;
}
if ((((!(((*(yR119 *)rt_nil_check(F.p3249))).f_kind == v855))) || ((((*(yR119 *)rt_nil_check(F.p3249))).f_level >= ((*(yR119 *)rt_nil_check(v1595))).f_level)))) {
return;
}
if ((((*(yR119 *)rt_nil_check(F.p3249))).f_seen == ((*(yR119 *)rt_nil_check(v1595))).f_serial)) {
return;
}
((*(yR119 *)rt_nil_check(F.p3249))).f_seen = ((*(yR119 *)rt_nil_check(v1595))).f_serial;
F.v7558 = yr3234_Note(F.p3249, INT64_C(0), v994);
((*(yR99 *)rt_nil_check(F.v7558))).f_next = ((*(yR119 *)rt_nil_check(v1595))).f_frees;
((*(yR119 *)rt_nil_check(v1595))).f_frees = F.v7558;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3254_NoteFreeDeref(void * a_p3255, rt_int a_p3256) {
struct yf3257 F;
memset((void *)&F, 0, sizeof F);
F.p3255 = a_p3255;
F.p3256 = a_p3256;
if ((v1595 == ((void *)0))) {
return;
}
yr3225_DesigBase(F.p3255, &F.v7564, &F.v7566, &F.v7568);
if ((((F.v7564 == ((void *)0))) || ((((*(yR119 *)rt_nil_check(F.v7564))).f_level >= ((*(yR119 *)rt_nil_check(v1595))).f_level)))) {
return;
}
F.v7570 = ((*(yR119 *)rt_nil_check(v1595))).f_frees;
while ((!(F.v7570 == ((void *)0)))) {
if ((((((*(yR99 *)rt_nil_check(F.v7570))).f_sym == ((void *)0))) && ((((*(yR99 *)rt_nil_check(F.v7570))).f_name == F.p3256)))) {
return;
}
F.v7570 = ((*(yR99 *)rt_nil_check(F.v7570))).f_next;
}
F.v7570 = yr3234_Note(((void *)0), F.p3256, ((*(yR99 *)rt_nil_check(F.p3255))).f_line);
((*(yR99 *)rt_nil_check(F.v7570))).f_next = ((*(yR119 *)rt_nil_check(v1595))).f_frees;
((*(yR119 *)rt_nil_check(v1595))).f_frees = F.v7570;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3261_DSteps(void * a_p3262, yarr * a_p3263) {
struct yf3264 F;
memset((void *)&F, 0, sizeof F);
F.p3262 = a_p3262;
F.p3263 = a_p3263;
F.v7575 = F.p3262;
F.v7577 = INT64_C(0);
while (((((((*(yR99 *)rt_nil_check(F.v7575))).f_kind == v795)) || ((((*(yR99 *)rt_nil_check(F.v7575))).f_kind == v777))) || ((((*(yR99 *)rt_nil_check(F.v7575))).f_kind == v780)))) {
if ((!(((*(yR99 *)rt_nil_check(F.v7575))).f_kind == v795))) {
if ((F.v7577 < INT64_C(64))) {
F.v7577 = rt_range(rt_add(F.v7577, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)((*F.p3263)).p)[y_ix1((*F.p3263), F.v7577)] = F.v7575;
}
}
F.v7575 = ((*(yR99 *)rt_nil_check(F.v7575))).f_a;
}
F.lo7589 = INT64_C(1);
F.hi7590 = rt_div(F.v7577, INT64_C(2));
{ rt_int hi7594 = F.hi7590;
for (rt_int i7593 = F.lo7589; i7593 <= hi7594; i7593++) { F.c_7592 = i7593;
F.v7580 = ((void * *)((*F.p3263)).p)[y_ix1((*F.p3263), F.c_7592)];
((void * *)((*F.p3263)).p)[y_ix1((*F.p3263), F.c_7592)] = ((void * *)((*F.p3263)).p)[y_ix1((*F.p3263), rt_sub((rt_add(F.v7577, INT64_C(1))), F.c_7592))];
((void * *)((*F.p3263)).p)[y_ix1((*F.p3263), rt_sub((rt_add(F.v7577, INT64_C(1))), F.c_7592))] = F.v7580;
if (i7593 == hi7594) break;
}}
{ rt_int rv7601 = F.v7577;
return rv7601; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3268_Overlaps(void * a_p3269, void * a_p3270) {
struct yf3271 F;
memset((void *)&F, 0, sizeof F);
F.p3269 = a_p3269;
F.p3270 = a_p3270;
y_init(&yd_195, &F.v7626);
y_init(&yd_195, &F.v7628);
yr3225_DesigBase(F.p3269, &F.v7606, &F.v7610, &F.v7622);
yr3225_DesigBase(F.p3270, &F.v7608, &F.v7612, &F.v7624);
if ((!(F.v7610 == F.v7612))) {
if (((F.v7610 && ((((*(yR99 *)rt_nil_check(F.p3269))).f_kind == v783))) && ((!(((*(yR99 *)rt_nil_check(F.p3270))).f_rep == ((void *)0)))))) {
if ((((((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3270))).f_rep))).f_kind == v822)) && ((((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3270))).f_rep))).f_tid == F.v7622)))) {
{ rt_int rv7646 = 1;
return rv7646; }
}
}
if (((F.v7612 && ((((*(yR99 *)rt_nil_check(F.p3270))).f_kind == v783))) && ((!(((*(yR99 *)rt_nil_check(F.p3269))).f_rep == ((void *)0)))))) {
if ((((((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3269))).f_rep))).f_kind == v822)) && ((((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3269))).f_rep))).f_tid == F.v7624)))) {
{ rt_int rv7648 = 1;
return rv7648; }
}
}
{ rt_int rv7650 = 0;
return rv7650; }
}
if (F.v7610) {
if ((!(F.v7622 == F.v7624))) {
{ rt_int rv7652 = 0;
return rv7652; }
}
} else if ((((F.v7606 == ((void *)0))) || ((!(F.v7606 == F.v7608))))) {
{ rt_int rv7654 = 0;
return rv7654; }
}
F.v7630 = yr3261_DSteps(F.p3269, &F.v7626);
F.v7632 = yr3261_DSteps(F.p3270, &F.v7628);
F.lo7658 = INT64_C(1);
F.hi7659 = F.v7630;
{ rt_int hi7663 = F.hi7659;
for (rt_int i7662 = F.lo7658; i7662 <= hi7663; i7662++) { F.c_7661 = i7662;
if ((F.c_7661 <= F.v7632)) {
F.v7638 = ((void * *)(F.v7626).p)[y_ix1(F.v7626, F.c_7661)];
F.v7640 = ((void * *)(F.v7628).p)[y_ix1(F.v7628, F.c_7661)];
if ((!(((*(yR99 *)rt_nil_check(F.v7638))).f_kind == ((*(yR99 *)rt_nil_check(F.v7640))).f_kind))) {
{ rt_int rv7665 = 1;
return rv7665; }
}
if ((((*(yR99 *)rt_nil_check(F.v7638))).f_kind == v777)) {
if ((!(((*(yR99 *)rt_nil_check(F.v7638))).f_name == ((*(yR99 *)rt_nil_check(F.v7640))).f_name))) {
{ rt_int rv7667 = 0;
return rv7667; }
}
} else {
F.v7618 = 1;
F.v7620 = 0;
F.v7642 = ((*(yR99 *)rt_nil_check(F.v7638))).f_b;
F.v7644 = ((*(yR99 *)rt_nil_check(F.v7640))).f_b;
while ((((!(F.v7642 == ((void *)0)))) && ((!(F.v7644 == ((void *)0)))))) {
yr2691_Manifest(F.v7642, &F.v7614, &F.v7634);
yr2691_Manifest(F.v7644, &F.v7616, &F.v7636);
if ((F.v7614 && F.v7616)) {
if ((!(F.v7634 == F.v7636))) {
F.v7620 = 1;
}
} else {
F.v7618 = 0;
}
F.v7642 = ((*(yR99 *)rt_nil_check(F.v7642))).f_next;
F.v7644 = ((*(yR99 *)rt_nil_check(F.v7644))).f_next;
}
if ((!F.v7618)) {
{ rt_int rv7673 = 1;
return rv7673; }
}
if (F.v7620) {
{ rt_int rv7675 = 0;
return rv7675; }
}
}
}
if (i7662 == hi7663) break;
}}
{ rt_int rv7677 = 1;
return rv7677; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3275_CheckActuals(void * a_p3276, rt_int a_p3277, rt_int a_p3278) {
struct yf3279 F;
memset((void *)&F, 0, sizeof F);
F.p3276 = a_p3276;
F.p3277 = a_p3277;
F.p3278 = a_p3278;
F.v7683 = ((*(yR119 *)rt_nil_check(F.p3276))).f_params;
F.v7687 = rt_range(rt_add(F.p3277, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7691 = ((void *)0);
while ((!(F.v7683 == ((void *)0)))) {
if ((((!(((*(yR114 *)rt_nil_check(F.v7683))).f_cls == v891))) && ((!(((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v7683))).f_rep))).f_kind == v849))))) {
F.v7685 = ((*(yR114 *)rt_nil_check(F.v7683))).f_next;
F.v7689 = rt_range(rt_add(F.v7687, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(F.v7685 == ((void *)0)))) {
if ((((((*(yR114 *)rt_nil_check(F.v7683))).f_cls == v897)) && ((((*(yR114 *)rt_nil_check(F.v7685))).f_cls == v897)))) {
if (yr3268_Overlaps(((void * *)(v1504).p)[y_ix1(v1504, F.v7687)], ((void * *)(v1504).p)[y_ix1(v1504, F.v7689)])) {
yr1180_FailN(((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v7689)]))).f_line, ((*(yR114 *)rt_nil_check(F.v7685))).f_name, y_str(": its actual and that of another VAR parameter may be the same variable (X.A.6)", 79));
}
}
if ((((((*(yR114 *)rt_nil_check(F.v7683))).f_cls == v894)) && ((((*(yR114 *)rt_nil_check(F.v7685))).f_cls == v894)))) {
if (yr3104_SameDesig(((void * *)(v1504).p)[y_ix1(v1504, F.v7687)], ((void * *)(v1504).p)[y_ix1(v1504, F.v7689)])) {
yr1180_FailN(((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v7689)]))).f_line, ((*(yR114 *)rt_nil_check(F.v7685))).f_name, y_str(": the same variable is the actual of two OUT parameters (IX.A.2)", 64));
}
}
F.v7685 = ((*(yR114 *)rt_nil_check(F.v7685))).f_next;
F.v7689 = rt_range(rt_add(F.v7689, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((((*(yR114 *)rt_nil_check(F.v7683))).f_cls == v897)) {
yr3225_DesigBase(((void * *)(v1504).p)[y_ix1(v1504, F.v7687)], &F.v7695, &F.v7697, &F.v7699);
F.v7693 = yr3234_Note(F.v7695, F.v7699, ((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v7687)]))).f_line);
if (F.v7697) {
((*(yR99 *)rt_nil_check(F.v7693))).f_flag = INT64_C(1);
}
if ((((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v7687)]))).f_kind == v783)) {
((*(yR99 *)rt_nil_check(F.v7693))).f_ival = INT64_C(1);
}
if ((F.v7691 == ((void *)0))) {
F.v7691 = yr3234_Note(F.p3276, INT64_C(0), F.p3278);
((*(yR99 *)rt_nil_check(F.v7691))).f_next = v1632;
v1632 = F.v7691;
}
((*(yR99 *)rt_nil_check(F.v7693))).f_next = ((*(yR99 *)rt_nil_check(F.v7691))).f_a;
((*(yR99 *)rt_nil_check(F.v7691))).f_a = F.v7693;
}
}
F.v7687 = rt_range(rt_add(F.v7687, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7683 = ((*(yR114 *)rt_nil_check(F.v7683))).f_next;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr7832_At(struct yf3284 *up, rt_int a_p7833, rt_int a_p7834) {
struct yf7835 F;
memset((void *)&F, 0, sizeof F);
F.up = up;
F.p7833 = a_p7833;
F.p7834 = a_p7834;
{ rt_int rv7857 = rt_range(rt_add((rt_mul(F.p7833, (rt_add(F.up->v7724, INT64_C(1))))), F.p7834), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
return rv7857; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr7839_Reaches(struct yf3284 *up, rt_int a_p7840, rt_int a_p7841) {
struct yf7842 F;
memset((void *)&F, 0, sizeof F);
F.up = up;
F.p7840 = a_p7840;
F.p7841 = a_p7841;
F.v7862 = ((*(yR119 *)rt_nil_check(((void * *)(F.up->v7808).p)[y_ix1(F.up->v7808, F.p7841)]))).f_calls;
if (((rt_int *)(F.up->v7819).p)[y_ix1(F.up->v7819, F.p7841)]) {
{ rt_int rv7864 = 0;
return rv7864; }
}
((rt_int *)(F.up->v7819).p)[y_ix1(F.up->v7819, F.p7841)] = 1;
while ((!(F.v7862 == ((void *)0)))) {
if ((((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7862))).f_sym))).f_vix > INT64_C(0))) {
if ((((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7862))).f_sym))).f_vix == F.p7840)) {
{ rt_int rv7868 = 1;
return rv7868; }
}
if (yr7839_Reaches(F.up, F.p7840, ((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7862))).f_sym))).f_vix)) {
{ rt_int rv7870 = 1;
return rv7870; }
}
}
F.v7862 = ((*(yR99 *)rt_nil_check(F.v7862))).f_next;
}
{ rt_int rv7872 = 0;
return rv7872; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr7846_VName(struct yf3284 *up, rt_int a_p7847) {
struct yf7848 F;
memset((void *)&F, 0, sizeof F);
F.up = up;
F.p7847 = a_p7847;
if ((((void * *)(F.up->v7786).p)[y_ix1(F.up->v7786, F.p7847)] == ((void *)0))) {
{ rt_int rv7876 = yr1055_T(y_str("a dynamic variable", 18));
return rv7876; }
}
{ rt_int rv7877 = ((*(yR119 *)rt_nil_check(((void * *)(F.up->v7786).p)[y_ix1(F.up->v7786, F.p7847)]))).f_name;
return rv7877; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3283_CheckEffects(void) {
struct yf3284 F;
memset((void *)&F, 0, sizeof F);
F.v7721 = INT64_C(0);
F.v7724 = INT64_C(0);
F.v7727 = INT64_C(0);
F.v7727 = INT64_C(1);
F.v7724 = INT64_C(1);
F.v7715 = v1630;
while ((!(F.v7715 == ((void *)0)))) {
F.v7721 = rt_range(rt_add(F.v7721, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7715))).f_sym))).f_vix = F.v7721;
F.v7717 = ((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7715))).f_sym))).f_writes;
while ((!(F.v7717 == ((void *)0)))) {
if ((((!(((*(yR99 *)rt_nil_check(F.v7717))).f_sym == ((void *)0)))) && ((((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7717))).f_sym))).f_vix == INT64_C(0))))) {
F.v7724 = rt_range(rt_add(F.v7724, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7717))).f_sym))).f_vix = F.v7724;
}
F.v7717 = ((*(yR99 *)rt_nil_check(F.v7717))).f_next;
}
F.v7717 = ((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7715))).f_sym))).f_frees;
while ((!(F.v7717 == ((void *)0)))) {
if ((!(((*(yR99 *)rt_nil_check(F.v7717))).f_sym == ((void *)0)))) {
if ((((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7717))).f_sym))).f_vix == INT64_C(0))) {
F.v7724 = rt_range(rt_add(F.v7724, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7717))).f_sym))).f_vix = F.v7724;
}
} else if ((yr3288_DynIndex(((*(yR99 *)rt_nil_check(F.v7717))).f_name, F.v7724, 0) == INT64_C(0))) {
F.v7724 = rt_range(rt_add(F.v7724, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR99 *)rt_nil_check(F.v7717))).f_ival = yr3288_DynIndex(((*(yR99 *)rt_nil_check(F.v7717))).f_name, F.v7724, 1);
}
F.v7717 = ((*(yR99 *)rt_nil_check(F.v7717))).f_next;
}
F.v7715 = ((*(yR99 *)rt_nil_check(F.v7715))).f_next;
}
if ((F.v7721 == INT64_C(0))) {
return;
}
{
F.lo7757 = INT64_C(0);
F.hi7758 = rt_mul((rt_add(F.v7721, INT64_C(1))), (rt_add(F.v7724, INT64_C(1))));
{ rt_int lo[1] = {F.lo7757}, hi[1] = {F.hi7758}; y_desc_array(&F.yd_7760, 1, lo, hi, &y_d_int); }
y_init(&F.yd_7760, &F.v7762);
y_init(&F.yd_7760, &F.v7764);
F.lo7770 = INT64_C(0);
F.hi7771 = F.v7724;
{ rt_int lo[1] = {F.lo7770}, hi[1] = {F.hi7771}; y_desc_array(&F.yd_7773, 1, lo, hi, &y_d_int); }
y_init(&F.yd_7773, &F.v7775);
F.lo7781 = INT64_C(0);
F.hi7782 = F.v7724;
{ rt_int lo[1] = {F.lo7781}, hi[1] = {F.hi7782}; y_desc_array(&F.yd_7784, 1, lo, hi, &y_d_ptr); }
y_init(&F.yd_7784, &F.v7786);
F.lo7792 = INT64_C(0);
F.hi7793 = F.v7724;
{ rt_int lo[1] = {F.lo7792}, hi[1] = {F.hi7793}; y_desc_array(&F.yd_7795, 1, lo, hi, &y_d_int); }
y_init(&F.yd_7795, &F.v7797);
F.lo7803 = INT64_C(0);
F.hi7804 = F.v7721;
{ rt_int lo[1] = {F.lo7803}, hi[1] = {F.hi7804}; y_desc_array(&F.yd_7806, 1, lo, hi, &y_d_ptr); }
y_init(&F.yd_7806, &F.v7808);
F.lo7814 = INT64_C(0);
F.hi7815 = F.v7721;
{ rt_int lo[1] = {F.lo7814}, hi[1] = {F.hi7815}; y_desc_array(&F.yd_7817, 1, lo, hi, &y_d_int); }
y_init(&F.yd_7817, &F.v7819);
F.v7821 = 1;
F.lo7887 = INT64_C(0);
F.hi7888 = rt_mul((rt_add(F.v7721, INT64_C(1))), (rt_add(F.v7724, INT64_C(1))));
{ rt_int hi7892 = F.hi7888;
for (rt_int i7891 = F.lo7887; i7891 <= hi7892; i7891++) { F.c_7890 = i7891;
((rt_int *)(F.v7762).p)[y_ix1(F.v7762, F.c_7890)] = 0;
((rt_int *)(F.v7764).p)[y_ix1(F.v7764, F.c_7890)] = 0;
if (i7891 == hi7892) break;
}}
F.lo7898 = INT64_C(0);
F.hi7899 = F.v7724;
{ rt_int hi7903 = F.hi7899;
for (rt_int i7902 = F.lo7898; i7902 <= hi7903; i7902++) { F.c_7901 = i7902;
((rt_int *)(F.v7775).p)[y_ix1(F.v7775, F.c_7901)] = INT64_C(-1);
((void * *)(F.v7786).p)[y_ix1(F.v7786, F.c_7901)] = ((void *)0);
((rt_int *)(F.v7797).p)[y_ix1(F.v7797, F.c_7901)] = INT64_C(0);
if (i7902 == hi7903) break;
}}
F.lo7909 = INT64_C(0);
F.hi7910 = F.v7721;
{ rt_int hi7914 = F.hi7910;
for (rt_int i7913 = F.lo7909; i7913 <= hi7914; i7913++) { F.c_7912 = i7913;
((rt_int *)(F.v7819).p)[y_ix1(F.v7819, F.c_7912)] = 0;
if (i7913 == hi7914) break;
}}
F.v7715 = v1630;
while ((!(F.v7715 == ((void *)0)))) {
F.v7730 = ((*(yR99 *)rt_nil_check(F.v7715))).f_sym;
((void * *)(F.v7808).p)[y_ix1(F.v7808, ((*(yR119 *)rt_nil_check(F.v7730))).f_vix)] = F.v7730;
F.v7717 = ((*(yR119 *)rt_nil_check(F.v7730))).f_writes;
while ((!(F.v7717 == ((void *)0)))) {
if ((((*(yR99 *)rt_nil_check(F.v7717))).f_sym == ((void *)0))) {
F.v7826 = INT64_C(1);
} else {
F.v7826 = ((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7717))).f_sym))).f_vix;
}
((rt_int *)(F.v7762).p)[y_ix1(F.v7762, yr7832_At(&F, ((*(yR119 *)rt_nil_check(F.v7730))).f_vix, F.v7826))] = 1;
if ((!(((*(yR99 *)rt_nil_check(F.v7717))).f_sym == ((void *)0)))) {
((rt_int *)(F.v7775).p)[y_ix1(F.v7775, F.v7826)] = ((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7717))).f_sym))).f_level;
((void * *)(F.v7786).p)[y_ix1(F.v7786, F.v7826)] = ((*(yR99 *)rt_nil_check(F.v7717))).f_sym;
}
F.v7717 = ((*(yR99 *)rt_nil_check(F.v7717))).f_next;
}
F.v7717 = ((*(yR119 *)rt_nil_check(F.v7730))).f_frees;
while ((!(F.v7717 == ((void *)0)))) {
if ((((*(yR99 *)rt_nil_check(F.v7717))).f_sym == ((void *)0))) {
F.v7826 = yr3288_DynIndex(((*(yR99 *)rt_nil_check(F.v7717))).f_name, INT64_C(0), 0);
((rt_int *)(F.v7797).p)[y_ix1(F.v7797, F.v7826)] = ((*(yR99 *)rt_nil_check(F.v7717))).f_name;
} else {
F.v7826 = ((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7717))).f_sym))).f_vix;
((rt_int *)(F.v7775).p)[y_ix1(F.v7775, F.v7826)] = ((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7717))).f_sym))).f_level;
((void * *)(F.v7786).p)[y_ix1(F.v7786, F.v7826)] = ((*(yR99 *)rt_nil_check(F.v7717))).f_sym;
}
((rt_int *)(F.v7764).p)[y_ix1(F.v7764, yr7832_At(&F, ((*(yR119 *)rt_nil_check(F.v7730))).f_vix, F.v7826))] = 1;
F.v7717 = ((*(yR99 *)rt_nil_check(F.v7717))).f_next;
}
F.v7715 = ((*(yR99 *)rt_nil_check(F.v7715))).f_next;
}
while (F.v7821) {
F.v7821 = 0;
F.lo7925 = INT64_C(1);
F.hi7926 = F.v7721;
{ rt_int hi7930 = F.hi7926;
for (rt_int i7929 = F.lo7925; i7929 <= hi7930; i7929++) { F.c_7928 = i7929;
F.v7719 = ((*(yR119 *)rt_nil_check(((void * *)(F.v7808).p)[y_ix1(F.v7808, F.c_7928)]))).f_calls;
while ((!(F.v7719 == ((void *)0)))) {
F.v7828 = ((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7719))).f_sym))).f_vix;
if ((F.v7828 > INT64_C(0))) {
F.lo7935 = INT64_C(1);
F.hi7936 = F.v7724;
{ rt_int hi7940 = F.hi7936;
for (rt_int i7939 = F.lo7935; i7939 <= hi7940; i7939++) { F.c_7938 = i7939;
if ((((rt_int *)(F.v7775).p)[y_ix1(F.v7775, F.c_7938)] < ((*(yR119 *)rt_nil_check(((void * *)(F.v7808).p)[y_ix1(F.v7808, F.c_7928)]))).f_level)) {
if ((((rt_int *)(F.v7762).p)[y_ix1(F.v7762, yr7832_At(&F, F.v7828, rt_range(F.c_7938, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] && (!((rt_int *)(F.v7762).p)[y_ix1(F.v7762, yr7832_At(&F, rt_range(F.c_7928, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(F.c_7938, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]))) {
((rt_int *)(F.v7762).p)[y_ix1(F.v7762, yr7832_At(&F, rt_range(F.c_7928, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(F.c_7938, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] = 1;
F.v7821 = 1;
}
if ((((rt_int *)(F.v7764).p)[y_ix1(F.v7764, yr7832_At(&F, F.v7828, rt_range(F.c_7938, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] && (!((rt_int *)(F.v7764).p)[y_ix1(F.v7764, yr7832_At(&F, rt_range(F.c_7928, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(F.c_7938, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]))) {
((rt_int *)(F.v7764).p)[y_ix1(F.v7764, yr7832_At(&F, rt_range(F.c_7928, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(F.c_7938, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] = 1;
F.v7821 = 1;
}
}
if (i7939 == hi7940) break;
}}
}
F.v7719 = ((*(yR99 *)rt_nil_check(F.v7719))).f_next;
}
if (i7929 == hi7930) break;
}}
}
F.lo7948 = INT64_C(1);
F.hi7949 = F.v7721;
{ rt_int hi7953 = F.hi7949;
for (rt_int i7952 = F.lo7948; i7952 <= hi7953; i7952++) { F.c_7951 = i7952;
F.v7730 = ((void * *)(F.v7808).p)[y_ix1(F.v7808, F.c_7951)];
if (((*(yR119 *)rt_nil_check(F.v7730))).f_func) {
F.v7719 = ((*(yR119 *)rt_nil_check(F.v7730))).f_calls;
while ((!(F.v7719 == ((void *)0)))) {
F.v7828 = ((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7719))).f_sym))).f_vix;
if ((F.v7828 > INT64_C(0))) {
F.lo7958 = INT64_C(1);
F.hi7959 = F.v7724;
{ rt_int hi7963 = F.hi7959;
for (rt_int i7962 = F.lo7958; i7962 <= hi7963; i7962++) { F.c_7961 = i7962;
if ((((rt_int *)(F.v7762).p)[y_ix1(F.v7762, yr7832_At(&F, F.v7828, rt_range(F.c_7961, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] && ((((rt_int *)(F.v7775).p)[y_ix1(F.v7775, F.c_7961)] < ((*(yR119 *)rt_nil_check(F.v7730))).f_level)))) {
yr1151_Fail(((*(yR99 *)rt_nil_check(F.v7719))).f_line, yr3187_Join(((*(yR119 *)rt_nil_check(F.v7730))).f_name, yr3187_Join(yr1055_T(y_str(" is a FUNCTION: it calls ", 25)), ((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7719))).f_sym))).f_name, INT64_C(0)), yr3187_Join(yr1055_T(y_str(", which assigns to ", 19)), yr7846_VName(&F, rt_range(F.c_7961, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))), yr1055_T(y_str(" (X.A.4)", 8)))));
}
if (i7962 == hi7963) break;
}}
}
F.v7719 = ((*(yR99 *)rt_nil_check(F.v7719))).f_next;
}
}
if ((!(((*(yR119 *)rt_nil_check(F.v7730))).f_decl == ((void *)0)))) {
if ((!(((*(yR99 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v7730))).f_decl))).f_e == ((void *)0)))) {
F.lo7971 = INT64_C(0);
F.hi7972 = F.v7721;
{ rt_int hi7976 = F.hi7972;
for (rt_int i7975 = F.lo7971; i7975 <= hi7976; i7975++) { F.c_7974 = i7975;
((rt_int *)(F.v7819).p)[y_ix1(F.v7819, F.c_7974)] = 0;
if (i7975 == hi7976) break;
}}
if (yr7839_Reaches(&F, rt_range(F.c_7951, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(F.c_7951, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v7730))).f_decl))).f_line, ((*(yR119 *)rt_nil_check(F.v7730))).f_name, y_str(" is INLINE and calls itself (X.A.5)", 35));
}
}
}
if (i7952 == hi7953) break;
}}
F.v7715 = v1632;
while ((!(F.v7715 == ((void *)0)))) {
F.v7830 = ((*(yR99 *)rt_nil_check(F.v7715))).f_sym;
F.v7828 = ((*(yR119 *)rt_nil_check(F.v7830))).f_vix;
if ((F.v7828 > INT64_C(0))) {
F.v7717 = ((*(yR99 *)rt_nil_check(F.v7715))).f_a;
while ((!(F.v7717 == ((void *)0)))) {
if ((((((*(yR99 *)rt_nil_check(F.v7717))).f_flag == INT64_C(0))) && ((!(((*(yR99 *)rt_nil_check(F.v7717))).f_sym == ((void *)0)))))) {
F.v7826 = ((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7717))).f_sym))).f_vix;
if ((F.v7826 > INT64_C(0))) {
if (((rt_int *)(F.v7764).p)[y_ix1(F.v7764, yr7832_At(&F, F.v7828, F.v7826))]) {
yr1151_Fail(((*(yR99 *)rt_nil_check(F.v7717))).f_line, yr3187_Join(((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7717))).f_sym))).f_name, yr3187_Join(yr1055_T(y_str(" is the actual of a VAR parameter of ", 37)), ((*(yR119 *)rt_nil_check(F.v7830))).f_name, INT64_C(0)), yr1055_T(y_str(", which refers to it freely too (X.A.6)", 39))));
}
}
}
F.v7824 = INT64_C(0);
if ((((*(yR99 *)rt_nil_check(F.v7717))).f_flag == INT64_C(1))) {
F.v7824 = yr3288_DynIndex(((*(yR99 *)rt_nil_check(F.v7717))).f_name, INT64_C(0), 0);
}
if ((F.v7824 > INT64_C(0))) {
if (((rt_int *)(F.v7764).p)[y_ix1(F.v7764, yr7832_At(&F, F.v7828, F.v7824))]) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.v7717))).f_line, ((*(yR119 *)rt_nil_check(F.v7830))).f_name, y_str(": a VAR actual and a dynamic variable it refers to freely may be the same (X.A.6)", 81));
}
}
if ((((((*(yR99 *)rt_nil_check(F.v7717))).f_flag == INT64_C(1))) && ((((*(yR99 *)rt_nil_check(F.v7717))).f_ival == INT64_C(1))))) {
F.lo7996 = INT64_C(1);
F.hi7997 = F.v7724;
{ rt_int hi8001 = F.hi7997;
for (rt_int i8000 = F.lo7996; i8000 <= hi8001; i8000++) { F.c_7999 = i8000;
if ((((rt_int *)(F.v7764).p)[y_ix1(F.v7764, yr7832_At(&F, F.v7828, rt_range(F.c_7999, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] && ((!(((void * *)(F.v7786).p)[y_ix1(F.v7786, F.c_7999)] == ((void *)0)))))) {
if ((((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(((void * *)(F.v7786).p)[y_ix1(F.v7786, F.c_7999)]))).f_rep))).f_kind == v822)) && ((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(((void * *)(F.v7786).p)[y_ix1(F.v7786, F.c_7999)]))).f_rep))).f_tid == ((*(yR99 *)rt_nil_check(F.v7717))).f_name)))) {
yr1151_Fail(((*(yR99 *)rt_nil_check(F.v7717))).f_line, yr3187_Join(((*(yR119 *)rt_nil_check(F.v7830))).f_name, yr3187_Join(yr1055_T(y_str(": a VAR actual is a dynamic variable that ", 42)), ((*(yR119 *)rt_nil_check(((void * *)(F.v7786).p)[y_ix1(F.v7786, F.c_7999)]))).f_name, INT64_C(0)), yr1055_T(y_str(", which it refers to freely, may point to (X.A.6)", 49))));
}
}
if (i8000 == hi8001) break;
}}
}
F.v7717 = ((*(yR99 *)rt_nil_check(F.v7717))).f_next;
}
}
F.v7715 = ((*(yR99 *)rt_nil_check(F.v7715))).f_next;
}
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3288_DynIndex(rt_int a_p3289, rt_int a_p3290, rt_int a_p3291) {
struct yf3292 F;
memset((void *)&F, 0, sizeof F);
F.p3289 = a_p3289;
F.p3290 = a_p3290;
F.p3291 = a_p3291;
F.lo8012 = INT64_C(1);
F.hi8013 = v1656;
{ rt_int hi8017 = F.hi8013;
for (rt_int i8016 = F.lo8012; i8016 <= hi8017; i8016++) { F.c_8015 = i8016;
if ((((rt_int *)(v1643).p)[y_ix1(v1643, F.c_8015)] == F.p3289)) {
{ rt_int rv8018 = ((rt_int *)(v1654).p)[y_ix1(v1654, F.c_8015)];
return rv8018; }
}
if (i8016 == hi8017) break;
}}
if ((!F.p3291)) {
{ rt_int rv8020 = INT64_C(0);
return rv8020; }
}
if ((v1656 >= INT64_C(4096))) {
yr1172_FailS(v994, y_str("too many pointer types for this implementation", 46));
}
v1656 = rt_range(rt_add(v1656, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1643).p)[y_ix1(v1643, v1656)] = F.p3289;
((rt_int *)(v1654).p)[y_ix1(v1654, v1656)] = F.p3290;
{ rt_int rv8025 = F.p3290;
return rv8025; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3296_RoutineCName(rt_int a_p3297) {
struct yf3298 F;
memset((void *)&F, 0, sizeof F);
F.p3297 = a_p3297;
F.v8029 = yr1189_NewSerial();
F.v8031 = 1;
F.lo8036 = INT64_C(1);
F.hi8037 = ((rt_int *)(v914).p)[y_ix1(v914, F.p3297)];
{ rt_int hi8041 = F.hi8037;
for (rt_int i8040 = F.lo8036; i8040 <= hi8041; i8040++) { F.c_8039 = i8040;
if ((!((yr1002_IsLetter(yr1097_TChar(F.p3297, rt_range(F.c_8039, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || yr1008_IsDigit(yr1097_TChar(F.p3297, rt_range(F.c_8039, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))))) {
F.v8031 = 0;
}
if (i8040 == hi8041) break;
}}
yr1020_SB();
yr1031_SA(y_str("yr", 2));
yr1044_SI(F.v8029);
if (F.v8031) {
yr1031_SA(y_str("_", 1));
yr1038_ST(F.p3297);
}
{ rt_int rv8045 = yr1050_SE();
return rv8045; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3302_FormalRep(void * a_p3303) {
struct yf3304 F;
memset((void *)&F, 0, sizeof F);
F.p3303 = a_p3303;
if ((((*(yR99 *)rt_nil_check(F.p3303))).f_kind == v690)) {
yr2691_Manifest(((*(yR99 *)rt_nil_check(F.p3303))).f_a, &F.v8051, &F.v8053);
if ((((!F.v8051) || ((F.v8053 < INT64_C(1)))) || ((F.v8053 > INT64_C(4))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3303))).f_line, y_str("DIMENSIONS is a manifest constant from 1 to 4", 45));
}
F.v8049 = yr2336_NewRep(v837, yr1055_T(y_str("length-unresolved array", 23)));
((*(yR104 *)rt_nil_check(F.v8049))).f_nidx = F.v8053;
((*(yR104 *)rt_nil_check(F.v8049))).f_elem = yr2580_MakeRep(((*(yR99 *)rt_nil_check(F.p3303))).f_b, INT64_C(0), 0);
yr2439_CheckRepresented(((*(yR104 *)rt_nil_check(F.v8049))).f_elem, ((*(yR99 *)rt_nil_check(F.p3303))).f_line);
((*(yR104 *)rt_nil_check(F.v8049))).f_deep = 1;
{ void * rv8061 = F.v8049;
return rv8061; }
}
if ((((*(yR99 *)rt_nil_check(F.p3303))).f_kind == v693)) {
{ void * rv8063 = yr2336_NewRep(v849, yr1055_T(y_str("SPACE", 5)));
return rv8063; }
}
F.v8049 = yr2580_MakeRep(F.p3303, INT64_C(0), 0);
yr2439_CheckRepresented(F.v8049, ((*(yR99 *)rt_nil_check(F.p3303))).f_line);
{ void * rv8066 = F.v8049;
return rv8066; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3308_ParamCType(void * a_p3309) {
struct yf3310 F;
memset((void *)&F, 0, sizeof F);
F.p3309 = a_p3309;
F.v8070 = yr2398_CType(((*(yR114 *)rt_nil_check(F.p3309))).f_rep);
if ((((*(yR114 *)rt_nil_check(F.p3309))).f_cls == v891)) {
{ rt_int rv8071 = F.v8070;
return rv8071; }
}
yr1020_SB();
yr1038_ST(F.v8070);
yr1031_SA(y_str(" *", 2));
{ rt_int rv8073 = yr1050_SE();
return rv8073; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3314_RoutineHeader(void * a_p3315, rt_int a_p3316) {
struct yf3317 F;
memset((void *)&F, 0, sizeof F);
F.p3315 = a_p3315;
F.p3316 = a_p3316;
F.v8094 = 1;
F.v8078 = yr2202_NewSym(F.p3316, ((*(yR99 *)rt_nil_check(F.p3315))).f_name);
((*(yR119 *)rt_nil_check(F.v8078))).f_decl = F.p3315;
((*(yR119 *)rt_nil_check(F.v8078))).f_func = (((*(yR99 *)rt_nil_check(F.p3315))).f_flag == INT64_C(1));
((*(yR119 *)rt_nil_check(F.v8078))).f_level = rt_range(rt_add(v1273, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR119 *)rt_nil_check(F.v8078))).f_cname = yr3296_RoutineCName(((*(yR99 *)rt_nil_check(F.p3315))).f_name);
if ((!(((*(yR99 *)rt_nil_check(F.p3315))).f_b == ((void *)0)))) {
((*(yR119 *)rt_nil_check(F.v8078))).f_ret = yr2580_MakeRep(((*(yR99 *)rt_nil_check(F.p3315))).f_b, INT64_C(0), 0);
yr2439_CheckRepresented(((*(yR119 *)rt_nil_check(F.v8078))).f_ret, ((*(yR99 *)rt_nil_check(F.p3315))).f_line);
} else {
((*(yR119 *)rt_nil_check(F.v8078))).f_ret = v1342;
if (((*(yR119 *)rt_nil_check(F.v8078))).f_func) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3315))).f_line, ((*(yR99 *)rt_nil_check(F.p3315))).f_name, y_str(": a FUNCTION has a RETURNS clause (X.A)", 39));
}
}
F.v8088 = ((void *)0);
F.v8082 = ((*(yR99 *)rt_nil_check(F.p3315))).f_a;
while ((!(F.v8082 == ((void *)0)))) {
F.v8090 = yr3302_FormalRep(((*(yR99 *)rt_nil_check(F.v8082))).f_b);
if ((((*(yR119 *)rt_nil_check(F.v8078))).f_func && ((!(((*(yR99 *)rt_nil_check(F.v8082))).f_ival == v891))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.v8082))).f_line, ((*(yR99 *)rt_nil_check(F.p3315))).f_name, y_str(": the parameters of a FUNCTION are CONST (X.A.2)", 48));
}
if ((((F.p3316 == v879)) && ((((*(yR99 *)rt_nil_check(F.v8082))).f_ival == v894)))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.v8082))).f_line, ((*(yR99 *)rt_nil_check(F.p3315))).f_name, y_str(": a process has no OUT parameters", 33));
}
F.v8084 = ((*(yR99 *)rt_nil_check(F.v8082))).f_a;
while ((!(F.v8084 == ((void *)0)))) {
({ F.v8086 = rt_alloc(sizeof(yR114)); });
(*(yR114 *)rt_nil_check(F.v8086)) = ((yR114){ .f_name = ((*(yR99 *)rt_nil_check(F.v8084))).f_name, .f_cls = ((*(yR99 *)rt_nil_check(F.v8082))).f_ival, .f_rep = F.v8090, .f_cname = yr1194_Fresh(y_str("p", 1)), .f_next = ((void *)0) });
if ((F.v8088 == ((void *)0))) {
((*(yR119 *)rt_nil_check(F.v8078))).f_params = F.v8086;
} else {
((*(yR114 *)rt_nil_check(F.v8088))).f_next = F.v8086;
}
F.v8088 = F.v8086;
((*(yR119 *)rt_nil_check(F.v8078))).f_nparams = rt_range(rt_add(((*(yR119 *)rt_nil_check(F.v8078))).f_nparams, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v8084 = ((*(yR99 *)rt_nil_check(F.v8084))).f_next;
}
F.v8082 = ((*(yR99 *)rt_nil_check(F.v8082))).f_next;
}
F.v8080 = yr2232_Find(((*(yR99 *)rt_nil_check(F.p3315))).f_name);
if ((!(F.v8080 == ((void *)0)))) {
F.v8080 = yr2330_Real(F.v8080);
}
if ((((((*(yR99 *)rt_nil_check(F.p3315))).f_ival == INT64_C(0))) && ((!(F.v8080 == ((void *)0)))))) {
if ((((*(yR119 *)rt_nil_check(F.v8080))).f_kind == v885)) {
yr1158_Warn(((*(yR99 *)rt_nil_check(F.p3315))).f_line, yr3187_Join(((*(yR99 *)rt_nil_check(F.p3315))).f_name, yr1055_T(y_str(" hides the system routine of that name (X.A.1)", 46)), INT64_C(0)));
}
}
if (((((!(((*(yR99 *)rt_nil_check(F.p3315))).f_ival == INT64_C(0)))) && ((!(F.v8080 == ((void *)0))))) && ((((*(yR119 *)rt_nil_check(F.v8080))).f_kind == v870)))) {
((*(yR119 *)rt_nil_check(F.v8078))).f_alt = F.v8080;
if ((!(((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v8080))).f_ret))).f_kind == v846)) == ((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v8078))).f_ret))).f_kind == v846))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3315))).f_line, ((*(yR99 *)rt_nil_check(F.p3315))).f_name, y_str(": a value-returning routine is extended or replaced only by one, a procedure only by a procedure (X.A.1)", 104));
}
if ((((((*(yR99 *)rt_nil_check(F.p3315))).f_ival == v333)) && ((!(yr3321_SameSignature(F.v8078, F.v8080) == ((void *)0)))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3315))).f_line, ((*(yR99 *)rt_nil_check(F.p3315))).f_name, y_str(" EXTENDS a definition for the same parameter types: use REPLACES", 64));
}
if ((((((*(yR99 *)rt_nil_check(F.p3315))).f_ival == v429)) && ((yr3321_SameSignature(F.v8078, F.v8080) == ((void *)0))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3315))).f_line, ((*(yR99 *)rt_nil_check(F.p3315))).f_name, y_str(" REPLACES no definition for these parameter types", 49));
}
}
((*(yR99 *)rt_nil_check(F.p3315))).f_sym = F.v8078;
yr2297_Define(F.v8078, ((*(yR99 *)rt_nil_check(F.p3315))).f_line);
F.v8082 = yr1888_NewNode(v663, ((*(yR99 *)rt_nil_check(F.p3315))).f_line);
((*(yR99 *)rt_nil_check(F.v8082))).f_sym = F.v8078;
((*(yR99 *)rt_nil_check(F.v8082))).f_next = v1630;
v1630 = F.v8082;
((rt_int *)(v1285).p)[y_ix1(v1285, ((*(yR119 *)rt_nil_check(F.v8078))).f_level)] = yr1194_Fresh(y_str("yf", 2));
((*(yR119 *)rt_nil_check(F.v8078))).f_members = yr2202_NewSym(v885, ((rt_int *)(v1285).p)[y_ix1(v1285, ((*(yR119 *)rt_nil_check(F.v8078))).f_level)]);
yr1020_SB();
yr1031_SA(y_str("struct ", 7));
yr1038_ST(((rt_int *)(v1285).p)[y_ix1(v1285, ((*(yR119 *)rt_nil_check(F.v8078))).f_level)]);
yr1031_SA(y_str(";", 1));
F.v8092 = yr1050_SE();
yr1104_Put(&v972, F.v8092);
yr1020_SB();
yr1031_SA(y_str("static ", 7));
if ((F.p3316 == v879)) {
yr1031_SA(y_str("void", 4));
} else {
yr1038_ST(yr2398_CType(((*(yR119 *)rt_nil_check(F.v8078))).f_ret));
}
yr1031_SA(y_str(" ", 1));
yr1038_ST(((*(yR119 *)rt_nil_check(F.v8078))).f_cname);
yr1031_SA(y_str("(", 1));
F.v8092 = yr1050_SE();
if ((F.p3316 == v879)) {
F.v8092 = yr3187_Join(F.v8092, yr1055_T(y_str("void *arg", 9)), INT64_C(0));
F.v8094 = 0;
} else if ((v1273 > INT64_C(0))) {
yr1020_SB();
yr1038_ST(F.v8092);
yr1031_SA(y_str("struct ", 7));
yr1038_ST(((rt_int *)(v1285).p)[y_ix1(v1285, v1273)]);
yr1031_SA(y_str(" *up", 4));
F.v8092 = yr1050_SE();
F.v8094 = 0;
}
F.v8086 = ((*(yR119 *)rt_nil_check(F.v8078))).f_params;
while ((((!(F.v8086 == ((void *)0)))) && ((!(F.p3316 == v879))))) {
yr1020_SB();
yr1038_ST(F.v8092);
if ((!F.v8094)) {
yr1031_SA(y_str(", ", 2));
}
F.v8094 = 0;
yr1038_ST(yr3308_ParamCType(F.v8086));
yr1031_SA(y_str(" a_", 3));
yr1038_ST(((*(yR114 *)rt_nil_check(F.v8086))).f_cname);
F.v8092 = yr1050_SE();
F.v8086 = ((*(yR114 *)rt_nil_check(F.v8086))).f_next;
}
if (F.v8094) {
F.v8092 = yr3187_Join(F.v8092, yr1055_T(y_str("void", 4)), INT64_C(0));
}
F.v8092 = yr3187_Join(F.v8092, yr1055_T(y_str(")", 1)), INT64_C(0));
((*(yR119 *)rt_nil_check(F.v8078))).f_mnext = yr2202_NewSym(v885, F.v8092);
yr1104_Put(&v980, yr3187_Join(F.v8092, yr1055_T(y_str(";", 1)), INT64_C(0)));
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3321_SameSignature(void * a_p3322, void * a_p3323) {
struct yf3324 F;
memset((void *)&F, 0, sizeof F);
F.p3322 = a_p3322;
F.p3323 = a_p3323;
F.v8141 = F.p3323;
while ((!(F.v8141 == ((void *)0)))) {
if ((((*(yR119 *)rt_nil_check(F.v8141))).f_nparams == ((*(yR119 *)rt_nil_check(F.p3322))).f_nparams)) {
F.v8147 = 1;
F.v8143 = ((*(yR119 *)rt_nil_check(F.p3322))).f_params;
F.v8145 = ((*(yR119 *)rt_nil_check(F.v8141))).f_params;
while ((!(F.v8143 == ((void *)0)))) {
if ((!yr2416_SameType(((*(yR114 *)rt_nil_check(F.v8143))).f_rep, ((*(yR114 *)rt_nil_check(F.v8145))).f_rep))) {
F.v8147 = 0;
}
F.v8143 = ((*(yR114 *)rt_nil_check(F.v8143))).f_next;
F.v8145 = ((*(yR114 *)rt_nil_check(F.v8145))).f_next;
}
if (F.v8147) {
{ void * rv8150 = F.v8141;
return rv8150; }
}
}
F.v8141 = ((*(yR119 *)rt_nil_check(F.v8141))).f_alt;
}
{ void * rv8151 = ((void *)0);
return rv8151; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3328_RoutineBody(void * a_p3329) {
struct yf3330 F;
memset((void *)&F, 0, sizeof F);
F.p3329 = a_p3329;
F.v8155 = ((*(yR99 *)rt_nil_check(F.p3329))).f_sym;
F.v8157 = v990;
F.v8159 = v992;
F.v8161 = v1273;
F.v8163 = v1520;
F.v8165 = v1523;
F.v8167 = v1548;
F.v8169 = v1562;
F.v8171 = v1589;
F.v8173 = v1592;
F.v8175 = v1595;
F.v8177 = v1624;
v990 = ((yR134){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v992 = ((yR134){ .f_head = ((void *)0), .f_tail = ((void *)0) });
F.v8187 = ((yR134){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v1273 = ((*(yR119 *)rt_nil_check(F.v8155))).f_level;
F.v8183 = ((*(yR119 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v8155))).f_members))).f_name;
((rt_int *)(v1285).p)[y_ix1(v1285, v1273)] = F.v8183;
v1523 = v1520;
v1592 = v1589;
v1562 = INT64_C(0);
v1595 = F.v8155;
v1624 = 0;
yr2209_OpenScope(0);
v1322 = rt_range(rt_add(v1322, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1318).p)[y_ix1(v1318, v1322)] = ((*(yR119 *)rt_nil_check(F.v8155))).f_depth;
((rt_int *)(v1320).p)[y_ix1(v1320, v1322)] = ((*(yR119 *)rt_nil_check(F.v8155))).f_serial;
F.v8179 = ((*(yR119 *)rt_nil_check(F.v8155))).f_params;
while ((!(F.v8179 == ((void *)0)))) {
if ((((*(yR114 *)rt_nil_check(F.v8179))).f_cls == v891)) {
F.v8181 = yr2202_NewSym(v858, ((*(yR114 *)rt_nil_check(F.v8179))).f_name);
} else {
F.v8181 = yr2202_NewSym(v855, ((*(yR114 *)rt_nil_check(F.v8179))).f_name);
}
((*(yR119 *)rt_nil_check(F.v8181))).f_rep = ((*(yR114 *)rt_nil_check(F.v8179))).f_rep;
((*(yR119 *)rt_nil_check(F.v8181))).f_level = v1273;
((*(yR119 *)rt_nil_check(F.v8181))).f_cname = ((*(yR114 *)rt_nil_check(F.v8179))).f_cname;
if ((((*(yR119 *)rt_nil_check(F.v8155))).f_kind == v879)) {
((*(yR119 *)rt_nil_check(F.v8181))).f_byref = (((*(yR114 *)rt_nil_check(F.v8179))).f_cls == v897);
yr2317_DeclStorage(yr3308_ParamCType(F.v8179), ((*(yR114 *)rt_nil_check(F.v8179))).f_cname);
} else if ((((*(yR114 *)rt_nil_check(F.v8179))).f_cls == v897)) {
((*(yR119 *)rt_nil_check(F.v8181))).f_byref = 1;
yr2317_DeclStorage(yr3308_ParamCType(F.v8179), ((*(yR114 *)rt_nil_check(F.v8179))).f_cname);
yr1126_Emit(yr3187_Join(yr1055_T(y_str("F.", 2)), ((*(yR114 *)rt_nil_check(F.v8179))).f_cname, yr3187_Join(yr1055_T(y_str(" = a_", 5)), ((*(yR114 *)rt_nil_check(F.v8179))).f_cname, yr1055_T(y_str(";", 1)))));
} else if ((((*(yR114 *)rt_nil_check(F.v8179))).f_cls == v894)) {
yr2317_DeclStorage(yr2398_CType(((*(yR114 *)rt_nil_check(F.v8179))).f_rep), ((*(yR114 *)rt_nil_check(F.v8179))).f_cname);
yr2317_DeclStorage(yr3308_ParamCType(F.v8179), yr3187_Join(((*(yR114 *)rt_nil_check(F.v8179))).f_cname, yr1055_T(y_str("_o", 2)), INT64_C(0)));
yr1126_Emit(yr3187_Join(yr1055_T(y_str("F.", 2)), ((*(yR114 *)rt_nil_check(F.v8179))).f_cname, yr3187_Join(yr1055_T(y_str("_o = a_", 7)), ((*(yR114 *)rt_nil_check(F.v8179))).f_cname, yr1055_T(y_str(";", 1)))));
if ((yr2373_Deep(((*(yR114 *)rt_nil_check(F.v8179))).f_rep) && ((!(((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v8179))).f_rep))).f_kind == v837))))) {
yr1126_Emit(yr3187_Join(yr1055_T(y_str("y_init(", 7)), yr2404_DescOf(((*(yR114 *)rt_nil_check(F.v8179))).f_rep), yr3187_Join(yr1055_T(y_str(", &F.", 5)), ((*(yR114 *)rt_nil_check(F.v8179))).f_cname, yr1055_T(y_str(");", 2)))));
}
if ((((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v8179))).f_rep))).f_kind == v837)) {
yr1126_Emit(yr3187_Join(yr1055_T(y_str("F.", 2)), ((*(yR114 *)rt_nil_check(F.v8179))).f_cname, yr3187_Join(yr1055_T(y_str(" = *a_", 6)), ((*(yR114 *)rt_nil_check(F.v8179))).f_cname, yr1055_T(y_str(";", 1)))));
}
} else {
yr2317_DeclStorage(yr2398_CType(((*(yR114 *)rt_nil_check(F.v8179))).f_rep), ((*(yR114 *)rt_nil_check(F.v8179))).f_cname);
yr1126_Emit(yr3187_Join(yr1055_T(y_str("F.", 2)), ((*(yR114 *)rt_nil_check(F.v8179))).f_cname, yr3187_Join(yr1055_T(y_str(" = a_", 5)), ((*(yR114 *)rt_nil_check(F.v8179))).f_cname, yr1055_T(y_str(";", 1)))));
}
yr2297_Define(F.v8181, ((*(yR99 *)rt_nil_check(F.p3329))).f_line);
F.v8179 = ((*(yR114 *)rt_nil_check(F.v8179))).f_next;
}
yr3526_EnterMonitor(F.v8155);
yr3384_Declarations(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3329))).f_c))).f_a);
if (yr3132_BlockFalls(((*(yR99 *)rt_nil_check(F.p3329))).f_c)) {
if ((((*(yR119 *)rt_nil_check(F.v8155))).f_kind == v879)) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3329))).f_line, ((*(yR99 *)rt_nil_check(F.p3329))).f_name, y_str(": control reaches the end of the process, which ends with TERMINATE_PROCESS (IX.A.7)", 84));
} else {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3329))).f_line, ((*(yR99 *)rt_nil_check(F.p3329))).f_name, y_str(": control reaches the end of the routine, which ends with RETURN (IX.A.6)", 73));
}
}
yr3098_BlockStatements(((*(yR99 *)rt_nil_check(F.p3329))).f_c);
if ((((*(yR119 *)rt_nil_check(F.v8155))).f_kind == v879)) {
yr1132_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
} else {
yr1132_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
}
yr3508_AwaitProcesses();
yr2221_CloseScope();
v1322 = rt_range(rt_sub(v1322, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1020_SB();
yr1031_SA(y_str("struct ", 7));
yr1038_ST(F.v8183);
yr1031_SA(y_str(" {", 2));
if ((v1273 > INT64_C(1))) {
yr1031_SA(y_str(" struct ", 8));
yr1038_ST(((rt_int *)(v1285).p)[y_ix1(v1285, rt_sub(v1273, INT64_C(1)))]);
yr1031_SA(y_str(" *up;", 5));
} else {
yr1031_SA(y_str(" void *up;", 10));
}
F.v8185 = yr1050_SE();
yr1104_Put(&v976, F.v8185);
yr1119_Append(&v976, &v992);
yr1111_PutS(&v976, y_str("};", 2));
yr1104_Put(&F.v8187, yr3187_Join(((*(yR119 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v8155))).f_mnext))).f_name, yr1055_T(y_str(" {", 2)), INT64_C(0)));
if (v1624) {
yr1111_PutS(&F.v8187, y_str("volatile", 8));
}
yr1104_Put(&F.v8187, yr3187_Join(yr1055_T(y_str("struct ", 7)), F.v8183, yr1055_T(y_str(" F;", 3))));
yr1111_PutS(&F.v8187, y_str("memset((void *)&F, 0, sizeof F);", 32));
if ((((*(yR119 *)rt_nil_check(F.v8155))).f_kind == v879)) {
yr1104_Put(&F.v8187, yr3187_Join(yr1055_T(y_str("F = *(struct ", 13)), F.v8183, yr1055_T(y_str(" *)arg;", 7))));
} else if ((v1273 > INT64_C(1))) {
yr1111_PutS(&F.v8187, y_str("F.up = up;", 10));
}
yr1119_Append(&F.v8187, &v990);
yr1111_PutS(&F.v8187, y_str("}", 1));
yr1119_Append(&v982, &F.v8187);
v990 = F.v8157;
v992 = F.v8159;
v1273 = F.v8161;
((rt_int *)(v1285).p)[y_ix1(v1285, v1273)] = yr1194_Fresh(y_str("unused", 6));
if ((!(F.v8175 == ((void *)0)))) {
((rt_int *)(v1285).p)[y_ix1(v1285, v1273)] = ((*(yR119 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v8175))).f_members))).f_name;
}
v1520 = F.v8163;
v1523 = F.v8165;
v1548 = F.v8167;
v1562 = F.v8169;
v1589 = F.v8171;
v1592 = F.v8173;
v1595 = F.v8175;
v1624 = F.v8177;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3334_DeclareStorage(void * a_p3335, void * a_p3336, rt_int a_p3337) {
struct yf3338 F;
memset((void *)&F, 0, sizeof F);
F.p3335 = a_p3335;
F.p3336 = a_p3336;
F.p3337 = a_p3337;
((*(yR119 *)rt_nil_check(F.p3335))).f_rep = F.p3336;
((*(yR119 *)rt_nil_check(F.p3335))).f_level = v1273;
((*(yR119 *)rt_nil_check(F.p3335))).f_cname = yr1194_Fresh(y_str("v", 1));
yr2317_DeclStorage(yr2398_CType(F.p3336), ((*(yR119 *)rt_nil_check(F.p3335))).f_cname);
if (yr2373_Deep(F.p3336)) {
yr1126_Emit(yr3187_Join(yr1055_T(y_str("y_init(", 7)), yr2404_DescOf(F.p3336), yr3187_Join(yr1055_T(y_str(", &", 3)), yr2324_SymPath(F.p3335), yr1055_T(y_str(");", 2)))));
}
if ((((*(yR104 *)rt_nil_check(F.p3336))).f_kind == v828)) {
yr1126_Emit(yr3187_Join(yr2324_SymPath(F.p3335), yr1055_T(y_str(" = y_set_new(", 13)), yr3187_Join(yr2479_LoText(((*(yR104 *)rt_nil_check(F.p3336))).f_elem), yr1055_T(y_str(", ", 2)), yr3187_Join(yr2485_HiText(((*(yR104 *)rt_nil_check(F.p3336))).f_elem), yr1055_T(y_str(");", 2)), INT64_C(0)))));
}
if ((((*(yR104 *)rt_nil_check(F.p3336))).f_kind == v831)) {
yr3543_DeclareSignal(F.p3335, F.p3337);
}
if (yr2386_HoldsSignal(F.p3336)) {
yr3550_DeclareSignalArray(F.p3335, F.p3337);
}
if ((((*(yR104 *)rt_nil_check(F.p3336))).f_kind == v834)) {
yr1126_Emit(yr3187_Join(yr1055_T(y_str("rt_lock_init(&", 14)), yr2324_SymPath(F.p3335), yr1055_T(y_str(");", 2))));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3342_SimpleDecl(void * a_p3343) {
struct yf3344 F;
memset((void *)&F, 0, sizeof F);
F.p3343 = a_p3343;
F.v8255 = ((*(yR99 *)rt_nil_check(F.p3343))).f_kind;
if ((((F.v8255 == v633)) || ((F.v8255 == v636)))) {
F.v8257 = yr2580_MakeRep(((*(yR99 *)rt_nil_check(F.p3343))).f_b, INT64_C(0), 0);
yr2439_CheckRepresented(F.v8257, ((*(yR99 *)rt_nil_check(F.p3343))).f_line);
if ((((F.v8255 == v633)) && yr2392_NonAssignable(F.v8257))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3343))).f_line, y_str("signals, files and semaphores, and what holds them, are variables (VII.B)", 73));
}
F.v8261 = ((*(yR99 *)rt_nil_check(F.p3343))).f_a;
while ((!(F.v8261 == ((void *)0)))) {
if ((F.v8255 == v633)) {
F.v8263 = yr2202_NewSym(v858, ((*(yR99 *)rt_nil_check(F.v8261))).f_name);
} else {
F.v8263 = yr2202_NewSym(v855, ((*(yR99 *)rt_nil_check(F.v8261))).f_name);
}
yr3334_DeclareStorage(F.v8263, F.v8257, ((*(yR99 *)rt_nil_check(F.p3343))).f_line);
if ((!(((*(yR99 *)rt_nil_check(F.p3343))).f_c == ((void *)0)))) {
yr2839_Expr(((*(yR99 *)rt_nil_check(F.p3343))).f_c, F.v8257, &F.v8265, &F.v8259);
if ((F.v8255 == v633)) {
yr2790_Store(yr2324_SymPath(F.v8263), F.v8257, F.v8265, F.v8259, ((*(yR99 *)rt_nil_check(F.p3343))).f_line);
} else {
F.v8267 = yr3016_UserAssign(yr2324_SymPath(F.v8263), F.v8257, F.v8265, F.v8259, ((*(yR99 *)rt_nil_check(F.p3343))).f_line);
if ((!(F.v8267 == INT64_C(0)))) {
yr1126_Emit(F.v8267);
} else {
if ((((*(yR104 *)rt_nil_check(F.v8257))).f_opaque && (((rt_mod(((*(yR104 *)rt_nil_check(F.v8257))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3343))).f_line, ((*(yR104 *)rt_nil_check(F.v8257))).f_tname, y_str(" is opaque here: := is not exported to initialize it (X.B.3)", 60));
}
yr2790_Store(yr2324_SymPath(F.v8263), F.v8257, F.v8265, F.v8259, ((*(yR99 *)rt_nil_check(F.p3343))).f_line);
}
}
if ((F.v8255 == v633)) {
yr2691_Manifest(((*(yR99 *)rt_nil_check(F.p3343))).f_c, &F.v8269, &F.v8271);
if ((F.v8269 && yr2349_IsDiscrete(F.v8257))) {
((*(yR119 *)rt_nil_check(F.v8263))).f_hasmv = 1;
((*(yR119 *)rt_nil_check(F.v8263))).f_mval = F.v8271;
}
}
}
if ((!(((*(yR99 *)rt_nil_check(F.v8261))).f_a == ((void *)0)))) {
yr3355_AtLocation(F.v8263, ((*(yR99 *)rt_nil_check(F.v8261))).f_a);
}
yr2297_Define(F.v8263, ((*(yR99 *)rt_nil_check(F.v8261))).f_line);
F.v8261 = ((*(yR99 *)rt_nil_check(F.v8261))).f_next;
}
return;
}
if ((F.v8255 == v645)) {
F.v8257 = yr2580_MakeRep(((*(yR99 *)rt_nil_check(F.p3343))).f_b, ((*(yR99 *)rt_nil_check(F.p3343))).f_name, 0);
yr2439_CheckRepresented(F.v8257, ((*(yR99 *)rt_nil_check(F.p3343))).f_line);
F.v8263 = yr2202_NewSym(v861, ((*(yR99 *)rt_nil_check(F.p3343))).f_name);
((*(yR119 *)rt_nil_check(F.v8263))).f_rep = F.v8257;
yr2297_Define(F.v8263, ((*(yR99 *)rt_nil_check(F.p3343))).f_line);
yr2603_ResolvePending(((*(yR99 *)rt_nil_check(F.p3343))).f_name, F.v8257);
yr3348_NoteAlphabet(F.p3343, F.v8257);
return;
}
if ((F.v8255 == v642)) {
F.v8257 = yr2580_MakeRep(((*(yR99 *)rt_nil_check(F.p3343))).f_b, ((*(yR99 *)rt_nil_check(F.p3343))).f_name, 1);
if ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3343))).f_b))).f_kind == v666)) {
F.v8257 = yr2343_CopyRep(F.v8257);
((*(yR104 *)rt_nil_check(F.v8257))).f_tid = yr2574_NewTid(((*(yR99 *)rt_nil_check(F.p3343))).f_name);
((*(yR104 *)rt_nil_check(F.v8257))).f_tname = ((*(yR99 *)rt_nil_check(F.p3343))).f_name;
if (((((((*(yR104 *)rt_nil_check(F.v8257))).f_kind == v798)) || ((((*(yR104 *)rt_nil_check(F.v8257))).f_kind == v801))) || ((((*(yR104 *)rt_nil_check(F.v8257))).f_kind == v804)))) {
if ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3343))).f_b))).f_a == ((void *)0))) {
((*(yR104 *)rt_nil_check(F.v8257))).f_abstract = 1;
}
}
}
F.v8263 = yr2202_NewSym(v864, ((*(yR99 *)rt_nil_check(F.p3343))).f_name);
((*(yR119 *)rt_nil_check(F.v8263))).f_rep = F.v8257;
yr2297_Define(F.v8263, ((*(yR99 *)rt_nil_check(F.p3343))).f_line);
yr2603_ResolvePending(((*(yR99 *)rt_nil_check(F.p3343))).f_name, F.v8257);
yr3348_NoteAlphabet(F.p3343, F.v8257);
return;
}
if ((F.v8255 == v639)) {
F.v8261 = ((*(yR99 *)rt_nil_check(F.p3343))).f_a;
while ((!(F.v8261 == ((void *)0)))) {
F.v8263 = yr2202_NewSym(v882, ((*(yR99 *)rt_nil_check(F.v8261))).f_name);
((*(yR119 *)rt_nil_check(F.v8263))).f_level = v1273;
((*(yR119 *)rt_nil_check(F.v8263))).f_cname = yr1194_Fresh(y_str("lab", 3));
yr2297_Define(F.v8263, ((*(yR99 *)rt_nil_check(F.v8261))).f_line);
F.v8261 = ((*(yR99 *)rt_nil_check(F.v8261))).f_next;
}
return;
}
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3343))).f_line, y_str("not a simple declaration", 24));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3348_NoteAlphabet(void * a_p3349, void * a_p3350) {
struct yf3351 F;
memset((void *)&F, 0, sizeof F);
F.p3349 = a_p3349;
F.p3350 = a_p3350;
if ((((((*(yR104 *)rt_nil_check(F.p3350))).f_kind == v813)) && ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3349))).f_b))).f_kind == v672)))) {
F.v8290 = yr1888_NewNode(v663, ((*(yR99 *)rt_nil_check(F.p3349))).f_line);
((*(yR99 *)rt_nil_check(F.v8290))).f_name = ((*(yR99 *)rt_nil_check(F.p3349))).f_name;
((*(yR99 *)rt_nil_check(F.v8290))).f_rep = F.p3350;
((*(yR99 *)rt_nil_check(F.v8290))).f_next = v1471;
v1471 = F.v8290;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3355_AtLocation(void * a_p3356, void * a_p3357) {
struct yf3358 F;
memset((void *)&F, 0, sizeof F);
F.p3356 = a_p3356;
F.p3357 = a_p3357;
if ((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.p3356))).f_rep))).f_kind == v831)) {
yr3557_DeviceSignal(F.p3356, F.p3357);
return;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3362_Defer(void * a_p3363, rt_int a_p3364, void * a_p3365, rt_int a_p3366) {
struct yf3367 F;
memset((void *)&F, 0, sizeof F);
F.p3363 = a_p3363;
F.p3364 = a_p3364;
F.p3365 = a_p3365;
F.p3366 = a_p3366;
F.v8300 = v1267;
if ((v1749 >= INT64_C(20000))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3363))).f_line, y_str("too many routines for this implementation", 41));
}
v1749 = rt_range(rt_add(v1749, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1668).p)[y_ix1(v1668, v1749)] = F.p3363;
((rt_int *)(v1679).p)[y_ix1(v1679, v1749)] = F.p3364;
((rt_int *)(v1690).p)[y_ix1(v1690, v1749)] = v1270;
((void * *)(v1701).p)[y_ix1(v1701, v1749)] = v1755;
((void * *)(v1712).p)[y_ix1(v1712, v1749)] = F.p3365;
((rt_int *)(v1723).p)[y_ix1(v1723, v1749)] = F.p3366;
while (((*(yR124 *)rt_nil_check(((void * *)(v1265).p)[y_ix1(v1265, F.v8300)]))).f_closed) {
F.v8300 = rt_range(rt_sub(F.v8300, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
((rt_int *)(v1734).p)[y_ix1(v1734, v1749)] = rt_range(rt_add(v1752, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1736).p)[y_ix1(v1736, v1749)] = rt_range(rt_sub(v1267, F.v8300), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo8313 = rt_add(F.v8300, INT64_C(1));
F.hi8314 = v1267;
{ rt_int hi8318 = F.hi8314;
for (rt_int i8317 = F.lo8313; i8317 <= hi8318; i8317++) { F.c_8316 = i8317;
v1752 = rt_range(rt_add(v1752, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1747).p)[y_ix1(v1747, v1752)] = ((void * *)(v1265).p)[y_ix1(v1265, F.c_8316)];
if (i8317 == hi8318) break;
}}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3371_RunDeferred(rt_int a_p3372, rt_int a_p3373) {
struct yf3374 F;
memset((void *)&F, 0, sizeof F);
F.p3372 = a_p3372;
F.p3373 = a_p3373;
F.v8325 = rt_range(rt_add(F.p3372, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((F.v8325 <= v1749)) {
F.lo8336 = ((rt_int *)(v1734).p)[y_ix1(v1734, F.v8325)];
F.hi8337 = rt_sub((rt_add(((rt_int *)(v1734).p)[y_ix1(v1734, F.v8325)], ((rt_int *)(v1736).p)[y_ix1(v1736, F.v8325)])), INT64_C(1));
{ rt_int hi8341 = F.hi8337;
for (rt_int i8340 = F.lo8336; i8340 <= hi8341; i8340++) { F.c_8339 = i8340;
yr2215_ReopenScope(((void * *)(v1747).p)[y_ix1(v1747, F.c_8339)]);
if (i8340 == hi8341) break;
}}
F.v8329 = v1270;
F.v8331 = v1755;
v1270 = ((rt_int *)(v1690).p)[y_ix1(v1690, F.v8325)];
v1755 = ((void * *)(v1701).p)[y_ix1(v1701, F.v8325)];
if ((((rt_int *)(v1679).p)[y_ix1(v1679, F.v8325)] == INT64_C(1))) {
yr3328_RoutineBody(((void * *)(v1668).p)[y_ix1(v1668, F.v8325)]);
} else {
yr3378_ModuleInit(F.v8325);
}
v1270 = F.v8329;
v1755 = F.v8331;
F.lo8346 = INT64_C(1);
F.hi8347 = ((rt_int *)(v1736).p)[y_ix1(v1736, F.v8325)];
{ rt_int hi8351 = F.hi8347;
for (rt_int i8350 = F.lo8346; i8350 <= hi8351; i8350++) { F.c_8349 = i8350;
yr2221_CloseScope();
if (i8350 == hi8351) break;
}}
F.v8325 = rt_range(rt_add(F.v8325, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1749 = F.p3372;
v1752 = F.p3373;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3378_ModuleInit(rt_int a_p3379) {
struct yf3380 F;
memset((void *)&F, 0, sizeof F);
F.p3379 = a_p3379;
F.v8357 = ((void * *)(v1668).p)[y_ix1(v1668, F.p3379)];
F.v8359 = v990;
F.v8361 = ((void * *)(v1712).p)[y_ix1(v1712, F.p3379)];
v990 = ((yR134){ .f_head = ((void *)0), .f_tail = ((void *)0) });
if (((rt_int *)(v1723).p)[y_ix1(v1723, F.p3379)]) {
yr1126_Emit(yr3187_Join(yr1055_T(y_str("y_mon_enter(", 12)), yr3520_MonitorPath(v1755), yr1055_T(y_str(");", 2))));
}
v1548 = rt_range(rt_add(v1548, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1535).p)[y_ix1(v1535, v1548)] = INT64_C(0);
((rt_int *)(v1546).p)[y_ix1(v1546, v1548)] = INT64_C(0);
yr3098_BlockStatements(((*(yR99 *)rt_nil_check(F.v8357))).f_c);
v1548 = rt_range(rt_sub(v1548, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (((rt_int *)(v1723).p)[y_ix1(v1723, F.p3379)]) {
yr1126_Emit(yr3187_Join(yr1055_T(y_str("y_mon_leave(", 12)), yr3520_MonitorPath(v1755), yr1055_T(y_str(");", 2))));
}
if ((!((v990).f_head == ((void *)0)))) {
((*(yR129 *)rt_nil_check((v990).f_tail))).f_next = ((*(yR129 *)rt_nil_check(F.v8361))).f_next;
((*(yR129 *)rt_nil_check(F.v8361))).f_next = (v990).f_head;
if (((F.v8359).f_tail == F.v8361)) {
(F.v8359).f_tail = (v990).f_tail;
}
}
v990 = F.v8359;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3384_Declarations(void * a_p3385) {
struct yf3386 F;
memset((void *)&F, 0, sizeof F);
F.p3385 = a_p3385;
F.v8375 = F.p3385;
F.v8377 = ((void * *)(v1296).p)[y_ix1(v1296, v1267)];
F.v8379 = v1749;
F.v8381 = v1752;
((void * *)(v1296).p)[y_ix1(v1296, v1267)] = F.p3385;
while ((!(F.v8375 == ((void *)0)))) {
v994 = ((*(yR99 *)rt_nil_check(F.v8375))).f_line;
((void * *)(v1307).p)[y_ix1(v1307, v1267)] = F.v8375;
if ((((((*(yR99 *)rt_nil_check(F.v8375))).f_kind == v648)) || ((((*(yR99 *)rt_nil_check(F.v8375))).f_kind == v660)))) {
if ((((*(yR99 *)rt_nil_check(F.v8375))).f_sym == ((void *)0))) {
yr3390_DeclareRoutine(F.v8375);
}
} else if (((((*(yR99 *)rt_nil_check(F.v8375))).f_kind == v618))) {
if ((((*(yR99 *)rt_nil_check(F.v8375))).f_ival == INT64_C(0))) {
yr3484_CompileModule(F.v8375);
}
} else if ((((*(yR99 *)rt_nil_check(F.v8375))).f_kind == v654)) {
yr3490_DeclareTemplate(F.v8375);
} else if ((((*(yR99 *)rt_nil_check(F.v8375))).f_kind == v657)) {
yr3496_Instantiate(F.v8375);
} else {
yr3342_SimpleDecl(F.v8375);
}
F.v8375 = ((*(yR99 *)rt_nil_check(F.v8375))).f_next;
}
((void * *)(v1307).p)[y_ix1(v1307, v1267)] = ((void *)0);
((void * *)(v1296).p)[y_ix1(v1296, v1267)] = F.v8377;
yr2610_CheckPending();
yr3455_ResolveLater(v1267);
if ((!((*(yR124 *)rt_nil_check(((void * *)(v1265).p)[y_ix1(v1265, v1267)]))).f_closed)) {
yr3371_RunDeferred(F.v8379, F.v8381);
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3390_DeclareRoutine(void * a_p3391) {
struct yf3392 F;
memset((void *)&F, 0, sizeof F);
F.p3391 = a_p3391;
if ((((*(yR99 *)rt_nil_check(F.p3391))).f_kind == v648)) {
yr3314_RoutineHeader(F.p3391, v870);
} else {
yr3314_RoutineHeader(F.p3391, v879);
}
if ((((*(yR99 *)rt_nil_check(F.p3391))).f_kind == v660)) {
yr3502_DeclareProcess(F.p3391);
}
yr3362_Defer(F.p3391, INT64_C(1), ((void *)0), 0);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3396_Alias(rt_int a_p3397, void * a_p3398) {
struct yf3399 F;
memset((void *)&F, 0, sizeof F);
F.p3397 = a_p3397;
F.p3398 = a_p3398;
F.v8391 = yr2202_NewSym(v888, F.p3397);
((*(yR119 *)rt_nil_check(F.v8391))).f_target = F.p3398;
((*(yR119 *)rt_nil_check(F.v8391))).f_readonly = ((*(yR119 *)rt_nil_check(F.p3398))).f_readonly;
{ void * rv8392 = F.v8391;
return rv8392; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3403_AddLits(void * * a_p3404, void * a_p3405, rt_int a_p3406) {
struct yf3407 F;
memset((void *)&F, 0, sizeof F);
F.p3404 = a_p3404;
F.p3405 = a_p3405;
F.p3406 = a_p3406;
if ((((F.p3406 > INT64_C(8))) || ((*(yR104 *)rt_nil_check(F.p3405))).f_opaque)) {
return;
}
if ((((*(yR104 *)rt_nil_check(F.p3405))).f_kind == v810)) {
F.v8398 = ((*(yR104 *)rt_nil_check(F.p3405))).f_lits;
while ((!(F.v8398 == ((void *)0)))) {
F.v8400 = yr2290_FindLit(((*(yR99 *)rt_nil_check(F.v8398))).f_name, F.p3405);
if ((!(F.v8400 == ((void *)0)))) {
F.v8400 = yr3396_Alias(((*(yR99 *)rt_nil_check(F.v8398))).f_name, F.v8400);
((*(yR119 *)rt_nil_check(F.v8400))).f_mnext = (*F.p3404);
(*F.p3404) = F.v8400;
}
F.v8398 = ((*(yR99 *)rt_nil_check(F.v8398))).f_next;
}
} else if ((((*(yR104 *)rt_nil_check(F.p3405))).f_kind == v819)) {
F.v8402 = ((*(yR104 *)rt_nil_check(F.p3405))).f_fields;
while ((!(F.v8402 == ((void *)0)))) {
yr3403_AddLits(&(*F.p3404), ((*(yR109 *)rt_nil_check(F.v8402))).f_rep, rt_range(rt_add(F.p3406, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v8402 = ((*(yR109 *)rt_nil_check(F.v8402))).f_next;
}
} else if (((((((*(yR104 *)rt_nil_check(F.p3405))).f_kind == v816)) || ((((*(yR104 *)rt_nil_check(F.p3405))).f_kind == v828))) || ((((*(yR104 *)rt_nil_check(F.p3405))).f_kind == v825)))) {
yr3403_AddLits(&(*F.p3404), ((*(yR104 *)rt_nil_check(F.p3405))).f_elem, rt_range(rt_add(F.p3406, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3411_Provides(void * a_p3412, rt_int a_p3413) {
struct yf3414 F;
memset((void *)&F, 0, sizeof F);
F.p3412 = a_p3412;
F.p3413 = a_p3413;
F.v8412 = ((*(yR99 *)rt_nil_check(F.p3412))).f_b;
if ((((*(yR99 *)rt_nil_check(F.p3412))).f_name == F.p3413)) {
{ rt_int rv8414 = 1;
return rv8414; }
}
while ((!(F.v8412 == ((void *)0)))) {
if ((((!(((*(yR99 *)rt_nil_check(F.v8412))).f_ival == INT64_C(0)))) && ((((*(yR99 *)rt_nil_check(F.v8412))).f_ival == F.p3413)))) {
{ rt_int rv8417 = 1;
return rv8417; }
}
if ((((((*(yR99 *)rt_nil_check(F.v8412))).f_ival == INT64_C(0))) && ((((*(yR99 *)rt_nil_check(F.v8412))).f_name == F.p3413)))) {
{ rt_int rv8420 = 1;
return rv8420; }
}
F.v8412 = ((*(yR99 *)rt_nil_check(F.v8412))).f_next;
}
{ rt_int rv8422 = 0;
return rv8422; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3418_ImportLater(rt_int a_p3419, rt_int a_p3420, void * * a_p3421) {
struct yf3422 F;
memset((void *)&F, 0, sizeof F);
F.p3419 = a_p3419;
F.p3420 = a_p3420;
F.p3421_o = a_p3421;
F.p3421 = ((void *)0);
if ((v1267 < INT64_C(0))) {
{ rt_int rv8431 = INT64_C(0);
(*F.p3421_o) = F.p3421;
return rv8431; }
}
F.v8428 = ((void * *)(v1296).p)[y_ix1(v1296, v1267)];
while ((!(F.v8428 == ((void *)0)))) {
if (((((((*(yR99 *)rt_nil_check(F.v8428))).f_kind == v618)) && ((!(((*(yR99 *)rt_nil_check(F.v8428))).f_ival == INT64_C(2))))) && yr3411_Provides(F.v8428, F.p3419))) {
if ((((*(yR99 *)rt_nil_check(F.v8428))).f_ival == INT64_C(1))) {
F.p3421 = F.v8428;
{ rt_int rv8435 = INT64_C(2);
(*F.p3421_o) = F.p3421;
return rv8435; }
}
yr3484_CompileModule(F.v8428);
{ rt_int rv8437 = INT64_C(1);
(*F.p3421_o) = F.p3421;
return rv8437; }
}
if ((((((((*(yR99 *)rt_nil_check(F.v8428))).f_kind == v648)) || ((((*(yR99 *)rt_nil_check(F.v8428))).f_kind == v660)))) && ((((*(yR99 *)rt_nil_check(F.v8428))).f_name == F.p3419)))) {
{ rt_int rv8439 = INT64_C(3);
(*F.p3421_o) = F.p3421;
return rv8439; }
}
if ((((!(((*(yR99 *)rt_nil_check(F.v8428))).f_kind == v618))) && yr2257_DeclaredFrom(yr3426_OneDecl(F.v8428), F.p3419))) {
yr1180_FailN(F.p3420, F.p3419, y_str(" is declared after the module that imports it: a simple declaration precedes what uses it (X.G)", 95));
}
F.v8428 = ((*(yR99 *)rt_nil_check(F.v8428))).f_next;
}
{ rt_int rv8442 = INT64_C(0);
(*F.p3421_o) = F.p3421;
return rv8442; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3426_OneDecl(void * a_p3427) {
struct yf3428 F;
memset((void *)&F, 0, sizeof F);
F.p3427 = a_p3427;
({ F.v8446 = rt_alloc(sizeof(yR99)); });
(*(yR99 *)rt_nil_check(F.v8446)) = (*(yR99 *)rt_nil_check(F.p3427));
((*(yR99 *)rt_nil_check(F.v8446))).f_next = ((void *)0);
{ void * rv8447 = F.v8446;
return rv8447; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3432_Lazy(rt_int a_p3433, rt_int a_p3434, void * a_p3435, rt_int a_p3436) {
struct yf3437 F;
memset((void *)&F, 0, sizeof F);
F.p3433 = a_p3433;
F.p3434 = a_p3434;
F.p3435 = a_p3435;
F.p3436 = a_p3436;
F.v8454 = yr2202_NewSym(v888, F.p3433);
if ((v1817 >= INT64_C(10000))) {
yr1172_FailS(F.p3436, y_str("too many imports translated later", 33));
}
v1817 = rt_range(rt_add(v1817, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1780).p)[y_ix1(v1780, v1817)] = F.v8454;
((rt_int *)(v1791).p)[y_ix1(v1791, v1817)] = F.p3434;
((void * *)(v1802).p)[y_ix1(v1802, v1817)] = F.p3435;
((rt_int *)(v1813).p)[y_ix1(v1813, v1817)] = v1267;
((rt_int *)(v1815).p)[y_ix1(v1815, v1817)] = F.p3436;
{ void * rv8459 = F.v8454;
return rv8459; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3441_SetLazy(rt_int a_p3442, void * a_p3443) {
struct yf3444 F;
memset((void *)&F, 0, sizeof F);
F.p3442 = a_p3442;
F.p3443 = a_p3443;
((*(yR119 *)rt_nil_check(((void * *)(v1780).p)[y_ix1(v1780, F.p3442)]))).f_target = F.p3443;
((*(yR119 *)rt_nil_check(((void * *)(v1780).p)[y_ix1(v1780, F.p3442)]))).f_readonly = ((*(yR119 *)rt_nil_check(F.p3443))).f_readonly;
((void * *)(v1780).p)[y_ix1(v1780, F.p3442)] = ((void *)0);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3448_ResolveFrom(void * a_p3449, void * a_p3450) {
struct yf3451 F;
memset((void *)&F, 0, sizeof F);
F.p3449 = a_p3449;
F.p3450 = a_p3450;
F.lo8471 = INT64_C(1);
F.hi8472 = v1817;
{ rt_int hi8476 = F.hi8472;
for (rt_int i8475 = F.lo8471; i8475 <= hi8476; i8475++) { F.c_8474 = i8475;
if ((((!(((void * *)(v1780).p)[y_ix1(v1780, F.c_8474)] == ((void *)0)))) && ((((void * *)(v1802).p)[y_ix1(v1802, F.c_8474)] == F.p3449)))) {
F.v8467 = ((*(yR119 *)rt_nil_check(F.p3450))).f_members;
while ((((!(F.v8467 == ((void *)0)))) && ((!(((*(yR119 *)rt_nil_check(F.v8467))).f_name == ((rt_int *)(v1791).p)[y_ix1(v1791, F.c_8474)]))))) {
F.v8467 = ((*(yR119 *)rt_nil_check(F.v8467))).f_mnext;
}
if ((F.v8467 == ((void *)0))) {
yr1180_FailN(((rt_int *)(v1815).p)[y_ix1(v1815, F.c_8474)], ((rt_int *)(v1791).p)[y_ix1(v1791, F.c_8474)], y_str(" is not exported by that module", 31));
}
yr3441_SetLazy(rt_range(F.c_8474, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), F.v8467);
}
if (i8475 == hi8476) break;
}}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3455_ResolveLater(rt_int a_p3456) {
struct yf3457 F;
memset((void *)&F, 0, sizeof F);
F.p3456 = a_p3456;
F.lo8485 = INT64_C(1);
F.hi8486 = v1817;
{ rt_int hi8490 = F.hi8486;
for (rt_int i8489 = F.lo8485; i8489 <= hi8490; i8489++) { F.c_8488 = i8489;
if (((((!(((void * *)(v1780).p)[y_ix1(v1780, F.c_8488)] == ((void *)0)))) && ((((void * *)(v1802).p)[y_ix1(v1802, F.c_8488)] == ((void *)0)))) && ((((rt_int *)(v1813).p)[y_ix1(v1813, F.c_8488)] == F.p3456)))) {
F.v8481 = yr2232_Find(((rt_int *)(v1791).p)[y_ix1(v1791, F.c_8488)]);
if ((F.v8481 == ((void *)0))) {
yr1180_FailN(((rt_int *)(v1815).p)[y_ix1(v1815, F.c_8488)], ((rt_int *)(v1791).p)[y_ix1(v1791, F.c_8488)], y_str(" is not declared around this module (X.B.2)", 43));
}
yr3441_SetLazy(rt_range(F.c_8488, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), F.v8481);
}
if (i8489 == hi8490) break;
}}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3461_LazyModule(void * a_p3462, void * * a_p3463, rt_int a_p3464) {
struct yf3465 F;
memset((void *)&F, 0, sizeof F);
F.p3462 = a_p3462;
F.p3463 = a_p3463;
F.p3464 = a_p3464;
F.v8497 = ((*(yR99 *)rt_nil_check(F.p3462))).f_b;
while ((!(F.v8497 == ((void *)0)))) {
F.v8501 = ((*(yR99 *)rt_nil_check(F.v8497))).f_name;
if ((!(((*(yR99 *)rt_nil_check(F.v8497))).f_ival == INT64_C(0)))) {
F.v8501 = rt_range(((*(yR99 *)rt_nil_check(F.v8497))).f_ival, INT64_C(0), INT64_C(4000000));
}
if (((((!(F.v8501 == v525))) && ((!(F.v8501 == v579)))) && ((!(F.v8501 == v564))))) {
F.v8499 = yr3432_Lazy(F.v8501, F.v8501, F.p3462, F.p3464);
((*(yR119 *)rt_nil_check(F.v8499))).f_mnext = (*F.p3463);
(*F.p3463) = F.v8499;
}
F.v8497 = ((*(yR99 *)rt_nil_check(F.v8497))).f_next;
}
F.v8499 = yr3432_Lazy(((*(yR99 *)rt_nil_check(F.p3462))).f_name, ((*(yR99 *)rt_nil_check(F.p3462))).f_name, ((void *)0), F.p3464);
((*(yR119 *)rt_nil_check(F.v8499))).f_mnext = (*F.p3463);
(*F.p3463) = F.v8499;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3469_ResolveItem(void * a_p3470, void * * a_p3471, rt_int a_p3472) {
struct yf3473 F;
memset((void *)&F, 0, sizeof F);
F.p3470 = a_p3470;
F.p3471 = a_p3471;
F.p3472 = a_p3472;
F.v8518 = ((*(yR99 *)rt_nil_check(F.p3470))).f_flag;
if (((F.p3472 && ((((*(yR99 *)rt_nil_check(F.p3470))).f_text == INT64_C(0)))) && (((((((*(yR99 *)rt_nil_check(F.p3470))).f_name == v525)) || ((((*(yR99 *)rt_nil_check(F.p3470))).f_name == v579))) || ((((*(yR99 *)rt_nil_check(F.p3470))).f_name == v564)))))) {
if ((yr2238_FindHere(((*(yR99 *)rt_nil_check(F.p3470))).f_name) == ((void *)0))) {
return;
}
}
F.v8514 = ((*(yR99 *)rt_nil_check(F.p3470))).f_name;
if ((!(((*(yR99 *)rt_nil_check(F.p3470))).f_ival == INT64_C(0)))) {
F.v8514 = rt_range(((*(yR99 *)rt_nil_check(F.p3470))).f_ival, INT64_C(0), INT64_C(4000000));
}
if ((!(((*(yR99 *)rt_nil_check(F.p3470))).f_text == INT64_C(0)))) {
if ((((!F.p3472)) && ((yr2232_Find(((*(yR99 *)rt_nil_check(F.p3470))).f_text) == ((void *)0))))) {
F.v8520 = yr3418_ImportLater(((*(yR99 *)rt_nil_check(F.p3470))).f_text, ((*(yR99 *)rt_nil_check(F.p3470))).f_line, &F.v8522);
if ((F.v8520 == INT64_C(2))) {
F.v8512 = yr3432_Lazy(F.v8514, ((*(yR99 *)rt_nil_check(F.p3470))).f_name, F.v8522, ((*(yR99 *)rt_nil_check(F.p3470))).f_line);
((*(yR119 *)rt_nil_check(F.v8512))).f_mnext = (*F.p3471);
(*F.p3471) = F.v8512;
return;
}
}
F.v8510 = yr2330_Real(yr2244_Lookup(((*(yR99 *)rt_nil_check(F.p3470))).f_text, ((*(yR99 *)rt_nil_check(F.p3470))).f_line));
if ((!(((*(yR119 *)rt_nil_check(F.v8510))).f_kind == v873))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3470))).f_line, ((*(yR99 *)rt_nil_check(F.p3470))).f_text, y_str(" is not a module", 16));
}
F.v8508 = ((*(yR119 *)rt_nil_check(F.v8510))).f_members;
while ((((!(F.v8508 == ((void *)0)))) && ((!(((*(yR119 *)rt_nil_check(F.v8508))).f_name == ((*(yR99 *)rt_nil_check(F.p3470))).f_name))))) {
F.v8508 = ((*(yR119 *)rt_nil_check(F.v8508))).f_mnext;
}
if ((F.v8508 == ((void *)0))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3470))).f_line, ((*(yR99 *)rt_nil_check(F.p3470))).f_name, y_str(" is not exported by that module", 31));
}
} else {
if (F.p3472) {
F.v8508 = yr2238_FindHere(((*(yR99 *)rt_nil_check(F.p3470))).f_name);
} else {
F.v8508 = yr2232_Find(((*(yR99 *)rt_nil_check(F.p3470))).f_name);
}
if ((((F.v8508 == ((void *)0))) && (!F.p3472))) {
F.v8520 = yr3418_ImportLater(((*(yR99 *)rt_nil_check(F.p3470))).f_name, ((*(yR99 *)rt_nil_check(F.p3470))).f_line, &F.v8522);
if ((((F.v8520 == INT64_C(2))) && ((((*(yR99 *)rt_nil_check(F.v8522))).f_name == ((*(yR99 *)rt_nil_check(F.p3470))).f_name)))) {
if ((((!(F.v8518 == INT64_C(0)))) || ((!(((*(yR99 *)rt_nil_check(F.p3470))).f_ival == INT64_C(0)))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3470))).f_line, y_str("a module name in a list takes no attribute and no AS (X.B.3)", 60));
}
yr3461_LazyModule(F.v8522, &(*F.p3471), ((*(yR99 *)rt_nil_check(F.p3470))).f_line);
return;
}
if ((F.v8520 >= INT64_C(2))) {
F.v8512 = yr3432_Lazy(F.v8514, ((*(yR99 *)rt_nil_check(F.p3470))).f_name, F.v8522, ((*(yR99 *)rt_nil_check(F.p3470))).f_line);
((*(yR119 *)rt_nil_check(F.v8512))).f_mnext = (*F.p3471);
(*F.p3471) = F.v8512;
return;
}
F.v8508 = yr2232_Find(((*(yR99 *)rt_nil_check(F.p3470))).f_name);
}
if ((F.v8508 == ((void *)0))) {
if (F.p3472) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3470))).f_line, ((*(yR99 *)rt_nil_check(F.p3470))).f_name, y_str(" is not declared in this module", 31));
} else {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3470))).f_line, ((*(yR99 *)rt_nil_check(F.p3470))).f_name, y_str(" is not declared around this module (X.B.2)", 43));
}
}
}
F.v8510 = yr2330_Real(F.v8508);
if ((((((*(yR119 *)rt_nil_check(F.v8510))).f_kind == v873)) && ((((*(yR99 *)rt_nil_check(F.p3470))).f_text == INT64_C(0))))) {
if ((((!(F.v8518 == INT64_C(0)))) || ((!(((*(yR99 *)rt_nil_check(F.p3470))).f_ival == INT64_C(0)))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3470))).f_line, y_str("a module name in a list takes no attribute and no AS (X.B.3)", 60));
}
F.v8512 = ((*(yR119 *)rt_nil_check(F.v8510))).f_members;
while ((!(F.v8512 == ((void *)0)))) {
F.v8508 = yr3396_Alias(((*(yR119 *)rt_nil_check(F.v8512))).f_name, F.v8512);
((*(yR119 *)rt_nil_check(F.v8508))).f_mnext = (*F.p3471);
(*F.p3471) = F.v8508;
F.v8512 = ((*(yR119 *)rt_nil_check(F.v8512))).f_mnext;
}
if ((!F.p3472)) {
F.v8508 = yr3396_Alias(((*(yR119 *)rt_nil_check(F.v8510))).f_name, F.v8510);
((*(yR119 *)rt_nil_check(F.v8508))).f_mnext = (*F.p3471);
(*F.p3471) = F.v8508;
}
return;
}
F.v8512 = yr3396_Alias(F.v8514, F.v8508);
if (F.p3472) {
if ((((((*(yR119 *)rt_nil_check(F.v8510))).f_kind == v861)) || ((((*(yR119 *)rt_nil_check(F.v8510))).f_kind == v864)))) {
if ((((F.v8518 == v423)) || ((F.v8518 == v477)))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3470))).f_line, y_str("READONLY and VAR are for variables", 34));
}
if ((((!(F.v8518 == v468))) || ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v8510))).f_rep))).f_opaque)) {
F.v8516 = yr2343_CopyRep(((*(yR119 *)rt_nil_check(F.v8510))).f_rep);
((*(yR104 *)rt_nil_check(F.v8516))).f_opaque = 1;
((*(yR104 *)rt_nil_check(F.v8516))).f_opaqueops = v1768;
((*(yR119 *)rt_nil_check(F.v8512))).f_target = yr2202_NewSym(((*(yR119 *)rt_nil_check(F.v8510))).f_kind, ((*(yR119 *)rt_nil_check(F.v8510))).f_name);
((*(yR119 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v8512))).f_target))).f_rep = F.v8516;
((*(yR119 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v8512))).f_target))).f_decl = ((*(yR119 *)rt_nil_check(F.v8510))).f_decl;
} else {
yr3403_AddLits(&(*F.p3471), ((*(yR119 *)rt_nil_check(F.v8510))).f_rep, INT64_C(0));
}
} else if ((((*(yR119 *)rt_nil_check(F.v8510))).f_kind == v855)) {
if ((((F.v8518 == v390)) || ((F.v8518 == v468)))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3470))).f_line, y_str("OPAQUE and TRANSPARENT are for types", 36));
}
if ((!(F.v8518 == v477))) {
((*(yR119 *)rt_nil_check(F.v8512))).f_readonly = 1;
}
} else if ((!(F.v8518 == INT64_C(0)))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3470))).f_line, y_str("an attribute is for a type, a representation or a variable", 58));
}
if ((((((*(yR119 *)rt_nil_check(F.v8510))).f_kind == v855)) && ((((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v8510))).f_rep))).f_kind == v831)) || yr2386_HoldsSignal(((*(yR119 *)rt_nil_check(F.v8510))).f_rep))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3470))).f_line, y_str("a signal may not be exported from its monitor (X.E.4)", 53));
}
} else if ((((((*(yR119 *)rt_nil_check(F.v8510))).f_kind == v861)) || ((((*(yR119 *)rt_nil_check(F.v8510))).f_kind == v864)))) {
yr3403_AddLits(&(*F.p3471), ((*(yR119 *)rt_nil_check(F.v8510))).f_rep, INT64_C(0));
}
((*(yR119 *)rt_nil_check(F.v8512))).f_mnext = (*F.p3471);
(*F.p3471) = F.v8512;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3477_DefineAll(void * a_p3478, rt_int a_p3479) {
struct yf3480 F;
memset((void *)&F, 0, sizeof F);
F.p3478 = a_p3478;
F.p3479 = a_p3479;
F.v8553 = F.p3478;
F.v8555 = F.p3478;
F.v8557 = F.p3478;
while ((!(F.v8553 == ((void *)0)))) {
F.v8555 = ((*(yR119 *)rt_nil_check(F.v8553))).f_mnext;
F.v8557 = yr2238_FindHere(((*(yR119 *)rt_nil_check(F.v8553))).f_name);
if (((!yr2278_Resolved(F.v8553)) || ((((!(F.v8557 == ((void *)0)))) && (!yr2278_Resolved(F.v8557)))))) {
if ((!(F.v8557 == ((void *)0)))) {
yr1180_FailN(F.p3479, ((*(yR119 *)rt_nil_check(F.v8553))).f_name, y_str(" comes into this scope twice", 28));
}
yr2297_Define(F.v8553, F.p3479);
} else if ((((F.v8557 == ((void *)0))) || ((!(yr2330_Real(F.v8557) == yr2330_Real(F.v8553)))))) {
if (((((!(F.v8557 == ((void *)0)))) && ((((*(yR119 *)rt_nil_check(yr2330_Real(F.v8553)))).f_kind == v867))) && ((((*(yR119 *)rt_nil_check(yr2330_Real(F.v8557)))).f_kind == v867)))) {
yr2297_Define(F.v8553, F.p3479);
} else if ((F.v8557 == ((void *)0))) {
yr2297_Define(F.v8553, F.p3479);
} else {
yr1180_FailN(F.p3479, ((*(yR119 *)rt_nil_check(F.v8553))).f_name, y_str(" comes into this scope twice", 28));
}
}
F.v8553 = F.v8555;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3484_CompileModule(void * a_p3485) {
struct yf3486 F;
memset((void *)&F, 0, sizeof F);
F.p3485 = a_p3485;
F.v8587 = 0;
((*(yR99 *)rt_nil_check(F.p3485))).f_ival = INT64_C(1);
F.v8563 = ((void *)0);
F.v8579 = ((*(yR99 *)rt_nil_check(F.p3485))).f_a;
while ((!(F.v8579 == ((void *)0)))) {
yr3469_ResolveItem(F.v8579, &F.v8563, 0);
F.v8579 = ((*(yR99 *)rt_nil_check(F.v8579))).f_next;
}
F.v8573 = v1755;
if ((((((*(yR99 *)rt_nil_check(F.p3485))).f_flag == INT64_C(1))) && ((v1755 == ((void *)0))))) {
F.v8575 = yr2202_NewSym(v855, ((*(yR99 *)rt_nil_check(F.p3485))).f_name);
((*(yR119 *)rt_nil_check(F.v8575))).f_level = v1273;
((*(yR119 *)rt_nil_check(F.v8575))).f_cname = yr1194_Fresh(y_str("mon", 3));
((*(yR119 *)rt_nil_check(F.v8575))).f_rep = v1342;
yr2317_DeclStorage(yr1055_T(y_str("ymon", 4)), ((*(yR119 *)rt_nil_check(F.v8575))).f_cname);
yr1126_Emit(yr3187_Join(yr1055_T(y_str("y_mon_init(&", 12)), yr2304_Path(v1273, ((*(yR119 *)rt_nil_check(F.v8575))).f_cname), yr1055_T(y_str(");", 2))));
v1755 = F.v8575;
F.v8587 = 1;
}
yr2209_OpenScope(1);
((void * *)(v1766).p)[y_ix1(v1766, v1267)] = ((void *)0);
F.v8583 = v1270;
v1270 = v1267;
yr3477_DefineAll(F.v8563, ((*(yR99 *)rt_nil_check(F.p3485))).f_line);
yr3384_Declarations(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3485))).f_c))).f_a);
yr1126_Emit(yr3187_Join(yr1055_T(y_str("/* ", 3)), ((*(yR99 *)rt_nil_check(F.p3485))).f_name, yr1055_T(y_str(" */", 3))));
yr3362_Defer(F.p3485, INT64_C(2), (v990).f_tail, F.v8587);
v1768 = INT64_C(0);
F.v8579 = ((*(yR99 *)rt_nil_check(F.p3485))).f_b;
while ((!(F.v8579 == ((void *)0)))) {
if ((((((*(yR99 *)rt_nil_check(F.v8579))).f_text == INT64_C(0))) && ((yr2238_FindHere(((*(yR99 *)rt_nil_check(F.v8579))).f_name) == ((void *)0))))) {
if ((((*(yR99 *)rt_nil_check(F.v8579))).f_name == v525)) {
v1768 = rt_range(rt_add(v1768, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((((((*(yR99 *)rt_nil_check(F.v8579))).f_name == v579)) || ((((*(yR99 *)rt_nil_check(F.v8579))).f_name == v564)))) {
if (((rt_div(v1768, INT64_C(2))) == INT64_C(0))) {
v1768 = rt_range(rt_add(v1768, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
}
F.v8579 = ((*(yR99 *)rt_nil_check(F.v8579))).f_next;
}
F.v8565 = ((void *)0);
F.v8579 = ((*(yR99 *)rt_nil_check(F.p3485))).f_b;
while ((!(F.v8579 == ((void *)0)))) {
yr3469_ResolveItem(F.v8579, &F.v8565, 1);
F.v8579 = ((*(yR99 *)rt_nil_check(F.v8579))).f_next;
}
F.v8581 = ((void * *)(v1766).p)[y_ix1(v1766, v1267)];
v1270 = F.v8583;
yr2221_CloseScope();
while ((!(F.v8581 == ((void *)0)))) {
F.v8579 = ((*(yR99 *)rt_nil_check(F.v8581))).f_next;
((*(yR99 *)rt_nil_check(F.v8581))).f_next = ((void * *)(v1766).p)[y_ix1(v1766, v1267)];
((void * *)(v1766).p)[y_ix1(v1766, v1267)] = F.v8581;
F.v8581 = F.v8579;
}
v1755 = F.v8573;
F.v8569 = yr2202_NewSym(v873, ((*(yR99 *)rt_nil_check(F.p3485))).f_name);
((*(yR119 *)rt_nil_check(F.v8569))).f_members = F.v8565;
yr2297_Define(F.v8569, ((*(yR99 *)rt_nil_check(F.p3485))).f_line);
F.v8571 = F.v8565;
F.v8565 = ((void *)0);
while ((!(F.v8571 == ((void *)0)))) {
F.v8577 = ((*(yR119 *)rt_nil_check(F.v8571))).f_mnext;
F.v8567 = yr3396_Alias(((*(yR119 *)rt_nil_check(F.v8571))).f_name, F.v8571);
((*(yR119 *)rt_nil_check(F.v8567))).f_readonly = ((*(yR119 *)rt_nil_check(F.v8571))).f_readonly;
((*(yR119 *)rt_nil_check(F.v8567))).f_mnext = F.v8565;
F.v8565 = F.v8567;
F.v8571 = F.v8577;
}
((*(yR119 *)rt_nil_check(F.v8569))).f_members = F.v8565;
((*(yR99 *)rt_nil_check(F.p3485))).f_ival = INT64_C(2);
yr3448_ResolveFrom(F.p3485, F.v8569);
F.v8571 = F.v8565;
while ((!(F.v8571 == ((void *)0)))) {
F.v8577 = yr3396_Alias(((*(yR119 *)rt_nil_check(F.v8571))).f_name, F.v8571);
((*(yR119 *)rt_nil_check(F.v8577))).f_readonly = ((*(yR119 *)rt_nil_check(F.v8571))).f_readonly;
if ((yr2238_FindHere(((*(yR119 *)rt_nil_check(F.v8571))).f_name) == ((void *)0))) {
yr2297_Define(F.v8577, ((*(yR99 *)rt_nil_check(F.p3485))).f_line);
} else if ((((((*(yR119 *)rt_nil_check(yr2238_FindHere(((*(yR119 *)rt_nil_check(F.v8571))).f_name)))).f_kind == v888)) && ((!(yr2330_Real(yr2238_FindHere(((*(yR119 *)rt_nil_check(F.v8571))).f_name)) == yr2330_Real(F.v8571)))))) {
yr2297_Define(F.v8577, ((*(yR99 *)rt_nil_check(F.p3485))).f_line);
} else if ((!(((*(yR119 *)rt_nil_check(yr2330_Real(F.v8571)))).f_kind == v867))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3485))).f_line, ((*(yR119 *)rt_nil_check(F.v8571))).f_name, y_str(" is exported into a scope that has it already", 45));
}
F.v8571 = ((*(yR119 *)rt_nil_check(F.v8571))).f_mnext;
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3490_DeclareTemplate(void * a_p3491) {
struct yf3492 F;
memset((void *)&F, 0, sizeof F);
F.p3491 = a_p3491;
F.v8616 = yr2202_NewSym(v876, ((*(yR99 *)rt_nil_check(F.p3491))).f_name);
((*(yR119 *)rt_nil_check(F.v8616))).f_decl = F.p3491;
yr2297_Define(F.v8616, ((*(yR99 *)rt_nil_check(F.p3491))).f_line);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3496_Instantiate(void * a_p3497) {
struct yf3498 F;
memset((void *)&F, 0, sizeof F);
F.p3497 = a_p3497;
F.v8620 = yr2330_Real(yr2244_Lookup(((*(yR99 *)rt_nil_check(F.p3497))).f_name, ((*(yR99 *)rt_nil_check(F.p3497))).f_line));
if ((!(((*(yR119 *)rt_nil_check(F.v8620))).f_kind == v876))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3497))).f_line, ((*(yR99 *)rt_nil_check(F.p3497))).f_name, y_str(" is not a template", 18));
}
F.v8622 = ((*(yR119 *)rt_nil_check(F.v8620))).f_decl;
if ((!(yr1903_Count(((*(yR99 *)rt_nil_check(F.v8622))).f_a) == yr1903_Count(((*(yR99 *)rt_nil_check(F.p3497))).f_a)))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3497))).f_line, ((*(yR99 *)rt_nil_check(F.p3497))).f_name, y_str(": the number of actuals is wrong", 32));
}
F.v8628 = rt_range(rt_add(v1207, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo8644 = ((*(yR99 *)rt_nil_check(F.v8622))).f_ival;
F.hi8645 = rt_sub(((*(yR99 *)rt_nil_check(F.v8622))).f_flag, INT64_C(1));
{ rt_int hi8649 = F.hi8645;
for (rt_int i8648 = F.lo8644; i8648 <= hi8649; i8648++) { F.c_8647 = i8648;
F.v8632 = ((rt_int *)(v1201).p)[y_ix1(v1201, F.c_8647)];
F.v8634 = ((rt_int *)(v1203).p)[y_ix1(v1203, F.c_8647)];
if ((F.v8632 == v201)) {
F.v8624 = ((*(yR99 *)rt_nil_check(F.v8622))).f_a;
F.v8626 = ((*(yR99 *)rt_nil_check(F.p3497))).f_a;
while ((!(F.v8624 == ((void *)0)))) {
if ((((((*(yR99 *)rt_nil_check(F.v8624))).f_name == F.v8634)) && ((F.v8632 == v201)))) {
if ((((*(yR99 *)rt_nil_check(F.v8626))).f_flag == INT64_C(1))) {
F.v8632 = v210;
F.v8634 = ((*(yR99 *)rt_nil_check(F.v8626))).f_ival;
} else {
F.v8634 = ((*(yR99 *)rt_nil_check(F.v8626))).f_name;
if ((F.v8634 <= v486)) {
F.v8632 = v204;
} else if ((F.v8634 <= v615)) {
F.v8632 = v207;
}
}
}
F.v8624 = ((*(yR99 *)rt_nil_check(F.v8624))).f_next;
F.v8626 = ((*(yR99 *)rt_nil_check(F.v8626))).f_next;
}
}
v1207 = rt_range(rt_add(v1207, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1201).p)[y_ix1(v1201, v1207)] = F.v8632;
((rt_int *)(v1203).p)[y_ix1(v1203, v1207)] = F.v8634;
((rt_int *)(v1205).p)[y_ix1(v1205, v1207)] = ((rt_int *)(v1205).p)[y_ix1(v1205, F.c_8647)];
if (i8648 == hi8649) break;
}}
v1207 = rt_range(rt_add(v1207, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1201).p)[y_ix1(v1201, v1207)] = v198;
((rt_int *)(v1203).p)[y_ix1(v1203, v1207)] = INT64_C(0);
((rt_int *)(v1205).p)[y_ix1(v1205, v1207)] = ((*(yR99 *)rt_nil_check(F.p3497))).f_line;
F.v8630 = v1243;
v1243 = F.v8628;
F.v8636 = yr1993_ParseModule();
v1243 = F.v8630;
yr3484_CompileModule(F.v8636);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3502_DeclareProcess(void * a_p3503) {
struct yf3504 F;
memset((void *)&F, 0, sizeof F);
F.p3503 = a_p3503;
F.v8659 = ((*(yR99 *)rt_nil_check(F.p3503))).f_sym;
((*(yR119 *)rt_nil_check(F.v8659))).f_monitor = v1755;
yr2317_DeclStorage(yr1055_T(y_str("rt_taskdecl", 11)), yr3187_Join(((*(yR119 *)rt_nil_check(F.v8659))).f_cname, yr1055_T(y_str("_d", 2)), INT64_C(0)));
F.v8661 = yr1888_NewNode(v663, ((*(yR99 *)rt_nil_check(F.p3503))).f_line);
((*(yR99 *)rt_nil_check(F.v8661))).f_sym = F.v8659;
((*(yR99 *)rt_nil_check(F.v8661))).f_next = ((void * *)(v1766).p)[y_ix1(v1766, v1267)];
((void * *)(v1766).p)[y_ix1(v1766, v1267)] = F.v8661;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3508_AwaitProcesses(void) {
struct yf3509 F;
memset((void *)&F, 0, sizeof F);
F.v8667 = ((void * *)(v1766).p)[y_ix1(v1766, v1267)];
while ((!(F.v8667 == ((void *)0)))) {
yr1126_Emit(yr3187_Join(yr1055_T(y_str("rt_await_decl(&", 15)), yr2304_Path(rt_range(rt_sub(((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v8667))).f_sym))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr3187_Join(((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v8667))).f_sym))).f_cname, yr1055_T(y_str("_d", 2)), INT64_C(0))), yr1055_T(y_str(");", 2))));
F.v8667 = ((*(yR99 *)rt_nil_check(F.v8667))).f_next;
}
((void * *)(v1766).p)[y_ix1(v1766, v1267)] = ((void *)0);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3513_Activate(void * a_p3514, void * a_p3515) {
struct yf3516 F;
memset((void *)&F, 0, sizeof F);
F.p3514 = a_p3514;
F.p3515 = a_p3515;
F.v8698 = ((*(yR119 *)rt_nil_check(F.p3515))).f_decl;
yr2959_CompileArgs(((*(yR99 *)rt_nil_check(F.p3514))).f_a, F.p3515, &F.v8678, &F.v8680);
if ((!(F.v8680 == ((*(yR119 *)rt_nil_check(F.p3515))).f_nparams))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3514))).f_line, ((*(yR119 *)rt_nil_check(F.p3515))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
yr3009_NoteCall(F.p3515, ((*(yR99 *)rt_nil_check(F.p3514))).f_line);
yr3275_CheckActuals(F.p3515, F.v8678, ((*(yR99 *)rt_nil_check(F.p3514))).f_line);
F.v8686 = yr1194_Fresh(y_str("pf", 2));
yr1126_Emit(yr3187_Join(yr1055_T(y_str("{ struct ", 9)), ((*(yR119 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.p3515))).f_members))).f_name, yr3187_Join(yr1055_T(y_str(" *", 2)), F.v8686, yr3187_Join(yr1055_T(y_str(" = rt_alloc(sizeof *", 20)), F.v8686, yr1055_T(y_str(");", 2))))));
if ((((*(yR119 *)rt_nil_check(F.p3515))).f_level > INT64_C(1))) {
yr1126_Emit(yr3187_Join(F.v8686, yr1055_T(y_str("->up = ", 7)), yr3187_Join(yr2311_FramePtr(rt_range(rt_sub(((*(yR119 *)rt_nil_check(F.p3515))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))), yr1055_T(y_str(";", 1)), INT64_C(0))));
}
F.v8684 = ((*(yR119 *)rt_nil_check(F.p3515))).f_params;
F.v8682 = rt_range(rt_add(F.v8678, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(F.v8684 == ((void *)0)))) {
if ((!yr2938_Fits(((*(yR114 *)rt_nil_check(F.v8684))).f_rep, ((void * *)(v1493).p)[y_ix1(v1493, F.v8682)]))) {
yr2423_TypeClash(((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v8682)]))).f_line, ((*(yR114 *)rt_nil_check(F.v8684))).f_rep, ((void * *)(v1493).p)[y_ix1(v1493, F.v8682)]);
}
F.v8692 = yr3187_Join(F.v8686, yr1055_T(y_str("->", 2)), ((*(yR114 *)rt_nil_check(F.v8684))).f_cname);
yr2968_CheckUnresolved(((*(yR114 *)rt_nil_check(F.v8684))).f_rep, ((void * *)(v1493).p)[y_ix1(v1493, F.v8682)], ((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v8682)]))).f_line);
if ((((*(yR114 *)rt_nil_check(F.v8684))).f_cls == v897)) {
if ((!yr2800_IsVariable(((void * *)(v1504).p)[y_ix1(v1504, F.v8682)]))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v8682)]))).f_line, ((*(yR114 *)rt_nil_check(F.v8684))).f_name, y_str(": the actual of a VAR parameter must be a variable", 50));
}
if ((!yr2976_SameAsFormal(((*(yR114 *)rt_nil_check(F.v8684))).f_rep, ((void * *)(v1493).p)[y_ix1(v1493, F.v8682)]))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v8682)]))).f_line, ((*(yR114 *)rt_nil_check(F.v8684))).f_name, y_str(": a VAR actual has the representation of its formal (VII.G, X.A.2)", 66));
}
yr3242_NoteWrite(((void * *)(v1504).p)[y_ix1(v1504, F.v8682)]);
yr1126_Emit(yr3187_Join(F.v8692, yr1055_T(y_str(" = &", 4)), yr3187_Join(((rt_int *)(v1482).p)[y_ix1(v1482, F.v8682)], yr1055_T(y_str(";", 1)), INT64_C(0))));
} else if (yr2373_Deep(((*(yR114 *)rt_nil_check(F.v8684))).f_rep)) {
F.v8688 = yr1194_Fresh(y_str("t", 1));
yr1126_Emit(yr3187_Join(yr1055_T(y_str("{ ", 2)), yr2398_CType(((*(yR114 *)rt_nil_check(F.v8684))).f_rep), yr3187_Join(yr1055_T(y_str(" ", 1)), F.v8688, yr3187_Join(yr1055_T(y_str(" = ", 3)), yr2772_Convert(((rt_int *)(v1482).p)[y_ix1(v1482, F.v8682)], ((*(yR114 *)rt_nil_check(F.v8684))).f_rep, ((void * *)(v1493).p)[y_ix1(v1493, F.v8682)]), yr1055_T(y_str(";", 1))))));
if ((((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v8684))).f_rep))).f_kind == v837)) {
yr1126_Emit(yr3187_Join(yr1055_T(y_str("y_copy(y_desc_vector(", 21)), yr2404_DescOf(((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v8684))).f_rep))).f_elem), yr3187_Join(yr1055_T(y_str("), &", 4)), F.v8692, yr3187_Join(yr1055_T(y_str(", &", 3)), F.v8688, yr1055_T(y_str("); }", 4))))));
} else {
yr1126_Emit(yr3187_Join(yr1055_T(y_str("y_copy(", 7)), yr2404_DescOf(((*(yR114 *)rt_nil_check(F.v8684))).f_rep), yr3187_Join(yr1055_T(y_str(", &", 3)), F.v8692, yr3187_Join(yr1055_T(y_str(", &", 3)), F.v8688, yr1055_T(y_str("); }", 4))))));
}
} else {
yr1126_Emit(yr3187_Join(F.v8692, yr1055_T(y_str(" = ", 3)), yr3187_Join(yr2772_Convert(((rt_int *)(v1482).p)[y_ix1(v1482, F.v8682)], ((*(yR114 *)rt_nil_check(F.v8684))).f_rep, ((void * *)(v1493).p)[y_ix1(v1493, F.v8682)]), yr1055_T(y_str(";", 1)), INT64_C(0))));
}
F.v8682 = rt_range(rt_add(F.v8682, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v8684 = ((*(yR114 *)rt_nil_check(F.v8684))).f_next;
}
v1506 = F.v8678;
F.v8694 = yr1055_T(y_str("0", 1));
if ((!(((*(yR99 *)rt_nil_check(F.v8698))).f_e == ((void *)0)))) {
yr2839_Expr(((*(yR99 *)rt_nil_check(F.v8698))).f_e, v1336, &F.v8694, &F.v8700);
yr2431_CheckType(((*(yR99 *)rt_nil_check(F.v8698))).f_line, v1336, F.v8700);
}
F.v8696 = yr1055_T(y_str("0, 0", 4));
if ((!(((*(yR99 *)rt_nil_check(F.v8698))).f_d == ((void *)0)))) {
yr2839_Expr(((*(yR99 *)rt_nil_check(F.v8698))).f_d, v1336, &F.v8690, &F.v8700);
yr2431_CheckType(((*(yR99 *)rt_nil_check(F.v8698))).f_line, v1336, F.v8700);
F.v8696 = yr3187_Join(yr1055_T(y_str("1, ", 3)), F.v8690, INT64_C(0));
}
yr1020_SB();
yr1031_SA(y_str("y_create(&", 10));
yr1038_ST(yr2304_Path(rt_range(rt_sub(((*(yR119 *)rt_nil_check(F.p3515))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr3187_Join(((*(yR119 *)rt_nil_check(F.p3515))).f_cname, yr1055_T(y_str("_d", 2)), INT64_C(0))));
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v8694);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v8696);
yr1031_SA(y_str(", ", 2));
yr1038_ST(((*(yR119 *)rt_nil_check(F.p3515))).f_cname);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v8686);
yr1031_SA(y_str("); }", 4));
F.v8688 = yr1050_SE();
yr1126_Emit(F.v8688);
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3520_MonitorPath(void * a_p3521) {
struct yf3522 F;
memset((void *)&F, 0, sizeof F);
F.p3521 = a_p3521;
{ rt_int rv8757 = yr3187_Join(yr1055_T(y_str("&", 1)), yr2304_Path(((*(yR119 *)rt_nil_check(F.p3521))).f_level, ((*(yR119 *)rt_nil_check(F.p3521))).f_cname), INT64_C(0));
return rv8757; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3526_EnterMonitor(void * a_p3527) {
struct yf3528 F;
memset((void *)&F, 0, sizeof F);
F.p3527 = a_p3527;
if ((((*(yR119 *)rt_nil_check(F.p3527))).f_kind == v870)) {
((*(yR119 *)rt_nil_check(F.p3527))).f_monitor = v1755;
}
if ((((*(yR119 *)rt_nil_check(F.p3527))).f_monitor == ((void *)0))) {
return;
}
yr1126_Emit(yr3187_Join(yr1055_T(y_str("y_mon_enter(", 12)), yr3520_MonitorPath(((*(yR119 *)rt_nil_check(F.p3527))).f_monitor), yr1055_T(y_str(");", 2))));
F.v8761 = yr1194_Fresh(y_str("mf", 2));
v1624 = 1;
yr1126_Emit(yr3187_Join(yr1055_T(y_str("rt_frame ", 9)), F.v8761, yr1055_T(y_str(";", 1))));
yr1020_SB();
yr1031_SA(y_str("if (!RT_TRY(", 12));
yr1038_ST(F.v8761);
yr1031_SA(y_str(")) { RT_POP(", 12));
yr1038_ST(F.v8761);
yr1031_SA(y_str("); ", 3));
if ((((*(yR119 *)rt_nil_check(F.p3527))).f_kind == v879)) {
yr1031_SA(y_str("y_mon_drop(", 11));
} else {
yr1031_SA(y_str("y_mon_leave(", 12));
}
yr1038_ST(yr3520_MonitorPath(((*(yR119 *)rt_nil_check(F.p3527))).f_monitor));
yr1031_SA(y_str("); rt_raise(rt_xcur); }", 23));
yr1126_Emit(yr1050_SE());
v1520 = rt_range(rt_add(v1520, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1518).p)[y_ix1(v1518, v1520)] = F.v8761;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3532_LeaveMonitor(void) {
struct yf3533 F;
memset((void *)&F, 0, sizeof F);
if ((v1595 == ((void *)0))) {
return;
}
if ((((*(yR119 *)rt_nil_check(v1595))).f_monitor == ((void *)0))) {
return;
}
if ((((*(yR119 *)rt_nil_check(v1595))).f_kind == v879)) {
yr1126_Emit(yr3187_Join(yr1055_T(y_str("y_mon_drop(", 11)), yr3520_MonitorPath(((*(yR119 *)rt_nil_check(v1595))).f_monitor), yr1055_T(y_str(");", 2))));
} else {
yr1126_Emit(yr3187_Join(yr1055_T(y_str("y_mon_leave(", 12)), yr3520_MonitorPath(((*(yR119 *)rt_nil_check(v1595))).f_monitor), yr1055_T(y_str(");", 2))));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3537_TerminateStatement(void * a_p3538) {
struct yf3539 F;
memset((void *)&F, 0, sizeof F);
F.p3538 = a_p3538;
if ((((v1595 == ((void *)0))) || ((!(((*(yR119 *)rt_nil_check(v1595))).f_kind == v879))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3538))).f_line, y_str("TERMINATE_PROCESS ends a process (IX.A.7)", 41));
}
yr3508_AwaitProcesses();
yr3532_LeaveMonitor();
yr3081_PopTo(v1523);
yr1132_EmitS(y_str("return;", 7));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3543_DeclareSignal(void * a_p3544, rt_int a_p3545) {
struct yf3546 F;
memset((void *)&F, 0, sizeof F);
F.p3544 = a_p3544;
F.p3545 = a_p3545;
if ((v1755 == ((void *)0))) {
yr1172_FailS(F.p3545, y_str("signal variables are declared in a monitor (X.E.4)", 50));
}
((*(yR119 *)rt_nil_check(F.p3544))).f_rep = yr2343_CopyRep(((*(yR119 *)rt_nil_check(F.p3544))).f_rep);
((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.p3544))).f_rep))).f_monitor = v1755;
yr1126_Emit(yr3187_Join(yr1055_T(y_str("y_sig_init(&", 12)), yr2324_SymPath(F.p3544), yr3187_Join(yr1055_T(y_str(", ", 2)), yr3520_MonitorPath(v1755), yr1055_T(y_str(");", 2)))));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3550_DeclareSignalArray(void * a_p3551, rt_int a_p3552) {
struct yf3553 F;
memset((void *)&F, 0, sizeof F);
F.p3551 = a_p3551;
F.p3552 = a_p3552;
if ((v1755 == ((void *)0))) {
yr1172_FailS(F.p3552, y_str("signal variables are declared in a monitor (X.E.4)", 50));
}
yr1126_Emit(yr3187_Join(yr1055_T(y_str("y_sig_init_all(", 15)), yr2404_DescOf(((*(yR119 *)rt_nil_check(F.p3551))).f_rep), yr3187_Join(yr1055_T(y_str(", &", 3)), yr2324_SymPath(F.p3551), yr3187_Join(yr1055_T(y_str(", ", 2)), yr3520_MonitorPath(v1755), yr1055_T(y_str(");", 2))))));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3557_DeviceSignal(void * a_p3558, void * a_p3559) {
struct yf3560 F;
memset((void *)&F, 0, sizeof F);
F.p3558 = a_p3558;
F.p3559 = a_p3559;
yr2691_Manifest(F.p3559, &F.v8804, &F.v8806);
if ((!F.v8804)) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3559))).f_line, y_str("an AT location is a manifest constant (XIV.VII)", 47));
}
yr1020_SB();
yr1031_SA(y_str("y_device(&", 10));
yr1038_ST(yr2324_SymPath(F.p3558));
yr1031_SA(y_str(", ", 2));
yr1044_SI(F.v8806);
yr1031_SA(y_str(");", 2));
F.v8808 = yr1050_SE();
yr1126_Emit(F.v8808);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3564_Arg(void * a_p3565, rt_int a_p3566) {
struct yf3567 F;
memset((void *)&F, 0, sizeof F);
F.p3565 = a_p3565;
F.p3566 = a_p3566;
F.v8817 = ((*(yR99 *)rt_nil_check(F.p3565))).f_a;
F.v8819 = INT64_C(1);
while ((((!(F.v8817 == ((void *)0)))) && ((F.v8819 < F.p3566)))) {
F.v8817 = ((*(yR99 *)rt_nil_check(F.v8817))).f_next;
F.v8819 = rt_range(rt_add(F.v8819, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v8817 == ((void *)0))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3565))).f_line, ((*(yR99 *)rt_nil_check(F.p3565))).f_name, y_str(": too few actual parameters", 27));
}
{ void * rv8824 = F.v8817;
return rv8824; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3571_NArgs(void * a_p3572, rt_int a_p3573) {
struct yf3574 F;
memset((void *)&F, 0, sizeof F);
F.p3572 = a_p3572;
F.p3573 = a_p3573;
if ((!(yr1903_Count(((*(yR99 *)rt_nil_check(F.p3572))).f_a) == F.p3573))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3572))).f_line, ((*(yR99 *)rt_nil_check(F.p3572))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3578_Call1(yarr a_p3580, rt_int a_p3581) {
struct yf3582 F;
memset((void *)&F, 0, sizeof F);
F.p3580 = a_p3580;
F.p3581 = a_p3581;
yr1020_SB();
yr1031_SA(F.p3580);
yr1031_SA(y_str("(", 1));
yr1038_ST(F.p3581);
yr1031_SA(y_str(")", 1));
{ rt_int rv8834 = yr1050_SE();
return rv8834; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3586_Addr(rt_int a_p3587) {
struct yf3588 F;
memset((void *)&F, 0, sizeof F);
F.p3587 = a_p3587;
{ rt_int rv8839 = yr3187_Join(yr1055_T(y_str("&", 1)), F.p3587, INT64_C(0));
return rv8839; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3592_StdVar(void * a_p3593, rt_int a_p3594, rt_int * a_p3595, void * * a_p3596) {
struct yf3597 F;
memset((void *)&F, 0, sizeof F);
F.p3593 = a_p3593;
F.p3594 = a_p3594;
F.p3595_o = a_p3595;
F.p3596_o = a_p3596;
yr2812_LValue(F.p3593, &F.p3595, &F.p3596);
yr3242_NoteWrite(F.p3593);
if ((((!(F.p3594 == v852))) && ((!(((*(yR104 *)rt_nil_check(F.p3596))).f_kind == F.p3594))))) {
yr1020_SB();
yr1031_SA(y_str("a ", 2));
if ((F.p3594 == v825)) {
yr1031_SA(y_str("file", 4));
} else if ((F.p3594 == v831)) {
yr1031_SA(y_str("signal", 6));
} else if ((F.p3594 == v834)) {
yr1031_SA(y_str("SEMAPHORE", 9));
} else if ((F.p3594 == v822)) {
yr1031_SA(y_str("pointer", 7));
} else {
yr1031_SA(y_str("variable", 8));
}
yr1031_SA(y_str(" is needed here", 15));
F.v8846 = yr1050_SE();
yr1151_Fail(((*(yR99 *)rt_nil_check(F.p3593))).f_line, F.v8846);
}
(*F.p3595_o) = F.p3595;
(*F.p3596_o) = F.p3596;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3601_NumArg(void * a_p3602, rt_int * a_p3603, void * * a_p3604) {
struct yf3605 F;
memset((void *)&F, 0, sizeof F);
F.p3602 = a_p3602;
F.p3603_o = a_p3603;
F.p3604_o = a_p3604;
yr2839_Expr(F.p3602, ((void *)0), &F.p3603, &F.p3604);
if ((!yr2355_IsNumeric(F.p3604))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3602))).f_line, y_str("a number is needed here", 23));
}
(*F.p3603_o) = F.p3603;
(*F.p3604_o) = F.p3604;
return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3609_IntArg(void * a_p3610) {
struct yf3611 F;
memset((void *)&F, 0, sizeof F);
F.p3610 = a_p3610;
yr2839_Expr(F.p3610, v1336, &F.v8862, &F.v8864);
if ((!(((*(yR104 *)rt_nil_check(F.v8864))).f_kind == v798))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3610))).f_line, y_str("an integer is needed here", 25));
}
{ rt_int rv8866 = F.v8862;
return rv8866; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3615_CodeInsert(void * a_p3616) {
struct yf3617 F;
memset((void *)&F, 0, sizeof F);
F.p3616 = a_p3616;
F.v8870 = yr3564_Arg(F.p3616, INT64_C(1));
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1)}; y_desc_array(&F.yd_8896, 1, lo, hi, &y_d_int); }
y_init(&F.yd_8896, &F.v8898);
if ((!(((*(yR99 *)rt_nil_check(F.v8870))).f_kind == v765))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3616))).f_line, y_str("a code insert takes a string literal (XIV.XI.5)", 47));
}
F.v8873 = ((*(yR99 *)rt_nil_check(F.v8870))).f_text;
F.v8883 = ((rt_int *)(v914).p)[y_ix1(v914, F.v8873)];
yr1020_SB();
F.v8879 = INT64_C(1);
while ((F.v8879 <= F.v8883)) {
F.v8885 = yr1097_TChar(F.v8873, F.v8879);
if ((F.v8885 == 39)) {
F.v8881 = rt_range(rt_add(F.v8879, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1097_TChar(F.v8873, F.v8881) == 39))) {
F.v8881 = rt_range(rt_add(F.v8881, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v8875 = yr1062_Intern(rt_range(rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.v8873)], F.v8879), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v8881, F.v8879)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1025_SC(((unsigned char *)(v970).p)[y_ix1(v970, yr2674_CharValue(v1340, F.v8875, ((*(yR99 *)rt_nil_check(F.p3616))).f_line))]);
F.v8879 = rt_range(rt_add(F.v8881, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v8885 == 36)) {
F.v8881 = rt_range(rt_add(F.v8879, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((F.v8881 <= F.v8883)) && ((yr1002_IsLetter(yr1097_TChar(F.v8873, F.v8881)) || yr1008_IsDigit(yr1097_TChar(F.v8873, F.v8881)))))) {
F.v8881 = rt_range(rt_add(F.v8881, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v8875 = yr1062_Intern(rt_range(rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.v8873)], F.v8879), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v8881, F.v8879)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v8887 = yr2232_Find(F.v8875);
if ((F.v8887 == ((void *)0))) {
v935 = INT64_C(0);
v949 = INT64_C(0);
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3616))).f_line, F.v8875, y_str(" in a code insert is not declared here", 38));
}
F.v8887 = yr2330_Real(F.v8887);
if ((((!(((*(yR119 *)rt_nil_check(F.v8887))).f_kind == v855))) && ((!(((*(yR119 *)rt_nil_check(F.v8887))).f_kind == v858))))) {
v935 = INT64_C(0);
v949 = INT64_C(0);
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3616))).f_line, F.v8875, y_str(" in a code insert is not a variable or constant", 47));
}
yr1038_ST(yr2820_Paren(yr2324_SymPath(F.v8887)));
F.v8879 = F.v8881;
} else {
yr1025_SC(F.v8885);
F.v8879 = rt_range(rt_add(F.v8879, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
F.v8877 = yr1050_SE();
yr1126_Emit(F.v8877);
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3621_ManifestScale(void * a_p3622, void * a_p3623) {
struct yf3624 F;
memset((void *)&F, 0, sizeof F);
F.p3622 = a_p3622;
F.p3623 = a_p3623;
yr2757_ManifestFix(F.p3622, &F.v8934, &F.v8936, &F.v8938);
if (((!F.v8934) || ((F.v8936 <= INT64_C(0))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3623))).f_line, ((*(yR99 *)rt_nil_check(F.p3623))).f_name, y_str(": the scale is a positive manifest constant (XI)", 48));
}
F.v8940 = yr2343_CopyRep(v1350);
((*(yR104 *)rt_nil_check(F.v8940))).f_abstract = 0;
yr2545_SetScale(F.v8940, F.v8936, F.v8938);
{ void * rv8944 = F.v8940;
return rv8944; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3628_StdCall(rt_int a_p3629, void * a_p3630, rt_int a_p3631, rt_int * a_p3632, void * * a_p3633) {
struct yf3634 F;
memset((void *)&F, 0, sizeof F);
F.p3629 = a_p3629;
F.p3630 = a_p3630;
F.p3631 = a_p3631;
F.p3632_o = a_p3632;
F.p3633_o = a_p3633;
F.p3633 = v1342;
F.p3632 = yr1055_T(y_str("((void)0)", 9));
F.v8980 = ((((((((((((((((F.p3629 == v1378)) || ((F.p3629 == v1381))) || ((F.p3629 == v1384))) || ((F.p3629 == v1387))) || ((F.p3629 == v1390))) || ((F.p3629 == v1396))) || ((F.p3629 == v1405))) || ((F.p3629 == v1411))) || ((F.p3629 == v1414))) || ((F.p3629 == v1438))) || ((F.p3629 == v1441))) || ((F.p3629 == v1450))) || ((F.p3629 == v1453))) || ((F.p3629 == v1456))) || ((F.p3629 == v1459)));
if ((F.p3631 && (!F.v8980))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3630))).f_line, ((*(yR99 *)rt_nil_check(F.p3630))).f_name, y_str(" returns a value: it is called in an expression", 47));
}
if (((!F.p3631) && F.v8980)) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3630))).f_line, ((*(yR99 *)rt_nil_check(F.p3630))).f_name, y_str(" returns no value", 17));
}
if ((((F.p3629 == v1360)) || ((F.p3629 == v1363)))) {
yr3571_NArgs(F.p3630, INT64_C(2));
yr2839_Expr(yr3564_Arg(F.p3630, INT64_C(1)), ((void *)0), &F.v8952, &F.v8962);
if ((!yr2361_IsArrayLike(F.v8962))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3630))).f_line, ((*(yR99 *)rt_nil_check(F.p3630))).f_name, y_str(" of something that is not an array", 34));
}
F.v8954 = yr3609_IntArg(yr3564_Arg(F.p3630, INT64_C(2)));
yr2691_Manifest(yr3564_Arg(F.p3630, INT64_C(2)), &F.v8976, &F.v8974);
F.p3633 = yr2883_Unbounded(v1336);
if ((F.v8976 && ((((*(yR104 *)rt_nil_check(F.v8962))).f_kind == v816)))) {
if ((((F.v8974 < INT64_C(1))) || ((F.v8974 > ((*(yR104 *)rt_nil_check(F.v8962))).f_nidx)))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3630))).f_line, y_str("no such dimension", 17));
}
F.v8968 = ((*(yR104 *)rt_nil_check(F.v8962))).f_idx;
F.lo8994 = INT64_C(2);
F.hi8995 = F.v8974;
{ rt_int hi8999 = F.hi8995;
for (rt_int i8998 = F.lo8994; i8998 <= hi8999; i8998++) { F.c_8997 = i8998;
F.v8968 = ((*(yR104 *)rt_nil_check(F.v8968))).f_link;
if (i8998 == hi8999) break;
}}
F.p3633 = F.v8968;
}
if ((F.p3629 == v1360)) {
F.p3632 = yr2889_Call2(y_str("y_low", 5), F.v8952, F.v8954);
} else {
F.p3632 = yr2889_Call2(y_str("y_high", 6), F.v8952, F.v8954);
}
(*F.p3632_o) = F.p3632;
(*F.p3633_o) = F.p3633;
return;
}
if ((((((F.p3629 == v1366)) || ((F.p3629 == v1369))) || ((F.p3629 == v1372))) || ((F.p3629 == v1375)))) {
yr3571_NArgs(F.p3630, INT64_C(1));
yr2839_Expr(yr3564_Arg(F.p3630, INT64_C(1)), ((void *)0), &F.v8952, &F.v8962);
if ((!yr2349_IsDiscrete(F.v8962))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3630))).f_line, ((*(yR99 *)rt_nil_check(F.p3630))).f_name, y_str(" of something that is not integer or scalar", 43));
}
if ((((((*(yR104 *)rt_nil_check(F.v8962))).f_kind == v807)) || ((((((*(yR104 *)rt_nil_check(F.v8962))).f_kind == v810)) && (!((*(yR104 *)rt_nil_check(F.v8962))).f_ordered))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3630))).f_line, ((*(yR99 *)rt_nil_check(F.p3630))).f_name, y_str(" applies to integers, ordered enumerations and alphabets, not UNORDERED ones (XI)", 81));
}
if ((!(((*(yR104 *)rt_nil_check(F.v8962))).f_elem == ((void *)0)))) {
F.v8962 = ((*(yR104 *)rt_nil_check(F.v8962))).f_elem;
}
if ((((((F.p3629 == v1372)) || ((F.p3629 == v1375)))) && ((((*(yR104 *)rt_nil_check(F.v8962))).f_kind == v798)))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3630))).f_line, y_str("FIRST and LAST apply to ordered enumerations and alphabets (XI)", 63));
}
if ((F.p3629 == v1372)) {
F.p3633 = F.v8962;
F.p3632 = yr2479_LoText(F.v8962);
} else if ((F.p3629 == v1375)) {
F.p3633 = F.v8962;
F.p3632 = yr2485_HiText(F.v8962);
} else {
F.p3633 = yr2883_Unbounded(F.v8962);
yr1020_SB();
if ((!(((*(yR104 *)rt_nil_check(F.v8962))).f_kind == v798))) {
yr1031_SA(y_str("rt_range(", 9));
}
if ((F.p3629 == v1366)) {
yr1031_SA(y_str("rt_add(", 7));
} else {
yr1031_SA(y_str("rt_sub(", 7));
}
yr1038_ST(F.v8952);
yr1031_SA(y_str(", 1)", 4));
if ((!(((*(yR104 *)rt_nil_check(F.v8962))).f_kind == v798))) {
yr1031_SA(y_str(", 0, ", 5));
yr1044_SI(rt_range(rt_sub(((*(yR104 *)rt_nil_check(F.v8962))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1031_SA(y_str(")", 1));
}
F.p3632 = yr1050_SE();
}
(*F.p3632_o) = F.p3632;
(*F.p3633_o) = F.p3633;
return;
}
if ((F.p3629 == v1378)) {
yr3571_NArgs(F.p3630, INT64_C(1));
yr3592_StdVar(yr3564_Arg(F.p3630, INT64_C(1)), v822, &F.v8952, &F.v8962);
if ((((*(yR104 *)rt_nil_check(F.v8962))).f_elem == ((void *)0))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3630))).f_line, ((*(yR104 *)rt_nil_check(F.v8962))).f_forward, y_str(" is not declared", 16));
}
F.v8968 = ((*(yR104 *)rt_nil_check(F.v8962))).f_elem;
yr1020_SB();
yr1031_SA(y_str("({ ", 3));
yr1038_ST(F.v8952);
yr1031_SA(y_str(" = rt_alloc(sizeof(", 19));
yr1038_ST(yr2398_CType(F.v8968));
yr1031_SA(y_str("));", 3));
if (yr2373_Deep(F.v8968)) {
yr1031_SA(y_str(" y_init(", 8));
yr1038_ST(yr2404_DescOf(F.v8968));
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v8952);
yr1031_SA(y_str(");", 2));
}
yr1031_SA(y_str(" })", 3));
F.p3632 = yr1050_SE();
(*F.p3632_o) = F.p3632;
(*F.p3633_o) = F.p3633;
return;
}
if ((F.p3629 == v1456)) {
yr3571_NArgs(F.p3630, INT64_C(1));
yr3592_StdVar(yr3564_Arg(F.p3630, INT64_C(1)), v822, &F.v8952, &F.v8962);
F.p3632 = yr3187_Join(yr1055_T(y_str("({ free(", 8)), F.v8952, yr3187_Join(yr1055_T(y_str("); ", 3)), F.v8952, yr1055_T(y_str(" = 0; })", 8))));
(*F.p3632_o) = F.p3632;
(*F.p3633_o) = F.p3633;
return;
}
if ((F.p3629 == v1381)) {
yr3571_NArgs(F.p3630, INT64_C(3));
yr3592_StdVar(yr3564_Arg(F.p3630, INT64_C(1)), v825, &F.v8952, &F.v8962);
yr2839_Expr(yr3564_Arg(F.p3630, INT64_C(2)), v1340, &F.v8954, &F.v8964);
if ((!yr2367_IsString(F.v8964))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3630))).f_line, y_str("OPEN takes the name of the file as a string (XII.A)", 51));
}
yr2839_Expr(yr3564_Arg(F.p3630, INT64_C(3)), v1820, &F.v8956, &F.v8966);
yr2431_CheckType(((*(yR99 *)rt_nil_check(F.p3630))).f_line, v1820, F.v8966);
yr1020_SB();
yr1031_SA(y_str("y_open(&", 8));
yr1038_ST(F.v8952);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v8954);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v8956);
yr1031_SA(y_str(")", 1));
F.p3632 = yr1050_SE();
(*F.p3632_o) = F.p3632;
(*F.p3633_o) = F.p3633;
return;
}
if ((((F.p3629 == v1384)) || ((F.p3629 == v1393)))) {
yr3571_NArgs(F.p3630, INT64_C(1));
yr3592_StdVar(yr3564_Arg(F.p3630, INT64_C(1)), v825, &F.v8952, &F.v8962);
if ((F.p3629 == v1384)) {
F.p3632 = yr3578_Call1(y_str("y_close", 7), yr3586_Addr(F.v8952));
} else {
F.p3633 = v1338;
F.p3632 = yr3578_Call1(y_str("y_check_eof", 11), yr3586_Addr(F.v8952));
}
(*F.p3632_o) = F.p3632;
(*F.p3633_o) = F.p3633;
return;
}
if ((F.p3629 == v1387)) {
yr3571_NArgs(F.p3630, INT64_C(2));
yr3592_StdVar(yr3564_Arg(F.p3630, INT64_C(1)), v825, &F.v8952, &F.v8962);
yr3592_StdVar(yr3564_Arg(F.p3630, INT64_C(2)), v852, &F.v8954, &F.v8964);
yr2431_CheckType(((*(yR99 *)rt_nil_check(F.p3630))).f_line, ((*(yR104 *)rt_nil_check(F.v8962))).f_elem, F.v8964);
if ((yr2373_Deep(F.v8964) || ((((*(yR104 *)rt_nil_check(F.v8964))).f_kind == v822)))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3630))).f_line, y_str("files of this implementation hold no arrays or pointers", 55));
}
yr1020_SB();
yr1031_SA(y_str("({ ", 3));
yr1038_ST(yr2398_CType(F.v8964));
yr1031_SA(y_str(" g; y_get(&", 11));
yr1038_ST(F.v8952);
yr1031_SA(y_str(", &g, sizeof g); ", 17));
yr1038_ST(F.v8954);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(yr2772_Convert(yr1055_T(y_str("g", 1)), F.v8964, ((*(yR104 *)rt_nil_check(F.v8962))).f_elem));
yr1031_SA(y_str("; })", 4));
F.p3632 = yr1050_SE();
(*F.p3632_o) = F.p3632;
(*F.p3633_o) = F.p3633;
return;
}
if ((F.p3629 == v1390)) {
yr3571_NArgs(F.p3630, INT64_C(2));
yr3592_StdVar(yr3564_Arg(F.p3630, INT64_C(1)), v825, &F.v8952, &F.v8962);
yr2839_Expr(yr3564_Arg(F.p3630, INT64_C(2)), ((*(yR104 *)rt_nil_check(F.v8962))).f_elem, &F.v8954, &F.v8964);
yr2431_CheckType(((*(yR99 *)rt_nil_check(F.p3630))).f_line, ((*(yR104 *)rt_nil_check(F.v8962))).f_elem, F.v8964);
if ((yr2373_Deep(F.v8964) || ((((*(yR104 *)rt_nil_check(F.v8964))).f_kind == v822)))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3630))).f_line, y_str("files of this implementation hold no arrays or pointers", 55));
}
yr1020_SB();
yr1031_SA(y_str("({ ", 3));
yr1038_ST(yr2398_CType(((*(yR104 *)rt_nil_check(F.v8962))).f_elem));
yr1031_SA(y_str(" pv = ", 6));
yr1038_ST(yr2772_Convert(F.v8954, ((*(yR104 *)rt_nil_check(F.v8962))).f_elem, F.v8964));
yr1031_SA(y_str("; y_put(&", 9));
yr1038_ST(F.v8952);
yr1031_SA(y_str(", &pv, sizeof pv); })", 21));
F.p3632 = yr1050_SE();
(*F.p3632_o) = F.p3632;
(*F.p3633_o) = F.p3633;
return;
}
if ((F.p3629 == v1396)) {
F.v8970 = yr1903_Count(((*(yR99 *)rt_nil_check(F.p3630))).f_a);
if ((((F.v8970 < INT64_C(5))) || ((!((rt_mod((rt_sub(F.v8970, INT64_C(2))), INT64_C(3))) == INT64_C(0)))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3630))).f_line, y_str("MOVE takes an object, an index and triples", 42));
}
yr3592_StdVar(yr3564_Arg(F.p3630, INT64_C(1)), v852, &F.v8952, &F.v8962);
if (((!((((((*(yR104 *)rt_nil_check(F.v8962))).f_kind == v816)) || ((((*(yR104 *)rt_nil_check(F.v8962))).f_kind == v837))))) || ((!(((*(yR104 *)rt_nil_check(F.v8962))).f_nidx == INT64_C(1)))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3630))).f_line, y_str("MOVE works on one-dimensional arrays", 36));
}
F.v8954 = yr3609_IntArg(yr3564_Arg(F.p3630, INT64_C(2)));
F.v8960 = yr1194_Fresh(y_str("at", 2));
yr1020_SB();
yr1031_SA(y_str("({ rt_int ", 10));
yr1038_ST(F.v8960);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(F.v8954);
yr1031_SA(y_str(";", 1));
F.p3632 = yr1050_SE();
F.v8972 = INT64_C(3);
while ((F.v8972 < F.v8970)) {
yr2839_Expr(yr3564_Arg(F.p3630, F.v8972), ((*(yR104 *)rt_nil_check(F.v8962))).f_elem, &F.v8956, &F.v8966);
if (((!yr2361_IsArrayLike(F.v8966)) || (!yr2416_SameType(((*(yR104 *)rt_nil_check(F.v8962))).f_elem, ((*(yR104 *)rt_nil_check(F.v8966))).f_elem)))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3630))).f_line, y_str("MOVE: the components differ in type", 35));
}
F.v8958 = yr3609_IntArg(yr3564_Arg(F.p3630, rt_range(rt_add(F.v8972, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v8954 = yr3609_IntArg(yr3564_Arg(F.p3630, rt_range(rt_add(F.v8972, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr1020_SB();
yr1038_ST(F.p3632);
yr1031_SA(y_str(" { rt_int mi = ", 15));
yr1038_ST(F.v8958);
yr1031_SA(y_str(", mj = ", 7));
yr1038_ST(F.v8954);
yr1031_SA(y_str("; y_move(&", 10));
yr1038_ST(F.v8952);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v8960);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v8956);
yr1031_SA(y_str(", mi, mj, ", 10));
yr1038_ST(yr2404_DescOf(((*(yR104 *)rt_nil_check(F.v8962))).f_elem));
yr1031_SA(y_str("); if (mj >= mi) ", 17));
yr1038_ST(F.v8960);
yr1031_SA(y_str(" += mj - mi + 1; }", 18));
F.p3632 = yr1050_SE();
F.v8972 = rt_range(rt_add(F.v8972, INT64_C(3)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.p3632 = yr3187_Join(F.p3632, yr1055_T(y_str(" })", 3)), INT64_C(0));
(*F.p3632_o) = F.p3632;
(*F.p3633_o) = F.p3633;
return;
}
if ((((F.p3629 == v1399)) || ((F.p3629 == v1402)))) {
yr3571_NArgs(F.p3630, INT64_C(2));
F.v8952 = yr3157_Cond(yr3564_Arg(F.p3630, INT64_C(1)));
F.v8954 = yr3157_Cond(yr3564_Arg(F.p3630, INT64_C(2)));
F.p3633 = v1338;
if ((F.p3629 == v1399)) {
F.p3632 = yr2898_Infix(yr2820_Paren(yr2898_Infix(F.v8952, y_str("!=", 2), yr1055_T(y_str("0", 1)))), y_str("&", 1), yr2820_Paren(yr2898_Infix(F.v8954, y_str("!=", 2), yr1055_T(y_str("0", 1)))));
} else {
F.p3632 = yr2898_Infix(yr2820_Paren(yr2898_Infix(F.v8952, y_str("!=", 2), yr1055_T(y_str("0", 1)))), y_str("|", 1), yr2820_Paren(yr2898_Infix(F.v8954, y_str("!=", 2), yr1055_T(y_str("0", 1)))));
}
(*F.p3632_o) = F.p3632;
(*F.p3633_o) = F.p3633;
return;
}
if ((F.p3629 == v1405)) {
yr3571_NArgs(F.p3630, INT64_C(1));
F.p3632 = yr3578_Call1(y_str("rt_delay", 8), yr3609_IntArg(yr3564_Arg(F.p3630, INT64_C(1))));
(*F.p3632_o) = F.p3632;
(*F.p3633_o) = F.p3633;
return;
}
if ((F.p3629 == v1408)) {
yr3571_NArgs(F.p3630, INT64_C(0));
F.p3633 = yr2883_Unbounded(v1336);
F.p3632 = yr1055_T(y_str("rt_time()", 9));
(*F.p3632_o) = F.p3632;
(*F.p3633_o) = F.p3633;
return;
}
if (((((F.p3629 == v1411)) || ((F.p3629 == v1414))) || ((F.p3629 == v1417)))) {
yr3592_StdVar(yr3564_Arg(F.p3630, INT64_C(1)), v831, &F.v8952, &F.v8962);
if ((F.p3629 == v1411)) {
if ((yr1903_Count(((*(yR99 *)rt_nil_check(F.p3630))).f_a) == INT64_C(1))) {
F.v8954 = yr1055_T(y_str("1", 1));
} else {
yr3571_NArgs(F.p3630, INT64_C(2));
F.v8954 = yr3609_IntArg(yr3564_Arg(F.p3630, INT64_C(2)));
}
F.p3632 = yr2889_Call2(y_str("y_wait", 6), yr3586_Addr(F.v8952), F.v8954);
} else {
yr3571_NArgs(F.p3630, INT64_C(1));
if ((F.p3629 == v1414)) {
F.p3632 = yr3578_Call1(y_str("y_send", 6), yr3586_Addr(F.v8952));
} else {
F.p3633 = v1338;
F.p3632 = yr3578_Call1(y_str("y_awaited", 9), yr3586_Addr(F.v8952));
}
}
(*F.p3632_o) = F.p3632;
(*F.p3633_o) = F.p3633;
return;
}
if (((((F.p3629 == v1420)) || ((F.p3629 == v1423))) || ((F.p3629 == v1426)))) {
yr3571_NArgs(F.p3630, INT64_C(1));
yr3601_NumArg(yr3564_Arg(F.p3630, INT64_C(1)), &F.v8952, &F.v8962);
F.p3633 = yr2883_Unbounded(v1336);
if ((((*(yR104 *)rt_nil_check(F.v8962))).f_kind == v798)) {
F.p3632 = F.v8952;
} else if ((((*(yR104 *)rt_nil_check(F.v8962))).f_kind == v801)) {
yr1020_SB();
if ((F.p3629 == v1420)) {
yr1031_SA(y_str("y_fix_floor(", 12));
} else if ((F.p3629 == v1423)) {
yr1031_SA(y_str("y_fix_ceiling(", 14));
} else {
yr1031_SA(y_str("y_fix_near_integer(", 19));
}
yr1038_ST(F.v8952);
yr1031_SA(y_str(", INT64_C(", 10));
yr1044_SI(((*(yR104 *)rt_nil_check(F.v8962))).f_fsn);
yr1031_SA(y_str("), INT64_C(", 11));
yr1044_SI(((*(yR104 *)rt_nil_check(F.v8962))).f_fsd);
yr1031_SA(y_str("))", 2));
F.p3632 = yr1050_SE();
} else if ((F.p3629 == v1420)) {
F.p3632 = yr3578_Call1(y_str("y_floor", 7), F.v8952);
} else if ((F.p3629 == v1423)) {
F.p3632 = yr3578_Call1(y_str("y_ceiling", 9), F.v8952);
} else {
F.p3632 = yr3578_Call1(y_str("y_near_integer", 14), F.v8952);
}
(*F.p3632_o) = F.p3632;
(*F.p3633_o) = F.p3633;
return;
}
if ((F.p3629 == v1432)) {
yr3571_NArgs(F.p3630, INT64_C(1));
yr3601_NumArg(yr3564_Arg(F.p3630, INT64_C(1)), &F.v8952, &F.v8962);
F.p3633 = v1348;
if ((((*(yR104 *)rt_nil_check(F.v8962))).f_kind == v801)) {
F.p3632 = yr2922_FixToFloat(F.v8952, F.v8962);
} else {
F.p3632 = yr3187_Join(yr1055_T(y_str("((double)(", 10)), F.v8952, yr1055_T(y_str("))", 2)));
}
(*F.p3632_o) = F.p3632;
(*F.p3633_o) = F.p3633;
return;
}
if ((F.p3629 == v1429)) {
yr3571_NArgs(F.p3630, INT64_C(2));
yr3601_NumArg(yr3564_Arg(F.p3630, INT64_C(1)), &F.v8952, &F.v8962);
F.p3633 = yr3621_ManifestScale(yr3564_Arg(F.p3630, INT64_C(2)), F.p3630);
if ((((*(yR104 *)rt_nil_check(F.v8962))).f_kind == v804)) {
yr1020_SB();
yr1031_SA(y_str("y_fix_of_float(", 15));
yr1038_ST(F.v8952);
yr1031_SA(y_str(", INT64_C(", 10));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p3633))).f_fsn);
yr1031_SA(y_str("), INT64_C(", 11));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p3633))).f_fsd);
yr1031_SA(y_str("))", 2));
F.p3632 = yr1050_SE();
} else {
if ((((*(yR104 *)rt_nil_check(F.v8962))).f_kind == v798)) {
F.v8966 = yr2343_CopyRep(v1350);
yr2545_SetScale(F.v8966, INT64_C(1), INT64_C(1));
F.v8952 = yr3187_Join(yr1055_T(y_str("((yfix)(", 8)), F.v8952, yr1055_T(y_str("))", 2)));
} else {
F.v8966 = F.v8962;
}
yr2528_ScaleRatio(F.v8966, F.p3633, &F.v8958, &F.v8960, &F.v8976);
yr1020_SB();
yr1031_SA(y_str("y_fix_near(", 11));
yr1038_ST(F.v8952);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v8958);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v8960);
yr1031_SA(y_str(")", 1));
F.p3632 = yr1050_SE();
}
(*F.p3632_o) = F.p3632;
(*F.p3633_o) = F.p3633;
return;
}
if ((F.p3629 == v1435)) {
yr3571_NArgs(F.p3630, INT64_C(3));
yr3601_NumArg(yr3564_Arg(F.p3630, INT64_C(1)), &F.v8952, &F.v8962);
yr3601_NumArg(yr3564_Arg(F.p3630, INT64_C(2)), &F.v8954, &F.v8964);
if ((((!(((*(yR104 *)rt_nil_check(F.v8962))).f_kind == v801))) || ((!(((*(yR104 *)rt_nil_check(F.v8964))).f_kind == v801))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3630))).f_line, y_str("FIXED_DIV divides fixed-point numbers (XI)", 42));
}
yr2431_CheckType(((*(yR99 *)rt_nil_check(F.p3630))).f_line, F.v8962, F.v8964);
F.p3633 = yr3621_ManifestScale(yr3564_Arg(F.p3630, INT64_C(3)), F.p3630);
((*(yR104 *)rt_nil_check(F.p3633))).f_tid = ((*(yR104 *)rt_nil_check(F.v8962))).f_tid;
((*(yR104 *)rt_nil_check(F.p3633))).f_tname = ((*(yR104 *)rt_nil_check(F.v8962))).f_tname;
F.v8966 = yr2343_CopyRep(v1350);
yr2545_SetScale(F.v8966, yr2512_MulChk(((*(yR104 *)rt_nil_check(F.v8964))).f_fsn, ((*(yR104 *)rt_nil_check(F.p3633))).f_fsn, ((*(yR99 *)rt_nil_check(F.p3630))).f_line), yr2512_MulChk(((*(yR104 *)rt_nil_check(F.v8964))).f_fsd, ((*(yR104 *)rt_nil_check(F.p3633))).f_fsd, ((*(yR99 *)rt_nil_check(F.p3630))).f_line));
yr2528_ScaleRatio(F.v8962, F.v8966, &F.v8958, &F.v8960, &F.v8976);
yr1020_SB();
yr1031_SA(y_str("y_fix_div(", 10));
yr1038_ST(F.v8952);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v8954);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v8958);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v8960);
yr1031_SA(y_str(")", 1));
F.p3632 = yr1050_SE();
(*F.p3632_o) = F.p3632;
(*F.p3633_o) = F.p3633;
return;
}
if ((F.p3629 == v1444)) {
v1627 = rt_range(rt_add(v1627, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (((((F.p3629 == v1438)) || ((F.p3629 == v1441))) || ((F.p3629 == v1444)))) {
yr3571_NArgs(F.p3630, INT64_C(1));
yr3592_StdVar(yr3564_Arg(F.p3630, INT64_C(1)), v834, &F.v8952, &F.v8962);
if ((F.p3629 == v1438)) {
F.p3632 = yr3578_Call1(y_str("rt_region_enter", 15), yr3586_Addr(F.v8952));
} else if ((F.p3629 == v1441)) {
F.p3632 = yr3578_Call1(y_str("rt_region_leave", 15), yr3586_Addr(F.v8952));
} else {
F.p3633 = v1338;
F.p3632 = yr3578_Call1(y_str("y_cond_claim", 12), yr3586_Addr(F.v8952));
}
(*F.p3632_o) = F.p3632;
(*F.p3633_o) = F.p3633;
return;
}
if ((F.p3629 == v1447)) {
yr3571_NArgs(F.p3630, INT64_C(0));
F.p3633 = yr2883_Unbounded(v1336);
F.p3632 = yr1055_T(y_str("y_self()", 8));
(*F.p3632_o) = F.p3632;
(*F.p3633_o) = F.p3633;
return;
}
if ((F.p3629 == v1450)) {
yr3571_NArgs(F.p3630, INT64_C(2));
F.p3632 = yr2889_Call2(y_str("y_change_priority", 17), yr3609_IntArg(yr3564_Arg(F.p3630, INT64_C(1))), yr3609_IntArg(yr3564_Arg(F.p3630, INT64_C(2))));
(*F.p3632_o) = F.p3632;
(*F.p3633_o) = F.p3633;
return;
}
if ((F.p3629 == v1453)) {
yr3571_NArgs(F.p3630, INT64_C(1));
F.p3632 = yr3578_Call1(y_str("y_raise_termination", 19), yr3609_IntArg(yr3564_Arg(F.p3630, INT64_C(1))));
(*F.p3632_o) = F.p3632;
(*F.p3633_o) = F.p3633;
return;
}
if ((F.p3629 == v1459)) {
yr3571_NArgs(F.p3630, INT64_C(1));
yr3615_CodeInsert(F.p3630);
(*F.p3632_o) = F.p3632;
(*F.p3633_o) = F.p3633;
return;
}
if ((((F.p3629 == v1462)) || ((F.p3629 == v1465)))) {
yr3571_NArgs(F.p3630, INT64_C(1));
yr2839_Expr(yr3564_Arg(F.p3630, INT64_C(1)), ((void *)0), &F.v8952, &F.v8962);
F.p3633 = yr2883_Unbounded(v1336);
if ((F.p3629 == v1462)) {
F.p3632 = yr3187_Join(yr1055_T(y_str("((rt_int)(intptr_t)&(", 21)), F.v8952, yr1055_T(y_str("))", 2)));
} else {
F.p3632 = yr3187_Join(yr1055_T(y_str("((rt_int)sizeof(", 16)), F.v8952, yr1055_T(y_str("))", 2)));
}
(*F.p3632_o) = F.p3632;
(*F.p3633_o) = F.p3633;
return;
}
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3630))).f_line, ((*(yR99 *)rt_nil_check(F.p3630))).f_name, y_str(" is not translated", 18));
(*F.p3632_o) = F.p3632;
(*F.p3633_o) = F.p3633;
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3638_StdRep(yarr a_p3640, void * a_p3641) {
struct yf3642 F;
memset((void *)&F, 0, sizeof F);
F.p3640 = a_p3640;
F.p3641 = a_p3641;
F.v9189 = yr2202_NewSym(v864, yr1075_N(F.p3640));
((*(yR119 *)rt_nil_check(F.v9189))).f_rep = F.p3641;
yr2297_Define(F.v9189, INT64_C(0));
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3646_StdOp(yarr a_p3648, rt_int a_p3649) {
struct yf3650 F;
memset((void *)&F, 0, sizeof F);
F.p3648 = a_p3648;
F.p3649 = a_p3649;
F.v9195 = yr2202_NewSym(v885, yr1075_N(F.p3648));
((*(yR119 *)rt_nil_check(F.v9195))).f_mval = F.p3649;
yr2297_Define(F.v9195, INT64_C(0));
return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3654_LitList(yarr a_p3656, yarr a_p3657, yarr a_p3658, rt_int a_p3659) {
struct yf3660 F;
memset((void *)&F, 0, sizeof F);
F.p3656 = a_p3656;
F.p3657 = a_p3657;
F.p3658 = a_p3658;
F.p3659 = a_p3659;
F.v9203 = ((void *)0);
F.v9205 = ((void *)0);
F.v9207 = ((void *)0);
F.v9207 = yr1888_NewNode(v663, INT64_C(0));
((*(yR99 *)rt_nil_check(F.v9207))).f_name = yr1075_N(F.p3656);
yr1895_Link(&F.v9203, &F.v9205, F.v9207);
F.v9207 = yr1888_NewNode(v663, INT64_C(0));
((*(yR99 *)rt_nil_check(F.v9207))).f_name = yr1075_N(F.p3657);
yr1895_Link(&F.v9203, &F.v9205, F.v9207);
if (F.p3659) {
F.v9207 = yr1888_NewNode(v663, INT64_C(0));
((*(yR99 *)rt_nil_check(F.v9207))).f_name = yr1075_N(F.p3658);
yr1895_Link(&F.v9203, &F.v9205, F.v9207);
}
{ void * rv9211 = F.v9203;
return rv9211; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3664_Abstract(rt_int a_p3665, yarr a_p3667) {
struct yf3668 F;
memset((void *)&F, 0, sizeof F);
F.p3665 = a_p3665;
F.p3667 = a_p3667;
F.v9216 = yr2336_NewRep(F.p3665, yr1075_N(F.p3667));
((*(yR104 *)rt_nil_check(F.v9216))).f_abstract = 1;
{ void * rv9218 = F.v9216;
return rv9218; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3672_Predefine(void) {
struct yf3673 F;
memset((void *)&F, 0, sizeof F);
yr2209_OpenScope(0);
((void * *)(v1766).p)[y_ix1(v1766, v1267)] = ((void *)0);
v1336 = yr3664_Abstract(v798, y_str("INTEGER", 7));
v1350 = yr3664_Abstract(v801, y_str("FIXED", 5));
v1348 = yr3664_Abstract(v804, y_str("FLOATING", 8));
v1352 = yr2336_NewRep(v831, yr1075_N(y_str("SIGNAL", 6)));
v1354 = yr2336_NewRep(v834, yr1075_N(y_str("SEMAPHORE", 9)));
v1342 = yr2336_NewRep(v846, yr1075_N(y_str("no value", 8)));
v1356 = yr2336_NewRep(v852, yr1075_N(y_str("any", 3)));
v1338 = yr2336_NewRep(v807, yr1075_N(y_str("BOOLEAN", 7)));
((*(yR104 *)rt_nil_check(v1338))).f_lits = yr3654_LitList(y_str("FALSE", 5), y_str("TRUE", 4), y_str("", 0), 0);
((*(yR104 *)rt_nil_check(v1338))).f_nlits = INT64_C(2);
yr2566_SetRange(v1338, INT64_C(0), INT64_C(1));
yr2560_DefineLits(v1338);
v1340 = yr2336_NewRep(v813, yr1075_N(y_str("ASCII", 5)));
((*(yR104 *)rt_nil_check(v1340))).f_ordered = 1;
((*(yR104 *)rt_nil_check(v1340))).f_nlits = INT64_C(128);
yr2566_SetRange(v1340, INT64_C(0), INT64_C(127));
v1820 = yr2336_NewRep(v810, yr1075_N(y_str("OPEN_MODE", 9)));
((*(yR104 *)rt_nil_check(v1820))).f_lits = yr3654_LitList(y_str("READ", 4), y_str("WRITE", 5), y_str("APPEND", 6), 1);
((*(yR104 *)rt_nil_check(v1820))).f_nlits = INT64_C(3);
yr2566_SetRange(v1820, INT64_C(0), INT64_C(2));
yr2560_DefineLits(v1820);
yr3638_StdRep(y_str("INTEGER", 7), v1336);
yr3638_StdRep(y_str("FIXED", 5), v1350);
yr3638_StdRep(y_str("FLOATING", 8), v1348);
yr3638_StdRep(y_str("BOOLEAN", 7), v1338);
yr3638_StdRep(y_str("SIGNAL", 6), v1352);
yr3638_StdRep(y_str("SEMAPHORE", 9), v1354);
yr3638_StdRep(y_str("ASCII", 5), v1340);
yr3638_StdRep(y_str("STANDARD_ALPHABET", 17), v1340);
yr3638_StdRep(y_str("OPEN_MODE", 9), v1820);
yr3646_StdOp(y_str("LOW", 3), v1360);
yr3646_StdOp(y_str("HIGH", 4), v1363);
yr3646_StdOp(y_str("SUCC", 4), v1366);
yr3646_StdOp(y_str("PRED", 4), v1369);
yr3646_StdOp(y_str("FIRST", 5), v1372);
yr3646_StdOp(y_str("LAST", 4), v1375);
yr3646_StdOp(y_str("NEW", 3), v1378);
yr3646_StdOp(y_str("OPEN", 4), v1381);
yr3646_StdOp(y_str("CLOSE", 5), v1384);
yr3646_StdOp(y_str("GET", 3), v1387);
yr3646_StdOp(y_str("PUT", 3), v1390);
yr3646_StdOp(y_str("CHECK_EOF", 9), v1393);
yr3646_StdOp(y_str("MOVE", 4), v1396);
yr3646_StdOp(y_str("AND_LONG", 8), v1399);
yr3646_StdOp(y_str("OR_LONG", 7), v1402);
yr3646_StdOp(y_str("DELAY", 5), v1405);
yr3646_StdOp(y_str("CLOCK_TIME", 10), v1408);
yr3646_StdOp(y_str("WAIT", 4), v1411);
yr3646_StdOp(y_str("SEND", 4), v1414);
yr3646_StdOp(y_str("AWAITED", 7), v1417);
yr3646_StdOp(y_str("FLOOR", 5), v1420);
yr3646_StdOp(y_str("CEILING", 7), v1423);
yr3646_StdOp(y_str("NEAR_INTEGER", 12), v1426);
yr3646_StdOp(y_str("NEAR_FIXED", 10), v1429);
yr3646_StdOp(y_str("NEAR_FLOATING", 13), v1432);
yr3646_StdOp(y_str("FIXED_DIV", 9), v1435);
yr3646_StdOp(y_str("CLAIM", 5), v1438);
yr3646_StdOp(y_str("RELEASE", 7), v1441);
yr3646_StdOp(y_str("CONDITIONAL_CLAIM", 17), v1444);
yr3646_StdOp(y_str("PROCESS_IDENTITY", 16), v1447);
yr3646_StdOp(y_str("CHANGE_PRIORITY", 15), v1450);
yr3646_StdOp(y_str("RAISE_PROCESS_TERMINATION", 25), v1453);
yr3646_StdOp(y_str("FREE_POINTER", 12), v1456);
yr3646_StdOp(y_str("C_CODE_INSERT", 13), v1459);
yr3646_StdOp(y_str("ADDR", 4), v1462);
yr3646_StdOp(y_str("EXTENT", 6), v1465);
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3677_Translate(void) {
struct yf3678 F;
memset((void *)&F, 0, sizeof F);
F.v9296 = v1822;
yr2209_OpenScope(0);
((void * *)(v1766).p)[y_ix1(v1766, v1267)] = ((void *)0);
v1273 = INT64_C(0);
((void * *)(v1296).p)[y_ix1(v1296, v1267)] = v1822;
while ((!(F.v9296 == ((void *)0)))) {
if ((((*(yR99 *)rt_nil_check(F.v9296))).f_ival == INT64_C(0))) {
yr3484_CompileModule(F.v9296);
}
F.v9296 = ((*(yR99 *)rt_nil_check(F.v9296))).f_next;
}
yr3455_ResolveLater(v1267);
yr3371_RunDeferred(INT64_C(0), INT64_C(0));
yr3283_CheckEffects();
yr3508_AwaitProcesses();
return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3682_WriteProgram(void) {
struct yf3683 F;
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
yr3672_Predefine();
yr3677_Translate();
yr3682_WriteProgram();
y_close(&v905);
}
int main(int argc, char **argv) {
y_lang();
rt_init(argc, argv);
y_elaborate();
rt_main_done();
return 0;
}
