#include "paleo.h"
#include <math.h>
#include <string.h>
#include <stdlib.h>
typedef struct yR105 yR105;
typedef struct yR110 yR110;
typedef struct yR115 yR115;
typedef struct yR120 yR120;
typedef struct yR125 yR125;
typedef struct yR130 yR130;
typedef struct yR135 yR135;
typedef struct yR140 yR140;
struct yf1004;
struct yf1010;
struct yf1016;
struct yf1022;
struct yf1027;
struct yf1033;
struct yf1040;
struct yf1046;
struct yf1052;
struct yf1057;
struct yf1064;
struct yf1071;
struct yf1077;
struct yf1084;
struct yf1091;
struct yf1099;
struct yf1106;
struct yf1113;
struct yf1121;
struct yf1128;
struct yf1134;
struct yf1141;
struct yf1147;
struct yf1153;
struct yf1160;
struct yf1167;
struct yf1174;
struct yf1182;
struct yf1191;
struct yf1196;
struct yf1203;
struct yf1876;
struct yf1881;
struct yf1888;
struct yf1894;
struct yf1899;
struct yf1905;
struct yf1912;
struct yf1919;
struct yf1925;
struct yf1930;
struct yf1935;
struct yf1942;
struct yf1950;
struct yf1956;
struct yf1961;
struct yf1966;
struct yf1971;
struct yf1978;
struct yf1984;
struct yf1990;
struct yf1995;
struct yf2001;
struct yf2006;
struct yf2012;
struct yf2017;
struct yf2024;
struct yf2029;
struct yf2035;
struct yf2040;
struct yf2045;
struct yf2050;
struct yf2055;
struct yf2060;
struct yf2065;
struct yf2071;
struct yf2077;
struct yf2084;
struct yf2089;
struct yf2095;
struct yf2100;
struct yf2106;
struct yf2111;
struct yf2116;
struct yf2121;
struct yf2126;
struct yf2131;
struct yf2136;
struct yf2141;
struct yf2147;
struct yf2152;
struct yf2157;
struct yf2163;
struct yf2169;
struct yf2175;
struct yf2181;
struct yf2187;
struct yf2196;
struct yf2203;
struct yf2208;
struct yf2213;
struct yf2218;
struct yf2224;
struct yf2229;
struct yf2234;
struct yf2239;
struct yf2244;
struct yf2249;
struct yf2256;
struct yf2262;
struct yf2268;
struct yf2273;
struct yf2279;
struct yf2285;
struct yf2291;
struct yf2298;
struct yf2305;
struct yf2311;
struct yf2318;
struct yf2325;
struct yf2332;
struct yf2338;
struct yf2344;
struct yf2351;
struct yf2358;
struct yf2365;
struct yf2371;
struct yf2378;
struct yf2384;
struct yf2390;
struct yf2397;
struct yf2403;
struct yf2409;
struct yf2415;
struct yf2421;
struct yf2427;
struct yf2433;
struct yf2440;
struct yf2446;
struct yf2452;
struct yf2458;
struct yf2464;
struct yf2470;
struct yf2477;
struct yf2485;
struct yf2493;
struct yf2500;
struct yf2506;
struct yf2512;
struct yf2519;
struct yf2525;
struct yf2533;
struct yf2539;
struct yf2545;
struct yf2553;
struct yf2559;
struct yf2566;
struct yf2574;
struct yf2582;
struct yf2592;
struct yf2599;
struct yf2607;
struct yf2614;
struct yf2620;
struct yf2628;
struct yf2634;
struct yf2642;
struct yf2649;
struct yf2657;
struct yf2664;
struct yf2669;
struct yf2675;
struct yf2688;
struct yf2699;
struct yf2707;
struct yf2714;
struct yf2720;
struct yf2727;
struct yf2734;
struct yf2742;
struct yf2749;
struct yf2756;
struct yf2762;
struct yf2769;
struct yf2776;
struct yf2784;
struct yf2790;
struct yf2797;
struct yf2804;
struct yf2812;
struct yf2821;
struct yf2829;
struct yf2837;
struct yf2844;
struct yf2852;
struct yf2860;
struct yf2868;
struct yf2879;
struct yf2887;
struct yf2896;
struct yf2902;
struct yf2910;
struct yf2920;
struct yf2930;
struct yf2936;
struct yf2942;
struct yf2950;
struct yf2956;
struct yf2963;
struct yf2969;
struct yf2978;
struct yf2986;
struct yf2995;
struct yf3001;
struct yf3009;
struct yf3019;
struct yf3025;
struct yf3034;
struct yf3043;
struct yf3052;
struct yf3058;
struct yf3065;
struct yf3074;
struct yf3081;
struct yf3089;
struct yf3095;
struct yf3104;
struct yf3112;
struct yf3119;
struct yf3128;
struct yf3134;
struct yf3145;
struct yf3152;
struct yf3163;
struct yf3169;
struct yf3179;
struct yf3189;
struct yf3199;
struct yf3208;
struct yf3216;
struct yf3224;
struct yf3234;
struct yf3240;
struct yf3245;
struct yf3251;
struct yf3257;
struct yf3263;
struct yf3270;
struct yf3278;
struct yf3285;
struct yf3291;
struct yf3297;
struct yf3303;
struct yf3310;
struct yf3316;
struct yf3322;
struct yf3329;
struct yf3334;
struct yf3340;
struct yf3346;
struct yf3354;
struct yf3360;
struct yf3366;
struct yf3372;
struct yf3378;
struct yf3384;
struct yf3393;
struct yf3401;
struct yf3407;
struct yf3413;
struct yf3420;
struct yf3427;
struct yf3434;
struct yf3442;
struct yf3447;
struct yf3455;
struct yf3461;
struct yf3467;
struct yf3473;
struct yf3480;
struct yf3486;
struct yf3493;
struct yf3500;
struct yf3506;
struct yf3514;
struct yf3523;
struct yf3531;
struct yf3537;
struct yf3544;
struct yf3551;
struct yf3560;
struct yf3567;
struct yf3573;
struct yf3579;
struct yf3585;
struct yf3592;
struct yf3600;
struct yf3607;
struct yf3615;
struct yf3621;
struct yf3630;
struct yf3637;
struct yf3644;
struct yf3650;
struct yf3658;
struct yf3666;
struct yf3673;
struct yf3681;
struct yf3687;
struct yf3693;
struct yf3699;
struct yf3705;
struct yf3710;
struct yf3717;
struct yf3723;
struct yf3729;
struct yf3735;
struct yf3740;
struct yf3746;
struct yf3753;
struct yf3760;
struct yf3767;
struct yf3774;
struct yf3781;
struct yf3789;
struct yf3795;
struct yf3804;
struct yf3812;
struct yf3818;
struct yf3824;
struct yf3831;
struct yf3841;
struct yf3849;
struct yf3857;
struct yf3867;
struct yf3875;
struct yf3880;
struct yf3885;
struct yf3890;
struct yf8454;
struct yf8461;
struct yf8467;
struct yR105 { rt_int f_kind; rt_int f_line; rt_int f_ival; rt_int f_flag; rt_int f_name; rt_int f_text; void * f_a; void * f_b; void * f_c; void * f_d; void * f_e; void * f_next; void * f_rep; void * f_sym; void * f_x; };
struct yR110 { rt_int f_kind; rt_int f_tid; rt_int f_tname; rt_int f_lo; rt_int f_hi; rt_int f_mlo; rt_int f_mhi; rt_int f_hasm; rt_int f_scale; rt_int f_prec; void * f_elem; void * f_idx; rt_int f_nidx; void * f_link; void * f_lits; rt_int f_nlits; void * f_fields; void * f_selector; rt_int f_cname; rt_int f_dname; rt_int f_dlevel; rt_int f_deep; rt_int f_abstract; rt_int f_opaque; rt_int f_opaqueops; rt_int f_ordered; rt_int f_forward; rt_int f_fwdscope; void * f_monitor; rt_int f_serial; rt_int f_sig; rt_int f_fsn; rt_int f_fsd; rt_int f_packed; rt_int f_pbits; rt_int f_align; rt_int f_bits; };
struct yR115 { rt_int f_name; void * f_rep; rt_int f_isconst; rt_int f_variant; void * f_labels; void * f_next; rt_int f_at; };
struct yR120 { rt_int f_name; rt_int f_cls; void * f_rep; rt_int f_cname; void * f_next; rt_int f_at; rt_int f_path; };
struct yR125 { rt_int f_kind; rt_int f_name; void * f_rep; rt_int f_cname; rt_int f_level; rt_int f_byref; rt_int f_readonly; rt_int f_mval; rt_int f_hasmv; void * f_params; rt_int f_nparams; void * f_ret; rt_int f_func; void * f_decl; rt_int f_depth; void * f_target; void * f_members; void * f_mnext; void * f_chain; void * f_stack; void * f_alt; void * f_monitor; rt_int f_serial; void * f_calls; void * f_writes; void * f_frees; rt_int f_seen; rt_int f_vix; rt_int f_at; };
struct yR130 { void * f_syms; rt_int f_closed; void * f_module; rt_int f_level; void * f_deferred; void * f_up; };
struct yR135 { rt_int f_t; void * f_next; };
struct yR140 { void * f_head; void * f_tail; };
struct yf1004 { void *up;
rt_int v3895;
rt_int c_3898;
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
struct yf1022 { void *up;
unsigned char p1021;
rt_int yu;
};
struct yf1027 { void *up;
rt_int yu;
};
struct yf1033 { void *up;
unsigned char p1032;
rt_int yu;
};
struct yf1040 { void *up;
yarr p1039;
rt_int lo3934;
rt_int hi3935;
rt_int c_3937;
rt_int yu;
};
struct yf1046 { void *up;
rt_int p1045;
rt_int v3943;
rt_int yu;
};
struct yf1052 { void *up;
rt_int p1051;
ydesc yd_3958;
yarr v3960;
rt_int v3962;
rt_int v3965;
rt_int yu;
};
struct yf1057 { void *up;
rt_int v3984;
rt_int lo3995;
rt_int hi3996;
rt_int c_3998;
rt_int yu;
};
struct yf1064 { void *up;
yarr p1063;
rt_int yu;
};
struct yf1071 { void *up;
rt_int p1069;
rt_int p1070;
rt_int v4009;
rt_int v4012;
rt_int v4014;
rt_int lo4019;
rt_int hi4020;
rt_int c_4022;
rt_int lo4041;
rt_int hi4042;
rt_int c_4044;
rt_int yu;
};
struct yf1077 { void *up;
rt_int p1076;
rt_int yu;
};
struct yf1084 { void *up;
yarr p1083;
rt_int yu;
};
struct yf1091 { void *up;
rt_int p1089;
rt_int p1090;
rt_int lo4073;
rt_int hi4074;
rt_int c_4076;
rt_int yu;
};
struct yf1099 { void *up;
rt_int p1096;
yarr p1098;
rt_int v4089;
rt_int lo4105;
rt_int hi4106;
rt_int c_4108;
rt_int yu;
};
struct yf1106 { void *up;
rt_int p1104;
rt_int p1105;
rt_int yu;
};
struct yf1113 { void *up;
yR140 * p1111;
rt_int p1112;
void * v4129;
rt_int yu;
};
struct yf1121 { void *up;
yR140 * p1118;
yarr p1120;
rt_int yu;
};
struct yf1128 { void *up;
yR140 * p1126;
yR140 * p1127;
rt_int yu;
};
struct yf1134 { void *up;
rt_int p1133;
rt_int yu;
};
struct yf1141 { void *up;
yarr p1140;
rt_int yu;
};
struct yf1147 { void *up;
rt_int p1146;
rt_int v4143;
rt_int yu;
};
struct yf1153 { void *up;
yR140 p1152;
void * v4150;
rt_int yu;
};
struct yf1160 { void *up;
rt_int p1158;
rt_int p1159;
rt_int v4156;
rt_int yu;
};
struct yf1167 { void *up;
rt_int p1165;
rt_int p1166;
rt_int v4166;
rt_int yu;
};
struct yf1174 { void *up;
yfile * * p1172;
rt_int p1173;
rt_int v4176;
rt_int yu;
};
struct yf1182 { void *up;
rt_int p1179;
yarr p1181;
rt_int yu;
};
struct yf1191 { void *up;
rt_int p1187;
rt_int p1188;
yarr p1190;
rt_int v4188;
rt_int yu;
};
struct yf1196 { void *up;
rt_int yu;
};
struct yf1203 { void *up;
yarr p1202;
rt_int v4196;
rt_int yu;
};
struct yf1876 { void *up;
rt_int v4200;
rt_int v4202;
rt_int v4204;
rt_int lo4221;
rt_int hi4222;
rt_int c_4224;
rt_int yu;
};
struct yf1881 { void *up;
unsigned char v4233;
rt_int yu;
};
struct yf1888 { void *up;
rt_int p1886;
rt_int p1887;
rt_int yu;
};
struct yf1894 { void *up;
rt_int p1893;
rt_int yu;
};
struct yf1899 { void *up;
rt_int v4250;
rt_int v4252;
rt_int yu;
};
struct yf1905 { void *up;
unsigned char p1904;
rt_int yu;
};
struct yf1912 { void *up;
yarr p1911;
rt_int yu;
};
struct yf1919 { void *up;
rt_int p1917;
rt_int p1918;
rt_int v4282;
rt_int yu;
};
struct yf1925 { void *up;
rt_int p1924;
rt_int v4292;
rt_int v4295;
rt_int v4297;
rt_int v4299;
rt_int v4301;
rt_int v4303;
rt_int v4306;
rt_int v4309;
rt_int v4312;
rt_int v4315;
rt_int v4318;
rt_int v4321;
rt_int v4324;
rt_int lo4362;
rt_int hi4363;
rt_int c_4365;
rt_int lo4394;
rt_int hi4395;
rt_int c_4397;
rt_int lo4404;
rt_int hi4405;
rt_int c_4407;
rt_int yu;
};
struct yf1930 { void *up;
rt_int v4418;
rt_int v4420;
rt_int v4422;
rt_int v4424;
rt_int yu;
};
struct yf1935 { void *up;
unsigned char v4453;
rt_int v4455;
rt_int v4457;
rt_int v4459;
rt_int v4461;
rt_int v4463;
rt_int v4465;
rt_int v4467;
rt_int lo4542;
rt_int hi4543;
rt_int c_4545;
rt_int yu;
};
struct yf1942 { void *up;
rt_int p1940;
rt_int p1941;
void * v4561;
rt_int yu;
};
struct yf1950 { void *up;
void * * p1947;
void * * p1948;
void * p1949;
rt_int yu;
};
struct yf1956 { void *up;
void * p1955;
rt_int v4574;
void * v4577;
rt_int yu;
};
struct yf1961 { void *up;
rt_int yu;
};
struct yf1966 { void *up;
rt_int yu;
};
struct yf1971 { void *up;
rt_int yu;
};
struct yf1978 { void *up;
rt_int p1976;
rt_int p1977;
rt_int v4591;
rt_int yu;
};
struct yf1984 { void *up;
rt_int p1983;
rt_int yu;
};
struct yf1990 { void *up;
rt_int p1989;
rt_int yu;
};
struct yf1995 { void *up;
rt_int yu;
};
struct yf2001 { void *up;
rt_int p2000;
rt_int yu;
};
struct yf2006 { void *up;
rt_int v4614;
rt_int yu;
};
struct yf2012 { void *up;
rt_int p2011;
rt_int v4624;
rt_int yu;
};
struct yf2017 { void *up;
rt_int v4629;
rt_int yu;
};
struct yf2024 { void *up;
rt_int p2022;
rt_int p2023;
rt_int v4636;
rt_int yu;
};
struct yf2029 { void *up;
rt_int v4640;
rt_int yu;
};
struct yf2035 { void *up;
rt_int p2034;
void * v4650;
rt_int yu;
};
struct yf2040 { void *up;
void * v4657;
rt_int yu;
};
struct yf2045 { void *up;
void * v4662;
void * v4664;
void * v4666;
void * v4668;
rt_int v4670;
rt_int yu;
};
struct yf2050 { void *up;
rt_int v4679;
rt_int yu;
};
struct yf2055 { void *up;
void * v4685;
void * v4687;
void * v4689;
void * v4691;
rt_int yu;
};
struct yf2060 { void *up;
void * v4696;
void * v4698;
void * v4700;
void * v4702;
void * v4704;
rt_int yu;
};
struct yf2065 { void *up;
void * v4712;
void * v4714;
void * v4716;
rt_int yu;
};
struct yf2071 { void *up;
rt_int p2070;
void * v4722;
rt_int yu;
};
struct yf2077 { void *up;
rt_int p2076;
rt_int yu;
};
struct yf2084 { void *up;
void * * p2082;
void * * p2083;
rt_int v4743;
void * v4745;
void * v4747;
void * v4749;
rt_int yu;
};
struct yf2089 { void *up;
void * v4753;
void * v4755;
void * v4757;
rt_int v4759;
rt_int v4761;
rt_int v4763;
rt_int yu;
};
struct yf2095 { void *up;
void * p2094;
void * v4779;
void * v4781;
rt_int v4783;
rt_int yu;
};
struct yf2100 { void *up;
void * v4789;
rt_int yu;
};
struct yf2106 { void *up;
rt_int p2105;
rt_int v4801;
rt_int yu;
};
struct yf2111 { void *up;
rt_int v4809;
void * v4811;
rt_int yu;
};
struct yf2116 { void *up;
void * v4820;
void * v4822;
rt_int yu;
};
struct yf2121 { void *up;
void * v4827;
void * v4829;
void * v4831;
rt_int yu;
};
struct yf2126 { void *up;
void * v4836;
void * v4838;
void * v4840;
rt_int v4842;
rt_int yu;
};
struct yf2131 { void *up;
void * v4849;
void * v4851;
void * v4853;
void * v4855;
void * v4857;
void * v4859;
rt_int v4861;
rt_int v4863;
rt_int yu;
};
struct yf2136 { void *up;
void * v4880;
rt_int yu;
};
struct yf2141 { void *up;
rt_int v4885;
rt_int yu;
};
struct yf2147 { void *up;
rt_int p2146;
void * v4894;
void * v4896;
void * v4898;
rt_int v4900;
rt_int yu;
};
struct yf2152 { void *up;
void * v4908;
void * v4910;
void * v4912;
void * v4914;
void * v4916;
void * v4918;
rt_int v4920;
rt_int v4922;
rt_int yu;
};
struct yf2157 { void *up;
rt_int yu;
};
struct yf2163 { void *up;
rt_int p2162;
rt_int yu;
};
struct yf2169 { void *up;
rt_int p2168;
rt_int yu;
};
struct yf2175 { void *up;
rt_int p2174;
rt_int yu;
};
struct yf2181 { void *up;
rt_int p2180;
rt_int yu;
};
struct yf2187 { void *up;
rt_int p2186;
rt_int yu;
};
struct yf2196 { void *up;
rt_int p2192;
void * p2193;
void * p2194;
rt_int p2195;
void * v4976;
rt_int yu;
};
struct yf2203 { void *up;
rt_int p2201;
rt_int p2202;
rt_int v4982;
rt_int yu;
};
struct yf2208 { void *up;
void * v4986;
rt_int v4988;
rt_int v4990;
rt_int yu;
};
struct yf2213 { void *up;
void * v4994;
void * v4996;
rt_int v4998;
rt_int v5000;
rt_int yu;
};
struct yf2218 { void *up;
void * v5006;
rt_int v5008;
rt_int v5010;
rt_int yu;
};
struct yf2224 { void *up;
rt_int p2223;
rt_int v5016;
rt_int yu;
};
struct yf2229 { void *up;
void * v5021;
rt_int v5023;
rt_int v5025;
rt_int yu;
};
struct yf2234 { void *up;
void * v5029;
rt_int v5031;
rt_int v5033;
rt_int yu;
};
struct yf2239 { void *up;
void * v5054;
void * v5056;
void * v5058;
rt_int v5060;
rt_int yu;
};
struct yf2244 { void *up;
rt_int yu;
};
struct yf2249 { void *up;
void * v5067;
void * v5069;
rt_int yu;
};
struct yf2256 { void *up;
rt_int p2254;
rt_int p2255;
void * v5076;
rt_int yu;
};
struct yf2262 { void *up;
rt_int p2261;
void * v5094;
rt_int yu;
};
struct yf2268 { void *up;
void * p2267;
void * v5101;
rt_int v5103;
rt_int v5106;
rt_int yu;
};
struct yf2273 { void *up;
void * v5118;
void * v5120;
void * v5122;
rt_int v5124;
rt_int yu;
};
struct yf2279 { void *up;
void * p2278;
rt_int yu;
};
struct yf2285 { void *up;
rt_int p2284;
void * v5136;
rt_int yu;
};
struct yf2291 { void *up;
rt_int p2290;
void * v5144;
rt_int yu;
};
struct yf2298 { void *up;
rt_int p2296;
rt_int p2297;
void * v5153;
void * v5155;
rt_int lo5161;
rt_int hi5162;
rt_int c_5164;
rt_int yu;
};
struct yf2305 { void *up;
void * p2303;
void * p2304;
void * v5174;
rt_int yu;
};
struct yf2311 { void *up;
rt_int p2310;
rt_int yu;
};
struct yf2318 { void *up;
void * p2316;
rt_int p2317;
void * v5186;
void * v5188;
rt_int v5190;
rt_int yu;
};
struct yf2325 { void *up;
void * p2323;
rt_int p2324;
void * v5206;
rt_int yu;
};
struct yf2332 { void *up;
void * p2330;
rt_int p2331;
void * v5231;
rt_int yu;
};
struct yf2338 { void *up;
void * p2337;
rt_int yu;
};
struct yf2344 { void *up;
void * p2343;
void * v5246;
rt_int yu;
};
struct yf2351 { void *up;
rt_int p2349;
void * p2350;
void * v5255;
rt_int yu;
};
struct yf2358 { void *up;
void * p2356;
rt_int p2357;
void * v5264;
rt_int v5266;
rt_int yu;
};
struct yf2365 { void *up;
rt_int p2363;
rt_int p2364;
rt_int v5274;
rt_int yu;
};
struct yf2371 { void *up;
rt_int p2370;
rt_int v5289;
rt_int yu;
};
struct yf2378 { void *up;
rt_int p2376;
rt_int p2377;
rt_int v5304;
rt_int yu;
};
struct yf2384 { void *up;
void * p2383;
rt_int v5313;
rt_int yu;
};
struct yf2390 { void *up;
void * p2389;
void * v5321;
rt_int yu;
};
struct yf2397 { void *up;
rt_int p2395;
rt_int p2396;
void * v5328;
rt_int yu;
};
struct yf2403 { void *up;
void * p2402;
void * v5360;
rt_int yu;
};
struct yf2409 { void *up;
void * p2408;
rt_int yu;
};
struct yf2415 { void *up;
void * p2414;
rt_int yu;
};
struct yf2421 { void *up;
void * p2420;
rt_int yu;
};
struct yf2427 { void *up;
void * p2426;
rt_int yu;
};
struct yf2433 { void *up;
void * p2432;
rt_int yu;
};
struct yf2440 { void *up;
void * p2438;
rt_int p2439;
void * v5392;
rt_int yu;
};
struct yf2446 { void *up;
void * p2445;
rt_int yu;
};
struct yf2452 { void *up;
void * p2451;
rt_int v5404;
rt_int yu;
};
struct yf2458 { void *up;
void * p2457;
rt_int v5411;
rt_int yu;
};
struct yf2464 { void *up;
void * p2463;
rt_int v5440;
rt_int yu;
};
struct yf2470 { void *up;
void * p2469;
rt_int yu;
};
struct yf2477 { void *up;
void * p2475;
void * p2476;
rt_int yu;
};
struct yf2485 { void *up;
rt_int p2482;
void * p2483;
void * p2484;
rt_int v5489;
rt_int yu;
};
struct yf2493 { void *up;
rt_int p2490;
void * p2491;
void * p2492;
rt_int yu;
};
struct yf2500 { void *up;
void * p2498;
rt_int p2499;
rt_int yu;
};
struct yf2506 { void *up;
void * p2505;
rt_int v5504;
void * v5506;
void * v5508;
rt_int yu;
};
struct yf2512 { void *up;
void * p2511;
rt_int yu;
};
struct yf2519 { void *up;
void * p2517;
void * p2518;
rt_int yu;
};
struct yf2525 { void *up;
void * p2524;
rt_int yu;
};
struct yf2533 { void *up;
void * p2530;
yarr p2532;
rt_int v5557;
rt_int v5559;
rt_int yu;
};
struct yf2539 { void *up;
void * p2538;
rt_int yu;
};
struct yf2545 { void *up;
void * p2544;
rt_int yu;
};
struct yf2553 { void *up;
void * p2550;
void * p2551;
void * p2552;
void * v5585;
rt_int yu;
};
struct yf2559 { void *up;
void * p2558;
rt_int yu;
};
struct yf2566 { void *up;
rt_int p2564;
rt_int p2565;
rt_int v5597;
rt_int v5599;
rt_int v5601;
rt_int yu;
};
struct yf2574 { void *up;
rt_int p2571;
rt_int p2572;
rt_int p2573;
rt_int v5617;
rt_int v5619;
rt_int yu;
};
struct yf2582 { void *up;
rt_int p2579;
rt_int p2580;
rt_int p2581;
rt_int v5634;
rt_int lo5639;
rt_int hi5640;
rt_int c_5642;
rt_int yu;
};
struct yf2592 { void *up;
void * p2587;
void * p2588;
rt_int p2589;
rt_int * p2589_o;
rt_int p2590;
rt_int * p2590_o;
rt_int p2591;
rt_int * p2591_o;
rt_int v5653;
rt_int v5655;
rt_int v5657;
rt_int v5659;
rt_int v5661;
rt_int v5663;
rt_int yu;
};
struct yf2599 { void *up;
rt_int p2597;
rt_int p2598;
rt_int yu;
};
struct yf2607 { void *up;
void * p2604;
rt_int p2605;
rt_int p2606;
rt_int v5692;
rt_int yu;
};
struct yf2614 { void *up;
void * p2612;
void * p2613;
rt_int v5702;
rt_int v5704;
rt_int v5706;
rt_int v5708;
void * v5710;
void * v5712;
rt_int v5714;
rt_int v5716;
rt_int v5718;
rt_int v5720;
rt_int v5722;
rt_int yu;
};
struct yf2620 { void *up;
void * p2619;
void * v5754;
void * v5756;
rt_int v5758;
rt_int yu;
};
struct yf2628 { void *up;
void * p2625;
rt_int p2626;
rt_int p2627;
rt_int yu;
};
struct yf2634 { void *up;
rt_int p2633;
rt_int v5773;
rt_int yu;
};
struct yf2642 { void *up;
void * p2639;
rt_int p2640;
rt_int p2641;
void * v5783;
void * v5785;
rt_int yu;
};
struct yf2649 { void *up;
void * p2647;
void * p2648;
void * v5793;
void * v5795;
void * v5797;
void * v5799;
void * v5801;
void * v5803;
rt_int yu;
};
struct yf2657 { void *up;
void * p2654;
rt_int p2655;
rt_int p2656;
void * v5832;
void * v5834;
void * v5836;
void * v5838;
void * v5840;
rt_int v5842;
void * v5844;
rt_int v5846;
rt_int v5848;
rt_int yu;
};
struct yf2664 { void *up;
rt_int p2662;
void * p2663;
void * v5895;
void * v5897;
rt_int yu;
};
struct yf2669 { void *up;
void * v5901;
rt_int yu;
};
struct yf2675 { void *up;
void * p2674;
void * v5906;
rt_int v5908;
rt_int v5910;
rt_int yu;
};
struct yf2688 { void *up;
void * p2680;
void * * p2681;
rt_int p2682;
void * p2683;
rt_int p2684;
rt_int p2685;
void * p2686;
rt_int p2687;
void * v5935;
rt_int yu;
};
struct yf2699 { void *up;
void * p2693;
void * * p2694;
void * p2695;
rt_int p2696;
void * p2697;
rt_int p2698;
void * v5948;
void * v5950;
void * v5952;
rt_int yu;
};
struct yf2707 { void *up;
void * p2704;
void * p2705;
rt_int p2706;
void * v5959;
void * v5961;
void * v5963;
void * v5965;
rt_int v5967;
void * v5970;
rt_int v5972;
rt_int v5974;
rt_int yu;
};
struct yf2714 { void *up;
void * p2712;
rt_int p2713;
void * v6024;
rt_int yu;
};
struct yf2720 { void *up;
rt_int p2719;
rt_int v6030;
rt_int v6033;
rt_int yu;
};
struct yf2727 { void *up;
rt_int p2725;
rt_int p2726;
rt_int yu;
};
struct yf2734 { void *up;
void * p2732;
rt_int p2733;
rt_int v6056;
rt_int v6058;
rt_int v6060;
rt_int v6062;
rt_int v6064;
rt_int v6066;
void * v6068;
rt_int yu;
};
struct yf2742 { void *up;
void * p2739;
rt_int p2740;
rt_int p2741;
void * v6118;
rt_int v6120;
rt_int v6123;
rt_int v6126;
rt_int v6129;
rt_int v6132;
rt_int v6135;
ydesc yd_6145;
yarr v6147;
yarr v6149;
ydesc yd_6158;
yarr v6160;
rt_int lo6177;
rt_int hi6178;
rt_int c_6180;
rt_int lo6186;
rt_int hi6187;
rt_int c_6189;
rt_int yu;
};
struct yf2749 { void *up;
void * p2747;
void * p2748;
void * v6204;
rt_int yu;
};
struct yf2756 { void *up;
void * p2754;
void * p2755;
void * v6213;
rt_int v6215;
rt_int v6217;
rt_int v6219;
rt_int yu;
};
struct yf2762 { void *up;
void * p2761;
rt_int v6238;
rt_int v6240;
rt_int yu;
};
struct yf2769 { void *up;
rt_int p2767;
rt_int p2768;
rt_int yu;
};
struct yf2776 { void *up;
rt_int p2774;
void * p2775;
rt_int v6256;
rt_int v6258;
rt_int yu;
};
struct yf2784 { void *up;
void * p2781;
rt_int p2782;
void * p2783;
rt_int v6284;
rt_int yu;
};
struct yf2790 { void *up;
void * p2789;
void * v6306;
rt_int yu;
};
struct yf2797 { void *up;
void * p2795;
rt_int p2796;
void * v6315;
rt_int v6317;
rt_int v6319;
rt_int v6321;
rt_int v6323;
rt_int lo6332;
rt_int hi6333;
rt_int c_6335;
rt_int yu;
};
struct yf2804 { void *up;
void * p2802;
void * p2803;
void * v6374;
void * v6376;
void * v6378;
rt_int v6380;
rt_int v6383;
rt_int yu;
};
struct yf2812 { void *up;
void * p2809;
rt_int p2810;
rt_int p2811;
rt_int v6408;
rt_int v6410;
rt_int yu;
};
struct yf2821 { void *up;
void * p2817;
rt_int p2818;
rt_int p2819;
rt_int * p2819_o;
rt_int p2820;
rt_int v6421;
rt_int v6423;
rt_int v6425;
ydesc yd_6434;
yarr v6436;
unsigned char v6438;
rt_int v6440;
rt_int lo6472;
rt_int hi6473;
rt_int c_6475;
rt_int yu;
};
struct yf2829 { void *up;
void * p2826;
rt_int p2827;
rt_int * p2827_o;
rt_int p2828;
rt_int * p2828_o;
void * v6510;
rt_int v6512;
rt_int v6514;
rt_int v6516;
rt_int v6518;
rt_int v6520;
void * v6522;
rt_int yu;
};
struct yf2837 { void *up;
void * p2834;
rt_int p2835;
rt_int * p2835_o;
rt_int p2836;
rt_int * p2836_o;
void * v6552;
rt_int v6554;
rt_int v6556;
rt_int v6558;
rt_int v6560;
rt_int v6562;
void * v6564;
void * v6566;
rt_int lo6583;
rt_int hi6584;
rt_int c_6586;
rt_int yu;
};
struct yf2844 { void *up;
void * p2842;
void * p2843;
rt_int yu;
};
struct yf2852 { void *up;
rt_int p2849;
void * p2850;
void * p2851;
rt_int v6614;
rt_int v6616;
void * v6618;
void * v6620;
rt_int yu;
};
struct yf2860 { void *up;
rt_int p2857;
void * p2858;
void * p2859;
rt_int v6649;
rt_int v6651;
rt_int v6653;
rt_int v6655;
rt_int v6657;
rt_int v6659;
rt_int yu;
};
struct yf2868 { void *up;
rt_int p2865;
void * p2866;
void * p2867;
rt_int v6706;
rt_int v6708;
rt_int v6710;
rt_int yu;
};
struct yf2879 { void *up;
rt_int * p2873;
void * p2874;
rt_int * p2875;
void * p2876;
void * p2877;
rt_int p2878;
rt_int v6725;
rt_int v6727;
rt_int yu;
};
struct yf2887 { void *up;
void * p2884;
rt_int p2885;
rt_int * p2885_o;
void * p2886;
void * * p2886_o;
rt_int v6734;
rt_int v6736;
rt_int yu;
};
struct yf2896 { void *up;
void * p2892;
rt_int p2893;
rt_int * p2893_o;
rt_int p2894;
rt_int * p2894_o;
rt_int p2895;
rt_int * p2895_o;
rt_int v6750;
rt_int v6752;
rt_int v6754;
rt_int v6756;
rt_int v6758;
rt_int v6760;
rt_int yu;
};
struct yf2902 { void *up;
rt_int p2901;
rt_int yu;
};
struct yf2910 { void *up;
rt_int p2907;
void * p2908;
void * p2909;
rt_int v6781;
rt_int v6783;
rt_int yu;
};
struct yf2920 { void *up;
rt_int p2915;
void * p2916;
rt_int p2917;
void * p2918;
rt_int p2919;
rt_int v6824;
rt_int yu;
};
struct yf2930 { void *up;
rt_int p2925;
void * p2926;
rt_int p2927;
void * p2928;
rt_int p2929;
rt_int yu;
};
struct yf2936 { void *up;
void * p2935;
void * v6846;
void * v6848;
rt_int yu;
};
struct yf2942 { void *up;
void * p2941;
void * v6867;
void * v6869;
rt_int yu;
};
struct yf2950 { void *up;
void * p2947;
rt_int p2948;
rt_int * p2948_o;
void * p2949;
void * * p2949_o;
rt_int yu;
};
struct yf2956 { void *up;
rt_int p2955;
rt_int yu;
};
struct yf2963 { void *up;
void * p2961;
rt_int p2962;
void * v6887;
rt_int yu;
};
struct yf2969 { void *up;
void * p2968;
void * v6892;
rt_int yu;
};
struct yf2978 { void *up;
void * p2974;
void * p2975;
rt_int p2976;
rt_int * p2976_o;
void * p2977;
void * * p2977_o;
rt_int v6901;
void * v6903;
rt_int v6905;
rt_int v6907;
void * v6909;
void * v6911;
void * v6913;
rt_int v6915;
rt_int v6917;
rt_int yu;
};
struct yf2986 { void *up;
void * p2983;
void * p2984;
rt_int p2985;
void * v6960;
rt_int v6962;
rt_int v6964;
rt_int yu;
};
struct yf2995 { void *up;
void * p2991;
void * p2992;
rt_int p2993;
rt_int * p2993_o;
void * p2994;
void * * p2994_o;
void * v6976;
rt_int yu;
};
struct yf3001 { void *up;
void * p3000;
void * v6983;
rt_int yu;
};
struct yf3009 { void *up;
void * p3006;
rt_int p3007;
rt_int * p3007_o;
void * p3008;
void * * p3008_o;
rt_int v6996;
rt_int v6998;
rt_int v7000;
void * v7002;
void * v7004;
void * v7006;
void * v7008;
rt_int v7010;
rt_int v7012;
rt_int yu;
};
struct yf3019 { void *up;
void * p3014;
rt_int p3015;
void * p3016;
rt_int p3017;
rt_int * p3017_o;
void * p3018;
void * * p3018_o;
rt_int yu;
};
struct yf3025 { void *up;
void * p3024;
void * v7055;
rt_int yu;
};
struct yf3034 { void *up;
yarr p3031;
rt_int p3032;
rt_int p3033;
rt_int yu;
};
struct yf3043 { void *up;
rt_int p3039;
yarr p3041;
rt_int p3042;
rt_int yu;
};
struct yf3052 { void *up;
rt_int p3048;
void * p3049;
rt_int p3050;
void * p3051;
rt_int v7083;
rt_int v7085;
void * v7087;
rt_int yu;
};
struct yf3058 { void *up;
void * p3057;
rt_int yu;
};
struct yf3065 { void *up;
rt_int p3063;
void * p3064;
rt_int yu;
};
struct yf3074 { void *up;
void * p3070;
void * p3071;
rt_int p3072;
rt_int * p3072_o;
void * p3073;
void * * p3073_o;
rt_int v7125;
rt_int v7127;
rt_int v7129;
rt_int v7131;
void * v7133;
void * v7135;
void * v7137;
rt_int v7139;
rt_int yu;
};
struct yf3081 { void *up;
void * p3079;
void * p3080;
rt_int yu;
};
struct yf3089 { void *up;
void * p3086;
rt_int p3087;
rt_int p3088;
void * v7202;
void * v7204;
rt_int v7206;
rt_int v7208;
rt_int yu;
};
struct yf3095 { void *up;
void * p3094;
void * v7220;
rt_int yu;
};
struct yf3104 { void *up;
void * p3100;
void * p3101;
rt_int p3102;
rt_int * p3102_o;
rt_int p3103;
rt_int * p3103_o;
void * v7232;
void * v7234;
void * v7236;
rt_int yu;
};
struct yf3112 { void *up;
void * p3109;
void * p3110;
rt_int p3111;
void * v7251;
rt_int yu;
};
struct yf3119 { void *up;
void * p3117;
void * p3118;
rt_int yu;
};
struct yf3128 { void *up;
void * p3124;
rt_int p3125;
rt_int p3126;
rt_int p3127;
void * v7268;
rt_int v7270;
rt_int v7274;
rt_int v7277;
rt_int v7280;
rt_int v7283;
rt_int v7286;
rt_int v7289;
rt_int yu;
};
struct yf3134 { void *up;
rt_int p3133;
rt_int yu;
};
struct yf3145 { void *up;
void * p3139;
rt_int p3140;
void * p3141;
void * p3142;
rt_int p3143;
rt_int * p3143_o;
void * p3144;
void * * p3144_o;
void * v7349;
void * v7351;
rt_int v7353;
rt_int v7355;
rt_int yu;
};
struct yf3152 { void *up;
void * p3150;
rt_int p3151;
void * v7369;
void * v7371;
rt_int yu;
};
struct yf3163 { void *up;
void * p3157;
void * p3158;
rt_int p3159;
rt_int p3160;
rt_int p3161;
rt_int * p3161_o;
void * p3162;
void * * p3162_o;
rt_int v7382;
rt_int v7384;
rt_int v7386;
rt_int yu;
};
struct yf3169 { void *up;
rt_int p3168;
rt_int yu;
};
struct yf3179 { void *up;
rt_int p3174;
void * p3175;
rt_int p3176;
void * p3177;
rt_int p3178;
void * v7416;
void * v7418;
void * v7420;
void * v7422;
rt_int v7424;
rt_int yu;
};
struct yf3189 { void *up;
rt_int p3184;
void * p3185;
rt_int p3186;
void * p3187;
rt_int p3188;
rt_int v7466;
rt_int yu;
};
struct yf3199 { void *up;
void * p3194;
void * p3195;
rt_int p3196;
rt_int p3197;
rt_int * p3197_o;
void * p3198;
void * * p3198_o;
void * v7475;
void * v7477;
rt_int v7479;
rt_int v7481;
rt_int yu;
};
struct yf3208 { void *up;
void * p3204;
void * p3205;
rt_int p3206;
rt_int * p3206_o;
void * p3207;
void * * p3207_o;
void * v7494;
void * v7496;
rt_int v7498;
rt_int v7500;
rt_int v7502;
void * v7504;
rt_int v7506;
rt_int v7508;
rt_int v7510;
rt_int v7512;
rt_int v7514;
rt_int v7517;
void * v7519;
rt_int v7521;
rt_int yu;
};
struct yf3216 { void *up;
void * p3213;
rt_int p3214;
rt_int p3215;
void * v7583;
void * v7585;
rt_int v7587;
rt_int v7589;
rt_int yu;
};
struct yf3224 { void *up;
yarr p3222;
rt_int p3223;
rt_int v7598;
rt_int yu;
};
struct yf3234 { void *up;
yarr p3230;
rt_int p3231;
yarr p3233;
rt_int v7604;
rt_int yu;
};
struct yf3240 { void *up;
rt_int p3239;
rt_int yu;
};
struct yf3245 { void *up;
rt_int yu;
};
struct yf3251 { void *up;
rt_int p3250;
rt_int yu;
};
struct yf3257 { void *up;
void * p3256;
rt_int v7626;
rt_int yu;
};
struct yf3263 { void *up;
void * p3262;
rt_int v7630;
rt_int v7632;
rt_int v7634;
void * v7636;
void * v7638;
rt_int v7640;
void * v7642;
rt_int v7644;
rt_int yu;
};
struct yf3270 { void *up;
void * p3268;
void * p3269;
void * v7710;
void * v7712;
rt_int v7714;
rt_int v7716;
rt_int v7718;
rt_int v7720;
rt_int yu;
};
struct yf3278 { void *up;
void * p3275;
void * p3276;
void * p3277;
rt_int v7742;
void * v7744;
void * v7746;
void * v7748;
rt_int v7750;
rt_int v7752;
rt_int v7754;
rt_int v7756;
rt_int yu;
};
struct yf3285 { void *up;
void * p3283;
void * p3284;
void * v7769;
void * v7771;
rt_int v7773;
rt_int v7776;
rt_int lo7781;
rt_int hi7782;
rt_int c_7784;
rt_int yu;
};
struct yf3291 { void *up;
void * p3290;
void * v7794;
rt_int v7796;
rt_int yu;
};
struct yf3297 { void *up;
void * p3296;
void * v7804;
rt_int yu;
};
struct yf3303 { void *up;
void * p3302;
rt_int v7818;
void * v7820;
rt_int v7822;
rt_int v7824;
rt_int yu;
};
struct yf3310 { void *up;
void * p3308;
rt_int p3309;
void * v7849;
void * v7851;
rt_int yu;
};
struct yf3316 { void *up;
void * p3315;
void * v7875;
rt_int yu;
};
struct yf3322 { void *up;
void * p3321;
rt_int v7879;
void * v7881;
rt_int yu;
};
struct yf3329 { void *up;
void * p3327;
void * p3328;
rt_int v7887;
rt_int v7889;
void * v7891;
void * v7893;
rt_int v7895;
rt_int yu;
};
struct yf3334 { void *up;
void * v7901;
rt_int v7903;
rt_int yu;
};
struct yf3340 { void *up;
void * p3339;
rt_int v7912;
rt_int v7914;
rt_int v7916;
rt_int v7918;
rt_int v7920;
rt_int v7922;
rt_int v7924;
void * v7926;
void * v7928;
void * v7930;
void * v7932;
rt_int v7934;
rt_int v7936;
rt_int v7938;
rt_int v7940;
void * v7942;
rt_int yu;
};
struct yf3346 { void *up;
void * p3345;
void * v8017;
rt_int v8019;
rt_int v8021;
rt_int v8023;
void * v8025;
rt_int yu;
};
struct yf3354 { void *up;
rt_int p3351;
rt_int p3352;
rt_int p3353;
rt_int yu;
};
struct yf3360 { void *up;
void * p3359;
rt_int v8057;
rt_int v8059;
rt_int v8061;
void * v8063;
void * v8065;
rt_int yu;
};
struct yf3366 { void *up;
void * p3365;
rt_int v8081;
rt_int v8083;
rt_int yu;
};
struct yf3372 { void *up;
void * p3371;
void * v8110;
rt_int yu;
};
struct yf3378 { void *up;
void * p3377;
void * v8125;
rt_int yu;
};
struct yf3384 { void *up;
void * p3383;
void * v8135;
void * v8137;
void * v8139;
rt_int yu;
};
struct yf3393 { void *up;
void * p3389;
void * p3390;
void * * p3390_o;
rt_int p3391;
rt_int * p3391_o;
rt_int p3392;
rt_int * p3392_o;
void * v8147;
void * v8149;
rt_int yu;
};
struct yf3401 { void *up;
void * p3398;
rt_int p3399;
rt_int p3400;
void * v8159;
rt_int yu;
};
struct yf3407 { void *up;
void * p3406;
void * v8164;
rt_int v8166;
rt_int v8168;
void * v8170;
void * v8172;
rt_int yu;
};
struct yf3413 { void *up;
void * p3412;
void * v8177;
rt_int yu;
};
struct yf3420 { void *up;
void * p3418;
rt_int p3419;
void * v8183;
rt_int v8185;
rt_int v8187;
void * v8189;
rt_int yu;
};
struct yf3427 { void *up;
void * p3425;
yarr * p3426;
void * v8194;
rt_int v8196;
void * v8199;
rt_int lo8208;
rt_int hi8209;
rt_int c_8211;
rt_int yu;
};
struct yf3434 { void *up;
void * p3432;
void * p3433;
void * v8225;
void * v8227;
rt_int v8229;
rt_int v8231;
rt_int v8233;
rt_int v8235;
rt_int v8237;
rt_int v8239;
rt_int v8241;
rt_int v8243;
yarr v8245;
yarr v8247;
rt_int v8249;
rt_int v8251;
rt_int v8253;
rt_int v8255;
void * v8257;
void * v8259;
void * v8261;
void * v8263;
rt_int lo8277;
rt_int hi8278;
rt_int c_8280;
rt_int yu;
};
struct yf3442 { void *up;
void * p3439;
rt_int p3440;
rt_int p3441;
void * v8302;
void * v8304;
rt_int v8306;
rt_int v8308;
void * v8310;
void * v8312;
void * v8314;
rt_int v8316;
rt_int v8318;
rt_int yu;
};
struct yf8454 { struct yf3447 *up;
rt_int p8452;
rt_int p8453;
rt_int yu;
};
struct yf8461 { struct yf3447 *up;
rt_int p8459;
rt_int p8460;
void * v8481;
rt_int yu;
};
struct yf8467 { struct yf3447 *up;
rt_int p8466;
rt_int yu;
};
struct yf3447 { void *up;
void * v8334;
void * v8336;
void * v8338;
rt_int v8340;
rt_int v8343;
rt_int v8346;
void * v8349;
rt_int lo8376;
rt_int hi8377;
ydesc yd_8379;
yarr v8381;
yarr v8383;
rt_int lo8389;
rt_int hi8390;
ydesc yd_8392;
yarr v8394;
rt_int lo8400;
rt_int hi8401;
ydesc yd_8403;
yarr v8405;
rt_int lo8411;
rt_int hi8412;
ydesc yd_8414;
yarr v8416;
rt_int lo8422;
rt_int hi8423;
ydesc yd_8425;
yarr v8427;
rt_int lo8433;
rt_int hi8434;
ydesc yd_8436;
yarr v8438;
rt_int v8440;
rt_int v8443;
rt_int v8445;
rt_int v8447;
void * v8449;
rt_int lo8506;
rt_int hi8507;
rt_int c_8509;
rt_int lo8517;
rt_int hi8518;
rt_int c_8520;
rt_int lo8528;
rt_int hi8529;
rt_int c_8531;
rt_int lo8544;
rt_int hi8545;
rt_int c_8547;
rt_int lo8554;
rt_int hi8555;
rt_int c_8557;
rt_int lo8567;
rt_int hi8568;
rt_int c_8570;
rt_int lo8577;
rt_int hi8578;
rt_int c_8580;
rt_int lo8590;
rt_int hi8591;
rt_int c_8593;
rt_int lo8615;
rt_int hi8616;
rt_int c_8618;
rt_int yu;
};
struct yf3455 { void *up;
rt_int p3452;
rt_int p3453;
rt_int p3454;
rt_int lo8631;
rt_int hi8632;
rt_int c_8634;
rt_int yu;
};
struct yf3461 { void *up;
rt_int p3460;
rt_int v8648;
rt_int v8650;
rt_int lo8655;
rt_int hi8656;
rt_int c_8658;
rt_int yu;
};
struct yf3467 { void *up;
void * p3466;
void * v8668;
rt_int v8670;
rt_int v8672;
rt_int yu;
};
struct yf3473 { void *up;
void * p3472;
rt_int v8689;
rt_int yu;
};
struct yf3480 { void *up;
void * p3478;
void * p3479;
rt_int v8697;
rt_int v8699;
rt_int v8702;
rt_int v8704;
rt_int lo8714;
rt_int hi8715;
rt_int c_8717;
rt_int yu;
};
struct yf3486 { void *up;
void * p3485;
rt_int yu;
};
struct yf3493 { void *up;
void * p3491;
rt_int p3492;
void * v8747;
void * v8749;
void * v8751;
void * v8753;
void * v8755;
void * v8757;
void * v8759;
rt_int v8761;
rt_int v8763;
rt_int yu;
};
struct yf3500 { void *up;
void * p3498;
void * p3499;
void * v8818;
void * v8820;
void * v8822;
rt_int v8824;
rt_int yu;
};
struct yf3506 { void *up;
void * p3505;
void * v8832;
yR140 v8834;
yR140 v8836;
rt_int v8838;
rt_int v8840;
rt_int v8842;
rt_int v8844;
rt_int v8846;
rt_int v8848;
rt_int v8850;
void * v8852;
rt_int v8854;
void * v8856;
void * v8858;
rt_int v8860;
rt_int v8862;
yR140 v8864;
rt_int yu;
};
struct yf3514 { void *up;
void * p3511;
void * p3512;
rt_int p3513;
rt_int yu;
};
struct yf3523 { void *up;
void * p3519;
void * p3520;
rt_int p3521;
rt_int p3522;
rt_int yu;
};
struct yf3531 { void *up;
void * p3528;
void * p3529;
rt_int p3530;
rt_int yu;
};
struct yf3537 { void *up;
void * p3536;
rt_int v8953;
void * v8955;
void * v8957;
void * v8959;
void * v8961;
rt_int v8963;
rt_int v8965;
rt_int v8967;
rt_int v8969;
rt_int yu;
};
struct yf3544 { void *up;
void * p3542;
void * p3543;
void * v8988;
rt_int yu;
};
struct yf3551 { void *up;
void * p3549;
void * p3550;
rt_int yu;
};
struct yf3560 { void *up;
void * p3556;
rt_int p3557;
void * p3558;
rt_int p3559;
rt_int v8998;
rt_int lo9011;
rt_int hi9012;
rt_int c_9014;
rt_int yu;
};
struct yf3567 { void *up;
rt_int p3565;
rt_int p3566;
rt_int v9023;
rt_int v9027;
rt_int v9029;
void * v9031;
rt_int lo9036;
rt_int hi9037;
rt_int c_9039;
rt_int lo9046;
rt_int hi9047;
rt_int c_9049;
rt_int yu;
};
struct yf3573 { void *up;
rt_int p3572;
void * v9057;
yR140 v9059;
void * v9061;
rt_int yu;
};
struct yf3579 { void *up;
void * p3578;
void * v9075;
void * v9077;
rt_int v9079;
rt_int v9081;
rt_int yu;
};
struct yf3585 { void *up;
void * p3584;
rt_int yu;
};
struct yf3592 { void *up;
rt_int p3590;
void * p3591;
void * v9091;
rt_int yu;
};
struct yf3600 { void *up;
void * * p3597;
void * p3598;
rt_int p3599;
void * v9098;
void * v9100;
void * v9102;
rt_int yu;
};
struct yf3607 { void *up;
void * p3605;
rt_int p3606;
void * v9112;
rt_int yu;
};
struct yf3615 { void *up;
rt_int p3612;
rt_int p3613;
void * p3614;
void * * p3614_o;
void * v9128;
rt_int yu;
};
struct yf3621 { void *up;
void * p3620;
void * v9146;
rt_int yu;
};
struct yf3630 { void *up;
rt_int p3626;
rt_int p3627;
void * p3628;
rt_int p3629;
void * v9154;
rt_int yu;
};
struct yf3637 { void *up;
rt_int p3635;
void * p3636;
rt_int yu;
};
struct yf3644 { void *up;
void * p3642;
void * p3643;
void * v9167;
rt_int lo9171;
rt_int hi9172;
rt_int c_9174;
rt_int yu;
};
struct yf3650 { void *up;
rt_int p3649;
void * v9181;
rt_int lo9185;
rt_int hi9186;
rt_int c_9188;
rt_int yu;
};
struct yf3658 { void *up;
void * p3655;
void * * p3656;
rt_int p3657;
void * v9197;
void * v9199;
rt_int v9201;
rt_int yu;
};
struct yf3666 { void *up;
void * p3663;
void * * p3664;
rt_int p3665;
void * v9208;
void * v9210;
void * v9212;
rt_int v9214;
void * v9216;
rt_int v9218;
rt_int v9220;
void * v9222;
rt_int yu;
};
struct yf3673 { void *up;
void * p3671;
rt_int p3672;
void * v9257;
void * v9259;
void * v9261;
rt_int yu;
};
struct yf3681 { void *up;
void * p3678;
void * p3679;
rt_int p3680;
void * v9269;
void * v9271;
void * v9273;
void * v9275;
rt_int yu;
};
struct yf3687 { void *up;
void * p3686;
void * v9282;
void * v9284;
void * v9286;
void * v9288;
void * v9290;
void * v9292;
void * v9294;
void * v9296;
void * v9298;
rt_int v9300;
void * v9302;
void * v9304;
rt_int v9306;
rt_int v9308;
rt_int v9310;
rt_int yu;
};
struct yf3693 { void *up;
void * p3692;
void * v9340;
rt_int yu;
};
struct yf3699 { void *up;
void * p3698;
void * v9344;
void * v9346;
void * v9348;
void * v9350;
rt_int v9352;
rt_int v9354;
rt_int v9356;
rt_int v9358;
void * v9360;
rt_int lo9368;
rt_int hi9369;
rt_int c_9371;
rt_int yu;
};
struct yf3705 { void *up;
void * p3704;
void * v9383;
void * v9385;
rt_int yu;
};
struct yf3710 { void *up;
void * v9391;
rt_int yu;
};
struct yf3717 { void *up;
void * p3715;
void * p3716;
rt_int v9402;
rt_int v9404;
rt_int v9406;
rt_int v9408;
rt_int v9410;
void * v9412;
rt_int v9414;
rt_int v9416;
void * v9418;
rt_int v9420;
rt_int v9422;
rt_int v9424;
rt_int v9426;
rt_int v9428;
rt_int v9430;
void * v9432;
void * v9434;
rt_int yu;
};
struct yf3723 { void *up;
rt_int p3722;
rt_int v9498;
rt_int yu;
};
struct yf3729 { void *up;
void * p3728;
rt_int yu;
};
struct yf3735 { void *up;
void * p3734;
rt_int v9511;
rt_int yu;
};
struct yf3740 { void *up;
rt_int yu;
};
struct yf3746 { void *up;
void * p3745;
rt_int yu;
};
struct yf3753 { void *up;
void * p3751;
rt_int p3752;
rt_int yu;
};
struct yf3760 { void *up;
void * p3758;
rt_int p3759;
rt_int yu;
};
struct yf3767 { void *up;
void * p3765;
void * p3766;
rt_int v9554;
rt_int v9556;
rt_int v9558;
rt_int yu;
};
struct yf3774 { void *up;
void * p3772;
rt_int p3773;
void * v9567;
rt_int v9569;
rt_int yu;
};
struct yf3781 { void *up;
void * p3779;
rt_int p3780;
rt_int yu;
};
struct yf3789 { void *up;
yarr p3787;
rt_int p3788;
rt_int yu;
};
struct yf3795 { void *up;
rt_int p3794;
rt_int yu;
};
struct yf3804 { void *up;
void * p3800;
rt_int p3801;
rt_int p3802;
rt_int * p3802_o;
void * p3803;
void * * p3803_o;
rt_int v9596;
rt_int yu;
};
struct yf3812 { void *up;
void * p3809;
rt_int p3810;
rt_int * p3810_o;
void * p3811;
void * * p3811_o;
rt_int yu;
};
struct yf3818 { void *up;
void * p3817;
rt_int v9612;
void * v9614;
rt_int yu;
};
struct yf3824 { void *up;
void * p3823;
void * v9620;
rt_int v9623;
rt_int v9625;
rt_int v9627;
rt_int v9629;
rt_int v9631;
rt_int v9633;
unsigned char v9635;
void * v9637;
ydesc yd_9646;
yarr v9648;
rt_int yu;
};
struct yf3831 { void *up;
void * p3829;
void * p3830;
rt_int v9687;
rt_int v9689;
rt_int v9691;
void * v9693;
rt_int yu;
};
struct yf3841 { void *up;
rt_int p3836;
void * p3837;
rt_int p3838;
rt_int p3839;
rt_int * p3839_o;
void * p3840;
void * * p3840_o;
void * v9705;
rt_int v9707;
rt_int v9709;
rt_int v9711;
rt_int v9713;
rt_int v9715;
void * v9717;
void * v9719;
void * v9721;
void * v9723;
rt_int v9725;
rt_int v9727;
rt_int v9729;
rt_int v9731;
void * v9733;
rt_int v9735;
rt_int lo9749;
rt_int hi9750;
rt_int c_9752;
rt_int yu;
};
struct yf3849 { void *up;
yarr p3847;
void * p3848;
void * v9958;
rt_int yu;
};
struct yf3857 { void *up;
yarr p3855;
rt_int p3856;
void * v9964;
rt_int yu;
};
struct yf3867 { void *up;
yarr p3863;
yarr p3864;
yarr p3865;
rt_int p3866;
void * v9972;
void * v9974;
void * v9976;
rt_int yu;
};
struct yf3875 { void *up;
rt_int p3872;
yarr p3874;
void * v9985;
rt_int yu;
};
struct yf3880 { void *up;
rt_int yu;
};
struct yf3885 { void *up;
void * v10075;
rt_int yu;
};
struct yf3890 { void *up;
rt_int yu;
};
static ydesc yd_106;
static ydesc yd_111;
static ydesc yd_116;
static ydesc yd_121;
static ydesc yd_126;
static ydesc yd_131;
static ydesc yd_136;
static ydesc yd_141;
static ydesc yd_151;
static ydesc yd_161;
static ydesc yd_171;
static ydesc yd_181;
static ydesc yd_191;
static ydesc yd_201;
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
static rt_int v903;
static rt_int v906;
static yfile * v909;
static yfile * v911;
static yarr v913;
static rt_int v915;
static yarr v918;
static yarr v920;
static rt_int v922;
static yarr v925;
static rt_int v927;
static ydesc yd_937;
static yarr v939;
static rt_int v941;
static ydesc yd_951;
static yarr v953;
static rt_int v955;
static rt_int v958;
static ydesc yd_963;
static yarr v965;
static ydesc yd_974;
static yarr v976;
static yR140 v978;
static yR140 v980;
static yR140 v982;
static yR140 v984;
static yR140 v986;
static yR140 v988;
static yR140 v990;
static yR140 v992;
static yfile * v994;
static yR140 v996;
static yR140 v998;
static rt_int v1000;
static yarr v1207;
static yarr v1209;
static yarr v1211;
static rt_int v1213;
static rt_int v1216;
static rt_int v1219;
static rt_int v1222;
static rt_int v1225;
static rt_int v1228;
static ydesc yd_1238;
static yarr v1240;
static yarr v1242;
static yarr v1244;
static rt_int v1246;
static rt_int v1249;
static void * v1252;
static rt_int v1254;
static rt_int v1257;
static yarr v1260;
static ydesc yd_1269;
static yarr v1271;
static rt_int v1273;
static rt_int v1276;
static rt_int v1279;
static ydesc yd_1289;
static yarr v1291;
static ydesc yd_1300;
static yarr v1302;
static ydesc yd_1311;
static yarr v1313;
static ydesc yd_1322;
static yarr v1324;
static yarr v1326;
static rt_int v1328;
static ydesc yd_1338;
static yarr v1340;
static void * v1342;
static void * v1344;
static void * v1346;
static void * v1348;
static void * v1350;
static void * v1352;
static void * v1354;
static void * v1356;
static void * v1358;
static void * v1360;
static void * v1362;
static void * v1364;
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
static rt_int v1471;
static rt_int v1474;
static rt_int v1477;
static rt_int v1480;
static rt_int v1483;
static rt_int v1486;
static rt_int v1489;
static rt_int v1492;
static rt_int v1495;
static rt_int v1498;
static void * v1501;
static ydesc yd_1510;
static yarr v1512;
static ydesc yd_1521;
static yarr v1523;
static ydesc yd_1532;
static yarr v1534;
static rt_int v1536;
static ydesc yd_1546;
static yarr v1548;
static rt_int v1550;
static rt_int v1553;
static ydesc yd_1563;
static yarr v1565;
static ydesc yd_1574;
static yarr v1576;
static rt_int v1578;
static ydesc yd_1588;
static yarr v1590;
static rt_int v1592;
static ydesc yd_1602;
static yarr v1604;
static yarr v1606;
static ydesc yd_1615;
static yarr v1617;
static rt_int v1619;
static rt_int v1622;
static void * v1625;
static ydesc yd_1634;
static yarr v1636;
static yarr v1638;
static rt_int v1640;
static ydesc yd_1650;
static yarr v1652;
static rt_int v1654;
static rt_int v1657;
static rt_int v1660;
static rt_int v1663;
static void * v1666;
static void * v1668;
static ydesc yd_1677;
static yarr v1679;
static ydesc yd_1688;
static yarr v1690;
static rt_int v1692;
static ydesc yd_1702;
static yarr v1704;
static ydesc yd_1713;
static yarr v1715;
static ydesc yd_1724;
static yarr v1726;
static ydesc yd_1735;
static yarr v1737;
static ydesc yd_1746;
static yarr v1748;
static ydesc yd_1757;
static yarr v1759;
static ydesc yd_1768;
static yarr v1770;
static ydesc yd_1779;
static yarr v1781;
static yarr v1783;
static ydesc yd_1792;
static yarr v1794;
static rt_int v1796;
static rt_int v1799;
static void * v1802;
static ydesc yd_1811;
static yarr v1813;
static rt_int v1815;
static ydesc yd_1825;
static yarr v1827;
static ydesc yd_1836;
static yarr v1838;
static ydesc yd_1847;
static yarr v1849;
static ydesc yd_1858;
static yarr v1860;
static yarr v1862;
static rt_int v1864;
static void * v1867;
static void * v1869;
static void * v1871;
static void * v1873;
static void yr1003_InitChars(void);
static rt_int yr1008_IsLetter(unsigned char a_p1009);
static rt_int yr1014_IsDigit(unsigned char a_p1015);
static void yr1020_PoolAdd(unsigned char a_p1021);
static void yr1026_SB(void);
static void yr1031_SC(unsigned char a_p1032);
static void yr1037_SA(yarr a_p1039);
static void yr1044_ST(rt_int a_p1045);
static void yr1050_SI(rt_int a_p1051);
static rt_int yr1056_SE(void);
static rt_int yr1061_T(yarr a_p1063);
static rt_int yr1068_Intern(rt_int a_p1069, rt_int a_p1070);
static rt_int yr1075_Name(rt_int a_p1076);
static rt_int yr1081_N(yarr a_p1083);
static rt_int yr1088_TEq(rt_int a_p1089, rt_int a_p1090);
static rt_int yr1095_TStarts(rt_int a_p1096, yarr a_p1098);
static unsigned char yr1103_TChar(rt_int a_p1104, rt_int a_p1105);
static void yr1110_Put(yR140 * a_p1111, rt_int a_p1112);
static void yr1117_PutS(yR140 * a_p1118, yarr a_p1120);
static void yr1125_Append(yR140 * a_p1126, yR140 * a_p1127);
static void yr1132_Emit(rt_int a_p1133);
static void yr1138_EmitS(yarr a_p1140);
static void yr1145_WriteTxt(rt_int a_p1146);
static void yr1151_WriteBuf(yR140 a_p1152);
static void yr1157_Fail(rt_int a_p1158, rt_int a_p1159);
static void yr1164_Warn(rt_int a_p1165, rt_int a_p1166);
static void yr1171_WriteTo(yfile * * a_p1172, rt_int a_p1173);
static void yr1178_FailS(rt_int a_p1179, yarr a_p1181);
static void yr1186_FailN(rt_int a_p1187, rt_int a_p1188, yarr a_p1190);
static rt_int yr1195_NewSerial(void);
static rt_int yr1200_Fresh(yarr a_p1202);
static void yr1875_InitWords(void);
static void yr1880_ReadSource(void);
static void yr1885_AddTok(rt_int a_p1886, rt_int a_p1887);
static unsigned char yr1892_At(rt_int a_p1893);
static rt_int yr1898_EndsOperand(void);
static rt_int yr1903_DigitVal(unsigned char a_p1904);
static void yr1909_LexError(yarr a_p1911);
static void yr1916_LexDigits(rt_int a_p1917, rt_int a_p1918);
static void yr1923_LexNumber(rt_int a_p1924);
static void yr1929_LexString(void);
static void yr1934_Lex(void);
static void * yr1939_NewNode(rt_int a_p1940, rt_int a_p1941);
static void yr1946_Link(void * * a_p1947, void * * a_p1948, void * a_p1949);
static rt_int yr1954_Count(void * a_p1955);
static rt_int yr1960_TK(void);
static rt_int yr1965_TV(void);
static rt_int yr1970_TLn(void);
static rt_int yr1975_IsAt(rt_int a_p1976, rt_int a_p1977);
static rt_int yr1982_Is(rt_int a_p1983);
static rt_int yr1988_IsIdAt(rt_int a_p1989);
static void yr1994_Skip(void);
static rt_int yr1999_Accept(rt_int a_p2000);
static rt_int yr2005_TokText(void);
static void yr2010_Expect(rt_int a_p2011);
static rt_int yr2016_Ident(void);
static void yr2021_CloseName(rt_int a_p2022, rt_int a_p2023);
static rt_int yr2028_ExtendedId(void);
static rt_int yr2033_IsLabel(rt_int a_p2034);
static void * yr2039_ImportItem(void);
static void * yr2044_ParseModule(void);
static rt_int yr2049_IsDeclWord(void);
static void * yr2054_ParseBlock(void);
static void * yr2059_ParseHandler(void);
static void * yr2064_ParseNames(void);
static void * yr2069_SimpleEntry(rt_int a_p2070);
static rt_int yr2075_Continues(rt_int a_p2076);
static void yr2081_ParseDeclGroup(void * * a_p2082, void * * a_p2083);
static void * yr2088_ParseDecl(void);
static void yr2093_ParseFormals(void * a_p2094);
static void * yr2099_ParseFormalRep(void);
static rt_int yr2104_IsStructWord(rt_int a_p2105);
static void * yr2110_ParseRep(void);
static void * yr2115_ParseConcrete(void);
static void * yr2120_ParseIds(void);
static void * yr2125_ParseFieldGroups(void);
static void * yr2130_ParseConcrete1(void);
static void * yr2135_ParseQualifier(void);
static rt_int yr2140_IsStop(void);
static void * yr2145_ParseStatements(rt_int a_p2146);
static void * yr2151_ParseStatement(void);
static rt_int yr2156_OpAt(void);
static rt_int yr2161_IsRel(rt_int a_p2162);
static rt_int yr2167_IsAssocMul(rt_int a_p2168);
static rt_int yr2173_IsNonAssocMul(rt_int a_p2174);
static rt_int yr2179_IsAssocAdd(rt_int a_p2180);
static rt_int yr2185_IsNonAssocAdd(rt_int a_p2186);
static void * yr2191_Bin(rt_int a_p2192, void * a_p2193, void * a_p2194, rt_int a_p2195);
static void yr2200_NeedParens(rt_int a_p2201, rt_int a_p2202);
static void * yr2207_ParseExpr(void);
static void * yr2212_ParseSimple(void);
static void * yr2217_ParseTerm(void);
static rt_int yr2222_IsLiteralAt(rt_int a_p2223);
static void * yr2228_ParseLiteral(void);
static void * yr2233_ParseFactor(void);
static void * yr2238_ParseDesignator(void);
static void yr2243_EXIT_ARGS(void);
static void * yr2248_ParseProgram(void);
static void * yr2253_NewSym(rt_int a_p2254, rt_int a_p2255);
static void yr2260_OpenScope(rt_int a_p2261);
static void yr2266_ReopenScope(void * a_p2267);
static void yr2272_CloseScope(void);
static rt_int yr2277_Visible(void * a_p2278);
static void * yr2283_Find(rt_int a_p2284);
static void * yr2289_FindHere(rt_int a_p2290);
static void * yr2295_Lookup(rt_int a_p2296, rt_int a_p2297);
static rt_int yr2302_AltOf(void * a_p2303, void * a_p2304);
static rt_int yr2309_IsSimple(rt_int a_p2310);
static rt_int yr2315_DeclaredFrom(void * a_p2316, rt_int a_p2317);
static rt_int yr2322_LiteralIn(void * a_p2323, rt_int a_p2324);
static rt_int yr2329_LiteralInGroups(void * a_p2330, rt_int a_p2331);
static rt_int yr2336_Resolved(void * a_p2337);
static rt_int yr2342_Ambiguous(void * a_p2343);
static void * yr2348_FindLit(rt_int a_p2349, void * a_p2350);
static void yr2355_Define(void * a_p2356, rt_int a_p2357);
static rt_int yr2362_Path(rt_int a_p2363, rt_int a_p2364);
static rt_int yr2369_FramePtr(rt_int a_p2370);
static void yr2375_DeclStorage(rt_int a_p2376, rt_int a_p2377);
static rt_int yr2382_SymPath(void * a_p2383);
static void * yr2388_Real(void * a_p2389);
static void * yr2394_NewRep(rt_int a_p2395, rt_int a_p2396);
static void * yr2401_CopyRep(void * a_p2402);
static rt_int yr2407_IsDiscrete(void * a_p2408);
static rt_int yr2413_IsNumeric(void * a_p2414);
static rt_int yr2419_IsArrayLike(void * a_p2420);
static rt_int yr2425_IsString(void * a_p2426);
static rt_int yr2431_Deep(void * a_p2432);
static rt_int yr2437_Holds(void * a_p2438, rt_int a_p2439);
static rt_int yr2444_HoldsSignal(void * a_p2445);
static rt_int yr2450_NonAssignable(void * a_p2451);
static rt_int yr2456_CType(void * a_p2457);
static rt_int yr2462_DescOf(void * a_p2463);
static void yr2468_NewDesc(void * a_p2469);
static rt_int yr2474_SameType(void * a_p2475, void * a_p2476);
static void yr2481_TypeClash(rt_int a_p2482, void * a_p2483, void * a_p2484);
static void yr2489_CheckType(rt_int a_p2490, void * a_p2491, void * a_p2492);
static void yr2497_CheckRepresented(void * a_p2498, rt_int a_p2499);
static rt_int yr2504_SigText(void * a_p2505);
static rt_int yr2510_RepSig(void * a_p2511);
static rt_int yr2516_Identical(void * a_p2517, void * a_p2518);
static rt_int yr2523_IsLiteralNode(void * a_p2524);
static void yr2529_StoreBounds(void * a_p2530, yarr a_p2532);
static rt_int yr2537_LoText(void * a_p2538);
static rt_int yr2543_HiText(void * a_p2544);
static void * yr2549_AdoptLiteral(void * a_p2550, void * a_p2551, void * a_p2552);
static rt_int yr2557_HasQualifier(void * a_p2558);
static rt_int yr2563_Gcd(rt_int a_p2564, rt_int a_p2565);
static rt_int yr2570_MulChk(rt_int a_p2571, rt_int a_p2572, rt_int a_p2573);
static rt_int yr2578_PowChk(rt_int a_p2579, rt_int a_p2580, rt_int a_p2581);
static void yr2586_ScaleRatio(void * a_p2587, void * a_p2588, rt_int * a_p2589, rt_int * a_p2590, rt_int * a_p2591);
static rt_int yr2596_Factor(rt_int a_p2597, rt_int a_p2598);
static void yr2603_SetScale(void * a_p2604, rt_int a_p2605, rt_int a_p2606);
static void yr2611_Qualify(void * a_p2612, void * a_p2613);
static void yr2618_DefineLits(void * a_p2619);
static void yr2624_SetRange(void * a_p2625, rt_int a_p2626, rt_int a_p2627);
static rt_int yr2632_NewTid(rt_int a_p2633);
static void * yr2638_MakeRep(void * a_p2639, rt_int a_p2640, rt_int a_p2641);
static rt_int yr2646_Conforms(void * a_p2647, void * a_p2648);
static void * yr2653_MakeRep1(void * a_p2654, rt_int a_p2655, rt_int a_p2656);
static void yr2661_ResolvePending(rt_int a_p2662, void * a_p2663);
static void yr2668_CheckPending(void);
static void yr2673_BuildArrayDesc(void * a_p2674);
static void yr2679_AddField(void * a_p2680, void * * a_p2681, rt_int a_p2682, void * a_p2683, rt_int a_p2684, rt_int a_p2685, void * a_p2686, rt_int a_p2687);
static void yr2692_AddFields(void * a_p2693, void * * a_p2694, void * a_p2695, rt_int a_p2696, void * a_p2697, rt_int a_p2698);
static void yr2703_MakeRecord(void * a_p2704, void * a_p2705, rt_int a_p2706);
static void * yr2711_FindField(void * a_p2712, rt_int a_p2713);
static rt_int yr2718_BitsFor(rt_int a_p2719);
static rt_int yr2724_RoundUp(rt_int a_p2725, rt_int a_p2726);
static rt_int yr2731_Bits(void * a_p2732, rt_int a_p2733);
static rt_int yr2738_RecordBits(void * a_p2739, rt_int a_p2740, rt_int a_p2741);
static rt_int yr2746_FirstOfVariant(void * a_p2747, void * a_p2748);
static void * yr2753_ApplyStorage(void * a_p2754, void * a_p2755);
static rt_int yr2760_AtAddress(void * a_p2761);
static rt_int yr2766_StoreAt(rt_int a_p2767, rt_int a_p2768);
static rt_int yr2773_ExtentCode(rt_int a_p2774, void * a_p2775);
static rt_int yr2780_SpaceArg(void * a_p2781, rt_int a_p2782, void * a_p2783);
static rt_int yr2788_PackedComponent(void * a_p2789);
static rt_int yr2794_CharOrd(void * a_p2795, rt_int a_p2796);
static void * yr2801_AlphabetFor(void * a_p2802, void * a_p2803);
static rt_int yr2808_CharValue(void * a_p2809, rt_int a_p2810, rt_int a_p2811);
static rt_int yr2816_StringCodes(void * a_p2817, rt_int a_p2818, rt_int * a_p2819, rt_int a_p2820);
static void yr2825_Manifest(void * a_p2826, rt_int * a_p2827, rt_int * a_p2828);
static void yr2833_ManifestStd(void * a_p2834, rt_int * a_p2835, rt_int * a_p2836);
static rt_int yr2841_NeedsConv(void * a_p2842, void * a_p2843);
static rt_int yr2848_ConvertRecord(rt_int a_p2849, void * a_p2850, void * a_p2851);
static rt_int yr2856_ConvertArray(rt_int a_p2857, void * a_p2858, void * a_p2859);
static rt_int yr2864_RescaleCode(rt_int a_p2865, void * a_p2866, void * a_p2867);
static void yr2872_CommonScale(rt_int * a_p2873, void * a_p2874, rt_int * a_p2875, void * a_p2876, void * a_p2877, rt_int a_p2878);
static void yr2883_FixLiteral(void * a_p2884, rt_int * a_p2885, void * * a_p2886);
static void yr2891_ManifestFix(void * a_p2892, rt_int * a_p2893, rt_int * a_p2894, rt_int * a_p2895);
static rt_int yr2900_FloatChk(rt_int a_p2901);
static rt_int yr2906_Convert(rt_int a_p2907, void * a_p2908, void * a_p2909);
static rt_int yr2914_StoreText(rt_int a_p2915, void * a_p2916, rt_int a_p2917, void * a_p2918, rt_int a_p2919);
static void yr2924_Store(rt_int a_p2925, void * a_p2926, rt_int a_p2927, void * a_p2928, rt_int a_p2929);
static rt_int yr2934_IsVariable(void * a_p2935);
static void yr2940_CheckPure(void * a_p2941);
static void yr2946_LValue(void * a_p2947, rt_int * a_p2948, void * * a_p2949);
static rt_int yr2954_Paren(rt_int a_p2955);
static void * yr2960_Lit(void * a_p2961, rt_int a_p2962);
static void * yr2967_Qualifier(void * a_p2968);
static void yr2973_Expr(void * a_p2974, void * a_p2975, rt_int * a_p2976, void * * a_p2977);
static rt_int yr2982_VariantTest(void * a_p2983, void * a_p2984, rt_int a_p2985);
static void yr2990_NameExpr(void * a_p2991, void * a_p2992, rt_int * a_p2993, void * * a_p2994);
static rt_int yr2999_IsMainStore(void * a_p3000);
static void yr3005_IndexExpr(void * a_p3006, rt_int * a_p3007, void * * a_p3008);
static void yr3013_NegExpr(void * a_p3014, rt_int a_p3015, void * a_p3016, rt_int * a_p3017, void * * a_p3018);
static void * yr3023_Unbounded(void * a_p3024);
static rt_int yr3029_Call2(yarr a_p3031, rt_int a_p3032, rt_int a_p3033);
static rt_int yr3038_Infix(rt_int a_p3039, yarr a_p3041, rt_int a_p3042);
static rt_int yr3047_EqCode(rt_int a_p3048, void * a_p3049, rt_int a_p3050, void * a_p3051);
static rt_int yr3056_IsOrdered(void * a_p3057);
static rt_int yr3062_FixToFloat(rt_int a_p3063, void * a_p3064);
static void yr3069_BinExpr(void * a_p3070, void * a_p3071, rt_int * a_p3072, void * * a_p3073);
static rt_int yr3078_Fits(void * a_p3079, void * a_p3080);
static void * yr3085_Choose(void * a_p3086, rt_int a_p3087, rt_int a_p3088);
static rt_int yr3093_HidesStandard(void * a_p3094);
static void yr3099_CompileArgs(void * a_p3100, void * a_p3101, rt_int * a_p3102, rt_int * a_p3103);
static void yr3108_CheckUnresolved(void * a_p3109, void * a_p3110, rt_int a_p3111);
static rt_int yr3116_SameAsFormal(void * a_p3117, void * a_p3118);
static rt_int yr3123_CallCode(void * a_p3124, rt_int a_p3125, rt_int a_p3126, rt_int a_p3127);
static rt_int yr3132_Num(rt_int a_p3133);
static rt_int yr3138_UserOp(void * a_p3139, rt_int a_p3140, void * a_p3141, void * a_p3142, rt_int * a_p3143, void * * a_p3144);
static void yr3149_NoteCall(void * a_p3150, rt_int a_p3151);
static void yr3156_Directive(void * a_p3157, void * a_p3158, rt_int a_p3159, rt_int a_p3160, rt_int * a_p3161, void * * a_p3162);
static rt_int yr3167_Suppressed(rt_int a_p3168);
static rt_int yr3173_UserAssign(rt_int a_p3174, void * a_p3175, rt_int a_p3176, void * a_p3177, rt_int a_p3178);
static void yr3183_Assign(rt_int a_p3184, void * a_p3185, rt_int a_p3186, void * a_p3187, rt_int a_p3188);
static void yr3193_CallExpr(void * a_p3194, void * a_p3195, rt_int a_p3196, rt_int * a_p3197, void * * a_p3198);
static void yr3203_Denote(void * a_p3204, void * a_p3205, rt_int * a_p3206, void * * a_p3207);
static rt_int yr3212_VariantOf(void * a_p3213, rt_int a_p3214, rt_int a_p3215);
static void yr3220_Emit2(yarr a_p3222, rt_int a_p3223);
static void yr3228_Emit3(yarr a_p3230, rt_int a_p3231, yarr a_p3233);
static void yr3238_PopTo(rt_int a_p3239);
static void yr3244_LeaveBlock(void);
static rt_int yr3249_RaiseCode(rt_int a_p3250);
static void yr3255_BlockStatements(void * a_p3256);
static void yr3261_BlockStatements1(void * a_p3262);
static rt_int yr3267_SameDesig(void * a_p3268, void * a_p3269);
static void yr3274_CheckVariantSelected(void * a_p3275, void * a_p3276, void * a_p3277);
static void yr3282_CheckCaseLabels(void * a_p3283, void * a_p3284);
static rt_int yr3289_Falls(void * a_p3290);
static rt_int yr3295_BlockFalls(void * a_p3296);
static rt_int yr3301_Completes(void * a_p3302);
static rt_int yr3307_Exits(void * a_p3308, rt_int a_p3309);
static void yr3314_Statements(void * a_p3315);
static rt_int yr3320_Cond(void * a_p3321);
static rt_int yr3326_Label(void * a_p3327, void * a_p3328);
static void yr3333_CopyOut(void);
static void yr3338_Statement(void * a_p3339);
static void yr3344_ForStatement(void * a_p3345);
static rt_int yr3350_Join(rt_int a_p3351, rt_int a_p3352, rt_int a_p3353);
static void yr3358_ReturnStatement(void * a_p3359);
static void yr3364_BeginStatement(void * a_p3365);
static void yr3370_PlaceLabel(void * a_p3371);
static void yr3376_GotoStatement(void * a_p3377);
static void yr3382_CheckLabels(void * a_p3383);
static void yr3388_DesigBase(void * a_p3389, void * * a_p3390, rt_int * a_p3391, rt_int * a_p3392);
static void * yr3397_Note(void * a_p3398, rt_int a_p3399, rt_int a_p3400);
static void yr3405_NoteWrite(void * a_p3406);
static void yr3411_NoteFree(void * a_p3412);
static void yr3417_NoteFreeDeref(void * a_p3418, rt_int a_p3419);
static rt_int yr3424_DSteps(void * a_p3425, yarr * a_p3426);
static rt_int yr3431_Overlaps(void * a_p3432, void * a_p3433);
static void yr3438_CheckActuals(void * a_p3439, rt_int a_p3440, rt_int a_p3441);
static void yr3446_CheckEffects(void);
static rt_int yr3451_DynIndex(rt_int a_p3452, rt_int a_p3453, rt_int a_p3454);
static rt_int yr3459_RoutineCName(rt_int a_p3460);
static void * yr3465_FormalRep(void * a_p3466);
static rt_int yr3471_ParamCType(void * a_p3472);
static void yr3477_InstallTrap(void * a_p3478, void * a_p3479);
static rt_int yr3484_DeclType(void * a_p3485);
static void yr3490_RoutineHeader(void * a_p3491, rt_int a_p3492);
static void * yr3497_SameSignature(void * a_p3498, void * a_p3499);
static void yr3504_RoutineBody(void * a_p3505);
static void yr3510_DeclareStorage(void * a_p3511, void * a_p3512, rt_int a_p3513);
static void yr3518_DeclareAt(void * a_p3519, void * a_p3520, rt_int a_p3521, rt_int a_p3522);
static void yr3527_InitStorage(void * a_p3528, void * a_p3529, rt_int a_p3530);
static void yr3535_SimpleDecl(void * a_p3536);
static void yr3541_NoteAlphabet(void * a_p3542, void * a_p3543);
static void yr3548_AtLocation(void * a_p3549, void * a_p3550);
static void yr3555_Defer(void * a_p3556, rt_int a_p3557, void * a_p3558, rt_int a_p3559);
static void yr3564_RunDeferred(rt_int a_p3565, rt_int a_p3566);
static void yr3571_ModuleInit(rt_int a_p3572);
static void yr3577_Declarations(void * a_p3578);
static void yr3583_DeclareRoutine(void * a_p3584);
static void * yr3589_Alias(rt_int a_p3590, void * a_p3591);
static void yr3596_AddLits(void * * a_p3597, void * a_p3598, rt_int a_p3599);
static rt_int yr3604_Provides(void * a_p3605, rt_int a_p3606);
static rt_int yr3611_ImportLater(rt_int a_p3612, rt_int a_p3613, void * * a_p3614);
static void * yr3619_OneDecl(void * a_p3620);
static void * yr3625_Lazy(rt_int a_p3626, rt_int a_p3627, void * a_p3628, rt_int a_p3629);
static void yr3634_SetLazy(rt_int a_p3635, void * a_p3636);
static void yr3641_ResolveFrom(void * a_p3642, void * a_p3643);
static void yr3648_ResolveLater(rt_int a_p3649);
static void yr3654_LazyModule(void * a_p3655, void * * a_p3656, rt_int a_p3657);
static void yr3662_ResolveItem(void * a_p3663, void * * a_p3664, rt_int a_p3665);
static void yr3670_DefineAll(void * a_p3671, rt_int a_p3672);
static void * yr3677_ExtendWith(void * a_p3678, void * a_p3679, rt_int a_p3680);
static void yr3685_CompileModule(void * a_p3686);
static void yr3691_DeclareTemplate(void * a_p3692);
static void yr3697_Instantiate(void * a_p3698);
static void yr3703_DeclareProcess(void * a_p3704);
static void yr3709_AwaitProcesses(void);
static void yr3714_Activate(void * a_p3715, void * a_p3716);
static rt_int yr3721_LifeDepth(rt_int a_p3722);
static rt_int yr3727_MonitorPath(void * a_p3728);
static void yr3733_EnterMonitor(void * a_p3734);
static void yr3739_LeaveMonitor(void);
static void yr3744_TerminateStatement(void * a_p3745);
static void yr3750_DeclareSignal(void * a_p3751, rt_int a_p3752);
static void yr3757_DeclareSignalArray(void * a_p3758, rt_int a_p3759);
static void yr3764_DeviceSignal(void * a_p3765, void * a_p3766);
static void * yr3771_Arg(void * a_p3772, rt_int a_p3773);
static void yr3778_NArgs(void * a_p3779, rt_int a_p3780);
static rt_int yr3785_Call1(yarr a_p3787, rt_int a_p3788);
static rt_int yr3793_Addr(rt_int a_p3794);
static void yr3799_StdVar(void * a_p3800, rt_int a_p3801, rt_int * a_p3802, void * * a_p3803);
static void yr3808_NumArg(void * a_p3809, rt_int * a_p3810, void * * a_p3811);
static rt_int yr3816_IntArg(void * a_p3817);
static void yr3822_CodeInsert(void * a_p3823);
static void * yr3828_ManifestScale(void * a_p3829, void * a_p3830);
static void yr3835_StdCall(rt_int a_p3836, void * a_p3837, rt_int a_p3838, rt_int * a_p3839, void * * a_p3840);
static void yr3845_StdRep(yarr a_p3847, void * a_p3848);
static void yr3853_StdOp(yarr a_p3855, rt_int a_p3856);
static void * yr3861_LitList(yarr a_p3863, yarr a_p3864, yarr a_p3865, rt_int a_p3866);
static void * yr3871_Abstract(rt_int a_p3872, yarr a_p3874);
static void yr3879_Predefine(void);
static void yr3884_Translate(void);
static void yr3889_WriteProgram(void);
static rt_int yr8451_At(struct yf3447 *up, rt_int a_p8452, rt_int a_p8453);
static rt_int yr8458_Reaches(struct yf3447 *up, rt_int a_p8459, rt_int a_p8460);
static rt_int yr8465_VName(struct yf3447 *up, rt_int a_p8466);
static void yr1003_InitChars(void) {
struct yf1004 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v3895 = INT64_C(0);
{ rt_int hi3900 = 127;
for (rt_int i3899 = 0; i3899 <= hi3900; i3899++) { F.c_3898 = i3899; Y_TICK();
((rt_int *)(v965).p)[y_ix1(v965, F.c_3898)] = F.v3895;
((unsigned char *)(v976).p)[y_ix1(v976, F.v3895)] = F.c_3898;
F.v3895 = y_range(y_add(F.v3895, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i3899 == hi3900) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1008_IsLetter(unsigned char a_p1009) {
struct yf1010 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1009 = a_p1009;
{ rt_int rv3910 = ((((((F.p1009 >= 65)) && ((F.p1009 <= 90)))) || ((((F.p1009 >= 97)) && ((F.p1009 <= 122))))) || ((F.p1009 == 95)));
y_use = F.yu; return rv3910; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1014_IsDigit(unsigned char a_p1015) {
struct yf1016 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1015 = a_p1015;
{ rt_int rv3915 = (((F.p1015 >= 48)) && ((F.p1015 <= 57)));
y_use = F.yu; return rv3915; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1020_PoolAdd(unsigned char a_p1021) {
struct yf1022 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1021 = a_p1021;
v915 = y_range(y_add(v915, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((unsigned char *)(v913).p)[y_ix1(v913, v915)] = F.p1021;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1026_SB(void) {
struct yf1027 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
v955 = y_range(y_add(v955, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v953).p)[y_ix1(v953, v955)] = v941;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1031_SC(unsigned char a_p1032) {
struct yf1033 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1032 = a_p1032;
v941 = y_range(y_add(v941, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((unsigned char *)(v939).p)[y_ix1(v939, v941)] = F.p1032;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1037_SA(yarr a_p1039) {
struct yf1040 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1039 = a_p1039;
F.lo3934 = y_low(F.p1039, INT64_C(1));
F.hi3935 = y_high(F.p1039, INT64_C(1));
{ rt_int hi3939 = F.hi3935;
for (rt_int i3938 = F.lo3934; i3938 <= hi3939; i3938++) { F.c_3937 = i3938; Y_TICK();
yr1031_SC(((unsigned char *)(F.p1039).p)[y_ix1(F.p1039, F.c_3937)]);
if (i3938 == hi3939) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1044_ST(rt_int a_p1045) {
struct yf1046 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1045 = a_p1045;
if ((F.p1045 == INT64_C(0))) {
y_use = F.yu; return;
}
F.v3943 = ((rt_int *)(v918).p)[y_ix1(v918, F.p1045)];
while ((F.v3943 < (y_add(((rt_int *)(v918).p)[y_ix1(v918, F.p1045)], ((rt_int *)(v920).p)[y_ix1(v920, F.p1045)])))) {
Y_TICK();
yr1031_SC(((unsigned char *)(v913).p)[y_ix1(v913, F.v3943)]);
F.v3943 = y_range(y_add(F.v3943, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1050_SI(rt_int a_p1051) {
struct yf1052 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1051 = a_p1051;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(24)}; y_desc_array(&F.yd_3958, 1, lo, hi, &y_d_byte); }
y_init(&F.yd_3958, &F.v3960);
F.v3962 = INT64_C(0);
F.v3965 = F.p1051;
if ((F.v3965 < INT64_C(0))) {
yr1031_SC(45);
F.v3965 = y_range(y_neg(F.v3965), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
for (;;) {
Y_TICK();
F.v3962 = y_range(y_add(F.v3962, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((unsigned char *)(F.v3960).p)[y_ix1(F.v3960, F.v3962)] = ((unsigned char *)(v976).p)[y_ix1(v976, y_add((y_mod(F.v3965, INT64_C(10))), INT64_C(48)))];
F.v3965 = y_range(y_div(F.v3965, INT64_C(10)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.v3965 == INT64_C(0))) {
goto yl_3969;
}
}
yl_3969: ;
while ((F.v3962 > INT64_C(0))) {
Y_TICK();
yr1031_SC(((unsigned char *)(F.v3960).p)[y_ix1(F.v3960, F.v3962)]);
F.v3962 = y_range(y_sub(F.v3962, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1056_SE(void) {
struct yf1057 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v3984 = ((rt_int *)(v953).p)[y_ix1(v953, v955)];
v955 = y_range(y_sub(v955, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v922 = y_range(y_add(v922, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v918).p)[y_ix1(v918, v922)] = y_range(y_add(v915, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v920).p)[y_ix1(v920, v922)] = y_range(y_sub(v941, F.v3984), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo3995 = y_add(F.v3984, INT64_C(1));
F.hi3996 = v941;
{ rt_int hi4000 = F.hi3996;
for (rt_int i3999 = F.lo3995; i3999 <= hi4000; i3999++) { F.c_3998 = i3999; Y_TICK();
yr1020_PoolAdd(((unsigned char *)(v939).p)[y_ix1(v939, F.c_3998)]);
if (i3999 == hi4000) break;
}}
v941 = F.v3984;
{ rt_int rv4001 = y_range(v922, INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv4001; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1061_T(yarr a_p1063) {
struct yf1064 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1063 = a_p1063;
yr1026_SB();
yr1037_SA(F.p1063);
{ rt_int rv4004 = yr1056_SE();
y_use = F.yu; return rv4004; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1068_Intern(rt_int a_p1069, rt_int a_p1070) {
struct yf1071 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1069 = a_p1069;
F.p1070 = a_p1070;
F.v4009 = INT64_C(0);
F.lo4019 = F.p1069;
F.hi4020 = y_sub((y_add(F.p1069, F.p1070)), INT64_C(1));
{ rt_int hi4024 = F.hi4020;
for (rt_int i4023 = F.lo4019; i4023 <= hi4024; i4023++) { F.c_4022 = i4023; Y_TICK();
F.v4009 = y_range(y_mod((y_add((y_mul(F.v4009, INT64_C(31))), ((rt_int *)(v965).p)[y_ix1(v965, ((unsigned char *)(v913).p)[y_ix1(v913, F.c_4022)])])), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i4023 == hi4024) break;
}}
for (;;) {
Y_TICK();
if ((((rt_int *)(v925).p)[y_ix1(v925, F.v4009)] == INT64_C(0))) {
v922 = y_range(y_add(v922, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v918).p)[y_ix1(v918, v922)] = F.p1069;
((rt_int *)(v920).p)[y_ix1(v920, v922)] = F.p1070;
((rt_int *)(v925).p)[y_ix1(v925, F.v4009)] = y_range(v922, INT64_C(0), INT64_C(4000000));
{ rt_int rv4034 = y_range(v922, INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv4034; }
}
F.v4012 = ((rt_int *)(v925).p)[y_ix1(v925, F.v4009)];
if ((((rt_int *)(v920).p)[y_ix1(v920, F.v4012)] == F.p1070)) {
F.v4014 = 1;
F.lo4041 = INT64_C(0);
F.hi4042 = y_sub(F.p1070, INT64_C(1));
{ rt_int hi4046 = F.hi4042;
for (rt_int i4045 = F.lo4041; i4045 <= hi4046; i4045++) { F.c_4044 = i4045; Y_TICK();
if ((!(((unsigned char *)(v913).p)[y_ix1(v913, y_add(((rt_int *)(v918).p)[y_ix1(v918, F.v4012)], F.c_4044))] == ((unsigned char *)(v913).p)[y_ix1(v913, y_add(F.p1069, F.c_4044))]))) {
F.v4014 = 0;
}
if (i4045 == hi4046) break;
}}
if (F.v4014) {
{ rt_int rv4050 = y_range(F.v4012, INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv4050; }
}
}
F.v4009 = y_range(y_mod((y_add(F.v4009, INT64_C(1))), INT64_C(262144)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yl_4030: ;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1075_Name(rt_int a_p1076) {
struct yf1077 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1076 = a_p1076;
{ rt_int rv4057 = yr1068_Intern(((rt_int *)(v918).p)[y_ix1(v918, F.p1076)], ((rt_int *)(v920).p)[y_ix1(v920, F.p1076)]);
y_use = F.yu; return rv4057; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1081_N(yarr a_p1083) {
struct yf1084 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1083 = a_p1083;
{ rt_int rv4060 = yr1075_Name(yr1061_T(F.p1083));
y_use = F.yu; return rv4060; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1088_TEq(rt_int a_p1089, rt_int a_p1090) {
struct yf1091 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1089 = a_p1089;
F.p1090 = a_p1090;
if ((F.p1089 == F.p1090)) {
{ rt_int rv4065 = 1;
y_use = F.yu; return rv4065; }
}
if ((!(((rt_int *)(v920).p)[y_ix1(v920, F.p1089)] == ((rt_int *)(v920).p)[y_ix1(v920, F.p1090)]))) {
{ rt_int rv4067 = 0;
y_use = F.yu; return rv4067; }
}
F.lo4073 = INT64_C(0);
F.hi4074 = y_sub(((rt_int *)(v920).p)[y_ix1(v920, F.p1089)], INT64_C(1));
{ rt_int hi4078 = F.hi4074;
for (rt_int i4077 = F.lo4073; i4077 <= hi4078; i4077++) { F.c_4076 = i4077; Y_TICK();
if ((!(((unsigned char *)(v913).p)[y_ix1(v913, y_add(((rt_int *)(v918).p)[y_ix1(v918, F.p1089)], F.c_4076))] == ((unsigned char *)(v913).p)[y_ix1(v913, y_add(((rt_int *)(v918).p)[y_ix1(v918, F.p1090)], F.c_4076))]))) {
{ rt_int rv4082 = 0;
y_use = F.yu; return rv4082; }
}
if (i4077 == hi4078) break;
}}
{ rt_int rv4084 = 1;
y_use = F.yu; return rv4084; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1095_TStarts(rt_int a_p1096, yarr a_p1098) {
struct yf1099 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1096 = a_p1096;
F.p1098 = a_p1098;
F.v4089 = INT64_C(0);
if ((((rt_int *)(v920).p)[y_ix1(v920, F.p1096)] < (y_add((y_sub(y_high(F.p1098, INT64_C(1)), y_low(F.p1098, INT64_C(1)))), INT64_C(1))))) {
{ rt_int rv4099 = 0;
y_use = F.yu; return rv4099; }
}
F.lo4105 = y_low(F.p1098, INT64_C(1));
F.hi4106 = y_high(F.p1098, INT64_C(1));
{ rt_int hi4110 = F.hi4106;
for (rt_int i4109 = F.lo4105; i4109 <= hi4110; i4109++) { F.c_4108 = i4109; Y_TICK();
if ((!(((unsigned char *)(v913).p)[y_ix1(v913, y_add(((rt_int *)(v918).p)[y_ix1(v918, F.p1096)], F.v4089))] == ((unsigned char *)(F.p1098).p)[y_ix1(F.p1098, F.c_4108)]))) {
{ rt_int rv4113 = 0;
y_use = F.yu; return rv4113; }
}
F.v4089 = y_range(y_add(F.v4089, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i4109 == hi4110) break;
}}
{ rt_int rv4117 = 1;
y_use = F.yu; return rv4117; }
rt_raise(Y_X_NO_RETURN);
}
static unsigned char yr1103_TChar(rt_int a_p1104, rt_int a_p1105) {
struct yf1106 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1104 = a_p1104;
F.p1105 = a_p1105;
{ unsigned char rv4124 = ((unsigned char *)(v913).p)[y_ix1(v913, y_sub((y_add(((rt_int *)(v918).p)[y_ix1(v918, F.p1104)], F.p1105)), INT64_C(1)))];
y_use = F.yu; return rv4124; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1110_Put(yR140 * a_p1111, rt_int a_p1112) {
struct yf1113 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1111 = a_p1111;
F.p1112 = a_p1112;
({ F.v4129 = y_new(sizeof(yR135)); });
(*(yR135 *)y_deref(F.v4129)) = ((yR135){ .f_t = F.p1112, .f_next = ((void *)0) });
if ((((*F.p1111)).f_head == ((void *)0))) {
((*F.p1111)).f_head = F.v4129;
} else {
((*(yR135 *)y_deref(((*F.p1111)).f_tail))).f_next = F.v4129;
}
((*F.p1111)).f_tail = F.v4129;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1117_PutS(yR140 * a_p1118, yarr a_p1120) {
struct yf1121 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1118 = a_p1118;
F.p1120 = a_p1120;
yr1110_Put(&(*F.p1118), yr1061_T(F.p1120));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1125_Append(yR140 * a_p1126, yR140 * a_p1127) {
struct yf1128 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1126 = a_p1126;
F.p1127 = a_p1127;
if ((((*F.p1127)).f_head == ((void *)0))) {
y_use = F.yu; return;
}
if ((((*F.p1126)).f_head == ((void *)0))) {
((*F.p1126)).f_head = ((*F.p1127)).f_head;
} else {
((*(yR135 *)y_deref(((*F.p1126)).f_tail))).f_next = ((*F.p1127)).f_head;
}
((*F.p1126)).f_tail = ((*F.p1127)).f_tail;
((*F.p1127)).f_head = ((void *)0);
((*F.p1127)).f_tail = ((void *)0);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1132_Emit(rt_int a_p1133) {
struct yf1134 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1133 = a_p1133;
yr1110_Put(&v996, F.p1133);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1138_EmitS(yarr a_p1140) {
struct yf1141 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1140 = a_p1140;
yr1110_Put(&v996, yr1061_T(F.p1140));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1145_WriteTxt(rt_int a_p1146) {
struct yf1147 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1146 = a_p1146;
F.v4143 = ((rt_int *)(v918).p)[y_ix1(v918, F.p1146)];
while ((F.v4143 < (y_add(((rt_int *)(v918).p)[y_ix1(v918, F.p1146)], ((rt_int *)(v920).p)[y_ix1(v920, F.p1146)])))) {
Y_TICK();
({ unsigned char pv = ((unsigned char *)(v913).p)[y_ix1(v913, F.v4143)]; y_put_value(&v911, &y_d_byte, &pv); });
F.v4143 = y_range(y_add(F.v4143, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1151_WriteBuf(yR140 a_p1152) {
struct yf1153 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1152 = a_p1152;
F.v4150 = (F.p1152).f_head;
while ((!(F.v4150 == ((void *)0)))) {
Y_TICK();
yr1145_WriteTxt(((*(yR135 *)y_deref(F.v4150))).f_t);
({ unsigned char pv = 10; y_put_value(&v911, &y_d_byte, &pv); });
F.v4150 = ((*(yR135 *)y_deref(F.v4150))).f_next;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1157_Fail(rt_int a_p1158, rt_int a_p1159) {
struct yf1160 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1158 = a_p1158;
F.p1159 = a_p1159;
v955 = INT64_C(0);
v941 = INT64_C(0);
yr1026_SB();
yr1037_SA(y_str("line ", 5));
yr1050_SI(F.p1158);
yr1037_SA(y_str(": ", 2));
yr1044_ST(F.p1159);
F.v4156 = yr1056_SE();
yr1145_WriteTxt(F.v4156);
({ unsigned char pv = 10; y_put_value(&v911, &y_d_byte, &pv); });
y_close(&v911);
rt_raise(rt_exc("translation_error"));
rt_raise(Y_X_NO_RETURN);
}
static void yr1164_Warn(rt_int a_p1165, rt_int a_p1166) {
struct yf1167 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1165 = a_p1165;
F.p1166 = a_p1166;
yr1026_SB();
yr1037_SA(y_str("line ", 5));
yr1050_SI(F.p1165);
yr1037_SA(y_str(": warning: ", 11));
yr1044_ST(F.p1166);
F.v4166 = yr1056_SE();
yr1171_WriteTo(&v994, F.v4166);
({ unsigned char pv = 10; y_put_value(&v994, &y_d_byte, &pv); });
yr1026_SB();
yr1037_SA(y_str("/* ", 3));
yr1044_ST(F.v4166);
yr1037_SA(y_str(" */", 3));
F.v4166 = yr1056_SE();
yr1110_Put(&v992, F.v4166);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1171_WriteTo(yfile * * a_p1172, rt_int a_p1173) {
struct yf1174 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1172 = a_p1172;
F.p1173 = a_p1173;
F.v4176 = ((rt_int *)(v918).p)[y_ix1(v918, F.p1173)];
while ((F.v4176 < (y_add(((rt_int *)(v918).p)[y_ix1(v918, F.p1173)], ((rt_int *)(v920).p)[y_ix1(v920, F.p1173)])))) {
Y_TICK();
({ unsigned char pv = ((unsigned char *)(v913).p)[y_ix1(v913, F.v4176)]; y_put_value(&(*F.p1172), &y_d_byte, &pv); });
F.v4176 = y_range(y_add(F.v4176, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1178_FailS(rt_int a_p1179, yarr a_p1181) {
struct yf1182 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1179 = a_p1179;
F.p1181 = a_p1181;
yr1157_Fail(F.p1179, yr1061_T(F.p1181));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1186_FailN(rt_int a_p1187, rt_int a_p1188, yarr a_p1190) {
struct yf1191 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1187 = a_p1187;
F.p1188 = a_p1188;
F.p1190 = a_p1190;
yr1026_SB();
yr1044_ST(F.p1188);
yr1037_SA(F.p1190);
F.v4188 = yr1056_SE();
yr1157_Fail(F.p1187, F.v4188);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1195_NewSerial(void) {
struct yf1196 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
v958 = y_range(y_add(v958, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
{ rt_int rv4192 = v958;
y_use = F.yu; return rv4192; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1200_Fresh(yarr a_p1202) {
struct yf1203 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1202 = a_p1202;
F.v4196 = yr1195_NewSerial();
yr1026_SB();
yr1037_SA(F.p1202);
yr1050_SI(F.v4196);
{ rt_int rv4197 = yr1056_SE();
y_use = F.yu; return rv4197; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1875_InitWords(void) {
struct yf1876 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
yr1026_SB();
yr1037_SA(y_str("ALIGNMENT ALPHABET AND ARRAY AS ASSERT AT BASE2 BASE8 BASE10 BASE16 BEGIN CASE ", 79));
yr1037_SA(y_str("CONST DIMENSIONS DIV DO ELSE ELSIF END ENDEXCEPTION ENDFOR ENDFUNCTION ENDIF ", 77));
yr1037_SA(y_str("ENDLOOP ENDMODULE ENDMONITOR ENDPROCEDURE ENDPROCESS ENDRECORD ENDSELECT ", 73));
yr1037_SA(y_str("ENDTEMPLATE ENDWHILE EXCEPTION EXIT EXPORT EXTENDS FILE FOR FUNCTION GOTO IF ", 77));
yr1037_SA(y_str("IMPORT IN INLINE INSTANCE INSTANCES LABEL LOOP MOD MODULE MONITOR NIL NOT OF ", 77));
yr1037_SA(y_str("OPAQUE OR ORDERED OUT PACKED POINTER PRECISION PRIORITY PROCEDURE PROCESS ", 74));
yr1037_SA(y_str("PROPAGATE_EXCEPTION READONLY RECORD REPLACES REPRESENTATION RETURN RETURNS ", 75));
yr1037_SA(y_str("SCALE SELECT SET SIMULATED_TIME SIZE SPACE TEMPLATE TERMINATE_PROCESS THEN ", 75));
yr1037_SA(y_str("TRANSPARENT TYPE UNORDERED VAR WHILE XOR ", 41));
yr1037_SA(y_str("<<<= >>>= ### === <<< >>> <<= >>= *** /// --- +++ := => .. <= >= ## == << >> ", 77));
yr1037_SA(y_str("** // -- ++ # + - * / = < > ( ) [ ] , ; : . ^ ", 46));
F.v4204 = yr1056_SE();
v922 = INT64_C(0);
F.v4200 = ((rt_int *)(v918).p)[y_ix1(v918, F.v4204)];
F.lo4221 = ((rt_int *)(v918).p)[y_ix1(v918, F.v4204)];
F.hi4222 = y_sub((y_add(((rt_int *)(v918).p)[y_ix1(v918, F.v4204)], ((rt_int *)(v920).p)[y_ix1(v920, F.v4204)])), INT64_C(1));
{ rt_int hi4226 = F.hi4222;
for (rt_int i4225 = F.lo4221; i4225 <= hi4226; i4225++) { F.c_4224 = i4225; Y_TICK();
if ((((unsigned char *)(v913).p)[y_ix1(v913, F.c_4224)] == 32)) {
F.v4202 = yr1068_Intern(F.v4200, y_range(y_sub(F.c_4224, F.v4200), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v4200 = y_range(y_add(F.c_4224, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i4225 == hi4226) break;
}}
if ((!(v922 == v621))) {
rt_raise(rt_exc("word_table"));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1880_ReadSource(void) {
struct yf1881 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
y_open(&v909, y_str("INPUT", 5), 0);
v1216 = y_range(y_add(v915, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!y_check_eof(&v909))) {
Y_TICK();
({ unsigned char g; y_get_value(&v909, &y_d_byte, &g); F.v4233 = g; });
yr1020_PoolAdd(F.v4233);
}
v1219 = v915;
y_close(&v909);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1885_AddTok(rt_int a_p1886, rt_int a_p1887) {
struct yf1888 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1886 = a_p1886;
F.p1887 = a_p1887;
v1213 = y_range(y_add(v1213, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1207).p)[y_ix1(v1207, v1213)] = F.p1886;
((rt_int *)(v1209).p)[y_ix1(v1209, v1213)] = F.p1887;
((rt_int *)(v1211).p)[y_ix1(v1211, v1213)] = v1225;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static unsigned char yr1892_At(rt_int a_p1893) {
struct yf1894 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1893 = a_p1893;
if ((F.p1893 > v1219)) {
{ unsigned char rv4246 = 0;
y_use = F.yu; return rv4246; }
}
{ unsigned char rv4247 = ((unsigned char *)(v913).p)[y_ix1(v913, F.p1893)];
y_use = F.yu; return rv4247; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1898_EndsOperand(void) {
struct yf1899 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((v1213 == INT64_C(0))) {
{ rt_int rv4255 = 0;
y_use = F.yu; return rv4255; }
}
F.v4250 = ((rt_int *)(v1207).p)[y_ix1(v1207, v1213)];
F.v4252 = ((rt_int *)(v1209).p)[y_ix1(v1209, v1213)];
if ((((((((F.v4250 == v207)) || ((F.v4250 == v216))) || ((F.v4250 == v219))) || ((F.v4250 == v222))) || ((F.v4250 == v225))) || ((F.v4250 == v228)))) {
{ rt_int rv4257 = 1;
y_use = F.yu; return rv4257; }
}
if ((F.v4250 == v213)) {
{ rt_int rv4258 = ((((F.v4252 == v597)) || ((F.v4252 == v603))) || ((F.v4252 == v618)));
y_use = F.yu; return rv4258; }
}
if ((F.v4250 == v210)) {
{ rt_int rv4259 = (F.v4252 == v387);
y_use = F.yu; return rv4259; }
}
{ rt_int rv4261 = 0;
y_use = F.yu; return rv4261; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1903_DigitVal(unsigned char a_p1904) {
struct yf1905 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1904 = a_p1904;
if ((((F.p1904 >= 48)) && ((F.p1904 <= 57)))) {
{ rt_int rv4268 = y_range(y_sub(((rt_int *)(v965).p)[y_ix1(v965, F.p1904)], INT64_C(48)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv4268; }
}
if ((((F.p1904 >= 65)) && ((F.p1904 <= 70)))) {
{ rt_int rv4273 = y_range(y_sub(((rt_int *)(v965).p)[y_ix1(v965, F.p1904)], INT64_C(55)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv4273; }
}
{ rt_int rv4275 = INT64_C(99);
y_use = F.yu; return rv4275; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1909_LexError(yarr a_p1911) {
struct yf1912 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1911 = a_p1911;
yr1178_FailS(v1225, F.p1911);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1916_LexDigits(rt_int a_p1917, rt_int a_p1918) {
struct yf1919 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1917 = a_p1917;
F.p1918 = a_p1918;
while ((yr1014_IsDigit(yr1892_At(v1222)) || ((F.p1918 && ((yr1903_DigitVal(yr1892_At(v1222)) < INT64_C(16))))))) {
Y_TICK();
if ((yr1903_DigitVal(yr1892_At(v1222)) >= F.p1917)) {
yr1026_SB();
yr1031_SC(39);
yr1031_SC(yr1892_At(v1222));
yr1037_SA(y_str("' is not a digit of BASE", 24));
yr1050_SI(F.p1917);
yr1037_SA(y_str(" (IV.B)", 7));
F.v4282 = yr1056_SE();
yr1157_Fail(v1225, F.v4282);
}
v1222 = y_range(y_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1923_LexNumber(rt_int a_p1924) {
struct yf1925 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1924 = a_p1924;
F.v4292 = INT64_C(10);
F.v4303 = 0;
F.v4306 = 0;
F.v4309 = INT64_C(0);
F.v4312 = INT64_C(0);
F.v4315 = INT64_C(0);
F.v4318 = INT64_C(0);
F.v4321 = INT64_C(0);
if ((!(v1228 == INT64_C(0)))) {
F.v4292 = v1228;
F.v4306 = 1;
}
v1228 = INT64_C(0);
F.v4295 = v1222;
yr1916_LexDigits(F.v4292, F.v4306);
F.v4297 = v1222;
if ((F.v4297 == F.v4295)) {
yr1909_LexError(y_str("a number has at least one digit (IV.B)", 38));
}
F.v4299 = v1222;
F.v4301 = v1222;
if ((((yr1892_At(v1222) == 46)) && ((!(yr1892_At(y_range(y_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 46))))) {
F.v4303 = 1;
v1222 = y_range(y_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4299 = v1222;
yr1916_LexDigits(F.v4292, F.v4306);
F.v4301 = v1222;
}
if ((yr1892_At(v1222) == 80)) {
v1222 = y_range(y_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4318 = INT64_C(1);
if ((((((yr1892_At(v1222) == 45)) || ((yr1892_At(v1222) == 43)))) && yr1014_IsDigit(yr1892_At(y_range(y_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))) {
if ((yr1892_At(v1222) == 45)) {
F.v4318 = INT64_C(-1);
}
v1222 = y_range(y_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v4315 = INT64_C(0);
while (yr1014_IsDigit(yr1892_At(v1222))) {
Y_TICK();
if ((F.v4315 > INT64_C(1000))) {
yr1909_LexError(y_str("a fixed-point exponent beyond this implementation", 49));
}
F.v4315 = y_range(y_add((y_mul(F.v4315, INT64_C(10))), yr1903_DigitVal(yr1892_At(v1222))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1222 = y_range(y_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v4315 = y_range(y_mul(F.v4315, F.v4318), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4309 = INT64_C(0);
F.v4321 = y_range(y_sub(F.v4301, F.v4299), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo4362 = F.v4295;
F.hi4363 = y_sub(F.v4301, INT64_C(1));
{ rt_int hi4367 = F.hi4363;
for (rt_int i4366 = F.lo4362; i4366 <= hi4367; i4366++) { F.c_4365 = i4366; Y_TICK();
if ((((F.c_4365 < F.v4297)) || ((F.c_4365 >= F.v4299)))) {
F.v4312 = yr1903_DigitVal(((unsigned char *)(v913).p)[y_ix1(v913, F.c_4365)]);
if ((F.v4309 > (y_div((y_sub(v906, F.v4312)), F.v4292)))) {
yr1909_LexError(y_str("a fixed-point literal with more digits than this implementation holds", 69));
}
F.v4309 = y_range(y_add((y_mul(F.v4309, F.v4292)), F.v4312), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i4366 == hi4367) break;
}}
if (F.p1924) {
F.v4309 = y_range(y_neg(F.v4309), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((v1246 >= INT64_C(200000))) {
yr1909_LexError(y_str("too many fixed-point literals", 29));
}
v1246 = y_range(y_add(v1246, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1240).p)[y_ix1(v1240, v1246)] = F.v4309;
((rt_int *)(v1242).p)[y_ix1(v1242, v1246)] = F.v4292;
((rt_int *)(v1244).p)[y_ix1(v1244, v1246)] = y_range(y_sub(F.v4315, F.v4321), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1885_AddTok(v219, v1246);
y_use = F.yu; return;
}
if (F.v4303) {
if ((!(F.v4292 == INT64_C(10)))) {
yr1909_LexError(y_str("a floating-point literal is decimal", 35));
}
if ((yr1892_At(v1222) == 69)) {
v1222 = y_range(y_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((yr1892_At(v1222) == 45)) || ((yr1892_At(v1222) == 43)))) {
v1222 = y_range(y_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
while (yr1014_IsDigit(yr1892_At(v1222))) {
Y_TICK();
v1222 = y_range(y_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1026_SB();
if (F.p1924) {
yr1037_SA(y_str("-", 1));
}
F.lo4394 = F.v4295;
F.hi4395 = y_sub(v1222, INT64_C(1));
{ rt_int hi4399 = F.hi4395;
for (rt_int i4398 = F.lo4394; i4398 <= hi4399; i4398++) { F.c_4397 = i4398; Y_TICK();
yr1031_SC(((unsigned char *)(v913).p)[y_ix1(v913, F.c_4397)]);
if (i4398 == hi4399) break;
}}
F.v4324 = yr1056_SE();
yr1885_AddTok(v222, F.v4324);
y_use = F.yu; return;
}
F.v4309 = INT64_C(0);
F.lo4404 = F.v4295;
F.hi4405 = y_sub(F.v4297, INT64_C(1));
{ rt_int hi4409 = F.hi4405;
for (rt_int i4408 = F.lo4404; i4408 <= hi4409; i4408++) { F.c_4407 = i4408; Y_TICK();
F.v4312 = yr1903_DigitVal(((unsigned char *)(v913).p)[y_ix1(v913, F.c_4407)]);
if ((F.v4309 > (y_div((y_sub(v906, F.v4312)), F.v4292)))) {
yr1909_LexError(y_str("integer literal too large", 25));
}
F.v4309 = y_range(y_add((y_mul(F.v4309, F.v4292)), F.v4312), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (i4408 == hi4409) break;
}}
if (F.p1924) {
F.v4309 = y_range(y_neg(F.v4309), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yr1885_AddTok(v216, F.v4309);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1929_LexString(void) {
struct yf1930 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
yr1026_SB();
for (;;) {
Y_TICK();
v1222 = y_range(y_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(yr1892_At(v1222) == 34))) {
Y_TICK();
if ((((yr1892_At(v1222) == 10)) || ((v1222 > v1219)))) {
v927 = 0;
yr1909_LexError(y_str("a string must close on its line", 31));
}
yr1031_SC(yr1892_At(v1222));
v1222 = y_range(y_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1222 = y_range(y_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4420 = v1222;
F.v4422 = INT64_C(0);
F.v4424 = 1;
while (F.v4424) {
Y_TICK();
if (((((yr1892_At(F.v4420) == 32)) || ((yr1892_At(F.v4420) == 9))) || ((yr1892_At(F.v4420) == 13)))) {
F.v4420 = y_range(y_add(F.v4420, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr1892_At(F.v4420) == 10)) {
F.v4422 = y_range(y_add(F.v4422, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4420 = y_range(y_add(F.v4420, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v4424 = 0;
}
}
if ((!(yr1892_At(F.v4420) == 34))) {
goto yl_4425;
}
v1225 = y_range(y_add(v1225, F.v4422), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1222 = F.v4420;
}
yl_4425: ;
F.v4418 = yr1056_SE();
yr1885_AddTok(v228, F.v4418);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr1934_Lex(void) {
struct yf1935 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
v1222 = v1216;
while ((v1222 <= v1219)) {
Y_TICK();
F.v4453 = ((unsigned char *)(v913).p)[y_ix1(v913, v1222)];
if ((F.v4453 == 10)) {
v1225 = y_range(y_add(v1225, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1222 = y_range(y_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((((F.v4453 == 32)) || ((F.v4453 == 9))) || ((F.v4453 == 13))) || ((F.v4453 == 12)))) {
v1222 = y_range(y_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v4453 == 40)) && ((yr1892_At(y_range(y_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 42)))) {
v1222 = y_range(y_add(v1222, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!((((yr1892_At(v1222) == 42)) && ((yr1892_At(y_range(y_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 41)))))) {
Y_TICK();
if ((((yr1892_At(v1222) == 10)) || ((v1222 > v1219)))) {
yr1909_LexError(y_str("a comment must close on its line", 32));
}
v1222 = y_range(y_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1222 = y_range(y_add(v1222, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((yr1014_IsDigit(F.v4453) || ((((v1228 == INT64_C(16))) && ((yr1903_DigitVal(F.v4453) < INT64_C(16))))))) {
yr1923_LexNumber(0);
} else if (((((((F.v4453 == 45)) || ((F.v4453 == 43)))) && (!yr1898_EndsOperand())) && ((yr1014_IsDigit(yr1892_At(y_range(y_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || ((((v1228 == INT64_C(16))) && ((yr1903_DigitVal(yr1892_At(y_range(y_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) < INT64_C(16))))))))) {
v1222 = y_range(y_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1923_LexNumber((F.v4453 == 45));
} else if ((!(v1228 == INT64_C(0)))) {
yr1909_LexError(y_str("a BASE word is followed by a number (IV.B)", 42));
} else if (yr1008_IsLetter(F.v4453)) {
F.v4455 = v1222;
while ((yr1008_IsLetter(yr1892_At(v1222)) || yr1014_IsDigit(yr1892_At(v1222)))) {
Y_TICK();
v1222 = y_range(y_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v4463 = yr1068_Intern(F.v4455, y_range(y_sub(v1222, F.v4455), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((F.v4463 == v252)) {
v1228 = INT64_C(2);
} else if ((F.v4463 == v255)) {
v1228 = INT64_C(8);
} else if ((F.v4463 == v258)) {
v1228 = INT64_C(10);
} else if ((F.v4463 == v261)) {
v1228 = INT64_C(16);
} else if ((F.v4463 <= v492)) {
yr1885_AddTok(v210, F.v4463);
} else {
yr1885_AddTok(v207, F.v4463);
}
} else if ((F.v4453 == 39)) {
F.v4455 = y_range(y_add(v1222, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4457 = F.v4455;
while ((!(yr1892_At(F.v4457) == 39))) {
Y_TICK();
if (((((yr1892_At(F.v4457) == 10)) || ((yr1892_At(F.v4457) == 34))) || ((F.v4457 > v1219)))) {
yr1909_LexError(y_str("bad character literal", 21));
}
F.v4457 = y_range(y_add(F.v4457, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v4457 == F.v4455)) {
yr1909_LexError(y_str("empty character literal", 23));
}
F.v4463 = yr1068_Intern(F.v4455, y_range(y_sub(F.v4457, F.v4455), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1885_AddTok(v225, F.v4463);
v1222 = y_range(y_add(F.v4457, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v4453 == 34)) {
yr1929_LexString();
} else {
F.v4459 = INT64_C(0);
F.v4457 = y_range(y_add(v492, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((F.v4459 == INT64_C(0))) && ((F.v4457 <= v621)))) {
Y_TICK();
F.v4461 = ((rt_int *)(v920).p)[y_ix1(v920, F.v4457)];
F.v4467 = 1;
F.lo4542 = INT64_C(0);
F.hi4543 = y_sub(F.v4461, INT64_C(1));
{ rt_int hi4547 = F.hi4543;
for (rt_int i4546 = F.lo4542; i4546 <= hi4547; i4546++) { F.c_4545 = i4546; Y_TICK();
if ((!(yr1892_At(y_range(y_add(v1222, F.c_4545), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == ((unsigned char *)(v913).p)[y_ix1(v913, y_add(((rt_int *)(v918).p)[y_ix1(v918, F.v4457)], F.c_4545))]))) {
F.v4467 = 0;
}
if (i4546 == hi4547) break;
}}
if (F.v4467) {
F.v4459 = F.v4457;
}
F.v4457 = y_range(y_add(F.v4457, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v4459 == INT64_C(0))) {
yr1909_LexError(y_str("a character that is not in the language", 39));
}
yr1885_AddTok(v213, F.v4459);
v1222 = y_range(y_add(v1222, ((rt_int *)(v920).p)[y_ix1(v920, F.v4459)]), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1885_AddTok(v204, INT64_C(0));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr1939_NewNode(rt_int a_p1940, rt_int a_p1941) {
struct yf1942 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1940 = a_p1940;
F.p1941 = a_p1941;
({ F.v4561 = y_new(sizeof(yR105)); });
(*(yR105 *)y_deref(F.v4561)) = ((yR105){ .f_kind = F.p1940, .f_line = F.p1941, .f_ival = INT64_C(0), .f_flag = INT64_C(0), .f_name = INT64_C(0), .f_text = INT64_C(0), .f_a = ((void *)0), .f_b = ((void *)0), .f_c = ((void *)0), .f_d = ((void *)0), .f_e = ((void *)0), .f_next = ((void *)0), .f_rep = ((void *)0), .f_sym = ((void *)0), .f_x = ((void *)0) });
{ void * rv4566 = F.v4561;
y_use = F.yu; return rv4566; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1946_Link(void * * a_p1947, void * * a_p1948, void * a_p1949) {
struct yf1950 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1947 = a_p1947;
F.p1948 = a_p1948;
F.p1949 = a_p1949;
if (((*F.p1947) == ((void *)0))) {
(*F.p1947) = F.p1949;
} else {
((*(yR105 *)y_deref((*F.p1948)))).f_next = F.p1949;
}
(*F.p1948) = F.p1949;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1954_Count(void * a_p1955) {
struct yf1956 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1955 = a_p1955;
F.v4574 = INT64_C(0);
F.v4577 = F.p1955;
while ((!(F.v4577 == ((void *)0)))) {
Y_TICK();
F.v4574 = y_range(y_add(F.v4574, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v4577 = ((*(yR105 *)y_deref(F.v4577))).f_next;
}
{ rt_int rv4580 = F.v4574;
y_use = F.yu; return rv4580; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1960_TK(void) {
struct yf1961 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
{ rt_int rv4582 = ((rt_int *)(v1207).p)[y_ix1(v1207, v1249)];
y_use = F.yu; return rv4582; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1965_TV(void) {
struct yf1966 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
{ rt_int rv4584 = ((rt_int *)(v1209).p)[y_ix1(v1209, v1249)];
y_use = F.yu; return rv4584; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1970_TLn(void) {
struct yf1971 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
{ rt_int rv4586 = ((rt_int *)(v1211).p)[y_ix1(v1211, v1249)];
y_use = F.yu; return rv4586; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1975_IsAt(rt_int a_p1976, rt_int a_p1977) {
struct yf1978 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1976 = a_p1976;
F.p1977 = a_p1977;
F.v4591 = ((rt_int *)(v1207).p)[y_ix1(v1207, y_add(v1249, F.p1976))];
{ rt_int rv4594 = (((((F.v4591 == v210)) || ((F.v4591 == v213)))) && ((((rt_int *)(v1209).p)[y_ix1(v1209, y_add(v1249, F.p1976))] == F.p1977)));
y_use = F.yu; return rv4594; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1982_Is(rt_int a_p1983) {
struct yf1984 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1983 = a_p1983;
{ rt_int rv4598 = yr1975_IsAt(INT64_C(0), F.p1983);
y_use = F.yu; return rv4598; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1988_IsIdAt(rt_int a_p1989) {
struct yf1990 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p1989 = a_p1989;
{ rt_int rv4602 = (((rt_int *)(v1207).p)[y_ix1(v1207, y_add(v1249, F.p1989))] == v207);
y_use = F.yu; return rv4602; }
rt_raise(Y_X_NO_RETURN);
}
static void yr1994_Skip(void) {
struct yf1995 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((!(((rt_int *)(v1207).p)[y_ix1(v1207, v1249)] == v204))) {
v1249 = y_range(y_add(v1249, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr1999_Accept(rt_int a_p2000) {
struct yf2001 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2000 = a_p2000;
if (yr1982_Is(F.p2000)) {
yr1994_Skip();
{ rt_int rv4609 = 1;
y_use = F.yu; return rv4609; }
}
{ rt_int rv4611 = 0;
y_use = F.yu; return rv4611; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2005_TokText(void) {
struct yf2006 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4614 = yr1960_TK();
if ((((((F.v4614 == v207)) || ((F.v4614 == v210))) || ((F.v4614 == v213))) || ((F.v4614 == v225)))) {
{ rt_int rv4615 = y_range(yr1965_TV(), INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv4615; }
}
if ((F.v4614 == v204)) {
{ rt_int rv4617 = yr1061_T(y_str("the end of the text", 19));
y_use = F.yu; return rv4617; }
}
if ((F.v4614 == v216)) {
yr1026_SB();
yr1050_SI(yr1965_TV());
{ rt_int rv4618 = yr1056_SE();
y_use = F.yu; return rv4618; }
}
{ rt_int rv4620 = yr1061_T(y_str("a literal", 9));
y_use = F.yu; return rv4620; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2010_Expect(rt_int a_p2011) {
struct yf2012 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2011 = a_p2011;
if ((!yr1999_Accept(F.p2011))) {
yr1026_SB();
yr1037_SA(y_str("expected ", 9));
yr1044_ST(y_range(F.p2011, INT64_C(0), INT64_C(4000000)));
yr1037_SA(y_str(", found ", 8));
yr1044_ST(yr2005_TokText());
F.v4624 = yr1056_SE();
yr1157_Fail(yr1970_TLn(), F.v4624);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2016_Ident(void) {
struct yf2017 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((!(yr1960_TK() == v207))) {
yr1026_SB();
yr1037_SA(y_str("expected an identifier, found ", 30));
yr1044_ST(yr2005_TokText());
F.v4629 = yr1056_SE();
yr1157_Fail(yr1970_TLn(), F.v4629);
}
F.v4629 = y_range(yr1965_TV(), INT64_C(0), INT64_C(4000000));
yr1994_Skip();
{ rt_int rv4631 = F.v4629;
y_use = F.yu; return rv4631; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2021_CloseName(rt_int a_p2022, rt_int a_p2023) {
struct yf2024 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2022 = a_p2022;
F.p2023 = a_p2023;
if (((((yr1960_TK() == v207)) || ((yr1960_TK() == v210))) || ((yr1960_TK() == v213)))) {
F.v4636 = y_range(yr1965_TV(), INT64_C(0), INT64_C(4000000));
if ((F.v4636 == F.p2022)) {
yr1994_Skip();
y_use = F.yu; return;
}
}
yr1186_FailN(F.p2023, F.p2022, y_str(" is closed with another name", 28));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2028_ExtendedId(void) {
struct yf2029 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4640 = y_range(yr1965_TV(), INT64_C(0), INT64_C(4000000));
if ((yr1960_TK() == v207)) {
yr1994_Skip();
{ rt_int rv4641 = F.v4640;
y_use = F.yu; return rv4641; }
}
if ((((yr1960_TK() == v210)) && (((((((((F.v4640 == v390)) || ((F.v4640 == v237))) || ((F.v4640 == v399))) || ((F.v4640 == v276))) || ((F.v4640 == v378))) || ((F.v4640 == v489))) || ((F.v4640 == v360)))))) {
yr1994_Skip();
{ rt_int rv4642 = F.v4640;
y_use = F.yu; return rv4642; }
}
if (((((((((((((yr1960_TK() == v213)) && ((!(F.v4640 == v594)))) && ((!(F.v4640 == v597)))) && ((!(F.v4640 == v600)))) && ((!(F.v4640 == v603)))) && ((!(F.v4640 == v606)))) && ((!(F.v4640 == v609)))) && ((!(F.v4640 == v612)))) && ((!(F.v4640 == v615)))) && ((!(F.v4640 == v537)))) && ((!(F.v4640 == v534))))) {
yr1994_Skip();
{ rt_int rv4643 = F.v4640;
y_use = F.yu; return rv4643; }
}
yr1178_FailS(yr1970_TLn(), y_str("expected a name", 15));
{ rt_int rv4646 = INT64_C(0);
y_use = F.yu; return rv4646; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2033_IsLabel(rt_int a_p2034) {
struct yf2035 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2034 = a_p2034;
F.v4650 = v1252;
while ((!(F.v4650 == ((void *)0)))) {
Y_TICK();
if ((((*(yR105 *)y_deref(F.v4650))).f_name == F.p2034)) {
{ rt_int rv4652 = 1;
y_use = F.yu; return rv4652; }
}
F.v4650 = ((*(yR105 *)y_deref(F.v4650))).f_next;
}
{ rt_int rv4654 = 0;
y_use = F.yu; return rv4654; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2039_ImportItem(void) {
struct yf2040 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4657 = yr1939_NewNode(v627, yr1970_TLn());
((*(yR105 *)y_deref(F.v4657))).f_name = yr2028_ExtendedId();
if ((yr1988_IsIdAt(INT64_C(0)) && ((yr1965_TV() == v1254)))) {
yr1994_Skip();
((*(yR105 *)y_deref(F.v4657))).f_text = yr2016_Ident();
}
if (yr1999_Accept(v243)) {
((*(yR105 *)y_deref(F.v4657))).f_ival = yr2028_ExtendedId();
}
{ void * rv4659 = F.v4657;
y_use = F.yu; return rv4659; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2044_ParseModule(void) {
struct yf2045 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4662 = yr1939_NewNode(v624, yr1970_TLn());
F.v4664 = ((void *)0);
F.v4666 = ((void *)0);
F.v4668 = ((void *)0);
if (yr1999_Accept(v384)) {
((*(yR105 *)y_deref(F.v4662))).f_flag = INT64_C(1);
} else {
yr2010_Expect(v381);
}
((*(yR105 *)y_deref(F.v4662))).f_name = yr2016_Ident();
while (yr1999_Accept(v357)) {
Y_TICK();
for (;;) {
Y_TICK();
F.v4664 = yr2039_ImportItem();
yr1946_Link(&((*(yR105 *)y_deref(F.v4662))).f_a, &F.v4666, F.v4664);
if ((!yr1999_Accept(v606))) {
goto yl_4672;
}
}
yl_4672: ;
yr2010_Expect(v609);
}
while (yr1999_Accept(v336)) {
Y_TICK();
F.v4670 = INT64_C(0);
if ((((yr1982_Is(v396) || yr1982_Is(v474)) || yr1982_Is(v429)) || yr1982_Is(v483))) {
F.v4670 = yr1965_TV();
yr1994_Skip();
}
for (;;) {
Y_TICK();
F.v4664 = yr2039_ImportItem();
((*(yR105 *)y_deref(F.v4664))).f_flag = F.v4670;
yr1946_Link(&((*(yR105 *)y_deref(F.v4662))).f_b, &F.v4668, F.v4664);
if ((!yr1999_Accept(v606))) {
goto yl_4674;
}
}
yl_4674: ;
yr2010_Expect(v609);
}
((*(yR105 *)y_deref(F.v4662))).f_c = yr2054_ParseBlock();
if ((((*(yR105 *)y_deref(F.v4662))).f_flag == INT64_C(1))) {
yr2010_Expect(v309);
} else {
yr2010_Expect(v306);
}
yr2021_CloseName(((*(yR105 *)y_deref(F.v4662))).f_name, ((*(yR105 *)y_deref(F.v4662))).f_line);
{ void * rv4676 = F.v4662;
y_use = F.yu; return rv4676; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2049_IsDeclWord(void) {
struct yf2050 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((!(yr1960_TK() == v210))) {
{ rt_int rv4681 = 0;
y_use = F.yu; return rv4681; }
}
F.v4679 = yr1965_TV();
{ rt_int rv4682 = (((((((((((((F.v4679 == v270)) || ((F.v4679 == v483))) || ((F.v4679 == v372))) || ((F.v4679 == v477))) || ((F.v4679 == v438))) || ((F.v4679 == v348))) || ((F.v4679 == v420))) || ((F.v4679 == v381))) || ((F.v4679 == v384))) || ((F.v4679 == v465))) || ((F.v4679 == v366))) || ((F.v4679 == v423)));
y_use = F.yu; return rv4682; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2054_ParseBlock(void) {
struct yf2055 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4685 = yr1939_NewNode(v630, yr1970_TLn());
F.v4687 = ((void *)0);
F.v4689 = v1252;
while (yr2049_IsDeclWord()) {
Y_TICK();
yr2081_ParseDeclGroup(&((*(yR105 *)y_deref(F.v4685))).f_a, &F.v4687);
while (yr1999_Accept(v609)) {
Y_TICK();
}
}
if (yr1982_Is(v330)) {
((*(yR105 *)y_deref(F.v4685))).f_b = yr2059_ParseHandler();
F.v4691 = ((*(yR105 *)y_deref(F.v4685))).f_b;
if (yr1999_Accept(v609)) {
}
}
((*(yR105 *)y_deref(F.v4685))).f_c = yr2145_ParseStatements(1);
v1252 = F.v4689;
{ void * rv4693 = F.v4685;
y_use = F.yu; return rv4693; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2059_ParseHandler(void) {
struct yf2060 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4696 = yr1939_NewNode(v633, yr1970_TLn());
F.v4698 = ((void *)0);
F.v4700 = ((void *)0);
F.v4702 = ((void *)0);
F.v4704 = ((void *)0);
yr2010_Expect(v330);
while (yr1999_Accept(v267)) {
Y_TICK();
F.v4698 = yr1939_NewNode(v636, yr1970_TLn());
F.v4704 = ((void *)0);
for (;;) {
Y_TICK();
F.v4702 = yr1939_NewNode(v669, yr1970_TLn());
((*(yR105 *)y_deref(F.v4702))).f_name = yr2016_Ident();
yr1946_Link(&((*(yR105 *)y_deref(F.v4698))).f_a, &F.v4704, F.v4702);
if ((!yr1999_Accept(v606))) {
goto yl_4705;
}
}
yl_4705: ;
yr2010_Expect(v534);
((*(yR105 *)y_deref(F.v4698))).f_b = yr2145_ParseStatements(0);
yr1946_Link(&((*(yR105 *)y_deref(F.v4696))).f_a, &F.v4700, F.v4698);
}
if (yr1999_Accept(v282)) {
((*(yR105 *)y_deref(F.v4696))).f_flag = INT64_C(1);
((*(yR105 *)y_deref(F.v4696))).f_b = yr2145_ParseStatements(0);
}
yr2010_Expect(v291);
{ void * rv4709 = F.v4696;
y_use = F.yu; return rv4709; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2064_ParseNames(void) {
struct yf2065 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4712 = ((void *)0);
F.v4714 = ((void *)0);
F.v4716 = ((void *)0);
for (;;) {
Y_TICK();
F.v4716 = yr1939_NewNode(v669, yr1970_TLn());
((*(yR105 *)y_deref(F.v4716))).f_name = yr2016_Ident();
if (yr1999_Accept(v249)) {
((*(yR105 *)y_deref(F.v4716))).f_a = yr2207_ParseExpr();
}
yr1946_Link(&F.v4712, &F.v4714, F.v4716);
if ((!yr1999_Accept(v606))) {
goto yl_4717;
}
}
yl_4717: ;
{ void * rv4718 = F.v4712;
y_use = F.yu; return rv4718; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2069_SimpleEntry(rt_int a_p2070) {
struct yf2071 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2070 = a_p2070;
if ((F.p2070 == v270)) {
F.v4722 = yr1939_NewNode(v639, yr1970_TLn());
((*(yR105 *)y_deref(F.v4722))).f_a = yr2064_ParseNames();
yr2010_Expect(v612);
((*(yR105 *)y_deref(F.v4722))).f_b = yr2110_ParseRep();
yr2010_Expect(v585);
((*(yR105 *)y_deref(F.v4722))).f_c = yr2207_ParseExpr();
} else if ((F.p2070 == v483)) {
F.v4722 = yr1939_NewNode(v642, yr1970_TLn());
((*(yR105 *)y_deref(F.v4722))).f_a = yr2064_ParseNames();
yr2010_Expect(v612);
((*(yR105 *)y_deref(F.v4722))).f_b = yr2110_ParseRep();
if (yr1999_Accept(v531)) {
((*(yR105 *)y_deref(F.v4722))).f_c = yr2207_ParseExpr();
}
} else if ((F.p2070 == v477)) {
F.v4722 = yr1939_NewNode(v648, yr1970_TLn());
((*(yR105 *)y_deref(F.v4722))).f_name = yr2016_Ident();
yr2010_Expect(v585);
((*(yR105 *)y_deref(F.v4722))).f_b = yr2130_ParseConcrete1();
} else {
F.v4722 = yr1939_NewNode(v651, yr1970_TLn());
((*(yR105 *)y_deref(F.v4722))).f_name = yr2016_Ident();
yr2010_Expect(v585);
((*(yR105 *)y_deref(F.v4722))).f_b = yr2110_ParseRep();
}
{ void * rv4723 = F.v4722;
y_use = F.yu; return rv4723; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2075_Continues(rt_int a_p2076) {
struct yf2077 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2076 = a_p2076;
if ((!((yr1982_Is(v609) && yr1988_IsIdAt(INT64_C(1)))))) {
{ rt_int rv4728 = 0;
y_use = F.yu; return rv4728; }
}
if (yr2033_IsLabel(y_range(((rt_int *)(v1209).p)[y_ix1(v1209, y_add(v1249, INT64_C(1)))], INT64_C(0), INT64_C(4000000)))) {
{ rt_int rv4732 = 0;
y_use = F.yu; return rv4732; }
}
if ((((F.p2076 == v270)) || ((F.p2076 == v483)))) {
{ rt_int rv4736 = ((yr1975_IsAt(INT64_C(2), v606) || yr1975_IsAt(INT64_C(2), v612)) || yr1975_IsAt(INT64_C(2), v249));
y_use = F.yu; return rv4736; }
}
{ rt_int rv4738 = yr1975_IsAt(INT64_C(2), v585);
y_use = F.yu; return rv4738; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2081_ParseDeclGroup(void * * a_p2082, void * * a_p2083) {
struct yf2084 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2082 = a_p2082;
F.p2083 = a_p2083;
F.v4743 = yr1965_TV();
if ((((((F.v4743 == v270)) || ((F.v4743 == v483))) || ((F.v4743 == v477))) || ((F.v4743 == v438)))) {
yr1994_Skip();
yr1946_Link(&(*F.p2082), &(*F.p2083), yr2069_SimpleEntry(F.v4743));
while (yr2075_Continues(F.v4743)) {
Y_TICK();
yr1994_Skip();
yr1946_Link(&(*F.p2082), &(*F.p2083), yr2069_SimpleEntry(F.v4743));
}
y_use = F.yu; return;
}
if ((F.v4743 == v372)) {
F.v4745 = yr1939_NewNode(v645, yr1970_TLn());
yr1994_Skip();
F.v4749 = ((void *)0);
for (;;) {
Y_TICK();
F.v4747 = yr1939_NewNode(v669, yr1970_TLn());
((*(yR105 *)y_deref(F.v4747))).f_name = yr2016_Ident();
yr1946_Link(&((*(yR105 *)y_deref(F.v4745))).f_a, &F.v4749, F.v4747);
if ((!yr1999_Accept(v606))) {
goto yl_4750;
}
}
yl_4750: ;
F.v4747 = ((*(yR105 *)y_deref(F.v4745))).f_a;
while ((!(F.v4747 == ((void *)0)))) {
Y_TICK();
((*(yR105 *)y_deref(F.v4745))).f_b = yr1939_NewNode(v669, ((*(yR105 *)y_deref(F.v4747))).f_line);
((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.v4745))).f_b))).f_name = ((*(yR105 *)y_deref(F.v4747))).f_name;
((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.v4745))).f_b))).f_next = v1252;
v1252 = ((*(yR105 *)y_deref(F.v4745))).f_b;
F.v4747 = ((*(yR105 *)y_deref(F.v4747))).f_next;
}
((*(yR105 *)y_deref(F.v4745))).f_b = ((void *)0);
yr1946_Link(&(*F.p2082), &(*F.p2083), F.v4745);
y_use = F.yu; return;
}
yr1946_Link(&(*F.p2082), &(*F.p2083), yr2088_ParseDecl());
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2088_ParseDecl(void) {
struct yf2089 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4759 = yr1965_TV();
F.v4761 = yr1970_TLn();
if ((((F.v4759 == v348)) || ((F.v4759 == v420)))) {
F.v4753 = yr1939_NewNode(v654, F.v4761);
yr1994_Skip();
if ((F.v4759 == v348)) {
((*(yR105 *)y_deref(F.v4753))).f_flag = INT64_C(1);
}
if ((yr1982_Is(v339) || yr1982_Is(v435))) {
((*(yR105 *)y_deref(F.v4753))).f_ival = yr1965_TV();
yr1994_Skip();
}
((*(yR105 *)y_deref(F.v4753))).f_name = yr2028_ExtendedId();
yr2093_ParseFormals(F.v4753);
if (yr1999_Accept(v363)) {
((*(yR105 *)y_deref(F.v4753))).f_e = yr1939_NewNode(v669, F.v4761);
}
((*(yR105 *)y_deref(F.v4753))).f_c = yr2054_ParseBlock();
if ((F.v4759 == v348)) {
yr2010_Expect(v297);
} else {
yr2010_Expect(v312);
}
yr2021_CloseName(((*(yR105 *)y_deref(F.v4753))).f_name, F.v4761);
{ void * rv4765 = F.v4753;
y_use = F.yu; return rv4765; }
}
if ((((F.v4759 == v381)) || ((F.v4759 == v384)))) {
{ void * rv4766 = yr2044_ParseModule();
y_use = F.yu; return rv4766; }
}
if ((F.v4759 == v465)) {
F.v4753 = yr1939_NewNode(v660, F.v4761);
yr1994_Skip();
((*(yR105 *)y_deref(F.v4753))).f_name = yr2016_Ident();
yr2010_Expect(v594);
F.v4757 = ((void *)0);
for (;;) {
Y_TICK();
F.v4755 = yr1939_NewNode(v669, yr1970_TLn());
((*(yR105 *)y_deref(F.v4755))).f_name = yr2016_Ident();
yr1946_Link(&((*(yR105 *)y_deref(F.v4753))).f_a, &F.v4757, F.v4755);
if ((!yr1999_Accept(v606))) {
goto yl_4767;
}
}
yl_4767: ;
yr2010_Expect(v597);
F.v4763 = v1249;
((*(yR105 *)y_deref(F.v4753))).f_b = yr2044_ParseModule();
((*(yR105 *)y_deref(F.v4753))).f_ival = F.v4763;
((*(yR105 *)y_deref(F.v4753))).f_flag = v1249;
yr2010_Expect(v324);
yr2021_CloseName(((*(yR105 *)y_deref(F.v4753))).f_name, F.v4761);
{ void * rv4768 = F.v4753;
y_use = F.yu; return rv4768; }
}
if ((F.v4759 == v366)) {
F.v4753 = yr1939_NewNode(v663, F.v4761);
yr1994_Skip();
((*(yR105 *)y_deref(F.v4753))).f_name = yr2016_Ident();
yr2010_Expect(v594);
F.v4757 = ((void *)0);
for (;;) {
Y_TICK();
F.v4755 = yr1939_NewNode(v669, yr1970_TLn());
if ((yr1960_TK() == v216)) {
((*(yR105 *)y_deref(F.v4755))).f_flag = INT64_C(1);
((*(yR105 *)y_deref(F.v4755))).f_ival = yr1965_TV();
yr1994_Skip();
} else {
((*(yR105 *)y_deref(F.v4755))).f_name = yr2028_ExtendedId();
}
yr1946_Link(&((*(yR105 *)y_deref(F.v4753))).f_a, &F.v4757, F.v4755);
if ((!yr1999_Accept(v606))) {
goto yl_4769;
}
}
yl_4769: ;
yr2010_Expect(v597);
{ void * rv4771 = F.v4753;
y_use = F.yu; return rv4771; }
}
if ((F.v4759 == v423)) {
F.v4753 = yr1939_NewNode(v666, F.v4761);
yr1994_Skip();
((*(yR105 *)y_deref(F.v4753))).f_name = yr2016_Ident();
yr2093_ParseFormals(F.v4753);
if ((!(((*(yR105 *)y_deref(F.v4753))).f_b == ((void *)0)))) {
yr1178_FailS(F.v4761, y_str("a process returns no value", 26));
}
if (yr1999_Accept(v417)) {
((*(yR105 *)y_deref(F.v4753))).f_d = yr2207_ParseExpr();
}
if (yr1999_Accept(v369)) {
((*(yR105 *)y_deref(F.v4753))).f_e = yr2207_ParseExpr();
}
if (yr1999_Accept(v459)) {
((*(yR105 *)y_deref(F.v4753))).f_x = yr2207_ParseExpr();
}
((*(yR105 *)y_deref(F.v4753))).f_c = yr2054_ParseBlock();
yr2010_Expect(v315);
yr2021_CloseName(((*(yR105 *)y_deref(F.v4753))).f_name, F.v4761);
{ void * rv4773 = F.v4753;
y_use = F.yu; return rv4773; }
}
yr1178_FailS(F.v4761, y_str("expected a declaration", 22));
{ void * rv4775 = ((void *)0);
y_use = F.yu; return rv4775; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2093_ParseFormals(void * a_p2094) {
struct yf2095 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2094 = a_p2094;
F.v4779 = ((void *)0);
F.v4781 = ((void *)0);
if (yr1999_Accept(v444)) {
((*(yR105 *)y_deref(F.p2094))).f_b = yr2110_ParseRep();
}
yr2010_Expect(v594);
while ((!yr1982_Is(v597))) {
Y_TICK();
if (yr1999_Accept(v270)) {
F.v4783 = v897;
} else if (yr1999_Accept(v405)) {
F.v4783 = v900;
} else if (yr1999_Accept(v483)) {
F.v4783 = v903;
} else {
yr1178_FailS(yr1970_TLn(), y_str("a formal parameter is CONST, OUT or VAR", 39));
}
for (;;) {
Y_TICK();
F.v4779 = yr1939_NewNode(v657, yr1970_TLn());
((*(yR105 *)y_deref(F.v4779))).f_ival = F.v4783;
((*(yR105 *)y_deref(F.v4779))).f_a = yr2064_ParseNames();
yr2010_Expect(v612);
((*(yR105 *)y_deref(F.v4779))).f_b = yr2099_ParseFormalRep();
yr1946_Link(&((*(yR105 *)y_deref(F.p2094))).f_a, &F.v4781, F.v4779);
if ((!((((yr1982_Is(v609) || yr1982_Is(v606))) && yr1988_IsIdAt(INT64_C(1)))))) {
goto yl_4785;
}
yr1994_Skip();
}
yl_4785: ;
if ((!yr1999_Accept(v609))) {
if ((!yr1999_Accept(v606))) {
yr2010_Expect(v597);
y_use = F.yu; return;
}
}
}
yr2010_Expect(v597);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2099_ParseFormalRep(void) {
struct yf2100 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if (((yr1982_Is(v240) && yr1975_IsAt(INT64_C(1), v594)) && ((yr1975_IsAt(INT64_C(3), v273) || ((yr1988_IsIdAt(INT64_C(3)) && ((((rt_int *)(v1209).p)[y_ix1(v1209, y_add(v1249, INT64_C(3)))] == v1257)))))))) {
F.v4789 = yr1939_NewNode(v696, yr1970_TLn());
yr1994_Skip();
yr1994_Skip();
((*(yR105 *)y_deref(F.v4789))).f_a = yr2207_ParseExpr();
yr1994_Skip();
yr2010_Expect(v393);
((*(yR105 *)y_deref(F.v4789))).f_b = yr2110_ParseRep();
yr2010_Expect(v597);
{ void * rv4795 = F.v4789;
y_use = F.yu; return rv4795; }
}
if (yr1982_Is(v462)) {
F.v4789 = yr1939_NewNode(v699, yr1970_TLn());
yr1994_Skip();
{ void * rv4796 = F.v4789;
y_use = F.yu; return rv4796; }
}
{ void * rv4797 = yr2110_ParseRep();
y_use = F.yu; return rv4797; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2104_IsStructWord(rt_int a_p2105) {
struct yf2106 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2105 = a_p2105;
F.v4801 = ((rt_int *)(v1209).p)[y_ix1(v1209, y_add(v1249, F.p2105))];
if ((!(((rt_int *)(v1207).p)[y_ix1(v1207, y_add(v1249, F.p2105))] == v210))) {
{ rt_int rv4805 = 0;
y_use = F.yu; return rv4805; }
}
{ rt_int rv4806 = (((((((((F.v4801 == v480)) || ((F.v4801 == v402))) || ((F.v4801 == v234))) || ((F.v4801 == v240))) || ((F.v4801 == v432))) || ((F.v4801 == v342))) || ((F.v4801 == v411))) || ((F.v4801 == v453)));
y_use = F.yu; return rv4806; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2110_ParseRep(void) {
struct yf2111 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((yr1988_IsIdAt(INT64_C(0)) && ((yr2104_IsStructWord(INT64_C(1)) || ((yr1988_IsIdAt(INT64_C(1)) && yr1975_IsAt(INT64_C(2), v600))))))) {
F.v4809 = yr2016_Ident();
F.v4811 = yr2115_ParseConcrete();
((*(yR105 *)y_deref(F.v4811))).f_text = F.v4809;
{ void * rv4816 = F.v4811;
y_use = F.yu; return rv4816; }
}
{ void * rv4817 = yr2115_ParseConcrete();
y_use = F.yu; return rv4817; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2115_ParseConcrete(void) {
struct yf2116 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4820 = yr2130_ParseConcrete1();
if ((yr1982_Is(v408) || yr1982_Is(v231))) {
F.v4822 = yr1939_NewNode(v669, yr1970_TLn());
if (yr1999_Accept(v408)) {
((*(yR105 *)y_deref(F.v4822))).f_flag = INT64_C(1);
if (((((yr1960_TK() == v216)) || ((yr1960_TK() == v207))) || yr1982_Is(v594))) {
((*(yR105 *)y_deref(F.v4822))).f_a = yr2212_ParseSimple();
}
}
if (yr1999_Accept(v231)) {
((*(yR105 *)y_deref(F.v4822))).f_b = yr2212_ParseSimple();
}
((*(yR105 *)y_deref(F.v4820))).f_x = F.v4822;
}
{ void * rv4824 = F.v4820;
y_use = F.yu; return rv4824; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2120_ParseIds(void) {
struct yf2121 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4827 = ((void *)0);
F.v4829 = ((void *)0);
F.v4831 = ((void *)0);
for (;;) {
Y_TICK();
F.v4831 = yr1939_NewNode(v669, yr1970_TLn());
((*(yR105 *)y_deref(F.v4831))).f_name = yr2016_Ident();
yr1946_Link(&F.v4827, &F.v4829, F.v4831);
if ((!yr1999_Accept(v606))) {
goto yl_4832;
}
}
yl_4832: ;
{ void * rv4833 = F.v4827;
y_use = F.yu; return rv4833; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2125_ParseFieldGroups(void) {
struct yf2126 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4836 = ((void *)0);
F.v4838 = ((void *)0);
F.v4840 = ((void *)0);
while ((yr1982_Is(v270) || yr1982_Is(v483))) {
Y_TICK();
F.v4842 = yr1965_TV();
yr1994_Skip();
for (;;) {
Y_TICK();
F.v4840 = yr1939_NewNode(v705, yr1970_TLn());
((*(yR105 *)y_deref(F.v4840))).f_ival = F.v4842;
((*(yR105 *)y_deref(F.v4840))).f_a = yr2064_ParseNames();
yr2010_Expect(v612);
((*(yR105 *)y_deref(F.v4840))).f_b = yr2110_ParseRep();
yr1946_Link(&F.v4836, &F.v4838, F.v4840);
if ((!((yr1982_Is(v609) && yr1988_IsIdAt(INT64_C(1)))))) {
goto yl_4843;
}
yr1994_Skip();
}
yl_4843: ;
if ((!yr1999_Accept(v609))) {
{ void * rv4845 = F.v4836;
y_use = F.yu; return rv4845; }
}
}
{ void * rv4846 = F.v4836;
y_use = F.yu; return rv4846; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2130_ParseConcrete1(void) {
struct yf2131 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4863 = yr1970_TLn();
if ((yr1960_TK() == v207)) {
F.v4849 = yr1939_NewNode(v672, F.v4863);
((*(yR105 *)y_deref(F.v4849))).f_name = yr2016_Ident();
((*(yR105 *)y_deref(F.v4849))).f_a = yr2135_ParseQualifier();
{ void * rv4864 = F.v4849;
y_use = F.yu; return rv4864; }
}
if ((!(yr1960_TK() == v210))) {
yr1178_FailS(F.v4863, y_str("expected a representation", 25));
}
F.v4861 = yr1965_TV();
if ((((F.v4861 == v480)) || ((F.v4861 == v402)))) {
F.v4849 = yr1939_NewNode(v675, F.v4863);
if ((F.v4861 == v402)) {
((*(yR105 *)y_deref(F.v4849))).f_flag = INT64_C(1);
}
yr1994_Skip();
yr2010_Expect(v594);
((*(yR105 *)y_deref(F.v4849))).f_a = yr2120_ParseIds();
yr2010_Expect(v597);
((*(yR105 *)y_deref(F.v4849))).f_b = yr2135_ParseQualifier();
{ void * rv4867 = F.v4849;
y_use = F.yu; return rv4867; }
}
if ((F.v4861 == v234)) {
F.v4849 = yr1939_NewNode(v678, F.v4863);
yr1994_Skip();
yr2010_Expect(v594);
F.v4859 = ((void *)0);
for (;;) {
Y_TICK();
if ((!(yr1960_TK() == v225))) {
yr1178_FailS(yr1970_TLn(), y_str("an ALPHABET lists character literals", 36));
}
F.v4857 = yr1939_NewNode(v768, yr1970_TLn());
((*(yR105 *)y_deref(F.v4857))).f_text = y_range(yr1965_TV(), INT64_C(0), INT64_C(4000000));
yr1994_Skip();
yr1946_Link(&((*(yR105 *)y_deref(F.v4849))).f_a, &F.v4859, F.v4857);
if ((!yr1999_Accept(v606))) {
goto yl_4868;
}
}
yl_4868: ;
yr2010_Expect(v597);
((*(yR105 *)y_deref(F.v4849))).f_b = yr2135_ParseQualifier();
{ void * rv4870 = F.v4849;
y_use = F.yu; return rv4870; }
}
if ((F.v4861 == v240)) {
F.v4849 = yr1939_NewNode(v681, F.v4863);
yr1994_Skip();
yr2010_Expect(v594);
F.v4859 = ((void *)0);
for (;;) {
Y_TICK();
yr1946_Link(&((*(yR105 *)y_deref(F.v4849))).f_a, &F.v4859, yr2110_ParseRep());
if ((!yr1999_Accept(v606))) {
goto yl_4871;
}
}
yl_4871: ;
yr2010_Expect(v393);
((*(yR105 *)y_deref(F.v4849))).f_b = yr2110_ParseRep();
yr2010_Expect(v597);
{ void * rv4872 = F.v4849;
y_use = F.yu; return rv4872; }
}
if ((F.v4861 == v432)) {
F.v4849 = yr1939_NewNode(v684, F.v4863);
yr1994_Skip();
((*(yR105 *)y_deref(F.v4849))).f_a = yr2125_ParseFieldGroups();
if (yr1999_Accept(v450)) {
F.v4851 = yr1939_NewNode(v708, yr1970_TLn());
((*(yR105 *)y_deref(F.v4851))).f_name = yr2016_Ident();
yr2010_Expect(v612);
((*(yR105 *)y_deref(F.v4851))).f_b = yr2110_ParseRep();
F.v4855 = ((void *)0);
while (yr1999_Accept(v267)) {
Y_TICK();
F.v4853 = yr1939_NewNode(v711, yr1970_TLn());
F.v4859 = ((void *)0);
for (;;) {
Y_TICK();
yr1946_Link(&((*(yR105 *)y_deref(F.v4853))).f_a, &F.v4859, yr2207_ParseExpr());
if ((!yr1999_Accept(v606))) {
goto yl_4873;
}
}
yl_4873: ;
yr2010_Expect(v534);
((*(yR105 *)y_deref(F.v4853))).f_b = yr2125_ParseFieldGroups();
while (yr1999_Accept(v609)) {
Y_TICK();
}
yr1946_Link(&((*(yR105 *)y_deref(F.v4851))).f_a, &F.v4855, F.v4853);
}
yr2010_Expect(v321);
if (yr1999_Accept(v609)) {
}
((*(yR105 *)y_deref(F.v4849))).f_b = F.v4851;
}
yr2010_Expect(v318);
{ void * rv4874 = F.v4849;
y_use = F.yu; return rv4874; }
}
if (((((F.v4861 == v342)) || ((F.v4861 == v411))) || ((F.v4861 == v453)))) {
if ((F.v4861 == v342)) {
F.v4849 = yr1939_NewNode(v687, F.v4863);
} else if ((F.v4861 == v411)) {
F.v4849 = yr1939_NewNode(v690, F.v4863);
} else {
F.v4849 = yr1939_NewNode(v693, F.v4863);
}
yr1994_Skip();
yr2010_Expect(v594);
((*(yR105 *)y_deref(F.v4849))).f_a = yr2110_ParseRep();
yr2010_Expect(v597);
{ void * rv4875 = F.v4849;
y_use = F.yu; return rv4875; }
}
yr1178_FailS(F.v4863, y_str("expected a representation", 25));
{ void * rv4877 = ((void *)0);
y_use = F.yu; return rv4877; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2135_ParseQualifier(void) {
struct yf2136 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((!yr1982_Is(v600))) {
{ void * rv4881 = ((void *)0);
y_use = F.yu; return rv4881; }
}
F.v4880 = yr1939_NewNode(v702, yr1970_TLn());
yr1994_Skip();
((*(yR105 *)y_deref(F.v4880))).f_a = yr2207_ParseExpr();
yr2010_Expect(v537);
((*(yR105 *)y_deref(F.v4880))).f_b = yr2207_ParseExpr();
yr2010_Expect(v603);
if (yr1999_Accept(v447)) {
((*(yR105 *)y_deref(F.v4880))).f_c = yr2212_ParseSimple();
} else if (yr1999_Accept(v414)) {
((*(yR105 *)y_deref(F.v4880))).f_d = yr2212_ParseSimple();
}
{ void * rv4882 = F.v4880;
y_use = F.yu; return rv4882; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2140_IsStop(void) {
struct yf2141 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((yr1960_TK() == v204)) {
{ rt_int rv4887 = 1;
y_use = F.yu; return rv4887; }
}
if ((!(yr1960_TK() == v210))) {
{ rt_int rv4889 = 0;
y_use = F.yu; return rv4889; }
}
F.v4885 = yr1965_TV();
{ rt_int rv4890 = ((((((((((((((((F.v4885 == v285)) || ((F.v4885 == v282))) || ((F.v4885 == v300))) || ((F.v4885 == v267))) || ((F.v4885 == v321))) || ((F.v4885 == v327))) || ((F.v4885 == v294))) || ((F.v4885 == v303))) || ((F.v4885 == v288))) || ((F.v4885 == v291))) || ((F.v4885 == v312))) || ((F.v4885 == v297))) || ((F.v4885 == v315))) || ((F.v4885 == v306))) || ((F.v4885 == v309)));
y_use = F.yu; return rv4890; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2145_ParseStatements(rt_int a_p2146) {
struct yf2147 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2146 = a_p2146;
F.v4894 = ((void *)0);
F.v4896 = ((void *)0);
F.v4898 = ((void *)0);
for (;;) {
Y_TICK();
while (yr1999_Accept(v609)) {
Y_TICK();
}
if (yr2140_IsStop()) {
goto yl_4901;
}
F.v4900 = INT64_C(0);
if (((F.p2146 && yr1988_IsIdAt(INT64_C(0))) && yr1975_IsAt(INT64_C(1), v612))) {
F.v4900 = yr2016_Ident();
yr1994_Skip();
}
F.v4898 = yr2151_ParseStatement();
((*(yR105 *)y_deref(F.v4898))).f_text = F.v4900;
yr1946_Link(&F.v4894, &F.v4896, F.v4898);
if ((!yr1982_Is(v609))) {
goto yl_4901;
}
}
yl_4901: ;
{ void * rv4905 = F.v4894;
y_use = F.yu; return rv4905; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2151_ParseStatement(void) {
struct yf2152 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4922 = yr1970_TLn();
if ((yr1960_TK() == v210)) {
F.v4920 = yr1965_TV();
if ((F.v4920 == v246)) {
yr1994_Skip();
F.v4908 = yr1939_NewNode(v720, F.v4922);
((*(yR105 *)y_deref(F.v4908))).f_a = yr2207_ParseExpr();
{ void * rv4923 = F.v4908;
y_use = F.yu; return rv4923; }
}
if ((F.v4920 == v351)) {
yr1994_Skip();
F.v4908 = yr1939_NewNode(v723, F.v4922);
((*(yR105 *)y_deref(F.v4908))).f_name = yr2016_Ident();
{ void * rv4924 = F.v4908;
y_use = F.yu; return rv4924; }
}
if ((F.v4920 == v333)) {
yr1994_Skip();
F.v4908 = yr1939_NewNode(v726, F.v4922);
((*(yR105 *)y_deref(F.v4908))).f_name = yr2016_Ident();
{ void * rv4925 = F.v4908;
y_use = F.yu; return rv4925; }
}
if ((F.v4920 == v441)) {
yr1994_Skip();
F.v4908 = yr1939_NewNode(v729, F.v4922);
if ((!((yr1982_Is(v609) || yr2140_IsStop())))) {
((*(yR105 *)y_deref(F.v4908))).f_a = yr2207_ParseExpr();
}
{ void * rv4926 = F.v4908;
y_use = F.yu; return rv4926; }
}
if ((F.v4920 == v468)) {
yr1994_Skip();
{ void * rv4927 = yr1939_NewNode(v732, F.v4922);
y_use = F.yu; return rv4927; }
}
if ((F.v4920 == v426)) {
yr1994_Skip();
F.v4908 = yr1939_NewNode(v735, F.v4922);
if (yr1988_IsIdAt(INT64_C(0))) {
((*(yR105 *)y_deref(F.v4908))).f_name = yr2016_Ident();
}
{ void * rv4929 = F.v4908;
y_use = F.yu; return rv4929; }
}
if ((F.v4920 == v354)) {
yr1994_Skip();
F.v4908 = yr1939_NewNode(v738, F.v4922);
F.v4912 = ((void *)0);
F.v4910 = yr1939_NewNode(v756, F.v4922);
((*(yR105 *)y_deref(F.v4910))).f_a = yr2207_ParseExpr();
yr2010_Expect(v471);
((*(yR105 *)y_deref(F.v4910))).f_b = yr2145_ParseStatements(0);
yr1946_Link(&((*(yR105 *)y_deref(F.v4908))).f_a, &F.v4912, F.v4910);
while (yr1982_Is(v285)) {
Y_TICK();
F.v4910 = yr1939_NewNode(v756, yr1970_TLn());
yr1994_Skip();
((*(yR105 *)y_deref(F.v4910))).f_a = yr2207_ParseExpr();
yr2010_Expect(v471);
((*(yR105 *)y_deref(F.v4910))).f_b = yr2145_ParseStatements(0);
yr1946_Link(&((*(yR105 *)y_deref(F.v4908))).f_a, &F.v4912, F.v4910);
}
if (yr1999_Accept(v282)) {
((*(yR105 *)y_deref(F.v4908))).f_flag = INT64_C(1);
((*(yR105 *)y_deref(F.v4908))).f_b = yr2145_ParseStatements(0);
}
yr2010_Expect(v300);
{ void * rv4934 = F.v4908;
y_use = F.yu; return rv4934; }
}
if ((F.v4920 == v450)) {
yr1994_Skip();
F.v4908 = yr1939_NewNode(v741, F.v4922);
((*(yR105 *)y_deref(F.v4908))).f_a = yr2207_ParseExpr();
F.v4912 = ((void *)0);
while (yr1982_Is(v267)) {
Y_TICK();
F.v4910 = yr1939_NewNode(v756, yr1970_TLn());
yr1994_Skip();
F.v4916 = ((void *)0);
for (;;) {
Y_TICK();
yr1946_Link(&((*(yR105 *)y_deref(F.v4910))).f_a, &F.v4916, yr2207_ParseExpr());
if ((!yr1999_Accept(v606))) {
goto yl_4935;
}
}
yl_4935: ;
yr2010_Expect(v534);
((*(yR105 *)y_deref(F.v4910))).f_b = yr2145_ParseStatements(0);
yr1946_Link(&((*(yR105 *)y_deref(F.v4908))).f_b, &F.v4912, F.v4910);
}
if (yr1999_Accept(v282)) {
((*(yR105 *)y_deref(F.v4908))).f_flag = INT64_C(1);
((*(yR105 *)y_deref(F.v4908))).f_c = yr2145_ParseStatements(0);
}
yr2010_Expect(v321);
{ void * rv4939 = F.v4908;
y_use = F.yu; return rv4939; }
}
if ((F.v4920 == v486)) {
yr1994_Skip();
F.v4908 = yr1939_NewNode(v744, F.v4922);
((*(yR105 *)y_deref(F.v4908))).f_a = yr2207_ParseExpr();
yr2010_Expect(v279);
((*(yR105 *)y_deref(F.v4908))).f_b = yr2145_ParseStatements(0);
yr2010_Expect(v327);
{ void * rv4941 = F.v4908;
y_use = F.yu; return rv4941; }
}
if ((F.v4920 == v345)) {
yr1994_Skip();
F.v4908 = yr1939_NewNode(v747, F.v4922);
((*(yR105 *)y_deref(F.v4908))).f_name = yr2016_Ident();
yr2010_Expect(v612);
((*(yR105 *)y_deref(F.v4908))).f_a = yr2110_ParseRep();
yr2010_Expect(v279);
((*(yR105 *)y_deref(F.v4908))).f_b = yr2145_ParseStatements(0);
yr2010_Expect(v294);
{ void * rv4943 = F.v4908;
y_use = F.yu; return rv4943; }
}
if ((F.v4920 == v375)) {
yr1994_Skip();
F.v4908 = yr1939_NewNode(v750, F.v4922);
((*(yR105 *)y_deref(F.v4908))).f_name = yr2016_Ident();
((*(yR105 *)y_deref(F.v4908))).f_b = yr2145_ParseStatements(0);
yr2010_Expect(v303);
yr2021_CloseName(((*(yR105 *)y_deref(F.v4908))).f_name, F.v4922);
{ void * rv4945 = F.v4908;
y_use = F.yu; return rv4945; }
}
if ((((F.v4920 == v264)) || ((F.v4920 == v456)))) {
F.v4908 = yr1939_NewNode(v753, F.v4922);
if (yr1999_Accept(v456)) {
((*(yR105 *)y_deref(F.v4908))).f_flag = INT64_C(1);
}
yr2010_Expect(v264);
((*(yR105 *)y_deref(F.v4908))).f_a = yr2054_ParseBlock();
yr2010_Expect(v288);
{ void * rv4947 = F.v4908;
y_use = F.yu; return rv4947; }
}
}
F.v4918 = yr2238_ParseDesignator();
if (yr1999_Accept(v531)) {
F.v4908 = yr1939_NewNode(v714, F.v4922);
((*(yR105 *)y_deref(F.v4908))).f_a = F.v4918;
((*(yR105 *)y_deref(F.v4908))).f_b = yr2207_ParseExpr();
{ void * rv4948 = F.v4908;
y_use = F.yu; return rv4948; }
}
if ((!(((*(yR105 *)y_deref(F.v4918))).f_kind == v780))) {
yr1178_FailS(F.v4922, y_str("expected a statement", 20));
}
F.v4908 = yr1939_NewNode(v717, F.v4922);
((*(yR105 *)y_deref(F.v4908))).f_a = F.v4918;
{ void * rv4950 = F.v4908;
y_use = F.yu; return rv4950; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2156_OpAt(void) {
struct yf2157 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((((yr1960_TK() == v213)) || ((yr1960_TK() == v210)))) {
{ rt_int rv4952 = y_range(yr1965_TV(), INT64_C(0), INT64_C(4000000));
y_use = F.yu; return rv4952; }
}
{ rt_int rv4954 = INT64_C(0);
y_use = F.yu; return rv4954; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2161_IsRel(rt_int a_p2162) {
struct yf2163 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2162 = a_p2162;
{ rt_int rv4957 = ((((((((((((((((((((F.p2162 == v360)) || ((F.p2162 == v570))) || ((F.p2162 == v585))) || ((F.p2162 == v588))) || ((F.p2162 == v540))) || ((F.p2162 == v591))) || ((F.p2162 == v543))) || ((F.p2162 == v546))) || ((F.p2162 == v501))) || ((F.p2162 == v549))) || ((F.p2162 == v504))) || ((F.p2162 == v552))) || ((F.p2162 == v513))) || ((F.p2162 == v507))) || ((F.p2162 == v495))) || ((F.p2162 == v555))) || ((F.p2162 == v516))) || ((F.p2162 == v510))) || ((F.p2162 == v498)));
y_use = F.yu; return rv4957; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2167_IsAssocMul(rt_int a_p2168) {
struct yf2169 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2168 = a_p2168;
{ rt_int rv4960 = (((F.p2168 == v579)) || ((F.p2168 == v237)));
y_use = F.yu; return rv4960; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2173_IsNonAssocMul(rt_int a_p2174) {
struct yf2175 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2174 = a_p2174;
{ rt_int rv4963 = ((((((((F.p2174 == v582)) || ((F.p2174 == v276))) || ((F.p2174 == v378))) || ((F.p2174 == v558))) || ((F.p2174 == v519))) || ((F.p2174 == v561))) || ((F.p2174 == v522)));
y_use = F.yu; return rv4963; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2179_IsAssocAdd(rt_int a_p2180) {
struct yf2181 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2180 = a_p2180;
{ rt_int rv4966 = (((F.p2180 == v573)) || ((F.p2180 == v399)));
y_use = F.yu; return rv4966; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2185_IsNonAssocAdd(rt_int a_p2186) {
struct yf2187 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2186 = a_p2186;
{ rt_int rv4969 = (((((((F.p2186 == v576)) || ((F.p2186 == v489))) || ((F.p2186 == v564))) || ((F.p2186 == v525))) || ((F.p2186 == v567))) || ((F.p2186 == v528)));
y_use = F.yu; return rv4969; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2191_Bin(rt_int a_p2192, void * a_p2193, void * a_p2194, rt_int a_p2195) {
struct yf2196 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2192 = a_p2192;
F.p2193 = a_p2193;
F.p2194 = a_p2194;
F.p2195 = a_p2195;
F.v4976 = yr1939_NewNode(v798, F.p2195);
((*(yR105 *)y_deref(F.v4976))).f_name = F.p2192;
((*(yR105 *)y_deref(F.v4976))).f_a = F.p2193;
((*(yR105 *)y_deref(F.v4976))).f_b = F.p2194;
{ void * rv4977 = F.v4976;
y_use = F.yu; return rv4977; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2200_NeedParens(rt_int a_p2201, rt_int a_p2202) {
struct yf2203 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2201 = a_p2201;
F.p2202 = a_p2202;
yr1026_SB();
yr1044_ST(F.p2201);
yr1037_SA(y_str(" next to another operator of its level needs parentheses (VIII.A)", 65));
F.v4982 = yr1056_SE();
yr1157_Fail(F.p2202, F.v4982);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2207_ParseExpr(void) {
struct yf2208 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v4990 = yr1970_TLn();
F.v4986 = yr2212_ParseSimple();
F.v4988 = yr2156_OpAt();
if (yr2161_IsRel(F.v4988)) {
yr1994_Skip();
F.v4986 = yr2191_Bin(F.v4988, F.v4986, yr2212_ParseSimple(), F.v4990);
if (yr2161_IsRel(yr2156_OpAt())) {
yr2200_NeedParens(F.v4988, F.v4990);
}
}
{ void * rv4991 = F.v4986;
y_use = F.yu; return rv4991; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2212_ParseSimple(void) {
struct yf2213 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5000 = yr1970_TLn();
if (yr1982_Is(v576)) {
yr1994_Skip();
F.v4996 = yr1939_NewNode(v795, F.v5000);
((*(yR105 *)y_deref(F.v4996))).f_a = yr2217_ParseTerm();
F.v4998 = yr2156_OpAt();
if ((yr2179_IsAssocAdd(F.v4998) || yr2185_IsNonAssocAdd(F.v4998))) {
yr2200_NeedParens(y_range(v576, INT64_C(0), INT64_C(4000000)), F.v5000);
}
{ void * rv5001 = F.v4996;
y_use = F.yu; return rv5001; }
}
F.v4994 = yr2217_ParseTerm();
F.v4998 = yr2156_OpAt();
if (yr2185_IsNonAssocAdd(F.v4998)) {
yr1994_Skip();
F.v4994 = yr2191_Bin(F.v4998, F.v4994, yr2217_ParseTerm(), F.v5000);
if ((yr2179_IsAssocAdd(yr2156_OpAt()) || yr2185_IsNonAssocAdd(yr2156_OpAt()))) {
yr2200_NeedParens(F.v4998, F.v5000);
}
{ void * rv5002 = F.v4994;
y_use = F.yu; return rv5002; }
}
while (yr2179_IsAssocAdd(F.v4998)) {
Y_TICK();
yr1994_Skip();
F.v4994 = yr2191_Bin(F.v4998, F.v4994, yr2217_ParseTerm(), F.v5000);
if (yr2185_IsNonAssocAdd(yr2156_OpAt())) {
yr2200_NeedParens(yr2156_OpAt(), F.v5000);
}
F.v4998 = yr2156_OpAt();
}
{ void * rv5003 = F.v4994;
y_use = F.yu; return rv5003; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2217_ParseTerm(void) {
struct yf2218 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5010 = yr1970_TLn();
F.v5006 = yr2233_ParseFactor();
F.v5008 = yr2156_OpAt();
if (yr2173_IsNonAssocMul(F.v5008)) {
yr1994_Skip();
F.v5006 = yr2191_Bin(F.v5008, F.v5006, yr2233_ParseFactor(), F.v5010);
if ((yr2167_IsAssocMul(yr2156_OpAt()) || yr2173_IsNonAssocMul(yr2156_OpAt()))) {
yr2200_NeedParens(F.v5008, F.v5010);
}
{ void * rv5011 = F.v5006;
y_use = F.yu; return rv5011; }
}
while (yr2167_IsAssocMul(F.v5008)) {
Y_TICK();
yr1994_Skip();
F.v5006 = yr2191_Bin(F.v5008, F.v5006, yr2233_ParseFactor(), F.v5010);
if (yr2173_IsNonAssocMul(yr2156_OpAt())) {
yr2200_NeedParens(yr2156_OpAt(), F.v5010);
}
F.v5008 = yr2156_OpAt();
}
{ void * rv5012 = F.v5006;
y_use = F.yu; return rv5012; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2222_IsLiteralAt(rt_int a_p2223) {
struct yf2224 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2223 = a_p2223;
F.v5016 = ((rt_int *)(v1207).p)[y_ix1(v1207, y_add(v1249, F.p2223))];
{ rt_int rv5018 = (((((((F.v5016 == v216)) || ((F.v5016 == v219))) || ((F.v5016 == v222))) || ((F.v5016 == v225))) || ((F.v5016 == v228))) || yr1975_IsAt(F.p2223, v387));
y_use = F.yu; return rv5018; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2228_ParseLiteral(void) {
struct yf2229 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5023 = yr1960_TK();
F.v5025 = yr1970_TLn();
if ((F.v5023 == v216)) {
F.v5021 = yr1939_NewNode(v759, F.v5025);
((*(yR105 *)y_deref(F.v5021))).f_ival = yr1965_TV();
} else if ((F.v5023 == v219)) {
F.v5021 = yr1939_NewNode(v762, F.v5025);
((*(yR105 *)y_deref(F.v5021))).f_ival = yr1965_TV();
} else if ((F.v5023 == v222)) {
F.v5021 = yr1939_NewNode(v765, F.v5025);
((*(yR105 *)y_deref(F.v5021))).f_text = y_range(yr1965_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v5023 == v225)) {
F.v5021 = yr1939_NewNode(v768, F.v5025);
((*(yR105 *)y_deref(F.v5021))).f_text = y_range(yr1965_TV(), INT64_C(0), INT64_C(4000000));
} else if ((F.v5023 == v228)) {
F.v5021 = yr1939_NewNode(v771, F.v5025);
((*(yR105 *)y_deref(F.v5021))).f_text = y_range(yr1965_TV(), INT64_C(0), INT64_C(4000000));
} else {
F.v5021 = yr1939_NewNode(v774, F.v5025);
}
yr1994_Skip();
{ void * rv5026 = F.v5021;
y_use = F.yu; return rv5026; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2233_ParseFactor(void) {
struct yf2234 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5033 = yr1970_TLn();
if (yr1982_Is(v390)) {
yr1994_Skip();
F.v5029 = yr1939_NewNode(v792, F.v5033);
((*(yR105 *)y_deref(F.v5029))).f_a = yr2233_ParseFactor();
{ void * rv5034 = F.v5029;
y_use = F.yu; return rv5034; }
}
if (yr1982_Is(v594)) {
yr1994_Skip();
F.v5029 = yr1939_NewNode(v801, F.v5033);
((*(yR105 *)y_deref(F.v5029))).f_a = yr2207_ParseExpr();
yr2010_Expect(v597);
{ void * rv5035 = F.v5029;
y_use = F.yu; return rv5035; }
}
if (yr2222_IsLiteralAt(INT64_C(0))) {
{ void * rv5037 = yr2228_ParseLiteral();
y_use = F.yu; return rv5037; }
}
if (yr1988_IsIdAt(INT64_C(0))) {
if ((yr2222_IsLiteralAt(INT64_C(1)) || ((yr1988_IsIdAt(INT64_C(1)) && (!((((((yr1975_IsAt(INT64_C(2), v594) || yr1975_IsAt(INT64_C(2), v600)) || yr1975_IsAt(INT64_C(2), v615)) || yr1975_IsAt(INT64_C(2), v618)) || yr1975_IsAt(INT64_C(2), v531)) || yr1975_IsAt(INT64_C(2), v612)))))))) {
F.v5031 = yr2016_Ident();
if (yr1988_IsIdAt(INT64_C(0))) {
F.v5029 = yr1939_NewNode(v777, F.v5033);
((*(yR105 *)y_deref(F.v5029))).f_name = yr2016_Ident();
} else {
F.v5029 = yr2228_ParseLiteral();
}
((*(yR105 *)y_deref(F.v5029))).f_d = yr1939_NewNode(v669, F.v5033);
((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.v5029))).f_d))).f_name = F.v5031;
{ void * rv5048 = F.v5029;
y_use = F.yu; return rv5048; }
}
{ void * rv5049 = yr2238_ParseDesignator();
y_use = F.yu; return rv5049; }
}
yr1186_FailN(F.v5033, yr2005_TokText(), y_str(" cannot begin an operand", 24));
{ void * rv5051 = ((void *)0);
y_use = F.yu; return rv5051; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2238_ParseDesignator(void) {
struct yf2239 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5060 = yr1970_TLn();
F.v5054 = yr1939_NewNode(v777, F.v5060);
((*(yR105 *)y_deref(F.v5054))).f_name = yr2016_Ident();
if (yr1999_Accept(v594)) {
((*(yR105 *)y_deref(F.v5054))).f_kind = v780;
F.v5058 = ((void *)0);
while ((!yr1982_Is(v597))) {
Y_TICK();
yr1946_Link(&((*(yR105 *)y_deref(F.v5054))).f_a, &F.v5058, yr2207_ParseExpr());
if ((!yr1999_Accept(v606))) {
yr2243_EXIT_ARGS();
}
}
yr2010_Expect(v597);
}
for (;;) {
Y_TICK();
if (yr1999_Accept(v615)) {
F.v5056 = yr1939_NewNode(v783, yr1970_TLn());
((*(yR105 *)y_deref(F.v5056))).f_a = F.v5054;
((*(yR105 *)y_deref(F.v5056))).f_name = yr2016_Ident();
F.v5054 = F.v5056;
} else if (yr1999_Accept(v600)) {
F.v5056 = yr1939_NewNode(v786, yr1970_TLn());
((*(yR105 *)y_deref(F.v5056))).f_a = F.v5054;
F.v5058 = ((void *)0);
for (;;) {
Y_TICK();
yr1946_Link(&((*(yR105 *)y_deref(F.v5056))).f_b, &F.v5058, yr2207_ParseExpr());
if ((!yr1999_Accept(v606))) {
goto yl_5062;
}
}
yl_5062: ;
yr2010_Expect(v603);
F.v5054 = F.v5056;
} else if (yr1999_Accept(v618)) {
F.v5056 = yr1939_NewNode(v789, yr1970_TLn());
((*(yR105 *)y_deref(F.v5056))).f_a = F.v5054;
F.v5054 = F.v5056;
} else {
goto yl_5061;
}
}
yl_5061: ;
{ void * rv5063 = F.v5054;
y_use = F.yu; return rv5063; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2243_EXIT_ARGS(void) {
struct yf2244 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((!yr1982_Is(v597))) {
yr2010_Expect(v597);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2248_ParseProgram(void) {
struct yf2249 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5067 = ((void *)0);
F.v5069 = ((void *)0);
while ((!(yr1960_TK() == v204))) {
Y_TICK();
if ((!((yr1982_Is(v381) || yr1982_Is(v384))))) {
yr1178_FailS(yr1970_TLn(), y_str("a segment is a module (XIII.A)", 30));
}
yr1946_Link(&F.v5067, &F.v5069, yr2044_ParseModule());
while (yr1999_Accept(v609)) {
Y_TICK();
}
}
{ void * rv5071 = F.v5067;
y_use = F.yu; return rv5071; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2253_NewSym(rt_int a_p2254, rt_int a_p2255) {
struct yf2256 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2254 = a_p2254;
F.p2255 = a_p2255;
({ F.v5076 = y_new(sizeof(yR125)); });
(*(yR125 *)y_deref(F.v5076)) = ((yR125){ .f_kind = F.p2254, .f_name = F.p2255, .f_rep = ((void *)0), .f_cname = INT64_C(0), .f_level = INT64_C(0), .f_byref = 0, .f_readonly = 0, .f_mval = INT64_C(0), .f_hasmv = 0, .f_params = ((void *)0), .f_nparams = INT64_C(0), .f_ret = ((void *)0), .f_func = 0, .f_decl = ((void *)0), .f_depth = INT64_C(0), .f_target = ((void *)0), .f_members = ((void *)0), .f_mnext = ((void *)0), .f_chain = ((void *)0), .f_stack = ((void *)0), .f_alt = ((void *)0), .f_monitor = ((void *)0), .f_serial = INT64_C(0), .f_calls = ((void *)0), .f_writes = ((void *)0), .f_frees = ((void *)0), .f_seen = INT64_C(0), .f_vix = INT64_C(0), .f_at = INT64_C(-1) });
((*(yR125 *)y_deref(F.v5076))).f_serial = yr1195_NewSerial();
{ void * rv5090 = F.v5076;
y_use = F.yu; return rv5090; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2260_OpenScope(rt_int a_p2261) {
struct yf2262 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2261 = a_p2261;
({ F.v5094 = y_new(sizeof(yR130)); });
(*(yR130 *)y_deref(F.v5094)) = ((yR130){ .f_syms = ((void *)0), .f_closed = F.p2261, .f_module = ((void *)0), .f_level = v1279, .f_deferred = ((void *)0), .f_up = ((void *)0) });
if ((v1273 >= INT64_C(0))) {
((*(yR130 *)y_deref(F.v5094))).f_up = ((void * *)(v1271).p)[y_ix1(v1271, v1273)];
}
v1273 = y_range(y_add(v1273, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1271).p)[y_ix1(v1271, v1273)] = F.v5094;
((void * *)(v1313).p)[y_ix1(v1313, v1273)] = ((void *)0);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2266_ReopenScope(void * a_p2267) {
struct yf2268 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2267 = a_p2267;
F.v5101 = ((*(yR130 *)y_deref(F.p2267))).f_syms;
F.v5103 = INT64_C(0);
v1273 = y_range(y_add(v1273, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1271).p)[y_ix1(v1271, v1273)] = F.p2267;
((void * *)(v1313).p)[y_ix1(v1313, v1273)] = ((void *)0);
while ((!(F.v5101 == ((void *)0)))) {
Y_TICK();
F.v5103 = y_range(y_add(F.v5103, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1340).p)[y_ix1(v1340, F.v5103)] = F.v5101;
F.v5101 = ((*(yR125 *)y_deref(F.v5101))).f_stack;
}
while ((F.v5103 > INT64_C(0))) {
Y_TICK();
F.v5101 = ((void * *)(v1340).p)[y_ix1(v1340, F.v5103)];
F.v5106 = y_range(y_mod(((*(yR125 *)y_deref(F.v5101))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR125 *)y_deref(F.v5101))).f_chain = ((void * *)(v1260).p)[y_ix1(v1260, F.v5106)];
((void * *)(v1260).p)[y_ix1(v1260, F.v5106)] = F.v5101;
F.v5103 = y_range(y_sub(F.v5103, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2272_CloseScope(void) {
struct yf2273 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5118 = ((*(yR130 *)y_deref(((void * *)(v1271).p)[y_ix1(v1271, v1273)]))).f_syms;
while ((!(F.v5118 == ((void *)0)))) {
Y_TICK();
F.v5124 = y_range(y_mod(((*(yR125 *)y_deref(F.v5118))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5120 = ((void * *)(v1260).p)[y_ix1(v1260, F.v5124)];
F.v5122 = ((void *)0);
while ((((!(F.v5120 == ((void *)0)))) && ((!(F.v5120 == F.v5118))))) {
Y_TICK();
F.v5122 = F.v5120;
F.v5120 = ((*(yR125 *)y_deref(F.v5120))).f_chain;
}
if ((F.v5120 == F.v5118)) {
if ((F.v5122 == ((void *)0))) {
((void * *)(v1260).p)[y_ix1(v1260, F.v5124)] = ((*(yR125 *)y_deref(F.v5118))).f_chain;
} else {
((*(yR125 *)y_deref(F.v5122))).f_chain = ((*(yR125 *)y_deref(F.v5118))).f_chain;
}
}
F.v5118 = ((*(yR125 *)y_deref(F.v5118))).f_stack;
}
v1273 = y_range(y_sub(v1273, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2277_Visible(void * a_p2278) {
struct yf2279 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2278 = a_p2278;
{ rt_int rv5132 = (((((*(yR125 *)y_deref(F.p2278))).f_depth >= v1276)) || ((((*(yR125 *)y_deref(F.p2278))).f_depth == INT64_C(0))));
y_use = F.yu; return rv5132; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2283_Find(rt_int a_p2284) {
struct yf2285 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2284 = a_p2284;
F.v5136 = ((void * *)(v1260).p)[y_ix1(v1260, y_mod(F.p2284, INT64_C(8192)))];
while ((!(F.v5136 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR125 *)y_deref(F.v5136))).f_name == F.p2284)) && yr2277_Visible(F.v5136))) {
{ void * rv5139 = F.v5136;
y_use = F.yu; return rv5139; }
}
F.v5136 = ((*(yR125 *)y_deref(F.v5136))).f_chain;
}
{ void * rv5140 = ((void *)0);
y_use = F.yu; return rv5140; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2289_FindHere(rt_int a_p2290) {
struct yf2291 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2290 = a_p2290;
F.v5144 = ((void * *)(v1260).p)[y_ix1(v1260, y_mod(F.p2290, INT64_C(8192)))];
while ((!(F.v5144 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR125 *)y_deref(F.v5144))).f_name == F.p2290)) && ((((*(yR125 *)y_deref(F.v5144))).f_depth == v1273)))) {
{ void * rv5147 = F.v5144;
y_use = F.yu; return rv5147; }
}
F.v5144 = ((*(yR125 *)y_deref(F.v5144))).f_chain;
}
{ void * rv5148 = ((void *)0);
y_use = F.yu; return rv5148; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2295_Lookup(rt_int a_p2296, rt_int a_p2297) {
struct yf2298 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2296 = a_p2296;
F.p2297 = a_p2297;
F.v5153 = yr2283_Find(F.p2296);
if ((!(((void * *)(v1313).p)[y_ix1(v1313, v1273)] == ((void *)0)))) {
if ((((F.v5153 == ((void *)0))) || ((!(((*(yR125 *)y_deref(F.v5153))).f_depth == v1273))))) {
if (yr2315_DeclaredFrom(((void * *)(v1313).p)[y_ix1(v1313, v1273)], F.p2296)) {
yr1186_FailN(F.p2297, F.p2296, y_str(" is used before its declaration in this scope (VII.I)", 53));
}
}
}
if ((F.v5153 == ((void *)0))) {
yr1186_FailN(F.p2297, F.p2296, y_str(" is not declared here", 21));
}
F.lo5161 = INT64_C(1);
F.hi5162 = v1328;
{ rt_int hi5166 = F.hi5162;
for (rt_int i5165 = F.lo5161; i5165 <= hi5166; i5165++) { F.c_5164 = i5165; Y_TICK();
if (((((((*(yR125 *)y_deref(F.v5153))).f_depth == ((rt_int *)(v1324).p)[y_ix1(v1324, F.c_5164)])) && ((((*(yR125 *)y_deref(F.v5153))).f_serial > ((rt_int *)(v1326).p)[y_ix1(v1326, F.c_5164)]))) && yr2309_IsSimple(((*(yR125 *)y_deref(F.v5153))).f_kind))) {
yr1186_FailN(F.p2297, F.p2296, y_str(" is declared after the routine that uses it: a simple declaration precedes the routines that use it (X.G)", 105));
}
if (i5165 == hi5166) break;
}}
if ((((*(yR125 *)y_deref(F.v5153))).f_kind == v894)) {
F.v5155 = ((*(yR125 *)y_deref(F.v5153))).f_chain;
while ((!(F.v5155 == ((void *)0)))) {
Y_TICK();
if ((((((((((*(yR125 *)y_deref(F.v5155))).f_name == F.p2296)) && ((((*(yR125 *)y_deref(F.v5155))).f_depth == ((*(yR125 *)y_deref(F.v5153))).f_depth))) && ((((*(yR125 *)y_deref(F.v5155))).f_kind == v894))) && yr2336_Resolved(F.v5155)) && ((!(yr2388_Real(F.v5155) == yr2388_Real(F.v5153))))) && ((!(((*(yR125 *)y_deref(yr2388_Real(F.v5153)))).f_kind == v873))))) {
yr1186_FailN(F.p2297, F.p2296, y_str(" is exported here by two modules: name it with FROM (X.B.4)", 59));
}
F.v5155 = ((*(yR125 *)y_deref(F.v5155))).f_chain;
}
}
{ void * rv5169 = F.v5153;
y_use = F.yu; return rv5169; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2302_AltOf(void * a_p2303, void * a_p2304) {
struct yf2305 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2303 = a_p2303;
F.p2304 = a_p2304;
F.v5174 = ((*(yR125 *)y_deref(F.p2303))).f_alt;
while ((!(F.v5174 == ((void *)0)))) {
Y_TICK();
if ((F.v5174 == F.p2304)) {
{ rt_int rv5176 = 1;
y_use = F.yu; return rv5176; }
}
F.v5174 = ((*(yR125 *)y_deref(F.v5174))).f_alt;
}
{ rt_int rv5178 = 0;
y_use = F.yu; return rv5178; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2309_IsSimple(rt_int a_p2310) {
struct yf2311 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2310 = a_p2310;
{ rt_int rv5181 = (((((((F.p2310 == v861)) || ((F.p2310 == v864))) || ((F.p2310 == v867))) || ((F.p2310 == v870))) || ((F.p2310 == v873))) || ((F.p2310 == v888)));
y_use = F.yu; return rv5181; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2315_DeclaredFrom(void * a_p2316, rt_int a_p2317) {
struct yf2318 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2316 = a_p2316;
F.p2317 = a_p2317;
F.v5186 = F.p2316;
F.v5188 = F.p2316;
while ((!(F.v5186 == ((void *)0)))) {
Y_TICK();
F.v5190 = ((*(yR105 *)y_deref(F.v5186))).f_kind;
if (((((F.v5190 == v639)) || ((F.v5190 == v642))) || ((F.v5190 == v645)))) {
F.v5188 = ((*(yR105 *)y_deref(F.v5186))).f_a;
while ((!(F.v5188 == ((void *)0)))) {
Y_TICK();
if ((((*(yR105 *)y_deref(F.v5188))).f_name == F.p2317)) {
{ rt_int rv5192 = 1;
y_use = F.yu; return rv5192; }
}
F.v5188 = ((*(yR105 *)y_deref(F.v5188))).f_next;
}
}
if ((((((((F.v5190 == v648)) || ((F.v5190 == v651))) || ((F.v5190 == v654))) || ((F.v5190 == v666))) || ((F.v5190 == v624))) || ((F.v5190 == v660)))) {
if ((((*(yR105 *)y_deref(F.v5186))).f_name == F.p2317)) {
{ rt_int rv5194 = 1;
y_use = F.yu; return rv5194; }
}
}
if ((((((F.v5190 == v639)) || ((F.v5190 == v642))) || ((F.v5190 == v648))) || ((F.v5190 == v651)))) {
if (yr2322_LiteralIn(((*(yR105 *)y_deref(F.v5186))).f_b, F.p2317)) {
{ rt_int rv5196 = 1;
y_use = F.yu; return rv5196; }
}
}
if ((F.v5190 == v624)) {
F.v5188 = ((*(yR105 *)y_deref(F.v5186))).f_b;
while ((!(F.v5188 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR105 *)y_deref(F.v5188))).f_ival == F.p2317)) || ((((((*(yR105 *)y_deref(F.v5188))).f_ival == INT64_C(0))) && ((((*(yR105 *)y_deref(F.v5188))).f_name == F.p2317)))))) {
{ rt_int rv5199 = 1;
y_use = F.yu; return rv5199; }
}
F.v5188 = ((*(yR105 *)y_deref(F.v5188))).f_next;
}
}
F.v5186 = ((*(yR105 *)y_deref(F.v5186))).f_next;
}
{ rt_int rv5201 = 0;
y_use = F.yu; return rv5201; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2322_LiteralIn(void * a_p2323, rt_int a_p2324) {
struct yf2325 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2323 = a_p2323;
F.p2324 = a_p2324;
if ((F.p2323 == ((void *)0))) {
{ rt_int rv5208 = 0;
y_use = F.yu; return rv5208; }
}
if ((((*(yR105 *)y_deref(F.p2323))).f_kind == v675)) {
F.v5206 = ((*(yR105 *)y_deref(F.p2323))).f_a;
while ((!(F.v5206 == ((void *)0)))) {
Y_TICK();
if ((((*(yR105 *)y_deref(F.v5206))).f_name == F.p2324)) {
{ rt_int rv5210 = 1;
y_use = F.yu; return rv5210; }
}
F.v5206 = ((*(yR105 *)y_deref(F.v5206))).f_next;
}
{ rt_int rv5212 = 0;
y_use = F.yu; return rv5212; }
}
if ((((*(yR105 *)y_deref(F.p2323))).f_kind == v681)) {
F.v5206 = ((*(yR105 *)y_deref(F.p2323))).f_a;
while ((!(F.v5206 == ((void *)0)))) {
Y_TICK();
if (yr2322_LiteralIn(F.v5206, F.p2324)) {
{ rt_int rv5214 = 1;
y_use = F.yu; return rv5214; }
}
F.v5206 = ((*(yR105 *)y_deref(F.v5206))).f_next;
}
{ rt_int rv5215 = yr2322_LiteralIn(((*(yR105 *)y_deref(F.p2323))).f_b, F.p2324);
y_use = F.yu; return rv5215; }
}
if ((((*(yR105 *)y_deref(F.p2323))).f_kind == v684)) {
F.v5206 = ((*(yR105 *)y_deref(F.p2323))).f_a;
while ((!(F.v5206 == ((void *)0)))) {
Y_TICK();
if (yr2322_LiteralIn(((*(yR105 *)y_deref(F.v5206))).f_b, F.p2324)) {
{ rt_int rv5217 = 1;
y_use = F.yu; return rv5217; }
}
F.v5206 = ((*(yR105 *)y_deref(F.v5206))).f_next;
}
if ((!(((*(yR105 *)y_deref(F.p2323))).f_b == ((void *)0)))) {
if (yr2322_LiteralIn(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p2323))).f_b))).f_b, F.p2324)) {
{ rt_int rv5219 = 1;
y_use = F.yu; return rv5219; }
}
F.v5206 = ((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p2323))).f_b))).f_a;
while ((!(F.v5206 == ((void *)0)))) {
Y_TICK();
if (yr2329_LiteralInGroups(((*(yR105 *)y_deref(F.v5206))).f_b, F.p2324)) {
{ rt_int rv5221 = 1;
y_use = F.yu; return rv5221; }
}
F.v5206 = ((*(yR105 *)y_deref(F.v5206))).f_next;
}
}
{ rt_int rv5223 = 0;
y_use = F.yu; return rv5223; }
}
if ((((((*(yR105 *)y_deref(F.p2323))).f_kind == v687)) || ((((*(yR105 *)y_deref(F.p2323))).f_kind == v693)))) {
{ rt_int rv5224 = yr2322_LiteralIn(((*(yR105 *)y_deref(F.p2323))).f_a, F.p2324);
y_use = F.yu; return rv5224; }
}
{ rt_int rv5226 = 0;
y_use = F.yu; return rv5226; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2329_LiteralInGroups(void * a_p2330, rt_int a_p2331) {
struct yf2332 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2330 = a_p2330;
F.p2331 = a_p2331;
F.v5231 = F.p2330;
while ((!(F.v5231 == ((void *)0)))) {
Y_TICK();
if (yr2322_LiteralIn(((*(yR105 *)y_deref(F.v5231))).f_b, F.p2331)) {
{ rt_int rv5233 = 1;
y_use = F.yu; return rv5233; }
}
F.v5231 = ((*(yR105 *)y_deref(F.v5231))).f_next;
}
{ rt_int rv5235 = 0;
y_use = F.yu; return rv5235; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2336_Resolved(void * a_p2337) {
struct yf2338 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2337 = a_p2337;
if ((!(((*(yR125 *)y_deref(F.p2337))).f_kind == v894))) {
{ rt_int rv5239 = 1;
y_use = F.yu; return rv5239; }
}
if ((((*(yR125 *)y_deref(F.p2337))).f_target == ((void *)0))) {
{ rt_int rv5241 = 0;
y_use = F.yu; return rv5241; }
}
{ rt_int rv5242 = yr2336_Resolved(((*(yR125 *)y_deref(F.p2337))).f_target);
y_use = F.yu; return rv5242; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2342_Ambiguous(void * a_p2343) {
struct yf2344 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2343 = a_p2343;
F.v5246 = ((*(yR125 *)y_deref(F.p2343))).f_chain;
while ((!(F.v5246 == ((void *)0)))) {
Y_TICK();
if ((((((((*(yR125 *)y_deref(F.v5246))).f_name == ((*(yR125 *)y_deref(F.p2343))).f_name)) && yr2277_Visible(F.v5246)) && ((((*(yR125 *)y_deref(F.v5246))).f_kind == v873))) && ((!(((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.v5246))).f_rep))).f_tid == ((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.p2343))).f_rep))).f_tid))))) {
{ rt_int rv5248 = 1;
y_use = F.yu; return rv5248; }
}
F.v5246 = ((*(yR125 *)y_deref(F.v5246))).f_chain;
}
{ rt_int rv5250 = 0;
y_use = F.yu; return rv5250; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2348_FindLit(rt_int a_p2349, void * a_p2350) {
struct yf2351 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2349 = a_p2349;
F.p2350 = a_p2350;
F.v5255 = ((void * *)(v1260).p)[y_ix1(v1260, y_mod(F.p2349, INT64_C(8192)))];
while ((!(F.v5255 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR125 *)y_deref(F.v5255))).f_name == F.p2349)) && yr2336_Resolved(F.v5255))) {
if ((((((*(yR125 *)y_deref(yr2388_Real(F.v5255)))).f_kind == v873)) && ((((*(yR110 *)y_deref(((*(yR125 *)y_deref(yr2388_Real(F.v5255)))).f_rep))).f_tid == ((*(yR110 *)y_deref(F.p2350))).f_tid)))) {
{ void * rv5258 = F.v5255;
y_use = F.yu; return rv5258; }
}
}
F.v5255 = ((*(yR125 *)y_deref(F.v5255))).f_chain;
}
{ void * rv5259 = ((void *)0);
y_use = F.yu; return rv5259; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2355_Define(void * a_p2356, rt_int a_p2357) {
struct yf2358 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2356 = a_p2356;
F.p2357 = a_p2357;
F.v5264 = yr2289_FindHere(((*(yR125 *)y_deref(F.p2356))).f_name);
F.v5266 = y_range(y_mod(((*(yR125 *)y_deref(F.p2356))).f_name, INT64_C(8192)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((((!(F.v5264 == ((void *)0)))) && (!((((((*(yR125 *)y_deref(F.v5264))).f_kind == v873)) && ((((*(yR125 *)y_deref(F.p2356))).f_kind == v873)))))) && (!(((((((*(yR125 *)y_deref(F.p2356))).f_kind == v876)) && yr2336_Resolved(F.v5264)) && yr2302_AltOf(F.p2356, yr2388_Real(F.v5264)))))) && (!((((((*(yR125 *)y_deref(F.p2356))).f_kind == v894)) && ((((*(yR125 *)y_deref(F.v5264))).f_kind == v894))))))) {
yr1186_FailN(F.p2357, ((*(yR125 *)y_deref(F.p2356))).f_name, y_str(" is declared twice in this scope", 32));
}
((*(yR125 *)y_deref(F.p2356))).f_depth = v1273;
((*(yR125 *)y_deref(F.p2356))).f_chain = ((void * *)(v1260).p)[y_ix1(v1260, F.v5266)];
((void * *)(v1260).p)[y_ix1(v1260, F.v5266)] = F.p2356;
((*(yR125 *)y_deref(F.p2356))).f_stack = ((*(yR130 *)y_deref(((void * *)(v1271).p)[y_ix1(v1271, v1273)]))).f_syms;
((*(yR130 *)y_deref(((void * *)(v1271).p)[y_ix1(v1271, v1273)]))).f_syms = F.p2356;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2362_Path(rt_int a_p2363, rt_int a_p2364) {
struct yf2365 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2363 = a_p2363;
F.p2364 = a_p2364;
F.v5274 = y_range(y_sub(v1279, F.p2363), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.p2363 == INT64_C(0))) {
{ rt_int rv5277 = F.p2364;
y_use = F.yu; return rv5277; }
}
yr1026_SB();
if ((F.v5274 == INT64_C(0))) {
yr1037_SA(y_str("F.", 2));
} else {
yr1037_SA(y_str("F.up->", 6));
while ((F.v5274 > INT64_C(1))) {
Y_TICK();
yr1037_SA(y_str("up->", 4));
F.v5274 = y_range(y_sub(F.v5274, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
yr1044_ST(F.p2364);
{ rt_int rv5285 = yr1056_SE();
y_use = F.yu; return rv5285; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2369_FramePtr(rt_int a_p2370) {
struct yf2371 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2370 = a_p2370;
F.v5289 = y_range(y_sub(v1279, F.p2370), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.v5289 == INT64_C(0))) {
{ rt_int rv5293 = yr1061_T(y_str("&F", 2));
y_use = F.yu; return rv5293; }
}
yr1026_SB();
yr1037_SA(y_str("F.up", 4));
while ((F.v5289 > INT64_C(1))) {
Y_TICK();
yr1037_SA(y_str("->up", 4));
F.v5289 = y_range(y_sub(F.v5289, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv5299 = yr1056_SE();
y_use = F.yu; return rv5299; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2375_DeclStorage(rt_int a_p2376, rt_int a_p2377) {
struct yf2378 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2376 = a_p2376;
F.p2377 = a_p2377;
yr1026_SB();
if ((v1279 == INT64_C(0))) {
yr1037_SA(y_str("static ", 7));
}
yr1044_ST(F.p2376);
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.p2377);
yr1037_SA(y_str(";", 1));
F.v5304 = yr1056_SE();
if ((v1279 == INT64_C(0))) {
yr1110_Put(&v984, F.v5304);
} else {
yr1110_Put(&v998, F.v5304);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2382_SymPath(void * a_p2383) {
struct yf2384 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2383 = a_p2383;
F.v5313 = yr2362_Path(((*(yR125 *)y_deref(F.p2383))).f_level, ((*(yR125 *)y_deref(F.p2383))).f_cname);
if (((*(yR125 *)y_deref(F.p2383))).f_byref) {
yr1026_SB();
yr1037_SA(y_str("(*", 2));
yr1044_ST(F.v5313);
yr1037_SA(y_str(")", 1));
{ rt_int rv5316 = yr1056_SE();
y_use = F.yu; return rv5316; }
}
{ rt_int rv5317 = F.v5313;
y_use = F.yu; return rv5317; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2388_Real(void * a_p2389) {
struct yf2390 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2389 = a_p2389;
F.v5321 = F.p2389;
while ((((*(yR125 *)y_deref(F.v5321))).f_kind == v894)) {
Y_TICK();
if ((((*(yR125 *)y_deref(F.v5321))).f_target == ((void *)0))) {
yr1186_FailN(v1000, ((*(yR125 *)y_deref(F.v5321))).f_name, y_str(" is imported from a declaration translated later: until then only the bodies of routines may use it (X.G)", 105));
}
F.v5321 = ((*(yR125 *)y_deref(F.v5321))).f_target;
}
{ void * rv5323 = F.v5321;
y_use = F.yu; return rv5323; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2394_NewRep(rt_int a_p2395, rt_int a_p2396) {
struct yf2397 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2395 = a_p2395;
F.p2396 = a_p2396;
({ F.v5328 = y_new(sizeof(yR110)); });
(*(yR110 *)y_deref(F.v5328)) = ((yR110){ .f_kind = F.p2395, .f_tid = F.p2396, .f_tname = F.p2396, .f_lo = INT64_C(0), .f_hi = INT64_C(0), .f_mlo = INT64_C(0), .f_mhi = INT64_C(0), .f_hasm = 0, .f_scale = INT64_C(0), .f_prec = INT64_C(0), .f_elem = ((void *)0), .f_idx = ((void *)0), .f_nidx = INT64_C(0), .f_link = ((void *)0), .f_lits = ((void *)0), .f_nlits = INT64_C(0), .f_fields = ((void *)0), .f_selector = ((void *)0), .f_cname = INT64_C(0), .f_dname = INT64_C(0), .f_dlevel = INT64_C(0), .f_deep = 0, .f_abstract = 0, .f_opaque = 0, .f_opaqueops = INT64_C(0), .f_ordered = 0, .f_forward = INT64_C(0), .f_fwdscope = INT64_C(0), .f_monitor = ((void *)0), .f_serial = INT64_C(0), .f_sig = INT64_C(0), .f_fsn = INT64_C(0), .f_fsd = INT64_C(0), .f_packed = 0, .f_pbits = INT64_C(0), .f_align = INT64_C(0), .f_bits = INT64_C(0) });
((*(yR110 *)y_deref(F.v5328))).f_serial = yr1195_NewSerial();
{ void * rv5356 = F.v5328;
y_use = F.yu; return rv5356; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2401_CopyRep(void * a_p2402) {
struct yf2403 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2402 = a_p2402;
({ F.v5360 = y_new(sizeof(yR110)); });
(*(yR110 *)y_deref(F.v5360)) = (*(yR110 *)y_deref(F.p2402));
((*(yR110 *)y_deref(F.v5360))).f_serial = yr1195_NewSerial();
((*(yR110 *)y_deref(F.v5360))).f_sig = INT64_C(0);
((*(yR110 *)y_deref(F.v5360))).f_bits = INT64_C(0);
{ void * rv5363 = F.v5360;
y_use = F.yu; return rv5363; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2407_IsDiscrete(void * a_p2408) {
struct yf2409 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2408 = a_p2408;
{ rt_int rv5366 = (((((((*(yR110 *)y_deref(F.p2408))).f_kind == v804)) || ((((*(yR110 *)y_deref(F.p2408))).f_kind == v813))) || ((((*(yR110 *)y_deref(F.p2408))).f_kind == v816))) || ((((*(yR110 *)y_deref(F.p2408))).f_kind == v819)));
y_use = F.yu; return rv5366; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2413_IsNumeric(void * a_p2414) {
struct yf2415 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2414 = a_p2414;
{ rt_int rv5369 = ((((((*(yR110 *)y_deref(F.p2414))).f_kind == v804)) || ((((*(yR110 *)y_deref(F.p2414))).f_kind == v807))) || ((((*(yR110 *)y_deref(F.p2414))).f_kind == v810)));
y_use = F.yu; return rv5369; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2419_IsArrayLike(void * a_p2420) {
struct yf2421 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2420 = a_p2420;
{ rt_int rv5372 = ((((((*(yR110 *)y_deref(F.p2420))).f_kind == v822)) || ((((*(yR110 *)y_deref(F.p2420))).f_kind == v843))) || ((((*(yR110 *)y_deref(F.p2420))).f_kind == v846)));
y_use = F.yu; return rv5372; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2425_IsString(void * a_p2426) {
struct yf2427 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2426 = a_p2426;
if ((((*(yR110 *)y_deref(F.p2426))).f_kind == v846)) {
{ rt_int rv5376 = 1;
y_use = F.yu; return rv5376; }
}
if ((((((*(yR110 *)y_deref(F.p2426))).f_kind == v822)) && ((((*(yR110 *)y_deref(F.p2426))).f_nidx == INT64_C(1))))) {
{ rt_int rv5378 = (((*(yR110 *)y_deref(((*(yR110 *)y_deref(F.p2426))).f_elem))).f_kind == v819);
y_use = F.yu; return rv5378; }
}
if ((((((*(yR110 *)y_deref(F.p2426))).f_kind == v843)) && ((((*(yR110 *)y_deref(F.p2426))).f_nidx == INT64_C(1))))) {
{ rt_int rv5380 = (((*(yR110 *)y_deref(((*(yR110 *)y_deref(F.p2426))).f_elem))).f_kind == v819);
y_use = F.yu; return rv5380; }
}
{ rt_int rv5382 = 0;
y_use = F.yu; return rv5382; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2431_Deep(void * a_p2432) {
struct yf2433 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2432 = a_p2432;
if (((((((*(yR110 *)y_deref(F.p2432))).f_kind == v822)) || ((((*(yR110 *)y_deref(F.p2432))).f_kind == v843))) || ((((*(yR110 *)y_deref(F.p2432))).f_kind == v846)))) {
{ rt_int rv5386 = 1;
y_use = F.yu; return rv5386; }
}
{ rt_int rv5387 = (((((*(yR110 *)y_deref(F.p2432))).f_kind == v825)) && ((*(yR110 *)y_deref(F.p2432))).f_deep);
y_use = F.yu; return rv5387; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2437_Holds(void * a_p2438, rt_int a_p2439) {
struct yf2440 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2438 = a_p2438;
F.p2439 = a_p2439;
if ((((*(yR110 *)y_deref(F.p2438))).f_kind == v822)) {
{ rt_int rv5393 = (((((*(yR110 *)y_deref(((*(yR110 *)y_deref(F.p2438))).f_elem))).f_kind == F.p2439)) || yr2437_Holds(((*(yR110 *)y_deref(F.p2438))).f_elem, F.p2439));
y_use = F.yu; return rv5393; }
}
if ((((*(yR110 *)y_deref(F.p2438))).f_kind == v825)) {
F.v5392 = ((*(yR110 *)y_deref(F.p2438))).f_fields;
while ((!(F.v5392 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR110 *)y_deref(((*(yR115 *)y_deref(F.v5392))).f_rep))).f_kind == F.p2439)) || yr2437_Holds(((*(yR115 *)y_deref(F.v5392))).f_rep, F.p2439))) {
{ rt_int rv5395 = 1;
y_use = F.yu; return rv5395; }
}
F.v5392 = ((*(yR115 *)y_deref(F.v5392))).f_next;
}
}
{ rt_int rv5397 = 0;
y_use = F.yu; return rv5397; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2444_HoldsSignal(void * a_p2445) {
struct yf2446 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2445 = a_p2445;
{ rt_int rv5400 = yr2437_Holds(F.p2445, v837);
y_use = F.yu; return rv5400; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2450_NonAssignable(void * a_p2451) {
struct yf2452 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2451 = a_p2451;
F.v5404 = ((*(yR110 *)y_deref(F.p2451))).f_kind;
if (((((F.v5404 == v837)) || ((F.v5404 == v831))) || ((F.v5404 == v840)))) {
{ rt_int rv5406 = 1;
y_use = F.yu; return rv5406; }
}
{ rt_int rv5407 = ((yr2437_Holds(F.p2451, v837) || yr2437_Holds(F.p2451, v831)) || yr2437_Holds(F.p2451, v840));
y_use = F.yu; return rv5407; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2456_CType(void * a_p2457) {
struct yf2458 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2457 = a_p2457;
F.v5411 = ((*(yR110 *)y_deref(F.p2457))).f_kind;
if (((((F.v5411 == v804)) || ((F.v5411 == v813))) || ((F.v5411 == v816)))) {
{ rt_int rv5413 = yr1061_T(y_str("rt_int", 6));
y_use = F.yu; return rv5413; }
}
if ((F.v5411 == v819)) {
{ rt_int rv5415 = yr1061_T(y_str("unsigned char", 13));
y_use = F.yu; return rv5415; }
}
if ((F.v5411 == v810)) {
{ rt_int rv5417 = yr1061_T(y_str("double", 6));
y_use = F.yu; return rv5417; }
}
if ((F.v5411 == v807)) {
{ rt_int rv5419 = yr1061_T(y_str("yfix", 4));
y_use = F.yu; return rv5419; }
}
if (((((F.v5411 == v822)) || ((F.v5411 == v843))) || ((F.v5411 == v846)))) {
{ rt_int rv5421 = yr1061_T(y_str("yarr", 4));
y_use = F.yu; return rv5421; }
}
if ((F.v5411 == v825)) {
{ rt_int rv5422 = ((*(yR110 *)y_deref(F.p2457))).f_cname;
y_use = F.yu; return rv5422; }
}
if ((((F.v5411 == v828)) || ((F.v5411 == v849)))) {
{ rt_int rv5424 = yr1061_T(y_str("void *", 6));
y_use = F.yu; return rv5424; }
}
if ((F.v5411 == v831)) {
{ rt_int rv5426 = yr1061_T(y_str("yfile *", 7));
y_use = F.yu; return rv5426; }
}
if ((F.v5411 == v834)) {
{ rt_int rv5428 = yr1061_T(y_str("yset", 4));
y_use = F.yu; return rv5428; }
}
if ((F.v5411 == v837)) {
{ rt_int rv5430 = yr1061_T(y_str("ysig", 4));
y_use = F.yu; return rv5430; }
}
if ((F.v5411 == v840)) {
{ rt_int rv5432 = yr1061_T(y_str("rt_lock", 7));
y_use = F.yu; return rv5432; }
}
if ((F.v5411 == v855)) {
{ rt_int rv5434 = yr1061_T(y_str("yspace", 6));
y_use = F.yu; return rv5434; }
}
{ rt_int rv5436 = yr1061_T(y_str("void", 4));
y_use = F.yu; return rv5436; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2462_DescOf(void * a_p2463) {
struct yf2464 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2463 = a_p2463;
F.v5440 = ((*(yR110 *)y_deref(F.p2463))).f_kind;
if (((((F.v5440 == v804)) || ((F.v5440 == v813))) || ((F.v5440 == v816)))) {
{ rt_int rv5442 = yr1061_T(y_str("&y_d_int", 8));
y_use = F.yu; return rv5442; }
}
if ((F.v5440 == v819)) {
{ rt_int rv5444 = yr1061_T(y_str("&y_d_byte", 9));
y_use = F.yu; return rv5444; }
}
if ((F.v5440 == v810)) {
{ rt_int rv5446 = yr1061_T(y_str("&y_d_float", 10));
y_use = F.yu; return rv5446; }
}
if ((F.v5440 == v807)) {
{ rt_int rv5448 = yr1061_T(y_str("&y_d_fix", 8));
y_use = F.yu; return rv5448; }
}
if ((((F.v5440 == v828)) || ((F.v5440 == v849)))) {
{ rt_int rv5450 = yr1061_T(y_str("&y_d_ptr", 8));
y_use = F.yu; return rv5450; }
}
if ((F.v5440 == v834)) {
{ rt_int rv5452 = yr1061_T(y_str("&y_d_set", 8));
y_use = F.yu; return rv5452; }
}
if ((((F.v5440 == v822)) || ((F.v5440 == v825)))) {
yr1026_SB();
yr1037_SA(y_str("&", 1));
yr1044_ST(yr2362_Path(((*(yR110 *)y_deref(F.p2463))).f_dlevel, ((*(yR110 *)y_deref(F.p2463))).f_dname));
{ rt_int rv5454 = yr1056_SE();
y_use = F.yu; return rv5454; }
}
if ((F.v5440 == v846)) {
{ rt_int rv5456 = yr1061_T(y_str("&y_d_str", 8));
y_use = F.yu; return rv5456; }
}
if ((F.v5440 == v837)) {
{ rt_int rv5458 = yr1061_T(y_str("&y_d_sig", 8));
y_use = F.yu; return rv5458; }
}
if ((F.v5440 == v840)) {
{ rt_int rv5460 = yr1061_T(y_str("&y_d_sem", 8));
y_use = F.yu; return rv5460; }
}
{ rt_int rv5462 = yr1061_T(y_str("&y_d_opaque", 11));
y_use = F.yu; return rv5462; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2468_NewDesc(void * a_p2469) {
struct yf2470 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2469 = a_p2469;
((*(yR110 *)y_deref(F.p2469))).f_dname = yr1200_Fresh(y_str("yd_", 3));
((*(yR110 *)y_deref(F.p2469))).f_dlevel = v1279;
yr2375_DeclStorage(yr1061_T(y_str("ydesc", 5)), ((*(yR110 *)y_deref(F.p2469))).f_dname);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2474_SameType(void * a_p2475, void * a_p2476) {
struct yf2477 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2475 = a_p2475;
F.p2476 = a_p2476;
if ((((*(yR110 *)y_deref(F.p2475))).f_tid == ((*(yR110 *)y_deref(F.p2476))).f_tid)) {
{ rt_int rv5471 = 1;
y_use = F.yu; return rv5471; }
}
if ((((((*(yR110 *)y_deref(F.p2475))).f_kind == v846)) && yr2425_IsString(F.p2476))) {
{ rt_int rv5473 = 1;
y_use = F.yu; return rv5473; }
}
if ((((((*(yR110 *)y_deref(F.p2476))).f_kind == v846)) && yr2425_IsString(F.p2475))) {
{ rt_int rv5475 = 1;
y_use = F.yu; return rv5475; }
}
if ((((((*(yR110 *)y_deref(F.p2475))).f_kind == v849)) && ((((*(yR110 *)y_deref(F.p2476))).f_kind == v828)))) {
{ rt_int rv5477 = 1;
y_use = F.yu; return rv5477; }
}
if ((((((*(yR110 *)y_deref(F.p2476))).f_kind == v849)) && ((((*(yR110 *)y_deref(F.p2475))).f_kind == v828)))) {
{ rt_int rv5479 = 1;
y_use = F.yu; return rv5479; }
}
if ((((((*(yR110 *)y_deref(F.p2475))).f_kind == v858)) || ((((*(yR110 *)y_deref(F.p2476))).f_kind == v858)))) {
{ rt_int rv5481 = 1;
y_use = F.yu; return rv5481; }
}
{ rt_int rv5483 = 0;
y_use = F.yu; return rv5483; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2481_TypeClash(rt_int a_p2482, void * a_p2483, void * a_p2484) {
struct yf2485 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2482 = a_p2482;
F.p2483 = a_p2483;
F.p2484 = a_p2484;
yr1026_SB();
yr1037_SA(y_str("type conflict: ", 15));
yr1044_ST(((*(yR110 *)y_deref(F.p2483))).f_tname);
yr1037_SA(y_str(" expected, ", 11));
yr1044_ST(((*(yR110 *)y_deref(F.p2484))).f_tname);
yr1037_SA(y_str(" found", 6));
F.v5489 = yr1056_SE();
yr1157_Fail(F.p2482, F.v5489);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2489_CheckType(rt_int a_p2490, void * a_p2491, void * a_p2492) {
struct yf2493 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2490 = a_p2490;
F.p2491 = a_p2491;
F.p2492 = a_p2492;
if ((!yr2474_SameType(F.p2491, F.p2492))) {
yr2481_TypeClash(F.p2490, F.p2491, F.p2492);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2497_CheckRepresented(void * a_p2498, rt_int a_p2499) {
struct yf2500 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2498 = a_p2498;
F.p2499 = a_p2499;
if (((*(yR110 *)y_deref(F.p2498))).f_abstract) {
yr1186_FailN(F.p2499, ((*(yR110 *)y_deref(F.p2498))).f_tname, y_str(" is a type, not a representation (VI.A.1)", 41));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2504_SigText(void * a_p2505) {
struct yf2506 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2505 = a_p2505;
F.v5504 = ((*(yR110 *)y_deref(F.p2505))).f_kind;
yr1026_SB();
yr1044_ST(((*(yR110 *)y_deref(F.p2505))).f_tid);
if (((yr2407_IsDiscrete(F.p2505) || ((F.v5504 == v810))) || ((F.v5504 == v807)))) {
yr1037_SA(y_str("[", 1));
if (((*(yR110 *)y_deref(F.p2505))).f_hasm) {
yr1050_SI(((*(yR110 *)y_deref(F.p2505))).f_mlo);
yr1037_SA(y_str("..", 2));
yr1050_SI(((*(yR110 *)y_deref(F.p2505))).f_mhi);
} else {
yr1044_ST(((*(yR110 *)y_deref(F.p2505))).f_lo);
yr1037_SA(y_str("..", 2));
yr1044_ST(((*(yR110 *)y_deref(F.p2505))).f_hi);
}
yr1037_SA(y_str("]", 1));
if ((F.v5504 == v810)) {
yr1037_SA(y_str("P", 1));
yr1044_ST(((*(yR110 *)y_deref(F.p2505))).f_prec);
}
if ((F.v5504 == v807)) {
yr1037_SA(y_str("S", 1));
yr1050_SI(((*(yR110 *)y_deref(F.p2505))).f_fsn);
yr1037_SA(y_str("/", 1));
yr1050_SI(((*(yR110 *)y_deref(F.p2505))).f_fsd);
}
} else if ((F.v5504 == v822)) {
yr1037_SA(y_str("(", 1));
F.v5506 = ((*(yR110 *)y_deref(F.p2505))).f_idx;
while ((!(F.v5506 == ((void *)0)))) {
Y_TICK();
yr1044_ST(yr2510_RepSig(F.v5506));
yr1037_SA(y_str(",", 1));
F.v5506 = ((*(yR110 *)y_deref(F.v5506))).f_link;
}
yr1037_SA(y_str("OF ", 3));
yr1044_ST(yr2510_RepSig(((*(yR110 *)y_deref(F.p2505))).f_elem));
yr1037_SA(y_str(")", 1));
} else if ((F.v5504 == v843)) {
yr1037_SA(y_str("(", 1));
yr1050_SI(((*(yR110 *)y_deref(F.p2505))).f_nidx);
yr1037_SA(y_str("D ", 2));
yr1044_ST(yr2510_RepSig(((*(yR110 *)y_deref(F.p2505))).f_elem));
yr1037_SA(y_str(")", 1));
} else if ((F.v5504 == v825)) {
yr1037_SA(y_str("{", 1));
F.v5508 = ((*(yR110 *)y_deref(F.p2505))).f_fields;
while ((!(F.v5508 == ((void *)0)))) {
Y_TICK();
if (((*(yR115 *)y_deref(F.v5508))).f_isconst) {
yr1037_SA(y_str("C ", 2));
} else {
yr1037_SA(y_str("V ", 2));
}
yr1044_ST(((*(yR115 *)y_deref(F.v5508))).f_name);
yr1037_SA(y_str(":", 1));
yr1044_ST(yr2510_RepSig(((*(yR115 *)y_deref(F.v5508))).f_rep));
yr1037_SA(y_str(";", 1));
F.v5508 = ((*(yR115 *)y_deref(F.v5508))).f_next;
}
yr1037_SA(y_str("}", 1));
} else if ((((F.v5504 == v834)) || ((F.v5504 == v831)))) {
yr1037_SA(y_str("(", 1));
yr1044_ST(yr2510_RepSig(((*(yR110 *)y_deref(F.p2505))).f_elem));
yr1037_SA(y_str(")", 1));
}
if (((*(yR110 *)y_deref(F.p2505))).f_packed) {
yr1037_SA(y_str(" PACKED ", 8));
yr1050_SI(((*(yR110 *)y_deref(F.p2505))).f_pbits);
}
if ((!(((*(yR110 *)y_deref(F.p2505))).f_align == INT64_C(0)))) {
yr1037_SA(y_str(" ALIGNMENT ", 11));
yr1050_SI(((*(yR110 *)y_deref(F.p2505))).f_align);
}
{ rt_int rv5534 = yr1056_SE();
y_use = F.yu; return rv5534; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2510_RepSig(void * a_p2511) {
struct yf2512 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2511 = a_p2511;
if ((((*(yR110 *)y_deref(F.p2511))).f_sig == INT64_C(0))) {
((*(yR110 *)y_deref(F.p2511))).f_sig = yr1075_Name(yr2504_SigText(F.p2511));
}
{ rt_int rv5538 = ((*(yR110 *)y_deref(F.p2511))).f_sig;
y_use = F.yu; return rv5538; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2516_Identical(void * a_p2517, void * a_p2518) {
struct yf2519 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2517 = a_p2517;
F.p2518 = a_p2518;
if ((F.p2517 == F.p2518)) {
{ rt_int rv5543 = 1;
y_use = F.yu; return rv5543; }
}
if ((!yr2474_SameType(F.p2517, F.p2518))) {
{ rt_int rv5545 = 0;
y_use = F.yu; return rv5545; }
}
{ rt_int rv5546 = (yr2510_RepSig(F.p2517) == yr2510_RepSig(F.p2518));
y_use = F.yu; return rv5546; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2523_IsLiteralNode(void * a_p2524) {
struct yf2525 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2524 = a_p2524;
if ((((((((*(yR105 *)y_deref(F.p2524))).f_kind == v759)) || ((((*(yR105 *)y_deref(F.p2524))).f_kind == v765))) || ((((*(yR105 *)y_deref(F.p2524))).f_kind == v762))) || ((((*(yR105 *)y_deref(F.p2524))).f_kind == v768)))) {
{ rt_int rv5549 = (((*(yR105 *)y_deref(F.p2524))).f_d == ((void *)0));
y_use = F.yu; return rv5549; }
}
if ((((((*(yR105 *)y_deref(F.p2524))).f_kind == v795)) || ((((*(yR105 *)y_deref(F.p2524))).f_kind == v801)))) {
{ rt_int rv5550 = yr2523_IsLiteralNode(((*(yR105 *)y_deref(F.p2524))).f_a);
y_use = F.yu; return rv5550; }
}
{ rt_int rv5552 = 0;
y_use = F.yu; return rv5552; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2529_StoreBounds(void * a_p2530, yarr a_p2532) {
struct yf2533 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2530 = a_p2530;
F.p2532 = a_p2532;
F.v5557 = yr1200_Fresh(y_str("lo", 2));
F.v5559 = yr1200_Fresh(y_str("hi", 2));
yr2375_DeclStorage(yr1061_T(F.p2532), F.v5557);
yr2375_DeclStorage(yr1061_T(F.p2532), F.v5559);
yr1132_Emit(yr3350_Join(yr2362_Path(v1279, F.v5557), yr1061_T(y_str(" = ", 3)), yr3350_Join(((*(yR110 *)y_deref(F.p2530))).f_lo, yr1061_T(y_str(";", 1)), INT64_C(0))));
yr1132_Emit(yr3350_Join(yr2362_Path(v1279, F.v5559), yr1061_T(y_str(" = ", 3)), yr3350_Join(((*(yR110 *)y_deref(F.p2530))).f_hi, yr1061_T(y_str(";", 1)), INT64_C(0))));
((*(yR110 *)y_deref(F.p2530))).f_lo = F.v5557;
((*(yR110 *)y_deref(F.p2530))).f_hi = F.v5559;
((*(yR110 *)y_deref(F.p2530))).f_dname = F.v5557;
((*(yR110 *)y_deref(F.p2530))).f_dlevel = v1279;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2537_LoText(void * a_p2538) {
struct yf2539 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2538 = a_p2538;
if ((((((!(((*(yR110 *)y_deref(F.p2538))).f_dname == INT64_C(0)))) && ((!(((*(yR110 *)y_deref(F.p2538))).f_lo == INT64_C(0))))) && ((!(((*(yR110 *)y_deref(F.p2538))).f_kind == v822)))) && ((!(((*(yR110 *)y_deref(F.p2538))).f_kind == v825))))) {
{ rt_int rv5572 = yr2362_Path(((*(yR110 *)y_deref(F.p2538))).f_dlevel, ((*(yR110 *)y_deref(F.p2538))).f_lo);
y_use = F.yu; return rv5572; }
}
{ rt_int rv5573 = ((*(yR110 *)y_deref(F.p2538))).f_lo;
y_use = F.yu; return rv5573; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2543_HiText(void * a_p2544) {
struct yf2545 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2544 = a_p2544;
if ((((((!(((*(yR110 *)y_deref(F.p2544))).f_dname == INT64_C(0)))) && ((!(((*(yR110 *)y_deref(F.p2544))).f_hi == INT64_C(0))))) && ((!(((*(yR110 *)y_deref(F.p2544))).f_kind == v822)))) && ((!(((*(yR110 *)y_deref(F.p2544))).f_kind == v825))))) {
{ rt_int rv5578 = yr2362_Path(((*(yR110 *)y_deref(F.p2544))).f_dlevel, ((*(yR110 *)y_deref(F.p2544))).f_hi);
y_use = F.yu; return rv5578; }
}
{ rt_int rv5579 = ((*(yR110 *)y_deref(F.p2544))).f_hi;
y_use = F.yu; return rv5579; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2549_AdoptLiteral(void * a_p2550, void * a_p2551, void * a_p2552) {
struct yf2553 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2550 = a_p2550;
F.p2551 = a_p2551;
F.p2552 = a_p2552;
if ((((!yr2523_IsLiteralNode(F.p2550)) || ((!(((*(yR110 *)y_deref(F.p2551))).f_kind == ((*(yR110 *)y_deref(F.p2552))).f_kind)))) || (!yr2413_IsNumeric(F.p2552)))) {
{ void * rv5586 = F.p2551;
y_use = F.yu; return rv5586; }
}
if (yr2557_HasQualifier(F.p2550)) {
{ void * rv5587 = F.p2551;
y_use = F.yu; return rv5587; }
}
F.v5585 = yr2401_CopyRep(F.p2551);
((*(yR110 *)y_deref(F.v5585))).f_tid = ((*(yR110 *)y_deref(F.p2552))).f_tid;
((*(yR110 *)y_deref(F.v5585))).f_tname = ((*(yR110 *)y_deref(F.p2552))).f_tname;
{ void * rv5588 = F.v5585;
y_use = F.yu; return rv5588; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2557_HasQualifier(void * a_p2558) {
struct yf2559 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2558 = a_p2558;
if ((((((*(yR105 *)y_deref(F.p2558))).f_kind == v795)) || ((((*(yR105 *)y_deref(F.p2558))).f_kind == v801)))) {
{ rt_int rv5591 = yr2557_HasQualifier(((*(yR105 *)y_deref(F.p2558))).f_a);
y_use = F.yu; return rv5591; }
}
{ rt_int rv5592 = (!(((*(yR105 *)y_deref(F.p2558))).f_d == ((void *)0)));
y_use = F.yu; return rv5592; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2563_Gcd(rt_int a_p2564, rt_int a_p2565) {
struct yf2566 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2564 = a_p2564;
F.p2565 = a_p2565;
F.v5597 = F.p2564;
F.v5599 = F.p2565;
if ((F.v5597 < INT64_C(0))) {
F.v5597 = y_range(y_neg(F.v5597), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v5599 < INT64_C(0))) {
F.v5599 = y_range(y_neg(F.v5599), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
while ((!(F.v5599 == INT64_C(0)))) {
Y_TICK();
F.v5601 = y_range(y_mod(F.v5597, F.v5599), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5597 = F.v5599;
F.v5599 = F.v5601;
}
if ((F.v5597 == INT64_C(0))) {
{ rt_int rv5610 = INT64_C(1);
y_use = F.yu; return rv5610; }
}
{ rt_int rv5611 = F.v5597;
y_use = F.yu; return rv5611; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2570_MulChk(rt_int a_p2571, rt_int a_p2572, rt_int a_p2573) {
struct yf2574 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2571 = a_p2571;
F.p2572 = a_p2572;
F.p2573 = a_p2573;
F.v5617 = F.p2571;
F.v5619 = F.p2572;
if ((F.v5617 < INT64_C(0))) {
F.v5617 = y_range(y_neg(F.v5617), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v5619 < INT64_C(0))) {
F.v5619 = y_range(y_neg(F.v5619), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((((!(F.v5617 == INT64_C(0)))) && ((F.v5619 > (y_div(v906, F.v5617)))))) {
yr1178_FailS(F.p2573, y_str("a scale beyond this implementation: fixed-point scales are fractions of 64-bit integers", 87));
}
{ rt_int rv5628 = y_range(y_mul(F.p2571, F.p2572), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv5628; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2578_PowChk(rt_int a_p2579, rt_int a_p2580, rt_int a_p2581) {
struct yf2582 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2579 = a_p2579;
F.p2580 = a_p2580;
F.p2581 = a_p2581;
F.v5634 = INT64_C(1);
F.lo5639 = INT64_C(1);
F.hi5640 = F.p2580;
{ rt_int hi5644 = F.hi5640;
for (rt_int i5643 = F.lo5639; i5643 <= hi5644; i5643++) { F.c_5642 = i5643; Y_TICK();
F.v5634 = yr2570_MulChk(F.v5634, F.p2579, F.p2581);
if (i5643 == hi5644) break;
}}
{ rt_int rv5645 = F.v5634;
y_use = F.yu; return rv5645; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2586_ScaleRatio(void * a_p2587, void * a_p2588, rt_int * a_p2589, rt_int * a_p2590, rt_int * a_p2591) {
struct yf2592 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2587 = a_p2587;
F.p2588 = a_p2588;
F.p2589_o = a_p2589;
F.p2590_o = a_p2590;
F.p2591_o = a_p2591;
F.p2589 = yr1061_T(y_str("1", 1));
F.p2590 = yr1061_T(y_str("1", 1));
F.p2591 = 1;
if ((((((*(yR110 *)y_deref(F.p2587))).f_fsd == INT64_C(0))) || ((((*(yR110 *)y_deref(F.p2588))).f_fsd == INT64_C(0))))) {
(*F.p2589_o) = F.p2589;
(*F.p2590_o) = F.p2590;
(*F.p2591_o) = F.p2591;
y_use = F.yu; return;
}
F.v5653 = yr2563_Gcd(((*(yR110 *)y_deref(F.p2587))).f_fsn, ((*(yR110 *)y_deref(F.p2588))).f_fsn);
F.v5655 = yr2563_Gcd(((*(yR110 *)y_deref(F.p2587))).f_fsd, ((*(yR110 *)y_deref(F.p2588))).f_fsd);
F.v5657 = y_range(y_div(((*(yR110 *)y_deref(F.p2587))).f_fsn, F.v5653), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5659 = y_range(y_div(((*(yR110 *)y_deref(F.p2588))).f_fsd, F.v5655), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5661 = y_range(y_div(((*(yR110 *)y_deref(F.p2587))).f_fsd, F.v5655), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5663 = y_range(y_div(((*(yR110 *)y_deref(F.p2588))).f_fsn, F.v5653), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.p2591 = (((((F.v5657 == INT64_C(1))) && ((F.v5659 == INT64_C(1)))) && ((F.v5661 == INT64_C(1)))) && ((F.v5663 == INT64_C(1))));
F.p2589 = yr2596_Factor(F.v5657, F.v5659);
F.p2590 = yr2596_Factor(F.v5661, F.v5663);
(*F.p2589_o) = F.p2589;
(*F.p2590_o) = F.p2590;
(*F.p2591_o) = F.p2591;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2596_Factor(rt_int a_p2597, rt_int a_p2598) {
struct yf2599 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2597 = a_p2597;
F.p2598 = a_p2598;
yr1026_SB();
yr1037_SA(y_str("((yfix)INT64_C(", 15));
yr1050_SI(F.p2597);
yr1037_SA(y_str(")", 1));
if ((!(F.p2598 == INT64_C(1)))) {
yr1037_SA(y_str(" * INT64_C(", 11));
yr1050_SI(F.p2598);
yr1037_SA(y_str(")", 1));
}
yr1037_SA(y_str(")", 1));
{ rt_int rv5686 = yr1056_SE();
y_use = F.yu; return rv5686; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2603_SetScale(void * a_p2604, rt_int a_p2605, rt_int a_p2606) {
struct yf2607 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2604 = a_p2604;
F.p2605 = a_p2605;
F.p2606 = a_p2606;
F.v5692 = yr2563_Gcd(F.p2605, F.p2606);
((*(yR110 *)y_deref(F.p2604))).f_fsn = y_range(y_div(F.p2605, F.v5692), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR110 *)y_deref(F.p2604))).f_fsd = y_range(y_div(F.p2606, F.v5692), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((*(yR110 *)y_deref(F.p2604))).f_fsd < INT64_C(0))) {
((*(yR110 *)y_deref(F.p2604))).f_fsn = y_range(y_neg(((*(yR110 *)y_deref(F.p2604))).f_fsn), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR110 *)y_deref(F.p2604))).f_fsd = y_range(y_neg(((*(yR110 *)y_deref(F.p2604))).f_fsd), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2611_Qualify(void * a_p2612, void * a_p2613) {
struct yf2614 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2612 = a_p2612;
F.p2613 = a_p2613;
if ((((*(yR110 *)y_deref(F.p2612))).f_kind == v807)) {
if ((((*(yR105 *)y_deref(F.p2613))).f_c == ((void *)0))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2613))).f_line, y_str("FIXED needs SCALE (VI.A.1.b)", 28));
}
yr2891_ManifestFix(((*(yR105 *)y_deref(F.p2613))).f_c, &F.v5714, &F.v5720, &F.v5722);
if (((!F.v5714) || ((F.v5720 <= INT64_C(0))))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2613))).f_line, y_str("SCALE is a positive manifest constant (VI.A.1.b, VI.C)", 54));
}
((*(yR110 *)y_deref(F.p2612))).f_fsn = F.v5720;
((*(yR110 *)y_deref(F.p2612))).f_fsd = F.v5722;
yr1026_SB();
yr1050_SI(F.v5720);
yr1037_SA(y_str("/", 1));
yr1050_SI(F.v5722);
((*(yR110 *)y_deref(F.p2612))).f_scale = yr1056_SE();
}
yr2973_Expr(((*(yR105 *)y_deref(F.p2613))).f_a, F.p2612, &F.v5702, &F.v5710);
yr2973_Expr(((*(yR105 *)y_deref(F.p2613))).f_b, F.p2612, &F.v5704, &F.v5712);
F.v5710 = yr2549_AdoptLiteral(((*(yR105 *)y_deref(F.p2613))).f_a, F.v5710, F.p2612);
F.v5712 = yr2549_AdoptLiteral(((*(yR105 *)y_deref(F.p2613))).f_b, F.v5712, F.p2612);
if ((((*(yR110 *)y_deref(F.p2612))).f_kind == v807)) {
yr2489_CheckType(((*(yR105 *)y_deref(F.p2613))).f_line, F.p2612, F.v5710);
yr2489_CheckType(((*(yR105 *)y_deref(F.p2613))).f_line, F.p2612, F.v5712);
yr2586_ScaleRatio(F.v5710, F.p2612, &F.v5706, &F.v5708, &F.v5716);
((*(yR110 *)y_deref(F.p2612))).f_lo = yr3350_Join(yr1061_T(y_str("y_fix_bound(", 12)), F.v5702, yr3350_Join(yr1061_T(y_str(", ", 2)), F.v5706, yr3350_Join(yr1061_T(y_str(", ", 2)), F.v5708, yr1061_T(y_str(", 1)", 4)))));
yr2586_ScaleRatio(F.v5712, F.p2612, &F.v5706, &F.v5708, &F.v5716);
((*(yR110 *)y_deref(F.p2612))).f_hi = yr3350_Join(yr1061_T(y_str("y_fix_bound(", 12)), F.v5704, yr3350_Join(yr1061_T(y_str(", ", 2)), F.v5706, yr3350_Join(yr1061_T(y_str(", ", 2)), F.v5708, yr1061_T(y_str(", 0)", 4)))));
((*(yR110 *)y_deref(F.p2612))).f_dname = INT64_C(0);
yr2529_StoreBounds(F.p2612, y_str("yfix", 4));
((*(yR110 *)y_deref(F.p2612))).f_abstract = 0;
y_use = F.yu; return;
}
if ((((*(yR110 *)y_deref(F.p2612))).f_kind == v810)) {
yr2489_CheckType(((*(yR105 *)y_deref(F.p2613))).f_line, F.p2612, F.v5710);
yr2489_CheckType(((*(yR105 *)y_deref(F.p2613))).f_line, F.p2612, F.v5712);
((*(yR110 *)y_deref(F.p2612))).f_lo = F.v5702;
((*(yR110 *)y_deref(F.p2612))).f_hi = F.v5704;
((*(yR110 *)y_deref(F.p2612))).f_dname = INT64_C(0);
if ((!((yr2523_IsLiteralNode(((*(yR105 *)y_deref(F.p2613))).f_a) && yr2523_IsLiteralNode(((*(yR105 *)y_deref(F.p2613))).f_b))))) {
yr2529_StoreBounds(F.p2612, y_str("double", 6));
}
if ((((*(yR105 *)y_deref(F.p2613))).f_d == ((void *)0))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2613))).f_line, y_str("FLOATING needs PRECISION (VI.A.1.c)", 35));
}
yr2825_Manifest(((*(yR105 *)y_deref(F.p2613))).f_d, &F.v5714, &F.v5718);
if ((!F.v5714)) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2613))).f_line, y_str("PRECISION is a manifest constant", 32));
}
if ((((F.v5718 < INT64_C(1))) || ((F.v5718 > INT64_C(15))))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2613))).f_line, y_str("PRECISION beyond this implementation: its floating point holds 15 decimal digits (Appendix C)", 93));
}
yr1026_SB();
yr1050_SI(F.v5718);
((*(yR110 *)y_deref(F.p2612))).f_prec = yr1056_SE();
((*(yR110 *)y_deref(F.p2612))).f_abstract = 0;
y_use = F.yu; return;
}
if ((!yr2407_IsDiscrete(F.p2612))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2613))).f_line, y_str("only a scalar or integer representation takes a range", 53));
}
if ((((!(((*(yR105 *)y_deref(F.p2613))).f_c == ((void *)0)))) || ((!(((*(yR105 *)y_deref(F.p2613))).f_d == ((void *)0)))))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2613))).f_line, y_str("SCALE and PRECISION qualify numbers", 35));
}
yr2489_CheckType(((*(yR105 *)y_deref(F.p2613))).f_line, F.p2612, F.v5710);
yr2489_CheckType(((*(yR105 *)y_deref(F.p2613))).f_line, F.p2612, F.v5712);
((*(yR110 *)y_deref(F.p2612))).f_lo = F.v5702;
((*(yR110 *)y_deref(F.p2612))).f_hi = F.v5704;
yr2825_Manifest(((*(yR105 *)y_deref(F.p2613))).f_a, &F.v5714, &((*(yR110 *)y_deref(F.p2612))).f_mlo);
((*(yR110 *)y_deref(F.p2612))).f_hasm = F.v5714;
yr2825_Manifest(((*(yR105 *)y_deref(F.p2613))).f_b, &F.v5714, &((*(yR110 *)y_deref(F.p2612))).f_mhi);
((*(yR110 *)y_deref(F.p2612))).f_hasm = (((*(yR110 *)y_deref(F.p2612))).f_hasm && F.v5714);
((*(yR110 *)y_deref(F.p2612))).f_abstract = 0;
((*(yR110 *)y_deref(F.p2612))).f_dname = INT64_C(0);
if ((!((*(yR110 *)y_deref(F.p2612))).f_hasm)) {
yr2529_StoreBounds(F.p2612, y_str("rt_int", 6));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2618_DefineLits(void * a_p2619) {
struct yf2620 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2619 = a_p2619;
F.v5754 = ((*(yR110 *)y_deref(F.p2619))).f_lits;
F.v5758 = INT64_C(0);
while ((!(F.v5754 == ((void *)0)))) {
Y_TICK();
if ((!(yr2283_Find(((*(yR105 *)y_deref(F.v5754))).f_name) == ((void *)0)))) {
F.v5756 = yr2283_Find(((*(yR105 *)y_deref(F.v5754))).f_name);
if ((((!(((*(yR125 *)y_deref(F.v5756))).f_kind == v873))) && ((((*(yR125 *)y_deref(F.v5756))).f_depth == v1273)))) {
yr1186_FailN(((*(yR105 *)y_deref(F.v5754))).f_line, ((*(yR105 *)y_deref(F.v5754))).f_name, y_str(" is declared twice in this scope", 32));
}
}
F.v5756 = yr2253_NewSym(v873, ((*(yR105 *)y_deref(F.v5754))).f_name);
((*(yR125 *)y_deref(F.v5756))).f_rep = F.p2619;
((*(yR125 *)y_deref(F.v5756))).f_mval = F.v5758;
((*(yR125 *)y_deref(F.v5756))).f_hasmv = 1;
yr2355_Define(F.v5756, ((*(yR105 *)y_deref(F.v5754))).f_line);
F.v5758 = y_range(y_add(F.v5758, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5754 = ((*(yR105 *)y_deref(F.v5754))).f_next;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2624_SetRange(void * a_p2625, rt_int a_p2626, rt_int a_p2627) {
struct yf2628 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2625 = a_p2625;
F.p2626 = a_p2626;
F.p2627 = a_p2627;
yr1026_SB();
yr1050_SI(F.p2626);
((*(yR110 *)y_deref(F.p2625))).f_lo = yr1056_SE();
yr1026_SB();
yr1050_SI(F.p2627);
((*(yR110 *)y_deref(F.p2625))).f_hi = yr1056_SE();
((*(yR110 *)y_deref(F.p2625))).f_mlo = F.p2626;
((*(yR110 *)y_deref(F.p2625))).f_mhi = F.p2627;
((*(yR110 *)y_deref(F.p2625))).f_hasm = 1;
((*(yR110 *)y_deref(F.p2625))).f_dname = INT64_C(0);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2632_NewTid(rt_int a_p2633) {
struct yf2634 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2633 = a_p2633;
F.v5773 = yr1195_NewSerial();
yr1026_SB();
if ((!(F.p2633 == INT64_C(0)))) {
yr1044_ST(F.p2633);
} else {
yr1037_SA(y_str("anonymous", 9));
}
yr1037_SA(y_str("#", 1));
yr1050_SI(F.v5773);
{ rt_int rv5777 = yr1056_SE();
y_use = F.yu; return rv5777; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2638_MakeRep(void * a_p2639, rt_int a_p2640, rt_int a_p2641) {
struct yf2642 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2639 = a_p2639;
F.p2640 = a_p2640;
F.p2641 = a_p2641;
F.v5783 = yr2653_MakeRep1(F.p2639, F.p2640, F.p2641);
if ((!(((*(yR105 *)y_deref(F.p2639))).f_x == ((void *)0)))) {
F.v5783 = yr2753_ApplyStorage(F.v5783, ((*(yR105 *)y_deref(F.p2639))).f_x);
}
if ((!(((*(yR105 *)y_deref(F.p2639))).f_text == INT64_C(0)))) {
F.v5785 = yr2388_Real(yr2295_Lookup(((*(yR105 *)y_deref(F.p2639))).f_text, ((*(yR105 *)y_deref(F.p2639))).f_line));
if (((!yr2646_Conforms(((*(yR125 *)y_deref(F.v5785))).f_rep, F.v5783)) || ((((((*(yR105 *)y_deref(F.p2639))).f_kind == v672)) && ((!(((*(yR110 *)y_deref(F.v5783))).f_tid == ((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.v5785))).f_rep))).f_tid))))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p2639))).f_line, ((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.v5785))).f_rep))).f_tname, y_str(": the concrete type is not a representation of this type (rule 61, VII.G)", 73));
}
}
{ void * rv5788 = F.v5783;
y_use = F.yu; return rv5788; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2646_Conforms(void * a_p2647, void * a_p2648) {
struct yf2649 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2647 = a_p2647;
F.p2648 = a_p2648;
if ((!(((*(yR110 *)y_deref(F.p2647))).f_kind == ((*(yR110 *)y_deref(F.p2648))).f_kind))) {
{ rt_int rv5805 = 0;
y_use = F.yu; return rv5805; }
}
if ((((*(yR110 *)y_deref(F.p2647))).f_kind == v825)) {
F.v5793 = ((*(yR110 *)y_deref(F.p2647))).f_fields;
F.v5795 = ((*(yR110 *)y_deref(F.p2648))).f_fields;
while ((((!(F.v5793 == ((void *)0)))) && ((!(F.v5795 == ((void *)0)))))) {
Y_TICK();
if (((((!(((*(yR115 *)y_deref(F.v5793))).f_name == ((*(yR115 *)y_deref(F.v5795))).f_name))) || ((!(((*(yR115 *)y_deref(F.v5793))).f_isconst == ((*(yR115 *)y_deref(F.v5795))).f_isconst)))) || ((!(((*(yR115 *)y_deref(F.v5793))).f_variant == ((*(yR115 *)y_deref(F.v5795))).f_variant))))) {
{ rt_int rv5807 = 0;
y_use = F.yu; return rv5807; }
}
if ((!yr2474_SameType(((*(yR115 *)y_deref(F.v5793))).f_rep, ((*(yR115 *)y_deref(F.v5795))).f_rep))) {
{ rt_int rv5809 = 0;
y_use = F.yu; return rv5809; }
}
F.v5793 = ((*(yR115 *)y_deref(F.v5793))).f_next;
F.v5795 = ((*(yR115 *)y_deref(F.v5795))).f_next;
}
{ rt_int rv5810 = (((F.v5793 == ((void *)0))) && ((F.v5795 == ((void *)0))));
y_use = F.yu; return rv5810; }
}
if ((((*(yR110 *)y_deref(F.p2647))).f_kind == v822)) {
if ((!(((*(yR110 *)y_deref(F.p2647))).f_nidx == ((*(yR110 *)y_deref(F.p2648))).f_nidx))) {
{ rt_int rv5812 = 0;
y_use = F.yu; return rv5812; }
}
F.v5797 = ((*(yR110 *)y_deref(F.p2647))).f_idx;
F.v5799 = ((*(yR110 *)y_deref(F.p2648))).f_idx;
while ((!(F.v5797 == ((void *)0)))) {
Y_TICK();
if ((!yr2516_Identical(F.v5797, F.v5799))) {
{ rt_int rv5814 = 0;
y_use = F.yu; return rv5814; }
}
F.v5797 = ((*(yR110 *)y_deref(F.v5797))).f_link;
F.v5799 = ((*(yR110 *)y_deref(F.v5799))).f_link;
}
{ rt_int rv5815 = yr2474_SameType(((*(yR110 *)y_deref(F.p2647))).f_elem, ((*(yR110 *)y_deref(F.p2648))).f_elem);
y_use = F.yu; return rv5815; }
}
if ((((((*(yR110 *)y_deref(F.p2647))).f_kind == v816)) || ((((*(yR110 *)y_deref(F.p2647))).f_kind == v819)))) {
if ((!(((*(yR110 *)y_deref(F.p2647))).f_nlits == ((*(yR110 *)y_deref(F.p2648))).f_nlits))) {
{ rt_int rv5817 = 0;
y_use = F.yu; return rv5817; }
}
F.v5801 = ((*(yR110 *)y_deref(F.p2647))).f_lits;
F.v5803 = ((*(yR110 *)y_deref(F.p2648))).f_lits;
while ((((!(F.v5801 == ((void *)0)))) && ((!(F.v5803 == ((void *)0)))))) {
Y_TICK();
if ((((!(((*(yR105 *)y_deref(F.v5801))).f_name == ((*(yR105 *)y_deref(F.v5803))).f_name))) || (!yr1088_TEq(((*(yR105 *)y_deref(F.v5801))).f_text, ((*(yR105 *)y_deref(F.v5803))).f_text)))) {
{ rt_int rv5819 = 0;
y_use = F.yu; return rv5819; }
}
F.v5801 = ((*(yR105 *)y_deref(F.v5801))).f_next;
F.v5803 = ((*(yR105 *)y_deref(F.v5803))).f_next;
}
{ rt_int rv5821 = 1;
y_use = F.yu; return rv5821; }
}
if (((((((*(yR110 *)y_deref(F.p2647))).f_kind == v834)) || ((((*(yR110 *)y_deref(F.p2647))).f_kind == v831))) || ((((*(yR110 *)y_deref(F.p2647))).f_kind == v828)))) {
if ((((((*(yR110 *)y_deref(F.p2647))).f_elem == ((void *)0))) || ((((*(yR110 *)y_deref(F.p2648))).f_elem == ((void *)0))))) {
{ rt_int rv5823 = 1;
y_use = F.yu; return rv5823; }
}
{ rt_int rv5824 = yr2474_SameType(((*(yR110 *)y_deref(F.p2647))).f_elem, ((*(yR110 *)y_deref(F.p2648))).f_elem);
y_use = F.yu; return rv5824; }
}
{ rt_int rv5826 = 1;
y_use = F.yu; return rv5826; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2653_MakeRep1(void * a_p2654, rt_int a_p2655, rt_int a_p2656) {
struct yf2657 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2654 = a_p2654;
F.p2655 = a_p2655;
F.p2656 = a_p2656;
F.v5842 = ((*(yR105 *)y_deref(F.p2654))).f_kind;
F.v5846 = INT64_C(0);
F.v5848 = F.p2655;
if ((!(((*(yR105 *)y_deref(F.p2654))).f_text == INT64_C(0)))) {
F.v5840 = yr2388_Real(yr2295_Lookup(((*(yR105 *)y_deref(F.p2654))).f_text, ((*(yR105 *)y_deref(F.p2654))).f_line));
if ((((!(((*(yR125 *)y_deref(F.v5840))).f_kind == v870))) && ((!(((*(yR125 *)y_deref(F.v5840))).f_kind == v867))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p2654))).f_line, ((*(yR105 *)y_deref(F.p2654))).f_text, y_str(" is not a type", 14));
}
F.v5846 = ((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.v5840))).f_rep))).f_tid;
F.v5848 = ((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.v5840))).f_rep))).f_tname;
}
if ((F.v5842 == v672)) {
F.v5840 = yr2388_Real(yr2295_Lookup(((*(yR105 *)y_deref(F.p2654))).f_name, ((*(yR105 *)y_deref(F.p2654))).f_line));
if ((((!(((*(yR125 *)y_deref(F.v5840))).f_kind == v870))) && ((!(((*(yR125 *)y_deref(F.v5840))).f_kind == v867))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p2654))).f_line, ((*(yR105 *)y_deref(F.p2654))).f_name, y_str(" is not a representation", 24));
}
F.v5832 = ((*(yR125 *)y_deref(F.v5840))).f_rep;
if ((!(((*(yR105 *)y_deref(F.p2654))).f_a == ((void *)0)))) {
F.v5832 = yr2401_CopyRep(F.v5832);
yr2611_Qualify(F.v5832, ((*(yR105 *)y_deref(F.p2654))).f_a);
}
{ void * rv5853 = F.v5832;
y_use = F.yu; return rv5853; }
}
if ((F.v5846 == INT64_C(0))) {
F.v5846 = yr2632_NewTid(F.p2655);
if ((F.v5848 == INT64_C(0))) {
F.v5848 = F.v5846;
}
}
if ((F.v5842 == v675)) {
F.v5832 = yr2394_NewRep(v816, F.v5846);
((*(yR110 *)y_deref(F.v5832))).f_tname = F.v5848;
((*(yR110 *)y_deref(F.v5832))).f_ordered = (((*(yR105 *)y_deref(F.p2654))).f_flag == INT64_C(1));
((*(yR110 *)y_deref(F.v5832))).f_lits = ((*(yR105 *)y_deref(F.p2654))).f_a;
((*(yR110 *)y_deref(F.v5832))).f_nlits = yr1954_Count(((*(yR105 *)y_deref(F.p2654))).f_a);
yr2624_SetRange(F.v5832, INT64_C(0), y_range(y_sub(((*(yR110 *)y_deref(F.v5832))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr2618_DefineLits(F.v5832);
if ((!(((*(yR105 *)y_deref(F.p2654))).f_b == ((void *)0)))) {
yr2611_Qualify(F.v5832, ((*(yR105 *)y_deref(F.p2654))).f_b);
}
{ void * rv5860 = F.v5832;
y_use = F.yu; return rv5860; }
}
if ((F.v5842 == v678)) {
F.v5832 = yr2394_NewRep(v819, F.v5846);
((*(yR110 *)y_deref(F.v5832))).f_tname = F.v5848;
((*(yR110 *)y_deref(F.v5832))).f_ordered = 1;
((*(yR110 *)y_deref(F.v5832))).f_lits = ((*(yR105 *)y_deref(F.p2654))).f_a;
((*(yR110 *)y_deref(F.v5832))).f_nlits = yr1954_Count(((*(yR105 *)y_deref(F.p2654))).f_a);
if ((((*(yR110 *)y_deref(F.v5832))).f_nlits > INT64_C(256))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2654))).f_line, y_str("this implementation takes alphabets of up to 256 characters", 59));
}
yr2624_SetRange(F.v5832, INT64_C(0), y_range(y_sub(((*(yR110 *)y_deref(F.v5832))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((!(((*(yR105 *)y_deref(F.p2654))).f_b == ((void *)0)))) {
yr2611_Qualify(F.v5832, ((*(yR105 *)y_deref(F.p2654))).f_b);
}
{ void * rv5867 = F.v5832;
y_use = F.yu; return rv5867; }
}
if ((F.v5842 == v681)) {
F.v5832 = yr2394_NewRep(v822, F.v5846);
((*(yR110 *)y_deref(F.v5832))).f_tname = F.v5848;
F.v5844 = ((*(yR105 *)y_deref(F.p2654))).f_a;
F.v5838 = ((void *)0);
while ((!(F.v5844 == ((void *)0)))) {
Y_TICK();
F.v5836 = yr2401_CopyRep(yr2638_MakeRep(F.v5844, INT64_C(0), 0));
if ((!yr2407_IsDiscrete(F.v5836))) {
yr1178_FailS(((*(yR105 *)y_deref(F.v5844))).f_line, y_str("an index is an integer or scalar representation", 47));
}
yr2497_CheckRepresented(F.v5836, ((*(yR105 *)y_deref(F.v5844))).f_line);
((*(yR110 *)y_deref(F.v5836))).f_link = ((void *)0);
if ((F.v5838 == ((void *)0))) {
((*(yR110 *)y_deref(F.v5832))).f_idx = F.v5836;
} else {
((*(yR110 *)y_deref(F.v5838))).f_link = F.v5836;
}
F.v5838 = F.v5836;
((*(yR110 *)y_deref(F.v5832))).f_nidx = y_range(y_add(((*(yR110 *)y_deref(F.v5832))).f_nidx, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5844 = ((*(yR105 *)y_deref(F.v5844))).f_next;
}
if ((((*(yR110 *)y_deref(F.v5832))).f_nidx > INT64_C(8))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2654))).f_line, y_str("this implementation takes arrays of up to 8 dimensions", 54));
}
((*(yR110 *)y_deref(F.v5832))).f_elem = yr2638_MakeRep(((*(yR105 *)y_deref(F.p2654))).f_b, INT64_C(0), F.p2656);
if ((!F.p2656)) {
yr2497_CheckRepresented(((*(yR110 *)y_deref(F.v5832))).f_elem, ((*(yR105 *)y_deref(F.p2654))).f_line);
yr2673_BuildArrayDesc(F.v5832);
} else {
((*(yR110 *)y_deref(F.v5832))).f_abstract = ((*(yR110 *)y_deref(((*(yR110 *)y_deref(F.v5832))).f_elem))).f_abstract;
if ((!((*(yR110 *)y_deref(F.v5832))).f_abstract)) {
yr2673_BuildArrayDesc(F.v5832);
}
}
((*(yR110 *)y_deref(F.v5832))).f_deep = 1;
{ void * rv5877 = F.v5832;
y_use = F.yu; return rv5877; }
}
if ((F.v5842 == v684)) {
F.v5832 = yr2394_NewRep(v825, F.v5846);
((*(yR110 *)y_deref(F.v5832))).f_tname = F.v5848;
yr2703_MakeRecord(F.v5832, F.p2654, F.p2656);
{ void * rv5878 = F.v5832;
y_use = F.yu; return rv5878; }
}
if (((((F.v5842 == v690)) || ((F.v5842 == v687))) || ((F.v5842 == v693)))) {
if ((F.v5842 == v690)) {
F.v5832 = yr2394_NewRep(v828, F.v5846);
((*(yR110 *)y_deref(F.v5832))).f_tname = F.v5848;
if (((((((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p2654))).f_a))).f_kind == v672)) && ((((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p2654))).f_a))).f_a == ((void *)0)))) && ((yr2283_Find(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p2654))).f_a))).f_name) == ((void *)0))))) {
((*(yR110 *)y_deref(F.v5832))).f_forward = ((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p2654))).f_a))).f_name;
((*(yR110 *)y_deref(F.v5832))).f_fwdscope = v1273;
F.v5844 = yr1939_NewNode(v669, ((*(yR105 *)y_deref(F.p2654))).f_line);
((*(yR105 *)y_deref(F.v5844))).f_rep = F.v5832;
((*(yR105 *)y_deref(F.v5844))).f_next = v1364;
v1364 = F.v5844;
{ void * rv5879 = F.v5832;
y_use = F.yu; return rv5879; }
}
((*(yR110 *)y_deref(F.v5832))).f_elem = yr2638_MakeRep(((*(yR105 *)y_deref(F.p2654))).f_a, INT64_C(0), 0);
{ void * rv5882 = F.v5832;
y_use = F.yu; return rv5882; }
}
if ((F.v5842 == v687)) {
F.v5832 = yr2394_NewRep(v831, F.v5846);
((*(yR110 *)y_deref(F.v5832))).f_tname = F.v5848;
((*(yR110 *)y_deref(F.v5832))).f_elem = yr2638_MakeRep(((*(yR105 *)y_deref(F.p2654))).f_a, INT64_C(0), F.p2656);
{ void * rv5884 = F.v5832;
y_use = F.yu; return rv5884; }
}
F.v5832 = yr2394_NewRep(v834, F.v5846);
((*(yR110 *)y_deref(F.v5832))).f_tname = F.v5848;
((*(yR110 *)y_deref(F.v5832))).f_elem = yr2638_MakeRep(((*(yR105 *)y_deref(F.p2654))).f_a, INT64_C(0), 0);
if ((!yr2407_IsDiscrete(((*(yR110 *)y_deref(F.v5832))).f_elem))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2654))).f_line, y_str("a set is of an integer or scalar representation", 47));
}
yr2497_CheckRepresented(((*(yR110 *)y_deref(F.v5832))).f_elem, ((*(yR105 *)y_deref(F.p2654))).f_line);
{ void * rv5888 = F.v5832;
y_use = F.yu; return rv5888; }
}
yr1178_FailS(((*(yR105 *)y_deref(F.p2654))).f_line, y_str("this representation is not translated", 37));
{ void * rv5890 = ((void *)0);
y_use = F.yu; return rv5890; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2661_ResolvePending(rt_int a_p2662, void * a_p2663) {
struct yf2664 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2662 = a_p2662;
F.p2663 = a_p2663;
F.v5895 = v1364;
F.v5897 = ((void *)0);
while ((!(F.v5895 == ((void *)0)))) {
Y_TICK();
if ((((*(yR110 *)y_deref(((*(yR105 *)y_deref(F.v5895))).f_rep))).f_forward == F.p2662)) {
((*(yR110 *)y_deref(((*(yR105 *)y_deref(F.v5895))).f_rep))).f_elem = F.p2663;
((*(yR110 *)y_deref(((*(yR105 *)y_deref(F.v5895))).f_rep))).f_forward = INT64_C(0);
if ((F.v5897 == ((void *)0))) {
v1364 = ((*(yR105 *)y_deref(F.v5895))).f_next;
} else {
((*(yR105 *)y_deref(F.v5897))).f_next = ((*(yR105 *)y_deref(F.v5895))).f_next;
}
} else {
F.v5897 = F.v5895;
}
F.v5895 = ((*(yR105 *)y_deref(F.v5895))).f_next;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2668_CheckPending(void) {
struct yf2669 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v5901 = v1364;
while ((!(F.v5901 == ((void *)0)))) {
Y_TICK();
if ((((*(yR110 *)y_deref(((*(yR105 *)y_deref(F.v5901))).f_rep))).f_fwdscope >= v1273)) {
yr1186_FailN(((*(yR105 *)y_deref(F.v5901))).f_line, ((*(yR110 *)y_deref(((*(yR105 *)y_deref(F.v5901))).f_rep))).f_forward, y_str(" is named by a pointer but not declared", 39));
}
F.v5901 = ((*(yR105 *)y_deref(F.v5901))).f_next;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2673_BuildArrayDesc(void * a_p2674) {
struct yf2675 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2674 = a_p2674;
yr2468_NewDesc(F.p2674);
yr1026_SB();
yr1037_SA(y_str("{ rt_int lo[", 12));
yr1050_SI(((*(yR110 *)y_deref(F.p2674))).f_nidx);
yr1037_SA(y_str("] = {", 5));
F.v5906 = ((*(yR110 *)y_deref(F.p2674))).f_idx;
F.v5910 = 1;
while ((!(F.v5906 == ((void *)0)))) {
Y_TICK();
if ((!F.v5910)) {
yr1037_SA(y_str(", ", 2));
}
F.v5910 = 0;
yr1044_ST(yr2537_LoText(F.v5906));
F.v5906 = ((*(yR110 *)y_deref(F.v5906))).f_link;
}
yr1037_SA(y_str("}, hi[", 6));
yr1050_SI(((*(yR110 *)y_deref(F.p2674))).f_nidx);
yr1037_SA(y_str("] = {", 5));
F.v5906 = ((*(yR110 *)y_deref(F.p2674))).f_idx;
F.v5910 = 1;
while ((!(F.v5906 == ((void *)0)))) {
Y_TICK();
if ((!F.v5910)) {
yr1037_SA(y_str(", ", 2));
}
F.v5910 = 0;
yr1044_ST(yr2543_HiText(F.v5906));
F.v5906 = ((*(yR110 *)y_deref(F.v5906))).f_link;
}
yr1037_SA(y_str("}; y_desc_array(", 16));
yr1044_ST(yr2462_DescOf(F.p2674));
yr1037_SA(y_str(", ", 2));
yr1050_SI(((*(yR110 *)y_deref(F.p2674))).f_nidx);
yr1037_SA(y_str(", lo, hi, ", 10));
yr1044_ST(yr2462_DescOf(((*(yR110 *)y_deref(F.p2674))).f_elem));
yr1037_SA(y_str("); }", 4));
F.v5908 = yr1056_SE();
yr1132_Emit(F.v5908);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2679_AddField(void * a_p2680, void * * a_p2681, rt_int a_p2682, void * a_p2683, rt_int a_p2684, rt_int a_p2685, void * a_p2686, rt_int a_p2687) {
struct yf2688 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2680 = a_p2680;
F.p2681 = a_p2681;
F.p2682 = a_p2682;
F.p2683 = a_p2683;
F.p2684 = a_p2684;
F.p2685 = a_p2685;
F.p2686 = a_p2686;
F.p2687 = a_p2687;
F.v5935 = ((*(yR110 *)y_deref(F.p2680))).f_fields;
while ((!(F.v5935 == ((void *)0)))) {
Y_TICK();
if ((((*(yR115 *)y_deref(F.v5935))).f_name == F.p2682)) {
yr1186_FailN(F.p2687, F.p2682, y_str(" is a component twice", 21));
}
F.v5935 = ((*(yR115 *)y_deref(F.v5935))).f_next;
}
({ F.v5935 = y_new(sizeof(yR115)); });
(*(yR115 *)y_deref(F.v5935)) = ((yR115){ .f_name = F.p2682, .f_rep = F.p2683, .f_isconst = F.p2684, .f_variant = F.p2685, .f_labels = F.p2686, .f_next = ((void *)0), .f_at = INT64_C(-1) });
if (((*F.p2681) == ((void *)0))) {
((*(yR110 *)y_deref(F.p2680))).f_fields = F.v5935;
} else {
((*(yR115 *)y_deref((*F.p2681)))).f_next = F.v5935;
}
(*F.p2681) = F.v5935;
if (yr2431_Deep(F.p2683)) {
((*(yR110 *)y_deref(F.p2680))).f_deep = 1;
}
if (((*(yR110 *)y_deref(F.p2683))).f_abstract) {
((*(yR110 *)y_deref(F.p2680))).f_abstract = 1;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2692_AddFields(void * a_p2693, void * * a_p2694, void * a_p2695, rt_int a_p2696, void * a_p2697, rt_int a_p2698) {
struct yf2699 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2693 = a_p2693;
F.p2694 = a_p2694;
F.p2695 = a_p2695;
F.p2696 = a_p2696;
F.p2697 = a_p2697;
F.p2698 = a_p2698;
F.v5948 = F.p2695;
F.v5950 = F.p2695;
while ((!(F.v5948 == ((void *)0)))) {
Y_TICK();
F.v5952 = yr2638_MakeRep(((*(yR105 *)y_deref(F.v5948))).f_b, INT64_C(0), F.p2698);
if ((!F.p2698)) {
yr2497_CheckRepresented(F.v5952, ((*(yR105 *)y_deref(F.v5948))).f_line);
}
F.v5950 = ((*(yR105 *)y_deref(F.v5948))).f_a;
while ((!(F.v5950 == ((void *)0)))) {
Y_TICK();
yr2679_AddField(F.p2693, &(*F.p2694), ((*(yR105 *)y_deref(F.v5950))).f_name, F.v5952, (((*(yR105 *)y_deref(F.v5948))).f_ival == v270), F.p2696, F.p2697, ((*(yR105 *)y_deref(F.v5950))).f_line);
if ((!(((*(yR105 *)y_deref(F.v5950))).f_a == ((void *)0)))) {
((*(yR115 *)y_deref((*F.p2694)))).f_at = yr2760_AtAddress(((*(yR105 *)y_deref(F.v5950))).f_a);
}
F.v5950 = ((*(yR105 *)y_deref(F.v5950))).f_next;
}
F.v5948 = ((*(yR105 *)y_deref(F.v5948))).f_next;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2703_MakeRecord(void * a_p2704, void * a_p2705, rt_int a_p2706) {
struct yf2707 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2704 = a_p2704;
F.p2705 = a_p2705;
F.p2706 = a_p2706;
F.v5959 = ((void *)0);
F.v5967 = INT64_C(0);
F.v5974 = INT64_C(0);
yr2692_AddFields(F.p2704, &F.v5959, ((*(yR105 *)y_deref(F.p2705))).f_a, INT64_C(0), ((void *)0), F.p2706);
if ((!(((*(yR105 *)y_deref(F.p2705))).f_b == ((void *)0)))) {
F.v5961 = ((*(yR105 *)y_deref(F.p2705))).f_b;
F.v5965 = yr2638_MakeRep(((*(yR105 *)y_deref(F.v5961))).f_b, INT64_C(0), 0);
if ((!yr2407_IsDiscrete(F.v5965))) {
yr1178_FailS(((*(yR105 *)y_deref(F.v5961))).f_line, y_str("the case-selection component is integer or scalar", 49));
}
yr2679_AddField(F.p2704, &F.v5959, ((*(yR105 *)y_deref(F.v5961))).f_name, F.v5965, 1, INT64_C(0), ((void *)0), ((*(yR105 *)y_deref(F.v5961))).f_line);
((*(yR110 *)y_deref(F.p2704))).f_selector = F.v5959;
F.v5963 = ((*(yR105 *)y_deref(F.v5961))).f_a;
while ((!(F.v5963 == ((void *)0)))) {
Y_TICK();
F.v5967 = y_range(y_add(F.v5967, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr2692_AddFields(F.p2704, &F.v5959, ((*(yR105 *)y_deref(F.v5963))).f_b, F.v5967, ((*(yR105 *)y_deref(F.v5963))).f_a, F.p2706);
F.v5963 = ((*(yR105 *)y_deref(F.v5963))).f_next;
}
}
if ((F.p2706 && ((*(yR110 *)y_deref(F.p2704))).f_abstract)) {
y_use = F.yu; return;
}
((*(yR110 *)y_deref(F.p2704))).f_abstract = 0;
v1000 = ((*(yR105 *)y_deref(F.p2705))).f_line;
F.v5967 = yr2738_RecordBits(F.p2704, 0, 1);
F.v5967 = INT64_C(0);
((*(yR110 *)y_deref(F.p2704))).f_cname = yr1200_Fresh(y_str("yR", 2));
yr1026_SB();
yr1037_SA(y_str("typedef struct ", 15));
yr1044_ST(((*(yR110 *)y_deref(F.p2704))).f_cname);
yr1037_SA(y_str(" ", 1));
yr1044_ST(((*(yR110 *)y_deref(F.p2704))).f_cname);
yr1037_SA(y_str(";", 1));
F.v5972 = yr1056_SE();
yr1110_Put(&v978, F.v5972);
yr1026_SB();
yr1037_SA(y_str("struct ", 7));
yr1044_ST(((*(yR110 *)y_deref(F.p2704))).f_cname);
yr1037_SA(y_str(" {", 2));
F.v5970 = ((*(yR110 *)y_deref(F.p2704))).f_fields;
while ((!(F.v5970 == ((void *)0)))) {
Y_TICK();
yr1037_SA(y_str(" ", 1));
yr1044_ST(yr2456_CType(((*(yR115 *)y_deref(F.v5970))).f_rep));
yr1037_SA(y_str(" f_", 3));
yr1044_ST(((*(yR115 *)y_deref(F.v5970))).f_name);
yr1037_SA(y_str(";", 1));
F.v5974 = y_range(y_add(F.v5974, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5970 = ((*(yR115 *)y_deref(F.v5970))).f_next;
}
if ((F.v5974 == INT64_C(0))) {
yr1037_SA(y_str(" int empty_;", 12));
}
yr1037_SA(y_str(" };", 3));
F.v5972 = yr1056_SE();
yr1110_Put(&v980, F.v5972);
yr2468_NewDesc(F.p2704);
yr1026_SB();
yr1037_SA(y_str("{ static const size_t o[] = {", 29));
F.v5970 = ((*(yR110 *)y_deref(F.p2704))).f_fields;
while ((!(F.v5970 == ((void *)0)))) {
Y_TICK();
yr1037_SA(y_str("offsetof(", 9));
yr1044_ST(((*(yR110 *)y_deref(F.p2704))).f_cname);
yr1037_SA(y_str(", f_", 4));
yr1044_ST(((*(yR115 *)y_deref(F.v5970))).f_name);
yr1037_SA(y_str("), ", 3));
F.v5970 = ((*(yR115 *)y_deref(F.v5970))).f_next;
}
yr1037_SA(y_str("0}; const ydesc **f = rt_alloc(", 31));
yr1050_SI(y_range(y_add(F.v5974, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1037_SA(y_str(" * sizeof *f);", 14));
F.v5967 = INT64_C(0);
F.v5970 = ((*(yR110 *)y_deref(F.p2704))).f_fields;
while ((!(F.v5970 == ((void *)0)))) {
Y_TICK();
yr1037_SA(y_str(" f[", 3));
yr1050_SI(F.v5967);
yr1037_SA(y_str("] = ", 4));
yr1044_ST(yr2462_DescOf(((*(yR115 *)y_deref(F.v5970))).f_rep));
yr1037_SA(y_str(";", 1));
F.v5967 = y_range(y_add(F.v5967, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v5970 = ((*(yR115 *)y_deref(F.v5970))).f_next;
}
yr1037_SA(y_str(" y_desc_record(", 15));
yr1044_ST(yr2462_DescOf(F.p2704));
yr1037_SA(y_str(", sizeof(", 9));
yr1044_ST(((*(yR110 *)y_deref(F.p2704))).f_cname);
yr1037_SA(y_str("), ", 3));
yr1050_SI(F.v5974);
yr1037_SA(y_str(", o, (const ydesc *const *)f); }", 32));
F.v5972 = yr1056_SE();
yr1132_Emit(F.v5972);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr2711_FindField(void * a_p2712, rt_int a_p2713) {
struct yf2714 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2712 = a_p2712;
F.p2713 = a_p2713;
F.v6024 = ((*(yR110 *)y_deref(F.p2712))).f_fields;
while ((!(F.v6024 == ((void *)0)))) {
Y_TICK();
if ((((*(yR115 *)y_deref(F.v6024))).f_name == F.p2713)) {
{ void * rv6025 = F.v6024;
y_use = F.yu; return rv6025; }
}
F.v6024 = ((*(yR115 *)y_deref(F.v6024))).f_next;
}
{ void * rv6026 = ((void *)0);
y_use = F.yu; return rv6026; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2718_BitsFor(rt_int a_p2719) {
struct yf2720 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2719 = a_p2719;
F.v6030 = INT64_C(1);
F.v6033 = INT64_C(2);
while ((((F.v6033 <= F.p2719)) && ((F.v6030 < INT64_C(63))))) {
Y_TICK();
F.v6030 = y_range(y_add(F.v6030, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6033 = y_range(y_mul(F.v6033, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv6040 = F.v6030;
y_use = F.yu; return rv6040; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2724_RoundUp(rt_int a_p2725, rt_int a_p2726) {
struct yf2727 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2725 = a_p2725;
F.p2726 = a_p2726;
if ((F.p2726 <= INT64_C(1))) {
{ rt_int rv6045 = F.p2725;
y_use = F.yu; return rv6045; }
}
{ rt_int rv6051 = y_range(y_mul((y_div((y_sub((y_add(F.p2725, F.p2726)), INT64_C(1))), F.p2726)), F.p2726), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv6051; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2731_Bits(void * a_p2732, rt_int a_p2733) {
struct yf2734 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2732 = a_p2732;
F.p2733 = a_p2733;
F.v6056 = ((*(yR110 *)y_deref(F.p2732))).f_kind;
F.v6058 = (F.p2733 || ((*(yR110 *)y_deref(F.p2732))).f_packed);
if (((!F.v6058) && ((!(((*(yR110 *)y_deref(F.p2732))).f_bits == INT64_C(0)))))) {
{ rt_int rv6070 = ((*(yR110 *)y_deref(F.p2732))).f_bits;
y_use = F.yu; return rv6070; }
}
F.v6060 = INT64_C(64);
if (yr2407_IsDiscrete(F.p2732)) {
if (F.v6058) {
if (((((F.v6056 == v816)) || ((F.v6056 == v819))) || ((F.v6056 == v813)))) {
F.v6060 = yr2718_BitsFor(y_range(y_sub(((*(yR110 *)y_deref(F.p2732))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
} else if (((*(yR110 *)y_deref(F.p2732))).f_hasm) {
F.v6064 = ((*(yR110 *)y_deref(F.p2732))).f_mlo;
F.v6066 = ((*(yR110 *)y_deref(F.p2732))).f_mhi;
if ((F.v6064 >= INT64_C(0))) {
F.v6060 = yr2718_BitsFor(F.v6066);
} else if (((y_sub(INT64_C(-1), F.v6064)) > F.v6066)) {
F.v6060 = y_range(y_add(INT64_C(1), yr2718_BitsFor(y_range(y_sub(INT64_C(-1), F.v6064), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v6060 = y_range(y_add(INT64_C(1), yr2718_BitsFor(F.v6066)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
}
} else if ((F.v6056 == v807)) {
F.v6060 = INT64_C(128);
} else if ((((F.v6056 == v828)) || ((F.v6056 == v849)))) {
if (F.v6058) {
F.v6060 = INT64_C(24);
}
} else if ((F.v6056 == v834)) {
if (((*(yR110 *)y_deref(((*(yR110 *)y_deref(F.p2732))).f_elem))).f_hasm) {
F.v6062 = y_range(y_add((y_sub(((*(yR110 *)y_deref(((*(yR110 *)y_deref(F.p2732))).f_elem))).f_mhi, ((*(yR110 *)y_deref(((*(yR110 *)y_deref(F.p2732))).f_elem))).f_mlo)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.v6062 > (y_div(v906, INT64_C(2))))) {
F.v6060 = INT64_C(-1);
} else if (F.v6058) {
F.v6060 = F.v6062;
} else {
F.v6060 = yr2724_RoundUp(F.v6062, INT64_C(64));
}
} else {
F.v6060 = INT64_C(-1);
}
} else if ((F.v6056 == v822)) {
F.v6062 = INT64_C(1);
F.v6068 = ((*(yR110 *)y_deref(F.p2732))).f_idx;
while ((!(F.v6068 == ((void *)0)))) {
Y_TICK();
if ((!((*(yR110 *)y_deref(F.v6068))).f_hasm)) {
{ rt_int rv6095 = INT64_C(-1);
y_use = F.yu; return rv6095; }
}
F.v6062 = y_range(y_mul(F.v6062, (y_add((y_sub(((*(yR110 *)y_deref(F.v6068))).f_mhi, ((*(yR110 *)y_deref(F.v6068))).f_mlo)), INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.v6062 > INT64_C(100000000000))) {
{ rt_int rv6102 = INT64_C(-1);
y_use = F.yu; return rv6102; }
}
F.v6068 = ((*(yR110 *)y_deref(F.v6068))).f_link;
}
F.v6060 = yr2731_Bits(((*(yR110 *)y_deref(F.p2732))).f_elem, F.v6058);
if ((F.v6060 < INT64_C(0))) {
{ rt_int rv6105 = INT64_C(-1);
y_use = F.yu; return rv6105; }
}
if (((!F.v6058) && (!((*(yR110 *)y_deref(((*(yR110 *)y_deref(F.p2732))).f_elem))).f_packed))) {
F.v6060 = yr2724_RoundUp(F.v6060, INT64_C(64));
}
F.v6060 = yr2724_RoundUp(F.v6060, ((*(yR110 *)y_deref(((*(yR110 *)y_deref(F.p2732))).f_elem))).f_align);
F.v6060 = y_range(y_mul(F.v6060, F.v6062), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v6056 == v825)) {
F.v6060 = yr2738_RecordBits(F.p2732, F.v6058, 0);
} else if (((((F.v6056 == v843)) || ((F.v6056 == v846))) || ((F.v6056 == v855)))) {
F.v6060 = INT64_C(-1);
}
if ((((F.v6060 > INT64_C(0))) && (!F.v6058))) {
F.v6060 = yr2724_RoundUp(F.v6060, INT64_C(64));
}
if ((!F.v6058)) {
((*(yR110 *)y_deref(F.p2732))).f_bits = F.v6060;
}
{ rt_int rv6112 = F.v6060;
y_use = F.yu; return rv6112; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2738_RecordBits(void * a_p2739, rt_int a_p2740, rt_int a_p2741) {
struct yf2742 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2739 = a_p2739;
F.p2740 = a_p2740;
F.p2741 = a_p2741;
F.v6120 = INT64_C(0);
F.v6123 = INT64_C(0);
F.v6126 = INT64_C(0);
F.v6129 = INT64_C(0);
F.v6132 = INT64_C(0);
F.v6135 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(512)}; y_desc_array(&F.yd_6145, 1, lo, hi, &y_d_int); }
y_init(&F.yd_6145, &F.v6147);
y_init(&F.yd_6145, &F.v6149);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(512)}; y_desc_array(&F.yd_6158, 1, lo, hi, &y_d_ptr); }
y_init(&F.yd_6158, &F.v6160);
F.v6118 = ((*(yR110 *)y_deref(F.p2739))).f_fields;
while ((!(F.v6118 == ((void *)0)))) {
Y_TICK();
F.v6126 = yr2731_Bits(((*(yR115 *)y_deref(F.v6118))).f_rep, F.p2740);
if ((F.v6126 < INT64_C(0))) {
{ rt_int rv6163 = INT64_C(-1);
y_use = F.yu; return rv6163; }
}
if (((!F.p2740) && (!((*(yR110 *)y_deref(((*(yR115 *)y_deref(F.v6118))).f_rep))).f_packed))) {
F.v6126 = yr2724_RoundUp(F.v6126, INT64_C(64));
}
if ((!(((*(yR115 *)y_deref(F.v6118))).f_variant == INT64_C(0)))) {
if ((F.v6132 == INT64_C(0))) {
F.v6132 = F.v6120;
}
if (yr2746_FirstOfVariant(F.p2739, F.v6118)) {
F.v6120 = F.v6132;
}
}
if ((((*(yR115 *)y_deref(F.v6118))).f_at >= INT64_C(0))) {
F.v6129 = ((*(yR115 *)y_deref(F.v6118))).f_at;
} else if ((F.p2740 || ((*(yR110 *)y_deref(((*(yR115 *)y_deref(F.v6118))).f_rep))).f_packed)) {
F.v6129 = yr2724_RoundUp(F.v6120, ((*(yR110 *)y_deref(((*(yR115 *)y_deref(F.v6118))).f_rep))).f_align);
} else {
F.v6129 = yr2724_RoundUp(F.v6120, INT64_C(64));
}
if ((F.p2741 && ((F.v6135 < INT64_C(512))))) {
F.v6135 = y_range(y_add(F.v6135, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(F.v6147).p)[y_ix1(F.v6147, F.v6135)] = F.v6129;
((rt_int *)(F.v6149).p)[y_ix1(F.v6149, F.v6135)] = y_range(y_add(F.v6129, F.v6126), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(F.v6160).p)[y_ix1(F.v6160, F.v6135)] = F.v6118;
}
F.v6120 = y_range(y_add(F.v6129, F.v6126), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((F.v6120 > F.v6123)) {
F.v6123 = F.v6120;
}
F.v6118 = ((*(yR115 *)y_deref(F.v6118))).f_next;
}
if (F.p2741) {
F.lo6177 = INT64_C(1);
F.hi6178 = F.v6135;
{ rt_int hi6182 = F.hi6178;
for (rt_int i6181 = F.lo6177; i6181 <= hi6182; i6181++) { F.c_6180 = i6181; Y_TICK();
F.lo6186 = y_add(F.c_6180, INT64_C(1));
F.hi6187 = F.v6135;
{ rt_int hi6191 = F.hi6187;
for (rt_int i6190 = F.lo6186; i6190 <= hi6191; i6190++) { F.c_6189 = i6190; Y_TICK();
if ((((((((((*(yR115 *)y_deref(((void * *)(F.v6160).p)[y_ix1(F.v6160, F.c_6180)]))).f_at >= INT64_C(0))) || ((((*(yR115 *)y_deref(((void * *)(F.v6160).p)[y_ix1(F.v6160, F.c_6189)]))).f_at >= INT64_C(0))))) && ((((rt_int *)(F.v6147).p)[y_ix1(F.v6147, F.c_6180)] < ((rt_int *)(F.v6149).p)[y_ix1(F.v6149, F.c_6189)]))) && ((((rt_int *)(F.v6147).p)[y_ix1(F.v6147, F.c_6189)] < ((rt_int *)(F.v6149).p)[y_ix1(F.v6149, F.c_6180)]))) && (((((((*(yR115 *)y_deref(((void * *)(F.v6160).p)[y_ix1(F.v6160, F.c_6180)]))).f_variant == INT64_C(0))) || ((((*(yR115 *)y_deref(((void * *)(F.v6160).p)[y_ix1(F.v6160, F.c_6189)]))).f_variant == INT64_C(0)))) || ((((*(yR115 *)y_deref(((void * *)(F.v6160).p)[y_ix1(F.v6160, F.c_6180)]))).f_variant == ((*(yR115 *)y_deref(((void * *)(F.v6160).p)[y_ix1(F.v6160, F.c_6189)]))).f_variant)))))) {
yr1157_Fail(v1000, yr3350_Join(((*(yR115 *)y_deref(((void * *)(F.v6160).p)[y_ix1(F.v6160, F.c_6189)]))).f_name, yr3350_Join(yr1061_T(y_str(" overlaps ", 10)), ((*(yR115 *)y_deref(((void * *)(F.v6160).p)[y_ix1(F.v6160, F.c_6180)]))).f_name, INT64_C(0)), yr1061_T(y_str(" in the record (XIV.VI.1)", 25))));
}
if (i6190 == hi6191) break;
}}
if (i6181 == hi6182) break;
}}
}
{ rt_int rv6199 = F.v6123;
y_use = F.yu; return rv6199; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2746_FirstOfVariant(void * a_p2747, void * a_p2748) {
struct yf2749 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2747 = a_p2747;
F.p2748 = a_p2748;
F.v6204 = ((*(yR110 *)y_deref(F.p2747))).f_fields;
while ((!(F.v6204 == F.p2748))) {
Y_TICK();
if ((((*(yR115 *)y_deref(F.v6204))).f_variant == ((*(yR115 *)y_deref(F.p2748))).f_variant)) {
{ rt_int rv6206 = 0;
y_use = F.yu; return rv6206; }
}
F.v6204 = ((*(yR115 *)y_deref(F.v6204))).f_next;
}
{ rt_int rv6208 = 1;
y_use = F.yu; return rv6208; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2753_ApplyStorage(void * a_p2754, void * a_p2755) {
struct yf2756 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2754 = a_p2754;
F.p2755 = a_p2755;
F.v6213 = yr2401_CopyRep(F.p2754);
if ((((*(yR105 *)y_deref(F.p2755))).f_flag == INT64_C(1))) {
((*(yR110 *)y_deref(F.v6213))).f_packed = 1;
if ((!(((*(yR105 *)y_deref(F.p2755))).f_a == ((void *)0)))) {
yr2825_Manifest(((*(yR105 *)y_deref(F.p2755))).f_a, &F.v6215, &F.v6217);
if (((!F.v6215) || ((F.v6217 < INT64_C(1))))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2755))).f_line, y_str("PACKED takes a positive manifest number of bits (XIV.VI.1)", 58));
}
((*(yR110 *)y_deref(F.v6213))).f_pbits = F.v6217;
}
}
if ((!(((*(yR105 *)y_deref(F.p2755))).f_b == ((void *)0)))) {
yr2825_Manifest(((*(yR105 *)y_deref(F.p2755))).f_b, &F.v6215, &F.v6217);
if ((((!F.v6215) || ((F.v6217 < INT64_C(1)))) || ((F.v6217 > INT64_C(64))))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2755))).f_line, y_str("ALIGNMENT takes a manifest number of bits from 1 to 64 (XIV.VI.1)", 65));
}
((*(yR110 *)y_deref(F.v6213))).f_align = F.v6217;
}
if ((((*(yR110 *)y_deref(F.v6213))).f_pbits > INT64_C(0))) {
F.v6219 = yr2731_Bits(F.v6213, 1);
if ((F.v6219 < INT64_C(0))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2755))).f_line, y_str("PACKED n takes a representation of manifest bounds (XIV.VI.1)", 61));
}
if ((F.v6219 > ((*(yR110 *)y_deref(F.v6213))).f_pbits)) {
yr1026_SB();
yr1037_SA(y_str("this representation needs ", 26));
yr1050_SI(F.v6219);
yr1037_SA(y_str(" bits, more than PACKED ", 24));
yr1050_SI(((*(yR110 *)y_deref(F.v6213))).f_pbits);
yr1037_SA(y_str(" allows (XIV.VI.1)", 18));
yr1157_Fail(((*(yR105 *)y_deref(F.p2755))).f_line, yr1056_SE());
}
}
{ void * rv6234 = F.v6213;
y_use = F.yu; return rv6234; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2760_AtAddress(void * a_p2761) {
struct yf2762 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2761 = a_p2761;
yr2825_Manifest(F.p2761, &F.v6238, &F.v6240);
if (((!F.v6238) || ((F.v6240 < INT64_C(0))))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2761))).f_line, y_str("an AT location is a manifest constant, not negative (XIV.VII)", 61));
}
{ rt_int rv6243 = F.v6240;
y_use = F.yu; return rv6243; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2766_StoreAt(rt_int a_p2767, rt_int a_p2768) {
struct yf2769 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2767 = a_p2767;
F.p2768 = a_p2768;
yr1026_SB();
yr1037_SA(y_str("(*(", 3));
yr1044_ST(F.p2767);
yr1037_SA(y_str(" *)y_mem_at(INT64_C(", 20));
yr1050_SI(F.p2768);
yr1037_SA(y_str("), sizeof(", 10));
yr1044_ST(F.p2767);
yr1037_SA(y_str(")))", 3));
{ rt_int rv6251 = yr1056_SE();
y_use = F.yu; return rv6251; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2773_ExtentCode(rt_int a_p2774, void * a_p2775) {
struct yf2776 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2774 = a_p2774;
F.p2775 = a_p2775;
if ((((*(yR110 *)y_deref(F.p2775))).f_kind == v855)) {
{ rt_int rv6261 = yr3350_Join(yr1061_T(y_str("(", 1)), F.p2774, yr1061_T(y_str(").words", 7)));
y_use = F.yu; return rv6261; }
}
F.v6256 = yr2731_Bits(F.p2775, 0);
if ((F.v6256 >= INT64_C(0))) {
{ rt_int rv6268 = yr3132_Num(y_range(y_div((y_add(F.v6256, INT64_C(63))), INT64_C(64)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
y_use = F.yu; return rv6268; }
}
if (yr2419_IsArrayLike(F.p2775)) {
F.v6258 = yr2731_Bits(((*(yR110 *)y_deref(F.p2775))).f_elem, ((*(yR110 *)y_deref(F.p2775))).f_packed);
if ((F.v6258 >= INT64_C(0))) {
if ((!((*(yR110 *)y_deref(F.p2775))).f_packed)) {
F.v6258 = yr2724_RoundUp(F.v6258, INT64_C(64));
}
yr1026_SB();
yr1037_SA(y_str("((y_count(", 10));
yr1044_ST(F.p2774);
yr1037_SA(y_str(", ", 2));
yr1050_SI(((*(yR110 *)y_deref(F.p2775))).f_nidx);
yr1037_SA(y_str(") * INT64_C(", 12));
yr1050_SI(F.v6258);
yr1037_SA(y_str(") + 63) / 64)", 13));
{ rt_int rv6275 = yr1056_SE();
y_use = F.yu; return rv6275; }
}
}
{ rt_int rv6278 = yr3350_Join(yr1061_T(y_str("((rt_int)((sizeof(", 18)), F.p2774, yr1061_T(y_str(") + 7) / 8))", 12)));
y_use = F.yu; return rv6278; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2780_SpaceArg(void * a_p2781, rt_int a_p2782, void * a_p2783) {
struct yf2784 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2781 = a_p2781;
F.p2782 = a_p2782;
F.p2783 = a_p2783;
if ((((*(yR110 *)y_deref(F.p2783))).f_kind == v855)) {
{ rt_int rv6285 = F.p2782;
y_use = F.yu; return rv6285; }
}
if ((yr2934_IsVariable(F.p2781) || ((((((*(yR105 *)y_deref(F.p2781))).f_kind == v777)) && ((!(((*(yR110 *)y_deref(F.p2783))).f_kind == v846))))))) {
{ rt_int rv6289 = yr3350_Join(yr1061_T(y_str("((yspace){ (void *)&(", 21)), F.p2782, yr3350_Join(yr1061_T(y_str("), ", 3)), yr2773_ExtentCode(F.p2782, F.p2783), yr1061_T(y_str(" })", 3))));
y_use = F.yu; return rv6289; }
}
F.v6284 = yr1200_Fresh(y_str("sp", 2));
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(yr2456_CType(F.p2783));
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.v6284);
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.p2782);
yr1037_SA(y_str("; void *", 8));
yr1044_ST(F.v6284);
yr1037_SA(y_str("c = rt_alloc(sizeof ", 20));
yr1044_ST(F.v6284);
yr1037_SA(y_str("); memcpy(", 10));
yr1044_ST(F.v6284);
yr1037_SA(y_str("c, &", 4));
yr1044_ST(F.v6284);
yr1037_SA(y_str(", sizeof ", 9));
yr1044_ST(F.v6284);
yr1037_SA(y_str("); (yspace){ ", 13));
yr1044_ST(F.v6284);
yr1037_SA(y_str("c, ", 3));
yr1044_ST(yr2773_ExtentCode(F.v6284, F.p2783));
yr1037_SA(y_str(" }; })", 6));
{ rt_int rv6302 = yr1056_SE();
y_use = F.yu; return rv6302; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2788_PackedComponent(void * a_p2789) {
struct yf2790 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2789 = a_p2789;
F.v6306 = F.p2789;
while (((((((*(yR105 *)y_deref(F.v6306))).f_kind == v783)) || ((((*(yR105 *)y_deref(F.v6306))).f_kind == v786))) || ((((*(yR105 *)y_deref(F.v6306))).f_kind == v801)))) {
Y_TICK();
if ((!(((*(yR105 *)y_deref(F.v6306))).f_kind == v801))) {
if ((!(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.v6306))).f_a))).f_rep == ((void *)0)))) {
if (((*(yR110 *)y_deref(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.v6306))).f_a))).f_rep))).f_packed) {
{ rt_int rv6308 = 1;
y_use = F.yu; return rv6308; }
}
}
}
F.v6306 = ((*(yR105 *)y_deref(F.v6306))).f_a;
}
{ rt_int rv6310 = 0;
y_use = F.yu; return rv6310; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2794_CharOrd(void * a_p2795, rt_int a_p2796) {
struct yf2797 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2795 = a_p2795;
F.p2796 = a_p2796;
if ((((*(yR110 *)y_deref(F.p2795))).f_tid == ((*(yR110 *)y_deref(v1346))).f_tid)) {
if ((((rt_int *)(v920).p)[y_ix1(v920, F.p2796)] == INT64_C(1))) {
{ rt_int rv6326 = ((rt_int *)(v965).p)[y_ix1(v965, yr1103_TChar(F.p2796, INT64_C(1)))];
y_use = F.yu; return rv6326; }
}
F.v6317 = INT64_C(0);
F.v6321 = INT64_C(1);
F.lo6332 = INT64_C(1);
F.hi6333 = ((rt_int *)(v920).p)[y_ix1(v920, v1498)];
{ rt_int hi6337 = F.hi6333;
for (rt_int i6336 = F.lo6332; i6336 <= hi6337; i6336++) { F.c_6335 = i6336; Y_TICK();
if ((yr1103_TChar(v1498, y_range(F.c_6335, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 32)) {
F.v6323 = yr1068_Intern(y_range(y_add(((rt_int *)(v918).p)[y_ix1(v918, v1498)], (y_sub(F.v6321, INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub(F.c_6335, F.v6321), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
if ((F.v6323 == F.p2796)) {
if ((F.v6317 < INT64_C(32))) {
{ rt_int rv6344 = F.v6317;
y_use = F.yu; return rv6344; }
}
if ((F.v6317 == INT64_C(32))) {
{ rt_int rv6347 = INT64_C(32);
y_use = F.yu; return rv6347; }
}
if ((F.v6317 == INT64_C(33))) {
{ rt_int rv6350 = INT64_C(127);
y_use = F.yu; return rv6350; }
}
if ((F.v6317 == INT64_C(34))) {
{ rt_int rv6353 = INT64_C(39);
y_use = F.yu; return rv6353; }
}
{ rt_int rv6355 = INT64_C(34);
y_use = F.yu; return rv6355; }
}
F.v6317 = y_range(y_add(F.v6317, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6321 = y_range(y_add(F.c_6335, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i6336 == hi6337) break;
}}
{ rt_int rv6361 = INT64_C(-1);
y_use = F.yu; return rv6361; }
}
if ((!(((*(yR110 *)y_deref(F.p2795))).f_kind == v819))) {
{ rt_int rv6363 = INT64_C(-1);
y_use = F.yu; return rv6363; }
}
F.v6315 = ((*(yR110 *)y_deref(F.p2795))).f_lits;
F.v6319 = INT64_C(0);
while ((!(F.v6315 == ((void *)0)))) {
Y_TICK();
if (yr1088_TEq(((*(yR105 *)y_deref(F.v6315))).f_text, F.p2796)) {
{ rt_int rv6365 = F.v6319;
y_use = F.yu; return rv6365; }
}
F.v6319 = y_range(y_add(F.v6319, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6315 = ((*(yR105 *)y_deref(F.v6315))).f_next;
}
{ rt_int rv6369 = INT64_C(-1);
y_use = F.yu; return rv6369; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2801_AlphabetFor(void * a_p2802, void * a_p2803) {
struct yf2804 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2802 = a_p2802;
F.p2803 = a_p2803;
F.v6378 = ((void *)0);
F.v6380 = INT64_C(0);
F.v6383 = INT64_C(0);
if ((!(((*(yR105 *)y_deref(F.p2802))).f_d == ((void *)0)))) {
F.v6374 = yr2388_Real(yr2295_Lookup(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p2802))).f_d))).f_name, ((*(yR105 *)y_deref(F.p2802))).f_line));
if ((((((!(((*(yR125 *)y_deref(F.v6374))).f_kind == v867))) && ((!(((*(yR125 *)y_deref(F.v6374))).f_kind == v870))))) || ((!(((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.v6374))).f_rep))).f_kind == v819))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p2802))).f_line, ((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p2802))).f_d))).f_name, y_str(" is not an alphabet", 19));
}
{ void * rv6386 = ((*(yR125 *)y_deref(F.v6374))).f_rep;
y_use = F.yu; return rv6386; }
}
F.v6383 = INT64_C(1);
if ((((((*(yR105 *)y_deref(F.p2802))).f_kind == v771)) || ((yr2794_CharOrd(v1346, ((*(yR105 *)y_deref(F.p2802))).f_text) >= INT64_C(0))))) {
F.v6380 = INT64_C(1);
F.v6378 = v1346;
}
F.v6376 = v1501;
while ((!(F.v6376 == ((void *)0)))) {
Y_TICK();
F.v6374 = yr2283_Find(((*(yR105 *)y_deref(F.v6376))).f_name);
if ((!(F.v6374 == ((void *)0)))) {
F.v6374 = yr2388_Real(F.v6374);
if ((((((((*(yR125 *)y_deref(F.v6374))).f_kind == v867)) || ((((*(yR125 *)y_deref(F.v6374))).f_kind == v870)))) && ((((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.v6374))).f_rep))).f_tid == ((*(yR110 *)y_deref(((*(yR105 *)y_deref(F.v6376))).f_rep))).f_tid)))) {
F.v6383 = y_range(y_add(F.v6383, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if ((((((*(yR105 *)y_deref(F.p2802))).f_kind == v768)) && ((yr2794_CharOrd(((*(yR105 *)y_deref(F.v6376))).f_rep, ((*(yR105 *)y_deref(F.p2802))).f_text) >= INT64_C(0))))) {
F.v6380 = y_range(y_add(F.v6380, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v6378 = ((*(yR105 *)y_deref(F.v6376))).f_rep;
}
}
}
F.v6376 = ((*(yR105 *)y_deref(F.v6376))).f_next;
}
if ((((((*(yR105 *)y_deref(F.p2802))).f_kind == v771)) && ((F.v6383 > INT64_C(1))))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2802))).f_line, y_str("a string in a scope with two alphabets is qualified by its alphabet (VI.A.3)", 76));
}
if ((F.v6380 > INT64_C(1))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p2802))).f_line, yr3350_Join(yr1061_T(y_str("'", 1)), ((*(yR105 *)y_deref(F.p2802))).f_text, yr1061_T(y_str("'", 1))), y_str(" is a character of two alphabets here: qualify it (VI.A.3)", 58));
}
if ((F.v6378 == ((void *)0))) {
{ void * rv6401 = v1346;
y_use = F.yu; return rv6401; }
}
{ void * rv6402 = F.v6378;
y_use = F.yu; return rv6402; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2808_CharValue(void * a_p2809, rt_int a_p2810, rt_int a_p2811) {
struct yf2812 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2809 = a_p2809;
F.p2810 = a_p2810;
F.p2811 = a_p2811;
F.v6408 = yr2794_CharOrd(F.p2809, F.p2810);
if ((F.v6408 < INT64_C(0))) {
yr1026_SB();
yr1037_SA(y_str("'", 1));
yr1044_ST(F.p2810);
yr1037_SA(y_str("' is not a character of ", 24));
yr1044_ST(((*(yR110 *)y_deref(F.p2809))).f_tname);
F.v6410 = yr1056_SE();
yr1157_Fail(F.p2811, F.v6410);
}
{ rt_int rv6414 = F.v6408;
y_use = F.yu; return rv6414; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2816_StringCodes(void * a_p2817, rt_int a_p2818, rt_int * a_p2819, rt_int a_p2820) {
struct yf2821 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2817 = a_p2817;
F.p2818 = a_p2818;
F.p2819_o = a_p2819;
F.p2820 = a_p2820;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(65536)}; y_desc_array(&F.yd_6434, 1, lo, hi, &y_d_int); }
y_init(&F.yd_6434, &F.v6436);
F.p2819 = INT64_C(0);
F.v6421 = INT64_C(1);
while ((F.v6421 <= ((rt_int *)(v920).p)[y_ix1(v920, F.p2818)])) {
Y_TICK();
F.v6438 = yr1103_TChar(F.p2818, F.v6421);
if ((F.v6438 == 39)) {
F.v6423 = y_range(y_add(F.v6421, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((F.v6423 <= ((rt_int *)(v920).p)[y_ix1(v920, F.p2818)])) && ((!(yr1103_TChar(F.p2818, F.v6423) == 39))))) {
Y_TICK();
F.v6423 = y_range(y_add(F.v6423, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v6423 > ((rt_int *)(v920).p)[y_ix1(v920, F.p2818)])) {
v941 = INT64_C(0);
v955 = INT64_C(0);
yr1178_FailS(F.p2820, y_str("an apostrophe in a string begins a mnemonic, closed by another (IV.C)", 69));
}
F.v6440 = yr1068_Intern(y_range(y_add(((rt_int *)(v918).p)[y_ix1(v918, F.p2818)], F.v6421), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub((y_sub(F.v6423, F.v6421)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v6425 = yr2808_CharValue(F.p2817, F.v6440, F.p2820);
F.v6421 = y_range(y_add(F.v6423, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.v6440 = yr1068_Intern(y_range(y_add(((rt_int *)(v918).p)[y_ix1(v918, F.p2818)], (y_sub(F.v6421, INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), INT64_C(1));
F.v6425 = yr2808_CharValue(F.p2817, F.v6440, F.p2820);
F.v6421 = y_range(y_add(F.v6421, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.p2819 >= INT64_C(65536))) {
yr1178_FailS(F.p2820, y_str("this implementation takes string literals of up to 65536 characters", 67));
}
F.p2819 = y_range(y_add(F.p2819, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(F.v6436).p)[y_ix1(F.v6436, F.p2819)] = F.v6425;
}
yr1026_SB();
yr1031_SC(34);
F.lo6472 = INT64_C(1);
F.hi6473 = F.p2819;
{ rt_int hi6477 = F.hi6473;
for (rt_int i6476 = F.lo6472; i6476 <= hi6477; i6476++) { F.c_6475 = i6476; Y_TICK();
F.v6425 = ((rt_int *)(F.v6436).p)[y_ix1(F.v6436, F.c_6475)];
if ((((F.v6425 == INT64_C(34))) || ((F.v6425 == INT64_C(92))))) {
yr1031_SC(92);
yr1031_SC(((unsigned char *)(v976).p)[y_ix1(v976, F.v6425)]);
} else if (((((F.v6425 >= INT64_C(32))) && ((F.v6425 < INT64_C(127)))) && (((((!(F.v6425 == INT64_C(63)))) || ((F.c_6475 == INT64_C(1)))) || ((!(((rt_int *)(F.v6436).p)[y_ix1(F.v6436, y_sub(F.c_6475, INT64_C(1)))] == INT64_C(63)))))))) {
yr1031_SC(((unsigned char *)(v976).p)[y_ix1(v976, F.v6425)]);
} else {
yr1031_SC(92);
yr1031_SC(((unsigned char *)(v976).p)[y_ix1(v976, y_add(INT64_C(48), (y_div(F.v6425, INT64_C(64)))))]);
yr1031_SC(((unsigned char *)(v976).p)[y_ix1(v976, y_add(INT64_C(48), (y_mod((y_div(F.v6425, INT64_C(8))), INT64_C(8)))))]);
yr1031_SC(((unsigned char *)(v976).p)[y_ix1(v976, y_add(INT64_C(48), (y_mod(F.v6425, INT64_C(8)))))]);
}
if (i6476 == hi6477) break;
}}
yr1031_SC(34);
{ rt_int rv6504 = yr1056_SE();
(*F.p2819_o) = F.p2819;
y_use = F.yu; return rv6504; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2825_Manifest(void * a_p2826, rt_int * a_p2827, rt_int * a_p2828) {
struct yf2829 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2826 = a_p2826;
F.p2827_o = a_p2827;
F.p2828_o = a_p2828;
F.p2827 = 0;
F.p2828 = INT64_C(0);
if ((((*(yR105 *)y_deref(F.p2826))).f_kind == v759)) {
F.p2827 = 1;
F.p2828 = ((*(yR105 *)y_deref(F.p2826))).f_ival;
(*F.p2827_o) = F.p2827;
(*F.p2828_o) = F.p2828;
y_use = F.yu; return;
}
if ((((*(yR105 *)y_deref(F.p2826))).f_kind == v768)) {
F.v6522 = yr2801_AlphabetFor(F.p2826, ((void *)0));
F.p2828 = yr2794_CharOrd(F.v6522, ((*(yR105 *)y_deref(F.p2826))).f_text);
F.p2827 = (F.p2828 >= INT64_C(0));
(*F.p2827_o) = F.p2827;
(*F.p2828_o) = F.p2828;
y_use = F.yu; return;
}
if ((((*(yR105 *)y_deref(F.p2826))).f_kind == v777)) {
if ((!(((*(yR105 *)y_deref(F.p2826))).f_d == ((void *)0)))) {
F.v6510 = yr2388_Real(yr2295_Lookup(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p2826))).f_d))).f_name, ((*(yR105 *)y_deref(F.p2826))).f_line));
F.v6510 = yr2348_FindLit(((*(yR105 *)y_deref(F.p2826))).f_name, ((*(yR125 *)y_deref(F.v6510))).f_rep);
} else {
F.v6510 = yr2283_Find(((*(yR105 *)y_deref(F.p2826))).f_name);
}
if ((F.v6510 == ((void *)0))) {
(*F.p2827_o) = F.p2827;
(*F.p2828_o) = F.p2828;
y_use = F.yu; return;
}
F.v6510 = yr2388_Real(F.v6510);
if ((((((((*(yR125 *)y_deref(F.v6510))).f_kind == v873)) || ((((*(yR125 *)y_deref(F.v6510))).f_kind == v864)))) && ((*(yR125 *)y_deref(F.v6510))).f_hasmv)) {
F.p2827 = 1;
F.p2828 = ((*(yR125 *)y_deref(F.v6510))).f_mval;
}
(*F.p2827_o) = F.p2827;
(*F.p2828_o) = F.p2828;
y_use = F.yu; return;
}
if ((((*(yR105 *)y_deref(F.p2826))).f_kind == v801)) {
yr2825_Manifest(((*(yR105 *)y_deref(F.p2826))).f_a, &F.p2827, &F.p2828);
(*F.p2827_o) = F.p2827;
(*F.p2828_o) = F.p2828;
y_use = F.yu; return;
}
if ((((*(yR105 *)y_deref(F.p2826))).f_kind == v795)) {
yr2825_Manifest(((*(yR105 *)y_deref(F.p2826))).f_a, &F.p2827, &F.p2828);
F.p2828 = y_range(y_neg(F.p2828), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2827_o) = F.p2827;
(*F.p2828_o) = F.p2828;
y_use = F.yu; return;
}
if ((((*(yR105 *)y_deref(F.p2826))).f_kind == v798)) {
yr2825_Manifest(((*(yR105 *)y_deref(F.p2826))).f_a, &F.v6516, &F.v6512);
yr2825_Manifest(((*(yR105 *)y_deref(F.p2826))).f_b, &F.v6518, &F.v6514);
if ((!((F.v6516 && F.v6518)))) {
(*F.p2827_o) = F.p2827;
(*F.p2828_o) = F.p2828;
y_use = F.yu; return;
}
F.v6520 = ((*(yR105 *)y_deref(F.p2826))).f_name;
F.p2827 = 1;
if ((F.v6520 == v573)) {
F.p2828 = y_range(y_add(F.v6512, F.v6514), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v6520 == v576)) {
F.p2828 = y_range(y_sub(F.v6512, F.v6514), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v6520 == v579)) {
F.p2828 = y_range(y_mul(F.v6512, F.v6514), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v6520 == v276)) && ((!(F.v6514 == INT64_C(0)))))) {
F.p2828 = y_range(y_div(F.v6512, F.v6514), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((F.v6520 == v378)) && ((!(F.v6514 == INT64_C(0)))))) {
F.p2828 = y_range(y_mod(F.v6512, F.v6514), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v6520 == v237)) {
F.p2828 = y_range(y_mul(F.v6512, F.v6514), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v6520 == v399)) {
F.p2828 = y_range(y_sub((y_add(F.v6512, F.v6514)), (y_mul(F.v6512, F.v6514))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v6520 == v489)) {
F.p2828 = y_range(y_mod((y_add(F.v6512, F.v6514)), INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.p2827 = 0;
}
(*F.p2827_o) = F.p2827;
(*F.p2828_o) = F.p2828;
y_use = F.yu; return;
}
if ((((*(yR105 *)y_deref(F.p2826))).f_kind == v792)) {
yr2825_Manifest(((*(yR105 *)y_deref(F.p2826))).f_a, &F.p2827, &F.p2828);
F.p2828 = y_range(y_sub(INT64_C(1), F.p2828), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2827_o) = F.p2827;
(*F.p2828_o) = F.p2828;
y_use = F.yu; return;
}
if ((((*(yR105 *)y_deref(F.p2826))).f_kind == v780)) {
yr2833_ManifestStd(F.p2826, &F.p2827, &F.p2828);
(*F.p2827_o) = F.p2827;
(*F.p2828_o) = F.p2828;
y_use = F.yu; return;
}
(*F.p2827_o) = F.p2827;
(*F.p2828_o) = F.p2828;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2833_ManifestStd(void * a_p2834, rt_int * a_p2835, rt_int * a_p2836) {
struct yf2837 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2834 = a_p2834;
F.p2835_o = a_p2835;
F.p2836_o = a_p2836;
F.p2835 = 0;
F.p2836 = INT64_C(0);
F.v6552 = yr2283_Find(((*(yR105 *)y_deref(F.p2834))).f_name);
if ((F.v6552 == ((void *)0))) {
(*F.p2835_o) = F.p2835;
(*F.p2836_o) = F.p2836;
y_use = F.yu; return;
}
F.v6552 = yr2388_Real(F.v6552);
if ((!(((*(yR125 *)y_deref(F.v6552))).f_kind == v891))) {
(*F.p2835_o) = F.p2835;
(*F.p2836_o) = F.p2836;
y_use = F.yu; return;
}
F.v6554 = ((*(yR125 *)y_deref(F.v6552))).f_mval;
if ((((((F.v6554 == v1372)) || ((F.v6554 == v1375))) || ((F.v6554 == v1378))) || ((F.v6554 == v1381)))) {
if ((!(yr1954_Count(((*(yR105 *)y_deref(F.p2834))).f_a) == INT64_C(1)))) {
(*F.p2835_o) = F.p2835;
(*F.p2836_o) = F.p2836;
y_use = F.yu; return;
}
yr2973_Expr(((*(yR105 *)y_deref(F.p2834))).f_a, ((void *)0), &F.v6562, &F.v6564);
if ((!yr2407_IsDiscrete(F.v6564))) {
(*F.p2835_o) = F.p2835;
(*F.p2836_o) = F.p2836;
y_use = F.yu; return;
}
if ((((F.v6554 == v1378)) || ((F.v6554 == v1381)))) {
if ((!(((*(yR110 *)y_deref(F.v6564))).f_elem == ((void *)0)))) {
F.v6564 = ((*(yR110 *)y_deref(F.v6564))).f_elem;
}
if ((!((*(yR110 *)y_deref(F.v6564))).f_hasm)) {
(*F.p2835_o) = F.p2835;
(*F.p2836_o) = F.p2836;
y_use = F.yu; return;
}
F.p2835 = 1;
if ((F.v6554 == v1378)) {
F.p2836 = ((*(yR110 *)y_deref(F.v6564))).f_mlo;
} else {
F.p2836 = ((*(yR110 *)y_deref(F.v6564))).f_mhi;
}
(*F.p2835_o) = F.p2835;
(*F.p2836_o) = F.p2836;
y_use = F.yu; return;
}
yr2825_Manifest(((*(yR105 *)y_deref(F.p2834))).f_a, &F.v6558, &F.p2836);
if ((!F.v6558)) {
(*F.p2835_o) = F.p2835;
(*F.p2836_o) = F.p2836;
y_use = F.yu; return;
}
if ((F.v6554 == v1372)) {
F.p2836 = y_range(y_add(F.p2836, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else {
F.p2836 = y_range(y_sub(F.p2836, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((!(((*(yR110 *)y_deref(F.v6564))).f_elem == ((void *)0)))) {
F.v6564 = ((*(yR110 *)y_deref(F.v6564))).f_elem;
}
if ((((!(((*(yR110 *)y_deref(F.v6564))).f_kind == v804))) && ((((F.p2836 < INT64_C(0))) || ((F.p2836 >= ((*(yR110 *)y_deref(F.v6564))).f_nlits)))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p2834))).f_line, ((*(yR105 *)y_deref(F.p2834))).f_name, y_str(" goes beyond the end of the enumeration (XI)", 44));
}
F.p2835 = 1;
(*F.p2835_o) = F.p2835;
(*F.p2836_o) = F.p2836;
y_use = F.yu; return;
}
if ((((F.v6554 == v1366)) || ((F.v6554 == v1369)))) {
if ((!(yr1954_Count(((*(yR105 *)y_deref(F.p2834))).f_a) == INT64_C(2)))) {
(*F.p2835_o) = F.p2835;
(*F.p2836_o) = F.p2836;
y_use = F.yu; return;
}
yr2825_Manifest(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p2834))).f_a))).f_next, &F.v6560, &F.v6556);
if ((!F.v6560)) {
(*F.p2835_o) = F.p2835;
(*F.p2836_o) = F.p2836;
y_use = F.yu; return;
}
yr2973_Expr(((*(yR105 *)y_deref(F.p2834))).f_a, ((void *)0), &F.v6562, &F.v6564);
if (((((!(((*(yR110 *)y_deref(F.v6564))).f_kind == v822))) || ((F.v6556 < INT64_C(1)))) || ((F.v6556 > ((*(yR110 *)y_deref(F.v6564))).f_nidx)))) {
(*F.p2835_o) = F.p2835;
(*F.p2836_o) = F.p2836;
y_use = F.yu; return;
}
F.v6566 = ((*(yR110 *)y_deref(F.v6564))).f_idx;
F.lo6583 = INT64_C(2);
F.hi6584 = F.v6556;
{ rt_int hi6588 = F.hi6584;
for (rt_int i6587 = F.lo6583; i6587 <= hi6588; i6587++) { F.c_6586 = i6587; Y_TICK();
F.v6566 = ((*(yR110 *)y_deref(F.v6566))).f_link;
if (i6587 == hi6588) break;
}}
if ((!((*(yR110 *)y_deref(F.v6566))).f_hasm)) {
(*F.p2835_o) = F.p2835;
(*F.p2836_o) = F.p2836;
y_use = F.yu; return;
}
F.p2835 = 1;
if ((F.v6554 == v1366)) {
F.p2836 = ((*(yR110 *)y_deref(F.v6566))).f_mlo;
} else {
F.p2836 = ((*(yR110 *)y_deref(F.v6566))).f_mhi;
}
(*F.p2835_o) = F.p2835;
(*F.p2836_o) = F.p2836;
y_use = F.yu; return;
}
(*F.p2835_o) = F.p2835;
(*F.p2836_o) = F.p2836;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2841_NeedsConv(void * a_p2842, void * a_p2843) {
struct yf2844 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2842 = a_p2842;
F.p2843 = a_p2843;
if ((F.p2842 == F.p2843)) {
{ rt_int rv6594 = 0;
y_use = F.yu; return rv6594; }
}
if (yr2407_IsDiscrete(F.p2842)) {
if ((((*(yR110 *)y_deref(F.p2842))).f_lo == INT64_C(0))) {
{ rt_int rv6597 = 0;
y_use = F.yu; return rv6597; }
}
{ rt_int rv6598 = (!((((((*(yR110 *)y_deref(F.p2842))).f_hasm && ((*(yR110 *)y_deref(F.p2843))).f_hasm) && ((((*(yR110 *)y_deref(F.p2842))).f_mlo <= ((*(yR110 *)y_deref(F.p2843))).f_mlo))) && ((((*(yR110 *)y_deref(F.p2843))).f_mhi <= ((*(yR110 *)y_deref(F.p2842))).f_mhi)))));
y_use = F.yu; return rv6598; }
}
if ((((*(yR110 *)y_deref(F.p2842))).f_kind == v810)) {
{ rt_int rv6600 = (!(((*(yR110 *)y_deref(F.p2842))).f_lo == INT64_C(0)));
y_use = F.yu; return rv6600; }
}
if ((((*(yR110 *)y_deref(F.p2842))).f_kind == v807)) {
{ rt_int rv6602 = ((((!(((*(yR110 *)y_deref(F.p2842))).f_lo == INT64_C(0)))) || ((!(((*(yR110 *)y_deref(F.p2842))).f_fsn == ((*(yR110 *)y_deref(F.p2843))).f_fsn)))) || ((!(((*(yR110 *)y_deref(F.p2842))).f_fsd == ((*(yR110 *)y_deref(F.p2843))).f_fsd))));
y_use = F.yu; return rv6602; }
}
if ((((*(yR110 *)y_deref(F.p2842))).f_kind == v825)) {
{ rt_int rv6603 = (((((*(yR110 *)y_deref(F.p2843))).f_kind == v825)) && ((!(((*(yR110 *)y_deref(F.p2842))).f_cname == ((*(yR110 *)y_deref(F.p2843))).f_cname))));
y_use = F.yu; return rv6603; }
}
if ((((((*(yR110 *)y_deref(F.p2842))).f_kind == v822)) || ((((*(yR110 *)y_deref(F.p2842))).f_kind == v843)))) {
if ((((!(((*(yR110 *)y_deref(F.p2843))).f_kind == v822))) && ((!(((*(yR110 *)y_deref(F.p2843))).f_kind == v843))))) {
{ rt_int rv6605 = 0;
y_use = F.yu; return rv6605; }
}
{ rt_int rv6606 = yr2841_NeedsConv(((*(yR110 *)y_deref(F.p2842))).f_elem, ((*(yR110 *)y_deref(F.p2843))).f_elem);
y_use = F.yu; return rv6606; }
}
{ rt_int rv6608 = 0;
y_use = F.yu; return rv6608; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2848_ConvertRecord(rt_int a_p2849, void * a_p2850, void * a_p2851) {
struct yf2852 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2849 = a_p2849;
F.p2850 = a_p2850;
F.p2851 = a_p2851;
F.v6614 = yr1200_Fresh(y_str("cs", 2));
F.v6616 = yr1200_Fresh(y_str("cd", 2));
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(yr2456_CType(F.p2851));
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.v6614);
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.p2849);
yr1037_SA(y_str("; ", 2));
yr1044_ST(yr2456_CType(F.p2850));
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.v6616);
yr1037_SA(y_str("; memset(&", 10));
yr1044_ST(F.v6616);
yr1037_SA(y_str(", 0, sizeof ", 12));
yr1044_ST(F.v6616);
yr1037_SA(y_str(");", 2));
F.v6618 = ((*(yR110 *)y_deref(F.p2850))).f_fields;
while ((!(F.v6618 == ((void *)0)))) {
Y_TICK();
F.v6620 = yr2711_FindField(F.p2851, ((*(yR115 *)y_deref(F.v6618))).f_name);
if ((!(F.v6620 == ((void *)0)))) {
yr1037_SA(y_str(" ", 1));
if ((!(((*(yR115 *)y_deref(F.v6620))).f_variant == INT64_C(0)))) {
yr1037_SA(y_str("if (", 4));
yr1044_ST(yr2982_VariantTest(F.p2851, F.v6620, yr3350_Join(yr1061_T(y_str("(&", 2)), F.v6614, yr1061_T(y_str(")", 1)))));
yr1037_SA(y_str(") ", 2));
}
yr1044_ST(F.v6616);
yr1037_SA(y_str(".f_", 3));
yr1044_ST(((*(yR115 *)y_deref(F.v6618))).f_name);
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2906_Convert(yr3350_Join(F.v6614, yr1061_T(y_str(".f_", 3)), ((*(yR115 *)y_deref(F.v6618))).f_name), ((*(yR115 *)y_deref(F.v6618))).f_rep, ((*(yR115 *)y_deref(F.v6620))).f_rep));
yr1037_SA(y_str(";", 1));
}
F.v6618 = ((*(yR115 *)y_deref(F.v6618))).f_next;
}
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.v6616);
yr1037_SA(y_str("; })", 4));
{ rt_int rv6643 = yr1056_SE();
y_use = F.yu; return rv6643; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2856_ConvertArray(rt_int a_p2857, void * a_p2858, void * a_p2859) {
struct yf2860 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2857 = a_p2857;
F.p2858 = a_p2858;
F.p2859 = a_p2859;
F.v6649 = yr1200_Fresh(y_str("cs", 2));
F.v6651 = yr1200_Fresh(y_str("cd", 2));
F.v6653 = yr1200_Fresh(y_str("ck", 2));
F.v6655 = yr1200_Fresh(y_str("cn", 2));
F.v6657 = yr2456_CType(((*(yR110 *)y_deref(F.p2858))).f_elem);
F.v6659 = yr2456_CType(((*(yR110 *)y_deref(F.p2859))).f_elem);
yr1026_SB();
yr1037_SA(y_str("({ yarr ", 8));
yr1044_ST(F.v6649);
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.p2857);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.v6651);
yr1037_SA(y_str("; rt_int ", 9));
yr1044_ST(F.v6655);
yr1037_SA(y_str(" = y_count(", 11));
yr1044_ST(F.v6649);
yr1037_SA(y_str(", ", 2));
yr1050_SI(((*(yR110 *)y_deref(F.p2859))).f_nidx);
yr1037_SA(y_str(");", 2));
if ((((*(yR110 *)y_deref(F.p2858))).f_kind == v822)) {
yr1037_SA(y_str(" y_init(", 8));
yr1044_ST(yr2462_DescOf(F.p2858));
yr1037_SA(y_str(", &", 3));
yr1044_ST(F.v6651);
yr1037_SA(y_str("); if (y_count(", 15));
yr1044_ST(F.v6651);
yr1037_SA(y_str(", ", 2));
yr1050_SI(((*(yR110 *)y_deref(F.p2858))).f_nidx);
yr1037_SA(y_str(") != ", 5));
yr1044_ST(F.v6655);
yr1037_SA(y_str(") rt_raise_msg(RT_X_RANGE, ", 27));
yr1031_SC(34);
yr1037_SA(y_str("array lengths differ", 20));
yr1031_SC(34);
yr1037_SA(y_str(");", 2));
} else {
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.v6651);
yr1037_SA(y_str(" = y_like(", 10));
yr1044_ST(F.v6649);
yr1037_SA(y_str(", ", 2));
yr1050_SI(((*(yR110 *)y_deref(F.p2859))).f_nidx);
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2462_DescOf(((*(yR110 *)y_deref(F.p2858))).f_elem));
yr1037_SA(y_str(");", 2));
}
yr1037_SA(y_str(" for (rt_int ", 13));
yr1044_ST(F.v6653);
yr1037_SA(y_str(" = 0; ", 6));
yr1044_ST(F.v6653);
yr1037_SA(y_str(" < ", 3));
yr1044_ST(F.v6655);
yr1037_SA(y_str("; ", 2));
yr1044_ST(F.v6653);
yr1037_SA(y_str("++) ((", 6));
yr1044_ST(F.v6657);
yr1037_SA(y_str(" *)", 3));
yr1044_ST(F.v6651);
yr1037_SA(y_str(".p)[", 4));
yr1044_ST(F.v6653);
yr1037_SA(y_str("] = ", 4));
yr1044_ST(yr2906_Convert(yr3350_Join(yr1061_T(y_str("((", 2)), F.v6659, yr3350_Join(yr1061_T(y_str(" *)", 3)), F.v6649, yr3350_Join(yr1061_T(y_str(".p)[", 4)), F.v6653, yr1061_T(y_str("]", 1))))), ((*(yR110 *)y_deref(F.p2858))).f_elem, ((*(yR110 *)y_deref(F.p2859))).f_elem));
yr1037_SA(y_str("; ", 2));
yr1044_ST(F.v6651);
yr1037_SA(y_str("; })", 4));
{ rt_int rv6700 = yr1056_SE();
y_use = F.yu; return rv6700; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2864_RescaleCode(rt_int a_p2865, void * a_p2866, void * a_p2867) {
struct yf2868 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2865 = a_p2865;
F.p2866 = a_p2866;
F.p2867 = a_p2867;
yr2586_ScaleRatio(F.p2866, F.p2867, &F.v6706, &F.v6708, &F.v6710);
if (F.v6710) {
{ rt_int rv6711 = F.p2865;
y_use = F.yu; return rv6711; }
}
yr1026_SB();
yr1037_SA(y_str("y_fix_conv(", 11));
yr1044_ST(F.p2865);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.v6706);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.v6708);
yr1037_SA(y_str(")", 1));
{ rt_int rv6716 = yr1056_SE();
y_use = F.yu; return rv6716; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2872_CommonScale(rt_int * a_p2873, void * a_p2874, rt_int * a_p2875, void * a_p2876, void * a_p2877, rt_int a_p2878) {
struct yf2879 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2873 = a_p2873;
F.p2874 = a_p2874;
F.p2875 = a_p2875;
F.p2876 = a_p2876;
F.p2877 = a_p2877;
F.p2878 = a_p2878;
F.v6725 = yr2563_Gcd(((*(yR110 *)y_deref(F.p2874))).f_fsn, ((*(yR110 *)y_deref(F.p2876))).f_fsn);
F.v6727 = yr2570_MulChk(y_range(y_div(((*(yR110 *)y_deref(F.p2874))).f_fsd, yr2563_Gcd(((*(yR110 *)y_deref(F.p2874))).f_fsd, ((*(yR110 *)y_deref(F.p2876))).f_fsd)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), ((*(yR110 *)y_deref(F.p2876))).f_fsd, F.p2878);
yr2603_SetScale(F.p2877, F.v6725, F.v6727);
(*F.p2873) = yr2864_RescaleCode((*F.p2873), F.p2874, F.p2877);
(*F.p2875) = yr2864_RescaleCode((*F.p2875), F.p2876, F.p2877);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2883_FixLiteral(void * a_p2884, rt_int * a_p2885, void * * a_p2886) {
struct yf2887 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2884 = a_p2884;
F.p2885_o = a_p2885;
F.p2886_o = a_p2886;
F.v6734 = ((*(yR105 *)y_deref(F.p2884))).f_ival;
F.v6736 = ((rt_int *)(v1244).p)[y_ix1(v1244, F.v6734)];
F.p2886 = yr2401_CopyRep(v1356);
((*(yR110 *)y_deref(F.p2886))).f_abstract = 0;
if ((F.v6736 >= INT64_C(0))) {
yr2603_SetScale(F.p2886, yr2578_PowChk(((rt_int *)(v1242).p)[y_ix1(v1242, F.v6734)], F.v6736, ((*(yR105 *)y_deref(F.p2884))).f_line), INT64_C(1));
} else {
yr2603_SetScale(F.p2886, INT64_C(1), yr2578_PowChk(((rt_int *)(v1242).p)[y_ix1(v1242, F.v6734)], y_range(y_neg(F.v6736), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), ((*(yR105 *)y_deref(F.p2884))).f_line));
}
yr1026_SB();
yr1037_SA(y_str("((yfix)INT64_C(", 15));
yr1050_SI(((rt_int *)(v1240).p)[y_ix1(v1240, F.v6734)]);
yr1037_SA(y_str("))", 2));
F.p2885 = yr1056_SE();
(*F.p2885_o) = F.p2885;
(*F.p2886_o) = F.p2886;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2891_ManifestFix(void * a_p2892, rt_int * a_p2893, rt_int * a_p2894, rt_int * a_p2895) {
struct yf2896 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2892 = a_p2892;
F.p2893_o = a_p2893;
F.p2894_o = a_p2894;
F.p2895_o = a_p2895;
F.p2893 = 0;
F.p2894 = INT64_C(0);
F.p2895 = INT64_C(1);
if ((((*(yR105 *)y_deref(F.p2892))).f_kind == v762)) {
F.v6750 = ((*(yR105 *)y_deref(F.p2892))).f_ival;
F.v6752 = ((rt_int *)(v1244).p)[y_ix1(v1244, F.v6750)];
F.p2894 = ((rt_int *)(v1240).p)[y_ix1(v1240, F.v6750)];
if ((F.v6752 >= INT64_C(0))) {
F.p2894 = yr2570_MulChk(F.p2894, yr2578_PowChk(((rt_int *)(v1242).p)[y_ix1(v1242, F.v6750)], F.v6752, ((*(yR105 *)y_deref(F.p2892))).f_line), ((*(yR105 *)y_deref(F.p2892))).f_line);
} else {
F.p2895 = yr2578_PowChk(((rt_int *)(v1242).p)[y_ix1(v1242, F.v6750)], y_range(y_neg(F.v6752), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), ((*(yR105 *)y_deref(F.p2892))).f_line);
}
F.p2893 = 1;
} else if ((((*(yR105 *)y_deref(F.p2892))).f_kind == v759)) {
F.p2894 = ((*(yR105 *)y_deref(F.p2892))).f_ival;
F.p2893 = 1;
} else if ((((*(yR105 *)y_deref(F.p2892))).f_kind == v801)) {
yr2891_ManifestFix(((*(yR105 *)y_deref(F.p2892))).f_a, &F.p2893, &F.p2894, &F.p2895);
} else if ((((*(yR105 *)y_deref(F.p2892))).f_kind == v795)) {
yr2891_ManifestFix(((*(yR105 *)y_deref(F.p2892))).f_a, &F.p2893, &F.p2894, &F.p2895);
F.p2894 = y_range(y_neg(F.p2894), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((((((*(yR105 *)y_deref(F.p2892))).f_kind == v798)) && ((((*(yR105 *)y_deref(F.p2892))).f_name == v579)))) {
yr2891_ManifestFix(((*(yR105 *)y_deref(F.p2892))).f_a, &F.p2893, &F.p2894, &F.p2895);
yr2891_ManifestFix(((*(yR105 *)y_deref(F.p2892))).f_b, &F.v6760, &F.v6756, &F.v6758);
F.p2893 = (F.p2893 && F.v6760);
F.p2894 = yr2570_MulChk(F.p2894, F.v6756, ((*(yR105 *)y_deref(F.p2892))).f_line);
F.p2895 = yr2570_MulChk(F.p2895, F.v6758, ((*(yR105 *)y_deref(F.p2892))).f_line);
}
F.v6754 = yr2563_Gcd(F.p2894, F.p2895);
F.p2894 = y_range(y_div(F.p2894, F.v6754), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.p2895 = y_range(y_div(F.p2895, F.v6754), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
(*F.p2893_o) = F.p2893;
(*F.p2894_o) = F.p2894;
(*F.p2895_o) = F.p2895;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2900_FloatChk(rt_int a_p2901) {
struct yf2902 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2901 = a_p2901;
{ rt_int rv6775 = yr3350_Join(yr1061_T(y_str("y_fchk(", 7)), F.p2901, yr1061_T(y_str(")", 1)));
y_use = F.yu; return rv6775; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2906_Convert(rt_int a_p2907, void * a_p2908, void * a_p2909) {
struct yf2910 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2907 = a_p2907;
F.p2908 = a_p2908;
F.p2909 = a_p2909;
if (((((((*(yR110 *)y_deref(F.p2909))).f_kind == v846)) && ((((*(yR110 *)y_deref(F.p2908))).f_kind == v822))) && ((((*(yR110 *)y_deref(F.p2908))).f_nidx == INT64_C(1))))) {
if ((((*(yR110 *)y_deref(((*(yR110 *)y_deref(F.p2908))).f_idx))).f_hasm && ((!(((*(yR110 *)y_deref(F.p2909))).f_nlits == (y_add((y_sub(((*(yR110 *)y_deref(((*(yR110 *)y_deref(F.p2908))).f_idx))).f_mhi, ((*(yR110 *)y_deref(((*(yR110 *)y_deref(F.p2908))).f_idx))).f_mlo)), INT64_C(1)))))))) {
yr1026_SB();
yr1037_SA(y_str("a string of ", 12));
yr1050_SI(((*(yR110 *)y_deref(F.p2909))).f_nlits);
yr1037_SA(y_str(" characters for an array of ", 28));
yr1050_SI(y_range(y_add((y_sub(((*(yR110 *)y_deref(((*(yR110 *)y_deref(F.p2908))).f_idx))).f_mhi, ((*(yR110 *)y_deref(((*(yR110 *)y_deref(F.p2908))).f_idx))).f_mlo)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1037_SA(y_str(" (VI.B.1)", 9));
F.v6781 = yr1056_SE();
yr1157_Fail(v1000, F.v6781);
}
}
if ((!yr2841_NeedsConv(F.p2908, F.p2909))) {
{ rt_int rv6794 = F.p2907;
y_use = F.yu; return rv6794; }
}
if ((((*(yR110 *)y_deref(F.p2908))).f_kind == v825)) {
{ rt_int rv6795 = yr2848_ConvertRecord(F.p2907, F.p2908, F.p2909);
y_use = F.yu; return rv6795; }
}
if ((((((*(yR110 *)y_deref(F.p2908))).f_kind == v822)) || ((((*(yR110 *)y_deref(F.p2908))).f_kind == v843)))) {
{ rt_int rv6796 = yr2856_ConvertArray(F.p2907, F.p2908, F.p2909);
y_use = F.yu; return rv6796; }
}
if (yr3167_Suppressed(v1480)) {
if ((((*(yR110 *)y_deref(F.p2908))).f_kind == v807)) {
{ rt_int rv6797 = yr2864_RescaleCode(F.p2907, F.p2909, F.p2908);
y_use = F.yu; return rv6797; }
}
{ rt_int rv6798 = F.p2907;
y_use = F.yu; return rv6798; }
}
if (yr2407_IsDiscrete(F.p2908)) {
yr1026_SB();
yr1037_SA(y_str("y_range(", 8));
yr1044_ST(F.p2907);
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2537_LoText(F.p2908));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2543_HiText(F.p2908));
yr1037_SA(y_str(")", 1));
{ rt_int rv6803 = yr1056_SE();
y_use = F.yu; return rv6803; }
}
if ((((*(yR110 *)y_deref(F.p2908))).f_kind == v810)) {
yr1026_SB();
yr1037_SA(y_str("y_frange(", 9));
yr1044_ST(F.p2907);
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2537_LoText(F.p2908));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2543_HiText(F.p2908));
yr1037_SA(y_str(")", 1));
{ rt_int rv6808 = yr1056_SE();
y_use = F.yu; return rv6808; }
}
if ((((*(yR110 *)y_deref(F.p2908))).f_kind == v807)) {
F.v6781 = yr2864_RescaleCode(F.p2907, F.p2909, F.p2908);
if ((((*(yR110 *)y_deref(F.p2908))).f_lo == INT64_C(0))) {
{ rt_int rv6810 = F.v6781;
y_use = F.yu; return rv6810; }
}
yr1026_SB();
yr1037_SA(y_str("y_fix_range(", 12));
yr1044_ST(F.v6781);
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2537_LoText(F.p2908));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2543_HiText(F.p2908));
yr1037_SA(y_str(")", 1));
{ rt_int rv6815 = yr1056_SE();
y_use = F.yu; return rv6815; }
}
{ rt_int rv6816 = F.p2907;
y_use = F.yu; return rv6816; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2914_StoreText(rt_int a_p2915, void * a_p2916, rt_int a_p2917, void * a_p2918, rt_int a_p2919) {
struct yf2920 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2915 = a_p2915;
F.p2916 = a_p2916;
F.p2917 = a_p2917;
F.p2918 = a_p2918;
F.p2919 = a_p2919;
yr2489_CheckType(F.p2919, F.p2916, F.p2918);
if (yr2431_Deep(F.p2916)) {
F.v6824 = yr1200_Fresh(y_str("t", 1));
yr1026_SB();
yr1037_SA(y_str("{ ", 2));
yr1044_ST(yr2456_CType(F.p2916));
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.v6824);
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2906_Convert(F.p2917, F.p2916, F.p2918));
yr1037_SA(y_str("; y_store(", 10));
yr1044_ST(yr2462_DescOf(F.p2916));
yr1037_SA(y_str(", &", 3));
yr1044_ST(F.p2915);
yr1037_SA(y_str(", &", 3));
yr1044_ST(F.v6824);
yr1037_SA(y_str("); }", 4));
{ rt_int rv6833 = yr1056_SE();
y_use = F.yu; return rv6833; }
}
yr1026_SB();
yr1044_ST(F.p2915);
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2906_Convert(F.p2917, F.p2916, F.p2918));
yr1037_SA(y_str(";", 1));
{ rt_int rv6836 = yr1056_SE();
y_use = F.yu; return rv6836; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2924_Store(rt_int a_p2925, void * a_p2926, rt_int a_p2927, void * a_p2928, rt_int a_p2929) {
struct yf2930 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2925 = a_p2925;
F.p2926 = a_p2926;
F.p2927 = a_p2927;
F.p2928 = a_p2928;
F.p2929 = a_p2929;
yr1132_Emit(yr2914_StoreText(F.p2925, F.p2926, F.p2927, F.p2928, F.p2929));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2934_IsVariable(void * a_p2935) {
struct yf2936 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2935 = a_p2935;
if ((((*(yR105 *)y_deref(F.p2935))).f_kind == v777)) {
F.v6846 = yr2283_Find(((*(yR105 *)y_deref(F.p2935))).f_name);
if ((F.v6846 == ((void *)0))) {
{ rt_int rv6850 = 0;
y_use = F.yu; return rv6850; }
}
if (((*(yR125 *)y_deref(F.v6846))).f_readonly) {
{ rt_int rv6852 = 0;
y_use = F.yu; return rv6852; }
}
{ rt_int rv6853 = (((*(yR125 *)y_deref(yr2388_Real(F.v6846)))).f_kind == v861);
y_use = F.yu; return rv6853; }
}
if ((((*(yR105 *)y_deref(F.p2935))).f_kind == v789)) {
{ rt_int rv6855 = (((*(yR105 *)y_deref(F.p2935))).f_flag == INT64_C(0));
y_use = F.yu; return rv6855; }
}
if ((((*(yR105 *)y_deref(F.p2935))).f_kind == v786)) {
{ rt_int rv6856 = (yr2999_IsMainStore(((*(yR105 *)y_deref(F.p2935))).f_a) || yr2934_IsVariable(((*(yR105 *)y_deref(F.p2935))).f_a));
y_use = F.yu; return rv6856; }
}
if ((((*(yR105 *)y_deref(F.p2935))).f_kind == v783)) {
if ((!yr2934_IsVariable(((*(yR105 *)y_deref(F.p2935))).f_a))) {
{ rt_int rv6858 = 0;
y_use = F.yu; return rv6858; }
}
F.v6848 = yr2711_FindField(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p2935))).f_a))).f_rep, ((*(yR105 *)y_deref(F.p2935))).f_name);
if ((F.v6848 == ((void *)0))) {
{ rt_int rv6860 = 0;
y_use = F.yu; return rv6860; }
}
{ rt_int rv6861 = (!((*(yR115 *)y_deref(F.v6848))).f_isconst);
y_use = F.yu; return rv6861; }
}
{ rt_int rv6863 = 0;
y_use = F.yu; return rv6863; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2940_CheckPure(void * a_p2941) {
struct yf2942 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2941 = a_p2941;
F.v6867 = F.p2941;
if ((v1625 == ((void *)0))) {
y_use = F.yu; return;
}
if ((!((*(yR125 *)y_deref(v1625))).f_func)) {
y_use = F.yu; return;
}
while ((((((*(yR105 *)y_deref(F.v6867))).f_kind == v783)) || ((((*(yR105 *)y_deref(F.v6867))).f_kind == v786)))) {
Y_TICK();
F.v6867 = ((*(yR105 *)y_deref(F.v6867))).f_a;
}
if ((((*(yR105 *)y_deref(F.v6867))).f_kind == v789)) {
if ((((*(yR105 *)y_deref(F.v6867))).f_flag == INT64_C(0))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2941))).f_line, y_str("a FUNCTION does not assign to a dynamic variable (X.A.4)", 56));
}
y_use = F.yu; return;
}
if ((((*(yR105 *)y_deref(F.v6867))).f_kind == v777)) {
F.v6869 = yr2283_Find(((*(yR105 *)y_deref(F.v6867))).f_name);
if ((!(F.v6869 == ((void *)0)))) {
F.v6869 = yr2388_Real(F.v6869);
if ((((*(yR125 *)y_deref(F.v6869))).f_level < ((*(yR125 *)y_deref(v1625))).f_level)) {
yr1186_FailN(((*(yR105 *)y_deref(F.p2941))).f_line, ((*(yR105 *)y_deref(F.v6867))).f_name, y_str(" is not local: a FUNCTION assigns only to its locals (X.A.4)", 60));
}
}
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr2946_LValue(void * a_p2947, rt_int * a_p2948, void * * a_p2949) {
struct yf2950 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2947 = a_p2947;
F.p2948_o = a_p2948;
F.p2949_o = a_p2949;
yr2973_Expr(F.p2947, ((void *)0), &F.p2948, &F.p2949);
if ((!yr2934_IsVariable(F.p2947))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2947))).f_line, y_str("a variable is needed here (IX.A.1)", 34));
}
(*F.p2948_o) = F.p2948;
(*F.p2949_o) = F.p2949;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2954_Paren(rt_int a_p2955) {
struct yf2956 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2955 = a_p2955;
yr1026_SB();
yr1037_SA(y_str("(", 1));
yr1044_ST(F.p2955);
yr1037_SA(y_str(")", 1));
{ rt_int rv6882 = yr1056_SE();
y_use = F.yu; return rv6882; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2960_Lit(void * a_p2961, rt_int a_p2962) {
struct yf2963 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2961 = a_p2961;
F.p2962 = a_p2962;
F.v6887 = yr2401_CopyRep(F.p2961);
yr2624_SetRange(F.v6887, F.p2962, F.p2962);
((*(yR110 *)y_deref(F.v6887))).f_elem = F.p2961;
{ void * rv6888 = F.v6887;
y_use = F.yu; return rv6888; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr2967_Qualifier(void * a_p2968) {
struct yf2969 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2968 = a_p2968;
F.v6892 = yr2388_Real(yr2295_Lookup(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p2968))).f_d))).f_name, ((*(yR105 *)y_deref(F.p2968))).f_line));
if ((((!(((*(yR125 *)y_deref(F.v6892))).f_kind == v867))) && ((!(((*(yR125 *)y_deref(F.v6892))).f_kind == v870))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p2968))).f_line, ((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p2968))).f_d))).f_name, y_str(" is not a type", 14));
}
{ void * rv6894 = ((*(yR125 *)y_deref(F.v6892))).f_rep;
y_use = F.yu; return rv6894; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2973_Expr(void * a_p2974, void * a_p2975, rt_int * a_p2976, void * * a_p2977) {
struct yf2978 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2974 = a_p2974;
F.p2975 = a_p2975;
F.p2976_o = a_p2976;
F.p2977_o = a_p2977;
F.v6901 = ((*(yR105 *)y_deref(F.p2974))).f_kind;
v1000 = ((*(yR105 *)y_deref(F.p2974))).f_line;
if ((F.v6901 == v801)) {
yr2973_Expr(((*(yR105 *)y_deref(F.p2974))).f_a, F.p2975, &F.v6905, &F.p2977);
F.p2976 = yr2954_Paren(F.v6905);
} else if ((F.v6901 == v759)) {
F.p2977 = yr2960_Lit(v1342, ((*(yR105 *)y_deref(F.p2974))).f_ival);
if ((!(((*(yR105 *)y_deref(F.p2974))).f_d == ((void *)0)))) {
F.v6911 = yr2967_Qualifier(F.p2974);
if ((!(((*(yR110 *)y_deref(F.v6911))).f_kind == v804))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2974))).f_line, y_str("an integer literal qualified by a type that is not INTEGER", 58));
}
((*(yR110 *)y_deref(F.p2977))).f_tid = ((*(yR110 *)y_deref(F.v6911))).f_tid;
((*(yR110 *)y_deref(F.p2977))).f_tname = ((*(yR110 *)y_deref(F.v6911))).f_tname;
}
yr1026_SB();
yr1037_SA(y_str("INT64_C(", 8));
yr1050_SI(((*(yR105 *)y_deref(F.p2974))).f_ival);
yr1037_SA(y_str(")", 1));
F.p2976 = yr1056_SE();
} else if ((F.v6901 == v768)) {
F.v6911 = yr2801_AlphabetFor(F.p2974, F.p2975);
F.v6917 = yr2808_CharValue(F.v6911, ((*(yR105 *)y_deref(F.p2974))).f_text, ((*(yR105 *)y_deref(F.p2974))).f_line);
F.p2977 = yr2960_Lit(F.v6911, F.v6917);
yr1026_SB();
yr1050_SI(F.v6917);
F.p2976 = yr1056_SE();
} else if ((F.v6901 == v771)) {
F.v6911 = yr2801_AlphabetFor(F.p2974, F.p2975);
F.v6905 = yr2816_StringCodes(F.v6911, ((*(yR105 *)y_deref(F.p2974))).f_text, &F.v6915, ((*(yR105 *)y_deref(F.p2974))).f_line);
F.p2977 = yr2394_NewRep(v846, yr1061_T(y_str("string", 6)));
((*(yR110 *)y_deref(F.p2977))).f_tname = yr1061_T(y_str("a string literal", 16));
((*(yR110 *)y_deref(F.p2977))).f_elem = F.v6911;
((*(yR110 *)y_deref(F.p2977))).f_nidx = INT64_C(1);
((*(yR110 *)y_deref(F.p2977))).f_nlits = F.v6915;
yr1026_SB();
yr1037_SA(y_str("y_str(", 6));
yr1044_ST(F.v6905);
yr1037_SA(y_str(", ", 2));
yr1050_SI(F.v6915);
yr1037_SA(y_str(")", 1));
F.p2976 = yr1056_SE();
} else if ((F.v6901 == v765)) {
F.p2977 = v1354;
if ((!(((*(yR105 *)y_deref(F.p2974))).f_d == ((void *)0)))) {
F.p2977 = yr2967_Qualifier(F.p2974);
}
F.p2976 = yr2954_Paren(((*(yR105 *)y_deref(F.p2974))).f_text);
} else if ((F.v6901 == v762)) {
yr2883_FixLiteral(F.p2974, &F.p2976, &F.p2977);
if ((!(((*(yR105 *)y_deref(F.p2974))).f_d == ((void *)0)))) {
F.v6911 = yr2967_Qualifier(F.p2974);
if ((!(((*(yR110 *)y_deref(F.v6911))).f_kind == v807))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2974))).f_line, y_str("a fixed-point literal qualified by a type that is not FIXED", 59));
}
((*(yR110 *)y_deref(F.p2977))).f_tid = ((*(yR110 *)y_deref(F.v6911))).f_tid;
((*(yR110 *)y_deref(F.p2977))).f_tname = ((*(yR110 *)y_deref(F.v6911))).f_tname;
}
} else if ((F.v6901 == v774)) {
if ((((*(yR105 *)y_deref(F.p2974))).f_d == ((void *)0))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2974))).f_line, y_str("NIL is qualified by the name of a pointer type (VI.B.4)", 55));
}
F.p2977 = yr2967_Qualifier(F.p2974);
if ((!(((*(yR110 *)y_deref(F.p2977))).f_kind == v828))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2974))).f_line, y_str("NIL of a type that is not a pointer", 35));
}
F.p2976 = yr1061_T(y_str("((void *)0)", 11));
} else if ((F.v6901 == v777)) {
if ((!(((*(yR105 *)y_deref(F.p2974))).f_d == ((void *)0)))) {
F.v6911 = yr2967_Qualifier(F.p2974);
F.v6903 = yr2348_FindLit(((*(yR105 *)y_deref(F.p2974))).f_name, F.v6911);
if ((F.v6903 == ((void *)0))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p2974))).f_line, ((*(yR105 *)y_deref(F.p2974))).f_name, y_str(" is not a literal of that type", 30));
}
} else {
F.v6903 = yr2295_Lookup(((*(yR105 *)y_deref(F.p2974))).f_name, ((*(yR105 *)y_deref(F.p2974))).f_line);
}
yr2990_NameExpr(F.p2974, F.v6903, &F.p2976, &F.p2977);
} else if ((F.v6901 == v780)) {
yr3193_CallExpr(F.p2974, F.p2975, 0, &F.p2976, &F.p2977);
} else if ((F.v6901 == v783)) {
yr2973_Expr(((*(yR105 *)y_deref(F.p2974))).f_a, ((void *)0), &F.v6905, &F.v6911);
((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p2974))).f_a))).f_rep = F.v6911;
if ((!(((*(yR110 *)y_deref(F.v6911))).f_kind == v825))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p2974))).f_line, ((*(yR105 *)y_deref(F.p2974))).f_name, y_str(": a component of something that is not a record", 47));
}
if (((*(yR110 *)y_deref(F.v6911))).f_opaque) {
yr1186_FailN(((*(yR105 *)y_deref(F.p2974))).f_line, ((*(yR110 *)y_deref(F.v6911))).f_tname, y_str(" is exported opaquely: its components are hidden (X.B.3)", 56));
}
F.v6913 = yr2711_FindField(F.v6911, ((*(yR105 *)y_deref(F.p2974))).f_name);
if ((F.v6913 == ((void *)0))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p2974))).f_line, ((*(yR105 *)y_deref(F.p2974))).f_name, y_str(" is not a component of this record", 34));
}
F.p2977 = ((*(yR115 *)y_deref(F.v6913))).f_rep;
if ((!(((*(yR115 *)y_deref(F.v6913))).f_variant == INT64_C(0)))) {
yr3274_CheckVariantSelected(F.p2974, F.v6911, F.v6913);
F.v6907 = yr1200_Fresh(y_str("vr", 2));
yr1026_SB();
yr1037_SA(y_str("(*({ ", 5));
yr1044_ST(yr2456_CType(F.v6911));
yr1037_SA(y_str(" *", 2));
yr1044_ST(F.v6907);
yr1037_SA(y_str(" = &", 4));
yr1044_ST(yr2954_Paren(F.v6905));
yr1037_SA(y_str("; if (!(", 8));
yr1044_ST(yr2982_VariantTest(F.v6911, F.v6913, F.v6907));
yr1037_SA(y_str(")) rt_raise(RT_X_TAG); &", 24));
yr1044_ST(F.v6907);
yr1037_SA(y_str("->f_", 4));
yr1044_ST(((*(yR105 *)y_deref(F.p2974))).f_name);
yr1037_SA(y_str("; }))", 5));
F.p2976 = yr1056_SE();
} else {
yr1026_SB();
yr1044_ST(yr2954_Paren(F.v6905));
yr1037_SA(y_str(".f_", 3));
yr1044_ST(((*(yR105 *)y_deref(F.p2974))).f_name);
F.p2976 = yr1056_SE();
}
} else if ((((F.v6901 == v789)) && yr3138_UserOp(F.p2974, y_range(v618, INT64_C(0), INT64_C(4000000)), ((*(yR105 *)y_deref(F.p2974))).f_a, ((void *)0), &F.p2976, &F.p2977))) {
((*(yR105 *)y_deref(F.p2974))).f_flag = INT64_C(1);
} else if ((F.v6901 == v789)) {
yr2973_Expr(((*(yR105 *)y_deref(F.p2974))).f_a, ((void *)0), &F.v6905, &F.v6911);
if ((!(((*(yR110 *)y_deref(F.v6911))).f_kind == v828))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p2974))).f_line, y_str("^ of something that is not a pointer", 36));
}
yr3417_NoteFreeDeref(((*(yR105 *)y_deref(F.p2974))).f_a, ((*(yR110 *)y_deref(F.v6911))).f_tid);
if ((((*(yR110 *)y_deref(F.v6911))).f_elem == ((void *)0))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p2974))).f_line, ((*(yR110 *)y_deref(F.v6911))).f_forward, y_str(" is not declared", 16));
}
F.p2977 = ((*(yR110 *)y_deref(F.v6911))).f_elem;
yr1026_SB();
yr1037_SA(y_str("(*(", 3));
yr1044_ST(yr2456_CType(F.p2977));
yr1037_SA(y_str(" *)y_deref(", 11));
yr1044_ST(F.v6905);
yr1037_SA(y_str("))", 2));
F.p2976 = yr1056_SE();
} else if ((F.v6901 == v786)) {
yr3005_IndexExpr(F.p2974, &F.p2976, &F.p2977);
} else if ((((F.v6901 == v792)) && yr3138_UserOp(F.p2974, y_range(v390, INT64_C(0), INT64_C(4000000)), ((*(yR105 *)y_deref(F.p2974))).f_a, ((void *)0), &F.p2976, &F.p2977))) {
F.p2977 = F.p2977;
} else if ((F.v6901 == v792)) {
yr2973_Expr(((*(yR105 *)y_deref(F.p2974))).f_a, v1344, &F.v6905, &F.v6911);
yr2489_CheckType(((*(yR105 *)y_deref(F.p2974))).f_line, v1344, F.v6911);
F.p2977 = v1344;
yr1026_SB();
yr1037_SA(y_str("(!", 2));
yr1044_ST(F.v6905);
yr1037_SA(y_str(")", 1));
F.p2976 = yr1056_SE();
} else if ((F.v6901 == v795)) {
if ((!yr3138_UserOp(F.p2974, y_range(v576, INT64_C(0), INT64_C(4000000)), ((*(yR105 *)y_deref(F.p2974))).f_a, ((void *)0), &F.p2976, &F.p2977))) {
yr2973_Expr(((*(yR105 *)y_deref(F.p2974))).f_a, F.p2975, &F.v6905, &F.v6911);
yr3013_NegExpr(F.p2974, F.v6905, F.v6911, &F.p2976, &F.p2977);
}
} else if ((F.v6901 == v798)) {
yr3069_BinExpr(F.p2974, F.p2975, &F.p2976, &F.p2977);
} else {
yr1178_FailS(((*(yR105 *)y_deref(F.p2974))).f_line, y_str("not an expression", 17));
}
((*(yR105 *)y_deref(F.p2974))).f_rep = F.p2977;
(*F.p2976_o) = F.p2976;
(*F.p2977_o) = F.p2977;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2982_VariantTest(void * a_p2983, void * a_p2984, rt_int a_p2985) {
struct yf2986 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2983 = a_p2983;
F.p2984 = a_p2984;
F.p2985 = a_p2985;
F.v6960 = ((*(yR115 *)y_deref(F.p2984))).f_labels;
yr1026_SB();
yr1037_SA(y_str("0", 1));
while ((!(F.v6960 == ((void *)0)))) {
Y_TICK();
yr2825_Manifest(F.v6960, &F.v6962, &F.v6964);
yr1037_SA(y_str(" || ", 4));
yr1044_ST(F.p2985);
yr1037_SA(y_str("->f_", 4));
yr1044_ST(((*(yR115 *)y_deref(((*(yR110 *)y_deref(F.p2983))).f_selector))).f_name);
yr1037_SA(y_str(" == ", 4));
yr1050_SI(F.v6964);
F.v6960 = ((*(yR105 *)y_deref(F.v6960))).f_next;
}
{ rt_int rv6969 = yr1056_SE();
y_use = F.yu; return rv6969; }
rt_raise(Y_X_NO_RETURN);
}
static void yr2990_NameExpr(void * a_p2991, void * a_p2992, rt_int * a_p2993, void * * a_p2994) {
struct yf2995 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p2991 = a_p2991;
F.p2992 = a_p2992;
F.p2993_o = a_p2993;
F.p2994_o = a_p2994;
F.v6976 = yr2388_Real(F.p2992);
if ((((*(yR125 *)y_deref(F.v6976))).f_kind == v873)) {
if ((((((*(yR105 *)y_deref(F.p2991))).f_d == ((void *)0))) && yr2342_Ambiguous(F.v6976))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p2991))).f_line, ((*(yR105 *)y_deref(F.p2991))).f_name, y_str(" names values of two types here: qualify it (VI.A.3)", 52));
}
F.p2994 = yr2960_Lit(((*(yR125 *)y_deref(F.v6976))).f_rep, ((*(yR125 *)y_deref(F.v6976))).f_mval);
yr1026_SB();
yr1050_SI(((*(yR125 *)y_deref(F.v6976))).f_mval);
F.p2993 = yr1056_SE();
(*F.p2993_o) = F.p2993;
(*F.p2994_o) = F.p2994;
y_use = F.yu; return;
}
if ((((((*(yR125 *)y_deref(F.v6976))).f_kind == v861)) || ((((*(yR125 *)y_deref(F.v6976))).f_kind == v864)))) {
yr3411_NoteFree(F.v6976);
F.p2994 = ((*(yR125 *)y_deref(F.v6976))).f_rep;
F.p2993 = yr2382_SymPath(F.v6976);
(*F.p2993_o) = F.p2993;
(*F.p2994_o) = F.p2994;
y_use = F.yu; return;
}
if ((((*(yR125 *)y_deref(F.v6976))).f_kind == v876)) {
yr1186_FailN(((*(yR105 *)y_deref(F.p2991))).f_line, ((*(yR105 *)y_deref(F.p2991))).f_name, y_str(" is a routine: a call needs ()", 30));
}
yr1186_FailN(((*(yR105 *)y_deref(F.p2991))).f_line, ((*(yR105 *)y_deref(F.p2991))).f_name, y_str(" is not a value", 15));
(*F.p2993_o) = F.p2993;
(*F.p2994_o) = F.p2994;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr2999_IsMainStore(void * a_p3000) {
struct yf3001 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3000 = a_p3000;
if ((((!(((*(yR105 *)y_deref(F.p3000))).f_kind == v777))) || ((!(((*(yR105 *)y_deref(F.p3000))).f_d == ((void *)0)))))) {
{ rt_int rv6985 = 0;
y_use = F.yu; return rv6985; }
}
F.v6983 = yr2283_Find(((*(yR105 *)y_deref(F.p3000))).f_name);
if ((F.v6983 == ((void *)0))) {
{ rt_int rv6987 = 0;
y_use = F.yu; return rv6987; }
}
if ((!yr2336_Resolved(F.v6983))) {
{ rt_int rv6989 = 0;
y_use = F.yu; return rv6989; }
}
F.v6983 = yr2388_Real(F.v6983);
{ rt_int rv6990 = (((((*(yR125 *)y_deref(F.v6983))).f_kind == v891)) && ((((*(yR125 *)y_deref(F.v6983))).f_mval == v1477)));
y_use = F.yu; return rv6990; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3005_IndexExpr(void * a_p3006, rt_int * a_p3007, void * * a_p3008) {
struct yf3009 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3006 = a_p3006;
F.p3007_o = a_p3007;
F.p3008_o = a_p3008;
if (yr2999_IsMainStore(((*(yR105 *)y_deref(F.p3006))).f_a)) {
if ((!(yr1954_Count(((*(yR105 *)y_deref(F.p3006))).f_b) == INT64_C(1)))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3006))).f_line, y_str("MAIN_STORE_ARRAY has one subscript", 34));
}
yr2973_Expr(((*(yR105 *)y_deref(F.p3006))).f_b, v1869, &F.v6998, &F.v7004);
yr2489_CheckType(((*(yR105 *)y_deref(F.p3006))).f_line, v1869, F.v7004);
F.p3008 = v1871;
F.p3007 = yr3350_Join(yr1061_T(y_str("(*y_mem_word(", 13)), F.v6998, yr1061_T(y_str("))", 2)));
(*F.p3007_o) = F.p3007;
(*F.p3008_o) = F.p3008;
y_use = F.yu; return;
}
yr2973_Expr(((*(yR105 *)y_deref(F.p3006))).f_a, ((void *)0), &F.v6996, &F.v7002);
if ((!yr2419_IsArrayLike(F.v7002))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3006))).f_line, y_str("[] of something that is not an array", 36));
}
F.v7010 = yr1954_Count(((*(yR105 *)y_deref(F.p3006))).f_b);
if ((!(F.v7010 == ((*(yR110 *)y_deref(F.v7002))).f_nidx))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3006))).f_line, y_str("the number of subscripts is not the number of dimensions", 56));
}
F.p3008 = ((*(yR110 *)y_deref(F.v7002))).f_elem;
F.v7012 = (((((((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p3006))).f_a))).f_kind == v777)) || ((((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p3006))).f_a))).f_kind == v783))) || ((((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p3006))).f_a))).f_kind == v786))) || ((((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p3006))).f_a))).f_kind == v789)));
if (F.v7012) {
F.v7000 = F.v6996;
} else {
F.v7000 = yr1200_Fresh(y_str("ya", 2));
}
yr1026_SB();
if ((!F.v7012)) {
yr1037_SA(y_str("(*({ yarr ", 10));
yr1044_ST(F.v7000);
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.v6996);
yr1037_SA(y_str("; &", 3));
}
yr1037_SA(y_str("((", 2));
yr1044_ST(yr2456_CType(F.p3008));
yr1037_SA(y_str(" *)(", 4));
yr1044_ST(F.v7000);
yr1037_SA(y_str(").p)[y_ix", 9));
yr1050_SI(F.v7010);
yr1037_SA(y_str("(", 1));
yr1044_ST(F.v7000);
F.p3007 = yr1056_SE();
F.v7008 = ((*(yR105 *)y_deref(F.p3006))).f_b;
F.v7006 = ((*(yR110 *)y_deref(F.v7002))).f_idx;
while ((!(F.v7008 == ((void *)0)))) {
Y_TICK();
yr2973_Expr(F.v7008, F.v7006, &F.v6998, &F.v7004);
if ((((!(F.v7006 == ((void *)0)))) && ((((*(yR110 *)y_deref(F.v7002))).f_kind == v822)))) {
yr2489_CheckType(((*(yR105 *)y_deref(F.v7008))).f_line, F.v7006, F.v7004);
} else if ((!((((((*(yR110 *)y_deref(F.v7004))).f_kind == v804)) || yr2407_IsDiscrete(F.v7004))))) {
yr1178_FailS(((*(yR105 *)y_deref(F.v7008))).f_line, y_str("a subscript is an integer or scalar value", 41));
}
yr1026_SB();
yr1044_ST(F.p3007);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.v6998);
F.p3007 = yr1056_SE();
if ((!(F.v7006 == ((void *)0)))) {
F.v7006 = ((*(yR110 *)y_deref(F.v7006))).f_link;
}
F.v7008 = ((*(yR105 *)y_deref(F.v7008))).f_next;
}
yr1026_SB();
yr1044_ST(F.p3007);
yr1037_SA(y_str(")]", 2));
if ((!F.v7012)) {
yr1037_SA(y_str("; }))", 5));
}
F.p3007 = yr1056_SE();
(*F.p3007_o) = F.p3007;
(*F.p3008_o) = F.p3008;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3013_NegExpr(void * a_p3014, rt_int a_p3015, void * a_p3016, rt_int * a_p3017, void * * a_p3018) {
struct yf3019 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3014 = a_p3014;
F.p3015 = a_p3015;
F.p3016 = a_p3016;
F.p3017_o = a_p3017;
F.p3018_o = a_p3018;
yr1026_SB();
if ((((*(yR110 *)y_deref(F.p3016))).f_kind == v804)) {
F.p3018 = yr2401_CopyRep(F.p3016);
((*(yR110 *)y_deref(F.p3018))).f_lo = INT64_C(0);
((*(yR110 *)y_deref(F.p3018))).f_hasm = 0;
if (yr3167_Suppressed(v1483)) {
yr1037_SA(y_str("Y_NEGW(", 7));
} else {
yr1037_SA(y_str("y_neg(", 6));
}
yr1044_ST(F.p3015);
yr1037_SA(y_str(")", 1));
} else if ((((*(yR110 *)y_deref(F.p3016))).f_kind == v810)) {
F.p3018 = yr2401_CopyRep(F.p3016);
((*(yR110 *)y_deref(F.p3018))).f_lo = INT64_C(0);
yr1037_SA(y_str("(-", 2));
yr1044_ST(F.p3015);
yr1037_SA(y_str(")", 1));
} else if ((((*(yR110 *)y_deref(F.p3016))).f_kind == v807)) {
F.p3018 = yr2401_CopyRep(F.p3016);
((*(yR110 *)y_deref(F.p3018))).f_lo = INT64_C(0);
yr1037_SA(y_str("y_fix_neg(", 10));
yr1044_ST(F.p3015);
yr1037_SA(y_str(")", 1));
} else if ((((*(yR110 *)y_deref(F.p3016))).f_kind == v834)) {
F.p3018 = F.p3016;
yr1037_SA(y_str("y_set_compl(", 12));
yr1044_ST(F.p3015);
yr1037_SA(y_str(")", 1));
} else {
v927 = 0;
yr1178_FailS(((*(yR105 *)y_deref(F.p3014))).f_line, y_str("- of something that is not a number or a set", 44));
}
F.p3017 = yr1056_SE();
(*F.p3017_o) = F.p3017;
(*F.p3018_o) = F.p3018;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3023_Unbounded(void * a_p3024) {
struct yf3025 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3024 = a_p3024;
F.v7055 = yr2401_CopyRep(F.p3024);
((*(yR110 *)y_deref(F.v7055))).f_lo = INT64_C(0);
((*(yR110 *)y_deref(F.v7055))).f_hi = INT64_C(0);
((*(yR110 *)y_deref(F.v7055))).f_hasm = 0;
{ void * rv7059 = F.v7055;
y_use = F.yu; return rv7059; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3029_Call2(yarr a_p3031, rt_int a_p3032, rt_int a_p3033) {
struct yf3034 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3031 = a_p3031;
F.p3032 = a_p3032;
F.p3033 = a_p3033;
yr1026_SB();
yr1037_SA(F.p3031);
yr1037_SA(y_str("(", 1));
yr1044_ST(F.p3032);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.p3033);
yr1037_SA(y_str(")", 1));
{ rt_int rv7067 = yr1056_SE();
y_use = F.yu; return rv7067; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3038_Infix(rt_int a_p3039, yarr a_p3041, rt_int a_p3042) {
struct yf3043 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3039 = a_p3039;
F.p3041 = a_p3041;
F.p3042 = a_p3042;
yr1026_SB();
yr1037_SA(y_str("(", 1));
yr1044_ST(F.p3039);
yr1037_SA(y_str(" ", 1));
yr1037_SA(F.p3041);
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.p3042);
yr1037_SA(y_str(")", 1));
{ rt_int rv7076 = yr1056_SE();
y_use = F.yu; return rv7076; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3047_EqCode(rt_int a_p3048, void * a_p3049, rt_int a_p3050, void * a_p3051) {
struct yf3052 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3048 = a_p3048;
F.p3049 = a_p3049;
F.p3050 = a_p3050;
F.p3051 = a_p3051;
F.v7087 = F.p3049;
if ((((*(yR110 *)y_deref(F.p3049))).f_kind == v846)) {
F.v7087 = F.p3051;
}
if ((((((((*(yR110 *)y_deref(F.v7087))).f_kind == v822)) || ((((*(yR110 *)y_deref(F.v7087))).f_kind == v825))) || ((((*(yR110 *)y_deref(F.v7087))).f_kind == v843))) || ((((*(yR110 *)y_deref(F.v7087))).f_kind == v846)))) {
F.v7083 = yr1200_Fresh(y_str("e", 1));
F.v7085 = yr1200_Fresh(y_str("e", 1));
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(yr2456_CType(F.v7087));
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.v7083);
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.p3048);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.v7085);
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.p3050);
yr1037_SA(y_str("; y_eq(", 7));
if ((((((*(yR110 *)y_deref(F.v7087))).f_kind == v843)) || ((((*(yR110 *)y_deref(F.v7087))).f_kind == v846)))) {
yr1037_SA(y_str("y_desc_vector(", 14));
yr1044_ST(yr2462_DescOf(((*(yR110 *)y_deref(F.v7087))).f_elem));
yr1037_SA(y_str(")", 1));
} else {
yr1044_ST(yr2462_DescOf(F.v7087));
}
yr1037_SA(y_str(", &", 3));
yr1044_ST(F.v7083);
yr1037_SA(y_str(", &", 3));
yr1044_ST(F.v7085);
yr1037_SA(y_str("); })", 5));
{ rt_int rv7101 = yr1056_SE();
y_use = F.yu; return rv7101; }
}
if ((((*(yR110 *)y_deref(F.v7087))).f_kind == v834)) {
{ rt_int rv7103 = yr3029_Call2(y_str("y_set_eq", 8), F.p3048, F.p3050);
y_use = F.yu; return rv7103; }
}
{ rt_int rv7105 = yr3038_Infix(F.p3048, y_str("==", 2), F.p3050);
y_use = F.yu; return rv7105; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3056_IsOrdered(void * a_p3057) {
struct yf3058 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3057 = a_p3057;
if ((((((((*(yR110 *)y_deref(F.p3057))).f_kind == v804)) || ((((*(yR110 *)y_deref(F.p3057))).f_kind == v810))) || ((((*(yR110 *)y_deref(F.p3057))).f_kind == v807))) || ((((*(yR110 *)y_deref(F.p3057))).f_kind == v819)))) {
{ rt_int rv7109 = 1;
y_use = F.yu; return rv7109; }
}
{ rt_int rv7110 = (((((*(yR110 *)y_deref(F.p3057))).f_kind == v816)) && ((*(yR110 *)y_deref(F.p3057))).f_ordered);
y_use = F.yu; return rv7110; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3062_FixToFloat(rt_int a_p3063, void * a_p3064) {
struct yf3065 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3063 = a_p3063;
F.p3064 = a_p3064;
yr1026_SB();
yr1037_SA(y_str("y_fix_float(", 12));
yr1044_ST(F.p3063);
yr1037_SA(y_str(", INT64_C(", 10));
yr1050_SI(((*(yR110 *)y_deref(F.p3064))).f_fsn);
yr1037_SA(y_str("), INT64_C(", 11));
yr1050_SI(((*(yR110 *)y_deref(F.p3064))).f_fsd);
yr1037_SA(y_str("))", 2));
{ rt_int rv7118 = yr1056_SE();
y_use = F.yu; return rv7118; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3069_BinExpr(void * a_p3070, void * a_p3071, rt_int * a_p3072, void * * a_p3073) {
struct yf3074 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3070 = a_p3070;
F.p3071 = a_p3071;
F.p3072_o = a_p3072;
F.p3073_o = a_p3073;
F.v7125 = ((*(yR105 *)y_deref(F.p3070))).f_name;
if (yr3138_UserOp(F.p3070, F.v7125, ((*(yR105 *)y_deref(F.p3070))).f_a, ((*(yR105 *)y_deref(F.p3070))).f_b, &F.p3072, &F.p3073)) {
(*F.p3072_o) = F.p3072;
(*F.p3073_o) = F.p3073;
y_use = F.yu; return;
}
if ((((F.v7125 == v237)) || ((F.v7125 == v399)))) {
yr2973_Expr(((*(yR105 *)y_deref(F.p3070))).f_a, v1344, &F.v7127, &F.v7133);
yr2489_CheckType(((*(yR105 *)y_deref(F.p3070))).f_line, v1344, F.v7133);
yr2973_Expr(((*(yR105 *)y_deref(F.p3070))).f_b, v1344, &F.v7129, &F.v7135);
yr2489_CheckType(((*(yR105 *)y_deref(F.p3070))).f_line, v1344, F.v7135);
F.p3073 = v1344;
if ((F.v7125 == v237)) {
F.p3072 = yr3038_Infix(F.v7127, y_str("&&", 2), F.v7129);
} else {
F.p3072 = yr3038_Infix(F.v7127, y_str("||", 2), F.v7129);
}
(*F.p3072_o) = F.p3072;
(*F.p3073_o) = F.p3073;
y_use = F.yu; return;
}
if ((F.v7125 == v360)) {
yr2973_Expr(((*(yR105 *)y_deref(F.p3070))).f_b, ((void *)0), &F.v7129, &F.v7135);
if ((!(((*(yR110 *)y_deref(F.v7135))).f_kind == v834))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3070))).f_line, y_str("IN needs a set on its right", 27));
}
yr2973_Expr(((*(yR105 *)y_deref(F.p3070))).f_a, ((*(yR110 *)y_deref(F.v7135))).f_elem, &F.v7127, &F.v7133);
yr2489_CheckType(((*(yR105 *)y_deref(F.p3070))).f_line, ((*(yR110 *)y_deref(F.v7135))).f_elem, F.v7133);
F.p3073 = v1344;
F.p3072 = yr3029_Call2(y_str("y_set_in", 8), F.v7127, F.v7129);
(*F.p3072_o) = F.p3072;
(*F.p3073_o) = F.p3073;
y_use = F.yu; return;
}
F.v7137 = ((void *)0);
if (((((((((!(F.p3071 == ((void *)0)))) && ((!(F.v7125 == v585)))) && ((!(F.v7125 == v570)))) && ((!(F.v7125 == v588)))) && ((!(F.v7125 == v540)))) && ((!(F.v7125 == v591)))) && ((!(F.v7125 == v543))))) {
F.v7137 = F.p3071;
}
yr2973_Expr(((*(yR105 *)y_deref(F.p3070))).f_a, F.v7137, &F.v7127, &F.v7133);
yr2973_Expr(((*(yR105 *)y_deref(F.p3070))).f_b, F.v7133, &F.v7129, &F.v7135);
if ((((F.v7125 == v585)) || ((F.v7125 == v570)))) {
yr2489_CheckType(((*(yR105 *)y_deref(F.p3070))).f_line, F.v7133, F.v7135);
if (yr2450_NonAssignable(F.v7133)) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3070))).f_line, y_str("= and # are not defined for signals, files and semaphores, nor what holds them (VII.B)", 86));
}
if ((((*(yR110 *)y_deref(F.v7133))).f_opaque && (((y_div(((*(yR110 *)y_deref(F.v7133))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3070))).f_line, ((*(yR110 *)y_deref(F.v7133))).f_tname, y_str(" is opaque here: = is not exported (X.B.3)", 42));
}
F.p3073 = v1344;
if ((((*(yR110 *)y_deref(F.v7133))).f_kind == v807)) {
yr2872_CommonScale(&F.v7127, F.v7133, &F.v7129, F.v7135, yr3023_Unbounded(F.v7133), ((*(yR105 *)y_deref(F.p3070))).f_line);
}
F.p3072 = yr3047_EqCode(F.v7127, F.v7133, F.v7129, F.v7135);
if ((F.v7125 == v570)) {
yr1026_SB();
yr1037_SA(y_str("(!", 2));
yr1044_ST(F.p3072);
yr1037_SA(y_str(")", 1));
F.p3072 = yr1056_SE();
}
(*F.p3072_o) = F.p3072;
(*F.p3073_o) = F.p3073;
y_use = F.yu; return;
}
if ((((((F.v7125 == v588)) || ((F.v7125 == v540))) || ((F.v7125 == v591))) || ((F.v7125 == v543)))) {
yr2489_CheckType(((*(yR105 *)y_deref(F.p3070))).f_line, F.v7133, F.v7135);
if ((!yr3056_IsOrdered(F.v7133))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3070))).f_line, y_str("< <= > >= apply to ordered values (VIII.A.1)", 44));
}
F.p3073 = v1344;
if ((((*(yR110 *)y_deref(F.v7133))).f_kind == v807)) {
yr2872_CommonScale(&F.v7127, F.v7133, &F.v7129, F.v7135, yr3023_Unbounded(F.v7133), ((*(yR105 *)y_deref(F.p3070))).f_line);
}
if ((F.v7125 == v588)) {
F.p3072 = yr3038_Infix(F.v7127, y_str("<", 1), F.v7129);
} else if ((F.v7125 == v540)) {
F.p3072 = yr3038_Infix(F.v7127, y_str("<=", 2), F.v7129);
} else if ((F.v7125 == v591)) {
F.p3072 = yr3038_Infix(F.v7127, y_str(">", 1), F.v7129);
} else {
F.p3072 = yr3038_Infix(F.v7127, y_str(">=", 2), F.v7129);
}
(*F.p3072_o) = F.p3072;
(*F.p3073_o) = F.p3073;
y_use = F.yu; return;
}
yr2489_CheckType(((*(yR105 *)y_deref(F.p3070))).f_line, F.v7133, F.v7135);
F.v7139 = ((*(yR110 *)y_deref(F.v7133))).f_kind;
if ((((*(yR110 *)y_deref(F.v7133))).f_kind == v846)) {
F.v7139 = ((*(yR110 *)y_deref(F.v7135))).f_kind;
}
if ((F.v7125 == v489)) {
if ((F.v7139 == v813)) {
F.p3073 = v1344;
F.p3072 = yr3038_Infix(F.v7127, y_str("!=", 2), F.v7129);
} else if ((F.v7139 == v834)) {
F.p3073 = F.v7133;
F.p3072 = yr3029_Call2(y_str("y_set_xor", 9), F.v7127, F.v7129);
} else {
yr1178_FailS(((*(yR105 *)y_deref(F.p3070))).f_line, y_str("XOR applies to BOOLEAN values and sets", 38));
}
(*F.p3072_o) = F.p3072;
(*F.p3073_o) = F.p3073;
y_use = F.yu; return;
}
if ((F.v7139 == v834)) {
F.p3073 = F.v7133;
if ((F.v7125 == v573)) {
F.p3072 = yr3029_Call2(y_str("y_set_union", 11), F.v7127, F.v7129);
} else if ((F.v7125 == v576)) {
F.p3072 = yr3029_Call2(y_str("y_set_diff", 10), F.v7127, F.v7129);
} else if ((F.v7125 == v579)) {
F.p3072 = yr3029_Call2(y_str("y_set_inter", 11), F.v7127, F.v7129);
} else {
yr1178_FailS(((*(yR105 *)y_deref(F.p3070))).f_line, y_str("this operator does not apply to sets", 36));
}
(*F.p3072_o) = F.p3072;
(*F.p3073_o) = F.p3073;
y_use = F.yu; return;
}
if ((F.v7139 == v804)) {
F.p3073 = yr3023_Unbounded(F.v7133);
if ((yr3167_Suppressed(v1483) && (((((F.v7125 == v573)) || ((F.v7125 == v576))) || ((F.v7125 == v579)))))) {
if ((F.v7125 == v573)) {
F.p3072 = yr3029_Call2(y_str("Y_ADDW", 6), F.v7127, F.v7129);
} else if ((F.v7125 == v576)) {
F.p3072 = yr3029_Call2(y_str("Y_SUBW", 6), F.v7127, F.v7129);
} else {
F.p3072 = yr3029_Call2(y_str("Y_MULW", 6), F.v7127, F.v7129);
}
} else if ((F.v7125 == v573)) {
F.p3072 = yr3029_Call2(y_str("y_add", 5), F.v7127, F.v7129);
} else if ((F.v7125 == v576)) {
F.p3072 = yr3029_Call2(y_str("y_sub", 5), F.v7127, F.v7129);
} else if ((F.v7125 == v579)) {
F.p3072 = yr3029_Call2(y_str("y_mul", 5), F.v7127, F.v7129);
} else if ((F.v7125 == v276)) {
F.p3072 = yr3029_Call2(y_str("y_div", 5), F.v7127, F.v7129);
} else if ((F.v7125 == v378)) {
F.p3072 = yr3029_Call2(y_str("y_mod", 5), F.v7127, F.v7129);
} else if ((F.v7125 == v582)) {
F.p3073 = v1354;
yr1026_SB();
yr1037_SA(y_str("y_fdiv((double)(", 16));
yr1044_ST(F.v7127);
yr1037_SA(y_str("), (double)(", 12));
yr1044_ST(F.v7129);
yr1037_SA(y_str("))", 2));
F.p3072 = yr1056_SE();
} else {
yr1186_FailN(((*(yR105 *)y_deref(F.p3070))).f_line, F.v7125, y_str(" is a free operator: no definition of it is visible (VIII.A)", 60));
}
(*F.p3072_o) = F.p3072;
(*F.p3073_o) = F.p3073;
y_use = F.yu; return;
}
if ((F.v7139 == v810)) {
F.p3073 = yr3023_Unbounded(F.v7133);
if ((F.v7125 == v573)) {
F.p3072 = yr2900_FloatChk(yr3038_Infix(F.v7127, y_str("+", 1), F.v7129));
} else if ((F.v7125 == v576)) {
F.p3072 = yr2900_FloatChk(yr3038_Infix(F.v7127, y_str("-", 1), F.v7129));
} else if ((F.v7125 == v579)) {
F.p3072 = yr2900_FloatChk(yr3038_Infix(F.v7127, y_str("*", 1), F.v7129));
} else if ((F.v7125 == v582)) {
F.p3073 = v1354;
F.p3072 = yr2900_FloatChk(yr3029_Call2(y_str("y_fdiv", 6), F.v7127, F.v7129));
} else {
yr1186_FailN(((*(yR105 *)y_deref(F.p3070))).f_line, F.v7125, y_str(" does not apply to these numbers", 32));
}
(*F.p3072_o) = F.p3072;
(*F.p3073_o) = F.p3073;
y_use = F.yu; return;
}
if ((F.v7139 == v807)) {
F.p3073 = yr3023_Unbounded(F.v7133);
if ((((F.v7125 == v573)) || ((F.v7125 == v576)))) {
yr2872_CommonScale(&F.v7127, F.v7133, &F.v7129, F.v7135, F.p3073, ((*(yR105 *)y_deref(F.p3070))).f_line);
if ((F.v7125 == v573)) {
F.p3072 = yr3029_Call2(y_str("y_fix_add", 9), F.v7127, F.v7129);
} else {
F.p3072 = yr3029_Call2(y_str("y_fix_sub", 9), F.v7127, F.v7129);
}
} else if ((F.v7125 == v579)) {
yr2603_SetScale(F.p3073, yr2570_MulChk(((*(yR110 *)y_deref(F.v7133))).f_fsn, ((*(yR110 *)y_deref(F.v7135))).f_fsn, ((*(yR105 *)y_deref(F.p3070))).f_line), yr2570_MulChk(((*(yR110 *)y_deref(F.v7133))).f_fsd, ((*(yR110 *)y_deref(F.v7135))).f_fsd, ((*(yR105 *)y_deref(F.p3070))).f_line));
F.p3072 = yr3029_Call2(y_str("y_fix_mul", 9), F.v7127, F.v7129);
} else if ((F.v7125 == v582)) {
F.p3073 = v1354;
F.p3072 = yr2900_FloatChk(yr3029_Call2(y_str("y_fdiv", 6), yr3062_FixToFloat(F.v7127, F.v7133), yr3062_FixToFloat(F.v7129, F.v7135)));
} else {
yr1186_FailN(((*(yR105 *)y_deref(F.p3070))).f_line, F.v7125, y_str(" does not apply to these numbers", 32));
}
(*F.p3072_o) = F.p3072;
(*F.p3073_o) = F.p3073;
y_use = F.yu; return;
}
yr1186_FailN(((*(yR105 *)y_deref(F.p3070))).f_line, F.v7125, y_str(" does not apply to these values", 31));
(*F.p3072_o) = F.p3072;
(*F.p3073_o) = F.p3073;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3078_Fits(void * a_p3079, void * a_p3080) {
struct yf3081 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3079 = a_p3079;
F.p3080 = a_p3080;
if ((((*(yR110 *)y_deref(F.p3079))).f_kind == v843)) {
if ((!yr2419_IsArrayLike(F.p3080))) {
{ rt_int rv7190 = 0;
y_use = F.yu; return rv7190; }
}
if ((!(((*(yR110 *)y_deref(F.p3080))).f_nidx == ((*(yR110 *)y_deref(F.p3079))).f_nidx))) {
{ rt_int rv7192 = 0;
y_use = F.yu; return rv7192; }
}
{ rt_int rv7193 = yr2474_SameType(((*(yR110 *)y_deref(F.p3079))).f_elem, ((*(yR110 *)y_deref(F.p3080))).f_elem);
y_use = F.yu; return rv7193; }
}
if ((((*(yR110 *)y_deref(F.p3079))).f_kind == v855)) {
{ rt_int rv7195 = 1;
y_use = F.yu; return rv7195; }
}
{ rt_int rv7196 = yr2474_SameType(F.p3079, F.p3080);
y_use = F.yu; return rv7196; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3085_Choose(void * a_p3086, rt_int a_p3087, rt_int a_p3088) {
struct yf3089 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3086 = a_p3086;
F.p3087 = a_p3087;
F.p3088 = a_p3088;
F.v7202 = F.p3086;
while ((!(F.v7202 == ((void *)0)))) {
Y_TICK();
if ((((*(yR125 *)y_deref(F.v7202))).f_nparams == F.p3088)) {
F.v7206 = 1;
F.v7204 = ((*(yR125 *)y_deref(F.v7202))).f_params;
F.v7208 = INT64_C(1);
while ((!(F.v7204 == ((void *)0)))) {
Y_TICK();
if ((!yr3078_Fits(((*(yR120 *)y_deref(F.v7204))).f_rep, ((void * *)(v1523).p)[y_ix1(v1523, y_add(F.p3087, F.v7208))]))) {
F.v7206 = 0;
}
F.v7208 = y_range(y_add(F.v7208, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7204 = ((*(yR120 *)y_deref(F.v7204))).f_next;
}
if (F.v7206) {
{ void * rv7215 = F.v7202;
y_use = F.yu; return rv7215; }
}
}
F.v7202 = ((*(yR125 *)y_deref(F.v7202))).f_alt;
}
{ void * rv7216 = ((void *)0);
y_use = F.yu; return rv7216; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3093_HidesStandard(void * a_p3094) {
struct yf3095 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3094 = a_p3094;
F.v7220 = F.p3094;
while ((!(F.v7220 == ((void *)0)))) {
Y_TICK();
if ((((!(((*(yR125 *)y_deref(F.v7220))).f_decl == ((void *)0)))) && ((((*(yR105 *)y_deref(((*(yR125 *)y_deref(F.v7220))).f_decl))).f_ival == INT64_C(0))))) {
{ rt_int rv7223 = 1;
y_use = F.yu; return rv7223; }
}
F.v7220 = ((*(yR125 *)y_deref(F.v7220))).f_alt;
}
{ rt_int rv7225 = 0;
y_use = F.yu; return rv7225; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3099_CompileArgs(void * a_p3100, void * a_p3101, rt_int * a_p3102, rt_int * a_p3103) {
struct yf3104 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3100 = a_p3100;
F.p3101 = a_p3101;
F.p3102_o = a_p3102;
F.p3103_o = a_p3103;
F.v7232 = F.p3100;
F.v7234 = ((void *)0);
F.p3102 = v1536;
F.p3103 = INT64_C(0);
if ((!(F.p3101 == ((void *)0)))) {
F.v7234 = ((*(yR125 *)y_deref(F.p3101))).f_params;
}
while ((!(F.v7232 == ((void *)0)))) {
Y_TICK();
if ((v1536 >= INT64_C(4000))) {
yr1178_FailS(((*(yR105 *)y_deref(F.v7232))).f_line, y_str("calls nested too deeply", 23));
}
F.p3103 = y_range(y_add(F.p3103, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1536 = y_range(y_add(F.p3102, F.p3103), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7236 = ((void *)0);
if ((!(F.v7234 == ((void *)0)))) {
F.v7236 = ((*(yR120 *)y_deref(F.v7234))).f_rep;
F.v7234 = ((*(yR120 *)y_deref(F.v7234))).f_next;
}
yr2973_Expr(F.v7232, F.v7236, &((rt_int *)(v1512).p)[y_ix1(v1512, y_add(F.p3102, F.p3103))], &((void * *)(v1523).p)[y_ix1(v1523, y_add(F.p3102, F.p3103))]);
((void * *)(v1534).p)[y_ix1(v1534, y_add(F.p3102, F.p3103))] = F.v7232;
F.v7232 = ((*(yR105 *)y_deref(F.v7232))).f_next;
}
(*F.p3102_o) = F.p3102;
(*F.p3103_o) = F.p3103;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3108_CheckUnresolved(void * a_p3109, void * a_p3110, rt_int a_p3111) {
struct yf3112 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3109 = a_p3109;
F.p3110 = a_p3110;
F.p3111 = a_p3111;
if ((((!(((*(yR110 *)y_deref(F.p3109))).f_kind == v843))) || ((!(((*(yR110 *)y_deref(F.p3110))).f_kind == v822))))) {
y_use = F.yu; return;
}
F.v7251 = ((*(yR110 *)y_deref(F.p3110))).f_idx;
while ((!(F.v7251 == ((void *)0)))) {
Y_TICK();
if ((!(((*(yR110 *)y_deref(F.v7251))).f_kind == v804))) {
yr1178_FailS(F.p3111, y_str("a length-unresolved array formal takes arrays with integer indices only (X.A.3)", 79));
}
F.v7251 = ((*(yR110 *)y_deref(F.v7251))).f_link;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3116_SameAsFormal(void * a_p3117, void * a_p3118) {
struct yf3119 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3117 = a_p3117;
F.p3118 = a_p3118;
if ((((*(yR110 *)y_deref(F.p3117))).f_kind == v855)) {
{ rt_int rv7257 = 1;
y_use = F.yu; return rv7257; }
}
if ((((*(yR110 *)y_deref(F.p3117))).f_kind == v843)) {
if ((!((((((*(yR110 *)y_deref(F.p3118))).f_kind == v822)) || ((((*(yR110 *)y_deref(F.p3118))).f_kind == v843)))))) {
{ rt_int rv7259 = 0;
y_use = F.yu; return rv7259; }
}
{ rt_int rv7260 = yr2516_Identical(((*(yR110 *)y_deref(F.p3117))).f_elem, ((*(yR110 *)y_deref(F.p3118))).f_elem);
y_use = F.yu; return rv7260; }
}
{ rt_int rv7261 = yr2516_Identical(F.p3117, F.p3118);
y_use = F.yu; return rv7261; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3123_CallCode(void * a_p3124, rt_int a_p3125, rt_int a_p3126, rt_int a_p3127) {
struct yf3128 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3124 = a_p3124;
F.p3125 = a_p3125;
F.p3126 = a_p3126;
F.p3127 = a_p3127;
F.v7268 = ((*(yR125 *)y_deref(F.p3124))).f_params;
F.v7270 = y_range(y_add(F.p3125, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7274 = 1;
F.v7277 = INT64_C(0);
F.v7280 = INT64_C(0);
F.v7283 = INT64_C(0);
F.v7286 = INT64_C(0);
F.v7289 = INT64_C(0);
if ((!(F.p3126 == ((*(yR125 *)y_deref(F.p3124))).f_nparams))) {
yr1186_FailN(F.p3127, ((*(yR125 *)y_deref(F.p3124))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
yr3438_CheckActuals(F.p3124, F.p3125, F.p3127);
yr1026_SB();
yr1044_ST(((*(yR125 *)y_deref(F.p3124))).f_cname);
yr1037_SA(y_str("(", 1));
if ((((*(yR125 *)y_deref(F.p3124))).f_level > INT64_C(1))) {
yr1044_ST(yr2369_FramePtr(y_range(y_sub(((*(yR125 *)y_deref(F.p3124))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v7274 = 0;
}
while ((!(F.v7268 == ((void *)0)))) {
Y_TICK();
if ((!F.v7274)) {
yr1037_SA(y_str(", ", 2));
}
F.v7274 = 0;
if ((!yr3078_Fits(((*(yR120 *)y_deref(F.v7268))).f_rep, ((void * *)(v1523).p)[y_ix1(v1523, F.v7270)]))) {
v927 = 0;
yr2481_TypeClash(((*(yR105 *)y_deref(((void * *)(v1534).p)[y_ix1(v1534, F.v7270)]))).f_line, ((*(yR120 *)y_deref(F.v7268))).f_rep, ((void * *)(v1523).p)[y_ix1(v1523, F.v7270)]);
}
yr3108_CheckUnresolved(((*(yR120 *)y_deref(F.v7268))).f_rep, ((void * *)(v1523).p)[y_ix1(v1523, F.v7270)], ((*(yR105 *)y_deref(((void * *)(v1534).p)[y_ix1(v1534, F.v7270)]))).f_line);
if ((((*(yR110 *)y_deref(((*(yR120 *)y_deref(F.v7268))).f_rep))).f_kind == v855)) {
if (((((!(((*(yR120 *)y_deref(F.v7268))).f_cls == v897))) && (!yr2934_IsVariable(((void * *)(v1534).p)[y_ix1(v1534, F.v7270)]))) && ((!(((*(yR110 *)y_deref(((void * *)(v1523).p)[y_ix1(v1523, F.v7270)]))).f_kind == v855))))) {
yr1186_FailN(((*(yR105 *)y_deref(((void * *)(v1534).p)[y_ix1(v1534, F.v7270)]))).f_line, ((*(yR120 *)y_deref(F.v7268))).f_name, y_str(": the actual of a VAR or OUT parameter must be a variable", 57));
}
yr1044_ST(yr2780_SpaceArg(((void * *)(v1534).p)[y_ix1(v1534, F.v7270)], ((rt_int *)(v1512).p)[y_ix1(v1512, F.v7270)], ((void * *)(v1523).p)[y_ix1(v1523, F.v7270)]));
} else if ((((*(yR120 *)y_deref(F.v7268))).f_cls == v897)) {
yr1044_ST(yr2906_Convert(((rt_int *)(v1512).p)[y_ix1(v1512, F.v7270)], ((*(yR120 *)y_deref(F.v7268))).f_rep, ((void * *)(v1523).p)[y_ix1(v1523, F.v7270)]));
} else {
if ((!yr2934_IsVariable(((void * *)(v1534).p)[y_ix1(v1534, F.v7270)]))) {
v927 = 0;
yr1186_FailN(((*(yR105 *)y_deref(((void * *)(v1534).p)[y_ix1(v1534, F.v7270)]))).f_line, ((*(yR120 *)y_deref(F.v7268))).f_name, y_str(": the actual of a VAR or OUT parameter must be a variable", 57));
}
yr2940_CheckPure(((void * *)(v1534).p)[y_ix1(v1534, F.v7270)]);
yr3405_NoteWrite(((void * *)(v1534).p)[y_ix1(v1534, F.v7270)]);
if ((((((*(yR120 *)y_deref(F.v7268))).f_cls == v903)) && yr2788_PackedComponent(((void * *)(v1534).p)[y_ix1(v1534, F.v7270)]))) {
yr1186_FailN(((*(yR105 *)y_deref(((void * *)(v1534).p)[y_ix1(v1534, F.v7270)]))).f_line, ((*(yR120 *)y_deref(F.v7268))).f_name, y_str(": a component of a PACKED object is not a VAR actual (XIV.VI.1)", 63));
}
if (yr3116_SameAsFormal(((*(yR120 *)y_deref(F.v7268))).f_rep, ((void * *)(v1523).p)[y_ix1(v1523, F.v7270)])) {
yr1037_SA(y_str("&", 1));
yr1044_ST(((rt_int *)(v1512).p)[y_ix1(v1512, F.v7270)]);
} else if ((((*(yR120 *)y_deref(F.v7268))).f_cls == v903)) {
yr1186_FailN(((*(yR105 *)y_deref(((void * *)(v1534).p)[y_ix1(v1534, F.v7270)]))).f_line, ((*(yR120 *)y_deref(F.v7268))).f_name, y_str(": a VAR actual has the representation of its formal (VII.G, X.A.2)", 66));
} else {
F.v7283 = yr1200_Fresh(y_str("yo", 2));
F.v7277 = yr3350_Join(F.v7277, yr3350_Join(yr2456_CType(((*(yR120 *)y_deref(F.v7268))).f_rep), yr1061_T(y_str(" ", 1)), F.v7283), yr1061_T(y_str(";", 1)));
if ((((*(yR110 *)y_deref(((*(yR120 *)y_deref(F.v7268))).f_rep))).f_kind == v843)) {
F.v7277 = yr3350_Join(F.v7277, yr3350_Join(yr1061_T(y_str(" ", 1)), F.v7283, yr1061_T(y_str(" = y_like(", 10))), yr3350_Join(((rt_int *)(v1512).p)[y_ix1(v1512, F.v7270)], yr3350_Join(yr1061_T(y_str(", ", 2)), yr3132_Num(((*(yR110 *)y_deref(((void * *)(v1523).p)[y_ix1(v1523, F.v7270)]))).f_nidx), yr1061_T(y_str(", ", 2))), yr3350_Join(yr2462_DescOf(((*(yR110 *)y_deref(((*(yR120 *)y_deref(F.v7268))).f_rep))).f_elem), yr1061_T(y_str(");", 2)), INT64_C(0))));
} else if (yr2431_Deep(((*(yR120 *)y_deref(F.v7268))).f_rep)) {
F.v7277 = yr3350_Join(F.v7277, yr3350_Join(yr1061_T(y_str(" y_init(", 8)), yr2462_DescOf(((*(yR120 *)y_deref(F.v7268))).f_rep), yr1061_T(y_str(", &", 3))), yr3350_Join(F.v7283, yr1061_T(y_str(");", 2)), INT64_C(0)));
}
F.v7280 = yr3350_Join(F.v7280, yr1061_T(y_str(" ", 1)), yr2914_StoreText(((rt_int *)(v1512).p)[y_ix1(v1512, F.v7270)], ((void * *)(v1523).p)[y_ix1(v1523, F.v7270)], F.v7283, ((*(yR120 *)y_deref(F.v7268))).f_rep, ((*(yR105 *)y_deref(((void * *)(v1534).p)[y_ix1(v1534, F.v7270)]))).f_line));
yr1037_SA(y_str("&", 1));
yr1044_ST(F.v7283);
}
}
F.v7270 = y_range(y_add(F.v7270, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7268 = ((*(yR120 *)y_deref(F.v7268))).f_next;
}
yr1037_SA(y_str(")", 1));
v1536 = F.p3125;
F.v7286 = yr1056_SE();
if ((F.v7277 == INT64_C(0))) {
{ rt_int rv7325 = F.v7286;
y_use = F.yu; return rv7325; }
}
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(F.v7277);
if ((((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.p3124))).f_ret))).f_kind == v852)) {
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.v7286);
yr1037_SA(y_str(";", 1));
yr1044_ST(F.v7280);
yr1037_SA(y_str(" })", 3));
} else {
F.v7289 = yr1200_Fresh(y_str("yv", 2));
yr1037_SA(y_str(" ", 1));
yr1044_ST(yr2456_CType(((*(yR125 *)y_deref(F.p3124))).f_ret));
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.v7289);
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.v7286);
yr1037_SA(y_str(";", 1));
yr1044_ST(F.v7280);
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.v7289);
yr1037_SA(y_str("; })", 4));
}
{ rt_int rv7337 = yr1056_SE();
y_use = F.yu; return rv7337; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3132_Num(rt_int a_p3133) {
struct yf3134 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3133 = a_p3133;
yr1026_SB();
yr1050_SI(F.p3133);
{ rt_int rv7340 = yr1056_SE();
y_use = F.yu; return rv7340; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3138_UserOp(void * a_p3139, rt_int a_p3140, void * a_p3141, void * a_p3142, rt_int * a_p3143, void * * a_p3144) {
struct yf3145 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3139 = a_p3139;
F.p3140 = a_p3140;
F.p3141 = a_p3141;
F.p3142 = a_p3142;
F.p3143_o = a_p3143;
F.p3144_o = a_p3144;
F.v7349 = yr2283_Find(F.p3140);
if ((F.v7349 == ((void *)0))) {
{ rt_int rv7357 = 0;
(*F.p3143_o) = F.p3143;
(*F.p3144_o) = F.p3144;
y_use = F.yu; return rv7357; }
}
F.v7349 = yr2388_Real(F.v7349);
if ((!(((*(yR125 *)y_deref(F.v7349))).f_kind == v876))) {
{ rt_int rv7359 = 0;
(*F.p3143_o) = F.p3143;
(*F.p3144_o) = F.p3144;
y_use = F.yu; return rv7359; }
}
((*(yR105 *)y_deref(F.p3141))).f_next = F.p3142;
if ((!(F.p3142 == ((void *)0)))) {
((*(yR105 *)y_deref(F.p3142))).f_next = ((void *)0);
}
yr3099_CompileArgs(F.p3141, ((void *)0), &F.v7353, &F.v7355);
F.v7351 = yr3085_Choose(F.v7349, F.v7353, F.v7355);
if ((F.v7351 == ((void *)0))) {
v1536 = F.v7353;
if (yr3093_HidesStandard(F.v7349)) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3139))).f_line, F.p3140, y_str(": no definition takes operands of these types", 45));
}
{ rt_int rv7362 = 0;
(*F.p3143_o) = F.p3143;
(*F.p3144_o) = F.p3144;
y_use = F.yu; return rv7362; }
}
yr3149_NoteCall(F.v7351, ((*(yR105 *)y_deref(F.p3139))).f_line);
F.p3143 = yr3123_CallCode(F.v7351, F.v7353, F.v7355, ((*(yR105 *)y_deref(F.p3139))).f_line);
F.p3144 = ((*(yR125 *)y_deref(F.v7351))).f_ret;
{ rt_int rv7364 = 1;
(*F.p3143_o) = F.p3143;
(*F.p3144_o) = F.p3144;
y_use = F.yu; return rv7364; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3149_NoteCall(void * a_p3150, rt_int a_p3151) {
struct yf3152 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3150 = a_p3150;
F.p3151 = a_p3151;
F.v7371 = F.p3150;
if ((((((*(yR125 *)y_deref(F.v7371))).f_kind == v876)) && ((!(((*(yR125 *)y_deref(F.v7371))).f_target == ((void *)0)))))) {
F.v7371 = ((*(yR125 *)y_deref(F.v7371))).f_target;
}
if ((!((*(yR125 *)y_deref(F.v7371))).f_func)) {
v1657 = y_range(y_add(v1657, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((v1625 == ((void *)0))) {
y_use = F.yu; return;
}
F.v7369 = yr1939_NewNode(v669, F.p3151);
((*(yR105 *)y_deref(F.v7369))).f_sym = F.v7371;
((*(yR105 *)y_deref(F.v7369))).f_next = ((*(yR125 *)y_deref(v1625))).f_calls;
((*(yR125 *)y_deref(v1625))).f_calls = F.v7369;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3156_Directive(void * a_p3157, void * a_p3158, rt_int a_p3159, rt_int a_p3160, rt_int * a_p3161, void * * a_p3162) {
struct yf3163 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3157 = a_p3157;
F.p3158 = a_p3158;
F.p3159 = a_p3159;
F.p3160 = a_p3160;
F.p3161_o = a_p3161;
F.p3162_o = a_p3162;
v1536 = F.p3159;
yr2825_Manifest(((*(yR105 *)y_deref(F.p3158))).f_a, &F.v7382, &F.v7384);
if (((!F.v7382) || ((!(F.p3160 == INT64_C(1)))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3158))).f_line, ((*(yR105 *)y_deref(F.p3158))).f_name, y_str(" takes a manifest TRAP_KIND (XIV.XIII.2)", 40));
}
F.v7386 = INT64_C(0);
if ((F.v7384 == INT64_C(0))) {
F.v7386 = v1480;
} else if ((F.v7384 == INT64_C(1))) {
F.v7386 = v1483;
} else if ((F.v7384 == INT64_C(2))) {
F.v7386 = v1486;
}
F.p3162 = v1348;
F.p3161 = yr1061_T(y_str("((void)0)", 9));
if ((((*(yR125 *)y_deref(F.p3157))).f_mval == v1489)) {
if ((!yr3167_Suppressed(F.v7386))) {
v1660 = y_range(y_add(v1660, F.v7386), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
} else if ((((*(yR125 *)y_deref(F.p3157))).f_mval == v1492)) {
if (yr3167_Suppressed(F.v7386)) {
v1660 = y_range(y_sub(v1660, F.v7386), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
} else {
F.p3162 = v1344;
if ((yr3167_Suppressed(F.v7386) && ((!(F.v7386 == INT64_C(0)))))) {
F.p3161 = yr1061_T(y_str("1", 1));
} else {
F.p3161 = yr1061_T(y_str("0", 1));
}
}
(*F.p3161_o) = F.p3161;
(*F.p3162_o) = F.p3162;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3167_Suppressed(rt_int a_p3168) {
struct yf3169 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3168 = a_p3168;
if ((F.p3168 == INT64_C(0))) {
{ rt_int rv7403 = 0;
y_use = F.yu; return rv7403; }
}
{ rt_int rv7408 = ((y_mod((y_div(v1660, F.p3168)), INT64_C(2))) == INT64_C(1));
y_use = F.yu; return rv7408; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3173_UserAssign(rt_int a_p3174, void * a_p3175, rt_int a_p3176, void * a_p3177, rt_int a_p3178) {
struct yf3179 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3174 = a_p3174;
F.p3175 = a_p3175;
F.p3176 = a_p3176;
F.p3177 = a_p3177;
F.p3178 = a_p3178;
F.v7416 = yr2283_Find(y_range(v531, INT64_C(0), INT64_C(4000000)));
if ((F.v7416 == ((void *)0))) {
{ rt_int rv7426 = INT64_C(0);
y_use = F.yu; return rv7426; }
}
F.v7416 = yr2388_Real(F.v7416);
if ((!(((*(yR125 *)y_deref(F.v7416))).f_kind == v876))) {
{ rt_int rv7428 = INT64_C(0);
y_use = F.yu; return rv7428; }
}
F.v7418 = F.v7416;
while ((!(F.v7418 == ((void *)0)))) {
Y_TICK();
if ((((*(yR125 *)y_deref(F.v7418))).f_nparams == INT64_C(2))) {
F.v7420 = ((*(yR125 *)y_deref(F.v7418))).f_params;
F.v7422 = ((*(yR120 *)y_deref(F.v7420))).f_next;
if ((((((!(((*(yR120 *)y_deref(F.v7420))).f_cls == v897))) && ((((*(yR120 *)y_deref(F.v7422))).f_cls == v897))) && yr2474_SameType(((*(yR120 *)y_deref(F.v7420))).f_rep, F.p3175)) && yr2474_SameType(((*(yR120 *)y_deref(F.v7422))).f_rep, F.p3177))) {
if ((v1625 == F.v7418)) {
{ rt_int rv7431 = INT64_C(0);
y_use = F.yu; return rv7431; }
}
yr3149_NoteCall(F.v7418, F.p3178);
yr1026_SB();
if (yr2516_Identical(((*(yR120 *)y_deref(F.v7420))).f_rep, F.p3175)) {
yr1044_ST(((*(yR125 *)y_deref(F.v7418))).f_cname);
yr1037_SA(y_str("(", 1));
if ((((*(yR125 *)y_deref(F.v7418))).f_level > INT64_C(1))) {
yr1044_ST(yr2369_FramePtr(y_range(y_sub(((*(yR125 *)y_deref(F.v7418))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr1037_SA(y_str(", ", 2));
}
yr1037_SA(y_str("&", 1));
yr1044_ST(F.p3174);
} else {
F.v7424 = yr1200_Fresh(y_str("yo", 2));
yr1037_SA(y_str("{ ", 2));
yr1044_ST(yr2456_CType(((*(yR120 *)y_deref(F.v7420))).f_rep));
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.v7424);
yr1037_SA(y_str(";", 1));
if (yr2431_Deep(((*(yR120 *)y_deref(F.v7420))).f_rep)) {
yr1037_SA(y_str(" y_init(", 8));
yr1044_ST(yr2462_DescOf(((*(yR120 *)y_deref(F.v7420))).f_rep));
yr1037_SA(y_str(", &", 3));
yr1044_ST(F.v7424);
yr1037_SA(y_str(");", 2));
}
yr1037_SA(y_str(" ", 1));
yr1044_ST(((*(yR125 *)y_deref(F.v7418))).f_cname);
yr1037_SA(y_str("(", 1));
if ((((*(yR125 *)y_deref(F.v7418))).f_level > INT64_C(1))) {
yr1044_ST(yr2369_FramePtr(y_range(y_sub(((*(yR125 *)y_deref(F.v7418))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr1037_SA(y_str(", ", 2));
}
yr1037_SA(y_str("&", 1));
yr1044_ST(F.v7424);
}
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2906_Convert(F.p3176, ((*(yR120 *)y_deref(F.v7422))).f_rep, F.p3177));
yr1037_SA(y_str(");", 2));
if ((!yr2516_Identical(((*(yR120 *)y_deref(F.v7420))).f_rep, F.p3175))) {
yr1037_SA(y_str(" ", 1));
yr1044_ST(yr2914_StoreText(F.p3174, F.p3175, F.v7424, ((*(yR120 *)y_deref(F.v7420))).f_rep, F.p3178));
yr1037_SA(y_str(" }", 2));
}
{ rt_int rv7456 = yr1056_SE();
y_use = F.yu; return rv7456; }
}
}
F.v7418 = ((*(yR125 *)y_deref(F.v7418))).f_alt;
}
{ rt_int rv7458 = INT64_C(0);
y_use = F.yu; return rv7458; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3183_Assign(rt_int a_p3184, void * a_p3185, rt_int a_p3186, void * a_p3187, rt_int a_p3188) {
struct yf3189 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3184 = a_p3184;
F.p3185 = a_p3185;
F.p3186 = a_p3186;
F.p3187 = a_p3187;
F.p3188 = a_p3188;
F.v7466 = yr3173_UserAssign(F.p3184, F.p3185, F.p3186, F.p3187, F.p3188);
if ((!(F.v7466 == INT64_C(0)))) {
yr1132_Emit(F.v7466);
} else {
yr2924_Store(F.p3184, F.p3185, F.p3186, F.p3187, F.p3188);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3193_CallExpr(void * a_p3194, void * a_p3195, rt_int a_p3196, rt_int * a_p3197, void * * a_p3198) {
struct yf3199 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3194 = a_p3194;
F.p3195 = a_p3195;
F.p3196 = a_p3196;
F.p3197_o = a_p3197;
F.p3198_o = a_p3198;
F.v7475 = yr2388_Real(yr2295_Lookup(((*(yR105 *)y_deref(F.p3194))).f_name, ((*(yR105 *)y_deref(F.p3194))).f_line));
if ((((*(yR125 *)y_deref(F.v7475))).f_kind == v891)) {
yr3835_StdCall(((*(yR125 *)y_deref(F.v7475))).f_mval, F.p3194, F.p3196, &F.p3197, &F.p3198);
(*F.p3197_o) = F.p3197;
(*F.p3198_o) = F.p3198;
y_use = F.yu; return;
}
if ((((((*(yR125 *)y_deref(F.v7475))).f_kind == v867)) || ((((*(yR125 *)y_deref(F.v7475))).f_kind == v870)))) {
if (F.p3196) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3194))).f_line, y_str("a value is not a statement", 26));
}
yr3203_Denote(((*(yR125 *)y_deref(F.v7475))).f_rep, F.p3194, &F.p3197, &F.p3198);
(*F.p3197_o) = F.p3197;
(*F.p3198_o) = F.p3198;
y_use = F.yu; return;
}
if ((!(((*(yR125 *)y_deref(F.v7475))).f_kind == v876))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3194))).f_line, ((*(yR105 *)y_deref(F.p3194))).f_name, y_str(" is not a routine", 17));
}
if ((((*(yR125 *)y_deref(F.v7475))).f_alt == ((void *)0))) {
yr3099_CompileArgs(((*(yR105 *)y_deref(F.p3194))).f_a, F.v7475, &F.v7479, &F.v7481);
F.v7477 = F.v7475;
} else {
yr3099_CompileArgs(((*(yR105 *)y_deref(F.p3194))).f_a, ((void *)0), &F.v7479, &F.v7481);
F.v7477 = yr3085_Choose(F.v7475, F.v7479, F.v7481);
if ((F.v7477 == ((void *)0))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3194))).f_line, ((*(yR105 *)y_deref(F.p3194))).f_name, y_str(": no definition takes actuals of these types", 44));
}
}
if ((!(((*(yR125 *)y_deref(yr2388_Real(F.v7477)))).f_mval == INT64_C(0)))) {
yr3156_Directive(yr2388_Real(F.v7477), F.p3194, F.v7479, F.v7481, &F.p3197, &F.p3198);
(*F.p3197_o) = F.p3197;
(*F.p3198_o) = F.p3198;
y_use = F.yu; return;
}
yr3149_NoteCall(F.v7477, ((*(yR105 *)y_deref(F.p3194))).f_line);
F.p3197 = yr3123_CallCode(F.v7477, F.v7479, F.v7481, ((*(yR105 *)y_deref(F.p3194))).f_line);
F.p3198 = ((*(yR125 *)y_deref(F.v7477))).f_ret;
if ((F.p3196 && ((!(((*(yR110 *)y_deref(F.p3198))).f_kind == v852))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3194))).f_line, ((*(yR105 *)y_deref(F.p3194))).f_name, y_str(" returns a value: it is called in an expression (IX.A.2)", 56));
}
if (((!F.p3196) && ((((*(yR110 *)y_deref(F.p3198))).f_kind == v852)))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3194))).f_line, ((*(yR105 *)y_deref(F.p3194))).f_name, y_str(" returns no value", 17));
}
(*F.p3197_o) = F.p3197;
(*F.p3198_o) = F.p3198;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3203_Denote(void * a_p3204, void * a_p3205, rt_int * a_p3206, void * * a_p3207) {
struct yf3208 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3204 = a_p3204;
F.p3205 = a_p3205;
F.p3206_o = a_p3206;
F.p3207_o = a_p3207;
F.v7494 = ((*(yR105 *)y_deref(F.p3205))).f_a;
F.v7514 = INT64_C(0);
F.v7521 = 1;
F.p3207 = F.p3204;
if (((*(yR110 *)y_deref(F.p3204))).f_abstract) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3205))).f_line, ((*(yR110 *)y_deref(F.p3204))).f_tname, y_str(" has no representation to denote a value of", 43));
}
if ((((*(yR110 *)y_deref(F.p3204))).f_kind == v825)) {
if (((*(yR110 *)y_deref(F.p3204))).f_opaque) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3205))).f_line, ((*(yR110 *)y_deref(F.p3204))).f_tname, y_str(" is opaque here (X.B.3)", 23));
}
yr1026_SB();
yr1037_SA(y_str("((", 2));
yr1044_ST(((*(yR110 *)y_deref(F.p3204))).f_cname);
yr1037_SA(y_str("){ ", 3));
F.v7500 = yr1056_SE();
F.v7496 = ((*(yR110 *)y_deref(F.p3204))).f_fields;
while ((!(F.v7496 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR115 *)y_deref(F.v7496))).f_variant == INT64_C(0))) || ((((*(yR115 *)y_deref(F.v7496))).f_variant == F.v7514)))) {
if ((F.v7494 == ((void *)0))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3205))).f_line, y_str("too few components in this record value", 39));
}
yr2973_Expr(F.v7494, ((*(yR115 *)y_deref(F.v7496))).f_rep, &F.v7498, &F.v7504);
yr2489_CheckType(((*(yR105 *)y_deref(F.v7494))).f_line, ((*(yR115 *)y_deref(F.v7496))).f_rep, F.v7504);
if ((F.v7496 == ((*(yR110 *)y_deref(F.p3204))).f_selector)) {
yr2825_Manifest(F.v7494, &F.v7512, &F.v7517);
if ((!F.v7512)) {
yr1178_FailS(((*(yR105 *)y_deref(F.v7494))).f_line, y_str("the case-selection value is a manifest constant", 47));
}
F.v7514 = yr3212_VariantOf(F.p3204, F.v7517, ((*(yR105 *)y_deref(F.v7494))).f_line);
}
yr1026_SB();
yr1044_ST(F.v7500);
if ((!F.v7521)) {
yr1037_SA(y_str(", ", 2));
}
F.v7521 = 0;
yr1037_SA(y_str(".f_", 3));
yr1044_ST(((*(yR115 *)y_deref(F.v7496))).f_name);
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2906_Convert(F.v7498, ((*(yR115 *)y_deref(F.v7496))).f_rep, F.v7504));
F.v7500 = yr1056_SE();
F.v7494 = ((*(yR105 *)y_deref(F.v7494))).f_next;
}
F.v7496 = ((*(yR115 *)y_deref(F.v7496))).f_next;
}
if ((!(F.v7494 == ((void *)0)))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3205))).f_line, y_str("too many components in this record value", 40));
}
yr1026_SB();
yr1044_ST(F.v7500);
yr1037_SA(y_str(" })", 3));
F.p3206 = yr1056_SE();
(*F.p3206_o) = F.p3206;
(*F.p3207_o) = F.p3207;
y_use = F.yu; return;
}
if ((((*(yR110 *)y_deref(F.p3204))).f_kind == v822)) {
F.v7506 = yr1954_Count(F.v7494);
F.v7500 = yr1200_Fresh(y_str("da", 2));
if ((F.v7506 == INT64_C(1))) {
yr2973_Expr(F.v7494, ((*(yR110 *)y_deref(F.p3204))).f_elem, &F.v7498, &F.v7504);
yr2489_CheckType(((*(yR105 *)y_deref(F.v7494))).f_line, ((*(yR110 *)y_deref(F.p3204))).f_elem, F.v7504);
F.v7502 = yr1200_Fresh(y_str("dv", 2));
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(yr2456_CType(((*(yR110 *)y_deref(F.p3204))).f_elem));
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.v7502);
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2906_Convert(F.v7498, ((*(yR110 *)y_deref(F.p3204))).f_elem, F.v7504));
yr1037_SA(y_str("; y_fill(", 9));
yr1044_ST(yr2462_DescOf(F.p3204));
yr1037_SA(y_str(", &", 3));
yr1044_ST(F.v7502);
yr1037_SA(y_str("); })", 5));
F.p3206 = yr1056_SE();
(*F.p3206_o) = F.p3206;
(*F.p3207_o) = F.p3207;
y_use = F.yu; return;
}
yr1026_SB();
yr1037_SA(y_str("({ yarr ", 8));
yr1044_ST(F.v7500);
yr1037_SA(y_str("; y_init(", 9));
yr1044_ST(yr2462_DescOf(F.p3204));
yr1037_SA(y_str(", &", 3));
yr1044_ST(F.v7500);
yr1037_SA(y_str("); if (y_count(", 15));
yr1044_ST(F.v7500);
yr1037_SA(y_str(", ", 2));
yr1050_SI(((*(yR110 *)y_deref(F.p3204))).f_nidx);
yr1037_SA(y_str(") != ", 5));
yr1050_SI(F.v7506);
yr1037_SA(y_str(") rt_raise_msg(RT_X_RANGE, ", 27));
yr1031_SC(34);
yr1037_SA(y_str("wrong number of components", 26));
yr1031_SC(34);
yr1037_SA(y_str(");", 2));
F.p3206 = yr1056_SE();
F.v7510 = INT64_C(0);
while ((!(F.v7494 == ((void *)0)))) {
Y_TICK();
yr2973_Expr(F.v7494, ((*(yR110 *)y_deref(F.p3204))).f_elem, &F.v7498, &F.v7504);
yr2489_CheckType(((*(yR105 *)y_deref(F.v7494))).f_line, ((*(yR110 *)y_deref(F.p3204))).f_elem, F.v7504);
yr1026_SB();
yr1044_ST(F.p3206);
if (yr2431_Deep(((*(yR110 *)y_deref(F.p3204))).f_elem)) {
yr1037_SA(y_str(" { ", 3));
yr1044_ST(yr2456_CType(((*(yR110 *)y_deref(F.p3204))).f_elem));
yr1037_SA(y_str(" dv = ", 6));
yr1044_ST(F.v7498);
yr1037_SA(y_str("; y_copy(", 9));
yr1044_ST(yr2462_DescOf(((*(yR110 *)y_deref(F.p3204))).f_elem));
yr1037_SA(y_str(", &((", 5));
yr1044_ST(yr2456_CType(((*(yR110 *)y_deref(F.p3204))).f_elem));
yr1037_SA(y_str(" *)", 3));
yr1044_ST(F.v7500);
yr1037_SA(y_str(".p)[", 4));
yr1050_SI(F.v7510);
yr1037_SA(y_str("], &dv); }", 10));
} else {
yr1037_SA(y_str(" ((", 3));
yr1044_ST(yr2456_CType(((*(yR110 *)y_deref(F.p3204))).f_elem));
yr1037_SA(y_str(" *)", 3));
yr1044_ST(F.v7500);
yr1037_SA(y_str(".p)[", 4));
yr1050_SI(F.v7510);
yr1037_SA(y_str("] = ", 4));
yr1044_ST(yr2906_Convert(F.v7498, ((*(yR110 *)y_deref(F.p3204))).f_elem, F.v7504));
yr1037_SA(y_str(";", 1));
}
F.p3206 = yr1056_SE();
F.v7510 = y_range(y_add(F.v7510, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v7494 = ((*(yR105 *)y_deref(F.v7494))).f_next;
}
yr1026_SB();
yr1044_ST(F.p3206);
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.v7500);
yr1037_SA(y_str("; })", 4));
F.p3206 = yr1056_SE();
(*F.p3206_o) = F.p3206;
(*F.p3207_o) = F.p3207;
y_use = F.yu; return;
}
if ((((*(yR110 *)y_deref(F.p3204))).f_kind == v834)) {
yr1026_SB();
yr1037_SA(y_str("y_set_new(", 10));
yr1044_ST(yr2537_LoText(((*(yR110 *)y_deref(F.p3204))).f_elem));
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2543_HiText(((*(yR110 *)y_deref(F.p3204))).f_elem));
yr1037_SA(y_str(")", 1));
F.p3206 = yr1056_SE();
while ((!(F.v7494 == ((void *)0)))) {
Y_TICK();
yr2973_Expr(F.v7494, ((*(yR110 *)y_deref(F.p3204))).f_elem, &F.v7498, &F.v7504);
yr2489_CheckType(((*(yR105 *)y_deref(F.v7494))).f_line, ((*(yR110 *)y_deref(F.p3204))).f_elem, F.v7504);
F.p3206 = yr3029_Call2(y_str("y_set_add", 9), F.p3206, F.v7498);
F.v7494 = ((*(yR105 *)y_deref(F.v7494))).f_next;
}
(*F.p3206_o) = F.p3206;
(*F.p3207_o) = F.p3207;
y_use = F.yu; return;
}
yr1186_FailN(((*(yR105 *)y_deref(F.p3205))).f_line, ((*(yR110 *)y_deref(F.p3204))).f_tname, y_str(" has no denotations of values", 29));
(*F.p3206_o) = F.p3206;
(*F.p3207_o) = F.p3207;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3212_VariantOf(void * a_p3213, rt_int a_p3214, rt_int a_p3215) {
struct yf3216 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3213 = a_p3213;
F.p3214 = a_p3214;
F.p3215 = a_p3215;
F.v7583 = ((*(yR110 *)y_deref(F.p3213))).f_fields;
while ((!(F.v7583 == ((void *)0)))) {
Y_TICK();
if ((!(((*(yR115 *)y_deref(F.v7583))).f_variant == INT64_C(0)))) {
F.v7585 = ((*(yR115 *)y_deref(F.v7583))).f_labels;
while ((!(F.v7585 == ((void *)0)))) {
Y_TICK();
yr2825_Manifest(F.v7585, &F.v7587, &F.v7589);
if ((F.v7587 && ((F.v7589 == F.p3214)))) {
{ rt_int rv7591 = ((*(yR115 *)y_deref(F.v7583))).f_variant;
y_use = F.yu; return rv7591; }
}
F.v7585 = ((*(yR105 *)y_deref(F.v7585))).f_next;
}
}
F.v7583 = ((*(yR115 *)y_deref(F.v7583))).f_next;
}
{ rt_int rv7593 = INT64_C(-1);
y_use = F.yu; return rv7593; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3220_Emit2(yarr a_p3222, rt_int a_p3223) {
struct yf3224 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3222 = a_p3222;
F.p3223 = a_p3223;
yr1026_SB();
yr1037_SA(F.p3222);
yr1044_ST(F.p3223);
F.v7598 = yr1056_SE();
yr1132_Emit(F.v7598);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3228_Emit3(yarr a_p3230, rt_int a_p3231, yarr a_p3233) {
struct yf3234 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3230 = a_p3230;
F.p3231 = a_p3231;
F.p3233 = a_p3233;
yr1026_SB();
yr1037_SA(F.p3230);
yr1044_ST(F.p3231);
yr1037_SA(F.p3233);
F.v7604 = yr1056_SE();
yr1132_Emit(F.v7604);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3238_PopTo(rt_int a_p3239) {
struct yf3240 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3239 = a_p3239;
if ((v1550 > F.p3239)) {
yr3228_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v1548).p)[y_ix1(v1548, y_add(F.p3239, INT64_C(1)))], y_str(".prev;", 6));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3244_LeaveBlock(void) {
struct yf3245 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((v1578 > INT64_C(0))) {
if ((!(((rt_int *)(v1565).p)[y_ix1(v1565, v1578)] == INT64_C(0)))) {
yr3228_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v1565).p)[y_ix1(v1565, v1578)], y_str(".prev;", 6));
}
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3249_RaiseCode(rt_int a_p3250) {
struct yf3251 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3250 = a_p3250;
yr1026_SB();
yr1037_SA(y_str("rt_raise(rt_exc(", 16));
yr1031_SC(34);
yr1044_ST(F.p3250);
yr1031_SC(34);
yr1037_SA(y_str("));", 3));
{ rt_int rv7622 = yr1056_SE();
y_use = F.yu; return rv7622; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3255_BlockStatements(void * a_p3256) {
struct yf3257 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3256 = a_p3256;
F.v7626 = v1660;
yr3261_BlockStatements1(F.p3256);
v1660 = F.v7626;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3261_BlockStatements1(void * a_p3262) {
struct yf3263 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3262 = a_p3262;
F.v7642 = ((*(yR105 *)y_deref(F.p3262))).f_a;
F.v7644 = INT64_C(0);
while ((!(F.v7642 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR105 *)y_deref(F.v7642))).f_kind == v645)) && ((F.v7644 == INT64_C(0))))) {
F.v7644 = yr1200_Fresh(y_str("xs", 2));
yr3228_Emit3(y_str("rt_frame *", 10), F.v7644, y_str(" = rt_xtop;", 11));
}
F.v7642 = ((*(yR105 *)y_deref(F.v7642))).f_next;
}
if ((((*(yR105 *)y_deref(F.p3262))).f_b == ((void *)0))) {
v1578 = y_range(y_add(v1578, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1565).p)[y_ix1(v1565, v1578)] = INT64_C(0);
((rt_int *)(v1576).p)[y_ix1(v1576, v1578)] = F.v7644;
yr3314_Statements(((*(yR105 *)y_deref(F.p3262))).f_c);
v1578 = y_range(y_sub(v1578, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr3382_CheckLabels(((*(yR105 *)y_deref(F.p3262))).f_a);
y_use = F.yu; return;
}
v1654 = 1;
F.v7630 = yr1200_Fresh(y_str("xf", 2));
yr3228_Emit3(y_str("{ rt_frame ", 11), F.v7630, y_str(";", 1));
yr3228_Emit3(y_str("if (RT_TRY(", 11), F.v7630, y_str(")) {", 4));
v1550 = y_range(y_add(v1550, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1548).p)[y_ix1(v1548, v1550)] = F.v7630;
v1578 = y_range(y_add(v1578, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1565).p)[y_ix1(v1565, v1578)] = F.v7630;
((rt_int *)(v1576).p)[y_ix1(v1576, v1578)] = F.v7644;
yr3314_Statements(((*(yR105 *)y_deref(F.p3262))).f_c);
v1578 = y_range(y_sub(v1578, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1550 = y_range(y_sub(v1550, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr3382_CheckLabels(((*(yR105 *)y_deref(F.p3262))).f_a);
yr3228_Emit3(y_str("RT_POP(", 7), F.v7630, y_str(");", 2));
yr1138_EmitS(y_str("} else {", 8));
yr3228_Emit3(y_str("RT_POP(", 7), F.v7630, y_str(");", 2));
if ((v1279 > INT64_C(0))) {
yr1138_EmitS(y_str("y_use = F.yu + (rt_int)((sizeof F + 7) / 8);", 44));
} else {
yr1138_EmitS(y_str("y_use = 0;", 10));
}
F.v7632 = yr1200_Fresh(y_str("xc", 2));
yr3228_Emit3(y_str("int ", 4), F.v7632, y_str(" = rt_xcur;", 11));
v1578 = y_range(y_add(v1578, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1565).p)[y_ix1(v1565, v1578)] = INT64_C(0);
((rt_int *)(v1576).p)[y_ix1(v1576, v1578)] = INT64_C(0);
v1592 = y_range(y_add(v1592, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1590).p)[y_ix1(v1590, v1592)] = F.v7632;
F.v7640 = 1;
F.v7636 = ((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p3262))).f_b))).f_a;
while ((!(F.v7636 == ((void *)0)))) {
Y_TICK();
yr1026_SB();
if (F.v7640) {
yr1037_SA(y_str("if (", 4));
} else {
yr1037_SA(y_str("} else if (", 11));
}
F.v7640 = 0;
F.v7638 = ((*(yR105 *)y_deref(F.v7636))).f_a;
while ((!(F.v7638 == ((void *)0)))) {
Y_TICK();
yr1044_ST(F.v7632);
yr1037_SA(y_str(" == rt_exc(", 11));
yr1031_SC(34);
yr1044_ST(((*(yR105 *)y_deref(F.v7638))).f_name);
yr1031_SC(34);
yr1037_SA(y_str(")", 1));
if ((!(((*(yR105 *)y_deref(F.v7638))).f_next == ((void *)0)))) {
yr1037_SA(y_str(" || ", 4));
}
F.v7638 = ((*(yR105 *)y_deref(F.v7638))).f_next;
}
yr1037_SA(y_str(") {", 3));
F.v7634 = yr1056_SE();
yr1132_Emit(F.v7634);
yr3314_Statements(((*(yR105 *)y_deref(F.v7636))).f_b);
F.v7636 = ((*(yR105 *)y_deref(F.v7636))).f_next;
}
if ((!F.v7640)) {
yr1138_EmitS(y_str("} else {", 8));
}
if ((((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p3262))).f_b))).f_flag == INT64_C(1))) {
yr3314_Statements(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p3262))).f_b))).f_b);
} else {
yr3228_Emit3(y_str("rt_raise(", 9), F.v7632, y_str(");", 2));
}
if ((!F.v7640)) {
yr1138_EmitS(y_str("}", 1));
}
v1592 = y_range(y_sub(v1592, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
v1578 = y_range(y_sub(v1578, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1138_EmitS(y_str("}}", 2));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3267_SameDesig(void * a_p3268, void * a_p3269) {
struct yf3270 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3268 = a_p3268;
F.p3269 = a_p3269;
if ((((*(yR105 *)y_deref(F.p3268))).f_kind == v801)) {
{ rt_int rv7721 = yr3267_SameDesig(((*(yR105 *)y_deref(F.p3268))).f_a, F.p3269);
y_use = F.yu; return rv7721; }
}
if ((((*(yR105 *)y_deref(F.p3269))).f_kind == v801)) {
{ rt_int rv7722 = yr3267_SameDesig(F.p3268, ((*(yR105 *)y_deref(F.p3269))).f_a);
y_use = F.yu; return rv7722; }
}
if ((!(((*(yR105 *)y_deref(F.p3268))).f_kind == ((*(yR105 *)y_deref(F.p3269))).f_kind))) {
{ rt_int rv7724 = 0;
y_use = F.yu; return rv7724; }
}
if ((((*(yR105 *)y_deref(F.p3268))).f_kind == v777)) {
{ rt_int rv7725 = ((((((*(yR105 *)y_deref(F.p3268))).f_name == ((*(yR105 *)y_deref(F.p3269))).f_name)) && ((((*(yR105 *)y_deref(F.p3268))).f_d == ((void *)0)))) && ((((*(yR105 *)y_deref(F.p3269))).f_d == ((void *)0))));
y_use = F.yu; return rv7725; }
}
if ((((*(yR105 *)y_deref(F.p3268))).f_kind == v783)) {
{ rt_int rv7726 = (((((*(yR105 *)y_deref(F.p3268))).f_name == ((*(yR105 *)y_deref(F.p3269))).f_name)) && yr3267_SameDesig(((*(yR105 *)y_deref(F.p3268))).f_a, ((*(yR105 *)y_deref(F.p3269))).f_a));
y_use = F.yu; return rv7726; }
}
if ((((*(yR105 *)y_deref(F.p3268))).f_kind == v789)) {
{ rt_int rv7727 = yr3267_SameDesig(((*(yR105 *)y_deref(F.p3268))).f_a, ((*(yR105 *)y_deref(F.p3269))).f_a);
y_use = F.yu; return rv7727; }
}
if ((((*(yR105 *)y_deref(F.p3268))).f_kind == v786)) {
if ((!yr3267_SameDesig(((*(yR105 *)y_deref(F.p3268))).f_a, ((*(yR105 *)y_deref(F.p3269))).f_a))) {
{ rt_int rv7729 = 0;
y_use = F.yu; return rv7729; }
}
F.v7710 = ((*(yR105 *)y_deref(F.p3268))).f_b;
F.v7712 = ((*(yR105 *)y_deref(F.p3269))).f_b;
while ((((!(F.v7710 == ((void *)0)))) && ((!(F.v7712 == ((void *)0)))))) {
Y_TICK();
yr2825_Manifest(F.v7710, &F.v7714, &F.v7718);
yr2825_Manifest(F.v7712, &F.v7716, &F.v7720);
if ((F.v7714 && F.v7716)) {
if ((!(F.v7718 == F.v7720))) {
{ rt_int rv7731 = 0;
y_use = F.yu; return rv7731; }
}
} else if ((!yr3267_SameDesig(F.v7710, F.v7712))) {
{ rt_int rv7733 = 0;
y_use = F.yu; return rv7733; }
}
F.v7710 = ((*(yR105 *)y_deref(F.v7710))).f_next;
F.v7712 = ((*(yR105 *)y_deref(F.v7712))).f_next;
}
{ rt_int rv7734 = (((F.v7710 == ((void *)0))) && ((F.v7712 == ((void *)0))));
y_use = F.yu; return rv7734; }
}
{ rt_int rv7736 = 0;
y_use = F.yu; return rv7736; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3274_CheckVariantSelected(void * a_p3275, void * a_p3276, void * a_p3277) {
struct yf3278 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3275 = a_p3275;
F.p3276 = a_p3276;
F.p3277 = a_p3277;
F.v7742 = v1640;
while ((F.v7742 > INT64_C(0))) {
Y_TICK();
F.v7744 = ((void * *)(v1636).p)[y_ix1(v1636, F.v7742)];
while ((((*(yR105 *)y_deref(F.v7744))).f_kind == v801)) {
Y_TICK();
F.v7744 = ((*(yR105 *)y_deref(F.v7744))).f_a;
}
if (((((((*(yR105 *)y_deref(F.v7744))).f_kind == v783)) && ((((*(yR105 *)y_deref(F.v7744))).f_name == ((*(yR115 *)y_deref(((*(yR110 *)y_deref(F.p3276))).f_selector))).f_name))) && yr3267_SameDesig(((*(yR105 *)y_deref(F.v7744))).f_a, ((*(yR105 *)y_deref(F.p3275))).f_a))) {
F.v7746 = ((void * *)(v1638).p)[y_ix1(v1638, F.v7742)];
if ((F.v7746 == ((void *)0))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3275))).f_line, ((*(yR105 *)y_deref(F.p3275))).f_name, y_str(" is a component of a variant: the ELSE of a SELECT does not say which variant the record has (VIII.B)", 101));
}
while ((!(F.v7746 == ((void *)0)))) {
Y_TICK();
F.v7750 = yr3326_Label(F.v7746, ((*(yR115 *)y_deref(((*(yR110 *)y_deref(F.p3276))).f_selector))).f_rep);
F.v7756 = 0;
F.v7748 = ((*(yR115 *)y_deref(F.p3277))).f_labels;
while ((!(F.v7748 == ((void *)0)))) {
Y_TICK();
yr2825_Manifest(F.v7748, &F.v7754, &F.v7752);
if ((F.v7754 && ((F.v7752 == F.v7750)))) {
F.v7756 = 1;
}
F.v7748 = ((*(yR105 *)y_deref(F.v7748))).f_next;
}
if ((!F.v7756)) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3275))).f_line, ((*(yR105 *)y_deref(F.p3275))).f_name, y_str(" is not a component of the variant this CASE selects (VIII.B)", 61));
}
F.v7746 = ((*(yR105 *)y_deref(F.v7746))).f_next;
}
y_use = F.yu; return;
}
F.v7742 = y_range(y_sub(F.v7742, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
yr1186_FailN(((*(yR105 *)y_deref(F.p3275))).f_line, ((*(yR105 *)y_deref(F.p3275))).f_name, y_str(" is a component of a variant: it is used inside a SELECT on the case-selection component (VIII.B)", 97));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3282_CheckCaseLabels(void * a_p3283, void * a_p3284) {
struct yf3285 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3283 = a_p3283;
F.p3284 = a_p3284;
F.v7769 = ((*(yR105 *)y_deref(F.p3283))).f_b;
F.v7771 = ((*(yR105 *)y_deref(F.p3283))).f_b;
F.v7773 = INT64_C(0);
F.v7776 = INT64_C(0);
while ((!(F.v7769 == ((void *)0)))) {
Y_TICK();
F.v7771 = ((*(yR105 *)y_deref(F.v7769))).f_a;
while ((!(F.v7771 == ((void *)0)))) {
Y_TICK();
F.v7776 = yr3326_Label(F.v7771, F.p3284);
F.lo7781 = INT64_C(1);
F.hi7782 = F.v7773;
{ rt_int hi7786 = F.hi7782;
for (rt_int i7785 = F.lo7781; i7785 <= hi7786; i7785++) { F.c_7784 = i7785; Y_TICK();
if ((((rt_int *)(v1652).p)[y_ix1(v1652, F.c_7784)] == F.v7776)) {
yr1178_FailS(((*(yR105 *)y_deref(F.v7771))).f_line, y_str("a CASE label appears twice in this SELECT (IX.B.1)", 50));
}
if (i7785 == hi7786) break;
}}
if ((F.v7773 < INT64_C(4096))) {
F.v7773 = y_range(y_add(F.v7773, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1652).p)[y_ix1(v1652, F.v7773)] = F.v7776;
}
F.v7771 = ((*(yR105 *)y_deref(F.v7771))).f_next;
}
F.v7769 = ((*(yR105 *)y_deref(F.v7769))).f_next;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3289_Falls(void * a_p3290) {
struct yf3291 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3290 = a_p3290;
F.v7794 = F.p3290;
F.v7796 = 1;
while ((!(F.v7794 == ((void *)0)))) {
Y_TICK();
if ((!(((*(yR105 *)y_deref(F.v7794))).f_text == INT64_C(0)))) {
F.v7796 = 1;
}
if (F.v7796) {
F.v7796 = yr3301_Completes(F.v7794);
}
F.v7794 = ((*(yR105 *)y_deref(F.v7794))).f_next;
}
{ rt_int rv7800 = F.v7796;
y_use = F.yu; return rv7800; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3295_BlockFalls(void * a_p3296) {
struct yf3297 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3296 = a_p3296;
if (yr3289_Falls(((*(yR105 *)y_deref(F.p3296))).f_c)) {
{ rt_int rv7806 = 1;
y_use = F.yu; return rv7806; }
}
if ((((*(yR105 *)y_deref(F.p3296))).f_b == ((void *)0))) {
{ rt_int rv7808 = 0;
y_use = F.yu; return rv7808; }
}
F.v7804 = ((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p3296))).f_b))).f_a;
while ((!(F.v7804 == ((void *)0)))) {
Y_TICK();
if (yr3289_Falls(((*(yR105 *)y_deref(F.v7804))).f_b)) {
{ rt_int rv7810 = 1;
y_use = F.yu; return rv7810; }
}
F.v7804 = ((*(yR105 *)y_deref(F.v7804))).f_next;
}
if ((((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p3296))).f_b))).f_flag == INT64_C(1))) {
{ rt_int rv7812 = yr3289_Falls(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p3296))).f_b))).f_b);
y_use = F.yu; return rv7812; }
}
{ rt_int rv7814 = 0;
y_use = F.yu; return rv7814; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3301_Completes(void * a_p3302) {
struct yf3303 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3302 = a_p3302;
F.v7818 = ((*(yR105 *)y_deref(F.p3302))).f_kind;
if (((((((F.v7818 == v729)) || ((F.v7818 == v732))) || ((F.v7818 == v735))) || ((F.v7818 == v723))) || ((F.v7818 == v726)))) {
{ rt_int rv7826 = 0;
y_use = F.yu; return rv7826; }
}
if ((F.v7818 == v738)) {
if ((!(((*(yR105 *)y_deref(F.p3302))).f_flag == INT64_C(1)))) {
{ rt_int rv7829 = 1;
y_use = F.yu; return rv7829; }
}
F.v7820 = ((*(yR105 *)y_deref(F.p3302))).f_a;
while ((!(F.v7820 == ((void *)0)))) {
Y_TICK();
if (yr3289_Falls(((*(yR105 *)y_deref(F.v7820))).f_b)) {
{ rt_int rv7831 = 1;
y_use = F.yu; return rv7831; }
}
F.v7820 = ((*(yR105 *)y_deref(F.v7820))).f_next;
}
{ rt_int rv7832 = yr3289_Falls(((*(yR105 *)y_deref(F.p3302))).f_b);
y_use = F.yu; return rv7832; }
}
if ((F.v7818 == v741)) {
if ((!(((*(yR105 *)y_deref(F.p3302))).f_flag == INT64_C(1)))) {
{ rt_int rv7835 = 1;
y_use = F.yu; return rv7835; }
}
F.v7820 = ((*(yR105 *)y_deref(F.p3302))).f_b;
while ((!(F.v7820 == ((void *)0)))) {
Y_TICK();
if (yr3289_Falls(((*(yR105 *)y_deref(F.v7820))).f_b)) {
{ rt_int rv7837 = 1;
y_use = F.yu; return rv7837; }
}
F.v7820 = ((*(yR105 *)y_deref(F.v7820))).f_next;
}
{ rt_int rv7838 = yr3289_Falls(((*(yR105 *)y_deref(F.p3302))).f_c);
y_use = F.yu; return rv7838; }
}
if ((F.v7818 == v744)) {
yr2825_Manifest(((*(yR105 *)y_deref(F.p3302))).f_a, &F.v7822, &F.v7824);
{ rt_int rv7840 = (!((F.v7822 && ((F.v7824 == INT64_C(1))))));
y_use = F.yu; return rv7840; }
}
if ((F.v7818 == v750)) {
{ rt_int rv7841 = yr3307_Exits(((*(yR105 *)y_deref(F.p3302))).f_b, ((*(yR105 *)y_deref(F.p3302))).f_name);
y_use = F.yu; return rv7841; }
}
if ((F.v7818 == v753)) {
{ rt_int rv7842 = yr3295_BlockFalls(((*(yR105 *)y_deref(F.p3302))).f_a);
y_use = F.yu; return rv7842; }
}
{ rt_int rv7844 = 1;
y_use = F.yu; return rv7844; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3307_Exits(void * a_p3308, rt_int a_p3309) {
struct yf3310 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3308 = a_p3308;
F.p3309 = a_p3309;
F.v7849 = F.p3308;
while ((!(F.v7849 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR105 *)y_deref(F.v7849))).f_kind == v726)) && ((((*(yR105 *)y_deref(F.v7849))).f_name == F.p3309)))) {
{ rt_int rv7853 = 1;
y_use = F.yu; return rv7853; }
}
if ((((*(yR105 *)y_deref(F.v7849))).f_kind == v738)) {
F.v7851 = ((*(yR105 *)y_deref(F.v7849))).f_a;
while ((!(F.v7851 == ((void *)0)))) {
Y_TICK();
if (yr3307_Exits(((*(yR105 *)y_deref(F.v7851))).f_b, F.p3309)) {
{ rt_int rv7855 = 1;
y_use = F.yu; return rv7855; }
}
F.v7851 = ((*(yR105 *)y_deref(F.v7851))).f_next;
}
if (yr3307_Exits(((*(yR105 *)y_deref(F.v7849))).f_b, F.p3309)) {
{ rt_int rv7857 = 1;
y_use = F.yu; return rv7857; }
}
} else if ((((*(yR105 *)y_deref(F.v7849))).f_kind == v741)) {
F.v7851 = ((*(yR105 *)y_deref(F.v7849))).f_b;
while ((!(F.v7851 == ((void *)0)))) {
Y_TICK();
if (yr3307_Exits(((*(yR105 *)y_deref(F.v7851))).f_b, F.p3309)) {
{ rt_int rv7859 = 1;
y_use = F.yu; return rv7859; }
}
F.v7851 = ((*(yR105 *)y_deref(F.v7851))).f_next;
}
if (yr3307_Exits(((*(yR105 *)y_deref(F.v7849))).f_c, F.p3309)) {
{ rt_int rv7861 = 1;
y_use = F.yu; return rv7861; }
}
} else if (((((((*(yR105 *)y_deref(F.v7849))).f_kind == v744)) || ((((*(yR105 *)y_deref(F.v7849))).f_kind == v747))) || ((((*(yR105 *)y_deref(F.v7849))).f_kind == v750)))) {
if (yr3307_Exits(((*(yR105 *)y_deref(F.v7849))).f_b, F.p3309)) {
{ rt_int rv7863 = 1;
y_use = F.yu; return rv7863; }
}
} else if ((((*(yR105 *)y_deref(F.v7849))).f_kind == v753)) {
if (yr3307_Exits(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.v7849))).f_a))).f_c, F.p3309)) {
{ rt_int rv7865 = 1;
y_use = F.yu; return rv7865; }
}
if ((!(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.v7849))).f_a))).f_b == ((void *)0)))) {
F.v7851 = ((*(yR105 *)y_deref(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.v7849))).f_a))).f_b))).f_a;
while ((!(F.v7851 == ((void *)0)))) {
Y_TICK();
if (yr3307_Exits(((*(yR105 *)y_deref(F.v7851))).f_b, F.p3309)) {
{ rt_int rv7867 = 1;
y_use = F.yu; return rv7867; }
}
F.v7851 = ((*(yR105 *)y_deref(F.v7851))).f_next;
}
if (yr3307_Exits(((*(yR105 *)y_deref(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.v7849))).f_a))).f_b))).f_b, F.p3309)) {
{ rt_int rv7869 = 1;
y_use = F.yu; return rv7869; }
}
}
}
F.v7849 = ((*(yR105 *)y_deref(F.v7849))).f_next;
}
{ rt_int rv7871 = 0;
y_use = F.yu; return rv7871; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3314_Statements(void * a_p3315) {
struct yf3316 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3315 = a_p3315;
F.v7875 = F.p3315;
while ((!(F.v7875 == ((void *)0)))) {
Y_TICK();
yr3338_Statement(F.v7875);
F.v7875 = ((*(yR105 *)y_deref(F.v7875))).f_next;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3320_Cond(void * a_p3321) {
struct yf3322 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3321 = a_p3321;
yr2973_Expr(F.p3321, v1344, &F.v7879, &F.v7881);
yr2489_CheckType(((*(yR105 *)y_deref(F.p3321))).f_line, v1344, F.v7881);
{ rt_int rv7882 = F.v7879;
y_use = F.yu; return rv7882; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3326_Label(void * a_p3327, void * a_p3328) {
struct yf3329 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3327 = a_p3327;
F.p3328 = a_p3328;
if (((((((*(yR105 *)y_deref(F.p3327))).f_kind == v777)) && ((((*(yR105 *)y_deref(F.p3327))).f_d == ((void *)0)))) && ((((*(yR110 *)y_deref(F.p3328))).f_kind == v816)))) {
F.v7891 = yr2348_FindLit(((*(yR105 *)y_deref(F.p3327))).f_name, F.p3328);
if ((!(F.v7891 == ((void *)0)))) {
{ rt_int rv7896 = ((*(yR125 *)y_deref(yr2388_Real(F.v7891)))).f_mval;
y_use = F.yu; return rv7896; }
}
}
yr2973_Expr(F.p3327, F.p3328, &F.v7895, &F.v7893);
yr2489_CheckType(((*(yR105 *)y_deref(F.p3327))).f_line, F.p3328, F.v7893);
yr2825_Manifest(F.p3327, &F.v7887, &F.v7889);
if ((!F.v7887)) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3327))).f_line, y_str("a CASE label is a manifest constant (IX.B.1)", 44));
}
{ rt_int rv7898 = F.v7889;
y_use = F.yu; return rv7898; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3333_CopyOut(void) {
struct yf3334 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((v1625 == ((void *)0))) {
y_use = F.yu; return;
}
F.v7901 = ((*(yR125 *)y_deref(v1625))).f_params;
while ((!(F.v7901 == ((void *)0)))) {
Y_TICK();
if ((((*(yR120 *)y_deref(F.v7901))).f_cls == v900)) {
yr1026_SB();
yr1037_SA(y_str("(*F.", 4));
yr1044_ST(((*(yR120 *)y_deref(F.v7901))).f_cname);
yr1037_SA(y_str("_o)", 3));
F.v7903 = yr1056_SE();
if ((!(((*(yR120 *)y_deref(F.v7901))).f_path == INT64_C(0)))) {
yr3183_Assign(F.v7903, ((*(yR120 *)y_deref(F.v7901))).f_rep, ((*(yR120 *)y_deref(F.v7901))).f_path, ((*(yR120 *)y_deref(F.v7901))).f_rep, INT64_C(0));
} else {
yr3183_Assign(F.v7903, ((*(yR120 *)y_deref(F.v7901))).f_rep, yr2362_Path(v1279, ((*(yR120 *)y_deref(F.v7901))).f_cname), ((*(yR120 *)y_deref(F.v7901))).f_rep, INT64_C(0));
}
}
F.v7901 = ((*(yR120 *)y_deref(F.v7901))).f_next;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3338_Statement(void * a_p3339) {
struct yf3340 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3339 = a_p3339;
F.v7912 = ((*(yR105 *)y_deref(F.p3339))).f_kind;
v1000 = ((*(yR105 *)y_deref(F.p3339))).f_line;
if ((!(((*(yR105 *)y_deref(F.p3339))).f_text == INT64_C(0)))) {
yr3370_PlaceLabel(F.p3339);
}
if ((F.v7912 == v714)) {
yr2946_LValue(((*(yR105 *)y_deref(F.p3339))).f_a, &F.v7914, &F.v7926);
yr2940_CheckPure(((*(yR105 *)y_deref(F.p3339))).f_a);
yr3405_NoteWrite(((*(yR105 *)y_deref(F.p3339))).f_a);
if ((((((*(yR110 *)y_deref(F.v7926))).f_kind == v837)) || yr2444_HoldsSignal(F.v7926))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3339))).f_line, y_str("assignment is not defined for signals (VI.A.1.d)", 48));
}
if (yr2450_NonAssignable(F.v7926)) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3339))).f_line, y_str("assignment is not defined for files and semaphores, nor what holds them (VII.B)", 79));
}
yr2973_Expr(((*(yR105 *)y_deref(F.p3339))).f_b, F.v7926, &F.v7916, &F.v7928);
F.v7918 = yr3173_UserAssign(F.v7914, F.v7926, F.v7916, F.v7928, ((*(yR105 *)y_deref(F.p3339))).f_line);
if ((!(F.v7918 == INT64_C(0)))) {
yr1132_Emit(F.v7918);
} else {
if ((((*(yR110 *)y_deref(F.v7926))).f_opaque && (((y_mod(((*(yR110 *)y_deref(F.v7926))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3339))).f_line, ((*(yR110 *)y_deref(F.v7926))).f_tname, y_str(" is opaque here: := is not exported (X.B.3)", 43));
}
yr2924_Store(F.v7914, F.v7926, F.v7916, F.v7928, ((*(yR105 *)y_deref(F.p3339))).f_line);
}
} else if ((F.v7912 == v717)) {
F.v7942 = yr2283_Find(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p3339))).f_a))).f_name);
if ((!(F.v7942 == ((void *)0)))) {
F.v7942 = yr2388_Real(F.v7942);
}
if ((((!(F.v7942 == ((void *)0)))) && ((((*(yR125 *)y_deref(F.v7942))).f_kind == v885)))) {
yr3714_Activate(((*(yR105 *)y_deref(F.p3339))).f_a, F.v7942);
} else {
yr3193_CallExpr(((*(yR105 *)y_deref(F.p3339))).f_a, ((void *)0), 1, &F.v7914, &F.v7926);
yr3220_Emit2(y_str("", 0), F.v7914);
yr1026_SB();
yr1044_ST(F.v7914);
yr1037_SA(y_str(";", 1));
F.v7918 = yr1056_SE();
((*(yR135 *)y_deref((v996).f_tail))).f_t = F.v7918;
}
} else if ((F.v7912 == v738)) {
F.v7934 = 1;
F.v7930 = ((*(yR105 *)y_deref(F.p3339))).f_a;
while ((!(F.v7930 == ((void *)0)))) {
Y_TICK();
F.v7914 = yr3320_Cond(((*(yR105 *)y_deref(F.v7930))).f_a);
if (F.v7934) {
yr3228_Emit3(y_str("if (", 4), F.v7914, y_str(") {", 3));
} else {
yr3228_Emit3(y_str("} else if (", 11), F.v7914, y_str(") {", 3));
}
F.v7934 = 0;
yr3314_Statements(((*(yR105 *)y_deref(F.v7930))).f_b);
F.v7930 = ((*(yR105 *)y_deref(F.v7930))).f_next;
}
if ((((*(yR105 *)y_deref(F.p3339))).f_flag == INT64_C(1))) {
yr1138_EmitS(y_str("} else {", 8));
yr3314_Statements(((*(yR105 *)y_deref(F.p3339))).f_b);
}
yr1138_EmitS(y_str("}", 1));
} else if ((F.v7912 == v744)) {
F.v7914 = yr3320_Cond(((*(yR105 *)y_deref(F.p3339))).f_a);
yr3228_Emit3(y_str("while (", 7), F.v7914, y_str(") {", 3));
yr1138_EmitS(y_str("Y_TICK();", 9));
yr3314_Statements(((*(yR105 *)y_deref(F.p3339))).f_b);
yr1138_EmitS(y_str("}", 1));
} else if ((F.v7912 == v750)) {
F.v7920 = yr1200_Fresh(y_str("yl_", 3));
v1619 = y_range(y_add(v1619, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1604).p)[y_ix1(v1604, v1619)] = ((*(yR105 *)y_deref(F.p3339))).f_name;
((rt_int *)(v1606).p)[y_ix1(v1606, v1619)] = F.v7920;
((rt_int *)(v1617).p)[y_ix1(v1617, v1619)] = v1550;
yr1138_EmitS(y_str("for (;;) {", 10));
yr1138_EmitS(y_str("Y_TICK();", 9));
yr3314_Statements(((*(yR105 *)y_deref(F.p3339))).f_b);
yr1138_EmitS(y_str("}", 1));
yr3228_Emit3(y_str("", 0), F.v7920, y_str(": ;", 3));
v1619 = y_range(y_sub(v1619, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v7912 == v726)) {
F.v7936 = 0;
F.v7938 = v1619;
while ((((F.v7938 > v1622)) && (!F.v7936))) {
Y_TICK();
if ((((rt_int *)(v1604).p)[y_ix1(v1604, F.v7938)] == ((*(yR105 *)y_deref(F.p3339))).f_name)) {
F.v7936 = 1;
yr3238_PopTo(((rt_int *)(v1617).p)[y_ix1(v1617, F.v7938)]);
yr3228_Emit3(y_str("goto ", 5), ((rt_int *)(v1606).p)[y_ix1(v1606, F.v7938)], y_str(";", 1));
}
F.v7938 = y_range(y_sub(F.v7938, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((!F.v7936)) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3339))).f_line, ((*(yR105 *)y_deref(F.p3339))).f_name, y_str(": EXIT names no LOOP around it here (IX.A.5)", 44));
}
} else if ((F.v7912 == v747)) {
yr3344_ForStatement(F.p3339);
} else if ((F.v7912 == v741)) {
yr2973_Expr(((*(yR105 *)y_deref(F.p3339))).f_a, ((void *)0), &F.v7914, &F.v7926);
if ((!yr2407_IsDiscrete(F.v7926))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3339))).f_line, y_str("SELECT on a value that is not integer or scalar", 47));
}
yr3282_CheckCaseLabels(F.p3339, F.v7926);
yr3228_Emit3(y_str("switch (", 8), F.v7914, y_str(") {", 3));
F.v7930 = ((*(yR105 *)y_deref(F.p3339))).f_b;
while ((!(F.v7930 == ((void *)0)))) {
Y_TICK();
F.v7932 = ((*(yR105 *)y_deref(F.v7930))).f_a;
while ((!(F.v7932 == ((void *)0)))) {
Y_TICK();
F.v7940 = yr3326_Label(F.v7932, F.v7926);
yr1026_SB();
yr1037_SA(y_str("case ", 5));
yr1050_SI(F.v7940);
yr1037_SA(y_str(":", 1));
F.v7918 = yr1056_SE();
yr1132_Emit(F.v7918);
F.v7932 = ((*(yR105 *)y_deref(F.v7932))).f_next;
}
yr1138_EmitS(y_str("{", 1));
v1640 = y_range(y_add(v1640, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1636).p)[y_ix1(v1636, v1640)] = ((*(yR105 *)y_deref(F.p3339))).f_a;
((void * *)(v1638).p)[y_ix1(v1638, v1640)] = ((*(yR105 *)y_deref(F.v7930))).f_a;
yr3314_Statements(((*(yR105 *)y_deref(F.v7930))).f_b);
v1640 = y_range(y_sub(v1640, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1138_EmitS(y_str("} break;", 8));
F.v7930 = ((*(yR105 *)y_deref(F.v7930))).f_next;
}
yr1138_EmitS(y_str("default: {", 10));
v1640 = y_range(y_add(v1640, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1636).p)[y_ix1(v1636, v1640)] = ((*(yR105 *)y_deref(F.p3339))).f_a;
((void * *)(v1638).p)[y_ix1(v1638, v1640)] = ((void *)0);
if ((((*(yR105 *)y_deref(F.p3339))).f_flag == INT64_C(1))) {
yr3314_Statements(((*(yR105 *)y_deref(F.p3339))).f_c);
}
v1640 = y_range(y_sub(v1640, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1138_EmitS(y_str("} break;", 8));
yr1138_EmitS(y_str("}", 1));
} else if ((F.v7912 == v729)) {
yr3358_ReturnStatement(F.p3339);
} else if ((F.v7912 == v735)) {
if ((((*(yR105 *)y_deref(F.p3339))).f_name == INT64_C(0))) {
if ((v1592 == INT64_C(0))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3339))).f_line, y_str("PROPAGATE_EXCEPTION without a name is used in a handler (IX.A.8)", 64));
}
yr3228_Emit3(y_str("rt_raise(", 9), ((rt_int *)(v1590).p)[y_ix1(v1590, v1592)], y_str(");", 2));
} else {
yr3244_LeaveBlock();
yr1132_Emit(yr3249_RaiseCode(((*(yR105 *)y_deref(F.p3339))).f_name));
}
} else if ((((F.v7912 == v720)) && yr3167_Suppressed(v1486))) {
F.v7938 = INT64_C(0);
} else if ((F.v7912 == v720)) {
F.v7938 = v1657;
F.v7914 = yr3320_Cond(((*(yR105 *)y_deref(F.p3339))).f_a);
if ((!(v1657 == F.v7938))) {
yr1164_Warn(((*(yR105 *)y_deref(F.p3339))).f_line, yr1061_T(y_str("the expression of this ASSERT calls a procedure: it might have side effects (IX.A.3)", 84)));
}
yr3228_Emit3(y_str("if (!(", 6), F.v7914, y_str(")) {", 4));
yr3244_LeaveBlock();
yr1138_EmitS(y_str("rt_raise(RT_X_ASSERT); }", 24));
} else if ((F.v7912 == v753)) {
yr3364_BeginStatement(F.p3339);
} else if ((F.v7912 == v732)) {
yr3744_TerminateStatement(F.p3339);
} else if ((F.v7912 == v723)) {
yr3376_GotoStatement(F.p3339);
} else {
yr1178_FailS(((*(yR105 *)y_deref(F.p3339))).f_line, y_str("not a statement", 15));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3344_ForStatement(void * a_p3345) {
struct yf3346 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3345 = a_p3345;
F.v8017 = yr2638_MakeRep(((*(yR105 *)y_deref(F.p3345))).f_a, INT64_C(0), 0);
if ((((!yr2407_IsDiscrete(F.v8017)) || ((((*(yR110 *)y_deref(F.v8017))).f_kind == v813))) || ((((((*(yR110 *)y_deref(F.v8017))).f_kind == v816)) && (!((*(yR110 *)y_deref(F.v8017))).f_ordered))))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3345))).f_line, y_str("FOR goes over an ordered scalar or integer representation (IX.B.2)", 66));
}
yr2497_CheckRepresented(F.v8017, ((*(yR105 *)y_deref(F.p3345))).f_line);
yr2260_OpenScope(0);
F.v8025 = yr2253_NewSym(v864, ((*(yR105 *)y_deref(F.p3345))).f_name);
((*(yR125 *)y_deref(F.v8025))).f_rep = F.v8017;
((*(yR125 *)y_deref(F.v8025))).f_level = v1279;
((*(yR125 *)y_deref(F.v8025))).f_cname = yr1200_Fresh(y_str("c_", 2));
yr2375_DeclStorage(yr1061_T(y_str("rt_int", 6)), ((*(yR125 *)y_deref(F.v8025))).f_cname);
yr2355_Define(F.v8025, ((*(yR105 *)y_deref(F.p3345))).f_line);
F.v8019 = yr1200_Fresh(y_str("i", 1));
F.v8021 = yr1200_Fresh(y_str("hi", 2));
yr1026_SB();
yr1037_SA(y_str("{ rt_int ", 9));
yr1044_ST(F.v8021);
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2543_HiText(F.v8017));
yr1037_SA(y_str(";", 1));
F.v8023 = yr1056_SE();
yr1132_Emit(F.v8023);
yr1026_SB();
yr1037_SA(y_str("for (rt_int ", 12));
yr1044_ST(F.v8019);
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2537_LoText(F.v8017));
yr1037_SA(y_str("; ", 2));
yr1044_ST(F.v8019);
yr1037_SA(y_str(" <= ", 4));
yr1044_ST(F.v8021);
yr1037_SA(y_str("; ", 2));
yr1044_ST(F.v8019);
yr1037_SA(y_str("++) { ", 6));
yr1044_ST(yr2382_SymPath(F.v8025));
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.v8019);
yr1037_SA(y_str("; Y_TICK();", 11));
F.v8023 = yr1056_SE();
yr1132_Emit(F.v8023);
yr3314_Statements(((*(yR105 *)y_deref(F.p3345))).f_b);
yr3228_Emit3(y_str("if (", 4), F.v8019, y_str(" == ", 4));
((*(yR135 *)y_deref((v996).f_tail))).f_t = yr3350_Join(((*(yR135 *)y_deref((v996).f_tail))).f_t, F.v8021, yr1061_T(y_str(") break;", 8)));
yr1138_EmitS(y_str("}}", 2));
yr2272_CloseScope();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3350_Join(rt_int a_p3351, rt_int a_p3352, rt_int a_p3353) {
struct yf3354 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3351 = a_p3351;
F.p3352 = a_p3352;
F.p3353 = a_p3353;
yr1026_SB();
yr1044_ST(F.p3351);
yr1044_ST(F.p3352);
yr1044_ST(F.p3353);
{ rt_int rv8053 = yr1056_SE();
y_use = F.yu; return rv8053; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3358_ReturnStatement(void * a_p3359) {
struct yf3360 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3359 = a_p3359;
if ((v1625 == ((void *)0))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3359))).f_line, y_str("RETURN outside a routine (IX.A.6)", 33));
}
if ((((*(yR125 *)y_deref(v1625))).f_kind == v885)) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3359))).f_line, y_str("a process ends with TERMINATE_PROCESS (IX.A.7)", 46));
}
F.v8065 = ((*(yR125 *)y_deref(v1625))).f_ret;
if ((((*(yR105 *)y_deref(F.p3359))).f_a == ((void *)0))) {
if ((!(((*(yR110 *)y_deref(F.v8065))).f_kind == v852))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3359))).f_line, y_str("RETURN needs a value here (IX.A.6)", 34));
}
yr3333_CopyOut();
yr3739_LeaveMonitor();
yr3238_PopTo(v1553);
yr1138_EmitS(y_str("y_use = F.yu; return;", 21));
y_use = F.yu; return;
}
if ((((*(yR110 *)y_deref(F.v8065))).f_kind == v852)) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3359))).f_line, y_str("this routine returns no value (IX.A.6)", 38));
}
yr2973_Expr(((*(yR105 *)y_deref(F.p3359))).f_a, F.v8065, &F.v8057, &F.v8063);
yr2489_CheckType(((*(yR105 *)y_deref(F.p3359))).f_line, F.v8065, F.v8063);
F.v8061 = yr1200_Fresh(y_str("rv", 2));
yr1026_SB();
yr1037_SA(y_str("{ ", 2));
yr1044_ST(yr2456_CType(F.v8065));
yr1037_SA(y_str(" ", 1));
yr1044_ST(F.v8061);
yr1037_SA(y_str(" = ", 3));
yr1044_ST(yr2906_Convert(F.v8057, F.v8065, F.v8063));
yr1037_SA(y_str(";", 1));
F.v8059 = yr1056_SE();
yr1132_Emit(F.v8059);
yr3333_CopyOut();
yr3739_LeaveMonitor();
yr3238_PopTo(v1553);
yr3228_Emit3(y_str("y_use = F.yu; return ", 21), F.v8061, y_str("; }", 3));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3364_BeginStatement(void * a_p3365) {
struct yf3366 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3365 = a_p3365;
yr1138_EmitS(y_str("{", 1));
if ((((*(yR105 *)y_deref(F.p3365))).f_flag == INT64_C(1))) {
F.v8081 = yr1200_Fresh(y_str("sf", 2));
F.v8083 = yr1200_Fresh(y_str("ys", 2));
v1654 = 1;
yr1132_Emit(yr3350_Join(yr1061_T(y_str("int ", 4)), F.v8083, yr1061_T(y_str(" = y_sim_depth; y_sim_depth++;", 30))));
yr1132_Emit(yr3350_Join(yr1061_T(y_str("rt_frame ", 9)), F.v8081, yr1061_T(y_str(";", 1))));
yr1132_Emit(yr3350_Join(yr1061_T(y_str("if (!RT_TRY(", 12)), F.v8081, yr3350_Join(yr1061_T(y_str(")) { RT_POP(", 12)), F.v8081, yr3350_Join(yr1061_T(y_str("); y_sim_depth = ", 17)), F.v8083, yr1061_T(y_str("; rt_raise(rt_xcur); }", 22))))));
v1550 = y_range(y_add(v1550, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1548).p)[y_ix1(v1548, v1550)] = F.v8081;
}
yr2260_OpenScope(0);
yr3577_Declarations(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p3365))).f_a))).f_a);
yr3255_BlockStatements(((*(yR105 *)y_deref(F.p3365))).f_a);
yr3709_AwaitProcesses();
yr2272_CloseScope();
if ((((*(yR105 *)y_deref(F.p3365))).f_flag == INT64_C(1))) {
v1550 = y_range(y_sub(v1550, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1132_Emit(yr3350_Join(yr1061_T(y_str("RT_POP(", 7)), F.v8081, yr3350_Join(yr1061_T(y_str("); y_sim_depth = ", 17)), F.v8083, yr1061_T(y_str(";", 1)))));
}
yr1138_EmitS(y_str("}", 1));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3370_PlaceLabel(void * a_p3371) {
struct yf3372 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3371 = a_p3371;
F.v8110 = yr2289_FindHere(((*(yR105 *)y_deref(F.p3371))).f_text);
if ((((F.v8110 == ((void *)0))) || ((!(((*(yR125 *)y_deref(F.v8110))).f_kind == v888))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3371))).f_line, ((*(yR105 *)y_deref(F.p3371))).f_text, y_str(" labels a statement but is not declared by LABEL in this block (VII.C)", 70));
}
if (((*(yR125 *)y_deref(F.v8110))).f_hasmv) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3371))).f_line, ((*(yR105 *)y_deref(F.p3371))).f_text, y_str(" labels two statements", 22));
}
((*(yR125 *)y_deref(F.v8110))).f_hasmv = 1;
yr3228_Emit3(y_str("", 0), ((*(yR125 *)y_deref(F.v8110))).f_cname, y_str(": ;", 3));
if ((!(((rt_int *)(v1565).p)[y_ix1(v1565, v1578)] == INT64_C(0)))) {
yr3228_Emit3(y_str("rt_xtop = &", 11), ((rt_int *)(v1565).p)[y_ix1(v1565, v1578)], y_str(";", 1));
} else if ((!(((rt_int *)(v1576).p)[y_ix1(v1576, v1578)] == INT64_C(0)))) {
yr3228_Emit3(y_str("rt_xtop = ", 10), ((rt_int *)(v1576).p)[y_ix1(v1576, v1578)], y_str(";", 1));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3376_GotoStatement(void * a_p3377) {
struct yf3378 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3377 = a_p3377;
F.v8125 = yr2295_Lookup(((*(yR105 *)y_deref(F.p3377))).f_name, ((*(yR105 *)y_deref(F.p3377))).f_line);
if ((!(((*(yR125 *)y_deref(F.v8125))).f_kind == v888))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3377))).f_line, ((*(yR105 *)y_deref(F.p3377))).f_name, y_str(" is not a label", 15));
}
if ((!(((*(yR125 *)y_deref(F.v8125))).f_level == v1279))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3377))).f_line, ((*(yR105 *)y_deref(F.p3377))).f_name, y_str(": GOTO does not leave a routine or process (IX.A.4)", 51));
}
((*(yR125 *)y_deref(F.v8125))).f_readonly = 1;
yr1138_EmitS(y_str("Y_TICK();", 9));
yr3228_Emit3(y_str("goto ", 5), ((*(yR125 *)y_deref(F.v8125))).f_cname, y_str(";", 1));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3382_CheckLabels(void * a_p3383) {
struct yf3384 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3383 = a_p3383;
F.v8135 = F.p3383;
while ((!(F.v8135 == ((void *)0)))) {
Y_TICK();
if ((((*(yR105 *)y_deref(F.v8135))).f_kind == v645)) {
F.v8137 = ((*(yR105 *)y_deref(F.v8135))).f_a;
while ((!(F.v8137 == ((void *)0)))) {
Y_TICK();
F.v8139 = yr2289_FindHere(((*(yR105 *)y_deref(F.v8137))).f_name);
if ((((((!(F.v8139 == ((void *)0)))) && ((((*(yR125 *)y_deref(F.v8139))).f_kind == v888))) && ((*(yR125 *)y_deref(F.v8139))).f_readonly) && (!((*(yR125 *)y_deref(F.v8139))).f_hasmv))) {
yr1186_FailN(((*(yR105 *)y_deref(F.v8137))).f_line, ((*(yR105 *)y_deref(F.v8137))).f_name, y_str(" is the target of a GOTO but labels no statement of its block", 61));
}
F.v8137 = ((*(yR105 *)y_deref(F.v8137))).f_next;
}
}
F.v8135 = ((*(yR105 *)y_deref(F.v8135))).f_next;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3388_DesigBase(void * a_p3389, void * * a_p3390, rt_int * a_p3391, rt_int * a_p3392) {
struct yf3393 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3389 = a_p3389;
F.p3390_o = a_p3390;
F.p3391_o = a_p3391;
F.p3392_o = a_p3392;
F.v8147 = F.p3389;
F.p3390 = ((void *)0);
F.p3391 = 0;
F.p3392 = INT64_C(0);
for (;;) {
Y_TICK();
if (((((((*(yR105 *)y_deref(F.v8147))).f_kind == v801)) || ((((*(yR105 *)y_deref(F.v8147))).f_kind == v783))) || ((((*(yR105 *)y_deref(F.v8147))).f_kind == v786)))) {
F.v8147 = ((*(yR105 *)y_deref(F.v8147))).f_a;
} else if ((((*(yR105 *)y_deref(F.v8147))).f_kind == v789)) {
if ((!F.p3391)) {
F.p3391 = 1;
if ((!(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.v8147))).f_a))).f_rep == ((void *)0)))) {
F.p3392 = ((*(yR110 *)y_deref(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.v8147))).f_a))).f_rep))).f_tid;
}
}
F.v8147 = ((*(yR105 *)y_deref(F.v8147))).f_a;
} else {
goto yl_8152;
}
}
yl_8152: ;
if ((((((*(yR105 *)y_deref(F.v8147))).f_kind == v777)) && ((((*(yR105 *)y_deref(F.v8147))).f_d == ((void *)0))))) {
F.v8149 = yr2283_Find(((*(yR105 *)y_deref(F.v8147))).f_name);
if ((!(F.v8149 == ((void *)0)))) {
if (yr2336_Resolved(F.v8149)) {
F.v8149 = yr2388_Real(F.v8149);
if ((((*(yR125 *)y_deref(F.v8149))).f_kind == v861)) {
F.p3390 = F.v8149;
}
}
}
}
(*F.p3390_o) = F.p3390;
(*F.p3391_o) = F.p3391;
(*F.p3392_o) = F.p3392;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3397_Note(void * a_p3398, rt_int a_p3399, rt_int a_p3400) {
struct yf3401 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3398 = a_p3398;
F.p3399 = a_p3399;
F.p3400 = a_p3400;
F.v8159 = yr1939_NewNode(v669, F.p3400);
((*(yR105 *)y_deref(F.v8159))).f_sym = F.p3398;
((*(yR105 *)y_deref(F.v8159))).f_name = F.p3399;
{ void * rv8160 = F.v8159;
y_use = F.yu; return rv8160; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3405_NoteWrite(void * a_p3406) {
struct yf3407 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3406 = a_p3406;
if ((v1625 == ((void *)0))) {
y_use = F.yu; return;
}
yr3388_DesigBase(F.p3406, &F.v8164, &F.v8166, &F.v8168);
if (F.v8166) {
F.v8164 = ((void *)0);
} else if ((((F.v8164 == ((void *)0))) || ((((*(yR125 *)y_deref(F.v8164))).f_level >= ((*(yR125 *)y_deref(v1625))).f_level)))) {
y_use = F.yu; return;
}
F.v8170 = ((*(yR125 *)y_deref(v1625))).f_writes;
while ((!(F.v8170 == ((void *)0)))) {
Y_TICK();
if ((((*(yR105 *)y_deref(F.v8170))).f_sym == F.v8164)) {
y_use = F.yu; return;
}
F.v8170 = ((*(yR105 *)y_deref(F.v8170))).f_next;
}
F.v8172 = yr3397_Note(F.v8164, INT64_C(0), ((*(yR105 *)y_deref(F.p3406))).f_line);
((*(yR105 *)y_deref(F.v8172))).f_next = ((*(yR125 *)y_deref(v1625))).f_writes;
((*(yR125 *)y_deref(v1625))).f_writes = F.v8172;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3411_NoteFree(void * a_p3412) {
struct yf3413 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3412 = a_p3412;
if ((v1625 == ((void *)0))) {
y_use = F.yu; return;
}
if ((((!(((*(yR125 *)y_deref(F.p3412))).f_kind == v861))) || ((((*(yR125 *)y_deref(F.p3412))).f_level >= ((*(yR125 *)y_deref(v1625))).f_level)))) {
y_use = F.yu; return;
}
if ((((*(yR125 *)y_deref(F.p3412))).f_seen == ((*(yR125 *)y_deref(v1625))).f_serial)) {
y_use = F.yu; return;
}
((*(yR125 *)y_deref(F.p3412))).f_seen = ((*(yR125 *)y_deref(v1625))).f_serial;
F.v8177 = yr3397_Note(F.p3412, INT64_C(0), v1000);
((*(yR105 *)y_deref(F.v8177))).f_next = ((*(yR125 *)y_deref(v1625))).f_frees;
((*(yR125 *)y_deref(v1625))).f_frees = F.v8177;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3417_NoteFreeDeref(void * a_p3418, rt_int a_p3419) {
struct yf3420 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3418 = a_p3418;
F.p3419 = a_p3419;
if ((v1625 == ((void *)0))) {
y_use = F.yu; return;
}
yr3388_DesigBase(F.p3418, &F.v8183, &F.v8185, &F.v8187);
if ((((F.v8183 == ((void *)0))) || ((((*(yR125 *)y_deref(F.v8183))).f_level >= ((*(yR125 *)y_deref(v1625))).f_level)))) {
y_use = F.yu; return;
}
F.v8189 = ((*(yR125 *)y_deref(v1625))).f_frees;
while ((!(F.v8189 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR105 *)y_deref(F.v8189))).f_sym == ((void *)0))) && ((((*(yR105 *)y_deref(F.v8189))).f_name == F.p3419)))) {
y_use = F.yu; return;
}
F.v8189 = ((*(yR105 *)y_deref(F.v8189))).f_next;
}
F.v8189 = yr3397_Note(((void *)0), F.p3419, ((*(yR105 *)y_deref(F.p3418))).f_line);
((*(yR105 *)y_deref(F.v8189))).f_next = ((*(yR125 *)y_deref(v1625))).f_frees;
((*(yR125 *)y_deref(v1625))).f_frees = F.v8189;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3424_DSteps(void * a_p3425, yarr * a_p3426) {
struct yf3427 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3425 = a_p3425;
F.p3426 = a_p3426;
F.v8194 = F.p3425;
F.v8196 = INT64_C(0);
while (((((((*(yR105 *)y_deref(F.v8194))).f_kind == v801)) || ((((*(yR105 *)y_deref(F.v8194))).f_kind == v783))) || ((((*(yR105 *)y_deref(F.v8194))).f_kind == v786)))) {
Y_TICK();
if ((!(((*(yR105 *)y_deref(F.v8194))).f_kind == v801))) {
if ((F.v8196 < INT64_C(64))) {
F.v8196 = y_range(y_add(F.v8196, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)((*F.p3426)).p)[y_ix1((*F.p3426), F.v8196)] = F.v8194;
}
}
F.v8194 = ((*(yR105 *)y_deref(F.v8194))).f_a;
}
F.lo8208 = INT64_C(1);
F.hi8209 = y_div(F.v8196, INT64_C(2));
{ rt_int hi8213 = F.hi8209;
for (rt_int i8212 = F.lo8208; i8212 <= hi8213; i8212++) { F.c_8211 = i8212; Y_TICK();
F.v8199 = ((void * *)((*F.p3426)).p)[y_ix1((*F.p3426), F.c_8211)];
((void * *)((*F.p3426)).p)[y_ix1((*F.p3426), F.c_8211)] = ((void * *)((*F.p3426)).p)[y_ix1((*F.p3426), y_sub((y_add(F.v8196, INT64_C(1))), F.c_8211))];
((void * *)((*F.p3426)).p)[y_ix1((*F.p3426), y_sub((y_add(F.v8196, INT64_C(1))), F.c_8211))] = F.v8199;
if (i8212 == hi8213) break;
}}
{ rt_int rv8220 = F.v8196;
y_use = F.yu; return rv8220; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3431_Overlaps(void * a_p3432, void * a_p3433) {
struct yf3434 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3432 = a_p3432;
F.p3433 = a_p3433;
y_init(&yd_201, &F.v8245);
y_init(&yd_201, &F.v8247);
yr3388_DesigBase(F.p3432, &F.v8225, &F.v8229, &F.v8241);
yr3388_DesigBase(F.p3433, &F.v8227, &F.v8231, &F.v8243);
if ((!(F.v8229 == F.v8231))) {
if (((F.v8229 && ((((*(yR105 *)y_deref(F.p3432))).f_kind == v789))) && ((!(((*(yR105 *)y_deref(F.p3433))).f_rep == ((void *)0)))))) {
if ((((((*(yR110 *)y_deref(((*(yR105 *)y_deref(F.p3433))).f_rep))).f_kind == v828)) && ((((*(yR110 *)y_deref(((*(yR105 *)y_deref(F.p3433))).f_rep))).f_tid == F.v8241)))) {
{ rt_int rv8265 = 1;
y_use = F.yu; return rv8265; }
}
}
if (((F.v8231 && ((((*(yR105 *)y_deref(F.p3433))).f_kind == v789))) && ((!(((*(yR105 *)y_deref(F.p3432))).f_rep == ((void *)0)))))) {
if ((((((*(yR110 *)y_deref(((*(yR105 *)y_deref(F.p3432))).f_rep))).f_kind == v828)) && ((((*(yR110 *)y_deref(((*(yR105 *)y_deref(F.p3432))).f_rep))).f_tid == F.v8243)))) {
{ rt_int rv8267 = 1;
y_use = F.yu; return rv8267; }
}
}
{ rt_int rv8269 = 0;
y_use = F.yu; return rv8269; }
}
if (F.v8229) {
if ((!(F.v8241 == F.v8243))) {
{ rt_int rv8271 = 0;
y_use = F.yu; return rv8271; }
}
} else if ((((F.v8225 == ((void *)0))) || ((!(F.v8225 == F.v8227))))) {
{ rt_int rv8273 = 0;
y_use = F.yu; return rv8273; }
}
F.v8249 = yr3424_DSteps(F.p3432, &F.v8245);
F.v8251 = yr3424_DSteps(F.p3433, &F.v8247);
F.lo8277 = INT64_C(1);
F.hi8278 = F.v8249;
{ rt_int hi8282 = F.hi8278;
for (rt_int i8281 = F.lo8277; i8281 <= hi8282; i8281++) { F.c_8280 = i8281; Y_TICK();
if ((F.c_8280 <= F.v8251)) {
F.v8257 = ((void * *)(F.v8245).p)[y_ix1(F.v8245, F.c_8280)];
F.v8259 = ((void * *)(F.v8247).p)[y_ix1(F.v8247, F.c_8280)];
if ((!(((*(yR105 *)y_deref(F.v8257))).f_kind == ((*(yR105 *)y_deref(F.v8259))).f_kind))) {
{ rt_int rv8284 = 1;
y_use = F.yu; return rv8284; }
}
if ((((*(yR105 *)y_deref(F.v8257))).f_kind == v783)) {
if ((!(((*(yR105 *)y_deref(F.v8257))).f_name == ((*(yR105 *)y_deref(F.v8259))).f_name))) {
{ rt_int rv8286 = 0;
y_use = F.yu; return rv8286; }
}
} else {
F.v8237 = 1;
F.v8239 = 0;
F.v8261 = ((*(yR105 *)y_deref(F.v8257))).f_b;
F.v8263 = ((*(yR105 *)y_deref(F.v8259))).f_b;
while ((((!(F.v8261 == ((void *)0)))) && ((!(F.v8263 == ((void *)0)))))) {
Y_TICK();
yr2825_Manifest(F.v8261, &F.v8233, &F.v8253);
yr2825_Manifest(F.v8263, &F.v8235, &F.v8255);
if ((F.v8233 && F.v8235)) {
if ((!(F.v8253 == F.v8255))) {
F.v8239 = 1;
}
} else {
F.v8237 = 0;
}
F.v8261 = ((*(yR105 *)y_deref(F.v8261))).f_next;
F.v8263 = ((*(yR105 *)y_deref(F.v8263))).f_next;
}
if ((!F.v8237)) {
{ rt_int rv8292 = 1;
y_use = F.yu; return rv8292; }
}
if (F.v8239) {
{ rt_int rv8294 = 0;
y_use = F.yu; return rv8294; }
}
}
}
if (i8281 == hi8282) break;
}}
{ rt_int rv8296 = 1;
y_use = F.yu; return rv8296; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3438_CheckActuals(void * a_p3439, rt_int a_p3440, rt_int a_p3441) {
struct yf3442 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3439 = a_p3439;
F.p3440 = a_p3440;
F.p3441 = a_p3441;
F.v8302 = ((*(yR125 *)y_deref(F.p3439))).f_params;
F.v8306 = y_range(y_add(F.p3440, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v8310 = ((void *)0);
while ((!(F.v8302 == ((void *)0)))) {
Y_TICK();
if ((((!(((*(yR120 *)y_deref(F.v8302))).f_cls == v897))) && ((!(((*(yR110 *)y_deref(((*(yR120 *)y_deref(F.v8302))).f_rep))).f_kind == v855))))) {
F.v8304 = ((*(yR120 *)y_deref(F.v8302))).f_next;
F.v8308 = y_range(y_add(F.v8306, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(F.v8304 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR120 *)y_deref(F.v8302))).f_cls == v903)) && ((((*(yR120 *)y_deref(F.v8304))).f_cls == v903)))) {
if (yr3431_Overlaps(((void * *)(v1534).p)[y_ix1(v1534, F.v8306)], ((void * *)(v1534).p)[y_ix1(v1534, F.v8308)])) {
yr1186_FailN(((*(yR105 *)y_deref(((void * *)(v1534).p)[y_ix1(v1534, F.v8308)]))).f_line, ((*(yR120 *)y_deref(F.v8304))).f_name, y_str(": its actual and that of another VAR parameter may be the same variable (X.A.6)", 79));
}
}
if ((((((*(yR120 *)y_deref(F.v8302))).f_cls == v900)) && ((((*(yR120 *)y_deref(F.v8304))).f_cls == v900)))) {
if (yr3267_SameDesig(((void * *)(v1534).p)[y_ix1(v1534, F.v8306)], ((void * *)(v1534).p)[y_ix1(v1534, F.v8308)])) {
yr1186_FailN(((*(yR105 *)y_deref(((void * *)(v1534).p)[y_ix1(v1534, F.v8308)]))).f_line, ((*(yR120 *)y_deref(F.v8304))).f_name, y_str(": the same variable is the actual of two OUT parameters (IX.A.2)", 64));
}
}
F.v8304 = ((*(yR120 *)y_deref(F.v8304))).f_next;
F.v8308 = y_range(y_add(F.v8308, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((((*(yR120 *)y_deref(F.v8302))).f_cls == v903)) {
yr3388_DesigBase(((void * *)(v1534).p)[y_ix1(v1534, F.v8306)], &F.v8314, &F.v8316, &F.v8318);
F.v8312 = yr3397_Note(F.v8314, F.v8318, ((*(yR105 *)y_deref(((void * *)(v1534).p)[y_ix1(v1534, F.v8306)]))).f_line);
if (F.v8316) {
((*(yR105 *)y_deref(F.v8312))).f_flag = INT64_C(1);
}
if ((((*(yR105 *)y_deref(((void * *)(v1534).p)[y_ix1(v1534, F.v8306)]))).f_kind == v789)) {
((*(yR105 *)y_deref(F.v8312))).f_ival = INT64_C(1);
}
if ((F.v8310 == ((void *)0))) {
F.v8310 = yr3397_Note(F.p3439, INT64_C(0), F.p3441);
((*(yR105 *)y_deref(F.v8310))).f_next = v1668;
v1668 = F.v8310;
}
((*(yR105 *)y_deref(F.v8312))).f_next = ((*(yR105 *)y_deref(F.v8310))).f_a;
((*(yR105 *)y_deref(F.v8310))).f_a = F.v8312;
}
}
F.v8306 = y_range(y_add(F.v8306, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v8302 = ((*(yR120 *)y_deref(F.v8302))).f_next;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr8451_At(struct yf3447 *up, rt_int a_p8452, rt_int a_p8453) {
struct yf8454 F;
memset((void *)&F, 0, sizeof F);
F.up = up;
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p8452 = a_p8452;
F.p8453 = a_p8453;
{ rt_int rv8476 = y_range(y_add((y_mul(F.p8452, (y_add(F.up->v8343, INT64_C(1))))), F.p8453), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
y_use = F.yu; return rv8476; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr8458_Reaches(struct yf3447 *up, rt_int a_p8459, rt_int a_p8460) {
struct yf8461 F;
memset((void *)&F, 0, sizeof F);
F.up = up;
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p8459 = a_p8459;
F.p8460 = a_p8460;
F.v8481 = ((*(yR125 *)y_deref(((void * *)(F.up->v8427).p)[y_ix1(F.up->v8427, F.p8460)]))).f_calls;
if (((rt_int *)(F.up->v8438).p)[y_ix1(F.up->v8438, F.p8460)]) {
{ rt_int rv8483 = 0;
y_use = F.yu; return rv8483; }
}
((rt_int *)(F.up->v8438).p)[y_ix1(F.up->v8438, F.p8460)] = 1;
while ((!(F.v8481 == ((void *)0)))) {
Y_TICK();
if ((((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8481))).f_sym))).f_vix > INT64_C(0))) {
if ((((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8481))).f_sym))).f_vix == F.p8459)) {
{ rt_int rv8487 = 1;
y_use = F.yu; return rv8487; }
}
if (yr8458_Reaches(F.up, F.p8459, ((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8481))).f_sym))).f_vix)) {
{ rt_int rv8489 = 1;
y_use = F.yu; return rv8489; }
}
}
F.v8481 = ((*(yR105 *)y_deref(F.v8481))).f_next;
}
{ rt_int rv8491 = 0;
y_use = F.yu; return rv8491; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr8465_VName(struct yf3447 *up, rt_int a_p8466) {
struct yf8467 F;
memset((void *)&F, 0, sizeof F);
F.up = up;
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p8466 = a_p8466;
if ((((void * *)(F.up->v8405).p)[y_ix1(F.up->v8405, F.p8466)] == ((void *)0))) {
{ rt_int rv8495 = yr1061_T(y_str("a dynamic variable", 18));
y_use = F.yu; return rv8495; }
}
{ rt_int rv8496 = ((*(yR125 *)y_deref(((void * *)(F.up->v8405).p)[y_ix1(F.up->v8405, F.p8466)]))).f_name;
y_use = F.yu; return rv8496; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3446_CheckEffects(void) {
struct yf3447 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v8340 = INT64_C(0);
F.v8343 = INT64_C(0);
F.v8346 = INT64_C(0);
F.v8346 = INT64_C(1);
F.v8343 = INT64_C(1);
F.v8334 = v1666;
while ((!(F.v8334 == ((void *)0)))) {
Y_TICK();
F.v8340 = y_range(y_add(F.v8340, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8334))).f_sym))).f_vix = F.v8340;
F.v8336 = ((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8334))).f_sym))).f_writes;
while ((!(F.v8336 == ((void *)0)))) {
Y_TICK();
if ((((!(((*(yR105 *)y_deref(F.v8336))).f_sym == ((void *)0)))) && ((((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8336))).f_sym))).f_vix == INT64_C(0))))) {
F.v8343 = y_range(y_add(F.v8343, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8336))).f_sym))).f_vix = F.v8343;
}
F.v8336 = ((*(yR105 *)y_deref(F.v8336))).f_next;
}
F.v8336 = ((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8334))).f_sym))).f_frees;
while ((!(F.v8336 == ((void *)0)))) {
Y_TICK();
if ((!(((*(yR105 *)y_deref(F.v8336))).f_sym == ((void *)0)))) {
if ((((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8336))).f_sym))).f_vix == INT64_C(0))) {
F.v8343 = y_range(y_add(F.v8343, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8336))).f_sym))).f_vix = F.v8343;
}
} else if ((yr3451_DynIndex(((*(yR105 *)y_deref(F.v8336))).f_name, F.v8343, 0) == INT64_C(0))) {
F.v8343 = y_range(y_add(F.v8343, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR105 *)y_deref(F.v8336))).f_ival = yr3451_DynIndex(((*(yR105 *)y_deref(F.v8336))).f_name, F.v8343, 1);
}
F.v8336 = ((*(yR105 *)y_deref(F.v8336))).f_next;
}
F.v8334 = ((*(yR105 *)y_deref(F.v8334))).f_next;
}
if ((F.v8340 == INT64_C(0))) {
y_use = F.yu; return;
}
{
F.lo8376 = INT64_C(0);
F.hi8377 = y_mul((y_add(F.v8340, INT64_C(1))), (y_add(F.v8343, INT64_C(1))));
{ rt_int lo[1] = {F.lo8376}, hi[1] = {F.hi8377}; y_desc_array(&F.yd_8379, 1, lo, hi, &y_d_int); }
y_init(&F.yd_8379, &F.v8381);
y_init(&F.yd_8379, &F.v8383);
F.lo8389 = INT64_C(0);
F.hi8390 = F.v8343;
{ rt_int lo[1] = {F.lo8389}, hi[1] = {F.hi8390}; y_desc_array(&F.yd_8392, 1, lo, hi, &y_d_int); }
y_init(&F.yd_8392, &F.v8394);
F.lo8400 = INT64_C(0);
F.hi8401 = F.v8343;
{ rt_int lo[1] = {F.lo8400}, hi[1] = {F.hi8401}; y_desc_array(&F.yd_8403, 1, lo, hi, &y_d_ptr); }
y_init(&F.yd_8403, &F.v8405);
F.lo8411 = INT64_C(0);
F.hi8412 = F.v8343;
{ rt_int lo[1] = {F.lo8411}, hi[1] = {F.hi8412}; y_desc_array(&F.yd_8414, 1, lo, hi, &y_d_int); }
y_init(&F.yd_8414, &F.v8416);
F.lo8422 = INT64_C(0);
F.hi8423 = F.v8340;
{ rt_int lo[1] = {F.lo8422}, hi[1] = {F.hi8423}; y_desc_array(&F.yd_8425, 1, lo, hi, &y_d_ptr); }
y_init(&F.yd_8425, &F.v8427);
F.lo8433 = INT64_C(0);
F.hi8434 = F.v8340;
{ rt_int lo[1] = {F.lo8433}, hi[1] = {F.hi8434}; y_desc_array(&F.yd_8436, 1, lo, hi, &y_d_int); }
y_init(&F.yd_8436, &F.v8438);
F.v8440 = 1;
F.lo8506 = INT64_C(0);
F.hi8507 = y_mul((y_add(F.v8340, INT64_C(1))), (y_add(F.v8343, INT64_C(1))));
{ rt_int hi8511 = F.hi8507;
for (rt_int i8510 = F.lo8506; i8510 <= hi8511; i8510++) { F.c_8509 = i8510; Y_TICK();
((rt_int *)(F.v8381).p)[y_ix1(F.v8381, F.c_8509)] = 0;
((rt_int *)(F.v8383).p)[y_ix1(F.v8383, F.c_8509)] = 0;
if (i8510 == hi8511) break;
}}
F.lo8517 = INT64_C(0);
F.hi8518 = F.v8343;
{ rt_int hi8522 = F.hi8518;
for (rt_int i8521 = F.lo8517; i8521 <= hi8522; i8521++) { F.c_8520 = i8521; Y_TICK();
((rt_int *)(F.v8394).p)[y_ix1(F.v8394, F.c_8520)] = INT64_C(-1);
((void * *)(F.v8405).p)[y_ix1(F.v8405, F.c_8520)] = ((void *)0);
((rt_int *)(F.v8416).p)[y_ix1(F.v8416, F.c_8520)] = INT64_C(0);
if (i8521 == hi8522) break;
}}
F.lo8528 = INT64_C(0);
F.hi8529 = F.v8340;
{ rt_int hi8533 = F.hi8529;
for (rt_int i8532 = F.lo8528; i8532 <= hi8533; i8532++) { F.c_8531 = i8532; Y_TICK();
((rt_int *)(F.v8438).p)[y_ix1(F.v8438, F.c_8531)] = 0;
if (i8532 == hi8533) break;
}}
F.v8334 = v1666;
while ((!(F.v8334 == ((void *)0)))) {
Y_TICK();
F.v8349 = ((*(yR105 *)y_deref(F.v8334))).f_sym;
((void * *)(F.v8427).p)[y_ix1(F.v8427, ((*(yR125 *)y_deref(F.v8349))).f_vix)] = F.v8349;
F.v8336 = ((*(yR125 *)y_deref(F.v8349))).f_writes;
while ((!(F.v8336 == ((void *)0)))) {
Y_TICK();
if ((((*(yR105 *)y_deref(F.v8336))).f_sym == ((void *)0))) {
F.v8445 = INT64_C(1);
} else {
F.v8445 = ((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8336))).f_sym))).f_vix;
}
((rt_int *)(F.v8381).p)[y_ix1(F.v8381, yr8451_At(&F, ((*(yR125 *)y_deref(F.v8349))).f_vix, F.v8445))] = 1;
if ((!(((*(yR105 *)y_deref(F.v8336))).f_sym == ((void *)0)))) {
((rt_int *)(F.v8394).p)[y_ix1(F.v8394, F.v8445)] = ((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8336))).f_sym))).f_level;
((void * *)(F.v8405).p)[y_ix1(F.v8405, F.v8445)] = ((*(yR105 *)y_deref(F.v8336))).f_sym;
}
F.v8336 = ((*(yR105 *)y_deref(F.v8336))).f_next;
}
F.v8336 = ((*(yR125 *)y_deref(F.v8349))).f_frees;
while ((!(F.v8336 == ((void *)0)))) {
Y_TICK();
if ((((*(yR105 *)y_deref(F.v8336))).f_sym == ((void *)0))) {
F.v8445 = yr3451_DynIndex(((*(yR105 *)y_deref(F.v8336))).f_name, INT64_C(0), 0);
((rt_int *)(F.v8416).p)[y_ix1(F.v8416, F.v8445)] = ((*(yR105 *)y_deref(F.v8336))).f_name;
} else {
F.v8445 = ((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8336))).f_sym))).f_vix;
((rt_int *)(F.v8394).p)[y_ix1(F.v8394, F.v8445)] = ((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8336))).f_sym))).f_level;
((void * *)(F.v8405).p)[y_ix1(F.v8405, F.v8445)] = ((*(yR105 *)y_deref(F.v8336))).f_sym;
}
((rt_int *)(F.v8383).p)[y_ix1(F.v8383, yr8451_At(&F, ((*(yR125 *)y_deref(F.v8349))).f_vix, F.v8445))] = 1;
F.v8336 = ((*(yR105 *)y_deref(F.v8336))).f_next;
}
F.v8334 = ((*(yR105 *)y_deref(F.v8334))).f_next;
}
while (F.v8440) {
Y_TICK();
F.v8440 = 0;
F.lo8544 = INT64_C(1);
F.hi8545 = F.v8340;
{ rt_int hi8549 = F.hi8545;
for (rt_int i8548 = F.lo8544; i8548 <= hi8549; i8548++) { F.c_8547 = i8548; Y_TICK();
F.v8338 = ((*(yR125 *)y_deref(((void * *)(F.v8427).p)[y_ix1(F.v8427, F.c_8547)]))).f_calls;
while ((!(F.v8338 == ((void *)0)))) {
Y_TICK();
F.v8447 = ((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8338))).f_sym))).f_vix;
if ((F.v8447 > INT64_C(0))) {
F.lo8554 = INT64_C(1);
F.hi8555 = F.v8343;
{ rt_int hi8559 = F.hi8555;
for (rt_int i8558 = F.lo8554; i8558 <= hi8559; i8558++) { F.c_8557 = i8558; Y_TICK();
if ((((rt_int *)(F.v8394).p)[y_ix1(F.v8394, F.c_8557)] < ((*(yR125 *)y_deref(((void * *)(F.v8427).p)[y_ix1(F.v8427, F.c_8547)]))).f_level)) {
if ((((rt_int *)(F.v8381).p)[y_ix1(F.v8381, yr8451_At(&F, F.v8447, y_range(F.c_8557, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] && (!((rt_int *)(F.v8381).p)[y_ix1(F.v8381, yr8451_At(&F, y_range(F.c_8547, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(F.c_8557, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]))) {
((rt_int *)(F.v8381).p)[y_ix1(F.v8381, yr8451_At(&F, y_range(F.c_8547, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(F.c_8557, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] = 1;
F.v8440 = 1;
}
if ((((rt_int *)(F.v8383).p)[y_ix1(F.v8383, yr8451_At(&F, F.v8447, y_range(F.c_8557, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] && (!((rt_int *)(F.v8383).p)[y_ix1(F.v8383, yr8451_At(&F, y_range(F.c_8547, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(F.c_8557, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))]))) {
((rt_int *)(F.v8383).p)[y_ix1(F.v8383, yr8451_At(&F, y_range(F.c_8547, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(F.c_8557, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] = 1;
F.v8440 = 1;
}
}
if (i8558 == hi8559) break;
}}
}
F.v8338 = ((*(yR105 *)y_deref(F.v8338))).f_next;
}
if (i8548 == hi8549) break;
}}
}
F.lo8567 = INT64_C(1);
F.hi8568 = F.v8340;
{ rt_int hi8572 = F.hi8568;
for (rt_int i8571 = F.lo8567; i8571 <= hi8572; i8571++) { F.c_8570 = i8571; Y_TICK();
F.v8349 = ((void * *)(F.v8427).p)[y_ix1(F.v8427, F.c_8570)];
if (((*(yR125 *)y_deref(F.v8349))).f_func) {
F.v8338 = ((*(yR125 *)y_deref(F.v8349))).f_calls;
while ((!(F.v8338 == ((void *)0)))) {
Y_TICK();
F.v8447 = ((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8338))).f_sym))).f_vix;
if ((F.v8447 > INT64_C(0))) {
F.lo8577 = INT64_C(1);
F.hi8578 = F.v8343;
{ rt_int hi8582 = F.hi8578;
for (rt_int i8581 = F.lo8577; i8581 <= hi8582; i8581++) { F.c_8580 = i8581; Y_TICK();
if ((((rt_int *)(F.v8381).p)[y_ix1(F.v8381, yr8451_At(&F, F.v8447, y_range(F.c_8580, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] && ((((rt_int *)(F.v8394).p)[y_ix1(F.v8394, F.c_8580)] < ((*(yR125 *)y_deref(F.v8349))).f_level)))) {
yr1157_Fail(((*(yR105 *)y_deref(F.v8338))).f_line, yr3350_Join(((*(yR125 *)y_deref(F.v8349))).f_name, yr3350_Join(yr1061_T(y_str(" is a FUNCTION: it calls ", 25)), ((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8338))).f_sym))).f_name, INT64_C(0)), yr3350_Join(yr1061_T(y_str(", which assigns to ", 19)), yr8465_VName(&F, y_range(F.c_8580, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))), yr1061_T(y_str(" (X.A.4)", 8)))));
}
if (i8581 == hi8582) break;
}}
}
F.v8338 = ((*(yR105 *)y_deref(F.v8338))).f_next;
}
}
if ((!(((*(yR125 *)y_deref(F.v8349))).f_decl == ((void *)0)))) {
if ((!(((*(yR105 *)y_deref(((*(yR125 *)y_deref(F.v8349))).f_decl))).f_e == ((void *)0)))) {
F.lo8590 = INT64_C(0);
F.hi8591 = F.v8340;
{ rt_int hi8595 = F.hi8591;
for (rt_int i8594 = F.lo8590; i8594 <= hi8595; i8594++) { F.c_8593 = i8594; Y_TICK();
((rt_int *)(F.v8438).p)[y_ix1(F.v8438, F.c_8593)] = 0;
if (i8594 == hi8595) break;
}}
if (yr8458_Reaches(&F, y_range(F.c_8570, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(F.c_8570, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) {
yr1186_FailN(((*(yR105 *)y_deref(((*(yR125 *)y_deref(F.v8349))).f_decl))).f_line, ((*(yR125 *)y_deref(F.v8349))).f_name, y_str(" is INLINE and calls itself (X.A.5)", 35));
}
}
}
if (i8571 == hi8572) break;
}}
F.v8334 = v1668;
while ((!(F.v8334 == ((void *)0)))) {
Y_TICK();
F.v8449 = ((*(yR105 *)y_deref(F.v8334))).f_sym;
F.v8447 = ((*(yR125 *)y_deref(F.v8449))).f_vix;
if ((F.v8447 > INT64_C(0))) {
F.v8336 = ((*(yR105 *)y_deref(F.v8334))).f_a;
while ((!(F.v8336 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR105 *)y_deref(F.v8336))).f_flag == INT64_C(0))) && ((!(((*(yR105 *)y_deref(F.v8336))).f_sym == ((void *)0)))))) {
F.v8445 = ((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8336))).f_sym))).f_vix;
if ((F.v8445 > INT64_C(0))) {
if (((rt_int *)(F.v8383).p)[y_ix1(F.v8383, yr8451_At(&F, F.v8447, F.v8445))]) {
yr1157_Fail(((*(yR105 *)y_deref(F.v8336))).f_line, yr3350_Join(((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v8336))).f_sym))).f_name, yr3350_Join(yr1061_T(y_str(" is the actual of a VAR parameter of ", 37)), ((*(yR125 *)y_deref(F.v8449))).f_name, INT64_C(0)), yr1061_T(y_str(", which refers to it freely too (X.A.6)", 39))));
}
}
}
F.v8443 = INT64_C(0);
if ((((*(yR105 *)y_deref(F.v8336))).f_flag == INT64_C(1))) {
F.v8443 = yr3451_DynIndex(((*(yR105 *)y_deref(F.v8336))).f_name, INT64_C(0), 0);
}
if ((F.v8443 > INT64_C(0))) {
if (((rt_int *)(F.v8383).p)[y_ix1(F.v8383, yr8451_At(&F, F.v8447, F.v8443))]) {
yr1186_FailN(((*(yR105 *)y_deref(F.v8336))).f_line, ((*(yR125 *)y_deref(F.v8449))).f_name, y_str(": a VAR actual and a dynamic variable it refers to freely may be the same (X.A.6)", 81));
}
}
if ((((((*(yR105 *)y_deref(F.v8336))).f_flag == INT64_C(1))) && ((((*(yR105 *)y_deref(F.v8336))).f_ival == INT64_C(1))))) {
F.lo8615 = INT64_C(1);
F.hi8616 = F.v8343;
{ rt_int hi8620 = F.hi8616;
for (rt_int i8619 = F.lo8615; i8619 <= hi8620; i8619++) { F.c_8618 = i8619; Y_TICK();
if ((((rt_int *)(F.v8383).p)[y_ix1(F.v8383, yr8451_At(&F, F.v8447, y_range(F.c_8618, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))))] && ((!(((void * *)(F.v8405).p)[y_ix1(F.v8405, F.c_8618)] == ((void *)0)))))) {
if ((((((*(yR110 *)y_deref(((*(yR125 *)y_deref(((void * *)(F.v8405).p)[y_ix1(F.v8405, F.c_8618)]))).f_rep))).f_kind == v828)) && ((((*(yR110 *)y_deref(((*(yR125 *)y_deref(((void * *)(F.v8405).p)[y_ix1(F.v8405, F.c_8618)]))).f_rep))).f_tid == ((*(yR105 *)y_deref(F.v8336))).f_name)))) {
yr1157_Fail(((*(yR105 *)y_deref(F.v8336))).f_line, yr3350_Join(((*(yR125 *)y_deref(F.v8449))).f_name, yr3350_Join(yr1061_T(y_str(": a VAR actual is a dynamic variable that ", 42)), ((*(yR125 *)y_deref(((void * *)(F.v8405).p)[y_ix1(F.v8405, F.c_8618)]))).f_name, INT64_C(0)), yr1061_T(y_str(", which it refers to freely, may point to (X.A.6)", 49))));
}
}
if (i8619 == hi8620) break;
}}
}
F.v8336 = ((*(yR105 *)y_deref(F.v8336))).f_next;
}
}
F.v8334 = ((*(yR105 *)y_deref(F.v8334))).f_next;
}
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3451_DynIndex(rt_int a_p3452, rt_int a_p3453, rt_int a_p3454) {
struct yf3455 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3452 = a_p3452;
F.p3453 = a_p3453;
F.p3454 = a_p3454;
F.lo8631 = INT64_C(1);
F.hi8632 = v1692;
{ rt_int hi8636 = F.hi8632;
for (rt_int i8635 = F.lo8631; i8635 <= hi8636; i8635++) { F.c_8634 = i8635; Y_TICK();
if ((((rt_int *)(v1679).p)[y_ix1(v1679, F.c_8634)] == F.p3452)) {
{ rt_int rv8637 = ((rt_int *)(v1690).p)[y_ix1(v1690, F.c_8634)];
y_use = F.yu; return rv8637; }
}
if (i8635 == hi8636) break;
}}
if ((!F.p3454)) {
{ rt_int rv8639 = INT64_C(0);
y_use = F.yu; return rv8639; }
}
if ((v1692 >= INT64_C(4096))) {
yr1178_FailS(v1000, y_str("too many pointer types for this implementation", 46));
}
v1692 = y_range(y_add(v1692, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1679).p)[y_ix1(v1679, v1692)] = F.p3452;
((rt_int *)(v1690).p)[y_ix1(v1690, v1692)] = F.p3453;
{ rt_int rv8644 = F.p3453;
y_use = F.yu; return rv8644; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3459_RoutineCName(rt_int a_p3460) {
struct yf3461 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3460 = a_p3460;
F.v8648 = yr1195_NewSerial();
F.v8650 = 1;
F.lo8655 = INT64_C(1);
F.hi8656 = ((rt_int *)(v920).p)[y_ix1(v920, F.p3460)];
{ rt_int hi8660 = F.hi8656;
for (rt_int i8659 = F.lo8655; i8659 <= hi8660; i8659++) { F.c_8658 = i8659; Y_TICK();
if ((!((yr1008_IsLetter(yr1103_TChar(F.p3460, y_range(F.c_8658, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))) || yr1014_IsDigit(yr1103_TChar(F.p3460, y_range(F.c_8658, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)))))))) {
F.v8650 = 0;
}
if (i8659 == hi8660) break;
}}
yr1026_SB();
yr1037_SA(y_str("yr", 2));
yr1050_SI(F.v8648);
if (F.v8650) {
yr1037_SA(y_str("_", 1));
yr1044_ST(F.p3460);
}
{ rt_int rv8664 = yr1056_SE();
y_use = F.yu; return rv8664; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3465_FormalRep(void * a_p3466) {
struct yf3467 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3466 = a_p3466;
if ((((*(yR105 *)y_deref(F.p3466))).f_kind == v696)) {
yr2825_Manifest(((*(yR105 *)y_deref(F.p3466))).f_a, &F.v8670, &F.v8672);
if ((((!F.v8670) || ((F.v8672 < INT64_C(1)))) || ((F.v8672 > INT64_C(8))))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3466))).f_line, y_str("DIMENSIONS is a manifest constant from 1 to 8 here", 50));
}
F.v8668 = yr2394_NewRep(v843, yr1061_T(y_str("length-unresolved array", 23)));
((*(yR110 *)y_deref(F.v8668))).f_nidx = F.v8672;
((*(yR110 *)y_deref(F.v8668))).f_elem = yr2638_MakeRep(((*(yR105 *)y_deref(F.p3466))).f_b, INT64_C(0), 0);
yr2497_CheckRepresented(((*(yR110 *)y_deref(F.v8668))).f_elem, ((*(yR105 *)y_deref(F.p3466))).f_line);
((*(yR110 *)y_deref(F.v8668))).f_deep = 1;
{ void * rv8680 = F.v8668;
y_use = F.yu; return rv8680; }
}
if ((((*(yR105 *)y_deref(F.p3466))).f_kind == v699)) {
{ void * rv8682 = yr2394_NewRep(v855, yr1061_T(y_str("SPACE", 5)));
y_use = F.yu; return rv8682; }
}
F.v8668 = yr2638_MakeRep(F.p3466, INT64_C(0), 0);
yr2497_CheckRepresented(F.v8668, ((*(yR105 *)y_deref(F.p3466))).f_line);
{ void * rv8685 = F.v8668;
y_use = F.yu; return rv8685; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3471_ParamCType(void * a_p3472) {
struct yf3473 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3472 = a_p3472;
F.v8689 = yr2456_CType(((*(yR120 *)y_deref(F.p3472))).f_rep);
if ((((((*(yR120 *)y_deref(F.p3472))).f_cls == v897)) || ((((*(yR110 *)y_deref(((*(yR120 *)y_deref(F.p3472))).f_rep))).f_kind == v855)))) {
{ rt_int rv8690 = F.v8689;
y_use = F.yu; return rv8690; }
}
yr1026_SB();
yr1044_ST(F.v8689);
yr1037_SA(y_str(" *", 2));
{ rt_int rv8692 = yr1056_SE();
y_use = F.yu; return rv8692; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3477_InstallTrap(void * a_p3478, void * a_p3479) {
struct yf3480 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3478 = a_p3478;
F.p3479 = a_p3479;
F.v8699 = 0;
F.v8704 = INT64_C(1);
F.v8697 = yr1068_Intern(y_range(y_add(((rt_int *)(v918).p)[y_ix1(v918, ((*(yR105 *)y_deref(F.p3479))).f_name)], INT64_C(5)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub(((rt_int *)(v920).p)[y_ix1(v920, ((*(yR105 *)y_deref(F.p3479))).f_name)], INT64_C(5)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v8702 = yr1061_T(y_str("OUT_OF_RANGE OVERFLOW ZERO_DIVIDE INVALID_POINTER FIXED_NOT_REPRESENTABLE TOO_MANY_PROCESS_INSTANCES TOO_LITTLE_LOCAL_STORAGE ADDRESS_VIOLATION UNINITIALIZED ", 158));
F.lo8714 = INT64_C(1);
F.hi8715 = ((rt_int *)(v920).p)[y_ix1(v920, F.v8702)];
{ rt_int hi8719 = F.hi8715;
for (rt_int i8718 = F.lo8714; i8718 <= hi8719; i8718++) { F.c_8717 = i8718; Y_TICK();
if ((yr1103_TChar(F.v8702, y_range(F.c_8717, INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == 32)) {
if ((yr1068_Intern(y_range(y_add(((rt_int *)(v918).p)[y_ix1(v918, F.v8702)], (y_sub(F.v8704, INT64_C(1)))), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub(F.c_8717, F.v8704), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))) == F.v8697)) {
F.v8699 = 1;
}
F.v8704 = y_range(y_add(F.c_8717, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (i8718 == hi8719) break;
}}
if ((!F.v8699)) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3479))).f_line, F.v8697, y_str(" is not a trap of this implementation (XIV.X.3)", 47));
}
if ((((!(v1279 == INT64_C(0)))) || ((!(v1273 == INT64_C(2)))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3479))).f_line, ((*(yR105 *)y_deref(F.p3479))).f_name, y_str(": a trap handler is declared in the outermost scope of a program (XIV.X.3)", 74));
}
if ((((!(((*(yR125 *)y_deref(F.p3478))).f_nparams == INT64_C(0)))) || ((!(((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.p3478))).f_ret))).f_kind == v852))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3479))).f_line, ((*(yR105 *)y_deref(F.p3479))).f_name, y_str(": a trap handler of this implementation is a procedure without parameters (XIV.X.3)", 83));
}
yr1026_SB();
yr1037_SA(y_str("y_trap_install(rt_exc(", 22));
yr1031_SC(34);
yr1044_ST(F.v8697);
yr1031_SC(34);
yr1037_SA(y_str("), ", 3));
yr1044_ST(((*(yR125 *)y_deref(F.p3478))).f_cname);
yr1037_SA(y_str(");", 2));
yr1132_Emit(yr1056_SE());
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3484_DeclType(void * a_p3485) {
struct yf3486 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3485 = a_p3485;
if ((((*(yR120 *)y_deref(F.p3485))).f_cls == v900)) {
{ rt_int rv8741 = yr2456_CType(((*(yR120 *)y_deref(F.p3485))).f_rep);
y_use = F.yu; return rv8741; }
}
{ rt_int rv8742 = yr3471_ParamCType(F.p3485);
y_use = F.yu; return rv8742; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3490_RoutineHeader(void * a_p3491, rt_int a_p3492) {
struct yf3493 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3491 = a_p3491;
F.p3492 = a_p3492;
F.v8763 = 1;
F.v8747 = yr2253_NewSym(F.p3492, ((*(yR105 *)y_deref(F.p3491))).f_name);
((*(yR125 *)y_deref(F.v8747))).f_decl = F.p3491;
((*(yR125 *)y_deref(F.v8747))).f_func = (((*(yR105 *)y_deref(F.p3491))).f_flag == INT64_C(1));
((*(yR125 *)y_deref(F.v8747))).f_level = y_range(y_add(v1279, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((*(yR125 *)y_deref(F.v8747))).f_cname = yr3459_RoutineCName(((*(yR105 *)y_deref(F.p3491))).f_name);
if ((!(((*(yR105 *)y_deref(F.p3491))).f_b == ((void *)0)))) {
((*(yR125 *)y_deref(F.v8747))).f_ret = yr2638_MakeRep(((*(yR105 *)y_deref(F.p3491))).f_b, INT64_C(0), 0);
yr2497_CheckRepresented(((*(yR125 *)y_deref(F.v8747))).f_ret, ((*(yR105 *)y_deref(F.p3491))).f_line);
} else {
((*(yR125 *)y_deref(F.v8747))).f_ret = v1348;
if (((*(yR125 *)y_deref(F.v8747))).f_func) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3491))).f_line, ((*(yR105 *)y_deref(F.p3491))).f_name, y_str(": a FUNCTION has a RETURNS clause (X.A)", 39));
}
}
F.v8757 = ((void *)0);
F.v8751 = ((*(yR105 *)y_deref(F.p3491))).f_a;
while ((!(F.v8751 == ((void *)0)))) {
Y_TICK();
F.v8759 = yr3465_FormalRep(((*(yR105 *)y_deref(F.v8751))).f_b);
if ((((*(yR125 *)y_deref(F.v8747))).f_func && ((!(((*(yR105 *)y_deref(F.v8751))).f_ival == v897))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.v8751))).f_line, ((*(yR105 *)y_deref(F.p3491))).f_name, y_str(": the parameters of a FUNCTION are CONST (X.A.2)", 48));
}
if ((((F.p3492 == v885)) && ((((*(yR105 *)y_deref(F.v8751))).f_ival == v900)))) {
yr1186_FailN(((*(yR105 *)y_deref(F.v8751))).f_line, ((*(yR105 *)y_deref(F.p3491))).f_name, y_str(": a process has no OUT parameters", 33));
}
F.v8753 = ((*(yR105 *)y_deref(F.v8751))).f_a;
while ((!(F.v8753 == ((void *)0)))) {
Y_TICK();
({ F.v8755 = y_new(sizeof(yR120)); });
(*(yR120 *)y_deref(F.v8755)) = ((yR120){ .f_name = ((*(yR105 *)y_deref(F.v8753))).f_name, .f_cls = ((*(yR105 *)y_deref(F.v8751))).f_ival, .f_rep = F.v8759, .f_cname = yr1200_Fresh(y_str("p", 1)), .f_next = ((void *)0), .f_at = INT64_C(-1), .f_path = INT64_C(0) });
if ((!(((*(yR105 *)y_deref(F.v8753))).f_a == ((void *)0)))) {
((*(yR120 *)y_deref(F.v8755))).f_at = yr2760_AtAddress(((*(yR105 *)y_deref(F.v8753))).f_a);
}
if ((F.v8757 == ((void *)0))) {
((*(yR125 *)y_deref(F.v8747))).f_params = F.v8755;
} else {
((*(yR120 *)y_deref(F.v8757))).f_next = F.v8755;
}
F.v8757 = F.v8755;
((*(yR125 *)y_deref(F.v8747))).f_nparams = y_range(y_add(((*(yR125 *)y_deref(F.v8747))).f_nparams, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v8753 = ((*(yR105 *)y_deref(F.v8753))).f_next;
}
F.v8751 = ((*(yR105 *)y_deref(F.v8751))).f_next;
}
F.v8749 = yr2283_Find(((*(yR105 *)y_deref(F.p3491))).f_name);
if ((!(F.v8749 == ((void *)0)))) {
F.v8749 = yr2388_Real(F.v8749);
}
if ((((((*(yR105 *)y_deref(F.p3491))).f_ival == INT64_C(0))) && ((!(F.v8749 == ((void *)0)))))) {
if ((((*(yR125 *)y_deref(F.v8749))).f_kind == v891)) {
yr1164_Warn(((*(yR105 *)y_deref(F.p3491))).f_line, yr3350_Join(((*(yR105 *)y_deref(F.p3491))).f_name, yr1061_T(y_str(" hides the system routine of that name (X.A.1)", 46)), INT64_C(0)));
}
}
if (((((!(((*(yR105 *)y_deref(F.p3491))).f_ival == INT64_C(0)))) && ((!(F.v8749 == ((void *)0))))) && ((((*(yR125 *)y_deref(F.v8749))).f_kind == v876)))) {
((*(yR125 *)y_deref(F.v8747))).f_alt = F.v8749;
if ((!(((((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.v8749))).f_ret))).f_kind == v852)) == ((((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.v8747))).f_ret))).f_kind == v852))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3491))).f_line, ((*(yR105 *)y_deref(F.p3491))).f_name, y_str(": a value-returning routine is extended or replaced only by one, a procedure only by a procedure (X.A.1)", 104));
}
if ((((((*(yR105 *)y_deref(F.p3491))).f_ival == v339)) && ((!(yr3497_SameSignature(F.v8747, F.v8749) == ((void *)0)))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3491))).f_line, ((*(yR105 *)y_deref(F.p3491))).f_name, y_str(" EXTENDS a definition for the same parameter types: use REPLACES", 64));
}
if ((((((*(yR105 *)y_deref(F.p3491))).f_ival == v435)) && ((yr3497_SameSignature(F.v8747, F.v8749) == ((void *)0))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3491))).f_line, ((*(yR105 *)y_deref(F.p3491))).f_name, y_str(" REPLACES no definition for these parameter types", 49));
}
}
((*(yR105 *)y_deref(F.p3491))).f_sym = F.v8747;
yr2355_Define(F.v8747, ((*(yR105 *)y_deref(F.p3491))).f_line);
if ((((!(v1663 == INT64_C(0)))) && yr1088_TEq(v1663, yr1061_T(y_str("CompilerStatus", 14))))) {
if (yr1088_TEq(((*(yR105 *)y_deref(F.p3491))).f_name, yr1061_T(y_str("SUPPRESS_TRAP", 13)))) {
((*(yR125 *)y_deref(F.v8747))).f_mval = v1489;
} else if (yr1088_TEq(((*(yR105 *)y_deref(F.p3491))).f_name, yr1061_T(y_str("RESTORE_TRAP", 12)))) {
((*(yR125 *)y_deref(F.v8747))).f_mval = v1492;
} else if (yr1088_TEq(((*(yR105 *)y_deref(F.p3491))).f_name, yr1061_T(y_str("TRAP_SUPPRESSED", 15)))) {
((*(yR125 *)y_deref(F.v8747))).f_mval = v1495;
}
}
if ((((((*(yR105 *)y_deref(F.p3491))).f_ival == v435)) && yr1095_TStarts(((*(yR105 *)y_deref(F.p3491))).f_name, y_str("TRAP_", 5)))) {
yr3477_InstallTrap(F.v8747, F.p3491);
}
F.v8751 = yr1939_NewNode(v669, ((*(yR105 *)y_deref(F.p3491))).f_line);
((*(yR105 *)y_deref(F.v8751))).f_sym = F.v8747;
((*(yR105 *)y_deref(F.v8751))).f_next = v1666;
v1666 = F.v8751;
((rt_int *)(v1291).p)[y_ix1(v1291, ((*(yR125 *)y_deref(F.v8747))).f_level)] = yr1200_Fresh(y_str("yf", 2));
((*(yR125 *)y_deref(F.v8747))).f_members = yr2253_NewSym(v891, ((rt_int *)(v1291).p)[y_ix1(v1291, ((*(yR125 *)y_deref(F.v8747))).f_level)]);
yr1026_SB();
yr1037_SA(y_str("struct ", 7));
yr1044_ST(((rt_int *)(v1291).p)[y_ix1(v1291, ((*(yR125 *)y_deref(F.v8747))).f_level)]);
yr1037_SA(y_str(";", 1));
F.v8761 = yr1056_SE();
yr1110_Put(&v978, F.v8761);
yr1026_SB();
yr1037_SA(y_str("static ", 7));
if ((F.p3492 == v885)) {
yr1037_SA(y_str("void", 4));
} else {
yr1044_ST(yr2456_CType(((*(yR125 *)y_deref(F.v8747))).f_ret));
}
yr1037_SA(y_str(" ", 1));
yr1044_ST(((*(yR125 *)y_deref(F.v8747))).f_cname);
yr1037_SA(y_str("(", 1));
F.v8761 = yr1056_SE();
if ((F.p3492 == v885)) {
F.v8761 = yr3350_Join(F.v8761, yr1061_T(y_str("void *arg", 9)), INT64_C(0));
F.v8763 = 0;
} else if ((v1279 > INT64_C(0))) {
yr1026_SB();
yr1044_ST(F.v8761);
yr1037_SA(y_str("struct ", 7));
yr1044_ST(((rt_int *)(v1291).p)[y_ix1(v1291, v1279)]);
yr1037_SA(y_str(" *up", 4));
F.v8761 = yr1056_SE();
F.v8763 = 0;
}
F.v8755 = ((*(yR125 *)y_deref(F.v8747))).f_params;
while ((((!(F.v8755 == ((void *)0)))) && ((!(F.p3492 == v885))))) {
Y_TICK();
yr1026_SB();
yr1044_ST(F.v8761);
if ((!F.v8763)) {
yr1037_SA(y_str(", ", 2));
}
F.v8763 = 0;
yr1044_ST(yr3471_ParamCType(F.v8755));
yr1037_SA(y_str(" a_", 3));
yr1044_ST(((*(yR120 *)y_deref(F.v8755))).f_cname);
F.v8761 = yr1056_SE();
F.v8755 = ((*(yR120 *)y_deref(F.v8755))).f_next;
}
if (F.v8763) {
F.v8761 = yr3350_Join(F.v8761, yr1061_T(y_str("void", 4)), INT64_C(0));
}
F.v8761 = yr3350_Join(F.v8761, yr1061_T(y_str(")", 1)), INT64_C(0));
((*(yR125 *)y_deref(F.v8747))).f_mnext = yr2253_NewSym(v891, F.v8761);
yr1110_Put(&v986, yr3350_Join(F.v8761, yr1061_T(y_str(";", 1)), INT64_C(0)));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3497_SameSignature(void * a_p3498, void * a_p3499) {
struct yf3500 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3498 = a_p3498;
F.p3499 = a_p3499;
F.v8818 = F.p3499;
while ((!(F.v8818 == ((void *)0)))) {
Y_TICK();
if ((((*(yR125 *)y_deref(F.v8818))).f_nparams == ((*(yR125 *)y_deref(F.p3498))).f_nparams)) {
F.v8824 = 1;
F.v8820 = ((*(yR125 *)y_deref(F.p3498))).f_params;
F.v8822 = ((*(yR125 *)y_deref(F.v8818))).f_params;
while ((!(F.v8820 == ((void *)0)))) {
Y_TICK();
if ((!yr2474_SameType(((*(yR120 *)y_deref(F.v8820))).f_rep, ((*(yR120 *)y_deref(F.v8822))).f_rep))) {
F.v8824 = 0;
}
F.v8820 = ((*(yR120 *)y_deref(F.v8820))).f_next;
F.v8822 = ((*(yR120 *)y_deref(F.v8822))).f_next;
}
if (F.v8824) {
{ void * rv8827 = F.v8818;
y_use = F.yu; return rv8827; }
}
}
F.v8818 = ((*(yR125 *)y_deref(F.v8818))).f_alt;
}
{ void * rv8828 = ((void *)0);
y_use = F.yu; return rv8828; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3504_RoutineBody(void * a_p3505) {
struct yf3506 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3505 = a_p3505;
F.v8832 = ((*(yR105 *)y_deref(F.p3505))).f_sym;
F.v8834 = v996;
F.v8836 = v998;
F.v8838 = v1279;
F.v8840 = v1550;
F.v8842 = v1553;
F.v8844 = v1578;
F.v8846 = v1592;
F.v8848 = v1619;
F.v8850 = v1622;
F.v8852 = v1625;
F.v8854 = v1654;
v996 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v998 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
F.v8864 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
v1279 = ((*(yR125 *)y_deref(F.v8832))).f_level;
F.v8860 = ((*(yR125 *)y_deref(((*(yR125 *)y_deref(F.v8832))).f_members))).f_name;
((rt_int *)(v1291).p)[y_ix1(v1291, v1279)] = F.v8860;
v1553 = v1550;
v1622 = v1619;
v1592 = INT64_C(0);
v1625 = F.v8832;
v1654 = 0;
yr2260_OpenScope(0);
v1328 = y_range(y_add(v1328, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1324).p)[y_ix1(v1324, v1328)] = ((*(yR125 *)y_deref(F.v8832))).f_depth;
((rt_int *)(v1326).p)[y_ix1(v1326, v1328)] = ((*(yR125 *)y_deref(F.v8832))).f_serial;
F.v8856 = ((*(yR125 *)y_deref(F.v8832))).f_params;
while ((!(F.v8856 == ((void *)0)))) {
Y_TICK();
if ((((*(yR120 *)y_deref(F.v8856))).f_cls == v897)) {
F.v8858 = yr2253_NewSym(v864, ((*(yR120 *)y_deref(F.v8856))).f_name);
} else {
F.v8858 = yr2253_NewSym(v861, ((*(yR120 *)y_deref(F.v8856))).f_name);
}
((*(yR125 *)y_deref(F.v8858))).f_rep = ((*(yR120 *)y_deref(F.v8856))).f_rep;
((*(yR125 *)y_deref(F.v8858))).f_level = v1279;
((*(yR125 *)y_deref(F.v8858))).f_cname = ((*(yR120 *)y_deref(F.v8856))).f_cname;
if ((((*(yR125 *)y_deref(F.v8832))).f_kind == v885)) {
((*(yR125 *)y_deref(F.v8858))).f_byref = (((((*(yR120 *)y_deref(F.v8856))).f_cls == v903)) && ((!(((*(yR110 *)y_deref(((*(yR120 *)y_deref(F.v8856))).f_rep))).f_kind == v855))));
yr2375_DeclStorage(yr3471_ParamCType(F.v8856), ((*(yR120 *)y_deref(F.v8856))).f_cname);
} else if ((((*(yR110 *)y_deref(((*(yR120 *)y_deref(F.v8856))).f_rep))).f_kind == v855)) {
yr2375_DeclStorage(yr1061_T(y_str("yspace", 6)), ((*(yR120 *)y_deref(F.v8856))).f_cname);
yr1132_Emit(yr3350_Join(yr1061_T(y_str("F.", 2)), ((*(yR120 *)y_deref(F.v8856))).f_cname, yr3350_Join(yr1061_T(y_str(" = a_", 5)), ((*(yR120 *)y_deref(F.v8856))).f_cname, yr1061_T(y_str(";", 1)))));
} else if ((((*(yR120 *)y_deref(F.v8856))).f_cls == v903)) {
((*(yR125 *)y_deref(F.v8858))).f_byref = 1;
yr2375_DeclStorage(yr3471_ParamCType(F.v8856), ((*(yR120 *)y_deref(F.v8856))).f_cname);
yr1132_Emit(yr3350_Join(yr1061_T(y_str("F.", 2)), ((*(yR120 *)y_deref(F.v8856))).f_cname, yr3350_Join(yr1061_T(y_str(" = a_", 5)), ((*(yR120 *)y_deref(F.v8856))).f_cname, yr1061_T(y_str(";", 1)))));
} else if ((((*(yR120 *)y_deref(F.v8856))).f_cls == v900)) {
yr2375_DeclStorage(yr2456_CType(((*(yR120 *)y_deref(F.v8856))).f_rep), ((*(yR120 *)y_deref(F.v8856))).f_cname);
yr2375_DeclStorage(yr3471_ParamCType(F.v8856), yr3350_Join(((*(yR120 *)y_deref(F.v8856))).f_cname, yr1061_T(y_str("_o", 2)), INT64_C(0)));
yr1132_Emit(yr3350_Join(yr1061_T(y_str("F.", 2)), ((*(yR120 *)y_deref(F.v8856))).f_cname, yr3350_Join(yr1061_T(y_str("_o = a_", 7)), ((*(yR120 *)y_deref(F.v8856))).f_cname, yr1061_T(y_str(";", 1)))));
if ((yr2431_Deep(((*(yR120 *)y_deref(F.v8856))).f_rep) && ((!(((*(yR110 *)y_deref(((*(yR120 *)y_deref(F.v8856))).f_rep))).f_kind == v843))))) {
yr1132_Emit(yr3350_Join(yr1061_T(y_str("y_init(", 7)), yr2462_DescOf(((*(yR120 *)y_deref(F.v8856))).f_rep), yr3350_Join(yr1061_T(y_str(", &F.", 5)), ((*(yR120 *)y_deref(F.v8856))).f_cname, yr1061_T(y_str(");", 2)))));
}
if ((((*(yR110 *)y_deref(((*(yR120 *)y_deref(F.v8856))).f_rep))).f_kind == v843)) {
yr1132_Emit(yr3350_Join(yr1061_T(y_str("F.", 2)), ((*(yR120 *)y_deref(F.v8856))).f_cname, yr3350_Join(yr1061_T(y_str(" = *a_", 6)), ((*(yR120 *)y_deref(F.v8856))).f_cname, yr1061_T(y_str(";", 1)))));
}
} else {
yr2375_DeclStorage(yr2456_CType(((*(yR120 *)y_deref(F.v8856))).f_rep), ((*(yR120 *)y_deref(F.v8856))).f_cname);
yr1132_Emit(yr3350_Join(yr1061_T(y_str("F.", 2)), ((*(yR120 *)y_deref(F.v8856))).f_cname, yr3350_Join(yr1061_T(y_str(" = a_", 5)), ((*(yR120 *)y_deref(F.v8856))).f_cname, yr1061_T(y_str(";", 1)))));
}
if ((((*(yR120 *)y_deref(F.v8856))).f_at >= INT64_C(0))) {
F.v8862 = yr2766_StoreAt(yr3484_DeclType(F.v8856), ((*(yR120 *)y_deref(F.v8856))).f_at);
yr1132_Emit(yr3350_Join(F.v8862, yr1061_T(y_str(" = F.", 5)), yr3350_Join(((*(yR120 *)y_deref(F.v8856))).f_cname, yr1061_T(y_str(";", 1)), INT64_C(0))));
((*(yR125 *)y_deref(F.v8858))).f_level = INT64_C(0);
((*(yR125 *)y_deref(F.v8858))).f_cname = F.v8862;
((*(yR125 *)y_deref(F.v8858))).f_at = ((*(yR120 *)y_deref(F.v8856))).f_at;
((*(yR120 *)y_deref(F.v8856))).f_path = F.v8862;
}
yr2355_Define(F.v8858, ((*(yR105 *)y_deref(F.p3505))).f_line);
F.v8856 = ((*(yR120 *)y_deref(F.v8856))).f_next;
}
yr3733_EnterMonitor(F.v8832);
yr3577_Declarations(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p3505))).f_c))).f_a);
if (yr3295_BlockFalls(((*(yR105 *)y_deref(F.p3505))).f_c)) {
if ((((*(yR125 *)y_deref(F.v8832))).f_kind == v885)) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3505))).f_line, ((*(yR105 *)y_deref(F.p3505))).f_name, y_str(": control reaches the end of the process, which ends with TERMINATE_PROCESS (IX.A.7)", 84));
} else {
yr1186_FailN(((*(yR105 *)y_deref(F.p3505))).f_line, ((*(yR105 *)y_deref(F.p3505))).f_name, y_str(": control reaches the end of the routine, which ends with RETURN (IX.A.6)", 73));
}
}
yr3255_BlockStatements(((*(yR105 *)y_deref(F.p3505))).f_c);
if ((((*(yR125 *)y_deref(F.v8832))).f_kind == v885)) {
yr1138_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
} else {
yr1138_EmitS(y_str("rt_raise(Y_X_NO_RETURN);", 24));
}
yr3709_AwaitProcesses();
yr2272_CloseScope();
v1328 = y_range(y_sub(v1328, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr1026_SB();
yr1037_SA(y_str("struct ", 7));
yr1044_ST(F.v8860);
yr1037_SA(y_str(" {", 2));
if ((v1279 > INT64_C(1))) {
yr1037_SA(y_str(" struct ", 8));
yr1044_ST(((rt_int *)(v1291).p)[y_ix1(v1291, y_sub(v1279, INT64_C(1)))]);
yr1037_SA(y_str(" *up;", 5));
} else {
yr1037_SA(y_str(" void *up;", 10));
}
F.v8862 = yr1056_SE();
yr1110_Put(&v982, F.v8862);
yr1125_Append(&v982, &v998);
yr1117_PutS(&v982, y_str("rt_int yu;", 10));
yr1117_PutS(&v982, y_str("};", 2));
yr1110_Put(&F.v8864, yr3350_Join(((*(yR125 *)y_deref(((*(yR125 *)y_deref(F.v8832))).f_mnext))).f_name, yr1061_T(y_str(" {", 2)), INT64_C(0)));
if (v1654) {
yr1117_PutS(&F.v8864, y_str("volatile", 8));
}
yr1110_Put(&F.v8864, yr3350_Join(yr1061_T(y_str("struct ", 7)), F.v8860, yr1061_T(y_str(" F;", 3))));
yr1117_PutS(&F.v8864, y_str("memset((void *)&F, 0, sizeof F);", 32));
if ((((*(yR125 *)y_deref(F.v8832))).f_kind == v885)) {
yr1110_Put(&F.v8864, yr3350_Join(yr1061_T(y_str("F = *(struct ", 13)), F.v8860, yr1061_T(y_str(" *)arg;", 7))));
} else if ((v1279 > INT64_C(1))) {
yr1117_PutS(&F.v8864, y_str("F.up = up;", 10));
}
yr1117_PutS(&F.v8864, y_str("F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));", 50));
yr1125_Append(&F.v8864, &v996);
yr1117_PutS(&F.v8864, y_str("}", 1));
yr1125_Append(&v988, &F.v8864);
v996 = F.v8834;
v998 = F.v8836;
v1279 = F.v8838;
((rt_int *)(v1291).p)[y_ix1(v1291, v1279)] = yr1200_Fresh(y_str("unused", 6));
if ((!(F.v8852 == ((void *)0)))) {
((rt_int *)(v1291).p)[y_ix1(v1291, v1279)] = ((*(yR125 *)y_deref(((*(yR125 *)y_deref(F.v8852))).f_members))).f_name;
}
v1550 = F.v8840;
v1553 = F.v8842;
v1578 = F.v8844;
v1592 = F.v8846;
v1619 = F.v8848;
v1622 = F.v8850;
v1625 = F.v8852;
v1654 = F.v8854;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3510_DeclareStorage(void * a_p3511, void * a_p3512, rt_int a_p3513) {
struct yf3514 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3511 = a_p3511;
F.p3512 = a_p3512;
F.p3513 = a_p3513;
((*(yR125 *)y_deref(F.p3511))).f_rep = F.p3512;
((*(yR125 *)y_deref(F.p3511))).f_level = v1279;
((*(yR125 *)y_deref(F.p3511))).f_cname = yr1200_Fresh(y_str("v", 1));
yr2375_DeclStorage(yr2456_CType(F.p3512), ((*(yR125 *)y_deref(F.p3511))).f_cname);
yr3527_InitStorage(F.p3511, F.p3512, F.p3513);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3518_DeclareAt(void * a_p3519, void * a_p3520, rt_int a_p3521, rt_int a_p3522) {
struct yf3523 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3519 = a_p3519;
F.p3520 = a_p3520;
F.p3521 = a_p3521;
F.p3522 = a_p3522;
((*(yR125 *)y_deref(F.p3519))).f_rep = F.p3520;
((*(yR125 *)y_deref(F.p3519))).f_level = INT64_C(0);
((*(yR125 *)y_deref(F.p3519))).f_at = F.p3521;
((*(yR125 *)y_deref(F.p3519))).f_cname = yr2766_StoreAt(yr2456_CType(F.p3520), F.p3521);
yr3527_InitStorage(F.p3519, F.p3520, F.p3522);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3527_InitStorage(void * a_p3528, void * a_p3529, rt_int a_p3530) {
struct yf3531 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3528 = a_p3528;
F.p3529 = a_p3529;
F.p3530 = a_p3530;
if (yr2431_Deep(F.p3529)) {
yr1132_Emit(yr3350_Join(yr1061_T(y_str("y_init(", 7)), yr2462_DescOf(F.p3529), yr3350_Join(yr1061_T(y_str(", &", 3)), yr2382_SymPath(F.p3528), yr1061_T(y_str(");", 2)))));
}
if ((((*(yR110 *)y_deref(F.p3529))).f_kind == v834)) {
yr1132_Emit(yr3350_Join(yr2382_SymPath(F.p3528), yr1061_T(y_str(" = y_set_new(", 13)), yr3350_Join(yr2537_LoText(((*(yR110 *)y_deref(F.p3529))).f_elem), yr1061_T(y_str(", ", 2)), yr3350_Join(yr2543_HiText(((*(yR110 *)y_deref(F.p3529))).f_elem), yr1061_T(y_str(");", 2)), INT64_C(0)))));
}
if ((((*(yR110 *)y_deref(F.p3529))).f_kind == v837)) {
yr3750_DeclareSignal(F.p3528, F.p3530);
}
if (yr2444_HoldsSignal(F.p3529)) {
yr3757_DeclareSignalArray(F.p3528, F.p3530);
}
if ((((*(yR110 *)y_deref(F.p3529))).f_kind == v840)) {
yr1132_Emit(yr3350_Join(yr1061_T(y_str("rt_lock_init(&", 14)), yr2382_SymPath(F.p3528), yr1061_T(y_str(");", 2))));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3535_SimpleDecl(void * a_p3536) {
struct yf3537 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3536 = a_p3536;
F.v8953 = ((*(yR105 *)y_deref(F.p3536))).f_kind;
if ((((F.v8953 == v639)) || ((F.v8953 == v642)))) {
F.v8955 = yr2638_MakeRep(((*(yR105 *)y_deref(F.p3536))).f_b, INT64_C(0), 0);
yr2497_CheckRepresented(F.v8955, ((*(yR105 *)y_deref(F.p3536))).f_line);
if ((((F.v8953 == v639)) && yr2450_NonAssignable(F.v8955))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3536))).f_line, y_str("signals, files and semaphores, and what holds them, are variables (VII.B)", 73));
}
F.v8959 = ((*(yR105 *)y_deref(F.p3536))).f_a;
while ((!(F.v8959 == ((void *)0)))) {
Y_TICK();
if ((F.v8953 == v639)) {
F.v8961 = yr2253_NewSym(v864, ((*(yR105 *)y_deref(F.v8959))).f_name);
} else {
F.v8961 = yr2253_NewSym(v861, ((*(yR105 *)y_deref(F.v8959))).f_name);
}
if ((((!(((*(yR105 *)y_deref(F.v8959))).f_a == ((void *)0)))) && ((!(((*(yR110 *)y_deref(F.v8955))).f_kind == v837))))) {
yr3518_DeclareAt(F.v8961, F.v8955, yr2760_AtAddress(((*(yR105 *)y_deref(F.v8959))).f_a), ((*(yR105 *)y_deref(F.p3536))).f_line);
} else {
yr3510_DeclareStorage(F.v8961, F.v8955, ((*(yR105 *)y_deref(F.p3536))).f_line);
}
if ((!(((*(yR105 *)y_deref(F.p3536))).f_c == ((void *)0)))) {
yr2973_Expr(((*(yR105 *)y_deref(F.p3536))).f_c, F.v8955, &F.v8963, &F.v8957);
if ((F.v8953 == v639)) {
yr2924_Store(yr2382_SymPath(F.v8961), F.v8955, F.v8963, F.v8957, ((*(yR105 *)y_deref(F.p3536))).f_line);
} else {
F.v8965 = yr3173_UserAssign(yr2382_SymPath(F.v8961), F.v8955, F.v8963, F.v8957, ((*(yR105 *)y_deref(F.p3536))).f_line);
if ((!(F.v8965 == INT64_C(0)))) {
yr1132_Emit(F.v8965);
} else {
if ((((*(yR110 *)y_deref(F.v8955))).f_opaque && (((y_mod(((*(yR110 *)y_deref(F.v8955))).f_opaqueops, INT64_C(2))) == INT64_C(0))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3536))).f_line, ((*(yR110 *)y_deref(F.v8955))).f_tname, y_str(" is opaque here: := is not exported to initialize it (X.B.3)", 60));
}
yr2924_Store(yr2382_SymPath(F.v8961), F.v8955, F.v8963, F.v8957, ((*(yR105 *)y_deref(F.p3536))).f_line);
}
}
if ((F.v8953 == v639)) {
yr2825_Manifest(((*(yR105 *)y_deref(F.p3536))).f_c, &F.v8967, &F.v8969);
if ((F.v8967 && yr2407_IsDiscrete(F.v8955))) {
((*(yR125 *)y_deref(F.v8961))).f_hasmv = 1;
((*(yR125 *)y_deref(F.v8961))).f_mval = F.v8969;
}
}
}
if ((!(((*(yR105 *)y_deref(F.v8959))).f_a == ((void *)0)))) {
yr3548_AtLocation(F.v8961, ((*(yR105 *)y_deref(F.v8959))).f_a);
}
yr2355_Define(F.v8961, ((*(yR105 *)y_deref(F.v8959))).f_line);
F.v8959 = ((*(yR105 *)y_deref(F.v8959))).f_next;
}
y_use = F.yu; return;
}
if ((F.v8953 == v651)) {
F.v8955 = yr2638_MakeRep(((*(yR105 *)y_deref(F.p3536))).f_b, ((*(yR105 *)y_deref(F.p3536))).f_name, 0);
yr2497_CheckRepresented(F.v8955, ((*(yR105 *)y_deref(F.p3536))).f_line);
F.v8961 = yr2253_NewSym(v867, ((*(yR105 *)y_deref(F.p3536))).f_name);
((*(yR125 *)y_deref(F.v8961))).f_rep = F.v8955;
yr2355_Define(F.v8961, ((*(yR105 *)y_deref(F.p3536))).f_line);
yr2661_ResolvePending(((*(yR105 *)y_deref(F.p3536))).f_name, F.v8955);
yr3541_NoteAlphabet(F.p3536, F.v8955);
y_use = F.yu; return;
}
if ((F.v8953 == v648)) {
F.v8955 = yr2638_MakeRep(((*(yR105 *)y_deref(F.p3536))).f_b, ((*(yR105 *)y_deref(F.p3536))).f_name, 1);
if ((((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p3536))).f_b))).f_kind == v672)) {
F.v8955 = yr2401_CopyRep(F.v8955);
((*(yR110 *)y_deref(F.v8955))).f_tid = yr2632_NewTid(((*(yR105 *)y_deref(F.p3536))).f_name);
((*(yR110 *)y_deref(F.v8955))).f_tname = ((*(yR105 *)y_deref(F.p3536))).f_name;
if (((((((*(yR110 *)y_deref(F.v8955))).f_kind == v804)) || ((((*(yR110 *)y_deref(F.v8955))).f_kind == v807))) || ((((*(yR110 *)y_deref(F.v8955))).f_kind == v810)))) {
if ((((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p3536))).f_b))).f_a == ((void *)0))) {
((*(yR110 *)y_deref(F.v8955))).f_abstract = 1;
}
}
}
F.v8961 = yr2253_NewSym(v870, ((*(yR105 *)y_deref(F.p3536))).f_name);
((*(yR125 *)y_deref(F.v8961))).f_rep = F.v8955;
yr2355_Define(F.v8961, ((*(yR105 *)y_deref(F.p3536))).f_line);
yr2661_ResolvePending(((*(yR105 *)y_deref(F.p3536))).f_name, F.v8955);
yr3541_NoteAlphabet(F.p3536, F.v8955);
y_use = F.yu; return;
}
if ((F.v8953 == v645)) {
F.v8959 = ((*(yR105 *)y_deref(F.p3536))).f_a;
while ((!(F.v8959 == ((void *)0)))) {
Y_TICK();
F.v8961 = yr2253_NewSym(v888, ((*(yR105 *)y_deref(F.v8959))).f_name);
((*(yR125 *)y_deref(F.v8961))).f_level = v1279;
((*(yR125 *)y_deref(F.v8961))).f_cname = yr1200_Fresh(y_str("lab", 3));
yr2355_Define(F.v8961, ((*(yR105 *)y_deref(F.v8959))).f_line);
F.v8959 = ((*(yR105 *)y_deref(F.v8959))).f_next;
}
y_use = F.yu; return;
}
yr1178_FailS(((*(yR105 *)y_deref(F.p3536))).f_line, y_str("not a simple declaration", 24));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3541_NoteAlphabet(void * a_p3542, void * a_p3543) {
struct yf3544 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3542 = a_p3542;
F.p3543 = a_p3543;
if ((((((*(yR110 *)y_deref(F.p3543))).f_kind == v819)) && ((((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p3542))).f_b))).f_kind == v678)))) {
F.v8988 = yr1939_NewNode(v669, ((*(yR105 *)y_deref(F.p3542))).f_line);
((*(yR105 *)y_deref(F.v8988))).f_name = ((*(yR105 *)y_deref(F.p3542))).f_name;
((*(yR105 *)y_deref(F.v8988))).f_rep = F.p3543;
((*(yR105 *)y_deref(F.v8988))).f_next = v1501;
v1501 = F.v8988;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3548_AtLocation(void * a_p3549, void * a_p3550) {
struct yf3551 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3549 = a_p3549;
F.p3550 = a_p3550;
if ((((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.p3549))).f_rep))).f_kind == v837)) {
yr3764_DeviceSignal(F.p3549, F.p3550);
y_use = F.yu; return;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3555_Defer(void * a_p3556, rt_int a_p3557, void * a_p3558, rt_int a_p3559) {
struct yf3560 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3556 = a_p3556;
F.p3557 = a_p3557;
F.p3558 = a_p3558;
F.p3559 = a_p3559;
F.v8998 = v1273;
if ((v1796 >= INT64_C(20000))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3556))).f_line, y_str("too many routines for this implementation", 41));
}
v1796 = y_range(y_add(v1796, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1704).p)[y_ix1(v1704, v1796)] = F.p3556;
((rt_int *)(v1715).p)[y_ix1(v1715, v1796)] = F.p3557;
((rt_int *)(v1726).p)[y_ix1(v1726, v1796)] = v1276;
((void * *)(v1737).p)[y_ix1(v1737, v1796)] = v1802;
((void * *)(v1748).p)[y_ix1(v1748, v1796)] = F.p3558;
((rt_int *)(v1759).p)[y_ix1(v1759, v1796)] = F.p3559;
((rt_int *)(v1770).p)[y_ix1(v1770, v1796)] = v1660;
while (((*(yR130 *)y_deref(((void * *)(v1271).p)[y_ix1(v1271, F.v8998)]))).f_closed) {
Y_TICK();
F.v8998 = y_range(y_sub(F.v8998, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
((rt_int *)(v1781).p)[y_ix1(v1781, v1796)] = y_range(y_add(v1799, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1783).p)[y_ix1(v1783, v1796)] = y_range(y_sub(v1273, F.v8998), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo9011 = y_add(F.v8998, INT64_C(1));
F.hi9012 = v1273;
{ rt_int hi9016 = F.hi9012;
for (rt_int i9015 = F.lo9011; i9015 <= hi9016; i9015++) { F.c_9014 = i9015; Y_TICK();
v1799 = y_range(y_add(v1799, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1794).p)[y_ix1(v1794, v1799)] = ((void * *)(v1271).p)[y_ix1(v1271, F.c_9014)];
if (i9015 == hi9016) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3564_RunDeferred(rt_int a_p3565, rt_int a_p3566) {
struct yf3567 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3565 = a_p3565;
F.p3566 = a_p3566;
F.v9023 = y_range(y_add(F.p3565, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((F.v9023 <= v1796)) {
Y_TICK();
F.lo9036 = ((rt_int *)(v1781).p)[y_ix1(v1781, F.v9023)];
F.hi9037 = y_sub((y_add(((rt_int *)(v1781).p)[y_ix1(v1781, F.v9023)], ((rt_int *)(v1783).p)[y_ix1(v1783, F.v9023)])), INT64_C(1));
{ rt_int hi9041 = F.hi9037;
for (rt_int i9040 = F.lo9036; i9040 <= hi9041; i9040++) { F.c_9039 = i9040; Y_TICK();
yr2266_ReopenScope(((void * *)(v1794).p)[y_ix1(v1794, F.c_9039)]);
if (i9040 == hi9041) break;
}}
F.v9027 = v1276;
F.v9031 = v1802;
F.v9029 = v1660;
v1276 = ((rt_int *)(v1726).p)[y_ix1(v1726, F.v9023)];
v1802 = ((void * *)(v1737).p)[y_ix1(v1737, F.v9023)];
v1660 = ((rt_int *)(v1770).p)[y_ix1(v1770, F.v9023)];
if ((((rt_int *)(v1715).p)[y_ix1(v1715, F.v9023)] == INT64_C(1))) {
yr3504_RoutineBody(((void * *)(v1704).p)[y_ix1(v1704, F.v9023)]);
} else {
yr3571_ModuleInit(F.v9023);
}
v1276 = F.v9027;
v1802 = F.v9031;
v1660 = F.v9029;
F.lo9046 = INT64_C(1);
F.hi9047 = ((rt_int *)(v1783).p)[y_ix1(v1783, F.v9023)];
{ rt_int hi9051 = F.hi9047;
for (rt_int i9050 = F.lo9046; i9050 <= hi9051; i9050++) { F.c_9049 = i9050; Y_TICK();
yr2272_CloseScope();
if (i9050 == hi9051) break;
}}
F.v9023 = y_range(y_add(F.v9023, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
v1796 = F.p3565;
v1799 = F.p3566;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3571_ModuleInit(rt_int a_p3572) {
struct yf3573 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3572 = a_p3572;
F.v9057 = ((void * *)(v1704).p)[y_ix1(v1704, F.p3572)];
F.v9059 = v996;
F.v9061 = ((void * *)(v1748).p)[y_ix1(v1748, F.p3572)];
v996 = ((yR140){ .f_head = ((void *)0), .f_tail = ((void *)0) });
if (((rt_int *)(v1759).p)[y_ix1(v1759, F.p3572)]) {
yr1132_Emit(yr3350_Join(yr1061_T(y_str("y_mon_enter(", 12)), yr3727_MonitorPath(v1802), yr1061_T(y_str(");", 2))));
}
v1578 = y_range(y_add(v1578, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1565).p)[y_ix1(v1565, v1578)] = INT64_C(0);
((rt_int *)(v1576).p)[y_ix1(v1576, v1578)] = INT64_C(0);
yr3255_BlockStatements(((*(yR105 *)y_deref(F.v9057))).f_c);
v1578 = y_range(y_sub(v1578, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
if (((rt_int *)(v1759).p)[y_ix1(v1759, F.p3572)]) {
yr1132_Emit(yr3350_Join(yr1061_T(y_str("y_mon_leave(", 12)), yr3727_MonitorPath(v1802), yr1061_T(y_str(");", 2))));
}
if ((!((v996).f_head == ((void *)0)))) {
((*(yR135 *)y_deref((v996).f_tail))).f_next = ((*(yR135 *)y_deref(F.v9061))).f_next;
((*(yR135 *)y_deref(F.v9061))).f_next = (v996).f_head;
if (((F.v9059).f_tail == F.v9061)) {
(F.v9059).f_tail = (v996).f_tail;
}
}
v996 = F.v9059;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3577_Declarations(void * a_p3578) {
struct yf3579 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3578 = a_p3578;
F.v9075 = F.p3578;
F.v9077 = ((void * *)(v1302).p)[y_ix1(v1302, v1273)];
F.v9079 = v1796;
F.v9081 = v1799;
((void * *)(v1302).p)[y_ix1(v1302, v1273)] = F.p3578;
while ((!(F.v9075 == ((void *)0)))) {
Y_TICK();
v1000 = ((*(yR105 *)y_deref(F.v9075))).f_line;
((void * *)(v1313).p)[y_ix1(v1313, v1273)] = F.v9075;
if ((((((*(yR105 *)y_deref(F.v9075))).f_kind == v654)) || ((((*(yR105 *)y_deref(F.v9075))).f_kind == v666)))) {
if ((((*(yR105 *)y_deref(F.v9075))).f_sym == ((void *)0))) {
yr3583_DeclareRoutine(F.v9075);
}
} else if (((((*(yR105 *)y_deref(F.v9075))).f_kind == v624))) {
if ((((*(yR105 *)y_deref(F.v9075))).f_ival == INT64_C(0))) {
yr3685_CompileModule(F.v9075);
}
} else if ((((*(yR105 *)y_deref(F.v9075))).f_kind == v660)) {
yr3691_DeclareTemplate(F.v9075);
} else if ((((*(yR105 *)y_deref(F.v9075))).f_kind == v663)) {
yr3697_Instantiate(F.v9075);
} else {
yr3535_SimpleDecl(F.v9075);
}
F.v9075 = ((*(yR105 *)y_deref(F.v9075))).f_next;
}
((void * *)(v1313).p)[y_ix1(v1313, v1273)] = ((void *)0);
((void * *)(v1302).p)[y_ix1(v1302, v1273)] = F.v9077;
yr2668_CheckPending();
yr3648_ResolveLater(v1273);
if ((!((*(yR130 *)y_deref(((void * *)(v1271).p)[y_ix1(v1271, v1273)]))).f_closed)) {
yr3564_RunDeferred(F.v9079, F.v9081);
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3583_DeclareRoutine(void * a_p3584) {
struct yf3585 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3584 = a_p3584;
if ((((*(yR105 *)y_deref(F.p3584))).f_kind == v654)) {
yr3490_RoutineHeader(F.p3584, v876);
} else {
yr3490_RoutineHeader(F.p3584, v885);
}
if ((((*(yR105 *)y_deref(F.p3584))).f_kind == v666)) {
yr3703_DeclareProcess(F.p3584);
}
yr3555_Defer(F.p3584, INT64_C(1), ((void *)0), 0);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3589_Alias(rt_int a_p3590, void * a_p3591) {
struct yf3592 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3590 = a_p3590;
F.p3591 = a_p3591;
F.v9091 = yr2253_NewSym(v894, F.p3590);
((*(yR125 *)y_deref(F.v9091))).f_target = F.p3591;
((*(yR125 *)y_deref(F.v9091))).f_readonly = ((*(yR125 *)y_deref(F.p3591))).f_readonly;
{ void * rv9092 = F.v9091;
y_use = F.yu; return rv9092; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3596_AddLits(void * * a_p3597, void * a_p3598, rt_int a_p3599) {
struct yf3600 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3597 = a_p3597;
F.p3598 = a_p3598;
F.p3599 = a_p3599;
if ((((F.p3599 > INT64_C(8))) || ((*(yR110 *)y_deref(F.p3598))).f_opaque)) {
y_use = F.yu; return;
}
if ((((*(yR110 *)y_deref(F.p3598))).f_kind == v816)) {
F.v9098 = ((*(yR110 *)y_deref(F.p3598))).f_lits;
while ((!(F.v9098 == ((void *)0)))) {
Y_TICK();
F.v9100 = yr2348_FindLit(((*(yR105 *)y_deref(F.v9098))).f_name, F.p3598);
if ((!(F.v9100 == ((void *)0)))) {
F.v9100 = yr3589_Alias(((*(yR105 *)y_deref(F.v9098))).f_name, F.v9100);
((*(yR125 *)y_deref(F.v9100))).f_mnext = (*F.p3597);
(*F.p3597) = F.v9100;
}
F.v9098 = ((*(yR105 *)y_deref(F.v9098))).f_next;
}
} else if ((((*(yR110 *)y_deref(F.p3598))).f_kind == v825)) {
F.v9102 = ((*(yR110 *)y_deref(F.p3598))).f_fields;
while ((!(F.v9102 == ((void *)0)))) {
Y_TICK();
yr3596_AddLits(&(*F.p3597), ((*(yR115 *)y_deref(F.v9102))).f_rep, y_range(y_add(F.p3599, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v9102 = ((*(yR115 *)y_deref(F.v9102))).f_next;
}
} else if (((((((*(yR110 *)y_deref(F.p3598))).f_kind == v822)) || ((((*(yR110 *)y_deref(F.p3598))).f_kind == v834))) || ((((*(yR110 *)y_deref(F.p3598))).f_kind == v831)))) {
yr3596_AddLits(&(*F.p3597), ((*(yR110 *)y_deref(F.p3598))).f_elem, y_range(y_add(F.p3599, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3604_Provides(void * a_p3605, rt_int a_p3606) {
struct yf3607 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3605 = a_p3605;
F.p3606 = a_p3606;
F.v9112 = ((*(yR105 *)y_deref(F.p3605))).f_b;
if ((((*(yR105 *)y_deref(F.p3605))).f_name == F.p3606)) {
{ rt_int rv9114 = 1;
y_use = F.yu; return rv9114; }
}
while ((!(F.v9112 == ((void *)0)))) {
Y_TICK();
if ((((!(((*(yR105 *)y_deref(F.v9112))).f_ival == INT64_C(0)))) && ((((*(yR105 *)y_deref(F.v9112))).f_ival == F.p3606)))) {
{ rt_int rv9117 = 1;
y_use = F.yu; return rv9117; }
}
if ((((((*(yR105 *)y_deref(F.v9112))).f_ival == INT64_C(0))) && ((((*(yR105 *)y_deref(F.v9112))).f_name == F.p3606)))) {
{ rt_int rv9120 = 1;
y_use = F.yu; return rv9120; }
}
F.v9112 = ((*(yR105 *)y_deref(F.v9112))).f_next;
}
{ rt_int rv9122 = 0;
y_use = F.yu; return rv9122; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3611_ImportLater(rt_int a_p3612, rt_int a_p3613, void * * a_p3614) {
struct yf3615 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3612 = a_p3612;
F.p3613 = a_p3613;
F.p3614_o = a_p3614;
F.p3614 = ((void *)0);
if ((v1273 < INT64_C(0))) {
{ rt_int rv9131 = INT64_C(0);
(*F.p3614_o) = F.p3614;
y_use = F.yu; return rv9131; }
}
F.v9128 = ((void * *)(v1302).p)[y_ix1(v1302, v1273)];
while ((!(F.v9128 == ((void *)0)))) {
Y_TICK();
if (((((((*(yR105 *)y_deref(F.v9128))).f_kind == v624)) && ((!(((*(yR105 *)y_deref(F.v9128))).f_ival == INT64_C(2))))) && yr3604_Provides(F.v9128, F.p3612))) {
if ((((*(yR105 *)y_deref(F.v9128))).f_ival == INT64_C(1))) {
F.p3614 = F.v9128;
{ rt_int rv9135 = INT64_C(2);
(*F.p3614_o) = F.p3614;
y_use = F.yu; return rv9135; }
}
yr3685_CompileModule(F.v9128);
{ rt_int rv9137 = INT64_C(1);
(*F.p3614_o) = F.p3614;
y_use = F.yu; return rv9137; }
}
if ((((((((*(yR105 *)y_deref(F.v9128))).f_kind == v654)) || ((((*(yR105 *)y_deref(F.v9128))).f_kind == v666)))) && ((((*(yR105 *)y_deref(F.v9128))).f_name == F.p3612)))) {
{ rt_int rv9139 = INT64_C(3);
(*F.p3614_o) = F.p3614;
y_use = F.yu; return rv9139; }
}
if ((((!(((*(yR105 *)y_deref(F.v9128))).f_kind == v624))) && yr2315_DeclaredFrom(yr3619_OneDecl(F.v9128), F.p3612))) {
yr1186_FailN(F.p3613, F.p3612, y_str(" is declared after the module that imports it: a simple declaration precedes what uses it (X.G)", 95));
}
F.v9128 = ((*(yR105 *)y_deref(F.v9128))).f_next;
}
{ rt_int rv9142 = INT64_C(0);
(*F.p3614_o) = F.p3614;
y_use = F.yu; return rv9142; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3619_OneDecl(void * a_p3620) {
struct yf3621 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3620 = a_p3620;
({ F.v9146 = y_new(sizeof(yR105)); });
(*(yR105 *)y_deref(F.v9146)) = (*(yR105 *)y_deref(F.p3620));
((*(yR105 *)y_deref(F.v9146))).f_next = ((void *)0);
{ void * rv9147 = F.v9146;
y_use = F.yu; return rv9147; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3625_Lazy(rt_int a_p3626, rt_int a_p3627, void * a_p3628, rt_int a_p3629) {
struct yf3630 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3626 = a_p3626;
F.p3627 = a_p3627;
F.p3628 = a_p3628;
F.p3629 = a_p3629;
F.v9154 = yr2253_NewSym(v894, F.p3626);
if ((v1864 >= INT64_C(10000))) {
yr1178_FailS(F.p3629, y_str("too many imports translated later", 33));
}
v1864 = y_range(y_add(v1864, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((void * *)(v1827).p)[y_ix1(v1827, v1864)] = F.v9154;
((rt_int *)(v1838).p)[y_ix1(v1838, v1864)] = F.p3627;
((void * *)(v1849).p)[y_ix1(v1849, v1864)] = F.p3628;
((rt_int *)(v1860).p)[y_ix1(v1860, v1864)] = v1273;
((rt_int *)(v1862).p)[y_ix1(v1862, v1864)] = F.p3629;
{ void * rv9159 = F.v9154;
y_use = F.yu; return rv9159; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3634_SetLazy(rt_int a_p3635, void * a_p3636) {
struct yf3637 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3635 = a_p3635;
F.p3636 = a_p3636;
((*(yR125 *)y_deref(((void * *)(v1827).p)[y_ix1(v1827, F.p3635)]))).f_target = F.p3636;
((*(yR125 *)y_deref(((void * *)(v1827).p)[y_ix1(v1827, F.p3635)]))).f_readonly = ((*(yR125 *)y_deref(F.p3636))).f_readonly;
((void * *)(v1827).p)[y_ix1(v1827, F.p3635)] = ((void *)0);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3641_ResolveFrom(void * a_p3642, void * a_p3643) {
struct yf3644 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3642 = a_p3642;
F.p3643 = a_p3643;
F.lo9171 = INT64_C(1);
F.hi9172 = v1864;
{ rt_int hi9176 = F.hi9172;
for (rt_int i9175 = F.lo9171; i9175 <= hi9176; i9175++) { F.c_9174 = i9175; Y_TICK();
if ((((!(((void * *)(v1827).p)[y_ix1(v1827, F.c_9174)] == ((void *)0)))) && ((((void * *)(v1849).p)[y_ix1(v1849, F.c_9174)] == F.p3642)))) {
F.v9167 = ((*(yR125 *)y_deref(F.p3643))).f_members;
while ((((!(F.v9167 == ((void *)0)))) && ((!(((*(yR125 *)y_deref(F.v9167))).f_name == ((rt_int *)(v1838).p)[y_ix1(v1838, F.c_9174)]))))) {
Y_TICK();
F.v9167 = ((*(yR125 *)y_deref(F.v9167))).f_mnext;
}
if ((F.v9167 == ((void *)0))) {
yr1186_FailN(((rt_int *)(v1862).p)[y_ix1(v1862, F.c_9174)], ((rt_int *)(v1838).p)[y_ix1(v1838, F.c_9174)], y_str(" is not exported by that module", 31));
}
yr3634_SetLazy(y_range(F.c_9174, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), F.v9167);
}
if (i9175 == hi9176) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3648_ResolveLater(rt_int a_p3649) {
struct yf3650 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3649 = a_p3649;
F.lo9185 = INT64_C(1);
F.hi9186 = v1864;
{ rt_int hi9190 = F.hi9186;
for (rt_int i9189 = F.lo9185; i9189 <= hi9190; i9189++) { F.c_9188 = i9189; Y_TICK();
if (((((!(((void * *)(v1827).p)[y_ix1(v1827, F.c_9188)] == ((void *)0)))) && ((((void * *)(v1849).p)[y_ix1(v1849, F.c_9188)] == ((void *)0)))) && ((((rt_int *)(v1860).p)[y_ix1(v1860, F.c_9188)] == F.p3649)))) {
F.v9181 = yr2283_Find(((rt_int *)(v1838).p)[y_ix1(v1838, F.c_9188)]);
if ((F.v9181 == ((void *)0))) {
yr1186_FailN(((rt_int *)(v1862).p)[y_ix1(v1862, F.c_9188)], ((rt_int *)(v1838).p)[y_ix1(v1838, F.c_9188)], y_str(" is not declared around this module (X.B.2)", 43));
}
yr3634_SetLazy(y_range(F.c_9188, INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), F.v9181);
}
if (i9189 == hi9190) break;
}}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3654_LazyModule(void * a_p3655, void * * a_p3656, rt_int a_p3657) {
struct yf3658 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3655 = a_p3655;
F.p3656 = a_p3656;
F.p3657 = a_p3657;
F.v9197 = ((*(yR105 *)y_deref(F.p3655))).f_b;
while ((!(F.v9197 == ((void *)0)))) {
Y_TICK();
F.v9201 = ((*(yR105 *)y_deref(F.v9197))).f_name;
if ((!(((*(yR105 *)y_deref(F.v9197))).f_ival == INT64_C(0)))) {
F.v9201 = y_range(((*(yR105 *)y_deref(F.v9197))).f_ival, INT64_C(0), INT64_C(4000000));
}
if (((((!(F.v9201 == v531))) && ((!(F.v9201 == v585)))) && ((!(F.v9201 == v570))))) {
F.v9199 = yr3625_Lazy(F.v9201, F.v9201, F.p3655, F.p3657);
((*(yR125 *)y_deref(F.v9199))).f_mnext = (*F.p3656);
(*F.p3656) = F.v9199;
}
F.v9197 = ((*(yR105 *)y_deref(F.v9197))).f_next;
}
F.v9199 = yr3625_Lazy(((*(yR105 *)y_deref(F.p3655))).f_name, ((*(yR105 *)y_deref(F.p3655))).f_name, ((void *)0), F.p3657);
((*(yR125 *)y_deref(F.v9199))).f_mnext = (*F.p3656);
(*F.p3656) = F.v9199;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3662_ResolveItem(void * a_p3663, void * * a_p3664, rt_int a_p3665) {
struct yf3666 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3663 = a_p3663;
F.p3664 = a_p3664;
F.p3665 = a_p3665;
F.v9218 = ((*(yR105 *)y_deref(F.p3663))).f_flag;
if (((F.p3665 && ((((*(yR105 *)y_deref(F.p3663))).f_text == INT64_C(0)))) && (((((((*(yR105 *)y_deref(F.p3663))).f_name == v531)) || ((((*(yR105 *)y_deref(F.p3663))).f_name == v585))) || ((((*(yR105 *)y_deref(F.p3663))).f_name == v570)))))) {
if ((yr2289_FindHere(((*(yR105 *)y_deref(F.p3663))).f_name) == ((void *)0))) {
y_use = F.yu; return;
}
}
F.v9214 = ((*(yR105 *)y_deref(F.p3663))).f_name;
if ((!(((*(yR105 *)y_deref(F.p3663))).f_ival == INT64_C(0)))) {
F.v9214 = y_range(((*(yR105 *)y_deref(F.p3663))).f_ival, INT64_C(0), INT64_C(4000000));
}
if ((!(((*(yR105 *)y_deref(F.p3663))).f_text == INT64_C(0)))) {
if ((((!F.p3665)) && ((yr2283_Find(((*(yR105 *)y_deref(F.p3663))).f_text) == ((void *)0))))) {
F.v9220 = yr3611_ImportLater(((*(yR105 *)y_deref(F.p3663))).f_text, ((*(yR105 *)y_deref(F.p3663))).f_line, &F.v9222);
if ((F.v9220 == INT64_C(2))) {
F.v9212 = yr3625_Lazy(F.v9214, ((*(yR105 *)y_deref(F.p3663))).f_name, F.v9222, ((*(yR105 *)y_deref(F.p3663))).f_line);
((*(yR125 *)y_deref(F.v9212))).f_mnext = (*F.p3664);
(*F.p3664) = F.v9212;
y_use = F.yu; return;
}
}
F.v9210 = yr2388_Real(yr2295_Lookup(((*(yR105 *)y_deref(F.p3663))).f_text, ((*(yR105 *)y_deref(F.p3663))).f_line));
if ((!(((*(yR125 *)y_deref(F.v9210))).f_kind == v879))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3663))).f_line, ((*(yR105 *)y_deref(F.p3663))).f_text, y_str(" is not a module", 16));
}
F.v9208 = ((*(yR125 *)y_deref(F.v9210))).f_members;
while ((((!(F.v9208 == ((void *)0)))) && ((!(((*(yR125 *)y_deref(F.v9208))).f_name == ((*(yR105 *)y_deref(F.p3663))).f_name))))) {
Y_TICK();
F.v9208 = ((*(yR125 *)y_deref(F.v9208))).f_mnext;
}
if ((F.v9208 == ((void *)0))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3663))).f_line, ((*(yR105 *)y_deref(F.p3663))).f_name, y_str(" is not exported by that module", 31));
}
} else {
if (F.p3665) {
F.v9208 = yr2289_FindHere(((*(yR105 *)y_deref(F.p3663))).f_name);
} else {
F.v9208 = yr2283_Find(((*(yR105 *)y_deref(F.p3663))).f_name);
}
if ((((F.v9208 == ((void *)0))) && (!F.p3665))) {
F.v9220 = yr3611_ImportLater(((*(yR105 *)y_deref(F.p3663))).f_name, ((*(yR105 *)y_deref(F.p3663))).f_line, &F.v9222);
if ((((F.v9220 == INT64_C(2))) && ((((*(yR105 *)y_deref(F.v9222))).f_name == ((*(yR105 *)y_deref(F.p3663))).f_name)))) {
if ((((!(F.v9218 == INT64_C(0)))) || ((!(((*(yR105 *)y_deref(F.p3663))).f_ival == INT64_C(0)))))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3663))).f_line, y_str("a module name in a list takes no attribute and no AS (X.B.3)", 60));
}
yr3654_LazyModule(F.v9222, &(*F.p3664), ((*(yR105 *)y_deref(F.p3663))).f_line);
y_use = F.yu; return;
}
if ((F.v9220 >= INT64_C(2))) {
F.v9212 = yr3625_Lazy(F.v9214, ((*(yR105 *)y_deref(F.p3663))).f_name, F.v9222, ((*(yR105 *)y_deref(F.p3663))).f_line);
((*(yR125 *)y_deref(F.v9212))).f_mnext = (*F.p3664);
(*F.p3664) = F.v9212;
y_use = F.yu; return;
}
F.v9208 = yr2283_Find(((*(yR105 *)y_deref(F.p3663))).f_name);
}
if ((F.p3665 && ((!(F.v9208 == ((void *)0)))))) {
if ((((((*(yR125 *)y_deref(F.v9208))).f_kind == v894)) && ((((*(yR125 *)y_deref(F.v9208))).f_mval == INT64_C(1))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3663))).f_line, ((*(yR105 *)y_deref(F.p3663))).f_name, y_str(" is imported into this module: it may not be exported again (X.B.1)", 67));
}
}
if ((F.v9208 == ((void *)0))) {
if (F.p3665) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3663))).f_line, ((*(yR105 *)y_deref(F.p3663))).f_name, y_str(" is not declared in this module", 31));
} else {
yr1186_FailN(((*(yR105 *)y_deref(F.p3663))).f_line, ((*(yR105 *)y_deref(F.p3663))).f_name, y_str(" is not declared around this module (X.B.2)", 43));
}
}
}
F.v9210 = yr2388_Real(F.v9208);
if ((((((*(yR125 *)y_deref(F.v9210))).f_kind == v879)) && ((((*(yR105 *)y_deref(F.p3663))).f_text == INT64_C(0))))) {
if ((((!(F.v9218 == INT64_C(0)))) || ((!(((*(yR105 *)y_deref(F.p3663))).f_ival == INT64_C(0)))))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3663))).f_line, y_str("a module name in a list takes no attribute and no AS (X.B.3)", 60));
}
F.v9212 = ((*(yR125 *)y_deref(F.v9210))).f_members;
while ((!(F.v9212 == ((void *)0)))) {
Y_TICK();
F.v9208 = yr3589_Alias(((*(yR125 *)y_deref(F.v9212))).f_name, F.v9212);
((*(yR125 *)y_deref(F.v9208))).f_mnext = (*F.p3664);
(*F.p3664) = F.v9208;
F.v9212 = ((*(yR125 *)y_deref(F.v9212))).f_mnext;
}
if ((!F.p3665)) {
F.v9208 = yr3589_Alias(((*(yR125 *)y_deref(F.v9210))).f_name, F.v9210);
((*(yR125 *)y_deref(F.v9208))).f_mnext = (*F.p3664);
(*F.p3664) = F.v9208;
}
y_use = F.yu; return;
}
F.v9212 = yr3589_Alias(F.v9214, F.v9208);
if (F.p3665) {
if ((((((*(yR125 *)y_deref(F.v9210))).f_kind == v867)) || ((((*(yR125 *)y_deref(F.v9210))).f_kind == v870)))) {
if ((((F.v9218 == v429)) || ((F.v9218 == v483)))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3663))).f_line, y_str("READONLY and VAR are for variables", 34));
}
if ((((F.v9218 == v474)) && ((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.v9210))).f_rep))).f_opaque)) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3663))).f_line, ((*(yR105 *)y_deref(F.p3663))).f_name, y_str(" is opaque already: an export list cannot make it TRANSPARENT (X.B.3)", 69));
}
if ((((!(F.v9218 == v474))) || ((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.v9210))).f_rep))).f_opaque)) {
F.v9216 = yr2401_CopyRep(((*(yR125 *)y_deref(F.v9210))).f_rep);
((*(yR110 *)y_deref(F.v9216))).f_opaque = 1;
((*(yR110 *)y_deref(F.v9216))).f_opaqueops = v1815;
((*(yR125 *)y_deref(F.v9212))).f_target = yr2253_NewSym(((*(yR125 *)y_deref(F.v9210))).f_kind, ((*(yR125 *)y_deref(F.v9210))).f_name);
((*(yR125 *)y_deref(((*(yR125 *)y_deref(F.v9212))).f_target))).f_rep = F.v9216;
((*(yR125 *)y_deref(((*(yR125 *)y_deref(F.v9212))).f_target))).f_decl = ((*(yR125 *)y_deref(F.v9210))).f_decl;
} else {
yr3596_AddLits(&(*F.p3664), ((*(yR125 *)y_deref(F.v9210))).f_rep, INT64_C(0));
}
} else if ((((((*(yR125 *)y_deref(F.v9210))).f_kind == v861)) || ((((*(yR125 *)y_deref(F.v9210))).f_kind == v864)))) {
if ((((F.v9218 == v396)) || ((F.v9218 == v474)))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3663))).f_line, y_str("OPAQUE and TRANSPARENT are for types", 36));
}
if ((((F.v9218 == v483)) && ((((((*(yR125 *)y_deref(F.v9210))).f_kind == v864)) || ((*(yR125 *)y_deref(F.v9208))).f_readonly)))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3663))).f_line, ((*(yR105 *)y_deref(F.p3663))).f_name, y_str(" is a constant or READONLY here: an export list cannot make it VAR (X.B.3)", 74));
}
if ((!(F.v9218 == v483))) {
((*(yR125 *)y_deref(F.v9212))).f_readonly = 1;
}
} else if ((!(F.v9218 == INT64_C(0)))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3663))).f_line, y_str("an attribute is for a type, a representation or a variable", 58));
}
if ((((((*(yR125 *)y_deref(F.v9210))).f_kind == v861)) && ((((((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.v9210))).f_rep))).f_kind == v837)) || yr2444_HoldsSignal(((*(yR125 *)y_deref(F.v9210))).f_rep))))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3663))).f_line, y_str("a signal may not be exported from its monitor (X.E.4)", 53));
}
} else if ((((((*(yR125 *)y_deref(F.v9210))).f_kind == v867)) || ((((*(yR125 *)y_deref(F.v9210))).f_kind == v870)))) {
yr3596_AddLits(&(*F.p3664), ((*(yR125 *)y_deref(F.v9210))).f_rep, INT64_C(0));
}
((*(yR125 *)y_deref(F.v9212))).f_mnext = (*F.p3664);
(*F.p3664) = F.v9212;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3670_DefineAll(void * a_p3671, rt_int a_p3672) {
struct yf3673 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3671 = a_p3671;
F.p3672 = a_p3672;
F.v9257 = F.p3671;
F.v9259 = F.p3671;
F.v9261 = F.p3671;
while ((!(F.v9257 == ((void *)0)))) {
Y_TICK();
F.v9259 = ((*(yR125 *)y_deref(F.v9257))).f_mnext;
F.v9261 = yr2289_FindHere(((*(yR125 *)y_deref(F.v9257))).f_name);
if (((!yr2336_Resolved(F.v9257)) || ((((!(F.v9261 == ((void *)0)))) && (!yr2336_Resolved(F.v9261)))))) {
if ((!(F.v9261 == ((void *)0)))) {
yr1186_FailN(F.p3672, ((*(yR125 *)y_deref(F.v9257))).f_name, y_str(" comes into this scope twice", 28));
}
yr2355_Define(F.v9257, F.p3672);
} else if ((((F.v9261 == ((void *)0))) || ((!(yr2388_Real(F.v9261) == yr2388_Real(F.v9257)))))) {
if (((((!(F.v9261 == ((void *)0)))) && ((((*(yR125 *)y_deref(yr2388_Real(F.v9257)))).f_kind == v873))) && ((((*(yR125 *)y_deref(yr2388_Real(F.v9261)))).f_kind == v873)))) {
yr2355_Define(F.v9257, F.p3672);
} else if ((F.v9261 == ((void *)0))) {
yr2355_Define(F.v9257, F.p3672);
} else {
yr1186_FailN(F.p3672, ((*(yR125 *)y_deref(F.v9257))).f_name, y_str(" comes into this scope twice", 28));
}
}
F.v9257 = F.v9259;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3677_ExtendWith(void * a_p3678, void * a_p3679, rt_int a_p3680) {
struct yf3681 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3678 = a_p3678;
F.p3679 = a_p3679;
F.p3680 = a_p3680;
F.v9269 = ((void *)0);
F.v9271 = ((void *)0);
F.v9273 = ((void *)0);
F.v9275 = ((void *)0);
F.v9275 = F.p3678;
while ((!(F.v9275 == ((void *)0)))) {
Y_TICK();
if ((!(yr3497_SameSignature(F.v9275, F.p3679) == ((void *)0)))) {
yr1186_FailN(F.p3680, ((*(yR125 *)y_deref(F.v9275))).f_name, y_str(" is exported over a definition for the same parameter types around the module (X.B.5)", 85));
}
if ((!(((((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.v9275))).f_ret))).f_kind == v852)) == ((((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.p3679))).f_ret))).f_kind == v852))))) {
yr1186_FailN(F.p3680, ((*(yR125 *)y_deref(F.v9275))).f_name, y_str(": a value-returning routine is extended only by one, a procedure only by a procedure (X.A.1)", 92));
}
({ F.v9273 = y_new(sizeof(yR125)); });
(*(yR125 *)y_deref(F.v9273)) = (*(yR125 *)y_deref(F.v9275));
((*(yR125 *)y_deref(F.v9273))).f_target = F.v9275;
((*(yR125 *)y_deref(F.v9273))).f_alt = ((void *)0);
if ((F.v9271 == ((void *)0))) {
F.v9269 = F.v9273;
} else {
((*(yR125 *)y_deref(F.v9271))).f_alt = F.v9273;
}
F.v9271 = F.v9273;
F.v9275 = ((*(yR125 *)y_deref(F.v9275))).f_alt;
}
((*(yR125 *)y_deref(F.v9271))).f_alt = F.p3679;
{ void * rv9278 = F.v9269;
y_use = F.yu; return rv9278; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3685_CompileModule(void * a_p3686) {
struct yf3687 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3686 = a_p3686;
F.v9310 = 0;
((*(yR105 *)y_deref(F.p3686))).f_ival = INT64_C(1);
F.v9300 = v1663;
F.v9282 = ((void *)0);
F.v9302 = ((*(yR105 *)y_deref(F.p3686))).f_a;
while ((!(F.v9302 == ((void *)0)))) {
Y_TICK();
yr3662_ResolveItem(F.v9302, &F.v9282, 0);
F.v9302 = ((*(yR105 *)y_deref(F.v9302))).f_next;
}
F.v9292 = v1802;
if ((((((*(yR105 *)y_deref(F.p3686))).f_flag == INT64_C(1))) && ((v1802 == ((void *)0))))) {
F.v9294 = yr2253_NewSym(v861, ((*(yR105 *)y_deref(F.p3686))).f_name);
((*(yR125 *)y_deref(F.v9294))).f_level = v1279;
((*(yR125 *)y_deref(F.v9294))).f_cname = yr1200_Fresh(y_str("mon", 3));
((*(yR125 *)y_deref(F.v9294))).f_rep = v1348;
yr2375_DeclStorage(yr1061_T(y_str("ymon", 4)), ((*(yR125 *)y_deref(F.v9294))).f_cname);
yr1132_Emit(yr3350_Join(yr1061_T(y_str("y_mon_init(&", 12)), yr2362_Path(v1279, ((*(yR125 *)y_deref(F.v9294))).f_cname), yr1061_T(y_str(");", 2))));
v1802 = F.v9294;
F.v9310 = 1;
}
yr2260_OpenScope(1);
v1663 = ((*(yR105 *)y_deref(F.p3686))).f_name;
((void * *)(v1813).p)[y_ix1(v1813, v1273)] = ((void *)0);
F.v9306 = v1276;
v1276 = v1273;
F.v9286 = F.v9282;
while ((!(F.v9286 == ((void *)0)))) {
Y_TICK();
((*(yR125 *)y_deref(F.v9286))).f_mval = INT64_C(1);
F.v9286 = ((*(yR125 *)y_deref(F.v9286))).f_mnext;
}
yr3670_DefineAll(F.v9282, ((*(yR105 *)y_deref(F.p3686))).f_line);
yr3577_Declarations(((*(yR105 *)y_deref(((*(yR105 *)y_deref(F.p3686))).f_c))).f_a);
yr1132_Emit(yr3350_Join(yr1061_T(y_str("/* ", 3)), ((*(yR105 *)y_deref(F.p3686))).f_name, yr1061_T(y_str(" */", 3))));
yr3555_Defer(F.p3686, INT64_C(2), (v996).f_tail, F.v9310);
v1815 = INT64_C(0);
F.v9302 = ((*(yR105 *)y_deref(F.p3686))).f_b;
while ((!(F.v9302 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR105 *)y_deref(F.v9302))).f_text == INT64_C(0))) && ((yr2289_FindHere(((*(yR105 *)y_deref(F.v9302))).f_name) == ((void *)0))))) {
if ((((*(yR105 *)y_deref(F.v9302))).f_name == v531)) {
v1815 = y_range(y_add(v1815, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((((((*(yR105 *)y_deref(F.v9302))).f_name == v585)) || ((((*(yR105 *)y_deref(F.v9302))).f_name == v570)))) {
if (((y_div(v1815, INT64_C(2))) == INT64_C(0))) {
v1815 = y_range(y_add(v1815, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
}
F.v9302 = ((*(yR105 *)y_deref(F.v9302))).f_next;
}
F.v9284 = ((void *)0);
F.v9302 = ((*(yR105 *)y_deref(F.p3686))).f_b;
while ((!(F.v9302 == ((void *)0)))) {
Y_TICK();
yr3662_ResolveItem(F.v9302, &F.v9284, 1);
F.v9302 = ((*(yR105 *)y_deref(F.v9302))).f_next;
}
F.v9304 = ((void * *)(v1813).p)[y_ix1(v1813, v1273)];
v1276 = F.v9306;
v1663 = F.v9300;
yr2272_CloseScope();
while ((!(F.v9304 == ((void *)0)))) {
Y_TICK();
F.v9302 = ((*(yR105 *)y_deref(F.v9304))).f_next;
((*(yR105 *)y_deref(F.v9304))).f_next = ((void * *)(v1813).p)[y_ix1(v1813, v1273)];
((void * *)(v1813).p)[y_ix1(v1813, v1273)] = F.v9304;
F.v9304 = F.v9302;
}
v1802 = F.v9292;
F.v9288 = yr2253_NewSym(v879, ((*(yR105 *)y_deref(F.p3686))).f_name);
((*(yR125 *)y_deref(F.v9288))).f_members = F.v9284;
yr2355_Define(F.v9288, ((*(yR105 *)y_deref(F.p3686))).f_line);
F.v9290 = F.v9284;
F.v9284 = ((void *)0);
while ((!(F.v9290 == ((void *)0)))) {
Y_TICK();
F.v9296 = ((*(yR125 *)y_deref(F.v9290))).f_mnext;
F.v9286 = yr3589_Alias(((*(yR125 *)y_deref(F.v9290))).f_name, F.v9290);
((*(yR125 *)y_deref(F.v9286))).f_readonly = ((*(yR125 *)y_deref(F.v9290))).f_readonly;
((*(yR125 *)y_deref(F.v9286))).f_mnext = F.v9284;
F.v9284 = F.v9286;
F.v9290 = F.v9296;
}
((*(yR125 *)y_deref(F.v9288))).f_members = F.v9284;
((*(yR105 *)y_deref(F.p3686))).f_ival = INT64_C(2);
yr3641_ResolveFrom(F.p3686, F.v9288);
F.v9290 = F.v9284;
while ((!(F.v9290 == ((void *)0)))) {
Y_TICK();
F.v9296 = yr3589_Alias(((*(yR125 *)y_deref(F.v9290))).f_name, F.v9290);
((*(yR125 *)y_deref(F.v9296))).f_readonly = ((*(yR125 *)y_deref(F.v9290))).f_readonly;
F.v9298 = yr2283_Find(((*(yR125 *)y_deref(F.v9290))).f_name);
if ((!(F.v9298 == ((void *)0)))) {
if ((!yr2336_Resolved(F.v9298))) {
F.v9298 = ((void *)0);
} else {
F.v9298 = yr2388_Real(F.v9298);
}
}
if ((((((*(yR125 *)y_deref(yr2388_Real(F.v9290)))).f_kind == v876)) && ((!(F.v9298 == ((void *)0)))))) {
if ((((*(yR125 *)y_deref(F.v9298))).f_kind == v876)) {
F.v9296 = yr3677_ExtendWith(yr2388_Real(F.v9290), F.v9298, ((*(yR105 *)y_deref(F.p3686))).f_line);
}
}
if ((yr2289_FindHere(((*(yR125 *)y_deref(F.v9290))).f_name) == ((void *)0))) {
yr2355_Define(F.v9296, ((*(yR105 *)y_deref(F.p3686))).f_line);
} else if ((((*(yR125 *)y_deref(F.v9296))).f_kind == v876)) {
yr2355_Define(F.v9296, ((*(yR105 *)y_deref(F.p3686))).f_line);
} else if ((((((*(yR125 *)y_deref(yr2289_FindHere(((*(yR125 *)y_deref(F.v9290))).f_name)))).f_kind == v894)) && ((!(yr2388_Real(yr2289_FindHere(((*(yR125 *)y_deref(F.v9290))).f_name)) == yr2388_Real(F.v9290)))))) {
yr2355_Define(F.v9296, ((*(yR105 *)y_deref(F.p3686))).f_line);
} else if ((!(((*(yR125 *)y_deref(yr2388_Real(F.v9290)))).f_kind == v873))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3686))).f_line, ((*(yR125 *)y_deref(F.v9290))).f_name, y_str(" is exported into a scope that has it already", 45));
}
F.v9290 = ((*(yR125 *)y_deref(F.v9290))).f_mnext;
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3691_DeclareTemplate(void * a_p3692) {
struct yf3693 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3692 = a_p3692;
F.v9340 = yr2253_NewSym(v882, ((*(yR105 *)y_deref(F.p3692))).f_name);
((*(yR125 *)y_deref(F.v9340))).f_decl = F.p3692;
yr2355_Define(F.v9340, ((*(yR105 *)y_deref(F.p3692))).f_line);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3697_Instantiate(void * a_p3698) {
struct yf3699 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3698 = a_p3698;
F.v9344 = yr2388_Real(yr2295_Lookup(((*(yR105 *)y_deref(F.p3698))).f_name, ((*(yR105 *)y_deref(F.p3698))).f_line));
if ((!(((*(yR125 *)y_deref(F.v9344))).f_kind == v882))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3698))).f_line, ((*(yR105 *)y_deref(F.p3698))).f_name, y_str(" is not a template", 18));
}
F.v9346 = ((*(yR125 *)y_deref(F.v9344))).f_decl;
if ((!(yr1954_Count(((*(yR105 *)y_deref(F.v9346))).f_a) == yr1954_Count(((*(yR105 *)y_deref(F.p3698))).f_a)))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3698))).f_line, ((*(yR105 *)y_deref(F.p3698))).f_name, y_str(": the number of actuals is wrong", 32));
}
F.v9352 = y_range(y_add(v1213, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.lo9368 = ((*(yR105 *)y_deref(F.v9346))).f_ival;
F.hi9369 = y_sub(((*(yR105 *)y_deref(F.v9346))).f_flag, INT64_C(1));
{ rt_int hi9373 = F.hi9369;
for (rt_int i9372 = F.lo9368; i9372 <= hi9373; i9372++) { F.c_9371 = i9372; Y_TICK();
F.v9356 = ((rt_int *)(v1207).p)[y_ix1(v1207, F.c_9371)];
F.v9358 = ((rt_int *)(v1209).p)[y_ix1(v1209, F.c_9371)];
if ((F.v9356 == v207)) {
F.v9348 = ((*(yR105 *)y_deref(F.v9346))).f_a;
F.v9350 = ((*(yR105 *)y_deref(F.p3698))).f_a;
while ((!(F.v9348 == ((void *)0)))) {
Y_TICK();
if ((((((*(yR105 *)y_deref(F.v9348))).f_name == F.v9358)) && ((F.v9356 == v207)))) {
if ((((*(yR105 *)y_deref(F.v9350))).f_flag == INT64_C(1))) {
F.v9356 = v216;
F.v9358 = ((*(yR105 *)y_deref(F.v9350))).f_ival;
} else {
F.v9358 = ((*(yR105 *)y_deref(F.v9350))).f_name;
if ((F.v9358 <= v492)) {
F.v9356 = v210;
} else if ((F.v9358 <= v621)) {
F.v9356 = v213;
}
}
}
F.v9348 = ((*(yR105 *)y_deref(F.v9348))).f_next;
F.v9350 = ((*(yR105 *)y_deref(F.v9350))).f_next;
}
}
v1213 = y_range(y_add(v1213, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1207).p)[y_ix1(v1207, v1213)] = F.v9356;
((rt_int *)(v1209).p)[y_ix1(v1209, v1213)] = F.v9358;
((rt_int *)(v1211).p)[y_ix1(v1211, v1213)] = ((rt_int *)(v1211).p)[y_ix1(v1211, F.c_9371)];
if (i9372 == hi9373) break;
}}
v1213 = y_range(y_add(v1213, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1207).p)[y_ix1(v1207, v1213)] = v204;
((rt_int *)(v1209).p)[y_ix1(v1209, v1213)] = INT64_C(0);
((rt_int *)(v1211).p)[y_ix1(v1211, v1213)] = ((*(yR105 *)y_deref(F.p3698))).f_line;
F.v9354 = v1249;
v1249 = F.v9352;
F.v9360 = yr2044_ParseModule();
v1249 = F.v9354;
yr3685_CompileModule(F.v9360);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3703_DeclareProcess(void * a_p3704) {
struct yf3705 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3704 = a_p3704;
F.v9383 = ((*(yR105 *)y_deref(F.p3704))).f_sym;
((*(yR125 *)y_deref(F.v9383))).f_monitor = v1802;
yr2375_DeclStorage(yr1061_T(y_str("rt_taskdecl", 11)), yr3350_Join(((*(yR125 *)y_deref(F.v9383))).f_cname, yr1061_T(y_str("_d", 2)), INT64_C(0)));
F.v9385 = yr1939_NewNode(v669, ((*(yR105 *)y_deref(F.p3704))).f_line);
((*(yR105 *)y_deref(F.v9385))).f_sym = F.v9383;
((*(yR105 *)y_deref(F.v9385))).f_next = ((void * *)(v1813).p)[y_ix1(v1813, v1273)];
((void * *)(v1813).p)[y_ix1(v1813, v1273)] = F.v9385;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3709_AwaitProcesses(void) {
struct yf3710 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v9391 = ((void * *)(v1813).p)[y_ix1(v1813, v1273)];
while ((!(F.v9391 == ((void *)0)))) {
Y_TICK();
yr1132_Emit(yr3350_Join(yr1061_T(y_str("rt_await_decl(&", 15)), yr2362_Path(y_range(y_sub(((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v9391))).f_sym))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr3350_Join(((*(yR125 *)y_deref(((*(yR105 *)y_deref(F.v9391))).f_sym))).f_cname, yr1061_T(y_str("_d", 2)), INT64_C(0))), yr1061_T(y_str(");", 2))));
F.v9391 = ((*(yR105 *)y_deref(F.v9391))).f_next;
}
((void * *)(v1813).p)[y_ix1(v1813, v1273)] = ((void *)0);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3714_Activate(void * a_p3715, void * a_p3716) {
struct yf3717 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3715 = a_p3715;
F.p3716 = a_p3716;
F.v9432 = ((*(yR125 *)y_deref(F.p3716))).f_decl;
yr3099_CompileArgs(((*(yR105 *)y_deref(F.p3715))).f_a, F.p3716, &F.v9402, &F.v9404);
if ((!(F.v9404 == ((*(yR125 *)y_deref(F.p3716))).f_nparams))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3715))).f_line, ((*(yR125 *)y_deref(F.p3716))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
yr3149_NoteCall(F.p3716, ((*(yR105 *)y_deref(F.p3715))).f_line);
yr3438_CheckActuals(F.p3716, F.v9402, ((*(yR105 *)y_deref(F.p3715))).f_line);
F.v9420 = yr1200_Fresh(y_str("pf", 2));
yr1132_Emit(yr3350_Join(yr1061_T(y_str("{ struct ", 9)), ((*(yR125 *)y_deref(((*(yR125 *)y_deref(F.p3716))).f_members))).f_name, yr3350_Join(yr1061_T(y_str(" *", 2)), F.v9420, yr3350_Join(yr1061_T(y_str(" = rt_alloc(sizeof *", 20)), F.v9420, yr1061_T(y_str(");", 2))))));
if ((((*(yR125 *)y_deref(F.p3716))).f_level > INT64_C(1))) {
yr1132_Emit(yr3350_Join(F.v9420, yr1061_T(y_str("->up = ", 7)), yr3350_Join(yr2369_FramePtr(y_range(y_sub(((*(yR125 *)y_deref(F.p3716))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))), yr1061_T(y_str(";", 1)), INT64_C(0))));
}
F.v9418 = ((*(yR125 *)y_deref(F.p3716))).f_params;
F.v9406 = y_range(y_add(F.v9402, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((!(F.v9418 == ((void *)0)))) {
Y_TICK();
if ((!yr3078_Fits(((*(yR120 *)y_deref(F.v9418))).f_rep, ((void * *)(v1523).p)[y_ix1(v1523, F.v9406)]))) {
yr2481_TypeClash(((*(yR105 *)y_deref(((void * *)(v1534).p)[y_ix1(v1534, F.v9406)]))).f_line, ((*(yR120 *)y_deref(F.v9418))).f_rep, ((void * *)(v1523).p)[y_ix1(v1523, F.v9406)]);
}
F.v9426 = yr3350_Join(F.v9420, yr1061_T(y_str("->", 2)), ((*(yR120 *)y_deref(F.v9418))).f_cname);
yr3108_CheckUnresolved(((*(yR120 *)y_deref(F.v9418))).f_rep, ((void * *)(v1523).p)[y_ix1(v1523, F.v9406)], ((*(yR105 *)y_deref(((void * *)(v1534).p)[y_ix1(v1534, F.v9406)]))).f_line);
if ((((*(yR110 *)y_deref(((*(yR120 *)y_deref(F.v9418))).f_rep))).f_kind == v855)) {
yr1132_Emit(yr3350_Join(F.v9426, yr1061_T(y_str(" = ", 3)), yr3350_Join(yr2780_SpaceArg(((void * *)(v1534).p)[y_ix1(v1534, F.v9406)], ((rt_int *)(v1512).p)[y_ix1(v1512, F.v9406)], ((void * *)(v1523).p)[y_ix1(v1523, F.v9406)]), yr1061_T(y_str(";", 1)), INT64_C(0))));
} else if ((((*(yR120 *)y_deref(F.v9418))).f_cls == v903)) {
if ((!yr2934_IsVariable(((void * *)(v1534).p)[y_ix1(v1534, F.v9406)]))) {
yr1186_FailN(((*(yR105 *)y_deref(((void * *)(v1534).p)[y_ix1(v1534, F.v9406)]))).f_line, ((*(yR120 *)y_deref(F.v9418))).f_name, y_str(": the actual of a VAR parameter must be a variable", 50));
}
if ((!yr3116_SameAsFormal(((*(yR120 *)y_deref(F.v9418))).f_rep, ((void * *)(v1523).p)[y_ix1(v1523, F.v9406)]))) {
yr1186_FailN(((*(yR105 *)y_deref(((void * *)(v1534).p)[y_ix1(v1534, F.v9406)]))).f_line, ((*(yR120 *)y_deref(F.v9418))).f_name, y_str(": a VAR actual has the representation of its formal (VII.G, X.A.2)", 66));
}
yr3405_NoteWrite(((void * *)(v1534).p)[y_ix1(v1534, F.v9406)]);
yr3388_DesigBase(((void * *)(v1534).p)[y_ix1(v1534, F.v9406)], &F.v9412, &F.v9414, &F.v9416);
if ((((!(F.v9412 == ((void *)0)))) && (!F.v9414))) {
if ((yr3721_LifeDepth(((*(yR125 *)y_deref(F.v9412))).f_depth) > yr3721_LifeDepth(((*(yR125 *)y_deref(F.p3716))).f_depth))) {
yr1186_FailN(((*(yR105 *)y_deref(((void * *)(v1534).p)[y_ix1(v1534, F.v9406)]))).f_line, ((*(yR125 *)y_deref(F.v9412))).f_name, y_str(" is the VAR actual of a process that may outlive it: its life scope is smaller than that of the process (X.E.2)", 111));
}
}
yr1132_Emit(yr3350_Join(F.v9426, yr1061_T(y_str(" = &", 4)), yr3350_Join(((rt_int *)(v1512).p)[y_ix1(v1512, F.v9406)], yr1061_T(y_str(";", 1)), INT64_C(0))));
} else if (yr2431_Deep(((*(yR120 *)y_deref(F.v9418))).f_rep)) {
F.v9422 = yr1200_Fresh(y_str("t", 1));
yr1132_Emit(yr3350_Join(yr1061_T(y_str("{ ", 2)), yr2456_CType(((*(yR120 *)y_deref(F.v9418))).f_rep), yr3350_Join(yr1061_T(y_str(" ", 1)), F.v9422, yr3350_Join(yr1061_T(y_str(" = ", 3)), yr2906_Convert(((rt_int *)(v1512).p)[y_ix1(v1512, F.v9406)], ((*(yR120 *)y_deref(F.v9418))).f_rep, ((void * *)(v1523).p)[y_ix1(v1523, F.v9406)]), yr1061_T(y_str(";", 1))))));
if ((((*(yR110 *)y_deref(((*(yR120 *)y_deref(F.v9418))).f_rep))).f_kind == v843)) {
yr1132_Emit(yr3350_Join(yr1061_T(y_str("y_copy(y_desc_vector(", 21)), yr2462_DescOf(((*(yR110 *)y_deref(((*(yR120 *)y_deref(F.v9418))).f_rep))).f_elem), yr3350_Join(yr1061_T(y_str("), &", 4)), F.v9426, yr3350_Join(yr1061_T(y_str(", &", 3)), F.v9422, yr1061_T(y_str("); }", 4))))));
} else {
yr1132_Emit(yr3350_Join(yr1061_T(y_str("y_copy(", 7)), yr2462_DescOf(((*(yR120 *)y_deref(F.v9418))).f_rep), yr3350_Join(yr1061_T(y_str(", &", 3)), F.v9426, yr3350_Join(yr1061_T(y_str(", &", 3)), F.v9422, yr1061_T(y_str("); }", 4))))));
}
} else {
yr1132_Emit(yr3350_Join(F.v9426, yr1061_T(y_str(" = ", 3)), yr3350_Join(yr2906_Convert(((rt_int *)(v1512).p)[y_ix1(v1512, F.v9406)], ((*(yR120 *)y_deref(F.v9418))).f_rep, ((void * *)(v1523).p)[y_ix1(v1523, F.v9406)]), yr1061_T(y_str(";", 1)), INT64_C(0))));
}
F.v9406 = y_range(y_add(F.v9406, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
F.v9418 = ((*(yR120 *)y_deref(F.v9418))).f_next;
}
v1536 = F.v9402;
F.v9428 = yr1061_T(y_str("0", 1));
if ((!(((*(yR105 *)y_deref(F.v9432))).f_e == ((void *)0)))) {
yr2973_Expr(((*(yR105 *)y_deref(F.v9432))).f_e, v1342, &F.v9428, &F.v9434);
yr2489_CheckType(((*(yR105 *)y_deref(F.v9432))).f_line, v1342, F.v9434);
}
F.v9430 = yr1061_T(y_str("0, 0", 4));
if ((!(((*(yR105 *)y_deref(F.v9432))).f_d == ((void *)0)))) {
yr2973_Expr(((*(yR105 *)y_deref(F.v9432))).f_d, v1342, &F.v9424, &F.v9434);
yr2489_CheckType(((*(yR105 *)y_deref(F.v9432))).f_line, v1342, F.v9434);
F.v9430 = yr3350_Join(yr1061_T(y_str("1, ", 3)), F.v9424, INT64_C(0));
}
F.v9408 = INT64_C(0);
if ((!(((*(yR105 *)y_deref(F.v9432))).f_x == ((void *)0)))) {
yr2825_Manifest(((*(yR105 *)y_deref(F.v9432))).f_x, &F.v9410, &F.v9408);
if (((!F.v9410) || ((F.v9408 < INT64_C(1))))) {
yr1178_FailS(((*(yR105 *)y_deref(F.v9432))).f_line, y_str("SIZE is a positive manifest constant (XIV.X.2)", 46));
}
}
yr1026_SB();
yr1037_SA(y_str("y_create(&", 10));
yr1044_ST(yr2362_Path(y_range(y_sub(((*(yR125 *)y_deref(F.p3716))).f_level, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), yr3350_Join(((*(yR125 *)y_deref(F.p3716))).f_cname, yr1061_T(y_str("_d", 2)), INT64_C(0))));
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.v9428);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.v9430);
yr1037_SA(y_str(", ", 2));
yr1050_SI(F.v9408);
yr1037_SA(y_str(", ", 2));
yr1044_ST(((*(yR125 *)y_deref(F.p3716))).f_cname);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.v9420);
yr1037_SA(y_str("); }", 4));
F.v9422 = yr1056_SE();
yr1132_Emit(F.v9422);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3721_LifeDepth(rt_int a_p3722) {
struct yf3723 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3722 = a_p3722;
F.v9498 = F.p3722;
while ((((F.v9498 > INT64_C(1))) && ((*(yR130 *)y_deref(((void * *)(v1271).p)[y_ix1(v1271, F.v9498)]))).f_closed)) {
Y_TICK();
F.v9498 = y_range(y_sub(F.v9498, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
{ rt_int rv9502 = F.v9498;
y_use = F.yu; return rv9502; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3727_MonitorPath(void * a_p3728) {
struct yf3729 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3728 = a_p3728;
{ rt_int rv9507 = yr3350_Join(yr1061_T(y_str("&", 1)), yr2362_Path(((*(yR125 *)y_deref(F.p3728))).f_level, ((*(yR125 *)y_deref(F.p3728))).f_cname), INT64_C(0));
y_use = F.yu; return rv9507; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3733_EnterMonitor(void * a_p3734) {
struct yf3735 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3734 = a_p3734;
if ((((*(yR125 *)y_deref(F.p3734))).f_kind == v876)) {
((*(yR125 *)y_deref(F.p3734))).f_monitor = v1802;
}
if ((((*(yR125 *)y_deref(F.p3734))).f_monitor == ((void *)0))) {
y_use = F.yu; return;
}
yr1132_Emit(yr3350_Join(yr1061_T(y_str("y_mon_enter(", 12)), yr3727_MonitorPath(((*(yR125 *)y_deref(F.p3734))).f_monitor), yr1061_T(y_str(");", 2))));
F.v9511 = yr1200_Fresh(y_str("mf", 2));
v1654 = 1;
yr1132_Emit(yr3350_Join(yr1061_T(y_str("rt_frame ", 9)), F.v9511, yr1061_T(y_str(";", 1))));
yr1026_SB();
yr1037_SA(y_str("if (!RT_TRY(", 12));
yr1044_ST(F.v9511);
yr1037_SA(y_str(")) { RT_POP(", 12));
yr1044_ST(F.v9511);
yr1037_SA(y_str("); ", 3));
if ((((*(yR125 *)y_deref(F.p3734))).f_kind == v885)) {
yr1037_SA(y_str("y_mon_drop(", 11));
} else {
yr1037_SA(y_str("y_mon_leave(", 12));
}
yr1044_ST(yr3727_MonitorPath(((*(yR125 *)y_deref(F.p3734))).f_monitor));
yr1037_SA(y_str("); rt_raise(rt_xcur); }", 23));
yr1132_Emit(yr1056_SE());
v1550 = y_range(y_add(v1550, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
((rt_int *)(v1548).p)[y_ix1(v1548, v1550)] = F.v9511;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3739_LeaveMonitor(void) {
struct yf3740 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
if ((v1625 == ((void *)0))) {
y_use = F.yu; return;
}
if ((((*(yR125 *)y_deref(v1625))).f_monitor == ((void *)0))) {
y_use = F.yu; return;
}
if ((((*(yR125 *)y_deref(v1625))).f_kind == v885)) {
yr1132_Emit(yr3350_Join(yr1061_T(y_str("y_mon_drop(", 11)), yr3727_MonitorPath(((*(yR125 *)y_deref(v1625))).f_monitor), yr1061_T(y_str(");", 2))));
} else {
yr1132_Emit(yr3350_Join(yr1061_T(y_str("y_mon_leave(", 12)), yr3727_MonitorPath(((*(yR125 *)y_deref(v1625))).f_monitor), yr1061_T(y_str(");", 2))));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3744_TerminateStatement(void * a_p3745) {
struct yf3746 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3745 = a_p3745;
if ((((v1625 == ((void *)0))) || ((!(((*(yR125 *)y_deref(v1625))).f_kind == v885))))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3745))).f_line, y_str("TERMINATE_PROCESS ends a process (IX.A.7)", 41));
}
yr3709_AwaitProcesses();
yr3739_LeaveMonitor();
yr3238_PopTo(v1553);
yr1138_EmitS(y_str("y_use = F.yu; return;", 21));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3750_DeclareSignal(void * a_p3751, rt_int a_p3752) {
struct yf3753 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3751 = a_p3751;
F.p3752 = a_p3752;
if ((v1802 == ((void *)0))) {
yr1178_FailS(F.p3752, y_str("signal variables are declared in a monitor (X.E.4)", 50));
}
((*(yR125 *)y_deref(F.p3751))).f_rep = yr2401_CopyRep(((*(yR125 *)y_deref(F.p3751))).f_rep);
((*(yR110 *)y_deref(((*(yR125 *)y_deref(F.p3751))).f_rep))).f_monitor = v1802;
yr1132_Emit(yr3350_Join(yr1061_T(y_str("y_sig_init(&", 12)), yr2382_SymPath(F.p3751), yr3350_Join(yr1061_T(y_str(", ", 2)), yr3727_MonitorPath(v1802), yr1061_T(y_str(");", 2)))));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3757_DeclareSignalArray(void * a_p3758, rt_int a_p3759) {
struct yf3760 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3758 = a_p3758;
F.p3759 = a_p3759;
if ((v1802 == ((void *)0))) {
yr1178_FailS(F.p3759, y_str("signal variables are declared in a monitor (X.E.4)", 50));
}
yr1132_Emit(yr3350_Join(yr1061_T(y_str("y_sig_init_all(", 15)), yr2462_DescOf(((*(yR125 *)y_deref(F.p3758))).f_rep), yr3350_Join(yr1061_T(y_str(", &", 3)), yr2382_SymPath(F.p3758), yr3350_Join(yr1061_T(y_str(", ", 2)), yr3727_MonitorPath(v1802), yr1061_T(y_str(");", 2))))));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3764_DeviceSignal(void * a_p3765, void * a_p3766) {
struct yf3767 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3765 = a_p3765;
F.p3766 = a_p3766;
yr2825_Manifest(F.p3766, &F.v9554, &F.v9556);
if ((!F.v9554)) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3766))).f_line, y_str("an AT location is a manifest constant (XIV.VII)", 47));
}
yr1026_SB();
yr1037_SA(y_str("y_device(&", 10));
yr1044_ST(yr2382_SymPath(F.p3765));
yr1037_SA(y_str(", ", 2));
yr1050_SI(F.v9556);
yr1037_SA(y_str(");", 2));
F.v9558 = yr1056_SE();
yr1132_Emit(F.v9558);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3771_Arg(void * a_p3772, rt_int a_p3773) {
struct yf3774 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3772 = a_p3772;
F.p3773 = a_p3773;
F.v9567 = ((*(yR105 *)y_deref(F.p3772))).f_a;
F.v9569 = INT64_C(1);
while ((((!(F.v9567 == ((void *)0)))) && ((F.v9569 < F.p3773)))) {
Y_TICK();
F.v9567 = ((*(yR105 *)y_deref(F.v9567))).f_next;
F.v9569 = y_range(y_add(F.v9569, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v9567 == ((void *)0))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3772))).f_line, ((*(yR105 *)y_deref(F.p3772))).f_name, y_str(": too few actual parameters", 27));
}
{ void * rv9574 = F.v9567;
y_use = F.yu; return rv9574; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3778_NArgs(void * a_p3779, rt_int a_p3780) {
struct yf3781 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3779 = a_p3779;
F.p3780 = a_p3780;
if ((!(yr1954_Count(((*(yR105 *)y_deref(F.p3779))).f_a) == F.p3780))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3779))).f_line, ((*(yR105 *)y_deref(F.p3779))).f_name, y_str(": the number of actual parameters is wrong", 42));
}
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3785_Call1(yarr a_p3787, rt_int a_p3788) {
struct yf3789 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3787 = a_p3787;
F.p3788 = a_p3788;
yr1026_SB();
yr1037_SA(F.p3787);
yr1037_SA(y_str("(", 1));
yr1044_ST(F.p3788);
yr1037_SA(y_str(")", 1));
{ rt_int rv9584 = yr1056_SE();
y_use = F.yu; return rv9584; }
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3793_Addr(rt_int a_p3794) {
struct yf3795 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3794 = a_p3794;
{ rt_int rv9589 = yr3350_Join(yr1061_T(y_str("&", 1)), F.p3794, INT64_C(0));
y_use = F.yu; return rv9589; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3799_StdVar(void * a_p3800, rt_int a_p3801, rt_int * a_p3802, void * * a_p3803) {
struct yf3804 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3800 = a_p3800;
F.p3801 = a_p3801;
F.p3802_o = a_p3802;
F.p3803_o = a_p3803;
yr2946_LValue(F.p3800, &F.p3802, &F.p3803);
yr3405_NoteWrite(F.p3800);
if ((((!(F.p3801 == v858))) && ((!(((*(yR110 *)y_deref(F.p3803))).f_kind == F.p3801))))) {
yr1026_SB();
yr1037_SA(y_str("a ", 2));
if ((F.p3801 == v831)) {
yr1037_SA(y_str("file", 4));
} else if ((F.p3801 == v837)) {
yr1037_SA(y_str("signal", 6));
} else if ((F.p3801 == v840)) {
yr1037_SA(y_str("SEMAPHORE", 9));
} else if ((F.p3801 == v828)) {
yr1037_SA(y_str("pointer", 7));
} else {
yr1037_SA(y_str("variable", 8));
}
yr1037_SA(y_str(" is needed here", 15));
F.v9596 = yr1056_SE();
yr1157_Fail(((*(yR105 *)y_deref(F.p3800))).f_line, F.v9596);
}
(*F.p3802_o) = F.p3802;
(*F.p3803_o) = F.p3803;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3808_NumArg(void * a_p3809, rt_int * a_p3810, void * * a_p3811) {
struct yf3812 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3809 = a_p3809;
F.p3810_o = a_p3810;
F.p3811_o = a_p3811;
yr2973_Expr(F.p3809, ((void *)0), &F.p3810, &F.p3811);
if ((!yr2413_IsNumeric(F.p3811))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3809))).f_line, y_str("a number is needed here", 23));
}
(*F.p3810_o) = F.p3810;
(*F.p3811_o) = F.p3811;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static rt_int yr3816_IntArg(void * a_p3817) {
struct yf3818 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3817 = a_p3817;
yr2973_Expr(F.p3817, v1342, &F.v9612, &F.v9614);
if ((!(((*(yR110 *)y_deref(F.v9614))).f_kind == v804))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3817))).f_line, y_str("an integer is needed here", 25));
}
{ rt_int rv9616 = F.v9612;
y_use = F.yu; return rv9616; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3822_CodeInsert(void * a_p3823) {
struct yf3824 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3823 = a_p3823;
F.v9620 = yr3771_Arg(F.p3823, INT64_C(1));
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1)}; y_desc_array(&F.yd_9646, 1, lo, hi, &y_d_int); }
y_init(&F.yd_9646, &F.v9648);
if ((!(((*(yR105 *)y_deref(F.v9620))).f_kind == v771))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3823))).f_line, y_str("a code insert takes a string literal (XIV.XI.5)", 47));
}
F.v9623 = ((*(yR105 *)y_deref(F.v9620))).f_text;
F.v9633 = ((rt_int *)(v920).p)[y_ix1(v920, F.v9623)];
yr1026_SB();
F.v9629 = INT64_C(1);
while ((F.v9629 <= F.v9633)) {
Y_TICK();
F.v9635 = yr1103_TChar(F.v9623, F.v9629);
if ((F.v9635 == 39)) {
F.v9631 = y_range(y_add(F.v9629, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((F.v9631 <= ((rt_int *)(v920).p)[y_ix1(v920, F.v9623)])) && ((!(yr1103_TChar(F.v9623, F.v9631) == 39))))) {
Y_TICK();
F.v9631 = y_range(y_add(F.v9631, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if ((F.v9631 > ((rt_int *)(v920).p)[y_ix1(v920, F.v9623)])) {
v941 = INT64_C(0);
v955 = INT64_C(0);
yr1178_FailS(((*(yR105 *)y_deref(F.p3823))).f_line, y_str("an apostrophe in a string begins a mnemonic, closed by another (IV.C)", 69));
}
F.v9625 = yr1068_Intern(y_range(y_add(((rt_int *)(v918).p)[y_ix1(v918, F.v9623)], F.v9629), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub((y_sub(F.v9631, F.v9629)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1031_SC(((unsigned char *)(v976).p)[y_ix1(v976, yr2808_CharValue(v1346, F.v9625, ((*(yR105 *)y_deref(F.p3823))).f_line))]);
F.v9629 = y_range(y_add(F.v9631, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
} else if ((F.v9635 == 36)) {
F.v9631 = y_range(y_add(F.v9629, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
while ((((F.v9631 <= F.v9633)) && ((yr1008_IsLetter(yr1103_TChar(F.v9623, F.v9631)) || yr1014_IsDigit(yr1103_TChar(F.v9623, F.v9631)))))) {
Y_TICK();
F.v9631 = y_range(y_add(F.v9631, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.v9625 = yr1068_Intern(y_range(y_add(((rt_int *)(v918).p)[y_ix1(v918, F.v9623)], F.v9629), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)), y_range(y_sub((y_sub(F.v9631, F.v9629)), INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
F.v9637 = yr2283_Find(F.v9625);
if ((F.v9637 == ((void *)0))) {
v941 = INT64_C(0);
v955 = INT64_C(0);
yr1186_FailN(((*(yR105 *)y_deref(F.p3823))).f_line, F.v9625, y_str(" in a code insert is not declared here", 38));
}
F.v9637 = yr2388_Real(F.v9637);
if ((((!(((*(yR125 *)y_deref(F.v9637))).f_kind == v861))) && ((!(((*(yR125 *)y_deref(F.v9637))).f_kind == v864))))) {
v941 = INT64_C(0);
v955 = INT64_C(0);
yr1186_FailN(((*(yR105 *)y_deref(F.p3823))).f_line, F.v9625, y_str(" in a code insert is not a variable or constant", 47));
}
yr1044_ST(yr2954_Paren(yr2382_SymPath(F.v9637)));
F.v9629 = F.v9631;
} else {
yr1031_SC(F.v9635);
F.v9629 = y_range(y_add(F.v9629, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
}
F.v9627 = yr1056_SE();
yr1132_Emit(F.v9627);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3828_ManifestScale(void * a_p3829, void * a_p3830) {
struct yf3831 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3829 = a_p3829;
F.p3830 = a_p3830;
yr2891_ManifestFix(F.p3829, &F.v9687, &F.v9689, &F.v9691);
if (((!F.v9687) || ((F.v9689 <= INT64_C(0))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3830))).f_line, ((*(yR105 *)y_deref(F.p3830))).f_name, y_str(": the scale is a positive manifest constant (XI)", 48));
}
F.v9693 = yr2401_CopyRep(v1356);
((*(yR110 *)y_deref(F.v9693))).f_abstract = 0;
yr2603_SetScale(F.v9693, F.v9689, F.v9691);
{ void * rv9697 = F.v9693;
y_use = F.yu; return rv9697; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3835_StdCall(rt_int a_p3836, void * a_p3837, rt_int a_p3838, rt_int * a_p3839, void * * a_p3840) {
struct yf3841 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3836 = a_p3836;
F.p3837 = a_p3837;
F.p3838 = a_p3838;
F.p3839_o = a_p3839;
F.p3840_o = a_p3840;
F.p3840 = v1348;
F.p3839 = yr1061_T(y_str("((void)0)", 9));
F.v9735 = (((((((((((((((((F.p3836 == v1384)) || ((F.p3836 == v1387))) || ((F.p3836 == v1390))) || ((F.p3836 == v1393))) || ((F.p3836 == v1396))) || ((F.p3836 == v1402))) || ((F.p3836 == v1411))) || ((F.p3836 == v1417))) || ((F.p3836 == v1420))) || ((F.p3836 == v1444))) || ((F.p3836 == v1447))) || ((F.p3836 == v1456))) || ((F.p3836 == v1459))) || ((F.p3836 == v1462))) || ((F.p3836 == v1465))) || ((F.p3836 == v1474)));
if ((F.p3838 && (!F.v9735))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3837))).f_line, ((*(yR105 *)y_deref(F.p3837))).f_name, y_str(" returns a value: it is called in an expression", 47));
}
if (((!F.p3838) && F.v9735)) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3837))).f_line, ((*(yR105 *)y_deref(F.p3837))).f_name, y_str(" returns no value", 17));
}
if ((((F.p3836 == v1366)) || ((F.p3836 == v1369)))) {
yr3778_NArgs(F.p3837, INT64_C(2));
yr2973_Expr(yr3771_Arg(F.p3837, INT64_C(1)), ((void *)0), &F.v9707, &F.v9717);
if ((!yr2419_IsArrayLike(F.v9717))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3837))).f_line, ((*(yR105 *)y_deref(F.p3837))).f_name, y_str(" of something that is not an array", 34));
}
F.v9709 = yr3816_IntArg(yr3771_Arg(F.p3837, INT64_C(2)));
yr2825_Manifest(yr3771_Arg(F.p3837, INT64_C(2)), &F.v9731, &F.v9729);
F.p3840 = yr3023_Unbounded(v1342);
if ((F.v9731 && ((((*(yR110 *)y_deref(F.v9717))).f_kind == v822)))) {
if ((((F.v9729 < INT64_C(1))) || ((F.v9729 > ((*(yR110 *)y_deref(F.v9717))).f_nidx)))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3837))).f_line, y_str("no such dimension", 17));
}
F.v9723 = ((*(yR110 *)y_deref(F.v9717))).f_idx;
F.lo9749 = INT64_C(2);
F.hi9750 = F.v9729;
{ rt_int hi9754 = F.hi9750;
for (rt_int i9753 = F.lo9749; i9753 <= hi9754; i9753++) { F.c_9752 = i9753; Y_TICK();
F.v9723 = ((*(yR110 *)y_deref(F.v9723))).f_link;
if (i9753 == hi9754) break;
}}
F.p3840 = F.v9723;
}
if ((F.p3836 == v1366)) {
F.p3839 = yr3029_Call2(y_str("y_low", 5), F.v9707, F.v9709);
} else {
F.p3839 = yr3029_Call2(y_str("y_high", 6), F.v9707, F.v9709);
}
(*F.p3839_o) = F.p3839;
(*F.p3840_o) = F.p3840;
y_use = F.yu; return;
}
if ((((((F.p3836 == v1372)) || ((F.p3836 == v1375))) || ((F.p3836 == v1378))) || ((F.p3836 == v1381)))) {
yr3778_NArgs(F.p3837, INT64_C(1));
yr2973_Expr(yr3771_Arg(F.p3837, INT64_C(1)), ((void *)0), &F.v9707, &F.v9717);
if ((!yr2407_IsDiscrete(F.v9717))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3837))).f_line, ((*(yR105 *)y_deref(F.p3837))).f_name, y_str(" of something that is not integer or scalar", 43));
}
if ((((((*(yR110 *)y_deref(F.v9717))).f_kind == v813)) || ((((((*(yR110 *)y_deref(F.v9717))).f_kind == v816)) && (!((*(yR110 *)y_deref(F.v9717))).f_ordered))))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3837))).f_line, ((*(yR105 *)y_deref(F.p3837))).f_name, y_str(" applies to integers, ordered enumerations and alphabets, not UNORDERED ones (XI)", 81));
}
if ((!(((*(yR110 *)y_deref(F.v9717))).f_elem == ((void *)0)))) {
F.v9717 = ((*(yR110 *)y_deref(F.v9717))).f_elem;
}
if ((((((F.p3836 == v1378)) || ((F.p3836 == v1381)))) && ((((*(yR110 *)y_deref(F.v9717))).f_kind == v804)))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3837))).f_line, y_str("FIRST and LAST apply to ordered enumerations and alphabets (XI)", 63));
}
if ((F.p3836 == v1378)) {
F.p3840 = F.v9717;
F.p3839 = yr2537_LoText(F.v9717);
} else if ((F.p3836 == v1381)) {
F.p3840 = F.v9717;
F.p3839 = yr2543_HiText(F.v9717);
} else {
F.p3840 = yr3023_Unbounded(F.v9717);
yr1026_SB();
if ((!(((*(yR110 *)y_deref(F.v9717))).f_kind == v804))) {
yr1037_SA(y_str("y_range(", 8));
}
if ((F.p3836 == v1372)) {
yr1037_SA(y_str("y_add(", 6));
} else {
yr1037_SA(y_str("y_sub(", 6));
}
yr1044_ST(F.v9707);
yr1037_SA(y_str(", 1)", 4));
if ((!(((*(yR110 *)y_deref(F.v9717))).f_kind == v804))) {
yr1037_SA(y_str(", 0, ", 5));
yr1050_SI(y_range(y_sub(((*(yR110 *)y_deref(F.v9717))).f_nlits, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807)));
yr1037_SA(y_str(")", 1));
}
F.p3839 = yr1056_SE();
}
(*F.p3839_o) = F.p3839;
(*F.p3840_o) = F.p3840;
y_use = F.yu; return;
}
if ((F.p3836 == v1384)) {
yr3778_NArgs(F.p3837, INT64_C(1));
yr3799_StdVar(yr3771_Arg(F.p3837, INT64_C(1)), v828, &F.v9707, &F.v9717);
if ((((*(yR110 *)y_deref(F.v9717))).f_elem == ((void *)0))) {
yr1186_FailN(((*(yR105 *)y_deref(F.p3837))).f_line, ((*(yR110 *)y_deref(F.v9717))).f_forward, y_str(" is not declared", 16));
}
F.v9723 = ((*(yR110 *)y_deref(F.v9717))).f_elem;
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(F.v9707);
yr1037_SA(y_str(" = y_new(sizeof(", 16));
yr1044_ST(yr2456_CType(F.v9723));
yr1037_SA(y_str("));", 3));
if (yr2431_Deep(F.v9723)) {
yr1037_SA(y_str(" y_init(", 8));
yr1044_ST(yr2462_DescOf(F.v9723));
yr1037_SA(y_str(", y_deref(", 10));
yr1044_ST(F.v9707);
yr1037_SA(y_str("));", 3));
}
yr1037_SA(y_str(" })", 3));
F.p3839 = yr1056_SE();
(*F.p3839_o) = F.p3839;
(*F.p3840_o) = F.p3840;
y_use = F.yu; return;
}
if ((F.p3836 == v1462)) {
yr3778_NArgs(F.p3837, INT64_C(1));
yr3799_StdVar(yr3771_Arg(F.p3837, INT64_C(1)), v828, &F.v9707, &F.v9717);
F.p3839 = yr3350_Join(yr1061_T(y_str("y_free_pointer((void **)&(", 26)), F.v9707, yr1061_T(y_str("))", 2)));
(*F.p3839_o) = F.p3839;
(*F.p3840_o) = F.p3840;
y_use = F.yu; return;
}
if ((F.p3836 == v1387)) {
yr3778_NArgs(F.p3837, INT64_C(3));
yr3799_StdVar(yr3771_Arg(F.p3837, INT64_C(1)), v831, &F.v9707, &F.v9717);
yr2973_Expr(yr3771_Arg(F.p3837, INT64_C(2)), v1346, &F.v9709, &F.v9719);
if ((!yr2425_IsString(F.v9719))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3837))).f_line, y_str("OPEN takes the name of the file as a string (XII.A)", 51));
}
yr2973_Expr(yr3771_Arg(F.p3837, INT64_C(3)), v1867, &F.v9711, &F.v9721);
yr2489_CheckType(((*(yR105 *)y_deref(F.p3837))).f_line, v1867, F.v9721);
yr1026_SB();
yr1037_SA(y_str("y_open(&", 8));
yr1044_ST(F.v9707);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.v9709);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.v9711);
yr1037_SA(y_str(")", 1));
F.p3839 = yr1056_SE();
(*F.p3839_o) = F.p3839;
(*F.p3840_o) = F.p3840;
y_use = F.yu; return;
}
if ((((F.p3836 == v1390)) || ((F.p3836 == v1399)))) {
yr3778_NArgs(F.p3837, INT64_C(1));
yr3799_StdVar(yr3771_Arg(F.p3837, INT64_C(1)), v831, &F.v9707, &F.v9717);
if ((F.p3836 == v1390)) {
F.p3839 = yr3785_Call1(y_str("y_close", 7), yr3793_Addr(F.v9707));
} else {
F.p3840 = v1344;
F.p3839 = yr3785_Call1(y_str("y_check_eof", 11), yr3793_Addr(F.v9707));
}
(*F.p3839_o) = F.p3839;
(*F.p3840_o) = F.p3840;
y_use = F.yu; return;
}
if ((F.p3836 == v1393)) {
yr3778_NArgs(F.p3837, INT64_C(2));
yr3799_StdVar(yr3771_Arg(F.p3837, INT64_C(1)), v831, &F.v9707, &F.v9717);
yr3799_StdVar(yr3771_Arg(F.p3837, INT64_C(2)), v858, &F.v9709, &F.v9719);
F.v9723 = ((*(yR110 *)y_deref(F.v9717))).f_elem;
yr2489_CheckType(((*(yR105 *)y_deref(F.p3837))).f_line, F.v9723, F.v9719);
if (yr2450_NonAssignable(F.v9723)) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3837))).f_line, y_str("a file holds no files, signals or semaphores (XII)", 50));
}
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(yr2456_CType(F.v9723));
yr1037_SA(y_str(" g; ", 4));
if (yr2431_Deep(F.v9723)) {
yr1037_SA(y_str("y_init(", 7));
yr1044_ST(yr2462_DescOf(F.v9723));
yr1037_SA(y_str(", &g); ", 7));
}
yr1037_SA(y_str("y_get_value(&", 13));
yr1044_ST(F.v9707);
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2462_DescOf(F.v9723));
yr1037_SA(y_str(", &g); ", 7));
yr1044_ST(yr2914_StoreText(F.v9709, F.v9719, yr1061_T(y_str("g", 1)), F.v9723, ((*(yR105 *)y_deref(F.p3837))).f_line));
yr1037_SA(y_str(" })", 3));
F.p3839 = yr1056_SE();
(*F.p3839_o) = F.p3839;
(*F.p3840_o) = F.p3840;
y_use = F.yu; return;
}
if ((F.p3836 == v1396)) {
yr3778_NArgs(F.p3837, INT64_C(2));
yr3799_StdVar(yr3771_Arg(F.p3837, INT64_C(1)), v831, &F.v9707, &F.v9717);
F.v9723 = ((*(yR110 *)y_deref(F.v9717))).f_elem;
yr2973_Expr(yr3771_Arg(F.p3837, INT64_C(2)), F.v9723, &F.v9709, &F.v9719);
yr2489_CheckType(((*(yR105 *)y_deref(F.p3837))).f_line, F.v9723, F.v9719);
if (yr2450_NonAssignable(F.v9723)) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3837))).f_line, y_str("a file holds no files, signals or semaphores (XII)", 50));
}
yr1026_SB();
yr1037_SA(y_str("({ ", 3));
yr1044_ST(yr2456_CType(F.v9723));
yr1037_SA(y_str(" pv = ", 6));
yr1044_ST(yr2906_Convert(F.v9709, F.v9723, F.v9719));
yr1037_SA(y_str("; y_put_value(&", 15));
yr1044_ST(F.v9707);
yr1037_SA(y_str(", ", 2));
yr1044_ST(yr2462_DescOf(F.v9723));
yr1037_SA(y_str(", &pv); })", 10));
F.p3839 = yr1056_SE();
(*F.p3839_o) = F.p3839;
(*F.p3840_o) = F.p3840;
y_use = F.yu; return;
}
if ((F.p3836 == v1402)) {
F.v9725 = yr1954_Count(((*(yR105 *)y_deref(F.p3837))).f_a);
if ((((F.v9725 < INT64_C(5))) || ((!((y_mod((y_sub(F.v9725, INT64_C(2))), INT64_C(3))) == INT64_C(0)))))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3837))).f_line, y_str("MOVE takes an object, an index and triples", 42));
}
yr3799_StdVar(yr3771_Arg(F.p3837, INT64_C(1)), v858, &F.v9707, &F.v9717);
if (((!((((((*(yR110 *)y_deref(F.v9717))).f_kind == v822)) || ((((*(yR110 *)y_deref(F.v9717))).f_kind == v843))))) || ((!(((*(yR110 *)y_deref(F.v9717))).f_nidx == INT64_C(1)))))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3837))).f_line, y_str("MOVE works on one-dimensional arrays", 36));
}
F.v9709 = yr3816_IntArg(yr3771_Arg(F.p3837, INT64_C(2)));
F.v9715 = yr1200_Fresh(y_str("at", 2));
yr1026_SB();
yr1037_SA(y_str("({ rt_int ", 10));
yr1044_ST(F.v9715);
yr1037_SA(y_str(" = ", 3));
yr1044_ST(F.v9709);
yr1037_SA(y_str(";", 1));
F.p3839 = yr1056_SE();
F.v9727 = INT64_C(3);
while ((F.v9727 < F.v9725)) {
Y_TICK();
yr2973_Expr(yr3771_Arg(F.p3837, F.v9727), ((*(yR110 *)y_deref(F.v9717))).f_elem, &F.v9711, &F.v9721);
if (((!yr2419_IsArrayLike(F.v9721)) || (!yr2474_SameType(((*(yR110 *)y_deref(F.v9717))).f_elem, ((*(yR110 *)y_deref(F.v9721))).f_elem)))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3837))).f_line, y_str("MOVE: the components differ in type", 35));
}
F.v9713 = yr3816_IntArg(yr3771_Arg(F.p3837, y_range(y_add(F.v9727, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
F.v9709 = yr3816_IntArg(yr3771_Arg(F.p3837, y_range(y_add(F.v9727, INT64_C(2)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807))));
yr1026_SB();
yr1044_ST(F.p3839);
yr1037_SA(y_str(" { rt_int mi = ", 15));
yr1044_ST(F.v9713);
yr1037_SA(y_str(", mj = ", 7));
yr1044_ST(F.v9709);
yr1037_SA(y_str("; y_move(&", 10));
yr1044_ST(F.v9707);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.v9715);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.v9711);
yr1037_SA(y_str(", mi, mj, ", 10));
yr1044_ST(yr2462_DescOf(((*(yR110 *)y_deref(F.v9717))).f_elem));
yr1037_SA(y_str("); if (mj >= mi) ", 17));
yr1044_ST(F.v9715);
yr1037_SA(y_str(" += mj - mi + 1; }", 18));
F.p3839 = yr1056_SE();
F.v9727 = y_range(y_add(F.v9727, INT64_C(3)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
F.p3839 = yr3350_Join(F.p3839, yr1061_T(y_str(" })", 3)), INT64_C(0));
(*F.p3839_o) = F.p3839;
(*F.p3840_o) = F.p3840;
y_use = F.yu; return;
}
if ((((F.p3836 == v1405)) || ((F.p3836 == v1408)))) {
yr3778_NArgs(F.p3837, INT64_C(2));
F.v9707 = yr3320_Cond(yr3771_Arg(F.p3837, INT64_C(1)));
F.v9709 = yr3320_Cond(yr3771_Arg(F.p3837, INT64_C(2)));
F.p3840 = v1344;
if ((F.p3836 == v1405)) {
F.p3839 = yr3038_Infix(yr2954_Paren(yr3038_Infix(F.v9707, y_str("!=", 2), yr1061_T(y_str("0", 1)))), y_str("&", 1), yr2954_Paren(yr3038_Infix(F.v9709, y_str("!=", 2), yr1061_T(y_str("0", 1)))));
} else {
F.p3839 = yr3038_Infix(yr2954_Paren(yr3038_Infix(F.v9707, y_str("!=", 2), yr1061_T(y_str("0", 1)))), y_str("|", 1), yr2954_Paren(yr3038_Infix(F.v9709, y_str("!=", 2), yr1061_T(y_str("0", 1)))));
}
(*F.p3839_o) = F.p3839;
(*F.p3840_o) = F.p3840;
y_use = F.yu; return;
}
if ((F.p3836 == v1411)) {
yr3778_NArgs(F.p3837, INT64_C(1));
F.p3839 = yr3785_Call1(y_str("rt_delay", 8), yr3816_IntArg(yr3771_Arg(F.p3837, INT64_C(1))));
(*F.p3839_o) = F.p3839;
(*F.p3840_o) = F.p3840;
y_use = F.yu; return;
}
if ((F.p3836 == v1414)) {
yr3778_NArgs(F.p3837, INT64_C(0));
F.p3840 = yr3023_Unbounded(v1342);
F.p3839 = yr1061_T(y_str("rt_time()", 9));
(*F.p3839_o) = F.p3839;
(*F.p3840_o) = F.p3840;
y_use = F.yu; return;
}
if (((((F.p3836 == v1417)) || ((F.p3836 == v1420))) || ((F.p3836 == v1423)))) {
yr3799_StdVar(yr3771_Arg(F.p3837, INT64_C(1)), v837, &F.v9707, &F.v9717);
if ((F.p3836 == v1417)) {
if ((yr1954_Count(((*(yR105 *)y_deref(F.p3837))).f_a) == INT64_C(1))) {
F.v9709 = yr1061_T(y_str("1", 1));
} else {
yr3778_NArgs(F.p3837, INT64_C(2));
F.v9709 = yr3816_IntArg(yr3771_Arg(F.p3837, INT64_C(2)));
}
F.p3839 = yr3029_Call2(y_str("y_wait", 6), yr3793_Addr(F.v9707), F.v9709);
} else {
yr3778_NArgs(F.p3837, INT64_C(1));
if ((F.p3836 == v1420)) {
F.p3839 = yr3785_Call1(y_str("y_send", 6), yr3793_Addr(F.v9707));
} else {
F.p3840 = v1344;
F.p3839 = yr3785_Call1(y_str("y_awaited", 9), yr3793_Addr(F.v9707));
}
}
(*F.p3839_o) = F.p3839;
(*F.p3840_o) = F.p3840;
y_use = F.yu; return;
}
if (((((F.p3836 == v1426)) || ((F.p3836 == v1429))) || ((F.p3836 == v1432)))) {
yr3778_NArgs(F.p3837, INT64_C(1));
yr3808_NumArg(yr3771_Arg(F.p3837, INT64_C(1)), &F.v9707, &F.v9717);
F.p3840 = yr3023_Unbounded(v1342);
if ((((*(yR110 *)y_deref(F.v9717))).f_kind == v804)) {
F.p3839 = F.v9707;
} else if ((((*(yR110 *)y_deref(F.v9717))).f_kind == v807)) {
yr1026_SB();
if ((F.p3836 == v1426)) {
yr1037_SA(y_str("y_fix_floor(", 12));
} else if ((F.p3836 == v1429)) {
yr1037_SA(y_str("y_fix_ceiling(", 14));
} else {
yr1037_SA(y_str("y_fix_near_integer(", 19));
}
yr1044_ST(F.v9707);
yr1037_SA(y_str(", INT64_C(", 10));
yr1050_SI(((*(yR110 *)y_deref(F.v9717))).f_fsn);
yr1037_SA(y_str("), INT64_C(", 11));
yr1050_SI(((*(yR110 *)y_deref(F.v9717))).f_fsd);
yr1037_SA(y_str("))", 2));
F.p3839 = yr1056_SE();
} else if ((F.p3836 == v1426)) {
F.p3839 = yr3785_Call1(y_str("y_floor", 7), F.v9707);
} else if ((F.p3836 == v1429)) {
F.p3839 = yr3785_Call1(y_str("y_ceiling", 9), F.v9707);
} else {
F.p3839 = yr3785_Call1(y_str("y_near_integer", 14), F.v9707);
}
(*F.p3839_o) = F.p3839;
(*F.p3840_o) = F.p3840;
y_use = F.yu; return;
}
if ((F.p3836 == v1438)) {
yr3778_NArgs(F.p3837, INT64_C(1));
yr3808_NumArg(yr3771_Arg(F.p3837, INT64_C(1)), &F.v9707, &F.v9717);
F.p3840 = v1354;
if ((((*(yR110 *)y_deref(F.v9717))).f_kind == v807)) {
F.p3839 = yr3062_FixToFloat(F.v9707, F.v9717);
} else {
F.p3839 = yr3350_Join(yr1061_T(y_str("((double)(", 10)), F.v9707, yr1061_T(y_str("))", 2)));
}
(*F.p3839_o) = F.p3839;
(*F.p3840_o) = F.p3840;
y_use = F.yu; return;
}
if ((F.p3836 == v1435)) {
yr3778_NArgs(F.p3837, INT64_C(2));
yr3808_NumArg(yr3771_Arg(F.p3837, INT64_C(1)), &F.v9707, &F.v9717);
F.p3840 = yr3828_ManifestScale(yr3771_Arg(F.p3837, INT64_C(2)), F.p3837);
if ((((*(yR110 *)y_deref(F.v9717))).f_kind == v810)) {
yr1026_SB();
yr1037_SA(y_str("y_fix_of_float(", 15));
yr1044_ST(F.v9707);
yr1037_SA(y_str(", INT64_C(", 10));
yr1050_SI(((*(yR110 *)y_deref(F.p3840))).f_fsn);
yr1037_SA(y_str("), INT64_C(", 11));
yr1050_SI(((*(yR110 *)y_deref(F.p3840))).f_fsd);
yr1037_SA(y_str("))", 2));
F.p3839 = yr1056_SE();
} else {
if ((((*(yR110 *)y_deref(F.v9717))).f_kind == v804)) {
F.v9721 = yr2401_CopyRep(v1356);
yr2603_SetScale(F.v9721, INT64_C(1), INT64_C(1));
F.v9707 = yr3350_Join(yr1061_T(y_str("((yfix)(", 8)), F.v9707, yr1061_T(y_str("))", 2)));
} else {
F.v9721 = F.v9717;
}
yr2586_ScaleRatio(F.v9721, F.p3840, &F.v9713, &F.v9715, &F.v9731);
yr1026_SB();
yr1037_SA(y_str("y_fix_near(", 11));
yr1044_ST(F.v9707);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.v9713);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.v9715);
yr1037_SA(y_str(")", 1));
F.p3839 = yr1056_SE();
}
(*F.p3839_o) = F.p3839;
(*F.p3840_o) = F.p3840;
y_use = F.yu; return;
}
if ((F.p3836 == v1441)) {
yr3778_NArgs(F.p3837, INT64_C(3));
yr3808_NumArg(yr3771_Arg(F.p3837, INT64_C(1)), &F.v9707, &F.v9717);
yr3808_NumArg(yr3771_Arg(F.p3837, INT64_C(2)), &F.v9709, &F.v9719);
if ((((!(((*(yR110 *)y_deref(F.v9717))).f_kind == v807))) || ((!(((*(yR110 *)y_deref(F.v9719))).f_kind == v807))))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3837))).f_line, y_str("FIXED_DIV divides fixed-point numbers (XI)", 42));
}
yr2489_CheckType(((*(yR105 *)y_deref(F.p3837))).f_line, F.v9717, F.v9719);
F.p3840 = yr3828_ManifestScale(yr3771_Arg(F.p3837, INT64_C(3)), F.p3837);
((*(yR110 *)y_deref(F.p3840))).f_tid = ((*(yR110 *)y_deref(F.v9717))).f_tid;
((*(yR110 *)y_deref(F.p3840))).f_tname = ((*(yR110 *)y_deref(F.v9717))).f_tname;
F.v9721 = yr2401_CopyRep(v1356);
yr2603_SetScale(F.v9721, yr2570_MulChk(((*(yR110 *)y_deref(F.v9719))).f_fsn, ((*(yR110 *)y_deref(F.p3840))).f_fsn, ((*(yR105 *)y_deref(F.p3837))).f_line), yr2570_MulChk(((*(yR110 *)y_deref(F.v9719))).f_fsd, ((*(yR110 *)y_deref(F.p3840))).f_fsd, ((*(yR105 *)y_deref(F.p3837))).f_line));
yr2586_ScaleRatio(F.v9717, F.v9721, &F.v9713, &F.v9715, &F.v9731);
yr1026_SB();
yr1037_SA(y_str("y_fix_div(", 10));
yr1044_ST(F.v9707);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.v9709);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.v9713);
yr1037_SA(y_str(", ", 2));
yr1044_ST(F.v9715);
yr1037_SA(y_str(")", 1));
F.p3839 = yr1056_SE();
(*F.p3839_o) = F.p3839;
(*F.p3840_o) = F.p3840;
y_use = F.yu; return;
}
if ((F.p3836 == v1450)) {
v1657 = y_range(y_add(v1657, INT64_C(1)), INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
}
if (((((F.p3836 == v1444)) || ((F.p3836 == v1447))) || ((F.p3836 == v1450)))) {
yr3778_NArgs(F.p3837, INT64_C(1));
yr3799_StdVar(yr3771_Arg(F.p3837, INT64_C(1)), v840, &F.v9707, &F.v9717);
if ((F.p3836 == v1444)) {
F.p3839 = yr3785_Call1(y_str("rt_region_enter", 15), yr3793_Addr(F.v9707));
} else if ((F.p3836 == v1447)) {
F.p3839 = yr3785_Call1(y_str("rt_region_leave", 15), yr3793_Addr(F.v9707));
} else {
F.p3840 = v1344;
F.p3839 = yr3785_Call1(y_str("y_cond_claim", 12), yr3793_Addr(F.v9707));
}
(*F.p3839_o) = F.p3839;
(*F.p3840_o) = F.p3840;
y_use = F.yu; return;
}
if ((F.p3836 == v1453)) {
yr3778_NArgs(F.p3837, INT64_C(0));
F.p3840 = yr3023_Unbounded(v1342);
F.p3839 = yr1061_T(y_str("y_self()", 8));
(*F.p3839_o) = F.p3839;
(*F.p3840_o) = F.p3840;
y_use = F.yu; return;
}
if ((F.p3836 == v1456)) {
yr3778_NArgs(F.p3837, INT64_C(2));
F.p3839 = yr3029_Call2(y_str("y_change_priority", 17), yr3816_IntArg(yr3771_Arg(F.p3837, INT64_C(1))), yr3816_IntArg(yr3771_Arg(F.p3837, INT64_C(2))));
(*F.p3839_o) = F.p3839;
(*F.p3840_o) = F.p3840;
y_use = F.yu; return;
}
if ((F.p3836 == v1459)) {
yr3778_NArgs(F.p3837, INT64_C(1));
F.p3839 = yr3785_Call1(y_str("y_raise_termination", 19), yr3816_IntArg(yr3771_Arg(F.p3837, INT64_C(1))));
(*F.p3839_o) = F.p3839;
(*F.p3840_o) = F.p3840;
y_use = F.yu; return;
}
if ((F.p3836 == v1465)) {
yr3778_NArgs(F.p3837, INT64_C(1));
yr3822_CodeInsert(F.p3837);
(*F.p3839_o) = F.p3839;
(*F.p3840_o) = F.p3840;
y_use = F.yu; return;
}
if ((((F.p3836 == v1468)) || ((F.p3836 == v1471)))) {
yr3778_NArgs(F.p3837, INT64_C(1));
F.v9733 = yr3771_Arg(F.p3837, INT64_C(1));
yr2973_Expr(F.v9733, ((void *)0), &F.v9707, &F.v9717);
if ((F.p3836 == v1471)) {
F.p3840 = yr3023_Unbounded(v1342);
F.p3839 = yr2773_ExtentCode(F.v9707, F.v9717);
(*F.p3839_o) = F.p3839;
(*F.p3840_o) = F.p3840;
y_use = F.yu; return;
}
F.p3840 = v1869;
if ((((*(yR110 *)y_deref(F.v9717))).f_kind == v855)) {
F.p3839 = yr3350_Join(yr1061_T(y_str("y_addr((", 8)), F.v9707, yr3350_Join(yr1061_T(y_str(").p, (", 6)), F.v9707, yr1061_T(y_str(").words)", 8))));
(*F.p3839_o) = F.p3839;
(*F.p3840_o) = F.p3840;
y_use = F.yu; return;
}
if ((((*(yR105 *)y_deref(F.v9733))).f_kind == v777)) {
F.v9705 = yr2283_Find(((*(yR105 *)y_deref(F.v9733))).f_name);
if ((!(F.v9705 == ((void *)0)))) {
if (yr2336_Resolved(F.v9705)) {
F.v9705 = yr2388_Real(F.v9705);
if ((((((((*(yR125 *)y_deref(F.v9705))).f_kind == v861)) || ((((*(yR125 *)y_deref(F.v9705))).f_kind == v864)))) && ((((*(yR125 *)y_deref(F.v9705))).f_at >= INT64_C(0))))) {
F.p3839 = yr3132_Num(((*(yR125 *)y_deref(F.v9705))).f_at);
(*F.p3839_o) = F.p3839;
(*F.p3840_o) = F.p3840;
y_use = F.yu; return;
}
}
}
}
if (((!((((((((*(yR105 *)y_deref(F.v9733))).f_kind == v777)) || ((((*(yR105 *)y_deref(F.v9733))).f_kind == v783))) || ((((*(yR105 *)y_deref(F.v9733))).f_kind == v786))) || ((((*(yR105 *)y_deref(F.v9733))).f_kind == v789))))) || ((((*(yR110 *)y_deref(F.v9717))).f_kind == v846)))) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3837))).f_line, y_str("ADDR takes a variable or constant (XIV.XI.2)", 44));
}
F.p3839 = yr3350_Join(yr1061_T(y_str("y_addr((void *)&(", 17)), F.v9707, yr3350_Join(yr1061_T(y_str("), ", 3)), yr2773_ExtentCode(F.v9707, F.v9717), yr1061_T(y_str(")", 1))));
(*F.p3839_o) = F.p3839;
(*F.p3840_o) = F.p3840;
y_use = F.yu; return;
}
if ((F.p3836 == v1474)) {
yr3778_NArgs(F.p3837, INT64_C(2));
yr3799_StdVar(yr3771_Arg(F.p3837, INT64_C(1)), v828, &F.v9707, &F.v9717);
F.v9709 = yr3816_IntArg(yr3771_Arg(F.p3837, INT64_C(2)));
F.p3839 = yr3350_Join(yr1061_T(y_str("(", 1)), F.v9707, yr3350_Join(yr1061_T(y_str(" = y_cell(y_mem_ptr(", 20)), F.v9709, yr1061_T(y_str(")))", 3))));
(*F.p3839_o) = F.p3839;
(*F.p3840_o) = F.p3840;
y_use = F.yu; return;
}
if ((F.p3836 == v1477)) {
yr1178_FailS(((*(yR105 *)y_deref(F.p3837))).f_line, y_str("MAIN_STORE_ARRAY is subscripted by an ADDRESS (XIV.VI.2)", 56));
}
yr1186_FailN(((*(yR105 *)y_deref(F.p3837))).f_line, ((*(yR105 *)y_deref(F.p3837))).f_name, y_str(" is not translated", 18));
(*F.p3839_o) = F.p3839;
(*F.p3840_o) = F.p3840;
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3845_StdRep(yarr a_p3847, void * a_p3848) {
struct yf3849 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3847 = a_p3847;
F.p3848 = a_p3848;
F.v9958 = yr2253_NewSym(v870, yr1081_N(F.p3847));
((*(yR125 *)y_deref(F.v9958))).f_rep = F.p3848;
yr2355_Define(F.v9958, INT64_C(0));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3853_StdOp(yarr a_p3855, rt_int a_p3856) {
struct yf3857 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3855 = a_p3855;
F.p3856 = a_p3856;
F.v9964 = yr2253_NewSym(v891, yr1081_N(F.p3855));
((*(yR125 *)y_deref(F.v9964))).f_mval = F.p3856;
yr2355_Define(F.v9964, INT64_C(0));
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void * yr3861_LitList(yarr a_p3863, yarr a_p3864, yarr a_p3865, rt_int a_p3866) {
struct yf3867 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3863 = a_p3863;
F.p3864 = a_p3864;
F.p3865 = a_p3865;
F.p3866 = a_p3866;
F.v9972 = ((void *)0);
F.v9974 = ((void *)0);
F.v9976 = ((void *)0);
F.v9976 = yr1939_NewNode(v669, INT64_C(0));
((*(yR105 *)y_deref(F.v9976))).f_name = yr1081_N(F.p3863);
yr1946_Link(&F.v9972, &F.v9974, F.v9976);
F.v9976 = yr1939_NewNode(v669, INT64_C(0));
((*(yR105 *)y_deref(F.v9976))).f_name = yr1081_N(F.p3864);
yr1946_Link(&F.v9972, &F.v9974, F.v9976);
if (F.p3866) {
F.v9976 = yr1939_NewNode(v669, INT64_C(0));
((*(yR105 *)y_deref(F.v9976))).f_name = yr1081_N(F.p3865);
yr1946_Link(&F.v9972, &F.v9974, F.v9976);
}
{ void * rv9980 = F.v9972;
y_use = F.yu; return rv9980; }
rt_raise(Y_X_NO_RETURN);
}
static void * yr3871_Abstract(rt_int a_p3872, yarr a_p3874) {
struct yf3875 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.p3872 = a_p3872;
F.p3874 = a_p3874;
F.v9985 = yr2394_NewRep(F.p3872, yr1081_N(F.p3874));
((*(yR110 *)y_deref(F.v9985))).f_abstract = 1;
{ void * rv9987 = F.v9985;
y_use = F.yu; return rv9987; }
rt_raise(Y_X_NO_RETURN);
}
static void yr3879_Predefine(void) {
struct yf3880 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
yr2260_OpenScope(0);
((void * *)(v1813).p)[y_ix1(v1813, v1273)] = ((void *)0);
v1342 = yr3871_Abstract(v804, y_str("INTEGER", 7));
v1356 = yr3871_Abstract(v807, y_str("FIXED", 5));
v1354 = yr3871_Abstract(v810, y_str("FLOATING", 8));
v1358 = yr2394_NewRep(v837, yr1081_N(y_str("SIGNAL", 6)));
v1360 = yr2394_NewRep(v840, yr1081_N(y_str("SEMAPHORE", 9)));
v1348 = yr2394_NewRep(v852, yr1081_N(y_str("no value", 8)));
v1362 = yr2394_NewRep(v858, yr1081_N(y_str("any", 3)));
v1344 = yr2394_NewRep(v813, yr1081_N(y_str("BOOLEAN", 7)));
((*(yR110 *)y_deref(v1344))).f_lits = yr3861_LitList(y_str("FALSE", 5), y_str("TRUE", 4), y_str("", 0), 0);
((*(yR110 *)y_deref(v1344))).f_nlits = INT64_C(2);
yr2624_SetRange(v1344, INT64_C(0), INT64_C(1));
yr2618_DefineLits(v1344);
v1346 = yr2394_NewRep(v819, yr1081_N(y_str("ASCII", 5)));
((*(yR110 *)y_deref(v1346))).f_ordered = 1;
((*(yR110 *)y_deref(v1346))).f_nlits = INT64_C(128);
yr2624_SetRange(v1346, INT64_C(0), INT64_C(127));
v1867 = yr2394_NewRep(v816, yr1081_N(y_str("OPEN_MODE", 9)));
((*(yR110 *)y_deref(v1867))).f_lits = yr3861_LitList(y_str("READ", 4), y_str("WRITE", 5), y_str("APPEND", 6), 1);
((*(yR110 *)y_deref(v1867))).f_nlits = INT64_C(3);
yr2624_SetRange(v1867, INT64_C(0), INT64_C(2));
yr2618_DefineLits(v1867);
yr3845_StdRep(y_str("INTEGER", 7), v1342);
yr3845_StdRep(y_str("FIXED", 5), v1356);
yr3845_StdRep(y_str("FLOATING", 8), v1354);
yr3845_StdRep(y_str("BOOLEAN", 7), v1344);
yr3845_StdRep(y_str("SIGNAL", 6), v1358);
yr3845_StdRep(y_str("SEMAPHORE", 9), v1360);
yr3845_StdRep(y_str("ASCII", 5), v1346);
yr3845_StdRep(y_str("STANDARD_ALPHABET", 17), v1346);
yr3845_StdRep(y_str("OPEN_MODE", 9), v1867);
v1869 = yr2394_NewRep(v804, ((*(yR110 *)y_deref(v1342))).f_tid);
((*(yR110 *)y_deref(v1869))).f_tname = yr1081_N(y_str("ADDRESS", 7));
yr2624_SetRange(v1869, INT64_C(0), INT64_C(16777215));
v1871 = yr2394_NewRep(v804, ((*(yR110 *)y_deref(v1342))).f_tid);
((*(yR110 *)y_deref(v1871))).f_tname = yr1081_N(y_str("WORD", 4));
yr2624_SetRange(v1871, INT64_C(-9223372036854775807), INT64_C(9223372036854775807));
yr3845_StdRep(y_str("ADDRESS", 7), v1869);
yr3845_StdRep(y_str("WORD", 4), v1871);
yr3853_StdOp(y_str("MAKE_POINTER", 12), v1474);
yr3853_StdOp(y_str("MAIN_STORE_ARRAY", 16), v1477);
yr3853_StdOp(y_str("LOW", 3), v1366);
yr3853_StdOp(y_str("HIGH", 4), v1369);
yr3853_StdOp(y_str("SUCC", 4), v1372);
yr3853_StdOp(y_str("PRED", 4), v1375);
yr3853_StdOp(y_str("FIRST", 5), v1378);
yr3853_StdOp(y_str("LAST", 4), v1381);
yr3853_StdOp(y_str("NEW", 3), v1384);
yr3853_StdOp(y_str("OPEN", 4), v1387);
yr3853_StdOp(y_str("CLOSE", 5), v1390);
yr3853_StdOp(y_str("GET", 3), v1393);
yr3853_StdOp(y_str("PUT", 3), v1396);
yr3853_StdOp(y_str("CHECK_EOF", 9), v1399);
yr3853_StdOp(y_str("MOVE", 4), v1402);
yr3853_StdOp(y_str("AND_LONG", 8), v1405);
yr3853_StdOp(y_str("OR_LONG", 7), v1408);
yr3853_StdOp(y_str("DELAY", 5), v1411);
yr3853_StdOp(y_str("CLOCK_TIME", 10), v1414);
yr3853_StdOp(y_str("WAIT", 4), v1417);
yr3853_StdOp(y_str("SEND", 4), v1420);
yr3853_StdOp(y_str("AWAITED", 7), v1423);
yr3853_StdOp(y_str("FLOOR", 5), v1426);
yr3853_StdOp(y_str("CEILING", 7), v1429);
yr3853_StdOp(y_str("NEAR_INTEGER", 12), v1432);
yr3853_StdOp(y_str("NEAR_FIXED", 10), v1435);
yr3853_StdOp(y_str("NEAR_FLOATING", 13), v1438);
yr3853_StdOp(y_str("FIXED_DIV", 9), v1441);
yr3853_StdOp(y_str("CLAIM", 5), v1444);
yr3853_StdOp(y_str("RELEASE", 7), v1447);
yr3853_StdOp(y_str("CONDITIONAL_CLAIM", 17), v1450);
yr3853_StdOp(y_str("PROCESS_IDENTITY", 16), v1453);
yr3853_StdOp(y_str("CHANGE_PRIORITY", 15), v1456);
yr3853_StdOp(y_str("RAISE_PROCESS_TERMINATION", 25), v1459);
yr3853_StdOp(y_str("FREE_POINTER", 12), v1462);
yr3853_StdOp(y_str("C_CODE_INSERT", 13), v1465);
yr3853_StdOp(y_str("ADDR", 4), v1468);
yr3853_StdOp(y_str("EXTENT", 6), v1471);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3884_Translate(void) {
struct yf3885 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
F.v10075 = v1873;
yr2260_OpenScope(0);
((void * *)(v1813).p)[y_ix1(v1813, v1273)] = ((void *)0);
v1279 = INT64_C(0);
((void * *)(v1302).p)[y_ix1(v1302, v1273)] = v1873;
while ((!(F.v10075 == ((void *)0)))) {
Y_TICK();
if ((((*(yR105 *)y_deref(F.v10075))).f_ival == INT64_C(0))) {
yr3685_CompileModule(F.v10075);
}
F.v10075 = ((*(yR105 *)y_deref(F.v10075))).f_next;
}
yr3648_ResolveLater(v1273);
yr3564_RunDeferred(INT64_C(0), INT64_C(0));
yr3446_CheckEffects();
yr3709_AwaitProcesses();
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void yr3889_WriteProgram(void) {
struct yf3890 F;
memset((void *)&F, 0, sizeof F);
F.yu = y_use; Y_USE((rt_int)((sizeof F + 7) / 8));
yr1117_PutS(&v990, y_str("static void y_elaborate(void) {", 31));
yr1125_Append(&v990, &v996);
yr1117_PutS(&v990, y_str("}", 1));
yr1117_PutS(&v990, y_str("int main(int argc, char **argv) {", 33));
yr1117_PutS(&v990, y_str("y_lang();", 9));
yr1117_PutS(&v990, y_str("rt_init(argc, argv);", 20));
yr1117_PutS(&v990, y_str("y_elaborate();", 14));
yr1117_PutS(&v990, y_str("rt_main_done();", 15));
yr1117_PutS(&v990, y_str("return 0;", 9));
yr1117_PutS(&v990, y_str("}", 1));
yr1151_WriteBuf(v992);
yr1145_WriteTxt(yr1061_T(y_str("#include \"paleo.h\"", 18)));
({ unsigned char pv = 10; y_put_value(&v911, &y_d_byte, &pv); });
yr1145_WriteTxt(yr1061_T(y_str("#include <math.h>", 17)));
({ unsigned char pv = 10; y_put_value(&v911, &y_d_byte, &pv); });
yr1145_WriteTxt(yr1061_T(y_str("#include <string.h>", 19)));
({ unsigned char pv = 10; y_put_value(&v911, &y_d_byte, &pv); });
yr1145_WriteTxt(yr1061_T(y_str("#include <stdlib.h>", 19)));
({ unsigned char pv = 10; y_put_value(&v911, &y_d_byte, &pv); });
yr1151_WriteBuf(v978);
yr1151_WriteBuf(v980);
yr1151_WriteBuf(v982);
yr1151_WriteBuf(v984);
yr1151_WriteBuf(v986);
yr1151_WriteBuf(v988);
yr1151_WriteBuf(v990);
y_use = F.yu; return;
rt_raise(Y_X_NO_RETURN);
}
static void y_elaborate(void) {
{ static const size_t o[] = {offsetof(yR105, f_kind), offsetof(yR105, f_line), offsetof(yR105, f_ival), offsetof(yR105, f_flag), offsetof(yR105, f_name), offsetof(yR105, f_text), offsetof(yR105, f_a), offsetof(yR105, f_b), offsetof(yR105, f_c), offsetof(yR105, f_d), offsetof(yR105, f_e), offsetof(yR105, f_next), offsetof(yR105, f_rep), offsetof(yR105, f_sym), offsetof(yR105, f_x), 0}; const ydesc **f = rt_alloc(16 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_int; f[2] = &y_d_int; f[3] = &y_d_int; f[4] = &y_d_int; f[5] = &y_d_int; f[6] = &y_d_ptr; f[7] = &y_d_ptr; f[8] = &y_d_ptr; f[9] = &y_d_ptr; f[10] = &y_d_ptr; f[11] = &y_d_ptr; f[12] = &y_d_ptr; f[13] = &y_d_ptr; f[14] = &y_d_ptr; y_desc_record(&yd_106, sizeof(yR105), 15, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR110, f_kind), offsetof(yR110, f_tid), offsetof(yR110, f_tname), offsetof(yR110, f_lo), offsetof(yR110, f_hi), offsetof(yR110, f_mlo), offsetof(yR110, f_mhi), offsetof(yR110, f_hasm), offsetof(yR110, f_scale), offsetof(yR110, f_prec), offsetof(yR110, f_elem), offsetof(yR110, f_idx), offsetof(yR110, f_nidx), offsetof(yR110, f_link), offsetof(yR110, f_lits), offsetof(yR110, f_nlits), offsetof(yR110, f_fields), offsetof(yR110, f_selector), offsetof(yR110, f_cname), offsetof(yR110, f_dname), offsetof(yR110, f_dlevel), offsetof(yR110, f_deep), offsetof(yR110, f_abstract), offsetof(yR110, f_opaque), offsetof(yR110, f_opaqueops), offsetof(yR110, f_ordered), offsetof(yR110, f_forward), offsetof(yR110, f_fwdscope), offsetof(yR110, f_monitor), offsetof(yR110, f_serial), offsetof(yR110, f_sig), offsetof(yR110, f_fsn), offsetof(yR110, f_fsd), offsetof(yR110, f_packed), offsetof(yR110, f_pbits), offsetof(yR110, f_align), offsetof(yR110, f_bits), 0}; const ydesc **f = rt_alloc(38 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_int; f[2] = &y_d_int; f[3] = &y_d_int; f[4] = &y_d_int; f[5] = &y_d_int; f[6] = &y_d_int; f[7] = &y_d_int; f[8] = &y_d_int; f[9] = &y_d_int; f[10] = &y_d_ptr; f[11] = &y_d_ptr; f[12] = &y_d_int; f[13] = &y_d_ptr; f[14] = &y_d_ptr; f[15] = &y_d_int; f[16] = &y_d_ptr; f[17] = &y_d_ptr; f[18] = &y_d_int; f[19] = &y_d_int; f[20] = &y_d_int; f[21] = &y_d_int; f[22] = &y_d_int; f[23] = &y_d_int; f[24] = &y_d_int; f[25] = &y_d_int; f[26] = &y_d_int; f[27] = &y_d_int; f[28] = &y_d_ptr; f[29] = &y_d_int; f[30] = &y_d_int; f[31] = &y_d_int; f[32] = &y_d_int; f[33] = &y_d_int; f[34] = &y_d_int; f[35] = &y_d_int; f[36] = &y_d_int; y_desc_record(&yd_111, sizeof(yR110), 37, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR115, f_name), offsetof(yR115, f_rep), offsetof(yR115, f_isconst), offsetof(yR115, f_variant), offsetof(yR115, f_labels), offsetof(yR115, f_next), offsetof(yR115, f_at), 0}; const ydesc **f = rt_alloc(8 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_ptr; f[2] = &y_d_int; f[3] = &y_d_int; f[4] = &y_d_ptr; f[5] = &y_d_ptr; f[6] = &y_d_int; y_desc_record(&yd_116, sizeof(yR115), 7, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR120, f_name), offsetof(yR120, f_cls), offsetof(yR120, f_rep), offsetof(yR120, f_cname), offsetof(yR120, f_next), offsetof(yR120, f_at), offsetof(yR120, f_path), 0}; const ydesc **f = rt_alloc(8 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_int; f[2] = &y_d_ptr; f[3] = &y_d_int; f[4] = &y_d_ptr; f[5] = &y_d_int; f[6] = &y_d_int; y_desc_record(&yd_121, sizeof(yR120), 7, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR125, f_kind), offsetof(yR125, f_name), offsetof(yR125, f_rep), offsetof(yR125, f_cname), offsetof(yR125, f_level), offsetof(yR125, f_byref), offsetof(yR125, f_readonly), offsetof(yR125, f_mval), offsetof(yR125, f_hasmv), offsetof(yR125, f_params), offsetof(yR125, f_nparams), offsetof(yR125, f_ret), offsetof(yR125, f_func), offsetof(yR125, f_decl), offsetof(yR125, f_depth), offsetof(yR125, f_target), offsetof(yR125, f_members), offsetof(yR125, f_mnext), offsetof(yR125, f_chain), offsetof(yR125, f_stack), offsetof(yR125, f_alt), offsetof(yR125, f_monitor), offsetof(yR125, f_serial), offsetof(yR125, f_calls), offsetof(yR125, f_writes), offsetof(yR125, f_frees), offsetof(yR125, f_seen), offsetof(yR125, f_vix), offsetof(yR125, f_at), 0}; const ydesc **f = rt_alloc(30 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_int; f[2] = &y_d_ptr; f[3] = &y_d_int; f[4] = &y_d_int; f[5] = &y_d_int; f[6] = &y_d_int; f[7] = &y_d_int; f[8] = &y_d_int; f[9] = &y_d_ptr; f[10] = &y_d_int; f[11] = &y_d_ptr; f[12] = &y_d_int; f[13] = &y_d_ptr; f[14] = &y_d_int; f[15] = &y_d_ptr; f[16] = &y_d_ptr; f[17] = &y_d_ptr; f[18] = &y_d_ptr; f[19] = &y_d_ptr; f[20] = &y_d_ptr; f[21] = &y_d_ptr; f[22] = &y_d_int; f[23] = &y_d_ptr; f[24] = &y_d_ptr; f[25] = &y_d_ptr; f[26] = &y_d_int; f[27] = &y_d_int; f[28] = &y_d_int; y_desc_record(&yd_126, sizeof(yR125), 29, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR130, f_syms), offsetof(yR130, f_closed), offsetof(yR130, f_module), offsetof(yR130, f_level), offsetof(yR130, f_deferred), offsetof(yR130, f_up), 0}; const ydesc **f = rt_alloc(7 * sizeof *f); f[0] = &y_d_ptr; f[1] = &y_d_int; f[2] = &y_d_ptr; f[3] = &y_d_int; f[4] = &y_d_ptr; f[5] = &y_d_ptr; y_desc_record(&yd_131, sizeof(yR130), 6, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR135, f_t), offsetof(yR135, f_next), 0}; const ydesc **f = rt_alloc(3 * sizeof *f); f[0] = &y_d_int; f[1] = &y_d_ptr; y_desc_record(&yd_136, sizeof(yR135), 2, o, (const ydesc *const *)f); }
{ static const size_t o[] = {offsetof(yR140, f_head), offsetof(yR140, f_tail), 0}; const ydesc **f = rt_alloc(3 * sizeof *f); f[0] = &y_d_ptr; f[1] = &y_d_ptr; y_desc_record(&yd_141, sizeof(yR140), 2, o, (const ydesc *const *)f); }
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(64000000)}; y_desc_array(&yd_151, 1, lo, hi, &y_d_byte); }
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4000000)}; y_desc_array(&yd_161, 1, lo, hi, &y_d_int); }
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(2000000)}; y_desc_array(&yd_171, 1, lo, hi, &y_d_int); }
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(262143)}; y_desc_array(&yd_181, 1, lo, hi, &y_d_int); }
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(8191)}; y_desc_array(&yd_191, 1, lo, hi, &y_d_ptr); }
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(64)}; y_desc_array(&yd_201, 1, lo, hi, &y_d_ptr); }
v204 = INT64_C(0);
v207 = INT64_C(1);
v210 = INT64_C(2);
v213 = INT64_C(3);
v216 = INT64_C(4);
v219 = INT64_C(5);
v222 = INT64_C(6);
v225 = INT64_C(7);
v228 = INT64_C(8);
v231 = INT64_C(1);
v234 = INT64_C(2);
v237 = INT64_C(3);
v240 = INT64_C(4);
v243 = INT64_C(5);
v246 = INT64_C(6);
v249 = INT64_C(7);
v252 = INT64_C(8);
v255 = INT64_C(9);
v258 = INT64_C(10);
v261 = INT64_C(11);
v264 = INT64_C(12);
v267 = INT64_C(13);
v270 = INT64_C(14);
v273 = INT64_C(15);
v276 = INT64_C(16);
v279 = INT64_C(17);
v282 = INT64_C(18);
v285 = INT64_C(19);
v288 = INT64_C(20);
v291 = INT64_C(21);
v294 = INT64_C(22);
v297 = INT64_C(23);
v300 = INT64_C(24);
v303 = INT64_C(25);
v306 = INT64_C(26);
v309 = INT64_C(27);
v312 = INT64_C(28);
v315 = INT64_C(29);
v318 = INT64_C(30);
v321 = INT64_C(31);
v324 = INT64_C(32);
v327 = INT64_C(33);
v330 = INT64_C(34);
v333 = INT64_C(35);
v336 = INT64_C(36);
v339 = INT64_C(37);
v342 = INT64_C(38);
v345 = INT64_C(39);
v348 = INT64_C(40);
v351 = INT64_C(41);
v354 = INT64_C(42);
v357 = INT64_C(43);
v360 = INT64_C(44);
v363 = INT64_C(45);
v366 = INT64_C(46);
v369 = INT64_C(47);
v372 = INT64_C(48);
v375 = INT64_C(49);
v378 = INT64_C(50);
v381 = INT64_C(51);
v384 = INT64_C(52);
v387 = INT64_C(53);
v390 = INT64_C(54);
v393 = INT64_C(55);
v396 = INT64_C(56);
v399 = INT64_C(57);
v402 = INT64_C(58);
v405 = INT64_C(59);
v408 = INT64_C(60);
v411 = INT64_C(61);
v414 = INT64_C(62);
v417 = INT64_C(63);
v420 = INT64_C(64);
v423 = INT64_C(65);
v426 = INT64_C(66);
v429 = INT64_C(67);
v432 = INT64_C(68);
v435 = INT64_C(69);
v438 = INT64_C(70);
v441 = INT64_C(71);
v444 = INT64_C(72);
v447 = INT64_C(73);
v450 = INT64_C(74);
v453 = INT64_C(75);
v456 = INT64_C(76);
v459 = INT64_C(77);
v462 = INT64_C(78);
v465 = INT64_C(79);
v468 = INT64_C(80);
v471 = INT64_C(81);
v474 = INT64_C(82);
v477 = INT64_C(83);
v480 = INT64_C(84);
v483 = INT64_C(85);
v486 = INT64_C(86);
v489 = INT64_C(87);
v492 = INT64_C(87);
v495 = INT64_C(88);
v498 = INT64_C(89);
v501 = INT64_C(90);
v504 = INT64_C(91);
v507 = INT64_C(92);
v510 = INT64_C(93);
v513 = INT64_C(94);
v516 = INT64_C(95);
v519 = INT64_C(96);
v522 = INT64_C(97);
v525 = INT64_C(98);
v528 = INT64_C(99);
v531 = INT64_C(100);
v534 = INT64_C(101);
v537 = INT64_C(102);
v540 = INT64_C(103);
v543 = INT64_C(104);
v546 = INT64_C(105);
v549 = INT64_C(106);
v552 = INT64_C(107);
v555 = INT64_C(108);
v558 = INT64_C(109);
v561 = INT64_C(110);
v564 = INT64_C(111);
v567 = INT64_C(112);
v570 = INT64_C(113);
v573 = INT64_C(114);
v576 = INT64_C(115);
v579 = INT64_C(116);
v582 = INT64_C(117);
v585 = INT64_C(118);
v588 = INT64_C(119);
v591 = INT64_C(120);
v594 = INT64_C(121);
v597 = INT64_C(122);
v600 = INT64_C(123);
v603 = INT64_C(124);
v606 = INT64_C(125);
v609 = INT64_C(126);
v612 = INT64_C(127);
v615 = INT64_C(128);
v618 = INT64_C(129);
v621 = INT64_C(129);
v624 = INT64_C(1);
v627 = INT64_C(2);
v630 = INT64_C(3);
v633 = INT64_C(4);
v636 = INT64_C(5);
v639 = INT64_C(6);
v642 = INT64_C(7);
v645 = INT64_C(8);
v648 = INT64_C(9);
v651 = INT64_C(10);
v654 = INT64_C(11);
v657 = INT64_C(12);
v660 = INT64_C(13);
v663 = INT64_C(14);
v666 = INT64_C(15);
v669 = INT64_C(16);
v672 = INT64_C(20);
v675 = INT64_C(21);
v678 = INT64_C(22);
v681 = INT64_C(23);
v684 = INT64_C(24);
v687 = INT64_C(25);
v690 = INT64_C(26);
v693 = INT64_C(27);
v696 = INT64_C(28);
v699 = INT64_C(29);
v702 = INT64_C(30);
v705 = INT64_C(31);
v708 = INT64_C(32);
v711 = INT64_C(33);
v714 = INT64_C(40);
v717 = INT64_C(41);
v720 = INT64_C(42);
v723 = INT64_C(43);
v726 = INT64_C(44);
v729 = INT64_C(45);
v732 = INT64_C(46);
v735 = INT64_C(47);
v738 = INT64_C(48);
v741 = INT64_C(49);
v744 = INT64_C(50);
v747 = INT64_C(51);
v750 = INT64_C(52);
v753 = INT64_C(53);
v756 = INT64_C(54);
v759 = INT64_C(60);
v762 = INT64_C(61);
v765 = INT64_C(62);
v768 = INT64_C(63);
v771 = INT64_C(64);
v774 = INT64_C(65);
v777 = INT64_C(66);
v780 = INT64_C(67);
v783 = INT64_C(68);
v786 = INT64_C(69);
v789 = INT64_C(70);
v792 = INT64_C(71);
v795 = INT64_C(72);
v798 = INT64_C(73);
v801 = INT64_C(74);
v804 = INT64_C(1);
v807 = INT64_C(2);
v810 = INT64_C(3);
v813 = INT64_C(4);
v816 = INT64_C(5);
v819 = INT64_C(6);
v822 = INT64_C(7);
v825 = INT64_C(8);
v828 = INT64_C(9);
v831 = INT64_C(10);
v834 = INT64_C(11);
v837 = INT64_C(12);
v840 = INT64_C(13);
v843 = INT64_C(14);
v846 = INT64_C(15);
v849 = INT64_C(16);
v852 = INT64_C(17);
v855 = INT64_C(18);
v858 = INT64_C(19);
v861 = INT64_C(1);
v864 = INT64_C(2);
v867 = INT64_C(3);
v870 = INT64_C(4);
v873 = INT64_C(5);
v876 = INT64_C(6);
v879 = INT64_C(7);
v882 = INT64_C(8);
v885 = INT64_C(9);
v888 = INT64_C(10);
v891 = INT64_C(11);
v894 = INT64_C(12);
v897 = INT64_C(1);
v900 = INT64_C(2);
v903 = INT64_C(3);
v906 = INT64_C(9223372036854775807);
y_init(&yd_151, &v913);
v915 = INT64_C(0);
y_init(&yd_161, &v918);
y_init(&yd_161, &v920);
v922 = INT64_C(0);
y_init(&yd_181, &v925);
v927 = 0;
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4000000)}; y_desc_array(&yd_937, 1, lo, hi, &y_d_byte); }
y_init(&yd_937, &v939);
v941 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4000)}; y_desc_array(&yd_951, 1, lo, hi, &y_d_int); }
y_init(&yd_951, &v953);
v955 = INT64_C(0);
v958 = INT64_C(0);
{ rt_int lo[1] = {0}, hi[1] = {127}; y_desc_array(&yd_963, 1, lo, hi, &y_d_int); }
y_init(&yd_963, &v965);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(127)}; y_desc_array(&yd_974, 1, lo, hi, &y_d_byte); }
y_init(&yd_974, &v976);
v1000 = INT64_C(0);
y_init(&yd_171, &v1207);
y_init(&yd_171, &v1209);
y_init(&yd_171, &v1211);
v1213 = INT64_C(0);
v1216 = INT64_C(0);
v1219 = INT64_C(0);
v1222 = INT64_C(0);
v1225 = INT64_C(1);
v1228 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(200000)}; y_desc_array(&yd_1238, 1, lo, hi, &y_d_int); }
y_init(&yd_1238, &v1240);
y_init(&yd_1238, &v1242);
y_init(&yd_1238, &v1244);
v1246 = INT64_C(0);
v1249 = INT64_C(1);
v1252 = ((void *)0);
v1254 = INT64_C(0);
v1257 = INT64_C(0);
y_init(&yd_191, &v1260);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1269, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1269, &v1271);
v1273 = INT64_C(-1);
v1276 = INT64_C(0);
v1279 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1289, 1, lo, hi, &y_d_int); }
y_init(&yd_1289, &v1291);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1300, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1300, &v1302);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1311, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1311, &v1313);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1322, 1, lo, hi, &y_d_int); }
y_init(&yd_1322, &v1324);
y_init(&yd_1322, &v1326);
v1328 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(200000)}; y_desc_array(&yd_1338, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1338, &v1340);
v1364 = ((void *)0);
v1366 = INT64_C(1);
v1369 = INT64_C(2);
v1372 = INT64_C(3);
v1375 = INT64_C(4);
v1378 = INT64_C(5);
v1381 = INT64_C(6);
v1384 = INT64_C(7);
v1387 = INT64_C(8);
v1390 = INT64_C(9);
v1393 = INT64_C(10);
v1396 = INT64_C(11);
v1399 = INT64_C(12);
v1402 = INT64_C(13);
v1405 = INT64_C(14);
v1408 = INT64_C(15);
v1411 = INT64_C(16);
v1414 = INT64_C(17);
v1417 = INT64_C(18);
v1420 = INT64_C(19);
v1423 = INT64_C(20);
v1426 = INT64_C(21);
v1429 = INT64_C(22);
v1432 = INT64_C(23);
v1435 = INT64_C(24);
v1438 = INT64_C(25);
v1441 = INT64_C(26);
v1444 = INT64_C(27);
v1447 = INT64_C(28);
v1450 = INT64_C(29);
v1453 = INT64_C(30);
v1456 = INT64_C(31);
v1459 = INT64_C(32);
v1462 = INT64_C(33);
v1465 = INT64_C(34);
v1468 = INT64_C(35);
v1471 = INT64_C(36);
v1474 = INT64_C(37);
v1477 = INT64_C(38);
v1480 = INT64_C(1);
v1483 = INT64_C(2);
v1486 = INT64_C(4);
v1489 = INT64_C(1);
v1492 = INT64_C(2);
v1495 = INT64_C(3);
v1498 = INT64_C(0);
v1501 = ((void *)0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1510, 1, lo, hi, &y_d_int); }
y_init(&yd_1510, &v1512);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1521, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1521, &v1523);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1532, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1532, &v1534);
v1536 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1546, 1, lo, hi, &y_d_int); }
y_init(&yd_1546, &v1548);
v1550 = INT64_C(0);
v1553 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1563, 1, lo, hi, &y_d_int); }
y_init(&yd_1563, &v1565);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1574, 1, lo, hi, &y_d_int); }
y_init(&yd_1574, &v1576);
v1578 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1588, 1, lo, hi, &y_d_int); }
y_init(&yd_1588, &v1590);
v1592 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1602, 1, lo, hi, &y_d_int); }
y_init(&yd_1602, &v1604);
y_init(&yd_1602, &v1606);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1615, 1, lo, hi, &y_d_int); }
y_init(&yd_1615, &v1617);
v1619 = INT64_C(0);
v1622 = INT64_C(0);
v1625 = ((void *)0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(1000)}; y_desc_array(&yd_1634, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1634, &v1636);
y_init(&yd_1634, &v1638);
v1640 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1650, 1, lo, hi, &y_d_int); }
y_init(&yd_1650, &v1652);
v1654 = 0;
v1657 = INT64_C(0);
v1660 = INT64_C(0);
v1663 = INT64_C(0);
v1666 = ((void *)0);
v1668 = ((void *)0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1677, 1, lo, hi, &y_d_int); }
y_init(&yd_1677, &v1679);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(4096)}; y_desc_array(&yd_1688, 1, lo, hi, &y_d_int); }
y_init(&yd_1688, &v1690);
v1692 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1702, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1702, &v1704);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1713, 1, lo, hi, &y_d_int); }
y_init(&yd_1713, &v1715);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1724, 1, lo, hi, &y_d_int); }
y_init(&yd_1724, &v1726);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1735, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1735, &v1737);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1746, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1746, &v1748);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1757, 1, lo, hi, &y_d_int); }
y_init(&yd_1757, &v1759);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1768, 1, lo, hi, &y_d_int); }
y_init(&yd_1768, &v1770);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(20000)}; y_desc_array(&yd_1779, 1, lo, hi, &y_d_int); }
y_init(&yd_1779, &v1781);
y_init(&yd_1779, &v1783);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(100000)}; y_desc_array(&yd_1792, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1792, &v1794);
v1796 = INT64_C(0);
v1799 = INT64_C(0);
v1802 = ((void *)0);
{ rt_int lo[1] = {INT64_C(0)}, hi[1] = {INT64_C(400)}; y_desc_array(&yd_1811, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1811, &v1813);
v1815 = INT64_C(0);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(10000)}; y_desc_array(&yd_1825, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1825, &v1827);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(10000)}; y_desc_array(&yd_1836, 1, lo, hi, &y_d_int); }
y_init(&yd_1836, &v1838);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(10000)}; y_desc_array(&yd_1847, 1, lo, hi, &y_d_ptr); }
y_init(&yd_1847, &v1849);
{ rt_int lo[1] = {INT64_C(1)}, hi[1] = {INT64_C(10000)}; y_desc_array(&yd_1858, 1, lo, hi, &y_d_int); }
y_init(&yd_1858, &v1860);
y_init(&yd_1858, &v1862);
v1864 = INT64_C(0);
/* yellowc */
yr1003_InitChars();
yr1875_InitWords();
v1254 = yr1081_N(y_str("FROM", 4));
v1257 = yr1081_N(y_str("DIMENSION", 9));
v1498 = yr1061_T(y_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP DEL SQ DQ ", 128));
y_open(&v911, y_str("OUTPUT", 6), 1);
y_open(&v994, y_str("ERROR", 5), 1);
yr1880_ReadSource();
yr1934_Lex();
v1873 = yr2248_ParseProgram();
yr3879_Predefine();
yr3884_Translate();
yr3889_WriteProgram();
y_close(&v911);
}
int main(int argc, char **argv) {
y_lang();
rt_init(argc, argv);
y_elaborate();
rt_main_done();
return 0;
}
