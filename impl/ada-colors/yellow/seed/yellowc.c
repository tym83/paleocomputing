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
struct yf3549;
struct yf3554;
struct yf3560;
struct yf3567;
struct yf3574;
struct yf3581;
struct yf3588;
struct yf3595;
struct yf3603;
struct yf3609;
struct yf3618;
struct yf3626;
struct yf3632;
struct yf3638;
struct yf3645;
struct yf3655;
struct yf3663;
struct yf3671;
struct yf3681;
struct yf3689;
struct yf3694;
struct yf3699;
struct yf3704;
struct yf7897;
struct yf7904;
struct yf7910;
struct yR99 { rt_int f_kind; rt_int f_line; rt_int f_ival; rt_int f_flag; rt_int f_name; rt_int f_text; void * f_a; void * f_b; void * f_c; void * f_d; void * f_e; void * f_next; void * f_rep; void * f_sym; void * f_x; };
struct yR104 { rt_int f_kind; rt_int f_tid; rt_int f_tname; rt_int f_lo; rt_int f_hi; rt_int f_mlo; rt_int f_mhi; rt_int f_hasm; rt_int f_scale; rt_int f_prec; void * f_elem; void * f_idx; rt_int f_nidx; void * f_link; void * f_lits; rt_int f_nlits; void * f_fields; void * f_selector; rt_int f_cname; rt_int f_dname; rt_int f_dlevel; rt_int f_deep; rt_int f_abstract; rt_int f_opaque; rt_int f_opaqueops; rt_int f_ordered; rt_int f_forward; rt_int f_fwdscope; void * f_monitor; rt_int f_serial; rt_int f_sig; rt_int f_fsn; rt_int f_fsd; };
struct yR109 { rt_int f_name; void * f_rep; rt_int f_isconst; rt_int f_variant; void * f_labels; void * f_next; };
struct yR114 { rt_int f_name; rt_int f_cls; void * f_rep; rt_int f_cname; void * f_next; };
struct yR119 { rt_int f_kind; rt_int f_name; void * f_rep; rt_int f_cname; rt_int f_level; rt_int f_byref; rt_int f_readonly; rt_int f_mval; rt_int f_hasmv; void * f_params; rt_int f_nparams; void * f_ret; rt_int f_func; void * f_decl; rt_int f_depth; void * f_target; void * f_members; void * f_mnext; void * f_chain; void * f_stack; void * f_alt; void * f_monitor; rt_int f_serial; void * f_calls; void * f_writes; void * f_frees; rt_int f_seen; rt_int f_vix; };
struct yR124 { void * f_syms; rt_int f_closed; void * f_module; rt_int f_level; void * f_deferred; void * f_up; };
struct yR129 { rt_int f_t; void * f_next; };
struct yR134 { void * f_head; void * f_tail; };
struct yf998 { void *up;
rt_int v3709;
rt_int c_3712;
rt_int yu;
};
struct yf1004 { void *up;
unsigned char p1003;
rt_int yu;
};
struct yf1010 { void *up;
unsigned char p1009;
rt_int yu;
};
struct yf1016 { void *up;
unsigned char p1015;
rt_int yu;
};
struct yf1021 { void *up;
rt_int yu;
};
struct yf1027 { void *up;
unsigned char p1026;
rt_int yu;
};
struct yf1034 { void *up;
yarr p1033;
rt_int lo3748;
rt_int hi3749;
rt_int c_3751;
rt_int yu;
};
struct yf1040 { void *up;
rt_int p1039;
rt_int v3757;
rt_int yu;
};
struct yf1046 { void *up;
rt_int p1045;
ydesc yd_3772;
yarr v3774;
rt_int v3776;
rt_int v3779;
rt_int yu;
};
struct yf1051 { void *up;
rt_int v3798;
rt_int lo3809;
rt_int hi3810;
rt_int c_3812;
rt_int yu;
};
struct yf1058 { void *up;
yarr p1057;
rt_int yu;
};
struct yf1065 { void *up;
rt_int p1063;
rt_int p1064;
rt_int v3823;
rt_int v3826;
rt_int v3828;
rt_int lo3833;
rt_int hi3834;
rt_int c_3836;
rt_int lo3855;
rt_int hi3856;
rt_int c_3858;
rt_int yu;
};
struct yf1071 { void *up;
rt_int p1070;
rt_int yu;
};
struct yf1078 { void *up;
yarr p1077;
rt_int yu;
};
struct yf1085 { void *up;
rt_int p1083;
rt_int p1084;
rt_int lo3887;
rt_int hi3888;
rt_int c_3890;
rt_int yu;
};
struct yf1093 { void *up;
rt_int p1090;
yarr p1092;
rt_int v3903;
rt_int lo3919;
rt_int hi3920;
rt_int c_3922;
rt_int yu;
};
struct yf1100 { void *up;
rt_int p1098;
rt_int p1099;
rt_int yu;
};
struct yf1107 { void *up;
yR134 * p1105;
rt_int p1106;
void * v3943;
rt_int yu;
};
struct yf1115 { void *up;
yR134 * p1112;
yarr p1114;
rt_int yu;
};
struct yf1122 { void *up;
yR134 * p1120;
yR134 * p1121;
rt_int yu;
};
struct yf1128 { void *up;
rt_int p1127;
rt_int yu;
};
struct yf1135 { void *up;
yarr p1134;
rt_int yu;
};
struct yf1141 { void *up;
rt_int p1140;
rt_int v3957;
rt_int yu;
};
struct yf1147 { void *up;
yR134 p1146;
void * v3964;
rt_int yu;
};
struct yf1154 { void *up;
rt_int p1152;
rt_int p1153;
rt_int v3970;
rt_int yu;
};
struct yf1161 { void *up;
rt_int p1159;
rt_int p1160;
rt_int v3980;
rt_int yu;
};
struct yf1168 { void *up;
yfile * * p1166;
rt_int p1167;
rt_int v3990;
rt_int yu;
};
struct yf1176 { void *up;
rt_int p1173;
yarr p1175;
rt_int yu;
};
struct yf1185 { void *up;
rt_int p1181;
rt_int p1182;
yarr p1184;
rt_int v4002;
rt_int yu;
};
struct yf1190 { void *up;
rt_int yu;
};
struct yf1197 { void *up;
yarr p1196;
rt_int v4010;
rt_int yu;
};
struct yf1825 { void *up;
rt_int v4014;
rt_int v4016;
rt_int v4018;
rt_int lo4035;
rt_int hi4036;
rt_int c_4038;
rt_int yu;
};
struct yf1830 { void *up;
unsigned char v4047;
rt_int yu;
};
struct yf1837 { void *up;
rt_int p1835;
rt_int p1836;
rt_int yu;
};
struct yf1843 { void *up;
rt_int p1842;
rt_int yu;
};
struct yf1848 { void *up;
rt_int v4064;
rt_int v4066;
rt_int yu;
};
struct yf1854 { void *up;
unsigned char p1853;
rt_int yu;
};
struct yf1861 { void *up;
yarr p1860;
rt_int yu;
};
struct yf1868 { void *up;
rt_int p1866;
rt_int p1867;
rt_int v4096;
rt_int yu;
};
struct yf1874 { void *up;
rt_int p1873;
rt_int v4106;
rt_int v4109;
rt_int v4111;
rt_int v4113;
rt_int v4115;
rt_int v4117;
rt_int v4120;
rt_int v4123;
rt_int v4126;
rt_int v4129;
rt_int v4132;
rt_int v4135;
rt_int v4138;
rt_int lo4176;
rt_int hi4177;
rt_int c_4179;
rt_int lo4208;
rt_int hi4209;
rt_int c_4211;
rt_int lo4218;
rt_int hi4219;
rt_int c_4221;
rt_int yu;
};
struct yf1879 { void *up;
rt_int v4232;
rt_int v4234;
rt_int v4236;
rt_int v4238;
rt_int yu;
};
struct yf1884 { void *up;
unsigned char v4267;
rt_int v4269;
rt_int v4271;
rt_int v4273;
rt_int v4275;
rt_int v4277;
rt_int v4279;
rt_int v4281;
rt_int lo4356;
rt_int hi4357;
rt_int c_4359;
rt_int yu;
};
struct yf1891 { void *up;
rt_int p1889;
rt_int p1890;
void * v4375;
rt_int yu;
};
struct yf1899 { void *up;
void * * p1896;
void * * p1897;
void * p1898;
rt_int yu;
};
struct yf1905 { void *up;
void * p1904;
rt_int v4388;
void * v4391;
rt_int yu;
};
struct yf1910 { void *up;
rt_int yu;
};
struct yf1915 { void *up;
rt_int yu;
};
struct yf1920 { void *up;
rt_int yu;
};
struct yf1927 { void *up;
rt_int p1925;
rt_int p1926;
rt_int v4405;
rt_int yu;
};
struct yf1933 { void *up;
rt_int p1932;
rt_int yu;
};
struct yf1939 { void *up;
rt_int p1938;
rt_int yu;
};
struct yf1944 { void *up;
rt_int yu;
};
struct yf1950 { void *up;
rt_int p1949;
rt_int yu;
};
struct yf1955 { void *up;
rt_int v4428;
rt_int yu;
};
struct yf1961 { void *up;
rt_int p1960;
rt_int v4438;
rt_int yu;
};
struct yf1966 { void *up;
rt_int v4443;
rt_int yu;
};
struct yf1973 { void *up;
rt_int p1971;
rt_int p1972;
rt_int v4450;
rt_int yu;
};
struct yf1978 { void *up;
rt_int v4454;
rt_int yu;
};
struct yf1984 { void *up;
rt_int p1983;
void * v4464;
rt_int yu;
};
struct yf1989 { void *up;
void * v4471;
rt_int yu;
};
struct yf1994 { void *up;
void * v4476;
void * v4478;
void * v4480;
void * v4482;
rt_int v4484;
rt_int yu;
};
struct yf1999 { void *up;
rt_int v4493;
rt_int yu;
};
struct yf2004 { void *up;
void * v4499;
void * v4501;
void * v4503;
void * v4505;
rt_int yu;
};
struct yf2009 { void *up;
void * v4510;
void * v4512;
void * v4514;
void * v4516;
void * v4518;
rt_int yu;
};
struct yf2014 { void *up;
void * v4526;
void * v4528;
void * v4530;
rt_int yu;
};
struct yf2020 { void *up;
rt_int p2019;
void * v4536;
rt_int yu;
};
struct yf2026 { void *up;
rt_int p2025;
rt_int yu;
};
struct yf2033 { void *up;
void * * p2031;
void * * p2032;
rt_int v4557;
void * v4559;
void * v4561;
void * v4563;
rt_int yu;
};
struct yf2038 { void *up;
void * v4567;
void * v4569;
void * v4571;
rt_int v4573;
rt_int v4575;
rt_int v4577;
rt_int yu;
};
struct yf2044 { void *up;
void * p2043;
void * v4593;
void * v4595;
rt_int v4597;
rt_int yu;
};
struct yf2049 { void *up;
void * v4603;
rt_int yu;
};
struct yf2055 { void *up;
rt_int p2054;
rt_int v4615;
rt_int yu;
};
struct yf2060 { void *up;
rt_int v4623;
void * v4625;
rt_int yu;
};
struct yf2065 { void *up;
void * v4634;
void * v4636;
rt_int yu;
};
struct yf2070 { void *up;
void * v4640;
void * v4642;
void * v4644;
rt_int yu;
};
struct yf2075 { void *up;
void * v4649;
void * v4651;
void * v4653;
rt_int v4655;
rt_int yu;
};
struct yf2080 { void *up;
void * v4662;
void * v4664;
void * v4666;
void * v4668;
void * v4670;
void * v4672;
rt_int v4674;
rt_int v4676;
rt_int yu;
};
struct yf2085 { void *up;
void * v4693;
rt_int yu;
};
struct yf2090 { void *up;
rt_int v4698;
rt_int yu;
};
struct yf2096 { void *up;
rt_int p2095;
void * v4707;
void * v4709;
void * v4711;
rt_int v4713;
rt_int yu;
};
struct yf2101 { void *up;
void * v4721;
void * v4723;
void * v4725;
void * v4727;
void * v4729;
void * v4731;
rt_int v4733;
rt_int v4735;
rt_int yu;
};
struct yf2106 { void *up;
rt_int yu;
};
struct yf2112 { void *up;
rt_int p2111;
rt_int yu;
};
struct yf2118 { void *up;
rt_int p2117;
rt_int yu;
};
struct yf2124 { void *up;
rt_int p2123;
rt_int yu;
};
struct yf2130 { void *up;
rt_int p2129;
rt_int yu;
};
struct yf2136 { void *up;
rt_int p2135;
rt_int yu;
};
struct yf2145 { void *up;
rt_int p2141;
void * p2142;
void * p2143;
rt_int p2144;
void * v4789;
rt_int yu;
};
struct yf2152 { void *up;
rt_int p2150;
rt_int p2151;
rt_int v4795;
rt_int yu;
};
struct yf2157 { void *up;
void * v4799;
rt_int v4801;
rt_int v4803;
rt_int yu;
};
struct yf2162 { void *up;
void * v4807;
void * v4809;
rt_int v4811;
rt_int v4813;
rt_int yu;
};
struct yf2167 { void *up;
void * v4819;
rt_int v4821;
rt_int v4823;
rt_int yu;
};
struct yf2173 { void *up;
rt_int p2172;
rt_int v4829;
rt_int yu;
};
struct yf2178 { void *up;
void * v4834;
rt_int v4836;
rt_int v4838;
rt_int yu;
};
struct yf2183 { void *up;
void * v4842;
rt_int v4844;
rt_int v4846;
rt_int yu;
};
struct yf2188 { void *up;
void * v4867;
void * v4869;
void * v4871;
rt_int v4873;
rt_int yu;
};
struct yf2193 { void *up;
rt_int yu;
};
struct yf2198 { void *up;
void * v4880;
void * v4882;
rt_int yu;
};
struct yf2205 { void *up;
rt_int p2203;
rt_int p2204;
void * v4889;
rt_int yu;
};
struct yf2211 { void *up;
rt_int p2210;
void * v4906;
rt_int yu;
};
struct yf2217 { void *up;
void * p2216;
void * v4913;
rt_int v4915;
rt_int v4918;
rt_int yu;
};
struct yf2222 { void *up;
void * v4930;
void * v4932;
void * v4934;
rt_int v4936;
rt_int yu;
};
struct yf2228 { void *up;
void * p2227;
rt_int yu;
};
struct yf2234 { void *up;
rt_int p2233;
void * v4948;
rt_int yu;
};
struct yf2240 { void *up;
rt_int p2239;
void * v4956;
rt_int yu;
};
struct yf2247 { void *up;
rt_int p2245;
rt_int p2246;
void * v4965;
void * v4967;
rt_int lo4973;
rt_int hi4974;
rt_int c_4976;
rt_int yu;
};
struct yf2254 { void *up;
void * p2252;
void * p2253;
void * v4986;
rt_int yu;
};
struct yf2260 { void *up;
rt_int p2259;
rt_int yu;
};
struct yf2267 { void *up;
void * p2265;
rt_int p2266;
void * v4998;
void * v5000;
rt_int v5002;
rt_int yu;
};
struct yf2274 { void *up;
void * p2272;
rt_int p2273;
void * v5018;
rt_int yu;
};
struct yf2281 { void *up;
void * p2279;
rt_int p2280;
void * v5043;
rt_int yu;
};
struct yf2287 { void *up;
void * p2286;
rt_int yu;
};
struct yf2293 { void *up;
void * p2292;
void * v5058;
rt_int yu;
};
struct yf2300 { void *up;
rt_int p2298;
void * p2299;
void * v5067;
rt_int yu;
};
struct yf2307 { void *up;
void * p2305;
rt_int p2306;
void * v5076;
rt_int v5078;
rt_int yu;
};
struct yf2314 { void *up;
rt_int p2312;
rt_int p2313;
rt_int v5086;
rt_int yu;
};
struct yf2320 { void *up;
rt_int p2319;
rt_int v5101;
rt_int yu;
};
struct yf2327 { void *up;
rt_int p2325;
rt_int p2326;
rt_int v5116;
rt_int yu;
};
struct yf2333 { void *up;
void * p2332;
rt_int v5125;
rt_int yu;
};
struct yf2339 { void *up;
void * p2338;
void * v5133;
rt_int yu;
};
struct yf2346 { void *up;
rt_int p2344;
rt_int p2345;
void * v5140;
rt_int yu;
};
struct yf2352 { void *up;
void * p2351;
void * v5168;
rt_int yu;
};
struct yf2358 { void *up;
void * p2357;
rt_int yu;
};
struct yf2364 { void *up;
void * p2363;
rt_int yu;
};
struct yf2370 { void *up;
void * p2369;
rt_int yu;
};
struct yf2376 { void *up;
void * p2375;
rt_int yu;
};
struct yf2382 { void *up;
void * p2381;
rt_int yu;
};
struct yf2389 { void *up;
void * p2387;
rt_int p2388;
void * v5199;
rt_int yu;
};
struct yf2395 { void *up;
void * p2394;
rt_int yu;
};
struct yf2401 { void *up;
void * p2400;
rt_int v5211;
rt_int yu;
};
struct yf2407 { void *up;
void * p2406;
rt_int v5218;
rt_int yu;
};
struct yf2413 { void *up;
void * p2412;
rt_int v5245;
rt_int yu;
};
struct yf2419 { void *up;
void * p2418;
rt_int yu;
};
struct yf2426 { void *up;
void * p2424;
void * p2425;
rt_int yu;
};
struct yf2434 { void *up;
rt_int p2431;
void * p2432;
void * p2433;
rt_int v5294;
rt_int yu;
};
struct yf2442 { void *up;
rt_int p2439;
void * p2440;
void * p2441;
rt_int yu;
};
struct yf2449 { void *up;
void * p2447;
rt_int p2448;
rt_int yu;
};
struct yf2455 { void *up;
void * p2454;
rt_int v5309;
void * v5311;
void * v5313;
rt_int yu;
};
struct yf2461 { void *up;
void * p2460;
rt_int yu;
};
struct yf2468 { void *up;
void * p2466;
void * p2467;
rt_int yu;
};
struct yf2474 { void *up;
void * p2473;
rt_int yu;
};
struct yf2482 { void *up;
void * p2479;
yarr p2481;
rt_int v5359;
rt_int v5361;
rt_int yu;
};
struct yf2488 { void *up;
void * p2487;
rt_int yu;
};
struct yf2494 { void *up;
void * p2493;
rt_int yu;
};
struct yf2502 { void *up;
void * p2499;
void * p2500;
void * p2501;
void * v5387;
rt_int yu;
};
struct yf2508 { void *up;
void * p2507;
rt_int yu;
};
struct yf2515 { void *up;
rt_int p2513;
rt_int p2514;
rt_int v5399;
rt_int v5401;
rt_int v5403;
rt_int yu;
};
struct yf2523 { void *up;
rt_int p2520;
rt_int p2521;
rt_int p2522;
rt_int v5419;
rt_int v5421;
rt_int yu;
};
struct yf2531 { void *up;
rt_int p2528;
rt_int p2529;
rt_int p2530;
rt_int v5436;
rt_int lo5441;
rt_int hi5442;
rt_int c_5444;
rt_int yu;
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
rt_int v5455;
rt_int v5457;
rt_int v5459;
rt_int v5461;
rt_int v5463;
rt_int v5465;
rt_int yu;
};
struct yf2548 { void *up;
rt_int p2546;
rt_int p2547;
rt_int yu;
};
struct yf2556 { void *up;
void * p2553;
rt_int p2554;
rt_int p2555;
rt_int v5494;
rt_int yu;
};
struct yf2563 { void *up;
void * p2561;
void * p2562;
rt_int v5504;
rt_int v5506;
rt_int v5508;
rt_int v5510;
void * v5512;
void * v5514;
rt_int v5516;
rt_int v5518;
rt_int v5520;
rt_int v5522;
rt_int v5524;
rt_int yu;
};
struct yf2569 { void *up;
void * p2568;
void * v5556;
void * v5558;
rt_int v5560;
rt_int yu;
};
struct yf2577 { void *up;
void * p2574;
rt_int p2575;
rt_int p2576;
rt_int yu;
};
struct yf2583 { void *up;
rt_int p2582;
rt_int v5575;
rt_int yu;
};
struct yf2591 { void *up;
void * p2588;
rt_int p2589;
rt_int p2590;
void * v5585;
void * v5587;
rt_int yu;
};
struct yf2598 { void *up;
void * p2596;
void * p2597;
void * v5595;
void * v5597;
void * v5599;
void * v5601;
void * v5603;
void * v5605;
rt_int yu;
};
struct yf2606 { void *up;
void * p2603;
rt_int p2604;
rt_int p2605;
void * v5634;
void * v5636;
void * v5638;
void * v5640;
void * v5642;
rt_int v5644;
void * v5646;
rt_int v5648;
rt_int v5650;
rt_int yu;
};
struct yf2613 { void *up;
rt_int p2611;
void * p2612;
void * v5697;
void * v5699;
rt_int yu;
};
struct yf2618 { void *up;
void * v5703;
rt_int yu;
};
struct yf2624 { void *up;
void * p2623;
void * v5708;
rt_int v5710;
rt_int v5712;
rt_int yu;
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
void * v5737;
rt_int yu;
};
struct yf2648 { void *up;
void * p2642;
void * * p2643;
void * p2644;
rt_int p2645;
void * p2646;
rt_int p2647;
void * v5749;
void * v5751;
void * v5753;
rt_int yu;
};
struct yf2656 { void *up;
void * p2653;
void * p2654;
rt_int p2655;
void * v5760;
void * v5762;
void * v5764;
void * v5766;
rt_int v5768;
void * v5771;
rt_int v5773;
rt_int v5775;
rt_int yu;
};
struct yf2663 { void *up;
void * p2661;
rt_int p2662;
void * v5822;
rt_int yu;
};
struct yf2670 { void *up;
void * p2668;
rt_int p2669;
void * v5829;
rt_int v5831;
rt_int v5833;
rt_int v5835;
rt_int v5837;
rt_int lo5846;
rt_int hi5847;
rt_int c_5849;
rt_int yu;
};
struct yf2677 { void *up;
void * p2675;
void * p2676;
void * v5888;
void * v5890;
void * v5892;
rt_int v5894;
rt_int v5897;
rt_int yu;
};
struct yf2685 { void *up;
void * p2682;
rt_int p2683;
rt_int p2684;
rt_int v5922;
rt_int v5924;
rt_int yu;
};
struct yf2694 { void *up;
void * p2690;
rt_int p2691;
rt_int p2692;
rt_int * p2692_o;
rt_int p2693;
rt_int v5935;
rt_int v5937;
rt_int v5939;
ydesc yd_5948;
yarr v5950;
unsigned char v5952;
rt_int v5954;
rt_int lo5983;
rt_int hi5984;
rt_int c_5986;
rt_int yu;
};
struct yf2702 { void *up;
void * p2699;
rt_int p2700;
rt_int * p2700_o;
rt_int p2701;
rt_int * p2701_o;
void * v6021;
rt_int v6023;
rt_int v6025;
rt_int v6027;
rt_int v6029;
rt_int v6031;
void * v6033;
rt_int yu;
};
struct yf2710 { void *up;
void * p2707;
rt_int p2708;
rt_int * p2708_o;
rt_int p2709;
rt_int * p2709_o;
void * v6063;
rt_int v6065;
rt_int v6067;
rt_int v6069;
rt_int v6071;
rt_int v6073;
void * v6075;
void * v6077;
rt_int lo6094;
rt_int hi6095;
rt_int c_6097;
rt_int yu;
};
struct yf2717 { void *up;
void * p2715;
void * p2716;
rt_int yu;
};
struct yf2725 { void *up;
rt_int p2722;
void * p2723;
void * p2724;
rt_int v6125;
rt_int v6127;
void * v6129;
void * v6131;
rt_int yu;
};
struct yf2733 { void *up;
rt_int p2730;
void * p2731;
void * p2732;
rt_int v6160;
rt_int v6162;
rt_int v6164;
rt_int v6166;
rt_int v6168;
rt_int v6170;
rt_int yu;
};
struct yf2741 { void *up;
rt_int p2738;
void * p2739;
void * p2740;
rt_int v6217;
rt_int v6219;
rt_int v6221;
rt_int yu;
};
struct yf2752 { void *up;
rt_int * p2746;
void * p2747;
rt_int * p2748;
void * p2749;
void * p2750;
rt_int p2751;
rt_int v6236;
rt_int v6238;
rt_int yu;
};
struct yf2760 { void *up;
void * p2757;
rt_int p2758;
rt_int * p2758_o;
void * p2759;
void * * p2759_o;
rt_int v6245;
rt_int v6247;
rt_int yu;
};
struct yf2769 { void *up;
void * p2765;
rt_int p2766;
rt_int * p2766_o;
rt_int p2767;
rt_int * p2767_o;
rt_int p2768;
rt_int * p2768_o;
rt_int v6261;
rt_int v6263;
rt_int v6265;
rt_int v6267;
rt_int v6269;
rt_int v6271;
rt_int yu;
};
struct yf2775 { void *up;
rt_int p2774;
rt_int yu;
};
struct yf2783 { void *up;
rt_int p2780;
void * p2781;
void * p2782;
rt_int v6292;
rt_int yu;
};
struct yf2793 { void *up;
rt_int p2788;
void * p2789;
rt_int p2790;
void * p2791;
rt_int p2792;
rt_int v6331;
rt_int yu;
};
struct yf2803 { void *up;
rt_int p2798;
void * p2799;
rt_int p2800;
void * p2801;
rt_int p2802;
rt_int yu;
};
struct yf2809 { void *up;
void * p2808;
void * v6353;
void * v6355;
rt_int yu;
};
struct yf2815 { void *up;
void * p2814;
void * v6374;
void * v6376;
rt_int yu;
};
struct yf2823 { void *up;
void * p2820;
rt_int p2821;
rt_int * p2821_o;
void * p2822;
void * * p2822_o;
rt_int yu;
};
struct yf2829 { void *up;
rt_int p2828;
rt_int yu;
};
struct yf2836 { void *up;
void * p2834;
rt_int p2835;
void * v6394;
rt_int yu;
};
struct yf2842 { void *up;
void * p2841;
void * v6399;
rt_int yu;
};
struct yf2851 { void *up;
void * p2847;
void * p2848;
rt_int p2849;
rt_int * p2849_o;
void * p2850;
void * * p2850_o;
rt_int v6408;
void * v6410;
rt_int v6412;
rt_int v6414;
void * v6416;
void * v6418;
void * v6420;
rt_int v6422;
rt_int v6424;
rt_int yu;
};
struct yf2859 { void *up;
void * p2856;
void * p2857;
rt_int p2858;
void * v6467;
rt_int v6469;
rt_int v6471;
rt_int yu;
};
struct yf2868 { void *up;
void * p2864;
void * p2865;
rt_int p2866;
rt_int * p2866_o;
void * p2867;
void * * p2867_o;
void * v6483;
rt_int yu;
};
struct yf2876 { void *up;
void * p2873;
rt_int p2874;
rt_int * p2874_o;
void * p2875;
void * * p2875_o;
rt_int v6492;
rt_int v6494;
rt_int v6496;
void * v6498;
void * v6500;
void * v6502;
void * v6504;
rt_int v6506;
rt_int v6508;
rt_int yu;
};
struct yf2886 { void *up;
void * p2881;
rt_int p2882;
void * p2883;
rt_int p2884;
rt_int * p2884_o;
void * p2885;
void * * p2885_o;
rt_int yu;
};
struct yf2892 { void *up;
void * p2891;
void * v6546;
rt_int yu;
};
struct yf2901 { void *up;
yarr p2898;
rt_int p2899;
rt_int p2900;
rt_int yu;
};
struct yf2910 { void *up;
rt_int p2906;
yarr p2908;
rt_int p2909;
rt_int yu;
};
struct yf2919 { void *up;
rt_int p2915;
void * p2916;
rt_int p2917;
void * p2918;
rt_int v6574;
rt_int v6576;
void * v6578;
rt_int yu;
};
struct yf2925 { void *up;
void * p2924;
rt_int yu;
};
struct yf2932 { void *up;
rt_int p2930;
void * p2931;
rt_int yu;
};
struct yf2941 { void *up;
void * p2937;
void * p2938;
rt_int p2939;
rt_int * p2939_o;
void * p2940;
void * * p2940_o;
rt_int v6616;
rt_int v6618;
rt_int v6620;
rt_int v6622;
void * v6624;
void * v6626;
void * v6628;
rt_int v6630;
rt_int yu;
};
struct yf2948 { void *up;
void * p2946;
void * p2947;
rt_int yu;
};
struct yf2956 { void *up;
void * p2953;
rt_int p2954;
rt_int p2955;
void * v6690;
void * v6692;
rt_int v6694;
rt_int v6696;
rt_int yu;
};
struct yf2962 { void *up;
void * p2961;
void * v6708;
rt_int yu;
};
struct yf2971 { void *up;
void * p2967;
void * p2968;
rt_int p2969;
rt_int * p2969_o;
rt_int p2970;
rt_int * p2970_o;
void * v6720;
void * v6722;
void * v6724;
rt_int yu;
};
struct yf2979 { void *up;
void * p2976;
void * p2977;
rt_int p2978;
void * v6739;
rt_int yu;
};
struct yf2986 { void *up;
void * p2984;
void * p2985;
rt_int yu;
};
struct yf2995 { void *up;
void * p2991;
rt_int p2992;
rt_int p2993;
rt_int p2994;
void * v6756;
rt_int v6758;
rt_int v6762;
rt_int v6765;
rt_int v6768;
rt_int v6771;
rt_int v6774;
rt_int v6777;
rt_int yu;
};
struct yf3001 { void *up;
rt_int p3000;
rt_int yu;
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
void * v6835;
void * v6837;
rt_int v6839;
rt_int v6841;
rt_int yu;
};
struct yf3019 { void *up;
void * p3017;
rt_int p3018;
void * v6855;
void * v6857;
rt_int yu;
};
struct yf3029 { void *up;
rt_int p3024;
void * p3025;
rt_int p3026;
void * p3027;
rt_int p3028;
void * v6867;
void * v6869;
void * v6871;
void * v6873;
rt_int v6875;
rt_int yu;
};
struct yf3039 { void *up;
rt_int p3034;
void * p3035;
rt_int p3036;
void * p3037;
rt_int p3038;
rt_int v6917;
rt_int yu;
};
struct yf3049 { void *up;
void * p3044;
void * p3045;
rt_int p3046;
rt_int p3047;
rt_int * p3047_o;
void * p3048;
void * * p3048_o;
void * v6926;
void * v6928;
rt_int v6930;
rt_int v6932;
rt_int yu;
};
struct yf3058 { void *up;
void * p3054;
void * p3055;
rt_int p3056;
rt_int * p3056_o;
void * p3057;
void * * p3057_o;
void * v6944;
void * v6946;
rt_int v6948;
rt_int v6950;
rt_int v6952;
void * v6954;
rt_int v6956;
rt_int v6958;
rt_int v6960;
rt_int v6962;
rt_int v6964;
rt_int v6967;
void * v6969;
rt_int v6971;
rt_int yu;
};
struct yf3066 { void *up;
void * p3063;
rt_int p3064;
rt_int p3065;
void * v7033;
void * v7035;
rt_int v7037;
rt_int v7039;
rt_int yu;
};
struct yf3074 { void *up;
yarr p3072;
rt_int p3073;
rt_int v7048;
rt_int yu;
};
struct yf3084 { void *up;
yarr p3080;
rt_int p3081;
yarr p3083;
rt_int v7054;
rt_int yu;
};
struct yf3090 { void *up;
rt_int p3089;
rt_int yu;
};
struct yf3095 { void *up;
rt_int yu;
};
struct yf3101 { void *up;
rt_int p3100;
rt_int yu;
};
struct yf3107 { void *up;
void * p3106;
rt_int v7076;
rt_int v7078;
rt_int v7080;
void * v7082;
void * v7084;
rt_int v7086;
void * v7088;
rt_int v7090;
rt_int yu;
};
struct yf3114 { void *up;
void * p3112;
void * p3113;
void * v7156;
void * v7158;
rt_int v7160;
rt_int v7162;
rt_int v7164;
rt_int v7166;
rt_int yu;
};
struct yf3122 { void *up;
void * p3119;
void * p3120;
void * p3121;
rt_int v7188;
void * v7190;
void * v7192;
void * v7194;
rt_int v7196;
rt_int v7198;
rt_int v7200;
rt_int v7202;
rt_int yu;
};
struct yf3129 { void *up;
void * p3127;
void * p3128;
void * v7215;
void * v7217;
rt_int v7219;
rt_int v7222;
rt_int lo7227;
rt_int hi7228;
rt_int c_7230;
rt_int yu;
};
struct yf3135 { void *up;
void * p3134;
void * v7240;
rt_int v7242;
rt_int yu;
};
struct yf3141 { void *up;
void * p3140;
void * v7250;
rt_int yu;
};
struct yf3147 { void *up;
void * p3146;
rt_int v7264;
void * v7266;
rt_int v7268;
rt_int v7270;
rt_int yu;
};
struct yf3154 { void *up;
void * p3152;
rt_int p3153;
void * v7295;
void * v7297;
rt_int yu;
};
struct yf3160 { void *up;
void * p3159;
void * v7321;
rt_int yu;
};
struct yf3166 { void *up;
void * p3165;
rt_int v7325;
void * v7327;
rt_int yu;
};
struct yf3173 { void *up;
void * p3171;
void * p3172;
rt_int v7333;
rt_int v7335;
void * v7337;
void * v7339;
rt_int v7341;
rt_int yu;
};
struct yf3178 { void *up;
void * v7347;
rt_int v7349;
rt_int yu;
};
struct yf3184 { void *up;
void * p3183;
rt_int v7356;
rt_int v7358;
rt_int v7360;
rt_int v7362;
rt_int v7364;
rt_int v7366;
rt_int v7368;
void * v7370;
void * v7372;
void * v7374;
void * v7376;
rt_int v7378;
rt_int v7380;
rt_int v7382;
rt_int v7384;
void * v7386;
rt_int yu;
};
struct yf3190 { void *up;
void * p3189;
void * v7460;
rt_int v7462;
rt_int v7464;
rt_int v7466;
void * v7468;
rt_int yu;
};
struct yf3198 { void *up;
rt_int p3195;
rt_int p3196;
rt_int p3197;
rt_int yu;
};
struct yf3204 { void *up;
void * p3203;
rt_int v7500;
rt_int v7502;
rt_int v7504;
void * v7506;
void * v7508;
rt_int yu;
};
struct yf3210 { void *up;
void * p3209;
rt_int v7524;
rt_int v7526;
rt_int yu;
};
struct yf3216 { void *up;
void * p3215;
void * v7553;
rt_int yu;
};
struct yf3222 { void *up;
void * p3221;
void * v7568;
rt_int yu;
};
struct yf3228 { void *up;
void * p3227;
void * v7578;
void * v7580;
void * v7582;
rt_int yu;
};
struct yf3237 { void *up;
void * p3233;
void * p3234;
void * * p3234_o;
rt_int p3235;
rt_int * p3235_o;
rt_int p3236;
rt_int * p3236_o;
void * v7590;
void * v7592;
rt_int yu;
};
struct yf3245 { void *up;
void * p3242;
rt_int p3243;
rt_int p3244;
void * v7602;
rt_int yu;
};
struct yf3251 { void *up;
void * p3250;
void * v7607;
rt_int v7609;
rt_int v7611;
void * v7613;
void * v7615;
rt_int yu;
};
struct yf3257 { void *up;
void * p3256;
void * v7620;
rt_int yu;
};
struct yf3264 { void *up;
void * p3262;
rt_int p3263;
void * v7626;
rt_int v7628;
rt_int v7630;
void * v7632;
rt_int yu;
};
struct yf3271 { void *up;
void * p3269;
yarr * p3270;
void * v7637;
rt_int v7639;
void * v7642;
rt_int lo7651;
rt_int hi7652;
rt_int c_7654;
rt_int yu;
};
struct yf3278 { void *up;
void * p3276;
void * p3277;
void * v7668;
void * v7670;
rt_int v7672;
rt_int v7674;
rt_int v7676;
rt_int v7678;
rt_int v7680;
rt_int v7682;
rt_int v7684;
rt_int v7686;
yarr v7688;
yarr v7690;
rt_int v7692;
rt_int v7694;
rt_int v7696;
rt_int v7698;
void * v7700;
void * v7702;
void * v7704;
void * v7706;
rt_int lo7720;
rt_int hi7721;
rt_int c_7723;
rt_int yu;
};
struct yf3286 { void *up;
void * p3283;
rt_int p3284;
rt_int p3285;
void * v7745;
void * v7747;
rt_int v7749;
rt_int v7751;
void * v7753;
void * v7755;
void * v7757;
rt_int v7759;
rt_int v7761;
rt_int yu;
};
struct yf7897 { struct yf3291 *up;
rt_int p7895;
rt_int p7896;
rt_int yu;
};
struct yf7904 { struct yf3291 *up;
rt_int p7902;
rt_int p7903;
void * v7924;
rt_int yu;
};
struct yf7910 { struct yf3291 *up;
rt_int p7909;
rt_int yu;
};
struct yf3291 { void *up;
void * v7777;
void * v7779;
void * v7781;
rt_int v7783;
rt_int v7786;
rt_int v7789;
void * v7792;
rt_int lo7819;
rt_int hi7820;
ydesc yd_7822;
yarr v7824;
yarr v7826;
rt_int lo7832;
rt_int hi7833;
ydesc yd_7835;
yarr v7837;
rt_int lo7843;
rt_int hi7844;
ydesc yd_7846;
yarr v7848;
rt_int lo7854;
rt_int hi7855;
ydesc yd_7857;
yarr v7859;
rt_int lo7865;
rt_int hi7866;
ydesc yd_7868;
yarr v7870;
rt_int lo7876;
rt_int hi7877;
ydesc yd_7879;
yarr v7881;
rt_int v7883;
rt_int v7886;
rt_int v7888;
rt_int v7890;
void * v7892;
rt_int lo7949;
rt_int hi7950;
rt_int c_7952;
rt_int lo7960;
rt_int hi7961;
rt_int c_7963;
rt_int lo7971;
rt_int hi7972;
rt_int c_7974;
rt_int lo7987;
rt_int hi7988;
rt_int c_7990;
rt_int lo7997;
rt_int hi7998;
rt_int c_8000;
rt_int lo8010;
rt_int hi8011;
rt_int c_8013;
rt_int lo8020;
rt_int hi8021;
rt_int c_8023;
rt_int lo8033;
rt_int hi8034;
rt_int c_8036;
rt_int lo8058;
rt_int hi8059;
rt_int c_8061;
rt_int yu;
};
struct yf3299 { void *up;
rt_int p3296;
rt_int p3297;
rt_int p3298;
rt_int lo8074;
rt_int hi8075;
rt_int c_8077;
rt_int yu;
};
struct yf3305 { void *up;
rt_int p3304;
rt_int v8091;
rt_int v8093;
rt_int lo8098;
rt_int hi8099;
rt_int c_8101;
rt_int yu;
};
struct yf3311 { void *up;
void * p3310;
void * v8111;
rt_int v8113;
rt_int v8115;
rt_int yu;
};
struct yf3317 { void *up;
void * p3316;
rt_int v8132;
rt_int yu;
};
struct yf3324 { void *up;
void * p3322;
rt_int p3323;
void * v8140;
void * v8142;
void * v8144;
void * v8146;
void * v8148;
void * v8150;
void * v8152;
rt_int v8154;
rt_int v8156;
rt_int yu;
};
struct yf3331 { void *up;
void * p3329;
void * p3330;
void * v8203;
void * v8205;
void * v8207;
rt_int v8209;
rt_int yu;
};
struct yf3337 { void *up;
void * p3336;
void * v8217;
yR134 v8219;
yR134 v8221;
rt_int v8223;
rt_int v8225;
rt_int v8227;
rt_int v8229;
rt_int v8231;
rt_int v8233;
rt_int v8235;
void * v8237;
rt_int v8239;
void * v8241;
void * v8243;
rt_int v8245;
rt_int v8247;
yR134 v8249;
rt_int yu;
};
struct yf3345 { void *up;
void * p3342;
void * p3343;
rt_int p3344;
rt_int yu;
};
struct yf3351 { void *up;
void * p3350;
rt_int v8319;
void * v8321;
void * v8323;
void * v8325;
void * v8327;
rt_int v8329;
rt_int v8331;
rt_int v8333;
rt_int v8335;
rt_int yu;
};
struct yf3358 { void *up;
void * p3356;
void * p3357;
void * v8354;
rt_int yu;
};
struct yf3365 { void *up;
void * p3363;
void * p3364;
rt_int yu;
};
struct yf3374 { void *up;
void * p3370;
rt_int p3371;
void * p3372;
rt_int p3373;
rt_int v8364;
rt_int lo8377;
rt_int hi8378;
rt_int c_8380;
rt_int yu;
};
struct yf3381 { void *up;
rt_int p3379;
rt_int p3380;
rt_int v8389;
rt_int v8393;
void * v8395;
rt_int lo8400;
rt_int hi8401;
rt_int c_8403;
rt_int lo8410;
rt_int hi8411;
rt_int c_8413;
rt_int yu;
};
struct yf3387 { void *up;
rt_int p3386;
void * v8421;
yR134 v8423;
void * v8425;
rt_int yu;
};
struct yf3393 { void *up;
void * p3392;
void * v8439;
void * v8441;
rt_int v8443;
rt_int v8445;
rt_int yu;
};
struct yf3399 { void *up;
void * p3398;
rt_int yu;
};
struct yf3406 { void *up;
rt_int p3404;
void * p3405;
void * v8455;
rt_int yu;
};
struct yf3414 { void *up;
void * * p3411;
void * p3412;
rt_int p3413;
void * v8462;
void * v8464;
void * v8466;
rt_int yu;
};
struct yf3421 { void *up;
void * p3419;
rt_int p3420;
void * v8476;
rt_int yu;
};
struct yf3429 { void *up;
rt_int p3426;
rt_int p3427;
void * p3428;
void * * p3428_o;
void * v8492;
rt_int yu;
};
struct yf3435 { void *up;
void * p3434;
void * v8510;
rt_int yu;
};
struct yf3444 { void *up;
rt_int p3440;
rt_int p3441;
void * p3442;
rt_int p3443;
void * v8518;
rt_int yu;
};
struct yf3451 { void *up;
rt_int p3449;
void * p3450;
rt_int yu;
};
struct yf3458 { void *up;
void * p3456;
void * p3457;
void * v8531;
rt_int lo8535;
rt_int hi8536;
rt_int c_8538;
rt_int yu;
};
struct yf3464 { void *up;
rt_int p3463;
void * v8545;
rt_int lo8549;
rt_int hi8550;
rt_int c_8552;
rt_int yu;
};
struct yf3472 { void *up;
void * p3469;
void * * p3470;
rt_int p3471;
void * v8561;
void * v8563;
rt_int v8565;
rt_int yu;
};
struct yf3480 { void *up;
void * p3477;
void * * p3478;
rt_int p3479;
void * v8572;
void * v8574;
void * v8576;
rt_int v8578;
void * v8580;
rt_int v8582;
rt_int v8584;
void * v8586;
rt_int yu;
};
struct yf3487 { void *up;
void * p3485;
rt_int p3486;
void * v8621;
void * v8623;
void * v8625;
rt_int yu;
};
struct yf3495 { void *up;
void * p3492;
void * p3493;
rt_int p3494;
void * v8633;
void * v8635;
void * v8637;
void * v8639;
rt_int yu;
};
struct yf3501 { void *up;
void * p3500;
void * v8646;
void * v8648;
void * v8650;
void * v8652;
void * v8654;
void * v8656;
void * v8658;
void * v8660;
void * v8662;
void * v8664;
void * v8666;
rt_int v8668;
rt_int v8670;
rt_int v8672;
rt_int yu;
};
struct yf3507 { void *up;
void * p3506;
void * v8702;
rt_int yu;
};
struct yf3513 { void *up;
void * p3512;
void * v8706;
void * v8708;
void * v8710;
void * v8712;
rt_int v8714;
rt_int v8716;
rt_int v8718;
rt_int v8720;
void * v8722;
rt_int lo8730;
rt_int hi8731;
rt_int c_8733;
rt_int yu;
};
struct yf3519 { void *up;
void * p3518;
void * v8745;
void * v8747;
rt_int yu;
};
struct yf3524 { void *up;
void * v8753;
rt_int yu;
};
struct yf3531 { void *up;
void * p3529;
void * p3530;
rt_int v8764;
rt_int v8766;
rt_int v8768;
rt_int v8770;
rt_int v8772;
void * v8774;
rt_int v8776;
rt_int v8778;
void * v8780;
rt_int v8782;
rt_int v8784;
rt_int v8786;
rt_int v8788;
rt_int v8790;
rt_int v8792;
void * v8794;
void * v8796;
rt_int yu;
};
struct yf3537 { void *up;
rt_int p3536;
rt_int v8857;
rt_int yu;
};
struct yf3543 { void *up;
void * p3542;
rt_int yu;
};
struct yf3549 { void *up;
void * p3548;
rt_int v8870;
rt_int yu;
};
struct yf3554 { void *up;
rt_int yu;
};
struct yf3560 { void *up;
void * p3559;
rt_int yu;
};
struct yf3567 { void *up;
void * p3565;
rt_int p3566;
rt_int yu;
};
struct yf3574 { void *up;
void * p3572;
rt_int p3573;
rt_int yu;
};
struct yf3581 { void *up;
void * p3579;
void * p3580;
rt_int v8913;
rt_int v8915;
rt_int v8917;
rt_int yu;
};
struct yf3588 { void *up;
void * p3586;
rt_int p3587;
void * v8926;
rt_int v8928;
rt_int yu;
};
struct yf3595 { void *up;
void * p3593;
rt_int p3594;
rt_int yu;
};
struct yf3603 { void *up;
yarr p3601;
rt_int p3602;
rt_int yu;
};
struct yf3609 { void *up;
rt_int p3608;
rt_int yu;
};
struct yf3618 { void *up;
void * p3614;
rt_int p3615;
rt_int p3616;
rt_int * p3616_o;
void * p3617;
void * * p3617_o;
rt_int v8955;
rt_int yu;
};
struct yf3626 { void *up;
void * p3623;
rt_int p3624;
rt_int * p3624_o;
void * p3625;
void * * p3625_o;
rt_int yu;
};
struct yf3632 { void *up;
void * p3631;
rt_int v8971;
void * v8973;
rt_int yu;
};
struct yf3638 { void *up;
void * p3637;
void * v8979;
rt_int v8982;
rt_int v8984;
rt_int v8986;
rt_int v8988;
rt_int v8990;
rt_int v8992;
unsigned char v8994;
void * v8996;
ydesc yd_9005;
yarr v9007;
rt_int yu;
};
struct yf3645 { void *up;
void * p3643;
void * p3644;
rt_int v9043;
rt_int v9045;
rt_int v9047;
void * v9049;
rt_int yu;
};
struct yf3655 { void *up;
rt_int p3650;
void * p3651;
rt_int p3652;
rt_int p3653;
rt_int * p3653_o;
void * p3654;
void * * p3654_o;
rt_int v9061;
rt_int v9063;
rt_int v9065;
rt_int v9067;
rt_int v9069;
void * v9071;
void * v9073;
void * v9075;
void * v9077;
rt_int v9079;
rt_int v9081;
rt_int v9083;
rt_int v9085;
void * v9087;
rt_int v9089;
rt_int lo9103;
rt_int hi9104;
rt_int c_9106;
rt_int yu;
};
struct yf3663 { void *up;
yarr p3661;
void * p3662;
void * v9298;
rt_int yu;
};
struct yf3671 { void *up;
yarr p3669;
rt_int p3670;
void * v9304;
rt_int yu;
};
struct yf3681 { void *up;
yarr p3677;
yarr p3678;
yarr p3679;
rt_int p3680;
void * v9312;
void * v9314;
void * v9316;
rt_int yu;
};
struct yf3689 { void *up;
rt_int p3686;
yarr p3688;
void * v9325;
rt_int yu;
};
struct yf3694 { void *up;
rt_int yu;
};
struct yf3699 { void *up;
void * v9405;
rt_int yu;
};
struct yf3704 { void *up;
rt_int yu;
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
static rt_int yr3535_LifeDepth(rt_int a_p3536);
static rt_int yr3541_MonitorPath(void * a_p3542);
static void yr3547_EnterMonitor(void * a_p3548);
static void yr3553_LeaveMonitor(void);
static void yr3558_TerminateStatement(void * a_p3559);
static void yr3564_DeclareSignal(void * a_p3565, rt_int a_p3566);
static void yr3571_DeclareSignalArray(void * a_p3572, rt_int a_p3573);
static void yr3578_DeviceSignal(void * a_p3579, void * a_p3580);
static void * yr3585_Arg(void * a_p3586, rt_int a_p3587);
static void yr3592_NArgs(void * a_p3593, rt_int a_p3594);
static rt_int yr3599_Call1(yarr a_p3601, rt_int a_p3602);
static rt_int yr3607_Addr(rt_int a_p3608);
static void yr3613_StdVar(void * a_p3614, rt_int a_p3615, rt_int * a_p3616, void * * a_p3617);
static void yr3622_NumArg(void * a_p3623, rt_int * a_p3624, void * * a_p3625);
static rt_int yr3630_IntArg(void * a_p3631);
static void yr3636_CodeInsert(void * a_p3637);
static void * yr3642_ManifestScale(void * a_p3643, void * a_p3644);
static void yr3649_StdCall(rt_int a_p3650, void * a_p3651, rt_int a_p3652, rt_int * a_p3653, void * * a_p3654);
static void yr3659_StdRep(yarr a_p3661, void * a_p3662);
static void yr3667_StdOp(yarr a_p3669, rt_int a_p3670);
static void * yr3675_LitList(yarr a_p3677, yarr a_p3678, yarr a_p3679, rt_int a_p3680);
static void * yr3685_Abstract(rt_int a_p3686, yarr a_p3688);
static void yr3693_Predefine(void);
static void yr3698_Translate(void);
static void yr3703_WriteProgram(void);
static rt_int yr7894_At(struct yf3291 *up, rt_int a_p7895, rt_int a_p7896);
static rt_int yr7901_Reaches(struct yf3291 *up, rt_int a_p7902, rt_int a_p7903);
static rt_int yr7908_VName(struct yf3291 *up, rt_int a_p7909);
static void yr997_InitChars(void) {
struct yf998 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v3709 = INT64_C(0);
{ rt_int hi3714 = 127;
for (rt_int i3713 = 0; i3713 <= hi3714; i3713++) { F.c_3712 = i3713; Y_TICK();
((rt_int *)(v959).p)[y_ix1(v959, F.c_3712)] = F.v3709;
((unsigned char *)(v970).p)[y_ix1(v970, F.v3709)] = F.c_3712;
F.v3709 = rt_range(rt_add(F.v3709, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3713 == hi3714) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1002_IsLetter(unsigned char a_p1003) {
struct yf1004 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1003 = a_p1003;
{ rt_int rv3724 = ((((((F.p1003 >= 65)) && ((F.p1003 <= 90)))) || ((((F.p1003 >= 97)) && ((F.p1003 <= 122))))) || ((F.p1003 == 95)));
y_use = F.yu; return rv3724; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1008_IsDigit(unsigned char a_p1009) {
struct yf1010 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1009 = a_p1009;
{ rt_int rv3729 = (((F.p1009 >= 48)) && ((F.p1009 <= 57)));
y_use = F.yu; return rv3729; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1014_PoolAdd(unsigned char a_p1015) {
struct yf1016 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1015 = a_p1015;
v909 = rt_range(rt_add(v909, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((unsigned char *)(v907).p)[y_ix1(v907, v909)] = F.p1015;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1020_SB(void) {
struct yf1021 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
v949 = rt_range(rt_add(v949, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v947).p)[y_ix1(v947, v949)] = v935;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1025_SC(unsigned char a_p1026) {
struct yf1027 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1026 = a_p1026;
v935 = rt_range(rt_add(v935, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((unsigned char *)(v933).p)[y_ix1(v933, v935)] = F.p1026;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1031_SA(yarr a_p1033) {
struct yf1034 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1033 = a_p1033;
F.lo3748 = y_low(F.p1033, INT64_C(1));
F.hi3749 = y_high(F.p1033, INT64_C(1));
{ rt_int hi3753 = F.hi3749;
for (rt_int i3752 = F.lo3748; i3752 <= hi3753; i3752++) { F.c_3751 = i3752; Y_TICK();
yr1025_SC(((unsigned char *)(F.p1033).p)[y_ix1(F.p1033, F.c_3751)]);
if (i3752 == hi3753) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1038_ST(rt_int a_p1039) {
struct yf1040 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1039 = a_p1039;
if ((F.p1039 == INT64_C(0))) {
y_use = F.yu; return;
}
F.v3757 = ((rt_int *)(v912).p)[y_ix1(v912, F.p1039)];
while ((F.v3757 < (rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.p1039)], ((rt_int *)(v914).p)[y_ix1(v914, F.p1039)])))) {
Y_TICK();
yr1025_SC(((unsigned char *)(v907).p)[y_ix1(v907, F.v3757)]);
F.v3757 = rt_range(rt_add(F.v3757, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1044_SI(rt_int a_p1045) {
struct yf1046 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1045 = a_p1045;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(24)}; y_desc_array(&F.yd_3772, 1, lo, hi, &y_d_byte); }
y_init(&F.yd_3772, &F.v3774);
F.v3776 = INT64_C(0);
F.v3779 = F.p1045;
if ((F.v3779 < INT64_C(0))) {
yr1025_SC(45);
F.v3779 = rt_range(rt_neg(F.v3779), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
for (;;) {
Y_TICK();
F.v3776 = rt_range(rt_add(F.v3776, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((unsigned char *)(F.v3774).p)[y_ix1(F.v3774, F.v3776)] = ((unsigned char *)(v970).p)[y_ix1(v970, rt_add((rt_mod(F.v3779, INT64_C(10))), INT64_C(48)))];
F.v3779 = rt_range(rt_div(F.v3779, INT64_C(10)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.v3779 == INT64_C(0))) {
goto yl_3783;
}
}
yl_3783: ;
while ((F.v3776 > INT64_C(0))) {
Y_TICK();
yr1025_SC(((unsigned char *)(F.v3774).p)[y_ix1(F.v3774, F.v3776)]);
F.v3776 = rt_range(rt_sub(F.v3776, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1050_SE(void) {
struct yf1051 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v3798 = ((rt_int *)(v947).p)[y_ix1(v947, v949)];
v949 = rt_range(rt_sub(v949, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v916 = rt_range(rt_add(v916, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v912).p)[y_ix1(v912, v916)] = rt_range(rt_add(v909, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v914).p)[y_ix1(v914, v916)] = rt_range(rt_sub(v935, F.v3798), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo3809 = rt_add(F.v3798, INT64_C(1));
F.hi3810 = v935;
{ rt_int hi3814 = F.hi3810;
for (rt_int i3813 = F.lo3809; i3813 <= hi3814; i3813++) { F.c_3812 = i3813; Y_TICK();
yr1014_PoolAdd(((unsigned char *)(v933).p)[y_ix1(v933, F.c_3812)]);
if (i3813 == hi3814) break;
}}
v935 = F.v3798;
{ rt_int rv3815 = rt_range(v916, INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv3815; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1055_T(yarr a_p1057) {
struct yf1058 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1057 = a_p1057;
yr1020_SB();
yr1031_SA(F.p1057);
{ rt_int rv3818 = yr1050_SE();
y_use = F.yu; return rv3818; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1062_Intern(rt_int a_p1063, rt_int a_p1064) {
struct yf1065 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1063 = a_p1063;
F.p1064 = a_p1064;
F.v3823 = INT64_C(0);
F.lo3833 = F.p1063;
F.hi3834 = rt_sub((rt_add(F.p1063, F.p1064)), INT64_C(1));
{ rt_int hi3838 = F.hi3834;
for (rt_int i3837 = F.lo3833; i3837 <= hi3838; i3837++) { F.c_3836 = i3837; Y_TICK();
F.v3823 = rt_range(rt_mod((rt_add((rt_mul(F.v3823, INT64_C(31))), ((rt_int *)(v959).p)[y_ix1(v959, ((unsigned char *)(v907).p)[y_ix1(v907, F.c_3836)])])), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3837 == hi3838) break;
}}
for (;;) {
Y_TICK();
if ((((rt_int *)(v919).p)[y_ix1(v919, F.v3823)] == INT64_C(0))) {
v916 = rt_range(rt_add(v916, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v912).p)[y_ix1(v912, v916)] = F.p1063;
((rt_int *)(v914).p)[y_ix1(v914, v916)] = F.p1064;
((rt_int *)(v919).p)[y_ix1(v919, F.v3823)] = rt_range(v916, INT64_C(0), INT64_C(4000000));
{ rt_int rv3848 = rt_range(v916, INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv3848; }
}
F.v3826 = ((rt_int *)(v919).p)[y_ix1(v919, F.v3823)];
if ((((rt_int *)(v914).p)[y_ix1(v914, F.v3826)] == F.p1064)) {
F.v3828 = 1;
F.lo3855 = INT64_C(0);
F.hi3856 = rt_sub(F.p1064, INT64_C(1));
{ rt_int hi3860 = F.hi3856;
for (rt_int i3859 = F.lo3855; i3859 <= hi3860; i3859++) { F.c_3858 = i3859; Y_TICK();
if ((!(((unsigned char *)(v907).p)[y_ix1(v907, rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.v3826)], F.c_3858))] == ((unsigned char *)(v907).p)[y_ix1(v907, rt_add(F.p1063, F.c_3858))]))) {
F.v3828 = 0;
}
if (i3859 == hi3860) break;
}}
if (F.v3828) {
{ rt_int rv3864 = rt_range(F.v3826, INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv3864; }
}
}
F.v3823 = rt_range(rt_mod((rt_add(F.v3823, INT64_C(1))), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yl_3844: ;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1069_Name(rt_int a_p1070) {
struct yf1071 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1070 = a_p1070;
{ rt_int rv3871 = yr1062_Intern(((rt_int *)(v912).p)[y_ix1(v912, F.p1070)], ((rt_int *)(v914).p)[y_ix1(v914, F.p1070)]);
y_use = F.yu; return rv3871; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1075_N(yarr a_p1077) {
struct yf1078 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1077 = a_p1077;
{ rt_int rv3874 = yr1069_Name(yr1055_T(F.p1077));
y_use = F.yu; return rv3874; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1082_TEq(rt_int a_p1083, rt_int a_p1084) {
struct yf1085 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1083 = a_p1083;
F.p1084 = a_p1084;
if ((F.p1083 == F.p1084)) {
{ rt_int rv3879 = 1;
y_use = F.yu; return rv3879; }
}
if ((!(((rt_int *)(v914).p)[y_ix1(v914, F.p1083)] == ((rt_int *)(v914).p)[y_ix1(v914, F.p1084)]))) {
{ rt_int rv3881 = 0;
y_use = F.yu; return rv3881; }
}
F.lo3887 = INT64_C(0);
F.hi3888 = rt_sub(((rt_int *)(v914).p)[y_ix1(v914, F.p1083)], INT64_C(1));
{ rt_int hi3892 = F.hi3888;
for (rt_int i3891 = F.lo3887; i3891 <= hi3892; i3891++) { F.c_3890 = i3891; Y_TICK();
if ((!(((unsigned char *)(v907).p)[y_ix1(v907, rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.p1083)], F.c_3890))] == ((unsigned char *)(v907).p)[y_ix1(v907, rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.p1084)], F.c_3890))]))) {
{ rt_int rv3896 = 0;
y_use = F.yu; return rv3896; }
}
if (i3891 == hi3892) break;
}}
{ rt_int rv3898 = 1;
y_use = F.yu; return rv3898; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1089_TStarts(rt_int a_p1090, yarr a_p1092) {
struct yf1093 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1090 = a_p1090;
F.p1092 = a_p1092;
F.v3903 = INT64_C(0);
if ((((rt_int *)(v914).p)[y_ix1(v914, F.p1090)] < (rt_add((rt_sub(y_high(F.p1092, INT64_C(1)), y_low(F.p1092, INT64_C(1)))), INT64_C(1))))) {
{ rt_int rv3913 = 0;
y_use = F.yu; return rv3913; }
}
F.lo3919 = y_low(F.p1092, INT64_C(1));
F.hi3920 = y_high(F.p1092, INT64_C(1));
{ rt_int hi3924 = F.hi3920;
for (rt_int i3923 = F.lo3919; i3923 <= hi3924; i3923++) { F.c_3922 = i3923; Y_TICK();
if ((!(((unsigned char *)(v907).p)[y_ix1(v907, rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.p1090)], F.v3903))] == ((unsigned char *)(F.p1092).p)[y_ix1(F.p1092, F.c_3922)]))) {
{ rt_int rv3927 = 0;
y_use = F.yu; return rv3927; }
}
F.v3903 = rt_range(rt_add(F.v3903, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3923 == hi3924) break;
}}
{ rt_int rv3931 = 1;
y_use = F.yu; return rv3931; }
rt_raise(Y_X_NO_RETURN);
}
static unsigned char yr1097_TChar(rt_int a_p1098, rt_int a_p1099) {
struct yf1100 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1098 = a_p1098;
F.p1099 = a_p1099;
{ unsigned char rv3938 = ((unsigned char *)(v907).p)[y_ix1(v907, rt_sub((rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.p1098)], F.p1099)), INT64_C(1)))];
y_use = F.yu; return rv3938; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1104_Put(yR134 * a_p1105, rt_int a_p1106) {
struct yf1107 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1105 = a_p1105;
F.p1106 = a_p1106;
({ F.v3943 = rt_alloc(sizeof(yR129)); });
(*(yR129 *)rt_nil_check(F.v3943)) = ((yR129){ .f_t = F.p1106, .f_next = ((void *)0) });
if ((((*F.p1105)).f_head == ((void *)0))) {
((*F.p1105)).f_head = F.v3943;
} else {
((*(yR129 *)rt_nil_check(((*F.p1105)).f_tail))).f_next = F.v3943;
}
((*F.p1105)).f_tail = F.v3943;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1111_PutS(yR134 * a_p1112, yarr a_p1114) {
struct yf1115 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1112 = a_p1112;
F.p1114 = a_p1114;
yr1104_Put(&(*F.p1112), yr1055_T(F.p1114));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1119_Append(yR134 * a_p1120, yR134 * a_p1121) {
struct yf1122 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1120 = a_p1120;
F.p1121 = a_p1121;
if ((((*F.p1121)).f_head == ((void *)0))) {
y_use = F.yu; return;
}
if ((((*F.p1120)).f_head == ((void *)0))) {
((*F.p1120)).f_head = ((*F.p1121)).f_head;
} else {
((*(yR129 *)rt_nil_check(((*F.p1120)).f_tail))).f_next = ((*F.p1121)).f_head;
}
((*F.p1120)).f_tail = ((*F.p1121)).f_tail;
((*F.p1121)).f_head = ((void *)0);
((*F.p1121)).f_tail = ((void *)0);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1126_Emit(rt_int a_p1127) {
struct yf1128 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1127 = a_p1127;
yr1104_Put(&v990, F.p1127);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1132_EmitS(yarr a_p1134) {
struct yf1135 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1134 = a_p1134;
yr1104_Put(&v990, yr1055_T(F.p1134));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1139_WriteTxt(rt_int a_p1140) {
struct yf1141 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1140 = a_p1140;
F.v3957 = ((rt_int *)(v912).p)[y_ix1(v912, F.p1140)];
while ((F.v3957 < (rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.p1140)], ((rt_int *)(v914).p)[y_ix1(v914, F.p1140)])))) {
Y_TICK();
({ unsigned char pv = ((unsigned char *)(v907).p)[y_ix1(v907, F.v3957)]; y_put(&v905, &pv, sizeof pv); });
F.v3957 = rt_range(rt_add(F.v3957, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1145_WriteBuf(yR134 a_p1146) {
struct yf1147 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1146 = a_p1146;
F.v3964 = (F.p1146).f_head;
while ((!(F.v3964 == ((void *)0)))) {
Y_TICK();
yr1139_WriteTxt(((*(yR129 *)rt_nil_check(F.v3964))).f_t);
({ unsigned char pv = 10; y_put(&v905, &pv, sizeof pv); });
F.v3964 = ((*(yR129 *)rt_nil_check(F.v3964))).f_next;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1151_Fail(rt_int a_p1152, rt_int a_p1153) {
struct yf1154 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1152 = a_p1152;
F.p1153 = a_p1153;
v949 = INT64_C(0);
v935 = INT64_C(0);
yr1020_SB();
yr1031_SA(y_str("line ", 5));
yr1044_SI(F.p1152);
yr1031_SA(y_str(": ", 2));
yr1038_ST(F.p1153);
F.v3970 = yr1050_SE();
yr1139_WriteTxt(F.v3970);
({ unsigned char pv = 10; y_put(&v905, &pv, sizeof pv); });
y_close(&v905);
rt_raise(rt_exc("translation_error"));
rt_raise(Y_X_NO_RETURN);
}
static void yr1158_Warn(rt_int a_p1159, rt_int a_p1160) {
struct yf1161 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1159 = a_p1159;
F.p1160 = a_p1160;
yr1020_SB();
yr1031_SA(y_str("line ", 5));
yr1044_SI(F.p1159);
yr1031_SA(y_str(": warning: ", 11));
yr1038_ST(F.p1160);
F.v3980 = yr1050_SE();
yr1165_WriteTo(&v988, F.v3980);
({ unsigned char pv = 10; y_put(&v988, &pv, sizeof pv); });
yr1020_SB();
yr1031_SA(y_str("/* ", 3));
yr1038_ST(F.v3980);
yr1031_SA(y_str(" */", 3));
F.v3980 = yr1050_SE();
yr1104_Put(&v986, F.v3980);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1165_WriteTo(yfile * * a_p1166, rt_int a_p1167) {
struct yf1168 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1166 = a_p1166;
F.p1167 = a_p1167;
F.v3990 = ((rt_int *)(v912).p)[y_ix1(v912, F.p1167)];
while ((F.v3990 < (rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.p1167)], ((rt_int *)(v914).p)[y_ix1(v914, F.p1167)])))) {
Y_TICK();
({ unsigned char pv = ((unsigned char *)(v907).p)[y_ix1(v907, F.v3990)]; y_put(&(*F.p1166), &pv, sizeof pv); });
F.v3990 = rt_range(rt_add(F.v3990, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1172_FailS(rt_int a_p1173, yarr a_p1175) {
struct yf1176 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1173 = a_p1173;
F.p1175 = a_p1175;
yr1151_Fail(F.p1173, yr1055_T(F.p1175));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1180_FailN(rt_int a_p1181, rt_int a_p1182, yarr a_p1184) {
struct yf1185 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1181 = a_p1181;
F.p1182 = a_p1182;
F.p1184 = a_p1184;
yr1020_SB();
yr1038_ST(F.p1182);
yr1031_SA(F.p1184);
F.v4002 = yr1050_SE();
yr1151_Fail(F.p1181, F.v4002);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1189_NewSerial(void) {
struct yf1190 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
v952 = rt_range(rt_add(v952, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
{ rt_int rv4006 = v952;
y_use = F.yu; return rv4006; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1194_Fresh(yarr a_p1196) {
struct yf1197 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1196 = a_p1196;
F.v4010 = yr1189_NewSerial();
yr1020_SB();
yr1031_SA(F.p1196);
yr1044_SI(F.v4010);
{ rt_int rv4011 = yr1050_SE();
y_use = F.yu; return rv4011; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1824_InitWords(void) {
struct yf1825 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
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
F.v4018 = yr1050_SE();
v916 = INT64_C(0);
F.v4014 = ((rt_int *)(v912).p)[y_ix1(v912, F.v4018)];
F.lo4035 = ((rt_int *)(v912).p)[y_ix1(v912, F.v4018)];
F.hi4036 = rt_sub((rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.v4018)], ((rt_int *)(v914).p)[y_ix1(v914, F.v4018)])), INT64_C(1));
{ rt_int hi4040 = F.hi4036;
for (rt_int i4039 = F.lo4035; i4039 <= hi4040; i4039++) { F.c_4038 = i4039; Y_TICK();
if ((((unsigned char *)(v907).p)[y_ix1(v907, F.c_4038)] == 32)) {
F.v4016 = yr1062_Intern(F.v4014, rt_range(rt_sub(F.c_4038, F.v4014), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v4014 = rt_range(rt_add(F.c_4038, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i4039 == hi4040) break;
}}
if ((!(v916 == v615))) {
rt_raise(rt_exc("word_table"));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1829_ReadSource(void) {
struct yf1830 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
y_open(&v903, y_str("INPUT", 5), 0);
v1210 = rt_range(rt_add(v909, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!y_check_eof(&v903))) {
Y_TICK();
({ unsigned char g; y_get(&v903, &g, sizeof g); F.v4047 = g; });
yr1014_PoolAdd(F.v4047);
}
v1213 = v909;
y_close(&v903);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1834_AddTok(rt_int a_p1835, rt_int a_p1836) {
struct yf1837 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1835 = a_p1835;
F.p1836 = a_p1836;
v1207 = rt_range(rt_add(v1207, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1201).p)[y_ix1(v1201, v1207)] = F.p1835;
((rt_int *)(v1203).p)[y_ix1(v1203, v1207)] = F.p1836;
((rt_int *)(v1205).p)[y_ix1(v1205, v1207)] = v1219;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static unsigned char yr1841_At(rt_int a_p1842) {
struct yf1843 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1842 = a_p1842;
if ((F.p1842 > v1213)) {
{ unsigned char rv4060 = 0;
y_use = F.yu; return rv4060; }
}
{ unsigned char rv4061 = ((unsigned char *)(v907).p)[y_ix1(v907, F.p1842)];
y_use = F.yu; return rv4061; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1847_EndsOperand(void) {
struct yf1848 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((v1207 == INT64_C(0))) {
{ rt_int rv4069 = 0;
y_use = F.yu; return rv4069; }
}
F.v4064 = ((rt_int *)(v1201).p)[y_ix1(v1201, v1207)];
F.v4066 = ((rt_int *)(v1203).p)[y_ix1(v1203, v1207)];
if ((((((((F.v4064 == v201)) || ((F.v4064 == v210))) || ((F.v4064 == v213))) || ((F.v4064 == v216))) || ((F.v4064 == v219))) || ((F.v4064 == v222)))) {
{ rt_int rv4071 = 1;
y_use = F.yu; return rv4071; }
}
if ((F.v4064 == v207)) {
{ rt_int rv4072 = ((((F.v4066 == v591)) || ((F.v4066 == v597))) || ((F.v4066 == v612)));
y_use = F.yu; return rv4072; }
}
if ((F.v4064 == v204)) {
{ rt_int rv4073 = (F.v4066 == v381);
y_use = F.yu; return rv4073; }
}
{ rt_int rv4075 = 0;
y_use = F.yu; return rv4075; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1852_DigitVal(unsigned char a_p1853) {
struct yf1854 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1853 = a_p1853;
if ((((F.p1853 >= 48)) && ((F.p1853 <= 57)))) {
{ rt_int rv4082 = rt_range(rt_sub(((rt_int *)(v959).p)[y_ix1(v959, F.p1853)], INT64_C(48)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv4082; }
}
if ((((F.p1853 >= 65)) && ((F.p1853 <= 70)))) {
{ rt_int rv4087 = rt_range(rt_sub(((rt_int *)(v959).p)[y_ix1(v959, F.p1853)], INT64_C(55)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv4087; }
}
{ rt_int rv4089 = INT64_C(99);
y_use = F.yu; return rv4089; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1858_LexError(yarr a_p1860) {
struct yf1861 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1860 = a_p1860;
yr1172_FailS(v1219, F.p1860);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1865_LexDigits(rt_int a_p1866, rt_int a_p1867) {
struct yf1868 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1866 = a_p1866;
F.p1867 = a_p1867;
while ((yr1008_IsDigit(yr1841_At(v1216)) || ((F.p1867 && ((yr1852_DigitVal(yr1841_At(v1216)) < INT64_C(16))))))) {
Y_TICK();
if ((yr1852_DigitVal(yr1841_At(v1216)) >= F.p1866)) {
yr1020_SB();
yr1025_SC(39);
yr1025_SC(yr1841_At(v1216));
yr1031_SA(y_str("' is not a digit of BASE", 24));
yr1044_SI(F.p1866);
yr1031_SA(y_str(" (IV.B)", 7));
F.v4096 = yr1050_SE();
yr1151_Fail(v1219, F.v4096);
}
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1872_LexNumber(rt_int a_p1873) {
struct yf1874 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1873 = a_p1873;
F.v4106 = INT64_C(10);
F.v4117 = 0;
F.v4120 = 0;
F.v4123 = INT64_C(0);
F.v4126 = INT64_C(0);
F.v4129 = INT64_C(0);
F.v4132 = INT64_C(0);
F.v4135 = INT64_C(0);
if ((!(v1222 == INT64_C(0)))) {
F.v4106 = v1222;
F.v4120 = 1;
}
v1222 = INT64_C(0);
F.v4109 = v1216;
yr1865_LexDigits(F.v4106, F.v4120);
F.v4111 = v1216;
if ((F.v4111 == F.v4109)) {
yr1858_LexError(y_str("a number has at least one digit (IV.B)", 38));
}
F.v4113 = v1216;
F.v4115 = v1216;
if ((((yr1841_At(v1216) == 46)) && ((!(yr1841_At(rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 46))))) {
F.v4117 = 1;
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4113 = v1216;
yr1865_LexDigits(F.v4106, F.v4120);
F.v4115 = v1216;
}
if ((yr1841_At(v1216) == 80)) {
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4132 = INT64_C(1);
if ((((((yr1841_At(v1216) == 45)) || ((yr1841_At(v1216) == 43)))) && yr1008_IsDigit(yr1841_At(rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))) {
if ((yr1841_At(v1216) == 45)) {
F.v4132 = INT64_C(-1);
}
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v4129 = INT64_C(0);
while (yr1008_IsDigit(yr1841_At(v1216))) {
Y_TICK();
if ((F.v4129 > INT64_C(1000))) {
yr1858_LexError(y_str("a fixed-point exponent beyond this implementation", 49));
}
F.v4129 = rt_range(rt_add((rt_mul(F.v4129, INT64_C(10))), yr1852_DigitVal(yr1841_At(v1216))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v4129 = rt_range(rt_mul(F.v4129, F.v4132), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4123 = INT64_C(0);
F.v4135 = rt_range(rt_sub(F.v4115, F.v4113), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo4176 = F.v4109;
F.hi4177 = rt_sub(F.v4115, INT64_C(1));
{ rt_int hi4181 = F.hi4177;
for (rt_int i4180 = F.lo4176; i4180 <= hi4181; i4180++) { F.c_4179 = i4180; Y_TICK();
if ((((F.c_4179 < F.v4111)) || ((F.c_4179 >= F.v4113)))) {
F.v4126 = yr1852_DigitVal(((unsigned char *)(v907).p)[y_ix1(v907, F.c_4179)]);
if ((F.v4123 > (rt_div((rt_sub(v900, F.v4126)), F.v4106)))) {
yr1858_LexError(y_str("a fixed-point literal with more digits than this implementation holds", 69));
}
F.v4123 = rt_range(rt_add((rt_mul(F.v4123, F.v4106)), F.v4126), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i4180 == hi4181) break;
}}
if (F.p1873) {
F.v4123 = rt_range(rt_neg(F.v4123), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((v1240 >= INT64_C(200000))) {
yr1858_LexError(y_str("too many fixed-point literals", 29));
}
v1240 = rt_range(rt_add(v1240, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1234).p)[y_ix1(v1234, v1240)] = F.v4123;
((rt_int *)(v1236).p)[y_ix1(v1236, v1240)] = F.v4106;
((rt_int *)(v1238).p)[y_ix1(v1238, v1240)] = rt_range(rt_sub(F.v4129, F.v4135), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1834_AddTok(v213, v1240);
y_use = F.yu; return;
}
if (F.v4117) {
if ((!(F.v4106 == INT64_C(10)))) {
yr1858_LexError(y_str("a floating-point literal is decimal", 35));
}
if ((yr1841_At(v1216) == 69)) {
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((yr1841_At(v1216) == 45)) || ((yr1841_At(v1216) == 43)))) {
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
while (yr1008_IsDigit(yr1841_At(v1216))) {
Y_TICK();
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1020_SB();
if (F.p1873) {
yr1031_SA(y_str("-", 1));
}
F.lo4208 = F.v4109;
F.hi4209 = rt_sub(v1216, INT64_C(1));
{ rt_int hi4213 = F.hi4209;
for (rt_int i4212 = F.lo4208; i4212 <= hi4213; i4212++) { F.c_4211 = i4212; Y_TICK();
yr1025_SC(((unsigned char *)(v907).p)[y_ix1(v907, F.c_4211)]);
if (i4212 == hi4213) break;
}}
F.v4138 = yr1050_SE();
yr1834_AddTok(v216, F.v4138);
y_use = F.yu; return;
}
F.v4123 = INT64_C(0);
F.lo4218 = F.v4109;
F.hi4219 = rt_sub(F.v4111, INT64_C(1));
{ rt_int hi4223 = F.hi4219;
for (rt_int i4222 = F.lo4218; i4222 <= hi4223; i4222++) { F.c_4221 = i4222; Y_TICK();
F.v4126 = yr1852_DigitVal(((unsigned char *)(v907).p)[y_ix1(v907, F.c_4221)]);
if ((F.v4123 > (rt_div((rt_sub(v900, F.v4126)), F.v4106)))) {
yr1858_LexError(y_str("integer literal too large", 25));
}
F.v4123 = rt_range(rt_add((rt_mul(F.v4123, F.v4106)), F.v4126), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i4222 == hi4223) break;
}}
if (F.p1873) {
F.v4123 = rt_range(rt_neg(F.v4123), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yr1834_AddTok(v210, F.v4123);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1878_LexString(void) {
struct yf1879 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
yr1020_SB();
for (;;) {
Y_TICK();
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1841_At(v1216) == 34))) {
Y_TICK();
if ((((yr1841_At(v1216) == 10)) || ((v1216 > v1213)))) {
v921 = 0;
yr1858_LexError(y_str("a string must close on its line", 31));
}
yr1025_SC(yr1841_At(v1216));
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4234 = v1216;
F.v4236 = INT64_C(0);
F.v4238 = 1;
while (F.v4238) {
Y_TICK();
if (((((yr1841_At(F.v4234) == 32)) || ((yr1841_At(F.v4234) == 9))) || ((yr1841_At(F.v4234) == 13)))) {
F.v4234 = rt_range(rt_add(F.v4234, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr1841_At(F.v4234) == 10)) {
F.v4236 = rt_range(rt_add(F.v4236, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4234 = rt_range(rt_add(F.v4234, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v4238 = 0;
}
}
if ((!(yr1841_At(F.v4234) == 34))) {
goto yl_4239;
}
v1219 = rt_range(rt_add(v1219, F.v4236), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1216 = F.v4234;
}
yl_4239: ;
F.v4232 = yr1050_SE();
yr1834_AddTok(v222, F.v4232);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1883_Lex(void) {
struct yf1884 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
v1216 = v1210;
while ((v1216 <= v1213)) {
Y_TICK();
F.v4267 = ((unsigned char *)(v907).p)[y_ix1(v907, v1216)];
if ((F.v4267 == 10)) {
v1219 = rt_range(rt_add(v1219, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((((F.v4267 == 32)) || ((F.v4267 == 9))) || ((F.v4267 == 13))) || ((F.v4267 == 12)))) {
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v4267 == 40)) && ((yr1841_At(rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 42)))) {
v1216 = rt_range(rt_add(v1216, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!((((yr1841_At(v1216) == 42)) && ((yr1841_At(rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 41)))))) {
Y_TICK();
if ((((yr1841_At(v1216) == 10)) || ((v1216 > v1213)))) {
yr1858_LexError(y_str("a comment must close on its line", 32));
}
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1216 = rt_range(rt_add(v1216, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr1008_IsDigit(F.v4267) || ((((v1222 == INT64_C(16))) && ((yr1852_DigitVal(F.v4267) < INT64_C(16))))))) {
yr1872_LexNumber(0);
} else if (((((((F.v4267 == 45)) || ((F.v4267 == 43)))) && (!yr1847_EndsOperand())) && ((yr1008_IsDigit(yr1841_At(rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || ((((v1222 == INT64_C(16))) && ((yr1852_DigitVal(yr1841_At(rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) < INT64_C(16))))))))) {
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1872_LexNumber((F.v4267 == 45));
} else if ((!(v1222 == INT64_C(0)))) {
yr1858_LexError(y_str("a BASE word is followed by a number (IV.B)", 42));
} else if (yr1002_IsLetter(F.v4267)) {
F.v4269 = v1216;
while ((yr1002_IsLetter(yr1841_At(v1216)) || yr1008_IsDigit(yr1841_At(v1216)))) {
Y_TICK();
v1216 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v4277 = yr1062_Intern(F.v4269, rt_range(rt_sub(v1216, F.v4269), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((F.v4277 == v246)) {
v1222 = INT64_C(2);
} else if ((F.v4277 == v249)) {
v1222 = INT64_C(8);
} else if ((F.v4277 == v252)) {
v1222 = INT64_C(10);
} else if ((F.v4277 == v255)) {
v1222 = INT64_C(16);
} else if ((F.v4277 <= v486)) {
yr1834_AddTok(v204, F.v4277);
} else {
yr1834_AddTok(v201, F.v4277);
}
} else if ((F.v4267 == 39)) {
F.v4269 = rt_range(rt_add(v1216, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4271 = F.v4269;
while ((!(yr1841_At(F.v4271) == 39))) {
Y_TICK();
if (((((yr1841_At(F.v4271) == 10)) || ((yr1841_At(F.v4271) == 34))) || ((F.v4271 > v1213)))) {
yr1858_LexError(y_str("bad character literal", 21));
}
F.v4271 = rt_range(rt_add(F.v4271, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v4271 == F.v4269)) {
yr1858_LexError(y_str("empty character literal", 23));
}
F.v4277 = yr1062_Intern(F.v4269, rt_range(rt_sub(F.v4271, F.v4269), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1834_AddTok(v219, F.v4277);
v1216 = rt_range(rt_add(F.v4271, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v4267 == 34)) {
yr1878_LexString();
} else {
F.v4273 = INT64_C(0);
F.v4271 = rt_range(rt_add(v486, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((F.v4273 == INT64_C(0))) && ((F.v4271 <= v615)))) {
Y_TICK();
F.v4275 = ((rt_int *)(v914).p)[y_ix1(v914, F.v4271)];
F.v4281 = 1;
F.lo4356 = INT64_C(0);
F.hi4357 = rt_sub(F.v4275, INT64_C(1));
{ rt_int hi4361 = F.hi4357;
for (rt_int i4360 = F.lo4356; i4360 <= hi4361; i4360++) { F.c_4359 = i4360; Y_TICK();
if ((!(yr1841_At(rt_range(rt_add(v1216, F.c_4359), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == ((unsigned char *)(v907).p)[y_ix1(v907, rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.v4271)], F.c_4359))]))) {
F.v4281 = 0;
}
if (i4360 == hi4361) break;
}}
if (F.v4281) {
F.v4273 = F.v4271;
}
F.v4271 = rt_range(rt_add(F.v4271, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v4273 == INT64_C(0))) {
yr1858_LexError(y_str("a character that is not in the language", 39));
}
yr1834_AddTok(v207, F.v4273);
v1216 = rt_range(rt_add(v1216, ((rt_int *)(v914).p)[y_ix1(v914, F.v4273)]), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1834_AddTok(v198, INT64_C(0));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1888_NewNode(rt_int a_p1889, rt_int a_p1890) {
struct yf1891 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1889 = a_p1889;
F.p1890 = a_p1890;
({ F.v4375 = rt_alloc(sizeof(yR99)); });
(*(yR99 *)rt_nil_check(F.v4375)) = ((yR99){ .f_kind = F.p1889, .f_line = F.p1890, .f_ival = INT64_C(0), .f_flag = INT64_C(0), .f_name = INT64_C(0), .f_text = INT64_C(0), .f_a = ((void *)0), .f_b = ((void *)0), .f_c = ((void *)0), .f_d = ((void *)0), .f_e = ((void *)0), .f_next = ((void *)0), .f_rep = ((void *)0), .f_sym = ((void *)0), .f_x = ((void *)0) });
{ void * rv4380 = F.v4375;
y_use = F.yu; return rv4380; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1895_Link(void * * a_p1896, void * * a_p1897, void * a_p1898) {
struct yf1899 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1896 = a_p1896;
F.p1897 = a_p1897;
F.p1898 = a_p1898;
if (((*F.p1896) == ((void *)0))) {
(*F.p1896) = F.p1898;
} else {
((*(yR99 *)rt_nil_check((*F.p1897)))).f_next = F.p1898;
}
(*F.p1897) = F.p1898;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1903_Count(void * a_p1904) {
struct yf1905 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1904 = a_p1904;
F.v4388 = INT64_C(0);
F.v4391 = F.p1904;
while ((!(F.v4391 == ((void *)0)))) {
Y_TICK();
F.v4388 = rt_range(rt_add(F.v4388, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4391 = ((*(yR99 *)rt_nil_check(F.v4391))).f_next;
}
{ rt_int rv4394 = F.v4388;
y_use = F.yu; return rv4394; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1909_TK(void) {
struct yf1910 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
{ rt_int rv4396 = ((rt_int *)(v1201).p)[y_ix1(v1201, v1243)];
y_use = F.yu; return rv4396; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1914_TV(void) {
struct yf1915 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
{ rt_int rv4398 = ((rt_int *)(v1203).p)[y_ix1(v1203, v1243)];
y_use = F.yu; return rv4398; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1919_TLn(void) {
struct yf1920 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
{ rt_int rv4400 = ((rt_int *)(v1205).p)[y_ix1(v1205, v1243)];
y_use = F.yu; return rv4400; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1924_IsAt(rt_int a_p1925, rt_int a_p1926) {
struct yf1927 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1925 = a_p1925;
F.p1926 = a_p1926;
F.v4405 = ((rt_int *)(v1201).p)[y_ix1(v1201, rt_add(v1243, F.p1925))];
{ rt_int rv4408 = (((((F.v4405 == v204)) || ((F.v4405 == v207)))) && ((((rt_int *)(v1203).p)[y_ix1(v1203, rt_add(v1243, F.p1925))] == F.p1926)));
y_use = F.yu; return rv4408; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1931_Is(rt_int a_p1932) {
struct yf1933 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1932 = a_p1932;
{ rt_int rv4412 = yr1924_IsAt(INT64_C(0), F.p1932);
y_use = F.yu; return rv4412; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1937_IsIdAt(rt_int a_p1938) {
struct yf1939 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1938 = a_p1938;
{ rt_int rv4416 = (((rt_int *)(v1201).p)[y_ix1(v1201, rt_add(v1243, F.p1938))] == v201);
y_use = F.yu; return rv4416; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1943_Skip(void) {
struct yf1944 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((!(((rt_int *)(v1201).p)[y_ix1(v1201, v1243)] == v198))) {
v1243 = rt_range(rt_add(v1243, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1948_Accept(rt_int a_p1949) {
struct yf1950 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1949 = a_p1949;
if (yr1931_Is(F.p1949)) {
yr1943_Skip();
{ rt_int rv4423 = 1;
y_use = F.yu; return rv4423; }
}
{ rt_int rv4425 = 0;
y_use = F.yu; return rv4425; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1954_TokText(void) {
struct yf1955 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4428 = yr1909_TK();
if ((((((F.v4428 == v201)) || ((F.v4428 == v204))) || ((F.v4428 == v207))) || ((F.v4428 == v219)))) {
{ rt_int rv4429 = rt_range(yr1914_TV(), INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv4429; }
}
if ((F.v4428 == v198)) {
{ rt_int rv4431 = yr1055_T(y_str("the end of the text", 19));
y_use = F.yu; return rv4431; }
}
if ((F.v4428 == v210)) {
yr1020_SB();
yr1044_SI(yr1914_TV());
{ rt_int rv4432 = yr1050_SE();
y_use = F.yu; return rv4432; }
}
{ rt_int rv4434 = yr1055_T(y_str("a literal", 9));
y_use = F.yu; return rv4434; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1959_Expect(rt_int a_p1960) {
struct yf1961 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1960 = a_p1960;
if ((!yr1948_Accept(F.p1960))) {
yr1020_SB();
yr1031_SA(y_str("expected ", 9));
yr1038_ST(rt_range(F.p1960, INT64_C(0), INT64_C(4000000)));
yr1031_SA(y_str(", found ", 8));
yr1038_ST(yr1954_TokText());
F.v4438 = yr1050_SE();
yr1151_Fail(yr1919_TLn(), F.v4438);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1965_Ident(void) {
struct yf1966 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((!(yr1909_TK() == v201))) {
yr1020_SB();
yr1031_SA(y_str("expected an identifier, found ", 30));
yr1038_ST(yr1954_TokText());
F.v4443 = yr1050_SE();
yr1151_Fail(yr1919_TLn(), F.v4443);
}
F.v4443 = rt_range(yr1914_TV(), INT64_C(0), INT64_C(4000000));
yr1943_Skip();
{ rt_int rv4445 = F.v4443;
y_use = F.yu; return rv4445; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1970_CloseName(rt_int a_p1971, rt_int a_p1972) {
struct yf1973 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1971 = a_p1971;
F.p1972 = a_p1972;
if (((((yr1909_TK() == v201)) || ((yr1909_TK() == v204))) || ((yr1909_TK() == v207)))) {
F.v4450 = rt_range(yr1914_TV(), INT64_C(0), INT64_C(4000000));
if ((F.v4450 == F.p1971)) {
yr1943_Skip();
y_use = F.yu; return;
}
}
yr1180_FailN(F.p1972, F.p1971, y_str(" is closed with another name", 28));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1977_ExtendedId(void) {
struct yf1978 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4454 = rt_range(yr1914_TV(), INT64_C(0), INT64_C(4000000));
if ((yr1909_TK() == v201)) {
yr1943_Skip();
{ rt_int rv4455 = F.v4454;
y_use = F.yu; return rv4455; }
}
if ((((yr1909_TK() == v204)) && (((((((((F.v4454 == v384)) || ((F.v4454 == v231))) || ((F.v4454 == v393))) || ((F.v4454 == v270))) || ((F.v4454 == v372))) || ((F.v4454 == v483))) || ((F.v4454 == v354)))))) {
yr1943_Skip();
{ rt_int rv4456 = F.v4454;
y_use = F.yu; return rv4456; }
}
if (((((((((((((yr1909_TK() == v207)) && ((!(F.v4454 == v588)))) && ((!(F.v4454 == v591)))) && ((!(F.v4454 == v594)))) && ((!(F.v4454 == v597)))) && ((!(F.v4454 == v600)))) && ((!(F.v4454 == v603)))) && ((!(F.v4454 == v606)))) && ((!(F.v4454 == v609)))) && ((!(F.v4454 == v531)))) && ((!(F.v4454 == v528))))) {
yr1943_Skip();
{ rt_int rv4457 = F.v4454;
y_use = F.yu; return rv4457; }
}
yr1172_FailS(yr1919_TLn(), y_str("expected a name", 15));
{ rt_int rv4460 = INT64_C(0);
y_use = F.yu; return rv4460; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1982_IsLabel(rt_int a_p1983) {
struct yf1984 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1983 = a_p1983;
F.v4464 = v1246;
while ((!(F.v4464 == ((void *)0)))) {
Y_TICK();
if ((((*(yR99 *)rt_nil_check(F.v4464))).f_name == F.p1983)) {
{ rt_int rv4466 = 1;
y_use = F.yu; return rv4466; }
}
F.v4464 = ((*(yR99 *)rt_nil_check(F.v4464))).f_next;
}
{ rt_int rv4468 = 0;
y_use = F.yu; return rv4468; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1988_ImportItem(void) {
struct yf1989 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4471 = yr1888_NewNode(v621, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4471))).f_name = yr1977_ExtendedId();
if ((yr1937_IsIdAt(INT64_C(0)) && ((yr1914_TV() == v1248)))) {
yr1943_Skip();
((*(yR99 *)rt_nil_check(F.v4471))).f_text = yr1965_Ident();
}
if (yr1948_Accept(v237)) {
((*(yR99 *)rt_nil_check(F.v4471))).f_ival = yr1977_ExtendedId();
}
{ void * rv4473 = F.v4471;
y_use = F.yu; return rv4473; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr1993_ParseModule(void) {
struct yf1994 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4476 = yr1888_NewNode(v618, yr1919_TLn());
F.v4478 = ((void *)0);
F.v4480 = ((void *)0);
F.v4482 = ((void *)0);
if (yr1948_Accept(v378)) {
((*(yR99 *)rt_nil_check(F.v4476))).f_flag = INT64_C(1);
} else {
yr1959_Expect(v375);
}
((*(yR99 *)rt_nil_check(F.v4476))).f_name = yr1965_Ident();
while (yr1948_Accept(v351)) {
Y_TICK();
for (;;) {
Y_TICK();
F.v4478 = yr1988_ImportItem();
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4476))).f_a, &F.v4480, F.v4478);
if ((!yr1948_Accept(v600))) {
goto yl_4486;
}
}
yl_4486: ;
yr1959_Expect(v603);
}
while (yr1948_Accept(v330)) {
Y_TICK();
F.v4484 = INT64_C(0);
if ((((yr1931_Is(v390) || yr1931_Is(v468)) || yr1931_Is(v423)) || yr1931_Is(v477))) {
F.v4484 = yr1914_TV();
yr1943_Skip();
}
for (;;) {
Y_TICK();
F.v4478 = yr1988_ImportItem();
((*(yR99 *)rt_nil_check(F.v4478))).f_flag = F.v4484;
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4476))).f_b, &F.v4482, F.v4478);
if ((!yr1948_Accept(v600))) {
goto yl_4488;
}
}
yl_4488: ;
yr1959_Expect(v603);
}
((*(yR99 *)rt_nil_check(F.v4476))).f_c = yr2003_ParseBlock();
if ((((*(yR99 *)rt_nil_check(F.v4476))).f_flag == INT64_C(1))) {
yr1959_Expect(v303);
} else {
yr1959_Expect(v300);
}
yr1970_CloseName(((*(yR99 *)rt_nil_check(F.v4476))).f_name, ((*(yR99 *)rt_nil_check(F.v4476))).f_line);
{ void * rv4490 = F.v4476;
y_use = F.yu; return rv4490; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1998_IsDeclWord(void) {
struct yf1999 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((!(yr1909_TK() == v204))) {
{ rt_int rv4495 = 0;
y_use = F.yu; return rv4495; }
}
F.v4493 = yr1914_TV();
{ rt_int rv4496 = (((((((((((((F.v4493 == v264)) || ((F.v4493 == v477))) || ((F.v4493 == v366))) || ((F.v4493 == v471))) || ((F.v4493 == v432))) || ((F.v4493 == v342))) || ((F.v4493 == v414))) || ((F.v4493 == v375))) || ((F.v4493 == v378))) || ((F.v4493 == v459))) || ((F.v4493 == v360))) || ((F.v4493 == v417)));
y_use = F.yu; return rv4496; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2003_ParseBlock(void) {
struct yf2004 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4499 = yr1888_NewNode(v624, yr1919_TLn());
F.v4501 = ((void *)0);
F.v4503 = v1246;
while (yr1998_IsDeclWord()) {
Y_TICK();
yr2030_ParseDeclGroup(&((*(yR99 *)rt_nil_check(F.v4499))).f_a, &F.v4501);
while (yr1948_Accept(v603)) {
Y_TICK();
}
}
if (yr1931_Is(v324)) {
((*(yR99 *)rt_nil_check(F.v4499))).f_b = yr2008_ParseHandler();
F.v4505 = ((*(yR99 *)rt_nil_check(F.v4499))).f_b;
if (yr1948_Accept(v603)) {
}
}
((*(yR99 *)rt_nil_check(F.v4499))).f_c = yr2094_ParseStatements(1);
v1246 = F.v4503;
{ void * rv4507 = F.v4499;
y_use = F.yu; return rv4507; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2008_ParseHandler(void) {
struct yf2009 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4510 = yr1888_NewNode(v627, yr1919_TLn());
F.v4512 = ((void *)0);
F.v4514 = ((void *)0);
F.v4516 = ((void *)0);
F.v4518 = ((void *)0);
yr1959_Expect(v324);
while (yr1948_Accept(v261)) {
Y_TICK();
F.v4512 = yr1888_NewNode(v630, yr1919_TLn());
F.v4518 = ((void *)0);
for (;;) {
Y_TICK();
F.v4516 = yr1888_NewNode(v663, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4516))).f_name = yr1965_Ident();
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4512))).f_a, &F.v4518, F.v4516);
if ((!yr1948_Accept(v600))) {
goto yl_4519;
}
}
yl_4519: ;
yr1959_Expect(v528);
((*(yR99 *)rt_nil_check(F.v4512))).f_b = yr2094_ParseStatements(0);
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4510))).f_a, &F.v4514, F.v4512);
}
if (yr1948_Accept(v276)) {
((*(yR99 *)rt_nil_check(F.v4510))).f_flag = INT64_C(1);
((*(yR99 *)rt_nil_check(F.v4510))).f_b = yr2094_ParseStatements(0);
}
yr1959_Expect(v285);
{ void * rv4523 = F.v4510;
y_use = F.yu; return rv4523; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2013_ParseNames(void) {
struct yf2014 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4526 = ((void *)0);
F.v4528 = ((void *)0);
F.v4530 = ((void *)0);
for (;;) {
Y_TICK();
F.v4530 = yr1888_NewNode(v663, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4530))).f_name = yr1965_Ident();
if (yr1948_Accept(v243)) {
((*(yR99 *)rt_nil_check(F.v4530))).f_a = yr2156_ParseExpr();
}
yr1895_Link(&F.v4526, &F.v4528, F.v4530);
if ((!yr1948_Accept(v600))) {
goto yl_4531;
}
}
yl_4531: ;
{ void * rv4532 = F.v4526;
y_use = F.yu; return rv4532; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2018_SimpleEntry(rt_int a_p2019) {
struct yf2020 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2019 = a_p2019;
if ((F.p2019 == v264)) {
F.v4536 = yr1888_NewNode(v633, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4536))).f_a = yr2013_ParseNames();
yr1959_Expect(v606);
((*(yR99 *)rt_nil_check(F.v4536))).f_b = yr2059_ParseRep();
yr1959_Expect(v579);
((*(yR99 *)rt_nil_check(F.v4536))).f_c = yr2156_ParseExpr();
} else if ((F.p2019 == v477)) {
F.v4536 = yr1888_NewNode(v636, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4536))).f_a = yr2013_ParseNames();
yr1959_Expect(v606);
((*(yR99 *)rt_nil_check(F.v4536))).f_b = yr2059_ParseRep();
if (yr1948_Accept(v525)) {
((*(yR99 *)rt_nil_check(F.v4536))).f_c = yr2156_ParseExpr();
}
} else if ((F.p2019 == v471)) {
F.v4536 = yr1888_NewNode(v642, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4536))).f_name = yr1965_Ident();
yr1959_Expect(v579);
((*(yR99 *)rt_nil_check(F.v4536))).f_b = yr2079_ParseConcrete1();
} else {
F.v4536 = yr1888_NewNode(v645, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4536))).f_name = yr1965_Ident();
yr1959_Expect(v579);
((*(yR99 *)rt_nil_check(F.v4536))).f_b = yr2059_ParseRep();
}
{ void * rv4537 = F.v4536;
y_use = F.yu; return rv4537; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2024_Continues(rt_int a_p2025) {
struct yf2026 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2025 = a_p2025;
if ((!((yr1931_Is(v603) && yr1937_IsIdAt(INT64_C(1)))))) {
{ rt_int rv4542 = 0;
y_use = F.yu; return rv4542; }
}
if (yr1982_IsLabel(rt_range(((rt_int *)(v1203).p)[y_ix1(v1203, rt_add(v1243, INT64_C(1)))], INT64_C(0), INT64_C(4000000)))) {
{ rt_int rv4546 = 0;
y_use = F.yu; return rv4546; }
}
if ((((F.p2025 == v264)) || ((F.p2025 == v477)))) {
{ rt_int rv4550 = ((yr1924_IsAt(INT64_C(2), v600) || yr1924_IsAt(INT64_C(2), v606)) || yr1924_IsAt(INT64_C(2), v243));
y_use = F.yu; return rv4550; }
}
{ rt_int rv4552 = yr1924_IsAt(INT64_C(2), v579);
y_use = F.yu; return rv4552; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2030_ParseDeclGroup(void * * a_p2031, void * * a_p2032) {
struct yf2033 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2031 = a_p2031;
F.p2032 = a_p2032;
F.v4557 = yr1914_TV();
if ((((((F.v4557 == v264)) || ((F.v4557 == v477))) || ((F.v4557 == v471))) || ((F.v4557 == v432)))) {
yr1943_Skip();
yr1895_Link(&(*F.p2031), &(*F.p2032), yr2018_SimpleEntry(F.v4557));
while (yr2024_Continues(F.v4557)) {
Y_TICK();
yr1943_Skip();
yr1895_Link(&(*F.p2031), &(*F.p2032), yr2018_SimpleEntry(F.v4557));
}
y_use = F.yu; return;
}
if ((F.v4557 == v366)) {
F.v4559 = yr1888_NewNode(v639, yr1919_TLn());
yr1943_Skip();
F.v4563 = ((void *)0);
for (;;) {
Y_TICK();
F.v4561 = yr1888_NewNode(v663, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4561))).f_name = yr1965_Ident();
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4559))).f_a, &F.v4563, F.v4561);
if ((!yr1948_Accept(v600))) {
goto yl_4564;
}
}
yl_4564: ;
F.v4561 = ((*(yR99 *)rt_nil_check(F.v4559))).f_a;
while ((!(F.v4561 == ((void *)0)))) {
Y_TICK();
((*(yR99 *)rt_nil_check(F.v4559))).f_b = yr1888_NewNode(v663, ((*(yR99 *)rt_nil_check(F.v4561))).f_line);
((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v4559))).f_b))).f_name = ((*(yR99 *)rt_nil_check(F.v4561))).f_name;
((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v4559))).f_b))).f_next = v1246;
v1246 = ((*(yR99 *)rt_nil_check(F.v4559))).f_b;
F.v4561 = ((*(yR99 *)rt_nil_check(F.v4561))).f_next;
}
((*(yR99 *)rt_nil_check(F.v4559))).f_b = ((void *)0);
yr1895_Link(&(*F.p2031), &(*F.p2032), F.v4559);
y_use = F.yu; return;
}
yr1895_Link(&(*F.p2031), &(*F.p2032), yr2037_ParseDecl());
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2037_ParseDecl(void) {
struct yf2038 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4573 = yr1914_TV();
F.v4575 = yr1919_TLn();
if ((((F.v4573 == v342)) || ((F.v4573 == v414)))) {
F.v4567 = yr1888_NewNode(v648, F.v4575);
yr1943_Skip();
if ((F.v4573 == v342)) {
((*(yR99 *)rt_nil_check(F.v4567))).f_flag = INT64_C(1);
}
if ((yr1931_Is(v333) || yr1931_Is(v429))) {
((*(yR99 *)rt_nil_check(F.v4567))).f_ival = yr1914_TV();
yr1943_Skip();
}
((*(yR99 *)rt_nil_check(F.v4567))).f_name = yr1977_ExtendedId();
yr2042_ParseFormals(F.v4567);
if (yr1948_Accept(v357)) {
((*(yR99 *)rt_nil_check(F.v4567))).f_e = yr1888_NewNode(v663, F.v4575);
}
((*(yR99 *)rt_nil_check(F.v4567))).f_c = yr2003_ParseBlock();
if ((F.v4573 == v342)) {
yr1959_Expect(v291);
} else {
yr1959_Expect(v306);
}
yr1970_CloseName(((*(yR99 *)rt_nil_check(F.v4567))).f_name, F.v4575);
{ void * rv4579 = F.v4567;
y_use = F.yu; return rv4579; }
}
if ((((F.v4573 == v375)) || ((F.v4573 == v378)))) {
{ void * rv4580 = yr1993_ParseModule();
y_use = F.yu; return rv4580; }
}
if ((F.v4573 == v459)) {
F.v4567 = yr1888_NewNode(v654, F.v4575);
yr1943_Skip();
((*(yR99 *)rt_nil_check(F.v4567))).f_name = yr1965_Ident();
yr1959_Expect(v588);
F.v4571 = ((void *)0);
for (;;) {
Y_TICK();
F.v4569 = yr1888_NewNode(v663, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4569))).f_name = yr1965_Ident();
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4567))).f_a, &F.v4571, F.v4569);
if ((!yr1948_Accept(v600))) {
goto yl_4581;
}
}
yl_4581: ;
yr1959_Expect(v591);
F.v4577 = v1243;
((*(yR99 *)rt_nil_check(F.v4567))).f_b = yr1993_ParseModule();
((*(yR99 *)rt_nil_check(F.v4567))).f_ival = F.v4577;
((*(yR99 *)rt_nil_check(F.v4567))).f_flag = v1243;
yr1959_Expect(v318);
yr1970_CloseName(((*(yR99 *)rt_nil_check(F.v4567))).f_name, F.v4575);
{ void * rv4582 = F.v4567;
y_use = F.yu; return rv4582; }
}
if ((F.v4573 == v360)) {
F.v4567 = yr1888_NewNode(v657, F.v4575);
yr1943_Skip();
((*(yR99 *)rt_nil_check(F.v4567))).f_name = yr1965_Ident();
yr1959_Expect(v588);
F.v4571 = ((void *)0);
for (;;) {
Y_TICK();
F.v4569 = yr1888_NewNode(v663, yr1919_TLn());
if ((yr1909_TK() == v210)) {
((*(yR99 *)rt_nil_check(F.v4569))).f_flag = INT64_C(1);
((*(yR99 *)rt_nil_check(F.v4569))).f_ival = yr1914_TV();
yr1943_Skip();
} else {
((*(yR99 *)rt_nil_check(F.v4569))).f_name = yr1977_ExtendedId();
}
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4567))).f_a, &F.v4571, F.v4569);
if ((!yr1948_Accept(v600))) {
goto yl_4583;
}
}
yl_4583: ;
yr1959_Expect(v591);
{ void * rv4585 = F.v4567;
y_use = F.yu; return rv4585; }
}
if ((F.v4573 == v417)) {
F.v4567 = yr1888_NewNode(v660, F.v4575);
yr1943_Skip();
((*(yR99 *)rt_nil_check(F.v4567))).f_name = yr1965_Ident();
yr2042_ParseFormals(F.v4567);
if ((!(((*(yR99 *)rt_nil_check(F.v4567))).f_b == ((void *)0)))) {
yr1172_FailS(F.v4575, y_str("a process returns no value", 26));
}
if (yr1948_Accept(v411)) {
((*(yR99 *)rt_nil_check(F.v4567))).f_d = yr2156_ParseExpr();
}
if (yr1948_Accept(v363)) {
((*(yR99 *)rt_nil_check(F.v4567))).f_e = yr2156_ParseExpr();
}
if (yr1948_Accept(v453)) {
((*(yR99 *)rt_nil_check(F.v4567))).f_x = yr2156_ParseExpr();
}
((*(yR99 *)rt_nil_check(F.v4567))).f_c = yr2003_ParseBlock();
yr1959_Expect(v309);
yr1970_CloseName(((*(yR99 *)rt_nil_check(F.v4567))).f_name, F.v4575);
{ void * rv4587 = F.v4567;
y_use = F.yu; return rv4587; }
}
yr1172_FailS(F.v4575, y_str("expected a declaration", 22));
{ void * rv4589 = ((void *)0);
y_use = F.yu; return rv4589; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2042_ParseFormals(void * a_p2043) {
struct yf2044 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2043 = a_p2043;
F.v4593 = ((void *)0);
F.v4595 = ((void *)0);
if (yr1948_Accept(v438)) {
((*(yR99 *)rt_nil_check(F.p2043))).f_b = yr2059_ParseRep();
}
yr1959_Expect(v588);
while ((!yr1931_Is(v591))) {
Y_TICK();
if (yr1948_Accept(v264)) {
F.v4597 = v891;
} else if (yr1948_Accept(v399)) {
F.v4597 = v894;
} else if (yr1948_Accept(v477)) {
F.v4597 = v897;
} else {
yr1172_FailS(yr1919_TLn(), y_str("a formal parameter is CONST, OUT or VAR", 39));
}
for (;;) {
Y_TICK();
F.v4593 = yr1888_NewNode(v651, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4593))).f_ival = F.v4597;
((*(yR99 *)rt_nil_check(F.v4593))).f_a = yr2013_ParseNames();
yr1959_Expect(v606);
((*(yR99 *)rt_nil_check(F.v4593))).f_b = yr2048_ParseFormalRep();
yr1895_Link(&((*(yR99 *)rt_nil_check(F.p2043))).f_a, &F.v4595, F.v4593);
if ((!((((yr1931_Is(v603) || yr1931_Is(v600))) && yr1937_IsIdAt(INT64_C(1)))))) {
goto yl_4599;
}
yr1943_Skip();
}
yl_4599: ;
if ((!yr1948_Accept(v603))) {
if ((!yr1948_Accept(v600))) {
yr1959_Expect(v591);
y_use = F.yu; return;
}
}
}
yr1959_Expect(v591);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2048_ParseFormalRep(void) {
struct yf2049 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if (((yr1931_Is(v234) && yr1924_IsAt(INT64_C(1), v588)) && ((yr1924_IsAt(INT64_C(3), v267) || ((yr1937_IsIdAt(INT64_C(3)) && ((((rt_int *)(v1203).p)[y_ix1(v1203, rt_add(v1243, INT64_C(3)))] == v1251)))))))) {
F.v4603 = yr1888_NewNode(v690, yr1919_TLn());
yr1943_Skip();
yr1943_Skip();
((*(yR99 *)rt_nil_check(F.v4603))).f_a = yr2156_ParseExpr();
yr1943_Skip();
yr1959_Expect(v387);
((*(yR99 *)rt_nil_check(F.v4603))).f_b = yr2059_ParseRep();
yr1959_Expect(v591);
{ void * rv4609 = F.v4603;
y_use = F.yu; return rv4609; }
}
if (yr1931_Is(v456)) {
F.v4603 = yr1888_NewNode(v693, yr1919_TLn());
yr1943_Skip();
{ void * rv4610 = F.v4603;
y_use = F.yu; return rv4610; }
}
{ void * rv4611 = yr2059_ParseRep();
y_use = F.yu; return rv4611; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2053_IsStructWord(rt_int a_p2054) {
struct yf2055 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2054 = a_p2054;
F.v4615 = ((rt_int *)(v1203).p)[y_ix1(v1203, rt_add(v1243, F.p2054))];
if ((!(((rt_int *)(v1201).p)[y_ix1(v1201, rt_add(v1243, F.p2054))] == v204))) {
{ rt_int rv4619 = 0;
y_use = F.yu; return rv4619; }
}
{ rt_int rv4620 = (((((((((F.v4615 == v474)) || ((F.v4615 == v396))) || ((F.v4615 == v228))) || ((F.v4615 == v234))) || ((F.v4615 == v426))) || ((F.v4615 == v336))) || ((F.v4615 == v405))) || ((F.v4615 == v447)));
y_use = F.yu; return rv4620; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2059_ParseRep(void) {
struct yf2060 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((yr1937_IsIdAt(INT64_C(0)) && ((yr2053_IsStructWord(INT64_C(1)) || ((yr1937_IsIdAt(INT64_C(1)) && yr1924_IsAt(INT64_C(2), v594))))))) {
F.v4623 = yr1965_Ident();
F.v4625 = yr2064_ParseConcrete();
((*(yR99 *)rt_nil_check(F.v4625))).f_text = F.v4623;
{ void * rv4630 = F.v4625;
y_use = F.yu; return rv4630; }
}
{ void * rv4631 = yr2064_ParseConcrete();
y_use = F.yu; return rv4631; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2064_ParseConcrete(void) {
struct yf2065 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4634 = yr2079_ParseConcrete1();
if (yr1948_Accept(v402)) {
if (((((yr1909_TK() == v210)) || ((yr1909_TK() == v201))) || yr1931_Is(v588))) {
F.v4636 = yr2161_ParseSimple();
}
}
if (yr1948_Accept(v225)) {
F.v4636 = yr2161_ParseSimple();
}
{ void * rv4637 = F.v4634;
y_use = F.yu; return rv4637; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2069_ParseIds(void) {
struct yf2070 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4640 = ((void *)0);
F.v4642 = ((void *)0);
F.v4644 = ((void *)0);
for (;;) {
Y_TICK();
F.v4644 = yr1888_NewNode(v663, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4644))).f_name = yr1965_Ident();
yr1895_Link(&F.v4640, &F.v4642, F.v4644);
if ((!yr1948_Accept(v600))) {
goto yl_4645;
}
}
yl_4645: ;
{ void * rv4646 = F.v4640;
y_use = F.yu; return rv4646; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2074_ParseFieldGroups(void) {
struct yf2075 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4649 = ((void *)0);
F.v4651 = ((void *)0);
F.v4653 = ((void *)0);
while ((yr1931_Is(v264) || yr1931_Is(v477))) {
Y_TICK();
F.v4655 = yr1914_TV();
yr1943_Skip();
for (;;) {
Y_TICK();
F.v4653 = yr1888_NewNode(v699, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4653))).f_ival = F.v4655;
((*(yR99 *)rt_nil_check(F.v4653))).f_a = yr2013_ParseNames();
yr1959_Expect(v606);
((*(yR99 *)rt_nil_check(F.v4653))).f_b = yr2059_ParseRep();
yr1895_Link(&F.v4649, &F.v4651, F.v4653);
if ((!((yr1931_Is(v603) && yr1937_IsIdAt(INT64_C(1)))))) {
goto yl_4656;
}
yr1943_Skip();
}
yl_4656: ;
if ((!yr1948_Accept(v603))) {
{ void * rv4658 = F.v4649;
y_use = F.yu; return rv4658; }
}
}
{ void * rv4659 = F.v4649;
y_use = F.yu; return rv4659; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2079_ParseConcrete1(void) {
struct yf2080 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4676 = yr1919_TLn();
if ((yr1909_TK() == v201)) {
F.v4662 = yr1888_NewNode(v666, F.v4676);
((*(yR99 *)rt_nil_check(F.v4662))).f_name = yr1965_Ident();
((*(yR99 *)rt_nil_check(F.v4662))).f_a = yr2084_ParseQualifier();
{ void * rv4677 = F.v4662;
y_use = F.yu; return rv4677; }
}
if ((!(yr1909_TK() == v204))) {
yr1172_FailS(F.v4676, y_str("expected a representation", 25));
}
F.v4674 = yr1914_TV();
if ((((F.v4674 == v474)) || ((F.v4674 == v396)))) {
F.v4662 = yr1888_NewNode(v669, F.v4676);
if ((F.v4674 == v396)) {
((*(yR99 *)rt_nil_check(F.v4662))).f_flag = INT64_C(1);
}
yr1943_Skip();
yr1959_Expect(v588);
((*(yR99 *)rt_nil_check(F.v4662))).f_a = yr2069_ParseIds();
yr1959_Expect(v591);
((*(yR99 *)rt_nil_check(F.v4662))).f_b = yr2084_ParseQualifier();
{ void * rv4680 = F.v4662;
y_use = F.yu; return rv4680; }
}
if ((F.v4674 == v228)) {
F.v4662 = yr1888_NewNode(v672, F.v4676);
yr1943_Skip();
yr1959_Expect(v588);
F.v4672 = ((void *)0);
for (;;) {
Y_TICK();
if ((!(yr1909_TK() == v219))) {
yr1172_FailS(yr1919_TLn(), y_str("an ALPHABET lists character literals", 36));
}
F.v4670 = yr1888_NewNode(v762, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4670))).f_text = rt_range(yr1914_TV(), INT64_C(0), INT64_C(4000000));
yr1943_Skip();
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4662))).f_a, &F.v4672, F.v4670);
if ((!yr1948_Accept(v600))) {
goto yl_4681;
}
}
yl_4681: ;
yr1959_Expect(v591);
((*(yR99 *)rt_nil_check(F.v4662))).f_b = yr2084_ParseQualifier();
{ void * rv4683 = F.v4662;
y_use = F.yu; return rv4683; }
}
if ((F.v4674 == v234)) {
F.v4662 = yr1888_NewNode(v675, F.v4676);
yr1943_Skip();
yr1959_Expect(v588);
F.v4672 = ((void *)0);
for (;;) {
Y_TICK();
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4662))).f_a, &F.v4672, yr2059_ParseRep());
if ((!yr1948_Accept(v600))) {
goto yl_4684;
}
}
yl_4684: ;
yr1959_Expect(v387);
((*(yR99 *)rt_nil_check(F.v4662))).f_b = yr2059_ParseRep();
yr1959_Expect(v591);
{ void * rv4685 = F.v4662;
y_use = F.yu; return rv4685; }
}
if ((F.v4674 == v426)) {
F.v4662 = yr1888_NewNode(v678, F.v4676);
yr1943_Skip();
((*(yR99 *)rt_nil_check(F.v4662))).f_a = yr2074_ParseFieldGroups();
if (yr1948_Accept(v444)) {
F.v4664 = yr1888_NewNode(v702, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4664))).f_name = yr1965_Ident();
yr1959_Expect(v606);
((*(yR99 *)rt_nil_check(F.v4664))).f_b = yr2059_ParseRep();
F.v4668 = ((void *)0);
while (yr1948_Accept(v261)) {
Y_TICK();
F.v4666 = yr1888_NewNode(v705, yr1919_TLn());
F.v4672 = ((void *)0);
for (;;) {
Y_TICK();
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4666))).f_a, &F.v4672, yr2156_ParseExpr());
if ((!yr1948_Accept(v600))) {
goto yl_4686;
}
}
yl_4686: ;
yr1959_Expect(v528);
((*(yR99 *)rt_nil_check(F.v4666))).f_b = yr2074_ParseFieldGroups();
while (yr1948_Accept(v603)) {
Y_TICK();
}
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4664))).f_a, &F.v4668, F.v4666);
}
yr1959_Expect(v315);
if (yr1948_Accept(v603)) {
}
((*(yR99 *)rt_nil_check(F.v4662))).f_b = F.v4664;
}
yr1959_Expect(v312);
{ void * rv4687 = F.v4662;
y_use = F.yu; return rv4687; }
}
if (((((F.v4674 == v336)) || ((F.v4674 == v405))) || ((F.v4674 == v447)))) {
if ((F.v4674 == v336)) {
F.v4662 = yr1888_NewNode(v681, F.v4676);
} else if ((F.v4674 == v405)) {
F.v4662 = yr1888_NewNode(v684, F.v4676);
} else {
F.v4662 = yr1888_NewNode(v687, F.v4676);
}
yr1943_Skip();
yr1959_Expect(v588);
((*(yR99 *)rt_nil_check(F.v4662))).f_a = yr2059_ParseRep();
yr1959_Expect(v591);
{ void * rv4688 = F.v4662;
y_use = F.yu; return rv4688; }
}
yr1172_FailS(F.v4676, y_str("expected a representation", 25));
{ void * rv4690 = ((void *)0);
y_use = F.yu; return rv4690; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2084_ParseQualifier(void) {
struct yf2085 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((!yr1931_Is(v594))) {
{ void * rv4694 = ((void *)0);
y_use = F.yu; return rv4694; }
}
F.v4693 = yr1888_NewNode(v696, yr1919_TLn());
yr1943_Skip();
((*(yR99 *)rt_nil_check(F.v4693))).f_a = yr2156_ParseExpr();
yr1959_Expect(v531);
((*(yR99 *)rt_nil_check(F.v4693))).f_b = yr2156_ParseExpr();
yr1959_Expect(v597);
if (yr1948_Accept(v441)) {
((*(yR99 *)rt_nil_check(F.v4693))).f_c = yr2161_ParseSimple();
} else if (yr1948_Accept(v408)) {
((*(yR99 *)rt_nil_check(F.v4693))).f_d = yr2161_ParseSimple();
}
{ void * rv4695 = F.v4693;
y_use = F.yu; return rv4695; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2089_IsStop(void) {
struct yf2090 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((yr1909_TK() == v198)) {
{ rt_int rv4700 = 1;
y_use = F.yu; return rv4700; }
}
if ((!(yr1909_TK() == v204))) {
{ rt_int rv4702 = 0;
y_use = F.yu; return rv4702; }
}
F.v4698 = yr1914_TV();
{ rt_int rv4703 = ((((((((((((((((F.v4698 == v279)) || ((F.v4698 == v276))) || ((F.v4698 == v294))) || ((F.v4698 == v261))) || ((F.v4698 == v315))) || ((F.v4698 == v321))) || ((F.v4698 == v288))) || ((F.v4698 == v297))) || ((F.v4698 == v282))) || ((F.v4698 == v285))) || ((F.v4698 == v306))) || ((F.v4698 == v291))) || ((F.v4698 == v309))) || ((F.v4698 == v300))) || ((F.v4698 == v303)));
y_use = F.yu; return rv4703; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2094_ParseStatements(rt_int a_p2095) {
struct yf2096 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2095 = a_p2095;
F.v4707 = ((void *)0);
F.v4709 = ((void *)0);
F.v4711 = ((void *)0);
for (;;) {
Y_TICK();
while (yr1948_Accept(v603)) {
Y_TICK();
}
if (yr2089_IsStop()) {
goto yl_4714;
}
F.v4713 = INT64_C(0);
if (((F.p2095 && yr1937_IsIdAt(INT64_C(0))) && yr1924_IsAt(INT64_C(1), v606))) {
F.v4713 = yr1965_Ident();
yr1943_Skip();
}
F.v4711 = yr2100_ParseStatement();
((*(yR99 *)rt_nil_check(F.v4711))).f_text = F.v4713;
yr1895_Link(&F.v4707, &F.v4709, F.v4711);
if ((!yr1931_Is(v603))) {
goto yl_4714;
}
}
yl_4714: ;
{ void * rv4718 = F.v4707;
y_use = F.yu; return rv4718; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2100_ParseStatement(void) {
struct yf2101 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4735 = yr1919_TLn();
if ((yr1909_TK() == v204)) {
F.v4733 = yr1914_TV();
if ((F.v4733 == v240)) {
yr1943_Skip();
F.v4721 = yr1888_NewNode(v714, F.v4735);
((*(yR99 *)rt_nil_check(F.v4721))).f_a = yr2156_ParseExpr();
{ void * rv4736 = F.v4721;
y_use = F.yu; return rv4736; }
}
if ((F.v4733 == v345)) {
yr1943_Skip();
F.v4721 = yr1888_NewNode(v717, F.v4735);
((*(yR99 *)rt_nil_check(F.v4721))).f_name = yr1965_Ident();
{ void * rv4737 = F.v4721;
y_use = F.yu; return rv4737; }
}
if ((F.v4733 == v327)) {
yr1943_Skip();
F.v4721 = yr1888_NewNode(v720, F.v4735);
((*(yR99 *)rt_nil_check(F.v4721))).f_name = yr1965_Ident();
{ void * rv4738 = F.v4721;
y_use = F.yu; return rv4738; }
}
if ((F.v4733 == v435)) {
yr1943_Skip();
F.v4721 = yr1888_NewNode(v723, F.v4735);
if ((!((yr1931_Is(v603) || yr2089_IsStop())))) {
((*(yR99 *)rt_nil_check(F.v4721))).f_a = yr2156_ParseExpr();
}
{ void * rv4739 = F.v4721;
y_use = F.yu; return rv4739; }
}
if ((F.v4733 == v462)) {
yr1943_Skip();
{ void * rv4740 = yr1888_NewNode(v726, F.v4735);
y_use = F.yu; return rv4740; }
}
if ((F.v4733 == v420)) {
yr1943_Skip();
F.v4721 = yr1888_NewNode(v729, F.v4735);
if (yr1937_IsIdAt(INT64_C(0))) {
((*(yR99 *)rt_nil_check(F.v4721))).f_name = yr1965_Ident();
}
{ void * rv4742 = F.v4721;
y_use = F.yu; return rv4742; }
}
if ((F.v4733 == v348)) {
yr1943_Skip();
F.v4721 = yr1888_NewNode(v732, F.v4735);
F.v4725 = ((void *)0);
F.v4723 = yr1888_NewNode(v750, F.v4735);
((*(yR99 *)rt_nil_check(F.v4723))).f_a = yr2156_ParseExpr();
yr1959_Expect(v465);
((*(yR99 *)rt_nil_check(F.v4723))).f_b = yr2094_ParseStatements(0);
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4721))).f_a, &F.v4725, F.v4723);
while (yr1931_Is(v279)) {
Y_TICK();
F.v4723 = yr1888_NewNode(v750, yr1919_TLn());
yr1943_Skip();
((*(yR99 *)rt_nil_check(F.v4723))).f_a = yr2156_ParseExpr();
yr1959_Expect(v465);
((*(yR99 *)rt_nil_check(F.v4723))).f_b = yr2094_ParseStatements(0);
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4721))).f_a, &F.v4725, F.v4723);
}
if (yr1948_Accept(v276)) {
((*(yR99 *)rt_nil_check(F.v4721))).f_flag = INT64_C(1);
((*(yR99 *)rt_nil_check(F.v4721))).f_b = yr2094_ParseStatements(0);
}
yr1959_Expect(v294);
{ void * rv4747 = F.v4721;
y_use = F.yu; return rv4747; }
}
if ((F.v4733 == v444)) {
yr1943_Skip();
F.v4721 = yr1888_NewNode(v735, F.v4735);
((*(yR99 *)rt_nil_check(F.v4721))).f_a = yr2156_ParseExpr();
F.v4725 = ((void *)0);
while (yr1931_Is(v261)) {
Y_TICK();
F.v4723 = yr1888_NewNode(v750, yr1919_TLn());
yr1943_Skip();
F.v4729 = ((void *)0);
for (;;) {
Y_TICK();
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4723))).f_a, &F.v4729, yr2156_ParseExpr());
if ((!yr1948_Accept(v600))) {
goto yl_4748;
}
}
yl_4748: ;
yr1959_Expect(v528);
((*(yR99 *)rt_nil_check(F.v4723))).f_b = yr2094_ParseStatements(0);
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4721))).f_b, &F.v4725, F.v4723);
}
if (yr1948_Accept(v276)) {
((*(yR99 *)rt_nil_check(F.v4721))).f_flag = INT64_C(1);
((*(yR99 *)rt_nil_check(F.v4721))).f_c = yr2094_ParseStatements(0);
}
yr1959_Expect(v315);
{ void * rv4752 = F.v4721;
y_use = F.yu; return rv4752; }
}
if ((F.v4733 == v480)) {
yr1943_Skip();
F.v4721 = yr1888_NewNode(v738, F.v4735);
((*(yR99 *)rt_nil_check(F.v4721))).f_a = yr2156_ParseExpr();
yr1959_Expect(v273);
((*(yR99 *)rt_nil_check(F.v4721))).f_b = yr2094_ParseStatements(0);
yr1959_Expect(v321);
{ void * rv4754 = F.v4721;
y_use = F.yu; return rv4754; }
}
if ((F.v4733 == v339)) {
yr1943_Skip();
F.v4721 = yr1888_NewNode(v741, F.v4735);
((*(yR99 *)rt_nil_check(F.v4721))).f_name = yr1965_Ident();
yr1959_Expect(v606);
((*(yR99 *)rt_nil_check(F.v4721))).f_a = yr2059_ParseRep();
yr1959_Expect(v273);
((*(yR99 *)rt_nil_check(F.v4721))).f_b = yr2094_ParseStatements(0);
yr1959_Expect(v288);
{ void * rv4756 = F.v4721;
y_use = F.yu; return rv4756; }
}
if ((F.v4733 == v369)) {
yr1943_Skip();
F.v4721 = yr1888_NewNode(v744, F.v4735);
((*(yR99 *)rt_nil_check(F.v4721))).f_name = yr1965_Ident();
((*(yR99 *)rt_nil_check(F.v4721))).f_b = yr2094_ParseStatements(0);
yr1959_Expect(v297);
yr1970_CloseName(((*(yR99 *)rt_nil_check(F.v4721))).f_name, F.v4735);
{ void * rv4758 = F.v4721;
y_use = F.yu; return rv4758; }
}
if ((((F.v4733 == v258)) || ((F.v4733 == v450)))) {
F.v4721 = yr1888_NewNode(v747, F.v4735);
if (yr1948_Accept(v450)) {
((*(yR99 *)rt_nil_check(F.v4721))).f_flag = INT64_C(1);
}
yr1959_Expect(v258);
((*(yR99 *)rt_nil_check(F.v4721))).f_a = yr2003_ParseBlock();
yr1959_Expect(v282);
{ void * rv4760 = F.v4721;
y_use = F.yu; return rv4760; }
}
}
F.v4731 = yr2187_ParseDesignator();
if (yr1948_Accept(v525)) {
F.v4721 = yr1888_NewNode(v708, F.v4735);
((*(yR99 *)rt_nil_check(F.v4721))).f_a = F.v4731;
((*(yR99 *)rt_nil_check(F.v4721))).f_b = yr2156_ParseExpr();
{ void * rv4761 = F.v4721;
y_use = F.yu; return rv4761; }
}
if ((!(((*(yR99 *)rt_nil_check(F.v4731))).f_kind == v774))) {
yr1172_FailS(F.v4735, y_str("expected a statement", 20));
}
F.v4721 = yr1888_NewNode(v711, F.v4735);
((*(yR99 *)rt_nil_check(F.v4721))).f_a = F.v4731;
{ void * rv4763 = F.v4721;
y_use = F.yu; return rv4763; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2105_OpAt(void) {
struct yf2106 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((((yr1909_TK() == v207)) || ((yr1909_TK() == v204)))) {
{ rt_int rv4765 = rt_range(yr1914_TV(), INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv4765; }
}
{ rt_int rv4767 = INT64_C(0);
y_use = F.yu; return rv4767; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2110_IsRel(rt_int a_p2111) {
struct yf2112 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2111 = a_p2111;
{ rt_int rv4770 = ((((((((((((((((((((F.p2111 == v354)) || ((F.p2111 == v564))) || ((F.p2111 == v579))) || ((F.p2111 == v582))) || ((F.p2111 == v534))) || ((F.p2111 == v585))) || ((F.p2111 == v537))) || ((F.p2111 == v540))) || ((F.p2111 == v495))) || ((F.p2111 == v543))) || ((F.p2111 == v498))) || ((F.p2111 == v546))) || ((F.p2111 == v507))) || ((F.p2111 == v501))) || ((F.p2111 == v489))) || ((F.p2111 == v549))) || ((F.p2111 == v510))) || ((F.p2111 == v504))) || ((F.p2111 == v492)));
y_use = F.yu; return rv4770; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2116_IsAssocMul(rt_int a_p2117) {
struct yf2118 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2117 = a_p2117;
{ rt_int rv4773 = (((F.p2117 == v573)) || ((F.p2117 == v231)));
y_use = F.yu; return rv4773; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2122_IsNonAssocMul(rt_int a_p2123) {
struct yf2124 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2123 = a_p2123;
{ rt_int rv4776 = ((((((((F.p2123 == v576)) || ((F.p2123 == v270))) || ((F.p2123 == v372))) || ((F.p2123 == v552))) || ((F.p2123 == v513))) || ((F.p2123 == v555))) || ((F.p2123 == v516)));
y_use = F.yu; return rv4776; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2128_IsAssocAdd(rt_int a_p2129) {
struct yf2130 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2129 = a_p2129;
{ rt_int rv4779 = (((F.p2129 == v567)) || ((F.p2129 == v393)));
y_use = F.yu; return rv4779; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2134_IsNonAssocAdd(rt_int a_p2135) {
struct yf2136 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2135 = a_p2135;
{ rt_int rv4782 = (((((((F.p2135 == v570)) || ((F.p2135 == v483))) || ((F.p2135 == v558))) || ((F.p2135 == v519))) || ((F.p2135 == v561))) || ((F.p2135 == v522)));
y_use = F.yu; return rv4782; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2140_Bin(rt_int a_p2141, void * a_p2142, void * a_p2143, rt_int a_p2144) {
struct yf2145 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2141 = a_p2141;
F.p2142 = a_p2142;
F.p2143 = a_p2143;
F.p2144 = a_p2144;
F.v4789 = yr1888_NewNode(v792, F.p2144);
((*(yR99 *)rt_nil_check(F.v4789))).f_name = F.p2141;
((*(yR99 *)rt_nil_check(F.v4789))).f_a = F.p2142;
((*(yR99 *)rt_nil_check(F.v4789))).f_b = F.p2143;
{ void * rv4790 = F.v4789;
y_use = F.yu; return rv4790; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2149_NeedParens(rt_int a_p2150, rt_int a_p2151) {
struct yf2152 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2150 = a_p2150;
F.p2151 = a_p2151;
yr1020_SB();
yr1038_ST(F.p2150);
yr1031_SA(y_str(" next to another operator of its level needs parentheses (VIII.A)", 65));
F.v4795 = yr1050_SE();
yr1151_Fail(F.p2151, F.v4795);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2156_ParseExpr(void) {
struct yf2157 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4803 = yr1919_TLn();
F.v4799 = yr2161_ParseSimple();
F.v4801 = yr2105_OpAt();
if (yr2110_IsRel(F.v4801)) {
yr1943_Skip();
F.v4799 = yr2140_Bin(F.v4801, F.v4799, yr2161_ParseSimple(), F.v4803);
if (yr2110_IsRel(yr2105_OpAt())) {
yr2149_NeedParens(F.v4801, F.v4803);
}
}
{ void * rv4804 = F.v4799;
y_use = F.yu; return rv4804; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2161_ParseSimple(void) {
struct yf2162 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4813 = yr1919_TLn();
if (yr1931_Is(v570)) {
yr1943_Skip();
F.v4809 = yr1888_NewNode(v789, F.v4813);
((*(yR99 *)rt_nil_check(F.v4809))).f_a = yr2166_ParseTerm();
F.v4811 = yr2105_OpAt();
if ((yr2128_IsAssocAdd(F.v4811) || yr2134_IsNonAssocAdd(F.v4811))) {
yr2149_NeedParens(rt_range(v570, INT64_C(0), INT64_C(4000000)), F.v4813);
}
{ void * rv4814 = F.v4809;
y_use = F.yu; return rv4814; }
}
F.v4807 = yr2166_ParseTerm();
F.v4811 = yr2105_OpAt();
if (yr2134_IsNonAssocAdd(F.v4811)) {
yr1943_Skip();
F.v4807 = yr2140_Bin(F.v4811, F.v4807, yr2166_ParseTerm(), F.v4813);
if ((yr2128_IsAssocAdd(yr2105_OpAt()) || yr2134_IsNonAssocAdd(yr2105_OpAt()))) {
yr2149_NeedParens(F.v4811, F.v4813);
}
{ void * rv4815 = F.v4807;
y_use = F.yu; return rv4815; }
}
while (yr2128_IsAssocAdd(F.v4811)) {
Y_TICK();
yr1943_Skip();
F.v4807 = yr2140_Bin(F.v4811, F.v4807, yr2166_ParseTerm(), F.v4813);
if (yr2134_IsNonAssocAdd(yr2105_OpAt())) {
yr2149_NeedParens(yr2105_OpAt(), F.v4813);
}
F.v4811 = yr2105_OpAt();
}
{ void * rv4816 = F.v4807;
y_use = F.yu; return rv4816; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2166_ParseTerm(void) {
struct yf2167 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4823 = yr1919_TLn();
F.v4819 = yr2182_ParseFactor();
F.v4821 = yr2105_OpAt();
if (yr2122_IsNonAssocMul(F.v4821)) {
yr1943_Skip();
F.v4819 = yr2140_Bin(F.v4821, F.v4819, yr2182_ParseFactor(), F.v4823);
if ((yr2116_IsAssocMul(yr2105_OpAt()) || yr2122_IsNonAssocMul(yr2105_OpAt()))) {
yr2149_NeedParens(F.v4821, F.v4823);
}
{ void * rv4824 = F.v4819;
y_use = F.yu; return rv4824; }
}
while (yr2116_IsAssocMul(F.v4821)) {
Y_TICK();
yr1943_Skip();
F.v4819 = yr2140_Bin(F.v4821, F.v4819, yr2182_ParseFactor(), F.v4823);
if (yr2122_IsNonAssocMul(yr2105_OpAt())) {
yr2149_NeedParens(yr2105_OpAt(), F.v4823);
}
F.v4821 = yr2105_OpAt();
}
{ void * rv4825 = F.v4819;
y_use = F.yu; return rv4825; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2171_IsLiteralAt(rt_int a_p2172) {
struct yf2173 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2172 = a_p2172;
F.v4829 = ((rt_int *)(v1201).p)[y_ix1(v1201, rt_add(v1243, F.p2172))];
{ rt_int rv4831 = (((((((F.v4829 == v210)) || ((F.v4829 == v213))) || ((F.v4829 == v216))) || ((F.v4829 == v219))) || ((F.v4829 == v222))) || yr1924_IsAt(F.p2172, v381));
y_use = F.yu; return rv4831; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2177_ParseLiteral(void) {
struct yf2178 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4836 = yr1909_TK();
F.v4838 = yr1919_TLn();
if ((F.v4836 == v210)) {
F.v4834 = yr1888_NewNode(v753, F.v4838);
((*(yR99 *)rt_nil_check(F.v4834))).f_ival = yr1914_TV();
} else if ((F.v4836 == v213)) {
F.v4834 = yr1888_NewNode(v756, F.v4838);
((*(yR99 *)rt_nil_check(F.v4834))).f_ival = yr1914_TV();
} else if ((F.v4836 == v216)) {
F.v4834 = yr1888_NewNode(v759, F.v4838);
((*(yR99 *)rt_nil_check(F.v4834))).f_text = rt_range(yr1914_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v4836 == v219)) {
F.v4834 = yr1888_NewNode(v762, F.v4838);
((*(yR99 *)rt_nil_check(F.v4834))).f_text = rt_range(yr1914_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v4836 == v222)) {
F.v4834 = yr1888_NewNode(v765, F.v4838);
((*(yR99 *)rt_nil_check(F.v4834))).f_text = rt_range(yr1914_TV(), INT64_C(0), INT64_C(4000000));
} else {
F.v4834 = yr1888_NewNode(v768, F.v4838);
}
yr1943_Skip();
{ void * rv4839 = F.v4834;
y_use = F.yu; return rv4839; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2182_ParseFactor(void) {
struct yf2183 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4846 = yr1919_TLn();
if (yr1931_Is(v384)) {
yr1943_Skip();
F.v4842 = yr1888_NewNode(v786, F.v4846);
((*(yR99 *)rt_nil_check(F.v4842))).f_a = yr2182_ParseFactor();
{ void * rv4847 = F.v4842;
y_use = F.yu; return rv4847; }
}
if (yr1931_Is(v588)) {
yr1943_Skip();
F.v4842 = yr1888_NewNode(v795, F.v4846);
((*(yR99 *)rt_nil_check(F.v4842))).f_a = yr2156_ParseExpr();
yr1959_Expect(v591);
{ void * rv4848 = F.v4842;
y_use = F.yu; return rv4848; }
}
if (yr2171_IsLiteralAt(INT64_C(0))) {
{ void * rv4850 = yr2177_ParseLiteral();
y_use = F.yu; return rv4850; }
}
if (yr1937_IsIdAt(INT64_C(0))) {
if ((yr2171_IsLiteralAt(INT64_C(1)) || ((yr1937_IsIdAt(INT64_C(1)) && (!((((((yr1924_IsAt(INT64_C(2), v588) || yr1924_IsAt(INT64_C(2), v594)) || yr1924_IsAt(INT64_C(2), v609)) || yr1924_IsAt(INT64_C(2), v612)) || yr1924_IsAt(INT64_C(2), v525)) || yr1924_IsAt(INT64_C(2), v606)))))))) {
F.v4844 = yr1965_Ident();
if (yr1937_IsIdAt(INT64_C(0))) {
F.v4842 = yr1888_NewNode(v771, F.v4846);
((*(yR99 *)rt_nil_check(F.v4842))).f_name = yr1965_Ident();
} else {
F.v4842 = yr2177_ParseLiteral();
}
((*(yR99 *)rt_nil_check(F.v4842))).f_d = yr1888_NewNode(v663, F.v4846);
((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v4842))).f_d))).f_name = F.v4844;
{ void * rv4861 = F.v4842;
y_use = F.yu; return rv4861; }
}
{ void * rv4862 = yr2187_ParseDesignator();
y_use = F.yu; return rv4862; }
}
yr1180_FailN(F.v4846, yr1954_TokText(), y_str(" cannot begin an operand", 24));
{ void * rv4864 = ((void *)0);
y_use = F.yu; return rv4864; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2187_ParseDesignator(void) {
struct yf2188 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4873 = yr1919_TLn();
F.v4867 = yr1888_NewNode(v771, F.v4873);
((*(yR99 *)rt_nil_check(F.v4867))).f_name = yr1965_Ident();
if (yr1948_Accept(v588)) {
((*(yR99 *)rt_nil_check(F.v4867))).f_kind = v774;
F.v4871 = ((void *)0);
while ((!yr1931_Is(v591))) {
Y_TICK();
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4867))).f_a, &F.v4871, yr2156_ParseExpr());
if ((!yr1948_Accept(v600))) {
yr2192_EXIT_ARGS();
}
}
yr1959_Expect(v591);
}
for (;;) {
Y_TICK();
if (yr1948_Accept(v609)) {
F.v4869 = yr1888_NewNode(v777, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4869))).f_a = F.v4867;
((*(yR99 *)rt_nil_check(F.v4869))).f_name = yr1965_Ident();
F.v4867 = F.v4869;
} else if (yr1948_Accept(v594)) {
F.v4869 = yr1888_NewNode(v780, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4869))).f_a = F.v4867;
F.v4871 = ((void *)0);
for (;;) {
Y_TICK();
yr1895_Link(&((*(yR99 *)rt_nil_check(F.v4869))).f_b, &F.v4871, yr2156_ParseExpr());
if ((!yr1948_Accept(v600))) {
goto yl_4875;
}
}
yl_4875: ;
yr1959_Expect(v597);
F.v4867 = F.v4869;
} else if (yr1948_Accept(v612)) {
F.v4869 = yr1888_NewNode(v783, yr1919_TLn());
((*(yR99 *)rt_nil_check(F.v4869))).f_a = F.v4867;
F.v4867 = F.v4869;
} else {
goto yl_4874;
}
}
yl_4874: ;
{ void * rv4876 = F.v4867;
y_use = F.yu; return rv4876; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2192_EXIT_ARGS(void) {
struct yf2193 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((!yr1931_Is(v591))) {
yr1959_Expect(v591);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2197_ParseProgram(void) {
struct yf2198 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4880 = ((void *)0);
F.v4882 = ((void *)0);
while ((!(yr1909_TK() == v198))) {
Y_TICK();
if ((!((yr1931_Is(v375) || yr1931_Is(v378))))) {
yr1172_FailS(yr1919_TLn(), y_str("a segment is a module (XIII.A)", 30));
}
yr1895_Link(&F.v4880, &F.v4882, yr1993_ParseModule());
while (yr1948_Accept(v603)) {
Y_TICK();
}
}
{ void * rv4884 = F.v4880;
y_use = F.yu; return rv4884; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2202_NewSym(rt_int a_p2203, rt_int a_p2204) {
struct yf2205 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2203 = a_p2203;
F.p2204 = a_p2204;
({ F.v4889 = rt_alloc(sizeof(yR119)); });
(*(yR119 *)rt_nil_check(F.v4889)) = ((yR119){ .f_kind = F.p2203, .f_name = F.p2204, .f_rep = ((void *)0), .f_cname = INT64_C(0), .f_level = INT64_C(0), .f_byref = 0, .f_readonly = 0, .f_mval = INT64_C(0), .f_hasmv = 0, .f_params = ((void *)0), .f_nparams = INT64_C(0), .f_ret = ((void *)0), .f_func = 0, .f_decl = ((void *)0), .f_depth = INT64_C(0), .f_target = ((void *)0), .f_members = ((void *)0), .f_mnext = ((void *)0), .f_chain = ((void *)0), .f_stack = ((void *)0), .f_alt = ((void *)0), .f_monitor = ((void *)0), .f_serial = INT64_C(0), .f_calls = ((void *)0), .f_writes = ((void *)0), .f_frees = ((void *)0), .f_seen = INT64_C(0), .f_vix = INT64_C(0) });
((*(yR119 *)rt_nil_check(F.v4889))).f_serial = yr1189_NewSerial();
{ void * rv4902 = F.v4889;
y_use = F.yu; return rv4902; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2209_OpenScope(rt_int a_p2210) {
struct yf2211 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2210 = a_p2210;
({ F.v4906 = rt_alloc(sizeof(yR124)); });
(*(yR124 *)rt_nil_check(F.v4906)) = ((yR124){ .f_syms = ((void *)0), .f_closed = F.p2210, .f_module = ((void *)0), .f_level = v1273, .f_deferred = ((void *)0), .f_up = ((void *)0) });
if ((v1267 >= INT64_C(0))) {
((*(yR124 *)rt_nil_check(F.v4906))).f_up = ((void * *)(v1265).p)[y_ix1(v1265, v1267)];
}
v1267 = rt_range(rt_add(v1267, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1265).p)[y_ix1(v1265, v1267)] = F.v4906;
((void * *)(v1307).p)[y_ix1(v1307, v1267)] = ((void *)0);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2215_ReopenScope(void * a_p2216) {
struct yf2217 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2216 = a_p2216;
F.v4913 = ((*(yR124 *)rt_nil_check(F.p2216))).f_syms;
F.v4915 = INT64_C(0);
v1267 = rt_range(rt_add(v1267, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1265).p)[y_ix1(v1265, v1267)] = F.p2216;
((void * *)(v1307).p)[y_ix1(v1307, v1267)] = ((void *)0);
while ((!(F.v4913 == ((void *)0)))) {
Y_TICK();
F.v4915 = rt_range(rt_add(F.v4915, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1334).p)[y_ix1(v1334, F.v4915)] = F.v4913;
F.v4913 = ((*(yR119 *)rt_nil_check(F.v4913))).f_stack;
}
while ((F.v4915 > INT64_C(0))) {
Y_TICK();
F.v4913 = ((void * *)(v1334).p)[y_ix1(v1334, F.v4915)];
F.v4918 = rt_range(rt_mod(((*(yR119 *)rt_nil_check(F.v4913))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR119 *)rt_nil_check(F.v4913))).f_chain = ((void * *)(v1254).p)[y_ix1(v1254, F.v4918)];
((void * *)(v1254).p)[y_ix1(v1254, F.v4918)] = F.v4913;
F.v4915 = rt_range(rt_sub(F.v4915, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2221_CloseScope(void) {
struct yf2222 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4930 = ((*(yR124 *)rt_nil_check(((void * *)(v1265).p)[y_ix1(v1265, v1267)]))).f_syms;
while ((!(F.v4930 == ((void *)0)))) {
Y_TICK();
F.v4936 = rt_range(rt_mod(((*(yR119 *)rt_nil_check(F.v4930))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4932 = ((void * *)(v1254).p)[y_ix1(v1254, F.v4936)];
F.v4934 = ((void *)0);
while ((((!(F.v4932 == ((void *)0)))) && ((!(F.v4932 == F.v4930))))) {
Y_TICK();
F.v4934 = F.v4932;
F.v4932 = ((*(yR119 *)rt_nil_check(F.v4932))).f_chain;
}
if ((F.v4932 == F.v4930)) {
if ((F.v4934 == ((void *)0))) {
((void * *)(v1254).p)[y_ix1(v1254, F.v4936)] = ((*(yR119 *)rt_nil_check(F.v4930))).f_chain;
} else {
((*(yR119 *)rt_nil_check(F.v4934))).f_chain = ((*(yR119 *)rt_nil_check(F.v4930))).f_chain;
}
}
F.v4930 = ((*(yR119 *)rt_nil_check(F.v4930))).f_stack;
}
v1267 = rt_range(rt_sub(v1267, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2226_Visible(void * a_p2227) {
struct yf2228 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2227 = a_p2227;
{ rt_int rv4944 = (((((*(yR119 *)rt_nil_check(F.p2227))).f_depth >= v1270)) || ((((*(yR119 *)rt_nil_check(F.p2227))).f_depth == INT64_C(0))));
y_use = F.yu; return rv4944; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2232_Find(rt_int a_p2233) {
struct yf2234 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2233 = a_p2233;
F.v4948 = ((void * *)(v1254).p)[y_ix1(v1254, rt_mod(F.p2233, INT64_C(8192)))];
while ((!(F.v4948 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR119 *)rt_nil_check(F.v4948))).f_name == F.p2233)) && yr2226_Visible(F.v4948))) {
{ void * rv4951 = F.v4948;
y_use = F.yu; return rv4951; }
}
F.v4948 = ((*(yR119 *)rt_nil_check(F.v4948))).f_chain;
}
{ void * rv4952 = ((void *)0);
y_use = F.yu; return rv4952; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2238_FindHere(rt_int a_p2239) {
struct yf2240 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2239 = a_p2239;
F.v4956 = ((void * *)(v1254).p)[y_ix1(v1254, rt_mod(F.p2239, INT64_C(8192)))];
while ((!(F.v4956 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR119 *)rt_nil_check(F.v4956))).f_name == F.p2239)) && ((((*(yR119 *)rt_nil_check(F.v4956))).f_depth == v1267)))) {
{ void * rv4959 = F.v4956;
y_use = F.yu; return rv4959; }
}
F.v4956 = ((*(yR119 *)rt_nil_check(F.v4956))).f_chain;
}
{ void * rv4960 = ((void *)0);
y_use = F.yu; return rv4960; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2244_Lookup(rt_int a_p2245, rt_int a_p2246) {
struct yf2247 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2245 = a_p2245;
F.p2246 = a_p2246;
F.v4965 = yr2232_Find(F.p2245);
if ((!(((void * *)(v1307).p)[y_ix1(v1307, v1267)] == ((void *)0)))) {
if ((((F.v4965 == ((void *)0))) || ((!(((*(yR119 *)rt_nil_check(F.v4965))).f_depth == v1267))))) {
if (yr2264_DeclaredFrom(((void * *)(v1307).p)[y_ix1(v1307, v1267)], F.p2245)) {
yr1180_FailN(F.p2246, F.p2245, y_str(" is used before its declaration in this scope (VII.I)", 53));
}
}
}
if ((F.v4965 == ((void *)0))) {
yr1180_FailN(F.p2246, F.p2245, y_str(" is not declared here", 21));
}
F.lo4973 = INT64_C(1);
F.hi4974 = v1322;
{ rt_int hi4978 = F.hi4974;
for (rt_int i4977 = F.lo4973; i4977 <= hi4978; i4977++) { F.c_4976 = i4977; Y_TICK();
if (((((((*(yR119 *)rt_nil_check(F.v4965))).f_depth == ((rt_int *)(v1318).p)[y_ix1(v1318, F.c_4976)])) && ((((*(yR119 *)rt_nil_check(F.v4965))).f_serial > ((rt_int *)(v1320).p)[y_ix1(v1320, F.c_4976)]))) && yr2258_IsSimple(((*(yR119 *)rt_nil_check(F.v4965))).f_kind))) {
yr1180_FailN(F.p2246, F.p2245, y_str(" is declared after the routine that uses it: a simple declaration precedes the routines that use it (X.G)", 105));
}
if (i4977 == hi4978) break;
}}
if ((((*(yR119 *)rt_nil_check(F.v4965))).f_kind == v888)) {
F.v4967 = ((*(yR119 *)rt_nil_check(F.v4965))).f_chain;
while ((!(F.v4967 == ((void *)0)))) {
Y_TICK();
if ((((((((((*(yR119 *)rt_nil_check(F.v4967))).f_name == F.p2245)) && ((((*(yR119 *)rt_nil_check(F.v4967))).f_depth == ((*(yR119 *)rt_nil_check(F.v4965))).f_depth))) && ((((*(yR119 *)rt_nil_check(F.v4967))).f_kind == v888))) && yr2285_Resolved(F.v4967)) && ((!(yr2337_Real(F.v4967) == yr2337_Real(F.v4965))))) && ((!(((*(yR119 *)rt_nil_check(yr2337_Real(F.v4965)))).f_kind == v867))))) {
yr1180_FailN(F.p2246, F.p2245, y_str(" is exported here by two modules: name it with FROM (X.B.4)", 59));
}
F.v4967 = ((*(yR119 *)rt_nil_check(F.v4967))).f_chain;
}
}
{ void * rv4981 = F.v4965;
y_use = F.yu; return rv4981; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2251_AltOf(void * a_p2252, void * a_p2253) {
struct yf2254 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2252 = a_p2252;
F.p2253 = a_p2253;
F.v4986 = ((*(yR119 *)rt_nil_check(F.p2252))).f_alt;
while ((!(F.v4986 == ((void *)0)))) {
Y_TICK();
if ((F.v4986 == F.p2253)) {
{ rt_int rv4988 = 1;
y_use = F.yu; return rv4988; }
}
F.v4986 = ((*(yR119 *)rt_nil_check(F.v4986))).f_alt;
}
{ rt_int rv4990 = 0;
y_use = F.yu; return rv4990; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2258_IsSimple(rt_int a_p2259) {
struct yf2260 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2259 = a_p2259;
{ rt_int rv4993 = (((((((F.p2259 == v855)) || ((F.p2259 == v858))) || ((F.p2259 == v861))) || ((F.p2259 == v864))) || ((F.p2259 == v867))) || ((F.p2259 == v882)));
y_use = F.yu; return rv4993; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2264_DeclaredFrom(void * a_p2265, rt_int a_p2266) {
struct yf2267 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2265 = a_p2265;
F.p2266 = a_p2266;
F.v4998 = F.p2265;
F.v5000 = F.p2265;
while ((!(F.v4998 == ((void *)0)))) {
Y_TICK();
F.v5002 = ((*(yR99 *)rt_nil_check(F.v4998))).f_kind;
if (((((F.v5002 == v633)) || ((F.v5002 == v636))) || ((F.v5002 == v639)))) {
F.v5000 = ((*(yR99 *)rt_nil_check(F.v4998))).f_a;
while ((!(F.v5000 == ((void *)0)))) {
Y_TICK();
if ((((*(yR99 *)rt_nil_check(F.v5000))).f_name == F.p2266)) {
{ rt_int rv5004 = 1;
y_use = F.yu; return rv5004; }
}
F.v5000 = ((*(yR99 *)rt_nil_check(F.v5000))).f_next;
}
}
if ((((((((F.v5002 == v642)) || ((F.v5002 == v645))) || ((F.v5002 == v648))) || ((F.v5002 == v660))) || ((F.v5002 == v618))) || ((F.v5002 == v654)))) {
if ((((*(yR99 *)rt_nil_check(F.v4998))).f_name == F.p2266)) {
{ rt_int rv5006 = 1;
y_use = F.yu; return rv5006; }
}
}
if ((((((F.v5002 == v633)) || ((F.v5002 == v636))) || ((F.v5002 == v642))) || ((F.v5002 == v645)))) {
if (yr2271_LiteralIn(((*(yR99 *)rt_nil_check(F.v4998))).f_b, F.p2266)) {
{ rt_int rv5008 = 1;
y_use = F.yu; return rv5008; }
}
}
if ((F.v5002 == v618)) {
F.v5000 = ((*(yR99 *)rt_nil_check(F.v4998))).f_b;
while ((!(F.v5000 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR99 *)rt_nil_check(F.v5000))).f_ival == F.p2266)) || ((((((*(yR99 *)rt_nil_check(F.v5000))).f_ival == INT64_C(0))) && ((((*(yR99 *)rt_nil_check(F.v5000))).f_name == F.p2266)))))) {
{ rt_int rv5011 = 1;
y_use = F.yu; return rv5011; }
}
F.v5000 = ((*(yR99 *)rt_nil_check(F.v5000))).f_next;
}
}
F.v4998 = ((*(yR99 *)rt_nil_check(F.v4998))).f_next;
}
{ rt_int rv5013 = 0;
y_use = F.yu; return rv5013; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2271_LiteralIn(void * a_p2272, rt_int a_p2273) {
struct yf2274 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2272 = a_p2272;
F.p2273 = a_p2273;
if ((F.p2272 == ((void *)0))) {
{ rt_int rv5020 = 0;
y_use = F.yu; return rv5020; }
}
if ((((*(yR99 *)rt_nil_check(F.p2272))).f_kind == v669)) {
F.v5018 = ((*(yR99 *)rt_nil_check(F.p2272))).f_a;
while ((!(F.v5018 == ((void *)0)))) {
Y_TICK();
if ((((*(yR99 *)rt_nil_check(F.v5018))).f_name == F.p2273)) {
{ rt_int rv5022 = 1;
y_use = F.yu; return rv5022; }
}
F.v5018 = ((*(yR99 *)rt_nil_check(F.v5018))).f_next;
}
{ rt_int rv5024 = 0;
y_use = F.yu; return rv5024; }
}
if ((((*(yR99 *)rt_nil_check(F.p2272))).f_kind == v675)) {
F.v5018 = ((*(yR99 *)rt_nil_check(F.p2272))).f_a;
while ((!(F.v5018 == ((void *)0)))) {
Y_TICK();
if (yr2271_LiteralIn(F.v5018, F.p2273)) {
{ rt_int rv5026 = 1;
y_use = F.yu; return rv5026; }
}
F.v5018 = ((*(yR99 *)rt_nil_check(F.v5018))).f_next;
}
{ rt_int rv5027 = yr2271_LiteralIn(((*(yR99 *)rt_nil_check(F.p2272))).f_b, F.p2273);
y_use = F.yu; return rv5027; }
}
if ((((*(yR99 *)rt_nil_check(F.p2272))).f_kind == v678)) {
F.v5018 = ((*(yR99 *)rt_nil_check(F.p2272))).f_a;
while ((!(F.v5018 == ((void *)0)))) {
Y_TICK();
if (yr2271_LiteralIn(((*(yR99 *)rt_nil_check(F.v5018))).f_b, F.p2273)) {
{ rt_int rv5029 = 1;
y_use = F.yu; return rv5029; }
}
F.v5018 = ((*(yR99 *)rt_nil_check(F.v5018))).f_next;
}
if ((!(((*(yR99 *)rt_nil_check(F.p2272))).f_b == ((void *)0)))) {
if (yr2271_LiteralIn(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2272))).f_b))).f_b, F.p2273)) {
{ rt_int rv5031 = 1;
y_use = F.yu; return rv5031; }
}
F.v5018 = ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2272))).f_b))).f_a;
while ((!(F.v5018 == ((void *)0)))) {
Y_TICK();
if (yr2278_LiteralInGroups(((*(yR99 *)rt_nil_check(F.v5018))).f_b, F.p2273)) {
{ rt_int rv5033 = 1;
y_use = F.yu; return rv5033; }
}
F.v5018 = ((*(yR99 *)rt_nil_check(F.v5018))).f_next;
}
}
{ rt_int rv5035 = 0;
y_use = F.yu; return rv5035; }
}
if ((((((*(yR99 *)rt_nil_check(F.p2272))).f_kind == v681)) || ((((*(yR99 *)rt_nil_check(F.p2272))).f_kind == v687)))) {
{ rt_int rv5036 = yr2271_LiteralIn(((*(yR99 *)rt_nil_check(F.p2272))).f_a, F.p2273);
y_use = F.yu; return rv5036; }
}
{ rt_int rv5038 = 0;
y_use = F.yu; return rv5038; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2278_LiteralInGroups(void * a_p2279, rt_int a_p2280) {
struct yf2281 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2279 = a_p2279;
F.p2280 = a_p2280;
F.v5043 = F.p2279;
while ((!(F.v5043 == ((void *)0)))) {
Y_TICK();
if (yr2271_LiteralIn(((*(yR99 *)rt_nil_check(F.v5043))).f_b, F.p2280)) {
{ rt_int rv5045 = 1;
y_use = F.yu; return rv5045; }
}
F.v5043 = ((*(yR99 *)rt_nil_check(F.v5043))).f_next;
}
{ rt_int rv5047 = 0;
y_use = F.yu; return rv5047; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2285_Resolved(void * a_p2286) {
struct yf2287 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2286 = a_p2286;
if ((!(((*(yR119 *)rt_nil_check(F.p2286))).f_kind == v888))) {
{ rt_int rv5051 = 1;
y_use = F.yu; return rv5051; }
}
if ((((*(yR119 *)rt_nil_check(F.p2286))).f_target == ((void *)0))) {
{ rt_int rv5053 = 0;
y_use = F.yu; return rv5053; }
}
{ rt_int rv5054 = yr2285_Resolved(((*(yR119 *)rt_nil_check(F.p2286))).f_target);
y_use = F.yu; return rv5054; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2291_Ambiguous(void * a_p2292) {
struct yf2293 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2292 = a_p2292;
F.v5058 = ((*(yR119 *)rt_nil_check(F.p2292))).f_chain;
while ((!(F.v5058 == ((void *)0)))) {
Y_TICK();
if ((((((((*(yR119 *)rt_nil_check(F.v5058))).f_name == ((*(yR119 *)rt_nil_check(F.p2292))).f_name)) && yr2226_Visible(F.v5058)) && ((((*(yR119 *)rt_nil_check(F.v5058))).f_kind == v867))) && ((!(((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5058))).f_rep))).f_tid == ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.p2292))).f_rep))).f_tid))))) {
{ rt_int rv5060 = 1;
y_use = F.yu; return rv5060; }
}
F.v5058 = ((*(yR119 *)rt_nil_check(F.v5058))).f_chain;
}
{ rt_int rv5062 = 0;
y_use = F.yu; return rv5062; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2297_FindLit(rt_int a_p2298, void * a_p2299) {
struct yf2300 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2298 = a_p2298;
F.p2299 = a_p2299;
F.v5067 = ((void * *)(v1254).p)[y_ix1(v1254, rt_mod(F.p2298, INT64_C(8192)))];
while ((!(F.v5067 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR119 *)rt_nil_check(F.v5067))).f_name == F.p2298)) && yr2285_Resolved(F.v5067))) {
if ((((((*(yR119 *)rt_nil_check(yr2337_Real(F.v5067)))).f_kind == v867)) && ((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(yr2337_Real(F.v5067)))).f_rep))).f_tid == ((*(yR104 *)rt_nil_check(F.p2299))).f_tid)))) {
{ void * rv5070 = F.v5067;
y_use = F.yu; return rv5070; }
}
}
F.v5067 = ((*(yR119 *)rt_nil_check(F.v5067))).f_chain;
}
{ void * rv5071 = ((void *)0);
y_use = F.yu; return rv5071; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2304_Define(void * a_p2305, rt_int a_p2306) {
struct yf2307 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2305 = a_p2305;
F.p2306 = a_p2306;
F.v5076 = yr2238_FindHere(((*(yR119 *)rt_nil_check(F.p2305))).f_name);
F.v5078 = rt_range(rt_mod(((*(yR119 *)rt_nil_check(F.p2305))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((((!(F.v5076 == ((void *)0)))) && (!((((((*(yR119 *)rt_nil_check(F.v5076))).f_kind == v867)) && ((((*(yR119 *)rt_nil_check(F.p2305))).f_kind == v867)))))) && (!(((((((*(yR119 *)rt_nil_check(F.p2305))).f_kind == v870)) && yr2285_Resolved(F.v5076)) && yr2251_AltOf(F.p2305, yr2337_Real(F.v5076)))))) && (!((((((*(yR119 *)rt_nil_check(F.p2305))).f_kind == v888)) && ((((*(yR119 *)rt_nil_check(F.v5076))).f_kind == v888))))))) {
yr1180_FailN(F.p2306, ((*(yR119 *)rt_nil_check(F.p2305))).f_name, y_str(" is declared twice in this scope", 32));
}
((*(yR119 *)rt_nil_check(F.p2305))).f_depth = v1267;
((*(yR119 *)rt_nil_check(F.p2305))).f_chain = ((void * *)(v1254).p)[y_ix1(v1254, F.v5078)];
((void * *)(v1254).p)[y_ix1(v1254, F.v5078)] = F.p2305;
((*(yR119 *)rt_nil_check(F.p2305))).f_stack = ((*(yR124 *)rt_nil_check(((void * *)(v1265).p)[y_ix1(v1265, v1267)]))).f_syms;
((*(yR124 *)rt_nil_check(((void * *)(v1265).p)[y_ix1(v1265, v1267)]))).f_syms = F.p2305;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2311_Path(rt_int a_p2312, rt_int a_p2313) {
struct yf2314 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2312 = a_p2312;
F.p2313 = a_p2313;
F.v5086 = rt_range(rt_sub(v1273, F.p2312), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.p2312 == INT64_C(0))) {
{ rt_int rv5089 = F.p2313;
y_use = F.yu; return rv5089; }
}
yr1020_SB();
if ((F.v5086 == INT64_C(0))) {
yr1031_SA(y_str("F.", 2));
} else {
yr1031_SA(y_str("F.up->", 6));
while ((F.v5086 > INT64_C(1))) {
Y_TICK();
yr1031_SA(y_str("up->", 4));
F.v5086 = rt_range(rt_sub(F.v5086, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1038_ST(F.p2313);
{ rt_int rv5097 = yr1050_SE();
y_use = F.yu; return rv5097; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2318_FramePtr(rt_int a_p2319) {
struct yf2320 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2319 = a_p2319;
F.v5101 = rt_range(rt_sub(v1273, F.p2319), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.v5101 == INT64_C(0))) {
{ rt_int rv5105 = yr1055_T(y_str("&F", 2));
y_use = F.yu; return rv5105; }
}
yr1020_SB();
yr1031_SA(y_str("F.up", 4));
while ((F.v5101 > INT64_C(1))) {
Y_TICK();
yr1031_SA(y_str("->up", 4));
F.v5101 = rt_range(rt_sub(F.v5101, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv5111 = yr1050_SE();
y_use = F.yu; return rv5111; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2324_DeclStorage(rt_int a_p2325, rt_int a_p2326) {
struct yf2327 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
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
F.v5116 = yr1050_SE();
if ((v1273 == INT64_C(0))) {
yr1104_Put(&v978, F.v5116);
} else {
yr1104_Put(&v992, F.v5116);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2331_SymPath(void * a_p2332) {
struct yf2333 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2332 = a_p2332;
F.v5125 = yr2311_Path(((*(yR119 *)rt_nil_check(F.p2332))).f_level, ((*(yR119 *)rt_nil_check(F.p2332))).f_cname);
if (((*(yR119 *)rt_nil_check(F.p2332))).f_byref) {
yr1020_SB();
yr1031_SA(y_str("(*", 2));
yr1038_ST(F.v5125);
yr1031_SA(y_str(")", 1));
{ rt_int rv5128 = yr1050_SE();
y_use = F.yu; return rv5128; }
}
{ rt_int rv5129 = F.v5125;
y_use = F.yu; return rv5129; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2337_Real(void * a_p2338) {
struct yf2339 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2338 = a_p2338;
F.v5133 = F.p2338;
while ((((*(yR119 *)rt_nil_check(F.v5133))).f_kind == v888)) {
Y_TICK();
if ((((*(yR119 *)rt_nil_check(F.v5133))).f_target == ((void *)0))) {
yr1180_FailN(v994, ((*(yR119 *)rt_nil_check(F.v5133))).f_name, y_str(" is imported from a declaration translated later: until then only the bodies of routines may use it (X.G)", 105));
}
F.v5133 = ((*(yR119 *)rt_nil_check(F.v5133))).f_target;
}
{ void * rv5135 = F.v5133;
y_use = F.yu; return rv5135; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2343_NewRep(rt_int a_p2344, rt_int a_p2345) {
struct yf2346 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2344 = a_p2344;
F.p2345 = a_p2345;
({ F.v5140 = rt_alloc(sizeof(yR104)); });
(*(yR104 *)rt_nil_check(F.v5140)) = ((yR104){ .f_kind = F.p2344, .f_tid = F.p2345, .f_tname = F.p2345, .f_lo = INT64_C(0), .f_hi = INT64_C(0), .f_mlo = INT64_C(0), .f_mhi = INT64_C(0), .f_hasm = 0, .f_scale = INT64_C(0), .f_prec = INT64_C(0), .f_elem = ((void *)0), .f_idx = ((void *)0), .f_nidx = INT64_C(0), .f_link = ((void *)0), .f_lits = ((void *)0), .f_nlits = INT64_C(0), .f_fields = ((void *)0), .f_selector = ((void *)0), .f_cname = INT64_C(0), .f_dname = INT64_C(0), .f_dlevel = INT64_C(0), .f_deep = 0, .f_abstract = 0, .f_opaque = 0, .f_opaqueops = INT64_C(0), .f_ordered = 0, .f_forward = INT64_C(0), .f_fwdscope = INT64_C(0), .f_monitor = ((void *)0), .f_serial = INT64_C(0), .f_sig = INT64_C(0), .f_fsn = INT64_C(0), .f_fsd = INT64_C(0) });
((*(yR104 *)rt_nil_check(F.v5140))).f_serial = yr1189_NewSerial();
{ void * rv5164 = F.v5140;
y_use = F.yu; return rv5164; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2350_CopyRep(void * a_p2351) {
struct yf2352 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2351 = a_p2351;
({ F.v5168 = rt_alloc(sizeof(yR104)); });
(*(yR104 *)rt_nil_check(F.v5168)) = (*(yR104 *)rt_nil_check(F.p2351));
((*(yR104 *)rt_nil_check(F.v5168))).f_serial = yr1189_NewSerial();
((*(yR104 *)rt_nil_check(F.v5168))).f_sig = INT64_C(0);
{ void * rv5170 = F.v5168;
y_use = F.yu; return rv5170; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2356_IsDiscrete(void * a_p2357) {
struct yf2358 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2357 = a_p2357;
{ rt_int rv5173 = (((((((*(yR104 *)rt_nil_check(F.p2357))).f_kind == v798)) || ((((*(yR104 *)rt_nil_check(F.p2357))).f_kind == v807))) || ((((*(yR104 *)rt_nil_check(F.p2357))).f_kind == v810))) || ((((*(yR104 *)rt_nil_check(F.p2357))).f_kind == v813)));
y_use = F.yu; return rv5173; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2362_IsNumeric(void * a_p2363) {
struct yf2364 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2363 = a_p2363;
{ rt_int rv5176 = ((((((*(yR104 *)rt_nil_check(F.p2363))).f_kind == v798)) || ((((*(yR104 *)rt_nil_check(F.p2363))).f_kind == v801))) || ((((*(yR104 *)rt_nil_check(F.p2363))).f_kind == v804)));
y_use = F.yu; return rv5176; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2368_IsArrayLike(void * a_p2369) {
struct yf2370 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2369 = a_p2369;
{ rt_int rv5179 = ((((((*(yR104 *)rt_nil_check(F.p2369))).f_kind == v816)) || ((((*(yR104 *)rt_nil_check(F.p2369))).f_kind == v837))) || ((((*(yR104 *)rt_nil_check(F.p2369))).f_kind == v840)));
y_use = F.yu; return rv5179; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2374_IsString(void * a_p2375) {
struct yf2376 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2375 = a_p2375;
if ((((*(yR104 *)rt_nil_check(F.p2375))).f_kind == v840)) {
{ rt_int rv5183 = 1;
y_use = F.yu; return rv5183; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2375))).f_kind == v816)) && ((((*(yR104 *)rt_nil_check(F.p2375))).f_nidx == INT64_C(1))))) {
{ rt_int rv5185 = (((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2375))).f_elem))).f_kind == v813);
y_use = F.yu; return rv5185; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2375))).f_kind == v837)) && ((((*(yR104 *)rt_nil_check(F.p2375))).f_nidx == INT64_C(1))))) {
{ rt_int rv5187 = (((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2375))).f_elem))).f_kind == v813);
y_use = F.yu; return rv5187; }
}
{ rt_int rv5189 = 0;
y_use = F.yu; return rv5189; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2380_Deep(void * a_p2381) {
struct yf2382 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2381 = a_p2381;
if (((((((*(yR104 *)rt_nil_check(F.p2381))).f_kind == v816)) || ((((*(yR104 *)rt_nil_check(F.p2381))).f_kind == v837))) || ((((*(yR104 *)rt_nil_check(F.p2381))).f_kind == v840)))) {
{ rt_int rv5193 = 1;
y_use = F.yu; return rv5193; }
}
{ rt_int rv5194 = (((((*(yR104 *)rt_nil_check(F.p2381))).f_kind == v819)) && ((*(yR104 *)rt_nil_check(F.p2381))).f_deep);
y_use = F.yu; return rv5194; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2386_Holds(void * a_p2387, rt_int a_p2388) {
struct yf2389 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2387 = a_p2387;
F.p2388 = a_p2388;
if ((((*(yR104 *)rt_nil_check(F.p2387))).f_kind == v816)) {
{ rt_int rv5200 = (((((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2387))).f_elem))).f_kind == F.p2388)) || yr2386_Holds(((*(yR104 *)rt_nil_check(F.p2387))).f_elem, F.p2388));
y_use = F.yu; return rv5200; }
}
if ((((*(yR104 *)rt_nil_check(F.p2387))).f_kind == v819)) {
F.v5199 = ((*(yR104 *)rt_nil_check(F.p2387))).f_fields;
while ((!(F.v5199 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR104 *)rt_nil_check(((*(yR109 *)rt_nil_check(F.v5199))).f_rep))).f_kind == F.p2388)) || yr2386_Holds(((*(yR109 *)rt_nil_check(F.v5199))).f_rep, F.p2388))) {
{ rt_int rv5202 = 1;
y_use = F.yu; return rv5202; }
}
F.v5199 = ((*(yR109 *)rt_nil_check(F.v5199))).f_next;
}
}
{ rt_int rv5204 = 0;
y_use = F.yu; return rv5204; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2393_HoldsSignal(void * a_p2394) {
struct yf2395 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2394 = a_p2394;
{ rt_int rv5207 = yr2386_Holds(F.p2394, v831);
y_use = F.yu; return rv5207; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2399_NonAssignable(void * a_p2400) {
struct yf2401 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2400 = a_p2400;
F.v5211 = ((*(yR104 *)rt_nil_check(F.p2400))).f_kind;
if (((((F.v5211 == v831)) || ((F.v5211 == v825))) || ((F.v5211 == v834)))) {
{ rt_int rv5213 = 1;
y_use = F.yu; return rv5213; }
}
{ rt_int rv5214 = ((yr2386_Holds(F.p2400, v831) || yr2386_Holds(F.p2400, v825)) || yr2386_Holds(F.p2400, v834));
y_use = F.yu; return rv5214; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2405_CType(void * a_p2406) {
struct yf2407 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2406 = a_p2406;
F.v5218 = ((*(yR104 *)rt_nil_check(F.p2406))).f_kind;
if (((((F.v5218 == v798)) || ((F.v5218 == v807))) || ((F.v5218 == v810)))) {
{ rt_int rv5220 = yr1055_T(y_str("rt_int", 6));
y_use = F.yu; return rv5220; }
}
if ((F.v5218 == v813)) {
{ rt_int rv5222 = yr1055_T(y_str("unsigned char", 13));
y_use = F.yu; return rv5222; }
}
if ((F.v5218 == v804)) {
{ rt_int rv5224 = yr1055_T(y_str("double", 6));
y_use = F.yu; return rv5224; }
}
if ((F.v5218 == v801)) {
{ rt_int rv5226 = yr1055_T(y_str("yfix", 4));
y_use = F.yu; return rv5226; }
}
if (((((F.v5218 == v816)) || ((F.v5218 == v837))) || ((F.v5218 == v840)))) {
{ rt_int rv5228 = yr1055_T(y_str("yarr", 4));
y_use = F.yu; return rv5228; }
}
if ((F.v5218 == v819)) {
{ rt_int rv5229 = ((*(yR104 *)rt_nil_check(F.p2406))).f_cname;
y_use = F.yu; return rv5229; }
}
if ((((F.v5218 == v822)) || ((F.v5218 == v843)))) {
{ rt_int rv5231 = yr1055_T(y_str("void *", 6));
y_use = F.yu; return rv5231; }
}
if ((F.v5218 == v825)) {
{ rt_int rv5233 = yr1055_T(y_str("yfile *", 7));
y_use = F.yu; return rv5233; }
}
if ((F.v5218 == v828)) {
{ rt_int rv5235 = yr1055_T(y_str("yset", 4));
y_use = F.yu; return rv5235; }
}
if ((F.v5218 == v831)) {
{ rt_int rv5237 = yr1055_T(y_str("ysig", 4));
y_use = F.yu; return rv5237; }
}
if ((F.v5218 == v834)) {
{ rt_int rv5239 = yr1055_T(y_str("rt_lock", 7));
y_use = F.yu; return rv5239; }
}
{ rt_int rv5241 = yr1055_T(y_str("void", 4));
y_use = F.yu; return rv5241; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2411_DescOf(void * a_p2412) {
struct yf2413 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2412 = a_p2412;
F.v5245 = ((*(yR104 *)rt_nil_check(F.p2412))).f_kind;
if (((((F.v5245 == v798)) || ((F.v5245 == v807))) || ((F.v5245 == v810)))) {
{ rt_int rv5247 = yr1055_T(y_str("&y_d_int", 8));
y_use = F.yu; return rv5247; }
}
if ((F.v5245 == v813)) {
{ rt_int rv5249 = yr1055_T(y_str("&y_d_byte", 9));
y_use = F.yu; return rv5249; }
}
if ((F.v5245 == v804)) {
{ rt_int rv5251 = yr1055_T(y_str("&y_d_float", 10));
y_use = F.yu; return rv5251; }
}
if ((F.v5245 == v801)) {
{ rt_int rv5253 = yr1055_T(y_str("&y_d_fix", 8));
y_use = F.yu; return rv5253; }
}
if ((((F.v5245 == v822)) || ((F.v5245 == v843)))) {
{ rt_int rv5255 = yr1055_T(y_str("&y_d_ptr", 8));
y_use = F.yu; return rv5255; }
}
if ((F.v5245 == v828)) {
{ rt_int rv5257 = yr1055_T(y_str("&y_d_set", 8));
y_use = F.yu; return rv5257; }
}
if ((((F.v5245 == v816)) || ((F.v5245 == v819)))) {
yr1020_SB();
yr1031_SA(y_str("&", 1));
yr1038_ST(yr2311_Path(((*(yR104 *)rt_nil_check(F.p2412))).f_dlevel, ((*(yR104 *)rt_nil_check(F.p2412))).f_dname));
{ rt_int rv5259 = yr1050_SE();
y_use = F.yu; return rv5259; }
}
if ((F.v5245 == v840)) {
{ rt_int rv5261 = yr1055_T(y_str("&y_d_str", 8));
y_use = F.yu; return rv5261; }
}
if ((F.v5245 == v831)) {
{ rt_int rv5263 = yr1055_T(y_str("&y_d_sig", 8));
y_use = F.yu; return rv5263; }
}
if ((F.v5245 == v834)) {
{ rt_int rv5265 = yr1055_T(y_str("&y_d_sem", 8));
y_use = F.yu; return rv5265; }
}
{ rt_int rv5267 = yr1055_T(y_str("&y_d_opaque", 11));
y_use = F.yu; return rv5267; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2417_NewDesc(void * a_p2418) {
struct yf2419 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2418 = a_p2418;
((*(yR104 *)rt_nil_check(F.p2418))).f_dname = yr1194_Fresh(y_str("yd_", 3));
((*(yR104 *)rt_nil_check(F.p2418))).f_dlevel = v1273;
yr2324_DeclStorage(yr1055_T(y_str("ydesc", 5)), ((*(yR104 *)rt_nil_check(F.p2418))).f_dname);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2423_SameType(void * a_p2424, void * a_p2425) {
struct yf2426 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2424 = a_p2424;
F.p2425 = a_p2425;
if ((((*(yR104 *)rt_nil_check(F.p2424))).f_tid == ((*(yR104 *)rt_nil_check(F.p2425))).f_tid)) {
{ rt_int rv5276 = 1;
y_use = F.yu; return rv5276; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2424))).f_kind == v840)) && yr2374_IsString(F.p2425))) {
{ rt_int rv5278 = 1;
y_use = F.yu; return rv5278; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2425))).f_kind == v840)) && yr2374_IsString(F.p2424))) {
{ rt_int rv5280 = 1;
y_use = F.yu; return rv5280; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2424))).f_kind == v843)) && ((((*(yR104 *)rt_nil_check(F.p2425))).f_kind == v822)))) {
{ rt_int rv5282 = 1;
y_use = F.yu; return rv5282; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2425))).f_kind == v843)) && ((((*(yR104 *)rt_nil_check(F.p2424))).f_kind == v822)))) {
{ rt_int rv5284 = 1;
y_use = F.yu; return rv5284; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2424))).f_kind == v852)) || ((((*(yR104 *)rt_nil_check(F.p2425))).f_kind == v852)))) {
{ rt_int rv5286 = 1;
y_use = F.yu; return rv5286; }
}
{ rt_int rv5288 = 0;
y_use = F.yu; return rv5288; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2430_TypeClash(rt_int a_p2431, void * a_p2432, void * a_p2433) {
struct yf2434 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2431 = a_p2431;
F.p2432 = a_p2432;
F.p2433 = a_p2433;
yr1020_SB();
yr1031_SA(y_str("type conflict: ", 15));
yr1038_ST(((*(yR104 *)rt_nil_check(F.p2432))).f_tname);
yr1031_SA(y_str(" expected, ", 11));
yr1038_ST(((*(yR104 *)rt_nil_check(F.p2433))).f_tname);
yr1031_SA(y_str(" found", 6));
F.v5294 = yr1050_SE();
yr1151_Fail(F.p2431, F.v5294);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2438_CheckType(rt_int a_p2439, void * a_p2440, void * a_p2441) {
struct yf2442 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2439 = a_p2439;
F.p2440 = a_p2440;
F.p2441 = a_p2441;
if ((!yr2423_SameType(F.p2440, F.p2441))) {
yr2430_TypeClash(F.p2439, F.p2440, F.p2441);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2446_CheckRepresented(void * a_p2447, rt_int a_p2448) {
struct yf2449 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2447 = a_p2447;
F.p2448 = a_p2448;
if (((*(yR104 *)rt_nil_check(F.p2447))).f_abstract) {
yr1180_FailN(F.p2448, ((*(yR104 *)rt_nil_check(F.p2447))).f_tname, y_str(" is a type, not a representation (VI.A.1)", 41));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2453_SigText(void * a_p2454) {
struct yf2455 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2454 = a_p2454;
F.v5309 = ((*(yR104 *)rt_nil_check(F.p2454))).f_kind;
yr1020_SB();
yr1038_ST(((*(yR104 *)rt_nil_check(F.p2454))).f_tid);
if (((yr2356_IsDiscrete(F.p2454) || ((F.v5309 == v804))) || ((F.v5309 == v801)))) {
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
if ((F.v5309 == v804)) {
yr1031_SA(y_str("P", 1));
yr1038_ST(((*(yR104 *)rt_nil_check(F.p2454))).f_prec);
}
if ((F.v5309 == v801)) {
yr1031_SA(y_str("S", 1));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2454))).f_fsn);
yr1031_SA(y_str("/", 1));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2454))).f_fsd);
}
} else if ((F.v5309 == v816)) {
yr1031_SA(y_str("(", 1));
F.v5311 = ((*(yR104 *)rt_nil_check(F.p2454))).f_idx;
while ((!(F.v5311 == ((void *)0)))) {
Y_TICK();
yr1038_ST(yr2459_RepSig(F.v5311));
yr1031_SA(y_str(",", 1));
F.v5311 = ((*(yR104 *)rt_nil_check(F.v5311))).f_link;
}
yr1031_SA(y_str("OF ", 3));
yr1038_ST(yr2459_RepSig(((*(yR104 *)rt_nil_check(F.p2454))).f_elem));
yr1031_SA(y_str(")", 1));
} else if ((F.v5309 == v837)) {
yr1031_SA(y_str("(", 1));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2454))).f_nidx);
yr1031_SA(y_str("D ", 2));
yr1038_ST(yr2459_RepSig(((*(yR104 *)rt_nil_check(F.p2454))).f_elem));
yr1031_SA(y_str(")", 1));
} else if ((F.v5309 == v819)) {
yr1031_SA(y_str("{", 1));
F.v5313 = ((*(yR104 *)rt_nil_check(F.p2454))).f_fields;
while ((!(F.v5313 == ((void *)0)))) {
Y_TICK();
if (((*(yR109 *)rt_nil_check(F.v5313))).f_isconst) {
yr1031_SA(y_str("C ", 2));
} else {
yr1031_SA(y_str("V ", 2));
}
yr1038_ST(((*(yR109 *)rt_nil_check(F.v5313))).f_name);
yr1031_SA(y_str(":", 1));
yr1038_ST(yr2459_RepSig(((*(yR109 *)rt_nil_check(F.v5313))).f_rep));
yr1031_SA(y_str(";", 1));
F.v5313 = ((*(yR109 *)rt_nil_check(F.v5313))).f_next;
}
yr1031_SA(y_str("}", 1));
} else if ((((F.v5309 == v828)) || ((F.v5309 == v825)))) {
yr1031_SA(y_str("(", 1));
yr1038_ST(yr2459_RepSig(((*(yR104 *)rt_nil_check(F.p2454))).f_elem));
yr1031_SA(y_str(")", 1));
}
{ rt_int rv5336 = yr1050_SE();
y_use = F.yu; return rv5336; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2459_RepSig(void * a_p2460) {
struct yf2461 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2460 = a_p2460;
if ((((*(yR104 *)rt_nil_check(F.p2460))).f_sig == INT64_C(0))) {
((*(yR104 *)rt_nil_check(F.p2460))).f_sig = yr1069_Name(yr2453_SigText(F.p2460));
}
{ rt_int rv5340 = ((*(yR104 *)rt_nil_check(F.p2460))).f_sig;
y_use = F.yu; return rv5340; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2465_Identical(void * a_p2466, void * a_p2467) {
struct yf2468 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2466 = a_p2466;
F.p2467 = a_p2467;
if ((F.p2466 == F.p2467)) {
{ rt_int rv5345 = 1;
y_use = F.yu; return rv5345; }
}
if ((!yr2423_SameType(F.p2466, F.p2467))) {
{ rt_int rv5347 = 0;
y_use = F.yu; return rv5347; }
}
{ rt_int rv5348 = (yr2459_RepSig(F.p2466) == yr2459_RepSig(F.p2467));
y_use = F.yu; return rv5348; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2472_IsLiteralNode(void * a_p2473) {
struct yf2474 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2473 = a_p2473;
if ((((((((*(yR99 *)rt_nil_check(F.p2473))).f_kind == v753)) || ((((*(yR99 *)rt_nil_check(F.p2473))).f_kind == v759))) || ((((*(yR99 *)rt_nil_check(F.p2473))).f_kind == v756))) || ((((*(yR99 *)rt_nil_check(F.p2473))).f_kind == v762)))) {
{ rt_int rv5351 = (((*(yR99 *)rt_nil_check(F.p2473))).f_d == ((void *)0));
y_use = F.yu; return rv5351; }
}
if ((((((*(yR99 *)rt_nil_check(F.p2473))).f_kind == v789)) || ((((*(yR99 *)rt_nil_check(F.p2473))).f_kind == v795)))) {
{ rt_int rv5352 = yr2472_IsLiteralNode(((*(yR99 *)rt_nil_check(F.p2473))).f_a);
y_use = F.yu; return rv5352; }
}
{ rt_int rv5354 = 0;
y_use = F.yu; return rv5354; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2478_StoreBounds(void * a_p2479, yarr a_p2481) {
struct yf2482 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2479 = a_p2479;
F.p2481 = a_p2481;
F.v5359 = yr1194_Fresh(y_str("lo", 2));
F.v5361 = yr1194_Fresh(y_str("hi", 2));
yr2324_DeclStorage(yr1055_T(F.p2481), F.v5359);
yr2324_DeclStorage(yr1055_T(F.p2481), F.v5361);
yr1126_Emit(yr3194_Join(yr2311_Path(v1273, F.v5359), yr1055_T(y_str(" = ", 3)), yr3194_Join(((*(yR104 *)rt_nil_check(F.p2479))).f_lo, yr1055_T(y_str(";", 1)), INT64_C(0))));
yr1126_Emit(yr3194_Join(yr2311_Path(v1273, F.v5361), yr1055_T(y_str(" = ", 3)), yr3194_Join(((*(yR104 *)rt_nil_check(F.p2479))).f_hi, yr1055_T(y_str(";", 1)), INT64_C(0))));
((*(yR104 *)rt_nil_check(F.p2479))).f_lo = F.v5359;
((*(yR104 *)rt_nil_check(F.p2479))).f_hi = F.v5361;
((*(yR104 *)rt_nil_check(F.p2479))).f_dname = F.v5359;
((*(yR104 *)rt_nil_check(F.p2479))).f_dlevel = v1273;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2486_LoText(void * a_p2487) {
struct yf2488 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2487 = a_p2487;
if ((((((!(((*(yR104 *)rt_nil_check(F.p2487))).f_dname == INT64_C(0)))) && ((!(((*(yR104 *)rt_nil_check(F.p2487))).f_lo == INT64_C(0))))) && ((!(((*(yR104 *)rt_nil_check(F.p2487))).f_kind == v816)))) && ((!(((*(yR104 *)rt_nil_check(F.p2487))).f_kind == v819))))) {
{ rt_int rv5374 = yr2311_Path(((*(yR104 *)rt_nil_check(F.p2487))).f_dlevel, ((*(yR104 *)rt_nil_check(F.p2487))).f_lo);
y_use = F.yu; return rv5374; }
}
{ rt_int rv5375 = ((*(yR104 *)rt_nil_check(F.p2487))).f_lo;
y_use = F.yu; return rv5375; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2492_HiText(void * a_p2493) {
struct yf2494 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2493 = a_p2493;
if ((((((!(((*(yR104 *)rt_nil_check(F.p2493))).f_dname == INT64_C(0)))) && ((!(((*(yR104 *)rt_nil_check(F.p2493))).f_hi == INT64_C(0))))) && ((!(((*(yR104 *)rt_nil_check(F.p2493))).f_kind == v816)))) && ((!(((*(yR104 *)rt_nil_check(F.p2493))).f_kind == v819))))) {
{ rt_int rv5380 = yr2311_Path(((*(yR104 *)rt_nil_check(F.p2493))).f_dlevel, ((*(yR104 *)rt_nil_check(F.p2493))).f_hi);
y_use = F.yu; return rv5380; }
}
{ rt_int rv5381 = ((*(yR104 *)rt_nil_check(F.p2493))).f_hi;
y_use = F.yu; return rv5381; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2498_AdoptLiteral(void * a_p2499, void * a_p2500, void * a_p2501) {
struct yf2502 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2499 = a_p2499;
F.p2500 = a_p2500;
F.p2501 = a_p2501;
if ((((!yr2472_IsLiteralNode(F.p2499)) || ((!(((*(yR104 *)rt_nil_check(F.p2500))).f_kind == ((*(yR104 *)rt_nil_check(F.p2501))).f_kind)))) || (!yr2362_IsNumeric(F.p2501)))) {
{ void * rv5388 = F.p2500;
y_use = F.yu; return rv5388; }
}
if (yr2506_HasQualifier(F.p2499)) {
{ void * rv5389 = F.p2500;
y_use = F.yu; return rv5389; }
}
F.v5387 = yr2350_CopyRep(F.p2500);
((*(yR104 *)rt_nil_check(F.v5387))).f_tid = ((*(yR104 *)rt_nil_check(F.p2501))).f_tid;
((*(yR104 *)rt_nil_check(F.v5387))).f_tname = ((*(yR104 *)rt_nil_check(F.p2501))).f_tname;
{ void * rv5390 = F.v5387;
y_use = F.yu; return rv5390; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2506_HasQualifier(void * a_p2507) {
struct yf2508 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2507 = a_p2507;
if ((((((*(yR99 *)rt_nil_check(F.p2507))).f_kind == v789)) || ((((*(yR99 *)rt_nil_check(F.p2507))).f_kind == v795)))) {
{ rt_int rv5393 = yr2506_HasQualifier(((*(yR99 *)rt_nil_check(F.p2507))).f_a);
y_use = F.yu; return rv5393; }
}
{ rt_int rv5394 = (!(((*(yR99 *)rt_nil_check(F.p2507))).f_d == ((void *)0)));
y_use = F.yu; return rv5394; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2512_Gcd(rt_int a_p2513, rt_int a_p2514) {
struct yf2515 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2513 = a_p2513;
F.p2514 = a_p2514;
F.v5399 = F.p2513;
F.v5401 = F.p2514;
if ((F.v5399 < INT64_C(0))) {
F.v5399 = rt_range(rt_neg(F.v5399), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v5401 < INT64_C(0))) {
F.v5401 = rt_range(rt_neg(F.v5401), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
while ((!(F.v5401 == INT64_C(0)))) {
Y_TICK();
F.v5403 = rt_range(rt_mod(F.v5399, F.v5401), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5399 = F.v5401;
F.v5401 = F.v5403;
}
if ((F.v5399 == INT64_C(0))) {
{ rt_int rv5412 = INT64_C(1);
y_use = F.yu; return rv5412; }
}
{ rt_int rv5413 = F.v5399;
y_use = F.yu; return rv5413; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2519_MulChk(rt_int a_p2520, rt_int a_p2521, rt_int a_p2522) {
struct yf2523 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2520 = a_p2520;
F.p2521 = a_p2521;
F.p2522 = a_p2522;
F.v5419 = F.p2520;
F.v5421 = F.p2521;
if ((F.v5419 < INT64_C(0))) {
F.v5419 = rt_range(rt_neg(F.v5419), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v5421 < INT64_C(0))) {
F.v5421 = rt_range(rt_neg(F.v5421), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((((!(F.v5419 == INT64_C(0)))) && ((F.v5421 > (rt_div(v900, F.v5419)))))) {
yr1172_FailS(F.p2522, y_str("a scale beyond this implementation: fixed-point scales are fractions of 64-bit integers", 87));
}
{ rt_int rv5430 = rt_range(rt_mul(F.p2520, F.p2521), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv5430; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2527_PowChk(rt_int a_p2528, rt_int a_p2529, rt_int a_p2530) {
struct yf2531 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2528 = a_p2528;
F.p2529 = a_p2529;
F.p2530 = a_p2530;
F.v5436 = INT64_C(1);
F.lo5441 = INT64_C(1);
F.hi5442 = F.p2529;
{ rt_int hi5446 = F.hi5442;
for (rt_int i5445 = F.lo5441; i5445 <= hi5446; i5445++) { F.c_5444 = i5445; Y_TICK();
F.v5436 = yr2519_MulChk(F.v5436, F.p2528, F.p2530);
if (i5445 == hi5446) break;
}}
{ rt_int rv5447 = F.v5436;
y_use = F.yu; return rv5447; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2535_ScaleRatio(void * a_p2536, void * a_p2537, rt_int * a_p2538, rt_int * a_p2539, rt_int * a_p2540) {
struct yf2541 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
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
y_use = F.yu; return;
}
F.v5455 = yr2512_Gcd(((*(yR104 *)rt_nil_check(F.p2536))).f_fsn, ((*(yR104 *)rt_nil_check(F.p2537))).f_fsn);
F.v5457 = yr2512_Gcd(((*(yR104 *)rt_nil_check(F.p2536))).f_fsd, ((*(yR104 *)rt_nil_check(F.p2537))).f_fsd);
F.v5459 = rt_range(rt_div(((*(yR104 *)rt_nil_check(F.p2536))).f_fsn, F.v5455), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5461 = rt_range(rt_div(((*(yR104 *)rt_nil_check(F.p2537))).f_fsd, F.v5457), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5463 = rt_range(rt_div(((*(yR104 *)rt_nil_check(F.p2536))).f_fsd, F.v5457), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5465 = rt_range(rt_div(((*(yR104 *)rt_nil_check(F.p2537))).f_fsn, F.v5455), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.p2540 = (((((F.v5459 == INT64_C(1))) && ((F.v5461 == INT64_C(1)))) && ((F.v5463 == INT64_C(1)))) && ((F.v5465 == INT64_C(1))));
F.p2538 = yr2545_Factor(F.v5459, F.v5461);
F.p2539 = yr2545_Factor(F.v5463, F.v5465);
(*F.p2538_o) = F.p2538;
(*F.p2539_o) = F.p2539;
(*F.p2540_o) = F.p2540;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2545_Factor(rt_int a_p2546, rt_int a_p2547) {
struct yf2548 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
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
{ rt_int rv5488 = yr1050_SE();
y_use = F.yu; return rv5488; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2552_SetScale(void * a_p2553, rt_int a_p2554, rt_int a_p2555) {
struct yf2556 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2553 = a_p2553;
F.p2554 = a_p2554;
F.p2555 = a_p2555;
F.v5494 = yr2512_Gcd(F.p2554, F.p2555);
((*(yR104 *)rt_nil_check(F.p2553))).f_fsn = rt_range(rt_div(F.p2554, F.v5494), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR104 *)rt_nil_check(F.p2553))).f_fsd = rt_range(rt_div(F.p2555, F.v5494), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((*(yR104 *)rt_nil_check(F.p2553))).f_fsd < INT64_C(0))) {
((*(yR104 *)rt_nil_check(F.p2553))).f_fsn = rt_range(rt_neg(((*(yR104 *)rt_nil_check(F.p2553))).f_fsn), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR104 *)rt_nil_check(F.p2553))).f_fsd = rt_range(rt_neg(((*(yR104 *)rt_nil_check(F.p2553))).f_fsd), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2560_Qualify(void * a_p2561, void * a_p2562) {
struct yf2563 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2561 = a_p2561;
F.p2562 = a_p2562;
if ((((*(yR104 *)rt_nil_check(F.p2561))).f_kind == v801)) {
if ((((*(yR99 *)rt_nil_check(F.p2562))).f_c == ((void *)0))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2562))).f_line, y_str("FIXED needs SCALE (VI.A.1.b)", 28));
}
yr2764_ManifestFix(((*(yR99 *)rt_nil_check(F.p2562))).f_c, &F.v5516, &F.v5522, &F.v5524);
if (((!F.v5516) || ((F.v5522 <= INT64_C(0))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2562))).f_line, y_str("SCALE is a positive manifest constant (VI.A.1.b, VI.C)", 54));
}
((*(yR104 *)rt_nil_check(F.p2561))).f_fsn = F.v5522;
((*(yR104 *)rt_nil_check(F.p2561))).f_fsd = F.v5524;
yr1020_SB();
yr1044_SI(F.v5522);
yr1031_SA(y_str("/", 1));
yr1044_SI(F.v5524);
((*(yR104 *)rt_nil_check(F.p2561))).f_scale = yr1050_SE();
}
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p2562))).f_a, F.p2561, &F.v5504, &F.v5512);
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p2562))).f_b, F.p2561, &F.v5506, &F.v5514);
F.v5512 = yr2498_AdoptLiteral(((*(yR99 *)rt_nil_check(F.p2562))).f_a, F.v5512, F.p2561);
F.v5514 = yr2498_AdoptLiteral(((*(yR99 *)rt_nil_check(F.p2562))).f_b, F.v5514, F.p2561);
if ((((*(yR104 *)rt_nil_check(F.p2561))).f_kind == v801)) {
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p2562))).f_line, F.p2561, F.v5512);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p2562))).f_line, F.p2561, F.v5514);
yr2535_ScaleRatio(F.v5512, F.p2561, &F.v5508, &F.v5510, &F.v5518);
((*(yR104 *)rt_nil_check(F.p2561))).f_lo = yr3194_Join(yr1055_T(y_str("y_fix_bound(", 12)), F.v5504, yr3194_Join(yr1055_T(y_str(", ", 2)), F.v5508, yr3194_Join(yr1055_T(y_str(", ", 2)), F.v5510, yr1055_T(y_str(", 1)", 4)))));
yr2535_ScaleRatio(F.v5514, F.p2561, &F.v5508, &F.v5510, &F.v5518);
((*(yR104 *)rt_nil_check(F.p2561))).f_hi = yr3194_Join(yr1055_T(y_str("y_fix_bound(", 12)), F.v5506, yr3194_Join(yr1055_T(y_str(", ", 2)), F.v5508, yr3194_Join(yr1055_T(y_str(", ", 2)), F.v5510, yr1055_T(y_str(", 0)", 4)))));
((*(yR104 *)rt_nil_check(F.p2561))).f_dname = INT64_C(0);
yr2478_StoreBounds(F.p2561, y_str("yfix", 4));
((*(yR104 *)rt_nil_check(F.p2561))).f_abstract = 0;
y_use = F.yu; return;
}
if ((((*(yR104 *)rt_nil_check(F.p2561))).f_kind == v804)) {
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p2562))).f_line, F.p2561, F.v5512);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p2562))).f_line, F.p2561, F.v5514);
((*(yR104 *)rt_nil_check(F.p2561))).f_lo = F.v5504;
((*(yR104 *)rt_nil_check(F.p2561))).f_hi = F.v5506;
((*(yR104 *)rt_nil_check(F.p2561))).f_dname = INT64_C(0);
if ((!((yr2472_IsLiteralNode(((*(yR99 *)rt_nil_check(F.p2562))).f_a) && yr2472_IsLiteralNode(((*(yR99 *)rt_nil_check(F.p2562))).f_b))))) {
yr2478_StoreBounds(F.p2561, y_str("double", 6));
}
if ((((*(yR99 *)rt_nil_check(F.p2562))).f_d == ((void *)0))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2562))).f_line, y_str("FLOATING needs PRECISION (VI.A.1.c)", 35));
}
yr2698_Manifest(((*(yR99 *)rt_nil_check(F.p2562))).f_d, &F.v5516, &F.v5520);
if ((!F.v5516)) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2562))).f_line, y_str("PRECISION is a manifest constant", 32));
}
if ((((F.v5520 < INT64_C(1))) || ((F.v5520 > INT64_C(15))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2562))).f_line, y_str("PRECISION beyond this implementation: its floating point holds 15 decimal digits (Appendix C)", 93));
}
yr1020_SB();
yr1044_SI(F.v5520);
((*(yR104 *)rt_nil_check(F.p2561))).f_prec = yr1050_SE();
((*(yR104 *)rt_nil_check(F.p2561))).f_abstract = 0;
y_use = F.yu; return;
}
if ((!yr2356_IsDiscrete(F.p2561))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2562))).f_line, y_str("only a scalar or integer representation takes a range", 53));
}
if ((((!(((*(yR99 *)rt_nil_check(F.p2562))).f_c == ((void *)0)))) || ((!(((*(yR99 *)rt_nil_check(F.p2562))).f_d == ((void *)0)))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2562))).f_line, y_str("SCALE and PRECISION qualify numbers", 35));
}
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p2562))).f_line, F.p2561, F.v5512);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p2562))).f_line, F.p2561, F.v5514);
((*(yR104 *)rt_nil_check(F.p2561))).f_lo = F.v5504;
((*(yR104 *)rt_nil_check(F.p2561))).f_hi = F.v5506;
yr2698_Manifest(((*(yR99 *)rt_nil_check(F.p2562))).f_a, &F.v5516, &((*(yR104 *)rt_nil_check(F.p2561))).f_mlo);
((*(yR104 *)rt_nil_check(F.p2561))).f_hasm = F.v5516;
yr2698_Manifest(((*(yR99 *)rt_nil_check(F.p2562))).f_b, &F.v5516, &((*(yR104 *)rt_nil_check(F.p2561))).f_mhi);
((*(yR104 *)rt_nil_check(F.p2561))).f_hasm = (((*(yR104 *)rt_nil_check(F.p2561))).f_hasm && F.v5516);
((*(yR104 *)rt_nil_check(F.p2561))).f_abstract = 0;
((*(yR104 *)rt_nil_check(F.p2561))).f_dname = INT64_C(0);
if ((!((*(yR104 *)rt_nil_check(F.p2561))).f_hasm)) {
yr2478_StoreBounds(F.p2561, y_str("rt_int", 6));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2567_DefineLits(void * a_p2568) {
struct yf2569 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2568 = a_p2568;
F.v5556 = ((*(yR104 *)rt_nil_check(F.p2568))).f_lits;
F.v5560 = INT64_C(0);
while ((!(F.v5556 == ((void *)0)))) {
Y_TICK();
if ((!(yr2232_Find(((*(yR99 *)rt_nil_check(F.v5556))).f_name) == ((void *)0)))) {
F.v5558 = yr2232_Find(((*(yR99 *)rt_nil_check(F.v5556))).f_name);
if ((((!(((*(yR119 *)rt_nil_check(F.v5558))).f_kind == v867))) && ((((*(yR119 *)rt_nil_check(F.v5558))).f_depth == v1267)))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.v5556))).f_line, ((*(yR99 *)rt_nil_check(F.v5556))).f_name, y_str(" is declared twice in this scope", 32));
}
}
F.v5558 = yr2202_NewSym(v867, ((*(yR99 *)rt_nil_check(F.v5556))).f_name);
((*(yR119 *)rt_nil_check(F.v5558))).f_rep = F.p2568;
((*(yR119 *)rt_nil_check(F.v5558))).f_mval = F.v5560;
((*(yR119 *)rt_nil_check(F.v5558))).f_hasmv = 1;
yr2304_Define(F.v5558, ((*(yR99 *)rt_nil_check(F.v5556))).f_line);
F.v5560 = rt_range(rt_add(F.v5560, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5556 = ((*(yR99 *)rt_nil_check(F.v5556))).f_next;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2573_SetRange(void * a_p2574, rt_int a_p2575, rt_int a_p2576) {
struct yf2577 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
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
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2581_NewTid(rt_int a_p2582) {
struct yf2583 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2582 = a_p2582;
F.v5575 = yr1189_NewSerial();
yr1020_SB();
if ((!(F.p2582 == INT64_C(0)))) {
yr1038_ST(F.p2582);
} else {
yr1031_SA(y_str("anonymous", 9));
}
yr1031_SA(y_str("#", 1));
yr1044_SI(F.v5575);
{ rt_int rv5579 = yr1050_SE();
y_use = F.yu; return rv5579; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2587_MakeRep(void * a_p2588, rt_int a_p2589, rt_int a_p2590) {
struct yf2591 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2588 = a_p2588;
F.p2589 = a_p2589;
F.p2590 = a_p2590;
F.v5585 = yr2602_MakeRep1(F.p2588, F.p2589, F.p2590);
if ((!(((*(yR99 *)rt_nil_check(F.p2588))).f_text == INT64_C(0)))) {
F.v5587 = yr2337_Real(yr2244_Lookup(((*(yR99 *)rt_nil_check(F.p2588))).f_text, ((*(yR99 *)rt_nil_check(F.p2588))).f_line));
if (((!yr2595_Conforms(((*(yR119 *)rt_nil_check(F.v5587))).f_rep, F.v5585)) || ((((((*(yR99 *)rt_nil_check(F.p2588))).f_kind == v666)) && ((!(((*(yR104 *)rt_nil_check(F.v5585))).f_tid == ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5587))).f_rep))).f_tid))))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2588))).f_line, ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5587))).f_rep))).f_tname, y_str(": the concrete type is not a representation of this type (rule 61, VII.G)", 73));
}
}
{ void * rv5590 = F.v5585;
y_use = F.yu; return rv5590; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2595_Conforms(void * a_p2596, void * a_p2597) {
struct yf2598 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2596 = a_p2596;
F.p2597 = a_p2597;
if ((!(((*(yR104 *)rt_nil_check(F.p2596))).f_kind == ((*(yR104 *)rt_nil_check(F.p2597))).f_kind))) {
{ rt_int rv5607 = 0;
y_use = F.yu; return rv5607; }
}
if ((((*(yR104 *)rt_nil_check(F.p2596))).f_kind == v819)) {
F.v5595 = ((*(yR104 *)rt_nil_check(F.p2596))).f_fields;
F.v5597 = ((*(yR104 *)rt_nil_check(F.p2597))).f_fields;
while ((((!(F.v5595 == ((void *)0)))) && ((!(F.v5597 == ((void *)0)))))) {
Y_TICK();
if (((((!(((*(yR109 *)rt_nil_check(F.v5595))).f_name == ((*(yR109 *)rt_nil_check(F.v5597))).f_name))) || ((!(((*(yR109 *)rt_nil_check(F.v5595))).f_isconst == ((*(yR109 *)rt_nil_check(F.v5597))).f_isconst)))) || ((!(((*(yR109 *)rt_nil_check(F.v5595))).f_variant == ((*(yR109 *)rt_nil_check(F.v5597))).f_variant))))) {
{ rt_int rv5609 = 0;
y_use = F.yu; return rv5609; }
}
if ((!yr2423_SameType(((*(yR109 *)rt_nil_check(F.v5595))).f_rep, ((*(yR109 *)rt_nil_check(F.v5597))).f_rep))) {
{ rt_int rv5611 = 0;
y_use = F.yu; return rv5611; }
}
F.v5595 = ((*(yR109 *)rt_nil_check(F.v5595))).f_next;
F.v5597 = ((*(yR109 *)rt_nil_check(F.v5597))).f_next;
}
{ rt_int rv5612 = (((F.v5595 == ((void *)0))) && ((F.v5597 == ((void *)0))));
y_use = F.yu; return rv5612; }
}
if ((((*(yR104 *)rt_nil_check(F.p2596))).f_kind == v816)) {
if ((!(((*(yR104 *)rt_nil_check(F.p2596))).f_nidx == ((*(yR104 *)rt_nil_check(F.p2597))).f_nidx))) {
{ rt_int rv5614 = 0;
y_use = F.yu; return rv5614; }
}
F.v5599 = ((*(yR104 *)rt_nil_check(F.p2596))).f_idx;
F.v5601 = ((*(yR104 *)rt_nil_check(F.p2597))).f_idx;
while ((!(F.v5599 == ((void *)0)))) {
Y_TICK();
if ((!yr2465_Identical(F.v5599, F.v5601))) {
{ rt_int rv5616 = 0;
y_use = F.yu; return rv5616; }
}
F.v5599 = ((*(yR104 *)rt_nil_check(F.v5599))).f_link;
F.v5601 = ((*(yR104 *)rt_nil_check(F.v5601))).f_link;
}
{ rt_int rv5617 = yr2423_SameType(((*(yR104 *)rt_nil_check(F.p2596))).f_elem, ((*(yR104 *)rt_nil_check(F.p2597))).f_elem);
y_use = F.yu; return rv5617; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2596))).f_kind == v810)) || ((((*(yR104 *)rt_nil_check(F.p2596))).f_kind == v813)))) {
if ((!(((*(yR104 *)rt_nil_check(F.p2596))).f_nlits == ((*(yR104 *)rt_nil_check(F.p2597))).f_nlits))) {
{ rt_int rv5619 = 0;
y_use = F.yu; return rv5619; }
}
F.v5603 = ((*(yR104 *)rt_nil_check(F.p2596))).f_lits;
F.v5605 = ((*(yR104 *)rt_nil_check(F.p2597))).f_lits;
while ((((!(F.v5603 == ((void *)0)))) && ((!(F.v5605 == ((void *)0)))))) {
Y_TICK();
if ((((!(((*(yR99 *)rt_nil_check(F.v5603))).f_name == ((*(yR99 *)rt_nil_check(F.v5605))).f_name))) || (!yr1082_TEq(((*(yR99 *)rt_nil_check(F.v5603))).f_text, ((*(yR99 *)rt_nil_check(F.v5605))).f_text)))) {
{ rt_int rv5621 = 0;
y_use = F.yu; return rv5621; }
}
F.v5603 = ((*(yR99 *)rt_nil_check(F.v5603))).f_next;
F.v5605 = ((*(yR99 *)rt_nil_check(F.v5605))).f_next;
}
{ rt_int rv5623 = 1;
y_use = F.yu; return rv5623; }
}
if (((((((*(yR104 *)rt_nil_check(F.p2596))).f_kind == v828)) || ((((*(yR104 *)rt_nil_check(F.p2596))).f_kind == v825))) || ((((*(yR104 *)rt_nil_check(F.p2596))).f_kind == v822)))) {
if ((((((*(yR104 *)rt_nil_check(F.p2596))).f_elem == ((void *)0))) || ((((*(yR104 *)rt_nil_check(F.p2597))).f_elem == ((void *)0))))) {
{ rt_int rv5625 = 1;
y_use = F.yu; return rv5625; }
}
{ rt_int rv5626 = yr2423_SameType(((*(yR104 *)rt_nil_check(F.p2596))).f_elem, ((*(yR104 *)rt_nil_check(F.p2597))).f_elem);
y_use = F.yu; return rv5626; }
}
{ rt_int rv5628 = 1;
y_use = F.yu; return rv5628; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2602_MakeRep1(void * a_p2603, rt_int a_p2604, rt_int a_p2605) {
struct yf2606 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2603 = a_p2603;
F.p2604 = a_p2604;
F.p2605 = a_p2605;
F.v5644 = ((*(yR99 *)rt_nil_check(F.p2603))).f_kind;
F.v5648 = INT64_C(0);
F.v5650 = F.p2604;
if ((!(((*(yR99 *)rt_nil_check(F.p2603))).f_text == INT64_C(0)))) {
F.v5642 = yr2337_Real(yr2244_Lookup(((*(yR99 *)rt_nil_check(F.p2603))).f_text, ((*(yR99 *)rt_nil_check(F.p2603))).f_line));
if ((((!(((*(yR119 *)rt_nil_check(F.v5642))).f_kind == v864))) && ((!(((*(yR119 *)rt_nil_check(F.v5642))).f_kind == v861))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2603))).f_line, ((*(yR99 *)rt_nil_check(F.p2603))).f_text, y_str(" is not a type", 14));
}
F.v5648 = ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5642))).f_rep))).f_tid;
F.v5650 = ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5642))).f_rep))).f_tname;
}
if ((F.v5644 == v666)) {
F.v5642 = yr2337_Real(yr2244_Lookup(((*(yR99 *)rt_nil_check(F.p2603))).f_name, ((*(yR99 *)rt_nil_check(F.p2603))).f_line));
if ((((!(((*(yR119 *)rt_nil_check(F.v5642))).f_kind == v864))) && ((!(((*(yR119 *)rt_nil_check(F.v5642))).f_kind == v861))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2603))).f_line, ((*(yR99 *)rt_nil_check(F.p2603))).f_name, y_str(" is not a representation", 24));
}
F.v5634 = ((*(yR119 *)rt_nil_check(F.v5642))).f_rep;
if ((!(((*(yR99 *)rt_nil_check(F.p2603))).f_a == ((void *)0)))) {
F.v5634 = yr2350_CopyRep(F.v5634);
yr2560_Qualify(F.v5634, ((*(yR99 *)rt_nil_check(F.p2603))).f_a);
}
{ void * rv5655 = F.v5634;
y_use = F.yu; return rv5655; }
}
if ((F.v5648 == INT64_C(0))) {
F.v5648 = yr2581_NewTid(F.p2604);
if ((F.v5650 == INT64_C(0))) {
F.v5650 = F.v5648;
}
}
if ((F.v5644 == v669)) {
F.v5634 = yr2343_NewRep(v810, F.v5648);
((*(yR104 *)rt_nil_check(F.v5634))).f_tname = F.v5650;
((*(yR104 *)rt_nil_check(F.v5634))).f_ordered = (((*(yR99 *)rt_nil_check(F.p2603))).f_flag == INT64_C(1));
((*(yR104 *)rt_nil_check(F.v5634))).f_lits = ((*(yR99 *)rt_nil_check(F.p2603))).f_a;
((*(yR104 *)rt_nil_check(F.v5634))).f_nlits = yr1903_Count(((*(yR99 *)rt_nil_check(F.p2603))).f_a);
yr2573_SetRange(F.v5634, INT64_C(0), rt_range(rt_sub(((*(yR104 *)rt_nil_check(F.v5634))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr2567_DefineLits(F.v5634);
if ((!(((*(yR99 *)rt_nil_check(F.p2603))).f_b == ((void *)0)))) {
yr2560_Qualify(F.v5634, ((*(yR99 *)rt_nil_check(F.p2603))).f_b);
}
{ void * rv5662 = F.v5634;
y_use = F.yu; return rv5662; }
}
if ((F.v5644 == v672)) {
F.v5634 = yr2343_NewRep(v813, F.v5648);
((*(yR104 *)rt_nil_check(F.v5634))).f_tname = F.v5650;
((*(yR104 *)rt_nil_check(F.v5634))).f_ordered = 1;
((*(yR104 *)rt_nil_check(F.v5634))).f_lits = ((*(yR99 *)rt_nil_check(F.p2603))).f_a;
((*(yR104 *)rt_nil_check(F.v5634))).f_nlits = yr1903_Count(((*(yR99 *)rt_nil_check(F.p2603))).f_a);
if ((((*(yR104 *)rt_nil_check(F.v5634))).f_nlits > INT64_C(256))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2603))).f_line, y_str("this implementation takes alphabets of up to 256 characters", 59));
}
yr2573_SetRange(F.v5634, INT64_C(0), rt_range(rt_sub(((*(yR104 *)rt_nil_check(F.v5634))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((!(((*(yR99 *)rt_nil_check(F.p2603))).f_b == ((void *)0)))) {
yr2560_Qualify(F.v5634, ((*(yR99 *)rt_nil_check(F.p2603))).f_b);
}
{ void * rv5669 = F.v5634;
y_use = F.yu; return rv5669; }
}
if ((F.v5644 == v675)) {
F.v5634 = yr2343_NewRep(v816, F.v5648);
((*(yR104 *)rt_nil_check(F.v5634))).f_tname = F.v5650;
F.v5646 = ((*(yR99 *)rt_nil_check(F.p2603))).f_a;
F.v5640 = ((void *)0);
while ((!(F.v5646 == ((void *)0)))) {
Y_TICK();
F.v5638 = yr2350_CopyRep(yr2587_MakeRep(F.v5646, INT64_C(0), 0));
if ((!yr2356_IsDiscrete(F.v5638))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.v5646))).f_line, y_str("an index is an integer or scalar representation", 47));
}
yr2446_CheckRepresented(F.v5638, ((*(yR99 *)rt_nil_check(F.v5646))).f_line);
((*(yR104 *)rt_nil_check(F.v5638))).f_link = ((void *)0);
if ((F.v5640 == ((void *)0))) {
((*(yR104 *)rt_nil_check(F.v5634))).f_idx = F.v5638;
} else {
((*(yR104 *)rt_nil_check(F.v5640))).f_link = F.v5638;
}
F.v5640 = F.v5638;
((*(yR104 *)rt_nil_check(F.v5634))).f_nidx = rt_range(rt_add(((*(yR104 *)rt_nil_check(F.v5634))).f_nidx, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5646 = ((*(yR99 *)rt_nil_check(F.v5646))).f_next;
}
if ((((*(yR104 *)rt_nil_check(F.v5634))).f_nidx > INT64_C(4))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2603))).f_line, y_str("this implementation takes arrays of up to 4 dimensions", 54));
}
((*(yR104 *)rt_nil_check(F.v5634))).f_elem = yr2587_MakeRep(((*(yR99 *)rt_nil_check(F.p2603))).f_b, INT64_C(0), F.p2605);
if ((!F.p2605)) {
yr2446_CheckRepresented(((*(yR104 *)rt_nil_check(F.v5634))).f_elem, ((*(yR99 *)rt_nil_check(F.p2603))).f_line);
yr2622_BuildArrayDesc(F.v5634);
} else {
((*(yR104 *)rt_nil_check(F.v5634))).f_abstract = ((*(yR104 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.v5634))).f_elem))).f_abstract;
if ((!((*(yR104 *)rt_nil_check(F.v5634))).f_abstract)) {
yr2622_BuildArrayDesc(F.v5634);
}
}
((*(yR104 *)rt_nil_check(F.v5634))).f_deep = 1;
{ void * rv5679 = F.v5634;
y_use = F.yu; return rv5679; }
}
if ((F.v5644 == v678)) {
F.v5634 = yr2343_NewRep(v819, F.v5648);
((*(yR104 *)rt_nil_check(F.v5634))).f_tname = F.v5650;
yr2652_MakeRecord(F.v5634, F.p2603, F.p2605);
{ void * rv5680 = F.v5634;
y_use = F.yu; return rv5680; }
}
if (((((F.v5644 == v684)) || ((F.v5644 == v681))) || ((F.v5644 == v687)))) {
if ((F.v5644 == v684)) {
F.v5634 = yr2343_NewRep(v822, F.v5648);
((*(yR104 *)rt_nil_check(F.v5634))).f_tname = F.v5650;
if (((((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2603))).f_a))).f_kind == v666)) && ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2603))).f_a))).f_a == ((void *)0)))) && ((yr2232_Find(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2603))).f_a))).f_name) == ((void *)0))))) {
((*(yR104 *)rt_nil_check(F.v5634))).f_forward = ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2603))).f_a))).f_name;
((*(yR104 *)rt_nil_check(F.v5634))).f_fwdscope = v1267;
F.v5646 = yr1888_NewNode(v663, ((*(yR99 *)rt_nil_check(F.p2603))).f_line);
((*(yR99 *)rt_nil_check(F.v5646))).f_rep = F.v5634;
((*(yR99 *)rt_nil_check(F.v5646))).f_next = v1358;
v1358 = F.v5646;
{ void * rv5681 = F.v5634;
y_use = F.yu; return rv5681; }
}
((*(yR104 *)rt_nil_check(F.v5634))).f_elem = yr2587_MakeRep(((*(yR99 *)rt_nil_check(F.p2603))).f_a, INT64_C(0), 0);
{ void * rv5684 = F.v5634;
y_use = F.yu; return rv5684; }
}
if ((F.v5644 == v681)) {
F.v5634 = yr2343_NewRep(v825, F.v5648);
((*(yR104 *)rt_nil_check(F.v5634))).f_tname = F.v5650;
((*(yR104 *)rt_nil_check(F.v5634))).f_elem = yr2587_MakeRep(((*(yR99 *)rt_nil_check(F.p2603))).f_a, INT64_C(0), F.p2605);
{ void * rv5686 = F.v5634;
y_use = F.yu; return rv5686; }
}
F.v5634 = yr2343_NewRep(v828, F.v5648);
((*(yR104 *)rt_nil_check(F.v5634))).f_tname = F.v5650;
((*(yR104 *)rt_nil_check(F.v5634))).f_elem = yr2587_MakeRep(((*(yR99 *)rt_nil_check(F.p2603))).f_a, INT64_C(0), 0);
if ((!yr2356_IsDiscrete(((*(yR104 *)rt_nil_check(F.v5634))).f_elem))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2603))).f_line, y_str("a set is of an integer or scalar representation", 47));
}
yr2446_CheckRepresented(((*(yR104 *)rt_nil_check(F.v5634))).f_elem, ((*(yR99 *)rt_nil_check(F.p2603))).f_line);
{ void * rv5690 = F.v5634;
y_use = F.yu; return rv5690; }
}
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2603))).f_line, y_str("this representation is not translated", 37));
{ void * rv5692 = ((void *)0);
y_use = F.yu; return rv5692; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2610_ResolvePending(rt_int a_p2611, void * a_p2612) {
struct yf2613 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2611 = a_p2611;
F.p2612 = a_p2612;
F.v5697 = v1358;
F.v5699 = ((void *)0);
while ((!(F.v5697 == ((void *)0)))) {
Y_TICK();
if ((((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v5697))).f_rep))).f_forward == F.p2611)) {
((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v5697))).f_rep))).f_elem = F.p2612;
((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v5697))).f_rep))).f_forward = INT64_C(0);
if ((F.v5699 == ((void *)0))) {
v1358 = ((*(yR99 *)rt_nil_check(F.v5697))).f_next;
} else {
((*(yR99 *)rt_nil_check(F.v5699))).f_next = ((*(yR99 *)rt_nil_check(F.v5697))).f_next;
}
} else {
F.v5699 = F.v5697;
}
F.v5697 = ((*(yR99 *)rt_nil_check(F.v5697))).f_next;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2617_CheckPending(void) {
struct yf2618 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5703 = v1358;
while ((!(F.v5703 == ((void *)0)))) {
Y_TICK();
if ((((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v5703))).f_rep))).f_fwdscope >= v1267)) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.v5703))).f_line, ((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v5703))).f_rep))).f_forward, y_str(" is named by a pointer but not declared", 39));
}
F.v5703 = ((*(yR99 *)rt_nil_check(F.v5703))).f_next;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2622_BuildArrayDesc(void * a_p2623) {
struct yf2624 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2623 = a_p2623;
yr2417_NewDesc(F.p2623);
yr1020_SB();
yr1031_SA(y_str("{ rt_int lo[", 12));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2623))).f_nidx);
yr1031_SA(y_str("] = {", 5));
F.v5708 = ((*(yR104 *)rt_nil_check(F.p2623))).f_idx;
F.v5712 = 1;
while ((!(F.v5708 == ((void *)0)))) {
Y_TICK();
if ((!F.v5712)) {
yr1031_SA(y_str(", ", 2));
}
F.v5712 = 0;
yr1038_ST(yr2486_LoText(F.v5708));
F.v5708 = ((*(yR104 *)rt_nil_check(F.v5708))).f_link;
}
yr1031_SA(y_str("}, hi[", 6));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2623))).f_nidx);
yr1031_SA(y_str("] = {", 5));
F.v5708 = ((*(yR104 *)rt_nil_check(F.p2623))).f_idx;
F.v5712 = 1;
while ((!(F.v5708 == ((void *)0)))) {
Y_TICK();
if ((!F.v5712)) {
yr1031_SA(y_str(", ", 2));
}
F.v5712 = 0;
yr1038_ST(yr2492_HiText(F.v5708));
F.v5708 = ((*(yR104 *)rt_nil_check(F.v5708))).f_link;
}
yr1031_SA(y_str("}; y_desc_array(", 16));
yr1038_ST(yr2411_DescOf(F.p2623));
yr1031_SA(y_str(", ", 2));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2623))).f_nidx);
yr1031_SA(y_str(", lo, hi, ", 10));
yr1038_ST(yr2411_DescOf(((*(yR104 *)rt_nil_check(F.p2623))).f_elem));
yr1031_SA(y_str("); }", 4));
F.v5710 = yr1050_SE();
yr1126_Emit(F.v5710);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2628_AddField(void * a_p2629, void * * a_p2630, rt_int a_p2631, void * a_p2632, rt_int a_p2633, rt_int a_p2634, void * a_p2635, rt_int a_p2636) {
struct yf2637 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2629 = a_p2629;
F.p2630 = a_p2630;
F.p2631 = a_p2631;
F.p2632 = a_p2632;
F.p2633 = a_p2633;
F.p2634 = a_p2634;
F.p2635 = a_p2635;
F.p2636 = a_p2636;
F.v5737 = ((*(yR104 *)rt_nil_check(F.p2629))).f_fields;
while ((!(F.v5737 == ((void *)0)))) {
Y_TICK();
if ((((*(yR109 *)rt_nil_check(F.v5737))).f_name == F.p2631)) {
yr1180_FailN(F.p2636, F.p2631, y_str(" is a component twice", 21));
}
F.v5737 = ((*(yR109 *)rt_nil_check(F.v5737))).f_next;
}
({ F.v5737 = rt_alloc(sizeof(yR109)); });
(*(yR109 *)rt_nil_check(F.v5737)) = ((yR109){ .f_name = F.p2631, .f_rep = F.p2632, .f_isconst = F.p2633, .f_variant = F.p2634, .f_labels = F.p2635, .f_next = ((void *)0) });
if (((*F.p2630) == ((void *)0))) {
((*(yR104 *)rt_nil_check(F.p2629))).f_fields = F.v5737;
} else {
((*(yR109 *)rt_nil_check((*F.p2630)))).f_next = F.v5737;
}
(*F.p2630) = F.v5737;
if (yr2380_Deep(F.p2632)) {
((*(yR104 *)rt_nil_check(F.p2629))).f_deep = 1;
}
if (((*(yR104 *)rt_nil_check(F.p2632))).f_abstract) {
((*(yR104 *)rt_nil_check(F.p2629))).f_abstract = 1;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2641_AddFields(void * a_p2642, void * * a_p2643, void * a_p2644, rt_int a_p2645, void * a_p2646, rt_int a_p2647) {
struct yf2648 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2642 = a_p2642;
F.p2643 = a_p2643;
F.p2644 = a_p2644;
F.p2645 = a_p2645;
F.p2646 = a_p2646;
F.p2647 = a_p2647;
F.v5749 = F.p2644;
F.v5751 = F.p2644;
while ((!(F.v5749 == ((void *)0)))) {
Y_TICK();
F.v5753 = yr2587_MakeRep(((*(yR99 *)rt_nil_check(F.v5749))).f_b, INT64_C(0), F.p2647);
if ((!F.p2647)) {
yr2446_CheckRepresented(F.v5753, ((*(yR99 *)rt_nil_check(F.v5749))).f_line);
}
F.v5751 = ((*(yR99 *)rt_nil_check(F.v5749))).f_a;
while ((!(F.v5751 == ((void *)0)))) {
Y_TICK();
yr2628_AddField(F.p2642, &(*F.p2643), ((*(yR99 *)rt_nil_check(F.v5751))).f_name, F.v5753, (((*(yR99 *)rt_nil_check(F.v5749))).f_ival == v264), F.p2645, F.p2646, ((*(yR99 *)rt_nil_check(F.v5751))).f_line);
F.v5751 = ((*(yR99 *)rt_nil_check(F.v5751))).f_next;
}
F.v5749 = ((*(yR99 *)rt_nil_check(F.v5749))).f_next;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2652_MakeRecord(void * a_p2653, void * a_p2654, rt_int a_p2655) {
struct yf2656 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2653 = a_p2653;
F.p2654 = a_p2654;
F.p2655 = a_p2655;
F.v5760 = ((void *)0);
F.v5768 = INT64_C(0);
F.v5775 = INT64_C(0);
yr2641_AddFields(F.p2653, &F.v5760, ((*(yR99 *)rt_nil_check(F.p2654))).f_a, INT64_C(0), ((void *)0), F.p2655);
if ((!(((*(yR99 *)rt_nil_check(F.p2654))).f_b == ((void *)0)))) {
F.v5762 = ((*(yR99 *)rt_nil_check(F.p2654))).f_b;
F.v5766 = yr2587_MakeRep(((*(yR99 *)rt_nil_check(F.v5762))).f_b, INT64_C(0), 0);
if ((!yr2356_IsDiscrete(F.v5766))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.v5762))).f_line, y_str("the case-selection component is integer or scalar", 49));
}
yr2628_AddField(F.p2653, &F.v5760, ((*(yR99 *)rt_nil_check(F.v5762))).f_name, F.v5766, 1, INT64_C(0), ((void *)0), ((*(yR99 *)rt_nil_check(F.v5762))).f_line);
((*(yR104 *)rt_nil_check(F.p2653))).f_selector = F.v5760;
F.v5764 = ((*(yR99 *)rt_nil_check(F.v5762))).f_a;
while ((!(F.v5764 == ((void *)0)))) {
Y_TICK();
F.v5768 = rt_range(rt_add(F.v5768, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr2641_AddFields(F.p2653, &F.v5760, ((*(yR99 *)rt_nil_check(F.v5764))).f_b, F.v5768, ((*(yR99 *)rt_nil_check(F.v5764))).f_a, F.p2655);
F.v5764 = ((*(yR99 *)rt_nil_check(F.v5764))).f_next;
}
}
if ((F.p2655 && ((*(yR104 *)rt_nil_check(F.p2653))).f_abstract)) {
y_use = F.yu; return;
}
((*(yR104 *)rt_nil_check(F.p2653))).f_abstract = 0;
((*(yR104 *)rt_nil_check(F.p2653))).f_cname = yr1194_Fresh(y_str("yR", 2));
yr1020_SB();
yr1031_SA(y_str("typedef struct ", 15));
yr1038_ST(((*(yR104 *)rt_nil_check(F.p2653))).f_cname);
yr1031_SA(y_str(" ", 1));
yr1038_ST(((*(yR104 *)rt_nil_check(F.p2653))).f_cname);
yr1031_SA(y_str(";", 1));
F.v5773 = yr1050_SE();
yr1104_Put(&v972, F.v5773);
yr1020_SB();
yr1031_SA(y_str("struct ", 7));
yr1038_ST(((*(yR104 *)rt_nil_check(F.p2653))).f_cname);
yr1031_SA(y_str(" {", 2));
F.v5771 = ((*(yR104 *)rt_nil_check(F.p2653))).f_fields;
while ((!(F.v5771 == ((void *)0)))) {
Y_TICK();
yr1031_SA(y_str(" ", 1));
yr1038_ST(yr2405_CType(((*(yR109 *)rt_nil_check(F.v5771))).f_rep));
yr1031_SA(y_str(" f_", 3));
yr1038_ST(((*(yR109 *)rt_nil_check(F.v5771))).f_name);
yr1031_SA(y_str(";", 1));
F.v5775 = rt_range(rt_add(F.v5775, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5771 = ((*(yR109 *)rt_nil_check(F.v5771))).f_next;
}
if ((F.v5775 == INT64_C(0))) {
yr1031_SA(y_str(" int empty_;", 12));
}
yr1031_SA(y_str(" };", 3));
F.v5773 = yr1050_SE();
yr1104_Put(&v974, F.v5773);
yr2417_NewDesc(F.p2653);
yr1020_SB();
yr1031_SA(y_str("{ static const size_t o[] = {", 29));
F.v5771 = ((*(yR104 *)rt_nil_check(F.p2653))).f_fields;
while ((!(F.v5771 == ((void *)0)))) {
Y_TICK();
yr1031_SA(y_str("offsetof(", 9));
yr1038_ST(((*(yR104 *)rt_nil_check(F.p2653))).f_cname);
yr1031_SA(y_str(", f_", 4));
yr1038_ST(((*(yR109 *)rt_nil_check(F.v5771))).f_name);
yr1031_SA(y_str("), ", 3));
F.v5771 = ((*(yR109 *)rt_nil_check(F.v5771))).f_next;
}
yr1031_SA(y_str("0}; const ydesc **f = rt_alloc(", 31));
yr1044_SI(rt_range(rt_add(F.v5775, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1031_SA(y_str(" * sizeof *f);", 14));
F.v5768 = INT64_C(0);
F.v5771 = ((*(yR104 *)rt_nil_check(F.p2653))).f_fields;
while ((!(F.v5771 == ((void *)0)))) {
Y_TICK();
yr1031_SA(y_str(" f[", 3));
yr1044_SI(F.v5768);
yr1031_SA(y_str("] = ", 4));
yr1038_ST(yr2411_DescOf(((*(yR109 *)rt_nil_check(F.v5771))).f_rep));
yr1031_SA(y_str(";", 1));
F.v5768 = rt_range(rt_add(F.v5768, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5771 = ((*(yR109 *)rt_nil_check(F.v5771))).f_next;
}
yr1031_SA(y_str(" y_desc_record(", 15));
yr1038_ST(yr2411_DescOf(F.p2653));
yr1031_SA(y_str(", sizeof(", 9));
yr1038_ST(((*(yR104 *)rt_nil_check(F.p2653))).f_cname);
yr1031_SA(y_str("), ", 3));
yr1044_SI(F.v5775);
yr1031_SA(y_str(", o, (const ydesc *const *)f); }", 32));
F.v5773 = yr1050_SE();
yr1126_Emit(F.v5773);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2660_FindField(void * a_p2661, rt_int a_p2662) {
struct yf2663 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2661 = a_p2661;
F.p2662 = a_p2662;
F.v5822 = ((*(yR104 *)rt_nil_check(F.p2661))).f_fields;
while ((!(F.v5822 == ((void *)0)))) {
Y_TICK();
if ((((*(yR109 *)rt_nil_check(F.v5822))).f_name == F.p2662)) {
{ void * rv5823 = F.v5822;
y_use = F.yu; return rv5823; }
}
F.v5822 = ((*(yR109 *)rt_nil_check(F.v5822))).f_next;
}
{ void * rv5824 = ((void *)0);
y_use = F.yu; return rv5824; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2667_CharOrd(void * a_p2668, rt_int a_p2669) {
struct yf2670 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2668 = a_p2668;
F.p2669 = a_p2669;
if ((((*(yR104 *)rt_nil_check(F.p2668))).f_tid == ((*(yR104 *)rt_nil_check(v1340))).f_tid)) {
if ((((rt_int *)(v914).p)[y_ix1(v914, F.p2669)] == INT64_C(1))) {
{ rt_int rv5840 = ((rt_int *)(v959).p)[y_ix1(v959, yr1097_TChar(F.p2669, INT64_C(1)))];
y_use = F.yu; return rv5840; }
}
F.v5831 = INT64_C(0);
F.v5835 = INT64_C(1);
F.lo5846 = INT64_C(1);
F.hi5847 = ((rt_int *)(v914).p)[y_ix1(v914, v1468)];
{ rt_int hi5851 = F.hi5847;
for (rt_int i5850 = F.lo5846; i5850 <= hi5851; i5850++) { F.c_5849 = i5850; Y_TICK();
if ((yr1097_TChar(v1468, rt_range(F.c_5849, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 32)) {
F.v5837 = yr1062_Intern(rt_range(rt_add(((rt_int *)(v912).p)[y_ix1(v912, v1468)], (rt_sub(F.v5835, INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub(F.c_5849, F.v5835), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((F.v5837 == F.p2669)) {
if ((F.v5831 < INT64_C(32))) {
{ rt_int rv5858 = F.v5831;
y_use = F.yu; return rv5858; }
}
if ((F.v5831 == INT64_C(32))) {
{ rt_int rv5861 = INT64_C(32);
y_use = F.yu; return rv5861; }
}
if ((F.v5831 == INT64_C(33))) {
{ rt_int rv5864 = INT64_C(127);
y_use = F.yu; return rv5864; }
}
if ((F.v5831 == INT64_C(34))) {
{ rt_int rv5867 = INT64_C(39);
y_use = F.yu; return rv5867; }
}
{ rt_int rv5869 = INT64_C(34);
y_use = F.yu; return rv5869; }
}
F.v5831 = rt_range(rt_add(F.v5831, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5835 = rt_range(rt_add(F.c_5849, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i5850 == hi5851) break;
}}
{ rt_int rv5875 = INT64_C(-1);
y_use = F.yu; return rv5875; }
}
if ((!(((*(yR104 *)rt_nil_check(F.p2668))).f_kind == v813))) {
{ rt_int rv5877 = INT64_C(-1);
y_use = F.yu; return rv5877; }
}
F.v5829 = ((*(yR104 *)rt_nil_check(F.p2668))).f_lits;
F.v5833 = INT64_C(0);
while ((!(F.v5829 == ((void *)0)))) {
Y_TICK();
if (yr1082_TEq(((*(yR99 *)rt_nil_check(F.v5829))).f_text, F.p2669)) {
{ rt_int rv5879 = F.v5833;
y_use = F.yu; return rv5879; }
}
F.v5833 = rt_range(rt_add(F.v5833, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5829 = ((*(yR99 *)rt_nil_check(F.v5829))).f_next;
}
{ rt_int rv5883 = INT64_C(-1);
y_use = F.yu; return rv5883; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2674_AlphabetFor(void * a_p2675, void * a_p2676) {
struct yf2677 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2675 = a_p2675;
F.p2676 = a_p2676;
F.v5892 = ((void *)0);
F.v5894 = INT64_C(0);
F.v5897 = INT64_C(0);
if ((!(((*(yR99 *)rt_nil_check(F.p2675))).f_d == ((void *)0)))) {
F.v5888 = yr2337_Real(yr2244_Lookup(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2675))).f_d))).f_name, ((*(yR99 *)rt_nil_check(F.p2675))).f_line));
if ((((((!(((*(yR119 *)rt_nil_check(F.v5888))).f_kind == v861))) && ((!(((*(yR119 *)rt_nil_check(F.v5888))).f_kind == v864))))) || ((!(((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5888))).f_rep))).f_kind == v813))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2675))).f_line, ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2675))).f_d))).f_name, y_str(" is not an alphabet", 19));
}
{ void * rv5900 = ((*(yR119 *)rt_nil_check(F.v5888))).f_rep;
y_use = F.yu; return rv5900; }
}
F.v5897 = INT64_C(1);
if ((((((*(yR99 *)rt_nil_check(F.p2675))).f_kind == v765)) || ((yr2667_CharOrd(v1340, ((*(yR99 *)rt_nil_check(F.p2675))).f_text) >= INT64_C(0))))) {
F.v5894 = INT64_C(1);
F.v5892 = v1340;
}
F.v5890 = v1471;
while ((!(F.v5890 == ((void *)0)))) {
Y_TICK();
F.v5888 = yr2232_Find(((*(yR99 *)rt_nil_check(F.v5890))).f_name);
if ((!(F.v5888 == ((void *)0)))) {
F.v5888 = yr2337_Real(F.v5888);
if ((((((((*(yR119 *)rt_nil_check(F.v5888))).f_kind == v861)) || ((((*(yR119 *)rt_nil_check(F.v5888))).f_kind == v864)))) && ((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v5888))).f_rep))).f_tid == ((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v5890))).f_rep))).f_tid)))) {
F.v5897 = rt_range(rt_add(F.v5897, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((((*(yR99 *)rt_nil_check(F.p2675))).f_kind == v762)) && ((yr2667_CharOrd(((*(yR99 *)rt_nil_check(F.v5890))).f_rep, ((*(yR99 *)rt_nil_check(F.p2675))).f_text) >= INT64_C(0))))) {
F.v5894 = rt_range(rt_add(F.v5894, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5892 = ((*(yR99 *)rt_nil_check(F.v5890))).f_rep;
}
}
}
F.v5890 = ((*(yR99 *)rt_nil_check(F.v5890))).f_next;
}
if ((((((*(yR99 *)rt_nil_check(F.p2675))).f_kind == v765)) && ((F.v5897 > INT64_C(1))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2675))).f_line, y_str("a string in a scope with two alphabets is qualified by its alphabet (VI.A.3)", 76));
}
if ((F.v5894 > INT64_C(1))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2675))).f_line, yr3194_Join(yr1055_T(y_str("'", 1)), ((*(yR99 *)rt_nil_check(F.p2675))).f_text, yr1055_T(y_str("'", 1))), y_str(" is a character of two alphabets here: qualify it (VI.A.3)", 58));
}
if ((F.v5892 == ((void *)0))) {
{ void * rv5915 = v1340;
y_use = F.yu; return rv5915; }
}
{ void * rv5916 = F.v5892;
y_use = F.yu; return rv5916; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2681_CharValue(void * a_p2682, rt_int a_p2683, rt_int a_p2684) {
struct yf2685 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2682 = a_p2682;
F.p2683 = a_p2683;
F.p2684 = a_p2684;
F.v5922 = yr2667_CharOrd(F.p2682, F.p2683);
if ((F.v5922 < INT64_C(0))) {
yr1020_SB();
yr1031_SA(y_str("'", 1));
yr1038_ST(F.p2683);
yr1031_SA(y_str("' is not a character of ", 24));
yr1038_ST(((*(yR104 *)rt_nil_check(F.p2682))).f_tname);
F.v5924 = yr1050_SE();
yr1151_Fail(F.p2684, F.v5924);
}
{ rt_int rv5928 = F.v5922;
y_use = F.yu; return rv5928; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2689_StringCodes(void * a_p2690, rt_int a_p2691, rt_int * a_p2692, rt_int a_p2693) {
struct yf2694 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2690 = a_p2690;
F.p2691 = a_p2691;
F.p2692_o = a_p2692;
F.p2693 = a_p2693;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&F.yd_5948, 1, lo, hi, &y_d_int); }
y_init(&F.yd_5948, &F.v5950);
F.p2692 = INT64_C(0);
F.v5935 = INT64_C(1);
while ((F.v5935 <= ((rt_int *)(v914).p)[y_ix1(v914, F.p2691)])) {
Y_TICK();
F.v5952 = yr1097_TChar(F.p2691, F.v5935);
if ((F.v5952 == 39)) {
F.v5937 = rt_range(rt_add(F.v5935, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1097_TChar(F.p2691, F.v5937) == 39))) {
Y_TICK();
F.v5937 = rt_range(rt_add(F.v5937, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v5954 = yr1062_Intern(rt_range(rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.p2691)], F.v5935), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v5937, F.v5935)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v5939 = yr2681_CharValue(F.p2690, F.v5954, F.p2693);
F.v5935 = rt_range(rt_add(F.v5937, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v5954 = yr1062_Intern(rt_range(rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.p2691)], (rt_sub(F.v5935, INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), INT64_C(1));
F.v5939 = yr2681_CharValue(F.p2690, F.v5954, F.p2693);
F.v5935 = rt_range(rt_add(F.v5935, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.p2692 >= INT64_C(4096))) {
yr1172_FailS(F.p2693, y_str("string literal too long", 23));
}
F.p2692 = rt_range(rt_add(F.p2692, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(F.v5950).p)[y_ix1(F.v5950, F.p2692)] = F.v5939;
}
yr1020_SB();
yr1025_SC(34);
F.lo5983 = INT64_C(1);
F.hi5984 = F.p2692;
{ rt_int hi5988 = F.hi5984;
for (rt_int i5987 = F.lo5983; i5987 <= hi5988; i5987++) { F.c_5986 = i5987; Y_TICK();
F.v5939 = ((rt_int *)(F.v5950).p)[y_ix1(F.v5950, F.c_5986)];
if ((((F.v5939 == INT64_C(34))) || ((F.v5939 == INT64_C(92))))) {
yr1025_SC(92);
yr1025_SC(((unsigned char *)(v970).p)[y_ix1(v970, F.v5939)]);
} else if (((((F.v5939 >= INT64_C(32))) && ((F.v5939 < INT64_C(127)))) && (((((!(F.v5939 == INT64_C(63)))) || ((F.c_5986 == INT64_C(1)))) || ((!(((rt_int *)(F.v5950).p)[y_ix1(F.v5950, rt_sub(F.c_5986, INT64_C(1)))] == INT64_C(63)))))))) {
yr1025_SC(((unsigned char *)(v970).p)[y_ix1(v970, F.v5939)]);
} else {
yr1025_SC(92);
yr1025_SC(((unsigned char *)(v970).p)[y_ix1(v970, rt_add(INT64_C(48), (rt_div(F.v5939, INT64_C(64)))))]);
yr1025_SC(((unsigned char *)(v970).p)[y_ix1(v970, rt_add(INT64_C(48), (rt_mod((rt_div(F.v5939, INT64_C(8))), INT64_C(8)))))]);
yr1025_SC(((unsigned char *)(v970).p)[y_ix1(v970, rt_add(INT64_C(48), (rt_mod(F.v5939, INT64_C(8)))))]);
}
if (i5987 == hi5988) break;
}}
yr1025_SC(34);
{ rt_int rv6015 = yr1050_SE();
(*F.p2692_o) = F.p2692;
y_use = F.yu; return rv6015; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2698_Manifest(void * a_p2699, rt_int * a_p2700, rt_int * a_p2701) {
struct yf2702 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
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
y_use = F.yu; return;
}
if ((((*(yR99 *)rt_nil_check(F.p2699))).f_kind == v762)) {
F.v6033 = yr2674_AlphabetFor(F.p2699, ((void *)0));
F.p2701 = yr2667_CharOrd(F.v6033, ((*(yR99 *)rt_nil_check(F.p2699))).f_text);
F.p2700 = (F.p2701 >= INT64_C(0));
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
y_use = F.yu; return;
}
if ((((*(yR99 *)rt_nil_check(F.p2699))).f_kind == v771)) {
if ((!(((*(yR99 *)rt_nil_check(F.p2699))).f_d == ((void *)0)))) {
F.v6021 = yr2337_Real(yr2244_Lookup(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2699))).f_d))).f_name, ((*(yR99 *)rt_nil_check(F.p2699))).f_line));
F.v6021 = yr2297_FindLit(((*(yR99 *)rt_nil_check(F.p2699))).f_name, ((*(yR119 *)rt_nil_check(F.v6021))).f_rep);
} else {
F.v6021 = yr2232_Find(((*(yR99 *)rt_nil_check(F.p2699))).f_name);
}
if ((F.v6021 == ((void *)0))) {
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
y_use = F.yu; return;
}
F.v6021 = yr2337_Real(F.v6021);
if ((((((((*(yR119 *)rt_nil_check(F.v6021))).f_kind == v867)) || ((((*(yR119 *)rt_nil_check(F.v6021))).f_kind == v858)))) && ((*(yR119 *)rt_nil_check(F.v6021))).f_hasmv)) {
F.p2700 = 1;
F.p2701 = ((*(yR119 *)rt_nil_check(F.v6021))).f_mval;
}
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
y_use = F.yu; return;
}
if ((((*(yR99 *)rt_nil_check(F.p2699))).f_kind == v795)) {
yr2698_Manifest(((*(yR99 *)rt_nil_check(F.p2699))).f_a, &F.p2700, &F.p2701);
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
y_use = F.yu; return;
}
if ((((*(yR99 *)rt_nil_check(F.p2699))).f_kind == v789)) {
yr2698_Manifest(((*(yR99 *)rt_nil_check(F.p2699))).f_a, &F.p2700, &F.p2701);
F.p2701 = rt_range(rt_neg(F.p2701), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
y_use = F.yu; return;
}
if ((((*(yR99 *)rt_nil_check(F.p2699))).f_kind == v792)) {
yr2698_Manifest(((*(yR99 *)rt_nil_check(F.p2699))).f_a, &F.v6027, &F.v6023);
yr2698_Manifest(((*(yR99 *)rt_nil_check(F.p2699))).f_b, &F.v6029, &F.v6025);
if ((!((F.v6027 && F.v6029)))) {
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
y_use = F.yu; return;
}
F.v6031 = ((*(yR99 *)rt_nil_check(F.p2699))).f_name;
F.p2700 = 1;
if ((F.v6031 == v567)) {
F.p2701 = rt_range(rt_add(F.v6023, F.v6025), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v6031 == v570)) {
F.p2701 = rt_range(rt_sub(F.v6023, F.v6025), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v6031 == v573)) {
F.p2701 = rt_range(rt_mul(F.v6023, F.v6025), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v6031 == v270)) && ((!(F.v6025 == INT64_C(0)))))) {
F.p2701 = rt_range(rt_div(F.v6023, F.v6025), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v6031 == v372)) && ((!(F.v6025 == INT64_C(0)))))) {
F.p2701 = rt_range(rt_mod(F.v6023, F.v6025), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v6031 == v231)) {
F.p2701 = rt_range(rt_mul(F.v6023, F.v6025), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v6031 == v393)) {
F.p2701 = rt_range(rt_sub((rt_add(F.v6023, F.v6025)), (rt_mul(F.v6023, F.v6025))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v6031 == v483)) {
F.p2701 = rt_range(rt_mod((rt_add(F.v6023, F.v6025)), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.p2700 = 0;
}
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
y_use = F.yu; return;
}
if ((((*(yR99 *)rt_nil_check(F.p2699))).f_kind == v786)) {
yr2698_Manifest(((*(yR99 *)rt_nil_check(F.p2699))).f_a, &F.p2700, &F.p2701);
F.p2701 = rt_range(rt_sub(INT64_C(1), F.p2701), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
y_use = F.yu; return;
}
if ((((*(yR99 *)rt_nil_check(F.p2699))).f_kind == v774)) {
yr2706_ManifestStd(F.p2699, &F.p2700, &F.p2701);
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
y_use = F.yu; return;
}
(*F.p2700_o) = F.p2700;
(*F.p2701_o) = F.p2701;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2706_ManifestStd(void * a_p2707, rt_int * a_p2708, rt_int * a_p2709) {
struct yf2710 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2707 = a_p2707;
F.p2708_o = a_p2708;
F.p2709_o = a_p2709;
F.p2708 = 0;
F.p2709 = INT64_C(0);
F.v6063 = yr2232_Find(((*(yR99 *)rt_nil_check(F.p2707))).f_name);
if ((F.v6063 == ((void *)0))) {
(*F.p2708_o) = F.p2708;
(*F.p2709_o) = F.p2709;
y_use = F.yu; return;
}
F.v6063 = yr2337_Real(F.v6063);
if ((!(((*(yR119 *)rt_nil_check(F.v6063))).f_kind == v885))) {
(*F.p2708_o) = F.p2708;
(*F.p2709_o) = F.p2709;
y_use = F.yu; return;
}
F.v6065 = ((*(yR119 *)rt_nil_check(F.v6063))).f_mval;
if ((((((F.v6065 == v1366)) || ((F.v6065 == v1369))) || ((F.v6065 == v1372))) || ((F.v6065 == v1375)))) {
if ((!(yr1903_Count(((*(yR99 *)rt_nil_check(F.p2707))).f_a) == INT64_C(1)))) {
(*F.p2708_o) = F.p2708;
(*F.p2709_o) = F.p2709;
y_use = F.yu; return;
}
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p2707))).f_a, ((void *)0), &F.v6073, &F.v6075);
if ((!yr2356_IsDiscrete(F.v6075))) {
(*F.p2708_o) = F.p2708;
(*F.p2709_o) = F.p2709;
y_use = F.yu; return;
}
if ((((F.v6065 == v1372)) || ((F.v6065 == v1375)))) {
if ((!(((*(yR104 *)rt_nil_check(F.v6075))).f_elem == ((void *)0)))) {
F.v6075 = ((*(yR104 *)rt_nil_check(F.v6075))).f_elem;
}
if ((!((*(yR104 *)rt_nil_check(F.v6075))).f_hasm)) {
(*F.p2708_o) = F.p2708;
(*F.p2709_o) = F.p2709;
y_use = F.yu; return;
}
F.p2708 = 1;
if ((F.v6065 == v1372)) {
F.p2709 = ((*(yR104 *)rt_nil_check(F.v6075))).f_mlo;
} else {
F.p2709 = ((*(yR104 *)rt_nil_check(F.v6075))).f_mhi;
}
(*F.p2708_o) = F.p2708;
(*F.p2709_o) = F.p2709;
y_use = F.yu; return;
}
yr2698_Manifest(((*(yR99 *)rt_nil_check(F.p2707))).f_a, &F.v6069, &F.p2709);
if ((!F.v6069)) {
(*F.p2708_o) = F.p2708;
(*F.p2709_o) = F.p2709;
y_use = F.yu; return;
}
if ((F.v6065 == v1366)) {
F.p2709 = rt_range(rt_add(F.p2709, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.p2709 = rt_range(rt_sub(F.p2709, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((!(((*(yR104 *)rt_nil_check(F.v6075))).f_elem == ((void *)0)))) {
F.v6075 = ((*(yR104 *)rt_nil_check(F.v6075))).f_elem;
}
if ((((!(((*(yR104 *)rt_nil_check(F.v6075))).f_kind == v798))) && ((((F.p2709 < INT64_C(0))) || ((F.p2709 >= ((*(yR104 *)rt_nil_check(F.v6075))).f_nlits)))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2707))).f_line, ((*(yR99 *)rt_nil_check(F.p2707))).f_name, y_str(" goes beyond the end of the enumeration (XI)", 44));
}
F.p2708 = 1;
(*F.p2708_o) = F.p2708;
(*F.p2709_o) = F.p2709;
y_use = F.yu; return;
}
if ((((F.v6065 == v1360)) || ((F.v6065 == v1363)))) {
if ((!(yr1903_Count(((*(yR99 *)rt_nil_check(F.p2707))).f_a) == INT64_C(2)))) {
(*F.p2708_o) = F.p2708;
(*F.p2709_o) = F.p2709;
y_use = F.yu; return;
}
yr2698_Manifest(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2707))).f_a))).f_next, &F.v6071, &F.v6067);
if ((!F.v6071)) {
(*F.p2708_o) = F.p2708;
(*F.p2709_o) = F.p2709;
y_use = F.yu; return;
}
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p2707))).f_a, ((void *)0), &F.v6073, &F.v6075);
if (((((!(((*(yR104 *)rt_nil_check(F.v6075))).f_kind == v816))) || ((F.v6067 < INT64_C(1)))) || ((F.v6067 > ((*(yR104 *)rt_nil_check(F.v6075))).f_nidx)))) {
(*F.p2708_o) = F.p2708;
(*F.p2709_o) = F.p2709;
y_use = F.yu; return;
}
F.v6077 = ((*(yR104 *)rt_nil_check(F.v6075))).f_idx;
F.lo6094 = INT64_C(2);
F.hi6095 = F.v6067;
{ rt_int hi6099 = F.hi6095;
for (rt_int i6098 = F.lo6094; i6098 <= hi6099; i6098++) { F.c_6097 = i6098; Y_TICK();
F.v6077 = ((*(yR104 *)rt_nil_check(F.v6077))).f_link;
if (i6098 == hi6099) break;
}}
if ((!((*(yR104 *)rt_nil_check(F.v6077))).f_hasm)) {
(*F.p2708_o) = F.p2708;
(*F.p2709_o) = F.p2709;
y_use = F.yu; return;
}
F.p2708 = 1;
if ((F.v6065 == v1360)) {
F.p2709 = ((*(yR104 *)rt_nil_check(F.v6077))).f_mlo;
} else {
F.p2709 = ((*(yR104 *)rt_nil_check(F.v6077))).f_mhi;
}
(*F.p2708_o) = F.p2708;
(*F.p2709_o) = F.p2709;
y_use = F.yu; return;
}
(*F.p2708_o) = F.p2708;
(*F.p2709_o) = F.p2709;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2714_NeedsConv(void * a_p2715, void * a_p2716) {
struct yf2717 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2715 = a_p2715;
F.p2716 = a_p2716;
if ((F.p2715 == F.p2716)) {
{ rt_int rv6105 = 0;
y_use = F.yu; return rv6105; }
}
if (yr2356_IsDiscrete(F.p2715)) {
if ((((*(yR104 *)rt_nil_check(F.p2715))).f_lo == INT64_C(0))) {
{ rt_int rv6108 = 0;
y_use = F.yu; return rv6108; }
}
{ rt_int rv6109 = (!((((((*(yR104 *)rt_nil_check(F.p2715))).f_hasm && ((*(yR104 *)rt_nil_check(F.p2716))).f_hasm) && ((((*(yR104 *)rt_nil_check(F.p2715))).f_mlo <= ((*(yR104 *)rt_nil_check(F.p2716))).f_mlo))) && ((((*(yR104 *)rt_nil_check(F.p2716))).f_mhi <= ((*(yR104 *)rt_nil_check(F.p2715))).f_mhi)))));
y_use = F.yu; return rv6109; }
}
if ((((*(yR104 *)rt_nil_check(F.p2715))).f_kind == v804)) {
{ rt_int rv6111 = (!(((*(yR104 *)rt_nil_check(F.p2715))).f_lo == INT64_C(0)));
y_use = F.yu; return rv6111; }
}
if ((((*(yR104 *)rt_nil_check(F.p2715))).f_kind == v801)) {
{ rt_int rv6113 = ((((!(((*(yR104 *)rt_nil_check(F.p2715))).f_lo == INT64_C(0)))) || ((!(((*(yR104 *)rt_nil_check(F.p2715))).f_fsn == ((*(yR104 *)rt_nil_check(F.p2716))).f_fsn)))) || ((!(((*(yR104 *)rt_nil_check(F.p2715))).f_fsd == ((*(yR104 *)rt_nil_check(F.p2716))).f_fsd))));
y_use = F.yu; return rv6113; }
}
if ((((*(yR104 *)rt_nil_check(F.p2715))).f_kind == v819)) {
{ rt_int rv6114 = (((((*(yR104 *)rt_nil_check(F.p2716))).f_kind == v819)) && ((!(((*(yR104 *)rt_nil_check(F.p2715))).f_cname == ((*(yR104 *)rt_nil_check(F.p2716))).f_cname))));
y_use = F.yu; return rv6114; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2715))).f_kind == v816)) || ((((*(yR104 *)rt_nil_check(F.p2715))).f_kind == v837)))) {
if ((((!(((*(yR104 *)rt_nil_check(F.p2716))).f_kind == v816))) && ((!(((*(yR104 *)rt_nil_check(F.p2716))).f_kind == v837))))) {
{ rt_int rv6116 = 0;
y_use = F.yu; return rv6116; }
}
{ rt_int rv6117 = yr2714_NeedsConv(((*(yR104 *)rt_nil_check(F.p2715))).f_elem, ((*(yR104 *)rt_nil_check(F.p2716))).f_elem);
y_use = F.yu; return rv6117; }
}
{ rt_int rv6119 = 0;
y_use = F.yu; return rv6119; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2721_ConvertRecord(rt_int a_p2722, void * a_p2723, void * a_p2724) {
struct yf2725 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2722 = a_p2722;
F.p2723 = a_p2723;
F.p2724 = a_p2724;
F.v6125 = yr1194_Fresh(y_str("cs", 2));
F.v6127 = yr1194_Fresh(y_str("cd", 2));
yr1020_SB();
yr1031_SA(y_str("({ ", 3));
yr1038_ST(yr2405_CType(F.p2724));
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v6125);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(F.p2722);
yr1031_SA(y_str("; ", 2));
yr1038_ST(yr2405_CType(F.p2723));
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v6127);
yr1031_SA(y_str("; memset(&", 10));
yr1038_ST(F.v6127);
yr1031_SA(y_str(", 0, sizeof ", 12));
yr1038_ST(F.v6127);
yr1031_SA(y_str(");", 2));
F.v6129 = ((*(yR104 *)rt_nil_check(F.p2723))).f_fields;
while ((!(F.v6129 == ((void *)0)))) {
Y_TICK();
F.v6131 = yr2660_FindField(F.p2724, ((*(yR109 *)rt_nil_check(F.v6129))).f_name);
if ((!(F.v6131 == ((void *)0)))) {
yr1031_SA(y_str(" ", 1));
if ((!(((*(yR109 *)rt_nil_check(F.v6131))).f_variant == INT64_C(0)))) {
yr1031_SA(y_str("if (", 4));
yr1038_ST(yr2855_VariantTest(F.p2724, F.v6131, yr3194_Join(yr1055_T(y_str("(&", 2)), F.v6125, yr1055_T(y_str(")", 1)))));
yr1031_SA(y_str(") ", 2));
}
yr1038_ST(F.v6127);
yr1031_SA(y_str(".f_", 3));
yr1038_ST(((*(yR109 *)rt_nil_check(F.v6129))).f_name);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(yr2779_Convert(yr3194_Join(F.v6125, yr1055_T(y_str(".f_", 3)), ((*(yR109 *)rt_nil_check(F.v6129))).f_name), ((*(yR109 *)rt_nil_check(F.v6129))).f_rep, ((*(yR109 *)rt_nil_check(F.v6131))).f_rep));
yr1031_SA(y_str(";", 1));
}
F.v6129 = ((*(yR109 *)rt_nil_check(F.v6129))).f_next;
}
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v6127);
yr1031_SA(y_str("; })", 4));
{ rt_int rv6154 = yr1050_SE();
y_use = F.yu; return rv6154; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2729_ConvertArray(rt_int a_p2730, void * a_p2731, void * a_p2732) {
struct yf2733 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2730 = a_p2730;
F.p2731 = a_p2731;
F.p2732 = a_p2732;
F.v6160 = yr1194_Fresh(y_str("cs", 2));
F.v6162 = yr1194_Fresh(y_str("cd", 2));
F.v6164 = yr1194_Fresh(y_str("ck", 2));
F.v6166 = yr1194_Fresh(y_str("cn", 2));
F.v6168 = yr2405_CType(((*(yR104 *)rt_nil_check(F.p2731))).f_elem);
F.v6170 = yr2405_CType(((*(yR104 *)rt_nil_check(F.p2732))).f_elem);
yr1020_SB();
yr1031_SA(y_str("({ yarr ", 8));
yr1038_ST(F.v6160);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(F.p2730);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v6162);
yr1031_SA(y_str("; rt_int ", 9));
yr1038_ST(F.v6166);
yr1031_SA(y_str(" = y_count(", 11));
yr1038_ST(F.v6160);
yr1031_SA(y_str(", ", 2));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2732))).f_nidx);
yr1031_SA(y_str(");", 2));
if ((((*(yR104 *)rt_nil_check(F.p2731))).f_kind == v816)) {
yr1031_SA(y_str(" y_init(", 8));
yr1038_ST(yr2411_DescOf(F.p2731));
yr1031_SA(y_str(", &", 3));
yr1038_ST(F.v6162);
yr1031_SA(y_str("); if (y_count(", 15));
yr1038_ST(F.v6162);
yr1031_SA(y_str(", ", 2));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2731))).f_nidx);
yr1031_SA(y_str(") != ", 5));
yr1038_ST(F.v6166);
yr1031_SA(y_str(") rt_raise_msg(RT_X_RANGE, ", 27));
yr1025_SC(34);
yr1031_SA(y_str("array lengths differ", 20));
yr1025_SC(34);
yr1031_SA(y_str(");", 2));
} else {
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v6162);
yr1031_SA(y_str(" = y_like(", 10));
yr1038_ST(F.v6160);
yr1031_SA(y_str(", ", 2));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p2732))).f_nidx);
yr1031_SA(y_str(", ", 2));
yr1038_ST(yr2411_DescOf(((*(yR104 *)rt_nil_check(F.p2731))).f_elem));
yr1031_SA(y_str(");", 2));
}
yr1031_SA(y_str(" for (rt_int ", 13));
yr1038_ST(F.v6164);
yr1031_SA(y_str(" = 0; ", 6));
yr1038_ST(F.v6164);
yr1031_SA(y_str(" < ", 3));
yr1038_ST(F.v6166);
yr1031_SA(y_str("; ", 2));
yr1038_ST(F.v6164);
yr1031_SA(y_str("++) ((", 6));
yr1038_ST(F.v6168);
yr1031_SA(y_str(" *)", 3));
yr1038_ST(F.v6162);
yr1031_SA(y_str(".p)[", 4));
yr1038_ST(F.v6164);
yr1031_SA(y_str("] = ", 4));
yr1038_ST(yr2779_Convert(yr3194_Join(yr1055_T(y_str("((", 2)), F.v6170, yr3194_Join(yr1055_T(y_str(" *)", 3)), F.v6160, yr3194_Join(yr1055_T(y_str(".p)[", 4)), F.v6164, yr1055_T(y_str("]", 1))))), ((*(yR104 *)rt_nil_check(F.p2731))).f_elem, ((*(yR104 *)rt_nil_check(F.p2732))).f_elem));
yr1031_SA(y_str("; ", 2));
yr1038_ST(F.v6162);
yr1031_SA(y_str("; })", 4));
{ rt_int rv6211 = yr1050_SE();
y_use = F.yu; return rv6211; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2737_RescaleCode(rt_int a_p2738, void * a_p2739, void * a_p2740) {
struct yf2741 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2738 = a_p2738;
F.p2739 = a_p2739;
F.p2740 = a_p2740;
yr2535_ScaleRatio(F.p2739, F.p2740, &F.v6217, &F.v6219, &F.v6221);
if (F.v6221) {
{ rt_int rv6222 = F.p2738;
y_use = F.yu; return rv6222; }
}
yr1020_SB();
yr1031_SA(y_str("y_fix_conv(", 11));
yr1038_ST(F.p2738);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v6217);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v6219);
yr1031_SA(y_str(")", 1));
{ rt_int rv6227 = yr1050_SE();
y_use = F.yu; return rv6227; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2745_CommonScale(rt_int * a_p2746, void * a_p2747, rt_int * a_p2748, void * a_p2749, void * a_p2750, rt_int a_p2751) {
struct yf2752 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2746 = a_p2746;
F.p2747 = a_p2747;
F.p2748 = a_p2748;
F.p2749 = a_p2749;
F.p2750 = a_p2750;
F.p2751 = a_p2751;
F.v6236 = yr2512_Gcd(((*(yR104 *)rt_nil_check(F.p2747))).f_fsn, ((*(yR104 *)rt_nil_check(F.p2749))).f_fsn);
F.v6238 = yr2519_MulChk(rt_range(rt_div(((*(yR104 *)rt_nil_check(F.p2747))).f_fsd, yr2512_Gcd(((*(yR104 *)rt_nil_check(F.p2747))).f_fsd, ((*(yR104 *)rt_nil_check(F.p2749))).f_fsd)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), ((*(yR104 *)rt_nil_check(F.p2749))).f_fsd, F.p2751);
yr2552_SetScale(F.p2750, F.v6236, F.v6238);
(*F.p2746) = yr2737_RescaleCode((*F.p2746), F.p2747, F.p2750);
(*F.p2748) = yr2737_RescaleCode((*F.p2748), F.p2749, F.p2750);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2756_FixLiteral(void * a_p2757, rt_int * a_p2758, void * * a_p2759) {
struct yf2760 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2757 = a_p2757;
F.p2758_o = a_p2758;
F.p2759_o = a_p2759;
F.v6245 = ((*(yR99 *)rt_nil_check(F.p2757))).f_ival;
F.v6247 = ((rt_int *)(v1238).p)[y_ix1(v1238, F.v6245)];
F.p2759 = yr2350_CopyRep(v1350);
((*(yR104 *)rt_nil_check(F.p2759))).f_abstract = 0;
if ((F.v6247 >= INT64_C(0))) {
yr2552_SetScale(F.p2759, yr2527_PowChk(((rt_int *)(v1236).p)[y_ix1(v1236, F.v6245)], F.v6247, ((*(yR99 *)rt_nil_check(F.p2757))).f_line), INT64_C(1));
} else {
yr2552_SetScale(F.p2759, INT64_C(1), yr2527_PowChk(((rt_int *)(v1236).p)[y_ix1(v1236, F.v6245)], rt_range(rt_neg(F.v6247), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), ((*(yR99 *)rt_nil_check(F.p2757))).f_line));
}
yr1020_SB();
yr1031_SA(y_str("((yfix)INT64_C(", 15));
yr1044_SI(((rt_int *)(v1234).p)[y_ix1(v1234, F.v6245)]);
yr1031_SA(y_str("))", 2));
F.p2758 = yr1050_SE();
(*F.p2758_o) = F.p2758;
(*F.p2759_o) = F.p2759;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2764_ManifestFix(void * a_p2765, rt_int * a_p2766, rt_int * a_p2767, rt_int * a_p2768) {
struct yf2769 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2765 = a_p2765;
F.p2766_o = a_p2766;
F.p2767_o = a_p2767;
F.p2768_o = a_p2768;
F.p2766 = 0;
F.p2767 = INT64_C(0);
F.p2768 = INT64_C(1);
if ((((*(yR99 *)rt_nil_check(F.p2765))).f_kind == v756)) {
F.v6261 = ((*(yR99 *)rt_nil_check(F.p2765))).f_ival;
F.v6263 = ((rt_int *)(v1238).p)[y_ix1(v1238, F.v6261)];
F.p2767 = ((rt_int *)(v1234).p)[y_ix1(v1234, F.v6261)];
if ((F.v6263 >= INT64_C(0))) {
F.p2767 = yr2519_MulChk(F.p2767, yr2527_PowChk(((rt_int *)(v1236).p)[y_ix1(v1236, F.v6261)], F.v6263, ((*(yR99 *)rt_nil_check(F.p2765))).f_line), ((*(yR99 *)rt_nil_check(F.p2765))).f_line);
} else {
F.p2768 = yr2527_PowChk(((rt_int *)(v1236).p)[y_ix1(v1236, F.v6261)], rt_range(rt_neg(F.v6263), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), ((*(yR99 *)rt_nil_check(F.p2765))).f_line);
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
yr2764_ManifestFix(((*(yR99 *)rt_nil_check(F.p2765))).f_b, &F.v6271, &F.v6267, &F.v6269);
F.p2766 = (F.p2766 && F.v6271);
F.p2767 = yr2519_MulChk(F.p2767, F.v6267, ((*(yR99 *)rt_nil_check(F.p2765))).f_line);
F.p2768 = yr2519_MulChk(F.p2768, F.v6269, ((*(yR99 *)rt_nil_check(F.p2765))).f_line);
}
F.v6265 = yr2512_Gcd(F.p2767, F.p2768);
F.p2767 = rt_range(rt_div(F.p2767, F.v6265), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.p2768 = rt_range(rt_div(F.p2768, F.v6265), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2766_o) = F.p2766;
(*F.p2767_o) = F.p2767;
(*F.p2768_o) = F.p2768;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2773_FloatChk(rt_int a_p2774) {
struct yf2775 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2774 = a_p2774;
{ rt_int rv6286 = yr3194_Join(yr1055_T(y_str("y_fchk(", 7)), F.p2774, yr1055_T(y_str(")", 1)));
y_use = F.yu; return rv6286; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2779_Convert(rt_int a_p2780, void * a_p2781, void * a_p2782) {
struct yf2783 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
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
F.v6292 = yr1050_SE();
yr1151_Fail(v994, F.v6292);
}
}
if ((!yr2714_NeedsConv(F.p2781, F.p2782))) {
{ rt_int rv6303 = F.p2780;
y_use = F.yu; return rv6303; }
}
if ((((*(yR104 *)rt_nil_check(F.p2781))).f_kind == v819)) {
{ rt_int rv6304 = yr2721_ConvertRecord(F.p2780, F.p2781, F.p2782);
y_use = F.yu; return rv6304; }
}
if ((((((*(yR104 *)rt_nil_check(F.p2781))).f_kind == v816)) || ((((*(yR104 *)rt_nil_check(F.p2781))).f_kind == v837)))) {
{ rt_int rv6305 = yr2729_ConvertArray(F.p2780, F.p2781, F.p2782);
y_use = F.yu; return rv6305; }
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
{ rt_int rv6310 = yr1050_SE();
y_use = F.yu; return rv6310; }
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
{ rt_int rv6315 = yr1050_SE();
y_use = F.yu; return rv6315; }
}
if ((((*(yR104 *)rt_nil_check(F.p2781))).f_kind == v801)) {
F.v6292 = yr2737_RescaleCode(F.p2780, F.p2782, F.p2781);
if ((((*(yR104 *)rt_nil_check(F.p2781))).f_lo == INT64_C(0))) {
{ rt_int rv6317 = F.v6292;
y_use = F.yu; return rv6317; }
}
yr1020_SB();
yr1031_SA(y_str("y_fix_range(", 12));
yr1038_ST(F.v6292);
yr1031_SA(y_str(", ", 2));
yr1038_ST(yr2486_LoText(F.p2781));
yr1031_SA(y_str(", ", 2));
yr1038_ST(yr2492_HiText(F.p2781));
yr1031_SA(y_str(")", 1));
{ rt_int rv6322 = yr1050_SE();
y_use = F.yu; return rv6322; }
}
{ rt_int rv6323 = F.p2780;
y_use = F.yu; return rv6323; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2787_StoreText(rt_int a_p2788, void * a_p2789, rt_int a_p2790, void * a_p2791, rt_int a_p2792) {
struct yf2793 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2788 = a_p2788;
F.p2789 = a_p2789;
F.p2790 = a_p2790;
F.p2791 = a_p2791;
F.p2792 = a_p2792;
yr2438_CheckType(F.p2792, F.p2789, F.p2791);
if (yr2380_Deep(F.p2789)) {
F.v6331 = yr1194_Fresh(y_str("t", 1));
yr1020_SB();
yr1031_SA(y_str("{ ", 2));
yr1038_ST(yr2405_CType(F.p2789));
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v6331);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(yr2779_Convert(F.p2790, F.p2789, F.p2791));
yr1031_SA(y_str("; y_store(", 10));
yr1038_ST(yr2411_DescOf(F.p2789));
yr1031_SA(y_str(", &", 3));
yr1038_ST(F.p2788);
yr1031_SA(y_str(", &", 3));
yr1038_ST(F.v6331);
yr1031_SA(y_str("); }", 4));
{ rt_int rv6340 = yr1050_SE();
y_use = F.yu; return rv6340; }
}
yr1020_SB();
yr1038_ST(F.p2788);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(yr2779_Convert(F.p2790, F.p2789, F.p2791));
yr1031_SA(y_str(";", 1));
{ rt_int rv6343 = yr1050_SE();
y_use = F.yu; return rv6343; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2797_Store(rt_int a_p2798, void * a_p2799, rt_int a_p2800, void * a_p2801, rt_int a_p2802) {
struct yf2803 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2798 = a_p2798;
F.p2799 = a_p2799;
F.p2800 = a_p2800;
F.p2801 = a_p2801;
F.p2802 = a_p2802;
yr1126_Emit(yr2787_StoreText(F.p2798, F.p2799, F.p2800, F.p2801, F.p2802));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2807_IsVariable(void * a_p2808) {
struct yf2809 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2808 = a_p2808;
if ((((*(yR99 *)rt_nil_check(F.p2808))).f_kind == v771)) {
F.v6353 = yr2232_Find(((*(yR99 *)rt_nil_check(F.p2808))).f_name);
if ((F.v6353 == ((void *)0))) {
{ rt_int rv6357 = 0;
y_use = F.yu; return rv6357; }
}
if (((*(yR119 *)rt_nil_check(F.v6353))).f_readonly) {
{ rt_int rv6359 = 0;
y_use = F.yu; return rv6359; }
}
{ rt_int rv6360 = (((*(yR119 *)rt_nil_check(yr2337_Real(F.v6353)))).f_kind == v855);
y_use = F.yu; return rv6360; }
}
if ((((*(yR99 *)rt_nil_check(F.p2808))).f_kind == v783)) {
{ rt_int rv6362 = (((*(yR99 *)rt_nil_check(F.p2808))).f_flag == INT64_C(0));
y_use = F.yu; return rv6362; }
}
if ((((*(yR99 *)rt_nil_check(F.p2808))).f_kind == v780)) {
{ rt_int rv6363 = yr2807_IsVariable(((*(yR99 *)rt_nil_check(F.p2808))).f_a);
y_use = F.yu; return rv6363; }
}
if ((((*(yR99 *)rt_nil_check(F.p2808))).f_kind == v777)) {
if ((!yr2807_IsVariable(((*(yR99 *)rt_nil_check(F.p2808))).f_a))) {
{ rt_int rv6365 = 0;
y_use = F.yu; return rv6365; }
}
F.v6355 = yr2660_FindField(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2808))).f_a))).f_rep, ((*(yR99 *)rt_nil_check(F.p2808))).f_name);
if ((F.v6355 == ((void *)0))) {
{ rt_int rv6367 = 0;
y_use = F.yu; return rv6367; }
}
{ rt_int rv6368 = (!((*(yR109 *)rt_nil_check(F.v6355))).f_isconst);
y_use = F.yu; return rv6368; }
}
{ rt_int rv6370 = 0;
y_use = F.yu; return rv6370; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2813_CheckPure(void * a_p2814) {
struct yf2815 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2814 = a_p2814;
F.v6374 = F.p2814;
if ((v1595 == ((void *)0))) {
y_use = F.yu; return;
}
if ((!((*(yR119 *)rt_nil_check(v1595))).f_func)) {
y_use = F.yu; return;
}
while ((((((*(yR99 *)rt_nil_check(F.v6374))).f_kind == v777)) || ((((*(yR99 *)rt_nil_check(F.v6374))).f_kind == v780)))) {
Y_TICK();
F.v6374 = ((*(yR99 *)rt_nil_check(F.v6374))).f_a;
}
if ((((*(yR99 *)rt_nil_check(F.v6374))).f_kind == v783)) {
if ((((*(yR99 *)rt_nil_check(F.v6374))).f_flag == INT64_C(0))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2814))).f_line, y_str("a FUNCTION does not assign to a dynamic variable (X.A.4)", 56));
}
y_use = F.yu; return;
}
if ((((*(yR99 *)rt_nil_check(F.v6374))).f_kind == v771)) {
F.v6376 = yr2232_Find(((*(yR99 *)rt_nil_check(F.v6374))).f_name);
if ((!(F.v6376 == ((void *)0)))) {
F.v6376 = yr2337_Real(F.v6376);
if ((((*(yR119 *)rt_nil_check(F.v6376))).f_level < ((*(yR119 *)rt_nil_check(v1595))).f_level)) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2814))).f_line, ((*(yR99 *)rt_nil_check(F.v6374))).f_name, y_str(" is not local: a FUNCTION assigns only to its locals (X.A.4)", 60));
}
}
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2819_LValue(void * a_p2820, rt_int * a_p2821, void * * a_p2822) {
struct yf2823 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2820 = a_p2820;
F.p2821_o = a_p2821;
F.p2822_o = a_p2822;
yr2846_Expr(F.p2820, ((void *)0), &F.p2821, &F.p2822);
if ((!yr2807_IsVariable(F.p2820))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2820))).f_line, y_str("a variable is needed here (IX.A.1)", 34));
}
(*F.p2821_o) = F.p2821;
(*F.p2822_o) = F.p2822;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2827_Paren(rt_int a_p2828) {
struct yf2829 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2828 = a_p2828;
yr1020_SB();
yr1031_SA(y_str("(", 1));
yr1038_ST(F.p2828);
yr1031_SA(y_str(")", 1));
{ rt_int rv6389 = yr1050_SE();
y_use = F.yu; return rv6389; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2833_Lit(void * a_p2834, rt_int a_p2835) {
struct yf2836 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2834 = a_p2834;
F.p2835 = a_p2835;
F.v6394 = yr2350_CopyRep(F.p2834);
yr2573_SetRange(F.v6394, F.p2835, F.p2835);
((*(yR104 *)rt_nil_check(F.v6394))).f_elem = F.p2834;
{ void * rv6395 = F.v6394;
y_use = F.yu; return rv6395; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2840_Qualifier(void * a_p2841) {
struct yf2842 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2841 = a_p2841;
F.v6399 = yr2337_Real(yr2244_Lookup(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2841))).f_d))).f_name, ((*(yR99 *)rt_nil_check(F.p2841))).f_line));
if ((((!(((*(yR119 *)rt_nil_check(F.v6399))).f_kind == v861))) && ((!(((*(yR119 *)rt_nil_check(F.v6399))).f_kind == v864))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2841))).f_line, ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2841))).f_d))).f_name, y_str(" is not a type", 14));
}
{ void * rv6401 = ((*(yR119 *)rt_nil_check(F.v6399))).f_rep;
y_use = F.yu; return rv6401; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2846_Expr(void * a_p2847, void * a_p2848, rt_int * a_p2849, void * * a_p2850) {
struct yf2851 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2847 = a_p2847;
F.p2848 = a_p2848;
F.p2849_o = a_p2849;
F.p2850_o = a_p2850;
F.v6408 = ((*(yR99 *)rt_nil_check(F.p2847))).f_kind;
v994 = ((*(yR99 *)rt_nil_check(F.p2847))).f_line;
if ((F.v6408 == v795)) {
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p2847))).f_a, F.p2848, &F.v6412, &F.p2850);
F.p2849 = yr2827_Paren(F.v6412);
} else if ((F.v6408 == v753)) {
F.p2850 = yr2833_Lit(v1336, ((*(yR99 *)rt_nil_check(F.p2847))).f_ival);
if ((!(((*(yR99 *)rt_nil_check(F.p2847))).f_d == ((void *)0)))) {
F.v6418 = yr2840_Qualifier(F.p2847);
if ((!(((*(yR104 *)rt_nil_check(F.v6418))).f_kind == v798))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2847))).f_line, y_str("an integer literal qualified by a type that is not INTEGER", 58));
}
((*(yR104 *)rt_nil_check(F.p2850))).f_tid = ((*(yR104 *)rt_nil_check(F.v6418))).f_tid;
((*(yR104 *)rt_nil_check(F.p2850))).f_tname = ((*(yR104 *)rt_nil_check(F.v6418))).f_tname;
}
yr1020_SB();
yr1031_SA(y_str("INT64_C(", 8));
yr1044_SI(((*(yR99 *)rt_nil_check(F.p2847))).f_ival);
yr1031_SA(y_str(")", 1));
F.p2849 = yr1050_SE();
} else if ((F.v6408 == v762)) {
F.v6418 = yr2674_AlphabetFor(F.p2847, F.p2848);
F.v6424 = yr2681_CharValue(F.v6418, ((*(yR99 *)rt_nil_check(F.p2847))).f_text, ((*(yR99 *)rt_nil_check(F.p2847))).f_line);
F.p2850 = yr2833_Lit(F.v6418, F.v6424);
yr1020_SB();
yr1044_SI(F.v6424);
F.p2849 = yr1050_SE();
} else if ((F.v6408 == v765)) {
F.v6418 = yr2674_AlphabetFor(F.p2847, F.p2848);
F.v6412 = yr2689_StringCodes(F.v6418, ((*(yR99 *)rt_nil_check(F.p2847))).f_text, &F.v6422, ((*(yR99 *)rt_nil_check(F.p2847))).f_line);
F.p2850 = yr2343_NewRep(v840, yr1055_T(y_str("string", 6)));
((*(yR104 *)rt_nil_check(F.p2850))).f_tname = yr1055_T(y_str("a string literal", 16));
((*(yR104 *)rt_nil_check(F.p2850))).f_elem = F.v6418;
((*(yR104 *)rt_nil_check(F.p2850))).f_nidx = INT64_C(1);
((*(yR104 *)rt_nil_check(F.p2850))).f_nlits = F.v6422;
yr1020_SB();
yr1031_SA(y_str("y_str(", 6));
yr1038_ST(F.v6412);
yr1031_SA(y_str(", ", 2));
yr1044_SI(F.v6422);
yr1031_SA(y_str(")", 1));
F.p2849 = yr1050_SE();
} else if ((F.v6408 == v759)) {
F.p2850 = v1348;
if ((!(((*(yR99 *)rt_nil_check(F.p2847))).f_d == ((void *)0)))) {
F.p2850 = yr2840_Qualifier(F.p2847);
}
F.p2849 = yr2827_Paren(((*(yR99 *)rt_nil_check(F.p2847))).f_text);
} else if ((F.v6408 == v756)) {
yr2756_FixLiteral(F.p2847, &F.p2849, &F.p2850);
if ((!(((*(yR99 *)rt_nil_check(F.p2847))).f_d == ((void *)0)))) {
F.v6418 = yr2840_Qualifier(F.p2847);
if ((!(((*(yR104 *)rt_nil_check(F.v6418))).f_kind == v801))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2847))).f_line, y_str("a fixed-point literal qualified by a type that is not FIXED", 59));
}
((*(yR104 *)rt_nil_check(F.p2850))).f_tid = ((*(yR104 *)rt_nil_check(F.v6418))).f_tid;
((*(yR104 *)rt_nil_check(F.p2850))).f_tname = ((*(yR104 *)rt_nil_check(F.v6418))).f_tname;
}
} else if ((F.v6408 == v768)) {
if ((((*(yR99 *)rt_nil_check(F.p2847))).f_d == ((void *)0))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2847))).f_line, y_str("NIL is qualified by the name of a pointer type (VI.B.4)", 55));
}
F.p2850 = yr2840_Qualifier(F.p2847);
if ((!(((*(yR104 *)rt_nil_check(F.p2850))).f_kind == v822))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2847))).f_line, y_str("NIL of a type that is not a pointer", 35));
}
F.p2849 = yr1055_T(y_str("((void *)0)", 11));
} else if ((F.v6408 == v771)) {
if ((!(((*(yR99 *)rt_nil_check(F.p2847))).f_d == ((void *)0)))) {
F.v6418 = yr2840_Qualifier(F.p2847);
F.v6410 = yr2297_FindLit(((*(yR99 *)rt_nil_check(F.p2847))).f_name, F.v6418);
if ((F.v6410 == ((void *)0))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2847))).f_line, ((*(yR99 *)rt_nil_check(F.p2847))).f_name, y_str(" is not a literal of that type", 30));
}
} else {
F.v6410 = yr2244_Lookup(((*(yR99 *)rt_nil_check(F.p2847))).f_name, ((*(yR99 *)rt_nil_check(F.p2847))).f_line);
}
yr2863_NameExpr(F.p2847, F.v6410, &F.p2849, &F.p2850);
} else if ((F.v6408 == v774)) {
yr3043_CallExpr(F.p2847, F.p2848, 0, &F.p2849, &F.p2850);
} else if ((F.v6408 == v777)) {
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p2847))).f_a, ((void *)0), &F.v6412, &F.v6418);
((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2847))).f_a))).f_rep = F.v6418;
if ((!(((*(yR104 *)rt_nil_check(F.v6418))).f_kind == v819))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2847))).f_line, ((*(yR99 *)rt_nil_check(F.p2847))).f_name, y_str(": a component of something that is not a record", 47));
}
if (((*(yR104 *)rt_nil_check(F.v6418))).f_opaque) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2847))).f_line, ((*(yR104 *)rt_nil_check(F.v6418))).f_tname, y_str(" is exported opaquely: its components are hidden (X.B.3)", 56));
}
F.v6420 = yr2660_FindField(F.v6418, ((*(yR99 *)rt_nil_check(F.p2847))).f_name);
if ((F.v6420 == ((void *)0))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2847))).f_line, ((*(yR99 *)rt_nil_check(F.p2847))).f_name, y_str(" is not a component of this record", 34));
}
F.p2850 = ((*(yR109 *)rt_nil_check(F.v6420))).f_rep;
if ((!(((*(yR109 *)rt_nil_check(F.v6420))).f_variant == INT64_C(0)))) {
yr3118_CheckVariantSelected(F.p2847, F.v6418, F.v6420);
F.v6414 = yr1194_Fresh(y_str("vr", 2));
yr1020_SB();
yr1031_SA(y_str("(*({ ", 5));
yr1038_ST(yr2405_CType(F.v6418));
yr1031_SA(y_str(" *", 2));
yr1038_ST(F.v6414);
yr1031_SA(y_str(" = &", 4));
yr1038_ST(yr2827_Paren(F.v6412));
yr1031_SA(y_str("; if (!(", 8));
yr1038_ST(yr2855_VariantTest(F.v6418, F.v6420, F.v6414));
yr1031_SA(y_str(")) rt_raise(RT_X_TAG); &", 24));
yr1038_ST(F.v6414);
yr1031_SA(y_str("->f_", 4));
yr1038_ST(((*(yR99 *)rt_nil_check(F.p2847))).f_name);
yr1031_SA(y_str("; }))", 5));
F.p2849 = yr1050_SE();
} else {
yr1020_SB();
yr1038_ST(yr2827_Paren(F.v6412));
yr1031_SA(y_str(".f_", 3));
yr1038_ST(((*(yR99 *)rt_nil_check(F.p2847))).f_name);
F.p2849 = yr1050_SE();
}
} else if ((((F.v6408 == v783)) && yr3005_UserOp(F.p2847, rt_range(v612, INT64_C(0), INT64_C(4000000)), ((*(yR99 *)rt_nil_check(F.p2847))).f_a, ((void *)0), &F.p2849, &F.p2850))) {
((*(yR99 *)rt_nil_check(F.p2847))).f_flag = INT64_C(1);
} else if ((F.v6408 == v783)) {
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p2847))).f_a, ((void *)0), &F.v6412, &F.v6418);
if ((!(((*(yR104 *)rt_nil_check(F.v6418))).f_kind == v822))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2847))).f_line, y_str("^ of something that is not a pointer", 36));
}
yr3261_NoteFreeDeref(((*(yR99 *)rt_nil_check(F.p2847))).f_a, ((*(yR104 *)rt_nil_check(F.v6418))).f_tid);
if ((((*(yR104 *)rt_nil_check(F.v6418))).f_elem == ((void *)0))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2847))).f_line, ((*(yR104 *)rt_nil_check(F.v6418))).f_forward, y_str(" is not declared", 16));
}
F.p2850 = ((*(yR104 *)rt_nil_check(F.v6418))).f_elem;
yr1020_SB();
yr1031_SA(y_str("(*(", 3));
yr1038_ST(yr2405_CType(F.p2850));
yr1031_SA(y_str(" *)rt_nil_check(", 16));
yr1038_ST(F.v6412);
yr1031_SA(y_str("))", 2));
F.p2849 = yr1050_SE();
} else if ((F.v6408 == v780)) {
yr2872_IndexExpr(F.p2847, &F.p2849, &F.p2850);
} else if ((((F.v6408 == v786)) && yr3005_UserOp(F.p2847, rt_range(v384, INT64_C(0), INT64_C(4000000)), ((*(yR99 *)rt_nil_check(F.p2847))).f_a, ((void *)0), &F.p2849, &F.p2850))) {
F.p2850 = F.p2850;
} else if ((F.v6408 == v786)) {
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p2847))).f_a, v1338, &F.v6412, &F.v6418);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p2847))).f_line, v1338, F.v6418);
F.p2850 = v1338;
yr1020_SB();
yr1031_SA(y_str("(!", 2));
yr1038_ST(F.v6412);
yr1031_SA(y_str(")", 1));
F.p2849 = yr1050_SE();
} else if ((F.v6408 == v789)) {
if ((!yr3005_UserOp(F.p2847, rt_range(v570, INT64_C(0), INT64_C(4000000)), ((*(yR99 *)rt_nil_check(F.p2847))).f_a, ((void *)0), &F.p2849, &F.p2850))) {
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p2847))).f_a, F.p2848, &F.v6412, &F.v6418);
yr2880_NegExpr(F.p2847, F.v6412, F.v6418, &F.p2849, &F.p2850);
}
} else if ((F.v6408 == v792)) {
yr2936_BinExpr(F.p2847, F.p2848, &F.p2849, &F.p2850);
} else {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2847))).f_line, y_str("not an expression", 17));
}
((*(yR99 *)rt_nil_check(F.p2847))).f_rep = F.p2850;
(*F.p2849_o) = F.p2849;
(*F.p2850_o) = F.p2850;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2855_VariantTest(void * a_p2856, void * a_p2857, rt_int a_p2858) {
struct yf2859 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2856 = a_p2856;
F.p2857 = a_p2857;
F.p2858 = a_p2858;
F.v6467 = ((*(yR109 *)rt_nil_check(F.p2857))).f_labels;
yr1020_SB();
yr1031_SA(y_str("0", 1));
while ((!(F.v6467 == ((void *)0)))) {
Y_TICK();
yr2698_Manifest(F.v6467, &F.v6469, &F.v6471);
yr1031_SA(y_str(" || ", 4));
yr1038_ST(F.p2858);
yr1031_SA(y_str("->f_", 4));
yr1038_ST(((*(yR109 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p2856))).f_selector))).f_name);
yr1031_SA(y_str(" == ", 4));
yr1044_SI(F.v6471);
F.v6467 = ((*(yR99 *)rt_nil_check(F.v6467))).f_next;
}
{ rt_int rv6476 = yr1050_SE();
y_use = F.yu; return rv6476; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2863_NameExpr(void * a_p2864, void * a_p2865, rt_int * a_p2866, void * * a_p2867) {
struct yf2868 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2864 = a_p2864;
F.p2865 = a_p2865;
F.p2866_o = a_p2866;
F.p2867_o = a_p2867;
F.v6483 = yr2337_Real(F.p2865);
if ((((*(yR119 *)rt_nil_check(F.v6483))).f_kind == v867)) {
if ((((((*(yR99 *)rt_nil_check(F.p2864))).f_d == ((void *)0))) && yr2291_Ambiguous(F.v6483))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2864))).f_line, ((*(yR99 *)rt_nil_check(F.p2864))).f_name, y_str(" names values of two types here: qualify it (VI.A.3)", 52));
}
F.p2867 = yr2833_Lit(((*(yR119 *)rt_nil_check(F.v6483))).f_rep, ((*(yR119 *)rt_nil_check(F.v6483))).f_mval);
yr1020_SB();
yr1044_SI(((*(yR119 *)rt_nil_check(F.v6483))).f_mval);
F.p2866 = yr1050_SE();
(*F.p2866_o) = F.p2866;
(*F.p2867_o) = F.p2867;
y_use = F.yu; return;
}
if ((((((*(yR119 *)rt_nil_check(F.v6483))).f_kind == v855)) || ((((*(yR119 *)rt_nil_check(F.v6483))).f_kind == v858)))) {
yr3255_NoteFree(F.v6483);
F.p2867 = ((*(yR119 *)rt_nil_check(F.v6483))).f_rep;
F.p2866 = yr2331_SymPath(F.v6483);
(*F.p2866_o) = F.p2866;
(*F.p2867_o) = F.p2867;
y_use = F.yu; return;
}
if ((((*(yR119 *)rt_nil_check(F.v6483))).f_kind == v870)) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2864))).f_line, ((*(yR99 *)rt_nil_check(F.p2864))).f_name, y_str(" is a routine: a call needs ()", 30));
}
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2864))).f_line, ((*(yR99 *)rt_nil_check(F.p2864))).f_name, y_str(" is not a value", 15));
(*F.p2866_o) = F.p2866;
(*F.p2867_o) = F.p2867;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2872_IndexExpr(void * a_p2873, rt_int * a_p2874, void * * a_p2875) {
struct yf2876 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2873 = a_p2873;
F.p2874_o = a_p2874;
F.p2875_o = a_p2875;
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p2873))).f_a, ((void *)0), &F.v6492, &F.v6498);
if ((!yr2368_IsArrayLike(F.v6498))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2873))).f_line, y_str("[] of something that is not an array", 36));
}
F.v6506 = yr1903_Count(((*(yR99 *)rt_nil_check(F.p2873))).f_b);
if ((!(F.v6506 == ((*(yR104 *)rt_nil_check(F.v6498))).f_nidx))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2873))).f_line, y_str("the number of subscripts is not the number of dimensions", 56));
}
F.p2875 = ((*(yR104 *)rt_nil_check(F.v6498))).f_elem;
F.v6508 = (((((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2873))).f_a))).f_kind == v771)) || ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2873))).f_a))).f_kind == v777))) || ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2873))).f_a))).f_kind == v780))) || ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p2873))).f_a))).f_kind == v783)));
if (F.v6508) {
F.v6496 = F.v6492;
} else {
F.v6496 = yr1194_Fresh(y_str("ya", 2));
}
yr1020_SB();
if ((!F.v6508)) {
yr1031_SA(y_str("(*({ yarr ", 10));
yr1038_ST(F.v6496);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(F.v6492);
yr1031_SA(y_str("; &", 3));
}
yr1031_SA(y_str("((", 2));
yr1038_ST(yr2405_CType(F.p2875));
yr1031_SA(y_str(" *)(", 4));
yr1038_ST(F.v6496);
yr1031_SA(y_str(").p)[y_ix", 9));
yr1044_SI(F.v6506);
yr1031_SA(y_str("(", 1));
yr1038_ST(F.v6496);
F.p2874 = yr1050_SE();
F.v6504 = ((*(yR99 *)rt_nil_check(F.p2873))).f_b;
F.v6502 = ((*(yR104 *)rt_nil_check(F.v6498))).f_idx;
while ((!(F.v6504 == ((void *)0)))) {
Y_TICK();
yr2846_Expr(F.v6504, F.v6502, &F.v6494, &F.v6500);
if ((((!(F.v6502 == ((void *)0)))) && ((((*(yR104 *)rt_nil_check(F.v6498))).f_kind == v816)))) {
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.v6504))).f_line, F.v6502, F.v6500);
} else if ((!((((((*(yR104 *)rt_nil_check(F.v6500))).f_kind == v798)) || yr2356_IsDiscrete(F.v6500))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.v6504))).f_line, y_str("a subscript is an integer or scalar value", 41));
}
yr1020_SB();
yr1038_ST(F.p2874);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v6494);
F.p2874 = yr1050_SE();
if ((!(F.v6502 == ((void *)0)))) {
F.v6502 = ((*(yR104 *)rt_nil_check(F.v6502))).f_link;
}
F.v6504 = ((*(yR99 *)rt_nil_check(F.v6504))).f_next;
}
yr1020_SB();
yr1038_ST(F.p2874);
yr1031_SA(y_str(")]", 2));
if ((!F.v6508)) {
yr1031_SA(y_str("; }))", 5));
}
F.p2874 = yr1050_SE();
(*F.p2874_o) = F.p2874;
(*F.p2875_o) = F.p2875;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2880_NegExpr(void * a_p2881, rt_int a_p2882, void * a_p2883, rt_int * a_p2884, void * * a_p2885) {
struct yf2886 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
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
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2890_Unbounded(void * a_p2891) {
struct yf2892 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2891 = a_p2891;
F.v6546 = yr2350_CopyRep(F.p2891);
((*(yR104 *)rt_nil_check(F.v6546))).f_lo = INT64_C(0);
((*(yR104 *)rt_nil_check(F.v6546))).f_hi = INT64_C(0);
((*(yR104 *)rt_nil_check(F.v6546))).f_hasm = 0;
{ void * rv6550 = F.v6546;
y_use = F.yu; return rv6550; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2896_Call2(yarr a_p2898, rt_int a_p2899, rt_int a_p2900) {
struct yf2901 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
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
{ rt_int rv6558 = yr1050_SE();
y_use = F.yu; return rv6558; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2905_Infix(rt_int a_p2906, yarr a_p2908, rt_int a_p2909) {
struct yf2910 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
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
{ rt_int rv6567 = yr1050_SE();
y_use = F.yu; return rv6567; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2914_EqCode(rt_int a_p2915, void * a_p2916, rt_int a_p2917, void * a_p2918) {
struct yf2919 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2915 = a_p2915;
F.p2916 = a_p2916;
F.p2917 = a_p2917;
F.p2918 = a_p2918;
F.v6578 = F.p2916;
if ((((*(yR104 *)rt_nil_check(F.p2916))).f_kind == v840)) {
F.v6578 = F.p2918;
}
if ((((((((*(yR104 *)rt_nil_check(F.v6578))).f_kind == v816)) || ((((*(yR104 *)rt_nil_check(F.v6578))).f_kind == v819))) || ((((*(yR104 *)rt_nil_check(F.v6578))).f_kind == v837))) || ((((*(yR104 *)rt_nil_check(F.v6578))).f_kind == v840)))) {
F.v6574 = yr1194_Fresh(y_str("e", 1));
F.v6576 = yr1194_Fresh(y_str("e", 1));
yr1020_SB();
yr1031_SA(y_str("({ ", 3));
yr1038_ST(yr2405_CType(F.v6578));
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v6574);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(F.p2915);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v6576);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(F.p2917);
yr1031_SA(y_str("; y_eq(", 7));
if ((((((*(yR104 *)rt_nil_check(F.v6578))).f_kind == v837)) || ((((*(yR104 *)rt_nil_check(F.v6578))).f_kind == v840)))) {
yr1031_SA(y_str("y_desc_vector(", 14));
yr1038_ST(yr2411_DescOf(((*(yR104 *)rt_nil_check(F.v6578))).f_elem));
yr1031_SA(y_str(")", 1));
} else {
yr1038_ST(yr2411_DescOf(F.v6578));
}
yr1031_SA(y_str(", &", 3));
yr1038_ST(F.v6574);
yr1031_SA(y_str(", &", 3));
yr1038_ST(F.v6576);
yr1031_SA(y_str("); })", 5));
{ rt_int rv6592 = yr1050_SE();
y_use = F.yu; return rv6592; }
}
if ((((*(yR104 *)rt_nil_check(F.v6578))).f_kind == v828)) {
{ rt_int rv6594 = yr2896_Call2(y_str("y_set_eq", 8), F.p2915, F.p2917);
y_use = F.yu; return rv6594; }
}
{ rt_int rv6596 = yr2905_Infix(F.p2915, y_str("==", 2), F.p2917);
y_use = F.yu; return rv6596; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2923_IsOrdered(void * a_p2924) {
struct yf2925 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2924 = a_p2924;
if ((((((((*(yR104 *)rt_nil_check(F.p2924))).f_kind == v798)) || ((((*(yR104 *)rt_nil_check(F.p2924))).f_kind == v804))) || ((((*(yR104 *)rt_nil_check(F.p2924))).f_kind == v801))) || ((((*(yR104 *)rt_nil_check(F.p2924))).f_kind == v813)))) {
{ rt_int rv6600 = 1;
y_use = F.yu; return rv6600; }
}
{ rt_int rv6601 = (((((*(yR104 *)rt_nil_check(F.p2924))).f_kind == v810)) && ((*(yR104 *)rt_nil_check(F.p2924))).f_ordered);
y_use = F.yu; return rv6601; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2929_FixToFloat(rt_int a_p2930, void * a_p2931) {
struct yf2932 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
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
{ rt_int rv6609 = yr1050_SE();
y_use = F.yu; return rv6609; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2936_BinExpr(void * a_p2937, void * a_p2938, rt_int * a_p2939, void * * a_p2940) {
struct yf2941 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2937 = a_p2937;
F.p2938 = a_p2938;
F.p2939_o = a_p2939;
F.p2940_o = a_p2940;
F.v6616 = ((*(yR99 *)rt_nil_check(F.p2937))).f_name;
if (yr3005_UserOp(F.p2937, F.v6616, ((*(yR99 *)rt_nil_check(F.p2937))).f_a, ((*(yR99 *)rt_nil_check(F.p2937))).f_b, &F.p2939, &F.p2940)) {
(*F.p2939_o) = F.p2939;
(*F.p2940_o) = F.p2940;
y_use = F.yu; return;
}
if ((((F.v6616 == v231)) || ((F.v6616 == v393)))) {
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p2937))).f_a, v1338, &F.v6618, &F.v6624);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p2937))).f_line, v1338, F.v6624);
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p2937))).f_b, v1338, &F.v6620, &F.v6626);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p2937))).f_line, v1338, F.v6626);
F.p2940 = v1338;
if ((F.v6616 == v231)) {
F.p2939 = yr2905_Infix(F.v6618, y_str("&&", 2), F.v6620);
} else {
F.p2939 = yr2905_Infix(F.v6618, y_str("||", 2), F.v6620);
}
(*F.p2939_o) = F.p2939;
(*F.p2940_o) = F.p2940;
y_use = F.yu; return;
}
if ((F.v6616 == v354)) {
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p2937))).f_b, ((void *)0), &F.v6620, &F.v6626);
if ((!(((*(yR104 *)rt_nil_check(F.v6626))).f_kind == v828))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2937))).f_line, y_str("IN needs a set on its right", 27));
}
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p2937))).f_a, ((*(yR104 *)rt_nil_check(F.v6626))).f_elem, &F.v6618, &F.v6624);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p2937))).f_line, ((*(yR104 *)rt_nil_check(F.v6626))).f_elem, F.v6624);
F.p2940 = v1338;
F.p2939 = yr2896_Call2(y_str("y_set_in", 8), F.v6618, F.v6620);
(*F.p2939_o) = F.p2939;
(*F.p2940_o) = F.p2940;
y_use = F.yu; return;
}
F.v6628 = ((void *)0);
if (((((((((!(F.p2938 == ((void *)0)))) && ((!(F.v6616 == v579)))) && ((!(F.v6616 == v564)))) && ((!(F.v6616 == v582)))) && ((!(F.v6616 == v534)))) && ((!(F.v6616 == v585)))) && ((!(F.v6616 == v537))))) {
F.v6628 = F.p2938;
}
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p2937))).f_a, F.v6628, &F.v6618, &F.v6624);
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p2937))).f_b, F.v6624, &F.v6620, &F.v6626);
if ((((F.v6616 == v579)) || ((F.v6616 == v564)))) {
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p2937))).f_line, F.v6624, F.v6626);
if (yr2399_NonAssignable(F.v6624)) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2937))).f_line, y_str("= and # are not defined for signals, files and semaphores, nor what holds them (VII.B)", 86));
}
if ((((*(yR104 *)rt_nil_check(F.v6624))).f_opaque && (((rt_div(((*(yR104 *)rt_nil_check(F.v6624))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2937))).f_line, ((*(yR104 *)rt_nil_check(F.v6624))).f_tname, y_str(" is opaque here: = is not exported (X.B.3)", 42));
}
F.p2940 = v1338;
if ((((*(yR104 *)rt_nil_check(F.v6624))).f_kind == v801)) {
yr2745_CommonScale(&F.v6618, F.v6624, &F.v6620, F.v6626, yr2890_Unbounded(F.v6624), ((*(yR99 *)rt_nil_check(F.p2937))).f_line);
}
F.p2939 = yr2914_EqCode(F.v6618, F.v6624, F.v6620, F.v6626);
if ((F.v6616 == v564)) {
yr1020_SB();
yr1031_SA(y_str("(!", 2));
yr1038_ST(F.p2939);
yr1031_SA(y_str(")", 1));
F.p2939 = yr1050_SE();
}
(*F.p2939_o) = F.p2939;
(*F.p2940_o) = F.p2940;
y_use = F.yu; return;
}
if ((((((F.v6616 == v582)) || ((F.v6616 == v534))) || ((F.v6616 == v585))) || ((F.v6616 == v537)))) {
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p2937))).f_line, F.v6624, F.v6626);
if ((!yr2923_IsOrdered(F.v6624))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2937))).f_line, y_str("< <= > >= apply to ordered values (VIII.A.1)", 44));
}
F.p2940 = v1338;
if ((((*(yR104 *)rt_nil_check(F.v6624))).f_kind == v801)) {
yr2745_CommonScale(&F.v6618, F.v6624, &F.v6620, F.v6626, yr2890_Unbounded(F.v6624), ((*(yR99 *)rt_nil_check(F.p2937))).f_line);
}
if ((F.v6616 == v582)) {
F.p2939 = yr2905_Infix(F.v6618, y_str("<", 1), F.v6620);
} else if ((F.v6616 == v534)) {
F.p2939 = yr2905_Infix(F.v6618, y_str("<=", 2), F.v6620);
} else if ((F.v6616 == v585)) {
F.p2939 = yr2905_Infix(F.v6618, y_str(">", 1), F.v6620);
} else {
F.p2939 = yr2905_Infix(F.v6618, y_str(">=", 2), F.v6620);
}
(*F.p2939_o) = F.p2939;
(*F.p2940_o) = F.p2940;
y_use = F.yu; return;
}
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p2937))).f_line, F.v6624, F.v6626);
F.v6630 = ((*(yR104 *)rt_nil_check(F.v6624))).f_kind;
if ((((*(yR104 *)rt_nil_check(F.v6624))).f_kind == v840)) {
F.v6630 = ((*(yR104 *)rt_nil_check(F.v6626))).f_kind;
}
if ((F.v6616 == v483)) {
if ((F.v6630 == v807)) {
F.p2940 = v1338;
F.p2939 = yr2905_Infix(F.v6618, y_str("!=", 2), F.v6620);
} else if ((F.v6630 == v828)) {
F.p2940 = F.v6624;
F.p2939 = yr2896_Call2(y_str("y_set_xor", 9), F.v6618, F.v6620);
} else {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2937))).f_line, y_str("XOR applies to BOOLEAN values and sets", 38));
}
(*F.p2939_o) = F.p2939;
(*F.p2940_o) = F.p2940;
y_use = F.yu; return;
}
if ((F.v6630 == v828)) {
F.p2940 = F.v6624;
if ((F.v6616 == v567)) {
F.p2939 = yr2896_Call2(y_str("y_set_union", 11), F.v6618, F.v6620);
} else if ((F.v6616 == v570)) {
F.p2939 = yr2896_Call2(y_str("y_set_diff", 10), F.v6618, F.v6620);
} else if ((F.v6616 == v573)) {
F.p2939 = yr2896_Call2(y_str("y_set_inter", 11), F.v6618, F.v6620);
} else {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p2937))).f_line, y_str("this operator does not apply to sets", 36));
}
(*F.p2939_o) = F.p2939;
(*F.p2940_o) = F.p2940;
y_use = F.yu; return;
}
if ((F.v6630 == v798)) {
F.p2940 = yr2890_Unbounded(F.v6624);
if ((F.v6616 == v567)) {
F.p2939 = yr2896_Call2(y_str("rt_add", 6), F.v6618, F.v6620);
} else if ((F.v6616 == v570)) {
F.p2939 = yr2896_Call2(y_str("rt_sub", 6), F.v6618, F.v6620);
} else if ((F.v6616 == v573)) {
F.p2939 = yr2896_Call2(y_str("rt_mul", 6), F.v6618, F.v6620);
} else if ((F.v6616 == v270)) {
F.p2939 = yr2896_Call2(y_str("rt_div", 6), F.v6618, F.v6620);
} else if ((F.v6616 == v372)) {
F.p2939 = yr2896_Call2(y_str("rt_mod", 6), F.v6618, F.v6620);
} else if ((F.v6616 == v576)) {
F.p2940 = v1348;
yr1020_SB();
yr1031_SA(y_str("rt_fdiv((double)(", 17));
yr1038_ST(F.v6618);
yr1031_SA(y_str("), (double)(", 12));
yr1038_ST(F.v6620);
yr1031_SA(y_str("))", 2));
F.p2939 = yr1050_SE();
} else {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2937))).f_line, F.v6616, y_str(" is a free operator: no definition of it is visible (VIII.A)", 60));
}
(*F.p2939_o) = F.p2939;
(*F.p2940_o) = F.p2940;
y_use = F.yu; return;
}
if ((F.v6630 == v804)) {
F.p2940 = yr2890_Unbounded(F.v6624);
if ((F.v6616 == v567)) {
F.p2939 = yr2773_FloatChk(yr2905_Infix(F.v6618, y_str("+", 1), F.v6620));
} else if ((F.v6616 == v570)) {
F.p2939 = yr2773_FloatChk(yr2905_Infix(F.v6618, y_str("-", 1), F.v6620));
} else if ((F.v6616 == v573)) {
F.p2939 = yr2773_FloatChk(yr2905_Infix(F.v6618, y_str("*", 1), F.v6620));
} else if ((F.v6616 == v576)) {
F.p2940 = v1348;
F.p2939 = yr2773_FloatChk(yr2896_Call2(y_str("rt_fdiv", 7), F.v6618, F.v6620));
} else {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2937))).f_line, F.v6616, y_str(" does not apply to these numbers", 32));
}
(*F.p2939_o) = F.p2939;
(*F.p2940_o) = F.p2940;
y_use = F.yu; return;
}
if ((F.v6630 == v801)) {
F.p2940 = yr2890_Unbounded(F.v6624);
if ((((F.v6616 == v567)) || ((F.v6616 == v570)))) {
yr2745_CommonScale(&F.v6618, F.v6624, &F.v6620, F.v6626, F.p2940, ((*(yR99 *)rt_nil_check(F.p2937))).f_line);
if ((F.v6616 == v567)) {
F.p2939 = yr2896_Call2(y_str("y_fix_add", 9), F.v6618, F.v6620);
} else {
F.p2939 = yr2896_Call2(y_str("y_fix_sub", 9), F.v6618, F.v6620);
}
} else if ((F.v6616 == v573)) {
yr2552_SetScale(F.p2940, yr2519_MulChk(((*(yR104 *)rt_nil_check(F.v6624))).f_fsn, ((*(yR104 *)rt_nil_check(F.v6626))).f_fsn, ((*(yR99 *)rt_nil_check(F.p2937))).f_line), yr2519_MulChk(((*(yR104 *)rt_nil_check(F.v6624))).f_fsd, ((*(yR104 *)rt_nil_check(F.v6626))).f_fsd, ((*(yR99 *)rt_nil_check(F.p2937))).f_line));
F.p2939 = yr2896_Call2(y_str("y_fix_mul", 9), F.v6618, F.v6620);
} else if ((F.v6616 == v576)) {
F.p2940 = v1348;
F.p2939 = yr2773_FloatChk(yr2896_Call2(y_str("rt_fdiv", 7), yr2929_FixToFloat(F.v6618, F.v6624), yr2929_FixToFloat(F.v6620, F.v6626)));
} else {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2937))).f_line, F.v6616, y_str(" does not apply to these numbers", 32));
}
(*F.p2939_o) = F.p2939;
(*F.p2940_o) = F.p2940;
y_use = F.yu; return;
}
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p2937))).f_line, F.v6616, y_str(" does not apply to these values", 31));
(*F.p2939_o) = F.p2939;
(*F.p2940_o) = F.p2940;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2945_Fits(void * a_p2946, void * a_p2947) {
struct yf2948 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2946 = a_p2946;
F.p2947 = a_p2947;
if ((((*(yR104 *)rt_nil_check(F.p2946))).f_kind == v837)) {
if ((!yr2368_IsArrayLike(F.p2947))) {
{ rt_int rv6678 = 0;
y_use = F.yu; return rv6678; }
}
if ((!(((*(yR104 *)rt_nil_check(F.p2947))).f_nidx == ((*(yR104 *)rt_nil_check(F.p2946))).f_nidx))) {
{ rt_int rv6680 = 0;
y_use = F.yu; return rv6680; }
}
{ rt_int rv6681 = yr2423_SameType(((*(yR104 *)rt_nil_check(F.p2946))).f_elem, ((*(yR104 *)rt_nil_check(F.p2947))).f_elem);
y_use = F.yu; return rv6681; }
}
if ((((*(yR104 *)rt_nil_check(F.p2946))).f_kind == v849)) {
{ rt_int rv6683 = 1;
y_use = F.yu; return rv6683; }
}
{ rt_int rv6684 = yr2423_SameType(F.p2946, F.p2947);
y_use = F.yu; return rv6684; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2952_Choose(void * a_p2953, rt_int a_p2954, rt_int a_p2955) {
struct yf2956 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2953 = a_p2953;
F.p2954 = a_p2954;
F.p2955 = a_p2955;
F.v6690 = F.p2953;
while ((!(F.v6690 == ((void *)0)))) {
Y_TICK();
if ((((*(yR119 *)rt_nil_check(F.v6690))).f_nparams == F.p2955)) {
F.v6694 = 1;
F.v6692 = ((*(yR119 *)rt_nil_check(F.v6690))).f_params;
F.v6696 = INT64_C(1);
while ((!(F.v6692 == ((void *)0)))) {
Y_TICK();
if ((!yr2945_Fits(((*(yR114 *)rt_nil_check(F.v6692))).f_rep, ((void * *)(v1493).p)[y_ix1(v1493, rt_add(F.p2954, F.v6696))]))) {
F.v6694 = 0;
}
F.v6696 = rt_range(rt_add(F.v6696, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6692 = ((*(yR114 *)rt_nil_check(F.v6692))).f_next;
}
if (F.v6694) {
{ void * rv6703 = F.v6690;
y_use = F.yu; return rv6703; }
}
}
F.v6690 = ((*(yR119 *)rt_nil_check(F.v6690))).f_alt;
}
{ void * rv6704 = ((void *)0);
y_use = F.yu; return rv6704; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2960_HidesStandard(void * a_p2961) {
struct yf2962 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2961 = a_p2961;
F.v6708 = F.p2961;
while ((!(F.v6708 == ((void *)0)))) {
Y_TICK();
if ((((!(((*(yR119 *)rt_nil_check(F.v6708))).f_decl == ((void *)0)))) && ((((*(yR99 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v6708))).f_decl))).f_ival == INT64_C(0))))) {
{ rt_int rv6711 = 1;
y_use = F.yu; return rv6711; }
}
F.v6708 = ((*(yR119 *)rt_nil_check(F.v6708))).f_alt;
}
{ rt_int rv6713 = 0;
y_use = F.yu; return rv6713; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2966_CompileArgs(void * a_p2967, void * a_p2968, rt_int * a_p2969, rt_int * a_p2970) {
struct yf2971 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2967 = a_p2967;
F.p2968 = a_p2968;
F.p2969_o = a_p2969;
F.p2970_o = a_p2970;
F.v6720 = F.p2967;
F.v6722 = ((void *)0);
F.p2969 = v1506;
F.p2970 = INT64_C(0);
if ((!(F.p2968 == ((void *)0)))) {
F.v6722 = ((*(yR119 *)rt_nil_check(F.p2968))).f_params;
}
while ((!(F.v6720 == ((void *)0)))) {
Y_TICK();
if ((v1506 >= INT64_C(4000))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.v6720))).f_line, y_str("calls nested too deeply", 23));
}
F.p2970 = rt_range(rt_add(F.p2970, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1506 = rt_range(rt_add(F.p2969, F.p2970), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6724 = ((void *)0);
if ((!(F.v6722 == ((void *)0)))) {
F.v6724 = ((*(yR114 *)rt_nil_check(F.v6722))).f_rep;
F.v6722 = ((*(yR114 *)rt_nil_check(F.v6722))).f_next;
}
yr2846_Expr(F.v6720, F.v6724, &((rt_int *)(v1482).p)[y_ix1(v1482, rt_add(F.p2969, F.p2970))], &((void * *)(v1493).p)[y_ix1(v1493, rt_add(F.p2969, F.p2970))]);
((void * *)(v1504).p)[y_ix1(v1504, rt_add(F.p2969, F.p2970))] = F.v6720;
F.v6720 = ((*(yR99 *)rt_nil_check(F.v6720))).f_next;
}
(*F.p2969_o) = F.p2969;
(*F.p2970_o) = F.p2970;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2975_CheckUnresolved(void * a_p2976, void * a_p2977, rt_int a_p2978) {
struct yf2979 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2976 = a_p2976;
F.p2977 = a_p2977;
F.p2978 = a_p2978;
if ((((!(((*(yR104 *)rt_nil_check(F.p2976))).f_kind == v837))) || ((!(((*(yR104 *)rt_nil_check(F.p2977))).f_kind == v816))))) {
y_use = F.yu; return;
}
F.v6739 = ((*(yR104 *)rt_nil_check(F.p2977))).f_idx;
while ((!(F.v6739 == ((void *)0)))) {
Y_TICK();
if ((!(((*(yR104 *)rt_nil_check(F.v6739))).f_kind == v798))) {
yr1172_FailS(F.p2978, y_str("a length-unresolved array formal takes arrays with integer indices only (X.A.3)", 79));
}
F.v6739 = ((*(yR104 *)rt_nil_check(F.v6739))).f_link;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2983_SameAsFormal(void * a_p2984, void * a_p2985) {
struct yf2986 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2984 = a_p2984;
F.p2985 = a_p2985;
if ((((*(yR104 *)rt_nil_check(F.p2984))).f_kind == v849)) {
{ rt_int rv6745 = 1;
y_use = F.yu; return rv6745; }
}
if ((((*(yR104 *)rt_nil_check(F.p2984))).f_kind == v837)) {
if ((!((((((*(yR104 *)rt_nil_check(F.p2985))).f_kind == v816)) || ((((*(yR104 *)rt_nil_check(F.p2985))).f_kind == v837)))))) {
{ rt_int rv6747 = 0;
y_use = F.yu; return rv6747; }
}
{ rt_int rv6748 = yr2465_Identical(((*(yR104 *)rt_nil_check(F.p2984))).f_elem, ((*(yR104 *)rt_nil_check(F.p2985))).f_elem);
y_use = F.yu; return rv6748; }
}
{ rt_int rv6749 = yr2465_Identical(F.p2984, F.p2985);
y_use = F.yu; return rv6749; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2990_CallCode(void * a_p2991, rt_int a_p2992, rt_int a_p2993, rt_int a_p2994) {
struct yf2995 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2991 = a_p2991;
F.p2992 = a_p2992;
F.p2993 = a_p2993;
F.p2994 = a_p2994;
F.v6756 = ((*(yR119 *)rt_nil_check(F.p2991))).f_params;
F.v6758 = rt_range(rt_add(F.p2992, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6762 = 1;
F.v6765 = INT64_C(0);
F.v6768 = INT64_C(0);
F.v6771 = INT64_C(0);
F.v6774 = INT64_C(0);
F.v6777 = INT64_C(0);
if ((!(F.p2993 == ((*(yR119 *)rt_nil_check(F.p2991))).f_nparams))) {
yr1180_FailN(F.p2994, ((*(yR119 *)rt_nil_check(F.p2991))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
yr3282_CheckActuals(F.p2991, F.p2992, F.p2994);
yr1020_SB();
yr1038_ST(((*(yR119 *)rt_nil_check(F.p2991))).f_cname);
yr1031_SA(y_str("(", 1));
if ((((*(yR119 *)rt_nil_check(F.p2991))).f_level > INT64_C(1))) {
yr1038_ST(yr2318_FramePtr(rt_range(rt_sub(((*(yR119 *)rt_nil_check(F.p2991))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v6762 = 0;
}
while ((!(F.v6756 == ((void *)0)))) {
Y_TICK();
if ((!F.v6762)) {
yr1031_SA(y_str(", ", 2));
}
F.v6762 = 0;
if ((!yr2945_Fits(((*(yR114 *)rt_nil_check(F.v6756))).f_rep, ((void * *)(v1493).p)[y_ix1(v1493, F.v6758)]))) {
v921 = 0;
yr2430_TypeClash(((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v6758)]))).f_line, ((*(yR114 *)rt_nil_check(F.v6756))).f_rep, ((void * *)(v1493).p)[y_ix1(v1493, F.v6758)]);
}
yr2975_CheckUnresolved(((*(yR114 *)rt_nil_check(F.v6756))).f_rep, ((void * *)(v1493).p)[y_ix1(v1493, F.v6758)], ((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v6758)]))).f_line);
if ((((*(yR114 *)rt_nil_check(F.v6756))).f_cls == v891)) {
yr1038_ST(yr2779_Convert(((rt_int *)(v1482).p)[y_ix1(v1482, F.v6758)], ((*(yR114 *)rt_nil_check(F.v6756))).f_rep, ((void * *)(v1493).p)[y_ix1(v1493, F.v6758)]));
} else {
if ((!yr2807_IsVariable(((void * *)(v1504).p)[y_ix1(v1504, F.v6758)]))) {
v921 = 0;
yr1180_FailN(((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v6758)]))).f_line, ((*(yR114 *)rt_nil_check(F.v6756))).f_name, y_str(": the actual of a VAR or OUT parameter must be a variable", 57));
}
yr2813_CheckPure(((void * *)(v1504).p)[y_ix1(v1504, F.v6758)]);
yr3249_NoteWrite(((void * *)(v1504).p)[y_ix1(v1504, F.v6758)]);
if (yr2983_SameAsFormal(((*(yR114 *)rt_nil_check(F.v6756))).f_rep, ((void * *)(v1493).p)[y_ix1(v1493, F.v6758)])) {
yr1031_SA(y_str("&", 1));
yr1038_ST(((rt_int *)(v1482).p)[y_ix1(v1482, F.v6758)]);
} else if ((((*(yR114 *)rt_nil_check(F.v6756))).f_cls == v897)) {
yr1180_FailN(((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v6758)]))).f_line, ((*(yR114 *)rt_nil_check(F.v6756))).f_name, y_str(": a VAR actual has the representation of its formal (VII.G, X.A.2)", 66));
} else {
F.v6771 = yr1194_Fresh(y_str("yo", 2));
F.v6765 = yr3194_Join(F.v6765, yr3194_Join(yr2405_CType(((*(yR114 *)rt_nil_check(F.v6756))).f_rep), yr1055_T(y_str(" ", 1)), F.v6771), yr1055_T(y_str(";", 1)));
if ((((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v6756))).f_rep))).f_kind == v837)) {
F.v6765 = yr3194_Join(F.v6765, yr3194_Join(yr1055_T(y_str(" ", 1)), F.v6771, yr1055_T(y_str(" = y_like(", 10))), yr3194_Join(((rt_int *)(v1482).p)[y_ix1(v1482, F.v6758)], yr3194_Join(yr1055_T(y_str(", ", 2)), yr2999_Num(((*(yR104 *)rt_nil_check(((void * *)(v1493).p)[y_ix1(v1493, F.v6758)]))).f_nidx), yr1055_T(y_str(", ", 2))), yr3194_Join(yr2411_DescOf(((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v6756))).f_rep))).f_elem), yr1055_T(y_str(");", 2)), INT64_C(0))));
} else if (yr2380_Deep(((*(yR114 *)rt_nil_check(F.v6756))).f_rep)) {
F.v6765 = yr3194_Join(F.v6765, yr3194_Join(yr1055_T(y_str(" y_init(", 8)), yr2411_DescOf(((*(yR114 *)rt_nil_check(F.v6756))).f_rep), yr1055_T(y_str(", &", 3))), yr3194_Join(F.v6771, yr1055_T(y_str(");", 2)), INT64_C(0)));
}
F.v6768 = yr3194_Join(F.v6768, yr1055_T(y_str(" ", 1)), yr2787_StoreText(((rt_int *)(v1482).p)[y_ix1(v1482, F.v6758)], ((void * *)(v1493).p)[y_ix1(v1493, F.v6758)], F.v6771, ((*(yR114 *)rt_nil_check(F.v6756))).f_rep, ((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v6758)]))).f_line));
yr1031_SA(y_str("&", 1));
yr1038_ST(F.v6771);
}
}
F.v6758 = rt_range(rt_add(F.v6758, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6756 = ((*(yR114 *)rt_nil_check(F.v6756))).f_next;
}
yr1031_SA(y_str(")", 1));
v1506 = F.p2992;
F.v6774 = yr1050_SE();
if ((F.v6765 == INT64_C(0))) {
{ rt_int rv6811 = F.v6774;
y_use = F.yu; return rv6811; }
}
yr1020_SB();
yr1031_SA(y_str("({ ", 3));
yr1038_ST(F.v6765);
if ((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.p2991))).f_ret))).f_kind == v846)) {
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v6774);
yr1031_SA(y_str(";", 1));
yr1038_ST(F.v6768);
yr1031_SA(y_str(" })", 3));
} else {
F.v6777 = yr1194_Fresh(y_str("yv", 2));
yr1031_SA(y_str(" ", 1));
yr1038_ST(yr2405_CType(((*(yR119 *)rt_nil_check(F.p2991))).f_ret));
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v6777);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(F.v6774);
yr1031_SA(y_str(";", 1));
yr1038_ST(F.v6768);
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v6777);
yr1031_SA(y_str("; })", 4));
}
{ rt_int rv6823 = yr1050_SE();
y_use = F.yu; return rv6823; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2999_Num(rt_int a_p3000) {
struct yf3001 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3000 = a_p3000;
yr1020_SB();
yr1044_SI(F.p3000);
{ rt_int rv6826 = yr1050_SE();
y_use = F.yu; return rv6826; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3005_UserOp(void * a_p3006, rt_int a_p3007, void * a_p3008, void * a_p3009, rt_int * a_p3010, void * * a_p3011) {
struct yf3012 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3006 = a_p3006;
F.p3007 = a_p3007;
F.p3008 = a_p3008;
F.p3009 = a_p3009;
F.p3010_o = a_p3010;
F.p3011_o = a_p3011;
F.v6835 = yr2232_Find(F.p3007);
if ((F.v6835 == ((void *)0))) {
{ rt_int rv6843 = 0;
(*F.p3010_o) = F.p3010;
(*F.p3011_o) = F.p3011;
y_use = F.yu; return rv6843; }
}
F.v6835 = yr2337_Real(F.v6835);
if ((!(((*(yR119 *)rt_nil_check(F.v6835))).f_kind == v870))) {
{ rt_int rv6845 = 0;
(*F.p3010_o) = F.p3010;
(*F.p3011_o) = F.p3011;
y_use = F.yu; return rv6845; }
}
((*(yR99 *)rt_nil_check(F.p3008))).f_next = F.p3009;
if ((!(F.p3009 == ((void *)0)))) {
((*(yR99 *)rt_nil_check(F.p3009))).f_next = ((void *)0);
}
yr2966_CompileArgs(F.p3008, ((void *)0), &F.v6839, &F.v6841);
F.v6837 = yr2952_Choose(F.v6835, F.v6839, F.v6841);
if ((F.v6837 == ((void *)0))) {
v1506 = F.v6839;
if (yr2960_HidesStandard(F.v6835)) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3006))).f_line, F.p3007, y_str(": no definition takes operands of these types", 45));
}
{ rt_int rv6848 = 0;
(*F.p3010_o) = F.p3010;
(*F.p3011_o) = F.p3011;
y_use = F.yu; return rv6848; }
}
yr3016_NoteCall(F.v6837, ((*(yR99 *)rt_nil_check(F.p3006))).f_line);
F.p3010 = yr2990_CallCode(F.v6837, F.v6839, F.v6841, ((*(yR99 *)rt_nil_check(F.p3006))).f_line);
F.p3011 = ((*(yR119 *)rt_nil_check(F.v6837))).f_ret;
{ rt_int rv6850 = 1;
(*F.p3010_o) = F.p3010;
(*F.p3011_o) = F.p3011;
y_use = F.yu; return rv6850; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3016_NoteCall(void * a_p3017, rt_int a_p3018) {
struct yf3019 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3017 = a_p3017;
F.p3018 = a_p3018;
F.v6857 = F.p3017;
if ((((((*(yR119 *)rt_nil_check(F.v6857))).f_kind == v870)) && ((!(((*(yR119 *)rt_nil_check(F.v6857))).f_target == ((void *)0)))))) {
F.v6857 = ((*(yR119 *)rt_nil_check(F.v6857))).f_target;
}
if ((!((*(yR119 *)rt_nil_check(F.v6857))).f_func)) {
v1627 = rt_range(rt_add(v1627, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((v1595 == ((void *)0))) {
y_use = F.yu; return;
}
F.v6855 = yr1888_NewNode(v663, F.p3018);
((*(yR99 *)rt_nil_check(F.v6855))).f_sym = F.v6857;
((*(yR99 *)rt_nil_check(F.v6855))).f_next = ((*(yR119 *)rt_nil_check(v1595))).f_calls;
((*(yR119 *)rt_nil_check(v1595))).f_calls = F.v6855;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3023_UserAssign(rt_int a_p3024, void * a_p3025, rt_int a_p3026, void * a_p3027, rt_int a_p3028) {
struct yf3029 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3024 = a_p3024;
F.p3025 = a_p3025;
F.p3026 = a_p3026;
F.p3027 = a_p3027;
F.p3028 = a_p3028;
F.v6867 = yr2232_Find(rt_range(v525, INT64_C(0), INT64_C(4000000)));
if ((F.v6867 == ((void *)0))) {
{ rt_int rv6877 = INT64_C(0);
y_use = F.yu; return rv6877; }
}
F.v6867 = yr2337_Real(F.v6867);
if ((!(((*(yR119 *)rt_nil_check(F.v6867))).f_kind == v870))) {
{ rt_int rv6879 = INT64_C(0);
y_use = F.yu; return rv6879; }
}
F.v6869 = F.v6867;
while ((!(F.v6869 == ((void *)0)))) {
Y_TICK();
if ((((*(yR119 *)rt_nil_check(F.v6869))).f_nparams == INT64_C(2))) {
F.v6871 = ((*(yR119 *)rt_nil_check(F.v6869))).f_params;
F.v6873 = ((*(yR114 *)rt_nil_check(F.v6871))).f_next;
if ((((((!(((*(yR114 *)rt_nil_check(F.v6871))).f_cls == v891))) && ((((*(yR114 *)rt_nil_check(F.v6873))).f_cls == v891))) && yr2423_SameType(((*(yR114 *)rt_nil_check(F.v6871))).f_rep, F.p3025)) && yr2423_SameType(((*(yR114 *)rt_nil_check(F.v6873))).f_rep, F.p3027))) {
if ((v1595 == F.v6869)) {
{ rt_int rv6882 = INT64_C(0);
y_use = F.yu; return rv6882; }
}
yr3016_NoteCall(F.v6869, F.p3028);
yr1020_SB();
if (yr2465_Identical(((*(yR114 *)rt_nil_check(F.v6871))).f_rep, F.p3025)) {
yr1038_ST(((*(yR119 *)rt_nil_check(F.v6869))).f_cname);
yr1031_SA(y_str("(", 1));
if ((((*(yR119 *)rt_nil_check(F.v6869))).f_level > INT64_C(1))) {
yr1038_ST(yr2318_FramePtr(rt_range(rt_sub(((*(yR119 *)rt_nil_check(F.v6869))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr1031_SA(y_str(", ", 2));
}
yr1031_SA(y_str("&", 1));
yr1038_ST(F.p3024);
} else {
F.v6875 = yr1194_Fresh(y_str("yo", 2));
yr1031_SA(y_str("{ ", 2));
yr1038_ST(yr2405_CType(((*(yR114 *)rt_nil_check(F.v6871))).f_rep));
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v6875);
yr1031_SA(y_str(";", 1));
if (yr2380_Deep(((*(yR114 *)rt_nil_check(F.v6871))).f_rep)) {
yr1031_SA(y_str(" y_init(", 8));
yr1038_ST(yr2411_DescOf(((*(yR114 *)rt_nil_check(F.v6871))).f_rep));
yr1031_SA(y_str(", &", 3));
yr1038_ST(F.v6875);
yr1031_SA(y_str(");", 2));
}
yr1031_SA(y_str(" ", 1));
yr1038_ST(((*(yR119 *)rt_nil_check(F.v6869))).f_cname);
yr1031_SA(y_str("(", 1));
if ((((*(yR119 *)rt_nil_check(F.v6869))).f_level > INT64_C(1))) {
yr1038_ST(yr2318_FramePtr(rt_range(rt_sub(((*(yR119 *)rt_nil_check(F.v6869))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr1031_SA(y_str(", ", 2));
}
yr1031_SA(y_str("&", 1));
yr1038_ST(F.v6875);
}
yr1031_SA(y_str(", ", 2));
yr1038_ST(yr2779_Convert(F.p3026, ((*(yR114 *)rt_nil_check(F.v6873))).f_rep, F.p3027));
yr1031_SA(y_str(");", 2));
if ((!yr2465_Identical(((*(yR114 *)rt_nil_check(F.v6871))).f_rep, F.p3025))) {
yr1031_SA(y_str(" ", 1));
yr1038_ST(yr2787_StoreText(F.p3024, F.p3025, F.v6875, ((*(yR114 *)rt_nil_check(F.v6871))).f_rep, F.p3028));
yr1031_SA(y_str(" }", 2));
}
{ rt_int rv6907 = yr1050_SE();
y_use = F.yu; return rv6907; }
}
}
F.v6869 = ((*(yR119 *)rt_nil_check(F.v6869))).f_alt;
}
{ rt_int rv6909 = INT64_C(0);
y_use = F.yu; return rv6909; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3033_Assign(rt_int a_p3034, void * a_p3035, rt_int a_p3036, void * a_p3037, rt_int a_p3038) {
struct yf3039 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3034 = a_p3034;
F.p3035 = a_p3035;
F.p3036 = a_p3036;
F.p3037 = a_p3037;
F.p3038 = a_p3038;
F.v6917 = yr3023_UserAssign(F.p3034, F.p3035, F.p3036, F.p3037, F.p3038);
if ((!(F.v6917 == INT64_C(0)))) {
yr1126_Emit(F.v6917);
} else {
yr2797_Store(F.p3034, F.p3035, F.p3036, F.p3037, F.p3038);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3043_CallExpr(void * a_p3044, void * a_p3045, rt_int a_p3046, rt_int * a_p3047, void * * a_p3048) {
struct yf3049 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3044 = a_p3044;
F.p3045 = a_p3045;
F.p3046 = a_p3046;
F.p3047_o = a_p3047;
F.p3048_o = a_p3048;
F.v6926 = yr2337_Real(yr2244_Lookup(((*(yR99 *)rt_nil_check(F.p3044))).f_name, ((*(yR99 *)rt_nil_check(F.p3044))).f_line));
if ((((*(yR119 *)rt_nil_check(F.v6926))).f_kind == v885)) {
yr3649_StdCall(((*(yR119 *)rt_nil_check(F.v6926))).f_mval, F.p3044, F.p3046, &F.p3047, &F.p3048);
(*F.p3047_o) = F.p3047;
(*F.p3048_o) = F.p3048;
y_use = F.yu; return;
}
if ((((((*(yR119 *)rt_nil_check(F.v6926))).f_kind == v861)) || ((((*(yR119 *)rt_nil_check(F.v6926))).f_kind == v864)))) {
if (F.p3046) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3044))).f_line, y_str("a value is not a statement", 26));
}
yr3053_Denote(((*(yR119 *)rt_nil_check(F.v6926))).f_rep, F.p3044, &F.p3047, &F.p3048);
(*F.p3047_o) = F.p3047;
(*F.p3048_o) = F.p3048;
y_use = F.yu; return;
}
if ((!(((*(yR119 *)rt_nil_check(F.v6926))).f_kind == v870))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3044))).f_line, ((*(yR99 *)rt_nil_check(F.p3044))).f_name, y_str(" is not a routine", 17));
}
if ((((*(yR119 *)rt_nil_check(F.v6926))).f_alt == ((void *)0))) {
yr2966_CompileArgs(((*(yR99 *)rt_nil_check(F.p3044))).f_a, F.v6926, &F.v6930, &F.v6932);
F.v6928 = F.v6926;
} else {
yr2966_CompileArgs(((*(yR99 *)rt_nil_check(F.p3044))).f_a, ((void *)0), &F.v6930, &F.v6932);
F.v6928 = yr2952_Choose(F.v6926, F.v6930, F.v6932);
if ((F.v6928 == ((void *)0))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3044))).f_line, ((*(yR99 *)rt_nil_check(F.p3044))).f_name, y_str(": no definition takes actuals of these types", 44));
}
}
yr3016_NoteCall(F.v6928, ((*(yR99 *)rt_nil_check(F.p3044))).f_line);
F.p3047 = yr2990_CallCode(F.v6928, F.v6930, F.v6932, ((*(yR99 *)rt_nil_check(F.p3044))).f_line);
F.p3048 = ((*(yR119 *)rt_nil_check(F.v6928))).f_ret;
if ((F.p3046 && ((!(((*(yR104 *)rt_nil_check(F.p3048))).f_kind == v846))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3044))).f_line, ((*(yR99 *)rt_nil_check(F.p3044))).f_name, y_str(" returns a value: it is called in an expression (IX.A.2)", 56));
}
if (((!F.p3046) && ((((*(yR104 *)rt_nil_check(F.p3048))).f_kind == v846)))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3044))).f_line, ((*(yR99 *)rt_nil_check(F.p3044))).f_name, y_str(" returns no value", 17));
}
(*F.p3047_o) = F.p3047;
(*F.p3048_o) = F.p3048;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3053_Denote(void * a_p3054, void * a_p3055, rt_int * a_p3056, void * * a_p3057) {
struct yf3058 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3054 = a_p3054;
F.p3055 = a_p3055;
F.p3056_o = a_p3056;
F.p3057_o = a_p3057;
F.v6944 = ((*(yR99 *)rt_nil_check(F.p3055))).f_a;
F.v6964 = INT64_C(0);
F.v6971 = 1;
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
F.v6950 = yr1050_SE();
F.v6946 = ((*(yR104 *)rt_nil_check(F.p3054))).f_fields;
while ((!(F.v6946 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR109 *)rt_nil_check(F.v6946))).f_variant == INT64_C(0))) || ((((*(yR109 *)rt_nil_check(F.v6946))).f_variant == F.v6964)))) {
if ((F.v6944 == ((void *)0))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3055))).f_line, y_str("too few components in this record value", 39));
}
yr2846_Expr(F.v6944, ((*(yR109 *)rt_nil_check(F.v6946))).f_rep, &F.v6948, &F.v6954);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.v6944))).f_line, ((*(yR109 *)rt_nil_check(F.v6946))).f_rep, F.v6954);
if ((F.v6946 == ((*(yR104 *)rt_nil_check(F.p3054))).f_selector)) {
yr2698_Manifest(F.v6944, &F.v6962, &F.v6967);
if ((!F.v6962)) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.v6944))).f_line, y_str("the case-selection value is a manifest constant", 47));
}
F.v6964 = yr3062_VariantOf(F.p3054, F.v6967, ((*(yR99 *)rt_nil_check(F.v6944))).f_line);
}
yr1020_SB();
yr1038_ST(F.v6950);
if ((!F.v6971)) {
yr1031_SA(y_str(", ", 2));
}
F.v6971 = 0;
yr1031_SA(y_str(".f_", 3));
yr1038_ST(((*(yR109 *)rt_nil_check(F.v6946))).f_name);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(yr2779_Convert(F.v6948, ((*(yR109 *)rt_nil_check(F.v6946))).f_rep, F.v6954));
F.v6950 = yr1050_SE();
F.v6944 = ((*(yR99 *)rt_nil_check(F.v6944))).f_next;
}
F.v6946 = ((*(yR109 *)rt_nil_check(F.v6946))).f_next;
}
if ((!(F.v6944 == ((void *)0)))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3055))).f_line, y_str("too many components in this record value", 40));
}
yr1020_SB();
yr1038_ST(F.v6950);
yr1031_SA(y_str(" })", 3));
F.p3056 = yr1050_SE();
(*F.p3056_o) = F.p3056;
(*F.p3057_o) = F.p3057;
y_use = F.yu; return;
}
if ((((*(yR104 *)rt_nil_check(F.p3054))).f_kind == v816)) {
F.v6956 = yr1903_Count(F.v6944);
F.v6950 = yr1194_Fresh(y_str("da", 2));
if ((F.v6956 == INT64_C(1))) {
yr2846_Expr(F.v6944, ((*(yR104 *)rt_nil_check(F.p3054))).f_elem, &F.v6948, &F.v6954);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.v6944))).f_line, ((*(yR104 *)rt_nil_check(F.p3054))).f_elem, F.v6954);
F.v6952 = yr1194_Fresh(y_str("dv", 2));
yr1020_SB();
yr1031_SA(y_str("({ ", 3));
yr1038_ST(yr2405_CType(((*(yR104 *)rt_nil_check(F.p3054))).f_elem));
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v6952);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(yr2779_Convert(F.v6948, ((*(yR104 *)rt_nil_check(F.p3054))).f_elem, F.v6954));
yr1031_SA(y_str("; y_fill(", 9));
yr1038_ST(yr2411_DescOf(F.p3054));
yr1031_SA(y_str(", &", 3));
yr1038_ST(F.v6952);
yr1031_SA(y_str("); })", 5));
F.p3056 = yr1050_SE();
(*F.p3056_o) = F.p3056;
(*F.p3057_o) = F.p3057;
y_use = F.yu; return;
}
yr1020_SB();
yr1031_SA(y_str("({ yarr ", 8));
yr1038_ST(F.v6950);
yr1031_SA(y_str("; y_init(", 9));
yr1038_ST(yr2411_DescOf(F.p3054));
yr1031_SA(y_str(", &", 3));
yr1038_ST(F.v6950);
yr1031_SA(y_str("); if (y_count(", 15));
yr1038_ST(F.v6950);
yr1031_SA(y_str(", ", 2));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p3054))).f_nidx);
yr1031_SA(y_str(") != ", 5));
yr1044_SI(F.v6956);
yr1031_SA(y_str(") rt_raise_msg(RT_X_RANGE, ", 27));
yr1025_SC(34);
yr1031_SA(y_str("wrong number of components", 26));
yr1025_SC(34);
yr1031_SA(y_str(");", 2));
F.p3056 = yr1050_SE();
F.v6960 = INT64_C(0);
while ((!(F.v6944 == ((void *)0)))) {
Y_TICK();
yr2846_Expr(F.v6944, ((*(yR104 *)rt_nil_check(F.p3054))).f_elem, &F.v6948, &F.v6954);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.v6944))).f_line, ((*(yR104 *)rt_nil_check(F.p3054))).f_elem, F.v6954);
yr1020_SB();
yr1038_ST(F.p3056);
if (yr2380_Deep(((*(yR104 *)rt_nil_check(F.p3054))).f_elem)) {
yr1031_SA(y_str(" { ", 3));
yr1038_ST(yr2405_CType(((*(yR104 *)rt_nil_check(F.p3054))).f_elem));
yr1031_SA(y_str(" dv = ", 6));
yr1038_ST(F.v6948);
yr1031_SA(y_str("; y_copy(", 9));
yr1038_ST(yr2411_DescOf(((*(yR104 *)rt_nil_check(F.p3054))).f_elem));
yr1031_SA(y_str(", &((", 5));
yr1038_ST(yr2405_CType(((*(yR104 *)rt_nil_check(F.p3054))).f_elem));
yr1031_SA(y_str(" *)", 3));
yr1038_ST(F.v6950);
yr1031_SA(y_str(".p)[", 4));
yr1044_SI(F.v6960);
yr1031_SA(y_str("], &dv); }", 10));
} else {
yr1031_SA(y_str(" ((", 3));
yr1038_ST(yr2405_CType(((*(yR104 *)rt_nil_check(F.p3054))).f_elem));
yr1031_SA(y_str(" *)", 3));
yr1038_ST(F.v6950);
yr1031_SA(y_str(".p)[", 4));
yr1044_SI(F.v6960);
yr1031_SA(y_str("] = ", 4));
yr1038_ST(yr2779_Convert(F.v6948, ((*(yR104 *)rt_nil_check(F.p3054))).f_elem, F.v6954));
yr1031_SA(y_str(";", 1));
}
F.p3056 = yr1050_SE();
F.v6960 = rt_range(rt_add(F.v6960, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6944 = ((*(yR99 *)rt_nil_check(F.v6944))).f_next;
}
yr1020_SB();
yr1038_ST(F.p3056);
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v6950);
yr1031_SA(y_str("; })", 4));
F.p3056 = yr1050_SE();
(*F.p3056_o) = F.p3056;
(*F.p3057_o) = F.p3057;
y_use = F.yu; return;
}
if ((((*(yR104 *)rt_nil_check(F.p3054))).f_kind == v828)) {
yr1020_SB();
yr1031_SA(y_str("y_set_new(", 10));
yr1038_ST(yr2486_LoText(((*(yR104 *)rt_nil_check(F.p3054))).f_elem));
yr1031_SA(y_str(", ", 2));
yr1038_ST(yr2492_HiText(((*(yR104 *)rt_nil_check(F.p3054))).f_elem));
yr1031_SA(y_str(")", 1));
F.p3056 = yr1050_SE();
while ((!(F.v6944 == ((void *)0)))) {
Y_TICK();
yr2846_Expr(F.v6944, ((*(yR104 *)rt_nil_check(F.p3054))).f_elem, &F.v6948, &F.v6954);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.v6944))).f_line, ((*(yR104 *)rt_nil_check(F.p3054))).f_elem, F.v6954);
F.p3056 = yr2896_Call2(y_str("y_set_add", 9), F.p3056, F.v6948);
F.v6944 = ((*(yR99 *)rt_nil_check(F.v6944))).f_next;
}
(*F.p3056_o) = F.p3056;
(*F.p3057_o) = F.p3057;
y_use = F.yu; return;
}
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3055))).f_line, ((*(yR104 *)rt_nil_check(F.p3054))).f_tname, y_str(" has no denotations of values", 29));
(*F.p3056_o) = F.p3056;
(*F.p3057_o) = F.p3057;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3062_VariantOf(void * a_p3063, rt_int a_p3064, rt_int a_p3065) {
struct yf3066 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3063 = a_p3063;
F.p3064 = a_p3064;
F.p3065 = a_p3065;
F.v7033 = ((*(yR104 *)rt_nil_check(F.p3063))).f_fields;
while ((!(F.v7033 == ((void *)0)))) {
Y_TICK();
if ((!(((*(yR109 *)rt_nil_check(F.v7033))).f_variant == INT64_C(0)))) {
F.v7035 = ((*(yR109 *)rt_nil_check(F.v7033))).f_labels;
while ((!(F.v7035 == ((void *)0)))) {
Y_TICK();
yr2698_Manifest(F.v7035, &F.v7037, &F.v7039);
if ((F.v7037 && ((F.v7039 == F.p3064)))) {
{ rt_int rv7041 = ((*(yR109 *)rt_nil_check(F.v7033))).f_variant;
y_use = F.yu; return rv7041; }
}
F.v7035 = ((*(yR99 *)rt_nil_check(F.v7035))).f_next;
}
}
F.v7033 = ((*(yR109 *)rt_nil_check(F.v7033))).f_next;
}
{ rt_int rv7043 = INT64_C(-1);
y_use = F.yu; return rv7043; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3070_Emit2(yarr a_p3072, rt_int a_p3073) {
struct yf3074 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3072 = a_p3072;
F.p3073 = a_p3073;
yr1020_SB();
yr1031_SA(F.p3072);
yr1038_ST(F.p3073);
F.v7048 = yr1050_SE();
yr1126_Emit(F.v7048);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3078_Emit3(yarr a_p3080, rt_int a_p3081, yarr a_p3083) {
struct yf3084 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3080 = a_p3080;
F.p3081 = a_p3081;
F.p3083 = a_p3083;
yr1020_SB();
yr1031_SA(F.p3080);
yr1038_ST(F.p3081);
yr1031_SA(F.p3083);
F.v7054 = yr1050_SE();
yr1126_Emit(F.v7054);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3088_PopTo(rt_int a_p3089) {
struct yf3090 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3089 = a_p3089;
if ((v1520 > F.p3089)) {
yr3078_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v1518).p)[y_ix1(v1518, rt_add(F.p3089, INT64_C(1)))], y_str(".prev;", 6));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3094_LeaveBlock(void) {
struct yf3095 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((v1548 > INT64_C(0))) {
if ((!(((rt_int *)(v1535).p)[y_ix1(v1535, v1548)] == INT64_C(0)))) {
yr3078_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v1535).p)[y_ix1(v1535, v1548)], y_str(".prev;", 6));
}
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3099_RaiseCode(rt_int a_p3100) {
struct yf3101 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3100 = a_p3100;
yr1020_SB();
yr1031_SA(y_str("rt_raise(rt_exc(", 16));
yr1025_SC(34);
yr1038_ST(F.p3100);
yr1025_SC(34);
yr1031_SA(y_str("));", 3));
{ rt_int rv7072 = yr1050_SE();
y_use = F.yu; return rv7072; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3105_BlockStatements(void * a_p3106) {
struct yf3107 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3106 = a_p3106;
F.v7088 = ((*(yR99 *)rt_nil_check(F.p3106))).f_a;
F.v7090 = INT64_C(0);
while ((!(F.v7088 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR99 *)rt_nil_check(F.v7088))).f_kind == v639)) && ((F.v7090 == INT64_C(0))))) {
F.v7090 = yr1194_Fresh(y_str("xs", 2));
yr3078_Emit3(y_str("rt_frame *", 10), F.v7090, y_str(" = rt_xtop;", 11));
}
F.v7088 = ((*(yR99 *)rt_nil_check(F.v7088))).f_next;
}
if ((((*(yR99 *)rt_nil_check(F.p3106))).f_b == ((void *)0))) {
v1548 = rt_range(rt_add(v1548, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1535).p)[y_ix1(v1535, v1548)] = INT64_C(0);
((rt_int *)(v1546).p)[y_ix1(v1546, v1548)] = F.v7090;
yr3158_Statements(((*(yR99 *)rt_nil_check(F.p3106))).f_c);
v1548 = rt_range(rt_sub(v1548, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr3226_CheckLabels(((*(yR99 *)rt_nil_check(F.p3106))).f_a);
y_use = F.yu; return;
}
v1624 = 1;
F.v7076 = yr1194_Fresh(y_str("xf", 2));
yr3078_Emit3(y_str("{ rt_frame ", 11), F.v7076, y_str(";", 1));
yr3078_Emit3(y_str("if (RT_TRY(", 11), F.v7076, y_str(")) {", 4));
v1520 = rt_range(rt_add(v1520, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1518).p)[y_ix1(v1518, v1520)] = F.v7076;
v1548 = rt_range(rt_add(v1548, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1535).p)[y_ix1(v1535, v1548)] = F.v7076;
((rt_int *)(v1546).p)[y_ix1(v1546, v1548)] = F.v7090;
yr3158_Statements(((*(yR99 *)rt_nil_check(F.p3106))).f_c);
v1548 = rt_range(rt_sub(v1548, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1520 = rt_range(rt_sub(v1520, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr3226_CheckLabels(((*(yR99 *)rt_nil_check(F.p3106))).f_a);
yr3078_Emit3(y_str("RT_POP(", 7), F.v7076, y_str(");", 2));
yr1132_EmitS(y_str("} else {", 8));
yr3078_Emit3(y_str("RT_POP(", 7), F.v7076, y_str(");", 2));
if ((v1273 > INT64_C(0))) {
yr1132_EmitS(y_str("y_use = F.yu + (rt_int)((sizeof F + 7) / 8);", 44));
} else {
yr1132_EmitS(y_str("y_use = 0;", 10));
}
F.v7078 = yr1194_Fresh(y_str("xc", 2));
yr3078_Emit3(y_str("int ", 4), F.v7078, y_str(" = rt_xcur;", 11));
v1548 = rt_range(rt_add(v1548, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1535).p)[y_ix1(v1535, v1548)] = INT64_C(0);
((rt_int *)(v1546).p)[y_ix1(v1546, v1548)] = INT64_C(0);
v1562 = rt_range(rt_add(v1562, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1560).p)[y_ix1(v1560, v1562)] = F.v7078;
F.v7086 = 1;
F.v7082 = ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3106))).f_b))).f_a;
while ((!(F.v7082 == ((void *)0)))) {
Y_TICK();
yr1020_SB();
if (F.v7086) {
yr1031_SA(y_str("if (", 4));
} else {
yr1031_SA(y_str("} else if (", 11));
}
F.v7086 = 0;
F.v7084 = ((*(yR99 *)rt_nil_check(F.v7082))).f_a;
while ((!(F.v7084 == ((void *)0)))) {
Y_TICK();
yr1038_ST(F.v7078);
yr1031_SA(y_str(" == rt_exc(", 11));
yr1025_SC(34);
yr1038_ST(((*(yR99 *)rt_nil_check(F.v7084))).f_name);
yr1025_SC(34);
yr1031_SA(y_str(")", 1));
if ((!(((*(yR99 *)rt_nil_check(F.v7084))).f_next == ((void *)0)))) {
yr1031_SA(y_str(" || ", 4));
}
F.v7084 = ((*(yR99 *)rt_nil_check(F.v7084))).f_next;
}
yr1031_SA(y_str(") {", 3));
F.v7080 = yr1050_SE();
yr1126_Emit(F.v7080);
yr3158_Statements(((*(yR99 *)rt_nil_check(F.v7082))).f_b);
F.v7082 = ((*(yR99 *)rt_nil_check(F.v7082))).f_next;
}
if ((!F.v7086)) {
yr1132_EmitS(y_str("} else {", 8));
}
if ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3106))).f_b))).f_flag == INT64_C(1))) {
yr3158_Statements(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3106))).f_b))).f_b);
} else {
yr3078_Emit3(y_str("rt_raise(", 9), F.v7078, y_str(");", 2));
}
if ((!F.v7086)) {
yr1132_EmitS(y_str("}", 1));
}
v1562 = rt_range(rt_sub(v1562, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1548 = rt_range(rt_sub(v1548, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1132_EmitS(y_str("}}", 2));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3111_SameDesig(void * a_p3112, void * a_p3113) {
struct yf3114 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3112 = a_p3112;
F.p3113 = a_p3113;
if ((((*(yR99 *)rt_nil_check(F.p3112))).f_kind == v795)) {
{ rt_int rv7167 = yr3111_SameDesig(((*(yR99 *)rt_nil_check(F.p3112))).f_a, F.p3113);
y_use = F.yu; return rv7167; }
}
if ((((*(yR99 *)rt_nil_check(F.p3113))).f_kind == v795)) {
{ rt_int rv7168 = yr3111_SameDesig(F.p3112, ((*(yR99 *)rt_nil_check(F.p3113))).f_a);
y_use = F.yu; return rv7168; }
}
if ((!(((*(yR99 *)rt_nil_check(F.p3112))).f_kind == ((*(yR99 *)rt_nil_check(F.p3113))).f_kind))) {
{ rt_int rv7170 = 0;
y_use = F.yu; return rv7170; }
}
if ((((*(yR99 *)rt_nil_check(F.p3112))).f_kind == v771)) {
{ rt_int rv7171 = ((((((*(yR99 *)rt_nil_check(F.p3112))).f_name == ((*(yR99 *)rt_nil_check(F.p3113))).f_name)) && ((((*(yR99 *)rt_nil_check(F.p3112))).f_d == ((void *)0)))) && ((((*(yR99 *)rt_nil_check(F.p3113))).f_d == ((void *)0))));
y_use = F.yu; return rv7171; }
}
if ((((*(yR99 *)rt_nil_check(F.p3112))).f_kind == v777)) {
{ rt_int rv7172 = (((((*(yR99 *)rt_nil_check(F.p3112))).f_name == ((*(yR99 *)rt_nil_check(F.p3113))).f_name)) && yr3111_SameDesig(((*(yR99 *)rt_nil_check(F.p3112))).f_a, ((*(yR99 *)rt_nil_check(F.p3113))).f_a));
y_use = F.yu; return rv7172; }
}
if ((((*(yR99 *)rt_nil_check(F.p3112))).f_kind == v783)) {
{ rt_int rv7173 = yr3111_SameDesig(((*(yR99 *)rt_nil_check(F.p3112))).f_a, ((*(yR99 *)rt_nil_check(F.p3113))).f_a);
y_use = F.yu; return rv7173; }
}
if ((((*(yR99 *)rt_nil_check(F.p3112))).f_kind == v780)) {
if ((!yr3111_SameDesig(((*(yR99 *)rt_nil_check(F.p3112))).f_a, ((*(yR99 *)rt_nil_check(F.p3113))).f_a))) {
{ rt_int rv7175 = 0;
y_use = F.yu; return rv7175; }
}
F.v7156 = ((*(yR99 *)rt_nil_check(F.p3112))).f_b;
F.v7158 = ((*(yR99 *)rt_nil_check(F.p3113))).f_b;
while ((((!(F.v7156 == ((void *)0)))) && ((!(F.v7158 == ((void *)0)))))) {
Y_TICK();
yr2698_Manifest(F.v7156, &F.v7160, &F.v7164);
yr2698_Manifest(F.v7158, &F.v7162, &F.v7166);
if ((F.v7160 && F.v7162)) {
if ((!(F.v7164 == F.v7166))) {
{ rt_int rv7177 = 0;
y_use = F.yu; return rv7177; }
}
} else if ((!yr3111_SameDesig(F.v7156, F.v7158))) {
{ rt_int rv7179 = 0;
y_use = F.yu; return rv7179; }
}
F.v7156 = ((*(yR99 *)rt_nil_check(F.v7156))).f_next;
F.v7158 = ((*(yR99 *)rt_nil_check(F.v7158))).f_next;
}
{ rt_int rv7180 = (((F.v7156 == ((void *)0))) && ((F.v7158 == ((void *)0))));
y_use = F.yu; return rv7180; }
}
{ rt_int rv7182 = 0;
y_use = F.yu; return rv7182; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3118_CheckVariantSelected(void * a_p3119, void * a_p3120, void * a_p3121) {
struct yf3122 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3119 = a_p3119;
F.p3120 = a_p3120;
F.p3121 = a_p3121;
F.v7188 = v1610;
while ((F.v7188 > INT64_C(0))) {
Y_TICK();
F.v7190 = ((void * *)(v1606).p)[y_ix1(v1606, F.v7188)];
while ((((*(yR99 *)rt_nil_check(F.v7190))).f_kind == v795)) {
Y_TICK();
F.v7190 = ((*(yR99 *)rt_nil_check(F.v7190))).f_a;
}
if (((((((*(yR99 *)rt_nil_check(F.v7190))).f_kind == v777)) && ((((*(yR99 *)rt_nil_check(F.v7190))).f_name == ((*(yR109 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p3120))).f_selector))).f_name))) && yr3111_SameDesig(((*(yR99 *)rt_nil_check(F.v7190))).f_a, ((*(yR99 *)rt_nil_check(F.p3119))).f_a))) {
F.v7192 = ((void * *)(v1608).p)[y_ix1(v1608, F.v7188)];
if ((F.v7192 == ((void *)0))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3119))).f_line, ((*(yR99 *)rt_nil_check(F.p3119))).f_name, y_str(" is a component of a variant: the ELSE of a SELECT does not say which variant the record has (VIII.B)", 101));
}
while ((!(F.v7192 == ((void *)0)))) {
Y_TICK();
F.v7196 = yr3170_Label(F.v7192, ((*(yR109 *)rt_nil_check(((*(yR104 *)rt_nil_check(F.p3120))).f_selector))).f_rep);
F.v7202 = 0;
F.v7194 = ((*(yR109 *)rt_nil_check(F.p3121))).f_labels;
while ((!(F.v7194 == ((void *)0)))) {
Y_TICK();
yr2698_Manifest(F.v7194, &F.v7200, &F.v7198);
if ((F.v7200 && ((F.v7198 == F.v7196)))) {
F.v7202 = 1;
}
F.v7194 = ((*(yR99 *)rt_nil_check(F.v7194))).f_next;
}
if ((!F.v7202)) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3119))).f_line, ((*(yR99 *)rt_nil_check(F.p3119))).f_name, y_str(" is not a component of the variant this CASE selects (VIII.B)", 61));
}
F.v7192 = ((*(yR99 *)rt_nil_check(F.v7192))).f_next;
}
y_use = F.yu; return;
}
F.v7188 = rt_range(rt_sub(F.v7188, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3119))).f_line, ((*(yR99 *)rt_nil_check(F.p3119))).f_name, y_str(" is a component of a variant: it is used inside a SELECT on the case-selection component (VIII.B)", 97));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3126_CheckCaseLabels(void * a_p3127, void * a_p3128) {
struct yf3129 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3127 = a_p3127;
F.p3128 = a_p3128;
F.v7215 = ((*(yR99 *)rt_nil_check(F.p3127))).f_b;
F.v7217 = ((*(yR99 *)rt_nil_check(F.p3127))).f_b;
F.v7219 = INT64_C(0);
F.v7222 = INT64_C(0);
while ((!(F.v7215 == ((void *)0)))) {
Y_TICK();
F.v7217 = ((*(yR99 *)rt_nil_check(F.v7215))).f_a;
while ((!(F.v7217 == ((void *)0)))) {
Y_TICK();
F.v7222 = yr3170_Label(F.v7217, F.p3128);
F.lo7227 = INT64_C(1);
F.hi7228 = F.v7219;
{ rt_int hi7232 = F.hi7228;
for (rt_int i7231 = F.lo7227; i7231 <= hi7232; i7231++) { F.c_7230 = i7231; Y_TICK();
if ((((rt_int *)(v1622).p)[y_ix1(v1622, F.c_7230)] == F.v7222)) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.v7217))).f_line, y_str("a CASE label appears twice in this SELECT (IX.B.1)", 50));
}
if (i7231 == hi7232) break;
}}
if ((F.v7219 < INT64_C(4096))) {
F.v7219 = rt_range(rt_add(F.v7219, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1622).p)[y_ix1(v1622, F.v7219)] = F.v7222;
}
F.v7217 = ((*(yR99 *)rt_nil_check(F.v7217))).f_next;
}
F.v7215 = ((*(yR99 *)rt_nil_check(F.v7215))).f_next;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3133_Falls(void * a_p3134) {
struct yf3135 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3134 = a_p3134;
F.v7240 = F.p3134;
F.v7242 = 1;
while ((!(F.v7240 == ((void *)0)))) {
Y_TICK();
if ((!(((*(yR99 *)rt_nil_check(F.v7240))).f_text == INT64_C(0)))) {
F.v7242 = 1;
}
if (F.v7242) {
F.v7242 = yr3145_Completes(F.v7240);
}
F.v7240 = ((*(yR99 *)rt_nil_check(F.v7240))).f_next;
}
{ rt_int rv7246 = F.v7242;
y_use = F.yu; return rv7246; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3139_BlockFalls(void * a_p3140) {
struct yf3141 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3140 = a_p3140;
if (yr3133_Falls(((*(yR99 *)rt_nil_check(F.p3140))).f_c)) {
{ rt_int rv7252 = 1;
y_use = F.yu; return rv7252; }
}
if ((((*(yR99 *)rt_nil_check(F.p3140))).f_b == ((void *)0))) {
{ rt_int rv7254 = 0;
y_use = F.yu; return rv7254; }
}
F.v7250 = ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3140))).f_b))).f_a;
while ((!(F.v7250 == ((void *)0)))) {
Y_TICK();
if (yr3133_Falls(((*(yR99 *)rt_nil_check(F.v7250))).f_b)) {
{ rt_int rv7256 = 1;
y_use = F.yu; return rv7256; }
}
F.v7250 = ((*(yR99 *)rt_nil_check(F.v7250))).f_next;
}
if ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3140))).f_b))).f_flag == INT64_C(1))) {
{ rt_int rv7258 = yr3133_Falls(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3140))).f_b))).f_b);
y_use = F.yu; return rv7258; }
}
{ rt_int rv7260 = 0;
y_use = F.yu; return rv7260; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3145_Completes(void * a_p3146) {
struct yf3147 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3146 = a_p3146;
F.v7264 = ((*(yR99 *)rt_nil_check(F.p3146))).f_kind;
if (((((((F.v7264 == v723)) || ((F.v7264 == v726))) || ((F.v7264 == v729))) || ((F.v7264 == v717))) || ((F.v7264 == v720)))) {
{ rt_int rv7272 = 0;
y_use = F.yu; return rv7272; }
}
if ((F.v7264 == v732)) {
if ((!(((*(yR99 *)rt_nil_check(F.p3146))).f_flag == INT64_C(1)))) {
{ rt_int rv7275 = 1;
y_use = F.yu; return rv7275; }
}
F.v7266 = ((*(yR99 *)rt_nil_check(F.p3146))).f_a;
while ((!(F.v7266 == ((void *)0)))) {
Y_TICK();
if (yr3133_Falls(((*(yR99 *)rt_nil_check(F.v7266))).f_b)) {
{ rt_int rv7277 = 1;
y_use = F.yu; return rv7277; }
}
F.v7266 = ((*(yR99 *)rt_nil_check(F.v7266))).f_next;
}
{ rt_int rv7278 = yr3133_Falls(((*(yR99 *)rt_nil_check(F.p3146))).f_b);
y_use = F.yu; return rv7278; }
}
if ((F.v7264 == v735)) {
if ((!(((*(yR99 *)rt_nil_check(F.p3146))).f_flag == INT64_C(1)))) {
{ rt_int rv7281 = 1;
y_use = F.yu; return rv7281; }
}
F.v7266 = ((*(yR99 *)rt_nil_check(F.p3146))).f_b;
while ((!(F.v7266 == ((void *)0)))) {
Y_TICK();
if (yr3133_Falls(((*(yR99 *)rt_nil_check(F.v7266))).f_b)) {
{ rt_int rv7283 = 1;
y_use = F.yu; return rv7283; }
}
F.v7266 = ((*(yR99 *)rt_nil_check(F.v7266))).f_next;
}
{ rt_int rv7284 = yr3133_Falls(((*(yR99 *)rt_nil_check(F.p3146))).f_c);
y_use = F.yu; return rv7284; }
}
if ((F.v7264 == v738)) {
yr2698_Manifest(((*(yR99 *)rt_nil_check(F.p3146))).f_a, &F.v7268, &F.v7270);
{ rt_int rv7286 = (!((F.v7268 && ((F.v7270 == INT64_C(1))))));
y_use = F.yu; return rv7286; }
}
if ((F.v7264 == v744)) {
{ rt_int rv7287 = yr3151_Exits(((*(yR99 *)rt_nil_check(F.p3146))).f_b, ((*(yR99 *)rt_nil_check(F.p3146))).f_name);
y_use = F.yu; return rv7287; }
}
if ((F.v7264 == v747)) {
{ rt_int rv7288 = yr3139_BlockFalls(((*(yR99 *)rt_nil_check(F.p3146))).f_a);
y_use = F.yu; return rv7288; }
}
{ rt_int rv7290 = 1;
y_use = F.yu; return rv7290; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3151_Exits(void * a_p3152, rt_int a_p3153) {
struct yf3154 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3152 = a_p3152;
F.p3153 = a_p3153;
F.v7295 = F.p3152;
while ((!(F.v7295 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR99 *)rt_nil_check(F.v7295))).f_kind == v720)) && ((((*(yR99 *)rt_nil_check(F.v7295))).f_name == F.p3153)))) {
{ rt_int rv7299 = 1;
y_use = F.yu; return rv7299; }
}
if ((((*(yR99 *)rt_nil_check(F.v7295))).f_kind == v732)) {
F.v7297 = ((*(yR99 *)rt_nil_check(F.v7295))).f_a;
while ((!(F.v7297 == ((void *)0)))) {
Y_TICK();
if (yr3151_Exits(((*(yR99 *)rt_nil_check(F.v7297))).f_b, F.p3153)) {
{ rt_int rv7301 = 1;
y_use = F.yu; return rv7301; }
}
F.v7297 = ((*(yR99 *)rt_nil_check(F.v7297))).f_next;
}
if (yr3151_Exits(((*(yR99 *)rt_nil_check(F.v7295))).f_b, F.p3153)) {
{ rt_int rv7303 = 1;
y_use = F.yu; return rv7303; }
}
} else if ((((*(yR99 *)rt_nil_check(F.v7295))).f_kind == v735)) {
F.v7297 = ((*(yR99 *)rt_nil_check(F.v7295))).f_b;
while ((!(F.v7297 == ((void *)0)))) {
Y_TICK();
if (yr3151_Exits(((*(yR99 *)rt_nil_check(F.v7297))).f_b, F.p3153)) {
{ rt_int rv7305 = 1;
y_use = F.yu; return rv7305; }
}
F.v7297 = ((*(yR99 *)rt_nil_check(F.v7297))).f_next;
}
if (yr3151_Exits(((*(yR99 *)rt_nil_check(F.v7295))).f_c, F.p3153)) {
{ rt_int rv7307 = 1;
y_use = F.yu; return rv7307; }
}
} else if (((((((*(yR99 *)rt_nil_check(F.v7295))).f_kind == v738)) || ((((*(yR99 *)rt_nil_check(F.v7295))).f_kind == v741))) || ((((*(yR99 *)rt_nil_check(F.v7295))).f_kind == v744)))) {
if (yr3151_Exits(((*(yR99 *)rt_nil_check(F.v7295))).f_b, F.p3153)) {
{ rt_int rv7309 = 1;
y_use = F.yu; return rv7309; }
}
} else if ((((*(yR99 *)rt_nil_check(F.v7295))).f_kind == v747)) {
if (yr3151_Exits(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7295))).f_a))).f_c, F.p3153)) {
{ rt_int rv7311 = 1;
y_use = F.yu; return rv7311; }
}
if ((!(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7295))).f_a))).f_b == ((void *)0)))) {
F.v7297 = ((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7295))).f_a))).f_b))).f_a;
while ((!(F.v7297 == ((void *)0)))) {
Y_TICK();
if (yr3151_Exits(((*(yR99 *)rt_nil_check(F.v7297))).f_b, F.p3153)) {
{ rt_int rv7313 = 1;
y_use = F.yu; return rv7313; }
}
F.v7297 = ((*(yR99 *)rt_nil_check(F.v7297))).f_next;
}
if (yr3151_Exits(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7295))).f_a))).f_b))).f_b, F.p3153)) {
{ rt_int rv7315 = 1;
y_use = F.yu; return rv7315; }
}
}
}
F.v7295 = ((*(yR99 *)rt_nil_check(F.v7295))).f_next;
}
{ rt_int rv7317 = 0;
y_use = F.yu; return rv7317; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3158_Statements(void * a_p3159) {
struct yf3160 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3159 = a_p3159;
F.v7321 = F.p3159;
while ((!(F.v7321 == ((void *)0)))) {
Y_TICK();
yr3182_Statement(F.v7321);
F.v7321 = ((*(yR99 *)rt_nil_check(F.v7321))).f_next;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3164_Cond(void * a_p3165) {
struct yf3166 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3165 = a_p3165;
yr2846_Expr(F.p3165, v1338, &F.v7325, &F.v7327);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p3165))).f_line, v1338, F.v7327);
{ rt_int rv7328 = F.v7325;
y_use = F.yu; return rv7328; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3170_Label(void * a_p3171, void * a_p3172) {
struct yf3173 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3171 = a_p3171;
F.p3172 = a_p3172;
if (((((((*(yR99 *)rt_nil_check(F.p3171))).f_kind == v771)) && ((((*(yR99 *)rt_nil_check(F.p3171))).f_d == ((void *)0)))) && ((((*(yR104 *)rt_nil_check(F.p3172))).f_kind == v810)))) {
F.v7337 = yr2297_FindLit(((*(yR99 *)rt_nil_check(F.p3171))).f_name, F.p3172);
if ((!(F.v7337 == ((void *)0)))) {
{ rt_int rv7342 = ((*(yR119 *)rt_nil_check(yr2337_Real(F.v7337)))).f_mval;
y_use = F.yu; return rv7342; }
}
}
yr2846_Expr(F.p3171, F.p3172, &F.v7341, &F.v7339);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p3171))).f_line, F.p3172, F.v7339);
yr2698_Manifest(F.p3171, &F.v7333, &F.v7335);
if ((!F.v7333)) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3171))).f_line, y_str("a CASE label is a manifest constant (IX.B.1)", 44));
}
{ rt_int rv7344 = F.v7335;
y_use = F.yu; return rv7344; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3177_CopyOut(void) {
struct yf3178 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((v1595 == ((void *)0))) {
y_use = F.yu; return;
}
F.v7347 = ((*(yR119 *)rt_nil_check(v1595))).f_params;
while ((!(F.v7347 == ((void *)0)))) {
Y_TICK();
if ((((*(yR114 *)rt_nil_check(F.v7347))).f_cls == v894)) {
yr1020_SB();
yr1031_SA(y_str("(*F.", 4));
yr1038_ST(((*(yR114 *)rt_nil_check(F.v7347))).f_cname);
yr1031_SA(y_str("_o)", 3));
F.v7349 = yr1050_SE();
yr3033_Assign(F.v7349, ((*(yR114 *)rt_nil_check(F.v7347))).f_rep, yr2311_Path(v1273, ((*(yR114 *)rt_nil_check(F.v7347))).f_cname), ((*(yR114 *)rt_nil_check(F.v7347))).f_rep, INT64_C(0));
}
F.v7347 = ((*(yR114 *)rt_nil_check(F.v7347))).f_next;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3182_Statement(void * a_p3183) {
struct yf3184 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3183 = a_p3183;
F.v7356 = ((*(yR99 *)rt_nil_check(F.p3183))).f_kind;
v994 = ((*(yR99 *)rt_nil_check(F.p3183))).f_line;
if ((!(((*(yR99 *)rt_nil_check(F.p3183))).f_text == INT64_C(0)))) {
yr3214_PlaceLabel(F.p3183);
}
if ((F.v7356 == v708)) {
yr2819_LValue(((*(yR99 *)rt_nil_check(F.p3183))).f_a, &F.v7358, &F.v7370);
yr2813_CheckPure(((*(yR99 *)rt_nil_check(F.p3183))).f_a);
yr3249_NoteWrite(((*(yR99 *)rt_nil_check(F.p3183))).f_a);
if ((((((*(yR104 *)rt_nil_check(F.v7370))).f_kind == v831)) || yr2393_HoldsSignal(F.v7370))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3183))).f_line, y_str("assignment is not defined for signals (VI.A.1.d)", 48));
}
if (yr2399_NonAssignable(F.v7370)) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3183))).f_line, y_str("assignment is not defined for files and semaphores, nor what holds them (VII.B)", 79));
}
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p3183))).f_b, F.v7370, &F.v7360, &F.v7372);
F.v7362 = yr3023_UserAssign(F.v7358, F.v7370, F.v7360, F.v7372, ((*(yR99 *)rt_nil_check(F.p3183))).f_line);
if ((!(F.v7362 == INT64_C(0)))) {
yr1126_Emit(F.v7362);
} else {
if ((((*(yR104 *)rt_nil_check(F.v7370))).f_opaque && (((rt_mod(((*(yR104 *)rt_nil_check(F.v7370))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3183))).f_line, ((*(yR104 *)rt_nil_check(F.v7370))).f_tname, y_str(" is opaque here: := is not exported (X.B.3)", 43));
}
yr2797_Store(F.v7358, F.v7370, F.v7360, F.v7372, ((*(yR99 *)rt_nil_check(F.p3183))).f_line);
}
} else if ((F.v7356 == v711)) {
F.v7386 = yr2232_Find(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3183))).f_a))).f_name);
if ((!(F.v7386 == ((void *)0)))) {
F.v7386 = yr2337_Real(F.v7386);
}
if ((((!(F.v7386 == ((void *)0)))) && ((((*(yR119 *)rt_nil_check(F.v7386))).f_kind == v879)))) {
yr3528_Activate(((*(yR99 *)rt_nil_check(F.p3183))).f_a, F.v7386);
} else {
yr3043_CallExpr(((*(yR99 *)rt_nil_check(F.p3183))).f_a, ((void *)0), 1, &F.v7358, &F.v7370);
yr3070_Emit2(y_str("", 0), F.v7358);
yr1020_SB();
yr1038_ST(F.v7358);
yr1031_SA(y_str(";", 1));
F.v7362 = yr1050_SE();
((*(yR129 *)rt_nil_check((v990).f_tail))).f_t = F.v7362;
}
} else if ((F.v7356 == v732)) {
F.v7378 = 1;
F.v7374 = ((*(yR99 *)rt_nil_check(F.p3183))).f_a;
while ((!(F.v7374 == ((void *)0)))) {
Y_TICK();
F.v7358 = yr3164_Cond(((*(yR99 *)rt_nil_check(F.v7374))).f_a);
if (F.v7378) {
yr3078_Emit3(y_str("if (", 4), F.v7358, y_str(") {", 3));
} else {
yr3078_Emit3(y_str("} else if (", 11), F.v7358, y_str(") {", 3));
}
F.v7378 = 0;
yr3158_Statements(((*(yR99 *)rt_nil_check(F.v7374))).f_b);
F.v7374 = ((*(yR99 *)rt_nil_check(F.v7374))).f_next;
}
if ((((*(yR99 *)rt_nil_check(F.p3183))).f_flag == INT64_C(1))) {
yr1132_EmitS(y_str("} else {", 8));
yr3158_Statements(((*(yR99 *)rt_nil_check(F.p3183))).f_b);
}
yr1132_EmitS(y_str("}", 1));
} else if ((F.v7356 == v738)) {
F.v7358 = yr3164_Cond(((*(yR99 *)rt_nil_check(F.p3183))).f_a);
yr3078_Emit3(y_str("while (", 7), F.v7358, y_str(") {", 3));
yr1132_EmitS(y_str("Y_TICK();", 9));
yr3158_Statements(((*(yR99 *)rt_nil_check(F.p3183))).f_b);
yr1132_EmitS(y_str("}", 1));
} else if ((F.v7356 == v744)) {
F.v7364 = yr1194_Fresh(y_str("yl_", 3));
v1589 = rt_range(rt_add(v1589, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1574).p)[y_ix1(v1574, v1589)] = ((*(yR99 *)rt_nil_check(F.p3183))).f_name;
((rt_int *)(v1576).p)[y_ix1(v1576, v1589)] = F.v7364;
((rt_int *)(v1587).p)[y_ix1(v1587, v1589)] = v1520;
yr1132_EmitS(y_str("for (;;) {", 10));
yr1132_EmitS(y_str("Y_TICK();", 9));
yr3158_Statements(((*(yR99 *)rt_nil_check(F.p3183))).f_b);
yr1132_EmitS(y_str("}", 1));
yr3078_Emit3(y_str("", 0), F.v7364, y_str(": ;", 3));
v1589 = rt_range(rt_sub(v1589, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v7356 == v720)) {
F.v7380 = 0;
F.v7382 = v1589;
while ((((F.v7382 > v1592)) && (!F.v7380))) {
Y_TICK();
if ((((rt_int *)(v1574).p)[y_ix1(v1574, F.v7382)] == ((*(yR99 *)rt_nil_check(F.p3183))).f_name)) {
F.v7380 = 1;
yr3088_PopTo(((rt_int *)(v1587).p)[y_ix1(v1587, F.v7382)]);
yr3078_Emit3(y_str("goto ", 5), ((rt_int *)(v1576).p)[y_ix1(v1576, F.v7382)], y_str(";", 1));
}
F.v7382 = rt_range(rt_sub(F.v7382, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((!F.v7380)) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3183))).f_line, ((*(yR99 *)rt_nil_check(F.p3183))).f_name, y_str(": EXIT names no LOOP around it here (IX.A.5)", 44));
}
} else if ((F.v7356 == v741)) {
yr3188_ForStatement(F.p3183);
} else if ((F.v7356 == v735)) {
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p3183))).f_a, ((void *)0), &F.v7358, &F.v7370);
if ((!yr2356_IsDiscrete(F.v7370))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3183))).f_line, y_str("SELECT on a value that is not integer or scalar", 47));
}
yr3126_CheckCaseLabels(F.p3183, F.v7370);
yr3078_Emit3(y_str("switch (", 8), F.v7358, y_str(") {", 3));
F.v7374 = ((*(yR99 *)rt_nil_check(F.p3183))).f_b;
while ((!(F.v7374 == ((void *)0)))) {
Y_TICK();
F.v7376 = ((*(yR99 *)rt_nil_check(F.v7374))).f_a;
while ((!(F.v7376 == ((void *)0)))) {
Y_TICK();
F.v7384 = yr3170_Label(F.v7376, F.v7370);
yr1020_SB();
yr1031_SA(y_str("case ", 5));
yr1044_SI(F.v7384);
yr1031_SA(y_str(":", 1));
F.v7362 = yr1050_SE();
yr1126_Emit(F.v7362);
F.v7376 = ((*(yR99 *)rt_nil_check(F.v7376))).f_next;
}
yr1132_EmitS(y_str("{", 1));
v1610 = rt_range(rt_add(v1610, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1606).p)[y_ix1(v1606, v1610)] = ((*(yR99 *)rt_nil_check(F.p3183))).f_a;
((void * *)(v1608).p)[y_ix1(v1608, v1610)] = ((*(yR99 *)rt_nil_check(F.v7374))).f_a;
yr3158_Statements(((*(yR99 *)rt_nil_check(F.v7374))).f_b);
v1610 = rt_range(rt_sub(v1610, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1132_EmitS(y_str("} break;", 8));
F.v7374 = ((*(yR99 *)rt_nil_check(F.v7374))).f_next;
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
} else if ((F.v7356 == v723)) {
yr3202_ReturnStatement(F.p3183);
} else if ((F.v7356 == v729)) {
if ((((*(yR99 *)rt_nil_check(F.p3183))).f_name == INT64_C(0))) {
if ((v1562 == INT64_C(0))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3183))).f_line, y_str("PROPAGATE_EXCEPTION without a name is used in a handler (IX.A.8)", 64));
}
yr3078_Emit3(y_str("rt_raise(", 9), ((rt_int *)(v1560).p)[y_ix1(v1560, v1562)], y_str(");", 2));
} else {
yr3094_LeaveBlock();
yr1126_Emit(yr3099_RaiseCode(((*(yR99 *)rt_nil_check(F.p3183))).f_name));
}
} else if ((F.v7356 == v714)) {
F.v7382 = v1627;
F.v7358 = yr3164_Cond(((*(yR99 *)rt_nil_check(F.p3183))).f_a);
if ((!(v1627 == F.v7382))) {
yr1158_Warn(((*(yR99 *)rt_nil_check(F.p3183))).f_line, yr1055_T(y_str("the expression of this ASSERT calls a procedure: it might have side effects (IX.A.3)", 84)));
}
yr3078_Emit3(y_str("if (!(", 6), F.v7358, y_str(")) {", 4));
yr3094_LeaveBlock();
yr1132_EmitS(y_str("rt_raise(RT_X_ASSERT); }", 24));
} else if ((F.v7356 == v747)) {
yr3208_BeginStatement(F.p3183);
} else if ((F.v7356 == v726)) {
yr3558_TerminateStatement(F.p3183);
} else if ((F.v7356 == v717)) {
yr3220_GotoStatement(F.p3183);
} else {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3183))).f_line, y_str("not a statement", 15));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3188_ForStatement(void * a_p3189) {
struct yf3190 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3189 = a_p3189;
F.v7460 = yr2587_MakeRep(((*(yR99 *)rt_nil_check(F.p3189))).f_a, INT64_C(0), 0);
if ((((!yr2356_IsDiscrete(F.v7460)) || ((((*(yR104 *)rt_nil_check(F.v7460))).f_kind == v807))) || ((((((*(yR104 *)rt_nil_check(F.v7460))).f_kind == v810)) && (!((*(yR104 *)rt_nil_check(F.v7460))).f_ordered))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3189))).f_line, y_str("FOR goes over an ordered scalar or integer representation (IX.B.2)", 66));
}
yr2446_CheckRepresented(F.v7460, ((*(yR99 *)rt_nil_check(F.p3189))).f_line);
yr2209_OpenScope(0);
F.v7468 = yr2202_NewSym(v858, ((*(yR99 *)rt_nil_check(F.p3189))).f_name);
((*(yR119 *)rt_nil_check(F.v7468))).f_rep = F.v7460;
((*(yR119 *)rt_nil_check(F.v7468))).f_level = v1273;
((*(yR119 *)rt_nil_check(F.v7468))).f_cname = yr1194_Fresh(y_str("c_", 2));
yr2324_DeclStorage(yr1055_T(y_str("rt_int", 6)), ((*(yR119 *)rt_nil_check(F.v7468))).f_cname);
yr2304_Define(F.v7468, ((*(yR99 *)rt_nil_check(F.p3189))).f_line);
F.v7462 = yr1194_Fresh(y_str("i", 1));
F.v7464 = yr1194_Fresh(y_str("hi", 2));
yr1020_SB();
yr1031_SA(y_str("{ rt_int ", 9));
yr1038_ST(F.v7464);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(yr2492_HiText(F.v7460));
yr1031_SA(y_str(";", 1));
F.v7466 = yr1050_SE();
yr1126_Emit(F.v7466);
yr1020_SB();
yr1031_SA(y_str("for (rt_int ", 12));
yr1038_ST(F.v7462);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(yr2486_LoText(F.v7460));
yr1031_SA(y_str("; ", 2));
yr1038_ST(F.v7462);
yr1031_SA(y_str(" <= ", 4));
yr1038_ST(F.v7464);
yr1031_SA(y_str("; ", 2));
yr1038_ST(F.v7462);
yr1031_SA(y_str("++) { ", 6));
yr1038_ST(yr2331_SymPath(F.v7468));
yr1031_SA(y_str(" = ", 3));
yr1038_ST(F.v7462);
yr1031_SA(y_str("; Y_TICK();", 11));
F.v7466 = yr1050_SE();
yr1126_Emit(F.v7466);
yr3158_Statements(((*(yR99 *)rt_nil_check(F.p3189))).f_b);
yr3078_Emit3(y_str("if (", 4), F.v7462, y_str(" == ", 4));
((*(yR129 *)rt_nil_check((v990).f_tail))).f_t = yr3194_Join(((*(yR129 *)rt_nil_check((v990).f_tail))).f_t, F.v7464, yr1055_T(y_str(") break;", 8)));
yr1132_EmitS(y_str("}}", 2));
yr2221_CloseScope();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3194_Join(rt_int a_p3195, rt_int a_p3196, rt_int a_p3197) {
struct yf3198 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3195 = a_p3195;
F.p3196 = a_p3196;
F.p3197 = a_p3197;
yr1020_SB();
yr1038_ST(F.p3195);
yr1038_ST(F.p3196);
yr1038_ST(F.p3197);
{ rt_int rv7496 = yr1050_SE();
y_use = F.yu; return rv7496; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3202_ReturnStatement(void * a_p3203) {
struct yf3204 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3203 = a_p3203;
if ((v1595 == ((void *)0))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3203))).f_line, y_str("RETURN outside a routine (IX.A.6)", 33));
}
if ((((*(yR119 *)rt_nil_check(v1595))).f_kind == v879)) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3203))).f_line, y_str("a process ends with TERMINATE_PROCESS (IX.A.7)", 46));
}
F.v7508 = ((*(yR119 *)rt_nil_check(v1595))).f_ret;
if ((((*(yR99 *)rt_nil_check(F.p3203))).f_a == ((void *)0))) {
if ((!(((*(yR104 *)rt_nil_check(F.v7508))).f_kind == v846))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3203))).f_line, y_str("RETURN needs a value here (IX.A.6)", 34));
}
yr3177_CopyOut();
yr3553_LeaveMonitor();
yr3088_PopTo(v1523);
yr1132_EmitS(y_str("y_use = F.yu; return;", 21));
y_use = F.yu; return;
}
if ((((*(yR104 *)rt_nil_check(F.v7508))).f_kind == v846)) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3203))).f_line, y_str("this routine returns no value (IX.A.6)", 38));
}
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p3203))).f_a, F.v7508, &F.v7500, &F.v7506);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p3203))).f_line, F.v7508, F.v7506);
F.v7504 = yr1194_Fresh(y_str("rv", 2));
yr1020_SB();
yr1031_SA(y_str("{ ", 2));
yr1038_ST(yr2405_CType(F.v7508));
yr1031_SA(y_str(" ", 1));
yr1038_ST(F.v7504);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(yr2779_Convert(F.v7500, F.v7508, F.v7506));
yr1031_SA(y_str(";", 1));
F.v7502 = yr1050_SE();
yr1126_Emit(F.v7502);
yr3177_CopyOut();
yr3553_LeaveMonitor();
yr3088_PopTo(v1523);
yr3078_Emit3(y_str("y_use = F.yu; return ", 21), F.v7504, y_str("; }", 3));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3208_BeginStatement(void * a_p3209) {
struct yf3210 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3209 = a_p3209;
yr1132_EmitS(y_str("{", 1));
if ((((*(yR99 *)rt_nil_check(F.p3209))).f_flag == INT64_C(1))) {
F.v7524 = yr1194_Fresh(y_str("sf", 2));
F.v7526 = yr1194_Fresh(y_str("ys", 2));
v1624 = 1;
yr1126_Emit(yr3194_Join(yr1055_T(y_str("int ", 4)), F.v7526, yr1055_T(y_str(" = y_sim_depth; y_sim_depth++;", 30))));
yr1126_Emit(yr3194_Join(yr1055_T(y_str("rt_frame ", 9)), F.v7524, yr1055_T(y_str(";", 1))));
yr1126_Emit(yr3194_Join(yr1055_T(y_str("if (!RT_TRY(", 12)), F.v7524, yr3194_Join(yr1055_T(y_str(")) { RT_POP(", 12)), F.v7524, yr3194_Join(yr1055_T(y_str("); y_sim_depth = ", 17)), F.v7526, yr1055_T(y_str("; rt_raise(rt_xcur); }", 22))))));
v1520 = rt_range(rt_add(v1520, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1518).p)[y_ix1(v1518, v1520)] = F.v7524;
}
yr2209_OpenScope(0);
yr3391_Declarations(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3209))).f_a))).f_a);
yr3105_BlockStatements(((*(yR99 *)rt_nil_check(F.p3209))).f_a);
yr3523_AwaitProcesses();
yr2221_CloseScope();
if ((((*(yR99 *)rt_nil_check(F.p3209))).f_flag == INT64_C(1))) {
v1520 = rt_range(rt_sub(v1520, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1126_Emit(yr3194_Join(yr1055_T(y_str("RT_POP(", 7)), F.v7524, yr3194_Join(yr1055_T(y_str("); y_sim_depth = ", 17)), F.v7526, yr1055_T(y_str(";", 1)))));
}
yr1132_EmitS(y_str("}", 1));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3214_PlaceLabel(void * a_p3215) {
struct yf3216 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3215 = a_p3215;
F.v7553 = yr2238_FindHere(((*(yR99 *)rt_nil_check(F.p3215))).f_text);
if ((((F.v7553 == ((void *)0))) || ((!(((*(yR119 *)rt_nil_check(F.v7553))).f_kind == v882))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3215))).f_line, ((*(yR99 *)rt_nil_check(F.p3215))).f_text, y_str(" labels a statement but is not declared by LABEL in this block (VII.C)", 70));
}
if (((*(yR119 *)rt_nil_check(F.v7553))).f_hasmv) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3215))).f_line, ((*(yR99 *)rt_nil_check(F.p3215))).f_text, y_str(" labels two statements", 22));
}
((*(yR119 *)rt_nil_check(F.v7553))).f_hasmv = 1;
yr3078_Emit3(y_str("", 0), ((*(yR119 *)rt_nil_check(F.v7553))).f_cname, y_str(": ;", 3));
if ((!(((rt_int *)(v1535).p)[y_ix1(v1535, v1548)] == INT64_C(0)))) {
yr3078_Emit3(y_str("rt_xtop = &", 11), ((rt_int *)(v1535).p)[y_ix1(v1535, v1548)], y_str(";", 1));
} else if ((!(((rt_int *)(v1546).p)[y_ix1(v1546, v1548)] == INT64_C(0)))) {
yr3078_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v1546).p)[y_ix1(v1546, v1548)], y_str(";", 1));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3220_GotoStatement(void * a_p3221) {
struct yf3222 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3221 = a_p3221;
F.v7568 = yr2244_Lookup(((*(yR99 *)rt_nil_check(F.p3221))).f_name, ((*(yR99 *)rt_nil_check(F.p3221))).f_line);
if ((!(((*(yR119 *)rt_nil_check(F.v7568))).f_kind == v882))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3221))).f_line, ((*(yR99 *)rt_nil_check(F.p3221))).f_name, y_str(" is not a label", 15));
}
if ((!(((*(yR119 *)rt_nil_check(F.v7568))).f_level == v1273))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3221))).f_line, ((*(yR99 *)rt_nil_check(F.p3221))).f_name, y_str(": GOTO does not leave a routine or process (IX.A.4)", 51));
}
((*(yR119 *)rt_nil_check(F.v7568))).f_readonly = 1;
yr1132_EmitS(y_str("Y_TICK();", 9));
yr3078_Emit3(y_str("goto ", 5), ((*(yR119 *)rt_nil_check(F.v7568))).f_cname, y_str(";", 1));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3226_CheckLabels(void * a_p3227) {
struct yf3228 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3227 = a_p3227;
F.v7578 = F.p3227;
while ((!(F.v7578 == ((void *)0)))) {
Y_TICK();
if ((((*(yR99 *)rt_nil_check(F.v7578))).f_kind == v639)) {
F.v7580 = ((*(yR99 *)rt_nil_check(F.v7578))).f_a;
while ((!(F.v7580 == ((void *)0)))) {
Y_TICK();
F.v7582 = yr2238_FindHere(((*(yR99 *)rt_nil_check(F.v7580))).f_name);
if ((((((!(F.v7582 == ((void *)0)))) && ((((*(yR119 *)rt_nil_check(F.v7582))).f_kind == v882))) && ((*(yR119 *)rt_nil_check(F.v7582))).f_readonly) && (!((*(yR119 *)rt_nil_check(F.v7582))).f_hasmv))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.v7580))).f_line, ((*(yR99 *)rt_nil_check(F.v7580))).f_name, y_str(" is the target of a GOTO but labels no statement of its block", 61));
}
F.v7580 = ((*(yR99 *)rt_nil_check(F.v7580))).f_next;
}
}
F.v7578 = ((*(yR99 *)rt_nil_check(F.v7578))).f_next;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3232_DesigBase(void * a_p3233, void * * a_p3234, rt_int * a_p3235, rt_int * a_p3236) {
struct yf3237 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3233 = a_p3233;
F.p3234_o = a_p3234;
F.p3235_o = a_p3235;
F.p3236_o = a_p3236;
F.v7590 = F.p3233;
F.p3234 = ((void *)0);
F.p3235 = 0;
F.p3236 = INT64_C(0);
for (;;) {
Y_TICK();
if (((((((*(yR99 *)rt_nil_check(F.v7590))).f_kind == v795)) || ((((*(yR99 *)rt_nil_check(F.v7590))).f_kind == v777))) || ((((*(yR99 *)rt_nil_check(F.v7590))).f_kind == v780)))) {
F.v7590 = ((*(yR99 *)rt_nil_check(F.v7590))).f_a;
} else if ((((*(yR99 *)rt_nil_check(F.v7590))).f_kind == v783)) {
if ((!F.p3235)) {
F.p3235 = 1;
if ((!(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7590))).f_a))).f_rep == ((void *)0)))) {
F.p3236 = ((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7590))).f_a))).f_rep))).f_tid;
}
}
F.v7590 = ((*(yR99 *)rt_nil_check(F.v7590))).f_a;
} else {
goto yl_7595;
}
}
yl_7595: ;
if ((((((*(yR99 *)rt_nil_check(F.v7590))).f_kind == v771)) && ((((*(yR99 *)rt_nil_check(F.v7590))).f_d == ((void *)0))))) {
F.v7592 = yr2232_Find(((*(yR99 *)rt_nil_check(F.v7590))).f_name);
if ((!(F.v7592 == ((void *)0)))) {
if (yr2285_Resolved(F.v7592)) {
F.v7592 = yr2337_Real(F.v7592);
if ((((*(yR119 *)rt_nil_check(F.v7592))).f_kind == v855)) {
F.p3234 = F.v7592;
}
}
}
}
(*F.p3234_o) = F.p3234;
(*F.p3235_o) = F.p3235;
(*F.p3236_o) = F.p3236;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3241_Note(void * a_p3242, rt_int a_p3243, rt_int a_p3244) {
struct yf3245 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3242 = a_p3242;
F.p3243 = a_p3243;
F.p3244 = a_p3244;
F.v7602 = yr1888_NewNode(v663, F.p3244);
((*(yR99 *)rt_nil_check(F.v7602))).f_sym = F.p3242;
((*(yR99 *)rt_nil_check(F.v7602))).f_name = F.p3243;
{ void * rv7603 = F.v7602;
y_use = F.yu; return rv7603; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3249_NoteWrite(void * a_p3250) {
struct yf3251 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3250 = a_p3250;
if ((v1595 == ((void *)0))) {
y_use = F.yu; return;
}
yr3232_DesigBase(F.p3250, &F.v7607, &F.v7609, &F.v7611);
if (F.v7609) {
F.v7607 = ((void *)0);
} else if ((((F.v7607 == ((void *)0))) || ((((*(yR119 *)rt_nil_check(F.v7607))).f_level >= ((*(yR119 *)rt_nil_check(v1595))).f_level)))) {
y_use = F.yu; return;
}
F.v7613 = ((*(yR119 *)rt_nil_check(v1595))).f_writes;
while ((!(F.v7613 == ((void *)0)))) {
Y_TICK();
if ((((*(yR99 *)rt_nil_check(F.v7613))).f_sym == F.v7607)) {
y_use = F.yu; return;
}
F.v7613 = ((*(yR99 *)rt_nil_check(F.v7613))).f_next;
}
F.v7615 = yr3241_Note(F.v7607, INT64_C(0), ((*(yR99 *)rt_nil_check(F.p3250))).f_line);
((*(yR99 *)rt_nil_check(F.v7615))).f_next = ((*(yR119 *)rt_nil_check(v1595))).f_writes;
((*(yR119 *)rt_nil_check(v1595))).f_writes = F.v7615;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3255_NoteFree(void * a_p3256) {
struct yf3257 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3256 = a_p3256;
if ((v1595 == ((void *)0))) {
y_use = F.yu; return;
}
if ((((!(((*(yR119 *)rt_nil_check(F.p3256))).f_kind == v855))) || ((((*(yR119 *)rt_nil_check(F.p3256))).f_level >= ((*(yR119 *)rt_nil_check(v1595))).f_level)))) {
y_use = F.yu; return;
}
if ((((*(yR119 *)rt_nil_check(F.p3256))).f_seen == ((*(yR119 *)rt_nil_check(v1595))).f_serial)) {
y_use = F.yu; return;
}
((*(yR119 *)rt_nil_check(F.p3256))).f_seen = ((*(yR119 *)rt_nil_check(v1595))).f_serial;
F.v7620 = yr3241_Note(F.p3256, INT64_C(0), v994);
((*(yR99 *)rt_nil_check(F.v7620))).f_next = ((*(yR119 *)rt_nil_check(v1595))).f_frees;
((*(yR119 *)rt_nil_check(v1595))).f_frees = F.v7620;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3261_NoteFreeDeref(void * a_p3262, rt_int a_p3263) {
struct yf3264 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3262 = a_p3262;
F.p3263 = a_p3263;
if ((v1595 == ((void *)0))) {
y_use = F.yu; return;
}
yr3232_DesigBase(F.p3262, &F.v7626, &F.v7628, &F.v7630);
if ((((F.v7626 == ((void *)0))) || ((((*(yR119 *)rt_nil_check(F.v7626))).f_level >= ((*(yR119 *)rt_nil_check(v1595))).f_level)))) {
y_use = F.yu; return;
}
F.v7632 = ((*(yR119 *)rt_nil_check(v1595))).f_frees;
while ((!(F.v7632 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR99 *)rt_nil_check(F.v7632))).f_sym == ((void *)0))) && ((((*(yR99 *)rt_nil_check(F.v7632))).f_name == F.p3263)))) {
y_use = F.yu; return;
}
F.v7632 = ((*(yR99 *)rt_nil_check(F.v7632))).f_next;
}
F.v7632 = yr3241_Note(((void *)0), F.p3263, ((*(yR99 *)rt_nil_check(F.p3262))).f_line);
((*(yR99 *)rt_nil_check(F.v7632))).f_next = ((*(yR119 *)rt_nil_check(v1595))).f_frees;
((*(yR119 *)rt_nil_check(v1595))).f_frees = F.v7632;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3268_DSteps(void * a_p3269, yarr * a_p3270) {
struct yf3271 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3269 = a_p3269;
F.p3270 = a_p3270;
F.v7637 = F.p3269;
F.v7639 = INT64_C(0);
while (((((((*(yR99 *)rt_nil_check(F.v7637))).f_kind == v795)) || ((((*(yR99 *)rt_nil_check(F.v7637))).f_kind == v777))) || ((((*(yR99 *)rt_nil_check(F.v7637))).f_kind == v780)))) {
Y_TICK();
if ((!(((*(yR99 *)rt_nil_check(F.v7637))).f_kind == v795))) {
if ((F.v7639 < INT64_C(64))) {
F.v7639 = rt_range(rt_add(F.v7639, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)((*F.p3270)).p)[y_ix1((*F.p3270), F.v7639)] = F.v7637;
}
}
F.v7637 = ((*(yR99 *)rt_nil_check(F.v7637))).f_a;
}
F.lo7651 = INT64_C(1);
F.hi7652 = rt_div(F.v7639, INT64_C(2));
{ rt_int hi7656 = F.hi7652;
for (rt_int i7655 = F.lo7651; i7655 <= hi7656; i7655++) { F.c_7654 = i7655; Y_TICK();
F.v7642 = ((void * *)((*F.p3270)).p)[y_ix1((*F.p3270), F.c_7654)];
((void * *)((*F.p3270)).p)[y_ix1((*F.p3270), F.c_7654)] = ((void * *)((*F.p3270)).p)[y_ix1((*F.p3270), rt_sub((rt_add(F.v7639, INT64_C(1))), F.c_7654))];
((void * *)((*F.p3270)).p)[y_ix1((*F.p3270), rt_sub((rt_add(F.v7639, INT64_C(1))), F.c_7654))] = F.v7642;
if (i7655 == hi7656) break;
}}
{ rt_int rv7663 = F.v7639;
y_use = F.yu; return rv7663; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3275_Overlaps(void * a_p3276, void * a_p3277) {
struct yf3278 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3276 = a_p3276;
F.p3277 = a_p3277;
y_init(&yd_195, &F.v7688);
y_init(&yd_195, &F.v7690);
yr3232_DesigBase(F.p3276, &F.v7668, &F.v7672, &F.v7684);
yr3232_DesigBase(F.p3277, &F.v7670, &F.v7674, &F.v7686);
if ((!(F.v7672 == F.v7674))) {
if (((F.v7672 && ((((*(yR99 *)rt_nil_check(F.p3276))).f_kind == v783))) && ((!(((*(yR99 *)rt_nil_check(F.p3277))).f_rep == ((void *)0)))))) {
if ((((((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3277))).f_rep))).f_kind == v822)) && ((((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3277))).f_rep))).f_tid == F.v7684)))) {
{ rt_int rv7708 = 1;
y_use = F.yu; return rv7708; }
}
}
if (((F.v7674 && ((((*(yR99 *)rt_nil_check(F.p3277))).f_kind == v783))) && ((!(((*(yR99 *)rt_nil_check(F.p3276))).f_rep == ((void *)0)))))) {
if ((((((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3276))).f_rep))).f_kind == v822)) && ((((*(yR104 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3276))).f_rep))).f_tid == F.v7686)))) {
{ rt_int rv7710 = 1;
y_use = F.yu; return rv7710; }
}
}
{ rt_int rv7712 = 0;
y_use = F.yu; return rv7712; }
}
if (F.v7672) {
if ((!(F.v7684 == F.v7686))) {
{ rt_int rv7714 = 0;
y_use = F.yu; return rv7714; }
}
} else if ((((F.v7668 == ((void *)0))) || ((!(F.v7668 == F.v7670))))) {
{ rt_int rv7716 = 0;
y_use = F.yu; return rv7716; }
}
F.v7692 = yr3268_DSteps(F.p3276, &F.v7688);
F.v7694 = yr3268_DSteps(F.p3277, &F.v7690);
F.lo7720 = INT64_C(1);
F.hi7721 = F.v7692;
{ rt_int hi7725 = F.hi7721;
for (rt_int i7724 = F.lo7720; i7724 <= hi7725; i7724++) { F.c_7723 = i7724; Y_TICK();
if ((F.c_7723 <= F.v7694)) {
F.v7700 = ((void * *)(F.v7688).p)[y_ix1(F.v7688, F.c_7723)];
F.v7702 = ((void * *)(F.v7690).p)[y_ix1(F.v7690, F.c_7723)];
if ((!(((*(yR99 *)rt_nil_check(F.v7700))).f_kind == ((*(yR99 *)rt_nil_check(F.v7702))).f_kind))) {
{ rt_int rv7727 = 1;
y_use = F.yu; return rv7727; }
}
if ((((*(yR99 *)rt_nil_check(F.v7700))).f_kind == v777)) {
if ((!(((*(yR99 *)rt_nil_check(F.v7700))).f_name == ((*(yR99 *)rt_nil_check(F.v7702))).f_name))) {
{ rt_int rv7729 = 0;
y_use = F.yu; return rv7729; }
}
} else {
F.v7680 = 1;
F.v7682 = 0;
F.v7704 = ((*(yR99 *)rt_nil_check(F.v7700))).f_b;
F.v7706 = ((*(yR99 *)rt_nil_check(F.v7702))).f_b;
while ((((!(F.v7704 == ((void *)0)))) && ((!(F.v7706 == ((void *)0)))))) {
Y_TICK();
yr2698_Manifest(F.v7704, &F.v7676, &F.v7696);
yr2698_Manifest(F.v7706, &F.v7678, &F.v7698);
if ((F.v7676 && F.v7678)) {
if ((!(F.v7696 == F.v7698))) {
F.v7682 = 1;
}
} else {
F.v7680 = 0;
}
F.v7704 = ((*(yR99 *)rt_nil_check(F.v7704))).f_next;
F.v7706 = ((*(yR99 *)rt_nil_check(F.v7706))).f_next;
}
if ((!F.v7680)) {
{ rt_int rv7735 = 1;
y_use = F.yu; return rv7735; }
}
if (F.v7682) {
{ rt_int rv7737 = 0;
y_use = F.yu; return rv7737; }
}
}
}
if (i7724 == hi7725) break;
}}
{ rt_int rv7739 = 1;
y_use = F.yu; return rv7739; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3282_CheckActuals(void * a_p3283, rt_int a_p3284, rt_int a_p3285) {
struct yf3286 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3283 = a_p3283;
F.p3284 = a_p3284;
F.p3285 = a_p3285;
F.v7745 = ((*(yR119 *)rt_nil_check(F.p3283))).f_params;
F.v7749 = rt_range(rt_add(F.p3284, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7753 = ((void *)0);
while ((!(F.v7745 == ((void *)0)))) {
Y_TICK();
if ((((!(((*(yR114 *)rt_nil_check(F.v7745))).f_cls == v891))) && ((!(((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v7745))).f_rep))).f_kind == v849))))) {
F.v7747 = ((*(yR114 *)rt_nil_check(F.v7745))).f_next;
F.v7751 = rt_range(rt_add(F.v7749, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(F.v7747 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR114 *)rt_nil_check(F.v7745))).f_cls == v897)) && ((((*(yR114 *)rt_nil_check(F.v7747))).f_cls == v897)))) {
if (yr3275_Overlaps(((void * *)(v1504).p)[y_ix1(v1504, F.v7749)], ((void * *)(v1504).p)[y_ix1(v1504, F.v7751)])) {
yr1180_FailN(((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v7751)]))).f_line, ((*(yR114 *)rt_nil_check(F.v7747))).f_name, y_str(": its actual and that of another VAR parameter may be the same variable (X.A.6)", 79));
}
}
if ((((((*(yR114 *)rt_nil_check(F.v7745))).f_cls == v894)) && ((((*(yR114 *)rt_nil_check(F.v7747))).f_cls == v894)))) {
if (yr3111_SameDesig(((void * *)(v1504).p)[y_ix1(v1504, F.v7749)], ((void * *)(v1504).p)[y_ix1(v1504, F.v7751)])) {
yr1180_FailN(((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v7751)]))).f_line, ((*(yR114 *)rt_nil_check(F.v7747))).f_name, y_str(": the same variable is the actual of two OUT parameters (IX.A.2)", 64));
}
}
F.v7747 = ((*(yR114 *)rt_nil_check(F.v7747))).f_next;
F.v7751 = rt_range(rt_add(F.v7751, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((((*(yR114 *)rt_nil_check(F.v7745))).f_cls == v897)) {
yr3232_DesigBase(((void * *)(v1504).p)[y_ix1(v1504, F.v7749)], &F.v7757, &F.v7759, &F.v7761);
F.v7755 = yr3241_Note(F.v7757, F.v7761, ((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v7749)]))).f_line);
if (F.v7759) {
((*(yR99 *)rt_nil_check(F.v7755))).f_flag = INT64_C(1);
}
if ((((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v7749)]))).f_kind == v783)) {
((*(yR99 *)rt_nil_check(F.v7755))).f_ival = INT64_C(1);
}
if ((F.v7753 == ((void *)0))) {
F.v7753 = yr3241_Note(F.p3283, INT64_C(0), F.p3285);
((*(yR99 *)rt_nil_check(F.v7753))).f_next = v1632;
v1632 = F.v7753;
}
((*(yR99 *)rt_nil_check(F.v7755))).f_next = ((*(yR99 *)rt_nil_check(F.v7753))).f_a;
((*(yR99 *)rt_nil_check(F.v7753))).f_a = F.v7755;
}
}
F.v7749 = rt_range(rt_add(F.v7749, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7745 = ((*(yR114 *)rt_nil_check(F.v7745))).f_next;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr7894_At(struct yf3291 *up, rt_int a_p7895, rt_int a_p7896) {
struct yf7897 F;
memset((void *)&F, 0, sizeof F);
F.up = up;
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p7895 = a_p7895;
F.p7896 = a_p7896;
{ rt_int rv7919 = rt_range(rt_add((rt_mul(F.p7895, (rt_add(F.up->v7786, INT64_C(1))))), F.p7896), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv7919; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr7901_Reaches(struct yf3291 *up, rt_int a_p7902, rt_int a_p7903) {
struct yf7904 F;
memset((void *)&F, 0, sizeof F);
F.up = up;
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p7902 = a_p7902;
F.p7903 = a_p7903;
F.v7924 = ((*(yR119 *)rt_nil_check(((void * *)(F.up->v7870).p)[y_ix1(F.up->v7870, F.p7903)]))).f_calls;
if (((rt_int *)(F.up->v7881).p)[y_ix1(F.up->v7881, F.p7903)]) {
{ rt_int rv7926 = 0;
y_use = F.yu; return rv7926; }
}
((rt_int *)(F.up->v7881).p)[y_ix1(F.up->v7881, F.p7903)] = 1;
while ((!(F.v7924 == ((void *)0)))) {
Y_TICK();
if ((((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7924))).f_sym))).f_vix > INT64_C(0))) {
if ((((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7924))).f_sym))).f_vix == F.p7902)) {
{ rt_int rv7930 = 1;
y_use = F.yu; return rv7930; }
}
if (yr7901_Reaches(F.up, F.p7902, ((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7924))).f_sym))).f_vix)) {
{ rt_int rv7932 = 1;
y_use = F.yu; return rv7932; }
}
}
F.v7924 = ((*(yR99 *)rt_nil_check(F.v7924))).f_next;
}
{ rt_int rv7934 = 0;
y_use = F.yu; return rv7934; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr7908_VName(struct yf3291 *up, rt_int a_p7909) {
struct yf7910 F;
memset((void *)&F, 0, sizeof F);
F.up = up;
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p7909 = a_p7909;
if ((((void * *)(F.up->v7848).p)[y_ix1(F.up->v7848, F.p7909)] == ((void *)0))) {
{ rt_int rv7938 = yr1055_T(y_str("a dynamic variable", 18));
y_use = F.yu; return rv7938; }
}
{ rt_int rv7939 = ((*(yR119 *)rt_nil_check(((void * *)(F.up->v7848).p)[y_ix1(F.up->v7848, F.p7909)]))).f_name;
y_use = F.yu; return rv7939; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3290_CheckEffects(void) {
struct yf3291 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v7783 = INT64_C(0);
F.v7786 = INT64_C(0);
F.v7789 = INT64_C(0);
F.v7789 = INT64_C(1);
F.v7786 = INT64_C(1);
F.v7777 = v1630;
while ((!(F.v7777 == ((void *)0)))) {
Y_TICK();
F.v7783 = rt_range(rt_add(F.v7783, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7777))).f_sym))).f_vix = F.v7783;
F.v7779 = ((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7777))).f_sym))).f_writes;
while ((!(F.v7779 == ((void *)0)))) {
Y_TICK();
if ((((!(((*(yR99 *)rt_nil_check(F.v7779))).f_sym == ((void *)0)))) && ((((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7779))).f_sym))).f_vix == INT64_C(0))))) {
F.v7786 = rt_range(rt_add(F.v7786, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7779))).f_sym))).f_vix = F.v7786;
}
F.v7779 = ((*(yR99 *)rt_nil_check(F.v7779))).f_next;
}
F.v7779 = ((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7777))).f_sym))).f_frees;
while ((!(F.v7779 == ((void *)0)))) {
Y_TICK();
if ((!(((*(yR99 *)rt_nil_check(F.v7779))).f_sym == ((void *)0)))) {
if ((((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7779))).f_sym))).f_vix == INT64_C(0))) {
F.v7786 = rt_range(rt_add(F.v7786, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7779))).f_sym))).f_vix = F.v7786;
}
} else if ((yr3295_DynIndex(((*(yR99 *)rt_nil_check(F.v7779))).f_name, F.v7786, 0) == INT64_C(0))) {
F.v7786 = rt_range(rt_add(F.v7786, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR99 *)rt_nil_check(F.v7779))).f_ival = yr3295_DynIndex(((*(yR99 *)rt_nil_check(F.v7779))).f_name, F.v7786, 1);
}
F.v7779 = ((*(yR99 *)rt_nil_check(F.v7779))).f_next;
}
F.v7777 = ((*(yR99 *)rt_nil_check(F.v7777))).f_next;
}
if ((F.v7783 == INT64_C(0))) {
y_use = F.yu; return;
}
{
F.lo7819 = INT64_C(0);
F.hi7820 = rt_mul((rt_add(F.v7783, INT64_C(1))), (rt_add(F.v7786, INT64_C(1))));
{ rt_int lo[1] = {F.lo7819}, hi[1] = {F.hi7820}; y_desc_array(&F.yd_7822, 1, lo, hi, &y_d_int); }
y_init(&F.yd_7822, &F.v7824);
y_init(&F.yd_7822, &F.v7826);
F.lo7832 = INT64_C(0);
F.hi7833 = F.v7786;
{ rt_int lo[1] = {F.lo7832}, hi[1] = {F.hi7833}; y_desc_array(&F.yd_7835, 1, lo, hi, &y_d_int); }
y_init(&F.yd_7835, &F.v7837);
F.lo7843 = INT64_C(0);
F.hi7844 = F.v7786;
{ rt_int lo[1] = {F.lo7843}, hi[1] = {F.hi7844}; y_desc_array(&F.yd_7846, 1, lo, hi, &y_d_ptr); }
y_init(&F.yd_7846, &F.v7848);
F.lo7854 = INT64_C(0);
F.hi7855 = F.v7786;
{ rt_int lo[1] = {F.lo7854}, hi[1] = {F.hi7855}; y_desc_array(&F.yd_7857, 1, lo, hi, &y_d_int); }
y_init(&F.yd_7857, &F.v7859);
F.lo7865 = INT64_C(0);
F.hi7866 = F.v7783;
{ rt_int lo[1] = {F.lo7865}, hi[1] = {F.hi7866}; y_desc_array(&F.yd_7868, 1, lo, hi, &y_d_ptr); }
y_init(&F.yd_7868, &F.v7870);
F.lo7876 = INT64_C(0);
F.hi7877 = F.v7783;
{ rt_int lo[1] = {F.lo7876}, hi[1] = {F.hi7877}; y_desc_array(&F.yd_7879, 1, lo, hi, &y_d_int); }
y_init(&F.yd_7879, &F.v7881);
F.v7883 = 1;
F.lo7949 = INT64_C(0);
F.hi7950 = rt_mul((rt_add(F.v7783, INT64_C(1))), (rt_add(F.v7786, INT64_C(1))));
{ rt_int hi7954 = F.hi7950;
for (rt_int i7953 = F.lo7949; i7953 <= hi7954; i7953++) { F.c_7952 = i7953; Y_TICK();
((rt_int *)(F.v7824).p)[y_ix1(F.v7824, F.c_7952)] = 0;
((rt_int *)(F.v7826).p)[y_ix1(F.v7826, F.c_7952)] = 0;
if (i7953 == hi7954) break;
}}
F.lo7960 = INT64_C(0);
F.hi7961 = F.v7786;
{ rt_int hi7965 = F.hi7961;
for (rt_int i7964 = F.lo7960; i7964 <= hi7965; i7964++) { F.c_7963 = i7964; Y_TICK();
((rt_int *)(F.v7837).p)[y_ix1(F.v7837, F.c_7963)] = INT64_C(-1);
((void * *)(F.v7848).p)[y_ix1(F.v7848, F.c_7963)] = ((void *)0);
((rt_int *)(F.v7859).p)[y_ix1(F.v7859, F.c_7963)] = INT64_C(0);
if (i7964 == hi7965) break;
}}
F.lo7971 = INT64_C(0);
F.hi7972 = F.v7783;
{ rt_int hi7976 = F.hi7972;
for (rt_int i7975 = F.lo7971; i7975 <= hi7976; i7975++) { F.c_7974 = i7975; Y_TICK();
((rt_int *)(F.v7881).p)[y_ix1(F.v7881, F.c_7974)] = 0;
if (i7975 == hi7976) break;
}}
F.v7777 = v1630;
while ((!(F.v7777 == ((void *)0)))) {
Y_TICK();
F.v7792 = ((*(yR99 *)rt_nil_check(F.v7777))).f_sym;
((void * *)(F.v7870).p)[y_ix1(F.v7870, ((*(yR119 *)rt_nil_check(F.v7792))).f_vix)] = F.v7792;
F.v7779 = ((*(yR119 *)rt_nil_check(F.v7792))).f_writes;
while ((!(F.v7779 == ((void *)0)))) {
Y_TICK();
if ((((*(yR99 *)rt_nil_check(F.v7779))).f_sym == ((void *)0))) {
F.v7888 = INT64_C(1);
} else {
F.v7888 = ((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7779))).f_sym))).f_vix;
}
((rt_int *)(F.v7824).p)[y_ix1(F.v7824, yr7894_At(&F, ((*(yR119 *)rt_nil_check(F.v7792))).f_vix, F.v7888))] = 1;
if ((!(((*(yR99 *)rt_nil_check(F.v7779))).f_sym == ((void *)0)))) {
((rt_int *)(F.v7837).p)[y_ix1(F.v7837, F.v7888)] = ((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7779))).f_sym))).f_level;
((void * *)(F.v7848).p)[y_ix1(F.v7848, F.v7888)] = ((*(yR99 *)rt_nil_check(F.v7779))).f_sym;
}
F.v7779 = ((*(yR99 *)rt_nil_check(F.v7779))).f_next;
}
F.v7779 = ((*(yR119 *)rt_nil_check(F.v7792))).f_frees;
while ((!(F.v7779 == ((void *)0)))) {
Y_TICK();
if ((((*(yR99 *)rt_nil_check(F.v7779))).f_sym == ((void *)0))) {
F.v7888 = yr3295_DynIndex(((*(yR99 *)rt_nil_check(F.v7779))).f_name, INT64_C(0), 0);
((rt_int *)(F.v7859).p)[y_ix1(F.v7859, F.v7888)] = ((*(yR99 *)rt_nil_check(F.v7779))).f_name;
} else {
F.v7888 = ((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7779))).f_sym))).f_vix;
((rt_int *)(F.v7837).p)[y_ix1(F.v7837, F.v7888)] = ((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7779))).f_sym))).f_level;
((void * *)(F.v7848).p)[y_ix1(F.v7848, F.v7888)] = ((*(yR99 *)rt_nil_check(F.v7779))).f_sym;
}
((rt_int *)(F.v7826).p)[y_ix1(F.v7826, yr7894_At(&F, ((*(yR119 *)rt_nil_check(F.v7792))).f_vix, F.v7888))] = 1;
F.v7779 = ((*(yR99 *)rt_nil_check(F.v7779))).f_next;
}
F.v7777 = ((*(yR99 *)rt_nil_check(F.v7777))).f_next;
}
while (F.v7883) {
Y_TICK();
F.v7883 = 0;
F.lo7987 = INT64_C(1);
F.hi7988 = F.v7783;
{ rt_int hi7992 = F.hi7988;
for (rt_int i7991 = F.lo7987; i7991 <= hi7992; i7991++) { F.c_7990 = i7991; Y_TICK();
F.v7781 = ((*(yR119 *)rt_nil_check(((void * *)(F.v7870).p)[y_ix1(F.v7870, F.c_7990)]))).f_calls;
while ((!(F.v7781 == ((void *)0)))) {
Y_TICK();
F.v7890 = ((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7781))).f_sym))).f_vix;
if ((F.v7890 > INT64_C(0))) {
F.lo7997 = INT64_C(1);
F.hi7998 = F.v7786;
{ rt_int hi8002 = F.hi7998;
for (rt_int i8001 = F.lo7997; i8001 <= hi8002; i8001++) { F.c_8000 = i8001; Y_TICK();
if ((((rt_int *)(F.v7837).p)[y_ix1(F.v7837, F.c_8000)] < ((*(yR119 *)rt_nil_check(((void * *)(F.v7870).p)[y_ix1(F.v7870, F.c_7990)]))).f_level)) {
if ((((rt_int *)(F.v7824).p)[y_ix1(F.v7824, yr7894_At(&F, F.v7890, rt_range(F.c_8000, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] && (!((rt_int *)(F.v7824).p)[y_ix1(F.v7824, yr7894_At(&F, rt_range(F.c_7990, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(F.c_8000, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]))) {
((rt_int *)(F.v7824).p)[y_ix1(F.v7824, yr7894_At(&F, rt_range(F.c_7990, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(F.c_8000, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] = 1;
F.v7883 = 1;
}
if ((((rt_int *)(F.v7826).p)[y_ix1(F.v7826, yr7894_At(&F, F.v7890, rt_range(F.c_8000, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] && (!((rt_int *)(F.v7826).p)[y_ix1(F.v7826, yr7894_At(&F, rt_range(F.c_7990, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(F.c_8000, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]))) {
((rt_int *)(F.v7826).p)[y_ix1(F.v7826, yr7894_At(&F, rt_range(F.c_7990, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(F.c_8000, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] = 1;
F.v7883 = 1;
}
}
if (i8001 == hi8002) break;
}}
}
F.v7781 = ((*(yR99 *)rt_nil_check(F.v7781))).f_next;
}
if (i7991 == hi7992) break;
}}
}
F.lo8010 = INT64_C(1);
F.hi8011 = F.v7783;
{ rt_int hi8015 = F.hi8011;
for (rt_int i8014 = F.lo8010; i8014 <= hi8015; i8014++) { F.c_8013 = i8014; Y_TICK();
F.v7792 = ((void * *)(F.v7870).p)[y_ix1(F.v7870, F.c_8013)];
if (((*(yR119 *)rt_nil_check(F.v7792))).f_func) {
F.v7781 = ((*(yR119 *)rt_nil_check(F.v7792))).f_calls;
while ((!(F.v7781 == ((void *)0)))) {
Y_TICK();
F.v7890 = ((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7781))).f_sym))).f_vix;
if ((F.v7890 > INT64_C(0))) {
F.lo8020 = INT64_C(1);
F.hi8021 = F.v7786;
{ rt_int hi8025 = F.hi8021;
for (rt_int i8024 = F.lo8020; i8024 <= hi8025; i8024++) { F.c_8023 = i8024; Y_TICK();
if ((((rt_int *)(F.v7824).p)[y_ix1(F.v7824, yr7894_At(&F, F.v7890, rt_range(F.c_8023, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] && ((((rt_int *)(F.v7837).p)[y_ix1(F.v7837, F.c_8023)] < ((*(yR119 *)rt_nil_check(F.v7792))).f_level)))) {
yr1151_Fail(((*(yR99 *)rt_nil_check(F.v7781))).f_line, yr3194_Join(((*(yR119 *)rt_nil_check(F.v7792))).f_name, yr3194_Join(yr1055_T(y_str(" is a FUNCTION: it calls ", 25)), ((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7781))).f_sym))).f_name, INT64_C(0)), yr3194_Join(yr1055_T(y_str(", which assigns to ", 19)), yr7908_VName(&F, rt_range(F.c_8023, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))), yr1055_T(y_str(" (X.A.4)", 8)))));
}
if (i8024 == hi8025) break;
}}
}
F.v7781 = ((*(yR99 *)rt_nil_check(F.v7781))).f_next;
}
}
if ((!(((*(yR119 *)rt_nil_check(F.v7792))).f_decl == ((void *)0)))) {
if ((!(((*(yR99 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v7792))).f_decl))).f_e == ((void *)0)))) {
F.lo8033 = INT64_C(0);
F.hi8034 = F.v7783;
{ rt_int hi8038 = F.hi8034;
for (rt_int i8037 = F.lo8033; i8037 <= hi8038; i8037++) { F.c_8036 = i8037; Y_TICK();
((rt_int *)(F.v7881).p)[y_ix1(F.v7881, F.c_8036)] = 0;
if (i8037 == hi8038) break;
}}
if (yr7901_Reaches(&F, rt_range(F.c_8013, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(F.c_8013, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v7792))).f_decl))).f_line, ((*(yR119 *)rt_nil_check(F.v7792))).f_name, y_str(" is INLINE and calls itself (X.A.5)", 35));
}
}
}
if (i8014 == hi8015) break;
}}
F.v7777 = v1632;
while ((!(F.v7777 == ((void *)0)))) {
Y_TICK();
F.v7892 = ((*(yR99 *)rt_nil_check(F.v7777))).f_sym;
F.v7890 = ((*(yR119 *)rt_nil_check(F.v7892))).f_vix;
if ((F.v7890 > INT64_C(0))) {
F.v7779 = ((*(yR99 *)rt_nil_check(F.v7777))).f_a;
while ((!(F.v7779 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR99 *)rt_nil_check(F.v7779))).f_flag == INT64_C(0))) && ((!(((*(yR99 *)rt_nil_check(F.v7779))).f_sym == ((void *)0)))))) {
F.v7888 = ((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7779))).f_sym))).f_vix;
if ((F.v7888 > INT64_C(0))) {
if (((rt_int *)(F.v7826).p)[y_ix1(F.v7826, yr7894_At(&F, F.v7890, F.v7888))]) {
yr1151_Fail(((*(yR99 *)rt_nil_check(F.v7779))).f_line, yr3194_Join(((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v7779))).f_sym))).f_name, yr3194_Join(yr1055_T(y_str(" is the actual of a VAR parameter of ", 37)), ((*(yR119 *)rt_nil_check(F.v7892))).f_name, INT64_C(0)), yr1055_T(y_str(", which refers to it freely too (X.A.6)", 39))));
}
}
}
F.v7886 = INT64_C(0);
if ((((*(yR99 *)rt_nil_check(F.v7779))).f_flag == INT64_C(1))) {
F.v7886 = yr3295_DynIndex(((*(yR99 *)rt_nil_check(F.v7779))).f_name, INT64_C(0), 0);
}
if ((F.v7886 > INT64_C(0))) {
if (((rt_int *)(F.v7826).p)[y_ix1(F.v7826, yr7894_At(&F, F.v7890, F.v7886))]) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.v7779))).f_line, ((*(yR119 *)rt_nil_check(F.v7892))).f_name, y_str(": a VAR actual and a dynamic variable it refers to freely may be the same (X.A.6)", 81));
}
}
if ((((((*(yR99 *)rt_nil_check(F.v7779))).f_flag == INT64_C(1))) && ((((*(yR99 *)rt_nil_check(F.v7779))).f_ival == INT64_C(1))))) {
F.lo8058 = INT64_C(1);
F.hi8059 = F.v7786;
{ rt_int hi8063 = F.hi8059;
for (rt_int i8062 = F.lo8058; i8062 <= hi8063; i8062++) { F.c_8061 = i8062; Y_TICK();
if ((((rt_int *)(F.v7826).p)[y_ix1(F.v7826, yr7894_At(&F, F.v7890, rt_range(F.c_8061, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] && ((!(((void * *)(F.v7848).p)[y_ix1(F.v7848, F.c_8061)] == ((void *)0)))))) {
if ((((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(((void * *)(F.v7848).p)[y_ix1(F.v7848, F.c_8061)]))).f_rep))).f_kind == v822)) && ((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(((void * *)(F.v7848).p)[y_ix1(F.v7848, F.c_8061)]))).f_rep))).f_tid == ((*(yR99 *)rt_nil_check(F.v7779))).f_name)))) {
yr1151_Fail(((*(yR99 *)rt_nil_check(F.v7779))).f_line, yr3194_Join(((*(yR119 *)rt_nil_check(F.v7892))).f_name, yr3194_Join(yr1055_T(y_str(": a VAR actual is a dynamic variable that ", 42)), ((*(yR119 *)rt_nil_check(((void * *)(F.v7848).p)[y_ix1(F.v7848, F.c_8061)]))).f_name, INT64_C(0)), yr1055_T(y_str(", which it refers to freely, may point to (X.A.6)", 49))));
}
}
if (i8062 == hi8063) break;
}}
}
F.v7779 = ((*(yR99 *)rt_nil_check(F.v7779))).f_next;
}
}
F.v7777 = ((*(yR99 *)rt_nil_check(F.v7777))).f_next;
}
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3295_DynIndex(rt_int a_p3296, rt_int a_p3297, rt_int a_p3298) {
struct yf3299 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3296 = a_p3296;
F.p3297 = a_p3297;
F.p3298 = a_p3298;
F.lo8074 = INT64_C(1);
F.hi8075 = v1656;
{ rt_int hi8079 = F.hi8075;
for (rt_int i8078 = F.lo8074; i8078 <= hi8079; i8078++) { F.c_8077 = i8078; Y_TICK();
if ((((rt_int *)(v1643).p)[y_ix1(v1643, F.c_8077)] == F.p3296)) {
{ rt_int rv8080 = ((rt_int *)(v1654).p)[y_ix1(v1654, F.c_8077)];
y_use = F.yu; return rv8080; }
}
if (i8078 == hi8079) break;
}}
if ((!F.p3298)) {
{ rt_int rv8082 = INT64_C(0);
y_use = F.yu; return rv8082; }
}
if ((v1656 >= INT64_C(4096))) {
yr1172_FailS(v994, y_str("too many pointer types for this implementation", 46));
}
v1656 = rt_range(rt_add(v1656, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1643).p)[y_ix1(v1643, v1656)] = F.p3296;
((rt_int *)(v1654).p)[y_ix1(v1654, v1656)] = F.p3297;
{ rt_int rv8087 = F.p3297;
y_use = F.yu; return rv8087; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3303_RoutineCName(rt_int a_p3304) {
struct yf3305 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3304 = a_p3304;
F.v8091 = yr1189_NewSerial();
F.v8093 = 1;
F.lo8098 = INT64_C(1);
F.hi8099 = ((rt_int *)(v914).p)[y_ix1(v914, F.p3304)];
{ rt_int hi8103 = F.hi8099;
for (rt_int i8102 = F.lo8098; i8102 <= hi8103; i8102++) { F.c_8101 = i8102; Y_TICK();
if ((!((yr1002_IsLetter(yr1097_TChar(F.p3304, rt_range(F.c_8101, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || yr1008_IsDigit(yr1097_TChar(F.p3304, rt_range(F.c_8101, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))))) {
F.v8093 = 0;
}
if (i8102 == hi8103) break;
}}
yr1020_SB();
yr1031_SA(y_str("yr", 2));
yr1044_SI(F.v8091);
if (F.v8093) {
yr1031_SA(y_str("_", 1));
yr1038_ST(F.p3304);
}
{ rt_int rv8107 = yr1050_SE();
y_use = F.yu; return rv8107; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3309_FormalRep(void * a_p3310) {
struct yf3311 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3310 = a_p3310;
if ((((*(yR99 *)rt_nil_check(F.p3310))).f_kind == v690)) {
yr2698_Manifest(((*(yR99 *)rt_nil_check(F.p3310))).f_a, &F.v8113, &F.v8115);
if ((((!F.v8113) || ((F.v8115 < INT64_C(1)))) || ((F.v8115 > INT64_C(4))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3310))).f_line, y_str("DIMENSIONS is a manifest constant from 1 to 4", 45));
}
F.v8111 = yr2343_NewRep(v837, yr1055_T(y_str("length-unresolved array", 23)));
((*(yR104 *)rt_nil_check(F.v8111))).f_nidx = F.v8115;
((*(yR104 *)rt_nil_check(F.v8111))).f_elem = yr2587_MakeRep(((*(yR99 *)rt_nil_check(F.p3310))).f_b, INT64_C(0), 0);
yr2446_CheckRepresented(((*(yR104 *)rt_nil_check(F.v8111))).f_elem, ((*(yR99 *)rt_nil_check(F.p3310))).f_line);
((*(yR104 *)rt_nil_check(F.v8111))).f_deep = 1;
{ void * rv8123 = F.v8111;
y_use = F.yu; return rv8123; }
}
if ((((*(yR99 *)rt_nil_check(F.p3310))).f_kind == v693)) {
{ void * rv8125 = yr2343_NewRep(v849, yr1055_T(y_str("SPACE", 5)));
y_use = F.yu; return rv8125; }
}
F.v8111 = yr2587_MakeRep(F.p3310, INT64_C(0), 0);
yr2446_CheckRepresented(F.v8111, ((*(yR99 *)rt_nil_check(F.p3310))).f_line);
{ void * rv8128 = F.v8111;
y_use = F.yu; return rv8128; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3315_ParamCType(void * a_p3316) {
struct yf3317 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3316 = a_p3316;
F.v8132 = yr2405_CType(((*(yR114 *)rt_nil_check(F.p3316))).f_rep);
if ((((*(yR114 *)rt_nil_check(F.p3316))).f_cls == v891)) {
{ rt_int rv8133 = F.v8132;
y_use = F.yu; return rv8133; }
}
yr1020_SB();
yr1038_ST(F.v8132);
yr1031_SA(y_str(" *", 2));
{ rt_int rv8135 = yr1050_SE();
y_use = F.yu; return rv8135; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3321_RoutineHeader(void * a_p3322, rt_int a_p3323) {
struct yf3324 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3322 = a_p3322;
F.p3323 = a_p3323;
F.v8156 = 1;
F.v8140 = yr2202_NewSym(F.p3323, ((*(yR99 *)rt_nil_check(F.p3322))).f_name);
((*(yR119 *)rt_nil_check(F.v8140))).f_decl = F.p3322;
((*(yR119 *)rt_nil_check(F.v8140))).f_func = (((*(yR99 *)rt_nil_check(F.p3322))).f_flag == INT64_C(1));
((*(yR119 *)rt_nil_check(F.v8140))).f_level = rt_range(rt_add(v1273, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR119 *)rt_nil_check(F.v8140))).f_cname = yr3303_RoutineCName(((*(yR99 *)rt_nil_check(F.p3322))).f_name);
if ((!(((*(yR99 *)rt_nil_check(F.p3322))).f_b == ((void *)0)))) {
((*(yR119 *)rt_nil_check(F.v8140))).f_ret = yr2587_MakeRep(((*(yR99 *)rt_nil_check(F.p3322))).f_b, INT64_C(0), 0);
yr2446_CheckRepresented(((*(yR119 *)rt_nil_check(F.v8140))).f_ret, ((*(yR99 *)rt_nil_check(F.p3322))).f_line);
} else {
((*(yR119 *)rt_nil_check(F.v8140))).f_ret = v1342;
if (((*(yR119 *)rt_nil_check(F.v8140))).f_func) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3322))).f_line, ((*(yR99 *)rt_nil_check(F.p3322))).f_name, y_str(": a FUNCTION has a RETURNS clause (X.A)", 39));
}
}
F.v8150 = ((void *)0);
F.v8144 = ((*(yR99 *)rt_nil_check(F.p3322))).f_a;
while ((!(F.v8144 == ((void *)0)))) {
Y_TICK();
F.v8152 = yr3309_FormalRep(((*(yR99 *)rt_nil_check(F.v8144))).f_b);
if ((((*(yR119 *)rt_nil_check(F.v8140))).f_func && ((!(((*(yR99 *)rt_nil_check(F.v8144))).f_ival == v891))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.v8144))).f_line, ((*(yR99 *)rt_nil_check(F.p3322))).f_name, y_str(": the parameters of a FUNCTION are CONST (X.A.2)", 48));
}
if ((((F.p3323 == v879)) && ((((*(yR99 *)rt_nil_check(F.v8144))).f_ival == v894)))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.v8144))).f_line, ((*(yR99 *)rt_nil_check(F.p3322))).f_name, y_str(": a process has no OUT parameters", 33));
}
F.v8146 = ((*(yR99 *)rt_nil_check(F.v8144))).f_a;
while ((!(F.v8146 == ((void *)0)))) {
Y_TICK();
({ F.v8148 = rt_alloc(sizeof(yR114)); });
(*(yR114 *)rt_nil_check(F.v8148)) = ((yR114){ .f_name = ((*(yR99 *)rt_nil_check(F.v8146))).f_name, .f_cls = ((*(yR99 *)rt_nil_check(F.v8144))).f_ival, .f_rep = F.v8152, .f_cname = yr1194_Fresh(y_str("p", 1)), .f_next = ((void *)0) });
if ((F.v8150 == ((void *)0))) {
((*(yR119 *)rt_nil_check(F.v8140))).f_params = F.v8148;
} else {
((*(yR114 *)rt_nil_check(F.v8150))).f_next = F.v8148;
}
F.v8150 = F.v8148;
((*(yR119 *)rt_nil_check(F.v8140))).f_nparams = rt_range(rt_add(((*(yR119 *)rt_nil_check(F.v8140))).f_nparams, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v8146 = ((*(yR99 *)rt_nil_check(F.v8146))).f_next;
}
F.v8144 = ((*(yR99 *)rt_nil_check(F.v8144))).f_next;
}
F.v8142 = yr2232_Find(((*(yR99 *)rt_nil_check(F.p3322))).f_name);
if ((!(F.v8142 == ((void *)0)))) {
F.v8142 = yr2337_Real(F.v8142);
}
if ((((((*(yR99 *)rt_nil_check(F.p3322))).f_ival == INT64_C(0))) && ((!(F.v8142 == ((void *)0)))))) {
if ((((*(yR119 *)rt_nil_check(F.v8142))).f_kind == v885)) {
yr1158_Warn(((*(yR99 *)rt_nil_check(F.p3322))).f_line, yr3194_Join(((*(yR99 *)rt_nil_check(F.p3322))).f_name, yr1055_T(y_str(" hides the system routine of that name (X.A.1)", 46)), INT64_C(0)));
}
}
if (((((!(((*(yR99 *)rt_nil_check(F.p3322))).f_ival == INT64_C(0)))) && ((!(F.v8142 == ((void *)0))))) && ((((*(yR119 *)rt_nil_check(F.v8142))).f_kind == v870)))) {
((*(yR119 *)rt_nil_check(F.v8140))).f_alt = F.v8142;
if ((!(((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v8142))).f_ret))).f_kind == v846)) == ((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v8140))).f_ret))).f_kind == v846))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3322))).f_line, ((*(yR99 *)rt_nil_check(F.p3322))).f_name, y_str(": a value-returning routine is extended or replaced only by one, a procedure only by a procedure (X.A.1)", 104));
}
if ((((((*(yR99 *)rt_nil_check(F.p3322))).f_ival == v333)) && ((!(yr3328_SameSignature(F.v8140, F.v8142) == ((void *)0)))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3322))).f_line, ((*(yR99 *)rt_nil_check(F.p3322))).f_name, y_str(" EXTENDS a definition for the same parameter types: use REPLACES", 64));
}
if ((((((*(yR99 *)rt_nil_check(F.p3322))).f_ival == v429)) && ((yr3328_SameSignature(F.v8140, F.v8142) == ((void *)0))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3322))).f_line, ((*(yR99 *)rt_nil_check(F.p3322))).f_name, y_str(" REPLACES no definition for these parameter types", 49));
}
}
((*(yR99 *)rt_nil_check(F.p3322))).f_sym = F.v8140;
yr2304_Define(F.v8140, ((*(yR99 *)rt_nil_check(F.p3322))).f_line);
F.v8144 = yr1888_NewNode(v663, ((*(yR99 *)rt_nil_check(F.p3322))).f_line);
((*(yR99 *)rt_nil_check(F.v8144))).f_sym = F.v8140;
((*(yR99 *)rt_nil_check(F.v8144))).f_next = v1630;
v1630 = F.v8144;
((rt_int *)(v1285).p)[y_ix1(v1285, ((*(yR119 *)rt_nil_check(F.v8140))).f_level)] = yr1194_Fresh(y_str("yf", 2));
((*(yR119 *)rt_nil_check(F.v8140))).f_members = yr2202_NewSym(v885, ((rt_int *)(v1285).p)[y_ix1(v1285, ((*(yR119 *)rt_nil_check(F.v8140))).f_level)]);
yr1020_SB();
yr1031_SA(y_str("struct ", 7));
yr1038_ST(((rt_int *)(v1285).p)[y_ix1(v1285, ((*(yR119 *)rt_nil_check(F.v8140))).f_level)]);
yr1031_SA(y_str(";", 1));
F.v8154 = yr1050_SE();
yr1104_Put(&v972, F.v8154);
yr1020_SB();
yr1031_SA(y_str("static ", 7));
if ((F.p3323 == v879)) {
yr1031_SA(y_str("void", 4));
} else {
yr1038_ST(yr2405_CType(((*(yR119 *)rt_nil_check(F.v8140))).f_ret));
}
yr1031_SA(y_str(" ", 1));
yr1038_ST(((*(yR119 *)rt_nil_check(F.v8140))).f_cname);
yr1031_SA(y_str("(", 1));
F.v8154 = yr1050_SE();
if ((F.p3323 == v879)) {
F.v8154 = yr3194_Join(F.v8154, yr1055_T(y_str("void *arg", 9)), INT64_C(0));
F.v8156 = 0;
} else if ((v1273 > INT64_C(0))) {
yr1020_SB();
yr1038_ST(F.v8154);
yr1031_SA(y_str("struct ", 7));
yr1038_ST(((rt_int *)(v1285).p)[y_ix1(v1285, v1273)]);
yr1031_SA(y_str(" *up", 4));
F.v8154 = yr1050_SE();
F.v8156 = 0;
}
F.v8148 = ((*(yR119 *)rt_nil_check(F.v8140))).f_params;
while ((((!(F.v8148 == ((void *)0)))) && ((!(F.p3323 == v879))))) {
Y_TICK();
yr1020_SB();
yr1038_ST(F.v8154);
if ((!F.v8156)) {
yr1031_SA(y_str(", ", 2));
}
F.v8156 = 0;
yr1038_ST(yr3315_ParamCType(F.v8148));
yr1031_SA(y_str(" a_", 3));
yr1038_ST(((*(yR114 *)rt_nil_check(F.v8148))).f_cname);
F.v8154 = yr1050_SE();
F.v8148 = ((*(yR114 *)rt_nil_check(F.v8148))).f_next;
}
if (F.v8156) {
F.v8154 = yr3194_Join(F.v8154, yr1055_T(y_str("void", 4)), INT64_C(0));
}
F.v8154 = yr3194_Join(F.v8154, yr1055_T(y_str(")", 1)), INT64_C(0));
((*(yR119 *)rt_nil_check(F.v8140))).f_mnext = yr2202_NewSym(v885, F.v8154);
yr1104_Put(&v980, yr3194_Join(F.v8154, yr1055_T(y_str(";", 1)), INT64_C(0)));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3328_SameSignature(void * a_p3329, void * a_p3330) {
struct yf3331 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3329 = a_p3329;
F.p3330 = a_p3330;
F.v8203 = F.p3330;
while ((!(F.v8203 == ((void *)0)))) {
Y_TICK();
if ((((*(yR119 *)rt_nil_check(F.v8203))).f_nparams == ((*(yR119 *)rt_nil_check(F.p3329))).f_nparams)) {
F.v8209 = 1;
F.v8205 = ((*(yR119 *)rt_nil_check(F.p3329))).f_params;
F.v8207 = ((*(yR119 *)rt_nil_check(F.v8203))).f_params;
while ((!(F.v8205 == ((void *)0)))) {
Y_TICK();
if ((!yr2423_SameType(((*(yR114 *)rt_nil_check(F.v8205))).f_rep, ((*(yR114 *)rt_nil_check(F.v8207))).f_rep))) {
F.v8209 = 0;
}
F.v8205 = ((*(yR114 *)rt_nil_check(F.v8205))).f_next;
F.v8207 = ((*(yR114 *)rt_nil_check(F.v8207))).f_next;
}
if (F.v8209) {
{ void * rv8212 = F.v8203;
y_use = F.yu; return rv8212; }
}
}
F.v8203 = ((*(yR119 *)rt_nil_check(F.v8203))).f_alt;
}
{ void * rv8213 = ((void *)0);
y_use = F.yu; return rv8213; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3335_RoutineBody(void * a_p3336) {
struct yf3337 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3336 = a_p3336;
F.v8217 = ((*(yR99 *)rt_nil_check(F.p3336))).f_sym;
F.v8219 = v990;
F.v8221 = v992;
F.v8223 = v1273;
F.v8225 = v1520;
F.v8227 = v1523;
F.v8229 = v1548;
F.v8231 = v1562;
F.v8233 = v1589;
F.v8235 = v1592;
F.v8237 = v1595;
F.v8239 = v1624;
v990 = ((yR134){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v992 = ((yR134){ .f_head = ((void *)0), .f_tail = ((void *)0) });
F.v8249 = ((yR134){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v1273 = ((*(yR119 *)rt_nil_check(F.v8217))).f_level;
F.v8245 = ((*(yR119 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v8217))).f_members))).f_name;
((rt_int *)(v1285).p)[y_ix1(v1285, v1273)] = F.v8245;
v1523 = v1520;
v1592 = v1589;
v1562 = INT64_C(0);
v1595 = F.v8217;
v1624 = 0;
yr2209_OpenScope(0);
v1322 = rt_range(rt_add(v1322, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1318).p)[y_ix1(v1318, v1322)] = ((*(yR119 *)rt_nil_check(F.v8217))).f_depth;
((rt_int *)(v1320).p)[y_ix1(v1320, v1322)] = ((*(yR119 *)rt_nil_check(F.v8217))).f_serial;
F.v8241 = ((*(yR119 *)rt_nil_check(F.v8217))).f_params;
while ((!(F.v8241 == ((void *)0)))) {
Y_TICK();
if ((((*(yR114 *)rt_nil_check(F.v8241))).f_cls == v891)) {
F.v8243 = yr2202_NewSym(v858, ((*(yR114 *)rt_nil_check(F.v8241))).f_name);
} else {
F.v8243 = yr2202_NewSym(v855, ((*(yR114 *)rt_nil_check(F.v8241))).f_name);
}
((*(yR119 *)rt_nil_check(F.v8243))).f_rep = ((*(yR114 *)rt_nil_check(F.v8241))).f_rep;
((*(yR119 *)rt_nil_check(F.v8243))).f_level = v1273;
((*(yR119 *)rt_nil_check(F.v8243))).f_cname = ((*(yR114 *)rt_nil_check(F.v8241))).f_cname;
if ((((*(yR119 *)rt_nil_check(F.v8217))).f_kind == v879)) {
((*(yR119 *)rt_nil_check(F.v8243))).f_byref = (((*(yR114 *)rt_nil_check(F.v8241))).f_cls == v897);
yr2324_DeclStorage(yr3315_ParamCType(F.v8241), ((*(yR114 *)rt_nil_check(F.v8241))).f_cname);
} else if ((((*(yR114 *)rt_nil_check(F.v8241))).f_cls == v897)) {
((*(yR119 *)rt_nil_check(F.v8243))).f_byref = 1;
yr2324_DeclStorage(yr3315_ParamCType(F.v8241), ((*(yR114 *)rt_nil_check(F.v8241))).f_cname);
yr1126_Emit(yr3194_Join(yr1055_T(y_str("F.", 2)), ((*(yR114 *)rt_nil_check(F.v8241))).f_cname, yr3194_Join(yr1055_T(y_str(" = a_", 5)), ((*(yR114 *)rt_nil_check(F.v8241))).f_cname, yr1055_T(y_str(";", 1)))));
} else if ((((*(yR114 *)rt_nil_check(F.v8241))).f_cls == v894)) {
yr2324_DeclStorage(yr2405_CType(((*(yR114 *)rt_nil_check(F.v8241))).f_rep), ((*(yR114 *)rt_nil_check(F.v8241))).f_cname);
yr2324_DeclStorage(yr3315_ParamCType(F.v8241), yr3194_Join(((*(yR114 *)rt_nil_check(F.v8241))).f_cname, yr1055_T(y_str("_o", 2)), INT64_C(0)));
yr1126_Emit(yr3194_Join(yr1055_T(y_str("F.", 2)), ((*(yR114 *)rt_nil_check(F.v8241))).f_cname, yr3194_Join(yr1055_T(y_str("_o = a_", 7)), ((*(yR114 *)rt_nil_check(F.v8241))).f_cname, yr1055_T(y_str(";", 1)))));
if ((yr2380_Deep(((*(yR114 *)rt_nil_check(F.v8241))).f_rep) && ((!(((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v8241))).f_rep))).f_kind == v837))))) {
yr1126_Emit(yr3194_Join(yr1055_T(y_str("y_init(", 7)), yr2411_DescOf(((*(yR114 *)rt_nil_check(F.v8241))).f_rep), yr3194_Join(yr1055_T(y_str(", &F.", 5)), ((*(yR114 *)rt_nil_check(F.v8241))).f_cname, yr1055_T(y_str(");", 2)))));
}
if ((((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v8241))).f_rep))).f_kind == v837)) {
yr1126_Emit(yr3194_Join(yr1055_T(y_str("F.", 2)), ((*(yR114 *)rt_nil_check(F.v8241))).f_cname, yr3194_Join(yr1055_T(y_str(" = *a_", 6)), ((*(yR114 *)rt_nil_check(F.v8241))).f_cname, yr1055_T(y_str(";", 1)))));
}
} else {
yr2324_DeclStorage(yr2405_CType(((*(yR114 *)rt_nil_check(F.v8241))).f_rep), ((*(yR114 *)rt_nil_check(F.v8241))).f_cname);
yr1126_Emit(yr3194_Join(yr1055_T(y_str("F.", 2)), ((*(yR114 *)rt_nil_check(F.v8241))).f_cname, yr3194_Join(yr1055_T(y_str(" = a_", 5)), ((*(yR114 *)rt_nil_check(F.v8241))).f_cname, yr1055_T(y_str(";", 1)))));
}
yr2304_Define(F.v8243, ((*(yR99 *)rt_nil_check(F.p3336))).f_line);
F.v8241 = ((*(yR114 *)rt_nil_check(F.v8241))).f_next;
}
yr3547_EnterMonitor(F.v8217);
yr3391_Declarations(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3336))).f_c))).f_a);
if (yr3139_BlockFalls(((*(yR99 *)rt_nil_check(F.p3336))).f_c)) {
if ((((*(yR119 *)rt_nil_check(F.v8217))).f_kind == v879)) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3336))).f_line, ((*(yR99 *)rt_nil_check(F.p3336))).f_name, y_str(": control reaches the end of the process, which ends with TERMINATE_PROCESS (IX.A.7)", 84));
} else {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3336))).f_line, ((*(yR99 *)rt_nil_check(F.p3336))).f_name, y_str(": control reaches the end of the routine, which ends with RETURN (IX.A.6)", 73));
}
}
yr3105_BlockStatements(((*(yR99 *)rt_nil_check(F.p3336))).f_c);
if ((((*(yR119 *)rt_nil_check(F.v8217))).f_kind == v879)) {
yr1132_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
} else {
yr1132_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
}
yr3523_AwaitProcesses();
yr2221_CloseScope();
v1322 = rt_range(rt_sub(v1322, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1020_SB();
yr1031_SA(y_str("struct ", 7));
yr1038_ST(F.v8245);
yr1031_SA(y_str(" {", 2));
if ((v1273 > INT64_C(1))) {
yr1031_SA(y_str(" struct ", 8));
yr1038_ST(((rt_int *)(v1285).p)[y_ix1(v1285, rt_sub(v1273, INT64_C(1)))]);
yr1031_SA(y_str(" *up;", 5));
} else {
yr1031_SA(y_str(" void *up;", 10));
}
F.v8247 = yr1050_SE();
yr1104_Put(&v976, F.v8247);
yr1119_Append(&v976, &v992);
yr1111_PutS(&v976, y_str("rt_int yu;", 10));
yr1111_PutS(&v976, y_str("};", 2));
yr1104_Put(&F.v8249, yr3194_Join(((*(yR119 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v8217))).f_mnext))).f_name, yr1055_T(y_str(" {", 2)), INT64_C(0)));
if (v1624) {
yr1111_PutS(&F.v8249, y_str("volatile", 8));
}
yr1104_Put(&F.v8249, yr3194_Join(yr1055_T(y_str("struct ", 7)), F.v8245, yr1055_T(y_str(" F;", 3))));
yr1111_PutS(&F.v8249, y_str("memset((void *)&F, 0, sizeof F);", 32));
if ((((*(yR119 *)rt_nil_check(F.v8217))).f_kind == v879)) {
yr1104_Put(&F.v8249, yr3194_Join(yr1055_T(y_str("F = *(struct ", 13)), F.v8245, yr1055_T(y_str(" *)arg;", 7))));
} else if ((v1273 > INT64_C(1))) {
yr1111_PutS(&F.v8249, y_str("F.up = up;", 10));
}
yr1111_PutS(&F.v8249, y_str("F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));", 50));
yr1119_Append(&F.v8249, &v990);
yr1111_PutS(&F.v8249, y_str("}", 1));
yr1119_Append(&v982, &F.v8249);
v990 = F.v8219;
v992 = F.v8221;
v1273 = F.v8223;
((rt_int *)(v1285).p)[y_ix1(v1285, v1273)] = yr1194_Fresh(y_str("unused", 6));
if ((!(F.v8237 == ((void *)0)))) {
((rt_int *)(v1285).p)[y_ix1(v1285, v1273)] = ((*(yR119 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v8237))).f_members))).f_name;
}
v1520 = F.v8225;
v1523 = F.v8227;
v1548 = F.v8229;
v1562 = F.v8231;
v1589 = F.v8233;
v1592 = F.v8235;
v1595 = F.v8237;
v1624 = F.v8239;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3341_DeclareStorage(void * a_p3342, void * a_p3343, rt_int a_p3344) {
struct yf3345 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
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
yr3564_DeclareSignal(F.p3342, F.p3344);
}
if (yr2393_HoldsSignal(F.p3343)) {
yr3571_DeclareSignalArray(F.p3342, F.p3344);
}
if ((((*(yR104 *)rt_nil_check(F.p3343))).f_kind == v834)) {
yr1126_Emit(yr3194_Join(yr1055_T(y_str("rt_lock_init(&", 14)), yr2331_SymPath(F.p3342), yr1055_T(y_str(");", 2))));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3349_SimpleDecl(void * a_p3350) {
struct yf3351 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3350 = a_p3350;
F.v8319 = ((*(yR99 *)rt_nil_check(F.p3350))).f_kind;
if ((((F.v8319 == v633)) || ((F.v8319 == v636)))) {
F.v8321 = yr2587_MakeRep(((*(yR99 *)rt_nil_check(F.p3350))).f_b, INT64_C(0), 0);
yr2446_CheckRepresented(F.v8321, ((*(yR99 *)rt_nil_check(F.p3350))).f_line);
if ((((F.v8319 == v633)) && yr2399_NonAssignable(F.v8321))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3350))).f_line, y_str("signals, files and semaphores, and what holds them, are variables (VII.B)", 73));
}
F.v8325 = ((*(yR99 *)rt_nil_check(F.p3350))).f_a;
while ((!(F.v8325 == ((void *)0)))) {
Y_TICK();
if ((F.v8319 == v633)) {
F.v8327 = yr2202_NewSym(v858, ((*(yR99 *)rt_nil_check(F.v8325))).f_name);
} else {
F.v8327 = yr2202_NewSym(v855, ((*(yR99 *)rt_nil_check(F.v8325))).f_name);
}
yr3341_DeclareStorage(F.v8327, F.v8321, ((*(yR99 *)rt_nil_check(F.p3350))).f_line);
if ((!(((*(yR99 *)rt_nil_check(F.p3350))).f_c == ((void *)0)))) {
yr2846_Expr(((*(yR99 *)rt_nil_check(F.p3350))).f_c, F.v8321, &F.v8329, &F.v8323);
if ((F.v8319 == v633)) {
yr2797_Store(yr2331_SymPath(F.v8327), F.v8321, F.v8329, F.v8323, ((*(yR99 *)rt_nil_check(F.p3350))).f_line);
} else {
F.v8331 = yr3023_UserAssign(yr2331_SymPath(F.v8327), F.v8321, F.v8329, F.v8323, ((*(yR99 *)rt_nil_check(F.p3350))).f_line);
if ((!(F.v8331 == INT64_C(0)))) {
yr1126_Emit(F.v8331);
} else {
if ((((*(yR104 *)rt_nil_check(F.v8321))).f_opaque && (((rt_mod(((*(yR104 *)rt_nil_check(F.v8321))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3350))).f_line, ((*(yR104 *)rt_nil_check(F.v8321))).f_tname, y_str(" is opaque here: := is not exported to initialize it (X.B.3)", 60));
}
yr2797_Store(yr2331_SymPath(F.v8327), F.v8321, F.v8329, F.v8323, ((*(yR99 *)rt_nil_check(F.p3350))).f_line);
}
}
if ((F.v8319 == v633)) {
yr2698_Manifest(((*(yR99 *)rt_nil_check(F.p3350))).f_c, &F.v8333, &F.v8335);
if ((F.v8333 && yr2356_IsDiscrete(F.v8321))) {
((*(yR119 *)rt_nil_check(F.v8327))).f_hasmv = 1;
((*(yR119 *)rt_nil_check(F.v8327))).f_mval = F.v8335;
}
}
}
if ((!(((*(yR99 *)rt_nil_check(F.v8325))).f_a == ((void *)0)))) {
yr3362_AtLocation(F.v8327, ((*(yR99 *)rt_nil_check(F.v8325))).f_a);
}
yr2304_Define(F.v8327, ((*(yR99 *)rt_nil_check(F.v8325))).f_line);
F.v8325 = ((*(yR99 *)rt_nil_check(F.v8325))).f_next;
}
y_use = F.yu; return;
}
if ((F.v8319 == v645)) {
F.v8321 = yr2587_MakeRep(((*(yR99 *)rt_nil_check(F.p3350))).f_b, ((*(yR99 *)rt_nil_check(F.p3350))).f_name, 0);
yr2446_CheckRepresented(F.v8321, ((*(yR99 *)rt_nil_check(F.p3350))).f_line);
F.v8327 = yr2202_NewSym(v861, ((*(yR99 *)rt_nil_check(F.p3350))).f_name);
((*(yR119 *)rt_nil_check(F.v8327))).f_rep = F.v8321;
yr2304_Define(F.v8327, ((*(yR99 *)rt_nil_check(F.p3350))).f_line);
yr2610_ResolvePending(((*(yR99 *)rt_nil_check(F.p3350))).f_name, F.v8321);
yr3355_NoteAlphabet(F.p3350, F.v8321);
y_use = F.yu; return;
}
if ((F.v8319 == v642)) {
F.v8321 = yr2587_MakeRep(((*(yR99 *)rt_nil_check(F.p3350))).f_b, ((*(yR99 *)rt_nil_check(F.p3350))).f_name, 1);
if ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3350))).f_b))).f_kind == v666)) {
F.v8321 = yr2350_CopyRep(F.v8321);
((*(yR104 *)rt_nil_check(F.v8321))).f_tid = yr2581_NewTid(((*(yR99 *)rt_nil_check(F.p3350))).f_name);
((*(yR104 *)rt_nil_check(F.v8321))).f_tname = ((*(yR99 *)rt_nil_check(F.p3350))).f_name;
if (((((((*(yR104 *)rt_nil_check(F.v8321))).f_kind == v798)) || ((((*(yR104 *)rt_nil_check(F.v8321))).f_kind == v801))) || ((((*(yR104 *)rt_nil_check(F.v8321))).f_kind == v804)))) {
if ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3350))).f_b))).f_a == ((void *)0))) {
((*(yR104 *)rt_nil_check(F.v8321))).f_abstract = 1;
}
}
}
F.v8327 = yr2202_NewSym(v864, ((*(yR99 *)rt_nil_check(F.p3350))).f_name);
((*(yR119 *)rt_nil_check(F.v8327))).f_rep = F.v8321;
yr2304_Define(F.v8327, ((*(yR99 *)rt_nil_check(F.p3350))).f_line);
yr2610_ResolvePending(((*(yR99 *)rt_nil_check(F.p3350))).f_name, F.v8321);
yr3355_NoteAlphabet(F.p3350, F.v8321);
y_use = F.yu; return;
}
if ((F.v8319 == v639)) {
F.v8325 = ((*(yR99 *)rt_nil_check(F.p3350))).f_a;
while ((!(F.v8325 == ((void *)0)))) {
Y_TICK();
F.v8327 = yr2202_NewSym(v882, ((*(yR99 *)rt_nil_check(F.v8325))).f_name);
((*(yR119 *)rt_nil_check(F.v8327))).f_level = v1273;
((*(yR119 *)rt_nil_check(F.v8327))).f_cname = yr1194_Fresh(y_str("lab", 3));
yr2304_Define(F.v8327, ((*(yR99 *)rt_nil_check(F.v8325))).f_line);
F.v8325 = ((*(yR99 *)rt_nil_check(F.v8325))).f_next;
}
y_use = F.yu; return;
}
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3350))).f_line, y_str("not a simple declaration", 24));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3355_NoteAlphabet(void * a_p3356, void * a_p3357) {
struct yf3358 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3356 = a_p3356;
F.p3357 = a_p3357;
if ((((((*(yR104 *)rt_nil_check(F.p3357))).f_kind == v813)) && ((((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3356))).f_b))).f_kind == v672)))) {
F.v8354 = yr1888_NewNode(v663, ((*(yR99 *)rt_nil_check(F.p3356))).f_line);
((*(yR99 *)rt_nil_check(F.v8354))).f_name = ((*(yR99 *)rt_nil_check(F.p3356))).f_name;
((*(yR99 *)rt_nil_check(F.v8354))).f_rep = F.p3357;
((*(yR99 *)rt_nil_check(F.v8354))).f_next = v1471;
v1471 = F.v8354;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3362_AtLocation(void * a_p3363, void * a_p3364) {
struct yf3365 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3363 = a_p3363;
F.p3364 = a_p3364;
if ((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.p3363))).f_rep))).f_kind == v831)) {
yr3578_DeviceSignal(F.p3363, F.p3364);
y_use = F.yu; return;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3369_Defer(void * a_p3370, rt_int a_p3371, void * a_p3372, rt_int a_p3373) {
struct yf3374 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3370 = a_p3370;
F.p3371 = a_p3371;
F.p3372 = a_p3372;
F.p3373 = a_p3373;
F.v8364 = v1267;
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
while (((*(yR124 *)rt_nil_check(((void * *)(v1265).p)[y_ix1(v1265, F.v8364)]))).f_closed) {
Y_TICK();
F.v8364 = rt_range(rt_sub(F.v8364, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
((rt_int *)(v1734).p)[y_ix1(v1734, v1749)] = rt_range(rt_add(v1752, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1736).p)[y_ix1(v1736, v1749)] = rt_range(rt_sub(v1267, F.v8364), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo8377 = rt_add(F.v8364, INT64_C(1));
F.hi8378 = v1267;
{ rt_int hi8382 = F.hi8378;
for (rt_int i8381 = F.lo8377; i8381 <= hi8382; i8381++) { F.c_8380 = i8381; Y_TICK();
v1752 = rt_range(rt_add(v1752, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1747).p)[y_ix1(v1747, v1752)] = ((void * *)(v1265).p)[y_ix1(v1265, F.c_8380)];
if (i8381 == hi8382) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3378_RunDeferred(rt_int a_p3379, rt_int a_p3380) {
struct yf3381 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3379 = a_p3379;
F.p3380 = a_p3380;
F.v8389 = rt_range(rt_add(F.p3379, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((F.v8389 <= v1749)) {
Y_TICK();
F.lo8400 = ((rt_int *)(v1734).p)[y_ix1(v1734, F.v8389)];
F.hi8401 = rt_sub((rt_add(((rt_int *)(v1734).p)[y_ix1(v1734, F.v8389)], ((rt_int *)(v1736).p)[y_ix1(v1736, F.v8389)])), INT64_C(1));
{ rt_int hi8405 = F.hi8401;
for (rt_int i8404 = F.lo8400; i8404 <= hi8405; i8404++) { F.c_8403 = i8404; Y_TICK();
yr2215_ReopenScope(((void * *)(v1747).p)[y_ix1(v1747, F.c_8403)]);
if (i8404 == hi8405) break;
}}
F.v8393 = v1270;
F.v8395 = v1755;
v1270 = ((rt_int *)(v1690).p)[y_ix1(v1690, F.v8389)];
v1755 = ((void * *)(v1701).p)[y_ix1(v1701, F.v8389)];
if ((((rt_int *)(v1679).p)[y_ix1(v1679, F.v8389)] == INT64_C(1))) {
yr3335_RoutineBody(((void * *)(v1668).p)[y_ix1(v1668, F.v8389)]);
} else {
yr3385_ModuleInit(F.v8389);
}
v1270 = F.v8393;
v1755 = F.v8395;
F.lo8410 = INT64_C(1);
F.hi8411 = ((rt_int *)(v1736).p)[y_ix1(v1736, F.v8389)];
{ rt_int hi8415 = F.hi8411;
for (rt_int i8414 = F.lo8410; i8414 <= hi8415; i8414++) { F.c_8413 = i8414; Y_TICK();
yr2221_CloseScope();
if (i8414 == hi8415) break;
}}
F.v8389 = rt_range(rt_add(F.v8389, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1749 = F.p3379;
v1752 = F.p3380;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3385_ModuleInit(rt_int a_p3386) {
struct yf3387 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3386 = a_p3386;
F.v8421 = ((void * *)(v1668).p)[y_ix1(v1668, F.p3386)];
F.v8423 = v990;
F.v8425 = ((void * *)(v1712).p)[y_ix1(v1712, F.p3386)];
v990 = ((yR134){ .f_head = ((void *)0), .f_tail = ((void *)0) });
if (((rt_int *)(v1723).p)[y_ix1(v1723, F.p3386)]) {
yr1126_Emit(yr3194_Join(yr1055_T(y_str("y_mon_enter(", 12)), yr3541_MonitorPath(v1755), yr1055_T(y_str(");", 2))));
}
v1548 = rt_range(rt_add(v1548, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1535).p)[y_ix1(v1535, v1548)] = INT64_C(0);
((rt_int *)(v1546).p)[y_ix1(v1546, v1548)] = INT64_C(0);
yr3105_BlockStatements(((*(yR99 *)rt_nil_check(F.v8421))).f_c);
v1548 = rt_range(rt_sub(v1548, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (((rt_int *)(v1723).p)[y_ix1(v1723, F.p3386)]) {
yr1126_Emit(yr3194_Join(yr1055_T(y_str("y_mon_leave(", 12)), yr3541_MonitorPath(v1755), yr1055_T(y_str(");", 2))));
}
if ((!((v990).f_head == ((void *)0)))) {
((*(yR129 *)rt_nil_check((v990).f_tail))).f_next = ((*(yR129 *)rt_nil_check(F.v8425))).f_next;
((*(yR129 *)rt_nil_check(F.v8425))).f_next = (v990).f_head;
if (((F.v8423).f_tail == F.v8425)) {
(F.v8423).f_tail = (v990).f_tail;
}
}
v990 = F.v8423;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3391_Declarations(void * a_p3392) {
struct yf3393 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3392 = a_p3392;
F.v8439 = F.p3392;
F.v8441 = ((void * *)(v1296).p)[y_ix1(v1296, v1267)];
F.v8443 = v1749;
F.v8445 = v1752;
((void * *)(v1296).p)[y_ix1(v1296, v1267)] = F.p3392;
while ((!(F.v8439 == ((void *)0)))) {
Y_TICK();
v994 = ((*(yR99 *)rt_nil_check(F.v8439))).f_line;
((void * *)(v1307).p)[y_ix1(v1307, v1267)] = F.v8439;
if ((((((*(yR99 *)rt_nil_check(F.v8439))).f_kind == v648)) || ((((*(yR99 *)rt_nil_check(F.v8439))).f_kind == v660)))) {
if ((((*(yR99 *)rt_nil_check(F.v8439))).f_sym == ((void *)0))) {
yr3397_DeclareRoutine(F.v8439);
}
} else if (((((*(yR99 *)rt_nil_check(F.v8439))).f_kind == v618))) {
if ((((*(yR99 *)rt_nil_check(F.v8439))).f_ival == INT64_C(0))) {
yr3499_CompileModule(F.v8439);
}
} else if ((((*(yR99 *)rt_nil_check(F.v8439))).f_kind == v654)) {
yr3505_DeclareTemplate(F.v8439);
} else if ((((*(yR99 *)rt_nil_check(F.v8439))).f_kind == v657)) {
yr3511_Instantiate(F.v8439);
} else {
yr3349_SimpleDecl(F.v8439);
}
F.v8439 = ((*(yR99 *)rt_nil_check(F.v8439))).f_next;
}
((void * *)(v1307).p)[y_ix1(v1307, v1267)] = ((void *)0);
((void * *)(v1296).p)[y_ix1(v1296, v1267)] = F.v8441;
yr2617_CheckPending();
yr3462_ResolveLater(v1267);
if ((!((*(yR124 *)rt_nil_check(((void * *)(v1265).p)[y_ix1(v1265, v1267)]))).f_closed)) {
yr3378_RunDeferred(F.v8443, F.v8445);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3397_DeclareRoutine(void * a_p3398) {
struct yf3399 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
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
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3403_Alias(rt_int a_p3404, void * a_p3405) {
struct yf3406 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3404 = a_p3404;
F.p3405 = a_p3405;
F.v8455 = yr2202_NewSym(v888, F.p3404);
((*(yR119 *)rt_nil_check(F.v8455))).f_target = F.p3405;
((*(yR119 *)rt_nil_check(F.v8455))).f_readonly = ((*(yR119 *)rt_nil_check(F.p3405))).f_readonly;
{ void * rv8456 = F.v8455;
y_use = F.yu; return rv8456; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3410_AddLits(void * * a_p3411, void * a_p3412, rt_int a_p3413) {
struct yf3414 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3411 = a_p3411;
F.p3412 = a_p3412;
F.p3413 = a_p3413;
if ((((F.p3413 > INT64_C(8))) || ((*(yR104 *)rt_nil_check(F.p3412))).f_opaque)) {
y_use = F.yu; return;
}
if ((((*(yR104 *)rt_nil_check(F.p3412))).f_kind == v810)) {
F.v8462 = ((*(yR104 *)rt_nil_check(F.p3412))).f_lits;
while ((!(F.v8462 == ((void *)0)))) {
Y_TICK();
F.v8464 = yr2297_FindLit(((*(yR99 *)rt_nil_check(F.v8462))).f_name, F.p3412);
if ((!(F.v8464 == ((void *)0)))) {
F.v8464 = yr3403_Alias(((*(yR99 *)rt_nil_check(F.v8462))).f_name, F.v8464);
((*(yR119 *)rt_nil_check(F.v8464))).f_mnext = (*F.p3411);
(*F.p3411) = F.v8464;
}
F.v8462 = ((*(yR99 *)rt_nil_check(F.v8462))).f_next;
}
} else if ((((*(yR104 *)rt_nil_check(F.p3412))).f_kind == v819)) {
F.v8466 = ((*(yR104 *)rt_nil_check(F.p3412))).f_fields;
while ((!(F.v8466 == ((void *)0)))) {
Y_TICK();
yr3410_AddLits(&(*F.p3411), ((*(yR109 *)rt_nil_check(F.v8466))).f_rep, rt_range(rt_add(F.p3413, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v8466 = ((*(yR109 *)rt_nil_check(F.v8466))).f_next;
}
} else if (((((((*(yR104 *)rt_nil_check(F.p3412))).f_kind == v816)) || ((((*(yR104 *)rt_nil_check(F.p3412))).f_kind == v828))) || ((((*(yR104 *)rt_nil_check(F.p3412))).f_kind == v825)))) {
yr3410_AddLits(&(*F.p3411), ((*(yR104 *)rt_nil_check(F.p3412))).f_elem, rt_range(rt_add(F.p3413, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3418_Provides(void * a_p3419, rt_int a_p3420) {
struct yf3421 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3419 = a_p3419;
F.p3420 = a_p3420;
F.v8476 = ((*(yR99 *)rt_nil_check(F.p3419))).f_b;
if ((((*(yR99 *)rt_nil_check(F.p3419))).f_name == F.p3420)) {
{ rt_int rv8478 = 1;
y_use = F.yu; return rv8478; }
}
while ((!(F.v8476 == ((void *)0)))) {
Y_TICK();
if ((((!(((*(yR99 *)rt_nil_check(F.v8476))).f_ival == INT64_C(0)))) && ((((*(yR99 *)rt_nil_check(F.v8476))).f_ival == F.p3420)))) {
{ rt_int rv8481 = 1;
y_use = F.yu; return rv8481; }
}
if ((((((*(yR99 *)rt_nil_check(F.v8476))).f_ival == INT64_C(0))) && ((((*(yR99 *)rt_nil_check(F.v8476))).f_name == F.p3420)))) {
{ rt_int rv8484 = 1;
y_use = F.yu; return rv8484; }
}
F.v8476 = ((*(yR99 *)rt_nil_check(F.v8476))).f_next;
}
{ rt_int rv8486 = 0;
y_use = F.yu; return rv8486; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3425_ImportLater(rt_int a_p3426, rt_int a_p3427, void * * a_p3428) {
struct yf3429 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3426 = a_p3426;
F.p3427 = a_p3427;
F.p3428_o = a_p3428;
F.p3428 = ((void *)0);
if ((v1267 < INT64_C(0))) {
{ rt_int rv8495 = INT64_C(0);
(*F.p3428_o) = F.p3428;
y_use = F.yu; return rv8495; }
}
F.v8492 = ((void * *)(v1296).p)[y_ix1(v1296, v1267)];
while ((!(F.v8492 == ((void *)0)))) {
Y_TICK();
if (((((((*(yR99 *)rt_nil_check(F.v8492))).f_kind == v618)) && ((!(((*(yR99 *)rt_nil_check(F.v8492))).f_ival == INT64_C(2))))) && yr3418_Provides(F.v8492, F.p3426))) {
if ((((*(yR99 *)rt_nil_check(F.v8492))).f_ival == INT64_C(1))) {
F.p3428 = F.v8492;
{ rt_int rv8499 = INT64_C(2);
(*F.p3428_o) = F.p3428;
y_use = F.yu; return rv8499; }
}
yr3499_CompileModule(F.v8492);
{ rt_int rv8501 = INT64_C(1);
(*F.p3428_o) = F.p3428;
y_use = F.yu; return rv8501; }
}
if ((((((((*(yR99 *)rt_nil_check(F.v8492))).f_kind == v648)) || ((((*(yR99 *)rt_nil_check(F.v8492))).f_kind == v660)))) && ((((*(yR99 *)rt_nil_check(F.v8492))).f_name == F.p3426)))) {
{ rt_int rv8503 = INT64_C(3);
(*F.p3428_o) = F.p3428;
y_use = F.yu; return rv8503; }
}
if ((((!(((*(yR99 *)rt_nil_check(F.v8492))).f_kind == v618))) && yr2264_DeclaredFrom(yr3433_OneDecl(F.v8492), F.p3426))) {
yr1180_FailN(F.p3427, F.p3426, y_str(" is declared after the module that imports it: a simple declaration precedes what uses it (X.G)", 95));
}
F.v8492 = ((*(yR99 *)rt_nil_check(F.v8492))).f_next;
}
{ rt_int rv8506 = INT64_C(0);
(*F.p3428_o) = F.p3428;
y_use = F.yu; return rv8506; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3433_OneDecl(void * a_p3434) {
struct yf3435 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3434 = a_p3434;
({ F.v8510 = rt_alloc(sizeof(yR99)); });
(*(yR99 *)rt_nil_check(F.v8510)) = (*(yR99 *)rt_nil_check(F.p3434));
((*(yR99 *)rt_nil_check(F.v8510))).f_next = ((void *)0);
{ void * rv8511 = F.v8510;
y_use = F.yu; return rv8511; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3439_Lazy(rt_int a_p3440, rt_int a_p3441, void * a_p3442, rt_int a_p3443) {
struct yf3444 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3440 = a_p3440;
F.p3441 = a_p3441;
F.p3442 = a_p3442;
F.p3443 = a_p3443;
F.v8518 = yr2202_NewSym(v888, F.p3440);
if ((v1817 >= INT64_C(10000))) {
yr1172_FailS(F.p3443, y_str("too many imports translated later", 33));
}
v1817 = rt_range(rt_add(v1817, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1780).p)[y_ix1(v1780, v1817)] = F.v8518;
((rt_int *)(v1791).p)[y_ix1(v1791, v1817)] = F.p3441;
((void * *)(v1802).p)[y_ix1(v1802, v1817)] = F.p3442;
((rt_int *)(v1813).p)[y_ix1(v1813, v1817)] = v1267;
((rt_int *)(v1815).p)[y_ix1(v1815, v1817)] = F.p3443;
{ void * rv8523 = F.v8518;
y_use = F.yu; return rv8523; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3448_SetLazy(rt_int a_p3449, void * a_p3450) {
struct yf3451 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3449 = a_p3449;
F.p3450 = a_p3450;
((*(yR119 *)rt_nil_check(((void * *)(v1780).p)[y_ix1(v1780, F.p3449)]))).f_target = F.p3450;
((*(yR119 *)rt_nil_check(((void * *)(v1780).p)[y_ix1(v1780, F.p3449)]))).f_readonly = ((*(yR119 *)rt_nil_check(F.p3450))).f_readonly;
((void * *)(v1780).p)[y_ix1(v1780, F.p3449)] = ((void *)0);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3455_ResolveFrom(void * a_p3456, void * a_p3457) {
struct yf3458 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3456 = a_p3456;
F.p3457 = a_p3457;
F.lo8535 = INT64_C(1);
F.hi8536 = v1817;
{ rt_int hi8540 = F.hi8536;
for (rt_int i8539 = F.lo8535; i8539 <= hi8540; i8539++) { F.c_8538 = i8539; Y_TICK();
if ((((!(((void * *)(v1780).p)[y_ix1(v1780, F.c_8538)] == ((void *)0)))) && ((((void * *)(v1802).p)[y_ix1(v1802, F.c_8538)] == F.p3456)))) {
F.v8531 = ((*(yR119 *)rt_nil_check(F.p3457))).f_members;
while ((((!(F.v8531 == ((void *)0)))) && ((!(((*(yR119 *)rt_nil_check(F.v8531))).f_name == ((rt_int *)(v1791).p)[y_ix1(v1791, F.c_8538)]))))) {
Y_TICK();
F.v8531 = ((*(yR119 *)rt_nil_check(F.v8531))).f_mnext;
}
if ((F.v8531 == ((void *)0))) {
yr1180_FailN(((rt_int *)(v1815).p)[y_ix1(v1815, F.c_8538)], ((rt_int *)(v1791).p)[y_ix1(v1791, F.c_8538)], y_str(" is not exported by that module", 31));
}
yr3448_SetLazy(rt_range(F.c_8538, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), F.v8531);
}
if (i8539 == hi8540) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3462_ResolveLater(rt_int a_p3463) {
struct yf3464 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3463 = a_p3463;
F.lo8549 = INT64_C(1);
F.hi8550 = v1817;
{ rt_int hi8554 = F.hi8550;
for (rt_int i8553 = F.lo8549; i8553 <= hi8554; i8553++) { F.c_8552 = i8553; Y_TICK();
if (((((!(((void * *)(v1780).p)[y_ix1(v1780, F.c_8552)] == ((void *)0)))) && ((((void * *)(v1802).p)[y_ix1(v1802, F.c_8552)] == ((void *)0)))) && ((((rt_int *)(v1813).p)[y_ix1(v1813, F.c_8552)] == F.p3463)))) {
F.v8545 = yr2232_Find(((rt_int *)(v1791).p)[y_ix1(v1791, F.c_8552)]);
if ((F.v8545 == ((void *)0))) {
yr1180_FailN(((rt_int *)(v1815).p)[y_ix1(v1815, F.c_8552)], ((rt_int *)(v1791).p)[y_ix1(v1791, F.c_8552)], y_str(" is not declared around this module (X.B.2)", 43));
}
yr3448_SetLazy(rt_range(F.c_8552, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), F.v8545);
}
if (i8553 == hi8554) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3468_LazyModule(void * a_p3469, void * * a_p3470, rt_int a_p3471) {
struct yf3472 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3469 = a_p3469;
F.p3470 = a_p3470;
F.p3471 = a_p3471;
F.v8561 = ((*(yR99 *)rt_nil_check(F.p3469))).f_b;
while ((!(F.v8561 == ((void *)0)))) {
Y_TICK();
F.v8565 = ((*(yR99 *)rt_nil_check(F.v8561))).f_name;
if ((!(((*(yR99 *)rt_nil_check(F.v8561))).f_ival == INT64_C(0)))) {
F.v8565 = rt_range(((*(yR99 *)rt_nil_check(F.v8561))).f_ival, INT64_C(0), INT64_C(4000000));
}
if (((((!(F.v8565 == v525))) && ((!(F.v8565 == v579)))) && ((!(F.v8565 == v564))))) {
F.v8563 = yr3439_Lazy(F.v8565, F.v8565, F.p3469, F.p3471);
((*(yR119 *)rt_nil_check(F.v8563))).f_mnext = (*F.p3470);
(*F.p3470) = F.v8563;
}
F.v8561 = ((*(yR99 *)rt_nil_check(F.v8561))).f_next;
}
F.v8563 = yr3439_Lazy(((*(yR99 *)rt_nil_check(F.p3469))).f_name, ((*(yR99 *)rt_nil_check(F.p3469))).f_name, ((void *)0), F.p3471);
((*(yR119 *)rt_nil_check(F.v8563))).f_mnext = (*F.p3470);
(*F.p3470) = F.v8563;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3476_ResolveItem(void * a_p3477, void * * a_p3478, rt_int a_p3479) {
struct yf3480 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3477 = a_p3477;
F.p3478 = a_p3478;
F.p3479 = a_p3479;
F.v8582 = ((*(yR99 *)rt_nil_check(F.p3477))).f_flag;
if (((F.p3479 && ((((*(yR99 *)rt_nil_check(F.p3477))).f_text == INT64_C(0)))) && (((((((*(yR99 *)rt_nil_check(F.p3477))).f_name == v525)) || ((((*(yR99 *)rt_nil_check(F.p3477))).f_name == v579))) || ((((*(yR99 *)rt_nil_check(F.p3477))).f_name == v564)))))) {
if ((yr2238_FindHere(((*(yR99 *)rt_nil_check(F.p3477))).f_name) == ((void *)0))) {
y_use = F.yu; return;
}
}
F.v8578 = ((*(yR99 *)rt_nil_check(F.p3477))).f_name;
if ((!(((*(yR99 *)rt_nil_check(F.p3477))).f_ival == INT64_C(0)))) {
F.v8578 = rt_range(((*(yR99 *)rt_nil_check(F.p3477))).f_ival, INT64_C(0), INT64_C(4000000));
}
if ((!(((*(yR99 *)rt_nil_check(F.p3477))).f_text == INT64_C(0)))) {
if ((((!F.p3479)) && ((yr2232_Find(((*(yR99 *)rt_nil_check(F.p3477))).f_text) == ((void *)0))))) {
F.v8584 = yr3425_ImportLater(((*(yR99 *)rt_nil_check(F.p3477))).f_text, ((*(yR99 *)rt_nil_check(F.p3477))).f_line, &F.v8586);
if ((F.v8584 == INT64_C(2))) {
F.v8576 = yr3439_Lazy(F.v8578, ((*(yR99 *)rt_nil_check(F.p3477))).f_name, F.v8586, ((*(yR99 *)rt_nil_check(F.p3477))).f_line);
((*(yR119 *)rt_nil_check(F.v8576))).f_mnext = (*F.p3478);
(*F.p3478) = F.v8576;
y_use = F.yu; return;
}
}
F.v8574 = yr2337_Real(yr2244_Lookup(((*(yR99 *)rt_nil_check(F.p3477))).f_text, ((*(yR99 *)rt_nil_check(F.p3477))).f_line));
if ((!(((*(yR119 *)rt_nil_check(F.v8574))).f_kind == v873))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3477))).f_line, ((*(yR99 *)rt_nil_check(F.p3477))).f_text, y_str(" is not a module", 16));
}
F.v8572 = ((*(yR119 *)rt_nil_check(F.v8574))).f_members;
while ((((!(F.v8572 == ((void *)0)))) && ((!(((*(yR119 *)rt_nil_check(F.v8572))).f_name == ((*(yR99 *)rt_nil_check(F.p3477))).f_name))))) {
Y_TICK();
F.v8572 = ((*(yR119 *)rt_nil_check(F.v8572))).f_mnext;
}
if ((F.v8572 == ((void *)0))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3477))).f_line, ((*(yR99 *)rt_nil_check(F.p3477))).f_name, y_str(" is not exported by that module", 31));
}
} else {
if (F.p3479) {
F.v8572 = yr2238_FindHere(((*(yR99 *)rt_nil_check(F.p3477))).f_name);
} else {
F.v8572 = yr2232_Find(((*(yR99 *)rt_nil_check(F.p3477))).f_name);
}
if ((((F.v8572 == ((void *)0))) && (!F.p3479))) {
F.v8584 = yr3425_ImportLater(((*(yR99 *)rt_nil_check(F.p3477))).f_name, ((*(yR99 *)rt_nil_check(F.p3477))).f_line, &F.v8586);
if ((((F.v8584 == INT64_C(2))) && ((((*(yR99 *)rt_nil_check(F.v8586))).f_name == ((*(yR99 *)rt_nil_check(F.p3477))).f_name)))) {
if ((((!(F.v8582 == INT64_C(0)))) || ((!(((*(yR99 *)rt_nil_check(F.p3477))).f_ival == INT64_C(0)))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3477))).f_line, y_str("a module name in a list takes no attribute and no AS (X.B.3)", 60));
}
yr3468_LazyModule(F.v8586, &(*F.p3478), ((*(yR99 *)rt_nil_check(F.p3477))).f_line);
y_use = F.yu; return;
}
if ((F.v8584 >= INT64_C(2))) {
F.v8576 = yr3439_Lazy(F.v8578, ((*(yR99 *)rt_nil_check(F.p3477))).f_name, F.v8586, ((*(yR99 *)rt_nil_check(F.p3477))).f_line);
((*(yR119 *)rt_nil_check(F.v8576))).f_mnext = (*F.p3478);
(*F.p3478) = F.v8576;
y_use = F.yu; return;
}
F.v8572 = yr2232_Find(((*(yR99 *)rt_nil_check(F.p3477))).f_name);
}
if ((F.p3479 && ((!(F.v8572 == ((void *)0)))))) {
if ((((((*(yR119 *)rt_nil_check(F.v8572))).f_kind == v888)) && ((((*(yR119 *)rt_nil_check(F.v8572))).f_mval == INT64_C(1))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3477))).f_line, ((*(yR99 *)rt_nil_check(F.p3477))).f_name, y_str(" is imported into this module: it may not be exported again (X.B.1)", 67));
}
}
if ((F.v8572 == ((void *)0))) {
if (F.p3479) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3477))).f_line, ((*(yR99 *)rt_nil_check(F.p3477))).f_name, y_str(" is not declared in this module", 31));
} else {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3477))).f_line, ((*(yR99 *)rt_nil_check(F.p3477))).f_name, y_str(" is not declared around this module (X.B.2)", 43));
}
}
}
F.v8574 = yr2337_Real(F.v8572);
if ((((((*(yR119 *)rt_nil_check(F.v8574))).f_kind == v873)) && ((((*(yR99 *)rt_nil_check(F.p3477))).f_text == INT64_C(0))))) {
if ((((!(F.v8582 == INT64_C(0)))) || ((!(((*(yR99 *)rt_nil_check(F.p3477))).f_ival == INT64_C(0)))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3477))).f_line, y_str("a module name in a list takes no attribute and no AS (X.B.3)", 60));
}
F.v8576 = ((*(yR119 *)rt_nil_check(F.v8574))).f_members;
while ((!(F.v8576 == ((void *)0)))) {
Y_TICK();
F.v8572 = yr3403_Alias(((*(yR119 *)rt_nil_check(F.v8576))).f_name, F.v8576);
((*(yR119 *)rt_nil_check(F.v8572))).f_mnext = (*F.p3478);
(*F.p3478) = F.v8572;
F.v8576 = ((*(yR119 *)rt_nil_check(F.v8576))).f_mnext;
}
if ((!F.p3479)) {
F.v8572 = yr3403_Alias(((*(yR119 *)rt_nil_check(F.v8574))).f_name, F.v8574);
((*(yR119 *)rt_nil_check(F.v8572))).f_mnext = (*F.p3478);
(*F.p3478) = F.v8572;
}
y_use = F.yu; return;
}
F.v8576 = yr3403_Alias(F.v8578, F.v8572);
if (F.p3479) {
if ((((((*(yR119 *)rt_nil_check(F.v8574))).f_kind == v861)) || ((((*(yR119 *)rt_nil_check(F.v8574))).f_kind == v864)))) {
if ((((F.v8582 == v423)) || ((F.v8582 == v477)))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3477))).f_line, y_str("READONLY and VAR are for variables", 34));
}
if ((((F.v8582 == v468)) && ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v8574))).f_rep))).f_opaque)) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3477))).f_line, ((*(yR99 *)rt_nil_check(F.p3477))).f_name, y_str(" is opaque already: an export list cannot make it TRANSPARENT (X.B.3)", 69));
}
if ((((!(F.v8582 == v468))) || ((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v8574))).f_rep))).f_opaque)) {
F.v8580 = yr2350_CopyRep(((*(yR119 *)rt_nil_check(F.v8574))).f_rep);
((*(yR104 *)rt_nil_check(F.v8580))).f_opaque = 1;
((*(yR104 *)rt_nil_check(F.v8580))).f_opaqueops = v1768;
((*(yR119 *)rt_nil_check(F.v8576))).f_target = yr2202_NewSym(((*(yR119 *)rt_nil_check(F.v8574))).f_kind, ((*(yR119 *)rt_nil_check(F.v8574))).f_name);
((*(yR119 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v8576))).f_target))).f_rep = F.v8580;
((*(yR119 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v8576))).f_target))).f_decl = ((*(yR119 *)rt_nil_check(F.v8574))).f_decl;
} else {
yr3410_AddLits(&(*F.p3478), ((*(yR119 *)rt_nil_check(F.v8574))).f_rep, INT64_C(0));
}
} else if ((((((*(yR119 *)rt_nil_check(F.v8574))).f_kind == v855)) || ((((*(yR119 *)rt_nil_check(F.v8574))).f_kind == v858)))) {
if ((((F.v8582 == v390)) || ((F.v8582 == v468)))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3477))).f_line, y_str("OPAQUE and TRANSPARENT are for types", 36));
}
if ((((F.v8582 == v477)) && ((((((*(yR119 *)rt_nil_check(F.v8574))).f_kind == v858)) || ((*(yR119 *)rt_nil_check(F.v8572))).f_readonly)))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3477))).f_line, ((*(yR99 *)rt_nil_check(F.p3477))).f_name, y_str(" is a constant or READONLY here: an export list cannot make it VAR (X.B.3)", 74));
}
if ((!(F.v8582 == v477))) {
((*(yR119 *)rt_nil_check(F.v8576))).f_readonly = 1;
}
} else if ((!(F.v8582 == INT64_C(0)))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3477))).f_line, y_str("an attribute is for a type, a representation or a variable", 58));
}
if ((((((*(yR119 *)rt_nil_check(F.v8574))).f_kind == v855)) && ((((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v8574))).f_rep))).f_kind == v831)) || yr2393_HoldsSignal(((*(yR119 *)rt_nil_check(F.v8574))).f_rep))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3477))).f_line, y_str("a signal may not be exported from its monitor (X.E.4)", 53));
}
} else if ((((((*(yR119 *)rt_nil_check(F.v8574))).f_kind == v861)) || ((((*(yR119 *)rt_nil_check(F.v8574))).f_kind == v864)))) {
yr3410_AddLits(&(*F.p3478), ((*(yR119 *)rt_nil_check(F.v8574))).f_rep, INT64_C(0));
}
((*(yR119 *)rt_nil_check(F.v8576))).f_mnext = (*F.p3478);
(*F.p3478) = F.v8576;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3484_DefineAll(void * a_p3485, rt_int a_p3486) {
struct yf3487 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3485 = a_p3485;
F.p3486 = a_p3486;
F.v8621 = F.p3485;
F.v8623 = F.p3485;
F.v8625 = F.p3485;
while ((!(F.v8621 == ((void *)0)))) {
Y_TICK();
F.v8623 = ((*(yR119 *)rt_nil_check(F.v8621))).f_mnext;
F.v8625 = yr2238_FindHere(((*(yR119 *)rt_nil_check(F.v8621))).f_name);
if (((!yr2285_Resolved(F.v8621)) || ((((!(F.v8625 == ((void *)0)))) && (!yr2285_Resolved(F.v8625)))))) {
if ((!(F.v8625 == ((void *)0)))) {
yr1180_FailN(F.p3486, ((*(yR119 *)rt_nil_check(F.v8621))).f_name, y_str(" comes into this scope twice", 28));
}
yr2304_Define(F.v8621, F.p3486);
} else if ((((F.v8625 == ((void *)0))) || ((!(yr2337_Real(F.v8625) == yr2337_Real(F.v8621)))))) {
if (((((!(F.v8625 == ((void *)0)))) && ((((*(yR119 *)rt_nil_check(yr2337_Real(F.v8621)))).f_kind == v867))) && ((((*(yR119 *)rt_nil_check(yr2337_Real(F.v8625)))).f_kind == v867)))) {
yr2304_Define(F.v8621, F.p3486);
} else if ((F.v8625 == ((void *)0))) {
yr2304_Define(F.v8621, F.p3486);
} else {
yr1180_FailN(F.p3486, ((*(yR119 *)rt_nil_check(F.v8621))).f_name, y_str(" comes into this scope twice", 28));
}
}
F.v8621 = F.v8623;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3491_ExtendWith(void * a_p3492, void * a_p3493, rt_int a_p3494) {
struct yf3495 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3492 = a_p3492;
F.p3493 = a_p3493;
F.p3494 = a_p3494;
F.v8633 = ((void *)0);
F.v8635 = ((void *)0);
F.v8637 = ((void *)0);
F.v8639 = ((void *)0);
F.v8639 = F.p3492;
while ((!(F.v8639 == ((void *)0)))) {
Y_TICK();
if ((!(yr3328_SameSignature(F.v8639, F.p3493) == ((void *)0)))) {
yr1180_FailN(F.p3494, ((*(yR119 *)rt_nil_check(F.v8639))).f_name, y_str(" is exported over a definition for the same parameter types around the module (X.B.5)", 85));
}
if ((!(((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.v8639))).f_ret))).f_kind == v846)) == ((((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.p3493))).f_ret))).f_kind == v846))))) {
yr1180_FailN(F.p3494, ((*(yR119 *)rt_nil_check(F.v8639))).f_name, y_str(": a value-returning routine is extended only by one, a procedure only by a procedure (X.A.1)", 92));
}
({ F.v8637 = rt_alloc(sizeof(yR119)); });
(*(yR119 *)rt_nil_check(F.v8637)) = (*(yR119 *)rt_nil_check(F.v8639));
((*(yR119 *)rt_nil_check(F.v8637))).f_target = F.v8639;
((*(yR119 *)rt_nil_check(F.v8637))).f_alt = ((void *)0);
if ((F.v8635 == ((void *)0))) {
F.v8633 = F.v8637;
} else {
((*(yR119 *)rt_nil_check(F.v8635))).f_alt = F.v8637;
}
F.v8635 = F.v8637;
F.v8639 = ((*(yR119 *)rt_nil_check(F.v8639))).f_alt;
}
((*(yR119 *)rt_nil_check(F.v8635))).f_alt = F.p3493;
{ void * rv8642 = F.v8633;
y_use = F.yu; return rv8642; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3499_CompileModule(void * a_p3500) {
struct yf3501 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3500 = a_p3500;
F.v8672 = 0;
((*(yR99 *)rt_nil_check(F.p3500))).f_ival = INT64_C(1);
F.v8646 = ((void *)0);
F.v8664 = ((*(yR99 *)rt_nil_check(F.p3500))).f_a;
while ((!(F.v8664 == ((void *)0)))) {
Y_TICK();
yr3476_ResolveItem(F.v8664, &F.v8646, 0);
F.v8664 = ((*(yR99 *)rt_nil_check(F.v8664))).f_next;
}
F.v8656 = v1755;
if ((((((*(yR99 *)rt_nil_check(F.p3500))).f_flag == INT64_C(1))) && ((v1755 == ((void *)0))))) {
F.v8658 = yr2202_NewSym(v855, ((*(yR99 *)rt_nil_check(F.p3500))).f_name);
((*(yR119 *)rt_nil_check(F.v8658))).f_level = v1273;
((*(yR119 *)rt_nil_check(F.v8658))).f_cname = yr1194_Fresh(y_str("mon", 3));
((*(yR119 *)rt_nil_check(F.v8658))).f_rep = v1342;
yr2324_DeclStorage(yr1055_T(y_str("ymon", 4)), ((*(yR119 *)rt_nil_check(F.v8658))).f_cname);
yr1126_Emit(yr3194_Join(yr1055_T(y_str("y_mon_init(&", 12)), yr2311_Path(v1273, ((*(yR119 *)rt_nil_check(F.v8658))).f_cname), yr1055_T(y_str(");", 2))));
v1755 = F.v8658;
F.v8672 = 1;
}
yr2209_OpenScope(1);
((void * *)(v1766).p)[y_ix1(v1766, v1267)] = ((void *)0);
F.v8668 = v1270;
v1270 = v1267;
F.v8650 = F.v8646;
while ((!(F.v8650 == ((void *)0)))) {
Y_TICK();
((*(yR119 *)rt_nil_check(F.v8650))).f_mval = INT64_C(1);
F.v8650 = ((*(yR119 *)rt_nil_check(F.v8650))).f_mnext;
}
yr3484_DefineAll(F.v8646, ((*(yR99 *)rt_nil_check(F.p3500))).f_line);
yr3391_Declarations(((*(yR99 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.p3500))).f_c))).f_a);
yr1126_Emit(yr3194_Join(yr1055_T(y_str("/* ", 3)), ((*(yR99 *)rt_nil_check(F.p3500))).f_name, yr1055_T(y_str(" */", 3))));
yr3369_Defer(F.p3500, INT64_C(2), (v990).f_tail, F.v8672);
v1768 = INT64_C(0);
F.v8664 = ((*(yR99 *)rt_nil_check(F.p3500))).f_b;
while ((!(F.v8664 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR99 *)rt_nil_check(F.v8664))).f_text == INT64_C(0))) && ((yr2238_FindHere(((*(yR99 *)rt_nil_check(F.v8664))).f_name) == ((void *)0))))) {
if ((((*(yR99 *)rt_nil_check(F.v8664))).f_name == v525)) {
v1768 = rt_range(rt_add(v1768, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((((((*(yR99 *)rt_nil_check(F.v8664))).f_name == v579)) || ((((*(yR99 *)rt_nil_check(F.v8664))).f_name == v564)))) {
if (((rt_div(v1768, INT64_C(2))) == INT64_C(0))) {
v1768 = rt_range(rt_add(v1768, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
}
F.v8664 = ((*(yR99 *)rt_nil_check(F.v8664))).f_next;
}
F.v8648 = ((void *)0);
F.v8664 = ((*(yR99 *)rt_nil_check(F.p3500))).f_b;
while ((!(F.v8664 == ((void *)0)))) {
Y_TICK();
yr3476_ResolveItem(F.v8664, &F.v8648, 1);
F.v8664 = ((*(yR99 *)rt_nil_check(F.v8664))).f_next;
}
F.v8666 = ((void * *)(v1766).p)[y_ix1(v1766, v1267)];
v1270 = F.v8668;
yr2221_CloseScope();
while ((!(F.v8666 == ((void *)0)))) {
Y_TICK();
F.v8664 = ((*(yR99 *)rt_nil_check(F.v8666))).f_next;
((*(yR99 *)rt_nil_check(F.v8666))).f_next = ((void * *)(v1766).p)[y_ix1(v1766, v1267)];
((void * *)(v1766).p)[y_ix1(v1766, v1267)] = F.v8666;
F.v8666 = F.v8664;
}
v1755 = F.v8656;
F.v8652 = yr2202_NewSym(v873, ((*(yR99 *)rt_nil_check(F.p3500))).f_name);
((*(yR119 *)rt_nil_check(F.v8652))).f_members = F.v8648;
yr2304_Define(F.v8652, ((*(yR99 *)rt_nil_check(F.p3500))).f_line);
F.v8654 = F.v8648;
F.v8648 = ((void *)0);
while ((!(F.v8654 == ((void *)0)))) {
Y_TICK();
F.v8660 = ((*(yR119 *)rt_nil_check(F.v8654))).f_mnext;
F.v8650 = yr3403_Alias(((*(yR119 *)rt_nil_check(F.v8654))).f_name, F.v8654);
((*(yR119 *)rt_nil_check(F.v8650))).f_readonly = ((*(yR119 *)rt_nil_check(F.v8654))).f_readonly;
((*(yR119 *)rt_nil_check(F.v8650))).f_mnext = F.v8648;
F.v8648 = F.v8650;
F.v8654 = F.v8660;
}
((*(yR119 *)rt_nil_check(F.v8652))).f_members = F.v8648;
((*(yR99 *)rt_nil_check(F.p3500))).f_ival = INT64_C(2);
yr3455_ResolveFrom(F.p3500, F.v8652);
F.v8654 = F.v8648;
while ((!(F.v8654 == ((void *)0)))) {
Y_TICK();
F.v8660 = yr3403_Alias(((*(yR119 *)rt_nil_check(F.v8654))).f_name, F.v8654);
((*(yR119 *)rt_nil_check(F.v8660))).f_readonly = ((*(yR119 *)rt_nil_check(F.v8654))).f_readonly;
F.v8662 = yr2232_Find(((*(yR119 *)rt_nil_check(F.v8654))).f_name);
if ((!(F.v8662 == ((void *)0)))) {
if ((!yr2285_Resolved(F.v8662))) {
F.v8662 = ((void *)0);
} else {
F.v8662 = yr2337_Real(F.v8662);
}
}
if ((((((*(yR119 *)rt_nil_check(yr2337_Real(F.v8654)))).f_kind == v870)) && ((!(F.v8662 == ((void *)0)))))) {
if ((((*(yR119 *)rt_nil_check(F.v8662))).f_kind == v870)) {
F.v8660 = yr3491_ExtendWith(yr2337_Real(F.v8654), F.v8662, ((*(yR99 *)rt_nil_check(F.p3500))).f_line);
}
}
if ((yr2238_FindHere(((*(yR119 *)rt_nil_check(F.v8654))).f_name) == ((void *)0))) {
yr2304_Define(F.v8660, ((*(yR99 *)rt_nil_check(F.p3500))).f_line);
} else if ((((*(yR119 *)rt_nil_check(F.v8660))).f_kind == v870)) {
yr2304_Define(F.v8660, ((*(yR99 *)rt_nil_check(F.p3500))).f_line);
} else if ((((((*(yR119 *)rt_nil_check(yr2238_FindHere(((*(yR119 *)rt_nil_check(F.v8654))).f_name)))).f_kind == v888)) && ((!(yr2337_Real(yr2238_FindHere(((*(yR119 *)rt_nil_check(F.v8654))).f_name)) == yr2337_Real(F.v8654)))))) {
yr2304_Define(F.v8660, ((*(yR99 *)rt_nil_check(F.p3500))).f_line);
} else if ((!(((*(yR119 *)rt_nil_check(yr2337_Real(F.v8654)))).f_kind == v867))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3500))).f_line, ((*(yR119 *)rt_nil_check(F.v8654))).f_name, y_str(" is exported into a scope that has it already", 45));
}
F.v8654 = ((*(yR119 *)rt_nil_check(F.v8654))).f_mnext;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3505_DeclareTemplate(void * a_p3506) {
struct yf3507 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3506 = a_p3506;
F.v8702 = yr2202_NewSym(v876, ((*(yR99 *)rt_nil_check(F.p3506))).f_name);
((*(yR119 *)rt_nil_check(F.v8702))).f_decl = F.p3506;
yr2304_Define(F.v8702, ((*(yR99 *)rt_nil_check(F.p3506))).f_line);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3511_Instantiate(void * a_p3512) {
struct yf3513 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3512 = a_p3512;
F.v8706 = yr2337_Real(yr2244_Lookup(((*(yR99 *)rt_nil_check(F.p3512))).f_name, ((*(yR99 *)rt_nil_check(F.p3512))).f_line));
if ((!(((*(yR119 *)rt_nil_check(F.v8706))).f_kind == v876))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3512))).f_line, ((*(yR99 *)rt_nil_check(F.p3512))).f_name, y_str(" is not a template", 18));
}
F.v8708 = ((*(yR119 *)rt_nil_check(F.v8706))).f_decl;
if ((!(yr1903_Count(((*(yR99 *)rt_nil_check(F.v8708))).f_a) == yr1903_Count(((*(yR99 *)rt_nil_check(F.p3512))).f_a)))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3512))).f_line, ((*(yR99 *)rt_nil_check(F.p3512))).f_name, y_str(": the number of actuals is wrong", 32));
}
F.v8714 = rt_range(rt_add(v1207, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo8730 = ((*(yR99 *)rt_nil_check(F.v8708))).f_ival;
F.hi8731 = rt_sub(((*(yR99 *)rt_nil_check(F.v8708))).f_flag, INT64_C(1));
{ rt_int hi8735 = F.hi8731;
for (rt_int i8734 = F.lo8730; i8734 <= hi8735; i8734++) { F.c_8733 = i8734; Y_TICK();
F.v8718 = ((rt_int *)(v1201).p)[y_ix1(v1201, F.c_8733)];
F.v8720 = ((rt_int *)(v1203).p)[y_ix1(v1203, F.c_8733)];
if ((F.v8718 == v201)) {
F.v8710 = ((*(yR99 *)rt_nil_check(F.v8708))).f_a;
F.v8712 = ((*(yR99 *)rt_nil_check(F.p3512))).f_a;
while ((!(F.v8710 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR99 *)rt_nil_check(F.v8710))).f_name == F.v8720)) && ((F.v8718 == v201)))) {
if ((((*(yR99 *)rt_nil_check(F.v8712))).f_flag == INT64_C(1))) {
F.v8718 = v210;
F.v8720 = ((*(yR99 *)rt_nil_check(F.v8712))).f_ival;
} else {
F.v8720 = ((*(yR99 *)rt_nil_check(F.v8712))).f_name;
if ((F.v8720 <= v486)) {
F.v8718 = v204;
} else if ((F.v8720 <= v615)) {
F.v8718 = v207;
}
}
}
F.v8710 = ((*(yR99 *)rt_nil_check(F.v8710))).f_next;
F.v8712 = ((*(yR99 *)rt_nil_check(F.v8712))).f_next;
}
}
v1207 = rt_range(rt_add(v1207, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1201).p)[y_ix1(v1201, v1207)] = F.v8718;
((rt_int *)(v1203).p)[y_ix1(v1203, v1207)] = F.v8720;
((rt_int *)(v1205).p)[y_ix1(v1205, v1207)] = ((rt_int *)(v1205).p)[y_ix1(v1205, F.c_8733)];
if (i8734 == hi8735) break;
}}
v1207 = rt_range(rt_add(v1207, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1201).p)[y_ix1(v1201, v1207)] = v198;
((rt_int *)(v1203).p)[y_ix1(v1203, v1207)] = INT64_C(0);
((rt_int *)(v1205).p)[y_ix1(v1205, v1207)] = ((*(yR99 *)rt_nil_check(F.p3512))).f_line;
F.v8716 = v1243;
v1243 = F.v8714;
F.v8722 = yr1993_ParseModule();
v1243 = F.v8716;
yr3499_CompileModule(F.v8722);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3517_DeclareProcess(void * a_p3518) {
struct yf3519 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3518 = a_p3518;
F.v8745 = ((*(yR99 *)rt_nil_check(F.p3518))).f_sym;
((*(yR119 *)rt_nil_check(F.v8745))).f_monitor = v1755;
yr2324_DeclStorage(yr1055_T(y_str("rt_taskdecl", 11)), yr3194_Join(((*(yR119 *)rt_nil_check(F.v8745))).f_cname, yr1055_T(y_str("_d", 2)), INT64_C(0)));
F.v8747 = yr1888_NewNode(v663, ((*(yR99 *)rt_nil_check(F.p3518))).f_line);
((*(yR99 *)rt_nil_check(F.v8747))).f_sym = F.v8745;
((*(yR99 *)rt_nil_check(F.v8747))).f_next = ((void * *)(v1766).p)[y_ix1(v1766, v1267)];
((void * *)(v1766).p)[y_ix1(v1766, v1267)] = F.v8747;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3523_AwaitProcesses(void) {
struct yf3524 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v8753 = ((void * *)(v1766).p)[y_ix1(v1766, v1267)];
while ((!(F.v8753 == ((void *)0)))) {
Y_TICK();
yr1126_Emit(yr3194_Join(yr1055_T(y_str("rt_await_decl(&", 15)), yr2311_Path(rt_range(rt_sub(((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v8753))).f_sym))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr3194_Join(((*(yR119 *)rt_nil_check(((*(yR99 *)rt_nil_check(F.v8753))).f_sym))).f_cname, yr1055_T(y_str("_d", 2)), INT64_C(0))), yr1055_T(y_str(");", 2))));
F.v8753 = ((*(yR99 *)rt_nil_check(F.v8753))).f_next;
}
((void * *)(v1766).p)[y_ix1(v1766, v1267)] = ((void *)0);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3528_Activate(void * a_p3529, void * a_p3530) {
struct yf3531 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3529 = a_p3529;
F.p3530 = a_p3530;
F.v8794 = ((*(yR119 *)rt_nil_check(F.p3530))).f_decl;
yr2966_CompileArgs(((*(yR99 *)rt_nil_check(F.p3529))).f_a, F.p3530, &F.v8764, &F.v8766);
if ((!(F.v8766 == ((*(yR119 *)rt_nil_check(F.p3530))).f_nparams))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3529))).f_line, ((*(yR119 *)rt_nil_check(F.p3530))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
yr3016_NoteCall(F.p3530, ((*(yR99 *)rt_nil_check(F.p3529))).f_line);
yr3282_CheckActuals(F.p3530, F.v8764, ((*(yR99 *)rt_nil_check(F.p3529))).f_line);
F.v8782 = yr1194_Fresh(y_str("pf", 2));
yr1126_Emit(yr3194_Join(yr1055_T(y_str("{ struct ", 9)), ((*(yR119 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.p3530))).f_members))).f_name, yr3194_Join(yr1055_T(y_str(" *", 2)), F.v8782, yr3194_Join(yr1055_T(y_str(" = rt_alloc(sizeof *", 20)), F.v8782, yr1055_T(y_str(");", 2))))));
if ((((*(yR119 *)rt_nil_check(F.p3530))).f_level > INT64_C(1))) {
yr1126_Emit(yr3194_Join(F.v8782, yr1055_T(y_str("->up = ", 7)), yr3194_Join(yr2318_FramePtr(rt_range(rt_sub(((*(yR119 *)rt_nil_check(F.p3530))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))), yr1055_T(y_str(";", 1)), INT64_C(0))));
}
F.v8780 = ((*(yR119 *)rt_nil_check(F.p3530))).f_params;
F.v8768 = rt_range(rt_add(F.v8764, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(F.v8780 == ((void *)0)))) {
Y_TICK();
if ((!yr2945_Fits(((*(yR114 *)rt_nil_check(F.v8780))).f_rep, ((void * *)(v1493).p)[y_ix1(v1493, F.v8768)]))) {
yr2430_TypeClash(((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v8768)]))).f_line, ((*(yR114 *)rt_nil_check(F.v8780))).f_rep, ((void * *)(v1493).p)[y_ix1(v1493, F.v8768)]);
}
F.v8788 = yr3194_Join(F.v8782, yr1055_T(y_str("->", 2)), ((*(yR114 *)rt_nil_check(F.v8780))).f_cname);
yr2975_CheckUnresolved(((*(yR114 *)rt_nil_check(F.v8780))).f_rep, ((void * *)(v1493).p)[y_ix1(v1493, F.v8768)], ((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v8768)]))).f_line);
if ((((*(yR114 *)rt_nil_check(F.v8780))).f_cls == v897)) {
if ((!yr2807_IsVariable(((void * *)(v1504).p)[y_ix1(v1504, F.v8768)]))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v8768)]))).f_line, ((*(yR114 *)rt_nil_check(F.v8780))).f_name, y_str(": the actual of a VAR parameter must be a variable", 50));
}
if ((!yr2983_SameAsFormal(((*(yR114 *)rt_nil_check(F.v8780))).f_rep, ((void * *)(v1493).p)[y_ix1(v1493, F.v8768)]))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v8768)]))).f_line, ((*(yR114 *)rt_nil_check(F.v8780))).f_name, y_str(": a VAR actual has the representation of its formal (VII.G, X.A.2)", 66));
}
yr3249_NoteWrite(((void * *)(v1504).p)[y_ix1(v1504, F.v8768)]);
yr3232_DesigBase(((void * *)(v1504).p)[y_ix1(v1504, F.v8768)], &F.v8774, &F.v8776, &F.v8778);
if ((((!(F.v8774 == ((void *)0)))) && (!F.v8776))) {
if ((yr3535_LifeDepth(((*(yR119 *)rt_nil_check(F.v8774))).f_depth) > yr3535_LifeDepth(((*(yR119 *)rt_nil_check(F.p3530))).f_depth))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(((void * *)(v1504).p)[y_ix1(v1504, F.v8768)]))).f_line, ((*(yR119 *)rt_nil_check(F.v8774))).f_name, y_str(" is the VAR actual of a process that may outlive it: its life scope is smaller than that of the process (X.E.2)", 111));
}
}
yr1126_Emit(yr3194_Join(F.v8788, yr1055_T(y_str(" = &", 4)), yr3194_Join(((rt_int *)(v1482).p)[y_ix1(v1482, F.v8768)], yr1055_T(y_str(";", 1)), INT64_C(0))));
} else if (yr2380_Deep(((*(yR114 *)rt_nil_check(F.v8780))).f_rep)) {
F.v8784 = yr1194_Fresh(y_str("t", 1));
yr1126_Emit(yr3194_Join(yr1055_T(y_str("{ ", 2)), yr2405_CType(((*(yR114 *)rt_nil_check(F.v8780))).f_rep), yr3194_Join(yr1055_T(y_str(" ", 1)), F.v8784, yr3194_Join(yr1055_T(y_str(" = ", 3)), yr2779_Convert(((rt_int *)(v1482).p)[y_ix1(v1482, F.v8768)], ((*(yR114 *)rt_nil_check(F.v8780))).f_rep, ((void * *)(v1493).p)[y_ix1(v1493, F.v8768)]), yr1055_T(y_str(";", 1))))));
if ((((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v8780))).f_rep))).f_kind == v837)) {
yr1126_Emit(yr3194_Join(yr1055_T(y_str("y_copy(y_desc_vector(", 21)), yr2411_DescOf(((*(yR104 *)rt_nil_check(((*(yR114 *)rt_nil_check(F.v8780))).f_rep))).f_elem), yr3194_Join(yr1055_T(y_str("), &", 4)), F.v8788, yr3194_Join(yr1055_T(y_str(", &", 3)), F.v8784, yr1055_T(y_str("); }", 4))))));
} else {
yr1126_Emit(yr3194_Join(yr1055_T(y_str("y_copy(", 7)), yr2411_DescOf(((*(yR114 *)rt_nil_check(F.v8780))).f_rep), yr3194_Join(yr1055_T(y_str(", &", 3)), F.v8788, yr3194_Join(yr1055_T(y_str(", &", 3)), F.v8784, yr1055_T(y_str("); }", 4))))));
}
} else {
yr1126_Emit(yr3194_Join(F.v8788, yr1055_T(y_str(" = ", 3)), yr3194_Join(yr2779_Convert(((rt_int *)(v1482).p)[y_ix1(v1482, F.v8768)], ((*(yR114 *)rt_nil_check(F.v8780))).f_rep, ((void * *)(v1493).p)[y_ix1(v1493, F.v8768)]), yr1055_T(y_str(";", 1)), INT64_C(0))));
}
F.v8768 = rt_range(rt_add(F.v8768, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v8780 = ((*(yR114 *)rt_nil_check(F.v8780))).f_next;
}
v1506 = F.v8764;
F.v8790 = yr1055_T(y_str("0", 1));
if ((!(((*(yR99 *)rt_nil_check(F.v8794))).f_e == ((void *)0)))) {
yr2846_Expr(((*(yR99 *)rt_nil_check(F.v8794))).f_e, v1336, &F.v8790, &F.v8796);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.v8794))).f_line, v1336, F.v8796);
}
F.v8792 = yr1055_T(y_str("0, 0", 4));
if ((!(((*(yR99 *)rt_nil_check(F.v8794))).f_d == ((void *)0)))) {
yr2846_Expr(((*(yR99 *)rt_nil_check(F.v8794))).f_d, v1336, &F.v8786, &F.v8796);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.v8794))).f_line, v1336, F.v8796);
F.v8792 = yr3194_Join(yr1055_T(y_str("1, ", 3)), F.v8786, INT64_C(0));
}
F.v8770 = INT64_C(0);
if ((!(((*(yR99 *)rt_nil_check(F.v8794))).f_x == ((void *)0)))) {
yr2698_Manifest(((*(yR99 *)rt_nil_check(F.v8794))).f_x, &F.v8772, &F.v8770);
if (((!F.v8772) || ((F.v8770 < INT64_C(1))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.v8794))).f_line, y_str("SIZE is a positive manifest constant (XIV.X.2)", 46));
}
}
yr1020_SB();
yr1031_SA(y_str("y_create(&", 10));
yr1038_ST(yr2311_Path(rt_range(rt_sub(((*(yR119 *)rt_nil_check(F.p3530))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr3194_Join(((*(yR119 *)rt_nil_check(F.p3530))).f_cname, yr1055_T(y_str("_d", 2)), INT64_C(0))));
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v8790);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v8792);
yr1031_SA(y_str(", ", 2));
yr1044_SI(F.v8770);
yr1031_SA(y_str(", ", 2));
yr1038_ST(((*(yR119 *)rt_nil_check(F.p3530))).f_cname);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v8782);
yr1031_SA(y_str("); }", 4));
F.v8784 = yr1050_SE();
yr1126_Emit(F.v8784);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3535_LifeDepth(rt_int a_p3536) {
struct yf3537 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3536 = a_p3536;
F.v8857 = F.p3536;
while ((((F.v8857 > INT64_C(1))) && ((*(yR124 *)rt_nil_check(((void * *)(v1265).p)[y_ix1(v1265, F.v8857)]))).f_closed)) {
Y_TICK();
F.v8857 = rt_range(rt_sub(F.v8857, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv8861 = F.v8857;
y_use = F.yu; return rv8861; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3541_MonitorPath(void * a_p3542) {
struct yf3543 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3542 = a_p3542;
{ rt_int rv8866 = yr3194_Join(yr1055_T(y_str("&", 1)), yr2311_Path(((*(yR119 *)rt_nil_check(F.p3542))).f_level, ((*(yR119 *)rt_nil_check(F.p3542))).f_cname), INT64_C(0));
y_use = F.yu; return rv8866; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3547_EnterMonitor(void * a_p3548) {
struct yf3549 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3548 = a_p3548;
if ((((*(yR119 *)rt_nil_check(F.p3548))).f_kind == v870)) {
((*(yR119 *)rt_nil_check(F.p3548))).f_monitor = v1755;
}
if ((((*(yR119 *)rt_nil_check(F.p3548))).f_monitor == ((void *)0))) {
y_use = F.yu; return;
}
yr1126_Emit(yr3194_Join(yr1055_T(y_str("y_mon_enter(", 12)), yr3541_MonitorPath(((*(yR119 *)rt_nil_check(F.p3548))).f_monitor), yr1055_T(y_str(");", 2))));
F.v8870 = yr1194_Fresh(y_str("mf", 2));
v1624 = 1;
yr1126_Emit(yr3194_Join(yr1055_T(y_str("rt_frame ", 9)), F.v8870, yr1055_T(y_str(";", 1))));
yr1020_SB();
yr1031_SA(y_str("if (!RT_TRY(", 12));
yr1038_ST(F.v8870);
yr1031_SA(y_str(")) { RT_POP(", 12));
yr1038_ST(F.v8870);
yr1031_SA(y_str("); ", 3));
if ((((*(yR119 *)rt_nil_check(F.p3548))).f_kind == v879)) {
yr1031_SA(y_str("y_mon_drop(", 11));
} else {
yr1031_SA(y_str("y_mon_leave(", 12));
}
yr1038_ST(yr3541_MonitorPath(((*(yR119 *)rt_nil_check(F.p3548))).f_monitor));
yr1031_SA(y_str("); rt_raise(rt_xcur); }", 23));
yr1126_Emit(yr1050_SE());
v1520 = rt_range(rt_add(v1520, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1518).p)[y_ix1(v1518, v1520)] = F.v8870;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3553_LeaveMonitor(void) {
struct yf3554 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((v1595 == ((void *)0))) {
y_use = F.yu; return;
}
if ((((*(yR119 *)rt_nil_check(v1595))).f_monitor == ((void *)0))) {
y_use = F.yu; return;
}
if ((((*(yR119 *)rt_nil_check(v1595))).f_kind == v879)) {
yr1126_Emit(yr3194_Join(yr1055_T(y_str("y_mon_drop(", 11)), yr3541_MonitorPath(((*(yR119 *)rt_nil_check(v1595))).f_monitor), yr1055_T(y_str(");", 2))));
} else {
yr1126_Emit(yr3194_Join(yr1055_T(y_str("y_mon_leave(", 12)), yr3541_MonitorPath(((*(yR119 *)rt_nil_check(v1595))).f_monitor), yr1055_T(y_str(");", 2))));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3558_TerminateStatement(void * a_p3559) {
struct yf3560 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3559 = a_p3559;
if ((((v1595 == ((void *)0))) || ((!(((*(yR119 *)rt_nil_check(v1595))).f_kind == v879))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3559))).f_line, y_str("TERMINATE_PROCESS ends a process (IX.A.7)", 41));
}
yr3523_AwaitProcesses();
yr3553_LeaveMonitor();
yr3088_PopTo(v1523);
yr1132_EmitS(y_str("y_use = F.yu; return;", 21));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3564_DeclareSignal(void * a_p3565, rt_int a_p3566) {
struct yf3567 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3565 = a_p3565;
F.p3566 = a_p3566;
if ((v1755 == ((void *)0))) {
yr1172_FailS(F.p3566, y_str("signal variables are declared in a monitor (X.E.4)", 50));
}
((*(yR119 *)rt_nil_check(F.p3565))).f_rep = yr2350_CopyRep(((*(yR119 *)rt_nil_check(F.p3565))).f_rep);
((*(yR104 *)rt_nil_check(((*(yR119 *)rt_nil_check(F.p3565))).f_rep))).f_monitor = v1755;
yr1126_Emit(yr3194_Join(yr1055_T(y_str("y_sig_init(&", 12)), yr2331_SymPath(F.p3565), yr3194_Join(yr1055_T(y_str(", ", 2)), yr3541_MonitorPath(v1755), yr1055_T(y_str(");", 2)))));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3571_DeclareSignalArray(void * a_p3572, rt_int a_p3573) {
struct yf3574 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3572 = a_p3572;
F.p3573 = a_p3573;
if ((v1755 == ((void *)0))) {
yr1172_FailS(F.p3573, y_str("signal variables are declared in a monitor (X.E.4)", 50));
}
yr1126_Emit(yr3194_Join(yr1055_T(y_str("y_sig_init_all(", 15)), yr2411_DescOf(((*(yR119 *)rt_nil_check(F.p3572))).f_rep), yr3194_Join(yr1055_T(y_str(", &", 3)), yr2331_SymPath(F.p3572), yr3194_Join(yr1055_T(y_str(", ", 2)), yr3541_MonitorPath(v1755), yr1055_T(y_str(");", 2))))));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3578_DeviceSignal(void * a_p3579, void * a_p3580) {
struct yf3581 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3579 = a_p3579;
F.p3580 = a_p3580;
yr2698_Manifest(F.p3580, &F.v8913, &F.v8915);
if ((!F.v8913)) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3580))).f_line, y_str("an AT location is a manifest constant (XIV.VII)", 47));
}
yr1020_SB();
yr1031_SA(y_str("y_device(&", 10));
yr1038_ST(yr2331_SymPath(F.p3579));
yr1031_SA(y_str(", ", 2));
yr1044_SI(F.v8915);
yr1031_SA(y_str(");", 2));
F.v8917 = yr1050_SE();
yr1126_Emit(F.v8917);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3585_Arg(void * a_p3586, rt_int a_p3587) {
struct yf3588 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3586 = a_p3586;
F.p3587 = a_p3587;
F.v8926 = ((*(yR99 *)rt_nil_check(F.p3586))).f_a;
F.v8928 = INT64_C(1);
while ((((!(F.v8926 == ((void *)0)))) && ((F.v8928 < F.p3587)))) {
Y_TICK();
F.v8926 = ((*(yR99 *)rt_nil_check(F.v8926))).f_next;
F.v8928 = rt_range(rt_add(F.v8928, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v8926 == ((void *)0))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3586))).f_line, ((*(yR99 *)rt_nil_check(F.p3586))).f_name, y_str(": too few actual parameters", 27));
}
{ void * rv8933 = F.v8926;
y_use = F.yu; return rv8933; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3592_NArgs(void * a_p3593, rt_int a_p3594) {
struct yf3595 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3593 = a_p3593;
F.p3594 = a_p3594;
if ((!(yr1903_Count(((*(yR99 *)rt_nil_check(F.p3593))).f_a) == F.p3594))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3593))).f_line, ((*(yR99 *)rt_nil_check(F.p3593))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3599_Call1(yarr a_p3601, rt_int a_p3602) {
struct yf3603 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3601 = a_p3601;
F.p3602 = a_p3602;
yr1020_SB();
yr1031_SA(F.p3601);
yr1031_SA(y_str("(", 1));
yr1038_ST(F.p3602);
yr1031_SA(y_str(")", 1));
{ rt_int rv8943 = yr1050_SE();
y_use = F.yu; return rv8943; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3607_Addr(rt_int a_p3608) {
struct yf3609 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3608 = a_p3608;
{ rt_int rv8948 = yr3194_Join(yr1055_T(y_str("&", 1)), F.p3608, INT64_C(0));
y_use = F.yu; return rv8948; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3613_StdVar(void * a_p3614, rt_int a_p3615, rt_int * a_p3616, void * * a_p3617) {
struct yf3618 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3614 = a_p3614;
F.p3615 = a_p3615;
F.p3616_o = a_p3616;
F.p3617_o = a_p3617;
yr2819_LValue(F.p3614, &F.p3616, &F.p3617);
yr3249_NoteWrite(F.p3614);
if ((((!(F.p3615 == v852))) && ((!(((*(yR104 *)rt_nil_check(F.p3617))).f_kind == F.p3615))))) {
yr1020_SB();
yr1031_SA(y_str("a ", 2));
if ((F.p3615 == v825)) {
yr1031_SA(y_str("file", 4));
} else if ((F.p3615 == v831)) {
yr1031_SA(y_str("signal", 6));
} else if ((F.p3615 == v834)) {
yr1031_SA(y_str("SEMAPHORE", 9));
} else if ((F.p3615 == v822)) {
yr1031_SA(y_str("pointer", 7));
} else {
yr1031_SA(y_str("variable", 8));
}
yr1031_SA(y_str(" is needed here", 15));
F.v8955 = yr1050_SE();
yr1151_Fail(((*(yR99 *)rt_nil_check(F.p3614))).f_line, F.v8955);
}
(*F.p3616_o) = F.p3616;
(*F.p3617_o) = F.p3617;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3622_NumArg(void * a_p3623, rt_int * a_p3624, void * * a_p3625) {
struct yf3626 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3623 = a_p3623;
F.p3624_o = a_p3624;
F.p3625_o = a_p3625;
yr2846_Expr(F.p3623, ((void *)0), &F.p3624, &F.p3625);
if ((!yr2362_IsNumeric(F.p3625))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3623))).f_line, y_str("a number is needed here", 23));
}
(*F.p3624_o) = F.p3624;
(*F.p3625_o) = F.p3625;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3630_IntArg(void * a_p3631) {
struct yf3632 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3631 = a_p3631;
yr2846_Expr(F.p3631, v1336, &F.v8971, &F.v8973);
if ((!(((*(yR104 *)rt_nil_check(F.v8973))).f_kind == v798))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3631))).f_line, y_str("an integer is needed here", 25));
}
{ rt_int rv8975 = F.v8971;
y_use = F.yu; return rv8975; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3636_CodeInsert(void * a_p3637) {
struct yf3638 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3637 = a_p3637;
F.v8979 = yr3585_Arg(F.p3637, INT64_C(1));
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1)}; y_desc_array(&F.yd_9005, 1, lo, hi, &y_d_int); }
y_init(&F.yd_9005, &F.v9007);
if ((!(((*(yR99 *)rt_nil_check(F.v8979))).f_kind == v765))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3637))).f_line, y_str("a code insert takes a string literal (XIV.XI.5)", 47));
}
F.v8982 = ((*(yR99 *)rt_nil_check(F.v8979))).f_text;
F.v8992 = ((rt_int *)(v914).p)[y_ix1(v914, F.v8982)];
yr1020_SB();
F.v8988 = INT64_C(1);
while ((F.v8988 <= F.v8992)) {
Y_TICK();
F.v8994 = yr1097_TChar(F.v8982, F.v8988);
if ((F.v8994 == 39)) {
F.v8990 = rt_range(rt_add(F.v8988, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1097_TChar(F.v8982, F.v8990) == 39))) {
Y_TICK();
F.v8990 = rt_range(rt_add(F.v8990, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v8984 = yr1062_Intern(rt_range(rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.v8982)], F.v8988), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v8990, F.v8988)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1025_SC(((unsigned char *)(v970).p)[y_ix1(v970, yr2681_CharValue(v1340, F.v8984, ((*(yR99 *)rt_nil_check(F.p3637))).f_line))]);
F.v8988 = rt_range(rt_add(F.v8990, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v8994 == 36)) {
F.v8990 = rt_range(rt_add(F.v8988, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((F.v8990 <= F.v8992)) && ((yr1002_IsLetter(yr1097_TChar(F.v8982, F.v8990)) || yr1008_IsDigit(yr1097_TChar(F.v8982, F.v8990)))))) {
Y_TICK();
F.v8990 = rt_range(rt_add(F.v8990, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v8984 = yr1062_Intern(rt_range(rt_add(((rt_int *)(v912).p)[y_ix1(v912, F.v8982)], F.v8988), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), rt_range(rt_sub((rt_sub(F.v8990, F.v8988)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v8996 = yr2232_Find(F.v8984);
if ((F.v8996 == ((void *)0))) {
v935 = INT64_C(0);
v949 = INT64_C(0);
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3637))).f_line, F.v8984, y_str(" in a code insert is not declared here", 38));
}
F.v8996 = yr2337_Real(F.v8996);
if ((((!(((*(yR119 *)rt_nil_check(F.v8996))).f_kind == v855))) && ((!(((*(yR119 *)rt_nil_check(F.v8996))).f_kind == v858))))) {
v935 = INT64_C(0);
v949 = INT64_C(0);
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3637))).f_line, F.v8984, y_str(" in a code insert is not a variable or constant", 47));
}
yr1038_ST(yr2827_Paren(yr2331_SymPath(F.v8996)));
F.v8988 = F.v8990;
} else {
yr1025_SC(F.v8994);
F.v8988 = rt_range(rt_add(F.v8988, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
F.v8986 = yr1050_SE();
yr1126_Emit(F.v8986);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3642_ManifestScale(void * a_p3643, void * a_p3644) {
struct yf3645 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3643 = a_p3643;
F.p3644 = a_p3644;
yr2764_ManifestFix(F.p3643, &F.v9043, &F.v9045, &F.v9047);
if (((!F.v9043) || ((F.v9045 <= INT64_C(0))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3644))).f_line, ((*(yR99 *)rt_nil_check(F.p3644))).f_name, y_str(": the scale is a positive manifest constant (XI)", 48));
}
F.v9049 = yr2350_CopyRep(v1350);
((*(yR104 *)rt_nil_check(F.v9049))).f_abstract = 0;
yr2552_SetScale(F.v9049, F.v9045, F.v9047);
{ void * rv9053 = F.v9049;
y_use = F.yu; return rv9053; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3649_StdCall(rt_int a_p3650, void * a_p3651, rt_int a_p3652, rt_int * a_p3653, void * * a_p3654) {
struct yf3655 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3650 = a_p3650;
F.p3651 = a_p3651;
F.p3652 = a_p3652;
F.p3653_o = a_p3653;
F.p3654_o = a_p3654;
F.p3654 = v1342;
F.p3653 = yr1055_T(y_str("((void)0)", 9));
F.v9089 = ((((((((((((((((F.p3650 == v1378)) || ((F.p3650 == v1381))) || ((F.p3650 == v1384))) || ((F.p3650 == v1387))) || ((F.p3650 == v1390))) || ((F.p3650 == v1396))) || ((F.p3650 == v1405))) || ((F.p3650 == v1411))) || ((F.p3650 == v1414))) || ((F.p3650 == v1438))) || ((F.p3650 == v1441))) || ((F.p3650 == v1450))) || ((F.p3650 == v1453))) || ((F.p3650 == v1456))) || ((F.p3650 == v1459)));
if ((F.p3652 && (!F.v9089))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3651))).f_line, ((*(yR99 *)rt_nil_check(F.p3651))).f_name, y_str(" returns a value: it is called in an expression", 47));
}
if (((!F.p3652) && F.v9089)) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3651))).f_line, ((*(yR99 *)rt_nil_check(F.p3651))).f_name, y_str(" returns no value", 17));
}
if ((((F.p3650 == v1360)) || ((F.p3650 == v1363)))) {
yr3592_NArgs(F.p3651, INT64_C(2));
yr2846_Expr(yr3585_Arg(F.p3651, INT64_C(1)), ((void *)0), &F.v9061, &F.v9071);
if ((!yr2368_IsArrayLike(F.v9071))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3651))).f_line, ((*(yR99 *)rt_nil_check(F.p3651))).f_name, y_str(" of something that is not an array", 34));
}
F.v9063 = yr3630_IntArg(yr3585_Arg(F.p3651, INT64_C(2)));
yr2698_Manifest(yr3585_Arg(F.p3651, INT64_C(2)), &F.v9085, &F.v9083);
F.p3654 = yr2890_Unbounded(v1336);
if ((F.v9085 && ((((*(yR104 *)rt_nil_check(F.v9071))).f_kind == v816)))) {
if ((((F.v9083 < INT64_C(1))) || ((F.v9083 > ((*(yR104 *)rt_nil_check(F.v9071))).f_nidx)))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3651))).f_line, y_str("no such dimension", 17));
}
F.v9077 = ((*(yR104 *)rt_nil_check(F.v9071))).f_idx;
F.lo9103 = INT64_C(2);
F.hi9104 = F.v9083;
{ rt_int hi9108 = F.hi9104;
for (rt_int i9107 = F.lo9103; i9107 <= hi9108; i9107++) { F.c_9106 = i9107; Y_TICK();
F.v9077 = ((*(yR104 *)rt_nil_check(F.v9077))).f_link;
if (i9107 == hi9108) break;
}}
F.p3654 = F.v9077;
}
if ((F.p3650 == v1360)) {
F.p3653 = yr2896_Call2(y_str("y_low", 5), F.v9061, F.v9063);
} else {
F.p3653 = yr2896_Call2(y_str("y_high", 6), F.v9061, F.v9063);
}
(*F.p3653_o) = F.p3653;
(*F.p3654_o) = F.p3654;
y_use = F.yu; return;
}
if ((((((F.p3650 == v1366)) || ((F.p3650 == v1369))) || ((F.p3650 == v1372))) || ((F.p3650 == v1375)))) {
yr3592_NArgs(F.p3651, INT64_C(1));
yr2846_Expr(yr3585_Arg(F.p3651, INT64_C(1)), ((void *)0), &F.v9061, &F.v9071);
if ((!yr2356_IsDiscrete(F.v9071))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3651))).f_line, ((*(yR99 *)rt_nil_check(F.p3651))).f_name, y_str(" of something that is not integer or scalar", 43));
}
if ((((((*(yR104 *)rt_nil_check(F.v9071))).f_kind == v807)) || ((((((*(yR104 *)rt_nil_check(F.v9071))).f_kind == v810)) && (!((*(yR104 *)rt_nil_check(F.v9071))).f_ordered))))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3651))).f_line, ((*(yR99 *)rt_nil_check(F.p3651))).f_name, y_str(" applies to integers, ordered enumerations and alphabets, not UNORDERED ones (XI)", 81));
}
if ((!(((*(yR104 *)rt_nil_check(F.v9071))).f_elem == ((void *)0)))) {
F.v9071 = ((*(yR104 *)rt_nil_check(F.v9071))).f_elem;
}
if ((((((F.p3650 == v1372)) || ((F.p3650 == v1375)))) && ((((*(yR104 *)rt_nil_check(F.v9071))).f_kind == v798)))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3651))).f_line, y_str("FIRST and LAST apply to ordered enumerations and alphabets (XI)", 63));
}
if ((F.p3650 == v1372)) {
F.p3654 = F.v9071;
F.p3653 = yr2486_LoText(F.v9071);
} else if ((F.p3650 == v1375)) {
F.p3654 = F.v9071;
F.p3653 = yr2492_HiText(F.v9071);
} else {
F.p3654 = yr2890_Unbounded(F.v9071);
yr1020_SB();
if ((!(((*(yR104 *)rt_nil_check(F.v9071))).f_kind == v798))) {
yr1031_SA(y_str("rt_range(", 9));
}
if ((F.p3650 == v1366)) {
yr1031_SA(y_str("rt_add(", 7));
} else {
yr1031_SA(y_str("rt_sub(", 7));
}
yr1038_ST(F.v9061);
yr1031_SA(y_str(", 1)", 4));
if ((!(((*(yR104 *)rt_nil_check(F.v9071))).f_kind == v798))) {
yr1031_SA(y_str(", 0, ", 5));
yr1044_SI(rt_range(rt_sub(((*(yR104 *)rt_nil_check(F.v9071))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1031_SA(y_str(")", 1));
}
F.p3653 = yr1050_SE();
}
(*F.p3653_o) = F.p3653;
(*F.p3654_o) = F.p3654;
y_use = F.yu; return;
}
if ((F.p3650 == v1378)) {
yr3592_NArgs(F.p3651, INT64_C(1));
yr3613_StdVar(yr3585_Arg(F.p3651, INT64_C(1)), v822, &F.v9061, &F.v9071);
if ((((*(yR104 *)rt_nil_check(F.v9071))).f_elem == ((void *)0))) {
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3651))).f_line, ((*(yR104 *)rt_nil_check(F.v9071))).f_forward, y_str(" is not declared", 16));
}
F.v9077 = ((*(yR104 *)rt_nil_check(F.v9071))).f_elem;
yr1020_SB();
yr1031_SA(y_str("({ ", 3));
yr1038_ST(F.v9061);
yr1031_SA(y_str(" = rt_alloc(sizeof(", 19));
yr1038_ST(yr2405_CType(F.v9077));
yr1031_SA(y_str("));", 3));
if (yr2380_Deep(F.v9077)) {
yr1031_SA(y_str(" y_init(", 8));
yr1038_ST(yr2411_DescOf(F.v9077));
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v9061);
yr1031_SA(y_str(");", 2));
}
yr1031_SA(y_str(" })", 3));
F.p3653 = yr1050_SE();
(*F.p3653_o) = F.p3653;
(*F.p3654_o) = F.p3654;
y_use = F.yu; return;
}
if ((F.p3650 == v1456)) {
yr3592_NArgs(F.p3651, INT64_C(1));
yr3613_StdVar(yr3585_Arg(F.p3651, INT64_C(1)), v822, &F.v9061, &F.v9071);
F.p3653 = yr3194_Join(yr1055_T(y_str("({ free(", 8)), F.v9061, yr3194_Join(yr1055_T(y_str("); ", 3)), F.v9061, yr1055_T(y_str(" = 0; })", 8))));
(*F.p3653_o) = F.p3653;
(*F.p3654_o) = F.p3654;
y_use = F.yu; return;
}
if ((F.p3650 == v1381)) {
yr3592_NArgs(F.p3651, INT64_C(3));
yr3613_StdVar(yr3585_Arg(F.p3651, INT64_C(1)), v825, &F.v9061, &F.v9071);
yr2846_Expr(yr3585_Arg(F.p3651, INT64_C(2)), v1340, &F.v9063, &F.v9073);
if ((!yr2374_IsString(F.v9073))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3651))).f_line, y_str("OPEN takes the name of the file as a string (XII.A)", 51));
}
yr2846_Expr(yr3585_Arg(F.p3651, INT64_C(3)), v1820, &F.v9065, &F.v9075);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p3651))).f_line, v1820, F.v9075);
yr1020_SB();
yr1031_SA(y_str("y_open(&", 8));
yr1038_ST(F.v9061);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v9063);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v9065);
yr1031_SA(y_str(")", 1));
F.p3653 = yr1050_SE();
(*F.p3653_o) = F.p3653;
(*F.p3654_o) = F.p3654;
y_use = F.yu; return;
}
if ((((F.p3650 == v1384)) || ((F.p3650 == v1393)))) {
yr3592_NArgs(F.p3651, INT64_C(1));
yr3613_StdVar(yr3585_Arg(F.p3651, INT64_C(1)), v825, &F.v9061, &F.v9071);
if ((F.p3650 == v1384)) {
F.p3653 = yr3599_Call1(y_str("y_close", 7), yr3607_Addr(F.v9061));
} else {
F.p3654 = v1338;
F.p3653 = yr3599_Call1(y_str("y_check_eof", 11), yr3607_Addr(F.v9061));
}
(*F.p3653_o) = F.p3653;
(*F.p3654_o) = F.p3654;
y_use = F.yu; return;
}
if ((F.p3650 == v1387)) {
yr3592_NArgs(F.p3651, INT64_C(2));
yr3613_StdVar(yr3585_Arg(F.p3651, INT64_C(1)), v825, &F.v9061, &F.v9071);
yr3613_StdVar(yr3585_Arg(F.p3651, INT64_C(2)), v852, &F.v9063, &F.v9073);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p3651))).f_line, ((*(yR104 *)rt_nil_check(F.v9071))).f_elem, F.v9073);
if ((yr2380_Deep(F.v9073) || ((((*(yR104 *)rt_nil_check(F.v9073))).f_kind == v822)))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3651))).f_line, y_str("files of this implementation hold no arrays or pointers", 55));
}
yr1020_SB();
yr1031_SA(y_str("({ ", 3));
yr1038_ST(yr2405_CType(F.v9073));
yr1031_SA(y_str(" g; y_get(&", 11));
yr1038_ST(F.v9061);
yr1031_SA(y_str(", &g, sizeof g); ", 17));
yr1038_ST(F.v9063);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(yr2779_Convert(yr1055_T(y_str("g", 1)), F.v9073, ((*(yR104 *)rt_nil_check(F.v9071))).f_elem));
yr1031_SA(y_str("; })", 4));
F.p3653 = yr1050_SE();
(*F.p3653_o) = F.p3653;
(*F.p3654_o) = F.p3654;
y_use = F.yu; return;
}
if ((F.p3650 == v1390)) {
yr3592_NArgs(F.p3651, INT64_C(2));
yr3613_StdVar(yr3585_Arg(F.p3651, INT64_C(1)), v825, &F.v9061, &F.v9071);
yr2846_Expr(yr3585_Arg(F.p3651, INT64_C(2)), ((*(yR104 *)rt_nil_check(F.v9071))).f_elem, &F.v9063, &F.v9073);
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p3651))).f_line, ((*(yR104 *)rt_nil_check(F.v9071))).f_elem, F.v9073);
if ((yr2380_Deep(F.v9073) || ((((*(yR104 *)rt_nil_check(F.v9073))).f_kind == v822)))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3651))).f_line, y_str("files of this implementation hold no arrays or pointers", 55));
}
yr1020_SB();
yr1031_SA(y_str("({ ", 3));
yr1038_ST(yr2405_CType(((*(yR104 *)rt_nil_check(F.v9071))).f_elem));
yr1031_SA(y_str(" pv = ", 6));
yr1038_ST(yr2779_Convert(F.v9063, ((*(yR104 *)rt_nil_check(F.v9071))).f_elem, F.v9073));
yr1031_SA(y_str("; y_put(&", 9));
yr1038_ST(F.v9061);
yr1031_SA(y_str(", &pv, sizeof pv); })", 21));
F.p3653 = yr1050_SE();
(*F.p3653_o) = F.p3653;
(*F.p3654_o) = F.p3654;
y_use = F.yu; return;
}
if ((F.p3650 == v1396)) {
F.v9079 = yr1903_Count(((*(yR99 *)rt_nil_check(F.p3651))).f_a);
if ((((F.v9079 < INT64_C(5))) || ((!((rt_mod((rt_sub(F.v9079, INT64_C(2))), INT64_C(3))) == INT64_C(0)))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3651))).f_line, y_str("MOVE takes an object, an index and triples", 42));
}
yr3613_StdVar(yr3585_Arg(F.p3651, INT64_C(1)), v852, &F.v9061, &F.v9071);
if (((!((((((*(yR104 *)rt_nil_check(F.v9071))).f_kind == v816)) || ((((*(yR104 *)rt_nil_check(F.v9071))).f_kind == v837))))) || ((!(((*(yR104 *)rt_nil_check(F.v9071))).f_nidx == INT64_C(1)))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3651))).f_line, y_str("MOVE works on one-dimensional arrays", 36));
}
F.v9063 = yr3630_IntArg(yr3585_Arg(F.p3651, INT64_C(2)));
F.v9069 = yr1194_Fresh(y_str("at", 2));
yr1020_SB();
yr1031_SA(y_str("({ rt_int ", 10));
yr1038_ST(F.v9069);
yr1031_SA(y_str(" = ", 3));
yr1038_ST(F.v9063);
yr1031_SA(y_str(";", 1));
F.p3653 = yr1050_SE();
F.v9081 = INT64_C(3);
while ((F.v9081 < F.v9079)) {
Y_TICK();
yr2846_Expr(yr3585_Arg(F.p3651, F.v9081), ((*(yR104 *)rt_nil_check(F.v9071))).f_elem, &F.v9065, &F.v9075);
if (((!yr2368_IsArrayLike(F.v9075)) || (!yr2423_SameType(((*(yR104 *)rt_nil_check(F.v9071))).f_elem, ((*(yR104 *)rt_nil_check(F.v9075))).f_elem)))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3651))).f_line, y_str("MOVE: the components differ in type", 35));
}
F.v9067 = yr3630_IntArg(yr3585_Arg(F.p3651, rt_range(rt_add(F.v9081, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v9063 = yr3630_IntArg(yr3585_Arg(F.p3651, rt_range(rt_add(F.v9081, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr1020_SB();
yr1038_ST(F.p3653);
yr1031_SA(y_str(" { rt_int mi = ", 15));
yr1038_ST(F.v9067);
yr1031_SA(y_str(", mj = ", 7));
yr1038_ST(F.v9063);
yr1031_SA(y_str("; y_move(&", 10));
yr1038_ST(F.v9061);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v9069);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v9065);
yr1031_SA(y_str(", mi, mj, ", 10));
yr1038_ST(yr2411_DescOf(((*(yR104 *)rt_nil_check(F.v9071))).f_elem));
yr1031_SA(y_str("); if (mj >= mi) ", 17));
yr1038_ST(F.v9069);
yr1031_SA(y_str(" += mj - mi + 1; }", 18));
F.p3653 = yr1050_SE();
F.v9081 = rt_range(rt_add(F.v9081, INT64_C(3)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.p3653 = yr3194_Join(F.p3653, yr1055_T(y_str(" })", 3)), INT64_C(0));
(*F.p3653_o) = F.p3653;
(*F.p3654_o) = F.p3654;
y_use = F.yu; return;
}
if ((((F.p3650 == v1399)) || ((F.p3650 == v1402)))) {
yr3592_NArgs(F.p3651, INT64_C(2));
F.v9061 = yr3164_Cond(yr3585_Arg(F.p3651, INT64_C(1)));
F.v9063 = yr3164_Cond(yr3585_Arg(F.p3651, INT64_C(2)));
F.p3654 = v1338;
if ((F.p3650 == v1399)) {
F.p3653 = yr2905_Infix(yr2827_Paren(yr2905_Infix(F.v9061, y_str("!=", 2), yr1055_T(y_str("0", 1)))), y_str("&", 1), yr2827_Paren(yr2905_Infix(F.v9063, y_str("!=", 2), yr1055_T(y_str("0", 1)))));
} else {
F.p3653 = yr2905_Infix(yr2827_Paren(yr2905_Infix(F.v9061, y_str("!=", 2), yr1055_T(y_str("0", 1)))), y_str("|", 1), yr2827_Paren(yr2905_Infix(F.v9063, y_str("!=", 2), yr1055_T(y_str("0", 1)))));
}
(*F.p3653_o) = F.p3653;
(*F.p3654_o) = F.p3654;
y_use = F.yu; return;
}
if ((F.p3650 == v1405)) {
yr3592_NArgs(F.p3651, INT64_C(1));
F.p3653 = yr3599_Call1(y_str("rt_delay", 8), yr3630_IntArg(yr3585_Arg(F.p3651, INT64_C(1))));
(*F.p3653_o) = F.p3653;
(*F.p3654_o) = F.p3654;
y_use = F.yu; return;
}
if ((F.p3650 == v1408)) {
yr3592_NArgs(F.p3651, INT64_C(0));
F.p3654 = yr2890_Unbounded(v1336);
F.p3653 = yr1055_T(y_str("rt_time()", 9));
(*F.p3653_o) = F.p3653;
(*F.p3654_o) = F.p3654;
y_use = F.yu; return;
}
if (((((F.p3650 == v1411)) || ((F.p3650 == v1414))) || ((F.p3650 == v1417)))) {
yr3613_StdVar(yr3585_Arg(F.p3651, INT64_C(1)), v831, &F.v9061, &F.v9071);
if ((F.p3650 == v1411)) {
if ((yr1903_Count(((*(yR99 *)rt_nil_check(F.p3651))).f_a) == INT64_C(1))) {
F.v9063 = yr1055_T(y_str("1", 1));
} else {
yr3592_NArgs(F.p3651, INT64_C(2));
F.v9063 = yr3630_IntArg(yr3585_Arg(F.p3651, INT64_C(2)));
}
F.p3653 = yr2896_Call2(y_str("y_wait", 6), yr3607_Addr(F.v9061), F.v9063);
} else {
yr3592_NArgs(F.p3651, INT64_C(1));
if ((F.p3650 == v1414)) {
F.p3653 = yr3599_Call1(y_str("y_send", 6), yr3607_Addr(F.v9061));
} else {
F.p3654 = v1338;
F.p3653 = yr3599_Call1(y_str("y_awaited", 9), yr3607_Addr(F.v9061));
}
}
(*F.p3653_o) = F.p3653;
(*F.p3654_o) = F.p3654;
y_use = F.yu; return;
}
if (((((F.p3650 == v1420)) || ((F.p3650 == v1423))) || ((F.p3650 == v1426)))) {
yr3592_NArgs(F.p3651, INT64_C(1));
yr3622_NumArg(yr3585_Arg(F.p3651, INT64_C(1)), &F.v9061, &F.v9071);
F.p3654 = yr2890_Unbounded(v1336);
if ((((*(yR104 *)rt_nil_check(F.v9071))).f_kind == v798)) {
F.p3653 = F.v9061;
} else if ((((*(yR104 *)rt_nil_check(F.v9071))).f_kind == v801)) {
yr1020_SB();
if ((F.p3650 == v1420)) {
yr1031_SA(y_str("y_fix_floor(", 12));
} else if ((F.p3650 == v1423)) {
yr1031_SA(y_str("y_fix_ceiling(", 14));
} else {
yr1031_SA(y_str("y_fix_near_integer(", 19));
}
yr1038_ST(F.v9061);
yr1031_SA(y_str(", INT64_C(", 10));
yr1044_SI(((*(yR104 *)rt_nil_check(F.v9071))).f_fsn);
yr1031_SA(y_str("), INT64_C(", 11));
yr1044_SI(((*(yR104 *)rt_nil_check(F.v9071))).f_fsd);
yr1031_SA(y_str("))", 2));
F.p3653 = yr1050_SE();
} else if ((F.p3650 == v1420)) {
F.p3653 = yr3599_Call1(y_str("y_floor", 7), F.v9061);
} else if ((F.p3650 == v1423)) {
F.p3653 = yr3599_Call1(y_str("y_ceiling", 9), F.v9061);
} else {
F.p3653 = yr3599_Call1(y_str("y_near_integer", 14), F.v9061);
}
(*F.p3653_o) = F.p3653;
(*F.p3654_o) = F.p3654;
y_use = F.yu; return;
}
if ((F.p3650 == v1432)) {
yr3592_NArgs(F.p3651, INT64_C(1));
yr3622_NumArg(yr3585_Arg(F.p3651, INT64_C(1)), &F.v9061, &F.v9071);
F.p3654 = v1348;
if ((((*(yR104 *)rt_nil_check(F.v9071))).f_kind == v801)) {
F.p3653 = yr2929_FixToFloat(F.v9061, F.v9071);
} else {
F.p3653 = yr3194_Join(yr1055_T(y_str("((double)(", 10)), F.v9061, yr1055_T(y_str("))", 2)));
}
(*F.p3653_o) = F.p3653;
(*F.p3654_o) = F.p3654;
y_use = F.yu; return;
}
if ((F.p3650 == v1429)) {
yr3592_NArgs(F.p3651, INT64_C(2));
yr3622_NumArg(yr3585_Arg(F.p3651, INT64_C(1)), &F.v9061, &F.v9071);
F.p3654 = yr3642_ManifestScale(yr3585_Arg(F.p3651, INT64_C(2)), F.p3651);
if ((((*(yR104 *)rt_nil_check(F.v9071))).f_kind == v804)) {
yr1020_SB();
yr1031_SA(y_str("y_fix_of_float(", 15));
yr1038_ST(F.v9061);
yr1031_SA(y_str(", INT64_C(", 10));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p3654))).f_fsn);
yr1031_SA(y_str("), INT64_C(", 11));
yr1044_SI(((*(yR104 *)rt_nil_check(F.p3654))).f_fsd);
yr1031_SA(y_str("))", 2));
F.p3653 = yr1050_SE();
} else {
if ((((*(yR104 *)rt_nil_check(F.v9071))).f_kind == v798)) {
F.v9075 = yr2350_CopyRep(v1350);
yr2552_SetScale(F.v9075, INT64_C(1), INT64_C(1));
F.v9061 = yr3194_Join(yr1055_T(y_str("((yfix)(", 8)), F.v9061, yr1055_T(y_str("))", 2)));
} else {
F.v9075 = F.v9071;
}
yr2535_ScaleRatio(F.v9075, F.p3654, &F.v9067, &F.v9069, &F.v9085);
yr1020_SB();
yr1031_SA(y_str("y_fix_near(", 11));
yr1038_ST(F.v9061);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v9067);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v9069);
yr1031_SA(y_str(")", 1));
F.p3653 = yr1050_SE();
}
(*F.p3653_o) = F.p3653;
(*F.p3654_o) = F.p3654;
y_use = F.yu; return;
}
if ((F.p3650 == v1435)) {
yr3592_NArgs(F.p3651, INT64_C(3));
yr3622_NumArg(yr3585_Arg(F.p3651, INT64_C(1)), &F.v9061, &F.v9071);
yr3622_NumArg(yr3585_Arg(F.p3651, INT64_C(2)), &F.v9063, &F.v9073);
if ((((!(((*(yR104 *)rt_nil_check(F.v9071))).f_kind == v801))) || ((!(((*(yR104 *)rt_nil_check(F.v9073))).f_kind == v801))))) {
yr1172_FailS(((*(yR99 *)rt_nil_check(F.p3651))).f_line, y_str("FIXED_DIV divides fixed-point numbers (XI)", 42));
}
yr2438_CheckType(((*(yR99 *)rt_nil_check(F.p3651))).f_line, F.v9071, F.v9073);
F.p3654 = yr3642_ManifestScale(yr3585_Arg(F.p3651, INT64_C(3)), F.p3651);
((*(yR104 *)rt_nil_check(F.p3654))).f_tid = ((*(yR104 *)rt_nil_check(F.v9071))).f_tid;
((*(yR104 *)rt_nil_check(F.p3654))).f_tname = ((*(yR104 *)rt_nil_check(F.v9071))).f_tname;
F.v9075 = yr2350_CopyRep(v1350);
yr2552_SetScale(F.v9075, yr2519_MulChk(((*(yR104 *)rt_nil_check(F.v9073))).f_fsn, ((*(yR104 *)rt_nil_check(F.p3654))).f_fsn, ((*(yR99 *)rt_nil_check(F.p3651))).f_line), yr2519_MulChk(((*(yR104 *)rt_nil_check(F.v9073))).f_fsd, ((*(yR104 *)rt_nil_check(F.p3654))).f_fsd, ((*(yR99 *)rt_nil_check(F.p3651))).f_line));
yr2535_ScaleRatio(F.v9071, F.v9075, &F.v9067, &F.v9069, &F.v9085);
yr1020_SB();
yr1031_SA(y_str("y_fix_div(", 10));
yr1038_ST(F.v9061);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v9063);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v9067);
yr1031_SA(y_str(", ", 2));
yr1038_ST(F.v9069);
yr1031_SA(y_str(")", 1));
F.p3653 = yr1050_SE();
(*F.p3653_o) = F.p3653;
(*F.p3654_o) = F.p3654;
y_use = F.yu; return;
}
if ((F.p3650 == v1444)) {
v1627 = rt_range(rt_add(v1627, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (((((F.p3650 == v1438)) || ((F.p3650 == v1441))) || ((F.p3650 == v1444)))) {
yr3592_NArgs(F.p3651, INT64_C(1));
yr3613_StdVar(yr3585_Arg(F.p3651, INT64_C(1)), v834, &F.v9061, &F.v9071);
if ((F.p3650 == v1438)) {
F.p3653 = yr3599_Call1(y_str("rt_region_enter", 15), yr3607_Addr(F.v9061));
} else if ((F.p3650 == v1441)) {
F.p3653 = yr3599_Call1(y_str("rt_region_leave", 15), yr3607_Addr(F.v9061));
} else {
F.p3654 = v1338;
F.p3653 = yr3599_Call1(y_str("y_cond_claim", 12), yr3607_Addr(F.v9061));
}
(*F.p3653_o) = F.p3653;
(*F.p3654_o) = F.p3654;
y_use = F.yu; return;
}
if ((F.p3650 == v1447)) {
yr3592_NArgs(F.p3651, INT64_C(0));
F.p3654 = yr2890_Unbounded(v1336);
F.p3653 = yr1055_T(y_str("y_self()", 8));
(*F.p3653_o) = F.p3653;
(*F.p3654_o) = F.p3654;
y_use = F.yu; return;
}
if ((F.p3650 == v1450)) {
yr3592_NArgs(F.p3651, INT64_C(2));
F.p3653 = yr2896_Call2(y_str("y_change_priority", 17), yr3630_IntArg(yr3585_Arg(F.p3651, INT64_C(1))), yr3630_IntArg(yr3585_Arg(F.p3651, INT64_C(2))));
(*F.p3653_o) = F.p3653;
(*F.p3654_o) = F.p3654;
y_use = F.yu; return;
}
if ((F.p3650 == v1453)) {
yr3592_NArgs(F.p3651, INT64_C(1));
F.p3653 = yr3599_Call1(y_str("y_raise_termination", 19), yr3630_IntArg(yr3585_Arg(F.p3651, INT64_C(1))));
(*F.p3653_o) = F.p3653;
(*F.p3654_o) = F.p3654;
y_use = F.yu; return;
}
if ((F.p3650 == v1459)) {
yr3592_NArgs(F.p3651, INT64_C(1));
yr3636_CodeInsert(F.p3651);
(*F.p3653_o) = F.p3653;
(*F.p3654_o) = F.p3654;
y_use = F.yu; return;
}
if ((((F.p3650 == v1462)) || ((F.p3650 == v1465)))) {
yr3592_NArgs(F.p3651, INT64_C(1));
yr2846_Expr(yr3585_Arg(F.p3651, INT64_C(1)), ((void *)0), &F.v9061, &F.v9071);
F.p3654 = yr2890_Unbounded(v1336);
if ((F.p3650 == v1462)) {
F.p3653 = yr3194_Join(yr1055_T(y_str("((rt_int)(intptr_t)&(", 21)), F.v9061, yr1055_T(y_str("))", 2)));
} else {
F.p3653 = yr3194_Join(yr1055_T(y_str("((rt_int)sizeof(", 16)), F.v9061, yr1055_T(y_str("))", 2)));
}
(*F.p3653_o) = F.p3653;
(*F.p3654_o) = F.p3654;
y_use = F.yu; return;
}
yr1180_FailN(((*(yR99 *)rt_nil_check(F.p3651))).f_line, ((*(yR99 *)rt_nil_check(F.p3651))).f_name, y_str(" is not translated", 18));
(*F.p3653_o) = F.p3653;
(*F.p3654_o) = F.p3654;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3659_StdRep(yarr a_p3661, void * a_p3662) {
struct yf3663 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3661 = a_p3661;
F.p3662 = a_p3662;
F.v9298 = yr2202_NewSym(v864, yr1075_N(F.p3661));
((*(yR119 *)rt_nil_check(F.v9298))).f_rep = F.p3662;
yr2304_Define(F.v9298, INT64_C(0));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3667_StdOp(yarr a_p3669, rt_int a_p3670) {
struct yf3671 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3669 = a_p3669;
F.p3670 = a_p3670;
F.v9304 = yr2202_NewSym(v885, yr1075_N(F.p3669));
((*(yR119 *)rt_nil_check(F.v9304))).f_mval = F.p3670;
yr2304_Define(F.v9304, INT64_C(0));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3675_LitList(yarr a_p3677, yarr a_p3678, yarr a_p3679, rt_int a_p3680) {
struct yf3681 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3677 = a_p3677;
F.p3678 = a_p3678;
F.p3679 = a_p3679;
F.p3680 = a_p3680;
F.v9312 = ((void *)0);
F.v9314 = ((void *)0);
F.v9316 = ((void *)0);
F.v9316 = yr1888_NewNode(v663, INT64_C(0));
((*(yR99 *)rt_nil_check(F.v9316))).f_name = yr1075_N(F.p3677);
yr1895_Link(&F.v9312, &F.v9314, F.v9316);
F.v9316 = yr1888_NewNode(v663, INT64_C(0));
((*(yR99 *)rt_nil_check(F.v9316))).f_name = yr1075_N(F.p3678);
yr1895_Link(&F.v9312, &F.v9314, F.v9316);
if (F.p3680) {
F.v9316 = yr1888_NewNode(v663, INT64_C(0));
((*(yR99 *)rt_nil_check(F.v9316))).f_name = yr1075_N(F.p3679);
yr1895_Link(&F.v9312, &F.v9314, F.v9316);
}
{ void * rv9320 = F.v9312;
y_use = F.yu; return rv9320; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3685_Abstract(rt_int a_p3686, yarr a_p3688) {
struct yf3689 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3686 = a_p3686;
F.p3688 = a_p3688;
F.v9325 = yr2343_NewRep(F.p3686, yr1075_N(F.p3688));
((*(yR104 *)rt_nil_check(F.v9325))).f_abstract = 1;
{ void * rv9327 = F.v9325;
y_use = F.yu; return rv9327; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3693_Predefine(void) {
struct yf3694 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
yr2209_OpenScope(0);
((void * *)(v1766).p)[y_ix1(v1766, v1267)] = ((void *)0);
v1336 = yr3685_Abstract(v798, y_str("INTEGER", 7));
v1350 = yr3685_Abstract(v801, y_str("FIXED", 5));
v1348 = yr3685_Abstract(v804, y_str("FLOATING", 8));
v1352 = yr2343_NewRep(v831, yr1075_N(y_str("SIGNAL", 6)));
v1354 = yr2343_NewRep(v834, yr1075_N(y_str("SEMAPHORE", 9)));
v1342 = yr2343_NewRep(v846, yr1075_N(y_str("no value", 8)));
v1356 = yr2343_NewRep(v852, yr1075_N(y_str("any", 3)));
v1338 = yr2343_NewRep(v807, yr1075_N(y_str("BOOLEAN", 7)));
((*(yR104 *)rt_nil_check(v1338))).f_lits = yr3675_LitList(y_str("FALSE", 5), y_str("TRUE", 4), y_str("", 0), 0);
((*(yR104 *)rt_nil_check(v1338))).f_nlits = INT64_C(2);
yr2573_SetRange(v1338, INT64_C(0), INT64_C(1));
yr2567_DefineLits(v1338);
v1340 = yr2343_NewRep(v813, yr1075_N(y_str("ASCII", 5)));
((*(yR104 *)rt_nil_check(v1340))).f_ordered = 1;
((*(yR104 *)rt_nil_check(v1340))).f_nlits = INT64_C(128);
yr2573_SetRange(v1340, INT64_C(0), INT64_C(127));
v1820 = yr2343_NewRep(v810, yr1075_N(y_str("OPEN_MODE", 9)));
((*(yR104 *)rt_nil_check(v1820))).f_lits = yr3675_LitList(y_str("READ", 4), y_str("WRITE", 5), y_str("APPEND", 6), 1);
((*(yR104 *)rt_nil_check(v1820))).f_nlits = INT64_C(3);
yr2573_SetRange(v1820, INT64_C(0), INT64_C(2));
yr2567_DefineLits(v1820);
yr3659_StdRep(y_str("INTEGER", 7), v1336);
yr3659_StdRep(y_str("FIXED", 5), v1350);
yr3659_StdRep(y_str("FLOATING", 8), v1348);
yr3659_StdRep(y_str("BOOLEAN", 7), v1338);
yr3659_StdRep(y_str("SIGNAL", 6), v1352);
yr3659_StdRep(y_str("SEMAPHORE", 9), v1354);
yr3659_StdRep(y_str("ASCII", 5), v1340);
yr3659_StdRep(y_str("STANDARD_ALPHABET", 17), v1340);
yr3659_StdRep(y_str("OPEN_MODE", 9), v1820);
yr3667_StdOp(y_str("LOW", 3), v1360);
yr3667_StdOp(y_str("HIGH", 4), v1363);
yr3667_StdOp(y_str("SUCC", 4), v1366);
yr3667_StdOp(y_str("PRED", 4), v1369);
yr3667_StdOp(y_str("FIRST", 5), v1372);
yr3667_StdOp(y_str("LAST", 4), v1375);
yr3667_StdOp(y_str("NEW", 3), v1378);
yr3667_StdOp(y_str("OPEN", 4), v1381);
yr3667_StdOp(y_str("CLOSE", 5), v1384);
yr3667_StdOp(y_str("GET", 3), v1387);
yr3667_StdOp(y_str("PUT", 3), v1390);
yr3667_StdOp(y_str("CHECK_EOF", 9), v1393);
yr3667_StdOp(y_str("MOVE", 4), v1396);
yr3667_StdOp(y_str("AND_LONG", 8), v1399);
yr3667_StdOp(y_str("OR_LONG", 7), v1402);
yr3667_StdOp(y_str("DELAY", 5), v1405);
yr3667_StdOp(y_str("CLOCK_TIME", 10), v1408);
yr3667_StdOp(y_str("WAIT", 4), v1411);
yr3667_StdOp(y_str("SEND", 4), v1414);
yr3667_StdOp(y_str("AWAITED", 7), v1417);
yr3667_StdOp(y_str("FLOOR", 5), v1420);
yr3667_StdOp(y_str("CEILING", 7), v1423);
yr3667_StdOp(y_str("NEAR_INTEGER", 12), v1426);
yr3667_StdOp(y_str("NEAR_FIXED", 10), v1429);
yr3667_StdOp(y_str("NEAR_FLOATING", 13), v1432);
yr3667_StdOp(y_str("FIXED_DIV", 9), v1435);
yr3667_StdOp(y_str("CLAIM", 5), v1438);
yr3667_StdOp(y_str("RELEASE", 7), v1441);
yr3667_StdOp(y_str("CONDITIONAL_CLAIM", 17), v1444);
yr3667_StdOp(y_str("PROCESS_IDENTITY", 16), v1447);
yr3667_StdOp(y_str("CHANGE_PRIORITY", 15), v1450);
yr3667_StdOp(y_str("RAISE_PROCESS_TERMINATION", 25), v1453);
yr3667_StdOp(y_str("FREE_POINTER", 12), v1456);
yr3667_StdOp(y_str("C_CODE_INSERT", 13), v1459);
yr3667_StdOp(y_str("ADDR", 4), v1462);
yr3667_StdOp(y_str("EXTENT", 6), v1465);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3698_Translate(void) {
struct yf3699 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v9405 = v1822;
yr2209_OpenScope(0);
((void * *)(v1766).p)[y_ix1(v1766, v1267)] = ((void *)0);
v1273 = INT64_C(0);
((void * *)(v1296).p)[y_ix1(v1296, v1267)] = v1822;
while ((!(F.v9405 == ((void *)0)))) {
Y_TICK();
if ((((*(yR99 *)rt_nil_check(F.v9405))).f_ival == INT64_C(0))) {
yr3499_CompileModule(F.v9405);
}
F.v9405 = ((*(yR99 *)rt_nil_check(F.v9405))).f_next;
}
yr3462_ResolveLater(v1267);
yr3378_RunDeferred(INT64_C(0), INT64_C(0));
yr3290_CheckEffects();
yr3523_AwaitProcesses();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3703_WriteProgram(void) {
struct yf3704 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
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
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void y_elaborate(void) {
{ static const size_t o[] = {offsetof(yR99, f_kind), offsetof(yR99, f_line), offsetof(yR99, f_ival), offsetof(yR99, f_flag), offsetof(yR99, f_name), offsetof(yR99, f_text), offsetof(yR99, f_a), offsetof(yR99, f_b), offsetof(yR99, f_c), offsetof(yR99, f_d), offsetof(yR99, f_e), offsetof(yR99, f_next), offsetof(yR99, f_rep), offsetof(yR99, f_sym), offsetof(yR99, f_x), 0}; const ydesc **f = rt_alloc(16 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_int; f[2] = &y_d_int; f[3] = &y_d_int; f[4] = &y_d_int; f[5] = &y_d_int; f[6] = &y_d_ptr; f[7] = &y_d_ptr; f[8] = &y_d_ptr; f[9] = &y_d_ptr; f[10] = &y_d_ptr; f[11] = &y_d_ptr; f[12] = &y_d_ptr; f[13] = &y_d_ptr; f[14] = &y_d_ptr; y_desc_record(&yd_100, sizeof(yR99), 15, o, (const ydesc *const *)f); }
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
yr3693_Predefine();
yr3698_Translate();
yr3703_WriteProgram();
y_close(&v905);
}
int main(int argc, char **argv) {
y_lang();
rt_init(argc, argv);
y_elaborate();
rt_main_done();
return 0;
}
